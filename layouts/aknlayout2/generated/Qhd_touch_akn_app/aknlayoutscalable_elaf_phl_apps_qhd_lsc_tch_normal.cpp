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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000eefb };

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
0x01b5,	// (0x0000f0b0) Screen

0x01c1,	// (0x0000f0bc) application_window

0x01fd,	// (0x0000f0f8) area_bottom_pane_ParamLimits

0x01fd,	// (0x0000f0f8) area_bottom_pane

0x0236,	// (0x0000f131) area_top_pane_ParamLimits

0x0236,	// (0x0000f131) area_top_pane

0x9534,	// (0x0001842f) call_video_uplink_pane_ParamLimits

0x9534,	// (0x0001842f) call_video_uplink_pane

0x02c4,	// (0x0000f1bf) main_pane_ParamLimits

0x02c4,	// (0x0000f1bf) main_pane

0xbf3b,	// (0x0001ae36) context_pane

0x38cc,	// (0x000127c7) navi_pane

0x38fe,	// (0x000127f9) popup_cale_events_window_ParamLimits

0x38fe,	// (0x000127f9) popup_cale_events_window

0xbf4e,	// (0x0001ae49) popup_mup_playback_window

0x3916,	// (0x00012811) signal_pane

0x9cb5,	// (0x00018bb0) main_browser_pane

0xa9fe,	// (0x000198f9) main_burst_pane

0x362c,	// (0x00012527) main_calc_pane

0xbecd,	// (0x0001adc8) main_cale_day_pane

0x091a,	// (0x0000f815) main_cale_month_pane

0xbecd,	// (0x0001adc8) main_cale_week_pane

0xa9fe,	// (0x000198f9) main_call_pane

0x9973,	// (0x0001886e) main_call_poc_pane

0xa9fe,	// (0x000198f9) main_camera_pane

0xa9fe,	// (0x000198f9) main_chi_dic_pane

0xa77b,	// (0x00019676) main_clock_pane

0x9973,	// (0x0001886e) main_fmradio_pane

0xa9fe,	// (0x000198f9) main_graph_messa_pane

0x9973,	// (0x0001886e) main_help_pane

0x9cb5,	// (0x00018bb0) main_im_pane

0x9bce,	// (0x00018ac9) main_image_pane_ParamLimits

0x9bce,	// (0x00018ac9) main_image_pane

0x9973,	// (0x0001886e) main_location2_pane

0xa9fe,	// (0x000198f9) main_location_pane

0x9bce,	// (0x00018ac9) main_messa_pane

0x9973,	// (0x0001886e) main_mp2_pane

0xa9fe,	// (0x000198f9) main_mp_pane

0x9973,	// (0x0001886e) main_msg_pane

0x9973,	// (0x0001886e) main_mup_eq_pane

0x9973,	// (0x0001886e) main_mup_pane

0x9cb5,	// (0x00018bb0) main_notes_pane

0x9973,	// (0x0001886e) main_pec_pane

0x9973,	// (0x0001886e) main_phob_pane

0x9973,	// (0x0001886e) main_pinb_pane

0x9973,	// (0x0001886e) main_postcard_pane

0x9973,	// (0x0001886e) main_qdial_pane

0xa9fe,	// (0x000198f9) main_skin_pane

0x9973,	// (0x0001886e) main_smil2_pane

0xa9fe,	// (0x000198f9) main_smil_pane

0xa9fe,	// (0x000198f9) main_video_pane

0xa9fe,	// (0x000198f9) main_video_tele_pane

0x9bce,	// (0x00018ac9) main_viewer_pane_ParamLimits

0x9bce,	// (0x00018ac9) main_viewer_pane

0xa9fe,	// (0x000198f9) main_vorec_pane

0x3680,	// (0x0001257b) popup_blid_sat_info_window_ParamLimits

0x3680,	// (0x0001257b) popup_blid_sat_info_window

0x36d8,	// (0x000125d3) popup_dyc_status_message_window_ParamLimits

0x36d8,	// (0x000125d3) popup_dyc_status_message_window

0x36f2,	// (0x000125ed) popup_grid_large_graphic_window_ParamLimits

0x36f2,	// (0x000125ed) popup_grid_large_graphic_window

0x37ae,	// (0x000126a9) popup_loc_request_window_ParamLimits

0x37ae,	// (0x000126a9) popup_loc_request_window

0x38a4,	// (0x0001279f) popup_wml_address_window_ParamLimits

0x38a4,	// (0x0001279f) popup_wml_address_window

0x3466,	// (0x00012361) call_muted_g1

0x311b,	// (0x00012016) popup_call_audio_conf_window_ParamLimits

0x311b,	// (0x00012016) popup_call_audio_conf_window

0x347a,	// (0x00012375) popup_call_audio_first_window_ParamLimits

0x347a,	// (0x00012375) popup_call_audio_first_window

0x34f0,	// (0x000123eb) popup_call_audio_in_window_ParamLimits

0x34f0,	// (0x000123eb) popup_call_audio_in_window

0x352c,	// (0x00012427) popup_call_audio_out_window_ParamLimits

0x352c,	// (0x00012427) popup_call_audio_out_window

0x3566,	// (0x00012461) popup_call_audio_second_window_ParamLimits

0x3566,	// (0x00012461) popup_call_audio_second_window

0x35bc,	// (0x000124b7) popup_call_audio_wait_window_ParamLimits

0x35bc,	// (0x000124b7) popup_call_audio_wait_window

0x35f1,	// (0x000124ec) popup_number_entry_window_ParamLimits

0x35f1,	// (0x000124ec) popup_number_entry_window

0x9560,	// (0x0001845b) bg_popup_call_pane_cp05_ParamLimits

0x9560,	// (0x0001845b) bg_popup_call_pane_cp05

0x9580,	// (0x0001847b) popup_number_entry_window_t1

0x9593,	// (0x0001848e) popup_number_entry_window_t2

0x95a5,	// (0x000184a0) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0001dfc1) popup_number_entry_window_t

0x95b7,	// (0x000184b2) text_title_cp2

0x95ca,	// (0x000184c5) bg_popup_call_pane_cp_ParamLimits

0x95ca,	// (0x000184c5) bg_popup_call_pane_cp

0x95d8,	// (0x000184d3) call_thumbnail_pane

0x95e0,	// (0x000184db) popup_call_audio_in_window_g1_ParamLimits

0x95e0,	// (0x000184db) popup_call_audio_in_window_g1

0x95ec,	// (0x000184e7) popup_call_audio_in_window_g2_ParamLimits

0x95ec,	// (0x000184e7) popup_call_audio_in_window_g2

0x95f8,	// (0x000184f3) popup_call_audio_in_window_g3_ParamLimits

0x95f8,	// (0x000184f3) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0001dfca) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0001dfca) popup_call_audio_in_window_g

0x9604,	// (0x000184ff) popup_call_audio_in_window_t1_ParamLimits

0x9604,	// (0x000184ff) popup_call_audio_in_window_t1

0x9620,	// (0x0001851b) popup_call_audio_in_window_t2_ParamLimits

0x9620,	// (0x0001851b) popup_call_audio_in_window_t2

0x963c,	// (0x00018537) popup_call_audio_in_window_t3_ParamLimits

0x963c,	// (0x00018537) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0001dfd1) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0001dfd1) popup_call_audio_in_window_t

0x95ca,	// (0x000184c5) bg_popup_call_pane_cp01_ParamLimits

0x95ca,	// (0x000184c5) bg_popup_call_pane_cp01

0x95d8,	// (0x000184d3) call_thumbnail_pane_cp02

0x964f,	// (0x0001854a) call_type_pane_cp022

0x9657,	// (0x00018552) popup_call_audio_out_window_g1_ParamLimits

0x9657,	// (0x00018552) popup_call_audio_out_window_g1

0x9669,	// (0x00018564) popup_call_audio_out_window_g2_ParamLimits

0x9669,	// (0x00018564) popup_call_audio_out_window_g2

0x9675,	// (0x00018570) popup_call_audio_out_window_g3_ParamLimits

0x9675,	// (0x00018570) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0001dfd8) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0001dfd8) popup_call_audio_out_window_g

0x9687,	// (0x00018582) popup_call_audio_out_window_t1_ParamLimits

0x9687,	// (0x00018582) popup_call_audio_out_window_t1

0x969f,	// (0x0001859a) popup_call_audio_out_window_t2_ParamLimits

0x969f,	// (0x0001859a) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0001dfdf) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0001dfdf) popup_call_audio_out_window_t

0x96b4,	// (0x000185af) bg_popup_call_pane_ParamLimits

0x96b4,	// (0x000185af) bg_popup_call_pane

0x0480,	// (0x0000f37b) call_thumbnail_pane_cp_ParamLimits

0x0480,	// (0x0000f37b) call_thumbnail_pane_cp

0x9738,	// (0x00018633) call_type_pane_cp01_ParamLimits

0x9738,	// (0x00018633) call_type_pane_cp01

0x977c,	// (0x00018677) popup_call_audio_first_window_g1_ParamLimits

0x977c,	// (0x00018677) popup_call_audio_first_window_g1

0x97c8,	// (0x000186c3) popup_call_audio_first_window_g2_ParamLimits

0x97c8,	// (0x000186c3) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0001dfe4) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0001dfe4) popup_call_audio_first_window_g

0x980c,	// (0x00018707) popup_call_audio_first_window_t1_ParamLimits

0x980c,	// (0x00018707) popup_call_audio_first_window_t1

0x98b8,	// (0x000187b3) popup_call_audio_first_window_t4_ParamLimits

0x98b8,	// (0x000187b3) popup_call_audio_first_window_t4

0x9944,	// (0x0001883f) popup_call_audio_first_window_t5_ParamLimits

0x9944,	// (0x0001883f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0001dfe9) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0001dfe9) popup_call_audio_first_window_t

0x9973,	// (0x0001886e) bg_popup_call_pane_cp02

0x997d,	// (0x00018878) call_type_pane_cp023

0x9985,	// (0x00018880) popup_call_audio_wait_window_g1

0x998d,	// (0x00018888) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001dff0) popup_call_audio_wait_window_g

0x9995,	// (0x00018890) popup_call_audio_wait_window_t3

0x99a3,	// (0x0001889e) bg_popup_call_pane_cp03_ParamLimits

0x99a3,	// (0x0001889e) bg_popup_call_pane_cp03

0x9a03,	// (0x000188fe) call_thumbnail_pane_cp011_ParamLimits

0x9a03,	// (0x000188fe) call_thumbnail_pane_cp011

0x9a0f,	// (0x0001890a) call_type_pane_cp034_ParamLimits

0x9a0f,	// (0x0001890a) call_type_pane_cp034

0x9a4b,	// (0x00018946) popup_call_audio_second_window_g1_ParamLimits

0x9a4b,	// (0x00018946) popup_call_audio_second_window_g1

0x9a87,	// (0x00018982) popup_call_audio_second_window_g2_ParamLimits

0x9a87,	// (0x00018982) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0001dff5) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0001dff5) popup_call_audio_second_window_g

0x9ac3,	// (0x000189be) popup_call_audio_second_window_t1_ParamLimits

0x9ac3,	// (0x000189be) popup_call_audio_second_window_t1

0x9b44,	// (0x00018a3f) popup_call_audio_second_window_t2_ParamLimits

0x9b44,	// (0x00018a3f) popup_call_audio_second_window_t2

0x9b7a,	// (0x00018a75) popup_call_audio_second_window_t3_ParamLimits

0x9b7a,	// (0x00018a75) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0001dffa) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0001dffa) popup_call_audio_second_window_t

0x9973,	// (0x0001886e) bg_popup_call_pane_cp04

0x9bb0,	// (0x00018aab) list_conf_pane

0x9bb8,	// (0x00018ab3) popup_call_audio_conf_window_t1

0x9bc6,	// (0x00018ac1) call_thumbnail_pane_g1

0x9bce,	// (0x00018ac9) bg_pinb_pane_ParamLimits

0x9bce,	// (0x00018ac9) bg_pinb_pane

0x9bdc,	// (0x00018ad7) find_pinb_pane

0x9be5,	// (0x00018ae0) listscroll_pinb_pane_ParamLimits

0x9be5,	// (0x00018ae0) listscroll_pinb_pane

0x9bf4,	// (0x00018aef) pinb_bg_pane_g1

0x04a4,	// (0x0000f39f) pinb_bg_pane_g2

0x04b0,	// (0x0000f3ab) pinb_bg_pane_g3

0x04bc,	// (0x0000f3b7) pinb_bg_pane_g4

0x04c8,	// (0x0000f3c3) pinb_bg_pane_g5

0x04d4,	// (0x0000f3cf) pinb_bg_pane_g6

0x04df,	// (0x0000f3da) pinb_bg_pane_g7

0x04ea,	// (0x0000f3e5) pinb_bg_pane_g8

0x04f5,	// (0x0000f3f0) pinb_bg_pane_g9

0x04ff,	// (0x0000f3fa) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0001e001) pinb_bg_pane_g

0x051c,	// (0x0000f417) grid_pinb_pane

0x0525,	// (0x0000f420) list_pinb_pane

0x052e,	// (0x0000f429) scroll_pane_cp01_ParamLimits

0x052e,	// (0x0000f429) scroll_pane_cp01

0x9bfe,	// (0x00018af9) find_pinb_pane_g1_ParamLimits

0x9bfe,	// (0x00018af9) find_pinb_pane_g1

0x9c16,	// (0x00018b11) find_pinb_pane_t1

0x9c28,	// (0x00018b23) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0001e01b) find_pinb_pane_t

0x9c3d,	// (0x00018b38) input_focus_pane_cp01_ParamLimits

0x9c3d,	// (0x00018b38) input_focus_pane_cp01

0x0540,	// (0x0000f43b) cell_pinb_pane_ParamLimits

0x0540,	// (0x0000f43b) cell_pinb_pane

0x0569,	// (0x0000f464) cell_pinb_pane_g1_ParamLimits

0x0569,	// (0x0000f464) cell_pinb_pane_g1

0x0579,	// (0x0000f474) cell_pinb_pane_g2_ParamLimits

0x0579,	// (0x0000f474) cell_pinb_pane_g2

0x9c49,	// (0x00018b44) cell_pinb_pane_g3_ParamLimits

0x9c49,	// (0x00018b44) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0001e020) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0001e020) cell_pinb_pane_g

0x9973,	// (0x0001886e) grid_highlight_pane_cp01

0x0585,	// (0x0000f480) list_pinb_item_pane_ParamLimits

0x0585,	// (0x0000f480) list_pinb_item_pane

0x9973,	// (0x0001886e) list_highlight_pane_cp02

0x0597,	// (0x0000f492) list_pinb_item_pane_g1_ParamLimits

0x0597,	// (0x0000f492) list_pinb_item_pane_g1

0x05a4,	// (0x0000f49f) list_pinb_item_pane_g2_ParamLimits

0x05a4,	// (0x0000f49f) list_pinb_item_pane_g2

0x05b0,	// (0x0000f4ab) list_pinb_item_pane_g3_ParamLimits

0x05b0,	// (0x0000f4ab) list_pinb_item_pane_g3

0x05c1,	// (0x0000f4bc) list_pinb_item_pane_g4_ParamLimits

0x05c1,	// (0x0000f4bc) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0001e027) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0001e027) list_pinb_item_pane_g

0x05cd,	// (0x0000f4c8) list_pinb_item_pane_t1_ParamLimits

0x05cd,	// (0x0000f4c8) list_pinb_item_pane_t1

0x0602,	// (0x0000f4fd) calc_display_pane

0x062a,	// (0x0000f525) calc_paper_pane

0x064d,	// (0x0000f548) grid_calc_pane

0x9973,	// (0x0001886e) bg_list_pane_cp01

0x067b,	// (0x0000f576) clock_g1

0x0683,	// (0x0000f57e) clock_g2

0x0001,

0xf135,	// (0x0001e030) clock_g

0x068b,	// (0x0000f586) clock_t1_ParamLimits

0x068b,	// (0x0000f586) clock_t1

0x06a0,	// (0x0000f59b) clock_t2_ParamLimits

0x06a0,	// (0x0000f59b) clock_t2

0x06b2,	// (0x0000f5ad) clock_t3_ParamLimits

0x06b2,	// (0x0000f5ad) clock_t3

0x06c4,	// (0x0000f5bf) clock_t4_ParamLimits

0x06c4,	// (0x0000f5bf) clock_t4

0x06d6,	// (0x0000f5d1) clock_t5_ParamLimits

0x06d6,	// (0x0000f5d1) clock_t5

0x06eb,	// (0x0000f5e6) clock_t6_ParamLimits

0x06eb,	// (0x0000f5e6) clock_t6

0x06fd,	// (0x0000f5f8) clock_t7_ParamLimits

0x06fd,	// (0x0000f5f8) clock_t7

0x070f,	// (0x0000f60a) clock_t8_ParamLimits

0x070f,	// (0x0000f60a) clock_t8

0x0723,	// (0x0000f61e) clock_t9_ParamLimits

0x0723,	// (0x0000f61e) clock_t9

0x0008,

0xf13a,	// (0x0001e035) clock_t_ParamLimits

0xf13a,	// (0x0001e035) clock_t

0x9c5d,	// (0x00018b58) popup_clock_analogue_window_cp02

0x9c5d,	// (0x00018b58) popup_clock_digital_window_cp01

0x9c65,	// (0x00018b60) listscroll_help_pane

0x9973,	// (0x0001886e) phob_pre_status_pane

0x9c6f,	// (0x00018b6a) grid_qdial_pane

0x9bce,	// (0x00018ac9) listscroll_mce_pane

0x9bce,	// (0x00018ac9) bg_notes_pane

0x9c79,	// (0x00018b74) list_notes_pane

0x0737,	// (0x0000f632) scroll_pane_cp06

0x9c87,	// (0x00018b82) bg_calc_paper_pane

0x9c9b,	// (0x00018b96) list_calc_pane

0x9cb5,	// (0x00018bb0) bg_calc_display_pane

0x074b,	// (0x0000f646) calc_display_pane_t1

0x075d,	// (0x0000f658) calc_display_pane_t2

0x9cc1,	// (0x00018bbc) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0001e048) calc_display_pane_t

0x076f,	// (0x0000f66a) cell_calc_pane_ParamLimits

0x076f,	// (0x0000f66a) cell_calc_pane

0x9cd3,	// (0x00018bce) bg_calc_paper_pane_g1

0x9cdf,	// (0x00018bda) bg_calc_paper_pane_g2

0x9ceb,	// (0x00018be6) bg_calc_paper_pane_g3

0x9cf7,	// (0x00018bf2) bg_calc_paper_pane_g4

0x9d03,	// (0x00018bfe) bg_calc_paper_pane_g5

0x07a4,	// (0x0000f69f) bg_calc_paper_pane_g6

0x07b3,	// (0x0000f6ae) bg_calc_paper_pane_g7

0x07c2,	// (0x0000f6bd) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0001e04f) bg_calc_paper_pane_g

0x07d5,	// (0x0000f6d0) calc_bg_paper_pane_g9

0x07e8,	// (0x0000f6e3) list_calc_item_pane_ParamLimits

0x07e8,	// (0x0000f6e3) list_calc_item_pane

0x9d0f,	// (0x00018c0a) list_calc_item_pane_g1

0x9d1c,	// (0x00018c17) list_calc_item_pane_t1_ParamLimits

0x9d1c,	// (0x00018c17) list_calc_item_pane_t1

0x07fd,	// (0x0000f6f8) list_calc_item_pane_t2_ParamLimits

0x07fd,	// (0x0000f6f8) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0001e060) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0001e060) list_calc_item_pane_t

0x9d2e,	// (0x00018c29) cell_calc_pane_g1

0x9d38,	// (0x00018c33) grid_highlight_pane_cp02

0x082f,	// (0x0000f72a) bg_calc_display_pane_g1

0x0838,	// (0x0000f733) bg_calc_display_pane_g2

0x0842,	// (0x0000f73d) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0001e06a) bg_calc_display_pane_g

0x084b,	// (0x0000f746) cell_qdial_pane_ParamLimits

0x084b,	// (0x0000f746) cell_qdial_pane

0x085f,	// (0x0000f75a) cell_qdial_pane_g1_ParamLimits

0x085f,	// (0x0000f75a) cell_qdial_pane_g1

0x0875,	// (0x0000f770) cell_qdial_pane_g2_ParamLimits

0x0875,	// (0x0000f770) cell_qdial_pane_g2

0x9d5a,	// (0x00018c55) cell_qdial_pane_g3_ParamLimits

0x9d5a,	// (0x00018c55) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0001e071) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0001e071) cell_qdial_pane_g

0x089c,	// (0x0000f797) cell_qdial_pane_t1_ParamLimits

0x089c,	// (0x0000f797) cell_qdial_pane_t1

0x08b4,	// (0x0000f7af) cell_qdial_pane_t2_ParamLimits

0x08b4,	// (0x0000f7af) cell_qdial_pane_t2

0x08c7,	// (0x0000f7c2) cell_qdial_pane_t3_ParamLimits

0x08c7,	// (0x0000f7c2) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0001e07a) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0001e07a) cell_qdial_pane_t

0x9973,	// (0x0001886e) grid_highlight_pane_cp04

0x9d66,	// (0x00018c61) thumbnail_qdial_pane_ParamLimits

0x9d66,	// (0x00018c61) thumbnail_qdial_pane

0x9dc2,	// (0x00018cbd) list_help_pane

0x9dcb,	// (0x00018cc6) scroll_pane_cp02

0x08da,	// (0x0000f7d5) help_list_pane_t1_ParamLimits

0x08da,	// (0x0000f7d5) help_list_pane_t1

0x9dd4,	// (0x00018ccf) bg_notes_pane_g2

0x9ddc,	// (0x00018cd7) bg_notes_pane_g3

0x9de4,	// (0x00018cdf) notes_bg_pane_g1

0x9dec,	// (0x00018ce7) notes_bg_pane_g4

0x9df4,	// (0x00018cef) notes_bg_pane_g5

0x9dfc,	// (0x00018cf7) notes_bg_pane_g6

0x9e04,	// (0x00018cff) notes_bg_pane_g7

0x9e0c,	// (0x00018d07) notes_bg_pane_g8

0x9e14,	// (0x00018d0f) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0001e098) notes_bg_pane_g

0x08f7,	// (0x0000f7f2) list_notes_text_pane_ParamLimits

0x08f7,	// (0x0000f7f2) list_notes_text_pane

0x9e1c,	// (0x00018d17) list_notes_text_pane_g1

0x090c,	// (0x0000f807) list_notes_text_pane_t1

0x091a,	// (0x0000f815) listscroll_cale_week_pane

0x0946,	// (0x0000f841) bg_cale_heading_pane

0x9e3f,	// (0x00018d3a) bg_cale_pane_cp01

0x095e,	// (0x0000f859) cale_week_corner_pane

0x097d,	// (0x0000f878) cale_week_day_heading_pane

0x099a,	// (0x0000f895) cale_week_scroll_pane_g1

0x09ad,	// (0x0000f8a8) cale_week_scroll_pane_g2

0x09c5,	// (0x0000f8c0) cale_week_scroll_pane_g3

0x09dd,	// (0x0000f8d8) cale_week_scroll_pane_g4

0x09f5,	// (0x0000f8f0) cale_week_scroll_pane_g5

0x0a15,	// (0x0000f910) cale_week_scroll_pane_g6

0x0a35,	// (0x0000f930) cale_week_scroll_pane_g7

0x0a55,	// (0x0000f950) cale_week_scroll_pane_g8

0x0a79,	// (0x0000f974) cale_week_scroll_pane_g9

0x0a91,	// (0x0000f98c) cale_week_scroll_pane_g10

0x0aa9,	// (0x0000f9a4) cale_week_scroll_pane_g11

0x0ac1,	// (0x0000f9bc) cale_week_scroll_pane_g12

0x0ad9,	// (0x0000f9d4) cale_week_scroll_pane_g13

0x0ad9,	// (0x0000f9d4) cale_week_scroll_pane_g14

0x0ad9,	// (0x0000f9d4) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0001e0a7) cale_week_scroll_pane_g

0x0b15,	// (0x0000fa10) cale_week_time_pane

0x0b39,	// (0x0000fa34) grid_cale_week_pane

0x9e6f,	// (0x00018d6a) scroll_pane_cp08

0x0b5f,	// (0x0000fa5a) cell_cale_week_pane_ParamLimits

0x0b5f,	// (0x0000fa5a) cell_cale_week_pane

0x0bed,	// (0x0000fae8) cale_week_day_heading_pane_t1

0x0c32,	// (0x0000fb2d) cale_week_day_heading_pane_t2

0x0c7c,	// (0x0000fb77) cale_week_day_heading_pane_t3

0x0cc6,	// (0x0000fbc1) cale_week_day_heading_pane_t4

0x0d10,	// (0x0000fc0b) cale_week_day_heading_pane_t5

0x0d62,	// (0x0000fc5d) cale_week_day_heading_pane_t6

0x0db4,	// (0x0000fcaf) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0001e0c8) cale_week_day_heading_pane_t

0x9e8c,	// (0x00018d87) bg_cale_side_pane

0x0df9,	// (0x0000fcf4) cale_week_time_pane_t1

0x0e13,	// (0x0000fd0e) cale_week_time_pane_t2

0x0e2d,	// (0x0000fd28) cale_week_time_pane_t3

0x0e47,	// (0x0000fd42) cale_week_time_pane_t4

0x0e61,	// (0x0000fd5c) cale_week_time_pane_t5

0x0e7b,	// (0x0000fd76) cale_week_time_pane_t6

0x0e95,	// (0x0000fd90) cale_week_time_pane_t7

0x0eaf,	// (0x0000fdaa) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0001e0d7) cale_week_time_pane_t

0x0ecf,	// (0x0000fdca) cell_cale_week_pane_g2

0x0eee,	// (0x0000fde9) cell_cale_week_pane_g3_ParamLimits

0x0eee,	// (0x0000fde9) cell_cale_week_pane_g3

0x9e9a,	// (0x00018d95) grid_highlight_pane_cp07

0x9ea2,	// (0x00018d9d) listscroll_gms_pane

0x9eac,	// (0x00018da7) grid_gms_pane

0x9eb5,	// (0x00018db0) listscroll_gms_pane_g1

0x9ebd,	// (0x00018db8) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0001e0e8) listscroll_gms_pane_g

0x0f06,	// (0x0000fe01) scroll_pane_cp010

0x0f11,	// (0x0000fe0c) cell_gms_pane_ParamLimits

0x0f11,	// (0x0000fe0c) cell_gms_pane

0x0f24,	// (0x0000fe1f) cell_gms_pane_g1

0x9ec5,	// (0x00018dc0) cell_gms_pane_g2

0x9ecd,	// (0x00018dc8) cell_gms_pane_g3

0x9ed6,	// (0x00018dd1) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0001e0ed) cell_gms_pane_g

0x9edf,	// (0x00018dda) grid_highlight_pane_cp09

0x3410,	// (0x0001230b) phob_pre_status_pane_g1

0x3418,	// (0x00012313) phob_pre_status_pane_g2

0x3420,	// (0x0001231b) phob_pre_status_pane_g3

0x3428,	// (0x00012323) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e4dc) phob_pre_status_pane_g

0x3438,	// (0x00012333) phob_pre_status_pane_t1

0x3446,	// (0x00012341) phob_pre_status_pane_t2

0x3456,	// (0x00012351) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e4e7) phob_pre_status_pane_t

0x9973,	// (0x0001886e) bg_list_pane_cp05

0x0f34,	// (0x0000fe2f) grid_vorec_pane

0x0f3c,	// (0x0000fe37) vorec_t1

0x0f4a,	// (0x0000fe45) vorec_t2

0x0f58,	// (0x0000fe53) vorec_t3

0x0f66,	// (0x0000fe61) vorec_t4

0x9ee7,	// (0x00018de2) vorec_t5

0x0f74,	// (0x0000fe6f) vorec_t6

0x0006,

0xf1fb,	// (0x0001e0f6) vorec_t

0x0f90,	// (0x0000fe8b) wait_bar_pane_cp01

0x0f98,	// (0x0000fe93) cell_vorec_pane_ParamLimits

0x0f98,	// (0x0000fe93) cell_vorec_pane

0x9ef5,	// (0x00018df0) cell_vorec_pane_g1

0x9973,	// (0x0001886e) grid_highlight_pane_cp05

0x0fc0,	// (0x0000febb) cams_zoom_pane

0x0fcf,	// (0x0000feca) image_vga_pane

0x0fe9,	// (0x0000fee4) main_camera_pane_g1

0x0ffb,	// (0x0000fef6) main_camera_pane_g2

0x100b,	// (0x0000ff06) main_camera_pane_g3

0x101b,	// (0x0000ff16) main_camera_pane_g4

0x102b,	// (0x0000ff26) main_camera_pane_g5

0x103b,	// (0x0000ff36) main_camera_pane_g6

0x104d,	// (0x0000ff48) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001e105) main_camera_pane_g

0x105d,	// (0x0000ff58) main_camera_pane_t1

0x1073,	// (0x0000ff6e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e116) main_camera_pane_t

0x10ad,	// (0x0000ffa8) cams_zoom_pane_cp_ParamLimits

0x10ad,	// (0x0000ffa8) cams_zoom_pane_cp

0x10d5,	// (0x0000ffd0) image_cif_pane_ParamLimits

0x10d5,	// (0x0000ffd0) image_cif_pane

0x110b,	// (0x00010006) image_subqcif_pane

0x1113,	// (0x0001000e) main_video_pane_g1_ParamLimits

0x1113,	// (0x0001000e) main_video_pane_g1

0x1137,	// (0x00010032) main_video_pane_g2_ParamLimits

0x1137,	// (0x00010032) main_video_pane_g2

0x116b,	// (0x00010066) main_video_pane_g3_ParamLimits

0x116b,	// (0x00010066) main_video_pane_g3

0x1199,	// (0x00010094) main_video_pane_g4_ParamLimits

0x1199,	// (0x00010094) main_video_pane_g4

0x11c7,	// (0x000100c2) main_video_pane_g5_ParamLimits

0x11c7,	// (0x000100c2) main_video_pane_g5

0x9f0b,	// (0x00018e06) main_video_pane_g6_ParamLimits

0x9f0b,	// (0x00018e06) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e11b) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e11b) main_video_pane_g

0x11f0,	// (0x000100eb) main_video_pane_t1_ParamLimits

0x11f0,	// (0x000100eb) main_video_pane_t1

0x9f25,	// (0x00018e20) cams_zoom_pane_g1

0x9f2e,	// (0x00018e29) cams_zoom_pane_g2

0x9f37,	// (0x00018e32) cams_zoom_pane_g3

0x9f40,	// (0x00018e3b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e12a) cams_zoom_pane_g

0x124d,	// (0x00010148) grid_cams_pane

0x1267,	// (0x00010162) linegrid_cams_pane

0x127b,	// (0x00010176) cell_cams_pane_ParamLimits

0x127b,	// (0x00010176) cell_cams_pane

0x9f49,	// (0x00018e44) cams_burst_image_pane

0x9f51,	// (0x00018e4c) cell_cams_pane_g1

0x9973,	// (0x0001886e) grid_highlight_pane_cp03

0x9d2e,	// (0x00018c29) mp_bg_pane_g1

0x9973,	// (0x0001886e) bg_list_pane_cp03

0xbdf2,	// (0x0001aced) bg_mp_pane

0xbdfa,	// (0x0001acf5) grid_mp_pane

0xbe02,	// (0x0001acfd) media_player_g1

0xbe0a,	// (0x0001ad05) media_player_t1

0xbe18,	// (0x0001ad13) media_player_t2

0xbe26,	// (0x0001ad21) media_player_t3

0xbe34,	// (0x0001ad2f) media_player_t4

0xbe42,	// (0x0001ad3d) media_player_t5

0xbe50,	// (0x0001ad4b) media_player_t6

0xbe5e,	// (0x0001ad59) media_player_t7

0x0006,

0xf5cb,	// (0x0001e4c6) media_player_t

0xbe6c,	// (0x0001ad67) wait_bar_pane_cp02

0xf5b0,	// (0x0001e4ab) main_usb_pane_t

0x3407,	// (0x00012302) cell_mp_pane

0x9d2e,	// (0x00018c29) cell_mp_pane_g1

0x9973,	// (0x0001886e) grid_highlight_pane_cp06

0x9f59,	// (0x00018e54) grid_skin_colour_pane

0x9f61,	// (0x00018e5c) list_highlight_pane_cp03

0x13b2,	// (0x000102ad) skin_g1

0x9f69,	// (0x00018e64) skin_t1

0x9f78,	// (0x00018e73) skin_t2

0x0001,

0xf264,	// (0x0001e15f) skin_t

0x13ba,	// (0x000102b5) cell_skin_colour_pane_ParamLimits

0x13ba,	// (0x000102b5) cell_skin_colour_pane

0x9f86,	// (0x00018e81) cell_skin_colour_pane_g1

0x1433,	// (0x0001032e) call_video_g1_ParamLimits

0x1433,	// (0x0001032e) call_video_g1

0x144f,	// (0x0001034a) call_video_g2_ParamLimits

0x144f,	// (0x0001034a) call_video_g2

0x0001,

0xf269,	// (0x0001e164) call_video_g_ParamLimits

0xf269,	// (0x0001e164) call_video_g

0x14a1,	// (0x0001039c) call_video_uplink_pane_cp1_ParamLimits

0x14a1,	// (0x0001039c) call_video_uplink_pane_cp1

0x9f98,	// (0x00018e93) call_video_uplink_pane_cp2

0x1540,	// (0x0001043b) video_down_crop_pane_ParamLimits

0x1540,	// (0x0001043b) video_down_crop_pane

0x1637,	// (0x00010532) video_down_pane_ParamLimits

0x1637,	// (0x00010532) video_down_pane

0x9fa0,	// (0x00018e9b) video_down_subqcif_pane_ParamLimits

0x9fa0,	// (0x00018e9b) video_down_subqcif_pane

0x9fb8,	// (0x00018eb3) video_down_subqcif_pane_cp_ParamLimits

0x9fb8,	// (0x00018eb3) video_down_subqcif_pane_cp

0x9fde,	// (0x00018ed9) im_reading_pane_ParamLimits

0x9fde,	// (0x00018ed9) im_reading_pane

0x1745,	// (0x00010640) im_writing_pane_ParamLimits

0x1745,	// (0x00010640) im_writing_pane

0x175b,	// (0x00010656) im_reading_pane_t1

0x9ff8,	// (0x00018ef3) list_im_pane

0xa009,	// (0x00018f04) scroll_pane_cp07

0x1794,	// (0x0001068f) im_writing_pane_t1_ParamLimits

0x1794,	// (0x0001068f) im_writing_pane_t1

0xa022,	// (0x00018f1d) im_writing_pane_t2_ParamLimits

0xa022,	// (0x00018f1d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e16e) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e16e) im_writing_pane_t

0x9973,	// (0x0001886e) input_focus_pane_cp04

0x9973,	// (0x0001886e) input_focus_pane_cp05

0x17a9,	// (0x000106a4) list_im_single_pane_ParamLimits

0x17a9,	// (0x000106a4) list_im_single_pane

0x17bd,	// (0x000106b8) list_single_im_pane_t1

0x33c7,	// (0x000122c2) blid_accuracy_pane

0x33cf,	// (0x000122ca) blid_compass_pane

0x33d9,	// (0x000122d4) main_location_t1

0x33e9,	// (0x000122e4) main_location_t2

0x33f9,	// (0x000122f4) main_location_t3

0x0002,

0xf5da,	// (0x0001e4d5) main_location_t

0x9973,	// (0x0001886e) aid_levels_location

0x9d2e,	// (0x00018c29) blid_accuracy_pane_g1

0x9d2e,	// (0x00018c29) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d0) blid_accuracy_pane_g

0xa06a,	// (0x00018f65) wml_content_pane

0xa0a8,	// (0x00018fa3) wml_button_pane_ParamLimits

0xa0a8,	// (0x00018fa3) wml_button_pane

0x17cc,	// (0x000106c7) wml_list_single_large_pane_ParamLimits

0x17cc,	// (0x000106c7) wml_list_single_large_pane

0x17e1,	// (0x000106dc) wml_list_single_medium_pane_ParamLimits

0x17e1,	// (0x000106dc) wml_list_single_medium_pane

0x17f7,	// (0x000106f2) wml_list_single_small_pane_ParamLimits

0x17f7,	// (0x000106f2) wml_list_single_small_pane

0xa0bc,	// (0x00018fb7) wml_selection_box_pane_ParamLimits

0xa0bc,	// (0x00018fb7) wml_selection_box_pane

0xa0cf,	// (0x00018fca) wml_list_single_pane_t1

0xa0de,	// (0x00018fd9) wml_list_single_medium_pane_t1

0xa0ed,	// (0x00018fe8) wml_list_single_large_pane_t1

0xa0fc,	// (0x00018ff7) input_focus_pane_cp02_ParamLimits

0xa0fc,	// (0x00018ff7) input_focus_pane_cp02

0xa10f,	// (0x0001900a) wml_selection_box_pane_g1

0xa118,	// (0x00019013) wml_selection_box_pane_t1_ParamLimits

0xa118,	// (0x00019013) wml_selection_box_pane_t1

0x9bce,	// (0x00018ac9) bg_wml_button_pane_ParamLimits

0x9bce,	// (0x00018ac9) bg_wml_button_pane

0xa130,	// (0x0001902b) wml_button_pane_g1

0xa138,	// (0x00019033) wml_button_pane_t1

0xa130,	// (0x0001902b) wml_button_bg_pane_g1

0xa148,	// (0x00019043) wml_button_bg_pane_g2

0xa150,	// (0x0001904b) wml_button_bg_pane_g3

0xa158,	// (0x00019053) wml_button_bg_pane_g4

0xa160,	// (0x0001905b) wml_button_bg_pane_g5

0xa168,	// (0x00019063) wml_button_bg_pane_g6

0xa170,	// (0x0001906b) wml_button_bg_pane_g7

0xa178,	// (0x00019073) wml_button_bg_pane_g8

0xa180,	// (0x0001907b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e173) wml_button_bg_pane_g

0x180f,	// (0x0001070a) bg_list_pane_cp02

0xa188,	// (0x00019083) mce_header_pane_ParamLimits

0xa188,	// (0x00019083) mce_header_pane

0xa19e,	// (0x00019099) mce_icon_pane

0xa19e,	// (0x00019099) mce_image_pane

0xa1a7,	// (0x000190a2) mce_text_pane_ParamLimits

0xa1a7,	// (0x000190a2) mce_text_pane

0x1817,	// (0x00010712) scroll_pane_cp03

0xa0a0,	// (0x00018f9b) scroll_pane_cp04

0xa1ba,	// (0x000190b5) scroll_pane_cp05_ParamLimits

0xa1ba,	// (0x000190b5) scroll_pane_cp05

0x1821,	// (0x0001071c) mce_header_field_pane_ParamLimits

0x1821,	// (0x0001071c) mce_header_field_pane

0x1838,	// (0x00010733) mce_header_field_pane_2_ParamLimits

0x1838,	// (0x00010733) mce_header_field_pane_2

0x184e,	// (0x00010749) mce_header_field_pane_3

0x1856,	// (0x00010751) list_single_mce_message_pane_ParamLimits

0x1856,	// (0x00010751) list_single_mce_message_pane

0x186b,	// (0x00010766) list_single_mce_smart_pane_ParamLimits

0x186b,	// (0x00010766) list_single_mce_smart_pane

0xa1c6,	// (0x000190c1) input_focus_pane_cp03

0xa1cf,	// (0x000190ca) list_header_data_pane

0x188b,	// (0x00010786) mce_header_field_pane_t1

0x189b,	// (0x00010796) list_single_mce_header_pane_ParamLimits

0x189b,	// (0x00010796) list_single_mce_header_pane

0xa1d7,	// (0x000190d2) list_single_mce_header_pane_t1

0xa1e6,	// (0x000190e1) list_single_mce_message_pane_g1

0xa1ee,	// (0x000190e9) list_single_mce_message_pane_t1

0x18d5,	// (0x000107d0) bg_cale_heading_pane_cp01_ParamLimits

0x18d5,	// (0x000107d0) bg_cale_heading_pane_cp01

0xa1fc,	// (0x000190f7) bg_cale_pane_cp02_ParamLimits

0xa1fc,	// (0x000190f7) bg_cale_pane_cp02

0x1904,	// (0x000107ff) cale_month_corner_pane

0x1923,	// (0x0001081e) cale_month_day_heading_pane_ParamLimits

0x1923,	// (0x0001081e) cale_month_day_heading_pane

0x196a,	// (0x00010865) cale_month_pane_g1_ParamLimits

0x196a,	// (0x00010865) cale_month_pane_g1

0x198e,	// (0x00010889) cale_month_pane_g2_ParamLimits

0x198e,	// (0x00010889) cale_month_pane_g2

0x19be,	// (0x000108b9) cale_month_pane_g3_ParamLimits

0x19be,	// (0x000108b9) cale_month_pane_g3

0x19fa,	// (0x000108f5) cale_month_pane_g4_ParamLimits

0x19fa,	// (0x000108f5) cale_month_pane_g4

0x1a36,	// (0x00010931) cale_month_pane_g5_ParamLimits

0x1a36,	// (0x00010931) cale_month_pane_g5

0x1a7e,	// (0x00010979) cale_month_pane_g6_ParamLimits

0x1a7e,	// (0x00010979) cale_month_pane_g6

0x1aca,	// (0x000109c5) cale_month_pane_g7_ParamLimits

0x1aca,	// (0x000109c5) cale_month_pane_g7

0x1b1e,	// (0x00010a19) cale_month_pane_g8_ParamLimits

0x1b1e,	// (0x00010a19) cale_month_pane_g8

0x1b72,	// (0x00010a6d) cale_month_pane_g9_ParamLimits

0x1b72,	// (0x00010a6d) cale_month_pane_g9

0x1bc4,	// (0x00010abf) cale_month_pane_g10_ParamLimits

0x1bc4,	// (0x00010abf) cale_month_pane_g10

0x1c16,	// (0x00010b11) cale_month_pane_g11_ParamLimits

0x1c16,	// (0x00010b11) cale_month_pane_g11

0x1c68,	// (0x00010b63) cale_month_pane_g12_ParamLimits

0x1c68,	// (0x00010b63) cale_month_pane_g12

0x1cba,	// (0x00010bb5) cale_month_pane_g13_ParamLimits

0x1cba,	// (0x00010bb5) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e186) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e186) cale_month_pane_g

0x1d0c,	// (0x00010c07) cale_month_week_pane

0x1d30,	// (0x00010c2b) grid_cale_month_pane_ParamLimits

0x1d30,	// (0x00010c2b) grid_cale_month_pane

0x1d6e,	// (0x00010c69) cale_month_day_heading_pane_t1

0x1df4,	// (0x00010cef) cale_month_day_heading_pane_t2

0x1e85,	// (0x00010d80) cale_month_day_heading_pane_t3

0x1f16,	// (0x00010e11) cale_month_day_heading_pane_t4

0x1fab,	// (0x00010ea6) cale_month_day_heading_pane_t5

0x204c,	// (0x00010f47) cale_month_day_heading_pane_t6

0x20ed,	// (0x00010fe8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e1a1) cale_month_day_heading_pane_t

0x9e8c,	// (0x00018d87) bg_cale_side_pane_cp01

0x2196,	// (0x00011091) cale_month_week_pane_t1

0x21af,	// (0x000110aa) cale_month_week_pane_t2

0x21c8,	// (0x000110c3) cale_month_week_pane_t3

0x21e1,	// (0x000110dc) cale_month_week_pane_t4

0x21fa,	// (0x000110f5) cale_month_week_pane_t5

0x2213,	// (0x0001110e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e1b0) cale_month_week_pane_t

0x222c,	// (0x00011127) cell_cale_month_pane_ParamLimits

0x222c,	// (0x00011127) cell_cale_month_pane

0xa23b,	// (0x00019136) cell_cale_month_pane_g1

0x2380,	// (0x0001127b) cell_cale_month_pane_t1_ParamLimits

0x2380,	// (0x0001127b) cell_cale_month_pane_t1

0x9e9a,	// (0x00018d95) grid_highlight_pane_cp08

0x9d2e,	// (0x00018c29) main_smil_g1

0x23a0,	// (0x0001129b) smil_status_pane

0xa247,	// (0x00019142) smil_text_pane

0xbd12,	// (0x0001ac0d) bg_popup_call3_rect_pane_g8

0xbd1a,	// (0x0001ac15) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e469) bg_popup_call3_rect_pane_g

0xbfb5,	// (0x0001aeb0) smil_status_volume_pane_g1

0xa251,	// (0x0001914c) smil_status_pane_t1

0xbfe8,	// (0x0001aee3) volume_smil_pane

0xa268,	// (0x00019163) list_smil_text_pane

0x23b3,	// (0x000112ae) scroll_pane_cp011

0x23be,	// (0x000112b9) smil_text_list_pane_t1_ParamLimits

0x23be,	// (0x000112b9) smil_text_list_pane_t1

0xa272,	// (0x0001916d) aid_volume_smil_ParamLimits

0xa272,	// (0x0001916d) aid_volume_smil

0x9d2e,	// (0x00018c29) smil_volume_pane_g1

0x9d2e,	// (0x00018c29) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d0) smil_volume_pane_g

0x091a,	// (0x0000f815) listscroll_cale_day_pane

0xa294,	// (0x0001918f) bg_cale_pane

0xa2ac,	// (0x000191a7) list_cale_pane

0xa2cf,	// (0x000191ca) scroll_pane_cp09

0xa2e0,	// (0x000191db) cale_bg_pane_g1

0xa2e8,	// (0x000191e3) cale_bg_pane_g2

0xa2f0,	// (0x000191eb) cale_bg_pane_g3

0xa2f8,	// (0x000191f3) cale_bg_pane_g4

0xa300,	// (0x000191fb) cale_bg_pane_g5

0xa308,	// (0x00019203) cale_bg_pane_g6

0xa310,	// (0x0001920b) cale_bg_pane_g7

0xa318,	// (0x00019213) cale_bg_pane_g8

0xa320,	// (0x0001921b) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e1d5) cale_bg_pane_g

0x2402,	// (0x000112fd) list_cale_time_pane_ParamLimits

0x2402,	// (0x000112fd) list_cale_time_pane

0xa328,	// (0x00019223) list_cale_time_pane_g1_ParamLimits

0xa328,	// (0x00019223) list_cale_time_pane_g1

0xa334,	// (0x0001922f) list_cale_time_pane_g2_ParamLimits

0xa334,	// (0x0001922f) list_cale_time_pane_g2

0x2417,	// (0x00011312) list_cale_time_pane_g3_ParamLimits

0x2417,	// (0x00011312) list_cale_time_pane_g3

0x2425,	// (0x00011320) list_cale_time_pane_g4_ParamLimits

0x2425,	// (0x00011320) list_cale_time_pane_g4

0x2433,	// (0x0001132e) list_cale_time_pane_g5_ParamLimits

0x2433,	// (0x0001132e) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e1e8) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e1e8) list_cale_time_pane_g

0xa34e,	// (0x00019249) list_cale_time_pane_t1_ParamLimits

0xa34e,	// (0x00019249) list_cale_time_pane_t1

0xa376,	// (0x00019271) list_cale_time_pane_t2_ParamLimits

0xa376,	// (0x00019271) list_cale_time_pane_t2

0x2796,	// (0x00011691) aid_blid_cardinal_pane

0x27d4,	// (0x000116cf) compass_pane_t4

0xa39e,	// (0x00019299) list_cale_time_pane_t4_ParamLimits

0xa39e,	// (0x00019299) list_cale_time_pane_t4

0x27e2,	// (0x000116dd) compass_pane_t5

0x27f0,	// (0x000116eb) compass_pane_t6

0x27fe,	// (0x000116f9) compass_pane_t7

0xa8c0,	// (0x000197bb) navi_pane_cc_t1

0xaab7,	// (0x000199b2) aid_phob_thumbnail_center_pane

0x2ddf,	// (0x00011cda) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e1f5) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e1f5) list_cale_time_pane_t

0x95ca,	// (0x000184c5) bg_popup_window_pane_cp02_ParamLimits

0x95ca,	// (0x000184c5) bg_popup_window_pane_cp02

0xa3c6,	// (0x000192c1) heading_pane_cp01_ParamLimits

0xa3c6,	// (0x000192c1) heading_pane_cp01

0xa3d2,	// (0x000192cd) loc_req_pane_ParamLimits

0xa3d2,	// (0x000192cd) loc_req_pane

0xa3e2,	// (0x000192dd) loc_type_pane_ParamLimits

0xa3e2,	// (0x000192dd) loc_type_pane

0xa3f4,	// (0x000192ef) loc_type_pane_t1_ParamLimits

0xa3f4,	// (0x000192ef) loc_type_pane_t1

0xa406,	// (0x00019301) loc_type_pane_t2_ParamLimits

0xa406,	// (0x00019301) loc_type_pane_t2

0xa418,	// (0x00019313) loc_type_pane_t3_ParamLimits

0xa418,	// (0x00019313) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e1fc) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e1fc) loc_type_pane_t

0xa42a,	// (0x00019325) list_loc_req_pane

0xa434,	// (0x0001932f) scroll_pane_cp012

0x2441,	// (0x0001133c) list_single_loc_request_popup_menu_pane_ParamLimits

0x2441,	// (0x0001133c) list_single_loc_request_popup_menu_pane

0xa43f,	// (0x0001933a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa43f,	// (0x0001933a) list_single_loc_request_popup_menu_pane_g1

0xa44b,	// (0x00019346) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa44b,	// (0x00019346) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e203) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e203) list_single_loc_request_popup_menu_pane_g

0xa457,	// (0x00019352) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa457,	// (0x00019352) list_single_loc_request_popup_menu_pane_t1

0x9bce,	// (0x00018ac9) bg_popup_window_pane_cp03_ParamLimits

0x9bce,	// (0x00018ac9) bg_popup_window_pane_cp03

0xa46d,	// (0x00019368) heading_loc_req_pane_ParamLimits

0xa46d,	// (0x00019368) heading_loc_req_pane

0x244e,	// (0x00011349) popup_dyc_status_message_window_g1_ParamLimits

0x244e,	// (0x00011349) popup_dyc_status_message_window_g1

0x2462,	// (0x0001135d) popup_dyc_status_message_window_t1_ParamLimits

0x2462,	// (0x0001135d) popup_dyc_status_message_window_t1

0x2477,	// (0x00011372) popup_dyc_status_message_window_t2_ParamLimits

0x2477,	// (0x00011372) popup_dyc_status_message_window_t2

0x248c,	// (0x00011387) popup_dyc_status_message_window_t3_ParamLimits

0x248c,	// (0x00011387) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e208) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e208) popup_dyc_status_message_window_t

0x9973,	// (0x0001886e) bg_heading_pane_cp01

0xa479,	// (0x00019374) heading_loc_req_pane_g1

0xa481,	// (0x0001937c) heading_loc_req_pane_g2

0xa489,	// (0x00019384) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e20f) heading_loc_req_pane_g

0xa491,	// (0x0001938c) heading_loc_req_pane_t1

0xa4a0,	// (0x0001939b) bg_popup_sub_pane_cp01_ParamLimits

0xa4a0,	// (0x0001939b) bg_popup_sub_pane_cp01

0xa4ae,	// (0x000193a9) popup_cale_events_window_g1_ParamLimits

0xa4ae,	// (0x000193a9) popup_cale_events_window_g1

0xa4ce,	// (0x000193c9) popup_cale_events_window_g2_ParamLimits

0xa4ce,	// (0x000193c9) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e243) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e243) popup_cale_events_window_g

0xa4ee,	// (0x000193e9) popup_cale_events_window_t1_ParamLimits

0xa4ee,	// (0x000193e9) popup_cale_events_window_t1

0xa500,	// (0x000193fb) popup_cale_events_window_t2_ParamLimits

0xa500,	// (0x000193fb) popup_cale_events_window_t2

0xa53e,	// (0x00019439) popup_cale_events_window_t3_ParamLimits

0xa53e,	// (0x00019439) popup_cale_events_window_t3

0xa578,	// (0x00019473) popup_cale_events_window_t4_ParamLimits

0xa578,	// (0x00019473) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e248) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e248) popup_cale_events_window_t

0x2591,	// (0x0001148c) call_type_pane

0x25a1,	// (0x0001149c) popup_call_status_window_g1

0x25b5,	// (0x000114b0) popup_call_status_window_g2

0x25c9,	// (0x000114c4) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e251) popup_call_status_window_g

0xa5ae,	// (0x000194a9) call_type_pane_g1

0xa5b7,	// (0x000194b2) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e258) call_type_pane_g

0x9973,	// (0x0001886e) bg_popup_sub_pane_cp02

0xa5c0,	// (0x000194bb) listscroll_popup_wml_pane

0xa5c8,	// (0x000194c3) list_wml_pane

0xa5d2,	// (0x000194cd) scroll_pane_cp013

0xa5dd,	// (0x000194d8) list_single_graphic_popup_wml_pane_ParamLimits

0xa5dd,	// (0x000194d8) list_single_graphic_popup_wml_pane

0x9d2e,	// (0x00018c29) list_single_graphic_popup_wml_pane_g1

0xa5f1,	// (0x000194ec) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e25d) list_single_graphic_popup_wml_pane_g

0xa5f9,	// (0x000194f4) list_single_graphic_popup_wml_pane_t1

0xa60f,	// (0x0001950a) aid_call_pane

0x9bc6,	// (0x00018ac1) popup_clock_analogue_window_g1

0x9bc6,	// (0x00018ac1) popup_clock_analogue_window_g2

0xa617,	// (0x00019512) popup_clock_analogue_window_g3

0xa617,	// (0x00019512) popup_clock_analogue_window_g4

0x9d2e,	// (0x00018c29) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e262) popup_clock_analogue_window_g

0xa61f,	// (0x0001951a) popup_clock_analogue_window_t1

0xa62d,	// (0x00019528) clock_digital_number_pane_ParamLimits

0xa62d,	// (0x00019528) clock_digital_number_pane

0xa639,	// (0x00019534) clock_digital_number_pane_cp02_ParamLimits

0xa639,	// (0x00019534) clock_digital_number_pane_cp02

0xa645,	// (0x00019540) clock_digital_number_pane_cp03_ParamLimits

0xa645,	// (0x00019540) clock_digital_number_pane_cp03

0xa651,	// (0x0001954c) clock_digital_number_pane_cp04_ParamLimits

0xa651,	// (0x0001954c) clock_digital_number_pane_cp04

0xa661,	// (0x0001955c) clock_digital_separator_pane_ParamLimits

0xa661,	// (0x0001955c) clock_digital_separator_pane

0xa66d,	// (0x00019568) popup_clock_digital_window_t1

0x9d2e,	// (0x00018c29) clock_digital_number_pane_g1

0x9d2e,	// (0x00018c29) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d0) clock_digital_number_pane_g

0x9d2e,	// (0x00018c29) clock_digital_separator_pane_g1

0x9d2e,	// (0x00018c29) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d0) clock_digital_separator_pane_g

0x9973,	// (0x0001886e) bg_popup_window_pane_cp04

0xa68a,	// (0x00019585) heading_pane_cp03

0xa692,	// (0x0001958d) listscroll_popup_gms_pane

0xa69a,	// (0x00019595) grid_large_graphic_popup_pane

0xa6a4,	// (0x0001959f) listscroll_popup_gms_pane_g1

0xa6ac,	// (0x000195a7) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e26d) listscroll_popup_gms_pane_g

0xa0a0,	// (0x00018f9b) scroll_pane_cp014

0x25d8,	// (0x000114d3) cell_large_graphic_popup_pane_ParamLimits

0x25d8,	// (0x000114d3) cell_large_graphic_popup_pane

0x25f0,	// (0x000114eb) cell_large_graphic_popup_pane_g1_ParamLimits

0x25f0,	// (0x000114eb) cell_large_graphic_popup_pane_g1

0xa6b4,	// (0x000195af) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6b4,	// (0x000195af) cell_large_graphic_popup_pane_g2

0xa6c0,	// (0x000195bb) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6c0,	// (0x000195bb) cell_large_graphic_popup_pane_g3

0xa6cd,	// (0x000195c8) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6cd,	// (0x000195c8) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e272) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e272) cell_large_graphic_popup_pane_g

0xa6dd,	// (0x000195d8) grid_highlight_pane_cp010

0x9d2e,	// (0x00018c29) bg_popup_call_pane_g1

0xa6e7,	// (0x000195e2) list_single_graphic_popup_conf_pane_ParamLimits

0xa6e7,	// (0x000195e2) list_single_graphic_popup_conf_pane

0xa6fa,	// (0x000195f5) list_highlight_pane_cp01

0xa703,	// (0x000195fe) list_single_graphic_popup_conf_pane_g1

0xa70b,	// (0x00019606) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e27b) list_single_graphic_popup_conf_pane_g

0xa713,	// (0x0001960e) list_single_graphic_popup_conf_pane_t1

0xa721,	// (0x0001961c) linegrid_cams_pane_g1

0x25fc,	// (0x000114f7) linegrid_cams_pane_g2

0x9ecd,	// (0x00018dc8) linegrid_cams_pane_g3

0xa72a,	// (0x00019625) linegrid_cams_pane_g4

0x2605,	// (0x00011500) linegrid_cams_pane_g5

0x260e,	// (0x00011509) linegrid_cams_pane_g6

0x9ed6,	// (0x00018dd1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e280) linegrid_cams_pane_g

0xa733,	// (0x0001962e) popup_clock_analogue_window

0xa733,	// (0x0001962e) popup_clock_digital_window

0x9973,	// (0x0001886e) popup_phob_thumbnail_window

0x9d2e,	// (0x00018c29) call_video_uplink_pane_g1

0xa73c,	// (0x00019637) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e28f) call_video_uplink_pane_g

0xa744,	// (0x0001963f) video_uplink_pane

0xa74c,	// (0x00019647) mce_image_pane_g1

0x2619,	// (0x00011514) mce_image_pane_g2

0x2623,	// (0x0001151e) mce_image_pane_g3

0x262b,	// (0x00011526) mce_image_pane_g4

0x2633,	// (0x0001152e) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e294) mce_image_pane_g

0xa756,	// (0x00019651) control_top_pane_stacon_cp01_ParamLimits

0xa756,	// (0x00019651) control_top_pane_stacon_cp01

0xa76a,	// (0x00019665) uni_indicator_pane_stacon_cp01_ParamLimits

0xa76a,	// (0x00019665) uni_indicator_pane_stacon_cp01

0xa77b,	// (0x00019676) bg_popup_sub_pane_cp03

0xa785,	// (0x00019680) chi_dic_find_pane

0x263b,	// (0x00011536) listscroll_chi_dic_pane

0xa78d,	// (0x00019688) main_pane_chidic_g1

0xa795,	// (0x00019690) chi_dic_find_pane_t1

0xa7a3,	// (0x0001969e) find_chidic_pane

0xa7ac,	// (0x000196a7) chi_dic_list_pane_ParamLimits

0xa7ac,	// (0x000196a7) chi_dic_list_pane

0xa7bd,	// (0x000196b8) scroll_pane_cp020

0xa7c5,	// (0x000196c0) find_chidic_pane_t1

0x9973,	// (0x0001886e) input_focus_pane_cp06

0x264f,	// (0x0001154a) list_chi_dic_pane_ParamLimits

0x264f,	// (0x0001154a) list_chi_dic_pane

0x2661,	// (0x0001155c) list_chi_dic_pane_t1_ParamLimits

0x2661,	// (0x0001155c) list_chi_dic_pane_t1

0x9973,	// (0x0001886e) list_highlight_pane_cp020

0xa7d4,	// (0x000196cf) bg_cale_heading_pane_g1

0x2674,	// (0x0001156f) bg_cale_heading_pane_g2

0x267c,	// (0x00011577) bg_cale_heading_pane_g3

0x2684,	// (0x0001157f) bg_cale_heading_pane_g4

0x268e,	// (0x00011589) bg_cale_heading_pane_g5

0x2698,	// (0x00011593) bg_cale_heading_pane_g6

0x26a0,	// (0x0001159b) bg_cale_heading_pane_g7

0x26a8,	// (0x000115a3) bg_cale_heading_pane_g8

0x26b2,	// (0x000115ad) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e29f) bg_cale_heading_pane_g

0xa7d4,	// (0x000196cf) bg_cale_side_pane_g1

0x26bc,	// (0x000115b7) bg_cale_side_pane_g2

0x26c4,	// (0x000115bf) bg_cale_side_pane_g3

0x26cc,	// (0x000115c7) bg_cale_side_pane_g4

0x26d4,	// (0x000115cf) bg_cale_side_pane_g5

0x26dc,	// (0x000115d7) bg_cale_side_pane_g6

0x26e4,	// (0x000115df) bg_cale_side_pane_g7

0x26ec,	// (0x000115e7) bg_cale_side_pane_g8

0x26f4,	// (0x000115ef) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e2b2) bg_cale_side_pane_g

0x26fc,	// (0x000115f7) popup_call_status_window_ParamLimits

0x26fc,	// (0x000115f7) popup_call_status_window

0xa7dc,	// (0x000196d7) stacon_top_pane

0xa7e4,	// (0x000196df) status_pane_ParamLimits

0xa7e4,	// (0x000196df) status_pane

0xa7f9,	// (0x000196f4) status_small_pane

0xa801,	// (0x000196fc) control_pane

0x9973,	// (0x0001886e) stacon_bottom_pane

0xa809,	// (0x00019704) list_single_mce_smart_pane_t1_ParamLimits

0xa809,	// (0x00019704) list_single_mce_smart_pane_t1

0xa81c,	// (0x00019717) list_single_mce_smart_pane_t2_ParamLimits

0xa81c,	// (0x00019717) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e2c5) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e2c5) list_single_mce_smart_pane_t

0x2745,	// (0x00011640) compass_pane

0x274e,	// (0x00011649) main_location2_pane_t1

0x2760,	// (0x0001165b) main_location2_pane_t2

0x2772,	// (0x0001166d) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e2ca) main_location2_pane_t

0xa83b,	// (0x00019736) compass_pane_g1_ParamLimits

0xa83b,	// (0x00019736) compass_pane_g1

0x27b6,	// (0x000116b1) compass_pane_t1

0x27c5,	// (0x000116c0) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e2d3) compass_pane_t

0x280c,	// (0x00011707) text_secondary_cp61

0xa8b7,	// (0x000197b2) navi_pane_cams_g5

0xa933,	// (0x0001982e) navi_pane_im_t1

0xa941,	// (0x0001983c) navi_pane_mp_g1_ParamLimits

0xa941,	// (0x0001983c) navi_pane_mp_g1

0xa955,	// (0x00019850) navi_pane_mp_g2_ParamLimits

0xa955,	// (0x00019850) navi_pane_mp_g2

0xa961,	// (0x0001985c) navi_pane_mp_g3_ParamLimits

0xa961,	// (0x0001985c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e2e7) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e2e7) navi_pane_mp_g

0xa96d,	// (0x00019868) navi_pane_mp_t1

0xa97b,	// (0x00019876) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e2ee) navi_pane_mp_t

0xa9e6,	// (0x000198e1) navi_pane_vt_g1

0xa96d,	// (0x00019868) navi_pane_vt_t1

0xa9ee,	// (0x000198e9) navi_slider_pane

0xa9fe,	// (0x000198f9) zooming_pane

0xaa06,	// (0x00019901) navi_slider_pane_g1

0xaa0f,	// (0x0001990a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e2f5) navi_slider_pane_g

0xaa3c,	// (0x00019937) aid_levels_zoom

0xaa44,	// (0x0001993f) zooming_pane_g1

0xaa4c,	// (0x00019947) zooming_pane_g2

0xaa4c,	// (0x00019947) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e304) zooming_pane_g

0xaa54,	// (0x0001994f) level_10_zoom

0xaa5d,	// (0x00019958) level_11_zoom

0xaa66,	// (0x00019961) level_1_zoom

0xaa6f,	// (0x0001996a) level_2_zoom

0xaa78,	// (0x00019973) level_3_zoom

0xaa81,	// (0x0001997c) level_4_zoom

0xaa8a,	// (0x00019985) level_5_zoom

0xaa93,	// (0x0001998e) level_6_zoom

0xaa9c,	// (0x00019997) level_7_zoom

0xaaa5,	// (0x000199a0) level_8_zoom

0xaaae,	// (0x000199a9) level_9_zoom

0xaabf,	// (0x000199ba) popup_phob_thumbnail_window_g1

0xaac7,	// (0x000199c2) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e30b) popup_phob_thumbnail_window_g

0xbe74,	// (0x0001ad6f) level_1_location

0xbe7c,	// (0x0001ad77) level_2_location

0xbe84,	// (0x0001ad7f) level_3_location

0xbe8c,	// (0x0001ad87) level_4_location

0xa9fe,	// (0x000198f9) level_5_location

0x285d,	// (0x00011758) mce_icon_pane_g1

0x2867,	// (0x00011762) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e310) mce_icon_pane_g

0x286f,	// (0x0001176a) main_mup_pane_g1_ParamLimits

0x286f,	// (0x0001176a) main_mup_pane_g1

0x2885,	// (0x00011780) main_mup_pane_g2_ParamLimits

0x2885,	// (0x00011780) main_mup_pane_g2

0x289d,	// (0x00011798) main_mup_pane_g3_ParamLimits

0x289d,	// (0x00011798) main_mup_pane_g3

0x28b5,	// (0x000117b0) main_mup_pane_g4_ParamLimits

0x28b5,	// (0x000117b0) main_mup_pane_g4

0x28cd,	// (0x000117c8) main_mup_pane_g5_ParamLimits

0x28cd,	// (0x000117c8) main_mup_pane_g5

0x28e9,	// (0x000117e4) main_mup_pane_g6_ParamLimits

0x28e9,	// (0x000117e4) main_mup_pane_g6

0x2901,	// (0x000117fc) main_mup_pane_g7_ParamLimits

0x2901,	// (0x000117fc) main_mup_pane_g7

0x2919,	// (0x00011814) main_mup_pane_g8_ParamLimits

0x2919,	// (0x00011814) main_mup_pane_g8

0x2933,	// (0x0001182e) main_mup_pane_g9_ParamLimits

0x2933,	// (0x0001182e) main_mup_pane_g9

0x294d,	// (0x00011848) main_mup_pane_g10_ParamLimits

0x294d,	// (0x00011848) main_mup_pane_g10

0x2967,	// (0x00011862) main_mup_pane_g11_ParamLimits

0x2967,	// (0x00011862) main_mup_pane_g11

0x297b,	// (0x00011876) main_mup_pane_g12_ParamLimits

0x297b,	// (0x00011876) main_mup_pane_g12

0x2991,	// (0x0001188c) main_mup_pane_g13_ParamLimits

0x2991,	// (0x0001188c) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e315) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e315) main_mup_pane_g

0x29a5,	// (0x000118a0) main_mup_pane_t1_ParamLimits

0x29a5,	// (0x000118a0) main_mup_pane_t1

0x29bf,	// (0x000118ba) main_mup_pane_t2_ParamLimits

0x29bf,	// (0x000118ba) main_mup_pane_t2

0x29d7,	// (0x000118d2) main_mup_pane_t3_ParamLimits

0x29d7,	// (0x000118d2) main_mup_pane_t3

0x29ef,	// (0x000118ea) main_mup_pane_t4_ParamLimits

0x29ef,	// (0x000118ea) main_mup_pane_t4

0x2a0d,	// (0x00011908) main_mup_pane_t5_ParamLimits

0x2a0d,	// (0x00011908) main_mup_pane_t5

0x2a22,	// (0x0001191d) main_mup_pane_t6_ParamLimits

0x2a22,	// (0x0001191d) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e330) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e330) main_mup_pane_t

0x2a34,	// (0x0001192f) mup_progress_pane_ParamLimits

0x2a34,	// (0x0001192f) mup_progress_pane

0x2a40,	// (0x0001193b) mup_visualizer_pane_ParamLimits

0x2a40,	// (0x0001193b) mup_visualizer_pane

0x2a70,	// (0x0001196b) mup_volume_pane_ParamLimits

0x2a70,	// (0x0001196b) mup_volume_pane

0xaacf,	// (0x000199ca) mup_visualizer_pane_g1_ParamLimits

0xaacf,	// (0x000199ca) mup_visualizer_pane_g1

0xaacf,	// (0x000199ca) mup_visualizer_pane_g2_ParamLimits

0xaacf,	// (0x000199ca) mup_visualizer_pane_g2

0xa83b,	// (0x00019736) mup_visualizer_pane_g3_ParamLimits

0xa83b,	// (0x00019736) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e33d) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e33d) mup_visualizer_pane_g

0x9d2e,	// (0x00018c29) mup_volume_pane_g1

0xaae5,	// (0x000199e0) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e344) mup_volume_pane_g

0x9d2e,	// (0x00018c29) mup_progress_pane_g1

0xaaee,	// (0x000199e9) mup_progress_pane_g2

0xaaf7,	// (0x000199f2) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e349) mup_progress_pane_g

0x9973,	// (0x0001886e) bg_popup_window_pane_cp05

0xab00,	// (0x000199fb) heading_pane_cp02_ParamLimits

0xab00,	// (0x000199fb) heading_pane_cp02

0xab1a,	// (0x00019a15) list_popup_blid_pane

0xab22,	// (0x00019a1d) list_blid_sat_info_pane_ParamLimits

0xab22,	// (0x00019a1d) list_blid_sat_info_pane

0xab35,	// (0x00019a30) list_blid_sat_info_pane_g1

0xab3d,	// (0x00019a38) list_blid_sat_info_pane_t1

0x2b86,	// (0x00011a81) mup_equalizer_pane_ParamLimits

0x2b86,	// (0x00011a81) mup_equalizer_pane

0x2b9f,	// (0x00011a9a) mup_equalizer_pane_cp1_ParamLimits

0x2b9f,	// (0x00011a9a) mup_equalizer_pane_cp1

0x2bbc,	// (0x00011ab7) mup_equalizer_pane_cp2_ParamLimits

0x2bbc,	// (0x00011ab7) mup_equalizer_pane_cp2

0x2bd9,	// (0x00011ad4) mup_equalizer_pane_cp3_ParamLimits

0x2bd9,	// (0x00011ad4) mup_equalizer_pane_cp3

0x2bfa,	// (0x00011af5) mup_equalizer_pane_cp4_ParamLimits

0x2bfa,	// (0x00011af5) mup_equalizer_pane_cp4

0x2c1b,	// (0x00011b16) mup_equalizer_pane_cp5

0x2c2f,	// (0x00011b2a) mup_equalizer_pane_cp6

0x2c43,	// (0x00011b3e) mup_equalizer_pane_cp7

0xbd92,	// (0x0001ac8d) bg_popup_call_poc_act_pane_g9

0xbd9a,	// (0x0001ac95) bg_popup_call_poc_act_pane_g10

0xbda2,	// (0x0001ac9d) bg_popup_call_poc_act_pane_g11

0x000a,

0x9bce,	// (0x00018ac9) mup_scale_pane

0x9d2e,	// (0x00018c29) mup_scale_pane_g1

0xab4b,	// (0x00019a46) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e365) mup_scale_pane_g

0xab6f,	// (0x00019a6a) msg_data_pane

0xab77,	// (0x00019a72) scroll_pane_cp017

0x2c69,	// (0x00011b64) bg_list_pane_cp04_ParamLimits

0x2c69,	// (0x00011b64) bg_list_pane_cp04

0xab87,	// (0x00019a82) msg_data_pane_g1

0x2c81,	// (0x00011b7c) msg_data_pane_g2

0x2c8b,	// (0x00011b86) msg_data_pane_g3

0x2c93,	// (0x00011b8e) msg_data_pane_g4

0x2c9b,	// (0x00011b96) msg_data_pane_g5

0x2ca3,	// (0x00011b9e) msg_data_pane_g6

0x2cab,	// (0x00011ba6) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e374) msg_data_pane_g

0x2cb3,	// (0x00011bae) msg_text_pane_ParamLimits

0x2cb3,	// (0x00011bae) msg_text_pane

0x2cd7,	// (0x00011bd2) qrid_highlight_pane_cp011_ParamLimits

0x2cd7,	// (0x00011bd2) qrid_highlight_pane_cp011

0x9973,	// (0x0001886e) msg_body_pane

0x9973,	// (0x0001886e) msg_header_pane

0xab98,	// (0x00019a93) input_focus_pane_cp07

0xabad,	// (0x00019aa8) msg_header_pane_t1_ParamLimits

0xabad,	// (0x00019aa8) msg_header_pane_t1

0xabbf,	// (0x00019aba) msg_header_pane_t2_ParamLimits

0xabbf,	// (0x00019aba) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e388) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e388) msg_header_pane_t

0xabd1,	// (0x00019acc) msg_body_pane_g1

0xabd9,	// (0x00019ad4) msg_body_pane_t1_ParamLimits

0xabd9,	// (0x00019ad4) msg_body_pane_t1

0xac0a,	// (0x00019b05) msg_body_pane_t2_ParamLimits

0xac0a,	// (0x00019b05) msg_body_pane_t2

0xac1c,	// (0x00019b17) msg_body_pane_t3_ParamLimits

0xac1c,	// (0x00019b17) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e38d) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e38d) msg_body_pane_t

0x2d35,	// (0x00011c30) main_viewer_pane_g1_ParamLimits

0x2d35,	// (0x00011c30) main_viewer_pane_g1

0x2d43,	// (0x00011c3e) main_viewer_pane_g2_ParamLimits

0x2d43,	// (0x00011c3e) main_viewer_pane_g2

0x2d51,	// (0x00011c4c) main_viewer_pane_g3_ParamLimits

0x2d51,	// (0x00011c4c) main_viewer_pane_g3

0x2d60,	// (0x00011c5b) main_viewer_pane_g4_ParamLimits

0x2d60,	// (0x00011c5b) main_viewer_pane_g4

0xac46,	// (0x00019b41) main_viewer_pane_g5_ParamLimits

0xac46,	// (0x00019b41) main_viewer_pane_g5

0xac46,	// (0x00019b41) main_viewer_pane_g7_ParamLimits

0xac46,	// (0x00019b41) main_viewer_pane_g7

0xac58,	// (0x00019b53) main_viewer_pane_g8_ParamLimits

0xac58,	// (0x00019b53) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e39d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e39d) main_viewer_pane_g

0xac70,	// (0x00019b6b) viewer_content_pane_ParamLimits

0xac70,	// (0x00019b6b) viewer_content_pane

0x2d9c,	// (0x00011c97) main_postcard_pane_g1_ParamLimits

0x2d9c,	// (0x00011c97) main_postcard_pane_g1

0x2db2,	// (0x00011cad) main_postcard_pane_g2_ParamLimits

0x2db2,	// (0x00011cad) main_postcard_pane_g2

0x2dc8,	// (0x00011cc3) main_postcard_pane_g3_ParamLimits

0x2dc8,	// (0x00011cc3) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e3ae) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e3ae) main_postcard_pane_g

0x2ddf,	// (0x00011cda) main_postcard_pane_g4

0xbfc8,	// (0x0001aec3) smil_status_volume_pane_g2

0x2e22,	// (0x00011d1d) postcard_pane_ParamLimits

0x2e22,	// (0x00011d1d) postcard_pane

0xac7e,	// (0x00019b79) postcard_pane_g1_ParamLimits

0xac7e,	// (0x00019b79) postcard_pane_g1

0x2e64,	// (0x00011d5f) postcard_pane_g2_ParamLimits

0x2e64,	// (0x00011d5f) postcard_pane_g2

0x2e70,	// (0x00011d6b) postcard_pane_g3_ParamLimits

0x2e70,	// (0x00011d6b) postcard_pane_g3

0xac8c,	// (0x00019b87) postcard_pane_g4_ParamLimits

0xac8c,	// (0x00019b87) postcard_pane_g4

0x2e7c,	// (0x00011d77) postcard_pane_g5_ParamLimits

0x2e7c,	// (0x00011d77) postcard_pane_g5

0x2e91,	// (0x00011d8c) postcard_pane_g6_ParamLimits

0x2e91,	// (0x00011d8c) postcard_pane_g6

0xac7e,	// (0x00019b79) postcard_pane_g7_ParamLimits

0xac7e,	// (0x00019b79) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e3bb) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e3bb) postcard_pane_g

0x2ea5,	// (0x00011da0) main_mp2_pane_g1_ParamLimits

0x2ea5,	// (0x00011da0) main_mp2_pane_g1

0x2eb1,	// (0x00011dac) main_mp2_pane_g2_ParamLimits

0x2eb1,	// (0x00011dac) main_mp2_pane_g2

0x2ebd,	// (0x00011db8) main_mp2_pane_g3_ParamLimits

0x2ebd,	// (0x00011db8) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e3ca) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e3ca) main_mp2_pane_g

0x2ec9,	// (0x00011dc4) main_mp2_pane_t1_ParamLimits

0x2ec9,	// (0x00011dc4) main_mp2_pane_t1

0x2ede,	// (0x00011dd9) main_mp2_pane_t2_ParamLimits

0x2ede,	// (0x00011dd9) main_mp2_pane_t2

0x2ef0,	// (0x00011deb) main_mp2_pane_t3_ParamLimits

0x2ef0,	// (0x00011deb) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e3d1) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e3d1) main_mp2_pane_t

0xac9a,	// (0x00019b95) pec_content_pane_ParamLimits

0xac9a,	// (0x00019b95) pec_content_pane

0xa0a0,	// (0x00018f9b) scroll_pane_cp015

0xacac,	// (0x00019ba7) pec_attribute_pane_ParamLimits

0xacac,	// (0x00019ba7) pec_attribute_pane

0x2f02,	// (0x00011dfd) pec_content_pane_g1_ParamLimits

0x2f02,	// (0x00011dfd) pec_content_pane_g1

0xacbc,	// (0x00019bb7) pec_content_pane_t1_ParamLimits

0xacbc,	// (0x00019bb7) pec_content_pane_t1

0xacce,	// (0x00019bc9) pec_content_pane_t2_ParamLimits

0xacce,	// (0x00019bc9) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e3d8) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e3d8) pec_content_pane_t

0x2f0e,	// (0x00011e09) list_single_graphic_pane_cp01_ParamLimits

0x2f0e,	// (0x00011e09) list_single_graphic_pane_cp01

0x9bce,	// (0x00018ac9) bg_popup_sub_pane_cp04

0xace0,	// (0x00019bdb) popup_mup_playback_window_g1

0xacec,	// (0x00019be7) popup_mup_playback_window_t1

0xad01,	// (0x00019bfc) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e3dd) popup_mup_playback_window_t

0xad38,	// (0x00019c33) main_image_pane_g1_ParamLimits

0xad38,	// (0x00019c33) main_image_pane_g1

0xad7b,	// (0x00019c76) scroll_pane_cp018_ParamLimits

0xad7b,	// (0x00019c76) scroll_pane_cp018

0xad93,	// (0x00019c8e) scroll_pane_cp016_ParamLimits

0xad93,	// (0x00019c8e) scroll_pane_cp016

0x2fdb,	// (0x00011ed6) smil2_image_pane_ParamLimits

0x2fdb,	// (0x00011ed6) smil2_image_pane

0x300b,	// (0x00011f06) smil2_root_pane_ParamLimits

0x300b,	// (0x00011f06) smil2_root_pane

0x3043,	// (0x00011f3e) smil2_text_pane_ParamLimits

0x3043,	// (0x00011f3e) smil2_text_pane

0x9973,	// (0x0001886e) bg_list_pane_cp06

0xadcf,	// (0x00019cca) grid_radio_pane

0x9973,	// (0x0001886e) bg_popup_window_pane_cp06

0xadd7,	// (0x00019cd2) main_fmradio_pane_t1

0xa68a,	// (0x00019585) heading_pane_cp04

0xade5,	// (0x00019ce0) main_fmradio_pane_t2

0xbdaa,	// (0x0001aca5) popup_cale_lunar_info_window_g1

0xadf3,	// (0x00019cee) main_fmradio_pane_t3

0xbdb2,	// (0x0001acad) popup_cale_lunar_info_window_g2

0xae01,	// (0x00019cfc) main_fmradio_pane_t4

0x0001,

0xae0f,	// (0x00019d0a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e4b8) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e3f2) main_fmradio_pane_t

0xae1d,	// (0x00019d18) wait_bar_pane_cp03

0xae25,	// (0x00019d20) cell_fmradio_pane_ParamLimits

0xae25,	// (0x00019d20) cell_fmradio_pane

0xac7e,	// (0x00019b79) cell_fmradio_pane_g1_ParamLimits

0xac7e,	// (0x00019b79) cell_fmradio_pane_g1

0x9973,	// (0x0001886e) grid_highlight_pane_cp011

0xae38,	// (0x00019d33) poc_content_pane_ParamLimits

0xae38,	// (0x00019d33) poc_content_pane

0xae4a,	// (0x00019d45) scroll_pane_cp019

0x30c3,	// (0x00011fbe) popup_call_poc_act_window_ParamLimits

0x30c3,	// (0x00011fbe) popup_call_poc_act_window

0x30e7,	// (0x00011fe2) popup_call_poc_inact_window_ParamLimits

0x30e7,	// (0x00011fe2) popup_call_poc_inact_window

0xf594,	// (0x0001e48f) bg_popup_call_poc_act_pane_g

0xbd22,	// (0x0001ac1d) bg_popup_call_poc_inact_pane_g1

0xbd2a,	// (0x0001ac25) bg_popup_call_poc_inact_pane_g2

0xae52,	// (0x00019d4d) popup_call_poc_act_window_g2

0xbd32,	// (0x0001ac2d) bg_popup_call_poc_inact_pane_g3

0xbd3a,	// (0x0001ac35) bg_popup_call_poc_inact_pane_g4

0xbd42,	// (0x0001ac3d) bg_popup_call_poc_inact_pane_g5

0xae5a,	// (0x00019d55) popup_call_poc_act_window_t1_ParamLimits

0xae5a,	// (0x00019d55) popup_call_poc_act_window_t1

0xae82,	// (0x00019d7d) popup_call_poc_act_window_t2_ParamLimits

0xae82,	// (0x00019d7d) popup_call_poc_act_window_t2

0xaeaa,	// (0x00019da5) popup_call_poc_act_window_t3_ParamLimits

0xaeaa,	// (0x00019da5) popup_call_poc_act_window_t3

0xaed2,	// (0x00019dcd) popup_call_poc_act_window_t4_ParamLimits

0xaed2,	// (0x00019dcd) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e3fd) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e3fd) popup_call_poc_act_window_t

0xbd4a,	// (0x0001ac45) bg_popup_call_poc_inact_pane_g6

0xbd52,	// (0x0001ac4d) bg_popup_call_poc_inact_pane_g7

0xbd5a,	// (0x0001ac55) bg_popup_call_poc_inact_pane_g8

0xaee4,	// (0x00019ddf) popup_call_poc_inact_window_g2

0xbd62,	// (0x0001ac5d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e47c) bg_popup_call_poc_inact_pane_g

0xaeec,	// (0x00019de7) popup_call_poc_inact_window_t1_ParamLimits

0xaeec,	// (0x00019de7) popup_call_poc_inact_window_t1

0xaf01,	// (0x00019dfc) popup_call_poc_inact_window_t2_ParamLimits

0xaf01,	// (0x00019dfc) popup_call_poc_inact_window_t2

0xaf16,	// (0x00019e11) popup_call_poc_inact_window_t3_ParamLimits

0xaf16,	// (0x00019e11) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e406) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e406) popup_call_poc_inact_window_t

0xbf3b,	// (0x0001ae36) context_pane_ParamLimits

0x3916,	// (0x00012811) signal_pane_ParamLimits

0xa9fe,	// (0x000198f9) main_call2_pane

0xbf14,	// (0x0001ae0f) popup_phob_thumbnail2_window_ParamLimits

0xbf14,	// (0x0001ae0f) popup_phob_thumbnail2_window

0xac2e,	// (0x00019b29) aid_hotspot_pointer_arrow_pane

0xac36,	// (0x00019b31) aid_hotspot_pointer_hand_pane

0x3430,	// (0x0001232b) phob_pre_status_pane_g5

0x0fc0,	// (0x0000febb) cams_zoom_pane_ParamLimits

0x0fcf,	// (0x0000feca) image_vga_pane_ParamLimits

0x0fe9,	// (0x0000fee4) main_camera_pane_g1_ParamLimits

0x0ffb,	// (0x0000fef6) main_camera_pane_g2_ParamLimits

0x100b,	// (0x0000ff06) main_camera_pane_g3_ParamLimits

0x101b,	// (0x0000ff16) main_camera_pane_g4_ParamLimits

0x102b,	// (0x0000ff26) main_camera_pane_g5_ParamLimits

0x103b,	// (0x0000ff36) main_camera_pane_g6_ParamLimits

0x104d,	// (0x0000ff48) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001e105) main_camera_pane_g_ParamLimits

0x105d,	// (0x0000ff58) main_camera_pane_t1_ParamLimits

0x1073,	// (0x0000ff6e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e116) main_camera_pane_t_ParamLimits

0x9bce,	// (0x00018ac9) bg_popup_preview_window_pane_cp01_ParamLimits

0x9bce,	// (0x00018ac9) bg_popup_preview_window_pane_cp01

0xaf2b,	// (0x00019e26) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf2b,	// (0x00019e26) popup_phob_thumbnail2_window_g1

0x9973,	// (0x0001886e) call2_cli_visual_pane

0x311b,	// (0x00012016) popup_call2_audio_conf_window_ParamLimits

0x311b,	// (0x00012016) popup_call2_audio_conf_window

0x313b,	// (0x00012036) popup_call2_audio_first_window_ParamLimits

0x313b,	// (0x00012036) popup_call2_audio_first_window

0x31d1,	// (0x000120cc) popup_call2_audio_in_window_ParamLimits

0x31d1,	// (0x000120cc) popup_call2_audio_in_window

0x3219,	// (0x00012114) popup_call2_audio_out_window_ParamLimits

0x3219,	// (0x00012114) popup_call2_audio_out_window

0x3283,	// (0x0001217e) popup_call2_audio_second_window_ParamLimits

0x3283,	// (0x0001217e) popup_call2_audio_second_window

0x32e9,	// (0x000121e4) popup_call2_audio_wait_window_ParamLimits

0x32e9,	// (0x000121e4) popup_call2_audio_wait_window

0x9973,	// (0x0001886e) bg_popup_call2_act_pane_cp03

0x9bb0,	// (0x00018aab) list_conf_pane_cp

0xaf37,	// (0x00019e32) popup_call2_audio_conf_window_t1

0xa6e7,	// (0x000195e2) list_single_graphic_popup_conf2_pane_ParamLimits

0xa6e7,	// (0x000195e2) list_single_graphic_popup_conf2_pane

0xa6fa,	// (0x000195f5) list_highlight_pane_cp04

0xaf45,	// (0x00019e40) list_single_graphic_popup_conf2_pane_g1

0xa70b,	// (0x00019606) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e40d) list_single_graphic_popup_conf2_pane_g

0xaf4f,	// (0x00019e4a) list_single_graphic_popup_conf2_pane_t1

0xaf5d,	// (0x00019e58) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf5d,	// (0x00019e58) bg_popup_call2_act_pane_cp01

0xafe7,	// (0x00019ee2) call_type_pane_cp05_ParamLimits

0xafe7,	// (0x00019ee2) call_type_pane_cp05

0xb03b,	// (0x00019f36) popup_call2_audio_second_window_g1_ParamLimits

0xb03b,	// (0x00019f36) popup_call2_audio_second_window_g1

0xb08f,	// (0x00019f8a) popup_call2_audio_second_window_g2_ParamLimits

0xb08f,	// (0x00019f8a) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e412) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e412) popup_call2_audio_second_window_g

0xb0f4,	// (0x00019fef) popup_call2_audio_second_window_t1_ParamLimits

0xb0f4,	// (0x00019fef) popup_call2_audio_second_window_t1

0xb1af,	// (0x0001a0aa) popup_call2_audio_second_window_t2_ParamLimits

0xb1af,	// (0x0001a0aa) popup_call2_audio_second_window_t2

0xb202,	// (0x0001a0fd) popup_call2_audio_second_window_t3_ParamLimits

0xb202,	// (0x0001a0fd) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e419) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e419) popup_call2_audio_second_window_t

0x9973,	// (0x0001886e) bg_popup_call2_in_pane_cp02

0x997d,	// (0x00018878) call_type_pane_cp04

0x9985,	// (0x00018880) popup_call2_audio_wait_window_g1

0x998d,	// (0x00018888) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001dff0) popup_call2_audio_wait_window_g

0x9995,	// (0x00018890) popup_call2_audio_wait_window_t3

0xb2f5,	// (0x0001a1f0) bg_popup_call2_act_pane_ParamLimits

0xb2f5,	// (0x0001a1f0) bg_popup_call2_act_pane

0xb3b5,	// (0x0001a2b0) call_type_pane_cp03_ParamLimits

0xb3b5,	// (0x0001a2b0) call_type_pane_cp03

0xb419,	// (0x0001a314) popup_call2_audio_first_window_g1_ParamLimits

0xb419,	// (0x0001a314) popup_call2_audio_first_window_g1

0xb489,	// (0x0001a384) popup_call2_audio_first_window_g2_ParamLimits

0xb489,	// (0x0001a384) popup_call2_audio_first_window_g2

0xaacf,	// (0x000199ca) popup_call2_audio_first_window_g3_ParamLimits

0xaacf,	// (0x000199ca) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e422) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e422) popup_call2_audio_first_window_g

0xb567,	// (0x0001a462) popup_call2_audio_first_window_t1_ParamLimits

0xb567,	// (0x0001a462) popup_call2_audio_first_window_t1

0xb66a,	// (0x0001a565) popup_call2_audio_first_window_t4_ParamLimits

0xb66a,	// (0x0001a565) popup_call2_audio_first_window_t4

0xb74d,	// (0x0001a648) popup_call2_audio_first_window_t5_ParamLimits

0xb74d,	// (0x0001a648) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e42d) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e42d) popup_call2_audio_first_window_t

0x9bc6,	// (0x00018ac1) bg_popup_call2_act_pane_g1

0xbdba,	// (0x0001acb5) popup_cale_lunar_info_window_t1

0xbdc8,	// (0x0001acc3) popup_cale_lunar_info_window_t2

0xbdd6,	// (0x0001acd1) popup_cale_lunar_info_window_t3

0x9973,	// (0x0001886e) bg_popup_call2_bubble_pane

0xb84e,	// (0x0001a749) bg_popup_call2_in_pane_cp01_ParamLimits

0xb84e,	// (0x0001a749) bg_popup_call2_in_pane_cp01

0x964f,	// (0x0001854a) call_type_pane_cp02

0xb896,	// (0x0001a791) popup_call2_audio_out_window_g1_ParamLimits

0xb896,	// (0x0001a791) popup_call2_audio_out_window_g1

0xb8c2,	// (0x0001a7bd) popup_call2_audio_out_window_g2_ParamLimits

0xb8c2,	// (0x0001a7bd) popup_call2_audio_out_window_g2

0xb8ea,	// (0x0001a7e5) popup_call2_audio_out_window_g3_ParamLimits

0xb8ea,	// (0x0001a7e5) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e436) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e436) popup_call2_audio_out_window_g

0xb925,	// (0x0001a820) popup_call2_audio_out_window_t1_ParamLimits

0xb925,	// (0x0001a820) popup_call2_audio_out_window_t1

0xb984,	// (0x0001a87f) popup_call2_audio_out_window_t2_ParamLimits

0xb984,	// (0x0001a87f) popup_call2_audio_out_window_t2

0xb9d8,	// (0x0001a8d3) popup_call2_audio_out_window_t3_ParamLimits

0xb9d8,	// (0x0001a8d3) popup_call2_audio_out_window_t3

0xb9ee,	// (0x0001a8e9) popup_call2_audio_out_window_t4_ParamLimits

0xb9ee,	// (0x0001a8e9) popup_call2_audio_out_window_t4

0xba04,	// (0x0001a8ff) popup_call2_audio_out_window_t5_ParamLimits

0xba04,	// (0x0001a8ff) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e43f) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e43f) popup_call2_audio_out_window_t

0xba68,	// (0x0001a963) bg_popup_call2_in_pane_ParamLimits

0xba68,	// (0x0001a963) bg_popup_call2_in_pane

0xbac4,	// (0x0001a9bf) popup_call2_audio_in_window_g1_ParamLimits

0xbac4,	// (0x0001a9bf) popup_call2_audio_in_window_g1

0xbafc,	// (0x0001a9f7) popup_call2_audio_in_window_g2_ParamLimits

0xbafc,	// (0x0001a9f7) popup_call2_audio_in_window_g2

0xbb34,	// (0x0001aa2f) popup_call2_audio_in_window_g3_ParamLimits

0xbb34,	// (0x0001aa2f) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e44c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e44c) popup_call2_audio_in_window_g

0xbb8c,	// (0x0001aa87) popup_call2_audio_in_window_t1_ParamLimits

0xbb8c,	// (0x0001aa87) popup_call2_audio_in_window_t1

0xbc0c,	// (0x0001ab07) popup_call2_audio_in_window_t2_ParamLimits

0xbc0c,	// (0x0001ab07) popup_call2_audio_in_window_t2

0xbc8c,	// (0x0001ab87) popup_call2_audio_in_window_t3_ParamLimits

0xbc8c,	// (0x0001ab87) popup_call2_audio_in_window_t3

0xbca6,	// (0x0001aba1) popup_call2_audio_in_window_t4_ParamLimits

0xbca6,	// (0x0001aba1) popup_call2_audio_in_window_t4

0xbcb8,	// (0x0001abb3) popup_call2_audio_in_window_t5_ParamLimits

0xbcb8,	// (0x0001abb3) popup_call2_audio_in_window_t5

0xbccd,	// (0x0001abc8) popup_call2_audio_in_window_t6_ParamLimits

0xbccd,	// (0x0001abc8) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e455) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e455) popup_call2_audio_in_window_t

0x9bc6,	// (0x00018ac1) bg_popup_call2_in_pane_g1

0xbde4,	// (0x0001acdf) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e4bd) popup_cale_lunar_info_window_t

0x9bce,	// (0x00018ac9) bg_popup_call2_rect_pane_ParamLimits

0x9bce,	// (0x00018ac9) bg_popup_call2_rect_pane

0x9973,	// (0x0001886e) call2_cli_visual_graphic_pane

0x9973,	// (0x0001886e) call2_cli_visual_text_pane

0xbfdb,	// (0x0001aed6) smil_status_volume_pane_g3

0x0002,

0x9d2e,	// (0x00018c29) call2_cli_visual_graphic_pane_g1

0x9d2e,	// (0x00018c29) call2_cli_visual_graphic_pane_g2

0x9d2e,	// (0x00018c29) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e462) call2_cli_visual_graphic_pane_g

0xbce2,	// (0x0001abdd) bg_popup_call2_rect_pane_g1

0x9dba,	// (0x00018cb5) bg_popup_call2_rect_pane_g2

0xbcea,	// (0x0001abe5) bg_popup_call2_rect_pane_g3

0xbcf2,	// (0x0001abed) bg_popup_call2_rect_pane_g4

0xbcfa,	// (0x0001abf5) bg_popup_call2_rect_pane_g5

0xbd02,	// (0x0001abfd) bg_popup_call2_rect_pane_g6

0xbd0a,	// (0x0001ac05) bg_popup_call2_rect_pane_g7

0xbd12,	// (0x0001ac0d) bg_popup_call2_rect_pane_g8

0xbd1a,	// (0x0001ac15) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e469) bg_popup_call2_rect_pane_g

0xbd22,	// (0x0001ac1d) bg_popup_call2_bubble_pane_g1

0xbd2a,	// (0x0001ac25) bg_popup_call2_bubble_pane_g2

0xbd32,	// (0x0001ac2d) bg_popup_call2_bubble_pane_g3

0xbd3a,	// (0x0001ac35) bg_popup_call2_bubble_pane_g4

0xbd42,	// (0x0001ac3d) bg_popup_call2_bubble_pane_g5

0xbd4a,	// (0x0001ac45) bg_popup_call2_bubble_pane_g6

0xbd52,	// (0x0001ac4d) bg_popup_call2_bubble_pane_g7

0xbd5a,	// (0x0001ac55) bg_popup_call2_bubble_pane_g8

0xbd62,	// (0x0001ac5d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e47c) bg_popup_call2_bubble_pane_g

0x092c,	// (0x0000f827) aid_cale_week_size_cell_pane

0x1089,	// (0x0000ff84) aid_cams_cif_uncrop_pane_ParamLimits

0x1089,	// (0x0000ff84) aid_cams_cif_uncrop_pane

0x1239,	// (0x00010134) aid_cams_size_cell_ParamLimits

0x1239,	// (0x00010134) aid_cams_size_cell

0x124d,	// (0x00010148) grid_cams_pane_ParamLimits

0x1267,	// (0x00010162) linegrid_cams_pane_ParamLimits

0x1465,	// (0x00010360) call_video_pane_t1

0x1483,	// (0x0001037e) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e169) call_video_pane_t

0x18af,	// (0x000107aa) aid_cale_month_size_cell_pane_ParamLimits

0x18af,	// (0x000107aa) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e506) smil_status_volume_pane_g

0xbfe8,	// (0x0001aee3) volume_smil_pane_ParamLimits

0x94f4,	// (0x000183ef) aid_popup2_width_pane

0x0886,	// (0x0000f781) cell_qdial_pane_g4_ParamLimits

0x0886,	// (0x0000f781) cell_qdial_pane_g4

0x2796,	// (0x00011691) aid_blid_cardinal_pane_ParamLimits

0x27a2,	// (0x0001169d) aid_blid_destination_pane_ParamLimits

0x27a2,	// (0x0001169d) aid_blid_destination_pane

0x9bce,	// (0x00018ac9) bg_popup_call_poc_act_pane_ParamLimits

0x9bce,	// (0x00018ac9) bg_popup_call_poc_act_pane

0x9bce,	// (0x00018ac9) bg_popup_call_poc_inact_pane_ParamLimits

0x9bce,	// (0x00018ac9) bg_popup_call_poc_inact_pane

0xbd6a,	// (0x0001ac65) bg_popup_call_poc_act_pane_g1

0xbd72,	// (0x0001ac6d) bg_popup_call_poc_act_pane_g2

0xbd7a,	// (0x0001ac75) bg_popup_call_poc_act_pane_g3

0xbd3a,	// (0x0001ac35) bg_popup_call_poc_act_pane_g4

0xbd42,	// (0x0001ac3d) bg_popup_call_poc_act_pane_g5

0xbd82,	// (0x0001ac7d) bg_popup_call_poc_act_pane_g6

0xbd52,	// (0x0001ac4d) bg_popup_call_poc_act_pane_g7

0xbd8a,	// (0x0001ac85) bg_popup_call_poc_act_pane_g8

0x9973,	// (0x0001886e) main_usb_pane

0xbeef,	// (0x0001adea) popup_cale_lunar_info_window

0x175b,	// (0x00010656) im_reading_pane_t1_ParamLimits

0x9ff8,	// (0x00018ef3) list_im_pane_ParamLimits

0xa009,	// (0x00018f04) scroll_pane_cp07_ParamLimits

0x9973,	// (0x0001886e) grid_highlight_pane_cp012

0x9bce,	// (0x00018ac9) mup_scale_pane_ParamLimits

0xac7e,	// (0x00019b79) main_usb_pane_g1_ParamLimits

0xac7e,	// (0x00019b79) main_usb_pane_g1

0x3345,	// (0x00012240) main_usb_pane_g2_ParamLimits

0x3345,	// (0x00012240) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e4a6) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e4a6) main_usb_pane_g

0x335b,	// (0x00012256) main_usb_pane_t1_ParamLimits

0x335b,	// (0x00012256) main_usb_pane_t1

0x336d,	// (0x00012268) main_usb_pane_t2_ParamLimits

0x336d,	// (0x00012268) main_usb_pane_t2

0x337f,	// (0x0001227a) main_usb_pane_t3_ParamLimits

0x337f,	// (0x0001227a) main_usb_pane_t3

0x3391,	// (0x0001228c) main_usb_pane_t4_ParamLimits

0x3391,	// (0x0001228c) main_usb_pane_t4

0x33a3,	// (0x0001229e) main_usb_pane_t5_ParamLimits

0x33a3,	// (0x0001229e) main_usb_pane_t5

0x33b5,	// (0x000122b0) main_usb_pane_t6_ParamLimits

0x33b5,	// (0x000122b0) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e4ab) main_usb_pane_t_ParamLimits

0x2745,	// (0x00011640) aid_text_placing

0x274e,	// (0x00011649) main_location2_pane_t1_ParamLimits

0x2760,	// (0x0001165b) main_location2_pane_t2_ParamLimits

0x2772,	// (0x0001166d) main_location2_pane_t3_ParamLimits

0x2784,	// (0x0001167f) main_location2_pane_t4_ParamLimits

0x2784,	// (0x0001167f) main_location2_pane_t4

0xf3cf,	// (0x0001e2ca) main_location2_pane_t_ParamLimits

0x9c0a,	// (0x00018b05) find_pinb_pane_g2_ParamLimits

0x9c0a,	// (0x00018b05) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0001e016) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0001e016) find_pinb_pane_g

0x9c16,	// (0x00018b11) find_pinb_pane_t1_ParamLimits

0x9c28,	// (0x00018b23) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0001e01b) find_pinb_pane_t_ParamLimits

0x9973,	// (0x0001886e) main_call3_pane

0x1d6e,	// (0x00010c69) cale_month_day_heading_pane_t1_ParamLimits

0x1df4,	// (0x00010cef) cale_month_day_heading_pane_t2_ParamLimits

0x1e85,	// (0x00010d80) cale_month_day_heading_pane_t3_ParamLimits

0x1f16,	// (0x00010e11) cale_month_day_heading_pane_t4_ParamLimits

0x1fab,	// (0x00010ea6) cale_month_day_heading_pane_t5_ParamLimits

0x204c,	// (0x00010f47) cale_month_day_heading_pane_t6_ParamLimits

0x20ed,	// (0x00010fe8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e1a1) cale_month_day_heading_pane_t_ParamLimits

0xa25f,	// (0x0001915a) smil_status_volume_pane

0x2e40,	// (0x00011d3b) postcard_address_pane_ParamLimits

0x2e40,	// (0x00011d3b) postcard_address_pane

0x2e52,	// (0x00011d4d) postcard_message_pane_ParamLimits

0x2e52,	// (0x00011d4d) postcard_message_pane

0x3323,	// (0x0001221e) call2_cli_visual_pane_t1_ParamLimits

0x3323,	// (0x0001221e) call2_cli_visual_pane_t1

0x3b43,	// (0x00012a3e) postcard_message_pane_t1_ParamLimits

0x3b43,	// (0x00012a3e) postcard_message_pane_t1

0x3b2c,	// (0x00012a27) postcard_address_pane_t1_ParamLimits

0x3b2c,	// (0x00012a27) postcard_address_pane_t1

0x3b18,	// (0x00012a13) popup_call3_audio_in_window_ParamLimits

0x3b18,	// (0x00012a13) popup_call3_audio_in_window

0x39a3,	// (0x0001289e) bg_popup_call3_in_pane_ParamLimits

0x39a3,	// (0x0001289e) bg_popup_call3_in_pane

0x3a19,	// (0x00012914) popup_call3_audio_in_window_g1_ParamLimits

0x3a19,	// (0x00012914) popup_call3_audio_in_window_g1

0x3a39,	// (0x00012934) popup_call3_audio_in_window_g2_ParamLimits

0x3a39,	// (0x00012934) popup_call3_audio_in_window_g2

0x3a59,	// (0x00012954) popup_call3_audio_in_window_g3_ParamLimits

0x3a59,	// (0x00012954) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e50d) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e50d) popup_call3_audio_in_window_g

0x3a8a,	// (0x00012985) popup_call3_audio_in_window_t1_ParamLimits

0x3a8a,	// (0x00012985) popup_call3_audio_in_window_t1

0x3ac8,	// (0x000129c3) popup_call3_audio_in_window_t2_ParamLimits

0x3ac8,	// (0x000129c3) popup_call3_audio_in_window_t2

0x3b06,	// (0x00012a01) popup_call3_audio_in_window_t3_ParamLimits

0x3b06,	// (0x00012a01) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e516) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e516) popup_call3_audio_in_window_t

0xa9fe,	// (0x000198f9) bg_popup_call3_rect_pane

0xbce2,	// (0x0001abdd) bg_popup_call3_rect_pane_g1

0x9dba,	// (0x00018cb5) bg_popup_call3_rect_pane_g2

0xbcea,	// (0x0001abe5) bg_popup_call3_rect_pane_g3

0xbcf2,	// (0x0001abed) bg_popup_call3_rect_pane_g4

0xbcfa,	// (0x0001abf5) bg_popup_call3_rect_pane_g5

0xbd02,	// (0x0001abfd) bg_popup_call3_rect_pane_g6

0xbd0a,	// (0x0001ac05) bg_popup_call3_rect_pane_g7

0x2a86,	// (0x00011981) mup_visualizer_osc_pane

0xaadd,	// (0x000199d8) mup_visualizer_spec_pane

0x39d3,	// (0x000128ce) call3_video_qcif_pane_ParamLimits

0x39d3,	// (0x000128ce) call3_video_qcif_pane

0x39e6,	// (0x000128e1) call3_video_qcif_uncrop_pane_ParamLimits

0x39e6,	// (0x000128e1) call3_video_qcif_uncrop_pane

0x39f4,	// (0x000128ef) call3_video_subqcif_pane_ParamLimits

0x39f4,	// (0x000128ef) call3_video_subqcif_pane

0x3a08,	// (0x00012903) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a08,	// (0x00012903) call3_video_subqcif_uncrop_pane

0x3a79,	// (0x00012974) popup_call3_audio_in_window_g4_ParamLimits

0x3a79,	// (0x00012974) popup_call3_audio_in_window_g4

0x3992,	// (0x0001288d) mup_spec_half_pane

0x399b,	// (0x00012896) mup_spec_half_pane_cp

0xbf9b,	// (0x0001ae96) mup_osc_middle_pane

0xbfa4,	// (0x0001ae9f) mup_visualizer_osc_pane_g1

0x3972,	// (0x0001286d) mup_spec_bar_pane_ParamLimits

0x3972,	// (0x0001286d) mup_spec_bar_pane

0xbf88,	// (0x0001ae83) mup_spec_bar_pane_g1

0xbf92,	// (0x0001ae8d) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e501) mup_spec_bar_pane_g

0x092c,	// (0x0000f827) aid_cale_week_size_cell_pane_ParamLimits

0x0946,	// (0x0000f841) bg_cale_heading_pane_ParamLimits

0x9e3f,	// (0x00018d3a) bg_cale_pane_cp01_ParamLimits

0x095e,	// (0x0000f859) cale_week_corner_pane_ParamLimits

0x097d,	// (0x0000f878) cale_week_day_heading_pane_ParamLimits

0x099a,	// (0x0000f895) cale_week_scroll_pane_g1_ParamLimits

0x09ad,	// (0x0000f8a8) cale_week_scroll_pane_g2_ParamLimits

0x09c5,	// (0x0000f8c0) cale_week_scroll_pane_g3_ParamLimits

0x09dd,	// (0x0000f8d8) cale_week_scroll_pane_g4_ParamLimits

0x09f5,	// (0x0000f8f0) cale_week_scroll_pane_g5_ParamLimits

0x0a15,	// (0x0000f910) cale_week_scroll_pane_g6_ParamLimits

0x0a35,	// (0x0000f930) cale_week_scroll_pane_g7_ParamLimits

0x0a55,	// (0x0000f950) cale_week_scroll_pane_g8_ParamLimits

0x0a79,	// (0x0000f974) cale_week_scroll_pane_g9_ParamLimits

0x0a91,	// (0x0000f98c) cale_week_scroll_pane_g10_ParamLimits

0x0aa9,	// (0x0000f9a4) cale_week_scroll_pane_g11_ParamLimits

0x0ac1,	// (0x0000f9bc) cale_week_scroll_pane_g12_ParamLimits

0x0ad9,	// (0x0000f9d4) cale_week_scroll_pane_g13_ParamLimits

0x0ad9,	// (0x0000f9d4) cale_week_scroll_pane_g14_ParamLimits

0x0ad9,	// (0x0000f9d4) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0001e0a7) cale_week_scroll_pane_g_ParamLimits

0x0b15,	// (0x0000fa10) cale_week_time_pane_ParamLimits

0x0b39,	// (0x0000fa34) grid_cale_week_pane_ParamLimits

0x9e5d,	// (0x00018d58) listscroll_cale_week_pane_t1

0x9e6f,	// (0x00018d6a) scroll_pane_cp08_ParamLimits

0x1904,	// (0x000107ff) cale_month_corner_pane_ParamLimits

0xa229,	// (0x00019124) cale_month_pane_t1

0x1d0c,	// (0x00010c07) cale_month_week_pane_ParamLimits

0x25a1,	// (0x0001149c) popup_call_status_window_g1_ParamLimits

0x25b5,	// (0x000114b0) popup_call_status_window_g2_ParamLimits

0x25c9,	// (0x000114c4) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e251) popup_call_status_window_g_ParamLimits

0xa607,	// (0x00019502) aid_call2_pane

0x2ced,	// (0x00011be8) msg_header_pane_g1

0x2e40,	// (0x00011d3b) postcard_address2_pane_ParamLimits

0x2e40,	// (0x00011d3b) postcard_address2_pane

0x2e52,	// (0x00011d4d) postcard_message2_pane_ParamLimits

0x2e52,	// (0x00011d4d) postcard_message2_pane

0x3924,	// (0x0001281f) message2_row_pane_ParamLimits

0x3924,	// (0x0001281f) message2_row_pane

0x3940,	// (0x0001283b) address2_row_pane_ParamLimits

0x3940,	// (0x0001283b) address2_row_pane

0xbf56,	// (0x0001ae51) postcard_message2_row_pane_g1

0xbf5e,	// (0x0001ae59) postcard_message2_row_pane_t1

0xbf56,	// (0x0001ae51) address2_row_pane_g1

0xbf5e,	// (0x0001ae59) address2_row_pane_t1

0x0f2c,	// (0x0000fe27) aid_size_cell_vorec

0x9973,	// (0x0001886e) main_rss_pane

0x3953,	// (0x0001284e) rss_list_single_pane_ParamLimits

0x3953,	// (0x0001284e) rss_list_single_pane

0xbf6c,	// (0x0001ae67) rss_list_single_pane_t1

0xbf7a,	// (0x0001ae75) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e4fc) rss_list_single_pane_t

0x9973,	// (0x0001886e) main_camera2_pane

0x9973,	// (0x0001886e) main_video2_pane

0x3bbc,	// (0x00012ab7) cams_zoom_pane_cp2_ParamLimits

0x3bbc,	// (0x00012ab7) cams_zoom_pane_cp2

0x3bdc,	// (0x00012ad7) image2_vga_pane_ParamLimits

0x3bdc,	// (0x00012ad7) image2_vga_pane

0x3c2d,	// (0x00012b28) main_camera2_pane_g1_ParamLimits

0x3c2d,	// (0x00012b28) main_camera2_pane_g1

0x3c4d,	// (0x00012b48) main_camera2_pane_g2_ParamLimits

0x3c4d,	// (0x00012b48) main_camera2_pane_g2

0x3c6d,	// (0x00012b68) main_camera2_pane_g3_ParamLimits

0x3c6d,	// (0x00012b68) main_camera2_pane_g3

0x3c8d,	// (0x00012b88) main_camera2_pane_g4_ParamLimits

0x3c8d,	// (0x00012b88) main_camera2_pane_g4

0x3cad,	// (0x00012ba8) main_camera2_pane_g5_ParamLimits

0x3cad,	// (0x00012ba8) main_camera2_pane_g5

0x3ccd,	// (0x00012bc8) main_camera2_pane_g6_ParamLimits

0x3ccd,	// (0x00012bc8) main_camera2_pane_g6

0x3ced,	// (0x00012be8) main_camera2_pane_g7_ParamLimits

0x3ced,	// (0x00012be8) main_camera2_pane_g7

0x3d0d,	// (0x00012c08) main_camera2_pane_g8_ParamLimits

0x3d0d,	// (0x00012c08) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e51d) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e51d) main_camera2_pane_g

0x3d4d,	// (0x00012c48) main_camera2_pane_t1_ParamLimits

0x3d4d,	// (0x00012c48) main_camera2_pane_t1

0x3d82,	// (0x00012c7d) main_camera2_pane_t2_ParamLimits

0x3d82,	// (0x00012c7d) main_camera2_pane_t2

0x3da8,	// (0x00012ca3) main_camera2_pane_t3_ParamLimits

0x3da8,	// (0x00012ca3) main_camera2_pane_t3

0x3e06,	// (0x00012d01) main_camera2_pane_t4_ParamLimits

0x3e06,	// (0x00012d01) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e530) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e530) main_camera2_pane_t

0x3e98,	// (0x00012d93) cams_zoom_pane_cp4_ParamLimits

0x3e98,	// (0x00012d93) cams_zoom_pane_cp4

0x3eae,	// (0x00012da9) image2_cif_pane_ParamLimits

0x3eae,	// (0x00012da9) image2_cif_pane

0x3ed9,	// (0x00012dd4) image2_subqcif_pane_ParamLimits

0x3ed9,	// (0x00012dd4) image2_subqcif_pane

0x3ef3,	// (0x00012dee) main_video2_pane_g1_ParamLimits

0x3ef3,	// (0x00012dee) main_video2_pane_g1

0x3f0d,	// (0x00012e08) main_video2_pane_g2_ParamLimits

0x3f0d,	// (0x00012e08) main_video2_pane_g2

0x3f23,	// (0x00012e1e) main_video2_pane_g3_ParamLimits

0x3f23,	// (0x00012e1e) main_video2_pane_g3

0x3f39,	// (0x00012e34) main_video2_pane_g4_ParamLimits

0x3f39,	// (0x00012e34) main_video2_pane_g4

0x3f4f,	// (0x00012e4a) main_video2_pane_g5_ParamLimits

0x3f4f,	// (0x00012e4a) main_video2_pane_g5

0x3f65,	// (0x00012e60) main_video2_pane_g6_ParamLimits

0x3f65,	// (0x00012e60) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e53f) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e53f) main_video2_pane_g

0x3f7f,	// (0x00012e7a) main_video2_pane_t1_ParamLimits

0x3f7f,	// (0x00012e7a) main_video2_pane_t1

0x3fa3,	// (0x00012e9e) main_video2_pane_t2_ParamLimits

0x3fa3,	// (0x00012e9e) main_video2_pane_t2

0x3ff1,	// (0x00012eec) main_video2_pane_t3_ParamLimits

0x3ff1,	// (0x00012eec) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e54c) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e54c) main_video2_pane_t

0x3470,	// (0x0001236b) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e4ee) call_muted_g

0x9973,	// (0x0001886e) main_mup2_pane

0x4035,	// (0x00012f30) main_mup2_pane_g1_ParamLimits

0x4035,	// (0x00012f30) main_mup2_pane_g1

0x4041,	// (0x00012f3c) main_mup2_pane_g2_ParamLimits

0x4041,	// (0x00012f3c) main_mup2_pane_g2

0xc10c,	// (0x0001b007) main_mup_pane_g13_cp1

0xc114,	// (0x0001b00f) mup_volume_pane_cp1

0x405d,	// (0x00012f58) main_mup2_pane_g4_ParamLimits

0x405d,	// (0x00012f58) main_mup2_pane_g4

0x406f,	// (0x00012f6a) main_mup2_pane_g5_ParamLimits

0x406f,	// (0x00012f6a) main_mup2_pane_g5

0x4081,	// (0x00012f7c) main_mup2_pane_g6_ParamLimits

0x4081,	// (0x00012f7c) main_mup2_pane_g6

0x4093,	// (0x00012f8e) main_mup2_pane_g7_ParamLimits

0x4093,	// (0x00012f8e) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e553) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e553) main_mup2_pane_g

0x40ab,	// (0x00012fa6) main_mup2_pane_t1_ParamLimits

0x40ab,	// (0x00012fa6) main_mup2_pane_t1

0x40c1,	// (0x00012fbc) main_mup2_pane_t2_ParamLimits

0x40c1,	// (0x00012fbc) main_mup2_pane_t2

0x40d7,	// (0x00012fd2) main_mup2_pane_t3_ParamLimits

0x40d7,	// (0x00012fd2) main_mup2_pane_t3

0x40ed,	// (0x00012fe8) main_mup2_pane_t4_ParamLimits

0x40ed,	// (0x00012fe8) main_mup2_pane_t4

0x4105,	// (0x00013000) main_mup2_pane_t5_ParamLimits

0x4105,	// (0x00013000) main_mup2_pane_t5

0x411d,	// (0x00013018) main_mup2_pane_t6_ParamLimits

0x411d,	// (0x00013018) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e562) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e562) main_mup2_pane_t

0x414d,	// (0x00013048) mup2_visualizer_pane_ParamLimits

0x414d,	// (0x00013048) mup2_visualizer_pane

0x417b,	// (0x00013076) mup_progress_pane_cp_ParamLimits

0x417b,	// (0x00013076) mup_progress_pane_cp

0xc0ee,	// (0x0001afe9) mup_volume_pane_cp_ParamLimits

0xc0ee,	// (0x0001afe9) mup_volume_pane_cp

0x418f,	// (0x0001308a) mup2_visualizer_pane_g1_ParamLimits

0x418f,	// (0x0001308a) mup2_visualizer_pane_g1

0xc02d,	// (0x0001af28) mup2_visualizer_pane_g2_ParamLimits

0xc02d,	// (0x0001af28) mup2_visualizer_pane_g2

0x41a6,	// (0x000130a1) mup2_visualizer_pane_g3_ParamLimits

0x41a6,	// (0x000130a1) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e56f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e56f) mup2_visualizer_pane_g

0xadc7,	// (0x00019cc2) aid_size_cell_fmradio

0x3622,	// (0x0001251d) aid_height_parent_landcape

0xa087,	// (0x00018f82) wml_content_pane_cp

0xa08f,	// (0x00018f8a) wml_tabs_pane

0xa098,	// (0x00018f93) popup_wml_miniature_window

0xa0a0,	// (0x00018f9b) scroll_pane_cp021

0xa0b4,	// (0x00018faf) wml_content_pane_comp8

0x9973,	// (0x0001886e) bg_popup_sub_pane_cp05

0xc04b,	// (0x0001af46) popup_wml_miniature_window_g1

0xc053,	// (0x0001af4e) wml_miniature_view_pane

0x41b2,	// (0x000130ad) aid_size_wml_view

0x41ba,	// (0x000130b5) wml_miniature_view_pane_g1

0x41c3,	// (0x000130be) wml_miniature_view_pane_g2

0x41cc,	// (0x000130c7) wml_miniature_view_pane_g3

0x41d4,	// (0x000130cf) wml_miniature_view_pane_g4

0x41dc,	// (0x000130d7) wml_miniature_view_pane_g5

0x41e4,	// (0x000130df) wml_miniature_view_pane_g6

0x41ec,	// (0x000130e7) wml_miniature_view_pane_g7

0x41f4,	// (0x000130ef) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e576) wml_miniature_view_pane_g

0xc05b,	// (0x0001af56) background_graphic_ParamLimits

0xc05b,	// (0x0001af56) background_graphic

0xc067,	// (0x0001af62) wml_tabs_2_pane

0xc070,	// (0x0001af6b) wml_tabs_3_pane_ParamLimits

0xc070,	// (0x0001af6b) wml_tabs_3_pane

0xc082,	// (0x0001af7d) wml_tabs_4_pane_ParamLimits

0xc082,	// (0x0001af7d) wml_tabs_4_pane

0xc098,	// (0x0001af93) wml_tabs_5_pane_ParamLimits

0xc098,	// (0x0001af93) wml_tabs_5_pane

0xc0b2,	// (0x0001afad) wml_tabs_pane_g2_ParamLimits

0xc0b2,	// (0x0001afad) wml_tabs_pane_g2

0xc0c6,	// (0x0001afc1) wml_tabs_pane_g3_ParamLimits

0xc0c6,	// (0x0001afc1) wml_tabs_pane_g3

0x41fc,	// (0x000130f7) wml_tabs_2_active_pane_ParamLimits

0x41fc,	// (0x000130f7) wml_tabs_2_active_pane

0x4210,	// (0x0001310b) wml_tabs_2_passive_pane_ParamLimits

0x4210,	// (0x0001310b) wml_tabs_2_passive_pane

0x4224,	// (0x0001311f) wml_tabs_3_active_pane_cp_ParamLimits

0x4224,	// (0x0001311f) wml_tabs_3_active_pane_cp

0x4239,	// (0x00013134) wml_tabs_3_passive_pane_ParamLimits

0x4239,	// (0x00013134) wml_tabs_3_passive_pane

0x424c,	// (0x00013147) wml_tabs_3_passive_pane_cp_ParamLimits

0x424c,	// (0x00013147) wml_tabs_3_passive_pane_cp

0x4263,	// (0x0001315e) tabs_4_active_pane

0x426b,	// (0x00013166) tabs_4_passive_pane

0x4275,	// (0x00013170) tabs_4_passive_pane_cp

0x427d,	// (0x00013178) tabs_4_passive_pane_cp2

0x333d,	// (0x00012238) aid_height_text

0x2a5c,	// (0x00011957) mup_volume_cont_pane_ParamLimits

0x2a5c,	// (0x00011957) mup_volume_cont_pane

0x050a,	// (0x0000f405) aid_size_cell_pinb

0x0514,	// (0x0000f40f) aid_size_list_pinb

0x4167,	// (0x00013062) mup2_volume_cont_pane_ParamLimits

0x4167,	// (0x00013062) mup2_volume_cont_pane

0xc0da,	// (0x0001afd5) mup2_volume_cont_pane_g1_ParamLimits

0xc0da,	// (0x0001afd5) mup2_volume_cont_pane_g1

0x01cd,	// (0x0000f0c8) aid_size_cell_touch_ParamLimits

0x01cd,	// (0x0000f0c8) aid_size_cell_touch

0x03fa,	// (0x0000f2f5) touch_pane_ParamLimits

0x03fa,	// (0x0000f2f5) touch_pane

0x94e2,	// (0x000183dd) main_rss2_pane

0xc11c,	// (0x0001b017) listscroll_rss2_pane

0xc125,	// (0x0001b020) rss2_navigation_pane

0xc12d,	// (0x0001b028) list_rss2_pane

0xa7bd,	// (0x000196b8) scroll_pane_cp22

0xc135,	// (0x0001b030) rss2_navigation_pane_g1

0xc13e,	// (0x0001b039) rss2_navigation_pane_g2

0xc146,	// (0x0001b041) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e587) rss2_navigation_pane_g

0xc14e,	// (0x0001b049) rss2_navigation_pane_t1

0x4287,	// (0x00013182) rss2_list_single_pane_ParamLimits

0x4287,	// (0x00013182) rss2_list_single_pane

0xc15c,	// (0x0001b057) rss2_list_single_pane_t2

0xc16a,	// (0x0001b065) rss2_list_single_pane_t3_ParamLimits

0xc16a,	// (0x0001b065) rss2_list_single_pane_t3

0xc187,	// (0x0001b082) rss2_list_single_pane_t4

0x23a9,	// (0x000112a4) smil_status_pane_g1

0x9552,	// (0x0001844d) main_image2_pane_ParamLimits

0x9552,	// (0x0001844d) main_image2_pane

0x3d2d,	// (0x00012c28) main_camera2_pane_g9_ParamLimits

0x3d2d,	// (0x00012c28) main_camera2_pane_g9

0x3e5b,	// (0x00012d56) main_camera2_pane_t5_ParamLimits

0x3e5b,	// (0x00012d56) main_camera2_pane_t5

0xbffd,	// (0x0001aef8) main_camera2_pane_t6_ParamLimits

0xbffd,	// (0x0001aef8) main_camera2_pane_t6

0x429c,	// (0x00013197) main_image2_pane_g1_ParamLimits

0x429c,	// (0x00013197) main_image2_pane_g1

0x3079,	// (0x00011f74) smil2_video_pane_ParamLimits

0x3079,	// (0x00011f74) smil2_video_pane

0x9500,	// (0x000183fb) aid_zoom_text_primary_cp

0x9548,	// (0x00018443) popup_preview_fixed_window

0x9ff0,	// (0x00018eeb) im_reading_pane_g1

0x3ba4,	// (0x00012a9f) cams2_bc_adjust_pane_cp_ParamLimits

0x3ba4,	// (0x00012a9f) cams2_bc_adjust_pane_cp

0x3e8a,	// (0x00012d85) cams2_bc_adjust_pane_ParamLimits

0x3e8a,	// (0x00012d85) cams2_bc_adjust_pane

0xc195,	// (0x0001b090) cams2_bc_adjust_pane_g1

0xc19d,	// (0x0001b098) cams2_slider_pane

0xc1a6,	// (0x0001b0a1) cams2_slider_pane_g1

0xc1af,	// (0x0001b0aa) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e58e) cams2_slider_pane_g

0x0602,	// (0x0000f4fd) calc_display_pane_ParamLimits

0x062a,	// (0x0000f525) calc_paper_pane_ParamLimits

0x064d,	// (0x0000f548) grid_calc_pane_ParamLimits

0xa66d,	// (0x00019568) popup_clock_digital_window_t1_ParamLimits

0xad64,	// (0x00019c5f) main_image_pane_t1

0x05e4,	// (0x0000f4df) aid_size_cell_calc_ParamLimits

0x05e4,	// (0x0000f4df) aid_size_cell_calc

0x3668,	// (0x00012563) popup_blid_sat_info2_window_ParamLimits

0x3668,	// (0x00012563) popup_blid_sat_info2_window

0xc1d1,	// (0x0001b0cc) aid_size_cell_blid

0xc1d9,	// (0x0001b0d4) bg_popup_window_pane_cp07

0xc1fc,	// (0x0001b0f7) grid_popup_blid_pane

0xc206,	// (0x0001b101) heading_pane_cp05_ParamLimits

0xc206,	// (0x0001b101) heading_pane_cp05

0xc2d0,	// (0x0001b1cb) cell_popup_blid_pane_ParamLimits

0xc2d0,	// (0x0001b1cb) cell_popup_blid_pane

0xc2f4,	// (0x0001b1ef) cell_popup_blid_pane_g1

0xc2fc,	// (0x0001b1f7) cell_popup_blid_pane_t1

0x4137,	// (0x00013032) mup2_indicator_pane_ParamLimits

0x4137,	// (0x00013032) mup2_indicator_pane

0xa9fe,	// (0x000198f9) mup2_visualizer_osc_pane

0xc039,	// (0x0001af34) mup2_visualizer_spec_pane_ParamLimits

0xc039,	// (0x0001af34) mup2_visualizer_spec_pane

0x42b2,	// (0x000131ad) mup2_spec_half_pane

0x42bb,	// (0x000131b6) mup2_spec_half_pane_cp

0x42c3,	// (0x000131be) mup2_spec_bar_pane_ParamLimits

0x42c3,	// (0x000131be) mup2_spec_bar_pane

0xbf88,	// (0x0001ae83) mup2_spec_bar_pane_g1

0xbf92,	// (0x0001ae8d) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e501) mup2_spec_bar_pane_g

0x42e3,	// (0x000131de) mup2_osc_middle_pane

0xbfa4,	// (0x0001ae9f) mup2_visualizer_osc_pane_g1

0x9580,	// (0x0001847b) popup_number_entry_window_t1_ParamLimits

0x9593,	// (0x0001848e) popup_number_entry_window_t2_ParamLimits

0x95a5,	// (0x000184a0) popup_number_entry_window_t3_ParamLimits

0x044c,	// (0x0000f347) popup_number_entry_window_t5_ParamLimits

0x044c,	// (0x0000f347) popup_number_entry_window_t5

0xf0c6,	// (0x0001dfc1) popup_number_entry_window_t_ParamLimits

0x95b7,	// (0x000184b2) text_title_cp2_ParamLimits

0xac3e,	// (0x00019b39) aid_hotspot_pointer_text2_pane

0xac64,	// (0x00019b5f) main_viewer_pane_g9_ParamLimits

0xac64,	// (0x00019b5f) main_viewer_pane_g9

0xa229,	// (0x00019124) cale_month_pane_t1_ParamLimits

0xa294,	// (0x0001918f) bg_cale_pane_ParamLimits

0xa2ac,	// (0x000191a7) list_cale_pane_ParamLimits

0xa2bd,	// (0x000191b8) listscroll_cale_day_pane_t1

0xa2cf,	// (0x000191ca) scroll_pane_cp09_ParamLimits

0x2a8e,	// (0x00011989) main_mup_eq_pane_t1_ParamLimits

0x2a8e,	// (0x00011989) main_mup_eq_pane_t1

0x2aa8,	// (0x000119a3) main_mup_eq_pane_t2_ParamLimits

0x2aa8,	// (0x000119a3) main_mup_eq_pane_t2

0x2ac2,	// (0x000119bd) main_mup_eq_pane_t3_ParamLimits

0x2ac2,	// (0x000119bd) main_mup_eq_pane_t3

0x2ade,	// (0x000119d9) main_mup_eq_pane_t4_ParamLimits

0x2ade,	// (0x000119d9) main_mup_eq_pane_t4

0x2afa,	// (0x000119f5) main_mup_eq_pane_t5_ParamLimits

0x2afa,	// (0x000119f5) main_mup_eq_pane_t5

0x2b16,	// (0x00011a11) main_mup_eq_pane_t6_ParamLimits

0x2b16,	// (0x00011a11) main_mup_eq_pane_t6

0x2b2a,	// (0x00011a25) main_mup_eq_pane_t7_ParamLimits

0x2b2a,	// (0x00011a25) main_mup_eq_pane_t7

0x2b3e,	// (0x00011a39) main_mup_eq_pane_t8_ParamLimits

0x2b3e,	// (0x00011a39) main_mup_eq_pane_t8

0x2b52,	// (0x00011a4d) main_mup_eq_pane_t9_ParamLimits

0x2b52,	// (0x00011a4d) main_mup_eq_pane_t9

0x2b6c,	// (0x00011a67) main_mup_eq_pane_t10_ParamLimits

0x2b6c,	// (0x00011a67) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e350) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e350) main_mup_eq_pane_t

0x2c1b,	// (0x00011b16) mup_equalizer_pane_cp5_ParamLimits

0x2c2f,	// (0x00011b2a) mup_equalizer_pane_cp6_ParamLimits

0x2c43,	// (0x00011b3e) mup_equalizer_pane_cp7_ParamLimits

0x94e2,	// (0x000183dd) main_gallery_pane

0xbfad,	// (0x0001aea8) smil2_volume_pane

0xbfb5,	// (0x0001aeb0) smil_status_volume_pane_g1_ParamLimits

0xbfc8,	// (0x0001aec3) smil_status_volume_pane_g2_ParamLimits

0xbfdb,	// (0x0001aed6) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e506) smil_status_volume_pane_g_ParamLimits

0xc1d9,	// (0x0001b0d4) bg_popup_window_pane_cp07_ParamLimits

0xc1e7,	// (0x0001b0e2) blid_firmament_pane

0x42ec,	// (0x000131e7) aid_size_cell_gallery_ParamLimits

0x42ec,	// (0x000131e7) aid_size_cell_gallery

0x4302,	// (0x000131fd) grid_gallery_pane_ParamLimits

0x4302,	// (0x000131fd) grid_gallery_pane

0x431b,	// (0x00013216) cell_gallery_pane_ParamLimits

0x431b,	// (0x00013216) cell_gallery_pane

0xc30a,	// (0x0001b205) bg_cell_gallery_focus_pane_ParamLimits

0xc30a,	// (0x0001b205) bg_cell_gallery_focus_pane

0xc31c,	// (0x0001b217) cell_gallery_pane_g1_ParamLimits

0xc31c,	// (0x0001b217) cell_gallery_pane_g1

0x4364,	// (0x0001325f) cell_gallery_pane_g2_ParamLimits

0x4364,	// (0x0001325f) cell_gallery_pane_g2

0x4371,	// (0x0001326c) cell_gallery_pane_g3_ParamLimits

0x4371,	// (0x0001326c) cell_gallery_pane_g3

0xc328,	// (0x0001b223) cell_gallery_pane_g4_ParamLimits

0xc328,	// (0x0001b223) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e5b4) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e5b4) cell_gallery_pane_g

0xc334,	// (0x0001b22f) bg_cell_gallery_focus_pane_g1

0xc33c,	// (0x0001b237) bg_cell_gallery_focus_pane_g2

0xc344,	// (0x0001b23f) bg_cell_gallery_focus_pane_g3

0xc34c,	// (0x0001b247) bg_cell_gallery_focus_pane_g4

0xc354,	// (0x0001b24f) bg_cell_gallery_focus_pane_g5

0xc35c,	// (0x0001b257) bg_cell_gallery_focus_pane_g6

0xc364,	// (0x0001b25f) bg_cell_gallery_focus_pane_g7

0xc36c,	// (0x0001b267) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e5bd) bg_cell_gallery_focus_pane_g

0xc374,	// (0x0001b26f) aid_firma_cardinal

0xc388,	// (0x0001b283) blid_firmament_pane_t1

0xc39f,	// (0x0001b29a) blid_firmament_pane_t2

0xc3b6,	// (0x0001b2b1) blid_firmament_pane_t3

0xc3cd,	// (0x0001b2c8) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e5ce) blid_firmament_pane_t

0xc3e4,	// (0x0001b2df) blid_sat_info_pane

0xc3f4,	// (0x0001b2ef) blid_sat_info_pane_g1

0xc3f4,	// (0x0001b2ef) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d7) blid_sat_info_pane_g

0xc3fe,	// (0x0001b2f9) blid_sat_info_pane_t1

0xc40c,	// (0x0001b307) smil2_volume_content_pane

0xc415,	// (0x0001b310) smil2_volume_pane_g1

0xc41d,	// (0x0001b318) smil2_volume_content_pane_g1

0xc426,	// (0x0001b321) smil2_volume_content_pane_g2

0xc42f,	// (0x0001b32a) smil2_volume_content_pane_g3

0xc438,	// (0x0001b333) smil2_volume_content_pane_g4

0xc441,	// (0x0001b33c) smil2_volume_content_pane_g5

0xc44a,	// (0x0001b345) smil2_volume_content_pane_g6

0xc453,	// (0x0001b34e) smil2_volume_content_pane_g7

0xc45c,	// (0x0001b357) smil2_volume_content_pane_g8

0xc465,	// (0x0001b360) smil2_volume_content_pane_g9

0xc46e,	// (0x0001b369) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e5dc) smil2_volume_content_pane_g

0x0bed,	// (0x0000fae8) cale_week_day_heading_pane_t1_ParamLimits

0x0c32,	// (0x0000fb2d) cale_week_day_heading_pane_t2_ParamLimits

0x0c7c,	// (0x0000fb77) cale_week_day_heading_pane_t3_ParamLimits

0x0cc6,	// (0x0000fbc1) cale_week_day_heading_pane_t4_ParamLimits

0x0d10,	// (0x0000fc0b) cale_week_day_heading_pane_t5_ParamLimits

0x0d62,	// (0x0000fc5d) cale_week_day_heading_pane_t6_ParamLimits

0x0db4,	// (0x0000fcaf) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0001e0c8) cale_week_day_heading_pane_t_ParamLimits

0x9e8c,	// (0x00018d87) bg_cale_side_pane_ParamLimits

0x0df9,	// (0x0000fcf4) cale_week_time_pane_t1_ParamLimits

0x0e13,	// (0x0000fd0e) cale_week_time_pane_t2_ParamLimits

0x0e2d,	// (0x0000fd28) cale_week_time_pane_t3_ParamLimits

0x0e47,	// (0x0000fd42) cale_week_time_pane_t4_ParamLimits

0x0e61,	// (0x0000fd5c) cale_week_time_pane_t5_ParamLimits

0x0e7b,	// (0x0000fd76) cale_week_time_pane_t6_ParamLimits

0x0e95,	// (0x0000fd90) cale_week_time_pane_t7_ParamLimits

0x0eaf,	// (0x0000fdaa) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0001e0d7) cale_week_time_pane_t_ParamLimits

0x0ecf,	// (0x0000fdca) cell_cale_week_pane_g2_ParamLimits

0x9e8c,	// (0x00018d87) bg_cale_side_pane_cp01_ParamLimits

0x2196,	// (0x00011091) cale_month_week_pane_t1_ParamLimits

0x21af,	// (0x000110aa) cale_month_week_pane_t2_ParamLimits

0x21c8,	// (0x000110c3) cale_month_week_pane_t3_ParamLimits

0x21e1,	// (0x000110dc) cale_month_week_pane_t4_ParamLimits

0x21fa,	// (0x000110f5) cale_month_week_pane_t5_ParamLimits

0x2213,	// (0x0001110e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e1b0) cale_month_week_pane_t_ParamLimits

0xa23b,	// (0x00019136) cell_cale_month_pane_g1_ParamLimits

0x94e2,	// (0x000183dd) main_cale_event_viewer_pane

0x94e2,	// (0x000183dd) listscroll_cale_event_viewer_pane

0xc477,	// (0x0001b372) list_cale_ev_pane

0xc47f,	// (0x0001b37a) scroll_pane_cp023

0xc48b,	// (0x0001b386) field_cale_ev_pane_ParamLimits

0xc48b,	// (0x0001b386) field_cale_ev_pane

0xc4a9,	// (0x0001b3a4) field_cale_ev_content_pane_ParamLimits

0xc4a9,	// (0x0001b3a4) field_cale_ev_content_pane

0xc4b5,	// (0x0001b3b0) field_cale_ev_pane_g1_ParamLimits

0xc4b5,	// (0x0001b3b0) field_cale_ev_pane_g1

0xc4c1,	// (0x0001b3bc) field_cale_ev_pane_g2_ParamLimits

0xc4c1,	// (0x0001b3bc) field_cale_ev_pane_g2

0xc4d9,	// (0x0001b3d4) field_cale_ev_pane_g3_ParamLimits

0xc4d9,	// (0x0001b3d4) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e5f1) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e5f1) field_cale_ev_pane_g

0xc4f1,	// (0x0001b3ec) field_cale_ev_pane_t1_ParamLimits

0xc4f1,	// (0x0001b3ec) field_cale_ev_pane_t1

0xc508,	// (0x0001b403) field_cale_ev_content_pane_t1_ParamLimits

0xc508,	// (0x0001b403) field_cale_ev_content_pane_t1

0xab8f,	// (0x00019a8a) bg_button_pane_cp01

0x091a,	// (0x0000f815) listscroll_cale_week_pane_ParamLimits

0x9e36,	// (0x00018d31) popup_toolbar_window_cp01

0x9e5d,	// (0x00018d58) listscroll_cale_week_pane_t1_ParamLimits

0x091a,	// (0x0000f815) listscroll_cale_day_pane_ParamLimits

0x9e36,	// (0x00018d31) popup_toolbar_window_cp02

0xa2bd,	// (0x000191b8) listscroll_cale_day_pane_t1_ParamLimits

0x091a,	// (0x0000f815) main_cale_month_pane_ParamLimits

0xbf26,	// (0x0001ae21) popup_toolbar_window_cp03_ParamLimits

0xbf26,	// (0x0001ae21) popup_toolbar_window_cp03

0x2f41,	// (0x00011e3c) main_image_pane_g2_ParamLimits

0x2f41,	// (0x00011e3c) main_image_pane_g2

0x2f52,	// (0x00011e4d) main_image_pane_g3_ParamLimits

0x2f52,	// (0x00011e4d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e3e2) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e3e2) main_image_pane_g

0xad64,	// (0x00019c5f) main_image_pane_t1_ParamLimits

0x2f63,	// (0x00011e5e) main_image_pane_t2_ParamLimits

0x2f63,	// (0x00011e5e) main_image_pane_t2

0x2f75,	// (0x00011e70) main_image_pane_t3_ParamLimits

0x2f75,	// (0x00011e70) main_image_pane_t3

0x2f9d,	// (0x00011e98) main_image_pane_t4_ParamLimits

0x2f9d,	// (0x00011e98) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e3e9) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e3e9) main_image_pane_t

0x2fbd,	// (0x00011eb8) popup_image_details_window_cp01

0x2fc7,	// (0x00011ec2) popup_toobar_trans_pane_cp01_ParamLimits

0x2fc7,	// (0x00011ec2) popup_toobar_trans_pane_cp01

0x3747,	// (0x00012642) popup_image_details_window_ParamLimits

0x3747,	// (0x00012642) popup_image_details_window

0xbef9,	// (0x0001adf4) popup_image_focus_window

0x3b5e,	// (0x00012a59) camera2_autofocus_pane_ParamLimits

0x3b5e,	// (0x00012a59) camera2_autofocus_pane

0x94e2,	// (0x000183dd) bg_popup_sub_pane_cp06

0xc526,	// (0x0001b421) popup_image_focus_window_g1

0xc52e,	// (0x0001b429) popup_image_focus_window_g2

0xc536,	// (0x0001b431) popup_image_focus_window_g3

0xc53e,	// (0x0001b439) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e5f8) popup_image_focus_window_g

0xc546,	// (0x0001b441) popup_image_focus_window_t1

0xc554,	// (0x0001b44f) popup_image_focus_window_t2

0xc564,	// (0x0001b45f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e601) popup_image_focus_window_t

0xc572,	// (0x0001b46d) camera2_autofocus_pane_g1

0x9552,	// (0x0001844d) bg_tb_trans_pane_cp01

0xc580,	// (0x0001b47b) popup_image_details_window_g1

0xc593,	// (0x0001b48e) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e613) popup_image_details_window_g

0xc5bc,	// (0x0001b4b7) popup_image_details_window_t1

0xc5ce,	// (0x0001b4c9) popup_image_details_window_t2

0xc5e7,	// (0x0001b4e2) popup_image_details_window_t3

0xc5fb,	// (0x0001b4f6) popup_image_details_window_t4

0xc616,	// (0x0001b511) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e61a) popup_image_details_window_t

0x9c87,	// (0x00018b82) bg_calc_paper_pane_ParamLimits

0x94e2,	// (0x000183dd) grid_highlight_pane_cp013

0x9c9b,	// (0x00018b96) list_calc_pane_ParamLimits

0x9cad,	// (0x00018ba8) scroll_pane_cp024

0x9cb5,	// (0x00018bb0) bg_calc_display_pane_ParamLimits

0x074b,	// (0x0000f646) calc_display_pane_t1_ParamLimits

0x075d,	// (0x0000f658) calc_display_pane_t2_ParamLimits

0x9cc1,	// (0x00018bbc) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0001e048) calc_display_pane_t_ParamLimits

0x0817,	// (0x0000f712) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0001e065) cell_calc_pane_g

0x0820,	// (0x0000f71b) cell_calc_pane_t1

0x9d38,	// (0x00018c33) grid_highlight_pane_cp02_ParamLimits

0x9d4e,	// (0x00018c49) toolbar_button_pane_cp01_ParamLimits

0x9d4e,	// (0x00018c49) toolbar_button_pane_cp01

0xada9,	// (0x00019ca4) temp_image_control_pane_ParamLimits

0xada9,	// (0x00019ca4) temp_image_control_pane

0x9552,	// (0x0001844d) main_mp3_pane

0xc630,	// (0x0001b52b) temp_image_control_pane_g1_ParamLimits

0xc630,	// (0x0001b52b) temp_image_control_pane_g1

0xc63e,	// (0x0001b539) temp_image_control_pane_g2_ParamLimits

0xc63e,	// (0x0001b539) temp_image_control_pane_g2

0xc650,	// (0x0001b54b) temp_image_control_pane_g3_ParamLimits

0xc650,	// (0x0001b54b) temp_image_control_pane_g3

0x43ae,	// (0x000132a9) temp_image_control_pane_g4_ParamLimits

0x43ae,	// (0x000132a9) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e625) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e625) temp_image_control_pane_g

0xc630,	// (0x0001b52b) main_mp3_pane_g1

0x43c1,	// (0x000132bc) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e62e) main_mp3_pane_g

0xc693,	// (0x0001b58e) main_mp3_pane_t1

0x9eff,	// (0x00018dfa) main_camera_pane_g8_ParamLimits

0x9eff,	// (0x00018dfa) main_camera_pane_g8

0x11df,	// (0x000100da) main_video_pane_g7_ParamLimits

0x11df,	// (0x000100da) main_video_pane_g7

0xc01b,	// (0x0001af16) main_camera2_pane_t7_ParamLimits

0xc01b,	// (0x0001af16) main_camera2_pane_t7

0xa047,	// (0x00018f42) scroll_pane_cp025_ParamLimits

0xa047,	// (0x00018f42) scroll_pane_cp025

0xa05b,	// (0x00018f56) scroll_pane_cp026_ParamLimits

0xa05b,	// (0x00018f56) scroll_pane_cp026

0xa06a,	// (0x00018f65) wml_content_pane_ParamLimits

0x94e2,	// (0x000183dd) main_touch_calib_pane

0x4495,	// (0x00013390) main_touch_calib_pane_g1

0x44a7,	// (0x000133a2) main_touch_calib_pane_g2

0x44b9,	// (0x000133b4) main_touch_calib_pane_g3

0x44cb,	// (0x000133c6) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e64c) main_touch_calib_pane_g

0x44dd,	// (0x000133d8) main_touch_calib_pane_t1

0x44f7,	// (0x000133f2) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e655) main_touch_calib_pane_t

0xa899,	// (0x00019794) mup_progress_pane_cp02

0xa8ce,	// (0x000197c9) navi_pane_g1

0xa989,	// (0x00019884) navi_pane_mp_t3

0x9552,	// (0x0001844d) main_mp3_pane_ParamLimits

0x38cc,	// (0x000127c7) navi_pane_ParamLimits

0xc630,	// (0x0001b52b) main_mp3_pane_g1_ParamLimits

0x43c1,	// (0x000132bc) main_mp3_pane_g2_ParamLimits

0x43cf,	// (0x000132ca) main_mp3_pane_g3_ParamLimits

0x43cf,	// (0x000132ca) main_mp3_pane_g3

0x43dd,	// (0x000132d8) main_mp3_pane_g4_ParamLimits

0x43dd,	// (0x000132d8) main_mp3_pane_g4

0xc660,	// (0x0001b55b) main_mp3_pane_g5_ParamLimits

0xc660,	// (0x0001b55b) main_mp3_pane_g5

0xc66e,	// (0x0001b569) main_mp3_pane_g6_ParamLimits

0xc66e,	// (0x0001b569) main_mp3_pane_g6

0xc67b,	// (0x0001b576) main_mp3_pane_g7_ParamLimits

0xc67b,	// (0x0001b576) main_mp3_pane_g7

0xc687,	// (0x0001b582) main_mp3_pane_g8_ParamLimits

0xc687,	// (0x0001b582) main_mp3_pane_g8

0xf733,	// (0x0001e62e) main_mp3_pane_g_ParamLimits

0x43e9,	// (0x000132e4) main_mp3_pane_t2

0x43f7,	// (0x000132f2) main_mp3_pane_t3

0xc6a1,	// (0x0001b59c) main_mp3_pane_t4

0xc6af,	// (0x0001b5aa) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e63f) main_mp3_pane_t

0xc6bd,	// (0x0001b5b8) mup_progress_pane_cp01

0x9500,	// (0x000183fb) aid_zoom_text_secondary2

0xc477,	// (0x0001b372) list_cale_ev2_pane

0xc47f,	// (0x0001b37a) scroll_pane_cp023_ParamLimits

0x454d,	// (0x00013448) field_cale_ev2_pane_ParamLimits

0x454d,	// (0x00013448) field_cale_ev2_pane

0x456d,	// (0x00013468) field_cale_ev2_pane_g1_ParamLimits

0x456d,	// (0x00013468) field_cale_ev2_pane_g1

0x4579,	// (0x00013474) field_cale_ev2_pane_g2_ParamLimits

0x4579,	// (0x00013474) field_cale_ev2_pane_g2

0x4591,	// (0x0001348c) field_cale_ev2_pane_g3_ParamLimits

0x4591,	// (0x0001348c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e660) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e660) field_cale_ev2_pane_g

0x45a9,	// (0x000134a4) field_cale_ev2_pane_t1_ParamLimits

0x45a9,	// (0x000134a4) field_cale_ev2_pane_t1

0x45c0,	// (0x000134bb) field_cale_ev2_pane_t2_ParamLimits

0x45c0,	// (0x000134bb) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e669) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e669) field_cale_ev2_pane_t

0x2df6,	// (0x00011cf1) main_postcard_pane_g5_ParamLimits

0x2df6,	// (0x00011cf1) main_postcard_pane_g5

0x2e0c,	// (0x00011d07) main_postcard_pane_g6_ParamLimits

0x2e0c,	// (0x00011d07) main_postcard_pane_g6

0x0fab,	// (0x0000fea6) camera2_autofocus_pane_cp_ParamLimits

0x0fab,	// (0x0000fea6) camera2_autofocus_pane_cp

0x9552,	// (0x0001844d) main_mup3_pane

0x45d5,	// (0x000134d0) main_mup3_pane_g1_ParamLimits

0x45d5,	// (0x000134d0) main_mup3_pane_g1

0x45f7,	// (0x000134f2) main_mup3_pane_g2_ParamLimits

0x45f7,	// (0x000134f2) main_mup3_pane_g2

0x4675,	// (0x00013570) main_mup3_pane_g3_ParamLimits

0x4675,	// (0x00013570) main_mup3_pane_g3

0x46bb,	// (0x000135b6) main_mup3_pane_g4_ParamLimits

0x46bb,	// (0x000135b6) main_mup3_pane_g4

0x4701,	// (0x000135fc) main_mup3_pane_g5_ParamLimits

0x4701,	// (0x000135fc) main_mup3_pane_g5

0x4747,	// (0x00013642) main_mup3_pane_g6_ParamLimits

0x4747,	// (0x00013642) main_mup3_pane_g6

0xc6f1,	// (0x0001b5ec) main_mup3_pane_g7_ParamLimits

0xc6f1,	// (0x0001b5ec) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e679) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e679) main_mup3_pane_g

0x47c5,	// (0x000136c0) main_mup3_pane_t1_ParamLimits

0x47c5,	// (0x000136c0) main_mup3_pane_t1

0x4839,	// (0x00013734) main_mup3_pane_t2_ParamLimits

0x4839,	// (0x00013734) main_mup3_pane_t2

0x490d,	// (0x00013808) main_mup3_pane_t4_ParamLimits

0x490d,	// (0x00013808) main_mup3_pane_t4

0x4963,	// (0x0001385e) main_mup3_pane_t5_ParamLimits

0x4963,	// (0x0001385e) main_mup3_pane_t5

0x4a1f,	// (0x0001391a) main_mup3_pane_t6_ParamLimits

0x4a1f,	// (0x0001391a) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e68a) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e68a) main_mup3_pane_t

0x4ad7,	// (0x000139d2) mup3_progress_pane_ParamLimits

0x4ad7,	// (0x000139d2) mup3_progress_pane

0x4b6d,	// (0x00013a68) popup_mup3_control_window_ParamLimits

0x4b6d,	// (0x00013a68) popup_mup3_control_window

0xc6ff,	// (0x0001b5fa) popup_mup3_text_window

0x4b9f,	// (0x00013a9a) mup3_progress_pane_t1

0x4bbe,	// (0x00013ab9) mup3_progress_pane_t2

0xc707,	// (0x0001b602) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e697) mup3_progress_pane_t

0xc724,	// (0x0001b61f) mup_progress_pane_cp03

0x94e2,	// (0x000183dd) bg_tb_trans_pane_cp04

0x4bdd,	// (0x00013ad8) mup3_volume_pane

0x4be5,	// (0x00013ae0) popup_mup3_control_window_g1

0x4bee,	// (0x00013ae9) mup3_volume_pane_g1

0x4bf7,	// (0x00013af2) mup3_volume_pane_g2

0x4c00,	// (0x00013afb) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e69e) mup3_volume_pane_g

0x94e2,	// (0x000183dd) bg_tb_trans_pane_cp03

0xc734,	// (0x0001b62f) popup_mup3_text_window_g1

0xc73c,	// (0x0001b637) popup_mup3_text_window_t1

0x9d0f,	// (0x00018c0a) list_calc_item_pane_g1_ParamLimits

0xc103,	// (0x0001affe) mup_volume_pane_cp_g1

0x4511,	// (0x0001340c) main_touch_calib_pane_t3

0x4525,	// (0x00013420) main_touch_calib_pane_t4

0x4539,	// (0x00013434) main_touch_calib_pane_t5

0x94ec,	// (0x000183e7) aid_cell_size_toolbar2

0x94f4,	// (0x000183ef) aid_popup3_width_pane

0x9500,	// (0x000183fb) aid_zoom_text_msg_primary

0x0f82,	// (0x0000fe7d) vorec_t7

0x9cd3,	// (0x00018bce) bg_calc_paper_pane_g1_ParamLimits

0x9cdf,	// (0x00018bda) bg_calc_paper_pane_g2_ParamLimits

0x9ceb,	// (0x00018be6) bg_calc_paper_pane_g3_ParamLimits

0x9cf7,	// (0x00018bf2) bg_calc_paper_pane_g4_ParamLimits

0x9d03,	// (0x00018bfe) bg_calc_paper_pane_g5_ParamLimits

0x07a4,	// (0x0000f69f) bg_calc_paper_pane_g6_ParamLimits

0x07b3,	// (0x0000f6ae) bg_calc_paper_pane_g7_ParamLimits

0x07c2,	// (0x0000f6bd) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0001e04f) bg_calc_paper_pane_g_ParamLimits

0x07d5,	// (0x0000f6d0) calc_bg_paper_pane_g9_ParamLimits

0x10f6,	// (0x0000fff1) image_qvga_pane_ParamLimits

0x10f6,	// (0x0000fff1) image_qvga_pane

0x9bce,	// (0x00018ac9) bg_popup_sub_pane_cp04_ParamLimits

0xace0,	// (0x00019bdb) popup_mup_playback_window_g1_ParamLimits

0xacec,	// (0x00019be7) popup_mup_playback_window_t1_ParamLimits

0xad01,	// (0x00019bfc) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e3dd) popup_mup_playback_window_t_ParamLimits

0x4051,	// (0x00012f4c) main_mup2_pane_g3_ParamLimits

0x4051,	// (0x00012f4c) main_mup2_pane_g3

0x1506,	// (0x00010401) popup_toolbar_window_cp04

0xb0e3,	// (0x00019fde) popup_call2_audio_second_window_g3_ParamLimits

0xb0e3,	// (0x00019fde) popup_call2_audio_second_window_g3

0xb4ed,	// (0x0001a3e8) popup_call2_audio_first_window_g4_ParamLimits

0xb4ed,	// (0x0001a3e8) popup_call2_audio_first_window_g4

0xbb6c,	// (0x0001aa67) popup_call2_audio_in_window_g4_ParamLimits

0xbb6c,	// (0x0001aa67) popup_call2_audio_in_window_g4

0x2f23,	// (0x00011e1e) aid_area_sk_bg_cut_ParamLimits

0x2f23,	// (0x00011e1e) aid_area_sk_bg_cut

0xad16,	// (0x00019c11) aid_area_sk_bg_cut_2_ParamLimits

0xad16,	// (0x00019c11) aid_area_sk_bg_cut_2

0x4354,	// (0x0001324f) aid_placing_details_win

0x435c,	// (0x00013257) aid_placing_details_win_2

0xc572,	// (0x0001b46d) camera2_autofocus_pane_g1_ParamLimits

0x0393,	// (0x0000f28e) popup_fixed_preview_cale_window_ParamLimits

0x0393,	// (0x0000f28e) popup_fixed_preview_cale_window

0xaa18,	// (0x00019913) navi_slider_pane_g3

0xaa21,	// (0x0001991c) navi_slider_pane_g4

0xaa2a,	// (0x00019925) navi_slider_pane_g5

0xaa18,	// (0x00019913) navi_slider_pane_g6

0xaa33,	// (0x0001992e) navi_slider_pane_g7

0xab54,	// (0x00019a4f) mup_scale_pane_g3

0xab5d,	// (0x00019a58) mup_scale_pane_g4

0xab66,	// (0x00019a61) mup_scale_pane_g5

0x2c57,	// (0x00011b52) mup_scale_pane_g6

0x2c60,	// (0x00011b5b) mup_scale_pane_g7

0xaa18,	// (0x00019913) cams2_slider_pane_g3

0xc1b8,	// (0x0001b0b3) cams2_slider_pane_g4

0xc1c0,	// (0x0001b0bb) cams2_slider_pane_g5

0xaa18,	// (0x00019913) cams2_slider_pane_g6

0xc1c8,	// (0x0001b0c3) cams2_slider_pane_g7

0xc3f4,	// (0x0001b2ef) camera2_autofocus_pane_cp_g1

0xbecd,	// (0x0001adc8) bg_popup_preview_window_pane_cp02_ParamLimits

0xbecd,	// (0x0001adc8) bg_popup_preview_window_pane_cp02

0xc74a,	// (0x0001b645) list_fp_cale_pane_ParamLimits

0xc74a,	// (0x0001b645) list_fp_cale_pane

0xc756,	// (0x0001b651) popup_fixed_preview_cale_window_t1_ParamLimits

0xc756,	// (0x0001b651) popup_fixed_preview_cale_window_t1

0x4c09,	// (0x00013b04) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c09,	// (0x00013b04) popup_fixed_preview_cale_window_t2

0x4c1e,	// (0x00013b19) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c1e,	// (0x00013b19) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e6a5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e6a5) popup_fixed_preview_cale_window_t

0x4c33,	// (0x00013b2e) list_single_fp_cale_pane_ParamLimits

0x4c33,	// (0x00013b2e) list_single_fp_cale_pane

0xc774,	// (0x0001b66f) list_single_fp_cale_pane_g1_ParamLimits

0xc774,	// (0x0001b66f) list_single_fp_cale_pane_g1

0xc780,	// (0x0001b67b) list_single_fp_cale_pane_g2_ParamLimits

0xc780,	// (0x0001b67b) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e6ac) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e6ac) list_single_fp_cale_pane_g

0xc799,	// (0x0001b694) list_single_fp_cale_pane_t1_ParamLimits

0xc799,	// (0x0001b694) list_single_fp_cale_pane_t1

0xc7ab,	// (0x0001b6a6) list_single_fp_cale_pane_t2_ParamLimits

0xc7ab,	// (0x0001b6a6) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e6b3) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e6b3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94e2,	// (0x000183dd) main_dialer_pane

0x4c48,	// (0x00013b43) aid_cell_size_keypad

0x4c52,	// (0x00013b4d) dialer_ne_pane

0x4c5a,	// (0x00013b55) grid_dialer_command_1_pane

0x4c62,	// (0x00013b5d) grid_dialer_command_2_pane

0x4c6a,	// (0x00013b65) grid_dialer_keypad_pane

0x4c7c,	// (0x00013b77) bg_popup_call_pane_cp06_ParamLimits

0x4c7c,	// (0x00013b77) bg_popup_call_pane_cp06

0x4c88,	// (0x00013b83) dialer_ne_clear_pane_ParamLimits

0x4c88,	// (0x00013b83) dialer_ne_clear_pane

0xc7de,	// (0x0001b6d9) dialer_ne_pane_g1

0xc7e6,	// (0x0001b6e1) dialer_ne_pane_t1_ParamLimits

0xc7e6,	// (0x0001b6e1) dialer_ne_pane_t1

0x4c94,	// (0x00013b8f) dialer_ne_pane_t2_ParamLimits

0x4c94,	// (0x00013b8f) dialer_ne_pane_t2

0x4cbe,	// (0x00013bb9) dialer_ne_pane_t3_ParamLimits

0x4cbe,	// (0x00013bb9) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e6b8) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e6b8) dialer_ne_pane_t

0x4cee,	// (0x00013be9) dialer_ne_pane_t3_copy1_ParamLimits

0x4cee,	// (0x00013be9) dialer_ne_pane_t3_copy1

0x4d1d,	// (0x00013c18) cell_dialer_keypad_pane_ParamLimits

0x4d1d,	// (0x00013c18) cell_dialer_keypad_pane

0x4d34,	// (0x00013c2f) cell_dialer_command_1_pane_ParamLimits

0x4d34,	// (0x00013c2f) cell_dialer_command_1_pane

0x4d4a,	// (0x00013c45) cell_dialer_command_2_pane_ParamLimits

0x4d4a,	// (0x00013c45) cell_dialer_command_2_pane

0xc7f8,	// (0x0001b6f3) bg_button_pane_cp02_ParamLimits

0xc7f8,	// (0x0001b6f3) bg_button_pane_cp02

0x4d59,	// (0x00013c54) cell_dialer_keypad_pane_g1_ParamLimits

0x4d59,	// (0x00013c54) cell_dialer_keypad_pane_g1

0xc7f8,	// (0x0001b6f3) bg_button_pane_cp03_ParamLimits

0xc7f8,	// (0x0001b6f3) bg_button_pane_cp03

0x4d6d,	// (0x00013c68) cell_dialer_command_1_pane_g1_ParamLimits

0x4d6d,	// (0x00013c68) cell_dialer_command_1_pane_g1

0xc804,	// (0x0001b6ff) bg_button_pane_cp04

0x4d81,	// (0x00013c7c) cell_dialer_command_2_pane_g1

0xa9fe,	// (0x000198f9) bg_button_pane_cp06

0xc80c,	// (0x0001b707) dialer_ne_clear_pane_g1

0xa8da,	// (0x000197d5) navi_pane_g2

0xa908,	// (0x00019803) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e2e0) navi_pane_g

0xa997,	// (0x00019892) navi_pane_mv_g2

0xa9be,	// (0x000198b9) navi_pane_mv_g5

0x281b,	// (0x00011716) navi_pane_mv_t1

0x9cb5,	// (0x00018bb0) main_clock2_pane

0x4dcc,	// (0x00013cc7) main_clock2_list_pane_ParamLimits

0x4dcc,	// (0x00013cc7) main_clock2_list_pane

0x4e02,	// (0x00013cfd) main_clock2_pane_t1_ParamLimits

0x4e02,	// (0x00013cfd) main_clock2_pane_t1

0x4e3e,	// (0x00013d39) main_clock2_pane_t2_ParamLimits

0x4e3e,	// (0x00013d39) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e6c4) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e6c4) main_clock2_pane_t

0x4edc,	// (0x00013dd7) popup_clock_analogue_window_cp03_ParamLimits

0x4edc,	// (0x00013dd7) popup_clock_analogue_window_cp03

0x4f01,	// (0x00013dfc) popup_clock_digital_window_cp02_ParamLimits

0x4f01,	// (0x00013dfc) popup_clock_digital_window_cp02

0x4f72,	// (0x00013e6d) main_clock2_list_single_pane_ParamLimits

0x4f72,	// (0x00013e6d) main_clock2_list_single_pane

0xa9fe,	// (0x000198f9) list_highlight_pane_cp05

0xc84a,	// (0x0001b745) main_clock2_list_single_pane_t1

0x1506,	// (0x00010401) popup_toolbar_window_cp04_ParamLimits

0x437e,	// (0x00013279) camera2_autofocus_pane_g2_ParamLimits

0x437e,	// (0x00013279) camera2_autofocus_pane_g2

0x438a,	// (0x00013285) camera2_autofocus_pane_g3_ParamLimits

0x438a,	// (0x00013285) camera2_autofocus_pane_g3

0x4396,	// (0x00013291) camera2_autofocus_pane_g4_ParamLimits

0x4396,	// (0x00013291) camera2_autofocus_pane_g4

0x43a2,	// (0x0001329d) camera2_autofocus_pane_g5_ParamLimits

0x43a2,	// (0x0001329d) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e608) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e608) camera2_autofocus_pane_g

0xc6d1,	// (0x0001b5cc) camera2_autofocus_pane_cp_g2

0xc6d9,	// (0x0001b5d4) camera2_autofocus_pane_cp_g3

0xc6e1,	// (0x0001b5dc) camera2_autofocus_pane_cp_g4

0xc6e9,	// (0x0001b5e4) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e66e) camera2_autofocus_pane_cp_g

0x4c74,	// (0x00013b6f) popup_dialer_spcha_window

0x94e2,	// (0x000183dd) bg_popup_sub_pane_cp07

0xc858,	// (0x0001b753) list_spcha_pane

0xc860,	// (0x0001b75b) list_single_spcha_pane_ParamLimits

0xc860,	// (0x0001b75b) list_single_spcha_pane

0x94e2,	// (0x000183dd) list_highlight_pane_cp06

0xc871,	// (0x0001b76c) list_single_spcha_pane_t1

0xb916,	// (0x0001a811) popup_call2_audio_out_window_g4_ParamLimits

0xb916,	// (0x0001a811) popup_call2_audio_out_window_g4

0x94e2,	// (0x000183dd) main_imed2_pane

0xbf01,	// (0x0001adfc) popup_imed_adjust2_window

0x375f,	// (0x0001265a) popup_imed_trans_window_ParamLimits

0x375f,	// (0x0001265a) popup_imed_trans_window

0xc232,	// (0x0001b12d) popup_blid_sat_info2_window_t1

0xc240,	// (0x0001b13b) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e59d) popup_blid_sat_info2_window_t

0x501c,	// (0x00013f17) aid_size_cell_colour_35

0x503c,	// (0x00013f37) aid_size_cell_colour_112

0x505c,	// (0x00013f57) aid_size_cell_effect

0xbed9,	// (0x0001add4) bg_tb_trans_pane_cp02

0xa3c6,	// (0x000192c1) heading_imed_pane

0x507c,	// (0x00013f77) listscroll_imed_pane

0xc87f,	// (0x0001b77a) heading_imed_pane_g1

0xc887,	// (0x0001b782) heading_imed_pane_t1

0xc895,	// (0x0001b790) grid_imed_colour_35_pane_ParamLimits

0xc895,	// (0x0001b790) grid_imed_colour_35_pane

0x5088,	// (0x00013f83) grid_imed_effect_pane

0xc8ac,	// (0x0001b7a7) list_imed_aspect_pane

0x509e,	// (0x00013f99) scroll_pane_cp027_ParamLimits

0x509e,	// (0x00013f99) scroll_pane_cp027

0x50af,	// (0x00013faa) cell_imed_effect_pane_ParamLimits

0x50af,	// (0x00013faa) cell_imed_effect_pane

0xc8b4,	// (0x0001b7af) cell_imed_colour_pane_ParamLimits

0xc8b4,	// (0x0001b7af) cell_imed_colour_pane

0xc8f6,	// (0x0001b7f1) cell_imed_colour_pane_g1_ParamLimits

0xc8f6,	// (0x0001b7f1) cell_imed_colour_pane_g1

0xc907,	// (0x0001b802) hgihlgiht_grid_pane_cp016_ParamLimits

0xc907,	// (0x0001b802) hgihlgiht_grid_pane_cp016

0x50d6,	// (0x00013fd1) cell_imed_effect_pane_g1

0x50de,	// (0x00013fd9) grid_highlight_pane_cp017

0xc918,	// (0x0001b813) list_imed_single_pane_ParamLimits

0xc918,	// (0x0001b813) list_imed_single_pane

0x94e2,	// (0x000183dd) list_highlight_pane_cp07

0xc92d,	// (0x0001b828) list_imed_aspect_pane_comp1_t1

0xbed9,	// (0x0001add4) bg_tb_trans_pane_cp05

0xc94f,	// (0x0001b84a) popup_imed_adjust2_window_g1

0xc976,	// (0x0001b871) popup_imed_adjust2_window_t1

0xc98e,	// (0x0001b889) slider_imed_adjust_pane

0xc9a2,	// (0x0001b89d) slider_imed_adjust_pane_g1

0xc9b2,	// (0x0001b8ad) slider_imed_adjust_pane_g2

0xc9c2,	// (0x0001b8bd) slider_imed_adjust_pane_g3

0xc9d3,	// (0x0001b8ce) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e6e1) slider_imed_adjust_pane_g

0x50e7,	// (0x00013fe2) aid_size_cell_clipart2

0x50f3,	// (0x00013fee) grid_imed_clipart_pane

0xc9e4,	// (0x0001b8df) scroll_pane_cp031

0x50fd,	// (0x00013ff8) cell_imed_clipart_pane_ParamLimits

0x50fd,	// (0x00013ff8) cell_imed_clipart_pane

0x511f,	// (0x0001401a) cell_imed_clipart_pane_g1

0x94e2,	// (0x000183dd) grid_highlight_pane_cp014

0x4de1,	// (0x00013cdc) main_clock2_pane_g1_ParamLimits

0x4de1,	// (0x00013cdc) main_clock2_pane_g1

0x4f1d,	// (0x00013e18) aid_call2_pane_cp10

0x4f2f,	// (0x00013e2a) aid_call_pane_cp10

0xa83b,	// (0x00019736) popup_clock_analogue_window_cp10_g1

0xa83b,	// (0x00019736) popup_clock_analogue_window_cp10_g2

0x4f41,	// (0x00013e3c) popup_clock_analogue_window_cp10_g3

0x4f41,	// (0x00013e3c) popup_clock_analogue_window_cp10_g4

0xa83b,	// (0x00019736) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e6cf) popup_clock_analogue_window_cp10_g

0x4f53,	// (0x00013e4e) popup_clock_analogue_window_cp10_t1

0x4f84,	// (0x00013e7f) clock_digital_number_pane_cp10_ParamLimits

0x4f84,	// (0x00013e7f) clock_digital_number_pane_cp10

0x4f9c,	// (0x00013e97) clock_digital_number_pane_cp11_ParamLimits

0x4f9c,	// (0x00013e97) clock_digital_number_pane_cp11

0x4fb4,	// (0x00013eaf) clock_digital_number_pane_cp12_ParamLimits

0x4fb4,	// (0x00013eaf) clock_digital_number_pane_cp12

0x4fcc,	// (0x00013ec7) clock_digital_number_pane_cp13_ParamLimits

0x4fcc,	// (0x00013ec7) clock_digital_number_pane_cp13

0x4fe4,	// (0x00013edf) clock_digital_separator_pane_cp10_ParamLimits

0x4fe4,	// (0x00013edf) clock_digital_separator_pane_cp10

0x4ffc,	// (0x00013ef7) popup_clock_digital_window_cp02_t1_ParamLimits

0x4ffc,	// (0x00013ef7) popup_clock_digital_window_cp02_t1

0x9bc6,	// (0x00018ac1) clock_digital_number_pane_cp10_g1

0x9bc6,	// (0x00018ac1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e6ea) clock_digital_number_pane_cp10_g

0x9bc6,	// (0x00018ac1) clock_digital_separator_pane_cp10_g1

0x9bc6,	// (0x00018ac1) clock_digital_separator_pane_g2_cp10

0xa9c6,	// (0x000198c1) navi_pane_vded_g4

0xa9cf,	// (0x000198ca) navi_pane_vded_g5

0xa9d8,	// (0x000198d3) navi_pane_vded_t1

0x94e2,	// (0x000183dd) main_vded_pane

0x5128,	// (0x00014023) main_vded_pane_g1

0x5132,	// (0x0001402d) main_vded_pane_g2

0x513c,	// (0x00014037) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e6ef) main_vded_pane_g

0x5146,	// (0x00014041) main_vded_pane_t1

0x5154,	// (0x0001404f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e6f6) main_vded_pane_t

0x5162,	// (0x0001405d) vded_slider_pane

0x516a,	// (0x00014065) vded_video_pane

0xc9ec,	// (0x0001b8e7) vded_video_pane_g1

0x5172,	// (0x0001406d) vded_video_pane_g2

0xc3f4,	// (0x0001b2ef) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e6fb) vded_video_pane_g

0xc9f6,	// (0x0001b8f1) vded_slider_pane_g1

0xc103,	// (0x0001affe) vded_slider_pane_g2

0xc9ff,	// (0x0001b8fa) vded_slider_pane_g3

0xca08,	// (0x0001b903) vded_slider_pane_g4

0xca11,	// (0x0001b90c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e702) vded_slider_pane_g

0x4b55,	// (0x00013a50) mup3_rocker_pane_ParamLimits

0x4b55,	// (0x00013a50) mup3_rocker_pane

0x517b,	// (0x00014076) mup3_control_keys_pane_g1

0x5183,	// (0x0001407e) mup3_control_keys_pane_g2

0x518b,	// (0x00014086) mup3_control_keys_pane_g3

0x5193,	// (0x0001408e) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e70d) mup3_control_keys_pane_g

0x03ca,	// (0x0000f2c5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03ca,	// (0x0000f2c5) popup_toolbar2_fixed_window_cp01

0x4b89,	// (0x00013a84) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b89,	// (0x00013a84) popup_toolbar2_fixed_window_cp02

0xb255,	// (0x0001a150) popup_call2_audio_second_window_t4_ParamLimits

0xb255,	// (0x0001a150) popup_call2_audio_second_window_t4

0xb783,	// (0x0001a67e) popup_call2_audio_first_window_t6_ParamLimits

0xb783,	// (0x0001a67e) popup_call2_audio_first_window_t6

0xba19,	// (0x0001a914) popup_call2_audio_out_window_t6_ParamLimits

0xba19,	// (0x0001a914) popup_call2_audio_out_window_t6

0x94e2,	// (0x000183dd) main_vitu_pane

0x51a3,	// (0x0001409e) aid_size_cell_itu_ParamLimits

0x51a3,	// (0x0001409e) aid_size_cell_itu

0x9552,	// (0x0001844d) bg_popup_window_pane_cp08_ParamLimits

0x9552,	// (0x0001844d) bg_popup_window_pane_cp08

0x51b9,	// (0x000140b4) field_vitu_entry_pane_ParamLimits

0x51b9,	// (0x000140b4) field_vitu_entry_pane

0x51d0,	// (0x000140cb) grid_vitu_function_pane_ParamLimits

0x51d0,	// (0x000140cb) grid_vitu_function_pane

0x51eb,	// (0x000140e6) grid_vitu_itu_pane_ParamLimits

0x51eb,	// (0x000140e6) grid_vitu_itu_pane

0x5209,	// (0x00014104) cell_vitu_itu_pane_ParamLimits

0x5209,	// (0x00014104) cell_vitu_itu_pane

0x522b,	// (0x00014126) cell_vitu_function_pane_ParamLimits

0x522b,	// (0x00014126) cell_vitu_function_pane

0x9552,	// (0x0001844d) bg_popup_sub_pane_cp08_ParamLimits

0x9552,	// (0x0001844d) bg_popup_sub_pane_cp08

0x5244,	// (0x0001413f) field_vitu_entry_pane_t1_ParamLimits

0x5244,	// (0x0001413f) field_vitu_entry_pane_t1

0xca32,	// (0x0001b92d) field_vitu_entry_pane_t2_ParamLimits

0xca32,	// (0x0001b92d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e71b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e71b) field_vitu_entry_pane_t

0xca4f,	// (0x0001b94a) bg_button_pane_cp05_ParamLimits

0xca4f,	// (0x0001b94a) bg_button_pane_cp05

0x5262,	// (0x0001415d) cell_vitu_itu_pane_g1

0x527a,	// (0x00014175) cell_vitu_itu_pane_t1_ParamLimits

0x527a,	// (0x00014175) cell_vitu_itu_pane_t1

0x528c,	// (0x00014187) cell_vitu_itu_pane_t2_ParamLimits

0x528c,	// (0x00014187) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e720) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e720) cell_vitu_itu_pane_t

0xca5d,	// (0x0001b958) bg_button_pane_cp07

0x52c1,	// (0x000141bc) cell_vitu_function_pane_g1

0x9c55,	// (0x00018b50) main_calc_pane_g1

0x01f1,	// (0x0000f0ec) aid_visual_content_pane

0x94e2,	// (0x000183dd) main_vradio_pane

0x52ca,	// (0x000141c5) main_vradio_pane_g1_ParamLimits

0x52ca,	// (0x000141c5) main_vradio_pane_g1

0xca67,	// (0x0001b962) main_vradio_pane_g2_ParamLimits

0xca67,	// (0x0001b962) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e727) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e727) main_vradio_pane_g

0x52e3,	// (0x000141de) main_vradio_pane_t1_ParamLimits

0x52e3,	// (0x000141de) main_vradio_pane_t1

0x52f8,	// (0x000141f3) main_vradio_pane_t2_ParamLimits

0x52f8,	// (0x000141f3) main_vradio_pane_t2

0xca74,	// (0x0001b96f) main_vradio_pane_t3_ParamLimits

0xca74,	// (0x0001b96f) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e72c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e72c) main_vradio_pane_t

0x530d,	// (0x00014208) vradio_rocker_control_pane_ParamLimits

0x530d,	// (0x00014208) vradio_rocker_control_pane

0x531f,	// (0x0001421a) vradio_station_info_pane_ParamLimits

0x531f,	// (0x0001421a) vradio_station_info_pane

0xca88,	// (0x0001b983) vradio_frequency_info_pane_ParamLimits

0xca88,	// (0x0001b983) vradio_frequency_info_pane

0xc3f4,	// (0x0001b2ef) vradio_station_info_pane_g1

0xca97,	// (0x0001b992) vradio_station_info_pane_t1_ParamLimits

0xca97,	// (0x0001b992) vradio_station_info_pane_t1

0xcab9,	// (0x0001b9b4) vradio_station_info_pane_t2_ParamLimits

0xcab9,	// (0x0001b9b4) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e733) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e733) vradio_station_info_pane_t

0xcacb,	// (0x0001b9c6) vradio_tuning_pane

0xcad3,	// (0x0001b9ce) vradio_rocker_control_pane_g1

0xcadb,	// (0x0001b9d6) vradio_rocker_control_pane_g2

0xcae3,	// (0x0001b9de) vradio_rocker_control_pane_g3

0xcaeb,	// (0x0001b9e6) vradio_rocker_control_pane_g4

0xcaf3,	// (0x0001b9ee) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e738) vradio_rocker_control_pane_g

0x5331,	// (0x0001422c) vradio_frequency_info_pane_g1

0xcafb,	// (0x0001b9f6) vradio_frequency_info_pane_t1_ParamLimits

0xcafb,	// (0x0001b9f6) vradio_frequency_info_pane_t1

0x533b,	// (0x00014236) vradio_tuning_pane_g1

0x5346,	// (0x00014241) vradio_tuning_pane_t1

0x9510,	// (0x0001840b) area_side_right_pane_ParamLimits

0x9510,	// (0x0001840b) area_side_right_pane

0xbe94,	// (0x0001ad8f) status_small_pane_g1

0xbe9c,	// (0x0001ad97) status_small_pane_g2

0xbea5,	// (0x0001ada0) status_small_pane_g3

0xbeae,	// (0x0001ada9) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e4f3) status_small_pane_g

0xbeb7,	// (0x0001adb2) status_small_pane_t1

0x94e2,	// (0x000183dd) main_video3_pane

0xcb0f,	// (0x0001ba0a) cams_zoom_vslider_pane

0xcb17,	// (0x0001ba12) image3_wide_pane_ParamLimits

0xcb17,	// (0x0001ba12) image3_wide_pane

0xcb31,	// (0x0001ba2c) image3_wide_small_pane

0xcb3d,	// (0x0001ba38) main_video3_pane_g1_ParamLimits

0xcb3d,	// (0x0001ba38) main_video3_pane_g1

0xcb59,	// (0x0001ba54) main_video3_pane_g2_ParamLimits

0xcb59,	// (0x0001ba54) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e743) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e743) main_video3_pane_g

0xcb75,	// (0x0001ba70) main_video3_pane_t1_ParamLimits

0xcb75,	// (0x0001ba70) main_video3_pane_t1

0xcba0,	// (0x0001ba9b) main_video3_pane_t2_ParamLimits

0xcba0,	// (0x0001ba9b) main_video3_pane_t2

0xcbcb,	// (0x0001bac6) main_video3_pane_t3_ParamLimits

0xcbcb,	// (0x0001bac6) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e748) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e748) main_video3_pane_t

0xcbf8,	// (0x0001baf3) cams_zoom_vslider_pane_g1

0xcc01,	// (0x0001bafc) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e74f) cams_zoom_vslider_pane_g

0xcc09,	// (0x0001bb04) small_slider_vertical_pane

0xc3f4,	// (0x0001b2ef) small_slider_vertical_pane_g1

0xc3f4,	// (0x0001b2ef) small_slider_vertical_pane_g2

0xcc11,	// (0x0001bb0c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e754) small_slider_vertical_pane_g

0x94e2,	// (0x000183dd) main_hwr_training_pane

0xcc1a,	// (0x0001bb15) hwr_training_instruct_pane_ParamLimits

0xcc1a,	// (0x0001bb15) hwr_training_instruct_pane

0x5355,	// (0x00014250) hwr_training_navi_pane_ParamLimits

0x5355,	// (0x00014250) hwr_training_navi_pane

0x5374,	// (0x0001426f) hwr_training_write_pane_ParamLimits

0x5374,	// (0x0001426f) hwr_training_write_pane

0x94e2,	// (0x000183dd) bg_frame_shadow_pane

0xcc51,	// (0x0001bb4c) hwr_training_write_pane_g1

0xcc59,	// (0x0001bb54) hwr_training_write_pane_g2

0xcc61,	// (0x0001bb5c) hwr_training_write_pane_g3

0xcc69,	// (0x0001bb64) hwr_training_write_pane_g4

0xcc71,	// (0x0001bb6c) hwr_training_write_pane_g5

0xcc79,	// (0x0001bb74) hwr_training_write_pane_g6

0xcc81,	// (0x0001bb7c) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e75b) hwr_training_write_pane_g

0xcc89,	// (0x0001bb84) hwr_training_navi_pane_g1_ParamLimits

0xcc89,	// (0x0001bb84) hwr_training_navi_pane_g1

0xcc9b,	// (0x0001bb96) hwr_training_navi_pane_g2_ParamLimits

0xcc9b,	// (0x0001bb96) hwr_training_navi_pane_g2

0xccad,	// (0x0001bba8) hwr_training_navi_pane_g3_ParamLimits

0xccad,	// (0x0001bba8) hwr_training_navi_pane_g3

0xccbd,	// (0x0001bbb8) hwr_training_navi_pane_g4_ParamLimits

0xccbd,	// (0x0001bbb8) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e76a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e76a) hwr_training_navi_pane_g

0xccca,	// (0x0001bbc5) hwr_training_navi_pane_t1

0x53bc,	// (0x000142b7) list_single_hwr_training_instruct_pane_ParamLimits

0x53bc,	// (0x000142b7) list_single_hwr_training_instruct_pane

0xccd8,	// (0x0001bbd3) list_single_hwr_training_instruct_pane_t1

0xc334,	// (0x0001b22f) bg_frame_shadow_pane_g1

0xcce7,	// (0x0001bbe2) bg_frame_shadow_pane_g2

0xccef,	// (0x0001bbea) bg_frame_shadow_pane_g3

0xccf7,	// (0x0001bbf2) bg_frame_shadow_pane_g4

0xccff,	// (0x0001bbfa) bg_frame_shadow_pane_g5

0xcd07,	// (0x0001bc02) bg_frame_shadow_pane_g6

0xcd0f,	// (0x0001bc0a) bg_frame_shadow_pane_g7

0x9d92,	// (0x00018c8d) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e775) bg_frame_shadow_pane_g

0x94e2,	// (0x000183dd) main_video_tele_dialer_pane

0x53d1,	// (0x000142cc) aid_size_cell_video_keypad_ParamLimits

0x53d1,	// (0x000142cc) aid_size_cell_video_keypad

0x53eb,	// (0x000142e6) grid_video_dialer_keypad_pane_ParamLimits

0x53eb,	// (0x000142e6) grid_video_dialer_keypad_pane

0x5437,	// (0x00014332) video_down_pane_cp_ParamLimits

0x5437,	// (0x00014332) video_down_pane_cp

0x5469,	// (0x00014364) cell_video_dialer_keypad_pane_ParamLimits

0x5469,	// (0x00014364) cell_video_dialer_keypad_pane

0xcd17,	// (0x0001bc12) bg_button_pane_cp08_ParamLimits

0xcd17,	// (0x0001bc12) bg_button_pane_cp08

0x548b,	// (0x00014386) cell_video_dialer_keypad_pane_g1_ParamLimits

0x548b,	// (0x00014386) cell_video_dialer_keypad_pane_g1

0x4b3f,	// (0x00013a3a) mup3_rocker2_pane_ParamLimits

0x4b3f,	// (0x00013a3a) mup3_rocker2_pane

0xc3f4,	// (0x0001b2ef) mup3_rocker2_pane_g1

0x3640,	// (0x0001253b) main_dialer2_pane

0x94e2,	// (0x000183dd) main_mp4_pane

0xcd2b,	// (0x0001bc26) main_mp4_pane_g1_ParamLimits

0xcd2b,	// (0x0001bc26) main_mp4_pane_g1

0xcd2b,	// (0x0001bc26) main_mp4_pane_g2_ParamLimits

0xcd2b,	// (0x0001bc26) main_mp4_pane_g2

0x54c2,	// (0x000143bd) main_mp4_pane_g3_ParamLimits

0x54c2,	// (0x000143bd) main_mp4_pane_g3

0xcd39,	// (0x0001bc34) main_mp4_pane_g4_ParamLimits

0xcd39,	// (0x0001bc34) main_mp4_pane_g4

0xcd61,	// (0x0001bc5c) main_mp4_pane_g5_ParamLimits

0xcd61,	// (0x0001bc5c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e795) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e795) main_mp4_pane_g

0xcdb1,	// (0x0001bcac) main_mp4_pane_t1_ParamLimits

0xcdb1,	// (0x0001bcac) main_mp4_pane_t1

0xce0d,	// (0x0001bd08) main_mp4_pane_t2_ParamLimits

0xce0d,	// (0x0001bd08) main_mp4_pane_t2

0xce5f,	// (0x0001bd5a) main_mp4_pane_t3_ParamLimits

0xce5f,	// (0x0001bd5a) main_mp4_pane_t3

0xce7f,	// (0x0001bd7a) main_mp4_pane_t4_ParamLimits

0xce7f,	// (0x0001bd7a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e7a2) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e7a2) main_mp4_pane_t

0xcec3,	// (0x0001bdbe) mp4_progress_pane_ParamLimits

0xcec3,	// (0x0001bdbe) mp4_progress_pane

0xcf0d,	// (0x0001be08) mp4_rocker_pane_ParamLimits

0xcf0d,	// (0x0001be08) mp4_rocker_pane

0xcf35,	// (0x0001be30) mp4_progress_pane_t1

0xcf4e,	// (0x0001be49) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e7ab) mp4_progress_pane_t

0xcf67,	// (0x0001be62) mup_progress_pane_cp04

0xc3f4,	// (0x0001b2ef) mp4_rocker_pane_g1

0x54fe,	// (0x000143f9) aid_cell_size_keypad2_ParamLimits

0x54fe,	// (0x000143f9) aid_cell_size_keypad2

0x5514,	// (0x0001440f) dialer2_ne_pane_ParamLimits

0x5514,	// (0x0001440f) dialer2_ne_pane

0x552e,	// (0x00014429) grid_dialer2_keypad_pane_ParamLimits

0x552e,	// (0x00014429) grid_dialer2_keypad_pane

0xc1d9,	// (0x0001b0d4) bg_popup_call_pane_cp07_ParamLimits

0xc1d9,	// (0x0001b0d4) bg_popup_call_pane_cp07

0x554a,	// (0x00014445) dialer2_ne_pane_t1_ParamLimits

0x554a,	// (0x00014445) dialer2_ne_pane_t1

0x5585,	// (0x00014480) cell_dialer2_keypad_pane_ParamLimits

0x5585,	// (0x00014480) cell_dialer2_keypad_pane

0xcf85,	// (0x0001be80) bg_button_pane_pane_cp04_ParamLimits

0xcf85,	// (0x0001be80) bg_button_pane_pane_cp04

0x55a7,	// (0x000144a2) cell_dialer2_keypad_pane_g1_ParamLimits

0x55a7,	// (0x000144a2) cell_dialer2_keypad_pane_g1

0x13da,	// (0x000102d5) aid_placing_vt_set_content_ParamLimits

0x13da,	// (0x000102d5) aid_placing_vt_set_content

0x1402,	// (0x000102fd) aid_placing_vt_set_title_ParamLimits

0x1402,	// (0x000102fd) aid_placing_vt_set_title

0x94e2,	// (0x000183dd) main_image3_pane

0x566d,	// (0x00014568) area_side_right_pane_cp01_ParamLimits

0x566d,	// (0x00014568) area_side_right_pane_cp01

0xcd2b,	// (0x0001bc26) main_image3_pane_g1_ParamLimits

0xcd2b,	// (0x0001bc26) main_image3_pane_g1

0x5684,	// (0x0001457f) main_image3_pane_g2_ParamLimits

0x5684,	// (0x0001457f) main_image3_pane_g2

0x56ac,	// (0x000145a7) main_image3_pane_g3_ParamLimits

0x56ac,	// (0x000145a7) main_image3_pane_g3

0x56d6,	// (0x000145d1) main_image3_pane_g4_ParamLimits

0x56d6,	// (0x000145d1) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e7ba) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e7ba) main_image3_pane_g

0x5700,	// (0x000145fb) main_image3_pane_t1_ParamLimits

0x5700,	// (0x000145fb) main_image3_pane_t1

0x5758,	// (0x00014653) main_image3_pane_t2_ParamLimits

0x5758,	// (0x00014653) main_image3_pane_t2

0x57aa,	// (0x000146a5) main_image3_pane_t3_ParamLimits

0x57aa,	// (0x000146a5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e7c3) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e7c3) main_image3_pane_t

0x9552,	// (0x0001844d) grid_sctrl_middle_pane_cp01_ParamLimits

0x9552,	// (0x0001844d) grid_sctrl_middle_pane_cp01

0x5832,	// (0x0001472d) cell_sctrl_middle_pane_cp01_ParamLimits

0x5832,	// (0x0001472d) cell_sctrl_middle_pane_cp01

0x584f,	// (0x0001474a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x584f,	// (0x0001474a) cell_sctrl_middle_pane_cp01_g1

0x94e2,	// (0x000183dd) main_call4_pane

0x5865,	// (0x00014760) aid_size_button_call4_ParamLimits

0x5865,	// (0x00014760) aid_size_button_call4

0x5896,	// (0x00014791) call4_windows_pane_ParamLimits

0x5896,	// (0x00014791) call4_windows_pane

0x58b6,	// (0x000147b1) grid_call4_button_pane_ParamLimits

0x58b6,	// (0x000147b1) grid_call4_button_pane

0xcfc3,	// (0x0001bebe) call4_windows_conf_pane

0xcfda,	// (0x0001bed5) popup_call4_audio_first_window_ParamLimits

0xcfda,	// (0x0001bed5) popup_call4_audio_first_window

0xd026,	// (0x0001bf21) popup_call4_audio_second_window_ParamLimits

0xd026,	// (0x0001bf21) popup_call4_audio_second_window

0xd03a,	// (0x0001bf35) popup_call4_audio_wait_window_ParamLimits

0xd03a,	// (0x0001bf35) popup_call4_audio_wait_window

0x58e3,	// (0x000147de) cell_call4_button_pane_ParamLimits

0x58e3,	// (0x000147de) cell_call4_button_pane

0x590c,	// (0x00014807) bg_button_pane_cp09_ParamLimits

0x590c,	// (0x00014807) bg_button_pane_cp09

0x5918,	// (0x00014813) cell_call4_button_pane_g1_ParamLimits

0x5918,	// (0x00014813) cell_call4_button_pane_g1

0x593e,	// (0x00014839) cell_call4_button_pane_t1_ParamLimits

0x593e,	// (0x00014839) cell_call4_button_pane_t1

0xd082,	// (0x0001bf7d) popup_call4_audio_conf_window_ParamLimits

0xd082,	// (0x0001bf7d) popup_call4_audio_conf_window

0x4b9f,	// (0x00013a9a) mup3_progress_pane_t1_ParamLimits

0x4bbe,	// (0x00013ab9) mup3_progress_pane_t2_ParamLimits

0xc707,	// (0x0001b602) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e697) mup3_progress_pane_t_ParamLimits

0xc724,	// (0x0001b61f) mup_progress_pane_cp03_ParamLimits

0x519b,	// (0x00014096) mup3_control_keys_pane_g4_copy1

0xcef1,	// (0x0001bdec) mp4_rocker2_pane_ParamLimits

0xcef1,	// (0x0001bdec) mp4_rocker2_pane

0xd096,	// (0x0001bf91) mp4_rocker2_pane_g1

0xd09e,	// (0x0001bf99) mp4_rocker2_pane_g2

0xd0a6,	// (0x0001bfa1) mp4_rocker2_pane_g3

0xd0ae,	// (0x0001bfa9) mp4_rocker2_pane_g4

0xd0b6,	// (0x0001bfb1) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e7cc) mp4_rocker2_pane_g

0x94e2,	// (0x000183dd) main_camera4_pane

0x94e2,	// (0x000183dd) main_video4_pane

0x5405,	// (0x00014300) main_video_tele_dialer_pane_t1_ParamLimits

0x5405,	// (0x00014300) main_video_tele_dialer_pane_t1

0x541e,	// (0x00014319) main_video_tele_dialer_pane_t2_ParamLimits

0x541e,	// (0x00014319) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e786) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e786) main_video_tele_dialer_pane_t

0x597c,	// (0x00014877) cam4_autofocus_pane_ParamLimits

0x597c,	// (0x00014877) cam4_autofocus_pane

0x5992,	// (0x0001488d) cam4_image_uncrop_pane_ParamLimits

0x5992,	// (0x0001488d) cam4_image_uncrop_pane

0x59ac,	// (0x000148a7) cam4_indicators_pane_ParamLimits

0x59ac,	// (0x000148a7) cam4_indicators_pane

0x59d7,	// (0x000148d2) main_camera4_pane_g1_ParamLimits

0x59d7,	// (0x000148d2) main_camera4_pane_g1

0x59e9,	// (0x000148e4) main_camera4_pane_g2_ParamLimits

0x59e9,	// (0x000148e4) main_camera4_pane_g2

0x59fc,	// (0x000148f7) main_camera4_pane_g3_ParamLimits

0x59fc,	// (0x000148f7) main_camera4_pane_g3

0x5a0f,	// (0x0001490a) main_camera4_pane_g4_ParamLimits

0x5a0f,	// (0x0001490a) main_camera4_pane_g4

0x5a22,	// (0x0001491d) main_camera4_pane_g5_ParamLimits

0x5a22,	// (0x0001491d) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e7d7) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e7d7) main_camera4_pane_g

0x5a46,	// (0x00014941) main_camera4_pane_t1_ParamLimits

0x5a46,	// (0x00014941) main_camera4_pane_t1

0xc660,	// (0x0001b55b) bg_tb_trans_pane_cp06

0xd0e2,	// (0x0001bfdd) cam4_indicators_pane_g1

0xd0f3,	// (0x0001bfee) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e7f2) cam4_indicators_pane_g

0xd111,	// (0x0001c00c) cam4_indicators_pane_t1

0x5aaa,	// (0x000149a5) main_video4_pane_g1_ParamLimits

0x5aaa,	// (0x000149a5) main_video4_pane_g1

0x5ab9,	// (0x000149b4) main_video4_pane_g2_ParamLimits

0x5ab9,	// (0x000149b4) main_video4_pane_g2

0x5ac8,	// (0x000149c3) main_video4_pane_g3_ParamLimits

0x5ac8,	// (0x000149c3) main_video4_pane_g3

0x5ad7,	// (0x000149d2) main_video4_pane_g4_ParamLimits

0x5ad7,	// (0x000149d2) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e7f9) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e7f9) main_video4_pane_g

0x5af5,	// (0x000149f0) vid4_indicators_pane_ParamLimits

0x5af5,	// (0x000149f0) vid4_indicators_pane

0x5b23,	// (0x00014a1e) video4_image_uncrop_cif_pane_ParamLimits

0x5b23,	// (0x00014a1e) video4_image_uncrop_cif_pane

0x5b3d,	// (0x00014a38) video4_image_uncrop_nhd_pane_ParamLimits

0x5b3d,	// (0x00014a38) video4_image_uncrop_nhd_pane

0x5992,	// (0x0001488d) video4_image_uncrop_vga_pane_ParamLimits

0x5992,	// (0x0001488d) video4_image_uncrop_vga_pane

0x9552,	// (0x0001844d) bg_tb_trans_pane_cp07

0xd13d,	// (0x0001c038) vid4_indicators_pane_g1

0xd151,	// (0x0001c04c) vid4_indicators_pane_g2

0xd165,	// (0x0001c060) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e804) vid4_indicators_pane_g

0xd194,	// (0x0001c08f) vid4_indicators_pane_t1

0x5b51,	// (0x00014a4c) cam4_autofocus_pane_g1

0x5b59,	// (0x00014a54) cam4_autofocus_pane_g2

0x5b61,	// (0x00014a5c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e80f) cam4_autofocus_pane_g

0x5b69,	// (0x00014a64) cam4_autofocus_pane_g3_copy1

0x544d,	// (0x00014348) video_down_pane_cp_t1

0x545b,	// (0x00014356) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e78b) video_down_pane_cp_t

0x9552,	// (0x0001844d) popup_vitu2_window_ParamLimits

0x9552,	// (0x0001844d) popup_vitu2_window

0x5b71,	// (0x00014a6c) aid_size_cell2_itu2_ParamLimits

0x5b71,	// (0x00014a6c) aid_size_cell2_itu2

0x5b97,	// (0x00014a92) aid_size_cell_itu2_ParamLimits

0x5b97,	// (0x00014a92) aid_size_cell_itu2

0x5bf3,	// (0x00014aee) bg_popup_window_pane_cp09_ParamLimits

0x5bf3,	// (0x00014aee) bg_popup_window_pane_cp09

0x5c01,	// (0x00014afc) field_vitu2_entry_pane_ParamLimits

0x5c01,	// (0x00014afc) field_vitu2_entry_pane

0x5c27,	// (0x00014b22) grid_vitu2_function_pane_ParamLimits

0x5c27,	// (0x00014b22) grid_vitu2_function_pane

0x5c78,	// (0x00014b73) grid_vitu2_itu_pane_ParamLimits

0x5c78,	// (0x00014b73) grid_vitu2_itu_pane

0x5d0b,	// (0x00014c06) cell_vitu2_itu_pane_ParamLimits

0x5d0b,	// (0x00014c06) cell_vitu2_itu_pane

0x5d2f,	// (0x00014c2a) cell_vitu2_function_pane_ParamLimits

0x5d2f,	// (0x00014c2a) cell_vitu2_function_pane

0xd1ab,	// (0x0001c0a6) bg_popup_call_pane_cp08_ParamLimits

0xd1ab,	// (0x0001c0a6) bg_popup_call_pane_cp08

0xd1c2,	// (0x0001c0bd) field_vitu2_entry_pane_g1

0xd1ce,	// (0x0001c0c9) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e816) field_vitu2_entry_pane_g

0x5d6e,	// (0x00014c69) field_vitu2_entry_pane_t1_ParamLimits

0x5d6e,	// (0x00014c69) field_vitu2_entry_pane_t1

0xd1e8,	// (0x0001c0e3) field_vitu2_entry_pane_t2_ParamLimits

0xd1e8,	// (0x0001c0e3) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e81d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e81d) field_vitu2_entry_pane_t

0x5d9a,	// (0x00014c95) bg_button_pane_cp010_ParamLimits

0x5d9a,	// (0x00014c95) bg_button_pane_cp010

0x5da8,	// (0x00014ca3) cell_vitu2_itu_pane_g1

0x5dd3,	// (0x00014cce) cell_vitu2_itu_pane_t1_ParamLimits

0x5dd3,	// (0x00014cce) cell_vitu2_itu_pane_t1

0x5e31,	// (0x00014d2c) cell_vitu2_itu_pane_t2_ParamLimits

0x5e31,	// (0x00014d2c) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e827) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e827) cell_vitu2_itu_pane_t

0x9552,	// (0x0001844d) bg_button_pane_cp011

0x5f0d,	// (0x00014e08) cell_vitu2_function_pane_g1

0x94e2,	// (0x000183dd) main_myfav_hc_pane

0x57fa,	// (0x000146f5) popup_image3_note_pane_ParamLimits

0x57fa,	// (0x000146f5) popup_image3_note_pane

0x5816,	// (0x00014711) popup_image3_tool_bar_pane_ParamLimits

0x5816,	// (0x00014711) popup_image3_tool_bar_pane

0x5eb5,	// (0x00014db0) cell_vitu2_itu_pane_t3_ParamLimits

0x5eb5,	// (0x00014db0) cell_vitu2_itu_pane_t3

0x94e2,	// (0x000183dd) bg_popup_trans_pane

0xd20d,	// (0x0001c108) grid_image3_tool_bar_pane

0xd217,	// (0x0001c112) bg_popup_trans_pane_g1

0xa150,	// (0x0001904b) bg_popup_trans_pane_g2

0xd21f,	// (0x0001c11a) bg_popup_trans_pane_g3

0xd227,	// (0x0001c122) bg_popup_trans_pane_g4

0xd22f,	// (0x0001c12a) bg_popup_trans_pane_g5

0xd237,	// (0x0001c132) bg_popup_trans_pane_g6

0xd23f,	// (0x0001c13a) bg_popup_trans_pane_g7

0xd247,	// (0x0001c142) bg_popup_trans_pane_g8

0xa130,	// (0x0001902b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e82e) bg_popup_trans_pane_g

0xd24f,	// (0x0001c14a) cell_image3_tool_bar_pane_ParamLimits

0xd24f,	// (0x0001c14a) cell_image3_tool_bar_pane

0xc3f4,	// (0x0001b2ef) cell_image3_tool_bar_pane_g1

0x94e2,	// (0x000183dd) bg_popup_trans_pane_cp1

0xd263,	// (0x0001c15e) popup_image3_note_pane_t1

0xd271,	// (0x0001c16c) popup_image3_note_pane_t2

0xd27f,	// (0x0001c17a) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e841) popup_image3_note_pane_t

0xd28d,	// (0x0001c188) popup_image3_note_pane_t3_copy1

0x5f21,	// (0x00014e1c) bg_myfav_hc_instruction_pane_ParamLimits

0x5f21,	// (0x00014e1c) bg_myfav_hc_instruction_pane

0x5f35,	// (0x00014e30) cell_myfav_contact_pane_ParamLimits

0x5f35,	// (0x00014e30) cell_myfav_contact_pane

0x5f53,	// (0x00014e4e) cell_myfav_contact_pane_cp1_ParamLimits

0x5f53,	// (0x00014e4e) cell_myfav_contact_pane_cp1

0x5f6b,	// (0x00014e66) cell_myfav_contact_pane_cp2_ParamLimits

0x5f6b,	// (0x00014e66) cell_myfav_contact_pane_cp2

0x5f83,	// (0x00014e7e) cell_myfav_contact_pane_cp3_ParamLimits

0x5f83,	// (0x00014e7e) cell_myfav_contact_pane_cp3

0x5f9a,	// (0x00014e95) cell_myfav_contact_pane_cp4_ParamLimits

0x5f9a,	// (0x00014e95) cell_myfav_contact_pane_cp4

0x5fb2,	// (0x00014ead) cell_myfav_contact_pane_cp5_ParamLimits

0x5fb2,	// (0x00014ead) cell_myfav_contact_pane_cp5

0x5fc6,	// (0x00014ec1) cell_myfav_contact_pane_cp6_ParamLimits

0x5fc6,	// (0x00014ec1) cell_myfav_contact_pane_cp6

0x5fdc,	// (0x00014ed7) cell_myfav_contact_pane_cp7_ParamLimits

0x5fdc,	// (0x00014ed7) cell_myfav_contact_pane_cp7

0xd29b,	// (0x0001c196) listscroll_gen_pane_cp05

0x5ff6,	// (0x00014ef1) main_myfav_hc_pane_g1_ParamLimits

0x5ff6,	// (0x00014ef1) main_myfav_hc_pane_g1

0x6010,	// (0x00014f0b) main_myfav_hc_pane_g2_ParamLimits

0x6010,	// (0x00014f0b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e848) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e848) main_myfav_hc_pane_g

0x6042,	// (0x00014f3d) main_myfav_hc_pane_t1_ParamLimits

0x6042,	// (0x00014f3d) main_myfav_hc_pane_t1

0xd2a4,	// (0x0001c19f) main_myfav_hc_pane_t2_ParamLimits

0xd2a4,	// (0x0001c19f) main_myfav_hc_pane_t2

0xd2b6,	// (0x0001c1b1) main_myfav_hc_pane_t3_ParamLimits

0xd2b6,	// (0x0001c1b1) main_myfav_hc_pane_t3

0x6059,	// (0x00014f54) main_myfav_hc_pane_t4_ParamLimits

0x6059,	// (0x00014f54) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e84f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e84f) main_myfav_hc_pane_t

0xc3f4,	// (0x0001b2ef) bg_myfav_hc_instruction_pane_g1

0xd2c8,	// (0x0001c1c3) cell_myfav_contact_pane_g1_ParamLimits

0xd2c8,	// (0x0001c1c3) cell_myfav_contact_pane_g1

0xd2c8,	// (0x0001c1c3) cell_myfav_contact_pane_g2_ParamLimits

0xd2c8,	// (0x0001c1c3) cell_myfav_contact_pane_g2

0xd2d4,	// (0x0001c1cf) cell_myfav_contact_pane_g3_ParamLimits

0xd2d4,	// (0x0001c1cf) cell_myfav_contact_pane_g3

0xc6f1,	// (0x0001b5ec) cell_myfav_contact_pane_g4_ParamLimits

0xc6f1,	// (0x0001b5ec) cell_myfav_contact_pane_g4

0xd2e1,	// (0x0001c1dc) cell_myfav_contact_pane_g5_ParamLimits

0xd2e1,	// (0x0001c1dc) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e85a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e85a) cell_myfav_contact_pane_g

0x602a,	// (0x00014f25) main_myfav_hc_pane_g3_ParamLimits

0x602a,	// (0x00014f25) main_myfav_hc_pane_g3

0x032c,	// (0x0000f227) popup_adpt_find_window

0x6081,	// (0x00014f7c) afind_page_pane_ParamLimits

0x6081,	// (0x00014f7c) afind_page_pane

0x6096,	// (0x00014f91) aid_size_cell_afind_ParamLimits

0x6096,	// (0x00014f91) aid_size_cell_afind

0x60b4,	// (0x00014faf) bg_popup_sub_pane_cp09_ParamLimits

0x60b4,	// (0x00014faf) bg_popup_sub_pane_cp09

0x60c1,	// (0x00014fbc) find_pane_cp01_ParamLimits

0x60c1,	// (0x00014fbc) find_pane_cp01

0xd323,	// (0x0001c21e) grid_afind_control_pane_ParamLimits

0xd323,	// (0x0001c21e) grid_afind_control_pane

0x60ce,	// (0x00014fc9) grid_afind_pane_ParamLimits

0x60ce,	// (0x00014fc9) grid_afind_pane

0x60f0,	// (0x00014feb) cell_afind_pane_ParamLimits

0x60f0,	// (0x00014feb) cell_afind_pane

0xc3f4,	// (0x0001b2ef) afind_page_pane_g1

0x6151,	// (0x0001504c) afind_page_pane_g2

0x615a,	// (0x00015055) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e865) afind_page_pane_g

0x6163,	// (0x0001505e) afind_page_pane_t1

0xd337,	// (0x0001c232) cell_afind_grid_control_pane_ParamLimits

0xd337,	// (0x0001c232) cell_afind_grid_control_pane

0xcf85,	// (0x0001be80) bg_button_pane_cp69_ParamLimits

0xcf85,	// (0x0001be80) bg_button_pane_cp69

0x6183,	// (0x0001507e) cell_afind_pane_g1_ParamLimits

0x6183,	// (0x0001507e) cell_afind_pane_g1

0x6190,	// (0x0001508b) cell_afind_pane_t1_ParamLimits

0x6190,	// (0x0001508b) cell_afind_pane_t1

0x9f49,	// (0x00018e44) bg_button_pane_cp72

0xd346,	// (0x0001c241) cell_afind_grid_control_pane_g1

0x3100,	// (0x00011ffb) aid_image_placing_area_ParamLimits

0x3100,	// (0x00011ffb) aid_image_placing_area

0xca1a,	// (0x0001b915) field_vitu_entry_pane_g1_ParamLimits

0xca1a,	// (0x0001b915) field_vitu_entry_pane_g1

0xca26,	// (0x0001b921) field_vitu_entry_pane_g2_ParamLimits

0xca26,	// (0x0001b921) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e716) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e716) field_vitu_entry_pane_g

0x5262,	// (0x0001415d) cell_vitu_itu_pane_g1_ParamLimits

0x52a4,	// (0x0001419f) cell_vitu_itu_pane_t3_ParamLimits

0x52a4,	// (0x0001419f) cell_vitu_itu_pane_t3

0xcf35,	// (0x0001be30) mp4_progress_pane_t1_ParamLimits

0xcf4e,	// (0x0001be49) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e7ab) mp4_progress_pane_t_ParamLimits

0xcf67,	// (0x0001be62) mup_progress_pane_cp04_ParamLimits

0x606d,	// (0x00014f68) main_myfav_hc_pane_t5_ParamLimits

0x606d,	// (0x00014f68) main_myfav_hc_pane_t5

0x9508,	// (0x00018403) aid_zoom_text_primary

0x032c,	// (0x0000f227) popup_adpt_find_window_ParamLimits

0x9552,	// (0x0001844d) main_cam_set_pane

0x59c3,	// (0x000148be) cam4_zoom_pane_ParamLimits

0x59c3,	// (0x000148be) cam4_zoom_pane

0x61a2,	// (0x0001509d) main_cam_set_pane_g1_ParamLimits

0x61a2,	// (0x0001509d) main_cam_set_pane_g1

0x61b0,	// (0x000150ab) main_cam_set_pane_g2_ParamLimits

0x61b0,	// (0x000150ab) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e86c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e86c) main_cam_set_pane_g

0x61d1,	// (0x000150cc) main_cam_set_pane_t1_ParamLimits

0x61d1,	// (0x000150cc) main_cam_set_pane_t1

0x61ec,	// (0x000150e7) main_cset_listscroll_pane_ParamLimits

0x61ec,	// (0x000150e7) main_cset_listscroll_pane

0x620c,	// (0x00015107) main_cset_slider_pane_ParamLimits

0x620c,	// (0x00015107) main_cset_slider_pane

0xd357,	// (0x0001c252) main_cset_list_pane_ParamLimits

0xd357,	// (0x0001c252) main_cset_list_pane

0xd367,	// (0x0001c262) scroll_pane_cp028

0x6232,	// (0x0001512d) aid_area_touch_slider

0x624e,	// (0x00015149) cset_slider_pane

0x6278,	// (0x00015173) main_cset_slider_pane_g1

0x628d,	// (0x00015188) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e871) main_cset_slider_pane_g

0xd3a0,	// (0x0001c29b) main_cset_slider_pane_t1

0x6349,	// (0x00015244) main_cset_slider_pane_t2

0x6363,	// (0x0001525e) main_cset_slider_pane_t3

0x637d,	// (0x00015278) main_cset_slider_pane_t4

0x6397,	// (0x00015292) main_cset_slider_pane_t5

0x63b1,	// (0x000152ac) main_cset_slider_pane_t6

0x63c6,	// (0x000152c1) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e896) main_cset_slider_pane_t

0x64ca,	// (0x000153c5) cset_list_set_pane_ParamLimits

0x64ca,	// (0x000153c5) cset_list_set_pane

0x64dc,	// (0x000153d7) aid_position_infowindow_above

0x64e4,	// (0x000153df) aid_position_infowindow_below

0xd440,	// (0x0001c33b) cset_list_set_pane_g1_ParamLimits

0xd440,	// (0x0001c33b) cset_list_set_pane_g1

0xd44c,	// (0x0001c347) cset_list_set_pane_g3_ParamLimits

0xd44c,	// (0x0001c347) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e8b5) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e8b5) cset_list_set_pane_g

0xd45b,	// (0x0001c356) cset_list_set_pane_t1_ParamLimits

0xd45b,	// (0x0001c356) cset_list_set_pane_t1

0x9552,	// (0x0001844d) list_highlight_pane_cp021_ParamLimits

0x9552,	// (0x0001844d) list_highlight_pane_cp021

0xab54,	// (0x00019a4f) cset_slider_pane_g1

0xab66,	// (0x00019a61) cset_slider_pane_g2

0xab5d,	// (0x00019a58) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e8ba) cset_slider_pane_g

0xd470,	// (0x0001c36b) aid_area_touch_cam4_zoom

0xd478,	// (0x0001c373) cam4_zoom_cont_pane

0xd480,	// (0x0001c37b) cam4_zoom_pane_g1

0xd488,	// (0x0001c383) cam4_zoom_pane_g2

0x64ec,	// (0x000153e7) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e8c1) cam4_zoom_pane_g

0xd490,	// (0x0001c38b) cam4_zoom_cont_pane_g1

0xd499,	// (0x0001c394) cam4_zoom_cont_pane_g2

0xd4a2,	// (0x0001c39d) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e8c8) cam4_zoom_cont_pane_g

0x5883,	// (0x0001477e) call4_image_pane_ParamLimits

0x5883,	// (0x0001477e) call4_image_pane

0xcfc3,	// (0x0001bebe) call4_windows_conf_pane_ParamLimits

0xd004,	// (0x0001beff) popup_call4_audio_in_window_ParamLimits

0xd004,	// (0x0001beff) popup_call4_audio_in_window

0x94e2,	// (0x000183dd) bg_popup_call2_act_pane_cp02

0xd07a,	// (0x0001bf75) call4_list_conf_pane

0xc3f4,	// (0x0001b2ef) call4_image_pane_g1

0xc3f4,	// (0x0001b2ef) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d7) call4_image_pane_g

0xd4ab,	// (0x0001c3a6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4ab,	// (0x0001c3a6) list_single_graphic_popup_conf4_pane

0x94e2,	// (0x000183dd) list_highlight_pane_cp022

0xd4be,	// (0x0001c3b9) list_single_graphic_popup_conf4_pane_g1

0xa70b,	// (0x00019606) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e8cf) list_single_graphic_popup_conf4_pane_g

0xd4c6,	// (0x0001c3c1) list_single_graphic_popup_conf4_pane_t1

0x1526,	// (0x00010421) popup_vtel_slider_window_ParamLimits

0x1526,	// (0x00010421) popup_vtel_slider_window

0xcf73,	// (0x0001be6e) dialer2_ne_pane_t2_ParamLimits

0xcf73,	// (0x0001be6e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e7b0) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e7b0) dialer2_ne_pane_t

0xc1d9,	// (0x0001b0d4) bg_popup_sub_pane_cp010_ParamLimits

0xc1d9,	// (0x0001b0d4) bg_popup_sub_pane_cp010

0x64f4,	// (0x000153ef) popup_vtel_slider_window_g1_ParamLimits

0x64f4,	// (0x000153ef) popup_vtel_slider_window_g1

0x6507,	// (0x00015402) popup_vtel_slider_window_g2_ParamLimits

0x6507,	// (0x00015402) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e8d4) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e8d4) popup_vtel_slider_window_g

0x655d,	// (0x00015458) vtel_slider_pane_ParamLimits

0x655d,	// (0x00015458) vtel_slider_pane

0x657f,	// (0x0001547a) vtel_slider_pane_g1_ParamLimits

0x657f,	// (0x0001547a) vtel_slider_pane_g1

0x6593,	// (0x0001548e) vtel_slider_pane_g2_ParamLimits

0x6593,	// (0x0001548e) vtel_slider_pane_g2

0x65ab,	// (0x000154a6) vtel_slider_pane_g3_ParamLimits

0x65ab,	// (0x000154a6) vtel_slider_pane_g3

0x657f,	// (0x0001547a) vtel_slider_pane_g4_ParamLimits

0x657f,	// (0x0001547a) vtel_slider_pane_g4

0x65c1,	// (0x000154bc) vtel_slider_pane_g5_ParamLimits

0x65c1,	// (0x000154bc) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e8dd) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e8dd) vtel_slider_pane_g

0x9552,	// (0x0001844d) main_gallery2_pane

0x5bc3,	// (0x00014abe) aid_size_row_itut2_dropdow_list_ParamLimits

0x5bc3,	// (0x00014abe) aid_size_row_itut2_dropdow_list

0x5c4f,	// (0x00014b4a) grid_vitu2_function_top_pane_ParamLimits

0x5c4f,	// (0x00014b4a) grid_vitu2_function_top_pane

0x5cb4,	// (0x00014baf) popup_vitu2_dropdown_list_window_ParamLimits

0x5cb4,	// (0x00014baf) popup_vitu2_dropdown_list_window

0x5cdd,	// (0x00014bd8) popup_vitu2_match_list_window

0x65e5,	// (0x000154e0) cell_vitu2_function_top_pane_ParamLimits

0x65e5,	// (0x000154e0) cell_vitu2_function_top_pane

0x6603,	// (0x000154fe) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6603,	// (0x000154fe) cell_vitu2_function_top_pane_cp01

0x6621,	// (0x0001551c) cell_vitu2_function_top_wide_pane_ParamLimits

0x6621,	// (0x0001551c) cell_vitu2_function_top_wide_pane

0x9552,	// (0x0001844d) bg_button_pane_cp012

0x663f,	// (0x0001553a) cell_vitu2_function_top_pane_g1

0xd4dc,	// (0x0001c3d7) bg_button_pane_cp013_ParamLimits

0xd4dc,	// (0x0001c3d7) bg_button_pane_cp013

0x6653,	// (0x0001554e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6653,	// (0x0001554e) cell_vitu2_function_top_wide_pane_g1

0x9552,	// (0x0001844d) bg_popup_sub_pane_cp20

0x666b,	// (0x00015566) list_vitu2_match_list_pane

0xd217,	// (0x0001c112) bg_popup_sub_pane_cp20_g1

0xd21f,	// (0x0001c11a) bg_popup_sub_pane_cp20_g2

0xa150,	// (0x0001904b) bg_popup_sub_pane_cp20_g3

0xd227,	// (0x0001c122) bg_popup_sub_pane_cp20_g4

0xa130,	// (0x0001902b) bg_popup_sub_pane_cp20_g5

0xd4f8,	// (0x0001c3f3) bg_popup_sub_pane_cp20_g6

0xd237,	// (0x0001c132) bg_popup_sub_pane_cp20_g7

0xd23f,	// (0x0001c13a) bg_popup_sub_pane_cp20_g8

0xd247,	// (0x0001c142) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e8e8) bg_popup_sub_pane_cp20_g

0xd500,	// (0x0001c3fb) list_vitu2_match_list_item_pane_ParamLimits

0xd500,	// (0x0001c3fb) list_vitu2_match_list_item_pane

0xd512,	// (0x0001c40d) list_vitu2_match_list_item_pane_t1

0x94e2,	// (0x000183dd) bg_popup_sub_pane_cp21

0xa5c0,	// (0x000194bb) grid_vitu2_dropdown_list_pane

0x66d3,	// (0x000155ce) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66d3,	// (0x000155ce) cell_vitu2_dropdown_list_char_pane

0x66f4,	// (0x000155ef) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x66f4,	// (0x000155ef) cell_vitu2_dropdown_list_ctrl_pane

0xd520,	// (0x0001c41b) cell_vitu2_dropdown_list_char_pane_g1

0xd529,	// (0x0001c424) cell_vitu2_dropdown_list_char_pane_g2

0xd532,	// (0x0001c42d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e905) cell_vitu2_dropdown_list_char_pane_g

0x6720,	// (0x0001561b) cell_vitu2_dropdown_list_char_pane_t1

0x672e,	// (0x00015629) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x672e,	// (0x00015629) cell_vitu2_dropdown_list_ctrl_pane_g1

0x673b,	// (0x00015636) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x673b,	// (0x00015636) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6748,	// (0x00015643) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6748,	// (0x00015643) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6755,	// (0x00015650) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6755,	// (0x00015650) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc660,	// (0x0001b55b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc660,	// (0x0001b55b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e90c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e90c) cell_vitu2_dropdown_list_ctrl_pane_g

0x6771,	// (0x0001566c) aid_size_cell_gallery2_ParamLimits

0x6771,	// (0x0001566c) aid_size_cell_gallery2

0x678f,	// (0x0001568a) grid_gallery2_pane_ParamLimits

0x678f,	// (0x0001568a) grid_gallery2_pane

0x67a9,	// (0x000156a4) scroll_pane_cp029_ParamLimits

0x67a9,	// (0x000156a4) scroll_pane_cp029

0x67b5,	// (0x000156b0) cell_gallery2_pane_ParamLimits

0x67b5,	// (0x000156b0) cell_gallery2_pane

0xd53b,	// (0x0001c436) cell_gallery2_pane_g2

0x6810,	// (0x0001570b) cell_gallery2_pane_g3

0xd543,	// (0x0001c43e) cell_gallery2_pane_g4

0xd54b,	// (0x0001c446) cell_gallery2_pane_g5

0xa9fe,	// (0x000198f9) grid_highlight_pane_cp10

0x5cdd,	// (0x00014bd8) popup_vitu2_match_list_window_ParamLimits

0x5cf4,	// (0x00014bef) popup_vitu2_query_window_ParamLimits

0x5cf4,	// (0x00014bef) popup_vitu2_query_window

0x94e2,	// (0x000183dd) bg_vitu2_candi_button_pane

0xd520,	// (0x0001c41b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd529,	// (0x0001c424) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd532,	// (0x0001c42d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6818,	// (0x00015713) bg_button_pane_cp015

0x682a,	// (0x00015725) bg_button_pane_cp016

0x683d,	// (0x00015738) bg_button_pane_cp017

0xbed9,	// (0x0001add4) bg_popup_sub_pane_cp22

0xd553,	// (0x0001c44e) popup_vitu2_query_window_g1

0x6882,	// (0x0001577d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e917) popup_vitu2_query_window_g

0x68a1,	// (0x0001579c) popup_vitu2_query_window_t1_ParamLimits

0x68a1,	// (0x0001579c) popup_vitu2_query_window_t1

0x68d6,	// (0x000157d1) popup_vitu2_query_window_t2_ParamLimits

0x68d6,	// (0x000157d1) popup_vitu2_query_window_t2

0x68e8,	// (0x000157e3) popup_vitu2_query_window_t3_ParamLimits

0x68e8,	// (0x000157e3) popup_vitu2_query_window_t3

0x6910,	// (0x0001580b) popup_vitu2_query_window_t4_ParamLimits

0x6910,	// (0x0001580b) popup_vitu2_query_window_t4

0x6931,	// (0x0001582c) popup_vitu2_query_window_t5_ParamLimits

0x6931,	// (0x0001582c) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e91e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e91e) popup_vitu2_query_window_t

0xd34f,	// (0x0001c24a) main_cset_text_pane

0x6232,	// (0x0001512d) aid_area_touch_slider_ParamLimits

0x624e,	// (0x00015149) cset_slider_pane_ParamLimits

0x6278,	// (0x00015173) main_cset_slider_pane_g1_ParamLimits

0x628d,	// (0x00015188) main_cset_slider_pane_g2_ParamLimits

0xd370,	// (0x0001c26b) main_cset_slider_pane_g3_ParamLimits

0xd370,	// (0x0001c26b) main_cset_slider_pane_g3

0x62a2,	// (0x0001519d) main_cset_slider_pane_g4_ParamLimits

0x62a2,	// (0x0001519d) main_cset_slider_pane_g4

0x62b1,	// (0x000151ac) main_cset_slider_pane_g5_ParamLimits

0x62b1,	// (0x000151ac) main_cset_slider_pane_g5

0x62bd,	// (0x000151b8) main_cset_slider_pane_g6_ParamLimits

0x62bd,	// (0x000151b8) main_cset_slider_pane_g6

0xf976,	// (0x0001e871) main_cset_slider_pane_g_ParamLimits

0xd3a0,	// (0x0001c29b) main_cset_slider_pane_t1_ParamLimits

0x6349,	// (0x00015244) main_cset_slider_pane_t2_ParamLimits

0x6363,	// (0x0001525e) main_cset_slider_pane_t3_ParamLimits

0x637d,	// (0x00015278) main_cset_slider_pane_t4_ParamLimits

0x6397,	// (0x00015292) main_cset_slider_pane_t5_ParamLimits

0x63b1,	// (0x000152ac) main_cset_slider_pane_t6_ParamLimits

0x63c6,	// (0x000152c1) main_cset_slider_pane_t7_ParamLimits

0x63f0,	// (0x000152eb) main_cset_slider_pane_t8_ParamLimits

0x63f0,	// (0x000152eb) main_cset_slider_pane_t8

0x6418,	// (0x00015313) main_cset_slider_pane_t9_ParamLimits

0x6418,	// (0x00015313) main_cset_slider_pane_t9

0x6440,	// (0x0001533b) main_cset_slider_pane_t10_ParamLimits

0x6440,	// (0x0001533b) main_cset_slider_pane_t10

0x6468,	// (0x00015363) main_cset_slider_pane_t11_ParamLimits

0x6468,	// (0x00015363) main_cset_slider_pane_t11

0x6490,	// (0x0001538b) main_cset_slider_pane_t12_ParamLimits

0x6490,	// (0x0001538b) main_cset_slider_pane_t12

0x64ad,	// (0x000153a8) main_cset_slider_pane_t13_ParamLimits

0x64ad,	// (0x000153a8) main_cset_slider_pane_t13

0xf99b,	// (0x0001e896) main_cset_slider_pane_t_ParamLimits

0x94e2,	// (0x000183dd) bg_popup_sub_pane_cp011

0xd55f,	// (0x0001c45a) main_cset_text_pane_g1

0xd567,	// (0x0001c462) main_cset_text_pane_t1

0xd575,	// (0x0001c470) main_cset_text_pane_t2

0xd583,	// (0x0001c47e) main_cset_text_pane_t3

0xd591,	// (0x0001c48c) main_cset_text_pane_t4

0xd59f,	// (0x0001c49a) main_cset_text_pane_t5

0xd5ad,	// (0x0001c4a8) main_cset_text_pane_t6

0xd5bb,	// (0x0001c4b6) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e92d) main_cset_text_pane_t

0x94e2,	// (0x000183dd) main_cam4_burst_pane

0x94e2,	// (0x000183dd) main_cam5_pane

0x6171,	// (0x0001506c) bg_button_pane_cp019

0x617a,	// (0x00015075) bg_button_pane_cp020

0xd37c,	// (0x0001c277) main_cset_slider_pane_g7_ParamLimits

0xd37c,	// (0x0001c277) main_cset_slider_pane_g7

0xd388,	// (0x0001c283) main_cset_slider_pane_g8_ParamLimits

0xd388,	// (0x0001c283) main_cset_slider_pane_g8

0x62d1,	// (0x000151cc) main_cset_slider_pane_g9_ParamLimits

0x62d1,	// (0x000151cc) main_cset_slider_pane_g9

0x62dd,	// (0x000151d8) main_cset_slider_pane_g10_ParamLimits

0x62dd,	// (0x000151d8) main_cset_slider_pane_g10

0x62e9,	// (0x000151e4) main_cset_slider_pane_g11_ParamLimits

0x62e9,	// (0x000151e4) main_cset_slider_pane_g11

0x62f5,	// (0x000151f0) main_cset_slider_pane_g12_ParamLimits

0x62f5,	// (0x000151f0) main_cset_slider_pane_g12

0x6301,	// (0x000151fc) main_cset_slider_pane_g13_ParamLimits

0x6301,	// (0x000151fc) main_cset_slider_pane_g13

0x630d,	// (0x00015208) main_cset_slider_pane_g14_ParamLimits

0x630d,	// (0x00015208) main_cset_slider_pane_g14

0x6319,	// (0x00015214) main_cset_slider_pane_g15_ParamLimits

0x6319,	// (0x00015214) main_cset_slider_pane_g15

0xd3ce,	// (0x0001c2c9) main_cset_slider_pane_t14_ParamLimits

0xd3ce,	// (0x0001c2c9) main_cset_slider_pane_t14

0xd407,	// (0x0001c302) main_cset_slider_pane_t15_ParamLimits

0xd407,	// (0x0001c302) main_cset_slider_pane_t15

0x69a8,	// (0x000158a3) aid_cam4_burst_size_cell_ParamLimits

0x69a8,	// (0x000158a3) aid_cam4_burst_size_cell

0x69c8,	// (0x000158c3) grid_cam4_burst_pane_ParamLimits

0x69c8,	// (0x000158c3) grid_cam4_burst_pane

0x6a00,	// (0x000158fb) linegrid_cam4_burst_pane_ParamLimits

0x6a00,	// (0x000158fb) linegrid_cam4_burst_pane

0xd5c9,	// (0x0001c4c4) scroll_pane_cp30_ParamLimits

0xd5c9,	// (0x0001c4c4) scroll_pane_cp30

0x6a24,	// (0x0001591f) cell_cam4_burst_pane_ParamLimits

0x6a24,	// (0x0001591f) cell_cam4_burst_pane

0xd5d5,	// (0x0001c4d0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5d5,	// (0x0001c4d0) linegrid_cam4_burst_pane_g1

0x6a71,	// (0x0001596c) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a71,	// (0x0001596c) linegrid_cam4_burst_pane_g2

0xd5e2,	// (0x0001c4dd) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5e2,	// (0x0001c4dd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e93c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e93c) linegrid_cam4_burst_pane_g

0x6a82,	// (0x0001597d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a82,	// (0x0001597d) linegrid_cam4_burst_pane_g3_copy1

0xd5ef,	// (0x0001c4ea) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5ef,	// (0x0001c4ea) linegrid_cam4_burst_pane_g4

0x6a9c,	// (0x00015997) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a9c,	// (0x00015997) linegrid_cam4_burst_pane_g5

0x6aad,	// (0x000159a8) linegrid_cam4_burst_pane_g6_ParamLimits

0x6aad,	// (0x000159a8) linegrid_cam4_burst_pane_g6

0xd5fc,	// (0x0001c4f7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5fc,	// (0x0001c4f7) linegrid_cam4_burst_pane_g7

0x6ac4,	// (0x000159bf) cell_cam4_burst_pane_g1

0xd615,	// (0x0001c510) main_cam5_pane_t1_ParamLimits

0xd615,	// (0x0001c510) main_cam5_pane_t1

0xd627,	// (0x0001c522) main_cam5_pane_t2_ParamLimits

0xd627,	// (0x0001c522) main_cam5_pane_t2

0xd639,	// (0x0001c534) main_cam5_pane_t3_ParamLimits

0xd639,	// (0x0001c534) main_cam5_pane_t3

0xd64b,	// (0x0001c546) main_cam5_pane_t4_ParamLimits

0xd64b,	// (0x0001c546) main_cam5_pane_t4

0xd663,	// (0x0001c55e) main_cam5_pane_t5_ParamLimits

0xd663,	// (0x0001c55e) main_cam5_pane_t5

0xd677,	// (0x0001c572) main_cam5_pane_t6_ParamLimits

0xd677,	// (0x0001c572) main_cam5_pane_t6

0xd68b,	// (0x0001c586) main_cam5_pane_t7_ParamLimits

0xd68b,	// (0x0001c586) main_cam5_pane_t7

0xd69d,	// (0x0001c598) main_cam5_pane_t8_ParamLimits

0xd69d,	// (0x0001c598) main_cam5_pane_t8

0xd6b9,	// (0x0001c5b4) main_cam5_pane_t9_ParamLimits

0xd6b9,	// (0x0001c5b4) main_cam5_pane_t9

0xd6cb,	// (0x0001c5c6) main_cam5_pane_t10_ParamLimits

0xd6cb,	// (0x0001c5c6) main_cam5_pane_t10

0xd6dd,	// (0x0001c5d8) main_cam5_pane_t11_ParamLimits

0xd6dd,	// (0x0001c5d8) main_cam5_pane_t11

0xd6ef,	// (0x0001c5ea) main_cam5_pane_t12_ParamLimits

0xd6ef,	// (0x0001c5ea) main_cam5_pane_t12

0xd704,	// (0x0001c5ff) main_cam5_pane_t13_ParamLimits

0xd704,	// (0x0001c5ff) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e948) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e948) main_cam5_pane_t

0x03ae,	// (0x0000f2a9) popup_scut_keymap_window_ParamLimits

0x03ae,	// (0x0000f2a9) popup_scut_keymap_window

0x6ad7,	// (0x000159d2) aid_size_cell_brow_shortcut

0xa9fe,	// (0x000198f9) bg_popup_window_pane_cp010

0x6ae3,	// (0x000159de) grid_scut_pane

0x6aef,	// (0x000159ea) cell_scut_pane_ParamLimits

0x6aef,	// (0x000159ea) cell_scut_pane

0x6b06,	// (0x00015a01) cell_scut_pane_g1

0xd721,	// (0x0001c61c) cell_scut_pane_t1

0xd730,	// (0x0001c62b) cell_scut_pane_t2

0x6b0f,	// (0x00015a0a) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e963) cell_scut_pane_t

0x4758,	// (0x00013653) main_mup3_pane_g8_ParamLimits

0x4758,	// (0x00013653) main_mup3_pane_g8

0x5bdb,	// (0x00014ad6) area_vitu2_query_pane_ParamLimits

0x5bdb,	// (0x00014ad6) area_vitu2_query_pane

0x6850,	// (0x0001574b) input_focus_pane_cp08

0xd73f,	// (0x0001c63a) area_vitu2_query_pane_g1

0x6b1d,	// (0x00015a18) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e96a) area_vitu2_query_pane_g

0x6b2e,	// (0x00015a29) area_vitu2_query_pane_t1_ParamLimits

0x6b2e,	// (0x00015a29) area_vitu2_query_pane_t1

0x6b42,	// (0x00015a3d) area_vitu2_query_pane_t2_ParamLimits

0x6b42,	// (0x00015a3d) area_vitu2_query_pane_t2

0x6b56,	// (0x00015a51) area_vitu2_query_pane_t3_ParamLimits

0x6b56,	// (0x00015a51) area_vitu2_query_pane_t3

0xd74b,	// (0x0001c646) area_vitu2_query_pane_t4_ParamLimits

0xd74b,	// (0x0001c646) area_vitu2_query_pane_t4

0xd773,	// (0x0001c66e) area_vitu2_query_pane_t5_ParamLimits

0xd773,	// (0x0001c66e) area_vitu2_query_pane_t5

0xd79b,	// (0x0001c696) area_vitu2_query_pane_t6_ParamLimits

0xd79b,	// (0x0001c696) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e96f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e96f) area_vitu2_query_pane_t

0x6b7e,	// (0x00015a79) bg_button_pane_cp018

0x6b8c,	// (0x00015a87) bg_button_pane_cp021

0x6b98,	// (0x00015a93) bg_button_pane_cp022

0x6ba7,	// (0x00015aa2) input_focus_pane_cp09

0xa847,	// (0x00019742) aid_size_touch_mv_arrow_left

0xa870,	// (0x0001976b) aid_size_touch_mv_arrow_right

0x6331,	// (0x0001522c) main_cset_slider_pane_g16_ParamLimits

0x6331,	// (0x0001522c) main_cset_slider_pane_g16

0x633d,	// (0x00015238) main_cset_slider_pane_g17_ParamLimits

0x633d,	// (0x00015238) main_cset_slider_pane_g17

0x6ac4,	// (0x000159bf) cell_cam4_burst_pane_g1_ParamLimits

0x94e2,	// (0x000183dd) compa_mode_pane

0x6517,	// (0x00015412) popup_vtel_slider_window_g3_ParamLimits

0x6517,	// (0x00015412) popup_vtel_slider_window_g3

0x652e,	// (0x00015429) popup_vtel_slider_window_g4_ParamLimits

0x652e,	// (0x00015429) popup_vtel_slider_window_g4

0x6545,	// (0x00015440) popup_vtel_slider_window_t1_ParamLimits

0x6545,	// (0x00015440) popup_vtel_slider_window_t1

0x94e2,	// (0x000183dd) main_cl_pane

0xbf01,	// (0x0001adfc) popup_imed_adjust2_window_ParamLimits

0xbed9,	// (0x0001add4) bg_tb_trans_pane_cp05_ParamLimits

0xc94f,	// (0x0001b84a) popup_imed_adjust2_window_g1_ParamLimits

0xc95e,	// (0x0001b859) popup_imed_adjust2_window_g2_ParamLimits

0xc95e,	// (0x0001b859) popup_imed_adjust2_window_g2

0xc96a,	// (0x0001b865) popup_imed_adjust2_window_g3_ParamLimits

0xc96a,	// (0x0001b865) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e6da) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e6da) popup_imed_adjust2_window_g

0xc976,	// (0x0001b871) popup_imed_adjust2_window_t1_ParamLimits

0xc98e,	// (0x0001b889) slider_imed_adjust_pane_ParamLimits

0xc9a2,	// (0x0001b89d) slider_imed_adjust_pane_g1_ParamLimits

0xc9b2,	// (0x0001b8ad) slider_imed_adjust_pane_g2_ParamLimits

0xc9c2,	// (0x0001b8bd) slider_imed_adjust_pane_g3_ParamLimits

0xc9d3,	// (0x0001b8ce) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e6e1) slider_imed_adjust_pane_g_ParamLimits

0x5964,	// (0x0001485f) aid_touch_area_cam4_ParamLimits

0x5964,	// (0x0001485f) aid_touch_area_cam4

0xd0be,	// (0x0001bfb9) battery_pane_cp01

0x5a33,	// (0x0001492e) main_camera4_pane_g6_ParamLimits

0x5a33,	// (0x0001492e) main_camera4_pane_g6

0x5a5d,	// (0x00014958) main_camera4_pane_t2_ParamLimits

0x5a5d,	// (0x00014958) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e7e4) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e7e4) main_camera4_pane_t

0x5a92,	// (0x0001498d) aid_touch_area_vid4_ParamLimits

0x5a92,	// (0x0001498d) aid_touch_area_vid4

0x5ae6,	// (0x000149e1) main_video4_pane_g5_ParamLimits

0x5ae6,	// (0x000149e1) main_video4_pane_g5

0x5b0b,	// (0x00014a06) vid4_progress_pane_ParamLimits

0x5b0b,	// (0x00014a06) vid4_progress_pane

0xd394,	// (0x0001c28f) main_cset_slider_pane_g18_ParamLimits

0xd394,	// (0x0001c28f) main_cset_slider_pane_g18

0xd609,	// (0x0001c504) cell_cam4_burst_pane_g2_ParamLimits

0xd609,	// (0x0001c504) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e943) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e943) cell_cam4_burst_pane_g

0x9cb5,	// (0x00018bb0) bg_cl_pane_ParamLimits

0x9cb5,	// (0x00018bb0) bg_cl_pane

0x6bb6,	// (0x00015ab1) cl_header_pane_ParamLimits

0x6bb6,	// (0x00015ab1) cl_header_pane

0x6bca,	// (0x00015ac5) cl_listscroll_pane_ParamLimits

0x6bca,	// (0x00015ac5) cl_listscroll_pane

0xd7e7,	// (0x0001c6e2) bg_cl_pane_g1

0xd7ef,	// (0x0001c6ea) bg_cl_pane_g2

0xd7f7,	// (0x0001c6f2) bg_cl_pane_g3

0xd7ff,	// (0x0001c6fa) bg_cl_pane_g4

0xd807,	// (0x0001c702) bg_cl_pane_g5

0xd80f,	// (0x0001c70a) bg_cl_pane_g6

0xd817,	// (0x0001c712) bg_cl_pane_g7

0xd81f,	// (0x0001c71a) bg_cl_pane_g8

0xd827,	// (0x0001c722) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e97e) bg_cl_pane_g

0x6bda,	// (0x00015ad5) aid_height_cl_leading_ParamLimits

0x6bda,	// (0x00015ad5) aid_height_cl_leading

0x6be6,	// (0x00015ae1) aid_height_cl_text_ParamLimits

0x6be6,	// (0x00015ae1) aid_height_cl_text

0x9552,	// (0x0001844d) bg_cl_header_pane_ParamLimits

0x9552,	// (0x0001844d) bg_cl_header_pane

0x6c05,	// (0x00015b00) cl_header_pane_g1_ParamLimits

0x6c05,	// (0x00015b00) cl_header_pane_g1

0x6c1b,	// (0x00015b16) cl_header_pane_t1_ParamLimits

0x6c1b,	// (0x00015b16) cl_header_pane_t1

0xd82f,	// (0x0001c72a) cl_list_pane

0xd367,	// (0x0001c262) hc_scroll_pane_cp01

0xa130,	// (0x0001902b) bg_cl_header_pane_g1

0xd217,	// (0x0001c112) bg_cl_header_pane_g2

0xa150,	// (0x0001904b) bg_cl_header_pane_g3

0xd227,	// (0x0001c122) bg_cl_header_pane_g4

0xd21f,	// (0x0001c11a) bg_cl_header_pane_g5

0xd4f8,	// (0x0001c3f3) bg_cl_header_pane_g6

0xd23f,	// (0x0001c13a) bg_cl_header_pane_g7

0xd247,	// (0x0001c142) bg_cl_header_pane_g8

0xd237,	// (0x0001c132) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e991) bg_cl_header_pane_g

0x6c34,	// (0x00015b2f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c34,	// (0x00015b2f) hc_cl_list_double_graphic_heading_pane

0x6c45,	// (0x00015b40) hc_cl_list_single_graphic_pane_ParamLimits

0x6c45,	// (0x00015b40) hc_cl_list_single_graphic_pane

0x6c5b,	// (0x00015b56) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c5b,	// (0x00015b56) hc_cl_list_single_graphic_pane_g1

0x6c67,	// (0x00015b62) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c67,	// (0x00015b62) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e9a4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e9a4) hc_cl_list_single_graphic_pane_g

0x6c7b,	// (0x00015b76) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c7b,	// (0x00015b76) hc_cl_list_single_graphic_pane_t1

0x6c5b,	// (0x00015b56) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c5b,	// (0x00015b56) hc_cl_list_double_graphic_heading_pane_g1

0x6c90,	// (0x00015b8b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c90,	// (0x00015b8b) hc_cl_list_double_graphic_heading_pane_g2

0x6ca4,	// (0x00015b9f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ca4,	// (0x00015b9f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e9a9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e9a9) hc_cl_list_double_graphic_heading_pane_g

0x6cb8,	// (0x00015bb3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6cb8,	// (0x00015bb3) hc_cl_list_double_graphic_heading_pane_t1

0x6ccd,	// (0x00015bc8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ccd,	// (0x00015bc8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e9b0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e9b0) hc_cl_list_double_graphic_heading_pane_t

0xd840,	// (0x0001c73b) vid4_progress_pane_g1

0xd850,	// (0x0001c74b) vid4_progress_pane_g2

0x6ce2,	// (0x00015bdd) vid4_progress_pane_g3

0xd860,	// (0x0001c75b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e9b5) vid4_progress_pane_g

0x6cf4,	// (0x00015bef) vid4_progress_pane_t1

0xd878,	// (0x0001c773) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e9c0) vid4_progress_pane_t

0x6d0c,	// (0x00015c07) wait_bar_pane_cp07

0xc1e7,	// (0x0001b0e2) blid_firmament_pane_ParamLimits

0xc22a,	// (0x0001b125) popup_blid_sat_info2_window_g1

0xc24e,	// (0x0001b149) popup_blid_sat_info2_window_t3

0xc25c,	// (0x0001b157) popup_blid_sat_info2_window_t4

0xc26a,	// (0x0001b165) popup_blid_sat_info2_window_t5

0xc278,	// (0x0001b173) popup_blid_sat_info2_window_t6

0xc288,	// (0x0001b183) popup_blid_sat_info2_window_t7

0xc296,	// (0x0001b191) popup_blid_sat_info2_window_t8

0xc2a4,	// (0x0001b19f) popup_blid_sat_info2_window_t9

0xc2b2,	// (0x0001b1ad) popup_blid_sat_info2_window_t10

0xc374,	// (0x0001b26f) aid_firma_cardinal_ParamLimits

0xc388,	// (0x0001b283) blid_firmament_pane_t1_ParamLimits

0xc39f,	// (0x0001b29a) blid_firmament_pane_t2_ParamLimits

0xc3b6,	// (0x0001b2b1) blid_firmament_pane_t3_ParamLimits

0xc3cd,	// (0x0001b2c8) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e5ce) blid_firmament_pane_t_ParamLimits

0xc3e4,	// (0x0001b2df) blid_sat_info_pane_ParamLimits

0x9552,	// (0x0001844d) main_cam_set_pane_ParamLimits

0x501c,	// (0x00013f17) aid_size_cell_colour_35_ParamLimits

0x503c,	// (0x00013f37) aid_size_cell_colour_112_ParamLimits

0x505c,	// (0x00013f57) aid_size_cell_effect_ParamLimits

0xbed9,	// (0x0001add4) bg_tb_trans_pane_cp02_ParamLimits

0xa3c6,	// (0x000192c1) heading_imed_pane_ParamLimits

0x507c,	// (0x00013f77) listscroll_imed_pane_ParamLimits

0xb4ff,	// (0x0001a3fa) popup_call2_audio_first_window_g5_ParamLimits

0xb4ff,	// (0x0001a3fa) popup_call2_audio_first_window_g5

0x560f,	// (0x0001450a) aid_size_touch_image3_arrow_left_ParamLimits

0x560f,	// (0x0001450a) aid_size_touch_image3_arrow_left

0x563b,	// (0x00014536) aid_size_touch_image3_arrow_right_ParamLimits

0x563b,	// (0x00014536) aid_size_touch_image3_arrow_right

0xd88d,	// (0x0001c788) vid4_progress_pane_t3

0x538f,	// (0x0001428a) main_hwr_training_symbol_option_pane_ParamLimits

0x538f,	// (0x0001428a) main_hwr_training_symbol_option_pane

0xcc3c,	// (0x0001bb37) popup_hwr_training_preview_window_ParamLimits

0xcc3c,	// (0x0001bb37) popup_hwr_training_preview_window

0x53af,	// (0x000142aa) hwr_training_navi_pane_g5_ParamLimits

0x53af,	// (0x000142aa) hwr_training_navi_pane_g5

0xd205,	// (0x0001c100) popup_char_count_window

0x9552,	// (0x0001844d) bg_popup_sub_pane_cp20_ParamLimits

0x666b,	// (0x00015566) list_vitu2_match_list_pane_ParamLimits

0x667a,	// (0x00015575) vitu2_page_scroll_pane_ParamLimits

0x667a,	// (0x00015575) vitu2_page_scroll_pane

0xd8c4,	// (0x0001c7bf) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8c4,	// (0x0001c7bf) list_single_hwr_training_symbol_option_pane

0xd8d7,	// (0x0001c7d2) list_single_hwr_training_symbol_option_pane_g1

0xd8df,	// (0x0001c7da) list_single_hwr_training_symbol_option_pane_t1

0xd8ed,	// (0x0001c7e8) bg_button_pane_cp023

0xd8f6,	// (0x0001c7f1) bg_button_pane_cp024

0x6d57,	// (0x00015c52) vitu2_page_scroll_pane_g1

0x6d5f,	// (0x00015c5a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e9c7) vitu2_page_scroll_pane_g

0x6d67,	// (0x00015c62) vitu2_page_scroll_pane_t1

0xd929,	// (0x0001c824) popup_char_count_window_g1

0xd932,	// (0x0001c82d) popup_char_count_window_g2

0xd93b,	// (0x0001c836) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e9cc) popup_char_count_window_g

0xd944,	// (0x0001c83f) popup_char_count_window_t1

0x94e2,	// (0x000183dd) main_vded2_pane

0xc93b,	// (0x0001b836) aid_size_cell_imed_line

0xc945,	// (0x0001b840) grid_imed_line_width_pane

0xd176,	// (0x0001c071) vid4_indicators_pane_g4

0xd952,	// (0x0001c84d) cell_imed_line_width_pane_ParamLimits

0xd952,	// (0x0001c84d) cell_imed_line_width_pane

0xd966,	// (0x0001c861) cell_imed_line_width_pane_g1

0xd96f,	// (0x0001c86a) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e9d3) cell_imed_line_width_pane_g

0x6d76,	// (0x00015c71) main_vded2_pane_g1_ParamLimits

0x6d76,	// (0x00015c71) main_vded2_pane_g1

0x6d8c,	// (0x00015c87) main_vded2_pane_g2_ParamLimits

0x6d8c,	// (0x00015c87) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001e9d8) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001e9d8) main_vded2_pane_g

0x6d9e,	// (0x00015c99) vded2_slider_pane_ParamLimits

0x6d9e,	// (0x00015c99) vded2_slider_pane

0x6dae,	// (0x00015ca9) aid_size_touch_vded2_end

0x6db8,	// (0x00015cb3) aid_size_touch_vded2_playhead

0xd977,	// (0x0001c872) aid_size_touch_vded2_start

0xd97f,	// (0x0001c87a) vded2_slider_bg_pane

0xd988,	// (0x0001c883) vded2_slider_pane_g1

0xd991,	// (0x0001c88c) vded2_slider_pane_g2

0x6dc2,	// (0x00015cbd) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001e9dd) vded2_slider_pane_g

0xd999,	// (0x0001c894) vded2_slider_bg_pane_g1

0xd9a2,	// (0x0001c89d) vded2_slider_bg_pane_g2

0xd9ab,	// (0x0001c8a6) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001e9e4) vded2_slider_bg_pane_g

0x2d6f,	// (0x00011c6a) aid_postcard_touch_down_pane_ParamLimits

0x2d6f,	// (0x00011c6a) aid_postcard_touch_down_pane

0x2d85,	// (0x00011c80) aid_postcard_touch_up_pane_ParamLimits

0x2d85,	// (0x00011c80) aid_postcard_touch_up_pane

0x94e2,	// (0x000183dd) main_blid2_pane

0xbee7,	// (0x0001ade2) popup_blid2_search_window

0x94e2,	// (0x000183dd) blid2_gps_pane

0x94e2,	// (0x000183dd) blid2_navig_pane

0x94e2,	// (0x000183dd) blid2_search_pane

0x94e2,	// (0x000183dd) blid2_tripm_pane

0x6dcd,	// (0x00015cc8) blid2_search_pane_g1_ParamLimits

0x6dcd,	// (0x00015cc8) blid2_search_pane_g1

0x6de7,	// (0x00015ce2) blid2_search_pane_t1_ParamLimits

0x6de7,	// (0x00015ce2) blid2_search_pane_t1

0x6df9,	// (0x00015cf4) aid_size_cell_blid2_gps_ParamLimits

0x6df9,	// (0x00015cf4) aid_size_cell_blid2_gps

0x6e11,	// (0x00015d0c) blid2_gps_pane_g1_ParamLimits

0x6e11,	// (0x00015d0c) blid2_gps_pane_g1

0x6e25,	// (0x00015d20) grid_blid2_satellite_pane_ParamLimits

0x6e25,	// (0x00015d20) grid_blid2_satellite_pane

0x6e3f,	// (0x00015d3a) blid2_navig_pane_g1_ParamLimits

0x6e3f,	// (0x00015d3a) blid2_navig_pane_g1

0x6e4b,	// (0x00015d46) blid2_navig_pane_t1_ParamLimits

0x6e4b,	// (0x00015d46) blid2_navig_pane_t1

0x6e66,	// (0x00015d61) blid2_navig_pane_t2_ParamLimits

0x6e66,	// (0x00015d61) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001e9eb) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001e9eb) blid2_navig_pane_t

0x6e81,	// (0x00015d7c) blid2_navig_ring_pane_ParamLimits

0x6e81,	// (0x00015d7c) blid2_navig_ring_pane

0x6e9a,	// (0x00015d95) blid2_speed_pane_ParamLimits

0x6e9a,	// (0x00015d95) blid2_speed_pane

0x6ea6,	// (0x00015da1) blid2_tripm_pane_g1_ParamLimits

0x6ea6,	// (0x00015da1) blid2_tripm_pane_g1

0x6ebf,	// (0x00015dba) blid2_tripm_pane_g2_ParamLimits

0x6ebf,	// (0x00015dba) blid2_tripm_pane_g2

0x6ed3,	// (0x00015dce) blid2_tripm_pane_g3_ParamLimits

0x6ed3,	// (0x00015dce) blid2_tripm_pane_g3

0x6ee7,	// (0x00015de2) blid2_tripm_pane_g4_ParamLimits

0x6ee7,	// (0x00015de2) blid2_tripm_pane_g4

0x6efb,	// (0x00015df6) blid2_tripm_pane_g5_ParamLimits

0x6efb,	// (0x00015df6) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001e9f0) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001e9f0) blid2_tripm_pane_g

0x6f21,	// (0x00015e1c) blid2_tripm_pane_t1_ParamLimits

0x6f21,	// (0x00015e1c) blid2_tripm_pane_t1

0x6f3c,	// (0x00015e37) blid2_tripm_pane_t2_ParamLimits

0x6f3c,	// (0x00015e37) blid2_tripm_pane_t2

0x6f55,	// (0x00015e50) blid2_tripm_pane_t3_ParamLimits

0x6f55,	// (0x00015e50) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001e9fd) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001e9fd) blid2_tripm_pane_t

0x6f9c,	// (0x00015e97) cell_blid2_satellite_pane_ParamLimits

0x6f9c,	// (0x00015e97) cell_blid2_satellite_pane

0x6fba,	// (0x00015eb5) cell_blid2_satellite_pane_g1

0xd9b4,	// (0x0001c8af) cell_blid2_satellite_pane_t1

0xc3f4,	// (0x0001b2ef) blid2_speed_pane_g1

0xd9c2,	// (0x0001c8bd) blid2_speed_pane_t1

0xd9d0,	// (0x0001c8cb) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ea06) blid2_speed_pane_t

0xc3f4,	// (0x0001b2ef) blid2_navig_ring_pane_g1

0x6fc3,	// (0x00015ebe) blid2_navig_ring_pane_g2

0x6fcb,	// (0x00015ec6) blid2_navig_ring_pane_g3

0x6fd3,	// (0x00015ece) blid2_navig_ring_pane_g4

0x6fdb,	// (0x00015ed6) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ea0b) blid2_navig_ring_pane_g

0x94e2,	// (0x000183dd) bg_popup_window_pane_cp011

0xd9de,	// (0x0001c8d9) popup_blid2_search_window_g1

0xd9e6,	// (0x0001c8e1) popup_blid2_search_window_t1

0xd9f4,	// (0x0001c8ef) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ea16) popup_blid2_search_window_t

0xa03f,	// (0x00018f3a) main_browser_pane_g1

0x9cb5,	// (0x00018bb0) main_browser_pane_ParamLimits

0x9552,	// (0x0001844d) bg_button_pane_cp011_ParamLimits

0x5f0d,	// (0x00014e08) cell_vitu2_function_pane_g1_ParamLimits

0xbed9,	// (0x0001add4) bg_popup_sub_pane_cp22_ParamLimits

0x6850,	// (0x0001574b) input_focus_pane_cp08_ParamLimits

0x6867,	// (0x00015762) popup_vitu2_query_button_pane_ParamLimits

0x6867,	// (0x00015762) popup_vitu2_query_button_pane

0x6878,	// (0x00015773) popup_vitu2_query_input_button_pane

0xd553,	// (0x0001c44e) popup_vitu2_query_window_g1_ParamLimits

0x6882,	// (0x0001577d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e917) popup_vitu2_query_window_g_ParamLimits

0x94e2,	// (0x000183dd) bg_button_pane_cp026

0x6fe3,	// (0x00015ede) popup_vitu2_query_input_button_pane_g1

0x94e2,	// (0x000183dd) bg_button_pane_cp025

0xda02,	// (0x0001c8fd) popup_vitu2_query_button_pane_t1

0x4405,	// (0x00013300) main_mp3_pane_t6

0x4413,	// (0x0001330e) popup_slider_window_cp01

0xd0da,	// (0x0001bfd5) cam4_battery_pane

0xd133,	// (0x0001c02e) cam4_battery_pane_cp02

0xd838,	// (0x0001c733) cam4_battery_pane_cp01

0xd838,	// (0x0001c733) cam4_battery_pane_cp03

0xc3f4,	// (0x0001b2ef) cam4_battery_pane_g1

0xda10,	// (0x0001c90b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ea1b) cam4_battery_pane_g

0xc2c0,	// (0x0001b1bb) popup_blid_sat_info2_window_t11

0xa847,	// (0x00019742) aid_size_touch_mv_arrow_left_ParamLimits

0xa870,	// (0x0001976b) aid_size_touch_mv_arrow_right_ParamLimits

0xa8ce,	// (0x000197c9) navi_pane_g1_ParamLimits

0xa8da,	// (0x000197d5) navi_pane_g2_ParamLimits

0xa908,	// (0x00019803) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e2e0) navi_pane_g_ParamLimits

0x281b,	// (0x00011716) navi_pane_mv_t1_ParamLimits

0x5088,	// (0x00013f83) grid_imed_effect_pane_ParamLimits

0x1423,	// (0x0001031e) aid_placing_vt_slider_lsc

0x9f8e,	// (0x00018e89) aid_placing_vt_slider_prt

0x9552,	// (0x0001844d) bg_tb_trans_pane_cp01_ParamLimits

0xc580,	// (0x0001b47b) popup_image_details_window_g1_ParamLimits

0xc593,	// (0x0001b48e) popup_image_details_window_g2_ParamLimits

0xc5a8,	// (0x0001b4a3) popup_image_details_window_g3_ParamLimits

0xc5a8,	// (0x0001b4a3) popup_image_details_window_g3

0xf718,	// (0x0001e613) popup_image_details_window_g_ParamLimits

0xc5bc,	// (0x0001b4b7) popup_image_details_window_t1_ParamLimits

0xc5ce,	// (0x0001b4c9) popup_image_details_window_t2_ParamLimits

0xc5e7,	// (0x0001b4e2) popup_image_details_window_t3_ParamLimits

0xc5fb,	// (0x0001b4f6) popup_image_details_window_t4_ParamLimits

0xc616,	// (0x0001b511) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e61a) popup_image_details_window_t_ParamLimits

0x6bf2,	// (0x00015aed) cl_header_name_pane_ParamLimits

0x6bf2,	// (0x00015aed) cl_header_name_pane

0x6feb,	// (0x00015ee6) cl_header_name_pane_t1_ParamLimits

0x6feb,	// (0x00015ee6) cl_header_name_pane_t1

0x700c,	// (0x00015f07) cl_header_name_pane_t2_ParamLimits

0x700c,	// (0x00015f07) cl_header_name_pane_t2

0x704e,	// (0x00015f49) cl_header_name_pane_t3_ParamLimits

0x704e,	// (0x00015f49) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ea20) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ea20) cl_header_name_pane_t

0xa997,	// (0x00019892) navi_pane_mv_g2_ParamLimits

0xd1c2,	// (0x0001c0bd) field_vitu2_entry_pane_g1_ParamLimits

0xd1ce,	// (0x0001c0c9) field_vitu2_entry_pane_g2_ParamLimits

0xd1da,	// (0x0001c0d5) field_vitu2_entry_pane_g3_ParamLimits

0xd1da,	// (0x0001c0d5) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e816) field_vitu2_entry_pane_g_ParamLimits

0x5da8,	// (0x00014ca3) cell_vitu2_itu_pane_g1_ParamLimits

0x5db8,	// (0x00014cb3) cell_vitu2_itu_pane_g2_ParamLimits

0x5db8,	// (0x00014cb3) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e822) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e822) cell_vitu2_itu_pane_g

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp05_ParamLimits

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp05

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp03

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp04

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp10_ParamLimits

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp10

0x6b98,	// (0x00015a93) bg_vkb2_func_pane_cp08

0x6b7e,	// (0x00015a79) bg_vkb2_func_pane_cp06

0x6b8c,	// (0x00015a87) bg_vkb2_func_pane_cp07

0xd8ff,	// (0x0001c7fa) bg_vkb2_func_pane_cp11_ParamLimits

0xd8ff,	// (0x0001c7fa) bg_vkb2_func_pane_cp11

0xd914,	// (0x0001c80f) bg_vkb2_func_pane_cp12_ParamLimits

0xd914,	// (0x0001c80f) bg_vkb2_func_pane_cp12

0x94e2,	// (0x000183dd) bg_vkb2_func_pane_cp09

0xd217,	// (0x0001c112) bg_vkb2_func_pane_g1

0xa150,	// (0x0001904b) bg_vkb2_func_pane_g2

0xd21f,	// (0x0001c11a) bg_vkb2_func_pane_g3

0xd227,	// (0x0001c122) bg_vkb2_func_pane_g4

0xd4f8,	// (0x0001c3f3) bg_vkb2_func_pane_g5

0xd23f,	// (0x0001c13a) bg_vkb2_func_pane_g6

0xd247,	// (0x0001c142) bg_vkb2_func_pane_g7

0xd237,	// (0x0001c132) bg_vkb2_func_pane_g8

0xa130,	// (0x0001902b) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ea27) bg_vkb2_func_pane_g

0x6f0f,	// (0x00015e0a) blid2_tripm_pane_g6_ParamLimits

0x6f0f,	// (0x00015e0a) blid2_tripm_pane_g6

0xcf2d,	// (0x0001be28) mp4_progress_pane_g1

0x6f88,	// (0x00015e83) blid2_tripm_values_pane_ParamLimits

0x6f88,	// (0x00015e83) blid2_tripm_values_pane

0x707f,	// (0x00015f7a) blid2_tripm_values_pane_t1

0x708d,	// (0x00015f88) blid2_tripm_values_pane_t2

0x709b,	// (0x00015f96) blid2_tripm_values_pane_t3

0x70a9,	// (0x00015fa4) blid2_tripm_values_pane_t4

0x70b7,	// (0x00015fb2) blid2_tripm_values_pane_t5

0x70c5,	// (0x00015fc0) blid2_tripm_values_pane_t6

0x70d3,	// (0x00015fce) blid2_tripm_values_pane_t7

0x70e1,	// (0x00015fdc) blid2_tripm_values_pane_t8

0x70ef,	// (0x00015fea) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ea3a) blid2_tripm_values_pane_t

0x1465,	// (0x00010360) call_video_pane_t1_ParamLimits

0x1483,	// (0x0001037e) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e169) call_video_pane_t_ParamLimits

0x2ced,	// (0x00011be8) msg_header_pane_g1_ParamLimits

0xaba1,	// (0x00019a9c) msg_header_pane_g2_ParamLimits

0xaba1,	// (0x00019a9c) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e383) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e383) msg_header_pane_g

0x9cb5,	// (0x00018bb0) main_clock2_pane_ParamLimits

0x4d89,	// (0x00013c84) grid_clock2_toolbar_pane_ParamLimits

0x4d89,	// (0x00013c84) grid_clock2_toolbar_pane

0x4d89,	// (0x00013c84) listscroll_clock2_pane_ParamLimits

0x4d89,	// (0x00013c84) listscroll_clock2_pane

0x4e7c,	// (0x00013d77) main_clock2_pane_t3_ParamLimits

0x4e7c,	// (0x00013d77) main_clock2_pane_t3

0x4ea0,	// (0x00013d9b) main_clock2_pane_t4_ParamLimits

0x4ea0,	// (0x00013d9b) main_clock2_pane_t4

0xda1a,	// (0x0001c915) cell_clock2_toolbar_pane

0xda22,	// (0x0001c91d) cell_clock2_toolbar_pane_cp01

0xda22,	// (0x0001c91d) cell_clock2_toolbar_pane_cp02

0xda2a,	// (0x0001c925) cell_clock2_toolbar_pane_cp03

0xda32,	// (0x0001c92d) list_clock2_pane

0xa7bd,	// (0x000196b8) scroll_pane_cp10

0xda3a,	// (0x0001c935) list_single_clock2_pane_ParamLimits

0xda3a,	// (0x0001c935) list_single_clock2_pane

0xa9fe,	// (0x000198f9) list_highlight_pane_cp08

0xda47,	// (0x0001c942) list_single_clock2_pane_t1

0xda55,	// (0x0001c950) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ea4d) list_single_clock2_pane_t

0x94e2,	// (0x000183dd) bg_button_pane_cp10

0xda63,	// (0x0001c95e) cell_clock2_toolbar_pane_g1

0x2cfb,	// (0x00011bf6) aid_main_viewer_pane_g1_ParamLimits

0x2cfb,	// (0x00011bf6) aid_main_viewer_pane_g1

0x2d09,	// (0x00011c04) aid_main_viewer_pane_g2_ParamLimits

0x2d09,	// (0x00011c04) aid_main_viewer_pane_g2

0x2d17,	// (0x00011c12) aid_main_viewer_pane_g3_ParamLimits

0x2d17,	// (0x00011c12) aid_main_viewer_pane_g3

0x2d26,	// (0x00011c21) aid_main_viewer_pane_g4_ParamLimits

0x2d26,	// (0x00011c21) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e394) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e394) aid_main_viewer_pane_g

0x362c,	// (0x00012527) main_calc_pane_ParamLimits

0x3640,	// (0x0001253b) main_dialer2_pane_ParamLimits

0x94e2,	// (0x000183dd) main_cam6_pane

0x94e2,	// (0x000183dd) main_vid6_pane

0x4d95,	// (0x00013c90) listscroll_gen_pane_cp06_ParamLimits

0x4d95,	// (0x00013c90) listscroll_gen_pane_cp06

0x4ec3,	// (0x00013dbe) main_clock2_pane_t5_ParamLimits

0x4ec3,	// (0x00013dbe) main_clock2_pane_t5

0x4f1d,	// (0x00013e18) aid_call2_pane_cp10_ParamLimits

0x4f2f,	// (0x00013e2a) aid_call_pane_cp10_ParamLimits

0xa83b,	// (0x00019736) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa83b,	// (0x00019736) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f41,	// (0x00013e3c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f41,	// (0x00013e3c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa83b,	// (0x00019736) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e6cf) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f53,	// (0x00013e4e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55bc,	// (0x000144b7) cell_dialer2_keypad_pane_g2_ParamLimits

0x55bc,	// (0x000144b7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e7b5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e7b5) cell_dialer2_keypad_pane_g

0x55d8,	// (0x000144d3) cell_dialer2_keypad_pane_t1

0x6224,	// (0x0001511f) main_cset_text2_pane_ParamLimits

0x6224,	// (0x0001511f) main_cset_text2_pane

0xd73f,	// (0x0001c63a) area_vitu2_query_pane_g1_ParamLimits

0x6b1d,	// (0x00015a18) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e96a) area_vitu2_query_pane_g_ParamLimits

0xd7c3,	// (0x0001c6be) area_vitu2_query_pane_t7_ParamLimits

0xd7c3,	// (0x0001c6be) area_vitu2_query_pane_t7

0x6b7e,	// (0x00015a79) bg_button_pane_cp018_ParamLimits

0x6b8c,	// (0x00015a87) bg_button_pane_cp021_ParamLimits

0x6b98,	// (0x00015a93) bg_button_pane_cp022_ParamLimits

0x6b98,	// (0x00015a93) bg_vkb2_func_pane_cp08_ParamLimits

0x6b7e,	// (0x00015a79) bg_vkb2_func_pane_cp06_ParamLimits

0x6b8c,	// (0x00015a87) bg_vkb2_func_pane_cp07_ParamLimits

0x6ba7,	// (0x00015aa2) input_focus_pane_cp09_ParamLimits

0xda6b,	// (0x0001c966) cam6_autofocus_pane_ParamLimits

0xda6b,	// (0x0001c966) cam6_autofocus_pane

0x70fd,	// (0x00015ff8) cam6_image_uncrop_pane_ParamLimits

0x70fd,	// (0x00015ff8) cam6_image_uncrop_pane

0x710c,	// (0x00016007) cam6_indi_pane_ParamLimits

0x710c,	// (0x00016007) cam6_indi_pane

0x7122,	// (0x0001601d) cam6_mode_pane_ParamLimits

0x7122,	// (0x0001601d) cam6_mode_pane

0x7134,	// (0x0001602f) cam6_timer_pane_ParamLimits

0x7134,	// (0x0001602f) cam6_timer_pane

0x7140,	// (0x0001603b) cam6_zoom_pane_ParamLimits

0x7140,	// (0x0001603b) cam6_zoom_pane

0x714c,	// (0x00016047) cam6_mode_pane_g1_ParamLimits

0x714c,	// (0x00016047) cam6_mode_pane_g1

0x715c,	// (0x00016057) cam6_mode_pane_g2_ParamLimits

0x715c,	// (0x00016057) cam6_mode_pane_g2

0x716c,	// (0x00016067) cam6_mode_pane_g3_ParamLimits

0x716c,	// (0x00016067) cam6_mode_pane_g3

0x717c,	// (0x00016077) cam6_mode_pane_g4_ParamLimits

0x717c,	// (0x00016077) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ea52) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ea52) cam6_mode_pane_g

0xd2ed,	// (0x0001c1e8) bg_tb_trans_pane_cp08_ParamLimits

0xd2ed,	// (0x0001c1e8) bg_tb_trans_pane_cp08

0xda79,	// (0x0001c974) cam6_battery_pane_ParamLimits

0xda79,	// (0x0001c974) cam6_battery_pane

0xda8f,	// (0x0001c98a) cam6_indi_pane_g1_ParamLimits

0xda8f,	// (0x0001c98a) cam6_indi_pane_g1

0xdaa1,	// (0x0001c99c) cam6_indi_pane_g2_ParamLimits

0xdaa1,	// (0x0001c99c) cam6_indi_pane_g2

0xdab3,	// (0x0001c9ae) cam6_indi_pane_g3_ParamLimits

0xdab3,	// (0x0001c9ae) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ea5b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ea5b) cam6_indi_pane_g

0xdac5,	// (0x0001c9c0) cam6_indi_pane_t1_ParamLimits

0xdac5,	// (0x0001c9c0) cam6_indi_pane_t1

0x718c,	// (0x00016087) cam6_autofocus_pane_g1

0x7194,	// (0x0001608f) cam6_autofocus_pane_g2

0x719c,	// (0x00016097) cam6_autofocus_pane_g3

0x71a4,	// (0x0001609f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ea62) cam6_autofocus_pane_g

0xdaeb,	// (0x0001c9e6) cam6_timer_pane_g1

0xdaf3,	// (0x0001c9ee) cam6_timer_pane_t1

0xdb01,	// (0x0001c9fc) cam6_zoom_cont_pane

0xdb09,	// (0x0001ca04) cam6_zoom_pane_g1

0xdb11,	// (0x0001ca0c) cam6_zoom_pane_g2

0x71ac,	// (0x000160a7) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ea6b) cam6_zoom_pane_g

0xc3f4,	// (0x0001b2ef) cam6_battery_pane_g1

0xc3f4,	// (0x0001b2ef) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d7) cam6_battery_pane_g

0xdb19,	// (0x0001ca14) cam6_zoom_cont_pane_g1

0xdb22,	// (0x0001ca1d) cam6_zoom_cont_pane_g2

0xdb2b,	// (0x0001ca26) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001ea72) cam6_zoom_cont_pane_g

0x71c9,	// (0x000160c4) cam6_mode_pane_cp_ParamLimits

0x71c9,	// (0x000160c4) cam6_mode_pane_cp

0x7140,	// (0x0001603b) cam6_zoom_pane_cp_ParamLimits

0x7140,	// (0x0001603b) cam6_zoom_pane_cp

0x71db,	// (0x000160d6) vid6_image_uncrop_cif_pane_ParamLimits

0x71db,	// (0x000160d6) vid6_image_uncrop_cif_pane

0x71eb,	// (0x000160e6) vid6_image_uncrop_nhd_pane_ParamLimits

0x71eb,	// (0x000160e6) vid6_image_uncrop_nhd_pane

0x70fd,	// (0x00015ff8) vid6_image_uncrop_vga_pane_ParamLimits

0x70fd,	// (0x00015ff8) vid6_image_uncrop_vga_pane

0x71fa,	// (0x000160f5) vid6_image_uncrop_wvga_pane_ParamLimits

0x71fa,	// (0x000160f5) vid6_image_uncrop_wvga_pane

0x7209,	// (0x00016104) vid6_indi_pane_ParamLimits

0x7209,	// (0x00016104) vid6_indi_pane

0xd2ed,	// (0x0001c1e8) bg_tb_trans_pane_cp09_ParamLimits

0xd2ed,	// (0x0001c1e8) bg_tb_trans_pane_cp09

0xdb43,	// (0x0001ca3e) cam6_battery_pane_cp_ParamLimits

0xdb43,	// (0x0001ca3e) cam6_battery_pane_cp

0xdb4f,	// (0x0001ca4a) vid6_indi_pane_g1_ParamLimits

0xdb4f,	// (0x0001ca4a) vid6_indi_pane_g1

0xdb61,	// (0x0001ca5c) vid6_indi_pane_g2_ParamLimits

0xdb61,	// (0x0001ca5c) vid6_indi_pane_g2

0xdb73,	// (0x0001ca6e) vid6_indi_pane_g3_ParamLimits

0xdb73,	// (0x0001ca6e) vid6_indi_pane_g3

0xdb88,	// (0x0001ca83) vid6_indi_pane_g4_ParamLimits

0xdb88,	// (0x0001ca83) vid6_indi_pane_g4

0xdb9d,	// (0x0001ca98) vid6_indi_pane_g5_ParamLimits

0xdb9d,	// (0x0001ca98) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001ea79) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001ea79) vid6_indi_pane_g

0xdbb7,	// (0x0001cab2) vid6_indi_pane_t1_ParamLimits

0xdbb7,	// (0x0001cab2) vid6_indi_pane_t1

0xdbcd,	// (0x0001cac8) vid6_indi_pane_t2_ParamLimits

0xdbcd,	// (0x0001cac8) vid6_indi_pane_t2

0xdbf5,	// (0x0001caf0) vid6_indi_pane_t3_ParamLimits

0xdbf5,	// (0x0001caf0) vid6_indi_pane_t3

0xdc1d,	// (0x0001cb18) vid6_indi_pane_t4_ParamLimits

0xdc1d,	// (0x0001cb18) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001ea84) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001ea84) vid6_indi_pane_t

0xdc41,	// (0x0001cb3c) wait_bar_pane_cp08

0x7221,	// (0x0001611c) main_cset_text2_pane_t1_ParamLimits

0x7221,	// (0x0001611c) main_cset_text2_pane_t1

0x71b4,	// (0x000160af) listscroll_gen_pane_cp06_t1_ParamLimits

0x71b4,	// (0x000160af) listscroll_gen_pane_cp06_t1

0x94e2,	// (0x000183dd) main_cam6_set_pane

0xc660,	// (0x0001b55b) bg_tb_trans_pane_cp06_ParamLimits

0xd0e2,	// (0x0001bfdd) cam4_indicators_pane_g1_ParamLimits

0xd0f3,	// (0x0001bfee) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e7f2) cam4_indicators_pane_g_ParamLimits

0xd111,	// (0x0001c00c) cam4_indicators_pane_t1_ParamLimits

0x9552,	// (0x0001844d) bg_tb_trans_pane_cp07_ParamLimits

0xd13d,	// (0x0001c038) vid4_indicators_pane_g1_ParamLimits

0xd151,	// (0x0001c04c) vid4_indicators_pane_g2_ParamLimits

0xd165,	// (0x0001c060) vid4_indicators_pane_g3_ParamLimits

0xd176,	// (0x0001c071) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e804) vid4_indicators_pane_g_ParamLimits

0xd194,	// (0x0001c08f) vid4_indicators_pane_t1_ParamLimits

0xd840,	// (0x0001c73b) vid4_progress_pane_g1_ParamLimits

0xd850,	// (0x0001c74b) vid4_progress_pane_g2_ParamLimits

0x6ce2,	// (0x00015bdd) vid4_progress_pane_g3_ParamLimits

0xd860,	// (0x0001c75b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e9b5) vid4_progress_pane_g_ParamLimits

0x6cf4,	// (0x00015bef) vid4_progress_pane_t1_ParamLimits

0xd878,	// (0x0001c773) vid4_progress_pane_t2_ParamLimits

0xd88d,	// (0x0001c788) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e9c0) vid4_progress_pane_t_ParamLimits

0x6d0c,	// (0x00015c07) wait_bar_pane_cp07_ParamLimits

0x723e,	// (0x00016139) main_cam6_set_pane_g2_ParamLimits

0x723e,	// (0x00016139) main_cam6_set_pane_g2

0x7262,	// (0x0001615d) main_cset6_listscroll_pane_ParamLimits

0x7262,	// (0x0001615d) main_cset6_listscroll_pane

0x7282,	// (0x0001617d) main_cset6_slider_pane_ParamLimits

0x7282,	// (0x0001617d) main_cset6_slider_pane

0x7298,	// (0x00016193) main_cset6_text2_pane_ParamLimits

0x7298,	// (0x00016193) main_cset6_text2_pane

0xdc50,	// (0x0001cb4b) main_cset6_text_pane

0xdc58,	// (0x0001cb53) main_cset_list_pane_copy1_ParamLimits

0xdc58,	// (0x0001cb53) main_cset_list_pane_copy1

0xdc68,	// (0x0001cb63) scroll_pane_cp028_copy1

0x72a6,	// (0x000161a1) cset_list_set_pane_copy1

0x72b7,	// (0x000161b2) aid_position_infowindow_above_copy1

0x72bf,	// (0x000161ba) aid_position_infowindow_below_copy1

0x72c7,	// (0x000161c2) cset_list_set_pane_g1_copy1

0x72cf,	// (0x000161ca) cset_list_set_pane_g3_copy1_ParamLimits

0x72cf,	// (0x000161ca) cset_list_set_pane_g3_copy1

0x72de,	// (0x000161d9) cset_list_set_pane_t1_copy1_ParamLimits

0x72de,	// (0x000161d9) cset_list_set_pane_t1_copy1

0x9552,	// (0x0001844d) list_highlight_pane_cp021_copy1_ParamLimits

0x9552,	// (0x0001844d) list_highlight_pane_cp021_copy1

0xdc71,	// (0x0001cb6c) cset6_slider_pane_ParamLimits

0xdc71,	// (0x0001cb6c) cset6_slider_pane

0xdc9d,	// (0x0001cb98) main_cset6_slider_pane_g1_ParamLimits

0xdc9d,	// (0x0001cb98) main_cset6_slider_pane_g1

0x72f3,	// (0x000161ee) main_cset6_slider_pane_g2_ParamLimits

0x72f3,	// (0x000161ee) main_cset6_slider_pane_g2

0xdcc5,	// (0x0001cbc0) main_cset6_slider_pane_g3_ParamLimits

0xdcc5,	// (0x0001cbc0) main_cset6_slider_pane_g3

0x731b,	// (0x00016216) main_cset6_slider_pane_g4_ParamLimits

0x731b,	// (0x00016216) main_cset6_slider_pane_g4

0x7327,	// (0x00016222) main_cset6_slider_pane_g5_ParamLimits

0x7327,	// (0x00016222) main_cset6_slider_pane_g5

0xd37c,	// (0x0001c277) main_cset6_slider_pane_g7_ParamLimits

0xd37c,	// (0x0001c277) main_cset6_slider_pane_g7

0xd388,	// (0x0001c283) main_cset6_slider_pane_g8_ParamLimits

0xd388,	// (0x0001c283) main_cset6_slider_pane_g8

0x62d1,	// (0x000151cc) main_cset6_slider_pane_g9_ParamLimits

0x62d1,	// (0x000151cc) main_cset6_slider_pane_g9

0x62dd,	// (0x000151d8) main_cset6_slider_pane_g10_ParamLimits

0x62dd,	// (0x000151d8) main_cset6_slider_pane_g10

0x62e9,	// (0x000151e4) main_cset6_slider_pane_g11_ParamLimits

0x62e9,	// (0x000151e4) main_cset6_slider_pane_g11

0x62f5,	// (0x000151f0) main_cset6_slider_pane_g12_ParamLimits

0x62f5,	// (0x000151f0) main_cset6_slider_pane_g12

0x6301,	// (0x000151fc) main_cset6_slider_pane_g13_ParamLimits

0x6301,	// (0x000151fc) main_cset6_slider_pane_g13

0x630d,	// (0x00015208) main_cset6_slider_pane_g14_ParamLimits

0x630d,	// (0x00015208) main_cset6_slider_pane_g14

0x7333,	// (0x0001622e) main_cset6_slider_pane_g15_ParamLimits

0x7333,	// (0x0001622e) main_cset6_slider_pane_g15

0x6331,	// (0x0001522c) main_cset6_slider_pane_g16_ParamLimits

0x6331,	// (0x0001522c) main_cset6_slider_pane_g16

0x633d,	// (0x00015238) main_cset6_slider_pane_g17_ParamLimits

0x633d,	// (0x00015238) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001ea8d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001ea8d) main_cset6_slider_pane_g

0xdcd1,	// (0x0001cbcc) main_cset6_slider_pane_t1_ParamLimits

0xdcd1,	// (0x0001cbcc) main_cset6_slider_pane_t1

0x7363,	// (0x0001625e) main_cset6_slider_pane_t2_ParamLimits

0x7363,	// (0x0001625e) main_cset6_slider_pane_t2

0x738e,	// (0x00016289) main_cset6_slider_pane_t3_ParamLimits

0x738e,	// (0x00016289) main_cset6_slider_pane_t3

0x73b9,	// (0x000162b4) main_cset6_slider_pane_t4_ParamLimits

0x73b9,	// (0x000162b4) main_cset6_slider_pane_t4

0x73e4,	// (0x000162df) main_cset6_slider_pane_t5_ParamLimits

0x73e4,	// (0x000162df) main_cset6_slider_pane_t5

0xdd12,	// (0x0001cc0d) main_cset6_slider_pane_t7_ParamLimits

0xdd12,	// (0x0001cc0d) main_cset6_slider_pane_t7

0x740f,	// (0x0001630a) main_cset6_slider_pane_t8_ParamLimits

0x740f,	// (0x0001630a) main_cset6_slider_pane_t8

0x7433,	// (0x0001632e) main_cset6_slider_pane_t9_ParamLimits

0x7433,	// (0x0001632e) main_cset6_slider_pane_t9

0x7457,	// (0x00016352) main_cset6_slider_pane_t10_ParamLimits

0x7457,	// (0x00016352) main_cset6_slider_pane_t10

0x747b,	// (0x00016376) main_cset6_slider_pane_t11_ParamLimits

0x747b,	// (0x00016376) main_cset6_slider_pane_t11

0xdd48,	// (0x0001cc43) main_cset6_slider_pane_t14_ParamLimits

0xdd48,	// (0x0001cc43) main_cset6_slider_pane_t14

0xdd81,	// (0x0001cc7c) main_cset6_slider_pane_t15_ParamLimits

0xdd81,	// (0x0001cc7c) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001eab2) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001eab2) main_cset6_slider_pane_t

0xd490,	// (0x0001c38b) cset_slider_pane_g1_copy1

0xd499,	// (0x0001c394) cset_slider_pane_g2_copy1

0xd4a2,	// (0x0001c39d) cset_slider_pane_g3_copy1

0x94e2,	// (0x000183dd) bg_popup_sub_pane_cp011_copy1

0xddba,	// (0x0001ccb5) main_cset_text_pane_g1_copy1

0xd567,	// (0x0001c462) main_cset_text_pane_t1_copy1

0xd575,	// (0x0001c470) main_cset_text_pane_t2_copy1

0xd583,	// (0x0001c47e) main_cset_text_pane_t3_copy1

0xd591,	// (0x0001c48c) main_cset_text_pane_t4_copy1

0xd59f,	// (0x0001c49a) main_cset_text_pane_t5_copy1

0xddc2,	// (0x0001ccbd) main_cset_text_pane_t6_copy1

0xd5bb,	// (0x0001c4b6) main_cset_text_pane_t7_copy1

0x7221,	// (0x0001611c) main_cset_text2_pane_t1_copy1

0x9552,	// (0x0001844d) main_ncimui_pane

0x388a,	// (0x00012785) popup_query_ncimui_window_ParamLimits

0x388a,	// (0x00012785) popup_query_ncimui_window

0xc6c5,	// (0x0001b5c0) field_cale_ev2_pane_g4_ParamLimits

0xc6c5,	// (0x0001b5c0) field_cale_ev2_pane_g4

0x549c,	// (0x00014397) cell_video_dialer_keypad_pane_g2_ParamLimits

0x549c,	// (0x00014397) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e790) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e790) cell_video_dialer_keypad_pane_g

0x54b4,	// (0x000143af) cell_video_dialer_keypad_pane_t1

0x94e2,	// (0x000183dd) bg_popup_window_pane_cp012

0xa68a,	// (0x00019585) heading_pane_cp06

0xddee,	// (0x0001cce9) ncim_query_content_pane

0x94e2,	// (0x000183dd) bg_popup_heading_pane_cp01

0xddf6,	// (0x0001ccf1) ncim_heading_pane_t1

0xde04,	// (0x0001ccff) ncim_indicator_popup_pane

0xde16,	// (0x0001cd11) ncim_query_button_pane

0xde2a,	// (0x0001cd25) ncim_query_content_pane_t1

0xde3c,	// (0x0001cd37) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001eaf6) ncim_query_content_pane_t

0xde76,	// (0x0001cd71) ncim_query_list_pane

0xde88,	// (0x0001cd83) ncim_query_popup_pane

0xde04,	// (0x0001ccff) ncim_indicator_popup_pane_ParamLimits

0x7696,	// (0x00016591) ncim_query_content_pane_g1_ParamLimits

0x7696,	// (0x00016591) ncim_query_content_pane_g1

0xde2a,	// (0x0001cd25) ncim_query_content_pane_t1_ParamLimits

0xde3c,	// (0x0001cd37) ncim_query_content_pane_t2_ParamLimits

0x76a2,	// (0x0001659d) ncim_query_content_pane_t3_ParamLimits

0x76a2,	// (0x0001659d) ncim_query_content_pane_t3

0x76ca,	// (0x000165c5) ncim_query_content_pane_t4_ParamLimits

0x76ca,	// (0x000165c5) ncim_query_content_pane_t4

0x76f2,	// (0x000165ed) ncim_query_content_pane_t5_ParamLimits

0x76f2,	// (0x000165ed) ncim_query_content_pane_t5

0xde4e,	// (0x0001cd49) ncim_query_content_pane_t6_ParamLimits

0xde4e,	// (0x0001cd49) ncim_query_content_pane_t6

0xfbfb,	// (0x0001eaf6) ncim_query_content_pane_t_ParamLimits

0xde76,	// (0x0001cd71) ncim_query_list_pane_ParamLimits

0xde88,	// (0x0001cd83) ncim_query_popup_pane_ParamLimits

0xde9c,	// (0x0001cd97) wait_bar_pane_cp04

0x94e2,	// (0x000183dd) input_focus_pane_cp011

0xdea4,	// (0x0001cd9f) ncim_query_popup_pane_t1

0xdeb2,	// (0x0001cdad) ncim_list_query_list_pane_ParamLimits

0xdeb2,	// (0x0001cdad) ncim_list_query_list_pane

0x94e2,	// (0x000183dd) bg_button_pane_cp027

0xdebf,	// (0x0001cdba) ncim_query_button_pane_g1

0x94e2,	// (0x000183dd) list_highlight_pane_cp012

0xdec9,	// (0x0001cdc4) ncim_list_query_list_pane_g1

0xded1,	// (0x0001cdcc) ncim_list_query_list_pane_t1

0xd102,	// (0x0001bffd) cam4_indicators_pane_g3_ParamLimits

0xd102,	// (0x0001bffd) cam4_indicators_pane_g3

0xd182,	// (0x0001c07d) vid4_indicators_pane_g5_ParamLimits

0xd182,	// (0x0001c07d) vid4_indicators_pane_g5

0xd86c,	// (0x0001c767) vid4_progress_pane_g5_ParamLimits

0xd86c,	// (0x0001c767) vid4_progress_pane_g5

0x7584,	// (0x0001647f) main_ncimui_pane_g1

0x75ea,	// (0x000164e5) ncimui_group_query_pane_ParamLimits

0x75ea,	// (0x000164e5) ncimui_group_query_pane

0x7632,	// (0x0001652d) ncimui_list_pane_ParamLimits

0x7632,	// (0x0001652d) ncimui_list_pane

0x7659,	// (0x00016554) ncimui_text_pane_ParamLimits

0x7659,	// (0x00016554) ncimui_text_pane

0x771a,	// (0x00016615) ncimui_text_pane_t1_ParamLimits

0x771a,	// (0x00016615) ncimui_text_pane_t1

0xdedf,	// (0x0001cdda) ncimui_list_single_graphic_pane_ParamLimits

0xdedf,	// (0x0001cdda) ncimui_list_single_graphic_pane

0x7738,	// (0x00016633) ncimui_query_pane_ParamLimits

0x7738,	// (0x00016633) ncimui_query_pane

0x94e2,	// (0x000183dd) list_highlight_pane_cp013

0xdeef,	// (0x0001cdea) ncim_list_query_list_pane_t1_copy1

0xdec9,	// (0x0001cdc4) ncim_list_single_graphic_pane_g1

0xdefd,	// (0x0001cdf8) ncim_query_button_pane_cp01

0xdf09,	// (0x0001ce04) ncim_query_entry_pane_ParamLimits

0xdf09,	// (0x0001ce04) ncim_query_entry_pane

0xdf1c,	// (0x0001ce17) ncimui_query_pane_g1

0xdf28,	// (0x0001ce23) ncimui_query_pane_t1_ParamLimits

0xdf28,	// (0x0001ce23) ncimui_query_pane_t1

0x9552,	// (0x0001844d) input_focus_pane_cp012

0xdf41,	// (0x0001ce3c) ncim_query_entry_pane_t1

0x9cb5,	// (0x00018bb0) main_im_pane_ParamLimits

0x9552,	// (0x0001844d) main_mobtv_pane_ParamLimits

0x9552,	// (0x0001844d) main_mobtv_pane

0x734b,	// (0x00016246) main_cset6_slider_pane_g18_ParamLimits

0x734b,	// (0x00016246) main_cset6_slider_pane_g18

0x7357,	// (0x00016252) main_cset6_slider_pane_g19_ParamLimits

0x7357,	// (0x00016252) main_cset6_slider_pane_g19

0xd2fb,	// (0x0001c1f6) bg_main_mobtv_pane_ParamLimits

0xd2fb,	// (0x0001c1f6) bg_main_mobtv_pane

0x774b,	// (0x00016646) main_mobtv_info_pane

0x7754,	// (0x0001664f) main_mobtv_loading_pane_ParamLimits

0x7754,	// (0x0001664f) main_mobtv_loading_pane

0xdf53,	// (0x0001ce4e) main_mobtv_pg_channel_list_pane

0xdf5d,	// (0x0001ce58) main_mobtv_pg_hdr_pane

0x7761,	// (0x0001665c) main_mobtv_programe_curr_pane_ParamLimits

0x7761,	// (0x0001665c) main_mobtv_programe_curr_pane

0x776e,	// (0x00016669) main_mobtv_programe_next_pane_ParamLimits

0x776e,	// (0x00016669) main_mobtv_programe_next_pane

0xdf66,	// (0x0001ce61) popup_mobtv_noti_window

0xc3f4,	// (0x0001b2ef) main_tv_pg_hdr_pane_g1

0xdf6e,	// (0x0001ce69) main_tv_pg_hdr_pane_g2

0xdf76,	// (0x0001ce71) main_tv_pg_hdr_pane_g3

0xdf7e,	// (0x0001ce79) main_tv_pg_hdr_pane_g4

0xdf86,	// (0x0001ce81) main_tv_pg_hdr_pane_g5

0xdf90,	// (0x0001ce8b) main_tv_pg_hdr_pane_g6

0xdf9a,	// (0x0001ce95) main_tv_pg_hdr_pane_g7

0xdfa4,	// (0x0001ce9f) main_tv_pg_hdr_pane_g8

0xdfae,	// (0x0001cea9) main_tv_pg_hdr_pane_g9

0xdfb8,	// (0x0001ceb3) main_tv_pg_hdr_pane_g10

0xdfc2,	// (0x0001cebd) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001eb03) main_tv_pg_hdr_pane_g

0xdfcc,	// (0x0001cec7) main_tv_pg_hdr_pane_t1

0xdfda,	// (0x0001ced5) main_tv_pg_hdr_pane_t2

0xdfe8,	// (0x0001cee3) main_tv_pg_hdr_pane_t3

0xdff8,	// (0x0001cef3) main_tv_pg_hdr_pane_t4

0xe008,	// (0x0001cf03) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001eb1a) main_tv_pg_hdr_pane_t

0xe018,	// (0x0001cf13) single_mobtv_pg_channel_pane_ParamLimits

0xe018,	// (0x0001cf13) single_mobtv_pg_channel_pane

0xe02a,	// (0x0001cf25) single_mobtv_pg_channel_table_pane

0xe033,	// (0x0001cf2e) single_mobtv_pg_channel_thumb_pane

0xe03c,	// (0x0001cf37) single_tv_pg_channel_pane_g1

0xe045,	// (0x0001cf40) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001eb25) single_tv_pg_channel_pane_g

0xc660,	// (0x0001b55b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc660,	// (0x0001b55b) bg_single_mobtv_pg_channel_thumb_pane

0xe04e,	// (0x0001cf49) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe04e,	// (0x0001cf49) single_mobtv_pg_channel_thumb_pane_g1

0xe05c,	// (0x0001cf57) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe05c,	// (0x0001cf57) single_mobtv_pg_channel_thumb_pane_g2

0xe068,	// (0x0001cf63) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe068,	// (0x0001cf63) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001eb2a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001eb2a) single_mobtv_pg_channel_thumb_pane_g

0xe074,	// (0x0001cf6f) single_mobtv_pg_channel_thumb_pane_t1

0xe082,	// (0x0001cf7d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001eb31) single_mobtv_pg_channel_thumb_pane_t

0xc3f4,	// (0x0001b2ef) bg_single_mobtv_pg_channel_table_pane_g1

0xc3f4,	// (0x0001b2ef) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d7) bg_single_mobtv_pg_channel_table_pane_g

0xe090,	// (0x0001cf8b) single_mobtv_pg_channel_table_pane_t1

0xe09e,	// (0x0001cf99) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001eb36) single_mobtv_pg_channel_table_pane_t

0x7783,	// (0x0001667e) main_mobtv_info_pane_g1_ParamLimits

0x7783,	// (0x0001667e) main_mobtv_info_pane_g1

0x77a1,	// (0x0001669c) main_mobtv_info_pane_t1_ParamLimits

0x77a1,	// (0x0001669c) main_mobtv_info_pane_t1

0x7819,	// (0x00016714) main_mobtv_info_pane_t2_ParamLimits

0x7819,	// (0x00016714) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001eb40) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001eb40) main_mobtv_info_pane_t

0x78a8,	// (0x000167a3) wait_bar_pane_cp05

0x78ba,	// (0x000167b5) main_mobtv_loading_pane_g1_ParamLimits

0x78ba,	// (0x000167b5) main_mobtv_loading_pane_g1

0x78cd,	// (0x000167c8) main_mobtv_loading_pane_g2_ParamLimits

0x78cd,	// (0x000167c8) main_mobtv_loading_pane_g2

0x78d9,	// (0x000167d4) main_mobtv_loading_pane_g3_ParamLimits

0x78d9,	// (0x000167d4) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001eb47) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001eb47) main_mobtv_loading_pane_g

0xe0ac,	// (0x0001cfa7) main_mobtv_loading_pane_t1_ParamLimits

0xe0ac,	// (0x0001cfa7) main_mobtv_loading_pane_t1

0xe0c4,	// (0x0001cfbf) main_mobtv_loading_pane_t2_ParamLimits

0xe0c4,	// (0x0001cfbf) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001eb4e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001eb4e) main_mobtv_loading_pane_t

0x78ec,	// (0x000167e7) wait_bar_pane_cp06_ParamLimits

0x78ec,	// (0x000167e7) wait_bar_pane_cp06

0xe0e8,	// (0x0001cfe3) main_mobtv_programe_curr_pane_t1

0xe0f6,	// (0x0001cff1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001eb53) main_mobtv_programe_curr_pane_t

0xe104,	// (0x0001cfff) main_mobtv_programe_next_pane_t1

0xe112,	// (0x0001d00d) main_mobtv_programe_next_pane_t2

0xe120,	// (0x0001d01b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001eb58) main_mobtv_programe_next_pane_t

0x94e2,	// (0x000183dd) bg_popup_mobtv_noti_window_pane

0xe12e,	// (0x0001d029) popup_mobtv_noti_window_g1

0xe136,	// (0x0001d031) popup_mobtv_noti_window_t1

0xe144,	// (0x0001d03f) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001eb5f) popup_mobtv_noti_window_t

0xc3f4,	// (0x0001b2ef) bg_popup_mobtv_noti_window_pane_g1

0x94e2,	// (0x000183dd) sc_clock_pane

0x94e2,	// (0x000183dd) main_fs_bigclock_pane

0x6f72,	// (0x00015e6d) blid2_tripm_pane_t4_ParamLimits

0x6f72,	// (0x00015e6d) blid2_tripm_pane_t4

0x78fb,	// (0x000167f6) sc_clock_pane_g1_ParamLimits

0x78fb,	// (0x000167f6) sc_clock_pane_g1

0x790d,	// (0x00016808) sc_clock_pane_t1_ParamLimits

0x790d,	// (0x00016808) sc_clock_pane_t1

0x792f,	// (0x0001682a) sc_clock_pane_t2_ParamLimits

0x792f,	// (0x0001682a) sc_clock_pane_t2

0x7947,	// (0x00016842) sc_clock_pane_t3_ParamLimits

0x7947,	// (0x00016842) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001eb64) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001eb64) sc_clock_pane_t

0x89d4,	// (0x000178cf) main_fs_bigclock_indicator_pane_ParamLimits

0x89d4,	// (0x000178cf) main_fs_bigclock_indicator_pane

0x79e7,	// (0x000168e2) main_fs_bigclock_pane_g1_ParamLimits

0x79e7,	// (0x000168e2) main_fs_bigclock_pane_g1

0x89e0,	// (0x000178db) main_fs_bigclock_pane_t1_ParamLimits

0x89e0,	// (0x000178db) main_fs_bigclock_pane_t1

0x89f2,	// (0x000178ed) main_fs_bigclock_pane_t2_ParamLimits

0x89f2,	// (0x000178ed) main_fs_bigclock_pane_t2

0x8a06,	// (0x00017901) main_fs_bigclock_pane_t3_ParamLimits

0x8a06,	// (0x00017901) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ed69) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ed69) main_fs_bigclock_pane_t

0xec5e,	// (0x0001db59) main_fs_bigclock_indicator_pane_g1

0xde1e,	// (0x0001cd19) ncim_query_content_pane_g2_ParamLimits

0xde1e,	// (0x0001cd19) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001eaf1) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001eaf1) ncim_query_content_pane_g

0x7960,	// (0x0001685b) sc_clock_pane_t4_ParamLimits

0x7960,	// (0x0001685b) sc_clock_pane_t4

0x9552,	// (0x0001844d) main_radioblah_pane

0xd048,	// (0x0001bf43) cell_call4_button_pane_t1_copy1_ParamLimits

0xd048,	// (0x0001bf43) cell_call4_button_pane_t1_copy1

0x759c,	// (0x00016497) main_ncimui_pane_t1_ParamLimits

0x759c,	// (0x00016497) main_ncimui_pane_t1

0x75b6,	// (0x000164b1) main_ncimui_pane_t2_ParamLimits

0x75b6,	// (0x000164b1) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001eaea) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001eaea) main_ncimui_pane_t

0xe288,	// (0x0001d183) main_radioblah_anim_pane_ParamLimits

0xe288,	// (0x0001d183) main_radioblah_anim_pane

0xe299,	// (0x0001d194) main_radioblah_info_pane_ParamLimits

0xe299,	// (0x0001d194) main_radioblah_info_pane

0xe2ad,	// (0x0001d1a8) main_radioblah_pane_t1_ParamLimits

0xe2ad,	// (0x0001d1a8) main_radioblah_pane_t1

0xe2c9,	// (0x0001d1c4) main_radioblah_pane_t2_ParamLimits

0xe2c9,	// (0x0001d1c4) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001eb85) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001eb85) main_radioblah_pane_t

0x7a3f,	// (0x0001693a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a3f,	// (0x0001693a) main_radioblah_rocker_ctrl_pane

0xe311,	// (0x0001d20c) main_radioblah_info_pane_t1_ParamLimits

0xe311,	// (0x0001d20c) main_radioblah_info_pane_t1

0x7a97,	// (0x00016992) main_radioblah_info_pane_t2_ParamLimits

0x7a97,	// (0x00016992) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001eb8e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001eb8e) main_radioblah_info_pane_t

0xc3f4,	// (0x0001b2ef) main_radioblah_rocker_ctrl_pane_g1

0x7b47,	// (0x00016a42) main_radioblah_rocker_ctrl_pane_g2

0x7b4f,	// (0x00016a4a) main_radioblah_rocker_ctrl_pane_g3

0x7b57,	// (0x00016a52) main_radioblah_rocker_ctrl_pane_g4

0x7b5f,	// (0x00016a5a) main_radioblah_rocker_ctrl_pane_g5

0x7b67,	// (0x00016a62) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001eb97) main_radioblah_rocker_ctrl_pane_g

0x7221,	// (0x0001611c) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0d2,	// (0x0001bfcd) cam4_image_uncrop_qvga_pane

0xd12b,	// (0x0001c026) vid4_image_uncrop_qcif_pane

0xda6b,	// (0x0001c966) cam6_image_uncrop_qvga_pane_ParamLimits

0xda6b,	// (0x0001c966) cam6_image_uncrop_qvga_pane

0xdb33,	// (0x0001ca2e) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb33,	// (0x0001ca2e) vid6_image_uncrop_qcif_pane

0x94e2,	// (0x000183dd) bg_popup_preview_window_pane_cp03

0xddd0,	// (0x0001cccb) list_cset_text2_pane

0xddd8,	// (0x0001ccd3) main_cset6_text2_pane_g1

0xdde0,	// (0x0001ccdb) main_cset6_text2_pane_t1

0x7b6f,	// (0x00016a6a) list_cset_text2_pane_t1_ParamLimits

0x7b6f,	// (0x00016a6a) list_cset_text2_pane_t1

0x9552,	// (0x0001844d) main_radioblah_pane_ParamLimits

0x7894,	// (0x0001678f) main_mobtv_info_pane_t3_ParamLimits

0x7894,	// (0x0001678f) main_mobtv_info_pane_t3

0x7a2d,	// (0x00016928) main_radioblah_pane_g1

0x7a67,	// (0x00016962) main_radioblah_info_pane_g1

0x7aec,	// (0x000169e7) main_radioblah_info_pane_t3_ParamLimits

0x7aec,	// (0x000169e7) main_radioblah_info_pane_t3

0x2330,	// (0x0001122b) highlight_cell_cale_month_pane_ParamLimits

0x2330,	// (0x0001122b) highlight_cell_cale_month_pane

0x94e2,	// (0x000183dd) main_phob_fisheye_pane

0xc768,	// (0x0001b663) scroll_pane_cp0031_ParamLimits

0xc768,	// (0x0001b663) scroll_pane_cp0031

0xdc41,	// (0x0001cb3c) wait_bar_pane_cp08_ParamLimits

0x72a6,	// (0x000161a1) cset_list_set_pane_copy1_ParamLimits

0xe34b,	// (0x0001d246) highlight_cell_cale_month_pane_g1

0x7b88,	// (0x00016a83) highlight_cell_cale_month_pane_t1

0xd82f,	// (0x0001c72a) list_gen_pane_cp01

0xd367,	// (0x0001c262) scroll_pane_01

0xe353,	// (0x0001d24e) list_single_double_fisheye_pane

0x7b96,	// (0x00016a91) list_double_fisheye_pane_g1_ParamLimits

0x7b96,	// (0x00016a91) list_double_fisheye_pane_g1

0x7ba2,	// (0x00016a9d) list_double_fisheye_pane_g2_ParamLimits

0x7ba2,	// (0x00016a9d) list_double_fisheye_pane_g2

0x7bb6,	// (0x00016ab1) list_double_fisheye_pane_g3_ParamLimits

0x7bb6,	// (0x00016ab1) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001eba4) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001eba4) list_double_fisheye_pane_g

0x7bdf,	// (0x00016ada) list_double_fisheye_pane_t1_ParamLimits

0x7bdf,	// (0x00016ada) list_double_fisheye_pane_t1

0x7bfa,	// (0x00016af5) list_double_fisheye_pane_t2_ParamLimits

0x7bfa,	// (0x00016af5) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ebaf) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ebaf) list_double_fisheye_pane_t

0x94e2,	// (0x000183dd) main_call5_pane

0x798b,	// (0x00016886) sc_swipe_pane_ParamLimits

0x798b,	// (0x00016886) sc_swipe_pane

0x7c2f,	// (0x00016b2a) call5_image_pane_ParamLimits

0x7c2f,	// (0x00016b2a) call5_image_pane

0x7c4c,	// (0x00016b47) call5_swipe_1_pane_ParamLimits

0x7c4c,	// (0x00016b47) call5_swipe_1_pane

0x7c5f,	// (0x00016b5a) call5_swipe_2_pane_ParamLimits

0x7c5f,	// (0x00016b5a) call5_swipe_2_pane

0x7c8a,	// (0x00016b85) popup_call5_audio_first_window_ParamLimits

0x7c8a,	// (0x00016b85) popup_call5_audio_first_window

0xc660,	// (0x0001b55b) call5_swipe_1_pane_g1_ParamLimits

0xc660,	// (0x0001b55b) call5_swipe_1_pane_g1

0xe35c,	// (0x0001d257) call5_swipe_1_pane_g2_ParamLimits

0xe35c,	// (0x0001d257) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ebb4) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ebb4) call5_swipe_1_pane_g

0xe368,	// (0x0001d263) call5_swipe_1_pane_t1_ParamLimits

0xe368,	// (0x0001d263) call5_swipe_1_pane_t1

0xc660,	// (0x0001b55b) call5_swipe_2_pane_g1_ParamLimits

0xc660,	// (0x0001b55b) call5_swipe_2_pane_g1

0xe37d,	// (0x0001d278) call5_swipe_2_pane_g2_ParamLimits

0xe37d,	// (0x0001d278) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001ebb9) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001ebb9) call5_swipe_2_pane_g

0xe389,	// (0x0001d284) call5_swipe_2_pane_t1_ParamLimits

0xe389,	// (0x0001d284) call5_swipe_2_pane_t1

0xe39e,	// (0x0001d299) sc_swipe_pane_g1_ParamLimits

0xe39e,	// (0x0001d299) sc_swipe_pane_g1

0xe3ab,	// (0x0001d2a6) sc_swipe_pane_g2_ParamLimits

0xe3ab,	// (0x0001d2a6) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001ebbe) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001ebbe) sc_swipe_pane_g

0xe3b7,	// (0x0001d2b2) sc_swipe_pane_t1_ParamLimits

0xe3b7,	// (0x0001d2b2) sc_swipe_pane_t1

0x94e2,	// (0x000183dd) main_cmail_launcher_pane

0x7c9b,	// (0x00016b96) aid_size_cell_cmail_l_ParamLimits

0x7c9b,	// (0x00016b96) aid_size_cell_cmail_l

0x7cb5,	// (0x00016bb0) grid_cmail_l_pane_ParamLimits

0x7cb5,	// (0x00016bb0) grid_cmail_l_pane

0x7cd0,	// (0x00016bcb) cell_cmail_l_pane_ParamLimits

0x7cd0,	// (0x00016bcb) cell_cmail_l_pane

0x7cf6,	// (0x00016bf1) cell_cmail_l_pane_g1_ParamLimits

0x7cf6,	// (0x00016bf1) cell_cmail_l_pane_g1

0x7d02,	// (0x00016bfd) cell_cmail_l_pane_t1_ParamLimits

0x7d02,	// (0x00016bfd) cell_cmail_l_pane_t1

0xe3cc,	// (0x0001d2c7) cell_cmail_l_pane_t2_ParamLimits

0xe3cc,	// (0x0001d2c7) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001ebc3) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001ebc3) cell_cmail_l_pane_t

0x9552,	// (0x0001844d) grid_highlight_pane_cp018_ParamLimits

0x9552,	// (0x0001844d) grid_highlight_pane_cp018

0x0293,	// (0x0000f18e) main2_pane_ParamLimits

0x0293,	// (0x0000f18e) main2_pane

0x9d72,	// (0x00018c6d) popup_sp_fs_action_menu_bg_pane_g1

0x9d7a,	// (0x00018c75) popup_sp_fs_action_menu_bg_pane_g2

0x9d82,	// (0x00018c7d) popup_sp_fs_action_menu_bg_pane_g3

0x9d8a,	// (0x00018c85) popup_sp_fs_action_menu_bg_pane_g4

0x9d92,	// (0x00018c8d) popup_sp_fs_action_menu_bg_pane_g5

0x9d9a,	// (0x00018c95) popup_sp_fs_action_menu_bg_pane_g6

0x9da2,	// (0x00018c9d) popup_sp_fs_action_menu_bg_pane_g7

0x9daa,	// (0x00018ca5) popup_sp_fs_action_menu_bg_pane_g8

0x9db2,	// (0x00018cad) popup_sp_fs_action_menu_bg_pane_g9

0x9dba,	// (0x00018cb5) popup_sp_fs_action_menu_bg_pane_g10

0x9dba,	// (0x00018cb5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0001e081) popup_sp_fs_action_menu_bg_pane_g

0x129b,	// (0x00010196) list_medium_line_x2_t3_g3_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t3_g3_g1

0x12a7,	// (0x000101a2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x2_t3_g3_g2

0x12b3,	// (0x000101ae) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e133) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e133) list_medium_line_x2_t3_g3_g

0x12bf,	// (0x000101ba) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12bf,	// (0x000101ba) list_medium_line_x2_t3_g3_t1

0x12d4,	// (0x000101cf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12d4,	// (0x000101cf) list_medium_line_x2_t3_g3_t2

0x12e8,	// (0x000101e3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e13a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e13a) list_medium_line_x2_t3_g3_t

0x129b,	// (0x00010196) list_medium_line_x2_t3_g2_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t3_g2_g1

0x12b3,	// (0x000101ae) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e141) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e141) list_medium_line_x2_t3_g2_g

0x12fd,	// (0x000101f8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12fd,	// (0x000101f8) list_medium_line_x2_t3_g2_t1

0x1313,	// (0x0001020e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1313,	// (0x0001020e) list_medium_line_x2_t3_g2_t2

0x1325,	// (0x00010220) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1325,	// (0x00010220) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e146) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e146) list_medium_line_x2_t3_g2_t

0x129b,	// (0x00010196) list_medium_line_x2_t4_g4_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t4_g4_g1

0x1343,	// (0x0001023e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1343,	// (0x0001023e) list_medium_line_x2_t4_g4_g2

0x12a7,	// (0x000101a2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x2_t4_g4_g3

0x134f,	// (0x0001024a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x134f,	// (0x0001024a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e14d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e14d) list_medium_line_x2_t4_g4_g

0x135b,	// (0x00010256) list_medium_line_x2_t4_g4_t1_ParamLimits

0x135b,	// (0x00010256) list_medium_line_x2_t4_g4_t1

0x1375,	// (0x00010270) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1375,	// (0x00010270) list_medium_line_x2_t4_g4_t2

0x138b,	// (0x00010286) list_medium_line_x2_t4_g4_t3_ParamLimits

0x138b,	// (0x00010286) list_medium_line_x2_t4_g4_t3

0x13a0,	// (0x0001029b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13a0,	// (0x0001029b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e156) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e156) list_medium_line_x2_t4_g4_t

0x129b,	// (0x00010196) list_medium_line_x2_t2_g4_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t2_g4_g1

0x1343,	// (0x0001023e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1343,	// (0x0001023e) list_medium_line_x2_t2_g4_g2

0x12a7,	// (0x000101a2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x2_t2_g4_g3

0x12b3,	// (0x000101ae) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e1bd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e1bd) list_medium_line_x2_t2_g4_g

0x2356,	// (0x00011251) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2356,	// (0x00011251) list_medium_line_x2_t2_g4_t1

0x12e8,	// (0x000101e3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e1c6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e1c6) list_medium_line_x2_t2_g4_t

0x129b,	// (0x00010196) list_medium_line_x2_t2_g3_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t2_g3_g1

0x12a7,	// (0x000101a2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x2_t2_g3_g2

0x12b3,	// (0x000101ae) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e133) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e133) list_medium_line_x2_t2_g3_g

0x236b,	// (0x00011266) list_medium_line_x2_t2_g3_t1_ParamLimits

0x236b,	// (0x00011266) list_medium_line_x2_t2_g3_t1

0x12e8,	// (0x000101e3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e1cb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e1cb) list_medium_line_x2_t2_g3_t

0x24a8,	// (0x000113a3) main_sp_fs_list_pane_ParamLimits

0x24a8,	// (0x000113a3) main_sp_fs_list_pane

0xd317,	// (0x0001c212) sp_fs_scroll_pane_ParamLimits

0xd317,	// (0x0001c212) sp_fs_scroll_pane

0x24b4,	// (0x000113af) list_medium_line_x2_t3_t1

0x24c4,	// (0x000113bf) list_medium_line_x2_t3_t2

0x24d2,	// (0x000113cd) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e216) list_medium_line_x2_t3_t

0x24e0,	// (0x000113db) list_medium_line_x3_t4_t1

0x24f0,	// (0x000113eb) list_medium_line_x3_t4_t2

0x24fe,	// (0x000113f9) list_medium_line_x3_t4_t3

0x24d2,	// (0x000113cd) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e21d) list_medium_line_x3_t4_t

0x250c,	// (0x00011407) list_medium_line_x4_t5_t1

0x251c,	// (0x00011417) list_medium_line_x4_t5_t2

0x24fe,	// (0x000113f9) list_medium_line_x4_t5_t3

0x252a,	// (0x00011425) list_medium_line_x4_t5_t4

0x24d2,	// (0x000113cd) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e226) list_medium_line_x4_t5_t

0x129b,	// (0x00010196) list_medium_line_t4_g4_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_t4_g4_g1

0x2538,	// (0x00011433) list_medium_line_t4_g4_g2_ParamLimits

0x2538,	// (0x00011433) list_medium_line_t4_g4_g2

0x2544,	// (0x0001143f) list_medium_line_t4_g4_g3_ParamLimits

0x2544,	// (0x0001143f) list_medium_line_t4_g4_g3

0x12b3,	// (0x000101ae) list_medium_line_t4_g4_g4_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e231) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e231) list_medium_line_t4_g4_g

0x2550,	// (0x0001144b) list_medium_line_t4_g4_t1_ParamLimits

0x2550,	// (0x0001144b) list_medium_line_t4_g4_t1

0x2565,	// (0x00011460) list_medium_line_t4_g4_t2_ParamLimits

0x2565,	// (0x00011460) list_medium_line_t4_g4_t2

0x257b,	// (0x00011476) list_medium_line_t4_g4_t3_ParamLimits

0x257b,	// (0x00011476) list_medium_line_t4_g4_t3

0x12e8,	// (0x000101e3) list_medium_line_t4_g4_t4_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e23a) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e23a) list_medium_line_t4_g4_t

0x2644,	// (0x0001153f) chi_dic_find_pane_g1

0x3654,	// (0x0001254f) main_tport_pane

0x65d7,	// (0x000154d2) list_medium_line_plain_t1

0x6689,	// (0x00015584) list_medium_line_t2_g2_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_t2_g2_g1

0x6695,	// (0x00015590) list_medium_line_t2_g2_g2_ParamLimits

0x6695,	// (0x00015590) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e8fb) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e8fb) list_medium_line_t2_g2_g

0x66a1,	// (0x0001559c) list_medium_line_t2_g2_t1_ParamLimits

0x66a1,	// (0x0001559c) list_medium_line_t2_g2_t1

0x66b8,	// (0x000155b3) list_medium_line_t2_g2_t2_ParamLimits

0x66b8,	// (0x000155b3) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e900) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e900) list_medium_line_t2_g2_t

0xd8a2,	// (0x0001c79d) aid_sp_fs_list_icon_a_sm

0xd8aa,	// (0x0001c7a5) aid_sp_fs_list_icon_d

0xd8b2,	// (0x0001c7ad) aid_sp_fs_text_primary

0xd8bb,	// (0x0001c7b6) aid_sp_fs_text_secondary

0x6d1f,	// (0x00015c1a) list_medium_line

0x6d1f,	// (0x00015c1a) list_medium_line_g2

0x6d1f,	// (0x00015c1a) list_medium_line_g3

0x6d1f,	// (0x00015c1a) list_medium_line_plain

0x6d1f,	// (0x00015c1a) list_medium_line_plain_t2

0x6d1f,	// (0x00015c1a) list_medium_line_plain_t3

0x6d1f,	// (0x00015c1a) list_medium_line_right_icon

0x6d1f,	// (0x00015c1a) list_medium_line_right_iconx2

0x6d1f,	// (0x00015c1a) list_medium_line_t2

0x6d1f,	// (0x00015c1a) list_medium_line_t2_g2

0x6d1f,	// (0x00015c1a) list_medium_line_t2_g3

0x6d1f,	// (0x00015c1a) list_medium_line_t2_right_icon

0x6d1f,	// (0x00015c1a) list_medium_line_t2_right_iconx2

0x6d1f,	// (0x00015c1a) list_medium_line_t3

0x6d1f,	// (0x00015c1a) list_medium_line_t3_g2

0x6d1f,	// (0x00015c1a) list_medium_line_t3_g3

0x6d1f,	// (0x00015c1a) list_medium_line_t3_right_iconx2

0x6d28,	// (0x00015c23) list_medium_line_t4_g4

0x6d31,	// (0x00015c2c) list_medium_line_x2

0x6d31,	// (0x00015c2c) list_medium_line_x2_t2_g2

0x6d31,	// (0x00015c2c) list_medium_line_x2_t2_g3

0x6d31,	// (0x00015c2c) list_medium_line_x2_t2_g4

0x6d31,	// (0x00015c2c) list_medium_line_x2_t3

0x6d31,	// (0x00015c2c) list_medium_line_x2_t3_g2

0x6d31,	// (0x00015c2c) list_medium_line_x2_t3_g3

0x6d31,	// (0x00015c2c) list_medium_line_x2_t3_g4

0x6d31,	// (0x00015c2c) list_medium_line_x2_t4_g2

0x6d31,	// (0x00015c2c) list_medium_line_x2_t4_g4

0x6d3a,	// (0x00015c35) list_medium_line_x3

0x6d3a,	// (0x00015c35) list_medium_line_x3_t4

0x6d3a,	// (0x00015c35) list_medium_line_x3_t4_g4

0x6d28,	// (0x00015c23) list_medium_line_x4_t4

0x6d28,	// (0x00015c23) list_medium_line_x4_t4_g7

0x6d28,	// (0x00015c23) list_medium_line_x4_t5

0x6d43,	// (0x00015c3e) list_single_fs_dyc_pane_ParamLimits

0x6d43,	// (0x00015c3e) list_single_fs_dyc_pane

0x129b,	// (0x00010196) list_medium_line_x4_t4_g7_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x4_t4_g7_g1

0x749f,	// (0x0001639a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x749f,	// (0x0001639a) list_medium_line_x4_t4_g7_g2

0x74ab,	// (0x000163a6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74ab,	// (0x000163a6) list_medium_line_x4_t4_g7_g3

0x74ba,	// (0x000163b5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74ba,	// (0x000163b5) list_medium_line_x4_t4_g7_g4

0x74c6,	// (0x000163c1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74c6,	// (0x000163c1) list_medium_line_x4_t4_g7_g5

0x74d5,	// (0x000163d0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74d5,	// (0x000163d0) list_medium_line_x4_t4_g7_g6

0x74e4,	// (0x000163df) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74e4,	// (0x000163df) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001eacb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001eacb) list_medium_line_x4_t4_g7_g

0x74f0,	// (0x000163eb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74f0,	// (0x000163eb) list_medium_line_x4_t4_g7_t1

0x7505,	// (0x00016400) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7505,	// (0x00016400) list_medium_line_x4_t4_g7_t2

0x751a,	// (0x00016415) list_medium_line_x4_t4_g7_t3_ParamLimits

0x751a,	// (0x00016415) list_medium_line_x4_t4_g7_t3

0x752f,	// (0x0001642a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x752f,	// (0x0001642a) list_medium_line_x4_t4_g7_t4

0x7541,	// (0x0001643c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7541,	// (0x0001643c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001eada) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001eada) list_medium_line_x4_t4_g7_t

0x7553,	// (0x0001644e) list_single_dyc_row_pane_ParamLimits

0x7553,	// (0x0001644e) list_single_dyc_row_pane

0x7c1c,	// (0x00016b17) call5_gesture_pane_ParamLimits

0x7c1c,	// (0x00016b17) call5_gesture_pane

0x7c72,	// (0x00016b6d) call5_windows_pane_ParamLimits

0x7c72,	// (0x00016b6d) call5_windows_pane

0x7d18,	// (0x00016c13) call5_swipe_1_pane_cp_ParamLimits

0x7d18,	// (0x00016c13) call5_swipe_1_pane_cp

0x7d24,	// (0x00016c1f) call5_swipe_2_pane_cp_ParamLimits

0x7d24,	// (0x00016c1f) call5_swipe_2_pane_cp

0xa9fe,	// (0x000198f9) call5_image_pane_cp

0x7d30,	// (0x00016c2b) popup_call5_audio_first_window_cp_ParamLimits

0x7d30,	// (0x00016c2b) popup_call5_audio_first_window_cp

0xe39e,	// (0x0001d299) call5_swipe_1_pane_g1_cp_ParamLimits

0xe39e,	// (0x0001d299) call5_swipe_1_pane_g1_cp

0xe3de,	// (0x0001d2d9) call5_swipe_1_pane_g2_cp

0xe3b7,	// (0x0001d2b2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3b7,	// (0x0001d2b2) call5_swipe_1_pane_t1_cp

0xe39e,	// (0x0001d299) call5_swipe_2_pane_g1_cp_ParamLimits

0xe39e,	// (0x0001d299) call5_swipe_2_pane_g1_cp

0xe3e6,	// (0x0001d2e1) call5_swipe_2_pane_g2_cp

0xe3ee,	// (0x0001d2e9) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3ee,	// (0x0001d2e9) call5_swipe_2_pane_t1_cp

0x9552,	// (0x0001844d) main_sp_fs_email_pane

0xe403,	// (0x0001d2fe) main_sp_fs_listscroll_pane_te

0x7d3e,	// (0x00016c39) popup_sp_fs_action_menu_pane_ParamLimits

0x7d3e,	// (0x00016c39) popup_sp_fs_action_menu_pane

0xc3f4,	// (0x0001b2ef) bg_sp_fs_ctrlbar_pane_g1

0xc9ff,	// (0x0001b8fa) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca11,	// (0x0001b90c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca08,	// (0x0001b903) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3f4,	// (0x0001b2ef) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001ebc8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1d9,	// (0x0001b0d4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1d9,	// (0x0001b0d4) bg_sp_fs_ctrlbar_ddmenu_pane

0xe40c,	// (0x0001d307) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe40c,	// (0x0001d307) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe418,	// (0x0001d313) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe418,	// (0x0001d313) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001ebd1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001ebd1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe424,	// (0x0001d31f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe424,	// (0x0001d31f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d82,	// (0x00016c7d) list_medium_line_t2_right_icon_g1

0x7d8a,	// (0x00016c85) list_medium_line_t2_right_icon_t1

0x7d9a,	// (0x00016c95) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001ebd6) list_medium_line_t2_right_icon_t

0xbed9,	// (0x0001add4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbed9,	// (0x0001add4) bg_sp_fs_ctrlbar_pane

0x7df4,	// (0x00016cef) main_sp_fs_ctrlbar_button_pane_cp01

0x7dfe,	// (0x00016cf9) main_sp_fs_ctrlbar_ddmenu_pane

0xe476,	// (0x0001d371) main_sp_fs_ctrlbar_pane_g1

0xe482,	// (0x0001d37d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001ebdb) main_sp_fs_ctrlbar_pane_g

0xe48e,	// (0x0001d389) main_sp_fs_ctrlbar_pane_t1

0x7e08,	// (0x00016d03) main_sp_fs_ctrlbar_pane

0x7e2c,	// (0x00016d27) main_sp_fs_listscroll_pane_te_cp01

0x7e4c,	// (0x00016d47) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e4c,	// (0x00016d47) popup_sp_fs_action_menu_pane_cp01

0x9552,	// (0x0001844d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9552,	// (0x0001844d) bg_sp_fs_highlight_list_pane_cp01

0xe4be,	// (0x0001d3b9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4be,	// (0x0001d3b9) sp_fs_action_menu_list_gene_pane_g1

0xe4cd,	// (0x0001d3c8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4cd,	// (0x0001d3c8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ebe5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ebe5) sp_fs_action_menu_list_gene_pane_g

0xe4da,	// (0x0001d3d5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4da,	// (0x0001d3d5) sp_fs_action_menu_list_gene_pane_t1

0xe4f2,	// (0x0001d3ed) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4f2,	// (0x0001d3ed) sp_fs_action_menu_list_gene_pane

0xe511,	// (0x0001d40c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe511,	// (0x0001d40c) popup_sp_fs_action_menu_bg_pane

0xe51f,	// (0x0001d41a) sp_fs_action_menu_list_pane_ParamLimits

0xe51f,	// (0x0001d41a) sp_fs_action_menu_list_pane

0x7e7c,	// (0x00016d77) sp_fs_scroll_pane_cp01_ParamLimits

0x7e7c,	// (0x00016d77) sp_fs_scroll_pane_cp01

0x7ea2,	// (0x00016d9d) list_medium_line_plain_t2_t1

0x7eb2,	// (0x00016dad) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ebea) list_medium_line_plain_t2_t

0x7ec2,	// (0x00016dbd) list_medium_line_plain_t3_t1

0x7ed2,	// (0x00016dcd) list_medium_line_plain_t3_t2

0x7ee0,	// (0x00016ddb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ebef) list_medium_line_plain_t3_t

0x129b,	// (0x00010196) list_medium_line_x2_t2_g2_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t2_g2_g1

0x12b3,	// (0x000101ae) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e141) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e141) list_medium_line_x2_t2_g2_g

0x2550,	// (0x0001144b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2550,	// (0x0001144b) list_medium_line_x2_t2_g2_t1

0x12e8,	// (0x000101e3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ebf6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ebf6) list_medium_line_x2_t2_g2_t

0x129b,	// (0x00010196) list_medium_line_x2_t4_g2_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t4_g2_g1

0x12b3,	// (0x000101ae) list_medium_line_x2_t4_g2_g2_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e141) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e141) list_medium_line_x2_t4_g2_g

0x7eee,	// (0x00016de9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7eee,	// (0x00016de9) list_medium_line_x2_t4_g2_t1

0x7f05,	// (0x00016e00) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f05,	// (0x00016e00) list_medium_line_x2_t4_g2_t2

0x7f1a,	// (0x00016e15) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f1a,	// (0x00016e15) list_medium_line_x2_t4_g2_t3

0x12e8,	// (0x000101e3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ebfb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ebfb) list_medium_line_x2_t4_g2_t

0x7f2c,	// (0x00016e27) list_medium_line_t3_right_iconx2_g1

0x7d82,	// (0x00016c7d) list_medium_line_t3_right_iconx2_g2

0x7f34,	// (0x00016e2f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ec04) list_medium_line_t3_right_iconx2_g

0x7f3e,	// (0x00016e39) list_medium_line_t3_right_iconx2_t1

0x7f4e,	// (0x00016e49) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ec0b) list_medium_line_t3_right_iconx2_t

0x129b,	// (0x00010196) list_medium_line_x3_t4_g4_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x3_t4_g4_g1

0x12a7,	// (0x000101a2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x3_t4_g4_g2

0x2538,	// (0x00011433) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2538,	// (0x00011433) list_medium_line_x3_t4_g4_g3

0x7f5c,	// (0x00016e57) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f5c,	// (0x00016e57) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ec10) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ec10) list_medium_line_x3_t4_g4_g

0x7f68,	// (0x00016e63) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f68,	// (0x00016e63) list_medium_line_x3_t4_g4_t1

0x7f7f,	// (0x00016e7a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f7f,	// (0x00016e7a) list_medium_line_x3_t4_g4_t2

0x7f9a,	// (0x00016e95) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f9a,	// (0x00016e95) list_medium_line_x3_t4_g4_t3

0x7faf,	// (0x00016eaa) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7faf,	// (0x00016eaa) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ec19) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ec19) list_medium_line_x3_t4_g4_t

0x7fcc,	// (0x00016ec7) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fcc,	// (0x00016ec7) list_single_dyc_row_text_pane_t1

0x8015,	// (0x00016f10) list_single_dyc_row_text_pane_t2_ParamLimits

0x8015,	// (0x00016f10) list_single_dyc_row_text_pane_t2

0xe53f,	// (0x0001d43a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe53f,	// (0x0001d43a) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ec22) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ec22) list_single_dyc_row_text_pane_t

0xe563,	// (0x0001d45e) list_single_dyc_row_pane_g1_ParamLimits

0xe563,	// (0x0001d45e) list_single_dyc_row_pane_g1

0xe56f,	// (0x0001d46a) list_single_dyc_row_pane_g2_ParamLimits

0xe56f,	// (0x0001d46a) list_single_dyc_row_pane_g2

0xe57b,	// (0x0001d476) list_single_dyc_row_pane_g3_ParamLimits

0xe57b,	// (0x0001d476) list_single_dyc_row_pane_g3

0xe587,	// (0x0001d482) list_single_dyc_row_pane_g4_ParamLimits

0xe587,	// (0x0001d482) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ec2f) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ec2f) list_single_dyc_row_pane_g

0xe593,	// (0x0001d48e) list_single_dyc_row_text_pane_ParamLimits

0xe593,	// (0x0001d48e) list_single_dyc_row_text_pane

0x94e2,	// (0x000183dd) bg_sp_fs_scroll_pane

0xe5b2,	// (0x0001d4ad) thumb_sp_fs_scroll_pane

0x6689,	// (0x00015584) list_medium_line_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_g1

0x814a,	// (0x00017045) list_medium_line_t1_ParamLimits

0x814a,	// (0x00017045) list_medium_line_t1

0x129b,	// (0x00010196) list_medium_line_x2_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_g1

0x12a7,	// (0x000101a2) list_medium_line_x2_g2_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ec38) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ec38) list_medium_line_x2_g

0xe5bb,	// (0x0001d4b6) list_medium_line_x2_t1_ParamLimits

0xe5bb,	// (0x0001d4b6) list_medium_line_x2_t1

0x129b,	// (0x00010196) list_medium_line_x3_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x3_g1

0x12a7,	// (0x000101a2) list_medium_line_x3_g2_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ec38) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ec38) list_medium_line_x3_g

0xe5bb,	// (0x0001d4b6) list_medium_line_x3_t1_ParamLimits

0xe5bb,	// (0x0001d4b6) list_medium_line_x3_t1

0xe5d1,	// (0x0001d4cc) thumb_sp_fs_scroll_pane_g1

0xe5da,	// (0x0001d4d5) thumb_sp_fs_scroll_pane_g2

0xe5e3,	// (0x0001d4de) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec3d) thumb_sp_fs_scroll_pane_g

0xe5d1,	// (0x0001d4cc) bg_sp_fs_scroll_pane_g1

0xe5da,	// (0x0001d4d5) bg_sp_fs_scroll_pane_g2

0xe5e3,	// (0x0001d4de) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec3d) bg_sp_fs_scroll_pane_g

0x129b,	// (0x00010196) list_medium_line_x2_t3_g4_g1_ParamLimits

0x129b,	// (0x00010196) list_medium_line_x2_t3_g4_g1

0x1343,	// (0x0001023e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1343,	// (0x0001023e) list_medium_line_x2_t3_g4_g2

0x12a7,	// (0x000101a2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12a7,	// (0x000101a2) list_medium_line_x2_t3_g4_g3

0x12b3,	// (0x000101ae) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12b3,	// (0x000101ae) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e1bd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e1bd) list_medium_line_x2_t3_g4_g

0x815f,	// (0x0001705a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x815f,	// (0x0001705a) list_medium_line_x2_t3_g4_t1

0x8179,	// (0x00017074) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8179,	// (0x00017074) list_medium_line_x2_t3_g4_t2

0x12e8,	// (0x000101e3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12e8,	// (0x000101e3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ec44) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ec44) list_medium_line_x2_t3_g4_t

0x6689,	// (0x00015584) list_medium_line_g2_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_g2_g1

0x6695,	// (0x00015590) list_medium_line_g2_g2_ParamLimits

0x6695,	// (0x00015590) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e8fb) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e8fb) list_medium_line_g2_g

0x8193,	// (0x0001708e) list_medium_line_g2_t1_ParamLimits

0x8193,	// (0x0001708e) list_medium_line_g2_t1

0x6689,	// (0x00015584) list_medium_line_t3_g2_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_t3_g2_g1

0x6695,	// (0x00015590) list_medium_line_t3_g2_g2_ParamLimits

0x6695,	// (0x00015590) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e8fb) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e8fb) list_medium_line_t3_g2_g

0x81a8,	// (0x000170a3) list_medium_line_t3_g2_t1_ParamLimits

0x81a8,	// (0x000170a3) list_medium_line_t3_g2_t1

0x81c2,	// (0x000170bd) list_medium_line_t3_g2_t2_ParamLimits

0x81c2,	// (0x000170bd) list_medium_line_t3_g2_t2

0x81d7,	// (0x000170d2) list_medium_line_t3_g2_t3_ParamLimits

0x81d7,	// (0x000170d2) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ec4b) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ec4b) list_medium_line_t3_g2_t

0x7d82,	// (0x00016c7d) list_medium_line_right_icon_g1

0x81f1,	// (0x000170ec) list_medium_line_right_icon_t1

0x6689,	// (0x00015584) list_medium_line_t2_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_t2_g1

0x81ff,	// (0x000170fa) list_medium_line_t2_t1_ParamLimits

0x81ff,	// (0x000170fa) list_medium_line_t2_t1

0x8219,	// (0x00017114) list_medium_line_t2_t2_ParamLimits

0x8219,	// (0x00017114) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ec52) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ec52) list_medium_line_t2_t

0x6689,	// (0x00015584) list_medium_line_t3_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_t3_g1

0x8232,	// (0x0001712d) list_medium_line_t3_t1_ParamLimits

0x8232,	// (0x0001712d) list_medium_line_t3_t1

0x8249,	// (0x00017144) list_medium_line_t3_t2_ParamLimits

0x8249,	// (0x00017144) list_medium_line_t3_t2

0x825e,	// (0x00017159) list_medium_line_t3_t3_ParamLimits

0x825e,	// (0x00017159) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ec57) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ec57) list_medium_line_t3_t

0x6689,	// (0x00015584) list_medium_line_g3_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_g3_g1

0x8270,	// (0x0001716b) list_medium_line_g3_g2_ParamLimits

0x8270,	// (0x0001716b) list_medium_line_g3_g2

0x6695,	// (0x00015590) list_medium_line_g3_g3_ParamLimits

0x6695,	// (0x00015590) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ec5e) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ec5e) list_medium_line_g3_g

0x827c,	// (0x00017177) list_medium_line_g3_t1_ParamLimits

0x827c,	// (0x00017177) list_medium_line_g3_t1

0x6689,	// (0x00015584) list_medium_line_t2_g3_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_t2_g3_g1

0x8270,	// (0x0001716b) list_medium_line_t2_g3_g2_ParamLimits

0x8270,	// (0x0001716b) list_medium_line_t2_g3_g2

0x6695,	// (0x00015590) list_medium_line_t2_g3_g3_ParamLimits

0x6695,	// (0x00015590) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ec5e) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ec5e) list_medium_line_t2_g3_g

0x8291,	// (0x0001718c) list_medium_line_t2_g3_t1_ParamLimits

0x8291,	// (0x0001718c) list_medium_line_t2_g3_t1

0x82a8,	// (0x000171a3) list_medium_line_t2_g3_t2_ParamLimits

0x82a8,	// (0x000171a3) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ec65) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ec65) list_medium_line_t2_g3_t

0x6689,	// (0x00015584) list_medium_line_t3_g3_g1_ParamLimits

0x6689,	// (0x00015584) list_medium_line_t3_g3_g1

0x8270,	// (0x0001716b) list_medium_line_t3_g3_g2_ParamLimits

0x8270,	// (0x0001716b) list_medium_line_t3_g3_g2

0x6695,	// (0x00015590) list_medium_line_t3_g3_g3_ParamLimits

0x6695,	// (0x00015590) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ec5e) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ec5e) list_medium_line_t3_g3_g

0x82c3,	// (0x000171be) list_medium_line_t3_g3_t1_ParamLimits

0x82c3,	// (0x000171be) list_medium_line_t3_g3_t1

0x82d7,	// (0x000171d2) list_medium_line_t3_g3_t2_ParamLimits

0x82d7,	// (0x000171d2) list_medium_line_t3_g3_t2

0x82e9,	// (0x000171e4) list_medium_line_t3_g3_t3_ParamLimits

0x82e9,	// (0x000171e4) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ec6a) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ec6a) list_medium_line_t3_g3_t

0x7f2c,	// (0x00016e27) list_medium_line_right_iconx2_g1

0x7d82,	// (0x00016c7d) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec71) list_medium_line_right_iconx2_g

0x82fd,	// (0x000171f8) list_medium_line_right_iconx2_t1

0x7f2c,	// (0x00016e27) list_medium_line_t2_right_iconx2_g1

0x7d82,	// (0x00016c7d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec71) list_medium_line_t2_right_iconx2_g

0x830b,	// (0x00017206) list_medium_line_t2_right_iconx2_t1

0x831b,	// (0x00017216) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001ec76) list_medium_line_t2_right_iconx2_t

0x832d,	// (0x00017228) list_medium_line_x4_t4_t1

0x833b,	// (0x00017236) list_medium_line_x4_t4_t2

0x834b,	// (0x00017246) list_medium_line_x4_t4_t3

0x835b,	// (0x00017256) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001ec7b) list_medium_line_x4_t4_t

0x83ae,	// (0x000172a9) tport_appsw_pane_ParamLimits

0x83ae,	// (0x000172a9) tport_appsw_pane

0x83c6,	// (0x000172c1) tport_contact_pane_ParamLimits

0x83c6,	// (0x000172c1) tport_contact_pane

0x83de,	// (0x000172d9) tport_listscroll_pane_ParamLimits

0x83de,	// (0x000172d9) tport_listscroll_pane

0x83f8,	// (0x000172f3) cell_tport_appsw_pane_ParamLimits

0x83f8,	// (0x000172f3) cell_tport_appsw_pane

0xd1da,	// (0x0001c0d5) tport_appsw_pane_g1_ParamLimits

0xd1da,	// (0x0001c0d5) tport_appsw_pane_g1

0xe5ec,	// (0x0001d4e7) tport_contact_pane_g1

0xdea4,	// (0x0001cd9f) tport_contact_pane_t1

0xe5f5,	// (0x0001d4f0) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ec84) tport_contact_pane_t

0xe603,	// (0x0001d4fe) list_tport_pane

0xe60c,	// (0x0001d507) scroll_pane_cp_030

0x8440,	// (0x0001733b) cell_tport_appsw_pane_g1

0x8450,	// (0x0001734b) cell_tport_appsw_pane_t1

0x845e,	// (0x00017359) grid_highlight_pane_cp019

0x8466,	// (0x00017361) list_tport_double_graphic_pane_ParamLimits

0x8466,	// (0x00017361) list_tport_double_graphic_pane

0x9552,	// (0x0001844d) list_highlight_pane_cp023_ParamLimits

0x9552,	// (0x0001844d) list_highlight_pane_cp023

0x8473,	// (0x0001736e) list_tport_double_graphic_pane_g1_ParamLimits

0x8473,	// (0x0001736e) list_tport_double_graphic_pane_g1

0x8480,	// (0x0001737b) list_tport_double_graphic_pane_t1_ParamLimits

0x8480,	// (0x0001737b) list_tport_double_graphic_pane_t1

0x8495,	// (0x00017390) list_tport_double_graphic_pane_t2_ParamLimits

0x8495,	// (0x00017390) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ec90) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ec90) list_tport_double_graphic_pane_t

0x94e2,	// (0x000183dd) main_cale_note_pane

0x5d54,	// (0x00014c4f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d54,	// (0x00014c4f) cell_vitu2_function_top_wide_pane_cp01

0x78a8,	// (0x000167a3) wait_bar_pane_cp05_ParamLimits

0x9552,	// (0x0001844d) listscroll_cmail_pane

0xe615,	// (0x0001d510) list_cmail_pane

0xd24f,	// (0x0001c14a) list_cmail_body_pane

0x84a7,	// (0x000173a2) list_single_cmail_header_caption_pane

0x84be,	// (0x000173b9) list_single_cmail_header_detail_pane_ParamLimits

0x84be,	// (0x000173b9) list_single_cmail_header_detail_pane

0xe625,	// (0x0001d520) list_single_cmail_header_caption_pane_t1

0x84e8,	// (0x000173e3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84e8,	// (0x000173e3) list_single_cmail_header_detail_pane_g1

0xe63c,	// (0x0001d537) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63c,	// (0x0001d537) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ec95) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ec95) list_single_cmail_header_detail_pane_g

0x8500,	// (0x000173fb) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8500,	// (0x000173fb) list_single_cmail_header_detail_pane_t1

0x853e,	// (0x00017439) list_single_cmail_header_editor_pane_bg_ParamLimits

0x853e,	// (0x00017439) list_single_cmail_header_editor_pane_bg

0xe045,	// (0x0001cf40) list_cmail_body_pane_g1

0xe679,	// (0x0001d574) list_cmail_body_pane_t1

0xd217,	// (0x0001c112) list_single_cmail_header_editor_pane_bg_g1

0xa150,	// (0x0001904b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd227,	// (0x0001c122) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd21f,	// (0x0001c11a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4f8,	// (0x0001c3f3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd247,	// (0x0001c142) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd237,	// (0x0001c132) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd23f,	// (0x0001c13a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa130,	// (0x0001902b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8557,	// (0x00017452) calenote_gesture_pane_ParamLimits

0x8557,	// (0x00017452) calenote_gesture_pane

0x8577,	// (0x00017472) calenote_window_pane_ParamLimits

0x8577,	// (0x00017472) calenote_window_pane

0xe687,	// (0x0001d582) popup_note_window_cp01

0x8593,	// (0x0001748e) calenote_swipe_1_pane_ParamLimits

0x8593,	// (0x0001748e) calenote_swipe_1_pane

0x7d24,	// (0x00016c1f) calenote_swipe_2_pane_ParamLimits

0x7d24,	// (0x00016c1f) calenote_swipe_2_pane

0xe39e,	// (0x0001d299) calenote_swipe_1_pane_g1_ParamLimits

0xe39e,	// (0x0001d299) calenote_swipe_1_pane_g1

0xe3ab,	// (0x0001d2a6) calenote_swipe_1_pane_g2_ParamLimits

0xe3ab,	// (0x0001d2a6) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001ebbe) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001ebbe) calenote_swipe_1_pane_g

0xe699,	// (0x0001d594) calenote_swipe_1_pane_t1_ParamLimits

0xe699,	// (0x0001d594) calenote_swipe_1_pane_t1

0xe39e,	// (0x0001d299) calenote_swipe_2_pane_g1_ParamLimits

0xe39e,	// (0x0001d299) calenote_swipe_2_pane_g1

0xe6b8,	// (0x0001d5b3) calenote_swipe_2_pane_g2_ParamLimits

0xe6b8,	// (0x0001d5b3) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eca1) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eca1) calenote_swipe_2_pane_g

0xe6c4,	// (0x0001d5bf) calenote_swipe_2_pane_t1_ParamLimits

0xe6c4,	// (0x0001d5bf) calenote_swipe_2_pane_t1

0x94e2,	// (0x000183dd) main_mup_navstr_pane

0x4a31,	// (0x0001392c) main_mup3_pane_t7_ParamLimits

0x4a31,	// (0x0001392c) main_mup3_pane_t7

0xcd89,	// (0x0001bc84) main_mp4_pane_g6_ParamLimits

0xcd89,	// (0x0001bc84) main_mp4_pane_g6

0xcfb1,	// (0x0001beac) main_image3_pane_t4_ParamLimits

0xcfb1,	// (0x0001beac) main_image3_pane_t4

0x85a8,	// (0x000174a3) popup_navstr_preview_pane_ParamLimits

0x85a8,	// (0x000174a3) popup_navstr_preview_pane

0x85bc,	// (0x000174b7) scroll_navstr_pane_ParamLimits

0x85bc,	// (0x000174b7) scroll_navstr_pane

0x94e2,	// (0x000183dd) bg_popup_preview_window_pane_cp04

0xe6eb,	// (0x0001d5e6) popup_navstr_preview_pane_t1

0x85d0,	// (0x000174cb) scroll_navstr_pane_g1_ParamLimits

0x85d0,	// (0x000174cb) scroll_navstr_pane_g1

0x85e4,	// (0x000174df) scroll_navstr_pane_t1_ParamLimits

0x85e4,	// (0x000174df) scroll_navstr_pane_t1

0xe690,	// (0x0001d58b) bg_button_pane_cp014

0xe690,	// (0x0001d58b) bg_button_pane_cp030

0x7bc2,	// (0x00016abd) list_double_fisheye_pane_g4_ParamLimits

0x7bc2,	// (0x00016abd) list_double_fisheye_pane_g4

0x7bce,	// (0x00016ac9) list_double_fisheye_pane_g5_ParamLimits

0x7bce,	// (0x00016ac9) list_double_fisheye_pane_g5

0xd317,	// (0x0001c212) sp_fs_scroll_pane_cp03

0xe476,	// (0x0001d371) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe482,	// (0x0001d37d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001ebdb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe48e,	// (0x0001d389) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe61d,	// (0x0001d518) sp_fs_scroll_pane_cp02

0x9e25,	// (0x00018d20) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e25,	// (0x00018d20) popup_sp_fs_calendar_preview_list_single_pane

0x94e2,	// (0x000183dd) main_cam6_pano_pane

0x9552,	// (0x0001844d) main_mup3_pane_ParamLimits

0x94e2,	// (0x000183dd) main_phacti_pane

0x777b,	// (0x00016676) bg_button_pane_cp11

0x7795,	// (0x00016690) main_mobtv_info_pane_g2_ParamLimits

0x7795,	// (0x00016690) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001eb3b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001eb3b) main_mobtv_info_pane_g

0x7972,	// (0x0001686d) sc_clock_pane_t5_ParamLimits

0x7972,	// (0x0001686d) sc_clock_pane_t5

0x7a2d,	// (0x00016928) main_radioblah_pane_g1_ParamLimits

0xe2e1,	// (0x0001d1dc) main_radioblah_pane_t3_ParamLimits

0xe2e1,	// (0x0001d1dc) main_radioblah_pane_t3

0xe2f9,	// (0x0001d1f4) main_radioblah_pane_t4_ParamLimits

0xe2f9,	// (0x0001d1f4) main_radioblah_pane_t4

0x7a55,	// (0x00016950) main_radioblah_text_pane_ParamLimits

0x7a55,	// (0x00016950) main_radioblah_text_pane

0x7a67,	// (0x00016962) main_radioblah_info_pane_g1_ParamLimits

0x7b00,	// (0x000169fb) main_radioblah_info_pane_t4_ParamLimits

0x7b00,	// (0x000169fb) main_radioblah_info_pane_t4

0x9552,	// (0x0001844d) main_sp_fs_calendar_pane

0x85fb,	// (0x000174f6) main_phacti_pane_g1

0x8603,	// (0x000174fe) phacti_note_pane_ParamLimits

0x8603,	// (0x000174fe) phacti_note_pane

0xe702,	// (0x0001d5fd) phacti_term_pane_ParamLimits

0xe702,	// (0x0001d5fd) phacti_term_pane

0xe717,	// (0x0001d612) phacti_note_pane_t1_ParamLimits

0xe717,	// (0x0001d612) phacti_note_pane_t1

0xe72e,	// (0x0001d629) phacti_term_pane_g1

0xe736,	// (0x0001d631) phacti_term_pane_t1_ParamLimits

0xe736,	// (0x0001d631) phacti_term_pane_t1

0xe760,	// (0x0001d65b) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9f51,	// (0x00018e4c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ecab) popup_sp_fs_calendar_preview_list_single_pane_g

0xe768,	// (0x0001d663) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe768,	// (0x0001d663) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe77d,	// (0x0001d678) aid_popup_sp_fs_bg_corner_pane

0xc3f4,	// (0x0001b2ef) popup_sp_fs_calendar_preview_bg_pane_g1

0x94e2,	// (0x000183dd) popup_sp_fs_calendar_preview_bg_pane

0xe785,	// (0x0001d680) popup_sp_fs_calendar_preview_list_pane

0xbed9,	// (0x0001add4) bg_main_sp_fs_cale_pane_ParamLimits

0xbed9,	// (0x0001add4) bg_main_sp_fs_cale_pane

0xe78d,	// (0x0001d688) listscroll_cale_mrui_pane_ParamLimits

0xe78d,	// (0x0001d688) listscroll_cale_mrui_pane

0xe7a2,	// (0x0001d69d) listscroll_sp_fs_schedule_track_pane

0xe7ab,	// (0x0001d6a6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7ab,	// (0x0001d6a6) main_sp_fs_ctrlbar_pane_cp01

0xe7be,	// (0x0001d6b9) main_sp_fs_ribbon_pane

0xe7c6,	// (0x0001d6c1) popup_sp_fs_cale_preview_window

0x8678,	// (0x00017573) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8678,	// (0x00017573) list_single_sp_fs_schedule_track_pane

0x9552,	// (0x0001844d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9552,	// (0x0001844d) bg_sp_fs_highlight_list_pane_cp03

0x868c,	// (0x00017587) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x868c,	// (0x00017587) list_single_sp_fs_schedule_track_pane_g1

0x8698,	// (0x00017593) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8698,	// (0x00017593) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ecb0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ecb0) list_single_sp_fs_schedule_track_pane_g

0x86a4,	// (0x0001759f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86a4,	// (0x0001759f) list_single_sp_fs_schedule_track_pane_t1

0x86be,	// (0x000175b9) sp_fs_schedule_track_pane_ParamLimits

0x86be,	// (0x000175b9) sp_fs_schedule_track_pane

0xe7d8,	// (0x0001d6d3) sp_fs_schedule_track_pane_g1

0xe7e0,	// (0x0001d6db) sp_fs_schedule_track_pane_g2

0xe7e8,	// (0x0001d6e3) sp_fs_schedule_track_pane_g3

0xe7f0,	// (0x0001d6eb) sp_fs_schedule_track_pane_g4

0xe7f8,	// (0x0001d6f3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ecb5) sp_fs_schedule_track_pane_g

0xd217,	// (0x0001c112) bg_sp_fs_schedule_viewer_highlight_g1

0xa150,	// (0x0001904b) bg_sp_fs_schedule_viewer_highlight_g2

0xd21f,	// (0x0001c11a) bg_sp_fs_schedule_viewer_highlight_g3

0xd227,	// (0x0001c122) bg_sp_fs_schedule_viewer_highlight_g4

0xd4f8,	// (0x0001c3f3) bg_sp_fs_schedule_viewer_highlight_g5

0xd237,	// (0x0001c132) bg_sp_fs_schedule_viewer_highlight_g6

0xd23f,	// (0x0001c13a) bg_sp_fs_schedule_viewer_highlight_g7

0xd247,	// (0x0001c142) bg_sp_fs_schedule_viewer_highlight_g8

0xa130,	// (0x0001902b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ecc0) bg_sp_fs_schedule_viewer_highlight_g

0x94e2,	// (0x000183dd) bg_main_sp_fs_ribbon_pane

0x86cf,	// (0x000175ca) main_sp_fs_ribbon_pane_g1

0xe800,	// (0x0001d6fb) main_sp_fs_ribbon_pane_t1

0x86d8,	// (0x000175d3) main_sp_fs_ribbon_pane_t2

0xe80f,	// (0x0001d70a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ecd3) main_sp_fs_ribbon_pane_t

0xe81e,	// (0x0001d719) main_sp_fs_ribbon_scheduler_pane

0xe826,	// (0x0001d721) bg_main_sp_fs_ribbon_pane_g1

0xe82f,	// (0x0001d72a) bg_main_sp_fs_ribbon_pane_g2

0xe838,	// (0x0001d733) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ecda) bg_main_sp_fs_ribbon_pane_g

0xe840,	// (0x0001d73b) main_sp_fs_ribbon_scheduler_pane_g1

0xe849,	// (0x0001d744) main_sp_fs_ribbon_scheduler_pane_g2

0xe852,	// (0x0001d74d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ece1) main_sp_fs_ribbon_scheduler_pane_g

0xe85b,	// (0x0001d756) list_cale_mrui_pane

0x86e7,	// (0x000175e2) sp_fs_scroll_pane_cp07_ParamLimits

0x86e7,	// (0x000175e2) sp_fs_scroll_pane_cp07

0x8703,	// (0x000175fe) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8703,	// (0x000175fe) bg_sp_fs_schedule_viewer_highlight

0xe868,	// (0x0001d763) list_single_sp_fs_schedule_track_pane_cp01

0xe870,	// (0x0001d76b) list_sp_fs_schedule_track_pane

0xe878,	// (0x0001d773) sp_fs_scroll_pane_cp06_ParamLimits

0xe878,	// (0x0001d773) sp_fs_scroll_pane_cp06

0xc3f4,	// (0x0001b2ef) bgmain_sp_fs_calendar_pane_g1

0x8713,	// (0x0001760e) list_single_cale_mrui_pane_ParamLimits

0x8713,	// (0x0001760e) list_single_cale_mrui_pane

0xe88a,	// (0x0001d785) list_single_cale_mrui_row_pane_ParamLimits

0xe88a,	// (0x0001d785) list_single_cale_mrui_row_pane

0xe897,	// (0x0001d792) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe897,	// (0x0001d792) list_single_cale_mrui_row_pane_g1

0xe8dc,	// (0x0001d7d7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8dc,	// (0x0001d7d7) list_single_cale_mrui_row_pane_t1

0x8734,	// (0x0001762f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8734,	// (0x0001762f) list_single_cale_mrui_row_pane_t2

0xe8ee,	// (0x0001d7e9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8ee,	// (0x0001d7e9) list_single_cale_mrui_row_pane_t3

0xe91d,	// (0x0001d818) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe91d,	// (0x0001d818) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ecef) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ecef) list_single_cale_mrui_row_pane_t

0x879c,	// (0x00017697) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x879c,	// (0x00017697) list_single_cmail_header_editor_pane_bg_cp01

0x87c2,	// (0x000176bd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87c2,	// (0x000176bd) list_single_cmail_header_editor_pane_bg_cp02

0x87e2,	// (0x000176dd) main_radioblah_text_pane_t1_ParamLimits

0x87e2,	// (0x000176dd) main_radioblah_text_pane_t1

0xe94c,	// (0x0001d847) cam6_indi_pane_cp01

0xe954,	// (0x0001d84f) cam6_mode_pane_cp01

0xe95c,	// (0x0001d857) cam6_pano_pane

0xe965,	// (0x0001d860) cam6_zoom_pane_cp01

0xe96d,	// (0x0001d868) cam6_pano_image_pane

0xe978,	// (0x0001d873) cam6_pano_pane_g1

0xe045,	// (0x0001cf40) cam6_pano_pane_g2

0xe981,	// (0x0001d87c) cam6_pano_pane_g3

0xe98a,	// (0x0001d885) cam6_pano_pane_g4

0xc9ec,	// (0x0001b8e7) cam6_pano_pane_g5

0xe993,	// (0x0001d88e) cam6_pano_pane_g6

0xe99d,	// (0x0001d898) cam6_pano_pane_g7

0xe9a5,	// (0x0001d8a0) cam6_pano_pane_g8

0xe9ae,	// (0x0001d8a9) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ecf8) cam6_pano_pane_g

0x94e2,	// (0x000183dd) main_browser_tag_pane

0xe6e3,	// (0x0001d5de) grid_navstr_albumart_pane

0xe9b9,	// (0x0001d8b4) cell_navstr_albumart_pane_ParamLimits

0xe9b9,	// (0x0001d8b4) cell_navstr_albumart_pane

0xe9d9,	// (0x0001d8d4) cell_navstr_albumart_pane_g1

0xbcea,	// (0x0001abe5) cell_navstr_albumart_pane_g2

0xbcfa,	// (0x0001abf5) cell_navstr_albumart_pane_g3

0xbcf2,	// (0x0001abed) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ed0b) cell_navstr_albumart_pane_g

0x87fc,	// (0x000176f7) bt_list_pane_ParamLimits

0x87fc,	// (0x000176f7) bt_list_pane

0x8810,	// (0x0001770b) bt_list_pane_t1

0x881f,	// (0x0001771a) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ed14) bt_list_pane_t

0x94e2,	// (0x000183dd) main_cale_prevew_pane

0x882e,	// (0x00017729) popup_cale_preview_window_ParamLimits

0x882e,	// (0x00017729) popup_cale_preview_window

0x9552,	// (0x0001844d) bg_popup_preview_window_pane_cp05_ParamLimits

0x9552,	// (0x0001844d) bg_popup_preview_window_pane_cp05

0xe9e1,	// (0x0001d8dc) list_cale_preview_pane_ParamLimits

0xe9e1,	// (0x0001d8dc) list_cale_preview_pane

0x8849,	// (0x00017744) list_double_cale_preview_pane_ParamLimits

0x8849,	// (0x00017744) list_double_cale_preview_pane

0x885b,	// (0x00017756) list_single_cale_preview_pane_ParamLimits

0x885b,	// (0x00017756) list_single_cale_preview_pane

0x8871,	// (0x0001776c) list_single_cale_preview_pane_g1

0x8879,	// (0x00017774) list_single_cale_preview_pane_t1_ParamLimits

0x8879,	// (0x00017774) list_single_cale_preview_pane_t1

0x888e,	// (0x00017789) list_double_cale_preview_pane_g1

0x8896,	// (0x00017791) list_double_cale_preview_pane_t1_ParamLimits

0x8896,	// (0x00017791) list_double_cale_preview_pane_t1

0x88ab,	// (0x000177a6) list_double_cale_preview_pane_t2_ParamLimits

0x88ab,	// (0x000177a6) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ed19) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ed19) list_double_cale_preview_pane_t

0x94e2,	// (0x000183dd) main_ezdial_pane

0x9552,	// (0x0001844d) main_sp_fs_email_pane_ParamLimits

0x7dac,	// (0x00016ca7) cmail_ddmenu_btn01_pane_ParamLimits

0x7dac,	// (0x00016ca7) cmail_ddmenu_btn01_pane

0x7dbf,	// (0x00016cba) cmail_ddmenu_btn02_pane_ParamLimits

0x7dbf,	// (0x00016cba) cmail_ddmenu_btn02_pane

0x7de2,	// (0x00016cdd) cmail_ddmenu_btn03_pane_ParamLimits

0x7de2,	// (0x00016cdd) cmail_ddmenu_btn03_pane

0x7e08,	// (0x00016d03) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e2c,	// (0x00016d27) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd24f,	// (0x0001c14a) list_cmail_body_pane_ParamLimits

0xe633,	// (0x0001d52e) bg_button_pane_cp12

0xe648,	// (0x0001d543) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe648,	// (0x0001d543) list_single_cmail_header_detail_pane_g3

0xe655,	// (0x0001d550) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe655,	// (0x0001d550) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ec9c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ec9c) list_single_cmail_header_detail_pane_t

0xe74b,	// (0x0001d646) phacti_term_pane_t2_ParamLimits

0xe74b,	// (0x0001d646) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eca6) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eca6) phacti_term_pane_t

0xe9ed,	// (0x0001d8e8) aid_size_list_single_double

0x88c3,	// (0x000177be) popup_ezdial_listscroll_window

0x88df,	// (0x000177da) popup_number_entry_window_cp01

0xa9fe,	// (0x000198f9) bg_popup_call_pane_cp09

0xe9f9,	// (0x0001d8f4) ezdial_list_pane

0xea01,	// (0x0001d8fc) scroll_pane_cp23

0xbed9,	// (0x0001add4) bg_button_pane_cp028_ParamLimits

0xbed9,	// (0x0001add4) bg_button_pane_cp028

0x88ed,	// (0x000177e8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88ed,	// (0x000177e8) cmail_ddmenu_btn01_pane_g1

0x88f9,	// (0x000177f4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88f9,	// (0x000177f4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ed1e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ed1e) cmail_ddmenu_btn01_pane_g

0xea09,	// (0x0001d904) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea09,	// (0x0001d904) cmail_ddmenu_btn01_pane_t1

0xbed9,	// (0x0001add4) bg_button_pane_cp029_ParamLimits

0xbed9,	// (0x0001add4) bg_button_pane_cp029

0x890d,	// (0x00017808) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x890d,	// (0x00017808) cmail_ddmenu_btn02_pane_g1

0x8925,	// (0x00017820) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8925,	// (0x00017820) cmail_ddmenu_btn02_pane_t1

0x9552,	// (0x0001844d) bg_button_pane_cp031_ParamLimits

0x9552,	// (0x0001844d) bg_button_pane_cp031

0x890d,	// (0x00017808) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x890d,	// (0x00017808) cmail_ddmenu_btn03_pane_g1

0x8925,	// (0x00017820) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8925,	// (0x00017820) cmail_ddmenu_btn03_pane_t1

0x55d8,	// (0x000144d3) cell_dialer2_keypad_pane_t1_ParamLimits

0x55f2,	// (0x000144ed) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55f2,	// (0x000144ed) cell_dialer2_keypad_pane_t1_copy1

0x75e2,	// (0x000164dd) ncimui_group_button_pane

0x9552,	// (0x0001844d) main_sp_fs_calendar_pane_ParamLimits

0x84a7,	// (0x000173a2) list_single_cmail_header_caption_pane_ParamLimits

0xd8bb,	// (0x0001c7b6) aid_recal_txt_sm_pane

0x94e2,	// (0x000183dd) mian_recal_day_pane

0xe7c6,	// (0x0001d6c1) popup_sp_fs_cale_preview_window_ParamLimits

0xea1f,	// (0x0001d91a) list_recal_day_pane

0xea61,	// (0x0001d95c) list_single_recal_day_pane_ParamLimits

0xea61,	// (0x0001d95c) list_single_recal_day_pane

0xea73,	// (0x0001d96e) list_single_recal_day_pane_g1_ParamLimits

0xea73,	// (0x0001d96e) list_single_recal_day_pane_g1

0xea7f,	// (0x0001d97a) list_single_recal_day_pane_g2_ParamLimits

0xea7f,	// (0x0001d97a) list_single_recal_day_pane_g2

0xea8f,	// (0x0001d98a) list_single_recal_day_pane_g3_ParamLimits

0xea8f,	// (0x0001d98a) list_single_recal_day_pane_g3

0x8949,	// (0x00017844) list_single_recal_day_pane_g4_ParamLimits

0x8949,	// (0x00017844) list_single_recal_day_pane_g4

0xeaad,	// (0x0001d9a8) list_single_recal_day_pane_g5_ParamLimits

0xeaad,	// (0x0001d9a8) list_single_recal_day_pane_g5

0xeabd,	// (0x0001d9b8) list_single_recal_day_pane_g6_ParamLimits

0xeabd,	// (0x0001d9b8) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ed2d) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ed2d) list_single_recal_day_pane_g

0xead1,	// (0x0001d9cc) list_single_recal_day_pane_t1

0xeae3,	// (0x0001d9de) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ed38) list_single_recal_day_pane_t

0x8969,	// (0x00017864) ncimui_query_button_pane_ParamLimits

0x8969,	// (0x00017864) ncimui_query_button_pane

0x8979,	// (0x00017874) ncimui_query_button_pane_t1_ParamLimits

0x8979,	// (0x00017874) ncimui_query_button_pane_t1

0xeaf5,	// (0x0001d9f0) ncimui_query_button_pane_t2_ParamLimits

0xeaf5,	// (0x0001d9f0) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ed3d) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ed3d) ncimui_query_button_pane_t

0x898c,	// (0x00017887) query_button_pane_ParamLimits

0x898c,	// (0x00017887) query_button_pane

0x94e2,	// (0x000183dd) bg_button_pane_cp0028

0xeb08,	// (0x0001da03) query_button_pane_t1

0x3654,	// (0x0001254f) main_tport_pane_ParamLimits

0x836b,	// (0x00017266) bg_popup_window_pane_cp01_ParamLimits

0x836b,	// (0x00017266) bg_popup_window_pane_cp01

0x8386,	// (0x00017281) heading_pane_cp08_ParamLimits

0x8386,	// (0x00017281) heading_pane_cp08

0x8399,	// (0x00017294) heading_pane_cp07_ParamLimits

0x8399,	// (0x00017294) heading_pane_cp07

0x8440,	// (0x0001733b) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ec89) cell_tport_appsw_pane_g

0xab7f,	// (0x00019a7a) input_candi_list_open_g1

0xa341,	// (0x0001923c) list_cale_time_pane_g6_ParamLimits

0xa341,	// (0x0001923c) list_cale_time_pane_g6

0x441d,	// (0x00013318) aid_size_touch_calib_1_ParamLimits

0x441d,	// (0x00013318) aid_size_touch_calib_1

0x442f,	// (0x0001332a) aid_size_touch_calib_2_ParamLimits

0x442f,	// (0x0001332a) aid_size_touch_calib_2

0x4447,	// (0x00013342) aid_size_touch_calib_3_ParamLimits

0x4447,	// (0x00013342) aid_size_touch_calib_3

0x4465,	// (0x00013360) aid_size_touch_calib_4_ParamLimits

0x4465,	// (0x00013360) aid_size_touch_calib_4

0x447d,	// (0x00013378) main_touch_calib_button_group_pane_ParamLimits

0x447d,	// (0x00013378) main_touch_calib_button_group_pane

0x4495,	// (0x00013390) main_touch_calib_pane_g1_ParamLimits

0x44a7,	// (0x000133a2) main_touch_calib_pane_g2_ParamLimits

0x44b9,	// (0x000133b4) main_touch_calib_pane_g3_ParamLimits

0x44cb,	// (0x000133c6) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e64c) main_touch_calib_pane_g_ParamLimits

0x44dd,	// (0x000133d8) main_touch_calib_pane_t1_ParamLimits

0x44f7,	// (0x000133f2) main_touch_calib_pane_t2_ParamLimits

0x4511,	// (0x0001340c) main_touch_calib_pane_t3_ParamLimits

0x4525,	// (0x00013420) main_touch_calib_pane_t4_ParamLimits

0x4539,	// (0x00013434) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e655) main_touch_calib_pane_t_ParamLimits

0xc78c,	// (0x0001b687) list_single_fp_cale_pane_g3_ParamLimits

0xc78c,	// (0x0001b687) list_single_fp_cale_pane_g3

0x9552,	// (0x0001844d) bg_button_pane_cp012_ParamLimits

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp03_ParamLimits

0x663f,	// (0x0001553a) cell_vitu2_function_top_pane_g1_ParamLimits

0x9552,	// (0x0001844d) bg_vkb2_func_pane_cp04_ParamLimits

0x7570,	// (0x0001646b) main_ncimui_button_group_pane_ParamLimits

0x7570,	// (0x0001646b) main_ncimui_button_group_pane

0x75d0,	// (0x000164cb) main_ncimui_pane_t3_ParamLimits

0x75d0,	// (0x000164cb) main_ncimui_pane_t3

0xe6f9,	// (0x0001d5f4) phacti_button_group_pane

0xe9ed,	// (0x0001d8e8) aid_size_list_single_double_ParamLimits

0x88c3,	// (0x000177be) popup_ezdial_listscroll_window_ParamLimits

0x88df,	// (0x000177da) popup_number_entry_window_cp01_ParamLimits

0x899f,	// (0x0001789a) phacti_button_pane_ParamLimits

0x899f,	// (0x0001789a) phacti_button_pane

0x94e2,	// (0x000183dd) bg_button_pane_cp14

0xeb16,	// (0x0001da11) phacti_button_pane_t1

0x89b0,	// (0x000178ab) main_touch_calib_button_pane_ParamLimits

0x89b0,	// (0x000178ab) main_touch_calib_button_pane

0x9cb5,	// (0x00018bb0) bg_button_pane_cp18_ParamLimits

0x9cb5,	// (0x00018bb0) bg_button_pane_cp18

0xeb24,	// (0x0001da1f) main_touch_calib_button_pane_t1_ParamLimits

0xeb24,	// (0x0001da1f) main_touch_calib_button_pane_t1

0xeb3a,	// (0x0001da35) main_touch_calib_button_pane_t2_ParamLimits

0xeb3a,	// (0x0001da35) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ed42) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ed42) main_touch_calib_button_pane_t

0x94e2,	// (0x000183dd) cell_ncimui_button_pane

0x94e2,	// (0x000183dd) bg_button_pane_cp032

0xeb58,	// (0x0001da53) cell_ncimui_button_pane_t1

0xcf91,	// (0x0001be8c) image3_infobar_pane_ParamLimits

0xcf91,	// (0x0001be8c) image3_infobar_pane

0x799e,	// (0x00016899) fs_bigclock_status_pane_ParamLimits

0x799e,	// (0x00016899) fs_bigclock_status_pane

0x79ab,	// (0x000168a6) main_fs_bigclock_clock_pane_ParamLimits

0x79ab,	// (0x000168a6) main_fs_bigclock_clock_pane

0x79cb,	// (0x000168c6) main_fs_bigclock_indi_pane_ParamLimits

0x79cb,	// (0x000168c6) main_fs_bigclock_indi_pane

0x79f5,	// (0x000168f0) main_fs_bigclock_swipe_pane_ParamLimits

0x79f5,	// (0x000168f0) main_fs_bigclock_swipe_pane

0x94e2,	// (0x000183dd) main_fs_clock_dumped_data

0xe152,	// (0x0001d04d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe152,	// (0x0001d04d) list_single_fs_bigclock_indicator_pane_g1

0xe16d,	// (0x0001d068) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe16d,	// (0x0001d068) list_single_fs_bigclock_indicator_pane_g2

0xe187,	// (0x0001d082) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe187,	// (0x0001d082) list_single_fs_bigclock_indicator_pane_g3

0xe1a1,	// (0x0001d09c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1a1,	// (0x0001d09c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001eb6f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001eb6f) list_single_fs_bigclock_indicator_pane_g

0xe1cc,	// (0x0001d0c7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1cc,	// (0x0001d0c7) list_single_fs_bigclock_indicator_pane_t1

0xe1f4,	// (0x0001d0ef) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1f4,	// (0x0001d0ef) list_single_fs_bigclock_indicator_pane_t2

0xe21c,	// (0x0001d117) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe21c,	// (0x0001d117) list_single_fs_bigclock_indicator_pane_t3

0xe244,	// (0x0001d13f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe244,	// (0x0001d13f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001eb7a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001eb7a) list_single_fs_bigclock_indicator_pane_t

0xeb66,	// (0x0001da61) image3_infobar_fav_pane_ParamLimits

0xeb66,	// (0x0001da61) image3_infobar_fav_pane

0xeb76,	// (0x0001da71) image3_infobar_loc_pane_ParamLimits

0xeb76,	// (0x0001da71) image3_infobar_loc_pane

0xeb8a,	// (0x0001da85) image3_infobar_time_pane_ParamLimits

0xeb8a,	// (0x0001da85) image3_infobar_time_pane

0xc3f4,	// (0x0001b2ef) image3_infobar_time_pane_g1

0xeb9a,	// (0x0001da95) image3_infobar_time_pane_t1

0xc3f4,	// (0x0001b2ef) image3_infobar_loc_pane_g1

0xeba8,	// (0x0001daa3) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ed47) image3_infobar_loc_pane_g

0xebb0,	// (0x0001daab) image3_infobar_loc_pane_t1

0xc3f4,	// (0x0001b2ef) image3_infobar_fav_pane_g1

0xebbe,	// (0x0001dab9) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ed4c) image3_infobar_fav_pane_g

0xebc6,	// (0x0001dac1) fs_bigclock_status_battery_pane

0xebcf,	// (0x0001daca) fs_bigclock_status_signal_pane

0xebd8,	// (0x0001dad3) fs_bigclock_status_title_pane

0xebe1,	// (0x0001dadc) fs_bigclock_status_signal_pane_g1

0xebea,	// (0x0001dae5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ed51) fs_bigclock_status_signal_pane_g

0xebf2,	// (0x0001daed) fs_bigclock_status_battery_pane_g1

0xebfb,	// (0x0001daf6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ed56) fs_bigclock_status_battery_pane_g

0xec03,	// (0x0001dafe) fs_bigclock_status_title_pane_t1

0xc3f4,	// (0x0001b2ef) main_fs_bigclock_clock_pane_g1

0xec11,	// (0x0001db0c) main_fs_bigclock_clock_pane_g2

0xec1a,	// (0x0001db15) main_fs_bigclock_clock_pane_g3

0xec1a,	// (0x0001db15) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ed5b) main_fs_bigclock_clock_pane_g

0xec22,	// (0x0001db1d) main_fs_bigclock_clock_pane_t1

0x89c5,	// (0x000178c0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ed64) main_fs_bigclock_clock_pane_t

0xec30,	// (0x0001db2b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec30,	// (0x0001db2b) list_single_fs_bigclock_indicator_pane

0xec41,	// (0x0001db3c) list_single_fs_bigclock_pane_ParamLimits

0xec41,	// (0x0001db3c) list_single_fs_bigclock_pane

0xec67,	// (0x0001db62) main_fs_bigclock_indicator_pane_t1

0xec76,	// (0x0001db71) list_single_fs_bigclock_pane_g1

0xec7e,	// (0x0001db79) list_single_fs_bigclock_pane_t1

0xc3f4,	// (0x0001b2ef) main_fs_bigclock_swipe_pane_g1

0xecc1,	// (0x0001dbbc) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ed75) main_fs_bigclock_swipe_pane_g

0xecc9,	// (0x0001dbc4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc9,	// (0x0001dbc4) main_fs_bigclock_swipe_pane_t1

0x2591,	// (0x0001148c) call_type_pane_ParamLimits

0x94e2,	// (0x000183dd) main_btmg_pane

0xe8c3,	// (0x0001d7be) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c3,	// (0x0001d7be) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ece8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ece8) list_single_cale_mrui_row_pane_g

0xea48,	// (0x0001d943) list_recal_vselct_arw_lo_pane

0xea50,	// (0x0001d94b) list_recal_vselct_arw_up_pane

0xea58,	// (0x0001d953) list_recal_vselct_pane

0x8a18,	// (0x00017913) btmg_button_pane

0x8a22,	// (0x0001791d) main_btmg_pane_g1

0x94e2,	// (0x000183dd) bg_button_pane_cp044

0xece6,	// (0x0001dbe1) btmg_button_pane_t1

0xbec5,	// (0x0001adc0) aid_listscroll_gen

0x9552,	// (0x0001844d) main_cntbar_detail_pane

0xe615,	// (0x0001d510) list_cmail_folder_pane

0xd317,	// (0x0001c212) sp_fs_scroll_pane_cp03_ParamLimits

0x84a7,	// (0x000173a2) list_single_fs_dyc_pane_cp01_ParamLimits

0x84a7,	// (0x000173a2) list_single_fs_dyc_pane_cp01

0xecf4,	// (0x0001dbef) aid_size_cmail_indent

0xecfd,	// (0x0001dbf8) list_single_dyc_row_pane_cp01

0x8a5e,	// (0x00017959) cntbar_detail_list_pane_ParamLimits

0x8a5e,	// (0x00017959) cntbar_detail_list_pane

0x8aaa,	// (0x000179a5) main_cntbar_detail_cont_pane_ParamLimits

0x8aaa,	// (0x000179a5) main_cntbar_detail_cont_pane

0xd317,	// (0x0001c212) scroll_pane_cp032_ParamLimits

0xd317,	// (0x0001c212) scroll_pane_cp032

0x8abe,	// (0x000179b9) cntbar_detail_list_event_pane_ParamLimits

0x8abe,	// (0x000179b9) cntbar_detail_list_event_pane

0x8a6e,	// (0x00017969) cntbar_detail_list_shct_pane

0xa19e,	// (0x00019099) aid_list_gen

0xed06,	// (0x0001dc01) aid_scroll

0xed0f,	// (0x0001dc0a) aid_size_touch_scroll_bar

0x6d31,	// (0x00015c2c) aid_list_double

0x6d1f,	// (0x00015c1a) aid_list_single

0x6d1f,	// (0x00015c1a) aid_list_single_lg

0x8ace,	// (0x000179c9) aid_list_z_g_a_sm

0x8ad6,	// (0x000179d1) aid_list_z_g_d

0x8ade,	// (0x000179d9) aid_txt_z_prm

0x8aec,	// (0x000179e7) aid_txt_z_prm_cp01

0x8afa,	// (0x000179f5) aid_txt_z_sec

0x8b08,	// (0x00017a03) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b08,	// (0x00017a03) main_cntbar_detail_cont_pane_g1

0x8b1c,	// (0x00017a17) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b1c,	// (0x00017a17) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ed7a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ed7a) main_cntbar_detail_cont_pane_g

0xed18,	// (0x0001dc13) main_cntbar_detail_cont_pane_t1

0xed26,	// (0x0001dc21) main_cntbar_detail_cont_pane_t2

0xed34,	// (0x0001dc2f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001ed7f) main_cntbar_detail_cont_pane_t

0x8b2c,	// (0x00017a27) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b2c,	// (0x00017a27) cell_cntbar_detail_list_shct_pane

0xed42,	// (0x0001dc3d) cntbar_detail_list_shct_pane_g1

0xed4b,	// (0x0001dc46) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001ed86) cntbar_detail_list_shct_pane_g

0x8b40,	// (0x00017a3b) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b40,	// (0x00017a3b) cntbar_detail_list_event_pane_g1

0x8b4c,	// (0x00017a47) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b4c,	// (0x00017a47) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ed8b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ed8b) cntbar_detail_list_event_pane_g

0x8bb8,	// (0x00017ab3) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bb8,	// (0x00017ab3) cntbar_detail_list_event_pane_t1

0x8bcd,	// (0x00017ac8) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bcd,	// (0x00017ac8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ed98) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ed98) cntbar_detail_list_event_pane_t

0xc3f4,	// (0x0001b2ef) cell_cntbar_detail_list_shct_pane_g1

0xa9b6,	// (0x000198b1) navi_pane_mv_g3

0x9552,	// (0x0001844d) main_cntbar_detail_pane_ParamLimits

0x94e2,	// (0x000183dd) main_notif_wgt_pane

0xcd23,	// (0x0001bc1e) aid_tch_main_mp4_pane_g4

0xcf25,	// (0x0001be20) popup_slider_window_cp02

0xea3e,	// (0x0001d939) list_recal_day_event_pane

0x8a2c,	// (0x00017927) cntbar_detail_btn_pane_ParamLimits

0x8a2c,	// (0x00017927) cntbar_detail_btn_pane

0x8a45,	// (0x00017940) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a45,	// (0x00017940) cntbar_detail_btn_pane_cp01

0x8a6e,	// (0x00017969) cntbar_detail_list_shct_pane_ParamLimits

0x8a7e,	// (0x00017979) cntbar_detail_pane_g1_ParamLimits

0x8a7e,	// (0x00017979) cntbar_detail_pane_g1

0x8a8e,	// (0x00017989) cntbar_detail_pane_t1_ParamLimits

0x8a8e,	// (0x00017989) cntbar_detail_pane_t1

0x8b58,	// (0x00017a53) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b58,	// (0x00017a53) cntbar_detail_list_event_pane_g3

0x8b70,	// (0x00017a6b) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b70,	// (0x00017a6b) cntbar_detail_list_event_pane_g4

0x8b88,	// (0x00017a83) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b88,	// (0x00017a83) cntbar_detail_list_event_pane_g5

0x8ba0,	// (0x00017a9b) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ba0,	// (0x00017a9b) cntbar_detail_list_event_pane_g6

0x8be2,	// (0x00017add) cntbar_detail_list_event_pane_t3_ParamLimits

0x8be2,	// (0x00017add) cntbar_detail_list_event_pane_t3

0x8bf4,	// (0x00017aef) popup_notif_wgt_window_ParamLimits

0x8bf4,	// (0x00017aef) popup_notif_wgt_window

0x8c0d,	// (0x00017b08) popup_submenu_window_cp01_ParamLimits

0x8c0d,	// (0x00017b08) popup_submenu_window_cp01

0xa9fe,	// (0x000198f9) bg_popup_window_pane_cp10

0xed54,	// (0x0001dc4f) listscroll_notif_wgt_pane

0xed66,	// (0x0001dc61) list_notif_wgt_window

0xed6f,	// (0x0001dc6a) scroll_pane_cp033

0x8c23,	// (0x00017b1e) list_notif_wgt_row_pane_ParamLimits

0x8c23,	// (0x00017b1e) list_notif_wgt_row_pane

0xed78,	// (0x0001dc73) aid_size_list_notif_wgt_del

0xed85,	// (0x0001dc80) list_notif_wgt_row_pane_g1

0xed91,	// (0x0001dc8c) list_notif_wgt_row_pane_g2

0xeda5,	// (0x0001dca0) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001ed9f) list_notif_wgt_row_pane_g

0xedb2,	// (0x0001dcad) list_notif_wgt_row_pane_t1

0xedc8,	// (0x0001dcc3) list_notif_wgt_row_pane_t2

0xedda,	// (0x0001dcd5) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001eda6) list_notif_wgt_row_pane_t

0xd520,	// (0x0001c41b) list_recal_day_event_pane_g1

0xedec,	// (0x0001dce7) list_recal_day_event_pane_t1

0x94e2,	// (0x000183dd) bg_button_pane_cp045

0x8c33,	// (0x00017b2e) cntbar_detail_btn_pane_t1

0xbed9,	// (0x0001add4) main_callh_pane_ParamLimits

0xbed9,	// (0x0001add4) main_callh_pane

0x94e2,	// (0x000183dd) main_coverflow0_pane

0x94e2,	// (0x000183dd) main_wgtman_pane

0x7a0d,	// (0x00016908) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a0d,	// (0x00016908) main_fs_bigclock_unlock_btn_pane

0x8438,	// (0x00017333) bg_button_pane_cp16

0x8448,	// (0x00017343) cell_tport_appsw_pane_g3

0x8c41,	// (0x00017b3c) cf0_flow_pane_ParamLimits

0x8c41,	// (0x00017b3c) cf0_flow_pane

0xedfb,	// (0x0001dcf6) listscroll_cf0_pane

0xee06,	// (0x0001dd01) main_cf0_pane_g1

0x8c56,	// (0x00017b51) main_cf0_pane_t1_ParamLimits

0x8c56,	// (0x00017b51) main_cf0_pane_t1

0x8c6d,	// (0x00017b68) main_cf0_pane_t2_ParamLimits

0x8c6d,	// (0x00017b68) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001edb2) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001edb2) main_cf0_pane_t

0xee18,	// (0x0001dd13) scroll_pane_cp11

0x8c84,	// (0x00017b7f) cf0_flow_pane_g1

0x8c8c,	// (0x00017b87) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001edb7) cf0_flow_pane_g

0x8c94,	// (0x00017b8f) cf0_flow_pane_t1

0x94e2,	// (0x000183dd) main_call6_pane

0x94e2,	// (0x000183dd) main_calllock_pane

0x8ca2,	// (0x00017b9d) call6_btn_grp_pane_ParamLimits

0x8ca2,	// (0x00017b9d) call6_btn_grp_pane

0x8cbc,	// (0x00017bb7) call6_pane_g1_ParamLimits

0x8cbc,	// (0x00017bb7) call6_pane_g1

0x8cd1,	// (0x00017bcc) popup_call6_1st_window_ParamLimits

0x8cd1,	// (0x00017bcc) popup_call6_1st_window

0x8ce2,	// (0x00017bdd) popup_call6_2nd_window_ParamLimits

0x8ce2,	// (0x00017bdd) popup_call6_2nd_window

0x8cf3,	// (0x00017bee) cell_call6_btn_pane_ParamLimits

0x8cf3,	// (0x00017bee) cell_call6_btn_pane

0xa9fe,	// (0x000198f9) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0001dd1e) popup_call6_1st_window_g1

0xee2b,	// (0x0001dd26) popup_call6_1st_window_g2

0xee33,	// (0x0001dd2e) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001edbc) popup_call6_1st_window_g

0xee3b,	// (0x0001dd36) popup_call6_1st_window_t1

0xee4a,	// (0x0001dd45) popup_call6_1st_window_t2

0xee5a,	// (0x0001dd55) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001edc3) popup_call6_1st_window_t

0xa9fe,	// (0x000198f9) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0001dd1e) popup_call6_2nd_window_g1

0xee2b,	// (0x0001dd26) popup_call6_2nd_window_g2

0xee33,	// (0x0001dd2e) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001edbc) popup_call6_2nd_window_g

0xee3b,	// (0x0001dd36) popup_call6_2nd_window_t1

0x94e2,	// (0x000183dd) bg_button_pane_cp15

0xee6a,	// (0x0001dd65) cell_call6_btn_pane_g1

0xee73,	// (0x0001dd6e) cell_call6_btn_pane_t1

0x8d07,	// (0x00017c02) listscroll_wgtman_pane_ParamLimits

0x8d07,	// (0x00017c02) listscroll_wgtman_pane

0x8d28,	// (0x00017c23) wgtman_btn_pane_ParamLimits

0x8d28,	// (0x00017c23) wgtman_btn_pane

0xa7bd,	// (0x000196b8) aid_scroll_copy1

0xee82,	// (0x0001dd7d) list_wgtman_pane

0x8d6b,	// (0x00017c66) wgtman_btn_pane_g1_ParamLimits

0x8d6b,	// (0x00017c66) wgtman_btn_pane_g1

0x8d97,	// (0x00017c92) wgtman_btn_pane_t1_ParamLimits

0x8d97,	// (0x00017c92) wgtman_btn_pane_t1

0xee8c,	// (0x0001dd87) wgtman_btn_pane_t2_ParamLimits

0xee8c,	// (0x0001dd87) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001edca) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001edca) wgtman_btn_pane_t

0x8dd4,	// (0x00017ccf) listrow_wgtman_pane_ParamLimits

0x8dd4,	// (0x00017ccf) listrow_wgtman_pane

0x8de6,	// (0x00017ce1) listrow_wgtman_pane_g1

0x8df3,	// (0x00017cee) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001edcf) listrow_wgtman_pane_g

0x8e11,	// (0x00017d0c) listrow_wgtman_pane_t1

0x8e29,	// (0x00017d24) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001edd4) listrow_wgtman_pane_t

0x8e4f,	// (0x00017d4a) wait_bar_pane_cp09

0xeea3,	// (0x0001dd9e) main_calllock_btn_pane

0xeead,	// (0x0001dda8) main_calllock_pane_g1

0x94e2,	// (0x000183dd) bg_button_pane_cp17

0xeeb9,	// (0x0001ddb4) main_calllock_btn_pane_g1

0xeec2,	// (0x0001ddbd) main_calllock_btn_pane_t1

0x94e2,	// (0x000183dd) main_dialer3_pane

0x94e2,	// (0x000183dd) main_fmrd2_pane

0xc3f4,	// (0x0001b2ef) main_fs_bigclock_unlock_btn_pane_g1

0xeed9,	// (0x0001ddd4) main_fs_bigclock_unlock_btn_pane_t1

0x8e61,	// (0x00017d5c) area_fmrd2_info_pane_ParamLimits

0x8e61,	// (0x00017d5c) area_fmrd2_info_pane

0x8e72,	// (0x00017d6d) area_fmrd2_visual_pane_ParamLimits

0x8e72,	// (0x00017d6d) area_fmrd2_visual_pane

0x8e80,	// (0x00017d7b) fmrd2_indi_pane_ParamLimits

0x8e80,	// (0x00017d7b) fmrd2_indi_pane

0x8e8d,	// (0x00017d88) area_fmrd2_visual_pane_g1

0x8e95,	// (0x00017d90) area_fmrd2_visual_pane_t1

0x8ea5,	// (0x00017da0) area_fmrd2_visual_pane_t2

0x8eb5,	// (0x00017db0) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001edde) area_fmrd2_visual_pane_t

0x8ec5,	// (0x00017dc0) area_fmrd2_info_pane_g1

0x8ecd,	// (0x00017dc8) area_fmrd2_info_pane_t1

0x8edd,	// (0x00017dd8) area_fmrd2_info_pane_t2

0x8eed,	// (0x00017de8) area_fmrd2_info_pane_t3

0x8efd,	// (0x00017df8) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ede5) area_fmrd2_info_pane_t

0x8f0b,	// (0x00017e06) fmrd2_indi_pane_t1

0x8f1b,	// (0x00017e16) fmrd2_indi_pane_t2

0x8f2b,	// (0x00017e26) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001edee) fmrd2_indi_pane_t

0xe1b0,	// (0x0001d0ab) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1b0,	// (0x0001d0ab) list_single_fs_bigclock_indicator_pane_g5

0xe260,	// (0x0001d15b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe260,	// (0x0001d15b) list_single_fs_bigclock_indicator_pane_t5

0x8617,	// (0x00017512) aid_cell_bcale_month_pane_ParamLimits

0x8617,	// (0x00017512) aid_cell_bcale_month_pane

0x8635,	// (0x00017530) bcale_month_pane_ParamLimits

0x8635,	// (0x00017530) bcale_month_pane

0x8659,	// (0x00017554) bcale_preview_pane_ParamLimits

0x8659,	// (0x00017554) bcale_preview_pane

0xec7e,	// (0x0001db79) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9d,	// (0x0001db98) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9d,	// (0x0001db98) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ed70) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ed70) list_single_fs_bigclock_pane_t

0xeed1,	// (0x0001ddcc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001edd9) main_fs_bigclock_unlock_btn_pane_g

0x8f3b,	// (0x00017e36) aid_dia3_key_size_ParamLimits

0x8f3b,	// (0x00017e36) aid_dia3_key_size

0x8f4a,	// (0x00017e45) aid_dia3_listrow_size_ParamLimits

0x8f4a,	// (0x00017e45) aid_dia3_listrow_size

0x8f5f,	// (0x00017e5a) dia3_keypad_fun_pane_ParamLimits

0x8f5f,	// (0x00017e5a) dia3_keypad_fun_pane

0x8f7b,	// (0x00017e76) dia3_keypad_num_pane_ParamLimits

0x8f7b,	// (0x00017e76) dia3_keypad_num_pane

0x8f96,	// (0x00017e91) dia3_listscroll_pane_ParamLimits

0x8f96,	// (0x00017e91) dia3_listscroll_pane

0x8fa9,	// (0x00017ea4) dia3_numentry_pane_ParamLimits

0x8fa9,	// (0x00017ea4) dia3_numentry_pane

0xeee7,	// (0x0001dde2) dia3_list_pane

0xeef2,	// (0x0001dded) scroll_pane_cp12

0x94e2,	// (0x000183dd) bg_dia3_numentry_pane

0x8fbd,	// (0x00017eb8) dia3_numentry_pane_t1

0x8fcc,	// (0x00017ec7) cell_dia3_key_num_pane

0x8fd4,	// (0x00017ecf) cell_dia3_key0_fun_pane_ParamLimits

0x8fd4,	// (0x00017ecf) cell_dia3_key0_fun_pane

0x8fe8,	// (0x00017ee3) cell_dia3_key1_fun_pane_ParamLimits

0x8fe8,	// (0x00017ee3) cell_dia3_key1_fun_pane

0x9000,	// (0x00017efb) dia3_listrow_pane

0xdebf,	// (0x0001cdba) bg_dia3_numentry_pane_g1

0x94e2,	// (0x000183dd) bg_button_pane_cp21

0xeefd,	// (0x0001ddf8) cell_dia3_key_num_pane_t1

0xef0b,	// (0x0001de06) cell_dia3_key_num_pane_t2

0xef1a,	// (0x0001de15) cell_dia3_key_num_pane_t3

0xef29,	// (0x0001de24) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001edf5) cell_dia3_key_num_pane_t

0x94e2,	// (0x000183dd) bg_button_pane_cp19

0x9012,	// (0x00017f0d) cell_dia3_key0_fun_pane_g1

0x94e2,	// (0x000183dd) bg_button_pane_cp20

0x901a,	// (0x00017f15) cell_dia3_key1_fun_pane_g1

0x9022,	// (0x00017f1d) area_left_week_number_pane

0x902e,	// (0x00017f29) area_top_day_name_pane

0x9041,	// (0x00017f3c) frame_month_view_pane

0xef38,	// (0x0001de33) grid_month_view_pane

0x9054,	// (0x00017f4f) cell_top_day_name_pane_ParamLimits

0x9054,	// (0x00017f4f) cell_top_day_name_pane

0x9081,	// (0x00017f7c) cell_area_left_week_number_pane_ParamLimits

0x9081,	// (0x00017f7c) cell_area_left_week_number_pane

0x9095,	// (0x00017f90) cell_month_view_pane_ParamLimits

0x9095,	// (0x00017f90) cell_month_view_pane

0xef46,	// (0x0001de41) frm_month_g1

0x90c2,	// (0x00017fbd) frm_month_g2

0x90d5,	// (0x00017fd0) frm_month_g3

0x90e8,	// (0x00017fe3) frm_month_g4

0x90fb,	// (0x00017ff6) frm_month_g5

0x910e,	// (0x00018009) frm_month_g6

0x9121,	// (0x0001801c) frm_month_g7

0xef53,	// (0x0001de4e) frm_month_g8

0x9134,	// (0x0001802f) frm_month_g9

0x9144,	// (0x0001803f) frm_month_g10

0x9154,	// (0x0001804f) frm_month_g11

0x9164,	// (0x0001805f) frm_month_g12

0x9176,	// (0x00018071) frm_month_g13

0x9188,	// (0x00018083) frm_month_g14

0x919c,	// (0x00018097) frm_month_g15

0x91b0,	// (0x000180ab) frm_month_g16

0x000f,

0xff03,	// (0x0001edfe) frm_month_g

0xef60,	// (0x0001de5b) cell_top_day_name_pane_t1

0x91c4,	// (0x000180bf) cell_area_left_week_number_pane_g1

0x91d0,	// (0x000180cb) cell_area_left_week_number_pane_t1

0xc660,	// (0x0001b55b) cell_month_view_pane_g1

0x91e3,	// (0x000180de) cell_month_view_pane_t1

0x94e2,	// (0x000183dd) main_fps_pane

0xe43e,	// (0x0001d339) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe43e,	// (0x0001d339) cmail_ddmenu_btn02_pane_cp1

0xe45a,	// (0x0001d355) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe45a,	// (0x0001d355) cmail_ddmenu_btn02_pane_cp2

0x8919,	// (0x00017814) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8919,	// (0x00017814) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ed23) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ed23) cmail_ddmenu_btn02_pane_g

0x8937,	// (0x00017832) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8937,	// (0x00017832) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ed28) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ed28) cmail_ddmenu_btn02_pane_t

0x91f6,	// (0x000180f1) fps_text_pane_ParamLimits

0x91f6,	// (0x000180f1) fps_text_pane

0x920d,	// (0x00018108) main_fps_pane_g1_ParamLimits

0x920d,	// (0x00018108) main_fps_pane_g1

0x9227,	// (0x00018122) wait_bar_pane_cp010_ParamLimits

0x9227,	// (0x00018122) wait_bar_pane_cp010

0x9238,	// (0x00018133) fps_text_pane_t1_ParamLimits

0x9238,	// (0x00018133) fps_text_pane_t1

0xea9b,	// (0x0001d996) cam4_image_uncrop_pane_g1

0xeaa4,	// (0x0001d99f) cam4_image_uncrop_pane_g2

0x5a7e,	// (0x00014979) cam4_image_uncrop_pane_g3

0x5a87,	// (0x00014982) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e7e9) cam4_image_uncrop_pane_g

0x9000,	// (0x00017efb) dia3_listrow_pane_ParamLimits

0x94e2,	// (0x000183dd) main_phob2_pane

0x8409,	// (0x00017304) cell_tport_appsw_pane_cp02_ParamLimits

0x8409,	// (0x00017304) cell_tport_appsw_pane_cp02

0x841d,	// (0x00017318) cell_tport_appsw_pane_cp03_ParamLimits

0x841d,	// (0x00017318) cell_tport_appsw_pane_cp03

0x94e2,	// (0x000183dd) phob2_contact_card_pane

0x94e2,	// (0x000183dd) phob2_listscroll_pane

0xef73,	// (0x0001de6e) phob2_list_pane

0xef7b,	// (0x0001de76) scroll_pane_cp034

0x9250,	// (0x0001814b) phob2_cc_data_pane_ParamLimits

0x9250,	// (0x0001814b) phob2_cc_data_pane

0x926f,	// (0x0001816a) phob2_cc_listscroll_pane_ParamLimits

0x926f,	// (0x0001816a) phob2_cc_listscroll_pane

0x928d,	// (0x00018188) list_double_large_graphic_phob2_pane_ParamLimits

0x928d,	// (0x00018188) list_double_large_graphic_phob2_pane

0x929f,	// (0x0001819a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x929f,	// (0x0001819a) list_double_large_graphic_phob2_pane_g1

0xef83,	// (0x0001de7e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef83,	// (0x0001de7e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ee1f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ee1f) list_double_large_graphic_phob2_pane_g

0x92b5,	// (0x000181b0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92b5,	// (0x000181b0) list_double_large_graphic_phob2_pane_t1

0x92ca,	// (0x000181c5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92ca,	// (0x000181c5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ee24) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ee24) list_double_large_graphic_phob2_pane_t

0x94e2,	// (0x000183dd) list_highlight_pane_cp024

0x92dc,	// (0x000181d7) phob2_cc_button_pane

0x92e4,	// (0x000181df) phob2_cc_data_pane_g1_ParamLimits

0x92e4,	// (0x000181df) phob2_cc_data_pane_g1

0x92f9,	// (0x000181f4) phob2_cc_data_pane_g2_ParamLimits

0x92f9,	// (0x000181f4) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ee29) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ee29) phob2_cc_data_pane_g

0x9309,	// (0x00018204) phob2_cc_data_pane_t1_ParamLimits

0x9309,	// (0x00018204) phob2_cc_data_pane_t1

0x9321,	// (0x0001821c) phob2_cc_data_pane_t2_ParamLimits

0x9321,	// (0x0001821c) phob2_cc_data_pane_t2

0x9339,	// (0x00018234) phob2_cc_data_pane_t3_ParamLimits

0x9339,	// (0x00018234) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ee2e) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ee2e) phob2_cc_data_pane_t

0xef8f,	// (0x0001de8a) phob2_cc_list_pane_ParamLimits

0xef8f,	// (0x0001de8a) phob2_cc_list_pane

0xd5c9,	// (0x0001c4c4) scroll_pane_cp035_ParamLimits

0xd5c9,	// (0x0001c4c4) scroll_pane_cp035

0x9552,	// (0x0001844d) bg_button_pane_cp033

0xef9b,	// (0x0001de96) phob2_cc_button_pane_g1

0xefa7,	// (0x0001dea2) phob2_cc_button_pane_t1

0xefbc,	// (0x0001deb7) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ee35) phob2_cc_button_pane_t

0x9351,	// (0x0001824c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9351,	// (0x0001824c) list_double_large_graphic_phob2_cc_pane

0x9363,	// (0x0001825e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9363,	// (0x0001825e) list_double_large_graphic_phob2_cc_pane_g1

0x936f,	// (0x0001826a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x936f,	// (0x0001826a) list_double_large_graphic_phob2_cc_pane_g2

0x937b,	// (0x00018276) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x937b,	// (0x00018276) list_double_large_graphic_phob2_cc_pane_g3

0x9387,	// (0x00018282) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9387,	// (0x00018282) list_double_large_graphic_phob2_cc_pane_g4

0x9393,	// (0x0001828e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9393,	// (0x0001828e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ee3a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ee3a) list_double_large_graphic_phob2_cc_pane_g

0x939f,	// (0x0001829a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x939f,	// (0x0001829a) list_double_large_graphic_phob2_cc_pane_t1

0x93c8,	// (0x000182c3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93c8,	// (0x000182c3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ee45) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ee45) list_double_large_graphic_phob2_cc_pane_t

0xefce,	// (0x0001dec9) list_highlight_pane_cp025_ParamLimits

0xefce,	// (0x0001dec9) list_highlight_pane_cp025

0x9552,	// (0x0001844d) bg_button_pane_cp033_ParamLimits

0xef9b,	// (0x0001de96) phob2_cc_button_pane_g1_ParamLimits

0xefa7,	// (0x0001dea2) phob2_cc_button_pane_t1_ParamLimits

0xefbc,	// (0x0001deb7) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ee35) phob2_cc_button_pane_t_ParamLimits

0x03ee,	// (0x0000f2e9) popup_wgtman_window

0xd367,	// (0x0001c262) scroll_pane_cp038

0x8d4d,	// (0x00017c48) wgtman_btn_pane_cp_01_ParamLimits

0x8d4d,	// (0x00017c48) wgtman_btn_pane_cp_01

0xefdc,	// (0x0001ded7) wgtman_content_pane

0xefe5,	// (0x0001dee0) wgtman_heading_pane

0x94e2,	// (0x000183dd) bg_heading_pane_cp02

0xefee,	// (0x0001dee9) wgtman_heading_pane_g1

0xeff6,	// (0x0001def1) wgtman_heading_pane_t1

0xf004,	// (0x0001deff) scroll_pane_cp036

0xf00c,	// (0x0001df07) wgtman_list_pane

0xf014,	// (0x0001df0f) wgtman_list_pane_t1_ParamLimits

0xf014,	// (0x0001df0f) wgtman_list_pane_t1

0xd0c6,	// (0x0001bfc1) cam4_grid_pane

0x6818,	// (0x00015713) bg_button_pane_cp015_ParamLimits

0x682a,	// (0x00015725) bg_button_pane_cp016_ParamLimits

0x683d,	// (0x00015738) bg_button_pane_cp017_ParamLimits

0x6895,	// (0x00015790) popup_vitu2_query_window_g3_ParamLimits

0x6895,	// (0x00015790) popup_vitu2_query_window_g3

0x6952,	// (0x0001584d) popup_vitu2_query_window_t6_ParamLimits

0x6952,	// (0x0001584d) popup_vitu2_query_window_t6

0x697d,	// (0x00015878) popup_vitu2_query_window_t7_ParamLimits

0x697d,	// (0x00015878) popup_vitu2_query_window_t7

0xea9b,	// (0x0001d996) cam4_grid_pane_g1

0xeaa4,	// (0x0001d99f) cam4_grid_pane_g2

0xf02e,	// (0x0001df29) cam4_grid_pane_g3

0xf037,	// (0x0001df32) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ee4a) cam4_grid_pane_g

0x1423,	// (0x0001031e) aid_placing_vt_slider_lsc_ParamLimits

0x172e,	// (0x00010629) vidtel_button_pane_ParamLimits

0x172e,	// (0x00010629) vidtel_button_pane

0xf042,	// (0x0001df3d) bg_button_pane_cp034

0x93f1,	// (0x000182ec) vidtel_button_pane_g1

0xf04c,	// (0x0001df47) vidtel_button_pane_t1

0xd4d4,	// (0x0001c3cf) aid_size_vtel_slider_touch

0xd5c9,	// (0x0001c4c4) scroll_pane_cp039

0xdefd,	// (0x0001cdf8) ncim_query_button_pane_cp01_ParamLimits

0xdf1c,	// (0x0001ce17) ncimui_query_pane_g1_ParamLimits

0x9552,	// (0x0001844d) input_focus_pane_cp012_ParamLimits

0xdf41,	// (0x0001ce3c) ncim_query_entry_pane_t1_ParamLimits

0xd5c9,	// (0x0001c4c4) scroll_pane_cp039_ParamLimits

0xa8a1,	// (0x0001979c) navi_pane_bcale_mc_g1

0xa8a9,	// (0x000197a4) navi_pane_bcale_mc_t1

0xe4a3,	// (0x0001d39e) main_sp_fs_email_pane_g1

0xe4af,	// (0x0001d3aa) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ebe0) main_sp_fs_email_pane_g

0xe8cf,	// (0x0001d7ca) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8cf,	// (0x0001d7ca) list_single_cale_mrui_row_pane_g3

0x895f,	// (0x0001785a) list_single_recal_day_pane_g5_event_pane

0xeac9,	// (0x0001d9c4) list_single_recal_day_pane_g7

0xf05a,	// (0x0001df55) list_recal_day_event_pane_cp01

0xf063,	// (0x0001df5e) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0001df66) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0001df6e) list_recal_vselct_pane_cp01

0xd520,	// (0x0001c41b) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0001df78) list_recal_day_event_pane_cp01_t1

0xead1,	// (0x0001d9cc) list_single_recal_day_pane_t1_ParamLimits

0xeae3,	// (0x0001d9de) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ed38) list_single_recal_day_pane_t_ParamLimits

0x9bce,	// (0x00018ac9) bg_notes_pane_ParamLimits

0x9c79,	// (0x00018b74) list_notes_pane_ParamLimits

0x0737,	// (0x0000f632) scroll_pane_cp06_ParamLimits

0x9cb5,	// (0x00018bb0) main_notes_pane_ParamLimits

0x94e2,	// (0x000183dd) main_welc_pane

0x93f9,	// (0x000182f4) main_welc_body_pane_ParamLimits

0x93f9,	// (0x000182f4) main_welc_body_pane

0x9417,	// (0x00018312) main_welc_opti_pane_ParamLimits

0x9417,	// (0x00018312) main_welc_opti_pane

0x945c,	// (0x00018357) main_welc_pane_t1_ParamLimits

0x945c,	// (0x00018357) main_welc_pane_t1

0x947a,	// (0x00018375) main_welc_body_row_pane_ParamLimits

0x947a,	// (0x00018375) main_welc_body_row_pane

0xd309,	// (0x0001c204) main_welc_opti_row_pane_ParamLimits

0xd309,	// (0x0001c204) main_welc_opti_row_pane

0xf08b,	// (0x0001df86) main_welc_opti_row_pane_g1

0x948e,	// (0x00018389) main_welc_opti_row_pane_t1

0xf093,	// (0x0001df8e) main_welc_body_row_pane_t1

0xed5e,	// (0x0001dc59) popup_notif_wgt_heading_pane

0xed78,	// (0x0001dc73) aid_size_list_notif_wgt_del_ParamLimits

0xed85,	// (0x0001dc80) list_notif_wgt_row_pane_g1_ParamLimits

0xed91,	// (0x0001dc8c) list_notif_wgt_row_pane_g2_ParamLimits

0xeda5,	// (0x0001dca0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001ed9f) list_notif_wgt_row_pane_g_ParamLimits

0xedb2,	// (0x0001dcad) list_notif_wgt_row_pane_t1_ParamLimits

0xedc8,	// (0x0001dcc3) list_notif_wgt_row_pane_t2_ParamLimits

0xedda,	// (0x0001dcd5) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001eda6) list_notif_wgt_row_pane_t_ParamLimits

0x8de6,	// (0x00017ce1) listrow_wgtman_pane_g1_ParamLimits

0x8df3,	// (0x00017cee) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001edcf) listrow_wgtman_pane_g_ParamLimits

0x8e11,	// (0x00017d0c) listrow_wgtman_pane_t1_ParamLimits

0x8e29,	// (0x00017d24) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001edd4) listrow_wgtman_pane_t_ParamLimits

0x8e4f,	// (0x00017d4a) wait_bar_pane_cp09_ParamLimits

0x94e2,	// (0x000183dd) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0001df9d) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0001dfa5) popup_notif_wgt_heading_pane_t1

0x94e2,	// (0x000183dd) main_vids_pane

0x94e2,	// (0x000183dd) vids_listscroll_pane

0x949d,	// (0x00018398) scroll_pane_cp040

0x94e2,	// (0x000183dd) vids_list_pane

0x94a8,	// (0x000183a3) vids_list_double_pane_ParamLimits

0x94a8,	// (0x000183a3) vids_list_double_pane

0x94b9,	// (0x000183b4) vids_list_double_pane_g1

0x94c2,	// (0x000183bd) vids_list_double_pane_t1

0x94d2,	// (0x000183cd) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ee58) vids_list_double_pane_t

0x9552,	// (0x0001844d) main_ncimui_pane_ParamLimits

0x7584,	// (0x0001647f) main_ncimui_pane_g1_ParamLimits

0x7590,	// (0x0001648b) main_ncimui_pane_g2_ParamLimits

0x7590,	// (0x0001648b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001eae5) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001eae5) main_ncimui_pane_g

0x9432,	// (0x0001832d) main_welc_pane_g1_ParamLimits

0x9432,	// (0x0001832d) main_welc_pane_g1

0x9447,	// (0x00018342) main_welc_pane_g2_ParamLimits

0x9447,	// (0x00018342) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ee53) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ee53) main_welc_pane_g

0x9bce,	// (0x00018ac9) listscroll_mce_pane_ParamLimits

0xa9f6,	// (0x000198f1) wait_bar_pane_cp10

0xbecd,	// (0x0001adc8) main_cale_day_pane_ParamLimits

0xbecd,	// (0x0001adc8) main_cale_week_pane_ParamLimits

0x9bce,	// (0x00018ac9) main_messa_pane_ParamLimits

0x4dba,	// (0x00013cb5) main_clock2_btn_pane_ParamLimits

0x4dba,	// (0x00013cb5) main_clock2_btn_pane

0xc814,	// (0x0001b70f) main_clock2_btn_pane_cp01_ParamLimits

0xc814,	// (0x0001b70f) main_clock2_btn_pane_cp01

0xe85b,	// (0x0001d756) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0001dd0b) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001edad) main_cf0_pane_g

0x9022,	// (0x00017f1d) area_left_week_number_pane_ParamLimits

0x902e,	// (0x00017f29) area_top_day_name_pane_ParamLimits

0x9041,	// (0x00017f3c) frame_month_view_pane_ParamLimits

0xef38,	// (0x0001de33) grid_month_view_pane_ParamLimits

0xef46,	// (0x0001de41) frm_month_g1_ParamLimits

0x90c2,	// (0x00017fbd) frm_month_g2_ParamLimits

0x90d5,	// (0x00017fd0) frm_month_g3_ParamLimits

0x90e8,	// (0x00017fe3) frm_month_g4_ParamLimits

0x90fb,	// (0x00017ff6) frm_month_g5_ParamLimits

0x910e,	// (0x00018009) frm_month_g6_ParamLimits

0x9121,	// (0x0001801c) frm_month_g7_ParamLimits

0xef53,	// (0x0001de4e) frm_month_g8_ParamLimits

0x9134,	// (0x0001802f) frm_month_g9_ParamLimits

0x9144,	// (0x0001803f) frm_month_g10_ParamLimits

0x9154,	// (0x0001804f) frm_month_g11_ParamLimits

0x9164,	// (0x0001805f) frm_month_g12_ParamLimits

0x9176,	// (0x00018071) frm_month_g13_ParamLimits

0x9188,	// (0x00018083) frm_month_g14_ParamLimits

0x919c,	// (0x00018097) frm_month_g15_ParamLimits

0x91b0,	// (0x000180ab) frm_month_g16_ParamLimits

0xff03,	// (0x0001edfe) frm_month_g_ParamLimits

0xef60,	// (0x0001de5b) cell_top_day_name_pane_t1_ParamLimits

0x91c4,	// (0x000180bf) cell_area_left_week_number_pane_g1_ParamLimits

0x91d0,	// (0x000180cb) cell_area_left_week_number_pane_t1_ParamLimits

0xc660,	// (0x0001b55b) cell_month_view_pane_g1_ParamLimits

0x91e3,	// (0x000180de) cell_month_view_pane_t1_ParamLimits

0x9bc6,	// (0x00018ac1) main_clock2_btn_pane_g1

0xf0b8,	// (0x0001dfb3) main_clock2_btn_pane_t1

0x9552,	// (0x0001844d) listscroll_cmail_pane_ParamLimits

0xe4a3,	// (0x0001d39e) main_sp_fs_email_pane_g1_ParamLimits

0xe4af,	// (0x0001d3aa) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ebe0) main_sp_fs_email_pane_g_ParamLimits

0xea1f,	// (0x0001d91a) list_recal_day_pane_ParamLimits

0xea30,	// (0x0001d92b) mian_recal_day_pane_t1

0x808b,	// (0x00016f86) list_single_dyc_row_text_pane_t4_ParamLimits

0x808b,	// (0x00016f86) list_single_dyc_row_text_pane_t4

0x80d4,	// (0x00016fcf) list_single_dyc_row_text_pane_t5_ParamLimits

0x80d4,	// (0x00016fcf) list_single_dyc_row_text_pane_t5

0xe551,	// (0x0001d44c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe551,	// (0x0001d44c) list_single_dyc_row_text_pane_t6

0x23fa,	// (0x000112f5) aid_mgn_list_cale_time_pane

0x9552,	// (0x0001844d) main_gallery2_pane_ParamLimits

0xc82a,	// (0x0001b725) main_clock2_pane_cp01_t1

0xc83a,	// (0x0001b735) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e6bf) main_clock2_pane_cp01_t

0x0af1,	// (0x0000f9ec) cale_week_scroll_pane_g16_ParamLimits

0x0af1,	// (0x0000f9ec) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
