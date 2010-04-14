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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006c48e };

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
0x00b9,	// (0x0006c547) Screen

0x00c5,	// (0x0006c553) application_window

0x0111,	// (0x0006c59f) area_bottom_pane_ParamLimits

0x0111,	// (0x0006c59f) area_bottom_pane

0x014a,	// (0x0006c5d8) area_top_pane_ParamLimits

0x014a,	// (0x0006c5d8) area_top_pane

0x90cf,	// (0x0007555d) call_video_uplink_pane_ParamLimits

0x90cf,	// (0x0007555d) call_video_uplink_pane

0x01d8,	// (0x0006c666) main_pane_ParamLimits

0x01d8,	// (0x0006c666) main_pane

0xc7af,	// (0x00078c3d) context_pane

0x36f5,	// (0x0006fb83) navi_pane

0x3727,	// (0x0006fbb5) popup_cale_events_window_ParamLimits

0x3727,	// (0x0006fbb5) popup_cale_events_window

0xc7c2,	// (0x00078c50) popup_mup_playback_window

0x373f,	// (0x0006fbcd) signal_pane

0x9fae,	// (0x0007643c) main_browser_pane

0xb373,	// (0x00077801) main_burst_pane

0x3453,	// (0x0006f8e1) main_calc_pane

0xc795,	// (0x00078c23) main_cale_day_pane

0x3467,	// (0x0006f8f5) main_cale_month_pane

0xc795,	// (0x00078c23) main_cale_week_pane

0xb373,	// (0x00077801) main_call_pane

0x9c6f,	// (0x000760fd) main_call_poc_pane

0xb373,	// (0x00077801) main_camera_pane

0xb373,	// (0x00077801) main_chi_dic_pane

0xb0fe,	// (0x0007758c) main_clock_pane

0x9c6f,	// (0x000760fd) main_fmradio_pane

0xb373,	// (0x00077801) main_graph_messa_pane

0x9c6f,	// (0x000760fd) main_help_pane

0x9fae,	// (0x0007643c) main_im_pane

0x9eca,	// (0x00076358) main_image_pane_ParamLimits

0x9eca,	// (0x00076358) main_image_pane

0x9c6f,	// (0x000760fd) main_location2_pane

0xb373,	// (0x00077801) main_location_pane

0x9eca,	// (0x00076358) main_messa_pane

0x9c6f,	// (0x000760fd) main_mp2_pane

0xb373,	// (0x00077801) main_mp_pane

0x9c6f,	// (0x000760fd) main_msg_pane

0x9c6f,	// (0x000760fd) main_mup_eq_pane

0x9c6f,	// (0x000760fd) main_mup_pane

0x9fae,	// (0x0007643c) main_notes_pane

0x9c6f,	// (0x000760fd) main_pec_pane

0x9c6f,	// (0x000760fd) main_phob_pane

0x9c6f,	// (0x000760fd) main_pinb_pane

0x9c6f,	// (0x000760fd) main_postcard_pane

0x9c6f,	// (0x000760fd) main_qdial_pane

0xb373,	// (0x00077801) main_skin_pane

0x9c6f,	// (0x000760fd) main_smil2_pane

0xb373,	// (0x00077801) main_smil_pane

0xb373,	// (0x00077801) main_video_pane

0xb373,	// (0x00077801) main_video_tele_pane

0x9eca,	// (0x00076358) main_viewer_pane_ParamLimits

0x9eca,	// (0x00076358) main_viewer_pane

0xb373,	// (0x00077801) main_vorec_pane

0x34b9,	// (0x0006f947) popup_blid_sat_info_window_ParamLimits

0x34b9,	// (0x0006f947) popup_blid_sat_info_window

0x3511,	// (0x0006f99f) popup_dyc_status_message_window_ParamLimits

0x3511,	// (0x0006f99f) popup_dyc_status_message_window

0x3529,	// (0x0006f9b7) popup_grid_large_graphic_window_ParamLimits

0x3529,	// (0x0006f9b7) popup_grid_large_graphic_window

0x35df,	// (0x0006fa6d) popup_loc_request_window_ParamLimits

0x35df,	// (0x0006fa6d) popup_loc_request_window

0x36cd,	// (0x0006fb5b) popup_wml_address_window_ParamLimits

0x36cd,	// (0x0006fb5b) popup_wml_address_window

0x328d,	// (0x0006f71b) call_muted_g1

0x2f40,	// (0x0006f3ce) popup_call_audio_conf_window_ParamLimits

0x2f40,	// (0x0006f3ce) popup_call_audio_conf_window

0x32a1,	// (0x0006f72f) popup_call_audio_first_window_ParamLimits

0x32a1,	// (0x0006f72f) popup_call_audio_first_window

0x3317,	// (0x0006f7a5) popup_call_audio_in_window_ParamLimits

0x3317,	// (0x0006f7a5) popup_call_audio_in_window

0x3353,	// (0x0006f7e1) popup_call_audio_out_window_ParamLimits

0x3353,	// (0x0006f7e1) popup_call_audio_out_window

0x338d,	// (0x0006f81b) popup_call_audio_second_window_ParamLimits

0x338d,	// (0x0006f81b) popup_call_audio_second_window

0x33e3,	// (0x0006f871) popup_call_audio_wait_window_ParamLimits

0x33e3,	// (0x0006f871) popup_call_audio_wait_window

0x3418,	// (0x0006f8a6) popup_number_entry_window_ParamLimits

0x3418,	// (0x0006f8a6) popup_number_entry_window

0x9105,	// (0x00075593) bg_popup_call_pane_cp05_ParamLimits

0x9105,	// (0x00075593) bg_popup_call_pane_cp05

0x9125,	// (0x000755b3) popup_number_entry_window_t1

0x9138,	// (0x000755c6) popup_number_entry_window_t2

0x914a,	// (0x000755d8) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007b554) popup_number_entry_window_t

0x915c,	// (0x000755ea) text_title_cp2

0x916f,	// (0x000755fd) bg_popup_call_pane_cp_ParamLimits

0x916f,	// (0x000755fd) bg_popup_call_pane_cp

0x917d,	// (0x0007560b) call_thumbnail_pane

0x9185,	// (0x00075613) popup_call_audio_in_window_g1_ParamLimits

0x9185,	// (0x00075613) popup_call_audio_in_window_g1

0x9191,	// (0x0007561f) popup_call_audio_in_window_g2_ParamLimits

0x9191,	// (0x0007561f) popup_call_audio_in_window_g2

0x919d,	// (0x0007562b) popup_call_audio_in_window_g3_ParamLimits

0x919d,	// (0x0007562b) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0007b55d) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0007b55d) popup_call_audio_in_window_g

0x91a9,	// (0x00075637) popup_call_audio_in_window_t1_ParamLimits

0x91a9,	// (0x00075637) popup_call_audio_in_window_t1

0x91c5,	// (0x00075653) popup_call_audio_in_window_t2_ParamLimits

0x91c5,	// (0x00075653) popup_call_audio_in_window_t2

0x91e1,	// (0x0007566f) popup_call_audio_in_window_t3_ParamLimits

0x91e1,	// (0x0007566f) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007b564) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007b564) popup_call_audio_in_window_t

0x916f,	// (0x000755fd) bg_popup_call_pane_cp01_ParamLimits

0x916f,	// (0x000755fd) bg_popup_call_pane_cp01

0x917d,	// (0x0007560b) call_thumbnail_pane_cp02

0x91f4,	// (0x00075682) call_type_pane_cp022

0x91fc,	// (0x0007568a) popup_call_audio_out_window_g1_ParamLimits

0x91fc,	// (0x0007568a) popup_call_audio_out_window_g1

0x920e,	// (0x0007569c) popup_call_audio_out_window_g2_ParamLimits

0x920e,	// (0x0007569c) popup_call_audio_out_window_g2

0x921a,	// (0x000756a8) popup_call_audio_out_window_g3_ParamLimits

0x921a,	// (0x000756a8) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0007b56b) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0007b56b) popup_call_audio_out_window_g

0x922c,	// (0x000756ba) popup_call_audio_out_window_t1_ParamLimits

0x922c,	// (0x000756ba) popup_call_audio_out_window_t1

0x9244,	// (0x000756d2) popup_call_audio_out_window_t2_ParamLimits

0x9244,	// (0x000756d2) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007b572) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007b572) popup_call_audio_out_window_t

0x9259,	// (0x000756e7) bg_popup_call_pane_ParamLimits

0x9259,	// (0x000756e7) bg_popup_call_pane

0x0395,	// (0x0006c823) call_thumbnail_pane_cp_ParamLimits

0x0395,	// (0x0006c823) call_thumbnail_pane_cp

0x92dd,	// (0x0007576b) call_type_pane_cp01_ParamLimits

0x92dd,	// (0x0007576b) call_type_pane_cp01

0x9321,	// (0x000757af) popup_call_audio_first_window_g1_ParamLimits

0x9321,	// (0x000757af) popup_call_audio_first_window_g1

0x936d,	// (0x000757fb) popup_call_audio_first_window_g2_ParamLimits

0x936d,	// (0x000757fb) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0007b577) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0007b577) popup_call_audio_first_window_g

0x93b1,	// (0x0007583f) popup_call_audio_first_window_t1_ParamLimits

0x93b1,	// (0x0007583f) popup_call_audio_first_window_t1

0x945d,	// (0x000758eb) popup_call_audio_first_window_t4_ParamLimits

0x945d,	// (0x000758eb) popup_call_audio_first_window_t4

0x94e9,	// (0x00075977) popup_call_audio_first_window_t5_ParamLimits

0x94e9,	// (0x00075977) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0007b57c) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0007b57c) popup_call_audio_first_window_t

0x9c6f,	// (0x000760fd) bg_popup_call_pane_cp02

0x9c79,	// (0x00076107) call_type_pane_cp023

0x9c81,	// (0x0007610f) popup_call_audio_wait_window_g1

0x9c89,	// (0x00076117) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007b583) popup_call_audio_wait_window_g

0x9c91,	// (0x0007611f) popup_call_audio_wait_window_t3

0x9c9f,	// (0x0007612d) bg_popup_call_pane_cp03_ParamLimits

0x9c9f,	// (0x0007612d) bg_popup_call_pane_cp03

0x9cff,	// (0x0007618d) call_thumbnail_pane_cp011_ParamLimits

0x9cff,	// (0x0007618d) call_thumbnail_pane_cp011

0x9d0b,	// (0x00076199) call_type_pane_cp034_ParamLimits

0x9d0b,	// (0x00076199) call_type_pane_cp034

0x9d47,	// (0x000761d5) popup_call_audio_second_window_g1_ParamLimits

0x9d47,	// (0x000761d5) popup_call_audio_second_window_g1

0x9d83,	// (0x00076211) popup_call_audio_second_window_g2_ParamLimits

0x9d83,	// (0x00076211) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0007b588) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0007b588) popup_call_audio_second_window_g

0x9dbf,	// (0x0007624d) popup_call_audio_second_window_t1_ParamLimits

0x9dbf,	// (0x0007624d) popup_call_audio_second_window_t1

0x9e40,	// (0x000762ce) popup_call_audio_second_window_t2_ParamLimits

0x9e40,	// (0x000762ce) popup_call_audio_second_window_t2

0x9e76,	// (0x00076304) popup_call_audio_second_window_t3_ParamLimits

0x9e76,	// (0x00076304) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0007b58d) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0007b58d) popup_call_audio_second_window_t

0x9c6f,	// (0x000760fd) bg_popup_call_pane_cp04

0x9eac,	// (0x0007633a) list_conf_pane

0x9eb4,	// (0x00076342) popup_call_audio_conf_window_t1

0x9ec2,	// (0x00076350) call_thumbnail_pane_g1

0x9eca,	// (0x00076358) bg_pinb_pane_ParamLimits

0x9eca,	// (0x00076358) bg_pinb_pane

0x9ed8,	// (0x00076366) find_pinb_pane

0x9ee1,	// (0x0007636f) listscroll_pinb_pane_ParamLimits

0x9ee1,	// (0x0007636f) listscroll_pinb_pane

0x9ef0,	// (0x0007637e) pinb_bg_pane_g1

0x03b9,	// (0x0006c847) pinb_bg_pane_g2

0x03c5,	// (0x0006c853) pinb_bg_pane_g3

0x03d1,	// (0x0006c85f) pinb_bg_pane_g4

0x03dd,	// (0x0006c86b) pinb_bg_pane_g5

0x03e9,	// (0x0006c877) pinb_bg_pane_g6

0x03f4,	// (0x0006c882) pinb_bg_pane_g7

0x03ff,	// (0x0006c88d) pinb_bg_pane_g8

0x040a,	// (0x0006c898) pinb_bg_pane_g9

0x0414,	// (0x0006c8a2) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007b594) pinb_bg_pane_g

0x0431,	// (0x0006c8bf) grid_pinb_pane

0x043a,	// (0x0006c8c8) list_pinb_pane

0x0443,	// (0x0006c8d1) scroll_pane_cp01_ParamLimits

0x0443,	// (0x0006c8d1) scroll_pane_cp01

0x9efa,	// (0x00076388) find_pinb_pane_g1_ParamLimits

0x9efa,	// (0x00076388) find_pinb_pane_g1

0x9f12,	// (0x000763a0) find_pinb_pane_t1

0x9f24,	// (0x000763b2) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0007b5ae) find_pinb_pane_t

0x9f39,	// (0x000763c7) input_focus_pane_cp01_ParamLimits

0x9f39,	// (0x000763c7) input_focus_pane_cp01

0x0455,	// (0x0006c8e3) cell_pinb_pane_ParamLimits

0x0455,	// (0x0006c8e3) cell_pinb_pane

0x9f45,	// (0x000763d3) cell_pinb_pane_g1_ParamLimits

0x9f45,	// (0x000763d3) cell_pinb_pane_g1

0x9f58,	// (0x000763e6) cell_pinb_pane_g2_ParamLimits

0x9f58,	// (0x000763e6) cell_pinb_pane_g2

0x9f64,	// (0x000763f2) cell_pinb_pane_g3_ParamLimits

0x9f64,	// (0x000763f2) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007b5b3) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007b5b3) cell_pinb_pane_g

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp01

0x0483,	// (0x0006c911) list_pinb_item_pane_ParamLimits

0x0483,	// (0x0006c911) list_pinb_item_pane

0x9c6f,	// (0x000760fd) list_highlight_pane_cp02

0x0496,	// (0x0006c924) list_pinb_item_pane_g1_ParamLimits

0x0496,	// (0x0006c924) list_pinb_item_pane_g1

0x04a3,	// (0x0006c931) list_pinb_item_pane_g2_ParamLimits

0x04a3,	// (0x0006c931) list_pinb_item_pane_g2

0x04af,	// (0x0006c93d) list_pinb_item_pane_g3_ParamLimits

0x04af,	// (0x0006c93d) list_pinb_item_pane_g3

0x04c0,	// (0x0006c94e) list_pinb_item_pane_g4_ParamLimits

0x04c0,	// (0x0006c94e) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0007b5ba) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0007b5ba) list_pinb_item_pane_g

0x04cc,	// (0x0006c95a) list_pinb_item_pane_t1_ParamLimits

0x04cc,	// (0x0006c95a) list_pinb_item_pane_t1

0x0501,	// (0x0006c98f) calc_display_pane

0x0529,	// (0x0006c9b7) calc_paper_pane

0x054c,	// (0x0006c9da) grid_calc_pane

0x9c6f,	// (0x000760fd) bg_list_pane_cp01

0x057a,	// (0x0006ca08) clock_g1

0x0582,	// (0x0006ca10) clock_g2

0x0001,

0xf135,	// (0x0007b5c3) clock_g

0x058a,	// (0x0006ca18) clock_t1_ParamLimits

0x058a,	// (0x0006ca18) clock_t1

0x059f,	// (0x0006ca2d) clock_t2_ParamLimits

0x059f,	// (0x0006ca2d) clock_t2

0x05b1,	// (0x0006ca3f) clock_t3_ParamLimits

0x05b1,	// (0x0006ca3f) clock_t3

0x05c3,	// (0x0006ca51) clock_t4_ParamLimits

0x05c3,	// (0x0006ca51) clock_t4

0x05d5,	// (0x0006ca63) clock_t5_ParamLimits

0x05d5,	// (0x0006ca63) clock_t5

0x05ea,	// (0x0006ca78) clock_t6_ParamLimits

0x05ea,	// (0x0006ca78) clock_t6

0x05fc,	// (0x0006ca8a) clock_t7_ParamLimits

0x05fc,	// (0x0006ca8a) clock_t7

0x060e,	// (0x0006ca9c) clock_t8_ParamLimits

0x060e,	// (0x0006ca9c) clock_t8

0x0622,	// (0x0006cab0) clock_t9_ParamLimits

0x0622,	// (0x0006cab0) clock_t9

0x0008,

0xf13a,	// (0x0007b5c8) clock_t_ParamLimits

0xf13a,	// (0x0007b5c8) clock_t

0x9f70,	// (0x000763fe) popup_clock_analogue_window_cp02

0x9f70,	// (0x000763fe) popup_clock_digital_window_cp01

0x9f78,	// (0x00076406) listscroll_help_pane

0x9c6f,	// (0x000760fd) phob_pre_status_pane

0x9f82,	// (0x00076410) grid_qdial_pane

0x9eca,	// (0x00076358) listscroll_mce_pane

0x9eca,	// (0x00076358) bg_notes_pane

0x9f8c,	// (0x0007641a) list_notes_pane

0x0636,	// (0x0006cac4) scroll_pane_cp06

0x9f9a,	// (0x00076428) bg_calc_paper_pane

0x9520,	// (0x000759ae) list_calc_pane

0x9fae,	// (0x0007643c) bg_calc_display_pane

0x064a,	// (0x0006cad8) calc_display_pane_t1

0x065c,	// (0x0006caea) calc_display_pane_t2

0x953a,	// (0x000759c8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0007b5db) calc_display_pane_t

0x066e,	// (0x0006cafc) cell_calc_pane_ParamLimits

0x066e,	// (0x0006cafc) cell_calc_pane

0x9fba,	// (0x00076448) bg_calc_paper_pane_g1

0x9fc6,	// (0x00076454) bg_calc_paper_pane_g2

0x9fd2,	// (0x00076460) bg_calc_paper_pane_g3

0x9fde,	// (0x0007646c) bg_calc_paper_pane_g4

0x9fea,	// (0x00076478) bg_calc_paper_pane_g5

0x06a5,	// (0x0006cb33) bg_calc_paper_pane_g6

0x06b6,	// (0x0006cb44) bg_calc_paper_pane_g7

0x06c7,	// (0x0006cb55) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0007b5e2) bg_calc_paper_pane_g

0x06da,	// (0x0006cb68) calc_bg_paper_pane_g9

0x06ed,	// (0x0006cb7b) list_calc_item_pane_ParamLimits

0x06ed,	// (0x0006cb7b) list_calc_item_pane

0x9ff6,	// (0x00076484) list_calc_item_pane_g1

0x954c,	// (0x000759da) list_calc_item_pane_t1_ParamLimits

0x954c,	// (0x000759da) list_calc_item_pane_t1

0x0707,	// (0x0006cb95) list_calc_item_pane_t2_ParamLimits

0x0707,	// (0x0006cb95) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0007b5f3) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0007b5f3) list_calc_item_pane_t

0xa003,	// (0x00076491) cell_calc_pane_g1

0xa00d,	// (0x0007649b) grid_highlight_pane_cp02

0xa02f,	// (0x000764bd) bg_calc_display_pane_g1

0x955e,	// (0x000759ec) bg_calc_display_pane_g2

0xa038,	// (0x000764c6) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0007b5fd) bg_calc_display_pane_g

0x0739,	// (0x0006cbc7) cell_qdial_pane_ParamLimits

0x0739,	// (0x0006cbc7) cell_qdial_pane

0x074d,	// (0x0006cbdb) cell_qdial_pane_g1_ParamLimits

0x074d,	// (0x0006cbdb) cell_qdial_pane_g1

0x0763,	// (0x0006cbf1) cell_qdial_pane_g2_ParamLimits

0x0763,	// (0x0006cbf1) cell_qdial_pane_g2

0xa041,	// (0x000764cf) cell_qdial_pane_g3_ParamLimits

0xa041,	// (0x000764cf) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0007b604) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0007b604) cell_qdial_pane_g

0x0789,	// (0x0006cc17) cell_qdial_pane_t1_ParamLimits

0x0789,	// (0x0006cc17) cell_qdial_pane_t1

0x07a1,	// (0x0006cc2f) cell_qdial_pane_t2_ParamLimits

0x07a1,	// (0x0006cc2f) cell_qdial_pane_t2

0x07b4,	// (0x0006cc42) cell_qdial_pane_t3_ParamLimits

0x07b4,	// (0x0006cc42) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0007b60d) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0007b60d) cell_qdial_pane_t

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp04

0xa04d,	// (0x000764db) thumbnail_qdial_pane_ParamLimits

0xa04d,	// (0x000764db) thumbnail_qdial_pane

0xa0a9,	// (0x00076537) list_help_pane

0xa0b2,	// (0x00076540) scroll_pane_cp02

0x07c7,	// (0x0006cc55) help_list_pane_t1_ParamLimits

0x07c7,	// (0x0006cc55) help_list_pane_t1

0x9568,	// (0x000759f6) bg_notes_pane_g2

0x9570,	// (0x000759fe) bg_notes_pane_g3

0x9578,	// (0x00075a06) notes_bg_pane_g1

0x9580,	// (0x00075a0e) notes_bg_pane_g4

0x9588,	// (0x00075a16) notes_bg_pane_g5

0x9590,	// (0x00075a1e) notes_bg_pane_g6

0x9598,	// (0x00075a26) notes_bg_pane_g7

0x95a0,	// (0x00075a2e) notes_bg_pane_g8

0x95a8,	// (0x00075a36) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0007b62b) notes_bg_pane_g

0x07e6,	// (0x0006cc74) list_notes_text_pane_ParamLimits

0x07e6,	// (0x0006cc74) list_notes_text_pane

0xa0bb,	// (0x00076549) list_notes_text_pane_g1

0x95b0,	// (0x00075a3e) list_notes_text_pane_t1

0x07fc,	// (0x0006cc8a) listscroll_cale_week_pane

0x0828,	// (0x0006ccb6) bg_cale_heading_pane

0xa860,	// (0x00076cee) bg_cale_pane_cp01

0x0846,	// (0x0006ccd4) cale_week_corner_pane

0x0865,	// (0x0006ccf3) cale_week_day_heading_pane

0x0888,	// (0x0006cd16) cale_week_scroll_pane_g1

0x08a1,	// (0x0006cd2f) cale_week_scroll_pane_g2

0x08b9,	// (0x0006cd47) cale_week_scroll_pane_g3

0x08d1,	// (0x0006cd5f) cale_week_scroll_pane_g4

0x08e9,	// (0x0006cd77) cale_week_scroll_pane_g5

0x0905,	// (0x0006cd93) cale_week_scroll_pane_g6

0x0925,	// (0x0006cdb3) cale_week_scroll_pane_g7

0x0945,	// (0x0006cdd3) cale_week_scroll_pane_g8

0x0969,	// (0x0006cdf7) cale_week_scroll_pane_g9

0x0981,	// (0x0006ce0f) cale_week_scroll_pane_g10

0x0999,	// (0x0006ce27) cale_week_scroll_pane_g11

0x09b1,	// (0x0006ce3f) cale_week_scroll_pane_g12

0x09c9,	// (0x0006ce57) cale_week_scroll_pane_g13

0x09c9,	// (0x0006ce57) cale_week_scroll_pane_g14

0x09c9,	// (0x0006ce57) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0007b63a) cale_week_scroll_pane_g

0x0a05,	// (0x0006ce93) cale_week_time_pane

0x0a29,	// (0x0006ceb7) grid_cale_week_pane

0xa890,	// (0x00076d1e) scroll_pane_cp08

0x0a4f,	// (0x0006cedd) cell_cale_week_pane_ParamLimits

0x0a4f,	// (0x0006cedd) cell_cale_week_pane

0x0add,	// (0x0006cf6b) cale_week_day_heading_pane_t1

0x0b27,	// (0x0006cfb5) cale_week_day_heading_pane_t2

0x0b76,	// (0x0006d004) cale_week_day_heading_pane_t3

0x0bc5,	// (0x0006d053) cale_week_day_heading_pane_t4

0x0c14,	// (0x0006d0a2) cale_week_day_heading_pane_t5

0x0c6b,	// (0x0006d0f9) cale_week_day_heading_pane_t6

0x0cc2,	// (0x0006d150) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0007b65b) cale_week_day_heading_pane_t

0xa8ad,	// (0x00076d3b) bg_cale_side_pane

0x0d0c,	// (0x0006d19a) cale_week_time_pane_t1

0x0d26,	// (0x0006d1b4) cale_week_time_pane_t2

0x0d40,	// (0x0006d1ce) cale_week_time_pane_t3

0x0d5a,	// (0x0006d1e8) cale_week_time_pane_t4

0x0d74,	// (0x0006d202) cale_week_time_pane_t5

0x0d8e,	// (0x0006d21c) cale_week_time_pane_t6

0x0da8,	// (0x0006d236) cale_week_time_pane_t7

0x0dc8,	// (0x0006d256) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0007b66a) cale_week_time_pane_t

0x0de8,	// (0x0006d276) cell_cale_week_pane_g2

0x0e0c,	// (0x0006d29a) cell_cale_week_pane_g3_ParamLimits

0x0e0c,	// (0x0006d29a) cell_cale_week_pane_g3

0xa8bb,	// (0x00076d49) grid_highlight_pane_cp07

0xa8c3,	// (0x00076d51) listscroll_gms_pane

0xa8cd,	// (0x00076d5b) grid_gms_pane

0xa8d6,	// (0x00076d64) listscroll_gms_pane_g1

0xa8de,	// (0x00076d6c) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0007b67b) listscroll_gms_pane_g

0x0e24,	// (0x0006d2b2) scroll_pane_cp010

0x0e2f,	// (0x0006d2bd) cell_gms_pane_ParamLimits

0x0e2f,	// (0x0006d2bd) cell_gms_pane

0x0e41,	// (0x0006d2cf) cell_gms_pane_g1

0xa8e6,	// (0x00076d74) cell_gms_pane_g2

0xa0bb,	// (0x00076549) cell_gms_pane_g3

0xa8ee,	// (0x00076d7c) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0007b680) cell_gms_pane_g

0xa8f7,	// (0x00076d85) grid_highlight_pane_cp09

0x3237,	// (0x0006f6c5) phob_pre_status_pane_g1

0x323f,	// (0x0006f6cd) phob_pre_status_pane_g2

0x3247,	// (0x0006f6d5) phob_pre_status_pane_g3

0x324f,	// (0x0006f6dd) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007ba6f) phob_pre_status_pane_g

0x325f,	// (0x0006f6ed) phob_pre_status_pane_t1

0x326d,	// (0x0006f6fb) phob_pre_status_pane_t2

0x327d,	// (0x0006f70b) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007ba7a) phob_pre_status_pane_t

0x9c6f,	// (0x000760fd) bg_list_pane_cp05

0x0e51,	// (0x0006d2df) grid_vorec_pane

0x0e5b,	// (0x0006d2e9) vorec_t1

0x0e69,	// (0x0006d2f7) vorec_t2

0x0e77,	// (0x0006d305) vorec_t3

0x0e85,	// (0x0006d313) vorec_t4

0x95be,	// (0x00075a4c) vorec_t5

0x0e93,	// (0x0006d321) vorec_t6

0x0006,

0xf1fb,	// (0x0007b689) vorec_t

0x0eaf,	// (0x0006d33d) wait_bar_pane_cp01

0x0eb7,	// (0x0006d345) cell_vorec_pane_ParamLimits

0x0eb7,	// (0x0006d345) cell_vorec_pane

0x95cc,	// (0x00075a5a) cell_vorec_pane_g1

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp05

0x0ee2,	// (0x0006d370) cams_zoom_pane

0x0ef1,	// (0x0006d37f) image_vga_pane

0x0f0b,	// (0x0006d399) main_camera_pane_g1

0x0f1d,	// (0x0006d3ab) main_camera_pane_g2

0x0f2d,	// (0x0006d3bb) main_camera_pane_g3

0x0f3f,	// (0x0006d3cd) main_camera_pane_g4

0x0f51,	// (0x0006d3df) main_camera_pane_g5

0x0f63,	// (0x0006d3f1) main_camera_pane_g6

0x0f75,	// (0x0006d403) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007b698) main_camera_pane_g

0x0f87,	// (0x0006d415) main_camera_pane_t1

0x0f9d,	// (0x0006d42b) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007b6a9) main_camera_pane_t

0x0fd9,	// (0x0006d467) cams_zoom_pane_cp_ParamLimits

0x0fd9,	// (0x0006d467) cams_zoom_pane_cp

0x1001,	// (0x0006d48f) image_cif_pane_ParamLimits

0x1001,	// (0x0006d48f) image_cif_pane

0x103c,	// (0x0006d4ca) image_subqcif_pane

0x1044,	// (0x0006d4d2) main_video_pane_g1_ParamLimits

0x1044,	// (0x0006d4d2) main_video_pane_g1

0x1068,	// (0x0006d4f6) main_video_pane_g2_ParamLimits

0x1068,	// (0x0006d4f6) main_video_pane_g2

0x109c,	// (0x0006d52a) main_video_pane_g3_ParamLimits

0x109c,	// (0x0006d52a) main_video_pane_g3

0x10ca,	// (0x0006d558) main_video_pane_g4_ParamLimits

0x10ca,	// (0x0006d558) main_video_pane_g4

0x10f8,	// (0x0006d586) main_video_pane_g5_ParamLimits

0x10f8,	// (0x0006d586) main_video_pane_g5

0xa90b,	// (0x00076d99) main_video_pane_g6_ParamLimits

0xa90b,	// (0x00076d99) main_video_pane_g6

0x0006,

0xf220,	// (0x0007b6ae) main_video_pane_g_ParamLimits

0xf220,	// (0x0007b6ae) main_video_pane_g

0x1121,	// (0x0006d5af) main_video_pane_t1_ParamLimits

0x1121,	// (0x0006d5af) main_video_pane_t1

0xa925,	// (0x00076db3) cams_zoom_pane_g1

0xa92e,	// (0x00076dbc) cams_zoom_pane_g2

0xa937,	// (0x00076dc5) cams_zoom_pane_g3

0xa940,	// (0x00076dce) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007b6bd) cams_zoom_pane_g

0x117e,	// (0x0006d60c) grid_cams_pane

0x1198,	// (0x0006d626) linegrid_cams_pane

0x11ab,	// (0x0006d639) cell_cams_pane_ParamLimits

0x11ab,	// (0x0006d639) cell_cams_pane

0xa949,	// (0x00076dd7) cams_burst_image_pane

0xa951,	// (0x00076ddf) cell_cams_pane_g1

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp03

0xa003,	// (0x00076491) mp_bg_pane_g1

0x9c6f,	// (0x000760fd) bg_list_pane_cp03

0xc6ba,	// (0x00078b48) bg_mp_pane

0xc6c2,	// (0x00078b50) grid_mp_pane

0xc6ca,	// (0x00078b58) media_player_g1

0xc6d2,	// (0x00078b60) media_player_t1

0xc6e0,	// (0x00078b6e) media_player_t2

0xc6ee,	// (0x00078b7c) media_player_t3

0xc6fc,	// (0x00078b8a) media_player_t4

0xc70a,	// (0x00078b98) media_player_t5

0xc718,	// (0x00078ba6) media_player_t6

0xc726,	// (0x00078bb4) media_player_t7

0x0006,

0xf5cb,	// (0x0007ba59) media_player_t

0xc734,	// (0x00078bc2) wait_bar_pane_cp02

0xf5b0,	// (0x0007ba3e) main_usb_pane_t

0x322e,	// (0x0006f6bc) cell_mp_pane

0xa003,	// (0x00076491) cell_mp_pane_g1

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp06

0xa959,	// (0x00076de7) grid_skin_colour_pane

0xa961,	// (0x00076def) list_highlight_pane_cp03

0x1241,	// (0x0006d6cf) skin_g1

0xa969,	// (0x00076df7) skin_t1

0xa978,	// (0x00076e06) skin_t2

0x0001,

0xf264,	// (0x0007b6f2) skin_t

0x1249,	// (0x0006d6d7) cell_skin_colour_pane_ParamLimits

0x1249,	// (0x0006d6d7) cell_skin_colour_pane

0xa986,	// (0x00076e14) cell_skin_colour_pane_g1

0x12c2,	// (0x0006d750) call_video_g1_ParamLimits

0x12c2,	// (0x0006d750) call_video_g1

0x12de,	// (0x0006d76c) call_video_g2_ParamLimits

0x12de,	// (0x0006d76c) call_video_g2

0x0001,

0xf269,	// (0x0007b6f7) call_video_g_ParamLimits

0xf269,	// (0x0007b6f7) call_video_g

0x1330,	// (0x0006d7be) call_video_uplink_pane_cp1_ParamLimits

0x1330,	// (0x0006d7be) call_video_uplink_pane_cp1

0xa998,	// (0x00076e26) call_video_uplink_pane_cp2

0x13cf,	// (0x0006d85d) video_down_crop_pane_ParamLimits

0x13cf,	// (0x0006d85d) video_down_crop_pane

0x14b8,	// (0x0006d946) video_down_pane_ParamLimits

0x14b8,	// (0x0006d946) video_down_pane

0xa9a0,	// (0x00076e2e) video_down_subqcif_pane_ParamLimits

0xa9a0,	// (0x00076e2e) video_down_subqcif_pane

0xa9b8,	// (0x00076e46) video_down_subqcif_pane_cp_ParamLimits

0xa9b8,	// (0x00076e46) video_down_subqcif_pane_cp

0xa9de,	// (0x00076e6c) im_reading_pane_ParamLimits

0xa9de,	// (0x00076e6c) im_reading_pane

0x15c6,	// (0x0006da54) im_writing_pane_ParamLimits

0x15c6,	// (0x0006da54) im_writing_pane

0x15dc,	// (0x0006da6a) im_reading_pane_t1

0xa9f8,	// (0x00076e86) list_im_pane

0xaa09,	// (0x00076e97) scroll_pane_cp07

0x1619,	// (0x0006daa7) im_writing_pane_t1_ParamLimits

0x1619,	// (0x0006daa7) im_writing_pane_t1

0xaa22,	// (0x00076eb0) im_writing_pane_t2_ParamLimits

0xaa22,	// (0x00076eb0) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007b701) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007b701) im_writing_pane_t

0x9c6f,	// (0x000760fd) input_focus_pane_cp04

0x9c6f,	// (0x000760fd) input_focus_pane_cp05

0x162e,	// (0x0006dabc) list_im_single_pane_ParamLimits

0x162e,	// (0x0006dabc) list_im_single_pane

0x1644,	// (0x0006dad2) list_single_im_pane_t1

0x31ee,	// (0x0006f67c) blid_accuracy_pane

0x31f6,	// (0x0006f684) blid_compass_pane

0x3200,	// (0x0006f68e) main_location_t1

0x3210,	// (0x0006f69e) main_location_t2

0x3220,	// (0x0006f6ae) main_location_t3

0x0002,

0xf5da,	// (0x0007ba68) main_location_t

0x9c6f,	// (0x000760fd) aid_levels_location

0xa003,	// (0x00076491) blid_accuracy_pane_g1

0xa003,	// (0x00076491) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007b763) blid_accuracy_pane_g

0xaa6a,	// (0x00076ef8) wml_content_pane

0xaaa8,	// (0x00076f36) wml_button_pane_ParamLimits

0xaaa8,	// (0x00076f36) wml_button_pane

0x1653,	// (0x0006dae1) wml_list_single_large_pane_ParamLimits

0x1653,	// (0x0006dae1) wml_list_single_large_pane

0x1669,	// (0x0006daf7) wml_list_single_medium_pane_ParamLimits

0x1669,	// (0x0006daf7) wml_list_single_medium_pane

0x1683,	// (0x0006db11) wml_list_single_small_pane_ParamLimits

0x1683,	// (0x0006db11) wml_list_single_small_pane

0xaabc,	// (0x00076f4a) wml_selection_box_pane_ParamLimits

0xaabc,	// (0x00076f4a) wml_selection_box_pane

0xaacf,	// (0x00076f5d) wml_list_single_pane_t1

0xaade,	// (0x00076f6c) wml_list_single_medium_pane_t1

0xaaed,	// (0x00076f7b) wml_list_single_large_pane_t1

0xaafc,	// (0x00076f8a) input_focus_pane_cp02_ParamLimits

0xaafc,	// (0x00076f8a) input_focus_pane_cp02

0xab0f,	// (0x00076f9d) wml_selection_box_pane_g1

0xab18,	// (0x00076fa6) wml_selection_box_pane_t1_ParamLimits

0xab18,	// (0x00076fa6) wml_selection_box_pane_t1

0x9eca,	// (0x00076358) bg_wml_button_pane_ParamLimits

0x9eca,	// (0x00076358) bg_wml_button_pane

0xab30,	// (0x00076fbe) wml_button_pane_g1

0xab38,	// (0x00076fc6) wml_button_pane_t1

0xab30,	// (0x00076fbe) wml_button_bg_pane_g1

0xab48,	// (0x00076fd6) wml_button_bg_pane_g2

0xab50,	// (0x00076fde) wml_button_bg_pane_g3

0xab58,	// (0x00076fe6) wml_button_bg_pane_g4

0xab60,	// (0x00076fee) wml_button_bg_pane_g5

0xab68,	// (0x00076ff6) wml_button_bg_pane_g6

0xab70,	// (0x00076ffe) wml_button_bg_pane_g7

0xab78,	// (0x00077006) wml_button_bg_pane_g8

0xab80,	// (0x0007700e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007b706) wml_button_bg_pane_g

0x169d,	// (0x0006db2b) bg_list_pane_cp02

0xab88,	// (0x00077016) mce_header_pane_ParamLimits

0xab88,	// (0x00077016) mce_header_pane

0xab9e,	// (0x0007702c) mce_icon_pane

0xab9e,	// (0x0007702c) mce_image_pane

0xaba7,	// (0x00077035) mce_text_pane_ParamLimits

0xaba7,	// (0x00077035) mce_text_pane

0x16a5,	// (0x0006db33) scroll_pane_cp03

0xaaa0,	// (0x00076f2e) scroll_pane_cp04

0xabba,	// (0x00077048) scroll_pane_cp05_ParamLimits

0xabba,	// (0x00077048) scroll_pane_cp05

0x16af,	// (0x0006db3d) mce_header_field_pane_ParamLimits

0x16af,	// (0x0006db3d) mce_header_field_pane

0x16c6,	// (0x0006db54) mce_header_field_pane_2_ParamLimits

0x16c6,	// (0x0006db54) mce_header_field_pane_2

0x16dc,	// (0x0006db6a) mce_header_field_pane_3

0x16e4,	// (0x0006db72) list_single_mce_message_pane_ParamLimits

0x16e4,	// (0x0006db72) list_single_mce_message_pane

0x16fb,	// (0x0006db89) list_single_mce_smart_pane_ParamLimits

0x16fb,	// (0x0006db89) list_single_mce_smart_pane

0xabc6,	// (0x00077054) input_focus_pane_cp03

0xabcf,	// (0x0007705d) list_header_data_pane

0x171d,	// (0x0006dbab) mce_header_field_pane_t1

0x172d,	// (0x0006dbbb) list_single_mce_header_pane_ParamLimits

0x172d,	// (0x0006dbbb) list_single_mce_header_pane

0xabd7,	// (0x00077065) list_single_mce_header_pane_t1

0xabe6,	// (0x00077074) list_single_mce_message_pane_g1

0xabee,	// (0x0007707c) list_single_mce_message_pane_t1

0x1767,	// (0x0006dbf5) bg_cale_heading_pane_cp01_ParamLimits

0x1767,	// (0x0006dbf5) bg_cale_heading_pane_cp01

0xabfc,	// (0x0007708a) bg_cale_pane_cp02_ParamLimits

0xabfc,	// (0x0007708a) bg_cale_pane_cp02

0x17a2,	// (0x0006dc30) cale_month_corner_pane

0x17c1,	// (0x0006dc4f) cale_month_day_heading_pane_ParamLimits

0x17c1,	// (0x0006dc4f) cale_month_day_heading_pane

0x1814,	// (0x0006dca2) cale_month_pane_g1_ParamLimits

0x1814,	// (0x0006dca2) cale_month_pane_g1

0x1844,	// (0x0006dcd2) cale_month_pane_g2_ParamLimits

0x1844,	// (0x0006dcd2) cale_month_pane_g2

0x1874,	// (0x0006dd02) cale_month_pane_g3_ParamLimits

0x1874,	// (0x0006dd02) cale_month_pane_g3

0x18b0,	// (0x0006dd3e) cale_month_pane_g4_ParamLimits

0x18b0,	// (0x0006dd3e) cale_month_pane_g4

0x18ec,	// (0x0006dd7a) cale_month_pane_g5_ParamLimits

0x18ec,	// (0x0006dd7a) cale_month_pane_g5

0x1934,	// (0x0006ddc2) cale_month_pane_g6_ParamLimits

0x1934,	// (0x0006ddc2) cale_month_pane_g6

0x1980,	// (0x0006de0e) cale_month_pane_g7_ParamLimits

0x1980,	// (0x0006de0e) cale_month_pane_g7

0x19d4,	// (0x0006de62) cale_month_pane_g8_ParamLimits

0x19d4,	// (0x0006de62) cale_month_pane_g8

0x1a28,	// (0x0006deb6) cale_month_pane_g9_ParamLimits

0x1a28,	// (0x0006deb6) cale_month_pane_g9

0x1a7a,	// (0x0006df08) cale_month_pane_g10_ParamLimits

0x1a7a,	// (0x0006df08) cale_month_pane_g10

0x1acc,	// (0x0006df5a) cale_month_pane_g11_ParamLimits

0x1acc,	// (0x0006df5a) cale_month_pane_g11

0x1b1e,	// (0x0006dfac) cale_month_pane_g12_ParamLimits

0x1b1e,	// (0x0006dfac) cale_month_pane_g12

0x1b70,	// (0x0006dffe) cale_month_pane_g13_ParamLimits

0x1b70,	// (0x0006dffe) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007b719) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007b719) cale_month_pane_g

0x1bc2,	// (0x0006e050) cale_month_week_pane

0x1be6,	// (0x0006e074) grid_cale_month_pane_ParamLimits

0x1be6,	// (0x0006e074) grid_cale_month_pane

0x1c24,	// (0x0006e0b2) cale_month_day_heading_pane_t1

0x1caa,	// (0x0006e138) cale_month_day_heading_pane_t2

0x1d3b,	// (0x0006e1c9) cale_month_day_heading_pane_t3

0x1dcc,	// (0x0006e25a) cale_month_day_heading_pane_t4

0x1e65,	// (0x0006e2f3) cale_month_day_heading_pane_t5

0x1f06,	// (0x0006e394) cale_month_day_heading_pane_t6

0x1fa7,	// (0x0006e435) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007b734) cale_month_day_heading_pane_t

0xa8ad,	// (0x00076d3b) bg_cale_side_pane_cp01

0x2050,	// (0x0006e4de) cale_month_week_pane_t1

0x2069,	// (0x0006e4f7) cale_month_week_pane_t2

0x2082,	// (0x0006e510) cale_month_week_pane_t3

0x209b,	// (0x0006e529) cale_month_week_pane_t4

0x20b4,	// (0x0006e542) cale_month_week_pane_t5

0x20cd,	// (0x0006e55b) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007b743) cale_month_week_pane_t

0x20e6,	// (0x0006e574) cell_cale_month_pane_ParamLimits

0x20e6,	// (0x0006e574) cell_cale_month_pane

0x9603,	// (0x00075a91) cell_cale_month_pane_g1

0x2214,	// (0x0006e6a2) cell_cale_month_pane_t1_ParamLimits

0x2214,	// (0x0006e6a2) cell_cale_month_pane_t1

0xa8bb,	// (0x00076d49) grid_highlight_pane_cp08

0xa003,	// (0x00076491) main_smil_g1

0x2234,	// (0x0006e6c2) smil_status_pane

0xac3b,	// (0x000770c9) smil_text_pane

0xc5da,	// (0x00078a68) bg_popup_call3_rect_pane_g8

0xc5e2,	// (0x00078a70) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007b9fc) bg_popup_call3_rect_pane_g

0xc829,	// (0x00078cb7) smil_status_volume_pane_g1

0xac45,	// (0x000770d3) smil_status_pane_t1

0x974d,	// (0x00075bdb) volume_smil_pane

0xac5c,	// (0x000770ea) list_smil_text_pane

0x2249,	// (0x0006e6d7) scroll_pane_cp011

0x2254,	// (0x0006e6e2) smil_text_list_pane_t1_ParamLimits

0x2254,	// (0x0006e6e2) smil_text_list_pane_t1

0x960f,	// (0x00075a9d) aid_volume_smil_ParamLimits

0x960f,	// (0x00075a9d) aid_volume_smil

0xa003,	// (0x00076491) smil_volume_pane_g1

0xa003,	// (0x00076491) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007b763) smil_volume_pane_g

0x07fc,	// (0x0006cc8a) listscroll_cale_day_pane

0xac66,	// (0x000770f4) bg_cale_pane

0xac7e,	// (0x0007710c) list_cale_pane

0xaca1,	// (0x0007712f) scroll_pane_cp09

0xacb2,	// (0x00077140) cale_bg_pane_g1

0xacba,	// (0x00077148) cale_bg_pane_g2

0xacc2,	// (0x00077150) cale_bg_pane_g3

0xacca,	// (0x00077158) cale_bg_pane_g4

0xacd2,	// (0x00077160) cale_bg_pane_g5

0xacda,	// (0x00077168) cale_bg_pane_g6

0xace2,	// (0x00077170) cale_bg_pane_g7

0xacea,	// (0x00077178) cale_bg_pane_g8

0xacf2,	// (0x00077180) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007b768) cale_bg_pane_g

0x2296,	// (0x0006e724) list_cale_time_pane_ParamLimits

0x2296,	// (0x0006e724) list_cale_time_pane

0xad02,	// (0x00077190) list_cale_time_pane_g1_ParamLimits

0xad02,	// (0x00077190) list_cale_time_pane_g1

0xad0e,	// (0x0007719c) list_cale_time_pane_g2_ParamLimits

0xad0e,	// (0x0007719c) list_cale_time_pane_g2

0x22ad,	// (0x0006e73b) list_cale_time_pane_g3_ParamLimits

0x22ad,	// (0x0006e73b) list_cale_time_pane_g3

0x22bb,	// (0x0006e749) list_cale_time_pane_g4_ParamLimits

0x22bb,	// (0x0006e749) list_cale_time_pane_g4

0x22c9,	// (0x0006e757) list_cale_time_pane_g5_ParamLimits

0x22c9,	// (0x0006e757) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007b77b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007b77b) list_cale_time_pane_g

0xad28,	// (0x000771b6) list_cale_time_pane_t1_ParamLimits

0xad28,	// (0x000771b6) list_cale_time_pane_t1

0xad50,	// (0x000771de) list_cale_time_pane_t2_ParamLimits

0xad50,	// (0x000771de) list_cale_time_pane_t2

0x25c6,	// (0x0006ea54) aid_blid_cardinal_pane

0x2604,	// (0x0006ea92) compass_pane_t4

0xad78,	// (0x00077206) list_cale_time_pane_t4_ParamLimits

0xad78,	// (0x00077206) list_cale_time_pane_t4

0x2612,	// (0x0006eaa0) compass_pane_t5

0x2620,	// (0x0006eaae) compass_pane_t6

0x262e,	// (0x0006eabc) compass_pane_t7

0xb235,	// (0x000776c3) navi_pane_cc_t1

0xb43d,	// (0x000778cb) aid_phob_thumbnail_center_pane

0x2bfe,	// (0x0006f08c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007b788) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007b788) list_cale_time_pane_t

0x916f,	// (0x000755fd) bg_popup_window_pane_cp02_ParamLimits

0x916f,	// (0x000755fd) bg_popup_window_pane_cp02

0xada0,	// (0x0007722e) heading_pane_cp01_ParamLimits

0xada0,	// (0x0007722e) heading_pane_cp01

0xadac,	// (0x0007723a) loc_req_pane_ParamLimits

0xadac,	// (0x0007723a) loc_req_pane

0xadbc,	// (0x0007724a) loc_type_pane_ParamLimits

0xadbc,	// (0x0007724a) loc_type_pane

0xadce,	// (0x0007725c) loc_type_pane_t1_ParamLimits

0xadce,	// (0x0007725c) loc_type_pane_t1

0xade0,	// (0x0007726e) loc_type_pane_t2_ParamLimits

0xade0,	// (0x0007726e) loc_type_pane_t2

0xadf2,	// (0x00077280) loc_type_pane_t3_ParamLimits

0xadf2,	// (0x00077280) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007b78f) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007b78f) loc_type_pane_t

0xae04,	// (0x00077292) list_loc_req_pane

0xae0e,	// (0x0007729c) scroll_pane_cp012

0x22d7,	// (0x0006e765) list_single_loc_request_popup_menu_pane_ParamLimits

0x22d7,	// (0x0006e765) list_single_loc_request_popup_menu_pane

0xae19,	// (0x000772a7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae19,	// (0x000772a7) list_single_loc_request_popup_menu_pane_g1

0xae25,	// (0x000772b3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae25,	// (0x000772b3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007b796) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007b796) list_single_loc_request_popup_menu_pane_g

0xae31,	// (0x000772bf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae31,	// (0x000772bf) list_single_loc_request_popup_menu_pane_t1

0x9eca,	// (0x00076358) bg_popup_window_pane_cp03_ParamLimits

0x9eca,	// (0x00076358) bg_popup_window_pane_cp03

0xae47,	// (0x000772d5) heading_loc_req_pane_ParamLimits

0xae47,	// (0x000772d5) heading_loc_req_pane

0x22e4,	// (0x0006e772) popup_dyc_status_message_window_g1_ParamLimits

0x22e4,	// (0x0006e772) popup_dyc_status_message_window_g1

0x22f8,	// (0x0006e786) popup_dyc_status_message_window_t1_ParamLimits

0x22f8,	// (0x0006e786) popup_dyc_status_message_window_t1

0x230d,	// (0x0006e79b) popup_dyc_status_message_window_t2_ParamLimits

0x230d,	// (0x0006e79b) popup_dyc_status_message_window_t2

0x2322,	// (0x0006e7b0) popup_dyc_status_message_window_t3_ParamLimits

0x2322,	// (0x0006e7b0) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007b79b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007b79b) popup_dyc_status_message_window_t

0x9c6f,	// (0x000760fd) bg_heading_pane_cp01

0xae53,	// (0x000772e1) heading_loc_req_pane_g1

0xae5b,	// (0x000772e9) heading_loc_req_pane_g2

0xae63,	// (0x000772f1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007b7a2) heading_loc_req_pane_g

0xae6b,	// (0x000772f9) heading_loc_req_pane_t1

0xae7a,	// (0x00077308) bg_popup_sub_pane_cp01_ParamLimits

0xae7a,	// (0x00077308) bg_popup_sub_pane_cp01

0xae88,	// (0x00077316) popup_cale_events_window_g1_ParamLimits

0xae88,	// (0x00077316) popup_cale_events_window_g1

0xaea8,	// (0x00077336) popup_cale_events_window_g2_ParamLimits

0xaea8,	// (0x00077336) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007b7d6) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007b7d6) popup_cale_events_window_g

0xaec8,	// (0x00077356) popup_cale_events_window_t1_ParamLimits

0xaec8,	// (0x00077356) popup_cale_events_window_t1

0xaeda,	// (0x00077368) popup_cale_events_window_t2_ParamLimits

0xaeda,	// (0x00077368) popup_cale_events_window_t2

0xaf18,	// (0x000773a6) popup_cale_events_window_t3_ParamLimits

0xaf18,	// (0x000773a6) popup_cale_events_window_t3

0xaf52,	// (0x000773e0) popup_cale_events_window_t4_ParamLimits

0xaf52,	// (0x000773e0) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007b7db) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007b7db) popup_cale_events_window_t

0x23d4,	// (0x0006e862) call_type_pane

0x23e4,	// (0x0006e872) popup_call_status_window_g1

0x23f8,	// (0x0006e886) popup_call_status_window_g2

0x240c,	// (0x0006e89a) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007b7e4) popup_call_status_window_g

0xaf88,	// (0x00077416) call_type_pane_g1

0xaf91,	// (0x0007741f) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007b7eb) call_type_pane_g

0x9c6f,	// (0x000760fd) bg_popup_sub_pane_cp02

0xaf9a,	// (0x00077428) listscroll_popup_wml_pane

0xafa2,	// (0x00077430) list_wml_pane

0xafac,	// (0x0007743a) scroll_pane_cp013

0xafb7,	// (0x00077445) list_single_graphic_popup_wml_pane_ParamLimits

0xafb7,	// (0x00077445) list_single_graphic_popup_wml_pane

0xa003,	// (0x00076491) list_single_graphic_popup_wml_pane_g1

0xafcb,	// (0x00077459) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007b7f0) list_single_graphic_popup_wml_pane_g

0xafd3,	// (0x00077461) list_single_graphic_popup_wml_pane_t1

0xafe9,	// (0x00077477) aid_call_pane

0x9ec2,	// (0x00076350) popup_clock_analogue_window_g1

0x9ec2,	// (0x00076350) popup_clock_analogue_window_g2

0x9631,	// (0x00075abf) popup_clock_analogue_window_g3

0x9631,	// (0x00075abf) popup_clock_analogue_window_g4

0xa003,	// (0x00076491) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007b7f5) popup_clock_analogue_window_g

0x9639,	// (0x00075ac7) popup_clock_analogue_window_t1

0x9647,	// (0x00075ad5) clock_digital_number_pane_ParamLimits

0x9647,	// (0x00075ad5) clock_digital_number_pane

0x9653,	// (0x00075ae1) clock_digital_number_pane_cp02_ParamLimits

0x9653,	// (0x00075ae1) clock_digital_number_pane_cp02

0x965f,	// (0x00075aed) clock_digital_number_pane_cp03_ParamLimits

0x965f,	// (0x00075aed) clock_digital_number_pane_cp03

0x966b,	// (0x00075af9) clock_digital_number_pane_cp04_ParamLimits

0x966b,	// (0x00075af9) clock_digital_number_pane_cp04

0x967b,	// (0x00075b09) clock_digital_separator_pane_ParamLimits

0x967b,	// (0x00075b09) clock_digital_separator_pane

0x9687,	// (0x00075b15) popup_clock_digital_window_t1

0xa003,	// (0x00076491) clock_digital_number_pane_g1

0xa003,	// (0x00076491) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007b763) clock_digital_number_pane_g

0xa003,	// (0x00076491) clock_digital_separator_pane_g1

0xa003,	// (0x00076491) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007b763) clock_digital_separator_pane_g

0x9c6f,	// (0x000760fd) bg_popup_window_pane_cp04

0xaff1,	// (0x0007747f) heading_pane_cp03

0xaff9,	// (0x00077487) listscroll_popup_gms_pane

0xb001,	// (0x0007748f) grid_large_graphic_popup_pane

0xb00b,	// (0x00077499) listscroll_popup_gms_pane_g1

0xb013,	// (0x000774a1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007b800) listscroll_popup_gms_pane_g

0xaaa0,	// (0x00076f2e) scroll_pane_cp014

0xb01b,	// (0x000774a9) cell_large_graphic_popup_pane_ParamLimits

0xb01b,	// (0x000774a9) cell_large_graphic_popup_pane

0xb033,	// (0x000774c1) cell_large_graphic_popup_pane_g1_ParamLimits

0xb033,	// (0x000774c1) cell_large_graphic_popup_pane_g1

0xb03f,	// (0x000774cd) cell_large_graphic_popup_pane_g2_ParamLimits

0xb03f,	// (0x000774cd) cell_large_graphic_popup_pane_g2

0xb04b,	// (0x000774d9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb04b,	// (0x000774d9) cell_large_graphic_popup_pane_g3

0xb058,	// (0x000774e6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb058,	// (0x000774e6) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007b805) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007b805) cell_large_graphic_popup_pane_g

0xb068,	// (0x000774f6) grid_highlight_pane_cp010

0xa003,	// (0x00076491) bg_popup_call_pane_g1

0xb072,	// (0x00077500) list_single_graphic_popup_conf_pane_ParamLimits

0xb072,	// (0x00077500) list_single_graphic_popup_conf_pane

0xb085,	// (0x00077513) list_highlight_pane_cp01

0xb08e,	// (0x0007751c) list_single_graphic_popup_conf_pane_g1

0xb096,	// (0x00077524) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007b80e) list_single_graphic_popup_conf_pane_g

0xb09e,	// (0x0007752c) list_single_graphic_popup_conf_pane_t1

0xb0ac,	// (0x0007753a) linegrid_cams_pane_g1

0x241b,	// (0x0006e8a9) linegrid_cams_pane_g2

0xa0bb,	// (0x00076549) linegrid_cams_pane_g3

0xb0b5,	// (0x00077543) linegrid_cams_pane_g4

0x2424,	// (0x0006e8b2) linegrid_cams_pane_g5

0x242d,	// (0x0006e8bb) linegrid_cams_pane_g6

0xa8ee,	// (0x00076d7c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007b813) linegrid_cams_pane_g

0xb0be,	// (0x0007754c) popup_clock_analogue_window

0xb0be,	// (0x0007754c) popup_clock_digital_window

0x9c6f,	// (0x000760fd) popup_phob_thumbnail_window

0xa003,	// (0x00076491) call_video_uplink_pane_g1

0xb0c7,	// (0x00077555) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007b822) call_video_uplink_pane_g

0xa8bb,	// (0x00076d49) video_uplink_pane

0xb0cf,	// (0x0007755d) mce_image_pane_g1

0x2438,	// (0x0006e8c6) mce_image_pane_g2

0x2440,	// (0x0006e8ce) mce_image_pane_g3

0x2448,	// (0x0006e8d6) mce_image_pane_g4

0x2452,	// (0x0006e8e0) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007b827) mce_image_pane_g

0xb0d9,	// (0x00077567) control_top_pane_stacon_cp01_ParamLimits

0xb0d9,	// (0x00077567) control_top_pane_stacon_cp01

0xb0ed,	// (0x0007757b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0ed,	// (0x0007757b) uni_indicator_pane_stacon_cp01

0xb0fe,	// (0x0007758c) bg_popup_sub_pane_cp03

0x245a,	// (0x0006e8e8) chi_dic_find_pane

0x2462,	// (0x0006e8f0) listscroll_chi_dic_pane

0x246b,	// (0x0006e8f9) main_pane_chidic_g1

0xb108,	// (0x00077596) chi_dic_find_pane_t1

0xb116,	// (0x000775a4) find_chidic_pane

0xb11f,	// (0x000775ad) chi_dic_list_pane_ParamLimits

0xb11f,	// (0x000775ad) chi_dic_list_pane

0xb130,	// (0x000775be) scroll_pane_cp020

0xb138,	// (0x000775c6) find_chidic_pane_t1

0x9c6f,	// (0x000760fd) input_focus_pane_cp06

0x247e,	// (0x0006e90c) list_chi_dic_pane_ParamLimits

0x247e,	// (0x0006e90c) list_chi_dic_pane

0x2491,	// (0x0006e91f) list_chi_dic_pane_t1_ParamLimits

0x2491,	// (0x0006e91f) list_chi_dic_pane_t1

0x9c6f,	// (0x000760fd) list_highlight_pane_cp020

0xb147,	// (0x000775d5) bg_cale_heading_pane_g1

0x24a4,	// (0x0006e932) bg_cale_heading_pane_g2

0x24ac,	// (0x0006e93a) bg_cale_heading_pane_g3

0x24b4,	// (0x0006e942) bg_cale_heading_pane_g4

0x24be,	// (0x0006e94c) bg_cale_heading_pane_g5

0x24c8,	// (0x0006e956) bg_cale_heading_pane_g6

0x24d0,	// (0x0006e95e) bg_cale_heading_pane_g7

0x24d8,	// (0x0006e966) bg_cale_heading_pane_g8

0x24e2,	// (0x0006e970) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007b832) bg_cale_heading_pane_g

0xb147,	// (0x000775d5) bg_cale_side_pane_g1

0x24ec,	// (0x0006e97a) bg_cale_side_pane_g2

0x24f4,	// (0x0006e982) bg_cale_side_pane_g3

0x24fc,	// (0x0006e98a) bg_cale_side_pane_g4

0x2504,	// (0x0006e992) bg_cale_side_pane_g5

0x250c,	// (0x0006e99a) bg_cale_side_pane_g6

0x2514,	// (0x0006e9a2) bg_cale_side_pane_g7

0x251c,	// (0x0006e9aa) bg_cale_side_pane_g8

0x2524,	// (0x0006e9b2) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007b845) bg_cale_side_pane_g

0x252c,	// (0x0006e9ba) popup_call_status_window_ParamLimits

0x252c,	// (0x0006e9ba) popup_call_status_window

0xb14f,	// (0x000775dd) stacon_top_pane

0xb157,	// (0x000775e5) status_pane_ParamLimits

0xb157,	// (0x000775e5) status_pane

0xb16c,	// (0x000775fa) status_small_pane

0xb174,	// (0x00077602) control_pane

0x9c6f,	// (0x000760fd) stacon_bottom_pane

0xb17c,	// (0x0007760a) list_single_mce_smart_pane_t1_ParamLimits

0xb17c,	// (0x0007760a) list_single_mce_smart_pane_t1

0xb18f,	// (0x0007761d) list_single_mce_smart_pane_t2_ParamLimits

0xb18f,	// (0x0007761d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007b858) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007b858) list_single_mce_smart_pane_t

0x2573,	// (0x0006ea01) compass_pane

0x257c,	// (0x0006ea0a) main_location2_pane_t1

0x258e,	// (0x0006ea1c) main_location2_pane_t2

0x25a0,	// (0x0006ea2e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007b85d) main_location2_pane_t

0xb1ae,	// (0x0007763c) compass_pane_g1_ParamLimits

0xb1ae,	// (0x0007763c) compass_pane_g1

0x25e6,	// (0x0006ea74) compass_pane_t1

0x25f5,	// (0x0006ea83) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007b866) compass_pane_t

0x263c,	// (0x0006eaca) text_secondary_cp61

0xb22c,	// (0x000776ba) navi_pane_cams_g5

0xb2a8,	// (0x00077736) navi_pane_im_t1

0xb2b6,	// (0x00077744) navi_pane_mp_g1_ParamLimits

0xb2b6,	// (0x00077744) navi_pane_mp_g1

0xb2ca,	// (0x00077758) navi_pane_mp_g2_ParamLimits

0xb2ca,	// (0x00077758) navi_pane_mp_g2

0xb2d6,	// (0x00077764) navi_pane_mp_g3_ParamLimits

0xb2d6,	// (0x00077764) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007b87a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007b87a) navi_pane_mp_g

0xb2e2,	// (0x00077770) navi_pane_mp_t1

0xb2f0,	// (0x0007777e) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007b881) navi_pane_mp_t

0xb35b,	// (0x000777e9) navi_pane_vt_g1

0xb2e2,	// (0x00077770) navi_pane_vt_t1

0xb363,	// (0x000777f1) navi_slider_pane

0xb373,	// (0x00077801) zooming_pane

0xb37b,	// (0x00077809) navi_slider_pane_g1

0x96a4,	// (0x00075b32) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007b888) navi_slider_pane_g

0xb39f,	// (0x0007782d) aid_levels_zoom

0xb3a7,	// (0x00077835) zooming_pane_g1

0xb3af,	// (0x0007783d) zooming_pane_g2

0xb3af,	// (0x0007783d) zooming_pane_g3

0x0002,

0xf409,	// (0x0007b897) zooming_pane_g

0xb3b7,	// (0x00077845) level_10_zoom

0xb3c0,	// (0x0007784e) level_11_zoom

0xb3c9,	// (0x00077857) level_1_zoom

0xb3d2,	// (0x00077860) level_2_zoom

0xb3db,	// (0x00077869) level_3_zoom

0xb3e4,	// (0x00077872) level_4_zoom

0xb3ed,	// (0x0007787b) level_5_zoom

0xb419,	// (0x000778a7) level_6_zoom

0xb422,	// (0x000778b0) level_7_zoom

0xb42b,	// (0x000778b9) level_8_zoom

0xb434,	// (0x000778c2) level_9_zoom

0xb445,	// (0x000778d3) popup_phob_thumbnail_window_g1

0xb44d,	// (0x000778db) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007b89e) popup_phob_thumbnail_window_g

0xc73c,	// (0x00078bca) level_1_location

0xc744,	// (0x00078bd2) level_2_location

0xc74c,	// (0x00078bda) level_3_location

0xc754,	// (0x00078be2) level_4_location

0xb373,	// (0x00077801) level_5_location

0x268d,	// (0x0006eb1b) mce_icon_pane_g1

0x2697,	// (0x0006eb25) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007b8a3) mce_icon_pane_g

0x26a1,	// (0x0006eb2f) main_mup_pane_g1_ParamLimits

0x26a1,	// (0x0006eb2f) main_mup_pane_g1

0x26b7,	// (0x0006eb45) main_mup_pane_g2_ParamLimits

0x26b7,	// (0x0006eb45) main_mup_pane_g2

0x26cf,	// (0x0006eb5d) main_mup_pane_g3_ParamLimits

0x26cf,	// (0x0006eb5d) main_mup_pane_g3

0x26e7,	// (0x0006eb75) main_mup_pane_g4_ParamLimits

0x26e7,	// (0x0006eb75) main_mup_pane_g4

0x26ff,	// (0x0006eb8d) main_mup_pane_g5_ParamLimits

0x26ff,	// (0x0006eb8d) main_mup_pane_g5

0x271b,	// (0x0006eba9) main_mup_pane_g6_ParamLimits

0x271b,	// (0x0006eba9) main_mup_pane_g6

0x2733,	// (0x0006ebc1) main_mup_pane_g7_ParamLimits

0x2733,	// (0x0006ebc1) main_mup_pane_g7

0x274b,	// (0x0006ebd9) main_mup_pane_g8_ParamLimits

0x274b,	// (0x0006ebd9) main_mup_pane_g8

0x2763,	// (0x0006ebf1) main_mup_pane_g9_ParamLimits

0x2763,	// (0x0006ebf1) main_mup_pane_g9

0x277d,	// (0x0006ec0b) main_mup_pane_g10_ParamLimits

0x277d,	// (0x0006ec0b) main_mup_pane_g10

0x2797,	// (0x0006ec25) main_mup_pane_g11_ParamLimits

0x2797,	// (0x0006ec25) main_mup_pane_g11

0x27ab,	// (0x0006ec39) main_mup_pane_g12_ParamLimits

0x27ab,	// (0x0006ec39) main_mup_pane_g12

0x27c1,	// (0x0006ec4f) main_mup_pane_g13_ParamLimits

0x27c1,	// (0x0006ec4f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007b8a8) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007b8a8) main_mup_pane_g

0x27d5,	// (0x0006ec63) main_mup_pane_t1_ParamLimits

0x27d5,	// (0x0006ec63) main_mup_pane_t1

0x27ef,	// (0x0006ec7d) main_mup_pane_t2_ParamLimits

0x27ef,	// (0x0006ec7d) main_mup_pane_t2

0x2807,	// (0x0006ec95) main_mup_pane_t3_ParamLimits

0x2807,	// (0x0006ec95) main_mup_pane_t3

0x281f,	// (0x0006ecad) main_mup_pane_t4_ParamLimits

0x281f,	// (0x0006ecad) main_mup_pane_t4

0x283d,	// (0x0006eccb) main_mup_pane_t5_ParamLimits

0x283d,	// (0x0006eccb) main_mup_pane_t5

0x2852,	// (0x0006ece0) main_mup_pane_t6_ParamLimits

0x2852,	// (0x0006ece0) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007b8c3) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007b8c3) main_mup_pane_t

0x2864,	// (0x0006ecf2) mup_progress_pane_ParamLimits

0x2864,	// (0x0006ecf2) mup_progress_pane

0x2870,	// (0x0006ecfe) mup_visualizer_pane_ParamLimits

0x2870,	// (0x0006ecfe) mup_visualizer_pane

0x28a4,	// (0x0006ed32) mup_volume_pane_ParamLimits

0x28a4,	// (0x0006ed32) mup_volume_pane

0xb3f6,	// (0x00077884) mup_visualizer_pane_g1_ParamLimits

0xb3f6,	// (0x00077884) mup_visualizer_pane_g1

0xb3f6,	// (0x00077884) mup_visualizer_pane_g2_ParamLimits

0xb3f6,	// (0x00077884) mup_visualizer_pane_g2

0xb1ae,	// (0x0007763c) mup_visualizer_pane_g3_ParamLimits

0xb1ae,	// (0x0007763c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007b8d0) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007b8d0) mup_visualizer_pane_g

0xa003,	// (0x00076491) mup_volume_pane_g1

0xb45d,	// (0x000778eb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007b8d7) mup_volume_pane_g

0xa003,	// (0x00076491) mup_progress_pane_g1

0xb466,	// (0x000778f4) mup_progress_pane_g2

0xb46f,	// (0x000778fd) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007b8dc) mup_progress_pane_g

0x9c6f,	// (0x000760fd) bg_popup_window_pane_cp05

0xb478,	// (0x00077906) heading_pane_cp02_ParamLimits

0xb478,	// (0x00077906) heading_pane_cp02

0xb492,	// (0x00077920) list_popup_blid_pane

0xb49a,	// (0x00077928) list_blid_sat_info_pane_ParamLimits

0xb49a,	// (0x00077928) list_blid_sat_info_pane

0xb4ad,	// (0x0007793b) list_blid_sat_info_pane_g1

0xb4b5,	// (0x00077943) list_blid_sat_info_pane_t1

0x29ba,	// (0x0006ee48) mup_equalizer_pane_ParamLimits

0x29ba,	// (0x0006ee48) mup_equalizer_pane

0x29d3,	// (0x0006ee61) mup_equalizer_pane_cp1_ParamLimits

0x29d3,	// (0x0006ee61) mup_equalizer_pane_cp1

0x29f0,	// (0x0006ee7e) mup_equalizer_pane_cp2_ParamLimits

0x29f0,	// (0x0006ee7e) mup_equalizer_pane_cp2

0x2a0d,	// (0x0006ee9b) mup_equalizer_pane_cp3_ParamLimits

0x2a0d,	// (0x0006ee9b) mup_equalizer_pane_cp3

0x2a2e,	// (0x0006eebc) mup_equalizer_pane_cp4_ParamLimits

0x2a2e,	// (0x0006eebc) mup_equalizer_pane_cp4

0x2a4f,	// (0x0006eedd) mup_equalizer_pane_cp5

0x2a63,	// (0x0006eef1) mup_equalizer_pane_cp6

0x2a77,	// (0x0006ef05) mup_equalizer_pane_cp7

0xc65a,	// (0x00078ae8) bg_popup_call_poc_act_pane_g9

0xc662,	// (0x00078af0) bg_popup_call_poc_act_pane_g10

0xc66a,	// (0x00078af8) bg_popup_call_poc_act_pane_g11

0x000a,

0x9eca,	// (0x00076358) mup_scale_pane

0xa003,	// (0x00076491) mup_scale_pane_g1

0xb4c3,	// (0x00077951) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007b8f8) mup_scale_pane_g

0xb4e7,	// (0x00077975) msg_data_pane

0xb4ef,	// (0x0007797d) scroll_pane_cp017

0xa1ae,	// (0x0007663c) bg_list_pane_cp04_ParamLimits

0xa1ae,	// (0x0007663c) bg_list_pane_cp04

0xb4f7,	// (0x00077985) msg_data_pane_g1

0x2a9d,	// (0x0006ef2b) msg_data_pane_g2

0x2aa5,	// (0x0006ef33) msg_data_pane_g3

0x2aad,	// (0x0006ef3b) msg_data_pane_g4

0x2ab5,	// (0x0006ef43) msg_data_pane_g5

0x2abd,	// (0x0006ef4b) msg_data_pane_g6

0x2ac5,	// (0x0006ef53) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007b907) msg_data_pane_g

0x2acd,	// (0x0006ef5b) msg_text_pane_ParamLimits

0x2acd,	// (0x0006ef5b) msg_text_pane

0x2af6,	// (0x0006ef84) qrid_highlight_pane_cp011_ParamLimits

0x2af6,	// (0x0006ef84) qrid_highlight_pane_cp011

0x9c6f,	// (0x000760fd) msg_body_pane

0x9c6f,	// (0x000760fd) msg_header_pane

0xb508,	// (0x00077996) input_focus_pane_cp07

0xa1ce,	// (0x0007665c) msg_header_pane_t1_ParamLimits

0xa1ce,	// (0x0007665c) msg_header_pane_t1

0xa1e0,	// (0x0007666e) msg_header_pane_t2_ParamLimits

0xa1e0,	// (0x0007666e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007b91b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007b91b) msg_header_pane_t

0xb51d,	// (0x000779ab) msg_body_pane_g1

0xa1f2,	// (0x00076680) msg_body_pane_t1_ParamLimits

0xa1f2,	// (0x00076680) msg_body_pane_t1

0xa223,	// (0x000766b1) msg_body_pane_t2_ParamLimits

0xa223,	// (0x000766b1) msg_body_pane_t2

0xa235,	// (0x000766c3) msg_body_pane_t3_ParamLimits

0xa235,	// (0x000766c3) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007b920) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007b920) msg_body_pane_t

0x2b54,	// (0x0006efe2) main_viewer_pane_g1_ParamLimits

0x2b54,	// (0x0006efe2) main_viewer_pane_g1

0x2b62,	// (0x0006eff0) main_viewer_pane_g2_ParamLimits

0x2b62,	// (0x0006eff0) main_viewer_pane_g2

0x2b70,	// (0x0006effe) main_viewer_pane_g3_ParamLimits

0x2b70,	// (0x0006effe) main_viewer_pane_g3

0x2b7f,	// (0x0006f00d) main_viewer_pane_g4_ParamLimits

0x2b7f,	// (0x0006f00d) main_viewer_pane_g4

0x96ce,	// (0x00075b5c) main_viewer_pane_g5_ParamLimits

0x96ce,	// (0x00075b5c) main_viewer_pane_g5

0x96ce,	// (0x00075b5c) main_viewer_pane_g7_ParamLimits

0x96ce,	// (0x00075b5c) main_viewer_pane_g7

0xae19,	// (0x000772a7) main_viewer_pane_g8_ParamLimits

0xae19,	// (0x000772a7) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007b930) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007b930) main_viewer_pane_g

0xb525,	// (0x000779b3) viewer_content_pane_ParamLimits

0xb525,	// (0x000779b3) viewer_content_pane

0x2bbb,	// (0x0006f049) main_postcard_pane_g1_ParamLimits

0x2bbb,	// (0x0006f049) main_postcard_pane_g1

0x2bd1,	// (0x0006f05f) main_postcard_pane_g2_ParamLimits

0x2bd1,	// (0x0006f05f) main_postcard_pane_g2

0x2be7,	// (0x0006f075) main_postcard_pane_g3_ParamLimits

0x2be7,	// (0x0006f075) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007b941) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007b941) main_postcard_pane_g

0x2bfe,	// (0x0006f08c) main_postcard_pane_g4

0xc83c,	// (0x00078cca) smil_status_volume_pane_g2

0x2c41,	// (0x0006f0cf) postcard_pane_ParamLimits

0x2c41,	// (0x0006f0cf) postcard_pane

0xb533,	// (0x000779c1) postcard_pane_g1_ParamLimits

0xb533,	// (0x000779c1) postcard_pane_g1

0x2c83,	// (0x0006f111) postcard_pane_g2_ParamLimits

0x2c83,	// (0x0006f111) postcard_pane_g2

0x2c8f,	// (0x0006f11d) postcard_pane_g3_ParamLimits

0x2c8f,	// (0x0006f11d) postcard_pane_g3

0xb541,	// (0x000779cf) postcard_pane_g4_ParamLimits

0xb541,	// (0x000779cf) postcard_pane_g4

0x2c9b,	// (0x0006f129) postcard_pane_g5_ParamLimits

0x2c9b,	// (0x0006f129) postcard_pane_g5

0x2cb0,	// (0x0006f13e) postcard_pane_g6_ParamLimits

0x2cb0,	// (0x0006f13e) postcard_pane_g6

0xb533,	// (0x000779c1) postcard_pane_g7_ParamLimits

0xb533,	// (0x000779c1) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007b94e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007b94e) postcard_pane_g

0x2cc4,	// (0x0006f152) main_mp2_pane_g1_ParamLimits

0x2cc4,	// (0x0006f152) main_mp2_pane_g1

0x2cd0,	// (0x0006f15e) main_mp2_pane_g2_ParamLimits

0x2cd0,	// (0x0006f15e) main_mp2_pane_g2

0x2cdc,	// (0x0006f16a) main_mp2_pane_g3_ParamLimits

0x2cdc,	// (0x0006f16a) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007b95d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007b95d) main_mp2_pane_g

0x2ce8,	// (0x0006f176) main_mp2_pane_t1_ParamLimits

0x2ce8,	// (0x0006f176) main_mp2_pane_t1

0x2cfd,	// (0x0006f18b) main_mp2_pane_t2_ParamLimits

0x2cfd,	// (0x0006f18b) main_mp2_pane_t2

0x2d0f,	// (0x0006f19d) main_mp2_pane_t3_ParamLimits

0x2d0f,	// (0x0006f19d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007b964) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007b964) main_mp2_pane_t

0xb54f,	// (0x000779dd) pec_content_pane_ParamLimits

0xb54f,	// (0x000779dd) pec_content_pane

0xaaa0,	// (0x00076f2e) scroll_pane_cp015

0xb561,	// (0x000779ef) pec_attribute_pane_ParamLimits

0xb561,	// (0x000779ef) pec_attribute_pane

0x2d21,	// (0x0006f1af) pec_content_pane_g1_ParamLimits

0x2d21,	// (0x0006f1af) pec_content_pane_g1

0xb571,	// (0x000779ff) pec_content_pane_t1_ParamLimits

0xb571,	// (0x000779ff) pec_content_pane_t1

0xb583,	// (0x00077a11) pec_content_pane_t2_ParamLimits

0xb583,	// (0x00077a11) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007b96b) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007b96b) pec_content_pane_t

0x2d2d,	// (0x0006f1bb) list_single_graphic_pane_cp01_ParamLimits

0x2d2d,	// (0x0006f1bb) list_single_graphic_pane_cp01

0x9eca,	// (0x00076358) bg_popup_sub_pane_cp04

0xb595,	// (0x00077a23) popup_mup_playback_window_g1

0xb5a1,	// (0x00077a2f) popup_mup_playback_window_t1

0xb5b6,	// (0x00077a44) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007b970) popup_mup_playback_window_t

0xb5ed,	// (0x00077a7b) main_image_pane_g1_ParamLimits

0xb5ed,	// (0x00077a7b) main_image_pane_g1

0xb630,	// (0x00077abe) scroll_pane_cp018_ParamLimits

0xb630,	// (0x00077abe) scroll_pane_cp018

0xb648,	// (0x00077ad6) scroll_pane_cp016_ParamLimits

0xb648,	// (0x00077ad6) scroll_pane_cp016

0x2dfc,	// (0x0006f28a) smil2_image_pane_ParamLimits

0x2dfc,	// (0x0006f28a) smil2_image_pane

0x2e30,	// (0x0006f2be) smil2_root_pane_ParamLimits

0x2e30,	// (0x0006f2be) smil2_root_pane

0x2e68,	// (0x0006f2f6) smil2_text_pane_ParamLimits

0x2e68,	// (0x0006f2f6) smil2_text_pane

0x9c6f,	// (0x000760fd) bg_list_pane_cp06

0xb684,	// (0x00077b12) grid_radio_pane

0x9c6f,	// (0x000760fd) bg_popup_window_pane_cp06

0xb68c,	// (0x00077b1a) main_fmradio_pane_t1

0xaff1,	// (0x0007747f) heading_pane_cp04

0xb69a,	// (0x00077b28) main_fmradio_pane_t2

0xc672,	// (0x00078b00) popup_cale_lunar_info_window_g1

0xb6a8,	// (0x00077b36) main_fmradio_pane_t3

0xc67a,	// (0x00078b08) popup_cale_lunar_info_window_g2

0xb6b6,	// (0x00077b44) main_fmradio_pane_t4

0x0001,

0xb6c4,	// (0x00077b52) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007ba4b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007b985) main_fmradio_pane_t

0xb6d2,	// (0x00077b60) wait_bar_pane_cp03

0xb6da,	// (0x00077b68) cell_fmradio_pane_ParamLimits

0xb6da,	// (0x00077b68) cell_fmradio_pane

0xb533,	// (0x000779c1) cell_fmradio_pane_g1_ParamLimits

0xb533,	// (0x000779c1) cell_fmradio_pane_g1

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp011

0xb6ed,	// (0x00077b7b) poc_content_pane_ParamLimits

0xb6ed,	// (0x00077b7b) poc_content_pane

0xb6ff,	// (0x00077b8d) scroll_pane_cp019

0x2ee8,	// (0x0006f376) popup_call_poc_act_window_ParamLimits

0x2ee8,	// (0x0006f376) popup_call_poc_act_window

0x2f0c,	// (0x0006f39a) popup_call_poc_inact_window_ParamLimits

0x2f0c,	// (0x0006f39a) popup_call_poc_inact_window

0xf594,	// (0x0007ba22) bg_popup_call_poc_act_pane_g

0xc5ea,	// (0x00078a78) bg_popup_call_poc_inact_pane_g1

0xc5f2,	// (0x00078a80) bg_popup_call_poc_inact_pane_g2

0xb707,	// (0x00077b95) popup_call_poc_act_window_g2

0xc5fa,	// (0x00078a88) bg_popup_call_poc_inact_pane_g3

0xc602,	// (0x00078a90) bg_popup_call_poc_inact_pane_g4

0xc60a,	// (0x00078a98) bg_popup_call_poc_inact_pane_g5

0xb70f,	// (0x00077b9d) popup_call_poc_act_window_t1_ParamLimits

0xb70f,	// (0x00077b9d) popup_call_poc_act_window_t1

0xb737,	// (0x00077bc5) popup_call_poc_act_window_t2_ParamLimits

0xb737,	// (0x00077bc5) popup_call_poc_act_window_t2

0xb75f,	// (0x00077bed) popup_call_poc_act_window_t3_ParamLimits

0xb75f,	// (0x00077bed) popup_call_poc_act_window_t3

0xb787,	// (0x00077c15) popup_call_poc_act_window_t4_ParamLimits

0xb787,	// (0x00077c15) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007b990) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007b990) popup_call_poc_act_window_t

0xc612,	// (0x00078aa0) bg_popup_call_poc_inact_pane_g6

0xc61a,	// (0x00078aa8) bg_popup_call_poc_inact_pane_g7

0xc622,	// (0x00078ab0) bg_popup_call_poc_inact_pane_g8

0xb799,	// (0x00077c27) popup_call_poc_inact_window_g2

0xc62a,	// (0x00078ab8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007ba0f) bg_popup_call_poc_inact_pane_g

0xb7a1,	// (0x00077c2f) popup_call_poc_inact_window_t1_ParamLimits

0xb7a1,	// (0x00077c2f) popup_call_poc_inact_window_t1

0xb7b6,	// (0x00077c44) popup_call_poc_inact_window_t2_ParamLimits

0xb7b6,	// (0x00077c44) popup_call_poc_inact_window_t2

0xb7cb,	// (0x00077c59) popup_call_poc_inact_window_t3_ParamLimits

0xb7cb,	// (0x00077c59) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007b999) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007b999) popup_call_poc_inact_window_t

0xc7af,	// (0x00078c3d) context_pane_ParamLimits

0x373f,	// (0x0006fbcd) signal_pane_ParamLimits

0xb373,	// (0x00077801) main_call2_pane

0x9719,	// (0x00075ba7) popup_phob_thumbnail2_window_ParamLimits

0x9719,	// (0x00075ba7) popup_phob_thumbnail2_window

0x96b6,	// (0x00075b44) aid_hotspot_pointer_arrow_pane

0x96be,	// (0x00075b4c) aid_hotspot_pointer_hand_pane

0x3257,	// (0x0006f6e5) phob_pre_status_pane_g5

0x0ee2,	// (0x0006d370) cams_zoom_pane_ParamLimits

0x0ef1,	// (0x0006d37f) image_vga_pane_ParamLimits

0x0f0b,	// (0x0006d399) main_camera_pane_g1_ParamLimits

0x0f1d,	// (0x0006d3ab) main_camera_pane_g2_ParamLimits

0x0f2d,	// (0x0006d3bb) main_camera_pane_g3_ParamLimits

0x0f3f,	// (0x0006d3cd) main_camera_pane_g4_ParamLimits

0x0f51,	// (0x0006d3df) main_camera_pane_g5_ParamLimits

0x0f63,	// (0x0006d3f1) main_camera_pane_g6_ParamLimits

0x0f75,	// (0x0006d403) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007b698) main_camera_pane_g_ParamLimits

0x0f87,	// (0x0006d415) main_camera_pane_t1_ParamLimits

0x0f9d,	// (0x0006d42b) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007b6a9) main_camera_pane_t_ParamLimits

0x9eca,	// (0x00076358) bg_popup_preview_window_pane_cp01_ParamLimits

0x9eca,	// (0x00076358) bg_popup_preview_window_pane_cp01

0xb7e0,	// (0x00077c6e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e0,	// (0x00077c6e) popup_phob_thumbnail2_window_g1

0x9c6f,	// (0x000760fd) call2_cli_visual_pane

0x2f40,	// (0x0006f3ce) popup_call2_audio_conf_window_ParamLimits

0x2f40,	// (0x0006f3ce) popup_call2_audio_conf_window

0x2f60,	// (0x0006f3ee) popup_call2_audio_first_window_ParamLimits

0x2f60,	// (0x0006f3ee) popup_call2_audio_first_window

0x2ff6,	// (0x0006f484) popup_call2_audio_in_window_ParamLimits

0x2ff6,	// (0x0006f484) popup_call2_audio_in_window

0x303e,	// (0x0006f4cc) popup_call2_audio_out_window_ParamLimits

0x303e,	// (0x0006f4cc) popup_call2_audio_out_window

0x30a8,	// (0x0006f536) popup_call2_audio_second_window_ParamLimits

0x30a8,	// (0x0006f536) popup_call2_audio_second_window

0x310e,	// (0x0006f59c) popup_call2_audio_wait_window_ParamLimits

0x310e,	// (0x0006f59c) popup_call2_audio_wait_window

0x9c6f,	// (0x000760fd) bg_popup_call2_act_pane_cp03

0x9eac,	// (0x0007633a) list_conf_pane_cp

0xb7ec,	// (0x00077c7a) popup_call2_audio_conf_window_t1

0xb7fa,	// (0x00077c88) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fa,	// (0x00077c88) list_single_graphic_popup_conf2_pane

0xb085,	// (0x00077513) list_highlight_pane_cp04

0xb80d,	// (0x00077c9b) list_single_graphic_popup_conf2_pane_g1

0xb096,	// (0x00077524) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007b9a0) list_single_graphic_popup_conf2_pane_g

0xb817,	// (0x00077ca5) list_single_graphic_popup_conf2_pane_t1

0xb825,	// (0x00077cb3) bg_popup_call2_act_pane_cp01_ParamLimits

0xb825,	// (0x00077cb3) bg_popup_call2_act_pane_cp01

0xb8af,	// (0x00077d3d) call_type_pane_cp05_ParamLimits

0xb8af,	// (0x00077d3d) call_type_pane_cp05

0xb903,	// (0x00077d91) popup_call2_audio_second_window_g1_ParamLimits

0xb903,	// (0x00077d91) popup_call2_audio_second_window_g1

0xb957,	// (0x00077de5) popup_call2_audio_second_window_g2_ParamLimits

0xb957,	// (0x00077de5) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007b9a5) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007b9a5) popup_call2_audio_second_window_g

0xb9bc,	// (0x00077e4a) popup_call2_audio_second_window_t1_ParamLimits

0xb9bc,	// (0x00077e4a) popup_call2_audio_second_window_t1

0xba77,	// (0x00077f05) popup_call2_audio_second_window_t2_ParamLimits

0xba77,	// (0x00077f05) popup_call2_audio_second_window_t2

0xbaca,	// (0x00077f58) popup_call2_audio_second_window_t3_ParamLimits

0xbaca,	// (0x00077f58) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007b9ac) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007b9ac) popup_call2_audio_second_window_t

0x9c6f,	// (0x000760fd) bg_popup_call2_in_pane_cp02

0x9c79,	// (0x00076107) call_type_pane_cp04

0x9c81,	// (0x0007610f) popup_call2_audio_wait_window_g1

0x9c89,	// (0x00076117) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007b583) popup_call2_audio_wait_window_g

0x9c91,	// (0x0007611f) popup_call2_audio_wait_window_t3

0xbbbd,	// (0x0007804b) bg_popup_call2_act_pane_ParamLimits

0xbbbd,	// (0x0007804b) bg_popup_call2_act_pane

0xbc7d,	// (0x0007810b) call_type_pane_cp03_ParamLimits

0xbc7d,	// (0x0007810b) call_type_pane_cp03

0xbce1,	// (0x0007816f) popup_call2_audio_first_window_g1_ParamLimits

0xbce1,	// (0x0007816f) popup_call2_audio_first_window_g1

0xbd51,	// (0x000781df) popup_call2_audio_first_window_g2_ParamLimits

0xbd51,	// (0x000781df) popup_call2_audio_first_window_g2

0xb3f6,	// (0x00077884) popup_call2_audio_first_window_g3_ParamLimits

0xb3f6,	// (0x00077884) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007b9b5) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007b9b5) popup_call2_audio_first_window_g

0xbe2f,	// (0x000782bd) popup_call2_audio_first_window_t1_ParamLimits

0xbe2f,	// (0x000782bd) popup_call2_audio_first_window_t1

0xbf32,	// (0x000783c0) popup_call2_audio_first_window_t4_ParamLimits

0xbf32,	// (0x000783c0) popup_call2_audio_first_window_t4

0xc015,	// (0x000784a3) popup_call2_audio_first_window_t5_ParamLimits

0xc015,	// (0x000784a3) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007b9c0) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007b9c0) popup_call2_audio_first_window_t

0x9ec2,	// (0x00076350) bg_popup_call2_act_pane_g1

0xc682,	// (0x00078b10) popup_cale_lunar_info_window_t1

0xc690,	// (0x00078b1e) popup_cale_lunar_info_window_t2

0xc69e,	// (0x00078b2c) popup_cale_lunar_info_window_t3

0x9c6f,	// (0x000760fd) bg_popup_call2_bubble_pane

0xc116,	// (0x000785a4) bg_popup_call2_in_pane_cp01_ParamLimits

0xc116,	// (0x000785a4) bg_popup_call2_in_pane_cp01

0x91f4,	// (0x00075682) call_type_pane_cp02

0xc15e,	// (0x000785ec) popup_call2_audio_out_window_g1_ParamLimits

0xc15e,	// (0x000785ec) popup_call2_audio_out_window_g1

0xc18a,	// (0x00078618) popup_call2_audio_out_window_g2_ParamLimits

0xc18a,	// (0x00078618) popup_call2_audio_out_window_g2

0xc1b2,	// (0x00078640) popup_call2_audio_out_window_g3_ParamLimits

0xc1b2,	// (0x00078640) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007b9c9) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007b9c9) popup_call2_audio_out_window_g

0xc1ed,	// (0x0007867b) popup_call2_audio_out_window_t1_ParamLimits

0xc1ed,	// (0x0007867b) popup_call2_audio_out_window_t1

0xc24c,	// (0x000786da) popup_call2_audio_out_window_t2_ParamLimits

0xc24c,	// (0x000786da) popup_call2_audio_out_window_t2

0xc2a0,	// (0x0007872e) popup_call2_audio_out_window_t3_ParamLimits

0xc2a0,	// (0x0007872e) popup_call2_audio_out_window_t3

0xc2b6,	// (0x00078744) popup_call2_audio_out_window_t4_ParamLimits

0xc2b6,	// (0x00078744) popup_call2_audio_out_window_t4

0xc2cc,	// (0x0007875a) popup_call2_audio_out_window_t5_ParamLimits

0xc2cc,	// (0x0007875a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007b9d2) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007b9d2) popup_call2_audio_out_window_t

0xc330,	// (0x000787be) bg_popup_call2_in_pane_ParamLimits

0xc330,	// (0x000787be) bg_popup_call2_in_pane

0xc38c,	// (0x0007881a) popup_call2_audio_in_window_g1_ParamLimits

0xc38c,	// (0x0007881a) popup_call2_audio_in_window_g1

0xc3c4,	// (0x00078852) popup_call2_audio_in_window_g2_ParamLimits

0xc3c4,	// (0x00078852) popup_call2_audio_in_window_g2

0xc3fc,	// (0x0007888a) popup_call2_audio_in_window_g3_ParamLimits

0xc3fc,	// (0x0007888a) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007b9df) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007b9df) popup_call2_audio_in_window_g

0xc454,	// (0x000788e2) popup_call2_audio_in_window_t1_ParamLimits

0xc454,	// (0x000788e2) popup_call2_audio_in_window_t1

0xc4d4,	// (0x00078962) popup_call2_audio_in_window_t2_ParamLimits

0xc4d4,	// (0x00078962) popup_call2_audio_in_window_t2

0xc554,	// (0x000789e2) popup_call2_audio_in_window_t3_ParamLimits

0xc554,	// (0x000789e2) popup_call2_audio_in_window_t3

0xc56e,	// (0x000789fc) popup_call2_audio_in_window_t4_ParamLimits

0xc56e,	// (0x000789fc) popup_call2_audio_in_window_t4

0xc580,	// (0x00078a0e) popup_call2_audio_in_window_t5_ParamLimits

0xc580,	// (0x00078a0e) popup_call2_audio_in_window_t5

0xc595,	// (0x00078a23) popup_call2_audio_in_window_t6_ParamLimits

0xc595,	// (0x00078a23) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007b9e8) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007b9e8) popup_call2_audio_in_window_t

0x9ec2,	// (0x00076350) bg_popup_call2_in_pane_g1

0xc6ac,	// (0x00078b3a) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007ba50) popup_cale_lunar_info_window_t

0x9eca,	// (0x00076358) bg_popup_call2_rect_pane_ParamLimits

0x9eca,	// (0x00076358) bg_popup_call2_rect_pane

0x9c6f,	// (0x000760fd) call2_cli_visual_graphic_pane

0x9c6f,	// (0x000760fd) call2_cli_visual_text_pane

0x9740,	// (0x00075bce) smil_status_volume_pane_g3

0x0002,

0xa003,	// (0x00076491) call2_cli_visual_graphic_pane_g1

0xa003,	// (0x00076491) call2_cli_visual_graphic_pane_g2

0xa003,	// (0x00076491) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007b9f5) call2_cli_visual_graphic_pane_g

0xc5aa,	// (0x00078a38) bg_popup_call2_rect_pane_g1

0xa0a1,	// (0x0007652f) bg_popup_call2_rect_pane_g2

0xc5b2,	// (0x00078a40) bg_popup_call2_rect_pane_g3

0xc5ba,	// (0x00078a48) bg_popup_call2_rect_pane_g4

0xc5c2,	// (0x00078a50) bg_popup_call2_rect_pane_g5

0xc5ca,	// (0x00078a58) bg_popup_call2_rect_pane_g6

0xc5d2,	// (0x00078a60) bg_popup_call2_rect_pane_g7

0xc5da,	// (0x00078a68) bg_popup_call2_rect_pane_g8

0xc5e2,	// (0x00078a70) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007b9fc) bg_popup_call2_rect_pane_g

0xc5ea,	// (0x00078a78) bg_popup_call2_bubble_pane_g1

0xc5f2,	// (0x00078a80) bg_popup_call2_bubble_pane_g2

0xc5fa,	// (0x00078a88) bg_popup_call2_bubble_pane_g3

0xc602,	// (0x00078a90) bg_popup_call2_bubble_pane_g4

0xc60a,	// (0x00078a98) bg_popup_call2_bubble_pane_g5

0xc612,	// (0x00078aa0) bg_popup_call2_bubble_pane_g6

0xc61a,	// (0x00078aa8) bg_popup_call2_bubble_pane_g7

0xc622,	// (0x00078ab0) bg_popup_call2_bubble_pane_g8

0xc62a,	// (0x00078ab8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007ba0f) bg_popup_call2_bubble_pane_g

0x080e,	// (0x0006cc9c) aid_cale_week_size_cell_pane

0x0fb5,	// (0x0006d443) aid_cams_cif_uncrop_pane_ParamLimits

0x0fb5,	// (0x0006d443) aid_cams_cif_uncrop_pane

0x116a,	// (0x0006d5f8) aid_cams_size_cell_ParamLimits

0x116a,	// (0x0006d5f8) aid_cams_size_cell

0x117e,	// (0x0006d60c) grid_cams_pane_ParamLimits

0x1198,	// (0x0006d626) linegrid_cams_pane_ParamLimits

0x12f4,	// (0x0006d782) call_video_pane_t1

0x1312,	// (0x0006d7a0) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007b6fc) call_video_pane_t

0x1741,	// (0x0006dbcf) aid_cale_month_size_cell_pane_ParamLimits

0x1741,	// (0x0006dbcf) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007ba99) smil_status_volume_pane_g

0x974d,	// (0x00075bdb) volume_smil_pane_ParamLimits

0x9097,	// (0x00075525) aid_popup2_width_pane

0x0773,	// (0x0006cc01) cell_qdial_pane_g4_ParamLimits

0x0773,	// (0x0006cc01) cell_qdial_pane_g4

0x25c6,	// (0x0006ea54) aid_blid_cardinal_pane_ParamLimits

0x25d2,	// (0x0006ea60) aid_blid_destination_pane_ParamLimits

0x25d2,	// (0x0006ea60) aid_blid_destination_pane

0x9eca,	// (0x00076358) bg_popup_call_poc_act_pane_ParamLimits

0x9eca,	// (0x00076358) bg_popup_call_poc_act_pane

0x9eca,	// (0x00076358) bg_popup_call_poc_inact_pane_ParamLimits

0x9eca,	// (0x00076358) bg_popup_call_poc_inact_pane

0xc632,	// (0x00078ac0) bg_popup_call_poc_act_pane_g1

0xc63a,	// (0x00078ac8) bg_popup_call_poc_act_pane_g2

0xc642,	// (0x00078ad0) bg_popup_call_poc_act_pane_g3

0xc602,	// (0x00078a90) bg_popup_call_poc_act_pane_g4

0xc60a,	// (0x00078a98) bg_popup_call_poc_act_pane_g5

0xc64a,	// (0x00078ad8) bg_popup_call_poc_act_pane_g6

0xc61a,	// (0x00078aa8) bg_popup_call_poc_act_pane_g7

0xc652,	// (0x00078ae0) bg_popup_call_poc_act_pane_g8

0x9c6f,	// (0x000760fd) main_usb_pane

0x96f4,	// (0x00075b82) popup_cale_lunar_info_window

0x15dc,	// (0x0006da6a) im_reading_pane_t1_ParamLimits

0xa9f8,	// (0x00076e86) list_im_pane_ParamLimits

0xaa09,	// (0x00076e97) scroll_pane_cp07_ParamLimits

0x9c6f,	// (0x000760fd) grid_highlight_pane_cp012

0x9eca,	// (0x00076358) mup_scale_pane_ParamLimits

0xb533,	// (0x000779c1) main_usb_pane_g1_ParamLimits

0xb533,	// (0x000779c1) main_usb_pane_g1

0x316c,	// (0x0006f5fa) main_usb_pane_g2_ParamLimits

0x316c,	// (0x0006f5fa) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007ba39) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007ba39) main_usb_pane_g

0x3182,	// (0x0006f610) main_usb_pane_t1_ParamLimits

0x3182,	// (0x0006f610) main_usb_pane_t1

0x3194,	// (0x0006f622) main_usb_pane_t2_ParamLimits

0x3194,	// (0x0006f622) main_usb_pane_t2

0x31a6,	// (0x0006f634) main_usb_pane_t3_ParamLimits

0x31a6,	// (0x0006f634) main_usb_pane_t3

0x31b8,	// (0x0006f646) main_usb_pane_t4_ParamLimits

0x31b8,	// (0x0006f646) main_usb_pane_t4

0x31ca,	// (0x0006f658) main_usb_pane_t5_ParamLimits

0x31ca,	// (0x0006f658) main_usb_pane_t5

0x31dc,	// (0x0006f66a) main_usb_pane_t6_ParamLimits

0x31dc,	// (0x0006f66a) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007ba3e) main_usb_pane_t_ParamLimits

0x2573,	// (0x0006ea01) aid_text_placing

0x257c,	// (0x0006ea0a) main_location2_pane_t1_ParamLimits

0x258e,	// (0x0006ea1c) main_location2_pane_t2_ParamLimits

0x25a0,	// (0x0006ea2e) main_location2_pane_t3_ParamLimits

0x25b4,	// (0x0006ea42) main_location2_pane_t4_ParamLimits

0x25b4,	// (0x0006ea42) main_location2_pane_t4

0xf3cf,	// (0x0007b85d) main_location2_pane_t_ParamLimits

0x9f06,	// (0x00076394) find_pinb_pane_g2_ParamLimits

0x9f06,	// (0x00076394) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0007b5a9) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0007b5a9) find_pinb_pane_g

0x9f12,	// (0x000763a0) find_pinb_pane_t1_ParamLimits

0x9f24,	// (0x000763b2) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0007b5ae) find_pinb_pane_t_ParamLimits

0x9c6f,	// (0x000760fd) main_call3_pane

0x1c24,	// (0x0006e0b2) cale_month_day_heading_pane_t1_ParamLimits

0x1caa,	// (0x0006e138) cale_month_day_heading_pane_t2_ParamLimits

0x1d3b,	// (0x0006e1c9) cale_month_day_heading_pane_t3_ParamLimits

0x1dcc,	// (0x0006e25a) cale_month_day_heading_pane_t4_ParamLimits

0x1e65,	// (0x0006e2f3) cale_month_day_heading_pane_t5_ParamLimits

0x1f06,	// (0x0006e394) cale_month_day_heading_pane_t6_ParamLimits

0x1fa7,	// (0x0006e435) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007b734) cale_month_day_heading_pane_t_ParamLimits

0xac53,	// (0x000770e1) smil_status_volume_pane

0x2c5f,	// (0x0006f0ed) postcard_address_pane_ParamLimits

0x2c5f,	// (0x0006f0ed) postcard_address_pane

0x2c71,	// (0x0006f0ff) postcard_message_pane_ParamLimits

0x2c71,	// (0x0006f0ff) postcard_message_pane

0x3148,	// (0x0006f5d6) call2_cli_visual_pane_t1_ParamLimits

0x3148,	// (0x0006f5d6) call2_cli_visual_pane_t1

0x396e,	// (0x0006fdfc) postcard_message_pane_t1_ParamLimits

0x396e,	// (0x0006fdfc) postcard_message_pane_t1

0x3957,	// (0x0006fde5) postcard_address_pane_t1_ParamLimits

0x3957,	// (0x0006fde5) postcard_address_pane_t1

0x3943,	// (0x0006fdd1) popup_call3_audio_in_window_ParamLimits

0x3943,	// (0x0006fdd1) popup_call3_audio_in_window

0x37d0,	// (0x0006fc5e) bg_popup_call3_in_pane_ParamLimits

0x37d0,	// (0x0006fc5e) bg_popup_call3_in_pane

0x3844,	// (0x0006fcd2) popup_call3_audio_in_window_g1_ParamLimits

0x3844,	// (0x0006fcd2) popup_call3_audio_in_window_g1

0x3864,	// (0x0006fcf2) popup_call3_audio_in_window_g2_ParamLimits

0x3864,	// (0x0006fcf2) popup_call3_audio_in_window_g2

0x3884,	// (0x0006fd12) popup_call3_audio_in_window_g3_ParamLimits

0x3884,	// (0x0006fd12) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007baa0) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007baa0) popup_call3_audio_in_window_g

0x38b5,	// (0x0006fd43) popup_call3_audio_in_window_t1_ParamLimits

0x38b5,	// (0x0006fd43) popup_call3_audio_in_window_t1

0x38f3,	// (0x0006fd81) popup_call3_audio_in_window_t2_ParamLimits

0x38f3,	// (0x0006fd81) popup_call3_audio_in_window_t2

0x3931,	// (0x0006fdbf) popup_call3_audio_in_window_t3_ParamLimits

0x3931,	// (0x0006fdbf) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007baa9) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007baa9) popup_call3_audio_in_window_t

0xb373,	// (0x00077801) bg_popup_call3_rect_pane

0xc5aa,	// (0x00078a38) bg_popup_call3_rect_pane_g1

0xa0a1,	// (0x0007652f) bg_popup_call3_rect_pane_g2

0xc5b2,	// (0x00078a40) bg_popup_call3_rect_pane_g3

0xc5ba,	// (0x00078a48) bg_popup_call3_rect_pane_g4

0xc5c2,	// (0x00078a50) bg_popup_call3_rect_pane_g5

0xc5ca,	// (0x00078a58) bg_popup_call3_rect_pane_g6

0xc5d2,	// (0x00078a60) bg_popup_call3_rect_pane_g7

0x28ba,	// (0x0006ed48) mup_visualizer_osc_pane

0xb455,	// (0x000778e3) mup_visualizer_spec_pane

0x3800,	// (0x0006fc8e) call3_video_qcif_pane_ParamLimits

0x3800,	// (0x0006fc8e) call3_video_qcif_pane

0x3811,	// (0x0006fc9f) call3_video_qcif_uncrop_pane_ParamLimits

0x3811,	// (0x0006fc9f) call3_video_qcif_uncrop_pane

0x381f,	// (0x0006fcad) call3_video_subqcif_pane_ParamLimits

0x381f,	// (0x0006fcad) call3_video_subqcif_pane

0x3833,	// (0x0006fcc1) call3_video_subqcif_uncrop_pane_ParamLimits

0x3833,	// (0x0006fcc1) call3_video_subqcif_uncrop_pane

0x38a4,	// (0x0006fd32) popup_call3_audio_in_window_g4_ParamLimits

0x38a4,	// (0x0006fd32) popup_call3_audio_in_window_g4

0x37bf,	// (0x0006fc4d) mup_spec_half_pane

0x37c8,	// (0x0006fc56) mup_spec_half_pane_cp

0xc80f,	// (0x00078c9d) mup_osc_middle_pane

0xc818,	// (0x00078ca6) mup_visualizer_osc_pane_g1

0x379f,	// (0x0006fc2d) mup_spec_bar_pane_ParamLimits

0x379f,	// (0x0006fc2d) mup_spec_bar_pane

0xc7fc,	// (0x00078c8a) mup_spec_bar_pane_g1

0xc806,	// (0x00078c94) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ba94) mup_spec_bar_pane_g

0x080e,	// (0x0006cc9c) aid_cale_week_size_cell_pane_ParamLimits

0x0828,	// (0x0006ccb6) bg_cale_heading_pane_ParamLimits

0xa860,	// (0x00076cee) bg_cale_pane_cp01_ParamLimits

0x0846,	// (0x0006ccd4) cale_week_corner_pane_ParamLimits

0x0865,	// (0x0006ccf3) cale_week_day_heading_pane_ParamLimits

0x0888,	// (0x0006cd16) cale_week_scroll_pane_g1_ParamLimits

0x08a1,	// (0x0006cd2f) cale_week_scroll_pane_g2_ParamLimits

0x08b9,	// (0x0006cd47) cale_week_scroll_pane_g3_ParamLimits

0x08d1,	// (0x0006cd5f) cale_week_scroll_pane_g4_ParamLimits

0x08e9,	// (0x0006cd77) cale_week_scroll_pane_g5_ParamLimits

0x0905,	// (0x0006cd93) cale_week_scroll_pane_g6_ParamLimits

0x0925,	// (0x0006cdb3) cale_week_scroll_pane_g7_ParamLimits

0x0945,	// (0x0006cdd3) cale_week_scroll_pane_g8_ParamLimits

0x0969,	// (0x0006cdf7) cale_week_scroll_pane_g9_ParamLimits

0x0981,	// (0x0006ce0f) cale_week_scroll_pane_g10_ParamLimits

0x0999,	// (0x0006ce27) cale_week_scroll_pane_g11_ParamLimits

0x09b1,	// (0x0006ce3f) cale_week_scroll_pane_g12_ParamLimits

0x09c9,	// (0x0006ce57) cale_week_scroll_pane_g13_ParamLimits

0x09c9,	// (0x0006ce57) cale_week_scroll_pane_g14_ParamLimits

0x09c9,	// (0x0006ce57) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0007b63a) cale_week_scroll_pane_g_ParamLimits

0x0a05,	// (0x0006ce93) cale_week_time_pane_ParamLimits

0x0a29,	// (0x0006ceb7) grid_cale_week_pane_ParamLimits

0xa87e,	// (0x00076d0c) listscroll_cale_week_pane_t1

0xa890,	// (0x00076d1e) scroll_pane_cp08_ParamLimits

0x17a2,	// (0x0006dc30) cale_month_corner_pane_ParamLimits

0xac29,	// (0x000770b7) cale_month_pane_t1

0x1bc2,	// (0x0006e050) cale_month_week_pane_ParamLimits

0x23e4,	// (0x0006e872) popup_call_status_window_g1_ParamLimits

0x23f8,	// (0x0006e886) popup_call_status_window_g2_ParamLimits

0x240c,	// (0x0006e89a) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007b7e4) popup_call_status_window_g_ParamLimits

0xafe1,	// (0x0007746f) aid_call2_pane

0x2b0c,	// (0x0006ef9a) msg_header_pane_g1

0x2c5f,	// (0x0006f0ed) postcard_address2_pane_ParamLimits

0x2c5f,	// (0x0006f0ed) postcard_address2_pane

0x2c71,	// (0x0006f0ff) postcard_message2_pane_ParamLimits

0x2c71,	// (0x0006f0ff) postcard_message2_pane

0x374d,	// (0x0006fbdb) message2_row_pane_ParamLimits

0x374d,	// (0x0006fbdb) message2_row_pane

0x376c,	// (0x0006fbfa) address2_row_pane_ParamLimits

0x376c,	// (0x0006fbfa) address2_row_pane

0xc7ca,	// (0x00078c58) postcard_message2_row_pane_g1

0xc7d2,	// (0x00078c60) postcard_message2_row_pane_t1

0xc7ca,	// (0x00078c58) address2_row_pane_g1

0xc7d2,	// (0x00078c60) address2_row_pane_t1

0x0e49,	// (0x0006d2d7) aid_size_cell_vorec

0x9c6f,	// (0x000760fd) main_rss_pane

0x377f,	// (0x0006fc0d) rss_list_single_pane_ParamLimits

0x377f,	// (0x0006fc0d) rss_list_single_pane

0xc7e0,	// (0x00078c6e) rss_list_single_pane_t1

0xc7ee,	// (0x00078c7c) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007ba8f) rss_list_single_pane_t

0x9c6f,	// (0x000760fd) main_camera2_pane

0x9c6f,	// (0x000760fd) main_video2_pane

0x39e7,	// (0x0006fe75) cams_zoom_pane_cp2_ParamLimits

0x39e7,	// (0x0006fe75) cams_zoom_pane_cp2

0x3a07,	// (0x0006fe95) image2_vga_pane_ParamLimits

0x3a07,	// (0x0006fe95) image2_vga_pane

0x3a58,	// (0x0006fee6) main_camera2_pane_g1_ParamLimits

0x3a58,	// (0x0006fee6) main_camera2_pane_g1

0x3a78,	// (0x0006ff06) main_camera2_pane_g2_ParamLimits

0x3a78,	// (0x0006ff06) main_camera2_pane_g2

0x3a98,	// (0x0006ff26) main_camera2_pane_g3_ParamLimits

0x3a98,	// (0x0006ff26) main_camera2_pane_g3

0x3ab8,	// (0x0006ff46) main_camera2_pane_g4_ParamLimits

0x3ab8,	// (0x0006ff46) main_camera2_pane_g4

0x3ad8,	// (0x0006ff66) main_camera2_pane_g5_ParamLimits

0x3ad8,	// (0x0006ff66) main_camera2_pane_g5

0x3af8,	// (0x0006ff86) main_camera2_pane_g6_ParamLimits

0x3af8,	// (0x0006ff86) main_camera2_pane_g6

0x3b18,	// (0x0006ffa6) main_camera2_pane_g7_ParamLimits

0x3b18,	// (0x0006ffa6) main_camera2_pane_g7

0x3b38,	// (0x0006ffc6) main_camera2_pane_g8_ParamLimits

0x3b38,	// (0x0006ffc6) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007bab0) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007bab0) main_camera2_pane_g

0x3b78,	// (0x00070006) main_camera2_pane_t1_ParamLimits

0x3b78,	// (0x00070006) main_camera2_pane_t1

0x3bad,	// (0x0007003b) main_camera2_pane_t2_ParamLimits

0x3bad,	// (0x0007003b) main_camera2_pane_t2

0x3bd3,	// (0x00070061) main_camera2_pane_t3_ParamLimits

0x3bd3,	// (0x00070061) main_camera2_pane_t3

0x3c31,	// (0x000700bf) main_camera2_pane_t4_ParamLimits

0x3c31,	// (0x000700bf) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007bac3) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007bac3) main_camera2_pane_t

0x3cc3,	// (0x00070151) cams_zoom_pane_cp4_ParamLimits

0x3cc3,	// (0x00070151) cams_zoom_pane_cp4

0x3cd9,	// (0x00070167) image2_cif_pane_ParamLimits

0x3cd9,	// (0x00070167) image2_cif_pane

0x3d04,	// (0x00070192) image2_subqcif_pane_ParamLimits

0x3d04,	// (0x00070192) image2_subqcif_pane

0x3d1e,	// (0x000701ac) main_video2_pane_g1_ParamLimits

0x3d1e,	// (0x000701ac) main_video2_pane_g1

0x3d38,	// (0x000701c6) main_video2_pane_g2_ParamLimits

0x3d38,	// (0x000701c6) main_video2_pane_g2

0x3d4e,	// (0x000701dc) main_video2_pane_g3_ParamLimits

0x3d4e,	// (0x000701dc) main_video2_pane_g3

0x3d64,	// (0x000701f2) main_video2_pane_g4_ParamLimits

0x3d64,	// (0x000701f2) main_video2_pane_g4

0x3d7a,	// (0x00070208) main_video2_pane_g5_ParamLimits

0x3d7a,	// (0x00070208) main_video2_pane_g5

0x3d90,	// (0x0007021e) main_video2_pane_g6_ParamLimits

0x3d90,	// (0x0007021e) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007bad2) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007bad2) main_video2_pane_g

0x3daa,	// (0x00070238) main_video2_pane_t1_ParamLimits

0x3daa,	// (0x00070238) main_video2_pane_t1

0x3dce,	// (0x0007025c) main_video2_pane_t2_ParamLimits

0x3dce,	// (0x0007025c) main_video2_pane_t2

0x3e1c,	// (0x000702aa) main_video2_pane_t3_ParamLimits

0x3e1c,	// (0x000702aa) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007badf) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007badf) main_video2_pane_t

0x3297,	// (0x0006f725) call_muted_g2

0x0001,

0xf5f3,	// (0x0007ba81) call_muted_g

0x9c6f,	// (0x000760fd) main_mup2_pane

0x3e64,	// (0x000702f2) main_mup2_pane_g1_ParamLimits

0x3e64,	// (0x000702f2) main_mup2_pane_g1

0x3e70,	// (0x000702fe) main_mup2_pane_g2_ParamLimits

0x3e70,	// (0x000702fe) main_mup2_pane_g2

0x97bb,	// (0x00075c49) main_mup_pane_g13_cp1

0x97c3,	// (0x00075c51) mup_volume_pane_cp1

0x3e8c,	// (0x0007031a) main_mup2_pane_g4_ParamLimits

0x3e8c,	// (0x0007031a) main_mup2_pane_g4

0x3e9e,	// (0x0007032c) main_mup2_pane_g5_ParamLimits

0x3e9e,	// (0x0007032c) main_mup2_pane_g5

0x3eb0,	// (0x0007033e) main_mup2_pane_g6_ParamLimits

0x3eb0,	// (0x0007033e) main_mup2_pane_g6

0x3ec2,	// (0x00070350) main_mup2_pane_g7_ParamLimits

0x3ec2,	// (0x00070350) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007bae6) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007bae6) main_mup2_pane_g

0x3eda,	// (0x00070368) main_mup2_pane_t1_ParamLimits

0x3eda,	// (0x00070368) main_mup2_pane_t1

0x3ef0,	// (0x0007037e) main_mup2_pane_t2_ParamLimits

0x3ef0,	// (0x0007037e) main_mup2_pane_t2

0x3f06,	// (0x00070394) main_mup2_pane_t3_ParamLimits

0x3f06,	// (0x00070394) main_mup2_pane_t3

0x3f1c,	// (0x000703aa) main_mup2_pane_t4_ParamLimits

0x3f1c,	// (0x000703aa) main_mup2_pane_t4

0x3f34,	// (0x000703c2) main_mup2_pane_t5_ParamLimits

0x3f34,	// (0x000703c2) main_mup2_pane_t5

0x3f4c,	// (0x000703da) main_mup2_pane_t6_ParamLimits

0x3f4c,	// (0x000703da) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007baf5) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007baf5) main_mup2_pane_t

0x3f7c,	// (0x0007040a) mup2_visualizer_pane_ParamLimits

0x3f7c,	// (0x0007040a) mup2_visualizer_pane

0x3faa,	// (0x00070438) mup_progress_pane_cp_ParamLimits

0x3faa,	// (0x00070438) mup_progress_pane_cp

0x97a6,	// (0x00075c34) mup_volume_pane_cp_ParamLimits

0x97a6,	// (0x00075c34) mup_volume_pane_cp

0x3fbe,	// (0x0007044c) mup2_visualizer_pane_g1_ParamLimits

0x3fbe,	// (0x0007044c) mup2_visualizer_pane_g1

0xc84f,	// (0x00078cdd) mup2_visualizer_pane_g2_ParamLimits

0xc84f,	// (0x00078cdd) mup2_visualizer_pane_g2

0x3fd5,	// (0x00070463) mup2_visualizer_pane_g3_ParamLimits

0x3fd5,	// (0x00070463) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007bb02) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007bb02) mup2_visualizer_pane_g

0xb67c,	// (0x00077b0a) aid_size_cell_fmradio

0x3449,	// (0x0006f8d7) aid_height_parent_landcape

0xaa87,	// (0x00076f15) wml_content_pane_cp

0xaa8f,	// (0x00076f1d) wml_tabs_pane

0xaa98,	// (0x00076f26) popup_wml_miniature_window

0xaaa0,	// (0x00076f2e) scroll_pane_cp021

0xaab4,	// (0x00076f42) wml_content_pane_comp8

0x9c6f,	// (0x000760fd) bg_popup_sub_pane_cp05

0xc86d,	// (0x00078cfb) popup_wml_miniature_window_g1

0xc875,	// (0x00078d03) wml_miniature_view_pane

0x3fe1,	// (0x0007046f) aid_size_wml_view

0x3fe9,	// (0x00070477) wml_miniature_view_pane_g1

0x3ff2,	// (0x00070480) wml_miniature_view_pane_g2

0x3ffb,	// (0x00070489) wml_miniature_view_pane_g3

0x4003,	// (0x00070491) wml_miniature_view_pane_g4

0x400b,	// (0x00070499) wml_miniature_view_pane_g5

0x4013,	// (0x000704a1) wml_miniature_view_pane_g6

0x401b,	// (0x000704a9) wml_miniature_view_pane_g7

0x4023,	// (0x000704b1) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007bb09) wml_miniature_view_pane_g

0xc87d,	// (0x00078d0b) background_graphic_ParamLimits

0xc87d,	// (0x00078d0b) background_graphic

0xc889,	// (0x00078d17) wml_tabs_2_pane

0xc892,	// (0x00078d20) wml_tabs_3_pane_ParamLimits

0xc892,	// (0x00078d20) wml_tabs_3_pane

0xc8a4,	// (0x00078d32) wml_tabs_4_pane_ParamLimits

0xc8a4,	// (0x00078d32) wml_tabs_4_pane

0xc8ba,	// (0x00078d48) wml_tabs_5_pane_ParamLimits

0xc8ba,	// (0x00078d48) wml_tabs_5_pane

0xc8d4,	// (0x00078d62) wml_tabs_pane_g2_ParamLimits

0xc8d4,	// (0x00078d62) wml_tabs_pane_g2

0xc8e8,	// (0x00078d76) wml_tabs_pane_g3_ParamLimits

0xc8e8,	// (0x00078d76) wml_tabs_pane_g3

0x402b,	// (0x000704b9) wml_tabs_2_active_pane_ParamLimits

0x402b,	// (0x000704b9) wml_tabs_2_active_pane

0x403f,	// (0x000704cd) wml_tabs_2_passive_pane_ParamLimits

0x403f,	// (0x000704cd) wml_tabs_2_passive_pane

0x4053,	// (0x000704e1) wml_tabs_3_active_pane_cp_ParamLimits

0x4053,	// (0x000704e1) wml_tabs_3_active_pane_cp

0x4068,	// (0x000704f6) wml_tabs_3_passive_pane_ParamLimits

0x4068,	// (0x000704f6) wml_tabs_3_passive_pane

0x407b,	// (0x00070509) wml_tabs_3_passive_pane_cp_ParamLimits

0x407b,	// (0x00070509) wml_tabs_3_passive_pane_cp

0x4092,	// (0x00070520) tabs_4_active_pane

0x409a,	// (0x00070528) tabs_4_passive_pane

0x40a4,	// (0x00070532) tabs_4_passive_pane_cp

0x40ac,	// (0x0007053a) tabs_4_passive_pane_cp2

0x3164,	// (0x0006f5f2) aid_height_text

0x288c,	// (0x0006ed1a) mup_volume_cont_pane_ParamLimits

0x288c,	// (0x0006ed1a) mup_volume_cont_pane

0x041f,	// (0x0006c8ad) aid_size_cell_pinb

0x0429,	// (0x0006c8b7) aid_size_list_pinb

0x3f96,	// (0x00070424) mup2_volume_cont_pane_ParamLimits

0x3f96,	// (0x00070424) mup2_volume_cont_pane

0x9792,	// (0x00075c20) mup2_volume_cont_pane_g1_ParamLimits

0x9792,	// (0x00075c20) mup2_volume_cont_pane_g1

0x00d1,	// (0x0006c55f) aid_size_cell_touch_ParamLimits

0x00d1,	// (0x0006c55f) aid_size_cell_touch

0x030e,	// (0x0006c79c) touch_pane_ParamLimits

0x030e,	// (0x0006c79c) touch_pane

0x90fb,	// (0x00075589) main_rss2_pane

0xc905,	// (0x00078d93) listscroll_rss2_pane

0xc90e,	// (0x00078d9c) rss2_navigation_pane

0xc916,	// (0x00078da4) list_rss2_pane

0xb130,	// (0x000775be) scroll_pane_cp22

0xc91e,	// (0x00078dac) rss2_navigation_pane_g1

0xc927,	// (0x00078db5) rss2_navigation_pane_g2

0xc92f,	// (0x00078dbd) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007bb1a) rss2_navigation_pane_g

0xc937,	// (0x00078dc5) rss2_navigation_pane_t1

0x40b6,	// (0x00070544) rss2_list_single_pane_ParamLimits

0x40b6,	// (0x00070544) rss2_list_single_pane

0xc945,	// (0x00078dd3) rss2_list_single_pane_t2

0xc953,	// (0x00078de1) rss2_list_single_pane_t3_ParamLimits

0xc953,	// (0x00078de1) rss2_list_single_pane_t3

0xc970,	// (0x00078dfe) rss2_list_single_pane_t4

0x223f,	// (0x0006e6cd) smil_status_pane_g1

0x90ed,	// (0x0007557b) main_image2_pane_ParamLimits

0x90ed,	// (0x0007557b) main_image2_pane

0x3b58,	// (0x0006ffe6) main_camera2_pane_g9_ParamLimits

0x3b58,	// (0x0006ffe6) main_camera2_pane_g9

0x3c86,	// (0x00070114) main_camera2_pane_t5_ParamLimits

0x3c86,	// (0x00070114) main_camera2_pane_t5

0x9762,	// (0x00075bf0) main_camera2_pane_t6_ParamLimits

0x9762,	// (0x00075bf0) main_camera2_pane_t6

0x40cd,	// (0x0007055b) main_image2_pane_g1_ParamLimits

0x40cd,	// (0x0007055b) main_image2_pane_g1

0x2e9e,	// (0x0006f32c) smil2_video_pane_ParamLimits

0x2e9e,	// (0x0006f32c) smil2_video_pane

0x0109,	// (0x0006c597) aid_zoom_text_primary_cp

0x90e3,	// (0x00075571) popup_preview_fixed_window

0xa9f0,	// (0x00076e7e) im_reading_pane_g1

0x39cf,	// (0x0006fe5d) cams2_bc_adjust_pane_cp_ParamLimits

0x39cf,	// (0x0006fe5d) cams2_bc_adjust_pane_cp

0x3cb5,	// (0x00070143) cams2_bc_adjust_pane_ParamLimits

0x3cb5,	// (0x00070143) cams2_bc_adjust_pane

0xd7d4,	// (0x00079c62) cams2_bc_adjust_pane_g1

0x97cb,	// (0x00075c59) cams2_slider_pane

0x97d4,	// (0x00075c62) cams2_slider_pane_g1

0x97dd,	// (0x00075c6b) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007bb21) cams2_slider_pane_g

0x0501,	// (0x0006c98f) calc_display_pane_ParamLimits

0x0529,	// (0x0006c9b7) calc_paper_pane_ParamLimits

0x054c,	// (0x0006c9da) grid_calc_pane_ParamLimits

0x9687,	// (0x00075b15) popup_clock_digital_window_t1_ParamLimits

0xb619,	// (0x00077aa7) main_image_pane_t1

0x04e3,	// (0x0006c971) aid_size_cell_calc_ParamLimits

0x04e3,	// (0x0006c971) aid_size_cell_calc

0x34a1,	// (0x0006f92f) popup_blid_sat_info2_window_ParamLimits

0x34a1,	// (0x0006f92f) popup_blid_sat_info2_window

0xc986,	// (0x00078e14) aid_size_cell_blid

0xc98e,	// (0x00078e1c) bg_popup_window_pane_cp07

0xc9b1,	// (0x00078e3f) grid_popup_blid_pane

0xc9bb,	// (0x00078e49) heading_pane_cp05_ParamLimits

0xc9bb,	// (0x00078e49) heading_pane_cp05

0xca85,	// (0x00078f13) cell_popup_blid_pane_ParamLimits

0xca85,	// (0x00078f13) cell_popup_blid_pane

0xcaab,	// (0x00078f39) cell_popup_blid_pane_g1

0xcab3,	// (0x00078f41) cell_popup_blid_pane_t1

0x3f66,	// (0x000703f4) mup2_indicator_pane_ParamLimits

0x3f66,	// (0x000703f4) mup2_indicator_pane

0xb373,	// (0x00077801) mup2_visualizer_osc_pane

0xc85b,	// (0x00078ce9) mup2_visualizer_spec_pane_ParamLimits

0xc85b,	// (0x00078ce9) mup2_visualizer_spec_pane

0x40e3,	// (0x00070571) mup2_spec_half_pane

0x40ec,	// (0x0007057a) mup2_spec_half_pane_cp

0x40f4,	// (0x00070582) mup2_spec_bar_pane_ParamLimits

0x40f4,	// (0x00070582) mup2_spec_bar_pane

0xc7fc,	// (0x00078c8a) mup2_spec_bar_pane_g1

0xc806,	// (0x00078c94) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ba94) mup2_spec_bar_pane_g

0x4114,	// (0x000705a2) mup2_osc_middle_pane

0xc818,	// (0x00078ca6) mup2_visualizer_osc_pane_g1

0x9125,	// (0x000755b3) popup_number_entry_window_t1_ParamLimits

0x9138,	// (0x000755c6) popup_number_entry_window_t2_ParamLimits

0x914a,	// (0x000755d8) popup_number_entry_window_t3_ParamLimits

0x0360,	// (0x0006c7ee) popup_number_entry_window_t5_ParamLimits

0x0360,	// (0x0006c7ee) popup_number_entry_window_t5

0xf0c6,	// (0x0007b554) popup_number_entry_window_t_ParamLimits

0x915c,	// (0x000755ea) text_title_cp2_ParamLimits

0x96c6,	// (0x00075b54) aid_hotspot_pointer_text2_pane

0x96e0,	// (0x00075b6e) main_viewer_pane_g9_ParamLimits

0x96e0,	// (0x00075b6e) main_viewer_pane_g9

0xac29,	// (0x000770b7) cale_month_pane_t1_ParamLimits

0xac66,	// (0x000770f4) bg_cale_pane_ParamLimits

0xac7e,	// (0x0007710c) list_cale_pane_ParamLimits

0xac8f,	// (0x0007711d) listscroll_cale_day_pane_t1

0xaca1,	// (0x0007712f) scroll_pane_cp09_ParamLimits

0x28c2,	// (0x0006ed50) main_mup_eq_pane_t1_ParamLimits

0x28c2,	// (0x0006ed50) main_mup_eq_pane_t1

0x28dc,	// (0x0006ed6a) main_mup_eq_pane_t2_ParamLimits

0x28dc,	// (0x0006ed6a) main_mup_eq_pane_t2

0x28f6,	// (0x0006ed84) main_mup_eq_pane_t3_ParamLimits

0x28f6,	// (0x0006ed84) main_mup_eq_pane_t3

0x2912,	// (0x0006eda0) main_mup_eq_pane_t4_ParamLimits

0x2912,	// (0x0006eda0) main_mup_eq_pane_t4

0x292e,	// (0x0006edbc) main_mup_eq_pane_t5_ParamLimits

0x292e,	// (0x0006edbc) main_mup_eq_pane_t5

0x294a,	// (0x0006edd8) main_mup_eq_pane_t6_ParamLimits

0x294a,	// (0x0006edd8) main_mup_eq_pane_t6

0x295e,	// (0x0006edec) main_mup_eq_pane_t7_ParamLimits

0x295e,	// (0x0006edec) main_mup_eq_pane_t7

0x2972,	// (0x0006ee00) main_mup_eq_pane_t8_ParamLimits

0x2972,	// (0x0006ee00) main_mup_eq_pane_t8

0x2986,	// (0x0006ee14) main_mup_eq_pane_t9_ParamLimits

0x2986,	// (0x0006ee14) main_mup_eq_pane_t9

0x29a0,	// (0x0006ee2e) main_mup_eq_pane_t10_ParamLimits

0x29a0,	// (0x0006ee2e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007b8e3) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007b8e3) main_mup_eq_pane_t

0x2a4f,	// (0x0006eedd) mup_equalizer_pane_cp5_ParamLimits

0x2a63,	// (0x0006eef1) mup_equalizer_pane_cp6_ParamLimits

0x2a77,	// (0x0006ef05) mup_equalizer_pane_cp7_ParamLimits

0x90fb,	// (0x00075589) main_gallery_pane

0xc821,	// (0x00078caf) smil2_volume_pane

0xc829,	// (0x00078cb7) smil_status_volume_pane_g1_ParamLimits

0xc83c,	// (0x00078cca) smil_status_volume_pane_g2_ParamLimits

0x9740,	// (0x00075bce) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007ba99) smil_status_volume_pane_g_ParamLimits

0xc98e,	// (0x00078e1c) bg_popup_window_pane_cp07_ParamLimits

0xc99c,	// (0x00078e2a) blid_firmament_pane

0x411d,	// (0x000705ab) aid_size_cell_gallery_ParamLimits

0x411d,	// (0x000705ab) aid_size_cell_gallery

0x4133,	// (0x000705c1) grid_gallery_pane_ParamLimits

0x4133,	// (0x000705c1) grid_gallery_pane

0x414c,	// (0x000705da) cell_gallery_pane_ParamLimits

0x414c,	// (0x000705da) cell_gallery_pane

0xcac1,	// (0x00078f4f) bg_cell_gallery_focus_pane_ParamLimits

0xcac1,	// (0x00078f4f) bg_cell_gallery_focus_pane

0xcad3,	// (0x00078f61) cell_gallery_pane_g1_ParamLimits

0xcad3,	// (0x00078f61) cell_gallery_pane_g1

0x4195,	// (0x00070623) cell_gallery_pane_g2_ParamLimits

0x4195,	// (0x00070623) cell_gallery_pane_g2

0x41a2,	// (0x00070630) cell_gallery_pane_g3_ParamLimits

0x41a2,	// (0x00070630) cell_gallery_pane_g3

0xcadf,	// (0x00078f6d) cell_gallery_pane_g4_ParamLimits

0xcadf,	// (0x00078f6d) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007bb47) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007bb47) cell_gallery_pane_g

0xcaeb,	// (0x00078f79) bg_cell_gallery_focus_pane_g1

0xcaf3,	// (0x00078f81) bg_cell_gallery_focus_pane_g2

0xcafb,	// (0x00078f89) bg_cell_gallery_focus_pane_g3

0xcb03,	// (0x00078f91) bg_cell_gallery_focus_pane_g4

0xcb0b,	// (0x00078f99) bg_cell_gallery_focus_pane_g5

0xcb13,	// (0x00078fa1) bg_cell_gallery_focus_pane_g6

0xcb1b,	// (0x00078fa9) bg_cell_gallery_focus_pane_g7

0xcb23,	// (0x00078fb1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007bb50) bg_cell_gallery_focus_pane_g

0xcb2b,	// (0x00078fb9) aid_firma_cardinal

0xcb3f,	// (0x00078fcd) blid_firmament_pane_t1

0xcb56,	// (0x00078fe4) blid_firmament_pane_t2

0xcb6d,	// (0x00078ffb) blid_firmament_pane_t3

0xcb84,	// (0x00079012) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007bb61) blid_firmament_pane_t

0xcb9b,	// (0x00079029) blid_sat_info_pane

0xcbab,	// (0x00079039) blid_sat_info_pane_g1

0xcbab,	// (0x00079039) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007bb6a) blid_sat_info_pane_g

0xcbb5,	// (0x00079043) blid_sat_info_pane_t1

0xcbc3,	// (0x00079051) smil2_volume_content_pane

0xcbcc,	// (0x0007905a) smil2_volume_pane_g1

0xa038,	// (0x000764c6) smil2_volume_content_pane_g1

0xcbd4,	// (0x00079062) smil2_volume_content_pane_g2

0xcbdd,	// (0x0007906b) smil2_volume_content_pane_g3

0xcbf2,	// (0x00079080) smil2_volume_content_pane_g4

0xcbfb,	// (0x00079089) smil2_volume_content_pane_g5

0xcc04,	// (0x00079092) smil2_volume_content_pane_g6

0xcc0d,	// (0x0007909b) smil2_volume_content_pane_g7

0xcc16,	// (0x000790a4) smil2_volume_content_pane_g8

0xcc1f,	// (0x000790ad) smil2_volume_content_pane_g9

0xcc28,	// (0x000790b6) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007bb6f) smil2_volume_content_pane_g

0x0add,	// (0x0006cf6b) cale_week_day_heading_pane_t1_ParamLimits

0x0b27,	// (0x0006cfb5) cale_week_day_heading_pane_t2_ParamLimits

0x0b76,	// (0x0006d004) cale_week_day_heading_pane_t3_ParamLimits

0x0bc5,	// (0x0006d053) cale_week_day_heading_pane_t4_ParamLimits

0x0c14,	// (0x0006d0a2) cale_week_day_heading_pane_t5_ParamLimits

0x0c6b,	// (0x0006d0f9) cale_week_day_heading_pane_t6_ParamLimits

0x0cc2,	// (0x0006d150) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0007b65b) cale_week_day_heading_pane_t_ParamLimits

0xa8ad,	// (0x00076d3b) bg_cale_side_pane_ParamLimits

0x0d0c,	// (0x0006d19a) cale_week_time_pane_t1_ParamLimits

0x0d26,	// (0x0006d1b4) cale_week_time_pane_t2_ParamLimits

0x0d40,	// (0x0006d1ce) cale_week_time_pane_t3_ParamLimits

0x0d5a,	// (0x0006d1e8) cale_week_time_pane_t4_ParamLimits

0x0d74,	// (0x0006d202) cale_week_time_pane_t5_ParamLimits

0x0d8e,	// (0x0006d21c) cale_week_time_pane_t6_ParamLimits

0x0da8,	// (0x0006d236) cale_week_time_pane_t7_ParamLimits

0x0dc8,	// (0x0006d256) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0007b66a) cale_week_time_pane_t_ParamLimits

0x0de8,	// (0x0006d276) cell_cale_week_pane_g2_ParamLimits

0xa8ad,	// (0x00076d3b) bg_cale_side_pane_cp01_ParamLimits

0x2050,	// (0x0006e4de) cale_month_week_pane_t1_ParamLimits

0x2069,	// (0x0006e4f7) cale_month_week_pane_t2_ParamLimits

0x2082,	// (0x0006e510) cale_month_week_pane_t3_ParamLimits

0x209b,	// (0x0006e529) cale_month_week_pane_t4_ParamLimits

0x20b4,	// (0x0006e542) cale_month_week_pane_t5_ParamLimits

0x20cd,	// (0x0006e55b) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007b743) cale_month_week_pane_t_ParamLimits

0x9603,	// (0x00075a91) cell_cale_month_pane_g1_ParamLimits

0x90fb,	// (0x00075589) main_cale_event_viewer_pane

0x9085,	// (0x00075513) listscroll_cale_event_viewer_pane

0xcc31,	// (0x000790bf) list_cale_ev_pane

0xcc39,	// (0x000790c7) scroll_pane_cp023

0xcc45,	// (0x000790d3) field_cale_ev_pane_ParamLimits

0xcc45,	// (0x000790d3) field_cale_ev_pane

0xcc61,	// (0x000790ef) field_cale_ev_content_pane_ParamLimits

0xcc61,	// (0x000790ef) field_cale_ev_content_pane

0xcc6d,	// (0x000790fb) field_cale_ev_pane_g1_ParamLimits

0xcc6d,	// (0x000790fb) field_cale_ev_pane_g1

0xcc79,	// (0x00079107) field_cale_ev_pane_g2_ParamLimits

0xcc79,	// (0x00079107) field_cale_ev_pane_g2

0xcc91,	// (0x0007911f) field_cale_ev_pane_g3_ParamLimits

0xcc91,	// (0x0007911f) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007bb84) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007bb84) field_cale_ev_pane_g

0xcca9,	// (0x00079137) field_cale_ev_pane_t1_ParamLimits

0xcca9,	// (0x00079137) field_cale_ev_pane_t1

0xccc0,	// (0x0007914e) field_cale_ev_content_pane_t1_ParamLimits

0xccc0,	// (0x0007914e) field_cale_ev_content_pane_t1

0xb4ff,	// (0x0007798d) bg_button_pane_cp01

0x07fc,	// (0x0006cc8a) listscroll_cale_week_pane_ParamLimits

0xa857,	// (0x00076ce5) popup_toolbar_window_cp01

0xa87e,	// (0x00076d0c) listscroll_cale_week_pane_t1_ParamLimits

0x07fc,	// (0x0006cc8a) listscroll_cale_day_pane_ParamLimits

0xa857,	// (0x00076ce5) popup_toolbar_window_cp02

0xac8f,	// (0x0007711d) listscroll_cale_day_pane_t1_ParamLimits

0x3467,	// (0x0006f8f5) main_cale_month_pane_ParamLimits

0x972b,	// (0x00075bb9) popup_toolbar_window_cp03_ParamLimits

0x972b,	// (0x00075bb9) popup_toolbar_window_cp03

0x2d62,	// (0x0006f1f0) main_image_pane_g2_ParamLimits

0x2d62,	// (0x0006f1f0) main_image_pane_g2

0x2d73,	// (0x0006f201) main_image_pane_g3_ParamLimits

0x2d73,	// (0x0006f201) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007b975) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007b975) main_image_pane_g

0xb619,	// (0x00077aa7) main_image_pane_t1_ParamLimits

0x2d84,	// (0x0006f212) main_image_pane_t2_ParamLimits

0x2d84,	// (0x0006f212) main_image_pane_t2

0x2d96,	// (0x0006f224) main_image_pane_t3_ParamLimits

0x2d96,	// (0x0006f224) main_image_pane_t3

0x2dbe,	// (0x0006f24c) main_image_pane_t4_ParamLimits

0x2dbe,	// (0x0006f24c) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007b97c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007b97c) main_image_pane_t

0x2dde,	// (0x0006f26c) popup_image_details_window_cp01

0x2de8,	// (0x0006f276) popup_toobar_trans_pane_cp01_ParamLimits

0x2de8,	// (0x0006f276) popup_toobar_trans_pane_cp01

0x3578,	// (0x0006fa06) popup_image_details_window_ParamLimits

0x3578,	// (0x0006fa06) popup_image_details_window

0x96fe,	// (0x00075b8c) popup_image_focus_window

0x3989,	// (0x0006fe17) camera2_autofocus_pane_ParamLimits

0x3989,	// (0x0006fe17) camera2_autofocus_pane

0x9085,	// (0x00075513) bg_popup_sub_pane_cp06

0xccdd,	// (0x0007916b) popup_image_focus_window_g1

0xcce5,	// (0x00079173) popup_image_focus_window_g2

0xcced,	// (0x0007917b) popup_image_focus_window_g3

0xccf5,	// (0x00079183) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007bb8b) popup_image_focus_window_g

0xccfd,	// (0x0007918b) popup_image_focus_window_t1

0xcd0b,	// (0x00079199) popup_image_focus_window_t2

0xcd1b,	// (0x000791a9) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007bb94) popup_image_focus_window_t

0xcd29,	// (0x000791b7) camera2_autofocus_pane_g1

0xa247,	// (0x000766d5) bg_tb_trans_pane_cp01

0xcd37,	// (0x000791c5) popup_image_details_window_g1

0xcd4a,	// (0x000791d8) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007bba6) popup_image_details_window_g

0xcd73,	// (0x00079201) popup_image_details_window_t1

0xcd85,	// (0x00079213) popup_image_details_window_t2

0xcd9e,	// (0x0007922c) popup_image_details_window_t3

0xcdb2,	// (0x00079240) popup_image_details_window_t4

0xcdcd,	// (0x0007925b) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007bbad) popup_image_details_window_t

0x9f9a,	// (0x00076428) bg_calc_paper_pane_ParamLimits

0x90fb,	// (0x00075589) grid_highlight_pane_cp013

0x9520,	// (0x000759ae) list_calc_pane_ParamLimits

0x9532,	// (0x000759c0) scroll_pane_cp024

0x9fae,	// (0x0007643c) bg_calc_display_pane_ParamLimits

0x064a,	// (0x0006cad8) calc_display_pane_t1_ParamLimits

0x065c,	// (0x0006caea) calc_display_pane_t2_ParamLimits

0x953a,	// (0x000759c8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0007b5db) calc_display_pane_t_ParamLimits

0x0721,	// (0x0006cbaf) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0007b5f8) cell_calc_pane_g

0x072a,	// (0x0006cbb8) cell_calc_pane_t1

0xa00d,	// (0x0007649b) grid_highlight_pane_cp02_ParamLimits

0xa023,	// (0x000764b1) toolbar_button_pane_cp01_ParamLimits

0xa023,	// (0x000764b1) toolbar_button_pane_cp01

0xb65e,	// (0x00077aec) temp_image_control_pane_ParamLimits

0xb65e,	// (0x00077aec) temp_image_control_pane

0x90ed,	// (0x0007557b) main_mp3_pane

0xcde7,	// (0x00079275) temp_image_control_pane_g1_ParamLimits

0xcde7,	// (0x00079275) temp_image_control_pane_g1

0xcdf5,	// (0x00079283) temp_image_control_pane_g2_ParamLimits

0xcdf5,	// (0x00079283) temp_image_control_pane_g2

0xce07,	// (0x00079295) temp_image_control_pane_g3_ParamLimits

0xce07,	// (0x00079295) temp_image_control_pane_g3

0x41df,	// (0x0007066d) temp_image_control_pane_g4_ParamLimits

0x41df,	// (0x0007066d) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007bbb8) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007bbb8) temp_image_control_pane_g

0xcde7,	// (0x00079275) main_mp3_pane_g1

0x41f2,	// (0x00070680) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007bbc1) main_mp3_pane_g

0xce4a,	// (0x000792d8) main_mp3_pane_t1

0xa8ff,	// (0x00076d8d) main_camera_pane_g8_ParamLimits

0xa8ff,	// (0x00076d8d) main_camera_pane_g8

0x1110,	// (0x0006d59e) main_video_pane_g7_ParamLimits

0x1110,	// (0x0006d59e) main_video_pane_g7

0x9780,	// (0x00075c0e) main_camera2_pane_t7_ParamLimits

0x9780,	// (0x00075c0e) main_camera2_pane_t7

0xaa47,	// (0x00076ed5) scroll_pane_cp025_ParamLimits

0xaa47,	// (0x00076ed5) scroll_pane_cp025

0xaa5b,	// (0x00076ee9) scroll_pane_cp026_ParamLimits

0xaa5b,	// (0x00076ee9) scroll_pane_cp026

0xaa6a,	// (0x00076ef8) wml_content_pane_ParamLimits

0x90fb,	// (0x00075589) main_touch_calib_pane

0x42c8,	// (0x00070756) main_touch_calib_pane_g1

0x42da,	// (0x00070768) main_touch_calib_pane_g2

0x42ec,	// (0x0007077a) main_touch_calib_pane_g3

0x42fe,	// (0x0007078c) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007bbdf) main_touch_calib_pane_g

0x4310,	// (0x0007079e) main_touch_calib_pane_t1

0x432a,	// (0x000707b8) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007bbe8) main_touch_calib_pane_t

0xb20e,	// (0x0007769c) mup_progress_pane_cp02

0xb243,	// (0x000776d1) navi_pane_g1

0xb2fe,	// (0x0007778c) navi_pane_mp_t3

0x90ed,	// (0x0007557b) main_mp3_pane_ParamLimits

0x36f5,	// (0x0006fb83) navi_pane_ParamLimits

0xcde7,	// (0x00079275) main_mp3_pane_g1_ParamLimits

0x41f2,	// (0x00070680) main_mp3_pane_g2_ParamLimits

0x4200,	// (0x0007068e) main_mp3_pane_g3_ParamLimits

0x4200,	// (0x0007068e) main_mp3_pane_g3

0x420e,	// (0x0007069c) main_mp3_pane_g4_ParamLimits

0x420e,	// (0x0007069c) main_mp3_pane_g4

0xce17,	// (0x000792a5) main_mp3_pane_g5_ParamLimits

0xce17,	// (0x000792a5) main_mp3_pane_g5

0xce25,	// (0x000792b3) main_mp3_pane_g6_ParamLimits

0xce25,	// (0x000792b3) main_mp3_pane_g6

0xce32,	// (0x000792c0) main_mp3_pane_g7_ParamLimits

0xce32,	// (0x000792c0) main_mp3_pane_g7

0xce3e,	// (0x000792cc) main_mp3_pane_g8_ParamLimits

0xce3e,	// (0x000792cc) main_mp3_pane_g8

0xf733,	// (0x0007bbc1) main_mp3_pane_g_ParamLimits

0x421c,	// (0x000706aa) main_mp3_pane_t2

0x422a,	// (0x000706b8) main_mp3_pane_t3

0xce58,	// (0x000792e6) main_mp3_pane_t4

0xce66,	// (0x000792f4) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007bbd2) main_mp3_pane_t

0xce74,	// (0x00079302) mup_progress_pane_cp01

0x0109,	// (0x0006c597) aid_zoom_text_secondary2

0xcc31,	// (0x000790bf) list_cale_ev2_pane

0xcc39,	// (0x000790c7) scroll_pane_cp023_ParamLimits

0x4380,	// (0x0007080e) field_cale_ev2_pane_ParamLimits

0x4380,	// (0x0007080e) field_cale_ev2_pane

0xa255,	// (0x000766e3) field_cale_ev2_pane_g1_ParamLimits

0xa255,	// (0x000766e3) field_cale_ev2_pane_g1

0xa261,	// (0x000766ef) field_cale_ev2_pane_g2_ParamLimits

0xa261,	// (0x000766ef) field_cale_ev2_pane_g2

0xa279,	// (0x00076707) field_cale_ev2_pane_g3_ParamLimits

0xa279,	// (0x00076707) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007bbf3) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007bbf3) field_cale_ev2_pane_g

0xa29d,	// (0x0007672b) field_cale_ev2_pane_t1_ParamLimits

0xa29d,	// (0x0007672b) field_cale_ev2_pane_t1

0xa2b4,	// (0x00076742) field_cale_ev2_pane_t2_ParamLimits

0xa2b4,	// (0x00076742) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007bbfc) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007bbfc) field_cale_ev2_pane_t

0x2c15,	// (0x0006f0a3) main_postcard_pane_g5_ParamLimits

0x2c15,	// (0x0006f0a3) main_postcard_pane_g5

0x2c2b,	// (0x0006f0b9) main_postcard_pane_g6_ParamLimits

0x2c2b,	// (0x0006f0b9) main_postcard_pane_g6

0x0eca,	// (0x0006d358) camera2_autofocus_pane_cp_ParamLimits

0x0eca,	// (0x0006d358) camera2_autofocus_pane_cp

0x90ed,	// (0x0007557b) main_mup3_pane

0x43c2,	// (0x00070850) main_mup3_pane_g1_ParamLimits

0x43c2,	// (0x00070850) main_mup3_pane_g1

0x43e4,	// (0x00070872) main_mup3_pane_g2_ParamLimits

0x43e4,	// (0x00070872) main_mup3_pane_g2

0x4466,	// (0x000708f4) main_mup3_pane_g3_ParamLimits

0x4466,	// (0x000708f4) main_mup3_pane_g3

0x44ac,	// (0x0007093a) main_mup3_pane_g4_ParamLimits

0x44ac,	// (0x0007093a) main_mup3_pane_g4

0x44f2,	// (0x00070980) main_mup3_pane_g5_ParamLimits

0x44f2,	// (0x00070980) main_mup3_pane_g5

0x453a,	// (0x000709c8) main_mup3_pane_g6_ParamLimits

0x453a,	// (0x000709c8) main_mup3_pane_g6

0xce7c,	// (0x0007930a) main_mup3_pane_g7_ParamLimits

0xce7c,	// (0x0007930a) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007bc0c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007bc0c) main_mup3_pane_g

0x45b8,	// (0x00070a46) main_mup3_pane_t1_ParamLimits

0x45b8,	// (0x00070a46) main_mup3_pane_t1

0x462c,	// (0x00070aba) main_mup3_pane_t2_ParamLimits

0x462c,	// (0x00070aba) main_mup3_pane_t2

0x4700,	// (0x00070b8e) main_mup3_pane_t4_ParamLimits

0x4700,	// (0x00070b8e) main_mup3_pane_t4

0x4756,	// (0x00070be4) main_mup3_pane_t5_ParamLimits

0x4756,	// (0x00070be4) main_mup3_pane_t5

0x4812,	// (0x00070ca0) main_mup3_pane_t6_ParamLimits

0x4812,	// (0x00070ca0) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007bc1d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007bc1d) main_mup3_pane_t

0x48ca,	// (0x00070d58) mup3_progress_pane_ParamLimits

0x48ca,	// (0x00070d58) mup3_progress_pane

0x4956,	// (0x00070de4) popup_mup3_control_window_ParamLimits

0x4956,	// (0x00070de4) popup_mup3_control_window

0xce8a,	// (0x00079318) popup_mup3_text_window

0x4988,	// (0x00070e16) mup3_progress_pane_t1

0x49a7,	// (0x00070e35) mup3_progress_pane_t2

0xce92,	// (0x00079320) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007bc2a) mup3_progress_pane_t

0xceaf,	// (0x0007933d) mup_progress_pane_cp03

0x9085,	// (0x00075513) bg_tb_trans_pane_cp04

0x49c6,	// (0x00070e54) mup3_volume_pane

0x49ce,	// (0x00070e5c) popup_mup3_control_window_g1

0x49d7,	// (0x00070e65) mup3_volume_pane_g1

0x49e0,	// (0x00070e6e) mup3_volume_pane_g2

0x49e9,	// (0x00070e77) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007bc31) mup3_volume_pane_g

0x9085,	// (0x00075513) bg_tb_trans_pane_cp03

0xcebf,	// (0x0007934d) popup_mup3_text_window_g1

0xcec7,	// (0x00079355) popup_mup3_text_window_t1

0x9ff6,	// (0x00076484) list_calc_item_pane_g1_ParamLimits

0xc8fc,	// (0x00078d8a) mup_volume_pane_cp_g1

0x4344,	// (0x000707d2) main_touch_calib_pane_t3

0x4358,	// (0x000707e6) main_touch_calib_pane_t4

0x436c,	// (0x000707fa) main_touch_calib_pane_t5

0x908f,	// (0x0007551d) aid_cell_size_toolbar2

0x9097,	// (0x00075525) aid_popup3_width_pane

0x0101,	// (0x0006c58f) aid_zoom_text_msg_primary

0x0ea1,	// (0x0006d32f) vorec_t7

0x9fba,	// (0x00076448) bg_calc_paper_pane_g1_ParamLimits

0x9fc6,	// (0x00076454) bg_calc_paper_pane_g2_ParamLimits

0x9fd2,	// (0x00076460) bg_calc_paper_pane_g3_ParamLimits

0x9fde,	// (0x0007646c) bg_calc_paper_pane_g4_ParamLimits

0x9fea,	// (0x00076478) bg_calc_paper_pane_g5_ParamLimits

0x06a5,	// (0x0006cb33) bg_calc_paper_pane_g6_ParamLimits

0x06b6,	// (0x0006cb44) bg_calc_paper_pane_g7_ParamLimits

0x06c7,	// (0x0006cb55) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0007b5e2) bg_calc_paper_pane_g_ParamLimits

0x06da,	// (0x0006cb68) calc_bg_paper_pane_g9_ParamLimits

0x1022,	// (0x0006d4b0) image_qvga_pane_ParamLimits

0x1022,	// (0x0006d4b0) image_qvga_pane

0x9eca,	// (0x00076358) bg_popup_sub_pane_cp04_ParamLimits

0xb595,	// (0x00077a23) popup_mup_playback_window_g1_ParamLimits

0xb5a1,	// (0x00077a2f) popup_mup_playback_window_t1_ParamLimits

0xb5b6,	// (0x00077a44) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007b970) popup_mup_playback_window_t_ParamLimits

0x3e80,	// (0x0007030e) main_mup2_pane_g3_ParamLimits

0x3e80,	// (0x0007030e) main_mup2_pane_g3

0x1395,	// (0x0006d823) popup_toolbar_window_cp04

0xb9ab,	// (0x00077e39) popup_call2_audio_second_window_g3_ParamLimits

0xb9ab,	// (0x00077e39) popup_call2_audio_second_window_g3

0xbdb5,	// (0x00078243) popup_call2_audio_first_window_g4_ParamLimits

0xbdb5,	// (0x00078243) popup_call2_audio_first_window_g4

0xc434,	// (0x000788c2) popup_call2_audio_in_window_g4_ParamLimits

0xc434,	// (0x000788c2) popup_call2_audio_in_window_g4

0x2d44,	// (0x0006f1d2) aid_area_sk_bg_cut_ParamLimits

0x2d44,	// (0x0006f1d2) aid_area_sk_bg_cut

0xb5cb,	// (0x00077a59) aid_area_sk_bg_cut_2_ParamLimits

0xb5cb,	// (0x00077a59) aid_area_sk_bg_cut_2

0x4185,	// (0x00070613) aid_placing_details_win

0x418d,	// (0x0007061b) aid_placing_details_win_2

0xcd29,	// (0x000791b7) camera2_autofocus_pane_g1_ParamLimits

0x02a7,	// (0x0006c735) popup_fixed_preview_cale_window_ParamLimits

0x02a7,	// (0x0006c735) popup_fixed_preview_cale_window

0xb384,	// (0x00077812) navi_slider_pane_g3

0xb38d,	// (0x0007781b) navi_slider_pane_g4

0xb396,	// (0x00077824) navi_slider_pane_g5

0xb384,	// (0x00077812) navi_slider_pane_g6

0x96ad,	// (0x00075b3b) navi_slider_pane_g7

0xb4cc,	// (0x0007795a) mup_scale_pane_g3

0xb4d5,	// (0x00077963) mup_scale_pane_g4

0xb4de,	// (0x0007796c) mup_scale_pane_g5

0x2a8b,	// (0x0006ef19) mup_scale_pane_g6

0x2a94,	// (0x0006ef22) mup_scale_pane_g7

0xb384,	// (0x00077812) cams2_slider_pane_g3

0xc97e,	// (0x00078e0c) cams2_slider_pane_g4

0x97e6,	// (0x00075c74) cams2_slider_pane_g5

0xb384,	// (0x00077812) cams2_slider_pane_g6

0x97ee,	// (0x00075c7c) cams2_slider_pane_g7

0xcbab,	// (0x00079039) camera2_autofocus_pane_cp_g1

0xc795,	// (0x00078c23) bg_popup_preview_window_pane_cp02_ParamLimits

0xc795,	// (0x00078c23) bg_popup_preview_window_pane_cp02

0xced5,	// (0x00079363) list_fp_cale_pane_ParamLimits

0xced5,	// (0x00079363) list_fp_cale_pane

0xcee1,	// (0x0007936f) popup_fixed_preview_cale_window_t1_ParamLimits

0xcee1,	// (0x0007936f) popup_fixed_preview_cale_window_t1

0x49f2,	// (0x00070e80) popup_fixed_preview_cale_window_t2_ParamLimits

0x49f2,	// (0x00070e80) popup_fixed_preview_cale_window_t2

0x4a07,	// (0x00070e95) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a07,	// (0x00070e95) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007bc38) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007bc38) popup_fixed_preview_cale_window_t

0x4a1c,	// (0x00070eaa) list_single_fp_cale_pane_ParamLimits

0x4a1c,	// (0x00070eaa) list_single_fp_cale_pane

0xceff,	// (0x0007938d) list_single_fp_cale_pane_g1_ParamLimits

0xceff,	// (0x0007938d) list_single_fp_cale_pane_g1

0xcf0b,	// (0x00079399) list_single_fp_cale_pane_g2_ParamLimits

0xcf0b,	// (0x00079399) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007bc3f) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007bc3f) list_single_fp_cale_pane_g

0xcf24,	// (0x000793b2) list_single_fp_cale_pane_t1_ParamLimits

0xcf24,	// (0x000793b2) list_single_fp_cale_pane_t1

0xcf36,	// (0x000793c4) list_single_fp_cale_pane_t2_ParamLimits

0xcf36,	// (0x000793c4) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007bc46) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007bc46) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x90fb,	// (0x00075589) main_dialer_pane

0x4a33,	// (0x00070ec1) aid_cell_size_keypad

0x4a3d,	// (0x00070ecb) dialer_ne_pane

0x4a45,	// (0x00070ed3) grid_dialer_command_1_pane

0x4a4d,	// (0x00070edb) grid_dialer_command_2_pane

0x4a55,	// (0x00070ee3) grid_dialer_keypad_pane

0x4a67,	// (0x00070ef5) bg_popup_call_pane_cp06_ParamLimits

0x4a67,	// (0x00070ef5) bg_popup_call_pane_cp06

0x4a73,	// (0x00070f01) dialer_ne_clear_pane_ParamLimits

0x4a73,	// (0x00070f01) dialer_ne_clear_pane

0xcf69,	// (0x000793f7) dialer_ne_pane_g1

0xcf71,	// (0x000793ff) dialer_ne_pane_t1_ParamLimits

0xcf71,	// (0x000793ff) dialer_ne_pane_t1

0x4a7f,	// (0x00070f0d) dialer_ne_pane_t2_ParamLimits

0x4a7f,	// (0x00070f0d) dialer_ne_pane_t2

0x4aa9,	// (0x00070f37) dialer_ne_pane_t3_ParamLimits

0x4aa9,	// (0x00070f37) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007bc4b) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007bc4b) dialer_ne_pane_t

0x4ad9,	// (0x00070f67) dialer_ne_pane_t3_copy1_ParamLimits

0x4ad9,	// (0x00070f67) dialer_ne_pane_t3_copy1

0x4b08,	// (0x00070f96) cell_dialer_keypad_pane_ParamLimits

0x4b08,	// (0x00070f96) cell_dialer_keypad_pane

0x4b1f,	// (0x00070fad) cell_dialer_command_1_pane_ParamLimits

0x4b1f,	// (0x00070fad) cell_dialer_command_1_pane

0x4b35,	// (0x00070fc3) cell_dialer_command_2_pane_ParamLimits

0x4b35,	// (0x00070fc3) cell_dialer_command_2_pane

0xcf83,	// (0x00079411) bg_button_pane_cp02_ParamLimits

0xcf83,	// (0x00079411) bg_button_pane_cp02

0x4b44,	// (0x00070fd2) cell_dialer_keypad_pane_g1_ParamLimits

0x4b44,	// (0x00070fd2) cell_dialer_keypad_pane_g1

0xcf83,	// (0x00079411) bg_button_pane_cp03_ParamLimits

0xcf83,	// (0x00079411) bg_button_pane_cp03

0x4b59,	// (0x00070fe7) cell_dialer_command_1_pane_g1_ParamLimits

0x4b59,	// (0x00070fe7) cell_dialer_command_1_pane_g1

0xcf8f,	// (0x0007941d) bg_button_pane_cp04

0x4b6c,	// (0x00070ffa) cell_dialer_command_2_pane_g1

0xb373,	// (0x00077801) bg_button_pane_cp06

0xcf97,	// (0x00079425) dialer_ne_clear_pane_g1

0xb24f,	// (0x000776dd) navi_pane_g2

0xb27d,	// (0x0007770b) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007b873) navi_pane_g

0xb30c,	// (0x0007779a) navi_pane_mv_g2

0xb333,	// (0x000777c1) navi_pane_mv_g5

0x264b,	// (0x0006ead9) navi_pane_mv_t1

0x9fae,	// (0x0007643c) main_clock2_pane

0x4bb9,	// (0x00071047) main_clock2_list_pane_ParamLimits

0x4bb9,	// (0x00071047) main_clock2_list_pane

0x4bf1,	// (0x0007107f) main_clock2_pane_t1_ParamLimits

0x4bf1,	// (0x0007107f) main_clock2_pane_t1

0x4c2f,	// (0x000710bd) main_clock2_pane_t2_ParamLimits

0x4c2f,	// (0x000710bd) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007bc57) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007bc57) main_clock2_pane_t

0x4ccd,	// (0x0007115b) popup_clock_analogue_window_cp03_ParamLimits

0x4ccd,	// (0x0007115b) popup_clock_analogue_window_cp03

0x4cf2,	// (0x00071180) popup_clock_digital_window_cp02_ParamLimits

0x4cf2,	// (0x00071180) popup_clock_digital_window_cp02

0x4d65,	// (0x000711f3) main_clock2_list_single_pane_ParamLimits

0x4d65,	// (0x000711f3) main_clock2_list_single_pane

0xb373,	// (0x00077801) list_highlight_pane_cp05

0xcfd1,	// (0x0007945f) main_clock2_list_single_pane_t1

0x1395,	// (0x0006d823) popup_toolbar_window_cp04_ParamLimits

0x41af,	// (0x0007063d) camera2_autofocus_pane_g2_ParamLimits

0x41af,	// (0x0007063d) camera2_autofocus_pane_g2

0x41bb,	// (0x00070649) camera2_autofocus_pane_g3_ParamLimits

0x41bb,	// (0x00070649) camera2_autofocus_pane_g3

0x41c7,	// (0x00070655) camera2_autofocus_pane_g4_ParamLimits

0x41c7,	// (0x00070655) camera2_autofocus_pane_g4

0x41d3,	// (0x00070661) camera2_autofocus_pane_g5_ParamLimits

0x41d3,	// (0x00070661) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007bb9b) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007bb9b) camera2_autofocus_pane_g

0x43a2,	// (0x00070830) camera2_autofocus_pane_cp_g2

0x43aa,	// (0x00070838) camera2_autofocus_pane_cp_g3

0x43b2,	// (0x00070840) camera2_autofocus_pane_cp_g4

0x43ba,	// (0x00070848) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007bc01) camera2_autofocus_pane_cp_g

0x4a5f,	// (0x00070eed) popup_dialer_spcha_window

0x9085,	// (0x00075513) bg_popup_sub_pane_cp07

0xcfdf,	// (0x0007946d) list_spcha_pane

0xcfe7,	// (0x00079475) list_single_spcha_pane_ParamLimits

0xcfe7,	// (0x00079475) list_single_spcha_pane

0x9085,	// (0x00075513) list_highlight_pane_cp06

0xcff8,	// (0x00079486) list_single_spcha_pane_t1

0xc1de,	// (0x0007866c) popup_call2_audio_out_window_g4_ParamLimits

0xc1de,	// (0x0007866c) popup_call2_audio_out_window_g4

0x90fb,	// (0x00075589) main_imed2_pane

0x9706,	// (0x00075b94) popup_imed_adjust2_window

0x3590,	// (0x0006fa1e) popup_imed_trans_window_ParamLimits

0x3590,	// (0x0006fa1e) popup_imed_trans_window

0xc9e7,	// (0x00078e75) popup_blid_sat_info2_window_t1

0xc9f5,	// (0x00078e83) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007bb30) popup_blid_sat_info2_window_t

0x4e0f,	// (0x0007129d) aid_size_cell_colour_35

0x4e2f,	// (0x000712bd) aid_size_cell_colour_112

0x4e4f,	// (0x000712dd) aid_size_cell_effect

0xc7a1,	// (0x00078c2f) bg_tb_trans_pane_cp02

0xada0,	// (0x0007722e) heading_imed_pane

0x4e6f,	// (0x000712fd) listscroll_imed_pane

0xd006,	// (0x00079494) heading_imed_pane_g1

0xd00e,	// (0x0007949c) heading_imed_pane_t1

0xd01c,	// (0x000794aa) grid_imed_colour_35_pane_ParamLimits

0xd01c,	// (0x000794aa) grid_imed_colour_35_pane

0x4e7b,	// (0x00071309) grid_imed_effect_pane

0xd034,	// (0x000794c2) list_imed_aspect_pane

0x4e91,	// (0x0007131f) scroll_pane_cp027_ParamLimits

0x4e91,	// (0x0007131f) scroll_pane_cp027

0x4ea2,	// (0x00071330) cell_imed_effect_pane_ParamLimits

0x4ea2,	// (0x00071330) cell_imed_effect_pane

0xd03c,	// (0x000794ca) cell_imed_colour_pane_ParamLimits

0xd03c,	// (0x000794ca) cell_imed_colour_pane

0xd07e,	// (0x0007950c) cell_imed_colour_pane_g1_ParamLimits

0xd07e,	// (0x0007950c) cell_imed_colour_pane_g1

0xd08f,	// (0x0007951d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd08f,	// (0x0007951d) hgihlgiht_grid_pane_cp016

0x4ec9,	// (0x00071357) cell_imed_effect_pane_g1

0x4ed1,	// (0x0007135f) grid_highlight_pane_cp017

0xd0a0,	// (0x0007952e) list_imed_single_pane_ParamLimits

0xd0a0,	// (0x0007952e) list_imed_single_pane

0x9085,	// (0x00075513) list_highlight_pane_cp07

0xd0b6,	// (0x00079544) list_imed_aspect_pane_comp1_t1

0xc7a1,	// (0x00078c2f) bg_tb_trans_pane_cp05

0xd0d8,	// (0x00079566) popup_imed_adjust2_window_g1

0xd0ff,	// (0x0007958d) popup_imed_adjust2_window_t1

0xd117,	// (0x000795a5) slider_imed_adjust_pane

0xd12b,	// (0x000795b9) slider_imed_adjust_pane_g1

0xd13b,	// (0x000795c9) slider_imed_adjust_pane_g2

0xd14b,	// (0x000795d9) slider_imed_adjust_pane_g3

0xd15c,	// (0x000795ea) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007bc74) slider_imed_adjust_pane_g

0x4eda,	// (0x00071368) aid_size_cell_clipart2

0x4ee6,	// (0x00071374) grid_imed_clipart_pane

0xd16d,	// (0x000795fb) scroll_pane_cp031

0x4ef0,	// (0x0007137e) cell_imed_clipart_pane_ParamLimits

0x4ef0,	// (0x0007137e) cell_imed_clipart_pane

0x4f14,	// (0x000713a2) cell_imed_clipart_pane_g1

0x9085,	// (0x00075513) grid_highlight_pane_cp014

0x4bce,	// (0x0007105c) main_clock2_pane_g1_ParamLimits

0x4bce,	// (0x0007105c) main_clock2_pane_g1

0x4d10,	// (0x0007119e) aid_call2_pane_cp10

0x4d22,	// (0x000711b0) aid_call_pane_cp10

0xb1ae,	// (0x0007763c) popup_clock_analogue_window_cp10_g1

0xb1ae,	// (0x0007763c) popup_clock_analogue_window_cp10_g2

0x4d34,	// (0x000711c2) popup_clock_analogue_window_cp10_g3

0x4d34,	// (0x000711c2) popup_clock_analogue_window_cp10_g4

0xb1ae,	// (0x0007763c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007bc62) popup_clock_analogue_window_cp10_g

0x4d46,	// (0x000711d4) popup_clock_analogue_window_cp10_t1

0x4d77,	// (0x00071205) clock_digital_number_pane_cp10_ParamLimits

0x4d77,	// (0x00071205) clock_digital_number_pane_cp10

0x4d8f,	// (0x0007121d) clock_digital_number_pane_cp11_ParamLimits

0x4d8f,	// (0x0007121d) clock_digital_number_pane_cp11

0x4da7,	// (0x00071235) clock_digital_number_pane_cp12_ParamLimits

0x4da7,	// (0x00071235) clock_digital_number_pane_cp12

0x4dbf,	// (0x0007124d) clock_digital_number_pane_cp13_ParamLimits

0x4dbf,	// (0x0007124d) clock_digital_number_pane_cp13

0x4dd7,	// (0x00071265) clock_digital_separator_pane_cp10_ParamLimits

0x4dd7,	// (0x00071265) clock_digital_separator_pane_cp10

0x4def,	// (0x0007127d) popup_clock_digital_window_cp02_t1_ParamLimits

0x4def,	// (0x0007127d) popup_clock_digital_window_cp02_t1

0x9ec2,	// (0x00076350) clock_digital_number_pane_cp10_g1

0x9ec2,	// (0x00076350) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007bc7d) clock_digital_number_pane_cp10_g

0x9ec2,	// (0x00076350) clock_digital_separator_pane_cp10_g1

0x9ec2,	// (0x00076350) clock_digital_separator_pane_g2_cp10

0xb33b,	// (0x000777c9) navi_pane_vded_g4

0xb344,	// (0x000777d2) navi_pane_vded_g5

0xb34d,	// (0x000777db) navi_pane_vded_t1

0x90fb,	// (0x00075589) main_vded_pane

0x4f1d,	// (0x000713ab) main_vded_pane_g1

0x4f27,	// (0x000713b5) main_vded_pane_g2

0x4f31,	// (0x000713bf) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007bc82) main_vded_pane_g

0x4f3b,	// (0x000713c9) main_vded_pane_t1

0x4f49,	// (0x000713d7) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007bc89) main_vded_pane_t

0x4f57,	// (0x000713e5) vded_slider_pane

0x4f61,	// (0x000713ef) vded_video_pane

0xd175,	// (0x00079603) vded_video_pane_g1

0x4f6b,	// (0x000713f9) vded_video_pane_g2

0xcbab,	// (0x00079039) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007bc8e) vded_video_pane_g

0xd17f,	// (0x0007960d) vded_slider_pane_g1

0xd188,	// (0x00079616) vded_slider_pane_g2

0xd191,	// (0x0007961f) vded_slider_pane_g3

0xd19a,	// (0x00079628) vded_slider_pane_g4

0xd1a3,	// (0x00079631) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007bc95) vded_slider_pane_g

0x493e,	// (0x00070dcc) mup3_rocker_pane_ParamLimits

0x493e,	// (0x00070dcc) mup3_rocker_pane

0x4f74,	// (0x00071402) mup3_control_keys_pane_g1

0x4f7c,	// (0x0007140a) mup3_control_keys_pane_g2

0x4f84,	// (0x00071412) mup3_control_keys_pane_g3

0x4f8c,	// (0x0007141a) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007bca0) mup3_control_keys_pane_g

0x02de,	// (0x0006c76c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x02de,	// (0x0006c76c) popup_toolbar2_fixed_window_cp01

0x4972,	// (0x00070e00) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4972,	// (0x00070e00) popup_toolbar2_fixed_window_cp02

0xbb1d,	// (0x00077fab) popup_call2_audio_second_window_t4_ParamLimits

0xbb1d,	// (0x00077fab) popup_call2_audio_second_window_t4

0xc04b,	// (0x000784d9) popup_call2_audio_first_window_t6_ParamLimits

0xc04b,	// (0x000784d9) popup_call2_audio_first_window_t6

0xc2e1,	// (0x0007876f) popup_call2_audio_out_window_t6_ParamLimits

0xc2e1,	// (0x0007876f) popup_call2_audio_out_window_t6

0x90fb,	// (0x00075589) main_vitu_pane

0x4f9c,	// (0x0007142a) aid_size_cell_itu_ParamLimits

0x4f9c,	// (0x0007142a) aid_size_cell_itu

0xa247,	// (0x000766d5) bg_popup_window_pane_cp08_ParamLimits

0xa247,	// (0x000766d5) bg_popup_window_pane_cp08

0x4fb2,	// (0x00071440) field_vitu_entry_pane_ParamLimits

0x4fb2,	// (0x00071440) field_vitu_entry_pane

0x4fc9,	// (0x00071457) grid_vitu_function_pane_ParamLimits

0x4fc9,	// (0x00071457) grid_vitu_function_pane

0x4fe4,	// (0x00071472) grid_vitu_itu_pane_ParamLimits

0x4fe4,	// (0x00071472) grid_vitu_itu_pane

0x5002,	// (0x00071490) cell_vitu_itu_pane_ParamLimits

0x5002,	// (0x00071490) cell_vitu_itu_pane

0x5026,	// (0x000714b4) cell_vitu_function_pane_ParamLimits

0x5026,	// (0x000714b4) cell_vitu_function_pane

0xa247,	// (0x000766d5) bg_popup_sub_pane_cp08_ParamLimits

0xa247,	// (0x000766d5) bg_popup_sub_pane_cp08

0x5041,	// (0x000714cf) field_vitu_entry_pane_t1_ParamLimits

0x5041,	// (0x000714cf) field_vitu_entry_pane_t1

0xd1c4,	// (0x00079652) field_vitu_entry_pane_t2_ParamLimits

0xd1c4,	// (0x00079652) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007bcae) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007bcae) field_vitu_entry_pane_t

0xd1e1,	// (0x0007966f) bg_button_pane_cp05_ParamLimits

0xd1e1,	// (0x0007966f) bg_button_pane_cp05

0x5060,	// (0x000714ee) cell_vitu_itu_pane_g1

0x5078,	// (0x00071506) cell_vitu_itu_pane_t1_ParamLimits

0x5078,	// (0x00071506) cell_vitu_itu_pane_t1

0x508a,	// (0x00071518) cell_vitu_itu_pane_t2_ParamLimits

0x508a,	// (0x00071518) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007bcb3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007bcb3) cell_vitu_itu_pane_t

0xd1ef,	// (0x0007967d) bg_button_pane_cp07

0x50cd,	// (0x0007155b) cell_vitu_function_pane_g1

0x9518,	// (0x000759a6) main_calc_pane_g1

0x00f5,	// (0x0006c583) aid_visual_content_pane

0x90fb,	// (0x00075589) main_vradio_pane

0x50d6,	// (0x00071564) main_vradio_pane_g1_ParamLimits

0x50d6,	// (0x00071564) main_vradio_pane_g1

0xd1f9,	// (0x00079687) main_vradio_pane_g2_ParamLimits

0xd1f9,	// (0x00079687) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007bcba) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007bcba) main_vradio_pane_g

0x50ef,	// (0x0007157d) main_vradio_pane_t1_ParamLimits

0x50ef,	// (0x0007157d) main_vradio_pane_t1

0x5104,	// (0x00071592) main_vradio_pane_t2_ParamLimits

0x5104,	// (0x00071592) main_vradio_pane_t2

0xd206,	// (0x00079694) main_vradio_pane_t3_ParamLimits

0xd206,	// (0x00079694) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007bcbf) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007bcbf) main_vradio_pane_t

0x5119,	// (0x000715a7) vradio_rocker_control_pane_ParamLimits

0x5119,	// (0x000715a7) vradio_rocker_control_pane

0x512b,	// (0x000715b9) vradio_station_info_pane_ParamLimits

0x512b,	// (0x000715b9) vradio_station_info_pane

0xd21a,	// (0x000796a8) vradio_frequency_info_pane_ParamLimits

0xd21a,	// (0x000796a8) vradio_frequency_info_pane

0xcbab,	// (0x00079039) vradio_station_info_pane_g1

0xd229,	// (0x000796b7) vradio_station_info_pane_t1_ParamLimits

0xd229,	// (0x000796b7) vradio_station_info_pane_t1

0xd24b,	// (0x000796d9) vradio_station_info_pane_t2_ParamLimits

0xd24b,	// (0x000796d9) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007bcc6) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007bcc6) vradio_station_info_pane_t

0xd25d,	// (0x000796eb) vradio_tuning_pane

0xd265,	// (0x000796f3) vradio_rocker_control_pane_g1

0xd26d,	// (0x000796fb) vradio_rocker_control_pane_g2

0xd275,	// (0x00079703) vradio_rocker_control_pane_g3

0xd27d,	// (0x0007970b) vradio_rocker_control_pane_g4

0xd285,	// (0x00079713) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007bccb) vradio_rocker_control_pane_g

0x513d,	// (0x000715cb) vradio_frequency_info_pane_g1

0xd28d,	// (0x0007971b) vradio_frequency_info_pane_t1_ParamLimits

0xd28d,	// (0x0007971b) vradio_frequency_info_pane_t1

0x5147,	// (0x000715d5) vradio_tuning_pane_g1

0x5152,	// (0x000715e0) vradio_tuning_pane_t1

0x90ab,	// (0x00075539) area_side_right_pane_ParamLimits

0x90ab,	// (0x00075539) area_side_right_pane

0xc75c,	// (0x00078bea) status_small_pane_g1

0xc764,	// (0x00078bf2) status_small_pane_g2

0xc76d,	// (0x00078bfb) status_small_pane_g3

0xc776,	// (0x00078c04) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007ba86) status_small_pane_g

0xc77f,	// (0x00078c0d) status_small_pane_t1

0x90fb,	// (0x00075589) main_video3_pane

0xd2a1,	// (0x0007972f) cams_zoom_vslider_pane

0xd2a9,	// (0x00079737) image3_wide_pane_ParamLimits

0xd2a9,	// (0x00079737) image3_wide_pane

0xd2c3,	// (0x00079751) image3_wide_small_pane

0xd2cf,	// (0x0007975d) main_video3_pane_g1_ParamLimits

0xd2cf,	// (0x0007975d) main_video3_pane_g1

0xd2eb,	// (0x00079779) main_video3_pane_g2_ParamLimits

0xd2eb,	// (0x00079779) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007bcd6) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007bcd6) main_video3_pane_g

0xd307,	// (0x00079795) main_video3_pane_t1_ParamLimits

0xd307,	// (0x00079795) main_video3_pane_t1

0xd332,	// (0x000797c0) main_video3_pane_t2_ParamLimits

0xd332,	// (0x000797c0) main_video3_pane_t2

0xd35d,	// (0x000797eb) main_video3_pane_t3_ParamLimits

0xd35d,	// (0x000797eb) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007bcdb) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007bcdb) main_video3_pane_t

0xd38a,	// (0x00079818) cams_zoom_vslider_pane_g1

0xd393,	// (0x00079821) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007bce2) cams_zoom_vslider_pane_g

0xd39b,	// (0x00079829) small_slider_vertical_pane

0xcbab,	// (0x00079039) small_slider_vertical_pane_g1

0xcbab,	// (0x00079039) small_slider_vertical_pane_g2

0xd3a3,	// (0x00079831) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007bce7) small_slider_vertical_pane_g

0x90fb,	// (0x00075589) main_hwr_training_pane

0xd3ac,	// (0x0007983a) hwr_training_instruct_pane_ParamLimits

0xd3ac,	// (0x0007983a) hwr_training_instruct_pane

0x5161,	// (0x000715ef) hwr_training_navi_pane_ParamLimits

0x5161,	// (0x000715ef) hwr_training_navi_pane

0x5180,	// (0x0007160e) hwr_training_write_pane_ParamLimits

0x5180,	// (0x0007160e) hwr_training_write_pane

0x9085,	// (0x00075513) bg_frame_shadow_pane

0xd3e3,	// (0x00079871) hwr_training_write_pane_g1

0xd3eb,	// (0x00079879) hwr_training_write_pane_g2

0xd3f3,	// (0x00079881) hwr_training_write_pane_g3

0xd3fb,	// (0x00079889) hwr_training_write_pane_g4

0xd403,	// (0x00079891) hwr_training_write_pane_g5

0xd40b,	// (0x00079899) hwr_training_write_pane_g6

0xd413,	// (0x000798a1) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007bcee) hwr_training_write_pane_g

0x97f7,	// (0x00075c85) hwr_training_navi_pane_g1_ParamLimits

0x97f7,	// (0x00075c85) hwr_training_navi_pane_g1

0x9809,	// (0x00075c97) hwr_training_navi_pane_g2_ParamLimits

0x9809,	// (0x00075c97) hwr_training_navi_pane_g2

0x981b,	// (0x00075ca9) hwr_training_navi_pane_g3_ParamLimits

0x981b,	// (0x00075ca9) hwr_training_navi_pane_g3

0x982b,	// (0x00075cb9) hwr_training_navi_pane_g4_ParamLimits

0x982b,	// (0x00075cb9) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007bcfd) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007bcfd) hwr_training_navi_pane_g

0x9838,	// (0x00075cc6) hwr_training_navi_pane_t1

0x51ca,	// (0x00071658) list_single_hwr_training_instruct_pane_ParamLimits

0x51ca,	// (0x00071658) list_single_hwr_training_instruct_pane

0xd41b,	// (0x000798a9) list_single_hwr_training_instruct_pane_t1

0xcaeb,	// (0x00078f79) bg_frame_shadow_pane_g1

0xd42a,	// (0x000798b8) bg_frame_shadow_pane_g2

0xd432,	// (0x000798c0) bg_frame_shadow_pane_g3

0xd43a,	// (0x000798c8) bg_frame_shadow_pane_g4

0xd442,	// (0x000798d0) bg_frame_shadow_pane_g5

0xd44a,	// (0x000798d8) bg_frame_shadow_pane_g6

0xd452,	// (0x000798e0) bg_frame_shadow_pane_g7

0xa079,	// (0x00076507) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007bd08) bg_frame_shadow_pane_g

0x90fb,	// (0x00075589) main_video_tele_dialer_pane

0x51e1,	// (0x0007166f) aid_size_cell_video_keypad_ParamLimits

0x51e1,	// (0x0007166f) aid_size_cell_video_keypad

0x51fb,	// (0x00071689) grid_video_dialer_keypad_pane_ParamLimits

0x51fb,	// (0x00071689) grid_video_dialer_keypad_pane

0x5249,	// (0x000716d7) video_down_pane_cp_ParamLimits

0x5249,	// (0x000716d7) video_down_pane_cp

0x527b,	// (0x00071709) cell_video_dialer_keypad_pane_ParamLimits

0x527b,	// (0x00071709) cell_video_dialer_keypad_pane

0xd45a,	// (0x000798e8) bg_button_pane_cp08_ParamLimits

0xd45a,	// (0x000798e8) bg_button_pane_cp08

0x529d,	// (0x0007172b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x529d,	// (0x0007172b) cell_video_dialer_keypad_pane_g1

0x4928,	// (0x00070db6) mup3_rocker2_pane_ParamLimits

0x4928,	// (0x00070db6) mup3_rocker2_pane

0xcbab,	// (0x00079039) mup3_rocker2_pane_g1

0x3479,	// (0x0006f907) main_dialer2_pane

0x90fb,	// (0x00075589) main_mp4_pane

0x984e,	// (0x00075cdc) main_mp4_pane_g1_ParamLimits

0x984e,	// (0x00075cdc) main_mp4_pane_g1

0x984e,	// (0x00075cdc) main_mp4_pane_g2_ParamLimits

0x984e,	// (0x00075cdc) main_mp4_pane_g2

0x52d8,	// (0x00071766) main_mp4_pane_g3_ParamLimits

0x52d8,	// (0x00071766) main_mp4_pane_g3

0x985c,	// (0x00075cea) main_mp4_pane_g4_ParamLimits

0x985c,	// (0x00075cea) main_mp4_pane_g4

0x9884,	// (0x00075d12) main_mp4_pane_g5_ParamLimits

0x9884,	// (0x00075d12) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007bd28) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007bd28) main_mp4_pane_g

0x98d4,	// (0x00075d62) main_mp4_pane_t1_ParamLimits

0x98d4,	// (0x00075d62) main_mp4_pane_t1

0x9930,	// (0x00075dbe) main_mp4_pane_t2_ParamLimits

0x9930,	// (0x00075dbe) main_mp4_pane_t2

0xd466,	// (0x000798f4) main_mp4_pane_t3_ParamLimits

0xd466,	// (0x000798f4) main_mp4_pane_t3

0x9982,	// (0x00075e10) main_mp4_pane_t4_ParamLimits

0x9982,	// (0x00075e10) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007bd35) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007bd35) main_mp4_pane_t

0x99c6,	// (0x00075e54) mp4_progress_pane_ParamLimits

0x99c6,	// (0x00075e54) mp4_progress_pane

0x9a10,	// (0x00075e9e) mp4_rocker_pane_ParamLimits

0x9a10,	// (0x00075e9e) mp4_rocker_pane

0xd48e,	// (0x0007991c) mp4_progress_pane_t1

0xd4a7,	// (0x00079935) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007bd3e) mp4_progress_pane_t

0xd4c0,	// (0x0007994e) mup_progress_pane_cp04

0xd7dc,	// (0x00079c6a) mp4_rocker_pane_g1

0x5314,	// (0x000717a2) aid_cell_size_keypad2_ParamLimits

0x5314,	// (0x000717a2) aid_cell_size_keypad2

0x532a,	// (0x000717b8) dialer2_ne_pane_ParamLimits

0x532a,	// (0x000717b8) dialer2_ne_pane

0x5344,	// (0x000717d2) grid_dialer2_keypad_pane_ParamLimits

0x5344,	// (0x000717d2) grid_dialer2_keypad_pane

0xc98e,	// (0x00078e1c) bg_popup_call_pane_cp07_ParamLimits

0xc98e,	// (0x00078e1c) bg_popup_call_pane_cp07

0x5362,	// (0x000717f0) dialer2_ne_pane_t1_ParamLimits

0x5362,	// (0x000717f0) dialer2_ne_pane_t1

0x539f,	// (0x0007182d) cell_dialer2_keypad_pane_ParamLimits

0x539f,	// (0x0007182d) cell_dialer2_keypad_pane

0xd4de,	// (0x0007996c) bg_button_pane_pane_cp04_ParamLimits

0xd4de,	// (0x0007996c) bg_button_pane_pane_cp04

0x53c1,	// (0x0007184f) cell_dialer2_keypad_pane_g1_ParamLimits

0x53c1,	// (0x0007184f) cell_dialer2_keypad_pane_g1

0x1269,	// (0x0006d6f7) aid_placing_vt_set_content_ParamLimits

0x1269,	// (0x0006d6f7) aid_placing_vt_set_content

0x1291,	// (0x0006d71f) aid_placing_vt_set_title_ParamLimits

0x1291,	// (0x0006d71f) aid_placing_vt_set_title

0x90fb,	// (0x00075589) main_image3_pane

0x5487,	// (0x00071915) area_side_right_pane_cp01_ParamLimits

0x5487,	// (0x00071915) area_side_right_pane_cp01

0x984e,	// (0x00075cdc) main_image3_pane_g1_ParamLimits

0x984e,	// (0x00075cdc) main_image3_pane_g1

0x549e,	// (0x0007192c) main_image3_pane_g2_ParamLimits

0x549e,	// (0x0007192c) main_image3_pane_g2

0x54c6,	// (0x00071954) main_image3_pane_g3_ParamLimits

0x54c6,	// (0x00071954) main_image3_pane_g3

0x54f0,	// (0x0007197e) main_image3_pane_g4_ParamLimits

0x54f0,	// (0x0007197e) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007bd4d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007bd4d) main_image3_pane_g

0x551a,	// (0x000719a8) main_image3_pane_t1_ParamLimits

0x551a,	// (0x000719a8) main_image3_pane_t1

0x5572,	// (0x00071a00) main_image3_pane_t2_ParamLimits

0x5572,	// (0x00071a00) main_image3_pane_t2

0x55c4,	// (0x00071a52) main_image3_pane_t3_ParamLimits

0x55c4,	// (0x00071a52) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007bd56) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007bd56) main_image3_pane_t

0xa247,	// (0x000766d5) grid_sctrl_middle_pane_cp01_ParamLimits

0xa247,	// (0x000766d5) grid_sctrl_middle_pane_cp01

0x564c,	// (0x00071ada) cell_sctrl_middle_pane_cp01_ParamLimits

0x564c,	// (0x00071ada) cell_sctrl_middle_pane_cp01

0x5669,	// (0x00071af7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5669,	// (0x00071af7) cell_sctrl_middle_pane_cp01_g1

0x90fb,	// (0x00075589) main_call4_pane

0x567f,	// (0x00071b0d) aid_size_button_call4_ParamLimits

0x567f,	// (0x00071b0d) aid_size_button_call4

0x56b0,	// (0x00071b3e) call4_windows_pane_ParamLimits

0x56b0,	// (0x00071b3e) call4_windows_pane

0x56d0,	// (0x00071b5e) grid_call4_button_pane_ParamLimits

0x56d0,	// (0x00071b5e) grid_call4_button_pane

0xd4ea,	// (0x00079978) call4_windows_conf_pane

0xd4ff,	// (0x0007998d) popup_call4_audio_first_window_ParamLimits

0xd4ff,	// (0x0007998d) popup_call4_audio_first_window

0xd54b,	// (0x000799d9) popup_call4_audio_second_window_ParamLimits

0xd54b,	// (0x000799d9) popup_call4_audio_second_window

0xd55f,	// (0x000799ed) popup_call4_audio_wait_window_ParamLimits

0xd55f,	// (0x000799ed) popup_call4_audio_wait_window

0x56fd,	// (0x00071b8b) cell_call4_button_pane_ParamLimits

0x56fd,	// (0x00071b8b) cell_call4_button_pane

0x5726,	// (0x00071bb4) bg_button_pane_cp09_ParamLimits

0x5726,	// (0x00071bb4) bg_button_pane_cp09

0x5732,	// (0x00071bc0) cell_call4_button_pane_g1_ParamLimits

0x5732,	// (0x00071bc0) cell_call4_button_pane_g1

0x5758,	// (0x00071be6) cell_call4_button_pane_t1_ParamLimits

0x5758,	// (0x00071be6) cell_call4_button_pane_t1

0xd5a7,	// (0x00079a35) popup_call4_audio_conf_window_ParamLimits

0xd5a7,	// (0x00079a35) popup_call4_audio_conf_window

0x4988,	// (0x00070e16) mup3_progress_pane_t1_ParamLimits

0x49a7,	// (0x00070e35) mup3_progress_pane_t2_ParamLimits

0xce92,	// (0x00079320) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007bc2a) mup3_progress_pane_t_ParamLimits

0xceaf,	// (0x0007933d) mup_progress_pane_cp03_ParamLimits

0x4f94,	// (0x00071422) mup3_control_keys_pane_g4_copy1

0x99f4,	// (0x00075e82) mp4_rocker2_pane_ParamLimits

0x99f4,	// (0x00075e82) mp4_rocker2_pane

0xd5bb,	// (0x00079a49) mp4_rocker2_pane_g1

0xd5c3,	// (0x00079a51) mp4_rocker2_pane_g2

0x9a62,	// (0x00075ef0) mp4_rocker2_pane_g3

0x9a6a,	// (0x00075ef8) mp4_rocker2_pane_g4

0x9a72,	// (0x00075f00) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007bd5f) mp4_rocker2_pane_g

0x90fb,	// (0x00075589) main_camera4_pane

0x90fb,	// (0x00075589) main_video4_pane

0x5217,	// (0x000716a5) main_video_tele_dialer_pane_t1_ParamLimits

0x5217,	// (0x000716a5) main_video_tele_dialer_pane_t1

0x5230,	// (0x000716be) main_video_tele_dialer_pane_t2_ParamLimits

0x5230,	// (0x000716be) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007bd19) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007bd19) main_video_tele_dialer_pane_t

0x5796,	// (0x00071c24) cam4_autofocus_pane_ParamLimits

0x5796,	// (0x00071c24) cam4_autofocus_pane

0x57ac,	// (0x00071c3a) cam4_image_uncrop_pane_ParamLimits

0x57ac,	// (0x00071c3a) cam4_image_uncrop_pane

0x57c6,	// (0x00071c54) cam4_indicators_pane_ParamLimits

0x57c6,	// (0x00071c54) cam4_indicators_pane

0x57f1,	// (0x00071c7f) main_camera4_pane_g1_ParamLimits

0x57f1,	// (0x00071c7f) main_camera4_pane_g1

0x5803,	// (0x00071c91) main_camera4_pane_g2_ParamLimits

0x5803,	// (0x00071c91) main_camera4_pane_g2

0x5816,	// (0x00071ca4) main_camera4_pane_g3_ParamLimits

0x5816,	// (0x00071ca4) main_camera4_pane_g3

0x5829,	// (0x00071cb7) main_camera4_pane_g4_ParamLimits

0x5829,	// (0x00071cb7) main_camera4_pane_g4

0x583c,	// (0x00071cca) main_camera4_pane_g5_ParamLimits

0x583c,	// (0x00071cca) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007bd6a) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007bd6a) main_camera4_pane_g

0x5860,	// (0x00071cee) main_camera4_pane_t1_ParamLimits

0x5860,	// (0x00071cee) main_camera4_pane_t1

0x9a96,	// (0x00075f24) bg_tb_trans_pane_cp06

0x9aac,	// (0x00075f3a) cam4_indicators_pane_g1

0x9abd,	// (0x00075f4b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007bd85) cam4_indicators_pane_g

0x9adb,	// (0x00075f69) cam4_indicators_pane_t1

0x58c4,	// (0x00071d52) main_video4_pane_g1_ParamLimits

0x58c4,	// (0x00071d52) main_video4_pane_g1

0x58d3,	// (0x00071d61) main_video4_pane_g2_ParamLimits

0x58d3,	// (0x00071d61) main_video4_pane_g2

0x58e2,	// (0x00071d70) main_video4_pane_g3_ParamLimits

0x58e2,	// (0x00071d70) main_video4_pane_g3

0x58f1,	// (0x00071d7f) main_video4_pane_g4_ParamLimits

0x58f1,	// (0x00071d7f) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007bd8c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007bd8c) main_video4_pane_g

0x590f,	// (0x00071d9d) vid4_indicators_pane_ParamLimits

0x590f,	// (0x00071d9d) vid4_indicators_pane

0x593d,	// (0x00071dcb) video4_image_uncrop_cif_pane_ParamLimits

0x593d,	// (0x00071dcb) video4_image_uncrop_cif_pane

0x5957,	// (0x00071de5) video4_image_uncrop_nhd_pane_ParamLimits

0x5957,	// (0x00071de5) video4_image_uncrop_nhd_pane

0x57ac,	// (0x00071c3a) video4_image_uncrop_vga_pane_ParamLimits

0x57ac,	// (0x00071c3a) video4_image_uncrop_vga_pane

0x90ed,	// (0x0007557b) bg_tb_trans_pane_cp07

0x9b05,	// (0x00075f93) vid4_indicators_pane_g1

0x9b19,	// (0x00075fa7) vid4_indicators_pane_g2

0x9b2d,	// (0x00075fbb) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007bd97) vid4_indicators_pane_g

0x9b5a,	// (0x00075fe8) vid4_indicators_pane_t1

0x596b,	// (0x00071df9) cam4_autofocus_pane_g1

0x5973,	// (0x00071e01) cam4_autofocus_pane_g2

0x597b,	// (0x00071e09) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007bda2) cam4_autofocus_pane_g

0x5983,	// (0x00071e11) cam4_autofocus_pane_g3_copy1

0x525f,	// (0x000716ed) video_down_pane_cp_t1

0x526d,	// (0x000716fb) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007bd1e) video_down_pane_cp_t

0x90ed,	// (0x0007557b) popup_vitu2_window_ParamLimits

0x90ed,	// (0x0007557b) popup_vitu2_window

0x598b,	// (0x00071e19) aid_size_cell2_itu2_ParamLimits

0x598b,	// (0x00071e19) aid_size_cell2_itu2

0x59b1,	// (0x00071e3f) aid_size_cell_itu2_ParamLimits

0x59b1,	// (0x00071e3f) aid_size_cell_itu2

0x5a0d,	// (0x00071e9b) bg_popup_window_pane_cp09_ParamLimits

0x5a0d,	// (0x00071e9b) bg_popup_window_pane_cp09

0x5a1b,	// (0x00071ea9) field_vitu2_entry_pane_ParamLimits

0x5a1b,	// (0x00071ea9) field_vitu2_entry_pane

0x5a41,	// (0x00071ecf) grid_vitu2_function_pane_ParamLimits

0x5a41,	// (0x00071ecf) grid_vitu2_function_pane

0x5a92,	// (0x00071f20) grid_vitu2_itu_pane_ParamLimits

0x5a92,	// (0x00071f20) grid_vitu2_itu_pane

0x5b23,	// (0x00071fb1) cell_vitu2_itu_pane_ParamLimits

0x5b23,	// (0x00071fb1) cell_vitu2_itu_pane

0x5b47,	// (0x00071fd5) cell_vitu2_function_pane_ParamLimits

0x5b47,	// (0x00071fd5) cell_vitu2_function_pane

0xd5cb,	// (0x00079a59) bg_popup_call_pane_cp08_ParamLimits

0xd5cb,	// (0x00079a59) bg_popup_call_pane_cp08

0xd5e2,	// (0x00079a70) field_vitu2_entry_pane_g1

0xd5ee,	// (0x00079a7c) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007bda9) field_vitu2_entry_pane_g

0x5b86,	// (0x00072014) field_vitu2_entry_pane_t1_ParamLimits

0x5b86,	// (0x00072014) field_vitu2_entry_pane_t1

0xa2c9,	// (0x00076757) field_vitu2_entry_pane_t2_ParamLimits

0xa2c9,	// (0x00076757) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007bdb0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007bdb0) field_vitu2_entry_pane_t

0x5bb3,	// (0x00072041) bg_button_pane_cp010_ParamLimits

0x5bb3,	// (0x00072041) bg_button_pane_cp010

0x5bc1,	// (0x0007204f) cell_vitu2_itu_pane_g1

0x5bec,	// (0x0007207a) cell_vitu2_itu_pane_t1_ParamLimits

0x5bec,	// (0x0007207a) cell_vitu2_itu_pane_t1

0xffdd,	// (0x0006c46b) cell_vitu2_itu_pane_t2_ParamLimits

0xffdd,	// (0x0006c46b) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007bdba) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007bdba) cell_vitu2_itu_pane_t

0x90ed,	// (0x0007557b) bg_button_pane_cp011

0x5c4a,	// (0x000720d8) cell_vitu2_function_pane_g1

0x90fb,	// (0x00075589) main_myfav_hc_pane

0x5614,	// (0x00071aa2) popup_image3_note_pane_ParamLimits

0x5614,	// (0x00071aa2) popup_image3_note_pane

0x5630,	// (0x00071abe) popup_image3_tool_bar_pane_ParamLimits

0x5630,	// (0x00071abe) popup_image3_tool_bar_pane

0x0061,	// (0x0006c4ef) cell_vitu2_itu_pane_t3_ParamLimits

0x0061,	// (0x0006c4ef) cell_vitu2_itu_pane_t3

0x9085,	// (0x00075513) bg_popup_trans_pane

0xd610,	// (0x00079a9e) grid_image3_tool_bar_pane

0xd61a,	// (0x00079aa8) bg_popup_trans_pane_g1

0xab50,	// (0x00076fde) bg_popup_trans_pane_g2

0xd622,	// (0x00079ab0) bg_popup_trans_pane_g3

0xd62a,	// (0x00079ab8) bg_popup_trans_pane_g4

0xd632,	// (0x00079ac0) bg_popup_trans_pane_g5

0xd63a,	// (0x00079ac8) bg_popup_trans_pane_g6

0xd642,	// (0x00079ad0) bg_popup_trans_pane_g7

0xd64a,	// (0x00079ad8) bg_popup_trans_pane_g8

0xab30,	// (0x00076fbe) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007bdc1) bg_popup_trans_pane_g

0xd652,	// (0x00079ae0) cell_image3_tool_bar_pane_ParamLimits

0xd652,	// (0x00079ae0) cell_image3_tool_bar_pane

0xcbab,	// (0x00079039) cell_image3_tool_bar_pane_g1

0x9085,	// (0x00075513) bg_popup_trans_pane_cp1

0xd666,	// (0x00079af4) popup_image3_note_pane_t1

0xd674,	// (0x00079b02) popup_image3_note_pane_t2

0xd682,	// (0x00079b10) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007bdd4) popup_image3_note_pane_t

0xd690,	// (0x00079b1e) popup_image3_note_pane_t3_copy1

0x5c5e,	// (0x000720ec) bg_myfav_hc_instruction_pane_ParamLimits

0x5c5e,	// (0x000720ec) bg_myfav_hc_instruction_pane

0x5c74,	// (0x00072102) cell_myfav_contact_pane_ParamLimits

0x5c74,	// (0x00072102) cell_myfav_contact_pane

0x5c92,	// (0x00072120) cell_myfav_contact_pane_cp1_ParamLimits

0x5c92,	// (0x00072120) cell_myfav_contact_pane_cp1

0x5caa,	// (0x00072138) cell_myfav_contact_pane_cp2_ParamLimits

0x5caa,	// (0x00072138) cell_myfav_contact_pane_cp2

0x5cc2,	// (0x00072150) cell_myfav_contact_pane_cp3_ParamLimits

0x5cc2,	// (0x00072150) cell_myfav_contact_pane_cp3

0x5cd9,	// (0x00072167) cell_myfav_contact_pane_cp4_ParamLimits

0x5cd9,	// (0x00072167) cell_myfav_contact_pane_cp4

0x5cf1,	// (0x0007217f) cell_myfav_contact_pane_cp5_ParamLimits

0x5cf1,	// (0x0007217f) cell_myfav_contact_pane_cp5

0x5d05,	// (0x00072193) cell_myfav_contact_pane_cp6_ParamLimits

0x5d05,	// (0x00072193) cell_myfav_contact_pane_cp6

0x5d1b,	// (0x000721a9) cell_myfav_contact_pane_cp7_ParamLimits

0x5d1b,	// (0x000721a9) cell_myfav_contact_pane_cp7

0xd69e,	// (0x00079b2c) listscroll_gen_pane_cp05

0x5d35,	// (0x000721c3) main_myfav_hc_pane_g1_ParamLimits

0x5d35,	// (0x000721c3) main_myfav_hc_pane_g1

0x5d4f,	// (0x000721dd) main_myfav_hc_pane_g2_ParamLimits

0x5d4f,	// (0x000721dd) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007bddb) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007bddb) main_myfav_hc_pane_g

0x5d81,	// (0x0007220f) main_myfav_hc_pane_t1_ParamLimits

0x5d81,	// (0x0007220f) main_myfav_hc_pane_t1

0xd6a7,	// (0x00079b35) main_myfav_hc_pane_t2_ParamLimits

0xd6a7,	// (0x00079b35) main_myfav_hc_pane_t2

0xd6b9,	// (0x00079b47) main_myfav_hc_pane_t3_ParamLimits

0xd6b9,	// (0x00079b47) main_myfav_hc_pane_t3

0x5d98,	// (0x00072226) main_myfav_hc_pane_t4_ParamLimits

0x5d98,	// (0x00072226) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007bde2) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007bde2) main_myfav_hc_pane_t

0xcbab,	// (0x00079039) bg_myfav_hc_instruction_pane_g1

0xd6cb,	// (0x00079b59) cell_myfav_contact_pane_g1_ParamLimits

0xd6cb,	// (0x00079b59) cell_myfav_contact_pane_g1

0xd6cb,	// (0x00079b59) cell_myfav_contact_pane_g2_ParamLimits

0xd6cb,	// (0x00079b59) cell_myfav_contact_pane_g2

0xd6d7,	// (0x00079b65) cell_myfav_contact_pane_g3_ParamLimits

0xd6d7,	// (0x00079b65) cell_myfav_contact_pane_g3

0xce7c,	// (0x0007930a) cell_myfav_contact_pane_g4_ParamLimits

0xce7c,	// (0x0007930a) cell_myfav_contact_pane_g4

0xd6e4,	// (0x00079b72) cell_myfav_contact_pane_g5_ParamLimits

0xd6e4,	// (0x00079b72) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007bded) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007bded) cell_myfav_contact_pane_g

0x5d69,	// (0x000721f7) main_myfav_hc_pane_g3_ParamLimits

0x5d69,	// (0x000721f7) main_myfav_hc_pane_g3

0x0240,	// (0x0006c6ce) popup_adpt_find_window

0x5dc0,	// (0x0007224e) afind_page_pane_ParamLimits

0x5dc0,	// (0x0007224e) afind_page_pane

0x5dd5,	// (0x00072263) aid_size_cell_afind_ParamLimits

0x5dd5,	// (0x00072263) aid_size_cell_afind

0x5df3,	// (0x00072281) bg_popup_sub_pane_cp09_ParamLimits

0x5df3,	// (0x00072281) bg_popup_sub_pane_cp09

0x5e00,	// (0x0007228e) find_pane_cp01_ParamLimits

0x5e00,	// (0x0007228e) find_pane_cp01

0xd6f0,	// (0x00079b7e) grid_afind_control_pane_ParamLimits

0xd6f0,	// (0x00079b7e) grid_afind_control_pane

0x5e0d,	// (0x0007229b) grid_afind_pane_ParamLimits

0x5e0d,	// (0x0007229b) grid_afind_pane

0x5e2c,	// (0x000722ba) cell_afind_pane_ParamLimits

0x5e2c,	// (0x000722ba) cell_afind_pane

0xcbab,	// (0x00079039) afind_page_pane_g1

0x5e8d,	// (0x0007231b) afind_page_pane_g2

0x5e96,	// (0x00072324) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007bdf8) afind_page_pane_g

0x5e9f,	// (0x0007232d) afind_page_pane_t1

0xd704,	// (0x00079b92) cell_afind_grid_control_pane_ParamLimits

0xd704,	// (0x00079b92) cell_afind_grid_control_pane

0xd4de,	// (0x0007996c) bg_button_pane_cp69_ParamLimits

0xd4de,	// (0x0007996c) bg_button_pane_cp69

0x5ebf,	// (0x0007234d) cell_afind_pane_g1_ParamLimits

0x5ebf,	// (0x0007234d) cell_afind_pane_g1

0x5ecc,	// (0x0007235a) cell_afind_pane_t1_ParamLimits

0x5ecc,	// (0x0007235a) cell_afind_pane_t1

0xa949,	// (0x00076dd7) bg_button_pane_cp72

0xd713,	// (0x00079ba1) cell_afind_grid_control_pane_g1

0x2f25,	// (0x0006f3b3) aid_image_placing_area_ParamLimits

0x2f25,	// (0x0006f3b3) aid_image_placing_area

0xd1ac,	// (0x0007963a) field_vitu_entry_pane_g1_ParamLimits

0xd1ac,	// (0x0007963a) field_vitu_entry_pane_g1

0xd1b8,	// (0x00079646) field_vitu_entry_pane_g2_ParamLimits

0xd1b8,	// (0x00079646) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007bca9) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007bca9) field_vitu_entry_pane_g

0x5060,	// (0x000714ee) cell_vitu_itu_pane_g1_ParamLimits

0x50b0,	// (0x0007153e) cell_vitu_itu_pane_t3_ParamLimits

0x50b0,	// (0x0007153e) cell_vitu_itu_pane_t3

0xd48e,	// (0x0007991c) mp4_progress_pane_t1_ParamLimits

0xd4a7,	// (0x00079935) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007bd3e) mp4_progress_pane_t_ParamLimits

0xd4c0,	// (0x0007994e) mup_progress_pane_cp04_ParamLimits

0x5dac,	// (0x0007223a) main_myfav_hc_pane_t5_ParamLimits

0x5dac,	// (0x0007223a) main_myfav_hc_pane_t5

0x90a3,	// (0x00075531) aid_zoom_text_primary

0x0240,	// (0x0006c6ce) popup_adpt_find_window_ParamLimits

0x90ed,	// (0x0007557b) main_cam_set_pane

0x57dd,	// (0x00071c6b) cam4_zoom_pane_ParamLimits

0x57dd,	// (0x00071c6b) cam4_zoom_pane

0x5ede,	// (0x0007236c) main_cam_set_pane_g1_ParamLimits

0x5ede,	// (0x0007236c) main_cam_set_pane_g1

0x5eec,	// (0x0007237a) main_cam_set_pane_g2_ParamLimits

0x5eec,	// (0x0007237a) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007bdff) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007bdff) main_cam_set_pane_g

0x5f0d,	// (0x0007239b) main_cam_set_pane_t1_ParamLimits

0x5f0d,	// (0x0007239b) main_cam_set_pane_t1

0x5f28,	// (0x000723b6) main_cset_listscroll_pane_ParamLimits

0x5f28,	// (0x000723b6) main_cset_listscroll_pane

0x5f48,	// (0x000723d6) main_cset_slider_pane_ParamLimits

0x5f48,	// (0x000723d6) main_cset_slider_pane

0xd724,	// (0x00079bb2) main_cset_list_pane_ParamLimits

0xd724,	// (0x00079bb2) main_cset_list_pane

0xd734,	// (0x00079bc2) scroll_pane_cp028

0x5f6e,	// (0x000723fc) aid_area_touch_slider

0x5f8a,	// (0x00072418) cset_slider_pane

0x5fb4,	// (0x00072442) main_cset_slider_pane_g1

0x5fc9,	// (0x00072457) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007be04) main_cset_slider_pane_g

0xd76d,	// (0x00079bfb) main_cset_slider_pane_t1

0x6085,	// (0x00072513) main_cset_slider_pane_t2

0x609f,	// (0x0007252d) main_cset_slider_pane_t3

0x60b9,	// (0x00072547) main_cset_slider_pane_t4

0x60d3,	// (0x00072561) main_cset_slider_pane_t5

0x60ed,	// (0x0007257b) main_cset_slider_pane_t6

0x6102,	// (0x00072590) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007be29) main_cset_slider_pane_t

0x6206,	// (0x00072694) cset_list_set_pane_ParamLimits

0x6206,	// (0x00072694) cset_list_set_pane

0x6219,	// (0x000726a7) aid_position_infowindow_above

0x6221,	// (0x000726af) aid_position_infowindow_below

0xa2e6,	// (0x00076774) cset_list_set_pane_g1_ParamLimits

0xa2e6,	// (0x00076774) cset_list_set_pane_g1

0x6229,	// (0x000726b7) cset_list_set_pane_g3_ParamLimits

0x6229,	// (0x000726b7) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007be48) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007be48) cset_list_set_pane_g

0xa2f2,	// (0x00076780) cset_list_set_pane_t1_ParamLimits

0xa2f2,	// (0x00076780) cset_list_set_pane_t1

0xa247,	// (0x000766d5) list_highlight_pane_cp021_ParamLimits

0xa247,	// (0x000766d5) list_highlight_pane_cp021

0xb4cc,	// (0x0007795a) cset_slider_pane_g1

0xb4de,	// (0x0007796c) cset_slider_pane_g2

0xb4d5,	// (0x00077963) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007be4d) cset_slider_pane_g

0x9b71,	// (0x00075fff) aid_area_touch_cam4_zoom

0x9b79,	// (0x00076007) cam4_zoom_cont_pane

0x9b81,	// (0x0007600f) cam4_zoom_pane_g1

0x9b89,	// (0x00076017) cam4_zoom_pane_g2

0x6238,	// (0x000726c6) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007be54) cam4_zoom_pane_g

0x9b91,	// (0x0007601f) cam4_zoom_cont_pane_g1

0x9b9a,	// (0x00076028) cam4_zoom_cont_pane_g2

0x9ba3,	// (0x00076031) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007be5b) cam4_zoom_cont_pane_g

0x569d,	// (0x00071b2b) call4_image_pane_ParamLimits

0x569d,	// (0x00071b2b) call4_image_pane

0xd4ea,	// (0x00079978) call4_windows_conf_pane_ParamLimits

0xd529,	// (0x000799b7) popup_call4_audio_in_window_ParamLimits

0xd529,	// (0x000799b7) popup_call4_audio_in_window

0x9085,	// (0x00075513) bg_popup_call2_act_pane_cp02

0xd59f,	// (0x00079a2d) call4_list_conf_pane

0xcbab,	// (0x00079039) call4_image_pane_g1

0xcbab,	// (0x00079039) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007bb6a) call4_image_pane_g

0xd831,	// (0x00079cbf) list_single_graphic_popup_conf4_pane_ParamLimits

0xd831,	// (0x00079cbf) list_single_graphic_popup_conf4_pane

0x9085,	// (0x00075513) list_highlight_pane_cp022

0xd844,	// (0x00079cd2) list_single_graphic_popup_conf4_pane_g1

0xb096,	// (0x00077524) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007be62) list_single_graphic_popup_conf4_pane_g

0xd84c,	// (0x00079cda) list_single_graphic_popup_conf4_pane_t1

0x13b5,	// (0x0006d843) popup_vtel_slider_window_ParamLimits

0x13b5,	// (0x0006d843) popup_vtel_slider_window

0xd4cc,	// (0x0007995a) dialer2_ne_pane_t2_ParamLimits

0xd4cc,	// (0x0007995a) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007bd43) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007bd43) dialer2_ne_pane_t

0xc98e,	// (0x00078e1c) bg_popup_sub_pane_cp010_ParamLimits

0xc98e,	// (0x00078e1c) bg_popup_sub_pane_cp010

0x6240,	// (0x000726ce) popup_vtel_slider_window_g1_ParamLimits

0x6240,	// (0x000726ce) popup_vtel_slider_window_g1

0x6253,	// (0x000726e1) popup_vtel_slider_window_g2_ParamLimits

0x6253,	// (0x000726e1) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007be67) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007be67) popup_vtel_slider_window_g

0x62a9,	// (0x00072737) vtel_slider_pane_ParamLimits

0x62a9,	// (0x00072737) vtel_slider_pane

0x62cb,	// (0x00072759) vtel_slider_pane_g1_ParamLimits

0x62cb,	// (0x00072759) vtel_slider_pane_g1

0x62df,	// (0x0007276d) vtel_slider_pane_g2_ParamLimits

0x62df,	// (0x0007276d) vtel_slider_pane_g2

0x62f7,	// (0x00072785) vtel_slider_pane_g3_ParamLimits

0x62f7,	// (0x00072785) vtel_slider_pane_g3

0x62cb,	// (0x00072759) vtel_slider_pane_g4_ParamLimits

0x62cb,	// (0x00072759) vtel_slider_pane_g4

0x630d,	// (0x0007279b) vtel_slider_pane_g5_ParamLimits

0x630d,	// (0x0007279b) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007be70) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007be70) vtel_slider_pane_g

0x90ed,	// (0x0007557b) main_gallery2_pane

0x59dd,	// (0x00071e6b) aid_size_row_itut2_dropdow_list_ParamLimits

0x59dd,	// (0x00071e6b) aid_size_row_itut2_dropdow_list

0x5a69,	// (0x00071ef7) grid_vitu2_function_top_pane_ParamLimits

0x5a69,	// (0x00071ef7) grid_vitu2_function_top_pane

0x5ace,	// (0x00071f5c) popup_vitu2_dropdown_list_window_ParamLimits

0x5ace,	// (0x00071f5c) popup_vitu2_dropdown_list_window

0x5af7,	// (0x00071f85) popup_vitu2_match_list_window

0x6323,	// (0x000727b1) cell_vitu2_function_top_pane_ParamLimits

0x6323,	// (0x000727b1) cell_vitu2_function_top_pane

0x6341,	// (0x000727cf) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6341,	// (0x000727cf) cell_vitu2_function_top_pane_cp01

0x635f,	// (0x000727ed) cell_vitu2_function_top_wide_pane_ParamLimits

0x635f,	// (0x000727ed) cell_vitu2_function_top_wide_pane

0x90ed,	// (0x0007557b) bg_button_pane_cp012

0x637d,	// (0x0007280b) cell_vitu2_function_top_pane_g1

0x9bac,	// (0x0007603a) bg_button_pane_cp013_ParamLimits

0x9bac,	// (0x0007603a) bg_button_pane_cp013

0x6391,	// (0x0007281f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6391,	// (0x0007281f) cell_vitu2_function_top_wide_pane_g1

0x90ed,	// (0x0007557b) bg_popup_sub_pane_cp20

0x63a9,	// (0x00072837) list_vitu2_match_list_pane

0xd61a,	// (0x00079aa8) bg_popup_sub_pane_cp20_g1

0xd622,	// (0x00079ab0) bg_popup_sub_pane_cp20_g2

0xab50,	// (0x00076fde) bg_popup_sub_pane_cp20_g3

0xd62a,	// (0x00079ab8) bg_popup_sub_pane_cp20_g4

0xab30,	// (0x00076fbe) bg_popup_sub_pane_cp20_g5

0xd862,	// (0x00079cf0) bg_popup_sub_pane_cp20_g6

0xd63a,	// (0x00079ac8) bg_popup_sub_pane_cp20_g7

0xd642,	// (0x00079ad0) bg_popup_sub_pane_cp20_g8

0xd64a,	// (0x00079ad8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007be7b) bg_popup_sub_pane_cp20_g

0x9bc8,	// (0x00076056) list_vitu2_match_list_item_pane_ParamLimits

0x9bc8,	// (0x00076056) list_vitu2_match_list_item_pane

0x9bda,	// (0x00076068) list_vitu2_match_list_item_pane_t1

0x90fb,	// (0x00075589) bg_popup_sub_pane_cp21

0x9be8,	// (0x00076076) grid_vitu2_dropdown_list_pane

0x63fc,	// (0x0007288a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x63fc,	// (0x0007288a) cell_vitu2_dropdown_list_char_pane

0x641d,	// (0x000728ab) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x641d,	// (0x000728ab) cell_vitu2_dropdown_list_ctrl_pane

0xd86a,	// (0x00079cf8) cell_vitu2_dropdown_list_char_pane_g1

0xd873,	// (0x00079d01) cell_vitu2_dropdown_list_char_pane_g2

0xd87c,	// (0x00079d0a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007be98) cell_vitu2_dropdown_list_char_pane_g

0x6449,	// (0x000728d7) cell_vitu2_dropdown_list_char_pane_t1

0x6457,	// (0x000728e5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6457,	// (0x000728e5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6467,	// (0x000728f5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6467,	// (0x000728f5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6478,	// (0x00072906) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6478,	// (0x00072906) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6488,	// (0x00072916) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6488,	// (0x00072916) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9a96,	// (0x00075f24) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9a96,	// (0x00075f24) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007be9f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007be9f) cell_vitu2_dropdown_list_ctrl_pane_g

0x64a4,	// (0x00072932) aid_size_cell_gallery2_ParamLimits

0x64a4,	// (0x00072932) aid_size_cell_gallery2

0x64c2,	// (0x00072950) grid_gallery2_pane_ParamLimits

0x64c2,	// (0x00072950) grid_gallery2_pane

0x64dc,	// (0x0007296a) scroll_pane_cp029_ParamLimits

0x64dc,	// (0x0007296a) scroll_pane_cp029

0x64e8,	// (0x00072976) cell_gallery2_pane_ParamLimits

0x64e8,	// (0x00072976) cell_gallery2_pane

0xd885,	// (0x00079d13) cell_gallery2_pane_g2

0x6544,	// (0x000729d2) cell_gallery2_pane_g3

0xd88d,	// (0x00079d1b) cell_gallery2_pane_g4

0xd895,	// (0x00079d23) cell_gallery2_pane_g5

0xb373,	// (0x00077801) grid_highlight_pane_cp10

0x5af7,	// (0x00071f85) popup_vitu2_match_list_window_ParamLimits

0x5b0c,	// (0x00071f9a) popup_vitu2_query_window_ParamLimits

0x5b0c,	// (0x00071f9a) popup_vitu2_query_window

0x90fb,	// (0x00075589) bg_vitu2_candi_button_pane

0xd86a,	// (0x00079cf8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd873,	// (0x00079d01) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd87c,	// (0x00079d0a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x654c,	// (0x000729da) bg_button_pane_cp015

0x6560,	// (0x000729ee) bg_button_pane_cp016

0x6573,	// (0x00072a01) bg_button_pane_cp017

0xc7a1,	// (0x00078c2f) bg_popup_sub_pane_cp22

0xd89d,	// (0x00079d2b) popup_vitu2_query_window_g1

0x65b8,	// (0x00072a46) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007beaa) popup_vitu2_query_window_g

0x65d7,	// (0x00072a65) popup_vitu2_query_window_t1_ParamLimits

0x65d7,	// (0x00072a65) popup_vitu2_query_window_t1

0x660c,	// (0x00072a9a) popup_vitu2_query_window_t2_ParamLimits

0x660c,	// (0x00072a9a) popup_vitu2_query_window_t2

0x661e,	// (0x00072aac) popup_vitu2_query_window_t3_ParamLimits

0x661e,	// (0x00072aac) popup_vitu2_query_window_t3

0x6646,	// (0x00072ad4) popup_vitu2_query_window_t4_ParamLimits

0x6646,	// (0x00072ad4) popup_vitu2_query_window_t4

0x6667,	// (0x00072af5) popup_vitu2_query_window_t5_ParamLimits

0x6667,	// (0x00072af5) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007beb1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007beb1) popup_vitu2_query_window_t

0xd71c,	// (0x00079baa) main_cset_text_pane

0x5f6e,	// (0x000723fc) aid_area_touch_slider_ParamLimits

0x5f8a,	// (0x00072418) cset_slider_pane_ParamLimits

0x5fb4,	// (0x00072442) main_cset_slider_pane_g1_ParamLimits

0x5fc9,	// (0x00072457) main_cset_slider_pane_g2_ParamLimits

0xd73d,	// (0x00079bcb) main_cset_slider_pane_g3_ParamLimits

0xd73d,	// (0x00079bcb) main_cset_slider_pane_g3

0x5fde,	// (0x0007246c) main_cset_slider_pane_g4_ParamLimits

0x5fde,	// (0x0007246c) main_cset_slider_pane_g4

0x5fed,	// (0x0007247b) main_cset_slider_pane_g5_ParamLimits

0x5fed,	// (0x0007247b) main_cset_slider_pane_g5

0x5ff9,	// (0x00072487) main_cset_slider_pane_g6_ParamLimits

0x5ff9,	// (0x00072487) main_cset_slider_pane_g6

0xf976,	// (0x0007be04) main_cset_slider_pane_g_ParamLimits

0xd76d,	// (0x00079bfb) main_cset_slider_pane_t1_ParamLimits

0x6085,	// (0x00072513) main_cset_slider_pane_t2_ParamLimits

0x609f,	// (0x0007252d) main_cset_slider_pane_t3_ParamLimits

0x60b9,	// (0x00072547) main_cset_slider_pane_t4_ParamLimits

0x60d3,	// (0x00072561) main_cset_slider_pane_t5_ParamLimits

0x60ed,	// (0x0007257b) main_cset_slider_pane_t6_ParamLimits

0x6102,	// (0x00072590) main_cset_slider_pane_t7_ParamLimits

0x612c,	// (0x000725ba) main_cset_slider_pane_t8_ParamLimits

0x612c,	// (0x000725ba) main_cset_slider_pane_t8

0x6154,	// (0x000725e2) main_cset_slider_pane_t9_ParamLimits

0x6154,	// (0x000725e2) main_cset_slider_pane_t9

0x617c,	// (0x0007260a) main_cset_slider_pane_t10_ParamLimits

0x617c,	// (0x0007260a) main_cset_slider_pane_t10

0x61a4,	// (0x00072632) main_cset_slider_pane_t11_ParamLimits

0x61a4,	// (0x00072632) main_cset_slider_pane_t11

0x61cc,	// (0x0007265a) main_cset_slider_pane_t12_ParamLimits

0x61cc,	// (0x0007265a) main_cset_slider_pane_t12

0x61e9,	// (0x00072677) main_cset_slider_pane_t13_ParamLimits

0x61e9,	// (0x00072677) main_cset_slider_pane_t13

0xf99b,	// (0x0007be29) main_cset_slider_pane_t_ParamLimits

0x9085,	// (0x00075513) bg_popup_sub_pane_cp011

0xd8a9,	// (0x00079d37) main_cset_text_pane_g1

0xd8b1,	// (0x00079d3f) main_cset_text_pane_t1

0xd8bf,	// (0x00079d4d) main_cset_text_pane_t2

0xd8cd,	// (0x00079d5b) main_cset_text_pane_t3

0xd8db,	// (0x00079d69) main_cset_text_pane_t4

0xd8e9,	// (0x00079d77) main_cset_text_pane_t5

0xd8f7,	// (0x00079d85) main_cset_text_pane_t6

0xd905,	// (0x00079d93) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007bec0) main_cset_text_pane_t

0x90fb,	// (0x00075589) main_cam4_burst_pane

0x90fb,	// (0x00075589) main_cam5_pane

0x5ead,	// (0x0007233b) bg_button_pane_cp019

0x5eb6,	// (0x00072344) bg_button_pane_cp020

0xd749,	// (0x00079bd7) main_cset_slider_pane_g7_ParamLimits

0xd749,	// (0x00079bd7) main_cset_slider_pane_g7

0xd755,	// (0x00079be3) main_cset_slider_pane_g8_ParamLimits

0xd755,	// (0x00079be3) main_cset_slider_pane_g8

0x600d,	// (0x0007249b) main_cset_slider_pane_g9_ParamLimits

0x600d,	// (0x0007249b) main_cset_slider_pane_g9

0x6019,	// (0x000724a7) main_cset_slider_pane_g10_ParamLimits

0x6019,	// (0x000724a7) main_cset_slider_pane_g10

0x6025,	// (0x000724b3) main_cset_slider_pane_g11_ParamLimits

0x6025,	// (0x000724b3) main_cset_slider_pane_g11

0x6031,	// (0x000724bf) main_cset_slider_pane_g12_ParamLimits

0x6031,	// (0x000724bf) main_cset_slider_pane_g12

0x603d,	// (0x000724cb) main_cset_slider_pane_g13_ParamLimits

0x603d,	// (0x000724cb) main_cset_slider_pane_g13

0x6049,	// (0x000724d7) main_cset_slider_pane_g14_ParamLimits

0x6049,	// (0x000724d7) main_cset_slider_pane_g14

0x6055,	// (0x000724e3) main_cset_slider_pane_g15_ParamLimits

0x6055,	// (0x000724e3) main_cset_slider_pane_g15

0xd79b,	// (0x00079c29) main_cset_slider_pane_t14_ParamLimits

0xd79b,	// (0x00079c29) main_cset_slider_pane_t14

0xd7f8,	// (0x00079c86) main_cset_slider_pane_t15_ParamLimits

0xd7f8,	// (0x00079c86) main_cset_slider_pane_t15

0x66de,	// (0x00072b6c) aid_cam4_burst_size_cell_ParamLimits

0x66de,	// (0x00072b6c) aid_cam4_burst_size_cell

0x66fe,	// (0x00072b8c) grid_cam4_burst_pane_ParamLimits

0x66fe,	// (0x00072b8c) grid_cam4_burst_pane

0x6736,	// (0x00072bc4) linegrid_cam4_burst_pane_ParamLimits

0x6736,	// (0x00072bc4) linegrid_cam4_burst_pane

0xd913,	// (0x00079da1) scroll_pane_cp30_ParamLimits

0xd913,	// (0x00079da1) scroll_pane_cp30

0x675c,	// (0x00072bea) cell_cam4_burst_pane_ParamLimits

0x675c,	// (0x00072bea) cell_cam4_burst_pane

0xd91f,	// (0x00079dad) linegrid_cam4_burst_pane_g1_ParamLimits

0xd91f,	// (0x00079dad) linegrid_cam4_burst_pane_g1

0x67a9,	// (0x00072c37) linegrid_cam4_burst_pane_g2_ParamLimits

0x67a9,	// (0x00072c37) linegrid_cam4_burst_pane_g2

0xd92c,	// (0x00079dba) linegrid_cam4_burst_pane_g3_ParamLimits

0xd92c,	// (0x00079dba) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007becf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007becf) linegrid_cam4_burst_pane_g

0x67ba,	// (0x00072c48) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x67ba,	// (0x00072c48) linegrid_cam4_burst_pane_g3_copy1

0xd939,	// (0x00079dc7) linegrid_cam4_burst_pane_g4_ParamLimits

0xd939,	// (0x00079dc7) linegrid_cam4_burst_pane_g4

0x67d4,	// (0x00072c62) linegrid_cam4_burst_pane_g5_ParamLimits

0x67d4,	// (0x00072c62) linegrid_cam4_burst_pane_g5

0x67e5,	// (0x00072c73) linegrid_cam4_burst_pane_g6_ParamLimits

0x67e5,	// (0x00072c73) linegrid_cam4_burst_pane_g6

0xd946,	// (0x00079dd4) linegrid_cam4_burst_pane_g7_ParamLimits

0xd946,	// (0x00079dd4) linegrid_cam4_burst_pane_g7

0x67fc,	// (0x00072c8a) cell_cam4_burst_pane_g1

0xd95f,	// (0x00079ded) main_cam5_pane_t1_ParamLimits

0xd95f,	// (0x00079ded) main_cam5_pane_t1

0xd971,	// (0x00079dff) main_cam5_pane_t2_ParamLimits

0xd971,	// (0x00079dff) main_cam5_pane_t2

0xd983,	// (0x00079e11) main_cam5_pane_t3_ParamLimits

0xd983,	// (0x00079e11) main_cam5_pane_t3

0xd995,	// (0x00079e23) main_cam5_pane_t4_ParamLimits

0xd995,	// (0x00079e23) main_cam5_pane_t4

0xd9ad,	// (0x00079e3b) main_cam5_pane_t5_ParamLimits

0xd9ad,	// (0x00079e3b) main_cam5_pane_t5

0xd9c1,	// (0x00079e4f) main_cam5_pane_t6_ParamLimits

0xd9c1,	// (0x00079e4f) main_cam5_pane_t6

0xd9d5,	// (0x00079e63) main_cam5_pane_t7_ParamLimits

0xd9d5,	// (0x00079e63) main_cam5_pane_t7

0xd9e7,	// (0x00079e75) main_cam5_pane_t8_ParamLimits

0xd9e7,	// (0x00079e75) main_cam5_pane_t8

0xda03,	// (0x00079e91) main_cam5_pane_t9_ParamLimits

0xda03,	// (0x00079e91) main_cam5_pane_t9

0xda15,	// (0x00079ea3) main_cam5_pane_t10_ParamLimits

0xda15,	// (0x00079ea3) main_cam5_pane_t10

0xda27,	// (0x00079eb5) main_cam5_pane_t11_ParamLimits

0xda27,	// (0x00079eb5) main_cam5_pane_t11

0xda39,	// (0x00079ec7) main_cam5_pane_t12_ParamLimits

0xda39,	// (0x00079ec7) main_cam5_pane_t12

0xda4e,	// (0x00079edc) main_cam5_pane_t13_ParamLimits

0xda4e,	// (0x00079edc) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007bedb) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007bedb) main_cam5_pane_t

0x02c2,	// (0x0006c750) popup_scut_keymap_window_ParamLimits

0x02c2,	// (0x0006c750) popup_scut_keymap_window

0x6811,	// (0x00072c9f) aid_size_cell_brow_shortcut

0xb373,	// (0x00077801) bg_popup_window_pane_cp010

0x681d,	// (0x00072cab) grid_scut_pane

0x6829,	// (0x00072cb7) cell_scut_pane_ParamLimits

0x6829,	// (0x00072cb7) cell_scut_pane

0x6840,	// (0x00072cce) cell_scut_pane_g1

0xda6b,	// (0x00079ef9) cell_scut_pane_t1

0xda7a,	// (0x00079f08) cell_scut_pane_t2

0x6849,	// (0x00072cd7) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007bef6) cell_scut_pane_t

0x454b,	// (0x000709d9) main_mup3_pane_g8_ParamLimits

0x454b,	// (0x000709d9) main_mup3_pane_g8

0x59f5,	// (0x00071e83) area_vitu2_query_pane_ParamLimits

0x59f5,	// (0x00071e83) area_vitu2_query_pane

0x6586,	// (0x00072a14) input_focus_pane_cp08

0xda89,	// (0x00079f17) area_vitu2_query_pane_g1

0x6857,	// (0x00072ce5) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007befd) area_vitu2_query_pane_g

0x6868,	// (0x00072cf6) area_vitu2_query_pane_t1_ParamLimits

0x6868,	// (0x00072cf6) area_vitu2_query_pane_t1

0x687c,	// (0x00072d0a) area_vitu2_query_pane_t2_ParamLimits

0x687c,	// (0x00072d0a) area_vitu2_query_pane_t2

0x6890,	// (0x00072d1e) area_vitu2_query_pane_t3_ParamLimits

0x6890,	// (0x00072d1e) area_vitu2_query_pane_t3

0xa32d,	// (0x000767bb) area_vitu2_query_pane_t4_ParamLimits

0xa32d,	// (0x000767bb) area_vitu2_query_pane_t4

0xa355,	// (0x000767e3) area_vitu2_query_pane_t5_ParamLimits

0xa355,	// (0x000767e3) area_vitu2_query_pane_t5

0xa37d,	// (0x0007680b) area_vitu2_query_pane_t6_ParamLimits

0xa37d,	// (0x0007680b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007bf02) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007bf02) area_vitu2_query_pane_t

0x68b8,	// (0x00072d46) bg_button_pane_cp018

0x68c6,	// (0x00072d54) bg_button_pane_cp021

0x68d2,	// (0x00072d60) bg_button_pane_cp022

0x68e3,	// (0x00072d71) input_focus_pane_cp09

0xb1ba,	// (0x00077648) aid_size_touch_mv_arrow_left

0xb1e5,	// (0x00077673) aid_size_touch_mv_arrow_right

0x606d,	// (0x000724fb) main_cset_slider_pane_g16_ParamLimits

0x606d,	// (0x000724fb) main_cset_slider_pane_g16

0x6079,	// (0x00072507) main_cset_slider_pane_g17_ParamLimits

0x6079,	// (0x00072507) main_cset_slider_pane_g17

0x67fc,	// (0x00072c8a) cell_cam4_burst_pane_g1_ParamLimits

0x9085,	// (0x00075513) compa_mode_pane

0x6263,	// (0x000726f1) popup_vtel_slider_window_g3_ParamLimits

0x6263,	// (0x000726f1) popup_vtel_slider_window_g3

0x627a,	// (0x00072708) popup_vtel_slider_window_g4_ParamLimits

0x627a,	// (0x00072708) popup_vtel_slider_window_g4

0x6291,	// (0x0007271f) popup_vtel_slider_window_t1_ParamLimits

0x6291,	// (0x0007271f) popup_vtel_slider_window_t1

0x90fb,	// (0x00075589) main_cl_pane

0x9706,	// (0x00075b94) popup_imed_adjust2_window_ParamLimits

0xc7a1,	// (0x00078c2f) bg_tb_trans_pane_cp05_ParamLimits

0xd0d8,	// (0x00079566) popup_imed_adjust2_window_g1_ParamLimits

0xd0e7,	// (0x00079575) popup_imed_adjust2_window_g2_ParamLimits

0xd0e7,	// (0x00079575) popup_imed_adjust2_window_g2

0xd0f3,	// (0x00079581) popup_imed_adjust2_window_g3_ParamLimits

0xd0f3,	// (0x00079581) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007bc6d) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007bc6d) popup_imed_adjust2_window_g

0xd0ff,	// (0x0007958d) popup_imed_adjust2_window_t1_ParamLimits

0xd117,	// (0x000795a5) slider_imed_adjust_pane_ParamLimits

0xd12b,	// (0x000795b9) slider_imed_adjust_pane_g1_ParamLimits

0xd13b,	// (0x000795c9) slider_imed_adjust_pane_g2_ParamLimits

0xd14b,	// (0x000795d9) slider_imed_adjust_pane_g3_ParamLimits

0xd15c,	// (0x000795ea) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007bc74) slider_imed_adjust_pane_g_ParamLimits

0x577e,	// (0x00071c0c) aid_touch_area_cam4_ParamLimits

0x577e,	// (0x00071c0c) aid_touch_area_cam4

0x9a7a,	// (0x00075f08) battery_pane_cp01

0x584d,	// (0x00071cdb) main_camera4_pane_g6_ParamLimits

0x584d,	// (0x00071cdb) main_camera4_pane_g6

0x5877,	// (0x00071d05) main_camera4_pane_t2_ParamLimits

0x5877,	// (0x00071d05) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007bd77) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007bd77) main_camera4_pane_t

0x58ac,	// (0x00071d3a) aid_touch_area_vid4_ParamLimits

0x58ac,	// (0x00071d3a) aid_touch_area_vid4

0x5900,	// (0x00071d8e) main_video4_pane_g5_ParamLimits

0x5900,	// (0x00071d8e) main_video4_pane_g5

0x5925,	// (0x00071db3) vid4_progress_pane_ParamLimits

0x5925,	// (0x00071db3) vid4_progress_pane

0xd761,	// (0x00079bef) main_cset_slider_pane_g18_ParamLimits

0xd761,	// (0x00079bef) main_cset_slider_pane_g18

0xd953,	// (0x00079de1) cell_cam4_burst_pane_g2_ParamLimits

0xd953,	// (0x00079de1) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007bed6) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007bed6) cell_cam4_burst_pane_g

0x9fae,	// (0x0007643c) bg_cl_pane_ParamLimits

0x9fae,	// (0x0007643c) bg_cl_pane

0x68f4,	// (0x00072d82) cl_header_pane_ParamLimits

0x68f4,	// (0x00072d82) cl_header_pane

0x6908,	// (0x00072d96) cl_listscroll_pane_ParamLimits

0x6908,	// (0x00072d96) cl_listscroll_pane

0xda95,	// (0x00079f23) bg_cl_pane_g1

0xda9d,	// (0x00079f2b) bg_cl_pane_g2

0xdaa5,	// (0x00079f33) bg_cl_pane_g3

0xdaad,	// (0x00079f3b) bg_cl_pane_g4

0xdab5,	// (0x00079f43) bg_cl_pane_g5

0xdabd,	// (0x00079f4b) bg_cl_pane_g6

0xdac5,	// (0x00079f53) bg_cl_pane_g7

0xdacd,	// (0x00079f5b) bg_cl_pane_g8

0xdad5,	// (0x00079f63) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007bf11) bg_cl_pane_g

0x6918,	// (0x00072da6) aid_height_cl_leading_ParamLimits

0x6918,	// (0x00072da6) aid_height_cl_leading

0x6924,	// (0x00072db2) aid_height_cl_text_ParamLimits

0x6924,	// (0x00072db2) aid_height_cl_text

0xa247,	// (0x000766d5) bg_cl_header_pane_ParamLimits

0xa247,	// (0x000766d5) bg_cl_header_pane

0x6943,	// (0x00072dd1) cl_header_pane_g1_ParamLimits

0x6943,	// (0x00072dd1) cl_header_pane_g1

0x6959,	// (0x00072de7) cl_header_pane_t1_ParamLimits

0x6959,	// (0x00072de7) cl_header_pane_t1

0xdadd,	// (0x00079f6b) cl_list_pane

0xd734,	// (0x00079bc2) hc_scroll_pane_cp01

0xab30,	// (0x00076fbe) bg_cl_header_pane_g1

0xd61a,	// (0x00079aa8) bg_cl_header_pane_g2

0xab50,	// (0x00076fde) bg_cl_header_pane_g3

0xd62a,	// (0x00079ab8) bg_cl_header_pane_g4

0xd622,	// (0x00079ab0) bg_cl_header_pane_g5

0xd862,	// (0x00079cf0) bg_cl_header_pane_g6

0xd642,	// (0x00079ad0) bg_cl_header_pane_g7

0xd64a,	// (0x00079ad8) bg_cl_header_pane_g8

0xd63a,	// (0x00079ac8) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007bf24) bg_cl_header_pane_g

0x6972,	// (0x00072e00) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6972,	// (0x00072e00) hc_cl_list_double_graphic_heading_pane

0x6983,	// (0x00072e11) hc_cl_list_single_graphic_pane_ParamLimits

0x6983,	// (0x00072e11) hc_cl_list_single_graphic_pane

0x699c,	// (0x00072e2a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x699c,	// (0x00072e2a) hc_cl_list_single_graphic_pane_g1

0x69a8,	// (0x00072e36) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x69a8,	// (0x00072e36) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007bf37) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007bf37) hc_cl_list_single_graphic_pane_g

0x69bc,	// (0x00072e4a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x69bc,	// (0x00072e4a) hc_cl_list_single_graphic_pane_t1

0x699c,	// (0x00072e2a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x699c,	// (0x00072e2a) hc_cl_list_double_graphic_heading_pane_g1

0x69d1,	// (0x00072e5f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x69d1,	// (0x00072e5f) hc_cl_list_double_graphic_heading_pane_g2

0x69e5,	// (0x00072e73) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x69e5,	// (0x00072e73) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007bf3c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007bf3c) hc_cl_list_double_graphic_heading_pane_g

0x69f9,	// (0x00072e87) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x69f9,	// (0x00072e87) hc_cl_list_double_graphic_heading_pane_t1

0x6a0e,	// (0x00072e9c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6a0e,	// (0x00072e9c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007bf43) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007bf43) hc_cl_list_double_graphic_heading_pane_t

0x9bf8,	// (0x00076086) vid4_progress_pane_g1

0x9c08,	// (0x00076096) vid4_progress_pane_g2

0x6a23,	// (0x00072eb1) vid4_progress_pane_g3

0x9c18,	// (0x000760a6) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007bf48) vid4_progress_pane_g

0x6a35,	// (0x00072ec3) vid4_progress_pane_t1

0x9c36,	// (0x000760c4) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007bf53) vid4_progress_pane_t

0x6a4b,	// (0x00072ed9) wait_bar_pane_cp07

0xc99c,	// (0x00078e2a) blid_firmament_pane_ParamLimits

0xc9df,	// (0x00078e6d) popup_blid_sat_info2_window_g1

0xca03,	// (0x00078e91) popup_blid_sat_info2_window_t3

0xca11,	// (0x00078e9f) popup_blid_sat_info2_window_t4

0xca1f,	// (0x00078ead) popup_blid_sat_info2_window_t5

0xca2d,	// (0x00078ebb) popup_blid_sat_info2_window_t6

0xca3d,	// (0x00078ecb) popup_blid_sat_info2_window_t7

0xca4b,	// (0x00078ed9) popup_blid_sat_info2_window_t8

0xca59,	// (0x00078ee7) popup_blid_sat_info2_window_t9

0xca67,	// (0x00078ef5) popup_blid_sat_info2_window_t10

0xcb2b,	// (0x00078fb9) aid_firma_cardinal_ParamLimits

0xcb3f,	// (0x00078fcd) blid_firmament_pane_t1_ParamLimits

0xcb56,	// (0x00078fe4) blid_firmament_pane_t2_ParamLimits

0xcb6d,	// (0x00078ffb) blid_firmament_pane_t3_ParamLimits

0xcb84,	// (0x00079012) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007bb61) blid_firmament_pane_t_ParamLimits

0xcb9b,	// (0x00079029) blid_sat_info_pane_ParamLimits

0x90ed,	// (0x0007557b) main_cam_set_pane_ParamLimits

0x4e0f,	// (0x0007129d) aid_size_cell_colour_35_ParamLimits

0x4e2f,	// (0x000712bd) aid_size_cell_colour_112_ParamLimits

0x4e4f,	// (0x000712dd) aid_size_cell_effect_ParamLimits

0xc7a1,	// (0x00078c2f) bg_tb_trans_pane_cp02_ParamLimits

0xada0,	// (0x0007722e) heading_imed_pane_ParamLimits

0x4e6f,	// (0x000712fd) listscroll_imed_pane_ParamLimits

0xbdc7,	// (0x00078255) popup_call2_audio_first_window_g5_ParamLimits

0xbdc7,	// (0x00078255) popup_call2_audio_first_window_g5

0x5429,	// (0x000718b7) aid_size_touch_image3_arrow_left_ParamLimits

0x5429,	// (0x000718b7) aid_size_touch_image3_arrow_left

0x5455,	// (0x000718e3) aid_size_touch_image3_arrow_right_ParamLimits

0x5455,	// (0x000718e3) aid_size_touch_image3_arrow_right

0x9c4b,	// (0x000760d9) vid4_progress_pane_t3

0x519b,	// (0x00071629) main_hwr_training_symbol_option_pane_ParamLimits

0x519b,	// (0x00071629) main_hwr_training_symbol_option_pane

0xd3ce,	// (0x0007985c) popup_hwr_training_preview_window_ParamLimits

0xd3ce,	// (0x0007985c) popup_hwr_training_preview_window

0x51bb,	// (0x00071649) hwr_training_navi_pane_g5_ParamLimits

0x51bb,	// (0x00071649) hwr_training_navi_pane_g5

0xd608,	// (0x00079a96) popup_char_count_window

0x90ed,	// (0x0007557b) bg_popup_sub_pane_cp20_ParamLimits

0x63a9,	// (0x00072837) list_vitu2_match_list_pane_ParamLimits

0x63b8,	// (0x00072846) vitu2_page_scroll_pane_ParamLimits

0x63b8,	// (0x00072846) vitu2_page_scroll_pane

0xdaef,	// (0x00079f7d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaef,	// (0x00079f7d) list_single_hwr_training_symbol_option_pane

0xdb02,	// (0x00079f90) list_single_hwr_training_symbol_option_pane_g1

0xdb0a,	// (0x00079f98) list_single_hwr_training_symbol_option_pane_t1

0xdb18,	// (0x00079fa6) bg_button_pane_cp023

0xdb21,	// (0x00079faf) bg_button_pane_cp024

0x6a8b,	// (0x00072f19) vitu2_page_scroll_pane_g1

0x6a93,	// (0x00072f21) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007bf5a) vitu2_page_scroll_pane_g

0x6a9b,	// (0x00072f29) vitu2_page_scroll_pane_t1

0xd188,	// (0x00079616) popup_char_count_window_g1

0xdb54,	// (0x00079fe2) popup_char_count_window_g2

0xdb5d,	// (0x00079feb) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007bf5f) popup_char_count_window_g

0xdb66,	// (0x00079ff4) popup_char_count_window_t1

0x90fb,	// (0x00075589) main_vded2_pane

0xd0c4,	// (0x00079552) aid_size_cell_imed_line

0xd0ce,	// (0x0007955c) grid_imed_line_width_pane

0x9b3e,	// (0x00075fcc) vid4_indicators_pane_g4

0xdb74,	// (0x0007a002) cell_imed_line_width_pane_ParamLimits

0xdb74,	// (0x0007a002) cell_imed_line_width_pane

0xdb88,	// (0x0007a016) cell_imed_line_width_pane_g1

0xd7d4,	// (0x00079c62) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007bf66) cell_imed_line_width_pane_g

0x6aaa,	// (0x00072f38) main_vded2_pane_g1_ParamLimits

0x6aaa,	// (0x00072f38) main_vded2_pane_g1

0x6ac0,	// (0x00072f4e) main_vded2_pane_g2_ParamLimits

0x6ac0,	// (0x00072f4e) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007bf6b) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007bf6b) main_vded2_pane_g

0x6ad2,	// (0x00072f60) vded2_slider_pane_ParamLimits

0x6ad2,	// (0x00072f60) vded2_slider_pane

0x6ae2,	// (0x00072f70) aid_size_touch_vded2_end

0x6aec,	// (0x00072f7a) aid_size_touch_vded2_playhead

0xdb91,	// (0x0007a01f) aid_size_touch_vded2_start

0xdb99,	// (0x0007a027) vded2_slider_bg_pane

0xdba2,	// (0x0007a030) vded2_slider_pane_g1

0xdbab,	// (0x0007a039) vded2_slider_pane_g2

0x6af6,	// (0x00072f84) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007bf70) vded2_slider_pane_g

0xdbb3,	// (0x0007a041) vded2_slider_bg_pane_g1

0xdbbc,	// (0x0007a04a) vded2_slider_bg_pane_g2

0xdbc5,	// (0x0007a053) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007bf77) vded2_slider_bg_pane_g

0x2b8e,	// (0x0006f01c) aid_postcard_touch_down_pane_ParamLimits

0x2b8e,	// (0x0006f01c) aid_postcard_touch_down_pane

0x2ba4,	// (0x0006f032) aid_postcard_touch_up_pane_ParamLimits

0x2ba4,	// (0x0006f032) aid_postcard_touch_up_pane

0x90fb,	// (0x00075589) main_blid2_pane

0x96ec,	// (0x00075b7a) popup_blid2_search_window

0x9085,	// (0x00075513) blid2_gps_pane

0x9085,	// (0x00075513) blid2_navig_pane

0x9085,	// (0x00075513) blid2_search_pane

0x9085,	// (0x00075513) blid2_tripm_pane

0x6b01,	// (0x00072f8f) blid2_search_pane_g1_ParamLimits

0x6b01,	// (0x00072f8f) blid2_search_pane_g1

0x6b19,	// (0x00072fa7) blid2_search_pane_t1_ParamLimits

0x6b19,	// (0x00072fa7) blid2_search_pane_t1

0x6b2b,	// (0x00072fb9) aid_size_cell_blid2_gps_ParamLimits

0x6b2b,	// (0x00072fb9) aid_size_cell_blid2_gps

0x6b43,	// (0x00072fd1) blid2_gps_pane_g1_ParamLimits

0x6b43,	// (0x00072fd1) blid2_gps_pane_g1

0x6b57,	// (0x00072fe5) grid_blid2_satellite_pane_ParamLimits

0x6b57,	// (0x00072fe5) grid_blid2_satellite_pane

0x6b71,	// (0x00072fff) blid2_navig_pane_g1_ParamLimits

0x6b71,	// (0x00072fff) blid2_navig_pane_g1

0x6b7d,	// (0x0007300b) blid2_navig_pane_t1_ParamLimits

0x6b7d,	// (0x0007300b) blid2_navig_pane_t1

0x6b98,	// (0x00073026) blid2_navig_pane_t2_ParamLimits

0x6b98,	// (0x00073026) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007bf7e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007bf7e) blid2_navig_pane_t

0x6bb3,	// (0x00073041) blid2_navig_ring_pane_ParamLimits

0x6bb3,	// (0x00073041) blid2_navig_ring_pane

0x6bcc,	// (0x0007305a) blid2_speed_pane_ParamLimits

0x6bcc,	// (0x0007305a) blid2_speed_pane

0x6bd8,	// (0x00073066) blid2_tripm_pane_g1_ParamLimits

0x6bd8,	// (0x00073066) blid2_tripm_pane_g1

0x6bf3,	// (0x00073081) blid2_tripm_pane_g2_ParamLimits

0x6bf3,	// (0x00073081) blid2_tripm_pane_g2

0x6c07,	// (0x00073095) blid2_tripm_pane_g3_ParamLimits

0x6c07,	// (0x00073095) blid2_tripm_pane_g3

0x6c1b,	// (0x000730a9) blid2_tripm_pane_g4_ParamLimits

0x6c1b,	// (0x000730a9) blid2_tripm_pane_g4

0x6c2f,	// (0x000730bd) blid2_tripm_pane_g5_ParamLimits

0x6c2f,	// (0x000730bd) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007bf83) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007bf83) blid2_tripm_pane_g

0x6c55,	// (0x000730e3) blid2_tripm_pane_t1_ParamLimits

0x6c55,	// (0x000730e3) blid2_tripm_pane_t1

0x6c70,	// (0x000730fe) blid2_tripm_pane_t2_ParamLimits

0x6c70,	// (0x000730fe) blid2_tripm_pane_t2

0x6c89,	// (0x00073117) blid2_tripm_pane_t3_ParamLimits

0x6c89,	// (0x00073117) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007bf90) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007bf90) blid2_tripm_pane_t

0x6cd0,	// (0x0007315e) cell_blid2_satellite_pane_ParamLimits

0x6cd0,	// (0x0007315e) cell_blid2_satellite_pane

0x6cee,	// (0x0007317c) cell_blid2_satellite_pane_g1

0xdbce,	// (0x0007a05c) cell_blid2_satellite_pane_t1

0xcbab,	// (0x00079039) blid2_speed_pane_g1

0xdbdc,	// (0x0007a06a) blid2_speed_pane_t1

0xdbea,	// (0x0007a078) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007bf99) blid2_speed_pane_t

0xcbab,	// (0x00079039) blid2_navig_ring_pane_g1

0x6cf7,	// (0x00073185) blid2_navig_ring_pane_g2

0x6cff,	// (0x0007318d) blid2_navig_ring_pane_g3

0x6d07,	// (0x00073195) blid2_navig_ring_pane_g4

0x6d0f,	// (0x0007319d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007bf9e) blid2_navig_ring_pane_g

0x9085,	// (0x00075513) bg_popup_window_pane_cp011

0xdbf8,	// (0x0007a086) popup_blid2_search_window_g1

0xdc00,	// (0x0007a08e) popup_blid2_search_window_t1

0xdc0e,	// (0x0007a09c) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007bfa9) popup_blid2_search_window_t

0xaa3f,	// (0x00076ecd) main_browser_pane_g1

0x9fae,	// (0x0007643c) main_browser_pane_ParamLimits

0x90ed,	// (0x0007557b) bg_button_pane_cp011_ParamLimits

0x5c4a,	// (0x000720d8) cell_vitu2_function_pane_g1_ParamLimits

0xc7a1,	// (0x00078c2f) bg_popup_sub_pane_cp22_ParamLimits

0x6586,	// (0x00072a14) input_focus_pane_cp08_ParamLimits

0x659d,	// (0x00072a2b) popup_vitu2_query_button_pane_ParamLimits

0x659d,	// (0x00072a2b) popup_vitu2_query_button_pane

0x65ae,	// (0x00072a3c) popup_vitu2_query_input_button_pane

0xd89d,	// (0x00079d2b) popup_vitu2_query_window_g1_ParamLimits

0x65b8,	// (0x00072a46) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007beaa) popup_vitu2_query_window_g_ParamLimits

0x9085,	// (0x00075513) bg_button_pane_cp026

0x6d17,	// (0x000731a5) popup_vitu2_query_input_button_pane_g1

0x9085,	// (0x00075513) bg_button_pane_cp025

0xdc1c,	// (0x0007a0aa) popup_vitu2_query_button_pane_t1

0x4238,	// (0x000706c6) main_mp3_pane_t6

0x4246,	// (0x000706d4) popup_slider_window_cp01

0x9aa4,	// (0x00075f32) cam4_battery_pane

0x9afd,	// (0x00075f8b) cam4_battery_pane_cp02

0x9bf0,	// (0x0007607e) cam4_battery_pane_cp01

0x9bf0,	// (0x0007607e) cam4_battery_pane_cp03

0xd7dc,	// (0x00079c6a) cam4_battery_pane_g1

0xcbab,	// (0x00079039) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007bfae) cam4_battery_pane_g

0xca75,	// (0x00078f03) popup_blid_sat_info2_window_t11

0xb1ba,	// (0x00077648) aid_size_touch_mv_arrow_left_ParamLimits

0xb1e5,	// (0x00077673) aid_size_touch_mv_arrow_right_ParamLimits

0xb243,	// (0x000776d1) navi_pane_g1_ParamLimits

0xb24f,	// (0x000776dd) navi_pane_g2_ParamLimits

0xb27d,	// (0x0007770b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007b873) navi_pane_g_ParamLimits

0x264b,	// (0x0006ead9) navi_pane_mv_t1_ParamLimits

0x4e7b,	// (0x00071309) grid_imed_effect_pane_ParamLimits

0x12b2,	// (0x0006d740) aid_placing_vt_slider_lsc

0xa98e,	// (0x00076e1c) aid_placing_vt_slider_prt

0xa247,	// (0x000766d5) bg_tb_trans_pane_cp01_ParamLimits

0xcd37,	// (0x000791c5) popup_image_details_window_g1_ParamLimits

0xcd4a,	// (0x000791d8) popup_image_details_window_g2_ParamLimits

0xcd5f,	// (0x000791ed) popup_image_details_window_g3_ParamLimits

0xcd5f,	// (0x000791ed) popup_image_details_window_g3

0xf718,	// (0x0007bba6) popup_image_details_window_g_ParamLimits

0xcd73,	// (0x00079201) popup_image_details_window_t1_ParamLimits

0xcd85,	// (0x00079213) popup_image_details_window_t2_ParamLimits

0xcd9e,	// (0x0007922c) popup_image_details_window_t3_ParamLimits

0xcdb2,	// (0x00079240) popup_image_details_window_t4_ParamLimits

0xcdcd,	// (0x0007925b) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007bbad) popup_image_details_window_t_ParamLimits

0x6930,	// (0x00072dbe) cl_header_name_pane_ParamLimits

0x6930,	// (0x00072dbe) cl_header_name_pane

0x6d1f,	// (0x000731ad) cl_header_name_pane_t1_ParamLimits

0x6d1f,	// (0x000731ad) cl_header_name_pane_t1

0x6d40,	// (0x000731ce) cl_header_name_pane_t2_ParamLimits

0x6d40,	// (0x000731ce) cl_header_name_pane_t2

0x6d82,	// (0x00073210) cl_header_name_pane_t3_ParamLimits

0x6d82,	// (0x00073210) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007bfb3) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007bfb3) cl_header_name_pane_t

0xb30c,	// (0x0007779a) navi_pane_mv_g2_ParamLimits

0xd5e2,	// (0x00079a70) field_vitu2_entry_pane_g1_ParamLimits

0xd5ee,	// (0x00079a7c) field_vitu2_entry_pane_g2_ParamLimits

0xd5fa,	// (0x00079a88) field_vitu2_entry_pane_g3_ParamLimits

0xd5fa,	// (0x00079a88) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007bda9) field_vitu2_entry_pane_g_ParamLimits

0x5bc1,	// (0x0007204f) cell_vitu2_itu_pane_g1_ParamLimits

0x5bd1,	// (0x0007205f) cell_vitu2_itu_pane_g2_ParamLimits

0x5bd1,	// (0x0007205f) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007bdb5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007bdb5) cell_vitu2_itu_pane_g

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp05_ParamLimits

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp05

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp03

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp04

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp10_ParamLimits

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp10

0x68d2,	// (0x00072d60) bg_vkb2_func_pane_cp08

0x68b8,	// (0x00072d46) bg_vkb2_func_pane_cp06

0x68c6,	// (0x00072d54) bg_vkb2_func_pane_cp07

0xdb2a,	// (0x00079fb8) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2a,	// (0x00079fb8) bg_vkb2_func_pane_cp11

0xdb3f,	// (0x00079fcd) bg_vkb2_func_pane_cp12_ParamLimits

0xdb3f,	// (0x00079fcd) bg_vkb2_func_pane_cp12

0x9085,	// (0x00075513) bg_vkb2_func_pane_cp09

0xd61a,	// (0x00079aa8) bg_vkb2_func_pane_g1

0xab50,	// (0x00076fde) bg_vkb2_func_pane_g2

0xd622,	// (0x00079ab0) bg_vkb2_func_pane_g3

0xd62a,	// (0x00079ab8) bg_vkb2_func_pane_g4

0xd862,	// (0x00079cf0) bg_vkb2_func_pane_g5

0xd642,	// (0x00079ad0) bg_vkb2_func_pane_g6

0xd64a,	// (0x00079ad8) bg_vkb2_func_pane_g7

0xd63a,	// (0x00079ac8) bg_vkb2_func_pane_g8

0xab30,	// (0x00076fbe) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007bfba) bg_vkb2_func_pane_g

0x6c43,	// (0x000730d1) blid2_tripm_pane_g6_ParamLimits

0x6c43,	// (0x000730d1) blid2_tripm_pane_g6

0xd486,	// (0x00079914) mp4_progress_pane_g1

0x6cbc,	// (0x0007314a) blid2_tripm_values_pane_ParamLimits

0x6cbc,	// (0x0007314a) blid2_tripm_values_pane

0x6db3,	// (0x00073241) blid2_tripm_values_pane_t1

0x6dc1,	// (0x0007324f) blid2_tripm_values_pane_t2

0x6dcf,	// (0x0007325d) blid2_tripm_values_pane_t3

0x6ddd,	// (0x0007326b) blid2_tripm_values_pane_t4

0x6deb,	// (0x00073279) blid2_tripm_values_pane_t5

0x6df9,	// (0x00073287) blid2_tripm_values_pane_t6

0x6e07,	// (0x00073295) blid2_tripm_values_pane_t7

0x6e15,	// (0x000732a3) blid2_tripm_values_pane_t8

0x6e23,	// (0x000732b1) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007bfcd) blid2_tripm_values_pane_t

0x12f4,	// (0x0006d782) call_video_pane_t1_ParamLimits

0x1312,	// (0x0006d7a0) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007b6fc) call_video_pane_t_ParamLimits

0x2b0c,	// (0x0006ef9a) msg_header_pane_g1_ParamLimits

0xb511,	// (0x0007799f) msg_header_pane_g2_ParamLimits

0xb511,	// (0x0007799f) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007b916) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007b916) msg_header_pane_g

0x9fae,	// (0x0007643c) main_clock2_pane_ParamLimits

0x4b74,	// (0x00071002) grid_clock2_toolbar_pane_ParamLimits

0x4b74,	// (0x00071002) grid_clock2_toolbar_pane

0x4b74,	// (0x00071002) listscroll_clock2_pane_ParamLimits

0x4b74,	// (0x00071002) listscroll_clock2_pane

0x4c6d,	// (0x000710fb) main_clock2_pane_t3_ParamLimits

0x4c6d,	// (0x000710fb) main_clock2_pane_t3

0x4c91,	// (0x0007111f) main_clock2_pane_t4_ParamLimits

0x4c91,	// (0x0007111f) main_clock2_pane_t4

0xdc2a,	// (0x0007a0b8) cell_clock2_toolbar_pane

0xdc32,	// (0x0007a0c0) cell_clock2_toolbar_pane_cp01

0xdc32,	// (0x0007a0c0) cell_clock2_toolbar_pane_cp02

0xdc3a,	// (0x0007a0c8) cell_clock2_toolbar_pane_cp03

0xdc42,	// (0x0007a0d0) list_clock2_pane

0xb130,	// (0x000775be) scroll_pane_cp10

0xdc4a,	// (0x0007a0d8) list_single_clock2_pane_ParamLimits

0xdc4a,	// (0x0007a0d8) list_single_clock2_pane

0xb373,	// (0x00077801) list_highlight_pane_cp08

0xdc57,	// (0x0007a0e5) list_single_clock2_pane_t1

0xdc65,	// (0x0007a0f3) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007bfe0) list_single_clock2_pane_t

0x9085,	// (0x00075513) bg_button_pane_cp10

0xdc73,	// (0x0007a101) cell_clock2_toolbar_pane_g1

0x2b1a,	// (0x0006efa8) aid_main_viewer_pane_g1_ParamLimits

0x2b1a,	// (0x0006efa8) aid_main_viewer_pane_g1

0x2b28,	// (0x0006efb6) aid_main_viewer_pane_g2_ParamLimits

0x2b28,	// (0x0006efb6) aid_main_viewer_pane_g2

0x2b36,	// (0x0006efc4) aid_main_viewer_pane_g3_ParamLimits

0x2b36,	// (0x0006efc4) aid_main_viewer_pane_g3

0x2b45,	// (0x0006efd3) aid_main_viewer_pane_g4_ParamLimits

0x2b45,	// (0x0006efd3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007b927) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007b927) aid_main_viewer_pane_g

0x3453,	// (0x0006f8e1) main_calc_pane_ParamLimits

0x3479,	// (0x0006f907) main_dialer2_pane_ParamLimits

0x90fb,	// (0x00075589) main_cam6_pane

0x90fb,	// (0x00075589) main_vid6_pane

0x4b80,	// (0x0007100e) listscroll_gen_pane_cp06_ParamLimits

0x4b80,	// (0x0007100e) listscroll_gen_pane_cp06

0x4cb4,	// (0x00071142) main_clock2_pane_t5_ParamLimits

0x4cb4,	// (0x00071142) main_clock2_pane_t5

0x4d10,	// (0x0007119e) aid_call2_pane_cp10_ParamLimits

0x4d22,	// (0x000711b0) aid_call_pane_cp10_ParamLimits

0xb1ae,	// (0x0007763c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1ae,	// (0x0007763c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d34,	// (0x000711c2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d34,	// (0x000711c2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1ae,	// (0x0007763c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007bc62) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d46,	// (0x000711d4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x53d6,	// (0x00071864) cell_dialer2_keypad_pane_g2_ParamLimits

0x53d6,	// (0x00071864) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007bd48) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007bd48) cell_dialer2_keypad_pane_g

0x53f2,	// (0x00071880) cell_dialer2_keypad_pane_t1

0x5f60,	// (0x000723ee) main_cset_text2_pane_ParamLimits

0x5f60,	// (0x000723ee) main_cset_text2_pane

0xda89,	// (0x00079f17) area_vitu2_query_pane_g1_ParamLimits

0x6857,	// (0x00072ce5) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007befd) area_vitu2_query_pane_g_ParamLimits

0xa3a5,	// (0x00076833) area_vitu2_query_pane_t7_ParamLimits

0xa3a5,	// (0x00076833) area_vitu2_query_pane_t7

0x68b8,	// (0x00072d46) bg_button_pane_cp018_ParamLimits

0x68c6,	// (0x00072d54) bg_button_pane_cp021_ParamLimits

0x68d2,	// (0x00072d60) bg_button_pane_cp022_ParamLimits

0x68d2,	// (0x00072d60) bg_vkb2_func_pane_cp08_ParamLimits

0x68b8,	// (0x00072d46) bg_vkb2_func_pane_cp06_ParamLimits

0x68c6,	// (0x00072d54) bg_vkb2_func_pane_cp07_ParamLimits

0x68e3,	// (0x00072d71) input_focus_pane_cp09_ParamLimits

0x9c61,	// (0x000760ef) cam6_autofocus_pane_ParamLimits

0x9c61,	// (0x000760ef) cam6_autofocus_pane

0x6e31,	// (0x000732bf) cam6_image_uncrop_pane_ParamLimits

0x6e31,	// (0x000732bf) cam6_image_uncrop_pane

0x6e40,	// (0x000732ce) cam6_indi_pane_ParamLimits

0x6e40,	// (0x000732ce) cam6_indi_pane

0x6e56,	// (0x000732e4) cam6_mode_pane_ParamLimits

0x6e56,	// (0x000732e4) cam6_mode_pane

0x6e68,	// (0x000732f6) cam6_timer_pane_ParamLimits

0x6e68,	// (0x000732f6) cam6_timer_pane

0x6e74,	// (0x00073302) cam6_zoom_pane_ParamLimits

0x6e74,	// (0x00073302) cam6_zoom_pane

0x6e80,	// (0x0007330e) cam6_mode_pane_g1_ParamLimits

0x6e80,	// (0x0007330e) cam6_mode_pane_g1

0x6e90,	// (0x0007331e) cam6_mode_pane_g2_ParamLimits

0x6e90,	// (0x0007331e) cam6_mode_pane_g2

0x6ea0,	// (0x0007332e) cam6_mode_pane_g3_ParamLimits

0x6ea0,	// (0x0007332e) cam6_mode_pane_g3

0x6eb0,	// (0x0007333e) cam6_mode_pane_g4_ParamLimits

0x6eb0,	// (0x0007333e) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007bfe5) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007bfe5) cam6_mode_pane_g

0xdc7b,	// (0x0007a109) bg_tb_trans_pane_cp08_ParamLimits

0xdc7b,	// (0x0007a109) bg_tb_trans_pane_cp08

0xdc89,	// (0x0007a117) cam6_battery_pane_ParamLimits

0xdc89,	// (0x0007a117) cam6_battery_pane

0xdc9f,	// (0x0007a12d) cam6_indi_pane_g1_ParamLimits

0xdc9f,	// (0x0007a12d) cam6_indi_pane_g1

0xdcb1,	// (0x0007a13f) cam6_indi_pane_g2_ParamLimits

0xdcb1,	// (0x0007a13f) cam6_indi_pane_g2

0xdcc3,	// (0x0007a151) cam6_indi_pane_g3_ParamLimits

0xdcc3,	// (0x0007a151) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007bfee) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007bfee) cam6_indi_pane_g

0xdcd5,	// (0x0007a163) cam6_indi_pane_t1_ParamLimits

0xdcd5,	// (0x0007a163) cam6_indi_pane_t1

0x6ec0,	// (0x0007334e) cam6_autofocus_pane_g1

0x6ec8,	// (0x00073356) cam6_autofocus_pane_g2

0x6ed0,	// (0x0007335e) cam6_autofocus_pane_g3

0x6ed8,	// (0x00073366) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007bff5) cam6_autofocus_pane_g

0xdcfb,	// (0x0007a189) cam6_timer_pane_g1

0xdd03,	// (0x0007a191) cam6_timer_pane_t1

0xdd11,	// (0x0007a19f) cam6_zoom_cont_pane

0xdd19,	// (0x0007a1a7) cam6_zoom_pane_g1

0xdd21,	// (0x0007a1af) cam6_zoom_pane_g2

0x6ee0,	// (0x0007336e) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007bffe) cam6_zoom_pane_g

0xcbab,	// (0x00079039) cam6_battery_pane_g1

0xcbab,	// (0x00079039) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007bb6a) cam6_battery_pane_g

0xdd29,	// (0x0007a1b7) cam6_zoom_cont_pane_g1

0xdd32,	// (0x0007a1c0) cam6_zoom_cont_pane_g2

0xdd3b,	// (0x0007a1c9) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007c005) cam6_zoom_cont_pane_g

0x6efd,	// (0x0007338b) cam6_mode_pane_cp_ParamLimits

0x6efd,	// (0x0007338b) cam6_mode_pane_cp

0x6f0f,	// (0x0007339d) cam6_zoom_pane_cp_ParamLimits

0x6f0f,	// (0x0007339d) cam6_zoom_pane_cp

0x6f1b,	// (0x000733a9) vid6_image_uncrop_cif_pane_ParamLimits

0x6f1b,	// (0x000733a9) vid6_image_uncrop_cif_pane

0x6f2b,	// (0x000733b9) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f2b,	// (0x000733b9) vid6_image_uncrop_nhd_pane

0x6f3a,	// (0x000733c8) vid6_image_uncrop_vga_pane_ParamLimits

0x6f3a,	// (0x000733c8) vid6_image_uncrop_vga_pane

0x6f49,	// (0x000733d7) vid6_image_uncrop_wvga_pane_ParamLimits

0x6f49,	// (0x000733d7) vid6_image_uncrop_wvga_pane

0x6f58,	// (0x000733e6) vid6_indi_pane_ParamLimits

0x6f58,	// (0x000733e6) vid6_indi_pane

0xdc7b,	// (0x0007a109) bg_tb_trans_pane_cp09_ParamLimits

0xdc7b,	// (0x0007a109) bg_tb_trans_pane_cp09

0xdd53,	// (0x0007a1e1) cam6_battery_pane_cp_ParamLimits

0xdd53,	// (0x0007a1e1) cam6_battery_pane_cp

0xdd5f,	// (0x0007a1ed) vid6_indi_pane_g1_ParamLimits

0xdd5f,	// (0x0007a1ed) vid6_indi_pane_g1

0xdd71,	// (0x0007a1ff) vid6_indi_pane_g2_ParamLimits

0xdd71,	// (0x0007a1ff) vid6_indi_pane_g2

0xdd83,	// (0x0007a211) vid6_indi_pane_g3_ParamLimits

0xdd83,	// (0x0007a211) vid6_indi_pane_g3

0xdd98,	// (0x0007a226) vid6_indi_pane_g4_ParamLimits

0xdd98,	// (0x0007a226) vid6_indi_pane_g4

0xddad,	// (0x0007a23b) vid6_indi_pane_g5_ParamLimits

0xddad,	// (0x0007a23b) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007c00c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007c00c) vid6_indi_pane_g

0xddc7,	// (0x0007a255) vid6_indi_pane_t1_ParamLimits

0xddc7,	// (0x0007a255) vid6_indi_pane_t1

0xdddd,	// (0x0007a26b) vid6_indi_pane_t2_ParamLimits

0xdddd,	// (0x0007a26b) vid6_indi_pane_t2

0xde05,	// (0x0007a293) vid6_indi_pane_t3_ParamLimits

0xde05,	// (0x0007a293) vid6_indi_pane_t3

0xde2d,	// (0x0007a2bb) vid6_indi_pane_t4_ParamLimits

0xde2d,	// (0x0007a2bb) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007c017) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007c017) vid6_indi_pane_t

0xde51,	// (0x0007a2df) wait_bar_pane_cp08

0x6f70,	// (0x000733fe) main_cset_text2_pane_t1_ParamLimits

0x6f70,	// (0x000733fe) main_cset_text2_pane_t1

0x6ee8,	// (0x00073376) listscroll_gen_pane_cp06_t1_ParamLimits

0x6ee8,	// (0x00073376) listscroll_gen_pane_cp06_t1

0x90fb,	// (0x00075589) main_cam6_set_pane

0x9a96,	// (0x00075f24) bg_tb_trans_pane_cp06_ParamLimits

0x9aac,	// (0x00075f3a) cam4_indicators_pane_g1_ParamLimits

0x9abd,	// (0x00075f4b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007bd85) cam4_indicators_pane_g_ParamLimits

0x9adb,	// (0x00075f69) cam4_indicators_pane_t1_ParamLimits

0x90ed,	// (0x0007557b) bg_tb_trans_pane_cp07_ParamLimits

0x9b05,	// (0x00075f93) vid4_indicators_pane_g1_ParamLimits

0x9b19,	// (0x00075fa7) vid4_indicators_pane_g2_ParamLimits

0x9b2d,	// (0x00075fbb) vid4_indicators_pane_g3_ParamLimits

0x9b3e,	// (0x00075fcc) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007bd97) vid4_indicators_pane_g_ParamLimits

0x9b5a,	// (0x00075fe8) vid4_indicators_pane_t1_ParamLimits

0x9bf8,	// (0x00076086) vid4_progress_pane_g1_ParamLimits

0x9c08,	// (0x00076096) vid4_progress_pane_g2_ParamLimits

0x6a23,	// (0x00072eb1) vid4_progress_pane_g3_ParamLimits

0x9c18,	// (0x000760a6) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007bf48) vid4_progress_pane_g_ParamLimits

0x6a35,	// (0x00072ec3) vid4_progress_pane_t1_ParamLimits

0x9c36,	// (0x000760c4) vid4_progress_pane_t2_ParamLimits

0x9c4b,	// (0x000760d9) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007bf53) vid4_progress_pane_t_ParamLimits

0x6a4b,	// (0x00072ed9) wait_bar_pane_cp07_ParamLimits

0x6f8f,	// (0x0007341d) main_cam6_set_pane_g2_ParamLimits

0x6f8f,	// (0x0007341d) main_cam6_set_pane_g2

0x6fb3,	// (0x00073441) main_cset6_listscroll_pane_ParamLimits

0x6fb3,	// (0x00073441) main_cset6_listscroll_pane

0x6fcf,	// (0x0007345d) main_cset6_slider_pane_ParamLimits

0x6fcf,	// (0x0007345d) main_cset6_slider_pane

0x6fe5,	// (0x00073473) main_cset6_text2_pane_ParamLimits

0x6fe5,	// (0x00073473) main_cset6_text2_pane

0xde60,	// (0x0007a2ee) main_cset6_text_pane

0xde68,	// (0x0007a2f6) main_cset_list_pane_copy1_ParamLimits

0xde68,	// (0x0007a2f6) main_cset_list_pane_copy1

0xde78,	// (0x0007a306) scroll_pane_cp028_copy1

0x6ff3,	// (0x00073481) cset_list_set_pane_copy1

0x7005,	// (0x00073493) aid_position_infowindow_above_copy1

0x700d,	// (0x0007349b) aid_position_infowindow_below_copy1

0x7015,	// (0x000734a3) cset_list_set_pane_g1_copy1

0x701d,	// (0x000734ab) cset_list_set_pane_g3_copy1_ParamLimits

0x701d,	// (0x000734ab) cset_list_set_pane_g3_copy1

0x702c,	// (0x000734ba) cset_list_set_pane_t1_copy1_ParamLimits

0x702c,	// (0x000734ba) cset_list_set_pane_t1_copy1

0xa247,	// (0x000766d5) list_highlight_pane_cp021_copy1_ParamLimits

0xa247,	// (0x000766d5) list_highlight_pane_cp021_copy1

0xde81,	// (0x0007a30f) cset6_slider_pane_ParamLimits

0xde81,	// (0x0007a30f) cset6_slider_pane

0xdead,	// (0x0007a33b) main_cset6_slider_pane_g1_ParamLimits

0xdead,	// (0x0007a33b) main_cset6_slider_pane_g1

0x7041,	// (0x000734cf) main_cset6_slider_pane_g2_ParamLimits

0x7041,	// (0x000734cf) main_cset6_slider_pane_g2

0xded5,	// (0x0007a363) main_cset6_slider_pane_g3_ParamLimits

0xded5,	// (0x0007a363) main_cset6_slider_pane_g3

0x7069,	// (0x000734f7) main_cset6_slider_pane_g4_ParamLimits

0x7069,	// (0x000734f7) main_cset6_slider_pane_g4

0x7075,	// (0x00073503) main_cset6_slider_pane_g5_ParamLimits

0x7075,	// (0x00073503) main_cset6_slider_pane_g5

0xd749,	// (0x00079bd7) main_cset6_slider_pane_g7_ParamLimits

0xd749,	// (0x00079bd7) main_cset6_slider_pane_g7

0xd755,	// (0x00079be3) main_cset6_slider_pane_g8_ParamLimits

0xd755,	// (0x00079be3) main_cset6_slider_pane_g8

0x600d,	// (0x0007249b) main_cset6_slider_pane_g9_ParamLimits

0x600d,	// (0x0007249b) main_cset6_slider_pane_g9

0x6019,	// (0x000724a7) main_cset6_slider_pane_g10_ParamLimits

0x6019,	// (0x000724a7) main_cset6_slider_pane_g10

0x6025,	// (0x000724b3) main_cset6_slider_pane_g11_ParamLimits

0x6025,	// (0x000724b3) main_cset6_slider_pane_g11

0x6031,	// (0x000724bf) main_cset6_slider_pane_g12_ParamLimits

0x6031,	// (0x000724bf) main_cset6_slider_pane_g12

0x603d,	// (0x000724cb) main_cset6_slider_pane_g13_ParamLimits

0x603d,	// (0x000724cb) main_cset6_slider_pane_g13

0x6049,	// (0x000724d7) main_cset6_slider_pane_g14_ParamLimits

0x6049,	// (0x000724d7) main_cset6_slider_pane_g14

0x7081,	// (0x0007350f) main_cset6_slider_pane_g15_ParamLimits

0x7081,	// (0x0007350f) main_cset6_slider_pane_g15

0x606d,	// (0x000724fb) main_cset6_slider_pane_g16_ParamLimits

0x606d,	// (0x000724fb) main_cset6_slider_pane_g16

0x6079,	// (0x00072507) main_cset6_slider_pane_g17_ParamLimits

0x6079,	// (0x00072507) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007c020) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007c020) main_cset6_slider_pane_g

0xdee1,	// (0x0007a36f) main_cset6_slider_pane_t1_ParamLimits

0xdee1,	// (0x0007a36f) main_cset6_slider_pane_t1

0x70b1,	// (0x0007353f) main_cset6_slider_pane_t2_ParamLimits

0x70b1,	// (0x0007353f) main_cset6_slider_pane_t2

0x70dc,	// (0x0007356a) main_cset6_slider_pane_t3_ParamLimits

0x70dc,	// (0x0007356a) main_cset6_slider_pane_t3

0x7107,	// (0x00073595) main_cset6_slider_pane_t4_ParamLimits

0x7107,	// (0x00073595) main_cset6_slider_pane_t4

0x7132,	// (0x000735c0) main_cset6_slider_pane_t5_ParamLimits

0x7132,	// (0x000735c0) main_cset6_slider_pane_t5

0xdf22,	// (0x0007a3b0) main_cset6_slider_pane_t7_ParamLimits

0xdf22,	// (0x0007a3b0) main_cset6_slider_pane_t7

0x715d,	// (0x000735eb) main_cset6_slider_pane_t8_ParamLimits

0x715d,	// (0x000735eb) main_cset6_slider_pane_t8

0x7181,	// (0x0007360f) main_cset6_slider_pane_t9_ParamLimits

0x7181,	// (0x0007360f) main_cset6_slider_pane_t9

0x71a5,	// (0x00073633) main_cset6_slider_pane_t10_ParamLimits

0x71a5,	// (0x00073633) main_cset6_slider_pane_t10

0x71c9,	// (0x00073657) main_cset6_slider_pane_t11_ParamLimits

0x71c9,	// (0x00073657) main_cset6_slider_pane_t11

0xdf58,	// (0x0007a3e6) main_cset6_slider_pane_t14_ParamLimits

0xdf58,	// (0x0007a3e6) main_cset6_slider_pane_t14

0xdf91,	// (0x0007a41f) main_cset6_slider_pane_t15_ParamLimits

0xdf91,	// (0x0007a41f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007c045) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007c045) main_cset6_slider_pane_t

0xdfca,	// (0x0007a458) cset_slider_pane_g1_copy1

0xdfd3,	// (0x0007a461) cset_slider_pane_g2_copy1

0xdfdc,	// (0x0007a46a) cset_slider_pane_g3_copy1

0x9085,	// (0x00075513) bg_popup_sub_pane_cp011_copy1

0xdfe5,	// (0x0007a473) main_cset_text_pane_g1_copy1

0xd8b1,	// (0x00079d3f) main_cset_text_pane_t1_copy1

0xd8bf,	// (0x00079d4d) main_cset_text_pane_t2_copy1

0xd8cd,	// (0x00079d5b) main_cset_text_pane_t3_copy1

0xd8db,	// (0x00079d69) main_cset_text_pane_t4_copy1

0xd8e9,	// (0x00079d77) main_cset_text_pane_t5_copy1

0xdfed,	// (0x0007a47b) main_cset_text_pane_t6_copy1

0xdffb,	// (0x0007a489) main_cset_text_pane_t7_copy1

0x7262,	// (0x000736f0) main_cset_text2_pane_t1_copy1

0x90ed,	// (0x0007557b) main_ncimui_pane

0x36b5,	// (0x0006fb43) popup_query_ncimui_window_ParamLimits

0x36b5,	// (0x0006fb43) popup_query_ncimui_window

0xa291,	// (0x0007671f) field_cale_ev2_pane_g4_ParamLimits

0xa291,	// (0x0007671f) field_cale_ev2_pane_g4

0x52b2,	// (0x00071740) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52b2,	// (0x00071740) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007bd23) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007bd23) cell_video_dialer_keypad_pane_g

0x52ca,	// (0x00071758) cell_video_dialer_keypad_pane_t1

0x9085,	// (0x00075513) bg_popup_window_pane_cp012

0xaff1,	// (0x0007747f) heading_pane_cp06

0xe027,	// (0x0007a4b5) ncim_query_content_pane

0x9085,	// (0x00075513) bg_popup_heading_pane_cp01

0xe02f,	// (0x0007a4bd) ncim_heading_pane_t1

0xe03d,	// (0x0007a4cb) ncim_indicator_popup_pane

0xe04f,	// (0x0007a4dd) ncim_query_button_pane

0xe063,	// (0x0007a4f1) ncim_query_content_pane_t1

0xe075,	// (0x0007a503) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007c089) ncim_query_content_pane_t

0xe0af,	// (0x0007a53d) ncim_query_list_pane

0xe0c1,	// (0x0007a54f) ncim_query_popup_pane

0xe03d,	// (0x0007a4cb) ncim_indicator_popup_pane_ParamLimits

0x73a6,	// (0x00073834) ncim_query_content_pane_g1_ParamLimits

0x73a6,	// (0x00073834) ncim_query_content_pane_g1

0xe063,	// (0x0007a4f1) ncim_query_content_pane_t1_ParamLimits

0xe075,	// (0x0007a503) ncim_query_content_pane_t2_ParamLimits

0x73b2,	// (0x00073840) ncim_query_content_pane_t3_ParamLimits

0x73b2,	// (0x00073840) ncim_query_content_pane_t3

0x73da,	// (0x00073868) ncim_query_content_pane_t4_ParamLimits

0x73da,	// (0x00073868) ncim_query_content_pane_t4

0x7402,	// (0x00073890) ncim_query_content_pane_t5_ParamLimits

0x7402,	// (0x00073890) ncim_query_content_pane_t5

0xe087,	// (0x0007a515) ncim_query_content_pane_t6_ParamLimits

0xe087,	// (0x0007a515) ncim_query_content_pane_t6

0xfbfb,	// (0x0007c089) ncim_query_content_pane_t_ParamLimits

0xe0af,	// (0x0007a53d) ncim_query_list_pane_ParamLimits

0xe0c1,	// (0x0007a54f) ncim_query_popup_pane_ParamLimits

0xe0d5,	// (0x0007a563) wait_bar_pane_cp04

0x9085,	// (0x00075513) input_focus_pane_cp011

0xe0dd,	// (0x0007a56b) ncim_query_popup_pane_t1

0xe0eb,	// (0x0007a579) ncim_list_query_list_pane_ParamLimits

0xe0eb,	// (0x0007a579) ncim_list_query_list_pane

0x9085,	// (0x00075513) bg_button_pane_cp027

0xe0fe,	// (0x0007a58c) ncim_query_button_pane_g1

0x9085,	// (0x00075513) list_highlight_pane_cp012

0xe108,	// (0x0007a596) ncim_list_query_list_pane_g1

0xe110,	// (0x0007a59e) ncim_list_query_list_pane_t1

0x9acc,	// (0x00075f5a) cam4_indicators_pane_g3_ParamLimits

0x9acc,	// (0x00075f5a) cam4_indicators_pane_g3

0x9b4a,	// (0x00075fd8) vid4_indicators_pane_g5_ParamLimits

0x9b4a,	// (0x00075fd8) vid4_indicators_pane_g5

0x9c27,	// (0x000760b5) vid4_progress_pane_g5_ParamLimits

0x9c27,	// (0x000760b5) vid4_progress_pane_g5

0x7294,	// (0x00073722) main_ncimui_pane_g1

0x72fa,	// (0x00073788) ncimui_group_query_pane_ParamLimits

0x72fa,	// (0x00073788) ncimui_group_query_pane

0x7342,	// (0x000737d0) ncimui_list_pane_ParamLimits

0x7342,	// (0x000737d0) ncimui_list_pane

0x7369,	// (0x000737f7) ncimui_text_pane_ParamLimits

0x7369,	// (0x000737f7) ncimui_text_pane

0x742a,	// (0x000738b8) ncimui_text_pane_t1_ParamLimits

0x742a,	// (0x000738b8) ncimui_text_pane_t1

0xe11e,	// (0x0007a5ac) ncimui_list_single_graphic_pane_ParamLimits

0xe11e,	// (0x0007a5ac) ncimui_list_single_graphic_pane

0x7448,	// (0x000738d6) ncimui_query_pane_ParamLimits

0x7448,	// (0x000738d6) ncimui_query_pane

0x9085,	// (0x00075513) list_highlight_pane_cp013

0xe12e,	// (0x0007a5bc) ncim_list_query_list_pane_t1_copy1

0xe108,	// (0x0007a596) ncim_list_single_graphic_pane_g1

0xe13c,	// (0x0007a5ca) ncim_query_button_pane_cp01

0xe148,	// (0x0007a5d6) ncim_query_entry_pane_ParamLimits

0xe148,	// (0x0007a5d6) ncim_query_entry_pane

0xe15b,	// (0x0007a5e9) ncimui_query_pane_g1

0xe167,	// (0x0007a5f5) ncimui_query_pane_t1_ParamLimits

0xe167,	// (0x0007a5f5) ncimui_query_pane_t1

0xa247,	// (0x000766d5) input_focus_pane_cp012

0xe180,	// (0x0007a60e) ncim_query_entry_pane_t1

0x9fae,	// (0x0007643c) main_im_pane_ParamLimits

0x90ed,	// (0x0007557b) main_mobtv_pane_ParamLimits

0x90ed,	// (0x0007557b) main_mobtv_pane

0x7099,	// (0x00073527) main_cset6_slider_pane_g18_ParamLimits

0x7099,	// (0x00073527) main_cset6_slider_pane_g18

0x70a5,	// (0x00073533) main_cset6_slider_pane_g19_ParamLimits

0x70a5,	// (0x00073533) main_cset6_slider_pane_g19

0x745b,	// (0x000738e9) bg_main_mobtv_pane_ParamLimits

0x745b,	// (0x000738e9) bg_main_mobtv_pane

0x7469,	// (0x000738f7) main_mobtv_info_pane

0x7472,	// (0x00073900) main_mobtv_loading_pane_ParamLimits

0x7472,	// (0x00073900) main_mobtv_loading_pane

0xe192,	// (0x0007a620) main_mobtv_pg_channel_list_pane

0xe19c,	// (0x0007a62a) main_mobtv_pg_hdr_pane

0x747f,	// (0x0007390d) main_mobtv_programe_curr_pane_ParamLimits

0x747f,	// (0x0007390d) main_mobtv_programe_curr_pane

0x748c,	// (0x0007391a) main_mobtv_programe_next_pane_ParamLimits

0x748c,	// (0x0007391a) main_mobtv_programe_next_pane

0xe1a5,	// (0x0007a633) popup_mobtv_noti_window

0xcbab,	// (0x00079039) main_tv_pg_hdr_pane_g1

0xe1ad,	// (0x0007a63b) main_tv_pg_hdr_pane_g2

0xe1b5,	// (0x0007a643) main_tv_pg_hdr_pane_g3

0xe1bd,	// (0x0007a64b) main_tv_pg_hdr_pane_g4

0xe1c5,	// (0x0007a653) main_tv_pg_hdr_pane_g5

0xe1cf,	// (0x0007a65d) main_tv_pg_hdr_pane_g6

0xe1d9,	// (0x0007a667) main_tv_pg_hdr_pane_g7

0xe1e3,	// (0x0007a671) main_tv_pg_hdr_pane_g8

0xe1ed,	// (0x0007a67b) main_tv_pg_hdr_pane_g9

0xe1f7,	// (0x0007a685) main_tv_pg_hdr_pane_g10

0xe201,	// (0x0007a68f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007c096) main_tv_pg_hdr_pane_g

0xe20b,	// (0x0007a699) main_tv_pg_hdr_pane_t1

0xe219,	// (0x0007a6a7) main_tv_pg_hdr_pane_t2

0xe227,	// (0x0007a6b5) main_tv_pg_hdr_pane_t3

0xe237,	// (0x0007a6c5) main_tv_pg_hdr_pane_t4

0xe247,	// (0x0007a6d5) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007c0ad) main_tv_pg_hdr_pane_t

0xe257,	// (0x0007a6e5) single_mobtv_pg_channel_pane_ParamLimits

0xe257,	// (0x0007a6e5) single_mobtv_pg_channel_pane

0xe269,	// (0x0007a6f7) single_mobtv_pg_channel_table_pane

0xe272,	// (0x0007a700) single_mobtv_pg_channel_thumb_pane

0xe27b,	// (0x0007a709) single_tv_pg_channel_pane_g1

0xe284,	// (0x0007a712) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007c0b8) single_tv_pg_channel_pane_g

0xce17,	// (0x000792a5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce17,	// (0x000792a5) bg_single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x0007a71b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe28d,	// (0x0007a71b) single_mobtv_pg_channel_thumb_pane_g1

0xe29b,	// (0x0007a729) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29b,	// (0x0007a729) single_mobtv_pg_channel_thumb_pane_g2

0xe2a7,	// (0x0007a735) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a7,	// (0x0007a735) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007c0bd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007c0bd) single_mobtv_pg_channel_thumb_pane_g

0xe2b3,	// (0x0007a741) single_mobtv_pg_channel_thumb_pane_t1

0xe2c1,	// (0x0007a74f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007c0c4) single_mobtv_pg_channel_thumb_pane_t

0xcbab,	// (0x00079039) bg_single_mobtv_pg_channel_table_pane_g1

0xcbab,	// (0x00079039) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007bb6a) bg_single_mobtv_pg_channel_table_pane_g

0xe2cf,	// (0x0007a75d) single_mobtv_pg_channel_table_pane_t1

0xe2dd,	// (0x0007a76b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007c0c9) single_mobtv_pg_channel_table_pane_t

0x74a1,	// (0x0007392f) main_mobtv_info_pane_g1_ParamLimits

0x74a1,	// (0x0007392f) main_mobtv_info_pane_g1

0x74bf,	// (0x0007394d) main_mobtv_info_pane_t1_ParamLimits

0x74bf,	// (0x0007394d) main_mobtv_info_pane_t1

0x7537,	// (0x000739c5) main_mobtv_info_pane_t2_ParamLimits

0x7537,	// (0x000739c5) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007c0d3) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007c0d3) main_mobtv_info_pane_t

0x75c6,	// (0x00073a54) wait_bar_pane_cp05

0x75d8,	// (0x00073a66) main_mobtv_loading_pane_g1_ParamLimits

0x75d8,	// (0x00073a66) main_mobtv_loading_pane_g1

0x75eb,	// (0x00073a79) main_mobtv_loading_pane_g2_ParamLimits

0x75eb,	// (0x00073a79) main_mobtv_loading_pane_g2

0x75f7,	// (0x00073a85) main_mobtv_loading_pane_g3_ParamLimits

0x75f7,	// (0x00073a85) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007c0da) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007c0da) main_mobtv_loading_pane_g

0xe2eb,	// (0x0007a779) main_mobtv_loading_pane_t1_ParamLimits

0xe2eb,	// (0x0007a779) main_mobtv_loading_pane_t1

0xe303,	// (0x0007a791) main_mobtv_loading_pane_t2_ParamLimits

0xe303,	// (0x0007a791) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007c0e1) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007c0e1) main_mobtv_loading_pane_t

0x760a,	// (0x00073a98) wait_bar_pane_cp06_ParamLimits

0x760a,	// (0x00073a98) wait_bar_pane_cp06

0xe327,	// (0x0007a7b5) main_mobtv_programe_curr_pane_t1

0xe335,	// (0x0007a7c3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007c0e6) main_mobtv_programe_curr_pane_t

0xe343,	// (0x0007a7d1) main_mobtv_programe_next_pane_t1

0xe351,	// (0x0007a7df) main_mobtv_programe_next_pane_t2

0xe35f,	// (0x0007a7ed) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007c0eb) main_mobtv_programe_next_pane_t

0x9085,	// (0x00075513) bg_popup_mobtv_noti_window_pane

0xe36d,	// (0x0007a7fb) popup_mobtv_noti_window_g1

0xe375,	// (0x0007a803) popup_mobtv_noti_window_t1

0xe383,	// (0x0007a811) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007c0f2) popup_mobtv_noti_window_t

0xcbab,	// (0x00079039) bg_popup_mobtv_noti_window_pane_g1

0x90fb,	// (0x00075589) sc_clock_pane

0x90fb,	// (0x00075589) main_fs_bigclock_pane

0x6ca6,	// (0x00073134) blid2_tripm_pane_t4_ParamLimits

0x6ca6,	// (0x00073134) blid2_tripm_pane_t4

0x7619,	// (0x00073aa7) sc_clock_pane_g1_ParamLimits

0x7619,	// (0x00073aa7) sc_clock_pane_g1

0x762b,	// (0x00073ab9) sc_clock_pane_t1_ParamLimits

0x762b,	// (0x00073ab9) sc_clock_pane_t1

0x764d,	// (0x00073adb) sc_clock_pane_t2_ParamLimits

0x764d,	// (0x00073adb) sc_clock_pane_t2

0x7665,	// (0x00073af3) sc_clock_pane_t3_ParamLimits

0x7665,	// (0x00073af3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007c0f7) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007c0f7) sc_clock_pane_t

0x855a,	// (0x000749e8) main_fs_bigclock_indicator_pane_ParamLimits

0x855a,	// (0x000749e8) main_fs_bigclock_indicator_pane

0x7705,	// (0x00073b93) main_fs_bigclock_pane_g1_ParamLimits

0x7705,	// (0x00073b93) main_fs_bigclock_pane_g1

0x8566,	// (0x000749f4) main_fs_bigclock_pane_t1_ParamLimits

0x8566,	// (0x000749f4) main_fs_bigclock_pane_t1

0x8578,	// (0x00074a06) main_fs_bigclock_pane_t2_ParamLimits

0x8578,	// (0x00074a06) main_fs_bigclock_pane_t2

0x858a,	// (0x00074a18) main_fs_bigclock_pane_t3_ParamLimits

0x858a,	// (0x00074a18) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007c301) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007c301) main_fs_bigclock_pane_t

0xec8f,	// (0x0007b11d) main_fs_bigclock_indicator_pane_g1

0xe057,	// (0x0007a4e5) ncim_query_content_pane_g2_ParamLimits

0xe057,	// (0x0007a4e5) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007c084) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007c084) ncim_query_content_pane_g

0x767e,	// (0x00073b0c) sc_clock_pane_t4_ParamLimits

0x767e,	// (0x00073b0c) sc_clock_pane_t4

0x90ed,	// (0x0007557b) main_radioblah_pane

0xd56d,	// (0x000799fb) cell_call4_button_pane_t1_copy1_ParamLimits

0xd56d,	// (0x000799fb) cell_call4_button_pane_t1_copy1

0x72ac,	// (0x0007373a) main_ncimui_pane_t1_ParamLimits

0x72ac,	// (0x0007373a) main_ncimui_pane_t1

0x72c6,	// (0x00073754) main_ncimui_pane_t2_ParamLimits

0x72c6,	// (0x00073754) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007c07d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007c07d) main_ncimui_pane_t

0xe4df,	// (0x0007a96d) main_radioblah_anim_pane_ParamLimits

0xe4df,	// (0x0007a96d) main_radioblah_anim_pane

0xe4f0,	// (0x0007a97e) main_radioblah_info_pane_ParamLimits

0xe4f0,	// (0x0007a97e) main_radioblah_info_pane

0xe504,	// (0x0007a992) main_radioblah_pane_t1_ParamLimits

0xe504,	// (0x0007a992) main_radioblah_pane_t1

0xe520,	// (0x0007a9ae) main_radioblah_pane_t2_ParamLimits

0xe520,	// (0x0007a9ae) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007c118) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007c118) main_radioblah_pane_t

0x775d,	// (0x00073beb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x775d,	// (0x00073beb) main_radioblah_rocker_ctrl_pane

0xe568,	// (0x0007a9f6) main_radioblah_info_pane_t1_ParamLimits

0xe568,	// (0x0007a9f6) main_radioblah_info_pane_t1

0x77b5,	// (0x00073c43) main_radioblah_info_pane_t2_ParamLimits

0x77b5,	// (0x00073c43) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007c121) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007c121) main_radioblah_info_pane_t

0xcbab,	// (0x00079039) main_radioblah_rocker_ctrl_pane_g1

0x7865,	// (0x00073cf3) main_radioblah_rocker_ctrl_pane_g2

0x786d,	// (0x00073cfb) main_radioblah_rocker_ctrl_pane_g3

0x7875,	// (0x00073d03) main_radioblah_rocker_ctrl_pane_g4

0x787d,	// (0x00073d0b) main_radioblah_rocker_ctrl_pane_g5

0x7885,	// (0x00073d13) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007c12a) main_radioblah_rocker_ctrl_pane_g

0x7262,	// (0x000736f0) main_cset_text2_pane_t1_copy1_ParamLimits

0x9a8e,	// (0x00075f1c) cam4_image_uncrop_qvga_pane

0x9af5,	// (0x00075f83) vid4_image_uncrop_qcif_pane

0x9c61,	// (0x000760ef) cam6_image_uncrop_qvga_pane_ParamLimits

0x9c61,	// (0x000760ef) cam6_image_uncrop_qvga_pane

0xdd43,	// (0x0007a1d1) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd43,	// (0x0007a1d1) vid6_image_uncrop_qcif_pane

0x9085,	// (0x00075513) bg_popup_preview_window_pane_cp03

0xe009,	// (0x0007a497) list_cset_text2_pane

0xe011,	// (0x0007a49f) main_cset6_text2_pane_g1

0xe019,	// (0x0007a4a7) main_cset6_text2_pane_t1

0xe5a2,	// (0x0007aa30) list_cset_text2_pane_t1_ParamLimits

0xe5a2,	// (0x0007aa30) list_cset_text2_pane_t1

0x90ed,	// (0x0007557b) main_radioblah_pane_ParamLimits

0x75b2,	// (0x00073a40) main_mobtv_info_pane_t3_ParamLimits

0x75b2,	// (0x00073a40) main_mobtv_info_pane_t3

0x774b,	// (0x00073bd9) main_radioblah_pane_g1

0x7785,	// (0x00073c13) main_radioblah_info_pane_g1

0x780a,	// (0x00073c98) main_radioblah_info_pane_t3_ParamLimits

0x780a,	// (0x00073c98) main_radioblah_info_pane_t3

0x21ee,	// (0x0006e67c) highlight_cell_cale_month_pane_ParamLimits

0x21ee,	// (0x0006e67c) highlight_cell_cale_month_pane

0x90fb,	// (0x00075589) main_phob_fisheye_pane

0xcef3,	// (0x00079381) scroll_pane_cp0031_ParamLimits

0xcef3,	// (0x00079381) scroll_pane_cp0031

0xde51,	// (0x0007a2df) wait_bar_pane_cp08_ParamLimits

0x6ff3,	// (0x00073481) cset_list_set_pane_copy1_ParamLimits

0xe5bd,	// (0x0007aa4b) highlight_cell_cale_month_pane_g1

0x788d,	// (0x00073d1b) highlight_cell_cale_month_pane_t1

0xdadd,	// (0x00079f6b) list_gen_pane_cp01

0xd734,	// (0x00079bc2) scroll_pane_01

0xb404,	// (0x00077892) list_single_double_fisheye_pane

0xa445,	// (0x000768d3) list_double_fisheye_pane_g1_ParamLimits

0xa445,	// (0x000768d3) list_double_fisheye_pane_g1

0xa451,	// (0x000768df) list_double_fisheye_pane_g2_ParamLimits

0xa451,	// (0x000768df) list_double_fisheye_pane_g2

0xb40d,	// (0x0007789b) list_double_fisheye_pane_g3_ParamLimits

0xb40d,	// (0x0007789b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007c137) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007c137) list_double_fisheye_pane_g

0xa482,	// (0x00076910) list_double_fisheye_pane_t1_ParamLimits

0xa482,	// (0x00076910) list_double_fisheye_pane_t1

0xa49d,	// (0x0007692b) list_double_fisheye_pane_t2_ParamLimits

0xa49d,	// (0x0007692b) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007c142) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007c142) list_double_fisheye_pane_t

0x90fb,	// (0x00075589) main_call5_pane

0x76a9,	// (0x00073b37) sc_swipe_pane_ParamLimits

0x76a9,	// (0x00073b37) sc_swipe_pane

0x78ae,	// (0x00073d3c) call5_image_pane_ParamLimits

0x78ae,	// (0x00073d3c) call5_image_pane

0x78cb,	// (0x00073d59) call5_swipe_1_pane_ParamLimits

0x78cb,	// (0x00073d59) call5_swipe_1_pane

0x78de,	// (0x00073d6c) call5_swipe_2_pane_ParamLimits

0x78de,	// (0x00073d6c) call5_swipe_2_pane

0x7909,	// (0x00073d97) popup_call5_audio_first_window_ParamLimits

0x7909,	// (0x00073d97) popup_call5_audio_first_window

0xce17,	// (0x000792a5) call5_swipe_1_pane_g1_ParamLimits

0xce17,	// (0x000792a5) call5_swipe_1_pane_g1

0xe5c5,	// (0x0007aa53) call5_swipe_1_pane_g2_ParamLimits

0xe5c5,	// (0x0007aa53) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007c147) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007c147) call5_swipe_1_pane_g

0xe5d1,	// (0x0007aa5f) call5_swipe_1_pane_t1_ParamLimits

0xe5d1,	// (0x0007aa5f) call5_swipe_1_pane_t1

0xce17,	// (0x000792a5) call5_swipe_2_pane_g1_ParamLimits

0xce17,	// (0x000792a5) call5_swipe_2_pane_g1

0xe5e6,	// (0x0007aa74) call5_swipe_2_pane_g2_ParamLimits

0xe5e6,	// (0x0007aa74) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007c14c) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007c14c) call5_swipe_2_pane_g

0xe5f2,	// (0x0007aa80) call5_swipe_2_pane_t1_ParamLimits

0xe5f2,	// (0x0007aa80) call5_swipe_2_pane_t1

0xe607,	// (0x0007aa95) sc_swipe_pane_g1_ParamLimits

0xe607,	// (0x0007aa95) sc_swipe_pane_g1

0xe614,	// (0x0007aaa2) sc_swipe_pane_g2_ParamLimits

0xe614,	// (0x0007aaa2) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007c151) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007c151) sc_swipe_pane_g

0xe620,	// (0x0007aaae) sc_swipe_pane_t1_ParamLimits

0xe620,	// (0x0007aaae) sc_swipe_pane_t1

0x90fb,	// (0x00075589) main_cmail_launcher_pane

0x791a,	// (0x00073da8) aid_size_cell_cmail_l_ParamLimits

0x791a,	// (0x00073da8) aid_size_cell_cmail_l

0x7934,	// (0x00073dc2) grid_cmail_l_pane_ParamLimits

0x7934,	// (0x00073dc2) grid_cmail_l_pane

0x794f,	// (0x00073ddd) cell_cmail_l_pane_ParamLimits

0x794f,	// (0x00073ddd) cell_cmail_l_pane

0x7975,	// (0x00073e03) cell_cmail_l_pane_g1_ParamLimits

0x7975,	// (0x00073e03) cell_cmail_l_pane_g1

0x7986,	// (0x00073e14) cell_cmail_l_pane_t1_ParamLimits

0x7986,	// (0x00073e14) cell_cmail_l_pane_t1

0xe635,	// (0x0007aac3) cell_cmail_l_pane_t2_ParamLimits

0xe635,	// (0x0007aac3) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007c156) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007c156) cell_cmail_l_pane_t

0xa247,	// (0x000766d5) grid_highlight_pane_cp018_ParamLimits

0xa247,	// (0x000766d5) grid_highlight_pane_cp018

0x01a7,	// (0x0006c635) main2_pane_ParamLimits

0x01a7,	// (0x0006c635) main2_pane

0xa059,	// (0x000764e7) popup_sp_fs_action_menu_bg_pane_g1

0xa061,	// (0x000764ef) popup_sp_fs_action_menu_bg_pane_g2

0xa069,	// (0x000764f7) popup_sp_fs_action_menu_bg_pane_g3

0xa071,	// (0x000764ff) popup_sp_fs_action_menu_bg_pane_g4

0xa079,	// (0x00076507) popup_sp_fs_action_menu_bg_pane_g5

0xa081,	// (0x0007650f) popup_sp_fs_action_menu_bg_pane_g6

0xa089,	// (0x00076517) popup_sp_fs_action_menu_bg_pane_g7

0xa091,	// (0x0007651f) popup_sp_fs_action_menu_bg_pane_g8

0xa099,	// (0x00076527) popup_sp_fs_action_menu_bg_pane_g9

0xa0a1,	// (0x0007652f) popup_sp_fs_action_menu_bg_pane_g10

0xa0a1,	// (0x0007652f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0007b614) popup_sp_fs_action_menu_bg_pane_g

0x95d6,	// (0x00075a64) list_medium_line_x2_t3_g3_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t3_g3_g1

0x11cb,	// (0x0006d659) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x2_t3_g3_g2

0x95e2,	// (0x00075a70) list_medium_line_x2_t3_g3_g3_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007b6c6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007b6c6) list_medium_line_x2_t3_g3_g

0x95ee,	// (0x00075a7c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x95ee,	// (0x00075a7c) list_medium_line_x2_t3_g3_t1

0x11d7,	// (0x0006d665) list_medium_line_x2_t3_g3_t2_ParamLimits

0x11d7,	// (0x0006d665) list_medium_line_x2_t3_g3_t2

0xa0c4,	// (0x00076552) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007b6cd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007b6cd) list_medium_line_x2_t3_g3_t

0x95d6,	// (0x00075a64) list_medium_line_x2_t3_g2_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t3_g2_g1

0x95e2,	// (0x00075a70) list_medium_line_x2_t3_g2_g2_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007b6d4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007b6d4) list_medium_line_x2_t3_g2_g

0xa0d9,	// (0x00076567) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa0d9,	// (0x00076567) list_medium_line_x2_t3_g2_t1

0xa0ef,	// (0x0007657d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa0ef,	// (0x0007657d) list_medium_line_x2_t3_g2_t2

0xa101,	// (0x0007658f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa101,	// (0x0007658f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007b6d9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007b6d9) list_medium_line_x2_t3_g2_t

0x95d6,	// (0x00075a64) list_medium_line_x2_t4_g4_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t4_g4_g1

0x11eb,	// (0x0006d679) list_medium_line_x2_t4_g4_g2_ParamLimits

0x11eb,	// (0x0006d679) list_medium_line_x2_t4_g4_g2

0x11cb,	// (0x0006d659) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x2_t4_g4_g3

0x11f7,	// (0x0006d685) list_medium_line_x2_t4_g4_g4_ParamLimits

0x11f7,	// (0x0006d685) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007b6e0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007b6e0) list_medium_line_x2_t4_g4_g

0x1203,	// (0x0006d691) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1203,	// (0x0006d691) list_medium_line_x2_t4_g4_t1

0x121a,	// (0x0006d6a8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x121a,	// (0x0006d6a8) list_medium_line_x2_t4_g4_t2

0x122f,	// (0x0006d6bd) list_medium_line_x2_t4_g4_t3_ParamLimits

0x122f,	// (0x0006d6bd) list_medium_line_x2_t4_g4_t3

0xa11f,	// (0x000765ad) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa11f,	// (0x000765ad) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007b6e9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007b6e9) list_medium_line_x2_t4_g4_t

0x95d6,	// (0x00075a64) list_medium_line_x2_t2_g4_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t2_g4_g1

0x11eb,	// (0x0006d679) list_medium_line_x2_t2_g4_g2_ParamLimits

0x11eb,	// (0x0006d679) list_medium_line_x2_t2_g4_g2

0x11cb,	// (0x0006d659) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x2_t2_g4_g3

0x95e2,	// (0x00075a70) list_medium_line_x2_t2_g4_g4_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007b750) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007b750) list_medium_line_x2_t2_g4_g

0xa131,	// (0x000765bf) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa131,	// (0x000765bf) list_medium_line_x2_t2_g4_t1

0xa0c4,	// (0x00076552) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007b759) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007b759) list_medium_line_x2_t2_g4_t

0x95d6,	// (0x00075a64) list_medium_line_x2_t2_g3_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t2_g3_g1

0x11cb,	// (0x0006d659) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x2_t2_g3_g2

0x95e2,	// (0x00075a70) list_medium_line_x2_t2_g3_g3_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007b6c6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007b6c6) list_medium_line_x2_t2_g3_g

0xa146,	// (0x000765d4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa146,	// (0x000765d4) list_medium_line_x2_t2_g3_t1

0xa0c4,	// (0x00076552) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007b75e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007b75e) list_medium_line_x2_t2_g3_t

0x233e,	// (0x0006e7cc) main_sp_fs_list_pane_ParamLimits

0x233e,	// (0x0006e7cc) main_sp_fs_list_pane

0xcbe6,	// (0x00079074) sp_fs_scroll_pane_ParamLimits

0xcbe6,	// (0x00079074) sp_fs_scroll_pane

0x234a,	// (0x0006e7d8) list_medium_line_x2_t3_t1

0x235a,	// (0x0006e7e8) list_medium_line_x2_t3_t2

0xa15b,	// (0x000765e9) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007b7a9) list_medium_line_x2_t3_t

0x2368,	// (0x0006e7f6) list_medium_line_x3_t4_t1

0x2378,	// (0x0006e806) list_medium_line_x3_t4_t2

0xa169,	// (0x000765f7) list_medium_line_x3_t4_t3

0xa15b,	// (0x000765e9) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007b7b0) list_medium_line_x3_t4_t

0x2386,	// (0x0006e814) list_medium_line_x4_t5_t1

0x2396,	// (0x0006e824) list_medium_line_x4_t5_t2

0xa169,	// (0x000765f7) list_medium_line_x4_t5_t3

0x23a4,	// (0x0006e832) list_medium_line_x4_t5_t4

0xa15b,	// (0x000765e9) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007b7b9) list_medium_line_x4_t5_t

0x95d6,	// (0x00075a64) list_medium_line_t4_g4_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_t4_g4_g1

0xa177,	// (0x00076605) list_medium_line_t4_g4_g2_ParamLimits

0xa177,	// (0x00076605) list_medium_line_t4_g4_g2

0x23b2,	// (0x0006e840) list_medium_line_t4_g4_g3_ParamLimits

0x23b2,	// (0x0006e840) list_medium_line_t4_g4_g3

0x95e2,	// (0x00075a70) list_medium_line_t4_g4_g4_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007b7c4) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007b7c4) list_medium_line_t4_g4_g

0xa183,	// (0x00076611) list_medium_line_t4_g4_t1_ParamLimits

0xa183,	// (0x00076611) list_medium_line_t4_g4_t1

0xa198,	// (0x00076626) list_medium_line_t4_g4_t2_ParamLimits

0xa198,	// (0x00076626) list_medium_line_t4_g4_t2

0x23be,	// (0x0006e84c) list_medium_line_t4_g4_t3_ParamLimits

0x23be,	// (0x0006e84c) list_medium_line_t4_g4_t3

0xa0c4,	// (0x00076552) list_medium_line_t4_g4_t4_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007b7cd) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007b7cd) list_medium_line_t4_g4_t

0x2473,	// (0x0006e901) chi_dic_find_pane_g1

0x348d,	// (0x0006f91b) main_tport_pane

0xa307,	// (0x00076795) list_medium_line_plain_t1

0xa315,	// (0x000767a3) list_medium_line_t2_g2_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_t2_g2_g1

0xa321,	// (0x000767af) list_medium_line_t2_g2_g2_ParamLimits

0xa321,	// (0x000767af) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007be8e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007be8e) list_medium_line_t2_g2_g

0x63c7,	// (0x00072855) list_medium_line_t2_g2_t1_ParamLimits

0x63c7,	// (0x00072855) list_medium_line_t2_g2_t1

0x63e1,	// (0x0007286f) list_medium_line_t2_g2_t2_ParamLimits

0x63e1,	// (0x0007286f) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007be93) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007be93) list_medium_line_t2_g2_t

0xa3c9,	// (0x00076857) aid_sp_fs_list_icon_a_sm

0xa3d1,	// (0x0007685f) aid_sp_fs_list_icon_d

0xa3d9,	// (0x00076867) aid_sp_fs_text_primary

0xa3e2,	// (0x00076870) aid_sp_fs_text_secondary

0xdae6,	// (0x00079f74) list_medium_line

0xdae6,	// (0x00079f74) list_medium_line_g2

0xdae6,	// (0x00079f74) list_medium_line_g3

0xdae6,	// (0x00079f74) list_medium_line_plain

0xdae6,	// (0x00079f74) list_medium_line_plain_t2

0xdae6,	// (0x00079f74) list_medium_line_plain_t3

0xdae6,	// (0x00079f74) list_medium_line_right_icon

0xdae6,	// (0x00079f74) list_medium_line_right_iconx2

0xdae6,	// (0x00079f74) list_medium_line_t2

0xdae6,	// (0x00079f74) list_medium_line_t2_g2

0xdae6,	// (0x00079f74) list_medium_line_t2_g3

0xdae6,	// (0x00079f74) list_medium_line_t2_right_icon

0xdae6,	// (0x00079f74) list_medium_line_t2_right_iconx2

0xdae6,	// (0x00079f74) list_medium_line_t3

0xdae6,	// (0x00079f74) list_medium_line_t3_g2

0xdae6,	// (0x00079f74) list_medium_line_t3_g3

0xdae6,	// (0x00079f74) list_medium_line_t3_right_iconx2

0x6a5c,	// (0x00072eea) list_medium_line_t4_g4

0x6a65,	// (0x00072ef3) list_medium_line_x2

0x6a65,	// (0x00072ef3) list_medium_line_x2_t2_g2

0x6a65,	// (0x00072ef3) list_medium_line_x2_t2_g3

0x6a65,	// (0x00072ef3) list_medium_line_x2_t2_g4

0x6a65,	// (0x00072ef3) list_medium_line_x2_t3

0x6a65,	// (0x00072ef3) list_medium_line_x2_t3_g2

0x6a65,	// (0x00072ef3) list_medium_line_x2_t3_g3

0x6a65,	// (0x00072ef3) list_medium_line_x2_t3_g4

0x6a65,	// (0x00072ef3) list_medium_line_x2_t4_g2

0x6a65,	// (0x00072ef3) list_medium_line_x2_t4_g4

0x6a6e,	// (0x00072efc) list_medium_line_x3

0x6a6e,	// (0x00072efc) list_medium_line_x3_t4

0x6a6e,	// (0x00072efc) list_medium_line_x3_t4_g4

0x6a5c,	// (0x00072eea) list_medium_line_x4_t4

0x6a5c,	// (0x00072eea) list_medium_line_x4_t4_g7

0x6a5c,	// (0x00072eea) list_medium_line_x4_t5

0x6a77,	// (0x00072f05) list_single_fs_dyc_pane_ParamLimits

0x6a77,	// (0x00072f05) list_single_fs_dyc_pane

0x95d6,	// (0x00075a64) list_medium_line_x4_t4_g7_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x4_t4_g7_g1

0xa3eb,	// (0x00076879) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa3eb,	// (0x00076879) list_medium_line_x4_t4_g7_g2

0x71ed,	// (0x0007367b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x71ed,	// (0x0007367b) list_medium_line_x4_t4_g7_g3

0x71fc,	// (0x0007368a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x71fc,	// (0x0007368a) list_medium_line_x4_t4_g7_g4

0x7208,	// (0x00073696) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7208,	// (0x00073696) list_medium_line_x4_t4_g7_g5

0x7217,	// (0x000736a5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7217,	// (0x000736a5) list_medium_line_x4_t4_g7_g6

0xa3f7,	// (0x00076885) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa3f7,	// (0x00076885) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007c05e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007c05e) list_medium_line_x4_t4_g7_g

0xa403,	// (0x00076891) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa403,	// (0x00076891) list_medium_line_x4_t4_g7_t1

0x7226,	// (0x000736b4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7226,	// (0x000736b4) list_medium_line_x4_t4_g7_t2

0x723b,	// (0x000736c9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x723b,	// (0x000736c9) list_medium_line_x4_t4_g7_t3

0x7250,	// (0x000736de) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7250,	// (0x000736de) list_medium_line_x4_t4_g7_t4

0xa418,	// (0x000768a6) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa418,	// (0x000768a6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007c06d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007c06d) list_medium_line_x4_t4_g7_t

0xa42a,	// (0x000768b8) list_single_dyc_row_pane_ParamLimits

0xa42a,	// (0x000768b8) list_single_dyc_row_pane

0x789b,	// (0x00073d29) call5_gesture_pane_ParamLimits

0x789b,	// (0x00073d29) call5_gesture_pane

0x78f1,	// (0x00073d7f) call5_windows_pane_ParamLimits

0x78f1,	// (0x00073d7f) call5_windows_pane

0x799c,	// (0x00073e2a) call5_swipe_1_pane_cp_ParamLimits

0x799c,	// (0x00073e2a) call5_swipe_1_pane_cp

0x79a8,	// (0x00073e36) call5_swipe_2_pane_cp_ParamLimits

0x79a8,	// (0x00073e36) call5_swipe_2_pane_cp

0xb373,	// (0x00077801) call5_image_pane_cp

0x79b4,	// (0x00073e42) popup_call5_audio_first_window_cp_ParamLimits

0x79b4,	// (0x00073e42) popup_call5_audio_first_window_cp

0xe607,	// (0x0007aa95) call5_swipe_1_pane_g1_cp_ParamLimits

0xe607,	// (0x0007aa95) call5_swipe_1_pane_g1_cp

0xe647,	// (0x0007aad5) call5_swipe_1_pane_g2_cp

0xe620,	// (0x0007aaae) call5_swipe_1_pane_t1_cp_ParamLimits

0xe620,	// (0x0007aaae) call5_swipe_1_pane_t1_cp

0xe607,	// (0x0007aa95) call5_swipe_2_pane_g1_cp_ParamLimits

0xe607,	// (0x0007aa95) call5_swipe_2_pane_g1_cp

0xe64f,	// (0x0007aadd) call5_swipe_2_pane_g2_cp

0xe657,	// (0x0007aae5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe657,	// (0x0007aae5) call5_swipe_2_pane_t1_cp

0xa247,	// (0x000766d5) main_sp_fs_email_pane

0xe66c,	// (0x0007aafa) main_sp_fs_listscroll_pane_te

0x79c2,	// (0x00073e50) popup_sp_fs_action_menu_pane_ParamLimits

0x79c2,	// (0x00073e50) popup_sp_fs_action_menu_pane

0xcbab,	// (0x00079039) bg_sp_fs_ctrlbar_pane_g1

0xe675,	// (0x0007ab03) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe67e,	// (0x0007ab0c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe687,	// (0x0007ab15) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbab,	// (0x00079039) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007c15b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc98e,	// (0x00078e1c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc98e,	// (0x00078e1c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe690,	// (0x0007ab1e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe690,	// (0x0007ab1e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe69c,	// (0x0007ab2a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe69c,	// (0x0007ab2a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007c164) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007c164) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6a8,	// (0x0007ab36) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6a8,	// (0x0007ab36) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa4bf,	// (0x0007694d) list_medium_line_t2_right_icon_g1

0x7a04,	// (0x00073e92) list_medium_line_t2_right_icon_t1

0x7a14,	// (0x00073ea2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007c169) list_medium_line_t2_right_icon_t

0xc7a1,	// (0x00078c2f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a1,	// (0x00078c2f) bg_sp_fs_ctrlbar_pane

0x7a6e,	// (0x00073efc) main_sp_fs_ctrlbar_button_pane_cp01

0x7a78,	// (0x00073f06) main_sp_fs_ctrlbar_ddmenu_pane

0xe6fa,	// (0x0007ab88) main_sp_fs_ctrlbar_pane_g1

0xe706,	// (0x0007ab94) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007c16e) main_sp_fs_ctrlbar_pane_g

0xe712,	// (0x0007aba0) main_sp_fs_ctrlbar_pane_t1

0x7a82,	// (0x00073f10) main_sp_fs_ctrlbar_pane

0x7aa6,	// (0x00073f34) main_sp_fs_listscroll_pane_te_cp01

0x7ac6,	// (0x00073f54) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ac6,	// (0x00073f54) popup_sp_fs_action_menu_pane_cp01

0xa247,	// (0x000766d5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa247,	// (0x000766d5) bg_sp_fs_highlight_list_pane_cp01

0xa4c7,	// (0x00076955) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa4c7,	// (0x00076955) sp_fs_action_menu_list_gene_pane_g1

0xe742,	// (0x0007abd0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe742,	// (0x0007abd0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007c178) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007c178) sp_fs_action_menu_list_gene_pane_g

0xa4d6,	// (0x00076964) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4d6,	// (0x00076964) sp_fs_action_menu_list_gene_pane_t1

0xa4ee,	// (0x0007697c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4ee,	// (0x0007697c) sp_fs_action_menu_list_gene_pane

0xe74f,	// (0x0007abdd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe74f,	// (0x0007abdd) popup_sp_fs_action_menu_bg_pane

0xa50b,	// (0x00076999) sp_fs_action_menu_list_pane_ParamLimits

0xa50b,	// (0x00076999) sp_fs_action_menu_list_pane

0x7af6,	// (0x00073f84) sp_fs_scroll_pane_cp01_ParamLimits

0x7af6,	// (0x00073f84) sp_fs_scroll_pane_cp01

0x7b1c,	// (0x00073faa) list_medium_line_plain_t2_t1

0x7b2c,	// (0x00073fba) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007c17d) list_medium_line_plain_t2_t

0x7b3c,	// (0x00073fca) list_medium_line_plain_t3_t1

0x7b4c,	// (0x00073fda) list_medium_line_plain_t3_t2

0x7b5a,	// (0x00073fe8) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007c182) list_medium_line_plain_t3_t

0x95d6,	// (0x00075a64) list_medium_line_x2_t2_g2_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t2_g2_g1

0x95e2,	// (0x00075a70) list_medium_line_x2_t2_g2_g2_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007b6d4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007b6d4) list_medium_line_x2_t2_g2_g

0xa183,	// (0x00076611) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa183,	// (0x00076611) list_medium_line_x2_t2_g2_t1

0xa0c4,	// (0x00076552) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007c189) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007c189) list_medium_line_x2_t2_g2_t

0x95d6,	// (0x00075a64) list_medium_line_x2_t4_g2_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t4_g2_g1

0x7b68,	// (0x00073ff6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7b68,	// (0x00073ff6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007c18e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007c18e) list_medium_line_x2_t4_g2_g

0x7b79,	// (0x00074007) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7b79,	// (0x00074007) list_medium_line_x2_t4_g2_t1

0x7b93,	// (0x00074021) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7b93,	// (0x00074021) list_medium_line_x2_t4_g2_t2

0x7ba8,	// (0x00074036) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ba8,	// (0x00074036) list_medium_line_x2_t4_g2_t3

0xa0c4,	// (0x00076552) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007c193) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007c193) list_medium_line_x2_t4_g2_t

0xa529,	// (0x000769b7) list_medium_line_t3_right_iconx2_g1

0xa4bf,	// (0x0007694d) list_medium_line_t3_right_iconx2_g2

0x7bbd,	// (0x0007404b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007c19c) list_medium_line_t3_right_iconx2_g

0x7bc7,	// (0x00074055) list_medium_line_t3_right_iconx2_t1

0x7bd7,	// (0x00074065) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007c1a3) list_medium_line_t3_right_iconx2_t

0x95d6,	// (0x00075a64) list_medium_line_x3_t4_g4_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x3_t4_g4_g1

0x11cb,	// (0x0006d659) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x3_t4_g4_g2

0xa177,	// (0x00076605) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa177,	// (0x00076605) list_medium_line_x3_t4_g4_g3

0x7be5,	// (0x00074073) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7be5,	// (0x00074073) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007c1a8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007c1a8) list_medium_line_x3_t4_g4_g

0x7bf1,	// (0x0007407f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7bf1,	// (0x0007407f) list_medium_line_x3_t4_g4_t1

0x7c08,	// (0x00074096) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7c08,	// (0x00074096) list_medium_line_x3_t4_g4_t2

0xa531,	// (0x000769bf) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa531,	// (0x000769bf) list_medium_line_x3_t4_g4_t3

0x7c23,	// (0x000740b1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7c23,	// (0x000740b1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007c1b1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007c1b1) list_medium_line_x3_t4_g4_t

0x7c3f,	// (0x000740cd) list_single_dyc_row_text_pane_t1_ParamLimits

0x7c3f,	// (0x000740cd) list_single_dyc_row_text_pane_t1

0x7c88,	// (0x00074116) list_single_dyc_row_text_pane_t2_ParamLimits

0x7c88,	// (0x00074116) list_single_dyc_row_text_pane_t2

0xa546,	// (0x000769d4) list_single_dyc_row_text_pane_t3_ParamLimits

0xa546,	// (0x000769d4) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007c1ba) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007c1ba) list_single_dyc_row_text_pane_t

0xa56a,	// (0x000769f8) list_single_dyc_row_pane_g1_ParamLimits

0xa56a,	// (0x000769f8) list_single_dyc_row_pane_g1

0xa576,	// (0x00076a04) list_single_dyc_row_pane_g2_ParamLimits

0xa576,	// (0x00076a04) list_single_dyc_row_pane_g2

0xa582,	// (0x00076a10) list_single_dyc_row_pane_g3_ParamLimits

0xa582,	// (0x00076a10) list_single_dyc_row_pane_g3

0xa58e,	// (0x00076a1c) list_single_dyc_row_pane_g4_ParamLimits

0xa58e,	// (0x00076a1c) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007c1c7) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007c1c7) list_single_dyc_row_pane_g

0xa59a,	// (0x00076a28) list_single_dyc_row_text_pane_ParamLimits

0xa59a,	// (0x00076a28) list_single_dyc_row_text_pane

0x9085,	// (0x00075513) bg_sp_fs_scroll_pane

0xe75d,	// (0x0007abeb) thumb_sp_fs_scroll_pane

0xa315,	// (0x000767a3) list_medium_line_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_g1

0xa5b9,	// (0x00076a47) list_medium_line_t1_ParamLimits

0xa5b9,	// (0x00076a47) list_medium_line_t1

0x95d6,	// (0x00075a64) list_medium_line_x2_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_g1

0x11cb,	// (0x0006d659) list_medium_line_x2_g2_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007c1d0) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007c1d0) list_medium_line_x2_g

0xa5ce,	// (0x00076a5c) list_medium_line_x2_t1_ParamLimits

0xa5ce,	// (0x00076a5c) list_medium_line_x2_t1

0x95d6,	// (0x00075a64) list_medium_line_x3_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x3_g1

0x11cb,	// (0x0006d659) list_medium_line_x3_g2_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007c1d0) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007c1d0) list_medium_line_x3_g

0xa5ce,	// (0x00076a5c) list_medium_line_x3_t1_ParamLimits

0xa5ce,	// (0x00076a5c) list_medium_line_x3_t1

0xe766,	// (0x0007abf4) thumb_sp_fs_scroll_pane_g1

0xe76f,	// (0x0007abfd) thumb_sp_fs_scroll_pane_g2

0xe778,	// (0x0007ac06) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007c1d5) thumb_sp_fs_scroll_pane_g

0xe766,	// (0x0007abf4) bg_sp_fs_scroll_pane_g1

0xe76f,	// (0x0007abfd) bg_sp_fs_scroll_pane_g2

0xe778,	// (0x0007ac06) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007c1d5) bg_sp_fs_scroll_pane_g

0x95d6,	// (0x00075a64) list_medium_line_x2_t3_g4_g1_ParamLimits

0x95d6,	// (0x00075a64) list_medium_line_x2_t3_g4_g1

0x11eb,	// (0x0006d679) list_medium_line_x2_t3_g4_g2_ParamLimits

0x11eb,	// (0x0006d679) list_medium_line_x2_t3_g4_g2

0x11cb,	// (0x0006d659) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11cb,	// (0x0006d659) list_medium_line_x2_t3_g4_g3

0x95e2,	// (0x00075a70) list_medium_line_x2_t3_g4_g4_ParamLimits

0x95e2,	// (0x00075a70) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007b750) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007b750) list_medium_line_x2_t3_g4_g

0x7dbd,	// (0x0007424b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7dbd,	// (0x0007424b) list_medium_line_x2_t3_g4_t1

0x7dd7,	// (0x00074265) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7dd7,	// (0x00074265) list_medium_line_x2_t3_g4_t2

0xa0c4,	// (0x00076552) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa0c4,	// (0x00076552) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007c1dc) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007c1dc) list_medium_line_x2_t3_g4_t

0xa315,	// (0x000767a3) list_medium_line_g2_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_g2_g1

0xa321,	// (0x000767af) list_medium_line_g2_g2_ParamLimits

0xa321,	// (0x000767af) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007be8e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007be8e) list_medium_line_g2_g

0xa5e4,	// (0x00076a72) list_medium_line_g2_t1_ParamLimits

0xa5e4,	// (0x00076a72) list_medium_line_g2_t1

0xa315,	// (0x000767a3) list_medium_line_t3_g2_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_t3_g2_g1

0xa321,	// (0x000767af) list_medium_line_t3_g2_g2_ParamLimits

0xa321,	// (0x000767af) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007be8e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007be8e) list_medium_line_t3_g2_g

0x7df0,	// (0x0007427e) list_medium_line_t3_g2_t1_ParamLimits

0x7df0,	// (0x0007427e) list_medium_line_t3_g2_t1

0x7e0a,	// (0x00074298) list_medium_line_t3_g2_t2_ParamLimits

0x7e0a,	// (0x00074298) list_medium_line_t3_g2_t2

0x7e1f,	// (0x000742ad) list_medium_line_t3_g2_t3_ParamLimits

0x7e1f,	// (0x000742ad) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007c1e3) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007c1e3) list_medium_line_t3_g2_t

0xa4bf,	// (0x0007694d) list_medium_line_right_icon_g1

0xa5f9,	// (0x00076a87) list_medium_line_right_icon_t1

0xa315,	// (0x000767a3) list_medium_line_t2_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_t2_g1

0x7e39,	// (0x000742c7) list_medium_line_t2_t1_ParamLimits

0x7e39,	// (0x000742c7) list_medium_line_t2_t1

0x7e53,	// (0x000742e1) list_medium_line_t2_t2_ParamLimits

0x7e53,	// (0x000742e1) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007c1ea) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007c1ea) list_medium_line_t2_t

0xa315,	// (0x000767a3) list_medium_line_t3_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_t3_g1

0x7e6c,	// (0x000742fa) list_medium_line_t3_t1_ParamLimits

0x7e6c,	// (0x000742fa) list_medium_line_t3_t1

0x7e83,	// (0x00074311) list_medium_line_t3_t2_ParamLimits

0x7e83,	// (0x00074311) list_medium_line_t3_t2

0x7e98,	// (0x00074326) list_medium_line_t3_t3_ParamLimits

0x7e98,	// (0x00074326) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007c1ef) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007c1ef) list_medium_line_t3_t

0xa315,	// (0x000767a3) list_medium_line_g3_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_g3_g1

0xa607,	// (0x00076a95) list_medium_line_g3_g2_ParamLimits

0xa607,	// (0x00076a95) list_medium_line_g3_g2

0xa321,	// (0x000767af) list_medium_line_g3_g3_ParamLimits

0xa321,	// (0x000767af) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007c1f6) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007c1f6) list_medium_line_g3_g

0xa613,	// (0x00076aa1) list_medium_line_g3_t1_ParamLimits

0xa613,	// (0x00076aa1) list_medium_line_g3_t1

0xa315,	// (0x000767a3) list_medium_line_t2_g3_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_t2_g3_g1

0xa607,	// (0x00076a95) list_medium_line_t2_g3_g2_ParamLimits

0xa607,	// (0x00076a95) list_medium_line_t2_g3_g2

0xa321,	// (0x000767af) list_medium_line_t2_g3_g3_ParamLimits

0xa321,	// (0x000767af) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007c1f6) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007c1f6) list_medium_line_t2_g3_g

0x7eaa,	// (0x00074338) list_medium_line_t2_g3_t1_ParamLimits

0x7eaa,	// (0x00074338) list_medium_line_t2_g3_t1

0x7ec4,	// (0x00074352) list_medium_line_t2_g3_t2_ParamLimits

0x7ec4,	// (0x00074352) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007c1fd) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007c1fd) list_medium_line_t2_g3_t

0xa315,	// (0x000767a3) list_medium_line_t3_g3_g1_ParamLimits

0xa315,	// (0x000767a3) list_medium_line_t3_g3_g1

0xa607,	// (0x00076a95) list_medium_line_t3_g3_g2_ParamLimits

0xa607,	// (0x00076a95) list_medium_line_t3_g3_g2

0xa321,	// (0x000767af) list_medium_line_t3_g3_g3_ParamLimits

0xa321,	// (0x000767af) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007c1f6) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007c1f6) list_medium_line_t3_g3_g

0x7edf,	// (0x0007436d) list_medium_line_t3_g3_t1_ParamLimits

0x7edf,	// (0x0007436d) list_medium_line_t3_g3_t1

0x7ef8,	// (0x00074386) list_medium_line_t3_g3_t2_ParamLimits

0x7ef8,	// (0x00074386) list_medium_line_t3_g3_t2

0x7f0e,	// (0x0007439c) list_medium_line_t3_g3_t3_ParamLimits

0x7f0e,	// (0x0007439c) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007c202) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007c202) list_medium_line_t3_g3_t

0xa529,	// (0x000769b7) list_medium_line_right_iconx2_g1

0xa4bf,	// (0x0007694d) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007c209) list_medium_line_right_iconx2_g

0xa628,	// (0x00076ab6) list_medium_line_right_iconx2_t1

0xa529,	// (0x000769b7) list_medium_line_t2_right_iconx2_g1

0xa4bf,	// (0x0007694d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007c209) list_medium_line_t2_right_iconx2_g

0x7f28,	// (0x000743b6) list_medium_line_t2_right_iconx2_t1

0x7f38,	// (0x000743c6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007c20e) list_medium_line_t2_right_iconx2_t

0xa636,	// (0x00076ac4) list_medium_line_x4_t4_t1

0x7f4a,	// (0x000743d8) list_medium_line_x4_t4_t2

0x7f5a,	// (0x000743e8) list_medium_line_x4_t4_t3

0x7f6a,	// (0x000743f8) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007c213) list_medium_line_x4_t4_t

0x7fbd,	// (0x0007444b) tport_appsw_pane_ParamLimits

0x7fbd,	// (0x0007444b) tport_appsw_pane

0x7fd5,	// (0x00074463) tport_contact_pane_ParamLimits

0x7fd5,	// (0x00074463) tport_contact_pane

0x7fed,	// (0x0007447b) tport_listscroll_pane_ParamLimits

0x7fed,	// (0x0007447b) tport_listscroll_pane

0x8007,	// (0x00074495) cell_tport_appsw_pane_ParamLimits

0x8007,	// (0x00074495) cell_tport_appsw_pane

0xd5fa,	// (0x00079a88) tport_appsw_pane_g1_ParamLimits

0xd5fa,	// (0x00079a88) tport_appsw_pane_g1

0xe781,	// (0x0007ac0f) tport_contact_pane_g1

0xe0dd,	// (0x0007a56b) tport_contact_pane_t1

0xe78a,	// (0x0007ac18) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007c21c) tport_contact_pane_t

0xe798,	// (0x0007ac26) list_tport_pane

0xe7a1,	// (0x0007ac2f) scroll_pane_cp_030

0x804f,	// (0x000744dd) cell_tport_appsw_pane_g1

0x805f,	// (0x000744ed) cell_tport_appsw_pane_t1

0x806d,	// (0x000744fb) grid_highlight_pane_cp019

0x8075,	// (0x00074503) list_tport_double_graphic_pane_ParamLimits

0x8075,	// (0x00074503) list_tport_double_graphic_pane

0xa247,	// (0x000766d5) list_highlight_pane_cp023_ParamLimits

0xa247,	// (0x000766d5) list_highlight_pane_cp023

0x8082,	// (0x00074510) list_tport_double_graphic_pane_g1_ParamLimits

0x8082,	// (0x00074510) list_tport_double_graphic_pane_g1

0x808f,	// (0x0007451d) list_tport_double_graphic_pane_t1_ParamLimits

0x808f,	// (0x0007451d) list_tport_double_graphic_pane_t1

0x80a4,	// (0x00074532) list_tport_double_graphic_pane_t2_ParamLimits

0x80a4,	// (0x00074532) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007c228) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007c228) list_tport_double_graphic_pane_t

0x9085,	// (0x00075513) main_cale_note_pane

0x5b6c,	// (0x00071ffa) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5b6c,	// (0x00071ffa) cell_vitu2_function_top_wide_pane_cp01

0x75c6,	// (0x00073a54) wait_bar_pane_cp05_ParamLimits

0xa247,	// (0x000766d5) listscroll_cmail_pane

0xe7aa,	// (0x0007ac38) list_cmail_pane

0x80b6,	// (0x00074544) list_cmail_body_pane

0x80cb,	// (0x00074559) list_single_cmail_header_caption_pane

0x80e4,	// (0x00074572) list_single_cmail_header_detail_pane_ParamLimits

0x80e4,	// (0x00074572) list_single_cmail_header_detail_pane

0xe7ba,	// (0x0007ac48) list_single_cmail_header_caption_pane_t1

0x810d,	// (0x0007459b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x810d,	// (0x0007459b) list_single_cmail_header_detail_pane_g1

0xa644,	// (0x00076ad2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa644,	// (0x00076ad2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007c22d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007c22d) list_single_cmail_header_detail_pane_g

0x8125,	// (0x000745b3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8125,	// (0x000745b3) list_single_cmail_header_detail_pane_t1

0x8163,	// (0x000745f1) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8163,	// (0x000745f1) list_single_cmail_header_editor_pane_bg

0xe7de,	// (0x0007ac6c) list_cmail_body_pane_g1

0xe7e7,	// (0x0007ac75) list_cmail_body_pane_t1

0xd61a,	// (0x00079aa8) list_single_cmail_header_editor_pane_bg_g1

0xab50,	// (0x00076fde) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62a,	// (0x00079ab8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd622,	// (0x00079ab0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd862,	// (0x00079cf0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64a,	// (0x00079ad8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63a,	// (0x00079ac8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd642,	// (0x00079ad0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab30,	// (0x00076fbe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x817c,	// (0x0007460a) calenote_gesture_pane_ParamLimits

0x817c,	// (0x0007460a) calenote_gesture_pane

0x819c,	// (0x0007462a) calenote_window_pane_ParamLimits

0x819c,	// (0x0007462a) calenote_window_pane

0xe7f5,	// (0x0007ac83) popup_note_window_cp01

0x81b8,	// (0x00074646) calenote_swipe_1_pane_ParamLimits

0x81b8,	// (0x00074646) calenote_swipe_1_pane

0x79a8,	// (0x00073e36) calenote_swipe_2_pane_ParamLimits

0x79a8,	// (0x00073e36) calenote_swipe_2_pane

0xe607,	// (0x0007aa95) calenote_swipe_1_pane_g1_ParamLimits

0xe607,	// (0x0007aa95) calenote_swipe_1_pane_g1

0xe614,	// (0x0007aaa2) calenote_swipe_1_pane_g2_ParamLimits

0xe614,	// (0x0007aaa2) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007c151) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007c151) calenote_swipe_1_pane_g

0xe807,	// (0x0007ac95) calenote_swipe_1_pane_t1_ParamLimits

0xe807,	// (0x0007ac95) calenote_swipe_1_pane_t1

0xe607,	// (0x0007aa95) calenote_swipe_2_pane_g1_ParamLimits

0xe607,	// (0x0007aa95) calenote_swipe_2_pane_g1

0xe826,	// (0x0007acb4) calenote_swipe_2_pane_g2_ParamLimits

0xe826,	// (0x0007acb4) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007c239) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007c239) calenote_swipe_2_pane_g

0xe832,	// (0x0007acc0) calenote_swipe_2_pane_t1_ParamLimits

0xe832,	// (0x0007acc0) calenote_swipe_2_pane_t1

0x9085,	// (0x00075513) main_mup_navstr_pane

0x4824,	// (0x00070cb2) main_mup3_pane_t7_ParamLimits

0x4824,	// (0x00070cb2) main_mup3_pane_t7

0x98ac,	// (0x00075d3a) main_mp4_pane_g6_ParamLimits

0x98ac,	// (0x00075d3a) main_mp4_pane_g6

0x9a50,	// (0x00075ede) main_image3_pane_t4_ParamLimits

0x9a50,	// (0x00075ede) main_image3_pane_t4

0x81cd,	// (0x0007465b) popup_navstr_preview_pane_ParamLimits

0x81cd,	// (0x0007465b) popup_navstr_preview_pane

0x81e1,	// (0x0007466f) scroll_navstr_pane_ParamLimits

0x81e1,	// (0x0007466f) scroll_navstr_pane

0x9085,	// (0x00075513) bg_popup_preview_window_pane_cp04

0xe859,	// (0x0007ace7) popup_navstr_preview_pane_t1

0x81f5,	// (0x00074683) scroll_navstr_pane_g1_ParamLimits

0x81f5,	// (0x00074683) scroll_navstr_pane_g1

0x8209,	// (0x00074697) scroll_navstr_pane_t1_ParamLimits

0x8209,	// (0x00074697) scroll_navstr_pane_t1

0xe7fe,	// (0x0007ac8c) bg_button_pane_cp014

0xe7fe,	// (0x0007ac8c) bg_button_pane_cp030

0xa465,	// (0x000768f3) list_double_fisheye_pane_g4_ParamLimits

0xa465,	// (0x000768f3) list_double_fisheye_pane_g4

0xa471,	// (0x000768ff) list_double_fisheye_pane_g5_ParamLimits

0xa471,	// (0x000768ff) list_double_fisheye_pane_g5

0xcbe6,	// (0x00079074) sp_fs_scroll_pane_cp03

0xe6fa,	// (0x0007ab88) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe706,	// (0x0007ab94) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007c16e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe712,	// (0x0007aba0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b2,	// (0x0007ac40) sp_fs_scroll_pane_cp02

0xa846,	// (0x00076cd4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa846,	// (0x00076cd4) popup_sp_fs_calendar_preview_list_single_pane

0x9085,	// (0x00075513) main_cam6_pano_pane

0x90ed,	// (0x0007557b) main_mup3_pane_ParamLimits

0x9085,	// (0x00075513) main_phacti_pane

0x7499,	// (0x00073927) bg_button_pane_cp11

0x74b3,	// (0x00073941) main_mobtv_info_pane_g2_ParamLimits

0x74b3,	// (0x00073941) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007c0ce) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007c0ce) main_mobtv_info_pane_g

0x7690,	// (0x00073b1e) sc_clock_pane_t5_ParamLimits

0x7690,	// (0x00073b1e) sc_clock_pane_t5

0x774b,	// (0x00073bd9) main_radioblah_pane_g1_ParamLimits

0xe538,	// (0x0007a9c6) main_radioblah_pane_t3_ParamLimits

0xe538,	// (0x0007a9c6) main_radioblah_pane_t3

0xe550,	// (0x0007a9de) main_radioblah_pane_t4_ParamLimits

0xe550,	// (0x0007a9de) main_radioblah_pane_t4

0x7773,	// (0x00073c01) main_radioblah_text_pane_ParamLimits

0x7773,	// (0x00073c01) main_radioblah_text_pane

0x7785,	// (0x00073c13) main_radioblah_info_pane_g1_ParamLimits

0x781e,	// (0x00073cac) main_radioblah_info_pane_t4_ParamLimits

0x781e,	// (0x00073cac) main_radioblah_info_pane_t4

0xa247,	// (0x000766d5) main_sp_fs_calendar_pane

0x821f,	// (0x000746ad) main_phacti_pane_g1

0x8227,	// (0x000746b5) phacti_note_pane_ParamLimits

0x8227,	// (0x000746b5) phacti_note_pane

0xe870,	// (0x0007acfe) phacti_term_pane_ParamLimits

0xe870,	// (0x0007acfe) phacti_term_pane

0xe885,	// (0x0007ad13) phacti_note_pane_t1_ParamLimits

0xe885,	// (0x0007ad13) phacti_note_pane_t1

0xa674,	// (0x00076b02) phacti_term_pane_g1

0xa67c,	// (0x00076b0a) phacti_term_pane_t1_ParamLimits

0xa67c,	// (0x00076b0a) phacti_term_pane_t1

0xe89c,	// (0x0007ad2a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a4,	// (0x0007ad32) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007c243) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ac,	// (0x0007ad3a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ac,	// (0x0007ad3a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c2,	// (0x0007ad50) aid_popup_sp_fs_bg_corner_pane

0xcbab,	// (0x00079039) popup_sp_fs_calendar_preview_bg_pane_g1

0x9085,	// (0x00075513) popup_sp_fs_calendar_preview_bg_pane

0x1054,	// (0x0006d4e2) popup_sp_fs_calendar_preview_list_pane

0xc7a1,	// (0x00078c2f) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a1,	// (0x00078c2f) bg_main_sp_fs_cale_pane

0xa6a6,	// (0x00076b34) listscroll_cale_mrui_pane_ParamLimits

0xa6a6,	// (0x00076b34) listscroll_cale_mrui_pane

0xa6bb,	// (0x00076b49) listscroll_sp_fs_schedule_track_pane

0xa6c4,	// (0x00076b52) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa6c4,	// (0x00076b52) main_sp_fs_ctrlbar_pane_cp01

0xe8ca,	// (0x0007ad58) main_sp_fs_ribbon_pane

0xa6d7,	// (0x00076b65) popup_sp_fs_cale_preview_window

0x829c,	// (0x0007472a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x829c,	// (0x0007472a) list_single_sp_fs_schedule_track_pane

0xa247,	// (0x000766d5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa247,	// (0x000766d5) bg_sp_fs_highlight_list_pane_cp03

0x82b2,	// (0x00074740) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x82b2,	// (0x00074740) list_single_sp_fs_schedule_track_pane_g1

0x82be,	// (0x0007474c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x82be,	// (0x0007474c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007c248) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007c248) list_single_sp_fs_schedule_track_pane_g

0x82ca,	// (0x00074758) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x82ca,	// (0x00074758) list_single_sp_fs_schedule_track_pane_t1

0x82e4,	// (0x00074772) sp_fs_schedule_track_pane_ParamLimits

0x82e4,	// (0x00074772) sp_fs_schedule_track_pane

0xe8d2,	// (0x0007ad60) sp_fs_schedule_track_pane_g1

0xe8da,	// (0x0007ad68) sp_fs_schedule_track_pane_g2

0xe8e2,	// (0x0007ad70) sp_fs_schedule_track_pane_g3

0xe8ea,	// (0x0007ad78) sp_fs_schedule_track_pane_g4

0xe8f2,	// (0x0007ad80) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007c24d) sp_fs_schedule_track_pane_g

0xd61a,	// (0x00079aa8) bg_sp_fs_schedule_viewer_highlight_g1

0xab50,	// (0x00076fde) bg_sp_fs_schedule_viewer_highlight_g2

0xd622,	// (0x00079ab0) bg_sp_fs_schedule_viewer_highlight_g3

0xd62a,	// (0x00079ab8) bg_sp_fs_schedule_viewer_highlight_g4

0xd862,	// (0x00079cf0) bg_sp_fs_schedule_viewer_highlight_g5

0xd63a,	// (0x00079ac8) bg_sp_fs_schedule_viewer_highlight_g6

0xd642,	// (0x00079ad0) bg_sp_fs_schedule_viewer_highlight_g7

0xd64a,	// (0x00079ad8) bg_sp_fs_schedule_viewer_highlight_g8

0xab30,	// (0x00076fbe) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007c258) bg_sp_fs_schedule_viewer_highlight_g

0x9085,	// (0x00075513) bg_main_sp_fs_ribbon_pane

0x82f5,	// (0x00074783) main_sp_fs_ribbon_pane_g1

0xe8fa,	// (0x0007ad88) main_sp_fs_ribbon_pane_t1

0x82fe,	// (0x0007478c) main_sp_fs_ribbon_pane_t2

0xe909,	// (0x0007ad97) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007c26b) main_sp_fs_ribbon_pane_t

0xe918,	// (0x0007ada6) main_sp_fs_ribbon_scheduler_pane

0xe920,	// (0x0007adae) bg_main_sp_fs_ribbon_pane_g1

0xe929,	// (0x0007adb7) bg_main_sp_fs_ribbon_pane_g2

0xe932,	// (0x0007adc0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007c272) bg_main_sp_fs_ribbon_pane_g

0xe93a,	// (0x0007adc8) main_sp_fs_ribbon_scheduler_pane_g1

0xe943,	// (0x0007add1) main_sp_fs_ribbon_scheduler_pane_g2

0xe94c,	// (0x0007adda) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007c279) main_sp_fs_ribbon_scheduler_pane_g

0xe955,	// (0x0007ade3) list_cale_mrui_pane

0x830d,	// (0x0007479b) sp_fs_scroll_pane_cp07_ParamLimits

0x830d,	// (0x0007479b) sp_fs_scroll_pane_cp07

0x8329,	// (0x000747b7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8329,	// (0x000747b7) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x0007adf0) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x0007adf8) list_sp_fs_schedule_track_pane

0xe972,	// (0x0007ae00) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x0007ae00) sp_fs_scroll_pane_cp06

0xcbab,	// (0x00079039) bgmain_sp_fs_calendar_pane_g1

0x8339,	// (0x000747c7) list_single_cale_mrui_pane_ParamLimits

0x8339,	// (0x000747c7) list_single_cale_mrui_pane

0xa6e9,	// (0x00076b77) list_single_cale_mrui_row_pane_ParamLimits

0xa6e9,	// (0x00076b77) list_single_cale_mrui_row_pane

0xa6f6,	// (0x00076b84) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa6f6,	// (0x00076b84) list_single_cale_mrui_row_pane_g1

0xa72e,	// (0x00076bbc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa72e,	// (0x00076bbc) list_single_cale_mrui_row_pane_t1

0x835b,	// (0x000747e9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x835b,	// (0x000747e9) list_single_cale_mrui_row_pane_t2

0xa740,	// (0x00076bce) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa740,	// (0x00076bce) list_single_cale_mrui_row_pane_t3

0xa76f,	// (0x00076bfd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa76f,	// (0x00076bfd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007c287) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007c287) list_single_cale_mrui_row_pane_t

0x83c3,	// (0x00074851) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x83c3,	// (0x00074851) list_single_cmail_header_editor_pane_bg_cp01

0x83e9,	// (0x00074877) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x83e9,	// (0x00074877) list_single_cmail_header_editor_pane_bg_cp02

0x8409,	// (0x00074897) main_radioblah_text_pane_t1_ParamLimits

0x8409,	// (0x00074897) main_radioblah_text_pane_t1

0xe991,	// (0x0007ae1f) cam6_indi_pane_cp01

0xe999,	// (0x0007ae27) cam6_mode_pane_cp01

0xe9a1,	// (0x0007ae2f) cam6_pano_pane

0xe9aa,	// (0x0007ae38) cam6_zoom_pane_cp01

0xe9b2,	// (0x0007ae40) cam6_pano_image_pane

0xe9bd,	// (0x0007ae4b) cam6_pano_pane_g1

0xe284,	// (0x0007a712) cam6_pano_pane_g2

0xe9c6,	// (0x0007ae54) cam6_pano_pane_g3

0xe9cf,	// (0x0007ae5d) cam6_pano_pane_g4

0xd175,	// (0x00079603) cam6_pano_pane_g5

0xe9d8,	// (0x0007ae66) cam6_pano_pane_g6

0xe9e2,	// (0x0007ae70) cam6_pano_pane_g7

0xe9ea,	// (0x0007ae78) cam6_pano_pane_g8

0xe9f3,	// (0x0007ae81) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007c290) cam6_pano_pane_g

0x9085,	// (0x00075513) main_browser_tag_pane

0xe851,	// (0x0007acdf) grid_navstr_albumart_pane

0xe9fe,	// (0x0007ae8c) cell_navstr_albumart_pane_ParamLimits

0xe9fe,	// (0x0007ae8c) cell_navstr_albumart_pane

0xb4f7,	// (0x00077985) cell_navstr_albumart_pane_g1

0xc5b2,	// (0x00078a40) cell_navstr_albumart_pane_g2

0xc5c2,	// (0x00078a50) cell_navstr_albumart_pane_g3

0xc5ba,	// (0x00078a48) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007c2a3) cell_navstr_albumart_pane_g

0x8424,	// (0x000748b2) bt_list_pane_ParamLimits

0x8424,	// (0x000748b2) bt_list_pane

0xea20,	// (0x0007aeae) bt_list_pane_t1

0xea2f,	// (0x0007aebd) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007c2ac) bt_list_pane_t

0x9085,	// (0x00075513) main_cale_prevew_pane

0x8439,	// (0x000748c7) popup_cale_preview_window_ParamLimits

0x8439,	// (0x000748c7) popup_cale_preview_window

0xa247,	// (0x000766d5) bg_popup_preview_window_pane_cp05_ParamLimits

0xa247,	// (0x000766d5) bg_popup_preview_window_pane_cp05

0xea3e,	// (0x0007aecc) list_cale_preview_pane_ParamLimits

0xea3e,	// (0x0007aecc) list_cale_preview_pane

0xea4a,	// (0x0007aed8) list_double_cale_preview_pane_ParamLimits

0xea4a,	// (0x0007aed8) list_double_cale_preview_pane

0xea5c,	// (0x0007aeea) list_single_cale_preview_pane_ParamLimits

0xea5c,	// (0x0007aeea) list_single_cale_preview_pane

0xea70,	// (0x0007aefe) list_single_cale_preview_pane_g1

0xea78,	// (0x0007af06) list_single_cale_preview_pane_t1_ParamLimits

0xea78,	// (0x0007af06) list_single_cale_preview_pane_t1

0xea8d,	// (0x0007af1b) list_double_cale_preview_pane_g1

0xea95,	// (0x0007af23) list_double_cale_preview_pane_t1_ParamLimits

0xea95,	// (0x0007af23) list_double_cale_preview_pane_t1

0xeaaa,	// (0x0007af38) list_double_cale_preview_pane_t2_ParamLimits

0xeaaa,	// (0x0007af38) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007c2b1) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007c2b1) list_double_cale_preview_pane_t

0x9085,	// (0x00075513) main_ezdial_pane

0xa247,	// (0x000766d5) main_sp_fs_email_pane_ParamLimits

0x7a26,	// (0x00073eb4) cmail_ddmenu_btn01_pane_ParamLimits

0x7a26,	// (0x00073eb4) cmail_ddmenu_btn01_pane

0x7a39,	// (0x00073ec7) cmail_ddmenu_btn02_pane_ParamLimits

0x7a39,	// (0x00073ec7) cmail_ddmenu_btn02_pane

0x7a5c,	// (0x00073eea) cmail_ddmenu_btn03_pane_ParamLimits

0x7a5c,	// (0x00073eea) cmail_ddmenu_btn03_pane

0x7a82,	// (0x00073f10) main_sp_fs_ctrlbar_pane_ParamLimits

0x7aa6,	// (0x00073f34) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x80b6,	// (0x00074544) list_cmail_body_pane_ParamLimits

0xe7c8,	// (0x0007ac56) bg_button_pane_cp12

0xe7d1,	// (0x0007ac5f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d1,	// (0x0007ac5f) list_single_cmail_header_detail_pane_g3

0xa650,	// (0x00076ade) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa650,	// (0x00076ade) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007c234) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007c234) list_single_cmail_header_detail_pane_t

0xa691,	// (0x00076b1f) phacti_term_pane_t2_ParamLimits

0xa691,	// (0x00076b1f) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007c23e) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007c23e) phacti_term_pane_t

0xeac2,	// (0x0007af50) aid_size_list_single_double

0x8452,	// (0x000748e0) popup_ezdial_listscroll_window

0x846d,	// (0x000748fb) popup_number_entry_window_cp01

0xb373,	// (0x00077801) bg_popup_call_pane_cp09

0xeace,	// (0x0007af5c) ezdial_list_pane

0xead6,	// (0x0007af64) scroll_pane_cp23

0xc7a1,	// (0x00078c2f) bg_button_pane_cp028_ParamLimits

0xc7a1,	// (0x00078c2f) bg_button_pane_cp028

0x847b,	// (0x00074909) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x847b,	// (0x00074909) cmail_ddmenu_btn01_pane_g1

0x8487,	// (0x00074915) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8487,	// (0x00074915) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007c2b6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007c2b6) cmail_ddmenu_btn01_pane_g

0xeade,	// (0x0007af6c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeade,	// (0x0007af6c) cmail_ddmenu_btn01_pane_t1

0xc7a1,	// (0x00078c2f) bg_button_pane_cp029_ParamLimits

0xc7a1,	// (0x00078c2f) bg_button_pane_cp029

0x8493,	// (0x00074921) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8493,	// (0x00074921) cmail_ddmenu_btn02_pane_g1

0x84ab,	// (0x00074939) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x84ab,	// (0x00074939) cmail_ddmenu_btn02_pane_t1

0xa247,	// (0x000766d5) bg_button_pane_cp031_ParamLimits

0xa247,	// (0x000766d5) bg_button_pane_cp031

0x8493,	// (0x00074921) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8493,	// (0x00074921) cmail_ddmenu_btn03_pane_g1

0x84ab,	// (0x00074939) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x84ab,	// (0x00074939) cmail_ddmenu_btn03_pane_t1

0x53f2,	// (0x00071880) cell_dialer2_keypad_pane_t1_ParamLimits

0x540c,	// (0x0007189a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x540c,	// (0x0007189a) cell_dialer2_keypad_pane_t1_copy1

0x72f2,	// (0x00073780) ncimui_group_button_pane

0xa247,	// (0x000766d5) main_sp_fs_calendar_pane_ParamLimits

0x80cb,	// (0x00074559) list_single_cmail_header_caption_pane_ParamLimits

0xe391,	// (0x0007a81f) aid_recal_txt_sm_pane

0x9085,	// (0x00075513) mian_recal_day_pane

0xa6d7,	// (0x00076b65) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x0007af81) list_recal_day_pane

0xa7b9,	// (0x00076c47) list_single_recal_day_pane_ParamLimits

0xa7b9,	// (0x00076c47) list_single_recal_day_pane

0xeb1a,	// (0x0007afa8) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x0007afa8) list_single_recal_day_pane_g1

0xa7cb,	// (0x00076c59) list_single_recal_day_pane_g2_ParamLimits

0xa7cb,	// (0x00076c59) list_single_recal_day_pane_g2

0xa7db,	// (0x00076c69) list_single_recal_day_pane_g3_ParamLimits

0xa7db,	// (0x00076c69) list_single_recal_day_pane_g3

0x84cf,	// (0x0007495d) list_single_recal_day_pane_g4_ParamLimits

0x84cf,	// (0x0007495d) list_single_recal_day_pane_g4

0xa7e7,	// (0x00076c75) list_single_recal_day_pane_g5_ParamLimits

0xa7e7,	// (0x00076c75) list_single_recal_day_pane_g5

0xa7f7,	// (0x00076c85) list_single_recal_day_pane_g6_ParamLimits

0xa7f7,	// (0x00076c85) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007c2c5) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007c2c5) list_single_recal_day_pane_g

0xa80b,	// (0x00076c99) list_single_recal_day_pane_t1

0xa81d,	// (0x00076cab) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007c2d0) list_single_recal_day_pane_t

0x84ef,	// (0x0007497d) ncimui_query_button_pane_ParamLimits

0x84ef,	// (0x0007497d) ncimui_query_button_pane

0x84ff,	// (0x0007498d) ncimui_query_button_pane_t1_ParamLimits

0x84ff,	// (0x0007498d) ncimui_query_button_pane_t1

0xeb26,	// (0x0007afb4) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x0007afb4) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007c2d5) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007c2d5) ncimui_query_button_pane_t

0x8512,	// (0x000749a0) query_button_pane_ParamLimits

0x8512,	// (0x000749a0) query_button_pane

0x9085,	// (0x00075513) bg_button_pane_cp0028

0xeb39,	// (0x0007afc7) query_button_pane_t1

0x348d,	// (0x0006f91b) main_tport_pane_ParamLimits

0x7f7a,	// (0x00074408) bg_popup_window_pane_cp01_ParamLimits

0x7f7a,	// (0x00074408) bg_popup_window_pane_cp01

0x7f95,	// (0x00074423) heading_pane_cp08_ParamLimits

0x7f95,	// (0x00074423) heading_pane_cp08

0x7fa8,	// (0x00074436) heading_pane_cp07_ParamLimits

0x7fa8,	// (0x00074436) heading_pane_cp07

0x804f,	// (0x000744dd) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007c221) cell_tport_appsw_pane_g

0xa1c6,	// (0x00076654) input_candi_list_open_g1

0xad1b,	// (0x000771a9) list_cale_time_pane_g6_ParamLimits

0xad1b,	// (0x000771a9) list_cale_time_pane_g6

0x4250,	// (0x000706de) aid_size_touch_calib_1_ParamLimits

0x4250,	// (0x000706de) aid_size_touch_calib_1

0x4262,	// (0x000706f0) aid_size_touch_calib_2_ParamLimits

0x4262,	// (0x000706f0) aid_size_touch_calib_2

0x427a,	// (0x00070708) aid_size_touch_calib_3_ParamLimits

0x427a,	// (0x00070708) aid_size_touch_calib_3

0x4298,	// (0x00070726) aid_size_touch_calib_4_ParamLimits

0x4298,	// (0x00070726) aid_size_touch_calib_4

0x42b0,	// (0x0007073e) main_touch_calib_button_group_pane_ParamLimits

0x42b0,	// (0x0007073e) main_touch_calib_button_group_pane

0x42c8,	// (0x00070756) main_touch_calib_pane_g1_ParamLimits

0x42da,	// (0x00070768) main_touch_calib_pane_g2_ParamLimits

0x42ec,	// (0x0007077a) main_touch_calib_pane_g3_ParamLimits

0x42fe,	// (0x0007078c) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007bbdf) main_touch_calib_pane_g_ParamLimits

0x4310,	// (0x0007079e) main_touch_calib_pane_t1_ParamLimits

0x432a,	// (0x000707b8) main_touch_calib_pane_t2_ParamLimits

0x4344,	// (0x000707d2) main_touch_calib_pane_t3_ParamLimits

0x4358,	// (0x000707e6) main_touch_calib_pane_t4_ParamLimits

0x436c,	// (0x000707fa) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007bbe8) main_touch_calib_pane_t_ParamLimits

0xcf17,	// (0x000793a5) list_single_fp_cale_pane_g3_ParamLimits

0xcf17,	// (0x000793a5) list_single_fp_cale_pane_g3

0x90ed,	// (0x0007557b) bg_button_pane_cp012_ParamLimits

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp03_ParamLimits

0x637d,	// (0x0007280b) cell_vitu2_function_top_pane_g1_ParamLimits

0x90ed,	// (0x0007557b) bg_vkb2_func_pane_cp04_ParamLimits

0x7280,	// (0x0007370e) main_ncimui_button_group_pane_ParamLimits

0x7280,	// (0x0007370e) main_ncimui_button_group_pane

0x72e0,	// (0x0007376e) main_ncimui_pane_t3_ParamLimits

0x72e0,	// (0x0007376e) main_ncimui_pane_t3

0xe867,	// (0x0007acf5) phacti_button_group_pane

0xeac2,	// (0x0007af50) aid_size_list_single_double_ParamLimits

0x8452,	// (0x000748e0) popup_ezdial_listscroll_window_ParamLimits

0x846d,	// (0x000748fb) popup_number_entry_window_cp01_ParamLimits

0x8525,	// (0x000749b3) phacti_button_pane_ParamLimits

0x8525,	// (0x000749b3) phacti_button_pane

0x9085,	// (0x00075513) bg_button_pane_cp14

0xeb47,	// (0x0007afd5) phacti_button_pane_t1

0x8536,	// (0x000749c4) main_touch_calib_button_pane_ParamLimits

0x8536,	// (0x000749c4) main_touch_calib_button_pane

0x9fae,	// (0x0007643c) bg_button_pane_cp18_ParamLimits

0x9fae,	// (0x0007643c) bg_button_pane_cp18

0xeb55,	// (0x0007afe3) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0007afe3) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0007aff9) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0007aff9) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007c2da) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007c2da) main_touch_calib_button_pane_t

0x9085,	// (0x00075513) cell_ncimui_button_pane

0x9085,	// (0x00075513) bg_button_pane_cp032

0xeb89,	// (0x0007b017) cell_ncimui_button_pane_t1

0x9a30,	// (0x00075ebe) image3_infobar_pane_ParamLimits

0x9a30,	// (0x00075ebe) image3_infobar_pane

0x76bc,	// (0x00073b4a) fs_bigclock_status_pane_ParamLimits

0x76bc,	// (0x00073b4a) fs_bigclock_status_pane

0x76c9,	// (0x00073b57) main_fs_bigclock_clock_pane_ParamLimits

0x76c9,	// (0x00073b57) main_fs_bigclock_clock_pane

0x76e9,	// (0x00073b77) main_fs_bigclock_indi_pane_ParamLimits

0x76e9,	// (0x00073b77) main_fs_bigclock_indi_pane

0x7713,	// (0x00073ba1) main_fs_bigclock_swipe_pane_ParamLimits

0x7713,	// (0x00073ba1) main_fs_bigclock_swipe_pane

0x9085,	// (0x00075513) main_fs_clock_dumped_data

0xe3a8,	// (0x0007a836) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3a8,	// (0x0007a836) list_single_fs_bigclock_indicator_pane_g1

0xe3c4,	// (0x0007a852) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c4,	// (0x0007a852) list_single_fs_bigclock_indicator_pane_g2

0xe3de,	// (0x0007a86c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3de,	// (0x0007a86c) list_single_fs_bigclock_indicator_pane_g3

0xe3f8,	// (0x0007a886) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3f8,	// (0x0007a886) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007c102) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007c102) list_single_fs_bigclock_indicator_pane_g

0xe423,	// (0x0007a8b1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe423,	// (0x0007a8b1) list_single_fs_bigclock_indicator_pane_t1

0xe44b,	// (0x0007a8d9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44b,	// (0x0007a8d9) list_single_fs_bigclock_indicator_pane_t2

0xe473,	// (0x0007a901) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe473,	// (0x0007a901) list_single_fs_bigclock_indicator_pane_t3

0xe49b,	// (0x0007a929) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49b,	// (0x0007a929) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007c10d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007c10d) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0007b025) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0007b025) image3_infobar_fav_pane

0xeba7,	// (0x0007b035) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0007b035) image3_infobar_loc_pane

0xebbb,	// (0x0007b049) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x0007b049) image3_infobar_time_pane

0xcbab,	// (0x00079039) image3_infobar_time_pane_g1

0xebcb,	// (0x0007b059) image3_infobar_time_pane_t1

0xcbab,	// (0x00079039) image3_infobar_loc_pane_g1

0xebd9,	// (0x0007b067) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007c2df) image3_infobar_loc_pane_g

0xebe1,	// (0x0007b06f) image3_infobar_loc_pane_t1

0xcbab,	// (0x00079039) image3_infobar_fav_pane_g1

0xebef,	// (0x0007b07d) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007c2e4) image3_infobar_fav_pane_g

0xebf7,	// (0x0007b085) fs_bigclock_status_battery_pane

0xec00,	// (0x0007b08e) fs_bigclock_status_signal_pane

0xec09,	// (0x0007b097) fs_bigclock_status_title_pane

0xec12,	// (0x0007b0a0) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x0007b0a9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007c2e9) fs_bigclock_status_signal_pane_g

0xec23,	// (0x0007b0b1) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x0007b0ba) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007c2ee) fs_bigclock_status_battery_pane_g

0xec34,	// (0x0007b0c2) fs_bigclock_status_title_pane_t1

0xcbab,	// (0x00079039) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x0007b0d0) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x0007b0d9) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x0007b0d9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007c2f3) main_fs_bigclock_clock_pane_g

0xec53,	// (0x0007b0e1) main_fs_bigclock_clock_pane_t1

0x854b,	// (0x000749d9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007c2fc) main_fs_bigclock_clock_pane_t

0xec61,	// (0x0007b0ef) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x0007b0ef) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x0007b100) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x0007b100) list_single_fs_bigclock_pane

0xec98,	// (0x0007b126) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x0007b135) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x0007b13d) list_single_fs_bigclock_pane_t1

0xcbab,	// (0x00079039) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x0007b180) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007c30d) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x0007b188) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x0007b188) main_fs_bigclock_swipe_pane_t1

0x23d4,	// (0x0006e862) call_type_pane_ParamLimits

0x9085,	// (0x00075513) main_btmg_pane

0xa722,	// (0x00076bb0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa722,	// (0x00076bb0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007c280) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007c280) list_single_cale_mrui_row_pane_g

0xa7a8,	// (0x00076c36) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x0007afa0) list_recal_vselct_arw_up_pane

0xa7b0,	// (0x00076c3e) list_recal_vselct_pane

0x859c,	// (0x00074a2a) btmg_button_pane

0x85a6,	// (0x00074a34) main_btmg_pane_g1

0x9085,	// (0x00075513) bg_button_pane_cp044

0xed17,	// (0x0007b1a5) btmg_button_pane_t1

0xc78d,	// (0x00078c1b) aid_listscroll_gen

0xa247,	// (0x000766d5) main_cntbar_detail_pane

0xe7aa,	// (0x0007ac38) list_cmail_folder_pane

0xcbe6,	// (0x00079074) sp_fs_scroll_pane_cp03_ParamLimits

0x85b0,	// (0x00074a3e) list_single_fs_dyc_pane_cp01_ParamLimits

0x85b0,	// (0x00074a3e) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0007b1b3) aid_size_cmail_indent

0xa82f,	// (0x00076cbd) list_single_dyc_row_pane_cp01

0x85f8,	// (0x00074a86) cntbar_detail_list_pane_ParamLimits

0x85f8,	// (0x00074a86) cntbar_detail_list_pane

0x8644,	// (0x00074ad2) main_cntbar_detail_cont_pane_ParamLimits

0x8644,	// (0x00074ad2) main_cntbar_detail_cont_pane

0xcbe6,	// (0x00079074) scroll_pane_cp032_ParamLimits

0xcbe6,	// (0x00079074) scroll_pane_cp032

0x8658,	// (0x00074ae6) cntbar_detail_list_event_pane_ParamLimits

0x8658,	// (0x00074ae6) cntbar_detail_list_event_pane

0x8608,	// (0x00074a96) cntbar_detail_list_shct_pane

0xab9e,	// (0x0007702c) aid_list_gen

0xed2e,	// (0x0007b1bc) aid_scroll

0xed37,	// (0x0007b1c5) aid_size_touch_scroll_bar

0x6a65,	// (0x00072ef3) aid_list_double

0xdae6,	// (0x00079f74) aid_list_single

0xdae6,	// (0x00079f74) aid_list_single_lg

0x8668,	// (0x00074af6) aid_list_z_g_a_sm

0x8670,	// (0x00074afe) aid_list_z_g_d

0x8678,	// (0x00074b06) aid_txt_z_prm

0x8686,	// (0x00074b14) aid_txt_z_prm_cp01

0x8694,	// (0x00074b22) aid_txt_z_sec

0x86a2,	// (0x00074b30) main_cntbar_detail_cont_pane_g1_ParamLimits

0x86a2,	// (0x00074b30) main_cntbar_detail_cont_pane_g1

0x86b6,	// (0x00074b44) main_cntbar_detail_cont_pane_g2_ParamLimits

0x86b6,	// (0x00074b44) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007c312) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007c312) main_cntbar_detail_cont_pane_g

0xed40,	// (0x0007b1ce) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x0007b1dc) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x0007b1ea) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007c317) main_cntbar_detail_cont_pane_t

0x86c6,	// (0x00074b54) cell_cntbar_detail_list_shct_pane_ParamLimits

0x86c6,	// (0x00074b54) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x0007b1f8) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x0007b201) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007c31e) cntbar_detail_list_shct_pane_g

0x86da,	// (0x00074b68) cntbar_detail_list_event_pane_g1_ParamLimits

0x86da,	// (0x00074b68) cntbar_detail_list_event_pane_g1

0x86e6,	// (0x00074b74) cntbar_detail_list_event_pane_g2_ParamLimits

0x86e6,	// (0x00074b74) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007c323) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007c323) cntbar_detail_list_event_pane_g

0x8752,	// (0x00074be0) cntbar_detail_list_event_pane_t1_ParamLimits

0x8752,	// (0x00074be0) cntbar_detail_list_event_pane_t1

0x8767,	// (0x00074bf5) cntbar_detail_list_event_pane_t2_ParamLimits

0x8767,	// (0x00074bf5) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007c330) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007c330) cntbar_detail_list_event_pane_t

0xcbab,	// (0x00079039) cell_cntbar_detail_list_shct_pane_g1

0xb32b,	// (0x000777b9) navi_pane_mv_g3

0xa247,	// (0x000766d5) main_cntbar_detail_pane_ParamLimits

0x9085,	// (0x00075513) main_notif_wgt_pane

0x9846,	// (0x00075cd4) aid_tch_main_mp4_pane_g4

0x9a28,	// (0x00075eb6) popup_slider_window_cp02

0xa79e,	// (0x00076c2c) list_recal_day_event_pane

0x85cc,	// (0x00074a5a) cntbar_detail_btn_pane_ParamLimits

0x85cc,	// (0x00074a5a) cntbar_detail_btn_pane

0x85e2,	// (0x00074a70) cntbar_detail_btn_pane_cp01_ParamLimits

0x85e2,	// (0x00074a70) cntbar_detail_btn_pane_cp01

0x8608,	// (0x00074a96) cntbar_detail_list_shct_pane_ParamLimits

0x8618,	// (0x00074aa6) cntbar_detail_pane_g1_ParamLimits

0x8618,	// (0x00074aa6) cntbar_detail_pane_g1

0x8628,	// (0x00074ab6) cntbar_detail_pane_t1_ParamLimits

0x8628,	// (0x00074ab6) cntbar_detail_pane_t1

0x86f2,	// (0x00074b80) cntbar_detail_list_event_pane_g3_ParamLimits

0x86f2,	// (0x00074b80) cntbar_detail_list_event_pane_g3

0x870a,	// (0x00074b98) cntbar_detail_list_event_pane_g4_ParamLimits

0x870a,	// (0x00074b98) cntbar_detail_list_event_pane_g4

0x8722,	// (0x00074bb0) cntbar_detail_list_event_pane_g5_ParamLimits

0x8722,	// (0x00074bb0) cntbar_detail_list_event_pane_g5

0x873a,	// (0x00074bc8) cntbar_detail_list_event_pane_g6_ParamLimits

0x873a,	// (0x00074bc8) cntbar_detail_list_event_pane_g6

0x877c,	// (0x00074c0a) cntbar_detail_list_event_pane_t3_ParamLimits

0x877c,	// (0x00074c0a) cntbar_detail_list_event_pane_t3

0x878e,	// (0x00074c1c) popup_notif_wgt_window_ParamLimits

0x878e,	// (0x00074c1c) popup_notif_wgt_window

0x87a7,	// (0x00074c35) popup_submenu_window_cp01_ParamLimits

0x87a7,	// (0x00074c35) popup_submenu_window_cp01

0xb373,	// (0x00077801) bg_popup_window_pane_cp10

0xed7c,	// (0x0007b20a) listscroll_notif_wgt_pane

0xed8d,	// (0x0007b21b) list_notif_wgt_window

0xed96,	// (0x0007b224) scroll_pane_cp033

0x87b9,	// (0x00074c47) list_notif_wgt_row_pane_ParamLimits

0x87b9,	// (0x00074c47) list_notif_wgt_row_pane

0xed9f,	// (0x0007b22d) aid_size_list_notif_wgt_del

0xedac,	// (0x0007b23a) list_notif_wgt_row_pane_g1

0xedb8,	// (0x0007b246) list_notif_wgt_row_pane_g2

0xedcc,	// (0x0007b25a) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007c337) list_notif_wgt_row_pane_g

0xedd9,	// (0x0007b267) list_notif_wgt_row_pane_t1

0xedef,	// (0x0007b27d) list_notif_wgt_row_pane_t2

0xee01,	// (0x0007b28f) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007c33e) list_notif_wgt_row_pane_t

0xd87c,	// (0x00079d0a) list_recal_day_event_pane_g1

0xee13,	// (0x0007b2a1) list_recal_day_event_pane_t1

0x9085,	// (0x00075513) bg_button_pane_cp045

0xee22,	// (0x0007b2b0) cntbar_detail_btn_pane_t1

0xc7a1,	// (0x00078c2f) main_callh_pane_ParamLimits

0xc7a1,	// (0x00078c2f) main_callh_pane

0x9085,	// (0x00075513) main_coverflow0_pane

0x9085,	// (0x00075513) main_wgtman_pane

0x772b,	// (0x00073bb9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x772b,	// (0x00073bb9) main_fs_bigclock_unlock_btn_pane

0x8047,	// (0x000744d5) bg_button_pane_cp16

0x8057,	// (0x000744e5) cell_tport_appsw_pane_g3

0x87c9,	// (0x00074c57) cf0_flow_pane_ParamLimits

0x87c9,	// (0x00074c57) cf0_flow_pane

0xee30,	// (0x0007b2be) listscroll_cf0_pane

0xee3b,	// (0x0007b2c9) main_cf0_pane_g1

0x87de,	// (0x00074c6c) main_cf0_pane_t1_ParamLimits

0x87de,	// (0x00074c6c) main_cf0_pane_t1

0x87f5,	// (0x00074c83) main_cf0_pane_t2_ParamLimits

0x87f5,	// (0x00074c83) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007c34a) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007c34a) main_cf0_pane_t

0xee4d,	// (0x0007b2db) scroll_pane_cp11

0x880c,	// (0x00074c9a) cf0_flow_pane_g1

0x8814,	// (0x00074ca2) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007c34f) cf0_flow_pane_g

0x881c,	// (0x00074caa) cf0_flow_pane_t1

0x9085,	// (0x00075513) main_call6_pane

0x9085,	// (0x00075513) main_calllock_pane

0x882a,	// (0x00074cb8) call6_btn_grp_pane_ParamLimits

0x882a,	// (0x00074cb8) call6_btn_grp_pane

0x8844,	// (0x00074cd2) call6_pane_g1_ParamLimits

0x8844,	// (0x00074cd2) call6_pane_g1

0x8859,	// (0x00074ce7) popup_call6_1st_window_ParamLimits

0x8859,	// (0x00074ce7) popup_call6_1st_window

0x886a,	// (0x00074cf8) popup_call6_2nd_window_ParamLimits

0x886a,	// (0x00074cf8) popup_call6_2nd_window

0x887b,	// (0x00074d09) cell_call6_btn_pane_ParamLimits

0x887b,	// (0x00074d09) cell_call6_btn_pane

0xb373,	// (0x00077801) bg_popup_call2_in_pane_cp03

0xee58,	// (0x0007b2e6) popup_call6_1st_window_g1

0xee60,	// (0x0007b2ee) popup_call6_1st_window_g2

0xee68,	// (0x0007b2f6) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007c354) popup_call6_1st_window_g

0xee70,	// (0x0007b2fe) popup_call6_1st_window_t1

0xee7f,	// (0x0007b30d) popup_call6_1st_window_t2

0xee8f,	// (0x0007b31d) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007c35b) popup_call6_1st_window_t

0xb373,	// (0x00077801) bg_popup_call2_in_pane_cp04

0xee58,	// (0x0007b2e6) popup_call6_2nd_window_g1

0xee60,	// (0x0007b2ee) popup_call6_2nd_window_g2

0xee68,	// (0x0007b2f6) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007c354) popup_call6_2nd_window_g

0xee70,	// (0x0007b2fe) popup_call6_2nd_window_t1

0x9085,	// (0x00075513) bg_button_pane_cp15

0xee9f,	// (0x0007b32d) cell_call6_btn_pane_g1

0xeea8,	// (0x0007b336) cell_call6_btn_pane_t1

0x888f,	// (0x00074d1d) listscroll_wgtman_pane_ParamLimits

0x888f,	// (0x00074d1d) listscroll_wgtman_pane

0x88b0,	// (0x00074d3e) wgtman_btn_pane_ParamLimits

0x88b0,	// (0x00074d3e) wgtman_btn_pane

0xb130,	// (0x000775be) aid_scroll_copy1

0xeeb7,	// (0x0007b345) list_wgtman_pane

0x88f3,	// (0x00074d81) wgtman_btn_pane_g1_ParamLimits

0x88f3,	// (0x00074d81) wgtman_btn_pane_g1

0x891f,	// (0x00074dad) wgtman_btn_pane_t1_ParamLimits

0x891f,	// (0x00074dad) wgtman_btn_pane_t1

0xeec1,	// (0x0007b34f) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x0007b34f) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007c362) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007c362) wgtman_btn_pane_t

0x895c,	// (0x00074dea) listrow_wgtman_pane_ParamLimits

0x895c,	// (0x00074dea) listrow_wgtman_pane

0x896f,	// (0x00074dfd) listrow_wgtman_pane_g1

0x897c,	// (0x00074e0a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007c367) listrow_wgtman_pane_g

0x899a,	// (0x00074e28) listrow_wgtman_pane_t1

0x89b2,	// (0x00074e40) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007c36c) listrow_wgtman_pane_t

0x89d8,	// (0x00074e66) wait_bar_pane_cp09

0xeed8,	// (0x0007b366) main_calllock_btn_pane

0xeee2,	// (0x0007b370) main_calllock_pane_g1

0x9085,	// (0x00075513) bg_button_pane_cp17

0xeeed,	// (0x0007b37b) main_calllock_btn_pane_g1

0xeef6,	// (0x0007b384) main_calllock_btn_pane_t1

0x9085,	// (0x00075513) main_dialer3_pane

0x9085,	// (0x00075513) main_fmrd2_pane

0xcbab,	// (0x00079039) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x0007b39b) main_fs_bigclock_unlock_btn_pane_t1

0x89ea,	// (0x00074e78) area_fmrd2_info_pane_ParamLimits

0x89ea,	// (0x00074e78) area_fmrd2_info_pane

0x89fb,	// (0x00074e89) area_fmrd2_visual_pane_ParamLimits

0x89fb,	// (0x00074e89) area_fmrd2_visual_pane

0x8a09,	// (0x00074e97) fmrd2_indi_pane_ParamLimits

0x8a09,	// (0x00074e97) fmrd2_indi_pane

0x8a16,	// (0x00074ea4) area_fmrd2_visual_pane_g1

0x8a1e,	// (0x00074eac) area_fmrd2_visual_pane_t1

0x8a2e,	// (0x00074ebc) area_fmrd2_visual_pane_t2

0x8a3e,	// (0x00074ecc) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007c376) area_fmrd2_visual_pane_t

0x8a4e,	// (0x00074edc) area_fmrd2_info_pane_g1

0x8a56,	// (0x00074ee4) area_fmrd2_info_pane_t1

0x8a66,	// (0x00074ef4) area_fmrd2_info_pane_t2

0x8a76,	// (0x00074f04) area_fmrd2_info_pane_t3

0x8a86,	// (0x00074f14) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007c37d) area_fmrd2_info_pane_t

0x8a94,	// (0x00074f22) fmrd2_indi_pane_t1

0x8aa4,	// (0x00074f32) fmrd2_indi_pane_t2

0x8ab4,	// (0x00074f42) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007c386) fmrd2_indi_pane_t

0xe407,	// (0x0007a895) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe407,	// (0x0007a895) list_single_fs_bigclock_indicator_pane_g5

0xe4b7,	// (0x0007a945) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4b7,	// (0x0007a945) list_single_fs_bigclock_indicator_pane_t5

0x823b,	// (0x000746c9) aid_cell_bcale_month_pane_ParamLimits

0x823b,	// (0x000746c9) aid_cell_bcale_month_pane

0x8259,	// (0x000746e7) bcale_month_pane_ParamLimits

0x8259,	// (0x000746e7) bcale_month_pane

0x827d,	// (0x0007470b) bcale_preview_pane_ParamLimits

0x827d,	// (0x0007470b) bcale_preview_pane

0xecaf,	// (0x0007b13d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x0007b15c) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x0007b15c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007c308) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007c308) list_single_fs_bigclock_pane_t

0xef05,	// (0x0007b393) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007c371) main_fs_bigclock_unlock_btn_pane_g

0x8ac4,	// (0x00074f52) aid_dia3_key_size_ParamLimits

0x8ac4,	// (0x00074f52) aid_dia3_key_size

0x8ad3,	// (0x00074f61) aid_dia3_listrow_size_ParamLimits

0x8ad3,	// (0x00074f61) aid_dia3_listrow_size

0x8ae8,	// (0x00074f76) dia3_keypad_fun_pane_ParamLimits

0x8ae8,	// (0x00074f76) dia3_keypad_fun_pane

0x8b04,	// (0x00074f92) dia3_keypad_num_pane_ParamLimits

0x8b04,	// (0x00074f92) dia3_keypad_num_pane

0x8b1f,	// (0x00074fad) dia3_listscroll_pane_ParamLimits

0x8b1f,	// (0x00074fad) dia3_listscroll_pane

0x8b32,	// (0x00074fc0) dia3_numentry_pane_ParamLimits

0x8b32,	// (0x00074fc0) dia3_numentry_pane

0xef1b,	// (0x0007b3a9) dia3_list_pane

0xef26,	// (0x0007b3b4) scroll_pane_cp12

0x9085,	// (0x00075513) bg_dia3_numentry_pane

0x8b46,	// (0x00074fd4) dia3_numentry_pane_t1

0x8b55,	// (0x00074fe3) cell_dia3_key_num_pane

0x8b5d,	// (0x00074feb) cell_dia3_key0_fun_pane_ParamLimits

0x8b5d,	// (0x00074feb) cell_dia3_key0_fun_pane

0x8b71,	// (0x00074fff) cell_dia3_key1_fun_pane_ParamLimits

0x8b71,	// (0x00074fff) cell_dia3_key1_fun_pane

0x8b89,	// (0x00075017) dia3_listrow_pane

0xe0fe,	// (0x0007a58c) bg_dia3_numentry_pane_g1

0x9085,	// (0x00075513) bg_button_pane_cp21

0xef31,	// (0x0007b3bf) cell_dia3_key_num_pane_t1

0xef3f,	// (0x0007b3cd) cell_dia3_key_num_pane_t2

0xef4e,	// (0x0007b3dc) cell_dia3_key_num_pane_t3

0xef5d,	// (0x0007b3eb) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007c38d) cell_dia3_key_num_pane_t

0x9085,	// (0x00075513) bg_button_pane_cp19

0x8b9b,	// (0x00075029) cell_dia3_key0_fun_pane_g1

0x9085,	// (0x00075513) bg_button_pane_cp20

0x8ba3,	// (0x00075031) cell_dia3_key1_fun_pane_g1

0x8bab,	// (0x00075039) area_left_week_number_pane

0x8bb7,	// (0x00075045) area_top_day_name_pane

0x8bca,	// (0x00075058) frame_month_view_pane

0xef6c,	// (0x0007b3fa) grid_month_view_pane

0x8bdd,	// (0x0007506b) cell_top_day_name_pane_ParamLimits

0x8bdd,	// (0x0007506b) cell_top_day_name_pane

0x8c0a,	// (0x00075098) cell_area_left_week_number_pane_ParamLimits

0x8c0a,	// (0x00075098) cell_area_left_week_number_pane

0x8c1e,	// (0x000750ac) cell_month_view_pane_ParamLimits

0x8c1e,	// (0x000750ac) cell_month_view_pane

0xef7a,	// (0x0007b408) frm_month_g1

0x8c4b,	// (0x000750d9) frm_month_g2

0x8c5e,	// (0x000750ec) frm_month_g3

0x8c71,	// (0x000750ff) frm_month_g4

0x8c84,	// (0x00075112) frm_month_g5

0x8c97,	// (0x00075125) frm_month_g6

0x8caa,	// (0x00075138) frm_month_g7

0xef87,	// (0x0007b415) frm_month_g8

0x8cbd,	// (0x0007514b) frm_month_g9

0x8ccd,	// (0x0007515b) frm_month_g10

0x8cdd,	// (0x0007516b) frm_month_g11

0x8ced,	// (0x0007517b) frm_month_g12

0x8cff,	// (0x0007518d) frm_month_g13

0x8d11,	// (0x0007519f) frm_month_g14

0x8d25,	// (0x000751b3) frm_month_g15

0x8d39,	// (0x000751c7) frm_month_g16

0x000f,

0xff08,	// (0x0007c396) frm_month_g

0xef94,	// (0x0007b422) cell_top_day_name_pane_t1

0x8d4d,	// (0x000751db) cell_area_left_week_number_pane_g1

0x8d59,	// (0x000751e7) cell_area_left_week_number_pane_t1

0xce17,	// (0x000792a5) cell_month_view_pane_g1

0x8d6c,	// (0x000751fa) cell_month_view_pane_t1

0x9085,	// (0x00075513) main_fps_pane

0xe6c2,	// (0x0007ab50) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c2,	// (0x0007ab50) cmail_ddmenu_btn02_pane_cp1

0xe6de,	// (0x0007ab6c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6de,	// (0x0007ab6c) cmail_ddmenu_btn02_pane_cp2

0x849f,	// (0x0007492d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x849f,	// (0x0007492d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007c2bb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007c2bb) cmail_ddmenu_btn02_pane_g

0x84bd,	// (0x0007494b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x84bd,	// (0x0007494b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007c2c0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007c2c0) cmail_ddmenu_btn02_pane_t

0x8d7f,	// (0x0007520d) fps_text_pane_ParamLimits

0x8d7f,	// (0x0007520d) fps_text_pane

0x8d96,	// (0x00075224) main_fps_pane_g1_ParamLimits

0x8d96,	// (0x00075224) main_fps_pane_g1

0x8db0,	// (0x0007523e) wait_bar_pane_cp010_ParamLimits

0x8db0,	// (0x0007523e) wait_bar_pane_cp010

0x8dc1,	// (0x0007524f) fps_text_pane_t1_ParamLimits

0x8dc1,	// (0x0007524f) fps_text_pane_t1

0xd7e6,	// (0x00079c74) cam4_image_uncrop_pane_g1

0xd7ef,	// (0x00079c7d) cam4_image_uncrop_pane_g2

0x5898,	// (0x00071d26) cam4_image_uncrop_pane_g3

0x58a1,	// (0x00071d2f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007bd7c) cam4_image_uncrop_pane_g

0x8b89,	// (0x00075017) dia3_listrow_pane_ParamLimits

0x9085,	// (0x00075513) main_phob2_pane

0x8018,	// (0x000744a6) cell_tport_appsw_pane_cp02_ParamLimits

0x8018,	// (0x000744a6) cell_tport_appsw_pane_cp02

0x802c,	// (0x000744ba) cell_tport_appsw_pane_cp03_ParamLimits

0x802c,	// (0x000744ba) cell_tport_appsw_pane_cp03

0x9085,	// (0x00075513) phob2_contact_card_pane

0x9085,	// (0x00075513) phob2_listscroll_pane

0xefa7,	// (0x0007b435) phob2_list_pane

0xefaf,	// (0x0007b43d) scroll_pane_cp034

0x8dd9,	// (0x00075267) phob2_cc_data_pane_ParamLimits

0x8dd9,	// (0x00075267) phob2_cc_data_pane

0x8df8,	// (0x00075286) phob2_cc_listscroll_pane_ParamLimits

0x8df8,	// (0x00075286) phob2_cc_listscroll_pane

0x8e16,	// (0x000752a4) list_double_large_graphic_phob2_pane_ParamLimits

0x8e16,	// (0x000752a4) list_double_large_graphic_phob2_pane

0x8e29,	// (0x000752b7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8e29,	// (0x000752b7) list_double_large_graphic_phob2_pane_g1

0x8e3f,	// (0x000752cd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8e3f,	// (0x000752cd) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007c3b7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007c3b7) list_double_large_graphic_phob2_pane_g

0x8e4b,	// (0x000752d9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8e4b,	// (0x000752d9) list_double_large_graphic_phob2_pane_t1

0x8e61,	// (0x000752ef) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8e61,	// (0x000752ef) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007c3bc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007c3bc) list_double_large_graphic_phob2_pane_t

0x9085,	// (0x00075513) list_highlight_pane_cp024

0x8e76,	// (0x00075304) phob2_cc_button_pane

0x8e7e,	// (0x0007530c) phob2_cc_data_pane_g1_ParamLimits

0x8e7e,	// (0x0007530c) phob2_cc_data_pane_g1

0x8e93,	// (0x00075321) phob2_cc_data_pane_g2_ParamLimits

0x8e93,	// (0x00075321) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007c3c1) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007c3c1) phob2_cc_data_pane_g

0x8ea3,	// (0x00075331) phob2_cc_data_pane_t1_ParamLimits

0x8ea3,	// (0x00075331) phob2_cc_data_pane_t1

0x8ebb,	// (0x00075349) phob2_cc_data_pane_t2_ParamLimits

0x8ebb,	// (0x00075349) phob2_cc_data_pane_t2

0x8ed3,	// (0x00075361) phob2_cc_data_pane_t3_ParamLimits

0x8ed3,	// (0x00075361) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007c3c6) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007c3c6) phob2_cc_data_pane_t

0xefb7,	// (0x0007b445) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x0007b445) phob2_cc_list_pane

0xd913,	// (0x00079da1) scroll_pane_cp035_ParamLimits

0xd913,	// (0x00079da1) scroll_pane_cp035

0xa247,	// (0x000766d5) bg_button_pane_cp033

0xefc3,	// (0x0007b451) phob2_cc_button_pane_g1

0xefcf,	// (0x0007b45d) phob2_cc_button_pane_t1

0xefe4,	// (0x0007b472) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007c3cd) phob2_cc_button_pane_t

0x8eeb,	// (0x00075379) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8eeb,	// (0x00075379) list_double_large_graphic_phob2_cc_pane

0x8efe,	// (0x0007538c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8efe,	// (0x0007538c) list_double_large_graphic_phob2_cc_pane_g1

0x8f0a,	// (0x00075398) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8f0a,	// (0x00075398) list_double_large_graphic_phob2_cc_pane_g2

0x8f16,	// (0x000753a4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8f16,	// (0x000753a4) list_double_large_graphic_phob2_cc_pane_g3

0x8f22,	// (0x000753b0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8f22,	// (0x000753b0) list_double_large_graphic_phob2_cc_pane_g4

0x8f2e,	// (0x000753bc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8f2e,	// (0x000753bc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007c3d2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007c3d2) list_double_large_graphic_phob2_cc_pane_g

0x8f3a,	// (0x000753c8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8f3a,	// (0x000753c8) list_double_large_graphic_phob2_cc_pane_t1

0x8f63,	// (0x000753f1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8f63,	// (0x000753f1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007c3dd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007c3dd) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x0007b484) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x0007b484) list_highlight_pane_cp025

0xa247,	// (0x000766d5) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x0007b451) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x0007b45d) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x0007b472) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007c3cd) phob2_cc_button_pane_t_ParamLimits

0x0302,	// (0x0006c790) popup_wgtman_window

0xd734,	// (0x00079bc2) scroll_pane_cp038

0x88d5,	// (0x00074d63) wgtman_btn_pane_cp_01_ParamLimits

0x88d5,	// (0x00074d63) wgtman_btn_pane_cp_01

0xf004,	// (0x0007b492) wgtman_content_pane

0xf00d,	// (0x0007b49b) wgtman_heading_pane

0x9085,	// (0x00075513) bg_heading_pane_cp02

0xf016,	// (0x0007b4a4) wgtman_heading_pane_g1

0xf01e,	// (0x0007b4ac) wgtman_heading_pane_t1

0xf02c,	// (0x0007b4ba) scroll_pane_cp036

0xf034,	// (0x0007b4c2) wgtman_list_pane

0xe5a2,	// (0x0007aa30) wgtman_list_pane_t1_ParamLimits

0xe5a2,	// (0x0007aa30) wgtman_list_pane_t1

0x9a82,	// (0x00075f10) cam4_grid_pane

0x654c,	// (0x000729da) bg_button_pane_cp015_ParamLimits

0x6560,	// (0x000729ee) bg_button_pane_cp016_ParamLimits

0x6573,	// (0x00072a01) bg_button_pane_cp017_ParamLimits

0x65cb,	// (0x00072a59) popup_vitu2_query_window_g3_ParamLimits

0x65cb,	// (0x00072a59) popup_vitu2_query_window_g3

0x6688,	// (0x00072b16) popup_vitu2_query_window_t6_ParamLimits

0x6688,	// (0x00072b16) popup_vitu2_query_window_t6

0x66b3,	// (0x00072b41) popup_vitu2_query_window_t7_ParamLimits

0x66b3,	// (0x00072b41) popup_vitu2_query_window_t7

0xd7e6,	// (0x00079c74) cam4_grid_pane_g1

0xd7ef,	// (0x00079c7d) cam4_grid_pane_g2

0xf03c,	// (0x0007b4ca) cam4_grid_pane_g3

0xf045,	// (0x0007b4d3) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007c3e2) cam4_grid_pane_g

0x12b2,	// (0x0006d740) aid_placing_vt_slider_lsc_ParamLimits

0x15af,	// (0x0006da3d) vidtel_button_pane_ParamLimits

0x15af,	// (0x0006da3d) vidtel_button_pane

0xf050,	// (0x0007b4de) bg_button_pane_cp034

0x8f8c,	// (0x0007541a) vidtel_button_pane_g1

0xf05a,	// (0x0007b4e8) vidtel_button_pane_t1

0xd85a,	// (0x00079ce8) aid_size_vtel_slider_touch

0xd913,	// (0x00079da1) scroll_pane_cp039

0xe13c,	// (0x0007a5ca) ncim_query_button_pane_cp01_ParamLimits

0xe15b,	// (0x0007a5e9) ncimui_query_pane_g1_ParamLimits

0xa247,	// (0x000766d5) input_focus_pane_cp012_ParamLimits

0xe180,	// (0x0007a60e) ncim_query_entry_pane_t1_ParamLimits

0xd913,	// (0x00079da1) scroll_pane_cp039_ParamLimits

0xb216,	// (0x000776a4) navi_pane_bcale_mc_g1

0xb21e,	// (0x000776ac) navi_pane_bcale_mc_t1

0xe727,	// (0x0007abb5) main_sp_fs_email_pane_g1

0xe733,	// (0x0007abc1) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007c173) main_sp_fs_email_pane_g

0xe984,	// (0x0007ae12) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe984,	// (0x0007ae12) list_single_cale_mrui_row_pane_g3

0x84e5,	// (0x00074973) list_single_recal_day_pane_g5_event_pane

0xa803,	// (0x00076c91) list_single_recal_day_pane_g7

0xf068,	// (0x0007b4f6) list_recal_day_event_pane_cp01

0xf071,	// (0x0007b4ff) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0007b507) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0007b50f) list_recal_vselct_pane_cp01

0xd87c,	// (0x00079d0a) list_recal_day_event_pane_cp01_g1

0xa838,	// (0x00076cc6) list_recal_day_event_pane_cp01_t1

0xa80b,	// (0x00076c99) list_single_recal_day_pane_t1_ParamLimits

0xa81d,	// (0x00076cab) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007c2d0) list_single_recal_day_pane_t_ParamLimits

0x9eca,	// (0x00076358) bg_notes_pane_ParamLimits

0x9f8c,	// (0x0007641a) list_notes_pane_ParamLimits

0x0636,	// (0x0006cac4) scroll_pane_cp06_ParamLimits

0x9fae,	// (0x0007643c) main_notes_pane_ParamLimits

0x9085,	// (0x00075513) main_welc_pane

0x8f94,	// (0x00075422) main_welc_body_pane_ParamLimits

0x8f94,	// (0x00075422) main_welc_body_pane

0x8fb1,	// (0x0007543f) main_welc_opti_pane_ParamLimits

0x8fb1,	// (0x0007543f) main_welc_opti_pane

0x8ffa,	// (0x00075488) main_welc_pane_t1_ParamLimits

0x8ffa,	// (0x00075488) main_welc_pane_t1

0x901c,	// (0x000754aa) main_welc_body_row_pane_ParamLimits

0x901c,	// (0x000754aa) main_welc_body_row_pane

0xe39a,	// (0x0007a828) main_welc_opti_row_pane_ParamLimits

0xe39a,	// (0x0007a828) main_welc_opti_row_pane

0xf08b,	// (0x0007b519) main_welc_opti_row_pane_g1

0x9032,	// (0x000754c0) main_welc_opti_row_pane_t1

0xf093,	// (0x0007b521) main_welc_body_row_pane_t1

0xed85,	// (0x0007b213) popup_notif_wgt_heading_pane

0xed9f,	// (0x0007b22d) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x0007b23a) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x0007b246) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x0007b25a) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007c337) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x0007b267) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x0007b27d) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x0007b28f) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007c33e) list_notif_wgt_row_pane_t_ParamLimits

0x896f,	// (0x00074dfd) listrow_wgtman_pane_g1_ParamLimits

0x897c,	// (0x00074e0a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007c367) listrow_wgtman_pane_g_ParamLimits

0x899a,	// (0x00074e28) listrow_wgtman_pane_t1_ParamLimits

0x89b2,	// (0x00074e40) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007c36c) listrow_wgtman_pane_t_ParamLimits

0x89d8,	// (0x00074e66) wait_bar_pane_cp09_ParamLimits

0x9085,	// (0x00075513) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0007b530) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0007b538) popup_notif_wgt_heading_pane_t1

0x9085,	// (0x00075513) main_vids_pane

0x9085,	// (0x00075513) vids_listscroll_pane

0x9041,	// (0x000754cf) scroll_pane_cp040

0x9085,	// (0x00075513) vids_list_pane

0x904c,	// (0x000754da) vids_list_double_pane_ParamLimits

0x904c,	// (0x000754da) vids_list_double_pane

0x905d,	// (0x000754eb) vids_list_double_pane_g1

0x9066,	// (0x000754f4) vids_list_double_pane_t1

0x9075,	// (0x00075503) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007c3f0) vids_list_double_pane_t

0x90ed,	// (0x0007557b) main_ncimui_pane_ParamLimits

0x7294,	// (0x00073722) main_ncimui_pane_g1_ParamLimits

0x72a0,	// (0x0007372e) main_ncimui_pane_g2_ParamLimits

0x72a0,	// (0x0007372e) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007c078) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007c078) main_ncimui_pane_g

0x8fd0,	// (0x0007545e) main_welc_pane_g1_ParamLimits

0x8fd0,	// (0x0007545e) main_welc_pane_g1

0x8fe5,	// (0x00075473) main_welc_pane_g2_ParamLimits

0x8fe5,	// (0x00075473) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007c3eb) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007c3eb) main_welc_pane_g

0x9eca,	// (0x00076358) listscroll_mce_pane_ParamLimits

0xb36b,	// (0x000777f9) wait_bar_pane_cp10

0xc795,	// (0x00078c23) main_cale_day_pane_ParamLimits

0xc795,	// (0x00078c23) main_cale_week_pane_ParamLimits

0x9eca,	// (0x00076358) main_messa_pane_ParamLimits

0x4ba5,	// (0x00071033) main_clock2_btn_pane_ParamLimits

0x4ba5,	// (0x00071033) main_clock2_btn_pane

0xcf9f,	// (0x0007942d) main_clock2_btn_pane_cp01_ParamLimits

0xcf9f,	// (0x0007942d) main_clock2_btn_pane_cp01

0xe955,	// (0x0007ade3) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0007b2d3) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007c345) main_cf0_pane_g

0x8bab,	// (0x00075039) area_left_week_number_pane_ParamLimits

0x8bb7,	// (0x00075045) area_top_day_name_pane_ParamLimits

0x8bca,	// (0x00075058) frame_month_view_pane_ParamLimits

0xef6c,	// (0x0007b3fa) grid_month_view_pane_ParamLimits

0xef7a,	// (0x0007b408) frm_month_g1_ParamLimits

0x8c4b,	// (0x000750d9) frm_month_g2_ParamLimits

0x8c5e,	// (0x000750ec) frm_month_g3_ParamLimits

0x8c71,	// (0x000750ff) frm_month_g4_ParamLimits

0x8c84,	// (0x00075112) frm_month_g5_ParamLimits

0x8c97,	// (0x00075125) frm_month_g6_ParamLimits

0x8caa,	// (0x00075138) frm_month_g7_ParamLimits

0xef87,	// (0x0007b415) frm_month_g8_ParamLimits

0x8cbd,	// (0x0007514b) frm_month_g9_ParamLimits

0x8ccd,	// (0x0007515b) frm_month_g10_ParamLimits

0x8cdd,	// (0x0007516b) frm_month_g11_ParamLimits

0x8ced,	// (0x0007517b) frm_month_g12_ParamLimits

0x8cff,	// (0x0007518d) frm_month_g13_ParamLimits

0x8d11,	// (0x0007519f) frm_month_g14_ParamLimits

0x8d25,	// (0x000751b3) frm_month_g15_ParamLimits

0x8d39,	// (0x000751c7) frm_month_g16_ParamLimits

0xff08,	// (0x0007c396) frm_month_g_ParamLimits

0xef94,	// (0x0007b422) cell_top_day_name_pane_t1_ParamLimits

0x8d4d,	// (0x000751db) cell_area_left_week_number_pane_g1_ParamLimits

0x8d59,	// (0x000751e7) cell_area_left_week_number_pane_t1_ParamLimits

0xce17,	// (0x000792a5) cell_month_view_pane_g1_ParamLimits

0x8d6c,	// (0x000751fa) cell_month_view_pane_t1_ParamLimits

0x9ec2,	// (0x00076350) main_clock2_btn_pane_g1

0xf0b8,	// (0x0007b546) main_clock2_btn_pane_t1

0xa247,	// (0x000766d5) listscroll_cmail_pane_ParamLimits

0xe727,	// (0x0007abb5) main_sp_fs_email_pane_g1_ParamLimits

0xe733,	// (0x0007abc1) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007c173) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x0007af81) list_recal_day_pane_ParamLimits

0xeb04,	// (0x0007af92) mian_recal_day_pane_t1

0x7cfe,	// (0x0007418c) list_single_dyc_row_text_pane_t4_ParamLimits

0x7cfe,	// (0x0007418c) list_single_dyc_row_text_pane_t4

0x7d47,	// (0x000741d5) list_single_dyc_row_text_pane_t5_ParamLimits

0x7d47,	// (0x000741d5) list_single_dyc_row_text_pane_t5

0xa558,	// (0x000769e6) list_single_dyc_row_text_pane_t6_ParamLimits

0xa558,	// (0x000769e6) list_single_dyc_row_text_pane_t6

0xacfa,	// (0x00077188) aid_mgn_list_cale_time_pane

0x90ed,	// (0x0007557b) main_gallery2_pane_ParamLimits

0xcfb5,	// (0x00079443) main_clock2_pane_cp01_t1

0xcfc3,	// (0x00079451) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007bc52) main_clock2_pane_cp01_t

0x09e1,	// (0x0006ce6f) cale_week_scroll_pane_g16_ParamLimits

0x09e1,	// (0x0006ce6f) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
