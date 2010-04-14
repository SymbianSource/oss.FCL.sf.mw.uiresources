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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003d594 };

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
0x20c3,	// (0x0003f657) Screen

0x20cf,	// (0x0003f663) application_window

0x212b,	// (0x0003f6bf) area_bottom_pane_ParamLimits

0x212b,	// (0x0003f6bf) area_bottom_pane

0x2184,	// (0x0003f718) area_top_pane_ParamLimits

0x2184,	// (0x0003f718) area_top_pane

0x21e8,	// (0x0003f77c) call_video_uplink_pane_ParamLimits

0x21e8,	// (0x0003f77c) call_video_uplink_pane

0x2227,	// (0x0003f7bb) main_pane_ParamLimits

0x2227,	// (0x0003f7bb) main_pane

0xc7af,	// (0x00049d43) context_pane

0x55a4,	// (0x00042b38) navi_pane

0x55ca,	// (0x00042b5e) popup_cale_events_window_ParamLimits

0x55ca,	// (0x00042b5e) popup_cale_events_window

0xc7c2,	// (0x00049d56) popup_mup_playback_window

0x55e2,	// (0x00042b76) signal_pane

0xa737,	// (0x00047ccb) main_browser_pane

0xb38a,	// (0x0004891e) main_burst_pane

0x543a,	// (0x000429ce) main_calc_pane

0xc795,	// (0x00049d29) main_cale_day_pane

0x295a,	// (0x0003feee) main_cale_month_pane

0xc795,	// (0x00049d29) main_cale_week_pane

0xb38a,	// (0x0004891e) main_call_pane

0xa3cd,	// (0x00047961) main_call_poc_pane

0xb38a,	// (0x0004891e) main_camera_pane

0xb38a,	// (0x0004891e) main_chi_dic_pane

0xb115,	// (0x000486a9) main_clock_pane

0xa3cd,	// (0x00047961) main_fmradio_pane

0xb38a,	// (0x0004891e) main_graph_messa_pane

0xa3cd,	// (0x00047961) main_help_pane

0xa737,	// (0x00047ccb) main_im_pane

0xa628,	// (0x00047bbc) main_image_pane_ParamLimits

0xa628,	// (0x00047bbc) main_image_pane

0xa3cd,	// (0x00047961) main_location2_pane

0xb38a,	// (0x0004891e) main_location_pane

0xa628,	// (0x00047bbc) main_messa_pane

0xa3cd,	// (0x00047961) main_mp2_pane

0xb38a,	// (0x0004891e) main_mp_pane

0xa3cd,	// (0x00047961) main_msg_pane

0xa3cd,	// (0x00047961) main_mup_eq_pane

0xa3cd,	// (0x00047961) main_mup_pane

0xa737,	// (0x00047ccb) main_notes_pane

0xa3cd,	// (0x00047961) main_pec_pane

0xa3cd,	// (0x00047961) main_phob_pane

0xa3cd,	// (0x00047961) main_pinb_pane

0xa3cd,	// (0x00047961) main_postcard_pane

0xa3cd,	// (0x00047961) main_qdial_pane

0xb38a,	// (0x0004891e) main_skin_pane

0xa3cd,	// (0x00047961) main_smil2_pane

0xb38a,	// (0x0004891e) main_smil_pane

0xb38a,	// (0x0004891e) main_video_pane

0xb38a,	// (0x0004891e) main_video_tele_pane

0xa628,	// (0x00047bbc) main_viewer_pane_ParamLimits

0xa628,	// (0x00047bbc) main_viewer_pane

0xb38a,	// (0x0004891e) main_vorec_pane

0x5478,	// (0x00042a0c) popup_blid_sat_info_window_ParamLimits

0x5478,	// (0x00042a0c) popup_blid_sat_info_window

0x5498,	// (0x00042a2c) popup_dyc_status_message_window_ParamLimits

0x5498,	// (0x00042a2c) popup_dyc_status_message_window

0x54a6,	// (0x00042a3a) popup_grid_large_graphic_window_ParamLimits

0x54a6,	// (0x00042a3a) popup_grid_large_graphic_window

0x5535,	// (0x00042ac9) popup_loc_request_window_ParamLimits

0x5535,	// (0x00042ac9) popup_loc_request_window

0x557c,	// (0x00042b10) popup_wml_address_window_ParamLimits

0x557c,	// (0x00042b10) popup_wml_address_window

0x5312,	// (0x000428a6) call_muted_g1

0x4fd0,	// (0x00042564) popup_call_audio_conf_window_ParamLimits

0x4fd0,	// (0x00042564) popup_call_audio_conf_window

0x5322,	// (0x000428b6) popup_call_audio_first_window_ParamLimits

0x5322,	// (0x000428b6) popup_call_audio_first_window

0x5362,	// (0x000428f6) popup_call_audio_in_window_ParamLimits

0x5362,	// (0x000428f6) popup_call_audio_in_window

0x5386,	// (0x0004291a) popup_call_audio_out_window_ParamLimits

0x5386,	// (0x0004291a) popup_call_audio_out_window

0x53a8,	// (0x0004293c) popup_call_audio_second_window_ParamLimits

0x53a8,	// (0x0004293c) popup_call_audio_second_window

0x53d8,	// (0x0004296c) popup_call_audio_wait_window_ParamLimits

0x53d8,	// (0x0004296c) popup_call_audio_wait_window

0x53f9,	// (0x0004298d) popup_number_entry_window_ParamLimits

0x53f9,	// (0x0004298d) popup_number_entry_window

0x9fba,	// (0x0004754e) bg_popup_call_pane_cp05_ParamLimits

0x9fba,	// (0x0004754e) bg_popup_call_pane_cp05

0x9fda,	// (0x0004756e) popup_number_entry_window_t1

0x9fed,	// (0x00047581) popup_number_entry_window_t2

0x9fff,	// (0x00047593) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004c65a) popup_number_entry_window_t

0xa011,	// (0x000475a5) text_title_cp2

0xa024,	// (0x000475b8) bg_popup_call_pane_cp_ParamLimits

0xa024,	// (0x000475b8) bg_popup_call_pane_cp

0xa032,	// (0x000475c6) call_thumbnail_pane

0xa03a,	// (0x000475ce) popup_call_audio_in_window_g1_ParamLimits

0xa03a,	// (0x000475ce) popup_call_audio_in_window_g1

0xa046,	// (0x000475da) popup_call_audio_in_window_g2_ParamLimits

0xa046,	// (0x000475da) popup_call_audio_in_window_g2

0xa052,	// (0x000475e6) popup_call_audio_in_window_g3_ParamLimits

0xa052,	// (0x000475e6) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004c663) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004c663) popup_call_audio_in_window_g

0xa05e,	// (0x000475f2) popup_call_audio_in_window_t1_ParamLimits

0xa05e,	// (0x000475f2) popup_call_audio_in_window_t1

0xa07a,	// (0x0004760e) popup_call_audio_in_window_t2_ParamLimits

0xa07a,	// (0x0004760e) popup_call_audio_in_window_t2

0xa096,	// (0x0004762a) popup_call_audio_in_window_t3_ParamLimits

0xa096,	// (0x0004762a) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004c66a) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004c66a) popup_call_audio_in_window_t

0xa024,	// (0x000475b8) bg_popup_call_pane_cp01_ParamLimits

0xa024,	// (0x000475b8) bg_popup_call_pane_cp01

0xa032,	// (0x000475c6) call_thumbnail_pane_cp02

0xa0a9,	// (0x0004763d) call_type_pane_cp022

0xa0b1,	// (0x00047645) popup_call_audio_out_window_g1_ParamLimits

0xa0b1,	// (0x00047645) popup_call_audio_out_window_g1

0xa0c3,	// (0x00047657) popup_call_audio_out_window_g2_ParamLimits

0xa0c3,	// (0x00047657) popup_call_audio_out_window_g2

0xa0cf,	// (0x00047663) popup_call_audio_out_window_g3_ParamLimits

0xa0cf,	// (0x00047663) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004c671) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004c671) popup_call_audio_out_window_g

0xa0e1,	// (0x00047675) popup_call_audio_out_window_t1_ParamLimits

0xa0e1,	// (0x00047675) popup_call_audio_out_window_t1

0xa0f9,	// (0x0004768d) popup_call_audio_out_window_t2_ParamLimits

0xa0f9,	// (0x0004768d) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004c678) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004c678) popup_call_audio_out_window_t

0xa10e,	// (0x000476a2) bg_popup_call_pane_ParamLimits

0xa10e,	// (0x000476a2) bg_popup_call_pane

0x242b,	// (0x0003f9bf) call_thumbnail_pane_cp_ParamLimits

0x242b,	// (0x0003f9bf) call_thumbnail_pane_cp

0xa192,	// (0x00047726) call_type_pane_cp01_ParamLimits

0xa192,	// (0x00047726) call_type_pane_cp01

0xa1d6,	// (0x0004776a) popup_call_audio_first_window_g1_ParamLimits

0xa1d6,	// (0x0004776a) popup_call_audio_first_window_g1

0xa222,	// (0x000477b6) popup_call_audio_first_window_g2_ParamLimits

0xa222,	// (0x000477b6) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004c67d) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004c67d) popup_call_audio_first_window_g

0xa266,	// (0x000477fa) popup_call_audio_first_window_t1_ParamLimits

0xa266,	// (0x000477fa) popup_call_audio_first_window_t1

0xa312,	// (0x000478a6) popup_call_audio_first_window_t4_ParamLimits

0xa312,	// (0x000478a6) popup_call_audio_first_window_t4

0xa39e,	// (0x00047932) popup_call_audio_first_window_t5_ParamLimits

0xa39e,	// (0x00047932) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004c682) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004c682) popup_call_audio_first_window_t

0xa3cd,	// (0x00047961) bg_popup_call_pane_cp02

0xa3d7,	// (0x0004796b) call_type_pane_cp023

0xa3df,	// (0x00047973) popup_call_audio_wait_window_g1

0xa3e7,	// (0x0004797b) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004c689) popup_call_audio_wait_window_g

0xa3ef,	// (0x00047983) popup_call_audio_wait_window_t3

0xa3fd,	// (0x00047991) bg_popup_call_pane_cp03_ParamLimits

0xa3fd,	// (0x00047991) bg_popup_call_pane_cp03

0xa45d,	// (0x000479f1) call_thumbnail_pane_cp011_ParamLimits

0xa45d,	// (0x000479f1) call_thumbnail_pane_cp011

0xa469,	// (0x000479fd) call_type_pane_cp034_ParamLimits

0xa469,	// (0x000479fd) call_type_pane_cp034

0xa4a5,	// (0x00047a39) popup_call_audio_second_window_g1_ParamLimits

0xa4a5,	// (0x00047a39) popup_call_audio_second_window_g1

0xa4e1,	// (0x00047a75) popup_call_audio_second_window_g2_ParamLimits

0xa4e1,	// (0x00047a75) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004c68e) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004c68e) popup_call_audio_second_window_g

0xa51d,	// (0x00047ab1) popup_call_audio_second_window_t1_ParamLimits

0xa51d,	// (0x00047ab1) popup_call_audio_second_window_t1

0xa59e,	// (0x00047b32) popup_call_audio_second_window_t2_ParamLimits

0xa59e,	// (0x00047b32) popup_call_audio_second_window_t2

0xa5d4,	// (0x00047b68) popup_call_audio_second_window_t3_ParamLimits

0xa5d4,	// (0x00047b68) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004c693) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004c693) popup_call_audio_second_window_t

0xa3cd,	// (0x00047961) bg_popup_call_pane_cp04

0xa60a,	// (0x00047b9e) list_conf_pane

0xa612,	// (0x00047ba6) popup_call_audio_conf_window_t1

0xa620,	// (0x00047bb4) call_thumbnail_pane_g1

0xa628,	// (0x00047bbc) bg_pinb_pane_ParamLimits

0xa628,	// (0x00047bbc) bg_pinb_pane

0xa636,	// (0x00047bca) find_pinb_pane

0xa63f,	// (0x00047bd3) listscroll_pinb_pane_ParamLimits

0xa63f,	// (0x00047bd3) listscroll_pinb_pane

0xa64e,	// (0x00047be2) pinb_bg_pane_g1

0x244f,	// (0x0003f9e3) pinb_bg_pane_g2

0x245b,	// (0x0003f9ef) pinb_bg_pane_g3

0x2467,	// (0x0003f9fb) pinb_bg_pane_g4

0x2473,	// (0x0003fa07) pinb_bg_pane_g5

0x247f,	// (0x0003fa13) pinb_bg_pane_g6

0x248a,	// (0x0003fa1e) pinb_bg_pane_g7

0x2495,	// (0x0003fa29) pinb_bg_pane_g8

0x24a0,	// (0x0003fa34) pinb_bg_pane_g9

0x24aa,	// (0x0003fa3e) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004c69a) pinb_bg_pane_g

0x24c7,	// (0x0003fa5b) grid_pinb_pane

0x24d2,	// (0x0003fa66) list_pinb_pane

0x24dd,	// (0x0003fa71) scroll_pane_cp01_ParamLimits

0x24dd,	// (0x0003fa71) scroll_pane_cp01

0xa658,	// (0x00047bec) find_pinb_pane_g1_ParamLimits

0xa658,	// (0x00047bec) find_pinb_pane_g1

0xa670,	// (0x00047c04) find_pinb_pane_t1

0xa682,	// (0x00047c16) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004c6b4) find_pinb_pane_t

0xa697,	// (0x00047c2b) input_focus_pane_cp01_ParamLimits

0xa697,	// (0x00047c2b) input_focus_pane_cp01

0x24ef,	// (0x0003fa83) cell_pinb_pane_ParamLimits

0x24ef,	// (0x0003fa83) cell_pinb_pane

0xa6ce,	// (0x00047c62) cell_pinb_pane_g1_ParamLimits

0xa6ce,	// (0x00047c62) cell_pinb_pane_g1

0xa6e1,	// (0x00047c75) cell_pinb_pane_g2_ParamLimits

0xa6e1,	// (0x00047c75) cell_pinb_pane_g2

0xa6ed,	// (0x00047c81) cell_pinb_pane_g3_ParamLimits

0xa6ed,	// (0x00047c81) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004c6b9) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004c6b9) cell_pinb_pane_g

0xa3cd,	// (0x00047961) grid_highlight_pane_cp01

0x251e,	// (0x0003fab2) list_pinb_item_pane_ParamLimits

0x251e,	// (0x0003fab2) list_pinb_item_pane

0xa3cd,	// (0x00047961) list_highlight_pane_cp02

0x2548,	// (0x0003fadc) list_pinb_item_pane_g1_ParamLimits

0x2548,	// (0x0003fadc) list_pinb_item_pane_g1

0x2555,	// (0x0003fae9) list_pinb_item_pane_g2_ParamLimits

0x2555,	// (0x0003fae9) list_pinb_item_pane_g2

0x2561,	// (0x0003faf5) list_pinb_item_pane_g3_ParamLimits

0x2561,	// (0x0003faf5) list_pinb_item_pane_g3

0x2572,	// (0x0003fb06) list_pinb_item_pane_g4_ParamLimits

0x2572,	// (0x0003fb06) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004c6c0) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004c6c0) list_pinb_item_pane_g

0x257e,	// (0x0003fb12) list_pinb_item_pane_t1_ParamLimits

0x257e,	// (0x0003fb12) list_pinb_item_pane_t1

0x25af,	// (0x0003fb43) calc_display_pane

0x25cd,	// (0x0003fb61) calc_paper_pane

0x25e9,	// (0x0003fb7d) grid_calc_pane

0xa3cd,	// (0x00047961) bg_list_pane_cp01

0x2615,	// (0x0003fba9) clock_g1

0x261d,	// (0x0003fbb1) clock_g2

0x0001,

0xf135,	// (0x0004c6c9) clock_g

0x2627,	// (0x0003fbbb) clock_t1_ParamLimits

0x2627,	// (0x0003fbbb) clock_t1

0x263c,	// (0x0003fbd0) clock_t2_ParamLimits

0x263c,	// (0x0003fbd0) clock_t2

0x264e,	// (0x0003fbe2) clock_t3_ParamLimits

0x264e,	// (0x0003fbe2) clock_t3

0x2660,	// (0x0003fbf4) clock_t4_ParamLimits

0x2660,	// (0x0003fbf4) clock_t4

0x2672,	// (0x0003fc06) clock_t5_ParamLimits

0x2672,	// (0x0003fc06) clock_t5

0x2687,	// (0x0003fc1b) clock_t6_ParamLimits

0x2687,	// (0x0003fc1b) clock_t6

0x2699,	// (0x0003fc2d) clock_t7_ParamLimits

0x2699,	// (0x0003fc2d) clock_t7

0x26ab,	// (0x0003fc3f) clock_t8_ParamLimits

0x26ab,	// (0x0003fc3f) clock_t8

0x26c1,	// (0x0003fc55) clock_t9_ParamLimits

0x26c1,	// (0x0003fc55) clock_t9

0x0008,

0xf13a,	// (0x0004c6ce) clock_t_ParamLimits

0xf13a,	// (0x0004c6ce) clock_t

0xa6f9,	// (0x00047c8d) popup_clock_analogue_window_cp02

0xa6f9,	// (0x00047c8d) popup_clock_digital_window_cp01

0xa701,	// (0x00047c95) listscroll_help_pane

0xa3cd,	// (0x00047961) phob_pre_status_pane

0xa70b,	// (0x00047c9f) grid_qdial_pane

0xa628,	// (0x00047bbc) listscroll_mce_pane

0xa628,	// (0x00047bbc) bg_notes_pane

0xa715,	// (0x00047ca9) list_notes_pane

0x26d7,	// (0x0003fc6b) scroll_pane_cp06

0xa723,	// (0x00047cb7) bg_calc_paper_pane

0x26e6,	// (0x0003fc7a) list_calc_pane

0xa737,	// (0x00047ccb) bg_calc_display_pane

0x2700,	// (0x0003fc94) calc_display_pane_t1

0x2715,	// (0x0003fca9) calc_display_pane_t2

0x272a,	// (0x0003fcbe) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004c6e1) calc_display_pane_t

0x273c,	// (0x0003fcd0) cell_calc_pane_ParamLimits

0x273c,	// (0x0003fcd0) cell_calc_pane

0xa743,	// (0x00047cd7) bg_calc_paper_pane_g1

0xa74f,	// (0x00047ce3) bg_calc_paper_pane_g2

0xa75b,	// (0x00047cef) bg_calc_paper_pane_g3

0xa767,	// (0x00047cfb) bg_calc_paper_pane_g4

0xa773,	// (0x00047d07) bg_calc_paper_pane_g5

0x2769,	// (0x0003fcfd) bg_calc_paper_pane_g6

0x277a,	// (0x0003fd0e) bg_calc_paper_pane_g7

0x278b,	// (0x0003fd1f) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004c6e8) bg_calc_paper_pane_g

0x279c,	// (0x0003fd30) calc_bg_paper_pane_g9

0x27ad,	// (0x0003fd41) list_calc_item_pane_ParamLimits

0x27ad,	// (0x0003fd41) list_calc_item_pane

0xa77f,	// (0x00047d13) list_calc_item_pane_g1

0x27e1,	// (0x0003fd75) list_calc_item_pane_t1_ParamLimits

0x27e1,	// (0x0003fd75) list_calc_item_pane_t1

0x27f3,	// (0x0003fd87) list_calc_item_pane_t2_ParamLimits

0x27f3,	// (0x0003fd87) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004c6f9) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004c6f9) list_calc_item_pane_t

0xa78c,	// (0x00047d20) cell_calc_pane_g1

0xa796,	// (0x00047d2a) grid_highlight_pane_cp02

0xa7b8,	// (0x00047d4c) bg_calc_display_pane_g1

0x2823,	// (0x0003fdb7) bg_calc_display_pane_g2

0xa7c1,	// (0x00047d55) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004c703) bg_calc_display_pane_g

0x282d,	// (0x0003fdc1) cell_qdial_pane_ParamLimits

0x282d,	// (0x0003fdc1) cell_qdial_pane

0x2841,	// (0x0003fdd5) cell_qdial_pane_g1_ParamLimits

0x2841,	// (0x0003fdd5) cell_qdial_pane_g1

0x284e,	// (0x0003fde2) cell_qdial_pane_g2_ParamLimits

0x284e,	// (0x0003fde2) cell_qdial_pane_g2

0xa7ca,	// (0x00047d5e) cell_qdial_pane_g3_ParamLimits

0xa7ca,	// (0x00047d5e) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004c70a) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004c70a) cell_qdial_pane_g

0x286b,	// (0x0003fdff) cell_qdial_pane_t1_ParamLimits

0x286b,	// (0x0003fdff) cell_qdial_pane_t1

0x2883,	// (0x0003fe17) cell_qdial_pane_t2_ParamLimits

0x2883,	// (0x0003fe17) cell_qdial_pane_t2

0x2896,	// (0x0003fe2a) cell_qdial_pane_t3_ParamLimits

0x2896,	// (0x0003fe2a) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004c713) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004c713) cell_qdial_pane_t

0xa3cd,	// (0x00047961) grid_highlight_pane_cp04

0xa7d6,	// (0x00047d6a) thumbnail_qdial_pane_ParamLimits

0xa7d6,	// (0x00047d6a) thumbnail_qdial_pane

0xa832,	// (0x00047dc6) list_help_pane

0xa83b,	// (0x00047dcf) scroll_pane_cp02

0x28a9,	// (0x0003fe3d) help_list_pane_t1_ParamLimits

0x28a9,	// (0x0003fe3d) help_list_pane_t1

0x28e3,	// (0x0003fe77) bg_notes_pane_g2

0x28eb,	// (0x0003fe7f) bg_notes_pane_g3

0x28f3,	// (0x0003fe87) notes_bg_pane_g1

0x28fb,	// (0x0003fe8f) notes_bg_pane_g4

0x2903,	// (0x0003fe97) notes_bg_pane_g5

0x290b,	// (0x0003fe9f) notes_bg_pane_g6

0x2913,	// (0x0003fea7) notes_bg_pane_g7

0x291b,	// (0x0003feaf) notes_bg_pane_g8

0x2923,	// (0x0003feb7) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004c731) notes_bg_pane_g

0x292b,	// (0x0003febf) list_notes_text_pane_ParamLimits

0x292b,	// (0x0003febf) list_notes_text_pane

0xa844,	// (0x00047dd8) list_notes_text_pane_g1

0x0cbf,	// (0x0003e253) list_notes_text_pane_t1

0x295a,	// (0x0003feee) listscroll_cale_week_pane

0x297f,	// (0x0003ff13) bg_cale_heading_pane

0xa867,	// (0x00047dfb) bg_cale_pane_cp01

0x29a1,	// (0x0003ff35) cale_week_corner_pane

0x29bb,	// (0x0003ff4f) cale_week_day_heading_pane

0x29dd,	// (0x0003ff71) cale_week_scroll_pane_g1

0x29fa,	// (0x0003ff8e) cale_week_scroll_pane_g2

0x2a0d,	// (0x0003ffa1) cale_week_scroll_pane_g3

0x2a20,	// (0x0003ffb4) cale_week_scroll_pane_g4

0x2a33,	// (0x0003ffc7) cale_week_scroll_pane_g5

0x2a46,	// (0x0003ffda) cale_week_scroll_pane_g6

0x2a59,	// (0x0003ffed) cale_week_scroll_pane_g7

0x2a6c,	// (0x00040000) cale_week_scroll_pane_g8

0x2a81,	// (0x00040015) cale_week_scroll_pane_g9

0x2a94,	// (0x00040028) cale_week_scroll_pane_g10

0x2aa7,	// (0x0004003b) cale_week_scroll_pane_g11

0x2aba,	// (0x0004004e) cale_week_scroll_pane_g12

0x2ad1,	// (0x00040065) cale_week_scroll_pane_g13

0x2aec,	// (0x00040080) cale_week_scroll_pane_g14

0x2b07,	// (0x0004009b) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004c740) cale_week_scroll_pane_g

0x2b37,	// (0x000400cb) cale_week_time_pane

0x2b4c,	// (0x000400e0) grid_cale_week_pane

0xa897,	// (0x00047e2b) scroll_pane_cp08

0x2b6d,	// (0x00040101) cell_cale_week_pane_ParamLimits

0x2b6d,	// (0x00040101) cell_cale_week_pane

0x2bd1,	// (0x00040165) cale_week_day_heading_pane_t1

0x2c0c,	// (0x000401a0) cale_week_day_heading_pane_t2

0x2c47,	// (0x000401db) cale_week_day_heading_pane_t3

0x2c82,	// (0x00040216) cale_week_day_heading_pane_t4

0x2cbd,	// (0x00040251) cale_week_day_heading_pane_t5

0x2cf8,	// (0x0004028c) cale_week_day_heading_pane_t6

0x2d33,	// (0x000402c7) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004c761) cale_week_day_heading_pane_t

0xa8b4,	// (0x00047e48) bg_cale_side_pane

0x2d6e,	// (0x00040302) cale_week_time_pane_t1

0x2d88,	// (0x0004031c) cale_week_time_pane_t2

0x2da2,	// (0x00040336) cale_week_time_pane_t3

0x2dbc,	// (0x00040350) cale_week_time_pane_t4

0x2dd6,	// (0x0004036a) cale_week_time_pane_t5

0x2df2,	// (0x00040386) cale_week_time_pane_t6

0x2e14,	// (0x000403a8) cale_week_time_pane_t7

0x2e38,	// (0x000403cc) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004c770) cale_week_time_pane_t

0x2e5e,	// (0x000403f2) cell_cale_week_pane_g2

0x2e82,	// (0x00040416) cell_cale_week_pane_g3_ParamLimits

0x2e82,	// (0x00040416) cell_cale_week_pane_g3

0xa8c2,	// (0x00047e56) grid_highlight_pane_cp07

0xa8ca,	// (0x00047e5e) listscroll_gms_pane

0xa8d4,	// (0x00047e68) grid_gms_pane

0xa8dd,	// (0x00047e71) listscroll_gms_pane_g1

0xa8e5,	// (0x00047e79) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004c781) listscroll_gms_pane_g

0x2e9a,	// (0x0004042e) scroll_pane_cp010

0x2ea5,	// (0x00040439) cell_gms_pane_ParamLimits

0x2ea5,	// (0x00040439) cell_gms_pane

0x2eb5,	// (0x00040449) cell_gms_pane_g1

0xa8ed,	// (0x00047e81) cell_gms_pane_g2

0xa844,	// (0x00047dd8) cell_gms_pane_g3

0xa8f5,	// (0x00047e89) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004c786) cell_gms_pane_g

0xa8fe,	// (0x00047e92) grid_highlight_pane_cp09

0x52ba,	// (0x0004284e) phob_pre_status_pane_g1

0x52c2,	// (0x00042856) phob_pre_status_pane_g2

0x52ca,	// (0x0004285e) phob_pre_status_pane_g3

0x52d2,	// (0x00042866) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004cb75) phob_pre_status_pane_g

0x52e2,	// (0x00042876) phob_pre_status_pane_t1

0x52f2,	// (0x00042886) phob_pre_status_pane_t2

0x5302,	// (0x00042896) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004cb80) phob_pre_status_pane_t

0xa3cd,	// (0x00047961) bg_list_pane_cp05

0x2ec5,	// (0x00040459) grid_vorec_pane

0x2ecf,	// (0x00040463) vorec_t1

0x2edd,	// (0x00040471) vorec_t2

0x2eeb,	// (0x0004047f) vorec_t3

0x2ef9,	// (0x0004048d) vorec_t4

0x2f07,	// (0x0004049b) vorec_t5

0x2f15,	// (0x000404a9) vorec_t6

0x0006,

0xf1fb,	// (0x0004c78f) vorec_t

0x2f31,	// (0x000404c5) wait_bar_pane_cp01

0x2f39,	// (0x000404cd) cell_vorec_pane_ParamLimits

0x2f39,	// (0x000404cd) cell_vorec_pane

0x2f4c,	// (0x000404e0) cell_vorec_pane_g1

0xa3cd,	// (0x00047961) grid_highlight_pane_cp05

0x2f66,	// (0x000404fa) cams_zoom_pane

0x2f72,	// (0x00040506) image_vga_pane

0x2f81,	// (0x00040515) main_camera_pane_g1

0x2f8f,	// (0x00040523) main_camera_pane_g2

0x2f9b,	// (0x0004052f) main_camera_pane_g3

0x2fa7,	// (0x0004053b) main_camera_pane_g4

0x2fb3,	// (0x00040547) main_camera_pane_g5

0x2fbf,	// (0x00040553) main_camera_pane_g6

0x2fcb,	// (0x0004055f) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004c79e) main_camera_pane_g

0x2fd7,	// (0x0004056b) main_camera_pane_t1

0x2fe9,	// (0x0004057d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004c7af) main_camera_pane_t

0x300a,	// (0x0004059e) cams_zoom_pane_cp_ParamLimits

0x300a,	// (0x0004059e) cams_zoom_pane_cp

0x302e,	// (0x000405c2) image_cif_pane_ParamLimits

0x302e,	// (0x000405c2) image_cif_pane

0x304c,	// (0x000405e0) image_subqcif_pane

0x3054,	// (0x000405e8) main_video_pane_g1_ParamLimits

0x3054,	// (0x000405e8) main_video_pane_g1

0x3074,	// (0x00040608) main_video_pane_g2_ParamLimits

0x3074,	// (0x00040608) main_video_pane_g2

0x30a4,	// (0x00040638) main_video_pane_g3_ParamLimits

0x30a4,	// (0x00040638) main_video_pane_g3

0x30cd,	// (0x00040661) main_video_pane_g4_ParamLimits

0x30cd,	// (0x00040661) main_video_pane_g4

0x30f6,	// (0x0004068a) main_video_pane_g5_ParamLimits

0x30f6,	// (0x0004068a) main_video_pane_g5

0xa912,	// (0x00047ea6) main_video_pane_g6_ParamLimits

0xa912,	// (0x00047ea6) main_video_pane_g6

0x0006,

0xf220,	// (0x0004c7b4) main_video_pane_g_ParamLimits

0xf220,	// (0x0004c7b4) main_video_pane_g

0x3118,	// (0x000406ac) main_video_pane_t1_ParamLimits

0x3118,	// (0x000406ac) main_video_pane_t1

0xa92c,	// (0x00047ec0) cams_zoom_pane_g1

0xa935,	// (0x00047ec9) cams_zoom_pane_g2

0xa93e,	// (0x00047ed2) cams_zoom_pane_g3

0xa947,	// (0x00047edb) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004c7c3) cams_zoom_pane_g

0x3162,	// (0x000406f6) grid_cams_pane

0x3170,	// (0x00040704) linegrid_cams_pane

0x317e,	// (0x00040712) cell_cams_pane_ParamLimits

0x317e,	// (0x00040712) cell_cams_pane

0xa950,	// (0x00047ee4) cams_burst_image_pane

0xa958,	// (0x00047eec) cell_cams_pane_g1

0xa3cd,	// (0x00047961) grid_highlight_pane_cp03

0xa78c,	// (0x00047d20) mp_bg_pane_g1

0xa3cd,	// (0x00047961) bg_list_pane_cp03

0xc6ba,	// (0x00049c4e) bg_mp_pane

0xc6c2,	// (0x00049c56) grid_mp_pane

0xc6ca,	// (0x00049c5e) media_player_g1

0xc6d2,	// (0x00049c66) media_player_t1

0xc6e0,	// (0x00049c74) media_player_t2

0xc6ee,	// (0x00049c82) media_player_t3

0xc6fc,	// (0x00049c90) media_player_t4

0xc70a,	// (0x00049c9e) media_player_t5

0xc718,	// (0x00049cac) media_player_t6

0xc726,	// (0x00049cba) media_player_t7

0x0006,

0xf5cb,	// (0x0004cb5f) media_player_t

0xc734,	// (0x00049cc8) wait_bar_pane_cp02

0xf5b0,	// (0x0004cb44) main_usb_pane_t

0x52b1,	// (0x00042845) cell_mp_pane

0xa78c,	// (0x00047d20) cell_mp_pane_g1

0xa3cd,	// (0x00047961) grid_highlight_pane_cp06

0xa960,	// (0x00047ef4) grid_skin_colour_pane

0xa968,	// (0x00047efc) list_highlight_pane_cp03

0x3191,	// (0x00040725) skin_g1

0xa970,	// (0x00047f04) skin_t1

0xa97f,	// (0x00047f13) skin_t2

0x0001,

0xf264,	// (0x0004c7f8) skin_t

0x319b,	// (0x0004072f) cell_skin_colour_pane_ParamLimits

0x319b,	// (0x0004072f) cell_skin_colour_pane

0xa98d,	// (0x00047f21) cell_skin_colour_pane_g1

0x321f,	// (0x000407b3) call_video_g1_ParamLimits

0x321f,	// (0x000407b3) call_video_g1

0x322f,	// (0x000407c3) call_video_g2_ParamLimits

0x322f,	// (0x000407c3) call_video_g2

0x0001,

0xf269,	// (0x0004c7fd) call_video_g_ParamLimits

0xf269,	// (0x0004c7fd) call_video_g

0x3289,	// (0x0004081d) call_video_uplink_pane_cp1_ParamLimits

0x3289,	// (0x0004081d) call_video_uplink_pane_cp1

0xa99f,	// (0x00047f33) call_video_uplink_pane_cp2

0x3355,	// (0x000408e9) video_down_crop_pane_ParamLimits

0x3355,	// (0x000408e9) video_down_crop_pane

0x3447,	// (0x000409db) video_down_pane_ParamLimits

0x3447,	// (0x000409db) video_down_pane

0xa9a7,	// (0x00047f3b) video_down_subqcif_pane_ParamLimits

0xa9a7,	// (0x00047f3b) video_down_subqcif_pane

0xa9bf,	// (0x00047f53) video_down_subqcif_pane_cp_ParamLimits

0xa9bf,	// (0x00047f53) video_down_subqcif_pane_cp

0xa9e5,	// (0x00047f79) im_reading_pane_ParamLimits

0xa9e5,	// (0x00047f79) im_reading_pane

0x3569,	// (0x00040afd) im_writing_pane_ParamLimits

0x3569,	// (0x00040afd) im_writing_pane

0x3587,	// (0x00040b1b) im_reading_pane_t1

0xa9ff,	// (0x00047f93) list_im_pane

0xaa10,	// (0x00047fa4) scroll_pane_cp07

0x35e2,	// (0x00040b76) im_writing_pane_t1_ParamLimits

0x35e2,	// (0x00040b76) im_writing_pane_t1

0xaa29,	// (0x00047fbd) im_writing_pane_t2_ParamLimits

0xaa29,	// (0x00047fbd) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004c807) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004c807) im_writing_pane_t

0xa3cd,	// (0x00047961) input_focus_pane_cp04

0xa3cd,	// (0x00047961) input_focus_pane_cp05

0x35f4,	// (0x00040b88) list_im_single_pane_ParamLimits

0x35f4,	// (0x00040b88) list_im_single_pane

0x361c,	// (0x00040bb0) list_single_im_pane_t1

0x5275,	// (0x00042809) blid_accuracy_pane

0x527d,	// (0x00042811) blid_compass_pane

0x5287,	// (0x0004281b) main_location_t1

0x5295,	// (0x00042829) main_location_t2

0x52a3,	// (0x00042837) main_location_t3

0x0002,

0xf5da,	// (0x0004cb6e) main_location_t

0xa3cd,	// (0x00047961) aid_levels_location

0xa78c,	// (0x00047d20) blid_accuracy_pane_g1

0xa78c,	// (0x00047d20) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004c869) blid_accuracy_pane_g

0xaa71,	// (0x00048005) wml_content_pane

0xaaaf,	// (0x00048043) wml_button_pane_ParamLimits

0xaaaf,	// (0x00048043) wml_button_pane

0x362b,	// (0x00040bbf) wml_list_single_large_pane_ParamLimits

0x362b,	// (0x00040bbf) wml_list_single_large_pane

0x365c,	// (0x00040bf0) wml_list_single_medium_pane_ParamLimits

0x365c,	// (0x00040bf0) wml_list_single_medium_pane

0x3694,	// (0x00040c28) wml_list_single_small_pane_ParamLimits

0x3694,	// (0x00040c28) wml_list_single_small_pane

0xaac3,	// (0x00048057) wml_selection_box_pane_ParamLimits

0xaac3,	// (0x00048057) wml_selection_box_pane

0xaad6,	// (0x0004806a) wml_list_single_pane_t1

0xaae5,	// (0x00048079) wml_list_single_medium_pane_t1

0xaaf4,	// (0x00048088) wml_list_single_large_pane_t1

0xab03,	// (0x00048097) input_focus_pane_cp02_ParamLimits

0xab03,	// (0x00048097) input_focus_pane_cp02

0xab16,	// (0x000480aa) wml_selection_box_pane_g1

0xab1f,	// (0x000480b3) wml_selection_box_pane_t1_ParamLimits

0xab1f,	// (0x000480b3) wml_selection_box_pane_t1

0xa628,	// (0x00047bbc) bg_wml_button_pane_ParamLimits

0xa628,	// (0x00047bbc) bg_wml_button_pane

0xab37,	// (0x000480cb) wml_button_pane_g1

0xab3f,	// (0x000480d3) wml_button_pane_t1

0xab37,	// (0x000480cb) wml_button_bg_pane_g1

0xab4f,	// (0x000480e3) wml_button_bg_pane_g2

0xab57,	// (0x000480eb) wml_button_bg_pane_g3

0xab5f,	// (0x000480f3) wml_button_bg_pane_g4

0xab67,	// (0x000480fb) wml_button_bg_pane_g5

0xab6f,	// (0x00048103) wml_button_bg_pane_g6

0xab77,	// (0x0004810b) wml_button_bg_pane_g7

0xab7f,	// (0x00048113) wml_button_bg_pane_g8

0xab87,	// (0x0004811b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004c80c) wml_button_bg_pane_g

0x36d5,	// (0x00040c69) bg_list_pane_cp02

0xab8f,	// (0x00048123) mce_header_pane_ParamLimits

0xab8f,	// (0x00048123) mce_header_pane

0xaba5,	// (0x00048139) mce_icon_pane

0xaba5,	// (0x00048139) mce_image_pane

0xabae,	// (0x00048142) mce_text_pane_ParamLimits

0xabae,	// (0x00048142) mce_text_pane

0x36df,	// (0x00040c73) scroll_pane_cp03

0xaaa7,	// (0x0004803b) scroll_pane_cp04

0xabc1,	// (0x00048155) scroll_pane_cp05_ParamLimits

0xabc1,	// (0x00048155) scroll_pane_cp05

0x36e9,	// (0x00040c7d) mce_header_field_pane_ParamLimits

0x36e9,	// (0x00040c7d) mce_header_field_pane

0x3709,	// (0x00040c9d) mce_header_field_pane_2_ParamLimits

0x3709,	// (0x00040c9d) mce_header_field_pane_2

0x371f,	// (0x00040cb3) mce_header_field_pane_3

0x3727,	// (0x00040cbb) list_single_mce_message_pane_ParamLimits

0x3727,	// (0x00040cbb) list_single_mce_message_pane

0x3759,	// (0x00040ced) list_single_mce_smart_pane_ParamLimits

0x3759,	// (0x00040ced) list_single_mce_smart_pane

0xabcd,	// (0x00048161) input_focus_pane_cp03

0xabd6,	// (0x0004816a) list_header_data_pane

0x3796,	// (0x00040d2a) mce_header_field_pane_t1

0x37a6,	// (0x00040d3a) list_single_mce_header_pane_ParamLimits

0x37a6,	// (0x00040d3a) list_single_mce_header_pane

0xabde,	// (0x00048172) list_single_mce_header_pane_t1

0xabed,	// (0x00048181) list_single_mce_message_pane_g1

0xabf5,	// (0x00048189) list_single_mce_message_pane_t1

0x37fd,	// (0x00040d91) bg_cale_heading_pane_cp01_ParamLimits

0x37fd,	// (0x00040d91) bg_cale_heading_pane_cp01

0xac03,	// (0x00048197) bg_cale_pane_cp02_ParamLimits

0xac03,	// (0x00048197) bg_cale_pane_cp02

0x3840,	// (0x00040dd4) cale_month_corner_pane

0x385a,	// (0x00040dee) cale_month_day_heading_pane_ParamLimits

0x385a,	// (0x00040dee) cale_month_day_heading_pane

0x38b5,	// (0x00040e49) cale_month_pane_g1_ParamLimits

0x38b5,	// (0x00040e49) cale_month_pane_g1

0x38ed,	// (0x00040e81) cale_month_pane_g2_ParamLimits

0x38ed,	// (0x00040e81) cale_month_pane_g2

0x3918,	// (0x00040eac) cale_month_pane_g3_ParamLimits

0x3918,	// (0x00040eac) cale_month_pane_g3

0x3968,	// (0x00040efc) cale_month_pane_g4_ParamLimits

0x3968,	// (0x00040efc) cale_month_pane_g4

0x39b8,	// (0x00040f4c) cale_month_pane_g5_ParamLimits

0x39b8,	// (0x00040f4c) cale_month_pane_g5

0x3a08,	// (0x00040f9c) cale_month_pane_g6_ParamLimits

0x3a08,	// (0x00040f9c) cale_month_pane_g6

0x3a58,	// (0x00040fec) cale_month_pane_g7_ParamLimits

0x3a58,	// (0x00040fec) cale_month_pane_g7

0x3ac0,	// (0x00041054) cale_month_pane_g8_ParamLimits

0x3ac0,	// (0x00041054) cale_month_pane_g8

0x3b28,	// (0x000410bc) cale_month_pane_g9_ParamLimits

0x3b28,	// (0x000410bc) cale_month_pane_g9

0x3b86,	// (0x0004111a) cale_month_pane_g10_ParamLimits

0x3b86,	// (0x0004111a) cale_month_pane_g10

0x3be4,	// (0x00041178) cale_month_pane_g11_ParamLimits

0x3be4,	// (0x00041178) cale_month_pane_g11

0x3c38,	// (0x000411cc) cale_month_pane_g12_ParamLimits

0x3c38,	// (0x000411cc) cale_month_pane_g12

0x3c8e,	// (0x00041222) cale_month_pane_g13_ParamLimits

0x3c8e,	// (0x00041222) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004c81f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004c81f) cale_month_pane_g

0x3ce4,	// (0x00041278) cale_month_week_pane

0x3cf9,	// (0x0004128d) grid_cale_month_pane_ParamLimits

0x3cf9,	// (0x0004128d) grid_cale_month_pane

0x3d4b,	// (0x000412df) cale_month_day_heading_pane_t1

0x3dd1,	// (0x00041365) cale_month_day_heading_pane_t2

0x3e62,	// (0x000413f6) cale_month_day_heading_pane_t3

0x3ef3,	// (0x00041487) cale_month_day_heading_pane_t4

0x3f84,	// (0x00041518) cale_month_day_heading_pane_t5

0x4015,	// (0x000415a9) cale_month_day_heading_pane_t6

0x40b2,	// (0x00041646) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004c83a) cale_month_day_heading_pane_t

0xa8b4,	// (0x00047e48) bg_cale_side_pane_cp01

0x415b,	// (0x000416ef) cale_month_week_pane_t1

0x4174,	// (0x00041708) cale_month_week_pane_t2

0x418d,	// (0x00041721) cale_month_week_pane_t3

0x41a6,	// (0x0004173a) cale_month_week_pane_t4

0x41c3,	// (0x00041757) cale_month_week_pane_t5

0x41e4,	// (0x00041778) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004c849) cale_month_week_pane_t

0x4205,	// (0x00041799) cell_cale_month_pane_ParamLimits

0x4205,	// (0x00041799) cell_cale_month_pane

0x432b,	// (0x000418bf) cell_cale_month_pane_g1

0x4337,	// (0x000418cb) cell_cale_month_pane_t1_ParamLimits

0x4337,	// (0x000418cb) cell_cale_month_pane_t1

0xa8c2,	// (0x00047e56) grid_highlight_pane_cp08

0xa78c,	// (0x00047d20) main_smil_g1

0x4357,	// (0x000418eb) smil_status_pane

0xac42,	// (0x000481d6) smil_text_pane

0xc5da,	// (0x00049b6e) bg_popup_call3_rect_pane_g8

0xc5e2,	// (0x00049b76) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004cb02) bg_popup_call3_rect_pane_g

0xc829,	// (0x00049dbd) smil_status_volume_pane_g1

0xac4c,	// (0x000481e0) smil_status_pane_t1

0x569d,	// (0x00042c31) volume_smil_pane

0xac63,	// (0x000481f7) list_smil_text_pane

0x436a,	// (0x000418fe) scroll_pane_cp011

0x4375,	// (0x00041909) smil_text_list_pane_t1_ParamLimits

0x4375,	// (0x00041909) smil_text_list_pane_t1

0x4409,	// (0x0004199d) aid_volume_smil_ParamLimits

0x4409,	// (0x0004199d) aid_volume_smil

0xa78c,	// (0x00047d20) smil_volume_pane_g1

0xa78c,	// (0x00047d20) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004c869) smil_volume_pane_g

0x295a,	// (0x0003feee) listscroll_cale_day_pane

0xac6d,	// (0x00048201) bg_cale_pane

0xac85,	// (0x00048219) list_cale_pane

0xaca8,	// (0x0004823c) scroll_pane_cp09

0xacb9,	// (0x0004824d) cale_bg_pane_g1

0xacc1,	// (0x00048255) cale_bg_pane_g2

0xacc9,	// (0x0004825d) cale_bg_pane_g3

0xacd1,	// (0x00048265) cale_bg_pane_g4

0xacd9,	// (0x0004826d) cale_bg_pane_g5

0xace1,	// (0x00048275) cale_bg_pane_g6

0xace9,	// (0x0004827d) cale_bg_pane_g7

0xacf1,	// (0x00048285) cale_bg_pane_g8

0xacf9,	// (0x0004828d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004c86e) cale_bg_pane_g

0x442b,	// (0x000419bf) list_cale_time_pane_ParamLimits

0x442b,	// (0x000419bf) list_cale_time_pane

0xad09,	// (0x0004829d) list_cale_time_pane_g1_ParamLimits

0xad09,	// (0x0004829d) list_cale_time_pane_g1

0xad15,	// (0x000482a9) list_cale_time_pane_g2_ParamLimits

0xad15,	// (0x000482a9) list_cale_time_pane_g2

0x4457,	// (0x000419eb) list_cale_time_pane_g3_ParamLimits

0x4457,	// (0x000419eb) list_cale_time_pane_g3

0x4465,	// (0x000419f9) list_cale_time_pane_g4_ParamLimits

0x4465,	// (0x000419f9) list_cale_time_pane_g4

0x4473,	// (0x00041a07) list_cale_time_pane_g5_ParamLimits

0x4473,	// (0x00041a07) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004c881) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004c881) list_cale_time_pane_g

0xad2f,	// (0x000482c3) list_cale_time_pane_t1_ParamLimits

0xad2f,	// (0x000482c3) list_cale_time_pane_t1

0xad57,	// (0x000482eb) list_cale_time_pane_t2_ParamLimits

0xad57,	// (0x000482eb) list_cale_time_pane_t2

0x4715,	// (0x00041ca9) aid_blid_cardinal_pane

0x4757,	// (0x00041ceb) compass_pane_t4

0xad7f,	// (0x00048313) list_cale_time_pane_t4_ParamLimits

0xad7f,	// (0x00048313) list_cale_time_pane_t4

0x4765,	// (0x00041cf9) compass_pane_t5

0x4775,	// (0x00041d09) compass_pane_t6

0x4783,	// (0x00041d17) compass_pane_t7

0xb24c,	// (0x000487e0) navi_pane_cc_t1

0xb431,	// (0x000489c5) aid_phob_thumbnail_center_pane

0x4d6e,	// (0x00042302) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004c88e) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004c88e) list_cale_time_pane_t

0xa024,	// (0x000475b8) bg_popup_window_pane_cp02_ParamLimits

0xa024,	// (0x000475b8) bg_popup_window_pane_cp02

0xada7,	// (0x0004833b) heading_pane_cp01_ParamLimits

0xada7,	// (0x0004833b) heading_pane_cp01

0xadb3,	// (0x00048347) loc_req_pane_ParamLimits

0xadb3,	// (0x00048347) loc_req_pane

0xadc3,	// (0x00048357) loc_type_pane_ParamLimits

0xadc3,	// (0x00048357) loc_type_pane

0xadd5,	// (0x00048369) loc_type_pane_t1_ParamLimits

0xadd5,	// (0x00048369) loc_type_pane_t1

0xadf5,	// (0x00048389) loc_type_pane_t2_ParamLimits

0xadf5,	// (0x00048389) loc_type_pane_t2

0xae07,	// (0x0004839b) loc_type_pane_t3_ParamLimits

0xae07,	// (0x0004839b) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004c895) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004c895) loc_type_pane_t

0xae19,	// (0x000483ad) list_loc_req_pane

0xae23,	// (0x000483b7) scroll_pane_cp012

0x0e07,	// (0x0003e39b) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e07,	// (0x0003e39b) list_single_loc_request_popup_menu_pane

0xae2e,	// (0x000483c2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae2e,	// (0x000483c2) list_single_loc_request_popup_menu_pane_g1

0xae3a,	// (0x000483ce) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae3a,	// (0x000483ce) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004c89c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004c89c) list_single_loc_request_popup_menu_pane_g

0xae46,	// (0x000483da) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae46,	// (0x000483da) list_single_loc_request_popup_menu_pane_t1

0x4481,	// (0x00041a15) bg_popup_window_pane_cp03_ParamLimits

0x4481,	// (0x00041a15) bg_popup_window_pane_cp03

0x448f,	// (0x00041a23) heading_loc_req_pane_ParamLimits

0x448f,	// (0x00041a23) heading_loc_req_pane

0x449b,	// (0x00041a2f) popup_dyc_status_message_window_g1_ParamLimits

0x449b,	// (0x00041a2f) popup_dyc_status_message_window_g1

0x44a7,	// (0x00041a3b) popup_dyc_status_message_window_t1_ParamLimits

0x44a7,	// (0x00041a3b) popup_dyc_status_message_window_t1

0x44b9,	// (0x00041a4d) popup_dyc_status_message_window_t2_ParamLimits

0x44b9,	// (0x00041a4d) popup_dyc_status_message_window_t2

0x44cb,	// (0x00041a5f) popup_dyc_status_message_window_t3_ParamLimits

0x44cb,	// (0x00041a5f) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004c8a1) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004c8a1) popup_dyc_status_message_window_t

0xa3cd,	// (0x00047961) bg_heading_pane_cp01

0xae5c,	// (0x000483f0) heading_loc_req_pane_g1

0xae64,	// (0x000483f8) heading_loc_req_pane_g2

0xae6c,	// (0x00048400) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004c8a8) heading_loc_req_pane_g

0xae74,	// (0x00048408) heading_loc_req_pane_t1

0xae83,	// (0x00048417) bg_popup_sub_pane_cp01_ParamLimits

0xae83,	// (0x00048417) bg_popup_sub_pane_cp01

0xae91,	// (0x00048425) popup_cale_events_window_g1_ParamLimits

0xae91,	// (0x00048425) popup_cale_events_window_g1

0xaeb1,	// (0x00048445) popup_cale_events_window_g2_ParamLimits

0xaeb1,	// (0x00048445) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004c8dc) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004c8dc) popup_cale_events_window_g

0xaed1,	// (0x00048465) popup_cale_events_window_t1_ParamLimits

0xaed1,	// (0x00048465) popup_cale_events_window_t1

0xaee3,	// (0x00048477) popup_cale_events_window_t2_ParamLimits

0xaee3,	// (0x00048477) popup_cale_events_window_t2

0xaf21,	// (0x000484b5) popup_cale_events_window_t3_ParamLimits

0xaf21,	// (0x000484b5) popup_cale_events_window_t3

0xaf5b,	// (0x000484ef) popup_cale_events_window_t4_ParamLimits

0xaf5b,	// (0x000484ef) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004c8e1) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004c8e1) popup_cale_events_window_t

0x44f5,	// (0x00041a89) call_type_pane

0xaf91,	// (0x00048525) popup_call_status_window_g1

0x4501,	// (0x00041a95) popup_call_status_window_g2

0x450d,	// (0x00041aa1) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004c8ea) popup_call_status_window_g

0xaf9f,	// (0x00048533) call_type_pane_g1

0xafa8,	// (0x0004853c) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004c8f1) call_type_pane_g

0xa3cd,	// (0x00047961) bg_popup_sub_pane_cp02

0xafb1,	// (0x00048545) listscroll_popup_wml_pane

0xafb9,	// (0x0004854d) list_wml_pane

0xafc3,	// (0x00048557) scroll_pane_cp013

0xafce,	// (0x00048562) list_single_graphic_popup_wml_pane_ParamLimits

0xafce,	// (0x00048562) list_single_graphic_popup_wml_pane

0xa78c,	// (0x00047d20) list_single_graphic_popup_wml_pane_g1

0xafe2,	// (0x00048576) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004c8f6) list_single_graphic_popup_wml_pane_g

0xafea,	// (0x0004857e) list_single_graphic_popup_wml_pane_t1

0xb000,	// (0x00048594) aid_call_pane

0xa620,	// (0x00047bb4) popup_clock_analogue_window_g1

0xa620,	// (0x00047bb4) popup_clock_analogue_window_g2

0x4519,	// (0x00041aad) popup_clock_analogue_window_g3

0x4519,	// (0x00041aad) popup_clock_analogue_window_g4

0xa78c,	// (0x00047d20) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004c8fb) popup_clock_analogue_window_g

0x4521,	// (0x00041ab5) popup_clock_analogue_window_t1

0x452f,	// (0x00041ac3) clock_digital_number_pane_ParamLimits

0x452f,	// (0x00041ac3) clock_digital_number_pane

0x453b,	// (0x00041acf) clock_digital_number_pane_cp02_ParamLimits

0x453b,	// (0x00041acf) clock_digital_number_pane_cp02

0x4547,	// (0x00041adb) clock_digital_number_pane_cp03_ParamLimits

0x4547,	// (0x00041adb) clock_digital_number_pane_cp03

0x4553,	// (0x00041ae7) clock_digital_number_pane_cp04_ParamLimits

0x4553,	// (0x00041ae7) clock_digital_number_pane_cp04

0x4563,	// (0x00041af7) clock_digital_separator_pane_ParamLimits

0x4563,	// (0x00041af7) clock_digital_separator_pane

0x456f,	// (0x00041b03) popup_clock_digital_window_t1

0xa78c,	// (0x00047d20) clock_digital_number_pane_g1

0xa78c,	// (0x00047d20) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004c869) clock_digital_number_pane_g

0xa78c,	// (0x00047d20) clock_digital_separator_pane_g1

0xa78c,	// (0x00047d20) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004c869) clock_digital_separator_pane_g

0xa3cd,	// (0x00047961) bg_popup_window_pane_cp04

0xb008,	// (0x0004859c) heading_pane_cp03

0xb010,	// (0x000485a4) listscroll_popup_gms_pane

0xb018,	// (0x000485ac) grid_large_graphic_popup_pane

0xb022,	// (0x000485b6) listscroll_popup_gms_pane_g1

0xb02a,	// (0x000485be) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004c906) listscroll_popup_gms_pane_g

0xaaa7,	// (0x0004803b) scroll_pane_cp014

0xb032,	// (0x000485c6) cell_large_graphic_popup_pane_ParamLimits

0xb032,	// (0x000485c6) cell_large_graphic_popup_pane

0xb04a,	// (0x000485de) cell_large_graphic_popup_pane_g1_ParamLimits

0xb04a,	// (0x000485de) cell_large_graphic_popup_pane_g1

0xb056,	// (0x000485ea) cell_large_graphic_popup_pane_g2_ParamLimits

0xb056,	// (0x000485ea) cell_large_graphic_popup_pane_g2

0xb062,	// (0x000485f6) cell_large_graphic_popup_pane_g3_ParamLimits

0xb062,	// (0x000485f6) cell_large_graphic_popup_pane_g3

0xb06f,	// (0x00048603) cell_large_graphic_popup_pane_g4_ParamLimits

0xb06f,	// (0x00048603) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004c90b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004c90b) cell_large_graphic_popup_pane_g

0xb07f,	// (0x00048613) grid_highlight_pane_cp010

0xa78c,	// (0x00047d20) bg_popup_call_pane_g1

0xb089,	// (0x0004861d) list_single_graphic_popup_conf_pane_ParamLimits

0xb089,	// (0x0004861d) list_single_graphic_popup_conf_pane

0xb09c,	// (0x00048630) list_highlight_pane_cp01

0xb0a5,	// (0x00048639) list_single_graphic_popup_conf_pane_g1

0xb0ad,	// (0x00048641) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004c914) list_single_graphic_popup_conf_pane_g

0xb0b5,	// (0x00048649) list_single_graphic_popup_conf_pane_t1

0xb0c3,	// (0x00048657) linegrid_cams_pane_g1

0x458c,	// (0x00041b20) linegrid_cams_pane_g2

0xa844,	// (0x00047dd8) linegrid_cams_pane_g3

0xb0cc,	// (0x00048660) linegrid_cams_pane_g4

0x4595,	// (0x00041b29) linegrid_cams_pane_g5

0x459e,	// (0x00041b32) linegrid_cams_pane_g6

0xa8f5,	// (0x00047e89) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004c919) linegrid_cams_pane_g

0xb0d5,	// (0x00048669) popup_clock_analogue_window

0xb0d5,	// (0x00048669) popup_clock_digital_window

0xa3cd,	// (0x00047961) popup_phob_thumbnail_window

0xa78c,	// (0x00047d20) call_video_uplink_pane_g1

0xb0de,	// (0x00048672) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004c928) call_video_uplink_pane_g

0xa8c2,	// (0x00047e56) video_uplink_pane

0xb0e6,	// (0x0004867a) mce_image_pane_g1

0x45a7,	// (0x00041b3b) mce_image_pane_g2

0x45af,	// (0x00041b43) mce_image_pane_g3

0x45b7,	// (0x00041b4b) mce_image_pane_g4

0x45bf,	// (0x00041b53) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004c92d) mce_image_pane_g

0xb0f0,	// (0x00048684) control_top_pane_stacon_cp01_ParamLimits

0xb0f0,	// (0x00048684) control_top_pane_stacon_cp01

0xb104,	// (0x00048698) uni_indicator_pane_stacon_cp01_ParamLimits

0xb104,	// (0x00048698) uni_indicator_pane_stacon_cp01

0xb115,	// (0x000486a9) bg_popup_sub_pane_cp03

0x45c7,	// (0x00041b5b) chi_dic_find_pane

0x45cf,	// (0x00041b63) listscroll_chi_dic_pane

0x45d8,	// (0x00041b6c) main_pane_chidic_g1

0xb11f,	// (0x000486b3) chi_dic_find_pane_t1

0xb12d,	// (0x000486c1) find_chidic_pane

0xb136,	// (0x000486ca) chi_dic_list_pane_ParamLimits

0xb136,	// (0x000486ca) chi_dic_list_pane

0xb147,	// (0x000486db) scroll_pane_cp020

0xb14f,	// (0x000486e3) find_chidic_pane_t1

0xa3cd,	// (0x00047961) input_focus_pane_cp06

0x45eb,	// (0x00041b7f) list_chi_dic_pane_ParamLimits

0x45eb,	// (0x00041b7f) list_chi_dic_pane

0x4608,	// (0x00041b9c) list_chi_dic_pane_t1_ParamLimits

0x4608,	// (0x00041b9c) list_chi_dic_pane_t1

0xa3cd,	// (0x00047961) list_highlight_pane_cp020

0xb15e,	// (0x000486f2) bg_cale_heading_pane_g1

0x461b,	// (0x00041baf) bg_cale_heading_pane_g2

0x4623,	// (0x00041bb7) bg_cale_heading_pane_g3

0x462b,	// (0x00041bbf) bg_cale_heading_pane_g4

0x4635,	// (0x00041bc9) bg_cale_heading_pane_g5

0x463f,	// (0x00041bd3) bg_cale_heading_pane_g6

0x4647,	// (0x00041bdb) bg_cale_heading_pane_g7

0x464f,	// (0x00041be3) bg_cale_heading_pane_g8

0x4659,	// (0x00041bed) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004c938) bg_cale_heading_pane_g

0xb15e,	// (0x000486f2) bg_cale_side_pane_g1

0x4663,	// (0x00041bf7) bg_cale_side_pane_g2

0x466d,	// (0x00041c01) bg_cale_side_pane_g3

0x4677,	// (0x00041c0b) bg_cale_side_pane_g4

0x4681,	// (0x00041c15) bg_cale_side_pane_g5

0x468b,	// (0x00041c1f) bg_cale_side_pane_g6

0x4695,	// (0x00041c29) bg_cale_side_pane_g7

0x469f,	// (0x00041c33) bg_cale_side_pane_g8

0x46a7,	// (0x00041c3b) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004c94b) bg_cale_side_pane_g

0x46af,	// (0x00041c43) popup_call_status_window_ParamLimits

0x46af,	// (0x00041c43) popup_call_status_window

0xb166,	// (0x000486fa) stacon_top_pane

0xb16e,	// (0x00048702) status_pane_ParamLimits

0xb16e,	// (0x00048702) status_pane

0xb183,	// (0x00048717) status_small_pane

0xb18b,	// (0x0004871f) control_pane

0xa3cd,	// (0x00047961) stacon_bottom_pane

0xb193,	// (0x00048727) list_single_mce_smart_pane_t1_ParamLimits

0xb193,	// (0x00048727) list_single_mce_smart_pane_t1

0xb1a6,	// (0x0004873a) list_single_mce_smart_pane_t2_ParamLimits

0xb1a6,	// (0x0004873a) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004c95e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004c95e) list_single_mce_smart_pane_t

0x46bb,	// (0x00041c4f) compass_pane

0x46c7,	// (0x00041c5b) main_location2_pane_t1

0x46db,	// (0x00041c6f) main_location2_pane_t2

0x46ef,	// (0x00041c83) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004c963) main_location2_pane_t

0xb1c5,	// (0x00048759) compass_pane_g1_ParamLimits

0xb1c5,	// (0x00048759) compass_pane_g1

0x4739,	// (0x00041ccd) compass_pane_t1

0x4748,	// (0x00041cdc) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004c96c) compass_pane_t

0x4793,	// (0x00041d27) text_secondary_cp61

0xb243,	// (0x000487d7) navi_pane_cams_g5

0xb2bf,	// (0x00048853) navi_pane_im_t1

0xb2cd,	// (0x00048861) navi_pane_mp_g1_ParamLimits

0xb2cd,	// (0x00048861) navi_pane_mp_g1

0xb2e1,	// (0x00048875) navi_pane_mp_g2_ParamLimits

0xb2e1,	// (0x00048875) navi_pane_mp_g2

0xb2ed,	// (0x00048881) navi_pane_mp_g3_ParamLimits

0xb2ed,	// (0x00048881) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004c980) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004c980) navi_pane_mp_g

0xb2f9,	// (0x0004888d) navi_pane_mp_t1

0xb307,	// (0x0004889b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004c987) navi_pane_mp_t

0xb372,	// (0x00048906) navi_pane_vt_g1

0xb2f9,	// (0x0004888d) navi_pane_vt_t1

0xb37a,	// (0x0004890e) navi_slider_pane

0xb38a,	// (0x0004891e) zooming_pane

0xb392,	// (0x00048926) navi_slider_pane_g1

0x47ce,	// (0x00041d62) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004c98e) navi_slider_pane_g

0xb3b6,	// (0x0004894a) aid_levels_zoom

0xb3be,	// (0x00048952) zooming_pane_g1

0xb3c6,	// (0x0004895a) zooming_pane_g2

0xb3c6,	// (0x0004895a) zooming_pane_g3

0x0002,

0xf409,	// (0x0004c99d) zooming_pane_g

0xb3ce,	// (0x00048962) level_10_zoom

0xb3d7,	// (0x0004896b) level_11_zoom

0xb3e0,	// (0x00048974) level_1_zoom

0xb3e9,	// (0x0004897d) level_2_zoom

0xb3f2,	// (0x00048986) level_3_zoom

0xb3fb,	// (0x0004898f) level_4_zoom

0xb404,	// (0x00048998) level_5_zoom

0xb40d,	// (0x000489a1) level_6_zoom

0xb416,	// (0x000489aa) level_7_zoom

0xb41f,	// (0x000489b3) level_8_zoom

0xb428,	// (0x000489bc) level_9_zoom

0xb439,	// (0x000489cd) popup_phob_thumbnail_window_g1

0xb441,	// (0x000489d5) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004c9a4) popup_phob_thumbnail_window_g

0xc73c,	// (0x00049cd0) level_1_location

0xc744,	// (0x00049cd8) level_2_location

0xc74c,	// (0x00049ce0) level_3_location

0xc754,	// (0x00049ce8) level_4_location

0xb38a,	// (0x0004891e) level_5_location

0x47e0,	// (0x00041d74) mce_icon_pane_g1

0x47e8,	// (0x00041d7c) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004c9a9) mce_icon_pane_g

0x47f0,	// (0x00041d84) main_mup_pane_g1_ParamLimits

0x47f0,	// (0x00041d84) main_mup_pane_g1

0x4808,	// (0x00041d9c) main_mup_pane_g2_ParamLimits

0x4808,	// (0x00041d9c) main_mup_pane_g2

0x4824,	// (0x00041db8) main_mup_pane_g3_ParamLimits

0x4824,	// (0x00041db8) main_mup_pane_g3

0x4840,	// (0x00041dd4) main_mup_pane_g4_ParamLimits

0x4840,	// (0x00041dd4) main_mup_pane_g4

0x485c,	// (0x00041df0) main_mup_pane_g5_ParamLimits

0x485c,	// (0x00041df0) main_mup_pane_g5

0x487d,	// (0x00041e11) main_mup_pane_g6_ParamLimits

0x487d,	// (0x00041e11) main_mup_pane_g6

0x4899,	// (0x00041e2d) main_mup_pane_g7_ParamLimits

0x4899,	// (0x00041e2d) main_mup_pane_g7

0x48b5,	// (0x00041e49) main_mup_pane_g8_ParamLimits

0x48b5,	// (0x00041e49) main_mup_pane_g8

0x48d1,	// (0x00041e65) main_mup_pane_g9_ParamLimits

0x48d1,	// (0x00041e65) main_mup_pane_g9

0x48f0,	// (0x00041e84) main_mup_pane_g10_ParamLimits

0x48f0,	// (0x00041e84) main_mup_pane_g10

0x490f,	// (0x00041ea3) main_mup_pane_g11_ParamLimits

0x490f,	// (0x00041ea3) main_mup_pane_g11

0x4927,	// (0x00041ebb) main_mup_pane_g12_ParamLimits

0x4927,	// (0x00041ebb) main_mup_pane_g12

0x4935,	// (0x00041ec9) main_mup_pane_g13_ParamLimits

0x4935,	// (0x00041ec9) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004c9ae) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004c9ae) main_mup_pane_g

0x494b,	// (0x00041edf) main_mup_pane_t1_ParamLimits

0x494b,	// (0x00041edf) main_mup_pane_t1

0x4968,	// (0x00041efc) main_mup_pane_t2_ParamLimits

0x4968,	// (0x00041efc) main_mup_pane_t2

0x4982,	// (0x00041f16) main_mup_pane_t3_ParamLimits

0x4982,	// (0x00041f16) main_mup_pane_t3

0x499c,	// (0x00041f30) main_mup_pane_t4_ParamLimits

0x499c,	// (0x00041f30) main_mup_pane_t4

0x49ae,	// (0x00041f42) main_mup_pane_t5_ParamLimits

0x49ae,	// (0x00041f42) main_mup_pane_t5

0x49c0,	// (0x00041f54) main_mup_pane_t6_ParamLimits

0x49c0,	// (0x00041f54) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004c9c9) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004c9c9) main_mup_pane_t

0x49d6,	// (0x00041f6a) mup_progress_pane_ParamLimits

0x49d6,	// (0x00041f6a) mup_progress_pane

0x49e2,	// (0x00041f76) mup_visualizer_pane_ParamLimits

0x49e2,	// (0x00041f76) mup_visualizer_pane

0x4a20,	// (0x00041fb4) mup_volume_pane_ParamLimits

0x4a20,	// (0x00041fb4) mup_volume_pane

0xaf91,	// (0x00048525) mup_visualizer_pane_g1_ParamLimits

0xaf91,	// (0x00048525) mup_visualizer_pane_g1

0xaf91,	// (0x00048525) mup_visualizer_pane_g2_ParamLimits

0xaf91,	// (0x00048525) mup_visualizer_pane_g2

0xb1c5,	// (0x00048759) mup_visualizer_pane_g3_ParamLimits

0xb1c5,	// (0x00048759) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004c9d6) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004c9d6) mup_visualizer_pane_g

0xa78c,	// (0x00047d20) mup_volume_pane_g1

0xb451,	// (0x000489e5) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004c9dd) mup_volume_pane_g

0xa78c,	// (0x00047d20) mup_progress_pane_g1

0xb45a,	// (0x000489ee) mup_progress_pane_g2

0xb463,	// (0x000489f7) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004c9e2) mup_progress_pane_g

0xa3cd,	// (0x00047961) bg_popup_window_pane_cp05

0xb46c,	// (0x00048a00) heading_pane_cp02_ParamLimits

0xb46c,	// (0x00048a00) heading_pane_cp02

0xb486,	// (0x00048a1a) list_popup_blid_pane

0xb48e,	// (0x00048a22) list_blid_sat_info_pane_ParamLimits

0xb48e,	// (0x00048a22) list_blid_sat_info_pane

0xb4a1,	// (0x00048a35) list_blid_sat_info_pane_g1

0xb4a9,	// (0x00048a3d) list_blid_sat_info_pane_t1

0x4b2b,	// (0x000420bf) mup_equalizer_pane_ParamLimits

0x4b2b,	// (0x000420bf) mup_equalizer_pane

0x4b4c,	// (0x000420e0) mup_equalizer_pane_cp1_ParamLimits

0x4b4c,	// (0x000420e0) mup_equalizer_pane_cp1

0x4b6d,	// (0x00042101) mup_equalizer_pane_cp2_ParamLimits

0x4b6d,	// (0x00042101) mup_equalizer_pane_cp2

0x4b8e,	// (0x00042122) mup_equalizer_pane_cp3_ParamLimits

0x4b8e,	// (0x00042122) mup_equalizer_pane_cp3

0x4baf,	// (0x00042143) mup_equalizer_pane_cp4_ParamLimits

0x4baf,	// (0x00042143) mup_equalizer_pane_cp4

0x4bd0,	// (0x00042164) mup_equalizer_pane_cp5

0x4be6,	// (0x0004217a) mup_equalizer_pane_cp6

0x4bfe,	// (0x00042192) mup_equalizer_pane_cp7

0xc65a,	// (0x00049bee) bg_popup_call_poc_act_pane_g9

0xc662,	// (0x00049bf6) bg_popup_call_poc_act_pane_g10

0xc66a,	// (0x00049bfe) bg_popup_call_poc_act_pane_g11

0x000a,

0xa628,	// (0x00047bbc) mup_scale_pane

0xa78c,	// (0x00047d20) mup_scale_pane_g1

0xb4b7,	// (0x00048a4b) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004c9fe) mup_scale_pane_g

0xb4db,	// (0x00048a6f) msg_data_pane

0xb4e3,	// (0x00048a77) scroll_pane_cp017

0x0ef1,	// (0x0003e485) bg_list_pane_cp04_ParamLimits

0x0ef1,	// (0x0003e485) bg_list_pane_cp04

0xb4eb,	// (0x00048a7f) msg_data_pane_g1

0x4c28,	// (0x000421bc) msg_data_pane_g2

0x45af,	// (0x00041b43) msg_data_pane_g3

0x4c30,	// (0x000421c4) msg_data_pane_g4

0x4c38,	// (0x000421cc) msg_data_pane_g5

0x4c40,	// (0x000421d4) msg_data_pane_g6

0x4c48,	// (0x000421dc) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004ca0d) msg_data_pane_g

0x0f11,	// (0x0003e4a5) msg_text_pane_ParamLimits

0x0f11,	// (0x0003e4a5) msg_text_pane

0x4c50,	// (0x000421e4) qrid_highlight_pane_cp011_ParamLimits

0x4c50,	// (0x000421e4) qrid_highlight_pane_cp011

0xa3cd,	// (0x00047961) msg_body_pane

0xa3cd,	// (0x00047961) msg_header_pane

0xb4fc,	// (0x00048a90) input_focus_pane_cp07

0x0f6c,	// (0x0003e500) msg_header_pane_t1_ParamLimits

0x0f6c,	// (0x0003e500) msg_header_pane_t1

0x0f7e,	// (0x0003e512) msg_header_pane_t2_ParamLimits

0x0f7e,	// (0x0003e512) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004ca21) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004ca21) msg_header_pane_t

0xb51d,	// (0x00048ab1) msg_body_pane_g1

0x0f90,	// (0x0003e524) msg_body_pane_t1_ParamLimits

0x0f90,	// (0x0003e524) msg_body_pane_t1

0x0fc1,	// (0x0003e555) msg_body_pane_t2_ParamLimits

0x0fc1,	// (0x0003e555) msg_body_pane_t2

0x0fd3,	// (0x0003e567) msg_body_pane_t3_ParamLimits

0x0fd3,	// (0x0003e567) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004ca26) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004ca26) msg_body_pane_t

0x4cbe,	// (0x00042252) main_viewer_pane_g1_ParamLimits

0x4cbe,	// (0x00042252) main_viewer_pane_g1

0x4cca,	// (0x0004225e) main_viewer_pane_g2_ParamLimits

0x4cca,	// (0x0004225e) main_viewer_pane_g2

0x4cd6,	// (0x0004226a) main_viewer_pane_g3_ParamLimits

0x4cd6,	// (0x0004226a) main_viewer_pane_g3

0x4ce7,	// (0x0004227b) main_viewer_pane_g4_ParamLimits

0x4ce7,	// (0x0004227b) main_viewer_pane_g4

0x4cf8,	// (0x0004228c) main_viewer_pane_g5_ParamLimits

0x4cf8,	// (0x0004228c) main_viewer_pane_g5

0x4cf8,	// (0x0004228c) main_viewer_pane_g7_ParamLimits

0x4cf8,	// (0x0004228c) main_viewer_pane_g7

0x4d0a,	// (0x0004229e) main_viewer_pane_g8_ParamLimits

0x4d0a,	// (0x0004229e) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004ca36) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004ca36) main_viewer_pane_g

0xb525,	// (0x00048ab9) viewer_content_pane_ParamLimits

0xb525,	// (0x00048ab9) viewer_content_pane

0x4d42,	// (0x000422d6) main_postcard_pane_g1_ParamLimits

0x4d42,	// (0x000422d6) main_postcard_pane_g1

0x4d50,	// (0x000422e4) main_postcard_pane_g2_ParamLimits

0x4d50,	// (0x000422e4) main_postcard_pane_g2

0x4d5e,	// (0x000422f2) main_postcard_pane_g3_ParamLimits

0x4d5e,	// (0x000422f2) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004ca47) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004ca47) main_postcard_pane_g

0x4d6e,	// (0x00042302) main_postcard_pane_g4

0xc83c,	// (0x00049dd0) smil_status_volume_pane_g2

0x4d9a,	// (0x0004232e) postcard_pane_ParamLimits

0x4d9a,	// (0x0004232e) postcard_pane

0xaf91,	// (0x00048525) postcard_pane_g1_ParamLimits

0xaf91,	// (0x00048525) postcard_pane_g1

0x4dcc,	// (0x00042360) postcard_pane_g2_ParamLimits

0x4dcc,	// (0x00042360) postcard_pane_g2

0x4dd8,	// (0x0004236c) postcard_pane_g3_ParamLimits

0x4dd8,	// (0x0004236c) postcard_pane_g3

0xb533,	// (0x00048ac7) postcard_pane_g4_ParamLimits

0xb533,	// (0x00048ac7) postcard_pane_g4

0x4de4,	// (0x00042378) postcard_pane_g5_ParamLimits

0x4de4,	// (0x00042378) postcard_pane_g5

0x4df0,	// (0x00042384) postcard_pane_g6_ParamLimits

0x4df0,	// (0x00042384) postcard_pane_g6

0xb541,	// (0x00048ad5) postcard_pane_g7_ParamLimits

0xb541,	// (0x00048ad5) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004ca54) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004ca54) postcard_pane_g

0x4dfc,	// (0x00042390) main_mp2_pane_g1_ParamLimits

0x4dfc,	// (0x00042390) main_mp2_pane_g1

0x4e08,	// (0x0004239c) main_mp2_pane_g2_ParamLimits

0x4e08,	// (0x0004239c) main_mp2_pane_g2

0x4e14,	// (0x000423a8) main_mp2_pane_g3_ParamLimits

0x4e14,	// (0x000423a8) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004ca63) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004ca63) main_mp2_pane_g

0x4e20,	// (0x000423b4) main_mp2_pane_t1_ParamLimits

0x4e20,	// (0x000423b4) main_mp2_pane_t1

0x4e37,	// (0x000423cb) main_mp2_pane_t2_ParamLimits

0x4e37,	// (0x000423cb) main_mp2_pane_t2

0x4e49,	// (0x000423dd) main_mp2_pane_t3_ParamLimits

0x4e49,	// (0x000423dd) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004ca6a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004ca6a) main_mp2_pane_t

0xb54f,	// (0x00048ae3) pec_content_pane_ParamLimits

0xb54f,	// (0x00048ae3) pec_content_pane

0xaaa7,	// (0x0004803b) scroll_pane_cp015

0xb561,	// (0x00048af5) pec_attribute_pane_ParamLimits

0xb561,	// (0x00048af5) pec_attribute_pane

0x4e5b,	// (0x000423ef) pec_content_pane_g1_ParamLimits

0x4e5b,	// (0x000423ef) pec_content_pane_g1

0xb571,	// (0x00048b05) pec_content_pane_t1_ParamLimits

0xb571,	// (0x00048b05) pec_content_pane_t1

0xb583,	// (0x00048b17) pec_content_pane_t2_ParamLimits

0xb583,	// (0x00048b17) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004ca71) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004ca71) pec_content_pane_t

0x4e67,	// (0x000423fb) list_single_graphic_pane_cp01_ParamLimits

0x4e67,	// (0x000423fb) list_single_graphic_pane_cp01

0xa628,	// (0x00047bbc) bg_popup_sub_pane_cp04

0xb595,	// (0x00048b29) popup_mup_playback_window_g1

0xb5a1,	// (0x00048b35) popup_mup_playback_window_t1

0xb5b6,	// (0x00048b4a) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004ca76) popup_mup_playback_window_t

0xb5ed,	// (0x00048b81) main_image_pane_g1_ParamLimits

0xb5ed,	// (0x00048b81) main_image_pane_g1

0xb630,	// (0x00048bc4) scroll_pane_cp018_ParamLimits

0xb630,	// (0x00048bc4) scroll_pane_cp018

0xb648,	// (0x00048bdc) scroll_pane_cp016_ParamLimits

0xb648,	// (0x00048bdc) scroll_pane_cp016

0x4f07,	// (0x0004249b) smil2_image_pane_ParamLimits

0x4f07,	// (0x0004249b) smil2_image_pane

0x4f3b,	// (0x000424cf) smil2_root_pane_ParamLimits

0x4f3b,	// (0x000424cf) smil2_root_pane

0x4f67,	// (0x000424fb) smil2_text_pane_ParamLimits

0x4f67,	// (0x000424fb) smil2_text_pane

0xa3cd,	// (0x00047961) bg_list_pane_cp06

0xb684,	// (0x00048c18) grid_radio_pane

0xa3cd,	// (0x00047961) bg_popup_window_pane_cp06

0xb68c,	// (0x00048c20) main_fmradio_pane_t1

0xb008,	// (0x0004859c) heading_pane_cp04

0xb69a,	// (0x00048c2e) main_fmradio_pane_t2

0xc672,	// (0x00049c06) popup_cale_lunar_info_window_g1

0xb6a8,	// (0x00048c3c) main_fmradio_pane_t3

0xc67a,	// (0x00049c0e) popup_cale_lunar_info_window_g2

0xb6b6,	// (0x00048c4a) main_fmradio_pane_t4

0x0001,

0xb6c4,	// (0x00048c58) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004cb51) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004ca8b) main_fmradio_pane_t

0xb6d2,	// (0x00048c66) wait_bar_pane_cp03

0xb6da,	// (0x00048c6e) cell_fmradio_pane_ParamLimits

0xb6da,	// (0x00048c6e) cell_fmradio_pane

0xb541,	// (0x00048ad5) cell_fmradio_pane_g1_ParamLimits

0xb541,	// (0x00048ad5) cell_fmradio_pane_g1

0xa3cd,	// (0x00047961) grid_highlight_pane_cp011

0xb6ed,	// (0x00048c81) poc_content_pane_ParamLimits

0xb6ed,	// (0x00048c81) poc_content_pane

0xb6ff,	// (0x00048c93) scroll_pane_cp019

0x4fa7,	// (0x0004253b) popup_call_poc_act_window_ParamLimits

0x4fa7,	// (0x0004253b) popup_call_poc_act_window

0x4fb4,	// (0x00042548) popup_call_poc_inact_window_ParamLimits

0x4fb4,	// (0x00042548) popup_call_poc_inact_window

0xf594,	// (0x0004cb28) bg_popup_call_poc_act_pane_g

0xc5ea,	// (0x00049b7e) bg_popup_call_poc_inact_pane_g1

0xc5f2,	// (0x00049b86) bg_popup_call_poc_inact_pane_g2

0xb707,	// (0x00048c9b) popup_call_poc_act_window_g2

0xc5fa,	// (0x00049b8e) bg_popup_call_poc_inact_pane_g3

0xc602,	// (0x00049b96) bg_popup_call_poc_inact_pane_g4

0xc60a,	// (0x00049b9e) bg_popup_call_poc_inact_pane_g5

0xb70f,	// (0x00048ca3) popup_call_poc_act_window_t1_ParamLimits

0xb70f,	// (0x00048ca3) popup_call_poc_act_window_t1

0xb737,	// (0x00048ccb) popup_call_poc_act_window_t2_ParamLimits

0xb737,	// (0x00048ccb) popup_call_poc_act_window_t2

0xb75f,	// (0x00048cf3) popup_call_poc_act_window_t3_ParamLimits

0xb75f,	// (0x00048cf3) popup_call_poc_act_window_t3

0xb787,	// (0x00048d1b) popup_call_poc_act_window_t4_ParamLimits

0xb787,	// (0x00048d1b) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004ca96) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004ca96) popup_call_poc_act_window_t

0xc612,	// (0x00049ba6) bg_popup_call_poc_inact_pane_g6

0xc61a,	// (0x00049bae) bg_popup_call_poc_inact_pane_g7

0xc622,	// (0x00049bb6) bg_popup_call_poc_inact_pane_g8

0xb799,	// (0x00048d2d) popup_call_poc_inact_window_g2

0xc62a,	// (0x00049bbe) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004cb15) bg_popup_call_poc_inact_pane_g

0xb7a1,	// (0x00048d35) popup_call_poc_inact_window_t1_ParamLimits

0xb7a1,	// (0x00048d35) popup_call_poc_inact_window_t1

0xb7b6,	// (0x00048d4a) popup_call_poc_inact_window_t2_ParamLimits

0xb7b6,	// (0x00048d4a) popup_call_poc_inact_window_t2

0xb7cb,	// (0x00048d5f) popup_call_poc_inact_window_t3_ParamLimits

0xb7cb,	// (0x00048d5f) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004ca9f) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004ca9f) popup_call_poc_inact_window_t

0xc7af,	// (0x00049d43) context_pane_ParamLimits

0x55e2,	// (0x00042b76) signal_pane_ParamLimits

0xb38a,	// (0x0004891e) main_call2_pane

0x5555,	// (0x00042ae9) popup_phob_thumbnail2_window_ParamLimits

0x5555,	// (0x00042ae9) popup_phob_thumbnail2_window

0x4c6c,	// (0x00042200) aid_hotspot_pointer_arrow_pane

0x4c74,	// (0x00042208) aid_hotspot_pointer_hand_pane

0x52da,	// (0x0004286e) phob_pre_status_pane_g5

0x2f66,	// (0x000404fa) cams_zoom_pane_ParamLimits

0x2f72,	// (0x00040506) image_vga_pane_ParamLimits

0x2f81,	// (0x00040515) main_camera_pane_g1_ParamLimits

0x2f8f,	// (0x00040523) main_camera_pane_g2_ParamLimits

0x2f9b,	// (0x0004052f) main_camera_pane_g3_ParamLimits

0x2fa7,	// (0x0004053b) main_camera_pane_g4_ParamLimits

0x2fb3,	// (0x00040547) main_camera_pane_g5_ParamLimits

0x2fbf,	// (0x00040553) main_camera_pane_g6_ParamLimits

0x2fcb,	// (0x0004055f) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004c79e) main_camera_pane_g_ParamLimits

0x2fd7,	// (0x0004056b) main_camera_pane_t1_ParamLimits

0x2fe9,	// (0x0004057d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004c7af) main_camera_pane_t_ParamLimits

0xa628,	// (0x00047bbc) bg_popup_preview_window_pane_cp01_ParamLimits

0xa628,	// (0x00047bbc) bg_popup_preview_window_pane_cp01

0xb7e0,	// (0x00048d74) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e0,	// (0x00048d74) popup_phob_thumbnail2_window_g1

0xa3cd,	// (0x00047961) call2_cli_visual_pane

0x4fd0,	// (0x00042564) popup_call2_audio_conf_window_ParamLimits

0x4fd0,	// (0x00042564) popup_call2_audio_conf_window

0x4fe5,	// (0x00042579) popup_call2_audio_first_window_ParamLimits

0x4fe5,	// (0x00042579) popup_call2_audio_first_window

0x5083,	// (0x00042617) popup_call2_audio_in_window_ParamLimits

0x5083,	// (0x00042617) popup_call2_audio_in_window

0x50c5,	// (0x00042659) popup_call2_audio_out_window_ParamLimits

0x50c5,	// (0x00042659) popup_call2_audio_out_window

0x5127,	// (0x000426bb) popup_call2_audio_second_window_ParamLimits

0x5127,	// (0x000426bb) popup_call2_audio_second_window

0x5185,	// (0x00042719) popup_call2_audio_wait_window_ParamLimits

0x5185,	// (0x00042719) popup_call2_audio_wait_window

0xa3cd,	// (0x00047961) bg_popup_call2_act_pane_cp03

0xa60a,	// (0x00047b9e) list_conf_pane_cp

0xb7ec,	// (0x00048d80) popup_call2_audio_conf_window_t1

0xb7fa,	// (0x00048d8e) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fa,	// (0x00048d8e) list_single_graphic_popup_conf2_pane

0xb09c,	// (0x00048630) list_highlight_pane_cp04

0xb80d,	// (0x00048da1) list_single_graphic_popup_conf2_pane_g1

0xb0ad,	// (0x00048641) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004caa6) list_single_graphic_popup_conf2_pane_g

0xb817,	// (0x00048dab) list_single_graphic_popup_conf2_pane_t1

0xb825,	// (0x00048db9) bg_popup_call2_act_pane_cp01_ParamLimits

0xb825,	// (0x00048db9) bg_popup_call2_act_pane_cp01

0xb8af,	// (0x00048e43) call_type_pane_cp05_ParamLimits

0xb8af,	// (0x00048e43) call_type_pane_cp05

0xb903,	// (0x00048e97) popup_call2_audio_second_window_g1_ParamLimits

0xb903,	// (0x00048e97) popup_call2_audio_second_window_g1

0xb957,	// (0x00048eeb) popup_call2_audio_second_window_g2_ParamLimits

0xb957,	// (0x00048eeb) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004caab) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004caab) popup_call2_audio_second_window_g

0xb9bc,	// (0x00048f50) popup_call2_audio_second_window_t1_ParamLimits

0xb9bc,	// (0x00048f50) popup_call2_audio_second_window_t1

0xba77,	// (0x0004900b) popup_call2_audio_second_window_t2_ParamLimits

0xba77,	// (0x0004900b) popup_call2_audio_second_window_t2

0xbaca,	// (0x0004905e) popup_call2_audio_second_window_t3_ParamLimits

0xbaca,	// (0x0004905e) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004cab2) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004cab2) popup_call2_audio_second_window_t

0xa3cd,	// (0x00047961) bg_popup_call2_in_pane_cp02

0xa3d7,	// (0x0004796b) call_type_pane_cp04

0xa3df,	// (0x00047973) popup_call2_audio_wait_window_g1

0xa3e7,	// (0x0004797b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004c689) popup_call2_audio_wait_window_g

0xa3ef,	// (0x00047983) popup_call2_audio_wait_window_t3

0xbbbd,	// (0x00049151) bg_popup_call2_act_pane_ParamLimits

0xbbbd,	// (0x00049151) bg_popup_call2_act_pane

0xbc7d,	// (0x00049211) call_type_pane_cp03_ParamLimits

0xbc7d,	// (0x00049211) call_type_pane_cp03

0xbce1,	// (0x00049275) popup_call2_audio_first_window_g1_ParamLimits

0xbce1,	// (0x00049275) popup_call2_audio_first_window_g1

0xbd51,	// (0x000492e5) popup_call2_audio_first_window_g2_ParamLimits

0xbd51,	// (0x000492e5) popup_call2_audio_first_window_g2

0xaf91,	// (0x00048525) popup_call2_audio_first_window_g3_ParamLimits

0xaf91,	// (0x00048525) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004cabb) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004cabb) popup_call2_audio_first_window_g

0xbe2f,	// (0x000493c3) popup_call2_audio_first_window_t1_ParamLimits

0xbe2f,	// (0x000493c3) popup_call2_audio_first_window_t1

0xbf32,	// (0x000494c6) popup_call2_audio_first_window_t4_ParamLimits

0xbf32,	// (0x000494c6) popup_call2_audio_first_window_t4

0xc015,	// (0x000495a9) popup_call2_audio_first_window_t5_ParamLimits

0xc015,	// (0x000495a9) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004cac6) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004cac6) popup_call2_audio_first_window_t

0xa620,	// (0x00047bb4) bg_popup_call2_act_pane_g1

0xc682,	// (0x00049c16) popup_cale_lunar_info_window_t1

0xc690,	// (0x00049c24) popup_cale_lunar_info_window_t2

0xc69e,	// (0x00049c32) popup_cale_lunar_info_window_t3

0xa3cd,	// (0x00047961) bg_popup_call2_bubble_pane

0xc116,	// (0x000496aa) bg_popup_call2_in_pane_cp01_ParamLimits

0xc116,	// (0x000496aa) bg_popup_call2_in_pane_cp01

0xa0a9,	// (0x0004763d) call_type_pane_cp02

0xc15e,	// (0x000496f2) popup_call2_audio_out_window_g1_ParamLimits

0xc15e,	// (0x000496f2) popup_call2_audio_out_window_g1

0xc18a,	// (0x0004971e) popup_call2_audio_out_window_g2_ParamLimits

0xc18a,	// (0x0004971e) popup_call2_audio_out_window_g2

0xc1b2,	// (0x00049746) popup_call2_audio_out_window_g3_ParamLimits

0xc1b2,	// (0x00049746) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004cacf) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004cacf) popup_call2_audio_out_window_g

0xc1ed,	// (0x00049781) popup_call2_audio_out_window_t1_ParamLimits

0xc1ed,	// (0x00049781) popup_call2_audio_out_window_t1

0xc24c,	// (0x000497e0) popup_call2_audio_out_window_t2_ParamLimits

0xc24c,	// (0x000497e0) popup_call2_audio_out_window_t2

0xc2a0,	// (0x00049834) popup_call2_audio_out_window_t3_ParamLimits

0xc2a0,	// (0x00049834) popup_call2_audio_out_window_t3

0xc2b6,	// (0x0004984a) popup_call2_audio_out_window_t4_ParamLimits

0xc2b6,	// (0x0004984a) popup_call2_audio_out_window_t4

0xc2cc,	// (0x00049860) popup_call2_audio_out_window_t5_ParamLimits

0xc2cc,	// (0x00049860) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004cad8) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004cad8) popup_call2_audio_out_window_t

0xc330,	// (0x000498c4) bg_popup_call2_in_pane_ParamLimits

0xc330,	// (0x000498c4) bg_popup_call2_in_pane

0xc38c,	// (0x00049920) popup_call2_audio_in_window_g1_ParamLimits

0xc38c,	// (0x00049920) popup_call2_audio_in_window_g1

0xc3c4,	// (0x00049958) popup_call2_audio_in_window_g2_ParamLimits

0xc3c4,	// (0x00049958) popup_call2_audio_in_window_g2

0xc3fc,	// (0x00049990) popup_call2_audio_in_window_g3_ParamLimits

0xc3fc,	// (0x00049990) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004cae5) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004cae5) popup_call2_audio_in_window_g

0xc454,	// (0x000499e8) popup_call2_audio_in_window_t1_ParamLimits

0xc454,	// (0x000499e8) popup_call2_audio_in_window_t1

0xc4d4,	// (0x00049a68) popup_call2_audio_in_window_t2_ParamLimits

0xc4d4,	// (0x00049a68) popup_call2_audio_in_window_t2

0xc554,	// (0x00049ae8) popup_call2_audio_in_window_t3_ParamLimits

0xc554,	// (0x00049ae8) popup_call2_audio_in_window_t3

0xc56e,	// (0x00049b02) popup_call2_audio_in_window_t4_ParamLimits

0xc56e,	// (0x00049b02) popup_call2_audio_in_window_t4

0xc580,	// (0x00049b14) popup_call2_audio_in_window_t5_ParamLimits

0xc580,	// (0x00049b14) popup_call2_audio_in_window_t5

0xc595,	// (0x00049b29) popup_call2_audio_in_window_t6_ParamLimits

0xc595,	// (0x00049b29) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004caee) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004caee) popup_call2_audio_in_window_t

0xa620,	// (0x00047bb4) bg_popup_call2_in_pane_g1

0xc6ac,	// (0x00049c40) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004cb56) popup_cale_lunar_info_window_t

0xa628,	// (0x00047bbc) bg_popup_call2_rect_pane_ParamLimits

0xa628,	// (0x00047bbc) bg_popup_call2_rect_pane

0xa3cd,	// (0x00047961) call2_cli_visual_graphic_pane

0xa3cd,	// (0x00047961) call2_cli_visual_text_pane

0x5690,	// (0x00042c24) smil_status_volume_pane_g3

0x0002,

0xa78c,	// (0x00047d20) call2_cli_visual_graphic_pane_g1

0xa78c,	// (0x00047d20) call2_cli_visual_graphic_pane_g2

0xa78c,	// (0x00047d20) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004cafb) call2_cli_visual_graphic_pane_g

0xc5aa,	// (0x00049b3e) bg_popup_call2_rect_pane_g1

0xa82a,	// (0x00047dbe) bg_popup_call2_rect_pane_g2

0xc5b2,	// (0x00049b46) bg_popup_call2_rect_pane_g3

0xc5ba,	// (0x00049b4e) bg_popup_call2_rect_pane_g4

0xc5c2,	// (0x00049b56) bg_popup_call2_rect_pane_g5

0xc5ca,	// (0x00049b5e) bg_popup_call2_rect_pane_g6

0xc5d2,	// (0x00049b66) bg_popup_call2_rect_pane_g7

0xc5da,	// (0x00049b6e) bg_popup_call2_rect_pane_g8

0xc5e2,	// (0x00049b76) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004cb02) bg_popup_call2_rect_pane_g

0xc5ea,	// (0x00049b7e) bg_popup_call2_bubble_pane_g1

0xc5f2,	// (0x00049b86) bg_popup_call2_bubble_pane_g2

0xc5fa,	// (0x00049b8e) bg_popup_call2_bubble_pane_g3

0xc602,	// (0x00049b96) bg_popup_call2_bubble_pane_g4

0xc60a,	// (0x00049b9e) bg_popup_call2_bubble_pane_g5

0xc612,	// (0x00049ba6) bg_popup_call2_bubble_pane_g6

0xc61a,	// (0x00049bae) bg_popup_call2_bubble_pane_g7

0xc622,	// (0x00049bb6) bg_popup_call2_bubble_pane_g8

0xc62a,	// (0x00049bbe) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004cb15) bg_popup_call2_bubble_pane_g

0x296a,	// (0x0003fefe) aid_cale_week_size_cell_pane

0x2ffb,	// (0x0004058f) aid_cams_cif_uncrop_pane_ParamLimits

0x2ffb,	// (0x0004058f) aid_cams_cif_uncrop_pane

0x3156,	// (0x000406ea) aid_cams_size_cell_ParamLimits

0x3156,	// (0x000406ea) aid_cams_size_cell

0x3162,	// (0x000406f6) grid_cams_pane_ParamLimits

0x3170,	// (0x00040704) linegrid_cams_pane_ParamLimits

0x3247,	// (0x000407db) call_video_pane_t1

0x3268,	// (0x000407fc) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004c802) call_video_pane_t

0x37d7,	// (0x00040d6b) aid_cale_month_size_cell_pane_ParamLimits

0x37d7,	// (0x00040d6b) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004cb9f) smil_status_volume_pane_g

0x569d,	// (0x00042c31) volume_smil_pane_ParamLimits

0x20e3,	// (0x0003f677) aid_popup2_width_pane

0x285e,	// (0x0003fdf2) cell_qdial_pane_g4_ParamLimits

0x285e,	// (0x0003fdf2) cell_qdial_pane_g4

0x4715,	// (0x00041ca9) aid_blid_cardinal_pane_ParamLimits

0x4725,	// (0x00041cb9) aid_blid_destination_pane_ParamLimits

0x4725,	// (0x00041cb9) aid_blid_destination_pane

0xa628,	// (0x00047bbc) bg_popup_call_poc_act_pane_ParamLimits

0xa628,	// (0x00047bbc) bg_popup_call_poc_act_pane

0xa628,	// (0x00047bbc) bg_popup_call_poc_inact_pane_ParamLimits

0xa628,	// (0x00047bbc) bg_popup_call_poc_inact_pane

0xc632,	// (0x00049bc6) bg_popup_call_poc_act_pane_g1

0xc63a,	// (0x00049bce) bg_popup_call_poc_act_pane_g2

0xc642,	// (0x00049bd6) bg_popup_call_poc_act_pane_g3

0xc602,	// (0x00049b96) bg_popup_call_poc_act_pane_g4

0xc60a,	// (0x00049b9e) bg_popup_call_poc_act_pane_g5

0xc64a,	// (0x00049bde) bg_popup_call_poc_act_pane_g6

0xc61a,	// (0x00049bae) bg_popup_call_poc_act_pane_g7

0xc652,	// (0x00049be6) bg_popup_call_poc_act_pane_g8

0xa3cd,	// (0x00047961) main_usb_pane

0x548e,	// (0x00042a22) popup_cale_lunar_info_window

0x3587,	// (0x00040b1b) im_reading_pane_t1_ParamLimits

0xa9ff,	// (0x00047f93) list_im_pane_ParamLimits

0xaa10,	// (0x00047fa4) scroll_pane_cp07_ParamLimits

0xa3cd,	// (0x00047961) grid_highlight_pane_cp012

0xa628,	// (0x00047bbc) mup_scale_pane_ParamLimits

0xaf91,	// (0x00048525) main_usb_pane_g1_ParamLimits

0xaf91,	// (0x00048525) main_usb_pane_g1

0x51fd,	// (0x00042791) main_usb_pane_g2_ParamLimits

0x51fd,	// (0x00042791) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004cb3f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004cb3f) main_usb_pane_g

0x5209,	// (0x0004279d) main_usb_pane_t1_ParamLimits

0x5209,	// (0x0004279d) main_usb_pane_t1

0x521b,	// (0x000427af) main_usb_pane_t2_ParamLimits

0x521b,	// (0x000427af) main_usb_pane_t2

0x522d,	// (0x000427c1) main_usb_pane_t3_ParamLimits

0x522d,	// (0x000427c1) main_usb_pane_t3

0x523f,	// (0x000427d3) main_usb_pane_t4_ParamLimits

0x523f,	// (0x000427d3) main_usb_pane_t4

0x5251,	// (0x000427e5) main_usb_pane_t5_ParamLimits

0x5251,	// (0x000427e5) main_usb_pane_t5

0x5263,	// (0x000427f7) main_usb_pane_t6_ParamLimits

0x5263,	// (0x000427f7) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004cb44) main_usb_pane_t_ParamLimits

0x46bb,	// (0x00041c4f) aid_text_placing

0x46c7,	// (0x00041c5b) main_location2_pane_t1_ParamLimits

0x46db,	// (0x00041c6f) main_location2_pane_t2_ParamLimits

0x46ef,	// (0x00041c83) main_location2_pane_t3_ParamLimits

0x4703,	// (0x00041c97) main_location2_pane_t4_ParamLimits

0x4703,	// (0x00041c97) main_location2_pane_t4

0xf3cf,	// (0x0004c963) main_location2_pane_t_ParamLimits

0xa664,	// (0x00047bf8) find_pinb_pane_g2_ParamLimits

0xa664,	// (0x00047bf8) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004c6af) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004c6af) find_pinb_pane_g

0xa670,	// (0x00047c04) find_pinb_pane_t1_ParamLimits

0xa682,	// (0x00047c16) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004c6b4) find_pinb_pane_t_ParamLimits

0xa3cd,	// (0x00047961) main_call3_pane

0x3d4b,	// (0x000412df) cale_month_day_heading_pane_t1_ParamLimits

0x3dd1,	// (0x00041365) cale_month_day_heading_pane_t2_ParamLimits

0x3e62,	// (0x000413f6) cale_month_day_heading_pane_t3_ParamLimits

0x3ef3,	// (0x00041487) cale_month_day_heading_pane_t4_ParamLimits

0x3f84,	// (0x00041518) cale_month_day_heading_pane_t5_ParamLimits

0x4015,	// (0x000415a9) cale_month_day_heading_pane_t6_ParamLimits

0x40b2,	// (0x00041646) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004c83a) cale_month_day_heading_pane_t_ParamLimits

0xac5a,	// (0x000481ee) smil_status_volume_pane

0x4db4,	// (0x00042348) postcard_address_pane_ParamLimits

0x4db4,	// (0x00042348) postcard_address_pane

0x4dc0,	// (0x00042354) postcard_message_pane_ParamLimits

0x4dc0,	// (0x00042354) postcard_message_pane

0x51c4,	// (0x00042758) call2_cli_visual_pane_t1_ParamLimits

0x51c4,	// (0x00042758) call2_cli_visual_pane_t1

0x57f2,	// (0x00042d86) postcard_message_pane_t1_ParamLimits

0x57f2,	// (0x00042d86) postcard_message_pane_t1

0x57db,	// (0x00042d6f) postcard_address_pane_t1_ParamLimits

0x57db,	// (0x00042d6f) postcard_address_pane_t1

0x57cc,	// (0x00042d60) popup_call3_audio_in_window_ParamLimits

0x57cc,	// (0x00042d60) popup_call3_audio_in_window

0x56b2,	// (0x00042c46) bg_popup_call3_in_pane_ParamLimits

0x56b2,	// (0x00042c46) bg_popup_call3_in_pane

0x5712,	// (0x00042ca6) popup_call3_audio_in_window_g1_ParamLimits

0x5712,	// (0x00042ca6) popup_call3_audio_in_window_g1

0x572a,	// (0x00042cbe) popup_call3_audio_in_window_g2_ParamLimits

0x572a,	// (0x00042cbe) popup_call3_audio_in_window_g2

0x5742,	// (0x00042cd6) popup_call3_audio_in_window_g3_ParamLimits

0x5742,	// (0x00042cd6) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004cba6) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004cba6) popup_call3_audio_in_window_g

0x576a,	// (0x00042cfe) popup_call3_audio_in_window_t1_ParamLimits

0x576a,	// (0x00042cfe) popup_call3_audio_in_window_t1

0x5792,	// (0x00042d26) popup_call3_audio_in_window_t2_ParamLimits

0x5792,	// (0x00042d26) popup_call3_audio_in_window_t2

0x57ba,	// (0x00042d4e) popup_call3_audio_in_window_t3_ParamLimits

0x57ba,	// (0x00042d4e) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004cbaf) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004cbaf) popup_call3_audio_in_window_t

0xb38a,	// (0x0004891e) bg_popup_call3_rect_pane

0xc5aa,	// (0x00049b3e) bg_popup_call3_rect_pane_g1

0xa82a,	// (0x00047dbe) bg_popup_call3_rect_pane_g2

0xc5b2,	// (0x00049b46) bg_popup_call3_rect_pane_g3

0xc5ba,	// (0x00049b4e) bg_popup_call3_rect_pane_g4

0xc5c2,	// (0x00049b56) bg_popup_call3_rect_pane_g5

0xc5ca,	// (0x00049b5e) bg_popup_call3_rect_pane_g6

0xc5d2,	// (0x00049b66) bg_popup_call3_rect_pane_g7

0x4a3b,	// (0x00041fcf) mup_visualizer_osc_pane

0xb449,	// (0x000489dd) mup_visualizer_spec_pane

0x56d2,	// (0x00042c66) call3_video_qcif_pane_ParamLimits

0x56d2,	// (0x00042c66) call3_video_qcif_pane

0x56e2,	// (0x00042c76) call3_video_qcif_uncrop_pane_ParamLimits

0x56e2,	// (0x00042c76) call3_video_qcif_uncrop_pane

0x56f0,	// (0x00042c84) call3_video_subqcif_pane_ParamLimits

0x56f0,	// (0x00042c84) call3_video_subqcif_pane

0x5702,	// (0x00042c96) call3_video_subqcif_uncrop_pane_ParamLimits

0x5702,	// (0x00042c96) call3_video_subqcif_uncrop_pane

0x575a,	// (0x00042cee) popup_call3_audio_in_window_g4_ParamLimits

0x575a,	// (0x00042cee) popup_call3_audio_in_window_g4

0x567d,	// (0x00042c11) mup_spec_half_pane

0x5686,	// (0x00042c1a) mup_spec_half_pane_cp

0xc80f,	// (0x00049da3) mup_osc_middle_pane

0xc818,	// (0x00049dac) mup_visualizer_osc_pane_g1

0x565e,	// (0x00042bf2) mup_spec_bar_pane_ParamLimits

0x565e,	// (0x00042bf2) mup_spec_bar_pane

0xc7fc,	// (0x00049d90) mup_spec_bar_pane_g1

0xc806,	// (0x00049d9a) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004cb9a) mup_spec_bar_pane_g

0x296a,	// (0x0003fefe) aid_cale_week_size_cell_pane_ParamLimits

0x297f,	// (0x0003ff13) bg_cale_heading_pane_ParamLimits

0xa867,	// (0x00047dfb) bg_cale_pane_cp01_ParamLimits

0x29a1,	// (0x0003ff35) cale_week_corner_pane_ParamLimits

0x29bb,	// (0x0003ff4f) cale_week_day_heading_pane_ParamLimits

0x29dd,	// (0x0003ff71) cale_week_scroll_pane_g1_ParamLimits

0x29fa,	// (0x0003ff8e) cale_week_scroll_pane_g2_ParamLimits

0x2a0d,	// (0x0003ffa1) cale_week_scroll_pane_g3_ParamLimits

0x2a20,	// (0x0003ffb4) cale_week_scroll_pane_g4_ParamLimits

0x2a33,	// (0x0003ffc7) cale_week_scroll_pane_g5_ParamLimits

0x2a46,	// (0x0003ffda) cale_week_scroll_pane_g6_ParamLimits

0x2a59,	// (0x0003ffed) cale_week_scroll_pane_g7_ParamLimits

0x2a6c,	// (0x00040000) cale_week_scroll_pane_g8_ParamLimits

0x2a81,	// (0x00040015) cale_week_scroll_pane_g9_ParamLimits

0x2a94,	// (0x00040028) cale_week_scroll_pane_g10_ParamLimits

0x2aa7,	// (0x0004003b) cale_week_scroll_pane_g11_ParamLimits

0x2aba,	// (0x0004004e) cale_week_scroll_pane_g12_ParamLimits

0x2ad1,	// (0x00040065) cale_week_scroll_pane_g13_ParamLimits

0x2aec,	// (0x00040080) cale_week_scroll_pane_g14_ParamLimits

0x2b07,	// (0x0004009b) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004c740) cale_week_scroll_pane_g_ParamLimits

0x2b37,	// (0x000400cb) cale_week_time_pane_ParamLimits

0x2b4c,	// (0x000400e0) grid_cale_week_pane_ParamLimits

0xa885,	// (0x00047e19) listscroll_cale_week_pane_t1

0xa897,	// (0x00047e2b) scroll_pane_cp08_ParamLimits

0x3840,	// (0x00040dd4) cale_month_corner_pane_ParamLimits

0xac30,	// (0x000481c4) cale_month_pane_t1

0x3ce4,	// (0x00041278) cale_month_week_pane_ParamLimits

0xaf91,	// (0x00048525) popup_call_status_window_g1_ParamLimits

0x4501,	// (0x00041a95) popup_call_status_window_g2_ParamLimits

0x450d,	// (0x00041aa1) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004c8ea) popup_call_status_window_g_ParamLimits

0xaff8,	// (0x0004858c) aid_call2_pane

0x0f5e,	// (0x0003e4f2) msg_header_pane_g1

0x4db4,	// (0x00042348) postcard_address2_pane_ParamLimits

0x4db4,	// (0x00042348) postcard_address2_pane

0x4dc0,	// (0x00042354) postcard_message2_pane_ParamLimits

0x4dc0,	// (0x00042354) postcard_message2_pane

0x55f0,	// (0x00042b84) message2_row_pane_ParamLimits

0x55f0,	// (0x00042b84) message2_row_pane

0x560d,	// (0x00042ba1) address2_row_pane_ParamLimits

0x560d,	// (0x00042ba1) address2_row_pane

0xc7ca,	// (0x00049d5e) postcard_message2_row_pane_g1

0xc7d2,	// (0x00049d66) postcard_message2_row_pane_t1

0xc7ca,	// (0x00049d5e) address2_row_pane_g1

0xc7d2,	// (0x00049d66) address2_row_pane_t1

0x2ebd,	// (0x00040451) aid_size_cell_vorec

0xa3cd,	// (0x00047961) main_rss_pane

0x5620,	// (0x00042bb4) rss_list_single_pane_ParamLimits

0x5620,	// (0x00042bb4) rss_list_single_pane

0xc7e0,	// (0x00049d74) rss_list_single_pane_t1

0xc7ee,	// (0x00049d82) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004cb95) rss_list_single_pane_t

0xa3cd,	// (0x00047961) main_camera2_pane

0xa3cd,	// (0x00047961) main_video2_pane

0x5856,	// (0x00042dea) cams_zoom_pane_cp2_ParamLimits

0x5856,	// (0x00042dea) cams_zoom_pane_cp2

0x5862,	// (0x00042df6) image2_vga_pane_ParamLimits

0x5862,	// (0x00042df6) image2_vga_pane

0x5871,	// (0x00042e05) main_camera2_pane_g1_ParamLimits

0x5871,	// (0x00042e05) main_camera2_pane_g1

0x587d,	// (0x00042e11) main_camera2_pane_g2_ParamLimits

0x587d,	// (0x00042e11) main_camera2_pane_g2

0x5889,	// (0x00042e1d) main_camera2_pane_g3_ParamLimits

0x5889,	// (0x00042e1d) main_camera2_pane_g3

0x5895,	// (0x00042e29) main_camera2_pane_g4_ParamLimits

0x5895,	// (0x00042e29) main_camera2_pane_g4

0x58a1,	// (0x00042e35) main_camera2_pane_g5_ParamLimits

0x58a1,	// (0x00042e35) main_camera2_pane_g5

0x58ad,	// (0x00042e41) main_camera2_pane_g6_ParamLimits

0x58ad,	// (0x00042e41) main_camera2_pane_g6

0x58b9,	// (0x00042e4d) main_camera2_pane_g7_ParamLimits

0x58b9,	// (0x00042e4d) main_camera2_pane_g7

0x58c5,	// (0x00042e59) main_camera2_pane_g8_ParamLimits

0x58c5,	// (0x00042e59) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004cbb6) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004cbb6) main_camera2_pane_g

0x58dd,	// (0x00042e71) main_camera2_pane_t1_ParamLimits

0x58dd,	// (0x00042e71) main_camera2_pane_t1

0x58ef,	// (0x00042e83) main_camera2_pane_t2_ParamLimits

0x58ef,	// (0x00042e83) main_camera2_pane_t2

0x5901,	// (0x00042e95) main_camera2_pane_t3_ParamLimits

0x5901,	// (0x00042e95) main_camera2_pane_t3

0x5913,	// (0x00042ea7) main_camera2_pane_t4_ParamLimits

0x5913,	// (0x00042ea7) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004cbc9) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004cbc9) main_camera2_pane_t

0x5975,	// (0x00042f09) cams_zoom_pane_cp4_ParamLimits

0x5975,	// (0x00042f09) cams_zoom_pane_cp4

0x5985,	// (0x00042f19) image2_cif_pane_ParamLimits

0x5985,	// (0x00042f19) image2_cif_pane

0x599a,	// (0x00042f2e) image2_subqcif_pane_ParamLimits

0x599a,	// (0x00042f2e) image2_subqcif_pane

0x59a9,	// (0x00042f3d) main_video2_pane_g1_ParamLimits

0x59a9,	// (0x00042f3d) main_video2_pane_g1

0x59bb,	// (0x00042f4f) main_video2_pane_g2_ParamLimits

0x59bb,	// (0x00042f4f) main_video2_pane_g2

0x59cb,	// (0x00042f5f) main_video2_pane_g3_ParamLimits

0x59cb,	// (0x00042f5f) main_video2_pane_g3

0x59db,	// (0x00042f6f) main_video2_pane_g4_ParamLimits

0x59db,	// (0x00042f6f) main_video2_pane_g4

0x59eb,	// (0x00042f7f) main_video2_pane_g5_ParamLimits

0x59eb,	// (0x00042f7f) main_video2_pane_g5

0x59fb,	// (0x00042f8f) main_video2_pane_g6_ParamLimits

0x59fb,	// (0x00042f8f) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004cbd8) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004cbd8) main_video2_pane_g

0x5a0d,	// (0x00042fa1) main_video2_pane_t1_ParamLimits

0x5a0d,	// (0x00042fa1) main_video2_pane_t1

0x5a27,	// (0x00042fbb) main_video2_pane_t2_ParamLimits

0x5a27,	// (0x00042fbb) main_video2_pane_t2

0x5a4d,	// (0x00042fe1) main_video2_pane_t3_ParamLimits

0x5a4d,	// (0x00042fe1) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004cbe5) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004cbe5) main_video2_pane_t

0x531a,	// (0x000428ae) call_muted_g2

0x0001,

0xf5f3,	// (0x0004cb87) call_muted_g

0xa3cd,	// (0x00047961) main_mup2_pane

0xc84f,	// (0x00049de3) main_mup2_pane_g1_ParamLimits

0xc84f,	// (0x00049de3) main_mup2_pane_g1

0x5a73,	// (0x00043007) main_mup2_pane_g2_ParamLimits

0x5a73,	// (0x00043007) main_mup2_pane_g2

0x5cf5,	// (0x00043289) main_mup_pane_g13_cp1

0x5cfd,	// (0x00043291) mup_volume_pane_cp1

0x5a93,	// (0x00043027) main_mup2_pane_g4_ParamLimits

0x5a93,	// (0x00043027) main_mup2_pane_g4

0x5aa8,	// (0x0004303c) main_mup2_pane_g5_ParamLimits

0x5aa8,	// (0x0004303c) main_mup2_pane_g5

0x5abd,	// (0x00043051) main_mup2_pane_g6_ParamLimits

0x5abd,	// (0x00043051) main_mup2_pane_g6

0x5ad2,	// (0x00043066) main_mup2_pane_g7_ParamLimits

0x5ad2,	// (0x00043066) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004cbec) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004cbec) main_mup2_pane_g

0x5aee,	// (0x00043082) main_mup2_pane_t1_ParamLimits

0x5aee,	// (0x00043082) main_mup2_pane_t1

0x5b05,	// (0x00043099) main_mup2_pane_t2_ParamLimits

0x5b05,	// (0x00043099) main_mup2_pane_t2

0x5b1c,	// (0x000430b0) main_mup2_pane_t3_ParamLimits

0x5b1c,	// (0x000430b0) main_mup2_pane_t3

0x5b33,	// (0x000430c7) main_mup2_pane_t4_ParamLimits

0x5b33,	// (0x000430c7) main_mup2_pane_t4

0x5b4d,	// (0x000430e1) main_mup2_pane_t5_ParamLimits

0x5b4d,	// (0x000430e1) main_mup2_pane_t5

0x5b67,	// (0x000430fb) main_mup2_pane_t6_ParamLimits

0x5b67,	// (0x000430fb) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004cbfb) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004cbfb) main_mup2_pane_t

0x5b9f,	// (0x00043133) mup2_visualizer_pane_ParamLimits

0x5b9f,	// (0x00043133) mup2_visualizer_pane

0x5bd5,	// (0x00043169) mup_progress_pane_cp_ParamLimits

0x5bd5,	// (0x00043169) mup_progress_pane_cp

0x5ce0,	// (0x00043274) mup_volume_pane_cp_ParamLimits

0x5ce0,	// (0x00043274) mup_volume_pane_cp

0x5bec,	// (0x00043180) mup2_visualizer_pane_g1_ParamLimits

0x5bec,	// (0x00043180) mup2_visualizer_pane_g1

0xc85b,	// (0x00049def) mup2_visualizer_pane_g2_ParamLimits

0xc85b,	// (0x00049def) mup2_visualizer_pane_g2

0x5c01,	// (0x00043195) mup2_visualizer_pane_g3_ParamLimits

0x5c01,	// (0x00043195) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004cc08) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004cc08) mup2_visualizer_pane_g

0xb67c,	// (0x00048c10) aid_size_cell_fmradio

0x5430,	// (0x000429c4) aid_height_parent_landcape

0xaa8e,	// (0x00048022) wml_content_pane_cp

0xaa96,	// (0x0004802a) wml_tabs_pane

0xaa9f,	// (0x00048033) popup_wml_miniature_window

0xaaa7,	// (0x0004803b) scroll_pane_cp021

0xaabb,	// (0x0004804f) wml_content_pane_comp8

0xa3cd,	// (0x00047961) bg_popup_sub_pane_cp05

0xc879,	// (0x00049e0d) popup_wml_miniature_window_g1

0xc881,	// (0x00049e15) wml_miniature_view_pane

0x5c0f,	// (0x000431a3) aid_size_wml_view

0x5c17,	// (0x000431ab) wml_miniature_view_pane_g1

0x5c20,	// (0x000431b4) wml_miniature_view_pane_g2

0x5c29,	// (0x000431bd) wml_miniature_view_pane_g3

0x5c31,	// (0x000431c5) wml_miniature_view_pane_g4

0x5c39,	// (0x000431cd) wml_miniature_view_pane_g5

0x5c41,	// (0x000431d5) wml_miniature_view_pane_g6

0x5c49,	// (0x000431dd) wml_miniature_view_pane_g7

0x5c51,	// (0x000431e5) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004cc0f) wml_miniature_view_pane_g

0xc84f,	// (0x00049de3) background_graphic_ParamLimits

0xc84f,	// (0x00049de3) background_graphic

0xc889,	// (0x00049e1d) wml_tabs_2_pane

0xc892,	// (0x00049e26) wml_tabs_3_pane_ParamLimits

0xc892,	// (0x00049e26) wml_tabs_3_pane

0xc8a4,	// (0x00049e38) wml_tabs_4_pane_ParamLimits

0xc8a4,	// (0x00049e38) wml_tabs_4_pane

0xc8ba,	// (0x00049e4e) wml_tabs_5_pane_ParamLimits

0xc8ba,	// (0x00049e4e) wml_tabs_5_pane

0xc8d4,	// (0x00049e68) wml_tabs_pane_g2_ParamLimits

0xc8d4,	// (0x00049e68) wml_tabs_pane_g2

0xc8e8,	// (0x00049e7c) wml_tabs_pane_g3_ParamLimits

0xc8e8,	// (0x00049e7c) wml_tabs_pane_g3

0x5c59,	// (0x000431ed) wml_tabs_2_active_pane_ParamLimits

0x5c59,	// (0x000431ed) wml_tabs_2_active_pane

0x5c69,	// (0x000431fd) wml_tabs_2_passive_pane_ParamLimits

0x5c69,	// (0x000431fd) wml_tabs_2_passive_pane

0x5c79,	// (0x0004320d) wml_tabs_3_active_pane_cp_ParamLimits

0x5c79,	// (0x0004320d) wml_tabs_3_active_pane_cp

0x5c8a,	// (0x0004321e) wml_tabs_3_passive_pane_ParamLimits

0x5c8a,	// (0x0004321e) wml_tabs_3_passive_pane

0x5c9b,	// (0x0004322f) wml_tabs_3_passive_pane_cp_ParamLimits

0x5c9b,	// (0x0004322f) wml_tabs_3_passive_pane_cp

0x5cac,	// (0x00043240) tabs_4_active_pane

0x5cb4,	// (0x00043248) tabs_4_passive_pane

0x5cbc,	// (0x00043250) tabs_4_passive_pane_cp

0x5cc4,	// (0x00043258) tabs_4_passive_pane_cp2

0x51f5,	// (0x00042789) aid_height_text

0x4a04,	// (0x00041f98) mup_volume_cont_pane_ParamLimits

0x4a04,	// (0x00041f98) mup_volume_cont_pane

0x24b5,	// (0x0003fa49) aid_size_cell_pinb

0x24bf,	// (0x0003fa53) aid_size_list_pinb

0x5bbe,	// (0x00043152) mup2_volume_cont_pane_ParamLimits

0x5bbe,	// (0x00043152) mup2_volume_cont_pane

0x5ccc,	// (0x00043260) mup2_volume_cont_pane_g1_ParamLimits

0x5ccc,	// (0x00043260) mup2_volume_cont_pane_g1

0x20ef,	// (0x0003f683) aid_size_cell_touch_ParamLimits

0x20ef,	// (0x0003f683) aid_size_cell_touch

0x2398,	// (0x0003f92c) touch_pane_ParamLimits

0x2398,	// (0x0003f92c) touch_pane

0x9fb0,	// (0x00047544) main_rss2_pane

0xc905,	// (0x00049e99) listscroll_rss2_pane

0xc90e,	// (0x00049ea2) rss2_navigation_pane

0xc916,	// (0x00049eaa) list_rss2_pane

0xb147,	// (0x000486db) scroll_pane_cp22

0xc91e,	// (0x00049eb2) rss2_navigation_pane_g1

0xc927,	// (0x00049ebb) rss2_navigation_pane_g2

0xc92f,	// (0x00049ec3) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004cc20) rss2_navigation_pane_g

0xc937,	// (0x00049ecb) rss2_navigation_pane_t1

0x5d05,	// (0x00043299) rss2_list_single_pane_ParamLimits

0x5d05,	// (0x00043299) rss2_list_single_pane

0xc945,	// (0x00049ed9) rss2_list_single_pane_t2

0xc953,	// (0x00049ee7) rss2_list_single_pane_t3_ParamLimits

0xc953,	// (0x00049ee7) rss2_list_single_pane_t3

0xc970,	// (0x00049f04) rss2_list_single_pane_t4

0x4362,	// (0x000418f6) smil_status_pane_g1

0xade7,	// (0x0004837b) main_image2_pane_ParamLimits

0xade7,	// (0x0004837b) main_image2_pane

0x58d1,	// (0x00042e65) main_camera2_pane_g9_ParamLimits

0x58d1,	// (0x00042e65) main_camera2_pane_g9

0x5925,	// (0x00042eb9) main_camera2_pane_t5_ParamLimits

0x5925,	// (0x00042eb9) main_camera2_pane_t5

0x5937,	// (0x00042ecb) main_camera2_pane_t6_ParamLimits

0x5937,	// (0x00042ecb) main_camera2_pane_t6

0x5d3d,	// (0x000432d1) main_image2_pane_g1_ParamLimits

0x5d3d,	// (0x000432d1) main_image2_pane_g1

0x4f91,	// (0x00042525) smil2_video_pane_ParamLimits

0x4f91,	// (0x00042525) smil2_video_pane

0x0cb7,	// (0x0003e24b) aid_zoom_text_primary_cp

0x2341,	// (0x0003f8d5) popup_preview_fixed_window

0xa9f7,	// (0x00047f8b) im_reading_pane_g1

0x581b,	// (0x00042daf) cams2_bc_adjust_pane_cp_ParamLimits

0x581b,	// (0x00042daf) cams2_bc_adjust_pane_cp

0x5967,	// (0x00042efb) cams2_bc_adjust_pane_ParamLimits

0x5967,	// (0x00042efb) cams2_bc_adjust_pane

0x5d49,	// (0x000432dd) cams2_bc_adjust_pane_g1

0x5d51,	// (0x000432e5) cams2_slider_pane

0x5d5a,	// (0x000432ee) cams2_slider_pane_g1

0x5d63,	// (0x000432f7) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004cc27) cams2_slider_pane_g

0x25af,	// (0x0003fb43) calc_display_pane_ParamLimits

0x25cd,	// (0x0003fb61) calc_paper_pane_ParamLimits

0x25e9,	// (0x0003fb7d) grid_calc_pane_ParamLimits

0x456f,	// (0x00041b03) popup_clock_digital_window_t1_ParamLimits

0xb619,	// (0x00048bad) main_image_pane_t1

0x2595,	// (0x0003fb29) aid_size_cell_calc_ParamLimits

0x2595,	// (0x0003fb29) aid_size_cell_calc

0x546a,	// (0x000429fe) popup_blid_sat_info2_window_ParamLimits

0x546a,	// (0x000429fe) popup_blid_sat_info2_window

0xc986,	// (0x00049f1a) aid_size_cell_blid

0xc98e,	// (0x00049f22) bg_popup_window_pane_cp07

0xc9b1,	// (0x00049f45) grid_popup_blid_pane

0xc9bb,	// (0x00049f4f) heading_pane_cp05_ParamLimits

0xc9bb,	// (0x00049f4f) heading_pane_cp05

0xca85,	// (0x0004a019) cell_popup_blid_pane_ParamLimits

0xca85,	// (0x0004a019) cell_popup_blid_pane

0xcaab,	// (0x0004a03f) cell_popup_blid_pane_g1

0xcab3,	// (0x0004a047) cell_popup_blid_pane_t1

0x5b84,	// (0x00043118) mup2_indicator_pane_ParamLimits

0x5b84,	// (0x00043118) mup2_indicator_pane

0xb38a,	// (0x0004891e) mup2_visualizer_osc_pane

0xc867,	// (0x00049dfb) mup2_visualizer_spec_pane_ParamLimits

0xc867,	// (0x00049dfb) mup2_visualizer_spec_pane

0x5d7d,	// (0x00043311) mup2_spec_half_pane

0x5d86,	// (0x0004331a) mup2_spec_half_pane_cp

0x5d90,	// (0x00043324) mup2_spec_bar_pane_ParamLimits

0x5d90,	// (0x00043324) mup2_spec_bar_pane

0xc7fc,	// (0x00049d90) mup2_spec_bar_pane_g1

0xc806,	// (0x00049d9a) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004cb9a) mup2_spec_bar_pane_g

0x5daf,	// (0x00043343) mup2_osc_middle_pane

0xc818,	// (0x00049dac) mup2_visualizer_osc_pane_g1

0x9fda,	// (0x0004756e) popup_number_entry_window_t1_ParamLimits

0x9fed,	// (0x00047581) popup_number_entry_window_t2_ParamLimits

0x9fff,	// (0x00047593) popup_number_entry_window_t3_ParamLimits

0x23ef,	// (0x0003f983) popup_number_entry_window_t5_ParamLimits

0x23ef,	// (0x0003f983) popup_number_entry_window_t5

0xf0c6,	// (0x0004c65a) popup_number_entry_window_t_ParamLimits

0xa011,	// (0x000475a5) text_title_cp2_ParamLimits

0x4c7c,	// (0x00042210) aid_hotspot_pointer_text2_pane

0x4d16,	// (0x000422aa) main_viewer_pane_g9_ParamLimits

0x4d16,	// (0x000422aa) main_viewer_pane_g9

0xac30,	// (0x000481c4) cale_month_pane_t1_ParamLimits

0xac6d,	// (0x00048201) bg_cale_pane_ParamLimits

0xac85,	// (0x00048219) list_cale_pane_ParamLimits

0xac96,	// (0x0004822a) listscroll_cale_day_pane_t1

0xaca8,	// (0x0004823c) scroll_pane_cp09_ParamLimits

0x4a43,	// (0x00041fd7) main_mup_eq_pane_t1_ParamLimits

0x4a43,	// (0x00041fd7) main_mup_eq_pane_t1

0x4a5d,	// (0x00041ff1) main_mup_eq_pane_t2_ParamLimits

0x4a5d,	// (0x00041ff1) main_mup_eq_pane_t2

0x4a75,	// (0x00042009) main_mup_eq_pane_t3_ParamLimits

0x4a75,	// (0x00042009) main_mup_eq_pane_t3

0x4a8d,	// (0x00042021) main_mup_eq_pane_t4_ParamLimits

0x4a8d,	// (0x00042021) main_mup_eq_pane_t4

0x4aa5,	// (0x00042039) main_mup_eq_pane_t5_ParamLimits

0x4aa5,	// (0x00042039) main_mup_eq_pane_t5

0x4abd,	// (0x00042051) main_mup_eq_pane_t6_ParamLimits

0x4abd,	// (0x00042051) main_mup_eq_pane_t6

0x4ad1,	// (0x00042065) main_mup_eq_pane_t7_ParamLimits

0x4ad1,	// (0x00042065) main_mup_eq_pane_t7

0x4ae5,	// (0x00042079) main_mup_eq_pane_t8_ParamLimits

0x4ae5,	// (0x00042079) main_mup_eq_pane_t8

0x4afb,	// (0x0004208f) main_mup_eq_pane_t9_ParamLimits

0x4afb,	// (0x0004208f) main_mup_eq_pane_t9

0x4b13,	// (0x000420a7) main_mup_eq_pane_t10_ParamLimits

0x4b13,	// (0x000420a7) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004c9e9) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004c9e9) main_mup_eq_pane_t

0x4bd0,	// (0x00042164) mup_equalizer_pane_cp5_ParamLimits

0x4be6,	// (0x0004217a) mup_equalizer_pane_cp6_ParamLimits

0x4bfe,	// (0x00042192) mup_equalizer_pane_cp7_ParamLimits

0x9fb0,	// (0x00047544) main_gallery_pane

0xc821,	// (0x00049db5) smil2_volume_pane

0xc829,	// (0x00049dbd) smil_status_volume_pane_g1_ParamLimits

0xc83c,	// (0x00049dd0) smil_status_volume_pane_g2_ParamLimits

0x5690,	// (0x00042c24) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004cb9f) smil_status_volume_pane_g_ParamLimits

0xc98e,	// (0x00049f22) bg_popup_window_pane_cp07_ParamLimits

0xc99c,	// (0x00049f30) blid_firmament_pane

0x5db8,	// (0x0004334c) aid_size_cell_gallery_ParamLimits

0x5db8,	// (0x0004334c) aid_size_cell_gallery

0x5dc6,	// (0x0004335a) grid_gallery_pane_ParamLimits

0x5dc6,	// (0x0004335a) grid_gallery_pane

0x5dd6,	// (0x0004336a) cell_gallery_pane_ParamLimits

0x5dd6,	// (0x0004336a) cell_gallery_pane

0xcac1,	// (0x0004a055) bg_cell_gallery_focus_pane_ParamLimits

0xcac1,	// (0x0004a055) bg_cell_gallery_focus_pane

0xcad3,	// (0x0004a067) cell_gallery_pane_g1_ParamLimits

0xcad3,	// (0x0004a067) cell_gallery_pane_g1

0x5e24,	// (0x000433b8) cell_gallery_pane_g2_ParamLimits

0x5e24,	// (0x000433b8) cell_gallery_pane_g2

0x5e31,	// (0x000433c5) cell_gallery_pane_g3_ParamLimits

0x5e31,	// (0x000433c5) cell_gallery_pane_g3

0xcadf,	// (0x0004a073) cell_gallery_pane_g4_ParamLimits

0xcadf,	// (0x0004a073) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004cc4d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004cc4d) cell_gallery_pane_g

0xcaeb,	// (0x0004a07f) bg_cell_gallery_focus_pane_g1

0xcaf3,	// (0x0004a087) bg_cell_gallery_focus_pane_g2

0xcafb,	// (0x0004a08f) bg_cell_gallery_focus_pane_g3

0xcb03,	// (0x0004a097) bg_cell_gallery_focus_pane_g4

0xcb0b,	// (0x0004a09f) bg_cell_gallery_focus_pane_g5

0xcb13,	// (0x0004a0a7) bg_cell_gallery_focus_pane_g6

0xcb1b,	// (0x0004a0af) bg_cell_gallery_focus_pane_g7

0xcb23,	// (0x0004a0b7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004cc56) bg_cell_gallery_focus_pane_g

0xcb2b,	// (0x0004a0bf) aid_firma_cardinal

0xcb3f,	// (0x0004a0d3) blid_firmament_pane_t1

0xcb56,	// (0x0004a0ea) blid_firmament_pane_t2

0xcb6d,	// (0x0004a101) blid_firmament_pane_t3

0xcb84,	// (0x0004a118) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004cc67) blid_firmament_pane_t

0xcb9b,	// (0x0004a12f) blid_sat_info_pane

0xcbab,	// (0x0004a13f) blid_sat_info_pane_g1

0xcbab,	// (0x0004a13f) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004cc70) blid_sat_info_pane_g

0xcbb5,	// (0x0004a149) blid_sat_info_pane_t1

0xcbc3,	// (0x0004a157) smil2_volume_content_pane

0xcbcc,	// (0x0004a160) smil2_volume_pane_g1

0xa7b8,	// (0x00047d4c) smil2_volume_content_pane_g1

0xcbd4,	// (0x0004a168) smil2_volume_content_pane_g2

0xcbdd,	// (0x0004a171) smil2_volume_content_pane_g3

0xcbe6,	// (0x0004a17a) smil2_volume_content_pane_g4

0xcbef,	// (0x0004a183) smil2_volume_content_pane_g5

0xcbf8,	// (0x0004a18c) smil2_volume_content_pane_g6

0xcc01,	// (0x0004a195) smil2_volume_content_pane_g7

0xcc0a,	// (0x0004a19e) smil2_volume_content_pane_g8

0xcc13,	// (0x0004a1a7) smil2_volume_content_pane_g9

0xcc1c,	// (0x0004a1b0) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004cc75) smil2_volume_content_pane_g

0x2bd1,	// (0x00040165) cale_week_day_heading_pane_t1_ParamLimits

0x2c0c,	// (0x000401a0) cale_week_day_heading_pane_t2_ParamLimits

0x2c47,	// (0x000401db) cale_week_day_heading_pane_t3_ParamLimits

0x2c82,	// (0x00040216) cale_week_day_heading_pane_t4_ParamLimits

0x2cbd,	// (0x00040251) cale_week_day_heading_pane_t5_ParamLimits

0x2cf8,	// (0x0004028c) cale_week_day_heading_pane_t6_ParamLimits

0x2d33,	// (0x000402c7) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004c761) cale_week_day_heading_pane_t_ParamLimits

0xa8b4,	// (0x00047e48) bg_cale_side_pane_ParamLimits

0x2d6e,	// (0x00040302) cale_week_time_pane_t1_ParamLimits

0x2d88,	// (0x0004031c) cale_week_time_pane_t2_ParamLimits

0x2da2,	// (0x00040336) cale_week_time_pane_t3_ParamLimits

0x2dbc,	// (0x00040350) cale_week_time_pane_t4_ParamLimits

0x2dd6,	// (0x0004036a) cale_week_time_pane_t5_ParamLimits

0x2df2,	// (0x00040386) cale_week_time_pane_t6_ParamLimits

0x2e14,	// (0x000403a8) cale_week_time_pane_t7_ParamLimits

0x2e38,	// (0x000403cc) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004c770) cale_week_time_pane_t_ParamLimits

0x2e5e,	// (0x000403f2) cell_cale_week_pane_g2_ParamLimits

0xa8b4,	// (0x00047e48) bg_cale_side_pane_cp01_ParamLimits

0x415b,	// (0x000416ef) cale_month_week_pane_t1_ParamLimits

0x4174,	// (0x00041708) cale_month_week_pane_t2_ParamLimits

0x418d,	// (0x00041721) cale_month_week_pane_t3_ParamLimits

0x41a6,	// (0x0004173a) cale_month_week_pane_t4_ParamLimits

0x41c3,	// (0x00041757) cale_month_week_pane_t5_ParamLimits

0x41e4,	// (0x00041778) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004c849) cale_month_week_pane_t_ParamLimits

0x432b,	// (0x000418bf) cell_cale_month_pane_g1_ParamLimits

0x9fb0,	// (0x00047544) main_cale_event_viewer_pane

0x9fb0,	// (0x00047544) listscroll_cale_event_viewer_pane

0xcc25,	// (0x0004a1b9) list_cale_ev_pane

0xcc2d,	// (0x0004a1c1) scroll_pane_cp023

0xcc39,	// (0x0004a1cd) field_cale_ev_pane_ParamLimits

0xcc39,	// (0x0004a1cd) field_cale_ev_pane

0xcc55,	// (0x0004a1e9) field_cale_ev_content_pane_ParamLimits

0xcc55,	// (0x0004a1e9) field_cale_ev_content_pane

0xcc61,	// (0x0004a1f5) field_cale_ev_pane_g1_ParamLimits

0xcc61,	// (0x0004a1f5) field_cale_ev_pane_g1

0xcc6d,	// (0x0004a201) field_cale_ev_pane_g2_ParamLimits

0xcc6d,	// (0x0004a201) field_cale_ev_pane_g2

0xcc85,	// (0x0004a219) field_cale_ev_pane_g3_ParamLimits

0xcc85,	// (0x0004a219) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004cc8a) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004cc8a) field_cale_ev_pane_g

0xcc9d,	// (0x0004a231) field_cale_ev_pane_t1_ParamLimits

0xcc9d,	// (0x0004a231) field_cale_ev_pane_t1

0xccb4,	// (0x0004a248) field_cale_ev_content_pane_t1_ParamLimits

0xccb4,	// (0x0004a248) field_cale_ev_content_pane_t1

0xb4f3,	// (0x00048a87) bg_button_pane_cp01

0x295a,	// (0x0003feee) listscroll_cale_week_pane_ParamLimits

0xa85e,	// (0x00047df2) popup_toolbar_window_cp01

0xa885,	// (0x00047e19) listscroll_cale_week_pane_t1_ParamLimits

0x295a,	// (0x0003feee) listscroll_cale_day_pane_ParamLimits

0xa85e,	// (0x00047df2) popup_toolbar_window_cp02

0xac96,	// (0x0004822a) listscroll_cale_day_pane_t1_ParamLimits

0x295a,	// (0x0003feee) main_cale_month_pane_ParamLimits

0x5567,	// (0x00042afb) popup_toolbar_window_cp03_ParamLimits

0x5567,	// (0x00042afb) popup_toolbar_window_cp03

0x4ea3,	// (0x00042437) main_image_pane_g2_ParamLimits

0x4ea3,	// (0x00042437) main_image_pane_g2

0x4eaf,	// (0x00042443) main_image_pane_g3_ParamLimits

0x4eaf,	// (0x00042443) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004ca7b) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004ca7b) main_image_pane_g

0xb619,	// (0x00048bad) main_image_pane_t1_ParamLimits

0x4ebb,	// (0x0004244f) main_image_pane_t2_ParamLimits

0x4ebb,	// (0x0004244f) main_image_pane_t2

0x4ecd,	// (0x00042461) main_image_pane_t3_ParamLimits

0x4ecd,	// (0x00042461) main_image_pane_t3

0x4edf,	// (0x00042473) main_image_pane_t4_ParamLimits

0x4edf,	// (0x00042473) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004ca82) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004ca82) main_image_pane_t

0x4ef1,	// (0x00042485) popup_image_details_window_cp01

0x4efb,	// (0x0004248f) popup_toobar_trans_pane_cp01_ParamLimits

0x4efb,	// (0x0004248f) popup_toobar_trans_pane_cp01

0x54bd,	// (0x00042a51) popup_image_details_window_ParamLimits

0x54bd,	// (0x00042a51) popup_image_details_window

0x54cb,	// (0x00042a5f) popup_image_focus_window

0x580d,	// (0x00042da1) camera2_autofocus_pane_ParamLimits

0x580d,	// (0x00042da1) camera2_autofocus_pane

0x9fb0,	// (0x00047544) bg_popup_sub_pane_cp06

0xccd1,	// (0x0004a265) popup_image_focus_window_g1

0xccd9,	// (0x0004a26d) popup_image_focus_window_g2

0xcce1,	// (0x0004a275) popup_image_focus_window_g3

0xcce9,	// (0x0004a27d) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004cc91) popup_image_focus_window_g

0xccf1,	// (0x0004a285) popup_image_focus_window_t1

0xccff,	// (0x0004a293) popup_image_focus_window_t2

0xcd0f,	// (0x0004a2a3) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004cc9a) popup_image_focus_window_t

0xcd1d,	// (0x0004a2b1) camera2_autofocus_pane_g1

0xade7,	// (0x0004837b) bg_tb_trans_pane_cp01

0xcd2b,	// (0x0004a2bf) popup_image_details_window_g1

0xcd3e,	// (0x0004a2d2) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004ccac) popup_image_details_window_g

0xcd67,	// (0x0004a2fb) popup_image_details_window_t1

0xcd79,	// (0x0004a30d) popup_image_details_window_t2

0xcd92,	// (0x0004a326) popup_image_details_window_t3

0xcda6,	// (0x0004a33a) popup_image_details_window_t4

0xcdc1,	// (0x0004a355) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004ccb3) popup_image_details_window_t

0xa723,	// (0x00047cb7) bg_calc_paper_pane_ParamLimits

0x9fb0,	// (0x00047544) grid_highlight_pane_cp013

0x26e6,	// (0x0003fc7a) list_calc_pane_ParamLimits

0x26f8,	// (0x0003fc8c) scroll_pane_cp024

0xa737,	// (0x00047ccb) bg_calc_display_pane_ParamLimits

0x2700,	// (0x0003fc94) calc_display_pane_t1_ParamLimits

0x2715,	// (0x0003fca9) calc_display_pane_t2_ParamLimits

0x272a,	// (0x0003fcbe) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004c6e1) calc_display_pane_t_ParamLimits

0x280b,	// (0x0003fd9f) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004c6fe) cell_calc_pane_g

0x2814,	// (0x0003fda8) cell_calc_pane_t1

0xa796,	// (0x00047d2a) grid_highlight_pane_cp02_ParamLimits

0xa7ac,	// (0x00047d40) toolbar_button_pane_cp01_ParamLimits

0xa7ac,	// (0x00047d40) toolbar_button_pane_cp01

0xb65e,	// (0x00048bf2) temp_image_control_pane_ParamLimits

0xb65e,	// (0x00048bf2) temp_image_control_pane

0xade7,	// (0x0004837b) main_mp3_pane

0xcddb,	// (0x0004a36f) temp_image_control_pane_g1_ParamLimits

0xcddb,	// (0x0004a36f) temp_image_control_pane_g1

0xcde9,	// (0x0004a37d) temp_image_control_pane_g2_ParamLimits

0xcde9,	// (0x0004a37d) temp_image_control_pane_g2

0xcdfb,	// (0x0004a38f) temp_image_control_pane_g3_ParamLimits

0xcdfb,	// (0x0004a38f) temp_image_control_pane_g3

0x5e6e,	// (0x00043402) temp_image_control_pane_g4_ParamLimits

0x5e6e,	// (0x00043402) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004ccbe) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004ccbe) temp_image_control_pane_g

0xcddb,	// (0x0004a36f) main_mp3_pane_g1

0x5e7f,	// (0x00043413) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004ccc7) main_mp3_pane_g

0xce3e,	// (0x0004a3d2) main_mp3_pane_t1

0xa906,	// (0x00047e9a) main_camera_pane_g8_ParamLimits

0xa906,	// (0x00047e9a) main_camera_pane_g8

0x310c,	// (0x000406a0) main_video_pane_g7_ParamLimits

0x310c,	// (0x000406a0) main_video_pane_g7

0x5955,	// (0x00042ee9) main_camera2_pane_t7_ParamLimits

0x5955,	// (0x00042ee9) main_camera2_pane_t7

0xaa4e,	// (0x00047fe2) scroll_pane_cp025_ParamLimits

0xaa4e,	// (0x00047fe2) scroll_pane_cp025

0xaa62,	// (0x00047ff6) scroll_pane_cp026_ParamLimits

0xaa62,	// (0x00047ff6) scroll_pane_cp026

0xaa71,	// (0x00048005) wml_content_pane_ParamLimits

0x9fb0,	// (0x00047544) main_touch_calib_pane

0x5f23,	// (0x000434b7) main_touch_calib_pane_g1

0x5f2f,	// (0x000434c3) main_touch_calib_pane_g2

0x5f3b,	// (0x000434cf) main_touch_calib_pane_g3

0x5f47,	// (0x000434db) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004cce5) main_touch_calib_pane_g

0x5f53,	// (0x000434e7) main_touch_calib_pane_t1

0x5f6c,	// (0x00043500) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004ccee) main_touch_calib_pane_t

0xb225,	// (0x000487b9) mup_progress_pane_cp02

0xb25a,	// (0x000487ee) navi_pane_g1

0xb315,	// (0x000488a9) navi_pane_mp_t3

0xade7,	// (0x0004837b) main_mp3_pane_ParamLimits

0x55a4,	// (0x00042b38) navi_pane_ParamLimits

0xcddb,	// (0x0004a36f) main_mp3_pane_g1_ParamLimits

0x5e7f,	// (0x00043413) main_mp3_pane_g2_ParamLimits

0x5e8b,	// (0x0004341f) main_mp3_pane_g3_ParamLimits

0x5e8b,	// (0x0004341f) main_mp3_pane_g3

0x5e97,	// (0x0004342b) main_mp3_pane_g4_ParamLimits

0x5e97,	// (0x0004342b) main_mp3_pane_g4

0xce0b,	// (0x0004a39f) main_mp3_pane_g5_ParamLimits

0xce0b,	// (0x0004a39f) main_mp3_pane_g5

0xce19,	// (0x0004a3ad) main_mp3_pane_g6_ParamLimits

0xce19,	// (0x0004a3ad) main_mp3_pane_g6

0xce26,	// (0x0004a3ba) main_mp3_pane_g7_ParamLimits

0xce26,	// (0x0004a3ba) main_mp3_pane_g7

0xce32,	// (0x0004a3c6) main_mp3_pane_g8_ParamLimits

0xce32,	// (0x0004a3c6) main_mp3_pane_g8

0xf733,	// (0x0004ccc7) main_mp3_pane_g_ParamLimits

0x5ea3,	// (0x00043437) main_mp3_pane_t2

0x5eb3,	// (0x00043447) main_mp3_pane_t3

0xce4c,	// (0x0004a3e0) main_mp3_pane_t4

0xce5a,	// (0x0004a3ee) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004ccd8) main_mp3_pane_t

0xce68,	// (0x0004a3fc) mup_progress_pane_cp01

0x0cb7,	// (0x0003e24b) aid_zoom_text_secondary2

0xcc25,	// (0x0004a1b9) list_cale_ev2_pane

0xcc2d,	// (0x0004a1c1) scroll_pane_cp023_ParamLimits

0x5fc7,	// (0x0004355b) field_cale_ev2_pane_ParamLimits

0x5fc7,	// (0x0004355b) field_cale_ev2_pane

0x0fe5,	// (0x0003e579) field_cale_ev2_pane_g1_ParamLimits

0x0fe5,	// (0x0003e579) field_cale_ev2_pane_g1

0x0ff1,	// (0x0003e585) field_cale_ev2_pane_g2_ParamLimits

0x0ff1,	// (0x0003e585) field_cale_ev2_pane_g2

0x1009,	// (0x0003e59d) field_cale_ev2_pane_g3_ParamLimits

0x1009,	// (0x0003e59d) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004ccf9) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004ccf9) field_cale_ev2_pane_g

0x102d,	// (0x0003e5c1) field_cale_ev2_pane_t1_ParamLimits

0x102d,	// (0x0003e5c1) field_cale_ev2_pane_t1

0x1044,	// (0x0003e5d8) field_cale_ev2_pane_t2_ParamLimits

0x1044,	// (0x0003e5d8) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004cd02) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004cd02) field_cale_ev2_pane_t

0x4d7e,	// (0x00042312) main_postcard_pane_g5_ParamLimits

0x4d7e,	// (0x00042312) main_postcard_pane_g5

0x4d8c,	// (0x00042320) main_postcard_pane_g6_ParamLimits

0x4d8c,	// (0x00042320) main_postcard_pane_g6

0x2f56,	// (0x000404ea) camera2_autofocus_pane_cp_ParamLimits

0x2f56,	// (0x000404ea) camera2_autofocus_pane_cp

0xade7,	// (0x0004837b) main_mup3_pane

0x6015,	// (0x000435a9) main_mup3_pane_g1_ParamLimits

0x6015,	// (0x000435a9) main_mup3_pane_g1

0x6036,	// (0x000435ca) main_mup3_pane_g2_ParamLimits

0x6036,	// (0x000435ca) main_mup3_pane_g2

0x60b2,	// (0x00043646) main_mup3_pane_g3_ParamLimits

0x60b2,	// (0x00043646) main_mup3_pane_g3

0x60f5,	// (0x00043689) main_mup3_pane_g4_ParamLimits

0x60f5,	// (0x00043689) main_mup3_pane_g4

0x6138,	// (0x000436cc) main_mup3_pane_g5_ParamLimits

0x6138,	// (0x000436cc) main_mup3_pane_g5

0x617d,	// (0x00043711) main_mup3_pane_g6_ParamLimits

0x617d,	// (0x00043711) main_mup3_pane_g6

0xce70,	// (0x0004a404) main_mup3_pane_g7_ParamLimits

0xce70,	// (0x0004a404) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004cd12) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004cd12) main_mup3_pane_g

0x61f3,	// (0x00043787) main_mup3_pane_t1_ParamLimits

0x61f3,	// (0x00043787) main_mup3_pane_t1

0x6262,	// (0x000437f6) main_mup3_pane_t2_ParamLimits

0x6262,	// (0x000437f6) main_mup3_pane_t2

0x632b,	// (0x000438bf) main_mup3_pane_t4_ParamLimits

0x632b,	// (0x000438bf) main_mup3_pane_t4

0x6379,	// (0x0004390d) main_mup3_pane_t5_ParamLimits

0x6379,	// (0x0004390d) main_mup3_pane_t5

0x6429,	// (0x000439bd) main_mup3_pane_t6_ParamLimits

0x6429,	// (0x000439bd) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004cd23) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004cd23) main_mup3_pane_t

0x64d5,	// (0x00043a69) mup3_progress_pane_ParamLimits

0x64d5,	// (0x00043a69) mup3_progress_pane

0x6549,	// (0x00043add) popup_mup3_control_window_ParamLimits

0x6549,	// (0x00043add) popup_mup3_control_window

0xce7e,	// (0x0004a412) popup_mup3_text_window

0x6562,	// (0x00043af6) mup3_progress_pane_t1

0x6581,	// (0x00043b15) mup3_progress_pane_t2

0xce86,	// (0x0004a41a) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004cd30) mup3_progress_pane_t

0xcea3,	// (0x0004a437) mup_progress_pane_cp03

0x9fb0,	// (0x00047544) bg_tb_trans_pane_cp04

0x65a0,	// (0x00043b34) mup3_volume_pane

0x65a8,	// (0x00043b3c) popup_mup3_control_window_g1

0x65b1,	// (0x00043b45) mup3_volume_pane_g1

0x65ba,	// (0x00043b4e) mup3_volume_pane_g2

0x65c3,	// (0x00043b57) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004cd37) mup3_volume_pane_g

0x9fb0,	// (0x00047544) bg_tb_trans_pane_cp03

0xceb3,	// (0x0004a447) popup_mup3_text_window_g1

0xcebb,	// (0x0004a44f) popup_mup3_text_window_t1

0xa77f,	// (0x00047d13) list_calc_item_pane_g1_ParamLimits

0xc8fc,	// (0x00049e90) mup_volume_pane_cp_g1

0x5f85,	// (0x00043519) main_touch_calib_pane_t3

0x5f9b,	// (0x0004352f) main_touch_calib_pane_t4

0x5fb1,	// (0x00043545) main_touch_calib_pane_t5

0x20db,	// (0x0003f66f) aid_cell_size_toolbar2

0x20e3,	// (0x0003f677) aid_popup3_width_pane

0x0caf,	// (0x0003e243) aid_zoom_text_msg_primary

0x2f23,	// (0x000404b7) vorec_t7

0xa743,	// (0x00047cd7) bg_calc_paper_pane_g1_ParamLimits

0xa74f,	// (0x00047ce3) bg_calc_paper_pane_g2_ParamLimits

0xa75b,	// (0x00047cef) bg_calc_paper_pane_g3_ParamLimits

0xa767,	// (0x00047cfb) bg_calc_paper_pane_g4_ParamLimits

0xa773,	// (0x00047d07) bg_calc_paper_pane_g5_ParamLimits

0x2769,	// (0x0003fcfd) bg_calc_paper_pane_g6_ParamLimits

0x277a,	// (0x0003fd0e) bg_calc_paper_pane_g7_ParamLimits

0x278b,	// (0x0003fd1f) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004c6e8) bg_calc_paper_pane_g_ParamLimits

0x279c,	// (0x0003fd30) calc_bg_paper_pane_g9_ParamLimits

0x303d,	// (0x000405d1) image_qvga_pane_ParamLimits

0x303d,	// (0x000405d1) image_qvga_pane

0xa628,	// (0x00047bbc) bg_popup_sub_pane_cp04_ParamLimits

0xb595,	// (0x00048b29) popup_mup_playback_window_g1_ParamLimits

0xb5a1,	// (0x00048b35) popup_mup_playback_window_t1_ParamLimits

0xb5b6,	// (0x00048b4a) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004ca76) popup_mup_playback_window_t_ParamLimits

0x5a84,	// (0x00043018) main_mup2_pane_g3_ParamLimits

0x5a84,	// (0x00043018) main_mup2_pane_g3

0x32f5,	// (0x00040889) popup_toolbar_window_cp04

0xb9ab,	// (0x00048f3f) popup_call2_audio_second_window_g3_ParamLimits

0xb9ab,	// (0x00048f3f) popup_call2_audio_second_window_g3

0xbdb5,	// (0x00049349) popup_call2_audio_first_window_g4_ParamLimits

0xbdb5,	// (0x00049349) popup_call2_audio_first_window_g4

0xc434,	// (0x000499c8) popup_call2_audio_in_window_g4_ParamLimits

0xc434,	// (0x000499c8) popup_call2_audio_in_window_g4

0x4e96,	// (0x0004242a) aid_area_sk_bg_cut_ParamLimits

0x4e96,	// (0x0004242a) aid_area_sk_bg_cut

0xb5cb,	// (0x00048b5f) aid_area_sk_bg_cut_2_ParamLimits

0xb5cb,	// (0x00048b5f) aid_area_sk_bg_cut_2

0x5e14,	// (0x000433a8) aid_placing_details_win

0x5e1c,	// (0x000433b0) aid_placing_details_win_2

0xcd1d,	// (0x0004a2b1) camera2_autofocus_pane_g1_ParamLimits

0x2332,	// (0x0003f8c6) popup_fixed_preview_cale_window_ParamLimits

0x2332,	// (0x0003f8c6) popup_fixed_preview_cale_window

0xb39b,	// (0x0004892f) navi_slider_pane_g3

0xb3a4,	// (0x00048938) navi_slider_pane_g4

0xb3ad,	// (0x00048941) navi_slider_pane_g5

0xb39b,	// (0x0004892f) navi_slider_pane_g6

0x47d7,	// (0x00041d6b) navi_slider_pane_g7

0xb4c0,	// (0x00048a54) mup_scale_pane_g3

0xb4c9,	// (0x00048a5d) mup_scale_pane_g4

0xb4d2,	// (0x00048a66) mup_scale_pane_g5

0x4c16,	// (0x000421aa) mup_scale_pane_g6

0x4c1f,	// (0x000421b3) mup_scale_pane_g7

0xb39b,	// (0x0004892f) cams2_slider_pane_g3

0xc97e,	// (0x00049f12) cams2_slider_pane_g4

0x5d6c,	// (0x00043300) cams2_slider_pane_g5

0xb39b,	// (0x0004892f) cams2_slider_pane_g6

0x5d74,	// (0x00043308) cams2_slider_pane_g7

0xcbab,	// (0x0004a13f) camera2_autofocus_pane_cp_g1

0xc795,	// (0x00049d29) bg_popup_preview_window_pane_cp02_ParamLimits

0xc795,	// (0x00049d29) bg_popup_preview_window_pane_cp02

0xcec9,	// (0x0004a45d) list_fp_cale_pane_ParamLimits

0xcec9,	// (0x0004a45d) list_fp_cale_pane

0xced5,	// (0x0004a469) popup_fixed_preview_cale_window_t1_ParamLimits

0xced5,	// (0x0004a469) popup_fixed_preview_cale_window_t1

0x65cc,	// (0x00043b60) popup_fixed_preview_cale_window_t2_ParamLimits

0x65cc,	// (0x00043b60) popup_fixed_preview_cale_window_t2

0x65e1,	// (0x00043b75) popup_fixed_preview_cale_window_t3_ParamLimits

0x65e1,	// (0x00043b75) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004cd3e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004cd3e) popup_fixed_preview_cale_window_t

0x65f6,	// (0x00043b8a) list_single_fp_cale_pane_ParamLimits

0x65f6,	// (0x00043b8a) list_single_fp_cale_pane

0xcef3,	// (0x0004a487) list_single_fp_cale_pane_g1_ParamLimits

0xcef3,	// (0x0004a487) list_single_fp_cale_pane_g1

0xceff,	// (0x0004a493) list_single_fp_cale_pane_g2_ParamLimits

0xceff,	// (0x0004a493) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004cd45) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004cd45) list_single_fp_cale_pane_g

0xcf18,	// (0x0004a4ac) list_single_fp_cale_pane_t1_ParamLimits

0xcf18,	// (0x0004a4ac) list_single_fp_cale_pane_t1

0xcf2a,	// (0x0004a4be) list_single_fp_cale_pane_t2_ParamLimits

0xcf2a,	// (0x0004a4be) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004cd4c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004cd4c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9fb0,	// (0x00047544) main_dialer_pane

0x660a,	// (0x00043b9e) aid_cell_size_keypad

0x6614,	// (0x00043ba8) dialer_ne_pane

0x661e,	// (0x00043bb2) grid_dialer_command_1_pane

0x6626,	// (0x00043bba) grid_dialer_command_2_pane

0x662e,	// (0x00043bc2) grid_dialer_keypad_pane

0x6642,	// (0x00043bd6) bg_popup_call_pane_cp06_ParamLimits

0x6642,	// (0x00043bd6) bg_popup_call_pane_cp06

0x664e,	// (0x00043be2) dialer_ne_clear_pane_ParamLimits

0x664e,	// (0x00043be2) dialer_ne_clear_pane

0xcf5d,	// (0x0004a4f1) dialer_ne_pane_g1

0xcf65,	// (0x0004a4f9) dialer_ne_pane_t1_ParamLimits

0xcf65,	// (0x0004a4f9) dialer_ne_pane_t1

0x665a,	// (0x00043bee) dialer_ne_pane_t2_ParamLimits

0x665a,	// (0x00043bee) dialer_ne_pane_t2

0x6677,	// (0x00043c0b) dialer_ne_pane_t3_ParamLimits

0x6677,	// (0x00043c0b) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004cd51) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004cd51) dialer_ne_pane_t

0x669b,	// (0x00043c2f) dialer_ne_pane_t3_copy1_ParamLimits

0x669b,	// (0x00043c2f) dialer_ne_pane_t3_copy1

0x66bf,	// (0x00043c53) cell_dialer_keypad_pane_ParamLimits

0x66bf,	// (0x00043c53) cell_dialer_keypad_pane

0x66d6,	// (0x00043c6a) cell_dialer_command_1_pane_ParamLimits

0x66d6,	// (0x00043c6a) cell_dialer_command_1_pane

0x66ec,	// (0x00043c80) cell_dialer_command_2_pane_ParamLimits

0x66ec,	// (0x00043c80) cell_dialer_command_2_pane

0xcf77,	// (0x0004a50b) bg_button_pane_cp02_ParamLimits

0xcf77,	// (0x0004a50b) bg_button_pane_cp02

0x66fb,	// (0x00043c8f) cell_dialer_keypad_pane_g1_ParamLimits

0x66fb,	// (0x00043c8f) cell_dialer_keypad_pane_g1

0xcf77,	// (0x0004a50b) bg_button_pane_cp03_ParamLimits

0xcf77,	// (0x0004a50b) bg_button_pane_cp03

0x6710,	// (0x00043ca4) cell_dialer_command_1_pane_g1_ParamLimits

0x6710,	// (0x00043ca4) cell_dialer_command_1_pane_g1

0xcf83,	// (0x0004a517) bg_button_pane_cp04

0x6724,	// (0x00043cb8) cell_dialer_command_2_pane_g1

0xb38a,	// (0x0004891e) bg_button_pane_cp06

0xcf8b,	// (0x0004a51f) dialer_ne_clear_pane_g1

0xb266,	// (0x000487fa) navi_pane_g2

0xb294,	// (0x00048828) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004c979) navi_pane_g

0xb323,	// (0x000488b7) navi_pane_mv_g2

0xb34a,	// (0x000488de) navi_pane_mv_g5

0x47a2,	// (0x00041d36) navi_pane_mv_t1

0xa737,	// (0x00047ccb) main_clock2_pane

0x6764,	// (0x00043cf8) main_clock2_list_pane_ParamLimits

0x6764,	// (0x00043cf8) main_clock2_list_pane

0x678e,	// (0x00043d22) main_clock2_pane_t1_ParamLimits

0x678e,	// (0x00043d22) main_clock2_pane_t1

0x67b2,	// (0x00043d46) main_clock2_pane_t2_ParamLimits

0x67b2,	// (0x00043d46) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004cd5d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004cd5d) main_clock2_pane_t

0x680d,	// (0x00043da1) popup_clock_analogue_window_cp03_ParamLimits

0x680d,	// (0x00043da1) popup_clock_analogue_window_cp03

0x682b,	// (0x00043dbf) popup_clock_digital_window_cp02_ParamLimits

0x682b,	// (0x00043dbf) popup_clock_digital_window_cp02

0x689a,	// (0x00043e2e) main_clock2_list_single_pane_ParamLimits

0x689a,	// (0x00043e2e) main_clock2_list_single_pane

0xb38a,	// (0x0004891e) list_highlight_pane_cp05

0xcfc5,	// (0x0004a559) main_clock2_list_single_pane_t1

0x32f5,	// (0x00040889) popup_toolbar_window_cp04_ParamLimits

0x5e3e,	// (0x000433d2) camera2_autofocus_pane_g2_ParamLimits

0x5e3e,	// (0x000433d2) camera2_autofocus_pane_g2

0x5e4a,	// (0x000433de) camera2_autofocus_pane_g3_ParamLimits

0x5e4a,	// (0x000433de) camera2_autofocus_pane_g3

0x5e56,	// (0x000433ea) camera2_autofocus_pane_g4_ParamLimits

0x5e56,	// (0x000433ea) camera2_autofocus_pane_g4

0x5e62,	// (0x000433f6) camera2_autofocus_pane_g5_ParamLimits

0x5e62,	// (0x000433f6) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004cca1) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004cca1) camera2_autofocus_pane_g

0x5ff5,	// (0x00043589) camera2_autofocus_pane_cp_g2

0x5ffd,	// (0x00043591) camera2_autofocus_pane_cp_g3

0x6005,	// (0x00043599) camera2_autofocus_pane_cp_g4

0x600d,	// (0x000435a1) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004cd07) camera2_autofocus_pane_cp_g

0x663a,	// (0x00043bce) popup_dialer_spcha_window

0x9fb0,	// (0x00047544) bg_popup_sub_pane_cp07

0xcfd3,	// (0x0004a567) list_spcha_pane

0xcfdb,	// (0x0004a56f) list_single_spcha_pane_ParamLimits

0xcfdb,	// (0x0004a56f) list_single_spcha_pane

0x9fb0,	// (0x00047544) list_highlight_pane_cp06

0xcfec,	// (0x0004a580) list_single_spcha_pane_t1

0xc1de,	// (0x00049772) popup_call2_audio_out_window_g4_ParamLimits

0xc1de,	// (0x00049772) popup_call2_audio_out_window_g4

0x9fb0,	// (0x00047544) main_imed2_pane

0x54d3,	// (0x00042a67) popup_imed_adjust2_window

0x54e6,	// (0x00042a7a) popup_imed_trans_window_ParamLimits

0x54e6,	// (0x00042a7a) popup_imed_trans_window

0xc9e7,	// (0x00049f7b) popup_blid_sat_info2_window_t1

0xc9f5,	// (0x00049f89) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004cc36) popup_blid_sat_info2_window_t

0x6944,	// (0x00043ed8) aid_size_cell_colour_35

0x695e,	// (0x00043ef2) aid_size_cell_colour_112

0x6975,	// (0x00043f09) aid_size_cell_effect

0xade7,	// (0x0004837b) bg_tb_trans_pane_cp02

0xb511,	// (0x00048aa5) heading_imed_pane

0x698f,	// (0x00043f23) listscroll_imed_pane

0xcffa,	// (0x0004a58e) heading_imed_pane_g1

0xd002,	// (0x0004a596) heading_imed_pane_t1

0xd010,	// (0x0004a5a4) grid_imed_colour_35_pane_ParamLimits

0xd010,	// (0x0004a5a4) grid_imed_colour_35_pane

0x699b,	// (0x00043f2f) grid_imed_effect_pane

0xd028,	// (0x0004a5bc) list_imed_aspect_pane

0x69ab,	// (0x00043f3f) scroll_pane_cp027_ParamLimits

0x69ab,	// (0x00043f3f) scroll_pane_cp027

0x69b7,	// (0x00043f4b) cell_imed_effect_pane_ParamLimits

0x69b7,	// (0x00043f4b) cell_imed_effect_pane

0xd030,	// (0x0004a5c4) cell_imed_colour_pane_ParamLimits

0xd030,	// (0x0004a5c4) cell_imed_colour_pane

0xd072,	// (0x0004a606) cell_imed_colour_pane_g1_ParamLimits

0xd072,	// (0x0004a606) cell_imed_colour_pane_g1

0xd083,	// (0x0004a617) hgihlgiht_grid_pane_cp016_ParamLimits

0xd083,	// (0x0004a617) hgihlgiht_grid_pane_cp016

0x69cf,	// (0x00043f63) cell_imed_effect_pane_g1

0x69d7,	// (0x00043f6b) grid_highlight_pane_cp017

0xd094,	// (0x0004a628) list_imed_single_pane_ParamLimits

0xd094,	// (0x0004a628) list_imed_single_pane

0x9fb0,	// (0x00047544) list_highlight_pane_cp07

0xd0aa,	// (0x0004a63e) list_imed_aspect_pane_comp1_t1

0xc7a1,	// (0x00049d35) bg_tb_trans_pane_cp05

0xd0cc,	// (0x0004a660) popup_imed_adjust2_window_g1

0xd0f3,	// (0x0004a687) popup_imed_adjust2_window_t1

0xd10b,	// (0x0004a69f) slider_imed_adjust_pane

0xd11f,	// (0x0004a6b3) slider_imed_adjust_pane_g1

0xd12f,	// (0x0004a6c3) slider_imed_adjust_pane_g2

0xd13f,	// (0x0004a6d3) slider_imed_adjust_pane_g3

0xd150,	// (0x0004a6e4) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004cd7a) slider_imed_adjust_pane_g

0x69e0,	// (0x00043f74) aid_size_cell_clipart2

0x69ec,	// (0x00043f80) grid_imed_clipart_pane

0xd161,	// (0x0004a6f5) scroll_pane_cp031

0x69f6,	// (0x00043f8a) cell_imed_clipart_pane_ParamLimits

0x69f6,	// (0x00043f8a) cell_imed_clipart_pane

0x6a1d,	// (0x00043fb1) cell_imed_clipart_pane_g1

0x9fb0,	// (0x00047544) grid_highlight_pane_cp014

0x6770,	// (0x00043d04) main_clock2_pane_g1_ParamLimits

0x6770,	// (0x00043d04) main_clock2_pane_g1

0x6845,	// (0x00043dd9) aid_call2_pane_cp10

0x6857,	// (0x00043deb) aid_call_pane_cp10

0xb1c5,	// (0x00048759) popup_clock_analogue_window_cp10_g1

0xb1c5,	// (0x00048759) popup_clock_analogue_window_cp10_g2

0x6869,	// (0x00043dfd) popup_clock_analogue_window_cp10_g3

0x6869,	// (0x00043dfd) popup_clock_analogue_window_cp10_g4

0xb1c5,	// (0x00048759) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004cd68) popup_clock_analogue_window_cp10_g

0x687b,	// (0x00043e0f) popup_clock_analogue_window_cp10_t1

0x68ac,	// (0x00043e40) clock_digital_number_pane_cp10_ParamLimits

0x68ac,	// (0x00043e40) clock_digital_number_pane_cp10

0x68c4,	// (0x00043e58) clock_digital_number_pane_cp11_ParamLimits

0x68c4,	// (0x00043e58) clock_digital_number_pane_cp11

0x68dc,	// (0x00043e70) clock_digital_number_pane_cp12_ParamLimits

0x68dc,	// (0x00043e70) clock_digital_number_pane_cp12

0x68f4,	// (0x00043e88) clock_digital_number_pane_cp13_ParamLimits

0x68f4,	// (0x00043e88) clock_digital_number_pane_cp13

0x690c,	// (0x00043ea0) clock_digital_separator_pane_cp10_ParamLimits

0x690c,	// (0x00043ea0) clock_digital_separator_pane_cp10

0x6924,	// (0x00043eb8) popup_clock_digital_window_cp02_t1_ParamLimits

0x6924,	// (0x00043eb8) popup_clock_digital_window_cp02_t1

0xa620,	// (0x00047bb4) clock_digital_number_pane_cp10_g1

0xa620,	// (0x00047bb4) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004cd83) clock_digital_number_pane_cp10_g

0xa620,	// (0x00047bb4) clock_digital_separator_pane_cp10_g1

0xa620,	// (0x00047bb4) clock_digital_separator_pane_g2_cp10

0xb352,	// (0x000488e6) navi_pane_vded_g4

0xb35b,	// (0x000488ef) navi_pane_vded_g5

0xb364,	// (0x000488f8) navi_pane_vded_t1

0x9fb0,	// (0x00047544) main_vded_pane

0x6a26,	// (0x00043fba) main_vded_pane_g1

0x6a32,	// (0x00043fc6) main_vded_pane_g2

0x6a3c,	// (0x00043fd0) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004cd88) main_vded_pane_g

0x6a46,	// (0x00043fda) main_vded_pane_t1

0x6a54,	// (0x00043fe8) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004cd8f) main_vded_pane_t

0x6a62,	// (0x00043ff6) vded_slider_pane

0x6a6c,	// (0x00044000) vded_video_pane

0xd169,	// (0x0004a6fd) vded_video_pane_g1

0x6a76,	// (0x0004400a) vded_video_pane_g2

0xcbab,	// (0x0004a13f) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004cd94) vded_video_pane_g

0xd173,	// (0x0004a707) vded_slider_pane_g1

0xd17c,	// (0x0004a710) vded_slider_pane_g2

0xd185,	// (0x0004a719) vded_slider_pane_g3

0xd18e,	// (0x0004a722) vded_slider_pane_g4

0xd197,	// (0x0004a72b) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004cd9b) vded_slider_pane_g

0x653b,	// (0x00043acf) mup3_rocker_pane_ParamLimits

0x653b,	// (0x00043acf) mup3_rocker_pane

0x6a7f,	// (0x00044013) mup3_control_keys_pane_g1

0x6a87,	// (0x0004401b) mup3_control_keys_pane_g2

0x6a8f,	// (0x00044023) mup3_control_keys_pane_g3

0x6a97,	// (0x0004402b) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004cda6) mup3_control_keys_pane_g

0x235a,	// (0x0003f8ee) popup_toolbar2_fixed_window_cp01_ParamLimits

0x235a,	// (0x0003f8ee) popup_toolbar2_fixed_window_cp01

0x6555,	// (0x00043ae9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6555,	// (0x00043ae9) popup_toolbar2_fixed_window_cp02

0xbb1d,	// (0x000490b1) popup_call2_audio_second_window_t4_ParamLimits

0xbb1d,	// (0x000490b1) popup_call2_audio_second_window_t4

0xc04b,	// (0x000495df) popup_call2_audio_first_window_t6_ParamLimits

0xc04b,	// (0x000495df) popup_call2_audio_first_window_t6

0xc2e1,	// (0x00049875) popup_call2_audio_out_window_t6_ParamLimits

0xc2e1,	// (0x00049875) popup_call2_audio_out_window_t6

0x9fb0,	// (0x00047544) main_vitu_pane

0x6aa7,	// (0x0004403b) aid_size_cell_itu_ParamLimits

0x6aa7,	// (0x0004403b) aid_size_cell_itu

0xdc53,	// (0x0004b1e7) bg_popup_window_pane_cp08_ParamLimits

0xdc53,	// (0x0004b1e7) bg_popup_window_pane_cp08

0x6ab5,	// (0x00044049) field_vitu_entry_pane_ParamLimits

0x6ab5,	// (0x00044049) field_vitu_entry_pane

0x6ac4,	// (0x00044058) grid_vitu_function_pane_ParamLimits

0x6ac4,	// (0x00044058) grid_vitu_function_pane

0x6ad4,	// (0x00044068) grid_vitu_itu_pane_ParamLimits

0x6ad4,	// (0x00044068) grid_vitu_itu_pane

0x6ae4,	// (0x00044078) cell_vitu_itu_pane_ParamLimits

0x6ae4,	// (0x00044078) cell_vitu_itu_pane

0x6af9,	// (0x0004408d) cell_vitu_function_pane_ParamLimits

0x6af9,	// (0x0004408d) cell_vitu_function_pane

0xade7,	// (0x0004837b) bg_popup_sub_pane_cp08_ParamLimits

0xade7,	// (0x0004837b) bg_popup_sub_pane_cp08

0x6b0d,	// (0x000440a1) field_vitu_entry_pane_t1_ParamLimits

0x6b0d,	// (0x000440a1) field_vitu_entry_pane_t1

0xd1b8,	// (0x0004a74c) field_vitu_entry_pane_t2_ParamLimits

0xd1b8,	// (0x0004a74c) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004cdb4) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004cdb4) field_vitu_entry_pane_t

0xd1d5,	// (0x0004a769) bg_button_pane_cp05_ParamLimits

0xd1d5,	// (0x0004a769) bg_button_pane_cp05

0x6b2a,	// (0x000440be) cell_vitu_itu_pane_g1

0x6b42,	// (0x000440d6) cell_vitu_itu_pane_t1_ParamLimits

0x6b42,	// (0x000440d6) cell_vitu_itu_pane_t1

0x6b54,	// (0x000440e8) cell_vitu_itu_pane_t2_ParamLimits

0x6b54,	// (0x000440e8) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004cdb9) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004cdb9) cell_vitu_itu_pane_t

0xd1e3,	// (0x0004a777) bg_button_pane_cp07

0x6b97,	// (0x0004412b) cell_vitu_function_pane_g1

0x260d,	// (0x0003fba1) main_calc_pane_g1

0x2117,	// (0x0003f6ab) aid_visual_content_pane

0x9fb0,	// (0x00047544) main_vradio_pane

0x6ba0,	// (0x00044134) main_vradio_pane_g1_ParamLimits

0x6ba0,	// (0x00044134) main_vradio_pane_g1

0xd1ed,	// (0x0004a781) main_vradio_pane_g2_ParamLimits

0xd1ed,	// (0x0004a781) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004cdc0) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004cdc0) main_vradio_pane_g

0x6bb0,	// (0x00044144) main_vradio_pane_t1_ParamLimits

0x6bb0,	// (0x00044144) main_vradio_pane_t1

0x6bc2,	// (0x00044156) main_vradio_pane_t2_ParamLimits

0x6bc2,	// (0x00044156) main_vradio_pane_t2

0xd1fa,	// (0x0004a78e) main_vradio_pane_t3_ParamLimits

0xd1fa,	// (0x0004a78e) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004cdc5) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004cdc5) main_vradio_pane_t

0x6bd4,	// (0x00044168) vradio_rocker_control_pane_ParamLimits

0x6bd4,	// (0x00044168) vradio_rocker_control_pane

0x6be0,	// (0x00044174) vradio_station_info_pane_ParamLimits

0x6be0,	// (0x00044174) vradio_station_info_pane

0xd20e,	// (0x0004a7a2) vradio_frequency_info_pane_ParamLimits

0xd20e,	// (0x0004a7a2) vradio_frequency_info_pane

0xcbab,	// (0x0004a13f) vradio_station_info_pane_g1

0xd21d,	// (0x0004a7b1) vradio_station_info_pane_t1_ParamLimits

0xd21d,	// (0x0004a7b1) vradio_station_info_pane_t1

0xd23f,	// (0x0004a7d3) vradio_station_info_pane_t2_ParamLimits

0xd23f,	// (0x0004a7d3) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004cdcc) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004cdcc) vradio_station_info_pane_t

0xd251,	// (0x0004a7e5) vradio_tuning_pane

0xd259,	// (0x0004a7ed) vradio_rocker_control_pane_g1

0xd261,	// (0x0004a7f5) vradio_rocker_control_pane_g2

0xd269,	// (0x0004a7fd) vradio_rocker_control_pane_g3

0xd271,	// (0x0004a805) vradio_rocker_control_pane_g4

0xd279,	// (0x0004a80d) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004cdd1) vradio_rocker_control_pane_g

0x6bef,	// (0x00044183) vradio_frequency_info_pane_g1

0xd281,	// (0x0004a815) vradio_frequency_info_pane_t1_ParamLimits

0xd281,	// (0x0004a815) vradio_frequency_info_pane_t1

0x6bf9,	// (0x0004418d) vradio_tuning_pane_g1

0x6c02,	// (0x00044196) vradio_tuning_pane_t1

0x2160,	// (0x0003f6f4) area_side_right_pane_ParamLimits

0x2160,	// (0x0003f6f4) area_side_right_pane

0xc75c,	// (0x00049cf0) status_small_pane_g1

0xc764,	// (0x00049cf8) status_small_pane_g2

0xc76d,	// (0x00049d01) status_small_pane_g3

0xc776,	// (0x00049d0a) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004cb8c) status_small_pane_g

0xc77f,	// (0x00049d13) status_small_pane_t1

0x9fb0,	// (0x00047544) main_video3_pane

0xd295,	// (0x0004a829) cams_zoom_vslider_pane

0xd29d,	// (0x0004a831) image3_wide_pane_ParamLimits

0xd29d,	// (0x0004a831) image3_wide_pane

0xd2b7,	// (0x0004a84b) image3_wide_small_pane

0xd2c3,	// (0x0004a857) main_video3_pane_g1_ParamLimits

0xd2c3,	// (0x0004a857) main_video3_pane_g1

0xd2df,	// (0x0004a873) main_video3_pane_g2_ParamLimits

0xd2df,	// (0x0004a873) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004cddc) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004cddc) main_video3_pane_g

0xd2fb,	// (0x0004a88f) main_video3_pane_t1_ParamLimits

0xd2fb,	// (0x0004a88f) main_video3_pane_t1

0xd326,	// (0x0004a8ba) main_video3_pane_t2_ParamLimits

0xd326,	// (0x0004a8ba) main_video3_pane_t2

0xd351,	// (0x0004a8e5) main_video3_pane_t3_ParamLimits

0xd351,	// (0x0004a8e5) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004cde1) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004cde1) main_video3_pane_t

0xd37e,	// (0x0004a912) cams_zoom_vslider_pane_g1

0xd387,	// (0x0004a91b) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004cde8) cams_zoom_vslider_pane_g

0xd38f,	// (0x0004a923) small_slider_vertical_pane

0xcbab,	// (0x0004a13f) small_slider_vertical_pane_g1

0xcbab,	// (0x0004a13f) small_slider_vertical_pane_g2

0xd397,	// (0x0004a92b) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004cded) small_slider_vertical_pane_g

0x9fb0,	// (0x00047544) main_hwr_training_pane

0xd3a0,	// (0x0004a934) hwr_training_instruct_pane_ParamLimits

0xd3a0,	// (0x0004a934) hwr_training_instruct_pane

0x6c11,	// (0x000441a5) hwr_training_navi_pane_ParamLimits

0x6c11,	// (0x000441a5) hwr_training_navi_pane

0x6c2b,	// (0x000441bf) hwr_training_write_pane_ParamLimits

0x6c2b,	// (0x000441bf) hwr_training_write_pane

0x9fb0,	// (0x00047544) bg_frame_shadow_pane

0xd3d7,	// (0x0004a96b) hwr_training_write_pane_g1

0xd3df,	// (0x0004a973) hwr_training_write_pane_g2

0xd3e7,	// (0x0004a97b) hwr_training_write_pane_g3

0xd3ef,	// (0x0004a983) hwr_training_write_pane_g4

0xd3f7,	// (0x0004a98b) hwr_training_write_pane_g5

0xd3ff,	// (0x0004a993) hwr_training_write_pane_g6

0xd407,	// (0x0004a99b) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004cdf4) hwr_training_write_pane_g

0x6c63,	// (0x000441f7) hwr_training_navi_pane_g1_ParamLimits

0x6c63,	// (0x000441f7) hwr_training_navi_pane_g1

0x6c75,	// (0x00044209) hwr_training_navi_pane_g2_ParamLimits

0x6c75,	// (0x00044209) hwr_training_navi_pane_g2

0x6c87,	// (0x0004421b) hwr_training_navi_pane_g3_ParamLimits

0x6c87,	// (0x0004421b) hwr_training_navi_pane_g3

0x6c97,	// (0x0004422b) hwr_training_navi_pane_g4_ParamLimits

0x6c97,	// (0x0004422b) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004ce03) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004ce03) hwr_training_navi_pane_g

0x6cb1,	// (0x00044245) hwr_training_navi_pane_t1

0x6cbf,	// (0x00044253) list_single_hwr_training_instruct_pane_ParamLimits

0x6cbf,	// (0x00044253) list_single_hwr_training_instruct_pane

0xd40f,	// (0x0004a9a3) list_single_hwr_training_instruct_pane_t1

0xcaeb,	// (0x0004a07f) bg_frame_shadow_pane_g1

0xd41e,	// (0x0004a9b2) bg_frame_shadow_pane_g2

0xd426,	// (0x0004a9ba) bg_frame_shadow_pane_g3

0xd42e,	// (0x0004a9c2) bg_frame_shadow_pane_g4

0xd436,	// (0x0004a9ca) bg_frame_shadow_pane_g5

0xd43e,	// (0x0004a9d2) bg_frame_shadow_pane_g6

0xd446,	// (0x0004a9da) bg_frame_shadow_pane_g7

0xa802,	// (0x00047d96) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004ce0e) bg_frame_shadow_pane_g

0x9fb0,	// (0x00047544) main_video_tele_dialer_pane

0x6cee,	// (0x00044282) aid_size_cell_video_keypad_ParamLimits

0x6cee,	// (0x00044282) aid_size_cell_video_keypad

0x6cfe,	// (0x00044292) grid_video_dialer_keypad_pane_ParamLimits

0x6cfe,	// (0x00044292) grid_video_dialer_keypad_pane

0x6d32,	// (0x000442c6) video_down_pane_cp_ParamLimits

0x6d32,	// (0x000442c6) video_down_pane_cp

0x6d5c,	// (0x000442f0) cell_video_dialer_keypad_pane_ParamLimits

0x6d5c,	// (0x000442f0) cell_video_dialer_keypad_pane

0xd44e,	// (0x0004a9e2) bg_button_pane_cp08_ParamLimits

0xd44e,	// (0x0004a9e2) bg_button_pane_cp08

0x6d71,	// (0x00044305) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6d71,	// (0x00044305) cell_video_dialer_keypad_pane_g1

0x652f,	// (0x00043ac3) mup3_rocker2_pane_ParamLimits

0x652f,	// (0x00043ac3) mup3_rocker2_pane

0xcbab,	// (0x0004a13f) mup3_rocker2_pane_g1

0x5447,	// (0x000429db) main_dialer2_pane

0x9fb0,	// (0x00047544) main_mp4_pane

0x6db4,	// (0x00044348) main_mp4_pane_g1_ParamLimits

0x6db4,	// (0x00044348) main_mp4_pane_g1

0x6dc2,	// (0x00044356) main_mp4_pane_g2_ParamLimits

0x6dc2,	// (0x00044356) main_mp4_pane_g2

0x6dd0,	// (0x00044364) main_mp4_pane_g3_ParamLimits

0x6dd0,	// (0x00044364) main_mp4_pane_g3

0x6e15,	// (0x000443a9) main_mp4_pane_g4_ParamLimits

0x6e15,	// (0x000443a9) main_mp4_pane_g4

0x6e3d,	// (0x000443d1) main_mp4_pane_g5_ParamLimits

0x6e3d,	// (0x000443d1) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004ce2e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004ce2e) main_mp4_pane_g

0x6e8d,	// (0x00044421) main_mp4_pane_t1_ParamLimits

0x6e8d,	// (0x00044421) main_mp4_pane_t1

0x6ee9,	// (0x0004447d) main_mp4_pane_t2_ParamLimits

0x6ee9,	// (0x0004447d) main_mp4_pane_t2

0xd45a,	// (0x0004a9ee) main_mp4_pane_t3_ParamLimits

0xd45a,	// (0x0004a9ee) main_mp4_pane_t3

0x6f3b,	// (0x000444cf) main_mp4_pane_t4_ParamLimits

0x6f3b,	// (0x000444cf) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004ce3b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004ce3b) main_mp4_pane_t

0x6f7f,	// (0x00044513) mp4_progress_pane_ParamLimits

0x6f7f,	// (0x00044513) mp4_progress_pane

0x6fc9,	// (0x0004455d) mp4_rocker_pane_ParamLimits

0x6fc9,	// (0x0004455d) mp4_rocker_pane

0xd482,	// (0x0004aa16) mp4_progress_pane_t1

0xd49b,	// (0x0004aa2f) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004ce44) mp4_progress_pane_t

0xd4b4,	// (0x0004aa48) mup_progress_pane_cp04

0xcbab,	// (0x0004a13f) mp4_rocker_pane_g1

0x6fe9,	// (0x0004457d) aid_cell_size_keypad2_ParamLimits

0x6fe9,	// (0x0004457d) aid_cell_size_keypad2

0x6ff9,	// (0x0004458d) dialer2_ne_pane_ParamLimits

0x6ff9,	// (0x0004458d) dialer2_ne_pane

0x7007,	// (0x0004459b) grid_dialer2_keypad_pane_ParamLimits

0x7007,	// (0x0004459b) grid_dialer2_keypad_pane

0xdc61,	// (0x0004b1f5) bg_popup_call_pane_cp07_ParamLimits

0xdc61,	// (0x0004b1f5) bg_popup_call_pane_cp07

0x7017,	// (0x000445ab) dialer2_ne_pane_t1_ParamLimits

0x7017,	// (0x000445ab) dialer2_ne_pane_t1

0x703c,	// (0x000445d0) cell_dialer2_keypad_pane_ParamLimits

0x703c,	// (0x000445d0) cell_dialer2_keypad_pane

0xd4d2,	// (0x0004aa66) bg_button_pane_pane_cp04_ParamLimits

0xd4d2,	// (0x0004aa66) bg_button_pane_pane_cp04

0x7051,	// (0x000445e5) cell_dialer2_keypad_pane_g1_ParamLimits

0x7051,	// (0x000445e5) cell_dialer2_keypad_pane_g1

0x31b7,	// (0x0004074b) aid_placing_vt_set_content_ParamLimits

0x31b7,	// (0x0004074b) aid_placing_vt_set_content

0x31e3,	// (0x00040777) aid_placing_vt_set_title_ParamLimits

0x31e3,	// (0x00040777) aid_placing_vt_set_title

0x9fb0,	// (0x00047544) main_image3_pane

0x70eb,	// (0x0004467f) area_side_right_pane_cp01_ParamLimits

0x70eb,	// (0x0004467f) area_side_right_pane_cp01

0xa6a3,	// (0x00047c37) main_image3_pane_g1_ParamLimits

0xa6a3,	// (0x00047c37) main_image3_pane_g1

0x7118,	// (0x000446ac) main_image3_pane_g2_ParamLimits

0x7118,	// (0x000446ac) main_image3_pane_g2

0x7131,	// (0x000446c5) main_image3_pane_g3_ParamLimits

0x7131,	// (0x000446c5) main_image3_pane_g3

0x714a,	// (0x000446de) main_image3_pane_g4_ParamLimits

0x714a,	// (0x000446de) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004ce53) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004ce53) main_image3_pane_g

0x7163,	// (0x000446f7) main_image3_pane_t1_ParamLimits

0x7163,	// (0x000446f7) main_image3_pane_t1

0x7188,	// (0x0004471c) main_image3_pane_t2_ParamLimits

0x7188,	// (0x0004471c) main_image3_pane_t2

0x71a7,	// (0x0004473b) main_image3_pane_t3_ParamLimits

0x71a7,	// (0x0004473b) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004ce5c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004ce5c) main_image3_pane_t

0xdc53,	// (0x0004b1e7) grid_sctrl_middle_pane_cp01_ParamLimits

0xdc53,	// (0x0004b1e7) grid_sctrl_middle_pane_cp01

0x7208,	// (0x0004479c) cell_sctrl_middle_pane_cp01_ParamLimits

0x7208,	// (0x0004479c) cell_sctrl_middle_pane_cp01

0x7219,	// (0x000447ad) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7219,	// (0x000447ad) cell_sctrl_middle_pane_cp01_g1

0x9fb0,	// (0x00047544) main_call4_pane

0x7226,	// (0x000447ba) aid_size_button_call4_ParamLimits

0x7226,	// (0x000447ba) aid_size_button_call4

0x7256,	// (0x000447ea) call4_windows_pane_ParamLimits

0x7256,	// (0x000447ea) call4_windows_pane

0x7270,	// (0x00044804) grid_call4_button_pane_ParamLimits

0x7270,	// (0x00044804) grid_call4_button_pane

0xd4de,	// (0x0004aa72) call4_windows_conf_pane

0xd4f3,	// (0x0004aa87) popup_call4_audio_first_window_ParamLimits

0xd4f3,	// (0x0004aa87) popup_call4_audio_first_window

0xd53f,	// (0x0004aad3) popup_call4_audio_second_window_ParamLimits

0xd53f,	// (0x0004aad3) popup_call4_audio_second_window

0xd553,	// (0x0004aae7) popup_call4_audio_wait_window_ParamLimits

0xd553,	// (0x0004aae7) popup_call4_audio_wait_window

0x7294,	// (0x00044828) cell_call4_button_pane_ParamLimits

0x7294,	// (0x00044828) cell_call4_button_pane

0x72b9,	// (0x0004484d) bg_button_pane_cp09_ParamLimits

0x72b9,	// (0x0004484d) bg_button_pane_cp09

0x72c5,	// (0x00044859) cell_call4_button_pane_g1_ParamLimits

0x72c5,	// (0x00044859) cell_call4_button_pane_g1

0x72d2,	// (0x00044866) cell_call4_button_pane_t1_ParamLimits

0x72d2,	// (0x00044866) cell_call4_button_pane_t1

0xd59b,	// (0x0004ab2f) popup_call4_audio_conf_window_ParamLimits

0xd59b,	// (0x0004ab2f) popup_call4_audio_conf_window

0x6562,	// (0x00043af6) mup3_progress_pane_t1_ParamLimits

0x6581,	// (0x00043b15) mup3_progress_pane_t2_ParamLimits

0xce86,	// (0x0004a41a) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004cd30) mup3_progress_pane_t_ParamLimits

0xcea3,	// (0x0004a437) mup_progress_pane_cp03_ParamLimits

0x6a9f,	// (0x00044033) mup3_control_keys_pane_g4_copy1

0x6fad,	// (0x00044541) mp4_rocker2_pane_ParamLimits

0x6fad,	// (0x00044541) mp4_rocker2_pane

0xd5af,	// (0x0004ab43) mp4_rocker2_pane_g1

0xd5b7,	// (0x0004ab4b) mp4_rocker2_pane_g2

0x72e4,	// (0x00044878) mp4_rocker2_pane_g3

0x72ec,	// (0x00044880) mp4_rocker2_pane_g4

0x72f4,	// (0x00044888) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004ce65) mp4_rocker2_pane_g

0x9fb0,	// (0x00047544) main_camera4_pane

0x9fb0,	// (0x00047544) main_video4_pane

0x6d0e,	// (0x000442a2) main_video_tele_dialer_pane_t1_ParamLimits

0x6d0e,	// (0x000442a2) main_video_tele_dialer_pane_t1

0x6d20,	// (0x000442b4) main_video_tele_dialer_pane_t2_ParamLimits

0x6d20,	// (0x000442b4) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004ce1f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004ce1f) main_video_tele_dialer_pane_t

0x7314,	// (0x000448a8) cam4_autofocus_pane_ParamLimits

0x7314,	// (0x000448a8) cam4_autofocus_pane

0x732e,	// (0x000448c2) cam4_image_uncrop_pane_ParamLimits

0x732e,	// (0x000448c2) cam4_image_uncrop_pane

0x7345,	// (0x000448d9) cam4_indicators_pane_ParamLimits

0x7345,	// (0x000448d9) cam4_indicators_pane

0x7361,	// (0x000448f5) main_camera4_pane_g1_ParamLimits

0x7361,	// (0x000448f5) main_camera4_pane_g1

0x736d,	// (0x00044901) main_camera4_pane_g2_ParamLimits

0x736d,	// (0x00044901) main_camera4_pane_g2

0x736d,	// (0x00044901) main_camera4_pane_g3_ParamLimits

0x736d,	// (0x00044901) main_camera4_pane_g3

0x7379,	// (0x0004490d) main_camera4_pane_g4_ParamLimits

0x7379,	// (0x0004490d) main_camera4_pane_g4

0x7385,	// (0x00044919) main_camera4_pane_g5_ParamLimits

0x7385,	// (0x00044919) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004ce70) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004ce70) main_camera4_pane_g

0x739f,	// (0x00044933) main_camera4_pane_t1_ParamLimits

0x739f,	// (0x00044933) main_camera4_pane_t1

0xce0b,	// (0x0004a39f) bg_tb_trans_pane_cp06

0x73ef,	// (0x00044983) cam4_indicators_pane_g1

0x7400,	// (0x00044994) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004ce8b) cam4_indicators_pane_g

0x741e,	// (0x000449b2) cam4_indicators_pane_t1

0x7448,	// (0x000449dc) main_video4_pane_g1_ParamLimits

0x7448,	// (0x000449dc) main_video4_pane_g1

0x7454,	// (0x000449e8) main_video4_pane_g2_ParamLimits

0x7454,	// (0x000449e8) main_video4_pane_g2

0x7460,	// (0x000449f4) main_video4_pane_g3_ParamLimits

0x7460,	// (0x000449f4) main_video4_pane_g3

0x746c,	// (0x00044a00) main_video4_pane_g4_ParamLimits

0x746c,	// (0x00044a00) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004ce92) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004ce92) main_video4_pane_g

0x748c,	// (0x00044a20) vid4_indicators_pane_ParamLimits

0x748c,	// (0x00044a20) vid4_indicators_pane

0x74ab,	// (0x00044a3f) video4_image_uncrop_cif_pane_ParamLimits

0x74ab,	// (0x00044a3f) video4_image_uncrop_cif_pane

0x74ba,	// (0x00044a4e) video4_image_uncrop_nhd_pane_ParamLimits

0x74ba,	// (0x00044a4e) video4_image_uncrop_nhd_pane

0x732e,	// (0x000448c2) video4_image_uncrop_vga_pane_ParamLimits

0x732e,	// (0x000448c2) video4_image_uncrop_vga_pane

0xade7,	// (0x0004837b) bg_tb_trans_pane_cp07

0x74cf,	// (0x00044a63) vid4_indicators_pane_g1

0x74e3,	// (0x00044a77) vid4_indicators_pane_g2

0x74f7,	// (0x00044a8b) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004ce9d) vid4_indicators_pane_g

0x7524,	// (0x00044ab8) vid4_indicators_pane_t1

0x753b,	// (0x00044acf) cam4_autofocus_pane_g1

0x7543,	// (0x00044ad7) cam4_autofocus_pane_g2

0x754b,	// (0x00044adf) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004cea8) cam4_autofocus_pane_g

0x7553,	// (0x00044ae7) cam4_autofocus_pane_g3_copy1

0x6d40,	// (0x000442d4) video_down_pane_cp_t1

0x6d4e,	// (0x000442e2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004ce24) video_down_pane_cp_t

0xdc53,	// (0x0004b1e7) popup_vitu2_window_ParamLimits

0xdc53,	// (0x0004b1e7) popup_vitu2_window

0x755b,	// (0x00044aef) aid_size_cell2_itu2_ParamLimits

0x755b,	// (0x00044aef) aid_size_cell2_itu2

0x757d,	// (0x00044b11) aid_size_cell_itu2_ParamLimits

0x757d,	// (0x00044b11) aid_size_cell_itu2

0xdc61,	// (0x0004b1f5) bg_popup_window_pane_cp09_ParamLimits

0xdc61,	// (0x0004b1f5) bg_popup_window_pane_cp09

0x75c1,	// (0x00044b55) field_vitu2_entry_pane_ParamLimits

0x75c1,	// (0x00044b55) field_vitu2_entry_pane

0x75e1,	// (0x00044b75) grid_vitu2_function_pane_ParamLimits

0x75e1,	// (0x00044b75) grid_vitu2_function_pane

0x7625,	// (0x00044bb9) grid_vitu2_itu_pane_ParamLimits

0x7625,	// (0x00044bb9) grid_vitu2_itu_pane

0x769b,	// (0x00044c2f) cell_vitu2_itu_pane_ParamLimits

0x769b,	// (0x00044c2f) cell_vitu2_itu_pane

0x76b0,	// (0x00044c44) cell_vitu2_function_pane_ParamLimits

0x76b0,	// (0x00044c44) cell_vitu2_function_pane

0xd5bf,	// (0x0004ab53) bg_popup_call_pane_cp08_ParamLimits

0xd5bf,	// (0x0004ab53) bg_popup_call_pane_cp08

0xd5d6,	// (0x0004ab6a) field_vitu2_entry_pane_g1

0xd5e2,	// (0x0004ab76) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004ceaf) field_vitu2_entry_pane_g

0x1059,	// (0x0003e5ed) field_vitu2_entry_pane_t1_ParamLimits

0x1059,	// (0x0003e5ed) field_vitu2_entry_pane_t1

0x1086,	// (0x0003e61a) field_vitu2_entry_pane_t2_ParamLimits

0x1086,	// (0x0003e61a) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004ceb6) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004ceb6) field_vitu2_entry_pane_t

0x76f1,	// (0x00044c85) bg_button_pane_cp010_ParamLimits

0x76f1,	// (0x00044c85) bg_button_pane_cp010

0x76ff,	// (0x00044c93) cell_vitu2_itu_pane_g1

0x7728,	// (0x00044cbc) cell_vitu2_itu_pane_t1_ParamLimits

0x7728,	// (0x00044cbc) cell_vitu2_itu_pane_t1

0x10a3,	// (0x0003e637) cell_vitu2_itu_pane_t2_ParamLimits

0x10a3,	// (0x0003e637) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004cec0) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004cec0) cell_vitu2_itu_pane_t

0xade7,	// (0x0004837b) bg_button_pane_cp011

0x7774,	// (0x00044d08) cell_vitu2_function_pane_g1

0x9fb0,	// (0x00047544) main_myfav_hc_pane

0x71e9,	// (0x0004477d) popup_image3_note_pane_ParamLimits

0x71e9,	// (0x0004477d) popup_image3_note_pane

0x71f7,	// (0x0004478b) popup_image3_tool_bar_pane_ParamLimits

0x71f7,	// (0x0004478b) popup_image3_tool_bar_pane

0x1111,	// (0x0003e6a5) cell_vitu2_itu_pane_t3_ParamLimits

0x1111,	// (0x0003e6a5) cell_vitu2_itu_pane_t3

0x9fb0,	// (0x00047544) bg_popup_trans_pane

0xd604,	// (0x0004ab98) grid_image3_tool_bar_pane

0xd60e,	// (0x0004aba2) bg_popup_trans_pane_g1

0xab57,	// (0x000480eb) bg_popup_trans_pane_g2

0xd616,	// (0x0004abaa) bg_popup_trans_pane_g3

0xd61e,	// (0x0004abb2) bg_popup_trans_pane_g4

0xd626,	// (0x0004abba) bg_popup_trans_pane_g5

0xd62e,	// (0x0004abc2) bg_popup_trans_pane_g6

0xd636,	// (0x0004abca) bg_popup_trans_pane_g7

0xd63e,	// (0x0004abd2) bg_popup_trans_pane_g8

0xab37,	// (0x000480cb) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004cec7) bg_popup_trans_pane_g

0xd646,	// (0x0004abda) cell_image3_tool_bar_pane_ParamLimits

0xd646,	// (0x0004abda) cell_image3_tool_bar_pane

0xcbab,	// (0x0004a13f) cell_image3_tool_bar_pane_g1

0x9fb0,	// (0x00047544) bg_popup_trans_pane_cp1

0xd65a,	// (0x0004abee) popup_image3_note_pane_t1

0xd668,	// (0x0004abfc) popup_image3_note_pane_t2

0xd676,	// (0x0004ac0a) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004ceda) popup_image3_note_pane_t

0xd684,	// (0x0004ac18) popup_image3_note_pane_t3_copy1

0x7788,	// (0x00044d1c) bg_myfav_hc_instruction_pane_ParamLimits

0x7788,	// (0x00044d1c) bg_myfav_hc_instruction_pane

0x77a0,	// (0x00044d34) cell_myfav_contact_pane_ParamLimits

0x77a0,	// (0x00044d34) cell_myfav_contact_pane

0x77ba,	// (0x00044d4e) cell_myfav_contact_pane_cp1_ParamLimits

0x77ba,	// (0x00044d4e) cell_myfav_contact_pane_cp1

0x77d2,	// (0x00044d66) cell_myfav_contact_pane_cp2_ParamLimits

0x77d2,	// (0x00044d66) cell_myfav_contact_pane_cp2

0x77ea,	// (0x00044d7e) cell_myfav_contact_pane_cp3_ParamLimits

0x77ea,	// (0x00044d7e) cell_myfav_contact_pane_cp3

0x7801,	// (0x00044d95) cell_myfav_contact_pane_cp4_ParamLimits

0x7801,	// (0x00044d95) cell_myfav_contact_pane_cp4

0x7817,	// (0x00044dab) cell_myfav_contact_pane_cp5_ParamLimits

0x7817,	// (0x00044dab) cell_myfav_contact_pane_cp5

0x782b,	// (0x00044dbf) cell_myfav_contact_pane_cp6_ParamLimits

0x782b,	// (0x00044dbf) cell_myfav_contact_pane_cp6

0x783f,	// (0x00044dd3) cell_myfav_contact_pane_cp7_ParamLimits

0x783f,	// (0x00044dd3) cell_myfav_contact_pane_cp7

0xd692,	// (0x0004ac26) listscroll_gen_pane_cp05

0x7857,	// (0x00044deb) main_myfav_hc_pane_g1_ParamLimits

0x7857,	// (0x00044deb) main_myfav_hc_pane_g1

0x786f,	// (0x00044e03) main_myfav_hc_pane_g2_ParamLimits

0x786f,	// (0x00044e03) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004cee1) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004cee1) main_myfav_hc_pane_g

0x789f,	// (0x00044e33) main_myfav_hc_pane_t1_ParamLimits

0x789f,	// (0x00044e33) main_myfav_hc_pane_t1

0xd69b,	// (0x0004ac2f) main_myfav_hc_pane_t2_ParamLimits

0xd69b,	// (0x0004ac2f) main_myfav_hc_pane_t2

0xd6ad,	// (0x0004ac41) main_myfav_hc_pane_t3_ParamLimits

0xd6ad,	// (0x0004ac41) main_myfav_hc_pane_t3

0x78b6,	// (0x00044e4a) main_myfav_hc_pane_t4_ParamLimits

0x78b6,	// (0x00044e4a) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004cee8) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004cee8) main_myfav_hc_pane_t

0xcbab,	// (0x0004a13f) bg_myfav_hc_instruction_pane_g1

0xd6bf,	// (0x0004ac53) cell_myfav_contact_pane_g1_ParamLimits

0xd6bf,	// (0x0004ac53) cell_myfav_contact_pane_g1

0xd6bf,	// (0x0004ac53) cell_myfav_contact_pane_g2_ParamLimits

0xd6bf,	// (0x0004ac53) cell_myfav_contact_pane_g2

0xd6e9,	// (0x0004ac7d) cell_myfav_contact_pane_g3_ParamLimits

0xd6e9,	// (0x0004ac7d) cell_myfav_contact_pane_g3

0xce70,	// (0x0004a404) cell_myfav_contact_pane_g4_ParamLimits

0xce70,	// (0x0004a404) cell_myfav_contact_pane_g4

0xd6f6,	// (0x0004ac8a) cell_myfav_contact_pane_g5_ParamLimits

0xd6f6,	// (0x0004ac8a) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004cef3) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004cef3) cell_myfav_contact_pane_g

0x7887,	// (0x00044e1b) main_myfav_hc_pane_g3_ParamLimits

0x7887,	// (0x00044e1b) main_myfav_hc_pane_g3

0x2295,	// (0x0003f829) popup_adpt_find_window

0x78e0,	// (0x00044e74) afind_page_pane_ParamLimits

0x78e0,	// (0x00044e74) afind_page_pane

0x78ed,	// (0x00044e81) aid_size_cell_afind_ParamLimits

0x78ed,	// (0x00044e81) aid_size_cell_afind

0x7907,	// (0x00044e9b) bg_popup_sub_pane_cp09_ParamLimits

0x7907,	// (0x00044e9b) bg_popup_sub_pane_cp09

0x7914,	// (0x00044ea8) find_pane_cp01_ParamLimits

0x7914,	// (0x00044ea8) find_pane_cp01

0xd702,	// (0x0004ac96) grid_afind_control_pane_ParamLimits

0xd702,	// (0x0004ac96) grid_afind_control_pane

0x7921,	// (0x00044eb5) grid_afind_pane_ParamLimits

0x7921,	// (0x00044eb5) grid_afind_pane

0x793b,	// (0x00044ecf) cell_afind_pane_ParamLimits

0x793b,	// (0x00044ecf) cell_afind_pane

0xcbab,	// (0x0004a13f) afind_page_pane_g1

0x7983,	// (0x00044f17) afind_page_pane_g2

0x798c,	// (0x00044f20) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004cefe) afind_page_pane_g

0x7995,	// (0x00044f29) afind_page_pane_t1

0xd716,	// (0x0004acaa) cell_afind_grid_control_pane_ParamLimits

0xd716,	// (0x0004acaa) cell_afind_grid_control_pane

0xd4d2,	// (0x0004aa66) bg_button_pane_cp69_ParamLimits

0xd4d2,	// (0x0004aa66) bg_button_pane_cp69

0x79b5,	// (0x00044f49) cell_afind_pane_g1_ParamLimits

0x79b5,	// (0x00044f49) cell_afind_pane_g1

0x79c2,	// (0x00044f56) cell_afind_pane_t1_ParamLimits

0x79c2,	// (0x00044f56) cell_afind_pane_t1

0xa950,	// (0x00047ee4) bg_button_pane_cp72

0xd725,	// (0x0004acb9) cell_afind_grid_control_pane_g1

0x4fc1,	// (0x00042555) aid_image_placing_area_ParamLimits

0x4fc1,	// (0x00042555) aid_image_placing_area

0xd1a0,	// (0x0004a734) field_vitu_entry_pane_g1_ParamLimits

0xd1a0,	// (0x0004a734) field_vitu_entry_pane_g1

0xd1ac,	// (0x0004a740) field_vitu_entry_pane_g2_ParamLimits

0xd1ac,	// (0x0004a740) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004cdaf) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004cdaf) field_vitu_entry_pane_g

0x6b2a,	// (0x000440be) cell_vitu_itu_pane_g1_ParamLimits

0x6b7a,	// (0x0004410e) cell_vitu_itu_pane_t3_ParamLimits

0x6b7a,	// (0x0004410e) cell_vitu_itu_pane_t3

0xd482,	// (0x0004aa16) mp4_progress_pane_t1_ParamLimits

0xd49b,	// (0x0004aa2f) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004ce44) mp4_progress_pane_t_ParamLimits

0xd4b4,	// (0x0004aa48) mup_progress_pane_cp04_ParamLimits

0x78ca,	// (0x00044e5e) main_myfav_hc_pane_t5_ParamLimits

0x78ca,	// (0x00044e5e) main_myfav_hc_pane_t5

0x2123,	// (0x0003f6b7) aid_zoom_text_primary

0x2295,	// (0x0003f829) popup_adpt_find_window_ParamLimits

0xade7,	// (0x0004837b) main_cam_set_pane

0x7353,	// (0x000448e7) cam4_zoom_pane_ParamLimits

0x7353,	// (0x000448e7) cam4_zoom_pane

0x79d4,	// (0x00044f68) main_cam_set_pane_g1_ParamLimits

0x79d4,	// (0x00044f68) main_cam_set_pane_g1

0x79e2,	// (0x00044f76) main_cam_set_pane_g2_ParamLimits

0x79e2,	// (0x00044f76) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004cf05) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004cf05) main_cam_set_pane_g

0x79ee,	// (0x00044f82) main_cam_set_pane_t1_ParamLimits

0x79ee,	// (0x00044f82) main_cam_set_pane_t1

0x7a0a,	// (0x00044f9e) main_cset_listscroll_pane_ParamLimits

0x7a0a,	// (0x00044f9e) main_cset_listscroll_pane

0x7a35,	// (0x00044fc9) main_cset_slider_pane_ParamLimits

0x7a35,	// (0x00044fc9) main_cset_slider_pane

0xd736,	// (0x0004acca) main_cset_list_pane_ParamLimits

0xd736,	// (0x0004acca) main_cset_list_pane

0xd746,	// (0x0004acda) scroll_pane_cp028

0x7a54,	// (0x00044fe8) aid_area_touch_slider

0x7a70,	// (0x00045004) cset_slider_pane

0x7a9a,	// (0x0004502e) main_cset_slider_pane_g1

0x7aaf,	// (0x00045043) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004cf0a) main_cset_slider_pane_g

0xd77f,	// (0x0004ad13) main_cset_slider_pane_t1

0x7b75,	// (0x00045109) main_cset_slider_pane_t2

0x7b8f,	// (0x00045123) main_cset_slider_pane_t3

0x7ba9,	// (0x0004513d) main_cset_slider_pane_t4

0x7bc7,	// (0x0004515b) main_cset_slider_pane_t5

0x7be5,	// (0x00045179) main_cset_slider_pane_t6

0x7bfc,	// (0x00045190) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004cf2f) main_cset_slider_pane_t

0x7d0a,	// (0x0004529e) cset_list_set_pane_ParamLimits

0x7d0a,	// (0x0004529e) cset_list_set_pane

0x7d26,	// (0x000452ba) aid_position_infowindow_above

0x7d2e,	// (0x000452c2) aid_position_infowindow_below

0x115e,	// (0x0003e6f2) cset_list_set_pane_g1_ParamLimits

0x115e,	// (0x0003e6f2) cset_list_set_pane_g1

0x116a,	// (0x0003e6fe) cset_list_set_pane_g3_ParamLimits

0x116a,	// (0x0003e6fe) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004cf4e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004cf4e) cset_list_set_pane_g

0x1179,	// (0x0003e70d) cset_list_set_pane_t1_ParamLimits

0x1179,	// (0x0003e70d) cset_list_set_pane_t1

0xade7,	// (0x0004837b) list_highlight_pane_cp021_ParamLimits

0xade7,	// (0x0004837b) list_highlight_pane_cp021

0xb4c0,	// (0x00048a54) cset_slider_pane_g1

0xb4d2,	// (0x00048a66) cset_slider_pane_g2

0xb4c9,	// (0x00048a5d) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004cf53) cset_slider_pane_g

0x7d36,	// (0x000452ca) aid_area_touch_cam4_zoom

0x7d3e,	// (0x000452d2) cam4_zoom_cont_pane

0x7d46,	// (0x000452da) cam4_zoom_pane_g1

0x7d4e,	// (0x000452e2) cam4_zoom_pane_g2

0x7d56,	// (0x000452ea) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004cf5a) cam4_zoom_pane_g

0xdc6f,	// (0x0004b203) cam4_zoom_cont_pane_g1

0xdc78,	// (0x0004b20c) cam4_zoom_cont_pane_g2

0xdc81,	// (0x0004b215) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004cf61) cam4_zoom_cont_pane_g

0x7240,	// (0x000447d4) call4_image_pane_ParamLimits

0x7240,	// (0x000447d4) call4_image_pane

0xd4de,	// (0x0004aa72) call4_windows_conf_pane_ParamLimits

0xd51d,	// (0x0004aab1) popup_call4_audio_in_window_ParamLimits

0xd51d,	// (0x0004aab1) popup_call4_audio_in_window

0x9fb0,	// (0x00047544) bg_popup_call2_act_pane_cp02

0xd593,	// (0x0004ab27) call4_list_conf_pane

0xcbab,	// (0x0004a13f) call4_image_pane_g1

0xcbab,	// (0x0004a13f) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004cc70) call4_image_pane_g

0xd81f,	// (0x0004adb3) list_single_graphic_popup_conf4_pane_ParamLimits

0xd81f,	// (0x0004adb3) list_single_graphic_popup_conf4_pane

0x9fb0,	// (0x00047544) list_highlight_pane_cp022

0xd832,	// (0x0004adc6) list_single_graphic_popup_conf4_pane_g1

0xb0ad,	// (0x00048641) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004cf68) list_single_graphic_popup_conf4_pane_g

0xd83a,	// (0x0004adce) list_single_graphic_popup_conf4_pane_t1

0x3347,	// (0x000408db) popup_vtel_slider_window_ParamLimits

0x3347,	// (0x000408db) popup_vtel_slider_window

0xd4c0,	// (0x0004aa54) dialer2_ne_pane_t2_ParamLimits

0xd4c0,	// (0x0004aa54) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004ce49) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004ce49) dialer2_ne_pane_t

0xade7,	// (0x0004837b) bg_popup_sub_pane_cp010_ParamLimits

0xade7,	// (0x0004837b) bg_popup_sub_pane_cp010

0x7d5e,	// (0x000452f2) popup_vtel_slider_window_g1_ParamLimits

0x7d5e,	// (0x000452f2) popup_vtel_slider_window_g1

0x7d6a,	// (0x000452fe) popup_vtel_slider_window_g2_ParamLimits

0x7d6a,	// (0x000452fe) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004cf6d) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004cf6d) popup_vtel_slider_window_g

0x7db2,	// (0x00045346) vtel_slider_pane_ParamLimits

0x7db2,	// (0x00045346) vtel_slider_pane

0x7dc1,	// (0x00045355) vtel_slider_pane_g1_ParamLimits

0x7dc1,	// (0x00045355) vtel_slider_pane_g1

0x7dce,	// (0x00045362) vtel_slider_pane_g2_ParamLimits

0x7dce,	// (0x00045362) vtel_slider_pane_g2

0x7ddb,	// (0x0004536f) vtel_slider_pane_g3_ParamLimits

0x7ddb,	// (0x0004536f) vtel_slider_pane_g3

0x7dc1,	// (0x00045355) vtel_slider_pane_g4_ParamLimits

0x7dc1,	// (0x00045355) vtel_slider_pane_g4

0x7de8,	// (0x0004537c) vtel_slider_pane_g5_ParamLimits

0x7de8,	// (0x0004537c) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004cf76) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004cf76) vtel_slider_pane_g

0xade7,	// (0x0004837b) main_gallery2_pane

0x75a3,	// (0x00044b37) aid_size_row_itut2_dropdow_list_ParamLimits

0x75a3,	// (0x00044b37) aid_size_row_itut2_dropdow_list

0x7603,	// (0x00044b97) grid_vitu2_function_top_pane_ParamLimits

0x7603,	// (0x00044b97) grid_vitu2_function_top_pane

0x7659,	// (0x00044bed) popup_vitu2_dropdown_list_window_ParamLimits

0x7659,	// (0x00044bed) popup_vitu2_dropdown_list_window

0x7679,	// (0x00044c0d) popup_vitu2_match_list_window

0x7df5,	// (0x00045389) cell_vitu2_function_top_pane_ParamLimits

0x7df5,	// (0x00045389) cell_vitu2_function_top_pane

0x7e15,	// (0x000453a9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e15,	// (0x000453a9) cell_vitu2_function_top_pane_cp01

0x7e33,	// (0x000453c7) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e33,	// (0x000453c7) cell_vitu2_function_top_wide_pane

0xade7,	// (0x0004837b) bg_button_pane_cp012

0x7e51,	// (0x000453e5) cell_vitu2_function_top_pane_g1

0x7e65,	// (0x000453f9) bg_button_pane_cp013_ParamLimits

0x7e65,	// (0x000453f9) bg_button_pane_cp013

0x7e81,	// (0x00045415) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7e81,	// (0x00045415) cell_vitu2_function_top_wide_pane_g1

0xdc53,	// (0x0004b1e7) bg_popup_sub_pane_cp20

0x7e99,	// (0x0004542d) list_vitu2_match_list_pane

0xd60e,	// (0x0004aba2) bg_popup_sub_pane_cp20_g1

0xd616,	// (0x0004abaa) bg_popup_sub_pane_cp20_g2

0xab57,	// (0x000480eb) bg_popup_sub_pane_cp20_g3

0xd61e,	// (0x0004abb2) bg_popup_sub_pane_cp20_g4

0xab37,	// (0x000480cb) bg_popup_sub_pane_cp20_g5

0xd850,	// (0x0004ade4) bg_popup_sub_pane_cp20_g6

0xd62e,	// (0x0004abc2) bg_popup_sub_pane_cp20_g7

0xd636,	// (0x0004abca) bg_popup_sub_pane_cp20_g8

0xd63e,	// (0x0004abd2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004cf81) bg_popup_sub_pane_cp20_g

0x7eb1,	// (0x00045445) list_vitu2_match_list_item_pane_ParamLimits

0x7eb1,	// (0x00045445) list_vitu2_match_list_item_pane

0x7ec3,	// (0x00045457) list_vitu2_match_list_item_pane_t1

0x9fb0,	// (0x00047544) bg_popup_sub_pane_cp21

0xafb1,	// (0x00048545) grid_vitu2_dropdown_list_pane

0x7ed1,	// (0x00045465) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7ed1,	// (0x00045465) cell_vitu2_dropdown_list_char_pane

0x7ef2,	// (0x00045486) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7ef2,	// (0x00045486) cell_vitu2_dropdown_list_ctrl_pane

0xd858,	// (0x0004adec) cell_vitu2_dropdown_list_char_pane_g1

0xd861,	// (0x0004adf5) cell_vitu2_dropdown_list_char_pane_g2

0xd86a,	// (0x0004adfe) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004cf9e) cell_vitu2_dropdown_list_char_pane_g

0x7f1e,	// (0x000454b2) cell_vitu2_dropdown_list_char_pane_t1

0x7f2c,	// (0x000454c0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f2c,	// (0x000454c0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f3c,	// (0x000454d0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f3c,	// (0x000454d0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f4d,	// (0x000454e1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f4d,	// (0x000454e1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f5d,	// (0x000454f1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f5d,	// (0x000454f1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce0b,	// (0x0004a39f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce0b,	// (0x0004a39f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004cfa5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004cfa5) cell_vitu2_dropdown_list_ctrl_pane_g

0x7f79,	// (0x0004550d) aid_size_cell_gallery2_ParamLimits

0x7f79,	// (0x0004550d) aid_size_cell_gallery2

0x7f93,	// (0x00045527) grid_gallery2_pane_ParamLimits

0x7f93,	// (0x00045527) grid_gallery2_pane

0x69ab,	// (0x00043f3f) scroll_pane_cp029_ParamLimits

0x69ab,	// (0x00043f3f) scroll_pane_cp029

0x7faa,	// (0x0004553e) cell_gallery2_pane_ParamLimits

0x7faa,	// (0x0004553e) cell_gallery2_pane

0xd873,	// (0x0004ae07) cell_gallery2_pane_g2

0x7fff,	// (0x00045593) cell_gallery2_pane_g3

0xd87b,	// (0x0004ae0f) cell_gallery2_pane_g4

0xd883,	// (0x0004ae17) cell_gallery2_pane_g5

0xb38a,	// (0x0004891e) grid_highlight_pane_cp10

0x7679,	// (0x00044c0d) popup_vitu2_match_list_window_ParamLimits

0x768b,	// (0x00044c1f) popup_vitu2_query_window_ParamLimits

0x768b,	// (0x00044c1f) popup_vitu2_query_window

0x9fb0,	// (0x00047544) bg_vitu2_candi_button_pane

0xd858,	// (0x0004adec) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd861,	// (0x0004adf5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd86a,	// (0x0004adfe) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x11e3,	// (0x0003e777) bg_button_pane_cp015

0x8007,	// (0x0004559b) bg_button_pane_cp016

0x801a,	// (0x000455ae) bg_button_pane_cp017

0xc7a1,	// (0x00049d35) bg_popup_sub_pane_cp22

0xd88b,	// (0x0004ae1f) popup_vitu2_query_window_g1

0x1216,	// (0x0003e7aa) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004cfb0) popup_vitu2_query_window_g

0x1233,	// (0x0003e7c7) popup_vitu2_query_window_t1_ParamLimits

0x1233,	// (0x0003e7c7) popup_vitu2_query_window_t1

0x1266,	// (0x0003e7fa) popup_vitu2_query_window_t2_ParamLimits

0x1266,	// (0x0003e7fa) popup_vitu2_query_window_t2

0x1278,	// (0x0003e80c) popup_vitu2_query_window_t3_ParamLimits

0x1278,	// (0x0003e80c) popup_vitu2_query_window_t3

0x803e,	// (0x000455d2) popup_vitu2_query_window_t4_ParamLimits

0x803e,	// (0x000455d2) popup_vitu2_query_window_t4

0x805f,	// (0x000455f3) popup_vitu2_query_window_t5_ParamLimits

0x805f,	// (0x000455f3) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004cfb7) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004cfb7) popup_vitu2_query_window_t

0xd72e,	// (0x0004acc2) main_cset_text_pane

0x7a54,	// (0x00044fe8) aid_area_touch_slider_ParamLimits

0x7a70,	// (0x00045004) cset_slider_pane_ParamLimits

0x7a9a,	// (0x0004502e) main_cset_slider_pane_g1_ParamLimits

0x7aaf,	// (0x00045043) main_cset_slider_pane_g2_ParamLimits

0xd74f,	// (0x0004ace3) main_cset_slider_pane_g3_ParamLimits

0xd74f,	// (0x0004ace3) main_cset_slider_pane_g3

0x7ac4,	// (0x00045058) main_cset_slider_pane_g4_ParamLimits

0x7ac4,	// (0x00045058) main_cset_slider_pane_g4

0x7ad3,	// (0x00045067) main_cset_slider_pane_g5_ParamLimits

0x7ad3,	// (0x00045067) main_cset_slider_pane_g5

0x7ae1,	// (0x00045075) main_cset_slider_pane_g6_ParamLimits

0x7ae1,	// (0x00045075) main_cset_slider_pane_g6

0xf976,	// (0x0004cf0a) main_cset_slider_pane_g_ParamLimits

0xd77f,	// (0x0004ad13) main_cset_slider_pane_t1_ParamLimits

0x7b75,	// (0x00045109) main_cset_slider_pane_t2_ParamLimits

0x7b8f,	// (0x00045123) main_cset_slider_pane_t3_ParamLimits

0x7ba9,	// (0x0004513d) main_cset_slider_pane_t4_ParamLimits

0x7bc7,	// (0x0004515b) main_cset_slider_pane_t5_ParamLimits

0x7be5,	// (0x00045179) main_cset_slider_pane_t6_ParamLimits

0x7bfc,	// (0x00045190) main_cset_slider_pane_t7_ParamLimits

0x7c2a,	// (0x000451be) main_cset_slider_pane_t8_ParamLimits

0x7c2a,	// (0x000451be) main_cset_slider_pane_t8

0x7c52,	// (0x000451e6) main_cset_slider_pane_t9_ParamLimits

0x7c52,	// (0x000451e6) main_cset_slider_pane_t9

0x7c7a,	// (0x0004520e) main_cset_slider_pane_t10_ParamLimits

0x7c7a,	// (0x0004520e) main_cset_slider_pane_t10

0x7ca2,	// (0x00045236) main_cset_slider_pane_t11_ParamLimits

0x7ca2,	// (0x00045236) main_cset_slider_pane_t11

0x7ccc,	// (0x00045260) main_cset_slider_pane_t12_ParamLimits

0x7ccc,	// (0x00045260) main_cset_slider_pane_t12

0x7ceb,	// (0x0004527f) main_cset_slider_pane_t13_ParamLimits

0x7ceb,	// (0x0004527f) main_cset_slider_pane_t13

0xf99b,	// (0x0004cf2f) main_cset_slider_pane_t_ParamLimits

0x9fb0,	// (0x00047544) bg_popup_sub_pane_cp011

0xd897,	// (0x0004ae2b) main_cset_text_pane_g1

0xd89f,	// (0x0004ae33) main_cset_text_pane_t1

0xd8ad,	// (0x0004ae41) main_cset_text_pane_t2

0xd8bb,	// (0x0004ae4f) main_cset_text_pane_t3

0xd8c9,	// (0x0004ae5d) main_cset_text_pane_t4

0xd8d7,	// (0x0004ae6b) main_cset_text_pane_t5

0xd8e5,	// (0x0004ae79) main_cset_text_pane_t6

0xd8f3,	// (0x0004ae87) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004cfc6) main_cset_text_pane_t

0x9fb0,	// (0x00047544) main_cam4_burst_pane

0x9fb0,	// (0x00047544) main_cam5_pane

0x79a3,	// (0x00044f37) bg_button_pane_cp019

0x79ac,	// (0x00044f40) bg_button_pane_cp020

0xd75b,	// (0x0004acef) main_cset_slider_pane_g7_ParamLimits

0xd75b,	// (0x0004acef) main_cset_slider_pane_g7

0xd767,	// (0x0004acfb) main_cset_slider_pane_g8_ParamLimits

0xd767,	// (0x0004acfb) main_cset_slider_pane_g8

0x7af5,	// (0x00045089) main_cset_slider_pane_g9_ParamLimits

0x7af5,	// (0x00045089) main_cset_slider_pane_g9

0x7b01,	// (0x00045095) main_cset_slider_pane_g10_ParamLimits

0x7b01,	// (0x00045095) main_cset_slider_pane_g10

0x7b0d,	// (0x000450a1) main_cset_slider_pane_g11_ParamLimits

0x7b0d,	// (0x000450a1) main_cset_slider_pane_g11

0x7b19,	// (0x000450ad) main_cset_slider_pane_g12_ParamLimits

0x7b19,	// (0x000450ad) main_cset_slider_pane_g12

0x7b25,	// (0x000450b9) main_cset_slider_pane_g13_ParamLimits

0x7b25,	// (0x000450b9) main_cset_slider_pane_g13

0x7b33,	// (0x000450c7) main_cset_slider_pane_g14_ParamLimits

0x7b33,	// (0x000450c7) main_cset_slider_pane_g14

0x7b41,	// (0x000450d5) main_cset_slider_pane_g15_ParamLimits

0x7b41,	// (0x000450d5) main_cset_slider_pane_g15

0xd7ad,	// (0x0004ad41) main_cset_slider_pane_t14_ParamLimits

0xd7ad,	// (0x0004ad41) main_cset_slider_pane_t14

0xd7e6,	// (0x0004ad7a) main_cset_slider_pane_t15_ParamLimits

0xd7e6,	// (0x0004ad7a) main_cset_slider_pane_t15

0x8080,	// (0x00045614) aid_cam4_burst_size_cell_ParamLimits

0x8080,	// (0x00045614) aid_cam4_burst_size_cell

0x809c,	// (0x00045630) grid_cam4_burst_pane_ParamLimits

0x809c,	// (0x00045630) grid_cam4_burst_pane

0x80cc,	// (0x00045660) linegrid_cam4_burst_pane_ParamLimits

0x80cc,	// (0x00045660) linegrid_cam4_burst_pane

0x80ee,	// (0x00045682) scroll_pane_cp30_ParamLimits

0x80ee,	// (0x00045682) scroll_pane_cp30

0x80fa,	// (0x0004568e) cell_cam4_burst_pane_ParamLimits

0x80fa,	// (0x0004568e) cell_cam4_burst_pane

0xd901,	// (0x0004ae95) linegrid_cam4_burst_pane_g1_ParamLimits

0xd901,	// (0x0004ae95) linegrid_cam4_burst_pane_g1

0x8136,	// (0x000456ca) linegrid_cam4_burst_pane_g2_ParamLimits

0x8136,	// (0x000456ca) linegrid_cam4_burst_pane_g2

0xd90e,	// (0x0004aea2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd90e,	// (0x0004aea2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004cfd5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004cfd5) linegrid_cam4_burst_pane_g

0x8147,	// (0x000456db) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8147,	// (0x000456db) linegrid_cam4_burst_pane_g3_copy1

0xd91b,	// (0x0004aeaf) linegrid_cam4_burst_pane_g4_ParamLimits

0xd91b,	// (0x0004aeaf) linegrid_cam4_burst_pane_g4

0x8161,	// (0x000456f5) linegrid_cam4_burst_pane_g5_ParamLimits

0x8161,	// (0x000456f5) linegrid_cam4_burst_pane_g5

0x8172,	// (0x00045706) linegrid_cam4_burst_pane_g6_ParamLimits

0x8172,	// (0x00045706) linegrid_cam4_burst_pane_g6

0xd928,	// (0x0004aebc) linegrid_cam4_burst_pane_g7_ParamLimits

0xd928,	// (0x0004aebc) linegrid_cam4_burst_pane_g7

0x8183,	// (0x00045717) cell_cam4_burst_pane_g1

0xd941,	// (0x0004aed5) main_cam5_pane_t1_ParamLimits

0xd941,	// (0x0004aed5) main_cam5_pane_t1

0xd953,	// (0x0004aee7) main_cam5_pane_t2_ParamLimits

0xd953,	// (0x0004aee7) main_cam5_pane_t2

0xd965,	// (0x0004aef9) main_cam5_pane_t3_ParamLimits

0xd965,	// (0x0004aef9) main_cam5_pane_t3

0xd977,	// (0x0004af0b) main_cam5_pane_t4_ParamLimits

0xd977,	// (0x0004af0b) main_cam5_pane_t4

0xd98f,	// (0x0004af23) main_cam5_pane_t5_ParamLimits

0xd98f,	// (0x0004af23) main_cam5_pane_t5

0xd9a3,	// (0x0004af37) main_cam5_pane_t6_ParamLimits

0xd9a3,	// (0x0004af37) main_cam5_pane_t6

0xd9b7,	// (0x0004af4b) main_cam5_pane_t7_ParamLimits

0xd9b7,	// (0x0004af4b) main_cam5_pane_t7

0xd9c9,	// (0x0004af5d) main_cam5_pane_t8_ParamLimits

0xd9c9,	// (0x0004af5d) main_cam5_pane_t8

0xd9e5,	// (0x0004af79) main_cam5_pane_t9_ParamLimits

0xd9e5,	// (0x0004af79) main_cam5_pane_t9

0xd9f7,	// (0x0004af8b) main_cam5_pane_t10_ParamLimits

0xd9f7,	// (0x0004af8b) main_cam5_pane_t10

0xda09,	// (0x0004af9d) main_cam5_pane_t11_ParamLimits

0xda09,	// (0x0004af9d) main_cam5_pane_t11

0xda1b,	// (0x0004afaf) main_cam5_pane_t12_ParamLimits

0xda1b,	// (0x0004afaf) main_cam5_pane_t12

0xda30,	// (0x0004afc4) main_cam5_pane_t13_ParamLimits

0xda30,	// (0x0004afc4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004cfe1) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004cfe1) main_cam5_pane_t

0x234b,	// (0x0003f8df) popup_scut_keymap_window_ParamLimits

0x234b,	// (0x0003f8df) popup_scut_keymap_window

0x8198,	// (0x0004572c) aid_size_cell_brow_shortcut

0xb38a,	// (0x0004891e) bg_popup_window_pane_cp010

0x81a4,	// (0x00045738) grid_scut_pane

0x81b0,	// (0x00045744) cell_scut_pane_ParamLimits

0x81b0,	// (0x00045744) cell_scut_pane

0x81c7,	// (0x0004575b) cell_scut_pane_g1

0xda4d,	// (0x0004afe1) cell_scut_pane_t1

0xda5c,	// (0x0004aff0) cell_scut_pane_t2

0x81d0,	// (0x00045764) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004cffc) cell_scut_pane_t

0x618b,	// (0x0004371f) main_mup3_pane_g8_ParamLimits

0x618b,	// (0x0004371f) main_mup3_pane_g8

0x75b1,	// (0x00044b45) area_vitu2_query_pane_ParamLimits

0x75b1,	// (0x00044b45) area_vitu2_query_pane

0x11f5,	// (0x0003e789) input_focus_pane_cp08

0xda6b,	// (0x0004afff) area_vitu2_query_pane_g1

0x12f6,	// (0x0003e88a) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004d003) area_vitu2_query_pane_g

0x81de,	// (0x00045772) area_vitu2_query_pane_t1_ParamLimits

0x81de,	// (0x00045772) area_vitu2_query_pane_t1

0x81f2,	// (0x00045786) area_vitu2_query_pane_t2_ParamLimits

0x81f2,	// (0x00045786) area_vitu2_query_pane_t2

0x1307,	// (0x0003e89b) area_vitu2_query_pane_t3_ParamLimits

0x1307,	// (0x0003e89b) area_vitu2_query_pane_t3

0x132f,	// (0x0003e8c3) area_vitu2_query_pane_t4_ParamLimits

0x132f,	// (0x0003e8c3) area_vitu2_query_pane_t4

0x1357,	// (0x0003e8eb) area_vitu2_query_pane_t5_ParamLimits

0x1357,	// (0x0003e8eb) area_vitu2_query_pane_t5

0x137f,	// (0x0003e913) area_vitu2_query_pane_t6_ParamLimits

0x137f,	// (0x0003e913) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004d008) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004d008) area_vitu2_query_pane_t

0x8206,	// (0x0004579a) bg_button_pane_cp018

0x8214,	// (0x000457a8) bg_button_pane_cp021

0x13cb,	// (0x0003e95f) bg_button_pane_cp022

0x13dc,	// (0x0003e970) input_focus_pane_cp09

0xb1d1,	// (0x00048765) aid_size_touch_mv_arrow_left

0xb1fc,	// (0x00048790) aid_size_touch_mv_arrow_right

0x7b59,	// (0x000450ed) main_cset_slider_pane_g16_ParamLimits

0x7b59,	// (0x000450ed) main_cset_slider_pane_g16

0x7b67,	// (0x000450fb) main_cset_slider_pane_g17_ParamLimits

0x7b67,	// (0x000450fb) main_cset_slider_pane_g17

0x8183,	// (0x00045717) cell_cam4_burst_pane_g1_ParamLimits

0x9fb0,	// (0x00047544) compa_mode_pane

0x7d76,	// (0x0004530a) popup_vtel_slider_window_g3_ParamLimits

0x7d76,	// (0x0004530a) popup_vtel_slider_window_g3

0x7d8a,	// (0x0004531e) popup_vtel_slider_window_g4_ParamLimits

0x7d8a,	// (0x0004531e) popup_vtel_slider_window_g4

0x7d9e,	// (0x00045332) popup_vtel_slider_window_t1_ParamLimits

0x7d9e,	// (0x00045332) popup_vtel_slider_window_t1

0x9fb0,	// (0x00047544) main_cl_pane

0x54d3,	// (0x00042a67) popup_imed_adjust2_window_ParamLimits

0xc7a1,	// (0x00049d35) bg_tb_trans_pane_cp05_ParamLimits

0xd0cc,	// (0x0004a660) popup_imed_adjust2_window_g1_ParamLimits

0xd0db,	// (0x0004a66f) popup_imed_adjust2_window_g2_ParamLimits

0xd0db,	// (0x0004a66f) popup_imed_adjust2_window_g2

0xd0e7,	// (0x0004a67b) popup_imed_adjust2_window_g3_ParamLimits

0xd0e7,	// (0x0004a67b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004cd73) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004cd73) popup_imed_adjust2_window_g

0xd0f3,	// (0x0004a687) popup_imed_adjust2_window_t1_ParamLimits

0xd10b,	// (0x0004a69f) slider_imed_adjust_pane_ParamLimits

0xd11f,	// (0x0004a6b3) slider_imed_adjust_pane_g1_ParamLimits

0xd12f,	// (0x0004a6c3) slider_imed_adjust_pane_g2_ParamLimits

0xd13f,	// (0x0004a6d3) slider_imed_adjust_pane_g3_ParamLimits

0xd150,	// (0x0004a6e4) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004cd7a) slider_imed_adjust_pane_g_ParamLimits

0x72fc,	// (0x00044890) aid_touch_area_cam4_ParamLimits

0x72fc,	// (0x00044890) aid_touch_area_cam4

0x730c,	// (0x000448a0) battery_pane_cp01

0x7393,	// (0x00044927) main_camera4_pane_g6_ParamLimits

0x7393,	// (0x00044927) main_camera4_pane_g6

0x73b1,	// (0x00044945) main_camera4_pane_t2_ParamLimits

0x73b1,	// (0x00044945) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004ce7d) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004ce7d) main_camera4_pane_t

0x7438,	// (0x000449cc) aid_touch_area_vid4_ParamLimits

0x7438,	// (0x000449cc) aid_touch_area_vid4

0x7478,	// (0x00044a0c) main_video4_pane_g5_ParamLimits

0x7478,	// (0x00044a0c) main_video4_pane_g5

0x749c,	// (0x00044a30) vid4_progress_pane_ParamLimits

0x749c,	// (0x00044a30) vid4_progress_pane

0xd773,	// (0x0004ad07) main_cset_slider_pane_g18_ParamLimits

0xd773,	// (0x0004ad07) main_cset_slider_pane_g18

0xd935,	// (0x0004aec9) cell_cam4_burst_pane_g2_ParamLimits

0xd935,	// (0x0004aec9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004cfdc) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004cfdc) cell_cam4_burst_pane_g

0x8220,	// (0x000457b4) bg_cl_pane_ParamLimits

0x8220,	// (0x000457b4) bg_cl_pane

0x822c,	// (0x000457c0) cl_header_pane_ParamLimits

0x822c,	// (0x000457c0) cl_header_pane

0x8238,	// (0x000457cc) cl_listscroll_pane_ParamLimits

0x8238,	// (0x000457cc) cl_listscroll_pane

0xda77,	// (0x0004b00b) bg_cl_pane_g1

0xda7f,	// (0x0004b013) bg_cl_pane_g2

0xda87,	// (0x0004b01b) bg_cl_pane_g3

0xda8f,	// (0x0004b023) bg_cl_pane_g4

0xda97,	// (0x0004b02b) bg_cl_pane_g5

0xda9f,	// (0x0004b033) bg_cl_pane_g6

0xdaa7,	// (0x0004b03b) bg_cl_pane_g7

0xdaaf,	// (0x0004b043) bg_cl_pane_g8

0xdab7,	// (0x0004b04b) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004d017) bg_cl_pane_g

0x8244,	// (0x000457d8) aid_height_cl_leading_ParamLimits

0x8244,	// (0x000457d8) aid_height_cl_leading

0x8250,	// (0x000457e4) aid_height_cl_text_ParamLimits

0x8250,	// (0x000457e4) aid_height_cl_text

0xdc53,	// (0x0004b1e7) bg_cl_header_pane_ParamLimits

0xdc53,	// (0x0004b1e7) bg_cl_header_pane

0x8268,	// (0x000457fc) cl_header_pane_g1_ParamLimits

0x8268,	// (0x000457fc) cl_header_pane_g1

0x8275,	// (0x00045809) cl_header_pane_t1_ParamLimits

0x8275,	// (0x00045809) cl_header_pane_t1

0xdabf,	// (0x0004b053) cl_list_pane

0xd746,	// (0x0004acda) hc_scroll_pane_cp01

0xab37,	// (0x000480cb) bg_cl_header_pane_g1

0xd60e,	// (0x0004aba2) bg_cl_header_pane_g2

0xab57,	// (0x000480eb) bg_cl_header_pane_g3

0xd61e,	// (0x0004abb2) bg_cl_header_pane_g4

0xd616,	// (0x0004abaa) bg_cl_header_pane_g5

0xd850,	// (0x0004ade4) bg_cl_header_pane_g6

0xd636,	// (0x0004abca) bg_cl_header_pane_g7

0xd63e,	// (0x0004abd2) bg_cl_header_pane_g8

0xd62e,	// (0x0004abc2) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004d02a) bg_cl_header_pane_g

0x8287,	// (0x0004581b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8287,	// (0x0004581b) hc_cl_list_double_graphic_heading_pane

0x829b,	// (0x0004582f) hc_cl_list_single_graphic_pane_ParamLimits

0x829b,	// (0x0004582f) hc_cl_list_single_graphic_pane

0x82b5,	// (0x00045849) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82b5,	// (0x00045849) hc_cl_list_single_graphic_pane_g1

0x82c1,	// (0x00045855) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82c1,	// (0x00045855) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004d03d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004d03d) hc_cl_list_single_graphic_pane_g

0x82d5,	// (0x00045869) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x82d5,	// (0x00045869) hc_cl_list_single_graphic_pane_t1

0x82b5,	// (0x00045849) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82b5,	// (0x00045849) hc_cl_list_double_graphic_heading_pane_g1

0x82ea,	// (0x0004587e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x82ea,	// (0x0004587e) hc_cl_list_double_graphic_heading_pane_g2

0x82fe,	// (0x00045892) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x82fe,	// (0x00045892) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004d042) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004d042) hc_cl_list_double_graphic_heading_pane_g

0x8312,	// (0x000458a6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8312,	// (0x000458a6) hc_cl_list_double_graphic_heading_pane_t1

0x8327,	// (0x000458bb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8327,	// (0x000458bb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004d049) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004d049) hc_cl_list_double_graphic_heading_pane_t

0x8344,	// (0x000458d8) vid4_progress_pane_g1

0x8354,	// (0x000458e8) vid4_progress_pane_g2

0x8364,	// (0x000458f8) vid4_progress_pane_g3

0x8376,	// (0x0004590a) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004d04e) vid4_progress_pane_g

0x8394,	// (0x00045928) vid4_progress_pane_t1

0x83aa,	// (0x0004593e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004d059) vid4_progress_pane_t

0x83d5,	// (0x00045969) wait_bar_pane_cp07

0xc99c,	// (0x00049f30) blid_firmament_pane_ParamLimits

0xc9df,	// (0x00049f73) popup_blid_sat_info2_window_g1

0xca03,	// (0x00049f97) popup_blid_sat_info2_window_t3

0xca11,	// (0x00049fa5) popup_blid_sat_info2_window_t4

0xca1f,	// (0x00049fb3) popup_blid_sat_info2_window_t5

0xca2d,	// (0x00049fc1) popup_blid_sat_info2_window_t6

0xca3d,	// (0x00049fd1) popup_blid_sat_info2_window_t7

0xca4b,	// (0x00049fdf) popup_blid_sat_info2_window_t8

0xca59,	// (0x00049fed) popup_blid_sat_info2_window_t9

0xca67,	// (0x00049ffb) popup_blid_sat_info2_window_t10

0xcb2b,	// (0x0004a0bf) aid_firma_cardinal_ParamLimits

0xcb3f,	// (0x0004a0d3) blid_firmament_pane_t1_ParamLimits

0xcb56,	// (0x0004a0ea) blid_firmament_pane_t2_ParamLimits

0xcb6d,	// (0x0004a101) blid_firmament_pane_t3_ParamLimits

0xcb84,	// (0x0004a118) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004cc67) blid_firmament_pane_t_ParamLimits

0xcb9b,	// (0x0004a12f) blid_sat_info_pane_ParamLimits

0xade7,	// (0x0004837b) main_cam_set_pane_ParamLimits

0x6944,	// (0x00043ed8) aid_size_cell_colour_35_ParamLimits

0x695e,	// (0x00043ef2) aid_size_cell_colour_112_ParamLimits

0x6975,	// (0x00043f09) aid_size_cell_effect_ParamLimits

0xade7,	// (0x0004837b) bg_tb_trans_pane_cp02_ParamLimits

0xb511,	// (0x00048aa5) heading_imed_pane_ParamLimits

0x698f,	// (0x00043f23) listscroll_imed_pane_ParamLimits

0xbdc7,	// (0x0004935b) popup_call2_audio_first_window_g5_ParamLimits

0xbdc7,	// (0x0004935b) popup_call2_audio_first_window_g5

0x70b9,	// (0x0004464d) aid_size_touch_image3_arrow_left_ParamLimits

0x70b9,	// (0x0004464d) aid_size_touch_image3_arrow_left

0x70cf,	// (0x00044663) aid_size_touch_image3_arrow_right_ParamLimits

0x70cf,	// (0x00044663) aid_size_touch_image3_arrow_right

0x83bf,	// (0x00045953) vid4_progress_pane_t3

0x6c43,	// (0x000441d7) main_hwr_training_symbol_option_pane_ParamLimits

0x6c43,	// (0x000441d7) main_hwr_training_symbol_option_pane

0xd3c2,	// (0x0004a956) popup_hwr_training_preview_window_ParamLimits

0xd3c2,	// (0x0004a956) popup_hwr_training_preview_window

0x6ca4,	// (0x00044238) hwr_training_navi_pane_g5_ParamLimits

0x6ca4,	// (0x00044238) hwr_training_navi_pane_g5

0xd5fc,	// (0x0004ab90) popup_char_count_window

0xdc53,	// (0x0004b1e7) bg_popup_sub_pane_cp20_ParamLimits

0x7e99,	// (0x0004542d) list_vitu2_match_list_pane_ParamLimits

0x7ea5,	// (0x00045439) vitu2_page_scroll_pane_ParamLimits

0x7ea5,	// (0x00045439) vitu2_page_scroll_pane

0xdac8,	// (0x0004b05c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdac8,	// (0x0004b05c) list_single_hwr_training_symbol_option_pane

0xdadb,	// (0x0004b06f) list_single_hwr_training_symbol_option_pane_g1

0xdae3,	// (0x0004b077) list_single_hwr_training_symbol_option_pane_t1

0xdaf1,	// (0x0004b085) bg_button_pane_cp023

0xdafa,	// (0x0004b08e) bg_button_pane_cp024

0x83e6,	// (0x0004597a) vitu2_page_scroll_pane_g1

0x83ee,	// (0x00045982) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004d060) vitu2_page_scroll_pane_g

0x83f6,	// (0x0004598a) vitu2_page_scroll_pane_t1

0xd17c,	// (0x0004a710) popup_char_count_window_g1

0xdb2d,	// (0x0004b0c1) popup_char_count_window_g2

0xdb36,	// (0x0004b0ca) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004d065) popup_char_count_window_g

0xdb3f,	// (0x0004b0d3) popup_char_count_window_t1

0x9fb0,	// (0x00047544) main_vded2_pane

0xd0b8,	// (0x0004a64c) aid_size_cell_imed_line

0xd0c2,	// (0x0004a656) grid_imed_line_width_pane

0x7508,	// (0x00044a9c) vid4_indicators_pane_g4

0xdb4d,	// (0x0004b0e1) cell_imed_line_width_pane_ParamLimits

0xdb4d,	// (0x0004b0e1) cell_imed_line_width_pane

0xdb61,	// (0x0004b0f5) cell_imed_line_width_pane_g1

0xd6cb,	// (0x0004ac5f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004d06c) cell_imed_line_width_pane_g

0x8405,	// (0x00045999) main_vded2_pane_g1_ParamLimits

0x8405,	// (0x00045999) main_vded2_pane_g1

0x8412,	// (0x000459a6) main_vded2_pane_g2_ParamLimits

0x8412,	// (0x000459a6) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004d071) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004d071) main_vded2_pane_g

0x8420,	// (0x000459b4) vded2_slider_pane_ParamLimits

0x8420,	// (0x000459b4) vded2_slider_pane

0x842d,	// (0x000459c1) aid_size_touch_vded2_end

0x8437,	// (0x000459cb) aid_size_touch_vded2_playhead

0xdb6a,	// (0x0004b0fe) aid_size_touch_vded2_start

0xdb72,	// (0x0004b106) vded2_slider_bg_pane

0xdb7b,	// (0x0004b10f) vded2_slider_pane_g1

0xdb84,	// (0x0004b118) vded2_slider_pane_g2

0x843f,	// (0x000459d3) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004d076) vded2_slider_pane_g

0xdb8c,	// (0x0004b120) vded2_slider_bg_pane_g1

0xdb95,	// (0x0004b129) vded2_slider_bg_pane_g2

0xdb9e,	// (0x0004b132) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004d07d) vded2_slider_bg_pane_g

0x4d22,	// (0x000422b6) aid_postcard_touch_down_pane_ParamLimits

0x4d22,	// (0x000422b6) aid_postcard_touch_down_pane

0x4d32,	// (0x000422c6) aid_postcard_touch_up_pane_ParamLimits

0x4d32,	// (0x000422c6) aid_postcard_touch_up_pane

0x9fb0,	// (0x00047544) main_blid2_pane

0x5462,	// (0x000429f6) popup_blid2_search_window

0x9fb0,	// (0x00047544) blid2_gps_pane

0x9fb0,	// (0x00047544) blid2_navig_pane

0x9fb0,	// (0x00047544) blid2_search_pane

0x9fb0,	// (0x00047544) blid2_tripm_pane

0x8448,	// (0x000459dc) blid2_search_pane_g1_ParamLimits

0x8448,	// (0x000459dc) blid2_search_pane_g1

0x8458,	// (0x000459ec) blid2_search_pane_t1_ParamLimits

0x8458,	// (0x000459ec) blid2_search_pane_t1

0x846a,	// (0x000459fe) aid_size_cell_blid2_gps_ParamLimits

0x846a,	// (0x000459fe) aid_size_cell_blid2_gps

0x847a,	// (0x00045a0e) blid2_gps_pane_g1_ParamLimits

0x847a,	// (0x00045a0e) blid2_gps_pane_g1

0x8486,	// (0x00045a1a) grid_blid2_satellite_pane_ParamLimits

0x8486,	// (0x00045a1a) grid_blid2_satellite_pane

0x8496,	// (0x00045a2a) blid2_navig_pane_g1_ParamLimits

0x8496,	// (0x00045a2a) blid2_navig_pane_g1

0x84a2,	// (0x00045a36) blid2_navig_pane_t1_ParamLimits

0x84a2,	// (0x00045a36) blid2_navig_pane_t1

0x84b4,	// (0x00045a48) blid2_navig_pane_t2_ParamLimits

0x84b4,	// (0x00045a48) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004d084) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004d084) blid2_navig_pane_t

0x84c6,	// (0x00045a5a) blid2_navig_ring_pane_ParamLimits

0x84c6,	// (0x00045a5a) blid2_navig_ring_pane

0x84d6,	// (0x00045a6a) blid2_speed_pane_ParamLimits

0x84d6,	// (0x00045a6a) blid2_speed_pane

0x84e2,	// (0x00045a76) blid2_tripm_pane_g1_ParamLimits

0x84e2,	// (0x00045a76) blid2_tripm_pane_g1

0x84f2,	// (0x00045a86) blid2_tripm_pane_g2_ParamLimits

0x84f2,	// (0x00045a86) blid2_tripm_pane_g2

0x84fe,	// (0x00045a92) blid2_tripm_pane_g3_ParamLimits

0x84fe,	// (0x00045a92) blid2_tripm_pane_g3

0x850a,	// (0x00045a9e) blid2_tripm_pane_g4_ParamLimits

0x850a,	// (0x00045a9e) blid2_tripm_pane_g4

0x8516,	// (0x00045aaa) blid2_tripm_pane_g5_ParamLimits

0x8516,	// (0x00045aaa) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004d089) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004d089) blid2_tripm_pane_g

0x8532,	// (0x00045ac6) blid2_tripm_pane_t1_ParamLimits

0x8532,	// (0x00045ac6) blid2_tripm_pane_t1

0x8546,	// (0x00045ada) blid2_tripm_pane_t2_ParamLimits

0x8546,	// (0x00045ada) blid2_tripm_pane_t2

0x8558,	// (0x00045aec) blid2_tripm_pane_t3_ParamLimits

0x8558,	// (0x00045aec) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004d096) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004d096) blid2_tripm_pane_t

0x858a,	// (0x00045b1e) cell_blid2_satellite_pane_ParamLimits

0x858a,	// (0x00045b1e) cell_blid2_satellite_pane

0x85a4,	// (0x00045b38) cell_blid2_satellite_pane_g1

0xdba7,	// (0x0004b13b) cell_blid2_satellite_pane_t1

0xcbab,	// (0x0004a13f) blid2_speed_pane_g1

0xdbb5,	// (0x0004b149) blid2_speed_pane_t1

0xdbc3,	// (0x0004b157) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004d09f) blid2_speed_pane_t

0xcbab,	// (0x0004a13f) blid2_navig_ring_pane_g1

0x85ad,	// (0x00045b41) blid2_navig_ring_pane_g2

0x85b5,	// (0x00045b49) blid2_navig_ring_pane_g3

0x85bd,	// (0x00045b51) blid2_navig_ring_pane_g4

0x85c5,	// (0x00045b59) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004d0a4) blid2_navig_ring_pane_g

0x9fb0,	// (0x00047544) bg_popup_window_pane_cp011

0xdbd1,	// (0x0004b165) popup_blid2_search_window_g1

0xdbd9,	// (0x0004b16d) popup_blid2_search_window_t1

0xdbe7,	// (0x0004b17b) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004d0af) popup_blid2_search_window_t

0xaa46,	// (0x00047fda) main_browser_pane_g1

0xa737,	// (0x00047ccb) main_browser_pane_ParamLimits

0xade7,	// (0x0004837b) bg_button_pane_cp011_ParamLimits

0x7774,	// (0x00044d08) cell_vitu2_function_pane_g1_ParamLimits

0xc7a1,	// (0x00049d35) bg_popup_sub_pane_cp22_ParamLimits

0x11f5,	// (0x0003e789) input_focus_pane_cp08_ParamLimits

0x802d,	// (0x000455c1) popup_vitu2_query_button_pane_ParamLimits

0x802d,	// (0x000455c1) popup_vitu2_query_button_pane

0x120c,	// (0x0003e7a0) popup_vitu2_query_input_button_pane

0xd88b,	// (0x0004ae1f) popup_vitu2_query_window_g1_ParamLimits

0x1216,	// (0x0003e7aa) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004cfb0) popup_vitu2_query_window_g_ParamLimits

0x9fb0,	// (0x00047544) bg_button_pane_cp026

0x85cd,	// (0x00045b61) popup_vitu2_query_input_button_pane_g1

0x9fb0,	// (0x00047544) bg_button_pane_cp025

0xdbf5,	// (0x0004b189) popup_vitu2_query_button_pane_t1

0x5ec3,	// (0x00043457) main_mp3_pane_t6

0x5ed3,	// (0x00043467) popup_slider_window_cp01

0x73e7,	// (0x0004497b) cam4_battery_pane

0x74c7,	// (0x00044a5b) cam4_battery_pane_cp02

0x833c,	// (0x000458d0) cam4_battery_pane_cp01

0x833c,	// (0x000458d0) cam4_battery_pane_cp03

0xcbab,	// (0x0004a13f) cam4_battery_pane_g1

0xd6d3,	// (0x0004ac67) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004d0b4) cam4_battery_pane_g

0xca75,	// (0x0004a009) popup_blid_sat_info2_window_t11

0xb1d1,	// (0x00048765) aid_size_touch_mv_arrow_left_ParamLimits

0xb1fc,	// (0x00048790) aid_size_touch_mv_arrow_right_ParamLimits

0xb25a,	// (0x000487ee) navi_pane_g1_ParamLimits

0xb266,	// (0x000487fa) navi_pane_g2_ParamLimits

0xb294,	// (0x00048828) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004c979) navi_pane_g_ParamLimits

0x47a2,	// (0x00041d36) navi_pane_mv_t1_ParamLimits

0x699b,	// (0x00043f2f) grid_imed_effect_pane_ParamLimits

0x3207,	// (0x0004079b) aid_placing_vt_slider_lsc

0xa995,	// (0x00047f29) aid_placing_vt_slider_prt

0xade7,	// (0x0004837b) bg_tb_trans_pane_cp01_ParamLimits

0xcd2b,	// (0x0004a2bf) popup_image_details_window_g1_ParamLimits

0xcd3e,	// (0x0004a2d2) popup_image_details_window_g2_ParamLimits

0xcd53,	// (0x0004a2e7) popup_image_details_window_g3_ParamLimits

0xcd53,	// (0x0004a2e7) popup_image_details_window_g3

0xf718,	// (0x0004ccac) popup_image_details_window_g_ParamLimits

0xcd67,	// (0x0004a2fb) popup_image_details_window_t1_ParamLimits

0xcd79,	// (0x0004a30d) popup_image_details_window_t2_ParamLimits

0xcd92,	// (0x0004a326) popup_image_details_window_t3_ParamLimits

0xcda6,	// (0x0004a33a) popup_image_details_window_t4_ParamLimits

0xcdc1,	// (0x0004a355) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004ccb3) popup_image_details_window_t_ParamLimits

0x825c,	// (0x000457f0) cl_header_name_pane_ParamLimits

0x825c,	// (0x000457f0) cl_header_name_pane

0x85d5,	// (0x00045b69) cl_header_name_pane_t1_ParamLimits

0x85d5,	// (0x00045b69) cl_header_name_pane_t1

0x85ec,	// (0x00045b80) cl_header_name_pane_t2_ParamLimits

0x85ec,	// (0x00045b80) cl_header_name_pane_t2

0x8616,	// (0x00045baa) cl_header_name_pane_t3_ParamLimits

0x8616,	// (0x00045baa) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004d0b9) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004d0b9) cl_header_name_pane_t

0xb323,	// (0x000488b7) navi_pane_mv_g2_ParamLimits

0xd5d6,	// (0x0004ab6a) field_vitu2_entry_pane_g1_ParamLimits

0xd5e2,	// (0x0004ab76) field_vitu2_entry_pane_g2_ParamLimits

0xd5ee,	// (0x0004ab82) field_vitu2_entry_pane_g3_ParamLimits

0xd5ee,	// (0x0004ab82) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004ceaf) field_vitu2_entry_pane_g_ParamLimits

0x76ff,	// (0x00044c93) cell_vitu2_itu_pane_g1_ParamLimits

0x770f,	// (0x00044ca3) cell_vitu2_itu_pane_g2_ParamLimits

0x770f,	// (0x00044ca3) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004cebb) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004cebb) cell_vitu2_itu_pane_g

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp05_ParamLimits

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp05

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp03

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp04

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp10_ParamLimits

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp10

0x13cb,	// (0x0003e95f) bg_vkb2_func_pane_cp08

0x8206,	// (0x0004579a) bg_vkb2_func_pane_cp06

0x8214,	// (0x000457a8) bg_vkb2_func_pane_cp07

0xdb03,	// (0x0004b097) bg_vkb2_func_pane_cp11_ParamLimits

0xdb03,	// (0x0004b097) bg_vkb2_func_pane_cp11

0xdb18,	// (0x0004b0ac) bg_vkb2_func_pane_cp12_ParamLimits

0xdb18,	// (0x0004b0ac) bg_vkb2_func_pane_cp12

0x9fb0,	// (0x00047544) bg_vkb2_func_pane_cp09

0xd60e,	// (0x0004aba2) bg_vkb2_func_pane_g1

0xab57,	// (0x000480eb) bg_vkb2_func_pane_g2

0xd616,	// (0x0004abaa) bg_vkb2_func_pane_g3

0xd61e,	// (0x0004abb2) bg_vkb2_func_pane_g4

0xd850,	// (0x0004ade4) bg_vkb2_func_pane_g5

0xd636,	// (0x0004abca) bg_vkb2_func_pane_g6

0xd63e,	// (0x0004abd2) bg_vkb2_func_pane_g7

0xd62e,	// (0x0004abc2) bg_vkb2_func_pane_g8

0xab37,	// (0x000480cb) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004d0c0) bg_vkb2_func_pane_g

0x8524,	// (0x00045ab8) blid2_tripm_pane_g6_ParamLimits

0x8524,	// (0x00045ab8) blid2_tripm_pane_g6

0xd47a,	// (0x0004aa0e) mp4_progress_pane_g1

0x857e,	// (0x00045b12) blid2_tripm_values_pane_ParamLimits

0x857e,	// (0x00045b12) blid2_tripm_values_pane

0x863b,	// (0x00045bcf) blid2_tripm_values_pane_t1

0x8649,	// (0x00045bdd) blid2_tripm_values_pane_t2

0x8657,	// (0x00045beb) blid2_tripm_values_pane_t3

0x8665,	// (0x00045bf9) blid2_tripm_values_pane_t4

0x8673,	// (0x00045c07) blid2_tripm_values_pane_t5

0x8681,	// (0x00045c15) blid2_tripm_values_pane_t6

0x868f,	// (0x00045c23) blid2_tripm_values_pane_t7

0x869d,	// (0x00045c31) blid2_tripm_values_pane_t8

0x86ab,	// (0x00045c3f) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004d0d3) blid2_tripm_values_pane_t

0x3247,	// (0x000407db) call_video_pane_t1_ParamLimits

0x3268,	// (0x000407fc) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004c802) call_video_pane_t_ParamLimits

0x0f5e,	// (0x0003e4f2) msg_header_pane_g1_ParamLimits

0xb505,	// (0x00048a99) msg_header_pane_g2_ParamLimits

0xb505,	// (0x00048a99) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004ca1c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004ca1c) msg_header_pane_g

0xa737,	// (0x00047ccb) main_clock2_pane_ParamLimits

0x672c,	// (0x00043cc0) grid_clock2_toolbar_pane_ParamLimits

0x672c,	// (0x00043cc0) grid_clock2_toolbar_pane

0x672c,	// (0x00043cc0) listscroll_clock2_pane_ParamLimits

0x672c,	// (0x00043cc0) listscroll_clock2_pane

0x67d6,	// (0x00043d6a) main_clock2_pane_t3_ParamLimits

0x67d6,	// (0x00043d6a) main_clock2_pane_t3

0x67e8,	// (0x00043d7c) main_clock2_pane_t4_ParamLimits

0x67e8,	// (0x00043d7c) main_clock2_pane_t4

0xdc03,	// (0x0004b197) cell_clock2_toolbar_pane

0xdc0b,	// (0x0004b19f) cell_clock2_toolbar_pane_cp01

0xdc0b,	// (0x0004b19f) cell_clock2_toolbar_pane_cp02

0xdc13,	// (0x0004b1a7) cell_clock2_toolbar_pane_cp03

0xdc1b,	// (0x0004b1af) list_clock2_pane

0xb147,	// (0x000486db) scroll_pane_cp10

0xdc23,	// (0x0004b1b7) list_single_clock2_pane_ParamLimits

0xdc23,	// (0x0004b1b7) list_single_clock2_pane

0xb38a,	// (0x0004891e) list_highlight_pane_cp08

0xdc30,	// (0x0004b1c4) list_single_clock2_pane_t1

0xdc8a,	// (0x0004b21e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004d0e6) list_single_clock2_pane_t

0x9fb0,	// (0x00047544) bg_button_pane_cp10

0xdc98,	// (0x0004b22c) cell_clock2_toolbar_pane_g1

0x4c84,	// (0x00042218) aid_main_viewer_pane_g1_ParamLimits

0x4c84,	// (0x00042218) aid_main_viewer_pane_g1

0x4c90,	// (0x00042224) aid_main_viewer_pane_g2_ParamLimits

0x4c90,	// (0x00042224) aid_main_viewer_pane_g2

0x4c9c,	// (0x00042230) aid_main_viewer_pane_g3_ParamLimits

0x4c9c,	// (0x00042230) aid_main_viewer_pane_g3

0x4cad,	// (0x00042241) aid_main_viewer_pane_g4_ParamLimits

0x4cad,	// (0x00042241) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004ca2d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004ca2d) aid_main_viewer_pane_g

0x543a,	// (0x000429ce) main_calc_pane_ParamLimits

0x5447,	// (0x000429db) main_dialer2_pane_ParamLimits

0x9fb0,	// (0x00047544) main_cam6_pane

0x9fb0,	// (0x00047544) main_vid6_pane

0x6738,	// (0x00043ccc) listscroll_gen_pane_cp06_ParamLimits

0x6738,	// (0x00043ccc) listscroll_gen_pane_cp06

0x67fa,	// (0x00043d8e) main_clock2_pane_t5_ParamLimits

0x67fa,	// (0x00043d8e) main_clock2_pane_t5

0x6845,	// (0x00043dd9) aid_call2_pane_cp10_ParamLimits

0x6857,	// (0x00043deb) aid_call_pane_cp10_ParamLimits

0xb1c5,	// (0x00048759) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1c5,	// (0x00048759) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6869,	// (0x00043dfd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6869,	// (0x00043dfd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1c5,	// (0x00048759) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004cd68) popup_clock_analogue_window_cp10_g_ParamLimits

0x687b,	// (0x00043e0f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7066,	// (0x000445fa) cell_dialer2_keypad_pane_g2_ParamLimits

0x7066,	// (0x000445fa) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004ce4e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004ce4e) cell_dialer2_keypad_pane_g

0x7082,	// (0x00044616) cell_dialer2_keypad_pane_t1

0x7a41,	// (0x00044fd5) main_cset_text2_pane_ParamLimits

0x7a41,	// (0x00044fd5) main_cset_text2_pane

0xda6b,	// (0x0004afff) area_vitu2_query_pane_g1_ParamLimits

0x12f6,	// (0x0003e88a) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004d003) area_vitu2_query_pane_g_ParamLimits

0x13a7,	// (0x0003e93b) area_vitu2_query_pane_t7_ParamLimits

0x13a7,	// (0x0003e93b) area_vitu2_query_pane_t7

0x8206,	// (0x0004579a) bg_button_pane_cp018_ParamLimits

0x8214,	// (0x000457a8) bg_button_pane_cp021_ParamLimits

0x13cb,	// (0x0003e95f) bg_button_pane_cp022_ParamLimits

0x13cb,	// (0x0003e95f) bg_vkb2_func_pane_cp08_ParamLimits

0x8206,	// (0x0004579a) bg_vkb2_func_pane_cp06_ParamLimits

0x8214,	// (0x000457a8) bg_vkb2_func_pane_cp07_ParamLimits

0x13dc,	// (0x0003e970) input_focus_pane_cp09_ParamLimits

0x86b9,	// (0x00045c4d) cam6_autofocus_pane_ParamLimits

0x86b9,	// (0x00045c4d) cam6_autofocus_pane

0x86db,	// (0x00045c6f) cam6_image_uncrop_pane_ParamLimits

0x86db,	// (0x00045c6f) cam6_image_uncrop_pane

0x8708,	// (0x00045c9c) cam6_indi_pane_ParamLimits

0x8708,	// (0x00045c9c) cam6_indi_pane

0x8722,	// (0x00045cb6) cam6_mode_pane_ParamLimits

0x8722,	// (0x00045cb6) cam6_mode_pane

0x8736,	// (0x00045cca) cam6_timer_pane_ParamLimits

0x8736,	// (0x00045cca) cam6_timer_pane

0x8742,	// (0x00045cd6) cam6_zoom_pane_ParamLimits

0x8742,	// (0x00045cd6) cam6_zoom_pane

0x875a,	// (0x00045cee) cam6_mode_pane_g1_ParamLimits

0x875a,	// (0x00045cee) cam6_mode_pane_g1

0x8766,	// (0x00045cfa) cam6_mode_pane_g2_ParamLimits

0x8766,	// (0x00045cfa) cam6_mode_pane_g2

0x8772,	// (0x00045d06) cam6_mode_pane_g3_ParamLimits

0x8772,	// (0x00045d06) cam6_mode_pane_g3

0x877e,	// (0x00045d12) cam6_mode_pane_g4_ParamLimits

0x877e,	// (0x00045d12) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004d0eb) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004d0eb) cam6_mode_pane_g

0xdc61,	// (0x0004b1f5) bg_tb_trans_pane_cp08_ParamLimits

0xdc61,	// (0x0004b1f5) bg_tb_trans_pane_cp08

0xdca0,	// (0x0004b234) cam6_battery_pane_ParamLimits

0xdca0,	// (0x0004b234) cam6_battery_pane

0xdcb6,	// (0x0004b24a) cam6_indi_pane_g1_ParamLimits

0xdcb6,	// (0x0004b24a) cam6_indi_pane_g1

0xdcc8,	// (0x0004b25c) cam6_indi_pane_g2_ParamLimits

0xdcc8,	// (0x0004b25c) cam6_indi_pane_g2

0xdcda,	// (0x0004b26e) cam6_indi_pane_g3_ParamLimits

0xdcda,	// (0x0004b26e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004d0f4) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004d0f4) cam6_indi_pane_g

0xdcec,	// (0x0004b280) cam6_indi_pane_t1_ParamLimits

0xdcec,	// (0x0004b280) cam6_indi_pane_t1

0x753b,	// (0x00044acf) cam6_autofocus_pane_g1

0x7543,	// (0x00044ad7) cam6_autofocus_pane_g2

0x754b,	// (0x00044adf) cam6_autofocus_pane_g3

0x7553,	// (0x00044ae7) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004d0fb) cam6_autofocus_pane_g

0xdd12,	// (0x0004b2a6) cam6_timer_pane_g1

0xdd1a,	// (0x0004b2ae) cam6_timer_pane_t1

0xdd28,	// (0x0004b2bc) cam6_zoom_cont_pane

0xdd30,	// (0x0004b2c4) cam6_zoom_pane_g1

0xdd38,	// (0x0004b2cc) cam6_zoom_pane_g2

0x878a,	// (0x00045d1e) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004d104) cam6_zoom_pane_g

0xcbab,	// (0x0004a13f) cam6_battery_pane_g1

0xcbab,	// (0x0004a13f) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004cc70) cam6_battery_pane_g

0xdd40,	// (0x0004b2d4) cam6_zoom_cont_pane_g1

0xdd49,	// (0x0004b2dd) cam6_zoom_cont_pane_g2

0xdd52,	// (0x0004b2e6) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004d10b) cam6_zoom_cont_pane_g

0x87a7,	// (0x00045d3b) cam6_mode_pane_cp_ParamLimits

0x87a7,	// (0x00045d3b) cam6_mode_pane_cp

0x8742,	// (0x00045cd6) cam6_zoom_pane_cp_ParamLimits

0x8742,	// (0x00045cd6) cam6_zoom_pane_cp

0x87bb,	// (0x00045d4f) vid6_image_uncrop_cif_pane_ParamLimits

0x87bb,	// (0x00045d4f) vid6_image_uncrop_cif_pane

0x87e7,	// (0x00045d7b) vid6_image_uncrop_nhd_pane_ParamLimits

0x87e7,	// (0x00045d7b) vid6_image_uncrop_nhd_pane

0x86db,	// (0x00045c6f) vid6_image_uncrop_vga_pane_ParamLimits

0x86db,	// (0x00045c6f) vid6_image_uncrop_vga_pane

0x8804,	// (0x00045d98) vid6_image_uncrop_wvga_pane_ParamLimits

0x8804,	// (0x00045d98) vid6_image_uncrop_wvga_pane

0x8821,	// (0x00045db5) vid6_indi_pane_ParamLimits

0x8821,	// (0x00045db5) vid6_indi_pane

0xdc61,	// (0x0004b1f5) bg_tb_trans_pane_cp09_ParamLimits

0xdc61,	// (0x0004b1f5) bg_tb_trans_pane_cp09

0xdd6a,	// (0x0004b2fe) cam6_battery_pane_cp_ParamLimits

0xdd6a,	// (0x0004b2fe) cam6_battery_pane_cp

0xdd76,	// (0x0004b30a) vid6_indi_pane_g1_ParamLimits

0xdd76,	// (0x0004b30a) vid6_indi_pane_g1

0xdd88,	// (0x0004b31c) vid6_indi_pane_g2_ParamLimits

0xdd88,	// (0x0004b31c) vid6_indi_pane_g2

0xdd9a,	// (0x0004b32e) vid6_indi_pane_g3_ParamLimits

0xdd9a,	// (0x0004b32e) vid6_indi_pane_g3

0xddaf,	// (0x0004b343) vid6_indi_pane_g4_ParamLimits

0xddaf,	// (0x0004b343) vid6_indi_pane_g4

0xddc4,	// (0x0004b358) vid6_indi_pane_g5_ParamLimits

0xddc4,	// (0x0004b358) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004d112) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004d112) vid6_indi_pane_g

0xddde,	// (0x0004b372) vid6_indi_pane_t1_ParamLimits

0xddde,	// (0x0004b372) vid6_indi_pane_t1

0xddf4,	// (0x0004b388) vid6_indi_pane_t2_ParamLimits

0xddf4,	// (0x0004b388) vid6_indi_pane_t2

0xde1c,	// (0x0004b3b0) vid6_indi_pane_t3_ParamLimits

0xde1c,	// (0x0004b3b0) vid6_indi_pane_t3

0xde44,	// (0x0004b3d8) vid6_indi_pane_t4_ParamLimits

0xde44,	// (0x0004b3d8) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004d11d) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004d11d) vid6_indi_pane_t

0xde68,	// (0x0004b3fc) wait_bar_pane_cp08

0x8844,	// (0x00045dd8) main_cset_text2_pane_t1_ParamLimits

0x8844,	// (0x00045dd8) main_cset_text2_pane_t1

0x8792,	// (0x00045d26) listscroll_gen_pane_cp06_t1_ParamLimits

0x8792,	// (0x00045d26) listscroll_gen_pane_cp06_t1

0x9fb0,	// (0x00047544) main_cam6_set_pane

0xce0b,	// (0x0004a39f) bg_tb_trans_pane_cp06_ParamLimits

0x73ef,	// (0x00044983) cam4_indicators_pane_g1_ParamLimits

0x7400,	// (0x00044994) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004ce8b) cam4_indicators_pane_g_ParamLimits

0x741e,	// (0x000449b2) cam4_indicators_pane_t1_ParamLimits

0xade7,	// (0x0004837b) bg_tb_trans_pane_cp07_ParamLimits

0x74cf,	// (0x00044a63) vid4_indicators_pane_g1_ParamLimits

0x74e3,	// (0x00044a77) vid4_indicators_pane_g2_ParamLimits

0x74f7,	// (0x00044a8b) vid4_indicators_pane_g3_ParamLimits

0x7508,	// (0x00044a9c) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004ce9d) vid4_indicators_pane_g_ParamLimits

0x7524,	// (0x00044ab8) vid4_indicators_pane_t1_ParamLimits

0x8344,	// (0x000458d8) vid4_progress_pane_g1_ParamLimits

0x8354,	// (0x000458e8) vid4_progress_pane_g2_ParamLimits

0x8364,	// (0x000458f8) vid4_progress_pane_g3_ParamLimits

0x8376,	// (0x0004590a) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004d04e) vid4_progress_pane_g_ParamLimits

0x8394,	// (0x00045928) vid4_progress_pane_t1_ParamLimits

0x83aa,	// (0x0004593e) vid4_progress_pane_t2_ParamLimits

0x83bf,	// (0x00045953) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004d059) vid4_progress_pane_t_ParamLimits

0x83d5,	// (0x00045969) wait_bar_pane_cp07_ParamLimits

0x887e,	// (0x00045e12) main_cam6_set_pane_g2_ParamLimits

0x887e,	// (0x00045e12) main_cam6_set_pane_g2

0x888a,	// (0x00045e1e) main_cset6_listscroll_pane_ParamLimits

0x888a,	// (0x00045e1e) main_cset6_listscroll_pane

0x88b5,	// (0x00045e49) main_cset6_slider_pane_ParamLimits

0x88b5,	// (0x00045e49) main_cset6_slider_pane

0x88c1,	// (0x00045e55) main_cset6_text2_pane_ParamLimits

0x88c1,	// (0x00045e55) main_cset6_text2_pane

0xde77,	// (0x0004b40b) main_cset6_text_pane

0xde7f,	// (0x0004b413) main_cset_list_pane_copy1_ParamLimits

0xde7f,	// (0x0004b413) main_cset_list_pane_copy1

0xde8f,	// (0x0004b423) scroll_pane_cp028_copy1

0x88d4,	// (0x00045e68) cset_list_set_pane_copy1

0x88ed,	// (0x00045e81) aid_position_infowindow_above_copy1

0x88f5,	// (0x00045e89) aid_position_infowindow_below_copy1

0x143e,	// (0x0003e9d2) cset_list_set_pane_g1_copy1

0x116a,	// (0x0003e6fe) cset_list_set_pane_g3_copy1_ParamLimits

0x116a,	// (0x0003e6fe) cset_list_set_pane_g3_copy1

0x1179,	// (0x0003e70d) cset_list_set_pane_t1_copy1_ParamLimits

0x1179,	// (0x0003e70d) cset_list_set_pane_t1_copy1

0xade7,	// (0x0004837b) list_highlight_pane_cp021_copy1_ParamLimits

0xade7,	// (0x0004837b) list_highlight_pane_cp021_copy1

0xde98,	// (0x0004b42c) cset6_slider_pane_ParamLimits

0xde98,	// (0x0004b42c) cset6_slider_pane

0xdec4,	// (0x0004b458) main_cset6_slider_pane_g1_ParamLimits

0xdec4,	// (0x0004b458) main_cset6_slider_pane_g1

0x88fd,	// (0x00045e91) main_cset6_slider_pane_g2_ParamLimits

0x88fd,	// (0x00045e91) main_cset6_slider_pane_g2

0xdeec,	// (0x0004b480) main_cset6_slider_pane_g3_ParamLimits

0xdeec,	// (0x0004b480) main_cset6_slider_pane_g3

0x8925,	// (0x00045eb9) main_cset6_slider_pane_g4_ParamLimits

0x8925,	// (0x00045eb9) main_cset6_slider_pane_g4

0x8931,	// (0x00045ec5) main_cset6_slider_pane_g5_ParamLimits

0x8931,	// (0x00045ec5) main_cset6_slider_pane_g5

0xd75b,	// (0x0004acef) main_cset6_slider_pane_g7_ParamLimits

0xd75b,	// (0x0004acef) main_cset6_slider_pane_g7

0xd767,	// (0x0004acfb) main_cset6_slider_pane_g8_ParamLimits

0xd767,	// (0x0004acfb) main_cset6_slider_pane_g8

0x893f,	// (0x00045ed3) main_cset6_slider_pane_g9_ParamLimits

0x893f,	// (0x00045ed3) main_cset6_slider_pane_g9

0x894b,	// (0x00045edf) main_cset6_slider_pane_g10_ParamLimits

0x894b,	// (0x00045edf) main_cset6_slider_pane_g10

0x8957,	// (0x00045eeb) main_cset6_slider_pane_g11_ParamLimits

0x8957,	// (0x00045eeb) main_cset6_slider_pane_g11

0x8963,	// (0x00045ef7) main_cset6_slider_pane_g12_ParamLimits

0x8963,	// (0x00045ef7) main_cset6_slider_pane_g12

0x896f,	// (0x00045f03) main_cset6_slider_pane_g13_ParamLimits

0x896f,	// (0x00045f03) main_cset6_slider_pane_g13

0x897b,	// (0x00045f0f) main_cset6_slider_pane_g14_ParamLimits

0x897b,	// (0x00045f0f) main_cset6_slider_pane_g14

0x8987,	// (0x00045f1b) main_cset6_slider_pane_g15_ParamLimits

0x8987,	// (0x00045f1b) main_cset6_slider_pane_g15

0x899f,	// (0x00045f33) main_cset6_slider_pane_g16_ParamLimits

0x899f,	// (0x00045f33) main_cset6_slider_pane_g16

0x89ad,	// (0x00045f41) main_cset6_slider_pane_g17_ParamLimits

0x89ad,	// (0x00045f41) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004d126) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004d126) main_cset6_slider_pane_g

0xdef8,	// (0x0004b48c) main_cset6_slider_pane_t1_ParamLimits

0xdef8,	// (0x0004b48c) main_cset6_slider_pane_t1

0x89d3,	// (0x00045f67) main_cset6_slider_pane_t2_ParamLimits

0x89d3,	// (0x00045f67) main_cset6_slider_pane_t2

0x89fe,	// (0x00045f92) main_cset6_slider_pane_t3_ParamLimits

0x89fe,	// (0x00045f92) main_cset6_slider_pane_t3

0x8a29,	// (0x00045fbd) main_cset6_slider_pane_t4_ParamLimits

0x8a29,	// (0x00045fbd) main_cset6_slider_pane_t4

0x8a54,	// (0x00045fe8) main_cset6_slider_pane_t5_ParamLimits

0x8a54,	// (0x00045fe8) main_cset6_slider_pane_t5

0xdf39,	// (0x0004b4cd) main_cset6_slider_pane_t7_ParamLimits

0xdf39,	// (0x0004b4cd) main_cset6_slider_pane_t7

0x8a81,	// (0x00046015) main_cset6_slider_pane_t8_ParamLimits

0x8a81,	// (0x00046015) main_cset6_slider_pane_t8

0x8aa5,	// (0x00046039) main_cset6_slider_pane_t9_ParamLimits

0x8aa5,	// (0x00046039) main_cset6_slider_pane_t9

0x8ac9,	// (0x0004605d) main_cset6_slider_pane_t10_ParamLimits

0x8ac9,	// (0x0004605d) main_cset6_slider_pane_t10

0x8aed,	// (0x00046081) main_cset6_slider_pane_t11_ParamLimits

0x8aed,	// (0x00046081) main_cset6_slider_pane_t11

0xdf6f,	// (0x0004b503) main_cset6_slider_pane_t14_ParamLimits

0xdf6f,	// (0x0004b503) main_cset6_slider_pane_t14

0xdfa8,	// (0x0004b53c) main_cset6_slider_pane_t15_ParamLimits

0xdfa8,	// (0x0004b53c) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004d14b) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004d14b) main_cset6_slider_pane_t

0xdc6f,	// (0x0004b203) cset_slider_pane_g1_copy1

0xdc78,	// (0x0004b20c) cset_slider_pane_g2_copy1

0xdc81,	// (0x0004b215) cset_slider_pane_g3_copy1

0x9fb0,	// (0x00047544) bg_popup_sub_pane_cp011_copy1

0xdfe1,	// (0x0004b575) main_cset_text_pane_g1_copy1

0xd89f,	// (0x0004ae33) main_cset_text_pane_t1_copy1

0xd8ad,	// (0x0004ae41) main_cset_text_pane_t2_copy1

0xd8bb,	// (0x0004ae4f) main_cset_text_pane_t3_copy1

0xd8c9,	// (0x0004ae5d) main_cset_text_pane_t4_copy1

0xd8d7,	// (0x0004ae6b) main_cset_text_pane_t5_copy1

0xdfe9,	// (0x0004b57d) main_cset_text_pane_t6_copy1

0xdff7,	// (0x0004b58b) main_cset_text_pane_t7_copy1

0x8b13,	// (0x000460a7) main_cset_text2_pane_t1_copy1

0xade7,	// (0x0004837b) main_ncimui_pane

0x5498,	// (0x00042a2c) popup_query_ncimui_window_ParamLimits

0x5498,	// (0x00042a2c) popup_query_ncimui_window

0x1021,	// (0x0003e5b5) field_cale_ev2_pane_g4_ParamLimits

0x1021,	// (0x0003e5b5) field_cale_ev2_pane_g4

0x6d86,	// (0x0004431a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6d86,	// (0x0004431a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004ce29) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004ce29) cell_video_dialer_keypad_pane_g

0x6d9e,	// (0x00044332) cell_video_dialer_keypad_pane_t1

0x9fb0,	// (0x00047544) bg_popup_window_pane_cp012

0xb008,	// (0x0004859c) heading_pane_cp06

0xe023,	// (0x0004b5b7) ncim_query_content_pane

0x9fb0,	// (0x00047544) bg_popup_heading_pane_cp01

0xe02b,	// (0x0004b5bf) ncim_heading_pane_t1

0xe039,	// (0x0004b5cd) ncim_indicator_popup_pane

0xe04b,	// (0x0004b5df) ncim_query_button_pane

0xe05f,	// (0x0004b5f3) ncim_query_content_pane_t1

0xe071,	// (0x0004b605) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004d18f) ncim_query_content_pane_t

0xe0ab,	// (0x0004b63f) ncim_query_list_pane

0xe0bd,	// (0x0004b651) ncim_query_popup_pane

0xe039,	// (0x0004b5cd) ncim_indicator_popup_pane_ParamLimits

0x8c6d,	// (0x00046201) ncim_query_content_pane_g1_ParamLimits

0x8c6d,	// (0x00046201) ncim_query_content_pane_g1

0xe05f,	// (0x0004b5f3) ncim_query_content_pane_t1_ParamLimits

0xe071,	// (0x0004b605) ncim_query_content_pane_t2_ParamLimits

0x8c79,	// (0x0004620d) ncim_query_content_pane_t3_ParamLimits

0x8c79,	// (0x0004620d) ncim_query_content_pane_t3

0x8c96,	// (0x0004622a) ncim_query_content_pane_t4_ParamLimits

0x8c96,	// (0x0004622a) ncim_query_content_pane_t4

0x8cb3,	// (0x00046247) ncim_query_content_pane_t5_ParamLimits

0x8cb3,	// (0x00046247) ncim_query_content_pane_t5

0xe083,	// (0x0004b617) ncim_query_content_pane_t6_ParamLimits

0xe083,	// (0x0004b617) ncim_query_content_pane_t6

0xfbfb,	// (0x0004d18f) ncim_query_content_pane_t_ParamLimits

0xe0ab,	// (0x0004b63f) ncim_query_list_pane_ParamLimits

0xe0bd,	// (0x0004b651) ncim_query_popup_pane_ParamLimits

0xe0d1,	// (0x0004b665) wait_bar_pane_cp04

0x9fb0,	// (0x00047544) input_focus_pane_cp011

0xe0d9,	// (0x0004b66d) ncim_query_popup_pane_t1

0xe0e7,	// (0x0004b67b) ncim_list_query_list_pane_ParamLimits

0xe0e7,	// (0x0004b67b) ncim_list_query_list_pane

0x9fb0,	// (0x00047544) bg_button_pane_cp027

0xe0fa,	// (0x0004b68e) ncim_query_button_pane_g1

0x9fb0,	// (0x00047544) list_highlight_pane_cp012

0xe104,	// (0x0004b698) ncim_list_query_list_pane_g1

0xe10c,	// (0x0004b6a0) ncim_list_query_list_pane_t1

0x740f,	// (0x000449a3) cam4_indicators_pane_g3_ParamLimits

0x740f,	// (0x000449a3) cam4_indicators_pane_g3

0x7514,	// (0x00044aa8) vid4_indicators_pane_g5_ParamLimits

0x7514,	// (0x00044aa8) vid4_indicators_pane_g5

0x8385,	// (0x00045919) vid4_progress_pane_g5_ParamLimits

0x8385,	// (0x00045919) vid4_progress_pane_g5

0x8b59,	// (0x000460ed) main_ncimui_pane_g1

0x8bc1,	// (0x00046155) ncimui_group_query_pane_ParamLimits

0x8bc1,	// (0x00046155) ncimui_group_query_pane

0x8c09,	// (0x0004619d) ncimui_list_pane_ParamLimits

0x8c09,	// (0x0004619d) ncimui_list_pane

0x8c30,	// (0x000461c4) ncimui_text_pane_ParamLimits

0x8c30,	// (0x000461c4) ncimui_text_pane

0x8cd0,	// (0x00046264) ncimui_text_pane_t1_ParamLimits

0x8cd0,	// (0x00046264) ncimui_text_pane_t1

0xe11a,	// (0x0004b6ae) ncimui_list_single_graphic_pane_ParamLimits

0xe11a,	// (0x0004b6ae) ncimui_list_single_graphic_pane

0x8cef,	// (0x00046283) ncimui_query_pane_ParamLimits

0x8cef,	// (0x00046283) ncimui_query_pane

0x9fb0,	// (0x00047544) list_highlight_pane_cp013

0xe12a,	// (0x0004b6be) ncim_list_query_list_pane_t1_copy1

0xe104,	// (0x0004b698) ncim_list_single_graphic_pane_g1

0xe138,	// (0x0004b6cc) ncim_query_button_pane_cp01

0xe144,	// (0x0004b6d8) ncim_query_entry_pane_ParamLimits

0xe144,	// (0x0004b6d8) ncim_query_entry_pane

0xe157,	// (0x0004b6eb) ncimui_query_pane_g1

0xe163,	// (0x0004b6f7) ncimui_query_pane_t1_ParamLimits

0xe163,	// (0x0004b6f7) ncimui_query_pane_t1

0xade7,	// (0x0004837b) input_focus_pane_cp012

0xe17c,	// (0x0004b710) ncim_query_entry_pane_t1

0xa737,	// (0x00047ccb) main_im_pane_ParamLimits

0xade7,	// (0x0004837b) main_mobtv_pane_ParamLimits

0xade7,	// (0x0004837b) main_mobtv_pane

0x89bb,	// (0x00045f4f) main_cset6_slider_pane_g18_ParamLimits

0x89bb,	// (0x00045f4f) main_cset6_slider_pane_g18

0x89c7,	// (0x00045f5b) main_cset6_slider_pane_g19_ParamLimits

0x89c7,	// (0x00045f5b) main_cset6_slider_pane_g19

0xd5ee,	// (0x0004ab82) bg_main_mobtv_pane_ParamLimits

0xd5ee,	// (0x0004ab82) bg_main_mobtv_pane

0x8d02,	// (0x00046296) main_mobtv_info_pane

0x8d0d,	// (0x000462a1) main_mobtv_loading_pane_ParamLimits

0x8d0d,	// (0x000462a1) main_mobtv_loading_pane

0xe18e,	// (0x0004b722) main_mobtv_pg_channel_list_pane

0xe198,	// (0x0004b72c) main_mobtv_pg_hdr_pane

0x8d1a,	// (0x000462ae) main_mobtv_programe_curr_pane_ParamLimits

0x8d1a,	// (0x000462ae) main_mobtv_programe_curr_pane

0x8d27,	// (0x000462bb) main_mobtv_programe_next_pane_ParamLimits

0x8d27,	// (0x000462bb) main_mobtv_programe_next_pane

0xe1a1,	// (0x0004b735) popup_mobtv_noti_window

0xcbab,	// (0x0004a13f) main_tv_pg_hdr_pane_g1

0xe1a9,	// (0x0004b73d) main_tv_pg_hdr_pane_g2

0xe1b1,	// (0x0004b745) main_tv_pg_hdr_pane_g3

0xe1b9,	// (0x0004b74d) main_tv_pg_hdr_pane_g4

0xe1c1,	// (0x0004b755) main_tv_pg_hdr_pane_g5

0xe1cb,	// (0x0004b75f) main_tv_pg_hdr_pane_g6

0xe1d5,	// (0x0004b769) main_tv_pg_hdr_pane_g7

0xe1df,	// (0x0004b773) main_tv_pg_hdr_pane_g8

0xe1e9,	// (0x0004b77d) main_tv_pg_hdr_pane_g9

0xe1f3,	// (0x0004b787) main_tv_pg_hdr_pane_g10

0xe1fd,	// (0x0004b791) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004d19c) main_tv_pg_hdr_pane_g

0xe207,	// (0x0004b79b) main_tv_pg_hdr_pane_t1

0xe215,	// (0x0004b7a9) main_tv_pg_hdr_pane_t2

0xe223,	// (0x0004b7b7) main_tv_pg_hdr_pane_t3

0xe233,	// (0x0004b7c7) main_tv_pg_hdr_pane_t4

0xe243,	// (0x0004b7d7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004d1b3) main_tv_pg_hdr_pane_t

0xe253,	// (0x0004b7e7) single_mobtv_pg_channel_pane_ParamLimits

0xe253,	// (0x0004b7e7) single_mobtv_pg_channel_pane

0xe265,	// (0x0004b7f9) single_mobtv_pg_channel_table_pane

0xe26e,	// (0x0004b802) single_mobtv_pg_channel_thumb_pane

0xe277,	// (0x0004b80b) single_tv_pg_channel_pane_g1

0xe280,	// (0x0004b814) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004d1be) single_tv_pg_channel_pane_g

0xce0b,	// (0x0004a39f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce0b,	// (0x0004a39f) bg_single_mobtv_pg_channel_thumb_pane

0xe289,	// (0x0004b81d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe289,	// (0x0004b81d) single_mobtv_pg_channel_thumb_pane_g1

0xe297,	// (0x0004b82b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe297,	// (0x0004b82b) single_mobtv_pg_channel_thumb_pane_g2

0xe2a3,	// (0x0004b837) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a3,	// (0x0004b837) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004d1c3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004d1c3) single_mobtv_pg_channel_thumb_pane_g

0xe2af,	// (0x0004b843) single_mobtv_pg_channel_thumb_pane_t1

0xe2bd,	// (0x0004b851) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004d1ca) single_mobtv_pg_channel_thumb_pane_t

0xcbab,	// (0x0004a13f) bg_single_mobtv_pg_channel_table_pane_g1

0xcbab,	// (0x0004a13f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004cc70) bg_single_mobtv_pg_channel_table_pane_g

0xe2cb,	// (0x0004b85f) single_mobtv_pg_channel_table_pane_t1

0xe2d9,	// (0x0004b86d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004d1cf) single_mobtv_pg_channel_table_pane_t

0x8d3c,	// (0x000462d0) main_mobtv_info_pane_g1_ParamLimits

0x8d3c,	// (0x000462d0) main_mobtv_info_pane_g1

0x8d58,	// (0x000462ec) main_mobtv_info_pane_t1_ParamLimits

0x8d58,	// (0x000462ec) main_mobtv_info_pane_t1

0x8dd0,	// (0x00046364) main_mobtv_info_pane_t2_ParamLimits

0x8dd0,	// (0x00046364) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004d1d9) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004d1d9) main_mobtv_info_pane_t

0x8e5f,	// (0x000463f3) wait_bar_pane_cp05

0x8e71,	// (0x00046405) main_mobtv_loading_pane_g1_ParamLimits

0x8e71,	// (0x00046405) main_mobtv_loading_pane_g1

0x8e7f,	// (0x00046413) main_mobtv_loading_pane_g2_ParamLimits

0x8e7f,	// (0x00046413) main_mobtv_loading_pane_g2

0x8e8b,	// (0x0004641f) main_mobtv_loading_pane_g3_ParamLimits

0x8e8b,	// (0x0004641f) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004d1e0) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004d1e0) main_mobtv_loading_pane_g

0xe2e7,	// (0x0004b87b) main_mobtv_loading_pane_t1_ParamLimits

0xe2e7,	// (0x0004b87b) main_mobtv_loading_pane_t1

0xe2ff,	// (0x0004b893) main_mobtv_loading_pane_t2_ParamLimits

0xe2ff,	// (0x0004b893) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004d1e7) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004d1e7) main_mobtv_loading_pane_t

0x8e99,	// (0x0004642d) wait_bar_pane_cp06_ParamLimits

0x8e99,	// (0x0004642d) wait_bar_pane_cp06

0xe323,	// (0x0004b8b7) main_mobtv_programe_curr_pane_t1

0xe331,	// (0x0004b8c5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004d1ec) main_mobtv_programe_curr_pane_t

0xe33f,	// (0x0004b8d3) main_mobtv_programe_next_pane_t1

0xe34d,	// (0x0004b8e1) main_mobtv_programe_next_pane_t2

0xe35b,	// (0x0004b8ef) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004d1f1) main_mobtv_programe_next_pane_t

0x9fb0,	// (0x00047544) bg_popup_mobtv_noti_window_pane

0xe369,	// (0x0004b8fd) popup_mobtv_noti_window_g1

0xe371,	// (0x0004b905) popup_mobtv_noti_window_t1

0xe37f,	// (0x0004b913) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004d1f8) popup_mobtv_noti_window_t

0xcbab,	// (0x0004a13f) bg_popup_mobtv_noti_window_pane_g1

0x9fb0,	// (0x00047544) sc_clock_pane

0x9fb0,	// (0x00047544) main_fs_bigclock_pane

0x856c,	// (0x00045b00) blid2_tripm_pane_t4_ParamLimits

0x856c,	// (0x00045b00) blid2_tripm_pane_t4

0x8ea5,	// (0x00046439) sc_clock_pane_g1_ParamLimits

0x8ea5,	// (0x00046439) sc_clock_pane_g1

0x8eb3,	// (0x00046447) sc_clock_pane_t1_ParamLimits

0x8eb3,	// (0x00046447) sc_clock_pane_t1

0x8ec6,	// (0x0004645a) sc_clock_pane_t2_ParamLimits

0x8ec6,	// (0x0004645a) sc_clock_pane_t2

0x8ed8,	// (0x0004646c) sc_clock_pane_t3_ParamLimits

0x8ed8,	// (0x0004646c) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004d1fd) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004d1fd) sc_clock_pane_t

0x96cc,	// (0x00046c60) main_fs_bigclock_indicator_pane_ParamLimits

0x96cc,	// (0x00046c60) main_fs_bigclock_indicator_pane

0x8f61,	// (0x000464f5) main_fs_bigclock_pane_g1_ParamLimits

0x8f61,	// (0x000464f5) main_fs_bigclock_pane_g1

0x96d8,	// (0x00046c6c) main_fs_bigclock_pane_t1_ParamLimits

0x96d8,	// (0x00046c6c) main_fs_bigclock_pane_t1

0x96ea,	// (0x00046c7e) main_fs_bigclock_pane_t2_ParamLimits

0x96ea,	// (0x00046c7e) main_fs_bigclock_pane_t2

0x96fc,	// (0x00046c90) main_fs_bigclock_pane_t3_ParamLimits

0x96fc,	// (0x00046c90) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004d407) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004d407) main_fs_bigclock_pane_t

0xec8f,	// (0x0004c223) main_fs_bigclock_indicator_pane_g1

0xe053,	// (0x0004b5e7) ncim_query_content_pane_g2_ParamLimits

0xe053,	// (0x0004b5e7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004d18a) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004d18a) ncim_query_content_pane_g

0x8eec,	// (0x00046480) sc_clock_pane_t4_ParamLimits

0x8eec,	// (0x00046480) sc_clock_pane_t4

0xade7,	// (0x0004837b) main_radioblah_pane

0xd561,	// (0x0004aaf5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd561,	// (0x0004aaf5) cell_call4_button_pane_t1_copy1

0x8b73,	// (0x00046107) main_ncimui_pane_t1_ParamLimits

0x8b73,	// (0x00046107) main_ncimui_pane_t1

0x8b8d,	// (0x00046121) main_ncimui_pane_t2_ParamLimits

0x8b8d,	// (0x00046121) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004d183) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004d183) main_ncimui_pane_t

0xe4c4,	// (0x0004ba58) main_radioblah_anim_pane_ParamLimits

0xe4c4,	// (0x0004ba58) main_radioblah_anim_pane

0xe4d5,	// (0x0004ba69) main_radioblah_info_pane_ParamLimits

0xe4d5,	// (0x0004ba69) main_radioblah_info_pane

0xe4e9,	// (0x0004ba7d) main_radioblah_pane_t1_ParamLimits

0xe4e9,	// (0x0004ba7d) main_radioblah_pane_t1

0xe505,	// (0x0004ba99) main_radioblah_pane_t2_ParamLimits

0xe505,	// (0x0004ba99) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004d21e) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004d21e) main_radioblah_pane_t

0x8fb3,	// (0x00046547) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8fb3,	// (0x00046547) main_radioblah_rocker_ctrl_pane

0xe54d,	// (0x0004bae1) main_radioblah_info_pane_t1_ParamLimits

0xe54d,	// (0x0004bae1) main_radioblah_info_pane_t1

0x8ff8,	// (0x0004658c) main_radioblah_info_pane_t2_ParamLimits

0x8ff8,	// (0x0004658c) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004d227) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004d227) main_radioblah_info_pane_t

0xcbab,	// (0x0004a13f) main_radioblah_rocker_ctrl_pane_g1

0x90a8,	// (0x0004663c) main_radioblah_rocker_ctrl_pane_g2

0x90b0,	// (0x00046644) main_radioblah_rocker_ctrl_pane_g3

0x90b8,	// (0x0004664c) main_radioblah_rocker_ctrl_pane_g4

0x90c0,	// (0x00046654) main_radioblah_rocker_ctrl_pane_g5

0x90c8,	// (0x0004665c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004d230) main_radioblah_rocker_ctrl_pane_g

0x8b13,	// (0x000460a7) main_cset_text2_pane_t1_copy1_ParamLimits

0x733d,	// (0x000448d1) cam4_image_uncrop_qvga_pane

0x7484,	// (0x00044a18) vid4_image_uncrop_qcif_pane

0x86fa,	// (0x00045c8e) cam6_image_uncrop_qvga_pane_ParamLimits

0x86fa,	// (0x00045c8e) cam6_image_uncrop_qvga_pane

0xdd5a,	// (0x0004b2ee) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd5a,	// (0x0004b2ee) vid6_image_uncrop_qcif_pane

0x9fb0,	// (0x00047544) bg_popup_preview_window_pane_cp03

0xe005,	// (0x0004b599) list_cset_text2_pane

0xe00d,	// (0x0004b5a1) main_cset6_text2_pane_g1

0xe015,	// (0x0004b5a9) main_cset6_text2_pane_t1

0x90d0,	// (0x00046664) list_cset_text2_pane_t1_ParamLimits

0x90d0,	// (0x00046664) list_cset_text2_pane_t1

0xade7,	// (0x0004837b) main_radioblah_pane_ParamLimits

0x8e4b,	// (0x000463df) main_mobtv_info_pane_t3_ParamLimits

0x8e4b,	// (0x000463df) main_mobtv_info_pane_t3

0x8fa1,	// (0x00046535) main_radioblah_pane_g1

0x8fcc,	// (0x00046560) main_radioblah_info_pane_g1

0x904d,	// (0x000465e1) main_radioblah_info_pane_t3_ParamLimits

0x904d,	// (0x000465e1) main_radioblah_info_pane_t3

0x4305,	// (0x00041899) highlight_cell_cale_month_pane_ParamLimits

0x4305,	// (0x00041899) highlight_cell_cale_month_pane

0x9fb0,	// (0x00047544) main_phob_fisheye_pane

0xcee7,	// (0x0004a47b) scroll_pane_cp0031_ParamLimits

0xcee7,	// (0x0004a47b) scroll_pane_cp0031

0xde68,	// (0x0004b3fc) wait_bar_pane_cp08_ParamLimits

0x88d4,	// (0x00045e68) cset_list_set_pane_copy1_ParamLimits

0xe587,	// (0x0004bb1b) highlight_cell_cale_month_pane_g1

0x90f7,	// (0x0004668b) highlight_cell_cale_month_pane_t1

0xdabf,	// (0x0004b053) list_gen_pane_cp01

0xd746,	// (0x0004acda) scroll_pane_01

0xa6b1,	// (0x00047c45) list_single_double_fisheye_pane

0x1515,	// (0x0003eaa9) list_double_fisheye_pane_g1_ParamLimits

0x1515,	// (0x0003eaa9) list_double_fisheye_pane_g1

0x1521,	// (0x0003eab5) list_double_fisheye_pane_g2_ParamLimits

0x1521,	// (0x0003eab5) list_double_fisheye_pane_g2

0xa6ba,	// (0x00047c4e) list_double_fisheye_pane_g3_ParamLimits

0xa6ba,	// (0x00047c4e) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004d23d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004d23d) list_double_fisheye_pane_g

0x1552,	// (0x0003eae6) list_double_fisheye_pane_t1_ParamLimits

0x1552,	// (0x0003eae6) list_double_fisheye_pane_t1

0x156d,	// (0x0003eb01) list_double_fisheye_pane_t2_ParamLimits

0x156d,	// (0x0003eb01) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004d248) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004d248) list_double_fisheye_pane_t

0x9fb0,	// (0x00047544) main_call5_pane

0x8f12,	// (0x000464a6) sc_swipe_pane_ParamLimits

0x8f12,	// (0x000464a6) sc_swipe_pane

0x9111,	// (0x000466a5) call5_image_pane_ParamLimits

0x9111,	// (0x000466a5) call5_image_pane

0x9121,	// (0x000466b5) call5_swipe_1_pane_ParamLimits

0x9121,	// (0x000466b5) call5_swipe_1_pane

0x912d,	// (0x000466c1) call5_swipe_2_pane_ParamLimits

0x912d,	// (0x000466c1) call5_swipe_2_pane

0x9147,	// (0x000466db) popup_call5_audio_first_window_ParamLimits

0x9147,	// (0x000466db) popup_call5_audio_first_window

0xce0b,	// (0x0004a39f) call5_swipe_1_pane_g1_ParamLimits

0xce0b,	// (0x0004a39f) call5_swipe_1_pane_g1

0xe58f,	// (0x0004bb23) call5_swipe_1_pane_g2_ParamLimits

0xe58f,	// (0x0004bb23) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004d24d) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004d24d) call5_swipe_1_pane_g

0xe59b,	// (0x0004bb2f) call5_swipe_1_pane_t1_ParamLimits

0xe59b,	// (0x0004bb2f) call5_swipe_1_pane_t1

0xce0b,	// (0x0004a39f) call5_swipe_2_pane_g1_ParamLimits

0xce0b,	// (0x0004a39f) call5_swipe_2_pane_g1

0xe5b0,	// (0x0004bb44) call5_swipe_2_pane_g2_ParamLimits

0xe5b0,	// (0x0004bb44) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004d252) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004d252) call5_swipe_2_pane_g

0xe5bc,	// (0x0004bb50) call5_swipe_2_pane_t1_ParamLimits

0xe5bc,	// (0x0004bb50) call5_swipe_2_pane_t1

0xe5d1,	// (0x0004bb65) sc_swipe_pane_g1_ParamLimits

0xe5d1,	// (0x0004bb65) sc_swipe_pane_g1

0xe5de,	// (0x0004bb72) sc_swipe_pane_g2_ParamLimits

0xe5de,	// (0x0004bb72) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004d257) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004d257) sc_swipe_pane_g

0xe5ea,	// (0x0004bb7e) sc_swipe_pane_t1_ParamLimits

0xe5ea,	// (0x0004bb7e) sc_swipe_pane_t1

0x9fb0,	// (0x00047544) main_cmail_launcher_pane

0x9155,	// (0x000466e9) aid_size_cell_cmail_l_ParamLimits

0x9155,	// (0x000466e9) aid_size_cell_cmail_l

0x9165,	// (0x000466f9) grid_cmail_l_pane_ParamLimits

0x9165,	// (0x000466f9) grid_cmail_l_pane

0x9175,	// (0x00046709) cell_cmail_l_pane_ParamLimits

0x9175,	// (0x00046709) cell_cmail_l_pane

0x9189,	// (0x0004671d) cell_cmail_l_pane_g1_ParamLimits

0x9189,	// (0x0004671d) cell_cmail_l_pane_g1

0x919a,	// (0x0004672e) cell_cmail_l_pane_t1_ParamLimits

0x919a,	// (0x0004672e) cell_cmail_l_pane_t1

0xe5ff,	// (0x0004bb93) cell_cmail_l_pane_t2_ParamLimits

0xe5ff,	// (0x0004bb93) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004d25c) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004d25c) cell_cmail_l_pane_t

0xade7,	// (0x0004837b) grid_highlight_pane_cp018_ParamLimits

0xade7,	// (0x0004837b) grid_highlight_pane_cp018

0x21fc,	// (0x0003f790) main2_pane_ParamLimits

0x21fc,	// (0x0003f790) main2_pane

0xa7e2,	// (0x00047d76) popup_sp_fs_action_menu_bg_pane_g1

0xa7ea,	// (0x00047d7e) popup_sp_fs_action_menu_bg_pane_g2

0xa7f2,	// (0x00047d86) popup_sp_fs_action_menu_bg_pane_g3

0xa7fa,	// (0x00047d8e) popup_sp_fs_action_menu_bg_pane_g4

0xa802,	// (0x00047d96) popup_sp_fs_action_menu_bg_pane_g5

0xa80a,	// (0x00047d9e) popup_sp_fs_action_menu_bg_pane_g6

0xa812,	// (0x00047da6) popup_sp_fs_action_menu_bg_pane_g7

0xa81a,	// (0x00047dae) popup_sp_fs_action_menu_bg_pane_g8

0xa822,	// (0x00047db6) popup_sp_fs_action_menu_bg_pane_g9

0xa82a,	// (0x00047dbe) popup_sp_fs_action_menu_bg_pane_g10

0xa82a,	// (0x00047dbe) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004c71a) popup_sp_fs_action_menu_bg_pane_g

0x0ccd,	// (0x0003e261) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t3_g3_g1

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t3_g3_g2

0x0ce5,	// (0x0003e279) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004c7cc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004c7cc) list_medium_line_x2_t3_g3_g

0x0cf1,	// (0x0003e285) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0cf1,	// (0x0003e285) list_medium_line_x2_t3_g3_t1

0x0d06,	// (0x0003e29a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d06,	// (0x0003e29a) list_medium_line_x2_t3_g3_t2

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004c7d3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004c7d3) list_medium_line_x2_t3_g3_t

0x0ccd,	// (0x0003e261) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t3_g2_g1

0x0ce5,	// (0x0003e279) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004c7da) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004c7da) list_medium_line_x2_t3_g2_g

0x0d2f,	// (0x0003e2c3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d2f,	// (0x0003e2c3) list_medium_line_x2_t3_g2_t1

0x0d45,	// (0x0003e2d9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d45,	// (0x0003e2d9) list_medium_line_x2_t3_g2_t2

0x0d57,	// (0x0003e2eb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d57,	// (0x0003e2eb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004c7df) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004c7df) list_medium_line_x2_t3_g2_t

0x0ccd,	// (0x0003e261) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t4_g4_g1

0x0d75,	// (0x0003e309) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d75,	// (0x0003e309) list_medium_line_x2_t4_g4_g2

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t4_g4_g3

0x0d81,	// (0x0003e315) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d81,	// (0x0003e315) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004c7e6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004c7e6) list_medium_line_x2_t4_g4_g

0x0d8d,	// (0x0003e321) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d8d,	// (0x0003e321) list_medium_line_x2_t4_g4_t1

0x0da4,	// (0x0003e338) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0da4,	// (0x0003e338) list_medium_line_x2_t4_g4_t2

0x0db9,	// (0x0003e34d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0db9,	// (0x0003e34d) list_medium_line_x2_t4_g4_t3

0x0dcb,	// (0x0003e35f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0dcb,	// (0x0003e35f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004c7ef) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004c7ef) list_medium_line_x2_t4_g4_t

0x0ccd,	// (0x0003e261) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t2_g4_g1

0x0d75,	// (0x0003e309) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d75,	// (0x0003e309) list_medium_line_x2_t2_g4_g2

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t2_g4_g3

0x0ce5,	// (0x0003e279) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004c856) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004c856) list_medium_line_x2_t2_g4_g

0x0ddd,	// (0x0003e371) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0ddd,	// (0x0003e371) list_medium_line_x2_t2_g4_t1

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004c85f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004c85f) list_medium_line_x2_t2_g4_t

0x0ccd,	// (0x0003e261) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t2_g3_g1

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t2_g3_g2

0x0ce5,	// (0x0003e279) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004c7cc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004c7cc) list_medium_line_x2_t2_g3_g

0x0df2,	// (0x0003e386) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0df2,	// (0x0003e386) list_medium_line_x2_t2_g3_t1

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004c864) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004c864) list_medium_line_x2_t2_g3_t

0x44dd,	// (0x00041a71) main_sp_fs_list_pane_ParamLimits

0x44dd,	// (0x00041a71) main_sp_fs_list_pane

0x44e9,	// (0x00041a7d) sp_fs_scroll_pane_ParamLimits

0x44e9,	// (0x00041a7d) sp_fs_scroll_pane

0x0e20,	// (0x0003e3b4) list_medium_line_x2_t3_t1

0x0e30,	// (0x0003e3c4) list_medium_line_x2_t3_t2

0x0e3e,	// (0x0003e3d2) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004c8af) list_medium_line_x2_t3_t

0x0e4c,	// (0x0003e3e0) list_medium_line_x3_t4_t1

0x0e5c,	// (0x0003e3f0) list_medium_line_x3_t4_t2

0x0e6a,	// (0x0003e3fe) list_medium_line_x3_t4_t3

0x0e3e,	// (0x0003e3d2) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004c8b6) list_medium_line_x3_t4_t

0x0e78,	// (0x0003e40c) list_medium_line_x4_t5_t1

0x0e88,	// (0x0003e41c) list_medium_line_x4_t5_t2

0x0e6a,	// (0x0003e3fe) list_medium_line_x4_t5_t3

0x0e96,	// (0x0003e42a) list_medium_line_x4_t5_t4

0x0e3e,	// (0x0003e3d2) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004c8bf) list_medium_line_x4_t5_t

0x0ccd,	// (0x0003e261) list_medium_line_t4_g4_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_t4_g4_g1

0x0d81,	// (0x0003e315) list_medium_line_t4_g4_g2_ParamLimits

0x0d81,	// (0x0003e315) list_medium_line_t4_g4_g2

0x0ea4,	// (0x0003e438) list_medium_line_t4_g4_g3_ParamLimits

0x0ea4,	// (0x0003e438) list_medium_line_t4_g4_g3

0x0ce5,	// (0x0003e279) list_medium_line_t4_g4_g4_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004c8ca) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004c8ca) list_medium_line_t4_g4_g

0x0eb0,	// (0x0003e444) list_medium_line_t4_g4_t1_ParamLimits

0x0eb0,	// (0x0003e444) list_medium_line_t4_g4_t1

0x0ec5,	// (0x0003e459) list_medium_line_t4_g4_t2_ParamLimits

0x0ec5,	// (0x0003e459) list_medium_line_t4_g4_t2

0x0edb,	// (0x0003e46f) list_medium_line_t4_g4_t3_ParamLimits

0x0edb,	// (0x0003e46f) list_medium_line_t4_g4_t3

0x0d1a,	// (0x0003e2ae) list_medium_line_t4_g4_t4_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004c8d3) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004c8d3) list_medium_line_t4_g4_t

0x45e0,	// (0x00041b74) chi_dic_find_pane_g1

0x5455,	// (0x000429e9) main_tport_pane

0x118e,	// (0x0003e722) list_medium_line_plain_t1

0x119c,	// (0x0003e730) list_medium_line_t2_g2_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_t2_g2_g1

0x11a8,	// (0x0003e73c) list_medium_line_t2_g2_g2_ParamLimits

0x11a8,	// (0x0003e73c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004cf94) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004cf94) list_medium_line_t2_g2_g

0x11b4,	// (0x0003e748) list_medium_line_t2_g2_t1_ParamLimits

0x11b4,	// (0x0003e748) list_medium_line_t2_g2_t1

0x11ce,	// (0x0003e762) list_medium_line_t2_g2_t2_ParamLimits

0x11ce,	// (0x0003e762) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004cf99) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004cf99) list_medium_line_t2_g2_t

0x13ed,	// (0x0003e981) aid_sp_fs_list_icon_a_sm

0x13f5,	// (0x0003e989) aid_sp_fs_list_icon_d

0x13fd,	// (0x0003e991) aid_sp_fs_text_primary

0x1406,	// (0x0003e99a) aid_sp_fs_text_secondary

0xebb2,	// (0x0004c146) list_medium_line

0xebb2,	// (0x0004c146) list_medium_line_g2

0xebb2,	// (0x0004c146) list_medium_line_g3

0xebb2,	// (0x0004c146) list_medium_line_plain

0xebb2,	// (0x0004c146) list_medium_line_plain_t2

0xebb2,	// (0x0004c146) list_medium_line_plain_t3

0xebb2,	// (0x0004c146) list_medium_line_right_icon

0xebb2,	// (0x0004c146) list_medium_line_right_iconx2

0xebb2,	// (0x0004c146) list_medium_line_t2

0xebb2,	// (0x0004c146) list_medium_line_t2_g2

0xebb2,	// (0x0004c146) list_medium_line_t2_g3

0xebb2,	// (0x0004c146) list_medium_line_t2_right_icon

0xebb2,	// (0x0004c146) list_medium_line_t2_right_iconx2

0xebb2,	// (0x0004c146) list_medium_line_t3

0xebb2,	// (0x0004c146) list_medium_line_t3_g2

0xebb2,	// (0x0004c146) list_medium_line_t3_g3

0xebb2,	// (0x0004c146) list_medium_line_t3_right_iconx2

0x140f,	// (0x0003e9a3) list_medium_line_t4_g4

0x1418,	// (0x0003e9ac) list_medium_line_x2

0x1418,	// (0x0003e9ac) list_medium_line_x2_t2_g2

0x1418,	// (0x0003e9ac) list_medium_line_x2_t2_g3

0x1418,	// (0x0003e9ac) list_medium_line_x2_t2_g4

0x1418,	// (0x0003e9ac) list_medium_line_x2_t3

0x1418,	// (0x0003e9ac) list_medium_line_x2_t3_g2

0x1418,	// (0x0003e9ac) list_medium_line_x2_t3_g3

0x1418,	// (0x0003e9ac) list_medium_line_x2_t3_g4

0x1418,	// (0x0003e9ac) list_medium_line_x2_t4_g2

0x1418,	// (0x0003e9ac) list_medium_line_x2_t4_g4

0x1421,	// (0x0003e9b5) list_medium_line_x3

0x1421,	// (0x0003e9b5) list_medium_line_x3_t4

0x1421,	// (0x0003e9b5) list_medium_line_x3_t4_g4

0x140f,	// (0x0003e9a3) list_medium_line_x4_t4

0x140f,	// (0x0003e9a3) list_medium_line_x4_t4_g7

0x140f,	// (0x0003e9a3) list_medium_line_x4_t5

0x142a,	// (0x0003e9be) list_single_fs_dyc_pane_ParamLimits

0x142a,	// (0x0003e9be) list_single_fs_dyc_pane

0x0ccd,	// (0x0003e261) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x4_t4_g7_g1

0x1446,	// (0x0003e9da) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1446,	// (0x0003e9da) list_medium_line_x4_t4_g7_g2

0x1452,	// (0x0003e9e6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1452,	// (0x0003e9e6) list_medium_line_x4_t4_g7_g3

0x1461,	// (0x0003e9f5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1461,	// (0x0003e9f5) list_medium_line_x4_t4_g7_g4

0x146d,	// (0x0003ea01) list_medium_line_x4_t4_g7_g5_ParamLimits

0x146d,	// (0x0003ea01) list_medium_line_x4_t4_g7_g5

0x147c,	// (0x0003ea10) list_medium_line_x4_t4_g7_g6_ParamLimits

0x147c,	// (0x0003ea10) list_medium_line_x4_t4_g7_g6

0x148b,	// (0x0003ea1f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x148b,	// (0x0003ea1f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004d164) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004d164) list_medium_line_x4_t4_g7_g

0x1497,	// (0x0003ea2b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1497,	// (0x0003ea2b) list_medium_line_x4_t4_g7_t1

0x14ac,	// (0x0003ea40) list_medium_line_x4_t4_g7_t2_ParamLimits

0x14ac,	// (0x0003ea40) list_medium_line_x4_t4_g7_t2

0x14c1,	// (0x0003ea55) list_medium_line_x4_t4_g7_t3_ParamLimits

0x14c1,	// (0x0003ea55) list_medium_line_x4_t4_g7_t3

0x14d6,	// (0x0003ea6a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x14d6,	// (0x0003ea6a) list_medium_line_x4_t4_g7_t4

0x14e8,	// (0x0003ea7c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x14e8,	// (0x0003ea7c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004d173) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004d173) list_medium_line_x4_t4_g7_t

0x14fa,	// (0x0003ea8e) list_single_dyc_row_pane_ParamLimits

0x14fa,	// (0x0003ea8e) list_single_dyc_row_pane

0x9105,	// (0x00046699) call5_gesture_pane_ParamLimits

0x9105,	// (0x00046699) call5_gesture_pane

0x9139,	// (0x000466cd) call5_windows_pane_ParamLimits

0x9139,	// (0x000466cd) call5_windows_pane

0x91b0,	// (0x00046744) call5_swipe_1_pane_cp_ParamLimits

0x91b0,	// (0x00046744) call5_swipe_1_pane_cp

0x91bc,	// (0x00046750) call5_swipe_2_pane_cp_ParamLimits

0x91bc,	// (0x00046750) call5_swipe_2_pane_cp

0xb38a,	// (0x0004891e) call5_image_pane_cp

0x91c8,	// (0x0004675c) popup_call5_audio_first_window_cp_ParamLimits

0x91c8,	// (0x0004675c) popup_call5_audio_first_window_cp

0xe5d1,	// (0x0004bb65) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5d1,	// (0x0004bb65) call5_swipe_1_pane_g1_cp

0xe611,	// (0x0004bba5) call5_swipe_1_pane_g2_cp

0xe5ea,	// (0x0004bb7e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5ea,	// (0x0004bb7e) call5_swipe_1_pane_t1_cp

0xe5d1,	// (0x0004bb65) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5d1,	// (0x0004bb65) call5_swipe_2_pane_g1_cp

0xe619,	// (0x0004bbad) call5_swipe_2_pane_g2_cp

0xe621,	// (0x0004bbb5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe621,	// (0x0004bbb5) call5_swipe_2_pane_t1_cp

0xade7,	// (0x0004837b) main_sp_fs_email_pane

0xe636,	// (0x0004bbca) main_sp_fs_listscroll_pane_te

0x158f,	// (0x0003eb23) popup_sp_fs_action_menu_pane_ParamLimits

0x158f,	// (0x0003eb23) popup_sp_fs_action_menu_pane

0xcbab,	// (0x0004a13f) bg_sp_fs_ctrlbar_pane_g1

0xe63f,	// (0x0004bbd3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe648,	// (0x0004bbdc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe651,	// (0x0004bbe5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbab,	// (0x0004a13f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004d261) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc98e,	// (0x00049f22) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc98e,	// (0x00049f22) bg_sp_fs_ctrlbar_ddmenu_pane

0xe65a,	// (0x0004bbee) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe65a,	// (0x0004bbee) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe666,	// (0x0004bbfa) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe666,	// (0x0004bbfa) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004d26a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004d26a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe672,	// (0x0004bc06) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe672,	// (0x0004bc06) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x15d1,	// (0x0003eb65) list_medium_line_t2_right_icon_g1

0x15d9,	// (0x0003eb6d) list_medium_line_t2_right_icon_t1

0x15e9,	// (0x0003eb7d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004d26f) list_medium_line_t2_right_icon_t

0xc7a1,	// (0x00049d35) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a1,	// (0x00049d35) bg_sp_fs_ctrlbar_pane

0x922d,	// (0x000467c1) main_sp_fs_ctrlbar_button_pane_cp01

0x9235,	// (0x000467c9) main_sp_fs_ctrlbar_ddmenu_pane

0xe6c4,	// (0x0004bc58) main_sp_fs_ctrlbar_pane_g1

0xe6d0,	// (0x0004bc64) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004d274) main_sp_fs_ctrlbar_pane_g

0xe6dc,	// (0x0004bc70) main_sp_fs_ctrlbar_pane_t1

0x923f,	// (0x000467d3) main_sp_fs_ctrlbar_pane

0x9255,	// (0x000467e9) main_sp_fs_listscroll_pane_te_cp01

0x15f7,	// (0x0003eb8b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x15f7,	// (0x0003eb8b) popup_sp_fs_action_menu_pane_cp01

0xade7,	// (0x0004837b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xade7,	// (0x0004837b) bg_sp_fs_highlight_list_pane_cp01

0x1621,	// (0x0003ebb5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1621,	// (0x0003ebb5) sp_fs_action_menu_list_gene_pane_g1

0xe70c,	// (0x0004bca0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe70c,	// (0x0004bca0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004d27e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004d27e) sp_fs_action_menu_list_gene_pane_g

0x1630,	// (0x0003ebc4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1630,	// (0x0003ebc4) sp_fs_action_menu_list_gene_pane_t1

0x1648,	// (0x0003ebdc) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1648,	// (0x0003ebdc) sp_fs_action_menu_list_gene_pane

0xe719,	// (0x0004bcad) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe719,	// (0x0004bcad) popup_sp_fs_action_menu_bg_pane

0x1665,	// (0x0003ebf9) sp_fs_action_menu_list_pane_ParamLimits

0x1665,	// (0x0003ebf9) sp_fs_action_menu_list_pane

0x1683,	// (0x0003ec17) sp_fs_scroll_pane_cp01_ParamLimits

0x1683,	// (0x0003ec17) sp_fs_scroll_pane_cp01

0x16a9,	// (0x0003ec3d) list_medium_line_plain_t2_t1

0x16b9,	// (0x0003ec4d) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004d283) list_medium_line_plain_t2_t

0x16c7,	// (0x0003ec5b) list_medium_line_plain_t3_t1

0x16d7,	// (0x0003ec6b) list_medium_line_plain_t3_t2

0x16e5,	// (0x0003ec79) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004d288) list_medium_line_plain_t3_t

0x0ccd,	// (0x0003e261) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t2_g2_g1

0x0ce5,	// (0x0003e279) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004c7da) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004c7da) list_medium_line_x2_t2_g2_g

0x0eb0,	// (0x0003e444) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0eb0,	// (0x0003e444) list_medium_line_x2_t2_g2_t1

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004d28f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004d28f) list_medium_line_x2_t2_g2_t

0x0ccd,	// (0x0003e261) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t4_g2_g1

0x16f3,	// (0x0003ec87) list_medium_line_x2_t4_g2_g2_ParamLimits

0x16f3,	// (0x0003ec87) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004d294) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004d294) list_medium_line_x2_t4_g2_g

0x1705,	// (0x0003ec99) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1705,	// (0x0003ec99) list_medium_line_x2_t4_g2_t1

0x171f,	// (0x0003ecb3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x171f,	// (0x0003ecb3) list_medium_line_x2_t4_g2_t2

0x1734,	// (0x0003ecc8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1734,	// (0x0003ecc8) list_medium_line_x2_t4_g2_t3

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004d299) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004d299) list_medium_line_x2_t4_g2_t

0x1749,	// (0x0003ecdd) list_medium_line_t3_right_iconx2_g1

0x15d1,	// (0x0003eb65) list_medium_line_t3_right_iconx2_g2

0x1751,	// (0x0003ece5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004d2a2) list_medium_line_t3_right_iconx2_g

0x1759,	// (0x0003eced) list_medium_line_t3_right_iconx2_t1

0x1769,	// (0x0003ecfd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004d2a9) list_medium_line_t3_right_iconx2_t

0x0ccd,	// (0x0003e261) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x3_t4_g4_g1

0x0cd9,	// (0x0003e26d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x3_t4_g4_g2

0x0d81,	// (0x0003e315) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d81,	// (0x0003e315) list_medium_line_x3_t4_g4_g3

0x1777,	// (0x0003ed0b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1777,	// (0x0003ed0b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004d2ae) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004d2ae) list_medium_line_x3_t4_g4_g

0x1783,	// (0x0003ed17) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1783,	// (0x0003ed17) list_medium_line_x3_t4_g4_t1

0x179a,	// (0x0003ed2e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x179a,	// (0x0003ed2e) list_medium_line_x3_t4_g4_t2

0x17af,	// (0x0003ed43) list_medium_line_x3_t4_g4_t3_ParamLimits

0x17af,	// (0x0003ed43) list_medium_line_x3_t4_g4_t3

0x17c4,	// (0x0003ed58) list_medium_line_x3_t4_g4_t4_ParamLimits

0x17c4,	// (0x0003ed58) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004d2b7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004d2b7) list_medium_line_x3_t4_g4_t

0x17e1,	// (0x0003ed75) list_single_dyc_row_text_pane_t1_ParamLimits

0x17e1,	// (0x0003ed75) list_single_dyc_row_text_pane_t1

0x1818,	// (0x0003edac) list_single_dyc_row_text_pane_t2_ParamLimits

0x1818,	// (0x0003edac) list_single_dyc_row_text_pane_t2

0x188e,	// (0x0003ee22) list_single_dyc_row_text_pane_t3_ParamLimits

0x188e,	// (0x0003ee22) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004d2c0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004d2c0) list_single_dyc_row_text_pane_t

0x195f,	// (0x0003eef3) list_single_dyc_row_pane_g1_ParamLimits

0x195f,	// (0x0003eef3) list_single_dyc_row_pane_g1

0x196b,	// (0x0003eeff) list_single_dyc_row_pane_g2_ParamLimits

0x196b,	// (0x0003eeff) list_single_dyc_row_pane_g2

0x1977,	// (0x0003ef0b) list_single_dyc_row_pane_g3_ParamLimits

0x1977,	// (0x0003ef0b) list_single_dyc_row_pane_g3

0x1983,	// (0x0003ef17) list_single_dyc_row_pane_g4_ParamLimits

0x1983,	// (0x0003ef17) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004d2cd) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004d2cd) list_single_dyc_row_pane_g

0x198f,	// (0x0003ef23) list_single_dyc_row_text_pane_ParamLimits

0x198f,	// (0x0003ef23) list_single_dyc_row_text_pane

0x9fb0,	// (0x00047544) bg_sp_fs_scroll_pane

0xe727,	// (0x0004bcbb) thumb_sp_fs_scroll_pane

0x119c,	// (0x0003e730) list_medium_line_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_g1

0x19ae,	// (0x0003ef42) list_medium_line_t1_ParamLimits

0x19ae,	// (0x0003ef42) list_medium_line_t1

0x0ccd,	// (0x0003e261) list_medium_line_x2_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_g1

0x0cd9,	// (0x0003e26d) list_medium_line_x2_g2_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004d2d6) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004d2d6) list_medium_line_x2_g

0x19c3,	// (0x0003ef57) list_medium_line_x2_t1_ParamLimits

0x19c3,	// (0x0003ef57) list_medium_line_x2_t1

0x0ccd,	// (0x0003e261) list_medium_line_x3_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x3_g1

0x0cd9,	// (0x0003e26d) list_medium_line_x3_g2_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004d2d6) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004d2d6) list_medium_line_x3_g

0x19c3,	// (0x0003ef57) list_medium_line_x3_t1_ParamLimits

0x19c3,	// (0x0003ef57) list_medium_line_x3_t1

0xe730,	// (0x0004bcc4) thumb_sp_fs_scroll_pane_g1

0xe739,	// (0x0004bccd) thumb_sp_fs_scroll_pane_g2

0xe742,	// (0x0004bcd6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d2db) thumb_sp_fs_scroll_pane_g

0xe730,	// (0x0004bcc4) bg_sp_fs_scroll_pane_g1

0xe739,	// (0x0004bccd) bg_sp_fs_scroll_pane_g2

0xe742,	// (0x0004bcd6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d2db) bg_sp_fs_scroll_pane_g

0x0ccd,	// (0x0003e261) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ccd,	// (0x0003e261) list_medium_line_x2_t3_g4_g1

0x0d75,	// (0x0003e309) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d75,	// (0x0003e309) list_medium_line_x2_t3_g4_g2

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0cd9,	// (0x0003e26d) list_medium_line_x2_t3_g4_g3

0x0ce5,	// (0x0003e279) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ce5,	// (0x0003e279) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004c856) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004c856) list_medium_line_x2_t3_g4_g

0x19d9,	// (0x0003ef6d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x19d9,	// (0x0003ef6d) list_medium_line_x2_t3_g4_t1

0x19ef,	// (0x0003ef83) list_medium_line_x2_t3_g4_t2_ParamLimits

0x19ef,	// (0x0003ef83) list_medium_line_x2_t3_g4_t2

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d1a,	// (0x0003e2ae) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004d2e2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004d2e2) list_medium_line_x2_t3_g4_t

0x119c,	// (0x0003e730) list_medium_line_g2_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_g2_g1

0x11a8,	// (0x0003e73c) list_medium_line_g2_g2_ParamLimits

0x11a8,	// (0x0003e73c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004cf94) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004cf94) list_medium_line_g2_g

0x1a08,	// (0x0003ef9c) list_medium_line_g2_t1_ParamLimits

0x1a08,	// (0x0003ef9c) list_medium_line_g2_t1

0x119c,	// (0x0003e730) list_medium_line_t3_g2_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_t3_g2_g1

0x11a8,	// (0x0003e73c) list_medium_line_t3_g2_g2_ParamLimits

0x11a8,	// (0x0003e73c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004cf94) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004cf94) list_medium_line_t3_g2_g

0x1a1d,	// (0x0003efb1) list_medium_line_t3_g2_t1_ParamLimits

0x1a1d,	// (0x0003efb1) list_medium_line_t3_g2_t1

0x1a34,	// (0x0003efc8) list_medium_line_t3_g2_t2_ParamLimits

0x1a34,	// (0x0003efc8) list_medium_line_t3_g2_t2

0x1a49,	// (0x0003efdd) list_medium_line_t3_g2_t3_ParamLimits

0x1a49,	// (0x0003efdd) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004d2e9) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004d2e9) list_medium_line_t3_g2_t

0x15d1,	// (0x0003eb65) list_medium_line_right_icon_g1

0x1a5e,	// (0x0003eff2) list_medium_line_right_icon_t1

0x119c,	// (0x0003e730) list_medium_line_t2_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_t2_g1

0x1a6c,	// (0x0003f000) list_medium_line_t2_t1_ParamLimits

0x1a6c,	// (0x0003f000) list_medium_line_t2_t1

0x1a86,	// (0x0003f01a) list_medium_line_t2_t2_ParamLimits

0x1a86,	// (0x0003f01a) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004d2f0) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004d2f0) list_medium_line_t2_t

0x119c,	// (0x0003e730) list_medium_line_t3_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_t3_g1

0x1a9b,	// (0x0003f02f) list_medium_line_t3_t1_ParamLimits

0x1a9b,	// (0x0003f02f) list_medium_line_t3_t1

0x1ab5,	// (0x0003f049) list_medium_line_t3_t2_ParamLimits

0x1ab5,	// (0x0003f049) list_medium_line_t3_t2

0x1aca,	// (0x0003f05e) list_medium_line_t3_t3_ParamLimits

0x1aca,	// (0x0003f05e) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004d2f5) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004d2f5) list_medium_line_t3_t

0x119c,	// (0x0003e730) list_medium_line_g3_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_g3_g1

0x1adf,	// (0x0003f073) list_medium_line_g3_g2_ParamLimits

0x1adf,	// (0x0003f073) list_medium_line_g3_g2

0x11a8,	// (0x0003e73c) list_medium_line_g3_g3_ParamLimits

0x11a8,	// (0x0003e73c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004d2fc) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004d2fc) list_medium_line_g3_g

0x1aeb,	// (0x0003f07f) list_medium_line_g3_t1_ParamLimits

0x1aeb,	// (0x0003f07f) list_medium_line_g3_t1

0x119c,	// (0x0003e730) list_medium_line_t2_g3_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_t2_g3_g1

0x1adf,	// (0x0003f073) list_medium_line_t2_g3_g2_ParamLimits

0x1adf,	// (0x0003f073) list_medium_line_t2_g3_g2

0x11a8,	// (0x0003e73c) list_medium_line_t2_g3_g3_ParamLimits

0x11a8,	// (0x0003e73c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004d2fc) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004d2fc) list_medium_line_t2_g3_g

0x1b00,	// (0x0003f094) list_medium_line_t2_g3_t1_ParamLimits

0x1b00,	// (0x0003f094) list_medium_line_t2_g3_t1

0x1b1a,	// (0x0003f0ae) list_medium_line_t2_g3_t2_ParamLimits

0x1b1a,	// (0x0003f0ae) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004d303) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004d303) list_medium_line_t2_g3_t

0x119c,	// (0x0003e730) list_medium_line_t3_g3_g1_ParamLimits

0x119c,	// (0x0003e730) list_medium_line_t3_g3_g1

0x1adf,	// (0x0003f073) list_medium_line_t3_g3_g2_ParamLimits

0x1adf,	// (0x0003f073) list_medium_line_t3_g3_g2

0x11a8,	// (0x0003e73c) list_medium_line_t3_g3_g3_ParamLimits

0x11a8,	// (0x0003e73c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004d2fc) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004d2fc) list_medium_line_t3_g3_g

0x1b2f,	// (0x0003f0c3) list_medium_line_t3_g3_t1_ParamLimits

0x1b2f,	// (0x0003f0c3) list_medium_line_t3_g3_t1

0x1b43,	// (0x0003f0d7) list_medium_line_t3_g3_t2_ParamLimits

0x1b43,	// (0x0003f0d7) list_medium_line_t3_g3_t2

0x1b55,	// (0x0003f0e9) list_medium_line_t3_g3_t3_ParamLimits

0x1b55,	// (0x0003f0e9) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004d308) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004d308) list_medium_line_t3_g3_t

0x1749,	// (0x0003ecdd) list_medium_line_right_iconx2_g1

0x15d1,	// (0x0003eb65) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d30f) list_medium_line_right_iconx2_g

0x1b67,	// (0x0003f0fb) list_medium_line_right_iconx2_t1

0x1749,	// (0x0003ecdd) list_medium_line_t2_right_iconx2_g1

0x15d1,	// (0x0003eb65) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d30f) list_medium_line_t2_right_iconx2_g

0x1b75,	// (0x0003f109) list_medium_line_t2_right_iconx2_t1

0x1b85,	// (0x0003f119) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004d314) list_medium_line_t2_right_iconx2_t

0x1b93,	// (0x0003f127) list_medium_line_x4_t4_t1

0x1ba1,	// (0x0003f135) list_medium_line_x4_t4_t2

0x1bb1,	// (0x0003f145) list_medium_line_x4_t4_t3

0x1bc1,	// (0x0003f155) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004d319) list_medium_line_x4_t4_t

0x9290,	// (0x00046824) tport_appsw_pane_ParamLimits

0x9290,	// (0x00046824) tport_appsw_pane

0x929e,	// (0x00046832) tport_contact_pane_ParamLimits

0x929e,	// (0x00046832) tport_contact_pane

0x92ae,	// (0x00046842) tport_listscroll_pane_ParamLimits

0x92ae,	// (0x00046842) tport_listscroll_pane

0x92be,	// (0x00046852) cell_tport_appsw_pane_ParamLimits

0x92be,	// (0x00046852) cell_tport_appsw_pane

0xce70,	// (0x0004a404) tport_appsw_pane_g1_ParamLimits

0xce70,	// (0x0004a404) tport_appsw_pane_g1

0xe74b,	// (0x0004bcdf) tport_contact_pane_g1

0xe0d9,	// (0x0004b66d) tport_contact_pane_t1

0xe754,	// (0x0004bce8) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004d322) tport_contact_pane_t

0xe762,	// (0x0004bcf6) list_tport_pane

0xe76b,	// (0x0004bcff) scroll_pane_cp_030

0x92f1,	// (0x00046885) cell_tport_appsw_pane_g1

0x9301,	// (0x00046895) cell_tport_appsw_pane_t1

0x930f,	// (0x000468a3) grid_highlight_pane_cp019

0x9317,	// (0x000468ab) list_tport_double_graphic_pane_ParamLimits

0x9317,	// (0x000468ab) list_tport_double_graphic_pane

0xade7,	// (0x0004837b) list_highlight_pane_cp023_ParamLimits

0xade7,	// (0x0004837b) list_highlight_pane_cp023

0x9329,	// (0x000468bd) list_tport_double_graphic_pane_g1_ParamLimits

0x9329,	// (0x000468bd) list_tport_double_graphic_pane_g1

0x9336,	// (0x000468ca) list_tport_double_graphic_pane_t1_ParamLimits

0x9336,	// (0x000468ca) list_tport_double_graphic_pane_t1

0x934b,	// (0x000468df) list_tport_double_graphic_pane_t2_ParamLimits

0x934b,	// (0x000468df) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004d32e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004d32e) list_tport_double_graphic_pane_t

0x9fb0,	// (0x00047544) main_cale_note_pane

0x76d7,	// (0x00044c6b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x76d7,	// (0x00044c6b) cell_vitu2_function_top_wide_pane_cp01

0x8e5f,	// (0x000463f3) wait_bar_pane_cp05_ParamLimits

0xade7,	// (0x0004837b) listscroll_cmail_pane

0xe774,	// (0x0004bd08) list_cmail_pane

0x935d,	// (0x000468f1) list_cmail_body_pane

0x9384,	// (0x00046918) list_single_cmail_header_caption_pane

0x93b8,	// (0x0004694c) list_single_cmail_header_detail_pane_ParamLimits

0x93b8,	// (0x0004694c) list_single_cmail_header_detail_pane

0xe784,	// (0x0004bd18) list_single_cmail_header_caption_pane_t1

0x1bd1,	// (0x0003f165) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1bd1,	// (0x0003f165) list_single_cmail_header_detail_pane_g1

0x1be7,	// (0x0003f17b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1be7,	// (0x0003f17b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004d333) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004d333) list_single_cmail_header_detail_pane_g

0x1bf3,	// (0x0003f187) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1bf3,	// (0x0003f187) list_single_cmail_header_detail_pane_t1

0x1c53,	// (0x0003f1e7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1c53,	// (0x0003f1e7) list_single_cmail_header_editor_pane_bg

0xe7a8,	// (0x0004bd3c) list_cmail_body_pane_g1

0xe7b1,	// (0x0004bd45) list_cmail_body_pane_t1

0xd60e,	// (0x0004aba2) list_single_cmail_header_editor_pane_bg_g1

0xab57,	// (0x000480eb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd61e,	// (0x0004abb2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd616,	// (0x0004abaa) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd850,	// (0x0004ade4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd63e,	// (0x0004abd2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd62e,	// (0x0004abc2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd636,	// (0x0004abca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab37,	// (0x000480cb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93f3,	// (0x00046987) calenote_gesture_pane_ParamLimits

0x93f3,	// (0x00046987) calenote_gesture_pane

0x940d,	// (0x000469a1) calenote_window_pane_ParamLimits

0x940d,	// (0x000469a1) calenote_window_pane

0xe7bf,	// (0x0004bd53) popup_note_window_cp01

0x9425,	// (0x000469b9) calenote_swipe_1_pane_ParamLimits

0x9425,	// (0x000469b9) calenote_swipe_1_pane

0x91bc,	// (0x00046750) calenote_swipe_2_pane_ParamLimits

0x91bc,	// (0x00046750) calenote_swipe_2_pane

0xe5d1,	// (0x0004bb65) calenote_swipe_1_pane_g1_ParamLimits

0xe5d1,	// (0x0004bb65) calenote_swipe_1_pane_g1

0xe5de,	// (0x0004bb72) calenote_swipe_1_pane_g2_ParamLimits

0xe5de,	// (0x0004bb72) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004d257) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004d257) calenote_swipe_1_pane_g

0xe7d1,	// (0x0004bd65) calenote_swipe_1_pane_t1_ParamLimits

0xe7d1,	// (0x0004bd65) calenote_swipe_1_pane_t1

0xe5d1,	// (0x0004bb65) calenote_swipe_2_pane_g1_ParamLimits

0xe5d1,	// (0x0004bb65) calenote_swipe_2_pane_g1

0xe7f0,	// (0x0004bd84) calenote_swipe_2_pane_g2_ParamLimits

0xe7f0,	// (0x0004bd84) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004d33f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004d33f) calenote_swipe_2_pane_g

0xe7fc,	// (0x0004bd90) calenote_swipe_2_pane_t1_ParamLimits

0xe7fc,	// (0x0004bd90) calenote_swipe_2_pane_t1

0x9fb0,	// (0x00047544) main_mup_navstr_pane

0x643b,	// (0x000439cf) main_mup3_pane_t7_ParamLimits

0x643b,	// (0x000439cf) main_mup3_pane_t7

0x6e65,	// (0x000443f9) main_mp4_pane_g6_ParamLimits

0x6e65,	// (0x000443f9) main_mp4_pane_g6

0x71d7,	// (0x0004476b) main_image3_pane_t4_ParamLimits

0x71d7,	// (0x0004476b) main_image3_pane_t4

0x9438,	// (0x000469cc) popup_navstr_preview_pane_ParamLimits

0x9438,	// (0x000469cc) popup_navstr_preview_pane

0x9444,	// (0x000469d8) scroll_navstr_pane_ParamLimits

0x9444,	// (0x000469d8) scroll_navstr_pane

0x9fb0,	// (0x00047544) bg_popup_preview_window_pane_cp04

0xe823,	// (0x0004bdb7) popup_navstr_preview_pane_t1

0x9450,	// (0x000469e4) scroll_navstr_pane_g1_ParamLimits

0x9450,	// (0x000469e4) scroll_navstr_pane_g1

0x945d,	// (0x000469f1) scroll_navstr_pane_t1_ParamLimits

0x945d,	// (0x000469f1) scroll_navstr_pane_t1

0xe7c8,	// (0x0004bd5c) bg_button_pane_cp014

0xe7c8,	// (0x0004bd5c) bg_button_pane_cp030

0x1535,	// (0x0003eac9) list_double_fisheye_pane_g4_ParamLimits

0x1535,	// (0x0003eac9) list_double_fisheye_pane_g4

0x1541,	// (0x0003ead5) list_double_fisheye_pane_g5_ParamLimits

0x1541,	// (0x0003ead5) list_double_fisheye_pane_g5

0xd6dd,	// (0x0004ac71) sp_fs_scroll_pane_cp03

0xe6c4,	// (0x0004bc58) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6d0,	// (0x0004bc64) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004d274) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6dc,	// (0x0004bc70) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe77c,	// (0x0004bd10) sp_fs_scroll_pane_cp02

0xa84d,	// (0x00047de1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa84d,	// (0x00047de1) popup_sp_fs_calendar_preview_list_single_pane

0x9fb0,	// (0x00047544) main_cam6_pano_pane

0xade7,	// (0x0004837b) main_mup3_pane_ParamLimits

0x9fb0,	// (0x00047544) main_phacti_pane

0x8d34,	// (0x000462c8) bg_button_pane_cp11

0x8d4c,	// (0x000462e0) main_mobtv_info_pane_g2_ParamLimits

0x8d4c,	// (0x000462e0) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004d1d4) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004d1d4) main_mobtv_info_pane_g

0x8efe,	// (0x00046492) sc_clock_pane_t5_ParamLimits

0x8efe,	// (0x00046492) sc_clock_pane_t5

0x8fa1,	// (0x00046535) main_radioblah_pane_g1_ParamLimits

0xe51d,	// (0x0004bab1) main_radioblah_pane_t3_ParamLimits

0xe51d,	// (0x0004bab1) main_radioblah_pane_t3

0xe535,	// (0x0004bac9) main_radioblah_pane_t4_ParamLimits

0xe535,	// (0x0004bac9) main_radioblah_pane_t4

0x8fbf,	// (0x00046553) main_radioblah_text_pane_ParamLimits

0x8fbf,	// (0x00046553) main_radioblah_text_pane

0x8fcc,	// (0x00046560) main_radioblah_info_pane_g1_ParamLimits

0x9061,	// (0x000465f5) main_radioblah_info_pane_t4_ParamLimits

0x9061,	// (0x000465f5) main_radioblah_info_pane_t4

0xade7,	// (0x0004837b) main_sp_fs_calendar_pane

0x946f,	// (0x00046a03) main_phacti_pane_g1

0x9477,	// (0x00046a0b) phacti_note_pane_ParamLimits

0x9477,	// (0x00046a0b) phacti_note_pane

0xe83a,	// (0x0004bdce) phacti_term_pane_ParamLimits

0xe83a,	// (0x0004bdce) phacti_term_pane

0xe84f,	// (0x0004bde3) phacti_note_pane_t1_ParamLimits

0xe84f,	// (0x0004bde3) phacti_note_pane_t1

0x1c6a,	// (0x0003f1fe) phacti_term_pane_g1

0x1c72,	// (0x0003f206) phacti_term_pane_t1_ParamLimits

0x1c72,	// (0x0003f206) phacti_term_pane_t1

0xe866,	// (0x0004bdfa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe86e,	// (0x0004be02) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004d349) popup_sp_fs_calendar_preview_list_single_pane_g

0xe876,	// (0x0004be0a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe876,	// (0x0004be0a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe88c,	// (0x0004be20) aid_popup_sp_fs_bg_corner_pane

0xcbab,	// (0x0004a13f) popup_sp_fs_calendar_preview_bg_pane_g1

0x9fb0,	// (0x00047544) popup_sp_fs_calendar_preview_bg_pane

0xa6c6,	// (0x00047c5a) popup_sp_fs_calendar_preview_list_pane

0xc7a1,	// (0x00049d35) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a1,	// (0x00049d35) bg_main_sp_fs_cale_pane

0x1c9c,	// (0x0003f230) listscroll_cale_mrui_pane_ParamLimits

0x1c9c,	// (0x0003f230) listscroll_cale_mrui_pane

0x1cb1,	// (0x0003f245) listscroll_sp_fs_schedule_track_pane

0x1cba,	// (0x0003f24e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1cba,	// (0x0003f24e) main_sp_fs_ctrlbar_pane_cp01

0xe894,	// (0x0004be28) main_sp_fs_ribbon_pane

0x1ccd,	// (0x0003f261) popup_sp_fs_cale_preview_window

0x94da,	// (0x00046a6e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94da,	// (0x00046a6e) list_single_sp_fs_schedule_track_pane

0xdc53,	// (0x0004b1e7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdc53,	// (0x0004b1e7) bg_sp_fs_highlight_list_pane_cp03

0x9508,	// (0x00046a9c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9508,	// (0x00046a9c) list_single_sp_fs_schedule_track_pane_g1

0x9514,	// (0x00046aa8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9514,	// (0x00046aa8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004d34e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004d34e) list_single_sp_fs_schedule_track_pane_g

0x9520,	// (0x00046ab4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9520,	// (0x00046ab4) list_single_sp_fs_schedule_track_pane_t1

0x9538,	// (0x00046acc) sp_fs_schedule_track_pane_ParamLimits

0x9538,	// (0x00046acc) sp_fs_schedule_track_pane

0xe89c,	// (0x0004be30) sp_fs_schedule_track_pane_g1

0xe8a4,	// (0x0004be38) sp_fs_schedule_track_pane_g2

0xe8ac,	// (0x0004be40) sp_fs_schedule_track_pane_g3

0xe8b4,	// (0x0004be48) sp_fs_schedule_track_pane_g4

0xe8bc,	// (0x0004be50) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004d353) sp_fs_schedule_track_pane_g

0xd60e,	// (0x0004aba2) bg_sp_fs_schedule_viewer_highlight_g1

0xab57,	// (0x000480eb) bg_sp_fs_schedule_viewer_highlight_g2

0xd616,	// (0x0004abaa) bg_sp_fs_schedule_viewer_highlight_g3

0xd61e,	// (0x0004abb2) bg_sp_fs_schedule_viewer_highlight_g4

0xd850,	// (0x0004ade4) bg_sp_fs_schedule_viewer_highlight_g5

0xd62e,	// (0x0004abc2) bg_sp_fs_schedule_viewer_highlight_g6

0xd636,	// (0x0004abca) bg_sp_fs_schedule_viewer_highlight_g7

0xd63e,	// (0x0004abd2) bg_sp_fs_schedule_viewer_highlight_g8

0xab37,	// (0x000480cb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004d35e) bg_sp_fs_schedule_viewer_highlight_g

0x9fb0,	// (0x00047544) bg_main_sp_fs_ribbon_pane

0x9548,	// (0x00046adc) main_sp_fs_ribbon_pane_g1

0xe8c4,	// (0x0004be58) main_sp_fs_ribbon_pane_t1

0x9551,	// (0x00046ae5) main_sp_fs_ribbon_pane_t2

0xe8d3,	// (0x0004be67) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004d371) main_sp_fs_ribbon_pane_t

0xe8e2,	// (0x0004be76) main_sp_fs_ribbon_scheduler_pane

0xe8ea,	// (0x0004be7e) bg_main_sp_fs_ribbon_pane_g1

0xe8f3,	// (0x0004be87) bg_main_sp_fs_ribbon_pane_g2

0xe8fc,	// (0x0004be90) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004d378) bg_main_sp_fs_ribbon_pane_g

0xe904,	// (0x0004be98) main_sp_fs_ribbon_scheduler_pane_g1

0xe90d,	// (0x0004bea1) main_sp_fs_ribbon_scheduler_pane_g2

0xe916,	// (0x0004beaa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004d37f) main_sp_fs_ribbon_scheduler_pane_g

0xe91f,	// (0x0004beb3) list_cale_mrui_pane

0x9562,	// (0x00046af6) sp_fs_scroll_pane_cp07_ParamLimits

0x9562,	// (0x00046af6) sp_fs_scroll_pane_cp07

0x957e,	// (0x00046b12) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x957e,	// (0x00046b12) bg_sp_fs_schedule_viewer_highlight

0xe92c,	// (0x0004bec0) list_single_sp_fs_schedule_track_pane_cp01

0xe934,	// (0x0004bec8) list_sp_fs_schedule_track_pane

0xe93c,	// (0x0004bed0) sp_fs_scroll_pane_cp06_ParamLimits

0xe93c,	// (0x0004bed0) sp_fs_scroll_pane_cp06

0xcbab,	// (0x0004a13f) bgmain_sp_fs_calendar_pane_g1

0x1cdf,	// (0x0003f273) list_single_cale_mrui_pane_ParamLimits

0x1cdf,	// (0x0003f273) list_single_cale_mrui_pane

0x1d11,	// (0x0003f2a5) list_single_cale_mrui_row_pane_ParamLimits

0x1d11,	// (0x0003f2a5) list_single_cale_mrui_row_pane

0x1d1e,	// (0x0003f2b2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d1e,	// (0x0003f2b2) list_single_cale_mrui_row_pane_g1

0x1d56,	// (0x0003f2ea) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1d56,	// (0x0003f2ea) list_single_cale_mrui_row_pane_t1

0x1d68,	// (0x0003f2fc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1d68,	// (0x0003f2fc) list_single_cale_mrui_row_pane_t2

0x1dce,	// (0x0003f362) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1dce,	// (0x0003f362) list_single_cale_mrui_row_pane_t3

0x1dfd,	// (0x0003f391) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1dfd,	// (0x0003f391) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004d38d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004d38d) list_single_cale_mrui_row_pane_t

0x1e2c,	// (0x0003f3c0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1e2c,	// (0x0003f3c0) list_single_cmail_header_editor_pane_bg_cp01

0x1e4e,	// (0x0003f3e2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1e4e,	// (0x0003f3e2) list_single_cmail_header_editor_pane_bg_cp02

0x958b,	// (0x00046b1f) main_radioblah_text_pane_t1_ParamLimits

0x958b,	// (0x00046b1f) main_radioblah_text_pane_t1

0xe95b,	// (0x0004beef) cam6_indi_pane_cp01

0xe963,	// (0x0004bef7) cam6_mode_pane_cp01

0xe96b,	// (0x0004beff) cam6_pano_pane

0xe974,	// (0x0004bf08) cam6_zoom_pane_cp01

0xe97c,	// (0x0004bf10) cam6_pano_image_pane

0xe987,	// (0x0004bf1b) cam6_pano_pane_g1

0xe280,	// (0x0004b814) cam6_pano_pane_g2

0xe990,	// (0x0004bf24) cam6_pano_pane_g3

0xe999,	// (0x0004bf2d) cam6_pano_pane_g4

0xd169,	// (0x0004a6fd) cam6_pano_pane_g5

0xe9a2,	// (0x0004bf36) cam6_pano_pane_g6

0xe9ac,	// (0x0004bf40) cam6_pano_pane_g7

0xe9b4,	// (0x0004bf48) cam6_pano_pane_g8

0xe9bd,	// (0x0004bf51) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004d396) cam6_pano_pane_g

0x9fb0,	// (0x00047544) main_browser_tag_pane

0xe81b,	// (0x0004bdaf) grid_navstr_albumart_pane

0xe9c8,	// (0x0004bf5c) cell_navstr_albumart_pane_ParamLimits

0xe9c8,	// (0x0004bf5c) cell_navstr_albumart_pane

0xb4eb,	// (0x00048a7f) cell_navstr_albumart_pane_g1

0xc5b2,	// (0x00049b46) cell_navstr_albumart_pane_g2

0xc5c2,	// (0x00049b56) cell_navstr_albumart_pane_g3

0xc5ba,	// (0x00049b4e) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004d3a9) cell_navstr_albumart_pane_g

0x95a6,	// (0x00046b3a) bt_list_pane_ParamLimits

0x95a6,	// (0x00046b3a) bt_list_pane

0xe9ea,	// (0x0004bf7e) bt_list_pane_t1

0xe9f9,	// (0x0004bf8d) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004d3b2) bt_list_pane_t

0x9fb0,	// (0x00047544) main_cale_prevew_pane

0x95ca,	// (0x00046b5e) popup_cale_preview_window_ParamLimits

0x95ca,	// (0x00046b5e) popup_cale_preview_window

0xade7,	// (0x0004837b) bg_popup_preview_window_pane_cp05_ParamLimits

0xade7,	// (0x0004837b) bg_popup_preview_window_pane_cp05

0xea08,	// (0x0004bf9c) list_cale_preview_pane_ParamLimits

0xea08,	// (0x0004bf9c) list_cale_preview_pane

0xea14,	// (0x0004bfa8) list_double_cale_preview_pane_ParamLimits

0xea14,	// (0x0004bfa8) list_double_cale_preview_pane

0xea26,	// (0x0004bfba) list_single_cale_preview_pane_ParamLimits

0xea26,	// (0x0004bfba) list_single_cale_preview_pane

0xea3a,	// (0x0004bfce) list_single_cale_preview_pane_g1

0xea42,	// (0x0004bfd6) list_single_cale_preview_pane_t1_ParamLimits

0xea42,	// (0x0004bfd6) list_single_cale_preview_pane_t1

0xea57,	// (0x0004bfeb) list_double_cale_preview_pane_g1

0xea5f,	// (0x0004bff3) list_double_cale_preview_pane_t1_ParamLimits

0xea5f,	// (0x0004bff3) list_double_cale_preview_pane_t1

0xea74,	// (0x0004c008) list_double_cale_preview_pane_t2_ParamLimits

0xea74,	// (0x0004c008) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004d3b7) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004d3b7) list_double_cale_preview_pane_t

0x9fb0,	// (0x00047544) main_ezdial_pane

0xade7,	// (0x0004837b) main_sp_fs_email_pane_ParamLimits

0x91d6,	// (0x0004676a) cmail_ddmenu_btn01_pane_ParamLimits

0x91d6,	// (0x0004676a) cmail_ddmenu_btn01_pane

0x91f3,	// (0x00046787) cmail_ddmenu_btn02_pane_ParamLimits

0x91f3,	// (0x00046787) cmail_ddmenu_btn02_pane

0x9211,	// (0x000467a5) cmail_ddmenu_btn03_pane_ParamLimits

0x9211,	// (0x000467a5) cmail_ddmenu_btn03_pane

0x923f,	// (0x000467d3) main_sp_fs_ctrlbar_pane_ParamLimits

0x9255,	// (0x000467e9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x935d,	// (0x000468f1) list_cmail_body_pane_ParamLimits

0xe792,	// (0x0004bd26) bg_button_pane_cp12

0xe79b,	// (0x0004bd2f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe79b,	// (0x0004bd2f) list_single_cmail_header_detail_pane_g3

0x1c2f,	// (0x0003f1c3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1c2f,	// (0x0003f1c3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004d33a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004d33a) list_single_cmail_header_detail_pane_t

0x1c87,	// (0x0003f21b) phacti_term_pane_t2_ParamLimits

0x1c87,	// (0x0003f21b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004d344) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004d344) phacti_term_pane_t

0xea8c,	// (0x0004c020) aid_size_list_single_double

0x95e1,	// (0x00046b75) popup_ezdial_listscroll_window

0x9604,	// (0x00046b98) popup_number_entry_window_cp01

0xb38a,	// (0x0004891e) bg_popup_call_pane_cp09

0xea98,	// (0x0004c02c) ezdial_list_pane

0xeaa0,	// (0x0004c034) scroll_pane_cp23

0xc98e,	// (0x00049f22) bg_button_pane_cp028_ParamLimits

0xc98e,	// (0x00049f22) bg_button_pane_cp028

0x9612,	// (0x00046ba6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9612,	// (0x00046ba6) cmail_ddmenu_btn01_pane_g1

0x9624,	// (0x00046bb8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9624,	// (0x00046bb8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004d3bc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004d3bc) cmail_ddmenu_btn01_pane_g

0xeaa8,	// (0x0004c03c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa8,	// (0x0004c03c) cmail_ddmenu_btn01_pane_t1

0xc7a1,	// (0x00049d35) bg_button_pane_cp029_ParamLimits

0xc7a1,	// (0x00049d35) bg_button_pane_cp029

0x9630,	// (0x00046bc4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9630,	// (0x00046bc4) cmail_ddmenu_btn02_pane_g1

0x9648,	// (0x00046bdc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9648,	// (0x00046bdc) cmail_ddmenu_btn02_pane_t1

0xdc53,	// (0x0004b1e7) bg_button_pane_cp031_ParamLimits

0xdc53,	// (0x0004b1e7) bg_button_pane_cp031

0x9630,	// (0x00046bc4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9630,	// (0x00046bc4) cmail_ddmenu_btn03_pane_g1

0x9648,	// (0x00046bdc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9648,	// (0x00046bdc) cmail_ddmenu_btn03_pane_t1

0x7082,	// (0x00044616) cell_dialer2_keypad_pane_t1_ParamLimits

0x709c,	// (0x00044630) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x709c,	// (0x00044630) cell_dialer2_keypad_pane_t1_copy1

0x8bb9,	// (0x0004614d) ncimui_group_button_pane

0xade7,	// (0x0004837b) main_sp_fs_calendar_pane_ParamLimits

0x9384,	// (0x00046918) list_single_cmail_header_caption_pane_ParamLimits

0xdc4a,	// (0x0004b1de) aid_recal_txt_sm_pane

0x9fb0,	// (0x00047544) mian_recal_day_pane

0x1ccd,	// (0x0003f261) popup_sp_fs_cale_preview_window_ParamLimits

0xeabd,	// (0x0004c051) list_recal_day_pane

0x1e85,	// (0x0003f419) list_single_recal_day_pane_ParamLimits

0x1e85,	// (0x0003f419) list_single_recal_day_pane

0xeae4,	// (0x0004c078) list_single_recal_day_pane_g1_ParamLimits

0xeae4,	// (0x0004c078) list_single_recal_day_pane_g1

0x1e97,	// (0x0003f42b) list_single_recal_day_pane_g2_ParamLimits

0x1e97,	// (0x0003f42b) list_single_recal_day_pane_g2

0x1ea7,	// (0x0003f43b) list_single_recal_day_pane_g3_ParamLimits

0x1ea7,	// (0x0003f43b) list_single_recal_day_pane_g3

0x1eb3,	// (0x0003f447) list_single_recal_day_pane_g4_ParamLimits

0x1eb3,	// (0x0003f447) list_single_recal_day_pane_g4

0x1ec9,	// (0x0003f45d) list_single_recal_day_pane_g5_ParamLimits

0x1ec9,	// (0x0003f45d) list_single_recal_day_pane_g5

0x1ee3,	// (0x0003f477) list_single_recal_day_pane_g6_ParamLimits

0x1ee3,	// (0x0003f477) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004d3cb) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004d3cb) list_single_recal_day_pane_g

0x1ef7,	// (0x0003f48b) list_single_recal_day_pane_t1

0x1f09,	// (0x0003f49d) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004d3d6) list_single_recal_day_pane_t

0x966c,	// (0x00046c00) ncimui_query_button_pane_ParamLimits

0x966c,	// (0x00046c00) ncimui_query_button_pane

0x967c,	// (0x00046c10) ncimui_query_button_pane_t1_ParamLimits

0x967c,	// (0x00046c10) ncimui_query_button_pane_t1

0xeaf0,	// (0x0004c084) ncimui_query_button_pane_t2_ParamLimits

0xeaf0,	// (0x0004c084) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004d3db) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004d3db) ncimui_query_button_pane_t

0x968f,	// (0x00046c23) query_button_pane_ParamLimits

0x968f,	// (0x00046c23) query_button_pane

0x9fb0,	// (0x00047544) bg_button_pane_cp0028

0xeb03,	// (0x0004c097) query_button_pane_t1

0x5455,	// (0x000429e9) main_tport_pane_ParamLimits

0x9266,	// (0x000467fa) bg_popup_window_pane_cp01_ParamLimits

0x9266,	// (0x000467fa) bg_popup_window_pane_cp01

0x9274,	// (0x00046808) heading_pane_cp08_ParamLimits

0x9274,	// (0x00046808) heading_pane_cp08

0x9282,	// (0x00046816) heading_pane_cp07_ParamLimits

0x9282,	// (0x00046816) heading_pane_cp07

0x92f1,	// (0x00046885) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004d327) cell_tport_appsw_pane_g

0x0f09,	// (0x0003e49d) input_candi_list_open_g1

0xad22,	// (0x000482b6) list_cale_time_pane_g6_ParamLimits

0xad22,	// (0x000482b6) list_cale_time_pane_g6

0x5edd,	// (0x00043471) aid_size_touch_calib_1_ParamLimits

0x5edd,	// (0x00043471) aid_size_touch_calib_1

0x5ee9,	// (0x0004347d) aid_size_touch_calib_2_ParamLimits

0x5ee9,	// (0x0004347d) aid_size_touch_calib_2

0x5ef7,	// (0x0004348b) aid_size_touch_calib_3_ParamLimits

0x5ef7,	// (0x0004348b) aid_size_touch_calib_3

0x5f07,	// (0x0004349b) aid_size_touch_calib_4_ParamLimits

0x5f07,	// (0x0004349b) aid_size_touch_calib_4

0x5f15,	// (0x000434a9) main_touch_calib_button_group_pane_ParamLimits

0x5f15,	// (0x000434a9) main_touch_calib_button_group_pane

0x5f23,	// (0x000434b7) main_touch_calib_pane_g1_ParamLimits

0x5f2f,	// (0x000434c3) main_touch_calib_pane_g2_ParamLimits

0x5f3b,	// (0x000434cf) main_touch_calib_pane_g3_ParamLimits

0x5f47,	// (0x000434db) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004cce5) main_touch_calib_pane_g_ParamLimits

0x5f53,	// (0x000434e7) main_touch_calib_pane_t1_ParamLimits

0x5f6c,	// (0x00043500) main_touch_calib_pane_t2_ParamLimits

0x5f85,	// (0x00043519) main_touch_calib_pane_t3_ParamLimits

0x5f9b,	// (0x0004352f) main_touch_calib_pane_t4_ParamLimits

0x5fb1,	// (0x00043545) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004ccee) main_touch_calib_pane_t_ParamLimits

0xcf0b,	// (0x0004a49f) list_single_fp_cale_pane_g3_ParamLimits

0xcf0b,	// (0x0004a49f) list_single_fp_cale_pane_g3

0xade7,	// (0x0004837b) bg_button_pane_cp012_ParamLimits

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp03_ParamLimits

0x7e51,	// (0x000453e5) cell_vitu2_function_top_pane_g1_ParamLimits

0xade7,	// (0x0004837b) bg_vkb2_func_pane_cp04_ParamLimits

0x8b41,	// (0x000460d5) main_ncimui_button_group_pane_ParamLimits

0x8b41,	// (0x000460d5) main_ncimui_button_group_pane

0x8ba7,	// (0x0004613b) main_ncimui_pane_t3_ParamLimits

0x8ba7,	// (0x0004613b) main_ncimui_pane_t3

0xe831,	// (0x0004bdc5) phacti_button_group_pane

0xea8c,	// (0x0004c020) aid_size_list_single_double_ParamLimits

0x95e1,	// (0x00046b75) popup_ezdial_listscroll_window_ParamLimits

0x9604,	// (0x00046b98) popup_number_entry_window_cp01_ParamLimits

0x969c,	// (0x00046c30) phacti_button_pane_ParamLimits

0x969c,	// (0x00046c30) phacti_button_pane

0x9fb0,	// (0x00047544) bg_button_pane_cp14

0xeb11,	// (0x0004c0a5) phacti_button_pane_t1

0x96ad,	// (0x00046c41) main_touch_calib_button_pane_ParamLimits

0x96ad,	// (0x00046c41) main_touch_calib_button_pane

0xa737,	// (0x00047ccb) bg_button_pane_cp18_ParamLimits

0xa737,	// (0x00047ccb) bg_button_pane_cp18

0xeb1f,	// (0x0004c0b3) main_touch_calib_button_pane_t1_ParamLimits

0xeb1f,	// (0x0004c0b3) main_touch_calib_button_pane_t1

0xeb35,	// (0x0004c0c9) main_touch_calib_button_pane_t2_ParamLimits

0xeb35,	// (0x0004c0c9) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004d3e0) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004d3e0) main_touch_calib_button_pane_t

0x9fb0,	// (0x00047544) cell_ncimui_button_pane

0x9fb0,	// (0x00047544) bg_button_pane_cp032

0xeb53,	// (0x0004c0e7) cell_ncimui_button_pane_t1

0x70f8,	// (0x0004468c) image3_infobar_pane_ParamLimits

0x70f8,	// (0x0004468c) image3_infobar_pane

0x8f20,	// (0x000464b4) fs_bigclock_status_pane_ParamLimits

0x8f20,	// (0x000464b4) fs_bigclock_status_pane

0x8f2d,	// (0x000464c1) main_fs_bigclock_clock_pane_ParamLimits

0x8f2d,	// (0x000464c1) main_fs_bigclock_clock_pane

0x8f47,	// (0x000464db) main_fs_bigclock_indi_pane_ParamLimits

0x8f47,	// (0x000464db) main_fs_bigclock_indi_pane

0x8f6f,	// (0x00046503) main_fs_bigclock_swipe_pane_ParamLimits

0x8f6f,	// (0x00046503) main_fs_bigclock_swipe_pane

0x9fb0,	// (0x00047544) main_fs_clock_dumped_data

0xe38d,	// (0x0004b921) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe38d,	// (0x0004b921) list_single_fs_bigclock_indicator_pane_g1

0xe3a9,	// (0x0004b93d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3a9,	// (0x0004b93d) list_single_fs_bigclock_indicator_pane_g2

0xe3c3,	// (0x0004b957) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3c3,	// (0x0004b957) list_single_fs_bigclock_indicator_pane_g3

0xe3dd,	// (0x0004b971) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3dd,	// (0x0004b971) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004d208) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004d208) list_single_fs_bigclock_indicator_pane_g

0xe408,	// (0x0004b99c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe408,	// (0x0004b99c) list_single_fs_bigclock_indicator_pane_t1

0xe430,	// (0x0004b9c4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe430,	// (0x0004b9c4) list_single_fs_bigclock_indicator_pane_t2

0xe458,	// (0x0004b9ec) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe458,	// (0x0004b9ec) list_single_fs_bigclock_indicator_pane_t3

0xe480,	// (0x0004ba14) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe480,	// (0x0004ba14) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004d213) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004d213) list_single_fs_bigclock_indicator_pane_t

0xeb61,	// (0x0004c0f5) image3_infobar_fav_pane_ParamLimits

0xeb61,	// (0x0004c0f5) image3_infobar_fav_pane

0xeb71,	// (0x0004c105) image3_infobar_loc_pane_ParamLimits

0xeb71,	// (0x0004c105) image3_infobar_loc_pane

0xebbb,	// (0x0004c14f) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x0004c14f) image3_infobar_time_pane

0xcbab,	// (0x0004a13f) image3_infobar_time_pane_g1

0xebcb,	// (0x0004c15f) image3_infobar_time_pane_t1

0xcbab,	// (0x0004a13f) image3_infobar_loc_pane_g1

0xebd9,	// (0x0004c16d) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004d3e5) image3_infobar_loc_pane_g

0xebe1,	// (0x0004c175) image3_infobar_loc_pane_t1

0xcbab,	// (0x0004a13f) image3_infobar_fav_pane_g1

0xebef,	// (0x0004c183) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004d3ea) image3_infobar_fav_pane_g

0xebf7,	// (0x0004c18b) fs_bigclock_status_battery_pane

0xec00,	// (0x0004c194) fs_bigclock_status_signal_pane

0xec09,	// (0x0004c19d) fs_bigclock_status_title_pane

0xec12,	// (0x0004c1a6) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x0004c1af) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004d3ef) fs_bigclock_status_signal_pane_g

0xec23,	// (0x0004c1b7) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x0004c1c0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004d3f4) fs_bigclock_status_battery_pane_g

0xec34,	// (0x0004c1c8) fs_bigclock_status_title_pane_t1

0xcbab,	// (0x0004a13f) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x0004c1d6) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x0004c1df) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x0004c1df) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004d3f9) main_fs_bigclock_clock_pane_g

0xec53,	// (0x0004c1e7) main_fs_bigclock_clock_pane_t1

0x96bd,	// (0x00046c51) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004d402) main_fs_bigclock_clock_pane_t

0xec61,	// (0x0004c1f5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x0004c1f5) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x0004c206) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x0004c206) list_single_fs_bigclock_pane

0xec98,	// (0x0004c22c) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x0004c23b) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x0004c243) list_single_fs_bigclock_pane_t1

0xcbab,	// (0x0004a13f) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x0004c286) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004d413) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x0004c28e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x0004c28e) main_fs_bigclock_swipe_pane_t1

0x44f5,	// (0x00041a89) call_type_pane_ParamLimits

0x9fb0,	// (0x00047544) main_btmg_pane

0x1d4a,	// (0x0003f2de) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1d4a,	// (0x0003f2de) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004d386) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004d386) list_single_cale_mrui_row_pane_g

0x1e74,	// (0x0003f408) list_recal_vselct_arw_lo_pane

0xeadc,	// (0x0004c070) list_recal_vselct_arw_up_pane

0x1e7c,	// (0x0003f410) list_recal_vselct_pane

0x970e,	// (0x00046ca2) btmg_button_pane

0x971a,	// (0x00046cae) main_btmg_pane_g1

0x9fb0,	// (0x00047544) bg_button_pane_cp044

0xed17,	// (0x0004c2ab) btmg_button_pane_t1

0xc78d,	// (0x00049d21) aid_listscroll_gen

0xade7,	// (0x0004837b) main_cntbar_detail_pane

0xe774,	// (0x0004bd08) list_cmail_folder_pane

0xd6dd,	// (0x0004ac71) sp_fs_scroll_pane_cp03_ParamLimits

0x1f1b,	// (0x0003f4af) list_single_fs_dyc_pane_cp01_ParamLimits

0x1f1b,	// (0x0003f4af) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0004c2b9) aid_size_cmail_indent

0x1f52,	// (0x0003f4e6) list_single_dyc_row_pane_cp01

0x9742,	// (0x00046cd6) cntbar_detail_list_pane_ParamLimits

0x9742,	// (0x00046cd6) cntbar_detail_list_pane

0x977c,	// (0x00046d10) main_cntbar_detail_cont_pane_ParamLimits

0x977c,	// (0x00046d10) main_cntbar_detail_cont_pane

0x44e9,	// (0x00041a7d) scroll_pane_cp032_ParamLimits

0x44e9,	// (0x00041a7d) scroll_pane_cp032

0x9788,	// (0x00046d1c) cntbar_detail_list_event_pane_ParamLimits

0x9788,	// (0x00046d1c) cntbar_detail_list_event_pane

0x974e,	// (0x00046ce2) cntbar_detail_list_shct_pane

0xaba5,	// (0x00048139) aid_list_gen

0xed2e,	// (0x0004c2c2) aid_scroll

0xed37,	// (0x0004c2cb) aid_size_touch_scroll_bar

0x1418,	// (0x0003e9ac) aid_list_double

0x1f5b,	// (0x0003f4ef) aid_list_single

0xebb2,	// (0x0004c146) aid_list_single_lg

0x1f64,	// (0x0003f4f8) aid_list_z_g_a_sm

0x1f6c,	// (0x0003f500) aid_list_z_g_d

0x1f74,	// (0x0003f508) aid_txt_z_prm

0x1f82,	// (0x0003f516) aid_txt_z_prm_cp01

0x1f90,	// (0x0003f524) aid_txt_z_sec

0x979c,	// (0x00046d30) main_cntbar_detail_cont_pane_g1_ParamLimits

0x979c,	// (0x00046d30) main_cntbar_detail_cont_pane_g1

0x97a9,	// (0x00046d3d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x97a9,	// (0x00046d3d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004d418) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004d418) main_cntbar_detail_cont_pane_g

0xed40,	// (0x0004c2d4) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x0004c2e2) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x0004c2f0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004d41d) main_cntbar_detail_cont_pane_t

0x97b5,	// (0x00046d49) cell_cntbar_detail_list_shct_pane_ParamLimits

0x97b5,	// (0x00046d49) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x0004c2fe) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x0004c307) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004d424) cntbar_detail_list_shct_pane_g

0x97c9,	// (0x00046d5d) cntbar_detail_list_event_pane_g1_ParamLimits

0x97c9,	// (0x00046d5d) cntbar_detail_list_event_pane_g1

0x97d5,	// (0x00046d69) cntbar_detail_list_event_pane_g2_ParamLimits

0x97d5,	// (0x00046d69) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004d429) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004d429) cntbar_detail_list_event_pane_g

0x9841,	// (0x00046dd5) cntbar_detail_list_event_pane_t1_ParamLimits

0x9841,	// (0x00046dd5) cntbar_detail_list_event_pane_t1

0x9856,	// (0x00046dea) cntbar_detail_list_event_pane_t2_ParamLimits

0x9856,	// (0x00046dea) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004d436) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004d436) cntbar_detail_list_event_pane_t

0xcbab,	// (0x0004a13f) cell_cntbar_detail_list_shct_pane_g1

0xb342,	// (0x000488d6) navi_pane_mv_g3

0xade7,	// (0x0004837b) main_cntbar_detail_pane_ParamLimits

0x9fb0,	// (0x00047544) main_notif_wgt_pane

0x6dac,	// (0x00044340) aid_tch_main_mp4_pane_g4

0x6fe1,	// (0x00044575) popup_slider_window_cp02

0x1e6a,	// (0x0003f3fe) list_recal_day_event_pane

0x9722,	// (0x00046cb6) cntbar_detail_btn_pane_ParamLimits

0x9722,	// (0x00046cb6) cntbar_detail_btn_pane

0x9732,	// (0x00046cc6) cntbar_detail_btn_pane_cp01_ParamLimits

0x9732,	// (0x00046cc6) cntbar_detail_btn_pane_cp01

0x974e,	// (0x00046ce2) cntbar_detail_list_shct_pane_ParamLimits

0x975a,	// (0x00046cee) cntbar_detail_pane_g1_ParamLimits

0x975a,	// (0x00046cee) cntbar_detail_pane_g1

0x9766,	// (0x00046cfa) cntbar_detail_pane_t1_ParamLimits

0x9766,	// (0x00046cfa) cntbar_detail_pane_t1

0x97e1,	// (0x00046d75) cntbar_detail_list_event_pane_g3_ParamLimits

0x97e1,	// (0x00046d75) cntbar_detail_list_event_pane_g3

0x97f9,	// (0x00046d8d) cntbar_detail_list_event_pane_g4_ParamLimits

0x97f9,	// (0x00046d8d) cntbar_detail_list_event_pane_g4

0x9811,	// (0x00046da5) cntbar_detail_list_event_pane_g5_ParamLimits

0x9811,	// (0x00046da5) cntbar_detail_list_event_pane_g5

0x9829,	// (0x00046dbd) cntbar_detail_list_event_pane_g6_ParamLimits

0x9829,	// (0x00046dbd) cntbar_detail_list_event_pane_g6

0x986b,	// (0x00046dff) cntbar_detail_list_event_pane_t3_ParamLimits

0x986b,	// (0x00046dff) cntbar_detail_list_event_pane_t3

0x987d,	// (0x00046e11) popup_notif_wgt_window_ParamLimits

0x987d,	// (0x00046e11) popup_notif_wgt_window

0x988d,	// (0x00046e21) popup_submenu_window_cp01_ParamLimits

0x988d,	// (0x00046e21) popup_submenu_window_cp01

0xb38a,	// (0x0004891e) bg_popup_window_pane_cp10

0xed7c,	// (0x0004c310) listscroll_notif_wgt_pane

0xed8d,	// (0x0004c321) list_notif_wgt_window

0xed96,	// (0x0004c32a) scroll_pane_cp033

0x989b,	// (0x00046e2f) list_notif_wgt_row_pane_ParamLimits

0x989b,	// (0x00046e2f) list_notif_wgt_row_pane

0xed9f,	// (0x0004c333) aid_size_list_notif_wgt_del

0xedac,	// (0x0004c340) list_notif_wgt_row_pane_g1

0xedb8,	// (0x0004c34c) list_notif_wgt_row_pane_g2

0xedcc,	// (0x0004c360) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004d43d) list_notif_wgt_row_pane_g

0xedd9,	// (0x0004c36d) list_notif_wgt_row_pane_t1

0xedef,	// (0x0004c383) list_notif_wgt_row_pane_t2

0xee01,	// (0x0004c395) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004d444) list_notif_wgt_row_pane_t

0xd858,	// (0x0004adec) list_recal_day_event_pane_g1

0xee13,	// (0x0004c3a7) list_recal_day_event_pane_t1

0x9fb0,	// (0x00047544) bg_button_pane_cp045

0xee22,	// (0x0004c3b6) cntbar_detail_btn_pane_t1

0xc7a1,	// (0x00049d35) main_callh_pane_ParamLimits

0xc7a1,	// (0x00049d35) main_callh_pane

0x9fb0,	// (0x00047544) main_coverflow0_pane

0x9fb0,	// (0x00047544) main_wgtman_pane

0x8f87,	// (0x0004651b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8f87,	// (0x0004651b) main_fs_bigclock_unlock_btn_pane

0x92e9,	// (0x0004687d) bg_button_pane_cp16

0x92f9,	// (0x0004688d) cell_tport_appsw_pane_g3

0x98ad,	// (0x00046e41) cf0_flow_pane_ParamLimits

0x98ad,	// (0x00046e41) cf0_flow_pane

0xee30,	// (0x0004c3c4) listscroll_cf0_pane

0xee3b,	// (0x0004c3cf) main_cf0_pane_g1

0x98bc,	// (0x00046e50) main_cf0_pane_t1_ParamLimits

0x98bc,	// (0x00046e50) main_cf0_pane_t1

0x98d0,	// (0x00046e64) main_cf0_pane_t2_ParamLimits

0x98d0,	// (0x00046e64) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004d450) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004d450) main_cf0_pane_t

0xee4d,	// (0x0004c3e1) scroll_pane_cp11

0x98e4,	// (0x00046e78) cf0_flow_pane_g1

0x98ec,	// (0x00046e80) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004d455) cf0_flow_pane_g

0x98f4,	// (0x00046e88) cf0_flow_pane_t1

0x9fb0,	// (0x00047544) main_call6_pane

0x9fb0,	// (0x00047544) main_calllock_pane

0x9902,	// (0x00046e96) call6_btn_grp_pane_ParamLimits

0x9902,	// (0x00046e96) call6_btn_grp_pane

0x9911,	// (0x00046ea5) call6_pane_g1_ParamLimits

0x9911,	// (0x00046ea5) call6_pane_g1

0x9920,	// (0x00046eb4) popup_call6_1st_window_ParamLimits

0x9920,	// (0x00046eb4) popup_call6_1st_window

0x992e,	// (0x00046ec2) popup_call6_2nd_window_ParamLimits

0x992e,	// (0x00046ec2) popup_call6_2nd_window

0x993c,	// (0x00046ed0) cell_call6_btn_pane_ParamLimits

0x993c,	// (0x00046ed0) cell_call6_btn_pane

0xb38a,	// (0x0004891e) bg_popup_call2_in_pane_cp03

0xee58,	// (0x0004c3ec) popup_call6_1st_window_g1

0xee60,	// (0x0004c3f4) popup_call6_1st_window_g2

0xee68,	// (0x0004c3fc) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004d45a) popup_call6_1st_window_g

0xee70,	// (0x0004c404) popup_call6_1st_window_t1

0xee7f,	// (0x0004c413) popup_call6_1st_window_t2

0xee8f,	// (0x0004c423) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004d461) popup_call6_1st_window_t

0xb38a,	// (0x0004891e) bg_popup_call2_in_pane_cp04

0xee58,	// (0x0004c3ec) popup_call6_2nd_window_g1

0xee60,	// (0x0004c3f4) popup_call6_2nd_window_g2

0xee68,	// (0x0004c3fc) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004d45a) popup_call6_2nd_window_g

0xee70,	// (0x0004c404) popup_call6_2nd_window_t1

0x9fb0,	// (0x00047544) bg_button_pane_cp15

0xee9f,	// (0x0004c433) cell_call6_btn_pane_g1

0xeea8,	// (0x0004c43c) cell_call6_btn_pane_t1

0x994b,	// (0x00046edf) listscroll_wgtman_pane_ParamLimits

0x994b,	// (0x00046edf) listscroll_wgtman_pane

0x9967,	// (0x00046efb) wgtman_btn_pane_ParamLimits

0x9967,	// (0x00046efb) wgtman_btn_pane

0xb147,	// (0x000486db) aid_scroll_copy1

0xeeb7,	// (0x0004c44b) list_wgtman_pane

0x999c,	// (0x00046f30) wgtman_btn_pane_g1_ParamLimits

0x999c,	// (0x00046f30) wgtman_btn_pane_g1

0x99c4,	// (0x00046f58) wgtman_btn_pane_t1_ParamLimits

0x99c4,	// (0x00046f58) wgtman_btn_pane_t1

0xeec1,	// (0x0004c455) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x0004c455) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004d468) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004d468) wgtman_btn_pane_t

0x99fb,	// (0x00046f8f) listrow_wgtman_pane_ParamLimits

0x99fb,	// (0x00046f8f) listrow_wgtman_pane

0x9a17,	// (0x00046fab) listrow_wgtman_pane_g1

0x9a24,	// (0x00046fb8) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004d46d) listrow_wgtman_pane_g

0x1f9e,	// (0x0003f532) listrow_wgtman_pane_t1

0x1fb6,	// (0x0003f54a) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004d472) listrow_wgtman_pane_t

0x1fdc,	// (0x0003f570) wait_bar_pane_cp09

0xeed8,	// (0x0004c46c) main_calllock_btn_pane

0xeee2,	// (0x0004c476) main_calllock_pane_g1

0x9fb0,	// (0x00047544) bg_button_pane_cp17

0xeeed,	// (0x0004c481) main_calllock_btn_pane_g1

0xeef6,	// (0x0004c48a) main_calllock_btn_pane_t1

0x9fb0,	// (0x00047544) main_dialer3_pane

0x9fb0,	// (0x00047544) main_fmrd2_pane

0xcbab,	// (0x0004a13f) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x0004c4a1) main_fs_bigclock_unlock_btn_pane_t1

0x9a42,	// (0x00046fd6) area_fmrd2_info_pane_ParamLimits

0x9a42,	// (0x00046fd6) area_fmrd2_info_pane

0x9a50,	// (0x00046fe4) area_fmrd2_visual_pane_ParamLimits

0x9a50,	// (0x00046fe4) area_fmrd2_visual_pane

0x9a5e,	// (0x00046ff2) fmrd2_indi_pane_ParamLimits

0x9a5e,	// (0x00046ff2) fmrd2_indi_pane

0x9a6b,	// (0x00046fff) area_fmrd2_visual_pane_g1

0x9a73,	// (0x00047007) area_fmrd2_visual_pane_t1

0x9a83,	// (0x00047017) area_fmrd2_visual_pane_t2

0x9a93,	// (0x00047027) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004d47c) area_fmrd2_visual_pane_t

0x9aa3,	// (0x00047037) area_fmrd2_info_pane_g1

0x9aab,	// (0x0004703f) area_fmrd2_info_pane_t1

0x9abb,	// (0x0004704f) area_fmrd2_info_pane_t2

0x9acb,	// (0x0004705f) area_fmrd2_info_pane_t3

0x9adb,	// (0x0004706f) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004d483) area_fmrd2_info_pane_t

0x9ae9,	// (0x0004707d) fmrd2_indi_pane_t1

0x9af9,	// (0x0004708d) fmrd2_indi_pane_t2

0x9b09,	// (0x0004709d) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004d48c) fmrd2_indi_pane_t

0xe3ec,	// (0x0004b980) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3ec,	// (0x0004b980) list_single_fs_bigclock_indicator_pane_g5

0xe49c,	// (0x0004ba30) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe49c,	// (0x0004ba30) list_single_fs_bigclock_indicator_pane_t5

0x948d,	// (0x00046a21) aid_cell_bcale_month_pane_ParamLimits

0x948d,	// (0x00046a21) aid_cell_bcale_month_pane

0x94ab,	// (0x00046a3f) bcale_month_pane_ParamLimits

0x94ab,	// (0x00046a3f) bcale_month_pane

0x94c9,	// (0x00046a5d) bcale_preview_pane_ParamLimits

0x94c9,	// (0x00046a5d) bcale_preview_pane

0xecaf,	// (0x0004c243) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x0004c262) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x0004c262) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004d40e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004d40e) list_single_fs_bigclock_pane_t

0xef05,	// (0x0004c499) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004d477) main_fs_bigclock_unlock_btn_pane_g

0x9b17,	// (0x000470ab) aid_dia3_key_size_ParamLimits

0x9b17,	// (0x000470ab) aid_dia3_key_size

0x9b23,	// (0x000470b7) aid_dia3_listrow_size_ParamLimits

0x9b23,	// (0x000470b7) aid_dia3_listrow_size

0x9b33,	// (0x000470c7) dia3_keypad_fun_pane_ParamLimits

0x9b33,	// (0x000470c7) dia3_keypad_fun_pane

0x9b45,	// (0x000470d9) dia3_keypad_num_pane_ParamLimits

0x9b45,	// (0x000470d9) dia3_keypad_num_pane

0x9b57,	// (0x000470eb) dia3_listscroll_pane_ParamLimits

0x9b57,	// (0x000470eb) dia3_listscroll_pane

0x9b65,	// (0x000470f9) dia3_numentry_pane_ParamLimits

0x9b65,	// (0x000470f9) dia3_numentry_pane

0xef1b,	// (0x0004c4af) dia3_list_pane

0xef26,	// (0x0004c4ba) scroll_pane_cp12

0x9fb0,	// (0x00047544) bg_dia3_numentry_pane

0x9b73,	// (0x00047107) dia3_numentry_pane_t1

0x9b82,	// (0x00047116) cell_dia3_key_num_pane

0x9b8a,	// (0x0004711e) cell_dia3_key0_fun_pane_ParamLimits

0x9b8a,	// (0x0004711e) cell_dia3_key0_fun_pane

0x9b97,	// (0x0004712b) cell_dia3_key1_fun_pane_ParamLimits

0x9b97,	// (0x0004712b) cell_dia3_key1_fun_pane

0x9ba4,	// (0x00047138) dia3_listrow_pane

0xe0fa,	// (0x0004b68e) bg_dia3_numentry_pane_g1

0x9fb0,	// (0x00047544) bg_button_pane_cp21

0xef31,	// (0x0004c4c5) cell_dia3_key_num_pane_t1

0xef3f,	// (0x0004c4d3) cell_dia3_key_num_pane_t2

0xef4e,	// (0x0004c4e2) cell_dia3_key_num_pane_t3

0xef5d,	// (0x0004c4f1) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004d493) cell_dia3_key_num_pane_t

0x9fb0,	// (0x00047544) bg_button_pane_cp19

0x9bb1,	// (0x00047145) cell_dia3_key0_fun_pane_g1

0x9fb0,	// (0x00047544) bg_button_pane_cp20

0x9bb9,	// (0x0004714d) cell_dia3_key1_fun_pane_g1

0x9bc1,	// (0x00047155) area_left_week_number_pane

0x9bd4,	// (0x00047168) area_top_day_name_pane

0x9be2,	// (0x00047176) frame_month_view_pane

0xef6c,	// (0x0004c500) grid_month_view_pane

0x9bf7,	// (0x0004718b) cell_top_day_name_pane_ParamLimits

0x9bf7,	// (0x0004718b) cell_top_day_name_pane

0x9c11,	// (0x000471a5) cell_area_left_week_number_pane_ParamLimits

0x9c11,	// (0x000471a5) cell_area_left_week_number_pane

0x9c34,	// (0x000471c8) cell_month_view_pane_ParamLimits

0x9c34,	// (0x000471c8) cell_month_view_pane

0xef7a,	// (0x0004c50e) frm_month_g1

0x9c60,	// (0x000471f4) frm_month_g2

0x9c71,	// (0x00047205) frm_month_g3

0x9c82,	// (0x00047216) frm_month_g4

0x9c93,	// (0x00047227) frm_month_g5

0x9ca6,	// (0x0004723a) frm_month_g6

0x9cb9,	// (0x0004724d) frm_month_g7

0xef87,	// (0x0004c51b) frm_month_g8

0x9ccc,	// (0x00047260) frm_month_g9

0x9cd9,	// (0x0004726d) frm_month_g10

0x9ce6,	// (0x0004727a) frm_month_g11

0x9cf3,	// (0x00047287) frm_month_g12

0x9d00,	// (0x00047294) frm_month_g13

0x9d0d,	// (0x000472a1) frm_month_g14

0x9d1c,	// (0x000472b0) frm_month_g15

0x9d2b,	// (0x000472bf) frm_month_g16

0x000f,

0xff08,	// (0x0004d49c) frm_month_g

0xef94,	// (0x0004c528) cell_top_day_name_pane_t1

0x9d3a,	// (0x000472ce) cell_area_left_week_number_pane_g1

0x9d49,	// (0x000472dd) cell_area_left_week_number_pane_t1

0xce0b,	// (0x0004a39f) cell_month_view_pane_g1

0x9d5f,	// (0x000472f3) cell_month_view_pane_t1

0x9fb0,	// (0x00047544) main_fps_pane

0xe68c,	// (0x0004bc20) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe68c,	// (0x0004bc20) cmail_ddmenu_btn02_pane_cp1

0xe6a8,	// (0x0004bc3c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6a8,	// (0x0004bc3c) cmail_ddmenu_btn02_pane_cp2

0x963c,	// (0x00046bd0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x963c,	// (0x00046bd0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004d3c1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004d3c1) cmail_ddmenu_btn02_pane_g

0x965a,	// (0x00046bee) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x965a,	// (0x00046bee) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004d3c6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004d3c6) cmail_ddmenu_btn02_pane_t

0x9d75,	// (0x00047309) fps_text_pane_ParamLimits

0x9d75,	// (0x00047309) fps_text_pane

0x9d82,	// (0x00047316) main_fps_pane_g1_ParamLimits

0x9d82,	// (0x00047316) main_fps_pane_g1

0x9d90,	// (0x00047324) wait_bar_pane_cp010_ParamLimits

0x9d90,	// (0x00047324) wait_bar_pane_cp010

0x9d9c,	// (0x00047330) fps_text_pane_t1_ParamLimits

0x9d9c,	// (0x00047330) fps_text_pane_t1

0x73c3,	// (0x00044957) cam4_image_uncrop_pane_g1

0x73cc,	// (0x00044960) cam4_image_uncrop_pane_g2

0x73d5,	// (0x00044969) cam4_image_uncrop_pane_g3

0x73de,	// (0x00044972) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004ce82) cam4_image_uncrop_pane_g

0x9ba4,	// (0x00047138) dia3_listrow_pane_ParamLimits

0x9fb0,	// (0x00047544) main_phob2_pane

0x92cb,	// (0x0004685f) cell_tport_appsw_pane_cp02_ParamLimits

0x92cb,	// (0x0004685f) cell_tport_appsw_pane_cp02

0x92da,	// (0x0004686e) cell_tport_appsw_pane_cp03_ParamLimits

0x92da,	// (0x0004686e) cell_tport_appsw_pane_cp03

0x9fb0,	// (0x00047544) phob2_contact_card_pane

0x9fb0,	// (0x00047544) phob2_listscroll_pane

0xefa7,	// (0x0004c53b) phob2_list_pane

0xefaf,	// (0x0004c543) scroll_pane_cp034

0x9db5,	// (0x00047349) phob2_cc_data_pane_ParamLimits

0x9db5,	// (0x00047349) phob2_cc_data_pane

0x9dcf,	// (0x00047363) phob2_cc_listscroll_pane_ParamLimits

0x9dcf,	// (0x00047363) phob2_cc_listscroll_pane

0x9de9,	// (0x0004737d) list_double_large_graphic_phob2_pane_ParamLimits

0x9de9,	// (0x0004737d) list_double_large_graphic_phob2_pane

0x9e0b,	// (0x0004739f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e0b,	// (0x0004739f) list_double_large_graphic_phob2_pane_g1

0x1fee,	// (0x0003f582) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1fee,	// (0x0003f582) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004d4bd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004d4bd) list_double_large_graphic_phob2_pane_g

0x1ffa,	// (0x0003f58e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1ffa,	// (0x0003f58e) list_double_large_graphic_phob2_pane_t1

0x2010,	// (0x0003f5a4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2010,	// (0x0003f5a4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004d4c2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004d4c2) list_double_large_graphic_phob2_pane_t

0x9fb0,	// (0x00047544) list_highlight_pane_cp024

0x9e21,	// (0x000473b5) phob2_cc_button_pane

0x9e29,	// (0x000473bd) phob2_cc_data_pane_g1_ParamLimits

0x9e29,	// (0x000473bd) phob2_cc_data_pane_g1

0x9e35,	// (0x000473c9) phob2_cc_data_pane_g2_ParamLimits

0x9e35,	// (0x000473c9) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004d4c7) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004d4c7) phob2_cc_data_pane_g

0x9e41,	// (0x000473d5) phob2_cc_data_pane_t1_ParamLimits

0x9e41,	// (0x000473d5) phob2_cc_data_pane_t1

0x9e53,	// (0x000473e7) phob2_cc_data_pane_t2_ParamLimits

0x9e53,	// (0x000473e7) phob2_cc_data_pane_t2

0x9e65,	// (0x000473f9) phob2_cc_data_pane_t3_ParamLimits

0x9e65,	// (0x000473f9) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004d4cc) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004d4cc) phob2_cc_data_pane_t

0xefb7,	// (0x0004c54b) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x0004c54b) phob2_cc_list_pane

0xdc3e,	// (0x0004b1d2) scroll_pane_cp035_ParamLimits

0xdc3e,	// (0x0004b1d2) scroll_pane_cp035

0xade7,	// (0x0004837b) bg_button_pane_cp033

0xefc3,	// (0x0004c557) phob2_cc_button_pane_g1

0xefcf,	// (0x0004c563) phob2_cc_button_pane_t1

0xefe4,	// (0x0004c578) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004d4d3) phob2_cc_button_pane_t

0x9e77,	// (0x0004740b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e77,	// (0x0004740b) list_double_large_graphic_phob2_cc_pane

0x9ea6,	// (0x0004743a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ea6,	// (0x0004743a) list_double_large_graphic_phob2_cc_pane_g1

0x2025,	// (0x0003f5b9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2025,	// (0x0003f5b9) list_double_large_graphic_phob2_cc_pane_g2

0x2034,	// (0x0003f5c8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2034,	// (0x0003f5c8) list_double_large_graphic_phob2_cc_pane_g3

0x2043,	// (0x0003f5d7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2043,	// (0x0003f5d7) list_double_large_graphic_phob2_cc_pane_g4

0x2054,	// (0x0003f5e8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2054,	// (0x0003f5e8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004d4d8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004d4d8) list_double_large_graphic_phob2_cc_pane_g

0x2063,	// (0x0003f5f7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2063,	// (0x0003f5f7) list_double_large_graphic_phob2_cc_pane_t1

0x208c,	// (0x0003f620) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x208c,	// (0x0003f620) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004d4e3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004d4e3) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x0004c58a) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x0004c58a) list_highlight_pane_cp025

0xade7,	// (0x0004837b) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x0004c557) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x0004c563) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x0004c578) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004d4d3) phob2_cc_button_pane_t_ParamLimits

0x238c,	// (0x0003f920) popup_wgtman_window

0xd746,	// (0x0004acda) scroll_pane_cp038

0x9984,	// (0x00046f18) wgtman_btn_pane_cp_01_ParamLimits

0x9984,	// (0x00046f18) wgtman_btn_pane_cp_01

0xf004,	// (0x0004c598) wgtman_content_pane

0xf00d,	// (0x0004c5a1) wgtman_heading_pane

0x9fb0,	// (0x00047544) bg_heading_pane_cp02

0xf016,	// (0x0004c5aa) wgtman_heading_pane_g1

0xf01e,	// (0x0004c5b2) wgtman_heading_pane_t1

0xf02c,	// (0x0004c5c0) scroll_pane_cp036

0xf034,	// (0x0004c5c8) wgtman_list_pane

0xeb85,	// (0x0004c119) wgtman_list_pane_t1_ParamLimits

0xeb85,	// (0x0004c119) wgtman_list_pane_t1

0x7322,	// (0x000448b6) cam4_grid_pane

0x11e3,	// (0x0003e777) bg_button_pane_cp015_ParamLimits

0x8007,	// (0x0004559b) bg_button_pane_cp016_ParamLimits

0x801a,	// (0x000455ae) bg_button_pane_cp017_ParamLimits

0x1227,	// (0x0003e7bb) popup_vitu2_query_window_g3_ParamLimits

0x1227,	// (0x0003e7bb) popup_vitu2_query_window_g3

0x12a0,	// (0x0003e834) popup_vitu2_query_window_t6_ParamLimits

0x12a0,	// (0x0003e834) popup_vitu2_query_window_t6

0x12cb,	// (0x0003e85f) popup_vitu2_query_window_t7_ParamLimits

0x12cb,	// (0x0003e85f) popup_vitu2_query_window_t7

0xeba0,	// (0x0004c134) cam4_grid_pane_g1

0xeba9,	// (0x0004c13d) cam4_grid_pane_g2

0xf03c,	// (0x0004c5d0) cam4_grid_pane_g3

0xf045,	// (0x0004c5d9) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004d4e8) cam4_grid_pane_g

0x3207,	// (0x0004079b) aid_placing_vt_slider_lsc_ParamLimits

0x3547,	// (0x00040adb) vidtel_button_pane_ParamLimits

0x3547,	// (0x00040adb) vidtel_button_pane

0xf050,	// (0x0004c5e4) bg_button_pane_cp034

0x9eb7,	// (0x0004744b) vidtel_button_pane_g1

0xf05a,	// (0x0004c5ee) vidtel_button_pane_t1

0xd848,	// (0x0004addc) aid_size_vtel_slider_touch

0xdc3e,	// (0x0004b1d2) scroll_pane_cp039

0xe138,	// (0x0004b6cc) ncim_query_button_pane_cp01_ParamLimits

0xe157,	// (0x0004b6eb) ncimui_query_pane_g1_ParamLimits

0xade7,	// (0x0004837b) input_focus_pane_cp012_ParamLimits

0xe17c,	// (0x0004b710) ncim_query_entry_pane_t1_ParamLimits

0xdc3e,	// (0x0004b1d2) scroll_pane_cp039_ParamLimits

0xb22d,	// (0x000487c1) navi_pane_bcale_mc_g1

0xb235,	// (0x000487c9) navi_pane_bcale_mc_t1

0xe6f1,	// (0x0004bc85) main_sp_fs_email_pane_g1

0xe6fd,	// (0x0004bc91) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004d279) main_sp_fs_email_pane_g

0xe94e,	// (0x0004bee2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe94e,	// (0x0004bee2) list_single_cale_mrui_row_pane_g3

0x1ed9,	// (0x0003f46d) list_single_recal_day_pane_g5_event_pane

0x1eef,	// (0x0003f483) list_single_recal_day_pane_g7

0xf068,	// (0x0004c5fc) list_recal_day_event_pane_cp01

0xf071,	// (0x0004c605) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0004c60d) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0004c615) list_recal_vselct_pane_cp01

0xd858,	// (0x0004adec) list_recal_day_event_pane_cp01_g1

0x20b5,	// (0x0003f649) list_recal_day_event_pane_cp01_t1

0x1ef7,	// (0x0003f48b) list_single_recal_day_pane_t1_ParamLimits

0x1f09,	// (0x0003f49d) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004d3d6) list_single_recal_day_pane_t_ParamLimits

0xa628,	// (0x00047bbc) bg_notes_pane_ParamLimits

0xa715,	// (0x00047ca9) list_notes_pane_ParamLimits

0x26d7,	// (0x0003fc6b) scroll_pane_cp06_ParamLimits

0xa737,	// (0x00047ccb) main_notes_pane_ParamLimits

0x9fb0,	// (0x00047544) main_welc_pane

0x9ebf,	// (0x00047453) main_welc_body_pane_ParamLimits

0x9ebf,	// (0x00047453) main_welc_body_pane

0x9ed8,	// (0x0004746c) main_welc_opti_pane_ParamLimits

0x9ed8,	// (0x0004746c) main_welc_opti_pane

0x9f0d,	// (0x000474a1) main_welc_pane_t1_ParamLimits

0x9f0d,	// (0x000474a1) main_welc_pane_t1

0x9f2b,	// (0x000474bf) main_welc_body_row_pane_ParamLimits

0x9f2b,	// (0x000474bf) main_welc_body_row_pane

0xdc53,	// (0x0004b1e7) main_welc_opti_row_pane_ParamLimits

0xdc53,	// (0x0004b1e7) main_welc_opti_row_pane

0xf08b,	// (0x0004c61f) main_welc_opti_row_pane_g1

0x9f57,	// (0x000474eb) main_welc_opti_row_pane_t1

0xf093,	// (0x0004c627) main_welc_body_row_pane_t1

0xed85,	// (0x0004c319) popup_notif_wgt_heading_pane

0xed9f,	// (0x0004c333) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x0004c340) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x0004c34c) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x0004c360) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004d43d) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x0004c36d) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x0004c383) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x0004c395) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004d444) list_notif_wgt_row_pane_t_ParamLimits

0x9a17,	// (0x00046fab) listrow_wgtman_pane_g1_ParamLimits

0x9a24,	// (0x00046fb8) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004d46d) listrow_wgtman_pane_g_ParamLimits

0x1f9e,	// (0x0003f532) listrow_wgtman_pane_t1_ParamLimits

0x1fb6,	// (0x0003f54a) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004d472) listrow_wgtman_pane_t_ParamLimits

0x1fdc,	// (0x0003f570) wait_bar_pane_cp09_ParamLimits

0x9fb0,	// (0x00047544) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0004c636) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0004c63e) popup_notif_wgt_heading_pane_t1

0x9fb0,	// (0x00047544) main_vids_pane

0x9fb0,	// (0x00047544) vids_listscroll_pane

0x9f66,	// (0x000474fa) scroll_pane_cp040

0x9fb0,	// (0x00047544) vids_list_pane

0x9f71,	// (0x00047505) vids_list_double_pane_ParamLimits

0x9f71,	// (0x00047505) vids_list_double_pane

0x9f89,	// (0x0004751d) vids_list_double_pane_g1

0x9f92,	// (0x00047526) vids_list_double_pane_t1

0x9fa2,	// (0x00047536) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004d4f6) vids_list_double_pane_t

0xade7,	// (0x0004837b) main_ncimui_pane_ParamLimits

0x8b59,	// (0x000460ed) main_ncimui_pane_g1_ParamLimits

0x8b65,	// (0x000460f9) main_ncimui_pane_g2_ParamLimits

0x8b65,	// (0x000460f9) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004d17e) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004d17e) main_ncimui_pane_g

0x9ef3,	// (0x00047487) main_welc_pane_g1_ParamLimits

0x9ef3,	// (0x00047487) main_welc_pane_g1

0x9eff,	// (0x00047493) main_welc_pane_g2_ParamLimits

0x9eff,	// (0x00047493) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004d4f1) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004d4f1) main_welc_pane_g

0xa628,	// (0x00047bbc) listscroll_mce_pane_ParamLimits

0xb382,	// (0x00048916) wait_bar_pane_cp10

0xc795,	// (0x00049d29) main_cale_day_pane_ParamLimits

0xc795,	// (0x00049d29) main_cale_week_pane_ParamLimits

0xa628,	// (0x00047bbc) main_messa_pane_ParamLimits

0x6756,	// (0x00043cea) main_clock2_btn_pane_ParamLimits

0x6756,	// (0x00043cea) main_clock2_btn_pane

0xcf93,	// (0x0004a527) main_clock2_btn_pane_cp01_ParamLimits

0xcf93,	// (0x0004a527) main_clock2_btn_pane_cp01

0xe91f,	// (0x0004beb3) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0004c3d9) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004d44b) main_cf0_pane_g

0x9bc1,	// (0x00047155) area_left_week_number_pane_ParamLimits

0x9bd4,	// (0x00047168) area_top_day_name_pane_ParamLimits

0x9be2,	// (0x00047176) frame_month_view_pane_ParamLimits

0xef6c,	// (0x0004c500) grid_month_view_pane_ParamLimits

0xef7a,	// (0x0004c50e) frm_month_g1_ParamLimits

0x9c60,	// (0x000471f4) frm_month_g2_ParamLimits

0x9c71,	// (0x00047205) frm_month_g3_ParamLimits

0x9c82,	// (0x00047216) frm_month_g4_ParamLimits

0x9c93,	// (0x00047227) frm_month_g5_ParamLimits

0x9ca6,	// (0x0004723a) frm_month_g6_ParamLimits

0x9cb9,	// (0x0004724d) frm_month_g7_ParamLimits

0xef87,	// (0x0004c51b) frm_month_g8_ParamLimits

0x9ccc,	// (0x00047260) frm_month_g9_ParamLimits

0x9cd9,	// (0x0004726d) frm_month_g10_ParamLimits

0x9ce6,	// (0x0004727a) frm_month_g11_ParamLimits

0x9cf3,	// (0x00047287) frm_month_g12_ParamLimits

0x9d00,	// (0x00047294) frm_month_g13_ParamLimits

0x9d0d,	// (0x000472a1) frm_month_g14_ParamLimits

0x9d1c,	// (0x000472b0) frm_month_g15_ParamLimits

0x9d2b,	// (0x000472bf) frm_month_g16_ParamLimits

0xff08,	// (0x0004d49c) frm_month_g_ParamLimits

0xef94,	// (0x0004c528) cell_top_day_name_pane_t1_ParamLimits

0x9d3a,	// (0x000472ce) cell_area_left_week_number_pane_g1_ParamLimits

0x9d49,	// (0x000472dd) cell_area_left_week_number_pane_t1_ParamLimits

0xce0b,	// (0x0004a39f) cell_month_view_pane_g1_ParamLimits

0x9d5f,	// (0x000472f3) cell_month_view_pane_t1_ParamLimits

0xa620,	// (0x00047bb4) main_clock2_btn_pane_g1

0xf0b8,	// (0x0004c64c) main_clock2_btn_pane_t1

0xade7,	// (0x0004837b) listscroll_cmail_pane_ParamLimits

0xe6f1,	// (0x0004bc85) main_sp_fs_email_pane_g1_ParamLimits

0xe6fd,	// (0x0004bc91) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004d279) main_sp_fs_email_pane_g_ParamLimits

0xeabd,	// (0x0004c051) list_recal_day_pane_ParamLimits

0xeace,	// (0x0004c062) mian_recal_day_pane_t1

0x18a0,	// (0x0003ee34) list_single_dyc_row_text_pane_t4_ParamLimits

0x18a0,	// (0x0003ee34) list_single_dyc_row_text_pane_t4

0x18d7,	// (0x0003ee6b) list_single_dyc_row_text_pane_t5_ParamLimits

0x18d7,	// (0x0003ee6b) list_single_dyc_row_text_pane_t5

0x194d,	// (0x0003eee1) list_single_dyc_row_text_pane_t6_ParamLimits

0x194d,	// (0x0003eee1) list_single_dyc_row_text_pane_t6

0xad01,	// (0x00048295) aid_mgn_list_cale_time_pane

0xade7,	// (0x0004837b) main_gallery2_pane_ParamLimits

0xcfa9,	// (0x0004a53d) main_clock2_pane_cp01_t1

0xcfb7,	// (0x0004a54b) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004cd58) main_clock2_pane_cp01_t

0x2b22,	// (0x000400b6) cale_week_scroll_pane_g16_ParamLimits

0x2b22,	// (0x000400b6) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
