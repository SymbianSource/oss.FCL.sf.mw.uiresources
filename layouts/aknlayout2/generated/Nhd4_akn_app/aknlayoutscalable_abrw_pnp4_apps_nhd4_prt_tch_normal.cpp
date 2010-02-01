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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00016cb2 };

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
0x80a2,	// (0x0001ed54) Screen

0x80ae,	// (0x0001ed60) application_window

0x80ee,	// (0x0001eda0) area_bottom_pane_ParamLimits

0x80ee,	// (0x0001eda0) area_bottom_pane

0x8123,	// (0x0001edd5) area_top_pane_ParamLimits

0x8123,	// (0x0001edd5) area_top_pane

0x0239,	// (0x00016eeb) call_video_uplink_pane_ParamLimits

0x0239,	// (0x00016eeb) call_video_uplink_pane

0x81b0,	// (0x0001ee62) main_pane_ParamLimits

0x81b0,	// (0x0001ee62) main_pane

0x2c82,	// (0x00019934) context_pane

0xaef9,	// (0x00021bab) navi_pane

0xaf19,	// (0x00021bcb) popup_cale_events_window_ParamLimits

0xaf19,	// (0x00021bcb) popup_cale_events_window

0x2c95,	// (0x00019947) popup_mup_playback_window

0xaf31,	// (0x00021be3) signal_pane

0x0a02,	// (0x000176b4) main_browser_pane

0x1796,	// (0x00018448) main_burst_pane

0xadcf,	// (0x00021a81) main_calc_pane

0x1796,	// (0x00018448) main_cale_day_pane

0x0a02,	// (0x000176b4) main_cale_month_pane

0x1796,	// (0x00018448) main_cale_week_pane

0x1796,	// (0x00018448) main_call_pane

0x0676,	// (0x00017328) main_call_poc_pane

0x1796,	// (0x00018448) main_camera_pane

0x1796,	// (0x00018448) main_chi_dic_pane

0x1625,	// (0x000182d7) main_clock_pane

0x0676,	// (0x00017328) main_fmradio_pane

0x1796,	// (0x00018448) main_graph_messa_pane

0x0676,	// (0x00017328) main_help_pane

0x0a02,	// (0x000176b4) main_im_pane

0x08d1,	// (0x00017583) main_image_pane_ParamLimits

0x08d1,	// (0x00017583) main_image_pane

0x0676,	// (0x00017328) main_location2_pane

0x1796,	// (0x00018448) main_location_pane

0x0676,	// (0x00017328) main_messa_pane

0x0676,	// (0x00017328) main_mp2_pane

0x1796,	// (0x00018448) main_mp_pane

0x0676,	// (0x00017328) main_msg_pane

0x0676,	// (0x00017328) main_mup_eq_pane

0x0676,	// (0x00017328) main_mup_pane

0x1796,	// (0x00018448) main_notes_pane

0x0676,	// (0x00017328) main_pec_pane

0x0676,	// (0x00017328) main_phob_pane

0x0676,	// (0x00017328) main_pinb_pane

0x0676,	// (0x00017328) main_postcard_pane

0x0676,	// (0x00017328) main_qdial_pane

0x1796,	// (0x00018448) main_skin_pane

0x0676,	// (0x00017328) main_smil2_pane

0x1796,	// (0x00018448) main_smil_pane

0x1796,	// (0x00018448) main_video_pane

0x1796,	// (0x00018448) main_video_tele_pane

0x08d1,	// (0x00017583) main_viewer_pane_ParamLimits

0x08d1,	// (0x00017583) main_viewer_pane

0x1796,	// (0x00018448) main_vorec_pane

0xae05,	// (0x00021ab7) popup_blid_sat_info_window_ParamLimits

0xae05,	// (0x00021ab7) popup_blid_sat_info_window

0xae1b,	// (0x00021acd) popup_dyc_status_message_window_ParamLimits

0xae1b,	// (0x00021acd) popup_dyc_status_message_window

0xae29,	// (0x00021adb) popup_grid_large_graphic_window_ParamLimits

0xae29,	// (0x00021adb) popup_grid_large_graphic_window

0xae9d,	// (0x00021b4f) popup_loc_request_window_ParamLimits

0xae9d,	// (0x00021b4f) popup_loc_request_window

0xaed1,	// (0x00021b83) popup_wml_address_window_ParamLimits

0xaed1,	// (0x00021b83) popup_wml_address_window

0xaca7,	// (0x00021959) call_muted_g1

0xa966,	// (0x00021618) popup_call_audio_conf_window_ParamLimits

0xa966,	// (0x00021618) popup_call_audio_conf_window

0xacb7,	// (0x00021969) popup_call_audio_first_window_ParamLimits

0xacb7,	// (0x00021969) popup_call_audio_first_window

0xacf7,	// (0x000219a9) popup_call_audio_in_window_ParamLimits

0xacf7,	// (0x000219a9) popup_call_audio_in_window

0xad1b,	// (0x000219cd) popup_call_audio_out_window_ParamLimits

0xad1b,	// (0x000219cd) popup_call_audio_out_window

0xad3d,	// (0x000219ef) popup_call_audio_second_window_ParamLimits

0xad3d,	// (0x000219ef) popup_call_audio_second_window

0xad6d,	// (0x00021a1f) popup_call_audio_wait_window_ParamLimits

0xad6d,	// (0x00021a1f) popup_call_audio_wait_window

0xad8e,	// (0x00021a40) popup_number_entry_window_ParamLimits

0xad8e,	// (0x00021a40) popup_number_entry_window

0x0265,	// (0x00016f17) bg_popup_call_pane_cp05_ParamLimits

0x0265,	// (0x00016f17) bg_popup_call_pane_cp05

0x0285,	// (0x00016f37) popup_number_entry_window_t1

0x0298,	// (0x00016f4a) popup_number_entry_window_t2

0x02aa,	// (0x00016f5c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00025d9e) popup_number_entry_window_t

0x02bc,	// (0x00016f6e) text_title_cp2

0x02cf,	// (0x00016f81) bg_popup_call_pane_cp_ParamLimits

0x02cf,	// (0x00016f81) bg_popup_call_pane_cp

0x02dd,	// (0x00016f8f) call_thumbnail_pane

0x02e5,	// (0x00016f97) popup_call_audio_in_window_g1_ParamLimits

0x02e5,	// (0x00016f97) popup_call_audio_in_window_g1

0x02f1,	// (0x00016fa3) popup_call_audio_in_window_g2_ParamLimits

0x02f1,	// (0x00016fa3) popup_call_audio_in_window_g2

0x02fd,	// (0x00016faf) popup_call_audio_in_window_g3_ParamLimits

0x02fd,	// (0x00016faf) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00025da7) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00025da7) popup_call_audio_in_window_g

0x0309,	// (0x00016fbb) popup_call_audio_in_window_t1_ParamLimits

0x0309,	// (0x00016fbb) popup_call_audio_in_window_t1

0x0324,	// (0x00016fd6) popup_call_audio_in_window_t2_ParamLimits

0x0324,	// (0x00016fd6) popup_call_audio_in_window_t2

0x033f,	// (0x00016ff1) popup_call_audio_in_window_t3_ParamLimits

0x033f,	// (0x00016ff1) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00025dae) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00025dae) popup_call_audio_in_window_t

0x02cf,	// (0x00016f81) bg_popup_call_pane_cp01_ParamLimits

0x02cf,	// (0x00016f81) bg_popup_call_pane_cp01

0x02dd,	// (0x00016f8f) call_thumbnail_pane_cp02

0x0352,	// (0x00017004) call_type_pane_cp022

0x035a,	// (0x0001700c) popup_call_audio_out_window_g1_ParamLimits

0x035a,	// (0x0001700c) popup_call_audio_out_window_g1

0x036c,	// (0x0001701e) popup_call_audio_out_window_g2_ParamLimits

0x036c,	// (0x0001701e) popup_call_audio_out_window_g2

0x0378,	// (0x0001702a) popup_call_audio_out_window_g3_ParamLimits

0x0378,	// (0x0001702a) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00025db5) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00025db5) popup_call_audio_out_window_g

0x038a,	// (0x0001703c) popup_call_audio_out_window_t1_ParamLimits

0x038a,	// (0x0001703c) popup_call_audio_out_window_t1

0x03a2,	// (0x00017054) popup_call_audio_out_window_t2_ParamLimits

0x03a2,	// (0x00017054) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00025dbc) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00025dbc) popup_call_audio_out_window_t

0x03b7,	// (0x00017069) bg_popup_call_pane_ParamLimits

0x03b7,	// (0x00017069) bg_popup_call_pane

0x8397,	// (0x0001f049) call_thumbnail_pane_cp_ParamLimits

0x8397,	// (0x0001f049) call_thumbnail_pane_cp

0x043b,	// (0x000170ed) call_type_pane_cp01_ParamLimits

0x043b,	// (0x000170ed) call_type_pane_cp01

0x047f,	// (0x00017131) popup_call_audio_first_window_g1_ParamLimits

0x047f,	// (0x00017131) popup_call_audio_first_window_g1

0x04cb,	// (0x0001717d) popup_call_audio_first_window_g2_ParamLimits

0x04cb,	// (0x0001717d) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00025dc1) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00025dc1) popup_call_audio_first_window_g

0x050f,	// (0x000171c1) popup_call_audio_first_window_t1_ParamLimits

0x050f,	// (0x000171c1) popup_call_audio_first_window_t1

0x05bb,	// (0x0001726d) popup_call_audio_first_window_t4_ParamLimits

0x05bb,	// (0x0001726d) popup_call_audio_first_window_t4

0x0647,	// (0x000172f9) popup_call_audio_first_window_t5_ParamLimits

0x0647,	// (0x000172f9) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00025dc6) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00025dc6) popup_call_audio_first_window_t

0x0676,	// (0x00017328) bg_popup_call_pane_cp02

0x0680,	// (0x00017332) call_type_pane_cp023

0x0688,	// (0x0001733a) popup_call_audio_wait_window_g1

0x0690,	// (0x00017342) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025dcd) popup_call_audio_wait_window_g

0x0698,	// (0x0001734a) popup_call_audio_wait_window_t3

0x06a6,	// (0x00017358) bg_popup_call_pane_cp03_ParamLimits

0x06a6,	// (0x00017358) bg_popup_call_pane_cp03

0x0706,	// (0x000173b8) call_thumbnail_pane_cp011_ParamLimits

0x0706,	// (0x000173b8) call_thumbnail_pane_cp011

0x0712,	// (0x000173c4) call_type_pane_cp034_ParamLimits

0x0712,	// (0x000173c4) call_type_pane_cp034

0x074e,	// (0x00017400) popup_call_audio_second_window_g1_ParamLimits

0x074e,	// (0x00017400) popup_call_audio_second_window_g1

0x078a,	// (0x0001743c) popup_call_audio_second_window_g2_ParamLimits

0x078a,	// (0x0001743c) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00025dd2) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00025dd2) popup_call_audio_second_window_g

0x07c6,	// (0x00017478) popup_call_audio_second_window_t1_ParamLimits

0x07c6,	// (0x00017478) popup_call_audio_second_window_t1

0x0847,	// (0x000174f9) popup_call_audio_second_window_t2_ParamLimits

0x0847,	// (0x000174f9) popup_call_audio_second_window_t2

0x087d,	// (0x0001752f) popup_call_audio_second_window_t3_ParamLimits

0x087d,	// (0x0001752f) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00025dd7) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00025dd7) popup_call_audio_second_window_t

0x0676,	// (0x00017328) bg_popup_call_pane_cp04

0x08b3,	// (0x00017565) list_conf_pane

0x08bb,	// (0x0001756d) popup_call_audio_conf_window_t1

0x08c9,	// (0x0001757b) call_thumbnail_pane_g1

0x08d1,	// (0x00017583) bg_pinb_pane_ParamLimits

0x08d1,	// (0x00017583) bg_pinb_pane

0x08df,	// (0x00017591) find_pinb_pane

0x08e8,	// (0x0001759a) listscroll_pinb_pane_ParamLimits

0x08e8,	// (0x0001759a) listscroll_pinb_pane

0x08f7,	// (0x000175a9) pinb_bg_pane_g1

0x83bb,	// (0x0001f06d) pinb_bg_pane_g2

0x83c7,	// (0x0001f079) pinb_bg_pane_g3

0x83d3,	// (0x0001f085) pinb_bg_pane_g4

0x83df,	// (0x0001f091) pinb_bg_pane_g5

0x83eb,	// (0x0001f09d) pinb_bg_pane_g6

0x83f6,	// (0x0001f0a8) pinb_bg_pane_g7

0x8401,	// (0x0001f0b3) pinb_bg_pane_g8

0x840c,	// (0x0001f0be) pinb_bg_pane_g9

0x8416,	// (0x0001f0c8) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00025dde) pinb_bg_pane_g

0x842b,	// (0x0001f0dd) grid_pinb_pane

0x8436,	// (0x0001f0e8) list_pinb_pane

0x8441,	// (0x0001f0f3) scroll_pane_cp01_ParamLimits

0x8441,	// (0x0001f0f3) scroll_pane_cp01

0x0909,	// (0x000175bb) find_pinb_pane_g1_ParamLimits

0x0909,	// (0x000175bb) find_pinb_pane_g1

0x0921,	// (0x000175d3) find_pinb_pane_t1

0x0933,	// (0x000175e5) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00025df8) find_pinb_pane_t

0x0948,	// (0x000175fa) input_focus_pane_cp01_ParamLimits

0x0948,	// (0x000175fa) input_focus_pane_cp01

0x8453,	// (0x0001f105) cell_pinb_pane_ParamLimits

0x8453,	// (0x0001f105) cell_pinb_pane

0x8481,	// (0x0001f133) cell_pinb_pane_g1_ParamLimits

0x8481,	// (0x0001f133) cell_pinb_pane_g1

0x8496,	// (0x0001f148) cell_pinb_pane_g2_ParamLimits

0x8496,	// (0x0001f148) cell_pinb_pane_g2

0x0954,	// (0x00017606) cell_pinb_pane_g3_ParamLimits

0x0954,	// (0x00017606) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00025dfd) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00025dfd) cell_pinb_pane_g

0x0676,	// (0x00017328) grid_highlight_pane_cp01

0x84a2,	// (0x0001f154) list_pinb_item_pane_ParamLimits

0x84a2,	// (0x0001f154) list_pinb_item_pane

0x0676,	// (0x00017328) list_highlight_pane_cp02

0x0960,	// (0x00017612) list_pinb_item_pane_g1_ParamLimits

0x0960,	// (0x00017612) list_pinb_item_pane_g1

0x096d,	// (0x0001761f) list_pinb_item_pane_g2_ParamLimits

0x096d,	// (0x0001761f) list_pinb_item_pane_g2

0x84cc,	// (0x0001f17e) list_pinb_item_pane_g3_ParamLimits

0x84cc,	// (0x0001f17e) list_pinb_item_pane_g3

0x0979,	// (0x0001762b) list_pinb_item_pane_g4_ParamLimits

0x0979,	// (0x0001762b) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00025e04) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00025e04) list_pinb_item_pane_g

0x0985,	// (0x00017637) list_pinb_item_pane_t1_ParamLimits

0x0985,	// (0x00017637) list_pinb_item_pane_t1

0x6ca3,	// (0x0001d955) calc_display_pane

0x6cc1,	// (0x0001d973) calc_paper_pane

0x6cdd,	// (0x0001d98f) grid_calc_pane

0x0676,	// (0x00017328) bg_list_pane_cp01

0x84dd,	// (0x0001f18f) clock_g1

0x84e5,	// (0x0001f197) clock_g2

0x0001,

0xf15b,	// (0x00025e0d) clock_g

0x84ef,	// (0x0001f1a1) clock_t1_ParamLimits

0x84ef,	// (0x0001f1a1) clock_t1

0x8504,	// (0x0001f1b6) clock_t2_ParamLimits

0x8504,	// (0x0001f1b6) clock_t2

0x8516,	// (0x0001f1c8) clock_t3_ParamLimits

0x8516,	// (0x0001f1c8) clock_t3

0x8528,	// (0x0001f1da) clock_t4_ParamLimits

0x8528,	// (0x0001f1da) clock_t4

0x853a,	// (0x0001f1ec) clock_t5_ParamLimits

0x853a,	// (0x0001f1ec) clock_t5

0x854f,	// (0x0001f201) clock_t6_ParamLimits

0x854f,	// (0x0001f201) clock_t6

0x8561,	// (0x0001f213) clock_t7_ParamLimits

0x8561,	// (0x0001f213) clock_t7

0x8573,	// (0x0001f225) clock_t8_ParamLimits

0x8573,	// (0x0001f225) clock_t8

0x8589,	// (0x0001f23b) clock_t9_ParamLimits

0x8589,	// (0x0001f23b) clock_t9

0x0008,

0xf160,	// (0x00025e12) clock_t_ParamLimits

0xf160,	// (0x00025e12) clock_t

0x09a4,	// (0x00017656) popup_clock_analogue_window_cp02

0x09a4,	// (0x00017656) popup_clock_digital_window_cp01

0x09ac,	// (0x0001765e) listscroll_help_pane

0x0676,	// (0x00017328) phob_pre_status_pane

0x09b6,	// (0x00017668) grid_qdial_pane

0x0676,	// (0x00017328) listscroll_mce_pane

0x09c0,	// (0x00017672) bg_notes_pane

0x09ca,	// (0x0001767c) list_notes_pane

0x859f,	// (0x0001f251) scroll_pane_cp06

0x09d4,	// (0x00017686) bg_calc_paper_pane

0x6d13,	// (0x0001d9c5) list_calc_pane

0x0a02,	// (0x000176b4) bg_calc_display_pane

0x6d2d,	// (0x0001d9df) calc_display_pane_t1

0x6d42,	// (0x0001d9f4) calc_display_pane_t2

0x6d57,	// (0x0001da09) calc_display_pane_t3

0x0002,

0xf173,	// (0x00025e25) calc_display_pane_t

0x6d69,	// (0x0001da1b) cell_calc_pane_ParamLimits

0x6d69,	// (0x0001da1b) cell_calc_pane

0x0a20,	// (0x000176d2) bg_calc_paper_pane_g1

0x0a38,	// (0x000176ea) bg_calc_paper_pane_g2

0x0a2c,	// (0x000176de) bg_calc_paper_pane_g3

0x0a50,	// (0x00017702) bg_calc_paper_pane_g4

0x0a44,	// (0x000176f6) bg_calc_paper_pane_g5

0x85aa,	// (0x0001f25c) bg_calc_paper_pane_g6

0x85bb,	// (0x0001f26d) bg_calc_paper_pane_g7

0x85cc,	// (0x0001f27e) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00025e2c) bg_calc_paper_pane_g

0x85dd,	// (0x0001f28f) calc_bg_paper_pane_g9

0x85ee,	// (0x0001f2a0) list_calc_item_pane_ParamLimits

0x85ee,	// (0x0001f2a0) list_calc_item_pane

0x0a5c,	// (0x0001770e) list_calc_item_pane_g1

0x6d96,	// (0x0001da48) list_calc_item_pane_t1_ParamLimits

0x6d96,	// (0x0001da48) list_calc_item_pane_t1

0x6da8,	// (0x0001da5a) list_calc_item_pane_t2_ParamLimits

0x6da8,	// (0x0001da5a) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00025e3d) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00025e3d) list_calc_item_pane_t

0x0a7b,	// (0x0001772d) cell_calc_pane_g1

0x0a85,	// (0x00017737) grid_highlight_pane_cp02

0x0aba,	// (0x0001776c) bg_calc_display_pane_g1

0x6dd8,	// (0x0001da8a) bg_calc_display_pane_g2

0x0aa7,	// (0x00017759) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00025e47) bg_calc_display_pane_g

0x6de2,	// (0x0001da94) cell_qdial_pane_ParamLimits

0x6de2,	// (0x0001da94) cell_qdial_pane

0x8628,	// (0x0001f2da) cell_qdial_pane_g1_ParamLimits

0x8628,	// (0x0001f2da) cell_qdial_pane_g1

0x8635,	// (0x0001f2e7) cell_qdial_pane_g2_ParamLimits

0x8635,	// (0x0001f2e7) cell_qdial_pane_g2

0x0ac3,	// (0x00017775) cell_qdial_pane_g3_ParamLimits

0x0ac3,	// (0x00017775) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00025e4e) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00025e4e) cell_qdial_pane_g

0x8653,	// (0x0001f305) cell_qdial_pane_t1_ParamLimits

0x8653,	// (0x0001f305) cell_qdial_pane_t1

0x866b,	// (0x0001f31d) cell_qdial_pane_t2_ParamLimits

0x866b,	// (0x0001f31d) cell_qdial_pane_t2

0x867e,	// (0x0001f330) cell_qdial_pane_t3_ParamLimits

0x867e,	// (0x0001f330) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00025e57) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00025e57) cell_qdial_pane_t

0x0676,	// (0x00017328) grid_highlight_pane_cp04

0x0acf,	// (0x00017781) thumbnail_qdial_pane_ParamLimits

0x0acf,	// (0x00017781) thumbnail_qdial_pane

0x0b2b,	// (0x000177dd) list_help_pane

0x0b34,	// (0x000177e6) scroll_pane_cp02

0x8691,	// (0x0001f343) help_list_pane_t1_ParamLimits

0x8691,	// (0x0001f343) help_list_pane_t1

0x6df6,	// (0x0001daa8) bg_notes_pane_g2

0x6dfe,	// (0x0001dab0) bg_notes_pane_g3

0x6e06,	// (0x0001dab8) notes_bg_pane_g1

0x6e0e,	// (0x0001dac0) notes_bg_pane_g4

0x6e16,	// (0x0001dac8) notes_bg_pane_g5

0x6e1e,	// (0x0001dad0) notes_bg_pane_g6

0x6e26,	// (0x0001dad8) notes_bg_pane_g7

0x6e2e,	// (0x0001dae0) notes_bg_pane_g8

0x6e36,	// (0x0001dae8) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00025e75) notes_bg_pane_g

0x86cf,	// (0x0001f381) list_notes_text_pane_ParamLimits

0x86cf,	// (0x0001f381) list_notes_text_pane

0x0b9c,	// (0x0001784e) list_notes_text_pane_g1

0x0ba5,	// (0x00017857) list_notes_text_pane_t1

0x0a02,	// (0x000176b4) listscroll_cale_week_pane

0x871c,	// (0x0001f3ce) bg_cale_heading_pane

0x0bc4,	// (0x00017876) bg_cale_pane_cp01

0x8738,	// (0x0001f3ea) cale_week_corner_pane

0x8749,	// (0x0001f3fb) cale_week_day_heading_pane

0x8765,	// (0x0001f417) cale_week_scroll_pane_g1

0x877e,	// (0x0001f430) cale_week_scroll_pane_g2

0x878f,	// (0x0001f441) cale_week_scroll_pane_g3

0x87a0,	// (0x0001f452) cale_week_scroll_pane_g4

0x87b1,	// (0x0001f463) cale_week_scroll_pane_g5

0x87c2,	// (0x0001f474) cale_week_scroll_pane_g6

0x87d3,	// (0x0001f485) cale_week_scroll_pane_g7

0x87e6,	// (0x0001f498) cale_week_scroll_pane_g8

0x87f9,	// (0x0001f4ab) cale_week_scroll_pane_g9

0x880a,	// (0x0001f4bc) cale_week_scroll_pane_g10

0x881b,	// (0x0001f4cd) cale_week_scroll_pane_g11

0x882c,	// (0x0001f4de) cale_week_scroll_pane_g12

0x8845,	// (0x0001f4f7) cale_week_scroll_pane_g13

0x885e,	// (0x0001f510) cale_week_scroll_pane_g14

0x8877,	// (0x0001f529) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00025e84) cale_week_scroll_pane_g

0x8890,	// (0x0001f542) cale_week_time_pane

0x88a3,	// (0x0001f555) grid_cale_week_pane

0x88c0,	// (0x0001f572) scroll_pane_cp08

0x88da,	// (0x0001f58c) cell_cale_week_pane_ParamLimits

0x88da,	// (0x0001f58c) cell_cale_week_pane

0x892a,	// (0x0001f5dc) cale_week_day_heading_pane_t1

0x893e,	// (0x0001f5f0) cale_week_day_heading_pane_t2

0x8952,	// (0x0001f604) cale_week_day_heading_pane_t3

0x8966,	// (0x0001f618) cale_week_day_heading_pane_t4

0x897a,	// (0x0001f62c) cale_week_day_heading_pane_t5

0x898e,	// (0x0001f640) cale_week_day_heading_pane_t6

0x89a2,	// (0x0001f654) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00025ea3) cale_week_day_heading_pane_t

0x0bef,	// (0x000178a1) bg_cale_side_pane

0x6e3e,	// (0x0001daf0) cale_week_time_pane_t1

0x6e56,	// (0x0001db08) cale_week_time_pane_t2

0x6e6e,	// (0x0001db20) cale_week_time_pane_t3

0x6e86,	// (0x0001db38) cale_week_time_pane_t4

0x6e9e,	// (0x0001db50) cale_week_time_pane_t5

0x6eb6,	// (0x0001db68) cale_week_time_pane_t6

0x6ed6,	// (0x0001db88) cale_week_time_pane_t7

0x6ef6,	// (0x0001dba8) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00025eb2) cale_week_time_pane_t

0x89b6,	// (0x0001f668) cell_cale_week_pane_g2

0x89c7,	// (0x0001f679) cell_cale_week_pane_g3_ParamLimits

0x89c7,	// (0x0001f679) cell_cale_week_pane_g3

0x0bfd,	// (0x000178af) grid_highlight_pane_cp07

0x0c05,	// (0x000178b7) listscroll_gms_pane

0x0c0f,	// (0x000178c1) grid_gms_pane

0x0c18,	// (0x000178ca) listscroll_gms_pane_g1

0x0c20,	// (0x000178d2) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00025ec3) listscroll_gms_pane_g

0x89df,	// (0x0001f691) scroll_pane_cp010

0x89ea,	// (0x0001f69c) cell_gms_pane_ParamLimits

0x89ea,	// (0x0001f69c) cell_gms_pane

0x89fc,	// (0x0001f6ae) cell_gms_pane_g1

0x0c28,	// (0x000178da) cell_gms_pane_g2

0x0b9c,	// (0x0001784e) cell_gms_pane_g3

0x0c30,	// (0x000178e2) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00025ec8) cell_gms_pane_g

0x0c39,	// (0x000178eb) grid_highlight_pane_cp09

0xac4f,	// (0x00021901) phob_pre_status_pane_g1

0xac57,	// (0x00021909) phob_pre_status_pane_g2

0xac5f,	// (0x00021911) phob_pre_status_pane_g3

0xac67,	// (0x00021919) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000262b7) phob_pre_status_pane_g

0xac77,	// (0x00021929) phob_pre_status_pane_t1

0xac87,	// (0x00021939) phob_pre_status_pane_t2

0xac97,	// (0x00021949) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000262c2) phob_pre_status_pane_t

0x0676,	// (0x00017328) bg_list_pane_cp05

0x6f1e,	// (0x0001dbd0) grid_vorec_pane

0x6f26,	// (0x0001dbd8) vorec_t1

0x6f34,	// (0x0001dbe6) vorec_t2

0x6f42,	// (0x0001dbf4) vorec_t3

0x6f50,	// (0x0001dc02) vorec_t4

0x6f5e,	// (0x0001dc10) vorec_t5

0x6f6c,	// (0x0001dc1e) vorec_t6

0x0006,

0xf21f,	// (0x00025ed1) vorec_t

0x6f88,	// (0x0001dc3a) wait_bar_pane_cp01

0x0cbb,	// (0x0001796d) cell_vorec_pane_ParamLimits

0x0cbb,	// (0x0001796d) cell_vorec_pane

0x0cce,	// (0x00017980) cell_vorec_pane_g1

0x0676,	// (0x00017328) grid_highlight_pane_cp05

0x8a14,	// (0x0001f6c6) cams_zoom_pane

0x8a20,	// (0x0001f6d2) image_vga_pane

0x8a2f,	// (0x0001f6e1) main_camera_pane_g1

0x8a3d,	// (0x0001f6ef) main_camera_pane_g2

0x8a4b,	// (0x0001f6fd) main_camera_pane_g3

0x8a57,	// (0x0001f709) main_camera_pane_g4

0x8a63,	// (0x0001f715) main_camera_pane_g5

0x8a6f,	// (0x0001f721) main_camera_pane_g6

0x8a7b,	// (0x0001f72d) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00025ee0) main_camera_pane_g

0x8a87,	// (0x0001f739) main_camera_pane_t1

0x8a99,	// (0x0001f74b) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00025ef1) main_camera_pane_t

0x8aba,	// (0x0001f76c) cams_zoom_pane_cp_ParamLimits

0x8aba,	// (0x0001f76c) cams_zoom_pane_cp

0x8ade,	// (0x0001f790) image_cif_pane_ParamLimits

0x8ade,	// (0x0001f790) image_cif_pane

0x8afc,	// (0x0001f7ae) image_subqcif_pane

0x8b04,	// (0x0001f7b6) main_video_pane_g1_ParamLimits

0x8b04,	// (0x0001f7b6) main_video_pane_g1

0x8b24,	// (0x0001f7d6) main_video_pane_g2_ParamLimits

0x8b24,	// (0x0001f7d6) main_video_pane_g2

0x8b56,	// (0x0001f808) main_video_pane_g3_ParamLimits

0x8b56,	// (0x0001f808) main_video_pane_g3

0x8b81,	// (0x0001f833) main_video_pane_g4_ParamLimits

0x8b81,	// (0x0001f833) main_video_pane_g4

0x8bac,	// (0x0001f85e) main_video_pane_g5_ParamLimits

0x8bac,	// (0x0001f85e) main_video_pane_g5

0x0ce4,	// (0x00017996) main_video_pane_g6_ParamLimits

0x0ce4,	// (0x00017996) main_video_pane_g6

0x0006,

0xf244,	// (0x00025ef6) main_video_pane_g_ParamLimits

0xf244,	// (0x00025ef6) main_video_pane_g

0x8bd0,	// (0x0001f882) main_video_pane_t1_ParamLimits

0x8bd0,	// (0x0001f882) main_video_pane_t1

0x0cfe,	// (0x000179b0) cams_zoom_pane_g1

0x0d07,	// (0x000179b9) cams_zoom_pane_g2

0x0d10,	// (0x000179c2) cams_zoom_pane_g3

0x0d19,	// (0x000179cb) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00025f05) cams_zoom_pane_g

0x8c1a,	// (0x0001f8cc) grid_cams_pane

0x8c28,	// (0x0001f8da) linegrid_cams_pane

0x8c36,	// (0x0001f8e8) cell_cams_pane_ParamLimits

0x8c36,	// (0x0001f8e8) cell_cams_pane

0x0d22,	// (0x000179d4) cams_burst_image_pane

0x0d2a,	// (0x000179dc) cell_cams_pane_g1

0x0676,	// (0x00017328) grid_highlight_pane_cp03

0x0a7b,	// (0x0001772d) mp_bg_pane_g1

0x0676,	// (0x00017328) bg_list_pane_cp03

0x2b5a,	// (0x0001980c) bg_mp_pane

0x2b62,	// (0x00019814) grid_mp_pane

0x2b6a,	// (0x0001981c) media_player_g1

0x2b72,	// (0x00019824) media_player_t1

0x2b80,	// (0x00019832) media_player_t2

0x2b8e,	// (0x00019840) media_player_t3

0x2b9c,	// (0x0001984e) media_player_t4

0x2baa,	// (0x0001985c) media_player_t5

0x2bb8,	// (0x0001986a) media_player_t6

0x2bc6,	// (0x00019878) media_player_t7

0x0006,

0xf5ef,	// (0x000262a1) media_player_t

0x2bd4,	// (0x00019886) wait_bar_pane_cp02

0xf5d4,	// (0x00026286) main_usb_pane_t

0xac46,	// (0x000218f8) cell_mp_pane

0x0a7b,	// (0x0001772d) cell_mp_pane_g1

0x0676,	// (0x00017328) grid_highlight_pane_cp06

0x0def,	// (0x00017aa1) grid_skin_colour_pane

0x0df7,	// (0x00017aa9) list_highlight_pane_cp03

0x8c9f,	// (0x0001f951) skin_g1

0x0dff,	// (0x00017ab1) skin_t1

0x0e0e,	// (0x00017ac0) skin_t2

0x0001,

0xf288,	// (0x00025f3a) skin_t

0x8ca9,	// (0x0001f95b) cell_skin_colour_pane_ParamLimits

0x8ca9,	// (0x0001f95b) cell_skin_colour_pane

0x0e1c,	// (0x00017ace) cell_skin_colour_pane_g1

0x8d2d,	// (0x0001f9df) call_video_g1_ParamLimits

0x8d2d,	// (0x0001f9df) call_video_g1

0x8d3d,	// (0x0001f9ef) call_video_g2_ParamLimits

0x8d3d,	// (0x0001f9ef) call_video_g2

0x0001,

0xf28d,	// (0x00025f3f) call_video_g_ParamLimits

0xf28d,	// (0x00025f3f) call_video_g

0x8d97,	// (0x0001fa49) call_video_uplink_pane_cp1_ParamLimits

0x8d97,	// (0x0001fa49) call_video_uplink_pane_cp1

0x0e2e,	// (0x00017ae0) call_video_uplink_pane_cp2

0x8e63,	// (0x0001fb15) video_down_crop_pane_ParamLimits

0x8e63,	// (0x0001fb15) video_down_crop_pane

0x8f55,	// (0x0001fc07) video_down_pane_ParamLimits

0x8f55,	// (0x0001fc07) video_down_pane

0x0e36,	// (0x00017ae8) video_down_subqcif_pane_ParamLimits

0x0e36,	// (0x00017ae8) video_down_subqcif_pane

0x0e4e,	// (0x00017b00) video_down_subqcif_pane_cp_ParamLimits

0x0e4e,	// (0x00017b00) video_down_subqcif_pane_cp

0x0e72,	// (0x00017b24) im_reading_pane_ParamLimits

0x0e72,	// (0x00017b24) im_reading_pane

0x9077,	// (0x0001fd29) im_writing_pane_ParamLimits

0x9077,	// (0x0001fd29) im_writing_pane

0x9095,	// (0x0001fd47) im_reading_pane_t1

0x0e8c,	// (0x00017b3e) list_im_pane

0x0e9d,	// (0x00017b4f) scroll_pane_cp07

0x90f5,	// (0x0001fda7) im_writing_pane_t1_ParamLimits

0x90f5,	// (0x0001fda7) im_writing_pane_t1

0x0eb6,	// (0x00017b68) im_writing_pane_t2_ParamLimits

0x0eb6,	// (0x00017b68) im_writing_pane_t2

0x0001,

0xf297,	// (0x00025f49) im_writing_pane_t_ParamLimits

0xf297,	// (0x00025f49) im_writing_pane_t

0x0676,	// (0x00017328) input_focus_pane_cp04

0x0676,	// (0x00017328) input_focus_pane_cp05

0x9107,	// (0x0001fdb9) list_im_single_pane_ParamLimits

0x9107,	// (0x0001fdb9) list_im_single_pane

0x9133,	// (0x0001fde5) list_single_im_pane_t1

0xac0a,	// (0x000218bc) blid_accuracy_pane

0xac12,	// (0x000218c4) blid_compass_pane

0xac1c,	// (0x000218ce) main_location_t1

0xac2a,	// (0x000218dc) main_location_t2

0xac38,	// (0x000218ea) main_location_t3

0x0002,

0xf5fe,	// (0x000262b0) main_location_t

0x0676,	// (0x00017328) aid_levels_location

0x0a7b,	// (0x0001772d) blid_accuracy_pane_g1

0x0a7b,	// (0x0001772d) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00025fab) blid_accuracy_pane_g

0x0efe,	// (0x00017bb0) wml_content_pane

0x0f3c,	// (0x00017bee) wml_button_pane_ParamLimits

0x0f3c,	// (0x00017bee) wml_button_pane

0x9142,	// (0x0001fdf4) wml_list_single_large_pane_ParamLimits

0x9142,	// (0x0001fdf4) wml_list_single_large_pane

0x9174,	// (0x0001fe26) wml_list_single_medium_pane_ParamLimits

0x9174,	// (0x0001fe26) wml_list_single_medium_pane

0x91ad,	// (0x0001fe5f) wml_list_single_small_pane_ParamLimits

0x91ad,	// (0x0001fe5f) wml_list_single_small_pane

0x0f50,	// (0x00017c02) wml_selection_box_pane_ParamLimits

0x0f50,	// (0x00017c02) wml_selection_box_pane

0x0f63,	// (0x00017c15) wml_list_single_pane_t1

0x0f72,	// (0x00017c24) wml_list_single_medium_pane_t1

0x0f81,	// (0x00017c33) wml_list_single_large_pane_t1

0x0f90,	// (0x00017c42) input_focus_pane_cp02_ParamLimits

0x0f90,	// (0x00017c42) input_focus_pane_cp02

0x0fa3,	// (0x00017c55) wml_selection_box_pane_g1

0x0fac,	// (0x00017c5e) wml_selection_box_pane_t1_ParamLimits

0x0fac,	// (0x00017c5e) wml_selection_box_pane_t1

0x08d1,	// (0x00017583) bg_wml_button_pane_ParamLimits

0x08d1,	// (0x00017583) bg_wml_button_pane

0x0fc4,	// (0x00017c76) wml_button_pane_g1

0x0fcc,	// (0x00017c7e) wml_button_pane_t1

0x0fc4,	// (0x00017c76) wml_button_bg_pane_g1

0x0fdc,	// (0x00017c8e) wml_button_bg_pane_g2

0x0fe4,	// (0x00017c96) wml_button_bg_pane_g3

0x0fec,	// (0x00017c9e) wml_button_bg_pane_g4

0x0ff4,	// (0x00017ca6) wml_button_bg_pane_g5

0x0ffc,	// (0x00017cae) wml_button_bg_pane_g6

0x1004,	// (0x00017cb6) wml_button_bg_pane_g7

0x100c,	// (0x00017cbe) wml_button_bg_pane_g8

0x1014,	// (0x00017cc6) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00025f4e) wml_button_bg_pane_g

0x91f5,	// (0x0001fea7) bg_list_pane_cp02

0x101c,	// (0x00017cce) mce_header_pane_ParamLimits

0x101c,	// (0x00017cce) mce_header_pane

0x1032,	// (0x00017ce4) mce_icon_pane

0x1032,	// (0x00017ce4) mce_image_pane

0x103b,	// (0x00017ced) mce_text_pane_ParamLimits

0x103b,	// (0x00017ced) mce_text_pane

0x91ff,	// (0x0001feb1) scroll_pane_cp03

0x0f34,	// (0x00017be6) scroll_pane_cp04

0x104e,	// (0x00017d00) scroll_pane_cp05_ParamLimits

0x104e,	// (0x00017d00) scroll_pane_cp05

0x9209,	// (0x0001febb) mce_header_field_pane_ParamLimits

0x9209,	// (0x0001febb) mce_header_field_pane

0x9229,	// (0x0001fedb) mce_header_field_pane_2_ParamLimits

0x9229,	// (0x0001fedb) mce_header_field_pane_2

0x923f,	// (0x0001fef1) mce_header_field_pane_3

0x9247,	// (0x0001fef9) list_single_mce_message_pane_ParamLimits

0x9247,	// (0x0001fef9) list_single_mce_message_pane

0x9277,	// (0x0001ff29) list_single_mce_smart_pane_ParamLimits

0x9277,	// (0x0001ff29) list_single_mce_smart_pane

0x105a,	// (0x00017d0c) input_focus_pane_cp03

0x1063,	// (0x00017d15) list_header_data_pane

0x92b2,	// (0x0001ff64) mce_header_field_pane_t1

0x92c2,	// (0x0001ff74) list_single_mce_header_pane_ParamLimits

0x92c2,	// (0x0001ff74) list_single_mce_header_pane

0x106b,	// (0x00017d1d) list_single_mce_header_pane_t1

0x107a,	// (0x00017d2c) list_single_mce_message_pane_g1

0x1082,	// (0x00017d34) list_single_mce_message_pane_t1

0x9314,	// (0x0001ffc6) bg_cale_heading_pane_cp01_ParamLimits

0x9314,	// (0x0001ffc6) bg_cale_heading_pane_cp01

0x1090,	// (0x00017d42) bg_cale_pane_cp02_ParamLimits

0x1090,	// (0x00017d42) bg_cale_pane_cp02

0x9347,	// (0x0001fff9) cale_month_corner_pane

0x935d,	// (0x0002000f) cale_month_day_heading_pane_ParamLimits

0x935d,	// (0x0002000f) cale_month_day_heading_pane

0x93a0,	// (0x00020052) cale_month_pane_g1_ParamLimits

0x93a0,	// (0x00020052) cale_month_pane_g1

0x93cc,	// (0x0002007e) cale_month_pane_g2_ParamLimits

0x93cc,	// (0x0002007e) cale_month_pane_g2

0x93ef,	// (0x000200a1) cale_month_pane_g3_ParamLimits

0x93ef,	// (0x000200a1) cale_month_pane_g3

0x942b,	// (0x000200dd) cale_month_pane_g4_ParamLimits

0x942b,	// (0x000200dd) cale_month_pane_g4

0x9467,	// (0x00020119) cale_month_pane_g5_ParamLimits

0x9467,	// (0x00020119) cale_month_pane_g5

0x94a3,	// (0x00020155) cale_month_pane_g6_ParamLimits

0x94a3,	// (0x00020155) cale_month_pane_g6

0x94df,	// (0x00020191) cale_month_pane_g7_ParamLimits

0x94df,	// (0x00020191) cale_month_pane_g7

0x952b,	// (0x000201dd) cale_month_pane_g8_ParamLimits

0x952b,	// (0x000201dd) cale_month_pane_g8

0x9577,	// (0x00020229) cale_month_pane_g9_ParamLimits

0x9577,	// (0x00020229) cale_month_pane_g9

0x95bd,	// (0x0002026f) cale_month_pane_g10_ParamLimits

0x95bd,	// (0x0002026f) cale_month_pane_g10

0x9603,	// (0x000202b5) cale_month_pane_g11_ParamLimits

0x9603,	// (0x000202b5) cale_month_pane_g11

0x9641,	// (0x000202f3) cale_month_pane_g12_ParamLimits

0x9641,	// (0x000202f3) cale_month_pane_g12

0x967f,	// (0x00020331) cale_month_pane_g13_ParamLimits

0x967f,	// (0x00020331) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00025f61) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00025f61) cale_month_pane_g

0x96bd,	// (0x0002036f) cale_month_week_pane

0x96d0,	// (0x00020382) grid_cale_month_pane_ParamLimits

0x96d0,	// (0x00020382) grid_cale_month_pane

0x970e,	// (0x000203c0) cale_month_day_heading_pane_t1

0x976c,	// (0x0002041e) cale_month_day_heading_pane_t2

0x97d1,	// (0x00020483) cale_month_day_heading_pane_t3

0x9836,	// (0x000204e8) cale_month_day_heading_pane_t4

0x989b,	// (0x0002054d) cale_month_day_heading_pane_t5

0x9900,	// (0x000205b2) cale_month_day_heading_pane_t6

0x996d,	// (0x0002061f) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00025f7c) cale_month_day_heading_pane_t

0x0bef,	// (0x000178a1) bg_cale_side_pane_cp01

0x99e2,	// (0x00020694) cale_month_week_pane_t1

0x99f9,	// (0x000206ab) cale_month_week_pane_t2

0x9a10,	// (0x000206c2) cale_month_week_pane_t3

0x9a27,	// (0x000206d9) cale_month_week_pane_t4

0x9a3e,	// (0x000206f0) cale_month_week_pane_t5

0x9a5d,	// (0x0002070f) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00025f8b) cale_month_week_pane_t

0x9a7c,	// (0x0002072e) cell_cale_month_pane_ParamLimits

0x9a7c,	// (0x0002072e) cell_cale_month_pane

0x6f90,	// (0x0001dc42) cell_cale_month_pane_g1

0x6f9c,	// (0x0001dc4e) cell_cale_month_pane_t1_ParamLimits

0x6f9c,	// (0x0001dc4e) cell_cale_month_pane_t1

0x0bfd,	// (0x000178af) grid_highlight_pane_cp08

0x0a7b,	// (0x0001772d) main_smil_g1

0x9b4a,	// (0x000207fc) smil_status_pane

0x10fb,	// (0x00017dad) smil_text_pane

0x2a72,	// (0x00019724) bg_popup_call3_rect_pane_g8

0x2a7a,	// (0x0001972c) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00026244) bg_popup_call3_rect_pane_g

0x2d0f,	// (0x000199c1) smil_status_volume_pane_g1

0x1105,	// (0x00017db7) smil_status_pane_t1

0x70da,	// (0x0001dd8c) volume_smil_pane

0x111c,	// (0x00017dce) list_smil_text_pane

0x9b5d,	// (0x0002080f) scroll_pane_cp011

0x9b68,	// (0x0002081a) smil_text_list_pane_t1_ParamLimits

0x9b68,	// (0x0002081a) smil_text_list_pane_t1

0x6fb8,	// (0x0001dc6a) aid_volume_smil_ParamLimits

0x6fb8,	// (0x0001dc6a) aid_volume_smil

0x0a7b,	// (0x0001772d) smil_volume_pane_g1

0x0a7b,	// (0x0001772d) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00025fab) smil_volume_pane_g

0x0a02,	// (0x000176b4) listscroll_cale_day_pane

0x1148,	// (0x00017dfa) bg_cale_pane

0x1160,	// (0x00017e12) list_cale_pane

0x1171,	// (0x00017e23) scroll_pane_cp09

0x1182,	// (0x00017e34) cale_bg_pane_g1

0x118a,	// (0x00017e3c) cale_bg_pane_g2

0x1192,	// (0x00017e44) cale_bg_pane_g3

0x119a,	// (0x00017e4c) cale_bg_pane_g4

0x11a2,	// (0x00017e54) cale_bg_pane_g5

0x11aa,	// (0x00017e5c) cale_bg_pane_g6

0x11b2,	// (0x00017e64) cale_bg_pane_g7

0x11ba,	// (0x00017e6c) cale_bg_pane_g8

0x11c2,	// (0x00017e74) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00025fb0) cale_bg_pane_g

0x9c13,	// (0x000208c5) list_cale_time_pane_ParamLimits

0x9c13,	// (0x000208c5) list_cale_time_pane

0x9c34,	// (0x000208e6) list_cale_time_pane_g1_ParamLimits

0x9c34,	// (0x000208e6) list_cale_time_pane_g1

0x11ca,	// (0x00017e7c) list_cale_time_pane_g2_ParamLimits

0x11ca,	// (0x00017e7c) list_cale_time_pane_g2

0x9c40,	// (0x000208f2) list_cale_time_pane_g3_ParamLimits

0x9c40,	// (0x000208f2) list_cale_time_pane_g3

0x9c5c,	// (0x0002090e) list_cale_time_pane_g4_ParamLimits

0x9c5c,	// (0x0002090e) list_cale_time_pane_g4

0x9c6a,	// (0x0002091c) list_cale_time_pane_g5_ParamLimits

0x9c6a,	// (0x0002091c) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00025fc3) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00025fc3) list_cale_time_pane_g

0x9c78,	// (0x0002092a) list_cale_time_pane_t1_ParamLimits

0x9c78,	// (0x0002092a) list_cale_time_pane_t1

0x9ca0,	// (0x00020952) list_cale_time_pane_t2_ParamLimits

0x9ca0,	// (0x00020952) list_cale_time_pane_t2

0x9f8b,	// (0x00020c3d) aid_blid_cardinal_pane

0x9fcd,	// (0x00020c7f) compass_pane_t4

0x9cc8,	// (0x0002097a) list_cale_time_pane_t4_ParamLimits

0x9cc8,	// (0x0002097a) list_cale_time_pane_t4

0x9fdb,	// (0x00020c8d) compass_pane_t5

0x9feb,	// (0x00020c9d) compass_pane_t6

0x9ff9,	// (0x00020cab) compass_pane_t7

0x16e8,	// (0x0001839a) navi_pane_cc_t1

0x184f,	// (0x00018501) aid_phob_thumbnail_center_pane

0xa700,	// (0x000213b2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00025fd0) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00025fd0) list_cale_time_pane_t

0x02cf,	// (0x00016f81) bg_popup_window_pane_cp02_ParamLimits

0x02cf,	// (0x00016f81) bg_popup_window_pane_cp02

0x11e4,	// (0x00017e96) heading_pane_cp01_ParamLimits

0x11e4,	// (0x00017e96) heading_pane_cp01

0x11f0,	// (0x00017ea2) loc_req_pane_ParamLimits

0x11f0,	// (0x00017ea2) loc_req_pane

0x1200,	// (0x00017eb2) loc_type_pane_ParamLimits

0x1200,	// (0x00017eb2) loc_type_pane

0x1212,	// (0x00017ec4) loc_type_pane_t1_ParamLimits

0x1212,	// (0x00017ec4) loc_type_pane_t1

0x1224,	// (0x00017ed6) loc_type_pane_t2_ParamLimits

0x1224,	// (0x00017ed6) loc_type_pane_t2

0x1236,	// (0x00017ee8) loc_type_pane_t3_ParamLimits

0x1236,	// (0x00017ee8) loc_type_pane_t3

0x0002,

0xf325,	// (0x00025fd7) loc_type_pane_t_ParamLimits

0xf325,	// (0x00025fd7) loc_type_pane_t

0x1248,	// (0x00017efa) list_loc_req_pane

0x1252,	// (0x00017f04) scroll_pane_cp012

0x9cf0,	// (0x000209a2) list_single_loc_request_popup_menu_pane_ParamLimits

0x9cf0,	// (0x000209a2) list_single_loc_request_popup_menu_pane

0x125d,	// (0x00017f0f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x125d,	// (0x00017f0f) list_single_loc_request_popup_menu_pane_g1

0x1269,	// (0x00017f1b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1269,	// (0x00017f1b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00025fde) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00025fde) list_single_loc_request_popup_menu_pane_g

0x1275,	// (0x00017f27) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1275,	// (0x00017f27) list_single_loc_request_popup_menu_pane_t1

0x9d02,	// (0x000209b4) bg_popup_window_pane_cp03_ParamLimits

0x9d02,	// (0x000209b4) bg_popup_window_pane_cp03

0x9d10,	// (0x000209c2) heading_loc_req_pane_ParamLimits

0x9d10,	// (0x000209c2) heading_loc_req_pane

0x9d1c,	// (0x000209ce) popup_dyc_status_message_window_g1_ParamLimits

0x9d1c,	// (0x000209ce) popup_dyc_status_message_window_g1

0x9d28,	// (0x000209da) popup_dyc_status_message_window_t1_ParamLimits

0x9d28,	// (0x000209da) popup_dyc_status_message_window_t1

0x9d3a,	// (0x000209ec) popup_dyc_status_message_window_t2_ParamLimits

0x9d3a,	// (0x000209ec) popup_dyc_status_message_window_t2

0x9d4c,	// (0x000209fe) popup_dyc_status_message_window_t3_ParamLimits

0x9d4c,	// (0x000209fe) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00025fe3) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00025fe3) popup_dyc_status_message_window_t

0x0676,	// (0x00017328) bg_heading_pane_cp01

0x1297,	// (0x00017f49) heading_loc_req_pane_g1

0x129f,	// (0x00017f51) heading_loc_req_pane_g2

0x12a7,	// (0x00017f59) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00025fea) heading_loc_req_pane_g

0x12af,	// (0x00017f61) heading_loc_req_pane_t1

0x1333,	// (0x00017fe5) bg_popup_sub_pane_cp01_ParamLimits

0x1333,	// (0x00017fe5) bg_popup_sub_pane_cp01

0x1341,	// (0x00017ff3) popup_cale_events_window_g1_ParamLimits

0x1341,	// (0x00017ff3) popup_cale_events_window_g1

0x1361,	// (0x00018013) popup_cale_events_window_g2_ParamLimits

0x1361,	// (0x00018013) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0002601e) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0002601e) popup_cale_events_window_g

0x1381,	// (0x00018033) popup_cale_events_window_t1_ParamLimits

0x1381,	// (0x00018033) popup_cale_events_window_t1

0x1393,	// (0x00018045) popup_cale_events_window_t2_ParamLimits

0x1393,	// (0x00018045) popup_cale_events_window_t2

0x13d1,	// (0x00018083) popup_cale_events_window_t3_ParamLimits

0x13d1,	// (0x00018083) popup_cale_events_window_t3

0x140b,	// (0x000180bd) popup_cale_events_window_t4_ParamLimits

0x140b,	// (0x000180bd) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00026023) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00026023) popup_cale_events_window_t

0x9dd0,	// (0x00020a82) call_type_pane

0x1867,	// (0x00018519) popup_call_status_window_g1

0x9ddc,	// (0x00020a8e) popup_call_status_window_g2

0x9de8,	// (0x00020a9a) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0002602c) popup_call_status_window_g

0x1441,	// (0x000180f3) call_type_pane_g1

0x144a,	// (0x000180fc) call_type_pane_g2

0x0001,

0xf381,	// (0x00026033) call_type_pane_g

0x0676,	// (0x00017328) bg_popup_sub_pane_cp02

0x1453,	// (0x00018105) listscroll_popup_wml_pane

0x145b,	// (0x0001810d) list_wml_pane

0x1465,	// (0x00018117) scroll_pane_cp013

0x1470,	// (0x00018122) list_single_graphic_popup_wml_pane_ParamLimits

0x1470,	// (0x00018122) list_single_graphic_popup_wml_pane

0x0a7b,	// (0x0001772d) list_single_graphic_popup_wml_pane_g1

0x1484,	// (0x00018136) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00026038) list_single_graphic_popup_wml_pane_g

0x148c,	// (0x0001813e) list_single_graphic_popup_wml_pane_t1

0x149a,	// (0x0001814c) aid_call_pane

0x08c9,	// (0x0001757b) popup_clock_analogue_window_g1

0x08c9,	// (0x0001757b) popup_clock_analogue_window_g2

0x6fda,	// (0x0001dc8c) popup_clock_analogue_window_g3

0x6fda,	// (0x0001dc8c) popup_clock_analogue_window_g4

0x0a7b,	// (0x0001772d) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0002603d) popup_clock_analogue_window_g

0x6fe2,	// (0x0001dc94) popup_clock_analogue_window_t1

0x6ff0,	// (0x0001dca2) clock_digital_number_pane_ParamLimits

0x6ff0,	// (0x0001dca2) clock_digital_number_pane

0x6ffc,	// (0x0001dcae) clock_digital_number_pane_cp02_ParamLimits

0x6ffc,	// (0x0001dcae) clock_digital_number_pane_cp02

0x7008,	// (0x0001dcba) clock_digital_number_pane_cp03_ParamLimits

0x7008,	// (0x0001dcba) clock_digital_number_pane_cp03

0x7014,	// (0x0001dcc6) clock_digital_number_pane_cp04_ParamLimits

0x7014,	// (0x0001dcc6) clock_digital_number_pane_cp04

0x7020,	// (0x0001dcd2) clock_digital_separator_pane_ParamLimits

0x7020,	// (0x0001dcd2) clock_digital_separator_pane

0x702c,	// (0x0001dcde) popup_clock_digital_window_t1

0x0a7b,	// (0x0001772d) clock_digital_number_pane_g1

0x0a7b,	// (0x0001772d) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00025fab) clock_digital_number_pane_g

0x0a7b,	// (0x0001772d) clock_digital_separator_pane_g1

0x0a7b,	// (0x0001772d) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00025fab) clock_digital_separator_pane_g

0x0676,	// (0x00017328) bg_popup_window_pane_cp04

0x1519,	// (0x000181cb) heading_pane_cp03

0x1521,	// (0x000181d3) listscroll_popup_gms_pane

0x1529,	// (0x000181db) grid_large_graphic_popup_pane

0x1533,	// (0x000181e5) listscroll_popup_gms_pane_g1

0x153b,	// (0x000181ed) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00026048) listscroll_popup_gms_pane_g

0x0f34,	// (0x00017be6) scroll_pane_cp014

0x1543,	// (0x000181f5) cell_large_graphic_popup_pane_ParamLimits

0x1543,	// (0x000181f5) cell_large_graphic_popup_pane

0x155b,	// (0x0001820d) cell_large_graphic_popup_pane_g1_ParamLimits

0x155b,	// (0x0001820d) cell_large_graphic_popup_pane_g1

0x1567,	// (0x00018219) cell_large_graphic_popup_pane_g2_ParamLimits

0x1567,	// (0x00018219) cell_large_graphic_popup_pane_g2

0x1573,	// (0x00018225) cell_large_graphic_popup_pane_g3_ParamLimits

0x1573,	// (0x00018225) cell_large_graphic_popup_pane_g3

0x1580,	// (0x00018232) cell_large_graphic_popup_pane_g4_ParamLimits

0x1580,	// (0x00018232) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0002604d) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0002604d) cell_large_graphic_popup_pane_g

0x1590,	// (0x00018242) grid_highlight_pane_cp010

0x0a7b,	// (0x0001772d) bg_popup_call_pane_g1

0x159a,	// (0x0001824c) list_single_graphic_popup_conf_pane_ParamLimits

0x159a,	// (0x0001824c) list_single_graphic_popup_conf_pane

0x15ac,	// (0x0001825e) list_highlight_pane_cp01

0x15b5,	// (0x00018267) list_single_graphic_popup_conf_pane_g1

0x15bd,	// (0x0001826f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00026056) list_single_graphic_popup_conf_pane_g

0x15c5,	// (0x00018277) list_single_graphic_popup_conf_pane_t1

0x15d3,	// (0x00018285) linegrid_cams_pane_g1

0x9df4,	// (0x00020aa6) linegrid_cams_pane_g2

0x0b9c,	// (0x0001784e) linegrid_cams_pane_g3

0x15dc,	// (0x0001828e) linegrid_cams_pane_g4

0x9dfd,	// (0x00020aaf) linegrid_cams_pane_g5

0x9e06,	// (0x00020ab8) linegrid_cams_pane_g6

0x0c30,	// (0x000178e2) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0002605b) linegrid_cams_pane_g

0x15e5,	// (0x00018297) popup_clock_analogue_window

0x15e5,	// (0x00018297) popup_clock_digital_window

0x0676,	// (0x00017328) popup_phob_thumbnail_window

0x0a7b,	// (0x0001772d) call_video_uplink_pane_g1

0x15ee,	// (0x000182a0) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0002606a) call_video_uplink_pane_g

0x0bfd,	// (0x000178af) video_uplink_pane

0x15f6,	// (0x000182a8) mce_image_pane_g1

0x9e0f,	// (0x00020ac1) mce_image_pane_g2

0x9e17,	// (0x00020ac9) mce_image_pane_g3

0x9e1f,	// (0x00020ad1) mce_image_pane_g4

0x9e27,	// (0x00020ad9) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0002606f) mce_image_pane_g

0x1600,	// (0x000182b2) control_top_pane_stacon_cp01_ParamLimits

0x1600,	// (0x000182b2) control_top_pane_stacon_cp01

0x1614,	// (0x000182c6) uni_indicator_pane_stacon_cp01_ParamLimits

0x1614,	// (0x000182c6) uni_indicator_pane_stacon_cp01

0x1625,	// (0x000182d7) bg_popup_sub_pane_cp03

0x9e2f,	// (0x00020ae1) chi_dic_find_pane

0x9e37,	// (0x00020ae9) listscroll_chi_dic_pane

0x9e40,	// (0x00020af2) main_pane_chidic_g1

0x9e53,	// (0x00020b05) chi_dic_find_pane_t1

0x162f,	// (0x000182e1) find_chidic_pane

0x1638,	// (0x000182ea) chi_dic_list_pane_ParamLimits

0x1638,	// (0x000182ea) chi_dic_list_pane

0x1649,	// (0x000182fb) scroll_pane_cp020

0x9e61,	// (0x00020b13) find_chidic_pane_t1

0x0676,	// (0x00017328) input_focus_pane_cp06

0x9e70,	// (0x00020b22) list_chi_dic_pane_ParamLimits

0x9e70,	// (0x00020b22) list_chi_dic_pane

0x1651,	// (0x00018303) list_chi_dic_pane_t1_ParamLimits

0x1651,	// (0x00018303) list_chi_dic_pane_t1

0x0676,	// (0x00017328) list_highlight_pane_cp020

0x1664,	// (0x00018316) bg_cale_heading_pane_g1

0x9e91,	// (0x00020b43) bg_cale_heading_pane_g2

0x9e99,	// (0x00020b4b) bg_cale_heading_pane_g3

0x9ea1,	// (0x00020b53) bg_cale_heading_pane_g4

0x9eab,	// (0x00020b5d) bg_cale_heading_pane_g5

0x9eb5,	// (0x00020b67) bg_cale_heading_pane_g6

0x9ebd,	// (0x00020b6f) bg_cale_heading_pane_g7

0x9ec5,	// (0x00020b77) bg_cale_heading_pane_g8

0x9ecf,	// (0x00020b81) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0002607a) bg_cale_heading_pane_g

0x1664,	// (0x00018316) bg_cale_side_pane_g1

0x9ed9,	// (0x00020b8b) bg_cale_side_pane_g2

0x9ee3,	// (0x00020b95) bg_cale_side_pane_g3

0x9eed,	// (0x00020b9f) bg_cale_side_pane_g4

0x9ef7,	// (0x00020ba9) bg_cale_side_pane_g5

0x9f01,	// (0x00020bb3) bg_cale_side_pane_g6

0x9f0b,	// (0x00020bbd) bg_cale_side_pane_g7

0x9f15,	// (0x00020bc7) bg_cale_side_pane_g8

0x9f1d,	// (0x00020bcf) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0002608d) bg_cale_side_pane_g

0x9f25,	// (0x00020bd7) popup_call_status_window_ParamLimits

0x9f25,	// (0x00020bd7) popup_call_status_window

0x166c,	// (0x0001831e) stacon_top_pane

0x1674,	// (0x00018326) status_pane_ParamLimits

0x1674,	// (0x00018326) status_pane

0x1689,	// (0x0001833b) status_small_pane

0x1691,	// (0x00018343) control_pane

0x0676,	// (0x00017328) stacon_bottom_pane

0x1699,	// (0x0001834b) list_single_mce_smart_pane_t1_ParamLimits

0x1699,	// (0x0001834b) list_single_mce_smart_pane_t1

0x16ac,	// (0x0001835e) list_single_mce_smart_pane_t2_ParamLimits

0x16ac,	// (0x0001835e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000260a0) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000260a0) list_single_mce_smart_pane_t

0x9f31,	// (0x00020be3) compass_pane

0x9f3d,	// (0x00020bef) main_location2_pane_t1

0x9f51,	// (0x00020c03) main_location2_pane_t2

0x9f65,	// (0x00020c17) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000260a5) main_location2_pane_t

0x16cb,	// (0x0001837d) compass_pane_g1_ParamLimits

0x16cb,	// (0x0001837d) compass_pane_g1

0x9faf,	// (0x00020c61) compass_pane_t1

0x9fbe,	// (0x00020c70) compass_pane_t2

0x0005,

0xf3fc,	// (0x000260ae) compass_pane_t

0xa009,	// (0x00020cbb) text_secondary_cp61

0x16df,	// (0x00018391) navi_pane_cams_g5

0x1702,	// (0x000183b4) navi_pane_im_t1

0x1710,	// (0x000183c2) navi_pane_mp_g1_ParamLimits

0x1710,	// (0x000183c2) navi_pane_mp_g1

0x1724,	// (0x000183d6) navi_pane_mp_g2_ParamLimits

0x1724,	// (0x000183d6) navi_pane_mp_g2

0x1730,	// (0x000183e2) navi_pane_mp_g3_ParamLimits

0x1730,	// (0x000183e2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000260c2) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000260c2) navi_pane_mp_g

0x173c,	// (0x000183ee) navi_pane_mp_t1

0x174a,	// (0x000183fc) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000260c9) navi_pane_mp_t

0x1786,	// (0x00018438) navi_pane_vt_g1

0x173c,	// (0x000183ee) navi_pane_vt_t1

0x178e,	// (0x00018440) navi_slider_pane

0x1796,	// (0x00018448) zooming_pane

0x179e,	// (0x00018450) navi_slider_pane_g1

0x7049,	// (0x0001dcfb) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000260d0) navi_slider_pane_g

0x17d4,	// (0x00018486) aid_levels_zoom

0x17dc,	// (0x0001848e) zooming_pane_g1

0x17e4,	// (0x00018496) zooming_pane_g2

0x17e4,	// (0x00018496) zooming_pane_g3

0x0002,

0xf42d,	// (0x000260df) zooming_pane_g

0x17ec,	// (0x0001849e) level_10_zoom

0x17f5,	// (0x000184a7) level_11_zoom

0x17fe,	// (0x000184b0) level_1_zoom

0x1807,	// (0x000184b9) level_2_zoom

0x1810,	// (0x000184c2) level_3_zoom

0x1819,	// (0x000184cb) level_4_zoom

0x1822,	// (0x000184d4) level_5_zoom

0x182b,	// (0x000184dd) level_6_zoom

0x1834,	// (0x000184e6) level_7_zoom

0x183d,	// (0x000184ef) level_8_zoom

0x1846,	// (0x000184f8) level_9_zoom

0x1857,	// (0x00018509) popup_phob_thumbnail_window_g1

0x185f,	// (0x00018511) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000260e6) popup_phob_thumbnail_window_g

0x2bdc,	// (0x0001988e) level_1_location

0x2be4,	// (0x00019896) level_2_location

0x2bec,	// (0x0001989e) level_3_location

0x2bf4,	// (0x000198a6) level_4_location

0x1796,	// (0x00018448) level_5_location

0xa120,	// (0x00020dd2) mce_icon_pane_g1

0xa128,	// (0x00020dda) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000260eb) mce_icon_pane_g

0xa130,	// (0x00020de2) main_mup_pane_g1_ParamLimits

0xa130,	// (0x00020de2) main_mup_pane_g1

0xa148,	// (0x00020dfa) main_mup_pane_g2_ParamLimits

0xa148,	// (0x00020dfa) main_mup_pane_g2

0xa164,	// (0x00020e16) main_mup_pane_g3_ParamLimits

0xa164,	// (0x00020e16) main_mup_pane_g3

0xa180,	// (0x00020e32) main_mup_pane_g4_ParamLimits

0xa180,	// (0x00020e32) main_mup_pane_g4

0xa19c,	// (0x00020e4e) main_mup_pane_g5_ParamLimits

0xa19c,	// (0x00020e4e) main_mup_pane_g5

0xa1bd,	// (0x00020e6f) main_mup_pane_g6_ParamLimits

0xa1bd,	// (0x00020e6f) main_mup_pane_g6

0xa1d9,	// (0x00020e8b) main_mup_pane_g7_ParamLimits

0xa1d9,	// (0x00020e8b) main_mup_pane_g7

0xa1f5,	// (0x00020ea7) main_mup_pane_g8_ParamLimits

0xa1f5,	// (0x00020ea7) main_mup_pane_g8

0xa211,	// (0x00020ec3) main_mup_pane_g9_ParamLimits

0xa211,	// (0x00020ec3) main_mup_pane_g9

0xa230,	// (0x00020ee2) main_mup_pane_g10_ParamLimits

0xa230,	// (0x00020ee2) main_mup_pane_g10

0xa24f,	// (0x00020f01) main_mup_pane_g11_ParamLimits

0xa24f,	// (0x00020f01) main_mup_pane_g11

0xa267,	// (0x00020f19) main_mup_pane_g12_ParamLimits

0xa267,	// (0x00020f19) main_mup_pane_g12

0xa275,	// (0x00020f27) main_mup_pane_g13_ParamLimits

0xa275,	// (0x00020f27) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000260f0) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000260f0) main_mup_pane_g

0xa28b,	// (0x00020f3d) main_mup_pane_t1_ParamLimits

0xa28b,	// (0x00020f3d) main_mup_pane_t1

0xa2a8,	// (0x00020f5a) main_mup_pane_t2_ParamLimits

0xa2a8,	// (0x00020f5a) main_mup_pane_t2

0xa2c2,	// (0x00020f74) main_mup_pane_t3_ParamLimits

0xa2c2,	// (0x00020f74) main_mup_pane_t3

0xa2dc,	// (0x00020f8e) main_mup_pane_t4_ParamLimits

0xa2dc,	// (0x00020f8e) main_mup_pane_t4

0xa2ee,	// (0x00020fa0) main_mup_pane_t5_ParamLimits

0xa2ee,	// (0x00020fa0) main_mup_pane_t5

0xa300,	// (0x00020fb2) main_mup_pane_t6_ParamLimits

0xa300,	// (0x00020fb2) main_mup_pane_t6

0x0005,

0xf459,	// (0x0002610b) main_mup_pane_t_ParamLimits

0xf459,	// (0x0002610b) main_mup_pane_t

0xa316,	// (0x00020fc8) mup_progress_pane_ParamLimits

0xa316,	// (0x00020fc8) mup_progress_pane

0xa322,	// (0x00020fd4) mup_visualizer_pane_ParamLimits

0xa322,	// (0x00020fd4) mup_visualizer_pane

0xa360,	// (0x00021012) mup_volume_pane_ParamLimits

0xa360,	// (0x00021012) mup_volume_pane

0x1867,	// (0x00018519) mup_visualizer_pane_g1_ParamLimits

0x1867,	// (0x00018519) mup_visualizer_pane_g1

0x1867,	// (0x00018519) mup_visualizer_pane_g2_ParamLimits

0x1867,	// (0x00018519) mup_visualizer_pane_g2

0x16cb,	// (0x0001837d) mup_visualizer_pane_g3_ParamLimits

0x16cb,	// (0x0001837d) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00026118) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00026118) mup_visualizer_pane_g

0x0a7b,	// (0x0001772d) mup_volume_pane_g1

0x187d,	// (0x0001852f) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0002611f) mup_volume_pane_g

0x0a7b,	// (0x0001772d) mup_progress_pane_g1

0x1886,	// (0x00018538) mup_progress_pane_g2

0x188f,	// (0x00018541) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00026124) mup_progress_pane_g

0x0676,	// (0x00017328) bg_popup_window_pane_cp05

0x1898,	// (0x0001854a) heading_pane_cp02_ParamLimits

0x1898,	// (0x0001854a) heading_pane_cp02

0x18b2,	// (0x00018564) list_popup_blid_pane

0x18ba,	// (0x0001856c) list_blid_sat_info_pane_ParamLimits

0x18ba,	// (0x0001856c) list_blid_sat_info_pane

0x18cd,	// (0x0001857f) list_blid_sat_info_pane_g1

0x18d5,	// (0x00018587) list_blid_sat_info_pane_t1

0xa46b,	// (0x0002111d) mup_equalizer_pane_ParamLimits

0xa46b,	// (0x0002111d) mup_equalizer_pane

0xa48c,	// (0x0002113e) mup_equalizer_pane_cp1_ParamLimits

0xa48c,	// (0x0002113e) mup_equalizer_pane_cp1

0xa4ad,	// (0x0002115f) mup_equalizer_pane_cp2_ParamLimits

0xa4ad,	// (0x0002115f) mup_equalizer_pane_cp2

0xa4ce,	// (0x00021180) mup_equalizer_pane_cp3_ParamLimits

0xa4ce,	// (0x00021180) mup_equalizer_pane_cp3

0xa4ef,	// (0x000211a1) mup_equalizer_pane_cp4_ParamLimits

0xa4ef,	// (0x000211a1) mup_equalizer_pane_cp4

0xa510,	// (0x000211c2) mup_equalizer_pane_cp5

0xa526,	// (0x000211d8) mup_equalizer_pane_cp6

0xa53e,	// (0x000211f0) mup_equalizer_pane_cp7

0x2afa,	// (0x000197ac) bg_popup_call_poc_act_pane_g9

0x2b02,	// (0x000197b4) bg_popup_call_poc_act_pane_g10

0x2b0a,	// (0x000197bc) bg_popup_call_poc_act_pane_g11

0x000a,

0x08d1,	// (0x00017583) mup_scale_pane

0x0a7b,	// (0x0001772d) mup_scale_pane_g1

0x18e3,	// (0x00018595) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00026140) mup_scale_pane_g

0x1907,	// (0x000185b9) msg_data_pane

0x190f,	// (0x000185c1) scroll_pane_cp017

0xa568,	// (0x0002121a) bg_list_pane_cp04_ParamLimits

0xa568,	// (0x0002121a) bg_list_pane_cp04

0x1917,	// (0x000185c9) msg_data_pane_g1

0xa588,	// (0x0002123a) msg_data_pane_g2

0x9e17,	// (0x00020ac9) msg_data_pane_g3

0xa590,	// (0x00021242) msg_data_pane_g4

0xa598,	// (0x0002124a) msg_data_pane_g5

0xa5a0,	// (0x00021252) msg_data_pane_g6

0xa5a8,	// (0x0002125a) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0002614f) msg_data_pane_g

0xa5b0,	// (0x00021262) msg_text_pane_ParamLimits

0xa5b0,	// (0x00021262) msg_text_pane

0xa601,	// (0x000212b3) qrid_highlight_pane_cp011_ParamLimits

0xa601,	// (0x000212b3) qrid_highlight_pane_cp011

0x0676,	// (0x00017328) msg_body_pane

0x0676,	// (0x00017328) msg_header_pane

0x1928,	// (0x000185da) input_focus_pane_cp07

0xa62b,	// (0x000212dd) msg_header_pane_t1_ParamLimits

0xa62b,	// (0x000212dd) msg_header_pane_t1

0x193d,	// (0x000185ef) msg_header_pane_t2_ParamLimits

0x193d,	// (0x000185ef) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00026163) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00026163) msg_header_pane_t

0x194f,	// (0x00018601) msg_body_pane_g1

0xa63f,	// (0x000212f1) msg_body_pane_t1_ParamLimits

0xa63f,	// (0x000212f1) msg_body_pane_t1

0x1957,	// (0x00018609) msg_body_pane_t2_ParamLimits

0x1957,	// (0x00018609) msg_body_pane_t2

0x1969,	// (0x0001861b) msg_body_pane_t3_ParamLimits

0x1969,	// (0x0001861b) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00026168) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00026168) msg_body_pane_t

0x708b,	// (0x0001dd3d) main_viewer_pane_g1_ParamLimits

0x708b,	// (0x0001dd3d) main_viewer_pane_g1

0x7097,	// (0x0001dd49) main_viewer_pane_g2_ParamLimits

0x7097,	// (0x0001dd49) main_viewer_pane_g2

0xa692,	// (0x00021344) main_viewer_pane_g3_ParamLimits

0xa692,	// (0x00021344) main_viewer_pane_g3

0xa6a3,	// (0x00021355) main_viewer_pane_g4_ParamLimits

0xa6a3,	// (0x00021355) main_viewer_pane_g4

0x70a3,	// (0x0001dd55) main_viewer_pane_g5_ParamLimits

0x70a3,	// (0x0001dd55) main_viewer_pane_g5

0x70a3,	// (0x0001dd55) main_viewer_pane_g7_ParamLimits

0x70a3,	// (0x0001dd55) main_viewer_pane_g7

0x70b5,	// (0x0001dd67) main_viewer_pane_g8_ParamLimits

0x70b5,	// (0x0001dd67) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00026178) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00026178) main_viewer_pane_g

0x19bd,	// (0x0001866f) viewer_content_pane_ParamLimits

0x19bd,	// (0x0001866f) viewer_content_pane

0xa6d4,	// (0x00021386) main_postcard_pane_g1_ParamLimits

0xa6d4,	// (0x00021386) main_postcard_pane_g1

0xa6e2,	// (0x00021394) main_postcard_pane_g2_ParamLimits

0xa6e2,	// (0x00021394) main_postcard_pane_g2

0xa6f0,	// (0x000213a2) main_postcard_pane_g3_ParamLimits

0xa6f0,	// (0x000213a2) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00026189) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00026189) main_postcard_pane_g

0xa700,	// (0x000213b2) main_postcard_pane_g4

0x2cfc,	// (0x000199ae) smil_status_volume_pane_g2

0xa72c,	// (0x000213de) postcard_pane_ParamLimits

0xa72c,	// (0x000213de) postcard_pane

0x1867,	// (0x00018519) postcard_pane_g1_ParamLimits

0x1867,	// (0x00018519) postcard_pane_g1

0xa75e,	// (0x00021410) postcard_pane_g2_ParamLimits

0xa75e,	// (0x00021410) postcard_pane_g2

0xa76a,	// (0x0002141c) postcard_pane_g3_ParamLimits

0xa76a,	// (0x0002141c) postcard_pane_g3

0x19d9,	// (0x0001868b) postcard_pane_g4_ParamLimits

0x19d9,	// (0x0001868b) postcard_pane_g4

0xa776,	// (0x00021428) postcard_pane_g5_ParamLimits

0xa776,	// (0x00021428) postcard_pane_g5

0xa782,	// (0x00021434) postcard_pane_g6_ParamLimits

0xa782,	// (0x00021434) postcard_pane_g6

0x19cb,	// (0x0001867d) postcard_pane_g7_ParamLimits

0x19cb,	// (0x0001867d) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00026196) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00026196) postcard_pane_g

0xa78e,	// (0x00021440) main_mp2_pane_g1_ParamLimits

0xa78e,	// (0x00021440) main_mp2_pane_g1

0xa79a,	// (0x0002144c) main_mp2_pane_g2_ParamLimits

0xa79a,	// (0x0002144c) main_mp2_pane_g2

0xa7a6,	// (0x00021458) main_mp2_pane_g3_ParamLimits

0xa7a6,	// (0x00021458) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000261a5) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000261a5) main_mp2_pane_g

0xa7b2,	// (0x00021464) main_mp2_pane_t1_ParamLimits

0xa7b2,	// (0x00021464) main_mp2_pane_t1

0xa7c9,	// (0x0002147b) main_mp2_pane_t2_ParamLimits

0xa7c9,	// (0x0002147b) main_mp2_pane_t2

0xa7db,	// (0x0002148d) main_mp2_pane_t3_ParamLimits

0xa7db,	// (0x0002148d) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000261ac) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000261ac) main_mp2_pane_t

0x19e7,	// (0x00018699) pec_content_pane_ParamLimits

0x19e7,	// (0x00018699) pec_content_pane

0x0f34,	// (0x00017be6) scroll_pane_cp015

0x19f9,	// (0x000186ab) pec_attribute_pane_ParamLimits

0x19f9,	// (0x000186ab) pec_attribute_pane

0xa7ed,	// (0x0002149f) pec_content_pane_g1_ParamLimits

0xa7ed,	// (0x0002149f) pec_content_pane_g1

0x1a09,	// (0x000186bb) pec_content_pane_t1_ParamLimits

0x1a09,	// (0x000186bb) pec_content_pane_t1

0x1a1b,	// (0x000186cd) pec_content_pane_t2_ParamLimits

0x1a1b,	// (0x000186cd) pec_content_pane_t2

0x0001,

0xf501,	// (0x000261b3) pec_content_pane_t_ParamLimits

0xf501,	// (0x000261b3) pec_content_pane_t

0xa7f9,	// (0x000214ab) list_single_graphic_pane_cp01_ParamLimits

0xa7f9,	// (0x000214ab) list_single_graphic_pane_cp01

0x08d1,	// (0x00017583) bg_popup_sub_pane_cp04

0x1a2d,	// (0x000186df) popup_mup_playback_window_g1

0x1a39,	// (0x000186eb) popup_mup_playback_window_t1

0x1a4e,	// (0x00018700) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000261b8) popup_mup_playback_window_t

0x1a85,	// (0x00018737) main_image_pane_g1_ParamLimits

0x1a85,	// (0x00018737) main_image_pane_g1

0x1ac8,	// (0x0001877a) scroll_pane_cp018_ParamLimits

0x1ac8,	// (0x0001877a) scroll_pane_cp018

0x1ae0,	// (0x00018792) scroll_pane_cp016_ParamLimits

0x1ae0,	// (0x00018792) scroll_pane_cp016

0xa89d,	// (0x0002154f) smil2_image_pane_ParamLimits

0xa89d,	// (0x0002154f) smil2_image_pane

0xa8d1,	// (0x00021583) smil2_root_pane_ParamLimits

0xa8d1,	// (0x00021583) smil2_root_pane

0xa8fd,	// (0x000215af) smil2_text_pane_ParamLimits

0xa8fd,	// (0x000215af) smil2_text_pane

0x0676,	// (0x00017328) bg_list_pane_cp06

0x1b1c,	// (0x000187ce) grid_radio_pane

0x0676,	// (0x00017328) bg_popup_window_pane_cp06

0x1b24,	// (0x000187d6) main_fmradio_pane_t1

0x1519,	// (0x000181cb) heading_pane_cp04

0x1b32,	// (0x000187e4) main_fmradio_pane_t2

0x2b12,	// (0x000197c4) popup_cale_lunar_info_window_g1

0x1b40,	// (0x000187f2) main_fmradio_pane_t3

0x2b1a,	// (0x000197cc) popup_cale_lunar_info_window_g2

0x1b4e,	// (0x00018800) main_fmradio_pane_t4

0x0001,

0x1b5c,	// (0x0001880e) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00026293) popup_cale_lunar_info_window_g

0xf51b,	// (0x000261cd) main_fmradio_pane_t

0x1b6a,	// (0x0001881c) wait_bar_pane_cp03

0x1b72,	// (0x00018824) cell_fmradio_pane_ParamLimits

0x1b72,	// (0x00018824) cell_fmradio_pane

0x19cb,	// (0x0001867d) cell_fmradio_pane_g1_ParamLimits

0x19cb,	// (0x0001867d) cell_fmradio_pane_g1

0x0676,	// (0x00017328) grid_highlight_pane_cp011

0x1b85,	// (0x00018837) poc_content_pane_ParamLimits

0x1b85,	// (0x00018837) poc_content_pane

0x1b97,	// (0x00018849) scroll_pane_cp019

0xa93d,	// (0x000215ef) popup_call_poc_act_window_ParamLimits

0xa93d,	// (0x000215ef) popup_call_poc_act_window

0xa94a,	// (0x000215fc) popup_call_poc_inact_window_ParamLimits

0xa94a,	// (0x000215fc) popup_call_poc_inact_window

0xf5b8,	// (0x0002626a) bg_popup_call_poc_act_pane_g

0x2a82,	// (0x00019734) bg_popup_call_poc_inact_pane_g1

0x2a8a,	// (0x0001973c) bg_popup_call_poc_inact_pane_g2

0x1b9f,	// (0x00018851) popup_call_poc_act_window_g2

0x2a92,	// (0x00019744) bg_popup_call_poc_inact_pane_g3

0x2a9a,	// (0x0001974c) bg_popup_call_poc_inact_pane_g4

0x2aa2,	// (0x00019754) bg_popup_call_poc_inact_pane_g5

0x1ba7,	// (0x00018859) popup_call_poc_act_window_t1_ParamLimits

0x1ba7,	// (0x00018859) popup_call_poc_act_window_t1

0x1bcf,	// (0x00018881) popup_call_poc_act_window_t2_ParamLimits

0x1bcf,	// (0x00018881) popup_call_poc_act_window_t2

0x1bf7,	// (0x000188a9) popup_call_poc_act_window_t3_ParamLimits

0x1bf7,	// (0x000188a9) popup_call_poc_act_window_t3

0x1c1f,	// (0x000188d1) popup_call_poc_act_window_t4_ParamLimits

0x1c1f,	// (0x000188d1) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000261d8) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000261d8) popup_call_poc_act_window_t

0x2aaa,	// (0x0001975c) bg_popup_call_poc_inact_pane_g6

0x2ab2,	// (0x00019764) bg_popup_call_poc_inact_pane_g7

0x2aba,	// (0x0001976c) bg_popup_call_poc_inact_pane_g8

0x1c31,	// (0x000188e3) popup_call_poc_inact_window_g2

0x2ac2,	// (0x00019774) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00026257) bg_popup_call_poc_inact_pane_g

0x1c39,	// (0x000188eb) popup_call_poc_inact_window_t1_ParamLimits

0x1c39,	// (0x000188eb) popup_call_poc_inact_window_t1

0x1c4e,	// (0x00018900) popup_call_poc_inact_window_t2_ParamLimits

0x1c4e,	// (0x00018900) popup_call_poc_inact_window_t2

0x1c63,	// (0x00018915) popup_call_poc_inact_window_t3_ParamLimits

0x1c63,	// (0x00018915) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000261e1) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000261e1) popup_call_poc_inact_window_t

0x2c82,	// (0x00019934) context_pane_ParamLimits

0xaf31,	// (0x00021be3) signal_pane_ParamLimits

0x1796,	// (0x00018448) main_call2_pane

0x2c70,	// (0x00019922) popup_phob_thumbnail2_window_ParamLimits

0x2c70,	// (0x00019922) popup_phob_thumbnail2_window

0x705b,	// (0x0001dd0d) aid_hotspot_pointer_arrow_pane

0x7063,	// (0x0001dd15) aid_hotspot_pointer_hand_pane

0xac6f,	// (0x00021921) phob_pre_status_pane_g5

0x8a14,	// (0x0001f6c6) cams_zoom_pane_ParamLimits

0x8a20,	// (0x0001f6d2) image_vga_pane_ParamLimits

0x8a2f,	// (0x0001f6e1) main_camera_pane_g1_ParamLimits

0x8a3d,	// (0x0001f6ef) main_camera_pane_g2_ParamLimits

0x8a4b,	// (0x0001f6fd) main_camera_pane_g3_ParamLimits

0x8a57,	// (0x0001f709) main_camera_pane_g4_ParamLimits

0x8a63,	// (0x0001f715) main_camera_pane_g5_ParamLimits

0x8a6f,	// (0x0001f721) main_camera_pane_g6_ParamLimits

0x8a7b,	// (0x0001f72d) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00025ee0) main_camera_pane_g_ParamLimits

0x8a87,	// (0x0001f739) main_camera_pane_t1_ParamLimits

0x8a99,	// (0x0001f74b) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00025ef1) main_camera_pane_t_ParamLimits

0x08d1,	// (0x00017583) bg_popup_preview_window_pane_cp01_ParamLimits

0x08d1,	// (0x00017583) bg_popup_preview_window_pane_cp01

0x1c78,	// (0x0001892a) popup_phob_thumbnail2_window_g1_ParamLimits

0x1c78,	// (0x0001892a) popup_phob_thumbnail2_window_g1

0x0676,	// (0x00017328) call2_cli_visual_pane

0xa966,	// (0x00021618) popup_call2_audio_conf_window_ParamLimits

0xa966,	// (0x00021618) popup_call2_audio_conf_window

0xa97b,	// (0x0002162d) popup_call2_audio_first_window_ParamLimits

0xa97b,	// (0x0002162d) popup_call2_audio_first_window

0xaa19,	// (0x000216cb) popup_call2_audio_in_window_ParamLimits

0xaa19,	// (0x000216cb) popup_call2_audio_in_window

0xaa5b,	// (0x0002170d) popup_call2_audio_out_window_ParamLimits

0xaa5b,	// (0x0002170d) popup_call2_audio_out_window

0xaabd,	// (0x0002176f) popup_call2_audio_second_window_ParamLimits

0xaabd,	// (0x0002176f) popup_call2_audio_second_window

0xab1b,	// (0x000217cd) popup_call2_audio_wait_window_ParamLimits

0xab1b,	// (0x000217cd) popup_call2_audio_wait_window

0x0676,	// (0x00017328) bg_popup_call2_act_pane_cp03

0x08b3,	// (0x00017565) list_conf_pane_cp

0x1c84,	// (0x00018936) popup_call2_audio_conf_window_t1

0x1c92,	// (0x00018944) list_single_graphic_popup_conf2_pane_ParamLimits

0x1c92,	// (0x00018944) list_single_graphic_popup_conf2_pane

0x15ac,	// (0x0001825e) list_highlight_pane_cp04

0x1ca5,	// (0x00018957) list_single_graphic_popup_conf2_pane_g1

0x15bd,	// (0x0001826f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000261e8) list_single_graphic_popup_conf2_pane_g

0x1caf,	// (0x00018961) list_single_graphic_popup_conf2_pane_t1

0x1cbd,	// (0x0001896f) bg_popup_call2_act_pane_cp01_ParamLimits

0x1cbd,	// (0x0001896f) bg_popup_call2_act_pane_cp01

0x1d47,	// (0x000189f9) call_type_pane_cp05_ParamLimits

0x1d47,	// (0x000189f9) call_type_pane_cp05

0x1d9b,	// (0x00018a4d) popup_call2_audio_second_window_g1_ParamLimits

0x1d9b,	// (0x00018a4d) popup_call2_audio_second_window_g1

0x1def,	// (0x00018aa1) popup_call2_audio_second_window_g2_ParamLimits

0x1def,	// (0x00018aa1) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000261ed) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000261ed) popup_call2_audio_second_window_g

0x1e54,	// (0x00018b06) popup_call2_audio_second_window_t1_ParamLimits

0x1e54,	// (0x00018b06) popup_call2_audio_second_window_t1

0x1f0f,	// (0x00018bc1) popup_call2_audio_second_window_t2_ParamLimits

0x1f0f,	// (0x00018bc1) popup_call2_audio_second_window_t2

0x1f62,	// (0x00018c14) popup_call2_audio_second_window_t3_ParamLimits

0x1f62,	// (0x00018c14) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000261f4) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000261f4) popup_call2_audio_second_window_t

0x0676,	// (0x00017328) bg_popup_call2_in_pane_cp02

0x0680,	// (0x00017332) call_type_pane_cp04

0x0688,	// (0x0001733a) popup_call2_audio_wait_window_g1

0x0690,	// (0x00017342) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025dcd) popup_call2_audio_wait_window_g

0x0698,	// (0x0001734a) popup_call2_audio_wait_window_t3

0x2055,	// (0x00018d07) bg_popup_call2_act_pane_ParamLimits

0x2055,	// (0x00018d07) bg_popup_call2_act_pane

0x2115,	// (0x00018dc7) call_type_pane_cp03_ParamLimits

0x2115,	// (0x00018dc7) call_type_pane_cp03

0x2179,	// (0x00018e2b) popup_call2_audio_first_window_g1_ParamLimits

0x2179,	// (0x00018e2b) popup_call2_audio_first_window_g1

0x21e9,	// (0x00018e9b) popup_call2_audio_first_window_g2_ParamLimits

0x21e9,	// (0x00018e9b) popup_call2_audio_first_window_g2

0x1867,	// (0x00018519) popup_call2_audio_first_window_g3_ParamLimits

0x1867,	// (0x00018519) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000261fd) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000261fd) popup_call2_audio_first_window_g

0x22c7,	// (0x00018f79) popup_call2_audio_first_window_t1_ParamLimits

0x22c7,	// (0x00018f79) popup_call2_audio_first_window_t1

0x23ca,	// (0x0001907c) popup_call2_audio_first_window_t4_ParamLimits

0x23ca,	// (0x0001907c) popup_call2_audio_first_window_t4

0x24ad,	// (0x0001915f) popup_call2_audio_first_window_t5_ParamLimits

0x24ad,	// (0x0001915f) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00026208) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00026208) popup_call2_audio_first_window_t

0x08c9,	// (0x0001757b) bg_popup_call2_act_pane_g1

0x2b22,	// (0x000197d4) popup_cale_lunar_info_window_t1

0x2b30,	// (0x000197e2) popup_cale_lunar_info_window_t2

0x2b3e,	// (0x000197f0) popup_cale_lunar_info_window_t3

0x0676,	// (0x00017328) bg_popup_call2_bubble_pane

0x25ae,	// (0x00019260) bg_popup_call2_in_pane_cp01_ParamLimits

0x25ae,	// (0x00019260) bg_popup_call2_in_pane_cp01

0x0352,	// (0x00017004) call_type_pane_cp02

0x25f6,	// (0x000192a8) popup_call2_audio_out_window_g1_ParamLimits

0x25f6,	// (0x000192a8) popup_call2_audio_out_window_g1

0x2622,	// (0x000192d4) popup_call2_audio_out_window_g2_ParamLimits

0x2622,	// (0x000192d4) popup_call2_audio_out_window_g2

0x264a,	// (0x000192fc) popup_call2_audio_out_window_g3_ParamLimits

0x264a,	// (0x000192fc) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00026211) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00026211) popup_call2_audio_out_window_g

0x2685,	// (0x00019337) popup_call2_audio_out_window_t1_ParamLimits

0x2685,	// (0x00019337) popup_call2_audio_out_window_t1

0x26e4,	// (0x00019396) popup_call2_audio_out_window_t2_ParamLimits

0x26e4,	// (0x00019396) popup_call2_audio_out_window_t2

0x2738,	// (0x000193ea) popup_call2_audio_out_window_t3_ParamLimits

0x2738,	// (0x000193ea) popup_call2_audio_out_window_t3

0x274e,	// (0x00019400) popup_call2_audio_out_window_t4_ParamLimits

0x274e,	// (0x00019400) popup_call2_audio_out_window_t4

0x2764,	// (0x00019416) popup_call2_audio_out_window_t5_ParamLimits

0x2764,	// (0x00019416) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0002621a) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0002621a) popup_call2_audio_out_window_t

0x27c8,	// (0x0001947a) bg_popup_call2_in_pane_ParamLimits

0x27c8,	// (0x0001947a) bg_popup_call2_in_pane

0x2824,	// (0x000194d6) popup_call2_audio_in_window_g1_ParamLimits

0x2824,	// (0x000194d6) popup_call2_audio_in_window_g1

0x285c,	// (0x0001950e) popup_call2_audio_in_window_g2_ParamLimits

0x285c,	// (0x0001950e) popup_call2_audio_in_window_g2

0x2894,	// (0x00019546) popup_call2_audio_in_window_g3_ParamLimits

0x2894,	// (0x00019546) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00026227) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00026227) popup_call2_audio_in_window_g

0x28ec,	// (0x0001959e) popup_call2_audio_in_window_t1_ParamLimits

0x28ec,	// (0x0001959e) popup_call2_audio_in_window_t1

0x296c,	// (0x0001961e) popup_call2_audio_in_window_t2_ParamLimits

0x296c,	// (0x0001961e) popup_call2_audio_in_window_t2

0x29ec,	// (0x0001969e) popup_call2_audio_in_window_t3_ParamLimits

0x29ec,	// (0x0001969e) popup_call2_audio_in_window_t3

0x2a06,	// (0x000196b8) popup_call2_audio_in_window_t4_ParamLimits

0x2a06,	// (0x000196b8) popup_call2_audio_in_window_t4

0x2a18,	// (0x000196ca) popup_call2_audio_in_window_t5_ParamLimits

0x2a18,	// (0x000196ca) popup_call2_audio_in_window_t5

0x2a2d,	// (0x000196df) popup_call2_audio_in_window_t6_ParamLimits

0x2a2d,	// (0x000196df) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00026230) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00026230) popup_call2_audio_in_window_t

0x08c9,	// (0x0001757b) bg_popup_call2_in_pane_g1

0x2b4c,	// (0x000197fe) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00026298) popup_cale_lunar_info_window_t

0x08d1,	// (0x00017583) bg_popup_call2_rect_pane_ParamLimits

0x08d1,	// (0x00017583) bg_popup_call2_rect_pane

0x0676,	// (0x00017328) call2_cli_visual_graphic_pane

0x0676,	// (0x00017328) call2_cli_visual_text_pane

0x70cd,	// (0x0001dd7f) smil_status_volume_pane_g3

0x0002,

0x0a7b,	// (0x0001772d) call2_cli_visual_graphic_pane_g1

0x0a7b,	// (0x0001772d) call2_cli_visual_graphic_pane_g2

0x0a7b,	// (0x0001772d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0002623d) call2_cli_visual_graphic_pane_g

0x2a42,	// (0x000196f4) bg_popup_call2_rect_pane_g1

0x0b23,	// (0x000177d5) bg_popup_call2_rect_pane_g2

0x2a4a,	// (0x000196fc) bg_popup_call2_rect_pane_g3

0x2a52,	// (0x00019704) bg_popup_call2_rect_pane_g4

0x2a5a,	// (0x0001970c) bg_popup_call2_rect_pane_g5

0x2a62,	// (0x00019714) bg_popup_call2_rect_pane_g6

0x2a6a,	// (0x0001971c) bg_popup_call2_rect_pane_g7

0x2a72,	// (0x00019724) bg_popup_call2_rect_pane_g8

0x2a7a,	// (0x0001972c) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00026244) bg_popup_call2_rect_pane_g

0x2a82,	// (0x00019734) bg_popup_call2_bubble_pane_g1

0x2a8a,	// (0x0001973c) bg_popup_call2_bubble_pane_g2

0x2a92,	// (0x00019744) bg_popup_call2_bubble_pane_g3

0x2a9a,	// (0x0001974c) bg_popup_call2_bubble_pane_g4

0x2aa2,	// (0x00019754) bg_popup_call2_bubble_pane_g5

0x2aaa,	// (0x0001975c) bg_popup_call2_bubble_pane_g6

0x2ab2,	// (0x00019764) bg_popup_call2_bubble_pane_g7

0x2aba,	// (0x0001976c) bg_popup_call2_bubble_pane_g8

0x2ac2,	// (0x00019774) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00026257) bg_popup_call2_bubble_pane_g

0x8709,	// (0x0001f3bb) aid_cale_week_size_cell_pane

0x8aab,	// (0x0001f75d) aid_cams_cif_uncrop_pane_ParamLimits

0x8aab,	// (0x0001f75d) aid_cams_cif_uncrop_pane

0x8c0e,	// (0x0001f8c0) aid_cams_size_cell_ParamLimits

0x8c0e,	// (0x0001f8c0) aid_cams_size_cell

0x8c1a,	// (0x0001f8cc) grid_cams_pane_ParamLimits

0x8c28,	// (0x0001f8da) linegrid_cams_pane_ParamLimits

0x8d55,	// (0x0001fa07) call_video_pane_t1

0x8d76,	// (0x0001fa28) call_video_pane_t2

0x0001,

0xf292,	// (0x00025f44) call_video_pane_t

0x92f6,	// (0x0001ffa8) aid_cale_month_size_cell_pane_ParamLimits

0x92f6,	// (0x0001ffa8) aid_cale_month_size_cell_pane

0xf62f,	// (0x000262e1) smil_status_volume_pane_g

0x70da,	// (0x0001dd8c) volume_smil_pane_ParamLimits

0x01f9,	// (0x00016eab) aid_popup2_width_pane

0x8646,	// (0x0001f2f8) cell_qdial_pane_g4_ParamLimits

0x8646,	// (0x0001f2f8) cell_qdial_pane_g4

0x9f8b,	// (0x00020c3d) aid_blid_cardinal_pane_ParamLimits

0x9f9b,	// (0x00020c4d) aid_blid_destination_pane_ParamLimits

0x9f9b,	// (0x00020c4d) aid_blid_destination_pane

0x08d1,	// (0x00017583) bg_popup_call_poc_act_pane_ParamLimits

0x08d1,	// (0x00017583) bg_popup_call_poc_act_pane

0x08d1,	// (0x00017583) bg_popup_call_poc_inact_pane_ParamLimits

0x08d1,	// (0x00017583) bg_popup_call_poc_inact_pane

0x2ad2,	// (0x00019784) bg_popup_call_poc_act_pane_g1

0x2ada,	// (0x0001978c) bg_popup_call_poc_act_pane_g2

0x2ae2,	// (0x00019794) bg_popup_call_poc_act_pane_g3

0x2a9a,	// (0x0001974c) bg_popup_call_poc_act_pane_g4

0x2aa2,	// (0x00019754) bg_popup_call_poc_act_pane_g5

0x2aea,	// (0x0001979c) bg_popup_call_poc_act_pane_g6

0x2ab2,	// (0x00019764) bg_popup_call_poc_act_pane_g7

0x2af2,	// (0x000197a4) bg_popup_call_poc_act_pane_g8

0x0676,	// (0x00017328) main_usb_pane

0x2c4b,	// (0x000198fd) popup_cale_lunar_info_window

0x9095,	// (0x0001fd47) im_reading_pane_t1_ParamLimits

0x0e8c,	// (0x00017b3e) list_im_pane_ParamLimits

0x0e9d,	// (0x00017b4f) scroll_pane_cp07_ParamLimits

0x0676,	// (0x00017328) grid_highlight_pane_cp012

0x08d1,	// (0x00017583) mup_scale_pane_ParamLimits

0x1867,	// (0x00018519) main_usb_pane_g1_ParamLimits

0x1867,	// (0x00018519) main_usb_pane_g1

0xab92,	// (0x00021844) main_usb_pane_g2_ParamLimits

0xab92,	// (0x00021844) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00026281) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00026281) main_usb_pane_g

0xab9e,	// (0x00021850) main_usb_pane_t1_ParamLimits

0xab9e,	// (0x00021850) main_usb_pane_t1

0xabb0,	// (0x00021862) main_usb_pane_t2_ParamLimits

0xabb0,	// (0x00021862) main_usb_pane_t2

0xabc2,	// (0x00021874) main_usb_pane_t3_ParamLimits

0xabc2,	// (0x00021874) main_usb_pane_t3

0xabd4,	// (0x00021886) main_usb_pane_t4_ParamLimits

0xabd4,	// (0x00021886) main_usb_pane_t4

0xabe6,	// (0x00021898) main_usb_pane_t5_ParamLimits

0xabe6,	// (0x00021898) main_usb_pane_t5

0xabf8,	// (0x000218aa) main_usb_pane_t6_ParamLimits

0xabf8,	// (0x000218aa) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00026286) main_usb_pane_t_ParamLimits

0x9f31,	// (0x00020be3) aid_text_placing

0x9f3d,	// (0x00020bef) main_location2_pane_t1_ParamLimits

0x9f51,	// (0x00020c03) main_location2_pane_t2_ParamLimits

0x9f65,	// (0x00020c17) main_location2_pane_t3_ParamLimits

0x9f79,	// (0x00020c2b) main_location2_pane_t4_ParamLimits

0x9f79,	// (0x00020c2b) main_location2_pane_t4

0xf3f3,	// (0x000260a5) main_location2_pane_t_ParamLimits

0x0915,	// (0x000175c7) find_pinb_pane_g2_ParamLimits

0x0915,	// (0x000175c7) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00025df3) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00025df3) find_pinb_pane_g

0x0921,	// (0x000175d3) find_pinb_pane_t1_ParamLimits

0x0933,	// (0x000175e5) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00025df8) find_pinb_pane_t_ParamLimits

0x0676,	// (0x00017328) main_call3_pane

0x970e,	// (0x000203c0) cale_month_day_heading_pane_t1_ParamLimits

0x976c,	// (0x0002041e) cale_month_day_heading_pane_t2_ParamLimits

0x97d1,	// (0x00020483) cale_month_day_heading_pane_t3_ParamLimits

0x9836,	// (0x000204e8) cale_month_day_heading_pane_t4_ParamLimits

0x989b,	// (0x0002054d) cale_month_day_heading_pane_t5_ParamLimits

0x9900,	// (0x000205b2) cale_month_day_heading_pane_t6_ParamLimits

0x996d,	// (0x0002061f) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00025f7c) cale_month_day_heading_pane_t_ParamLimits

0x1113,	// (0x00017dc5) smil_status_volume_pane

0xa746,	// (0x000213f8) postcard_address_pane_ParamLimits

0xa746,	// (0x000213f8) postcard_address_pane

0xa752,	// (0x00021404) postcard_message_pane_ParamLimits

0xa752,	// (0x00021404) postcard_message_pane

0xab5a,	// (0x0002180c) call2_cli_visual_pane_t1_ParamLimits

0xab5a,	// (0x0002180c) call2_cli_visual_pane_t1

0xb11f,	// (0x00021dd1) postcard_message_pane_t1_ParamLimits

0xb11f,	// (0x00021dd1) postcard_message_pane_t1

0xb108,	// (0x00021dba) postcard_address_pane_t1_ParamLimits

0xb108,	// (0x00021dba) postcard_address_pane_t1

0xb0f9,	// (0x00021dab) popup_call3_audio_in_window_ParamLimits

0xb0f9,	// (0x00021dab) popup_call3_audio_in_window

0xafe1,	// (0x00021c93) bg_popup_call3_in_pane_ParamLimits

0xafe1,	// (0x00021c93) bg_popup_call3_in_pane

0xb03f,	// (0x00021cf1) popup_call3_audio_in_window_g1_ParamLimits

0xb03f,	// (0x00021cf1) popup_call3_audio_in_window_g1

0xb057,	// (0x00021d09) popup_call3_audio_in_window_g2_ParamLimits

0xb057,	// (0x00021d09) popup_call3_audio_in_window_g2

0xb06f,	// (0x00021d21) popup_call3_audio_in_window_g3_ParamLimits

0xb06f,	// (0x00021d21) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000262e8) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000262e8) popup_call3_audio_in_window_g

0xb097,	// (0x00021d49) popup_call3_audio_in_window_t1_ParamLimits

0xb097,	// (0x00021d49) popup_call3_audio_in_window_t1

0xb0bf,	// (0x00021d71) popup_call3_audio_in_window_t2_ParamLimits

0xb0bf,	// (0x00021d71) popup_call3_audio_in_window_t2

0xb0e7,	// (0x00021d99) popup_call3_audio_in_window_t3_ParamLimits

0xb0e7,	// (0x00021d99) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000262f1) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000262f1) popup_call3_audio_in_window_t

0x1796,	// (0x00018448) bg_popup_call3_rect_pane

0x2a42,	// (0x000196f4) bg_popup_call3_rect_pane_g1

0x0b23,	// (0x000177d5) bg_popup_call3_rect_pane_g2

0x2a4a,	// (0x000196fc) bg_popup_call3_rect_pane_g3

0x2a52,	// (0x00019704) bg_popup_call3_rect_pane_g4

0x2a5a,	// (0x0001970c) bg_popup_call3_rect_pane_g5

0x2a62,	// (0x00019714) bg_popup_call3_rect_pane_g6

0x2a6a,	// (0x0001971c) bg_popup_call3_rect_pane_g7

0xa37b,	// (0x0002102d) mup_visualizer_osc_pane

0x1875,	// (0x00018527) mup_visualizer_spec_pane

0xb001,	// (0x00021cb3) call3_video_qcif_pane_ParamLimits

0xb001,	// (0x00021cb3) call3_video_qcif_pane

0xb011,	// (0x00021cc3) call3_video_qcif_uncrop_pane_ParamLimits

0xb011,	// (0x00021cc3) call3_video_qcif_uncrop_pane

0xb01d,	// (0x00021ccf) call3_video_subqcif_pane_ParamLimits

0xb01d,	// (0x00021ccf) call3_video_subqcif_pane

0xb02f,	// (0x00021ce1) call3_video_subqcif_uncrop_pane_ParamLimits

0xb02f,	// (0x00021ce1) call3_video_subqcif_uncrop_pane

0xb087,	// (0x00021d39) popup_call3_audio_in_window_g4_ParamLimits

0xb087,	// (0x00021d39) popup_call3_audio_in_window_g4

0xafd0,	// (0x00021c82) mup_spec_half_pane

0xafd9,	// (0x00021c8b) mup_spec_half_pane_cp

0x2ce2,	// (0x00019994) mup_osc_middle_pane

0x2ceb,	// (0x0001999d) mup_visualizer_osc_pane_g1

0xafb1,	// (0x00021c63) mup_spec_bar_pane_ParamLimits

0xafb1,	// (0x00021c63) mup_spec_bar_pane

0x2ccf,	// (0x00019981) mup_spec_bar_pane_g1

0x2cd9,	// (0x0001998b) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000262dc) mup_spec_bar_pane_g

0x8709,	// (0x0001f3bb) aid_cale_week_size_cell_pane_ParamLimits

0x871c,	// (0x0001f3ce) bg_cale_heading_pane_ParamLimits

0x0bc4,	// (0x00017876) bg_cale_pane_cp01_ParamLimits

0x8738,	// (0x0001f3ea) cale_week_corner_pane_ParamLimits

0x8749,	// (0x0001f3fb) cale_week_day_heading_pane_ParamLimits

0x8765,	// (0x0001f417) cale_week_scroll_pane_g1_ParamLimits

0x877e,	// (0x0001f430) cale_week_scroll_pane_g2_ParamLimits

0x878f,	// (0x0001f441) cale_week_scroll_pane_g3_ParamLimits

0x87a0,	// (0x0001f452) cale_week_scroll_pane_g4_ParamLimits

0x87b1,	// (0x0001f463) cale_week_scroll_pane_g5_ParamLimits

0x87c2,	// (0x0001f474) cale_week_scroll_pane_g6_ParamLimits

0x87d3,	// (0x0001f485) cale_week_scroll_pane_g7_ParamLimits

0x87e6,	// (0x0001f498) cale_week_scroll_pane_g8_ParamLimits

0x87f9,	// (0x0001f4ab) cale_week_scroll_pane_g9_ParamLimits

0x880a,	// (0x0001f4bc) cale_week_scroll_pane_g10_ParamLimits

0x881b,	// (0x0001f4cd) cale_week_scroll_pane_g11_ParamLimits

0x882c,	// (0x0001f4de) cale_week_scroll_pane_g12_ParamLimits

0x8845,	// (0x0001f4f7) cale_week_scroll_pane_g13_ParamLimits

0x885e,	// (0x0001f510) cale_week_scroll_pane_g14_ParamLimits

0x8877,	// (0x0001f529) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00025e84) cale_week_scroll_pane_g_ParamLimits

0x8890,	// (0x0001f542) cale_week_time_pane_ParamLimits

0x88a3,	// (0x0001f555) grid_cale_week_pane_ParamLimits

0x0bdd,	// (0x0001788f) listscroll_cale_week_pane_t1

0x88c0,	// (0x0001f572) scroll_pane_cp08_ParamLimits

0x9347,	// (0x0001fff9) cale_month_corner_pane_ParamLimits

0x10b3,	// (0x00017d65) cale_month_pane_t1

0x96bd,	// (0x0002036f) cale_month_week_pane_ParamLimits

0x1867,	// (0x00018519) popup_call_status_window_g1_ParamLimits

0x9ddc,	// (0x00020a8e) popup_call_status_window_g2_ParamLimits

0x9de8,	// (0x00020a9a) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0002602c) popup_call_status_window_g_ParamLimits

0x14a2,	// (0x00018154) aid_call2_pane

0xa61d,	// (0x000212cf) msg_header_pane_g1

0xa746,	// (0x000213f8) postcard_address2_pane_ParamLimits

0xa746,	// (0x000213f8) postcard_address2_pane

0xa752,	// (0x00021404) postcard_message2_pane_ParamLimits

0xa752,	// (0x00021404) postcard_message2_pane

0xaf3f,	// (0x00021bf1) message2_row_pane_ParamLimits

0xaf3f,	// (0x00021bf1) message2_row_pane

0xaf5c,	// (0x00021c0e) address2_row_pane_ParamLimits

0xaf5c,	// (0x00021c0e) address2_row_pane

0x2c9d,	// (0x0001994f) postcard_message2_row_pane_g1

0x2ca5,	// (0x00019957) postcard_message2_row_pane_t1

0x2c9d,	// (0x0001994f) address2_row_pane_g1

0x2ca5,	// (0x00019957) address2_row_pane_t1

0x6f16,	// (0x0001dbc8) aid_size_cell_vorec

0x0676,	// (0x00017328) main_rss_pane

0xaf6f,	// (0x00021c21) rss_list_single_pane_ParamLimits

0xaf6f,	// (0x00021c21) rss_list_single_pane

0x2cb3,	// (0x00019965) rss_list_single_pane_t1

0x2cc1,	// (0x00019973) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000262d7) rss_list_single_pane_t

0x0676,	// (0x00017328) main_camera2_pane

0x0676,	// (0x00017328) main_video2_pane

0x7138,	// (0x0001ddea) cams_zoom_pane_cp2_ParamLimits

0x7138,	// (0x0001ddea) cams_zoom_pane_cp2

0x7144,	// (0x0001ddf6) image2_vga_pane_ParamLimits

0x7144,	// (0x0001ddf6) image2_vga_pane

0x7153,	// (0x0001de05) main_camera2_pane_g1_ParamLimits

0x7153,	// (0x0001de05) main_camera2_pane_g1

0x715f,	// (0x0001de11) main_camera2_pane_g2_ParamLimits

0x715f,	// (0x0001de11) main_camera2_pane_g2

0x716b,	// (0x0001de1d) main_camera2_pane_g3_ParamLimits

0x716b,	// (0x0001de1d) main_camera2_pane_g3

0x7177,	// (0x0001de29) main_camera2_pane_g4_ParamLimits

0x7177,	// (0x0001de29) main_camera2_pane_g4

0x7183,	// (0x0001de35) main_camera2_pane_g5_ParamLimits

0x7183,	// (0x0001de35) main_camera2_pane_g5

0x718f,	// (0x0001de41) main_camera2_pane_g6_ParamLimits

0x718f,	// (0x0001de41) main_camera2_pane_g6

0x719b,	// (0x0001de4d) main_camera2_pane_g7_ParamLimits

0x719b,	// (0x0001de4d) main_camera2_pane_g7

0x71a7,	// (0x0001de59) main_camera2_pane_g8_ParamLimits

0x71a7,	// (0x0001de59) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000262f8) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000262f8) main_camera2_pane_g

0x71bf,	// (0x0001de71) main_camera2_pane_t1_ParamLimits

0x71bf,	// (0x0001de71) main_camera2_pane_t1

0x71d1,	// (0x0001de83) main_camera2_pane_t2_ParamLimits

0x71d1,	// (0x0001de83) main_camera2_pane_t2

0x71e3,	// (0x0001de95) main_camera2_pane_t3_ParamLimits

0x71e3,	// (0x0001de95) main_camera2_pane_t3

0x71f5,	// (0x0001dea7) main_camera2_pane_t4_ParamLimits

0x71f5,	// (0x0001dea7) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0002630b) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0002630b) main_camera2_pane_t

0x7257,	// (0x0001df09) cams_zoom_pane_cp4_ParamLimits

0x7257,	// (0x0001df09) cams_zoom_pane_cp4

0x7267,	// (0x0001df19) image2_cif_pane_ParamLimits

0x7267,	// (0x0001df19) image2_cif_pane

0x727c,	// (0x0001df2e) image2_subqcif_pane_ParamLimits

0x727c,	// (0x0001df2e) image2_subqcif_pane

0x728b,	// (0x0001df3d) main_video2_pane_g1_ParamLimits

0x728b,	// (0x0001df3d) main_video2_pane_g1

0x729d,	// (0x0001df4f) main_video2_pane_g2_ParamLimits

0x729d,	// (0x0001df4f) main_video2_pane_g2

0x72ad,	// (0x0001df5f) main_video2_pane_g3_ParamLimits

0x72ad,	// (0x0001df5f) main_video2_pane_g3

0x72bd,	// (0x0001df6f) main_video2_pane_g4_ParamLimits

0x72bd,	// (0x0001df6f) main_video2_pane_g4

0x72cd,	// (0x0001df7f) main_video2_pane_g5_ParamLimits

0x72cd,	// (0x0001df7f) main_video2_pane_g5

0x72dd,	// (0x0001df8f) main_video2_pane_g6_ParamLimits

0x72dd,	// (0x0001df8f) main_video2_pane_g6

0x0005,

0xf668,	// (0x0002631a) main_video2_pane_g_ParamLimits

0xf668,	// (0x0002631a) main_video2_pane_g

0x72ef,	// (0x0001dfa1) main_video2_pane_t1_ParamLimits

0x72ef,	// (0x0001dfa1) main_video2_pane_t1

0x7309,	// (0x0001dfbb) main_video2_pane_t2_ParamLimits

0x7309,	// (0x0001dfbb) main_video2_pane_t2

0x732f,	// (0x0001dfe1) main_video2_pane_t3_ParamLimits

0x732f,	// (0x0001dfe1) main_video2_pane_t3

0x0002,

0xf675,	// (0x00026327) main_video2_pane_t_ParamLimits

0xf675,	// (0x00026327) main_video2_pane_t

0xacaf,	// (0x00021961) call_muted_g2

0x0001,

0xf617,	// (0x000262c9) call_muted_g

0x0676,	// (0x00017328) main_mup2_pane

0x2da2,	// (0x00019a54) main_mup2_pane_g1_ParamLimits

0x2da2,	// (0x00019a54) main_mup2_pane_g1

0xb13a,	// (0x00021dec) main_mup2_pane_g2_ParamLimits

0xb13a,	// (0x00021dec) main_mup2_pane_g2

0x737e,	// (0x0001e030) main_mup_pane_g13_cp1

0x7386,	// (0x0001e038) mup_volume_pane_cp1

0xb15a,	// (0x00021e0c) main_mup2_pane_g4_ParamLimits

0xb15a,	// (0x00021e0c) main_mup2_pane_g4

0xb16f,	// (0x00021e21) main_mup2_pane_g5_ParamLimits

0xb16f,	// (0x00021e21) main_mup2_pane_g5

0xb184,	// (0x00021e36) main_mup2_pane_g6_ParamLimits

0xb184,	// (0x00021e36) main_mup2_pane_g6

0xb199,	// (0x00021e4b) main_mup2_pane_g7_ParamLimits

0xb199,	// (0x00021e4b) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0002632e) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0002632e) main_mup2_pane_g

0xb1b5,	// (0x00021e67) main_mup2_pane_t1_ParamLimits

0xb1b5,	// (0x00021e67) main_mup2_pane_t1

0xb1cc,	// (0x00021e7e) main_mup2_pane_t2_ParamLimits

0xb1cc,	// (0x00021e7e) main_mup2_pane_t2

0xb1e3,	// (0x00021e95) main_mup2_pane_t3_ParamLimits

0xb1e3,	// (0x00021e95) main_mup2_pane_t3

0xb1fa,	// (0x00021eac) main_mup2_pane_t4_ParamLimits

0xb1fa,	// (0x00021eac) main_mup2_pane_t4

0xb214,	// (0x00021ec6) main_mup2_pane_t5_ParamLimits

0xb214,	// (0x00021ec6) main_mup2_pane_t5

0xb22e,	// (0x00021ee0) main_mup2_pane_t6_ParamLimits

0xb22e,	// (0x00021ee0) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0002633d) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0002633d) main_mup2_pane_t

0xb266,	// (0x00021f18) mup2_visualizer_pane_ParamLimits

0xb266,	// (0x00021f18) mup2_visualizer_pane

0xb29c,	// (0x00021f4e) mup_progress_pane_cp_ParamLimits

0xb29c,	// (0x00021f4e) mup_progress_pane_cp

0x7369,	// (0x0001e01b) mup_volume_pane_cp_ParamLimits

0x7369,	// (0x0001e01b) mup_volume_pane_cp

0xb2b3,	// (0x00021f65) mup2_visualizer_pane_g1_ParamLimits

0xb2b3,	// (0x00021f65) mup2_visualizer_pane_g1

0x2d74,	// (0x00019a26) mup2_visualizer_pane_g2_ParamLimits

0x2d74,	// (0x00019a26) mup2_visualizer_pane_g2

0xb2c8,	// (0x00021f7a) mup2_visualizer_pane_g3_ParamLimits

0xb2c8,	// (0x00021f7a) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0002634a) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0002634a) mup2_visualizer_pane_g

0x1b14,	// (0x000187c6) aid_size_cell_fmradio

0xadc5,	// (0x00021a77) aid_height_parent_landcape

0x0f1b,	// (0x00017bcd) wml_content_pane_cp

0x0f23,	// (0x00017bd5) wml_tabs_pane

0x0f2c,	// (0x00017bde) popup_wml_miniature_window

0x0f34,	// (0x00017be6) scroll_pane_cp021

0x0f48,	// (0x00017bfa) wml_content_pane_comp8

0x0676,	// (0x00017328) bg_popup_sub_pane_cp05

0x2d92,	// (0x00019a44) popup_wml_miniature_window_g1

0x2d9a,	// (0x00019a4c) wml_miniature_view_pane

0xb2d6,	// (0x00021f88) aid_size_wml_view

0xb2de,	// (0x00021f90) wml_miniature_view_pane_g1

0xb2e7,	// (0x00021f99) wml_miniature_view_pane_g2

0xb2f0,	// (0x00021fa2) wml_miniature_view_pane_g3

0xb2f8,	// (0x00021faa) wml_miniature_view_pane_g4

0xb300,	// (0x00021fb2) wml_miniature_view_pane_g5

0xb308,	// (0x00021fba) wml_miniature_view_pane_g6

0xb310,	// (0x00021fc2) wml_miniature_view_pane_g7

0xb318,	// (0x00021fca) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00026351) wml_miniature_view_pane_g

0x2da2,	// (0x00019a54) background_graphic_ParamLimits

0x2da2,	// (0x00019a54) background_graphic

0x2dae,	// (0x00019a60) wml_tabs_2_pane

0x2db7,	// (0x00019a69) wml_tabs_3_pane_ParamLimits

0x2db7,	// (0x00019a69) wml_tabs_3_pane

0x2dc9,	// (0x00019a7b) wml_tabs_4_pane_ParamLimits

0x2dc9,	// (0x00019a7b) wml_tabs_4_pane

0x2ddf,	// (0x00019a91) wml_tabs_5_pane_ParamLimits

0x2ddf,	// (0x00019a91) wml_tabs_5_pane

0x2df9,	// (0x00019aab) wml_tabs_pane_g2_ParamLimits

0x2df9,	// (0x00019aab) wml_tabs_pane_g2

0x2e0d,	// (0x00019abf) wml_tabs_pane_g3_ParamLimits

0x2e0d,	// (0x00019abf) wml_tabs_pane_g3

0xb320,	// (0x00021fd2) wml_tabs_2_active_pane_ParamLimits

0xb320,	// (0x00021fd2) wml_tabs_2_active_pane

0xb330,	// (0x00021fe2) wml_tabs_2_passive_pane_ParamLimits

0xb330,	// (0x00021fe2) wml_tabs_2_passive_pane

0xb340,	// (0x00021ff2) wml_tabs_3_active_pane_cp_ParamLimits

0xb340,	// (0x00021ff2) wml_tabs_3_active_pane_cp

0xb351,	// (0x00022003) wml_tabs_3_passive_pane_ParamLimits

0xb351,	// (0x00022003) wml_tabs_3_passive_pane

0xb362,	// (0x00022014) wml_tabs_3_passive_pane_cp_ParamLimits

0xb362,	// (0x00022014) wml_tabs_3_passive_pane_cp

0xb373,	// (0x00022025) tabs_4_active_pane

0xb37b,	// (0x0002202d) tabs_4_passive_pane

0xb383,	// (0x00022035) tabs_4_passive_pane_cp

0xb38b,	// (0x0002203d) tabs_4_passive_pane_cp2

0x2aca,	// (0x0001977c) aid_height_text

0xa344,	// (0x00020ff6) mup_volume_cont_pane_ParamLimits

0xa344,	// (0x00020ff6) mup_volume_cont_pane

0x8421,	// (0x0001f0d3) aid_size_cell_pinb

0x0901,	// (0x000175b3) aid_size_list_pinb

0xb285,	// (0x00021f37) mup2_volume_cont_pane_ParamLimits

0xb285,	// (0x00021f37) mup2_volume_cont_pane

0x7355,	// (0x0001e007) mup2_volume_cont_pane_g1_ParamLimits

0x7355,	// (0x0001e007) mup2_volume_cont_pane_g1

0x80ba,	// (0x0001ed6c) aid_size_cell_touch_ParamLimits

0x80ba,	// (0x0001ed6c) aid_size_cell_touch

0x8301,	// (0x0001efb3) touch_pane_ParamLimits

0x8301,	// (0x0001efb3) touch_pane

0x01e7,	// (0x00016e99) main_rss2_pane

0x2e63,	// (0x00019b15) listscroll_rss2_pane

0x2e6c,	// (0x00019b1e) rss2_navigation_pane

0x2e74,	// (0x00019b26) list_rss2_pane

0x1649,	// (0x000182fb) scroll_pane_cp22

0x2e7c,	// (0x00019b2e) rss2_navigation_pane_g1

0x2e85,	// (0x00019b37) rss2_navigation_pane_g2

0x2e8d,	// (0x00019b3f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00026362) rss2_navigation_pane_g

0x2e95,	// (0x00019b47) rss2_navigation_pane_t1

0xb393,	// (0x00022045) rss2_list_single_pane_ParamLimits

0xb393,	// (0x00022045) rss2_list_single_pane

0x2ea3,	// (0x00019b55) rss2_list_single_pane_t2

0x2eb1,	// (0x00019b63) rss2_list_single_pane_t3_ParamLimits

0x2eb1,	// (0x00019b63) rss2_list_single_pane_t3

0x2ece,	// (0x00019b80) rss2_list_single_pane_t4

0x9b55,	// (0x00020807) smil_status_pane_g1

0x0257,	// (0x00016f09) main_image2_pane_ParamLimits

0x0257,	// (0x00016f09) main_image2_pane

0x71b3,	// (0x0001de65) main_camera2_pane_g9_ParamLimits

0x71b3,	// (0x0001de65) main_camera2_pane_g9

0x7207,	// (0x0001deb9) main_camera2_pane_t5_ParamLimits

0x7207,	// (0x0001deb9) main_camera2_pane_t5

0x7219,	// (0x0001decb) main_camera2_pane_t6_ParamLimits

0x7219,	// (0x0001decb) main_camera2_pane_t6

0xb3cf,	// (0x00022081) main_image2_pane_g1_ParamLimits

0xb3cf,	// (0x00022081) main_image2_pane_g1

0xa927,	// (0x000215d9) smil2_video_pane_ParamLimits

0xa927,	// (0x000215d9) smil2_video_pane

0x0205,	// (0x00016eb7) aid_zoom_text_primary_cp

0x024d,	// (0x00016eff) popup_preview_fixed_window

0x0e84,	// (0x00017b36) im_reading_pane_g1

0x70fd,	// (0x0001ddaf) cams2_bc_adjust_pane_cp_ParamLimits

0x70fd,	// (0x0001ddaf) cams2_bc_adjust_pane_cp

0x7249,	// (0x0001defb) cams2_bc_adjust_pane_ParamLimits

0x7249,	// (0x0001defb) cams2_bc_adjust_pane

0x4654,	// (0x0001b306) cams2_bc_adjust_pane_g1

0x738e,	// (0x0001e040) cams2_slider_pane

0x7397,	// (0x0001e049) cams2_slider_pane_g1

0x73a0,	// (0x0001e052) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00026369) cams2_slider_pane_g

0x6ca3,	// (0x0001d955) calc_display_pane_ParamLimits

0x6cc1,	// (0x0001d973) calc_paper_pane_ParamLimits

0x6cdd,	// (0x0001d98f) grid_calc_pane_ParamLimits

0x702c,	// (0x0001dcde) popup_clock_digital_window_t1_ParamLimits

0x1ab1,	// (0x00018763) main_image_pane_t1

0x6c89,	// (0x0001d93b) aid_size_cell_calc_ParamLimits

0x6c89,	// (0x0001d93b) aid_size_cell_calc

0xadf7,	// (0x00021aa9) popup_blid_sat_info2_window_ParamLimits

0xadf7,	// (0x00021aa9) popup_blid_sat_info2_window

0x2f18,	// (0x00019bca) aid_size_cell_blid

0x2f20,	// (0x00019bd2) bg_popup_window_pane_cp07

0x2f43,	// (0x00019bf5) grid_popup_blid_pane

0x2f4d,	// (0x00019bff) heading_pane_cp05_ParamLimits

0x2f4d,	// (0x00019bff) heading_pane_cp05

0x3017,	// (0x00019cc9) cell_popup_blid_pane_ParamLimits

0x3017,	// (0x00019cc9) cell_popup_blid_pane

0x303d,	// (0x00019cef) cell_popup_blid_pane_g1

0x3045,	// (0x00019cf7) cell_popup_blid_pane_t1

0xb24b,	// (0x00021efd) mup2_indicator_pane_ParamLimits

0xb24b,	// (0x00021efd) mup2_indicator_pane

0x1796,	// (0x00018448) mup2_visualizer_osc_pane

0x2d80,	// (0x00019a32) mup2_visualizer_spec_pane_ParamLimits

0x2d80,	// (0x00019a32) mup2_visualizer_spec_pane

0xb3db,	// (0x0002208d) mup2_spec_half_pane

0xb3e4,	// (0x00022096) mup2_spec_half_pane_cp

0xb3ee,	// (0x000220a0) mup2_spec_bar_pane_ParamLimits

0xb3ee,	// (0x000220a0) mup2_spec_bar_pane

0x2ccf,	// (0x00019981) mup2_spec_bar_pane_g1

0x2cd9,	// (0x0001998b) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000262dc) mup2_spec_bar_pane_g

0xb40d,	// (0x000220bf) mup2_osc_middle_pane

0x2ceb,	// (0x0001999d) mup2_visualizer_osc_pane_g1

0x0285,	// (0x00016f37) popup_number_entry_window_t1_ParamLimits

0x0298,	// (0x00016f4a) popup_number_entry_window_t2_ParamLimits

0x02aa,	// (0x00016f5c) popup_number_entry_window_t3_ParamLimits

0x8358,	// (0x0001f00a) popup_number_entry_window_t5_ParamLimits

0x8358,	// (0x0001f00a) popup_number_entry_window_t5

0xf0ec,	// (0x00025d9e) popup_number_entry_window_t_ParamLimits

0x02bc,	// (0x00016f6e) text_title_cp2_ParamLimits

0x706b,	// (0x0001dd1d) aid_hotspot_pointer_text2_pane

0x70c1,	// (0x0001dd73) main_viewer_pane_g9_ParamLimits

0x70c1,	// (0x0001dd73) main_viewer_pane_g9

0x10b3,	// (0x00017d65) cale_month_pane_t1_ParamLimits

0x1148,	// (0x00017dfa) bg_cale_pane_ParamLimits

0x1160,	// (0x00017e12) list_cale_pane_ParamLimits

0x0bdd,	// (0x0001788f) listscroll_cale_day_pane_t1

0x1171,	// (0x00017e23) scroll_pane_cp09_ParamLimits

0xa383,	// (0x00021035) main_mup_eq_pane_t1_ParamLimits

0xa383,	// (0x00021035) main_mup_eq_pane_t1

0xa39d,	// (0x0002104f) main_mup_eq_pane_t2_ParamLimits

0xa39d,	// (0x0002104f) main_mup_eq_pane_t2

0xa3b5,	// (0x00021067) main_mup_eq_pane_t3_ParamLimits

0xa3b5,	// (0x00021067) main_mup_eq_pane_t3

0xa3cd,	// (0x0002107f) main_mup_eq_pane_t4_ParamLimits

0xa3cd,	// (0x0002107f) main_mup_eq_pane_t4

0xa3e5,	// (0x00021097) main_mup_eq_pane_t5_ParamLimits

0xa3e5,	// (0x00021097) main_mup_eq_pane_t5

0xa3fd,	// (0x000210af) main_mup_eq_pane_t6_ParamLimits

0xa3fd,	// (0x000210af) main_mup_eq_pane_t6

0xa411,	// (0x000210c3) main_mup_eq_pane_t7_ParamLimits

0xa411,	// (0x000210c3) main_mup_eq_pane_t7

0xa425,	// (0x000210d7) main_mup_eq_pane_t8_ParamLimits

0xa425,	// (0x000210d7) main_mup_eq_pane_t8

0xa43b,	// (0x000210ed) main_mup_eq_pane_t9_ParamLimits

0xa43b,	// (0x000210ed) main_mup_eq_pane_t9

0xa453,	// (0x00021105) main_mup_eq_pane_t10_ParamLimits

0xa453,	// (0x00021105) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0002612b) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0002612b) main_mup_eq_pane_t

0xa510,	// (0x000211c2) mup_equalizer_pane_cp5_ParamLimits

0xa526,	// (0x000211d8) mup_equalizer_pane_cp6_ParamLimits

0xa53e,	// (0x000211f0) mup_equalizer_pane_cp7_ParamLimits

0x01e7,	// (0x00016e99) main_gallery_pane

0x2cf4,	// (0x000199a6) smil2_volume_pane

0x2d0f,	// (0x000199c1) smil_status_volume_pane_g1_ParamLimits

0x2cfc,	// (0x000199ae) smil_status_volume_pane_g2_ParamLimits

0x70cd,	// (0x0001dd7f) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000262e1) smil_status_volume_pane_g_ParamLimits

0x2f20,	// (0x00019bd2) bg_popup_window_pane_cp07_ParamLimits

0x2f2e,	// (0x00019be0) blid_firmament_pane

0xb416,	// (0x000220c8) aid_size_cell_gallery_ParamLimits

0xb416,	// (0x000220c8) aid_size_cell_gallery

0xb424,	// (0x000220d6) grid_gallery_pane_ParamLimits

0xb424,	// (0x000220d6) grid_gallery_pane

0xb434,	// (0x000220e6) cell_gallery_pane_ParamLimits

0xb434,	// (0x000220e6) cell_gallery_pane

0x3053,	// (0x00019d05) bg_cell_gallery_focus_pane_ParamLimits

0x3053,	// (0x00019d05) bg_cell_gallery_focus_pane

0x3065,	// (0x00019d17) cell_gallery_pane_g1_ParamLimits

0x3065,	// (0x00019d17) cell_gallery_pane_g1

0xb482,	// (0x00022134) cell_gallery_pane_g2_ParamLimits

0xb482,	// (0x00022134) cell_gallery_pane_g2

0xb48f,	// (0x00022141) cell_gallery_pane_g3_ParamLimits

0xb48f,	// (0x00022141) cell_gallery_pane_g3

0x3071,	// (0x00019d23) cell_gallery_pane_g4_ParamLimits

0x3071,	// (0x00019d23) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0002638f) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0002638f) cell_gallery_pane_g

0x307d,	// (0x00019d2f) bg_cell_gallery_focus_pane_g1

0x3085,	// (0x00019d37) bg_cell_gallery_focus_pane_g2

0x308d,	// (0x00019d3f) bg_cell_gallery_focus_pane_g3

0x3095,	// (0x00019d47) bg_cell_gallery_focus_pane_g4

0x309d,	// (0x00019d4f) bg_cell_gallery_focus_pane_g5

0x30a5,	// (0x00019d57) bg_cell_gallery_focus_pane_g6

0x30ad,	// (0x00019d5f) bg_cell_gallery_focus_pane_g7

0x30b5,	// (0x00019d67) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00026398) bg_cell_gallery_focus_pane_g

0x30bd,	// (0x00019d6f) aid_firma_cardinal

0x30d1,	// (0x00019d83) blid_firmament_pane_t1

0x30e8,	// (0x00019d9a) blid_firmament_pane_t2

0x30ff,	// (0x00019db1) blid_firmament_pane_t3

0x3116,	// (0x00019dc8) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000263a9) blid_firmament_pane_t

0x312d,	// (0x00019ddf) blid_sat_info_pane

0x313d,	// (0x00019def) blid_sat_info_pane_g1

0x313d,	// (0x00019def) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x000263b2) blid_sat_info_pane_g

0x3147,	// (0x00019df9) blid_sat_info_pane_t1

0x3155,	// (0x00019e07) smil2_volume_content_pane

0x315e,	// (0x00019e10) smil2_volume_pane_g1

0x3166,	// (0x00019e18) smil2_volume_content_pane_g1

0x316f,	// (0x00019e21) smil2_volume_content_pane_g2

0x3178,	// (0x00019e2a) smil2_volume_content_pane_g3

0x3181,	// (0x00019e33) smil2_volume_content_pane_g4

0x318a,	// (0x00019e3c) smil2_volume_content_pane_g5

0x3193,	// (0x00019e45) smil2_volume_content_pane_g6

0x319c,	// (0x00019e4e) smil2_volume_content_pane_g7

0x31a5,	// (0x00019e57) smil2_volume_content_pane_g8

0x31ae,	// (0x00019e60) smil2_volume_content_pane_g9

0x31b7,	// (0x00019e69) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x000263b7) smil2_volume_content_pane_g

0x892a,	// (0x0001f5dc) cale_week_day_heading_pane_t1_ParamLimits

0x893e,	// (0x0001f5f0) cale_week_day_heading_pane_t2_ParamLimits

0x8952,	// (0x0001f604) cale_week_day_heading_pane_t3_ParamLimits

0x8966,	// (0x0001f618) cale_week_day_heading_pane_t4_ParamLimits

0x897a,	// (0x0001f62c) cale_week_day_heading_pane_t5_ParamLimits

0x898e,	// (0x0001f640) cale_week_day_heading_pane_t6_ParamLimits

0x89a2,	// (0x0001f654) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00025ea3) cale_week_day_heading_pane_t_ParamLimits

0x0bef,	// (0x000178a1) bg_cale_side_pane_ParamLimits

0x6e3e,	// (0x0001daf0) cale_week_time_pane_t1_ParamLimits

0x6e56,	// (0x0001db08) cale_week_time_pane_t2_ParamLimits

0x6e6e,	// (0x0001db20) cale_week_time_pane_t3_ParamLimits

0x6e86,	// (0x0001db38) cale_week_time_pane_t4_ParamLimits

0x6e9e,	// (0x0001db50) cale_week_time_pane_t5_ParamLimits

0x6eb6,	// (0x0001db68) cale_week_time_pane_t6_ParamLimits

0x6ed6,	// (0x0001db88) cale_week_time_pane_t7_ParamLimits

0x6ef6,	// (0x0001dba8) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00025eb2) cale_week_time_pane_t_ParamLimits

0x89b6,	// (0x0001f668) cell_cale_week_pane_g2_ParamLimits

0x0bef,	// (0x000178a1) bg_cale_side_pane_cp01_ParamLimits

0x99e2,	// (0x00020694) cale_month_week_pane_t1_ParamLimits

0x99f9,	// (0x000206ab) cale_month_week_pane_t2_ParamLimits

0x9a10,	// (0x000206c2) cale_month_week_pane_t3_ParamLimits

0x9a27,	// (0x000206d9) cale_month_week_pane_t4_ParamLimits

0x9a3e,	// (0x000206f0) cale_month_week_pane_t5_ParamLimits

0x9a5d,	// (0x0002070f) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00025f8b) cale_month_week_pane_t_ParamLimits

0x6f90,	// (0x0001dc42) cell_cale_month_pane_g1_ParamLimits

0x01e7,	// (0x00016e99) main_cale_event_viewer_pane

0x01e7,	// (0x00016e99) listscroll_cale_event_viewer_pane

0x31c0,	// (0x00019e72) list_cale_ev_pane

0x31c8,	// (0x00019e7a) scroll_pane_cp023

0x31d4,	// (0x00019e86) field_cale_ev_pane_ParamLimits

0x31d4,	// (0x00019e86) field_cale_ev_pane

0x31ee,	// (0x00019ea0) field_cale_ev_content_pane_ParamLimits

0x31ee,	// (0x00019ea0) field_cale_ev_content_pane

0x31fa,	// (0x00019eac) field_cale_ev_pane_g1_ParamLimits

0x31fa,	// (0x00019eac) field_cale_ev_pane_g1

0x3206,	// (0x00019eb8) field_cale_ev_pane_g2_ParamLimits

0x3206,	// (0x00019eb8) field_cale_ev_pane_g2

0x321e,	// (0x00019ed0) field_cale_ev_pane_g3_ParamLimits

0x321e,	// (0x00019ed0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000263cc) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000263cc) field_cale_ev_pane_g

0x3236,	// (0x00019ee8) field_cale_ev_pane_t1_ParamLimits

0x3236,	// (0x00019ee8) field_cale_ev_pane_t1

0x324d,	// (0x00019eff) field_cale_ev_content_pane_t1_ParamLimits

0x324d,	// (0x00019eff) field_cale_ev_content_pane_t1

0x191f,	// (0x000185d1) bg_button_pane_cp01

0x0a02,	// (0x000176b4) listscroll_cale_week_pane_ParamLimits

0x86ff,	// (0x0001f3b1) popup_toolbar_window_cp01

0x0bdd,	// (0x0001788f) listscroll_cale_week_pane_t1_ParamLimits

0x0a02,	// (0x000176b4) listscroll_cale_day_pane_ParamLimits

0x86ff,	// (0x0001f3b1) popup_toolbar_window_cp02

0x0bdd,	// (0x0001788f) listscroll_cale_day_pane_t1_ParamLimits

0x0a02,	// (0x000176b4) main_cale_month_pane_ParamLimits

0xaebb,	// (0x00021b6d) popup_toolbar_window_cp03_ParamLimits

0xaebb,	// (0x00021b6d) popup_toolbar_window_cp03

0xa839,	// (0x000214eb) main_image_pane_g2_ParamLimits

0xa839,	// (0x000214eb) main_image_pane_g2

0xa845,	// (0x000214f7) main_image_pane_g3_ParamLimits

0xa845,	// (0x000214f7) main_image_pane_g3

0x0002,

0xf50b,	// (0x000261bd) main_image_pane_g_ParamLimits

0xf50b,	// (0x000261bd) main_image_pane_g

0x1ab1,	// (0x00018763) main_image_pane_t1_ParamLimits

0xa851,	// (0x00021503) main_image_pane_t2_ParamLimits

0xa851,	// (0x00021503) main_image_pane_t2

0xa863,	// (0x00021515) main_image_pane_t3_ParamLimits

0xa863,	// (0x00021515) main_image_pane_t3

0xa875,	// (0x00021527) main_image_pane_t4_ParamLimits

0xa875,	// (0x00021527) main_image_pane_t4

0x0003,

0xf512,	// (0x000261c4) main_image_pane_t_ParamLimits

0xf512,	// (0x000261c4) main_image_pane_t

0xa887,	// (0x00021539) popup_image_details_window_cp01

0xa891,	// (0x00021543) popup_toobar_trans_pane_cp01_ParamLimits

0xa891,	// (0x00021543) popup_toobar_trans_pane_cp01

0xae40,	// (0x00021af2) popup_image_details_window_ParamLimits

0xae40,	// (0x00021af2) popup_image_details_window

0x2c55,	// (0x00019907) popup_image_focus_window

0x70ef,	// (0x0001dda1) camera2_autofocus_pane_ParamLimits

0x70ef,	// (0x0001dda1) camera2_autofocus_pane

0x01e7,	// (0x00016e99) bg_popup_sub_pane_cp06

0x326a,	// (0x00019f1c) popup_image_focus_window_g1

0x3272,	// (0x00019f24) popup_image_focus_window_g2

0x327a,	// (0x00019f2c) popup_image_focus_window_g3

0x3282,	// (0x00019f34) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000263d3) popup_image_focus_window_g

0x328a,	// (0x00019f3c) popup_image_focus_window_t1

0x3298,	// (0x00019f4a) popup_image_focus_window_t2

0x32a8,	// (0x00019f5a) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000263dc) popup_image_focus_window_t

0x32b6,	// (0x00019f68) camera2_autofocus_pane_g1

0x0257,	// (0x00016f09) bg_tb_trans_pane_cp01

0x32c4,	// (0x00019f76) popup_image_details_window_g1

0x32d7,	// (0x00019f89) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000263ee) popup_image_details_window_g

0x3300,	// (0x00019fb2) popup_image_details_window_t1

0x3312,	// (0x00019fc4) popup_image_details_window_t2

0x332b,	// (0x00019fdd) popup_image_details_window_t3

0x333f,	// (0x00019ff1) popup_image_details_window_t4

0x335a,	// (0x0001a00c) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000263f5) popup_image_details_window_t

0x09d4,	// (0x00017686) bg_calc_paper_pane_ParamLimits

0x6d09,	// (0x0001d9bb) grid_highlight_pane_cp013

0x6d13,	// (0x0001d9c5) list_calc_pane_ParamLimits

0x6d25,	// (0x0001d9d7) scroll_pane_cp024

0x0a02,	// (0x000176b4) bg_calc_display_pane_ParamLimits

0x6d2d,	// (0x0001d9df) calc_display_pane_t1_ParamLimits

0x6d42,	// (0x0001d9f4) calc_display_pane_t2_ParamLimits

0x6d57,	// (0x0001da09) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00025e25) calc_display_pane_t_ParamLimits

0x6dc0,	// (0x0001da72) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00025e42) cell_calc_pane_g

0x6dc9,	// (0x0001da7b) cell_calc_pane_t1

0x0a85,	// (0x00017737) grid_highlight_pane_cp02_ParamLimits

0x0a9b,	// (0x0001774d) toolbar_button_pane_cp01_ParamLimits

0x0a9b,	// (0x0001774d) toolbar_button_pane_cp01

0x1af6,	// (0x000187a8) temp_image_control_pane_ParamLimits

0x1af6,	// (0x000187a8) temp_image_control_pane

0x0257,	// (0x00016f09) main_mp3_pane

0x3374,	// (0x0001a026) temp_image_control_pane_g1_ParamLimits

0x3374,	// (0x0001a026) temp_image_control_pane_g1

0x3382,	// (0x0001a034) temp_image_control_pane_g2_ParamLimits

0x3382,	// (0x0001a034) temp_image_control_pane_g2

0x3394,	// (0x0001a046) temp_image_control_pane_g3_ParamLimits

0x3394,	// (0x0001a046) temp_image_control_pane_g3

0xb4cc,	// (0x0002217e) temp_image_control_pane_g4_ParamLimits

0xb4cc,	// (0x0002217e) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00026400) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00026400) temp_image_control_pane_g

0x3374,	// (0x0001a026) main_mp3_pane_g1

0xb4dd,	// (0x0002218f) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00026409) main_mp3_pane_g

0x33d7,	// (0x0001a089) main_mp3_pane_t1

0x0cd8,	// (0x0001798a) main_camera_pane_g8_ParamLimits

0x0cd8,	// (0x0001798a) main_camera_pane_g8

0x8bc4,	// (0x0001f876) main_video_pane_g7_ParamLimits

0x8bc4,	// (0x0001f876) main_video_pane_g7

0x7237,	// (0x0001dee9) main_camera2_pane_t7_ParamLimits

0x7237,	// (0x0001dee9) main_camera2_pane_t7

0x0edb,	// (0x00017b8d) scroll_pane_cp025_ParamLimits

0x0edb,	// (0x00017b8d) scroll_pane_cp025

0x0eef,	// (0x00017ba1) scroll_pane_cp026_ParamLimits

0x0eef,	// (0x00017ba1) scroll_pane_cp026

0x0efe,	// (0x00017bb0) wml_content_pane_ParamLimits

0x01e7,	// (0x00016e99) main_touch_calib_pane

0xb581,	// (0x00022233) main_touch_calib_pane_g1

0xb58d,	// (0x0002223f) main_touch_calib_pane_g2

0xb599,	// (0x0002224b) main_touch_calib_pane_g3

0xb5a5,	// (0x00022257) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00026427) main_touch_calib_pane_g

0xb5b1,	// (0x00022263) main_touch_calib_pane_t1

0xb5c8,	// (0x0002227a) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00026430) main_touch_calib_pane_t

0x16d7,	// (0x00018389) mup_progress_pane_cp02

0x16f6,	// (0x000183a8) navi_pane_g1

0x1758,	// (0x0001840a) navi_pane_mp_t3

0x0257,	// (0x00016f09) main_mp3_pane_ParamLimits

0xaef9,	// (0x00021bab) navi_pane_ParamLimits

0x3374,	// (0x0001a026) main_mp3_pane_g1_ParamLimits

0xb4dd,	// (0x0002218f) main_mp3_pane_g2_ParamLimits

0xb4e9,	// (0x0002219b) main_mp3_pane_g3_ParamLimits

0xb4e9,	// (0x0002219b) main_mp3_pane_g3

0xb4f5,	// (0x000221a7) main_mp3_pane_g4_ParamLimits

0xb4f5,	// (0x000221a7) main_mp3_pane_g4

0x33a4,	// (0x0001a056) main_mp3_pane_g5_ParamLimits

0x33a4,	// (0x0001a056) main_mp3_pane_g5

0x33b2,	// (0x0001a064) main_mp3_pane_g6_ParamLimits

0x33b2,	// (0x0001a064) main_mp3_pane_g6

0x33bf,	// (0x0001a071) main_mp3_pane_g7_ParamLimits

0x33bf,	// (0x0001a071) main_mp3_pane_g7

0x33cb,	// (0x0001a07d) main_mp3_pane_g8_ParamLimits

0x33cb,	// (0x0001a07d) main_mp3_pane_g8

0xf757,	// (0x00026409) main_mp3_pane_g_ParamLimits

0xb501,	// (0x000221b3) main_mp3_pane_t2

0xb511,	// (0x000221c3) main_mp3_pane_t3

0x33e5,	// (0x0001a097) main_mp3_pane_t4

0x33f3,	// (0x0001a0a5) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0002641a) main_mp3_pane_t

0x3401,	// (0x0001a0b3) mup_progress_pane_cp01

0x0205,	// (0x00016eb7) aid_zoom_text_secondary2

0x31c0,	// (0x00019e72) list_cale_ev2_pane

0x31c8,	// (0x00019e7a) scroll_pane_cp023_ParamLimits

0xb61b,	// (0x000222cd) field_cale_ev2_pane_ParamLimits

0xb61b,	// (0x000222cd) field_cale_ev2_pane

0xb64f,	// (0x00022301) field_cale_ev2_pane_g1_ParamLimits

0xb64f,	// (0x00022301) field_cale_ev2_pane_g1

0xb65b,	// (0x0002230d) field_cale_ev2_pane_g2_ParamLimits

0xb65b,	// (0x0002230d) field_cale_ev2_pane_g2

0xb673,	// (0x00022325) field_cale_ev2_pane_g3_ParamLimits

0xb673,	// (0x00022325) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0002643b) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0002643b) field_cale_ev2_pane_g

0x3415,	// (0x0001a0c7) field_cale_ev2_pane_t1_ParamLimits

0x3415,	// (0x0001a0c7) field_cale_ev2_pane_t1

0x342c,	// (0x0001a0de) field_cale_ev2_pane_t2_ParamLimits

0x342c,	// (0x0001a0de) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00026444) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00026444) field_cale_ev2_pane_t

0xa710,	// (0x000213c2) main_postcard_pane_g5_ParamLimits

0xa710,	// (0x000213c2) main_postcard_pane_g5

0xa71e,	// (0x000213d0) main_postcard_pane_g6_ParamLimits

0xa71e,	// (0x000213d0) main_postcard_pane_g6

0x8a04,	// (0x0001f6b6) camera2_autofocus_pane_cp_ParamLimits

0x8a04,	// (0x0001f6b6) camera2_autofocus_pane_cp

0x0257,	// (0x00016f09) main_mup3_pane

0xb6ab,	// (0x0002235d) main_mup3_pane_g1_ParamLimits

0xb6ab,	// (0x0002235d) main_mup3_pane_g1

0xb6cc,	// (0x0002237e) main_mup3_pane_g2_ParamLimits

0xb6cc,	// (0x0002237e) main_mup3_pane_g2

0xb747,	// (0x000223f9) main_mup3_pane_g3_ParamLimits

0xb747,	// (0x000223f9) main_mup3_pane_g3

0xb786,	// (0x00022438) main_mup3_pane_g4_ParamLimits

0xb786,	// (0x00022438) main_mup3_pane_g4

0xb7c5,	// (0x00022477) main_mup3_pane_g5_ParamLimits

0xb7c5,	// (0x00022477) main_mup3_pane_g5

0xb806,	// (0x000224b8) main_mup3_pane_g6_ParamLimits

0xb806,	// (0x000224b8) main_mup3_pane_g6

0x3441,	// (0x0001a0f3) main_mup3_pane_g7_ParamLimits

0x3441,	// (0x0001a0f3) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00026454) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00026454) main_mup3_pane_g

0xb878,	// (0x0002252a) main_mup3_pane_t1_ParamLimits

0xb878,	// (0x0002252a) main_mup3_pane_t1

0xb8e7,	// (0x00022599) main_mup3_pane_t2_ParamLimits

0xb8e7,	// (0x00022599) main_mup3_pane_t2

0xb9b0,	// (0x00022662) main_mup3_pane_t4_ParamLimits

0xb9b0,	// (0x00022662) main_mup3_pane_t4

0xba02,	// (0x000226b4) main_mup3_pane_t5_ParamLimits

0xba02,	// (0x000226b4) main_mup3_pane_t5

0xbaaa,	// (0x0002275c) main_mup3_pane_t6_ParamLimits

0xbaaa,	// (0x0002275c) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00026465) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00026465) main_mup3_pane_t

0xbb52,	// (0x00022804) mup3_progress_pane_ParamLimits

0xbb52,	// (0x00022804) mup3_progress_pane

0xbbb7,	// (0x00022869) popup_mup3_control_window_ParamLimits

0xbbb7,	// (0x00022869) popup_mup3_control_window

0x344f,	// (0x0001a101) popup_mup3_text_window

0xbbd0,	// (0x00022882) mup3_progress_pane_t1

0xbbe7,	// (0x00022899) mup3_progress_pane_t2

0x3457,	// (0x0001a109) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00026472) mup3_progress_pane_t

0x346e,	// (0x0001a120) mup_progress_pane_cp03

0x01e7,	// (0x00016e99) bg_tb_trans_pane_cp04

0xbbfe,	// (0x000228b0) mup3_volume_pane

0xbc06,	// (0x000228b8) popup_mup3_control_window_g1

0xbc0f,	// (0x000228c1) mup3_volume_pane_g1

0xbc18,	// (0x000228ca) mup3_volume_pane_g2

0xbc21,	// (0x000228d3) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00026479) mup3_volume_pane_g

0x01e7,	// (0x00016e99) bg_tb_trans_pane_cp03

0x347e,	// (0x0001a130) popup_mup3_text_window_g1

0x3486,	// (0x0001a138) popup_mup3_text_window_t1

0x0a5c,	// (0x0001770e) list_calc_item_pane_g1_ParamLimits

0x2e4a,	// (0x00019afc) mup_volume_pane_cp_g1

0xb5df,	// (0x00022291) main_touch_calib_pane_t3

0xb5f3,	// (0x000222a5) main_touch_calib_pane_t4

0xb607,	// (0x000222b9) main_touch_calib_pane_t5

0x01f1,	// (0x00016ea3) aid_cell_size_toolbar2

0x01f9,	// (0x00016eab) aid_popup3_width_pane

0x0205,	// (0x00016eb7) aid_zoom_text_msg_primary

0x6f7a,	// (0x0001dc2c) vorec_t7

0x0a20,	// (0x000176d2) bg_calc_paper_pane_g1_ParamLimits

0x0a38,	// (0x000176ea) bg_calc_paper_pane_g2_ParamLimits

0x0a2c,	// (0x000176de) bg_calc_paper_pane_g3_ParamLimits

0x0a50,	// (0x00017702) bg_calc_paper_pane_g4_ParamLimits

0x0a44,	// (0x000176f6) bg_calc_paper_pane_g5_ParamLimits

0x85aa,	// (0x0001f25c) bg_calc_paper_pane_g6_ParamLimits

0x85bb,	// (0x0001f26d) bg_calc_paper_pane_g7_ParamLimits

0x85cc,	// (0x0001f27e) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00025e2c) bg_calc_paper_pane_g_ParamLimits

0x85dd,	// (0x0001f28f) calc_bg_paper_pane_g9_ParamLimits

0x8aed,	// (0x0001f79f) image_qvga_pane_ParamLimits

0x8aed,	// (0x0001f79f) image_qvga_pane

0x08d1,	// (0x00017583) bg_popup_sub_pane_cp04_ParamLimits

0x1a2d,	// (0x000186df) popup_mup_playback_window_g1_ParamLimits

0x1a39,	// (0x000186eb) popup_mup_playback_window_t1_ParamLimits

0x1a4e,	// (0x00018700) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000261b8) popup_mup_playback_window_t_ParamLimits

0xb14b,	// (0x00021dfd) main_mup2_pane_g3_ParamLimits

0xb14b,	// (0x00021dfd) main_mup2_pane_g3

0x8e03,	// (0x0001fab5) popup_toolbar_window_cp04

0x1e43,	// (0x00018af5) popup_call2_audio_second_window_g3_ParamLimits

0x1e43,	// (0x00018af5) popup_call2_audio_second_window_g3

0x224d,	// (0x00018eff) popup_call2_audio_first_window_g4_ParamLimits

0x224d,	// (0x00018eff) popup_call2_audio_first_window_g4

0x28cc,	// (0x0001957e) popup_call2_audio_in_window_g4_ParamLimits

0x28cc,	// (0x0001957e) popup_call2_audio_in_window_g4

0xa82c,	// (0x000214de) aid_area_sk_bg_cut_ParamLimits

0xa82c,	// (0x000214de) aid_area_sk_bg_cut

0x1a63,	// (0x00018715) aid_area_sk_bg_cut_2_ParamLimits

0x1a63,	// (0x00018715) aid_area_sk_bg_cut_2

0xb472,	// (0x00022124) aid_placing_details_win

0xb47a,	// (0x0002212c) aid_placing_details_win_2

0x32b6,	// (0x00019f68) camera2_autofocus_pane_g1_ParamLimits

0x82bb,	// (0x0001ef6d) popup_fixed_preview_cale_window_ParamLimits

0x82bb,	// (0x0001ef6d) popup_fixed_preview_cale_window

0x17c2,	// (0x00018474) navi_slider_pane_g3

0x17b9,	// (0x0001846b) navi_slider_pane_g4

0x17b0,	// (0x00018462) navi_slider_pane_g5

0x17c2,	// (0x00018474) navi_slider_pane_g6

0x7052,	// (0x0001dd04) navi_slider_pane_g7

0x18ec,	// (0x0001859e) mup_scale_pane_g3

0x18f5,	// (0x000185a7) mup_scale_pane_g4

0x18fe,	// (0x000185b0) mup_scale_pane_g5

0xa556,	// (0x00021208) mup_scale_pane_g6

0xa55f,	// (0x00021211) mup_scale_pane_g7

0x17c2,	// (0x00018474) cams2_slider_pane_g3

0x2eff,	// (0x00019bb1) cams2_slider_pane_g4

0x73a9,	// (0x0001e05b) cams2_slider_pane_g5

0x17c2,	// (0x00018474) cams2_slider_pane_g6

0x73b1,	// (0x0001e063) cams2_slider_pane_g7

0x313d,	// (0x00019def) camera2_autofocus_pane_cp_g1

0x3494,	// (0x0001a146) bg_popup_preview_window_pane_cp02_ParamLimits

0x3494,	// (0x0001a146) bg_popup_preview_window_pane_cp02

0x34a0,	// (0x0001a152) list_fp_cale_pane_ParamLimits

0x34a0,	// (0x0001a152) list_fp_cale_pane

0x34ac,	// (0x0001a15e) popup_fixed_preview_cale_window_t1_ParamLimits

0x34ac,	// (0x0001a15e) popup_fixed_preview_cale_window_t1

0xbc2a,	// (0x000228dc) popup_fixed_preview_cale_window_t2_ParamLimits

0xbc2a,	// (0x000228dc) popup_fixed_preview_cale_window_t2

0xbc3f,	// (0x000228f1) popup_fixed_preview_cale_window_t3_ParamLimits

0xbc3f,	// (0x000228f1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00026480) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00026480) popup_fixed_preview_cale_window_t

0xbc54,	// (0x00022906) list_single_fp_cale_pane_ParamLimits

0xbc54,	// (0x00022906) list_single_fp_cale_pane

0x34ca,	// (0x0001a17c) list_single_fp_cale_pane_g1_ParamLimits

0x34ca,	// (0x0001a17c) list_single_fp_cale_pane_g1

0x34d6,	// (0x0001a188) list_single_fp_cale_pane_g2_ParamLimits

0x34d6,	// (0x0001a188) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00026487) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00026487) list_single_fp_cale_pane_g

0x34ef,	// (0x0001a1a1) list_single_fp_cale_pane_t1_ParamLimits

0x34ef,	// (0x0001a1a1) list_single_fp_cale_pane_t1

0x3501,	// (0x0001a1b3) list_single_fp_cale_pane_t2_ParamLimits

0x3501,	// (0x0001a1b3) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0002648e) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0002648e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x01e7,	// (0x00016e99) main_dialer_pane

0xbc69,	// (0x0002291b) aid_cell_size_keypad

0xbc73,	// (0x00022925) dialer_ne_pane

0xbc7d,	// (0x0002292f) grid_dialer_command_1_pane

0xbc85,	// (0x00022937) grid_dialer_command_2_pane

0xbc8d,	// (0x0002293f) grid_dialer_keypad_pane

0xbca1,	// (0x00022953) bg_popup_call_pane_cp06_ParamLimits

0xbca1,	// (0x00022953) bg_popup_call_pane_cp06

0xbcad,	// (0x0002295f) dialer_ne_clear_pane_ParamLimits

0xbcad,	// (0x0002295f) dialer_ne_clear_pane

0x3534,	// (0x0001a1e6) dialer_ne_pane_g1

0x353c,	// (0x0001a1ee) dialer_ne_pane_t1_ParamLimits

0x353c,	// (0x0001a1ee) dialer_ne_pane_t1

0xbcb9,	// (0x0002296b) dialer_ne_pane_t2_ParamLimits

0xbcb9,	// (0x0002296b) dialer_ne_pane_t2

0xbcd6,	// (0x00022988) dialer_ne_pane_t3_ParamLimits

0xbcd6,	// (0x00022988) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00026493) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00026493) dialer_ne_pane_t

0xbcfa,	// (0x000229ac) dialer_ne_pane_t3_copy1_ParamLimits

0xbcfa,	// (0x000229ac) dialer_ne_pane_t3_copy1

0xbd1e,	// (0x000229d0) cell_dialer_keypad_pane_ParamLimits

0xbd1e,	// (0x000229d0) cell_dialer_keypad_pane

0xbd35,	// (0x000229e7) cell_dialer_command_1_pane_ParamLimits

0xbd35,	// (0x000229e7) cell_dialer_command_1_pane

0xbd4b,	// (0x000229fd) cell_dialer_command_2_pane_ParamLimits

0xbd4b,	// (0x000229fd) cell_dialer_command_2_pane

0x354e,	// (0x0001a200) bg_button_pane_cp02_ParamLimits

0x354e,	// (0x0001a200) bg_button_pane_cp02

0xbd5a,	// (0x00022a0c) cell_dialer_keypad_pane_g1_ParamLimits

0xbd5a,	// (0x00022a0c) cell_dialer_keypad_pane_g1

0x354e,	// (0x0001a200) bg_button_pane_cp03_ParamLimits

0x354e,	// (0x0001a200) bg_button_pane_cp03

0xbd6f,	// (0x00022a21) cell_dialer_command_1_pane_g1_ParamLimits

0xbd6f,	// (0x00022a21) cell_dialer_command_1_pane_g1

0x355a,	// (0x0001a20c) bg_button_pane_cp04

0xbd82,	// (0x00022a34) cell_dialer_command_2_pane_g1

0x1796,	// (0x00018448) bg_button_pane_cp06

0x3562,	// (0x0001a214) dialer_ne_clear_pane_g1

0xa06c,	// (0x00020d1e) navi_pane_g2

0xa09a,	// (0x00020d4c) navi_pane_g3

0x0002,

0xf409,	// (0x000260bb) navi_pane_g

0xa0c5,	// (0x00020d77) navi_pane_mv_g2

0xa0ec,	// (0x00020d9e) navi_pane_mv_g5

0xa0f4,	// (0x00020da6) navi_pane_mv_t1

0x0a02,	// (0x000176b4) main_clock2_pane

0xbdb0,	// (0x00022a62) main_clock2_list_pane_ParamLimits

0xbdb0,	// (0x00022a62) main_clock2_list_pane

0xbdd8,	// (0x00022a8a) main_clock2_pane_t1_ParamLimits

0xbdd8,	// (0x00022a8a) main_clock2_pane_t1

0xbe08,	// (0x00022aba) main_clock2_pane_t2_ParamLimits

0xbe08,	// (0x00022aba) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0002649a) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0002649a) main_clock2_pane_t

0xbe6f,	// (0x00022b21) popup_clock_analogue_window_cp03_ParamLimits

0xbe6f,	// (0x00022b21) popup_clock_analogue_window_cp03

0xbe8f,	// (0x00022b41) popup_clock_digital_window_cp02_ParamLimits

0xbe8f,	// (0x00022b41) popup_clock_digital_window_cp02

0xbf04,	// (0x00022bb6) main_clock2_list_single_pane_ParamLimits

0xbf04,	// (0x00022bb6) main_clock2_list_single_pane

0x1796,	// (0x00018448) list_highlight_pane_cp05

0x356a,	// (0x0001a21c) main_clock2_list_single_pane_t1

0x8e03,	// (0x0001fab5) popup_toolbar_window_cp04_ParamLimits

0xb49c,	// (0x0002214e) camera2_autofocus_pane_g2_ParamLimits

0xb49c,	// (0x0002214e) camera2_autofocus_pane_g2

0xb4a8,	// (0x0002215a) camera2_autofocus_pane_g3_ParamLimits

0xb4a8,	// (0x0002215a) camera2_autofocus_pane_g3

0xb4b4,	// (0x00022166) camera2_autofocus_pane_g4_ParamLimits

0xb4b4,	// (0x00022166) camera2_autofocus_pane_g4

0xb4c0,	// (0x00022172) camera2_autofocus_pane_g5_ParamLimits

0xb4c0,	// (0x00022172) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000263e3) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000263e3) camera2_autofocus_pane_g

0xb68b,	// (0x0002233d) camera2_autofocus_pane_cp_g2

0xb693,	// (0x00022345) camera2_autofocus_pane_cp_g3

0xb69b,	// (0x0002234d) camera2_autofocus_pane_cp_g4

0xb6a3,	// (0x00022355) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00026449) camera2_autofocus_pane_cp_g

0xbc99,	// (0x0002294b) popup_dialer_spcha_window

0x01e7,	// (0x00016e99) bg_popup_sub_pane_cp07

0x3578,	// (0x0001a22a) list_spcha_pane

0x3580,	// (0x0001a232) list_single_spcha_pane_ParamLimits

0x3580,	// (0x0001a232) list_single_spcha_pane

0x01e7,	// (0x00016e99) list_highlight_pane_cp06

0x3591,	// (0x0001a243) list_single_spcha_pane_t1

0x2676,	// (0x00019328) popup_call2_audio_out_window_g4_ParamLimits

0x2676,	// (0x00019328) popup_call2_audio_out_window_g4

0x01e7,	// (0x00016e99) main_imed2_pane

0x2c5d,	// (0x0001990f) popup_imed_adjust2_window

0xae4e,	// (0x00021b00) popup_imed_trans_window_ParamLimits

0xae4e,	// (0x00021b00) popup_imed_trans_window

0x2f79,	// (0x00019c2b) popup_blid_sat_info2_window_t1

0x2f87,	// (0x00019c39) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00026378) popup_blid_sat_info2_window_t

0xbf36,	// (0x00022be8) aid_size_cell_colour_35

0xbf50,	// (0x00022c02) aid_size_cell_colour_112

0xbf67,	// (0x00022c19) aid_size_cell_effect

0x0257,	// (0x00016f09) bg_tb_trans_pane_cp02

0x128b,	// (0x00017f3d) heading_imed_pane

0xbf81,	// (0x00022c33) listscroll_imed_pane

0x359f,	// (0x0001a251) heading_imed_pane_g1

0x35a7,	// (0x0001a259) heading_imed_pane_t1

0x35b5,	// (0x0001a267) grid_imed_colour_35_pane_ParamLimits

0x35b5,	// (0x0001a267) grid_imed_colour_35_pane

0xbf8d,	// (0x00022c3f) grid_imed_effect_pane

0x35d0,	// (0x0001a282) list_imed_aspect_pane

0xbf9d,	// (0x00022c4f) scroll_pane_cp027_ParamLimits

0xbf9d,	// (0x00022c4f) scroll_pane_cp027

0xbfa9,	// (0x00022c5b) cell_imed_effect_pane_ParamLimits

0xbfa9,	// (0x00022c5b) cell_imed_effect_pane

0x35d8,	// (0x0001a28a) cell_imed_colour_pane_ParamLimits

0x35d8,	// (0x0001a28a) cell_imed_colour_pane

0x361a,	// (0x0001a2cc) cell_imed_colour_pane_g1_ParamLimits

0x361a,	// (0x0001a2cc) cell_imed_colour_pane_g1

0x362b,	// (0x0001a2dd) hgihlgiht_grid_pane_cp016_ParamLimits

0x362b,	// (0x0001a2dd) hgihlgiht_grid_pane_cp016

0xbfc1,	// (0x00022c73) cell_imed_effect_pane_g1

0xbfc9,	// (0x00022c7b) grid_highlight_pane_cp017

0x0b85,	// (0x00017837) list_imed_single_pane_ParamLimits

0x0b85,	// (0x00017837) list_imed_single_pane

0x01e7,	// (0x00016e99) list_highlight_pane_cp07

0x363c,	// (0x0001a2ee) list_imed_aspect_pane_comp1_t1

0x2c35,	// (0x000198e7) bg_tb_trans_pane_cp05

0x365e,	// (0x0001a310) popup_imed_adjust2_window_g1

0x3685,	// (0x0001a337) popup_imed_adjust2_window_t1

0x369d,	// (0x0001a34f) slider_imed_adjust_pane

0x36b1,	// (0x0001a363) slider_imed_adjust_pane_g1

0x36c1,	// (0x0001a373) slider_imed_adjust_pane_g2

0x36d1,	// (0x0001a383) slider_imed_adjust_pane_g3

0x36e2,	// (0x0001a394) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000264b7) slider_imed_adjust_pane_g

0xbfd2,	// (0x00022c84) aid_size_cell_clipart2

0xbfde,	// (0x00022c90) grid_imed_clipart_pane

0x36f3,	// (0x0001a3a5) scroll_pane_cp031

0xbfe8,	// (0x00022c9a) cell_imed_clipart_pane_ParamLimits

0xbfe8,	// (0x00022c9a) cell_imed_clipart_pane

0xc00f,	// (0x00022cc1) cell_imed_clipart_pane_g1

0x01e7,	// (0x00016e99) grid_highlight_pane_cp014

0xbdbc,	// (0x00022a6e) main_clock2_pane_g1_ParamLimits

0xbdbc,	// (0x00022a6e) main_clock2_pane_g1

0xbeab,	// (0x00022b5d) aid_call2_pane_cp10

0xbebd,	// (0x00022b6f) aid_call_pane_cp10

0x16cb,	// (0x0001837d) popup_clock_analogue_window_cp10_g1

0x16cb,	// (0x0001837d) popup_clock_analogue_window_cp10_g2

0xbecf,	// (0x00022b81) popup_clock_analogue_window_cp10_g3

0xbecf,	// (0x00022b81) popup_clock_analogue_window_cp10_g4

0x16cb,	// (0x0001837d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000264a5) popup_clock_analogue_window_cp10_g

0xbee5,	// (0x00022b97) popup_clock_analogue_window_cp10_t1

0x73ba,	// (0x0001e06c) clock_digital_number_pane_cp10_ParamLimits

0x73ba,	// (0x0001e06c) clock_digital_number_pane_cp10

0x73d2,	// (0x0001e084) clock_digital_number_pane_cp11_ParamLimits

0x73d2,	// (0x0001e084) clock_digital_number_pane_cp11

0x73ea,	// (0x0001e09c) clock_digital_number_pane_cp12_ParamLimits

0x73ea,	// (0x0001e09c) clock_digital_number_pane_cp12

0x7402,	// (0x0001e0b4) clock_digital_number_pane_cp13_ParamLimits

0x7402,	// (0x0001e0b4) clock_digital_number_pane_cp13

0x741a,	// (0x0001e0cc) clock_digital_separator_pane_cp10_ParamLimits

0x741a,	// (0x0001e0cc) clock_digital_separator_pane_cp10

0xbf16,	// (0x00022bc8) popup_clock_digital_window_cp02_t1_ParamLimits

0xbf16,	// (0x00022bc8) popup_clock_digital_window_cp02_t1

0x08c9,	// (0x0001757b) clock_digital_number_pane_cp10_g1

0x08c9,	// (0x0001757b) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x000264c0) clock_digital_number_pane_cp10_g

0x08c9,	// (0x0001757b) clock_digital_separator_pane_cp10_g1

0x08c9,	// (0x0001757b) clock_digital_separator_pane_g2_cp10

0x1766,	// (0x00018418) navi_pane_vded_g4

0x176f,	// (0x00018421) navi_pane_vded_g5

0x1778,	// (0x0001842a) navi_pane_vded_t1

0x01e7,	// (0x00016e99) main_vded_pane

0xc018,	// (0x00022cca) main_vded_pane_g1

0xc024,	// (0x00022cd6) main_vded_pane_g2

0xc02e,	// (0x00022ce0) main_vded_pane_g3

0x0002,

0xf813,	// (0x000264c5) main_vded_pane_g

0xc038,	// (0x00022cea) main_vded_pane_t1

0xc046,	// (0x00022cf8) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000264cc) main_vded_pane_t

0xc054,	// (0x00022d06) vded_slider_pane

0xc05e,	// (0x00022d10) vded_video_pane

0x36fb,	// (0x0001a3ad) vded_video_pane_g1

0xc068,	// (0x00022d1a) vded_video_pane_g2

0x313d,	// (0x00019def) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000264d1) vded_video_pane_g

0x3705,	// (0x0001a3b7) vded_slider_pane_g1

0x2e4a,	// (0x00019afc) vded_slider_pane_g2

0x370e,	// (0x0001a3c0) vded_slider_pane_g3

0x3717,	// (0x0001a3c9) vded_slider_pane_g4

0x3720,	// (0x0001a3d2) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000264d8) vded_slider_pane_g

0xbba9,	// (0x0002285b) mup3_rocker_pane_ParamLimits

0xbba9,	// (0x0002285b) mup3_rocker_pane

0xc071,	// (0x00022d23) mup3_control_keys_pane_g1

0xc079,	// (0x00022d2b) mup3_control_keys_pane_g2

0xc081,	// (0x00022d33) mup3_control_keys_pane_g3

0xc089,	// (0x00022d3b) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000264e3) mup3_control_keys_pane_g

0x82d9,	// (0x0001ef8b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x82d9,	// (0x0001ef8b) popup_toolbar2_fixed_window_cp01

0xbbc3,	// (0x00022875) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbbc3,	// (0x00022875) popup_toolbar2_fixed_window_cp02

0x1fb5,	// (0x00018c67) popup_call2_audio_second_window_t4_ParamLimits

0x1fb5,	// (0x00018c67) popup_call2_audio_second_window_t4

0x24e3,	// (0x00019195) popup_call2_audio_first_window_t6_ParamLimits

0x24e3,	// (0x00019195) popup_call2_audio_first_window_t6

0x2779,	// (0x0001942b) popup_call2_audio_out_window_t6_ParamLimits

0x2779,	// (0x0001942b) popup_call2_audio_out_window_t6

0x01e7,	// (0x00016e99) main_vitu_pane

0xc099,	// (0x00022d4b) aid_size_cell_itu_ParamLimits

0xc099,	// (0x00022d4b) aid_size_cell_itu

0x394b,	// (0x0001a5fd) bg_popup_window_pane_cp08_ParamLimits

0x394b,	// (0x0001a5fd) bg_popup_window_pane_cp08

0xc0a7,	// (0x00022d59) field_vitu_entry_pane_ParamLimits

0xc0a7,	// (0x00022d59) field_vitu_entry_pane

0xc0b6,	// (0x00022d68) grid_vitu_function_pane_ParamLimits

0xc0b6,	// (0x00022d68) grid_vitu_function_pane

0xc0c6,	// (0x00022d78) grid_vitu_itu_pane_ParamLimits

0xc0c6,	// (0x00022d78) grid_vitu_itu_pane

0xc0d6,	// (0x00022d88) cell_vitu_itu_pane_ParamLimits

0xc0d6,	// (0x00022d88) cell_vitu_itu_pane

0xc0eb,	// (0x00022d9d) cell_vitu_function_pane_ParamLimits

0xc0eb,	// (0x00022d9d) cell_vitu_function_pane

0x0257,	// (0x00016f09) bg_popup_sub_pane_cp08_ParamLimits

0x0257,	// (0x00016f09) bg_popup_sub_pane_cp08

0xc0ff,	// (0x00022db1) field_vitu_entry_pane_t1_ParamLimits

0xc0ff,	// (0x00022db1) field_vitu_entry_pane_t1

0x3741,	// (0x0001a3f3) field_vitu_entry_pane_t2_ParamLimits

0x3741,	// (0x0001a3f3) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000264f1) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000264f1) field_vitu_entry_pane_t

0x375e,	// (0x0001a410) bg_button_pane_cp05_ParamLimits

0x375e,	// (0x0001a410) bg_button_pane_cp05

0xc11c,	// (0x00022dce) cell_vitu_itu_pane_g1

0xc134,	// (0x00022de6) cell_vitu_itu_pane_t1_ParamLimits

0xc134,	// (0x00022de6) cell_vitu_itu_pane_t1

0xc146,	// (0x00022df8) cell_vitu_itu_pane_t2_ParamLimits

0xc146,	// (0x00022df8) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000264f6) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000264f6) cell_vitu_itu_pane_t

0x376c,	// (0x0001a41e) bg_button_pane_cp07

0xc17b,	// (0x00022e2d) cell_vitu_function_pane_g1

0x6d01,	// (0x0001d9b3) main_calc_pane_g1

0x80e2,	// (0x0001ed94) aid_visual_content_pane

0x01e7,	// (0x00016e99) main_vradio_pane

0xc184,	// (0x00022e36) main_vradio_pane_g1_ParamLimits

0xc184,	// (0x00022e36) main_vradio_pane_g1

0x3776,	// (0x0001a428) main_vradio_pane_g2_ParamLimits

0x3776,	// (0x0001a428) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000264fd) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000264fd) main_vradio_pane_g

0xc194,	// (0x00022e46) main_vradio_pane_t1_ParamLimits

0xc194,	// (0x00022e46) main_vradio_pane_t1

0xc1a6,	// (0x00022e58) main_vradio_pane_t2_ParamLimits

0xc1a6,	// (0x00022e58) main_vradio_pane_t2

0x3783,	// (0x0001a435) main_vradio_pane_t3_ParamLimits

0x3783,	// (0x0001a435) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00026502) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00026502) main_vradio_pane_t

0xc1b8,	// (0x00022e6a) vradio_rocker_control_pane_ParamLimits

0xc1b8,	// (0x00022e6a) vradio_rocker_control_pane

0xc1c4,	// (0x00022e76) vradio_station_info_pane_ParamLimits

0xc1c4,	// (0x00022e76) vradio_station_info_pane

0x3797,	// (0x0001a449) vradio_frequency_info_pane_ParamLimits

0x3797,	// (0x0001a449) vradio_frequency_info_pane

0x313d,	// (0x00019def) vradio_station_info_pane_g1

0x37a6,	// (0x0001a458) vradio_station_info_pane_t1_ParamLimits

0x37a6,	// (0x0001a458) vradio_station_info_pane_t1

0x37c8,	// (0x0001a47a) vradio_station_info_pane_t2_ParamLimits

0x37c8,	// (0x0001a47a) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00026509) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00026509) vradio_station_info_pane_t

0x37da,	// (0x0001a48c) vradio_tuning_pane

0x37e2,	// (0x0001a494) vradio_rocker_control_pane_g1

0x37ea,	// (0x0001a49c) vradio_rocker_control_pane_g2

0x37f2,	// (0x0001a4a4) vradio_rocker_control_pane_g3

0x37fa,	// (0x0001a4ac) vradio_rocker_control_pane_g4

0x3802,	// (0x0001a4b4) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0002650e) vradio_rocker_control_pane_g

0xc1d3,	// (0x00022e85) vradio_frequency_info_pane_g1

0x380a,	// (0x0001a4bc) vradio_frequency_info_pane_t1_ParamLimits

0x380a,	// (0x0001a4bc) vradio_frequency_info_pane_t1

0xc1dd,	// (0x00022e8f) vradio_tuning_pane_g1

0xc1e6,	// (0x00022e98) vradio_tuning_pane_t1

0x0215,	// (0x00016ec7) area_side_right_pane_ParamLimits

0x0215,	// (0x00016ec7) area_side_right_pane

0x2bfc,	// (0x000198ae) status_small_pane_g1

0x2c04,	// (0x000198b6) status_small_pane_g2

0x2c0d,	// (0x000198bf) status_small_pane_g3

0x2c16,	// (0x000198c8) status_small_pane_g4

0x0003,

0xf61c,	// (0x000262ce) status_small_pane_g

0x2c1f,	// (0x000198d1) status_small_pane_t1

0x01e7,	// (0x00016e99) main_video3_pane

0x381e,	// (0x0001a4d0) cams_zoom_vslider_pane

0x3826,	// (0x0001a4d8) image3_wide_pane_ParamLimits

0x3826,	// (0x0001a4d8) image3_wide_pane

0x3840,	// (0x0001a4f2) image3_wide_small_pane

0x384c,	// (0x0001a4fe) main_video3_pane_g1_ParamLimits

0x384c,	// (0x0001a4fe) main_video3_pane_g1

0x3868,	// (0x0001a51a) main_video3_pane_g2_ParamLimits

0x3868,	// (0x0001a51a) main_video3_pane_g2

0x0001,

0xf867,	// (0x00026519) main_video3_pane_g_ParamLimits

0xf867,	// (0x00026519) main_video3_pane_g

0x3884,	// (0x0001a536) main_video3_pane_t1_ParamLimits

0x3884,	// (0x0001a536) main_video3_pane_t1

0x38af,	// (0x0001a561) main_video3_pane_t2_ParamLimits

0x38af,	// (0x0001a561) main_video3_pane_t2

0x38da,	// (0x0001a58c) main_video3_pane_t3_ParamLimits

0x38da,	// (0x0001a58c) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0002651e) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0002651e) main_video3_pane_t

0x3907,	// (0x0001a5b9) cams_zoom_vslider_pane_g1

0x3910,	// (0x0001a5c2) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00026525) cams_zoom_vslider_pane_g

0x3918,	// (0x0001a5ca) small_slider_vertical_pane

0x313d,	// (0x00019def) small_slider_vertical_pane_g1

0x313d,	// (0x00019def) small_slider_vertical_pane_g2

0x3920,	// (0x0001a5d2) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0002652a) small_slider_vertical_pane_g

0x01e7,	// (0x00016e99) main_hwr_training_pane

0x3929,	// (0x0001a5db) hwr_training_instruct_pane_ParamLimits

0x3929,	// (0x0001a5db) hwr_training_instruct_pane

0xc1f5,	// (0x00022ea7) hwr_training_navi_pane_ParamLimits

0xc1f5,	// (0x00022ea7) hwr_training_navi_pane

0xc20f,	// (0x00022ec1) hwr_training_write_pane_ParamLimits

0xc20f,	// (0x00022ec1) hwr_training_write_pane

0x01e7,	// (0x00016e99) bg_frame_shadow_pane

0x396e,	// (0x0001a620) hwr_training_write_pane_g1

0x3976,	// (0x0001a628) hwr_training_write_pane_g2

0x397e,	// (0x0001a630) hwr_training_write_pane_g3

0x3986,	// (0x0001a638) hwr_training_write_pane_g4

0x398e,	// (0x0001a640) hwr_training_write_pane_g5

0x3996,	// (0x0001a648) hwr_training_write_pane_g6

0x399e,	// (0x0001a650) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00026531) hwr_training_write_pane_g

0x7432,	// (0x0001e0e4) hwr_training_navi_pane_g1_ParamLimits

0x7432,	// (0x0001e0e4) hwr_training_navi_pane_g1

0x7444,	// (0x0001e0f6) hwr_training_navi_pane_g2_ParamLimits

0x7444,	// (0x0001e0f6) hwr_training_navi_pane_g2

0x7456,	// (0x0001e108) hwr_training_navi_pane_g3_ParamLimits

0x7456,	// (0x0001e108) hwr_training_navi_pane_g3

0x7466,	// (0x0001e118) hwr_training_navi_pane_g4_ParamLimits

0x7466,	// (0x0001e118) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00026540) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00026540) hwr_training_navi_pane_g

0x7480,	// (0x0001e132) hwr_training_navi_pane_t1

0xc247,	// (0x00022ef9) list_single_hwr_training_instruct_pane_ParamLimits

0xc247,	// (0x00022ef9) list_single_hwr_training_instruct_pane

0x39f5,	// (0x0001a6a7) list_single_hwr_training_instruct_pane_t1

0x307d,	// (0x00019d2f) bg_frame_shadow_pane_g1

0x3a04,	// (0x0001a6b6) bg_frame_shadow_pane_g2

0x3a0c,	// (0x0001a6be) bg_frame_shadow_pane_g3

0x3a14,	// (0x0001a6c6) bg_frame_shadow_pane_g4

0x3a1c,	// (0x0001a6ce) bg_frame_shadow_pane_g5

0x3a24,	// (0x0001a6d6) bg_frame_shadow_pane_g6

0x3a2c,	// (0x0001a6de) bg_frame_shadow_pane_g7

0x0afb,	// (0x000177ad) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0002654b) bg_frame_shadow_pane_g

0x01e7,	// (0x00016e99) main_video_tele_dialer_pane

0x748e,	// (0x0001e140) aid_size_cell_video_keypad_ParamLimits

0x748e,	// (0x0001e140) aid_size_cell_video_keypad

0x749e,	// (0x0001e150) grid_video_dialer_keypad_pane_ParamLimits

0x749e,	// (0x0001e150) grid_video_dialer_keypad_pane

0x74d0,	// (0x0001e182) video_down_pane_cp_ParamLimits

0x74d0,	// (0x0001e182) video_down_pane_cp

0x74dc,	// (0x0001e18e) cell_video_dialer_keypad_pane_ParamLimits

0x74dc,	// (0x0001e18e) cell_video_dialer_keypad_pane

0x3a34,	// (0x0001a6e6) bg_button_pane_cp08_ParamLimits

0x3a34,	// (0x0001a6e6) bg_button_pane_cp08

0xc299,	// (0x00022f4b) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc299,	// (0x00022f4b) cell_video_dialer_keypad_pane_g1

0xbb9d,	// (0x0002284f) mup3_rocker2_pane_ParamLimits

0xbb9d,	// (0x0002284f) mup3_rocker2_pane

0x313d,	// (0x00019def) mup3_rocker2_pane_g1

0xaddc,	// (0x00021a8e) main_dialer2_pane

0x01e7,	// (0x00016e99) main_mp4_pane

0x74f9,	// (0x0001e1ab) main_mp4_pane_g1_ParamLimits

0x74f9,	// (0x0001e1ab) main_mp4_pane_g1

0x7507,	// (0x0001e1b9) main_mp4_pane_g2_ParamLimits

0x7507,	// (0x0001e1b9) main_mp4_pane_g2

0x7515,	// (0x0001e1c7) main_mp4_pane_g3_ParamLimits

0x7515,	// (0x0001e1c7) main_mp4_pane_g3

0x755a,	// (0x0001e20c) main_mp4_pane_g4_ParamLimits

0x755a,	// (0x0001e20c) main_mp4_pane_g4

0x7582,	// (0x0001e234) main_mp4_pane_g5_ParamLimits

0x7582,	// (0x0001e234) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0002656b) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0002656b) main_mp4_pane_g

0x75d2,	// (0x0001e284) main_mp4_pane_t1_ParamLimits

0x75d2,	// (0x0001e284) main_mp4_pane_t1

0x762e,	// (0x0001e2e0) main_mp4_pane_t2_ParamLimits

0x762e,	// (0x0001e2e0) main_mp4_pane_t2

0x3b7c,	// (0x0001a82e) main_mp4_pane_t3_ParamLimits

0x3b7c,	// (0x0001a82e) main_mp4_pane_t3

0x7680,	// (0x0001e332) main_mp4_pane_t4_ParamLimits

0x7680,	// (0x0001e332) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00026578) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00026578) main_mp4_pane_t

0x76c4,	// (0x0001e376) mp4_progress_pane_ParamLimits

0x76c4,	// (0x0001e376) mp4_progress_pane

0x770e,	// (0x0001e3c0) mp4_rocker_pane_ParamLimits

0x770e,	// (0x0001e3c0) mp4_rocker_pane

0x3c52,	// (0x0001a904) mp4_progress_pane_t1

0x3c6b,	// (0x0001a91d) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00026581) mp4_progress_pane_t

0x3c84,	// (0x0001a936) mup_progress_pane_cp04

0x46f5,	// (0x0001b3a7) mp4_rocker_pane_g1

0x772e,	// (0x0001e3e0) aid_cell_size_keypad2_ParamLimits

0x772e,	// (0x0001e3e0) aid_cell_size_keypad2

0x773e,	// (0x0001e3f0) dialer2_ne_pane_ParamLimits

0x773e,	// (0x0001e3f0) dialer2_ne_pane

0x774c,	// (0x0001e3fe) grid_dialer2_keypad_pane_ParamLimits

0x774c,	// (0x0001e3fe) grid_dialer2_keypad_pane

0x475e,	// (0x0001b410) bg_popup_call_pane_cp07_ParamLimits

0x475e,	// (0x0001b410) bg_popup_call_pane_cp07

0xc2d0,	// (0x00022f82) dialer2_ne_pane_t1_ParamLimits

0xc2d0,	// (0x00022f82) dialer2_ne_pane_t1

0x775c,	// (0x0001e40e) cell_dialer2_keypad_pane_ParamLimits

0x775c,	// (0x0001e40e) cell_dialer2_keypad_pane

0x3ca2,	// (0x0001a954) bg_button_pane_pane_cp04_ParamLimits

0x3ca2,	// (0x0001a954) bg_button_pane_pane_cp04

0xc2f5,	// (0x00022fa7) cell_dialer2_keypad_pane_g1_ParamLimits

0xc2f5,	// (0x00022fa7) cell_dialer2_keypad_pane_g1

0x8cc5,	// (0x0001f977) aid_placing_vt_set_content_ParamLimits

0x8cc5,	// (0x0001f977) aid_placing_vt_set_content

0x8cf1,	// (0x0001f9a3) aid_placing_vt_set_title_ParamLimits

0x8cf1,	// (0x0001f9a3) aid_placing_vt_set_title

0x01e7,	// (0x00016e99) main_image3_pane

0x77a5,	// (0x0001e457) area_side_right_pane_cp01_ParamLimits

0x77a5,	// (0x0001e457) area_side_right_pane_cp01

0x77d2,	// (0x0001e484) main_image3_pane_g1_ParamLimits

0x77d2,	// (0x0001e484) main_image3_pane_g1

0x77e0,	// (0x0001e492) main_image3_pane_g2_ParamLimits

0x77e0,	// (0x0001e492) main_image3_pane_g2

0x77f9,	// (0x0001e4ab) main_image3_pane_g3_ParamLimits

0x77f9,	// (0x0001e4ab) main_image3_pane_g3

0x7812,	// (0x0001e4c4) main_image3_pane_g4_ParamLimits

0x7812,	// (0x0001e4c4) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00026590) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00026590) main_image3_pane_g

0x782b,	// (0x0001e4dd) main_image3_pane_t1_ParamLimits

0x782b,	// (0x0001e4dd) main_image3_pane_t1

0x7850,	// (0x0001e502) main_image3_pane_t2_ParamLimits

0x7850,	// (0x0001e502) main_image3_pane_t2

0x786f,	// (0x0001e521) main_image3_pane_t3_ParamLimits

0x786f,	// (0x0001e521) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00026599) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00026599) main_image3_pane_t

0x394b,	// (0x0001a5fd) grid_sctrl_middle_pane_cp01_ParamLimits

0x394b,	// (0x0001a5fd) grid_sctrl_middle_pane_cp01

0xc35d,	// (0x0002300f) cell_sctrl_middle_pane_cp01_ParamLimits

0xc35d,	// (0x0002300f) cell_sctrl_middle_pane_cp01

0xc36e,	// (0x00023020) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc36e,	// (0x00023020) cell_sctrl_middle_pane_cp01_g1

0x01e7,	// (0x00016e99) main_call4_pane

0xc37b,	// (0x0002302d) aid_size_button_call4_ParamLimits

0xc37b,	// (0x0002302d) aid_size_button_call4

0xc3ab,	// (0x0002305d) call4_windows_pane_ParamLimits

0xc3ab,	// (0x0002305d) call4_windows_pane

0xc3c5,	// (0x00023077) grid_call4_button_pane_ParamLimits

0xc3c5,	// (0x00023077) grid_call4_button_pane

0x3ce0,	// (0x0001a992) call4_windows_conf_pane

0x3cf5,	// (0x0001a9a7) popup_call4_audio_first_window_ParamLimits

0x3cf5,	// (0x0001a9a7) popup_call4_audio_first_window

0x3d41,	// (0x0001a9f3) popup_call4_audio_second_window_ParamLimits

0x3d41,	// (0x0001a9f3) popup_call4_audio_second_window

0x3d55,	// (0x0001aa07) popup_call4_audio_wait_window_ParamLimits

0x3d55,	// (0x0001aa07) popup_call4_audio_wait_window

0xc3e9,	// (0x0002309b) cell_call4_button_pane_ParamLimits

0xc3e9,	// (0x0002309b) cell_call4_button_pane

0xc40e,	// (0x000230c0) bg_button_pane_cp09_ParamLimits

0xc40e,	// (0x000230c0) bg_button_pane_cp09

0xc41a,	// (0x000230cc) cell_call4_button_pane_g1_ParamLimits

0xc41a,	// (0x000230cc) cell_call4_button_pane_g1

0xc427,	// (0x000230d9) cell_call4_button_pane_t1_ParamLimits

0xc427,	// (0x000230d9) cell_call4_button_pane_t1

0x3d9d,	// (0x0001aa4f) popup_call4_audio_conf_window_ParamLimits

0x3d9d,	// (0x0001aa4f) popup_call4_audio_conf_window

0xbbd0,	// (0x00022882) mup3_progress_pane_t1_ParamLimits

0xbbe7,	// (0x00022899) mup3_progress_pane_t2_ParamLimits

0x3457,	// (0x0001a109) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00026472) mup3_progress_pane_t_ParamLimits

0x346e,	// (0x0001a120) mup_progress_pane_cp03_ParamLimits

0xc091,	// (0x00022d43) mup3_control_keys_pane_g4_copy1

0x76f2,	// (0x0001e3a4) mp4_rocker2_pane_ParamLimits

0x76f2,	// (0x0001e3a4) mp4_rocker2_pane

0x3db9,	// (0x0001aa6b) mp4_rocker2_pane_g1

0x3db1,	// (0x0001aa63) mp4_rocker2_pane_g2

0x78d0,	// (0x0001e582) mp4_rocker2_pane_g3

0x78d8,	// (0x0001e58a) mp4_rocker2_pane_g4

0x78e0,	// (0x0001e592) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x000265a2) mp4_rocker2_pane_g

0x01e7,	// (0x00016e99) main_camera4_pane

0x01e7,	// (0x00016e99) main_video4_pane

0x74ac,	// (0x0001e15e) main_video_tele_dialer_pane_t1_ParamLimits

0x74ac,	// (0x0001e15e) main_video_tele_dialer_pane_t1

0x74be,	// (0x0001e170) main_video_tele_dialer_pane_t2_ParamLimits

0x74be,	// (0x0001e170) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0002655c) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0002655c) main_video_tele_dialer_pane_t

0x7900,	// (0x0001e5b2) cam4_autofocus_pane_ParamLimits

0x7900,	// (0x0001e5b2) cam4_autofocus_pane

0x791a,	// (0x0001e5cc) cam4_image_uncrop_pane_ParamLimits

0x791a,	// (0x0001e5cc) cam4_image_uncrop_pane

0x7931,	// (0x0001e5e3) cam4_indicators_pane_ParamLimits

0x7931,	// (0x0001e5e3) cam4_indicators_pane

0x794d,	// (0x0001e5ff) main_camera4_pane_g1_ParamLimits

0x794d,	// (0x0001e5ff) main_camera4_pane_g1

0x7959,	// (0x0001e60b) main_camera4_pane_g2_ParamLimits

0x7959,	// (0x0001e60b) main_camera4_pane_g2

0x7959,	// (0x0001e60b) main_camera4_pane_g3_ParamLimits

0x7959,	// (0x0001e60b) main_camera4_pane_g3

0x7965,	// (0x0001e617) main_camera4_pane_g4_ParamLimits

0x7965,	// (0x0001e617) main_camera4_pane_g4

0x7971,	// (0x0001e623) main_camera4_pane_g5_ParamLimits

0x7971,	// (0x0001e623) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000265ad) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000265ad) main_camera4_pane_g

0x798b,	// (0x0001e63d) main_camera4_pane_t1_ParamLimits

0x798b,	// (0x0001e63d) main_camera4_pane_t1

0x79af,	// (0x0001e661) bg_tb_trans_pane_cp06

0x79c5,	// (0x0001e677) cam4_indicators_pane_g1

0x79d6,	// (0x0001e688) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x000265c8) cam4_indicators_pane_g

0x79f4,	// (0x0001e6a6) cam4_indicators_pane_t1

0x7a1e,	// (0x0001e6d0) main_video4_pane_g1_ParamLimits

0x7a1e,	// (0x0001e6d0) main_video4_pane_g1

0x7a2a,	// (0x0001e6dc) main_video4_pane_g2_ParamLimits

0x7a2a,	// (0x0001e6dc) main_video4_pane_g2

0x7a36,	// (0x0001e6e8) main_video4_pane_g3_ParamLimits

0x7a36,	// (0x0001e6e8) main_video4_pane_g3

0x7a42,	// (0x0001e6f4) main_video4_pane_g4_ParamLimits

0x7a42,	// (0x0001e6f4) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000265cf) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000265cf) main_video4_pane_g

0x7a62,	// (0x0001e714) vid4_indicators_pane_ParamLimits

0x7a62,	// (0x0001e714) vid4_indicators_pane

0x7a80,	// (0x0001e732) video4_image_uncrop_cif_pane_ParamLimits

0x7a80,	// (0x0001e732) video4_image_uncrop_cif_pane

0x7a8f,	// (0x0001e741) video4_image_uncrop_nhd_pane_ParamLimits

0x7a8f,	// (0x0001e741) video4_image_uncrop_nhd_pane

0x791a,	// (0x0001e5cc) video4_image_uncrop_vga_pane_ParamLimits

0x791a,	// (0x0001e5cc) video4_image_uncrop_vga_pane

0x7a9c,	// (0x0001e74e) bg_tb_trans_pane_cp07

0x79c5,	// (0x0001e677) vid4_indicators_pane_g1

0x7ab2,	// (0x0001e764) vid4_indicators_pane_g2

0x7ac3,	// (0x0001e775) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000265da) vid4_indicators_pane_g

0x7af0,	// (0x0001e7a2) vid4_indicators_pane_t1

0xc45d,	// (0x0002310f) cam4_autofocus_pane_g1

0xc465,	// (0x00023117) cam4_autofocus_pane_g2

0xc46d,	// (0x0002311f) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000265e5) cam4_autofocus_pane_g

0xc475,	// (0x00023127) cam4_autofocus_pane_g3_copy1

0xc27d,	// (0x00022f2f) video_down_pane_cp_t1

0xc28b,	// (0x00022f3d) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00026561) video_down_pane_cp_t

0x394b,	// (0x0001a5fd) popup_vitu2_window_ParamLimits

0x394b,	// (0x0001a5fd) popup_vitu2_window

0x7b09,	// (0x0001e7bb) aid_size_cell2_itu2_ParamLimits

0x7b09,	// (0x0001e7bb) aid_size_cell2_itu2

0x7b2b,	// (0x0001e7dd) aid_size_cell_itu2_ParamLimits

0x7b2b,	// (0x0001e7dd) aid_size_cell_itu2

0x7b6f,	// (0x0001e821) bg_popup_window_pane_cp09_ParamLimits

0x7b6f,	// (0x0001e821) bg_popup_window_pane_cp09

0x7b7d,	// (0x0001e82f) field_vitu2_entry_pane_ParamLimits

0x7b7d,	// (0x0001e82f) field_vitu2_entry_pane

0x7b9d,	// (0x0001e84f) grid_vitu2_function_pane_ParamLimits

0x7b9d,	// (0x0001e84f) grid_vitu2_function_pane

0x7be1,	// (0x0001e893) grid_vitu2_itu_pane_ParamLimits

0x7be1,	// (0x0001e893) grid_vitu2_itu_pane

0x7c57,	// (0x0001e909) cell_vitu2_itu_pane_ParamLimits

0x7c57,	// (0x0001e909) cell_vitu2_itu_pane

0x7c6c,	// (0x0001e91e) cell_vitu2_function_pane_ParamLimits

0x7c6c,	// (0x0001e91e) cell_vitu2_function_pane

0x3e56,	// (0x0001ab08) bg_popup_call_pane_cp08_ParamLimits

0x3e56,	// (0x0001ab08) bg_popup_call_pane_cp08

0x3e6f,	// (0x0001ab21) field_vitu2_entry_pane_g1

0x3e7b,	// (0x0001ab2d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000265ec) field_vitu2_entry_pane_g

0x3e95,	// (0x0001ab47) field_vitu2_entry_pane_t1_ParamLimits

0x3e95,	// (0x0001ab47) field_vitu2_entry_pane_t1

0x3ec6,	// (0x0001ab78) field_vitu2_entry_pane_t2_ParamLimits

0x3ec6,	// (0x0001ab78) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000265f3) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000265f3) field_vitu2_entry_pane_t

0x7cad,	// (0x0001e95f) bg_button_pane_cp010_ParamLimits

0x7cad,	// (0x0001e95f) bg_button_pane_cp010

0x7cbb,	// (0x0001e96d) cell_vitu2_itu_pane_g1

0x7cd9,	// (0x0001e98b) cell_vitu2_itu_pane_t1_ParamLimits

0x7cd9,	// (0x0001e98b) cell_vitu2_itu_pane_t1

0x7d2b,	// (0x0001e9dd) cell_vitu2_itu_pane_t2_ParamLimits

0x7d2b,	// (0x0001e9dd) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000265fd) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000265fd) cell_vitu2_itu_pane_t

0x7a9c,	// (0x0001e74e) bg_button_pane_cp011

0x7de6,	// (0x0001ea98) cell_vitu2_function_pane_g1

0x01e7,	// (0x00016e99) main_myfav_hc_pane

0x78b1,	// (0x0001e563) popup_image3_note_pane_ParamLimits

0x78b1,	// (0x0001e563) popup_image3_note_pane

0x78bf,	// (0x0001e571) popup_image3_tool_bar_pane_ParamLimits

0x78bf,	// (0x0001e571) popup_image3_tool_bar_pane

0x7d99,	// (0x0001ea4b) cell_vitu2_itu_pane_t3_ParamLimits

0x7d99,	// (0x0001ea4b) cell_vitu2_itu_pane_t3

0x01e7,	// (0x00016e99) bg_popup_trans_pane

0x3eeb,	// (0x0001ab9d) grid_image3_tool_bar_pane

0x3ef5,	// (0x0001aba7) bg_popup_trans_pane_g1

0x0fe4,	// (0x00017c96) bg_popup_trans_pane_g2

0x3efd,	// (0x0001abaf) bg_popup_trans_pane_g3

0x3f05,	// (0x0001abb7) bg_popup_trans_pane_g4

0x3f0d,	// (0x0001abbf) bg_popup_trans_pane_g5

0x3f15,	// (0x0001abc7) bg_popup_trans_pane_g6

0x3f1d,	// (0x0001abcf) bg_popup_trans_pane_g7

0x3f25,	// (0x0001abd7) bg_popup_trans_pane_g8

0x0fc4,	// (0x00017c76) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00026604) bg_popup_trans_pane_g

0x3f2d,	// (0x0001abdf) cell_image3_tool_bar_pane_ParamLimits

0x3f2d,	// (0x0001abdf) cell_image3_tool_bar_pane

0x313d,	// (0x00019def) cell_image3_tool_bar_pane_g1

0x01e7,	// (0x00016e99) bg_popup_trans_pane_cp1

0x3f41,	// (0x0001abf3) popup_image3_note_pane_t1

0x3f4f,	// (0x0001ac01) popup_image3_note_pane_t2

0x3f5d,	// (0x0001ac0f) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00026617) popup_image3_note_pane_t

0x3f6b,	// (0x0001ac1d) popup_image3_note_pane_t3_copy1

0xc47d,	// (0x0002312f) bg_myfav_hc_instruction_pane_ParamLimits

0xc47d,	// (0x0002312f) bg_myfav_hc_instruction_pane

0xc495,	// (0x00023147) cell_myfav_contact_pane_ParamLimits

0xc495,	// (0x00023147) cell_myfav_contact_pane

0xc4af,	// (0x00023161) cell_myfav_contact_pane_cp1_ParamLimits

0xc4af,	// (0x00023161) cell_myfav_contact_pane_cp1

0xc4c7,	// (0x00023179) cell_myfav_contact_pane_cp2_ParamLimits

0xc4c7,	// (0x00023179) cell_myfav_contact_pane_cp2

0xc4df,	// (0x00023191) cell_myfav_contact_pane_cp3_ParamLimits

0xc4df,	// (0x00023191) cell_myfav_contact_pane_cp3

0xc4f6,	// (0x000231a8) cell_myfav_contact_pane_cp4_ParamLimits

0xc4f6,	// (0x000231a8) cell_myfav_contact_pane_cp4

0xc50c,	// (0x000231be) cell_myfav_contact_pane_cp5_ParamLimits

0xc50c,	// (0x000231be) cell_myfav_contact_pane_cp5

0xc520,	// (0x000231d2) cell_myfav_contact_pane_cp6_ParamLimits

0xc520,	// (0x000231d2) cell_myfav_contact_pane_cp6

0xc534,	// (0x000231e6) cell_myfav_contact_pane_cp7_ParamLimits

0xc534,	// (0x000231e6) cell_myfav_contact_pane_cp7

0x3f79,	// (0x0001ac2b) listscroll_gen_pane_cp05

0xc54c,	// (0x000231fe) main_myfav_hc_pane_g1_ParamLimits

0xc54c,	// (0x000231fe) main_myfav_hc_pane_g1

0xc564,	// (0x00023216) main_myfav_hc_pane_g2_ParamLimits

0xc564,	// (0x00023216) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0002661e) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0002661e) main_myfav_hc_pane_g

0xc594,	// (0x00023246) main_myfav_hc_pane_t1_ParamLimits

0xc594,	// (0x00023246) main_myfav_hc_pane_t1

0x3f82,	// (0x0001ac34) main_myfav_hc_pane_t2_ParamLimits

0x3f82,	// (0x0001ac34) main_myfav_hc_pane_t2

0x3f94,	// (0x0001ac46) main_myfav_hc_pane_t3_ParamLimits

0x3f94,	// (0x0001ac46) main_myfav_hc_pane_t3

0xc5ab,	// (0x0002325d) main_myfav_hc_pane_t4_ParamLimits

0xc5ab,	// (0x0002325d) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00026625) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00026625) main_myfav_hc_pane_t

0x313d,	// (0x00019def) bg_myfav_hc_instruction_pane_g1

0x3fa6,	// (0x0001ac58) cell_myfav_contact_pane_g1_ParamLimits

0x3fa6,	// (0x0001ac58) cell_myfav_contact_pane_g1

0x3fa6,	// (0x0001ac58) cell_myfav_contact_pane_g2_ParamLimits

0x3fa6,	// (0x0001ac58) cell_myfav_contact_pane_g2

0x3fb2,	// (0x0001ac64) cell_myfav_contact_pane_g3_ParamLimits

0x3fb2,	// (0x0001ac64) cell_myfav_contact_pane_g3

0x3441,	// (0x0001a0f3) cell_myfav_contact_pane_g4_ParamLimits

0x3441,	// (0x0001a0f3) cell_myfav_contact_pane_g4

0x3fbf,	// (0x0001ac71) cell_myfav_contact_pane_g5_ParamLimits

0x3fbf,	// (0x0001ac71) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00026630) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00026630) cell_myfav_contact_pane_g

0xc57c,	// (0x0002322e) main_myfav_hc_pane_g3_ParamLimits

0xc57c,	// (0x0002322e) main_myfav_hc_pane_g3

0x821e,	// (0x0001eed0) popup_adpt_find_window

0xc5d5,	// (0x00023287) afind_page_pane_ParamLimits

0xc5d5,	// (0x00023287) afind_page_pane

0xc5e2,	// (0x00023294) aid_size_cell_afind_ParamLimits

0xc5e2,	// (0x00023294) aid_size_cell_afind

0xc5fc,	// (0x000232ae) bg_popup_sub_pane_cp09_ParamLimits

0xc5fc,	// (0x000232ae) bg_popup_sub_pane_cp09

0xc609,	// (0x000232bb) find_pane_cp01_ParamLimits

0xc609,	// (0x000232bb) find_pane_cp01

0x3fcb,	// (0x0001ac7d) grid_afind_control_pane_ParamLimits

0x3fcb,	// (0x0001ac7d) grid_afind_control_pane

0xc616,	// (0x000232c8) grid_afind_pane_ParamLimits

0xc616,	// (0x000232c8) grid_afind_pane

0xc632,	// (0x000232e4) cell_afind_pane_ParamLimits

0xc632,	// (0x000232e4) cell_afind_pane

0x313d,	// (0x00019def) afind_page_pane_g1

0xc67a,	// (0x0002332c) afind_page_pane_g2

0xc683,	// (0x00023335) afind_page_pane_g3

0x0002,

0xf989,	// (0x0002663b) afind_page_pane_g

0xc68c,	// (0x0002333e) afind_page_pane_t1

0x3fdf,	// (0x0001ac91) cell_afind_grid_control_pane_ParamLimits

0x3fdf,	// (0x0001ac91) cell_afind_grid_control_pane

0x3ca2,	// (0x0001a954) bg_button_pane_cp69_ParamLimits

0x3ca2,	// (0x0001a954) bg_button_pane_cp69

0xc6a3,	// (0x00023355) cell_afind_pane_g1_ParamLimits

0xc6a3,	// (0x00023355) cell_afind_pane_g1

0xc6b0,	// (0x00023362) cell_afind_pane_t1_ParamLimits

0xc6b0,	// (0x00023362) cell_afind_pane_t1

0x0d22,	// (0x000179d4) bg_button_pane_cp72

0x3fee,	// (0x0001aca0) cell_afind_grid_control_pane_g1

0xa957,	// (0x00021609) aid_image_placing_area_ParamLimits

0xa957,	// (0x00021609) aid_image_placing_area

0x3729,	// (0x0001a3db) field_vitu_entry_pane_g1_ParamLimits

0x3729,	// (0x0001a3db) field_vitu_entry_pane_g1

0x3735,	// (0x0001a3e7) field_vitu_entry_pane_g2_ParamLimits

0x3735,	// (0x0001a3e7) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000264ec) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000264ec) field_vitu_entry_pane_g

0xc11c,	// (0x00022dce) cell_vitu_itu_pane_g1_ParamLimits

0xc15e,	// (0x00022e10) cell_vitu_itu_pane_t3_ParamLimits

0xc15e,	// (0x00022e10) cell_vitu_itu_pane_t3

0x3c52,	// (0x0001a904) mp4_progress_pane_t1_ParamLimits

0x3c6b,	// (0x0001a91d) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00026581) mp4_progress_pane_t_ParamLimits

0x3c84,	// (0x0001a936) mup_progress_pane_cp04_ParamLimits

0xc5bf,	// (0x00023271) main_myfav_hc_pane_t5_ParamLimits

0xc5bf,	// (0x00023271) main_myfav_hc_pane_t5

0x020d,	// (0x00016ebf) aid_zoom_text_primary

0x821e,	// (0x0001eed0) popup_adpt_find_window_ParamLimits

0x0257,	// (0x00016f09) main_cam_set_pane

0x793f,	// (0x0001e5f1) cam4_zoom_pane_ParamLimits

0x793f,	// (0x0001e5f1) cam4_zoom_pane

0xc6c2,	// (0x00023374) main_cam_set_pane_g1_ParamLimits

0xc6c2,	// (0x00023374) main_cam_set_pane_g1

0xc6d0,	// (0x00023382) main_cam_set_pane_g2_ParamLimits

0xc6d0,	// (0x00023382) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00026642) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00026642) main_cam_set_pane_g

0xc6dc,	// (0x0002338e) main_cam_set_pane_t1_ParamLimits

0xc6dc,	// (0x0002338e) main_cam_set_pane_t1

0xc6f8,	// (0x000233aa) main_cset_listscroll_pane_ParamLimits

0xc6f8,	// (0x000233aa) main_cset_listscroll_pane

0xc723,	// (0x000233d5) main_cset_slider_pane_ParamLimits

0xc723,	// (0x000233d5) main_cset_slider_pane

0x3fff,	// (0x0001acb1) main_cset_list_pane_ParamLimits

0x3fff,	// (0x0001acb1) main_cset_list_pane

0x400f,	// (0x0001acc1) scroll_pane_cp028

0xc742,	// (0x000233f4) aid_area_touch_slider

0xc75e,	// (0x00023410) cset_slider_pane

0xc788,	// (0x0002343a) main_cset_slider_pane_g1

0xc79d,	// (0x0002344f) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00026647) main_cset_slider_pane_g

0x4048,	// (0x0001acfa) main_cset_slider_pane_t1

0xc865,	// (0x00023517) main_cset_slider_pane_t2

0xc87f,	// (0x00023531) main_cset_slider_pane_t3

0xc899,	// (0x0002354b) main_cset_slider_pane_t4

0xc8b7,	// (0x00023569) main_cset_slider_pane_t5

0xc8d9,	// (0x0002358b) main_cset_slider_pane_t6

0xc8f0,	// (0x000235a2) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0002666c) main_cset_slider_pane_t

0xc9fe,	// (0x000236b0) cset_list_set_pane_ParamLimits

0xc9fe,	// (0x000236b0) cset_list_set_pane

0xca1b,	// (0x000236cd) aid_position_infowindow_above

0xca23,	// (0x000236d5) aid_position_infowindow_below

0xca2b,	// (0x000236dd) cset_list_set_pane_g1_ParamLimits

0xca2b,	// (0x000236dd) cset_list_set_pane_g1

0x496c,	// (0x0001b61e) cset_list_set_pane_g3_ParamLimits

0x496c,	// (0x0001b61e) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0002668b) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0002668b) cset_list_set_pane_g

0x497b,	// (0x0001b62d) cset_list_set_pane_t1_ParamLimits

0x497b,	// (0x0001b62d) cset_list_set_pane_t1

0x0257,	// (0x00016f09) list_highlight_pane_cp021_ParamLimits

0x0257,	// (0x00016f09) list_highlight_pane_cp021

0x18ec,	// (0x0001859e) cset_slider_pane_g1

0x18fe,	// (0x000185b0) cset_slider_pane_g2

0x18f5,	// (0x000185a7) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00026690) cset_slider_pane_g

0x7dfa,	// (0x0001eaac) aid_area_touch_cam4_zoom

0x7e02,	// (0x0001eab4) cam4_zoom_cont_pane

0x7e0a,	// (0x0001eabc) cam4_zoom_pane_g1

0x7e12,	// (0x0001eac4) cam4_zoom_pane_g2

0x7e1a,	// (0x0001eacc) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00026697) cam4_zoom_pane_g

0x7e22,	// (0x0001ead4) cam4_zoom_cont_pane_g1

0x7e2b,	// (0x0001eadd) cam4_zoom_cont_pane_g2

0x7e34,	// (0x0001eae6) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0002669e) cam4_zoom_cont_pane_g

0xc395,	// (0x00023047) call4_image_pane_ParamLimits

0xc395,	// (0x00023047) call4_image_pane

0x3ce0,	// (0x0001a992) call4_windows_conf_pane_ParamLimits

0x3d1f,	// (0x0001a9d1) popup_call4_audio_in_window_ParamLimits

0x3d1f,	// (0x0001a9d1) popup_call4_audio_in_window

0x01e7,	// (0x00016e99) bg_popup_call2_act_pane_cp02

0x3d95,	// (0x0001aa47) call4_list_conf_pane

0x313d,	// (0x00019def) call4_image_pane_g1

0x313d,	// (0x00019def) call4_image_pane_g2

0x0001,

0xf700,	// (0x000263b2) call4_image_pane_g

0x4123,	// (0x0001add5) list_single_graphic_popup_conf4_pane_ParamLimits

0x4123,	// (0x0001add5) list_single_graphic_popup_conf4_pane

0x01e7,	// (0x00016e99) list_highlight_pane_cp022

0x4136,	// (0x0001ade8) list_single_graphic_popup_conf4_pane_g1

0x15bd,	// (0x0001826f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x000266a5) list_single_graphic_popup_conf4_pane_g

0x413e,	// (0x0001adf0) list_single_graphic_popup_conf4_pane_t1

0x8e55,	// (0x0001fb07) popup_vtel_slider_window_ParamLimits

0x8e55,	// (0x0001fb07) popup_vtel_slider_window

0x3c90,	// (0x0001a942) dialer2_ne_pane_t2_ParamLimits

0x3c90,	// (0x0001a942) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00026586) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00026586) dialer2_ne_pane_t

0x0257,	// (0x00016f09) bg_popup_sub_pane_cp010_ParamLimits

0x0257,	// (0x00016f09) bg_popup_sub_pane_cp010

0xca37,	// (0x000236e9) popup_vtel_slider_window_g1_ParamLimits

0xca37,	// (0x000236e9) popup_vtel_slider_window_g1

0xca43,	// (0x000236f5) popup_vtel_slider_window_g2_ParamLimits

0xca43,	// (0x000236f5) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x000266aa) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x000266aa) popup_vtel_slider_window_g

0xca8b,	// (0x0002373d) vtel_slider_pane_ParamLimits

0xca8b,	// (0x0002373d) vtel_slider_pane

0xca9a,	// (0x0002374c) vtel_slider_pane_g1_ParamLimits

0xca9a,	// (0x0002374c) vtel_slider_pane_g1

0xcaa7,	// (0x00023759) vtel_slider_pane_g2_ParamLimits

0xcaa7,	// (0x00023759) vtel_slider_pane_g2

0xcab4,	// (0x00023766) vtel_slider_pane_g3_ParamLimits

0xcab4,	// (0x00023766) vtel_slider_pane_g3

0xca9a,	// (0x0002374c) vtel_slider_pane_g4_ParamLimits

0xca9a,	// (0x0002374c) vtel_slider_pane_g4

0xcac1,	// (0x00023773) vtel_slider_pane_g5_ParamLimits

0xcac1,	// (0x00023773) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x000266b3) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x000266b3) vtel_slider_pane_g

0x01e7,	// (0x00016e99) main_gallery2_pane

0x7b51,	// (0x0001e803) aid_size_row_itut2_dropdow_list_ParamLimits

0x7b51,	// (0x0001e803) aid_size_row_itut2_dropdow_list

0x7bbf,	// (0x0001e871) grid_vitu2_function_top_pane_ParamLimits

0x7bbf,	// (0x0001e871) grid_vitu2_function_top_pane

0x7c15,	// (0x0001e8c7) popup_vitu2_dropdown_list_window_ParamLimits

0x7c15,	// (0x0001e8c7) popup_vitu2_dropdown_list_window

0x7c35,	// (0x0001e8e7) popup_vitu2_match_list_window

0x7e3d,	// (0x0001eaef) cell_vitu2_function_top_pane_ParamLimits

0x7e3d,	// (0x0001eaef) cell_vitu2_function_top_pane

0x7e5d,	// (0x0001eb0f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e5d,	// (0x0001eb0f) cell_vitu2_function_top_pane_cp01

0x7e7b,	// (0x0001eb2d) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e7b,	// (0x0001eb2d) cell_vitu2_function_top_wide_pane

0x7a9c,	// (0x0001e74e) bg_button_pane_cp012

0x7e99,	// (0x0001eb4b) cell_vitu2_function_top_pane_g1

0x7ea8,	// (0x0001eb5a) bg_button_pane_cp013_ParamLimits

0x7ea8,	// (0x0001eb5a) bg_button_pane_cp013

0xcace,	// (0x00023780) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcace,	// (0x00023780) cell_vitu2_function_top_wide_pane_g1

0x7ec4,	// (0x0001eb76) bg_popup_sub_pane_cp20

0x7ed2,	// (0x0001eb84) list_vitu2_match_list_pane

0x3ef5,	// (0x0001aba7) bg_popup_sub_pane_cp20_g1

0x3efd,	// (0x0001abaf) bg_popup_sub_pane_cp20_g2

0x0fe4,	// (0x00017c96) bg_popup_sub_pane_cp20_g3

0x3f05,	// (0x0001abb7) bg_popup_sub_pane_cp20_g4

0x0fc4,	// (0x00017c76) bg_popup_sub_pane_cp20_g5

0x417e,	// (0x0001ae30) bg_popup_sub_pane_cp20_g6

0x3f15,	// (0x0001abc7) bg_popup_sub_pane_cp20_g7

0x3f1d,	// (0x0001abcf) bg_popup_sub_pane_cp20_g8

0x3f25,	// (0x0001abd7) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x000266be) bg_popup_sub_pane_cp20_g

0x7eea,	// (0x0001eb9c) list_vitu2_match_list_item_pane_ParamLimits

0x7eea,	// (0x0001eb9c) list_vitu2_match_list_item_pane

0x7efc,	// (0x0001ebae) list_vitu2_match_list_item_pane_t1

0x6d09,	// (0x0001d9bb) bg_popup_sub_pane_cp21

0x7f0a,	// (0x0001ebbc) grid_vitu2_dropdown_list_pane

0x7f12,	// (0x0001ebc4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f12,	// (0x0001ebc4) cell_vitu2_dropdown_list_char_pane

0x7f33,	// (0x0001ebe5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f33,	// (0x0001ebe5) cell_vitu2_dropdown_list_ctrl_pane

0x41d0,	// (0x0001ae82) cell_vitu2_dropdown_list_char_pane_g1

0x41c7,	// (0x0001ae79) cell_vitu2_dropdown_list_char_pane_g2

0x41be,	// (0x0001ae70) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000266db) cell_vitu2_dropdown_list_char_pane_g

0x7f5f,	// (0x0001ec11) cell_vitu2_dropdown_list_char_pane_t1

0xcb15,	// (0x000237c7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcb15,	// (0x000237c7) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcb25,	// (0x000237d7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcb25,	// (0x000237d7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcb36,	// (0x000237e8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcb36,	// (0x000237e8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f6d,	// (0x0001ec1f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f6d,	// (0x0001ec1f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x79af,	// (0x0001e661) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x79af,	// (0x0001e661) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000266e2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000266e2) cell_vitu2_dropdown_list_ctrl_pane_g

0xcb46,	// (0x000237f8) aid_size_cell_gallery2_ParamLimits

0xcb46,	// (0x000237f8) aid_size_cell_gallery2

0xcb54,	// (0x00023806) grid_gallery2_pane_ParamLimits

0xcb54,	// (0x00023806) grid_gallery2_pane

0xcb63,	// (0x00023815) scroll_pane_cp029_ParamLimits

0xcb63,	// (0x00023815) scroll_pane_cp029

0xcb6f,	// (0x00023821) cell_gallery2_pane_ParamLimits

0xcb6f,	// (0x00023821) cell_gallery2_pane

0x41d9,	// (0x0001ae8b) cell_gallery2_pane_g2

0xcba0,	// (0x00023852) cell_gallery2_pane_g3

0x41e3,	// (0x0001ae95) cell_gallery2_pane_g4

0x41eb,	// (0x0001ae9d) cell_gallery2_pane_g5

0x1796,	// (0x00018448) grid_highlight_pane_cp10

0x7c35,	// (0x0001e8e7) popup_vitu2_match_list_window_ParamLimits

0x7c47,	// (0x0001e8f9) popup_vitu2_query_window_ParamLimits

0x7c47,	// (0x0001e8f9) popup_vitu2_query_window

0x6d09,	// (0x0001d9bb) bg_vitu2_candi_button_pane

0x41d0,	// (0x0001ae82) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x41c7,	// (0x0001ae79) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x41be,	// (0x0001ae70) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcba8,	// (0x0002385a) bg_button_pane_cp015

0xcbba,	// (0x0002386c) bg_button_pane_cp016

0xcbcd,	// (0x0002387f) bg_button_pane_cp017

0x2c35,	// (0x000198e7) bg_popup_sub_pane_cp22

0x41f3,	// (0x0001aea5) popup_vitu2_query_window_g1

0xcc12,	// (0x000238c4) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000266ed) popup_vitu2_query_window_g

0xcc2f,	// (0x000238e1) popup_vitu2_query_window_t1_ParamLimits

0xcc2f,	// (0x000238e1) popup_vitu2_query_window_t1

0xcc62,	// (0x00023914) popup_vitu2_query_window_t2_ParamLimits

0xcc62,	// (0x00023914) popup_vitu2_query_window_t2

0xcc74,	// (0x00023926) popup_vitu2_query_window_t3_ParamLimits

0xcc74,	// (0x00023926) popup_vitu2_query_window_t3

0xcc9c,	// (0x0002394e) popup_vitu2_query_window_t4_ParamLimits

0xcc9c,	// (0x0002394e) popup_vitu2_query_window_t4

0xccbd,	// (0x0002396f) popup_vitu2_query_window_t5_ParamLimits

0xccbd,	// (0x0002396f) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000266f4) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000266f4) popup_vitu2_query_window_t

0x3ff7,	// (0x0001aca9) main_cset_text_pane

0xc742,	// (0x000233f4) aid_area_touch_slider_ParamLimits

0xc75e,	// (0x00023410) cset_slider_pane_ParamLimits

0xc788,	// (0x0002343a) main_cset_slider_pane_g1_ParamLimits

0xc79d,	// (0x0002344f) main_cset_slider_pane_g2_ParamLimits

0x4018,	// (0x0001acca) main_cset_slider_pane_g3_ParamLimits

0x4018,	// (0x0001acca) main_cset_slider_pane_g3

0xc7b2,	// (0x00023464) main_cset_slider_pane_g4_ParamLimits

0xc7b2,	// (0x00023464) main_cset_slider_pane_g4

0xc7c1,	// (0x00023473) main_cset_slider_pane_g5_ParamLimits

0xc7c1,	// (0x00023473) main_cset_slider_pane_g5

0xc7cf,	// (0x00023481) main_cset_slider_pane_g6_ParamLimits

0xc7cf,	// (0x00023481) main_cset_slider_pane_g6

0xf995,	// (0x00026647) main_cset_slider_pane_g_ParamLimits

0x4048,	// (0x0001acfa) main_cset_slider_pane_t1_ParamLimits

0xc865,	// (0x00023517) main_cset_slider_pane_t2_ParamLimits

0xc87f,	// (0x00023531) main_cset_slider_pane_t3_ParamLimits

0xc899,	// (0x0002354b) main_cset_slider_pane_t4_ParamLimits

0xc8b7,	// (0x00023569) main_cset_slider_pane_t5_ParamLimits

0xc8d9,	// (0x0002358b) main_cset_slider_pane_t6_ParamLimits

0xc8f0,	// (0x000235a2) main_cset_slider_pane_t7_ParamLimits

0xc91e,	// (0x000235d0) main_cset_slider_pane_t8_ParamLimits

0xc91e,	// (0x000235d0) main_cset_slider_pane_t8

0xc946,	// (0x000235f8) main_cset_slider_pane_t9_ParamLimits

0xc946,	// (0x000235f8) main_cset_slider_pane_t9

0xc96e,	// (0x00023620) main_cset_slider_pane_t10_ParamLimits

0xc96e,	// (0x00023620) main_cset_slider_pane_t10

0xc996,	// (0x00023648) main_cset_slider_pane_t11_ParamLimits

0xc996,	// (0x00023648) main_cset_slider_pane_t11

0xc9c0,	// (0x00023672) main_cset_slider_pane_t12_ParamLimits

0xc9c0,	// (0x00023672) main_cset_slider_pane_t12

0xc9df,	// (0x00023691) main_cset_slider_pane_t13_ParamLimits

0xc9df,	// (0x00023691) main_cset_slider_pane_t13

0xf9ba,	// (0x0002666c) main_cset_slider_pane_t_ParamLimits

0x01e7,	// (0x00016e99) bg_popup_sub_pane_cp011

0x41ff,	// (0x0001aeb1) main_cset_text_pane_g1

0x4207,	// (0x0001aeb9) main_cset_text_pane_t1

0x4215,	// (0x0001aec7) main_cset_text_pane_t2

0x4223,	// (0x0001aed5) main_cset_text_pane_t3

0x4231,	// (0x0001aee3) main_cset_text_pane_t4

0x423f,	// (0x0001aef1) main_cset_text_pane_t5

0x424d,	// (0x0001aeff) main_cset_text_pane_t6

0x425b,	// (0x0001af0d) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00026703) main_cset_text_pane_t

0x01e7,	// (0x00016e99) main_cam4_burst_pane

0x01e7,	// (0x00016e99) main_cam5_pane

0x1113,	// (0x00017dc5) bg_button_pane_cp019

0xc69a,	// (0x0002334c) bg_button_pane_cp020

0x4024,	// (0x0001acd6) main_cset_slider_pane_g7_ParamLimits

0x4024,	// (0x0001acd6) main_cset_slider_pane_g7

0x4030,	// (0x0001ace2) main_cset_slider_pane_g8_ParamLimits

0x4030,	// (0x0001ace2) main_cset_slider_pane_g8

0xc7e5,	// (0x00023497) main_cset_slider_pane_g9_ParamLimits

0xc7e5,	// (0x00023497) main_cset_slider_pane_g9

0xc7f1,	// (0x000234a3) main_cset_slider_pane_g10_ParamLimits

0xc7f1,	// (0x000234a3) main_cset_slider_pane_g10

0xc7fd,	// (0x000234af) main_cset_slider_pane_g11_ParamLimits

0xc7fd,	// (0x000234af) main_cset_slider_pane_g11

0xc809,	// (0x000234bb) main_cset_slider_pane_g12_ParamLimits

0xc809,	// (0x000234bb) main_cset_slider_pane_g12

0xc815,	// (0x000234c7) main_cset_slider_pane_g13_ParamLimits

0xc815,	// (0x000234c7) main_cset_slider_pane_g13

0xc823,	// (0x000234d5) main_cset_slider_pane_g14_ParamLimits

0xc823,	// (0x000234d5) main_cset_slider_pane_g14

0xc831,	// (0x000234e3) main_cset_slider_pane_g15_ParamLimits

0xc831,	// (0x000234e3) main_cset_slider_pane_g15

0x4076,	// (0x0001ad28) main_cset_slider_pane_t14_ParamLimits

0x4076,	// (0x0001ad28) main_cset_slider_pane_t14

0x40af,	// (0x0001ad61) main_cset_slider_pane_t15_ParamLimits

0x40af,	// (0x0001ad61) main_cset_slider_pane_t15

0xcd34,	// (0x000239e6) aid_cam4_burst_size_cell_ParamLimits

0xcd34,	// (0x000239e6) aid_cam4_burst_size_cell

0xcd50,	// (0x00023a02) grid_cam4_burst_pane_ParamLimits

0xcd50,	// (0x00023a02) grid_cam4_burst_pane

0xcd80,	// (0x00023a32) linegrid_cam4_burst_pane_ParamLimits

0xcd80,	// (0x00023a32) linegrid_cam4_burst_pane

0xcda2,	// (0x00023a54) scroll_pane_cp30_ParamLimits

0xcda2,	// (0x00023a54) scroll_pane_cp30

0xcdae,	// (0x00023a60) cell_cam4_burst_pane_ParamLimits

0xcdae,	// (0x00023a60) cell_cam4_burst_pane

0x4275,	// (0x0001af27) linegrid_cam4_burst_pane_g1_ParamLimits

0x4275,	// (0x0001af27) linegrid_cam4_burst_pane_g1

0xcdea,	// (0x00023a9c) linegrid_cam4_burst_pane_g2_ParamLimits

0xcdea,	// (0x00023a9c) linegrid_cam4_burst_pane_g2

0x4282,	// (0x0001af34) linegrid_cam4_burst_pane_g3_ParamLimits

0x4282,	// (0x0001af34) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00026712) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00026712) linegrid_cam4_burst_pane_g

0xcdfb,	// (0x00023aad) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcdfb,	// (0x00023aad) linegrid_cam4_burst_pane_g3_copy1

0x428f,	// (0x0001af41) linegrid_cam4_burst_pane_g4_ParamLimits

0x428f,	// (0x0001af41) linegrid_cam4_burst_pane_g4

0xce15,	// (0x00023ac7) linegrid_cam4_burst_pane_g5_ParamLimits

0xce15,	// (0x00023ac7) linegrid_cam4_burst_pane_g5

0xce26,	// (0x00023ad8) linegrid_cam4_burst_pane_g6_ParamLimits

0xce26,	// (0x00023ad8) linegrid_cam4_burst_pane_g6

0x429c,	// (0x0001af4e) linegrid_cam4_burst_pane_g7_ParamLimits

0x429c,	// (0x0001af4e) linegrid_cam4_burst_pane_g7

0xce37,	// (0x00023ae9) cell_cam4_burst_pane_g1

0x42b5,	// (0x0001af67) main_cam5_pane_t1_ParamLimits

0x42b5,	// (0x0001af67) main_cam5_pane_t1

0x42c7,	// (0x0001af79) main_cam5_pane_t2_ParamLimits

0x42c7,	// (0x0001af79) main_cam5_pane_t2

0x42d9,	// (0x0001af8b) main_cam5_pane_t3_ParamLimits

0x42d9,	// (0x0001af8b) main_cam5_pane_t3

0x42eb,	// (0x0001af9d) main_cam5_pane_t4_ParamLimits

0x42eb,	// (0x0001af9d) main_cam5_pane_t4

0x4301,	// (0x0001afb3) main_cam5_pane_t5_ParamLimits

0x4301,	// (0x0001afb3) main_cam5_pane_t5

0x4313,	// (0x0001afc5) main_cam5_pane_t6_ParamLimits

0x4313,	// (0x0001afc5) main_cam5_pane_t6

0x4327,	// (0x0001afd9) main_cam5_pane_t7_ParamLimits

0x4327,	// (0x0001afd9) main_cam5_pane_t7

0x4339,	// (0x0001afeb) main_cam5_pane_t8_ParamLimits

0x4339,	// (0x0001afeb) main_cam5_pane_t8

0x4355,	// (0x0001b007) main_cam5_pane_t9_ParamLimits

0x4355,	// (0x0001b007) main_cam5_pane_t9

0x4367,	// (0x0001b019) main_cam5_pane_t10_ParamLimits

0x4367,	// (0x0001b019) main_cam5_pane_t10

0x4379,	// (0x0001b02b) main_cam5_pane_t11_ParamLimits

0x4379,	// (0x0001b02b) main_cam5_pane_t11

0x438b,	// (0x0001b03d) main_cam5_pane_t12_ParamLimits

0x438b,	// (0x0001b03d) main_cam5_pane_t12

0x43a0,	// (0x0001b052) main_cam5_pane_t13_ParamLimits

0x43a0,	// (0x0001b052) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0002671e) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0002671e) main_cam5_pane_t

0x82ca,	// (0x0001ef7c) popup_scut_keymap_window_ParamLimits

0x82ca,	// (0x0001ef7c) popup_scut_keymap_window

0xce4a,	// (0x00023afc) aid_size_cell_brow_shortcut

0x1796,	// (0x00018448) bg_popup_window_pane_cp010

0xce56,	// (0x00023b08) grid_scut_pane

0xce62,	// (0x00023b14) cell_scut_pane_ParamLimits

0xce62,	// (0x00023b14) cell_scut_pane

0xce79,	// (0x00023b2b) cell_scut_pane_g1

0x43bd,	// (0x0001b06f) cell_scut_pane_t1

0x43cc,	// (0x0001b07e) cell_scut_pane_t2

0xce82,	// (0x00023b34) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00026739) cell_scut_pane_t

0xb814,	// (0x000224c6) main_mup3_pane_g8_ParamLimits

0xb814,	// (0x000224c6) main_mup3_pane_g8

0x7b5f,	// (0x0001e811) area_vitu2_query_pane_ParamLimits

0x7b5f,	// (0x0001e811) area_vitu2_query_pane

0xcbe0,	// (0x00023892) input_focus_pane_cp08

0x43db,	// (0x0001b08d) area_vitu2_query_pane_g1

0xce90,	// (0x00023b42) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00026740) area_vitu2_query_pane_g

0xcea1,	// (0x00023b53) area_vitu2_query_pane_t1_ParamLimits

0xcea1,	// (0x00023b53) area_vitu2_query_pane_t1

0xceb5,	// (0x00023b67) area_vitu2_query_pane_t2_ParamLimits

0xceb5,	// (0x00023b67) area_vitu2_query_pane_t2

0xcec9,	// (0x00023b7b) area_vitu2_query_pane_t3_ParamLimits

0xcec9,	// (0x00023b7b) area_vitu2_query_pane_t3

0x43e7,	// (0x0001b099) area_vitu2_query_pane_t4_ParamLimits

0x43e7,	// (0x0001b099) area_vitu2_query_pane_t4

0x440f,	// (0x0001b0c1) area_vitu2_query_pane_t5_ParamLimits

0x440f,	// (0x0001b0c1) area_vitu2_query_pane_t5

0x4437,	// (0x0001b0e9) area_vitu2_query_pane_t6_ParamLimits

0x4437,	// (0x0001b0e9) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00026745) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00026745) area_vitu2_query_pane_t

0xcef1,	// (0x00023ba3) bg_button_pane_cp018

0xceff,	// (0x00023bb1) bg_button_pane_cp021

0xcf0b,	// (0x00023bbd) bg_button_pane_cp022

0xcf1c,	// (0x00023bce) input_focus_pane_cp09

0xa018,	// (0x00020cca) aid_size_touch_mv_arrow_left

0xa043,	// (0x00020cf5) aid_size_touch_mv_arrow_right

0xc849,	// (0x000234fb) main_cset_slider_pane_g16_ParamLimits

0xc849,	// (0x000234fb) main_cset_slider_pane_g16

0xc857,	// (0x00023509) main_cset_slider_pane_g17_ParamLimits

0xc857,	// (0x00023509) main_cset_slider_pane_g17

0xce37,	// (0x00023ae9) cell_cam4_burst_pane_g1_ParamLimits

0x01e7,	// (0x00016e99) compa_mode_pane

0xca4f,	// (0x00023701) popup_vtel_slider_window_g3_ParamLimits

0xca4f,	// (0x00023701) popup_vtel_slider_window_g3

0xca63,	// (0x00023715) popup_vtel_slider_window_g4_ParamLimits

0xca63,	// (0x00023715) popup_vtel_slider_window_g4

0xca77,	// (0x00023729) popup_vtel_slider_window_t1_ParamLimits

0xca77,	// (0x00023729) popup_vtel_slider_window_t1

0x01e7,	// (0x00016e99) main_cl_pane

0x2c5d,	// (0x0001990f) popup_imed_adjust2_window_ParamLimits

0x2c35,	// (0x000198e7) bg_tb_trans_pane_cp05_ParamLimits

0x365e,	// (0x0001a310) popup_imed_adjust2_window_g1_ParamLimits

0x366d,	// (0x0001a31f) popup_imed_adjust2_window_g2_ParamLimits

0x366d,	// (0x0001a31f) popup_imed_adjust2_window_g2

0x3679,	// (0x0001a32b) popup_imed_adjust2_window_g3_ParamLimits

0x3679,	// (0x0001a32b) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000264b0) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000264b0) popup_imed_adjust2_window_g

0x3685,	// (0x0001a337) popup_imed_adjust2_window_t1_ParamLimits

0x369d,	// (0x0001a34f) slider_imed_adjust_pane_ParamLimits

0x36b1,	// (0x0001a363) slider_imed_adjust_pane_g1_ParamLimits

0x36c1,	// (0x0001a373) slider_imed_adjust_pane_g2_ParamLimits

0x36d1,	// (0x0001a383) slider_imed_adjust_pane_g3_ParamLimits

0x36e2,	// (0x0001a394) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000264b7) slider_imed_adjust_pane_g_ParamLimits

0x78e8,	// (0x0001e59a) aid_touch_area_cam4_ParamLimits

0x78e8,	// (0x0001e59a) aid_touch_area_cam4

0x78f8,	// (0x0001e5aa) battery_pane_cp01

0x797f,	// (0x0001e631) main_camera4_pane_g6_ParamLimits

0x797f,	// (0x0001e631) main_camera4_pane_g6

0x799d,	// (0x0001e64f) main_camera4_pane_t2_ParamLimits

0x799d,	// (0x0001e64f) main_camera4_pane_t2

0x0001,

0xf908,	// (0x000265ba) main_camera4_pane_t_ParamLimits

0xf908,	// (0x000265ba) main_camera4_pane_t

0x7a0e,	// (0x0001e6c0) aid_touch_area_vid4_ParamLimits

0x7a0e,	// (0x0001e6c0) aid_touch_area_vid4

0x7a4e,	// (0x0001e700) main_video4_pane_g5_ParamLimits

0x7a4e,	// (0x0001e700) main_video4_pane_g5

0x7a70,	// (0x0001e722) vid4_progress_pane_ParamLimits

0x7a70,	// (0x0001e722) vid4_progress_pane

0x403c,	// (0x0001acee) main_cset_slider_pane_g18_ParamLimits

0x403c,	// (0x0001acee) main_cset_slider_pane_g18

0x42a9,	// (0x0001af5b) cell_cam4_burst_pane_g2_ParamLimits

0x42a9,	// (0x0001af5b) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00026719) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00026719) cell_cam4_burst_pane_g

0xcf2d,	// (0x00023bdf) bg_cl_pane_ParamLimits

0xcf2d,	// (0x00023bdf) bg_cl_pane

0xcf39,	// (0x00023beb) cl_header_pane_ParamLimits

0xcf39,	// (0x00023beb) cl_header_pane

0xcf45,	// (0x00023bf7) cl_listscroll_pane_ParamLimits

0xcf45,	// (0x00023bf7) cl_listscroll_pane

0x4483,	// (0x0001b135) bg_cl_pane_g1

0x448b,	// (0x0001b13d) bg_cl_pane_g2

0x4493,	// (0x0001b145) bg_cl_pane_g3

0x449b,	// (0x0001b14d) bg_cl_pane_g4

0x44a3,	// (0x0001b155) bg_cl_pane_g5

0x44ab,	// (0x0001b15d) bg_cl_pane_g6

0x44b3,	// (0x0001b165) bg_cl_pane_g7

0x44bb,	// (0x0001b16d) bg_cl_pane_g8

0x44c3,	// (0x0001b175) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00026754) bg_cl_pane_g

0xcf51,	// (0x00023c03) aid_height_cl_leading_ParamLimits

0xcf51,	// (0x00023c03) aid_height_cl_leading

0xcf5d,	// (0x00023c0f) aid_height_cl_text_ParamLimits

0xcf5d,	// (0x00023c0f) aid_height_cl_text

0x394b,	// (0x0001a5fd) bg_cl_header_pane_ParamLimits

0x394b,	// (0x0001a5fd) bg_cl_header_pane

0xcf75,	// (0x00023c27) cl_header_pane_g1_ParamLimits

0xcf75,	// (0x00023c27) cl_header_pane_g1

0xcf82,	// (0x00023c34) cl_header_pane_t1_ParamLimits

0xcf82,	// (0x00023c34) cl_header_pane_t1

0x44cb,	// (0x0001b17d) cl_list_pane

0x400f,	// (0x0001acc1) hc_scroll_pane_cp01

0x0fc4,	// (0x00017c76) bg_cl_header_pane_g1

0x3ef5,	// (0x0001aba7) bg_cl_header_pane_g2

0x0fe4,	// (0x00017c96) bg_cl_header_pane_g3

0x3f05,	// (0x0001abb7) bg_cl_header_pane_g4

0x3efd,	// (0x0001abaf) bg_cl_header_pane_g5

0x417e,	// (0x0001ae30) bg_cl_header_pane_g6

0x3f1d,	// (0x0001abcf) bg_cl_header_pane_g7

0x3f25,	// (0x0001abd7) bg_cl_header_pane_g8

0x3f15,	// (0x0001abc7) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00026767) bg_cl_header_pane_g

0xcf94,	// (0x00023c46) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcf94,	// (0x00023c46) hc_cl_list_double_graphic_heading_pane

0xcfab,	// (0x00023c5d) hc_cl_list_single_graphic_pane_ParamLimits

0xcfab,	// (0x00023c5d) hc_cl_list_single_graphic_pane

0xcfcb,	// (0x00023c7d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcfcb,	// (0x00023c7d) hc_cl_list_single_graphic_pane_g1

0xcfd7,	// (0x00023c89) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcfd7,	// (0x00023c89) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0002677a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0002677a) hc_cl_list_single_graphic_pane_g

0xcfeb,	// (0x00023c9d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcfeb,	// (0x00023c9d) hc_cl_list_single_graphic_pane_t1

0xcfcb,	// (0x00023c7d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcfcb,	// (0x00023c7d) hc_cl_list_double_graphic_heading_pane_g1

0xd000,	// (0x00023cb2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd000,	// (0x00023cb2) hc_cl_list_double_graphic_heading_pane_g2

0xd014,	// (0x00023cc6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd014,	// (0x00023cc6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0002677f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0002677f) hc_cl_list_double_graphic_heading_pane_g

0xd028,	// (0x00023cda) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd028,	// (0x00023cda) hc_cl_list_double_graphic_heading_pane_t1

0xd03d,	// (0x00023cef) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd03d,	// (0x00023cef) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00026786) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00026786) hc_cl_list_double_graphic_heading_pane_t

0x7f91,	// (0x0001ec43) vid4_progress_pane_g1

0x7fa1,	// (0x0001ec53) vid4_progress_pane_g2

0x125d,	// (0x00017f0f) vid4_progress_pane_g3

0x79d6,	// (0x0001e688) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0002678b) vid4_progress_pane_g

0x7fb1,	// (0x0001ec63) vid4_progress_pane_t1

0x7fc6,	// (0x0001ec78) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00026796) vid4_progress_pane_t

0x7ff1,	// (0x0001eca3) wait_bar_pane_cp07

0x2f2e,	// (0x00019be0) blid_firmament_pane_ParamLimits

0x2f71,	// (0x00019c23) popup_blid_sat_info2_window_g1

0x2f95,	// (0x00019c47) popup_blid_sat_info2_window_t3

0x2fa3,	// (0x00019c55) popup_blid_sat_info2_window_t4

0x2fb1,	// (0x00019c63) popup_blid_sat_info2_window_t5

0x2fbf,	// (0x00019c71) popup_blid_sat_info2_window_t6

0x2fcf,	// (0x00019c81) popup_blid_sat_info2_window_t7

0x2fdd,	// (0x00019c8f) popup_blid_sat_info2_window_t8

0x2feb,	// (0x00019c9d) popup_blid_sat_info2_window_t9

0x2ff9,	// (0x00019cab) popup_blid_sat_info2_window_t10

0x30bd,	// (0x00019d6f) aid_firma_cardinal_ParamLimits

0x30d1,	// (0x00019d83) blid_firmament_pane_t1_ParamLimits

0x30e8,	// (0x00019d9a) blid_firmament_pane_t2_ParamLimits

0x30ff,	// (0x00019db1) blid_firmament_pane_t3_ParamLimits

0x3116,	// (0x00019dc8) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000263a9) blid_firmament_pane_t_ParamLimits

0x312d,	// (0x00019ddf) blid_sat_info_pane_ParamLimits

0x0257,	// (0x00016f09) main_cam_set_pane_ParamLimits

0xbf36,	// (0x00022be8) aid_size_cell_colour_35_ParamLimits

0xbf50,	// (0x00022c02) aid_size_cell_colour_112_ParamLimits

0xbf67,	// (0x00022c19) aid_size_cell_effect_ParamLimits

0x0257,	// (0x00016f09) bg_tb_trans_pane_cp02_ParamLimits

0x128b,	// (0x00017f3d) heading_imed_pane_ParamLimits

0xbf81,	// (0x00022c33) listscroll_imed_pane_ParamLimits

0x225f,	// (0x00018f11) popup_call2_audio_first_window_g5_ParamLimits

0x225f,	// (0x00018f11) popup_call2_audio_first_window_g5

0x7773,	// (0x0001e425) aid_size_touch_image3_arrow_left_ParamLimits

0x7773,	// (0x0001e425) aid_size_touch_image3_arrow_left

0x7789,	// (0x0001e43b) aid_size_touch_image3_arrow_right_ParamLimits

0x7789,	// (0x0001e43b) aid_size_touch_image3_arrow_right

0x7fdc,	// (0x0001ec8e) vid4_progress_pane_t3

0xc227,	// (0x00022ed9) main_hwr_training_symbol_option_pane_ParamLimits

0xc227,	// (0x00022ed9) main_hwr_training_symbol_option_pane

0x3959,	// (0x0001a60b) popup_hwr_training_preview_window_ParamLimits

0x3959,	// (0x0001a60b) popup_hwr_training_preview_window

0x7473,	// (0x0001e125) hwr_training_navi_pane_g5_ParamLimits

0x7473,	// (0x0001e125) hwr_training_navi_pane_g5

0x3ee3,	// (0x0001ab95) popup_char_count_window

0x7ec4,	// (0x0001eb76) bg_popup_sub_pane_cp20_ParamLimits

0x7ed2,	// (0x0001eb84) list_vitu2_match_list_pane_ParamLimits

0x7ede,	// (0x0001eb90) vitu2_page_scroll_pane_ParamLimits

0x7ede,	// (0x0001eb90) vitu2_page_scroll_pane

0x45b2,	// (0x0001b264) list_single_hwr_training_symbol_option_pane_ParamLimits

0x45b2,	// (0x0001b264) list_single_hwr_training_symbol_option_pane

0x45c5,	// (0x0001b277) list_single_hwr_training_symbol_option_pane_g1

0x45cd,	// (0x0001b27f) list_single_hwr_training_symbol_option_pane_t1

0x45db,	// (0x0001b28d) bg_button_pane_cp023

0x45e4,	// (0x0001b296) bg_button_pane_cp024

0xd052,	// (0x00023d04) vitu2_page_scroll_pane_g1

0xd05a,	// (0x00023d0c) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0002679d) vitu2_page_scroll_pane_g

0xd062,	// (0x00023d14) vitu2_page_scroll_pane_t1

0x2e4a,	// (0x00019afc) popup_char_count_window_g1

0x4617,	// (0x0001b2c9) popup_char_count_window_g2

0x4620,	// (0x0001b2d2) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x000267a2) popup_char_count_window_g

0x4629,	// (0x0001b2db) popup_char_count_window_t1

0x01e7,	// (0x00016e99) main_vded2_pane

0x364a,	// (0x0001a2fc) aid_size_cell_imed_line

0x3654,	// (0x0001a306) grid_imed_line_width_pane

0x7ad4,	// (0x0001e786) vid4_indicators_pane_g4

0x4637,	// (0x0001b2e9) cell_imed_line_width_pane_ParamLimits

0x4637,	// (0x0001b2e9) cell_imed_line_width_pane

0x464b,	// (0x0001b2fd) cell_imed_line_width_pane_g1

0x4654,	// (0x0001b306) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000267a9) cell_imed_line_width_pane_g

0xd071,	// (0x00023d23) main_vded2_pane_g1_ParamLimits

0xd071,	// (0x00023d23) main_vded2_pane_g1

0xd07e,	// (0x00023d30) main_vded2_pane_g2_ParamLimits

0xd07e,	// (0x00023d30) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x000267ae) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x000267ae) main_vded2_pane_g

0xd08c,	// (0x00023d3e) vded2_slider_pane_ParamLimits

0xd08c,	// (0x00023d3e) vded2_slider_pane

0xd099,	// (0x00023d4b) aid_size_touch_vded2_end

0xd0a3,	// (0x00023d55) aid_size_touch_vded2_playhead

0x465c,	// (0x0001b30e) aid_size_touch_vded2_start

0x4664,	// (0x0001b316) vded2_slider_bg_pane

0x466d,	// (0x0001b31f) vded2_slider_pane_g1

0x4676,	// (0x0001b328) vded2_slider_pane_g2

0xd0ab,	// (0x00023d5d) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x000267b3) vded2_slider_pane_g

0x467e,	// (0x0001b330) vded2_slider_bg_pane_g1

0x4687,	// (0x0001b339) vded2_slider_bg_pane_g2

0x4690,	// (0x0001b342) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x000267ba) vded2_slider_bg_pane_g

0xa6b4,	// (0x00021366) aid_postcard_touch_down_pane_ParamLimits

0xa6b4,	// (0x00021366) aid_postcard_touch_down_pane

0xa6c4,	// (0x00021376) aid_postcard_touch_up_pane_ParamLimits

0xa6c4,	// (0x00021376) aid_postcard_touch_up_pane

0x01e7,	// (0x00016e99) main_blid2_pane

0x2c43,	// (0x000198f5) popup_blid2_search_window

0x01e7,	// (0x00016e99) blid2_gps_pane

0x01e7,	// (0x00016e99) blid2_navig_pane

0x01e7,	// (0x00016e99) blid2_search_pane

0x01e7,	// (0x00016e99) blid2_tripm_pane

0xd0b4,	// (0x00023d66) blid2_search_pane_g1_ParamLimits

0xd0b4,	// (0x00023d66) blid2_search_pane_g1

0xd0c4,	// (0x00023d76) blid2_search_pane_t1_ParamLimits

0xd0c4,	// (0x00023d76) blid2_search_pane_t1

0xd0d6,	// (0x00023d88) aid_size_cell_blid2_gps_ParamLimits

0xd0d6,	// (0x00023d88) aid_size_cell_blid2_gps

0xd0e6,	// (0x00023d98) blid2_gps_pane_g1_ParamLimits

0xd0e6,	// (0x00023d98) blid2_gps_pane_g1

0xd0f2,	// (0x00023da4) grid_blid2_satellite_pane_ParamLimits

0xd0f2,	// (0x00023da4) grid_blid2_satellite_pane

0xd102,	// (0x00023db4) blid2_navig_pane_g1_ParamLimits

0xd102,	// (0x00023db4) blid2_navig_pane_g1

0xd10e,	// (0x00023dc0) blid2_navig_pane_t1_ParamLimits

0xd10e,	// (0x00023dc0) blid2_navig_pane_t1

0xd120,	// (0x00023dd2) blid2_navig_pane_t2_ParamLimits

0xd120,	// (0x00023dd2) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x000267c1) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x000267c1) blid2_navig_pane_t

0xd132,	// (0x00023de4) blid2_navig_ring_pane_ParamLimits

0xd132,	// (0x00023de4) blid2_navig_ring_pane

0xd142,	// (0x00023df4) blid2_speed_pane_ParamLimits

0xd142,	// (0x00023df4) blid2_speed_pane

0xd14e,	// (0x00023e00) blid2_tripm_pane_g1_ParamLimits

0xd14e,	// (0x00023e00) blid2_tripm_pane_g1

0xd15e,	// (0x00023e10) blid2_tripm_pane_g2_ParamLimits

0xd15e,	// (0x00023e10) blid2_tripm_pane_g2

0xd16a,	// (0x00023e1c) blid2_tripm_pane_g3_ParamLimits

0xd16a,	// (0x00023e1c) blid2_tripm_pane_g3

0xd176,	// (0x00023e28) blid2_tripm_pane_g4_ParamLimits

0xd176,	// (0x00023e28) blid2_tripm_pane_g4

0xd182,	// (0x00023e34) blid2_tripm_pane_g5_ParamLimits

0xd182,	// (0x00023e34) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x000267c6) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x000267c6) blid2_tripm_pane_g

0xd19e,	// (0x00023e50) blid2_tripm_pane_t1_ParamLimits

0xd19e,	// (0x00023e50) blid2_tripm_pane_t1

0xd1b2,	// (0x00023e64) blid2_tripm_pane_t2_ParamLimits

0xd1b2,	// (0x00023e64) blid2_tripm_pane_t2

0xd1c6,	// (0x00023e78) blid2_tripm_pane_t3_ParamLimits

0xd1c6,	// (0x00023e78) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x000267d3) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x000267d3) blid2_tripm_pane_t

0xd1f8,	// (0x00023eaa) cell_blid2_satellite_pane_ParamLimits

0xd1f8,	// (0x00023eaa) cell_blid2_satellite_pane

0xd212,	// (0x00023ec4) cell_blid2_satellite_pane_g1

0x4699,	// (0x0001b34b) cell_blid2_satellite_pane_t1

0x313d,	// (0x00019def) blid2_speed_pane_g1

0x46a7,	// (0x0001b359) blid2_speed_pane_t1

0x46b5,	// (0x0001b367) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x000267dc) blid2_speed_pane_t

0x313d,	// (0x00019def) blid2_navig_ring_pane_g1

0xd21b,	// (0x00023ecd) blid2_navig_ring_pane_g2

0xd223,	// (0x00023ed5) blid2_navig_ring_pane_g3

0xd22b,	// (0x00023edd) blid2_navig_ring_pane_g4

0xd233,	// (0x00023ee5) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x000267e1) blid2_navig_ring_pane_g

0x01e7,	// (0x00016e99) bg_popup_window_pane_cp011

0x46c3,	// (0x0001b375) popup_blid2_search_window_g1

0x46cb,	// (0x0001b37d) popup_blid2_search_window_t1

0x46d9,	// (0x0001b38b) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x000267ec) popup_blid2_search_window_t

0x0ed3,	// (0x00017b85) main_browser_pane_g1

0x0a02,	// (0x000176b4) main_browser_pane_ParamLimits

0x7a9c,	// (0x0001e74e) bg_button_pane_cp011_ParamLimits

0x7de6,	// (0x0001ea98) cell_vitu2_function_pane_g1_ParamLimits

0x2c35,	// (0x000198e7) bg_popup_sub_pane_cp22_ParamLimits

0xcbe0,	// (0x00023892) input_focus_pane_cp08_ParamLimits

0xcbf7,	// (0x000238a9) popup_vitu2_query_button_pane_ParamLimits

0xcbf7,	// (0x000238a9) popup_vitu2_query_button_pane

0xcc08,	// (0x000238ba) popup_vitu2_query_input_button_pane

0x41f3,	// (0x0001aea5) popup_vitu2_query_window_g1_ParamLimits

0xcc12,	// (0x000238c4) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000266ed) popup_vitu2_query_window_g_ParamLimits

0x01e7,	// (0x00016e99) bg_button_pane_cp026

0xd23b,	// (0x00023eed) popup_vitu2_query_input_button_pane_g1

0x01e7,	// (0x00016e99) bg_button_pane_cp025

0x46e7,	// (0x0001b399) popup_vitu2_query_button_pane_t1

0xb521,	// (0x000221d3) main_mp3_pane_t6

0xb531,	// (0x000221e3) popup_slider_window_cp01

0x79bd,	// (0x0001e66f) cam4_battery_pane

0x7aaa,	// (0x0001e75c) cam4_battery_pane_cp02

0x7f89,	// (0x0001ec3b) cam4_battery_pane_cp01

0x7f89,	// (0x0001ec3b) cam4_battery_pane_cp03

0x46f5,	// (0x0001b3a7) cam4_battery_pane_g1

0x313d,	// (0x00019def) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x000267f1) cam4_battery_pane_g

0x3007,	// (0x00019cb9) popup_blid_sat_info2_window_t11

0xa018,	// (0x00020cca) aid_size_touch_mv_arrow_left_ParamLimits

0xa043,	// (0x00020cf5) aid_size_touch_mv_arrow_right_ParamLimits

0x16f6,	// (0x000183a8) navi_pane_g1_ParamLimits

0xa06c,	// (0x00020d1e) navi_pane_g2_ParamLimits

0xa09a,	// (0x00020d4c) navi_pane_g3_ParamLimits

0xf409,	// (0x000260bb) navi_pane_g_ParamLimits

0xa0f4,	// (0x00020da6) navi_pane_mv_t1_ParamLimits

0xbf8d,	// (0x00022c3f) grid_imed_effect_pane_ParamLimits

0x8d15,	// (0x0001f9c7) aid_placing_vt_slider_lsc

0x0e24,	// (0x00017ad6) aid_placing_vt_slider_prt

0x0257,	// (0x00016f09) bg_tb_trans_pane_cp01_ParamLimits

0x32c4,	// (0x00019f76) popup_image_details_window_g1_ParamLimits

0x32d7,	// (0x00019f89) popup_image_details_window_g2_ParamLimits

0x32ec,	// (0x00019f9e) popup_image_details_window_g3_ParamLimits

0x32ec,	// (0x00019f9e) popup_image_details_window_g3

0xf73c,	// (0x000263ee) popup_image_details_window_g_ParamLimits

0x3300,	// (0x00019fb2) popup_image_details_window_t1_ParamLimits

0x3312,	// (0x00019fc4) popup_image_details_window_t2_ParamLimits

0x332b,	// (0x00019fdd) popup_image_details_window_t3_ParamLimits

0x333f,	// (0x00019ff1) popup_image_details_window_t4_ParamLimits

0x335a,	// (0x0001a00c) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000263f5) popup_image_details_window_t_ParamLimits

0xcf69,	// (0x00023c1b) cl_header_name_pane_ParamLimits

0xcf69,	// (0x00023c1b) cl_header_name_pane

0xd243,	// (0x00023ef5) cl_header_name_pane_t1_ParamLimits

0xd243,	// (0x00023ef5) cl_header_name_pane_t1

0xd25a,	// (0x00023f0c) cl_header_name_pane_t2_ParamLimits

0xd25a,	// (0x00023f0c) cl_header_name_pane_t2

0xd284,	// (0x00023f36) cl_header_name_pane_t3_ParamLimits

0xd284,	// (0x00023f36) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x000267f6) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x000267f6) cl_header_name_pane_t

0xa0c5,	// (0x00020d77) navi_pane_mv_g2_ParamLimits

0x3e6f,	// (0x0001ab21) field_vitu2_entry_pane_g1_ParamLimits

0x3e7b,	// (0x0001ab2d) field_vitu2_entry_pane_g2_ParamLimits

0x3e87,	// (0x0001ab39) field_vitu2_entry_pane_g3_ParamLimits

0x3e87,	// (0x0001ab39) field_vitu2_entry_pane_g3

0xf93a,	// (0x000265ec) field_vitu2_entry_pane_g_ParamLimits

0x7cbb,	// (0x0001e96d) cell_vitu2_itu_pane_g1_ParamLimits

0x7ccb,	// (0x0001e97d) cell_vitu2_itu_pane_g2_ParamLimits

0x7ccb,	// (0x0001e97d) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000265f8) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000265f8) cell_vitu2_itu_pane_g

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp05_ParamLimits

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp05

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp03

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp04

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp10_ParamLimits

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp10

0xcf0b,	// (0x00023bbd) bg_vkb2_func_pane_cp08

0xcef1,	// (0x00023ba3) bg_vkb2_func_pane_cp06

0xceff,	// (0x00023bb1) bg_vkb2_func_pane_cp07

0x45ed,	// (0x0001b29f) bg_vkb2_func_pane_cp11_ParamLimits

0x45ed,	// (0x0001b29f) bg_vkb2_func_pane_cp11

0x4602,	// (0x0001b2b4) bg_vkb2_func_pane_cp12_ParamLimits

0x4602,	// (0x0001b2b4) bg_vkb2_func_pane_cp12

0x01e7,	// (0x00016e99) bg_vkb2_func_pane_cp09

0x3ef5,	// (0x0001aba7) bg_vkb2_func_pane_g1

0x0fe4,	// (0x00017c96) bg_vkb2_func_pane_g2

0x3efd,	// (0x0001abaf) bg_vkb2_func_pane_g3

0x3f05,	// (0x0001abb7) bg_vkb2_func_pane_g4

0x417e,	// (0x0001ae30) bg_vkb2_func_pane_g5

0x3f1d,	// (0x0001abcf) bg_vkb2_func_pane_g6

0x3f25,	// (0x0001abd7) bg_vkb2_func_pane_g7

0x3f15,	// (0x0001abc7) bg_vkb2_func_pane_g8

0x0fc4,	// (0x00017c76) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x000267fd) bg_vkb2_func_pane_g

0xd190,	// (0x00023e42) blid2_tripm_pane_g6_ParamLimits

0xd190,	// (0x00023e42) blid2_tripm_pane_g6

0x3c4a,	// (0x0001a8fc) mp4_progress_pane_g1

0xd1ec,	// (0x00023e9e) blid2_tripm_values_pane_ParamLimits

0xd1ec,	// (0x00023e9e) blid2_tripm_values_pane

0xd2a9,	// (0x00023f5b) blid2_tripm_values_pane_t1

0xd2b7,	// (0x00023f69) blid2_tripm_values_pane_t2

0xd2c5,	// (0x00023f77) blid2_tripm_values_pane_t3

0xd2d3,	// (0x00023f85) blid2_tripm_values_pane_t4

0xd2e1,	// (0x00023f93) blid2_tripm_values_pane_t5

0xd2ef,	// (0x00023fa1) blid2_tripm_values_pane_t6

0xd2fd,	// (0x00023faf) blid2_tripm_values_pane_t7

0xd30b,	// (0x00023fbd) blid2_tripm_values_pane_t8

0xd319,	// (0x00023fcb) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00026810) blid2_tripm_values_pane_t

0x8d55,	// (0x0001fa07) call_video_pane_t1_ParamLimits

0x8d76,	// (0x0001fa28) call_video_pane_t2_ParamLimits

0xf292,	// (0x00025f44) call_video_pane_t_ParamLimits

0xa61d,	// (0x000212cf) msg_header_pane_g1_ParamLimits

0x1931,	// (0x000185e3) msg_header_pane_g2_ParamLimits

0x1931,	// (0x000185e3) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0002615e) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0002615e) msg_header_pane_g

0x0a02,	// (0x000176b4) main_clock2_pane_ParamLimits

0xbd8a,	// (0x00022a3c) grid_clock2_toolbar_pane_ParamLimits

0xbd8a,	// (0x00022a3c) grid_clock2_toolbar_pane

0xbd8a,	// (0x00022a3c) listscroll_clock2_pane_ParamLimits

0xbd8a,	// (0x00022a3c) listscroll_clock2_pane

0xbe38,	// (0x00022aea) main_clock2_pane_t3_ParamLimits

0xbe38,	// (0x00022aea) main_clock2_pane_t3

0xbe4a,	// (0x00022afc) main_clock2_pane_t4_ParamLimits

0xbe4a,	// (0x00022afc) main_clock2_pane_t4

0x46ff,	// (0x0001b3b1) cell_clock2_toolbar_pane

0x4707,	// (0x0001b3b9) cell_clock2_toolbar_pane_cp01

0x4707,	// (0x0001b3b9) cell_clock2_toolbar_pane_cp02

0x470f,	// (0x0001b3c1) cell_clock2_toolbar_pane_cp03

0x4717,	// (0x0001b3c9) list_clock2_pane

0x1649,	// (0x000182fb) scroll_pane_cp10

0x471f,	// (0x0001b3d1) list_single_clock2_pane_ParamLimits

0x471f,	// (0x0001b3d1) list_single_clock2_pane

0x1796,	// (0x00018448) list_highlight_pane_cp08

0x472c,	// (0x0001b3de) list_single_clock2_pane_t1

0x473a,	// (0x0001b3ec) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00026823) list_single_clock2_pane_t

0x01e7,	// (0x00016e99) bg_button_pane_cp10

0x4748,	// (0x0001b3fa) cell_clock2_toolbar_pane_g1

0x7073,	// (0x0001dd25) aid_main_viewer_pane_g1_ParamLimits

0x7073,	// (0x0001dd25) aid_main_viewer_pane_g1

0x707f,	// (0x0001dd31) aid_main_viewer_pane_g2_ParamLimits

0x707f,	// (0x0001dd31) aid_main_viewer_pane_g2

0xa670,	// (0x00021322) aid_main_viewer_pane_g3_ParamLimits

0xa670,	// (0x00021322) aid_main_viewer_pane_g3

0xa681,	// (0x00021333) aid_main_viewer_pane_g4_ParamLimits

0xa681,	// (0x00021333) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0002616f) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0002616f) aid_main_viewer_pane_g

0xadcf,	// (0x00021a81) main_calc_pane_ParamLimits

0xaddc,	// (0x00021a8e) main_dialer2_pane_ParamLimits

0x01e7,	// (0x00016e99) main_cam6_pane

0x01e7,	// (0x00016e99) main_vid6_pane

0xbd96,	// (0x00022a48) listscroll_gen_pane_cp06_ParamLimits

0xbd96,	// (0x00022a48) listscroll_gen_pane_cp06

0xbe5c,	// (0x00022b0e) main_clock2_pane_t5_ParamLimits

0xbe5c,	// (0x00022b0e) main_clock2_pane_t5

0xbeab,	// (0x00022b5d) aid_call2_pane_cp10_ParamLimits

0xbebd,	// (0x00022b6f) aid_call_pane_cp10_ParamLimits

0x16cb,	// (0x0001837d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x16cb,	// (0x0001837d) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbecf,	// (0x00022b81) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbecf,	// (0x00022b81) popup_clock_analogue_window_cp10_g4_ParamLimits

0x16cb,	// (0x0001837d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000264a5) popup_clock_analogue_window_cp10_g_ParamLimits

0xbee5,	// (0x00022b97) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc30a,	// (0x00022fbc) cell_dialer2_keypad_pane_g2_ParamLimits

0xc30a,	// (0x00022fbc) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0002658b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0002658b) cell_dialer2_keypad_pane_g

0xc326,	// (0x00022fd8) cell_dialer2_keypad_pane_t1

0xc72f,	// (0x000233e1) main_cset_text2_pane_ParamLimits

0xc72f,	// (0x000233e1) main_cset_text2_pane

0x43db,	// (0x0001b08d) area_vitu2_query_pane_g1_ParamLimits

0xce90,	// (0x00023b42) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00026740) area_vitu2_query_pane_g_ParamLimits

0x445f,	// (0x0001b111) area_vitu2_query_pane_t7_ParamLimits

0x445f,	// (0x0001b111) area_vitu2_query_pane_t7

0xcef1,	// (0x00023ba3) bg_button_pane_cp018_ParamLimits

0xceff,	// (0x00023bb1) bg_button_pane_cp021_ParamLimits

0xcf0b,	// (0x00023bbd) bg_button_pane_cp022_ParamLimits

0xcf0b,	// (0x00023bbd) bg_vkb2_func_pane_cp08_ParamLimits

0xcef1,	// (0x00023ba3) bg_vkb2_func_pane_cp06_ParamLimits

0xceff,	// (0x00023bb1) bg_vkb2_func_pane_cp07_ParamLimits

0xcf1c,	// (0x00023bce) input_focus_pane_cp09_ParamLimits

0x8001,	// (0x0001ecb3) cam6_autofocus_pane_ParamLimits

0x8001,	// (0x0001ecb3) cam6_autofocus_pane

0x8023,	// (0x0001ecd5) cam6_image_uncrop_pane_ParamLimits

0x8023,	// (0x0001ecd5) cam6_image_uncrop_pane

0x8050,	// (0x0001ed02) cam6_indi_pane_ParamLimits

0x8050,	// (0x0001ed02) cam6_indi_pane

0x806a,	// (0x0001ed1c) cam6_mode_pane_ParamLimits

0x806a,	// (0x0001ed1c) cam6_mode_pane

0x807e,	// (0x0001ed30) cam6_timer_pane_ParamLimits

0x807e,	// (0x0001ed30) cam6_timer_pane

0x808a,	// (0x0001ed3c) cam6_zoom_pane_ParamLimits

0x808a,	// (0x0001ed3c) cam6_zoom_pane

0xd327,	// (0x00023fd9) cam6_mode_pane_g1_ParamLimits

0xd327,	// (0x00023fd9) cam6_mode_pane_g1

0xd333,	// (0x00023fe5) cam6_mode_pane_g2_ParamLimits

0xd333,	// (0x00023fe5) cam6_mode_pane_g2

0xd33f,	// (0x00023ff1) cam6_mode_pane_g3_ParamLimits

0xd33f,	// (0x00023ff1) cam6_mode_pane_g3

0xd34b,	// (0x00023ffd) cam6_mode_pane_g4_ParamLimits

0xd34b,	// (0x00023ffd) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00026828) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00026828) cam6_mode_pane_g

0x475e,	// (0x0001b410) bg_tb_trans_pane_cp08_ParamLimits

0x475e,	// (0x0001b410) bg_tb_trans_pane_cp08

0x476c,	// (0x0001b41e) cam6_battery_pane_ParamLimits

0x476c,	// (0x0001b41e) cam6_battery_pane

0x4782,	// (0x0001b434) cam6_indi_pane_g1_ParamLimits

0x4782,	// (0x0001b434) cam6_indi_pane_g1

0x4794,	// (0x0001b446) cam6_indi_pane_g2_ParamLimits

0x4794,	// (0x0001b446) cam6_indi_pane_g2

0x47a6,	// (0x0001b458) cam6_indi_pane_g3_ParamLimits

0x47a6,	// (0x0001b458) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00026831) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00026831) cam6_indi_pane_g

0x47b8,	// (0x0001b46a) cam6_indi_pane_t1_ParamLimits

0x47b8,	// (0x0001b46a) cam6_indi_pane_t1

0xc465,	// (0x00023117) cam6_autofocus_pane_g1

0xc45d,	// (0x0002310f) cam6_autofocus_pane_g2

0xc475,	// (0x00023127) cam6_autofocus_pane_g3

0xc46d,	// (0x0002311f) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00026838) cam6_autofocus_pane_g

0x47de,	// (0x0001b490) cam6_timer_pane_g1

0x47e6,	// (0x0001b498) cam6_timer_pane_t1

0x47f4,	// (0x0001b4a6) cam6_zoom_cont_pane

0x47fc,	// (0x0001b4ae) cam6_zoom_pane_g1

0x4804,	// (0x0001b4b6) cam6_zoom_pane_g2

0xd357,	// (0x00024009) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00026841) cam6_zoom_pane_g

0x313d,	// (0x00019def) cam6_battery_pane_g1

0x313d,	// (0x00019def) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x000263b2) cam6_battery_pane_g

0x480c,	// (0x0001b4be) cam6_zoom_cont_pane_g1

0x4815,	// (0x0001b4c7) cam6_zoom_cont_pane_g2

0x481e,	// (0x0001b4d0) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00026848) cam6_zoom_cont_pane_g

0xd371,	// (0x00024023) cam6_mode_pane_cp_ParamLimits

0xd371,	// (0x00024023) cam6_mode_pane_cp

0xd385,	// (0x00024037) cam6_zoom_pane_cp_ParamLimits

0xd385,	// (0x00024037) cam6_zoom_pane_cp

0xd39d,	// (0x0002404f) vid6_image_uncrop_cif_pane_ParamLimits

0xd39d,	// (0x0002404f) vid6_image_uncrop_cif_pane

0xd3c9,	// (0x0002407b) vid6_image_uncrop_nhd_pane_ParamLimits

0xd3c9,	// (0x0002407b) vid6_image_uncrop_nhd_pane

0xd3e6,	// (0x00024098) vid6_image_uncrop_vga_pane_ParamLimits

0xd3e6,	// (0x00024098) vid6_image_uncrop_vga_pane

0xd405,	// (0x000240b7) vid6_image_uncrop_wvga_pane_ParamLimits

0xd405,	// (0x000240b7) vid6_image_uncrop_wvga_pane

0xd422,	// (0x000240d4) vid6_indi_pane_ParamLimits

0xd422,	// (0x000240d4) vid6_indi_pane

0x475e,	// (0x0001b410) bg_tb_trans_pane_cp09_ParamLimits

0x475e,	// (0x0001b410) bg_tb_trans_pane_cp09

0x4836,	// (0x0001b4e8) cam6_battery_pane_cp_ParamLimits

0x4836,	// (0x0001b4e8) cam6_battery_pane_cp

0x4842,	// (0x0001b4f4) vid6_indi_pane_g1_ParamLimits

0x4842,	// (0x0001b4f4) vid6_indi_pane_g1

0x4854,	// (0x0001b506) vid6_indi_pane_g2_ParamLimits

0x4854,	// (0x0001b506) vid6_indi_pane_g2

0x4866,	// (0x0001b518) vid6_indi_pane_g3_ParamLimits

0x4866,	// (0x0001b518) vid6_indi_pane_g3

0x487b,	// (0x0001b52d) vid6_indi_pane_g4_ParamLimits

0x487b,	// (0x0001b52d) vid6_indi_pane_g4

0x4890,	// (0x0001b542) vid6_indi_pane_g5_ParamLimits

0x4890,	// (0x0001b542) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0002684f) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0002684f) vid6_indi_pane_g

0x48aa,	// (0x0001b55c) vid6_indi_pane_t1_ParamLimits

0x48aa,	// (0x0001b55c) vid6_indi_pane_t1

0x48c0,	// (0x0001b572) vid6_indi_pane_t2_ParamLimits

0x48c0,	// (0x0001b572) vid6_indi_pane_t2

0x48e8,	// (0x0001b59a) vid6_indi_pane_t3_ParamLimits

0x48e8,	// (0x0001b59a) vid6_indi_pane_t3

0x4910,	// (0x0001b5c2) vid6_indi_pane_t4_ParamLimits

0x4910,	// (0x0001b5c2) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0002685a) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0002685a) vid6_indi_pane_t

0x4934,	// (0x0001b5e6) wait_bar_pane_cp08

0xd445,	// (0x000240f7) main_cset_text2_pane_t1_ParamLimits

0xd445,	// (0x000240f7) main_cset_text2_pane_t1

0xd35f,	// (0x00024011) listscroll_gen_pane_cp06_t1_ParamLimits

0xd35f,	// (0x00024011) listscroll_gen_pane_cp06_t1

0x01e7,	// (0x00016e99) main_cam6_set_pane

0x79af,	// (0x0001e661) bg_tb_trans_pane_cp06_ParamLimits

0x79c5,	// (0x0001e677) cam4_indicators_pane_g1_ParamLimits

0x79d6,	// (0x0001e688) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x000265c8) cam4_indicators_pane_g_ParamLimits

0x79f4,	// (0x0001e6a6) cam4_indicators_pane_t1_ParamLimits

0x7a9c,	// (0x0001e74e) bg_tb_trans_pane_cp07_ParamLimits

0x79c5,	// (0x0001e677) vid4_indicators_pane_g1_ParamLimits

0x7ab2,	// (0x0001e764) vid4_indicators_pane_g2_ParamLimits

0x7ac3,	// (0x0001e775) vid4_indicators_pane_g3_ParamLimits

0x7ad4,	// (0x0001e786) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000265da) vid4_indicators_pane_g_ParamLimits

0x7af0,	// (0x0001e7a2) vid4_indicators_pane_t1_ParamLimits

0x7f91,	// (0x0001ec43) vid4_progress_pane_g1_ParamLimits

0x7fa1,	// (0x0001ec53) vid4_progress_pane_g2_ParamLimits

0x125d,	// (0x00017f0f) vid4_progress_pane_g3_ParamLimits

0x79d6,	// (0x0001e688) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0002678b) vid4_progress_pane_g_ParamLimits

0x7fb1,	// (0x0001ec63) vid4_progress_pane_t1_ParamLimits

0x7fc6,	// (0x0001ec78) vid4_progress_pane_t2_ParamLimits

0x7fdc,	// (0x0001ec8e) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00026796) vid4_progress_pane_t_ParamLimits

0x7ff1,	// (0x0001eca3) wait_bar_pane_cp07_ParamLimits

0xd483,	// (0x00024135) main_cam6_set_pane_g2_ParamLimits

0xd483,	// (0x00024135) main_cam6_set_pane_g2

0xd48f,	// (0x00024141) main_cset6_listscroll_pane_ParamLimits

0xd48f,	// (0x00024141) main_cset6_listscroll_pane

0xd4ba,	// (0x0002416c) main_cset6_slider_pane_ParamLimits

0xd4ba,	// (0x0002416c) main_cset6_slider_pane

0xd4c6,	// (0x00024178) main_cset6_text2_pane_ParamLimits

0xd4c6,	// (0x00024178) main_cset6_text2_pane

0x4943,	// (0x0001b5f5) main_cset6_text_pane

0x494b,	// (0x0001b5fd) main_cset_list_pane_copy1_ParamLimits

0x494b,	// (0x0001b5fd) main_cset_list_pane_copy1

0x495b,	// (0x0001b60d) scroll_pane_cp028_copy1

0xd4d9,	// (0x0002418b) cset_list_set_pane_copy1

0xd4f3,	// (0x000241a5) aid_position_infowindow_above_copy1

0xd4fb,	// (0x000241ad) aid_position_infowindow_below_copy1

0x4964,	// (0x0001b616) cset_list_set_pane_g1_copy1

0x496c,	// (0x0001b61e) cset_list_set_pane_g3_copy1_ParamLimits

0x496c,	// (0x0001b61e) cset_list_set_pane_g3_copy1

0x497b,	// (0x0001b62d) cset_list_set_pane_t1_copy1_ParamLimits

0x497b,	// (0x0001b62d) cset_list_set_pane_t1_copy1

0x0257,	// (0x00016f09) list_highlight_pane_cp021_copy1_ParamLimits

0x0257,	// (0x00016f09) list_highlight_pane_cp021_copy1

0x4990,	// (0x0001b642) cset6_slider_pane_ParamLimits

0x4990,	// (0x0001b642) cset6_slider_pane

0x49bc,	// (0x0001b66e) main_cset6_slider_pane_g1_ParamLimits

0x49bc,	// (0x0001b66e) main_cset6_slider_pane_g1

0xd503,	// (0x000241b5) main_cset6_slider_pane_g2_ParamLimits

0xd503,	// (0x000241b5) main_cset6_slider_pane_g2

0x4024,	// (0x0001acd6) main_cset6_slider_pane_g3_ParamLimits

0x4024,	// (0x0001acd6) main_cset6_slider_pane_g3

0xd52b,	// (0x000241dd) main_cset6_slider_pane_g4_ParamLimits

0xd52b,	// (0x000241dd) main_cset6_slider_pane_g4

0xd537,	// (0x000241e9) main_cset6_slider_pane_g5_ParamLimits

0xd537,	// (0x000241e9) main_cset6_slider_pane_g5

0x4024,	// (0x0001acd6) main_cset6_slider_pane_g7_ParamLimits

0x4024,	// (0x0001acd6) main_cset6_slider_pane_g7

0x4030,	// (0x0001ace2) main_cset6_slider_pane_g8_ParamLimits

0x4030,	// (0x0001ace2) main_cset6_slider_pane_g8

0xd545,	// (0x000241f7) main_cset6_slider_pane_g9_ParamLimits

0xd545,	// (0x000241f7) main_cset6_slider_pane_g9

0xd551,	// (0x00024203) main_cset6_slider_pane_g10_ParamLimits

0xd551,	// (0x00024203) main_cset6_slider_pane_g10

0xd52b,	// (0x000241dd) main_cset6_slider_pane_g11_ParamLimits

0xd52b,	// (0x000241dd) main_cset6_slider_pane_g11

0xd55d,	// (0x0002420f) main_cset6_slider_pane_g12_ParamLimits

0xd55d,	// (0x0002420f) main_cset6_slider_pane_g12

0xd569,	// (0x0002421b) main_cset6_slider_pane_g13_ParamLimits

0xd569,	// (0x0002421b) main_cset6_slider_pane_g13

0xd577,	// (0x00024229) main_cset6_slider_pane_g14_ParamLimits

0xd577,	// (0x00024229) main_cset6_slider_pane_g14

0xd585,	// (0x00024237) main_cset6_slider_pane_g15_ParamLimits

0xd585,	// (0x00024237) main_cset6_slider_pane_g15

0xd537,	// (0x000241e9) main_cset6_slider_pane_g16_ParamLimits

0xd537,	// (0x000241e9) main_cset6_slider_pane_g16

0xd59d,	// (0x0002424f) main_cset6_slider_pane_g17_ParamLimits

0xd59d,	// (0x0002424f) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00026863) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00026863) main_cset6_slider_pane_g

0x49e4,	// (0x0001b696) main_cset6_slider_pane_t1_ParamLimits

0x49e4,	// (0x0001b696) main_cset6_slider_pane_t1

0xd5ab,	// (0x0002425d) main_cset6_slider_pane_t2_ParamLimits

0xd5ab,	// (0x0002425d) main_cset6_slider_pane_t2

0xd5d6,	// (0x00024288) main_cset6_slider_pane_t3_ParamLimits

0xd5d6,	// (0x00024288) main_cset6_slider_pane_t3

0xd601,	// (0x000242b3) main_cset6_slider_pane_t4_ParamLimits

0xd601,	// (0x000242b3) main_cset6_slider_pane_t4

0xd62e,	// (0x000242e0) main_cset6_slider_pane_t5_ParamLimits

0xd62e,	// (0x000242e0) main_cset6_slider_pane_t5

0x4a25,	// (0x0001b6d7) main_cset6_slider_pane_t7_ParamLimits

0x4a25,	// (0x0001b6d7) main_cset6_slider_pane_t7

0xd65b,	// (0x0002430d) main_cset6_slider_pane_t8_ParamLimits

0xd65b,	// (0x0002430d) main_cset6_slider_pane_t8

0xd67f,	// (0x00024331) main_cset6_slider_pane_t9_ParamLimits

0xd67f,	// (0x00024331) main_cset6_slider_pane_t9

0xd6a3,	// (0x00024355) main_cset6_slider_pane_t10_ParamLimits

0xd6a3,	// (0x00024355) main_cset6_slider_pane_t10

0xd6c7,	// (0x00024379) main_cset6_slider_pane_t11_ParamLimits

0xd6c7,	// (0x00024379) main_cset6_slider_pane_t11

0x4a5b,	// (0x0001b70d) main_cset6_slider_pane_t14_ParamLimits

0x4a5b,	// (0x0001b70d) main_cset6_slider_pane_t14

0x4a94,	// (0x0001b746) main_cset6_slider_pane_t15_ParamLimits

0x4a94,	// (0x0001b746) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00026888) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00026888) main_cset6_slider_pane_t

0x4108,	// (0x0001adba) cset_slider_pane_g1_copy1

0x4111,	// (0x0001adc3) cset_slider_pane_g2_copy1

0x411a,	// (0x0001adcc) cset_slider_pane_g3_copy1

0x01e7,	// (0x00016e99) bg_popup_sub_pane_cp011_copy1

0x41ff,	// (0x0001aeb1) main_cset_text_pane_g1_copy1

0x4207,	// (0x0001aeb9) main_cset_text_pane_t1_copy1

0x4215,	// (0x0001aec7) main_cset_text_pane_t2_copy1

0x4223,	// (0x0001aed5) main_cset_text_pane_t3_copy1

0x4231,	// (0x0001aee3) main_cset_text_pane_t4_copy1

0x423f,	// (0x0001aef1) main_cset_text_pane_t5_copy1

0x424d,	// (0x0001aeff) main_cset_text_pane_t6_copy1

0x425b,	// (0x0001af0d) main_cset_text_pane_t7_copy1

0xd6ed,	// (0x0002439f) main_cset_text2_pane_t1_copy1

0x01e7,	// (0x00016e99) main_ncimui_pane

0xae1b,	// (0x00021acd) popup_query_ncimui_window_ParamLimits

0xae1b,	// (0x00021acd) popup_query_ncimui_window

0x3409,	// (0x0001a0bb) field_cale_ev2_pane_g4_ParamLimits

0x3409,	// (0x0001a0bb) field_cale_ev2_pane_g4

0xc2aa,	// (0x00022f5c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc2aa,	// (0x00022f5c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00026566) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00026566) cell_video_dialer_keypad_pane_g

0xc2c2,	// (0x00022f74) cell_video_dialer_keypad_pane_t1

0x01e7,	// (0x00016e99) bg_popup_window_pane_cp012

0x1519,	// (0x000181cb) heading_pane_cp06

0x4bbc,	// (0x0001b86e) ncim_query_content_pane

0x01e7,	// (0x00016e99) bg_popup_heading_pane_cp01

0x4bc4,	// (0x0001b876) ncim_heading_pane_t1

0x4bd2,	// (0x0001b884) ncim_indicator_popup_pane

0x4be4,	// (0x0001b896) ncim_query_button_pane

0x4bf8,	// (0x0001b8aa) ncim_query_content_pane_t1

0x4c0a,	// (0x0001b8bc) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x000268c7) ncim_query_content_pane_t

0x4c44,	// (0x0001b8f6) ncim_query_list_pane

0x4c56,	// (0x0001b908) ncim_query_popup_pane

0x4bd2,	// (0x0001b884) ncim_indicator_popup_pane_ParamLimits

0xd81a,	// (0x000244cc) ncim_query_content_pane_g1_ParamLimits

0xd81a,	// (0x000244cc) ncim_query_content_pane_g1

0x4bf8,	// (0x0001b8aa) ncim_query_content_pane_t1_ParamLimits

0x4c0a,	// (0x0001b8bc) ncim_query_content_pane_t2_ParamLimits

0xd826,	// (0x000244d8) ncim_query_content_pane_t3_ParamLimits

0xd826,	// (0x000244d8) ncim_query_content_pane_t3

0xd843,	// (0x000244f5) ncim_query_content_pane_t4_ParamLimits

0xd843,	// (0x000244f5) ncim_query_content_pane_t4

0xd860,	// (0x00024512) ncim_query_content_pane_t5_ParamLimits

0xd860,	// (0x00024512) ncim_query_content_pane_t5

0x4c1c,	// (0x0001b8ce) ncim_query_content_pane_t6_ParamLimits

0x4c1c,	// (0x0001b8ce) ncim_query_content_pane_t6

0xfc15,	// (0x000268c7) ncim_query_content_pane_t_ParamLimits

0x4c44,	// (0x0001b8f6) ncim_query_list_pane_ParamLimits

0x4c56,	// (0x0001b908) ncim_query_popup_pane_ParamLimits

0x4c6a,	// (0x0001b91c) wait_bar_pane_cp04

0x01e7,	// (0x00016e99) input_focus_pane_cp011

0x4c72,	// (0x0001b924) ncim_query_popup_pane_t1

0x4c80,	// (0x0001b932) ncim_list_query_list_pane_ParamLimits

0x4c80,	// (0x0001b932) ncim_list_query_list_pane

0x01e7,	// (0x00016e99) bg_button_pane_cp027

0x4c93,	// (0x0001b945) ncim_query_button_pane_g1

0x01e7,	// (0x00016e99) list_highlight_pane_cp012

0x4c9d,	// (0x0001b94f) ncim_list_query_list_pane_g1

0x4ca5,	// (0x0001b957) ncim_list_query_list_pane_t1

0x79e5,	// (0x0001e697) cam4_indicators_pane_g3_ParamLimits

0x79e5,	// (0x0001e697) cam4_indicators_pane_g3

0x7ae0,	// (0x0001e792) vid4_indicators_pane_g5_ParamLimits

0x7ae0,	// (0x0001e792) vid4_indicators_pane_g5

0x79e5,	// (0x0001e697) vid4_progress_pane_g5_ParamLimits

0x79e5,	// (0x0001e697) vid4_progress_pane_g5

0xd733,	// (0x000243e5) main_ncimui_pane_g1

0xd789,	// (0x0002443b) ncimui_group_query_pane_ParamLimits

0xd789,	// (0x0002443b) ncimui_group_query_pane

0xd7c5,	// (0x00024477) ncimui_list_pane_ParamLimits

0xd7c5,	// (0x00024477) ncimui_list_pane

0xd7e6,	// (0x00024498) ncimui_text_pane_ParamLimits

0xd7e6,	// (0x00024498) ncimui_text_pane

0xd87d,	// (0x0002452f) ncimui_text_pane_t1_ParamLimits

0xd87d,	// (0x0002452f) ncimui_text_pane_t1

0x4cb3,	// (0x0001b965) ncimui_list_single_graphic_pane_ParamLimits

0x4cb3,	// (0x0001b965) ncimui_list_single_graphic_pane

0xd89c,	// (0x0002454e) ncimui_query_pane_ParamLimits

0xd89c,	// (0x0002454e) ncimui_query_pane

0x01e7,	// (0x00016e99) list_highlight_pane_cp013

0x4cc3,	// (0x0001b975) ncim_list_query_list_pane_t1_copy1

0x4c9d,	// (0x0001b94f) ncim_list_single_graphic_pane_g1

0x4cd1,	// (0x0001b983) ncim_query_button_pane_cp01

0x4cdd,	// (0x0001b98f) ncim_query_entry_pane_ParamLimits

0x4cdd,	// (0x0001b98f) ncim_query_entry_pane

0x4cf0,	// (0x0001b9a2) ncimui_query_pane_g1

0x4cfc,	// (0x0001b9ae) ncimui_query_pane_t1_ParamLimits

0x4cfc,	// (0x0001b9ae) ncimui_query_pane_t1

0x0257,	// (0x00016f09) input_focus_pane_cp012

0x4d15,	// (0x0001b9c7) ncim_query_entry_pane_t1

0x0a02,	// (0x000176b4) main_im_pane_ParamLimits

0x0257,	// (0x00016f09) main_mobtv_pane_ParamLimits

0x0257,	// (0x00016f09) main_mobtv_pane

0xd545,	// (0x000241f7) main_cset6_slider_pane_g18_ParamLimits

0xd545,	// (0x000241f7) main_cset6_slider_pane_g18

0xd569,	// (0x0002421b) main_cset6_slider_pane_g19_ParamLimits

0xd569,	// (0x0002421b) main_cset6_slider_pane_g19

0x3e87,	// (0x0001ab39) bg_main_mobtv_pane_ParamLimits

0x3e87,	// (0x0001ab39) bg_main_mobtv_pane

0xd8af,	// (0x00024561) main_mobtv_info_pane

0xd8ba,	// (0x0002456c) main_mobtv_loading_pane_ParamLimits

0xd8ba,	// (0x0002456c) main_mobtv_loading_pane

0x4d35,	// (0x0001b9e7) main_mobtv_pg_channel_list_pane

0x4d3f,	// (0x0001b9f1) main_mobtv_pg_hdr_pane

0xd8c7,	// (0x00024579) main_mobtv_programe_curr_pane_ParamLimits

0xd8c7,	// (0x00024579) main_mobtv_programe_curr_pane

0xd8d4,	// (0x00024586) main_mobtv_programe_next_pane_ParamLimits

0xd8d4,	// (0x00024586) main_mobtv_programe_next_pane

0x4d48,	// (0x0001b9fa) popup_mobtv_noti_window

0x313d,	// (0x00019def) main_tv_pg_hdr_pane_g1

0x4d50,	// (0x0001ba02) main_tv_pg_hdr_pane_g2

0x4d58,	// (0x0001ba0a) main_tv_pg_hdr_pane_g3

0x4d60,	// (0x0001ba12) main_tv_pg_hdr_pane_g4

0x4d68,	// (0x0001ba1a) main_tv_pg_hdr_pane_g5

0x4d72,	// (0x0001ba24) main_tv_pg_hdr_pane_g6

0x4d7c,	// (0x0001ba2e) main_tv_pg_hdr_pane_g7

0x4d86,	// (0x0001ba38) main_tv_pg_hdr_pane_g8

0x4d90,	// (0x0001ba42) main_tv_pg_hdr_pane_g9

0x4d9a,	// (0x0001ba4c) main_tv_pg_hdr_pane_g10

0x4da4,	// (0x0001ba56) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x000268d4) main_tv_pg_hdr_pane_g

0x4dae,	// (0x0001ba60) main_tv_pg_hdr_pane_t1

0x4dbc,	// (0x0001ba6e) main_tv_pg_hdr_pane_t2

0x4dca,	// (0x0001ba7c) main_tv_pg_hdr_pane_t3

0x4dda,	// (0x0001ba8c) main_tv_pg_hdr_pane_t4

0x4dea,	// (0x0001ba9c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x000268eb) main_tv_pg_hdr_pane_t

0x4dfa,	// (0x0001baac) single_mobtv_pg_channel_pane_ParamLimits

0x4dfa,	// (0x0001baac) single_mobtv_pg_channel_pane

0x4e0c,	// (0x0001babe) single_mobtv_pg_channel_table_pane

0x4e15,	// (0x0001bac7) single_mobtv_pg_channel_thumb_pane

0x4e1e,	// (0x0001bad0) single_tv_pg_channel_pane_g1

0x4e27,	// (0x0001bad9) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x000268f6) single_tv_pg_channel_pane_g

0x33a4,	// (0x0001a056) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x33a4,	// (0x0001a056) bg_single_mobtv_pg_channel_thumb_pane

0x4e30,	// (0x0001bae2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4e30,	// (0x0001bae2) single_mobtv_pg_channel_thumb_pane_g1

0x4e3e,	// (0x0001baf0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4e3e,	// (0x0001baf0) single_mobtv_pg_channel_thumb_pane_g2

0x4e4a,	// (0x0001bafc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4e4a,	// (0x0001bafc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x000268fb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x000268fb) single_mobtv_pg_channel_thumb_pane_g

0x4e56,	// (0x0001bb08) single_mobtv_pg_channel_thumb_pane_t1

0x4e64,	// (0x0001bb16) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00026902) single_mobtv_pg_channel_thumb_pane_t

0x313d,	// (0x00019def) bg_single_mobtv_pg_channel_table_pane_g1

0x313d,	// (0x00019def) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x000263b2) bg_single_mobtv_pg_channel_table_pane_g

0x4e72,	// (0x0001bb24) single_mobtv_pg_channel_table_pane_t1

0x4e80,	// (0x0001bb32) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00026907) single_mobtv_pg_channel_table_pane_t

0xd8e9,	// (0x0002459b) main_mobtv_info_pane_g1_ParamLimits

0xd8e9,	// (0x0002459b) main_mobtv_info_pane_g1

0xd905,	// (0x000245b7) main_mobtv_info_pane_t1_ParamLimits

0xd905,	// (0x000245b7) main_mobtv_info_pane_t1

0xd97d,	// (0x0002462f) main_mobtv_info_pane_t2_ParamLimits

0xd97d,	// (0x0002462f) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00026911) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00026911) main_mobtv_info_pane_t

0xda0c,	// (0x000246be) wait_bar_pane_cp05

0xda1e,	// (0x000246d0) main_mobtv_loading_pane_g1_ParamLimits

0xda1e,	// (0x000246d0) main_mobtv_loading_pane_g1

0xda2c,	// (0x000246de) main_mobtv_loading_pane_g2_ParamLimits

0xda2c,	// (0x000246de) main_mobtv_loading_pane_g2

0xda38,	// (0x000246ea) main_mobtv_loading_pane_g3_ParamLimits

0xda38,	// (0x000246ea) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00026918) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00026918) main_mobtv_loading_pane_g

0x4e8e,	// (0x0001bb40) main_mobtv_loading_pane_t1_ParamLimits

0x4e8e,	// (0x0001bb40) main_mobtv_loading_pane_t1

0x4ea6,	// (0x0001bb58) main_mobtv_loading_pane_t2_ParamLimits

0x4ea6,	// (0x0001bb58) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0002691f) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0002691f) main_mobtv_loading_pane_t

0xda46,	// (0x000246f8) wait_bar_pane_cp06_ParamLimits

0xda46,	// (0x000246f8) wait_bar_pane_cp06

0x4eca,	// (0x0001bb7c) main_mobtv_programe_curr_pane_t1

0x4ed8,	// (0x0001bb8a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00026924) main_mobtv_programe_curr_pane_t

0x4ee6,	// (0x0001bb98) main_mobtv_programe_next_pane_t1

0x4ef4,	// (0x0001bba6) main_mobtv_programe_next_pane_t2

0x4f02,	// (0x0001bbb4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00026929) main_mobtv_programe_next_pane_t

0x01e7,	// (0x00016e99) bg_popup_mobtv_noti_window_pane

0x4f10,	// (0x0001bbc2) popup_mobtv_noti_window_g1

0x4f18,	// (0x0001bbca) popup_mobtv_noti_window_t1

0x4f26,	// (0x0001bbd8) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00026930) popup_mobtv_noti_window_t

0x313d,	// (0x00019def) bg_popup_mobtv_noti_window_pane_g1

0x01e7,	// (0x00016e99) sc_clock_pane

0x01e7,	// (0x00016e99) main_fs_bigclock_pane

0xd1da,	// (0x00023e8c) blid2_tripm_pane_t4_ParamLimits

0xd1da,	// (0x00023e8c) blid2_tripm_pane_t4

0xda52,	// (0x00024704) sc_clock_pane_g1_ParamLimits

0xda52,	// (0x00024704) sc_clock_pane_g1

0xda60,	// (0x00024712) sc_clock_pane_t1_ParamLimits

0xda60,	// (0x00024712) sc_clock_pane_t1

0xda73,	// (0x00024725) sc_clock_pane_t2_ParamLimits

0xda73,	// (0x00024725) sc_clock_pane_t2

0xda85,	// (0x00024737) sc_clock_pane_t3_ParamLimits

0xda85,	// (0x00024737) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00026935) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00026935) sc_clock_pane_t

0xe8ce,	// (0x00025580) main_fs_bigclock_indicator_pane_ParamLimits

0xe8ce,	// (0x00025580) main_fs_bigclock_indicator_pane

0xdb23,	// (0x000247d5) main_fs_bigclock_pane_g1_ParamLimits

0xdb23,	// (0x000247d5) main_fs_bigclock_pane_g1

0xe8da,	// (0x0002558c) main_fs_bigclock_pane_t1_ParamLimits

0xe8da,	// (0x0002558c) main_fs_bigclock_pane_t1

0xe8ec,	// (0x0002559e) main_fs_bigclock_pane_t2_ParamLimits

0xe8ec,	// (0x0002559e) main_fs_bigclock_pane_t2

0xe8fe,	// (0x000255b0) main_fs_bigclock_pane_t3_ParamLimits

0xe8fe,	// (0x000255b0) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00026b2f) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00026b2f) main_fs_bigclock_pane_t

0x5a16,	// (0x0001c6c8) main_fs_bigclock_indicator_pane_g1

0x4bec,	// (0x0001b89e) ncim_query_content_pane_g2_ParamLimits

0x4bec,	// (0x0001b89e) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x000268c2) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x000268c2) ncim_query_content_pane_g

0xda99,	// (0x0002474b) sc_clock_pane_t4_ParamLimits

0xda99,	// (0x0002474b) sc_clock_pane_t4

0x0257,	// (0x00016f09) main_radioblah_pane

0x3d63,	// (0x0001aa15) cell_call4_button_pane_t1_copy1_ParamLimits

0x3d63,	// (0x0001aa15) cell_call4_button_pane_t1_copy1

0xd73b,	// (0x000243ed) main_ncimui_pane_t1_ParamLimits

0xd73b,	// (0x000243ed) main_ncimui_pane_t1

0xd755,	// (0x00024407) main_ncimui_pane_t2_ParamLimits

0xd755,	// (0x00024407) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x000268bb) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x000268bb) main_ncimui_pane_t

0x4f34,	// (0x0001bbe6) main_radioblah_anim_pane_ParamLimits

0x4f34,	// (0x0001bbe6) main_radioblah_anim_pane

0x4f45,	// (0x0001bbf7) main_radioblah_info_pane_ParamLimits

0x4f45,	// (0x0001bbf7) main_radioblah_info_pane

0x4f59,	// (0x0001bc0b) main_radioblah_pane_t1_ParamLimits

0x4f59,	// (0x0001bc0b) main_radioblah_pane_t1

0x4f75,	// (0x0001bc27) main_radioblah_pane_t2_ParamLimits

0x4f75,	// (0x0001bc27) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00026956) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00026956) main_radioblah_pane_t

0xdc9f,	// (0x00024951) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc9f,	// (0x00024951) main_radioblah_rocker_ctrl_pane

0x4fbd,	// (0x0001bc6f) main_radioblah_info_pane_t1_ParamLimits

0x4fbd,	// (0x0001bc6f) main_radioblah_info_pane_t1

0xdce4,	// (0x00024996) main_radioblah_info_pane_t2_ParamLimits

0xdce4,	// (0x00024996) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0002695f) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0002695f) main_radioblah_info_pane_t

0x313d,	// (0x00019def) main_radioblah_rocker_ctrl_pane_g1

0xdd94,	// (0x00024a46) main_radioblah_rocker_ctrl_pane_g2

0xdd9c,	// (0x00024a4e) main_radioblah_rocker_ctrl_pane_g3

0xdda4,	// (0x00024a56) main_radioblah_rocker_ctrl_pane_g4

0xddac,	// (0x00024a5e) main_radioblah_rocker_ctrl_pane_g5

0xddb4,	// (0x00024a66) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00026968) main_radioblah_rocker_ctrl_pane_g

0xd6ed,	// (0x0002439f) main_cset_text2_pane_t1_copy1_ParamLimits

0x7929,	// (0x0001e5db) cam4_image_uncrop_qvga_pane

0x7a5a,	// (0x0001e70c) vid4_image_uncrop_qcif_pane

0x8042,	// (0x0001ecf4) cam6_image_uncrop_qvga_pane_ParamLimits

0x8042,	// (0x0001ecf4) cam6_image_uncrop_qvga_pane

0x4826,	// (0x0001b4d8) vid6_image_uncrop_qcif_pane_ParamLimits

0x4826,	// (0x0001b4d8) vid6_image_uncrop_qcif_pane

0x01e7,	// (0x00016e99) bg_popup_preview_window_pane_cp03

0x4b9e,	// (0x0001b850) list_cset_text2_pane

0x4ba6,	// (0x0001b858) main_cset6_text2_pane_g1

0x4bae,	// (0x0001b860) main_cset6_text2_pane_t1

0xddbc,	// (0x00024a6e) list_cset_text2_pane_t1_ParamLimits

0xddbc,	// (0x00024a6e) list_cset_text2_pane_t1

0x0257,	// (0x00016f09) main_radioblah_pane_ParamLimits

0xd9f8,	// (0x000246aa) main_mobtv_info_pane_t3_ParamLimits

0xd9f8,	// (0x000246aa) main_mobtv_info_pane_t3

0xdc8d,	// (0x0002493f) main_radioblah_pane_g1

0xdcb8,	// (0x0002496a) main_radioblah_info_pane_g1

0xdd39,	// (0x000249eb) main_radioblah_info_pane_t3_ParamLimits

0xdd39,	// (0x000249eb) main_radioblah_info_pane_t3

0x9b2c,	// (0x000207de) highlight_cell_cale_month_pane_ParamLimits

0x9b2c,	// (0x000207de) highlight_cell_cale_month_pane

0x01e7,	// (0x00016e99) main_phob_fisheye_pane

0x34be,	// (0x0001a170) scroll_pane_cp0031_ParamLimits

0x34be,	// (0x0001a170) scroll_pane_cp0031

0x4934,	// (0x0001b5e6) wait_bar_pane_cp08_ParamLimits

0xd4d9,	// (0x0002418b) cset_list_set_pane_copy1_ParamLimits

0x4ff7,	// (0x0001bca9) highlight_cell_cale_month_pane_g1

0xdde7,	// (0x00024a99) highlight_cell_cale_month_pane_t1

0x44cb,	// (0x0001b17d) list_gen_pane_cp01

0x400f,	// (0x0001acc1) scroll_pane_01

0xddf5,	// (0x00024aa7) list_single_double_fisheye_pane

0x4fff,	// (0x0001bcb1) list_double_fisheye_pane_g1_ParamLimits

0x4fff,	// (0x0001bcb1) list_double_fisheye_pane_g1

0x500b,	// (0x0001bcbd) list_double_fisheye_pane_g2_ParamLimits

0x500b,	// (0x0001bcbd) list_double_fisheye_pane_g2

0xddfe,	// (0x00024ab0) list_double_fisheye_pane_g3_ParamLimits

0xddfe,	// (0x00024ab0) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00026975) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00026975) list_double_fisheye_pane_g

0xde0a,	// (0x00024abc) list_double_fisheye_pane_t1_ParamLimits

0xde0a,	// (0x00024abc) list_double_fisheye_pane_t1

0xde25,	// (0x00024ad7) list_double_fisheye_pane_t2_ParamLimits

0xde25,	// (0x00024ad7) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00026980) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00026980) list_double_fisheye_pane_t

0x01e7,	// (0x00016e99) main_call5_pane

0xdabf,	// (0x00024771) sc_swipe_pane_ParamLimits

0xdabf,	// (0x00024771) sc_swipe_pane

0xde53,	// (0x00024b05) call5_image_pane_ParamLimits

0xde53,	// (0x00024b05) call5_image_pane

0xde63,	// (0x00024b15) call5_swipe_1_pane_ParamLimits

0xde63,	// (0x00024b15) call5_swipe_1_pane

0xde6f,	// (0x00024b21) call5_swipe_2_pane_ParamLimits

0xde6f,	// (0x00024b21) call5_swipe_2_pane

0xde89,	// (0x00024b3b) popup_call5_audio_first_window_ParamLimits

0xde89,	// (0x00024b3b) popup_call5_audio_first_window

0x33a4,	// (0x0001a056) call5_swipe_1_pane_g1_ParamLimits

0x33a4,	// (0x0001a056) call5_swipe_1_pane_g1

0x503c,	// (0x0001bcee) call5_swipe_1_pane_g2_ParamLimits

0x503c,	// (0x0001bcee) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00026985) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00026985) call5_swipe_1_pane_g

0x5048,	// (0x0001bcfa) call5_swipe_1_pane_t1_ParamLimits

0x5048,	// (0x0001bcfa) call5_swipe_1_pane_t1

0x33a4,	// (0x0001a056) call5_swipe_2_pane_g1_ParamLimits

0x33a4,	// (0x0001a056) call5_swipe_2_pane_g1

0x505d,	// (0x0001bd0f) call5_swipe_2_pane_g2_ParamLimits

0x505d,	// (0x0001bd0f) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0002698a) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0002698a) call5_swipe_2_pane_g

0x5069,	// (0x0001bd1b) call5_swipe_2_pane_t1_ParamLimits

0x5069,	// (0x0001bd1b) call5_swipe_2_pane_t1

0x507e,	// (0x0001bd30) sc_swipe_pane_g1_ParamLimits

0x507e,	// (0x0001bd30) sc_swipe_pane_g1

0x508b,	// (0x0001bd3d) sc_swipe_pane_g2_ParamLimits

0x508b,	// (0x0001bd3d) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0002698f) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0002698f) sc_swipe_pane_g

0x5097,	// (0x0001bd49) sc_swipe_pane_t1_ParamLimits

0x5097,	// (0x0001bd49) sc_swipe_pane_t1

0x01e7,	// (0x00016e99) main_cmail_launcher_pane

0xde97,	// (0x00024b49) aid_size_cell_cmail_l_ParamLimits

0xde97,	// (0x00024b49) aid_size_cell_cmail_l

0xdea7,	// (0x00024b59) grid_cmail_l_pane_ParamLimits

0xdea7,	// (0x00024b59) grid_cmail_l_pane

0xdeb7,	// (0x00024b69) cell_cmail_l_pane_ParamLimits

0xdeb7,	// (0x00024b69) cell_cmail_l_pane

0xdecb,	// (0x00024b7d) cell_cmail_l_pane_g1_ParamLimits

0xdecb,	// (0x00024b7d) cell_cmail_l_pane_g1

0xded7,	// (0x00024b89) cell_cmail_l_pane_t1_ParamLimits

0xded7,	// (0x00024b89) cell_cmail_l_pane_t1

0x50ac,	// (0x0001bd5e) cell_cmail_l_pane_t2_ParamLimits

0x50ac,	// (0x0001bd5e) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00026994) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00026994) cell_cmail_l_pane_t

0x0257,	// (0x00016f09) grid_highlight_pane_cp018_ParamLimits

0x0257,	// (0x00016f09) grid_highlight_pane_cp018

0x8187,	// (0x0001ee39) main2_pane_ParamLimits

0x8187,	// (0x0001ee39) main2_pane

0x0adb,	// (0x0001778d) popup_sp_fs_action_menu_bg_pane_g1

0x0ae3,	// (0x00017795) popup_sp_fs_action_menu_bg_pane_g2

0x0aeb,	// (0x0001779d) popup_sp_fs_action_menu_bg_pane_g3

0x0af3,	// (0x000177a5) popup_sp_fs_action_menu_bg_pane_g4

0x0afb,	// (0x000177ad) popup_sp_fs_action_menu_bg_pane_g5

0x0b03,	// (0x000177b5) popup_sp_fs_action_menu_bg_pane_g6

0x0b0b,	// (0x000177bd) popup_sp_fs_action_menu_bg_pane_g7

0x0b13,	// (0x000177c5) popup_sp_fs_action_menu_bg_pane_g8

0x0b1b,	// (0x000177cd) popup_sp_fs_action_menu_bg_pane_g9

0x0b23,	// (0x000177d5) popup_sp_fs_action_menu_bg_pane_g10

0x0b23,	// (0x000177d5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00025e5e) popup_sp_fs_action_menu_bg_pane_g

0x0d32,	// (0x000179e4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t3_g3_g1

0x0d3e,	// (0x000179f0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x2_t3_g3_g2

0x0d4a,	// (0x000179fc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00025f0e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00025f0e) list_medium_line_x2_t3_g3_g

0x0d56,	// (0x00017a08) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d56,	// (0x00017a08) list_medium_line_x2_t3_g3_t1

0x8c49,	// (0x0001f8fb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8c49,	// (0x0001f8fb) list_medium_line_x2_t3_g3_t2

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00025f15) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00025f15) list_medium_line_x2_t3_g3_t

0x0d32,	// (0x000179e4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t3_g2_g1

0x0d4a,	// (0x000179fc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00025f1c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00025f1c) list_medium_line_x2_t3_g2_g

0x0d80,	// (0x00017a32) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d80,	// (0x00017a32) list_medium_line_x2_t3_g2_t1

0x0d96,	// (0x00017a48) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d96,	// (0x00017a48) list_medium_line_x2_t3_g2_t2

0x0da8,	// (0x00017a5a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0da8,	// (0x00017a5a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00025f21) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00025f21) list_medium_line_x2_t3_g2_t

0x0d32,	// (0x000179e4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t4_g4_g1

0x0dc5,	// (0x00017a77) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0dc5,	// (0x00017a77) list_medium_line_x2_t4_g4_g2

0x0d3e,	// (0x000179f0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x2_t4_g4_g3

0x0dd1,	// (0x00017a83) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0dd1,	// (0x00017a83) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00025f28) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00025f28) list_medium_line_x2_t4_g4_g

0x8c5b,	// (0x0001f90d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8c5b,	// (0x0001f90d) list_medium_line_x2_t4_g4_t1

0x8c75,	// (0x0001f927) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8c75,	// (0x0001f927) list_medium_line_x2_t4_g4_t2

0x8c8a,	// (0x0001f93c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8c8a,	// (0x0001f93c) list_medium_line_x2_t4_g4_t3

0x0ddd,	// (0x00017a8f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ddd,	// (0x00017a8f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00025f31) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00025f31) list_medium_line_x2_t4_g4_t

0x0d32,	// (0x000179e4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t2_g4_g1

0x0dc5,	// (0x00017a77) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0dc5,	// (0x00017a77) list_medium_line_x2_t2_g4_g2

0x0d3e,	// (0x000179f0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x2_t2_g4_g3

0x0d4a,	// (0x000179fc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00025f98) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00025f98) list_medium_line_x2_t2_g4_g

0x10c5,	// (0x00017d77) list_medium_line_x2_t2_g4_t1_ParamLimits

0x10c5,	// (0x00017d77) list_medium_line_x2_t2_g4_t1

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00025fa1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00025fa1) list_medium_line_x2_t2_g4_t

0x0d32,	// (0x000179e4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t2_g3_g1

0x0d3e,	// (0x000179f0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x2_t2_g3_g2

0x0d4a,	// (0x000179fc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00025f0e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00025f0e) list_medium_line_x2_t2_g3_g

0x10da,	// (0x00017d8c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x10da,	// (0x00017d8c) list_medium_line_x2_t2_g3_t1

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00025fa6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00025fa6) list_medium_line_x2_t2_g3_t

0x9d5e,	// (0x00020a10) main_sp_fs_list_pane_ParamLimits

0x9d5e,	// (0x00020a10) main_sp_fs_list_pane

0x9d6a,	// (0x00020a1c) sp_fs_scroll_pane_ParamLimits

0x9d6a,	// (0x00020a1c) sp_fs_scroll_pane

0x9d76,	// (0x00020a28) list_medium_line_x2_t3_t1

0x9d86,	// (0x00020a38) list_medium_line_x2_t3_t2

0x12be,	// (0x00017f70) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00025ff1) list_medium_line_x2_t3_t

0x9d94,	// (0x00020a46) list_medium_line_x3_t4_t1

0x9da4,	// (0x00020a56) list_medium_line_x3_t4_t2

0x12cc,	// (0x00017f7e) list_medium_line_x3_t4_t3

0x12be,	// (0x00017f70) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00025ff8) list_medium_line_x3_t4_t

0x9db2,	// (0x00020a64) list_medium_line_x4_t5_t1

0x9dc2,	// (0x00020a74) list_medium_line_x4_t5_t2

0x12cc,	// (0x00017f7e) list_medium_line_x4_t5_t3

0x12da,	// (0x00017f8c) list_medium_line_x4_t5_t4

0x12be,	// (0x00017f70) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00026001) list_medium_line_x4_t5_t

0x0d32,	// (0x000179e4) list_medium_line_t4_g4_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_t4_g4_g1

0x0dd1,	// (0x00017a83) list_medium_line_t4_g4_g2_ParamLimits

0x0dd1,	// (0x00017a83) list_medium_line_t4_g4_g2

0x12e8,	// (0x00017f9a) list_medium_line_t4_g4_g3_ParamLimits

0x12e8,	// (0x00017f9a) list_medium_line_t4_g4_g3

0x0d4a,	// (0x000179fc) list_medium_line_t4_g4_g4_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0002600c) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0002600c) list_medium_line_t4_g4_g

0x12f4,	// (0x00017fa6) list_medium_line_t4_g4_t1_ParamLimits

0x12f4,	// (0x00017fa6) list_medium_line_t4_g4_t1

0x1309,	// (0x00017fbb) list_medium_line_t4_g4_t2_ParamLimits

0x1309,	// (0x00017fbb) list_medium_line_t4_g4_t2

0x131e,	// (0x00017fd0) list_medium_line_t4_g4_t3_ParamLimits

0x131e,	// (0x00017fd0) list_medium_line_t4_g4_t3

0x0d6b,	// (0x00017a1d) list_medium_line_t4_g4_t4_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00026015) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00026015) list_medium_line_t4_g4_t

0x9e48,	// (0x00020afa) chi_dic_find_pane_g1

0xadea,	// (0x00021a9c) main_tport_pane

0x4154,	// (0x0001ae06) list_medium_line_plain_t1

0x41a6,	// (0x0001ae58) list_medium_line_t2_g2_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_t2_g2_g1

0x41b2,	// (0x0001ae64) list_medium_line_t2_g2_g2_ParamLimits

0x41b2,	// (0x0001ae64) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000266d1) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000266d1) list_medium_line_t2_g2_g

0xcae6,	// (0x00023798) list_medium_line_t2_g2_t1_ParamLimits

0xcae6,	// (0x00023798) list_medium_line_t2_g2_t1

0xcb00,	// (0x000237b2) list_medium_line_t2_g2_t2_ParamLimits

0xcb00,	// (0x000237b2) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000266d6) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000266d6) list_medium_line_t2_g2_t

0x4558,	// (0x0001b20a) aid_sp_fs_list_icon_a_sm

0x4560,	// (0x0001b212) aid_sp_fs_list_icon_d

0x4568,	// (0x0001b21a) aid_sp_fs_text_primary

0x4571,	// (0x0001b223) aid_sp_fs_text_secondary

0x457a,	// (0x0001b22c) list_medium_line

0x457a,	// (0x0001b22c) list_medium_line_g2

0x457a,	// (0x0001b22c) list_medium_line_g3

0x457a,	// (0x0001b22c) list_medium_line_plain

0x457a,	// (0x0001b22c) list_medium_line_plain_t2

0x457a,	// (0x0001b22c) list_medium_line_plain_t3

0x457a,	// (0x0001b22c) list_medium_line_right_icon

0x457a,	// (0x0001b22c) list_medium_line_right_iconx2

0x457a,	// (0x0001b22c) list_medium_line_t2

0x457a,	// (0x0001b22c) list_medium_line_t2_g2

0x457a,	// (0x0001b22c) list_medium_line_t2_g3

0x457a,	// (0x0001b22c) list_medium_line_t2_right_icon

0x457a,	// (0x0001b22c) list_medium_line_t2_right_iconx2

0x457a,	// (0x0001b22c) list_medium_line_t3

0x457a,	// (0x0001b22c) list_medium_line_t3_g2

0x457a,	// (0x0001b22c) list_medium_line_t3_g3

0x457a,	// (0x0001b22c) list_medium_line_t3_right_iconx2

0x4583,	// (0x0001b235) list_medium_line_t4_g4

0x458c,	// (0x0001b23e) list_medium_line_x2

0x458c,	// (0x0001b23e) list_medium_line_x2_t2_g2

0x458c,	// (0x0001b23e) list_medium_line_x2_t2_g3

0x458c,	// (0x0001b23e) list_medium_line_x2_t2_g4

0x458c,	// (0x0001b23e) list_medium_line_x2_t3

0x458c,	// (0x0001b23e) list_medium_line_x2_t3_g2

0x458c,	// (0x0001b23e) list_medium_line_x2_t3_g3

0x458c,	// (0x0001b23e) list_medium_line_x2_t3_g4

0x458c,	// (0x0001b23e) list_medium_line_x2_t4_g2

0x458c,	// (0x0001b23e) list_medium_line_x2_t4_g4

0x4595,	// (0x0001b247) list_medium_line_x3

0x4595,	// (0x0001b247) list_medium_line_x3_t4

0x4595,	// (0x0001b247) list_medium_line_x3_t4_g4

0x4583,	// (0x0001b235) list_medium_line_x4_t4

0x4583,	// (0x0001b235) list_medium_line_x4_t4_g7

0x4583,	// (0x0001b235) list_medium_line_x4_t5

0x459e,	// (0x0001b250) list_single_fs_dyc_pane_ParamLimits

0x459e,	// (0x0001b250) list_single_fs_dyc_pane

0x0d32,	// (0x000179e4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x4_t4_g7_g1

0x4acd,	// (0x0001b77f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4acd,	// (0x0001b77f) list_medium_line_x4_t4_g7_g2

0x4ad9,	// (0x0001b78b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4ad9,	// (0x0001b78b) list_medium_line_x4_t4_g7_g3

0x4ae8,	// (0x0001b79a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4ae8,	// (0x0001b79a) list_medium_line_x4_t4_g7_g4

0x4af4,	// (0x0001b7a6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4af4,	// (0x0001b7a6) list_medium_line_x4_t4_g7_g5

0x4b03,	// (0x0001b7b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4b03,	// (0x0001b7b5) list_medium_line_x4_t4_g7_g6

0x4b12,	// (0x0001b7c4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4b12,	// (0x0001b7c4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x000268a1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x000268a1) list_medium_line_x4_t4_g7_g

0x4b1e,	// (0x0001b7d0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4b1e,	// (0x0001b7d0) list_medium_line_x4_t4_g7_t1

0x4b33,	// (0x0001b7e5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4b33,	// (0x0001b7e5) list_medium_line_x4_t4_g7_t2

0x4b48,	// (0x0001b7fa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4b48,	// (0x0001b7fa) list_medium_line_x4_t4_g7_t3

0x4b5d,	// (0x0001b80f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4b5d,	// (0x0001b80f) list_medium_line_x4_t4_g7_t4

0x4b6f,	// (0x0001b821) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4b6f,	// (0x0001b821) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x000268b0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x000268b0) list_medium_line_x4_t4_g7_t

0x4b81,	// (0x0001b833) list_single_dyc_row_pane_ParamLimits

0x4b81,	// (0x0001b833) list_single_dyc_row_pane

0xde47,	// (0x00024af9) call5_gesture_pane_ParamLimits

0xde47,	// (0x00024af9) call5_gesture_pane

0xde7b,	// (0x00024b2d) call5_windows_pane_ParamLimits

0xde7b,	// (0x00024b2d) call5_windows_pane

0xdeed,	// (0x00024b9f) call5_swipe_1_pane_cp_ParamLimits

0xdeed,	// (0x00024b9f) call5_swipe_1_pane_cp

0xdef9,	// (0x00024bab) call5_swipe_2_pane_cp_ParamLimits

0xdef9,	// (0x00024bab) call5_swipe_2_pane_cp

0x1796,	// (0x00018448) call5_image_pane_cp

0xdf05,	// (0x00024bb7) popup_call5_audio_first_window_cp_ParamLimits

0xdf05,	// (0x00024bb7) popup_call5_audio_first_window_cp

0x507e,	// (0x0001bd30) call5_swipe_1_pane_g1_cp_ParamLimits

0x507e,	// (0x0001bd30) call5_swipe_1_pane_g1_cp

0x50be,	// (0x0001bd70) call5_swipe_1_pane_g2_cp

0x5097,	// (0x0001bd49) call5_swipe_1_pane_t1_cp_ParamLimits

0x5097,	// (0x0001bd49) call5_swipe_1_pane_t1_cp

0x507e,	// (0x0001bd30) call5_swipe_2_pane_g1_cp_ParamLimits

0x507e,	// (0x0001bd30) call5_swipe_2_pane_g1_cp

0x50c6,	// (0x0001bd78) call5_swipe_2_pane_g2_cp

0x50ce,	// (0x0001bd80) call5_swipe_2_pane_t1_cp_ParamLimits

0x50ce,	// (0x0001bd80) call5_swipe_2_pane_t1_cp

0x0257,	// (0x00016f09) main_sp_fs_email_pane

0x50e3,	// (0x0001bd95) main_sp_fs_listscroll_pane_te

0x50ec,	// (0x0001bd9e) popup_sp_fs_action_menu_pane_ParamLimits

0x50ec,	// (0x0001bd9e) popup_sp_fs_action_menu_pane

0x313d,	// (0x00019def) bg_sp_fs_ctrlbar_pane_g1

0x512c,	// (0x0001bdde) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5135,	// (0x0001bde7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x513e,	// (0x0001bdf0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x313d,	// (0x00019def) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00026999) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2f20,	// (0x00019bd2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2f20,	// (0x00019bd2) bg_sp_fs_ctrlbar_ddmenu_pane

0x5147,	// (0x0001bdf9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5147,	// (0x0001bdf9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5153,	// (0x0001be05) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5153,	// (0x0001be05) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x000269a2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x000269a2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x515f,	// (0x0001be11) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x515f,	// (0x0001be11) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5179,	// (0x0001be2b) list_medium_line_t2_right_icon_g1

0xdf11,	// (0x00024bc3) list_medium_line_t2_right_icon_t1

0xdf21,	// (0x00024bd3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x000269a7) list_medium_line_t2_right_icon_t

0x2c35,	// (0x000198e7) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2c35,	// (0x000198e7) bg_sp_fs_ctrlbar_pane

0xdf86,	// (0x00024c38) main_sp_fs_ctrlbar_button_pane_cp01

0xdf8e,	// (0x00024c40) main_sp_fs_ctrlbar_ddmenu_pane

0x0d32,	// (0x000179e4) main_sp_fs_ctrlbar_pane_g1

0x51b9,	// (0x0001be6b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x000269ac) main_sp_fs_ctrlbar_pane_g

0x51c5,	// (0x0001be77) main_sp_fs_ctrlbar_pane_t1

0xdf98,	// (0x00024c4a) main_sp_fs_ctrlbar_pane

0xdfb4,	// (0x00024c66) main_sp_fs_listscroll_pane_te_cp01

0xdfc5,	// (0x00024c77) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdfc5,	// (0x00024c77) popup_sp_fs_action_menu_pane_cp01

0x0257,	// (0x00016f09) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0257,	// (0x00016f09) bg_sp_fs_highlight_list_pane_cp01

0x51da,	// (0x0001be8c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x51da,	// (0x0001be8c) sp_fs_action_menu_list_gene_pane_g1

0x51e9,	// (0x0001be9b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x51e9,	// (0x0001be9b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x000269b1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x000269b1) sp_fs_action_menu_list_gene_pane_g

0x51f6,	// (0x0001bea8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x51f6,	// (0x0001bea8) sp_fs_action_menu_list_gene_pane_t1

0x520e,	// (0x0001bec0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x520e,	// (0x0001bec0) sp_fs_action_menu_list_gene_pane

0x522b,	// (0x0001bedd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x522b,	// (0x0001bedd) popup_sp_fs_action_menu_bg_pane

0x5239,	// (0x0001beeb) sp_fs_action_menu_list_pane_ParamLimits

0x5239,	// (0x0001beeb) sp_fs_action_menu_list_pane

0x5257,	// (0x0001bf09) sp_fs_scroll_pane_cp01_ParamLimits

0x5257,	// (0x0001bf09) sp_fs_scroll_pane_cp01

0xdfdd,	// (0x00024c8f) list_medium_line_plain_t2_t1

0xdfed,	// (0x00024c9f) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x000269b6) list_medium_line_plain_t2_t

0xdffb,	// (0x00024cad) list_medium_line_plain_t3_t1

0xe00b,	// (0x00024cbd) list_medium_line_plain_t3_t2

0xe019,	// (0x00024ccb) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x000269bb) list_medium_line_plain_t3_t

0x0d32,	// (0x000179e4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t2_g2_g1

0x0d4a,	// (0x000179fc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00025f1c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00025f1c) list_medium_line_x2_t2_g2_g

0x12f4,	// (0x00017fa6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x12f4,	// (0x00017fa6) list_medium_line_x2_t2_g2_t1

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x000269c2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x000269c2) list_medium_line_x2_t2_g2_t

0x0d32,	// (0x000179e4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t4_g2_g1

0x0d4a,	// (0x000179fc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00025f1c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00025f1c) list_medium_line_x2_t4_g2_g

0xe027,	// (0x00024cd9) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe027,	// (0x00024cd9) list_medium_line_x2_t4_g2_t1

0xe041,	// (0x00024cf3) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe041,	// (0x00024cf3) list_medium_line_x2_t4_g2_t2

0xe056,	// (0x00024d08) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe056,	// (0x00024d08) list_medium_line_x2_t4_g2_t3

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x000269c7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x000269c7) list_medium_line_x2_t4_g2_t

0x527d,	// (0x0001bf2f) list_medium_line_t3_right_iconx2_g1

0x5179,	// (0x0001be2b) list_medium_line_t3_right_iconx2_g2

0xe06b,	// (0x00024d1d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x000269d0) list_medium_line_t3_right_iconx2_g

0xe073,	// (0x00024d25) list_medium_line_t3_right_iconx2_t1

0xe083,	// (0x00024d35) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x000269d7) list_medium_line_t3_right_iconx2_t

0x0d32,	// (0x000179e4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x3_t4_g4_g1

0x0d3e,	// (0x000179f0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x3_t4_g4_g2

0x0dd1,	// (0x00017a83) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0dd1,	// (0x00017a83) list_medium_line_x3_t4_g4_g3

0x5285,	// (0x0001bf37) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5285,	// (0x0001bf37) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x000269dc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x000269dc) list_medium_line_x3_t4_g4_g

0xe091,	// (0x00024d43) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe091,	// (0x00024d43) list_medium_line_x3_t4_g4_t1

0xe0a8,	// (0x00024d5a) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe0a8,	// (0x00024d5a) list_medium_line_x3_t4_g4_t2

0x1309,	// (0x00017fbb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1309,	// (0x00017fbb) list_medium_line_x3_t4_g4_t3

0x5291,	// (0x0001bf43) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5291,	// (0x0001bf43) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x000269e5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x000269e5) list_medium_line_x3_t4_g4_t

0xe0bd,	// (0x00024d6f) list_single_dyc_row_text_pane_t1_ParamLimits

0xe0bd,	// (0x00024d6f) list_single_dyc_row_text_pane_t1

0xe0f4,	// (0x00024da6) list_single_dyc_row_text_pane_t2_ParamLimits

0xe0f4,	// (0x00024da6) list_single_dyc_row_text_pane_t2

0x52ae,	// (0x0001bf60) list_single_dyc_row_text_pane_t3_ParamLimits

0x52ae,	// (0x0001bf60) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x000269ee) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x000269ee) list_single_dyc_row_text_pane_t

0x52c0,	// (0x0001bf72) list_single_dyc_row_pane_g1_ParamLimits

0x52c0,	// (0x0001bf72) list_single_dyc_row_pane_g1

0x52cc,	// (0x0001bf7e) list_single_dyc_row_pane_g2_ParamLimits

0x52cc,	// (0x0001bf7e) list_single_dyc_row_pane_g2

0x52d8,	// (0x0001bf8a) list_single_dyc_row_pane_g3_ParamLimits

0x52d8,	// (0x0001bf8a) list_single_dyc_row_pane_g3

0x52e4,	// (0x0001bf96) list_single_dyc_row_pane_g4_ParamLimits

0x52e4,	// (0x0001bf96) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x000269f5) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x000269f5) list_single_dyc_row_pane_g

0x52f0,	// (0x0001bfa2) list_single_dyc_row_text_pane_ParamLimits

0x52f0,	// (0x0001bfa2) list_single_dyc_row_text_pane

0x01e7,	// (0x00016e99) bg_sp_fs_scroll_pane

0x530f,	// (0x0001bfc1) thumb_sp_fs_scroll_pane

0x41a6,	// (0x0001ae58) list_medium_line_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_g1

0x5318,	// (0x0001bfca) list_medium_line_t1_ParamLimits

0x5318,	// (0x0001bfca) list_medium_line_t1

0x0d32,	// (0x000179e4) list_medium_line_x2_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_g1

0x0d3e,	// (0x000179f0) list_medium_line_x2_g2_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x000269fe) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x000269fe) list_medium_line_x2_g

0x532d,	// (0x0001bfdf) list_medium_line_x2_t1_ParamLimits

0x532d,	// (0x0001bfdf) list_medium_line_x2_t1

0x0d32,	// (0x000179e4) list_medium_line_x3_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x3_g1

0x0d3e,	// (0x000179f0) list_medium_line_x3_g2_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x000269fe) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x000269fe) list_medium_line_x3_g

0x532d,	// (0x0001bfdf) list_medium_line_x3_t1_ParamLimits

0x532d,	// (0x0001bfdf) list_medium_line_x3_t1

0x5343,	// (0x0001bff5) thumb_sp_fs_scroll_pane_g1

0x534c,	// (0x0001bffe) thumb_sp_fs_scroll_pane_g2

0x5355,	// (0x0001c007) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026a03) thumb_sp_fs_scroll_pane_g

0x5343,	// (0x0001bff5) bg_sp_fs_scroll_pane_g1

0x534c,	// (0x0001bffe) bg_sp_fs_scroll_pane_g2

0x5355,	// (0x0001c007) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026a03) bg_sp_fs_scroll_pane_g

0x0d32,	// (0x000179e4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d32,	// (0x000179e4) list_medium_line_x2_t3_g4_g1

0x0dc5,	// (0x00017a77) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0dc5,	// (0x00017a77) list_medium_line_x2_t3_g4_g2

0x0d3e,	// (0x000179f0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d3e,	// (0x000179f0) list_medium_line_x2_t3_g4_g3

0x0d4a,	// (0x000179fc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d4a,	// (0x000179fc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00025f98) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00025f98) list_medium_line_x2_t3_g4_g

0xe14e,	// (0x00024e00) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe14e,	// (0x00024e00) list_medium_line_x2_t3_g4_t1

0xe164,	// (0x00024e16) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe164,	// (0x00024e16) list_medium_line_x2_t3_g4_t2

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d6b,	// (0x00017a1d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00026a0a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00026a0a) list_medium_line_x2_t3_g4_t

0x41a6,	// (0x0001ae58) list_medium_line_g2_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_g2_g1

0x41b2,	// (0x0001ae64) list_medium_line_g2_g2_ParamLimits

0x41b2,	// (0x0001ae64) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000266d1) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000266d1) list_medium_line_g2_g

0x535e,	// (0x0001c010) list_medium_line_g2_t1_ParamLimits

0x535e,	// (0x0001c010) list_medium_line_g2_t1

0x41a6,	// (0x0001ae58) list_medium_line_t3_g2_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_t3_g2_g1

0x41b2,	// (0x0001ae64) list_medium_line_t3_g2_g2_ParamLimits

0x41b2,	// (0x0001ae64) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000266d1) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000266d1) list_medium_line_t3_g2_g

0xe17d,	// (0x00024e2f) list_medium_line_t3_g2_t1_ParamLimits

0xe17d,	// (0x00024e2f) list_medium_line_t3_g2_t1

0xe194,	// (0x00024e46) list_medium_line_t3_g2_t2_ParamLimits

0xe194,	// (0x00024e46) list_medium_line_t3_g2_t2

0xe1a9,	// (0x00024e5b) list_medium_line_t3_g2_t3_ParamLimits

0xe1a9,	// (0x00024e5b) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00026a11) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00026a11) list_medium_line_t3_g2_t

0x5179,	// (0x0001be2b) list_medium_line_right_icon_g1

0x5373,	// (0x0001c025) list_medium_line_right_icon_t1

0x41a6,	// (0x0001ae58) list_medium_line_t2_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_t2_g1

0xe1be,	// (0x00024e70) list_medium_line_t2_t1_ParamLimits

0xe1be,	// (0x00024e70) list_medium_line_t2_t1

0xe1d8,	// (0x00024e8a) list_medium_line_t2_t2_ParamLimits

0xe1d8,	// (0x00024e8a) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00026a18) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00026a18) list_medium_line_t2_t

0x41a6,	// (0x0001ae58) list_medium_line_t3_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_t3_g1

0xe1ed,	// (0x00024e9f) list_medium_line_t3_t1_ParamLimits

0xe1ed,	// (0x00024e9f) list_medium_line_t3_t1

0xe204,	// (0x00024eb6) list_medium_line_t3_t2_ParamLimits

0xe204,	// (0x00024eb6) list_medium_line_t3_t2

0xe219,	// (0x00024ecb) list_medium_line_t3_t3_ParamLimits

0xe219,	// (0x00024ecb) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00026a1d) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00026a1d) list_medium_line_t3_t

0x41a6,	// (0x0001ae58) list_medium_line_g3_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_g3_g1

0x5381,	// (0x0001c033) list_medium_line_g3_g2_ParamLimits

0x5381,	// (0x0001c033) list_medium_line_g3_g2

0x41b2,	// (0x0001ae64) list_medium_line_g3_g3_ParamLimits

0x41b2,	// (0x0001ae64) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00026a24) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00026a24) list_medium_line_g3_g

0x538d,	// (0x0001c03f) list_medium_line_g3_t1_ParamLimits

0x538d,	// (0x0001c03f) list_medium_line_g3_t1

0x41a6,	// (0x0001ae58) list_medium_line_t2_g3_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_t2_g3_g1

0x5381,	// (0x0001c033) list_medium_line_t2_g3_g2_ParamLimits

0x5381,	// (0x0001c033) list_medium_line_t2_g3_g2

0x41b2,	// (0x0001ae64) list_medium_line_t2_g3_g3_ParamLimits

0x41b2,	// (0x0001ae64) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00026a24) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00026a24) list_medium_line_t2_g3_g

0xe22b,	// (0x00024edd) list_medium_line_t2_g3_t1_ParamLimits

0xe22b,	// (0x00024edd) list_medium_line_t2_g3_t1

0xe242,	// (0x00024ef4) list_medium_line_t2_g3_t2_ParamLimits

0xe242,	// (0x00024ef4) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00026a2b) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00026a2b) list_medium_line_t2_g3_t

0x41a6,	// (0x0001ae58) list_medium_line_t3_g3_g1_ParamLimits

0x41a6,	// (0x0001ae58) list_medium_line_t3_g3_g1

0x5381,	// (0x0001c033) list_medium_line_t3_g3_g2_ParamLimits

0x5381,	// (0x0001c033) list_medium_line_t3_g3_g2

0x41b2,	// (0x0001ae64) list_medium_line_t3_g3_g3_ParamLimits

0x41b2,	// (0x0001ae64) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00026a24) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00026a24) list_medium_line_t3_g3_g

0xe257,	// (0x00024f09) list_medium_line_t3_g3_t1_ParamLimits

0xe257,	// (0x00024f09) list_medium_line_t3_g3_t1

0xe26b,	// (0x00024f1d) list_medium_line_t3_g3_t2_ParamLimits

0xe26b,	// (0x00024f1d) list_medium_line_t3_g3_t2

0xe27d,	// (0x00024f2f) list_medium_line_t3_g3_t3_ParamLimits

0xe27d,	// (0x00024f2f) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00026a30) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00026a30) list_medium_line_t3_g3_t

0x527d,	// (0x0001bf2f) list_medium_line_right_iconx2_g1

0x5179,	// (0x0001be2b) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00026a37) list_medium_line_right_iconx2_g

0x53a2,	// (0x0001c054) list_medium_line_right_iconx2_t1

0x527d,	// (0x0001bf2f) list_medium_line_t2_right_iconx2_g1

0x5179,	// (0x0001be2b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00026a37) list_medium_line_t2_right_iconx2_g

0xe28f,	// (0x00024f41) list_medium_line_t2_right_iconx2_t1

0xe29f,	// (0x00024f51) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00026a3c) list_medium_line_t2_right_iconx2_t

0x53b0,	// (0x0001c062) list_medium_line_x4_t4_t1

0xe2ad,	// (0x00024f5f) list_medium_line_x4_t4_t2

0xe2bd,	// (0x00024f6f) list_medium_line_x4_t4_t3

0xe2cd,	// (0x00024f7f) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00026a41) list_medium_line_x4_t4_t

0xe306,	// (0x00024fb8) tport_appsw_pane_ParamLimits

0xe306,	// (0x00024fb8) tport_appsw_pane

0xe312,	// (0x00024fc4) tport_contact_pane_ParamLimits

0xe312,	// (0x00024fc4) tport_contact_pane

0xe322,	// (0x00024fd4) tport_listscroll_pane_ParamLimits

0xe322,	// (0x00024fd4) tport_listscroll_pane

0xe332,	// (0x00024fe4) cell_tport_appsw_pane_ParamLimits

0xe332,	// (0x00024fe4) cell_tport_appsw_pane

0x3441,	// (0x0001a0f3) tport_appsw_pane_g1_ParamLimits

0x3441,	// (0x0001a0f3) tport_appsw_pane_g1

0x53be,	// (0x0001c070) tport_contact_pane_g1

0x53c7,	// (0x0001c079) tport_contact_pane_t1

0x53d5,	// (0x0001c087) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00026a4a) tport_contact_pane_t

0x53e3,	// (0x0001c095) list_tport_pane

0x53ec,	// (0x0001c09e) scroll_pane_cp_030

0x53fd,	// (0x0001c0af) cell_tport_appsw_pane_g1

0x540d,	// (0x0001c0bf) cell_tport_appsw_pane_t1

0x01e7,	// (0x00016e99) grid_highlight_pane_cp019

0xe35d,	// (0x0002500f) list_tport_double_graphic_pane_ParamLimits

0xe35d,	// (0x0002500f) list_tport_double_graphic_pane

0x0257,	// (0x00016f09) list_highlight_pane_cp023_ParamLimits

0x0257,	// (0x00016f09) list_highlight_pane_cp023

0xe370,	// (0x00025022) list_tport_double_graphic_pane_g1_ParamLimits

0xe370,	// (0x00025022) list_tport_double_graphic_pane_g1

0xe37d,	// (0x0002502f) list_tport_double_graphic_pane_t1_ParamLimits

0xe37d,	// (0x0002502f) list_tport_double_graphic_pane_t1

0xe392,	// (0x00025044) list_tport_double_graphic_pane_t2_ParamLimits

0xe392,	// (0x00025044) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00026a56) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00026a56) list_tport_double_graphic_pane_t

0x01e7,	// (0x00016e99) main_cale_note_pane

0x7c93,	// (0x0001e945) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7c93,	// (0x0001e945) cell_vitu2_function_top_wide_pane_cp01

0xda0c,	// (0x000246be) wait_bar_pane_cp05_ParamLimits

0x01e7,	// (0x00016e99) listscroll_cmail_pane

0x5423,	// (0x0001c0d5) list_cmail_pane

0xe3ae,	// (0x00025060) list_cmail_body_pane

0xe3d2,	// (0x00025084) list_single_cmail_header_caption_pane

0xe400,	// (0x000250b2) list_single_cmail_header_detail_pane_ParamLimits

0xe400,	// (0x000250b2) list_single_cmail_header_detail_pane

0xe438,	// (0x000250ea) list_single_cmail_header_caption_pane_t1

0xe448,	// (0x000250fa) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe448,	// (0x000250fa) list_single_cmail_header_detail_pane_g1

0x5443,	// (0x0001c0f5) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5443,	// (0x0001c0f5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00026a5b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00026a5b) list_single_cmail_header_detail_pane_g

0x545c,	// (0x0001c10e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x545c,	// (0x0001c10e) list_single_cmail_header_detail_pane_t1

0x548e,	// (0x0001c140) list_single_cmail_header_editor_pane_bg_ParamLimits

0x548e,	// (0x0001c140) list_single_cmail_header_editor_pane_bg

0x54a0,	// (0x0001c152) list_cmail_body_pane_g1

0x54a9,	// (0x0001c15b) list_cmail_body_pane_t1

0x3ef5,	// (0x0001aba7) list_single_cmail_header_editor_pane_bg_g1

0x0fe4,	// (0x00017c96) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3f05,	// (0x0001abb7) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3efd,	// (0x0001abaf) list_single_cmail_header_editor_pane_bg_g1_copy3

0x417e,	// (0x0001ae30) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3f25,	// (0x0001abd7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3f15,	// (0x0001abc7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3f1d,	// (0x0001abcf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0fc4,	// (0x00017c76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe486,	// (0x00025138) calenote_gesture_pane_ParamLimits

0xe486,	// (0x00025138) calenote_gesture_pane

0xe4a0,	// (0x00025152) calenote_window_pane_ParamLimits

0xe4a0,	// (0x00025152) calenote_window_pane

0x54b7,	// (0x0001c169) popup_note_window_cp01

0xe4b8,	// (0x0002516a) calenote_swipe_1_pane_ParamLimits

0xe4b8,	// (0x0002516a) calenote_swipe_1_pane

0xdef9,	// (0x00024bab) calenote_swipe_2_pane_ParamLimits

0xdef9,	// (0x00024bab) calenote_swipe_2_pane

0x507e,	// (0x0001bd30) calenote_swipe_1_pane_g1_ParamLimits

0x507e,	// (0x0001bd30) calenote_swipe_1_pane_g1

0x508b,	// (0x0001bd3d) calenote_swipe_1_pane_g2_ParamLimits

0x508b,	// (0x0001bd3d) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0002698f) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0002698f) calenote_swipe_1_pane_g

0x54c9,	// (0x0001c17b) calenote_swipe_1_pane_t1_ParamLimits

0x54c9,	// (0x0001c17b) calenote_swipe_1_pane_t1

0x507e,	// (0x0001bd30) calenote_swipe_2_pane_g1_ParamLimits

0x507e,	// (0x0001bd30) calenote_swipe_2_pane_g1

0x54e8,	// (0x0001c19a) calenote_swipe_2_pane_g2_ParamLimits

0x54e8,	// (0x0001c19a) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00026a67) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00026a67) calenote_swipe_2_pane_g

0x54f4,	// (0x0001c1a6) calenote_swipe_2_pane_t1_ParamLimits

0x54f4,	// (0x0001c1a6) calenote_swipe_2_pane_t1

0x01e7,	// (0x00016e99) main_mup_navstr_pane

0xbabc,	// (0x0002276e) main_mup3_pane_t7_ParamLimits

0xbabc,	// (0x0002276e) main_mup3_pane_t7

0x75aa,	// (0x0001e25c) main_mp4_pane_g6_ParamLimits

0x75aa,	// (0x0001e25c) main_mp4_pane_g6

0x789f,	// (0x0001e551) main_image3_pane_t4_ParamLimits

0x789f,	// (0x0001e551) main_image3_pane_t4

0xe4cb,	// (0x0002517d) popup_navstr_preview_pane_ParamLimits

0xe4cb,	// (0x0002517d) popup_navstr_preview_pane

0xe4d7,	// (0x00025189) scroll_navstr_pane_ParamLimits

0xe4d7,	// (0x00025189) scroll_navstr_pane

0x01e7,	// (0x00016e99) bg_popup_preview_window_pane_cp04

0x551b,	// (0x0001c1cd) popup_navstr_preview_pane_t1

0xe4e3,	// (0x00025195) scroll_navstr_pane_g1_ParamLimits

0xe4e3,	// (0x00025195) scroll_navstr_pane_g1

0xe4f0,	// (0x000251a2) scroll_navstr_pane_t1_ParamLimits

0xe4f0,	// (0x000251a2) scroll_navstr_pane_t1

0x54c0,	// (0x0001c172) bg_button_pane_cp014

0x54c0,	// (0x0001c172) bg_button_pane_cp030

0x501f,	// (0x0001bcd1) list_double_fisheye_pane_g4_ParamLimits

0x501f,	// (0x0001bcd1) list_double_fisheye_pane_g4

0x502b,	// (0x0001bcdd) list_double_fisheye_pane_g5_ParamLimits

0x502b,	// (0x0001bcdd) list_double_fisheye_pane_g5

0x542b,	// (0x0001c0dd) sp_fs_scroll_pane_cp03

0x0d32,	// (0x000179e4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x51b9,	// (0x0001be6b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x000269ac) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x51c5,	// (0x0001be77) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe3a4,	// (0x00025056) sp_fs_scroll_pane_cp02

0x0bb3,	// (0x00017865) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0bb3,	// (0x00017865) popup_sp_fs_calendar_preview_list_single_pane

0x01e7,	// (0x00016e99) main_cam6_pano_pane

0x0257,	// (0x00016f09) main_mup3_pane_ParamLimits

0x01e7,	// (0x00016e99) main_phacti_pane

0xd8e1,	// (0x00024593) bg_button_pane_cp11

0xd8f9,	// (0x000245ab) main_mobtv_info_pane_g2_ParamLimits

0xd8f9,	// (0x000245ab) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0002690c) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0002690c) main_mobtv_info_pane_g

0xdaab,	// (0x0002475d) sc_clock_pane_t5_ParamLimits

0xdaab,	// (0x0002475d) sc_clock_pane_t5

0xdc8d,	// (0x0002493f) main_radioblah_pane_g1_ParamLimits

0x4f8d,	// (0x0001bc3f) main_radioblah_pane_t3_ParamLimits

0x4f8d,	// (0x0001bc3f) main_radioblah_pane_t3

0x4fa5,	// (0x0001bc57) main_radioblah_pane_t4_ParamLimits

0x4fa5,	// (0x0001bc57) main_radioblah_pane_t4

0xdcab,	// (0x0002495d) main_radioblah_text_pane_ParamLimits

0xdcab,	// (0x0002495d) main_radioblah_text_pane

0xdcb8,	// (0x0002496a) main_radioblah_info_pane_g1_ParamLimits

0xdd4d,	// (0x000249ff) main_radioblah_info_pane_t4_ParamLimits

0xdd4d,	// (0x000249ff) main_radioblah_info_pane_t4

0x0257,	// (0x00016f09) main_sp_fs_calendar_pane

0xe502,	// (0x000251b4) main_phacti_pane_g1

0xe50a,	// (0x000251bc) phacti_note_pane_ParamLimits

0xe50a,	// (0x000251bc) phacti_note_pane

0x5532,	// (0x0001c1e4) phacti_term_pane_ParamLimits

0x5532,	// (0x0001c1e4) phacti_term_pane

0x5547,	// (0x0001c1f9) phacti_note_pane_t1_ParamLimits

0x5547,	// (0x0001c1f9) phacti_note_pane_t1

0x555e,	// (0x0001c210) phacti_term_pane_g1

0x5566,	// (0x0001c218) phacti_term_pane_t1_ParamLimits

0x5566,	// (0x0001c218) phacti_term_pane_t1

0x5590,	// (0x0001c242) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5598,	// (0x0001c24a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00026a71) popup_sp_fs_calendar_preview_list_single_pane_g

0x55a0,	// (0x0001c252) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x55a0,	// (0x0001c252) popup_sp_fs_calendar_preview_list_single_pane_t1

0x55b6,	// (0x0001c268) aid_popup_sp_fs_bg_corner_pane

0x313d,	// (0x00019def) popup_sp_fs_calendar_preview_bg_pane_g1

0x01e7,	// (0x00016e99) popup_sp_fs_calendar_preview_bg_pane

0x55be,	// (0x0001c270) popup_sp_fs_calendar_preview_list_pane

0x0257,	// (0x00016f09) bg_main_sp_fs_cale_pane_ParamLimits

0x0257,	// (0x00016f09) bg_main_sp_fs_cale_pane

0x55cf,	// (0x0001c281) listscroll_cale_mrui_pane_ParamLimits

0x55cf,	// (0x0001c281) listscroll_cale_mrui_pane

0x55e3,	// (0x0001c295) listscroll_sp_fs_schedule_track_pane

0x55ec,	// (0x0001c29e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x55ec,	// (0x0001c29e) main_sp_fs_ctrlbar_pane_cp01

0x55fd,	// (0x0001c2af) main_sp_fs_ribbon_pane

0x5605,	// (0x0001c2b7) popup_sp_fs_cale_preview_window

0xe54d,	// (0x000251ff) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe54d,	// (0x000251ff) list_single_sp_fs_schedule_track_pane

0x394b,	// (0x0001a5fd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x394b,	// (0x0001a5fd) bg_sp_fs_highlight_list_pane_cp03

0xe56f,	// (0x00025221) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe56f,	// (0x00025221) list_single_sp_fs_schedule_track_pane_g1

0xe57b,	// (0x0002522d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe57b,	// (0x0002522d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00026a76) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00026a76) list_single_sp_fs_schedule_track_pane_g

0xe587,	// (0x00025239) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe587,	// (0x00025239) list_single_sp_fs_schedule_track_pane_t1

0xe59f,	// (0x00025251) sp_fs_schedule_track_pane_ParamLimits

0xe59f,	// (0x00025251) sp_fs_schedule_track_pane

0x5617,	// (0x0001c2c9) sp_fs_schedule_track_pane_g1

0x561f,	// (0x0001c2d1) sp_fs_schedule_track_pane_g2

0x5627,	// (0x0001c2d9) sp_fs_schedule_track_pane_g3

0x562f,	// (0x0001c2e1) sp_fs_schedule_track_pane_g4

0x5637,	// (0x0001c2e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00026a7b) sp_fs_schedule_track_pane_g

0x3ef5,	// (0x0001aba7) bg_sp_fs_schedule_viewer_highlight_g1

0x0fe4,	// (0x00017c96) bg_sp_fs_schedule_viewer_highlight_g2

0x3efd,	// (0x0001abaf) bg_sp_fs_schedule_viewer_highlight_g3

0x3f05,	// (0x0001abb7) bg_sp_fs_schedule_viewer_highlight_g4

0x417e,	// (0x0001ae30) bg_sp_fs_schedule_viewer_highlight_g5

0x3f15,	// (0x0001abc7) bg_sp_fs_schedule_viewer_highlight_g6

0x3f1d,	// (0x0001abcf) bg_sp_fs_schedule_viewer_highlight_g7

0x3f25,	// (0x0001abd7) bg_sp_fs_schedule_viewer_highlight_g8

0x0fc4,	// (0x00017c76) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00026a86) bg_sp_fs_schedule_viewer_highlight_g

0x01e7,	// (0x00016e99) bg_main_sp_fs_ribbon_pane

0xe5af,	// (0x00025261) main_sp_fs_ribbon_pane_g1

0x563f,	// (0x0001c2f1) main_sp_fs_ribbon_pane_t1

0xe5b8,	// (0x0002526a) main_sp_fs_ribbon_pane_t2

0x564e,	// (0x0001c300) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00026a99) main_sp_fs_ribbon_pane_t

0x565d,	// (0x0001c30f) main_sp_fs_ribbon_scheduler_pane

0x5665,	// (0x0001c317) bg_main_sp_fs_ribbon_pane_g1

0x566e,	// (0x0001c320) bg_main_sp_fs_ribbon_pane_g2

0x5677,	// (0x0001c329) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00026aa0) bg_main_sp_fs_ribbon_pane_g

0x567f,	// (0x0001c331) main_sp_fs_ribbon_scheduler_pane_g1

0x5688,	// (0x0001c33a) main_sp_fs_ribbon_scheduler_pane_g2

0x5691,	// (0x0001c343) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00026aa7) main_sp_fs_ribbon_scheduler_pane_g

0x569a,	// (0x0001c34c) list_cale_mrui_pane

0xe5c7,	// (0x00025279) sp_fs_scroll_pane_cp07_ParamLimits

0xe5c7,	// (0x00025279) sp_fs_scroll_pane_cp07

0xe5dd,	// (0x0002528f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe5dd,	// (0x0002528f) bg_sp_fs_schedule_viewer_highlight

0x56a3,	// (0x0001c355) list_single_sp_fs_schedule_track_pane_cp01

0x56ab,	// (0x0001c35d) list_sp_fs_schedule_track_pane

0x56b3,	// (0x0001c365) sp_fs_scroll_pane_cp06_ParamLimits

0x56b3,	// (0x0001c365) sp_fs_scroll_pane_cp06

0x313d,	// (0x00019def) bgmain_sp_fs_calendar_pane_g1

0xe5ea,	// (0x0002529c) list_single_cale_mrui_pane_ParamLimits

0xe5ea,	// (0x0002529c) list_single_cale_mrui_pane

0x56c5,	// (0x0001c377) list_single_cale_mrui_row_pane_ParamLimits

0x56c5,	// (0x0001c377) list_single_cale_mrui_row_pane

0x56d2,	// (0x0001c384) list_single_cale_mrui_row_pane_g1_ParamLimits

0x56d2,	// (0x0001c384) list_single_cale_mrui_row_pane_g1

0x570a,	// (0x0001c3bc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x570a,	// (0x0001c3bc) list_single_cale_mrui_row_pane_t1

0xe619,	// (0x000252cb) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe619,	// (0x000252cb) list_single_cale_mrui_row_pane_t2

0x571c,	// (0x0001c3ce) list_single_cale_mrui_row_pane_t3_ParamLimits

0x571c,	// (0x0001c3ce) list_single_cale_mrui_row_pane_t3

0x574b,	// (0x0001c3fd) list_single_cale_mrui_row_pane_t4_ParamLimits

0x574b,	// (0x0001c3fd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00026ab3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00026ab3) list_single_cale_mrui_row_pane_t

0xe67f,	// (0x00025331) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe67f,	// (0x00025331) list_single_cmail_header_editor_pane_bg_cp01

0xe6a1,	// (0x00025353) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe6a1,	// (0x00025353) list_single_cmail_header_editor_pane_bg_cp02

0xe6bd,	// (0x0002536f) main_radioblah_text_pane_t1_ParamLimits

0xe6bd,	// (0x0002536f) main_radioblah_text_pane_t1

0x577a,	// (0x0001c42c) cam6_indi_pane_cp01

0x5782,	// (0x0001c434) cam6_mode_pane_cp01

0x578a,	// (0x0001c43c) cam6_pano_pane

0x5793,	// (0x0001c445) cam6_zoom_pane_cp01

0x579b,	// (0x0001c44d) cam6_pano_image_pane

0x57a6,	// (0x0001c458) cam6_pano_pane_g1

0x4e27,	// (0x0001bad9) cam6_pano_pane_g2

0x57af,	// (0x0001c461) cam6_pano_pane_g3

0x57b8,	// (0x0001c46a) cam6_pano_pane_g4

0x36fb,	// (0x0001a3ad) cam6_pano_pane_g5

0x57c1,	// (0x0001c473) cam6_pano_pane_g6

0x57cb,	// (0x0001c47d) cam6_pano_pane_g7

0x57d3,	// (0x0001c485) cam6_pano_pane_g8

0x57dc,	// (0x0001c48e) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00026abc) cam6_pano_pane_g

0x01e7,	// (0x00016e99) main_browser_tag_pane

0x5513,	// (0x0001c1c5) grid_navstr_albumart_pane

0x57e7,	// (0x0001c499) cell_navstr_albumart_pane_ParamLimits

0x57e7,	// (0x0001c499) cell_navstr_albumart_pane

0x1917,	// (0x000185c9) cell_navstr_albumart_pane_g1

0x2a4a,	// (0x000196fc) cell_navstr_albumart_pane_g2

0x2a5a,	// (0x0001970c) cell_navstr_albumart_pane_g3

0x2a52,	// (0x00019704) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00026acf) cell_navstr_albumart_pane_g

0xe6da,	// (0x0002538c) bt_list_pane_ParamLimits

0xe6da,	// (0x0002538c) bt_list_pane

0xe701,	// (0x000253b3) bt_list_pane_t1

0xe710,	// (0x000253c2) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00026ad8) bt_list_pane_t

0x01e7,	// (0x00016e99) main_cale_prevew_pane

0xe71f,	// (0x000253d1) popup_cale_preview_window_ParamLimits

0xe71f,	// (0x000253d1) popup_cale_preview_window

0x0257,	// (0x00016f09) bg_popup_preview_window_pane_cp05_ParamLimits

0x0257,	// (0x00016f09) bg_popup_preview_window_pane_cp05

0x5809,	// (0x0001c4bb) list_cale_preview_pane_ParamLimits

0x5809,	// (0x0001c4bb) list_cale_preview_pane

0xe736,	// (0x000253e8) list_double_cale_preview_pane_ParamLimits

0xe736,	// (0x000253e8) list_double_cale_preview_pane

0xe748,	// (0x000253fa) list_single_cale_preview_pane_ParamLimits

0xe748,	// (0x000253fa) list_single_cale_preview_pane

0xe75c,	// (0x0002540e) list_single_cale_preview_pane_g1

0xe764,	// (0x00025416) list_single_cale_preview_pane_t1_ParamLimits

0xe764,	// (0x00025416) list_single_cale_preview_pane_t1

0xe779,	// (0x0002542b) list_double_cale_preview_pane_g1

0xe781,	// (0x00025433) list_double_cale_preview_pane_t1_ParamLimits

0xe781,	// (0x00025433) list_double_cale_preview_pane_t1

0xe796,	// (0x00025448) list_double_cale_preview_pane_t2_ParamLimits

0xe796,	// (0x00025448) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00026add) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00026add) list_double_cale_preview_pane_t

0x01e7,	// (0x00016e99) main_ezdial_pane

0x0257,	// (0x00016f09) main_sp_fs_email_pane_ParamLimits

0xdf2f,	// (0x00024be1) cmail_ddmenu_btn01_pane_ParamLimits

0xdf2f,	// (0x00024be1) cmail_ddmenu_btn01_pane

0xdf4c,	// (0x00024bfe) cmail_ddmenu_btn02_pane_ParamLimits

0xdf4c,	// (0x00024bfe) cmail_ddmenu_btn02_pane

0xdf6a,	// (0x00024c1c) cmail_ddmenu_btn03_pane_ParamLimits

0xdf6a,	// (0x00024c1c) cmail_ddmenu_btn03_pane

0xdf98,	// (0x00024c4a) main_sp_fs_ctrlbar_pane_ParamLimits

0xdfb4,	// (0x00024c66) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe3ae,	// (0x00025060) list_cmail_body_pane_ParamLimits

0x543a,	// (0x0001c0ec) bg_button_pane_cp12

0x544f,	// (0x0001c101) list_single_cmail_header_detail_pane_g3_ParamLimits

0x544f,	// (0x0001c101) list_single_cmail_header_detail_pane_g3

0xe460,	// (0x00025112) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe460,	// (0x00025112) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00026a62) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00026a62) list_single_cmail_header_detail_pane_t

0x557b,	// (0x0001c22d) phacti_term_pane_t2_ParamLimits

0x557b,	// (0x0001c22d) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00026a6c) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00026a6c) phacti_term_pane_t

0x5815,	// (0x0001c4c7) aid_size_list_single_double

0xe7ae,	// (0x00025460) popup_ezdial_listscroll_window

0xe7cf,	// (0x00025481) popup_number_entry_window_cp01

0x1796,	// (0x00018448) bg_popup_call_pane_cp09

0x5821,	// (0x0001c4d3) ezdial_list_pane

0x5829,	// (0x0001c4db) scroll_pane_cp23

0x2f20,	// (0x00019bd2) bg_button_pane_cp028_ParamLimits

0x2f20,	// (0x00019bd2) bg_button_pane_cp028

0xe7dd,	// (0x0002548f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe7dd,	// (0x0002548f) cmail_ddmenu_btn01_pane_g1

0xe7ef,	// (0x000254a1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe7ef,	// (0x000254a1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00026ae2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00026ae2) cmail_ddmenu_btn01_pane_g

0x5831,	// (0x0001c4e3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5831,	// (0x0001c4e3) cmail_ddmenu_btn01_pane_t1

0x2c35,	// (0x000198e7) bg_button_pane_cp029_ParamLimits

0x2c35,	// (0x000198e7) bg_button_pane_cp029

0xe7ef,	// (0x000254a1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe7ef,	// (0x000254a1) cmail_ddmenu_btn02_pane_g1

0xe807,	// (0x000254b9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe807,	// (0x000254b9) cmail_ddmenu_btn02_pane_t1

0x394b,	// (0x0001a5fd) bg_button_pane_cp031_ParamLimits

0x394b,	// (0x0001a5fd) bg_button_pane_cp031

0xe7ef,	// (0x000254a1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe7ef,	// (0x000254a1) cmail_ddmenu_btn03_pane_g1

0xe807,	// (0x000254b9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe807,	// (0x000254b9) cmail_ddmenu_btn03_pane_t1

0xc326,	// (0x00022fd8) cell_dialer2_keypad_pane_t1_ParamLimits

0xc340,	// (0x00022ff2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc340,	// (0x00022ff2) cell_dialer2_keypad_pane_t1_copy1

0xd781,	// (0x00024433) ncimui_group_button_pane

0x0257,	// (0x00016f09) main_sp_fs_calendar_pane_ParamLimits

0xe3d2,	// (0x00025084) list_single_cmail_header_caption_pane_ParamLimits

0x55c6,	// (0x0001c278) aid_recal_txt_sm_pane

0x01e7,	// (0x00016e99) mian_recal_day_pane

0x5605,	// (0x0001c2b7) popup_sp_fs_cale_preview_window_ParamLimits

0x01e7,	// (0x00016e99) list_recal_day_pane

0x5868,	// (0x0001c51a) list_single_recal_day_pane_ParamLimits

0x5868,	// (0x0001c51a) list_single_recal_day_pane

0x587a,	// (0x0001c52c) list_single_recal_day_pane_g1_ParamLimits

0x587a,	// (0x0001c52c) list_single_recal_day_pane_g1

0x5886,	// (0x0001c538) list_single_recal_day_pane_g2_ParamLimits

0x5886,	// (0x0001c538) list_single_recal_day_pane_g2

0x5895,	// (0x0001c547) list_single_recal_day_pane_g3_ParamLimits

0x5895,	// (0x0001c547) list_single_recal_day_pane_g3

0xe82b,	// (0x000254dd) list_single_recal_day_pane_g4_ParamLimits

0xe82b,	// (0x000254dd) list_single_recal_day_pane_g4

0x58a1,	// (0x0001c553) list_single_recal_day_pane_g5_ParamLimits

0x58a1,	// (0x0001c553) list_single_recal_day_pane_g5

0x58b9,	// (0x0001c56b) list_single_recal_day_pane_g6_ParamLimits

0x58b9,	// (0x0001c56b) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00026af1) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00026af1) list_single_recal_day_pane_g

0x58c5,	// (0x0001c577) list_single_recal_day_pane_t1

0x58d3,	// (0x0001c585) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00026afe) list_single_recal_day_pane_t

0xe83e,	// (0x000254f0) ncimui_query_button_pane_ParamLimits

0xe83e,	// (0x000254f0) ncimui_query_button_pane

0xe84e,	// (0x00025500) ncimui_query_button_pane_t1_ParamLimits

0xe84e,	// (0x00025500) ncimui_query_button_pane_t1

0x58e1,	// (0x0001c593) ncimui_query_button_pane_t2_ParamLimits

0x58e1,	// (0x0001c593) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00026b03) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00026b03) ncimui_query_button_pane_t

0xe861,	// (0x00025513) query_button_pane_ParamLimits

0xe861,	// (0x00025513) query_button_pane

0x01e7,	// (0x00016e99) bg_button_pane_cp0028

0x58f4,	// (0x0001c5a6) query_button_pane_t1

0xadea,	// (0x00021a9c) main_tport_pane_ParamLimits

0xe2dd,	// (0x00024f8f) bg_popup_window_pane_cp01_ParamLimits

0xe2dd,	// (0x00024f8f) bg_popup_window_pane_cp01

0xe2ea,	// (0x00024f9c) heading_pane_cp08_ParamLimits

0xe2ea,	// (0x00024f9c) heading_pane_cp08

0xe2f8,	// (0x00024faa) heading_pane_cp07_ParamLimits

0xe2f8,	// (0x00024faa) heading_pane_cp07

0x53fd,	// (0x0001c0af) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00026a4f) cell_tport_appsw_pane_g

0xa580,	// (0x00021232) input_candi_list_open_g1

0x11d7,	// (0x00017e89) list_cale_time_pane_g6_ParamLimits

0x11d7,	// (0x00017e89) list_cale_time_pane_g6

0xb53b,	// (0x000221ed) aid_size_touch_calib_1_ParamLimits

0xb53b,	// (0x000221ed) aid_size_touch_calib_1

0xb547,	// (0x000221f9) aid_size_touch_calib_2_ParamLimits

0xb547,	// (0x000221f9) aid_size_touch_calib_2

0xb555,	// (0x00022207) aid_size_touch_calib_3_ParamLimits

0xb555,	// (0x00022207) aid_size_touch_calib_3

0xb565,	// (0x00022217) aid_size_touch_calib_4_ParamLimits

0xb565,	// (0x00022217) aid_size_touch_calib_4

0xb573,	// (0x00022225) main_touch_calib_button_group_pane_ParamLimits

0xb573,	// (0x00022225) main_touch_calib_button_group_pane

0xb581,	// (0x00022233) main_touch_calib_pane_g1_ParamLimits

0xb58d,	// (0x0002223f) main_touch_calib_pane_g2_ParamLimits

0xb599,	// (0x0002224b) main_touch_calib_pane_g3_ParamLimits

0xb5a5,	// (0x00022257) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00026427) main_touch_calib_pane_g_ParamLimits

0xb5b1,	// (0x00022263) main_touch_calib_pane_t1_ParamLimits

0xb5c8,	// (0x0002227a) main_touch_calib_pane_t2_ParamLimits

0xb5df,	// (0x00022291) main_touch_calib_pane_t3_ParamLimits

0xb5f3,	// (0x000222a5) main_touch_calib_pane_t4_ParamLimits

0xb607,	// (0x000222b9) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00026430) main_touch_calib_pane_t_ParamLimits

0x34e2,	// (0x0001a194) list_single_fp_cale_pane_g3_ParamLimits

0x34e2,	// (0x0001a194) list_single_fp_cale_pane_g3

0x7a9c,	// (0x0001e74e) bg_button_pane_cp012_ParamLimits

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp03_ParamLimits

0x7e99,	// (0x0001eb4b) cell_vitu2_function_top_pane_g1_ParamLimits

0x7a9c,	// (0x0001e74e) bg_vkb2_func_pane_cp04_ParamLimits

0xd71f,	// (0x000243d1) main_ncimui_button_group_pane_ParamLimits

0xd71f,	// (0x000243d1) main_ncimui_button_group_pane

0xd76f,	// (0x00024421) main_ncimui_pane_t3_ParamLimits

0xd76f,	// (0x00024421) main_ncimui_pane_t3

0x5529,	// (0x0001c1db) phacti_button_group_pane

0x5815,	// (0x0001c4c7) aid_size_list_single_double_ParamLimits

0xe7ae,	// (0x00025460) popup_ezdial_listscroll_window_ParamLimits

0xe7cf,	// (0x00025481) popup_number_entry_window_cp01_ParamLimits

0xe86e,	// (0x00025520) phacti_button_pane_ParamLimits

0xe86e,	// (0x00025520) phacti_button_pane

0x01e7,	// (0x00016e99) bg_button_pane_cp14

0x5902,	// (0x0001c5b4) phacti_button_pane_t1

0xe87f,	// (0x00025531) main_touch_calib_button_pane_ParamLimits

0xe87f,	// (0x00025531) main_touch_calib_button_pane

0x0a02,	// (0x000176b4) bg_button_pane_cp18_ParamLimits

0x0a02,	// (0x000176b4) bg_button_pane_cp18

0x5910,	// (0x0001c5c2) main_touch_calib_button_pane_t1_ParamLimits

0x5910,	// (0x0001c5c2) main_touch_calib_button_pane_t1

0x5926,	// (0x0001c5d8) main_touch_calib_button_pane_t2_ParamLimits

0x5926,	// (0x0001c5d8) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00026b08) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00026b08) main_touch_calib_button_pane_t

0x01e7,	// (0x00016e99) cell_ncimui_button_pane

0x01e7,	// (0x00016e99) bg_button_pane_cp032

0x5944,	// (0x0001c5f6) cell_ncimui_button_pane_t1

0x77b2,	// (0x0001e464) image3_infobar_pane_ParamLimits

0x77b2,	// (0x0001e464) image3_infobar_pane

0xdacd,	// (0x0002477f) fs_bigclock_status_pane_ParamLimits

0xdacd,	// (0x0002477f) fs_bigclock_status_pane

0xdada,	// (0x0002478c) main_fs_bigclock_clock_pane_ParamLimits

0xdada,	// (0x0002478c) main_fs_bigclock_clock_pane

0xdafe,	// (0x000247b0) main_fs_bigclock_indi_pane_ParamLimits

0xdafe,	// (0x000247b0) main_fs_bigclock_indi_pane

0xdb31,	// (0x000247e3) main_fs_bigclock_swipe_pane_ParamLimits

0xdb31,	// (0x000247e3) main_fs_bigclock_swipe_pane

0x01e7,	// (0x00016e99) main_fs_clock_dumped_data

0xdb63,	// (0x00024815) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb63,	// (0x00024815) list_single_fs_bigclock_indicator_pane_g1

0xdb87,	// (0x00024839) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb87,	// (0x00024839) list_single_fs_bigclock_indicator_pane_g2

0xdba1,	// (0x00024853) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdba1,	// (0x00024853) list_single_fs_bigclock_indicator_pane_g3

0xdbbb,	// (0x0002486d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbbb,	// (0x0002486d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00026940) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00026940) list_single_fs_bigclock_indicator_pane_g

0xdbe1,	// (0x00024893) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbe1,	// (0x00024893) list_single_fs_bigclock_indicator_pane_t1

0xdc09,	// (0x000248bb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc09,	// (0x000248bb) list_single_fs_bigclock_indicator_pane_t2

0xdc31,	// (0x000248e3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc31,	// (0x000248e3) list_single_fs_bigclock_indicator_pane_t3

0xdc59,	// (0x0002490b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc59,	// (0x0002490b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0002694b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0002694b) list_single_fs_bigclock_indicator_pane_t

0x5952,	// (0x0001c604) image3_infobar_fav_pane_ParamLimits

0x5952,	// (0x0001c604) image3_infobar_fav_pane

0x5962,	// (0x0001c614) image3_infobar_loc_pane_ParamLimits

0x5962,	// (0x0001c614) image3_infobar_loc_pane

0x5976,	// (0x0001c628) image3_infobar_time_pane_ParamLimits

0x5976,	// (0x0001c628) image3_infobar_time_pane

0x313d,	// (0x00019def) image3_infobar_time_pane_g1

0x5986,	// (0x0001c638) image3_infobar_time_pane_t1

0x313d,	// (0x00019def) image3_infobar_loc_pane_g1

0x5994,	// (0x0001c646) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00026b0d) image3_infobar_loc_pane_g

0x599c,	// (0x0001c64e) image3_infobar_loc_pane_t1

0x313d,	// (0x00019def) image3_infobar_fav_pane_g1

0x59aa,	// (0x0001c65c) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00026b12) image3_infobar_fav_pane_g

0x59b2,	// (0x0001c664) fs_bigclock_status_battery_pane

0x59bb,	// (0x0001c66d) fs_bigclock_status_signal_pane

0x59c4,	// (0x0001c676) fs_bigclock_status_title_pane

0x59cd,	// (0x0001c67f) fs_bigclock_status_signal_pane_g1

0x59d6,	// (0x0001c688) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00026b17) fs_bigclock_status_signal_pane_g

0x59de,	// (0x0001c690) fs_bigclock_status_battery_pane_g1

0x59e7,	// (0x0001c699) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00026b1c) fs_bigclock_status_battery_pane_g

0x59ef,	// (0x0001c6a1) fs_bigclock_status_title_pane_t1

0x313d,	// (0x00019def) main_fs_bigclock_clock_pane_g1

0x59fd,	// (0x0001c6af) main_fs_bigclock_clock_pane_g2

0x59fd,	// (0x0001c6af) main_fs_bigclock_clock_pane_g3

0x59fd,	// (0x0001c6af) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00026b21) main_fs_bigclock_clock_pane_g

0xe88f,	// (0x00025541) main_fs_bigclock_clock_pane_t1

0xe89d,	// (0x0002554f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00026b2a) main_fs_bigclock_clock_pane_t

0x5a05,	// (0x0001c6b7) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5a05,	// (0x0001c6b7) list_single_fs_bigclock_indicator_pane

0xe8ac,	// (0x0002555e) list_single_fs_bigclock_pane_ParamLimits

0xe8ac,	// (0x0002555e) list_single_fs_bigclock_pane

0x5a1f,	// (0x0001c6d1) main_fs_bigclock_indicator_pane_t1

0x5a2e,	// (0x0001c6e0) list_single_fs_bigclock_pane_g1

0x5a36,	// (0x0001c6e8) list_single_fs_bigclock_pane_t1

0x313d,	// (0x00019def) main_fs_bigclock_swipe_pane_g1

0x5a76,	// (0x0001c728) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00026b3b) main_fs_bigclock_swipe_pane_g

0x5a7e,	// (0x0001c730) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5a7e,	// (0x0001c730) main_fs_bigclock_swipe_pane_t1

0x9dd0,	// (0x00020a82) call_type_pane_ParamLimits

0x01e7,	// (0x00016e99) main_btmg_pane

0x56fe,	// (0x0001c3b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x56fe,	// (0x0001c3b0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00026aae) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00026aae) list_single_cale_mrui_row_pane_g

0x584f,	// (0x0001c501) list_recal_vselct_arw_lo_pane

0x5857,	// (0x0001c509) list_recal_vselct_arw_up_pane

0x585f,	// (0x0001c511) list_recal_vselct_pane

0x5a9b,	// (0x0001c74d) btmg_button_pane

0xe910,	// (0x000255c2) main_btmg_pane_g1

0x01e7,	// (0x00016e99) bg_button_pane_cp044

0x5aa5,	// (0x0001c757) btmg_button_pane_t1

0x2c2d,	// (0x000198df) aid_listscroll_gen

0x0257,	// (0x00016f09) main_cntbar_detail_pane

0x541b,	// (0x0001c0cd) list_cmail_folder_pane

0x542b,	// (0x0001c0dd) sp_fs_scroll_pane_cp03_ParamLimits

0xe3d2,	// (0x00025084) list_single_fs_dyc_pane_cp01_ParamLimits

0xe3d2,	// (0x00025084) list_single_fs_dyc_pane_cp01

0x5ab3,	// (0x0001c765) aid_size_cmail_indent

0x5abc,	// (0x0001c76e) list_single_dyc_row_pane_cp01

0xe938,	// (0x000255ea) cntbar_detail_list_pane_ParamLimits

0xe938,	// (0x000255ea) cntbar_detail_list_pane

0xe972,	// (0x00025624) main_cntbar_detail_cont_pane_ParamLimits

0xe972,	// (0x00025624) main_cntbar_detail_cont_pane

0x9d6a,	// (0x00020a1c) scroll_pane_cp032_ParamLimits

0x9d6a,	// (0x00020a1c) scroll_pane_cp032

0xe97e,	// (0x00025630) cntbar_detail_list_event_pane_ParamLimits

0xe97e,	// (0x00025630) cntbar_detail_list_event_pane

0xe944,	// (0x000255f6) cntbar_detail_list_shct_pane

0x1032,	// (0x00017ce4) aid_list_gen

0x5ac5,	// (0x0001c777) aid_scroll

0x5ace,	// (0x0001c780) aid_size_touch_scroll_bar

0x58b0,	// (0x0001c562) aid_list_double

0x5ad7,	// (0x0001c789) aid_list_single

0x5ae0,	// (0x0001c792) aid_list_single_lg

0x5ae9,	// (0x0001c79b) aid_list_z_g_a_sm

0x5af1,	// (0x0001c7a3) aid_list_z_g_d

0x5af9,	// (0x0001c7ab) aid_txt_z_prm

0xe992,	// (0x00025644) aid_txt_z_prm_cp01

0xe9a0,	// (0x00025652) aid_txt_z_sec

0xe9ae,	// (0x00025660) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe9ae,	// (0x00025660) main_cntbar_detail_cont_pane_g1

0xe9bb,	// (0x0002566d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe9bb,	// (0x0002566d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00026b40) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00026b40) main_cntbar_detail_cont_pane_g

0x5b07,	// (0x0001c7b9) main_cntbar_detail_cont_pane_t1

0x5b15,	// (0x0001c7c7) main_cntbar_detail_cont_pane_t2

0x5b23,	// (0x0001c7d5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00026b45) main_cntbar_detail_cont_pane_t

0xe9c7,	// (0x00025679) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe9c7,	// (0x00025679) cell_cntbar_detail_list_shct_pane

0x5b31,	// (0x0001c7e3) cntbar_detail_list_shct_pane_g1

0x5b3a,	// (0x0001c7ec) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00026b4c) cntbar_detail_list_shct_pane_g

0xe9db,	// (0x0002568d) cntbar_detail_list_event_pane_g1_ParamLimits

0xe9db,	// (0x0002568d) cntbar_detail_list_event_pane_g1

0xe9e7,	// (0x00025699) cntbar_detail_list_event_pane_g2_ParamLimits

0xe9e7,	// (0x00025699) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00026b51) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00026b51) cntbar_detail_list_event_pane_g

0xea53,	// (0x00025705) cntbar_detail_list_event_pane_t1_ParamLimits

0xea53,	// (0x00025705) cntbar_detail_list_event_pane_t1

0xea68,	// (0x0002571a) cntbar_detail_list_event_pane_t2_ParamLimits

0xea68,	// (0x0002571a) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00026b5e) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00026b5e) cntbar_detail_list_event_pane_t

0x313d,	// (0x00019def) cell_cntbar_detail_list_shct_pane_g1

0xa0e4,	// (0x00020d96) navi_pane_mv_g3

0x0257,	// (0x00016f09) main_cntbar_detail_pane_ParamLimits

0x01e7,	// (0x00016e99) main_notif_wgt_pane

0x74f1,	// (0x0001e1a3) aid_tch_main_mp4_pane_g4

0x7726,	// (0x0001e3d8) popup_slider_window_cp02

0x5846,	// (0x0001c4f8) list_recal_day_event_pane

0xe918,	// (0x000255ca) cntbar_detail_btn_pane_ParamLimits

0xe918,	// (0x000255ca) cntbar_detail_btn_pane

0xe928,	// (0x000255da) cntbar_detail_btn_pane_cp01_ParamLimits

0xe928,	// (0x000255da) cntbar_detail_btn_pane_cp01

0xe944,	// (0x000255f6) cntbar_detail_list_shct_pane_ParamLimits

0xe950,	// (0x00025602) cntbar_detail_pane_g1_ParamLimits

0xe950,	// (0x00025602) cntbar_detail_pane_g1

0xe95c,	// (0x0002560e) cntbar_detail_pane_t1_ParamLimits

0xe95c,	// (0x0002560e) cntbar_detail_pane_t1

0xe9f3,	// (0x000256a5) cntbar_detail_list_event_pane_g3_ParamLimits

0xe9f3,	// (0x000256a5) cntbar_detail_list_event_pane_g3

0xea0b,	// (0x000256bd) cntbar_detail_list_event_pane_g4_ParamLimits

0xea0b,	// (0x000256bd) cntbar_detail_list_event_pane_g4

0xea23,	// (0x000256d5) cntbar_detail_list_event_pane_g5_ParamLimits

0xea23,	// (0x000256d5) cntbar_detail_list_event_pane_g5

0xea3b,	// (0x000256ed) cntbar_detail_list_event_pane_g6_ParamLimits

0xea3b,	// (0x000256ed) cntbar_detail_list_event_pane_g6

0xea7d,	// (0x0002572f) cntbar_detail_list_event_pane_t3_ParamLimits

0xea7d,	// (0x0002572f) cntbar_detail_list_event_pane_t3

0xea8f,	// (0x00025741) popup_notif_wgt_window_ParamLimits

0xea8f,	// (0x00025741) popup_notif_wgt_window

0xea9f,	// (0x00025751) popup_submenu_window_cp01_ParamLimits

0xea9f,	// (0x00025751) popup_submenu_window_cp01

0x1796,	// (0x00018448) bg_popup_window_pane_cp10

0x5b43,	// (0x0001c7f5) listscroll_notif_wgt_pane

0x5b4d,	// (0x0001c7ff) list_notif_wgt_window

0x5b56,	// (0x0001c808) scroll_pane_cp033

0x5b5f,	// (0x0001c811) list_notif_wgt_row_pane_ParamLimits

0x5b5f,	// (0x0001c811) list_notif_wgt_row_pane

0x5b73,	// (0x0001c825) aid_size_list_notif_wgt_del

0x5b7c,	// (0x0001c82e) list_notif_wgt_row_pane_g1

0x5b84,	// (0x0001c836) list_notif_wgt_row_pane_g2

0x5b8c,	// (0x0001c83e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00026b65) list_notif_wgt_row_pane_g

0x5b95,	// (0x0001c847) list_notif_wgt_row_pane_t1

0x5ba3,	// (0x0001c855) list_notif_wgt_row_pane_t2

0x5bb1,	// (0x0001c863) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00026b6c) list_notif_wgt_row_pane_t

0x41be,	// (0x0001ae70) list_recal_day_event_pane_g1

0x5bbf,	// (0x0001c871) list_recal_day_event_pane_t1

0x01e7,	// (0x00016e99) bg_button_pane_cp045

0x5bce,	// (0x0001c880) cntbar_detail_btn_pane_t1

0x2c35,	// (0x000198e7) main_callh_pane_ParamLimits

0x2c35,	// (0x000198e7) main_callh_pane

0x01e7,	// (0x00016e99) main_coverflow0_pane

0x01e7,	// (0x00016e99) main_wgtman_pane

0xdb49,	// (0x000247fb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdb49,	// (0x000247fb) main_fs_bigclock_unlock_btn_pane

0x53f5,	// (0x0001c0a7) bg_button_pane_cp16

0x5405,	// (0x0001c0b7) cell_tport_appsw_pane_g3

0xeaad,	// (0x0002575f) cf0_flow_pane_ParamLimits

0xeaad,	// (0x0002575f) cf0_flow_pane

0x5bdc,	// (0x0001c88e) listscroll_cf0_pane

0x5be5,	// (0x0001c897) main_cf0_pane_g1

0xeabc,	// (0x0002576e) main_cf0_pane_t1_ParamLimits

0xeabc,	// (0x0002576e) main_cf0_pane_t1

0xead0,	// (0x00025782) main_cf0_pane_t2_ParamLimits

0xead0,	// (0x00025782) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00026b73) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00026b73) main_cf0_pane_t

0x5bef,	// (0x0001c8a1) scroll_pane_cp11

0xeae4,	// (0x00025796) cf0_flow_pane_g1

0xeaec,	// (0x0002579e) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00026b78) cf0_flow_pane_g

0xeaf4,	// (0x000257a6) cf0_flow_pane_t1

0x01e7,	// (0x00016e99) main_call6_pane

0x01e7,	// (0x00016e99) main_calllock_pane

0xeb02,	// (0x000257b4) call6_btn_grp_pane_ParamLimits

0xeb02,	// (0x000257b4) call6_btn_grp_pane

0xeb11,	// (0x000257c3) call6_pane_g1_ParamLimits

0xeb11,	// (0x000257c3) call6_pane_g1

0xeb20,	// (0x000257d2) popup_call6_1st_window_ParamLimits

0xeb20,	// (0x000257d2) popup_call6_1st_window

0xeb2e,	// (0x000257e0) popup_call6_2nd_window_ParamLimits

0xeb2e,	// (0x000257e0) popup_call6_2nd_window

0xeb3c,	// (0x000257ee) cell_call6_btn_pane_ParamLimits

0xeb3c,	// (0x000257ee) cell_call6_btn_pane

0x1796,	// (0x00018448) bg_popup_call2_in_pane_cp03

0x5bfa,	// (0x0001c8ac) popup_call6_1st_window_g1

0x5c02,	// (0x0001c8b4) popup_call6_1st_window_g2

0x5c0a,	// (0x0001c8bc) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00026b7d) popup_call6_1st_window_g

0x5c12,	// (0x0001c8c4) popup_call6_1st_window_t1

0x5c21,	// (0x0001c8d3) popup_call6_1st_window_t2

0x5c31,	// (0x0001c8e3) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00026b84) popup_call6_1st_window_t

0x1796,	// (0x00018448) bg_popup_call2_in_pane_cp04

0x5bfa,	// (0x0001c8ac) popup_call6_2nd_window_g1

0x5c02,	// (0x0001c8b4) popup_call6_2nd_window_g2

0x5c0a,	// (0x0001c8bc) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00026b7d) popup_call6_2nd_window_g

0x5c12,	// (0x0001c8c4) popup_call6_2nd_window_t1

0x01e7,	// (0x00016e99) bg_button_pane_cp15

0x5c41,	// (0x0001c8f3) cell_call6_btn_pane_g1

0x5c4a,	// (0x0001c8fc) cell_call6_btn_pane_t1

0xeb4b,	// (0x000257fd) listscroll_wgtman_pane_ParamLimits

0xeb4b,	// (0x000257fd) listscroll_wgtman_pane

0xeb69,	// (0x0002581b) wgtman_btn_pane_ParamLimits

0xeb69,	// (0x0002581b) wgtman_btn_pane

0x1649,	// (0x000182fb) aid_scroll_copy1

0x5c59,	// (0x0001c90b) list_wgtman_pane

0xeb9e,	// (0x00025850) wgtman_btn_pane_g1_ParamLimits

0xeb9e,	// (0x00025850) wgtman_btn_pane_g1

0xebc6,	// (0x00025878) wgtman_btn_pane_t1_ParamLimits

0xebc6,	// (0x00025878) wgtman_btn_pane_t1

0x5c63,	// (0x0001c915) wgtman_btn_pane_t2_ParamLimits

0x5c63,	// (0x0001c915) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00026b8b) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00026b8b) wgtman_btn_pane_t

0xebfd,	// (0x000258af) listrow_wgtman_pane_ParamLimits

0xebfd,	// (0x000258af) listrow_wgtman_pane

0xec19,	// (0x000258cb) listrow_wgtman_pane_g1

0xec22,	// (0x000258d4) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00026b90) listrow_wgtman_pane_g

0xec2c,	// (0x000258de) listrow_wgtman_pane_t1

0xec3a,	// (0x000258ec) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00026b95) listrow_wgtman_pane_t

0xec48,	// (0x000258fa) wait_bar_pane_cp09

0x5c7a,	// (0x0001c92c) main_calllock_btn_pane

0x5c84,	// (0x0001c936) main_calllock_pane_g1

0x01e7,	// (0x00016e99) bg_button_pane_cp17

0x5c8f,	// (0x0001c941) main_calllock_btn_pane_g1

0x5c98,	// (0x0001c94a) main_calllock_btn_pane_t1

0x01e7,	// (0x00016e99) main_dialer3_pane

0x01e7,	// (0x00016e99) main_fmrd2_pane

0x313d,	// (0x00019def) main_fs_bigclock_unlock_btn_pane_g1

0x5caf,	// (0x0001c961) main_fs_bigclock_unlock_btn_pane_t1

0xec50,	// (0x00025902) area_fmrd2_info_pane_ParamLimits

0xec50,	// (0x00025902) area_fmrd2_info_pane

0xec5e,	// (0x00025910) area_fmrd2_visual_pane_ParamLimits

0xec5e,	// (0x00025910) area_fmrd2_visual_pane

0xec6c,	// (0x0002591e) fmrd2_indi_pane_ParamLimits

0xec6c,	// (0x0002591e) fmrd2_indi_pane

0xec79,	// (0x0002592b) area_fmrd2_visual_pane_g1

0xec81,	// (0x00025933) area_fmrd2_visual_pane_t1

0xec91,	// (0x00025943) area_fmrd2_visual_pane_t2

0xeca1,	// (0x00025953) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00026b9f) area_fmrd2_visual_pane_t

0xecb1,	// (0x00025963) area_fmrd2_info_pane_g1

0xecb9,	// (0x0002596b) area_fmrd2_info_pane_t1

0xecc9,	// (0x0002597b) area_fmrd2_info_pane_t2

0xecd9,	// (0x0002598b) area_fmrd2_info_pane_t3

0xece9,	// (0x0002599b) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00026ba6) area_fmrd2_info_pane_t

0xecf7,	// (0x000259a9) fmrd2_indi_pane_t1

0xed07,	// (0x000259b9) fmrd2_indi_pane_t2

0xed17,	// (0x000259c9) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00026baf) fmrd2_indi_pane_t

0xdbca,	// (0x0002487c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbca,	// (0x0002487c) list_single_fs_bigclock_indicator_pane_g5

0xdc6e,	// (0x00024920) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc6e,	// (0x00024920) list_single_fs_bigclock_indicator_pane_t5

0xe520,	// (0x000251d2) aid_cell_bcale_month_pane_ParamLimits

0xe520,	// (0x000251d2) aid_cell_bcale_month_pane

0xe52c,	// (0x000251de) bcale_month_pane_ParamLimits

0xe52c,	// (0x000251de) bcale_month_pane

0xe53c,	// (0x000251ee) bcale_preview_pane_ParamLimits

0xe53c,	// (0x000251ee) bcale_preview_pane

0x5a36,	// (0x0001c6e8) list_single_fs_bigclock_pane_t1_ParamLimits

0x5a52,	// (0x0001c704) list_single_fs_bigclock_pane_t2_ParamLimits

0x5a52,	// (0x0001c704) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00026b36) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00026b36) list_single_fs_bigclock_pane_t

0x5ca7,	// (0x0001c959) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00026b9a) main_fs_bigclock_unlock_btn_pane_g

0xed25,	// (0x000259d7) aid_dia3_key_size_ParamLimits

0xed25,	// (0x000259d7) aid_dia3_key_size

0xed31,	// (0x000259e3) aid_dia3_listrow_size_ParamLimits

0xed31,	// (0x000259e3) aid_dia3_listrow_size

0xed41,	// (0x000259f3) dia3_keypad_fun_pane_ParamLimits

0xed41,	// (0x000259f3) dia3_keypad_fun_pane

0xed53,	// (0x00025a05) dia3_keypad_num_pane_ParamLimits

0xed53,	// (0x00025a05) dia3_keypad_num_pane

0xed65,	// (0x00025a17) dia3_listscroll_pane_ParamLimits

0xed65,	// (0x00025a17) dia3_listscroll_pane

0xed73,	// (0x00025a25) dia3_numentry_pane_ParamLimits

0xed73,	// (0x00025a25) dia3_numentry_pane

0x5cbd,	// (0x0001c96f) dia3_list_pane

0x5cc8,	// (0x0001c97a) scroll_pane_cp12

0x01e7,	// (0x00016e99) bg_dia3_numentry_pane

0xed81,	// (0x00025a33) dia3_numentry_pane_t1

0xed90,	// (0x00025a42) cell_dia3_key_num_pane

0xed98,	// (0x00025a4a) cell_dia3_key0_fun_pane_ParamLimits

0xed98,	// (0x00025a4a) cell_dia3_key0_fun_pane

0xeda5,	// (0x00025a57) cell_dia3_key1_fun_pane_ParamLimits

0xeda5,	// (0x00025a57) cell_dia3_key1_fun_pane

0xedb2,	// (0x00025a64) dia3_listrow_pane

0x4c93,	// (0x0001b945) bg_dia3_numentry_pane_g1

0x01e7,	// (0x00016e99) bg_button_pane_cp21

0x5cdc,	// (0x0001c98e) cell_dia3_key_num_pane_t1

0x5cea,	// (0x0001c99c) cell_dia3_key_num_pane_t2

0x5cf9,	// (0x0001c9ab) cell_dia3_key_num_pane_t3

0x5d08,	// (0x0001c9ba) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00026bb6) cell_dia3_key_num_pane_t

0x01e7,	// (0x00016e99) bg_button_pane_cp19

0xedbf,	// (0x00025a71) cell_dia3_key0_fun_pane_g1

0x01e7,	// (0x00016e99) bg_button_pane_cp20

0xedc7,	// (0x00025a79) cell_dia3_key1_fun_pane_g1

0xedcf,	// (0x00025a81) area_left_week_number_pane

0xedd8,	// (0x00025a8a) area_top_day_name_pane

0xede1,	// (0x00025a93) frame_month_view_pane

0xedeb,	// (0x00025a9d) grid_month_view_pane

0xedf5,	// (0x00025aa7) cell_top_day_name_pane_ParamLimits

0xedf5,	// (0x00025aa7) cell_top_day_name_pane

0xee0f,	// (0x00025ac1) cell_area_left_week_number_pane_ParamLimits

0xee0f,	// (0x00025ac1) cell_area_left_week_number_pane

0xee23,	// (0x00025ad5) cell_month_view_pane_ParamLimits

0xee23,	// (0x00025ad5) cell_month_view_pane

0x5d17,	// (0x0001c9c9) frm_month_g1

0xee40,	// (0x00025af2) frm_month_g2

0xee4a,	// (0x00025afc) frm_month_g3

0xee54,	// (0x00025b06) frm_month_g4

0xee5e,	// (0x00025b10) frm_month_g5

0xee68,	// (0x00025b1a) frm_month_g6

0xee72,	// (0x00025b24) frm_month_g7

0x5d20,	// (0x0001c9d2) frm_month_g8

0xee7c,	// (0x00025b2e) frm_month_g9

0xee85,	// (0x00025b37) frm_month_g10

0xee8e,	// (0x00025b40) frm_month_g11

0xee97,	// (0x00025b49) frm_month_g12

0xeea0,	// (0x00025b52) frm_month_g13

0xeea9,	// (0x00025b5b) frm_month_g14

0xeeb2,	// (0x00025b64) frm_month_g15

0xeebd,	// (0x00025b6f) frm_month_g16

0x000f,

0xff0d,	// (0x00026bbf) frm_month_g

0xeec8,	// (0x00025b7a) cell_top_day_name_pane_t1

0xeed7,	// (0x00025b89) cell_area_left_week_number_pane_g1

0xeec8,	// (0x00025b7a) cell_area_left_week_number_pane_t1

0x313d,	// (0x00019def) cell_month_view_pane_g1

0xeedf,	// (0x00025b91) cell_month_view_pane_t1

0x01e7,	// (0x00016e99) main_fps_pane

0x5181,	// (0x0001be33) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5181,	// (0x0001be33) cmail_ddmenu_btn02_pane_cp1

0x519d,	// (0x0001be4f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x519d,	// (0x0001be4f) cmail_ddmenu_btn02_pane_cp2

0xe7fb,	// (0x000254ad) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe7fb,	// (0x000254ad) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00026ae7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00026ae7) cmail_ddmenu_btn02_pane_g

0xe819,	// (0x000254cb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe819,	// (0x000254cb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00026aec) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00026aec) cmail_ddmenu_btn02_pane_t

0xeeee,	// (0x00025ba0) fps_text_pane_ParamLimits

0xeeee,	// (0x00025ba0) fps_text_pane

0xeefb,	// (0x00025bad) main_fps_pane_g1_ParamLimits

0xeefb,	// (0x00025bad) main_fps_pane_g1

0xef09,	// (0x00025bbb) wait_bar_pane_cp010_ParamLimits

0xef09,	// (0x00025bbb) wait_bar_pane_cp010

0xef15,	// (0x00025bc7) fps_text_pane_t1_ParamLimits

0xef15,	// (0x00025bc7) fps_text_pane_t1

0xc439,	// (0x000230eb) cam4_image_uncrop_pane_g1

0xc442,	// (0x000230f4) cam4_image_uncrop_pane_g2

0xc44b,	// (0x000230fd) cam4_image_uncrop_pane_g3

0xc454,	// (0x00023106) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x000265bf) cam4_image_uncrop_pane_g

0xedb2,	// (0x00025a64) dia3_listrow_pane_ParamLimits

0x01e7,	// (0x00016e99) main_phob2_pane

0xe33f,	// (0x00024ff1) cell_tport_appsw_pane_cp02_ParamLimits

0xe33f,	// (0x00024ff1) cell_tport_appsw_pane_cp02

0xe34e,	// (0x00025000) cell_tport_appsw_pane_cp03_ParamLimits

0xe34e,	// (0x00025000) cell_tport_appsw_pane_cp03

0x01e7,	// (0x00016e99) phob2_contact_card_pane

0x01e7,	// (0x00016e99) phob2_listscroll_pane

0x5d29,	// (0x0001c9db) phob2_list_pane

0x5d31,	// (0x0001c9e3) scroll_pane_cp034

0xef2e,	// (0x00025be0) phob2_cc_data_pane_ParamLimits

0xef2e,	// (0x00025be0) phob2_cc_data_pane

0xef48,	// (0x00025bfa) phob2_cc_listscroll_pane_ParamLimits

0xef48,	// (0x00025bfa) phob2_cc_listscroll_pane

0xef62,	// (0x00025c14) list_double_large_graphic_phob2_pane_ParamLimits

0xef62,	// (0x00025c14) list_double_large_graphic_phob2_pane

0xef85,	// (0x00025c37) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef85,	// (0x00025c37) list_double_large_graphic_phob2_pane_g1

0xef92,	// (0x00025c44) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef92,	// (0x00025c44) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00026be0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00026be0) list_double_large_graphic_phob2_pane_g

0xef9e,	// (0x00025c50) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef9e,	// (0x00025c50) list_double_large_graphic_phob2_pane_t1

0xefb3,	// (0x00025c65) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xefb3,	// (0x00025c65) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00026be5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00026be5) list_double_large_graphic_phob2_pane_t

0x01e7,	// (0x00016e99) list_highlight_pane_cp024

0x5d39,	// (0x0001c9eb) phob2_cc_button_pane

0xefc5,	// (0x00025c77) phob2_cc_data_pane_g1_ParamLimits

0xefc5,	// (0x00025c77) phob2_cc_data_pane_g1

0xefd1,	// (0x00025c83) phob2_cc_data_pane_g2_ParamLimits

0xefd1,	// (0x00025c83) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00026bea) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00026bea) phob2_cc_data_pane_g

0xefdd,	// (0x00025c8f) phob2_cc_data_pane_t1_ParamLimits

0xefdd,	// (0x00025c8f) phob2_cc_data_pane_t1

0xefef,	// (0x00025ca1) phob2_cc_data_pane_t2_ParamLimits

0xefef,	// (0x00025ca1) phob2_cc_data_pane_t2

0xf001,	// (0x00025cb3) phob2_cc_data_pane_t3_ParamLimits

0xf001,	// (0x00025cb3) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00026bef) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00026bef) phob2_cc_data_pane_t

0x5d41,	// (0x0001c9f3) phob2_cc_list_pane_ParamLimits

0x5d41,	// (0x0001c9f3) phob2_cc_list_pane

0x4269,	// (0x0001af1b) scroll_pane_cp035_ParamLimits

0x4269,	// (0x0001af1b) scroll_pane_cp035

0x0257,	// (0x00016f09) bg_button_pane_cp033

0x5d4d,	// (0x0001c9ff) phob2_cc_button_pane_g1

0x5d59,	// (0x0001ca0b) phob2_cc_button_pane_t1

0x5d6e,	// (0x0001ca20) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00026bf6) phob2_cc_button_pane_t

0xf013,	// (0x00025cc5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf013,	// (0x00025cc5) list_double_large_graphic_phob2_cc_pane

0xf043,	// (0x00025cf5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf043,	// (0x00025cf5) list_double_large_graphic_phob2_cc_pane_g1

0xf054,	// (0x00025d06) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf054,	// (0x00025d06) list_double_large_graphic_phob2_cc_pane_g2

0xf063,	// (0x00025d15) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf063,	// (0x00025d15) list_double_large_graphic_phob2_cc_pane_g3

0xf072,	// (0x00025d24) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf072,	// (0x00025d24) list_double_large_graphic_phob2_cc_pane_g4

0xf083,	// (0x00025d35) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf083,	// (0x00025d35) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00026bfb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00026bfb) list_double_large_graphic_phob2_cc_pane_g

0xf092,	// (0x00025d44) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf092,	// (0x00025d44) list_double_large_graphic_phob2_cc_pane_t1

0xf0bb,	// (0x00025d6d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0bb,	// (0x00025d6d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00026c06) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00026c06) list_double_large_graphic_phob2_cc_pane_t

0x5d80,	// (0x0001ca32) list_highlight_pane_cp025_ParamLimits

0x5d80,	// (0x0001ca32) list_highlight_pane_cp025

0x0257,	// (0x00016f09) bg_button_pane_cp033_ParamLimits

0x5d4d,	// (0x0001c9ff) phob2_cc_button_pane_g1_ParamLimits

0x5d59,	// (0x0001ca0b) phob2_cc_button_pane_t1_ParamLimits

0x5d6e,	// (0x0001ca20) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00026bf6) phob2_cc_button_pane_t_ParamLimits

0x80e2,	// (0x0001ed94) popup_wgtman_window

0x400f,	// (0x0001acc1) scroll_pane_cp038

0xeb86,	// (0x00025838) wgtman_btn_pane_cp_01_ParamLimits

0xeb86,	// (0x00025838) wgtman_btn_pane_cp_01

0x5d8e,	// (0x0001ca40) wgtman_content_pane

0x5cd3,	// (0x0001c985) wgtman_heading_pane

0x01e7,	// (0x00016e99) bg_heading_pane_cp02

0x5d97,	// (0x0001ca49) wgtman_heading_pane_g1

0x5db1,	// (0x0001ca63) wgtman_heading_pane_t1

0x5dbf,	// (0x0001ca71) scroll_pane_cp036

0x5dc7,	// (0x0001ca79) wgtman_list_pane

0x5dcf,	// (0x0001ca81) wgtman_list_pane_t1_ParamLimits

0x5dcf,	// (0x0001ca81) wgtman_list_pane_t1

0x790e,	// (0x0001e5c0) cam4_grid_pane

0xcba8,	// (0x0002385a) bg_button_pane_cp015_ParamLimits

0xcbba,	// (0x0002386c) bg_button_pane_cp016_ParamLimits

0xcbcd,	// (0x0002387f) bg_button_pane_cp017_ParamLimits

0xcc23,	// (0x000238d5) popup_vitu2_query_window_g3_ParamLimits

0xcc23,	// (0x000238d5) popup_vitu2_query_window_g3

0xccde,	// (0x00023990) popup_vitu2_query_window_t6_ParamLimits

0xccde,	// (0x00023990) popup_vitu2_query_window_t6

0xcd09,	// (0x000239bb) popup_vitu2_query_window_t7_ParamLimits

0xcd09,	// (0x000239bb) popup_vitu2_query_window_t7

0x5d9f,	// (0x0001ca51) cam4_grid_pane_g1

0x5da8,	// (0x0001ca5a) cam4_grid_pane_g2

0x5df1,	// (0x0001caa3) cam4_grid_pane_g3

0x5dfa,	// (0x0001caac) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00026c0b) cam4_grid_pane_g

0x8d15,	// (0x0001f9c7) aid_placing_vt_slider_lsc_ParamLimits

0x9055,	// (0x0001fd07) vidtel_button_pane_ParamLimits

0x9055,	// (0x0001fd07) vidtel_button_pane

0x01e7,	// (0x00016e99) bg_button_pane_cp034

0xf0e4,	// (0x00025d96) vidtel_button_pane_g1

0x5e05,	// (0x0001cab7) vidtel_button_pane_t1

0x414c,	// (0x0001adfe) aid_size_vtel_slider_touch

0x4269,	// (0x0001af1b) scroll_pane_cp039

0x4cd1,	// (0x0001b983) ncim_query_button_pane_cp01_ParamLimits

0x4cf0,	// (0x0001b9a2) ncimui_query_pane_g1_ParamLimits

0x0257,	// (0x00016f09) input_focus_pane_cp012_ParamLimits

0x4d15,	// (0x0001b9c7) ncim_query_entry_pane_t1_ParamLimits

0x4269,	// (0x0001af1b) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
