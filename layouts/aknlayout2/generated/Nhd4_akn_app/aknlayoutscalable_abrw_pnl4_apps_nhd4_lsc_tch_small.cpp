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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006c4bb };

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
0x00c1,	// (0x0006c57c) Screen

0x00cd,	// (0x0006c588) application_window

0x0119,	// (0x0006c5d4) area_bottom_pane_ParamLimits

0x0119,	// (0x0006c5d4) area_bottom_pane

0x0152,	// (0x0006c60d) area_top_pane_ParamLimits

0x0152,	// (0x0006c60d) area_top_pane

0x907d,	// (0x00075538) call_video_uplink_pane_ParamLimits

0x907d,	// (0x00075538) call_video_uplink_pane

0x01e0,	// (0x0006c69b) main_pane_ParamLimits

0x01e0,	// (0x0006c69b) main_pane

0xc7b3,	// (0x00078c6e) context_pane

0x36e7,	// (0x0006fba2) navi_pane

0x3719,	// (0x0006fbd4) popup_cale_events_window_ParamLimits

0x3719,	// (0x0006fbd4) popup_cale_events_window

0xc7c6,	// (0x00078c81) popup_mup_playback_window

0x3731,	// (0x0006fbec) signal_pane

0x9f60,	// (0x0007641b) main_browser_pane

0xa903,	// (0x00076dbe) main_burst_pane

0x3445,	// (0x0006f900) main_calc_pane

0xc799,	// (0x00078c54) main_cale_day_pane

0x3459,	// (0x0006f914) main_cale_month_pane

0xc799,	// (0x00078c54) main_cale_week_pane

0xa903,	// (0x00076dbe) main_call_pane

0x9c21,	// (0x000760dc) main_call_poc_pane

0xa903,	// (0x00076dbe) main_camera_pane

0xa903,	// (0x00076dbe) main_chi_dic_pane

0xb10a,	// (0x000775c5) main_clock_pane

0x9c21,	// (0x000760dc) main_fmradio_pane

0xa903,	// (0x00076dbe) main_graph_messa_pane

0x9c21,	// (0x000760dc) main_help_pane

0x9f60,	// (0x0007641b) main_im_pane

0x9e7c,	// (0x00076337) main_image_pane_ParamLimits

0x9e7c,	// (0x00076337) main_image_pane

0x9c21,	// (0x000760dc) main_location2_pane

0xa903,	// (0x00076dbe) main_location_pane

0x9e7c,	// (0x00076337) main_messa_pane

0x9c21,	// (0x000760dc) main_mp2_pane

0xa903,	// (0x00076dbe) main_mp_pane

0x9c21,	// (0x000760dc) main_msg_pane

0x9c21,	// (0x000760dc) main_mup_eq_pane

0x9c21,	// (0x000760dc) main_mup_pane

0x9f60,	// (0x0007641b) main_notes_pane

0x9c21,	// (0x000760dc) main_pec_pane

0x9c21,	// (0x000760dc) main_phob_pane

0x9c21,	// (0x000760dc) main_pinb_pane

0x9c21,	// (0x000760dc) main_postcard_pane

0x9c21,	// (0x000760dc) main_qdial_pane

0xa903,	// (0x00076dbe) main_skin_pane

0x9c21,	// (0x000760dc) main_smil2_pane

0xa903,	// (0x00076dbe) main_smil_pane

0xa903,	// (0x00076dbe) main_video_pane

0xa903,	// (0x00076dbe) main_video_tele_pane

0x9e7c,	// (0x00076337) main_viewer_pane_ParamLimits

0x9e7c,	// (0x00076337) main_viewer_pane

0xa903,	// (0x00076dbe) main_vorec_pane

0x34ab,	// (0x0006f966) popup_blid_sat_info_window_ParamLimits

0x34ab,	// (0x0006f966) popup_blid_sat_info_window

0x3503,	// (0x0006f9be) popup_dyc_status_message_window_ParamLimits

0x3503,	// (0x0006f9be) popup_dyc_status_message_window

0x351b,	// (0x0006f9d6) popup_grid_large_graphic_window_ParamLimits

0x351b,	// (0x0006f9d6) popup_grid_large_graphic_window

0x35d1,	// (0x0006fa8c) popup_loc_request_window_ParamLimits

0x35d1,	// (0x0006fa8c) popup_loc_request_window

0x36bf,	// (0x0006fb7a) popup_wml_address_window_ParamLimits

0x36bf,	// (0x0006fb7a) popup_wml_address_window

0x327f,	// (0x0006f73a) call_muted_g1

0x2f32,	// (0x0006f3ed) popup_call_audio_conf_window_ParamLimits

0x2f32,	// (0x0006f3ed) popup_call_audio_conf_window

0x3293,	// (0x0006f74e) popup_call_audio_first_window_ParamLimits

0x3293,	// (0x0006f74e) popup_call_audio_first_window

0x3309,	// (0x0006f7c4) popup_call_audio_in_window_ParamLimits

0x3309,	// (0x0006f7c4) popup_call_audio_in_window

0x3345,	// (0x0006f800) popup_call_audio_out_window_ParamLimits

0x3345,	// (0x0006f800) popup_call_audio_out_window

0x337f,	// (0x0006f83a) popup_call_audio_second_window_ParamLimits

0x337f,	// (0x0006f83a) popup_call_audio_second_window

0x33d5,	// (0x0006f890) popup_call_audio_wait_window_ParamLimits

0x33d5,	// (0x0006f890) popup_call_audio_wait_window

0x340a,	// (0x0006f8c5) popup_number_entry_window_ParamLimits

0x340a,	// (0x0006f8c5) popup_number_entry_window

0x90b3,	// (0x0007556e) bg_popup_call_pane_cp05_ParamLimits

0x90b3,	// (0x0007556e) bg_popup_call_pane_cp05

0x90d3,	// (0x0007558e) popup_number_entry_window_t1

0x90e6,	// (0x000755a1) popup_number_entry_window_t2

0x90f8,	// (0x000755b3) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007b585) popup_number_entry_window_t

0x910a,	// (0x000755c5) text_title_cp2

0x911d,	// (0x000755d8) bg_popup_call_pane_cp_ParamLimits

0x911d,	// (0x000755d8) bg_popup_call_pane_cp

0x912b,	// (0x000755e6) call_thumbnail_pane

0x9133,	// (0x000755ee) popup_call_audio_in_window_g1_ParamLimits

0x9133,	// (0x000755ee) popup_call_audio_in_window_g1

0x913f,	// (0x000755fa) popup_call_audio_in_window_g2_ParamLimits

0x913f,	// (0x000755fa) popup_call_audio_in_window_g2

0x914b,	// (0x00075606) popup_call_audio_in_window_g3_ParamLimits

0x914b,	// (0x00075606) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007b58e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007b58e) popup_call_audio_in_window_g

0x9157,	// (0x00075612) popup_call_audio_in_window_t1_ParamLimits

0x9157,	// (0x00075612) popup_call_audio_in_window_t1

0x9173,	// (0x0007562e) popup_call_audio_in_window_t2_ParamLimits

0x9173,	// (0x0007562e) popup_call_audio_in_window_t2

0x918f,	// (0x0007564a) popup_call_audio_in_window_t3_ParamLimits

0x918f,	// (0x0007564a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007b595) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007b595) popup_call_audio_in_window_t

0x911d,	// (0x000755d8) bg_popup_call_pane_cp01_ParamLimits

0x911d,	// (0x000755d8) bg_popup_call_pane_cp01

0x912b,	// (0x000755e6) call_thumbnail_pane_cp02

0x91a2,	// (0x0007565d) call_type_pane_cp022

0x91aa,	// (0x00075665) popup_call_audio_out_window_g1_ParamLimits

0x91aa,	// (0x00075665) popup_call_audio_out_window_g1

0x91bc,	// (0x00075677) popup_call_audio_out_window_g2_ParamLimits

0x91bc,	// (0x00075677) popup_call_audio_out_window_g2

0x91c8,	// (0x00075683) popup_call_audio_out_window_g3_ParamLimits

0x91c8,	// (0x00075683) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007b59c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007b59c) popup_call_audio_out_window_g

0x91da,	// (0x00075695) popup_call_audio_out_window_t1_ParamLimits

0x91da,	// (0x00075695) popup_call_audio_out_window_t1

0x91f2,	// (0x000756ad) popup_call_audio_out_window_t2_ParamLimits

0x91f2,	// (0x000756ad) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007b5a3) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007b5a3) popup_call_audio_out_window_t

0x9207,	// (0x000756c2) bg_popup_call_pane_ParamLimits

0x9207,	// (0x000756c2) bg_popup_call_pane

0x039d,	// (0x0006c858) call_thumbnail_pane_cp_ParamLimits

0x039d,	// (0x0006c858) call_thumbnail_pane_cp

0x928b,	// (0x00075746) call_type_pane_cp01_ParamLimits

0x928b,	// (0x00075746) call_type_pane_cp01

0x92cf,	// (0x0007578a) popup_call_audio_first_window_g1_ParamLimits

0x92cf,	// (0x0007578a) popup_call_audio_first_window_g1

0x931b,	// (0x000757d6) popup_call_audio_first_window_g2_ParamLimits

0x931b,	// (0x000757d6) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007b5a8) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007b5a8) popup_call_audio_first_window_g

0x935f,	// (0x0007581a) popup_call_audio_first_window_t1_ParamLimits

0x935f,	// (0x0007581a) popup_call_audio_first_window_t1

0x940b,	// (0x000758c6) popup_call_audio_first_window_t4_ParamLimits

0x940b,	// (0x000758c6) popup_call_audio_first_window_t4

0x9497,	// (0x00075952) popup_call_audio_first_window_t5_ParamLimits

0x9497,	// (0x00075952) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007b5ad) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007b5ad) popup_call_audio_first_window_t

0x9c21,	// (0x000760dc) bg_popup_call_pane_cp02

0x9c2b,	// (0x000760e6) call_type_pane_cp023

0x9c33,	// (0x000760ee) popup_call_audio_wait_window_g1

0x9c3b,	// (0x000760f6) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007b5b4) popup_call_audio_wait_window_g

0x9c43,	// (0x000760fe) popup_call_audio_wait_window_t3

0x9c51,	// (0x0007610c) bg_popup_call_pane_cp03_ParamLimits

0x9c51,	// (0x0007610c) bg_popup_call_pane_cp03

0x9cb1,	// (0x0007616c) call_thumbnail_pane_cp011_ParamLimits

0x9cb1,	// (0x0007616c) call_thumbnail_pane_cp011

0x9cbd,	// (0x00076178) call_type_pane_cp034_ParamLimits

0x9cbd,	// (0x00076178) call_type_pane_cp034

0x9cf9,	// (0x000761b4) popup_call_audio_second_window_g1_ParamLimits

0x9cf9,	// (0x000761b4) popup_call_audio_second_window_g1

0x9d35,	// (0x000761f0) popup_call_audio_second_window_g2_ParamLimits

0x9d35,	// (0x000761f0) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007b5b9) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007b5b9) popup_call_audio_second_window_g

0x9d71,	// (0x0007622c) popup_call_audio_second_window_t1_ParamLimits

0x9d71,	// (0x0007622c) popup_call_audio_second_window_t1

0x9df2,	// (0x000762ad) popup_call_audio_second_window_t2_ParamLimits

0x9df2,	// (0x000762ad) popup_call_audio_second_window_t2

0x9e28,	// (0x000762e3) popup_call_audio_second_window_t3_ParamLimits

0x9e28,	// (0x000762e3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007b5be) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007b5be) popup_call_audio_second_window_t

0x9c21,	// (0x000760dc) bg_popup_call_pane_cp04

0x9e5e,	// (0x00076319) list_conf_pane

0x9e66,	// (0x00076321) popup_call_audio_conf_window_t1

0x9e74,	// (0x0007632f) call_thumbnail_pane_g1

0x9e7c,	// (0x00076337) bg_pinb_pane_ParamLimits

0x9e7c,	// (0x00076337) bg_pinb_pane

0x9e8a,	// (0x00076345) find_pinb_pane

0x9e93,	// (0x0007634e) listscroll_pinb_pane_ParamLimits

0x9e93,	// (0x0007634e) listscroll_pinb_pane

0x9ea2,	// (0x0007635d) pinb_bg_pane_g1

0x03c1,	// (0x0006c87c) pinb_bg_pane_g2

0x03cd,	// (0x0006c888) pinb_bg_pane_g3

0x03d9,	// (0x0006c894) pinb_bg_pane_g4

0x03e5,	// (0x0006c8a0) pinb_bg_pane_g5

0x03f1,	// (0x0006c8ac) pinb_bg_pane_g6

0x03fc,	// (0x0006c8b7) pinb_bg_pane_g7

0x0407,	// (0x0006c8c2) pinb_bg_pane_g8

0x0412,	// (0x0006c8cd) pinb_bg_pane_g9

0x041c,	// (0x0006c8d7) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007b5c5) pinb_bg_pane_g

0x0439,	// (0x0006c8f4) grid_pinb_pane

0x0442,	// (0x0006c8fd) list_pinb_pane

0x044b,	// (0x0006c906) scroll_pane_cp01_ParamLimits

0x044b,	// (0x0006c906) scroll_pane_cp01

0x9eac,	// (0x00076367) find_pinb_pane_g1_ParamLimits

0x9eac,	// (0x00076367) find_pinb_pane_g1

0x9ec4,	// (0x0007637f) find_pinb_pane_t1

0x9ed6,	// (0x00076391) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007b5df) find_pinb_pane_t

0x9eeb,	// (0x000763a6) input_focus_pane_cp01_ParamLimits

0x9eeb,	// (0x000763a6) input_focus_pane_cp01

0x045d,	// (0x0006c918) cell_pinb_pane_ParamLimits

0x045d,	// (0x0006c918) cell_pinb_pane

0x9ef7,	// (0x000763b2) cell_pinb_pane_g1_ParamLimits

0x9ef7,	// (0x000763b2) cell_pinb_pane_g1

0x9f0a,	// (0x000763c5) cell_pinb_pane_g2_ParamLimits

0x9f0a,	// (0x000763c5) cell_pinb_pane_g2

0x9f16,	// (0x000763d1) cell_pinb_pane_g3_ParamLimits

0x9f16,	// (0x000763d1) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007b5e4) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007b5e4) cell_pinb_pane_g

0x9c21,	// (0x000760dc) grid_highlight_pane_cp01

0x048b,	// (0x0006c946) list_pinb_item_pane_ParamLimits

0x048b,	// (0x0006c946) list_pinb_item_pane

0x9c21,	// (0x000760dc) list_highlight_pane_cp02

0x049e,	// (0x0006c959) list_pinb_item_pane_g1_ParamLimits

0x049e,	// (0x0006c959) list_pinb_item_pane_g1

0x04ab,	// (0x0006c966) list_pinb_item_pane_g2_ParamLimits

0x04ab,	// (0x0006c966) list_pinb_item_pane_g2

0x04b7,	// (0x0006c972) list_pinb_item_pane_g3_ParamLimits

0x04b7,	// (0x0006c972) list_pinb_item_pane_g3

0x04c8,	// (0x0006c983) list_pinb_item_pane_g4_ParamLimits

0x04c8,	// (0x0006c983) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007b5eb) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007b5eb) list_pinb_item_pane_g

0x04d4,	// (0x0006c98f) list_pinb_item_pane_t1_ParamLimits

0x04d4,	// (0x0006c98f) list_pinb_item_pane_t1

0x0509,	// (0x0006c9c4) calc_display_pane

0x0531,	// (0x0006c9ec) calc_paper_pane

0x0554,	// (0x0006ca0f) grid_calc_pane

0x9c21,	// (0x000760dc) bg_list_pane_cp01

0x0582,	// (0x0006ca3d) clock_g1

0x058a,	// (0x0006ca45) clock_g2

0x0001,

0xf139,	// (0x0007b5f4) clock_g

0x0592,	// (0x0006ca4d) clock_t1_ParamLimits

0x0592,	// (0x0006ca4d) clock_t1

0x05a7,	// (0x0006ca62) clock_t2_ParamLimits

0x05a7,	// (0x0006ca62) clock_t2

0x05b9,	// (0x0006ca74) clock_t3_ParamLimits

0x05b9,	// (0x0006ca74) clock_t3

0x05cb,	// (0x0006ca86) clock_t4_ParamLimits

0x05cb,	// (0x0006ca86) clock_t4

0x05dd,	// (0x0006ca98) clock_t5_ParamLimits

0x05dd,	// (0x0006ca98) clock_t5

0x05f2,	// (0x0006caad) clock_t6_ParamLimits

0x05f2,	// (0x0006caad) clock_t6

0x0604,	// (0x0006cabf) clock_t7_ParamLimits

0x0604,	// (0x0006cabf) clock_t7

0x0616,	// (0x0006cad1) clock_t8_ParamLimits

0x0616,	// (0x0006cad1) clock_t8

0x062a,	// (0x0006cae5) clock_t9_ParamLimits

0x062a,	// (0x0006cae5) clock_t9

0x0008,

0xf13e,	// (0x0007b5f9) clock_t_ParamLimits

0xf13e,	// (0x0007b5f9) clock_t

0x9f22,	// (0x000763dd) popup_clock_analogue_window_cp02

0x9f22,	// (0x000763dd) popup_clock_digital_window_cp01

0x9f2a,	// (0x000763e5) listscroll_help_pane

0x9c21,	// (0x000760dc) phob_pre_status_pane

0x9f34,	// (0x000763ef) grid_qdial_pane

0x9e7c,	// (0x00076337) listscroll_mce_pane

0x9e7c,	// (0x00076337) bg_notes_pane

0x9f3e,	// (0x000763f9) list_notes_pane

0x063e,	// (0x0006caf9) scroll_pane_cp06

0x9f4c,	// (0x00076407) bg_calc_paper_pane

0x94ce,	// (0x00075989) list_calc_pane

0x9f60,	// (0x0007641b) bg_calc_display_pane

0x0652,	// (0x0006cb0d) calc_display_pane_t1

0x0664,	// (0x0006cb1f) calc_display_pane_t2

0x94e8,	// (0x000759a3) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007b60c) calc_display_pane_t

0x0676,	// (0x0006cb31) cell_calc_pane_ParamLimits

0x0676,	// (0x0006cb31) cell_calc_pane

0x9f6c,	// (0x00076427) bg_calc_paper_pane_g1

0x9f78,	// (0x00076433) bg_calc_paper_pane_g2

0x9f84,	// (0x0007643f) bg_calc_paper_pane_g3

0x9f90,	// (0x0007644b) bg_calc_paper_pane_g4

0x9f9c,	// (0x00076457) bg_calc_paper_pane_g5

0x06ad,	// (0x0006cb68) bg_calc_paper_pane_g6

0x06be,	// (0x0006cb79) bg_calc_paper_pane_g7

0x06cf,	// (0x0006cb8a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007b613) bg_calc_paper_pane_g

0x06e2,	// (0x0006cb9d) calc_bg_paper_pane_g9

0x06f5,	// (0x0006cbb0) list_calc_item_pane_ParamLimits

0x06f5,	// (0x0006cbb0) list_calc_item_pane

0x9fa8,	// (0x00076463) list_calc_item_pane_g1

0x94fa,	// (0x000759b5) list_calc_item_pane_t1_ParamLimits

0x94fa,	// (0x000759b5) list_calc_item_pane_t1

0x070f,	// (0x0006cbca) list_calc_item_pane_t2_ParamLimits

0x070f,	// (0x0006cbca) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007b624) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007b624) list_calc_item_pane_t

0x9fb5,	// (0x00076470) cell_calc_pane_g1

0x9fbf,	// (0x0007647a) grid_highlight_pane_cp02

0x9fe1,	// (0x0007649c) bg_calc_display_pane_g1

0x950c,	// (0x000759c7) bg_calc_display_pane_g2

0x9fea,	// (0x000764a5) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007b62e) bg_calc_display_pane_g

0x0741,	// (0x0006cbfc) cell_qdial_pane_ParamLimits

0x0741,	// (0x0006cbfc) cell_qdial_pane

0x0755,	// (0x0006cc10) cell_qdial_pane_g1_ParamLimits

0x0755,	// (0x0006cc10) cell_qdial_pane_g1

0x076b,	// (0x0006cc26) cell_qdial_pane_g2_ParamLimits

0x076b,	// (0x0006cc26) cell_qdial_pane_g2

0x9ff3,	// (0x000764ae) cell_qdial_pane_g3_ParamLimits

0x9ff3,	// (0x000764ae) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007b635) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007b635) cell_qdial_pane_g

0x0791,	// (0x0006cc4c) cell_qdial_pane_t1_ParamLimits

0x0791,	// (0x0006cc4c) cell_qdial_pane_t1

0x07a9,	// (0x0006cc64) cell_qdial_pane_t2_ParamLimits

0x07a9,	// (0x0006cc64) cell_qdial_pane_t2

0x07bc,	// (0x0006cc77) cell_qdial_pane_t3_ParamLimits

0x07bc,	// (0x0006cc77) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007b63e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007b63e) cell_qdial_pane_t

0x9c21,	// (0x000760dc) grid_highlight_pane_cp04

0x9fff,	// (0x000764ba) thumbnail_qdial_pane_ParamLimits

0x9fff,	// (0x000764ba) thumbnail_qdial_pane

0xa830,	// (0x00076ceb) list_help_pane

0xa839,	// (0x00076cf4) scroll_pane_cp02

0x07cf,	// (0x0006cc8a) help_list_pane_t1_ParamLimits

0x07cf,	// (0x0006cc8a) help_list_pane_t1

0x9516,	// (0x000759d1) bg_notes_pane_g2

0x951e,	// (0x000759d9) bg_notes_pane_g3

0x9526,	// (0x000759e1) notes_bg_pane_g1

0x952e,	// (0x000759e9) notes_bg_pane_g4

0x9536,	// (0x000759f1) notes_bg_pane_g5

0x953e,	// (0x000759f9) notes_bg_pane_g6

0x9546,	// (0x00075a01) notes_bg_pane_g7

0x954e,	// (0x00075a09) notes_bg_pane_g8

0x9556,	// (0x00075a11) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007b65c) notes_bg_pane_g

0x07ee,	// (0x0006cca9) list_notes_text_pane_ParamLimits

0x07ee,	// (0x0006cca9) list_notes_text_pane

0xa842,	// (0x00076cfd) list_notes_text_pane_g1

0x955e,	// (0x00075a19) list_notes_text_pane_t1

0x0804,	// (0x0006ccbf) listscroll_cale_week_pane

0x0830,	// (0x0006cceb) bg_cale_heading_pane

0xa865,	// (0x00076d20) bg_cale_pane_cp01

0x084e,	// (0x0006cd09) cale_week_corner_pane

0x086d,	// (0x0006cd28) cale_week_day_heading_pane

0x0890,	// (0x0006cd4b) cale_week_scroll_pane_g1

0x08a9,	// (0x0006cd64) cale_week_scroll_pane_g2

0x08c1,	// (0x0006cd7c) cale_week_scroll_pane_g3

0x08d9,	// (0x0006cd94) cale_week_scroll_pane_g4

0x08f1,	// (0x0006cdac) cale_week_scroll_pane_g5

0x090d,	// (0x0006cdc8) cale_week_scroll_pane_g6

0x092d,	// (0x0006cde8) cale_week_scroll_pane_g7

0x094d,	// (0x0006ce08) cale_week_scroll_pane_g8

0x0971,	// (0x0006ce2c) cale_week_scroll_pane_g9

0x0989,	// (0x0006ce44) cale_week_scroll_pane_g10

0x09a1,	// (0x0006ce5c) cale_week_scroll_pane_g11

0x09b9,	// (0x0006ce74) cale_week_scroll_pane_g12

0x09d1,	// (0x0006ce8c) cale_week_scroll_pane_g13

0x09d1,	// (0x0006ce8c) cale_week_scroll_pane_g14

0x09d1,	// (0x0006ce8c) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007b66b) cale_week_scroll_pane_g

0x0a0d,	// (0x0006cec8) cale_week_time_pane

0x0a31,	// (0x0006ceec) grid_cale_week_pane

0xa894,	// (0x00076d4f) scroll_pane_cp08

0x0a57,	// (0x0006cf12) cell_cale_week_pane_ParamLimits

0x0a57,	// (0x0006cf12) cell_cale_week_pane

0x0ae5,	// (0x0006cfa0) cale_week_day_heading_pane_t1

0x0b2f,	// (0x0006cfea) cale_week_day_heading_pane_t2

0x0b7e,	// (0x0006d039) cale_week_day_heading_pane_t3

0x0bcd,	// (0x0006d088) cale_week_day_heading_pane_t4

0x0c1c,	// (0x0006d0d7) cale_week_day_heading_pane_t5

0x0c73,	// (0x0006d12e) cale_week_day_heading_pane_t6

0x0cca,	// (0x0006d185) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007b68c) cale_week_day_heading_pane_t

0xa8b1,	// (0x00076d6c) bg_cale_side_pane

0x0d14,	// (0x0006d1cf) cale_week_time_pane_t1

0x0d2e,	// (0x0006d1e9) cale_week_time_pane_t2

0x0d48,	// (0x0006d203) cale_week_time_pane_t3

0x0d62,	// (0x0006d21d) cale_week_time_pane_t4

0x0d7c,	// (0x0006d237) cale_week_time_pane_t5

0x0d96,	// (0x0006d251) cale_week_time_pane_t6

0x0db0,	// (0x0006d26b) cale_week_time_pane_t7

0x0dd0,	// (0x0006d28b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007b69b) cale_week_time_pane_t

0x0df0,	// (0x0006d2ab) cell_cale_week_pane_g2

0x0e14,	// (0x0006d2cf) cell_cale_week_pane_g3_ParamLimits

0x0e14,	// (0x0006d2cf) cell_cale_week_pane_g3

0xa8bf,	// (0x00076d7a) grid_highlight_pane_cp07

0xa8c7,	// (0x00076d82) listscroll_gms_pane

0xa8d1,	// (0x00076d8c) grid_gms_pane

0xa8da,	// (0x00076d95) listscroll_gms_pane_g1

0xa8e2,	// (0x00076d9d) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007b6ac) listscroll_gms_pane_g

0x0e2c,	// (0x0006d2e7) scroll_pane_cp010

0x0e37,	// (0x0006d2f2) cell_gms_pane_ParamLimits

0x0e37,	// (0x0006d2f2) cell_gms_pane

0x0e49,	// (0x0006d304) cell_gms_pane_g1

0xa8ea,	// (0x00076da5) cell_gms_pane_g2

0xa842,	// (0x00076cfd) cell_gms_pane_g3

0xa8f2,	// (0x00076dad) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007b6b1) cell_gms_pane_g

0xa8fb,	// (0x00076db6) grid_highlight_pane_cp09

0x3229,	// (0x0006f6e4) phob_pre_status_pane_g1

0x3231,	// (0x0006f6ec) phob_pre_status_pane_g2

0x3239,	// (0x0006f6f4) phob_pre_status_pane_g3

0x3241,	// (0x0006f6fc) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007ba9c) phob_pre_status_pane_g

0x3251,	// (0x0006f70c) phob_pre_status_pane_t1

0x325f,	// (0x0006f71a) phob_pre_status_pane_t2

0x326f,	// (0x0006f72a) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007baa7) phob_pre_status_pane_t

0xa903,	// (0x00076dbe) bg_list_pane_cp05

0x0e59,	// (0x0006d314) grid_vorec_pane

0x0e63,	// (0x0006d31e) vorec_t1

0x0e71,	// (0x0006d32c) vorec_t2

0x0e7f,	// (0x0006d33a) vorec_t3

0x0e8d,	// (0x0006d348) vorec_t4

0x900d,	// (0x000754c8) vorec_t5

0x901b,	// (0x000754d6) vorec_t6

0x0004,

0xf1ff,	// (0x0007b6ba) vorec_t

0x9029,	// (0x000754e4) wait_bar_pane_cp01

0x0ea9,	// (0x0006d364) cell_vorec_pane_ParamLimits

0x0ea9,	// (0x0006d364) cell_vorec_pane

0x956c,	// (0x00075a27) cell_vorec_pane_g1

0x9c21,	// (0x000760dc) grid_highlight_pane_cp05

0x0ed4,	// (0x0006d38f) cams_zoom_pane

0x0ee3,	// (0x0006d39e) image_vga_pane

0x0efd,	// (0x0006d3b8) main_camera_pane_g1

0x0f0f,	// (0x0006d3ca) main_camera_pane_g2

0x0f1f,	// (0x0006d3da) main_camera_pane_g3

0x0f31,	// (0x0006d3ec) main_camera_pane_g4

0x0f43,	// (0x0006d3fe) main_camera_pane_g5

0x0f55,	// (0x0006d410) main_camera_pane_g6

0x0f67,	// (0x0006d422) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007b6c5) main_camera_pane_g

0x0f79,	// (0x0006d434) main_camera_pane_t1

0x0f8f,	// (0x0006d44a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007b6d6) main_camera_pane_t

0x0fcb,	// (0x0006d486) cams_zoom_pane_cp_ParamLimits

0x0fcb,	// (0x0006d486) cams_zoom_pane_cp

0x0ff3,	// (0x0006d4ae) image_cif_pane_ParamLimits

0x0ff3,	// (0x0006d4ae) image_cif_pane

0x102e,	// (0x0006d4e9) image_subqcif_pane

0x1036,	// (0x0006d4f1) main_video_pane_g1_ParamLimits

0x1036,	// (0x0006d4f1) main_video_pane_g1

0x105a,	// (0x0006d515) main_video_pane_g2_ParamLimits

0x105a,	// (0x0006d515) main_video_pane_g2

0x108e,	// (0x0006d549) main_video_pane_g3_ParamLimits

0x108e,	// (0x0006d549) main_video_pane_g3

0x10bc,	// (0x0006d577) main_video_pane_g4_ParamLimits

0x10bc,	// (0x0006d577) main_video_pane_g4

0x10ea,	// (0x0006d5a5) main_video_pane_g5_ParamLimits

0x10ea,	// (0x0006d5a5) main_video_pane_g5

0xa917,	// (0x00076dd2) main_video_pane_g6_ParamLimits

0xa917,	// (0x00076dd2) main_video_pane_g6

0x0006,

0xf220,	// (0x0007b6db) main_video_pane_g_ParamLimits

0xf220,	// (0x0007b6db) main_video_pane_g

0x1113,	// (0x0006d5ce) main_video_pane_t1_ParamLimits

0x1113,	// (0x0006d5ce) main_video_pane_t1

0xa931,	// (0x00076dec) cams_zoom_pane_g1

0xa93a,	// (0x00076df5) cams_zoom_pane_g2

0xa943,	// (0x00076dfe) cams_zoom_pane_g3

0xa94c,	// (0x00076e07) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007b6ea) cams_zoom_pane_g

0x1170,	// (0x0006d62b) grid_cams_pane

0x118a,	// (0x0006d645) linegrid_cams_pane

0x119d,	// (0x0006d658) cell_cams_pane_ParamLimits

0x119d,	// (0x0006d658) cell_cams_pane

0xa955,	// (0x00076e10) cams_burst_image_pane

0xa95d,	// (0x00076e18) cell_cams_pane_g1

0x9c21,	// (0x000760dc) grid_highlight_pane_cp03

0x9fb5,	// (0x00076470) mp_bg_pane_g1

0x9c21,	// (0x000760dc) bg_list_pane_cp03

0xc6be,	// (0x00078b79) bg_mp_pane

0xc6c6,	// (0x00078b81) grid_mp_pane

0xc6ce,	// (0x00078b89) media_player_g1

0xc6d6,	// (0x00078b91) media_player_t1

0xc6e4,	// (0x00078b9f) media_player_t2

0xc6f2,	// (0x00078bad) media_player_t3

0xc700,	// (0x00078bbb) media_player_t4

0xc70e,	// (0x00078bc9) media_player_t5

0xc71c,	// (0x00078bd7) media_player_t6

0xc72a,	// (0x00078be5) media_player_t7

0x0006,

0xf5cb,	// (0x0007ba86) media_player_t

0xc738,	// (0x00078bf3) wait_bar_pane_cp02

0xf5b0,	// (0x0007ba6b) main_usb_pane_t

0x3220,	// (0x0006f6db) cell_mp_pane

0x9fb5,	// (0x00076470) cell_mp_pane_g1

0x9c21,	// (0x000760dc) grid_highlight_pane_cp06

0xa965,	// (0x00076e20) grid_skin_colour_pane

0xa96d,	// (0x00076e28) list_highlight_pane_cp03

0x1233,	// (0x0006d6ee) skin_g1

0xa975,	// (0x00076e30) skin_t1

0xa984,	// (0x00076e3f) skin_t2

0x0001,

0xf264,	// (0x0007b71f) skin_t

0x123b,	// (0x0006d6f6) cell_skin_colour_pane_ParamLimits

0x123b,	// (0x0006d6f6) cell_skin_colour_pane

0xa992,	// (0x00076e4d) cell_skin_colour_pane_g1

0x12b4,	// (0x0006d76f) call_video_g1_ParamLimits

0x12b4,	// (0x0006d76f) call_video_g1

0x12d0,	// (0x0006d78b) call_video_g2_ParamLimits

0x12d0,	// (0x0006d78b) call_video_g2

0x0001,

0xf269,	// (0x0007b724) call_video_g_ParamLimits

0xf269,	// (0x0007b724) call_video_g

0x1322,	// (0x0006d7dd) call_video_uplink_pane_cp1_ParamLimits

0x1322,	// (0x0006d7dd) call_video_uplink_pane_cp1

0xa9a4,	// (0x00076e5f) call_video_uplink_pane_cp2

0x13c1,	// (0x0006d87c) video_down_crop_pane_ParamLimits

0x13c1,	// (0x0006d87c) video_down_crop_pane

0x14aa,	// (0x0006d965) video_down_pane_ParamLimits

0x14aa,	// (0x0006d965) video_down_pane

0xa9ac,	// (0x00076e67) video_down_subqcif_pane_ParamLimits

0xa9ac,	// (0x00076e67) video_down_subqcif_pane

0xa9c4,	// (0x00076e7f) video_down_subqcif_pane_cp_ParamLimits

0xa9c4,	// (0x00076e7f) video_down_subqcif_pane_cp

0xa9ea,	// (0x00076ea5) im_reading_pane_ParamLimits

0xa9ea,	// (0x00076ea5) im_reading_pane

0x15b8,	// (0x0006da73) im_writing_pane_ParamLimits

0x15b8,	// (0x0006da73) im_writing_pane

0x15ce,	// (0x0006da89) im_reading_pane_t1

0xaa04,	// (0x00076ebf) list_im_pane

0xaa15,	// (0x00076ed0) scroll_pane_cp07

0x160b,	// (0x0006dac6) im_writing_pane_t1_ParamLimits

0x160b,	// (0x0006dac6) im_writing_pane_t1

0xaa2e,	// (0x00076ee9) im_writing_pane_t2_ParamLimits

0xaa2e,	// (0x00076ee9) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007b72e) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007b72e) im_writing_pane_t

0x9c21,	// (0x000760dc) input_focus_pane_cp04

0x9c21,	// (0x000760dc) input_focus_pane_cp05

0x1620,	// (0x0006dadb) list_im_single_pane_ParamLimits

0x1620,	// (0x0006dadb) list_im_single_pane

0x1636,	// (0x0006daf1) list_single_im_pane_t1

0x31e0,	// (0x0006f69b) blid_accuracy_pane

0x31e8,	// (0x0006f6a3) blid_compass_pane

0x31f2,	// (0x0006f6ad) main_location_t1

0x3202,	// (0x0006f6bd) main_location_t2

0x3212,	// (0x0006f6cd) main_location_t3

0x0002,

0xf5da,	// (0x0007ba95) main_location_t

0x9c21,	// (0x000760dc) aid_levels_location

0x9fb5,	// (0x00076470) blid_accuracy_pane_g1

0x9fb5,	// (0x00076470) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007b790) blid_accuracy_pane_g

0xaa76,	// (0x00076f31) wml_content_pane

0xaab4,	// (0x00076f6f) wml_button_pane_ParamLimits

0xaab4,	// (0x00076f6f) wml_button_pane

0x1645,	// (0x0006db00) wml_list_single_large_pane_ParamLimits

0x1645,	// (0x0006db00) wml_list_single_large_pane

0x165b,	// (0x0006db16) wml_list_single_medium_pane_ParamLimits

0x165b,	// (0x0006db16) wml_list_single_medium_pane

0x1675,	// (0x0006db30) wml_list_single_small_pane_ParamLimits

0x1675,	// (0x0006db30) wml_list_single_small_pane

0xaac8,	// (0x00076f83) wml_selection_box_pane_ParamLimits

0xaac8,	// (0x00076f83) wml_selection_box_pane

0xaadb,	// (0x00076f96) wml_list_single_pane_t1

0xaaea,	// (0x00076fa5) wml_list_single_medium_pane_t1

0xaaf9,	// (0x00076fb4) wml_list_single_large_pane_t1

0xab08,	// (0x00076fc3) input_focus_pane_cp02_ParamLimits

0xab08,	// (0x00076fc3) input_focus_pane_cp02

0xab1b,	// (0x00076fd6) wml_selection_box_pane_g1

0xab24,	// (0x00076fdf) wml_selection_box_pane_t1_ParamLimits

0xab24,	// (0x00076fdf) wml_selection_box_pane_t1

0x9e7c,	// (0x00076337) bg_wml_button_pane_ParamLimits

0x9e7c,	// (0x00076337) bg_wml_button_pane

0xab3c,	// (0x00076ff7) wml_button_pane_g1

0xab44,	// (0x00076fff) wml_button_pane_t1

0xab3c,	// (0x00076ff7) wml_button_bg_pane_g1

0xab54,	// (0x0007700f) wml_button_bg_pane_g2

0xab5c,	// (0x00077017) wml_button_bg_pane_g3

0xab64,	// (0x0007701f) wml_button_bg_pane_g4

0xab6c,	// (0x00077027) wml_button_bg_pane_g5

0xab74,	// (0x0007702f) wml_button_bg_pane_g6

0xab7c,	// (0x00077037) wml_button_bg_pane_g7

0xab84,	// (0x0007703f) wml_button_bg_pane_g8

0xab8c,	// (0x00077047) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007b733) wml_button_bg_pane_g

0x168f,	// (0x0006db4a) bg_list_pane_cp02

0xab94,	// (0x0007704f) mce_header_pane_ParamLimits

0xab94,	// (0x0007704f) mce_header_pane

0xabaa,	// (0x00077065) mce_icon_pane

0xabaa,	// (0x00077065) mce_image_pane

0xabb3,	// (0x0007706e) mce_text_pane_ParamLimits

0xabb3,	// (0x0007706e) mce_text_pane

0x1697,	// (0x0006db52) scroll_pane_cp03

0xaaac,	// (0x00076f67) scroll_pane_cp04

0xabc6,	// (0x00077081) scroll_pane_cp05_ParamLimits

0xabc6,	// (0x00077081) scroll_pane_cp05

0x16a1,	// (0x0006db5c) mce_header_field_pane_ParamLimits

0x16a1,	// (0x0006db5c) mce_header_field_pane

0x16b8,	// (0x0006db73) mce_header_field_pane_2_ParamLimits

0x16b8,	// (0x0006db73) mce_header_field_pane_2

0x16ce,	// (0x0006db89) mce_header_field_pane_3

0x16d6,	// (0x0006db91) list_single_mce_message_pane_ParamLimits

0x16d6,	// (0x0006db91) list_single_mce_message_pane

0x16ed,	// (0x0006dba8) list_single_mce_smart_pane_ParamLimits

0x16ed,	// (0x0006dba8) list_single_mce_smart_pane

0xabd2,	// (0x0007708d) input_focus_pane_cp03

0xabdb,	// (0x00077096) list_header_data_pane

0x170f,	// (0x0006dbca) mce_header_field_pane_t1

0x171f,	// (0x0006dbda) list_single_mce_header_pane_ParamLimits

0x171f,	// (0x0006dbda) list_single_mce_header_pane

0xabe3,	// (0x0007709e) list_single_mce_header_pane_t1

0xabf2,	// (0x000770ad) list_single_mce_message_pane_g1

0xabfa,	// (0x000770b5) list_single_mce_message_pane_t1

0x1759,	// (0x0006dc14) bg_cale_heading_pane_cp01_ParamLimits

0x1759,	// (0x0006dc14) bg_cale_heading_pane_cp01

0xac08,	// (0x000770c3) bg_cale_pane_cp02_ParamLimits

0xac08,	// (0x000770c3) bg_cale_pane_cp02

0x1794,	// (0x0006dc4f) cale_month_corner_pane

0x17b3,	// (0x0006dc6e) cale_month_day_heading_pane_ParamLimits

0x17b3,	// (0x0006dc6e) cale_month_day_heading_pane

0x1806,	// (0x0006dcc1) cale_month_pane_g1_ParamLimits

0x1806,	// (0x0006dcc1) cale_month_pane_g1

0x1836,	// (0x0006dcf1) cale_month_pane_g2_ParamLimits

0x1836,	// (0x0006dcf1) cale_month_pane_g2

0x1866,	// (0x0006dd21) cale_month_pane_g3_ParamLimits

0x1866,	// (0x0006dd21) cale_month_pane_g3

0x18a2,	// (0x0006dd5d) cale_month_pane_g4_ParamLimits

0x18a2,	// (0x0006dd5d) cale_month_pane_g4

0x18de,	// (0x0006dd99) cale_month_pane_g5_ParamLimits

0x18de,	// (0x0006dd99) cale_month_pane_g5

0x1926,	// (0x0006dde1) cale_month_pane_g6_ParamLimits

0x1926,	// (0x0006dde1) cale_month_pane_g6

0x1972,	// (0x0006de2d) cale_month_pane_g7_ParamLimits

0x1972,	// (0x0006de2d) cale_month_pane_g7

0x19c6,	// (0x0006de81) cale_month_pane_g8_ParamLimits

0x19c6,	// (0x0006de81) cale_month_pane_g8

0x1a1a,	// (0x0006ded5) cale_month_pane_g9_ParamLimits

0x1a1a,	// (0x0006ded5) cale_month_pane_g9

0x1a6c,	// (0x0006df27) cale_month_pane_g10_ParamLimits

0x1a6c,	// (0x0006df27) cale_month_pane_g10

0x1abe,	// (0x0006df79) cale_month_pane_g11_ParamLimits

0x1abe,	// (0x0006df79) cale_month_pane_g11

0x1b10,	// (0x0006dfcb) cale_month_pane_g12_ParamLimits

0x1b10,	// (0x0006dfcb) cale_month_pane_g12

0x1b62,	// (0x0006e01d) cale_month_pane_g13_ParamLimits

0x1b62,	// (0x0006e01d) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007b746) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007b746) cale_month_pane_g

0x1bb4,	// (0x0006e06f) cale_month_week_pane

0x1bd8,	// (0x0006e093) grid_cale_month_pane_ParamLimits

0x1bd8,	// (0x0006e093) grid_cale_month_pane

0x1c16,	// (0x0006e0d1) cale_month_day_heading_pane_t1

0x1c9c,	// (0x0006e157) cale_month_day_heading_pane_t2

0x1d2d,	// (0x0006e1e8) cale_month_day_heading_pane_t3

0x1dbe,	// (0x0006e279) cale_month_day_heading_pane_t4

0x1e57,	// (0x0006e312) cale_month_day_heading_pane_t5

0x1ef8,	// (0x0006e3b3) cale_month_day_heading_pane_t6

0x1f99,	// (0x0006e454) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007b761) cale_month_day_heading_pane_t

0xa8b1,	// (0x00076d6c) bg_cale_side_pane_cp01

0x2042,	// (0x0006e4fd) cale_month_week_pane_t1

0x205b,	// (0x0006e516) cale_month_week_pane_t2

0x2074,	// (0x0006e52f) cale_month_week_pane_t3

0x208d,	// (0x0006e548) cale_month_week_pane_t4

0x20a6,	// (0x0006e561) cale_month_week_pane_t5

0x20bf,	// (0x0006e57a) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007b770) cale_month_week_pane_t

0x20d8,	// (0x0006e593) cell_cale_month_pane_ParamLimits

0x20d8,	// (0x0006e593) cell_cale_month_pane

0x95a3,	// (0x00075a5e) cell_cale_month_pane_g1

0x2206,	// (0x0006e6c1) cell_cale_month_pane_t1_ParamLimits

0x2206,	// (0x0006e6c1) cell_cale_month_pane_t1

0xa8bf,	// (0x00076d7a) grid_highlight_pane_cp08

0x9fb5,	// (0x00076470) main_smil_g1

0x2226,	// (0x0006e6e1) smil_status_pane

0xac47,	// (0x00077102) smil_text_pane

0xc5de,	// (0x00078a99) bg_popup_call3_rect_pane_g8

0xc5e6,	// (0x00078aa1) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ba29) bg_popup_call3_rect_pane_g

0xc82d,	// (0x00078ce8) smil_status_volume_pane_g1

0xac51,	// (0x0007710c) smil_status_pane_t1

0x96ed,	// (0x00075ba8) volume_smil_pane

0xac68,	// (0x00077123) list_smil_text_pane

0x223b,	// (0x0006e6f6) scroll_pane_cp011

0x2246,	// (0x0006e701) smil_text_list_pane_t1_ParamLimits

0x2246,	// (0x0006e701) smil_text_list_pane_t1

0x95af,	// (0x00075a6a) aid_volume_smil_ParamLimits

0x95af,	// (0x00075a6a) aid_volume_smil

0x9fb5,	// (0x00076470) smil_volume_pane_g1

0x9fb5,	// (0x00076470) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007b790) smil_volume_pane_g

0x0804,	// (0x0006ccbf) listscroll_cale_day_pane

0xac72,	// (0x0007712d) bg_cale_pane

0xac8a,	// (0x00077145) list_cale_pane

0xacad,	// (0x00077168) scroll_pane_cp09

0xacbe,	// (0x00077179) cale_bg_pane_g1

0xacc6,	// (0x00077181) cale_bg_pane_g2

0xacce,	// (0x00077189) cale_bg_pane_g3

0xacd6,	// (0x00077191) cale_bg_pane_g4

0xacde,	// (0x00077199) cale_bg_pane_g5

0xace6,	// (0x000771a1) cale_bg_pane_g6

0xacee,	// (0x000771a9) cale_bg_pane_g7

0xacf6,	// (0x000771b1) cale_bg_pane_g8

0xacfe,	// (0x000771b9) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007b795) cale_bg_pane_g

0x2288,	// (0x0006e743) list_cale_time_pane_ParamLimits

0x2288,	// (0x0006e743) list_cale_time_pane

0xad0e,	// (0x000771c9) list_cale_time_pane_g1_ParamLimits

0xad0e,	// (0x000771c9) list_cale_time_pane_g1

0xad1a,	// (0x000771d5) list_cale_time_pane_g2_ParamLimits

0xad1a,	// (0x000771d5) list_cale_time_pane_g2

0x229f,	// (0x0006e75a) list_cale_time_pane_g3_ParamLimits

0x229f,	// (0x0006e75a) list_cale_time_pane_g3

0x22ad,	// (0x0006e768) list_cale_time_pane_g4_ParamLimits

0x22ad,	// (0x0006e768) list_cale_time_pane_g4

0x22bb,	// (0x0006e776) list_cale_time_pane_g5_ParamLimits

0x22bb,	// (0x0006e776) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007b7a8) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007b7a8) list_cale_time_pane_g

0xad34,	// (0x000771ef) list_cale_time_pane_t1_ParamLimits

0xad34,	// (0x000771ef) list_cale_time_pane_t1

0xad5c,	// (0x00077217) list_cale_time_pane_t2_ParamLimits

0xad5c,	// (0x00077217) list_cale_time_pane_t2

0x25b8,	// (0x0006ea73) aid_blid_cardinal_pane

0x25f6,	// (0x0006eab1) compass_pane_t4

0xad84,	// (0x0007723f) list_cale_time_pane_t4_ParamLimits

0xad84,	// (0x0007723f) list_cale_time_pane_t4

0x2604,	// (0x0006eabf) compass_pane_t5

0x2612,	// (0x0006eacd) compass_pane_t6

0x2620,	// (0x0006eadb) compass_pane_t7

0xb241,	// (0x000776fc) navi_pane_cc_t1

0xb441,	// (0x000778fc) aid_phob_thumbnail_center_pane

0x2bf0,	// (0x0006f0ab) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007b7b5) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007b7b5) list_cale_time_pane_t

0x911d,	// (0x000755d8) bg_popup_window_pane_cp02_ParamLimits

0x911d,	// (0x000755d8) bg_popup_window_pane_cp02

0xadac,	// (0x00077267) heading_pane_cp01_ParamLimits

0xadac,	// (0x00077267) heading_pane_cp01

0xadb8,	// (0x00077273) loc_req_pane_ParamLimits

0xadb8,	// (0x00077273) loc_req_pane

0xadc8,	// (0x00077283) loc_type_pane_ParamLimits

0xadc8,	// (0x00077283) loc_type_pane

0xadda,	// (0x00077295) loc_type_pane_t1_ParamLimits

0xadda,	// (0x00077295) loc_type_pane_t1

0xadec,	// (0x000772a7) loc_type_pane_t2_ParamLimits

0xadec,	// (0x000772a7) loc_type_pane_t2

0xadfe,	// (0x000772b9) loc_type_pane_t3_ParamLimits

0xadfe,	// (0x000772b9) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007b7bc) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007b7bc) loc_type_pane_t

0xae10,	// (0x000772cb) list_loc_req_pane

0xae1a,	// (0x000772d5) scroll_pane_cp012

0x22c9,	// (0x0006e784) list_single_loc_request_popup_menu_pane_ParamLimits

0x22c9,	// (0x0006e784) list_single_loc_request_popup_menu_pane

0xae25,	// (0x000772e0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae25,	// (0x000772e0) list_single_loc_request_popup_menu_pane_g1

0xae31,	// (0x000772ec) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae31,	// (0x000772ec) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007b7c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007b7c3) list_single_loc_request_popup_menu_pane_g

0xae3d,	// (0x000772f8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae3d,	// (0x000772f8) list_single_loc_request_popup_menu_pane_t1

0x9e7c,	// (0x00076337) bg_popup_window_pane_cp03_ParamLimits

0x9e7c,	// (0x00076337) bg_popup_window_pane_cp03

0xae53,	// (0x0007730e) heading_loc_req_pane_ParamLimits

0xae53,	// (0x0007730e) heading_loc_req_pane

0x22d6,	// (0x0006e791) popup_dyc_status_message_window_g1_ParamLimits

0x22d6,	// (0x0006e791) popup_dyc_status_message_window_g1

0x22ea,	// (0x0006e7a5) popup_dyc_status_message_window_t1_ParamLimits

0x22ea,	// (0x0006e7a5) popup_dyc_status_message_window_t1

0x22ff,	// (0x0006e7ba) popup_dyc_status_message_window_t2_ParamLimits

0x22ff,	// (0x0006e7ba) popup_dyc_status_message_window_t2

0x2314,	// (0x0006e7cf) popup_dyc_status_message_window_t3_ParamLimits

0x2314,	// (0x0006e7cf) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007b7c8) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007b7c8) popup_dyc_status_message_window_t

0x9c21,	// (0x000760dc) bg_heading_pane_cp01

0xae5f,	// (0x0007731a) heading_loc_req_pane_g1

0xae67,	// (0x00077322) heading_loc_req_pane_g2

0xae6f,	// (0x0007732a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007b7cf) heading_loc_req_pane_g

0xae77,	// (0x00077332) heading_loc_req_pane_t1

0xae86,	// (0x00077341) bg_popup_sub_pane_cp01_ParamLimits

0xae86,	// (0x00077341) bg_popup_sub_pane_cp01

0xae94,	// (0x0007734f) popup_cale_events_window_g1_ParamLimits

0xae94,	// (0x0007734f) popup_cale_events_window_g1

0xaeb4,	// (0x0007736f) popup_cale_events_window_g2_ParamLimits

0xaeb4,	// (0x0007736f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007b803) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007b803) popup_cale_events_window_g

0xaed4,	// (0x0007738f) popup_cale_events_window_t1_ParamLimits

0xaed4,	// (0x0007738f) popup_cale_events_window_t1

0xaee6,	// (0x000773a1) popup_cale_events_window_t2_ParamLimits

0xaee6,	// (0x000773a1) popup_cale_events_window_t2

0xaf24,	// (0x000773df) popup_cale_events_window_t3_ParamLimits

0xaf24,	// (0x000773df) popup_cale_events_window_t3

0xaf5e,	// (0x00077419) popup_cale_events_window_t4_ParamLimits

0xaf5e,	// (0x00077419) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007b808) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007b808) popup_cale_events_window_t

0x23c6,	// (0x0006e881) call_type_pane

0x23d6,	// (0x0006e891) popup_call_status_window_g1

0x23ea,	// (0x0006e8a5) popup_call_status_window_g2

0x23fe,	// (0x0006e8b9) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007b811) popup_call_status_window_g

0xaf94,	// (0x0007744f) call_type_pane_g1

0xaf9d,	// (0x00077458) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007b818) call_type_pane_g

0x9c21,	// (0x000760dc) bg_popup_sub_pane_cp02

0xafa6,	// (0x00077461) listscroll_popup_wml_pane

0xafae,	// (0x00077469) list_wml_pane

0xafb8,	// (0x00077473) scroll_pane_cp013

0xafc3,	// (0x0007747e) list_single_graphic_popup_wml_pane_ParamLimits

0xafc3,	// (0x0007747e) list_single_graphic_popup_wml_pane

0x9fb5,	// (0x00076470) list_single_graphic_popup_wml_pane_g1

0xafd7,	// (0x00077492) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007b81d) list_single_graphic_popup_wml_pane_g

0xafdf,	// (0x0007749a) list_single_graphic_popup_wml_pane_t1

0xaff5,	// (0x000774b0) aid_call_pane

0x9e74,	// (0x0007632f) popup_clock_analogue_window_g1

0x9e74,	// (0x0007632f) popup_clock_analogue_window_g2

0x95d1,	// (0x00075a8c) popup_clock_analogue_window_g3

0x95d1,	// (0x00075a8c) popup_clock_analogue_window_g4

0x9fb5,	// (0x00076470) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007b822) popup_clock_analogue_window_g

0x95d9,	// (0x00075a94) popup_clock_analogue_window_t1

0x95e7,	// (0x00075aa2) clock_digital_number_pane_ParamLimits

0x95e7,	// (0x00075aa2) clock_digital_number_pane

0x95f3,	// (0x00075aae) clock_digital_number_pane_cp02_ParamLimits

0x95f3,	// (0x00075aae) clock_digital_number_pane_cp02

0x95ff,	// (0x00075aba) clock_digital_number_pane_cp03_ParamLimits

0x95ff,	// (0x00075aba) clock_digital_number_pane_cp03

0x960b,	// (0x00075ac6) clock_digital_number_pane_cp04_ParamLimits

0x960b,	// (0x00075ac6) clock_digital_number_pane_cp04

0x961b,	// (0x00075ad6) clock_digital_separator_pane_ParamLimits

0x961b,	// (0x00075ad6) clock_digital_separator_pane

0x9627,	// (0x00075ae2) popup_clock_digital_window_t1

0x9fb5,	// (0x00076470) clock_digital_number_pane_g1

0x9fb5,	// (0x00076470) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007b790) clock_digital_number_pane_g

0x9fb5,	// (0x00076470) clock_digital_separator_pane_g1

0x9fb5,	// (0x00076470) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007b790) clock_digital_separator_pane_g

0x9c21,	// (0x000760dc) bg_popup_window_pane_cp04

0xaffd,	// (0x000774b8) heading_pane_cp03

0xb005,	// (0x000774c0) listscroll_popup_gms_pane

0xb00d,	// (0x000774c8) grid_large_graphic_popup_pane

0xb017,	// (0x000774d2) listscroll_popup_gms_pane_g1

0xb01f,	// (0x000774da) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007b82d) listscroll_popup_gms_pane_g

0xaaac,	// (0x00076f67) scroll_pane_cp014

0xb027,	// (0x000774e2) cell_large_graphic_popup_pane_ParamLimits

0xb027,	// (0x000774e2) cell_large_graphic_popup_pane

0xb03f,	// (0x000774fa) cell_large_graphic_popup_pane_g1_ParamLimits

0xb03f,	// (0x000774fa) cell_large_graphic_popup_pane_g1

0xb04b,	// (0x00077506) cell_large_graphic_popup_pane_g2_ParamLimits

0xb04b,	// (0x00077506) cell_large_graphic_popup_pane_g2

0xb057,	// (0x00077512) cell_large_graphic_popup_pane_g3_ParamLimits

0xb057,	// (0x00077512) cell_large_graphic_popup_pane_g3

0xb064,	// (0x0007751f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb064,	// (0x0007751f) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007b832) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007b832) cell_large_graphic_popup_pane_g

0xb074,	// (0x0007752f) grid_highlight_pane_cp010

0x9fb5,	// (0x00076470) bg_popup_call_pane_g1

0xb07e,	// (0x00077539) list_single_graphic_popup_conf_pane_ParamLimits

0xb07e,	// (0x00077539) list_single_graphic_popup_conf_pane

0xb091,	// (0x0007754c) list_highlight_pane_cp01

0xb09a,	// (0x00077555) list_single_graphic_popup_conf_pane_g1

0xb0a2,	// (0x0007755d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007b83b) list_single_graphic_popup_conf_pane_g

0xb0aa,	// (0x00077565) list_single_graphic_popup_conf_pane_t1

0xb0b8,	// (0x00077573) linegrid_cams_pane_g1

0x240d,	// (0x0006e8c8) linegrid_cams_pane_g2

0xa842,	// (0x00076cfd) linegrid_cams_pane_g3

0xb0c1,	// (0x0007757c) linegrid_cams_pane_g4

0x2416,	// (0x0006e8d1) linegrid_cams_pane_g5

0x241f,	// (0x0006e8da) linegrid_cams_pane_g6

0xa8f2,	// (0x00076dad) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007b840) linegrid_cams_pane_g

0xb0ca,	// (0x00077585) popup_clock_analogue_window

0xb0ca,	// (0x00077585) popup_clock_digital_window

0x9c21,	// (0x000760dc) popup_phob_thumbnail_window

0x9fb5,	// (0x00076470) call_video_uplink_pane_g1

0xb0d3,	// (0x0007758e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007b84f) call_video_uplink_pane_g

0xa8bf,	// (0x00076d7a) video_uplink_pane

0xb0db,	// (0x00077596) mce_image_pane_g1

0x242a,	// (0x0006e8e5) mce_image_pane_g2

0x2432,	// (0x0006e8ed) mce_image_pane_g3

0x243a,	// (0x0006e8f5) mce_image_pane_g4

0x2444,	// (0x0006e8ff) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007b854) mce_image_pane_g

0xb0e5,	// (0x000775a0) control_top_pane_stacon_cp01_ParamLimits

0xb0e5,	// (0x000775a0) control_top_pane_stacon_cp01

0xb0f9,	// (0x000775b4) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0f9,	// (0x000775b4) uni_indicator_pane_stacon_cp01

0xb10a,	// (0x000775c5) bg_popup_sub_pane_cp03

0x244c,	// (0x0006e907) chi_dic_find_pane

0x2454,	// (0x0006e90f) listscroll_chi_dic_pane

0x245d,	// (0x0006e918) main_pane_chidic_g1

0xb114,	// (0x000775cf) chi_dic_find_pane_t1

0xb122,	// (0x000775dd) find_chidic_pane

0xb12b,	// (0x000775e6) chi_dic_list_pane_ParamLimits

0xb12b,	// (0x000775e6) chi_dic_list_pane

0xb13c,	// (0x000775f7) scroll_pane_cp020

0xb144,	// (0x000775ff) find_chidic_pane_t1

0x9c21,	// (0x000760dc) input_focus_pane_cp06

0x2470,	// (0x0006e92b) list_chi_dic_pane_ParamLimits

0x2470,	// (0x0006e92b) list_chi_dic_pane

0x2483,	// (0x0006e93e) list_chi_dic_pane_t1_ParamLimits

0x2483,	// (0x0006e93e) list_chi_dic_pane_t1

0x9c21,	// (0x000760dc) list_highlight_pane_cp020

0xb153,	// (0x0007760e) bg_cale_heading_pane_g1

0x2496,	// (0x0006e951) bg_cale_heading_pane_g2

0x249e,	// (0x0006e959) bg_cale_heading_pane_g3

0x24a6,	// (0x0006e961) bg_cale_heading_pane_g4

0x24b0,	// (0x0006e96b) bg_cale_heading_pane_g5

0x24ba,	// (0x0006e975) bg_cale_heading_pane_g6

0x24c2,	// (0x0006e97d) bg_cale_heading_pane_g7

0x24ca,	// (0x0006e985) bg_cale_heading_pane_g8

0x24d4,	// (0x0006e98f) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007b85f) bg_cale_heading_pane_g

0xb153,	// (0x0007760e) bg_cale_side_pane_g1

0x24de,	// (0x0006e999) bg_cale_side_pane_g2

0x24e6,	// (0x0006e9a1) bg_cale_side_pane_g3

0x24ee,	// (0x0006e9a9) bg_cale_side_pane_g4

0x24f6,	// (0x0006e9b1) bg_cale_side_pane_g5

0x24fe,	// (0x0006e9b9) bg_cale_side_pane_g6

0x2506,	// (0x0006e9c1) bg_cale_side_pane_g7

0x250e,	// (0x0006e9c9) bg_cale_side_pane_g8

0x2516,	// (0x0006e9d1) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007b872) bg_cale_side_pane_g

0x251e,	// (0x0006e9d9) popup_call_status_window_ParamLimits

0x251e,	// (0x0006e9d9) popup_call_status_window

0xb15b,	// (0x00077616) stacon_top_pane

0xb163,	// (0x0007761e) status_pane_ParamLimits

0xb163,	// (0x0007761e) status_pane

0xb178,	// (0x00077633) status_small_pane

0xb180,	// (0x0007763b) control_pane

0x9c21,	// (0x000760dc) stacon_bottom_pane

0xb188,	// (0x00077643) list_single_mce_smart_pane_t1_ParamLimits

0xb188,	// (0x00077643) list_single_mce_smart_pane_t1

0xb19b,	// (0x00077656) list_single_mce_smart_pane_t2_ParamLimits

0xb19b,	// (0x00077656) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007b885) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007b885) list_single_mce_smart_pane_t

0x2565,	// (0x0006ea20) compass_pane

0x256e,	// (0x0006ea29) main_location2_pane_t1

0x2580,	// (0x0006ea3b) main_location2_pane_t2

0x2592,	// (0x0006ea4d) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007b88a) main_location2_pane_t

0xb1ba,	// (0x00077675) compass_pane_g1_ParamLimits

0xb1ba,	// (0x00077675) compass_pane_g1

0x25d8,	// (0x0006ea93) compass_pane_t1

0x25e7,	// (0x0006eaa2) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007b893) compass_pane_t

0x262e,	// (0x0006eae9) text_secondary_cp61

0xb238,	// (0x000776f3) navi_pane_cams_g5

0xb2b4,	// (0x0007776f) navi_pane_im_t1

0xb2c2,	// (0x0007777d) navi_pane_mp_g1_ParamLimits

0xb2c2,	// (0x0007777d) navi_pane_mp_g1

0xb2d6,	// (0x00077791) navi_pane_mp_g2_ParamLimits

0xb2d6,	// (0x00077791) navi_pane_mp_g2

0xb2e2,	// (0x0007779d) navi_pane_mp_g3_ParamLimits

0xb2e2,	// (0x0007779d) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007b8a7) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007b8a7) navi_pane_mp_g

0xb2ee,	// (0x000777a9) navi_pane_mp_t1

0xb2fc,	// (0x000777b7) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007b8ae) navi_pane_mp_t

0xb367,	// (0x00077822) navi_pane_vt_g1

0xb2ee,	// (0x000777a9) navi_pane_vt_t1

0xb36f,	// (0x0007782a) navi_slider_pane

0xa903,	// (0x00076dbe) zooming_pane

0xb37f,	// (0x0007783a) navi_slider_pane_g1

0x9644,	// (0x00075aff) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007b8b5) navi_slider_pane_g

0xb3a3,	// (0x0007785e) aid_levels_zoom

0xb3ab,	// (0x00077866) zooming_pane_g1

0xb3b3,	// (0x0007786e) zooming_pane_g2

0xb3b3,	// (0x0007786e) zooming_pane_g3

0x0002,

0xf409,	// (0x0007b8c4) zooming_pane_g

0xb3de,	// (0x00077899) level_10_zoom

0xb3e7,	// (0x000778a2) level_11_zoom

0xb3f0,	// (0x000778ab) level_1_zoom

0xb3f9,	// (0x000778b4) level_2_zoom

0xb402,	// (0x000778bd) level_3_zoom

0xb40b,	// (0x000778c6) level_4_zoom

0xb414,	// (0x000778cf) level_5_zoom

0xb41d,	// (0x000778d8) level_6_zoom

0xb426,	// (0x000778e1) level_7_zoom

0xb42f,	// (0x000778ea) level_8_zoom

0xb438,	// (0x000778f3) level_9_zoom

0xb449,	// (0x00077904) popup_phob_thumbnail_window_g1

0xb451,	// (0x0007790c) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007b8cb) popup_phob_thumbnail_window_g

0xc740,	// (0x00078bfb) level_1_location

0xc748,	// (0x00078c03) level_2_location

0xc750,	// (0x00078c0b) level_3_location

0xc758,	// (0x00078c13) level_4_location

0xa903,	// (0x00076dbe) level_5_location

0x267f,	// (0x0006eb3a) mce_icon_pane_g1

0x2689,	// (0x0006eb44) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007b8d0) mce_icon_pane_g

0x2693,	// (0x0006eb4e) main_mup_pane_g1_ParamLimits

0x2693,	// (0x0006eb4e) main_mup_pane_g1

0x26a9,	// (0x0006eb64) main_mup_pane_g2_ParamLimits

0x26a9,	// (0x0006eb64) main_mup_pane_g2

0x26c1,	// (0x0006eb7c) main_mup_pane_g3_ParamLimits

0x26c1,	// (0x0006eb7c) main_mup_pane_g3

0x26d9,	// (0x0006eb94) main_mup_pane_g4_ParamLimits

0x26d9,	// (0x0006eb94) main_mup_pane_g4

0x26f1,	// (0x0006ebac) main_mup_pane_g5_ParamLimits

0x26f1,	// (0x0006ebac) main_mup_pane_g5

0x270d,	// (0x0006ebc8) main_mup_pane_g6_ParamLimits

0x270d,	// (0x0006ebc8) main_mup_pane_g6

0x2725,	// (0x0006ebe0) main_mup_pane_g7_ParamLimits

0x2725,	// (0x0006ebe0) main_mup_pane_g7

0x273d,	// (0x0006ebf8) main_mup_pane_g8_ParamLimits

0x273d,	// (0x0006ebf8) main_mup_pane_g8

0x2755,	// (0x0006ec10) main_mup_pane_g9_ParamLimits

0x2755,	// (0x0006ec10) main_mup_pane_g9

0x276f,	// (0x0006ec2a) main_mup_pane_g10_ParamLimits

0x276f,	// (0x0006ec2a) main_mup_pane_g10

0x2789,	// (0x0006ec44) main_mup_pane_g11_ParamLimits

0x2789,	// (0x0006ec44) main_mup_pane_g11

0x279d,	// (0x0006ec58) main_mup_pane_g12_ParamLimits

0x279d,	// (0x0006ec58) main_mup_pane_g12

0x27b3,	// (0x0006ec6e) main_mup_pane_g13_ParamLimits

0x27b3,	// (0x0006ec6e) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007b8d5) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007b8d5) main_mup_pane_g

0x27c7,	// (0x0006ec82) main_mup_pane_t1_ParamLimits

0x27c7,	// (0x0006ec82) main_mup_pane_t1

0x27e1,	// (0x0006ec9c) main_mup_pane_t2_ParamLimits

0x27e1,	// (0x0006ec9c) main_mup_pane_t2

0x27f9,	// (0x0006ecb4) main_mup_pane_t3_ParamLimits

0x27f9,	// (0x0006ecb4) main_mup_pane_t3

0x2811,	// (0x0006eccc) main_mup_pane_t4_ParamLimits

0x2811,	// (0x0006eccc) main_mup_pane_t4

0x282f,	// (0x0006ecea) main_mup_pane_t5_ParamLimits

0x282f,	// (0x0006ecea) main_mup_pane_t5

0x2844,	// (0x0006ecff) main_mup_pane_t6_ParamLimits

0x2844,	// (0x0006ecff) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007b8f0) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007b8f0) main_mup_pane_t

0x2856,	// (0x0006ed11) mup_progress_pane_ParamLimits

0x2856,	// (0x0006ed11) mup_progress_pane

0x2862,	// (0x0006ed1d) mup_visualizer_pane_ParamLimits

0x2862,	// (0x0006ed1d) mup_visualizer_pane

0x2896,	// (0x0006ed51) mup_volume_pane_ParamLimits

0x2896,	// (0x0006ed51) mup_volume_pane

0xb3bb,	// (0x00077876) mup_visualizer_pane_g1_ParamLimits

0xb3bb,	// (0x00077876) mup_visualizer_pane_g1

0xb3bb,	// (0x00077876) mup_visualizer_pane_g2_ParamLimits

0xb3bb,	// (0x00077876) mup_visualizer_pane_g2

0xb1ba,	// (0x00077675) mup_visualizer_pane_g3_ParamLimits

0xb1ba,	// (0x00077675) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007b8fd) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007b8fd) mup_visualizer_pane_g

0x9fb5,	// (0x00076470) mup_volume_pane_g1

0xb461,	// (0x0007791c) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007b904) mup_volume_pane_g

0x9fb5,	// (0x00076470) mup_progress_pane_g1

0xb46a,	// (0x00077925) mup_progress_pane_g2

0xb473,	// (0x0007792e) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007b909) mup_progress_pane_g

0x9c21,	// (0x000760dc) bg_popup_window_pane_cp05

0xb47c,	// (0x00077937) heading_pane_cp02_ParamLimits

0xb47c,	// (0x00077937) heading_pane_cp02

0xb496,	// (0x00077951) list_popup_blid_pane

0xb49e,	// (0x00077959) list_blid_sat_info_pane_ParamLimits

0xb49e,	// (0x00077959) list_blid_sat_info_pane

0xb4b1,	// (0x0007796c) list_blid_sat_info_pane_g1

0xb4b9,	// (0x00077974) list_blid_sat_info_pane_t1

0x29ac,	// (0x0006ee67) mup_equalizer_pane_ParamLimits

0x29ac,	// (0x0006ee67) mup_equalizer_pane

0x29c5,	// (0x0006ee80) mup_equalizer_pane_cp1_ParamLimits

0x29c5,	// (0x0006ee80) mup_equalizer_pane_cp1

0x29e2,	// (0x0006ee9d) mup_equalizer_pane_cp2_ParamLimits

0x29e2,	// (0x0006ee9d) mup_equalizer_pane_cp2

0x29ff,	// (0x0006eeba) mup_equalizer_pane_cp3_ParamLimits

0x29ff,	// (0x0006eeba) mup_equalizer_pane_cp3

0x2a20,	// (0x0006eedb) mup_equalizer_pane_cp4_ParamLimits

0x2a20,	// (0x0006eedb) mup_equalizer_pane_cp4

0x2a41,	// (0x0006eefc) mup_equalizer_pane_cp5

0x2a55,	// (0x0006ef10) mup_equalizer_pane_cp6

0x2a69,	// (0x0006ef24) mup_equalizer_pane_cp7

0xc65e,	// (0x00078b19) bg_popup_call_poc_act_pane_g9

0xc666,	// (0x00078b21) bg_popup_call_poc_act_pane_g10

0xc66e,	// (0x00078b29) bg_popup_call_poc_act_pane_g11

0x000a,

0x9e7c,	// (0x00076337) mup_scale_pane

0x9fb5,	// (0x00076470) mup_scale_pane_g1

0xb4c7,	// (0x00077982) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007b925) mup_scale_pane_g

0xb4eb,	// (0x000779a6) msg_data_pane

0xb4f3,	// (0x000779ae) scroll_pane_cp017

0xa115,	// (0x000765d0) bg_list_pane_cp04_ParamLimits

0xa115,	// (0x000765d0) bg_list_pane_cp04

0xb4fb,	// (0x000779b6) msg_data_pane_g1

0x2a8f,	// (0x0006ef4a) msg_data_pane_g2

0x2a97,	// (0x0006ef52) msg_data_pane_g3

0x2a9f,	// (0x0006ef5a) msg_data_pane_g4

0x2aa7,	// (0x0006ef62) msg_data_pane_g5

0x2aaf,	// (0x0006ef6a) msg_data_pane_g6

0x2ab7,	// (0x0006ef72) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007b934) msg_data_pane_g

0x2abf,	// (0x0006ef7a) msg_text_pane_ParamLimits

0x2abf,	// (0x0006ef7a) msg_text_pane

0x2ae8,	// (0x0006efa3) qrid_highlight_pane_cp011_ParamLimits

0x2ae8,	// (0x0006efa3) qrid_highlight_pane_cp011

0x9c21,	// (0x000760dc) msg_body_pane

0x9c21,	// (0x000760dc) msg_header_pane

0xb50c,	// (0x000779c7) input_focus_pane_cp07

0xa135,	// (0x000765f0) msg_header_pane_t1_ParamLimits

0xa135,	// (0x000765f0) msg_header_pane_t1

0xa147,	// (0x00076602) msg_header_pane_t2_ParamLimits

0xa147,	// (0x00076602) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007b948) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007b948) msg_header_pane_t

0xb521,	// (0x000779dc) msg_body_pane_g1

0xa159,	// (0x00076614) msg_body_pane_t1_ParamLimits

0xa159,	// (0x00076614) msg_body_pane_t1

0xa18a,	// (0x00076645) msg_body_pane_t2_ParamLimits

0xa18a,	// (0x00076645) msg_body_pane_t2

0xa19c,	// (0x00076657) msg_body_pane_t3_ParamLimits

0xa19c,	// (0x00076657) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007b94d) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007b94d) msg_body_pane_t

0x2b46,	// (0x0006f001) main_viewer_pane_g1_ParamLimits

0x2b46,	// (0x0006f001) main_viewer_pane_g1

0x2b54,	// (0x0006f00f) main_viewer_pane_g2_ParamLimits

0x2b54,	// (0x0006f00f) main_viewer_pane_g2

0x2b62,	// (0x0006f01d) main_viewer_pane_g3_ParamLimits

0x2b62,	// (0x0006f01d) main_viewer_pane_g3

0x2b71,	// (0x0006f02c) main_viewer_pane_g4_ParamLimits

0x2b71,	// (0x0006f02c) main_viewer_pane_g4

0x966e,	// (0x00075b29) main_viewer_pane_g5_ParamLimits

0x966e,	// (0x00075b29) main_viewer_pane_g5

0x966e,	// (0x00075b29) main_viewer_pane_g7_ParamLimits

0x966e,	// (0x00075b29) main_viewer_pane_g7

0xae25,	// (0x000772e0) main_viewer_pane_g8_ParamLimits

0xae25,	// (0x000772e0) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007b95d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007b95d) main_viewer_pane_g

0xb529,	// (0x000779e4) viewer_content_pane_ParamLimits

0xb529,	// (0x000779e4) viewer_content_pane

0x2bad,	// (0x0006f068) main_postcard_pane_g1_ParamLimits

0x2bad,	// (0x0006f068) main_postcard_pane_g1

0x2bc3,	// (0x0006f07e) main_postcard_pane_g2_ParamLimits

0x2bc3,	// (0x0006f07e) main_postcard_pane_g2

0x2bd9,	// (0x0006f094) main_postcard_pane_g3_ParamLimits

0x2bd9,	// (0x0006f094) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007b96e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007b96e) main_postcard_pane_g

0x2bf0,	// (0x0006f0ab) main_postcard_pane_g4

0xc840,	// (0x00078cfb) smil_status_volume_pane_g2

0x2c33,	// (0x0006f0ee) postcard_pane_ParamLimits

0x2c33,	// (0x0006f0ee) postcard_pane

0xb537,	// (0x000779f2) postcard_pane_g1_ParamLimits

0xb537,	// (0x000779f2) postcard_pane_g1

0x2c75,	// (0x0006f130) postcard_pane_g2_ParamLimits

0x2c75,	// (0x0006f130) postcard_pane_g2

0x2c81,	// (0x0006f13c) postcard_pane_g3_ParamLimits

0x2c81,	// (0x0006f13c) postcard_pane_g3

0xb545,	// (0x00077a00) postcard_pane_g4_ParamLimits

0xb545,	// (0x00077a00) postcard_pane_g4

0x2c8d,	// (0x0006f148) postcard_pane_g5_ParamLimits

0x2c8d,	// (0x0006f148) postcard_pane_g5

0x2ca2,	// (0x0006f15d) postcard_pane_g6_ParamLimits

0x2ca2,	// (0x0006f15d) postcard_pane_g6

0xb537,	// (0x000779f2) postcard_pane_g7_ParamLimits

0xb537,	// (0x000779f2) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007b97b) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007b97b) postcard_pane_g

0x2cb6,	// (0x0006f171) main_mp2_pane_g1_ParamLimits

0x2cb6,	// (0x0006f171) main_mp2_pane_g1

0x2cc2,	// (0x0006f17d) main_mp2_pane_g2_ParamLimits

0x2cc2,	// (0x0006f17d) main_mp2_pane_g2

0x2cce,	// (0x0006f189) main_mp2_pane_g3_ParamLimits

0x2cce,	// (0x0006f189) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007b98a) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007b98a) main_mp2_pane_g

0x2cda,	// (0x0006f195) main_mp2_pane_t1_ParamLimits

0x2cda,	// (0x0006f195) main_mp2_pane_t1

0x2cef,	// (0x0006f1aa) main_mp2_pane_t2_ParamLimits

0x2cef,	// (0x0006f1aa) main_mp2_pane_t2

0x2d01,	// (0x0006f1bc) main_mp2_pane_t3_ParamLimits

0x2d01,	// (0x0006f1bc) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007b991) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007b991) main_mp2_pane_t

0xb553,	// (0x00077a0e) pec_content_pane_ParamLimits

0xb553,	// (0x00077a0e) pec_content_pane

0xaaac,	// (0x00076f67) scroll_pane_cp015

0xb565,	// (0x00077a20) pec_attribute_pane_ParamLimits

0xb565,	// (0x00077a20) pec_attribute_pane

0x2d13,	// (0x0006f1ce) pec_content_pane_g1_ParamLimits

0x2d13,	// (0x0006f1ce) pec_content_pane_g1

0xb575,	// (0x00077a30) pec_content_pane_t1_ParamLimits

0xb575,	// (0x00077a30) pec_content_pane_t1

0xb587,	// (0x00077a42) pec_content_pane_t2_ParamLimits

0xb587,	// (0x00077a42) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007b998) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007b998) pec_content_pane_t

0x2d1f,	// (0x0006f1da) list_single_graphic_pane_cp01_ParamLimits

0x2d1f,	// (0x0006f1da) list_single_graphic_pane_cp01

0x9e7c,	// (0x00076337) bg_popup_sub_pane_cp04

0xb599,	// (0x00077a54) popup_mup_playback_window_g1

0xb5a5,	// (0x00077a60) popup_mup_playback_window_t1

0xb5ba,	// (0x00077a75) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007b99d) popup_mup_playback_window_t

0xb5f1,	// (0x00077aac) main_image_pane_g1_ParamLimits

0xb5f1,	// (0x00077aac) main_image_pane_g1

0xb634,	// (0x00077aef) scroll_pane_cp018_ParamLimits

0xb634,	// (0x00077aef) scroll_pane_cp018

0xb64c,	// (0x00077b07) scroll_pane_cp016_ParamLimits

0xb64c,	// (0x00077b07) scroll_pane_cp016

0x2dee,	// (0x0006f2a9) smil2_image_pane_ParamLimits

0x2dee,	// (0x0006f2a9) smil2_image_pane

0x2e22,	// (0x0006f2dd) smil2_root_pane_ParamLimits

0x2e22,	// (0x0006f2dd) smil2_root_pane

0x2e5a,	// (0x0006f315) smil2_text_pane_ParamLimits

0x2e5a,	// (0x0006f315) smil2_text_pane

0x9c21,	// (0x000760dc) bg_list_pane_cp06

0xb688,	// (0x00077b43) grid_radio_pane

0x9c21,	// (0x000760dc) bg_popup_window_pane_cp06

0xb690,	// (0x00077b4b) main_fmradio_pane_t1

0xaffd,	// (0x000774b8) heading_pane_cp04

0xb69e,	// (0x00077b59) main_fmradio_pane_t2

0xc676,	// (0x00078b31) popup_cale_lunar_info_window_g1

0xb6ac,	// (0x00077b67) main_fmradio_pane_t3

0xc67e,	// (0x00078b39) popup_cale_lunar_info_window_g2

0xb6ba,	// (0x00077b75) main_fmradio_pane_t4

0x0001,

0xb6c8,	// (0x00077b83) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007ba78) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007b9b2) main_fmradio_pane_t

0xb6d6,	// (0x00077b91) wait_bar_pane_cp03

0xb6de,	// (0x00077b99) cell_fmradio_pane_ParamLimits

0xb6de,	// (0x00077b99) cell_fmradio_pane

0xb537,	// (0x000779f2) cell_fmradio_pane_g1_ParamLimits

0xb537,	// (0x000779f2) cell_fmradio_pane_g1

0x9c21,	// (0x000760dc) grid_highlight_pane_cp011

0xb6f1,	// (0x00077bac) poc_content_pane_ParamLimits

0xb6f1,	// (0x00077bac) poc_content_pane

0xb703,	// (0x00077bbe) scroll_pane_cp019

0x2eda,	// (0x0006f395) popup_call_poc_act_window_ParamLimits

0x2eda,	// (0x0006f395) popup_call_poc_act_window

0x2efe,	// (0x0006f3b9) popup_call_poc_inact_window_ParamLimits

0x2efe,	// (0x0006f3b9) popup_call_poc_inact_window

0xf594,	// (0x0007ba4f) bg_popup_call_poc_act_pane_g

0xc5ee,	// (0x00078aa9) bg_popup_call_poc_inact_pane_g1

0xc5f6,	// (0x00078ab1) bg_popup_call_poc_inact_pane_g2

0xb70b,	// (0x00077bc6) popup_call_poc_act_window_g2

0xc5fe,	// (0x00078ab9) bg_popup_call_poc_inact_pane_g3

0xc606,	// (0x00078ac1) bg_popup_call_poc_inact_pane_g4

0xc60e,	// (0x00078ac9) bg_popup_call_poc_inact_pane_g5

0xb713,	// (0x00077bce) popup_call_poc_act_window_t1_ParamLimits

0xb713,	// (0x00077bce) popup_call_poc_act_window_t1

0xb73b,	// (0x00077bf6) popup_call_poc_act_window_t2_ParamLimits

0xb73b,	// (0x00077bf6) popup_call_poc_act_window_t2

0xb763,	// (0x00077c1e) popup_call_poc_act_window_t3_ParamLimits

0xb763,	// (0x00077c1e) popup_call_poc_act_window_t3

0xb78b,	// (0x00077c46) popup_call_poc_act_window_t4_ParamLimits

0xb78b,	// (0x00077c46) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007b9bd) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007b9bd) popup_call_poc_act_window_t

0xc616,	// (0x00078ad1) bg_popup_call_poc_inact_pane_g6

0xc61e,	// (0x00078ad9) bg_popup_call_poc_inact_pane_g7

0xc626,	// (0x00078ae1) bg_popup_call_poc_inact_pane_g8

0xb79d,	// (0x00077c58) popup_call_poc_inact_window_g2

0xc62e,	// (0x00078ae9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007ba3c) bg_popup_call_poc_inact_pane_g

0xb7a5,	// (0x00077c60) popup_call_poc_inact_window_t1_ParamLimits

0xb7a5,	// (0x00077c60) popup_call_poc_inact_window_t1

0xb7ba,	// (0x00077c75) popup_call_poc_inact_window_t2_ParamLimits

0xb7ba,	// (0x00077c75) popup_call_poc_inact_window_t2

0xb7cf,	// (0x00077c8a) popup_call_poc_inact_window_t3_ParamLimits

0xb7cf,	// (0x00077c8a) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007b9c6) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007b9c6) popup_call_poc_inact_window_t

0xc7b3,	// (0x00078c6e) context_pane_ParamLimits

0x3731,	// (0x0006fbec) signal_pane_ParamLimits

0xa903,	// (0x00076dbe) main_call2_pane

0x96b9,	// (0x00075b74) popup_phob_thumbnail2_window_ParamLimits

0x96b9,	// (0x00075b74) popup_phob_thumbnail2_window

0x9656,	// (0x00075b11) aid_hotspot_pointer_arrow_pane

0x965e,	// (0x00075b19) aid_hotspot_pointer_hand_pane

0x3249,	// (0x0006f704) phob_pre_status_pane_g5

0x0ed4,	// (0x0006d38f) cams_zoom_pane_ParamLimits

0x0ee3,	// (0x0006d39e) image_vga_pane_ParamLimits

0x0efd,	// (0x0006d3b8) main_camera_pane_g1_ParamLimits

0x0f0f,	// (0x0006d3ca) main_camera_pane_g2_ParamLimits

0x0f1f,	// (0x0006d3da) main_camera_pane_g3_ParamLimits

0x0f31,	// (0x0006d3ec) main_camera_pane_g4_ParamLimits

0x0f43,	// (0x0006d3fe) main_camera_pane_g5_ParamLimits

0x0f55,	// (0x0006d410) main_camera_pane_g6_ParamLimits

0x0f67,	// (0x0006d422) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007b6c5) main_camera_pane_g_ParamLimits

0x0f79,	// (0x0006d434) main_camera_pane_t1_ParamLimits

0x0f8f,	// (0x0006d44a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007b6d6) main_camera_pane_t_ParamLimits

0x9e7c,	// (0x00076337) bg_popup_preview_window_pane_cp01_ParamLimits

0x9e7c,	// (0x00076337) bg_popup_preview_window_pane_cp01

0xb7e4,	// (0x00077c9f) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e4,	// (0x00077c9f) popup_phob_thumbnail2_window_g1

0x9c21,	// (0x000760dc) call2_cli_visual_pane

0x2f32,	// (0x0006f3ed) popup_call2_audio_conf_window_ParamLimits

0x2f32,	// (0x0006f3ed) popup_call2_audio_conf_window

0x2f52,	// (0x0006f40d) popup_call2_audio_first_window_ParamLimits

0x2f52,	// (0x0006f40d) popup_call2_audio_first_window

0x2fe8,	// (0x0006f4a3) popup_call2_audio_in_window_ParamLimits

0x2fe8,	// (0x0006f4a3) popup_call2_audio_in_window

0x3030,	// (0x0006f4eb) popup_call2_audio_out_window_ParamLimits

0x3030,	// (0x0006f4eb) popup_call2_audio_out_window

0x309a,	// (0x0006f555) popup_call2_audio_second_window_ParamLimits

0x309a,	// (0x0006f555) popup_call2_audio_second_window

0x3100,	// (0x0006f5bb) popup_call2_audio_wait_window_ParamLimits

0x3100,	// (0x0006f5bb) popup_call2_audio_wait_window

0x9c21,	// (0x000760dc) bg_popup_call2_act_pane_cp03

0x9e5e,	// (0x00076319) list_conf_pane_cp

0xb7f0,	// (0x00077cab) popup_call2_audio_conf_window_t1

0xb7fe,	// (0x00077cb9) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fe,	// (0x00077cb9) list_single_graphic_popup_conf2_pane

0xb091,	// (0x0007754c) list_highlight_pane_cp04

0xb811,	// (0x00077ccc) list_single_graphic_popup_conf2_pane_g1

0xb0a2,	// (0x0007755d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007b9cd) list_single_graphic_popup_conf2_pane_g

0xb81b,	// (0x00077cd6) list_single_graphic_popup_conf2_pane_t1

0xb829,	// (0x00077ce4) bg_popup_call2_act_pane_cp01_ParamLimits

0xb829,	// (0x00077ce4) bg_popup_call2_act_pane_cp01

0xb8b3,	// (0x00077d6e) call_type_pane_cp05_ParamLimits

0xb8b3,	// (0x00077d6e) call_type_pane_cp05

0xb907,	// (0x00077dc2) popup_call2_audio_second_window_g1_ParamLimits

0xb907,	// (0x00077dc2) popup_call2_audio_second_window_g1

0xb95b,	// (0x00077e16) popup_call2_audio_second_window_g2_ParamLimits

0xb95b,	// (0x00077e16) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007b9d2) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007b9d2) popup_call2_audio_second_window_g

0xb9c0,	// (0x00077e7b) popup_call2_audio_second_window_t1_ParamLimits

0xb9c0,	// (0x00077e7b) popup_call2_audio_second_window_t1

0xba7b,	// (0x00077f36) popup_call2_audio_second_window_t2_ParamLimits

0xba7b,	// (0x00077f36) popup_call2_audio_second_window_t2

0xbace,	// (0x00077f89) popup_call2_audio_second_window_t3_ParamLimits

0xbace,	// (0x00077f89) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007b9d9) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007b9d9) popup_call2_audio_second_window_t

0x9c21,	// (0x000760dc) bg_popup_call2_in_pane_cp02

0x9c2b,	// (0x000760e6) call_type_pane_cp04

0x9c33,	// (0x000760ee) popup_call2_audio_wait_window_g1

0x9c3b,	// (0x000760f6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007b5b4) popup_call2_audio_wait_window_g

0x9c43,	// (0x000760fe) popup_call2_audio_wait_window_t3

0xbbc1,	// (0x0007807c) bg_popup_call2_act_pane_ParamLimits

0xbbc1,	// (0x0007807c) bg_popup_call2_act_pane

0xbc81,	// (0x0007813c) call_type_pane_cp03_ParamLimits

0xbc81,	// (0x0007813c) call_type_pane_cp03

0xbce5,	// (0x000781a0) popup_call2_audio_first_window_g1_ParamLimits

0xbce5,	// (0x000781a0) popup_call2_audio_first_window_g1

0xbd55,	// (0x00078210) popup_call2_audio_first_window_g2_ParamLimits

0xbd55,	// (0x00078210) popup_call2_audio_first_window_g2

0xb3bb,	// (0x00077876) popup_call2_audio_first_window_g3_ParamLimits

0xb3bb,	// (0x00077876) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007b9e2) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007b9e2) popup_call2_audio_first_window_g

0xbe33,	// (0x000782ee) popup_call2_audio_first_window_t1_ParamLimits

0xbe33,	// (0x000782ee) popup_call2_audio_first_window_t1

0xbf36,	// (0x000783f1) popup_call2_audio_first_window_t4_ParamLimits

0xbf36,	// (0x000783f1) popup_call2_audio_first_window_t4

0xc019,	// (0x000784d4) popup_call2_audio_first_window_t5_ParamLimits

0xc019,	// (0x000784d4) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007b9ed) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007b9ed) popup_call2_audio_first_window_t

0x9e74,	// (0x0007632f) bg_popup_call2_act_pane_g1

0xc686,	// (0x00078b41) popup_cale_lunar_info_window_t1

0xc694,	// (0x00078b4f) popup_cale_lunar_info_window_t2

0xc6a2,	// (0x00078b5d) popup_cale_lunar_info_window_t3

0x9c21,	// (0x000760dc) bg_popup_call2_bubble_pane

0xc11a,	// (0x000785d5) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11a,	// (0x000785d5) bg_popup_call2_in_pane_cp01

0x91a2,	// (0x0007565d) call_type_pane_cp02

0xc162,	// (0x0007861d) popup_call2_audio_out_window_g1_ParamLimits

0xc162,	// (0x0007861d) popup_call2_audio_out_window_g1

0xc18e,	// (0x00078649) popup_call2_audio_out_window_g2_ParamLimits

0xc18e,	// (0x00078649) popup_call2_audio_out_window_g2

0xc1b6,	// (0x00078671) popup_call2_audio_out_window_g3_ParamLimits

0xc1b6,	// (0x00078671) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007b9f6) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007b9f6) popup_call2_audio_out_window_g

0xc1f1,	// (0x000786ac) popup_call2_audio_out_window_t1_ParamLimits

0xc1f1,	// (0x000786ac) popup_call2_audio_out_window_t1

0xc250,	// (0x0007870b) popup_call2_audio_out_window_t2_ParamLimits

0xc250,	// (0x0007870b) popup_call2_audio_out_window_t2

0xc2a4,	// (0x0007875f) popup_call2_audio_out_window_t3_ParamLimits

0xc2a4,	// (0x0007875f) popup_call2_audio_out_window_t3

0xc2ba,	// (0x00078775) popup_call2_audio_out_window_t4_ParamLimits

0xc2ba,	// (0x00078775) popup_call2_audio_out_window_t4

0xc2d0,	// (0x0007878b) popup_call2_audio_out_window_t5_ParamLimits

0xc2d0,	// (0x0007878b) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007b9ff) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007b9ff) popup_call2_audio_out_window_t

0xc334,	// (0x000787ef) bg_popup_call2_in_pane_ParamLimits

0xc334,	// (0x000787ef) bg_popup_call2_in_pane

0xc390,	// (0x0007884b) popup_call2_audio_in_window_g1_ParamLimits

0xc390,	// (0x0007884b) popup_call2_audio_in_window_g1

0xc3c8,	// (0x00078883) popup_call2_audio_in_window_g2_ParamLimits

0xc3c8,	// (0x00078883) popup_call2_audio_in_window_g2

0xc400,	// (0x000788bb) popup_call2_audio_in_window_g3_ParamLimits

0xc400,	// (0x000788bb) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007ba0c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007ba0c) popup_call2_audio_in_window_g

0xc458,	// (0x00078913) popup_call2_audio_in_window_t1_ParamLimits

0xc458,	// (0x00078913) popup_call2_audio_in_window_t1

0xc4d8,	// (0x00078993) popup_call2_audio_in_window_t2_ParamLimits

0xc4d8,	// (0x00078993) popup_call2_audio_in_window_t2

0xc558,	// (0x00078a13) popup_call2_audio_in_window_t3_ParamLimits

0xc558,	// (0x00078a13) popup_call2_audio_in_window_t3

0xc572,	// (0x00078a2d) popup_call2_audio_in_window_t4_ParamLimits

0xc572,	// (0x00078a2d) popup_call2_audio_in_window_t4

0xc584,	// (0x00078a3f) popup_call2_audio_in_window_t5_ParamLimits

0xc584,	// (0x00078a3f) popup_call2_audio_in_window_t5

0xc599,	// (0x00078a54) popup_call2_audio_in_window_t6_ParamLimits

0xc599,	// (0x00078a54) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007ba15) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007ba15) popup_call2_audio_in_window_t

0x9e74,	// (0x0007632f) bg_popup_call2_in_pane_g1

0xc6b0,	// (0x00078b6b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007ba7d) popup_cale_lunar_info_window_t

0x9e7c,	// (0x00076337) bg_popup_call2_rect_pane_ParamLimits

0x9e7c,	// (0x00076337) bg_popup_call2_rect_pane

0x9c21,	// (0x000760dc) call2_cli_visual_graphic_pane

0x9c21,	// (0x000760dc) call2_cli_visual_text_pane

0x96e0,	// (0x00075b9b) smil_status_volume_pane_g3

0x0002,

0x9fb5,	// (0x00076470) call2_cli_visual_graphic_pane_g1

0x9fb5,	// (0x00076470) call2_cli_visual_graphic_pane_g2

0x9fb5,	// (0x00076470) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007ba22) call2_cli_visual_graphic_pane_g

0xc5ae,	// (0x00078a69) bg_popup_call2_rect_pane_g1

0xa828,	// (0x00076ce3) bg_popup_call2_rect_pane_g2

0xc5b6,	// (0x00078a71) bg_popup_call2_rect_pane_g3

0xc5be,	// (0x00078a79) bg_popup_call2_rect_pane_g4

0xc5c6,	// (0x00078a81) bg_popup_call2_rect_pane_g5

0xc5ce,	// (0x00078a89) bg_popup_call2_rect_pane_g6

0xc5d6,	// (0x00078a91) bg_popup_call2_rect_pane_g7

0xc5de,	// (0x00078a99) bg_popup_call2_rect_pane_g8

0xc5e6,	// (0x00078aa1) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ba29) bg_popup_call2_rect_pane_g

0xc5ee,	// (0x00078aa9) bg_popup_call2_bubble_pane_g1

0xc5f6,	// (0x00078ab1) bg_popup_call2_bubble_pane_g2

0xc5fe,	// (0x00078ab9) bg_popup_call2_bubble_pane_g3

0xc606,	// (0x00078ac1) bg_popup_call2_bubble_pane_g4

0xc60e,	// (0x00078ac9) bg_popup_call2_bubble_pane_g5

0xc616,	// (0x00078ad1) bg_popup_call2_bubble_pane_g6

0xc61e,	// (0x00078ad9) bg_popup_call2_bubble_pane_g7

0xc626,	// (0x00078ae1) bg_popup_call2_bubble_pane_g8

0xc62e,	// (0x00078ae9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007ba3c) bg_popup_call2_bubble_pane_g

0x0816,	// (0x0006ccd1) aid_cale_week_size_cell_pane

0x0fa7,	// (0x0006d462) aid_cams_cif_uncrop_pane_ParamLimits

0x0fa7,	// (0x0006d462) aid_cams_cif_uncrop_pane

0x115c,	// (0x0006d617) aid_cams_size_cell_ParamLimits

0x115c,	// (0x0006d617) aid_cams_size_cell

0x1170,	// (0x0006d62b) grid_cams_pane_ParamLimits

0x118a,	// (0x0006d645) linegrid_cams_pane_ParamLimits

0x12e6,	// (0x0006d7a1) call_video_pane_t1

0x1304,	// (0x0006d7bf) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007b729) call_video_pane_t

0x1733,	// (0x0006dbee) aid_cale_month_size_cell_pane_ParamLimits

0x1733,	// (0x0006dbee) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007bac6) smil_status_volume_pane_g

0x96ed,	// (0x00075ba8) volume_smil_pane_ParamLimits

0x9045,	// (0x00075500) aid_popup2_width_pane

0x077b,	// (0x0006cc36) cell_qdial_pane_g4_ParamLimits

0x077b,	// (0x0006cc36) cell_qdial_pane_g4

0x25b8,	// (0x0006ea73) aid_blid_cardinal_pane_ParamLimits

0x25c4,	// (0x0006ea7f) aid_blid_destination_pane_ParamLimits

0x25c4,	// (0x0006ea7f) aid_blid_destination_pane

0x9e7c,	// (0x00076337) bg_popup_call_poc_act_pane_ParamLimits

0x9e7c,	// (0x00076337) bg_popup_call_poc_act_pane

0x9e7c,	// (0x00076337) bg_popup_call_poc_inact_pane_ParamLimits

0x9e7c,	// (0x00076337) bg_popup_call_poc_inact_pane

0xc636,	// (0x00078af1) bg_popup_call_poc_act_pane_g1

0xc63e,	// (0x00078af9) bg_popup_call_poc_act_pane_g2

0xc646,	// (0x00078b01) bg_popup_call_poc_act_pane_g3

0xc606,	// (0x00078ac1) bg_popup_call_poc_act_pane_g4

0xc60e,	// (0x00078ac9) bg_popup_call_poc_act_pane_g5

0xc64e,	// (0x00078b09) bg_popup_call_poc_act_pane_g6

0xc61e,	// (0x00078ad9) bg_popup_call_poc_act_pane_g7

0xc656,	// (0x00078b11) bg_popup_call_poc_act_pane_g8

0x9c21,	// (0x000760dc) main_usb_pane

0x9694,	// (0x00075b4f) popup_cale_lunar_info_window

0x15ce,	// (0x0006da89) im_reading_pane_t1_ParamLimits

0xaa04,	// (0x00076ebf) list_im_pane_ParamLimits

0xaa15,	// (0x00076ed0) scroll_pane_cp07_ParamLimits

0x9c21,	// (0x000760dc) grid_highlight_pane_cp012

0x9e7c,	// (0x00076337) mup_scale_pane_ParamLimits

0xb537,	// (0x000779f2) main_usb_pane_g1_ParamLimits

0xb537,	// (0x000779f2) main_usb_pane_g1

0x315e,	// (0x0006f619) main_usb_pane_g2_ParamLimits

0x315e,	// (0x0006f619) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007ba66) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007ba66) main_usb_pane_g

0x3174,	// (0x0006f62f) main_usb_pane_t1_ParamLimits

0x3174,	// (0x0006f62f) main_usb_pane_t1

0x3186,	// (0x0006f641) main_usb_pane_t2_ParamLimits

0x3186,	// (0x0006f641) main_usb_pane_t2

0x3198,	// (0x0006f653) main_usb_pane_t3_ParamLimits

0x3198,	// (0x0006f653) main_usb_pane_t3

0x31aa,	// (0x0006f665) main_usb_pane_t4_ParamLimits

0x31aa,	// (0x0006f665) main_usb_pane_t4

0x31bc,	// (0x0006f677) main_usb_pane_t5_ParamLimits

0x31bc,	// (0x0006f677) main_usb_pane_t5

0x31ce,	// (0x0006f689) main_usb_pane_t6_ParamLimits

0x31ce,	// (0x0006f689) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007ba6b) main_usb_pane_t_ParamLimits

0x2565,	// (0x0006ea20) aid_text_placing

0x256e,	// (0x0006ea29) main_location2_pane_t1_ParamLimits

0x2580,	// (0x0006ea3b) main_location2_pane_t2_ParamLimits

0x2592,	// (0x0006ea4d) main_location2_pane_t3_ParamLimits

0x25a6,	// (0x0006ea61) main_location2_pane_t4_ParamLimits

0x25a6,	// (0x0006ea61) main_location2_pane_t4

0xf3cf,	// (0x0007b88a) main_location2_pane_t_ParamLimits

0x9eb8,	// (0x00076373) find_pinb_pane_g2_ParamLimits

0x9eb8,	// (0x00076373) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007b5da) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007b5da) find_pinb_pane_g

0x9ec4,	// (0x0007637f) find_pinb_pane_t1_ParamLimits

0x9ed6,	// (0x00076391) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007b5df) find_pinb_pane_t_ParamLimits

0x9c21,	// (0x000760dc) main_call3_pane

0x1c16,	// (0x0006e0d1) cale_month_day_heading_pane_t1_ParamLimits

0x1c9c,	// (0x0006e157) cale_month_day_heading_pane_t2_ParamLimits

0x1d2d,	// (0x0006e1e8) cale_month_day_heading_pane_t3_ParamLimits

0x1dbe,	// (0x0006e279) cale_month_day_heading_pane_t4_ParamLimits

0x1e57,	// (0x0006e312) cale_month_day_heading_pane_t5_ParamLimits

0x1ef8,	// (0x0006e3b3) cale_month_day_heading_pane_t6_ParamLimits

0x1f99,	// (0x0006e454) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007b761) cale_month_day_heading_pane_t_ParamLimits

0xac5f,	// (0x0007711a) smil_status_volume_pane

0x2c51,	// (0x0006f10c) postcard_address_pane_ParamLimits

0x2c51,	// (0x0006f10c) postcard_address_pane

0x2c63,	// (0x0006f11e) postcard_message_pane_ParamLimits

0x2c63,	// (0x0006f11e) postcard_message_pane

0x313a,	// (0x0006f5f5) call2_cli_visual_pane_t1_ParamLimits

0x313a,	// (0x0006f5f5) call2_cli_visual_pane_t1

0x3960,	// (0x0006fe1b) postcard_message_pane_t1_ParamLimits

0x3960,	// (0x0006fe1b) postcard_message_pane_t1

0x3949,	// (0x0006fe04) postcard_address_pane_t1_ParamLimits

0x3949,	// (0x0006fe04) postcard_address_pane_t1

0x3935,	// (0x0006fdf0) popup_call3_audio_in_window_ParamLimits

0x3935,	// (0x0006fdf0) popup_call3_audio_in_window

0x37c2,	// (0x0006fc7d) bg_popup_call3_in_pane_ParamLimits

0x37c2,	// (0x0006fc7d) bg_popup_call3_in_pane

0x3836,	// (0x0006fcf1) popup_call3_audio_in_window_g1_ParamLimits

0x3836,	// (0x0006fcf1) popup_call3_audio_in_window_g1

0x3856,	// (0x0006fd11) popup_call3_audio_in_window_g2_ParamLimits

0x3856,	// (0x0006fd11) popup_call3_audio_in_window_g2

0x3876,	// (0x0006fd31) popup_call3_audio_in_window_g3_ParamLimits

0x3876,	// (0x0006fd31) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007bacd) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007bacd) popup_call3_audio_in_window_g

0x38a7,	// (0x0006fd62) popup_call3_audio_in_window_t1_ParamLimits

0x38a7,	// (0x0006fd62) popup_call3_audio_in_window_t1

0x38e5,	// (0x0006fda0) popup_call3_audio_in_window_t2_ParamLimits

0x38e5,	// (0x0006fda0) popup_call3_audio_in_window_t2

0x3923,	// (0x0006fdde) popup_call3_audio_in_window_t3_ParamLimits

0x3923,	// (0x0006fdde) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007bad6) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007bad6) popup_call3_audio_in_window_t

0xa903,	// (0x00076dbe) bg_popup_call3_rect_pane

0xc5ae,	// (0x00078a69) bg_popup_call3_rect_pane_g1

0xa828,	// (0x00076ce3) bg_popup_call3_rect_pane_g2

0xc5b6,	// (0x00078a71) bg_popup_call3_rect_pane_g3

0xc5be,	// (0x00078a79) bg_popup_call3_rect_pane_g4

0xc5c6,	// (0x00078a81) bg_popup_call3_rect_pane_g5

0xc5ce,	// (0x00078a89) bg_popup_call3_rect_pane_g6

0xc5d6,	// (0x00078a91) bg_popup_call3_rect_pane_g7

0x28ac,	// (0x0006ed67) mup_visualizer_osc_pane

0xb459,	// (0x00077914) mup_visualizer_spec_pane

0x37f2,	// (0x0006fcad) call3_video_qcif_pane_ParamLimits

0x37f2,	// (0x0006fcad) call3_video_qcif_pane

0x3803,	// (0x0006fcbe) call3_video_qcif_uncrop_pane_ParamLimits

0x3803,	// (0x0006fcbe) call3_video_qcif_uncrop_pane

0x3811,	// (0x0006fccc) call3_video_subqcif_pane_ParamLimits

0x3811,	// (0x0006fccc) call3_video_subqcif_pane

0x3825,	// (0x0006fce0) call3_video_subqcif_uncrop_pane_ParamLimits

0x3825,	// (0x0006fce0) call3_video_subqcif_uncrop_pane

0x3896,	// (0x0006fd51) popup_call3_audio_in_window_g4_ParamLimits

0x3896,	// (0x0006fd51) popup_call3_audio_in_window_g4

0x37b1,	// (0x0006fc6c) mup_spec_half_pane

0x37ba,	// (0x0006fc75) mup_spec_half_pane_cp

0xc813,	// (0x00078cce) mup_osc_middle_pane

0xc81c,	// (0x00078cd7) mup_visualizer_osc_pane_g1

0x3791,	// (0x0006fc4c) mup_spec_bar_pane_ParamLimits

0x3791,	// (0x0006fc4c) mup_spec_bar_pane

0xc800,	// (0x00078cbb) mup_spec_bar_pane_g1

0xc80a,	// (0x00078cc5) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007bac1) mup_spec_bar_pane_g

0x0816,	// (0x0006ccd1) aid_cale_week_size_cell_pane_ParamLimits

0x0830,	// (0x0006cceb) bg_cale_heading_pane_ParamLimits

0xa865,	// (0x00076d20) bg_cale_pane_cp01_ParamLimits

0x084e,	// (0x0006cd09) cale_week_corner_pane_ParamLimits

0x086d,	// (0x0006cd28) cale_week_day_heading_pane_ParamLimits

0x0890,	// (0x0006cd4b) cale_week_scroll_pane_g1_ParamLimits

0x08a9,	// (0x0006cd64) cale_week_scroll_pane_g2_ParamLimits

0x08c1,	// (0x0006cd7c) cale_week_scroll_pane_g3_ParamLimits

0x08d9,	// (0x0006cd94) cale_week_scroll_pane_g4_ParamLimits

0x08f1,	// (0x0006cdac) cale_week_scroll_pane_g5_ParamLimits

0x090d,	// (0x0006cdc8) cale_week_scroll_pane_g6_ParamLimits

0x092d,	// (0x0006cde8) cale_week_scroll_pane_g7_ParamLimits

0x094d,	// (0x0006ce08) cale_week_scroll_pane_g8_ParamLimits

0x0971,	// (0x0006ce2c) cale_week_scroll_pane_g9_ParamLimits

0x0989,	// (0x0006ce44) cale_week_scroll_pane_g10_ParamLimits

0x09a1,	// (0x0006ce5c) cale_week_scroll_pane_g11_ParamLimits

0x09b9,	// (0x0006ce74) cale_week_scroll_pane_g12_ParamLimits

0x09d1,	// (0x0006ce8c) cale_week_scroll_pane_g13_ParamLimits

0x09d1,	// (0x0006ce8c) cale_week_scroll_pane_g14_ParamLimits

0x09d1,	// (0x0006ce8c) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007b66b) cale_week_scroll_pane_g_ParamLimits

0x0a0d,	// (0x0006cec8) cale_week_time_pane_ParamLimits

0x0a31,	// (0x0006ceec) grid_cale_week_pane_ParamLimits

0xa882,	// (0x00076d3d) listscroll_cale_week_pane_t1

0xa894,	// (0x00076d4f) scroll_pane_cp08_ParamLimits

0x1794,	// (0x0006dc4f) cale_month_corner_pane_ParamLimits

0xac35,	// (0x000770f0) cale_month_pane_t1

0x1bb4,	// (0x0006e06f) cale_month_week_pane_ParamLimits

0x23d6,	// (0x0006e891) popup_call_status_window_g1_ParamLimits

0x23ea,	// (0x0006e8a5) popup_call_status_window_g2_ParamLimits

0x23fe,	// (0x0006e8b9) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007b811) popup_call_status_window_g_ParamLimits

0xafed,	// (0x000774a8) aid_call2_pane

0x2afe,	// (0x0006efb9) msg_header_pane_g1

0x2c51,	// (0x0006f10c) postcard_address2_pane_ParamLimits

0x2c51,	// (0x0006f10c) postcard_address2_pane

0x2c63,	// (0x0006f11e) postcard_message2_pane_ParamLimits

0x2c63,	// (0x0006f11e) postcard_message2_pane

0x373f,	// (0x0006fbfa) message2_row_pane_ParamLimits

0x373f,	// (0x0006fbfa) message2_row_pane

0x375e,	// (0x0006fc19) address2_row_pane_ParamLimits

0x375e,	// (0x0006fc19) address2_row_pane

0xc7ce,	// (0x00078c89) postcard_message2_row_pane_g1

0xc7d6,	// (0x00078c91) postcard_message2_row_pane_t1

0xc7ce,	// (0x00078c89) address2_row_pane_g1

0xc7d6,	// (0x00078c91) address2_row_pane_t1

0x0e51,	// (0x0006d30c) aid_size_cell_vorec

0x9c21,	// (0x000760dc) main_rss_pane

0x3771,	// (0x0006fc2c) rss_list_single_pane_ParamLimits

0x3771,	// (0x0006fc2c) rss_list_single_pane

0xc7e4,	// (0x00078c9f) rss_list_single_pane_t1

0xc7f2,	// (0x00078cad) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007babc) rss_list_single_pane_t

0x9c21,	// (0x000760dc) main_camera2_pane

0x9c21,	// (0x000760dc) main_video2_pane

0x39d9,	// (0x0006fe94) cams_zoom_pane_cp2_ParamLimits

0x39d9,	// (0x0006fe94) cams_zoom_pane_cp2

0x39f9,	// (0x0006feb4) image2_vga_pane_ParamLimits

0x39f9,	// (0x0006feb4) image2_vga_pane

0x3a4a,	// (0x0006ff05) main_camera2_pane_g1_ParamLimits

0x3a4a,	// (0x0006ff05) main_camera2_pane_g1

0x3a6a,	// (0x0006ff25) main_camera2_pane_g2_ParamLimits

0x3a6a,	// (0x0006ff25) main_camera2_pane_g2

0x3a8a,	// (0x0006ff45) main_camera2_pane_g3_ParamLimits

0x3a8a,	// (0x0006ff45) main_camera2_pane_g3

0x3aaa,	// (0x0006ff65) main_camera2_pane_g4_ParamLimits

0x3aaa,	// (0x0006ff65) main_camera2_pane_g4

0x3aca,	// (0x0006ff85) main_camera2_pane_g5_ParamLimits

0x3aca,	// (0x0006ff85) main_camera2_pane_g5

0x3aea,	// (0x0006ffa5) main_camera2_pane_g6_ParamLimits

0x3aea,	// (0x0006ffa5) main_camera2_pane_g6

0x3b0a,	// (0x0006ffc5) main_camera2_pane_g7_ParamLimits

0x3b0a,	// (0x0006ffc5) main_camera2_pane_g7

0x3b2a,	// (0x0006ffe5) main_camera2_pane_g8_ParamLimits

0x3b2a,	// (0x0006ffe5) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007badd) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007badd) main_camera2_pane_g

0x3b6a,	// (0x00070025) main_camera2_pane_t1_ParamLimits

0x3b6a,	// (0x00070025) main_camera2_pane_t1

0x3b9f,	// (0x0007005a) main_camera2_pane_t2_ParamLimits

0x3b9f,	// (0x0007005a) main_camera2_pane_t2

0x3bc5,	// (0x00070080) main_camera2_pane_t3_ParamLimits

0x3bc5,	// (0x00070080) main_camera2_pane_t3

0x3c23,	// (0x000700de) main_camera2_pane_t4_ParamLimits

0x3c23,	// (0x000700de) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007baf0) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007baf0) main_camera2_pane_t

0x3cb5,	// (0x00070170) cams_zoom_pane_cp4_ParamLimits

0x3cb5,	// (0x00070170) cams_zoom_pane_cp4

0x3ccb,	// (0x00070186) image2_cif_pane_ParamLimits

0x3ccb,	// (0x00070186) image2_cif_pane

0x3cf6,	// (0x000701b1) image2_subqcif_pane_ParamLimits

0x3cf6,	// (0x000701b1) image2_subqcif_pane

0x3d10,	// (0x000701cb) main_video2_pane_g1_ParamLimits

0x3d10,	// (0x000701cb) main_video2_pane_g1

0x3d2a,	// (0x000701e5) main_video2_pane_g2_ParamLimits

0x3d2a,	// (0x000701e5) main_video2_pane_g2

0x3d40,	// (0x000701fb) main_video2_pane_g3_ParamLimits

0x3d40,	// (0x000701fb) main_video2_pane_g3

0x3d56,	// (0x00070211) main_video2_pane_g4_ParamLimits

0x3d56,	// (0x00070211) main_video2_pane_g4

0x3d6c,	// (0x00070227) main_video2_pane_g5_ParamLimits

0x3d6c,	// (0x00070227) main_video2_pane_g5

0x3d82,	// (0x0007023d) main_video2_pane_g6_ParamLimits

0x3d82,	// (0x0007023d) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007baff) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007baff) main_video2_pane_g

0x3d9c,	// (0x00070257) main_video2_pane_t1_ParamLimits

0x3d9c,	// (0x00070257) main_video2_pane_t1

0x3dc0,	// (0x0007027b) main_video2_pane_t2_ParamLimits

0x3dc0,	// (0x0007027b) main_video2_pane_t2

0x3e0e,	// (0x000702c9) main_video2_pane_t3_ParamLimits

0x3e0e,	// (0x000702c9) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007bb0c) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007bb0c) main_video2_pane_t

0x3289,	// (0x0006f744) call_muted_g2

0x0001,

0xf5f3,	// (0x0007baae) call_muted_g

0x9c21,	// (0x000760dc) main_mup2_pane

0x3e56,	// (0x00070311) main_mup2_pane_g1_ParamLimits

0x3e56,	// (0x00070311) main_mup2_pane_g1

0x3e62,	// (0x0007031d) main_mup2_pane_g2_ParamLimits

0x3e62,	// (0x0007031d) main_mup2_pane_g2

0x975b,	// (0x00075c16) main_mup_pane_g13_cp1

0x9763,	// (0x00075c1e) mup_volume_pane_cp1

0x3e7e,	// (0x00070339) main_mup2_pane_g4_ParamLimits

0x3e7e,	// (0x00070339) main_mup2_pane_g4

0x3e90,	// (0x0007034b) main_mup2_pane_g5_ParamLimits

0x3e90,	// (0x0007034b) main_mup2_pane_g5

0x3ea2,	// (0x0007035d) main_mup2_pane_g6_ParamLimits

0x3ea2,	// (0x0007035d) main_mup2_pane_g6

0x3eb4,	// (0x0007036f) main_mup2_pane_g7_ParamLimits

0x3eb4,	// (0x0007036f) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007bb13) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007bb13) main_mup2_pane_g

0x3ecc,	// (0x00070387) main_mup2_pane_t1_ParamLimits

0x3ecc,	// (0x00070387) main_mup2_pane_t1

0x3ee2,	// (0x0007039d) main_mup2_pane_t2_ParamLimits

0x3ee2,	// (0x0007039d) main_mup2_pane_t2

0x3ef8,	// (0x000703b3) main_mup2_pane_t3_ParamLimits

0x3ef8,	// (0x000703b3) main_mup2_pane_t3

0x3f0e,	// (0x000703c9) main_mup2_pane_t4_ParamLimits

0x3f0e,	// (0x000703c9) main_mup2_pane_t4

0x3f26,	// (0x000703e1) main_mup2_pane_t5_ParamLimits

0x3f26,	// (0x000703e1) main_mup2_pane_t5

0x3f3e,	// (0x000703f9) main_mup2_pane_t6_ParamLimits

0x3f3e,	// (0x000703f9) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007bb22) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007bb22) main_mup2_pane_t

0x3f6e,	// (0x00070429) mup2_visualizer_pane_ParamLimits

0x3f6e,	// (0x00070429) mup2_visualizer_pane

0x3f9c,	// (0x00070457) mup_progress_pane_cp_ParamLimits

0x3f9c,	// (0x00070457) mup_progress_pane_cp

0x9746,	// (0x00075c01) mup_volume_pane_cp_ParamLimits

0x9746,	// (0x00075c01) mup_volume_pane_cp

0x3fb0,	// (0x0007046b) mup2_visualizer_pane_g1_ParamLimits

0x3fb0,	// (0x0007046b) mup2_visualizer_pane_g1

0xc853,	// (0x00078d0e) mup2_visualizer_pane_g2_ParamLimits

0xc853,	// (0x00078d0e) mup2_visualizer_pane_g2

0x3fc7,	// (0x00070482) mup2_visualizer_pane_g3_ParamLimits

0x3fc7,	// (0x00070482) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007bb2f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007bb2f) mup2_visualizer_pane_g

0xb680,	// (0x00077b3b) aid_size_cell_fmradio

0x343b,	// (0x0006f8f6) aid_height_parent_landcape

0xaa93,	// (0x00076f4e) wml_content_pane_cp

0xaa9b,	// (0x00076f56) wml_tabs_pane

0xaaa4,	// (0x00076f5f) popup_wml_miniature_window

0xaaac,	// (0x00076f67) scroll_pane_cp021

0xaac0,	// (0x00076f7b) wml_content_pane_comp8

0x9c21,	// (0x000760dc) bg_popup_sub_pane_cp05

0xc871,	// (0x00078d2c) popup_wml_miniature_window_g1

0xc879,	// (0x00078d34) wml_miniature_view_pane

0x3fd3,	// (0x0007048e) aid_size_wml_view

0x3fdb,	// (0x00070496) wml_miniature_view_pane_g1

0x3fe4,	// (0x0007049f) wml_miniature_view_pane_g2

0x3fed,	// (0x000704a8) wml_miniature_view_pane_g3

0x3ff5,	// (0x000704b0) wml_miniature_view_pane_g4

0x3ffd,	// (0x000704b8) wml_miniature_view_pane_g5

0x4005,	// (0x000704c0) wml_miniature_view_pane_g6

0x400d,	// (0x000704c8) wml_miniature_view_pane_g7

0x4015,	// (0x000704d0) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007bb36) wml_miniature_view_pane_g

0xc881,	// (0x00078d3c) background_graphic_ParamLimits

0xc881,	// (0x00078d3c) background_graphic

0xc88d,	// (0x00078d48) wml_tabs_2_pane

0xc896,	// (0x00078d51) wml_tabs_3_pane_ParamLimits

0xc896,	// (0x00078d51) wml_tabs_3_pane

0xc8a8,	// (0x00078d63) wml_tabs_4_pane_ParamLimits

0xc8a8,	// (0x00078d63) wml_tabs_4_pane

0xc8be,	// (0x00078d79) wml_tabs_5_pane_ParamLimits

0xc8be,	// (0x00078d79) wml_tabs_5_pane

0xc8d8,	// (0x00078d93) wml_tabs_pane_g2_ParamLimits

0xc8d8,	// (0x00078d93) wml_tabs_pane_g2

0xc8ec,	// (0x00078da7) wml_tabs_pane_g3_ParamLimits

0xc8ec,	// (0x00078da7) wml_tabs_pane_g3

0x401d,	// (0x000704d8) wml_tabs_2_active_pane_ParamLimits

0x401d,	// (0x000704d8) wml_tabs_2_active_pane

0x4031,	// (0x000704ec) wml_tabs_2_passive_pane_ParamLimits

0x4031,	// (0x000704ec) wml_tabs_2_passive_pane

0x4045,	// (0x00070500) wml_tabs_3_active_pane_cp_ParamLimits

0x4045,	// (0x00070500) wml_tabs_3_active_pane_cp

0x405a,	// (0x00070515) wml_tabs_3_passive_pane_ParamLimits

0x405a,	// (0x00070515) wml_tabs_3_passive_pane

0x406d,	// (0x00070528) wml_tabs_3_passive_pane_cp_ParamLimits

0x406d,	// (0x00070528) wml_tabs_3_passive_pane_cp

0x4084,	// (0x0007053f) tabs_4_active_pane

0x408c,	// (0x00070547) tabs_4_passive_pane

0x4096,	// (0x00070551) tabs_4_passive_pane_cp

0x409e,	// (0x00070559) tabs_4_passive_pane_cp2

0x3156,	// (0x0006f611) aid_height_text

0x287e,	// (0x0006ed39) mup_volume_cont_pane_ParamLimits

0x287e,	// (0x0006ed39) mup_volume_cont_pane

0x0427,	// (0x0006c8e2) aid_size_cell_pinb

0x0431,	// (0x0006c8ec) aid_size_list_pinb

0x3f88,	// (0x00070443) mup2_volume_cont_pane_ParamLimits

0x3f88,	// (0x00070443) mup2_volume_cont_pane

0x9732,	// (0x00075bed) mup2_volume_cont_pane_g1_ParamLimits

0x9732,	// (0x00075bed) mup2_volume_cont_pane_g1

0x00d9,	// (0x0006c594) aid_size_cell_touch_ParamLimits

0x00d9,	// (0x0006c594) aid_size_cell_touch

0x0316,	// (0x0006c7d1) touch_pane_ParamLimits

0x0316,	// (0x0006c7d1) touch_pane

0x90a9,	// (0x00075564) main_rss2_pane

0xc909,	// (0x00078dc4) listscroll_rss2_pane

0xc912,	// (0x00078dcd) rss2_navigation_pane

0xc91a,	// (0x00078dd5) list_rss2_pane

0xb13c,	// (0x000775f7) scroll_pane_cp22

0xc922,	// (0x00078ddd) rss2_navigation_pane_g1

0xc92b,	// (0x00078de6) rss2_navigation_pane_g2

0xc933,	// (0x00078dee) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007bb47) rss2_navigation_pane_g

0xc93b,	// (0x00078df6) rss2_navigation_pane_t1

0x40a8,	// (0x00070563) rss2_list_single_pane_ParamLimits

0x40a8,	// (0x00070563) rss2_list_single_pane

0xc949,	// (0x00078e04) rss2_list_single_pane_t2

0xc957,	// (0x00078e12) rss2_list_single_pane_t3_ParamLimits

0xc957,	// (0x00078e12) rss2_list_single_pane_t3

0xc974,	// (0x00078e2f) rss2_list_single_pane_t4

0x2231,	// (0x0006e6ec) smil_status_pane_g1

0x909b,	// (0x00075556) main_image2_pane_ParamLimits

0x909b,	// (0x00075556) main_image2_pane

0x3b4a,	// (0x00070005) main_camera2_pane_g9_ParamLimits

0x3b4a,	// (0x00070005) main_camera2_pane_g9

0x3c78,	// (0x00070133) main_camera2_pane_t5_ParamLimits

0x3c78,	// (0x00070133) main_camera2_pane_t5

0x9702,	// (0x00075bbd) main_camera2_pane_t6_ParamLimits

0x9702,	// (0x00075bbd) main_camera2_pane_t6

0x40bf,	// (0x0007057a) main_image2_pane_g1_ParamLimits

0x40bf,	// (0x0007057a) main_image2_pane_g1

0x2e90,	// (0x0006f34b) smil2_video_pane_ParamLimits

0x2e90,	// (0x0006f34b) smil2_video_pane

0x0111,	// (0x0006c5cc) aid_zoom_text_primary_cp

0x9091,	// (0x0007554c) popup_preview_fixed_window

0xa9fc,	// (0x00076eb7) im_reading_pane_g1

0x39c1,	// (0x0006fe7c) cams2_bc_adjust_pane_cp_ParamLimits

0x39c1,	// (0x0006fe7c) cams2_bc_adjust_pane_cp

0x3ca7,	// (0x00070162) cams2_bc_adjust_pane_ParamLimits

0x3ca7,	// (0x00070162) cams2_bc_adjust_pane

0xd7d8,	// (0x00079c93) cams2_bc_adjust_pane_g1

0x976b,	// (0x00075c26) cams2_slider_pane

0x9774,	// (0x00075c2f) cams2_slider_pane_g1

0x977d,	// (0x00075c38) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007bb4e) cams2_slider_pane_g

0x0509,	// (0x0006c9c4) calc_display_pane_ParamLimits

0x0531,	// (0x0006c9ec) calc_paper_pane_ParamLimits

0x0554,	// (0x0006ca0f) grid_calc_pane_ParamLimits

0x9627,	// (0x00075ae2) popup_clock_digital_window_t1_ParamLimits

0xb61d,	// (0x00077ad8) main_image_pane_t1

0x04eb,	// (0x0006c9a6) aid_size_cell_calc_ParamLimits

0x04eb,	// (0x0006c9a6) aid_size_cell_calc

0x3493,	// (0x0006f94e) popup_blid_sat_info2_window_ParamLimits

0x3493,	// (0x0006f94e) popup_blid_sat_info2_window

0xc98a,	// (0x00078e45) aid_size_cell_blid

0xc992,	// (0x00078e4d) bg_popup_window_pane_cp07

0xc9b5,	// (0x00078e70) grid_popup_blid_pane

0xc9bf,	// (0x00078e7a) heading_pane_cp05_ParamLimits

0xc9bf,	// (0x00078e7a) heading_pane_cp05

0xca89,	// (0x00078f44) cell_popup_blid_pane_ParamLimits

0xca89,	// (0x00078f44) cell_popup_blid_pane

0xcaaf,	// (0x00078f6a) cell_popup_blid_pane_g1

0xcab7,	// (0x00078f72) cell_popup_blid_pane_t1

0x3f58,	// (0x00070413) mup2_indicator_pane_ParamLimits

0x3f58,	// (0x00070413) mup2_indicator_pane

0xa903,	// (0x00076dbe) mup2_visualizer_osc_pane

0xc85f,	// (0x00078d1a) mup2_visualizer_spec_pane_ParamLimits

0xc85f,	// (0x00078d1a) mup2_visualizer_spec_pane

0x40d5,	// (0x00070590) mup2_spec_half_pane

0x40de,	// (0x00070599) mup2_spec_half_pane_cp

0x40e6,	// (0x000705a1) mup2_spec_bar_pane_ParamLimits

0x40e6,	// (0x000705a1) mup2_spec_bar_pane

0xc800,	// (0x00078cbb) mup2_spec_bar_pane_g1

0xc80a,	// (0x00078cc5) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007bac1) mup2_spec_bar_pane_g

0x4106,	// (0x000705c1) mup2_osc_middle_pane

0xc81c,	// (0x00078cd7) mup2_visualizer_osc_pane_g1

0x90d3,	// (0x0007558e) popup_number_entry_window_t1_ParamLimits

0x90e6,	// (0x000755a1) popup_number_entry_window_t2_ParamLimits

0x90f8,	// (0x000755b3) popup_number_entry_window_t3_ParamLimits

0x0368,	// (0x0006c823) popup_number_entry_window_t5_ParamLimits

0x0368,	// (0x0006c823) popup_number_entry_window_t5

0xf0ca,	// (0x0007b585) popup_number_entry_window_t_ParamLimits

0x910a,	// (0x000755c5) text_title_cp2_ParamLimits

0x9666,	// (0x00075b21) aid_hotspot_pointer_text2_pane

0x9680,	// (0x00075b3b) main_viewer_pane_g9_ParamLimits

0x9680,	// (0x00075b3b) main_viewer_pane_g9

0xac35,	// (0x000770f0) cale_month_pane_t1_ParamLimits

0xac72,	// (0x0007712d) bg_cale_pane_ParamLimits

0xac8a,	// (0x00077145) list_cale_pane_ParamLimits

0xac9b,	// (0x00077156) listscroll_cale_day_pane_t1

0xacad,	// (0x00077168) scroll_pane_cp09_ParamLimits

0x28b4,	// (0x0006ed6f) main_mup_eq_pane_t1_ParamLimits

0x28b4,	// (0x0006ed6f) main_mup_eq_pane_t1

0x28ce,	// (0x0006ed89) main_mup_eq_pane_t2_ParamLimits

0x28ce,	// (0x0006ed89) main_mup_eq_pane_t2

0x28e8,	// (0x0006eda3) main_mup_eq_pane_t3_ParamLimits

0x28e8,	// (0x0006eda3) main_mup_eq_pane_t3

0x2904,	// (0x0006edbf) main_mup_eq_pane_t4_ParamLimits

0x2904,	// (0x0006edbf) main_mup_eq_pane_t4

0x2920,	// (0x0006eddb) main_mup_eq_pane_t5_ParamLimits

0x2920,	// (0x0006eddb) main_mup_eq_pane_t5

0x293c,	// (0x0006edf7) main_mup_eq_pane_t6_ParamLimits

0x293c,	// (0x0006edf7) main_mup_eq_pane_t6

0x2950,	// (0x0006ee0b) main_mup_eq_pane_t7_ParamLimits

0x2950,	// (0x0006ee0b) main_mup_eq_pane_t7

0x2964,	// (0x0006ee1f) main_mup_eq_pane_t8_ParamLimits

0x2964,	// (0x0006ee1f) main_mup_eq_pane_t8

0x2978,	// (0x0006ee33) main_mup_eq_pane_t9_ParamLimits

0x2978,	// (0x0006ee33) main_mup_eq_pane_t9

0x2992,	// (0x0006ee4d) main_mup_eq_pane_t10_ParamLimits

0x2992,	// (0x0006ee4d) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007b910) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007b910) main_mup_eq_pane_t

0x2a41,	// (0x0006eefc) mup_equalizer_pane_cp5_ParamLimits

0x2a55,	// (0x0006ef10) mup_equalizer_pane_cp6_ParamLimits

0x2a69,	// (0x0006ef24) mup_equalizer_pane_cp7_ParamLimits

0x90a9,	// (0x00075564) main_gallery_pane

0xc825,	// (0x00078ce0) smil2_volume_pane

0xc82d,	// (0x00078ce8) smil_status_volume_pane_g1_ParamLimits

0xc840,	// (0x00078cfb) smil_status_volume_pane_g2_ParamLimits

0x96e0,	// (0x00075b9b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007bac6) smil_status_volume_pane_g_ParamLimits

0xc992,	// (0x00078e4d) bg_popup_window_pane_cp07_ParamLimits

0xc9a0,	// (0x00078e5b) blid_firmament_pane

0x410f,	// (0x000705ca) aid_size_cell_gallery_ParamLimits

0x410f,	// (0x000705ca) aid_size_cell_gallery

0x4125,	// (0x000705e0) grid_gallery_pane_ParamLimits

0x4125,	// (0x000705e0) grid_gallery_pane

0x413e,	// (0x000705f9) cell_gallery_pane_ParamLimits

0x413e,	// (0x000705f9) cell_gallery_pane

0xcac5,	// (0x00078f80) bg_cell_gallery_focus_pane_ParamLimits

0xcac5,	// (0x00078f80) bg_cell_gallery_focus_pane

0xcad7,	// (0x00078f92) cell_gallery_pane_g1_ParamLimits

0xcad7,	// (0x00078f92) cell_gallery_pane_g1

0x4187,	// (0x00070642) cell_gallery_pane_g2_ParamLimits

0x4187,	// (0x00070642) cell_gallery_pane_g2

0x4194,	// (0x0007064f) cell_gallery_pane_g3_ParamLimits

0x4194,	// (0x0007064f) cell_gallery_pane_g3

0xcae3,	// (0x00078f9e) cell_gallery_pane_g4_ParamLimits

0xcae3,	// (0x00078f9e) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007bb74) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007bb74) cell_gallery_pane_g

0xcaef,	// (0x00078faa) bg_cell_gallery_focus_pane_g1

0xcaf7,	// (0x00078fb2) bg_cell_gallery_focus_pane_g2

0xcaff,	// (0x00078fba) bg_cell_gallery_focus_pane_g3

0xcb07,	// (0x00078fc2) bg_cell_gallery_focus_pane_g4

0xcb0f,	// (0x00078fca) bg_cell_gallery_focus_pane_g5

0xcb17,	// (0x00078fd2) bg_cell_gallery_focus_pane_g6

0xcb1f,	// (0x00078fda) bg_cell_gallery_focus_pane_g7

0xcb27,	// (0x00078fe2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007bb7d) bg_cell_gallery_focus_pane_g

0xcb2f,	// (0x00078fea) aid_firma_cardinal

0xcb43,	// (0x00078ffe) blid_firmament_pane_t1

0xcb5a,	// (0x00079015) blid_firmament_pane_t2

0xcb71,	// (0x0007902c) blid_firmament_pane_t3

0xcb88,	// (0x00079043) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007bb8e) blid_firmament_pane_t

0xcb9f,	// (0x0007905a) blid_sat_info_pane

0xcbaf,	// (0x0007906a) blid_sat_info_pane_g1

0xcbaf,	// (0x0007906a) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007bb97) blid_sat_info_pane_g

0xcbb9,	// (0x00079074) blid_sat_info_pane_t1

0xcbc7,	// (0x00079082) smil2_volume_content_pane

0xcbd0,	// (0x0007908b) smil2_volume_pane_g1

0x9fea,	// (0x000764a5) smil2_volume_content_pane_g1

0xcbd8,	// (0x00079093) smil2_volume_content_pane_g2

0xcbe1,	// (0x0007909c) smil2_volume_content_pane_g3

0xcbea,	// (0x000790a5) smil2_volume_content_pane_g4

0xcbff,	// (0x000790ba) smil2_volume_content_pane_g5

0xcc08,	// (0x000790c3) smil2_volume_content_pane_g6

0xcc11,	// (0x000790cc) smil2_volume_content_pane_g7

0xcc1a,	// (0x000790d5) smil2_volume_content_pane_g8

0xcc23,	// (0x000790de) smil2_volume_content_pane_g9

0xcc2c,	// (0x000790e7) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007bb9c) smil2_volume_content_pane_g

0x0ae5,	// (0x0006cfa0) cale_week_day_heading_pane_t1_ParamLimits

0x0b2f,	// (0x0006cfea) cale_week_day_heading_pane_t2_ParamLimits

0x0b7e,	// (0x0006d039) cale_week_day_heading_pane_t3_ParamLimits

0x0bcd,	// (0x0006d088) cale_week_day_heading_pane_t4_ParamLimits

0x0c1c,	// (0x0006d0d7) cale_week_day_heading_pane_t5_ParamLimits

0x0c73,	// (0x0006d12e) cale_week_day_heading_pane_t6_ParamLimits

0x0cca,	// (0x0006d185) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007b68c) cale_week_day_heading_pane_t_ParamLimits

0xa8b1,	// (0x00076d6c) bg_cale_side_pane_ParamLimits

0x0d14,	// (0x0006d1cf) cale_week_time_pane_t1_ParamLimits

0x0d2e,	// (0x0006d1e9) cale_week_time_pane_t2_ParamLimits

0x0d48,	// (0x0006d203) cale_week_time_pane_t3_ParamLimits

0x0d62,	// (0x0006d21d) cale_week_time_pane_t4_ParamLimits

0x0d7c,	// (0x0006d237) cale_week_time_pane_t5_ParamLimits

0x0d96,	// (0x0006d251) cale_week_time_pane_t6_ParamLimits

0x0db0,	// (0x0006d26b) cale_week_time_pane_t7_ParamLimits

0x0dd0,	// (0x0006d28b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007b69b) cale_week_time_pane_t_ParamLimits

0x0df0,	// (0x0006d2ab) cell_cale_week_pane_g2_ParamLimits

0xa8b1,	// (0x00076d6c) bg_cale_side_pane_cp01_ParamLimits

0x2042,	// (0x0006e4fd) cale_month_week_pane_t1_ParamLimits

0x205b,	// (0x0006e516) cale_month_week_pane_t2_ParamLimits

0x2074,	// (0x0006e52f) cale_month_week_pane_t3_ParamLimits

0x208d,	// (0x0006e548) cale_month_week_pane_t4_ParamLimits

0x20a6,	// (0x0006e561) cale_month_week_pane_t5_ParamLimits

0x20bf,	// (0x0006e57a) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007b770) cale_month_week_pane_t_ParamLimits

0x95a3,	// (0x00075a5e) cell_cale_month_pane_g1_ParamLimits

0x90a9,	// (0x00075564) main_cale_event_viewer_pane

0x9033,	// (0x000754ee) listscroll_cale_event_viewer_pane

0xcc35,	// (0x000790f0) list_cale_ev_pane

0xcc3d,	// (0x000790f8) scroll_pane_cp023

0xcc49,	// (0x00079104) field_cale_ev_pane_ParamLimits

0xcc49,	// (0x00079104) field_cale_ev_pane

0xcc65,	// (0x00079120) field_cale_ev_content_pane_ParamLimits

0xcc65,	// (0x00079120) field_cale_ev_content_pane

0xcc71,	// (0x0007912c) field_cale_ev_pane_g1_ParamLimits

0xcc71,	// (0x0007912c) field_cale_ev_pane_g1

0xcc7d,	// (0x00079138) field_cale_ev_pane_g2_ParamLimits

0xcc7d,	// (0x00079138) field_cale_ev_pane_g2

0xcc95,	// (0x00079150) field_cale_ev_pane_g3_ParamLimits

0xcc95,	// (0x00079150) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007bbb1) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007bbb1) field_cale_ev_pane_g

0xccad,	// (0x00079168) field_cale_ev_pane_t1_ParamLimits

0xccad,	// (0x00079168) field_cale_ev_pane_t1

0xccc4,	// (0x0007917f) field_cale_ev_content_pane_t1_ParamLimits

0xccc4,	// (0x0007917f) field_cale_ev_content_pane_t1

0xb503,	// (0x000779be) bg_button_pane_cp01

0x0804,	// (0x0006ccbf) listscroll_cale_week_pane_ParamLimits

0xa85c,	// (0x00076d17) popup_toolbar_window_cp01

0xa882,	// (0x00076d3d) listscroll_cale_week_pane_t1_ParamLimits

0x0804,	// (0x0006ccbf) listscroll_cale_day_pane_ParamLimits

0xa85c,	// (0x00076d17) popup_toolbar_window_cp02

0xac9b,	// (0x00077156) listscroll_cale_day_pane_t1_ParamLimits

0x3459,	// (0x0006f914) main_cale_month_pane_ParamLimits

0x96cb,	// (0x00075b86) popup_toolbar_window_cp03_ParamLimits

0x96cb,	// (0x00075b86) popup_toolbar_window_cp03

0x2d54,	// (0x0006f20f) main_image_pane_g2_ParamLimits

0x2d54,	// (0x0006f20f) main_image_pane_g2

0x2d65,	// (0x0006f220) main_image_pane_g3_ParamLimits

0x2d65,	// (0x0006f220) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007b9a2) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007b9a2) main_image_pane_g

0xb61d,	// (0x00077ad8) main_image_pane_t1_ParamLimits

0x2d76,	// (0x0006f231) main_image_pane_t2_ParamLimits

0x2d76,	// (0x0006f231) main_image_pane_t2

0x2d88,	// (0x0006f243) main_image_pane_t3_ParamLimits

0x2d88,	// (0x0006f243) main_image_pane_t3

0x2db0,	// (0x0006f26b) main_image_pane_t4_ParamLimits

0x2db0,	// (0x0006f26b) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007b9a9) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007b9a9) main_image_pane_t

0x2dd0,	// (0x0006f28b) popup_image_details_window_cp01

0x2dda,	// (0x0006f295) popup_toobar_trans_pane_cp01_ParamLimits

0x2dda,	// (0x0006f295) popup_toobar_trans_pane_cp01

0x356a,	// (0x0006fa25) popup_image_details_window_ParamLimits

0x356a,	// (0x0006fa25) popup_image_details_window

0x969e,	// (0x00075b59) popup_image_focus_window

0x397b,	// (0x0006fe36) camera2_autofocus_pane_ParamLimits

0x397b,	// (0x0006fe36) camera2_autofocus_pane

0x9033,	// (0x000754ee) bg_popup_sub_pane_cp06

0xcce1,	// (0x0007919c) popup_image_focus_window_g1

0xcce9,	// (0x000791a4) popup_image_focus_window_g2

0xccf1,	// (0x000791ac) popup_image_focus_window_g3

0xccf9,	// (0x000791b4) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007bbb8) popup_image_focus_window_g

0xcd01,	// (0x000791bc) popup_image_focus_window_t1

0xcd0f,	// (0x000791ca) popup_image_focus_window_t2

0xcd1f,	// (0x000791da) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007bbc1) popup_image_focus_window_t

0xcd2d,	// (0x000791e8) camera2_autofocus_pane_g1

0xa1ae,	// (0x00076669) bg_tb_trans_pane_cp01

0xcd3b,	// (0x000791f6) popup_image_details_window_g1

0xcd4e,	// (0x00079209) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007bbd3) popup_image_details_window_g

0xcd77,	// (0x00079232) popup_image_details_window_t1

0xcd89,	// (0x00079244) popup_image_details_window_t2

0xcda2,	// (0x0007925d) popup_image_details_window_t3

0xcdb6,	// (0x00079271) popup_image_details_window_t4

0xcdd1,	// (0x0007928c) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007bbda) popup_image_details_window_t

0x9f4c,	// (0x00076407) bg_calc_paper_pane_ParamLimits

0x90a9,	// (0x00075564) grid_highlight_pane_cp013

0x94ce,	// (0x00075989) list_calc_pane_ParamLimits

0x94e0,	// (0x0007599b) scroll_pane_cp024

0x9f60,	// (0x0007641b) bg_calc_display_pane_ParamLimits

0x0652,	// (0x0006cb0d) calc_display_pane_t1_ParamLimits

0x0664,	// (0x0006cb1f) calc_display_pane_t2_ParamLimits

0x94e8,	// (0x000759a3) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007b60c) calc_display_pane_t_ParamLimits

0x0729,	// (0x0006cbe4) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007b629) cell_calc_pane_g

0x0732,	// (0x0006cbed) cell_calc_pane_t1

0x9fbf,	// (0x0007647a) grid_highlight_pane_cp02_ParamLimits

0x9fd5,	// (0x00076490) toolbar_button_pane_cp01_ParamLimits

0x9fd5,	// (0x00076490) toolbar_button_pane_cp01

0xb662,	// (0x00077b1d) temp_image_control_pane_ParamLimits

0xb662,	// (0x00077b1d) temp_image_control_pane

0x909b,	// (0x00075556) main_mp3_pane

0xcdeb,	// (0x000792a6) temp_image_control_pane_g1_ParamLimits

0xcdeb,	// (0x000792a6) temp_image_control_pane_g1

0xcdf9,	// (0x000792b4) temp_image_control_pane_g2_ParamLimits

0xcdf9,	// (0x000792b4) temp_image_control_pane_g2

0xce0b,	// (0x000792c6) temp_image_control_pane_g3_ParamLimits

0xce0b,	// (0x000792c6) temp_image_control_pane_g3

0x41d1,	// (0x0007068c) temp_image_control_pane_g4_ParamLimits

0x41d1,	// (0x0007068c) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007bbe5) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007bbe5) temp_image_control_pane_g

0xcdeb,	// (0x000792a6) main_mp3_pane_g1

0x41e4,	// (0x0007069f) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007bbee) main_mp3_pane_g

0xce4e,	// (0x00079309) main_mp3_pane_t1

0xa90b,	// (0x00076dc6) main_camera_pane_g8_ParamLimits

0xa90b,	// (0x00076dc6) main_camera_pane_g8

0x1102,	// (0x0006d5bd) main_video_pane_g7_ParamLimits

0x1102,	// (0x0006d5bd) main_video_pane_g7

0x9720,	// (0x00075bdb) main_camera2_pane_t7_ParamLimits

0x9720,	// (0x00075bdb) main_camera2_pane_t7

0xaa53,	// (0x00076f0e) scroll_pane_cp025_ParamLimits

0xaa53,	// (0x00076f0e) scroll_pane_cp025

0xaa67,	// (0x00076f22) scroll_pane_cp026_ParamLimits

0xaa67,	// (0x00076f22) scroll_pane_cp026

0xaa76,	// (0x00076f31) wml_content_pane_ParamLimits

0x90a9,	// (0x00075564) main_touch_calib_pane

0x42ba,	// (0x00070775) main_touch_calib_pane_g1

0x42cc,	// (0x00070787) main_touch_calib_pane_g2

0x42de,	// (0x00070799) main_touch_calib_pane_g3

0x42f0,	// (0x000707ab) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007bc0c) main_touch_calib_pane_g

0x4302,	// (0x000707bd) main_touch_calib_pane_t1

0x431c,	// (0x000707d7) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007bc15) main_touch_calib_pane_t

0xb21a,	// (0x000776d5) mup_progress_pane_cp02

0xb24f,	// (0x0007770a) navi_pane_g1

0xb30a,	// (0x000777c5) navi_pane_mp_t3

0x909b,	// (0x00075556) main_mp3_pane_ParamLimits

0x36e7,	// (0x0006fba2) navi_pane_ParamLimits

0xcdeb,	// (0x000792a6) main_mp3_pane_g1_ParamLimits

0x41e4,	// (0x0007069f) main_mp3_pane_g2_ParamLimits

0x41f2,	// (0x000706ad) main_mp3_pane_g3_ParamLimits

0x41f2,	// (0x000706ad) main_mp3_pane_g3

0x4200,	// (0x000706bb) main_mp3_pane_g4_ParamLimits

0x4200,	// (0x000706bb) main_mp3_pane_g4

0xce1b,	// (0x000792d6) main_mp3_pane_g5_ParamLimits

0xce1b,	// (0x000792d6) main_mp3_pane_g5

0xce29,	// (0x000792e4) main_mp3_pane_g6_ParamLimits

0xce29,	// (0x000792e4) main_mp3_pane_g6

0xce36,	// (0x000792f1) main_mp3_pane_g7_ParamLimits

0xce36,	// (0x000792f1) main_mp3_pane_g7

0xce42,	// (0x000792fd) main_mp3_pane_g8_ParamLimits

0xce42,	// (0x000792fd) main_mp3_pane_g8

0xf733,	// (0x0007bbee) main_mp3_pane_g_ParamLimits

0x420e,	// (0x000706c9) main_mp3_pane_t2

0x421c,	// (0x000706d7) main_mp3_pane_t3

0xce5c,	// (0x00079317) main_mp3_pane_t4

0xce6a,	// (0x00079325) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007bbff) main_mp3_pane_t

0xce78,	// (0x00079333) mup_progress_pane_cp01

0x0111,	// (0x0006c5cc) aid_zoom_text_secondary2

0xcc35,	// (0x000790f0) list_cale_ev2_pane

0xcc3d,	// (0x000790f8) scroll_pane_cp023_ParamLimits

0x4372,	// (0x0007082d) field_cale_ev2_pane_ParamLimits

0x4372,	// (0x0007082d) field_cale_ev2_pane

0xa1bc,	// (0x00076677) field_cale_ev2_pane_g1_ParamLimits

0xa1bc,	// (0x00076677) field_cale_ev2_pane_g1

0xa1c8,	// (0x00076683) field_cale_ev2_pane_g2_ParamLimits

0xa1c8,	// (0x00076683) field_cale_ev2_pane_g2

0xa1e0,	// (0x0007669b) field_cale_ev2_pane_g3_ParamLimits

0xa1e0,	// (0x0007669b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007bc20) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007bc20) field_cale_ev2_pane_g

0xa204,	// (0x000766bf) field_cale_ev2_pane_t1_ParamLimits

0xa204,	// (0x000766bf) field_cale_ev2_pane_t1

0xa21b,	// (0x000766d6) field_cale_ev2_pane_t2_ParamLimits

0xa21b,	// (0x000766d6) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007bc29) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007bc29) field_cale_ev2_pane_t

0x2c07,	// (0x0006f0c2) main_postcard_pane_g5_ParamLimits

0x2c07,	// (0x0006f0c2) main_postcard_pane_g5

0x2c1d,	// (0x0006f0d8) main_postcard_pane_g6_ParamLimits

0x2c1d,	// (0x0006f0d8) main_postcard_pane_g6

0x0ebc,	// (0x0006d377) camera2_autofocus_pane_cp_ParamLimits

0x0ebc,	// (0x0006d377) camera2_autofocus_pane_cp

0x909b,	// (0x00075556) main_mup3_pane

0x43b4,	// (0x0007086f) main_mup3_pane_g1_ParamLimits

0x43b4,	// (0x0007086f) main_mup3_pane_g1

0x43d6,	// (0x00070891) main_mup3_pane_g2_ParamLimits

0x43d6,	// (0x00070891) main_mup3_pane_g2

0x4458,	// (0x00070913) main_mup3_pane_g3_ParamLimits

0x4458,	// (0x00070913) main_mup3_pane_g3

0x449e,	// (0x00070959) main_mup3_pane_g4_ParamLimits

0x449e,	// (0x00070959) main_mup3_pane_g4

0x44e4,	// (0x0007099f) main_mup3_pane_g5_ParamLimits

0x44e4,	// (0x0007099f) main_mup3_pane_g5

0x452c,	// (0x000709e7) main_mup3_pane_g6_ParamLimits

0x452c,	// (0x000709e7) main_mup3_pane_g6

0xce80,	// (0x0007933b) main_mup3_pane_g7_ParamLimits

0xce80,	// (0x0007933b) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007bc39) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007bc39) main_mup3_pane_g

0x45aa,	// (0x00070a65) main_mup3_pane_t1_ParamLimits

0x45aa,	// (0x00070a65) main_mup3_pane_t1

0x461e,	// (0x00070ad9) main_mup3_pane_t2_ParamLimits

0x461e,	// (0x00070ad9) main_mup3_pane_t2

0x46f2,	// (0x00070bad) main_mup3_pane_t4_ParamLimits

0x46f2,	// (0x00070bad) main_mup3_pane_t4

0x4748,	// (0x00070c03) main_mup3_pane_t5_ParamLimits

0x4748,	// (0x00070c03) main_mup3_pane_t5

0x4804,	// (0x00070cbf) main_mup3_pane_t6_ParamLimits

0x4804,	// (0x00070cbf) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007bc4a) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007bc4a) main_mup3_pane_t

0x48bc,	// (0x00070d77) mup3_progress_pane_ParamLimits

0x48bc,	// (0x00070d77) mup3_progress_pane

0x4948,	// (0x00070e03) popup_mup3_control_window_ParamLimits

0x4948,	// (0x00070e03) popup_mup3_control_window

0xce8e,	// (0x00079349) popup_mup3_text_window

0x497a,	// (0x00070e35) mup3_progress_pane_t1

0x4999,	// (0x00070e54) mup3_progress_pane_t2

0xce96,	// (0x00079351) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007bc57) mup3_progress_pane_t

0xceb3,	// (0x0007936e) mup_progress_pane_cp03

0x9033,	// (0x000754ee) bg_tb_trans_pane_cp04

0x49b8,	// (0x00070e73) mup3_volume_pane

0x49c0,	// (0x00070e7b) popup_mup3_control_window_g1

0x49c9,	// (0x00070e84) mup3_volume_pane_g1

0x49d2,	// (0x00070e8d) mup3_volume_pane_g2

0x49db,	// (0x00070e96) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007bc5e) mup3_volume_pane_g

0x9033,	// (0x000754ee) bg_tb_trans_pane_cp03

0xcec3,	// (0x0007937e) popup_mup3_text_window_g1

0xcecb,	// (0x00079386) popup_mup3_text_window_t1

0x9fa8,	// (0x00076463) list_calc_item_pane_g1_ParamLimits

0xc900,	// (0x00078dbb) mup_volume_pane_cp_g1

0x4336,	// (0x000707f1) main_touch_calib_pane_t3

0x434a,	// (0x00070805) main_touch_calib_pane_t4

0x435e,	// (0x00070819) main_touch_calib_pane_t5

0x903d,	// (0x000754f8) aid_cell_size_toolbar2

0x9045,	// (0x00075500) aid_popup3_width_pane

0x0109,	// (0x0006c5c4) aid_zoom_text_msg_primary

0x0e9b,	// (0x0006d356) vorec_t7

0x9f6c,	// (0x00076427) bg_calc_paper_pane_g1_ParamLimits

0x9f78,	// (0x00076433) bg_calc_paper_pane_g2_ParamLimits

0x9f84,	// (0x0007643f) bg_calc_paper_pane_g3_ParamLimits

0x9f90,	// (0x0007644b) bg_calc_paper_pane_g4_ParamLimits

0x9f9c,	// (0x00076457) bg_calc_paper_pane_g5_ParamLimits

0x06ad,	// (0x0006cb68) bg_calc_paper_pane_g6_ParamLimits

0x06be,	// (0x0006cb79) bg_calc_paper_pane_g7_ParamLimits

0x06cf,	// (0x0006cb8a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007b613) bg_calc_paper_pane_g_ParamLimits

0x06e2,	// (0x0006cb9d) calc_bg_paper_pane_g9_ParamLimits

0x1014,	// (0x0006d4cf) image_qvga_pane_ParamLimits

0x1014,	// (0x0006d4cf) image_qvga_pane

0x9e7c,	// (0x00076337) bg_popup_sub_pane_cp04_ParamLimits

0xb599,	// (0x00077a54) popup_mup_playback_window_g1_ParamLimits

0xb5a5,	// (0x00077a60) popup_mup_playback_window_t1_ParamLimits

0xb5ba,	// (0x00077a75) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007b99d) popup_mup_playback_window_t_ParamLimits

0x3e72,	// (0x0007032d) main_mup2_pane_g3_ParamLimits

0x3e72,	// (0x0007032d) main_mup2_pane_g3

0x1387,	// (0x0006d842) popup_toolbar_window_cp04

0xb9af,	// (0x00077e6a) popup_call2_audio_second_window_g3_ParamLimits

0xb9af,	// (0x00077e6a) popup_call2_audio_second_window_g3

0xbdb9,	// (0x00078274) popup_call2_audio_first_window_g4_ParamLimits

0xbdb9,	// (0x00078274) popup_call2_audio_first_window_g4

0xc438,	// (0x000788f3) popup_call2_audio_in_window_g4_ParamLimits

0xc438,	// (0x000788f3) popup_call2_audio_in_window_g4

0x2d36,	// (0x0006f1f1) aid_area_sk_bg_cut_ParamLimits

0x2d36,	// (0x0006f1f1) aid_area_sk_bg_cut

0xb5cf,	// (0x00077a8a) aid_area_sk_bg_cut_2_ParamLimits

0xb5cf,	// (0x00077a8a) aid_area_sk_bg_cut_2

0x4177,	// (0x00070632) aid_placing_details_win

0x417f,	// (0x0007063a) aid_placing_details_win_2

0xcd2d,	// (0x000791e8) camera2_autofocus_pane_g1_ParamLimits

0x02af,	// (0x0006c76a) popup_fixed_preview_cale_window_ParamLimits

0x02af,	// (0x0006c76a) popup_fixed_preview_cale_window

0xb388,	// (0x00077843) navi_slider_pane_g3

0xb391,	// (0x0007784c) navi_slider_pane_g4

0xb39a,	// (0x00077855) navi_slider_pane_g5

0xb388,	// (0x00077843) navi_slider_pane_g6

0x964d,	// (0x00075b08) navi_slider_pane_g7

0xb4d0,	// (0x0007798b) mup_scale_pane_g3

0xb4d9,	// (0x00077994) mup_scale_pane_g4

0xb4e2,	// (0x0007799d) mup_scale_pane_g5

0x2a7d,	// (0x0006ef38) mup_scale_pane_g6

0x2a86,	// (0x0006ef41) mup_scale_pane_g7

0xb388,	// (0x00077843) cams2_slider_pane_g3

0xc982,	// (0x00078e3d) cams2_slider_pane_g4

0x9786,	// (0x00075c41) cams2_slider_pane_g5

0xb388,	// (0x00077843) cams2_slider_pane_g6

0x978e,	// (0x00075c49) cams2_slider_pane_g7

0xcbaf,	// (0x0007906a) camera2_autofocus_pane_cp_g1

0xc799,	// (0x00078c54) bg_popup_preview_window_pane_cp02_ParamLimits

0xc799,	// (0x00078c54) bg_popup_preview_window_pane_cp02

0xced9,	// (0x00079394) list_fp_cale_pane_ParamLimits

0xced9,	// (0x00079394) list_fp_cale_pane

0xcee5,	// (0x000793a0) popup_fixed_preview_cale_window_t1_ParamLimits

0xcee5,	// (0x000793a0) popup_fixed_preview_cale_window_t1

0x49e4,	// (0x00070e9f) popup_fixed_preview_cale_window_t2_ParamLimits

0x49e4,	// (0x00070e9f) popup_fixed_preview_cale_window_t2

0x49f9,	// (0x00070eb4) popup_fixed_preview_cale_window_t3_ParamLimits

0x49f9,	// (0x00070eb4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007bc65) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007bc65) popup_fixed_preview_cale_window_t

0x4a0e,	// (0x00070ec9) list_single_fp_cale_pane_ParamLimits

0x4a0e,	// (0x00070ec9) list_single_fp_cale_pane

0xcf03,	// (0x000793be) list_single_fp_cale_pane_g1_ParamLimits

0xcf03,	// (0x000793be) list_single_fp_cale_pane_g1

0xcf0f,	// (0x000793ca) list_single_fp_cale_pane_g2_ParamLimits

0xcf0f,	// (0x000793ca) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007bc6c) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007bc6c) list_single_fp_cale_pane_g

0xcf28,	// (0x000793e3) list_single_fp_cale_pane_t1_ParamLimits

0xcf28,	// (0x000793e3) list_single_fp_cale_pane_t1

0xcf3a,	// (0x000793f5) list_single_fp_cale_pane_t2_ParamLimits

0xcf3a,	// (0x000793f5) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007bc73) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007bc73) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x90a9,	// (0x00075564) main_dialer_pane

0x4a25,	// (0x00070ee0) aid_cell_size_keypad

0x4a2f,	// (0x00070eea) dialer_ne_pane

0x4a37,	// (0x00070ef2) grid_dialer_command_1_pane

0x4a3f,	// (0x00070efa) grid_dialer_command_2_pane

0x4a47,	// (0x00070f02) grid_dialer_keypad_pane

0x4a59,	// (0x00070f14) bg_popup_call_pane_cp06_ParamLimits

0x4a59,	// (0x00070f14) bg_popup_call_pane_cp06

0x4a65,	// (0x00070f20) dialer_ne_clear_pane_ParamLimits

0x4a65,	// (0x00070f20) dialer_ne_clear_pane

0xcf6d,	// (0x00079428) dialer_ne_pane_g1

0xcf75,	// (0x00079430) dialer_ne_pane_t1_ParamLimits

0xcf75,	// (0x00079430) dialer_ne_pane_t1

0x4a71,	// (0x00070f2c) dialer_ne_pane_t2_ParamLimits

0x4a71,	// (0x00070f2c) dialer_ne_pane_t2

0x4a9b,	// (0x00070f56) dialer_ne_pane_t3_ParamLimits

0x4a9b,	// (0x00070f56) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007bc78) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007bc78) dialer_ne_pane_t

0x4acb,	// (0x00070f86) dialer_ne_pane_t3_copy1_ParamLimits

0x4acb,	// (0x00070f86) dialer_ne_pane_t3_copy1

0x4afa,	// (0x00070fb5) cell_dialer_keypad_pane_ParamLimits

0x4afa,	// (0x00070fb5) cell_dialer_keypad_pane

0x4b11,	// (0x00070fcc) cell_dialer_command_1_pane_ParamLimits

0x4b11,	// (0x00070fcc) cell_dialer_command_1_pane

0x4b27,	// (0x00070fe2) cell_dialer_command_2_pane_ParamLimits

0x4b27,	// (0x00070fe2) cell_dialer_command_2_pane

0xcf87,	// (0x00079442) bg_button_pane_cp02_ParamLimits

0xcf87,	// (0x00079442) bg_button_pane_cp02

0x4b36,	// (0x00070ff1) cell_dialer_keypad_pane_g1_ParamLimits

0x4b36,	// (0x00070ff1) cell_dialer_keypad_pane_g1

0xcf87,	// (0x00079442) bg_button_pane_cp03_ParamLimits

0xcf87,	// (0x00079442) bg_button_pane_cp03

0x4b4b,	// (0x00071006) cell_dialer_command_1_pane_g1_ParamLimits

0x4b4b,	// (0x00071006) cell_dialer_command_1_pane_g1

0xcf93,	// (0x0007944e) bg_button_pane_cp04

0x4b5e,	// (0x00071019) cell_dialer_command_2_pane_g1

0xa903,	// (0x00076dbe) bg_button_pane_cp06

0xcf9b,	// (0x00079456) dialer_ne_clear_pane_g1

0xb25b,	// (0x00077716) navi_pane_g2

0xb289,	// (0x00077744) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007b8a0) navi_pane_g

0xb318,	// (0x000777d3) navi_pane_mv_g2

0xb33f,	// (0x000777fa) navi_pane_mv_g5

0x263d,	// (0x0006eaf8) navi_pane_mv_t1

0x9f60,	// (0x0007641b) main_clock2_pane

0x4bab,	// (0x00071066) main_clock2_list_pane_ParamLimits

0x4bab,	// (0x00071066) main_clock2_list_pane

0x4be3,	// (0x0007109e) main_clock2_pane_t1_ParamLimits

0x4be3,	// (0x0007109e) main_clock2_pane_t1

0x4c21,	// (0x000710dc) main_clock2_pane_t2_ParamLimits

0x4c21,	// (0x000710dc) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007bc84) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007bc84) main_clock2_pane_t

0x4cbf,	// (0x0007117a) popup_clock_analogue_window_cp03_ParamLimits

0x4cbf,	// (0x0007117a) popup_clock_analogue_window_cp03

0x4ce4,	// (0x0007119f) popup_clock_digital_window_cp02_ParamLimits

0x4ce4,	// (0x0007119f) popup_clock_digital_window_cp02

0x4d57,	// (0x00071212) main_clock2_list_single_pane_ParamLimits

0x4d57,	// (0x00071212) main_clock2_list_single_pane

0xa903,	// (0x00076dbe) list_highlight_pane_cp05

0xcfd5,	// (0x00079490) main_clock2_list_single_pane_t1

0x1387,	// (0x0006d842) popup_toolbar_window_cp04_ParamLimits

0x41a1,	// (0x0007065c) camera2_autofocus_pane_g2_ParamLimits

0x41a1,	// (0x0007065c) camera2_autofocus_pane_g2

0x41ad,	// (0x00070668) camera2_autofocus_pane_g3_ParamLimits

0x41ad,	// (0x00070668) camera2_autofocus_pane_g3

0x41b9,	// (0x00070674) camera2_autofocus_pane_g4_ParamLimits

0x41b9,	// (0x00070674) camera2_autofocus_pane_g4

0x41c5,	// (0x00070680) camera2_autofocus_pane_g5_ParamLimits

0x41c5,	// (0x00070680) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007bbc8) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007bbc8) camera2_autofocus_pane_g

0x4394,	// (0x0007084f) camera2_autofocus_pane_cp_g2

0x439c,	// (0x00070857) camera2_autofocus_pane_cp_g3

0x43a4,	// (0x0007085f) camera2_autofocus_pane_cp_g4

0x43ac,	// (0x00070867) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007bc2e) camera2_autofocus_pane_cp_g

0x4a51,	// (0x00070f0c) popup_dialer_spcha_window

0x9033,	// (0x000754ee) bg_popup_sub_pane_cp07

0xcfe3,	// (0x0007949e) list_spcha_pane

0xcfeb,	// (0x000794a6) list_single_spcha_pane_ParamLimits

0xcfeb,	// (0x000794a6) list_single_spcha_pane

0x9033,	// (0x000754ee) list_highlight_pane_cp06

0xcffc,	// (0x000794b7) list_single_spcha_pane_t1

0xc1e2,	// (0x0007869d) popup_call2_audio_out_window_g4_ParamLimits

0xc1e2,	// (0x0007869d) popup_call2_audio_out_window_g4

0x90a9,	// (0x00075564) main_imed2_pane

0x96a6,	// (0x00075b61) popup_imed_adjust2_window

0x3582,	// (0x0006fa3d) popup_imed_trans_window_ParamLimits

0x3582,	// (0x0006fa3d) popup_imed_trans_window

0xc9eb,	// (0x00078ea6) popup_blid_sat_info2_window_t1

0xc9f9,	// (0x00078eb4) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007bb5d) popup_blid_sat_info2_window_t

0x4e01,	// (0x000712bc) aid_size_cell_colour_35

0x4e21,	// (0x000712dc) aid_size_cell_colour_112

0x4e41,	// (0x000712fc) aid_size_cell_effect

0xc7a5,	// (0x00078c60) bg_tb_trans_pane_cp02

0xadac,	// (0x00077267) heading_imed_pane

0x4e61,	// (0x0007131c) listscroll_imed_pane

0xd00a,	// (0x000794c5) heading_imed_pane_g1

0xd012,	// (0x000794cd) heading_imed_pane_t1

0xd020,	// (0x000794db) grid_imed_colour_35_pane_ParamLimits

0xd020,	// (0x000794db) grid_imed_colour_35_pane

0x4e6d,	// (0x00071328) grid_imed_effect_pane

0xd038,	// (0x000794f3) list_imed_aspect_pane

0x4e83,	// (0x0007133e) scroll_pane_cp027_ParamLimits

0x4e83,	// (0x0007133e) scroll_pane_cp027

0x4e94,	// (0x0007134f) cell_imed_effect_pane_ParamLimits

0x4e94,	// (0x0007134f) cell_imed_effect_pane

0xd040,	// (0x000794fb) cell_imed_colour_pane_ParamLimits

0xd040,	// (0x000794fb) cell_imed_colour_pane

0xd082,	// (0x0007953d) cell_imed_colour_pane_g1_ParamLimits

0xd082,	// (0x0007953d) cell_imed_colour_pane_g1

0xd093,	// (0x0007954e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd093,	// (0x0007954e) hgihlgiht_grid_pane_cp016

0x4ebb,	// (0x00071376) cell_imed_effect_pane_g1

0x4ec3,	// (0x0007137e) grid_highlight_pane_cp017

0xd0a4,	// (0x0007955f) list_imed_single_pane_ParamLimits

0xd0a4,	// (0x0007955f) list_imed_single_pane

0x9033,	// (0x000754ee) list_highlight_pane_cp07

0xd0ba,	// (0x00079575) list_imed_aspect_pane_comp1_t1

0xc7a5,	// (0x00078c60) bg_tb_trans_pane_cp05

0xd0dc,	// (0x00079597) popup_imed_adjust2_window_g1

0xd103,	// (0x000795be) popup_imed_adjust2_window_t1

0xd11b,	// (0x000795d6) slider_imed_adjust_pane

0xd12f,	// (0x000795ea) slider_imed_adjust_pane_g1

0xd13f,	// (0x000795fa) slider_imed_adjust_pane_g2

0xd14f,	// (0x0007960a) slider_imed_adjust_pane_g3

0xd160,	// (0x0007961b) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007bca1) slider_imed_adjust_pane_g

0x4ecc,	// (0x00071387) aid_size_cell_clipart2

0x4ed8,	// (0x00071393) grid_imed_clipart_pane

0xd171,	// (0x0007962c) scroll_pane_cp031

0x4ee2,	// (0x0007139d) cell_imed_clipart_pane_ParamLimits

0x4ee2,	// (0x0007139d) cell_imed_clipart_pane

0x4f06,	// (0x000713c1) cell_imed_clipart_pane_g1

0x9033,	// (0x000754ee) grid_highlight_pane_cp014

0x4bc0,	// (0x0007107b) main_clock2_pane_g1_ParamLimits

0x4bc0,	// (0x0007107b) main_clock2_pane_g1

0x4d02,	// (0x000711bd) aid_call2_pane_cp10

0x4d14,	// (0x000711cf) aid_call_pane_cp10

0xb1ba,	// (0x00077675) popup_clock_analogue_window_cp10_g1

0xb1ba,	// (0x00077675) popup_clock_analogue_window_cp10_g2

0x4d26,	// (0x000711e1) popup_clock_analogue_window_cp10_g3

0x4d26,	// (0x000711e1) popup_clock_analogue_window_cp10_g4

0xb1ba,	// (0x00077675) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007bc8f) popup_clock_analogue_window_cp10_g

0x4d38,	// (0x000711f3) popup_clock_analogue_window_cp10_t1

0x4d69,	// (0x00071224) clock_digital_number_pane_cp10_ParamLimits

0x4d69,	// (0x00071224) clock_digital_number_pane_cp10

0x4d81,	// (0x0007123c) clock_digital_number_pane_cp11_ParamLimits

0x4d81,	// (0x0007123c) clock_digital_number_pane_cp11

0x4d99,	// (0x00071254) clock_digital_number_pane_cp12_ParamLimits

0x4d99,	// (0x00071254) clock_digital_number_pane_cp12

0x4db1,	// (0x0007126c) clock_digital_number_pane_cp13_ParamLimits

0x4db1,	// (0x0007126c) clock_digital_number_pane_cp13

0x4dc9,	// (0x00071284) clock_digital_separator_pane_cp10_ParamLimits

0x4dc9,	// (0x00071284) clock_digital_separator_pane_cp10

0x4de1,	// (0x0007129c) popup_clock_digital_window_cp02_t1_ParamLimits

0x4de1,	// (0x0007129c) popup_clock_digital_window_cp02_t1

0x9e74,	// (0x0007632f) clock_digital_number_pane_cp10_g1

0x9e74,	// (0x0007632f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007bcaa) clock_digital_number_pane_cp10_g

0x9e74,	// (0x0007632f) clock_digital_separator_pane_cp10_g1

0x9e74,	// (0x0007632f) clock_digital_separator_pane_g2_cp10

0xb347,	// (0x00077802) navi_pane_vded_g4

0xb350,	// (0x0007780b) navi_pane_vded_g5

0xb359,	// (0x00077814) navi_pane_vded_t1

0x90a9,	// (0x00075564) main_vded_pane

0x4f0f,	// (0x000713ca) main_vded_pane_g1

0x4f19,	// (0x000713d4) main_vded_pane_g2

0x4f23,	// (0x000713de) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007bcaf) main_vded_pane_g

0x4f2d,	// (0x000713e8) main_vded_pane_t1

0x4f3b,	// (0x000713f6) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007bcb6) main_vded_pane_t

0x4f49,	// (0x00071404) vded_slider_pane

0x4f53,	// (0x0007140e) vded_video_pane

0xd179,	// (0x00079634) vded_video_pane_g1

0x4f5d,	// (0x00071418) vded_video_pane_g2

0xcbaf,	// (0x0007906a) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007bcbb) vded_video_pane_g

0xd183,	// (0x0007963e) vded_slider_pane_g1

0xd18c,	// (0x00079647) vded_slider_pane_g2

0xd195,	// (0x00079650) vded_slider_pane_g3

0xd19e,	// (0x00079659) vded_slider_pane_g4

0xd1a7,	// (0x00079662) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007bcc2) vded_slider_pane_g

0x4930,	// (0x00070deb) mup3_rocker_pane_ParamLimits

0x4930,	// (0x00070deb) mup3_rocker_pane

0x4f66,	// (0x00071421) mup3_control_keys_pane_g1

0x4f6e,	// (0x00071429) mup3_control_keys_pane_g2

0x4f76,	// (0x00071431) mup3_control_keys_pane_g3

0x4f7e,	// (0x00071439) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007bccd) mup3_control_keys_pane_g

0x02e6,	// (0x0006c7a1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x02e6,	// (0x0006c7a1) popup_toolbar2_fixed_window_cp01

0x4964,	// (0x00070e1f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4964,	// (0x00070e1f) popup_toolbar2_fixed_window_cp02

0xbb21,	// (0x00077fdc) popup_call2_audio_second_window_t4_ParamLimits

0xbb21,	// (0x00077fdc) popup_call2_audio_second_window_t4

0xc04f,	// (0x0007850a) popup_call2_audio_first_window_t6_ParamLimits

0xc04f,	// (0x0007850a) popup_call2_audio_first_window_t6

0xc2e5,	// (0x000787a0) popup_call2_audio_out_window_t6_ParamLimits

0xc2e5,	// (0x000787a0) popup_call2_audio_out_window_t6

0x90a9,	// (0x00075564) main_vitu_pane

0x4f8e,	// (0x00071449) aid_size_cell_itu_ParamLimits

0x4f8e,	// (0x00071449) aid_size_cell_itu

0xa1ae,	// (0x00076669) bg_popup_window_pane_cp08_ParamLimits

0xa1ae,	// (0x00076669) bg_popup_window_pane_cp08

0x4fa4,	// (0x0007145f) field_vitu_entry_pane_ParamLimits

0x4fa4,	// (0x0007145f) field_vitu_entry_pane

0x4fbb,	// (0x00071476) grid_vitu_function_pane_ParamLimits

0x4fbb,	// (0x00071476) grid_vitu_function_pane

0x4fd6,	// (0x00071491) grid_vitu_itu_pane_ParamLimits

0x4fd6,	// (0x00071491) grid_vitu_itu_pane

0x4ff4,	// (0x000714af) cell_vitu_itu_pane_ParamLimits

0x4ff4,	// (0x000714af) cell_vitu_itu_pane

0x5018,	// (0x000714d3) cell_vitu_function_pane_ParamLimits

0x5018,	// (0x000714d3) cell_vitu_function_pane

0xa1ae,	// (0x00076669) bg_popup_sub_pane_cp08_ParamLimits

0xa1ae,	// (0x00076669) bg_popup_sub_pane_cp08

0x5033,	// (0x000714ee) field_vitu_entry_pane_t1_ParamLimits

0x5033,	// (0x000714ee) field_vitu_entry_pane_t1

0xd1c8,	// (0x00079683) field_vitu_entry_pane_t2_ParamLimits

0xd1c8,	// (0x00079683) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007bcdb) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007bcdb) field_vitu_entry_pane_t

0xd1e5,	// (0x000796a0) bg_button_pane_cp05_ParamLimits

0xd1e5,	// (0x000796a0) bg_button_pane_cp05

0x5052,	// (0x0007150d) cell_vitu_itu_pane_g1

0x506a,	// (0x00071525) cell_vitu_itu_pane_t1_ParamLimits

0x506a,	// (0x00071525) cell_vitu_itu_pane_t1

0x507c,	// (0x00071537) cell_vitu_itu_pane_t2_ParamLimits

0x507c,	// (0x00071537) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007bce0) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007bce0) cell_vitu_itu_pane_t

0xd1f3,	// (0x000796ae) bg_button_pane_cp07

0x50bf,	// (0x0007157a) cell_vitu_function_pane_g1

0x94c6,	// (0x00075981) main_calc_pane_g1

0x00fd,	// (0x0006c5b8) aid_visual_content_pane

0x90a9,	// (0x00075564) main_vradio_pane

0x50c8,	// (0x00071583) main_vradio_pane_g1_ParamLimits

0x50c8,	// (0x00071583) main_vradio_pane_g1

0xd1fd,	// (0x000796b8) main_vradio_pane_g2_ParamLimits

0xd1fd,	// (0x000796b8) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007bce7) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007bce7) main_vradio_pane_g

0x50e1,	// (0x0007159c) main_vradio_pane_t1_ParamLimits

0x50e1,	// (0x0007159c) main_vradio_pane_t1

0x50f6,	// (0x000715b1) main_vradio_pane_t2_ParamLimits

0x50f6,	// (0x000715b1) main_vradio_pane_t2

0xd20a,	// (0x000796c5) main_vradio_pane_t3_ParamLimits

0xd20a,	// (0x000796c5) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007bcec) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007bcec) main_vradio_pane_t

0x510b,	// (0x000715c6) vradio_rocker_control_pane_ParamLimits

0x510b,	// (0x000715c6) vradio_rocker_control_pane

0x511d,	// (0x000715d8) vradio_station_info_pane_ParamLimits

0x511d,	// (0x000715d8) vradio_station_info_pane

0xd21e,	// (0x000796d9) vradio_frequency_info_pane_ParamLimits

0xd21e,	// (0x000796d9) vradio_frequency_info_pane

0xcbaf,	// (0x0007906a) vradio_station_info_pane_g1

0xd22d,	// (0x000796e8) vradio_station_info_pane_t1_ParamLimits

0xd22d,	// (0x000796e8) vradio_station_info_pane_t1

0xd24f,	// (0x0007970a) vradio_station_info_pane_t2_ParamLimits

0xd24f,	// (0x0007970a) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007bcf3) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007bcf3) vradio_station_info_pane_t

0xd261,	// (0x0007971c) vradio_tuning_pane

0xd269,	// (0x00079724) vradio_rocker_control_pane_g1

0xd271,	// (0x0007972c) vradio_rocker_control_pane_g2

0xd279,	// (0x00079734) vradio_rocker_control_pane_g3

0xd281,	// (0x0007973c) vradio_rocker_control_pane_g4

0xd289,	// (0x00079744) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007bcf8) vradio_rocker_control_pane_g

0x512f,	// (0x000715ea) vradio_frequency_info_pane_g1

0xd291,	// (0x0007974c) vradio_frequency_info_pane_t1_ParamLimits

0xd291,	// (0x0007974c) vradio_frequency_info_pane_t1

0x5139,	// (0x000715f4) vradio_tuning_pane_g1

0x5144,	// (0x000715ff) vradio_tuning_pane_t1

0x9059,	// (0x00075514) area_side_right_pane_ParamLimits

0x9059,	// (0x00075514) area_side_right_pane

0xc760,	// (0x00078c1b) status_small_pane_g1

0xc768,	// (0x00078c23) status_small_pane_g2

0xc771,	// (0x00078c2c) status_small_pane_g3

0xc77a,	// (0x00078c35) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007bab3) status_small_pane_g

0xc783,	// (0x00078c3e) status_small_pane_t1

0x90a9,	// (0x00075564) main_video3_pane

0xd2a5,	// (0x00079760) cams_zoom_vslider_pane

0xd2ad,	// (0x00079768) image3_wide_pane_ParamLimits

0xd2ad,	// (0x00079768) image3_wide_pane

0xd2c7,	// (0x00079782) image3_wide_small_pane

0xd2d3,	// (0x0007978e) main_video3_pane_g1_ParamLimits

0xd2d3,	// (0x0007978e) main_video3_pane_g1

0xd2ef,	// (0x000797aa) main_video3_pane_g2_ParamLimits

0xd2ef,	// (0x000797aa) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007bd03) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007bd03) main_video3_pane_g

0xd30b,	// (0x000797c6) main_video3_pane_t1_ParamLimits

0xd30b,	// (0x000797c6) main_video3_pane_t1

0xd336,	// (0x000797f1) main_video3_pane_t2_ParamLimits

0xd336,	// (0x000797f1) main_video3_pane_t2

0xd361,	// (0x0007981c) main_video3_pane_t3_ParamLimits

0xd361,	// (0x0007981c) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007bd08) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007bd08) main_video3_pane_t

0xd38e,	// (0x00079849) cams_zoom_vslider_pane_g1

0xd397,	// (0x00079852) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007bd0f) cams_zoom_vslider_pane_g

0xd39f,	// (0x0007985a) small_slider_vertical_pane

0xcbaf,	// (0x0007906a) small_slider_vertical_pane_g1

0xcbaf,	// (0x0007906a) small_slider_vertical_pane_g2

0xd3a7,	// (0x00079862) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007bd14) small_slider_vertical_pane_g

0x90a9,	// (0x00075564) main_hwr_training_pane

0xd3b0,	// (0x0007986b) hwr_training_instruct_pane_ParamLimits

0xd3b0,	// (0x0007986b) hwr_training_instruct_pane

0x5153,	// (0x0007160e) hwr_training_navi_pane_ParamLimits

0x5153,	// (0x0007160e) hwr_training_navi_pane

0x5172,	// (0x0007162d) hwr_training_write_pane_ParamLimits

0x5172,	// (0x0007162d) hwr_training_write_pane

0x9033,	// (0x000754ee) bg_frame_shadow_pane

0xd3e7,	// (0x000798a2) hwr_training_write_pane_g1

0xd3ef,	// (0x000798aa) hwr_training_write_pane_g2

0xd3f7,	// (0x000798b2) hwr_training_write_pane_g3

0xd3ff,	// (0x000798ba) hwr_training_write_pane_g4

0xd407,	// (0x000798c2) hwr_training_write_pane_g5

0xd40f,	// (0x000798ca) hwr_training_write_pane_g6

0xd417,	// (0x000798d2) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007bd1b) hwr_training_write_pane_g

0x9797,	// (0x00075c52) hwr_training_navi_pane_g1_ParamLimits

0x9797,	// (0x00075c52) hwr_training_navi_pane_g1

0x97a9,	// (0x00075c64) hwr_training_navi_pane_g2_ParamLimits

0x97a9,	// (0x00075c64) hwr_training_navi_pane_g2

0x97bb,	// (0x00075c76) hwr_training_navi_pane_g3_ParamLimits

0x97bb,	// (0x00075c76) hwr_training_navi_pane_g3

0x97cb,	// (0x00075c86) hwr_training_navi_pane_g4_ParamLimits

0x97cb,	// (0x00075c86) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007bd2a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007bd2a) hwr_training_navi_pane_g

0x97d8,	// (0x00075c93) hwr_training_navi_pane_t1

0x51bc,	// (0x00071677) list_single_hwr_training_instruct_pane_ParamLimits

0x51bc,	// (0x00071677) list_single_hwr_training_instruct_pane

0xd41f,	// (0x000798da) list_single_hwr_training_instruct_pane_t1

0xcaef,	// (0x00078faa) bg_frame_shadow_pane_g1

0xd42e,	// (0x000798e9) bg_frame_shadow_pane_g2

0xd436,	// (0x000798f1) bg_frame_shadow_pane_g3

0xd43e,	// (0x000798f9) bg_frame_shadow_pane_g4

0xd446,	// (0x00079901) bg_frame_shadow_pane_g5

0xd44e,	// (0x00079909) bg_frame_shadow_pane_g6

0xd456,	// (0x00079911) bg_frame_shadow_pane_g7

0xa800,	// (0x00076cbb) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007bd35) bg_frame_shadow_pane_g

0x90a9,	// (0x00075564) main_video_tele_dialer_pane

0x51d3,	// (0x0007168e) aid_size_cell_video_keypad_ParamLimits

0x51d3,	// (0x0007168e) aid_size_cell_video_keypad

0x51ed,	// (0x000716a8) grid_video_dialer_keypad_pane_ParamLimits

0x51ed,	// (0x000716a8) grid_video_dialer_keypad_pane

0x523b,	// (0x000716f6) video_down_pane_cp_ParamLimits

0x523b,	// (0x000716f6) video_down_pane_cp

0x526d,	// (0x00071728) cell_video_dialer_keypad_pane_ParamLimits

0x526d,	// (0x00071728) cell_video_dialer_keypad_pane

0xd45e,	// (0x00079919) bg_button_pane_cp08_ParamLimits

0xd45e,	// (0x00079919) bg_button_pane_cp08

0x528f,	// (0x0007174a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x528f,	// (0x0007174a) cell_video_dialer_keypad_pane_g1

0x491a,	// (0x00070dd5) mup3_rocker2_pane_ParamLimits

0x491a,	// (0x00070dd5) mup3_rocker2_pane

0xcbaf,	// (0x0007906a) mup3_rocker2_pane_g1

0x346b,	// (0x0006f926) main_dialer2_pane

0x90a9,	// (0x00075564) main_mp4_pane

0x97ee,	// (0x00075ca9) main_mp4_pane_g1_ParamLimits

0x97ee,	// (0x00075ca9) main_mp4_pane_g1

0x97ee,	// (0x00075ca9) main_mp4_pane_g2_ParamLimits

0x97ee,	// (0x00075ca9) main_mp4_pane_g2

0x52ca,	// (0x00071785) main_mp4_pane_g3_ParamLimits

0x52ca,	// (0x00071785) main_mp4_pane_g3

0x97fc,	// (0x00075cb7) main_mp4_pane_g4_ParamLimits

0x97fc,	// (0x00075cb7) main_mp4_pane_g4

0x9824,	// (0x00075cdf) main_mp4_pane_g5_ParamLimits

0x9824,	// (0x00075cdf) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007bd55) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007bd55) main_mp4_pane_g

0x9874,	// (0x00075d2f) main_mp4_pane_t1_ParamLimits

0x9874,	// (0x00075d2f) main_mp4_pane_t1

0x98d0,	// (0x00075d8b) main_mp4_pane_t2_ParamLimits

0x98d0,	// (0x00075d8b) main_mp4_pane_t2

0xd46a,	// (0x00079925) main_mp4_pane_t3_ParamLimits

0xd46a,	// (0x00079925) main_mp4_pane_t3

0x9922,	// (0x00075ddd) main_mp4_pane_t4_ParamLimits

0x9922,	// (0x00075ddd) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007bd62) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007bd62) main_mp4_pane_t

0x9966,	// (0x00075e21) mp4_progress_pane_ParamLimits

0x9966,	// (0x00075e21) mp4_progress_pane

0x99b0,	// (0x00075e6b) mp4_rocker_pane_ParamLimits

0x99b0,	// (0x00075e6b) mp4_rocker_pane

0xd492,	// (0x0007994d) mp4_progress_pane_t1

0xd4ab,	// (0x00079966) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007bd6b) mp4_progress_pane_t

0xd4c4,	// (0x0007997f) mup_progress_pane_cp04

0xd7e0,	// (0x00079c9b) mp4_rocker_pane_g1

0x5306,	// (0x000717c1) aid_cell_size_keypad2_ParamLimits

0x5306,	// (0x000717c1) aid_cell_size_keypad2

0x531c,	// (0x000717d7) dialer2_ne_pane_ParamLimits

0x531c,	// (0x000717d7) dialer2_ne_pane

0x5336,	// (0x000717f1) grid_dialer2_keypad_pane_ParamLimits

0x5336,	// (0x000717f1) grid_dialer2_keypad_pane

0xc992,	// (0x00078e4d) bg_popup_call_pane_cp07_ParamLimits

0xc992,	// (0x00078e4d) bg_popup_call_pane_cp07

0x5354,	// (0x0007180f) dialer2_ne_pane_t1_ParamLimits

0x5354,	// (0x0007180f) dialer2_ne_pane_t1

0x5391,	// (0x0007184c) cell_dialer2_keypad_pane_ParamLimits

0x5391,	// (0x0007184c) cell_dialer2_keypad_pane

0xd4e2,	// (0x0007999d) bg_button_pane_pane_cp04_ParamLimits

0xd4e2,	// (0x0007999d) bg_button_pane_pane_cp04

0x53b3,	// (0x0007186e) cell_dialer2_keypad_pane_g1_ParamLimits

0x53b3,	// (0x0007186e) cell_dialer2_keypad_pane_g1

0x125b,	// (0x0006d716) aid_placing_vt_set_content_ParamLimits

0x125b,	// (0x0006d716) aid_placing_vt_set_content

0x1283,	// (0x0006d73e) aid_placing_vt_set_title_ParamLimits

0x1283,	// (0x0006d73e) aid_placing_vt_set_title

0x90a9,	// (0x00075564) main_image3_pane

0x5479,	// (0x00071934) area_side_right_pane_cp01_ParamLimits

0x5479,	// (0x00071934) area_side_right_pane_cp01

0x97ee,	// (0x00075ca9) main_image3_pane_g1_ParamLimits

0x97ee,	// (0x00075ca9) main_image3_pane_g1

0x5490,	// (0x0007194b) main_image3_pane_g2_ParamLimits

0x5490,	// (0x0007194b) main_image3_pane_g2

0x54b8,	// (0x00071973) main_image3_pane_g3_ParamLimits

0x54b8,	// (0x00071973) main_image3_pane_g3

0x54e2,	// (0x0007199d) main_image3_pane_g4_ParamLimits

0x54e2,	// (0x0007199d) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007bd7a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007bd7a) main_image3_pane_g

0x550c,	// (0x000719c7) main_image3_pane_t1_ParamLimits

0x550c,	// (0x000719c7) main_image3_pane_t1

0x5564,	// (0x00071a1f) main_image3_pane_t2_ParamLimits

0x5564,	// (0x00071a1f) main_image3_pane_t2

0x55b6,	// (0x00071a71) main_image3_pane_t3_ParamLimits

0x55b6,	// (0x00071a71) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007bd83) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007bd83) main_image3_pane_t

0xa1ae,	// (0x00076669) grid_sctrl_middle_pane_cp01_ParamLimits

0xa1ae,	// (0x00076669) grid_sctrl_middle_pane_cp01

0x563e,	// (0x00071af9) cell_sctrl_middle_pane_cp01_ParamLimits

0x563e,	// (0x00071af9) cell_sctrl_middle_pane_cp01

0x565b,	// (0x00071b16) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x565b,	// (0x00071b16) cell_sctrl_middle_pane_cp01_g1

0x90a9,	// (0x00075564) main_call4_pane

0x5671,	// (0x00071b2c) aid_size_button_call4_ParamLimits

0x5671,	// (0x00071b2c) aid_size_button_call4

0x56a2,	// (0x00071b5d) call4_windows_pane_ParamLimits

0x56a2,	// (0x00071b5d) call4_windows_pane

0x56c2,	// (0x00071b7d) grid_call4_button_pane_ParamLimits

0x56c2,	// (0x00071b7d) grid_call4_button_pane

0xd4ee,	// (0x000799a9) call4_windows_conf_pane

0xd503,	// (0x000799be) popup_call4_audio_first_window_ParamLimits

0xd503,	// (0x000799be) popup_call4_audio_first_window

0xd54f,	// (0x00079a0a) popup_call4_audio_second_window_ParamLimits

0xd54f,	// (0x00079a0a) popup_call4_audio_second_window

0xd563,	// (0x00079a1e) popup_call4_audio_wait_window_ParamLimits

0xd563,	// (0x00079a1e) popup_call4_audio_wait_window

0x56ef,	// (0x00071baa) cell_call4_button_pane_ParamLimits

0x56ef,	// (0x00071baa) cell_call4_button_pane

0x5718,	// (0x00071bd3) bg_button_pane_cp09_ParamLimits

0x5718,	// (0x00071bd3) bg_button_pane_cp09

0x5724,	// (0x00071bdf) cell_call4_button_pane_g1_ParamLimits

0x5724,	// (0x00071bdf) cell_call4_button_pane_g1

0x574a,	// (0x00071c05) cell_call4_button_pane_t1_ParamLimits

0x574a,	// (0x00071c05) cell_call4_button_pane_t1

0xd5ab,	// (0x00079a66) popup_call4_audio_conf_window_ParamLimits

0xd5ab,	// (0x00079a66) popup_call4_audio_conf_window

0x497a,	// (0x00070e35) mup3_progress_pane_t1_ParamLimits

0x4999,	// (0x00070e54) mup3_progress_pane_t2_ParamLimits

0xce96,	// (0x00079351) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007bc57) mup3_progress_pane_t_ParamLimits

0xceb3,	// (0x0007936e) mup_progress_pane_cp03_ParamLimits

0x4f86,	// (0x00071441) mup3_control_keys_pane_g4_copy1

0x9994,	// (0x00075e4f) mp4_rocker2_pane_ParamLimits

0x9994,	// (0x00075e4f) mp4_rocker2_pane

0xd5bf,	// (0x00079a7a) mp4_rocker2_pane_g1

0xd5c7,	// (0x00079a82) mp4_rocker2_pane_g2

0x9a02,	// (0x00075ebd) mp4_rocker2_pane_g3

0x9a0a,	// (0x00075ec5) mp4_rocker2_pane_g4

0x9a12,	// (0x00075ecd) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007bd8c) mp4_rocker2_pane_g

0x90a9,	// (0x00075564) main_camera4_pane

0x90a9,	// (0x00075564) main_video4_pane

0x5209,	// (0x000716c4) main_video_tele_dialer_pane_t1_ParamLimits

0x5209,	// (0x000716c4) main_video_tele_dialer_pane_t1

0x5222,	// (0x000716dd) main_video_tele_dialer_pane_t2_ParamLimits

0x5222,	// (0x000716dd) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007bd46) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007bd46) main_video_tele_dialer_pane_t

0x5788,	// (0x00071c43) cam4_autofocus_pane_ParamLimits

0x5788,	// (0x00071c43) cam4_autofocus_pane

0x579e,	// (0x00071c59) cam4_image_uncrop_pane_ParamLimits

0x579e,	// (0x00071c59) cam4_image_uncrop_pane

0x57b8,	// (0x00071c73) cam4_indicators_pane_ParamLimits

0x57b8,	// (0x00071c73) cam4_indicators_pane

0x57e3,	// (0x00071c9e) main_camera4_pane_g1_ParamLimits

0x57e3,	// (0x00071c9e) main_camera4_pane_g1

0x57f5,	// (0x00071cb0) main_camera4_pane_g2_ParamLimits

0x57f5,	// (0x00071cb0) main_camera4_pane_g2

0x5808,	// (0x00071cc3) main_camera4_pane_g3_ParamLimits

0x5808,	// (0x00071cc3) main_camera4_pane_g3

0x581b,	// (0x00071cd6) main_camera4_pane_g4_ParamLimits

0x581b,	// (0x00071cd6) main_camera4_pane_g4

0x582e,	// (0x00071ce9) main_camera4_pane_g5_ParamLimits

0x582e,	// (0x00071ce9) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007bd97) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007bd97) main_camera4_pane_g

0x5852,	// (0x00071d0d) main_camera4_pane_t1_ParamLimits

0x5852,	// (0x00071d0d) main_camera4_pane_t1

0x9a36,	// (0x00075ef1) bg_tb_trans_pane_cp06

0x9a4c,	// (0x00075f07) cam4_indicators_pane_g1

0x9a5d,	// (0x00075f18) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007bdb2) cam4_indicators_pane_g

0x9a7b,	// (0x00075f36) cam4_indicators_pane_t1

0x58b6,	// (0x00071d71) main_video4_pane_g1_ParamLimits

0x58b6,	// (0x00071d71) main_video4_pane_g1

0x58c5,	// (0x00071d80) main_video4_pane_g2_ParamLimits

0x58c5,	// (0x00071d80) main_video4_pane_g2

0x58d4,	// (0x00071d8f) main_video4_pane_g3_ParamLimits

0x58d4,	// (0x00071d8f) main_video4_pane_g3

0x58e3,	// (0x00071d9e) main_video4_pane_g4_ParamLimits

0x58e3,	// (0x00071d9e) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007bdb9) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007bdb9) main_video4_pane_g

0x5901,	// (0x00071dbc) vid4_indicators_pane_ParamLimits

0x5901,	// (0x00071dbc) vid4_indicators_pane

0x592f,	// (0x00071dea) video4_image_uncrop_cif_pane_ParamLimits

0x592f,	// (0x00071dea) video4_image_uncrop_cif_pane

0x5949,	// (0x00071e04) video4_image_uncrop_nhd_pane_ParamLimits

0x5949,	// (0x00071e04) video4_image_uncrop_nhd_pane

0x579e,	// (0x00071c59) video4_image_uncrop_vga_pane_ParamLimits

0x579e,	// (0x00071c59) video4_image_uncrop_vga_pane

0x909b,	// (0x00075556) bg_tb_trans_pane_cp07

0x9aa5,	// (0x00075f60) vid4_indicators_pane_g1

0x9ab9,	// (0x00075f74) vid4_indicators_pane_g2

0x9acd,	// (0x00075f88) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007bdc4) vid4_indicators_pane_g

0x9afa,	// (0x00075fb5) vid4_indicators_pane_t1

0x595d,	// (0x00071e18) cam4_autofocus_pane_g1

0x5965,	// (0x00071e20) cam4_autofocus_pane_g2

0x596d,	// (0x00071e28) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007bdcf) cam4_autofocus_pane_g

0x5975,	// (0x00071e30) cam4_autofocus_pane_g3_copy1

0x5251,	// (0x0007170c) video_down_pane_cp_t1

0x525f,	// (0x0007171a) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007bd4b) video_down_pane_cp_t

0x909b,	// (0x00075556) popup_vitu2_window_ParamLimits

0x909b,	// (0x00075556) popup_vitu2_window

0x597d,	// (0x00071e38) aid_size_cell2_itu2_ParamLimits

0x597d,	// (0x00071e38) aid_size_cell2_itu2

0x59a3,	// (0x00071e5e) aid_size_cell_itu2_ParamLimits

0x59a3,	// (0x00071e5e) aid_size_cell_itu2

0x59fe,	// (0x00071eb9) bg_popup_window_pane_cp09_ParamLimits

0x59fe,	// (0x00071eb9) bg_popup_window_pane_cp09

0x5a0c,	// (0x00071ec7) field_vitu2_entry_pane_ParamLimits

0x5a0c,	// (0x00071ec7) field_vitu2_entry_pane

0x5a2f,	// (0x00071eea) grid_vitu2_function_pane_ParamLimits

0x5a2f,	// (0x00071eea) grid_vitu2_function_pane

0x5a7a,	// (0x00071f35) grid_vitu2_itu_pane_ParamLimits

0x5a7a,	// (0x00071f35) grid_vitu2_itu_pane

0x5b0d,	// (0x00071fc8) cell_vitu2_itu_pane_ParamLimits

0x5b0d,	// (0x00071fc8) cell_vitu2_itu_pane

0x5b39,	// (0x00071ff4) cell_vitu2_function_pane_ParamLimits

0x5b39,	// (0x00071ff4) cell_vitu2_function_pane

0xd5cf,	// (0x00079a8a) bg_popup_call_pane_cp08_ParamLimits

0xd5cf,	// (0x00079a8a) bg_popup_call_pane_cp08

0xd5e6,	// (0x00079aa1) field_vitu2_entry_pane_g1

0xd5f2,	// (0x00079aad) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007bdd6) field_vitu2_entry_pane_g

0x5b78,	// (0x00072033) field_vitu2_entry_pane_t1_ParamLimits

0x5b78,	// (0x00072033) field_vitu2_entry_pane_t1

0xa230,	// (0x000766eb) field_vitu2_entry_pane_t2_ParamLimits

0xa230,	// (0x000766eb) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007bddd) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007bddd) field_vitu2_entry_pane_t

0x5ba9,	// (0x00072064) bg_button_pane_cp010_ParamLimits

0x5ba9,	// (0x00072064) bg_button_pane_cp010

0x9b11,	// (0x00075fcc) cell_vitu2_itu_pane_g1

0x5bc5,	// (0x00072080) cell_vitu2_itu_pane_t1_ParamLimits

0x5bc5,	// (0x00072080) cell_vitu2_itu_pane_t1

0xffd5,	// (0x0006c490) cell_vitu2_itu_pane_t2_ParamLimits

0xffd5,	// (0x0006c490) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007bde7) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007bde7) cell_vitu2_itu_pane_t

0x909b,	// (0x00075556) bg_button_pane_cp011

0x5c23,	// (0x000720de) cell_vitu2_function_pane_g1

0x90a9,	// (0x00075564) main_myfav_hc_pane

0x5606,	// (0x00071ac1) popup_image3_note_pane_ParamLimits

0x5606,	// (0x00071ac1) popup_image3_note_pane

0x5622,	// (0x00071add) popup_image3_tool_bar_pane_ParamLimits

0x5622,	// (0x00071add) popup_image3_tool_bar_pane

0x0063,	// (0x0006c51e) cell_vitu2_itu_pane_t3_ParamLimits

0x0063,	// (0x0006c51e) cell_vitu2_itu_pane_t3

0x9033,	// (0x000754ee) bg_popup_trans_pane

0xd614,	// (0x00079acf) grid_image3_tool_bar_pane

0xd61e,	// (0x00079ad9) bg_popup_trans_pane_g1

0xab5c,	// (0x00077017) bg_popup_trans_pane_g2

0xd626,	// (0x00079ae1) bg_popup_trans_pane_g3

0xd62e,	// (0x00079ae9) bg_popup_trans_pane_g4

0xd636,	// (0x00079af1) bg_popup_trans_pane_g5

0xd63e,	// (0x00079af9) bg_popup_trans_pane_g6

0xd646,	// (0x00079b01) bg_popup_trans_pane_g7

0xd64e,	// (0x00079b09) bg_popup_trans_pane_g8

0xab3c,	// (0x00076ff7) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007bdee) bg_popup_trans_pane_g

0xd656,	// (0x00079b11) cell_image3_tool_bar_pane_ParamLimits

0xd656,	// (0x00079b11) cell_image3_tool_bar_pane

0xcbaf,	// (0x0007906a) cell_image3_tool_bar_pane_g1

0x9033,	// (0x000754ee) bg_popup_trans_pane_cp1

0xd66a,	// (0x00079b25) popup_image3_note_pane_t1

0xd678,	// (0x00079b33) popup_image3_note_pane_t2

0xd686,	// (0x00079b41) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007be01) popup_image3_note_pane_t

0xd694,	// (0x00079b4f) popup_image3_note_pane_t3_copy1

0x5c37,	// (0x000720f2) bg_myfav_hc_instruction_pane_ParamLimits

0x5c37,	// (0x000720f2) bg_myfav_hc_instruction_pane

0x5c4d,	// (0x00072108) cell_myfav_contact_pane_ParamLimits

0x5c4d,	// (0x00072108) cell_myfav_contact_pane

0x5c6b,	// (0x00072126) cell_myfav_contact_pane_cp1_ParamLimits

0x5c6b,	// (0x00072126) cell_myfav_contact_pane_cp1

0x5c83,	// (0x0007213e) cell_myfav_contact_pane_cp2_ParamLimits

0x5c83,	// (0x0007213e) cell_myfav_contact_pane_cp2

0x5c9b,	// (0x00072156) cell_myfav_contact_pane_cp3_ParamLimits

0x5c9b,	// (0x00072156) cell_myfav_contact_pane_cp3

0x5cb2,	// (0x0007216d) cell_myfav_contact_pane_cp4_ParamLimits

0x5cb2,	// (0x0007216d) cell_myfav_contact_pane_cp4

0x5cca,	// (0x00072185) cell_myfav_contact_pane_cp5_ParamLimits

0x5cca,	// (0x00072185) cell_myfav_contact_pane_cp5

0x5cde,	// (0x00072199) cell_myfav_contact_pane_cp6_ParamLimits

0x5cde,	// (0x00072199) cell_myfav_contact_pane_cp6

0x5cf4,	// (0x000721af) cell_myfav_contact_pane_cp7_ParamLimits

0x5cf4,	// (0x000721af) cell_myfav_contact_pane_cp7

0xd6a2,	// (0x00079b5d) listscroll_gen_pane_cp05

0x5d0e,	// (0x000721c9) main_myfav_hc_pane_g1_ParamLimits

0x5d0e,	// (0x000721c9) main_myfav_hc_pane_g1

0x5d28,	// (0x000721e3) main_myfav_hc_pane_g2_ParamLimits

0x5d28,	// (0x000721e3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007be08) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007be08) main_myfav_hc_pane_g

0x5d5a,	// (0x00072215) main_myfav_hc_pane_t1_ParamLimits

0x5d5a,	// (0x00072215) main_myfav_hc_pane_t1

0xd6ab,	// (0x00079b66) main_myfav_hc_pane_t2_ParamLimits

0xd6ab,	// (0x00079b66) main_myfav_hc_pane_t2

0xd6bd,	// (0x00079b78) main_myfav_hc_pane_t3_ParamLimits

0xd6bd,	// (0x00079b78) main_myfav_hc_pane_t3

0x5d71,	// (0x0007222c) main_myfav_hc_pane_t4_ParamLimits

0x5d71,	// (0x0007222c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007be0f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007be0f) main_myfav_hc_pane_t

0xcbaf,	// (0x0007906a) bg_myfav_hc_instruction_pane_g1

0xd6cf,	// (0x00079b8a) cell_myfav_contact_pane_g1_ParamLimits

0xd6cf,	// (0x00079b8a) cell_myfav_contact_pane_g1

0xd6cf,	// (0x00079b8a) cell_myfav_contact_pane_g2_ParamLimits

0xd6cf,	// (0x00079b8a) cell_myfav_contact_pane_g2

0xd6db,	// (0x00079b96) cell_myfav_contact_pane_g3_ParamLimits

0xd6db,	// (0x00079b96) cell_myfav_contact_pane_g3

0xce80,	// (0x0007933b) cell_myfav_contact_pane_g4_ParamLimits

0xce80,	// (0x0007933b) cell_myfav_contact_pane_g4

0xd6e8,	// (0x00079ba3) cell_myfav_contact_pane_g5_ParamLimits

0xd6e8,	// (0x00079ba3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007be1a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007be1a) cell_myfav_contact_pane_g

0x5d42,	// (0x000721fd) main_myfav_hc_pane_g3_ParamLimits

0x5d42,	// (0x000721fd) main_myfav_hc_pane_g3

0x0248,	// (0x0006c703) popup_adpt_find_window

0x5d99,	// (0x00072254) afind_page_pane_ParamLimits

0x5d99,	// (0x00072254) afind_page_pane

0x5dae,	// (0x00072269) aid_size_cell_afind_ParamLimits

0x5dae,	// (0x00072269) aid_size_cell_afind

0x5dcc,	// (0x00072287) bg_popup_sub_pane_cp09_ParamLimits

0x5dcc,	// (0x00072287) bg_popup_sub_pane_cp09

0x5dd9,	// (0x00072294) find_pane_cp01_ParamLimits

0x5dd9,	// (0x00072294) find_pane_cp01

0xd6f4,	// (0x00079baf) grid_afind_control_pane_ParamLimits

0xd6f4,	// (0x00079baf) grid_afind_control_pane

0x5de6,	// (0x000722a1) grid_afind_pane_ParamLimits

0x5de6,	// (0x000722a1) grid_afind_pane

0x5e05,	// (0x000722c0) cell_afind_pane_ParamLimits

0x5e05,	// (0x000722c0) cell_afind_pane

0xcbaf,	// (0x0007906a) afind_page_pane_g1

0x5e6c,	// (0x00072327) afind_page_pane_g2

0x5e75,	// (0x00072330) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007be25) afind_page_pane_g

0x5e7e,	// (0x00072339) afind_page_pane_t1

0xd708,	// (0x00079bc3) cell_afind_grid_control_pane_ParamLimits

0xd708,	// (0x00079bc3) cell_afind_grid_control_pane

0xd4e2,	// (0x0007999d) bg_button_pane_cp69_ParamLimits

0xd4e2,	// (0x0007999d) bg_button_pane_cp69

0x5e9e,	// (0x00072359) cell_afind_pane_g1_ParamLimits

0x5e9e,	// (0x00072359) cell_afind_pane_g1

0x5eab,	// (0x00072366) cell_afind_pane_t1_ParamLimits

0x5eab,	// (0x00072366) cell_afind_pane_t1

0xa955,	// (0x00076e10) bg_button_pane_cp72

0xd717,	// (0x00079bd2) cell_afind_grid_control_pane_g1

0x2f17,	// (0x0006f3d2) aid_image_placing_area_ParamLimits

0x2f17,	// (0x0006f3d2) aid_image_placing_area

0xd1b0,	// (0x0007966b) field_vitu_entry_pane_g1_ParamLimits

0xd1b0,	// (0x0007966b) field_vitu_entry_pane_g1

0xd1bc,	// (0x00079677) field_vitu_entry_pane_g2_ParamLimits

0xd1bc,	// (0x00079677) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007bcd6) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007bcd6) field_vitu_entry_pane_g

0x5052,	// (0x0007150d) cell_vitu_itu_pane_g1_ParamLimits

0x50a2,	// (0x0007155d) cell_vitu_itu_pane_t3_ParamLimits

0x50a2,	// (0x0007155d) cell_vitu_itu_pane_t3

0xd492,	// (0x0007994d) mp4_progress_pane_t1_ParamLimits

0xd4ab,	// (0x00079966) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007bd6b) mp4_progress_pane_t_ParamLimits

0xd4c4,	// (0x0007997f) mup_progress_pane_cp04_ParamLimits

0x5d85,	// (0x00072240) main_myfav_hc_pane_t5_ParamLimits

0x5d85,	// (0x00072240) main_myfav_hc_pane_t5

0x9051,	// (0x0007550c) aid_zoom_text_primary

0x0248,	// (0x0006c703) popup_adpt_find_window_ParamLimits

0x909b,	// (0x00075556) main_cam_set_pane

0x57cf,	// (0x00071c8a) cam4_zoom_pane_ParamLimits

0x57cf,	// (0x00071c8a) cam4_zoom_pane

0x5ebd,	// (0x00072378) main_cam_set_pane_g1_ParamLimits

0x5ebd,	// (0x00072378) main_cam_set_pane_g1

0x5ecb,	// (0x00072386) main_cam_set_pane_g2_ParamLimits

0x5ecb,	// (0x00072386) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007be2c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007be2c) main_cam_set_pane_g

0x5eec,	// (0x000723a7) main_cam_set_pane_t1_ParamLimits

0x5eec,	// (0x000723a7) main_cam_set_pane_t1

0x5f07,	// (0x000723c2) main_cset_listscroll_pane_ParamLimits

0x5f07,	// (0x000723c2) main_cset_listscroll_pane

0x5f27,	// (0x000723e2) main_cset_slider_pane_ParamLimits

0x5f27,	// (0x000723e2) main_cset_slider_pane

0xd728,	// (0x00079be3) main_cset_list_pane_ParamLimits

0xd728,	// (0x00079be3) main_cset_list_pane

0xd738,	// (0x00079bf3) scroll_pane_cp028

0x5f4d,	// (0x00072408) aid_area_touch_slider

0x5f69,	// (0x00072424) cset_slider_pane

0x5f93,	// (0x0007244e) main_cset_slider_pane_g1

0x5fa8,	// (0x00072463) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007be31) main_cset_slider_pane_g

0xd771,	// (0x00079c2c) main_cset_slider_pane_t1

0x6064,	// (0x0007251f) main_cset_slider_pane_t2

0x607e,	// (0x00072539) main_cset_slider_pane_t3

0x6098,	// (0x00072553) main_cset_slider_pane_t4

0x60b2,	// (0x0007256d) main_cset_slider_pane_t5

0x60cc,	// (0x00072587) main_cset_slider_pane_t6

0x60e1,	// (0x0007259c) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007be56) main_cset_slider_pane_t

0x61e5,	// (0x000726a0) cset_list_set_pane_ParamLimits

0x61e5,	// (0x000726a0) cset_list_set_pane

0x61f8,	// (0x000726b3) aid_position_infowindow_above

0x6200,	// (0x000726bb) aid_position_infowindow_below

0xa24d,	// (0x00076708) cset_list_set_pane_g1_ParamLimits

0xa24d,	// (0x00076708) cset_list_set_pane_g1

0x6208,	// (0x000726c3) cset_list_set_pane_g3_ParamLimits

0x6208,	// (0x000726c3) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007be75) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007be75) cset_list_set_pane_g

0xa259,	// (0x00076714) cset_list_set_pane_t1_ParamLimits

0xa259,	// (0x00076714) cset_list_set_pane_t1

0xa1ae,	// (0x00076669) list_highlight_pane_cp021_ParamLimits

0xa1ae,	// (0x00076669) list_highlight_pane_cp021

0xb4d0,	// (0x0007798b) cset_slider_pane_g1

0xb4e2,	// (0x0007799d) cset_slider_pane_g2

0xb4d9,	// (0x00077994) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007be7a) cset_slider_pane_g

0x9b23,	// (0x00075fde) aid_area_touch_cam4_zoom

0x9b2b,	// (0x00075fe6) cam4_zoom_cont_pane

0x9b33,	// (0x00075fee) cam4_zoom_pane_g1

0x9b3b,	// (0x00075ff6) cam4_zoom_pane_g2

0x6217,	// (0x000726d2) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007be81) cam4_zoom_pane_g

0x9b43,	// (0x00075ffe) cam4_zoom_cont_pane_g1

0x9b4c,	// (0x00076007) cam4_zoom_cont_pane_g2

0x9b55,	// (0x00076010) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007be88) cam4_zoom_cont_pane_g

0x568f,	// (0x00071b4a) call4_image_pane_ParamLimits

0x568f,	// (0x00071b4a) call4_image_pane

0xd4ee,	// (0x000799a9) call4_windows_conf_pane_ParamLimits

0xd52d,	// (0x000799e8) popup_call4_audio_in_window_ParamLimits

0xd52d,	// (0x000799e8) popup_call4_audio_in_window

0x9033,	// (0x000754ee) bg_popup_call2_act_pane_cp02

0xd5a3,	// (0x00079a5e) call4_list_conf_pane

0xcbaf,	// (0x0007906a) call4_image_pane_g1

0xcbaf,	// (0x0007906a) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007bb97) call4_image_pane_g

0xd835,	// (0x00079cf0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd835,	// (0x00079cf0) list_single_graphic_popup_conf4_pane

0x9033,	// (0x000754ee) list_highlight_pane_cp022

0xd848,	// (0x00079d03) list_single_graphic_popup_conf4_pane_g1

0xb0a2,	// (0x0007755d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007be8f) list_single_graphic_popup_conf4_pane_g

0xd850,	// (0x00079d0b) list_single_graphic_popup_conf4_pane_t1

0x13a7,	// (0x0006d862) popup_vtel_slider_window_ParamLimits

0x13a7,	// (0x0006d862) popup_vtel_slider_window

0xd4d0,	// (0x0007998b) dialer2_ne_pane_t2_ParamLimits

0xd4d0,	// (0x0007998b) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007bd70) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007bd70) dialer2_ne_pane_t

0xc992,	// (0x00078e4d) bg_popup_sub_pane_cp010_ParamLimits

0xc992,	// (0x00078e4d) bg_popup_sub_pane_cp010

0x621f,	// (0x000726da) popup_vtel_slider_window_g1_ParamLimits

0x621f,	// (0x000726da) popup_vtel_slider_window_g1

0x6232,	// (0x000726ed) popup_vtel_slider_window_g2_ParamLimits

0x6232,	// (0x000726ed) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007be94) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007be94) popup_vtel_slider_window_g

0x6288,	// (0x00072743) vtel_slider_pane_ParamLimits

0x6288,	// (0x00072743) vtel_slider_pane

0x62aa,	// (0x00072765) vtel_slider_pane_g1_ParamLimits

0x62aa,	// (0x00072765) vtel_slider_pane_g1

0x62be,	// (0x00072779) vtel_slider_pane_g2_ParamLimits

0x62be,	// (0x00072779) vtel_slider_pane_g2

0x62d6,	// (0x00072791) vtel_slider_pane_g3_ParamLimits

0x62d6,	// (0x00072791) vtel_slider_pane_g3

0x62aa,	// (0x00072765) vtel_slider_pane_g4_ParamLimits

0x62aa,	// (0x00072765) vtel_slider_pane_g4

0x62ec,	// (0x000727a7) vtel_slider_pane_g5_ParamLimits

0x62ec,	// (0x000727a7) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007be9d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007be9d) vtel_slider_pane_g

0x909b,	// (0x00075556) main_gallery2_pane

0x59cf,	// (0x00071e8a) aid_size_row_itut2_dropdow_list_ParamLimits

0x59cf,	// (0x00071e8a) aid_size_row_itut2_dropdow_list

0x5a54,	// (0x00071f0f) grid_vitu2_function_top_pane_ParamLimits

0x5a54,	// (0x00071f0f) grid_vitu2_function_top_pane

0x5abb,	// (0x00071f76) popup_vitu2_dropdown_list_window_ParamLimits

0x5abb,	// (0x00071f76) popup_vitu2_dropdown_list_window

0x5ae1,	// (0x00071f9c) popup_vitu2_match_list_window

0x6302,	// (0x000727bd) cell_vitu2_function_top_pane_ParamLimits

0x6302,	// (0x000727bd) cell_vitu2_function_top_pane

0x6324,	// (0x000727df) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6324,	// (0x000727df) cell_vitu2_function_top_pane_cp01

0x6340,	// (0x000727fb) cell_vitu2_function_top_wide_pane_ParamLimits

0x6340,	// (0x000727fb) cell_vitu2_function_top_wide_pane

0x909b,	// (0x00075556) bg_button_pane_cp012

0x635c,	// (0x00072817) cell_vitu2_function_top_pane_g1

0x9b5e,	// (0x00076019) bg_button_pane_cp013_ParamLimits

0x9b5e,	// (0x00076019) bg_button_pane_cp013

0x6370,	// (0x0007282b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6370,	// (0x0007282b) cell_vitu2_function_top_wide_pane_g1

0x909b,	// (0x00075556) bg_popup_sub_pane_cp20

0x6388,	// (0x00072843) list_vitu2_match_list_pane

0xd61e,	// (0x00079ad9) bg_popup_sub_pane_cp20_g1

0xd626,	// (0x00079ae1) bg_popup_sub_pane_cp20_g2

0xab5c,	// (0x00077017) bg_popup_sub_pane_cp20_g3

0xd62e,	// (0x00079ae9) bg_popup_sub_pane_cp20_g4

0xab3c,	// (0x00076ff7) bg_popup_sub_pane_cp20_g5

0xd866,	// (0x00079d21) bg_popup_sub_pane_cp20_g6

0xd63e,	// (0x00079af9) bg_popup_sub_pane_cp20_g7

0xd646,	// (0x00079b01) bg_popup_sub_pane_cp20_g8

0xd64e,	// (0x00079b09) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007bea8) bg_popup_sub_pane_cp20_g

0x9b7a,	// (0x00076035) list_vitu2_match_list_item_pane_ParamLimits

0x9b7a,	// (0x00076035) list_vitu2_match_list_item_pane

0x9b8c,	// (0x00076047) list_vitu2_match_list_item_pane_t1

0x90a9,	// (0x00075564) bg_popup_sub_pane_cp21

0x9b9a,	// (0x00076055) grid_vitu2_dropdown_list_pane

0x63db,	// (0x00072896) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x63db,	// (0x00072896) cell_vitu2_dropdown_list_char_pane

0x63fc,	// (0x000728b7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x63fc,	// (0x000728b7) cell_vitu2_dropdown_list_ctrl_pane

0xd86e,	// (0x00079d29) cell_vitu2_dropdown_list_char_pane_g1

0xd877,	// (0x00079d32) cell_vitu2_dropdown_list_char_pane_g2

0xd880,	// (0x00079d3b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007bec5) cell_vitu2_dropdown_list_char_pane_g

0x6428,	// (0x000728e3) cell_vitu2_dropdown_list_char_pane_t1

0x6436,	// (0x000728f1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6436,	// (0x000728f1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6446,	// (0x00072901) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6446,	// (0x00072901) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6457,	// (0x00072912) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6457,	// (0x00072912) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6467,	// (0x00072922) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6467,	// (0x00072922) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9a36,	// (0x00075ef1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9a36,	// (0x00075ef1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007becc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007becc) cell_vitu2_dropdown_list_ctrl_pane_g

0x6483,	// (0x0007293e) aid_size_cell_gallery2_ParamLimits

0x6483,	// (0x0007293e) aid_size_cell_gallery2

0x64a1,	// (0x0007295c) grid_gallery2_pane_ParamLimits

0x64a1,	// (0x0007295c) grid_gallery2_pane

0x64bb,	// (0x00072976) scroll_pane_cp029_ParamLimits

0x64bb,	// (0x00072976) scroll_pane_cp029

0x64c7,	// (0x00072982) cell_gallery2_pane_ParamLimits

0x64c7,	// (0x00072982) cell_gallery2_pane

0xd889,	// (0x00079d44) cell_gallery2_pane_g2

0x6523,	// (0x000729de) cell_gallery2_pane_g3

0xd891,	// (0x00079d4c) cell_gallery2_pane_g4

0xd899,	// (0x00079d54) cell_gallery2_pane_g5

0xa903,	// (0x00076dbe) grid_highlight_pane_cp10

0x5ae1,	// (0x00071f9c) popup_vitu2_match_list_window_ParamLimits

0x5af6,	// (0x00071fb1) popup_vitu2_query_window_ParamLimits

0x5af6,	// (0x00071fb1) popup_vitu2_query_window

0x90a9,	// (0x00075564) bg_vitu2_candi_button_pane

0xd86e,	// (0x00079d29) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd877,	// (0x00079d32) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd880,	// (0x00079d3b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x652b,	// (0x000729e6) bg_button_pane_cp015

0x653f,	// (0x000729fa) bg_button_pane_cp016

0x6552,	// (0x00072a0d) bg_button_pane_cp017

0xc7a5,	// (0x00078c60) bg_popup_sub_pane_cp22

0xd8a1,	// (0x00079d5c) popup_vitu2_query_window_g1

0x6597,	// (0x00072a52) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007bed7) popup_vitu2_query_window_g

0x65b6,	// (0x00072a71) popup_vitu2_query_window_t1_ParamLimits

0x65b6,	// (0x00072a71) popup_vitu2_query_window_t1

0x65eb,	// (0x00072aa6) popup_vitu2_query_window_t2_ParamLimits

0x65eb,	// (0x00072aa6) popup_vitu2_query_window_t2

0x65fd,	// (0x00072ab8) popup_vitu2_query_window_t3_ParamLimits

0x65fd,	// (0x00072ab8) popup_vitu2_query_window_t3

0x6625,	// (0x00072ae0) popup_vitu2_query_window_t4_ParamLimits

0x6625,	// (0x00072ae0) popup_vitu2_query_window_t4

0x6646,	// (0x00072b01) popup_vitu2_query_window_t5_ParamLimits

0x6646,	// (0x00072b01) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007bede) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007bede) popup_vitu2_query_window_t

0xd720,	// (0x00079bdb) main_cset_text_pane

0x5f4d,	// (0x00072408) aid_area_touch_slider_ParamLimits

0x5f69,	// (0x00072424) cset_slider_pane_ParamLimits

0x5f93,	// (0x0007244e) main_cset_slider_pane_g1_ParamLimits

0x5fa8,	// (0x00072463) main_cset_slider_pane_g2_ParamLimits

0xd741,	// (0x00079bfc) main_cset_slider_pane_g3_ParamLimits

0xd741,	// (0x00079bfc) main_cset_slider_pane_g3

0x5fbd,	// (0x00072478) main_cset_slider_pane_g4_ParamLimits

0x5fbd,	// (0x00072478) main_cset_slider_pane_g4

0x5fcc,	// (0x00072487) main_cset_slider_pane_g5_ParamLimits

0x5fcc,	// (0x00072487) main_cset_slider_pane_g5

0x5fd8,	// (0x00072493) main_cset_slider_pane_g6_ParamLimits

0x5fd8,	// (0x00072493) main_cset_slider_pane_g6

0xf976,	// (0x0007be31) main_cset_slider_pane_g_ParamLimits

0xd771,	// (0x00079c2c) main_cset_slider_pane_t1_ParamLimits

0x6064,	// (0x0007251f) main_cset_slider_pane_t2_ParamLimits

0x607e,	// (0x00072539) main_cset_slider_pane_t3_ParamLimits

0x6098,	// (0x00072553) main_cset_slider_pane_t4_ParamLimits

0x60b2,	// (0x0007256d) main_cset_slider_pane_t5_ParamLimits

0x60cc,	// (0x00072587) main_cset_slider_pane_t6_ParamLimits

0x60e1,	// (0x0007259c) main_cset_slider_pane_t7_ParamLimits

0x610b,	// (0x000725c6) main_cset_slider_pane_t8_ParamLimits

0x610b,	// (0x000725c6) main_cset_slider_pane_t8

0x6133,	// (0x000725ee) main_cset_slider_pane_t9_ParamLimits

0x6133,	// (0x000725ee) main_cset_slider_pane_t9

0x615b,	// (0x00072616) main_cset_slider_pane_t10_ParamLimits

0x615b,	// (0x00072616) main_cset_slider_pane_t10

0x6183,	// (0x0007263e) main_cset_slider_pane_t11_ParamLimits

0x6183,	// (0x0007263e) main_cset_slider_pane_t11

0x61ab,	// (0x00072666) main_cset_slider_pane_t12_ParamLimits

0x61ab,	// (0x00072666) main_cset_slider_pane_t12

0x61c8,	// (0x00072683) main_cset_slider_pane_t13_ParamLimits

0x61c8,	// (0x00072683) main_cset_slider_pane_t13

0xf99b,	// (0x0007be56) main_cset_slider_pane_t_ParamLimits

0x9033,	// (0x000754ee) bg_popup_sub_pane_cp011

0xd8ad,	// (0x00079d68) main_cset_text_pane_g1

0xd8b5,	// (0x00079d70) main_cset_text_pane_t1

0xd8c3,	// (0x00079d7e) main_cset_text_pane_t2

0xd8d1,	// (0x00079d8c) main_cset_text_pane_t3

0xd8df,	// (0x00079d9a) main_cset_text_pane_t4

0xd8ed,	// (0x00079da8) main_cset_text_pane_t5

0xd8fb,	// (0x00079db6) main_cset_text_pane_t6

0xd909,	// (0x00079dc4) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007beed) main_cset_text_pane_t

0x90a9,	// (0x00075564) main_cam4_burst_pane

0x90a9,	// (0x00075564) main_cam5_pane

0x5e8c,	// (0x00072347) bg_button_pane_cp019

0x5e95,	// (0x00072350) bg_button_pane_cp020

0xd74d,	// (0x00079c08) main_cset_slider_pane_g7_ParamLimits

0xd74d,	// (0x00079c08) main_cset_slider_pane_g7

0xd759,	// (0x00079c14) main_cset_slider_pane_g8_ParamLimits

0xd759,	// (0x00079c14) main_cset_slider_pane_g8

0x5fec,	// (0x000724a7) main_cset_slider_pane_g9_ParamLimits

0x5fec,	// (0x000724a7) main_cset_slider_pane_g9

0x5ff8,	// (0x000724b3) main_cset_slider_pane_g10_ParamLimits

0x5ff8,	// (0x000724b3) main_cset_slider_pane_g10

0x6004,	// (0x000724bf) main_cset_slider_pane_g11_ParamLimits

0x6004,	// (0x000724bf) main_cset_slider_pane_g11

0x6010,	// (0x000724cb) main_cset_slider_pane_g12_ParamLimits

0x6010,	// (0x000724cb) main_cset_slider_pane_g12

0x601c,	// (0x000724d7) main_cset_slider_pane_g13_ParamLimits

0x601c,	// (0x000724d7) main_cset_slider_pane_g13

0x6028,	// (0x000724e3) main_cset_slider_pane_g14_ParamLimits

0x6028,	// (0x000724e3) main_cset_slider_pane_g14

0x6034,	// (0x000724ef) main_cset_slider_pane_g15_ParamLimits

0x6034,	// (0x000724ef) main_cset_slider_pane_g15

0xd79f,	// (0x00079c5a) main_cset_slider_pane_t14_ParamLimits

0xd79f,	// (0x00079c5a) main_cset_slider_pane_t14

0xd7fc,	// (0x00079cb7) main_cset_slider_pane_t15_ParamLimits

0xd7fc,	// (0x00079cb7) main_cset_slider_pane_t15

0x66bd,	// (0x00072b78) aid_cam4_burst_size_cell_ParamLimits

0x66bd,	// (0x00072b78) aid_cam4_burst_size_cell

0x66dd,	// (0x00072b98) grid_cam4_burst_pane_ParamLimits

0x66dd,	// (0x00072b98) grid_cam4_burst_pane

0x6715,	// (0x00072bd0) linegrid_cam4_burst_pane_ParamLimits

0x6715,	// (0x00072bd0) linegrid_cam4_burst_pane

0xd917,	// (0x00079dd2) scroll_pane_cp30_ParamLimits

0xd917,	// (0x00079dd2) scroll_pane_cp30

0x673b,	// (0x00072bf6) cell_cam4_burst_pane_ParamLimits

0x673b,	// (0x00072bf6) cell_cam4_burst_pane

0xd923,	// (0x00079dde) linegrid_cam4_burst_pane_g1_ParamLimits

0xd923,	// (0x00079dde) linegrid_cam4_burst_pane_g1

0x6788,	// (0x00072c43) linegrid_cam4_burst_pane_g2_ParamLimits

0x6788,	// (0x00072c43) linegrid_cam4_burst_pane_g2

0xd930,	// (0x00079deb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd930,	// (0x00079deb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007befc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007befc) linegrid_cam4_burst_pane_g

0x6799,	// (0x00072c54) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6799,	// (0x00072c54) linegrid_cam4_burst_pane_g3_copy1

0xd93d,	// (0x00079df8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd93d,	// (0x00079df8) linegrid_cam4_burst_pane_g4

0x67b3,	// (0x00072c6e) linegrid_cam4_burst_pane_g5_ParamLimits

0x67b3,	// (0x00072c6e) linegrid_cam4_burst_pane_g5

0x67c4,	// (0x00072c7f) linegrid_cam4_burst_pane_g6_ParamLimits

0x67c4,	// (0x00072c7f) linegrid_cam4_burst_pane_g6

0xd94a,	// (0x00079e05) linegrid_cam4_burst_pane_g7_ParamLimits

0xd94a,	// (0x00079e05) linegrid_cam4_burst_pane_g7

0x67db,	// (0x00072c96) cell_cam4_burst_pane_g1

0xd963,	// (0x00079e1e) main_cam5_pane_t1_ParamLimits

0xd963,	// (0x00079e1e) main_cam5_pane_t1

0xd975,	// (0x00079e30) main_cam5_pane_t2_ParamLimits

0xd975,	// (0x00079e30) main_cam5_pane_t2

0xd987,	// (0x00079e42) main_cam5_pane_t3_ParamLimits

0xd987,	// (0x00079e42) main_cam5_pane_t3

0xd999,	// (0x00079e54) main_cam5_pane_t4_ParamLimits

0xd999,	// (0x00079e54) main_cam5_pane_t4

0xd9b1,	// (0x00079e6c) main_cam5_pane_t5_ParamLimits

0xd9b1,	// (0x00079e6c) main_cam5_pane_t5

0xd9c5,	// (0x00079e80) main_cam5_pane_t6_ParamLimits

0xd9c5,	// (0x00079e80) main_cam5_pane_t6

0xd9d9,	// (0x00079e94) main_cam5_pane_t7_ParamLimits

0xd9d9,	// (0x00079e94) main_cam5_pane_t7

0xd9eb,	// (0x00079ea6) main_cam5_pane_t8_ParamLimits

0xd9eb,	// (0x00079ea6) main_cam5_pane_t8

0xda07,	// (0x00079ec2) main_cam5_pane_t9_ParamLimits

0xda07,	// (0x00079ec2) main_cam5_pane_t9

0xda19,	// (0x00079ed4) main_cam5_pane_t10_ParamLimits

0xda19,	// (0x00079ed4) main_cam5_pane_t10

0xda2b,	// (0x00079ee6) main_cam5_pane_t11_ParamLimits

0xda2b,	// (0x00079ee6) main_cam5_pane_t11

0xda3d,	// (0x00079ef8) main_cam5_pane_t12_ParamLimits

0xda3d,	// (0x00079ef8) main_cam5_pane_t12

0xda52,	// (0x00079f0d) main_cam5_pane_t13_ParamLimits

0xda52,	// (0x00079f0d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007bf08) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007bf08) main_cam5_pane_t

0x02ca,	// (0x0006c785) popup_scut_keymap_window_ParamLimits

0x02ca,	// (0x0006c785) popup_scut_keymap_window

0x67f0,	// (0x00072cab) aid_size_cell_brow_shortcut

0xa903,	// (0x00076dbe) bg_popup_window_pane_cp010

0x67fc,	// (0x00072cb7) grid_scut_pane

0x6808,	// (0x00072cc3) cell_scut_pane_ParamLimits

0x6808,	// (0x00072cc3) cell_scut_pane

0x681f,	// (0x00072cda) cell_scut_pane_g1

0xda6f,	// (0x00079f2a) cell_scut_pane_t1

0xda7e,	// (0x00079f39) cell_scut_pane_t2

0x6828,	// (0x00072ce3) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007bf23) cell_scut_pane_t

0x453d,	// (0x000709f8) main_mup3_pane_g8_ParamLimits

0x453d,	// (0x000709f8) main_mup3_pane_g8

0x59e6,	// (0x00071ea1) area_vitu2_query_pane_ParamLimits

0x59e6,	// (0x00071ea1) area_vitu2_query_pane

0x6565,	// (0x00072a20) input_focus_pane_cp08

0xda8d,	// (0x00079f48) area_vitu2_query_pane_g1

0x6836,	// (0x00072cf1) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007bf2a) area_vitu2_query_pane_g

0x6847,	// (0x00072d02) area_vitu2_query_pane_t1_ParamLimits

0x6847,	// (0x00072d02) area_vitu2_query_pane_t1

0x685b,	// (0x00072d16) area_vitu2_query_pane_t2_ParamLimits

0x685b,	// (0x00072d16) area_vitu2_query_pane_t2

0x686f,	// (0x00072d2a) area_vitu2_query_pane_t3_ParamLimits

0x686f,	// (0x00072d2a) area_vitu2_query_pane_t3

0xa294,	// (0x0007674f) area_vitu2_query_pane_t4_ParamLimits

0xa294,	// (0x0007674f) area_vitu2_query_pane_t4

0xa2bc,	// (0x00076777) area_vitu2_query_pane_t5_ParamLimits

0xa2bc,	// (0x00076777) area_vitu2_query_pane_t5

0xa2e4,	// (0x0007679f) area_vitu2_query_pane_t6_ParamLimits

0xa2e4,	// (0x0007679f) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007bf2f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007bf2f) area_vitu2_query_pane_t

0x6897,	// (0x00072d52) bg_button_pane_cp018

0x68a5,	// (0x00072d60) bg_button_pane_cp021

0x68b1,	// (0x00072d6c) bg_button_pane_cp022

0x68c2,	// (0x00072d7d) input_focus_pane_cp09

0xb1c6,	// (0x00077681) aid_size_touch_mv_arrow_left

0xb1f1,	// (0x000776ac) aid_size_touch_mv_arrow_right

0x604c,	// (0x00072507) main_cset_slider_pane_g16_ParamLimits

0x604c,	// (0x00072507) main_cset_slider_pane_g16

0x6058,	// (0x00072513) main_cset_slider_pane_g17_ParamLimits

0x6058,	// (0x00072513) main_cset_slider_pane_g17

0x67db,	// (0x00072c96) cell_cam4_burst_pane_g1_ParamLimits

0x9033,	// (0x000754ee) compa_mode_pane

0x6242,	// (0x000726fd) popup_vtel_slider_window_g3_ParamLimits

0x6242,	// (0x000726fd) popup_vtel_slider_window_g3

0x6259,	// (0x00072714) popup_vtel_slider_window_g4_ParamLimits

0x6259,	// (0x00072714) popup_vtel_slider_window_g4

0x6270,	// (0x0007272b) popup_vtel_slider_window_t1_ParamLimits

0x6270,	// (0x0007272b) popup_vtel_slider_window_t1

0x90a9,	// (0x00075564) main_cl_pane

0x96a6,	// (0x00075b61) popup_imed_adjust2_window_ParamLimits

0xc7a5,	// (0x00078c60) bg_tb_trans_pane_cp05_ParamLimits

0xd0dc,	// (0x00079597) popup_imed_adjust2_window_g1_ParamLimits

0xd0eb,	// (0x000795a6) popup_imed_adjust2_window_g2_ParamLimits

0xd0eb,	// (0x000795a6) popup_imed_adjust2_window_g2

0xd0f7,	// (0x000795b2) popup_imed_adjust2_window_g3_ParamLimits

0xd0f7,	// (0x000795b2) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007bc9a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007bc9a) popup_imed_adjust2_window_g

0xd103,	// (0x000795be) popup_imed_adjust2_window_t1_ParamLimits

0xd11b,	// (0x000795d6) slider_imed_adjust_pane_ParamLimits

0xd12f,	// (0x000795ea) slider_imed_adjust_pane_g1_ParamLimits

0xd13f,	// (0x000795fa) slider_imed_adjust_pane_g2_ParamLimits

0xd14f,	// (0x0007960a) slider_imed_adjust_pane_g3_ParamLimits

0xd160,	// (0x0007961b) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007bca1) slider_imed_adjust_pane_g_ParamLimits

0x5770,	// (0x00071c2b) aid_touch_area_cam4_ParamLimits

0x5770,	// (0x00071c2b) aid_touch_area_cam4

0x9a1a,	// (0x00075ed5) battery_pane_cp01

0x583f,	// (0x00071cfa) main_camera4_pane_g6_ParamLimits

0x583f,	// (0x00071cfa) main_camera4_pane_g6

0x5869,	// (0x00071d24) main_camera4_pane_t2_ParamLimits

0x5869,	// (0x00071d24) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007bda4) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007bda4) main_camera4_pane_t

0x589e,	// (0x00071d59) aid_touch_area_vid4_ParamLimits

0x589e,	// (0x00071d59) aid_touch_area_vid4

0x58f2,	// (0x00071dad) main_video4_pane_g5_ParamLimits

0x58f2,	// (0x00071dad) main_video4_pane_g5

0x5917,	// (0x00071dd2) vid4_progress_pane_ParamLimits

0x5917,	// (0x00071dd2) vid4_progress_pane

0xd765,	// (0x00079c20) main_cset_slider_pane_g18_ParamLimits

0xd765,	// (0x00079c20) main_cset_slider_pane_g18

0xd957,	// (0x00079e12) cell_cam4_burst_pane_g2_ParamLimits

0xd957,	// (0x00079e12) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007bf03) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007bf03) cell_cam4_burst_pane_g

0x9f60,	// (0x0007641b) bg_cl_pane_ParamLimits

0x9f60,	// (0x0007641b) bg_cl_pane

0x68d3,	// (0x00072d8e) cl_header_pane_ParamLimits

0x68d3,	// (0x00072d8e) cl_header_pane

0x68e7,	// (0x00072da2) cl_listscroll_pane_ParamLimits

0x68e7,	// (0x00072da2) cl_listscroll_pane

0xda99,	// (0x00079f54) bg_cl_pane_g1

0xdaa1,	// (0x00079f5c) bg_cl_pane_g2

0xdaa9,	// (0x00079f64) bg_cl_pane_g3

0xdab1,	// (0x00079f6c) bg_cl_pane_g4

0xdab9,	// (0x00079f74) bg_cl_pane_g5

0xdac1,	// (0x00079f7c) bg_cl_pane_g6

0xdac9,	// (0x00079f84) bg_cl_pane_g7

0xdad1,	// (0x00079f8c) bg_cl_pane_g8

0xdad9,	// (0x00079f94) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007bf3e) bg_cl_pane_g

0x68f7,	// (0x00072db2) aid_height_cl_leading_ParamLimits

0x68f7,	// (0x00072db2) aid_height_cl_leading

0x6903,	// (0x00072dbe) aid_height_cl_text_ParamLimits

0x6903,	// (0x00072dbe) aid_height_cl_text

0xa1ae,	// (0x00076669) bg_cl_header_pane_ParamLimits

0xa1ae,	// (0x00076669) bg_cl_header_pane

0x6922,	// (0x00072ddd) cl_header_pane_g1_ParamLimits

0x6922,	// (0x00072ddd) cl_header_pane_g1

0x6938,	// (0x00072df3) cl_header_pane_t1_ParamLimits

0x6938,	// (0x00072df3) cl_header_pane_t1

0xdae1,	// (0x00079f9c) cl_list_pane

0xd738,	// (0x00079bf3) hc_scroll_pane_cp01

0xab3c,	// (0x00076ff7) bg_cl_header_pane_g1

0xd61e,	// (0x00079ad9) bg_cl_header_pane_g2

0xab5c,	// (0x00077017) bg_cl_header_pane_g3

0xd62e,	// (0x00079ae9) bg_cl_header_pane_g4

0xd626,	// (0x00079ae1) bg_cl_header_pane_g5

0xd866,	// (0x00079d21) bg_cl_header_pane_g6

0xd646,	// (0x00079b01) bg_cl_header_pane_g7

0xd64e,	// (0x00079b09) bg_cl_header_pane_g8

0xd63e,	// (0x00079af9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007bf51) bg_cl_header_pane_g

0x6951,	// (0x00072e0c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6951,	// (0x00072e0c) hc_cl_list_double_graphic_heading_pane

0x6962,	// (0x00072e1d) hc_cl_list_single_graphic_pane_ParamLimits

0x6962,	// (0x00072e1d) hc_cl_list_single_graphic_pane

0x697b,	// (0x00072e36) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x697b,	// (0x00072e36) hc_cl_list_single_graphic_pane_g1

0x6987,	// (0x00072e42) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6987,	// (0x00072e42) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007bf64) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007bf64) hc_cl_list_single_graphic_pane_g

0x699b,	// (0x00072e56) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x699b,	// (0x00072e56) hc_cl_list_single_graphic_pane_t1

0x697b,	// (0x00072e36) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x697b,	// (0x00072e36) hc_cl_list_double_graphic_heading_pane_g1

0x69b0,	// (0x00072e6b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x69b0,	// (0x00072e6b) hc_cl_list_double_graphic_heading_pane_g2

0x69c4,	// (0x00072e7f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x69c4,	// (0x00072e7f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007bf69) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007bf69) hc_cl_list_double_graphic_heading_pane_g

0x69d8,	// (0x00072e93) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x69d8,	// (0x00072e93) hc_cl_list_double_graphic_heading_pane_t1

0x69ed,	// (0x00072ea8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x69ed,	// (0x00072ea8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007bf70) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007bf70) hc_cl_list_double_graphic_heading_pane_t

0x9baa,	// (0x00076065) vid4_progress_pane_g1

0x9bba,	// (0x00076075) vid4_progress_pane_g2

0x6a02,	// (0x00072ebd) vid4_progress_pane_g3

0x9bca,	// (0x00076085) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007bf75) vid4_progress_pane_g

0x6a14,	// (0x00072ecf) vid4_progress_pane_t1

0x9be8,	// (0x000760a3) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007bf80) vid4_progress_pane_t

0x6a2a,	// (0x00072ee5) wait_bar_pane_cp07

0xc9a0,	// (0x00078e5b) blid_firmament_pane_ParamLimits

0xc9e3,	// (0x00078e9e) popup_blid_sat_info2_window_g1

0xca07,	// (0x00078ec2) popup_blid_sat_info2_window_t3

0xca15,	// (0x00078ed0) popup_blid_sat_info2_window_t4

0xca23,	// (0x00078ede) popup_blid_sat_info2_window_t5

0xca31,	// (0x00078eec) popup_blid_sat_info2_window_t6

0xca41,	// (0x00078efc) popup_blid_sat_info2_window_t7

0xca4f,	// (0x00078f0a) popup_blid_sat_info2_window_t8

0xca5d,	// (0x00078f18) popup_blid_sat_info2_window_t9

0xca6b,	// (0x00078f26) popup_blid_sat_info2_window_t10

0xcb2f,	// (0x00078fea) aid_firma_cardinal_ParamLimits

0xcb43,	// (0x00078ffe) blid_firmament_pane_t1_ParamLimits

0xcb5a,	// (0x00079015) blid_firmament_pane_t2_ParamLimits

0xcb71,	// (0x0007902c) blid_firmament_pane_t3_ParamLimits

0xcb88,	// (0x00079043) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007bb8e) blid_firmament_pane_t_ParamLimits

0xcb9f,	// (0x0007905a) blid_sat_info_pane_ParamLimits

0x909b,	// (0x00075556) main_cam_set_pane_ParamLimits

0x4e01,	// (0x000712bc) aid_size_cell_colour_35_ParamLimits

0x4e21,	// (0x000712dc) aid_size_cell_colour_112_ParamLimits

0x4e41,	// (0x000712fc) aid_size_cell_effect_ParamLimits

0xc7a5,	// (0x00078c60) bg_tb_trans_pane_cp02_ParamLimits

0xadac,	// (0x00077267) heading_imed_pane_ParamLimits

0x4e61,	// (0x0007131c) listscroll_imed_pane_ParamLimits

0xbdcb,	// (0x00078286) popup_call2_audio_first_window_g5_ParamLimits

0xbdcb,	// (0x00078286) popup_call2_audio_first_window_g5

0x541b,	// (0x000718d6) aid_size_touch_image3_arrow_left_ParamLimits

0x541b,	// (0x000718d6) aid_size_touch_image3_arrow_left

0x5447,	// (0x00071902) aid_size_touch_image3_arrow_right_ParamLimits

0x5447,	// (0x00071902) aid_size_touch_image3_arrow_right

0x9bfd,	// (0x000760b8) vid4_progress_pane_t3

0x518d,	// (0x00071648) main_hwr_training_symbol_option_pane_ParamLimits

0x518d,	// (0x00071648) main_hwr_training_symbol_option_pane

0xd3d2,	// (0x0007988d) popup_hwr_training_preview_window_ParamLimits

0xd3d2,	// (0x0007988d) popup_hwr_training_preview_window

0x51ad,	// (0x00071668) hwr_training_navi_pane_g5_ParamLimits

0x51ad,	// (0x00071668) hwr_training_navi_pane_g5

0xd60c,	// (0x00079ac7) popup_char_count_window

0x909b,	// (0x00075556) bg_popup_sub_pane_cp20_ParamLimits

0x6388,	// (0x00072843) list_vitu2_match_list_pane_ParamLimits

0x6397,	// (0x00072852) vitu2_page_scroll_pane_ParamLimits

0x6397,	// (0x00072852) vitu2_page_scroll_pane

0xdaf3,	// (0x00079fae) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaf3,	// (0x00079fae) list_single_hwr_training_symbol_option_pane

0xdb06,	// (0x00079fc1) list_single_hwr_training_symbol_option_pane_g1

0xdb0e,	// (0x00079fc9) list_single_hwr_training_symbol_option_pane_t1

0xdb1c,	// (0x00079fd7) bg_button_pane_cp023

0xdb25,	// (0x00079fe0) bg_button_pane_cp024

0x6a6a,	// (0x00072f25) vitu2_page_scroll_pane_g1

0x6a72,	// (0x00072f2d) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007bf87) vitu2_page_scroll_pane_g

0x6a7a,	// (0x00072f35) vitu2_page_scroll_pane_t1

0xc900,	// (0x00078dbb) popup_char_count_window_g1

0xdb58,	// (0x0007a013) popup_char_count_window_g2

0xdb61,	// (0x0007a01c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007bf8c) popup_char_count_window_g

0xdb6a,	// (0x0007a025) popup_char_count_window_t1

0x90a9,	// (0x00075564) main_vded2_pane

0xd0c8,	// (0x00079583) aid_size_cell_imed_line

0xd0d2,	// (0x0007958d) grid_imed_line_width_pane

0x9ade,	// (0x00075f99) vid4_indicators_pane_g4

0xdb78,	// (0x0007a033) cell_imed_line_width_pane_ParamLimits

0xdb78,	// (0x0007a033) cell_imed_line_width_pane

0xdb8c,	// (0x0007a047) cell_imed_line_width_pane_g1

0xd7d8,	// (0x00079c93) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007bf93) cell_imed_line_width_pane_g

0x6a89,	// (0x00072f44) main_vded2_pane_g1_ParamLimits

0x6a89,	// (0x00072f44) main_vded2_pane_g1

0x6a9f,	// (0x00072f5a) main_vded2_pane_g2_ParamLimits

0x6a9f,	// (0x00072f5a) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007bf98) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007bf98) main_vded2_pane_g

0x6ab1,	// (0x00072f6c) vded2_slider_pane_ParamLimits

0x6ab1,	// (0x00072f6c) vded2_slider_pane

0x6ac1,	// (0x00072f7c) aid_size_touch_vded2_end

0x6acb,	// (0x00072f86) aid_size_touch_vded2_playhead

0xdb95,	// (0x0007a050) aid_size_touch_vded2_start

0xdb9d,	// (0x0007a058) vded2_slider_bg_pane

0xdba6,	// (0x0007a061) vded2_slider_pane_g1

0xdbaf,	// (0x0007a06a) vded2_slider_pane_g2

0x6ad5,	// (0x00072f90) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007bf9d) vded2_slider_pane_g

0xdbb7,	// (0x0007a072) vded2_slider_bg_pane_g1

0xdbc0,	// (0x0007a07b) vded2_slider_bg_pane_g2

0xdbc9,	// (0x0007a084) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007bfa4) vded2_slider_bg_pane_g

0x2b80,	// (0x0006f03b) aid_postcard_touch_down_pane_ParamLimits

0x2b80,	// (0x0006f03b) aid_postcard_touch_down_pane

0x2b96,	// (0x0006f051) aid_postcard_touch_up_pane_ParamLimits

0x2b96,	// (0x0006f051) aid_postcard_touch_up_pane

0x90a9,	// (0x00075564) main_blid2_pane

0x968c,	// (0x00075b47) popup_blid2_search_window

0x9033,	// (0x000754ee) blid2_gps_pane

0x9033,	// (0x000754ee) blid2_navig_pane

0x9033,	// (0x000754ee) blid2_search_pane

0x9033,	// (0x000754ee) blid2_tripm_pane

0x6ae0,	// (0x00072f9b) blid2_search_pane_g1_ParamLimits

0x6ae0,	// (0x00072f9b) blid2_search_pane_g1

0x6af8,	// (0x00072fb3) blid2_search_pane_t1_ParamLimits

0x6af8,	// (0x00072fb3) blid2_search_pane_t1

0x6b0a,	// (0x00072fc5) aid_size_cell_blid2_gps_ParamLimits

0x6b0a,	// (0x00072fc5) aid_size_cell_blid2_gps

0x6b22,	// (0x00072fdd) blid2_gps_pane_g1_ParamLimits

0x6b22,	// (0x00072fdd) blid2_gps_pane_g1

0x6b36,	// (0x00072ff1) grid_blid2_satellite_pane_ParamLimits

0x6b36,	// (0x00072ff1) grid_blid2_satellite_pane

0x6b50,	// (0x0007300b) blid2_navig_pane_g1_ParamLimits

0x6b50,	// (0x0007300b) blid2_navig_pane_g1

0x6b5c,	// (0x00073017) blid2_navig_pane_t1_ParamLimits

0x6b5c,	// (0x00073017) blid2_navig_pane_t1

0x6b77,	// (0x00073032) blid2_navig_pane_t2_ParamLimits

0x6b77,	// (0x00073032) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007bfab) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007bfab) blid2_navig_pane_t

0x6b92,	// (0x0007304d) blid2_navig_ring_pane_ParamLimits

0x6b92,	// (0x0007304d) blid2_navig_ring_pane

0x6bab,	// (0x00073066) blid2_speed_pane_ParamLimits

0x6bab,	// (0x00073066) blid2_speed_pane

0x6bb7,	// (0x00073072) blid2_tripm_pane_g1_ParamLimits

0x6bb7,	// (0x00073072) blid2_tripm_pane_g1

0x6bd2,	// (0x0007308d) blid2_tripm_pane_g2_ParamLimits

0x6bd2,	// (0x0007308d) blid2_tripm_pane_g2

0x6be6,	// (0x000730a1) blid2_tripm_pane_g3_ParamLimits

0x6be6,	// (0x000730a1) blid2_tripm_pane_g3

0x6bfa,	// (0x000730b5) blid2_tripm_pane_g4_ParamLimits

0x6bfa,	// (0x000730b5) blid2_tripm_pane_g4

0x6c0e,	// (0x000730c9) blid2_tripm_pane_g5_ParamLimits

0x6c0e,	// (0x000730c9) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007bfb0) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007bfb0) blid2_tripm_pane_g

0x6c34,	// (0x000730ef) blid2_tripm_pane_t1_ParamLimits

0x6c34,	// (0x000730ef) blid2_tripm_pane_t1

0x6c4f,	// (0x0007310a) blid2_tripm_pane_t2_ParamLimits

0x6c4f,	// (0x0007310a) blid2_tripm_pane_t2

0x6c68,	// (0x00073123) blid2_tripm_pane_t3_ParamLimits

0x6c68,	// (0x00073123) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007bfbd) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007bfbd) blid2_tripm_pane_t

0x6caf,	// (0x0007316a) cell_blid2_satellite_pane_ParamLimits

0x6caf,	// (0x0007316a) cell_blid2_satellite_pane

0x6ccd,	// (0x00073188) cell_blid2_satellite_pane_g1

0xdbd2,	// (0x0007a08d) cell_blid2_satellite_pane_t1

0xcbaf,	// (0x0007906a) blid2_speed_pane_g1

0xdbe0,	// (0x0007a09b) blid2_speed_pane_t1

0xdbee,	// (0x0007a0a9) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007bfc6) blid2_speed_pane_t

0xcbaf,	// (0x0007906a) blid2_navig_ring_pane_g1

0x6cd6,	// (0x00073191) blid2_navig_ring_pane_g2

0x6cde,	// (0x00073199) blid2_navig_ring_pane_g3

0x6ce6,	// (0x000731a1) blid2_navig_ring_pane_g4

0x6cee,	// (0x000731a9) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007bfcb) blid2_navig_ring_pane_g

0x9033,	// (0x000754ee) bg_popup_window_pane_cp011

0xdbfc,	// (0x0007a0b7) popup_blid2_search_window_g1

0xdc04,	// (0x0007a0bf) popup_blid2_search_window_t1

0xdc12,	// (0x0007a0cd) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007bfd6) popup_blid2_search_window_t

0xaa4b,	// (0x00076f06) main_browser_pane_g1

0x9f60,	// (0x0007641b) main_browser_pane_ParamLimits

0x909b,	// (0x00075556) bg_button_pane_cp011_ParamLimits

0x5c23,	// (0x000720de) cell_vitu2_function_pane_g1_ParamLimits

0xc7a5,	// (0x00078c60) bg_popup_sub_pane_cp22_ParamLimits

0x6565,	// (0x00072a20) input_focus_pane_cp08_ParamLimits

0x657c,	// (0x00072a37) popup_vitu2_query_button_pane_ParamLimits

0x657c,	// (0x00072a37) popup_vitu2_query_button_pane

0x658d,	// (0x00072a48) popup_vitu2_query_input_button_pane

0xd8a1,	// (0x00079d5c) popup_vitu2_query_window_g1_ParamLimits

0x6597,	// (0x00072a52) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007bed7) popup_vitu2_query_window_g_ParamLimits

0x9033,	// (0x000754ee) bg_button_pane_cp026

0x6cf6,	// (0x000731b1) popup_vitu2_query_input_button_pane_g1

0x9033,	// (0x000754ee) bg_button_pane_cp025

0xdc20,	// (0x0007a0db) popup_vitu2_query_button_pane_t1

0x422a,	// (0x000706e5) main_mp3_pane_t6

0x4238,	// (0x000706f3) popup_slider_window_cp01

0x9a44,	// (0x00075eff) cam4_battery_pane

0x9a9d,	// (0x00075f58) cam4_battery_pane_cp02

0x9ba2,	// (0x0007605d) cam4_battery_pane_cp01

0x9ba2,	// (0x0007605d) cam4_battery_pane_cp03

0xd7e0,	// (0x00079c9b) cam4_battery_pane_g1

0xcbaf,	// (0x0007906a) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007bfdb) cam4_battery_pane_g

0xca79,	// (0x00078f34) popup_blid_sat_info2_window_t11

0xb1c6,	// (0x00077681) aid_size_touch_mv_arrow_left_ParamLimits

0xb1f1,	// (0x000776ac) aid_size_touch_mv_arrow_right_ParamLimits

0xb24f,	// (0x0007770a) navi_pane_g1_ParamLimits

0xb25b,	// (0x00077716) navi_pane_g2_ParamLimits

0xb289,	// (0x00077744) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007b8a0) navi_pane_g_ParamLimits

0x263d,	// (0x0006eaf8) navi_pane_mv_t1_ParamLimits

0x4e6d,	// (0x00071328) grid_imed_effect_pane_ParamLimits

0x12a4,	// (0x0006d75f) aid_placing_vt_slider_lsc

0xa99a,	// (0x00076e55) aid_placing_vt_slider_prt

0xa1ae,	// (0x00076669) bg_tb_trans_pane_cp01_ParamLimits

0xcd3b,	// (0x000791f6) popup_image_details_window_g1_ParamLimits

0xcd4e,	// (0x00079209) popup_image_details_window_g2_ParamLimits

0xcd63,	// (0x0007921e) popup_image_details_window_g3_ParamLimits

0xcd63,	// (0x0007921e) popup_image_details_window_g3

0xf718,	// (0x0007bbd3) popup_image_details_window_g_ParamLimits

0xcd77,	// (0x00079232) popup_image_details_window_t1_ParamLimits

0xcd89,	// (0x00079244) popup_image_details_window_t2_ParamLimits

0xcda2,	// (0x0007925d) popup_image_details_window_t3_ParamLimits

0xcdb6,	// (0x00079271) popup_image_details_window_t4_ParamLimits

0xcdd1,	// (0x0007928c) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007bbda) popup_image_details_window_t_ParamLimits

0x690f,	// (0x00072dca) cl_header_name_pane_ParamLimits

0x690f,	// (0x00072dca) cl_header_name_pane

0x6cfe,	// (0x000731b9) cl_header_name_pane_t1_ParamLimits

0x6cfe,	// (0x000731b9) cl_header_name_pane_t1

0x6d1f,	// (0x000731da) cl_header_name_pane_t2_ParamLimits

0x6d1f,	// (0x000731da) cl_header_name_pane_t2

0x6d61,	// (0x0007321c) cl_header_name_pane_t3_ParamLimits

0x6d61,	// (0x0007321c) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007bfe0) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007bfe0) cl_header_name_pane_t

0xb318,	// (0x000777d3) navi_pane_mv_g2_ParamLimits

0xd5e6,	// (0x00079aa1) field_vitu2_entry_pane_g1_ParamLimits

0xd5f2,	// (0x00079aad) field_vitu2_entry_pane_g2_ParamLimits

0xd5fe,	// (0x00079ab9) field_vitu2_entry_pane_g3_ParamLimits

0xd5fe,	// (0x00079ab9) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007bdd6) field_vitu2_entry_pane_g_ParamLimits

0x9b11,	// (0x00075fcc) cell_vitu2_itu_pane_g1_ParamLimits

0x5bb7,	// (0x00072072) cell_vitu2_itu_pane_g2_ParamLimits

0x5bb7,	// (0x00072072) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007bde2) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007bde2) cell_vitu2_itu_pane_g

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp05_ParamLimits

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp05

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp03

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp04

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp10_ParamLimits

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp10

0x68b1,	// (0x00072d6c) bg_vkb2_func_pane_cp08

0x6897,	// (0x00072d52) bg_vkb2_func_pane_cp06

0x68a5,	// (0x00072d60) bg_vkb2_func_pane_cp07

0xdb2e,	// (0x00079fe9) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2e,	// (0x00079fe9) bg_vkb2_func_pane_cp11

0xdb43,	// (0x00079ffe) bg_vkb2_func_pane_cp12_ParamLimits

0xdb43,	// (0x00079ffe) bg_vkb2_func_pane_cp12

0x9033,	// (0x000754ee) bg_vkb2_func_pane_cp09

0xd61e,	// (0x00079ad9) bg_vkb2_func_pane_g1

0xab5c,	// (0x00077017) bg_vkb2_func_pane_g2

0xd626,	// (0x00079ae1) bg_vkb2_func_pane_g3

0xd62e,	// (0x00079ae9) bg_vkb2_func_pane_g4

0xd866,	// (0x00079d21) bg_vkb2_func_pane_g5

0xd646,	// (0x00079b01) bg_vkb2_func_pane_g6

0xd64e,	// (0x00079b09) bg_vkb2_func_pane_g7

0xd63e,	// (0x00079af9) bg_vkb2_func_pane_g8

0xab3c,	// (0x00076ff7) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007bfe7) bg_vkb2_func_pane_g

0x6c22,	// (0x000730dd) blid2_tripm_pane_g6_ParamLimits

0x6c22,	// (0x000730dd) blid2_tripm_pane_g6

0xd48a,	// (0x00079945) mp4_progress_pane_g1

0x6c9b,	// (0x00073156) blid2_tripm_values_pane_ParamLimits

0x6c9b,	// (0x00073156) blid2_tripm_values_pane

0x6d92,	// (0x0007324d) blid2_tripm_values_pane_t1

0x6da0,	// (0x0007325b) blid2_tripm_values_pane_t2

0x6dae,	// (0x00073269) blid2_tripm_values_pane_t3

0x6dbc,	// (0x00073277) blid2_tripm_values_pane_t4

0x6dca,	// (0x00073285) blid2_tripm_values_pane_t5

0x6dd8,	// (0x00073293) blid2_tripm_values_pane_t6

0x6de6,	// (0x000732a1) blid2_tripm_values_pane_t7

0x6df4,	// (0x000732af) blid2_tripm_values_pane_t8

0x6e02,	// (0x000732bd) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007bffa) blid2_tripm_values_pane_t

0x12e6,	// (0x0006d7a1) call_video_pane_t1_ParamLimits

0x1304,	// (0x0006d7bf) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007b729) call_video_pane_t_ParamLimits

0x2afe,	// (0x0006efb9) msg_header_pane_g1_ParamLimits

0xb515,	// (0x000779d0) msg_header_pane_g2_ParamLimits

0xb515,	// (0x000779d0) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007b943) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007b943) msg_header_pane_g

0x9f60,	// (0x0007641b) main_clock2_pane_ParamLimits

0x4b66,	// (0x00071021) grid_clock2_toolbar_pane_ParamLimits

0x4b66,	// (0x00071021) grid_clock2_toolbar_pane

0x4b66,	// (0x00071021) listscroll_clock2_pane_ParamLimits

0x4b66,	// (0x00071021) listscroll_clock2_pane

0x4c5f,	// (0x0007111a) main_clock2_pane_t3_ParamLimits

0x4c5f,	// (0x0007111a) main_clock2_pane_t3

0x4c83,	// (0x0007113e) main_clock2_pane_t4_ParamLimits

0x4c83,	// (0x0007113e) main_clock2_pane_t4

0xdc2e,	// (0x0007a0e9) cell_clock2_toolbar_pane

0xdc36,	// (0x0007a0f1) cell_clock2_toolbar_pane_cp01

0xdc36,	// (0x0007a0f1) cell_clock2_toolbar_pane_cp02

0xdc3e,	// (0x0007a0f9) cell_clock2_toolbar_pane_cp03

0xdc46,	// (0x0007a101) list_clock2_pane

0xb13c,	// (0x000775f7) scroll_pane_cp10

0xdc4e,	// (0x0007a109) list_single_clock2_pane_ParamLimits

0xdc4e,	// (0x0007a109) list_single_clock2_pane

0xa903,	// (0x00076dbe) list_highlight_pane_cp08

0xdc5b,	// (0x0007a116) list_single_clock2_pane_t1

0xdc69,	// (0x0007a124) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007c00d) list_single_clock2_pane_t

0x9033,	// (0x000754ee) bg_button_pane_cp10

0xdc77,	// (0x0007a132) cell_clock2_toolbar_pane_g1

0x2b0c,	// (0x0006efc7) aid_main_viewer_pane_g1_ParamLimits

0x2b0c,	// (0x0006efc7) aid_main_viewer_pane_g1

0x2b1a,	// (0x0006efd5) aid_main_viewer_pane_g2_ParamLimits

0x2b1a,	// (0x0006efd5) aid_main_viewer_pane_g2

0x2b28,	// (0x0006efe3) aid_main_viewer_pane_g3_ParamLimits

0x2b28,	// (0x0006efe3) aid_main_viewer_pane_g3

0x2b37,	// (0x0006eff2) aid_main_viewer_pane_g4_ParamLimits

0x2b37,	// (0x0006eff2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007b954) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007b954) aid_main_viewer_pane_g

0x3445,	// (0x0006f900) main_calc_pane_ParamLimits

0x346b,	// (0x0006f926) main_dialer2_pane_ParamLimits

0x90a9,	// (0x00075564) main_cam6_pane

0x90a9,	// (0x00075564) main_vid6_pane

0x4b72,	// (0x0007102d) listscroll_gen_pane_cp06_ParamLimits

0x4b72,	// (0x0007102d) listscroll_gen_pane_cp06

0x4ca6,	// (0x00071161) main_clock2_pane_t5_ParamLimits

0x4ca6,	// (0x00071161) main_clock2_pane_t5

0x4d02,	// (0x000711bd) aid_call2_pane_cp10_ParamLimits

0x4d14,	// (0x000711cf) aid_call_pane_cp10_ParamLimits

0xb1ba,	// (0x00077675) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1ba,	// (0x00077675) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d26,	// (0x000711e1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d26,	// (0x000711e1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1ba,	// (0x00077675) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007bc8f) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d38,	// (0x000711f3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x53c8,	// (0x00071883) cell_dialer2_keypad_pane_g2_ParamLimits

0x53c8,	// (0x00071883) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007bd75) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007bd75) cell_dialer2_keypad_pane_g

0x53e4,	// (0x0007189f) cell_dialer2_keypad_pane_t1

0x5f3f,	// (0x000723fa) main_cset_text2_pane_ParamLimits

0x5f3f,	// (0x000723fa) main_cset_text2_pane

0xda8d,	// (0x00079f48) area_vitu2_query_pane_g1_ParamLimits

0x6836,	// (0x00072cf1) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007bf2a) area_vitu2_query_pane_g_ParamLimits

0xa30c,	// (0x000767c7) area_vitu2_query_pane_t7_ParamLimits

0xa30c,	// (0x000767c7) area_vitu2_query_pane_t7

0x6897,	// (0x00072d52) bg_button_pane_cp018_ParamLimits

0x68a5,	// (0x00072d60) bg_button_pane_cp021_ParamLimits

0x68b1,	// (0x00072d6c) bg_button_pane_cp022_ParamLimits

0x68b1,	// (0x00072d6c) bg_vkb2_func_pane_cp08_ParamLimits

0x6897,	// (0x00072d52) bg_vkb2_func_pane_cp06_ParamLimits

0x68a5,	// (0x00072d60) bg_vkb2_func_pane_cp07_ParamLimits

0x68c2,	// (0x00072d7d) input_focus_pane_cp09_ParamLimits

0x9c13,	// (0x000760ce) cam6_autofocus_pane_ParamLimits

0x9c13,	// (0x000760ce) cam6_autofocus_pane

0x6e10,	// (0x000732cb) cam6_image_uncrop_pane_ParamLimits

0x6e10,	// (0x000732cb) cam6_image_uncrop_pane

0x6e1f,	// (0x000732da) cam6_indi_pane_ParamLimits

0x6e1f,	// (0x000732da) cam6_indi_pane

0x6e35,	// (0x000732f0) cam6_mode_pane_ParamLimits

0x6e35,	// (0x000732f0) cam6_mode_pane

0x6e47,	// (0x00073302) cam6_timer_pane_ParamLimits

0x6e47,	// (0x00073302) cam6_timer_pane

0x6e53,	// (0x0007330e) cam6_zoom_pane_ParamLimits

0x6e53,	// (0x0007330e) cam6_zoom_pane

0x6e5f,	// (0x0007331a) cam6_mode_pane_g1_ParamLimits

0x6e5f,	// (0x0007331a) cam6_mode_pane_g1

0x6e6f,	// (0x0007332a) cam6_mode_pane_g2_ParamLimits

0x6e6f,	// (0x0007332a) cam6_mode_pane_g2

0x6e7f,	// (0x0007333a) cam6_mode_pane_g3_ParamLimits

0x6e7f,	// (0x0007333a) cam6_mode_pane_g3

0x6e8f,	// (0x0007334a) cam6_mode_pane_g4_ParamLimits

0x6e8f,	// (0x0007334a) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007c012) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007c012) cam6_mode_pane_g

0xdc7f,	// (0x0007a13a) bg_tb_trans_pane_cp08_ParamLimits

0xdc7f,	// (0x0007a13a) bg_tb_trans_pane_cp08

0xdc8d,	// (0x0007a148) cam6_battery_pane_ParamLimits

0xdc8d,	// (0x0007a148) cam6_battery_pane

0xdca3,	// (0x0007a15e) cam6_indi_pane_g1_ParamLimits

0xdca3,	// (0x0007a15e) cam6_indi_pane_g1

0xdcb5,	// (0x0007a170) cam6_indi_pane_g2_ParamLimits

0xdcb5,	// (0x0007a170) cam6_indi_pane_g2

0xdcc7,	// (0x0007a182) cam6_indi_pane_g3_ParamLimits

0xdcc7,	// (0x0007a182) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007c01b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007c01b) cam6_indi_pane_g

0xdcd9,	// (0x0007a194) cam6_indi_pane_t1_ParamLimits

0xdcd9,	// (0x0007a194) cam6_indi_pane_t1

0x6e9f,	// (0x0007335a) cam6_autofocus_pane_g1

0x6ea7,	// (0x00073362) cam6_autofocus_pane_g2

0x6eaf,	// (0x0007336a) cam6_autofocus_pane_g3

0x6eb7,	// (0x00073372) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007c022) cam6_autofocus_pane_g

0xdcff,	// (0x0007a1ba) cam6_timer_pane_g1

0xdd07,	// (0x0007a1c2) cam6_timer_pane_t1

0xdd15,	// (0x0007a1d0) cam6_zoom_cont_pane

0xdd1d,	// (0x0007a1d8) cam6_zoom_pane_g1

0xdd25,	// (0x0007a1e0) cam6_zoom_pane_g2

0x6ebf,	// (0x0007337a) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007c02b) cam6_zoom_pane_g

0xcbaf,	// (0x0007906a) cam6_battery_pane_g1

0xcbaf,	// (0x0007906a) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007bb97) cam6_battery_pane_g

0xdd2d,	// (0x0007a1e8) cam6_zoom_cont_pane_g1

0xdd36,	// (0x0007a1f1) cam6_zoom_cont_pane_g2

0xdd3f,	// (0x0007a1fa) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007c032) cam6_zoom_cont_pane_g

0x6edc,	// (0x00073397) cam6_mode_pane_cp_ParamLimits

0x6edc,	// (0x00073397) cam6_mode_pane_cp

0x6eee,	// (0x000733a9) cam6_zoom_pane_cp_ParamLimits

0x6eee,	// (0x000733a9) cam6_zoom_pane_cp

0x6efa,	// (0x000733b5) vid6_image_uncrop_cif_pane_ParamLimits

0x6efa,	// (0x000733b5) vid6_image_uncrop_cif_pane

0x6f0a,	// (0x000733c5) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f0a,	// (0x000733c5) vid6_image_uncrop_nhd_pane

0x6f19,	// (0x000733d4) vid6_image_uncrop_vga_pane_ParamLimits

0x6f19,	// (0x000733d4) vid6_image_uncrop_vga_pane

0x6f28,	// (0x000733e3) vid6_image_uncrop_wvga_pane_ParamLimits

0x6f28,	// (0x000733e3) vid6_image_uncrop_wvga_pane

0x6f37,	// (0x000733f2) vid6_indi_pane_ParamLimits

0x6f37,	// (0x000733f2) vid6_indi_pane

0xdc7f,	// (0x0007a13a) bg_tb_trans_pane_cp09_ParamLimits

0xdc7f,	// (0x0007a13a) bg_tb_trans_pane_cp09

0xdd57,	// (0x0007a212) cam6_battery_pane_cp_ParamLimits

0xdd57,	// (0x0007a212) cam6_battery_pane_cp

0xdd63,	// (0x0007a21e) vid6_indi_pane_g1_ParamLimits

0xdd63,	// (0x0007a21e) vid6_indi_pane_g1

0xdd75,	// (0x0007a230) vid6_indi_pane_g2_ParamLimits

0xdd75,	// (0x0007a230) vid6_indi_pane_g2

0xdd87,	// (0x0007a242) vid6_indi_pane_g3_ParamLimits

0xdd87,	// (0x0007a242) vid6_indi_pane_g3

0xdd9c,	// (0x0007a257) vid6_indi_pane_g4_ParamLimits

0xdd9c,	// (0x0007a257) vid6_indi_pane_g4

0xddb1,	// (0x0007a26c) vid6_indi_pane_g5_ParamLimits

0xddb1,	// (0x0007a26c) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007c039) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007c039) vid6_indi_pane_g

0xddcb,	// (0x0007a286) vid6_indi_pane_t1_ParamLimits

0xddcb,	// (0x0007a286) vid6_indi_pane_t1

0xdde1,	// (0x0007a29c) vid6_indi_pane_t2_ParamLimits

0xdde1,	// (0x0007a29c) vid6_indi_pane_t2

0xde09,	// (0x0007a2c4) vid6_indi_pane_t3_ParamLimits

0xde09,	// (0x0007a2c4) vid6_indi_pane_t3

0xde31,	// (0x0007a2ec) vid6_indi_pane_t4_ParamLimits

0xde31,	// (0x0007a2ec) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007c044) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007c044) vid6_indi_pane_t

0xde55,	// (0x0007a310) wait_bar_pane_cp08

0x6f4f,	// (0x0007340a) main_cset_text2_pane_t1_ParamLimits

0x6f4f,	// (0x0007340a) main_cset_text2_pane_t1

0x6ec7,	// (0x00073382) listscroll_gen_pane_cp06_t1_ParamLimits

0x6ec7,	// (0x00073382) listscroll_gen_pane_cp06_t1

0x90a9,	// (0x00075564) main_cam6_set_pane

0x9a36,	// (0x00075ef1) bg_tb_trans_pane_cp06_ParamLimits

0x9a4c,	// (0x00075f07) cam4_indicators_pane_g1_ParamLimits

0x9a5d,	// (0x00075f18) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007bdb2) cam4_indicators_pane_g_ParamLimits

0x9a7b,	// (0x00075f36) cam4_indicators_pane_t1_ParamLimits

0x909b,	// (0x00075556) bg_tb_trans_pane_cp07_ParamLimits

0x9aa5,	// (0x00075f60) vid4_indicators_pane_g1_ParamLimits

0x9ab9,	// (0x00075f74) vid4_indicators_pane_g2_ParamLimits

0x9acd,	// (0x00075f88) vid4_indicators_pane_g3_ParamLimits

0x9ade,	// (0x00075f99) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007bdc4) vid4_indicators_pane_g_ParamLimits

0x9afa,	// (0x00075fb5) vid4_indicators_pane_t1_ParamLimits

0x9baa,	// (0x00076065) vid4_progress_pane_g1_ParamLimits

0x9bba,	// (0x00076075) vid4_progress_pane_g2_ParamLimits

0x6a02,	// (0x00072ebd) vid4_progress_pane_g3_ParamLimits

0x9bca,	// (0x00076085) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007bf75) vid4_progress_pane_g_ParamLimits

0x6a14,	// (0x00072ecf) vid4_progress_pane_t1_ParamLimits

0x9be8,	// (0x000760a3) vid4_progress_pane_t2_ParamLimits

0x9bfd,	// (0x000760b8) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007bf80) vid4_progress_pane_t_ParamLimits

0x6a2a,	// (0x00072ee5) wait_bar_pane_cp07_ParamLimits

0x6f6e,	// (0x00073429) main_cam6_set_pane_g2_ParamLimits

0x6f6e,	// (0x00073429) main_cam6_set_pane_g2

0x6f92,	// (0x0007344d) main_cset6_listscroll_pane_ParamLimits

0x6f92,	// (0x0007344d) main_cset6_listscroll_pane

0x6fae,	// (0x00073469) main_cset6_slider_pane_ParamLimits

0x6fae,	// (0x00073469) main_cset6_slider_pane

0x6fc4,	// (0x0007347f) main_cset6_text2_pane_ParamLimits

0x6fc4,	// (0x0007347f) main_cset6_text2_pane

0xde64,	// (0x0007a31f) main_cset6_text_pane

0xde6c,	// (0x0007a327) main_cset_list_pane_copy1_ParamLimits

0xde6c,	// (0x0007a327) main_cset_list_pane_copy1

0xde7c,	// (0x0007a337) scroll_pane_cp028_copy1

0x6fd2,	// (0x0007348d) cset_list_set_pane_copy1

0x6fe4,	// (0x0007349f) aid_position_infowindow_above_copy1

0x6fec,	// (0x000734a7) aid_position_infowindow_below_copy1

0x6ff4,	// (0x000734af) cset_list_set_pane_g1_copy1

0x6ffc,	// (0x000734b7) cset_list_set_pane_g3_copy1_ParamLimits

0x6ffc,	// (0x000734b7) cset_list_set_pane_g3_copy1

0x700b,	// (0x000734c6) cset_list_set_pane_t1_copy1_ParamLimits

0x700b,	// (0x000734c6) cset_list_set_pane_t1_copy1

0xa1ae,	// (0x00076669) list_highlight_pane_cp021_copy1_ParamLimits

0xa1ae,	// (0x00076669) list_highlight_pane_cp021_copy1

0xde85,	// (0x0007a340) cset6_slider_pane_ParamLimits

0xde85,	// (0x0007a340) cset6_slider_pane

0xdeb1,	// (0x0007a36c) main_cset6_slider_pane_g1_ParamLimits

0xdeb1,	// (0x0007a36c) main_cset6_slider_pane_g1

0x7020,	// (0x000734db) main_cset6_slider_pane_g2_ParamLimits

0x7020,	// (0x000734db) main_cset6_slider_pane_g2

0xded9,	// (0x0007a394) main_cset6_slider_pane_g3_ParamLimits

0xded9,	// (0x0007a394) main_cset6_slider_pane_g3

0x7048,	// (0x00073503) main_cset6_slider_pane_g4_ParamLimits

0x7048,	// (0x00073503) main_cset6_slider_pane_g4

0x7054,	// (0x0007350f) main_cset6_slider_pane_g5_ParamLimits

0x7054,	// (0x0007350f) main_cset6_slider_pane_g5

0xd74d,	// (0x00079c08) main_cset6_slider_pane_g7_ParamLimits

0xd74d,	// (0x00079c08) main_cset6_slider_pane_g7

0xd759,	// (0x00079c14) main_cset6_slider_pane_g8_ParamLimits

0xd759,	// (0x00079c14) main_cset6_slider_pane_g8

0x5fec,	// (0x000724a7) main_cset6_slider_pane_g9_ParamLimits

0x5fec,	// (0x000724a7) main_cset6_slider_pane_g9

0x5ff8,	// (0x000724b3) main_cset6_slider_pane_g10_ParamLimits

0x5ff8,	// (0x000724b3) main_cset6_slider_pane_g10

0x6004,	// (0x000724bf) main_cset6_slider_pane_g11_ParamLimits

0x6004,	// (0x000724bf) main_cset6_slider_pane_g11

0x6010,	// (0x000724cb) main_cset6_slider_pane_g12_ParamLimits

0x6010,	// (0x000724cb) main_cset6_slider_pane_g12

0x601c,	// (0x000724d7) main_cset6_slider_pane_g13_ParamLimits

0x601c,	// (0x000724d7) main_cset6_slider_pane_g13

0x6028,	// (0x000724e3) main_cset6_slider_pane_g14_ParamLimits

0x6028,	// (0x000724e3) main_cset6_slider_pane_g14

0x7060,	// (0x0007351b) main_cset6_slider_pane_g15_ParamLimits

0x7060,	// (0x0007351b) main_cset6_slider_pane_g15

0x604c,	// (0x00072507) main_cset6_slider_pane_g16_ParamLimits

0x604c,	// (0x00072507) main_cset6_slider_pane_g16

0x6058,	// (0x00072513) main_cset6_slider_pane_g17_ParamLimits

0x6058,	// (0x00072513) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007c04d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007c04d) main_cset6_slider_pane_g

0xdee5,	// (0x0007a3a0) main_cset6_slider_pane_t1_ParamLimits

0xdee5,	// (0x0007a3a0) main_cset6_slider_pane_t1

0x7090,	// (0x0007354b) main_cset6_slider_pane_t2_ParamLimits

0x7090,	// (0x0007354b) main_cset6_slider_pane_t2

0x70bb,	// (0x00073576) main_cset6_slider_pane_t3_ParamLimits

0x70bb,	// (0x00073576) main_cset6_slider_pane_t3

0x70e6,	// (0x000735a1) main_cset6_slider_pane_t4_ParamLimits

0x70e6,	// (0x000735a1) main_cset6_slider_pane_t4

0x7111,	// (0x000735cc) main_cset6_slider_pane_t5_ParamLimits

0x7111,	// (0x000735cc) main_cset6_slider_pane_t5

0xdf26,	// (0x0007a3e1) main_cset6_slider_pane_t7_ParamLimits

0xdf26,	// (0x0007a3e1) main_cset6_slider_pane_t7

0x713c,	// (0x000735f7) main_cset6_slider_pane_t8_ParamLimits

0x713c,	// (0x000735f7) main_cset6_slider_pane_t8

0x7160,	// (0x0007361b) main_cset6_slider_pane_t9_ParamLimits

0x7160,	// (0x0007361b) main_cset6_slider_pane_t9

0x7184,	// (0x0007363f) main_cset6_slider_pane_t10_ParamLimits

0x7184,	// (0x0007363f) main_cset6_slider_pane_t10

0x71a8,	// (0x00073663) main_cset6_slider_pane_t11_ParamLimits

0x71a8,	// (0x00073663) main_cset6_slider_pane_t11

0xdf5c,	// (0x0007a417) main_cset6_slider_pane_t14_ParamLimits

0xdf5c,	// (0x0007a417) main_cset6_slider_pane_t14

0xdf95,	// (0x0007a450) main_cset6_slider_pane_t15_ParamLimits

0xdf95,	// (0x0007a450) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007c072) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007c072) main_cset6_slider_pane_t

0xdfce,	// (0x0007a489) cset_slider_pane_g1_copy1

0xdfd7,	// (0x0007a492) cset_slider_pane_g2_copy1

0xdfe0,	// (0x0007a49b) cset_slider_pane_g3_copy1

0x9033,	// (0x000754ee) bg_popup_sub_pane_cp011_copy1

0xdfe9,	// (0x0007a4a4) main_cset_text_pane_g1_copy1

0xd8b5,	// (0x00079d70) main_cset_text_pane_t1_copy1

0xd8c3,	// (0x00079d7e) main_cset_text_pane_t2_copy1

0xd8d1,	// (0x00079d8c) main_cset_text_pane_t3_copy1

0xd8df,	// (0x00079d9a) main_cset_text_pane_t4_copy1

0xd8ed,	// (0x00079da8) main_cset_text_pane_t5_copy1

0xdff1,	// (0x0007a4ac) main_cset_text_pane_t6_copy1

0xdfff,	// (0x0007a4ba) main_cset_text_pane_t7_copy1

0x7241,	// (0x000736fc) main_cset_text2_pane_t1_copy1

0x909b,	// (0x00075556) main_ncimui_pane

0x36a7,	// (0x0006fb62) popup_query_ncimui_window_ParamLimits

0x36a7,	// (0x0006fb62) popup_query_ncimui_window

0xa1f8,	// (0x000766b3) field_cale_ev2_pane_g4_ParamLimits

0xa1f8,	// (0x000766b3) field_cale_ev2_pane_g4

0x52a4,	// (0x0007175f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52a4,	// (0x0007175f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007bd50) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007bd50) cell_video_dialer_keypad_pane_g

0x52bc,	// (0x00071777) cell_video_dialer_keypad_pane_t1

0x9033,	// (0x000754ee) bg_popup_window_pane_cp012

0xaffd,	// (0x000774b8) heading_pane_cp06

0xe02b,	// (0x0007a4e6) ncim_query_content_pane

0x9033,	// (0x000754ee) bg_popup_heading_pane_cp01

0xe033,	// (0x0007a4ee) ncim_heading_pane_t1

0xe041,	// (0x0007a4fc) ncim_indicator_popup_pane

0xe053,	// (0x0007a50e) ncim_query_button_pane

0xe067,	// (0x0007a522) ncim_query_content_pane_t1

0xe079,	// (0x0007a534) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007c0b6) ncim_query_content_pane_t

0xe0b3,	// (0x0007a56e) ncim_query_list_pane

0xe0c5,	// (0x0007a580) ncim_query_popup_pane

0xe041,	// (0x0007a4fc) ncim_indicator_popup_pane_ParamLimits

0x7385,	// (0x00073840) ncim_query_content_pane_g1_ParamLimits

0x7385,	// (0x00073840) ncim_query_content_pane_g1

0xe067,	// (0x0007a522) ncim_query_content_pane_t1_ParamLimits

0xe079,	// (0x0007a534) ncim_query_content_pane_t2_ParamLimits

0x7391,	// (0x0007384c) ncim_query_content_pane_t3_ParamLimits

0x7391,	// (0x0007384c) ncim_query_content_pane_t3

0x73b9,	// (0x00073874) ncim_query_content_pane_t4_ParamLimits

0x73b9,	// (0x00073874) ncim_query_content_pane_t4

0x73e1,	// (0x0007389c) ncim_query_content_pane_t5_ParamLimits

0x73e1,	// (0x0007389c) ncim_query_content_pane_t5

0xe08b,	// (0x0007a546) ncim_query_content_pane_t6_ParamLimits

0xe08b,	// (0x0007a546) ncim_query_content_pane_t6

0xfbfb,	// (0x0007c0b6) ncim_query_content_pane_t_ParamLimits

0xe0b3,	// (0x0007a56e) ncim_query_list_pane_ParamLimits

0xe0c5,	// (0x0007a580) ncim_query_popup_pane_ParamLimits

0xe0d9,	// (0x0007a594) wait_bar_pane_cp04

0x9033,	// (0x000754ee) input_focus_pane_cp011

0xe0e1,	// (0x0007a59c) ncim_query_popup_pane_t1

0xe0ef,	// (0x0007a5aa) ncim_list_query_list_pane_ParamLimits

0xe0ef,	// (0x0007a5aa) ncim_list_query_list_pane

0x9033,	// (0x000754ee) bg_button_pane_cp027

0xe102,	// (0x0007a5bd) ncim_query_button_pane_g1

0x9033,	// (0x000754ee) list_highlight_pane_cp012

0xe10c,	// (0x0007a5c7) ncim_list_query_list_pane_g1

0xe114,	// (0x0007a5cf) ncim_list_query_list_pane_t1

0x9a6c,	// (0x00075f27) cam4_indicators_pane_g3_ParamLimits

0x9a6c,	// (0x00075f27) cam4_indicators_pane_g3

0x9aea,	// (0x00075fa5) vid4_indicators_pane_g5_ParamLimits

0x9aea,	// (0x00075fa5) vid4_indicators_pane_g5

0x9bd9,	// (0x00076094) vid4_progress_pane_g5_ParamLimits

0x9bd9,	// (0x00076094) vid4_progress_pane_g5

0x7273,	// (0x0007372e) main_ncimui_pane_g1

0x72d9,	// (0x00073794) ncimui_group_query_pane_ParamLimits

0x72d9,	// (0x00073794) ncimui_group_query_pane

0x7321,	// (0x000737dc) ncimui_list_pane_ParamLimits

0x7321,	// (0x000737dc) ncimui_list_pane

0x7348,	// (0x00073803) ncimui_text_pane_ParamLimits

0x7348,	// (0x00073803) ncimui_text_pane

0x7409,	// (0x000738c4) ncimui_text_pane_t1_ParamLimits

0x7409,	// (0x000738c4) ncimui_text_pane_t1

0xe122,	// (0x0007a5dd) ncimui_list_single_graphic_pane_ParamLimits

0xe122,	// (0x0007a5dd) ncimui_list_single_graphic_pane

0x7427,	// (0x000738e2) ncimui_query_pane_ParamLimits

0x7427,	// (0x000738e2) ncimui_query_pane

0x9033,	// (0x000754ee) list_highlight_pane_cp013

0xe132,	// (0x0007a5ed) ncim_list_query_list_pane_t1_copy1

0xe10c,	// (0x0007a5c7) ncim_list_single_graphic_pane_g1

0xe140,	// (0x0007a5fb) ncim_query_button_pane_cp01

0xe14c,	// (0x0007a607) ncim_query_entry_pane_ParamLimits

0xe14c,	// (0x0007a607) ncim_query_entry_pane

0xe15f,	// (0x0007a61a) ncimui_query_pane_g1

0xe16b,	// (0x0007a626) ncimui_query_pane_t1_ParamLimits

0xe16b,	// (0x0007a626) ncimui_query_pane_t1

0xa1ae,	// (0x00076669) input_focus_pane_cp012

0xe184,	// (0x0007a63f) ncim_query_entry_pane_t1

0x9f60,	// (0x0007641b) main_im_pane_ParamLimits

0x909b,	// (0x00075556) main_mobtv_pane_ParamLimits

0x909b,	// (0x00075556) main_mobtv_pane

0x7078,	// (0x00073533) main_cset6_slider_pane_g18_ParamLimits

0x7078,	// (0x00073533) main_cset6_slider_pane_g18

0x7084,	// (0x0007353f) main_cset6_slider_pane_g19_ParamLimits

0x7084,	// (0x0007353f) main_cset6_slider_pane_g19

0x743a,	// (0x000738f5) bg_main_mobtv_pane_ParamLimits

0x743a,	// (0x000738f5) bg_main_mobtv_pane

0x7448,	// (0x00073903) main_mobtv_info_pane

0x7451,	// (0x0007390c) main_mobtv_loading_pane_ParamLimits

0x7451,	// (0x0007390c) main_mobtv_loading_pane

0xe196,	// (0x0007a651) main_mobtv_pg_channel_list_pane

0xe1a0,	// (0x0007a65b) main_mobtv_pg_hdr_pane

0x745e,	// (0x00073919) main_mobtv_programe_curr_pane_ParamLimits

0x745e,	// (0x00073919) main_mobtv_programe_curr_pane

0x746b,	// (0x00073926) main_mobtv_programe_next_pane_ParamLimits

0x746b,	// (0x00073926) main_mobtv_programe_next_pane

0xe1a9,	// (0x0007a664) popup_mobtv_noti_window

0xcbaf,	// (0x0007906a) main_tv_pg_hdr_pane_g1

0xe1b1,	// (0x0007a66c) main_tv_pg_hdr_pane_g2

0xe1b9,	// (0x0007a674) main_tv_pg_hdr_pane_g3

0xe1c1,	// (0x0007a67c) main_tv_pg_hdr_pane_g4

0xe1c9,	// (0x0007a684) main_tv_pg_hdr_pane_g5

0xe1d3,	// (0x0007a68e) main_tv_pg_hdr_pane_g6

0xe1dd,	// (0x0007a698) main_tv_pg_hdr_pane_g7

0xe1e7,	// (0x0007a6a2) main_tv_pg_hdr_pane_g8

0xe1f1,	// (0x0007a6ac) main_tv_pg_hdr_pane_g9

0xe1fb,	// (0x0007a6b6) main_tv_pg_hdr_pane_g10

0xe205,	// (0x0007a6c0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007c0c3) main_tv_pg_hdr_pane_g

0xe20f,	// (0x0007a6ca) main_tv_pg_hdr_pane_t1

0xe21d,	// (0x0007a6d8) main_tv_pg_hdr_pane_t2

0xe22b,	// (0x0007a6e6) main_tv_pg_hdr_pane_t3

0xe23b,	// (0x0007a6f6) main_tv_pg_hdr_pane_t4

0xe24b,	// (0x0007a706) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007c0da) main_tv_pg_hdr_pane_t

0xe25b,	// (0x0007a716) single_mobtv_pg_channel_pane_ParamLimits

0xe25b,	// (0x0007a716) single_mobtv_pg_channel_pane

0xe26d,	// (0x0007a728) single_mobtv_pg_channel_table_pane

0xe276,	// (0x0007a731) single_mobtv_pg_channel_thumb_pane

0xe27f,	// (0x0007a73a) single_tv_pg_channel_pane_g1

0xe288,	// (0x0007a743) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007c0e5) single_tv_pg_channel_pane_g

0xce1b,	// (0x000792d6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce1b,	// (0x000792d6) bg_single_mobtv_pg_channel_thumb_pane

0xe291,	// (0x0007a74c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe291,	// (0x0007a74c) single_mobtv_pg_channel_thumb_pane_g1

0xe29f,	// (0x0007a75a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29f,	// (0x0007a75a) single_mobtv_pg_channel_thumb_pane_g2

0xe2ab,	// (0x0007a766) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2ab,	// (0x0007a766) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007c0ea) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007c0ea) single_mobtv_pg_channel_thumb_pane_g

0xe2b7,	// (0x0007a772) single_mobtv_pg_channel_thumb_pane_t1

0xe2c5,	// (0x0007a780) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007c0f1) single_mobtv_pg_channel_thumb_pane_t

0xcbaf,	// (0x0007906a) bg_single_mobtv_pg_channel_table_pane_g1

0xcbaf,	// (0x0007906a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007bb97) bg_single_mobtv_pg_channel_table_pane_g

0xe2d3,	// (0x0007a78e) single_mobtv_pg_channel_table_pane_t1

0xe2e1,	// (0x0007a79c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007c0f6) single_mobtv_pg_channel_table_pane_t

0x7480,	// (0x0007393b) main_mobtv_info_pane_g1_ParamLimits

0x7480,	// (0x0007393b) main_mobtv_info_pane_g1

0x749e,	// (0x00073959) main_mobtv_info_pane_t1_ParamLimits

0x749e,	// (0x00073959) main_mobtv_info_pane_t1

0x7516,	// (0x000739d1) main_mobtv_info_pane_t2_ParamLimits

0x7516,	// (0x000739d1) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007c100) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007c100) main_mobtv_info_pane_t

0x75a5,	// (0x00073a60) wait_bar_pane_cp05

0x75b7,	// (0x00073a72) main_mobtv_loading_pane_g1_ParamLimits

0x75b7,	// (0x00073a72) main_mobtv_loading_pane_g1

0x75ca,	// (0x00073a85) main_mobtv_loading_pane_g2_ParamLimits

0x75ca,	// (0x00073a85) main_mobtv_loading_pane_g2

0x75d6,	// (0x00073a91) main_mobtv_loading_pane_g3_ParamLimits

0x75d6,	// (0x00073a91) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007c107) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007c107) main_mobtv_loading_pane_g

0xe2ef,	// (0x0007a7aa) main_mobtv_loading_pane_t1_ParamLimits

0xe2ef,	// (0x0007a7aa) main_mobtv_loading_pane_t1

0xe307,	// (0x0007a7c2) main_mobtv_loading_pane_t2_ParamLimits

0xe307,	// (0x0007a7c2) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007c10e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007c10e) main_mobtv_loading_pane_t

0x75e9,	// (0x00073aa4) wait_bar_pane_cp06_ParamLimits

0x75e9,	// (0x00073aa4) wait_bar_pane_cp06

0xe32b,	// (0x0007a7e6) main_mobtv_programe_curr_pane_t1

0xe339,	// (0x0007a7f4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007c113) main_mobtv_programe_curr_pane_t

0xe347,	// (0x0007a802) main_mobtv_programe_next_pane_t1

0xe355,	// (0x0007a810) main_mobtv_programe_next_pane_t2

0xe363,	// (0x0007a81e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007c118) main_mobtv_programe_next_pane_t

0x9033,	// (0x000754ee) bg_popup_mobtv_noti_window_pane

0xe371,	// (0x0007a82c) popup_mobtv_noti_window_g1

0xe379,	// (0x0007a834) popup_mobtv_noti_window_t1

0xe387,	// (0x0007a842) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007c11f) popup_mobtv_noti_window_t

0xcbaf,	// (0x0007906a) bg_popup_mobtv_noti_window_pane_g1

0x90a9,	// (0x00075564) sc_clock_pane

0x90a9,	// (0x00075564) main_fs_bigclock_pane

0x6c85,	// (0x00073140) blid2_tripm_pane_t4_ParamLimits

0x6c85,	// (0x00073140) blid2_tripm_pane_t4

0x75f8,	// (0x00073ab3) sc_clock_pane_g1_ParamLimits

0x75f8,	// (0x00073ab3) sc_clock_pane_g1

0x760a,	// (0x00073ac5) sc_clock_pane_t1_ParamLimits

0x760a,	// (0x00073ac5) sc_clock_pane_t1

0x762c,	// (0x00073ae7) sc_clock_pane_t2_ParamLimits

0x762c,	// (0x00073ae7) sc_clock_pane_t2

0x7644,	// (0x00073aff) sc_clock_pane_t3_ParamLimits

0x7644,	// (0x00073aff) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007c124) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007c124) sc_clock_pane_t

0x84e2,	// (0x0007499d) main_fs_bigclock_indicator_pane_ParamLimits

0x84e2,	// (0x0007499d) main_fs_bigclock_indicator_pane

0x76e4,	// (0x00073b9f) main_fs_bigclock_pane_g1_ParamLimits

0x76e4,	// (0x00073b9f) main_fs_bigclock_pane_g1

0x84ee,	// (0x000749a9) main_fs_bigclock_pane_t1_ParamLimits

0x84ee,	// (0x000749a9) main_fs_bigclock_pane_t1

0x8500,	// (0x000749bb) main_fs_bigclock_pane_t2_ParamLimits

0x8500,	// (0x000749bb) main_fs_bigclock_pane_t2

0x8512,	// (0x000749cd) main_fs_bigclock_pane_t3_ParamLimits

0x8512,	// (0x000749cd) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007c32e) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007c32e) main_fs_bigclock_pane_t

0xec93,	// (0x0007b14e) main_fs_bigclock_indicator_pane_g1

0xe05b,	// (0x0007a516) ncim_query_content_pane_g2_ParamLimits

0xe05b,	// (0x0007a516) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007c0b1) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007c0b1) ncim_query_content_pane_g

0x765d,	// (0x00073b18) sc_clock_pane_t4_ParamLimits

0x765d,	// (0x00073b18) sc_clock_pane_t4

0x909b,	// (0x00075556) main_radioblah_pane

0xd571,	// (0x00079a2c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd571,	// (0x00079a2c) cell_call4_button_pane_t1_copy1

0x728b,	// (0x00073746) main_ncimui_pane_t1_ParamLimits

0x728b,	// (0x00073746) main_ncimui_pane_t1

0x72a5,	// (0x00073760) main_ncimui_pane_t2_ParamLimits

0x72a5,	// (0x00073760) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007c0aa) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007c0aa) main_ncimui_pane_t

0xe4e3,	// (0x0007a99e) main_radioblah_anim_pane_ParamLimits

0xe4e3,	// (0x0007a99e) main_radioblah_anim_pane

0xe4f4,	// (0x0007a9af) main_radioblah_info_pane_ParamLimits

0xe4f4,	// (0x0007a9af) main_radioblah_info_pane

0xe508,	// (0x0007a9c3) main_radioblah_pane_t1_ParamLimits

0xe508,	// (0x0007a9c3) main_radioblah_pane_t1

0xe524,	// (0x0007a9df) main_radioblah_pane_t2_ParamLimits

0xe524,	// (0x0007a9df) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007c145) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007c145) main_radioblah_pane_t

0x773c,	// (0x00073bf7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x773c,	// (0x00073bf7) main_radioblah_rocker_ctrl_pane

0xe56c,	// (0x0007aa27) main_radioblah_info_pane_t1_ParamLimits

0xe56c,	// (0x0007aa27) main_radioblah_info_pane_t1

0x7794,	// (0x00073c4f) main_radioblah_info_pane_t2_ParamLimits

0x7794,	// (0x00073c4f) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007c14e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007c14e) main_radioblah_info_pane_t

0xcbaf,	// (0x0007906a) main_radioblah_rocker_ctrl_pane_g1

0x7844,	// (0x00073cff) main_radioblah_rocker_ctrl_pane_g2

0x784c,	// (0x00073d07) main_radioblah_rocker_ctrl_pane_g3

0x7854,	// (0x00073d0f) main_radioblah_rocker_ctrl_pane_g4

0x785c,	// (0x00073d17) main_radioblah_rocker_ctrl_pane_g5

0x7864,	// (0x00073d1f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007c157) main_radioblah_rocker_ctrl_pane_g

0x7241,	// (0x000736fc) main_cset_text2_pane_t1_copy1_ParamLimits

0x9a2e,	// (0x00075ee9) cam4_image_uncrop_qvga_pane

0x9a95,	// (0x00075f50) vid4_image_uncrop_qcif_pane

0x9c13,	// (0x000760ce) cam6_image_uncrop_qvga_pane_ParamLimits

0x9c13,	// (0x000760ce) cam6_image_uncrop_qvga_pane

0xdd47,	// (0x0007a202) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd47,	// (0x0007a202) vid6_image_uncrop_qcif_pane

0x9033,	// (0x000754ee) bg_popup_preview_window_pane_cp03

0xe00d,	// (0x0007a4c8) list_cset_text2_pane

0xe015,	// (0x0007a4d0) main_cset6_text2_pane_g1

0xe01d,	// (0x0007a4d8) main_cset6_text2_pane_t1

0xe5a6,	// (0x0007aa61) list_cset_text2_pane_t1_ParamLimits

0xe5a6,	// (0x0007aa61) list_cset_text2_pane_t1

0x909b,	// (0x00075556) main_radioblah_pane_ParamLimits

0x7591,	// (0x00073a4c) main_mobtv_info_pane_t3_ParamLimits

0x7591,	// (0x00073a4c) main_mobtv_info_pane_t3

0x772a,	// (0x00073be5) main_radioblah_pane_g1

0x7764,	// (0x00073c1f) main_radioblah_info_pane_g1

0x77e9,	// (0x00073ca4) main_radioblah_info_pane_t3_ParamLimits

0x77e9,	// (0x00073ca4) main_radioblah_info_pane_t3

0x21e0,	// (0x0006e69b) highlight_cell_cale_month_pane_ParamLimits

0x21e0,	// (0x0006e69b) highlight_cell_cale_month_pane

0x90a9,	// (0x00075564) main_phob_fisheye_pane

0xcef7,	// (0x000793b2) scroll_pane_cp0031_ParamLimits

0xcef7,	// (0x000793b2) scroll_pane_cp0031

0xde55,	// (0x0007a310) wait_bar_pane_cp08_ParamLimits

0x6fd2,	// (0x0007348d) cset_list_set_pane_copy1_ParamLimits

0xe5c1,	// (0x0007aa7c) highlight_cell_cale_month_pane_g1

0x786c,	// (0x00073d27) highlight_cell_cale_month_pane_t1

0xdae1,	// (0x00079f9c) list_gen_pane_cp01

0xd738,	// (0x00079bf3) scroll_pane_01

0xb3c9,	// (0x00077884) list_single_double_fisheye_pane

0xa3ac,	// (0x00076867) list_double_fisheye_pane_g1_ParamLimits

0xa3ac,	// (0x00076867) list_double_fisheye_pane_g1

0xa3b8,	// (0x00076873) list_double_fisheye_pane_g2_ParamLimits

0xa3b8,	// (0x00076873) list_double_fisheye_pane_g2

0xb3d2,	// (0x0007788d) list_double_fisheye_pane_g3_ParamLimits

0xb3d2,	// (0x0007788d) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007c164) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007c164) list_double_fisheye_pane_g

0xa3e9,	// (0x000768a4) list_double_fisheye_pane_t1_ParamLimits

0xa3e9,	// (0x000768a4) list_double_fisheye_pane_t1

0xa404,	// (0x000768bf) list_double_fisheye_pane_t2_ParamLimits

0xa404,	// (0x000768bf) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007c16f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007c16f) list_double_fisheye_pane_t

0x90a9,	// (0x00075564) main_call5_pane

0x7688,	// (0x00073b43) sc_swipe_pane_ParamLimits

0x7688,	// (0x00073b43) sc_swipe_pane

0x788d,	// (0x00073d48) call5_image_pane_ParamLimits

0x788d,	// (0x00073d48) call5_image_pane

0x78aa,	// (0x00073d65) call5_swipe_1_pane_ParamLimits

0x78aa,	// (0x00073d65) call5_swipe_1_pane

0x78bd,	// (0x00073d78) call5_swipe_2_pane_ParamLimits

0x78bd,	// (0x00073d78) call5_swipe_2_pane

0x78e8,	// (0x00073da3) popup_call5_audio_first_window_ParamLimits

0x78e8,	// (0x00073da3) popup_call5_audio_first_window

0xce1b,	// (0x000792d6) call5_swipe_1_pane_g1_ParamLimits

0xce1b,	// (0x000792d6) call5_swipe_1_pane_g1

0xe5c9,	// (0x0007aa84) call5_swipe_1_pane_g2_ParamLimits

0xe5c9,	// (0x0007aa84) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007c174) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007c174) call5_swipe_1_pane_g

0xe5d5,	// (0x0007aa90) call5_swipe_1_pane_t1_ParamLimits

0xe5d5,	// (0x0007aa90) call5_swipe_1_pane_t1

0xce1b,	// (0x000792d6) call5_swipe_2_pane_g1_ParamLimits

0xce1b,	// (0x000792d6) call5_swipe_2_pane_g1

0xe5ea,	// (0x0007aaa5) call5_swipe_2_pane_g2_ParamLimits

0xe5ea,	// (0x0007aaa5) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007c179) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007c179) call5_swipe_2_pane_g

0xe5f6,	// (0x0007aab1) call5_swipe_2_pane_t1_ParamLimits

0xe5f6,	// (0x0007aab1) call5_swipe_2_pane_t1

0xe60b,	// (0x0007aac6) sc_swipe_pane_g1_ParamLimits

0xe60b,	// (0x0007aac6) sc_swipe_pane_g1

0xe618,	// (0x0007aad3) sc_swipe_pane_g2_ParamLimits

0xe618,	// (0x0007aad3) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007c17e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007c17e) sc_swipe_pane_g

0xe624,	// (0x0007aadf) sc_swipe_pane_t1_ParamLimits

0xe624,	// (0x0007aadf) sc_swipe_pane_t1

0x90a9,	// (0x00075564) main_cmail_launcher_pane

0x78f9,	// (0x00073db4) aid_size_cell_cmail_l_ParamLimits

0x78f9,	// (0x00073db4) aid_size_cell_cmail_l

0x7913,	// (0x00073dce) grid_cmail_l_pane_ParamLimits

0x7913,	// (0x00073dce) grid_cmail_l_pane

0x792e,	// (0x00073de9) cell_cmail_l_pane_ParamLimits

0x792e,	// (0x00073de9) cell_cmail_l_pane

0x7954,	// (0x00073e0f) cell_cmail_l_pane_g1_ParamLimits

0x7954,	// (0x00073e0f) cell_cmail_l_pane_g1

0x7965,	// (0x00073e20) cell_cmail_l_pane_t1_ParamLimits

0x7965,	// (0x00073e20) cell_cmail_l_pane_t1

0xe639,	// (0x0007aaf4) cell_cmail_l_pane_t2_ParamLimits

0xe639,	// (0x0007aaf4) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007c183) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007c183) cell_cmail_l_pane_t

0xa1ae,	// (0x00076669) grid_highlight_pane_cp018_ParamLimits

0xa1ae,	// (0x00076669) grid_highlight_pane_cp018

0x01af,	// (0x0006c66a) main2_pane_ParamLimits

0x01af,	// (0x0006c66a) main2_pane

0xa00b,	// (0x000764c6) popup_sp_fs_action_menu_bg_pane_g1

0xa013,	// (0x000764ce) popup_sp_fs_action_menu_bg_pane_g2

0xa01b,	// (0x000764d6) popup_sp_fs_action_menu_bg_pane_g3

0xa023,	// (0x000764de) popup_sp_fs_action_menu_bg_pane_g4

0xa800,	// (0x00076cbb) popup_sp_fs_action_menu_bg_pane_g5

0xa808,	// (0x00076cc3) popup_sp_fs_action_menu_bg_pane_g6

0xa810,	// (0x00076ccb) popup_sp_fs_action_menu_bg_pane_g7

0xa818,	// (0x00076cd3) popup_sp_fs_action_menu_bg_pane_g8

0xa820,	// (0x00076cdb) popup_sp_fs_action_menu_bg_pane_g9

0xa828,	// (0x00076ce3) popup_sp_fs_action_menu_bg_pane_g10

0xa828,	// (0x00076ce3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007b645) popup_sp_fs_action_menu_bg_pane_g

0x9576,	// (0x00075a31) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t3_g3_g1

0x11bd,	// (0x0006d678) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x2_t3_g3_g2

0x9582,	// (0x00075a3d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007b6f3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007b6f3) list_medium_line_x2_t3_g3_g

0x958e,	// (0x00075a49) list_medium_line_x2_t3_g3_t1_ParamLimits

0x958e,	// (0x00075a49) list_medium_line_x2_t3_g3_t1

0x11c9,	// (0x0006d684) list_medium_line_x2_t3_g3_t2_ParamLimits

0x11c9,	// (0x0006d684) list_medium_line_x2_t3_g3_t2

0xa02b,	// (0x000764e6) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007b6fa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007b6fa) list_medium_line_x2_t3_g3_t

0x9576,	// (0x00075a31) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t3_g2_g1

0x9582,	// (0x00075a3d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007b701) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007b701) list_medium_line_x2_t3_g2_g

0xa040,	// (0x000764fb) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa040,	// (0x000764fb) list_medium_line_x2_t3_g2_t1

0xa056,	// (0x00076511) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa056,	// (0x00076511) list_medium_line_x2_t3_g2_t2

0xa068,	// (0x00076523) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa068,	// (0x00076523) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007b706) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007b706) list_medium_line_x2_t3_g2_t

0x9576,	// (0x00075a31) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t4_g4_g1

0x11dd,	// (0x0006d698) list_medium_line_x2_t4_g4_g2_ParamLimits

0x11dd,	// (0x0006d698) list_medium_line_x2_t4_g4_g2

0x11bd,	// (0x0006d678) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x2_t4_g4_g3

0x11e9,	// (0x0006d6a4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x11e9,	// (0x0006d6a4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007b70d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007b70d) list_medium_line_x2_t4_g4_g

0x11f5,	// (0x0006d6b0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x11f5,	// (0x0006d6b0) list_medium_line_x2_t4_g4_t1

0x120c,	// (0x0006d6c7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x120c,	// (0x0006d6c7) list_medium_line_x2_t4_g4_t2

0x1221,	// (0x0006d6dc) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1221,	// (0x0006d6dc) list_medium_line_x2_t4_g4_t3

0xa086,	// (0x00076541) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa086,	// (0x00076541) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007b716) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007b716) list_medium_line_x2_t4_g4_t

0x9576,	// (0x00075a31) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t2_g4_g1

0x11dd,	// (0x0006d698) list_medium_line_x2_t2_g4_g2_ParamLimits

0x11dd,	// (0x0006d698) list_medium_line_x2_t2_g4_g2

0x11bd,	// (0x0006d678) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x2_t2_g4_g3

0x9582,	// (0x00075a3d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007b77d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007b77d) list_medium_line_x2_t2_g4_g

0xa098,	// (0x00076553) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa098,	// (0x00076553) list_medium_line_x2_t2_g4_t1

0xa02b,	// (0x000764e6) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007b786) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007b786) list_medium_line_x2_t2_g4_t

0x9576,	// (0x00075a31) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t2_g3_g1

0x11bd,	// (0x0006d678) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x2_t2_g3_g2

0x9582,	// (0x00075a3d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007b6f3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007b6f3) list_medium_line_x2_t2_g3_g

0xa0ad,	// (0x00076568) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa0ad,	// (0x00076568) list_medium_line_x2_t2_g3_t1

0xa02b,	// (0x000764e6) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007b78b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007b78b) list_medium_line_x2_t2_g3_t

0x2330,	// (0x0006e7eb) main_sp_fs_list_pane_ParamLimits

0x2330,	// (0x0006e7eb) main_sp_fs_list_pane

0xcbf3,	// (0x000790ae) sp_fs_scroll_pane_ParamLimits

0xcbf3,	// (0x000790ae) sp_fs_scroll_pane

0x233c,	// (0x0006e7f7) list_medium_line_x2_t3_t1

0x234c,	// (0x0006e807) list_medium_line_x2_t3_t2

0xa0c2,	// (0x0007657d) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007b7d6) list_medium_line_x2_t3_t

0x235a,	// (0x0006e815) list_medium_line_x3_t4_t1

0x236a,	// (0x0006e825) list_medium_line_x3_t4_t2

0xa0d0,	// (0x0007658b) list_medium_line_x3_t4_t3

0xa0c2,	// (0x0007657d) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007b7dd) list_medium_line_x3_t4_t

0x2378,	// (0x0006e833) list_medium_line_x4_t5_t1

0x2388,	// (0x0006e843) list_medium_line_x4_t5_t2

0xa0d0,	// (0x0007658b) list_medium_line_x4_t5_t3

0x2396,	// (0x0006e851) list_medium_line_x4_t5_t4

0xa0c2,	// (0x0007657d) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007b7e6) list_medium_line_x4_t5_t

0x9576,	// (0x00075a31) list_medium_line_t4_g4_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_t4_g4_g1

0xa0de,	// (0x00076599) list_medium_line_t4_g4_g2_ParamLimits

0xa0de,	// (0x00076599) list_medium_line_t4_g4_g2

0x23a4,	// (0x0006e85f) list_medium_line_t4_g4_g3_ParamLimits

0x23a4,	// (0x0006e85f) list_medium_line_t4_g4_g3

0x9582,	// (0x00075a3d) list_medium_line_t4_g4_g4_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007b7f1) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007b7f1) list_medium_line_t4_g4_g

0xa0ea,	// (0x000765a5) list_medium_line_t4_g4_t1_ParamLimits

0xa0ea,	// (0x000765a5) list_medium_line_t4_g4_t1

0xa0ff,	// (0x000765ba) list_medium_line_t4_g4_t2_ParamLimits

0xa0ff,	// (0x000765ba) list_medium_line_t4_g4_t2

0x23b0,	// (0x0006e86b) list_medium_line_t4_g4_t3_ParamLimits

0x23b0,	// (0x0006e86b) list_medium_line_t4_g4_t3

0xa02b,	// (0x000764e6) list_medium_line_t4_g4_t4_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007b7fa) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007b7fa) list_medium_line_t4_g4_t

0x2465,	// (0x0006e920) chi_dic_find_pane_g1

0x347f,	// (0x0006f93a) main_tport_pane

0xa26e,	// (0x00076729) list_medium_line_plain_t1

0xa27c,	// (0x00076737) list_medium_line_t2_g2_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_t2_g2_g1

0xa288,	// (0x00076743) list_medium_line_t2_g2_g2_ParamLimits

0xa288,	// (0x00076743) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007bebb) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007bebb) list_medium_line_t2_g2_g

0x63a6,	// (0x00072861) list_medium_line_t2_g2_t1_ParamLimits

0x63a6,	// (0x00072861) list_medium_line_t2_g2_t1

0x63c0,	// (0x0007287b) list_medium_line_t2_g2_t2_ParamLimits

0x63c0,	// (0x0007287b) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007bec0) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007bec0) list_medium_line_t2_g2_t

0xa330,	// (0x000767eb) aid_sp_fs_list_icon_a_sm

0xa338,	// (0x000767f3) aid_sp_fs_list_icon_d

0xa340,	// (0x000767fb) aid_sp_fs_text_primary

0xa349,	// (0x00076804) aid_sp_fs_text_secondary

0xdaea,	// (0x00079fa5) list_medium_line

0xdaea,	// (0x00079fa5) list_medium_line_g2

0xdaea,	// (0x00079fa5) list_medium_line_g3

0xdaea,	// (0x00079fa5) list_medium_line_plain

0xdaea,	// (0x00079fa5) list_medium_line_plain_t2

0xdaea,	// (0x00079fa5) list_medium_line_plain_t3

0xdaea,	// (0x00079fa5) list_medium_line_right_icon

0xdaea,	// (0x00079fa5) list_medium_line_right_iconx2

0xdaea,	// (0x00079fa5) list_medium_line_t2

0xdaea,	// (0x00079fa5) list_medium_line_t2_g2

0xdaea,	// (0x00079fa5) list_medium_line_t2_g3

0xdaea,	// (0x00079fa5) list_medium_line_t2_right_icon

0xdaea,	// (0x00079fa5) list_medium_line_t2_right_iconx2

0xdaea,	// (0x00079fa5) list_medium_line_t3

0xdaea,	// (0x00079fa5) list_medium_line_t3_g2

0xdaea,	// (0x00079fa5) list_medium_line_t3_g3

0xdaea,	// (0x00079fa5) list_medium_line_t3_right_iconx2

0x6a3b,	// (0x00072ef6) list_medium_line_t4_g4

0x6a44,	// (0x00072eff) list_medium_line_x2

0x6a44,	// (0x00072eff) list_medium_line_x2_t2_g2

0x6a44,	// (0x00072eff) list_medium_line_x2_t2_g3

0x6a44,	// (0x00072eff) list_medium_line_x2_t2_g4

0x6a44,	// (0x00072eff) list_medium_line_x2_t3

0x6a44,	// (0x00072eff) list_medium_line_x2_t3_g2

0x6a44,	// (0x00072eff) list_medium_line_x2_t3_g3

0x6a44,	// (0x00072eff) list_medium_line_x2_t3_g4

0x6a44,	// (0x00072eff) list_medium_line_x2_t4_g2

0x6a44,	// (0x00072eff) list_medium_line_x2_t4_g4

0x6a4d,	// (0x00072f08) list_medium_line_x3

0x6a4d,	// (0x00072f08) list_medium_line_x3_t4

0x6a4d,	// (0x00072f08) list_medium_line_x3_t4_g4

0x6a3b,	// (0x00072ef6) list_medium_line_x4_t4

0x6a3b,	// (0x00072ef6) list_medium_line_x4_t4_g7

0x6a3b,	// (0x00072ef6) list_medium_line_x4_t5

0x6a56,	// (0x00072f11) list_single_fs_dyc_pane_ParamLimits

0x6a56,	// (0x00072f11) list_single_fs_dyc_pane

0x9576,	// (0x00075a31) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x4_t4_g7_g1

0xa352,	// (0x0007680d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa352,	// (0x0007680d) list_medium_line_x4_t4_g7_g2

0x71cc,	// (0x00073687) list_medium_line_x4_t4_g7_g3_ParamLimits

0x71cc,	// (0x00073687) list_medium_line_x4_t4_g7_g3

0x71db,	// (0x00073696) list_medium_line_x4_t4_g7_g4_ParamLimits

0x71db,	// (0x00073696) list_medium_line_x4_t4_g7_g4

0x71e7,	// (0x000736a2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x71e7,	// (0x000736a2) list_medium_line_x4_t4_g7_g5

0x71f6,	// (0x000736b1) list_medium_line_x4_t4_g7_g6_ParamLimits

0x71f6,	// (0x000736b1) list_medium_line_x4_t4_g7_g6

0xa35e,	// (0x00076819) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa35e,	// (0x00076819) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007c08b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007c08b) list_medium_line_x4_t4_g7_g

0xa36a,	// (0x00076825) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa36a,	// (0x00076825) list_medium_line_x4_t4_g7_t1

0x7205,	// (0x000736c0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7205,	// (0x000736c0) list_medium_line_x4_t4_g7_t2

0x721a,	// (0x000736d5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x721a,	// (0x000736d5) list_medium_line_x4_t4_g7_t3

0x722f,	// (0x000736ea) list_medium_line_x4_t4_g7_t4_ParamLimits

0x722f,	// (0x000736ea) list_medium_line_x4_t4_g7_t4

0xa37f,	// (0x0007683a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa37f,	// (0x0007683a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007c09a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007c09a) list_medium_line_x4_t4_g7_t

0xa391,	// (0x0007684c) list_single_dyc_row_pane_ParamLimits

0xa391,	// (0x0007684c) list_single_dyc_row_pane

0x787a,	// (0x00073d35) call5_gesture_pane_ParamLimits

0x787a,	// (0x00073d35) call5_gesture_pane

0x78d0,	// (0x00073d8b) call5_windows_pane_ParamLimits

0x78d0,	// (0x00073d8b) call5_windows_pane

0x797b,	// (0x00073e36) call5_swipe_1_pane_cp_ParamLimits

0x797b,	// (0x00073e36) call5_swipe_1_pane_cp

0x7987,	// (0x00073e42) call5_swipe_2_pane_cp_ParamLimits

0x7987,	// (0x00073e42) call5_swipe_2_pane_cp

0xa903,	// (0x00076dbe) call5_image_pane_cp

0x7993,	// (0x00073e4e) popup_call5_audio_first_window_cp_ParamLimits

0x7993,	// (0x00073e4e) popup_call5_audio_first_window_cp

0xe60b,	// (0x0007aac6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe60b,	// (0x0007aac6) call5_swipe_1_pane_g1_cp

0xe64b,	// (0x0007ab06) call5_swipe_1_pane_g2_cp

0xe624,	// (0x0007aadf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe624,	// (0x0007aadf) call5_swipe_1_pane_t1_cp

0xe60b,	// (0x0007aac6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe60b,	// (0x0007aac6) call5_swipe_2_pane_g1_cp

0xe653,	// (0x0007ab0e) call5_swipe_2_pane_g2_cp

0xe65b,	// (0x0007ab16) call5_swipe_2_pane_t1_cp_ParamLimits

0xe65b,	// (0x0007ab16) call5_swipe_2_pane_t1_cp

0xa1ae,	// (0x00076669) main_sp_fs_email_pane

0xe670,	// (0x0007ab2b) main_sp_fs_listscroll_pane_te

0x79a1,	// (0x00073e5c) popup_sp_fs_action_menu_pane_ParamLimits

0x79a1,	// (0x00073e5c) popup_sp_fs_action_menu_pane

0xcbaf,	// (0x0007906a) bg_sp_fs_ctrlbar_pane_g1

0xe679,	// (0x0007ab34) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe682,	// (0x0007ab3d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe68b,	// (0x0007ab46) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbaf,	// (0x0007906a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007c188) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc992,	// (0x00078e4d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc992,	// (0x00078e4d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe694,	// (0x0007ab4f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe694,	// (0x0007ab4f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6a0,	// (0x0007ab5b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6a0,	// (0x0007ab5b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007c191) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007c191) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ac,	// (0x0007ab67) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ac,	// (0x0007ab67) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa426,	// (0x000768e1) list_medium_line_t2_right_icon_g1

0x79e3,	// (0x00073e9e) list_medium_line_t2_right_icon_t1

0x79f3,	// (0x00073eae) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007c196) list_medium_line_t2_right_icon_t

0xc7a5,	// (0x00078c60) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a5,	// (0x00078c60) bg_sp_fs_ctrlbar_pane

0x7a4d,	// (0x00073f08) main_sp_fs_ctrlbar_button_pane_cp01

0x7a57,	// (0x00073f12) main_sp_fs_ctrlbar_ddmenu_pane

0xe6fe,	// (0x0007abb9) main_sp_fs_ctrlbar_pane_g1

0xe70a,	// (0x0007abc5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007c19b) main_sp_fs_ctrlbar_pane_g

0xe716,	// (0x0007abd1) main_sp_fs_ctrlbar_pane_t1

0x7a61,	// (0x00073f1c) main_sp_fs_ctrlbar_pane

0x7a85,	// (0x00073f40) main_sp_fs_listscroll_pane_te_cp01

0x7aa5,	// (0x00073f60) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7aa5,	// (0x00073f60) popup_sp_fs_action_menu_pane_cp01

0xa1ae,	// (0x00076669) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa1ae,	// (0x00076669) bg_sp_fs_highlight_list_pane_cp01

0xa42e,	// (0x000768e9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa42e,	// (0x000768e9) sp_fs_action_menu_list_gene_pane_g1

0xe746,	// (0x0007ac01) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe746,	// (0x0007ac01) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007c1a5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007c1a5) sp_fs_action_menu_list_gene_pane_g

0xa43d,	// (0x000768f8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa43d,	// (0x000768f8) sp_fs_action_menu_list_gene_pane_t1

0xa455,	// (0x00076910) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa455,	// (0x00076910) sp_fs_action_menu_list_gene_pane

0xe753,	// (0x0007ac0e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe753,	// (0x0007ac0e) popup_sp_fs_action_menu_bg_pane

0xa472,	// (0x0007692d) sp_fs_action_menu_list_pane_ParamLimits

0xa472,	// (0x0007692d) sp_fs_action_menu_list_pane

0x7ad5,	// (0x00073f90) sp_fs_scroll_pane_cp01_ParamLimits

0x7ad5,	// (0x00073f90) sp_fs_scroll_pane_cp01

0x7afb,	// (0x00073fb6) list_medium_line_plain_t2_t1

0x7b0b,	// (0x00073fc6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007c1aa) list_medium_line_plain_t2_t

0x7b1b,	// (0x00073fd6) list_medium_line_plain_t3_t1

0x7b2b,	// (0x00073fe6) list_medium_line_plain_t3_t2

0x7b39,	// (0x00073ff4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007c1af) list_medium_line_plain_t3_t

0x9576,	// (0x00075a31) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t2_g2_g1

0x9582,	// (0x00075a3d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007b701) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007b701) list_medium_line_x2_t2_g2_g

0xa0ea,	// (0x000765a5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa0ea,	// (0x000765a5) list_medium_line_x2_t2_g2_t1

0xa02b,	// (0x000764e6) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007c1b6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007c1b6) list_medium_line_x2_t2_g2_t

0x9576,	// (0x00075a31) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t4_g2_g1

0x7b47,	// (0x00074002) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7b47,	// (0x00074002) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007c1bb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007c1bb) list_medium_line_x2_t4_g2_g

0x7b58,	// (0x00074013) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7b58,	// (0x00074013) list_medium_line_x2_t4_g2_t1

0x7b72,	// (0x0007402d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7b72,	// (0x0007402d) list_medium_line_x2_t4_g2_t2

0x7b87,	// (0x00074042) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7b87,	// (0x00074042) list_medium_line_x2_t4_g2_t3

0xa02b,	// (0x000764e6) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007c1c0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007c1c0) list_medium_line_x2_t4_g2_t

0xa490,	// (0x0007694b) list_medium_line_t3_right_iconx2_g1

0xa426,	// (0x000768e1) list_medium_line_t3_right_iconx2_g2

0x7b9c,	// (0x00074057) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007c1c9) list_medium_line_t3_right_iconx2_g

0x7ba6,	// (0x00074061) list_medium_line_t3_right_iconx2_t1

0x7bb6,	// (0x00074071) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007c1d0) list_medium_line_t3_right_iconx2_t

0x9576,	// (0x00075a31) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x3_t4_g4_g1

0x11bd,	// (0x0006d678) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x3_t4_g4_g2

0xa0de,	// (0x00076599) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa0de,	// (0x00076599) list_medium_line_x3_t4_g4_g3

0x7bc4,	// (0x0007407f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7bc4,	// (0x0007407f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007c1d5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007c1d5) list_medium_line_x3_t4_g4_g

0x7bd0,	// (0x0007408b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7bd0,	// (0x0007408b) list_medium_line_x3_t4_g4_t1

0x7be7,	// (0x000740a2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7be7,	// (0x000740a2) list_medium_line_x3_t4_g4_t2

0xa498,	// (0x00076953) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa498,	// (0x00076953) list_medium_line_x3_t4_g4_t3

0x7c02,	// (0x000740bd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7c02,	// (0x000740bd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007c1de) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007c1de) list_medium_line_x3_t4_g4_t

0x7c1e,	// (0x000740d9) list_single_dyc_row_text_pane_t1_ParamLimits

0x7c1e,	// (0x000740d9) list_single_dyc_row_text_pane_t1

0x7c67,	// (0x00074122) list_single_dyc_row_text_pane_t2_ParamLimits

0x7c67,	// (0x00074122) list_single_dyc_row_text_pane_t2

0xa4ad,	// (0x00076968) list_single_dyc_row_text_pane_t3_ParamLimits

0xa4ad,	// (0x00076968) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007c1e7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007c1e7) list_single_dyc_row_text_pane_t

0xa4d1,	// (0x0007698c) list_single_dyc_row_pane_g1_ParamLimits

0xa4d1,	// (0x0007698c) list_single_dyc_row_pane_g1

0xa4dd,	// (0x00076998) list_single_dyc_row_pane_g2_ParamLimits

0xa4dd,	// (0x00076998) list_single_dyc_row_pane_g2

0xa4e9,	// (0x000769a4) list_single_dyc_row_pane_g3_ParamLimits

0xa4e9,	// (0x000769a4) list_single_dyc_row_pane_g3

0xa4f5,	// (0x000769b0) list_single_dyc_row_pane_g4_ParamLimits

0xa4f5,	// (0x000769b0) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007c1f4) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007c1f4) list_single_dyc_row_pane_g

0xa501,	// (0x000769bc) list_single_dyc_row_text_pane_ParamLimits

0xa501,	// (0x000769bc) list_single_dyc_row_text_pane

0x9033,	// (0x000754ee) bg_sp_fs_scroll_pane

0xe761,	// (0x0007ac1c) thumb_sp_fs_scroll_pane

0xa27c,	// (0x00076737) list_medium_line_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_g1

0xa520,	// (0x000769db) list_medium_line_t1_ParamLimits

0xa520,	// (0x000769db) list_medium_line_t1

0x9576,	// (0x00075a31) list_medium_line_x2_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_g1

0x11bd,	// (0x0006d678) list_medium_line_x2_g2_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007c1fd) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007c1fd) list_medium_line_x2_g

0xa535,	// (0x000769f0) list_medium_line_x2_t1_ParamLimits

0xa535,	// (0x000769f0) list_medium_line_x2_t1

0x9576,	// (0x00075a31) list_medium_line_x3_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x3_g1

0x11bd,	// (0x0006d678) list_medium_line_x3_g2_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007c1fd) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007c1fd) list_medium_line_x3_g

0xa535,	// (0x000769f0) list_medium_line_x3_t1_ParamLimits

0xa535,	// (0x000769f0) list_medium_line_x3_t1

0xe76a,	// (0x0007ac25) thumb_sp_fs_scroll_pane_g1

0xe773,	// (0x0007ac2e) thumb_sp_fs_scroll_pane_g2

0xe77c,	// (0x0007ac37) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007c202) thumb_sp_fs_scroll_pane_g

0xe76a,	// (0x0007ac25) bg_sp_fs_scroll_pane_g1

0xe773,	// (0x0007ac2e) bg_sp_fs_scroll_pane_g2

0xe77c,	// (0x0007ac37) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007c202) bg_sp_fs_scroll_pane_g

0x9576,	// (0x00075a31) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9576,	// (0x00075a31) list_medium_line_x2_t3_g4_g1

0x11dd,	// (0x0006d698) list_medium_line_x2_t3_g4_g2_ParamLimits

0x11dd,	// (0x0006d698) list_medium_line_x2_t3_g4_g2

0x11bd,	// (0x0006d678) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11bd,	// (0x0006d678) list_medium_line_x2_t3_g4_g3

0x9582,	// (0x00075a3d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9582,	// (0x00075a3d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007b77d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007b77d) list_medium_line_x2_t3_g4_g

0x7d9c,	// (0x00074257) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7d9c,	// (0x00074257) list_medium_line_x2_t3_g4_t1

0x7db6,	// (0x00074271) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7db6,	// (0x00074271) list_medium_line_x2_t3_g4_t2

0xa02b,	// (0x000764e6) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa02b,	// (0x000764e6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007c209) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007c209) list_medium_line_x2_t3_g4_t

0xa27c,	// (0x00076737) list_medium_line_g2_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_g2_g1

0xa288,	// (0x00076743) list_medium_line_g2_g2_ParamLimits

0xa288,	// (0x00076743) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007bebb) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007bebb) list_medium_line_g2_g

0xa54b,	// (0x00076a06) list_medium_line_g2_t1_ParamLimits

0xa54b,	// (0x00076a06) list_medium_line_g2_t1

0xa27c,	// (0x00076737) list_medium_line_t3_g2_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_t3_g2_g1

0xa288,	// (0x00076743) list_medium_line_t3_g2_g2_ParamLimits

0xa288,	// (0x00076743) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007bebb) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007bebb) list_medium_line_t3_g2_g

0x7dcf,	// (0x0007428a) list_medium_line_t3_g2_t1_ParamLimits

0x7dcf,	// (0x0007428a) list_medium_line_t3_g2_t1

0x7de9,	// (0x000742a4) list_medium_line_t3_g2_t2_ParamLimits

0x7de9,	// (0x000742a4) list_medium_line_t3_g2_t2

0x7dfe,	// (0x000742b9) list_medium_line_t3_g2_t3_ParamLimits

0x7dfe,	// (0x000742b9) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007c210) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007c210) list_medium_line_t3_g2_t

0xa426,	// (0x000768e1) list_medium_line_right_icon_g1

0xa560,	// (0x00076a1b) list_medium_line_right_icon_t1

0xa27c,	// (0x00076737) list_medium_line_t2_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_t2_g1

0x7e18,	// (0x000742d3) list_medium_line_t2_t1_ParamLimits

0x7e18,	// (0x000742d3) list_medium_line_t2_t1

0x7e32,	// (0x000742ed) list_medium_line_t2_t2_ParamLimits

0x7e32,	// (0x000742ed) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007c217) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007c217) list_medium_line_t2_t

0xa27c,	// (0x00076737) list_medium_line_t3_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_t3_g1

0x7e4b,	// (0x00074306) list_medium_line_t3_t1_ParamLimits

0x7e4b,	// (0x00074306) list_medium_line_t3_t1

0x7e62,	// (0x0007431d) list_medium_line_t3_t2_ParamLimits

0x7e62,	// (0x0007431d) list_medium_line_t3_t2

0x7e77,	// (0x00074332) list_medium_line_t3_t3_ParamLimits

0x7e77,	// (0x00074332) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007c21c) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007c21c) list_medium_line_t3_t

0xa27c,	// (0x00076737) list_medium_line_g3_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_g3_g1

0xa56e,	// (0x00076a29) list_medium_line_g3_g2_ParamLimits

0xa56e,	// (0x00076a29) list_medium_line_g3_g2

0xa288,	// (0x00076743) list_medium_line_g3_g3_ParamLimits

0xa288,	// (0x00076743) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007c223) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007c223) list_medium_line_g3_g

0xa57a,	// (0x00076a35) list_medium_line_g3_t1_ParamLimits

0xa57a,	// (0x00076a35) list_medium_line_g3_t1

0xa27c,	// (0x00076737) list_medium_line_t2_g3_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_t2_g3_g1

0xa56e,	// (0x00076a29) list_medium_line_t2_g3_g2_ParamLimits

0xa56e,	// (0x00076a29) list_medium_line_t2_g3_g2

0xa288,	// (0x00076743) list_medium_line_t2_g3_g3_ParamLimits

0xa288,	// (0x00076743) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007c223) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007c223) list_medium_line_t2_g3_g

0x7e89,	// (0x00074344) list_medium_line_t2_g3_t1_ParamLimits

0x7e89,	// (0x00074344) list_medium_line_t2_g3_t1

0x7ea3,	// (0x0007435e) list_medium_line_t2_g3_t2_ParamLimits

0x7ea3,	// (0x0007435e) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007c22a) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007c22a) list_medium_line_t2_g3_t

0xa27c,	// (0x00076737) list_medium_line_t3_g3_g1_ParamLimits

0xa27c,	// (0x00076737) list_medium_line_t3_g3_g1

0xa56e,	// (0x00076a29) list_medium_line_t3_g3_g2_ParamLimits

0xa56e,	// (0x00076a29) list_medium_line_t3_g3_g2

0xa288,	// (0x00076743) list_medium_line_t3_g3_g3_ParamLimits

0xa288,	// (0x00076743) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007c223) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007c223) list_medium_line_t3_g3_g

0x7ebe,	// (0x00074379) list_medium_line_t3_g3_t1_ParamLimits

0x7ebe,	// (0x00074379) list_medium_line_t3_g3_t1

0x7ed7,	// (0x00074392) list_medium_line_t3_g3_t2_ParamLimits

0x7ed7,	// (0x00074392) list_medium_line_t3_g3_t2

0x7eed,	// (0x000743a8) list_medium_line_t3_g3_t3_ParamLimits

0x7eed,	// (0x000743a8) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007c22f) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007c22f) list_medium_line_t3_g3_t

0xa490,	// (0x0007694b) list_medium_line_right_iconx2_g1

0xa426,	// (0x000768e1) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007c236) list_medium_line_right_iconx2_g

0xa58f,	// (0x00076a4a) list_medium_line_right_iconx2_t1

0xa490,	// (0x0007694b) list_medium_line_t2_right_iconx2_g1

0xa426,	// (0x000768e1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007c236) list_medium_line_t2_right_iconx2_g

0x7f07,	// (0x000743c2) list_medium_line_t2_right_iconx2_t1

0x7f17,	// (0x000743d2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007c23b) list_medium_line_t2_right_iconx2_t

0xa59d,	// (0x00076a58) list_medium_line_x4_t4_t1

0x7f29,	// (0x000743e4) list_medium_line_x4_t4_t2

0x7f39,	// (0x000743f4) list_medium_line_x4_t4_t3

0x7f49,	// (0x00074404) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007c240) list_medium_line_x4_t4_t

0x7f9c,	// (0x00074457) tport_appsw_pane_ParamLimits

0x7f9c,	// (0x00074457) tport_appsw_pane

0x7fb4,	// (0x0007446f) tport_contact_pane_ParamLimits

0x7fb4,	// (0x0007446f) tport_contact_pane

0x7fcc,	// (0x00074487) tport_listscroll_pane_ParamLimits

0x7fcc,	// (0x00074487) tport_listscroll_pane

0x7fe6,	// (0x000744a1) cell_tport_appsw_pane_ParamLimits

0x7fe6,	// (0x000744a1) cell_tport_appsw_pane

0xd5fe,	// (0x00079ab9) tport_appsw_pane_g1_ParamLimits

0xd5fe,	// (0x00079ab9) tport_appsw_pane_g1

0xe785,	// (0x0007ac40) tport_contact_pane_g1

0xe0e1,	// (0x0007a59c) tport_contact_pane_t1

0xe78e,	// (0x0007ac49) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007c249) tport_contact_pane_t

0xe79c,	// (0x0007ac57) list_tport_pane

0xe7a5,	// (0x0007ac60) scroll_pane_cp_030

0x802e,	// (0x000744e9) cell_tport_appsw_pane_g1

0x803e,	// (0x000744f9) cell_tport_appsw_pane_t1

0x804c,	// (0x00074507) grid_highlight_pane_cp019

0x8054,	// (0x0007450f) list_tport_double_graphic_pane_ParamLimits

0x8054,	// (0x0007450f) list_tport_double_graphic_pane

0xa1ae,	// (0x00076669) list_highlight_pane_cp023_ParamLimits

0xa1ae,	// (0x00076669) list_highlight_pane_cp023

0x8061,	// (0x0007451c) list_tport_double_graphic_pane_g1_ParamLimits

0x8061,	// (0x0007451c) list_tport_double_graphic_pane_g1

0x806e,	// (0x00074529) list_tport_double_graphic_pane_t1_ParamLimits

0x806e,	// (0x00074529) list_tport_double_graphic_pane_t1

0x8083,	// (0x0007453e) list_tport_double_graphic_pane_t2_ParamLimits

0x8083,	// (0x0007453e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007c255) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007c255) list_tport_double_graphic_pane_t

0x9033,	// (0x000754ee) main_cale_note_pane

0x5b5e,	// (0x00072019) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5b5e,	// (0x00072019) cell_vitu2_function_top_wide_pane_cp01

0x75a5,	// (0x00073a60) wait_bar_pane_cp05_ParamLimits

0xa1ae,	// (0x00076669) listscroll_cmail_pane

0xe7ae,	// (0x0007ac69) list_cmail_pane

0x8095,	// (0x00074550) list_cmail_body_pane

0x80aa,	// (0x00074565) list_single_cmail_header_caption_pane

0x80c3,	// (0x0007457e) list_single_cmail_header_detail_pane_ParamLimits

0x80c3,	// (0x0007457e) list_single_cmail_header_detail_pane

0xe7be,	// (0x0007ac79) list_single_cmail_header_caption_pane_t1

0x80ec,	// (0x000745a7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x80ec,	// (0x000745a7) list_single_cmail_header_detail_pane_g1

0xa5ab,	// (0x00076a66) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa5ab,	// (0x00076a66) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007c25a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007c25a) list_single_cmail_header_detail_pane_g

0xa5b7,	// (0x00076a72) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa5b7,	// (0x00076a72) list_single_cmail_header_detail_pane_t1

0xa617,	// (0x00076ad2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa617,	// (0x00076ad2) list_single_cmail_header_editor_pane_bg

0xe7e2,	// (0x0007ac9d) list_cmail_body_pane_g1

0xe7eb,	// (0x0007aca6) list_cmail_body_pane_t1

0xd61e,	// (0x00079ad9) list_single_cmail_header_editor_pane_bg_g1

0xab5c,	// (0x00077017) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62e,	// (0x00079ae9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd626,	// (0x00079ae1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd866,	// (0x00079d21) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64e,	// (0x00079b09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63e,	// (0x00079af9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd646,	// (0x00079b01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab3c,	// (0x00076ff7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8104,	// (0x000745bf) calenote_gesture_pane_ParamLimits

0x8104,	// (0x000745bf) calenote_gesture_pane

0x8124,	// (0x000745df) calenote_window_pane_ParamLimits

0x8124,	// (0x000745df) calenote_window_pane

0xe7f9,	// (0x0007acb4) popup_note_window_cp01

0x8140,	// (0x000745fb) calenote_swipe_1_pane_ParamLimits

0x8140,	// (0x000745fb) calenote_swipe_1_pane

0x7987,	// (0x00073e42) calenote_swipe_2_pane_ParamLimits

0x7987,	// (0x00073e42) calenote_swipe_2_pane

0xe60b,	// (0x0007aac6) calenote_swipe_1_pane_g1_ParamLimits

0xe60b,	// (0x0007aac6) calenote_swipe_1_pane_g1

0xe618,	// (0x0007aad3) calenote_swipe_1_pane_g2_ParamLimits

0xe618,	// (0x0007aad3) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007c17e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007c17e) calenote_swipe_1_pane_g

0xe80b,	// (0x0007acc6) calenote_swipe_1_pane_t1_ParamLimits

0xe80b,	// (0x0007acc6) calenote_swipe_1_pane_t1

0xe60b,	// (0x0007aac6) calenote_swipe_2_pane_g1_ParamLimits

0xe60b,	// (0x0007aac6) calenote_swipe_2_pane_g1

0xe82a,	// (0x0007ace5) calenote_swipe_2_pane_g2_ParamLimits

0xe82a,	// (0x0007ace5) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007c266) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007c266) calenote_swipe_2_pane_g

0xe836,	// (0x0007acf1) calenote_swipe_2_pane_t1_ParamLimits

0xe836,	// (0x0007acf1) calenote_swipe_2_pane_t1

0x9033,	// (0x000754ee) main_mup_navstr_pane

0x4816,	// (0x00070cd1) main_mup3_pane_t7_ParamLimits

0x4816,	// (0x00070cd1) main_mup3_pane_t7

0x984c,	// (0x00075d07) main_mp4_pane_g6_ParamLimits

0x984c,	// (0x00075d07) main_mp4_pane_g6

0x99f0,	// (0x00075eab) main_image3_pane_t4_ParamLimits

0x99f0,	// (0x00075eab) main_image3_pane_t4

0x8155,	// (0x00074610) popup_navstr_preview_pane_ParamLimits

0x8155,	// (0x00074610) popup_navstr_preview_pane

0x8169,	// (0x00074624) scroll_navstr_pane_ParamLimits

0x8169,	// (0x00074624) scroll_navstr_pane

0x9033,	// (0x000754ee) bg_popup_preview_window_pane_cp04

0xe85d,	// (0x0007ad18) popup_navstr_preview_pane_t1

0x817d,	// (0x00074638) scroll_navstr_pane_g1_ParamLimits

0x817d,	// (0x00074638) scroll_navstr_pane_g1

0x8191,	// (0x0007464c) scroll_navstr_pane_t1_ParamLimits

0x8191,	// (0x0007464c) scroll_navstr_pane_t1

0xe802,	// (0x0007acbd) bg_button_pane_cp014

0xe802,	// (0x0007acbd) bg_button_pane_cp030

0xa3cc,	// (0x00076887) list_double_fisheye_pane_g4_ParamLimits

0xa3cc,	// (0x00076887) list_double_fisheye_pane_g4

0xa3d8,	// (0x00076893) list_double_fisheye_pane_g5_ParamLimits

0xa3d8,	// (0x00076893) list_double_fisheye_pane_g5

0xcbf3,	// (0x000790ae) sp_fs_scroll_pane_cp03

0xe6fe,	// (0x0007abb9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe70a,	// (0x0007abc5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007c19b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe716,	// (0x0007abd1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b6,	// (0x0007ac71) sp_fs_scroll_pane_cp02

0xa84b,	// (0x00076d06) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa84b,	// (0x00076d06) popup_sp_fs_calendar_preview_list_single_pane

0x9033,	// (0x000754ee) main_cam6_pano_pane

0x909b,	// (0x00075556) main_mup3_pane_ParamLimits

0x9033,	// (0x000754ee) main_phacti_pane

0x7478,	// (0x00073933) bg_button_pane_cp11

0x7492,	// (0x0007394d) main_mobtv_info_pane_g2_ParamLimits

0x7492,	// (0x0007394d) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007c0fb) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007c0fb) main_mobtv_info_pane_g

0x766f,	// (0x00073b2a) sc_clock_pane_t5_ParamLimits

0x766f,	// (0x00073b2a) sc_clock_pane_t5

0x772a,	// (0x00073be5) main_radioblah_pane_g1_ParamLimits

0xe53c,	// (0x0007a9f7) main_radioblah_pane_t3_ParamLimits

0xe53c,	// (0x0007a9f7) main_radioblah_pane_t3

0xe554,	// (0x0007aa0f) main_radioblah_pane_t4_ParamLimits

0xe554,	// (0x0007aa0f) main_radioblah_pane_t4

0x7752,	// (0x00073c0d) main_radioblah_text_pane_ParamLimits

0x7752,	// (0x00073c0d) main_radioblah_text_pane

0x7764,	// (0x00073c1f) main_radioblah_info_pane_g1_ParamLimits

0x77fd,	// (0x00073cb8) main_radioblah_info_pane_t4_ParamLimits

0x77fd,	// (0x00073cb8) main_radioblah_info_pane_t4

0xa1ae,	// (0x00076669) main_sp_fs_calendar_pane

0x81a7,	// (0x00074662) main_phacti_pane_g1

0x81af,	// (0x0007466a) phacti_note_pane_ParamLimits

0x81af,	// (0x0007466a) phacti_note_pane

0xe874,	// (0x0007ad2f) phacti_term_pane_ParamLimits

0xe874,	// (0x0007ad2f) phacti_term_pane

0xe889,	// (0x0007ad44) phacti_note_pane_t1_ParamLimits

0xe889,	// (0x0007ad44) phacti_note_pane_t1

0xa62e,	// (0x00076ae9) phacti_term_pane_g1

0xa636,	// (0x00076af1) phacti_term_pane_t1_ParamLimits

0xa636,	// (0x00076af1) phacti_term_pane_t1

0xe8a0,	// (0x0007ad5b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a8,	// (0x0007ad63) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007c270) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b0,	// (0x0007ad6b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b0,	// (0x0007ad6b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c6,	// (0x0007ad81) aid_popup_sp_fs_bg_corner_pane

0xcbaf,	// (0x0007906a) popup_sp_fs_calendar_preview_bg_pane_g1

0x9033,	// (0x000754ee) popup_sp_fs_calendar_preview_bg_pane

0x1046,	// (0x0006d501) popup_sp_fs_calendar_preview_list_pane

0xc7a5,	// (0x00078c60) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a5,	// (0x00078c60) bg_main_sp_fs_cale_pane

0xa660,	// (0x00076b1b) listscroll_cale_mrui_pane_ParamLimits

0xa660,	// (0x00076b1b) listscroll_cale_mrui_pane

0xa675,	// (0x00076b30) listscroll_sp_fs_schedule_track_pane

0xa67e,	// (0x00076b39) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa67e,	// (0x00076b39) main_sp_fs_ctrlbar_pane_cp01

0xe8ce,	// (0x0007ad89) main_sp_fs_ribbon_pane

0xa691,	// (0x00076b4c) popup_sp_fs_cale_preview_window

0x8224,	// (0x000746df) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8224,	// (0x000746df) list_single_sp_fs_schedule_track_pane

0xa1ae,	// (0x00076669) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa1ae,	// (0x00076669) bg_sp_fs_highlight_list_pane_cp03

0x823a,	// (0x000746f5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x823a,	// (0x000746f5) list_single_sp_fs_schedule_track_pane_g1

0x8246,	// (0x00074701) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8246,	// (0x00074701) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007c275) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007c275) list_single_sp_fs_schedule_track_pane_g

0x8252,	// (0x0007470d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8252,	// (0x0007470d) list_single_sp_fs_schedule_track_pane_t1

0x826c,	// (0x00074727) sp_fs_schedule_track_pane_ParamLimits

0x826c,	// (0x00074727) sp_fs_schedule_track_pane

0xe8d6,	// (0x0007ad91) sp_fs_schedule_track_pane_g1

0xe8de,	// (0x0007ad99) sp_fs_schedule_track_pane_g2

0xe8e6,	// (0x0007ada1) sp_fs_schedule_track_pane_g3

0xe8ee,	// (0x0007ada9) sp_fs_schedule_track_pane_g4

0xe8f6,	// (0x0007adb1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007c27a) sp_fs_schedule_track_pane_g

0xd61e,	// (0x00079ad9) bg_sp_fs_schedule_viewer_highlight_g1

0xab5c,	// (0x00077017) bg_sp_fs_schedule_viewer_highlight_g2

0xd626,	// (0x00079ae1) bg_sp_fs_schedule_viewer_highlight_g3

0xd62e,	// (0x00079ae9) bg_sp_fs_schedule_viewer_highlight_g4

0xd866,	// (0x00079d21) bg_sp_fs_schedule_viewer_highlight_g5

0xd63e,	// (0x00079af9) bg_sp_fs_schedule_viewer_highlight_g6

0xd646,	// (0x00079b01) bg_sp_fs_schedule_viewer_highlight_g7

0xd64e,	// (0x00079b09) bg_sp_fs_schedule_viewer_highlight_g8

0xab3c,	// (0x00076ff7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007c285) bg_sp_fs_schedule_viewer_highlight_g

0x9033,	// (0x000754ee) bg_main_sp_fs_ribbon_pane

0x827d,	// (0x00074738) main_sp_fs_ribbon_pane_g1

0xe8fe,	// (0x0007adb9) main_sp_fs_ribbon_pane_t1

0x8286,	// (0x00074741) main_sp_fs_ribbon_pane_t2

0xe90d,	// (0x0007adc8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007c298) main_sp_fs_ribbon_pane_t

0xe91c,	// (0x0007add7) main_sp_fs_ribbon_scheduler_pane

0xe924,	// (0x0007addf) bg_main_sp_fs_ribbon_pane_g1

0xe92d,	// (0x0007ade8) bg_main_sp_fs_ribbon_pane_g2

0xe936,	// (0x0007adf1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007c29f) bg_main_sp_fs_ribbon_pane_g

0xe93e,	// (0x0007adf9) main_sp_fs_ribbon_scheduler_pane_g1

0xe947,	// (0x0007ae02) main_sp_fs_ribbon_scheduler_pane_g2

0xe950,	// (0x0007ae0b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007c2a6) main_sp_fs_ribbon_scheduler_pane_g

0xe959,	// (0x0007ae14) list_cale_mrui_pane

0x8295,	// (0x00074750) sp_fs_scroll_pane_cp07_ParamLimits

0x8295,	// (0x00074750) sp_fs_scroll_pane_cp07

0x82b1,	// (0x0007476c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x82b1,	// (0x0007476c) bg_sp_fs_schedule_viewer_highlight

0xe966,	// (0x0007ae21) list_single_sp_fs_schedule_track_pane_cp01

0xe96e,	// (0x0007ae29) list_sp_fs_schedule_track_pane

0xe976,	// (0x0007ae31) sp_fs_scroll_pane_cp06_ParamLimits

0xe976,	// (0x0007ae31) sp_fs_scroll_pane_cp06

0xcbaf,	// (0x0007906a) bgmain_sp_fs_calendar_pane_g1

0x82c1,	// (0x0007477c) list_single_cale_mrui_pane_ParamLimits

0x82c1,	// (0x0007477c) list_single_cale_mrui_pane

0xa6a3,	// (0x00076b5e) list_single_cale_mrui_row_pane_ParamLimits

0xa6a3,	// (0x00076b5e) list_single_cale_mrui_row_pane

0xa6b0,	// (0x00076b6b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa6b0,	// (0x00076b6b) list_single_cale_mrui_row_pane_g1

0xa6e8,	// (0x00076ba3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6e8,	// (0x00076ba3) list_single_cale_mrui_row_pane_t1

0x82e3,	// (0x0007479e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x82e3,	// (0x0007479e) list_single_cale_mrui_row_pane_t2

0xa6fa,	// (0x00076bb5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa6fa,	// (0x00076bb5) list_single_cale_mrui_row_pane_t3

0xa729,	// (0x00076be4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa729,	// (0x00076be4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007c2b4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007c2b4) list_single_cale_mrui_row_pane_t

0x834b,	// (0x00074806) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x834b,	// (0x00074806) list_single_cmail_header_editor_pane_bg_cp01

0x8371,	// (0x0007482c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8371,	// (0x0007482c) list_single_cmail_header_editor_pane_bg_cp02

0x8391,	// (0x0007484c) main_radioblah_text_pane_t1_ParamLimits

0x8391,	// (0x0007484c) main_radioblah_text_pane_t1

0xe995,	// (0x0007ae50) cam6_indi_pane_cp01

0xe99d,	// (0x0007ae58) cam6_mode_pane_cp01

0xe9a5,	// (0x0007ae60) cam6_pano_pane

0xe9ae,	// (0x0007ae69) cam6_zoom_pane_cp01

0xe9b6,	// (0x0007ae71) cam6_pano_image_pane

0xe9c1,	// (0x0007ae7c) cam6_pano_pane_g1

0xe288,	// (0x0007a743) cam6_pano_pane_g2

0xe9ca,	// (0x0007ae85) cam6_pano_pane_g3

0xe9d3,	// (0x0007ae8e) cam6_pano_pane_g4

0xd179,	// (0x00079634) cam6_pano_pane_g5

0xe9dc,	// (0x0007ae97) cam6_pano_pane_g6

0xe9e6,	// (0x0007aea1) cam6_pano_pane_g7

0xe9ee,	// (0x0007aea9) cam6_pano_pane_g8

0xe9f7,	// (0x0007aeb2) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007c2bd) cam6_pano_pane_g

0x9033,	// (0x000754ee) main_browser_tag_pane

0xe855,	// (0x0007ad10) grid_navstr_albumart_pane

0xea02,	// (0x0007aebd) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x0007aebd) cell_navstr_albumart_pane

0xb4fb,	// (0x000779b6) cell_navstr_albumart_pane_g1

0xc5b6,	// (0x00078a71) cell_navstr_albumart_pane_g2

0xc5c6,	// (0x00078a81) cell_navstr_albumart_pane_g3

0xc5be,	// (0x00078a79) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007c2d0) cell_navstr_albumart_pane_g

0x83ac,	// (0x00074867) bt_list_pane_ParamLimits

0x83ac,	// (0x00074867) bt_list_pane

0xea24,	// (0x0007aedf) bt_list_pane_t1

0xea33,	// (0x0007aeee) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007c2d9) bt_list_pane_t

0x9033,	// (0x000754ee) main_cale_prevew_pane

0x83c1,	// (0x0007487c) popup_cale_preview_window_ParamLimits

0x83c1,	// (0x0007487c) popup_cale_preview_window

0xa1ae,	// (0x00076669) bg_popup_preview_window_pane_cp05_ParamLimits

0xa1ae,	// (0x00076669) bg_popup_preview_window_pane_cp05

0xea42,	// (0x0007aefd) list_cale_preview_pane_ParamLimits

0xea42,	// (0x0007aefd) list_cale_preview_pane

0xea4e,	// (0x0007af09) list_double_cale_preview_pane_ParamLimits

0xea4e,	// (0x0007af09) list_double_cale_preview_pane

0xea60,	// (0x0007af1b) list_single_cale_preview_pane_ParamLimits

0xea60,	// (0x0007af1b) list_single_cale_preview_pane

0xea74,	// (0x0007af2f) list_single_cale_preview_pane_g1

0xea7c,	// (0x0007af37) list_single_cale_preview_pane_t1_ParamLimits

0xea7c,	// (0x0007af37) list_single_cale_preview_pane_t1

0xea91,	// (0x0007af4c) list_double_cale_preview_pane_g1

0xea99,	// (0x0007af54) list_double_cale_preview_pane_t1_ParamLimits

0xea99,	// (0x0007af54) list_double_cale_preview_pane_t1

0xeaae,	// (0x0007af69) list_double_cale_preview_pane_t2_ParamLimits

0xeaae,	// (0x0007af69) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007c2de) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007c2de) list_double_cale_preview_pane_t

0x9033,	// (0x000754ee) main_ezdial_pane

0xa1ae,	// (0x00076669) main_sp_fs_email_pane_ParamLimits

0x7a05,	// (0x00073ec0) cmail_ddmenu_btn01_pane_ParamLimits

0x7a05,	// (0x00073ec0) cmail_ddmenu_btn01_pane

0x7a18,	// (0x00073ed3) cmail_ddmenu_btn02_pane_ParamLimits

0x7a18,	// (0x00073ed3) cmail_ddmenu_btn02_pane

0x7a3b,	// (0x00073ef6) cmail_ddmenu_btn03_pane_ParamLimits

0x7a3b,	// (0x00073ef6) cmail_ddmenu_btn03_pane

0x7a61,	// (0x00073f1c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a85,	// (0x00073f40) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8095,	// (0x00074550) list_cmail_body_pane_ParamLimits

0xe7cc,	// (0x0007ac87) bg_button_pane_cp12

0xe7d5,	// (0x0007ac90) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d5,	// (0x0007ac90) list_single_cmail_header_detail_pane_g3

0xa5f3,	// (0x00076aae) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa5f3,	// (0x00076aae) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007c261) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007c261) list_single_cmail_header_detail_pane_t

0xa64b,	// (0x00076b06) phacti_term_pane_t2_ParamLimits

0xa64b,	// (0x00076b06) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007c26b) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007c26b) phacti_term_pane_t

0xeac6,	// (0x0007af81) aid_size_list_single_double

0x83da,	// (0x00074895) popup_ezdial_listscroll_window

0x83f5,	// (0x000748b0) popup_number_entry_window_cp01

0xa903,	// (0x00076dbe) bg_popup_call_pane_cp09

0xead2,	// (0x0007af8d) ezdial_list_pane

0xeada,	// (0x0007af95) scroll_pane_cp23

0xc7a5,	// (0x00078c60) bg_button_pane_cp028_ParamLimits

0xc7a5,	// (0x00078c60) bg_button_pane_cp028

0x8403,	// (0x000748be) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8403,	// (0x000748be) cmail_ddmenu_btn01_pane_g1

0x840f,	// (0x000748ca) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x840f,	// (0x000748ca) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007c2e3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007c2e3) cmail_ddmenu_btn01_pane_g

0xeae2,	// (0x0007af9d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae2,	// (0x0007af9d) cmail_ddmenu_btn01_pane_t1

0xc7a5,	// (0x00078c60) bg_button_pane_cp029_ParamLimits

0xc7a5,	// (0x00078c60) bg_button_pane_cp029

0x841b,	// (0x000748d6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x841b,	// (0x000748d6) cmail_ddmenu_btn02_pane_g1

0x8433,	// (0x000748ee) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8433,	// (0x000748ee) cmail_ddmenu_btn02_pane_t1

0xa1ae,	// (0x00076669) bg_button_pane_cp031_ParamLimits

0xa1ae,	// (0x00076669) bg_button_pane_cp031

0x841b,	// (0x000748d6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x841b,	// (0x000748d6) cmail_ddmenu_btn03_pane_g1

0x8433,	// (0x000748ee) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8433,	// (0x000748ee) cmail_ddmenu_btn03_pane_t1

0x53e4,	// (0x0007189f) cell_dialer2_keypad_pane_t1_ParamLimits

0x53fe,	// (0x000718b9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x53fe,	// (0x000718b9) cell_dialer2_keypad_pane_t1_copy1

0x72d1,	// (0x0007378c) ncimui_group_button_pane

0xa1ae,	// (0x00076669) main_sp_fs_calendar_pane_ParamLimits

0x80aa,	// (0x00074565) list_single_cmail_header_caption_pane_ParamLimits

0xe3b1,	// (0x0007a86c) aid_recal_txt_sm_pane

0x9033,	// (0x000754ee) mian_recal_day_pane

0xa691,	// (0x00076b4c) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf7,	// (0x0007afb2) list_recal_day_pane

0xa773,	// (0x00076c2e) list_single_recal_day_pane_ParamLimits

0xa773,	// (0x00076c2e) list_single_recal_day_pane

0xeb1e,	// (0x0007afd9) list_single_recal_day_pane_g1_ParamLimits

0xeb1e,	// (0x0007afd9) list_single_recal_day_pane_g1

0xa785,	// (0x00076c40) list_single_recal_day_pane_g2_ParamLimits

0xa785,	// (0x00076c40) list_single_recal_day_pane_g2

0xa795,	// (0x00076c50) list_single_recal_day_pane_g3_ParamLimits

0xa795,	// (0x00076c50) list_single_recal_day_pane_g3

0x8457,	// (0x00074912) list_single_recal_day_pane_g4_ParamLimits

0x8457,	// (0x00074912) list_single_recal_day_pane_g4

0xa7a1,	// (0x00076c5c) list_single_recal_day_pane_g5_ParamLimits

0xa7a1,	// (0x00076c5c) list_single_recal_day_pane_g5

0xa7b1,	// (0x00076c6c) list_single_recal_day_pane_g6_ParamLimits

0xa7b1,	// (0x00076c6c) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007c2f2) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007c2f2) list_single_recal_day_pane_g

0xa7c5,	// (0x00076c80) list_single_recal_day_pane_t1

0xa7d7,	// (0x00076c92) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007c2fd) list_single_recal_day_pane_t

0x8477,	// (0x00074932) ncimui_query_button_pane_ParamLimits

0x8477,	// (0x00074932) ncimui_query_button_pane

0x8487,	// (0x00074942) ncimui_query_button_pane_t1_ParamLimits

0x8487,	// (0x00074942) ncimui_query_button_pane_t1

0xeb2a,	// (0x0007afe5) ncimui_query_button_pane_t2_ParamLimits

0xeb2a,	// (0x0007afe5) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007c302) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007c302) ncimui_query_button_pane_t

0x849a,	// (0x00074955) query_button_pane_ParamLimits

0x849a,	// (0x00074955) query_button_pane

0x9033,	// (0x000754ee) bg_button_pane_cp0028

0xeb3d,	// (0x0007aff8) query_button_pane_t1

0x347f,	// (0x0006f93a) main_tport_pane_ParamLimits

0x7f59,	// (0x00074414) bg_popup_window_pane_cp01_ParamLimits

0x7f59,	// (0x00074414) bg_popup_window_pane_cp01

0x7f74,	// (0x0007442f) heading_pane_cp08_ParamLimits

0x7f74,	// (0x0007442f) heading_pane_cp08

0x7f87,	// (0x00074442) heading_pane_cp07_ParamLimits

0x7f87,	// (0x00074442) heading_pane_cp07

0x802e,	// (0x000744e9) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007c24e) cell_tport_appsw_pane_g

0xa12d,	// (0x000765e8) input_candi_list_open_g1

0xad27,	// (0x000771e2) list_cale_time_pane_g6_ParamLimits

0xad27,	// (0x000771e2) list_cale_time_pane_g6

0x4242,	// (0x000706fd) aid_size_touch_calib_1_ParamLimits

0x4242,	// (0x000706fd) aid_size_touch_calib_1

0x4254,	// (0x0007070f) aid_size_touch_calib_2_ParamLimits

0x4254,	// (0x0007070f) aid_size_touch_calib_2

0x426c,	// (0x00070727) aid_size_touch_calib_3_ParamLimits

0x426c,	// (0x00070727) aid_size_touch_calib_3

0x428a,	// (0x00070745) aid_size_touch_calib_4_ParamLimits

0x428a,	// (0x00070745) aid_size_touch_calib_4

0x42a2,	// (0x0007075d) main_touch_calib_button_group_pane_ParamLimits

0x42a2,	// (0x0007075d) main_touch_calib_button_group_pane

0x42ba,	// (0x00070775) main_touch_calib_pane_g1_ParamLimits

0x42cc,	// (0x00070787) main_touch_calib_pane_g2_ParamLimits

0x42de,	// (0x00070799) main_touch_calib_pane_g3_ParamLimits

0x42f0,	// (0x000707ab) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007bc0c) main_touch_calib_pane_g_ParamLimits

0x4302,	// (0x000707bd) main_touch_calib_pane_t1_ParamLimits

0x431c,	// (0x000707d7) main_touch_calib_pane_t2_ParamLimits

0x4336,	// (0x000707f1) main_touch_calib_pane_t3_ParamLimits

0x434a,	// (0x00070805) main_touch_calib_pane_t4_ParamLimits

0x435e,	// (0x00070819) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007bc15) main_touch_calib_pane_t_ParamLimits

0xcf1b,	// (0x000793d6) list_single_fp_cale_pane_g3_ParamLimits

0xcf1b,	// (0x000793d6) list_single_fp_cale_pane_g3

0x909b,	// (0x00075556) bg_button_pane_cp012_ParamLimits

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp03_ParamLimits

0x635c,	// (0x00072817) cell_vitu2_function_top_pane_g1_ParamLimits

0x909b,	// (0x00075556) bg_vkb2_func_pane_cp04_ParamLimits

0x725f,	// (0x0007371a) main_ncimui_button_group_pane_ParamLimits

0x725f,	// (0x0007371a) main_ncimui_button_group_pane

0x72bf,	// (0x0007377a) main_ncimui_pane_t3_ParamLimits

0x72bf,	// (0x0007377a) main_ncimui_pane_t3

0xe86b,	// (0x0007ad26) phacti_button_group_pane

0xeac6,	// (0x0007af81) aid_size_list_single_double_ParamLimits

0x83da,	// (0x00074895) popup_ezdial_listscroll_window_ParamLimits

0x83f5,	// (0x000748b0) popup_number_entry_window_cp01_ParamLimits

0x84ad,	// (0x00074968) phacti_button_pane_ParamLimits

0x84ad,	// (0x00074968) phacti_button_pane

0x9033,	// (0x000754ee) bg_button_pane_cp14

0xeb4b,	// (0x0007b006) phacti_button_pane_t1

0x84be,	// (0x00074979) main_touch_calib_button_pane_ParamLimits

0x84be,	// (0x00074979) main_touch_calib_button_pane

0x9f60,	// (0x0007641b) bg_button_pane_cp18_ParamLimits

0x9f60,	// (0x0007641b) bg_button_pane_cp18

0xeb59,	// (0x0007b014) main_touch_calib_button_pane_t1_ParamLimits

0xeb59,	// (0x0007b014) main_touch_calib_button_pane_t1

0xeb6f,	// (0x0007b02a) main_touch_calib_button_pane_t2_ParamLimits

0xeb6f,	// (0x0007b02a) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007c307) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007c307) main_touch_calib_button_pane_t

0x9033,	// (0x000754ee) cell_ncimui_button_pane

0x9033,	// (0x000754ee) bg_button_pane_cp032

0xeb8d,	// (0x0007b048) cell_ncimui_button_pane_t1

0x99d0,	// (0x00075e8b) image3_infobar_pane_ParamLimits

0x99d0,	// (0x00075e8b) image3_infobar_pane

0x769b,	// (0x00073b56) fs_bigclock_status_pane_ParamLimits

0x769b,	// (0x00073b56) fs_bigclock_status_pane

0x76a8,	// (0x00073b63) main_fs_bigclock_clock_pane_ParamLimits

0x76a8,	// (0x00073b63) main_fs_bigclock_clock_pane

0x76c8,	// (0x00073b83) main_fs_bigclock_indi_pane_ParamLimits

0x76c8,	// (0x00073b83) main_fs_bigclock_indi_pane

0x76f2,	// (0x00073bad) main_fs_bigclock_swipe_pane_ParamLimits

0x76f2,	// (0x00073bad) main_fs_bigclock_swipe_pane

0x9033,	// (0x000754ee) main_fs_clock_dumped_data

0xe395,	// (0x0007a850) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe395,	// (0x0007a850) list_single_fs_bigclock_indicator_pane_g1

0xe3c8,	// (0x0007a883) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c8,	// (0x0007a883) list_single_fs_bigclock_indicator_pane_g2

0xe3e2,	// (0x0007a89d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e2,	// (0x0007a89d) list_single_fs_bigclock_indicator_pane_g3

0xe3fc,	// (0x0007a8b7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3fc,	// (0x0007a8b7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007c12f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007c12f) list_single_fs_bigclock_indicator_pane_g

0xe427,	// (0x0007a8e2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe427,	// (0x0007a8e2) list_single_fs_bigclock_indicator_pane_t1

0xe44f,	// (0x0007a90a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44f,	// (0x0007a90a) list_single_fs_bigclock_indicator_pane_t2

0xe477,	// (0x0007a932) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe477,	// (0x0007a932) list_single_fs_bigclock_indicator_pane_t3

0xe49f,	// (0x0007a95a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49f,	// (0x0007a95a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007c13a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007c13a) list_single_fs_bigclock_indicator_pane_t

0xeb9b,	// (0x0007b056) image3_infobar_fav_pane_ParamLimits

0xeb9b,	// (0x0007b056) image3_infobar_fav_pane

0xebab,	// (0x0007b066) image3_infobar_loc_pane_ParamLimits

0xebab,	// (0x0007b066) image3_infobar_loc_pane

0xebbf,	// (0x0007b07a) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0007b07a) image3_infobar_time_pane

0xcbaf,	// (0x0007906a) image3_infobar_time_pane_g1

0xebcf,	// (0x0007b08a) image3_infobar_time_pane_t1

0xcbaf,	// (0x0007906a) image3_infobar_loc_pane_g1

0xebdd,	// (0x0007b098) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007c30c) image3_infobar_loc_pane_g

0xebe5,	// (0x0007b0a0) image3_infobar_loc_pane_t1

0xcbaf,	// (0x0007906a) image3_infobar_fav_pane_g1

0xebf3,	// (0x0007b0ae) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007c311) image3_infobar_fav_pane_g

0xebfb,	// (0x0007b0b6) fs_bigclock_status_battery_pane

0xec04,	// (0x0007b0bf) fs_bigclock_status_signal_pane

0xec0d,	// (0x0007b0c8) fs_bigclock_status_title_pane

0xec16,	// (0x0007b0d1) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0007b0da) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007c316) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0007b0e2) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0007b0eb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007c31b) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0007b0f3) fs_bigclock_status_title_pane_t1

0xcbaf,	// (0x0007906a) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0007b101) main_fs_bigclock_clock_pane_g2

0xec4f,	// (0x0007b10a) main_fs_bigclock_clock_pane_g3

0xec4f,	// (0x0007b10a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007c320) main_fs_bigclock_clock_pane_g

0xec57,	// (0x0007b112) main_fs_bigclock_clock_pane_t1

0x84d3,	// (0x0007498e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007c329) main_fs_bigclock_clock_pane_t

0xec65,	// (0x0007b120) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec65,	// (0x0007b120) list_single_fs_bigclock_indicator_pane

0xec76,	// (0x0007b131) list_single_fs_bigclock_pane_ParamLimits

0xec76,	// (0x0007b131) list_single_fs_bigclock_pane

0xec9c,	// (0x0007b157) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x0007b166) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x0007b16e) list_single_fs_bigclock_pane_t1

0xcbaf,	// (0x0007906a) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x0007b1b1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007c33a) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x0007b1b9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x0007b1b9) main_fs_bigclock_swipe_pane_t1

0x23c6,	// (0x0006e881) call_type_pane_ParamLimits

0x9033,	// (0x000754ee) main_btmg_pane

0xa6dc,	// (0x00076b97) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa6dc,	// (0x00076b97) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007c2ad) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007c2ad) list_single_cale_mrui_row_pane_g

0xa762,	// (0x00076c1d) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x0007afd1) list_recal_vselct_arw_up_pane

0xa76a,	// (0x00076c25) list_recal_vselct_pane

0x8524,	// (0x000749df) btmg_button_pane

0x852e,	// (0x000749e9) main_btmg_pane_g1

0x9033,	// (0x000754ee) bg_button_pane_cp044

0xed1b,	// (0x0007b1d6) btmg_button_pane_t1

0xc791,	// (0x00078c4c) aid_listscroll_gen

0xa1ae,	// (0x00076669) main_cntbar_detail_pane

0xe7ae,	// (0x0007ac69) list_cmail_folder_pane

0xcbf3,	// (0x000790ae) sp_fs_scroll_pane_cp03_ParamLimits

0x8538,	// (0x000749f3) list_single_fs_dyc_pane_cp01_ParamLimits

0x8538,	// (0x000749f3) list_single_fs_dyc_pane_cp01

0xed29,	// (0x0007b1e4) aid_size_cmail_indent

0xa7e9,	// (0x00076ca4) list_single_dyc_row_pane_cp01

0x8580,	// (0x00074a3b) cntbar_detail_list_pane_ParamLimits

0x8580,	// (0x00074a3b) cntbar_detail_list_pane

0x85cc,	// (0x00074a87) main_cntbar_detail_cont_pane_ParamLimits

0x85cc,	// (0x00074a87) main_cntbar_detail_cont_pane

0xcbf3,	// (0x000790ae) scroll_pane_cp032_ParamLimits

0xcbf3,	// (0x000790ae) scroll_pane_cp032

0x85e0,	// (0x00074a9b) cntbar_detail_list_event_pane_ParamLimits

0x85e0,	// (0x00074a9b) cntbar_detail_list_event_pane

0x8590,	// (0x00074a4b) cntbar_detail_list_shct_pane

0xabaa,	// (0x00077065) aid_list_gen

0xed32,	// (0x0007b1ed) aid_scroll

0xed3b,	// (0x0007b1f6) aid_size_touch_scroll_bar

0x6a44,	// (0x00072eff) aid_list_double

0xdaea,	// (0x00079fa5) aid_list_single

0xdaea,	// (0x00079fa5) aid_list_single_lg

0x85f0,	// (0x00074aab) aid_list_z_g_a_sm

0x85f8,	// (0x00074ab3) aid_list_z_g_d

0x8600,	// (0x00074abb) aid_txt_z_prm

0x860e,	// (0x00074ac9) aid_txt_z_prm_cp01

0x861c,	// (0x00074ad7) aid_txt_z_sec

0x862a,	// (0x00074ae5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x862a,	// (0x00074ae5) main_cntbar_detail_cont_pane_g1

0x863e,	// (0x00074af9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x863e,	// (0x00074af9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007c33f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007c33f) main_cntbar_detail_cont_pane_g

0xed44,	// (0x0007b1ff) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x0007b20d) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x0007b21b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007c344) main_cntbar_detail_cont_pane_t

0x864e,	// (0x00074b09) cell_cntbar_detail_list_shct_pane_ParamLimits

0x864e,	// (0x00074b09) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x0007b229) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x0007b232) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007c34b) cntbar_detail_list_shct_pane_g

0x8662,	// (0x00074b1d) cntbar_detail_list_event_pane_g1_ParamLimits

0x8662,	// (0x00074b1d) cntbar_detail_list_event_pane_g1

0x866e,	// (0x00074b29) cntbar_detail_list_event_pane_g2_ParamLimits

0x866e,	// (0x00074b29) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007c350) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007c350) cntbar_detail_list_event_pane_g

0x86da,	// (0x00074b95) cntbar_detail_list_event_pane_t1_ParamLimits

0x86da,	// (0x00074b95) cntbar_detail_list_event_pane_t1

0x86ef,	// (0x00074baa) cntbar_detail_list_event_pane_t2_ParamLimits

0x86ef,	// (0x00074baa) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007c35d) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007c35d) cntbar_detail_list_event_pane_t

0xcbaf,	// (0x0007906a) cell_cntbar_detail_list_shct_pane_g1

0xb337,	// (0x000777f2) navi_pane_mv_g3

0xa1ae,	// (0x00076669) main_cntbar_detail_pane_ParamLimits

0x9033,	// (0x000754ee) main_notif_wgt_pane

0x97e6,	// (0x00075ca1) aid_tch_main_mp4_pane_g4

0x99c8,	// (0x00075e83) popup_slider_window_cp02

0xa758,	// (0x00076c13) list_recal_day_event_pane

0x8554,	// (0x00074a0f) cntbar_detail_btn_pane_ParamLimits

0x8554,	// (0x00074a0f) cntbar_detail_btn_pane

0x856a,	// (0x00074a25) cntbar_detail_btn_pane_cp01_ParamLimits

0x856a,	// (0x00074a25) cntbar_detail_btn_pane_cp01

0x8590,	// (0x00074a4b) cntbar_detail_list_shct_pane_ParamLimits

0x85a0,	// (0x00074a5b) cntbar_detail_pane_g1_ParamLimits

0x85a0,	// (0x00074a5b) cntbar_detail_pane_g1

0x85b0,	// (0x00074a6b) cntbar_detail_pane_t1_ParamLimits

0x85b0,	// (0x00074a6b) cntbar_detail_pane_t1

0x867a,	// (0x00074b35) cntbar_detail_list_event_pane_g3_ParamLimits

0x867a,	// (0x00074b35) cntbar_detail_list_event_pane_g3

0x8692,	// (0x00074b4d) cntbar_detail_list_event_pane_g4_ParamLimits

0x8692,	// (0x00074b4d) cntbar_detail_list_event_pane_g4

0x86aa,	// (0x00074b65) cntbar_detail_list_event_pane_g5_ParamLimits

0x86aa,	// (0x00074b65) cntbar_detail_list_event_pane_g5

0x86c2,	// (0x00074b7d) cntbar_detail_list_event_pane_g6_ParamLimits

0x86c2,	// (0x00074b7d) cntbar_detail_list_event_pane_g6

0x8704,	// (0x00074bbf) cntbar_detail_list_event_pane_t3_ParamLimits

0x8704,	// (0x00074bbf) cntbar_detail_list_event_pane_t3

0x8716,	// (0x00074bd1) popup_notif_wgt_window_ParamLimits

0x8716,	// (0x00074bd1) popup_notif_wgt_window

0x872f,	// (0x00074bea) popup_submenu_window_cp01_ParamLimits

0x872f,	// (0x00074bea) popup_submenu_window_cp01

0xa903,	// (0x00076dbe) bg_popup_window_pane_cp10

0xed80,	// (0x0007b23b) listscroll_notif_wgt_pane

0xed91,	// (0x0007b24c) list_notif_wgt_window

0xed9a,	// (0x0007b255) scroll_pane_cp033

0x8741,	// (0x00074bfc) list_notif_wgt_row_pane_ParamLimits

0x8741,	// (0x00074bfc) list_notif_wgt_row_pane

0xeda3,	// (0x0007b25e) aid_size_list_notif_wgt_del

0xedb0,	// (0x0007b26b) list_notif_wgt_row_pane_g1

0xedbc,	// (0x0007b277) list_notif_wgt_row_pane_g2

0xedd0,	// (0x0007b28b) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007c364) list_notif_wgt_row_pane_g

0xeddd,	// (0x0007b298) list_notif_wgt_row_pane_t1

0xedf3,	// (0x0007b2ae) list_notif_wgt_row_pane_t2

0xee05,	// (0x0007b2c0) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007c36b) list_notif_wgt_row_pane_t

0xd880,	// (0x00079d3b) list_recal_day_event_pane_g1

0xee17,	// (0x0007b2d2) list_recal_day_event_pane_t1

0x9033,	// (0x000754ee) bg_button_pane_cp045

0xee26,	// (0x0007b2e1) cntbar_detail_btn_pane_t1

0xc7a5,	// (0x00078c60) main_callh_pane_ParamLimits

0xc7a5,	// (0x00078c60) main_callh_pane

0x9033,	// (0x000754ee) main_coverflow0_pane

0x9033,	// (0x000754ee) main_wgtman_pane

0x770a,	// (0x00073bc5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x770a,	// (0x00073bc5) main_fs_bigclock_unlock_btn_pane

0x8026,	// (0x000744e1) bg_button_pane_cp16

0x8036,	// (0x000744f1) cell_tport_appsw_pane_g3

0x8751,	// (0x00074c0c) cf0_flow_pane_ParamLimits

0x8751,	// (0x00074c0c) cf0_flow_pane

0xee34,	// (0x0007b2ef) listscroll_cf0_pane

0xee3f,	// (0x0007b2fa) main_cf0_pane_g1

0x8766,	// (0x00074c21) main_cf0_pane_t1_ParamLimits

0x8766,	// (0x00074c21) main_cf0_pane_t1

0x877d,	// (0x00074c38) main_cf0_pane_t2_ParamLimits

0x877d,	// (0x00074c38) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007c377) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007c377) main_cf0_pane_t

0xee51,	// (0x0007b30c) scroll_pane_cp11

0x8794,	// (0x00074c4f) cf0_flow_pane_g1

0x879c,	// (0x00074c57) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007c37c) cf0_flow_pane_g

0x87a4,	// (0x00074c5f) cf0_flow_pane_t1

0x9033,	// (0x000754ee) main_call6_pane

0x9033,	// (0x000754ee) main_calllock_pane

0x87b2,	// (0x00074c6d) call6_btn_grp_pane_ParamLimits

0x87b2,	// (0x00074c6d) call6_btn_grp_pane

0x87cc,	// (0x00074c87) call6_pane_g1_ParamLimits

0x87cc,	// (0x00074c87) call6_pane_g1

0x87e1,	// (0x00074c9c) popup_call6_1st_window_ParamLimits

0x87e1,	// (0x00074c9c) popup_call6_1st_window

0x87f2,	// (0x00074cad) popup_call6_2nd_window_ParamLimits

0x87f2,	// (0x00074cad) popup_call6_2nd_window

0x8803,	// (0x00074cbe) cell_call6_btn_pane_ParamLimits

0x8803,	// (0x00074cbe) cell_call6_btn_pane

0xa903,	// (0x00076dbe) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x0007b317) popup_call6_1st_window_g1

0xee64,	// (0x0007b31f) popup_call6_1st_window_g2

0xee6c,	// (0x0007b327) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007c381) popup_call6_1st_window_g

0xee74,	// (0x0007b32f) popup_call6_1st_window_t1

0xee83,	// (0x0007b33e) popup_call6_1st_window_t2

0xee93,	// (0x0007b34e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007c388) popup_call6_1st_window_t

0xa903,	// (0x00076dbe) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x0007b317) popup_call6_2nd_window_g1

0xee64,	// (0x0007b31f) popup_call6_2nd_window_g2

0xee6c,	// (0x0007b327) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007c381) popup_call6_2nd_window_g

0xee74,	// (0x0007b32f) popup_call6_2nd_window_t1

0x9033,	// (0x000754ee) bg_button_pane_cp15

0xeea3,	// (0x0007b35e) cell_call6_btn_pane_g1

0xeeac,	// (0x0007b367) cell_call6_btn_pane_t1

0x8817,	// (0x00074cd2) listscroll_wgtman_pane_ParamLimits

0x8817,	// (0x00074cd2) listscroll_wgtman_pane

0x8838,	// (0x00074cf3) wgtman_btn_pane_ParamLimits

0x8838,	// (0x00074cf3) wgtman_btn_pane

0xb13c,	// (0x000775f7) aid_scroll_copy1

0xeebb,	// (0x0007b376) list_wgtman_pane

0x887b,	// (0x00074d36) wgtman_btn_pane_g1_ParamLimits

0x887b,	// (0x00074d36) wgtman_btn_pane_g1

0x88a7,	// (0x00074d62) wgtman_btn_pane_t1_ParamLimits

0x88a7,	// (0x00074d62) wgtman_btn_pane_t1

0xeec5,	// (0x0007b380) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x0007b380) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007c38f) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007c38f) wgtman_btn_pane_t

0x88e4,	// (0x00074d9f) listrow_wgtman_pane_ParamLimits

0x88e4,	// (0x00074d9f) listrow_wgtman_pane

0x88f7,	// (0x00074db2) listrow_wgtman_pane_g1

0x8904,	// (0x00074dbf) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007c394) listrow_wgtman_pane_g

0x8922,	// (0x00074ddd) listrow_wgtman_pane_t1

0x893a,	// (0x00074df5) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007c399) listrow_wgtman_pane_t

0x8960,	// (0x00074e1b) wait_bar_pane_cp09

0xeedc,	// (0x0007b397) main_calllock_btn_pane

0xeee6,	// (0x0007b3a1) main_calllock_pane_g1

0x9033,	// (0x000754ee) bg_button_pane_cp17

0xeef1,	// (0x0007b3ac) main_calllock_btn_pane_g1

0xeefa,	// (0x0007b3b5) main_calllock_btn_pane_t1

0x9033,	// (0x000754ee) main_dialer3_pane

0x9033,	// (0x000754ee) main_fmrd2_pane

0xcbaf,	// (0x0007906a) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x0007b3cc) main_fs_bigclock_unlock_btn_pane_t1

0x8972,	// (0x00074e2d) area_fmrd2_info_pane_ParamLimits

0x8972,	// (0x00074e2d) area_fmrd2_info_pane

0x8983,	// (0x00074e3e) area_fmrd2_visual_pane_ParamLimits

0x8983,	// (0x00074e3e) area_fmrd2_visual_pane

0x8991,	// (0x00074e4c) fmrd2_indi_pane_ParamLimits

0x8991,	// (0x00074e4c) fmrd2_indi_pane

0x899e,	// (0x00074e59) area_fmrd2_visual_pane_g1

0x89a6,	// (0x00074e61) area_fmrd2_visual_pane_t1

0x89b6,	// (0x00074e71) area_fmrd2_visual_pane_t2

0x89c6,	// (0x00074e81) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007c3a3) area_fmrd2_visual_pane_t

0x89d6,	// (0x00074e91) area_fmrd2_info_pane_g1

0x89de,	// (0x00074e99) area_fmrd2_info_pane_t1

0x89ee,	// (0x00074ea9) area_fmrd2_info_pane_t2

0x89fe,	// (0x00074eb9) area_fmrd2_info_pane_t3

0x8a0e,	// (0x00074ec9) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007c3aa) area_fmrd2_info_pane_t

0x8a1c,	// (0x00074ed7) fmrd2_indi_pane_t1

0x8a2c,	// (0x00074ee7) fmrd2_indi_pane_t2

0x8a3c,	// (0x00074ef7) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007c3b3) fmrd2_indi_pane_t

0xe40b,	// (0x0007a8c6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe40b,	// (0x0007a8c6) list_single_fs_bigclock_indicator_pane_g5

0xe4bb,	// (0x0007a976) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4bb,	// (0x0007a976) list_single_fs_bigclock_indicator_pane_t5

0x81c3,	// (0x0007467e) aid_cell_bcale_month_pane_ParamLimits

0x81c3,	// (0x0007467e) aid_cell_bcale_month_pane

0x81e1,	// (0x0007469c) bcale_month_pane_ParamLimits

0x81e1,	// (0x0007469c) bcale_month_pane

0x8205,	// (0x000746c0) bcale_preview_pane_ParamLimits

0x8205,	// (0x000746c0) bcale_preview_pane

0xecb3,	// (0x0007b16e) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x0007b18d) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x0007b18d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007c335) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007c335) list_single_fs_bigclock_pane_t

0xef09,	// (0x0007b3c4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007c39e) main_fs_bigclock_unlock_btn_pane_g

0x8a4c,	// (0x00074f07) aid_dia3_key_size_ParamLimits

0x8a4c,	// (0x00074f07) aid_dia3_key_size

0x8a5b,	// (0x00074f16) aid_dia3_listrow_size_ParamLimits

0x8a5b,	// (0x00074f16) aid_dia3_listrow_size

0x8a70,	// (0x00074f2b) dia3_keypad_fun_pane_ParamLimits

0x8a70,	// (0x00074f2b) dia3_keypad_fun_pane

0x8a8c,	// (0x00074f47) dia3_keypad_num_pane_ParamLimits

0x8a8c,	// (0x00074f47) dia3_keypad_num_pane

0x8aa7,	// (0x00074f62) dia3_listscroll_pane_ParamLimits

0x8aa7,	// (0x00074f62) dia3_listscroll_pane

0x8aba,	// (0x00074f75) dia3_numentry_pane_ParamLimits

0x8aba,	// (0x00074f75) dia3_numentry_pane

0xef1f,	// (0x0007b3da) dia3_list_pane

0xef2a,	// (0x0007b3e5) scroll_pane_cp12

0x9033,	// (0x000754ee) bg_dia3_numentry_pane

0x8ace,	// (0x00074f89) dia3_numentry_pane_t1

0x8add,	// (0x00074f98) cell_dia3_key_num_pane

0x8ae5,	// (0x00074fa0) cell_dia3_key0_fun_pane_ParamLimits

0x8ae5,	// (0x00074fa0) cell_dia3_key0_fun_pane

0x8af9,	// (0x00074fb4) cell_dia3_key1_fun_pane_ParamLimits

0x8af9,	// (0x00074fb4) cell_dia3_key1_fun_pane

0x8b11,	// (0x00074fcc) dia3_listrow_pane

0xe102,	// (0x0007a5bd) bg_dia3_numentry_pane_g1

0x9033,	// (0x000754ee) bg_button_pane_cp21

0xef35,	// (0x0007b3f0) cell_dia3_key_num_pane_t1

0xef43,	// (0x0007b3fe) cell_dia3_key_num_pane_t2

0xef52,	// (0x0007b40d) cell_dia3_key_num_pane_t3

0xef61,	// (0x0007b41c) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007c3ba) cell_dia3_key_num_pane_t

0x9033,	// (0x000754ee) bg_button_pane_cp19

0x8b23,	// (0x00074fde) cell_dia3_key0_fun_pane_g1

0x9033,	// (0x000754ee) bg_button_pane_cp20

0x8b2b,	// (0x00074fe6) cell_dia3_key1_fun_pane_g1

0x8b33,	// (0x00074fee) area_left_week_number_pane

0x8b3f,	// (0x00074ffa) area_top_day_name_pane

0x8b52,	// (0x0007500d) frame_month_view_pane

0xef70,	// (0x0007b42b) grid_month_view_pane

0x8b65,	// (0x00075020) cell_top_day_name_pane_ParamLimits

0x8b65,	// (0x00075020) cell_top_day_name_pane

0x8b92,	// (0x0007504d) cell_area_left_week_number_pane_ParamLimits

0x8b92,	// (0x0007504d) cell_area_left_week_number_pane

0x8ba6,	// (0x00075061) cell_month_view_pane_ParamLimits

0x8ba6,	// (0x00075061) cell_month_view_pane

0xef7e,	// (0x0007b439) frm_month_g1

0x8bd3,	// (0x0007508e) frm_month_g2

0x8be6,	// (0x000750a1) frm_month_g3

0x8bf9,	// (0x000750b4) frm_month_g4

0x8c0c,	// (0x000750c7) frm_month_g5

0x8c1f,	// (0x000750da) frm_month_g6

0x8c32,	// (0x000750ed) frm_month_g7

0xef8b,	// (0x0007b446) frm_month_g8

0x8c45,	// (0x00075100) frm_month_g9

0x8c55,	// (0x00075110) frm_month_g10

0x8c65,	// (0x00075120) frm_month_g11

0x8c75,	// (0x00075130) frm_month_g12

0x8c87,	// (0x00075142) frm_month_g13

0x8c99,	// (0x00075154) frm_month_g14

0x8cad,	// (0x00075168) frm_month_g15

0x8cc1,	// (0x0007517c) frm_month_g16

0x000f,

0xff08,	// (0x0007c3c3) frm_month_g

0xef98,	// (0x0007b453) cell_top_day_name_pane_t1

0x8cd5,	// (0x00075190) cell_area_left_week_number_pane_g1

0x8ce1,	// (0x0007519c) cell_area_left_week_number_pane_t1

0xce1b,	// (0x000792d6) cell_month_view_pane_g1

0x8cf4,	// (0x000751af) cell_month_view_pane_t1

0x9033,	// (0x000754ee) main_fps_pane

0xe6c6,	// (0x0007ab81) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c6,	// (0x0007ab81) cmail_ddmenu_btn02_pane_cp1

0xe6e2,	// (0x0007ab9d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e2,	// (0x0007ab9d) cmail_ddmenu_btn02_pane_cp2

0x8427,	// (0x000748e2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8427,	// (0x000748e2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007c2e8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007c2e8) cmail_ddmenu_btn02_pane_g

0x8445,	// (0x00074900) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8445,	// (0x00074900) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007c2ed) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007c2ed) cmail_ddmenu_btn02_pane_t

0x8d07,	// (0x000751c2) fps_text_pane_ParamLimits

0x8d07,	// (0x000751c2) fps_text_pane

0x8d1e,	// (0x000751d9) main_fps_pane_g1_ParamLimits

0x8d1e,	// (0x000751d9) main_fps_pane_g1

0x8d38,	// (0x000751f3) wait_bar_pane_cp010_ParamLimits

0x8d38,	// (0x000751f3) wait_bar_pane_cp010

0x8d49,	// (0x00075204) fps_text_pane_t1_ParamLimits

0x8d49,	// (0x00075204) fps_text_pane_t1

0xd7ea,	// (0x00079ca5) cam4_image_uncrop_pane_g1

0xd7f3,	// (0x00079cae) cam4_image_uncrop_pane_g2

0x588a,	// (0x00071d45) cam4_image_uncrop_pane_g3

0x5893,	// (0x00071d4e) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007bda9) cam4_image_uncrop_pane_g

0x8b11,	// (0x00074fcc) dia3_listrow_pane_ParamLimits

0x9033,	// (0x000754ee) main_phob2_pane

0x7ff7,	// (0x000744b2) cell_tport_appsw_pane_cp02_ParamLimits

0x7ff7,	// (0x000744b2) cell_tport_appsw_pane_cp02

0x800b,	// (0x000744c6) cell_tport_appsw_pane_cp03_ParamLimits

0x800b,	// (0x000744c6) cell_tport_appsw_pane_cp03

0x9033,	// (0x000754ee) phob2_contact_card_pane

0x9033,	// (0x000754ee) phob2_listscroll_pane

0xefab,	// (0x0007b466) phob2_list_pane

0xefb3,	// (0x0007b46e) scroll_pane_cp034

0x8d61,	// (0x0007521c) phob2_cc_data_pane_ParamLimits

0x8d61,	// (0x0007521c) phob2_cc_data_pane

0x8d80,	// (0x0007523b) phob2_cc_listscroll_pane_ParamLimits

0x8d80,	// (0x0007523b) phob2_cc_listscroll_pane

0x8d9e,	// (0x00075259) list_double_large_graphic_phob2_pane_ParamLimits

0x8d9e,	// (0x00075259) list_double_large_graphic_phob2_pane

0x8db1,	// (0x0007526c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8db1,	// (0x0007526c) list_double_large_graphic_phob2_pane_g1

0x8dc7,	// (0x00075282) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8dc7,	// (0x00075282) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007c3e4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007c3e4) list_double_large_graphic_phob2_pane_g

0x8dd3,	// (0x0007528e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8dd3,	// (0x0007528e) list_double_large_graphic_phob2_pane_t1

0x8de9,	// (0x000752a4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8de9,	// (0x000752a4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007c3e9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007c3e9) list_double_large_graphic_phob2_pane_t

0x9033,	// (0x000754ee) list_highlight_pane_cp024

0x8dfe,	// (0x000752b9) phob2_cc_button_pane

0x8e06,	// (0x000752c1) phob2_cc_data_pane_g1_ParamLimits

0x8e06,	// (0x000752c1) phob2_cc_data_pane_g1

0x8e1b,	// (0x000752d6) phob2_cc_data_pane_g2_ParamLimits

0x8e1b,	// (0x000752d6) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007c3ee) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007c3ee) phob2_cc_data_pane_g

0x8e2b,	// (0x000752e6) phob2_cc_data_pane_t1_ParamLimits

0x8e2b,	// (0x000752e6) phob2_cc_data_pane_t1

0x8e43,	// (0x000752fe) phob2_cc_data_pane_t2_ParamLimits

0x8e43,	// (0x000752fe) phob2_cc_data_pane_t2

0x8e5b,	// (0x00075316) phob2_cc_data_pane_t3_ParamLimits

0x8e5b,	// (0x00075316) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007c3f3) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007c3f3) phob2_cc_data_pane_t

0xefbb,	// (0x0007b476) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x0007b476) phob2_cc_list_pane

0xd917,	// (0x00079dd2) scroll_pane_cp035_ParamLimits

0xd917,	// (0x00079dd2) scroll_pane_cp035

0xa1ae,	// (0x00076669) bg_button_pane_cp033

0xefc7,	// (0x0007b482) phob2_cc_button_pane_g1

0xefd3,	// (0x0007b48e) phob2_cc_button_pane_t1

0xefe8,	// (0x0007b4a3) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007c3fa) phob2_cc_button_pane_t

0x8e73,	// (0x0007532e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8e73,	// (0x0007532e) list_double_large_graphic_phob2_cc_pane

0x8e86,	// (0x00075341) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8e86,	// (0x00075341) list_double_large_graphic_phob2_cc_pane_g1

0x8e92,	// (0x0007534d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8e92,	// (0x0007534d) list_double_large_graphic_phob2_cc_pane_g2

0x8e9e,	// (0x00075359) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8e9e,	// (0x00075359) list_double_large_graphic_phob2_cc_pane_g3

0x8eaa,	// (0x00075365) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8eaa,	// (0x00075365) list_double_large_graphic_phob2_cc_pane_g4

0x8eb6,	// (0x00075371) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8eb6,	// (0x00075371) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007c3ff) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007c3ff) list_double_large_graphic_phob2_cc_pane_g

0x8ec2,	// (0x0007537d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8ec2,	// (0x0007537d) list_double_large_graphic_phob2_cc_pane_t1

0x8eeb,	// (0x000753a6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8eeb,	// (0x000753a6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007c40a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007c40a) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x0007b4b5) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x0007b4b5) list_highlight_pane_cp025

0xa1ae,	// (0x00076669) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x0007b482) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x0007b48e) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x0007b4a3) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007c3fa) phob2_cc_button_pane_t_ParamLimits

0x030a,	// (0x0006c7c5) popup_wgtman_window

0xd738,	// (0x00079bf3) scroll_pane_cp038

0x885d,	// (0x00074d18) wgtman_btn_pane_cp_01_ParamLimits

0x885d,	// (0x00074d18) wgtman_btn_pane_cp_01

0xf008,	// (0x0007b4c3) wgtman_content_pane

0xf011,	// (0x0007b4cc) wgtman_heading_pane

0x9033,	// (0x000754ee) bg_heading_pane_cp02

0xf01a,	// (0x0007b4d5) wgtman_heading_pane_g1

0xf022,	// (0x0007b4dd) wgtman_heading_pane_t1

0xf030,	// (0x0007b4eb) scroll_pane_cp036

0xf038,	// (0x0007b4f3) wgtman_list_pane

0xe5a6,	// (0x0007aa61) wgtman_list_pane_t1_ParamLimits

0xe5a6,	// (0x0007aa61) wgtman_list_pane_t1

0x9a22,	// (0x00075edd) cam4_grid_pane

0x652b,	// (0x000729e6) bg_button_pane_cp015_ParamLimits

0x653f,	// (0x000729fa) bg_button_pane_cp016_ParamLimits

0x6552,	// (0x00072a0d) bg_button_pane_cp017_ParamLimits

0x65aa,	// (0x00072a65) popup_vitu2_query_window_g3_ParamLimits

0x65aa,	// (0x00072a65) popup_vitu2_query_window_g3

0x6667,	// (0x00072b22) popup_vitu2_query_window_t6_ParamLimits

0x6667,	// (0x00072b22) popup_vitu2_query_window_t6

0x6692,	// (0x00072b4d) popup_vitu2_query_window_t7_ParamLimits

0x6692,	// (0x00072b4d) popup_vitu2_query_window_t7

0xd7ea,	// (0x00079ca5) cam4_grid_pane_g1

0xd7f3,	// (0x00079cae) cam4_grid_pane_g2

0xf040,	// (0x0007b4fb) cam4_grid_pane_g3

0xf049,	// (0x0007b504) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007c40f) cam4_grid_pane_g

0x12a4,	// (0x0006d75f) aid_placing_vt_slider_lsc_ParamLimits

0x15a1,	// (0x0006da5c) vidtel_button_pane_ParamLimits

0x15a1,	// (0x0006da5c) vidtel_button_pane

0xf054,	// (0x0007b50f) bg_button_pane_cp034

0x8f14,	// (0x000753cf) vidtel_button_pane_g1

0xf05e,	// (0x0007b519) vidtel_button_pane_t1

0xd85e,	// (0x00079d19) aid_size_vtel_slider_touch

0xd917,	// (0x00079dd2) scroll_pane_cp039

0xe140,	// (0x0007a5fb) ncim_query_button_pane_cp01_ParamLimits

0xe15f,	// (0x0007a61a) ncimui_query_pane_g1_ParamLimits

0xa1ae,	// (0x00076669) input_focus_pane_cp012_ParamLimits

0xe184,	// (0x0007a63f) ncim_query_entry_pane_t1_ParamLimits

0xd917,	// (0x00079dd2) scroll_pane_cp039_ParamLimits

0xb222,	// (0x000776dd) navi_pane_bcale_mc_g1

0xb22a,	// (0x000776e5) navi_pane_bcale_mc_t1

0xe72b,	// (0x0007abe6) main_sp_fs_email_pane_g1

0xe737,	// (0x0007abf2) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007c1a0) main_sp_fs_email_pane_g

0xe988,	// (0x0007ae43) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe988,	// (0x0007ae43) list_single_cale_mrui_row_pane_g3

0x846d,	// (0x00074928) list_single_recal_day_pane_g5_event_pane

0xa7bd,	// (0x00076c78) list_single_recal_day_pane_g7

0xf06c,	// (0x0007b527) list_recal_day_event_pane_cp01

0xf075,	// (0x0007b530) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0007b538) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0007b540) list_recal_vselct_pane_cp01

0xd880,	// (0x00079d3b) list_recal_day_event_pane_cp01_g1

0xa7f2,	// (0x00076cad) list_recal_day_event_pane_cp01_t1

0xa7c5,	// (0x00076c80) list_single_recal_day_pane_t1_ParamLimits

0xa7d7,	// (0x00076c92) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007c2fd) list_single_recal_day_pane_t_ParamLimits

0x9e7c,	// (0x00076337) bg_notes_pane_ParamLimits

0x9f3e,	// (0x000763f9) list_notes_pane_ParamLimits

0x063e,	// (0x0006caf9) scroll_pane_cp06_ParamLimits

0x9f60,	// (0x0007641b) main_notes_pane_ParamLimits

0x9033,	// (0x000754ee) main_welc_pane

0x8f1c,	// (0x000753d7) main_welc_body_pane_ParamLimits

0x8f1c,	// (0x000753d7) main_welc_body_pane

0x8f39,	// (0x000753f4) main_welc_opti_pane_ParamLimits

0x8f39,	// (0x000753f4) main_welc_opti_pane

0x8f82,	// (0x0007543d) main_welc_pane_t1_ParamLimits

0x8f82,	// (0x0007543d) main_welc_pane_t1

0x8fa4,	// (0x0007545f) main_welc_body_row_pane_ParamLimits

0x8fa4,	// (0x0007545f) main_welc_body_row_pane

0xe3ba,	// (0x0007a875) main_welc_opti_row_pane_ParamLimits

0xe3ba,	// (0x0007a875) main_welc_opti_row_pane

0xf08f,	// (0x0007b54a) main_welc_opti_row_pane_g1

0x8fba,	// (0x00075475) main_welc_opti_row_pane_t1

0xf097,	// (0x0007b552) main_welc_body_row_pane_t1

0xed89,	// (0x0007b244) popup_notif_wgt_heading_pane

0xeda3,	// (0x0007b25e) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x0007b26b) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x0007b277) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x0007b28b) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007c364) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x0007b298) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x0007b2ae) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x0007b2c0) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007c36b) list_notif_wgt_row_pane_t_ParamLimits

0x88f7,	// (0x00074db2) listrow_wgtman_pane_g1_ParamLimits

0x8904,	// (0x00074dbf) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007c394) listrow_wgtman_pane_g_ParamLimits

0x8922,	// (0x00074ddd) listrow_wgtman_pane_t1_ParamLimits

0x893a,	// (0x00074df5) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007c399) listrow_wgtman_pane_t_ParamLimits

0x8960,	// (0x00074e1b) wait_bar_pane_cp09_ParamLimits

0x9033,	// (0x000754ee) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0007b561) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0007b569) popup_notif_wgt_heading_pane_t1

0x9033,	// (0x000754ee) main_vids_pane

0x9033,	// (0x000754ee) vids_listscroll_pane

0x8fc9,	// (0x00075484) scroll_pane_cp040

0x9033,	// (0x000754ee) vids_list_pane

0x8fd4,	// (0x0007548f) vids_list_double_pane_ParamLimits

0x8fd4,	// (0x0007548f) vids_list_double_pane

0x8fe5,	// (0x000754a0) vids_list_double_pane_g1

0x8fee,	// (0x000754a9) vids_list_double_pane_t1

0x8ffd,	// (0x000754b8) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007c41d) vids_list_double_pane_t

0x909b,	// (0x00075556) main_ncimui_pane_ParamLimits

0x7273,	// (0x0007372e) main_ncimui_pane_g1_ParamLimits

0x727f,	// (0x0007373a) main_ncimui_pane_g2_ParamLimits

0x727f,	// (0x0007373a) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007c0a5) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007c0a5) main_ncimui_pane_g

0x8f58,	// (0x00075413) main_welc_pane_g1_ParamLimits

0x8f58,	// (0x00075413) main_welc_pane_g1

0x8f6d,	// (0x00075428) main_welc_pane_g2_ParamLimits

0x8f6d,	// (0x00075428) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007c418) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007c418) main_welc_pane_g

0x9e7c,	// (0x00076337) listscroll_mce_pane_ParamLimits

0xb377,	// (0x00077832) wait_bar_pane_cp10

0xc799,	// (0x00078c54) main_cale_day_pane_ParamLimits

0xc799,	// (0x00078c54) main_cale_week_pane_ParamLimits

0x9e7c,	// (0x00076337) main_messa_pane_ParamLimits

0x4b97,	// (0x00071052) main_clock2_btn_pane_ParamLimits

0x4b97,	// (0x00071052) main_clock2_btn_pane

0xcfa3,	// (0x0007945e) main_clock2_btn_pane_cp01_ParamLimits

0xcfa3,	// (0x0007945e) main_clock2_btn_pane_cp01

0xe959,	// (0x0007ae14) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x0007b304) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007c372) main_cf0_pane_g

0x8b33,	// (0x00074fee) area_left_week_number_pane_ParamLimits

0x8b3f,	// (0x00074ffa) area_top_day_name_pane_ParamLimits

0x8b52,	// (0x0007500d) frame_month_view_pane_ParamLimits

0xef70,	// (0x0007b42b) grid_month_view_pane_ParamLimits

0xef7e,	// (0x0007b439) frm_month_g1_ParamLimits

0x8bd3,	// (0x0007508e) frm_month_g2_ParamLimits

0x8be6,	// (0x000750a1) frm_month_g3_ParamLimits

0x8bf9,	// (0x000750b4) frm_month_g4_ParamLimits

0x8c0c,	// (0x000750c7) frm_month_g5_ParamLimits

0x8c1f,	// (0x000750da) frm_month_g6_ParamLimits

0x8c32,	// (0x000750ed) frm_month_g7_ParamLimits

0xef8b,	// (0x0007b446) frm_month_g8_ParamLimits

0x8c45,	// (0x00075100) frm_month_g9_ParamLimits

0x8c55,	// (0x00075110) frm_month_g10_ParamLimits

0x8c65,	// (0x00075120) frm_month_g11_ParamLimits

0x8c75,	// (0x00075130) frm_month_g12_ParamLimits

0x8c87,	// (0x00075142) frm_month_g13_ParamLimits

0x8c99,	// (0x00075154) frm_month_g14_ParamLimits

0x8cad,	// (0x00075168) frm_month_g15_ParamLimits

0x8cc1,	// (0x0007517c) frm_month_g16_ParamLimits

0xff08,	// (0x0007c3c3) frm_month_g_ParamLimits

0xef98,	// (0x0007b453) cell_top_day_name_pane_t1_ParamLimits

0x8cd5,	// (0x00075190) cell_area_left_week_number_pane_g1_ParamLimits

0x8ce1,	// (0x0007519c) cell_area_left_week_number_pane_t1_ParamLimits

0xce1b,	// (0x000792d6) cell_month_view_pane_g1_ParamLimits

0x8cf4,	// (0x000751af) cell_month_view_pane_t1_ParamLimits

0x9e74,	// (0x0007632f) main_clock2_btn_pane_g1

0xf0bc,	// (0x0007b577) main_clock2_btn_pane_t1

0xa1ae,	// (0x00076669) listscroll_cmail_pane_ParamLimits

0xe72b,	// (0x0007abe6) main_sp_fs_email_pane_g1_ParamLimits

0xe737,	// (0x0007abf2) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007c1a0) main_sp_fs_email_pane_g_ParamLimits

0xeaf7,	// (0x0007afb2) list_recal_day_pane_ParamLimits

0xeb08,	// (0x0007afc3) mian_recal_day_pane_t1

0x7cdd,	// (0x00074198) list_single_dyc_row_text_pane_t4_ParamLimits

0x7cdd,	// (0x00074198) list_single_dyc_row_text_pane_t4

0x7d26,	// (0x000741e1) list_single_dyc_row_text_pane_t5_ParamLimits

0x7d26,	// (0x000741e1) list_single_dyc_row_text_pane_t5

0xa4bf,	// (0x0007697a) list_single_dyc_row_text_pane_t6_ParamLimits

0xa4bf,	// (0x0007697a) list_single_dyc_row_text_pane_t6

0xad06,	// (0x000771c1) aid_mgn_list_cale_time_pane

0x909b,	// (0x00075556) main_gallery2_pane_ParamLimits

0xcfb9,	// (0x00079474) main_clock2_pane_cp01_t1

0xcfc7,	// (0x00079482) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007bc7f) main_clock2_pane_cp01_t

0x09e9,	// (0x0006cea4) cale_week_scroll_pane_g16_ParamLimits

0x09e9,	// (0x0006cea4) cale_week_scroll_pane_g16

0xa903,	// (0x00076dbe) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
