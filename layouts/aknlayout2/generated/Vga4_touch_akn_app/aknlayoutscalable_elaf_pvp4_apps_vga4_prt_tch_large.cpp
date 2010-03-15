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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007c072 };

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
0x1fda,	// (0x0007e04c) Screen

0x1fe6,	// (0x0007e058) application_window

0x2026,	// (0x0007e098) area_bottom_pane_ParamLimits

0x2026,	// (0x0007e098) area_bottom_pane

0x205b,	// (0x0007e0cd) area_top_pane_ParamLimits

0x205b,	// (0x0007e0cd) area_top_pane

0xa198,	// (0x0008620a) call_video_uplink_pane_ParamLimits

0xa198,	// (0x0008620a) call_video_uplink_pane

0x20ea,	// (0x0007e15c) main_pane_ParamLimits

0x20ea,	// (0x0007e15c) main_pane

0xc89a,	// (0x0008890c) context_pane

0x569e,	// (0x00081710) navi_pane

0x56c2,	// (0x00081734) popup_cale_events_window_ParamLimits

0x56c2,	// (0x00081734) popup_cale_events_window

0xc8ad,	// (0x0008891f) popup_mup_playback_window

0x56da,	// (0x0008174c) signal_pane

0xa917,	// (0x00086989) main_browser_pane

0xb447,	// (0x000874b9) main_burst_pane

0x5550,	// (0x000815c2) main_calc_pane

0xc83d,	// (0x000888af) main_cale_day_pane

0x27fa,	// (0x0007e86c) main_cale_month_pane

0xc83d,	// (0x000888af) main_cale_week_pane

0xb447,	// (0x000874b9) main_call_pane

0xa5c9,	// (0x0008663b) main_call_poc_pane

0xb447,	// (0x000874b9) main_camera_pane

0xb447,	// (0x000874b9) main_chi_dic_pane

0xb2db,	// (0x0008734d) main_clock_pane

0xa5c9,	// (0x0008663b) main_fmradio_pane

0xb447,	// (0x000874b9) main_graph_messa_pane

0xa5c9,	// (0x0008663b) main_help_pane

0xa917,	// (0x00086989) main_im_pane

0xa824,	// (0x00086896) main_image_pane_ParamLimits

0xa824,	// (0x00086896) main_image_pane

0xa5c9,	// (0x0008663b) main_location2_pane

0xb447,	// (0x000874b9) main_location_pane

0xa824,	// (0x00086896) main_messa_pane

0xa5c9,	// (0x0008663b) main_mp2_pane

0xb447,	// (0x000874b9) main_mp_pane

0xa5c9,	// (0x0008663b) main_msg_pane

0xa5c9,	// (0x0008663b) main_mup_eq_pane

0xa5c9,	// (0x0008663b) main_mup_pane

0xa917,	// (0x00086989) main_notes_pane

0xa5c9,	// (0x0008663b) main_pec_pane

0xa5c9,	// (0x0008663b) main_phob_pane

0xa5c9,	// (0x0008663b) main_pinb_pane

0xa5c9,	// (0x0008663b) main_postcard_pane

0xa5c9,	// (0x0008663b) main_qdial_pane

0xb447,	// (0x000874b9) main_skin_pane

0xa5c9,	// (0x0008663b) main_smil2_pane

0xb447,	// (0x000874b9) main_smil_pane

0xb447,	// (0x000874b9) main_video_pane

0xb447,	// (0x000874b9) main_video_tele_pane

0xa824,	// (0x00086896) main_viewer_pane_ParamLimits

0xa824,	// (0x00086896) main_viewer_pane

0xb447,	// (0x000874b9) main_vorec_pane

0x5588,	// (0x000815fa) popup_blid_sat_info_window_ParamLimits

0x5588,	// (0x000815fa) popup_blid_sat_info_window

0x55a2,	// (0x00081614) popup_dyc_status_message_window_ParamLimits

0x55a2,	// (0x00081614) popup_dyc_status_message_window

0x55b2,	// (0x00081624) popup_grid_large_graphic_window_ParamLimits

0x55b2,	// (0x00081624) popup_grid_large_graphic_window

0x562a,	// (0x0008169c) popup_loc_request_window_ParamLimits

0x562a,	// (0x0008169c) popup_loc_request_window

0x5672,	// (0x000816e4) popup_wml_address_window_ParamLimits

0x5672,	// (0x000816e4) popup_wml_address_window

0x5428,	// (0x0008149a) call_muted_g1

0x50e7,	// (0x00081159) popup_call_audio_conf_window_ParamLimits

0x50e7,	// (0x00081159) popup_call_audio_conf_window

0x5438,	// (0x000814aa) popup_call_audio_first_window_ParamLimits

0x5438,	// (0x000814aa) popup_call_audio_first_window

0x5478,	// (0x000814ea) popup_call_audio_in_window_ParamLimits

0x5478,	// (0x000814ea) popup_call_audio_in_window

0x549c,	// (0x0008150e) popup_call_audio_out_window_ParamLimits

0x549c,	// (0x0008150e) popup_call_audio_out_window

0x54be,	// (0x00081530) popup_call_audio_second_window_ParamLimits

0x54be,	// (0x00081530) popup_call_audio_second_window

0x54ee,	// (0x00081560) popup_call_audio_wait_window_ParamLimits

0x54ee,	// (0x00081560) popup_call_audio_wait_window

0x550f,	// (0x00081581) popup_number_entry_window_ParamLimits

0x550f,	// (0x00081581) popup_number_entry_window

0xa1b6,	// (0x00086228) bg_popup_call_pane_cp05_ParamLimits

0xa1b6,	// (0x00086228) bg_popup_call_pane_cp05

0xa1d6,	// (0x00086248) popup_number_entry_window_t1

0xa1e9,	// (0x0008625b) popup_number_entry_window_t2

0xa1fb,	// (0x0008626d) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0008b145) popup_number_entry_window_t

0xa20d,	// (0x0008627f) text_title_cp2

0xa220,	// (0x00086292) bg_popup_call_pane_cp_ParamLimits

0xa220,	// (0x00086292) bg_popup_call_pane_cp

0xa22e,	// (0x000862a0) call_thumbnail_pane

0xa236,	// (0x000862a8) popup_call_audio_in_window_g1_ParamLimits

0xa236,	// (0x000862a8) popup_call_audio_in_window_g1

0xa242,	// (0x000862b4) popup_call_audio_in_window_g2_ParamLimits

0xa242,	// (0x000862b4) popup_call_audio_in_window_g2

0xa24e,	// (0x000862c0) popup_call_audio_in_window_g3_ParamLimits

0xa24e,	// (0x000862c0) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0008b14e) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0008b14e) popup_call_audio_in_window_g

0xa25a,	// (0x000862cc) popup_call_audio_in_window_t1_ParamLimits

0xa25a,	// (0x000862cc) popup_call_audio_in_window_t1

0xa276,	// (0x000862e8) popup_call_audio_in_window_t2_ParamLimits

0xa276,	// (0x000862e8) popup_call_audio_in_window_t2

0xa292,	// (0x00086304) popup_call_audio_in_window_t3_ParamLimits

0xa292,	// (0x00086304) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0008b155) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0008b155) popup_call_audio_in_window_t

0xa220,	// (0x00086292) bg_popup_call_pane_cp01_ParamLimits

0xa220,	// (0x00086292) bg_popup_call_pane_cp01

0xa22e,	// (0x000862a0) call_thumbnail_pane_cp02

0xa2a5,	// (0x00086317) call_type_pane_cp022

0xa2ad,	// (0x0008631f) popup_call_audio_out_window_g1_ParamLimits

0xa2ad,	// (0x0008631f) popup_call_audio_out_window_g1

0xa2bf,	// (0x00086331) popup_call_audio_out_window_g2_ParamLimits

0xa2bf,	// (0x00086331) popup_call_audio_out_window_g2

0xa2cb,	// (0x0008633d) popup_call_audio_out_window_g3_ParamLimits

0xa2cb,	// (0x0008633d) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0008b15c) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0008b15c) popup_call_audio_out_window_g

0xa2dd,	// (0x0008634f) popup_call_audio_out_window_t1_ParamLimits

0xa2dd,	// (0x0008634f) popup_call_audio_out_window_t1

0xa2f5,	// (0x00086367) popup_call_audio_out_window_t2_ParamLimits

0xa2f5,	// (0x00086367) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0008b163) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0008b163) popup_call_audio_out_window_t

0xa30a,	// (0x0008637c) bg_popup_call_pane_ParamLimits

0xa30a,	// (0x0008637c) bg_popup_call_pane

0x22e4,	// (0x0007e356) call_thumbnail_pane_cp_ParamLimits

0x22e4,	// (0x0007e356) call_thumbnail_pane_cp

0xa38e,	// (0x00086400) call_type_pane_cp01_ParamLimits

0xa38e,	// (0x00086400) call_type_pane_cp01

0xa3d2,	// (0x00086444) popup_call_audio_first_window_g1_ParamLimits

0xa3d2,	// (0x00086444) popup_call_audio_first_window_g1

0xa41e,	// (0x00086490) popup_call_audio_first_window_g2_ParamLimits

0xa41e,	// (0x00086490) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0008b168) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0008b168) popup_call_audio_first_window_g

0xa462,	// (0x000864d4) popup_call_audio_first_window_t1_ParamLimits

0xa462,	// (0x000864d4) popup_call_audio_first_window_t1

0xa50e,	// (0x00086580) popup_call_audio_first_window_t4_ParamLimits

0xa50e,	// (0x00086580) popup_call_audio_first_window_t4

0xa59a,	// (0x0008660c) popup_call_audio_first_window_t5_ParamLimits

0xa59a,	// (0x0008660c) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0008b16d) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0008b16d) popup_call_audio_first_window_t

0xa5c9,	// (0x0008663b) bg_popup_call_pane_cp02

0xa5d3,	// (0x00086645) call_type_pane_cp023

0xa5db,	// (0x0008664d) popup_call_audio_wait_window_g1

0xa5e3,	// (0x00086655) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0008b174) popup_call_audio_wait_window_g

0xa5eb,	// (0x0008665d) popup_call_audio_wait_window_t3

0xa5f9,	// (0x0008666b) bg_popup_call_pane_cp03_ParamLimits

0xa5f9,	// (0x0008666b) bg_popup_call_pane_cp03

0xa659,	// (0x000866cb) call_thumbnail_pane_cp011_ParamLimits

0xa659,	// (0x000866cb) call_thumbnail_pane_cp011

0xa665,	// (0x000866d7) call_type_pane_cp034_ParamLimits

0xa665,	// (0x000866d7) call_type_pane_cp034

0xa6a1,	// (0x00086713) popup_call_audio_second_window_g1_ParamLimits

0xa6a1,	// (0x00086713) popup_call_audio_second_window_g1

0xa6dd,	// (0x0008674f) popup_call_audio_second_window_g2_ParamLimits

0xa6dd,	// (0x0008674f) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0008b179) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0008b179) popup_call_audio_second_window_g

0xa719,	// (0x0008678b) popup_call_audio_second_window_t1_ParamLimits

0xa719,	// (0x0008678b) popup_call_audio_second_window_t1

0xa79a,	// (0x0008680c) popup_call_audio_second_window_t2_ParamLimits

0xa79a,	// (0x0008680c) popup_call_audio_second_window_t2

0xa7d0,	// (0x00086842) popup_call_audio_second_window_t3_ParamLimits

0xa7d0,	// (0x00086842) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0008b17e) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0008b17e) popup_call_audio_second_window_t

0xa5c9,	// (0x0008663b) bg_popup_call_pane_cp04

0xa806,	// (0x00086878) list_conf_pane

0xa80e,	// (0x00086880) popup_call_audio_conf_window_t1

0xa81c,	// (0x0008688e) call_thumbnail_pane_g1

0xa824,	// (0x00086896) bg_pinb_pane_ParamLimits

0xa824,	// (0x00086896) bg_pinb_pane

0xa832,	// (0x000868a4) find_pinb_pane

0xa83b,	// (0x000868ad) listscroll_pinb_pane_ParamLimits

0xa83b,	// (0x000868ad) listscroll_pinb_pane

0xa84a,	// (0x000868bc) pinb_bg_pane_g1

0x2308,	// (0x0007e37a) pinb_bg_pane_g2

0x2314,	// (0x0007e386) pinb_bg_pane_g3

0x2320,	// (0x0007e392) pinb_bg_pane_g4

0x232c,	// (0x0007e39e) pinb_bg_pane_g5

0x2338,	// (0x0007e3aa) pinb_bg_pane_g6

0x2343,	// (0x0007e3b5) pinb_bg_pane_g7

0x234e,	// (0x0007e3c0) pinb_bg_pane_g8

0x2359,	// (0x0007e3cb) pinb_bg_pane_g9

0x2363,	// (0x0007e3d5) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0008b185) pinb_bg_pane_g

0x2380,	// (0x0007e3f2) grid_pinb_pane

0x238b,	// (0x0007e3fd) list_pinb_pane

0x2396,	// (0x0007e408) scroll_pane_cp01_ParamLimits

0x2396,	// (0x0007e408) scroll_pane_cp01

0xa854,	// (0x000868c6) find_pinb_pane_g1_ParamLimits

0xa854,	// (0x000868c6) find_pinb_pane_g1

0xa86c,	// (0x000868de) find_pinb_pane_t1

0xa87e,	// (0x000868f0) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0008b19f) find_pinb_pane_t

0xa893,	// (0x00086905) input_focus_pane_cp01_ParamLimits

0xa893,	// (0x00086905) input_focus_pane_cp01

0x23a8,	// (0x0007e41a) cell_pinb_pane_ParamLimits

0x23a8,	// (0x0007e41a) cell_pinb_pane

0x23cd,	// (0x0007e43f) cell_pinb_pane_g1_ParamLimits

0x23cd,	// (0x0007e43f) cell_pinb_pane_g1

0x23e2,	// (0x0007e454) cell_pinb_pane_g2_ParamLimits

0x23e2,	// (0x0007e454) cell_pinb_pane_g2

0xa8cd,	// (0x0008693f) cell_pinb_pane_g3_ParamLimits

0xa8cd,	// (0x0008693f) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0008b1a4) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0008b1a4) cell_pinb_pane_g

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp01

0x23ee,	// (0x0007e460) list_pinb_item_pane_ParamLimits

0x23ee,	// (0x0007e460) list_pinb_item_pane

0xa5c9,	// (0x0008663b) list_highlight_pane_cp02

0x240c,	// (0x0007e47e) list_pinb_item_pane_g1_ParamLimits

0x240c,	// (0x0007e47e) list_pinb_item_pane_g1

0x2419,	// (0x0007e48b) list_pinb_item_pane_g2_ParamLimits

0x2419,	// (0x0007e48b) list_pinb_item_pane_g2

0x2425,	// (0x0007e497) list_pinb_item_pane_g3_ParamLimits

0x2425,	// (0x0007e497) list_pinb_item_pane_g3

0x2436,	// (0x0007e4a8) list_pinb_item_pane_g4_ParamLimits

0x2436,	// (0x0007e4a8) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0008b1ab) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0008b1ab) list_pinb_item_pane_g

0x2442,	// (0x0007e4b4) list_pinb_item_pane_t1_ParamLimits

0x2442,	// (0x0007e4b4) list_pinb_item_pane_t1

0x2473,	// (0x0007e4e5) calc_display_pane

0x2491,	// (0x0007e503) calc_paper_pane

0x24ad,	// (0x0007e51f) grid_calc_pane

0xa5c9,	// (0x0008663b) bg_list_pane_cp01

0x24d9,	// (0x0007e54b) clock_g1

0x24e1,	// (0x0007e553) clock_g2

0x0001,

0xf142,	// (0x0008b1b4) clock_g

0x24eb,	// (0x0007e55d) clock_t1_ParamLimits

0x24eb,	// (0x0007e55d) clock_t1

0x2500,	// (0x0007e572) clock_t2_ParamLimits

0x2500,	// (0x0007e572) clock_t2

0x2512,	// (0x0007e584) clock_t3_ParamLimits

0x2512,	// (0x0007e584) clock_t3

0x2524,	// (0x0007e596) clock_t4_ParamLimits

0x2524,	// (0x0007e596) clock_t4

0x2536,	// (0x0007e5a8) clock_t5_ParamLimits

0x2536,	// (0x0007e5a8) clock_t5

0x254b,	// (0x0007e5bd) clock_t6_ParamLimits

0x254b,	// (0x0007e5bd) clock_t6

0x255d,	// (0x0007e5cf) clock_t7_ParamLimits

0x255d,	// (0x0007e5cf) clock_t7

0x256f,	// (0x0007e5e1) clock_t8_ParamLimits

0x256f,	// (0x0007e5e1) clock_t8

0x2585,	// (0x0007e5f7) clock_t9_ParamLimits

0x2585,	// (0x0007e5f7) clock_t9

0x0008,

0xf147,	// (0x0008b1b9) clock_t_ParamLimits

0xf147,	// (0x0008b1b9) clock_t

0xa8d9,	// (0x0008694b) popup_clock_analogue_window_cp02

0xa8d9,	// (0x0008694b) popup_clock_digital_window_cp01

0xa8e1,	// (0x00086953) listscroll_help_pane

0xa5c9,	// (0x0008663b) phob_pre_status_pane

0xa8eb,	// (0x0008695d) grid_qdial_pane

0xa824,	// (0x00086896) listscroll_mce_pane

0xa824,	// (0x00086896) bg_notes_pane

0xa8f5,	// (0x00086967) list_notes_pane

0x259b,	// (0x0007e60d) scroll_pane_cp06

0xa903,	// (0x00086975) bg_calc_paper_pane

0x25aa,	// (0x0007e61c) list_calc_pane

0xa917,	// (0x00086989) bg_calc_display_pane

0x25c4,	// (0x0007e636) calc_display_pane_t1

0x25d9,	// (0x0007e64b) calc_display_pane_t2

0x25ee,	// (0x0007e660) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0008b1cc) calc_display_pane_t

0x2600,	// (0x0007e672) cell_calc_pane_ParamLimits

0x2600,	// (0x0007e672) cell_calc_pane

0xa923,	// (0x00086995) bg_calc_paper_pane_g1

0xa92f,	// (0x000869a1) bg_calc_paper_pane_g2

0xa93b,	// (0x000869ad) bg_calc_paper_pane_g3

0xa947,	// (0x000869b9) bg_calc_paper_pane_g4

0xa953,	// (0x000869c5) bg_calc_paper_pane_g5

0x262f,	// (0x0007e6a1) bg_calc_paper_pane_g6

0x2640,	// (0x0007e6b2) bg_calc_paper_pane_g7

0x2651,	// (0x0007e6c3) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0008b1d3) bg_calc_paper_pane_g

0x2664,	// (0x0007e6d6) calc_bg_paper_pane_g9

0x2677,	// (0x0007e6e9) list_calc_item_pane_ParamLimits

0x2677,	// (0x0007e6e9) list_calc_item_pane

0xa95f,	// (0x000869d1) list_calc_item_pane_g1

0x2698,	// (0x0007e70a) list_calc_item_pane_t1_ParamLimits

0x2698,	// (0x0007e70a) list_calc_item_pane_t1

0x26aa,	// (0x0007e71c) list_calc_item_pane_t2_ParamLimits

0x26aa,	// (0x0007e71c) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0008b1e4) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0008b1e4) list_calc_item_pane_t

0xa96c,	// (0x000869de) cell_calc_pane_g1

0xa976,	// (0x000869e8) grid_highlight_pane_cp02

0xa998,	// (0x00086a0a) bg_calc_display_pane_g1

0x26da,	// (0x0007e74c) bg_calc_display_pane_g2

0xa9a1,	// (0x00086a13) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0008b1ee) bg_calc_display_pane_g

0x26e4,	// (0x0007e756) cell_qdial_pane_ParamLimits

0x26e4,	// (0x0007e756) cell_qdial_pane

0x26fa,	// (0x0007e76c) cell_qdial_pane_g1_ParamLimits

0x26fa,	// (0x0007e76c) cell_qdial_pane_g1

0x2707,	// (0x0007e779) cell_qdial_pane_g2_ParamLimits

0x2707,	// (0x0007e779) cell_qdial_pane_g2

0xa9aa,	// (0x00086a1c) cell_qdial_pane_g3_ParamLimits

0xa9aa,	// (0x00086a1c) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0008b1f5) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0008b1f5) cell_qdial_pane_g

0x2725,	// (0x0007e797) cell_qdial_pane_t1_ParamLimits

0x2725,	// (0x0007e797) cell_qdial_pane_t1

0x273d,	// (0x0007e7af) cell_qdial_pane_t2_ParamLimits

0x273d,	// (0x0007e7af) cell_qdial_pane_t2

0x2750,	// (0x0007e7c2) cell_qdial_pane_t3_ParamLimits

0x2750,	// (0x0007e7c2) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0008b1fe) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0008b1fe) cell_qdial_pane_t

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp04

0xa9b6,	// (0x00086a28) thumbnail_qdial_pane_ParamLimits

0xa9b6,	// (0x00086a28) thumbnail_qdial_pane

0xaa12,	// (0x00086a84) list_help_pane

0xaa1b,	// (0x00086a8d) scroll_pane_cp02

0x2763,	// (0x0007e7d5) help_list_pane_t1_ParamLimits

0x2763,	// (0x0007e7d5) help_list_pane_t1

0x278a,	// (0x0007e7fc) bg_notes_pane_g2

0x2792,	// (0x0007e804) bg_notes_pane_g3

0x279a,	// (0x0007e80c) notes_bg_pane_g1

0x27a2,	// (0x0007e814) notes_bg_pane_g4

0x27aa,	// (0x0007e81c) notes_bg_pane_g5

0x27b2,	// (0x0007e824) notes_bg_pane_g6

0x27ba,	// (0x0007e82c) notes_bg_pane_g7

0x27c2,	// (0x0007e834) notes_bg_pane_g8

0x27ca,	// (0x0007e83c) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0008b21c) notes_bg_pane_g

0x27d2,	// (0x0007e844) list_notes_text_pane_ParamLimits

0x27d2,	// (0x0007e844) list_notes_text_pane

0xaa24,	// (0x00086a96) list_notes_text_pane_g1

0x0de4,	// (0x0007ce56) list_notes_text_pane_t1

0x27fa,	// (0x0007e86c) listscroll_cale_week_pane

0x2832,	// (0x0007e8a4) bg_cale_heading_pane

0xaa3e,	// (0x00086ab0) bg_cale_pane_cp01

0x285b,	// (0x0007e8cd) cale_week_corner_pane

0x287a,	// (0x0007e8ec) cale_week_day_heading_pane

0x28a8,	// (0x0007e91a) cale_week_scroll_pane_g1

0x28cc,	// (0x0007e93e) cale_week_scroll_pane_g2

0x28e4,	// (0x0007e956) cale_week_scroll_pane_g3

0x28fc,	// (0x0007e96e) cale_week_scroll_pane_g4

0x2914,	// (0x0007e986) cale_week_scroll_pane_g5

0x292c,	// (0x0007e99e) cale_week_scroll_pane_g6

0x2948,	// (0x0007e9ba) cale_week_scroll_pane_g7

0x2964,	// (0x0007e9d6) cale_week_scroll_pane_g8

0x2980,	// (0x0007e9f2) cale_week_scroll_pane_g9

0x299d,	// (0x0007ea0f) cale_week_scroll_pane_g10

0x29ba,	// (0x0007ea2c) cale_week_scroll_pane_g11

0x29d7,	// (0x0007ea49) cale_week_scroll_pane_g12

0x29f4,	// (0x0007ea66) cale_week_scroll_pane_g13

0x2a11,	// (0x0007ea83) cale_week_scroll_pane_g14

0x2a3a,	// (0x0007eaac) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0008b22b) cale_week_scroll_pane_g

0x2a63,	// (0x0007ead5) cale_week_time_pane

0x2a7f,	// (0x0007eaf1) grid_cale_week_pane

0xaa6e,	// (0x00086ae0) scroll_pane_cp08

0x2aae,	// (0x0007eb20) cell_cale_week_pane_ParamLimits

0x2aae,	// (0x0007eb20) cell_cale_week_pane

0x2b2e,	// (0x0007eba0) cale_week_day_heading_pane_t1

0x2b74,	// (0x0007ebe6) cale_week_day_heading_pane_t2

0x2bbf,	// (0x0007ec31) cale_week_day_heading_pane_t3

0x2c0a,	// (0x0007ec7c) cale_week_day_heading_pane_t4

0x2c55,	// (0x0007ecc7) cale_week_day_heading_pane_t5

0x2ca0,	// (0x0007ed12) cale_week_day_heading_pane_t6

0x2ceb,	// (0x0007ed5d) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0008b24a) cale_week_day_heading_pane_t

0xaa90,	// (0x00086b02) bg_cale_side_pane

0x2d31,	// (0x0007eda3) cale_week_time_pane_t1

0x2d75,	// (0x0007ede7) cale_week_time_pane_t2

0x2db9,	// (0x0007ee2b) cale_week_time_pane_t3

0x2dfd,	// (0x0007ee6f) cale_week_time_pane_t4

0x2e41,	// (0x0007eeb3) cale_week_time_pane_t5

0x2e85,	// (0x0007eef7) cale_week_time_pane_t6

0x2ec9,	// (0x0007ef3b) cale_week_time_pane_t7

0x2f0d,	// (0x0007ef7f) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0008b259) cale_week_time_pane_t

0x2f57,	// (0x0007efc9) cell_cale_week_pane_g2

0x2f7b,	// (0x0007efed) cell_cale_week_pane_g3_ParamLimits

0x2f7b,	// (0x0007efed) cell_cale_week_pane_g3

0xaa9e,	// (0x00086b10) grid_highlight_pane_cp07

0xaaa6,	// (0x00086b18) listscroll_gms_pane

0xaab0,	// (0x00086b22) grid_gms_pane

0xaab9,	// (0x00086b2b) listscroll_gms_pane_g1

0xaac1,	// (0x00086b33) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0008b26a) listscroll_gms_pane_g

0x2f93,	// (0x0007f005) scroll_pane_cp010

0x2f9e,	// (0x0007f010) cell_gms_pane_ParamLimits

0x2f9e,	// (0x0007f010) cell_gms_pane

0x2fb1,	// (0x0007f023) cell_gms_pane_g1

0xaac9,	// (0x00086b3b) cell_gms_pane_g2

0xaad1,	// (0x00086b43) cell_gms_pane_g3

0xaada,	// (0x00086b4c) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0008b26f) cell_gms_pane_g

0xaae3,	// (0x00086b55) grid_highlight_pane_cp09

0x53d0,	// (0x00081442) phob_pre_status_pane_g1

0x53d8,	// (0x0008144a) phob_pre_status_pane_g2

0x53e0,	// (0x00081452) phob_pre_status_pane_g3

0x53e8,	// (0x0008145a) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0008b65e) phob_pre_status_pane_g

0x53f8,	// (0x0008146a) phob_pre_status_pane_t1

0x5408,	// (0x0008147a) phob_pre_status_pane_t2

0x5418,	// (0x0008148a) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0008b669) phob_pre_status_pane_t

0xa5c9,	// (0x0008663b) bg_list_pane_cp05

0x2fc1,	// (0x0007f033) grid_vorec_pane

0x2fcd,	// (0x0007f03f) vorec_t1

0x2fdb,	// (0x0007f04d) vorec_t2

0x2fe9,	// (0x0007f05b) vorec_t3

0x2ff7,	// (0x0007f069) vorec_t4

0x3005,	// (0x0007f077) vorec_t5

0x3013,	// (0x0007f085) vorec_t6

0x0006,

0xf206,	// (0x0008b278) vorec_t

0x302f,	// (0x0007f0a1) wait_bar_pane_cp01

0x3037,	// (0x0007f0a9) cell_vorec_pane_ParamLimits

0x3037,	// (0x0007f0a9) cell_vorec_pane

0xaaeb,	// (0x00086b5d) cell_vorec_pane_g1

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp05

0x305a,	// (0x0007f0cc) cams_zoom_pane

0x3066,	// (0x0007f0d8) image_vga_pane

0x3075,	// (0x0007f0e7) main_camera_pane_g1

0x3083,	// (0x0007f0f5) main_camera_pane_g2

0x308f,	// (0x0007f101) main_camera_pane_g3

0x309d,	// (0x0007f10f) main_camera_pane_g4

0x30ab,	// (0x0007f11d) main_camera_pane_g5

0x30b9,	// (0x0007f12b) main_camera_pane_g6

0x30c7,	// (0x0007f139) main_camera_pane_g7

0x0007,

0xf215,	// (0x0008b287) main_camera_pane_g

0x30d5,	// (0x0007f147) main_camera_pane_t1

0x30e7,	// (0x0007f159) main_camera_pane_t2

0x0001,

0xf226,	// (0x0008b298) main_camera_pane_t

0x310a,	// (0x0007f17c) cams_zoom_pane_cp_ParamLimits

0x310a,	// (0x0007f17c) cams_zoom_pane_cp

0x312e,	// (0x0007f1a0) image_cif_pane_ParamLimits

0x312e,	// (0x0007f1a0) image_cif_pane

0x314c,	// (0x0007f1be) image_subqcif_pane

0x3156,	// (0x0007f1c8) main_video_pane_g1_ParamLimits

0x3156,	// (0x0007f1c8) main_video_pane_g1

0x3176,	// (0x0007f1e8) main_video_pane_g2_ParamLimits

0x3176,	// (0x0007f1e8) main_video_pane_g2

0x31a6,	// (0x0007f218) main_video_pane_g3_ParamLimits

0x31a6,	// (0x0007f218) main_video_pane_g3

0x31cf,	// (0x0007f241) main_video_pane_g4_ParamLimits

0x31cf,	// (0x0007f241) main_video_pane_g4

0x31f8,	// (0x0007f26a) main_video_pane_g5_ParamLimits

0x31f8,	// (0x0007f26a) main_video_pane_g5

0xab01,	// (0x00086b73) main_video_pane_g6_ParamLimits

0xab01,	// (0x00086b73) main_video_pane_g6

0x0006,

0xf22b,	// (0x0008b29d) main_video_pane_g_ParamLimits

0xf22b,	// (0x0008b29d) main_video_pane_g

0x321a,	// (0x0007f28c) main_video_pane_t1_ParamLimits

0x321a,	// (0x0007f28c) main_video_pane_t1

0xab1b,	// (0x00086b8d) cams_zoom_pane_g1

0xab24,	// (0x00086b96) cams_zoom_pane_g2

0xab2d,	// (0x00086b9f) cams_zoom_pane_g3

0xab36,	// (0x00086ba8) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0008b2ac) cams_zoom_pane_g

0x3264,	// (0x0007f2d6) grid_cams_pane

0x3272,	// (0x0007f2e4) linegrid_cams_pane

0x327e,	// (0x0007f2f0) cell_cams_pane_ParamLimits

0x327e,	// (0x0007f2f0) cell_cams_pane

0xab3f,	// (0x00086bb1) cams_burst_image_pane

0xab47,	// (0x00086bb9) cell_cams_pane_g1

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp03

0xa96c,	// (0x000869de) mp_bg_pane_g1

0xa5c9,	// (0x0008663b) bg_list_pane_cp03

0xc760,	// (0x000887d2) bg_mp_pane

0xc768,	// (0x000887da) grid_mp_pane

0xc770,	// (0x000887e2) media_player_g1

0xc77a,	// (0x000887ec) media_player_t1

0xc788,	// (0x000887fa) media_player_t2

0xc796,	// (0x00088808) media_player_t3

0xc7a4,	// (0x00088816) media_player_t4

0xc7b2,	// (0x00088824) media_player_t5

0xc7c0,	// (0x00088832) media_player_t6

0xc7ce,	// (0x00088840) media_player_t7

0x0006,

0xf5d6,	// (0x0008b648) media_player_t

0xc7dc,	// (0x0008884e) wait_bar_pane_cp02

0xf5bb,	// (0x0008b62d) main_usb_pane_t

0x53c7,	// (0x00081439) cell_mp_pane

0xa96c,	// (0x000869de) cell_mp_pane_g1

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp06

0xab4f,	// (0x00086bc1) grid_skin_colour_pane

0xab57,	// (0x00086bc9) list_highlight_pane_cp03

0x32ab,	// (0x0007f31d) skin_g1

0xab5f,	// (0x00086bd1) skin_t1

0xab77,	// (0x00086be9) skin_t2

0x0001,

0xf26f,	// (0x0008b2e1) skin_t

0x32b5,	// (0x0007f327) cell_skin_colour_pane_ParamLimits

0x32b5,	// (0x0007f327) cell_skin_colour_pane

0xab85,	// (0x00086bf7) cell_skin_colour_pane_g1

0x3335,	// (0x0007f3a7) call_video_g1_ParamLimits

0x3335,	// (0x0007f3a7) call_video_g1

0x3345,	// (0x0007f3b7) call_video_g2_ParamLimits

0x3345,	// (0x0007f3b7) call_video_g2

0x0001,

0xf274,	// (0x0008b2e6) call_video_g_ParamLimits

0xf274,	// (0x0008b2e6) call_video_g

0x3395,	// (0x0007f407) call_video_uplink_pane_cp1_ParamLimits

0x3395,	// (0x0007f407) call_video_uplink_pane_cp1

0xab97,	// (0x00086c09) call_video_uplink_pane_cp2

0x3463,	// (0x0007f4d5) video_down_crop_pane_ParamLimits

0x3463,	// (0x0007f4d5) video_down_crop_pane

0x3555,	// (0x0007f5c7) video_down_pane_ParamLimits

0x3555,	// (0x0007f5c7) video_down_pane

0xab9f,	// (0x00086c11) video_down_subqcif_pane_ParamLimits

0xab9f,	// (0x00086c11) video_down_subqcif_pane

0xabb9,	// (0x00086c2b) video_down_subqcif_pane_cp_ParamLimits

0xabb9,	// (0x00086c2b) video_down_subqcif_pane_cp

0xabe1,	// (0x00086c53) im_reading_pane_ParamLimits

0xabe1,	// (0x00086c53) im_reading_pane

0x3672,	// (0x0007f6e4) im_writing_pane_ParamLimits

0x3672,	// (0x0007f6e4) im_writing_pane

0x3690,	// (0x0007f702) im_reading_pane_t1

0xabfb,	// (0x00086c6d) list_im_pane

0xac0c,	// (0x00086c7e) scroll_pane_cp07

0x36d2,	// (0x0007f744) im_writing_pane_t1_ParamLimits

0x36d2,	// (0x0007f744) im_writing_pane_t1

0xac25,	// (0x00086c97) im_writing_pane_t2_ParamLimits

0xac25,	// (0x00086c97) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0008b2f0) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0008b2f0) im_writing_pane_t

0xa5c9,	// (0x0008663b) input_focus_pane_cp04

0xa5c9,	// (0x0008663b) input_focus_pane_cp05

0x36e4,	// (0x0007f756) list_im_single_pane_ParamLimits

0x36e4,	// (0x0007f756) list_im_single_pane

0x36fd,	// (0x0007f76f) list_single_im_pane_t1

0x538b,	// (0x000813fd) blid_accuracy_pane

0x5393,	// (0x00081405) blid_compass_pane

0x539d,	// (0x0008140f) main_location_t1

0x53ab,	// (0x0008141d) main_location_t2

0x53b9,	// (0x0008142b) main_location_t3

0x0002,

0xf5e5,	// (0x0008b657) main_location_t

0xa5c9,	// (0x0008663b) aid_levels_location

0xa96c,	// (0x000869de) blid_accuracy_pane_g1

0xa96c,	// (0x000869de) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0008b352) blid_accuracy_pane_g

0xac6d,	// (0x00086cdf) wml_content_pane

0xacab,	// (0x00086d1d) wml_button_pane_ParamLimits

0xacab,	// (0x00086d1d) wml_button_pane

0x370c,	// (0x0007f77e) wml_list_single_large_pane_ParamLimits

0x370c,	// (0x0007f77e) wml_list_single_large_pane

0x372e,	// (0x0007f7a0) wml_list_single_medium_pane_ParamLimits

0x372e,	// (0x0007f7a0) wml_list_single_medium_pane

0x3751,	// (0x0007f7c3) wml_list_single_small_pane_ParamLimits

0x3751,	// (0x0007f7c3) wml_list_single_small_pane

0xacbf,	// (0x00086d31) wml_selection_box_pane_ParamLimits

0xacbf,	// (0x00086d31) wml_selection_box_pane

0xacd2,	// (0x00086d44) wml_list_single_pane_t1

0xace1,	// (0x00086d53) wml_list_single_medium_pane_t1

0xacf0,	// (0x00086d62) wml_list_single_large_pane_t1

0xacff,	// (0x00086d71) input_focus_pane_cp02_ParamLimits

0xacff,	// (0x00086d71) input_focus_pane_cp02

0xad12,	// (0x00086d84) wml_selection_box_pane_g1

0xad1b,	// (0x00086d8d) wml_selection_box_pane_t1_ParamLimits

0xad1b,	// (0x00086d8d) wml_selection_box_pane_t1

0xa824,	// (0x00086896) bg_wml_button_pane_ParamLimits

0xa824,	// (0x00086896) bg_wml_button_pane

0xad33,	// (0x00086da5) wml_button_pane_g1

0xad3b,	// (0x00086dad) wml_button_pane_t1

0xad33,	// (0x00086da5) wml_button_bg_pane_g1

0xad4b,	// (0x00086dbd) wml_button_bg_pane_g2

0xad53,	// (0x00086dc5) wml_button_bg_pane_g3

0xad5b,	// (0x00086dcd) wml_button_bg_pane_g4

0xad63,	// (0x00086dd5) wml_button_bg_pane_g5

0xad6b,	// (0x00086ddd) wml_button_bg_pane_g6

0xad73,	// (0x00086de5) wml_button_bg_pane_g7

0xad7b,	// (0x00086ded) wml_button_bg_pane_g8

0xad83,	// (0x00086df5) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0008b2f5) wml_button_bg_pane_g

0x3779,	// (0x0007f7eb) bg_list_pane_cp02

0xad8b,	// (0x00086dfd) mce_header_pane_ParamLimits

0xad8b,	// (0x00086dfd) mce_header_pane

0xada1,	// (0x00086e13) mce_icon_pane

0xada1,	// (0x00086e13) mce_image_pane

0xadaa,	// (0x00086e1c) mce_text_pane_ParamLimits

0xadaa,	// (0x00086e1c) mce_text_pane

0x3783,	// (0x0007f7f5) scroll_pane_cp03

0xaca3,	// (0x00086d15) scroll_pane_cp04

0xadbd,	// (0x00086e2f) scroll_pane_cp05_ParamLimits

0xadbd,	// (0x00086e2f) scroll_pane_cp05

0x378d,	// (0x0007f7ff) mce_header_field_pane_ParamLimits

0x378d,	// (0x0007f7ff) mce_header_field_pane

0x37af,	// (0x0007f821) mce_header_field_pane_2_ParamLimits

0x37af,	// (0x0007f821) mce_header_field_pane_2

0x37c5,	// (0x0007f837) mce_header_field_pane_3

0x37cd,	// (0x0007f83f) list_single_mce_message_pane_ParamLimits

0x37cd,	// (0x0007f83f) list_single_mce_message_pane

0x37ec,	// (0x0007f85e) list_single_mce_smart_pane_ParamLimits

0x37ec,	// (0x0007f85e) list_single_mce_smart_pane

0xadc9,	// (0x00086e3b) input_focus_pane_cp03

0xadd2,	// (0x00086e44) list_header_data_pane

0x3816,	// (0x0007f888) mce_header_field_pane_t1

0x3826,	// (0x0007f898) list_single_mce_header_pane_ParamLimits

0x3826,	// (0x0007f898) list_single_mce_header_pane

0xadda,	// (0x00086e4c) list_single_mce_header_pane_t1

0xade9,	// (0x00086e5b) list_single_mce_message_pane_g1

0xadf1,	// (0x00086e63) list_single_mce_message_pane_t1

0x386a,	// (0x0007f8dc) bg_cale_heading_pane_cp01_ParamLimits

0x386a,	// (0x0007f8dc) bg_cale_heading_pane_cp01

0xadff,	// (0x00086e71) bg_cale_pane_cp02_ParamLimits

0xadff,	// (0x00086e71) bg_cale_pane_cp02

0x38b1,	// (0x0007f923) cale_month_corner_pane

0x38d0,	// (0x0007f942) cale_month_day_heading_pane_ParamLimits

0x38d0,	// (0x0007f942) cale_month_day_heading_pane

0x391f,	// (0x0007f991) cale_month_pane_g1_ParamLimits

0x391f,	// (0x0007f991) cale_month_pane_g1

0x395b,	// (0x0007f9cd) cale_month_pane_g2_ParamLimits

0x395b,	// (0x0007f9cd) cale_month_pane_g2

0x398f,	// (0x0007fa01) cale_month_pane_g3_ParamLimits

0x398f,	// (0x0007fa01) cale_month_pane_g3

0x39e3,	// (0x0007fa55) cale_month_pane_g4_ParamLimits

0x39e3,	// (0x0007fa55) cale_month_pane_g4

0x3a37,	// (0x0007faa9) cale_month_pane_g5_ParamLimits

0x3a37,	// (0x0007faa9) cale_month_pane_g5

0x3a8b,	// (0x0007fafd) cale_month_pane_g6_ParamLimits

0x3a8b,	// (0x0007fafd) cale_month_pane_g6

0x3ae7,	// (0x0007fb59) cale_month_pane_g7_ParamLimits

0x3ae7,	// (0x0007fb59) cale_month_pane_g7

0x3b43,	// (0x0007fbb5) cale_month_pane_g8_ParamLimits

0x3b43,	// (0x0007fbb5) cale_month_pane_g8

0x3b9f,	// (0x0007fc11) cale_month_pane_g9_ParamLimits

0x3b9f,	// (0x0007fc11) cale_month_pane_g9

0x3bef,	// (0x0007fc61) cale_month_pane_g10_ParamLimits

0x3bef,	// (0x0007fc61) cale_month_pane_g10

0x3c35,	// (0x0007fca7) cale_month_pane_g11_ParamLimits

0x3c35,	// (0x0007fca7) cale_month_pane_g11

0x3c79,	// (0x0007fceb) cale_month_pane_g12_ParamLimits

0x3c79,	// (0x0007fceb) cale_month_pane_g12

0x3cc1,	// (0x0007fd33) cale_month_pane_g13_ParamLimits

0x3cc1,	// (0x0007fd33) cale_month_pane_g13

0x000c,

0xf296,	// (0x0008b308) cale_month_pane_g_ParamLimits

0xf296,	// (0x0008b308) cale_month_pane_g

0x3d09,	// (0x0007fd7b) cale_month_week_pane

0x3d25,	// (0x0007fd97) grid_cale_month_pane_ParamLimits

0x3d25,	// (0x0007fd97) grid_cale_month_pane

0x3d6b,	// (0x0007fddd) cale_month_day_heading_pane_t1

0x3de9,	// (0x0007fe5b) cale_month_day_heading_pane_t2

0x3e72,	// (0x0007fee4) cale_month_day_heading_pane_t3

0x3efb,	// (0x0007ff6d) cale_month_day_heading_pane_t4

0x3f84,	// (0x0007fff6) cale_month_day_heading_pane_t5

0x4011,	// (0x00080083) cale_month_day_heading_pane_t6

0x40a2,	// (0x00080114) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0008b323) cale_month_day_heading_pane_t

0xaa90,	// (0x00086b02) bg_cale_side_pane_cp01

0x4133,	// (0x000801a5) cale_month_week_pane_t1

0x414c,	// (0x000801be) cale_month_week_pane_t2

0x4165,	// (0x000801d7) cale_month_week_pane_t3

0x417e,	// (0x000801f0) cale_month_week_pane_t4

0x4197,	// (0x00080209) cale_month_week_pane_t5

0x41b2,	// (0x00080224) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0008b332) cale_month_week_pane_t

0x41d3,	// (0x00080245) cell_cale_month_pane_ParamLimits

0x41d3,	// (0x00080245) cell_cale_month_pane

0x42e1,	// (0x00080353) cell_cale_month_pane_g1

0x42ed,	// (0x0008035f) cell_cale_month_pane_t1_ParamLimits

0x42ed,	// (0x0008035f) cell_cale_month_pane_t1

0xaa9e,	// (0x00086b10) grid_highlight_pane_cp08

0xa96c,	// (0x000869de) main_smil_g1

0x430d,	// (0x0008037f) smil_status_pane

0xae3e,	// (0x00086eb0) smil_text_pane

0xc67e,	// (0x000886f0) bg_popup_call3_rect_pane_g8

0xc686,	// (0x000886f8) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0008b5eb) bg_popup_call3_rect_pane_g

0xc914,	// (0x00088986) smil_status_volume_pane_g1

0x4320,	// (0x00080392) smil_status_pane_t1

0x577f,	// (0x000817f1) volume_smil_pane

0xae48,	// (0x00086eba) list_smil_text_pane

0x4337,	// (0x000803a9) scroll_pane_cp011

0x4342,	// (0x000803b4) smil_text_list_pane_t1_ParamLimits

0x4342,	// (0x000803b4) smil_text_list_pane_t1

0x4394,	// (0x00080406) aid_volume_smil_ParamLimits

0x4394,	// (0x00080406) aid_volume_smil

0xa96c,	// (0x000869de) smil_volume_pane_g1

0xa96c,	// (0x000869de) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0008b352) smil_volume_pane_g

0x27fa,	// (0x0007e86c) listscroll_cale_day_pane

0xae52,	// (0x00086ec4) bg_cale_pane

0xae6a,	// (0x00086edc) list_cale_pane

0xae8d,	// (0x00086eff) scroll_pane_cp09

0xae9e,	// (0x00086f10) cale_bg_pane_g1

0xaea6,	// (0x00086f18) cale_bg_pane_g2

0xaeae,	// (0x00086f20) cale_bg_pane_g3

0xaeb6,	// (0x00086f28) cale_bg_pane_g4

0xaebe,	// (0x00086f30) cale_bg_pane_g5

0xaec6,	// (0x00086f38) cale_bg_pane_g6

0xaece,	// (0x00086f40) cale_bg_pane_g7

0xaed6,	// (0x00086f48) cale_bg_pane_g8

0xaede,	// (0x00086f50) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0008b357) cale_bg_pane_g

0x43b6,	// (0x00080428) list_cale_time_pane_ParamLimits

0x43b6,	// (0x00080428) list_cale_time_pane

0xaee6,	// (0x00086f58) list_cale_time_pane_g1_ParamLimits

0xaee6,	// (0x00086f58) list_cale_time_pane_g1

0xaef2,	// (0x00086f64) list_cale_time_pane_g2_ParamLimits

0xaef2,	// (0x00086f64) list_cale_time_pane_g2

0x43cb,	// (0x0008043d) list_cale_time_pane_g3_ParamLimits

0x43cb,	// (0x0008043d) list_cale_time_pane_g3

0x43d9,	// (0x0008044b) list_cale_time_pane_g4_ParamLimits

0x43d9,	// (0x0008044b) list_cale_time_pane_g4

0x43e7,	// (0x00080459) list_cale_time_pane_g5_ParamLimits

0x43e7,	// (0x00080459) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0008b36a) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0008b36a) list_cale_time_pane_g

0xaf0c,	// (0x00086f7e) list_cale_time_pane_t1_ParamLimits

0xaf0c,	// (0x00086f7e) list_cale_time_pane_t1

0xaf34,	// (0x00086fa6) list_cale_time_pane_t2_ParamLimits

0xaf34,	// (0x00086fa6) list_cale_time_pane_t2

0x46df,	// (0x00080751) aid_blid_cardinal_pane

0x4721,	// (0x00080793) compass_pane_t4

0xaf5c,	// (0x00086fce) list_cale_time_pane_t4_ParamLimits

0xaf5c,	// (0x00086fce) list_cale_time_pane_t4

0x472f,	// (0x000807a1) compass_pane_t5

0x473f,	// (0x000807b1) compass_pane_t6

0x474d,	// (0x000807bf) compass_pane_t7

0xb399,	// (0x0008740b) navi_pane_cc_t1

0xb4ee,	// (0x00087560) aid_phob_thumbnail_center_pane

0x4e87,	// (0x00080ef9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0008b377) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0008b377) list_cale_time_pane_t

0xa220,	// (0x00086292) bg_popup_window_pane_cp02_ParamLimits

0xa220,	// (0x00086292) bg_popup_window_pane_cp02

0xaf84,	// (0x00086ff6) heading_pane_cp01_ParamLimits

0xaf84,	// (0x00086ff6) heading_pane_cp01

0xaf90,	// (0x00087002) loc_req_pane_ParamLimits

0xaf90,	// (0x00087002) loc_req_pane

0xafa0,	// (0x00087012) loc_type_pane_ParamLimits

0xafa0,	// (0x00087012) loc_type_pane

0xafb2,	// (0x00087024) loc_type_pane_t1_ParamLimits

0xafb2,	// (0x00087024) loc_type_pane_t1

0xafc4,	// (0x00087036) loc_type_pane_t2_ParamLimits

0xafc4,	// (0x00087036) loc_type_pane_t2

0xafd6,	// (0x00087048) loc_type_pane_t3_ParamLimits

0xafd6,	// (0x00087048) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0008b37e) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0008b37e) loc_type_pane_t

0xafe8,	// (0x0008705a) list_loc_req_pane

0xaff2,	// (0x00087064) scroll_pane_cp012

0x43f5,	// (0x00080467) list_single_loc_request_popup_menu_pane_ParamLimits

0x43f5,	// (0x00080467) list_single_loc_request_popup_menu_pane

0xaffd,	// (0x0008706f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaffd,	// (0x0008706f) list_single_loc_request_popup_menu_pane_g1

0xb009,	// (0x0008707b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb009,	// (0x0008707b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0008b385) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0008b385) list_single_loc_request_popup_menu_pane_g

0xb015,	// (0x00087087) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb015,	// (0x00087087) list_single_loc_request_popup_menu_pane_t1

0x4407,	// (0x00080479) bg_popup_window_pane_cp03_ParamLimits

0x4407,	// (0x00080479) bg_popup_window_pane_cp03

0x4415,	// (0x00080487) heading_loc_req_pane_ParamLimits

0x4415,	// (0x00080487) heading_loc_req_pane

0x4421,	// (0x00080493) popup_dyc_status_message_window_g1_ParamLimits

0x4421,	// (0x00080493) popup_dyc_status_message_window_g1

0x442d,	// (0x0008049f) popup_dyc_status_message_window_t1_ParamLimits

0x442d,	// (0x0008049f) popup_dyc_status_message_window_t1

0x443f,	// (0x000804b1) popup_dyc_status_message_window_t2_ParamLimits

0x443f,	// (0x000804b1) popup_dyc_status_message_window_t2

0x4451,	// (0x000804c3) popup_dyc_status_message_window_t3_ParamLimits

0x4451,	// (0x000804c3) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0008b38a) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0008b38a) popup_dyc_status_message_window_t

0xa5c9,	// (0x0008663b) bg_heading_pane_cp01

0xb02b,	// (0x0008709d) heading_loc_req_pane_g1

0xb033,	// (0x000870a5) heading_loc_req_pane_g2

0xb03b,	// (0x000870ad) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0008b391) heading_loc_req_pane_g

0xb043,	// (0x000870b5) heading_loc_req_pane_t1

0xb053,	// (0x000870c5) bg_popup_sub_pane_cp01_ParamLimits

0xb053,	// (0x000870c5) bg_popup_sub_pane_cp01

0xb061,	// (0x000870d3) popup_cale_events_window_g1_ParamLimits

0xb061,	// (0x000870d3) popup_cale_events_window_g1

0xb081,	// (0x000870f3) popup_cale_events_window_g2_ParamLimits

0xb081,	// (0x000870f3) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0008b3c5) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0008b3c5) popup_cale_events_window_g

0xb0a1,	// (0x00087113) popup_cale_events_window_t1_ParamLimits

0xb0a1,	// (0x00087113) popup_cale_events_window_t1

0xb0d4,	// (0x00087146) popup_cale_events_window_t2_ParamLimits

0xb0d4,	// (0x00087146) popup_cale_events_window_t2

0xb112,	// (0x00087184) popup_cale_events_window_t3_ParamLimits

0xb112,	// (0x00087184) popup_cale_events_window_t3

0xb14c,	// (0x000871be) popup_cale_events_window_t4_ParamLimits

0xb14c,	// (0x000871be) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0008b3ca) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0008b3ca) popup_cale_events_window_t

0x447b,	// (0x000804ed) call_type_pane

0xb37a,	// (0x000873ec) popup_call_status_window_g1

0x4487,	// (0x000804f9) popup_call_status_window_g2

0x4493,	// (0x00080505) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0008b3d3) popup_call_status_window_g

0xb182,	// (0x000871f4) call_type_pane_g1

0xb18b,	// (0x000871fd) call_type_pane_g2

0x0001,

0xf368,	// (0x0008b3da) call_type_pane_g

0xa5c9,	// (0x0008663b) bg_popup_sub_pane_cp02

0xb194,	// (0x00087206) listscroll_popup_wml_pane

0xb19c,	// (0x0008720e) list_wml_pane

0xb1a6,	// (0x00087218) scroll_pane_cp013

0xb1b1,	// (0x00087223) list_single_graphic_popup_wml_pane_ParamLimits

0xb1b1,	// (0x00087223) list_single_graphic_popup_wml_pane

0xa96c,	// (0x000869de) list_single_graphic_popup_wml_pane_g1

0xb1c5,	// (0x00087237) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0008b3df) list_single_graphic_popup_wml_pane_g

0xb1cd,	// (0x0008723f) list_single_graphic_popup_wml_pane_t1

0xb1e3,	// (0x00087255) aid_call_pane

0xa81c,	// (0x0008688e) popup_clock_analogue_window_g1

0xa81c,	// (0x0008688e) popup_clock_analogue_window_g2

0x449f,	// (0x00080511) popup_clock_analogue_window_g3

0x449f,	// (0x00080511) popup_clock_analogue_window_g4

0xa96c,	// (0x000869de) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0008b3e4) popup_clock_analogue_window_g

0x44a7,	// (0x00080519) popup_clock_analogue_window_t1

0x44b5,	// (0x00080527) clock_digital_number_pane_ParamLimits

0x44b5,	// (0x00080527) clock_digital_number_pane

0x44c1,	// (0x00080533) clock_digital_number_pane_cp02_ParamLimits

0x44c1,	// (0x00080533) clock_digital_number_pane_cp02

0x44cd,	// (0x0008053f) clock_digital_number_pane_cp03_ParamLimits

0x44cd,	// (0x0008053f) clock_digital_number_pane_cp03

0x44d9,	// (0x0008054b) clock_digital_number_pane_cp04_ParamLimits

0x44d9,	// (0x0008054b) clock_digital_number_pane_cp04

0x44e5,	// (0x00080557) clock_digital_separator_pane_ParamLimits

0x44e5,	// (0x00080557) clock_digital_separator_pane

0x44f1,	// (0x00080563) popup_clock_digital_window_t1

0xa96c,	// (0x000869de) clock_digital_number_pane_g1

0xa96c,	// (0x000869de) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0008b352) clock_digital_number_pane_g

0xa96c,	// (0x000869de) clock_digital_separator_pane_g1

0xa96c,	// (0x000869de) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0008b352) clock_digital_separator_pane_g

0xa5c9,	// (0x0008663b) bg_popup_window_pane_cp04

0xb1eb,	// (0x0008725d) heading_pane_cp03

0xb1f3,	// (0x00087265) listscroll_popup_gms_pane

0xb1fb,	// (0x0008726d) grid_large_graphic_popup_pane

0xb205,	// (0x00087277) listscroll_popup_gms_pane_g1

0xb20d,	// (0x0008727f) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0008b3ef) listscroll_popup_gms_pane_g

0xaca3,	// (0x00086d15) scroll_pane_cp014

0x450e,	// (0x00080580) cell_large_graphic_popup_pane_ParamLimits

0x450e,	// (0x00080580) cell_large_graphic_popup_pane

0x4528,	// (0x0008059a) cell_large_graphic_popup_pane_g1_ParamLimits

0x4528,	// (0x0008059a) cell_large_graphic_popup_pane_g1

0xb215,	// (0x00087287) cell_large_graphic_popup_pane_g2_ParamLimits

0xb215,	// (0x00087287) cell_large_graphic_popup_pane_g2

0xb221,	// (0x00087293) cell_large_graphic_popup_pane_g3_ParamLimits

0xb221,	// (0x00087293) cell_large_graphic_popup_pane_g3

0xb22e,	// (0x000872a0) cell_large_graphic_popup_pane_g4_ParamLimits

0xb22e,	// (0x000872a0) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0008b3f4) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0008b3f4) cell_large_graphic_popup_pane_g

0xb23e,	// (0x000872b0) grid_highlight_pane_cp010

0xa96c,	// (0x000869de) bg_popup_call_pane_g1

0xb248,	// (0x000872ba) list_single_graphic_popup_conf_pane_ParamLimits

0xb248,	// (0x000872ba) list_single_graphic_popup_conf_pane

0xb25a,	// (0x000872cc) list_highlight_pane_cp01

0xb263,	// (0x000872d5) list_single_graphic_popup_conf_pane_g1

0xb26b,	// (0x000872dd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0008b3fd) list_single_graphic_popup_conf_pane_g

0xb273,	// (0x000872e5) list_single_graphic_popup_conf_pane_t1

0xb281,	// (0x000872f3) linegrid_cams_pane_g1

0x4534,	// (0x000805a6) linegrid_cams_pane_g2

0xaad1,	// (0x00086b43) linegrid_cams_pane_g3

0xb28a,	// (0x000872fc) linegrid_cams_pane_g4

0x453d,	// (0x000805af) linegrid_cams_pane_g5

0x4546,	// (0x000805b8) linegrid_cams_pane_g6

0xaada,	// (0x00086b4c) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0008b402) linegrid_cams_pane_g

0xb293,	// (0x00087305) popup_clock_analogue_window

0xb293,	// (0x00087305) popup_clock_digital_window

0xa5c9,	// (0x0008663b) popup_phob_thumbnail_window

0xa96c,	// (0x000869de) call_video_uplink_pane_g1

0xb29c,	// (0x0008730e) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0008b411) call_video_uplink_pane_g

0xb2a4,	// (0x00087316) video_uplink_pane

0xb2ac,	// (0x0008731e) mce_image_pane_g1

0x4551,	// (0x000805c3) mce_image_pane_g2

0x455b,	// (0x000805cd) mce_image_pane_g3

0x4565,	// (0x000805d7) mce_image_pane_g4

0x456d,	// (0x000805df) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0008b416) mce_image_pane_g

0xb2b6,	// (0x00087328) control_top_pane_stacon_cp01_ParamLimits

0xb2b6,	// (0x00087328) control_top_pane_stacon_cp01

0xb2ca,	// (0x0008733c) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2ca,	// (0x0008733c) uni_indicator_pane_stacon_cp01

0xb2db,	// (0x0008734d) bg_popup_sub_pane_cp03

0x4575,	// (0x000805e7) chi_dic_find_pane

0x457d,	// (0x000805ef) listscroll_chi_dic_pane

0x4586,	// (0x000805f8) main_pane_chidic_g1

0x4599,	// (0x0008060b) chi_dic_find_pane_t1

0xb2e5,	// (0x00087357) find_chidic_pane

0xb2ee,	// (0x00087360) chi_dic_list_pane_ParamLimits

0xb2ee,	// (0x00087360) chi_dic_list_pane

0xb2ff,	// (0x00087371) scroll_pane_cp020

0x45a7,	// (0x00080619) find_chidic_pane_t1

0xa5c9,	// (0x0008663b) input_focus_pane_cp06

0x45b6,	// (0x00080628) list_chi_dic_pane_ParamLimits

0x45b6,	// (0x00080628) list_chi_dic_pane

0x45cb,	// (0x0008063d) list_chi_dic_pane_t1_ParamLimits

0x45cb,	// (0x0008063d) list_chi_dic_pane_t1

0xa5c9,	// (0x0008663b) list_highlight_pane_cp020

0xb307,	// (0x00087379) bg_cale_heading_pane_g1

0x45de,	// (0x00080650) bg_cale_heading_pane_g2

0x45e6,	// (0x00080658) bg_cale_heading_pane_g3

0x45ee,	// (0x00080660) bg_cale_heading_pane_g4

0x45f8,	// (0x0008066a) bg_cale_heading_pane_g5

0x4602,	// (0x00080674) bg_cale_heading_pane_g6

0x460a,	// (0x0008067c) bg_cale_heading_pane_g7

0x4612,	// (0x00080684) bg_cale_heading_pane_g8

0x461c,	// (0x0008068e) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0008b421) bg_cale_heading_pane_g

0xb307,	// (0x00087379) bg_cale_side_pane_g1

0x4626,	// (0x00080698) bg_cale_side_pane_g2

0x4630,	// (0x000806a2) bg_cale_side_pane_g3

0x463a,	// (0x000806ac) bg_cale_side_pane_g4

0x4644,	// (0x000806b6) bg_cale_side_pane_g5

0x464e,	// (0x000806c0) bg_cale_side_pane_g6

0x4658,	// (0x000806ca) bg_cale_side_pane_g7

0x4662,	// (0x000806d4) bg_cale_side_pane_g8

0x466a,	// (0x000806dc) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0008b434) bg_cale_side_pane_g

0x4672,	// (0x000806e4) popup_call_status_window_ParamLimits

0x4672,	// (0x000806e4) popup_call_status_window

0xb30f,	// (0x00087381) stacon_top_pane

0xb317,	// (0x00087389) status_pane_ParamLimits

0xb317,	// (0x00087389) status_pane

0xb32c,	// (0x0008739e) status_small_pane

0xb334,	// (0x000873a6) control_pane

0xa5c9,	// (0x0008663b) stacon_bottom_pane

0xb33c,	// (0x000873ae) list_single_mce_smart_pane_t1_ParamLimits

0xb33c,	// (0x000873ae) list_single_mce_smart_pane_t1

0xb34f,	// (0x000873c1) list_single_mce_smart_pane_t2_ParamLimits

0xb34f,	// (0x000873c1) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0008b447) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0008b447) list_single_mce_smart_pane_t

0x467e,	// (0x000806f0) compass_pane

0x4689,	// (0x000806fb) main_location2_pane_t1

0x469f,	// (0x00080711) main_location2_pane_t2

0x46b5,	// (0x00080727) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0008b44c) main_location2_pane_t

0xb36e,	// (0x000873e0) compass_pane_g1_ParamLimits

0xb36e,	// (0x000873e0) compass_pane_g1

0x4703,	// (0x00080775) compass_pane_t1

0x4712,	// (0x00080784) compass_pane_t2

0x0005,

0xf3e3,	// (0x0008b455) compass_pane_t

0x475d,	// (0x000807cf) text_secondary_cp61

0xb390,	// (0x00087402) navi_pane_cams_g5

0xb3b3,	// (0x00087425) navi_pane_im_t1

0xb3c1,	// (0x00087433) navi_pane_mp_g1_ParamLimits

0xb3c1,	// (0x00087433) navi_pane_mp_g1

0xb3d5,	// (0x00087447) navi_pane_mp_g2_ParamLimits

0xb3d5,	// (0x00087447) navi_pane_mp_g2

0xb3e1,	// (0x00087453) navi_pane_mp_g3_ParamLimits

0xb3e1,	// (0x00087453) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0008b469) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0008b469) navi_pane_mp_g

0xb3ed,	// (0x0008745f) navi_pane_mp_t1

0xb3fb,	// (0x0008746d) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0008b470) navi_pane_mp_t

0xb437,	// (0x000874a9) navi_pane_vt_g1

0xb3ed,	// (0x0008745f) navi_pane_vt_t1

0xb43f,	// (0x000874b1) navi_slider_pane

0xb447,	// (0x000874b9) zooming_pane

0xb44f,	// (0x000874c1) navi_slider_pane_g1

0x4892,	// (0x00080904) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0008b477) navi_slider_pane_g

0xb473,	// (0x000874e5) aid_levels_zoom

0xb47b,	// (0x000874ed) zooming_pane_g1

0xb483,	// (0x000874f5) zooming_pane_g2

0xb483,	// (0x000874f5) zooming_pane_g3

0x0002,

0xf414,	// (0x0008b486) zooming_pane_g

0xb48b,	// (0x000874fd) level_10_zoom

0xb494,	// (0x00087506) level_11_zoom

0xb49d,	// (0x0008750f) level_1_zoom

0xb4a6,	// (0x00087518) level_2_zoom

0xb4af,	// (0x00087521) level_3_zoom

0xb4b8,	// (0x0008752a) level_4_zoom

0xb4c1,	// (0x00087533) level_5_zoom

0xb4ca,	// (0x0008753c) level_6_zoom

0xb4d3,	// (0x00087545) level_7_zoom

0xb4dc,	// (0x0008754e) level_8_zoom

0xb4e5,	// (0x00087557) level_9_zoom

0xb4f6,	// (0x00087568) popup_phob_thumbnail_window_g1

0xb4fe,	// (0x00087570) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0008b48d) popup_phob_thumbnail_window_g

0xc7e4,	// (0x00088856) level_1_location

0xc7ec,	// (0x0008885e) level_2_location

0xc7f4,	// (0x00088866) level_3_location

0xc7fc,	// (0x0008886e) level_4_location

0xb447,	// (0x000874b9) level_5_location

0x48a4,	// (0x00080916) mce_icon_pane_g1

0x48ac,	// (0x0008091e) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0008b492) mce_icon_pane_g

0x48b4,	// (0x00080926) main_mup_pane_g1_ParamLimits

0x48b4,	// (0x00080926) main_mup_pane_g1

0x48cc,	// (0x0008093e) main_mup_pane_g2_ParamLimits

0x48cc,	// (0x0008093e) main_mup_pane_g2

0x48e8,	// (0x0008095a) main_mup_pane_g3_ParamLimits

0x48e8,	// (0x0008095a) main_mup_pane_g3

0x4904,	// (0x00080976) main_mup_pane_g4_ParamLimits

0x4904,	// (0x00080976) main_mup_pane_g4

0x4920,	// (0x00080992) main_mup_pane_g5_ParamLimits

0x4920,	// (0x00080992) main_mup_pane_g5

0x4941,	// (0x000809b3) main_mup_pane_g6_ParamLimits

0x4941,	// (0x000809b3) main_mup_pane_g6

0x4961,	// (0x000809d3) main_mup_pane_g7_ParamLimits

0x4961,	// (0x000809d3) main_mup_pane_g7

0x4985,	// (0x000809f7) main_mup_pane_g8_ParamLimits

0x4985,	// (0x000809f7) main_mup_pane_g8

0x49a9,	// (0x00080a1b) main_mup_pane_g9_ParamLimits

0x49a9,	// (0x00080a1b) main_mup_pane_g9

0x49cc,	// (0x00080a3e) main_mup_pane_g10_ParamLimits

0x49cc,	// (0x00080a3e) main_mup_pane_g10

0x49ef,	// (0x00080a61) main_mup_pane_g11_ParamLimits

0x49ef,	// (0x00080a61) main_mup_pane_g11

0x4a0f,	// (0x00080a81) main_mup_pane_g12_ParamLimits

0x4a0f,	// (0x00080a81) main_mup_pane_g12

0x4a1d,	// (0x00080a8f) main_mup_pane_g13_ParamLimits

0x4a1d,	// (0x00080a8f) main_mup_pane_g13

0x000c,

0xf425,	// (0x0008b497) main_mup_pane_g_ParamLimits

0xf425,	// (0x0008b497) main_mup_pane_g

0x4a33,	// (0x00080aa5) main_mup_pane_t1_ParamLimits

0x4a33,	// (0x00080aa5) main_mup_pane_t1

0x4a52,	// (0x00080ac4) main_mup_pane_t2_ParamLimits

0x4a52,	// (0x00080ac4) main_mup_pane_t2

0x4a6c,	// (0x00080ade) main_mup_pane_t3_ParamLimits

0x4a6c,	// (0x00080ade) main_mup_pane_t3

0x4a86,	// (0x00080af8) main_mup_pane_t4_ParamLimits

0x4a86,	// (0x00080af8) main_mup_pane_t4

0x4a98,	// (0x00080b0a) main_mup_pane_t5_ParamLimits

0x4a98,	// (0x00080b0a) main_mup_pane_t5

0x4aaa,	// (0x00080b1c) main_mup_pane_t6_ParamLimits

0x4aaa,	// (0x00080b1c) main_mup_pane_t6

0x0005,

0xf440,	// (0x0008b4b2) main_mup_pane_t_ParamLimits

0xf440,	// (0x0008b4b2) main_mup_pane_t

0x4ac0,	// (0x00080b32) mup_progress_pane_ParamLimits

0x4ac0,	// (0x00080b32) mup_progress_pane

0x4acc,	// (0x00080b3e) mup_visualizer_pane_ParamLimits

0x4acc,	// (0x00080b3e) mup_visualizer_pane

0x4b0a,	// (0x00080b7c) mup_volume_pane_ParamLimits

0x4b0a,	// (0x00080b7c) mup_volume_pane

0xb37a,	// (0x000873ec) mup_visualizer_pane_g1_ParamLimits

0xb37a,	// (0x000873ec) mup_visualizer_pane_g1

0xb37a,	// (0x000873ec) mup_visualizer_pane_g2_ParamLimits

0xb37a,	// (0x000873ec) mup_visualizer_pane_g2

0xb36e,	// (0x000873e0) mup_visualizer_pane_g3_ParamLimits

0xb36e,	// (0x000873e0) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0008b4bf) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0008b4bf) mup_visualizer_pane_g

0xa96c,	// (0x000869de) mup_volume_pane_g1

0xb50e,	// (0x00087580) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0008b4c6) mup_volume_pane_g

0xa96c,	// (0x000869de) mup_progress_pane_g1

0xb517,	// (0x00087589) mup_progress_pane_g2

0xb520,	// (0x00087592) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0008b4cb) mup_progress_pane_g

0xa5c9,	// (0x0008663b) bg_popup_window_pane_cp05

0xb529,	// (0x0008759b) heading_pane_cp02_ParamLimits

0xb529,	// (0x0008759b) heading_pane_cp02

0xb545,	// (0x000875b7) list_popup_blid_pane

0xb54d,	// (0x000875bf) list_blid_sat_info_pane_ParamLimits

0xb54d,	// (0x000875bf) list_blid_sat_info_pane

0xb560,	// (0x000875d2) list_blid_sat_info_pane_g1

0xb568,	// (0x000875da) list_blid_sat_info_pane_t1

0x4c29,	// (0x00080c9b) mup_equalizer_pane_ParamLimits

0x4c29,	// (0x00080c9b) mup_equalizer_pane

0x4c4a,	// (0x00080cbc) mup_equalizer_pane_cp1_ParamLimits

0x4c4a,	// (0x00080cbc) mup_equalizer_pane_cp1

0x4c6b,	// (0x00080cdd) mup_equalizer_pane_cp2_ParamLimits

0x4c6b,	// (0x00080cdd) mup_equalizer_pane_cp2

0x4c8c,	// (0x00080cfe) mup_equalizer_pane_cp3_ParamLimits

0x4c8c,	// (0x00080cfe) mup_equalizer_pane_cp3

0x4cb1,	// (0x00080d23) mup_equalizer_pane_cp4_ParamLimits

0x4cb1,	// (0x00080d23) mup_equalizer_pane_cp4

0x4cd6,	// (0x00080d48) mup_equalizer_pane_cp5

0x4cee,	// (0x00080d60) mup_equalizer_pane_cp6

0x4d06,	// (0x00080d78) mup_equalizer_pane_cp7

0xc6fe,	// (0x00088770) bg_popup_call_poc_act_pane_g9

0xc706,	// (0x00088778) bg_popup_call_poc_act_pane_g10

0xc70e,	// (0x00088780) bg_popup_call_poc_act_pane_g11

0x000a,

0xa824,	// (0x00086896) mup_scale_pane

0xa96c,	// (0x000869de) mup_scale_pane_g1

0xb576,	// (0x000875e8) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0008b4e7) mup_scale_pane_g

0xb59a,	// (0x0008760c) msg_data_pane

0xb5a2,	// (0x00087614) scroll_pane_cp017

0x0ff6,	// (0x0007d068) bg_list_pane_cp04_ParamLimits

0x0ff6,	// (0x0007d068) bg_list_pane_cp04

0xb5aa,	// (0x0008761c) msg_data_pane_g1

0x4d30,	// (0x00080da2) msg_data_pane_g2

0x4d3a,	// (0x00080dac) msg_data_pane_g3

0x4d44,	// (0x00080db6) msg_data_pane_g4

0x4d4c,	// (0x00080dbe) msg_data_pane_g5

0x4d54,	// (0x00080dc6) msg_data_pane_g6

0x4d5c,	// (0x00080dce) msg_data_pane_g7

0x0006,

0xf484,	// (0x0008b4f6) msg_data_pane_g

0x101e,	// (0x0007d090) msg_text_pane_ParamLimits

0x101e,	// (0x0007d090) msg_text_pane

0x4d64,	// (0x00080dd6) qrid_highlight_pane_cp011_ParamLimits

0x4d64,	// (0x00080dd6) qrid_highlight_pane_cp011

0xa5c9,	// (0x0008663b) msg_body_pane

0xa5c9,	// (0x0008663b) msg_header_pane

0xb5b2,	// (0x00087624) input_focus_pane_cp07

0x1052,	// (0x0007d0c4) msg_header_pane_t1_ParamLimits

0x1052,	// (0x0007d0c4) msg_header_pane_t1

0x1064,	// (0x0007d0d6) msg_header_pane_t2_ParamLimits

0x1064,	// (0x0007d0d6) msg_header_pane_t2

0x0001,

0xf498,	// (0x0008b50a) msg_header_pane_t_ParamLimits

0xf498,	// (0x0008b50a) msg_header_pane_t

0xb5c7,	// (0x00087639) msg_body_pane_g1

0x1076,	// (0x0007d0e8) msg_body_pane_t1_ParamLimits

0x1076,	// (0x0007d0e8) msg_body_pane_t1

0x10a7,	// (0x0007d119) msg_body_pane_t2_ParamLimits

0x10a7,	// (0x0007d119) msg_body_pane_t2

0x10b9,	// (0x0007d12b) msg_body_pane_t3_ParamLimits

0x10b9,	// (0x0007d12b) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0008b50f) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0008b50f) msg_body_pane_t

0x4dd7,	// (0x00080e49) main_viewer_pane_g1_ParamLimits

0x4dd7,	// (0x00080e49) main_viewer_pane_g1

0x4de3,	// (0x00080e55) main_viewer_pane_g2_ParamLimits

0x4de3,	// (0x00080e55) main_viewer_pane_g2

0x4def,	// (0x00080e61) main_viewer_pane_g3_ParamLimits

0x4def,	// (0x00080e61) main_viewer_pane_g3

0x4e00,	// (0x00080e72) main_viewer_pane_g4_ParamLimits

0x4e00,	// (0x00080e72) main_viewer_pane_g4

0x4e11,	// (0x00080e83) main_viewer_pane_g5_ParamLimits

0x4e11,	// (0x00080e83) main_viewer_pane_g5

0x4e11,	// (0x00080e83) main_viewer_pane_g7_ParamLimits

0x4e11,	// (0x00080e83) main_viewer_pane_g7

0x4e23,	// (0x00080e95) main_viewer_pane_g8_ParamLimits

0x4e23,	// (0x00080e95) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0008b51f) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0008b51f) main_viewer_pane_g

0xb5cf,	// (0x00087641) viewer_content_pane_ParamLimits

0xb5cf,	// (0x00087641) viewer_content_pane

0x4e5b,	// (0x00080ecd) main_postcard_pane_g1_ParamLimits

0x4e5b,	// (0x00080ecd) main_postcard_pane_g1

0x4e69,	// (0x00080edb) main_postcard_pane_g2_ParamLimits

0x4e69,	// (0x00080edb) main_postcard_pane_g2

0x4e77,	// (0x00080ee9) main_postcard_pane_g3_ParamLimits

0x4e77,	// (0x00080ee9) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0008b530) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0008b530) main_postcard_pane_g

0x4e87,	// (0x00080ef9) main_postcard_pane_g4

0xc927,	// (0x00088999) smil_status_volume_pane_g2

0x4eb3,	// (0x00080f25) postcard_pane_ParamLimits

0x4eb3,	// (0x00080f25) postcard_pane

0xb37a,	// (0x000873ec) postcard_pane_g1_ParamLimits

0xb37a,	// (0x000873ec) postcard_pane_g1

0x4eed,	// (0x00080f5f) postcard_pane_g2_ParamLimits

0x4eed,	// (0x00080f5f) postcard_pane_g2

0x4ef9,	// (0x00080f6b) postcard_pane_g3_ParamLimits

0x4ef9,	// (0x00080f6b) postcard_pane_g3

0xb5dd,	// (0x0008764f) postcard_pane_g4_ParamLimits

0xb5dd,	// (0x0008764f) postcard_pane_g4

0x4f05,	// (0x00080f77) postcard_pane_g5_ParamLimits

0x4f05,	// (0x00080f77) postcard_pane_g5

0x4f11,	// (0x00080f83) postcard_pane_g6_ParamLimits

0x4f11,	// (0x00080f83) postcard_pane_g6

0xb5eb,	// (0x0008765d) postcard_pane_g7_ParamLimits

0xb5eb,	// (0x0008765d) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0008b53d) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0008b53d) postcard_pane_g

0x4f1f,	// (0x00080f91) main_mp2_pane_g1_ParamLimits

0x4f1f,	// (0x00080f91) main_mp2_pane_g1

0x4f2d,	// (0x00080f9f) main_mp2_pane_g2_ParamLimits

0x4f2d,	// (0x00080f9f) main_mp2_pane_g2

0x4f39,	// (0x00080fab) main_mp2_pane_g3_ParamLimits

0x4f39,	// (0x00080fab) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0008b54c) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0008b54c) main_mp2_pane_g

0x4f45,	// (0x00080fb7) main_mp2_pane_t1_ParamLimits

0x4f45,	// (0x00080fb7) main_mp2_pane_t1

0x4f5c,	// (0x00080fce) main_mp2_pane_t2_ParamLimits

0x4f5c,	// (0x00080fce) main_mp2_pane_t2

0x4f70,	// (0x00080fe2) main_mp2_pane_t3_ParamLimits

0x4f70,	// (0x00080fe2) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0008b553) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0008b553) main_mp2_pane_t

0xb5f9,	// (0x0008766b) pec_content_pane_ParamLimits

0xb5f9,	// (0x0008766b) pec_content_pane

0xaca3,	// (0x00086d15) scroll_pane_cp015

0xb60b,	// (0x0008767d) pec_attribute_pane_ParamLimits

0xb60b,	// (0x0008767d) pec_attribute_pane

0x4f82,	// (0x00080ff4) pec_content_pane_g1_ParamLimits

0x4f82,	// (0x00080ff4) pec_content_pane_g1

0xb61b,	// (0x0008768d) pec_content_pane_t1_ParamLimits

0xb61b,	// (0x0008768d) pec_content_pane_t1

0xb62d,	// (0x0008769f) pec_content_pane_t2_ParamLimits

0xb62d,	// (0x0008769f) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0008b55a) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0008b55a) pec_content_pane_t

0x4f8e,	// (0x00081000) list_single_graphic_pane_cp01_ParamLimits

0x4f8e,	// (0x00081000) list_single_graphic_pane_cp01

0xa824,	// (0x00086896) bg_popup_sub_pane_cp04

0xb63f,	// (0x000876b1) popup_mup_playback_window_g1

0xb64b,	// (0x000876bd) popup_mup_playback_window_t1

0xb660,	// (0x000876d2) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0008b55f) popup_mup_playback_window_t

0xb697,	// (0x00087709) main_image_pane_g1_ParamLimits

0xb697,	// (0x00087709) main_image_pane_g1

0xb6da,	// (0x0008774c) scroll_pane_cp018_ParamLimits

0xb6da,	// (0x0008774c) scroll_pane_cp018

0xb6f2,	// (0x00087764) scroll_pane_cp016_ParamLimits

0xb6f2,	// (0x00087764) scroll_pane_cp016

0x501c,	// (0x0008108e) smil2_image_pane_ParamLimits

0x501c,	// (0x0008108e) smil2_image_pane

0x5052,	// (0x000810c4) smil2_root_pane_ParamLimits

0x5052,	// (0x000810c4) smil2_root_pane

0x507e,	// (0x000810f0) smil2_text_pane_ParamLimits

0x507e,	// (0x000810f0) smil2_text_pane

0xa5c9,	// (0x0008663b) bg_list_pane_cp06

0xb72e,	// (0x000877a0) grid_radio_pane

0xa5c9,	// (0x0008663b) bg_popup_window_pane_cp06

0xb738,	// (0x000877aa) main_fmradio_pane_t1

0xb1eb,	// (0x0008725d) heading_pane_cp04

0xb746,	// (0x000877b8) main_fmradio_pane_t2

0xc716,	// (0x00088788) popup_cale_lunar_info_window_g1

0xb754,	// (0x000877c6) main_fmradio_pane_t3

0xc71e,	// (0x00088790) popup_cale_lunar_info_window_g2

0xb764,	// (0x000877d6) main_fmradio_pane_t4

0x0001,

0xb772,	// (0x000877e4) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0008b63a) popup_cale_lunar_info_window_g

0xf502,	// (0x0008b574) main_fmradio_pane_t

0xb780,	// (0x000877f2) wait_bar_pane_cp03

0xb0b3,	// (0x00087125) cell_fmradio_pane_ParamLimits

0xb0b3,	// (0x00087125) cell_fmradio_pane

0xb5eb,	// (0x0008765d) cell_fmradio_pane_g1_ParamLimits

0xb5eb,	// (0x0008765d) cell_fmradio_pane_g1

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp011

0xb788,	// (0x000877fa) poc_content_pane_ParamLimits

0xb788,	// (0x000877fa) poc_content_pane

0xb79a,	// (0x0008780c) scroll_pane_cp019

0x50be,	// (0x00081130) popup_call_poc_act_window_ParamLimits

0x50be,	// (0x00081130) popup_call_poc_act_window

0x50cb,	// (0x0008113d) popup_call_poc_inact_window_ParamLimits

0x50cb,	// (0x0008113d) popup_call_poc_inact_window

0xf59f,	// (0x0008b611) bg_popup_call_poc_act_pane_g

0xc68e,	// (0x00088700) bg_popup_call_poc_inact_pane_g1

0xc696,	// (0x00088708) bg_popup_call_poc_inact_pane_g2

0xb7a2,	// (0x00087814) popup_call_poc_act_window_g2

0xc69e,	// (0x00088710) bg_popup_call_poc_inact_pane_g3

0xc6a6,	// (0x00088718) bg_popup_call_poc_inact_pane_g4

0xc6ae,	// (0x00088720) bg_popup_call_poc_inact_pane_g5

0xb7aa,	// (0x0008781c) popup_call_poc_act_window_t1_ParamLimits

0xb7aa,	// (0x0008781c) popup_call_poc_act_window_t1

0xb7d2,	// (0x00087844) popup_call_poc_act_window_t2_ParamLimits

0xb7d2,	// (0x00087844) popup_call_poc_act_window_t2

0xb7fa,	// (0x0008786c) popup_call_poc_act_window_t3_ParamLimits

0xb7fa,	// (0x0008786c) popup_call_poc_act_window_t3

0xb822,	// (0x00087894) popup_call_poc_act_window_t4_ParamLimits

0xb822,	// (0x00087894) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0008b57f) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0008b57f) popup_call_poc_act_window_t

0xc6b6,	// (0x00088728) bg_popup_call_poc_inact_pane_g6

0xc6be,	// (0x00088730) bg_popup_call_poc_inact_pane_g7

0xc6c6,	// (0x00088738) bg_popup_call_poc_inact_pane_g8

0xb834,	// (0x000878a6) popup_call_poc_inact_window_g2

0xc6ce,	// (0x00088740) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0008b5fe) bg_popup_call_poc_inact_pane_g

0xb83c,	// (0x000878ae) popup_call_poc_inact_window_t1_ParamLimits

0xb83c,	// (0x000878ae) popup_call_poc_inact_window_t1

0xb851,	// (0x000878c3) popup_call_poc_inact_window_t2_ParamLimits

0xb851,	// (0x000878c3) popup_call_poc_inact_window_t2

0xb866,	// (0x000878d8) popup_call_poc_inact_window_t3_ParamLimits

0xb866,	// (0x000878d8) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0008b588) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0008b588) popup_call_poc_inact_window_t

0xc89a,	// (0x0008890c) context_pane_ParamLimits

0x56da,	// (0x0008174c) signal_pane_ParamLimits

0xb447,	// (0x000874b9) main_call2_pane

0xc888,	// (0x000888fa) popup_phob_thumbnail2_window_ParamLimits

0xc888,	// (0x000888fa) popup_phob_thumbnail2_window

0x4d85,	// (0x00080df7) aid_hotspot_pointer_arrow_pane

0x4d8d,	// (0x00080dff) aid_hotspot_pointer_hand_pane

0x53f0,	// (0x00081462) phob_pre_status_pane_g5

0x305a,	// (0x0007f0cc) cams_zoom_pane_ParamLimits

0x3066,	// (0x0007f0d8) image_vga_pane_ParamLimits

0x3075,	// (0x0007f0e7) main_camera_pane_g1_ParamLimits

0x3083,	// (0x0007f0f5) main_camera_pane_g2_ParamLimits

0x308f,	// (0x0007f101) main_camera_pane_g3_ParamLimits

0x309d,	// (0x0007f10f) main_camera_pane_g4_ParamLimits

0x30ab,	// (0x0007f11d) main_camera_pane_g5_ParamLimits

0x30b9,	// (0x0007f12b) main_camera_pane_g6_ParamLimits

0x30c7,	// (0x0007f139) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0008b287) main_camera_pane_g_ParamLimits

0x30d5,	// (0x0007f147) main_camera_pane_t1_ParamLimits

0x30e7,	// (0x0007f159) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0008b298) main_camera_pane_t_ParamLimits

0xa824,	// (0x00086896) bg_popup_preview_window_pane_cp01_ParamLimits

0xa824,	// (0x00086896) bg_popup_preview_window_pane_cp01

0xb87b,	// (0x000878ed) popup_phob_thumbnail2_window_g1_ParamLimits

0xb87b,	// (0x000878ed) popup_phob_thumbnail2_window_g1

0xa5c9,	// (0x0008663b) call2_cli_visual_pane

0x50e7,	// (0x00081159) popup_call2_audio_conf_window_ParamLimits

0x50e7,	// (0x00081159) popup_call2_audio_conf_window

0x5100,	// (0x00081172) popup_call2_audio_first_window_ParamLimits

0x5100,	// (0x00081172) popup_call2_audio_first_window

0x519e,	// (0x00081210) popup_call2_audio_in_window_ParamLimits

0x519e,	// (0x00081210) popup_call2_audio_in_window

0x51e2,	// (0x00081254) popup_call2_audio_out_window_ParamLimits

0x51e2,	// (0x00081254) popup_call2_audio_out_window

0x524c,	// (0x000812be) popup_call2_audio_second_window_ParamLimits

0x524c,	// (0x000812be) popup_call2_audio_second_window

0x52aa,	// (0x0008131c) popup_call2_audio_wait_window_ParamLimits

0x52aa,	// (0x0008131c) popup_call2_audio_wait_window

0xa5c9,	// (0x0008663b) bg_popup_call2_act_pane_cp03

0xa806,	// (0x00086878) list_conf_pane_cp

0xb887,	// (0x000878f9) popup_call2_audio_conf_window_t1

0xb895,	// (0x00087907) list_single_graphic_popup_conf2_pane_ParamLimits

0xb895,	// (0x00087907) list_single_graphic_popup_conf2_pane

0xb25a,	// (0x000872cc) list_highlight_pane_cp04

0xb8a8,	// (0x0008791a) list_single_graphic_popup_conf2_pane_g1

0xb26b,	// (0x000872dd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0008b58f) list_single_graphic_popup_conf2_pane_g

0xb8b2,	// (0x00087924) list_single_graphic_popup_conf2_pane_t1

0xb8c0,	// (0x00087932) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8c0,	// (0x00087932) bg_popup_call2_act_pane_cp01

0xb94a,	// (0x000879bc) call_type_pane_cp05_ParamLimits

0xb94a,	// (0x000879bc) call_type_pane_cp05

0xb9a7,	// (0x00087a19) popup_call2_audio_second_window_g1_ParamLimits

0xb9a7,	// (0x00087a19) popup_call2_audio_second_window_g1

0xb9fb,	// (0x00087a6d) popup_call2_audio_second_window_g2_ParamLimits

0xb9fb,	// (0x00087a6d) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0008b594) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0008b594) popup_call2_audio_second_window_g

0xba60,	// (0x00087ad2) popup_call2_audio_second_window_t1_ParamLimits

0xba60,	// (0x00087ad2) popup_call2_audio_second_window_t1

0xbb1b,	// (0x00087b8d) popup_call2_audio_second_window_t2_ParamLimits

0xbb1b,	// (0x00087b8d) popup_call2_audio_second_window_t2

0xbb6e,	// (0x00087be0) popup_call2_audio_second_window_t3_ParamLimits

0xbb6e,	// (0x00087be0) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0008b59b) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0008b59b) popup_call2_audio_second_window_t

0xa5c9,	// (0x0008663b) bg_popup_call2_in_pane_cp02

0xa5d3,	// (0x00086645) call_type_pane_cp04

0xa5db,	// (0x0008664d) popup_call2_audio_wait_window_g1

0xa5e3,	// (0x00086655) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0008b174) popup_call2_audio_wait_window_g

0xa5eb,	// (0x0008665d) popup_call2_audio_wait_window_t3

0xbc61,	// (0x00087cd3) bg_popup_call2_act_pane_ParamLimits

0xbc61,	// (0x00087cd3) bg_popup_call2_act_pane

0xbd21,	// (0x00087d93) call_type_pane_cp03_ParamLimits

0xbd21,	// (0x00087d93) call_type_pane_cp03

0xbd85,	// (0x00087df7) popup_call2_audio_first_window_g1_ParamLimits

0xbd85,	// (0x00087df7) popup_call2_audio_first_window_g1

0xbdf5,	// (0x00087e67) popup_call2_audio_first_window_g2_ParamLimits

0xbdf5,	// (0x00087e67) popup_call2_audio_first_window_g2

0xb37a,	// (0x000873ec) popup_call2_audio_first_window_g3_ParamLimits

0xb37a,	// (0x000873ec) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0008b5a4) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0008b5a4) popup_call2_audio_first_window_g

0xbed3,	// (0x00087f45) popup_call2_audio_first_window_t1_ParamLimits

0xbed3,	// (0x00087f45) popup_call2_audio_first_window_t1

0xbfd6,	// (0x00088048) popup_call2_audio_first_window_t4_ParamLimits

0xbfd6,	// (0x00088048) popup_call2_audio_first_window_t4

0xc0b9,	// (0x0008812b) popup_call2_audio_first_window_t5_ParamLimits

0xc0b9,	// (0x0008812b) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0008b5af) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0008b5af) popup_call2_audio_first_window_t

0xa81c,	// (0x0008688e) bg_popup_call2_act_pane_g1

0xc728,	// (0x0008879a) popup_cale_lunar_info_window_t1

0xc736,	// (0x000887a8) popup_cale_lunar_info_window_t2

0xc744,	// (0x000887b6) popup_cale_lunar_info_window_t3

0xa5c9,	// (0x0008663b) bg_popup_call2_bubble_pane

0xc1ba,	// (0x0008822c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1ba,	// (0x0008822c) bg_popup_call2_in_pane_cp01

0xa2a5,	// (0x00086317) call_type_pane_cp02

0xc202,	// (0x00088274) popup_call2_audio_out_window_g1_ParamLimits

0xc202,	// (0x00088274) popup_call2_audio_out_window_g1

0xc22e,	// (0x000882a0) popup_call2_audio_out_window_g2_ParamLimits

0xc22e,	// (0x000882a0) popup_call2_audio_out_window_g2

0xc256,	// (0x000882c8) popup_call2_audio_out_window_g3_ParamLimits

0xc256,	// (0x000882c8) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0008b5b8) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0008b5b8) popup_call2_audio_out_window_g

0xc291,	// (0x00088303) popup_call2_audio_out_window_t1_ParamLimits

0xc291,	// (0x00088303) popup_call2_audio_out_window_t1

0xc2f0,	// (0x00088362) popup_call2_audio_out_window_t2_ParamLimits

0xc2f0,	// (0x00088362) popup_call2_audio_out_window_t2

0xc344,	// (0x000883b6) popup_call2_audio_out_window_t3_ParamLimits

0xc344,	// (0x000883b6) popup_call2_audio_out_window_t3

0xc35a,	// (0x000883cc) popup_call2_audio_out_window_t4_ParamLimits

0xc35a,	// (0x000883cc) popup_call2_audio_out_window_t4

0xc370,	// (0x000883e2) popup_call2_audio_out_window_t5_ParamLimits

0xc370,	// (0x000883e2) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0008b5c1) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0008b5c1) popup_call2_audio_out_window_t

0xc3d4,	// (0x00088446) bg_popup_call2_in_pane_ParamLimits

0xc3d4,	// (0x00088446) bg_popup_call2_in_pane

0xc430,	// (0x000884a2) popup_call2_audio_in_window_g1_ParamLimits

0xc430,	// (0x000884a2) popup_call2_audio_in_window_g1

0xc468,	// (0x000884da) popup_call2_audio_in_window_g2_ParamLimits

0xc468,	// (0x000884da) popup_call2_audio_in_window_g2

0xc4a0,	// (0x00088512) popup_call2_audio_in_window_g3_ParamLimits

0xc4a0,	// (0x00088512) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0008b5ce) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0008b5ce) popup_call2_audio_in_window_g

0xc4f8,	// (0x0008856a) popup_call2_audio_in_window_t1_ParamLimits

0xc4f8,	// (0x0008856a) popup_call2_audio_in_window_t1

0xc578,	// (0x000885ea) popup_call2_audio_in_window_t2_ParamLimits

0xc578,	// (0x000885ea) popup_call2_audio_in_window_t2

0xc5f8,	// (0x0008866a) popup_call2_audio_in_window_t3_ParamLimits

0xc5f8,	// (0x0008866a) popup_call2_audio_in_window_t3

0xc612,	// (0x00088684) popup_call2_audio_in_window_t4_ParamLimits

0xc612,	// (0x00088684) popup_call2_audio_in_window_t4

0xc624,	// (0x00088696) popup_call2_audio_in_window_t5_ParamLimits

0xc624,	// (0x00088696) popup_call2_audio_in_window_t5

0xc639,	// (0x000886ab) popup_call2_audio_in_window_t6_ParamLimits

0xc639,	// (0x000886ab) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0008b5d7) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0008b5d7) popup_call2_audio_in_window_t

0xa81c,	// (0x0008688e) bg_popup_call2_in_pane_g1

0xc752,	// (0x000887c4) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0008b63f) popup_cale_lunar_info_window_t

0xa824,	// (0x00086896) bg_popup_call2_rect_pane_ParamLimits

0xa824,	// (0x00086896) bg_popup_call2_rect_pane

0xa5c9,	// (0x0008663b) call2_cli_visual_graphic_pane

0xa5c9,	// (0x0008663b) call2_cli_visual_text_pane

0x5772,	// (0x000817e4) smil_status_volume_pane_g3

0x0002,

0xa96c,	// (0x000869de) call2_cli_visual_graphic_pane_g1

0xa96c,	// (0x000869de) call2_cli_visual_graphic_pane_g2

0xa96c,	// (0x000869de) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0008b5e4) call2_cli_visual_graphic_pane_g

0xc64e,	// (0x000886c0) bg_popup_call2_rect_pane_g1

0xaa0a,	// (0x00086a7c) bg_popup_call2_rect_pane_g2

0xc656,	// (0x000886c8) bg_popup_call2_rect_pane_g3

0xc65e,	// (0x000886d0) bg_popup_call2_rect_pane_g4

0xc666,	// (0x000886d8) bg_popup_call2_rect_pane_g5

0xc66e,	// (0x000886e0) bg_popup_call2_rect_pane_g6

0xc676,	// (0x000886e8) bg_popup_call2_rect_pane_g7

0xc67e,	// (0x000886f0) bg_popup_call2_rect_pane_g8

0xc686,	// (0x000886f8) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0008b5eb) bg_popup_call2_rect_pane_g

0xc68e,	// (0x00088700) bg_popup_call2_bubble_pane_g1

0xc696,	// (0x00088708) bg_popup_call2_bubble_pane_g2

0xc69e,	// (0x00088710) bg_popup_call2_bubble_pane_g3

0xc6a6,	// (0x00088718) bg_popup_call2_bubble_pane_g4

0xc6ae,	// (0x00088720) bg_popup_call2_bubble_pane_g5

0xc6b6,	// (0x00088728) bg_popup_call2_bubble_pane_g6

0xc6be,	// (0x00088730) bg_popup_call2_bubble_pane_g7

0xc6c6,	// (0x00088738) bg_popup_call2_bubble_pane_g8

0xc6ce,	// (0x00088740) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0008b5fe) bg_popup_call2_bubble_pane_g

0x2818,	// (0x0007e88a) aid_cale_week_size_cell_pane

0x30fb,	// (0x0007f16d) aid_cams_cif_uncrop_pane_ParamLimits

0x30fb,	// (0x0007f16d) aid_cams_cif_uncrop_pane

0x3258,	// (0x0007f2ca) aid_cams_size_cell_ParamLimits

0x3258,	// (0x0007f2ca) aid_cams_size_cell

0x3264,	// (0x0007f2d6) grid_cams_pane_ParamLimits

0x3272,	// (0x0007f2e4) linegrid_cams_pane_ParamLimits

0x335b,	// (0x0007f3cd) call_video_pane_t1

0x3378,	// (0x0007f3ea) call_video_pane_t2

0x0001,

0xf279,	// (0x0008b2eb) call_video_pane_t

0x3844,	// (0x0007f8b6) aid_cale_month_size_cell_pane_ParamLimits

0x3844,	// (0x0007f8b6) aid_cale_month_size_cell_pane

0xf616,	// (0x0008b688) smil_status_volume_pane_g

0x577f,	// (0x000817f1) volume_smil_pane_ParamLimits

0xa177,	// (0x000861e9) aid_popup2_width_pane

0x2718,	// (0x0007e78a) cell_qdial_pane_g4_ParamLimits

0x2718,	// (0x0007e78a) cell_qdial_pane_g4

0x46df,	// (0x00080751) aid_blid_cardinal_pane_ParamLimits

0x46ef,	// (0x00080761) aid_blid_destination_pane_ParamLimits

0x46ef,	// (0x00080761) aid_blid_destination_pane

0xa824,	// (0x00086896) bg_popup_call_poc_act_pane_ParamLimits

0xa824,	// (0x00086896) bg_popup_call_poc_act_pane

0xa824,	// (0x00086896) bg_popup_call_poc_inact_pane_ParamLimits

0xa824,	// (0x00086896) bg_popup_call_poc_inact_pane

0xc6d6,	// (0x00088748) bg_popup_call_poc_act_pane_g1

0xc6de,	// (0x00088750) bg_popup_call_poc_act_pane_g2

0xc6e6,	// (0x00088758) bg_popup_call_poc_act_pane_g3

0xc6a6,	// (0x00088718) bg_popup_call_poc_act_pane_g4

0xc6ae,	// (0x00088720) bg_popup_call_poc_act_pane_g5

0xc6ee,	// (0x00088760) bg_popup_call_poc_act_pane_g6

0xc6be,	// (0x00088730) bg_popup_call_poc_act_pane_g7

0xc6f6,	// (0x00088768) bg_popup_call_poc_act_pane_g8

0xa5c9,	// (0x0008663b) main_usb_pane

0xc85f,	// (0x000888d1) popup_cale_lunar_info_window

0x3690,	// (0x0007f702) im_reading_pane_t1_ParamLimits

0xabfb,	// (0x00086c6d) list_im_pane_ParamLimits

0xac0c,	// (0x00086c7e) scroll_pane_cp07_ParamLimits

0xa5c9,	// (0x0008663b) grid_highlight_pane_cp012

0xa824,	// (0x00086896) mup_scale_pane_ParamLimits

0xb37a,	// (0x000873ec) main_usb_pane_g1_ParamLimits

0xb37a,	// (0x000873ec) main_usb_pane_g1

0x5313,	// (0x00081385) main_usb_pane_g2_ParamLimits

0x5313,	// (0x00081385) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0008b628) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0008b628) main_usb_pane_g

0x531f,	// (0x00081391) main_usb_pane_t1_ParamLimits

0x531f,	// (0x00081391) main_usb_pane_t1

0x5331,	// (0x000813a3) main_usb_pane_t2_ParamLimits

0x5331,	// (0x000813a3) main_usb_pane_t2

0x5343,	// (0x000813b5) main_usb_pane_t3_ParamLimits

0x5343,	// (0x000813b5) main_usb_pane_t3

0x5355,	// (0x000813c7) main_usb_pane_t4_ParamLimits

0x5355,	// (0x000813c7) main_usb_pane_t4

0x5367,	// (0x000813d9) main_usb_pane_t5_ParamLimits

0x5367,	// (0x000813d9) main_usb_pane_t5

0x5379,	// (0x000813eb) main_usb_pane_t6_ParamLimits

0x5379,	// (0x000813eb) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0008b62d) main_usb_pane_t_ParamLimits

0x467e,	// (0x000806f0) aid_text_placing

0x4689,	// (0x000806fb) main_location2_pane_t1_ParamLimits

0x469f,	// (0x00080711) main_location2_pane_t2_ParamLimits

0x46b5,	// (0x00080727) main_location2_pane_t3_ParamLimits

0x46cb,	// (0x0008073d) main_location2_pane_t4_ParamLimits

0x46cb,	// (0x0008073d) main_location2_pane_t4

0xf3da,	// (0x0008b44c) main_location2_pane_t_ParamLimits

0xa860,	// (0x000868d2) find_pinb_pane_g2_ParamLimits

0xa860,	// (0x000868d2) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0008b19a) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0008b19a) find_pinb_pane_g

0xa86c,	// (0x000868de) find_pinb_pane_t1_ParamLimits

0xa87e,	// (0x000868f0) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0008b19f) find_pinb_pane_t_ParamLimits

0xa5c9,	// (0x0008663b) main_call3_pane

0x3d6b,	// (0x0007fddd) cale_month_day_heading_pane_t1_ParamLimits

0x3de9,	// (0x0007fe5b) cale_month_day_heading_pane_t2_ParamLimits

0x3e72,	// (0x0007fee4) cale_month_day_heading_pane_t3_ParamLimits

0x3efb,	// (0x0007ff6d) cale_month_day_heading_pane_t4_ParamLimits

0x3f84,	// (0x0007fff6) cale_month_day_heading_pane_t5_ParamLimits

0x4011,	// (0x00080083) cale_month_day_heading_pane_t6_ParamLimits

0x40a2,	// (0x00080114) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0008b323) cale_month_day_heading_pane_t_ParamLimits

0x432e,	// (0x000803a0) smil_status_volume_pane

0x4ed1,	// (0x00080f43) postcard_address_pane_ParamLimits

0x4ed1,	// (0x00080f43) postcard_address_pane

0x4edf,	// (0x00080f51) postcard_message_pane_ParamLimits

0x4edf,	// (0x00080f51) postcard_message_pane

0x52e9,	// (0x0008135b) call2_cli_visual_pane_t1_ParamLimits

0x52e9,	// (0x0008135b) call2_cli_visual_pane_t1

0x58de,	// (0x00081950) postcard_message_pane_t1_ParamLimits

0x58de,	// (0x00081950) postcard_message_pane_t1

0x58c7,	// (0x00081939) postcard_address_pane_t1_ParamLimits

0x58c7,	// (0x00081939) postcard_address_pane_t1

0x58b8,	// (0x0008192a) popup_call3_audio_in_window_ParamLimits

0x58b8,	// (0x0008192a) popup_call3_audio_in_window

0x5796,	// (0x00081808) bg_popup_call3_in_pane_ParamLimits

0x5796,	// (0x00081808) bg_popup_call3_in_pane

0x57fe,	// (0x00081870) popup_call3_audio_in_window_g1_ParamLimits

0x57fe,	// (0x00081870) popup_call3_audio_in_window_g1

0x5816,	// (0x00081888) popup_call3_audio_in_window_g2_ParamLimits

0x5816,	// (0x00081888) popup_call3_audio_in_window_g2

0x582e,	// (0x000818a0) popup_call3_audio_in_window_g3_ParamLimits

0x582e,	// (0x000818a0) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0008b68f) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0008b68f) popup_call3_audio_in_window_g

0x5856,	// (0x000818c8) popup_call3_audio_in_window_t1_ParamLimits

0x5856,	// (0x000818c8) popup_call3_audio_in_window_t1

0x587e,	// (0x000818f0) popup_call3_audio_in_window_t2_ParamLimits

0x587e,	// (0x000818f0) popup_call3_audio_in_window_t2

0x58a6,	// (0x00081918) popup_call3_audio_in_window_t3_ParamLimits

0x58a6,	// (0x00081918) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0008b698) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0008b698) popup_call3_audio_in_window_t

0xb447,	// (0x000874b9) bg_popup_call3_rect_pane

0xc64e,	// (0x000886c0) bg_popup_call3_rect_pane_g1

0xaa0a,	// (0x00086a7c) bg_popup_call3_rect_pane_g2

0xc656,	// (0x000886c8) bg_popup_call3_rect_pane_g3

0xc65e,	// (0x000886d0) bg_popup_call3_rect_pane_g4

0xc666,	// (0x000886d8) bg_popup_call3_rect_pane_g5

0xc66e,	// (0x000886e0) bg_popup_call3_rect_pane_g6

0xc676,	// (0x000886e8) bg_popup_call3_rect_pane_g7

0x4b25,	// (0x00080b97) mup_visualizer_osc_pane

0xb506,	// (0x00087578) mup_visualizer_spec_pane

0x57b6,	// (0x00081828) call3_video_qcif_pane_ParamLimits

0x57b6,	// (0x00081828) call3_video_qcif_pane

0x57c8,	// (0x0008183a) call3_video_qcif_uncrop_pane_ParamLimits

0x57c8,	// (0x0008183a) call3_video_qcif_uncrop_pane

0x57d8,	// (0x0008184a) call3_video_subqcif_pane_ParamLimits

0x57d8,	// (0x0008184a) call3_video_subqcif_pane

0x57ec,	// (0x0008185e) call3_video_subqcif_uncrop_pane_ParamLimits

0x57ec,	// (0x0008185e) call3_video_subqcif_uncrop_pane

0x5846,	// (0x000818b8) popup_call3_audio_in_window_g4_ParamLimits

0x5846,	// (0x000818b8) popup_call3_audio_in_window_g4

0x5761,	// (0x000817d3) mup_spec_half_pane

0x576a,	// (0x000817dc) mup_spec_half_pane_cp

0xc8fa,	// (0x0008896c) mup_osc_middle_pane

0xc903,	// (0x00088975) mup_visualizer_osc_pane_g1

0x5741,	// (0x000817b3) mup_spec_bar_pane_ParamLimits

0x5741,	// (0x000817b3) mup_spec_bar_pane

0xc8e7,	// (0x00088959) mup_spec_bar_pane_g1

0xc8f1,	// (0x00088963) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0008b683) mup_spec_bar_pane_g

0x2818,	// (0x0007e88a) aid_cale_week_size_cell_pane_ParamLimits

0x2832,	// (0x0007e8a4) bg_cale_heading_pane_ParamLimits

0xaa3e,	// (0x00086ab0) bg_cale_pane_cp01_ParamLimits

0x285b,	// (0x0007e8cd) cale_week_corner_pane_ParamLimits

0x287a,	// (0x0007e8ec) cale_week_day_heading_pane_ParamLimits

0x28a8,	// (0x0007e91a) cale_week_scroll_pane_g1_ParamLimits

0x28cc,	// (0x0007e93e) cale_week_scroll_pane_g2_ParamLimits

0x28e4,	// (0x0007e956) cale_week_scroll_pane_g3_ParamLimits

0x28fc,	// (0x0007e96e) cale_week_scroll_pane_g4_ParamLimits

0x2914,	// (0x0007e986) cale_week_scroll_pane_g5_ParamLimits

0x292c,	// (0x0007e99e) cale_week_scroll_pane_g6_ParamLimits

0x2948,	// (0x0007e9ba) cale_week_scroll_pane_g7_ParamLimits

0x2964,	// (0x0007e9d6) cale_week_scroll_pane_g8_ParamLimits

0x2980,	// (0x0007e9f2) cale_week_scroll_pane_g9_ParamLimits

0x299d,	// (0x0007ea0f) cale_week_scroll_pane_g10_ParamLimits

0x29ba,	// (0x0007ea2c) cale_week_scroll_pane_g11_ParamLimits

0x29d7,	// (0x0007ea49) cale_week_scroll_pane_g12_ParamLimits

0x29f4,	// (0x0007ea66) cale_week_scroll_pane_g13_ParamLimits

0x2a11,	// (0x0007ea83) cale_week_scroll_pane_g14_ParamLimits

0x2a3a,	// (0x0007eaac) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0008b22b) cale_week_scroll_pane_g_ParamLimits

0x2a63,	// (0x0007ead5) cale_week_time_pane_ParamLimits

0x2a7f,	// (0x0007eaf1) grid_cale_week_pane_ParamLimits

0xaa5c,	// (0x00086ace) listscroll_cale_week_pane_t1

0xaa6e,	// (0x00086ae0) scroll_pane_cp08_ParamLimits

0x38b1,	// (0x0007f923) cale_month_corner_pane_ParamLimits

0xae2c,	// (0x00086e9e) cale_month_pane_t1

0x3d09,	// (0x0007fd7b) cale_month_week_pane_ParamLimits

0xb37a,	// (0x000873ec) popup_call_status_window_g1_ParamLimits

0x4487,	// (0x000804f9) popup_call_status_window_g2_ParamLimits

0x4493,	// (0x00080505) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0008b3d3) popup_call_status_window_g_ParamLimits

0xb1db,	// (0x0008724d) aid_call2_pane

0x1044,	// (0x0007d0b6) msg_header_pane_g1

0x4ed1,	// (0x00080f43) postcard_address2_pane_ParamLimits

0x4ed1,	// (0x00080f43) postcard_address2_pane

0x4edf,	// (0x00080f51) postcard_message2_pane_ParamLimits

0x4edf,	// (0x00080f51) postcard_message2_pane

0x56e8,	// (0x0008175a) message2_row_pane_ParamLimits

0x56e8,	// (0x0008175a) message2_row_pane

0x5702,	// (0x00081774) address2_row_pane_ParamLimits

0x5702,	// (0x00081774) address2_row_pane

0xc8b5,	// (0x00088927) postcard_message2_row_pane_g1

0xc8bd,	// (0x0008892f) postcard_message2_row_pane_t1

0xc8b5,	// (0x00088927) address2_row_pane_g1

0xc8bd,	// (0x0008892f) address2_row_pane_t1

0x2fb9,	// (0x0007f02b) aid_size_cell_vorec

0xa5c9,	// (0x0008663b) main_rss_pane

0x5715,	// (0x00081787) rss_list_single_pane_ParamLimits

0x5715,	// (0x00081787) rss_list_single_pane

0xc8cb,	// (0x0008893d) rss_list_single_pane_t1

0xc8d9,	// (0x0008894b) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0008b67e) rss_list_single_pane_t

0xa5c9,	// (0x0008663b) main_camera2_pane

0xa5c9,	// (0x0008663b) main_video2_pane

0x5942,	// (0x000819b4) cams_zoom_pane_cp2_ParamLimits

0x5942,	// (0x000819b4) cams_zoom_pane_cp2

0x594e,	// (0x000819c0) image2_vga_pane_ParamLimits

0x594e,	// (0x000819c0) image2_vga_pane

0x595d,	// (0x000819cf) main_camera2_pane_g1_ParamLimits

0x595d,	// (0x000819cf) main_camera2_pane_g1

0x5969,	// (0x000819db) main_camera2_pane_g2_ParamLimits

0x5969,	// (0x000819db) main_camera2_pane_g2

0x5975,	// (0x000819e7) main_camera2_pane_g3_ParamLimits

0x5975,	// (0x000819e7) main_camera2_pane_g3

0x5981,	// (0x000819f3) main_camera2_pane_g4_ParamLimits

0x5981,	// (0x000819f3) main_camera2_pane_g4

0x598d,	// (0x000819ff) main_camera2_pane_g5_ParamLimits

0x598d,	// (0x000819ff) main_camera2_pane_g5

0x5999,	// (0x00081a0b) main_camera2_pane_g6_ParamLimits

0x5999,	// (0x00081a0b) main_camera2_pane_g6

0x59a5,	// (0x00081a17) main_camera2_pane_g7_ParamLimits

0x59a5,	// (0x00081a17) main_camera2_pane_g7

0x59b1,	// (0x00081a23) main_camera2_pane_g8_ParamLimits

0x59b1,	// (0x00081a23) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0008b69f) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0008b69f) main_camera2_pane_g

0x59c9,	// (0x00081a3b) main_camera2_pane_t1_ParamLimits

0x59c9,	// (0x00081a3b) main_camera2_pane_t1

0x59db,	// (0x00081a4d) main_camera2_pane_t2_ParamLimits

0x59db,	// (0x00081a4d) main_camera2_pane_t2

0x59ed,	// (0x00081a5f) main_camera2_pane_t3_ParamLimits

0x59ed,	// (0x00081a5f) main_camera2_pane_t3

0x59ff,	// (0x00081a71) main_camera2_pane_t4_ParamLimits

0x59ff,	// (0x00081a71) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0008b6b2) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0008b6b2) main_camera2_pane_t

0x5a5c,	// (0x00081ace) cams_zoom_pane_cp4_ParamLimits

0x5a5c,	// (0x00081ace) cams_zoom_pane_cp4

0x5a6c,	// (0x00081ade) image2_cif_pane_ParamLimits

0x5a6c,	// (0x00081ade) image2_cif_pane

0x5a81,	// (0x00081af3) image2_subqcif_pane_ParamLimits

0x5a81,	// (0x00081af3) image2_subqcif_pane

0x5a90,	// (0x00081b02) main_video2_pane_g1_ParamLimits

0x5a90,	// (0x00081b02) main_video2_pane_g1

0x5aa2,	// (0x00081b14) main_video2_pane_g2_ParamLimits

0x5aa2,	// (0x00081b14) main_video2_pane_g2

0x5ab2,	// (0x00081b24) main_video2_pane_g3_ParamLimits

0x5ab2,	// (0x00081b24) main_video2_pane_g3

0x5ac2,	// (0x00081b34) main_video2_pane_g4_ParamLimits

0x5ac2,	// (0x00081b34) main_video2_pane_g4

0x5ad2,	// (0x00081b44) main_video2_pane_g5_ParamLimits

0x5ad2,	// (0x00081b44) main_video2_pane_g5

0x5ae2,	// (0x00081b54) main_video2_pane_g6_ParamLimits

0x5ae2,	// (0x00081b54) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0008b6c1) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0008b6c1) main_video2_pane_g

0x5af4,	// (0x00081b66) main_video2_pane_t1_ParamLimits

0x5af4,	// (0x00081b66) main_video2_pane_t1

0x5b0e,	// (0x00081b80) main_video2_pane_t2_ParamLimits

0x5b0e,	// (0x00081b80) main_video2_pane_t2

0x5b34,	// (0x00081ba6) main_video2_pane_t3_ParamLimits

0x5b34,	// (0x00081ba6) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0008b6ce) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0008b6ce) main_video2_pane_t

0x5430,	// (0x000814a2) call_muted_g2

0x0001,

0xf5fe,	// (0x0008b670) call_muted_g

0xa5c9,	// (0x0008663b) main_mup2_pane

0xc93a,	// (0x000889ac) main_mup2_pane_g1_ParamLimits

0xc93a,	// (0x000889ac) main_mup2_pane_g1

0x5b5a,	// (0x00081bcc) main_mup2_pane_g2_ParamLimits

0x5b5a,	// (0x00081bcc) main_mup2_pane_g2

0x5dec,	// (0x00081e5e) main_mup_pane_g13_cp1

0x5df4,	// (0x00081e66) mup_volume_pane_cp1

0x5b7c,	// (0x00081bee) main_mup2_pane_g4_ParamLimits

0x5b7c,	// (0x00081bee) main_mup2_pane_g4

0x5b91,	// (0x00081c03) main_mup2_pane_g5_ParamLimits

0x5b91,	// (0x00081c03) main_mup2_pane_g5

0x5ba6,	// (0x00081c18) main_mup2_pane_g6_ParamLimits

0x5ba6,	// (0x00081c18) main_mup2_pane_g6

0x5bbb,	// (0x00081c2d) main_mup2_pane_g7_ParamLimits

0x5bbb,	// (0x00081c2d) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0008b6d5) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0008b6d5) main_mup2_pane_g

0x5bd7,	// (0x00081c49) main_mup2_pane_t1_ParamLimits

0x5bd7,	// (0x00081c49) main_mup2_pane_t1

0x5bee,	// (0x00081c60) main_mup2_pane_t2_ParamLimits

0x5bee,	// (0x00081c60) main_mup2_pane_t2

0x5c05,	// (0x00081c77) main_mup2_pane_t3_ParamLimits

0x5c05,	// (0x00081c77) main_mup2_pane_t3

0x5c1c,	// (0x00081c8e) main_mup2_pane_t4_ParamLimits

0x5c1c,	// (0x00081c8e) main_mup2_pane_t4

0x5c36,	// (0x00081ca8) main_mup2_pane_t5_ParamLimits

0x5c36,	// (0x00081ca8) main_mup2_pane_t5

0x5c50,	// (0x00081cc2) main_mup2_pane_t6_ParamLimits

0x5c50,	// (0x00081cc2) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0008b6e4) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0008b6e4) main_mup2_pane_t

0x5c88,	// (0x00081cfa) mup2_visualizer_pane_ParamLimits

0x5c88,	// (0x00081cfa) mup2_visualizer_pane

0x5cbe,	// (0x00081d30) mup_progress_pane_cp_ParamLimits

0x5cbe,	// (0x00081d30) mup_progress_pane_cp

0x5dd7,	// (0x00081e49) mup_volume_pane_cp_ParamLimits

0x5dd7,	// (0x00081e49) mup_volume_pane_cp

0x5cd7,	// (0x00081d49) mup2_visualizer_pane_g1_ParamLimits

0x5cd7,	// (0x00081d49) mup2_visualizer_pane_g1

0xc946,	// (0x000889b8) mup2_visualizer_pane_g2_ParamLimits

0xc946,	// (0x000889b8) mup2_visualizer_pane_g2

0x5cec,	// (0x00081d5e) mup2_visualizer_pane_g3_ParamLimits

0x5cec,	// (0x00081d5e) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0008b6f1) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0008b6f1) mup2_visualizer_pane_g

0xb726,	// (0x00087798) aid_size_cell_fmradio

0x5546,	// (0x000815b8) aid_height_parent_landcape

0xac8a,	// (0x00086cfc) wml_content_pane_cp

0xac92,	// (0x00086d04) wml_tabs_pane

0xac9b,	// (0x00086d0d) popup_wml_miniature_window

0xaca3,	// (0x00086d15) scroll_pane_cp021

0xacb7,	// (0x00086d29) wml_content_pane_comp8

0xa5c9,	// (0x0008663b) bg_popup_sub_pane_cp05

0xc964,	// (0x000889d6) popup_wml_miniature_window_g1

0xc96c,	// (0x000889de) wml_miniature_view_pane

0x5cfa,	// (0x00081d6c) aid_size_wml_view

0x5d02,	// (0x00081d74) wml_miniature_view_pane_g1

0x5d0b,	// (0x00081d7d) wml_miniature_view_pane_g2

0x5d14,	// (0x00081d86) wml_miniature_view_pane_g3

0x5d1c,	// (0x00081d8e) wml_miniature_view_pane_g4

0x5d24,	// (0x00081d96) wml_miniature_view_pane_g5

0x5d2c,	// (0x00081d9e) wml_miniature_view_pane_g6

0x5d34,	// (0x00081da6) wml_miniature_view_pane_g7

0x5d3c,	// (0x00081dae) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0008b6f8) wml_miniature_view_pane_g

0xc93a,	// (0x000889ac) background_graphic_ParamLimits

0xc93a,	// (0x000889ac) background_graphic

0xc974,	// (0x000889e6) wml_tabs_2_pane

0xc97d,	// (0x000889ef) wml_tabs_3_pane_ParamLimits

0xc97d,	// (0x000889ef) wml_tabs_3_pane

0xc98f,	// (0x00088a01) wml_tabs_4_pane_ParamLimits

0xc98f,	// (0x00088a01) wml_tabs_4_pane

0xc9a5,	// (0x00088a17) wml_tabs_5_pane_ParamLimits

0xc9a5,	// (0x00088a17) wml_tabs_5_pane

0xc9bf,	// (0x00088a31) wml_tabs_pane_g2_ParamLimits

0xc9bf,	// (0x00088a31) wml_tabs_pane_g2

0xc9d3,	// (0x00088a45) wml_tabs_pane_g3_ParamLimits

0xc9d3,	// (0x00088a45) wml_tabs_pane_g3

0x5d44,	// (0x00081db6) wml_tabs_2_active_pane_ParamLimits

0x5d44,	// (0x00081db6) wml_tabs_2_active_pane

0x5d56,	// (0x00081dc8) wml_tabs_2_passive_pane_ParamLimits

0x5d56,	// (0x00081dc8) wml_tabs_2_passive_pane

0x5d68,	// (0x00081dda) wml_tabs_3_active_pane_cp_ParamLimits

0x5d68,	// (0x00081dda) wml_tabs_3_active_pane_cp

0x5d7b,	// (0x00081ded) wml_tabs_3_passive_pane_ParamLimits

0x5d7b,	// (0x00081ded) wml_tabs_3_passive_pane

0x5d8c,	// (0x00081dfe) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d8c,	// (0x00081dfe) wml_tabs_3_passive_pane_cp

0x5da1,	// (0x00081e13) tabs_4_active_pane

0x5da9,	// (0x00081e1b) tabs_4_passive_pane

0x5db1,	// (0x00081e23) tabs_4_passive_pane_cp

0x5db9,	// (0x00081e2b) tabs_4_passive_pane_cp2

0x530b,	// (0x0008137d) aid_height_text

0x4aee,	// (0x00080b60) mup_volume_cont_pane_ParamLimits

0x4aee,	// (0x00080b60) mup_volume_cont_pane

0x236e,	// (0x0007e3e0) aid_size_cell_pinb

0x2378,	// (0x0007e3ea) aid_size_list_pinb

0x5ca7,	// (0x00081d19) mup2_volume_cont_pane_ParamLimits

0x5ca7,	// (0x00081d19) mup2_volume_cont_pane

0x5dc3,	// (0x00081e35) mup2_volume_cont_pane_g1_ParamLimits

0x5dc3,	// (0x00081e35) mup2_volume_cont_pane_g1

0x1ff2,	// (0x0007e064) aid_size_cell_touch_ParamLimits

0x1ff2,	// (0x0007e064) aid_size_cell_touch

0x2258,	// (0x0007e2ca) touch_pane_ParamLimits

0x2258,	// (0x0007e2ca) touch_pane

0xa165,	// (0x000861d7) main_rss2_pane

0xc9f0,	// (0x00088a62) listscroll_rss2_pane

0xc9f9,	// (0x00088a6b) rss2_navigation_pane

0xca01,	// (0x00088a73) list_rss2_pane

0xb2ff,	// (0x00087371) scroll_pane_cp22

0xca09,	// (0x00088a7b) rss2_navigation_pane_g1

0xca12,	// (0x00088a84) rss2_navigation_pane_g2

0xca1a,	// (0x00088a8c) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0008b709) rss2_navigation_pane_g

0xca22,	// (0x00088a94) rss2_navigation_pane_t1

0x5dfc,	// (0x00081e6e) rss2_list_single_pane_ParamLimits

0x5dfc,	// (0x00081e6e) rss2_list_single_pane

0xca30,	// (0x00088aa2) rss2_list_single_pane_t2

0xca3e,	// (0x00088ab0) rss2_list_single_pane_t3_ParamLimits

0xca3e,	// (0x00088ab0) rss2_list_single_pane_t3

0xca5b,	// (0x00088acd) rss2_list_single_pane_t4

0x4318,	// (0x0008038a) smil_status_pane_g1

0xa89f,	// (0x00086911) main_image2_pane_ParamLimits

0xa89f,	// (0x00086911) main_image2_pane

0x59bd,	// (0x00081a2f) main_camera2_pane_g9_ParamLimits

0x59bd,	// (0x00081a2f) main_camera2_pane_g9

0x5a11,	// (0x00081a83) main_camera2_pane_t5_ParamLimits

0x5a11,	// (0x00081a83) main_camera2_pane_t5

0x5a23,	// (0x00081a95) main_camera2_pane_t6_ParamLimits

0x5a23,	// (0x00081a95) main_camera2_pane_t6

0x5e1f,	// (0x00081e91) main_image2_pane_g1_ParamLimits

0x5e1f,	// (0x00081e91) main_image2_pane_g1

0x50a8,	// (0x0008111a) smil2_video_pane_ParamLimits

0x50a8,	// (0x0008111a) smil2_video_pane

0x0ddc,	// (0x0007ce4e) aid_zoom_text_primary_cp

0xa1ac,	// (0x0008621e) popup_preview_fixed_window

0xabf3,	// (0x00086c65) im_reading_pane_g1

0x5907,	// (0x00081979) cams2_bc_adjust_pane_cp_ParamLimits

0x5907,	// (0x00081979) cams2_bc_adjust_pane_cp

0x5a4e,	// (0x00081ac0) cams2_bc_adjust_pane_ParamLimits

0x5a4e,	// (0x00081ac0) cams2_bc_adjust_pane

0x5e2b,	// (0x00081e9d) cams2_bc_adjust_pane_g1

0x5e33,	// (0x00081ea5) cams2_slider_pane

0x5e3c,	// (0x00081eae) cams2_slider_pane_g1

0x5e45,	// (0x00081eb7) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0008b710) cams2_slider_pane_g

0x2473,	// (0x0007e4e5) calc_display_pane_ParamLimits

0x2491,	// (0x0007e503) calc_paper_pane_ParamLimits

0x24ad,	// (0x0007e51f) grid_calc_pane_ParamLimits

0x44f1,	// (0x00080563) popup_clock_digital_window_t1_ParamLimits

0xb6c3,	// (0x00087735) main_image_pane_t1

0x2459,	// (0x0007e4cb) aid_size_cell_calc_ParamLimits

0x2459,	// (0x0007e4cb) aid_size_cell_calc

0x5578,	// (0x000815ea) popup_blid_sat_info2_window_ParamLimits

0x5578,	// (0x000815ea) popup_blid_sat_info2_window

0xca71,	// (0x00088ae3) aid_size_cell_blid

0xca79,	// (0x00088aeb) bg_popup_window_pane_cp07

0xca9c,	// (0x00088b0e) grid_popup_blid_pane

0xcaa6,	// (0x00088b18) heading_pane_cp05_ParamLimits

0xcaa6,	// (0x00088b18) heading_pane_cp05

0xcb78,	// (0x00088bea) cell_popup_blid_pane_ParamLimits

0xcb78,	// (0x00088bea) cell_popup_blid_pane

0xcba2,	// (0x00088c14) cell_popup_blid_pane_g1

0xcbaa,	// (0x00088c1c) cell_popup_blid_pane_t1

0x5c6d,	// (0x00081cdf) mup2_indicator_pane_ParamLimits

0x5c6d,	// (0x00081cdf) mup2_indicator_pane

0xb447,	// (0x000874b9) mup2_visualizer_osc_pane

0xc952,	// (0x000889c4) mup2_visualizer_spec_pane_ParamLimits

0xc952,	// (0x000889c4) mup2_visualizer_spec_pane

0x5e5f,	// (0x00081ed1) mup2_spec_half_pane

0x5e68,	// (0x00081eda) mup2_spec_half_pane_cp

0x5e72,	// (0x00081ee4) mup2_spec_bar_pane_ParamLimits

0x5e72,	// (0x00081ee4) mup2_spec_bar_pane

0xc8e7,	// (0x00088959) mup2_spec_bar_pane_g1

0xc8f1,	// (0x00088963) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0008b683) mup2_spec_bar_pane_g

0x5e91,	// (0x00081f03) mup2_osc_middle_pane

0xc903,	// (0x00088975) mup2_visualizer_osc_pane_g1

0xa1d6,	// (0x00086248) popup_number_entry_window_t1_ParamLimits

0xa1e9,	// (0x0008625b) popup_number_entry_window_t2_ParamLimits

0xa1fb,	// (0x0008626d) popup_number_entry_window_t3_ParamLimits

0x22af,	// (0x0007e321) popup_number_entry_window_t5_ParamLimits

0x22af,	// (0x0007e321) popup_number_entry_window_t5

0xf0d3,	// (0x0008b145) popup_number_entry_window_t_ParamLimits

0xa20d,	// (0x0008627f) text_title_cp2_ParamLimits

0x4d95,	// (0x00080e07) aid_hotspot_pointer_text2_pane

0x4e2f,	// (0x00080ea1) main_viewer_pane_g9_ParamLimits

0x4e2f,	// (0x00080ea1) main_viewer_pane_g9

0xae2c,	// (0x00086e9e) cale_month_pane_t1_ParamLimits

0xae52,	// (0x00086ec4) bg_cale_pane_ParamLimits

0xae6a,	// (0x00086edc) list_cale_pane_ParamLimits

0xae7b,	// (0x00086eed) listscroll_cale_day_pane_t1

0xae8d,	// (0x00086eff) scroll_pane_cp09_ParamLimits

0x4b2d,	// (0x00080b9f) main_mup_eq_pane_t1_ParamLimits

0x4b2d,	// (0x00080b9f) main_mup_eq_pane_t1

0x4b49,	// (0x00080bbb) main_mup_eq_pane_t2_ParamLimits

0x4b49,	// (0x00080bbb) main_mup_eq_pane_t2

0x4b65,	// (0x00080bd7) main_mup_eq_pane_t3_ParamLimits

0x4b65,	// (0x00080bd7) main_mup_eq_pane_t3

0x4b7f,	// (0x00080bf1) main_mup_eq_pane_t4_ParamLimits

0x4b7f,	// (0x00080bf1) main_mup_eq_pane_t4

0x4b99,	// (0x00080c0b) main_mup_eq_pane_t5_ParamLimits

0x4b99,	// (0x00080c0b) main_mup_eq_pane_t5

0x4bb3,	// (0x00080c25) main_mup_eq_pane_t6_ParamLimits

0x4bb3,	// (0x00080c25) main_mup_eq_pane_t6

0x4bc9,	// (0x00080c3b) main_mup_eq_pane_t7_ParamLimits

0x4bc9,	// (0x00080c3b) main_mup_eq_pane_t7

0x4bdf,	// (0x00080c51) main_mup_eq_pane_t8_ParamLimits

0x4bdf,	// (0x00080c51) main_mup_eq_pane_t8

0x4bf5,	// (0x00080c67) main_mup_eq_pane_t9_ParamLimits

0x4bf5,	// (0x00080c67) main_mup_eq_pane_t9

0x4c11,	// (0x00080c83) main_mup_eq_pane_t10_ParamLimits

0x4c11,	// (0x00080c83) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0008b4d2) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0008b4d2) main_mup_eq_pane_t

0x4cd6,	// (0x00080d48) mup_equalizer_pane_cp5_ParamLimits

0x4cee,	// (0x00080d60) mup_equalizer_pane_cp6_ParamLimits

0x4d06,	// (0x00080d78) mup_equalizer_pane_cp7_ParamLimits

0xa165,	// (0x000861d7) main_gallery_pane

0xc90c,	// (0x0008897e) smil2_volume_pane

0xc914,	// (0x00088986) smil_status_volume_pane_g1_ParamLimits

0xc927,	// (0x00088999) smil_status_volume_pane_g2_ParamLimits

0x5772,	// (0x000817e4) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0008b688) smil_status_volume_pane_g_ParamLimits

0xca79,	// (0x00088aeb) bg_popup_window_pane_cp07_ParamLimits

0xca87,	// (0x00088af9) blid_firmament_pane

0x5e9a,	// (0x00081f0c) aid_size_cell_gallery_ParamLimits

0x5e9a,	// (0x00081f0c) aid_size_cell_gallery

0x5ea8,	// (0x00081f1a) grid_gallery_pane_ParamLimits

0x5ea8,	// (0x00081f1a) grid_gallery_pane

0x5eb8,	// (0x00081f2a) cell_gallery_pane_ParamLimits

0x5eb8,	// (0x00081f2a) cell_gallery_pane

0xcbb8,	// (0x00088c2a) bg_cell_gallery_focus_pane_ParamLimits

0xcbb8,	// (0x00088c2a) bg_cell_gallery_focus_pane

0xcbca,	// (0x00088c3c) cell_gallery_pane_g1_ParamLimits

0xcbca,	// (0x00088c3c) cell_gallery_pane_g1

0x5efe,	// (0x00081f70) cell_gallery_pane_g2_ParamLimits

0x5efe,	// (0x00081f70) cell_gallery_pane_g2

0x5f0b,	// (0x00081f7d) cell_gallery_pane_g3_ParamLimits

0x5f0b,	// (0x00081f7d) cell_gallery_pane_g3

0xcbd6,	// (0x00088c48) cell_gallery_pane_g4_ParamLimits

0xcbd6,	// (0x00088c48) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0008b736) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0008b736) cell_gallery_pane_g

0xcbe2,	// (0x00088c54) bg_cell_gallery_focus_pane_g1

0xcbea,	// (0x00088c5c) bg_cell_gallery_focus_pane_g2

0xcbf2,	// (0x00088c64) bg_cell_gallery_focus_pane_g3

0xcbfa,	// (0x00088c6c) bg_cell_gallery_focus_pane_g4

0xcc02,	// (0x00088c74) bg_cell_gallery_focus_pane_g5

0xcc0a,	// (0x00088c7c) bg_cell_gallery_focus_pane_g6

0xcc12,	// (0x00088c84) bg_cell_gallery_focus_pane_g7

0xcc1a,	// (0x00088c8c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0008b73f) bg_cell_gallery_focus_pane_g

0xcc22,	// (0x00088c94) aid_firma_cardinal

0xcc36,	// (0x00088ca8) blid_firmament_pane_t1

0xcc4d,	// (0x00088cbf) blid_firmament_pane_t2

0xcc64,	// (0x00088cd6) blid_firmament_pane_t3

0xcc7b,	// (0x00088ced) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0008b750) blid_firmament_pane_t

0xcc92,	// (0x00088d04) blid_sat_info_pane

0xcca2,	// (0x00088d14) blid_sat_info_pane_g1

0xcca2,	// (0x00088d14) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0008b759) blid_sat_info_pane_g

0xccac,	// (0x00088d1e) blid_sat_info_pane_t1

0xccba,	// (0x00088d2c) smil2_volume_content_pane

0xccc3,	// (0x00088d35) smil2_volume_pane_g1

0xcccb,	// (0x00088d3d) smil2_volume_content_pane_g1

0xccd4,	// (0x00088d46) smil2_volume_content_pane_g2

0xccdd,	// (0x00088d4f) smil2_volume_content_pane_g3

0xcce6,	// (0x00088d58) smil2_volume_content_pane_g4

0xccef,	// (0x00088d61) smil2_volume_content_pane_g5

0xccf8,	// (0x00088d6a) smil2_volume_content_pane_g6

0xcd01,	// (0x00088d73) smil2_volume_content_pane_g7

0xcd0a,	// (0x00088d7c) smil2_volume_content_pane_g8

0xcd13,	// (0x00088d85) smil2_volume_content_pane_g9

0xcd1c,	// (0x00088d8e) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0008b75e) smil2_volume_content_pane_g

0x2b2e,	// (0x0007eba0) cale_week_day_heading_pane_t1_ParamLimits

0x2b74,	// (0x0007ebe6) cale_week_day_heading_pane_t2_ParamLimits

0x2bbf,	// (0x0007ec31) cale_week_day_heading_pane_t3_ParamLimits

0x2c0a,	// (0x0007ec7c) cale_week_day_heading_pane_t4_ParamLimits

0x2c55,	// (0x0007ecc7) cale_week_day_heading_pane_t5_ParamLimits

0x2ca0,	// (0x0007ed12) cale_week_day_heading_pane_t6_ParamLimits

0x2ceb,	// (0x0007ed5d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0008b24a) cale_week_day_heading_pane_t_ParamLimits

0xaa90,	// (0x00086b02) bg_cale_side_pane_ParamLimits

0x2d31,	// (0x0007eda3) cale_week_time_pane_t1_ParamLimits

0x2d75,	// (0x0007ede7) cale_week_time_pane_t2_ParamLimits

0x2db9,	// (0x0007ee2b) cale_week_time_pane_t3_ParamLimits

0x2dfd,	// (0x0007ee6f) cale_week_time_pane_t4_ParamLimits

0x2e41,	// (0x0007eeb3) cale_week_time_pane_t5_ParamLimits

0x2e85,	// (0x0007eef7) cale_week_time_pane_t6_ParamLimits

0x2ec9,	// (0x0007ef3b) cale_week_time_pane_t7_ParamLimits

0x2f0d,	// (0x0007ef7f) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0008b259) cale_week_time_pane_t_ParamLimits

0x2f57,	// (0x0007efc9) cell_cale_week_pane_g2_ParamLimits

0xaa90,	// (0x00086b02) bg_cale_side_pane_cp01_ParamLimits

0x4133,	// (0x000801a5) cale_month_week_pane_t1_ParamLimits

0x414c,	// (0x000801be) cale_month_week_pane_t2_ParamLimits

0x4165,	// (0x000801d7) cale_month_week_pane_t3_ParamLimits

0x417e,	// (0x000801f0) cale_month_week_pane_t4_ParamLimits

0x4197,	// (0x00080209) cale_month_week_pane_t5_ParamLimits

0x41b2,	// (0x00080224) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0008b332) cale_month_week_pane_t_ParamLimits

0x42e1,	// (0x00080353) cell_cale_month_pane_g1_ParamLimits

0xa165,	// (0x000861d7) main_cale_event_viewer_pane

0xa165,	// (0x000861d7) listscroll_cale_event_viewer_pane

0xcd25,	// (0x00088d97) list_cale_ev_pane

0xcd2d,	// (0x00088d9f) scroll_pane_cp023

0x5f18,	// (0x00081f8a) field_cale_ev_pane_ParamLimits

0x5f18,	// (0x00081f8a) field_cale_ev_pane

0xcd39,	// (0x00088dab) field_cale_ev_content_pane_ParamLimits

0xcd39,	// (0x00088dab) field_cale_ev_content_pane

0xcd45,	// (0x00088db7) field_cale_ev_pane_g1_ParamLimits

0xcd45,	// (0x00088db7) field_cale_ev_pane_g1

0xcd51,	// (0x00088dc3) field_cale_ev_pane_g2_ParamLimits

0xcd51,	// (0x00088dc3) field_cale_ev_pane_g2

0xcd69,	// (0x00088ddb) field_cale_ev_pane_g3_ParamLimits

0xcd69,	// (0x00088ddb) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0008b773) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0008b773) field_cale_ev_pane_g

0xcd81,	// (0x00088df3) field_cale_ev_pane_t1_ParamLimits

0xcd81,	// (0x00088df3) field_cale_ev_pane_t1

0x5f3c,	// (0x00081fae) field_cale_ev_content_pane_t1_ParamLimits

0x5f3c,	// (0x00081fae) field_cale_ev_content_pane_t1

0x4d7a,	// (0x00080dec) bg_button_pane_cp01

0x27fa,	// (0x0007e86c) listscroll_cale_week_pane_ParamLimits

0x280e,	// (0x0007e880) popup_toolbar_window_cp01

0xaa5c,	// (0x00086ace) listscroll_cale_week_pane_t1_ParamLimits

0x27fa,	// (0x0007e86c) listscroll_cale_day_pane_ParamLimits

0x280e,	// (0x0007e880) popup_toolbar_window_cp02

0xae7b,	// (0x00086eed) listscroll_cale_day_pane_t1_ParamLimits

0x27fa,	// (0x0007e86c) main_cale_month_pane_ParamLimits

0x565c,	// (0x000816ce) popup_toolbar_window_cp03_ParamLimits

0x565c,	// (0x000816ce) popup_toolbar_window_cp03

0x4fb8,	// (0x0008102a) main_image_pane_g2_ParamLimits

0x4fb8,	// (0x0008102a) main_image_pane_g2

0x4fc4,	// (0x00081036) main_image_pane_g3_ParamLimits

0x4fc4,	// (0x00081036) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0008b564) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0008b564) main_image_pane_g

0xb6c3,	// (0x00087735) main_image_pane_t1_ParamLimits

0x4fd0,	// (0x00081042) main_image_pane_t2_ParamLimits

0x4fd0,	// (0x00081042) main_image_pane_t2

0x4fe2,	// (0x00081054) main_image_pane_t3_ParamLimits

0x4fe2,	// (0x00081054) main_image_pane_t3

0x4ff4,	// (0x00081066) main_image_pane_t4_ParamLimits

0x4ff4,	// (0x00081066) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0008b56b) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0008b56b) main_image_pane_t

0x5006,	// (0x00081078) popup_image_details_window_cp01

0x5010,	// (0x00081082) popup_toobar_trans_pane_cp01_ParamLimits

0x5010,	// (0x00081082) popup_toobar_trans_pane_cp01

0x55cd,	// (0x0008163f) popup_image_details_window_ParamLimits

0x55cd,	// (0x0008163f) popup_image_details_window

0xc86b,	// (0x000888dd) popup_image_focus_window

0x58f9,	// (0x0008196b) camera2_autofocus_pane_ParamLimits

0x58f9,	// (0x0008196b) camera2_autofocus_pane

0xa165,	// (0x000861d7) bg_popup_sub_pane_cp06

0xcd98,	// (0x00088e0a) popup_image_focus_window_g1

0xcda0,	// (0x00088e12) popup_image_focus_window_g2

0xcda8,	// (0x00088e1a) popup_image_focus_window_g3

0xcdb0,	// (0x00088e22) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0008b77a) popup_image_focus_window_g

0xcdb8,	// (0x00088e2a) popup_image_focus_window_t1

0xcdc6,	// (0x00088e38) popup_image_focus_window_t2

0xcdd6,	// (0x00088e48) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0008b783) popup_image_focus_window_t

0xcde4,	// (0x00088e56) camera2_autofocus_pane_g1

0xa89f,	// (0x00086911) bg_tb_trans_pane_cp01

0xcdf2,	// (0x00088e64) popup_image_details_window_g1

0xce05,	// (0x00088e77) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0008b795) popup_image_details_window_g

0xce2e,	// (0x00088ea0) popup_image_details_window_t1

0xce40,	// (0x00088eb2) popup_image_details_window_t2

0xce59,	// (0x00088ecb) popup_image_details_window_t3

0xce6d,	// (0x00088edf) popup_image_details_window_t4

0xce88,	// (0x00088efa) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0008b79c) popup_image_details_window_t

0xa903,	// (0x00086975) bg_calc_paper_pane_ParamLimits

0xa165,	// (0x000861d7) grid_highlight_pane_cp013

0x25aa,	// (0x0007e61c) list_calc_pane_ParamLimits

0x25bc,	// (0x0007e62e) scroll_pane_cp024

0xa917,	// (0x00086989) bg_calc_display_pane_ParamLimits

0x25c4,	// (0x0007e636) calc_display_pane_t1_ParamLimits

0x25d9,	// (0x0007e64b) calc_display_pane_t2_ParamLimits

0x25ee,	// (0x0007e660) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0008b1cc) calc_display_pane_t_ParamLimits

0x26c2,	// (0x0007e734) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0008b1e9) cell_calc_pane_g

0x26cb,	// (0x0007e73d) cell_calc_pane_t1

0xa976,	// (0x000869e8) grid_highlight_pane_cp02_ParamLimits

0xa98c,	// (0x000869fe) toolbar_button_pane_cp01_ParamLimits

0xa98c,	// (0x000869fe) toolbar_button_pane_cp01

0xb708,	// (0x0008777a) temp_image_control_pane_ParamLimits

0xb708,	// (0x0008777a) temp_image_control_pane

0xa89f,	// (0x00086911) main_mp3_pane

0xcea2,	// (0x00088f14) temp_image_control_pane_g1_ParamLimits

0xcea2,	// (0x00088f14) temp_image_control_pane_g1

0xceb0,	// (0x00088f22) temp_image_control_pane_g2_ParamLimits

0xceb0,	// (0x00088f22) temp_image_control_pane_g2

0xcec2,	// (0x00088f34) temp_image_control_pane_g3_ParamLimits

0xcec2,	// (0x00088f34) temp_image_control_pane_g3

0x5f87,	// (0x00081ff9) temp_image_control_pane_g4_ParamLimits

0x5f87,	// (0x00081ff9) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0008b7a7) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0008b7a7) temp_image_control_pane_g

0xcea2,	// (0x00088f14) main_mp3_pane_g1

0x5f98,	// (0x0008200a) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0008b7b0) main_mp3_pane_g

0xcf05,	// (0x00088f77) main_mp3_pane_t1

0xaaf5,	// (0x00086b67) main_camera_pane_g8_ParamLimits

0xaaf5,	// (0x00086b67) main_camera_pane_g8

0x320e,	// (0x0007f280) main_video_pane_g7_ParamLimits

0x320e,	// (0x0007f280) main_video_pane_g7

0x5a3c,	// (0x00081aae) main_camera2_pane_t7_ParamLimits

0x5a3c,	// (0x00081aae) main_camera2_pane_t7

0xac4a,	// (0x00086cbc) scroll_pane_cp025_ParamLimits

0xac4a,	// (0x00086cbc) scroll_pane_cp025

0xac5e,	// (0x00086cd0) scroll_pane_cp026_ParamLimits

0xac5e,	// (0x00086cd0) scroll_pane_cp026

0xac6d,	// (0x00086cdf) wml_content_pane_ParamLimits

0xa165,	// (0x000861d7) main_touch_calib_pane

0x603c,	// (0x000820ae) main_touch_calib_pane_g1

0x6048,	// (0x000820ba) main_touch_calib_pane_g2

0x6054,	// (0x000820c6) main_touch_calib_pane_g3

0x6060,	// (0x000820d2) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0008b7ce) main_touch_calib_pane_g

0x606c,	// (0x000820de) main_touch_calib_pane_t1

0x6083,	// (0x000820f5) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0008b7d7) main_touch_calib_pane_t

0xb388,	// (0x000873fa) mup_progress_pane_cp02

0xb3a7,	// (0x00087419) navi_pane_g1

0xb409,	// (0x0008747b) navi_pane_mp_t3

0xa89f,	// (0x00086911) main_mp3_pane_ParamLimits

0x569e,	// (0x00081710) navi_pane_ParamLimits

0xcea2,	// (0x00088f14) main_mp3_pane_g1_ParamLimits

0x5f98,	// (0x0008200a) main_mp3_pane_g2_ParamLimits

0x5fa4,	// (0x00082016) main_mp3_pane_g3_ParamLimits

0x5fa4,	// (0x00082016) main_mp3_pane_g3

0x5fb0,	// (0x00082022) main_mp3_pane_g4_ParamLimits

0x5fb0,	// (0x00082022) main_mp3_pane_g4

0xced2,	// (0x00088f44) main_mp3_pane_g5_ParamLimits

0xced2,	// (0x00088f44) main_mp3_pane_g5

0xcee0,	// (0x00088f52) main_mp3_pane_g6_ParamLimits

0xcee0,	// (0x00088f52) main_mp3_pane_g6

0xceed,	// (0x00088f5f) main_mp3_pane_g7_ParamLimits

0xceed,	// (0x00088f5f) main_mp3_pane_g7

0xcef9,	// (0x00088f6b) main_mp3_pane_g8_ParamLimits

0xcef9,	// (0x00088f6b) main_mp3_pane_g8

0xf73e,	// (0x0008b7b0) main_mp3_pane_g_ParamLimits

0x5fbc,	// (0x0008202e) main_mp3_pane_t2

0x5fcc,	// (0x0008203e) main_mp3_pane_t3

0xcf13,	// (0x00088f85) main_mp3_pane_t4

0xcf21,	// (0x00088f93) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0008b7c1) main_mp3_pane_t

0xcf2f,	// (0x00088fa1) mup_progress_pane_cp01

0x0ddc,	// (0x0007ce4e) aid_zoom_text_secondary2

0xcd25,	// (0x00088d97) list_cale_ev2_pane

0xcd2d,	// (0x00088d9f) scroll_pane_cp023_ParamLimits

0x60de,	// (0x00082150) field_cale_ev2_pane_ParamLimits

0x60de,	// (0x00082150) field_cale_ev2_pane

0x60f9,	// (0x0008216b) field_cale_ev2_pane_g1_ParamLimits

0x60f9,	// (0x0008216b) field_cale_ev2_pane_g1

0x6105,	// (0x00082177) field_cale_ev2_pane_g2_ParamLimits

0x6105,	// (0x00082177) field_cale_ev2_pane_g2

0x611d,	// (0x0008218f) field_cale_ev2_pane_g3_ParamLimits

0x611d,	// (0x0008218f) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0008b7e2) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0008b7e2) field_cale_ev2_pane_g

0x10cb,	// (0x0007d13d) field_cale_ev2_pane_t1_ParamLimits

0x10cb,	// (0x0007d13d) field_cale_ev2_pane_t1

0x10e2,	// (0x0007d154) field_cale_ev2_pane_t2_ParamLimits

0x10e2,	// (0x0007d154) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0008b7eb) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0008b7eb) field_cale_ev2_pane_t

0x4e97,	// (0x00080f09) main_postcard_pane_g5_ParamLimits

0x4e97,	// (0x00080f09) main_postcard_pane_g5

0x4ea5,	// (0x00080f17) main_postcard_pane_g6_ParamLimits

0x4ea5,	// (0x00080f17) main_postcard_pane_g6

0x304c,	// (0x0007f0be) camera2_autofocus_pane_cp_ParamLimits

0x304c,	// (0x0007f0be) camera2_autofocus_pane_cp

0xa89f,	// (0x00086911) main_mup3_pane

0x6161,	// (0x000821d3) main_mup3_pane_g1_ParamLimits

0x6161,	// (0x000821d3) main_mup3_pane_g1

0x6182,	// (0x000821f4) main_mup3_pane_g2_ParamLimits

0x6182,	// (0x000821f4) main_mup3_pane_g2

0x61fe,	// (0x00082270) main_mup3_pane_g3_ParamLimits

0x61fe,	// (0x00082270) main_mup3_pane_g3

0x6243,	// (0x000822b5) main_mup3_pane_g4_ParamLimits

0x6243,	// (0x000822b5) main_mup3_pane_g4

0x6286,	// (0x000822f8) main_mup3_pane_g5_ParamLimits

0x6286,	// (0x000822f8) main_mup3_pane_g5

0x62cb,	// (0x0008233d) main_mup3_pane_g6_ParamLimits

0x62cb,	// (0x0008233d) main_mup3_pane_g6

0xcf37,	// (0x00088fa9) main_mup3_pane_g7_ParamLimits

0xcf37,	// (0x00088fa9) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0008b7fb) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0008b7fb) main_mup3_pane_g

0x6341,	// (0x000823b3) main_mup3_pane_t1_ParamLimits

0x6341,	// (0x000823b3) main_mup3_pane_t1

0x63aa,	// (0x0008241c) main_mup3_pane_t2_ParamLimits

0x63aa,	// (0x0008241c) main_mup3_pane_t2

0x6473,	// (0x000824e5) main_mup3_pane_t4_ParamLimits

0x6473,	// (0x000824e5) main_mup3_pane_t4

0x64c7,	// (0x00082539) main_mup3_pane_t5_ParamLimits

0x64c7,	// (0x00082539) main_mup3_pane_t5

0x6575,	// (0x000825e7) main_mup3_pane_t6_ParamLimits

0x6575,	// (0x000825e7) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0008b80c) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0008b80c) main_mup3_pane_t

0x6621,	// (0x00082693) mup3_progress_pane_ParamLimits

0x6621,	// (0x00082693) mup3_progress_pane

0x669b,	// (0x0008270d) popup_mup3_control_window_ParamLimits

0x669b,	// (0x0008270d) popup_mup3_control_window

0xcf45,	// (0x00088fb7) popup_mup3_text_window

0x66b8,	// (0x0008272a) mup3_progress_pane_t1

0x66d7,	// (0x00082749) mup3_progress_pane_t2

0xcf4d,	// (0x00088fbf) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0008b819) mup3_progress_pane_t

0xcf6a,	// (0x00088fdc) mup_progress_pane_cp03

0xa165,	// (0x000861d7) bg_tb_trans_pane_cp04

0x66f6,	// (0x00082768) mup3_volume_pane

0x66fe,	// (0x00082770) popup_mup3_control_window_g1

0xdc08,	// (0x00089c7a) mup3_volume_pane_g1

0xdc11,	// (0x00089c83) mup3_volume_pane_g2

0xdc1a,	// (0x00089c8c) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0008b820) mup3_volume_pane_g

0xa165,	// (0x000861d7) bg_tb_trans_pane_cp03

0xcf7a,	// (0x00088fec) popup_mup3_text_window_g1

0xcf82,	// (0x00088ff4) popup_mup3_text_window_t1

0xa95f,	// (0x000869d1) list_calc_item_pane_g1_ParamLimits

0xc9e7,	// (0x00088a59) mup_volume_pane_cp_g1

0x609c,	// (0x0008210e) main_touch_calib_pane_t3

0x60b2,	// (0x00082124) main_touch_calib_pane_t4

0x60c8,	// (0x0008213a) main_touch_calib_pane_t5

0xa16f,	// (0x000861e1) aid_cell_size_toolbar2

0xa177,	// (0x000861e9) aid_popup3_width_pane

0x0dcc,	// (0x0007ce3e) aid_zoom_text_msg_primary

0x3021,	// (0x0007f093) vorec_t7

0xa923,	// (0x00086995) bg_calc_paper_pane_g1_ParamLimits

0xa92f,	// (0x000869a1) bg_calc_paper_pane_g2_ParamLimits

0xa93b,	// (0x000869ad) bg_calc_paper_pane_g3_ParamLimits

0xa947,	// (0x000869b9) bg_calc_paper_pane_g4_ParamLimits

0xa953,	// (0x000869c5) bg_calc_paper_pane_g5_ParamLimits

0x262f,	// (0x0007e6a1) bg_calc_paper_pane_g6_ParamLimits

0x2640,	// (0x0007e6b2) bg_calc_paper_pane_g7_ParamLimits

0x2651,	// (0x0007e6c3) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0008b1d3) bg_calc_paper_pane_g_ParamLimits

0x2664,	// (0x0007e6d6) calc_bg_paper_pane_g9_ParamLimits

0x313d,	// (0x0007f1af) image_qvga_pane_ParamLimits

0x313d,	// (0x0007f1af) image_qvga_pane

0xa824,	// (0x00086896) bg_popup_sub_pane_cp04_ParamLimits

0xb63f,	// (0x000876b1) popup_mup_playback_window_g1_ParamLimits

0xb64b,	// (0x000876bd) popup_mup_playback_window_t1_ParamLimits

0xb660,	// (0x000876d2) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0008b55f) popup_mup_playback_window_t_ParamLimits

0x5b6b,	// (0x00081bdd) main_mup2_pane_g3_ParamLimits

0x5b6b,	// (0x00081bdd) main_mup2_pane_g3

0x3401,	// (0x0007f473) popup_toolbar_window_cp04

0xba4f,	// (0x00087ac1) popup_call2_audio_second_window_g3_ParamLimits

0xba4f,	// (0x00087ac1) popup_call2_audio_second_window_g3

0xbe59,	// (0x00087ecb) popup_call2_audio_first_window_g4_ParamLimits

0xbe59,	// (0x00087ecb) popup_call2_audio_first_window_g4

0xc4d8,	// (0x0008854a) popup_call2_audio_in_window_g4_ParamLimits

0xc4d8,	// (0x0008854a) popup_call2_audio_in_window_g4

0x4fab,	// (0x0008101d) aid_area_sk_bg_cut_ParamLimits

0x4fab,	// (0x0008101d) aid_area_sk_bg_cut

0xb675,	// (0x000876e7) aid_area_sk_bg_cut_2_ParamLimits

0xb675,	// (0x000876e7) aid_area_sk_bg_cut_2

0x5eee,	// (0x00081f60) aid_placing_details_win

0x5ef6,	// (0x00081f68) aid_placing_details_win_2

0xcde4,	// (0x00088e56) camera2_autofocus_pane_g1_ParamLimits

0x21f8,	// (0x0007e26a) popup_fixed_preview_cale_window_ParamLimits

0x21f8,	// (0x0007e26a) popup_fixed_preview_cale_window

0xb458,	// (0x000874ca) navi_slider_pane_g3

0xb461,	// (0x000874d3) navi_slider_pane_g4

0xb46a,	// (0x000874dc) navi_slider_pane_g5

0xb458,	// (0x000874ca) navi_slider_pane_g6

0x489b,	// (0x0008090d) navi_slider_pane_g7

0xb57f,	// (0x000875f1) mup_scale_pane_g3

0xb588,	// (0x000875fa) mup_scale_pane_g4

0xb591,	// (0x00087603) mup_scale_pane_g5

0x4d1e,	// (0x00080d90) mup_scale_pane_g6

0x4d27,	// (0x00080d99) mup_scale_pane_g7

0xb458,	// (0x000874ca) cams2_slider_pane_g3

0xca69,	// (0x00088adb) cams2_slider_pane_g4

0x5e4e,	// (0x00081ec0) cams2_slider_pane_g5

0xb458,	// (0x000874ca) cams2_slider_pane_g6

0x5e56,	// (0x00081ec8) cams2_slider_pane_g7

0xcca2,	// (0x00088d14) camera2_autofocus_pane_cp_g1

0xc83d,	// (0x000888af) bg_popup_preview_window_pane_cp02_ParamLimits

0xc83d,	// (0x000888af) bg_popup_preview_window_pane_cp02

0xcf90,	// (0x00089002) list_fp_cale_pane_ParamLimits

0xcf90,	// (0x00089002) list_fp_cale_pane

0xcf9c,	// (0x0008900e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf9c,	// (0x0008900e) popup_fixed_preview_cale_window_t1

0x6707,	// (0x00082779) popup_fixed_preview_cale_window_t2_ParamLimits

0x6707,	// (0x00082779) popup_fixed_preview_cale_window_t2

0x671c,	// (0x0008278e) popup_fixed_preview_cale_window_t3_ParamLimits

0x671c,	// (0x0008278e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0008b827) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0008b827) popup_fixed_preview_cale_window_t

0x6731,	// (0x000827a3) list_single_fp_cale_pane_ParamLimits

0x6731,	// (0x000827a3) list_single_fp_cale_pane

0xcfba,	// (0x0008902c) list_single_fp_cale_pane_g1_ParamLimits

0xcfba,	// (0x0008902c) list_single_fp_cale_pane_g1

0xcfc6,	// (0x00089038) list_single_fp_cale_pane_g2_ParamLimits

0xcfc6,	// (0x00089038) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0008b82e) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0008b82e) list_single_fp_cale_pane_g

0xcfdf,	// (0x00089051) list_single_fp_cale_pane_t1_ParamLimits

0xcfdf,	// (0x00089051) list_single_fp_cale_pane_t1

0xcff1,	// (0x00089063) list_single_fp_cale_pane_t2_ParamLimits

0xcff1,	// (0x00089063) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0008b835) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0008b835) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa165,	// (0x000861d7) main_dialer_pane

0x6741,	// (0x000827b3) aid_cell_size_keypad

0x674b,	// (0x000827bd) dialer_ne_pane

0x6755,	// (0x000827c7) grid_dialer_command_1_pane

0x675d,	// (0x000827cf) grid_dialer_command_2_pane

0x6765,	// (0x000827d7) grid_dialer_keypad_pane

0x6779,	// (0x000827eb) bg_popup_call_pane_cp06_ParamLimits

0x6779,	// (0x000827eb) bg_popup_call_pane_cp06

0x6785,	// (0x000827f7) dialer_ne_clear_pane_ParamLimits

0x6785,	// (0x000827f7) dialer_ne_clear_pane

0xd024,	// (0x00089096) dialer_ne_pane_g1

0xd02c,	// (0x0008909e) dialer_ne_pane_t1_ParamLimits

0xd02c,	// (0x0008909e) dialer_ne_pane_t1

0x6791,	// (0x00082803) dialer_ne_pane_t2_ParamLimits

0x6791,	// (0x00082803) dialer_ne_pane_t2

0x67ae,	// (0x00082820) dialer_ne_pane_t3_ParamLimits

0x67ae,	// (0x00082820) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0008b83a) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0008b83a) dialer_ne_pane_t

0x67d2,	// (0x00082844) dialer_ne_pane_t3_copy1_ParamLimits

0x67d2,	// (0x00082844) dialer_ne_pane_t3_copy1

0x67f6,	// (0x00082868) cell_dialer_keypad_pane_ParamLimits

0x67f6,	// (0x00082868) cell_dialer_keypad_pane

0x680d,	// (0x0008287f) cell_dialer_command_1_pane_ParamLimits

0x680d,	// (0x0008287f) cell_dialer_command_1_pane

0x6823,	// (0x00082895) cell_dialer_command_2_pane_ParamLimits

0x6823,	// (0x00082895) cell_dialer_command_2_pane

0xd03e,	// (0x000890b0) bg_button_pane_cp02_ParamLimits

0xd03e,	// (0x000890b0) bg_button_pane_cp02

0x6832,	// (0x000828a4) cell_dialer_keypad_pane_g1_ParamLimits

0x6832,	// (0x000828a4) cell_dialer_keypad_pane_g1

0xd03e,	// (0x000890b0) bg_button_pane_cp03_ParamLimits

0xd03e,	// (0x000890b0) bg_button_pane_cp03

0x6847,	// (0x000828b9) cell_dialer_command_1_pane_g1_ParamLimits

0x6847,	// (0x000828b9) cell_dialer_command_1_pane_g1

0xd04a,	// (0x000890bc) bg_button_pane_cp04

0x685b,	// (0x000828cd) cell_dialer_command_2_pane_g1

0xb447,	// (0x000874b9) bg_button_pane_cp06

0xd052,	// (0x000890c4) dialer_ne_clear_pane_g1

0x47d6,	// (0x00080848) navi_pane_g2

0x4804,	// (0x00080876) navi_pane_g3

0x0002,

0xf3f0,	// (0x0008b462) navi_pane_g

0x482f,	// (0x000808a1) navi_pane_mv_g2

0x4856,	// (0x000808c8) navi_pane_mv_g5

0x485e,	// (0x000808d0) navi_pane_mv_t1

0xa917,	// (0x00086989) main_clock2_pane

0x6899,	// (0x0008290b) main_clock2_list_pane_ParamLimits

0x6899,	// (0x0008290b) main_clock2_list_pane

0x68c3,	// (0x00082935) main_clock2_pane_t1_ParamLimits

0x68c3,	// (0x00082935) main_clock2_pane_t1

0x68e5,	// (0x00082957) main_clock2_pane_t2_ParamLimits

0x68e5,	// (0x00082957) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0008b841) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0008b841) main_clock2_pane_t

0x6942,	// (0x000829b4) popup_clock_analogue_window_cp03_ParamLimits

0x6942,	// (0x000829b4) popup_clock_analogue_window_cp03

0x6962,	// (0x000829d4) popup_clock_digital_window_cp02_ParamLimits

0x6962,	// (0x000829d4) popup_clock_digital_window_cp02

0x69d3,	// (0x00082a45) main_clock2_list_single_pane_ParamLimits

0x69d3,	// (0x00082a45) main_clock2_list_single_pane

0xb447,	// (0x000874b9) list_highlight_pane_cp05

0xd06e,	// (0x000890e0) main_clock2_list_single_pane_t1

0x3401,	// (0x0007f473) popup_toolbar_window_cp04_ParamLimits

0x5f57,	// (0x00081fc9) camera2_autofocus_pane_g2_ParamLimits

0x5f57,	// (0x00081fc9) camera2_autofocus_pane_g2

0x5f63,	// (0x00081fd5) camera2_autofocus_pane_g3_ParamLimits

0x5f63,	// (0x00081fd5) camera2_autofocus_pane_g3

0x5f6f,	// (0x00081fe1) camera2_autofocus_pane_g4_ParamLimits

0x5f6f,	// (0x00081fe1) camera2_autofocus_pane_g4

0x5f7b,	// (0x00081fed) camera2_autofocus_pane_g5_ParamLimits

0x5f7b,	// (0x00081fed) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0008b78a) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0008b78a) camera2_autofocus_pane_g

0x6141,	// (0x000821b3) camera2_autofocus_pane_cp_g2

0x6149,	// (0x000821bb) camera2_autofocus_pane_cp_g3

0x6151,	// (0x000821c3) camera2_autofocus_pane_cp_g4

0x6159,	// (0x000821cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0008b7f0) camera2_autofocus_pane_cp_g

0x6771,	// (0x000827e3) popup_dialer_spcha_window

0xa165,	// (0x000861d7) bg_popup_sub_pane_cp07

0xd07c,	// (0x000890ee) list_spcha_pane

0xd084,	// (0x000890f6) list_single_spcha_pane_ParamLimits

0xd084,	// (0x000890f6) list_single_spcha_pane

0xa165,	// (0x000861d7) list_highlight_pane_cp06

0xd095,	// (0x00089107) list_single_spcha_pane_t1

0xc282,	// (0x000882f4) popup_call2_audio_out_window_g4_ParamLimits

0xc282,	// (0x000882f4) popup_call2_audio_out_window_g4

0xa165,	// (0x000861d7) main_imed2_pane

0xc875,	// (0x000888e7) popup_imed_adjust2_window

0x55db,	// (0x0008164d) popup_imed_trans_window_ParamLimits

0x55db,	// (0x0008164d) popup_imed_trans_window

0xcad2,	// (0x00088b44) popup_blid_sat_info2_window_t1

0xcae0,	// (0x00088b52) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0008b71f) popup_blid_sat_info2_window_t

0x6a7d,	// (0x00082aef) aid_size_cell_colour_35

0x6a97,	// (0x00082b09) aid_size_cell_colour_112

0x6aae,	// (0x00082b20) aid_size_cell_effect

0xa89f,	// (0x00086911) bg_tb_trans_pane_cp02

0xb0c8,	// (0x0008713a) heading_imed_pane

0x6ac8,	// (0x00082b3a) listscroll_imed_pane

0xd0a3,	// (0x00089115) heading_imed_pane_g1

0xd0ab,	// (0x0008911d) heading_imed_pane_t1

0xd0b9,	// (0x0008912b) grid_imed_colour_35_pane_ParamLimits

0xd0b9,	// (0x0008912b) grid_imed_colour_35_pane

0x6ad4,	// (0x00082b46) grid_imed_effect_pane

0xd0d5,	// (0x00089147) list_imed_aspect_pane

0x6ae4,	// (0x00082b56) scroll_pane_cp027_ParamLimits

0x6ae4,	// (0x00082b56) scroll_pane_cp027

0x6af0,	// (0x00082b62) cell_imed_effect_pane_ParamLimits

0x6af0,	// (0x00082b62) cell_imed_effect_pane

0xd0dd,	// (0x0008914f) cell_imed_colour_pane_ParamLimits

0xd0dd,	// (0x0008914f) cell_imed_colour_pane

0xd127,	// (0x00089199) cell_imed_colour_pane_g1_ParamLimits

0xd127,	// (0x00089199) cell_imed_colour_pane_g1

0xd138,	// (0x000891aa) hgihlgiht_grid_pane_cp016_ParamLimits

0xd138,	// (0x000891aa) hgihlgiht_grid_pane_cp016

0x6b0c,	// (0x00082b7e) cell_imed_effect_pane_g1

0x6b14,	// (0x00082b86) grid_highlight_pane_cp017

0xd149,	// (0x000891bb) list_imed_single_pane_ParamLimits

0xd149,	// (0x000891bb) list_imed_single_pane

0xa165,	// (0x000861d7) list_highlight_pane_cp07

0xd15d,	// (0x000891cf) list_imed_aspect_pane_comp1_t1

0xc849,	// (0x000888bb) bg_tb_trans_pane_cp05

0xd17f,	// (0x000891f1) popup_imed_adjust2_window_g1

0xd1a6,	// (0x00089218) popup_imed_adjust2_window_t1

0xd1be,	// (0x00089230) slider_imed_adjust_pane

0xd1d2,	// (0x00089244) slider_imed_adjust_pane_g1

0xd1e2,	// (0x00089254) slider_imed_adjust_pane_g2

0xd1f2,	// (0x00089264) slider_imed_adjust_pane_g3

0xd203,	// (0x00089275) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0008b85e) slider_imed_adjust_pane_g

0x6b1d,	// (0x00082b8f) aid_size_cell_clipart2

0x6b29,	// (0x00082b9b) grid_imed_clipart_pane

0xd214,	// (0x00089286) scroll_pane_cp031

0x6b33,	// (0x00082ba5) cell_imed_clipart_pane_ParamLimits

0x6b33,	// (0x00082ba5) cell_imed_clipart_pane

0x6b51,	// (0x00082bc3) cell_imed_clipart_pane_g1

0xa165,	// (0x000861d7) grid_highlight_pane_cp014

0x68a5,	// (0x00082917) main_clock2_pane_g1_ParamLimits

0x68a5,	// (0x00082917) main_clock2_pane_g1

0x697e,	// (0x000829f0) aid_call2_pane_cp10

0x6990,	// (0x00082a02) aid_call_pane_cp10

0xb36e,	// (0x000873e0) popup_clock_analogue_window_cp10_g1

0xb36e,	// (0x000873e0) popup_clock_analogue_window_cp10_g2

0x69a2,	// (0x00082a14) popup_clock_analogue_window_cp10_g3

0x69a2,	// (0x00082a14) popup_clock_analogue_window_cp10_g4

0xb36e,	// (0x000873e0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0008b84c) popup_clock_analogue_window_cp10_g

0x69b4,	// (0x00082a26) popup_clock_analogue_window_cp10_t1

0x69e5,	// (0x00082a57) clock_digital_number_pane_cp10_ParamLimits

0x69e5,	// (0x00082a57) clock_digital_number_pane_cp10

0x69fd,	// (0x00082a6f) clock_digital_number_pane_cp11_ParamLimits

0x69fd,	// (0x00082a6f) clock_digital_number_pane_cp11

0x6a15,	// (0x00082a87) clock_digital_number_pane_cp12_ParamLimits

0x6a15,	// (0x00082a87) clock_digital_number_pane_cp12

0x6a2d,	// (0x00082a9f) clock_digital_number_pane_cp13_ParamLimits

0x6a2d,	// (0x00082a9f) clock_digital_number_pane_cp13

0x6a45,	// (0x00082ab7) clock_digital_separator_pane_cp10_ParamLimits

0x6a45,	// (0x00082ab7) clock_digital_separator_pane_cp10

0x6a5d,	// (0x00082acf) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a5d,	// (0x00082acf) popup_clock_digital_window_cp02_t1

0xa81c,	// (0x0008688e) clock_digital_number_pane_cp10_g1

0xa81c,	// (0x0008688e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0008b867) clock_digital_number_pane_cp10_g

0xa81c,	// (0x0008688e) clock_digital_separator_pane_cp10_g1

0xa81c,	// (0x0008688e) clock_digital_separator_pane_g2_cp10

0xb417,	// (0x00087489) navi_pane_vded_g4

0xb420,	// (0x00087492) navi_pane_vded_g5

0xb429,	// (0x0008749b) navi_pane_vded_t1

0xa165,	// (0x000861d7) main_vded_pane

0x6b5a,	// (0x00082bcc) main_vded_pane_g1

0x6b66,	// (0x00082bd8) main_vded_pane_g2

0x6b70,	// (0x00082be2) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0008b86c) main_vded_pane_g

0x6b7a,	// (0x00082bec) main_vded_pane_t1

0x6b88,	// (0x00082bfa) main_vded_pane_t2

0x0001,

0xf801,	// (0x0008b873) main_vded_pane_t

0x6b96,	// (0x00082c08) vded_slider_pane

0x6ba0,	// (0x00082c12) vded_video_pane

0xd21c,	// (0x0008928e) vded_video_pane_g1

0x6bac,	// (0x00082c1e) vded_video_pane_g2

0xcca2,	// (0x00088d14) vded_video_pane_g3

0x0002,

0xf806,	// (0x0008b878) vded_video_pane_g

0xd226,	// (0x00089298) vded_slider_pane_g1

0xc9e7,	// (0x00088a59) vded_slider_pane_g2

0xd22f,	// (0x000892a1) vded_slider_pane_g3

0xd238,	// (0x000892aa) vded_slider_pane_g4

0xd241,	// (0x000892b3) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0008b87f) vded_slider_pane_g

0x668f,	// (0x00082701) mup3_rocker_pane_ParamLimits

0x668f,	// (0x00082701) mup3_rocker_pane

0x6bb5,	// (0x00082c27) mup3_control_keys_pane_g1

0x6bbd,	// (0x00082c2f) mup3_control_keys_pane_g2

0x6bc5,	// (0x00082c37) mup3_control_keys_pane_g3

0x6bcd,	// (0x00082c3f) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0008b88a) mup3_control_keys_pane_g

0x2216,	// (0x0007e288) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2216,	// (0x0007e288) popup_toolbar2_fixed_window_cp01

0x66ab,	// (0x0008271d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x66ab,	// (0x0008271d) popup_toolbar2_fixed_window_cp02

0xbbc1,	// (0x00087c33) popup_call2_audio_second_window_t4_ParamLimits

0xbbc1,	// (0x00087c33) popup_call2_audio_second_window_t4

0xc0ef,	// (0x00088161) popup_call2_audio_first_window_t6_ParamLimits

0xc0ef,	// (0x00088161) popup_call2_audio_first_window_t6

0xc385,	// (0x000883f7) popup_call2_audio_out_window_t6_ParamLimits

0xc385,	// (0x000883f7) popup_call2_audio_out_window_t6

0xa165,	// (0x000861d7) main_vitu_pane

0x6bdd,	// (0x00082c4f) aid_size_cell_itu_ParamLimits

0x6bdd,	// (0x00082c4f) aid_size_cell_itu

0x223e,	// (0x0007e2b0) bg_popup_window_pane_cp08_ParamLimits

0x223e,	// (0x0007e2b0) bg_popup_window_pane_cp08

0x6beb,	// (0x00082c5d) field_vitu_entry_pane_ParamLimits

0x6beb,	// (0x00082c5d) field_vitu_entry_pane

0x6bfa,	// (0x00082c6c) grid_vitu_function_pane_ParamLimits

0x6bfa,	// (0x00082c6c) grid_vitu_function_pane

0x6c0a,	// (0x00082c7c) grid_vitu_itu_pane_ParamLimits

0x6c0a,	// (0x00082c7c) grid_vitu_itu_pane

0x6c1a,	// (0x00082c8c) cell_vitu_itu_pane_ParamLimits

0x6c1a,	// (0x00082c8c) cell_vitu_itu_pane

0x6c31,	// (0x00082ca3) cell_vitu_function_pane_ParamLimits

0x6c31,	// (0x00082ca3) cell_vitu_function_pane

0xa89f,	// (0x00086911) bg_popup_sub_pane_cp08_ParamLimits

0xa89f,	// (0x00086911) bg_popup_sub_pane_cp08

0x6c45,	// (0x00082cb7) field_vitu_entry_pane_t1_ParamLimits

0x6c45,	// (0x00082cb7) field_vitu_entry_pane_t1

0xd262,	// (0x000892d4) field_vitu_entry_pane_t2_ParamLimits

0xd262,	// (0x000892d4) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0008b898) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0008b898) field_vitu_entry_pane_t

0xd27f,	// (0x000892f1) bg_button_pane_cp05_ParamLimits

0xd27f,	// (0x000892f1) bg_button_pane_cp05

0x6c5f,	// (0x00082cd1) cell_vitu_itu_pane_g1

0x6c77,	// (0x00082ce9) cell_vitu_itu_pane_t1_ParamLimits

0x6c77,	// (0x00082ce9) cell_vitu_itu_pane_t1

0x6c89,	// (0x00082cfb) cell_vitu_itu_pane_t2_ParamLimits

0x6c89,	// (0x00082cfb) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0008b89d) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0008b89d) cell_vitu_itu_pane_t

0xd28d,	// (0x000892ff) bg_button_pane_cp07

0x6ccc,	// (0x00082d3e) cell_vitu_function_pane_g1

0x24d1,	// (0x0007e543) main_calc_pane_g1

0x201a,	// (0x0007e08c) aid_visual_content_pane

0xa165,	// (0x000861d7) main_vradio_pane

0x6cd5,	// (0x00082d47) main_vradio_pane_g1_ParamLimits

0x6cd5,	// (0x00082d47) main_vradio_pane_g1

0xd297,	// (0x00089309) main_vradio_pane_g2_ParamLimits

0xd297,	// (0x00089309) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0008b8a4) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0008b8a4) main_vradio_pane_g

0x6ce3,	// (0x00082d55) main_vradio_pane_t1_ParamLimits

0x6ce3,	// (0x00082d55) main_vradio_pane_t1

0x6cf5,	// (0x00082d67) main_vradio_pane_t2_ParamLimits

0x6cf5,	// (0x00082d67) main_vradio_pane_t2

0xd2a4,	// (0x00089316) main_vradio_pane_t3_ParamLimits

0xd2a4,	// (0x00089316) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0008b8a9) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0008b8a9) main_vradio_pane_t

0x6d07,	// (0x00082d79) vradio_rocker_control_pane_ParamLimits

0x6d07,	// (0x00082d79) vradio_rocker_control_pane

0x6d13,	// (0x00082d85) vradio_station_info_pane_ParamLimits

0x6d13,	// (0x00082d85) vradio_station_info_pane

0xd2b8,	// (0x0008932a) vradio_frequency_info_pane_ParamLimits

0xd2b8,	// (0x0008932a) vradio_frequency_info_pane

0xcca2,	// (0x00088d14) vradio_station_info_pane_g1

0xd2c7,	// (0x00089339) vradio_station_info_pane_t1_ParamLimits

0xd2c7,	// (0x00089339) vradio_station_info_pane_t1

0xd2e9,	// (0x0008935b) vradio_station_info_pane_t2_ParamLimits

0xd2e9,	// (0x0008935b) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0008b8b0) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0008b8b0) vradio_station_info_pane_t

0xd2fb,	// (0x0008936d) vradio_tuning_pane

0xd303,	// (0x00089375) vradio_rocker_control_pane_g1

0xd30b,	// (0x0008937d) vradio_rocker_control_pane_g2

0xd313,	// (0x00089385) vradio_rocker_control_pane_g3

0xd31b,	// (0x0008938d) vradio_rocker_control_pane_g4

0xd323,	// (0x00089395) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0008b8b5) vradio_rocker_control_pane_g

0x6d20,	// (0x00082d92) vradio_frequency_info_pane_g1

0xd32b,	// (0x0008939d) vradio_frequency_info_pane_t1_ParamLimits

0xd32b,	// (0x0008939d) vradio_frequency_info_pane_t1

0x6d2a,	// (0x00082d9c) vradio_tuning_pane_g1

0x6d35,	// (0x00082da7) vradio_tuning_pane_t1

0xa183,	// (0x000861f5) area_side_right_pane_ParamLimits

0xa183,	// (0x000861f5) area_side_right_pane

0xc804,	// (0x00088876) status_small_pane_g1

0xc80c,	// (0x0008887e) status_small_pane_g2

0xc815,	// (0x00088887) status_small_pane_g3

0xc81e,	// (0x00088890) status_small_pane_g4

0x0003,

0xf603,	// (0x0008b675) status_small_pane_g

0xc827,	// (0x00088899) status_small_pane_t1

0xa165,	// (0x000861d7) main_video3_pane

0xd33f,	// (0x000893b1) cams_zoom_vslider_pane

0xd347,	// (0x000893b9) image3_wide_pane_ParamLimits

0xd347,	// (0x000893b9) image3_wide_pane

0xd361,	// (0x000893d3) image3_wide_small_pane

0xd36d,	// (0x000893df) main_video3_pane_g1_ParamLimits

0xd36d,	// (0x000893df) main_video3_pane_g1

0xd389,	// (0x000893fb) main_video3_pane_g2_ParamLimits

0xd389,	// (0x000893fb) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0008b8c0) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0008b8c0) main_video3_pane_g

0xd3a5,	// (0x00089417) main_video3_pane_t1_ParamLimits

0xd3a5,	// (0x00089417) main_video3_pane_t1

0xd3d0,	// (0x00089442) main_video3_pane_t2_ParamLimits

0xd3d0,	// (0x00089442) main_video3_pane_t2

0xd3fd,	// (0x0008946f) main_video3_pane_t3_ParamLimits

0xd3fd,	// (0x0008946f) main_video3_pane_t3

0x0002,

0xf853,	// (0x0008b8c5) main_video3_pane_t_ParamLimits

0xf853,	// (0x0008b8c5) main_video3_pane_t

0xd42a,	// (0x0008949c) cams_zoom_vslider_pane_g1

0xd433,	// (0x000894a5) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0008b8cc) cams_zoom_vslider_pane_g

0xd43b,	// (0x000894ad) small_slider_vertical_pane

0xcca2,	// (0x00088d14) small_slider_vertical_pane_g1

0xcca2,	// (0x00088d14) small_slider_vertical_pane_g2

0xd443,	// (0x000894b5) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0008b8d1) small_slider_vertical_pane_g

0xa165,	// (0x000861d7) main_hwr_training_pane

0xd44c,	// (0x000894be) hwr_training_instruct_pane_ParamLimits

0xd44c,	// (0x000894be) hwr_training_instruct_pane

0x6d44,	// (0x00082db6) hwr_training_navi_pane_ParamLimits

0x6d44,	// (0x00082db6) hwr_training_navi_pane

0x6d5e,	// (0x00082dd0) hwr_training_write_pane_ParamLimits

0x6d5e,	// (0x00082dd0) hwr_training_write_pane

0xa165,	// (0x000861d7) bg_frame_shadow_pane

0xd483,	// (0x000894f5) hwr_training_write_pane_g1

0xd48b,	// (0x000894fd) hwr_training_write_pane_g2

0xd493,	// (0x00089505) hwr_training_write_pane_g3

0xd49b,	// (0x0008950d) hwr_training_write_pane_g4

0xd4a3,	// (0x00089515) hwr_training_write_pane_g5

0xd4ab,	// (0x0008951d) hwr_training_write_pane_g6

0xd4b3,	// (0x00089525) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0008b8d8) hwr_training_write_pane_g

0x6d96,	// (0x00082e08) hwr_training_navi_pane_g1_ParamLimits

0x6d96,	// (0x00082e08) hwr_training_navi_pane_g1

0x6da8,	// (0x00082e1a) hwr_training_navi_pane_g2_ParamLimits

0x6da8,	// (0x00082e1a) hwr_training_navi_pane_g2

0x6dba,	// (0x00082e2c) hwr_training_navi_pane_g3_ParamLimits

0x6dba,	// (0x00082e2c) hwr_training_navi_pane_g3

0x6dca,	// (0x00082e3c) hwr_training_navi_pane_g4_ParamLimits

0x6dca,	// (0x00082e3c) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0008b8e7) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0008b8e7) hwr_training_navi_pane_g

0x6de4,	// (0x00082e56) hwr_training_navi_pane_t1

0x6df2,	// (0x00082e64) list_single_hwr_training_instruct_pane_ParamLimits

0x6df2,	// (0x00082e64) list_single_hwr_training_instruct_pane

0xd4bb,	// (0x0008952d) list_single_hwr_training_instruct_pane_t1

0xcbe2,	// (0x00088c54) bg_frame_shadow_pane_g1

0xd4ca,	// (0x0008953c) bg_frame_shadow_pane_g2

0xd4d2,	// (0x00089544) bg_frame_shadow_pane_g3

0xd4da,	// (0x0008954c) bg_frame_shadow_pane_g4

0xd4e2,	// (0x00089554) bg_frame_shadow_pane_g5

0xd4ea,	// (0x0008955c) bg_frame_shadow_pane_g6

0xd4f2,	// (0x00089564) bg_frame_shadow_pane_g7

0xa9e2,	// (0x00086a54) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0008b8f2) bg_frame_shadow_pane_g

0xa165,	// (0x000861d7) main_video_tele_dialer_pane

0x6e0b,	// (0x00082e7d) aid_size_cell_video_keypad_ParamLimits

0x6e0b,	// (0x00082e7d) aid_size_cell_video_keypad

0x6e1b,	// (0x00082e8d) grid_video_dialer_keypad_pane_ParamLimits

0x6e1b,	// (0x00082e8d) grid_video_dialer_keypad_pane

0x6e4d,	// (0x00082ebf) video_down_pane_cp_ParamLimits

0x6e4d,	// (0x00082ebf) video_down_pane_cp

0x6e75,	// (0x00082ee7) cell_video_dialer_keypad_pane_ParamLimits

0x6e75,	// (0x00082ee7) cell_video_dialer_keypad_pane

0xd4fa,	// (0x0008956c) bg_button_pane_cp08_ParamLimits

0xd4fa,	// (0x0008956c) bg_button_pane_cp08

0x6e8c,	// (0x00082efe) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e8c,	// (0x00082efe) cell_video_dialer_keypad_pane_g1

0x6683,	// (0x000826f5) mup3_rocker2_pane_ParamLimits

0x6683,	// (0x000826f5) mup3_rocker2_pane

0xcca2,	// (0x00088d14) mup3_rocker2_pane_g1

0x555d,	// (0x000815cf) main_dialer2_pane

0xa165,	// (0x000861d7) main_mp4_pane

0x6ecb,	// (0x00082f3d) main_mp4_pane_g1_ParamLimits

0x6ecb,	// (0x00082f3d) main_mp4_pane_g1

0x6ed9,	// (0x00082f4b) main_mp4_pane_g2_ParamLimits

0x6ed9,	// (0x00082f4b) main_mp4_pane_g2

0x6ee7,	// (0x00082f59) main_mp4_pane_g3_ParamLimits

0x6ee7,	// (0x00082f59) main_mp4_pane_g3

0x6f3a,	// (0x00082fac) main_mp4_pane_g4_ParamLimits

0x6f3a,	// (0x00082fac) main_mp4_pane_g4

0x6f62,	// (0x00082fd4) main_mp4_pane_g5_ParamLimits

0x6f62,	// (0x00082fd4) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0008b912) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0008b912) main_mp4_pane_g

0x6fb2,	// (0x00083024) main_mp4_pane_t1_ParamLimits

0x6fb2,	// (0x00083024) main_mp4_pane_t1

0x700e,	// (0x00083080) main_mp4_pane_t2_ParamLimits

0x700e,	// (0x00083080) main_mp4_pane_t2

0xd506,	// (0x00089578) main_mp4_pane_t3_ParamLimits

0xd506,	// (0x00089578) main_mp4_pane_t3

0x7060,	// (0x000830d2) main_mp4_pane_t4_ParamLimits

0x7060,	// (0x000830d2) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0008b91f) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0008b91f) main_mp4_pane_t

0x70a0,	// (0x00083112) mp4_progress_pane_ParamLimits

0x70a0,	// (0x00083112) mp4_progress_pane

0x70ea,	// (0x0008315c) mp4_rocker_pane_ParamLimits

0x70ea,	// (0x0008315c) mp4_rocker_pane

0xd52e,	// (0x000895a0) mp4_progress_pane_t1

0xd547,	// (0x000895b9) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0008b928) mp4_progress_pane_t

0xd560,	// (0x000895d2) mup_progress_pane_cp04

0xcca2,	// (0x00088d14) mp4_rocker_pane_g1

0x710c,	// (0x0008317e) aid_cell_size_keypad2_ParamLimits

0x710c,	// (0x0008317e) aid_cell_size_keypad2

0x711c,	// (0x0008318e) dialer2_ne_pane_ParamLimits

0x711c,	// (0x0008318e) dialer2_ne_pane

0x7128,	// (0x0008319a) grid_dialer2_keypad_pane_ParamLimits

0x7128,	// (0x0008319a) grid_dialer2_keypad_pane

0xdcdc,	// (0x00089d4e) bg_popup_call_pane_cp07_ParamLimits

0xdcdc,	// (0x00089d4e) bg_popup_call_pane_cp07

0x7136,	// (0x000831a8) dialer2_ne_pane_t1_ParamLimits

0x7136,	// (0x000831a8) dialer2_ne_pane_t1

0x715b,	// (0x000831cd) cell_dialer2_keypad_pane_ParamLimits

0x715b,	// (0x000831cd) cell_dialer2_keypad_pane

0xd57e,	// (0x000895f0) bg_button_pane_pane_cp04_ParamLimits

0xd57e,	// (0x000895f0) bg_button_pane_pane_cp04

0x7172,	// (0x000831e4) cell_dialer2_keypad_pane_g1_ParamLimits

0x7172,	// (0x000831e4) cell_dialer2_keypad_pane_g1

0x32d3,	// (0x0007f345) aid_placing_vt_set_content_ParamLimits

0x32d3,	// (0x0007f345) aid_placing_vt_set_content

0x32fb,	// (0x0007f36d) aid_placing_vt_set_title_ParamLimits

0x32fb,	// (0x0007f36d) aid_placing_vt_set_title

0xa165,	// (0x000861d7) main_image3_pane

0x720c,	// (0x0008327e) area_side_right_pane_cp01_ParamLimits

0x720c,	// (0x0008327e) area_side_right_pane_cp01

0xa8ad,	// (0x0008691f) main_image3_pane_g1_ParamLimits

0xa8ad,	// (0x0008691f) main_image3_pane_g1

0x723b,	// (0x000832ad) main_image3_pane_g2_ParamLimits

0x723b,	// (0x000832ad) main_image3_pane_g2

0x7254,	// (0x000832c6) main_image3_pane_g3_ParamLimits

0x7254,	// (0x000832c6) main_image3_pane_g3

0x726d,	// (0x000832df) main_image3_pane_g4_ParamLimits

0x726d,	// (0x000832df) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0008b937) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0008b937) main_image3_pane_g

0x7286,	// (0x000832f8) main_image3_pane_t1_ParamLimits

0x7286,	// (0x000832f8) main_image3_pane_t1

0x72ab,	// (0x0008331d) main_image3_pane_t2_ParamLimits

0x72ab,	// (0x0008331d) main_image3_pane_t2

0x72ca,	// (0x0008333c) main_image3_pane_t3_ParamLimits

0x72ca,	// (0x0008333c) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0008b940) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0008b940) main_image3_pane_t

0x223e,	// (0x0007e2b0) grid_sctrl_middle_pane_cp01_ParamLimits

0x223e,	// (0x0007e2b0) grid_sctrl_middle_pane_cp01

0x732b,	// (0x0008339d) cell_sctrl_middle_pane_cp01_ParamLimits

0x732b,	// (0x0008339d) cell_sctrl_middle_pane_cp01

0x733c,	// (0x000833ae) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x733c,	// (0x000833ae) cell_sctrl_middle_pane_cp01_g1

0xa165,	// (0x000861d7) main_call4_pane

0x7349,	// (0x000833bb) aid_size_button_call4_ParamLimits

0x7349,	// (0x000833bb) aid_size_button_call4

0x737b,	// (0x000833ed) call4_windows_pane_ParamLimits

0x737b,	// (0x000833ed) call4_windows_pane

0x7397,	// (0x00083409) grid_call4_button_pane_ParamLimits

0x7397,	// (0x00083409) grid_call4_button_pane

0xd58a,	// (0x000895fc) call4_windows_conf_pane

0x73bb,	// (0x0008342d) popup_call4_audio_first_window_ParamLimits

0x73bb,	// (0x0008342d) popup_call4_audio_first_window

0x73e7,	// (0x00083459) popup_call4_audio_second_window_ParamLimits

0x73e7,	// (0x00083459) popup_call4_audio_second_window

0xd5c7,	// (0x00089639) popup_call4_audio_wait_window_ParamLimits

0xd5c7,	// (0x00089639) popup_call4_audio_wait_window

0x73fb,	// (0x0008346d) cell_call4_button_pane_ParamLimits

0x73fb,	// (0x0008346d) cell_call4_button_pane

0x741e,	// (0x00083490) bg_button_pane_cp09_ParamLimits

0x741e,	// (0x00083490) bg_button_pane_cp09

0x742a,	// (0x0008349c) cell_call4_button_pane_g1_ParamLimits

0x742a,	// (0x0008349c) cell_call4_button_pane_g1

0x7437,	// (0x000834a9) cell_call4_button_pane_t1_ParamLimits

0x7437,	// (0x000834a9) cell_call4_button_pane_t1

0xd60f,	// (0x00089681) popup_call4_audio_conf_window_ParamLimits

0xd60f,	// (0x00089681) popup_call4_audio_conf_window

0x66b8,	// (0x0008272a) mup3_progress_pane_t1_ParamLimits

0x66d7,	// (0x00082749) mup3_progress_pane_t2_ParamLimits

0xcf4d,	// (0x00088fbf) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0008b819) mup3_progress_pane_t_ParamLimits

0xcf6a,	// (0x00088fdc) mup_progress_pane_cp03_ParamLimits

0x6bd5,	// (0x00082c47) mup3_control_keys_pane_g4_copy1

0x70ce,	// (0x00083140) mp4_rocker2_pane_ParamLimits

0x70ce,	// (0x00083140) mp4_rocker2_pane

0xd629,	// (0x0008969b) mp4_rocker2_pane_g1

0xd631,	// (0x000896a3) mp4_rocker2_pane_g2

0x7449,	// (0x000834bb) mp4_rocker2_pane_g3

0x7451,	// (0x000834c3) mp4_rocker2_pane_g4

0x7459,	// (0x000834cb) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0008b949) mp4_rocker2_pane_g

0xa165,	// (0x000861d7) main_camera4_pane

0xa165,	// (0x000861d7) main_video4_pane

0x6e29,	// (0x00082e9b) main_video_tele_dialer_pane_t1_ParamLimits

0x6e29,	// (0x00082e9b) main_video_tele_dialer_pane_t1

0x6e3b,	// (0x00082ead) main_video_tele_dialer_pane_t2_ParamLimits

0x6e3b,	// (0x00082ead) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0008b903) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0008b903) main_video_tele_dialer_pane_t

0x7479,	// (0x000834eb) cam4_autofocus_pane_ParamLimits

0x7479,	// (0x000834eb) cam4_autofocus_pane

0x7491,	// (0x00083503) cam4_image_uncrop_pane_ParamLimits

0x7491,	// (0x00083503) cam4_image_uncrop_pane

0x74aa,	// (0x0008351c) cam4_indicators_pane_ParamLimits

0x74aa,	// (0x0008351c) cam4_indicators_pane

0x74c6,	// (0x00083538) main_camera4_pane_g1_ParamLimits

0x74c6,	// (0x00083538) main_camera4_pane_g1

0x74d2,	// (0x00083544) main_camera4_pane_g2_ParamLimits

0x74d2,	// (0x00083544) main_camera4_pane_g2

0x74d2,	// (0x00083544) main_camera4_pane_g3_ParamLimits

0x74d2,	// (0x00083544) main_camera4_pane_g3

0x74de,	// (0x00083550) main_camera4_pane_g4_ParamLimits

0x74de,	// (0x00083550) main_camera4_pane_g4

0x74ea,	// (0x0008355c) main_camera4_pane_g5_ParamLimits

0x74ea,	// (0x0008355c) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0008b954) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0008b954) main_camera4_pane_g

0x7504,	// (0x00083576) main_camera4_pane_t1_ParamLimits

0x7504,	// (0x00083576) main_camera4_pane_t1

0xced2,	// (0x00088f44) bg_tb_trans_pane_cp06

0x7556,	// (0x000835c8) cam4_indicators_pane_g1

0x7567,	// (0x000835d9) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0008b96f) cam4_indicators_pane_g

0x757f,	// (0x000835f1) cam4_indicators_pane_t1

0x75a9,	// (0x0008361b) main_video4_pane_g1_ParamLimits

0x75a9,	// (0x0008361b) main_video4_pane_g1

0x75b5,	// (0x00083627) main_video4_pane_g2_ParamLimits

0x75b5,	// (0x00083627) main_video4_pane_g2

0x75c1,	// (0x00083633) main_video4_pane_g3_ParamLimits

0x75c1,	// (0x00083633) main_video4_pane_g3

0x75cd,	// (0x0008363f) main_video4_pane_g4_ParamLimits

0x75cd,	// (0x0008363f) main_video4_pane_g4

0x0004,

0xf904,	// (0x0008b976) main_video4_pane_g_ParamLimits

0xf904,	// (0x0008b976) main_video4_pane_g

0x75ef,	// (0x00083661) vid4_indicators_pane_ParamLimits

0x75ef,	// (0x00083661) vid4_indicators_pane

0x760e,	// (0x00083680) video4_image_uncrop_cif_pane_ParamLimits

0x760e,	// (0x00083680) video4_image_uncrop_cif_pane

0x761d,	// (0x0008368f) video4_image_uncrop_nhd_pane_ParamLimits

0x761d,	// (0x0008368f) video4_image_uncrop_nhd_pane

0x7491,	// (0x00083503) video4_image_uncrop_vga_pane_ParamLimits

0x7491,	// (0x00083503) video4_image_uncrop_vga_pane

0xa89f,	// (0x00086911) bg_tb_trans_pane_cp07

0x7636,	// (0x000836a8) vid4_indicators_pane_g1

0x764c,	// (0x000836be) vid4_indicators_pane_g2

0x7660,	// (0x000836d2) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0008b981) vid4_indicators_pane_g

0x7691,	// (0x00083703) vid4_indicators_pane_t1

0x76a8,	// (0x0008371a) cam4_autofocus_pane_g1

0x76b0,	// (0x00083722) cam4_autofocus_pane_g2

0x76b8,	// (0x0008372a) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0008b98c) cam4_autofocus_pane_g

0x76c0,	// (0x00083732) cam4_autofocus_pane_g3_copy1

0x6e59,	// (0x00082ecb) video_down_pane_cp_t1

0x6e67,	// (0x00082ed9) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0008b908) video_down_pane_cp_t

0x223e,	// (0x0007e2b0) popup_vitu2_window_ParamLimits

0x223e,	// (0x0007e2b0) popup_vitu2_window

0x76c8,	// (0x0008373a) aid_size_cell2_itu2_ParamLimits

0x76c8,	// (0x0008373a) aid_size_cell2_itu2

0x76ea,	// (0x0008375c) aid_size_cell_itu2_ParamLimits

0x76ea,	// (0x0008375c) aid_size_cell_itu2

0xdcdc,	// (0x00089d4e) bg_popup_window_pane_cp09_ParamLimits

0xdcdc,	// (0x00089d4e) bg_popup_window_pane_cp09

0x772e,	// (0x000837a0) field_vitu2_entry_pane_ParamLimits

0x772e,	// (0x000837a0) field_vitu2_entry_pane

0x774e,	// (0x000837c0) grid_vitu2_function_pane_ParamLimits

0x774e,	// (0x000837c0) grid_vitu2_function_pane

0x7792,	// (0x00083804) grid_vitu2_itu_pane_ParamLimits

0x7792,	// (0x00083804) grid_vitu2_itu_pane

0x7806,	// (0x00083878) cell_vitu2_itu_pane_ParamLimits

0x7806,	// (0x00083878) cell_vitu2_itu_pane

0x781d,	// (0x0008388f) cell_vitu2_function_pane_ParamLimits

0x781d,	// (0x0008388f) cell_vitu2_function_pane

0xd639,	// (0x000896ab) bg_popup_call_pane_cp08_ParamLimits

0xd639,	// (0x000896ab) bg_popup_call_pane_cp08

0xd652,	// (0x000896c4) field_vitu2_entry_pane_g1

0xd65e,	// (0x000896d0) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0008b993) field_vitu2_entry_pane_g

0x10f7,	// (0x0007d169) field_vitu2_entry_pane_t1_ParamLimits

0x10f7,	// (0x0007d169) field_vitu2_entry_pane_t1

0x1124,	// (0x0007d196) field_vitu2_entry_pane_t2_ParamLimits

0x1124,	// (0x0007d196) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0008b99a) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0008b99a) field_vitu2_entry_pane_t

0x7861,	// (0x000838d3) bg_button_pane_cp010_ParamLimits

0x7861,	// (0x000838d3) bg_button_pane_cp010

0x786f,	// (0x000838e1) cell_vitu2_itu_pane_g1

0x788d,	// (0x000838ff) cell_vitu2_itu_pane_t1_ParamLimits

0x788d,	// (0x000838ff) cell_vitu2_itu_pane_t1

0x1141,	// (0x0007d1b3) cell_vitu2_itu_pane_t2_ParamLimits

0x1141,	// (0x0007d1b3) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0008b9a4) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0008b9a4) cell_vitu2_itu_pane_t

0xa89f,	// (0x00086911) bg_button_pane_cp011

0x78df,	// (0x00083951) cell_vitu2_function_pane_g1

0xa165,	// (0x000861d7) main_myfav_hc_pane

0x730c,	// (0x0008337e) popup_image3_note_pane_ParamLimits

0x730c,	// (0x0008337e) popup_image3_note_pane

0x731a,	// (0x0008338c) popup_image3_tool_bar_pane_ParamLimits

0x731a,	// (0x0008338c) popup_image3_tool_bar_pane

0x11af,	// (0x0007d221) cell_vitu2_itu_pane_t3_ParamLimits

0x11af,	// (0x0007d221) cell_vitu2_itu_pane_t3

0xa165,	// (0x000861d7) bg_popup_trans_pane

0xd680,	// (0x000896f2) grid_image3_tool_bar_pane

0xd68a,	// (0x000896fc) bg_popup_trans_pane_g1

0xad53,	// (0x00086dc5) bg_popup_trans_pane_g2

0xd692,	// (0x00089704) bg_popup_trans_pane_g3

0xd69a,	// (0x0008970c) bg_popup_trans_pane_g4

0xd6a2,	// (0x00089714) bg_popup_trans_pane_g5

0xd6aa,	// (0x0008971c) bg_popup_trans_pane_g6

0xd6b2,	// (0x00089724) bg_popup_trans_pane_g7

0xd6ba,	// (0x0008972c) bg_popup_trans_pane_g8

0xad33,	// (0x00086da5) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0008b9ab) bg_popup_trans_pane_g

0xd6c2,	// (0x00089734) cell_image3_tool_bar_pane_ParamLimits

0xd6c2,	// (0x00089734) cell_image3_tool_bar_pane

0xcca2,	// (0x00088d14) cell_image3_tool_bar_pane_g1

0xa165,	// (0x000861d7) bg_popup_trans_pane_cp1

0xd6d8,	// (0x0008974a) popup_image3_note_pane_t1

0xd6e6,	// (0x00089758) popup_image3_note_pane_t2

0xd6f4,	// (0x00089766) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0008b9be) popup_image3_note_pane_t

0xd704,	// (0x00089776) popup_image3_note_pane_t3_copy1

0x78f3,	// (0x00083965) bg_myfav_hc_instruction_pane_ParamLimits

0x78f3,	// (0x00083965) bg_myfav_hc_instruction_pane

0x790b,	// (0x0008397d) cell_myfav_contact_pane_ParamLimits

0x790b,	// (0x0008397d) cell_myfav_contact_pane

0x7925,	// (0x00083997) cell_myfav_contact_pane_cp1_ParamLimits

0x7925,	// (0x00083997) cell_myfav_contact_pane_cp1

0x793d,	// (0x000839af) cell_myfav_contact_pane_cp2_ParamLimits

0x793d,	// (0x000839af) cell_myfav_contact_pane_cp2

0x7955,	// (0x000839c7) cell_myfav_contact_pane_cp3_ParamLimits

0x7955,	// (0x000839c7) cell_myfav_contact_pane_cp3

0x796c,	// (0x000839de) cell_myfav_contact_pane_cp4_ParamLimits

0x796c,	// (0x000839de) cell_myfav_contact_pane_cp4

0x7982,	// (0x000839f4) cell_myfav_contact_pane_cp5_ParamLimits

0x7982,	// (0x000839f4) cell_myfav_contact_pane_cp5

0x7996,	// (0x00083a08) cell_myfav_contact_pane_cp6_ParamLimits

0x7996,	// (0x00083a08) cell_myfav_contact_pane_cp6

0x79aa,	// (0x00083a1c) cell_myfav_contact_pane_cp7_ParamLimits

0x79aa,	// (0x00083a1c) cell_myfav_contact_pane_cp7

0xd712,	// (0x00089784) listscroll_gen_pane_cp05

0x79c2,	// (0x00083a34) main_myfav_hc_pane_g1_ParamLimits

0x79c2,	// (0x00083a34) main_myfav_hc_pane_g1

0x79dc,	// (0x00083a4e) main_myfav_hc_pane_g2_ParamLimits

0x79dc,	// (0x00083a4e) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0008b9c5) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0008b9c5) main_myfav_hc_pane_g

0x7a0e,	// (0x00083a80) main_myfav_hc_pane_t1_ParamLimits

0x7a0e,	// (0x00083a80) main_myfav_hc_pane_t1

0xd71b,	// (0x0008978d) main_myfav_hc_pane_t2_ParamLimits

0xd71b,	// (0x0008978d) main_myfav_hc_pane_t2

0xd72d,	// (0x0008979f) main_myfav_hc_pane_t3_ParamLimits

0xd72d,	// (0x0008979f) main_myfav_hc_pane_t3

0x7a25,	// (0x00083a97) main_myfav_hc_pane_t4_ParamLimits

0x7a25,	// (0x00083a97) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0008b9cc) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0008b9cc) main_myfav_hc_pane_t

0xcca2,	// (0x00088d14) bg_myfav_hc_instruction_pane_g1

0xd73f,	// (0x000897b1) cell_myfav_contact_pane_g1_ParamLimits

0xd73f,	// (0x000897b1) cell_myfav_contact_pane_g1

0xd73f,	// (0x000897b1) cell_myfav_contact_pane_g2_ParamLimits

0xd73f,	// (0x000897b1) cell_myfav_contact_pane_g2

0xd74b,	// (0x000897bd) cell_myfav_contact_pane_g3_ParamLimits

0xd74b,	// (0x000897bd) cell_myfav_contact_pane_g3

0xcf37,	// (0x00088fa9) cell_myfav_contact_pane_g4_ParamLimits

0xcf37,	// (0x00088fa9) cell_myfav_contact_pane_g4

0xd758,	// (0x000897ca) cell_myfav_contact_pane_g5_ParamLimits

0xd758,	// (0x000897ca) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0008b9d7) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0008b9d7) cell_myfav_contact_pane_g

0x79f6,	// (0x00083a68) main_myfav_hc_pane_g3_ParamLimits

0x79f6,	// (0x00083a68) main_myfav_hc_pane_g3

0x215a,	// (0x0007e1cc) popup_adpt_find_window

0x7a4f,	// (0x00083ac1) afind_page_pane_ParamLimits

0x7a4f,	// (0x00083ac1) afind_page_pane

0x7a5c,	// (0x00083ace) aid_size_cell_afind_ParamLimits

0x7a5c,	// (0x00083ace) aid_size_cell_afind

0x7a76,	// (0x00083ae8) bg_popup_sub_pane_cp09_ParamLimits

0x7a76,	// (0x00083ae8) bg_popup_sub_pane_cp09

0x7a83,	// (0x00083af5) find_pane_cp01_ParamLimits

0x7a83,	// (0x00083af5) find_pane_cp01

0xd764,	// (0x000897d6) grid_afind_control_pane_ParamLimits

0xd764,	// (0x000897d6) grid_afind_control_pane

0x7a90,	// (0x00083b02) grid_afind_pane_ParamLimits

0x7a90,	// (0x00083b02) grid_afind_pane

0x7aac,	// (0x00083b1e) cell_afind_pane_ParamLimits

0x7aac,	// (0x00083b1e) cell_afind_pane

0xcca2,	// (0x00088d14) afind_page_pane_g1

0x7af8,	// (0x00083b6a) afind_page_pane_g2

0x7b01,	// (0x00083b73) afind_page_pane_g3

0x0002,

0xf970,	// (0x0008b9e2) afind_page_pane_g

0x7b0a,	// (0x00083b7c) afind_page_pane_t1

0xd778,	// (0x000897ea) cell_afind_grid_control_pane_ParamLimits

0xd778,	// (0x000897ea) cell_afind_grid_control_pane

0xd57e,	// (0x000895f0) bg_button_pane_cp69_ParamLimits

0xd57e,	// (0x000895f0) bg_button_pane_cp69

0x7b2a,	// (0x00083b9c) cell_afind_pane_g1_ParamLimits

0x7b2a,	// (0x00083b9c) cell_afind_pane_g1

0x7b37,	// (0x00083ba9) cell_afind_pane_t1_ParamLimits

0x7b37,	// (0x00083ba9) cell_afind_pane_t1

0xab3f,	// (0x00086bb1) bg_button_pane_cp72

0xd787,	// (0x000897f9) cell_afind_grid_control_pane_g1

0x50d8,	// (0x0008114a) aid_image_placing_area_ParamLimits

0x50d8,	// (0x0008114a) aid_image_placing_area

0xd24a,	// (0x000892bc) field_vitu_entry_pane_g1_ParamLimits

0xd24a,	// (0x000892bc) field_vitu_entry_pane_g1

0xd256,	// (0x000892c8) field_vitu_entry_pane_g2_ParamLimits

0xd256,	// (0x000892c8) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0008b893) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0008b893) field_vitu_entry_pane_g

0x6c5f,	// (0x00082cd1) cell_vitu_itu_pane_g1_ParamLimits

0x6caf,	// (0x00082d21) cell_vitu_itu_pane_t3_ParamLimits

0x6caf,	// (0x00082d21) cell_vitu_itu_pane_t3

0xd52e,	// (0x000895a0) mp4_progress_pane_t1_ParamLimits

0xd547,	// (0x000895b9) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0008b928) mp4_progress_pane_t_ParamLimits

0xd560,	// (0x000895d2) mup_progress_pane_cp04_ParamLimits

0x7a39,	// (0x00083aab) main_myfav_hc_pane_t5_ParamLimits

0x7a39,	// (0x00083aab) main_myfav_hc_pane_t5

0x0dd4,	// (0x0007ce46) aid_zoom_text_primary

0x215a,	// (0x0007e1cc) popup_adpt_find_window_ParamLimits

0xa89f,	// (0x00086911) main_cam_set_pane

0x74b8,	// (0x0008352a) cam4_zoom_pane_ParamLimits

0x74b8,	// (0x0008352a) cam4_zoom_pane

0x7b49,	// (0x00083bbb) main_cam_set_pane_g1_ParamLimits

0x7b49,	// (0x00083bbb) main_cam_set_pane_g1

0x7b57,	// (0x00083bc9) main_cam_set_pane_g2_ParamLimits

0x7b57,	// (0x00083bc9) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0008b9e9) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0008b9e9) main_cam_set_pane_g

0x7b63,	// (0x00083bd5) main_cam_set_pane_t1_ParamLimits

0x7b63,	// (0x00083bd5) main_cam_set_pane_t1

0x7b7f,	// (0x00083bf1) main_cset_listscroll_pane_ParamLimits

0x7b7f,	// (0x00083bf1) main_cset_listscroll_pane

0x7bae,	// (0x00083c20) main_cset_slider_pane_ParamLimits

0x7bae,	// (0x00083c20) main_cset_slider_pane

0xd798,	// (0x0008980a) main_cset_list_pane_ParamLimits

0xd798,	// (0x0008980a) main_cset_list_pane

0xd7a8,	// (0x0008981a) scroll_pane_cp028

0x7bcf,	// (0x00083c41) aid_area_touch_slider

0x7beb,	// (0x00083c5d) cset_slider_pane

0x7c15,	// (0x00083c87) main_cset_slider_pane_g1

0x7c2a,	// (0x00083c9c) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0008b9ee) main_cset_slider_pane_g

0xd7e1,	// (0x00089853) main_cset_slider_pane_t1

0x7ce6,	// (0x00083d58) main_cset_slider_pane_t2

0x7d00,	// (0x00083d72) main_cset_slider_pane_t3

0x7d1a,	// (0x00083d8c) main_cset_slider_pane_t4

0x7d34,	// (0x00083da6) main_cset_slider_pane_t5

0x7d4e,	// (0x00083dc0) main_cset_slider_pane_t6

0x7d63,	// (0x00083dd5) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0008ba13) main_cset_slider_pane_t

0x7e67,	// (0x00083ed9) cset_list_set_pane_ParamLimits

0x7e67,	// (0x00083ed9) cset_list_set_pane

0x7e78,	// (0x00083eea) aid_position_infowindow_above

0x7e80,	// (0x00083ef2) aid_position_infowindow_below

0x7e88,	// (0x00083efa) cset_list_set_pane_g1_ParamLimits

0x7e88,	// (0x00083efa) cset_list_set_pane_g1

0x11fc,	// (0x0007d26e) cset_list_set_pane_g3_ParamLimits

0x11fc,	// (0x0007d26e) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0008ba32) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0008ba32) cset_list_set_pane_g

0x120b,	// (0x0007d27d) cset_list_set_pane_t1_ParamLimits

0x120b,	// (0x0007d27d) cset_list_set_pane_t1

0xa89f,	// (0x00086911) list_highlight_pane_cp021_ParamLimits

0xa89f,	// (0x00086911) list_highlight_pane_cp021

0xb57f,	// (0x000875f1) cset_slider_pane_g1

0xb591,	// (0x00087603) cset_slider_pane_g2

0xb588,	// (0x000875fa) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0008ba37) cset_slider_pane_g

0x7e94,	// (0x00083f06) aid_area_touch_cam4_zoom

0x7e9c,	// (0x00083f0e) cam4_zoom_cont_pane

0x7ea4,	// (0x00083f16) cam4_zoom_pane_g1

0x7eac,	// (0x00083f1e) cam4_zoom_pane_g2

0x7eb4,	// (0x00083f26) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0008ba3e) cam4_zoom_pane_g

0xdf9d,	// (0x0008a00f) cam4_zoom_cont_pane_g1

0xdfa6,	// (0x0008a018) cam4_zoom_cont_pane_g2

0xdfaf,	// (0x0008a021) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0008ba45) cam4_zoom_cont_pane_g

0x7363,	// (0x000833d5) call4_image_pane_ParamLimits

0x7363,	// (0x000833d5) call4_image_pane

0xd58a,	// (0x000895fc) call4_windows_conf_pane_ParamLimits

0xd5a5,	// (0x00089617) popup_call4_audio_in_window_ParamLimits

0xd5a5,	// (0x00089617) popup_call4_audio_in_window

0xa165,	// (0x000861d7) bg_popup_call2_act_pane_cp02

0xd607,	// (0x00089679) call4_list_conf_pane

0xcca2,	// (0x00088d14) call4_image_pane_g1

0xcca2,	// (0x00088d14) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0008b759) call4_image_pane_g

0xd881,	// (0x000898f3) list_single_graphic_popup_conf4_pane_ParamLimits

0xd881,	// (0x000898f3) list_single_graphic_popup_conf4_pane

0xa165,	// (0x000861d7) list_highlight_pane_cp022

0xd896,	// (0x00089908) list_single_graphic_popup_conf4_pane_g1

0xb26b,	// (0x000872dd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0008ba4c) list_single_graphic_popup_conf4_pane_g

0xd89e,	// (0x00089910) list_single_graphic_popup_conf4_pane_t1

0x3455,	// (0x0007f4c7) popup_vtel_slider_window_ParamLimits

0x3455,	// (0x0007f4c7) popup_vtel_slider_window

0xd56c,	// (0x000895de) dialer2_ne_pane_t2_ParamLimits

0xd56c,	// (0x000895de) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0008b92d) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0008b92d) dialer2_ne_pane_t

0xa89f,	// (0x00086911) bg_popup_sub_pane_cp010_ParamLimits

0xa89f,	// (0x00086911) bg_popup_sub_pane_cp010

0x7ebc,	// (0x00083f2e) popup_vtel_slider_window_g1_ParamLimits

0x7ebc,	// (0x00083f2e) popup_vtel_slider_window_g1

0x7ec8,	// (0x00083f3a) popup_vtel_slider_window_g2_ParamLimits

0x7ec8,	// (0x00083f3a) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0008ba51) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0008ba51) popup_vtel_slider_window_g

0x7f10,	// (0x00083f82) vtel_slider_pane_ParamLimits

0x7f10,	// (0x00083f82) vtel_slider_pane

0x7f1f,	// (0x00083f91) vtel_slider_pane_g1_ParamLimits

0x7f1f,	// (0x00083f91) vtel_slider_pane_g1

0x7f2c,	// (0x00083f9e) vtel_slider_pane_g2_ParamLimits

0x7f2c,	// (0x00083f9e) vtel_slider_pane_g2

0x7f39,	// (0x00083fab) vtel_slider_pane_g3_ParamLimits

0x7f39,	// (0x00083fab) vtel_slider_pane_g3

0x7f1f,	// (0x00083f91) vtel_slider_pane_g4_ParamLimits

0x7f1f,	// (0x00083f91) vtel_slider_pane_g4

0x7f46,	// (0x00083fb8) vtel_slider_pane_g5_ParamLimits

0x7f46,	// (0x00083fb8) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0008ba5a) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0008ba5a) vtel_slider_pane_g

0xa165,	// (0x000861d7) main_gallery2_pane

0x7710,	// (0x00083782) aid_size_row_itut2_dropdow_list_ParamLimits

0x7710,	// (0x00083782) aid_size_row_itut2_dropdow_list

0x7770,	// (0x000837e2) grid_vitu2_function_top_pane_ParamLimits

0x7770,	// (0x000837e2) grid_vitu2_function_top_pane

0x77c2,	// (0x00083834) popup_vitu2_dropdown_list_window_ParamLimits

0x77c2,	// (0x00083834) popup_vitu2_dropdown_list_window

0x77e2,	// (0x00083854) popup_vitu2_match_list_window

0x7f53,	// (0x00083fc5) cell_vitu2_function_top_pane_ParamLimits

0x7f53,	// (0x00083fc5) cell_vitu2_function_top_pane

0x7f73,	// (0x00083fe5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f73,	// (0x00083fe5) cell_vitu2_function_top_pane_cp01

0x7f91,	// (0x00084003) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f91,	// (0x00084003) cell_vitu2_function_top_wide_pane

0xa89f,	// (0x00086911) bg_button_pane_cp012

0x7faf,	// (0x00084021) cell_vitu2_function_top_pane_g1

0x7fbe,	// (0x00084030) bg_button_pane_cp013_ParamLimits

0x7fbe,	// (0x00084030) bg_button_pane_cp013

0x7fda,	// (0x0008404c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7fda,	// (0x0008404c) cell_vitu2_function_top_wide_pane_g1

0x223e,	// (0x0007e2b0) bg_popup_sub_pane_cp20

0x7ff2,	// (0x00084064) list_vitu2_match_list_pane

0xd68a,	// (0x000896fc) bg_popup_sub_pane_cp20_g1

0xd692,	// (0x00089704) bg_popup_sub_pane_cp20_g2

0xad53,	// (0x00086dc5) bg_popup_sub_pane_cp20_g3

0xd69a,	// (0x0008970c) bg_popup_sub_pane_cp20_g4

0xad33,	// (0x00086da5) bg_popup_sub_pane_cp20_g5

0xd8b4,	// (0x00089926) bg_popup_sub_pane_cp20_g6

0xd6aa,	// (0x0008971c) bg_popup_sub_pane_cp20_g7

0xd6b2,	// (0x00089724) bg_popup_sub_pane_cp20_g8

0xd6ba,	// (0x0008972c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0008ba65) bg_popup_sub_pane_cp20_g

0xa8bb,	// (0x0008692d) list_vitu2_match_list_item_pane_ParamLimits

0xa8bb,	// (0x0008692d) list_vitu2_match_list_item_pane

0x800a,	// (0x0008407c) list_vitu2_match_list_item_pane_t1

0xa165,	// (0x000861d7) bg_popup_sub_pane_cp21

0xb194,	// (0x00087206) grid_vitu2_dropdown_list_pane

0x8024,	// (0x00084096) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8024,	// (0x00084096) cell_vitu2_dropdown_list_char_pane

0x8049,	// (0x000840bb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8049,	// (0x000840bb) cell_vitu2_dropdown_list_ctrl_pane

0xd8bc,	// (0x0008992e) cell_vitu2_dropdown_list_char_pane_g1

0xd8c5,	// (0x00089937) cell_vitu2_dropdown_list_char_pane_g2

0xd8ce,	// (0x00089940) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0008ba82) cell_vitu2_dropdown_list_char_pane_g

0x8077,	// (0x000840e9) cell_vitu2_dropdown_list_char_pane_t1

0x8085,	// (0x000840f7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8085,	// (0x000840f7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8095,	// (0x00084107) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8095,	// (0x00084107) cell_vitu2_dropdown_list_ctrl_pane_g2

0x80a6,	// (0x00084118) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x80a6,	// (0x00084118) cell_vitu2_dropdown_list_ctrl_pane_g3

0x80b6,	// (0x00084128) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x80b6,	// (0x00084128) cell_vitu2_dropdown_list_ctrl_pane_g4

0xced2,	// (0x00088f44) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xced2,	// (0x00088f44) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0008ba89) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0008ba89) cell_vitu2_dropdown_list_ctrl_pane_g

0x80cf,	// (0x00084141) aid_size_cell_gallery2_ParamLimits

0x80cf,	// (0x00084141) aid_size_cell_gallery2

0x80dd,	// (0x0008414f) grid_gallery2_pane_ParamLimits

0x80dd,	// (0x0008414f) grid_gallery2_pane

0x80ec,	// (0x0008415e) scroll_pane_cp029_ParamLimits

0x80ec,	// (0x0008415e) scroll_pane_cp029

0x80f8,	// (0x0008416a) cell_gallery2_pane_ParamLimits

0x80f8,	// (0x0008416a) cell_gallery2_pane

0xd8d7,	// (0x00089949) cell_gallery2_pane_g2

0x8122,	// (0x00084194) cell_gallery2_pane_g3

0xd8e1,	// (0x00089953) cell_gallery2_pane_g4

0xd8e9,	// (0x0008995b) cell_gallery2_pane_g5

0xb447,	// (0x000874b9) grid_highlight_pane_cp10

0x77e2,	// (0x00083854) popup_vitu2_match_list_window_ParamLimits

0x77f6,	// (0x00083868) popup_vitu2_query_window_ParamLimits

0x77f6,	// (0x00083868) popup_vitu2_query_window

0xa165,	// (0x000861d7) bg_vitu2_candi_button_pane

0xd8bc,	// (0x0008992e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8c5,	// (0x00089937) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8ce,	// (0x00089940) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1266,	// (0x0007d2d8) bg_button_pane_cp015

0x812a,	// (0x0008419c) bg_button_pane_cp016

0x813d,	// (0x000841af) bg_button_pane_cp017

0xc849,	// (0x000888bb) bg_popup_sub_pane_cp22

0xd8f1,	// (0x00089963) popup_vitu2_query_window_g1

0x1299,	// (0x0007d30b) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0008ba94) popup_vitu2_query_window_g

0x12b6,	// (0x0007d328) popup_vitu2_query_window_t1_ParamLimits

0x12b6,	// (0x0007d328) popup_vitu2_query_window_t1

0x12e9,	// (0x0007d35b) popup_vitu2_query_window_t2_ParamLimits

0x12e9,	// (0x0007d35b) popup_vitu2_query_window_t2

0x12fb,	// (0x0007d36d) popup_vitu2_query_window_t3_ParamLimits

0x12fb,	// (0x0007d36d) popup_vitu2_query_window_t3

0x8161,	// (0x000841d3) popup_vitu2_query_window_t4_ParamLimits

0x8161,	// (0x000841d3) popup_vitu2_query_window_t4

0x8184,	// (0x000841f6) popup_vitu2_query_window_t5_ParamLimits

0x8184,	// (0x000841f6) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0008ba9b) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0008ba9b) popup_vitu2_query_window_t

0xd790,	// (0x00089802) main_cset_text_pane

0x7bcf,	// (0x00083c41) aid_area_touch_slider_ParamLimits

0x7beb,	// (0x00083c5d) cset_slider_pane_ParamLimits

0x7c15,	// (0x00083c87) main_cset_slider_pane_g1_ParamLimits

0x7c2a,	// (0x00083c9c) main_cset_slider_pane_g2_ParamLimits

0xd7b1,	// (0x00089823) main_cset_slider_pane_g3_ParamLimits

0xd7b1,	// (0x00089823) main_cset_slider_pane_g3

0x7c3f,	// (0x00083cb1) main_cset_slider_pane_g4_ParamLimits

0x7c3f,	// (0x00083cb1) main_cset_slider_pane_g4

0x7c4e,	// (0x00083cc0) main_cset_slider_pane_g5_ParamLimits

0x7c4e,	// (0x00083cc0) main_cset_slider_pane_g5

0x7c5a,	// (0x00083ccc) main_cset_slider_pane_g6_ParamLimits

0x7c5a,	// (0x00083ccc) main_cset_slider_pane_g6

0xf97c,	// (0x0008b9ee) main_cset_slider_pane_g_ParamLimits

0xd7e1,	// (0x00089853) main_cset_slider_pane_t1_ParamLimits

0x7ce6,	// (0x00083d58) main_cset_slider_pane_t2_ParamLimits

0x7d00,	// (0x00083d72) main_cset_slider_pane_t3_ParamLimits

0x7d1a,	// (0x00083d8c) main_cset_slider_pane_t4_ParamLimits

0x7d34,	// (0x00083da6) main_cset_slider_pane_t5_ParamLimits

0x7d4e,	// (0x00083dc0) main_cset_slider_pane_t6_ParamLimits

0x7d63,	// (0x00083dd5) main_cset_slider_pane_t7_ParamLimits

0x7d8d,	// (0x00083dff) main_cset_slider_pane_t8_ParamLimits

0x7d8d,	// (0x00083dff) main_cset_slider_pane_t8

0x7db5,	// (0x00083e27) main_cset_slider_pane_t9_ParamLimits

0x7db5,	// (0x00083e27) main_cset_slider_pane_t9

0x7ddd,	// (0x00083e4f) main_cset_slider_pane_t10_ParamLimits

0x7ddd,	// (0x00083e4f) main_cset_slider_pane_t10

0x7e05,	// (0x00083e77) main_cset_slider_pane_t11_ParamLimits

0x7e05,	// (0x00083e77) main_cset_slider_pane_t11

0x7e2d,	// (0x00083e9f) main_cset_slider_pane_t12_ParamLimits

0x7e2d,	// (0x00083e9f) main_cset_slider_pane_t12

0x7e4a,	// (0x00083ebc) main_cset_slider_pane_t13_ParamLimits

0x7e4a,	// (0x00083ebc) main_cset_slider_pane_t13

0xf9a1,	// (0x0008ba13) main_cset_slider_pane_t_ParamLimits

0xa165,	// (0x000861d7) bg_popup_sub_pane_cp011

0xd8fd,	// (0x0008996f) main_cset_text_pane_g1

0xd905,	// (0x00089977) main_cset_text_pane_t1

0xd913,	// (0x00089985) main_cset_text_pane_t2

0xd921,	// (0x00089993) main_cset_text_pane_t3

0xd92f,	// (0x000899a1) main_cset_text_pane_t4

0xd93d,	// (0x000899af) main_cset_text_pane_t5

0xd94b,	// (0x000899bd) main_cset_text_pane_t6

0xd959,	// (0x000899cb) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0008baaa) main_cset_text_pane_t

0xa165,	// (0x000861d7) main_cam4_burst_pane

0xa165,	// (0x000861d7) main_cam5_pane

0x7b18,	// (0x00083b8a) bg_button_pane_cp019

0x7b21,	// (0x00083b93) bg_button_pane_cp020

0xd7bd,	// (0x0008982f) main_cset_slider_pane_g7_ParamLimits

0xd7bd,	// (0x0008982f) main_cset_slider_pane_g7

0xd7c9,	// (0x0008983b) main_cset_slider_pane_g8_ParamLimits

0xd7c9,	// (0x0008983b) main_cset_slider_pane_g8

0x7c6e,	// (0x00083ce0) main_cset_slider_pane_g9_ParamLimits

0x7c6e,	// (0x00083ce0) main_cset_slider_pane_g9

0x7c7a,	// (0x00083cec) main_cset_slider_pane_g10_ParamLimits

0x7c7a,	// (0x00083cec) main_cset_slider_pane_g10

0x7c86,	// (0x00083cf8) main_cset_slider_pane_g11_ParamLimits

0x7c86,	// (0x00083cf8) main_cset_slider_pane_g11

0x7c92,	// (0x00083d04) main_cset_slider_pane_g12_ParamLimits

0x7c92,	// (0x00083d04) main_cset_slider_pane_g12

0x7c9e,	// (0x00083d10) main_cset_slider_pane_g13_ParamLimits

0x7c9e,	// (0x00083d10) main_cset_slider_pane_g13

0x7caa,	// (0x00083d1c) main_cset_slider_pane_g14_ParamLimits

0x7caa,	// (0x00083d1c) main_cset_slider_pane_g14

0x7cb6,	// (0x00083d28) main_cset_slider_pane_g15_ParamLimits

0x7cb6,	// (0x00083d28) main_cset_slider_pane_g15

0xd80f,	// (0x00089881) main_cset_slider_pane_t14_ParamLimits

0xd80f,	// (0x00089881) main_cset_slider_pane_t14

0xd848,	// (0x000898ba) main_cset_slider_pane_t15_ParamLimits

0xd848,	// (0x000898ba) main_cset_slider_pane_t15

0x81a7,	// (0x00084219) aid_cam4_burst_size_cell_ParamLimits

0x81a7,	// (0x00084219) aid_cam4_burst_size_cell

0x81c3,	// (0x00084235) grid_cam4_burst_pane_ParamLimits

0x81c3,	// (0x00084235) grid_cam4_burst_pane

0x81f5,	// (0x00084267) linegrid_cam4_burst_pane_ParamLimits

0x81f5,	// (0x00084267) linegrid_cam4_burst_pane

0x8213,	// (0x00084285) scroll_pane_cp30_ParamLimits

0x8213,	// (0x00084285) scroll_pane_cp30

0x821f,	// (0x00084291) cell_cam4_burst_pane_ParamLimits

0x821f,	// (0x00084291) cell_cam4_burst_pane

0xd967,	// (0x000899d9) linegrid_cam4_burst_pane_g1_ParamLimits

0xd967,	// (0x000899d9) linegrid_cam4_burst_pane_g1

0x825f,	// (0x000842d1) linegrid_cam4_burst_pane_g2_ParamLimits

0x825f,	// (0x000842d1) linegrid_cam4_burst_pane_g2

0xd974,	// (0x000899e6) linegrid_cam4_burst_pane_g3_ParamLimits

0xd974,	// (0x000899e6) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0008bab9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0008bab9) linegrid_cam4_burst_pane_g

0x8270,	// (0x000842e2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8270,	// (0x000842e2) linegrid_cam4_burst_pane_g3_copy1

0xd981,	// (0x000899f3) linegrid_cam4_burst_pane_g4_ParamLimits

0xd981,	// (0x000899f3) linegrid_cam4_burst_pane_g4

0x828a,	// (0x000842fc) linegrid_cam4_burst_pane_g5_ParamLimits

0x828a,	// (0x000842fc) linegrid_cam4_burst_pane_g5

0x829b,	// (0x0008430d) linegrid_cam4_burst_pane_g6_ParamLimits

0x829b,	// (0x0008430d) linegrid_cam4_burst_pane_g6

0xd98e,	// (0x00089a00) linegrid_cam4_burst_pane_g7_ParamLimits

0xd98e,	// (0x00089a00) linegrid_cam4_burst_pane_g7

0x82b2,	// (0x00084324) cell_cam4_burst_pane_g1

0xd9a7,	// (0x00089a19) main_cam5_pane_t1_ParamLimits

0xd9a7,	// (0x00089a19) main_cam5_pane_t1

0xd9b9,	// (0x00089a2b) main_cam5_pane_t2_ParamLimits

0xd9b9,	// (0x00089a2b) main_cam5_pane_t2

0xd9cb,	// (0x00089a3d) main_cam5_pane_t3_ParamLimits

0xd9cb,	// (0x00089a3d) main_cam5_pane_t3

0xd9dd,	// (0x00089a4f) main_cam5_pane_t4_ParamLimits

0xd9dd,	// (0x00089a4f) main_cam5_pane_t4

0xd9f5,	// (0x00089a67) main_cam5_pane_t5_ParamLimits

0xd9f5,	// (0x00089a67) main_cam5_pane_t5

0xda09,	// (0x00089a7b) main_cam5_pane_t6_ParamLimits

0xda09,	// (0x00089a7b) main_cam5_pane_t6

0xda1d,	// (0x00089a8f) main_cam5_pane_t7_ParamLimits

0xda1d,	// (0x00089a8f) main_cam5_pane_t7

0xda2f,	// (0x00089aa1) main_cam5_pane_t8_ParamLimits

0xda2f,	// (0x00089aa1) main_cam5_pane_t8

0xda59,	// (0x00089acb) main_cam5_pane_t9_ParamLimits

0xda59,	// (0x00089acb) main_cam5_pane_t9

0xda6b,	// (0x00089add) main_cam5_pane_t10_ParamLimits

0xda6b,	// (0x00089add) main_cam5_pane_t10

0xda7d,	// (0x00089aef) main_cam5_pane_t11_ParamLimits

0xda7d,	// (0x00089aef) main_cam5_pane_t11

0xda91,	// (0x00089b03) main_cam5_pane_t12_ParamLimits

0xda91,	// (0x00089b03) main_cam5_pane_t12

0xdaa8,	// (0x00089b1a) main_cam5_pane_t13_ParamLimits

0xdaa8,	// (0x00089b1a) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0008bac5) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0008bac5) main_cam5_pane_t

0x2207,	// (0x0007e279) popup_scut_keymap_window_ParamLimits

0x2207,	// (0x0007e279) popup_scut_keymap_window

0x82c5,	// (0x00084337) aid_size_cell_brow_shortcut

0xb447,	// (0x000874b9) bg_popup_window_pane_cp010

0x82d1,	// (0x00084343) grid_scut_pane

0x82dd,	// (0x0008434f) cell_scut_pane_ParamLimits

0x82dd,	// (0x0008434f) cell_scut_pane

0x82f8,	// (0x0008436a) cell_scut_pane_g1

0xdacb,	// (0x00089b3d) cell_scut_pane_t1

0xdada,	// (0x00089b4c) cell_scut_pane_t2

0x8301,	// (0x00084373) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0008bae0) cell_scut_pane_t

0x62d9,	// (0x0008234b) main_mup3_pane_g8_ParamLimits

0x62d9,	// (0x0008234b) main_mup3_pane_g8

0x771e,	// (0x00083790) area_vitu2_query_pane_ParamLimits

0x771e,	// (0x00083790) area_vitu2_query_pane

0x1278,	// (0x0007d2ea) input_focus_pane_cp08

0xdae9,	// (0x00089b5b) area_vitu2_query_pane_g1

0x1379,	// (0x0007d3eb) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0008bae7) area_vitu2_query_pane_g

0x830f,	// (0x00084381) area_vitu2_query_pane_t1_ParamLimits

0x830f,	// (0x00084381) area_vitu2_query_pane_t1

0x8323,	// (0x00084395) area_vitu2_query_pane_t2_ParamLimits

0x8323,	// (0x00084395) area_vitu2_query_pane_t2

0x138a,	// (0x0007d3fc) area_vitu2_query_pane_t3_ParamLimits

0x138a,	// (0x0007d3fc) area_vitu2_query_pane_t3

0x13b2,	// (0x0007d424) area_vitu2_query_pane_t4_ParamLimits

0x13b2,	// (0x0007d424) area_vitu2_query_pane_t4

0x13da,	// (0x0007d44c) area_vitu2_query_pane_t5_ParamLimits

0x13da,	// (0x0007d44c) area_vitu2_query_pane_t5

0x1402,	// (0x0007d474) area_vitu2_query_pane_t6_ParamLimits

0x1402,	// (0x0007d474) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0008baec) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0008baec) area_vitu2_query_pane_t

0x8337,	// (0x000843a9) bg_button_pane_cp018

0x8345,	// (0x000843b7) bg_button_pane_cp021

0x144e,	// (0x0007d4c0) bg_button_pane_cp022

0x145f,	// (0x0007d4d1) input_focus_pane_cp09

0x476c,	// (0x000807de) aid_size_touch_mv_arrow_left

0x4797,	// (0x00080809) aid_size_touch_mv_arrow_right

0x7cce,	// (0x00083d40) main_cset_slider_pane_g16_ParamLimits

0x7cce,	// (0x00083d40) main_cset_slider_pane_g16

0x7cda,	// (0x00083d4c) main_cset_slider_pane_g17_ParamLimits

0x7cda,	// (0x00083d4c) main_cset_slider_pane_g17

0x82b2,	// (0x00084324) cell_cam4_burst_pane_g1_ParamLimits

0xa165,	// (0x000861d7) compa_mode_pane

0x7ed4,	// (0x00083f46) popup_vtel_slider_window_g3_ParamLimits

0x7ed4,	// (0x00083f46) popup_vtel_slider_window_g3

0x7ee8,	// (0x00083f5a) popup_vtel_slider_window_g4_ParamLimits

0x7ee8,	// (0x00083f5a) popup_vtel_slider_window_g4

0x7efc,	// (0x00083f6e) popup_vtel_slider_window_t1_ParamLimits

0x7efc,	// (0x00083f6e) popup_vtel_slider_window_t1

0xa165,	// (0x000861d7) main_cl_pane

0xc875,	// (0x000888e7) popup_imed_adjust2_window_ParamLimits

0xc849,	// (0x000888bb) bg_tb_trans_pane_cp05_ParamLimits

0xd17f,	// (0x000891f1) popup_imed_adjust2_window_g1_ParamLimits

0xd18e,	// (0x00089200) popup_imed_adjust2_window_g2_ParamLimits

0xd18e,	// (0x00089200) popup_imed_adjust2_window_g2

0xd19a,	// (0x0008920c) popup_imed_adjust2_window_g3_ParamLimits

0xd19a,	// (0x0008920c) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0008b857) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0008b857) popup_imed_adjust2_window_g

0xd1a6,	// (0x00089218) popup_imed_adjust2_window_t1_ParamLimits

0xd1be,	// (0x00089230) slider_imed_adjust_pane_ParamLimits

0xd1d2,	// (0x00089244) slider_imed_adjust_pane_g1_ParamLimits

0xd1e2,	// (0x00089254) slider_imed_adjust_pane_g2_ParamLimits

0xd1f2,	// (0x00089264) slider_imed_adjust_pane_g3_ParamLimits

0xd203,	// (0x00089275) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0008b85e) slider_imed_adjust_pane_g_ParamLimits

0x7461,	// (0x000834d3) aid_touch_area_cam4_ParamLimits

0x7461,	// (0x000834d3) aid_touch_area_cam4

0x7471,	// (0x000834e3) battery_pane_cp01

0x74f8,	// (0x0008356a) main_camera4_pane_g6_ParamLimits

0x74f8,	// (0x0008356a) main_camera4_pane_g6

0x7516,	// (0x00083588) main_camera4_pane_t2_ParamLimits

0x7516,	// (0x00083588) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0008b961) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0008b961) main_camera4_pane_t

0x7599,	// (0x0008360b) aid_touch_area_vid4_ParamLimits

0x7599,	// (0x0008360b) aid_touch_area_vid4

0x75d9,	// (0x0008364b) main_video4_pane_g5_ParamLimits

0x75d9,	// (0x0008364b) main_video4_pane_g5

0x75ff,	// (0x00083671) vid4_progress_pane_ParamLimits

0x75ff,	// (0x00083671) vid4_progress_pane

0xd7d5,	// (0x00089847) main_cset_slider_pane_g18_ParamLimits

0xd7d5,	// (0x00089847) main_cset_slider_pane_g18

0xd99b,	// (0x00089a0d) cell_cam4_burst_pane_g2_ParamLimits

0xd99b,	// (0x00089a0d) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0008bac0) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0008bac0) cell_cam4_burst_pane_g

0x8351,	// (0x000843c3) bg_cl_pane_ParamLimits

0x8351,	// (0x000843c3) bg_cl_pane

0x835d,	// (0x000843cf) cl_header_pane_ParamLimits

0x835d,	// (0x000843cf) cl_header_pane

0x8369,	// (0x000843db) cl_listscroll_pane_ParamLimits

0x8369,	// (0x000843db) cl_listscroll_pane

0xdaf5,	// (0x00089b67) bg_cl_pane_g1

0xdafd,	// (0x00089b6f) bg_cl_pane_g2

0xdb05,	// (0x00089b77) bg_cl_pane_g3

0xdb0d,	// (0x00089b7f) bg_cl_pane_g4

0xdb15,	// (0x00089b87) bg_cl_pane_g5

0xdb1d,	// (0x00089b8f) bg_cl_pane_g6

0xdb25,	// (0x00089b97) bg_cl_pane_g7

0xdb2d,	// (0x00089b9f) bg_cl_pane_g8

0xdb35,	// (0x00089ba7) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0008bafb) bg_cl_pane_g

0x8375,	// (0x000843e7) aid_height_cl_leading_ParamLimits

0x8375,	// (0x000843e7) aid_height_cl_leading

0x8381,	// (0x000843f3) aid_height_cl_text_ParamLimits

0x8381,	// (0x000843f3) aid_height_cl_text

0x223e,	// (0x0007e2b0) bg_cl_header_pane_ParamLimits

0x223e,	// (0x0007e2b0) bg_cl_header_pane

0x8399,	// (0x0008440b) cl_header_pane_g1_ParamLimits

0x8399,	// (0x0008440b) cl_header_pane_g1

0x83a6,	// (0x00084418) cl_header_pane_t1_ParamLimits

0x83a6,	// (0x00084418) cl_header_pane_t1

0xdb3d,	// (0x00089baf) cl_list_pane

0xd7a8,	// (0x0008981a) hc_scroll_pane_cp01

0xad33,	// (0x00086da5) bg_cl_header_pane_g1

0xd68a,	// (0x000896fc) bg_cl_header_pane_g2

0xad53,	// (0x00086dc5) bg_cl_header_pane_g3

0xd69a,	// (0x0008970c) bg_cl_header_pane_g4

0xd692,	// (0x00089704) bg_cl_header_pane_g5

0xd8b4,	// (0x00089926) bg_cl_header_pane_g6

0xd6b2,	// (0x00089724) bg_cl_header_pane_g7

0xd6ba,	// (0x0008972c) bg_cl_header_pane_g8

0xd6aa,	// (0x0008971c) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0008bb0e) bg_cl_header_pane_g

0x83b8,	// (0x0008442a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x83b8,	// (0x0008442a) hc_cl_list_double_graphic_heading_pane

0x83c8,	// (0x0008443a) hc_cl_list_single_graphic_pane_ParamLimits

0x83c8,	// (0x0008443a) hc_cl_list_single_graphic_pane

0x83da,	// (0x0008444c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x83da,	// (0x0008444c) hc_cl_list_single_graphic_pane_g1

0x83e6,	// (0x00084458) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x83e6,	// (0x00084458) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0008bb21) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0008bb21) hc_cl_list_single_graphic_pane_g

0x83fa,	// (0x0008446c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x83fa,	// (0x0008446c) hc_cl_list_single_graphic_pane_t1

0x83da,	// (0x0008444c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x83da,	// (0x0008444c) hc_cl_list_double_graphic_heading_pane_g1

0x840f,	// (0x00084481) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x840f,	// (0x00084481) hc_cl_list_double_graphic_heading_pane_g2

0x8423,	// (0x00084495) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8423,	// (0x00084495) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0008bb26) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0008bb26) hc_cl_list_double_graphic_heading_pane_g

0x8437,	// (0x000844a9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8437,	// (0x000844a9) hc_cl_list_double_graphic_heading_pane_t1

0x844c,	// (0x000844be) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x844c,	// (0x000844be) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0008bb2d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0008bb2d) hc_cl_list_double_graphic_heading_pane_t

0x8469,	// (0x000844db) vid4_progress_pane_g1

0x847b,	// (0x000844ed) vid4_progress_pane_g2

0x4e23,	// (0x00080e95) vid4_progress_pane_g3

0x848d,	// (0x000844ff) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0008bb32) vid4_progress_pane_g

0x84ab,	// (0x0008451d) vid4_progress_pane_t1

0x84c0,	// (0x00084532) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0008bb3d) vid4_progress_pane_t

0x84eb,	// (0x0008455d) wait_bar_pane_cp07

0xca87,	// (0x00088af9) blid_firmament_pane_ParamLimits

0xcaca,	// (0x00088b3c) popup_blid_sat_info2_window_g1

0xcaee,	// (0x00088b60) popup_blid_sat_info2_window_t3

0xcafc,	// (0x00088b6e) popup_blid_sat_info2_window_t4

0xcb0a,	// (0x00088b7c) popup_blid_sat_info2_window_t5

0xcb18,	// (0x00088b8a) popup_blid_sat_info2_window_t6

0xcb28,	// (0x00088b9a) popup_blid_sat_info2_window_t7

0xcb3e,	// (0x00088bb0) popup_blid_sat_info2_window_t8

0xcb4c,	// (0x00088bbe) popup_blid_sat_info2_window_t9

0xcb5a,	// (0x00088bcc) popup_blid_sat_info2_window_t10

0xcc22,	// (0x00088c94) aid_firma_cardinal_ParamLimits

0xcc36,	// (0x00088ca8) blid_firmament_pane_t1_ParamLimits

0xcc4d,	// (0x00088cbf) blid_firmament_pane_t2_ParamLimits

0xcc64,	// (0x00088cd6) blid_firmament_pane_t3_ParamLimits

0xcc7b,	// (0x00088ced) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0008b750) blid_firmament_pane_t_ParamLimits

0xcc92,	// (0x00088d04) blid_sat_info_pane_ParamLimits

0xa89f,	// (0x00086911) main_cam_set_pane_ParamLimits

0x6a7d,	// (0x00082aef) aid_size_cell_colour_35_ParamLimits

0x6a97,	// (0x00082b09) aid_size_cell_colour_112_ParamLimits

0x6aae,	// (0x00082b20) aid_size_cell_effect_ParamLimits

0xa89f,	// (0x00086911) bg_tb_trans_pane_cp02_ParamLimits

0xb0c8,	// (0x0008713a) heading_imed_pane_ParamLimits

0x6ac8,	// (0x00082b3a) listscroll_imed_pane_ParamLimits

0xbe6b,	// (0x00087edd) popup_call2_audio_first_window_g5_ParamLimits

0xbe6b,	// (0x00087edd) popup_call2_audio_first_window_g5

0x71da,	// (0x0008324c) aid_size_touch_image3_arrow_left_ParamLimits

0x71da,	// (0x0008324c) aid_size_touch_image3_arrow_left

0x71f0,	// (0x00083262) aid_size_touch_image3_arrow_right_ParamLimits

0x71f0,	// (0x00083262) aid_size_touch_image3_arrow_right

0x84d6,	// (0x00084548) vid4_progress_pane_t3

0x6d76,	// (0x00082de8) main_hwr_training_symbol_option_pane_ParamLimits

0x6d76,	// (0x00082de8) main_hwr_training_symbol_option_pane

0xd46e,	// (0x000894e0) popup_hwr_training_preview_window_ParamLimits

0xd46e,	// (0x000894e0) popup_hwr_training_preview_window

0x6dd7,	// (0x00082e49) hwr_training_navi_pane_g5_ParamLimits

0x6dd7,	// (0x00082e49) hwr_training_navi_pane_g5

0xd678,	// (0x000896ea) popup_char_count_window

0x223e,	// (0x0007e2b0) bg_popup_sub_pane_cp20_ParamLimits

0x7ff2,	// (0x00084064) list_vitu2_match_list_pane_ParamLimits

0x7ffe,	// (0x00084070) vitu2_page_scroll_pane_ParamLimits

0x7ffe,	// (0x00084070) vitu2_page_scroll_pane

0xdb46,	// (0x00089bb8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb46,	// (0x00089bb8) list_single_hwr_training_symbol_option_pane

0xdb59,	// (0x00089bcb) list_single_hwr_training_symbol_option_pane_g1

0xdb61,	// (0x00089bd3) list_single_hwr_training_symbol_option_pane_t1

0xdb6f,	// (0x00089be1) bg_button_pane_cp023

0xdb78,	// (0x00089bea) bg_button_pane_cp024

0x852b,	// (0x0008459d) vitu2_page_scroll_pane_g1

0x8533,	// (0x000845a5) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0008bb44) vitu2_page_scroll_pane_g

0x853d,	// (0x000845af) vitu2_page_scroll_pane_t1

0xc9e7,	// (0x00088a59) popup_char_count_window_g1

0xdbab,	// (0x00089c1d) popup_char_count_window_g2

0xdbb4,	// (0x00089c26) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0008bb49) popup_char_count_window_g

0xdbbd,	// (0x00089c2f) popup_char_count_window_t1

0xa165,	// (0x000861d7) main_vded2_pane

0xd16b,	// (0x000891dd) aid_size_cell_imed_line

0xd175,	// (0x000891e7) grid_imed_line_width_pane

0x7673,	// (0x000836e5) vid4_indicators_pane_g4

0xdbcb,	// (0x00089c3d) cell_imed_line_width_pane_ParamLimits

0xdbcb,	// (0x00089c3d) cell_imed_line_width_pane

0xdbe1,	// (0x00089c53) cell_imed_line_width_pane_g1

0xcb36,	// (0x00088ba8) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0008bb50) cell_imed_line_width_pane_g

0x854c,	// (0x000845be) main_vded2_pane_g1_ParamLimits

0x854c,	// (0x000845be) main_vded2_pane_g1

0x855b,	// (0x000845cd) main_vded2_pane_g2_ParamLimits

0x855b,	// (0x000845cd) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0008bb55) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0008bb55) main_vded2_pane_g

0x8569,	// (0x000845db) vded2_slider_pane_ParamLimits

0x8569,	// (0x000845db) vded2_slider_pane

0x8576,	// (0x000845e8) aid_size_touch_vded2_end

0x8580,	// (0x000845f2) aid_size_touch_vded2_playhead

0xdc23,	// (0x00089c95) aid_size_touch_vded2_start

0xdc2b,	// (0x00089c9d) vded2_slider_bg_pane

0xdc34,	// (0x00089ca6) vded2_slider_pane_g1

0xdc3d,	// (0x00089caf) vded2_slider_pane_g2

0x8588,	// (0x000845fa) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0008bb5a) vded2_slider_pane_g

0xdc08,	// (0x00089c7a) vded2_slider_bg_pane_g1

0xdc11,	// (0x00089c83) vded2_slider_bg_pane_g2

0xdc1a,	// (0x00089c8c) vded2_slider_bg_pane_g3

0x0002,

0xf7ae,	// (0x0008b820) vded2_slider_bg_pane_g

0x4e3b,	// (0x00080ead) aid_postcard_touch_down_pane_ParamLimits

0x4e3b,	// (0x00080ead) aid_postcard_touch_down_pane

0x4e4b,	// (0x00080ebd) aid_postcard_touch_up_pane_ParamLimits

0x4e4b,	// (0x00080ebd) aid_postcard_touch_up_pane

0xa165,	// (0x000861d7) main_blid2_pane

0xc857,	// (0x000888c9) popup_blid2_search_window

0xa165,	// (0x000861d7) blid2_gps_pane

0xa165,	// (0x000861d7) blid2_navig_pane

0xa165,	// (0x000861d7) blid2_search_pane

0xa165,	// (0x000861d7) blid2_tripm_pane

0x8591,	// (0x00084603) blid2_search_pane_g1_ParamLimits

0x8591,	// (0x00084603) blid2_search_pane_g1

0x859d,	// (0x0008460f) blid2_search_pane_t1_ParamLimits

0x859d,	// (0x0008460f) blid2_search_pane_t1

0x85af,	// (0x00084621) aid_size_cell_blid2_gps_ParamLimits

0x85af,	// (0x00084621) aid_size_cell_blid2_gps

0x85bf,	// (0x00084631) blid2_gps_pane_g1_ParamLimits

0x85bf,	// (0x00084631) blid2_gps_pane_g1

0x85cb,	// (0x0008463d) grid_blid2_satellite_pane_ParamLimits

0x85cb,	// (0x0008463d) grid_blid2_satellite_pane

0x85d9,	// (0x0008464b) blid2_navig_pane_g1_ParamLimits

0x85d9,	// (0x0008464b) blid2_navig_pane_g1

0x85e5,	// (0x00084657) blid2_navig_pane_t1_ParamLimits

0x85e5,	// (0x00084657) blid2_navig_pane_t1

0x85f7,	// (0x00084669) blid2_navig_pane_t2_ParamLimits

0x85f7,	// (0x00084669) blid2_navig_pane_t2

0x0001,

0xfaef,	// (0x0008bb61) blid2_navig_pane_t_ParamLimits

0xfaef,	// (0x0008bb61) blid2_navig_pane_t

0x8609,	// (0x0008467b) blid2_navig_ring_pane_ParamLimits

0x8609,	// (0x0008467b) blid2_navig_ring_pane

0x8619,	// (0x0008468b) blid2_speed_pane_ParamLimits

0x8619,	// (0x0008468b) blid2_speed_pane

0x8625,	// (0x00084697) blid2_tripm_pane_g1_ParamLimits

0x8625,	// (0x00084697) blid2_tripm_pane_g1

0x8635,	// (0x000846a7) blid2_tripm_pane_g2_ParamLimits

0x8635,	// (0x000846a7) blid2_tripm_pane_g2

0x8641,	// (0x000846b3) blid2_tripm_pane_g3_ParamLimits

0x8641,	// (0x000846b3) blid2_tripm_pane_g3

0x864d,	// (0x000846bf) blid2_tripm_pane_g4_ParamLimits

0x864d,	// (0x000846bf) blid2_tripm_pane_g4

0x8659,	// (0x000846cb) blid2_tripm_pane_g5_ParamLimits

0x8659,	// (0x000846cb) blid2_tripm_pane_g5

0x0005,

0xfaf4,	// (0x0008bb66) blid2_tripm_pane_g_ParamLimits

0xfaf4,	// (0x0008bb66) blid2_tripm_pane_g

0x8675,	// (0x000846e7) blid2_tripm_pane_t1_ParamLimits

0x8675,	// (0x000846e7) blid2_tripm_pane_t1

0x8687,	// (0x000846f9) blid2_tripm_pane_t2_ParamLimits

0x8687,	// (0x000846f9) blid2_tripm_pane_t2

0x8699,	// (0x0008470b) blid2_tripm_pane_t3_ParamLimits

0x8699,	// (0x0008470b) blid2_tripm_pane_t3

0x0003,

0xfb01,	// (0x0008bb73) blid2_tripm_pane_t_ParamLimits

0xfb01,	// (0x0008bb73) blid2_tripm_pane_t

0x86cb,	// (0x0008473d) cell_blid2_satellite_pane_ParamLimits

0x86cb,	// (0x0008473d) cell_blid2_satellite_pane

0x86e9,	// (0x0008475b) cell_blid2_satellite_pane_g1

0xdc45,	// (0x00089cb7) cell_blid2_satellite_pane_t1

0xcca2,	// (0x00088d14) blid2_speed_pane_g1

0xdc53,	// (0x00089cc5) blid2_speed_pane_t1

0xdc61,	// (0x00089cd3) blid2_speed_pane_t2

0x0001,

0xfb0a,	// (0x0008bb7c) blid2_speed_pane_t

0xcca2,	// (0x00088d14) blid2_navig_ring_pane_g1

0x86f2,	// (0x00084764) blid2_navig_ring_pane_g2

0x86fa,	// (0x0008476c) blid2_navig_ring_pane_g3

0x8702,	// (0x00084774) blid2_navig_ring_pane_g4

0x870a,	// (0x0008477c) blid2_navig_ring_pane_g5

0x0004,

0xfb0f,	// (0x0008bb81) blid2_navig_ring_pane_g

0xa165,	// (0x000861d7) bg_popup_window_pane_cp011

0xdc6f,	// (0x00089ce1) popup_blid2_search_window_g1

0xdc77,	// (0x00089ce9) popup_blid2_search_window_t1

0xdc85,	// (0x00089cf7) popup_blid2_search_window_t2

0x0001,

0xfb1a,	// (0x0008bb8c) popup_blid2_search_window_t

0xac42,	// (0x00086cb4) main_browser_pane_g1

0xa917,	// (0x00086989) main_browser_pane_ParamLimits

0xa89f,	// (0x00086911) bg_button_pane_cp011_ParamLimits

0x78df,	// (0x00083951) cell_vitu2_function_pane_g1_ParamLimits

0xc849,	// (0x000888bb) bg_popup_sub_pane_cp22_ParamLimits

0x1278,	// (0x0007d2ea) input_focus_pane_cp08_ParamLimits

0x8150,	// (0x000841c2) popup_vitu2_query_button_pane_ParamLimits

0x8150,	// (0x000841c2) popup_vitu2_query_button_pane

0x128f,	// (0x0007d301) popup_vitu2_query_input_button_pane

0xd8f1,	// (0x00089963) popup_vitu2_query_window_g1_ParamLimits

0x1299,	// (0x0007d30b) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0008ba94) popup_vitu2_query_window_g_ParamLimits

0xa165,	// (0x000861d7) bg_button_pane_cp026

0x8712,	// (0x00084784) popup_vitu2_query_input_button_pane_g1

0xa165,	// (0x000861d7) bg_button_pane_cp025

0xdc93,	// (0x00089d05) popup_vitu2_query_button_pane_t1

0x5fdc,	// (0x0008204e) main_mp3_pane_t6

0x5fec,	// (0x0008205e) popup_slider_window_cp01

0x754e,	// (0x000835c0) cam4_battery_pane

0x762c,	// (0x0008369e) cam4_battery_pane_cp02

0x8461,	// (0x000844d3) cam4_battery_pane_cp01

0x8461,	// (0x000844d3) cam4_battery_pane_cp03

0xcca2,	// (0x00088d14) cam4_battery_pane_g1

0xdbea,	// (0x00089c5c) cam4_battery_pane_g2

0x0001,

0xfb1f,	// (0x0008bb91) cam4_battery_pane_g

0xcb68,	// (0x00088bda) popup_blid_sat_info2_window_t11

0x476c,	// (0x000807de) aid_size_touch_mv_arrow_left_ParamLimits

0x4797,	// (0x00080809) aid_size_touch_mv_arrow_right_ParamLimits

0xb3a7,	// (0x00087419) navi_pane_g1_ParamLimits

0x47d6,	// (0x00080848) navi_pane_g2_ParamLimits

0x4804,	// (0x00080876) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0008b462) navi_pane_g_ParamLimits

0x485e,	// (0x000808d0) navi_pane_mv_t1_ParamLimits

0x6ad4,	// (0x00082b46) grid_imed_effect_pane_ParamLimits

0x331d,	// (0x0007f38f) aid_placing_vt_slider_lsc

0xab8d,	// (0x00086bff) aid_placing_vt_slider_prt

0xa89f,	// (0x00086911) bg_tb_trans_pane_cp01_ParamLimits

0xcdf2,	// (0x00088e64) popup_image_details_window_g1_ParamLimits

0xce05,	// (0x00088e77) popup_image_details_window_g2_ParamLimits

0xce1a,	// (0x00088e8c) popup_image_details_window_g3_ParamLimits

0xce1a,	// (0x00088e8c) popup_image_details_window_g3

0xf723,	// (0x0008b795) popup_image_details_window_g_ParamLimits

0xce2e,	// (0x00088ea0) popup_image_details_window_t1_ParamLimits

0xce40,	// (0x00088eb2) popup_image_details_window_t2_ParamLimits

0xce59,	// (0x00088ecb) popup_image_details_window_t3_ParamLimits

0xce6d,	// (0x00088edf) popup_image_details_window_t4_ParamLimits

0xce88,	// (0x00088efa) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0008b79c) popup_image_details_window_t_ParamLimits

0x838d,	// (0x000843ff) cl_header_name_pane_ParamLimits

0x838d,	// (0x000843ff) cl_header_name_pane

0x871a,	// (0x0008478c) cl_header_name_pane_t1_ParamLimits

0x871a,	// (0x0008478c) cl_header_name_pane_t1

0x8731,	// (0x000847a3) cl_header_name_pane_t2_ParamLimits

0x8731,	// (0x000847a3) cl_header_name_pane_t2

0x875b,	// (0x000847cd) cl_header_name_pane_t3_ParamLimits

0x875b,	// (0x000847cd) cl_header_name_pane_t3

0x0002,

0xfb24,	// (0x0008bb96) cl_header_name_pane_t_ParamLimits

0xfb24,	// (0x0008bb96) cl_header_name_pane_t

0x482f,	// (0x000808a1) navi_pane_mv_g2_ParamLimits

0xd652,	// (0x000896c4) field_vitu2_entry_pane_g1_ParamLimits

0xd65e,	// (0x000896d0) field_vitu2_entry_pane_g2_ParamLimits

0xd66a,	// (0x000896dc) field_vitu2_entry_pane_g3_ParamLimits

0xd66a,	// (0x000896dc) field_vitu2_entry_pane_g3

0xf921,	// (0x0008b993) field_vitu2_entry_pane_g_ParamLimits

0x786f,	// (0x000838e1) cell_vitu2_itu_pane_g1_ParamLimits

0x787f,	// (0x000838f1) cell_vitu2_itu_pane_g2_ParamLimits

0x787f,	// (0x000838f1) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0008b99f) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0008b99f) cell_vitu2_itu_pane_g

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp05_ParamLimits

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp05

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp03

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp04

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp10_ParamLimits

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp10

0x144e,	// (0x0007d4c0) bg_vkb2_func_pane_cp08

0x8337,	// (0x000843a9) bg_vkb2_func_pane_cp06

0x8345,	// (0x000843b7) bg_vkb2_func_pane_cp07

0xdb81,	// (0x00089bf3) bg_vkb2_func_pane_cp11_ParamLimits

0xdb81,	// (0x00089bf3) bg_vkb2_func_pane_cp11

0xdb96,	// (0x00089c08) bg_vkb2_func_pane_cp12_ParamLimits

0xdb96,	// (0x00089c08) bg_vkb2_func_pane_cp12

0xa165,	// (0x000861d7) bg_vkb2_func_pane_cp09

0xd68a,	// (0x000896fc) bg_vkb2_func_pane_g1

0xad53,	// (0x00086dc5) bg_vkb2_func_pane_g2

0xd692,	// (0x00089704) bg_vkb2_func_pane_g3

0xd69a,	// (0x0008970c) bg_vkb2_func_pane_g4

0xd8b4,	// (0x00089926) bg_vkb2_func_pane_g5

0xd6b2,	// (0x00089724) bg_vkb2_func_pane_g6

0xd6ba,	// (0x0008972c) bg_vkb2_func_pane_g7

0xd6aa,	// (0x0008971c) bg_vkb2_func_pane_g8

0xad33,	// (0x00086da5) bg_vkb2_func_pane_g9

0x0008,

0xfb2b,	// (0x0008bb9d) bg_vkb2_func_pane_g

0x8667,	// (0x000846d9) blid2_tripm_pane_g6_ParamLimits

0x8667,	// (0x000846d9) blid2_tripm_pane_g6

0xd526,	// (0x00089598) mp4_progress_pane_g1

0x86bf,	// (0x00084731) blid2_tripm_values_pane_ParamLimits

0x86bf,	// (0x00084731) blid2_tripm_values_pane

0x8780,	// (0x000847f2) blid2_tripm_values_pane_t1

0x878e,	// (0x00084800) blid2_tripm_values_pane_t2

0x879c,	// (0x0008480e) blid2_tripm_values_pane_t3

0x87aa,	// (0x0008481c) blid2_tripm_values_pane_t4

0x87b8,	// (0x0008482a) blid2_tripm_values_pane_t5

0x87c6,	// (0x00084838) blid2_tripm_values_pane_t6

0x87d4,	// (0x00084846) blid2_tripm_values_pane_t7

0x87e2,	// (0x00084854) blid2_tripm_values_pane_t8

0x87f0,	// (0x00084862) blid2_tripm_values_pane_t9

0x0008,

0xfb3e,	// (0x0008bbb0) blid2_tripm_values_pane_t

0x335b,	// (0x0007f3cd) call_video_pane_t1_ParamLimits

0x3378,	// (0x0007f3ea) call_video_pane_t2_ParamLimits

0xf279,	// (0x0008b2eb) call_video_pane_t_ParamLimits

0x1044,	// (0x0007d0b6) msg_header_pane_g1_ParamLimits

0xb5bb,	// (0x0008762d) msg_header_pane_g2_ParamLimits

0xb5bb,	// (0x0008762d) msg_header_pane_g2

0x0001,

0xf493,	// (0x0008b505) msg_header_pane_g_ParamLimits

0xf493,	// (0x0008b505) msg_header_pane_g

0xa917,	// (0x00086989) main_clock2_pane_ParamLimits

0x6863,	// (0x000828d5) grid_clock2_toolbar_pane_ParamLimits

0x6863,	// (0x000828d5) grid_clock2_toolbar_pane

0x6863,	// (0x000828d5) listscroll_clock2_pane_ParamLimits

0x6863,	// (0x000828d5) listscroll_clock2_pane

0x690b,	// (0x0008297d) main_clock2_pane_t3_ParamLimits

0x690b,	// (0x0008297d) main_clock2_pane_t3

0x691d,	// (0x0008298f) main_clock2_pane_t4_ParamLimits

0x691d,	// (0x0008298f) main_clock2_pane_t4

0xdca1,	// (0x00089d13) cell_clock2_toolbar_pane

0xdca9,	// (0x00089d1b) cell_clock2_toolbar_pane_cp01

0xdca9,	// (0x00089d1b) cell_clock2_toolbar_pane_cp02

0xdcb1,	// (0x00089d23) cell_clock2_toolbar_pane_cp03

0xdcb9,	// (0x00089d2b) list_clock2_pane

0xb2ff,	// (0x00087371) scroll_pane_cp10

0xdcc1,	// (0x00089d33) list_single_clock2_pane_ParamLimits

0xdcc1,	// (0x00089d33) list_single_clock2_pane

0xb447,	// (0x000874b9) list_highlight_pane_cp08

0xdcce,	// (0x00089d40) list_single_clock2_pane_t1

0xdcea,	// (0x00089d5c) list_single_clock2_pane_t2

0x0001,

0xfb51,	// (0x0008bbc3) list_single_clock2_pane_t

0xa165,	// (0x000861d7) bg_button_pane_cp10

0xdcf8,	// (0x00089d6a) cell_clock2_toolbar_pane_g1

0x4d9d,	// (0x00080e0f) aid_main_viewer_pane_g1_ParamLimits

0x4d9d,	// (0x00080e0f) aid_main_viewer_pane_g1

0x4da9,	// (0x00080e1b) aid_main_viewer_pane_g2_ParamLimits

0x4da9,	// (0x00080e1b) aid_main_viewer_pane_g2

0x4db5,	// (0x00080e27) aid_main_viewer_pane_g3_ParamLimits

0x4db5,	// (0x00080e27) aid_main_viewer_pane_g3

0x4dc6,	// (0x00080e38) aid_main_viewer_pane_g4_ParamLimits

0x4dc6,	// (0x00080e38) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0008b516) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0008b516) aid_main_viewer_pane_g

0x5550,	// (0x000815c2) main_calc_pane_ParamLimits

0x555d,	// (0x000815cf) main_dialer2_pane_ParamLimits

0xa165,	// (0x000861d7) main_cam6_pane

0xa165,	// (0x000861d7) main_vid6_pane

0x686f,	// (0x000828e1) listscroll_gen_pane_cp06_ParamLimits

0x686f,	// (0x000828e1) listscroll_gen_pane_cp06

0x692f,	// (0x000829a1) main_clock2_pane_t5_ParamLimits

0x692f,	// (0x000829a1) main_clock2_pane_t5

0x697e,	// (0x000829f0) aid_call2_pane_cp10_ParamLimits

0x6990,	// (0x00082a02) aid_call_pane_cp10_ParamLimits

0xb36e,	// (0x000873e0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb36e,	// (0x000873e0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x69a2,	// (0x00082a14) popup_clock_analogue_window_cp10_g3_ParamLimits

0x69a2,	// (0x00082a14) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb36e,	// (0x000873e0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0008b84c) popup_clock_analogue_window_cp10_g_ParamLimits

0x69b4,	// (0x00082a26) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7187,	// (0x000831f9) cell_dialer2_keypad_pane_g2_ParamLimits

0x7187,	// (0x000831f9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0008b932) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0008b932) cell_dialer2_keypad_pane_g

0x71a3,	// (0x00083215) cell_dialer2_keypad_pane_t1

0x7bbc,	// (0x00083c2e) main_cset_text2_pane_ParamLimits

0x7bbc,	// (0x00083c2e) main_cset_text2_pane

0xdae9,	// (0x00089b5b) area_vitu2_query_pane_g1_ParamLimits

0x1379,	// (0x0007d3eb) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0008bae7) area_vitu2_query_pane_g_ParamLimits

0x142a,	// (0x0007d49c) area_vitu2_query_pane_t7_ParamLimits

0x142a,	// (0x0007d49c) area_vitu2_query_pane_t7

0x8337,	// (0x000843a9) bg_button_pane_cp018_ParamLimits

0x8345,	// (0x000843b7) bg_button_pane_cp021_ParamLimits

0x144e,	// (0x0007d4c0) bg_button_pane_cp022_ParamLimits

0x144e,	// (0x0007d4c0) bg_vkb2_func_pane_cp08_ParamLimits

0x8337,	// (0x000843a9) bg_vkb2_func_pane_cp06_ParamLimits

0x8345,	// (0x000843b7) bg_vkb2_func_pane_cp07_ParamLimits

0x145f,	// (0x0007d4d1) input_focus_pane_cp09_ParamLimits

0x87fe,	// (0x00084870) cam6_autofocus_pane_ParamLimits

0x87fe,	// (0x00084870) cam6_autofocus_pane

0x8820,	// (0x00084892) cam6_image_uncrop_pane_ParamLimits

0x8820,	// (0x00084892) cam6_image_uncrop_pane

0x884d,	// (0x000848bf) cam6_indi_pane_ParamLimits

0x884d,	// (0x000848bf) cam6_indi_pane

0x8867,	// (0x000848d9) cam6_mode_pane_ParamLimits

0x8867,	// (0x000848d9) cam6_mode_pane

0x887b,	// (0x000848ed) cam6_timer_pane_ParamLimits

0x887b,	// (0x000848ed) cam6_timer_pane

0x8887,	// (0x000848f9) cam6_zoom_pane_ParamLimits

0x8887,	// (0x000848f9) cam6_zoom_pane

0x88a3,	// (0x00084915) cam6_mode_pane_g1_ParamLimits

0x88a3,	// (0x00084915) cam6_mode_pane_g1

0x88af,	// (0x00084921) cam6_mode_pane_g2_ParamLimits

0x88af,	// (0x00084921) cam6_mode_pane_g2

0x88bb,	// (0x0008492d) cam6_mode_pane_g3_ParamLimits

0x88bb,	// (0x0008492d) cam6_mode_pane_g3

0x88c7,	// (0x00084939) cam6_mode_pane_g4_ParamLimits

0x88c7,	// (0x00084939) cam6_mode_pane_g4

0x0003,

0xfb56,	// (0x0008bbc8) cam6_mode_pane_g_ParamLimits

0xfb56,	// (0x0008bbc8) cam6_mode_pane_g

0xdcdc,	// (0x00089d4e) bg_tb_trans_pane_cp08_ParamLimits

0xdcdc,	// (0x00089d4e) bg_tb_trans_pane_cp08

0xdd00,	// (0x00089d72) cam6_battery_pane_ParamLimits

0xdd00,	// (0x00089d72) cam6_battery_pane

0xdd16,	// (0x00089d88) cam6_indi_pane_g1_ParamLimits

0xdd16,	// (0x00089d88) cam6_indi_pane_g1

0xdd28,	// (0x00089d9a) cam6_indi_pane_g2_ParamLimits

0xdd28,	// (0x00089d9a) cam6_indi_pane_g2

0xdd3a,	// (0x00089dac) cam6_indi_pane_g3_ParamLimits

0xdd3a,	// (0x00089dac) cam6_indi_pane_g3

0x0002,

0xfb5f,	// (0x0008bbd1) cam6_indi_pane_g_ParamLimits

0xfb5f,	// (0x0008bbd1) cam6_indi_pane_g

0xdd4c,	// (0x00089dbe) cam6_indi_pane_t1_ParamLimits

0xdd4c,	// (0x00089dbe) cam6_indi_pane_t1

0x76a8,	// (0x0008371a) cam6_autofocus_pane_g1

0x76b0,	// (0x00083722) cam6_autofocus_pane_g2

0x76b8,	// (0x0008372a) cam6_autofocus_pane_g3

0x76c0,	// (0x00083732) cam6_autofocus_pane_g4

0x0003,

0xfb66,	// (0x0008bbd8) cam6_autofocus_pane_g

0xdd72,	// (0x00089de4) cam6_timer_pane_g1

0xdd7a,	// (0x00089dec) cam6_timer_pane_t1

0xdd88,	// (0x00089dfa) cam6_zoom_cont_pane

0xdd90,	// (0x00089e02) cam6_zoom_pane_g1

0xdd98,	// (0x00089e0a) cam6_zoom_pane_g2

0x88d3,	// (0x00084945) cam6_zoom_pane_g3

0x0002,

0xfb6f,	// (0x0008bbe1) cam6_zoom_pane_g

0xcca2,	// (0x00088d14) cam6_battery_pane_g1

0xcca2,	// (0x00088d14) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0008b759) cam6_battery_pane_g

0xdda0,	// (0x00089e12) cam6_zoom_cont_pane_g1

0xdda9,	// (0x00089e1b) cam6_zoom_cont_pane_g2

0xddb2,	// (0x00089e24) cam6_zoom_cont_pane_g3

0x0002,

0xfb76,	// (0x0008bbe8) cam6_zoom_cont_pane_g

0x88f0,	// (0x00084962) cam6_mode_pane_cp_ParamLimits

0x88f0,	// (0x00084962) cam6_mode_pane_cp

0x8887,	// (0x000848f9) cam6_zoom_pane_cp_ParamLimits

0x8887,	// (0x000848f9) cam6_zoom_pane_cp

0x8904,	// (0x00084976) vid6_image_uncrop_cif_pane_ParamLimits

0x8904,	// (0x00084976) vid6_image_uncrop_cif_pane

0x8930,	// (0x000849a2) vid6_image_uncrop_nhd_pane_ParamLimits

0x8930,	// (0x000849a2) vid6_image_uncrop_nhd_pane

0x8820,	// (0x00084892) vid6_image_uncrop_vga_pane_ParamLimits

0x8820,	// (0x00084892) vid6_image_uncrop_vga_pane

0x894f,	// (0x000849c1) vid6_image_uncrop_wvga_pane_ParamLimits

0x894f,	// (0x000849c1) vid6_image_uncrop_wvga_pane

0x896e,	// (0x000849e0) vid6_indi_pane_ParamLimits

0x896e,	// (0x000849e0) vid6_indi_pane

0xdcdc,	// (0x00089d4e) bg_tb_trans_pane_cp09_ParamLimits

0xdcdc,	// (0x00089d4e) bg_tb_trans_pane_cp09

0xddca,	// (0x00089e3c) cam6_battery_pane_cp_ParamLimits

0xddca,	// (0x00089e3c) cam6_battery_pane_cp

0xddd6,	// (0x00089e48) vid6_indi_pane_g1_ParamLimits

0xddd6,	// (0x00089e48) vid6_indi_pane_g1

0xdde8,	// (0x00089e5a) vid6_indi_pane_g2_ParamLimits

0xdde8,	// (0x00089e5a) vid6_indi_pane_g2

0xddfa,	// (0x00089e6c) vid6_indi_pane_g3_ParamLimits

0xddfa,	// (0x00089e6c) vid6_indi_pane_g3

0xde11,	// (0x00089e83) vid6_indi_pane_g4_ParamLimits

0xde11,	// (0x00089e83) vid6_indi_pane_g4

0xde28,	// (0x00089e9a) vid6_indi_pane_g5_ParamLimits

0xde28,	// (0x00089e9a) vid6_indi_pane_g5

0x0004,

0xfb7d,	// (0x0008bbef) vid6_indi_pane_g_ParamLimits

0xfb7d,	// (0x0008bbef) vid6_indi_pane_g

0xde42,	// (0x00089eb4) vid6_indi_pane_t1_ParamLimits

0xde42,	// (0x00089eb4) vid6_indi_pane_t1

0xde58,	// (0x00089eca) vid6_indi_pane_t2_ParamLimits

0xde58,	// (0x00089eca) vid6_indi_pane_t2

0xde80,	// (0x00089ef2) vid6_indi_pane_t3_ParamLimits

0xde80,	// (0x00089ef2) vid6_indi_pane_t3

0xdea8,	// (0x00089f1a) vid6_indi_pane_t4_ParamLimits

0xdea8,	// (0x00089f1a) vid6_indi_pane_t4

0x0003,

0xfb88,	// (0x0008bbfa) vid6_indi_pane_t_ParamLimits

0xfb88,	// (0x0008bbfa) vid6_indi_pane_t

0xdecc,	// (0x00089f3e) wait_bar_pane_cp08

0x8993,	// (0x00084a05) main_cset_text2_pane_t1_ParamLimits

0x8993,	// (0x00084a05) main_cset_text2_pane_t1

0x88db,	// (0x0008494d) listscroll_gen_pane_cp06_t1_ParamLimits

0x88db,	// (0x0008494d) listscroll_gen_pane_cp06_t1

0xa165,	// (0x000861d7) main_cam6_set_pane

0xced2,	// (0x00088f44) bg_tb_trans_pane_cp06_ParamLimits

0x7556,	// (0x000835c8) cam4_indicators_pane_g1_ParamLimits

0x7567,	// (0x000835d9) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0008b96f) cam4_indicators_pane_g_ParamLimits

0x757f,	// (0x000835f1) cam4_indicators_pane_t1_ParamLimits

0xa89f,	// (0x00086911) bg_tb_trans_pane_cp07_ParamLimits

0x7636,	// (0x000836a8) vid4_indicators_pane_g1_ParamLimits

0x764c,	// (0x000836be) vid4_indicators_pane_g2_ParamLimits

0x7660,	// (0x000836d2) vid4_indicators_pane_g3_ParamLimits

0x7673,	// (0x000836e5) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0008b981) vid4_indicators_pane_g_ParamLimits

0x7691,	// (0x00083703) vid4_indicators_pane_t1_ParamLimits

0x8469,	// (0x000844db) vid4_progress_pane_g1_ParamLimits

0x847b,	// (0x000844ed) vid4_progress_pane_g2_ParamLimits

0x4e23,	// (0x00080e95) vid4_progress_pane_g3_ParamLimits

0x848d,	// (0x000844ff) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0008bb32) vid4_progress_pane_g_ParamLimits

0x84ab,	// (0x0008451d) vid4_progress_pane_t1_ParamLimits

0x84c0,	// (0x00084532) vid4_progress_pane_t2_ParamLimits

0x84d6,	// (0x00084548) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0008bb3d) vid4_progress_pane_t_ParamLimits

0x84eb,	// (0x0008455d) wait_bar_pane_cp07_ParamLimits

0x89ba,	// (0x00084a2c) main_cam6_set_pane_g2_ParamLimits

0x89ba,	// (0x00084a2c) main_cam6_set_pane_g2

0x89c6,	// (0x00084a38) main_cset6_listscroll_pane_ParamLimits

0x89c6,	// (0x00084a38) main_cset6_listscroll_pane

0x89f3,	// (0x00084a65) main_cset6_slider_pane_ParamLimits

0x89f3,	// (0x00084a65) main_cset6_slider_pane

0x89ff,	// (0x00084a71) main_cset6_text2_pane_ParamLimits

0x89ff,	// (0x00084a71) main_cset6_text2_pane

0xdedb,	// (0x00089f4d) main_cset6_text_pane

0xdee3,	// (0x00089f55) main_cset_list_pane_copy1_ParamLimits

0xdee3,	// (0x00089f55) main_cset_list_pane_copy1

0xdef3,	// (0x00089f65) scroll_pane_cp028_copy1

0x8a12,	// (0x00084a84) cset_list_set_pane_copy1

0x8a22,	// (0x00084a94) aid_position_infowindow_above_copy1

0x8a2a,	// (0x00084a9c) aid_position_infowindow_below_copy1

0x8a32,	// (0x00084aa4) cset_list_set_pane_g1_copy1

0x148c,	// (0x0007d4fe) cset_list_set_pane_g3_copy1_ParamLimits

0x148c,	// (0x0007d4fe) cset_list_set_pane_g3_copy1

0x149b,	// (0x0007d50d) cset_list_set_pane_t1_copy1_ParamLimits

0x149b,	// (0x0007d50d) cset_list_set_pane_t1_copy1

0xa89f,	// (0x00086911) list_highlight_pane_cp021_copy1_ParamLimits

0xa89f,	// (0x00086911) list_highlight_pane_cp021_copy1

0xdefc,	// (0x00089f6e) cset6_slider_pane_ParamLimits

0xdefc,	// (0x00089f6e) cset6_slider_pane

0xdf28,	// (0x00089f9a) main_cset6_slider_pane_g1_ParamLimits

0xdf28,	// (0x00089f9a) main_cset6_slider_pane_g1

0x8a3a,	// (0x00084aac) main_cset6_slider_pane_g2_ParamLimits

0x8a3a,	// (0x00084aac) main_cset6_slider_pane_g2

0xdf50,	// (0x00089fc2) main_cset6_slider_pane_g3_ParamLimits

0xdf50,	// (0x00089fc2) main_cset6_slider_pane_g3

0x8a62,	// (0x00084ad4) main_cset6_slider_pane_g4_ParamLimits

0x8a62,	// (0x00084ad4) main_cset6_slider_pane_g4

0x8a6e,	// (0x00084ae0) main_cset6_slider_pane_g5_ParamLimits

0x8a6e,	// (0x00084ae0) main_cset6_slider_pane_g5

0xd7bd,	// (0x0008982f) main_cset6_slider_pane_g7_ParamLimits

0xd7bd,	// (0x0008982f) main_cset6_slider_pane_g7

0xd7c9,	// (0x0008983b) main_cset6_slider_pane_g8_ParamLimits

0xd7c9,	// (0x0008983b) main_cset6_slider_pane_g8

0x8a7a,	// (0x00084aec) main_cset6_slider_pane_g9_ParamLimits

0x8a7a,	// (0x00084aec) main_cset6_slider_pane_g9

0x8a86,	// (0x00084af8) main_cset6_slider_pane_g10_ParamLimits

0x8a86,	// (0x00084af8) main_cset6_slider_pane_g10

0x8a92,	// (0x00084b04) main_cset6_slider_pane_g11_ParamLimits

0x8a92,	// (0x00084b04) main_cset6_slider_pane_g11

0x8a9e,	// (0x00084b10) main_cset6_slider_pane_g12_ParamLimits

0x8a9e,	// (0x00084b10) main_cset6_slider_pane_g12

0x8aaa,	// (0x00084b1c) main_cset6_slider_pane_g13_ParamLimits

0x8aaa,	// (0x00084b1c) main_cset6_slider_pane_g13

0x8ab6,	// (0x00084b28) main_cset6_slider_pane_g14_ParamLimits

0x8ab6,	// (0x00084b28) main_cset6_slider_pane_g14

0x8ac2,	// (0x00084b34) main_cset6_slider_pane_g15_ParamLimits

0x8ac2,	// (0x00084b34) main_cset6_slider_pane_g15

0x8ada,	// (0x00084b4c) main_cset6_slider_pane_g16_ParamLimits

0x8ada,	// (0x00084b4c) main_cset6_slider_pane_g16

0x8ae6,	// (0x00084b58) main_cset6_slider_pane_g17_ParamLimits

0x8ae6,	// (0x00084b58) main_cset6_slider_pane_g17

0x0011,

0xfb91,	// (0x0008bc03) main_cset6_slider_pane_g_ParamLimits

0xfb91,	// (0x0008bc03) main_cset6_slider_pane_g

0xdf5c,	// (0x00089fce) main_cset6_slider_pane_t1_ParamLimits

0xdf5c,	// (0x00089fce) main_cset6_slider_pane_t1

0x8b0a,	// (0x00084b7c) main_cset6_slider_pane_t2_ParamLimits

0x8b0a,	// (0x00084b7c) main_cset6_slider_pane_t2

0x8b35,	// (0x00084ba7) main_cset6_slider_pane_t3_ParamLimits

0x8b35,	// (0x00084ba7) main_cset6_slider_pane_t3

0x8b60,	// (0x00084bd2) main_cset6_slider_pane_t4_ParamLimits

0x8b60,	// (0x00084bd2) main_cset6_slider_pane_t4

0x8b8b,	// (0x00084bfd) main_cset6_slider_pane_t5_ParamLimits

0x8b8b,	// (0x00084bfd) main_cset6_slider_pane_t5

0xdfb8,	// (0x0008a02a) main_cset6_slider_pane_t7_ParamLimits

0xdfb8,	// (0x0008a02a) main_cset6_slider_pane_t7

0x8bb6,	// (0x00084c28) main_cset6_slider_pane_t8_ParamLimits

0x8bb6,	// (0x00084c28) main_cset6_slider_pane_t8

0x8bda,	// (0x00084c4c) main_cset6_slider_pane_t9_ParamLimits

0x8bda,	// (0x00084c4c) main_cset6_slider_pane_t9

0x8bfe,	// (0x00084c70) main_cset6_slider_pane_t10_ParamLimits

0x8bfe,	// (0x00084c70) main_cset6_slider_pane_t10

0x8c22,	// (0x00084c94) main_cset6_slider_pane_t11_ParamLimits

0x8c22,	// (0x00084c94) main_cset6_slider_pane_t11

0xdfee,	// (0x0008a060) main_cset6_slider_pane_t14_ParamLimits

0xdfee,	// (0x0008a060) main_cset6_slider_pane_t14

0xe027,	// (0x0008a099) main_cset6_slider_pane_t15_ParamLimits

0xe027,	// (0x0008a099) main_cset6_slider_pane_t15

0x000b,

0xfbb6,	// (0x0008bc28) main_cset6_slider_pane_t_ParamLimits

0xfbb6,	// (0x0008bc28) main_cset6_slider_pane_t

0xdf9d,	// (0x0008a00f) cset_slider_pane_g1_copy1

0xdfa6,	// (0x0008a018) cset_slider_pane_g2_copy1

0xdfaf,	// (0x0008a021) cset_slider_pane_g3_copy1

0xa165,	// (0x000861d7) bg_popup_sub_pane_cp011_copy1

0xe060,	// (0x0008a0d2) main_cset_text_pane_g1_copy1

0xd905,	// (0x00089977) main_cset_text_pane_t1_copy1

0xd913,	// (0x00089985) main_cset_text_pane_t2_copy1

0xd921,	// (0x00089993) main_cset_text_pane_t3_copy1

0xd92f,	// (0x000899a1) main_cset_text_pane_t4_copy1

0xd93d,	// (0x000899af) main_cset_text_pane_t5_copy1

0xe068,	// (0x0008a0da) main_cset_text_pane_t6_copy1

0xe076,	// (0x0008a0e8) main_cset_text_pane_t7_copy1

0x8c61,	// (0x00084cd3) main_cset_text2_pane_t1_copy1

0xa89f,	// (0x00086911) main_ncimui_pane

0x55a2,	// (0x00081614) popup_query_ncimui_window_ParamLimits

0x55a2,	// (0x00081614) popup_query_ncimui_window

0x6135,	// (0x000821a7) field_cale_ev2_pane_g4_ParamLimits

0x6135,	// (0x000821a7) field_cale_ev2_pane_g4

0x6e9d,	// (0x00082f0f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e9d,	// (0x00082f0f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0008b90d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0008b90d) cell_video_dialer_keypad_pane_g

0x6eb5,	// (0x00082f27) cell_video_dialer_keypad_pane_t1

0xa165,	// (0x000861d7) bg_popup_window_pane_cp012

0xb1eb,	// (0x0008725d) heading_pane_cp06

0xe0a2,	// (0x0008a114) ncim_query_content_pane

0xa165,	// (0x000861d7) bg_popup_heading_pane_cp01

0xe0aa,	// (0x0008a11c) ncim_heading_pane_t1

0xe0b8,	// (0x0008a12a) ncim_indicator_popup_pane

0xe0ca,	// (0x0008a13c) ncim_query_button_pane

0xe0e0,	// (0x0008a152) ncim_query_content_pane_t1

0xe0f2,	// (0x0008a164) ncim_query_content_pane_t2

0x0005,

0xfbfa,	// (0x0008bc6c) ncim_query_content_pane_t

0xe12c,	// (0x0008a19e) ncim_query_list_pane

0xe13e,	// (0x0008a1b0) ncim_query_popup_pane

0xe0b8,	// (0x0008a12a) ncim_indicator_popup_pane_ParamLimits

0x8dbd,	// (0x00084e2f) ncim_query_content_pane_g1_ParamLimits

0x8dbd,	// (0x00084e2f) ncim_query_content_pane_g1

0xe0e0,	// (0x0008a152) ncim_query_content_pane_t1_ParamLimits

0xe0f2,	// (0x0008a164) ncim_query_content_pane_t2_ParamLimits

0x8dc9,	// (0x00084e3b) ncim_query_content_pane_t3_ParamLimits

0x8dc9,	// (0x00084e3b) ncim_query_content_pane_t3

0x8de6,	// (0x00084e58) ncim_query_content_pane_t4_ParamLimits

0x8de6,	// (0x00084e58) ncim_query_content_pane_t4

0x8e03,	// (0x00084e75) ncim_query_content_pane_t5_ParamLimits

0x8e03,	// (0x00084e75) ncim_query_content_pane_t5

0xe104,	// (0x0008a176) ncim_query_content_pane_t6_ParamLimits

0xe104,	// (0x0008a176) ncim_query_content_pane_t6

0xfbfa,	// (0x0008bc6c) ncim_query_content_pane_t_ParamLimits

0xe12c,	// (0x0008a19e) ncim_query_list_pane_ParamLimits

0xe13e,	// (0x0008a1b0) ncim_query_popup_pane_ParamLimits

0xe152,	// (0x0008a1c4) wait_bar_pane_cp04

0xa165,	// (0x000861d7) input_focus_pane_cp011

0xe15a,	// (0x0008a1cc) ncim_query_popup_pane_t1

0xe168,	// (0x0008a1da) ncim_list_query_list_pane_ParamLimits

0xe168,	// (0x0008a1da) ncim_list_query_list_pane

0xa165,	// (0x000861d7) bg_button_pane_cp027

0xe17b,	// (0x0008a1ed) ncim_query_button_pane_g1

0xa165,	// (0x000861d7) list_highlight_pane_cp012

0xe185,	// (0x0008a1f7) ncim_list_query_list_pane_g1

0xe18d,	// (0x0008a1ff) ncim_list_query_list_pane_t1

0x7573,	// (0x000835e5) cam4_indicators_pane_g3_ParamLimits

0x7573,	// (0x000835e5) cam4_indicators_pane_g3

0x767f,	// (0x000836f1) vid4_indicators_pane_g5_ParamLimits

0x767f,	// (0x000836f1) vid4_indicators_pane_g5

0x849c,	// (0x0008450e) vid4_progress_pane_g5_ParamLimits

0x849c,	// (0x0008450e) vid4_progress_pane_g5

0x8c93,	// (0x00084d05) main_ncimui_pane_g1

0x8cff,	// (0x00084d71) ncimui_group_query_pane_ParamLimits

0x8cff,	// (0x00084d71) ncimui_group_query_pane

0x8d59,	// (0x00084dcb) ncimui_list_pane_ParamLimits

0x8d59,	// (0x00084dcb) ncimui_list_pane

0x8d80,	// (0x00084df2) ncimui_text_pane_ParamLimits

0x8d80,	// (0x00084df2) ncimui_text_pane

0x8e20,	// (0x00084e92) ncimui_text_pane_t1_ParamLimits

0x8e20,	// (0x00084e92) ncimui_text_pane_t1

0xe19b,	// (0x0008a20d) ncimui_list_single_graphic_pane_ParamLimits

0xe19b,	// (0x0008a20d) ncimui_list_single_graphic_pane

0x8e3f,	// (0x00084eb1) ncimui_query_pane_ParamLimits

0x8e3f,	// (0x00084eb1) ncimui_query_pane

0xa165,	// (0x000861d7) list_highlight_pane_cp013

0xe1ab,	// (0x0008a21d) ncim_list_query_list_pane_t1_copy1

0xe185,	// (0x0008a1f7) ncim_list_single_graphic_pane_g1

0xe1b9,	// (0x0008a22b) ncim_query_button_pane_cp01

0xe1c5,	// (0x0008a237) ncim_query_entry_pane_ParamLimits

0xe1c5,	// (0x0008a237) ncim_query_entry_pane

0xe1d8,	// (0x0008a24a) ncimui_query_pane_g1

0xe1e4,	// (0x0008a256) ncimui_query_pane_t1_ParamLimits

0xe1e4,	// (0x0008a256) ncimui_query_pane_t1

0xa89f,	// (0x00086911) input_focus_pane_cp012

0xe1fd,	// (0x0008a26f) ncim_query_entry_pane_t1

0xa917,	// (0x00086989) main_im_pane_ParamLimits

0xa89f,	// (0x00086911) main_mobtv_pane_ParamLimits

0xa89f,	// (0x00086911) main_mobtv_pane

0x8af2,	// (0x00084b64) main_cset6_slider_pane_g18_ParamLimits

0x8af2,	// (0x00084b64) main_cset6_slider_pane_g18

0x8afe,	// (0x00084b70) main_cset6_slider_pane_g19_ParamLimits

0x8afe,	// (0x00084b70) main_cset6_slider_pane_g19

0xd66a,	// (0x000896dc) bg_main_mobtv_pane_ParamLimits

0xd66a,	// (0x000896dc) bg_main_mobtv_pane

0x8e52,	// (0x00084ec4) main_mobtv_info_pane

0x8e5d,	// (0x00084ecf) main_mobtv_loading_pane_ParamLimits

0x8e5d,	// (0x00084ecf) main_mobtv_loading_pane

0xe20f,	// (0x0008a281) main_mobtv_pg_channel_list_pane

0xe219,	// (0x0008a28b) main_mobtv_pg_hdr_pane

0x8e6a,	// (0x00084edc) main_mobtv_programe_curr_pane_ParamLimits

0x8e6a,	// (0x00084edc) main_mobtv_programe_curr_pane

0x8e77,	// (0x00084ee9) main_mobtv_programe_next_pane_ParamLimits

0x8e77,	// (0x00084ee9) main_mobtv_programe_next_pane

0xe222,	// (0x0008a294) popup_mobtv_noti_window

0xcca2,	// (0x00088d14) main_tv_pg_hdr_pane_g1

0xe22c,	// (0x0008a29e) main_tv_pg_hdr_pane_g2

0xe234,	// (0x0008a2a6) main_tv_pg_hdr_pane_g3

0xe23c,	// (0x0008a2ae) main_tv_pg_hdr_pane_g4

0xe244,	// (0x0008a2b6) main_tv_pg_hdr_pane_g5

0xe24e,	// (0x0008a2c0) main_tv_pg_hdr_pane_g6

0xe258,	// (0x0008a2ca) main_tv_pg_hdr_pane_g7

0xe262,	// (0x0008a2d4) main_tv_pg_hdr_pane_g8

0xe26c,	// (0x0008a2de) main_tv_pg_hdr_pane_g9

0xe276,	// (0x0008a2e8) main_tv_pg_hdr_pane_g10

0xe280,	// (0x0008a2f2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc07,	// (0x0008bc79) main_tv_pg_hdr_pane_g

0xe28a,	// (0x0008a2fc) main_tv_pg_hdr_pane_t1

0xe298,	// (0x0008a30a) main_tv_pg_hdr_pane_t2

0xe2a6,	// (0x0008a318) main_tv_pg_hdr_pane_t3

0xe2b6,	// (0x0008a328) main_tv_pg_hdr_pane_t4

0xe2c6,	// (0x0008a338) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1e,	// (0x0008bc90) main_tv_pg_hdr_pane_t

0xe2d6,	// (0x0008a348) single_mobtv_pg_channel_pane_ParamLimits

0xe2d6,	// (0x0008a348) single_mobtv_pg_channel_pane

0xe2e8,	// (0x0008a35a) single_mobtv_pg_channel_table_pane

0xe2f1,	// (0x0008a363) single_mobtv_pg_channel_thumb_pane

0xe2fa,	// (0x0008a36c) single_tv_pg_channel_pane_g1

0xe303,	// (0x0008a375) single_tv_pg_channel_pane_g2

0x0001,

0xfc29,	// (0x0008bc9b) single_tv_pg_channel_pane_g

0xced2,	// (0x00088f44) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xced2,	// (0x00088f44) bg_single_mobtv_pg_channel_thumb_pane

0xe30c,	// (0x0008a37e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe30c,	// (0x0008a37e) single_mobtv_pg_channel_thumb_pane_g1

0xe31a,	// (0x0008a38c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe31a,	// (0x0008a38c) single_mobtv_pg_channel_thumb_pane_g2

0xe326,	// (0x0008a398) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe326,	// (0x0008a398) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2e,	// (0x0008bca0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2e,	// (0x0008bca0) single_mobtv_pg_channel_thumb_pane_g

0xe332,	// (0x0008a3a4) single_mobtv_pg_channel_thumb_pane_t1

0xe340,	// (0x0008a3b2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc35,	// (0x0008bca7) single_mobtv_pg_channel_thumb_pane_t

0xcca2,	// (0x00088d14) bg_single_mobtv_pg_channel_table_pane_g1

0xcca2,	// (0x00088d14) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0008b759) bg_single_mobtv_pg_channel_table_pane_g

0xe34e,	// (0x0008a3c0) single_mobtv_pg_channel_table_pane_t1

0xe35c,	// (0x0008a3ce) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3a,	// (0x0008bcac) single_mobtv_pg_channel_table_pane_t

0x8e8c,	// (0x00084efe) main_mobtv_info_pane_g1_ParamLimits

0x8e8c,	// (0x00084efe) main_mobtv_info_pane_g1

0x8ea8,	// (0x00084f1a) main_mobtv_info_pane_t1_ParamLimits

0x8ea8,	// (0x00084f1a) main_mobtv_info_pane_t1

0x8f20,	// (0x00084f92) main_mobtv_info_pane_t2_ParamLimits

0x8f20,	// (0x00084f92) main_mobtv_info_pane_t2

0x0002,

0xfc44,	// (0x0008bcb6) main_mobtv_info_pane_t_ParamLimits

0xfc44,	// (0x0008bcb6) main_mobtv_info_pane_t

0x8fb1,	// (0x00085023) wait_bar_pane_cp05

0x8fc3,	// (0x00085035) main_mobtv_loading_pane_g1_ParamLimits

0x8fc3,	// (0x00085035) main_mobtv_loading_pane_g1

0x8fcf,	// (0x00085041) main_mobtv_loading_pane_g2_ParamLimits

0x8fcf,	// (0x00085041) main_mobtv_loading_pane_g2

0x8fdb,	// (0x0008504d) main_mobtv_loading_pane_g3_ParamLimits

0x8fdb,	// (0x0008504d) main_mobtv_loading_pane_g3

0x0002,

0xfc4b,	// (0x0008bcbd) main_mobtv_loading_pane_g_ParamLimits

0xfc4b,	// (0x0008bcbd) main_mobtv_loading_pane_g

0xe36a,	// (0x0008a3dc) main_mobtv_loading_pane_t1_ParamLimits

0xe36a,	// (0x0008a3dc) main_mobtv_loading_pane_t1

0xe382,	// (0x0008a3f4) main_mobtv_loading_pane_t2_ParamLimits

0xe382,	// (0x0008a3f4) main_mobtv_loading_pane_t2

0x0001,

0xfc52,	// (0x0008bcc4) main_mobtv_loading_pane_t_ParamLimits

0xfc52,	// (0x0008bcc4) main_mobtv_loading_pane_t

0x8fe9,	// (0x0008505b) wait_bar_pane_cp06_ParamLimits

0x8fe9,	// (0x0008505b) wait_bar_pane_cp06

0xe3a6,	// (0x0008a418) main_mobtv_programe_curr_pane_t1

0xe3b4,	// (0x0008a426) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc57,	// (0x0008bcc9) main_mobtv_programe_curr_pane_t

0xe3c2,	// (0x0008a434) main_mobtv_programe_next_pane_t1

0xe3d0,	// (0x0008a442) main_mobtv_programe_next_pane_t2

0xe3de,	// (0x0008a450) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5c,	// (0x0008bcce) main_mobtv_programe_next_pane_t

0xa165,	// (0x000861d7) bg_popup_mobtv_noti_window_pane

0xe3ec,	// (0x0008a45e) popup_mobtv_noti_window_g1

0xe3f4,	// (0x0008a466) popup_mobtv_noti_window_t1

0xe402,	// (0x0008a474) popup_mobtv_noti_window_t2

0x0001,

0xfc63,	// (0x0008bcd5) popup_mobtv_noti_window_t

0xcca2,	// (0x00088d14) bg_popup_mobtv_noti_window_pane_g1

0xa165,	// (0x000861d7) sc_clock_pane

0xa165,	// (0x000861d7) main_fs_bigclock_pane

0x86ad,	// (0x0008471f) blid2_tripm_pane_t4_ParamLimits

0x86ad,	// (0x0008471f) blid2_tripm_pane_t4

0x8ff5,	// (0x00085067) sc_clock_pane_g1_ParamLimits

0x8ff5,	// (0x00085067) sc_clock_pane_g1

0x9003,	// (0x00085075) sc_clock_pane_t1_ParamLimits

0x9003,	// (0x00085075) sc_clock_pane_t1

0x9018,	// (0x0008508a) sc_clock_pane_t2_ParamLimits

0x9018,	// (0x0008508a) sc_clock_pane_t2

0x902a,	// (0x0008509c) sc_clock_pane_t3_ParamLimits

0x902a,	// (0x0008509c) sc_clock_pane_t3

0x0004,

0xfc68,	// (0x0008bcda) sc_clock_pane_t_ParamLimits

0xfc68,	// (0x0008bcda) sc_clock_pane_t

0x98b4,	// (0x00085926) main_fs_bigclock_indicator_pane_ParamLimits

0x98b4,	// (0x00085926) main_fs_bigclock_indicator_pane

0x90b7,	// (0x00085129) main_fs_bigclock_pane_g1_ParamLimits

0x90b7,	// (0x00085129) main_fs_bigclock_pane_g1

0x98c0,	// (0x00085932) main_fs_bigclock_pane_t1_ParamLimits

0x98c0,	// (0x00085932) main_fs_bigclock_pane_t1

0x98d2,	// (0x00085944) main_fs_bigclock_pane_t2_ParamLimits

0x98d2,	// (0x00085944) main_fs_bigclock_pane_t2

0x98e6,	// (0x00085958) main_fs_bigclock_pane_t3_ParamLimits

0x98e6,	// (0x00085958) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0008bede) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0008bede) main_fs_bigclock_pane_t

0xec55,	// (0x0008acc7) main_fs_bigclock_indicator_pane_g1

0xe0d2,	// (0x0008a144) ncim_query_content_pane_g2_ParamLimits

0xe0d2,	// (0x0008a144) ncim_query_content_pane_g2

0x0001,

0xfbf5,	// (0x0008bc67) ncim_query_content_pane_g_ParamLimits

0xfbf5,	// (0x0008bc67) ncim_query_content_pane_g

0x903c,	// (0x000850ae) sc_clock_pane_t4_ParamLimits

0x903c,	// (0x000850ae) sc_clock_pane_t4

0xa89f,	// (0x00086911) main_radioblah_pane

0xd5d5,	// (0x00089647) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5d5,	// (0x00089647) cell_call4_button_pane_t1_copy1

0x8caf,	// (0x00084d21) main_ncimui_pane_t1_ParamLimits

0x8caf,	// (0x00084d21) main_ncimui_pane_t1

0x8cc9,	// (0x00084d3b) main_ncimui_pane_t2_ParamLimits

0x8cc9,	// (0x00084d3b) main_ncimui_pane_t2

0x0002,

0xfbee,	// (0x0008bc60) main_ncimui_pane_t_ParamLimits

0xfbee,	// (0x0008bc60) main_ncimui_pane_t

0xe54e,	// (0x0008a5c0) main_radioblah_anim_pane_ParamLimits

0xe54e,	// (0x0008a5c0) main_radioblah_anim_pane

0xe55f,	// (0x0008a5d1) main_radioblah_info_pane_ParamLimits

0xe55f,	// (0x0008a5d1) main_radioblah_info_pane

0xe573,	// (0x0008a5e5) main_radioblah_pane_t1_ParamLimits

0xe573,	// (0x0008a5e5) main_radioblah_pane_t1

0xe58f,	// (0x0008a601) main_radioblah_pane_t2_ParamLimits

0xe58f,	// (0x0008a601) main_radioblah_pane_t2

0x0003,

0xfc89,	// (0x0008bcfb) main_radioblah_pane_t_ParamLimits

0xfc89,	// (0x0008bcfb) main_radioblah_pane_t

0x9109,	// (0x0008517b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9109,	// (0x0008517b) main_radioblah_rocker_ctrl_pane

0xe5d7,	// (0x0008a649) main_radioblah_info_pane_t1_ParamLimits

0xe5d7,	// (0x0008a649) main_radioblah_info_pane_t1

0x9152,	// (0x000851c4) main_radioblah_info_pane_t2_ParamLimits

0x9152,	// (0x000851c4) main_radioblah_info_pane_t2

0x0003,

0xfc92,	// (0x0008bd04) main_radioblah_info_pane_t_ParamLimits

0xfc92,	// (0x0008bd04) main_radioblah_info_pane_t

0xcca2,	// (0x00088d14) main_radioblah_rocker_ctrl_pane_g1

0x9202,	// (0x00085274) main_radioblah_rocker_ctrl_pane_g2

0x920a,	// (0x0008527c) main_radioblah_rocker_ctrl_pane_g3

0x9212,	// (0x00085284) main_radioblah_rocker_ctrl_pane_g4

0x921a,	// (0x0008528c) main_radioblah_rocker_ctrl_pane_g5

0x9222,	// (0x00085294) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9b,	// (0x0008bd0d) main_radioblah_rocker_ctrl_pane_g

0x8c61,	// (0x00084cd3) main_cset_text2_pane_t1_copy1_ParamLimits

0x74a0,	// (0x00083512) cam4_image_uncrop_qvga_pane

0x75e5,	// (0x00083657) vid4_image_uncrop_qcif_pane

0x883f,	// (0x000848b1) cam6_image_uncrop_qvga_pane_ParamLimits

0x883f,	// (0x000848b1) cam6_image_uncrop_qvga_pane

0xddba,	// (0x00089e2c) vid6_image_uncrop_qcif_pane_ParamLimits

0xddba,	// (0x00089e2c) vid6_image_uncrop_qcif_pane

0xa165,	// (0x000861d7) bg_popup_preview_window_pane_cp03

0xe084,	// (0x0008a0f6) list_cset_text2_pane

0xe08c,	// (0x0008a0fe) main_cset6_text2_pane_g1

0xe094,	// (0x0008a106) main_cset6_text2_pane_t1

0x922a,	// (0x0008529c) list_cset_text2_pane_t1_ParamLimits

0x922a,	// (0x0008529c) list_cset_text2_pane_t1

0xa89f,	// (0x00086911) main_radioblah_pane_ParamLimits

0x8f9d,	// (0x0008500f) main_mobtv_info_pane_t3_ParamLimits

0x8f9d,	// (0x0008500f) main_mobtv_info_pane_t3

0x90f7,	// (0x00085169) main_radioblah_pane_g1

0x9122,	// (0x00085194) main_radioblah_info_pane_g1

0x91a7,	// (0x00085219) main_radioblah_info_pane_t3_ParamLimits

0x91a7,	// (0x00085219) main_radioblah_info_pane_t3

0x42bb,	// (0x0008032d) highlight_cell_cale_month_pane_ParamLimits

0x42bb,	// (0x0008032d) highlight_cell_cale_month_pane

0xa165,	// (0x000861d7) main_phob_fisheye_pane

0xcfae,	// (0x00089020) scroll_pane_cp0031_ParamLimits

0xcfae,	// (0x00089020) scroll_pane_cp0031

0xdecc,	// (0x00089f3e) wait_bar_pane_cp08_ParamLimits

0x8a12,	// (0x00084a84) cset_list_set_pane_copy1_ParamLimits

0xe611,	// (0x0008a683) highlight_cell_cale_month_pane_g1

0x9241,	// (0x000852b3) highlight_cell_cale_month_pane_t1

0xdb3d,	// (0x00089baf) list_gen_pane_cp01

0xd7a8,	// (0x0008981a) scroll_pane_01

0x924f,	// (0x000852c1) list_single_double_fisheye_pane

0x1566,	// (0x0007d5d8) list_double_fisheye_pane_g1_ParamLimits

0x1566,	// (0x0007d5d8) list_double_fisheye_pane_g1

0x1572,	// (0x0007d5e4) list_double_fisheye_pane_g2_ParamLimits

0x1572,	// (0x0007d5e4) list_double_fisheye_pane_g2

0x9258,	// (0x000852ca) list_double_fisheye_pane_g3_ParamLimits

0x9258,	// (0x000852ca) list_double_fisheye_pane_g3

0x0004,

0xfca8,	// (0x0008bd1a) list_double_fisheye_pane_g_ParamLimits

0xfca8,	// (0x0008bd1a) list_double_fisheye_pane_g

0x15a3,	// (0x0007d615) list_double_fisheye_pane_t1_ParamLimits

0x15a3,	// (0x0007d615) list_double_fisheye_pane_t1

0x15be,	// (0x0007d630) list_double_fisheye_pane_t2_ParamLimits

0x15be,	// (0x0007d630) list_double_fisheye_pane_t2

0x0001,

0xfcb3,	// (0x0008bd25) list_double_fisheye_pane_t_ParamLimits

0xfcb3,	// (0x0008bd25) list_double_fisheye_pane_t

0xa165,	// (0x000861d7) main_call5_pane

0x9062,	// (0x000850d4) sc_swipe_pane_ParamLimits

0x9062,	// (0x000850d4) sc_swipe_pane

0x9270,	// (0x000852e2) call5_image_pane_ParamLimits

0x9270,	// (0x000852e2) call5_image_pane

0x9282,	// (0x000852f4) call5_swipe_1_pane_ParamLimits

0x9282,	// (0x000852f4) call5_swipe_1_pane

0x928e,	// (0x00085300) call5_swipe_2_pane_ParamLimits

0x928e,	// (0x00085300) call5_swipe_2_pane

0x92aa,	// (0x0008531c) popup_call5_audio_first_window_ParamLimits

0x92aa,	// (0x0008531c) popup_call5_audio_first_window

0xced2,	// (0x00088f44) call5_swipe_1_pane_g1_ParamLimits

0xced2,	// (0x00088f44) call5_swipe_1_pane_g1

0xe619,	// (0x0008a68b) call5_swipe_1_pane_g2_ParamLimits

0xe619,	// (0x0008a68b) call5_swipe_1_pane_g2

0x0001,

0xfcb8,	// (0x0008bd2a) call5_swipe_1_pane_g_ParamLimits

0xfcb8,	// (0x0008bd2a) call5_swipe_1_pane_g

0xe625,	// (0x0008a697) call5_swipe_1_pane_t1_ParamLimits

0xe625,	// (0x0008a697) call5_swipe_1_pane_t1

0xced2,	// (0x00088f44) call5_swipe_2_pane_g1_ParamLimits

0xced2,	// (0x00088f44) call5_swipe_2_pane_g1

0xe63a,	// (0x0008a6ac) call5_swipe_2_pane_g2_ParamLimits

0xe63a,	// (0x0008a6ac) call5_swipe_2_pane_g2

0x0001,

0xfcbd,	// (0x0008bd2f) call5_swipe_2_pane_g_ParamLimits

0xfcbd,	// (0x0008bd2f) call5_swipe_2_pane_g

0xe646,	// (0x0008a6b8) call5_swipe_2_pane_t1_ParamLimits

0xe646,	// (0x0008a6b8) call5_swipe_2_pane_t1

0xe65b,	// (0x0008a6cd) sc_swipe_pane_g1_ParamLimits

0xe65b,	// (0x0008a6cd) sc_swipe_pane_g1

0xe668,	// (0x0008a6da) sc_swipe_pane_g2_ParamLimits

0xe668,	// (0x0008a6da) sc_swipe_pane_g2

0x0001,

0xfcc2,	// (0x0008bd34) sc_swipe_pane_g_ParamLimits

0xfcc2,	// (0x0008bd34) sc_swipe_pane_g

0xe674,	// (0x0008a6e6) sc_swipe_pane_t1_ParamLimits

0xe674,	// (0x0008a6e6) sc_swipe_pane_t1

0xa165,	// (0x000861d7) main_cmail_launcher_pane

0x92ba,	// (0x0008532c) aid_size_cell_cmail_l_ParamLimits

0x92ba,	// (0x0008532c) aid_size_cell_cmail_l

0x92ca,	// (0x0008533c) grid_cmail_l_pane_ParamLimits

0x92ca,	// (0x0008533c) grid_cmail_l_pane

0x92da,	// (0x0008534c) cell_cmail_l_pane_ParamLimits

0x92da,	// (0x0008534c) cell_cmail_l_pane

0x92f0,	// (0x00085362) cell_cmail_l_pane_g1_ParamLimits

0x92f0,	// (0x00085362) cell_cmail_l_pane_g1

0x92fc,	// (0x0008536e) cell_cmail_l_pane_t1_ParamLimits

0x92fc,	// (0x0008536e) cell_cmail_l_pane_t1

0xe689,	// (0x0008a6fb) cell_cmail_l_pane_t2_ParamLimits

0xe689,	// (0x0008a6fb) cell_cmail_l_pane_t2

0x0001,

0xfcc7,	// (0x0008bd39) cell_cmail_l_pane_t_ParamLimits

0xfcc7,	// (0x0008bd39) cell_cmail_l_pane_t

0xa89f,	// (0x00086911) grid_highlight_pane_cp018_ParamLimits

0xa89f,	// (0x00086911) grid_highlight_pane_cp018

0x20bf,	// (0x0007e131) main2_pane_ParamLimits

0x20bf,	// (0x0007e131) main2_pane

0xa9c2,	// (0x00086a34) popup_sp_fs_action_menu_bg_pane_g1

0xa9ca,	// (0x00086a3c) popup_sp_fs_action_menu_bg_pane_g2

0xa9d2,	// (0x00086a44) popup_sp_fs_action_menu_bg_pane_g3

0xa9da,	// (0x00086a4c) popup_sp_fs_action_menu_bg_pane_g4

0xa9e2,	// (0x00086a54) popup_sp_fs_action_menu_bg_pane_g5

0xa9ea,	// (0x00086a5c) popup_sp_fs_action_menu_bg_pane_g6

0xa9f2,	// (0x00086a64) popup_sp_fs_action_menu_bg_pane_g7

0xa9fa,	// (0x00086a6c) popup_sp_fs_action_menu_bg_pane_g8

0xaa02,	// (0x00086a74) popup_sp_fs_action_menu_bg_pane_g9

0xaa0a,	// (0x00086a7c) popup_sp_fs_action_menu_bg_pane_g10

0xaa0a,	// (0x00086a7c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0008b205) popup_sp_fs_action_menu_bg_pane_g

0x0df2,	// (0x0007ce64) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t3_g3_g1

0x3293,	// (0x0007f305) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x2_t3_g3_g2

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0008b2b5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0008b2b5) list_medium_line_x2_t3_g3_g

0x0e0a,	// (0x0007ce7c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e0a,	// (0x0007ce7c) list_medium_line_x2_t3_g3_t1

0x0e1f,	// (0x0007ce91) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0e1f,	// (0x0007ce91) list_medium_line_x2_t3_g3_t2

0x0e31,	// (0x0007cea3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0008b2bc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0008b2bc) list_medium_line_x2_t3_g3_t

0x0df2,	// (0x0007ce64) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t3_g2_g1

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0008b2c3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0008b2c3) list_medium_line_x2_t3_g2_g

0x0e46,	// (0x0007ceb8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0e46,	// (0x0007ceb8) list_medium_line_x2_t3_g2_t1

0x0e5c,	// (0x0007cece) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0e5c,	// (0x0007cece) list_medium_line_x2_t3_g2_t2

0x0e6e,	// (0x0007cee0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0e6e,	// (0x0007cee0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0008b2c8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0008b2c8) list_medium_line_x2_t3_g2_t

0x0df2,	// (0x0007ce64) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t4_g4_g1

0x329f,	// (0x0007f311) list_medium_line_x2_t4_g4_g2_ParamLimits

0x329f,	// (0x0007f311) list_medium_line_x2_t4_g4_g2

0x3293,	// (0x0007f305) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x2_t4_g4_g3

0x0e8c,	// (0x0007cefe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e8c,	// (0x0007cefe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0008b2cf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0008b2cf) list_medium_line_x2_t4_g4_g

0x0e98,	// (0x0007cf0a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e98,	// (0x0007cf0a) list_medium_line_x2_t4_g4_t1

0x0eb2,	// (0x0007cf24) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0eb2,	// (0x0007cf24) list_medium_line_x2_t4_g4_t2

0x0ec8,	// (0x0007cf3a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ec8,	// (0x0007cf3a) list_medium_line_x2_t4_g4_t3

0x0edd,	// (0x0007cf4f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0edd,	// (0x0007cf4f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0008b2d8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0008b2d8) list_medium_line_x2_t4_g4_t

0x0df2,	// (0x0007ce64) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t2_g4_g1

0x329f,	// (0x0007f311) list_medium_line_x2_t2_g4_g2_ParamLimits

0x329f,	// (0x0007f311) list_medium_line_x2_t2_g4_g2

0x3293,	// (0x0007f305) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x2_t2_g4_g3

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0008b33f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0008b33f) list_medium_line_x2_t2_g4_g

0x0eef,	// (0x0007cf61) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0eef,	// (0x0007cf61) list_medium_line_x2_t2_g4_t1

0x0e31,	// (0x0007cea3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0008b348) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0008b348) list_medium_line_x2_t2_g4_t

0x0df2,	// (0x0007ce64) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t2_g3_g1

0x3293,	// (0x0007f305) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x2_t2_g3_g2

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0008b2b5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0008b2b5) list_medium_line_x2_t2_g3_g

0x0f04,	// (0x0007cf76) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0f04,	// (0x0007cf76) list_medium_line_x2_t2_g3_t1

0x0e31,	// (0x0007cea3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0008b34d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0008b34d) list_medium_line_x2_t2_g3_t

0x4463,	// (0x000804d5) main_sp_fs_list_pane_ParamLimits

0x4463,	// (0x000804d5) main_sp_fs_list_pane

0x446f,	// (0x000804e1) sp_fs_scroll_pane_ParamLimits

0x446f,	// (0x000804e1) sp_fs_scroll_pane

0x0f19,	// (0x0007cf8b) list_medium_line_x2_t3_t1

0x0f29,	// (0x0007cf9b) list_medium_line_x2_t3_t2

0x0f37,	// (0x0007cfa9) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0008b398) list_medium_line_x2_t3_t

0x0f45,	// (0x0007cfb7) list_medium_line_x3_t4_t1

0x0f55,	// (0x0007cfc7) list_medium_line_x3_t4_t2

0x0f63,	// (0x0007cfd5) list_medium_line_x3_t4_t3

0x0f37,	// (0x0007cfa9) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0008b39f) list_medium_line_x3_t4_t

0x0f71,	// (0x0007cfe3) list_medium_line_x4_t5_t1

0x0f81,	// (0x0007cff3) list_medium_line_x4_t5_t2

0x0f63,	// (0x0007cfd5) list_medium_line_x4_t5_t3

0x0f8f,	// (0x0007d001) list_medium_line_x4_t5_t4

0x0f37,	// (0x0007cfa9) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0008b3a8) list_medium_line_x4_t5_t

0x0df2,	// (0x0007ce64) list_medium_line_t4_g4_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_t4_g4_g1

0x0f9d,	// (0x0007d00f) list_medium_line_t4_g4_g2_ParamLimits

0x0f9d,	// (0x0007d00f) list_medium_line_t4_g4_g2

0x0fa9,	// (0x0007d01b) list_medium_line_t4_g4_g3_ParamLimits

0x0fa9,	// (0x0007d01b) list_medium_line_t4_g4_g3

0x0dfe,	// (0x0007ce70) list_medium_line_t4_g4_g4_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0008b3b3) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0008b3b3) list_medium_line_t4_g4_g

0x0fb5,	// (0x0007d027) list_medium_line_t4_g4_t1_ParamLimits

0x0fb5,	// (0x0007d027) list_medium_line_t4_g4_t1

0x0fca,	// (0x0007d03c) list_medium_line_t4_g4_t2_ParamLimits

0x0fca,	// (0x0007d03c) list_medium_line_t4_g4_t2

0x0fe0,	// (0x0007d052) list_medium_line_t4_g4_t3_ParamLimits

0x0fe0,	// (0x0007d052) list_medium_line_t4_g4_t3

0x0e31,	// (0x0007cea3) list_medium_line_t4_g4_t4_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0008b3bc) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0008b3bc) list_medium_line_t4_g4_t

0x458e,	// (0x00080600) chi_dic_find_pane_g1

0x556b,	// (0x000815dd) main_tport_pane

0x1220,	// (0x0007d292) list_medium_line_plain_t1

0x122e,	// (0x0007d2a0) list_medium_line_t2_g2_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_t2_g2_g1

0x8018,	// (0x0008408a) list_medium_line_t2_g2_g2_ParamLimits

0x8018,	// (0x0008408a) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0008ba78) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0008ba78) list_medium_line_t2_g2_g

0x123a,	// (0x0007d2ac) list_medium_line_t2_g2_t1_ParamLimits

0x123a,	// (0x0007d2ac) list_medium_line_t2_g2_t1

0x1251,	// (0x0007d2c3) list_medium_line_t2_g2_t2_ParamLimits

0x1251,	// (0x0007d2c3) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0008ba7d) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0008ba7d) list_medium_line_t2_g2_t

0x1470,	// (0x0007d4e2) aid_sp_fs_list_icon_a_sm

0x84ff,	// (0x00084571) aid_sp_fs_list_icon_d

0xb99e,	// (0x00087a10) aid_sp_fs_text_primary

0xab6e,	// (0x00086be0) aid_sp_fs_text_secondary

0x8507,	// (0x00084579) list_medium_line

0x8507,	// (0x00084579) list_medium_line_g2

0x8507,	// (0x00084579) list_medium_line_g3

0x8507,	// (0x00084579) list_medium_line_plain

0x8507,	// (0x00084579) list_medium_line_plain_t2

0x8507,	// (0x00084579) list_medium_line_plain_t3

0x8507,	// (0x00084579) list_medium_line_right_icon

0x8507,	// (0x00084579) list_medium_line_right_iconx2

0x8507,	// (0x00084579) list_medium_line_t2

0x8507,	// (0x00084579) list_medium_line_t2_g2

0x8507,	// (0x00084579) list_medium_line_t2_g3

0x8507,	// (0x00084579) list_medium_line_t2_right_icon

0x8507,	// (0x00084579) list_medium_line_t2_right_iconx2

0x8507,	// (0x00084579) list_medium_line_t3

0x8507,	// (0x00084579) list_medium_line_t3_g2

0x8507,	// (0x00084579) list_medium_line_t3_g3

0x8507,	// (0x00084579) list_medium_line_t3_right_iconx2

0x8510,	// (0x00084582) list_medium_line_t4_g4

0x8519,	// (0x0008458b) list_medium_line_x2

0x8519,	// (0x0008458b) list_medium_line_x2_t2_g2

0x8519,	// (0x0008458b) list_medium_line_x2_t2_g3

0x8519,	// (0x0008458b) list_medium_line_x2_t2_g4

0x8519,	// (0x0008458b) list_medium_line_x2_t3

0x8519,	// (0x0008458b) list_medium_line_x2_t3_g2

0x8519,	// (0x0008458b) list_medium_line_x2_t3_g3

0x8519,	// (0x0008458b) list_medium_line_x2_t3_g4

0x8519,	// (0x0008458b) list_medium_line_x2_t4_g2

0x8519,	// (0x0008458b) list_medium_line_x2_t4_g4

0x8522,	// (0x00084594) list_medium_line_x3

0x8522,	// (0x00084594) list_medium_line_x3_t4

0x8522,	// (0x00084594) list_medium_line_x3_t4_g4

0x8510,	// (0x00084582) list_medium_line_x4_t4

0x8510,	// (0x00084582) list_medium_line_x4_t4_g7

0x8510,	// (0x00084582) list_medium_line_x4_t5

0x1478,	// (0x0007d4ea) list_single_fs_dyc_pane_ParamLimits

0x1478,	// (0x0007d4ea) list_single_fs_dyc_pane

0x0df2,	// (0x0007ce64) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x4_t4_g7_g1

0x14b0,	// (0x0007d522) list_medium_line_x4_t4_g7_g2_ParamLimits

0x14b0,	// (0x0007d522) list_medium_line_x4_t4_g7_g2

0x8c46,	// (0x00084cb8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8c46,	// (0x00084cb8) list_medium_line_x4_t4_g7_g3

0x8c55,	// (0x00084cc7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8c55,	// (0x00084cc7) list_medium_line_x4_t4_g7_g4

0x14bc,	// (0x0007d52e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x14bc,	// (0x0007d52e) list_medium_line_x4_t4_g7_g5

0x14cb,	// (0x0007d53d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x14cb,	// (0x0007d53d) list_medium_line_x4_t4_g7_g6

0x14da,	// (0x0007d54c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x14da,	// (0x0007d54c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcf,	// (0x0008bc41) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcf,	// (0x0008bc41) list_medium_line_x4_t4_g7_g

0x14e6,	// (0x0007d558) list_medium_line_x4_t4_g7_t1_ParamLimits

0x14e6,	// (0x0007d558) list_medium_line_x4_t4_g7_t1

0x14fb,	// (0x0007d56d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x14fb,	// (0x0007d56d) list_medium_line_x4_t4_g7_t2

0x1510,	// (0x0007d582) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1510,	// (0x0007d582) list_medium_line_x4_t4_g7_t3

0x1525,	// (0x0007d597) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1525,	// (0x0007d597) list_medium_line_x4_t4_g7_t4

0x1537,	// (0x0007d5a9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1537,	// (0x0007d5a9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbde,	// (0x0008bc50) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbde,	// (0x0008bc50) list_medium_line_x4_t4_g7_t

0x1549,	// (0x0007d5bb) list_single_dyc_row_pane_ParamLimits

0x1549,	// (0x0007d5bb) list_single_dyc_row_pane

0x9264,	// (0x000852d6) call5_gesture_pane_ParamLimits

0x9264,	// (0x000852d6) call5_gesture_pane

0x929a,	// (0x0008530c) call5_windows_pane_ParamLimits

0x929a,	// (0x0008530c) call5_windows_pane

0x9312,	// (0x00085384) call5_swipe_1_pane_cp_ParamLimits

0x9312,	// (0x00085384) call5_swipe_1_pane_cp

0x931e,	// (0x00085390) call5_swipe_2_pane_cp_ParamLimits

0x931e,	// (0x00085390) call5_swipe_2_pane_cp

0xb447,	// (0x000874b9) call5_image_pane_cp

0x932a,	// (0x0008539c) popup_call5_audio_first_window_cp_ParamLimits

0x932a,	// (0x0008539c) popup_call5_audio_first_window_cp

0xe65b,	// (0x0008a6cd) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65b,	// (0x0008a6cd) call5_swipe_1_pane_g1_cp

0xe69b,	// (0x0008a70d) call5_swipe_1_pane_g2_cp

0xe674,	// (0x0008a6e6) call5_swipe_1_pane_t1_cp_ParamLimits

0xe674,	// (0x0008a6e6) call5_swipe_1_pane_t1_cp

0xe65b,	// (0x0008a6cd) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65b,	// (0x0008a6cd) call5_swipe_2_pane_g1_cp

0xe6a3,	// (0x0008a715) call5_swipe_2_pane_g2_cp

0xe6ab,	// (0x0008a71d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ab,	// (0x0008a71d) call5_swipe_2_pane_t1_cp

0xa89f,	// (0x00086911) main_sp_fs_email_pane

0xe6c0,	// (0x0008a732) main_sp_fs_listscroll_pane_te

0x15e0,	// (0x0007d652) popup_sp_fs_action_menu_pane_ParamLimits

0x15e0,	// (0x0007d652) popup_sp_fs_action_menu_pane

0xcca2,	// (0x00088d14) bg_sp_fs_ctrlbar_pane_g1

0xe6c9,	// (0x0008a73b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d2,	// (0x0008a744) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6db,	// (0x0008a74d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcca2,	// (0x00088d14) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccc,	// (0x0008bd3e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca79,	// (0x00088aeb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca79,	// (0x00088aeb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e4,	// (0x0008a756) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e4,	// (0x0008a756) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f0,	// (0x0008a762) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6f0,	// (0x0008a762) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd5,	// (0x0008bd47) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd5,	// (0x0008bd47) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fc,	// (0x0008a76e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fc,	// (0x0008a76e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9338,	// (0x000853aa) list_medium_line_t2_right_icon_g1

0x1626,	// (0x0007d698) list_medium_line_t2_right_icon_t1

0x1636,	// (0x0007d6a8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcda,	// (0x0008bd4c) list_medium_line_t2_right_icon_t

0xc849,	// (0x000888bb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc849,	// (0x000888bb) bg_sp_fs_ctrlbar_pane

0x9399,	// (0x0008540b) main_sp_fs_ctrlbar_button_pane_cp01

0x93a1,	// (0x00085413) main_sp_fs_ctrlbar_ddmenu_pane

0xe74e,	// (0x0008a7c0) main_sp_fs_ctrlbar_pane_g1

0xe75a,	// (0x0008a7cc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcdf,	// (0x0008bd51) main_sp_fs_ctrlbar_pane_g

0xe766,	// (0x0008a7d8) main_sp_fs_ctrlbar_pane_t1

0x1644,	// (0x0007d6b6) main_sp_fs_ctrlbar_pane

0x165e,	// (0x0007d6d0) main_sp_fs_listscroll_pane_te_cp01

0x166f,	// (0x0007d6e1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x166f,	// (0x0007d6e1) popup_sp_fs_action_menu_pane_cp01

0xa89f,	// (0x00086911) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa89f,	// (0x00086911) bg_sp_fs_highlight_list_pane_cp01

0x169d,	// (0x0007d70f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x169d,	// (0x0007d70f) sp_fs_action_menu_list_gene_pane_g1

0xe796,	// (0x0008a808) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe796,	// (0x0008a808) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce9,	// (0x0008bd5b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce9,	// (0x0008bd5b) sp_fs_action_menu_list_gene_pane_g

0x16ac,	// (0x0007d71e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x16ac,	// (0x0007d71e) sp_fs_action_menu_list_gene_pane_t1

0x16c4,	// (0x0007d736) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16c4,	// (0x0007d736) sp_fs_action_menu_list_gene_pane

0xe7a3,	// (0x0008a815) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a3,	// (0x0008a815) popup_sp_fs_action_menu_bg_pane

0x16e7,	// (0x0007d759) sp_fs_action_menu_list_pane_ParamLimits

0x16e7,	// (0x0007d759) sp_fs_action_menu_list_pane

0xe7b1,	// (0x0008a823) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b1,	// (0x0008a823) sp_fs_scroll_pane_cp01

0x170b,	// (0x0007d77d) list_medium_line_plain_t2_t1

0x171b,	// (0x0007d78d) list_medium_line_plain_t2_t2

0x0001,

0xfcee,	// (0x0008bd60) list_medium_line_plain_t2_t

0x1729,	// (0x0007d79b) list_medium_line_plain_t3_t1

0x1739,	// (0x0007d7ab) list_medium_line_plain_t3_t2

0x1747,	// (0x0007d7b9) list_medium_line_plain_t3_t3

0x0002,

0xfcf3,	// (0x0008bd65) list_medium_line_plain_t3_t

0x0df2,	// (0x0007ce64) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t2_g2_g1

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0008b2c3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0008b2c3) list_medium_line_x2_t2_g2_g

0x0fb5,	// (0x0007d027) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0fb5,	// (0x0007d027) list_medium_line_x2_t2_g2_t1

0x0e31,	// (0x0007cea3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfa,	// (0x0008bd6c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfa,	// (0x0008bd6c) list_medium_line_x2_t2_g2_t

0x0df2,	// (0x0007ce64) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t4_g2_g1

0x1755,	// (0x0007d7c7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1755,	// (0x0007d7c7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcff,	// (0x0008bd71) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcff,	// (0x0008bd71) list_medium_line_x2_t4_g2_g

0x1767,	// (0x0007d7d9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1767,	// (0x0007d7d9) list_medium_line_x2_t4_g2_t1

0x1781,	// (0x0007d7f3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1781,	// (0x0007d7f3) list_medium_line_x2_t4_g2_t2

0x1797,	// (0x0007d809) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1797,	// (0x0007d809) list_medium_line_x2_t4_g2_t3

0x0e31,	// (0x0007cea3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd04,	// (0x0008bd76) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd04,	// (0x0008bd76) list_medium_line_x2_t4_g2_t

0x93ab,	// (0x0008541d) list_medium_line_t3_right_iconx2_g1

0x9338,	// (0x000853aa) list_medium_line_t3_right_iconx2_g2

0x17ac,	// (0x0007d81e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0d,	// (0x0008bd7f) list_medium_line_t3_right_iconx2_g

0x17b4,	// (0x0007d826) list_medium_line_t3_right_iconx2_t1

0x17c4,	// (0x0007d836) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd14,	// (0x0008bd86) list_medium_line_t3_right_iconx2_t

0x0df2,	// (0x0007ce64) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x3_t4_g4_g1

0x3293,	// (0x0007f305) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x3_t4_g4_g2

0x0f9d,	// (0x0007d00f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f9d,	// (0x0007d00f) list_medium_line_x3_t4_g4_g3

0x93b3,	// (0x00085425) list_medium_line_x3_t4_g4_g4_ParamLimits

0x93b3,	// (0x00085425) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd19,	// (0x0008bd8b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd19,	// (0x0008bd8b) list_medium_line_x3_t4_g4_g

0x17d2,	// (0x0007d844) list_medium_line_x3_t4_g4_t1_ParamLimits

0x17d2,	// (0x0007d844) list_medium_line_x3_t4_g4_t1

0x17e9,	// (0x0007d85b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x17e9,	// (0x0007d85b) list_medium_line_x3_t4_g4_t2

0x17fe,	// (0x0007d870) list_medium_line_x3_t4_g4_t3_ParamLimits

0x17fe,	// (0x0007d870) list_medium_line_x3_t4_g4_t3

0x1813,	// (0x0007d885) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1813,	// (0x0007d885) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd22,	// (0x0008bd94) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd22,	// (0x0008bd94) list_medium_line_x3_t4_g4_t

0x1830,	// (0x0007d8a2) list_single_dyc_row_text_pane_t1_ParamLimits

0x1830,	// (0x0007d8a2) list_single_dyc_row_text_pane_t1

0x1873,	// (0x0007d8e5) list_single_dyc_row_text_pane_t2_ParamLimits

0x1873,	// (0x0007d8e5) list_single_dyc_row_text_pane_t2

0x18cd,	// (0x0007d93f) list_single_dyc_row_text_pane_t3_ParamLimits

0x18cd,	// (0x0007d93f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2b,	// (0x0008bd9d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2b,	// (0x0008bd9d) list_single_dyc_row_text_pane_t

0x18df,	// (0x0007d951) list_single_dyc_row_pane_g1_ParamLimits

0x18df,	// (0x0007d951) list_single_dyc_row_pane_g1

0x18eb,	// (0x0007d95d) list_single_dyc_row_pane_g2_ParamLimits

0x18eb,	// (0x0007d95d) list_single_dyc_row_pane_g2

0x18f7,	// (0x0007d969) list_single_dyc_row_pane_g3_ParamLimits

0x18f7,	// (0x0007d969) list_single_dyc_row_pane_g3

0x1903,	// (0x0007d975) list_single_dyc_row_pane_g4_ParamLimits

0x1903,	// (0x0007d975) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0008bda4) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0008bda4) list_single_dyc_row_pane_g

0x190f,	// (0x0007d981) list_single_dyc_row_text_pane_ParamLimits

0x190f,	// (0x0007d981) list_single_dyc_row_text_pane

0xa165,	// (0x000861d7) bg_sp_fs_scroll_pane

0xe7d7,	// (0x0008a849) thumb_sp_fs_scroll_pane

0x122e,	// (0x0007d2a0) list_medium_line_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_g1

0x192e,	// (0x0007d9a0) list_medium_line_t1_ParamLimits

0x192e,	// (0x0007d9a0) list_medium_line_t1

0x0df2,	// (0x0007ce64) list_medium_line_x2_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_g1

0x3293,	// (0x0007f305) list_medium_line_x2_g2_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0008bdad) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0008bdad) list_medium_line_x2_g

0x1943,	// (0x0007d9b5) list_medium_line_x2_t1_ParamLimits

0x1943,	// (0x0007d9b5) list_medium_line_x2_t1

0x0df2,	// (0x0007ce64) list_medium_line_x3_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x3_g1

0x3293,	// (0x0007f305) list_medium_line_x3_g2_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0008bdad) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0008bdad) list_medium_line_x3_g

0x1943,	// (0x0007d9b5) list_medium_line_x3_t1_ParamLimits

0x1943,	// (0x0007d9b5) list_medium_line_x3_t1

0xe7e0,	// (0x0008a852) thumb_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0008a85b) thumb_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0008a864) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0008bdb2) thumb_sp_fs_scroll_pane_g

0xe7e0,	// (0x0008a852) bg_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0008a85b) bg_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0008a864) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0008bdb2) bg_sp_fs_scroll_pane_g

0x0df2,	// (0x0007ce64) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0df2,	// (0x0007ce64) list_medium_line_x2_t3_g4_g1

0x329f,	// (0x0007f311) list_medium_line_x2_t3_g4_g2_ParamLimits

0x329f,	// (0x0007f311) list_medium_line_x2_t3_g4_g2

0x3293,	// (0x0007f305) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3293,	// (0x0007f305) list_medium_line_x2_t3_g4_g3

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0dfe,	// (0x0007ce70) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0008b33f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0008b33f) list_medium_line_x2_t3_g4_g

0x1959,	// (0x0007d9cb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1959,	// (0x0007d9cb) list_medium_line_x2_t3_g4_t1

0x196f,	// (0x0007d9e1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x196f,	// (0x0007d9e1) list_medium_line_x2_t3_g4_t2

0x0e31,	// (0x0007cea3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0e31,	// (0x0007cea3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0008bdb9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0008bdb9) list_medium_line_x2_t3_g4_t

0x122e,	// (0x0007d2a0) list_medium_line_g2_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_g2_g1

0x8018,	// (0x0008408a) list_medium_line_g2_g2_ParamLimits

0x8018,	// (0x0008408a) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0008ba78) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0008ba78) list_medium_line_g2_g

0x1988,	// (0x0007d9fa) list_medium_line_g2_t1_ParamLimits

0x1988,	// (0x0007d9fa) list_medium_line_g2_t1

0x122e,	// (0x0007d2a0) list_medium_line_t3_g2_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_t3_g2_g1

0x8018,	// (0x0008408a) list_medium_line_t3_g2_g2_ParamLimits

0x8018,	// (0x0008408a) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0008ba78) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0008ba78) list_medium_line_t3_g2_g

0x199d,	// (0x0007da0f) list_medium_line_t3_g2_t1_ParamLimits

0x199d,	// (0x0007da0f) list_medium_line_t3_g2_t1

0x19b7,	// (0x0007da29) list_medium_line_t3_g2_t2_ParamLimits

0x19b7,	// (0x0007da29) list_medium_line_t3_g2_t2

0x19cd,	// (0x0007da3f) list_medium_line_t3_g2_t3_ParamLimits

0x19cd,	// (0x0007da3f) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0008bdc0) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0008bdc0) list_medium_line_t3_g2_t

0x9338,	// (0x000853aa) list_medium_line_right_icon_g1

0x19e4,	// (0x0007da56) list_medium_line_right_icon_t1

0x122e,	// (0x0007d2a0) list_medium_line_t2_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_t2_g1

0x19f2,	// (0x0007da64) list_medium_line_t2_t1_ParamLimits

0x19f2,	// (0x0007da64) list_medium_line_t2_t1

0x1a0c,	// (0x0007da7e) list_medium_line_t2_t2_ParamLimits

0x1a0c,	// (0x0007da7e) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0008bdc7) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0008bdc7) list_medium_line_t2_t

0x122e,	// (0x0007d2a0) list_medium_line_t3_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_t3_g1

0x1a21,	// (0x0007da93) list_medium_line_t3_t1_ParamLimits

0x1a21,	// (0x0007da93) list_medium_line_t3_t1

0x1a38,	// (0x0007daaa) list_medium_line_t3_t2_ParamLimits

0x1a38,	// (0x0007daaa) list_medium_line_t3_t2

0x1a4d,	// (0x0007dabf) list_medium_line_t3_t3_ParamLimits

0x1a4d,	// (0x0007dabf) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0008bdcc) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0008bdcc) list_medium_line_t3_t

0x122e,	// (0x0007d2a0) list_medium_line_g3_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_g3_g1

0x93bf,	// (0x00085431) list_medium_line_g3_g2_ParamLimits

0x93bf,	// (0x00085431) list_medium_line_g3_g2

0x8018,	// (0x0008408a) list_medium_line_g3_g3_ParamLimits

0x8018,	// (0x0008408a) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0008bdd3) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0008bdd3) list_medium_line_g3_g

0x1a5f,	// (0x0007dad1) list_medium_line_g3_t1_ParamLimits

0x1a5f,	// (0x0007dad1) list_medium_line_g3_t1

0x122e,	// (0x0007d2a0) list_medium_line_t2_g3_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_t2_g3_g1

0x93bf,	// (0x00085431) list_medium_line_t2_g3_g2_ParamLimits

0x93bf,	// (0x00085431) list_medium_line_t2_g3_g2

0x8018,	// (0x0008408a) list_medium_line_t2_g3_g3_ParamLimits

0x8018,	// (0x0008408a) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0008bdd3) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0008bdd3) list_medium_line_t2_g3_g

0x1a74,	// (0x0007dae6) list_medium_line_t2_g3_t1_ParamLimits

0x1a74,	// (0x0007dae6) list_medium_line_t2_g3_t1

0x1a8b,	// (0x0007dafd) list_medium_line_t2_g3_t2_ParamLimits

0x1a8b,	// (0x0007dafd) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0008bdda) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0008bdda) list_medium_line_t2_g3_t

0x122e,	// (0x0007d2a0) list_medium_line_t3_g3_g1_ParamLimits

0x122e,	// (0x0007d2a0) list_medium_line_t3_g3_g1

0x93bf,	// (0x00085431) list_medium_line_t3_g3_g2_ParamLimits

0x93bf,	// (0x00085431) list_medium_line_t3_g3_g2

0x8018,	// (0x0008408a) list_medium_line_t3_g3_g3_ParamLimits

0x8018,	// (0x0008408a) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0008bdd3) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0008bdd3) list_medium_line_t3_g3_g

0x1aa0,	// (0x0007db12) list_medium_line_t3_g3_t1_ParamLimits

0x1aa0,	// (0x0007db12) list_medium_line_t3_g3_t1

0x1ab4,	// (0x0007db26) list_medium_line_t3_g3_t2_ParamLimits

0x1ab4,	// (0x0007db26) list_medium_line_t3_g3_t2

0x1ac6,	// (0x0007db38) list_medium_line_t3_g3_t3_ParamLimits

0x1ac6,	// (0x0007db38) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0008bddf) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0008bddf) list_medium_line_t3_g3_t

0x93ab,	// (0x0008541d) list_medium_line_right_iconx2_g1

0x9338,	// (0x000853aa) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0008bde6) list_medium_line_right_iconx2_g

0x93cb,	// (0x0008543d) list_medium_line_right_iconx2_t1

0x93ab,	// (0x0008541d) list_medium_line_t2_right_iconx2_g1

0x9338,	// (0x000853aa) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0008bde6) list_medium_line_t2_right_iconx2_g

0x1ada,	// (0x0007db4c) list_medium_line_t2_right_iconx2_t1

0x1aea,	// (0x0007db5c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0008bdeb) list_medium_line_t2_right_iconx2_t

0x1af8,	// (0x0007db6a) list_medium_line_x4_t4_t1

0x1b06,	// (0x0007db78) list_medium_line_x4_t4_t2

0x1b16,	// (0x0007db88) list_medium_line_x4_t4_t3

0x1b26,	// (0x0007db98) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0008bdf0) list_medium_line_x4_t4_t

0x9403,	// (0x00085475) tport_appsw_pane_ParamLimits

0x9403,	// (0x00085475) tport_appsw_pane

0x9411,	// (0x00085483) tport_contact_pane_ParamLimits

0x9411,	// (0x00085483) tport_contact_pane

0x9421,	// (0x00085493) tport_listscroll_pane_ParamLimits

0x9421,	// (0x00085493) tport_listscroll_pane

0x9431,	// (0x000854a3) cell_tport_appsw_pane_ParamLimits

0x9431,	// (0x000854a3) cell_tport_appsw_pane

0xcf37,	// (0x00088fa9) tport_appsw_pane_g1_ParamLimits

0xcf37,	// (0x00088fa9) tport_appsw_pane_g1

0xe7fb,	// (0x0008a86d) tport_contact_pane_g1

0xe804,	// (0x0008a876) tport_contact_pane_t1

0xe812,	// (0x0008a884) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0008bdf9) tport_contact_pane_t

0xe820,	// (0x0008a892) list_tport_pane

0xe829,	// (0x0008a89b) scroll_pane_cp_030

0x9466,	// (0x000854d8) cell_tport_appsw_pane_g1

0x9476,	// (0x000854e8) cell_tport_appsw_pane_t1

0xa165,	// (0x000861d7) grid_highlight_pane_cp019

0x9484,	// (0x000854f6) list_tport_double_graphic_pane_ParamLimits

0x9484,	// (0x000854f6) list_tport_double_graphic_pane

0xa89f,	// (0x00086911) list_highlight_pane_cp023_ParamLimits

0xa89f,	// (0x00086911) list_highlight_pane_cp023

0x9491,	// (0x00085503) list_tport_double_graphic_pane_g1_ParamLimits

0x9491,	// (0x00085503) list_tport_double_graphic_pane_g1

0x949e,	// (0x00085510) list_tport_double_graphic_pane_t1_ParamLimits

0x949e,	// (0x00085510) list_tport_double_graphic_pane_t1

0x94b3,	// (0x00085525) list_tport_double_graphic_pane_t2_ParamLimits

0x94b3,	// (0x00085525) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0008be05) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0008be05) list_tport_double_graphic_pane_t

0xa165,	// (0x000861d7) main_cale_note_pane

0x7846,	// (0x000838b8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7846,	// (0x000838b8) cell_vitu2_function_top_wide_pane_cp01

0x8fb1,	// (0x00085023) wait_bar_pane_cp05_ParamLimits

0xa89f,	// (0x00086911) listscroll_cmail_pane

0xe83a,	// (0x0008a8ac) list_cmail_pane

0x94cf,	// (0x00085541) list_cmail_body_pane

0x94e7,	// (0x00085559) list_single_cmail_header_caption_pane

0x9507,	// (0x00085579) list_single_cmail_header_detail_pane_ParamLimits

0x9507,	// (0x00085579) list_single_cmail_header_detail_pane

0x9539,	// (0x000855ab) list_single_cmail_header_caption_pane_t1

0x1b36,	// (0x0007dba8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1b36,	// (0x0007dba8) list_single_cmail_header_detail_pane_g1

0x9554,	// (0x000855c6) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9554,	// (0x000855c6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0008be0a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0008be0a) list_single_cmail_header_detail_pane_g

0x1b4e,	// (0x0007dbc0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1b4e,	// (0x0007dbc0) list_single_cmail_header_detail_pane_t1

0x1bc0,	// (0x0007dc32) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1bc0,	// (0x0007dc32) list_single_cmail_header_editor_pane_bg

0xe303,	// (0x0008a375) list_cmail_body_pane_g1

0xe85e,	// (0x0008a8d0) list_cmail_body_pane_t1

0xd68a,	// (0x000896fc) list_single_cmail_header_editor_pane_bg_g1

0xad53,	// (0x00086dc5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd69a,	// (0x0008970c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd692,	// (0x00089704) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b4,	// (0x00089926) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6ba,	// (0x0008972c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6aa,	// (0x0008971c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b2,	// (0x00089724) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad33,	// (0x00086da5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9560,	// (0x000855d2) calenote_gesture_pane_ParamLimits

0x9560,	// (0x000855d2) calenote_gesture_pane

0x957a,	// (0x000855ec) calenote_window_pane_ParamLimits

0x957a,	// (0x000855ec) calenote_window_pane

0xe86c,	// (0x0008a8de) popup_note_window_cp01

0x9592,	// (0x00085604) calenote_swipe_1_pane_ParamLimits

0x9592,	// (0x00085604) calenote_swipe_1_pane

0x931e,	// (0x00085390) calenote_swipe_2_pane_ParamLimits

0x931e,	// (0x00085390) calenote_swipe_2_pane

0xe65b,	// (0x0008a6cd) calenote_swipe_1_pane_g1_ParamLimits

0xe65b,	// (0x0008a6cd) calenote_swipe_1_pane_g1

0xe668,	// (0x0008a6da) calenote_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x0008a6da) calenote_swipe_1_pane_g2

0x0001,

0xfcc2,	// (0x0008bd34) calenote_swipe_1_pane_g_ParamLimits

0xfcc2,	// (0x0008bd34) calenote_swipe_1_pane_g

0xe87e,	// (0x0008a8f0) calenote_swipe_1_pane_t1_ParamLimits

0xe87e,	// (0x0008a8f0) calenote_swipe_1_pane_t1

0xe65b,	// (0x0008a6cd) calenote_swipe_2_pane_g1_ParamLimits

0xe65b,	// (0x0008a6cd) calenote_swipe_2_pane_g1

0xe89d,	// (0x0008a90f) calenote_swipe_2_pane_g2_ParamLimits

0xe89d,	// (0x0008a90f) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0008be16) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0008be16) calenote_swipe_2_pane_g

0xe8a9,	// (0x0008a91b) calenote_swipe_2_pane_t1_ParamLimits

0xe8a9,	// (0x0008a91b) calenote_swipe_2_pane_t1

0xa165,	// (0x000861d7) main_mup_navstr_pane

0x6587,	// (0x000825f9) main_mup3_pane_t7_ParamLimits

0x6587,	// (0x000825f9) main_mup3_pane_t7

0x6f8a,	// (0x00082ffc) main_mp4_pane_g6_ParamLimits

0x6f8a,	// (0x00082ffc) main_mp4_pane_g6

0x72fa,	// (0x0008336c) main_image3_pane_t4_ParamLimits

0x72fa,	// (0x0008336c) main_image3_pane_t4

0x95a5,	// (0x00085617) popup_navstr_preview_pane_ParamLimits

0x95a5,	// (0x00085617) popup_navstr_preview_pane

0x95b1,	// (0x00085623) scroll_navstr_pane_ParamLimits

0x95b1,	// (0x00085623) scroll_navstr_pane

0xa165,	// (0x000861d7) bg_popup_preview_window_pane_cp04

0xe8d0,	// (0x0008a942) popup_navstr_preview_pane_t1

0x95bd,	// (0x0008562f) scroll_navstr_pane_g1_ParamLimits

0x95bd,	// (0x0008562f) scroll_navstr_pane_g1

0x95ca,	// (0x0008563c) scroll_navstr_pane_t1_ParamLimits

0x95ca,	// (0x0008563c) scroll_navstr_pane_t1

0xe875,	// (0x0008a8e7) bg_button_pane_cp014

0xe875,	// (0x0008a8e7) bg_button_pane_cp030

0x1586,	// (0x0007d5f8) list_double_fisheye_pane_g4_ParamLimits

0x1586,	// (0x0007d5f8) list_double_fisheye_pane_g4

0x1592,	// (0x0007d604) list_double_fisheye_pane_g5_ParamLimits

0x1592,	// (0x0007d604) list_double_fisheye_pane_g5

0xe842,	// (0x0008a8b4) sp_fs_scroll_pane_cp03

0xe74e,	// (0x0008a7c0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75a,	// (0x0008a7cc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdf,	// (0x0008bd51) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe766,	// (0x0008a7d8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x94c5,	// (0x00085537) sp_fs_scroll_pane_cp02

0xaa2d,	// (0x00086a9f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa2d,	// (0x00086a9f) popup_sp_fs_calendar_preview_list_single_pane

0xa165,	// (0x000861d7) main_cam6_pano_pane

0xa89f,	// (0x00086911) main_mup3_pane_ParamLimits

0xa165,	// (0x000861d7) main_phacti_pane

0x8e84,	// (0x00084ef6) bg_button_pane_cp11

0x8e9c,	// (0x00084f0e) main_mobtv_info_pane_g2_ParamLimits

0x8e9c,	// (0x00084f0e) main_mobtv_info_pane_g2

0x0001,

0xfc3f,	// (0x0008bcb1) main_mobtv_info_pane_g_ParamLimits

0xfc3f,	// (0x0008bcb1) main_mobtv_info_pane_g

0x904e,	// (0x000850c0) sc_clock_pane_t5_ParamLimits

0x904e,	// (0x000850c0) sc_clock_pane_t5

0x90f7,	// (0x00085169) main_radioblah_pane_g1_ParamLimits

0xe5a7,	// (0x0008a619) main_radioblah_pane_t3_ParamLimits

0xe5a7,	// (0x0008a619) main_radioblah_pane_t3

0xe5bf,	// (0x0008a631) main_radioblah_pane_t4_ParamLimits

0xe5bf,	// (0x0008a631) main_radioblah_pane_t4

0x9115,	// (0x00085187) main_radioblah_text_pane_ParamLimits

0x9115,	// (0x00085187) main_radioblah_text_pane

0x9122,	// (0x00085194) main_radioblah_info_pane_g1_ParamLimits

0x91bb,	// (0x0008522d) main_radioblah_info_pane_t4_ParamLimits

0x91bb,	// (0x0008522d) main_radioblah_info_pane_t4

0xa89f,	// (0x00086911) main_sp_fs_calendar_pane

0x95dc,	// (0x0008564e) main_phacti_pane_g1

0x95e4,	// (0x00085656) phacti_note_pane_ParamLimits

0x95e4,	// (0x00085656) phacti_note_pane

0xe8e7,	// (0x0008a959) phacti_term_pane_ParamLimits

0xe8e7,	// (0x0008a959) phacti_term_pane

0xe8fc,	// (0x0008a96e) phacti_note_pane_t1_ParamLimits

0xe8fc,	// (0x0008a96e) phacti_note_pane_t1

0x1bd7,	// (0x0007dc49) phacti_term_pane_g1

0x1bdf,	// (0x0007dc51) phacti_term_pane_t1_ParamLimits

0x1bdf,	// (0x0007dc51) phacti_term_pane_t1

0xe913,	// (0x0008a985) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91b,	// (0x0008a98d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0008be20) popup_sp_fs_calendar_preview_list_single_pane_g

0xe923,	// (0x0008a995) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe923,	// (0x0008a995) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe939,	// (0x0008a9ab) aid_popup_sp_fs_bg_corner_pane

0xcca2,	// (0x00088d14) popup_sp_fs_calendar_preview_bg_pane_g1

0xa165,	// (0x000861d7) popup_sp_fs_calendar_preview_bg_pane

0xe941,	// (0x0008a9b3) popup_sp_fs_calendar_preview_list_pane

0xc849,	// (0x000888bb) bg_main_sp_fs_cale_pane_ParamLimits

0xc849,	// (0x000888bb) bg_main_sp_fs_cale_pane

0x1c12,	// (0x0007dc84) listscroll_cale_mrui_pane_ParamLimits

0x1c12,	// (0x0007dc84) listscroll_cale_mrui_pane

0x1c27,	// (0x0007dc99) listscroll_sp_fs_schedule_track_pane

0x1c30,	// (0x0007dca2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1c30,	// (0x0007dca2) main_sp_fs_ctrlbar_pane_cp01

0xe949,	// (0x0008a9bb) main_sp_fs_ribbon_pane

0x1c43,	// (0x0007dcb5) popup_sp_fs_cale_preview_window

0xefc6,	// (0x0008b038) list_single_sp_fs_schedule_track_pane_ParamLimits

0xefc6,	// (0x0008b038) list_single_sp_fs_schedule_track_pane

0x223e,	// (0x0007e2b0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x223e,	// (0x0007e2b0) bg_sp_fs_highlight_list_pane_cp03

0x9643,	// (0x000856b5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9643,	// (0x000856b5) list_single_sp_fs_schedule_track_pane_g1

0x964f,	// (0x000856c1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x964f,	// (0x000856c1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0008be25) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0008be25) list_single_sp_fs_schedule_track_pane_g

0x965b,	// (0x000856cd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x965b,	// (0x000856cd) list_single_sp_fs_schedule_track_pane_t1

0x9679,	// (0x000856eb) sp_fs_schedule_track_pane_ParamLimits

0x9679,	// (0x000856eb) sp_fs_schedule_track_pane

0xe951,	// (0x0008a9c3) sp_fs_schedule_track_pane_g1

0xe959,	// (0x0008a9cb) sp_fs_schedule_track_pane_g2

0xe961,	// (0x0008a9d3) sp_fs_schedule_track_pane_g3

0xe969,	// (0x0008a9db) sp_fs_schedule_track_pane_g4

0xe971,	// (0x0008a9e3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0008be2a) sp_fs_schedule_track_pane_g

0xd68a,	// (0x000896fc) bg_sp_fs_schedule_viewer_highlight_g1

0xad53,	// (0x00086dc5) bg_sp_fs_schedule_viewer_highlight_g2

0xd692,	// (0x00089704) bg_sp_fs_schedule_viewer_highlight_g3

0xd69a,	// (0x0008970c) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b4,	// (0x00089926) bg_sp_fs_schedule_viewer_highlight_g5

0xd6aa,	// (0x0008971c) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b2,	// (0x00089724) bg_sp_fs_schedule_viewer_highlight_g7

0xd6ba,	// (0x0008972c) bg_sp_fs_schedule_viewer_highlight_g8

0xad33,	// (0x00086da5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0008be35) bg_sp_fs_schedule_viewer_highlight_g

0xa165,	// (0x000861d7) bg_main_sp_fs_ribbon_pane

0x968b,	// (0x000856fd) main_sp_fs_ribbon_pane_g1

0xe979,	// (0x0008a9eb) main_sp_fs_ribbon_pane_t1

0x9694,	// (0x00085706) main_sp_fs_ribbon_pane_t2

0xe988,	// (0x0008a9fa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0008be48) main_sp_fs_ribbon_pane_t

0xe997,	// (0x0008aa09) main_sp_fs_ribbon_scheduler_pane

0xe99f,	// (0x0008aa11) bg_main_sp_fs_ribbon_pane_g1

0xe9a8,	// (0x0008aa1a) bg_main_sp_fs_ribbon_pane_g2

0xe9b1,	// (0x0008aa23) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0008be4f) bg_main_sp_fs_ribbon_pane_g

0xe9b9,	// (0x0008aa2b) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c2,	// (0x0008aa34) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cb,	// (0x0008aa3d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0008be56) main_sp_fs_ribbon_scheduler_pane_g

0xe9d4,	// (0x0008aa46) list_cale_mrui_pane

0x96a3,	// (0x00085715) sp_fs_scroll_pane_cp07_ParamLimits

0x96a3,	// (0x00085715) sp_fs_scroll_pane_cp07

0x96bf,	// (0x00085731) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x96bf,	// (0x00085731) bg_sp_fs_schedule_viewer_highlight

0xe9e1,	// (0x0008aa53) list_single_sp_fs_schedule_track_pane_cp01

0xe9e9,	// (0x0008aa5b) list_sp_fs_schedule_track_pane

0xe9f1,	// (0x0008aa63) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f1,	// (0x0008aa63) sp_fs_scroll_pane_cp06

0xcca2,	// (0x00088d14) bgmain_sp_fs_calendar_pane_g1

0x1c55,	// (0x0007dcc7) list_single_cale_mrui_pane_ParamLimits

0x1c55,	// (0x0007dcc7) list_single_cale_mrui_pane

0x1c6a,	// (0x0007dcdc) list_single_cale_mrui_row_pane_ParamLimits

0x1c6a,	// (0x0007dcdc) list_single_cale_mrui_row_pane

0x1c80,	// (0x0007dcf2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1c80,	// (0x0007dcf2) list_single_cale_mrui_row_pane_g1

0x1cac,	// (0x0007dd1e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1cac,	// (0x0007dd1e) list_single_cale_mrui_row_pane_t1

0x1cbe,	// (0x0007dd30) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1cbe,	// (0x0007dd30) list_single_cale_mrui_row_pane_t2

0x1d24,	// (0x0007dd96) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1d24,	// (0x0007dd96) list_single_cale_mrui_row_pane_t3

0x1d53,	// (0x0007ddc5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1d53,	// (0x0007ddc5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0008be64) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0008be64) list_single_cale_mrui_row_pane_t

0x1d82,	// (0x0007ddf4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1d82,	// (0x0007ddf4) list_single_cmail_header_editor_pane_bg_cp01

0x1da4,	// (0x0007de16) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1da4,	// (0x0007de16) list_single_cmail_header_editor_pane_bg_cp02

0x96d8,	// (0x0008574a) main_radioblah_text_pane_t1_ParamLimits

0x96d8,	// (0x0008574a) main_radioblah_text_pane_t1

0xea10,	// (0x0008aa82) cam6_indi_pane_cp01

0xea18,	// (0x0008aa8a) cam6_mode_pane_cp01

0xea20,	// (0x0008aa92) cam6_pano_pane

0xea29,	// (0x0008aa9b) cam6_zoom_pane_cp01

0xea33,	// (0x0008aaa5) cam6_pano_image_pane

0xea3c,	// (0x0008aaae) cam6_pano_pane_g1

0xe303,	// (0x0008a375) cam6_pano_pane_g2

0xea45,	// (0x0008aab7) cam6_pano_pane_g3

0xea4e,	// (0x0008aac0) cam6_pano_pane_g4

0xd21c,	// (0x0008928e) cam6_pano_pane_g5

0xea57,	// (0x0008aac9) cam6_pano_pane_g6

0xea5f,	// (0x0008aad1) cam6_pano_pane_g7

0xea67,	// (0x0008aad9) cam6_pano_pane_g8

0xea70,	// (0x0008aae2) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0008be6d) cam6_pano_pane_g

0xa165,	// (0x000861d7) main_browser_tag_pane

0xe8c8,	// (0x0008a93a) grid_navstr_albumart_pane

0xea7b,	// (0x0008aaed) cell_navstr_albumart_pane_ParamLimits

0xea7b,	// (0x0008aaed) cell_navstr_albumart_pane

0xea9a,	// (0x0008ab0c) cell_navstr_albumart_pane_g1

0xc656,	// (0x000886c8) cell_navstr_albumart_pane_g2

0xc666,	// (0x000886d8) cell_navstr_albumart_pane_g3

0xc65e,	// (0x000886d0) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0008be80) cell_navstr_albumart_pane_g

0x96f2,	// (0x00085764) bt_list_pane_ParamLimits

0x96f2,	// (0x00085764) bt_list_pane

0x970b,	// (0x0008577d) bt_list_pane_t1

0x971a,	// (0x0008578c) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0008be89) bt_list_pane_t

0xa165,	// (0x000861d7) main_cale_prevew_pane

0x9729,	// (0x0008579b) popup_cale_preview_window_ParamLimits

0x9729,	// (0x0008579b) popup_cale_preview_window

0xa89f,	// (0x00086911) bg_popup_preview_window_pane_cp05_ParamLimits

0xa89f,	// (0x00086911) bg_popup_preview_window_pane_cp05

0xeaa2,	// (0x0008ab14) list_cale_preview_pane_ParamLimits

0xeaa2,	// (0x0008ab14) list_cale_preview_pane

0x9744,	// (0x000857b6) list_double_cale_preview_pane_ParamLimits

0x9744,	// (0x000857b6) list_double_cale_preview_pane

0x9758,	// (0x000857ca) list_single_cale_preview_pane_ParamLimits

0x9758,	// (0x000857ca) list_single_cale_preview_pane

0x9770,	// (0x000857e2) list_single_cale_preview_pane_g1

0x9778,	// (0x000857ea) list_single_cale_preview_pane_t1_ParamLimits

0x9778,	// (0x000857ea) list_single_cale_preview_pane_t1

0x978d,	// (0x000857ff) list_double_cale_preview_pane_g1

0x9795,	// (0x00085807) list_double_cale_preview_pane_t1_ParamLimits

0x9795,	// (0x00085807) list_double_cale_preview_pane_t1

0x97aa,	// (0x0008581c) list_double_cale_preview_pane_t2_ParamLimits

0x97aa,	// (0x0008581c) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0008be8e) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0008be8e) list_double_cale_preview_pane_t

0xa165,	// (0x000861d7) main_ezdial_pane

0xa89f,	// (0x00086911) main_sp_fs_email_pane_ParamLimits

0x9340,	// (0x000853b2) cmail_ddmenu_btn01_pane_ParamLimits

0x9340,	// (0x000853b2) cmail_ddmenu_btn01_pane

0x935d,	// (0x000853cf) cmail_ddmenu_btn02_pane_ParamLimits

0x935d,	// (0x000853cf) cmail_ddmenu_btn02_pane

0x937b,	// (0x000853ed) cmail_ddmenu_btn03_pane_ParamLimits

0x937b,	// (0x000853ed) cmail_ddmenu_btn03_pane

0x1644,	// (0x0007d6b6) main_sp_fs_ctrlbar_pane_ParamLimits

0x165e,	// (0x0007d6d0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x94cf,	// (0x00085541) list_cmail_body_pane_ParamLimits

0x9549,	// (0x000855bb) bg_button_pane_cp12

0xe851,	// (0x0008a8c3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0008a8c3) list_single_cmail_header_detail_pane_g3

0x1b9c,	// (0x0007dc0e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1b9c,	// (0x0007dc0e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0008be11) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0008be11) list_single_cmail_header_detail_pane_t

0x1bf4,	// (0x0007dc66) phacti_term_pane_t2_ParamLimits

0x1bf4,	// (0x0007dc66) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0008be1b) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0008be1b) phacti_term_pane_t

0xeaae,	// (0x0008ab20) aid_size_list_single_double

0x97c2,	// (0x00085834) popup_ezdial_listscroll_window

0x97e4,	// (0x00085856) popup_number_entry_window_cp01

0xb447,	// (0x000874b9) bg_popup_call_pane_cp09

0xeaba,	// (0x0008ab2c) ezdial_list_pane

0xeac2,	// (0x0008ab34) scroll_pane_cp23

0xca79,	// (0x00088aeb) bg_button_pane_cp028_ParamLimits

0xca79,	// (0x00088aeb) bg_button_pane_cp028

0x97f2,	// (0x00085864) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97f2,	// (0x00085864) cmail_ddmenu_btn01_pane_g1

0x9804,	// (0x00085876) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9804,	// (0x00085876) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0008be93) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0008be93) cmail_ddmenu_btn01_pane_g

0xeaca,	// (0x0008ab3c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaca,	// (0x0008ab3c) cmail_ddmenu_btn01_pane_t1

0xc849,	// (0x000888bb) bg_button_pane_cp029_ParamLimits

0xc849,	// (0x000888bb) bg_button_pane_cp029

0x9804,	// (0x00085876) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9804,	// (0x00085876) cmail_ddmenu_btn02_pane_g1

0x981c,	// (0x0008588e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x981c,	// (0x0008588e) cmail_ddmenu_btn02_pane_t1

0x223e,	// (0x0007e2b0) bg_button_pane_cp031_ParamLimits

0x223e,	// (0x0007e2b0) bg_button_pane_cp031

0x9804,	// (0x00085876) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9804,	// (0x00085876) cmail_ddmenu_btn03_pane_g1

0x981c,	// (0x0008588e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x981c,	// (0x0008588e) cmail_ddmenu_btn03_pane_t1

0x71a3,	// (0x00083215) cell_dialer2_keypad_pane_t1_ParamLimits

0x71bd,	// (0x0008322f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x71bd,	// (0x0008322f) cell_dialer2_keypad_pane_t1_copy1

0x8cf5,	// (0x00084d67) ncimui_group_button_pane

0xa89f,	// (0x00086911) main_sp_fs_calendar_pane_ParamLimits

0x94e7,	// (0x00085559) list_single_cmail_header_caption_pane_ParamLimits

0x1c09,	// (0x0007dc7b) aid_recal_txt_sm_pane

0xa165,	// (0x000861d7) mian_recal_day_pane

0x1c43,	// (0x0007dcb5) popup_sp_fs_cale_preview_window_ParamLimits

0xeadf,	// (0x0008ab51) list_recal_day_pane

0x1ddc,	// (0x0007de4e) list_single_recal_day_pane_ParamLimits

0x1ddc,	// (0x0007de4e) list_single_recal_day_pane

0xeb06,	// (0x0008ab78) list_single_recal_day_pane_g1_ParamLimits

0xeb06,	// (0x0008ab78) list_single_recal_day_pane_g1

0x1dee,	// (0x0007de60) list_single_recal_day_pane_g2_ParamLimits

0x1dee,	// (0x0007de60) list_single_recal_day_pane_g2

0x1dfa,	// (0x0007de6c) list_single_recal_day_pane_g3_ParamLimits

0x1dfa,	// (0x0007de6c) list_single_recal_day_pane_g3

0x1e06,	// (0x0007de78) list_single_recal_day_pane_g4_ParamLimits

0x1e06,	// (0x0007de78) list_single_recal_day_pane_g4

0x1e14,	// (0x0007de86) list_single_recal_day_pane_g5_ParamLimits

0x1e14,	// (0x0007de86) list_single_recal_day_pane_g5

0x1e2a,	// (0x0007de9c) list_single_recal_day_pane_g6_ParamLimits

0x1e2a,	// (0x0007de9c) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0008bea2) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0008bea2) list_single_recal_day_pane_g

0x1e3e,	// (0x0007deb0) list_single_recal_day_pane_t1

0x1e50,	// (0x0007dec2) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0008bead) list_single_recal_day_pane_t

0x9840,	// (0x000858b2) ncimui_query_button_pane_ParamLimits

0x9840,	// (0x000858b2) ncimui_query_button_pane

0x9850,	// (0x000858c2) ncimui_query_button_pane_t1_ParamLimits

0x9850,	// (0x000858c2) ncimui_query_button_pane_t1

0xeb12,	// (0x0008ab84) ncimui_query_button_pane_t2_ParamLimits

0xeb12,	// (0x0008ab84) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0008beb2) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0008beb2) ncimui_query_button_pane_t

0x9863,	// (0x000858d5) query_button_pane_ParamLimits

0x9863,	// (0x000858d5) query_button_pane

0xa165,	// (0x000861d7) bg_button_pane_cp0028

0xeb25,	// (0x0008ab97) query_button_pane_t1

0x556b,	// (0x000815dd) main_tport_pane_ParamLimits

0x93d9,	// (0x0008544b) bg_popup_window_pane_cp01_ParamLimits

0x93d9,	// (0x0008544b) bg_popup_window_pane_cp01

0x93e7,	// (0x00085459) heading_pane_cp08_ParamLimits

0x93e7,	// (0x00085459) heading_pane_cp08

0x93f5,	// (0x00085467) heading_pane_cp07_ParamLimits

0x93f5,	// (0x00085467) heading_pane_cp07

0x9466,	// (0x000854d8) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0008bdfe) cell_tport_appsw_pane_g

0x1016,	// (0x0007d088) input_candi_list_open_g1

0xaeff,	// (0x00086f71) list_cale_time_pane_g6_ParamLimits

0xaeff,	// (0x00086f71) list_cale_time_pane_g6

0x5ff6,	// (0x00082068) aid_size_touch_calib_1_ParamLimits

0x5ff6,	// (0x00082068) aid_size_touch_calib_1

0x6002,	// (0x00082074) aid_size_touch_calib_2_ParamLimits

0x6002,	// (0x00082074) aid_size_touch_calib_2

0x6010,	// (0x00082082) aid_size_touch_calib_3_ParamLimits

0x6010,	// (0x00082082) aid_size_touch_calib_3

0x6020,	// (0x00082092) aid_size_touch_calib_4_ParamLimits

0x6020,	// (0x00082092) aid_size_touch_calib_4

0x602e,	// (0x000820a0) main_touch_calib_button_group_pane_ParamLimits

0x602e,	// (0x000820a0) main_touch_calib_button_group_pane

0x603c,	// (0x000820ae) main_touch_calib_pane_g1_ParamLimits

0x6048,	// (0x000820ba) main_touch_calib_pane_g2_ParamLimits

0x6054,	// (0x000820c6) main_touch_calib_pane_g3_ParamLimits

0x6060,	// (0x000820d2) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0008b7ce) main_touch_calib_pane_g_ParamLimits

0x606c,	// (0x000820de) main_touch_calib_pane_t1_ParamLimits

0x6083,	// (0x000820f5) main_touch_calib_pane_t2_ParamLimits

0x609c,	// (0x0008210e) main_touch_calib_pane_t3_ParamLimits

0x60b2,	// (0x00082124) main_touch_calib_pane_t4_ParamLimits

0x60c8,	// (0x0008213a) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0008b7d7) main_touch_calib_pane_t_ParamLimits

0xcfd2,	// (0x00089044) list_single_fp_cale_pane_g3_ParamLimits

0xcfd2,	// (0x00089044) list_single_fp_cale_pane_g3

0xa89f,	// (0x00086911) bg_button_pane_cp012_ParamLimits

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp03_ParamLimits

0x7faf,	// (0x00084021) cell_vitu2_function_top_pane_g1_ParamLimits

0xa89f,	// (0x00086911) bg_vkb2_func_pane_cp04_ParamLimits

0x8c7b,	// (0x00084ced) main_ncimui_button_group_pane_ParamLimits

0x8c7b,	// (0x00084ced) main_ncimui_button_group_pane

0x8ce3,	// (0x00084d55) main_ncimui_pane_t3_ParamLimits

0x8ce3,	// (0x00084d55) main_ncimui_pane_t3

0xe8de,	// (0x0008a950) phacti_button_group_pane

0xeaae,	// (0x0008ab20) aid_size_list_single_double_ParamLimits

0x97c2,	// (0x00085834) popup_ezdial_listscroll_window_ParamLimits

0x97e4,	// (0x00085856) popup_number_entry_window_cp01_ParamLimits

0x9870,	// (0x000858e2) phacti_button_pane_ParamLimits

0x9870,	// (0x000858e2) phacti_button_pane

0xa165,	// (0x000861d7) bg_button_pane_cp14

0xeb33,	// (0x0008aba5) phacti_button_pane_t1

0x9881,	// (0x000858f3) main_touch_calib_button_pane_ParamLimits

0x9881,	// (0x000858f3) main_touch_calib_button_pane

0xa917,	// (0x00086989) bg_button_pane_cp18_ParamLimits

0xa917,	// (0x00086989) bg_button_pane_cp18

0xeb41,	// (0x0008abb3) main_touch_calib_button_pane_t1_ParamLimits

0xeb41,	// (0x0008abb3) main_touch_calib_button_pane_t1

0xeb57,	// (0x0008abc9) main_touch_calib_button_pane_t2_ParamLimits

0xeb57,	// (0x0008abc9) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0008beb7) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0008beb7) main_touch_calib_button_pane_t

0xa165,	// (0x000861d7) cell_ncimui_button_pane

0xa165,	// (0x000861d7) bg_button_pane_cp032

0xeb75,	// (0x0008abe7) cell_ncimui_button_pane_t1

0x7219,	// (0x0008328b) image3_infobar_pane_ParamLimits

0x7219,	// (0x0008328b) image3_infobar_pane

0x9070,	// (0x000850e2) fs_bigclock_status_pane_ParamLimits

0x9070,	// (0x000850e2) fs_bigclock_status_pane

0x907d,	// (0x000850ef) main_fs_bigclock_clock_pane_ParamLimits

0x907d,	// (0x000850ef) main_fs_bigclock_clock_pane

0x9093,	// (0x00085105) main_fs_bigclock_indi_pane_ParamLimits

0x9093,	// (0x00085105) main_fs_bigclock_indi_pane

0x90c5,	// (0x00085137) main_fs_bigclock_swipe_pane_ParamLimits

0x90c5,	// (0x00085137) main_fs_bigclock_swipe_pane

0xa165,	// (0x000861d7) main_fs_clock_dumped_data

0xe410,	// (0x0008a482) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe410,	// (0x0008a482) list_single_fs_bigclock_indicator_pane_g1

0xe43a,	// (0x0008a4ac) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe43a,	// (0x0008a4ac) list_single_fs_bigclock_indicator_pane_g2

0xe454,	// (0x0008a4c6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe454,	// (0x0008a4c6) list_single_fs_bigclock_indicator_pane_g3

0xe46e,	// (0x0008a4e0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe46e,	// (0x0008a4e0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc73,	// (0x0008bce5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc73,	// (0x0008bce5) list_single_fs_bigclock_indicator_pane_g

0xe499,	// (0x0008a50b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe499,	// (0x0008a50b) list_single_fs_bigclock_indicator_pane_t1

0xe4c1,	// (0x0008a533) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4c1,	// (0x0008a533) list_single_fs_bigclock_indicator_pane_t2

0xe4e9,	// (0x0008a55b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e9,	// (0x0008a55b) list_single_fs_bigclock_indicator_pane_t3

0xe511,	// (0x0008a583) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe511,	// (0x0008a583) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7e,	// (0x0008bcf0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7e,	// (0x0008bcf0) list_single_fs_bigclock_indicator_pane_t

0xeb83,	// (0x0008abf5) image3_infobar_fav_pane_ParamLimits

0xeb83,	// (0x0008abf5) image3_infobar_fav_pane

0xeb93,	// (0x0008ac05) image3_infobar_loc_pane_ParamLimits

0xeb93,	// (0x0008ac05) image3_infobar_loc_pane

0xeba9,	// (0x0008ac1b) image3_infobar_time_pane_ParamLimits

0xeba9,	// (0x0008ac1b) image3_infobar_time_pane

0xcca2,	// (0x00088d14) image3_infobar_time_pane_g1

0xebb9,	// (0x0008ac2b) image3_infobar_time_pane_t1

0xcca2,	// (0x00088d14) image3_infobar_loc_pane_g1

0xebc7,	// (0x0008ac39) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0008bebc) image3_infobar_loc_pane_g

0xebcf,	// (0x0008ac41) image3_infobar_loc_pane_t1

0xcca2,	// (0x00088d14) image3_infobar_fav_pane_g1

0xebdd,	// (0x0008ac4f) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0008bec1) image3_infobar_fav_pane_g

0xebe5,	// (0x0008ac57) fs_bigclock_status_battery_pane

0xebee,	// (0x0008ac60) fs_bigclock_status_signal_pane

0xebf7,	// (0x0008ac69) fs_bigclock_status_title_pane

0xec00,	// (0x0008ac72) fs_bigclock_status_signal_pane_g1

0xec09,	// (0x0008ac7b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0008bec6) fs_bigclock_status_signal_pane_g

0xec11,	// (0x0008ac83) fs_bigclock_status_battery_pane_g1

0xec1a,	// (0x0008ac8c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0008becb) fs_bigclock_status_battery_pane_g

0xec22,	// (0x0008ac94) fs_bigclock_status_title_pane_t1

0xcca2,	// (0x00088d14) main_fs_bigclock_clock_pane_g1

0xec30,	// (0x0008aca2) main_fs_bigclock_clock_pane_g2

0xec30,	// (0x0008aca2) main_fs_bigclock_clock_pane_g3

0xec30,	// (0x0008aca2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0008bed0) main_fs_bigclock_clock_pane_g

0xec38,	// (0x0008acaa) main_fs_bigclock_clock_pane_t1

0xec46,	// (0x0008acb8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0008bed9) main_fs_bigclock_clock_pane_t

0x9891,	// (0x00085903) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9891,	// (0x00085903) list_single_fs_bigclock_indicator_pane

0x98a2,	// (0x00085914) list_single_fs_bigclock_pane_ParamLimits

0x98a2,	// (0x00085914) list_single_fs_bigclock_pane

0xec5e,	// (0x0008acd0) main_fs_bigclock_indicator_pane_t1

0xec6d,	// (0x0008acdf) list_single_fs_bigclock_pane_g1

0xec75,	// (0x0008ace7) list_single_fs_bigclock_pane_t1

0xcca2,	// (0x00088d14) main_fs_bigclock_swipe_pane_g1

0xecb8,	// (0x0008ad2a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0008beea) main_fs_bigclock_swipe_pane_g

0xecc0,	// (0x0008ad32) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc0,	// (0x0008ad32) main_fs_bigclock_swipe_pane_t1

0x447b,	// (0x000804ed) call_type_pane_ParamLimits

0xa165,	// (0x000861d7) main_btmg_pane

0x96cc,	// (0x0008573e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x96cc,	// (0x0008573e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0008be5d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0008be5d) list_single_cale_mrui_row_pane_g

0x1dca,	// (0x0007de3c) list_recal_vselct_arw_lo_pane

0xeafe,	// (0x0008ab70) list_recal_vselct_arw_up_pane

0x1dd2,	// (0x0007de44) list_recal_vselct_pane

0x98f8,	// (0x0008596a) btmg_button_pane

0x9904,	// (0x00085976) main_btmg_pane_g1

0xa165,	// (0x000861d7) bg_button_pane_cp044

0xecdd,	// (0x0008ad4f) btmg_button_pane_t1

0xc835,	// (0x000888a7) aid_listscroll_gen

0xa89f,	// (0x00086911) main_cntbar_detail_pane

0xe832,	// (0x0008a8a4) list_cmail_folder_pane

0xe842,	// (0x0008a8b4) sp_fs_scroll_pane_cp03_ParamLimits

0x1e62,	// (0x0007ded4) list_single_fs_dyc_pane_cp01_ParamLimits

0x1e62,	// (0x0007ded4) list_single_fs_dyc_pane_cp01

0xeceb,	// (0x0008ad5d) aid_size_cmail_indent

0x1e7c,	// (0x0007deee) list_single_dyc_row_pane_cp01

0x992c,	// (0x0008599e) cntbar_detail_list_pane_ParamLimits

0x992c,	// (0x0008599e) cntbar_detail_list_pane

0x996c,	// (0x000859de) main_cntbar_detail_cont_pane_ParamLimits

0x996c,	// (0x000859de) main_cntbar_detail_cont_pane

0x446f,	// (0x000804e1) scroll_pane_cp032_ParamLimits

0x446f,	// (0x000804e1) scroll_pane_cp032

0x9978,	// (0x000859ea) cntbar_detail_list_event_pane_ParamLimits

0x9978,	// (0x000859ea) cntbar_detail_list_event_pane

0x993a,	// (0x000859ac) cntbar_detail_list_shct_pane

0xada1,	// (0x00086e13) aid_list_gen

0xecf4,	// (0x0008ad66) aid_scroll

0xecfd,	// (0x0008ad6f) aid_size_touch_scroll_bar

0x8519,	// (0x0008458b) aid_list_double

0xed06,	// (0x0008ad78) aid_list_single

0x8507,	// (0x00084579) aid_list_single_lg

0x1e85,	// (0x0007def7) aid_list_z_g_a_sm

0x9988,	// (0x000859fa) aid_list_z_g_d

0x1e8d,	// (0x0007deff) aid_txt_z_prm

0x1e9d,	// (0x0007df0f) aid_txt_z_prm_cp01

0x1eab,	// (0x0007df1d) aid_txt_z_sec

0x9990,	// (0x00085a02) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9990,	// (0x00085a02) main_cntbar_detail_cont_pane_g1

0x999d,	// (0x00085a0f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x999d,	// (0x00085a0f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0008beef) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0008beef) main_cntbar_detail_cont_pane_g

0xed0f,	// (0x0008ad81) main_cntbar_detail_cont_pane_t1

0xed1d,	// (0x0008ad8f) main_cntbar_detail_cont_pane_t2

0xed2b,	// (0x0008ad9d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0008bef4) main_cntbar_detail_cont_pane_t

0x99a9,	// (0x00085a1b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x99a9,	// (0x00085a1b) cell_cntbar_detail_list_shct_pane

0xed39,	// (0x0008adab) cntbar_detail_list_shct_pane_g1

0xed42,	// (0x0008adb4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0008befb) cntbar_detail_list_shct_pane_g

0x99bd,	// (0x00085a2f) cntbar_detail_list_event_pane_g1_ParamLimits

0x99bd,	// (0x00085a2f) cntbar_detail_list_event_pane_g1

0x99c9,	// (0x00085a3b) cntbar_detail_list_event_pane_g2_ParamLimits

0x99c9,	// (0x00085a3b) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0008bf00) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0008bf00) cntbar_detail_list_event_pane_g

0x9a37,	// (0x00085aa9) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a37,	// (0x00085aa9) cntbar_detail_list_event_pane_t1

0x9a4c,	// (0x00085abe) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a4c,	// (0x00085abe) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0008bf0d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0008bf0d) cntbar_detail_list_event_pane_t

0xcca2,	// (0x00088d14) cell_cntbar_detail_list_shct_pane_g1

0x484e,	// (0x000808c0) navi_pane_mv_g3

0xa89f,	// (0x00086911) main_cntbar_detail_pane_ParamLimits

0xa165,	// (0x000861d7) main_notif_wgt_pane

0x6ec3,	// (0x00082f35) aid_tch_main_mp4_pane_g4

0x7102,	// (0x00083174) popup_slider_window_cp02

0x1dc0,	// (0x0007de32) list_recal_day_event_pane

0x990c,	// (0x0008597e) cntbar_detail_btn_pane_ParamLimits

0x990c,	// (0x0008597e) cntbar_detail_btn_pane

0x991c,	// (0x0008598e) cntbar_detail_btn_pane_cp01_ParamLimits

0x991c,	// (0x0008598e) cntbar_detail_btn_pane_cp01

0x993a,	// (0x000859ac) cntbar_detail_list_shct_pane_ParamLimits

0x9946,	// (0x000859b8) cntbar_detail_pane_g1_ParamLimits

0x9946,	// (0x000859b8) cntbar_detail_pane_g1

0x9956,	// (0x000859c8) cntbar_detail_pane_t1_ParamLimits

0x9956,	// (0x000859c8) cntbar_detail_pane_t1

0x99d5,	// (0x00085a47) cntbar_detail_list_event_pane_g3_ParamLimits

0x99d5,	// (0x00085a47) cntbar_detail_list_event_pane_g3

0x99ed,	// (0x00085a5f) cntbar_detail_list_event_pane_g4_ParamLimits

0x99ed,	// (0x00085a5f) cntbar_detail_list_event_pane_g4

0x9a05,	// (0x00085a77) cntbar_detail_list_event_pane_g5_ParamLimits

0x9a05,	// (0x00085a77) cntbar_detail_list_event_pane_g5

0x9a1d,	// (0x00085a8f) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a1d,	// (0x00085a8f) cntbar_detail_list_event_pane_g6

0x9a61,	// (0x00085ad3) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a61,	// (0x00085ad3) cntbar_detail_list_event_pane_t3

0x9a73,	// (0x00085ae5) popup_notif_wgt_window_ParamLimits

0x9a73,	// (0x00085ae5) popup_notif_wgt_window

0x9a83,	// (0x00085af5) popup_submenu_window_cp01_ParamLimits

0x9a83,	// (0x00085af5) popup_submenu_window_cp01

0xb447,	// (0x000874b9) bg_popup_window_pane_cp10

0xed4b,	// (0x0008adbd) listscroll_notif_wgt_pane

0xed5d,	// (0x0008adcf) list_notif_wgt_window

0xed66,	// (0x0008add8) scroll_pane_cp033

0x9a93,	// (0x00085b05) list_notif_wgt_row_pane_ParamLimits

0x9a93,	// (0x00085b05) list_notif_wgt_row_pane

0xed6f,	// (0x0008ade1) aid_size_list_notif_wgt_del

0xed7c,	// (0x0008adee) list_notif_wgt_row_pane_g1

0xed88,	// (0x0008adfa) list_notif_wgt_row_pane_g2

0xed94,	// (0x0008ae06) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0008bf14) list_notif_wgt_row_pane_g

0xeda1,	// (0x0008ae13) list_notif_wgt_row_pane_t1

0xedb6,	// (0x0008ae28) list_notif_wgt_row_pane_t2

0xedc8,	// (0x0008ae3a) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0008bf1b) list_notif_wgt_row_pane_t

0xd8bc,	// (0x0008992e) list_recal_day_event_pane_g1

0xedda,	// (0x0008ae4c) list_recal_day_event_pane_t1

0xa165,	// (0x000861d7) bg_button_pane_cp045

0xede9,	// (0x0008ae5b) cntbar_detail_btn_pane_t1

0xc849,	// (0x000888bb) main_callh_pane_ParamLimits

0xc849,	// (0x000888bb) main_callh_pane

0xa165,	// (0x000861d7) main_coverflow0_pane

0xa165,	// (0x000861d7) main_wgtman_pane

0x90dd,	// (0x0008514f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x90dd,	// (0x0008514f) main_fs_bigclock_unlock_btn_pane

0x945e,	// (0x000854d0) bg_button_pane_cp16

0x946e,	// (0x000854e0) cell_tport_appsw_pane_g3

0x9aa4,	// (0x00085b16) cf0_flow_pane_ParamLimits

0x9aa4,	// (0x00085b16) cf0_flow_pane

0xedf7,	// (0x0008ae69) listscroll_cf0_pane

0xee02,	// (0x0008ae74) main_cf0_pane_g1

0x9ab3,	// (0x00085b25) main_cf0_pane_t1_ParamLimits

0x9ab3,	// (0x00085b25) main_cf0_pane_t1

0x9ac7,	// (0x00085b39) main_cf0_pane_t2_ParamLimits

0x9ac7,	// (0x00085b39) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0008bf27) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0008bf27) main_cf0_pane_t

0xee14,	// (0x0008ae86) scroll_pane_cp11

0x9adb,	// (0x00085b4d) cf0_flow_pane_g1

0x9ae3,	// (0x00085b55) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0008bf2c) cf0_flow_pane_g

0x9aeb,	// (0x00085b5d) cf0_flow_pane_t1

0xa165,	// (0x000861d7) main_call6_pane

0xa165,	// (0x000861d7) main_calllock_pane

0x9af9,	// (0x00085b6b) call6_btn_grp_pane_ParamLimits

0x9af9,	// (0x00085b6b) call6_btn_grp_pane

0x9b06,	// (0x00085b78) call6_pane_g1_ParamLimits

0x9b06,	// (0x00085b78) call6_pane_g1

0x9b16,	// (0x00085b88) popup_call6_1st_window_ParamLimits

0x9b16,	// (0x00085b88) popup_call6_1st_window

0x9b24,	// (0x00085b96) popup_call6_2nd_window_ParamLimits

0x9b24,	// (0x00085b96) popup_call6_2nd_window

0x9b32,	// (0x00085ba4) cell_call6_btn_pane_ParamLimits

0x9b32,	// (0x00085ba4) cell_call6_btn_pane

0xb447,	// (0x000874b9) bg_popup_call2_in_pane_cp03

0xee1f,	// (0x0008ae91) popup_call6_1st_window_g1

0xee27,	// (0x0008ae99) popup_call6_1st_window_g2

0xee2f,	// (0x0008aea1) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0008bf31) popup_call6_1st_window_g

0xee37,	// (0x0008aea9) popup_call6_1st_window_t1

0xee46,	// (0x0008aeb8) popup_call6_1st_window_t2

0xee56,	// (0x0008aec8) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0008bf38) popup_call6_1st_window_t

0xb447,	// (0x000874b9) bg_popup_call2_in_pane_cp04

0xee1f,	// (0x0008ae91) popup_call6_2nd_window_g1

0xee27,	// (0x0008ae99) popup_call6_2nd_window_g2

0xee2f,	// (0x0008aea1) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0008bf31) popup_call6_2nd_window_g

0xee37,	// (0x0008aea9) popup_call6_2nd_window_t1

0xa165,	// (0x000861d7) bg_button_pane_cp15

0xee66,	// (0x0008aed8) cell_call6_btn_pane_g1

0xee6f,	// (0x0008aee1) cell_call6_btn_pane_t1

0x9b41,	// (0x00085bb3) listscroll_wgtman_pane_ParamLimits

0x9b41,	// (0x00085bb3) listscroll_wgtman_pane

0x9b5f,	// (0x00085bd1) wgtman_btn_pane_ParamLimits

0x9b5f,	// (0x00085bd1) wgtman_btn_pane

0xb2ff,	// (0x00087371) aid_scroll_copy1

0xee7e,	// (0x0008aef0) list_wgtman_pane

0x9b94,	// (0x00085c06) wgtman_btn_pane_g1_ParamLimits

0x9b94,	// (0x00085c06) wgtman_btn_pane_g1

0x9bbc,	// (0x00085c2e) wgtman_btn_pane_t1_ParamLimits

0x9bbc,	// (0x00085c2e) wgtman_btn_pane_t1

0xee88,	// (0x0008aefa) wgtman_btn_pane_t2_ParamLimits

0xee88,	// (0x0008aefa) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0008bf3f) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0008bf3f) wgtman_btn_pane_t

0x9bf3,	// (0x00085c65) listrow_wgtman_pane_ParamLimits

0x9bf3,	// (0x00085c65) listrow_wgtman_pane

0x9c04,	// (0x00085c76) listrow_wgtman_pane_g1

0x9c11,	// (0x00085c83) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0008bf44) listrow_wgtman_pane_g

0x1eb9,	// (0x0007df2b) listrow_wgtman_pane_t1

0x1ed1,	// (0x0007df43) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0008bf49) listrow_wgtman_pane_t

0x1ef7,	// (0x0007df69) wait_bar_pane_cp09

0xee9f,	// (0x0008af11) main_calllock_btn_pane

0xeea9,	// (0x0008af1b) main_calllock_pane_g1

0xa165,	// (0x000861d7) bg_button_pane_cp17

0xeeb5,	// (0x0008af27) main_calllock_btn_pane_g1

0xeebe,	// (0x0008af30) main_calllock_btn_pane_t1

0xa165,	// (0x000861d7) main_dialer3_pane

0xa165,	// (0x000861d7) main_fmrd2_pane

0xcca2,	// (0x00088d14) main_fs_bigclock_unlock_btn_pane_g1

0xeed5,	// (0x0008af47) main_fs_bigclock_unlock_btn_pane_t1

0x9c2f,	// (0x00085ca1) area_fmrd2_info_pane_ParamLimits

0x9c2f,	// (0x00085ca1) area_fmrd2_info_pane

0x9c3b,	// (0x00085cad) area_fmrd2_visual_pane_ParamLimits

0x9c3b,	// (0x00085cad) area_fmrd2_visual_pane

0x9c49,	// (0x00085cbb) fmrd2_indi_pane_ParamLimits

0x9c49,	// (0x00085cbb) fmrd2_indi_pane

0x9c56,	// (0x00085cc8) area_fmrd2_visual_pane_g1

0x9c5e,	// (0x00085cd0) area_fmrd2_visual_pane_t1

0x9c6e,	// (0x00085ce0) area_fmrd2_visual_pane_t2

0x9c7e,	// (0x00085cf0) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0008bf53) area_fmrd2_visual_pane_t

0x9c8e,	// (0x00085d00) area_fmrd2_info_pane_g1

0x9c96,	// (0x00085d08) area_fmrd2_info_pane_t1

0x9ca6,	// (0x00085d18) area_fmrd2_info_pane_t2

0x9cb6,	// (0x00085d28) area_fmrd2_info_pane_t3

0x9cc6,	// (0x00085d38) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0008bf5a) area_fmrd2_info_pane_t

0x9cd6,	// (0x00085d48) fmrd2_indi_pane_t1

0x9ce6,	// (0x00085d58) fmrd2_indi_pane_t2

0x9cf6,	// (0x00085d68) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0008bf63) fmrd2_indi_pane_t

0xe47d,	// (0x0008a4ef) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe47d,	// (0x0008a4ef) list_single_fs_bigclock_indicator_pane_g5

0xe526,	// (0x0008a598) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe526,	// (0x0008a598) list_single_fs_bigclock_indicator_pane_t5

0x95fa,	// (0x0008566c) aid_cell_bcale_month_pane_ParamLimits

0x95fa,	// (0x0008566c) aid_cell_bcale_month_pane

0x9618,	// (0x0008568a) bcale_month_pane_ParamLimits

0x9618,	// (0x0008568a) bcale_month_pane

0x9634,	// (0x000856a6) bcale_preview_pane_ParamLimits

0x9634,	// (0x000856a6) bcale_preview_pane

0xec75,	// (0x0008ace7) list_single_fs_bigclock_pane_t1_ParamLimits

0xec94,	// (0x0008ad06) list_single_fs_bigclock_pane_t2_ParamLimits

0xec94,	// (0x0008ad06) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0008bee5) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0008bee5) list_single_fs_bigclock_pane_t

0xeecd,	// (0x0008af3f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0008bf4e) main_fs_bigclock_unlock_btn_pane_g

0x9d06,	// (0x00085d78) aid_dia3_key_size_ParamLimits

0x9d06,	// (0x00085d78) aid_dia3_key_size

0x9d12,	// (0x00085d84) aid_dia3_listrow_size_ParamLimits

0x9d12,	// (0x00085d84) aid_dia3_listrow_size

0x9d22,	// (0x00085d94) dia3_keypad_fun_pane_ParamLimits

0x9d22,	// (0x00085d94) dia3_keypad_fun_pane

0x9d32,	// (0x00085da4) dia3_keypad_num_pane_ParamLimits

0x9d32,	// (0x00085da4) dia3_keypad_num_pane

0x9d42,	// (0x00085db4) dia3_listscroll_pane_ParamLimits

0x9d42,	// (0x00085db4) dia3_listscroll_pane

0x9d50,	// (0x00085dc2) dia3_numentry_pane_ParamLimits

0x9d50,	// (0x00085dc2) dia3_numentry_pane

0xeee3,	// (0x0008af55) dia3_list_pane

0xeeee,	// (0x0008af60) scroll_pane_cp12

0xa165,	// (0x000861d7) bg_dia3_numentry_pane

0x9d5e,	// (0x00085dd0) dia3_numentry_pane_t1

0x9d6d,	// (0x00085ddf) cell_dia3_key_num_pane

0x9d75,	// (0x00085de7) cell_dia3_key0_fun_pane_ParamLimits

0x9d75,	// (0x00085de7) cell_dia3_key0_fun_pane

0x9d82,	// (0x00085df4) cell_dia3_key1_fun_pane_ParamLimits

0x9d82,	// (0x00085df4) cell_dia3_key1_fun_pane

0x9d8f,	// (0x00085e01) dia3_listrow_pane

0xe17b,	// (0x0008a1ed) bg_dia3_numentry_pane_g1

0xa165,	// (0x000861d7) bg_button_pane_cp21

0xeef9,	// (0x0008af6b) cell_dia3_key_num_pane_t1

0xef07,	// (0x0008af79) cell_dia3_key_num_pane_t2

0xef16,	// (0x0008af88) cell_dia3_key_num_pane_t3

0xef25,	// (0x0008af97) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0008bf6a) cell_dia3_key_num_pane_t

0xa165,	// (0x000861d7) bg_button_pane_cp19

0x9d9c,	// (0x00085e0e) cell_dia3_key0_fun_pane_g1

0xa165,	// (0x000861d7) bg_button_pane_cp20

0x9da4,	// (0x00085e16) cell_dia3_key1_fun_pane_g1

0x9dac,	// (0x00085e1e) area_left_week_number_pane

0x9dbf,	// (0x00085e31) area_top_day_name_pane

0x9dcd,	// (0x00085e3f) frame_month_view_pane

0xef34,	// (0x0008afa6) grid_month_view_pane

0x9de2,	// (0x00085e54) cell_top_day_name_pane_ParamLimits

0x9de2,	// (0x00085e54) cell_top_day_name_pane

0x9dfe,	// (0x00085e70) cell_area_left_week_number_pane_ParamLimits

0x9dfe,	// (0x00085e70) cell_area_left_week_number_pane

0x9e1f,	// (0x00085e91) cell_month_view_pane_ParamLimits

0x9e1f,	// (0x00085e91) cell_month_view_pane

0xef42,	// (0x0008afb4) frm_month_g1

0x9e4b,	// (0x00085ebd) frm_month_g2

0x9e5c,	// (0x00085ece) frm_month_g3

0x9e6d,	// (0x00085edf) frm_month_g4

0x9e7e,	// (0x00085ef0) frm_month_g5

0x9e8f,	// (0x00085f01) frm_month_g6

0x9ea2,	// (0x00085f14) frm_month_g7

0xef4f,	// (0x0008afc1) frm_month_g8

0x9eb5,	// (0x00085f27) frm_month_g9

0x9ec2,	// (0x00085f34) frm_month_g10

0x9ecf,	// (0x00085f41) frm_month_g11

0x9edc,	// (0x00085f4e) frm_month_g12

0x9ee9,	// (0x00085f5b) frm_month_g13

0x9ef8,	// (0x00085f6a) frm_month_g14

0x9f07,	// (0x00085f79) frm_month_g15

0x9f16,	// (0x00085f88) frm_month_g16

0x000f,

0xff01,	// (0x0008bf73) frm_month_g

0xef5c,	// (0x0008afce) cell_top_day_name_pane_t1

0x9f25,	// (0x00085f97) cell_area_left_week_number_pane_g1

0x9f34,	// (0x00085fa6) cell_area_left_week_number_pane_t1

0xced2,	// (0x00088f44) cell_month_view_pane_g1

0x9f4a,	// (0x00085fbc) cell_month_view_pane_t1

0xa165,	// (0x000861d7) main_fps_pane

0xe716,	// (0x0008a788) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe716,	// (0x0008a788) cmail_ddmenu_btn02_pane_cp1

0xe732,	// (0x0008a7a4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe732,	// (0x0008a7a4) cmail_ddmenu_btn02_pane_cp2

0x9810,	// (0x00085882) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9810,	// (0x00085882) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0008be98) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0008be98) cmail_ddmenu_btn02_pane_g

0x982e,	// (0x000858a0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x982e,	// (0x000858a0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0008be9d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0008be9d) cmail_ddmenu_btn02_pane_t

0x9f60,	// (0x00085fd2) fps_text_pane_ParamLimits

0x9f60,	// (0x00085fd2) fps_text_pane

0x9f6d,	// (0x00085fdf) main_fps_pane_g1_ParamLimits

0x9f6d,	// (0x00085fdf) main_fps_pane_g1

0x9f79,	// (0x00085feb) wait_bar_pane_cp010_ParamLimits

0x9f79,	// (0x00085feb) wait_bar_pane_cp010

0x9f85,	// (0x00085ff7) fps_text_pane_t1_ParamLimits

0x9f85,	// (0x00085ff7) fps_text_pane_t1

0x7528,	// (0x0008359a) cam4_image_uncrop_pane_g1

0x7531,	// (0x000835a3) cam4_image_uncrop_pane_g2

0x753a,	// (0x000835ac) cam4_image_uncrop_pane_g3

0x7543,	// (0x000835b5) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0008b966) cam4_image_uncrop_pane_g

0x9d8f,	// (0x00085e01) dia3_listrow_pane_ParamLimits

0xa165,	// (0x000861d7) main_phob2_pane

0x9440,	// (0x000854b2) cell_tport_appsw_pane_cp02_ParamLimits

0x9440,	// (0x000854b2) cell_tport_appsw_pane_cp02

0x944f,	// (0x000854c1) cell_tport_appsw_pane_cp03_ParamLimits

0x944f,	// (0x000854c1) cell_tport_appsw_pane_cp03

0xa165,	// (0x000861d7) phob2_contact_card_pane

0xa165,	// (0x000861d7) phob2_listscroll_pane

0xef6f,	// (0x0008afe1) phob2_list_pane

0xef77,	// (0x0008afe9) scroll_pane_cp034

0x9f9e,	// (0x00086010) phob2_cc_data_pane_ParamLimits

0x9f9e,	// (0x00086010) phob2_cc_data_pane

0x9fba,	// (0x0008602c) phob2_cc_listscroll_pane_ParamLimits

0x9fba,	// (0x0008602c) phob2_cc_listscroll_pane

0x9fd6,	// (0x00086048) list_double_large_graphic_phob2_pane_ParamLimits

0x9fd6,	// (0x00086048) list_double_large_graphic_phob2_pane

0x9fee,	// (0x00086060) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fee,	// (0x00086060) list_double_large_graphic_phob2_pane_g1

0x1f09,	// (0x0007df7b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1f09,	// (0x0007df7b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0008bf94) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0008bf94) list_double_large_graphic_phob2_pane_g

0x1f15,	// (0x0007df87) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1f15,	// (0x0007df87) list_double_large_graphic_phob2_pane_t1

0x1f2a,	// (0x0007df9c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1f2a,	// (0x0007df9c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0008bf99) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0008bf99) list_double_large_graphic_phob2_pane_t

0xa165,	// (0x000861d7) list_highlight_pane_cp024

0xef7f,	// (0x0008aff1) phob2_cc_button_pane

0xa004,	// (0x00086076) phob2_cc_data_pane_g1_ParamLimits

0xa004,	// (0x00086076) phob2_cc_data_pane_g1

0xa010,	// (0x00086082) phob2_cc_data_pane_g2_ParamLimits

0xa010,	// (0x00086082) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0008bf9e) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0008bf9e) phob2_cc_data_pane_g

0xa01c,	// (0x0008608e) phob2_cc_data_pane_t1_ParamLimits

0xa01c,	// (0x0008608e) phob2_cc_data_pane_t1

0xa02e,	// (0x000860a0) phob2_cc_data_pane_t2_ParamLimits

0xa02e,	// (0x000860a0) phob2_cc_data_pane_t2

0xa040,	// (0x000860b2) phob2_cc_data_pane_t3_ParamLimits

0xa040,	// (0x000860b2) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0008bfa3) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0008bfa3) phob2_cc_data_pane_t

0xef87,	// (0x0008aff9) phob2_cc_list_pane_ParamLimits

0xef87,	// (0x0008aff9) phob2_cc_list_pane

0xda4d,	// (0x00089abf) scroll_pane_cp035_ParamLimits

0xda4d,	// (0x00089abf) scroll_pane_cp035

0xa89f,	// (0x00086911) bg_button_pane_cp033

0xef93,	// (0x0008b005) phob2_cc_button_pane_g1

0xef9f,	// (0x0008b011) phob2_cc_button_pane_t1

0xefb4,	// (0x0008b026) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0008bfaa) phob2_cc_button_pane_t

0xa052,	// (0x000860c4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa052,	// (0x000860c4) list_double_large_graphic_phob2_cc_pane

0xa06e,	// (0x000860e0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa06e,	// (0x000860e0) list_double_large_graphic_phob2_cc_pane_g1

0x1f3c,	// (0x0007dfae) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1f3c,	// (0x0007dfae) list_double_large_graphic_phob2_cc_pane_g2

0x1f4b,	// (0x0007dfbd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1f4b,	// (0x0007dfbd) list_double_large_graphic_phob2_cc_pane_g3

0x1f5a,	// (0x0007dfcc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1f5a,	// (0x0007dfcc) list_double_large_graphic_phob2_cc_pane_g4

0x1f6b,	// (0x0007dfdd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1f6b,	// (0x0007dfdd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0008bfaf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0008bfaf) list_double_large_graphic_phob2_cc_pane_g

0x1f7a,	// (0x0007dfec) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1f7a,	// (0x0007dfec) list_double_large_graphic_phob2_cc_pane_t1

0x1fa3,	// (0x0007e015) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1fa3,	// (0x0007e015) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0008bfba) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0008bfba) list_double_large_graphic_phob2_cc_pane_t

0xefda,	// (0x0008b04c) list_highlight_pane_cp025_ParamLimits

0xefda,	// (0x0008b04c) list_highlight_pane_cp025

0xa89f,	// (0x00086911) bg_button_pane_cp033_ParamLimits

0xef93,	// (0x0008b005) phob2_cc_button_pane_g1_ParamLimits

0xef9f,	// (0x0008b011) phob2_cc_button_pane_t1_ParamLimits

0xefb4,	// (0x0008b026) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0008bfaa) phob2_cc_button_pane_t_ParamLimits

0x224c,	// (0x0007e2be) popup_wgtman_window

0xd7a8,	// (0x0008981a) scroll_pane_cp038

0x9b7c,	// (0x00085bee) wgtman_btn_pane_cp_01_ParamLimits

0x9b7c,	// (0x00085bee) wgtman_btn_pane_cp_01

0xefe8,	// (0x0008b05a) wgtman_content_pane

0xeff1,	// (0x0008b063) wgtman_heading_pane

0xa165,	// (0x000861d7) bg_heading_pane_cp02

0xeffa,	// (0x0008b06c) wgtman_heading_pane_g1

0xf002,	// (0x0008b074) wgtman_heading_pane_t1

0xf010,	// (0x0008b082) scroll_pane_cp036

0xf018,	// (0x0008b08a) wgtman_list_pane

0xf020,	// (0x0008b092) wgtman_list_pane_t1_ParamLimits

0xf020,	// (0x0008b092) wgtman_list_pane_t1

0x7485,	// (0x000834f7) cam4_grid_pane

0x1266,	// (0x0007d2d8) bg_button_pane_cp015_ParamLimits

0x812a,	// (0x0008419c) bg_button_pane_cp016_ParamLimits

0x813d,	// (0x000841af) bg_button_pane_cp017_ParamLimits

0x12aa,	// (0x0007d31c) popup_vitu2_query_window_g3_ParamLimits

0x12aa,	// (0x0007d31c) popup_vitu2_query_window_g3

0x1323,	// (0x0007d395) popup_vitu2_query_window_t6_ParamLimits

0x1323,	// (0x0007d395) popup_vitu2_query_window_t6

0x134e,	// (0x0007d3c0) popup_vitu2_query_window_t7_ParamLimits

0x134e,	// (0x0007d3c0) popup_vitu2_query_window_t7

0xdbf4,	// (0x00089c66) cam4_grid_pane_g1

0xdbfd,	// (0x00089c6f) cam4_grid_pane_g2

0xf03a,	// (0x0008b0ac) cam4_grid_pane_g3

0xf043,	// (0x0008b0b5) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0008bfbf) cam4_grid_pane_g

0x331d,	// (0x0007f38f) aid_placing_vt_slider_lsc_ParamLimits

0x3650,	// (0x0007f6c2) vidtel_button_pane_ParamLimits

0x3650,	// (0x0007f6c2) vidtel_button_pane

0xf04e,	// (0x0008b0c0) bg_button_pane_cp034

0xa07f,	// (0x000860f1) vidtel_button_pane_g1

0xf058,	// (0x0008b0ca) vidtel_button_pane_t1

0xd8ac,	// (0x0008991e) aid_size_vtel_slider_touch

0xda4d,	// (0x00089abf) scroll_pane_cp039

0xe1b9,	// (0x0008a22b) ncim_query_button_pane_cp01_ParamLimits

0xe1d8,	// (0x0008a24a) ncimui_query_pane_g1_ParamLimits

0xa89f,	// (0x00086911) input_focus_pane_cp012_ParamLimits

0xe1fd,	// (0x0008a26f) ncim_query_entry_pane_t1_ParamLimits

0xda4d,	// (0x00089abf) scroll_pane_cp039_ParamLimits

0x47c0,	// (0x00080832) navi_pane_bcale_mc_g1

0x47c8,	// (0x0008083a) navi_pane_bcale_mc_t1

0xe77b,	// (0x0008a7ed) main_sp_fs_email_pane_g1

0xe787,	// (0x0008a7f9) main_sp_fs_email_pane_g2

0x0001,

0xfce4,	// (0x0008bd56) main_sp_fs_email_pane_g

0xea03,	// (0x0008aa75) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea03,	// (0x0008aa75) list_single_cale_mrui_row_pane_g3

0x1e20,	// (0x0007de92) list_single_recal_day_pane_g5_event_pane

0x1e36,	// (0x0007dea8) list_single_recal_day_pane_g7

0xf066,	// (0x0008b0d8) list_recal_day_event_pane_cp01

0xf06f,	// (0x0008b0e1) list_recal_vselct_arw_lo_pane_cp01

0xf077,	// (0x0008b0e9) list_recal_vselct_arw_up_pane_cp01

0xf07f,	// (0x0008b0f1) list_recal_vselct_pane_cp01

0xd8bc,	// (0x0008992e) list_recal_day_event_pane_cp01_g1

0x1fcc,	// (0x0007e03e) list_recal_day_event_pane_cp01_t1

0x1e3e,	// (0x0007deb0) list_single_recal_day_pane_t1_ParamLimits

0x1e50,	// (0x0007dec2) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0008bead) list_single_recal_day_pane_t_ParamLimits

0xa824,	// (0x00086896) bg_notes_pane_ParamLimits

0xa8f5,	// (0x00086967) list_notes_pane_ParamLimits

0x259b,	// (0x0007e60d) scroll_pane_cp06_ParamLimits

0xa917,	// (0x00086989) main_notes_pane_ParamLimits

0xa165,	// (0x000861d7) main_welc_pane

0xa087,	// (0x000860f9) main_welc_body_pane_ParamLimits

0xa087,	// (0x000860f9) main_welc_body_pane

0xa0a2,	// (0x00086114) main_welc_opti_pane_ParamLimits

0xa0a2,	// (0x00086114) main_welc_opti_pane

0xa0d7,	// (0x00086149) main_welc_pane_t1_ParamLimits

0xa0d7,	// (0x00086149) main_welc_pane_t1

0xa0f5,	// (0x00086167) main_welc_body_row_pane_ParamLimits

0xa0f5,	// (0x00086167) main_welc_body_row_pane

0xa10f,	// (0x00086181) main_welc_opti_row_pane_ParamLimits

0xa10f,	// (0x00086181) main_welc_opti_row_pane

0xf089,	// (0x0008b0fb) main_welc_opti_row_pane_g1

0xf091,	// (0x0008b103) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0008b112) main_welc_body_row_pane_t1

0xed55,	// (0x0008adc7) popup_notif_wgt_heading_pane

0xed6f,	// (0x0008ade1) aid_size_list_notif_wgt_del_ParamLimits

0xed7c,	// (0x0008adee) list_notif_wgt_row_pane_g1_ParamLimits

0xed88,	// (0x0008adfa) list_notif_wgt_row_pane_g2_ParamLimits

0xed94,	// (0x0008ae06) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0008bf14) list_notif_wgt_row_pane_g_ParamLimits

0xeda1,	// (0x0008ae13) list_notif_wgt_row_pane_t1_ParamLimits

0xedb6,	// (0x0008ae28) list_notif_wgt_row_pane_t2_ParamLimits

0xedc8,	// (0x0008ae3a) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0008bf1b) list_notif_wgt_row_pane_t_ParamLimits

0x9c04,	// (0x00085c76) listrow_wgtman_pane_g1_ParamLimits

0x9c11,	// (0x00085c83) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0008bf44) listrow_wgtman_pane_g_ParamLimits

0x1eb9,	// (0x0007df2b) listrow_wgtman_pane_t1_ParamLimits

0x1ed1,	// (0x0007df43) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0008bf49) listrow_wgtman_pane_t_ParamLimits

0x1ef7,	// (0x0007df69) wait_bar_pane_cp09_ParamLimits

0xa165,	// (0x000861d7) bg_popup_heading_pane_cp02

0xf0af,	// (0x0008b121) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0008b129) popup_notif_wgt_heading_pane_t1

0xa165,	// (0x000861d7) main_vids_pane

0xa165,	// (0x000861d7) vids_listscroll_pane

0xa120,	// (0x00086192) scroll_pane_cp040

0xa165,	// (0x000861d7) vids_list_pane

0xa12b,	// (0x0008619d) vids_list_double_pane_ParamLimits

0xa12b,	// (0x0008619d) vids_list_double_pane

0xa13e,	// (0x000861b0) vids_list_double_pane_g1

0xa147,	// (0x000861b9) vids_list_double_pane_t1

0xa157,	// (0x000861c9) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0008bfcd) vids_list_double_pane_t

0xa89f,	// (0x00086911) main_ncimui_pane_ParamLimits

0x8c93,	// (0x00084d05) main_ncimui_pane_g1_ParamLimits

0x8ca1,	// (0x00084d13) main_ncimui_pane_g2_ParamLimits

0x8ca1,	// (0x00084d13) main_ncimui_pane_g2

0x0001,

0xfbe9,	// (0x0008bc5b) main_ncimui_pane_g_ParamLimits

0xfbe9,	// (0x0008bc5b) main_ncimui_pane_g

0xa0bd,	// (0x0008612f) main_welc_pane_g1_ParamLimits

0xa0bd,	// (0x0008612f) main_welc_pane_g1

0xa0c9,	// (0x0008613b) main_welc_pane_g2_ParamLimits

0xa0c9,	// (0x0008613b) main_welc_pane_g2

0x0001,

0xff56,	// (0x0008bfc8) main_welc_pane_g_ParamLimits

0xff56,	// (0x0008bfc8) main_welc_pane_g

0xa824,	// (0x00086896) listscroll_mce_pane_ParamLimits

0x488a,	// (0x000808fc) wait_bar_pane_cp10

0xc83d,	// (0x000888af) main_cale_day_pane_ParamLimits

0xc83d,	// (0x000888af) main_cale_week_pane_ParamLimits

0xa824,	// (0x00086896) main_messa_pane_ParamLimits

0x688d,	// (0x000828ff) main_clock2_btn_pane_ParamLimits

0x688d,	// (0x000828ff) main_clock2_btn_pane

0xd05a,	// (0x000890cc) main_clock2_btn_pane_cp01_ParamLimits

0xd05a,	// (0x000890cc) main_clock2_btn_pane_cp01

0xe9d4,	// (0x0008aa46) list_cale_mrui_pane_ParamLimits

0xee0c,	// (0x0008ae7e) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0008bf22) main_cf0_pane_g

0x9dac,	// (0x00085e1e) area_left_week_number_pane_ParamLimits

0x9dbf,	// (0x00085e31) area_top_day_name_pane_ParamLimits

0x9dcd,	// (0x00085e3f) frame_month_view_pane_ParamLimits

0xef34,	// (0x0008afa6) grid_month_view_pane_ParamLimits

0xef42,	// (0x0008afb4) frm_month_g1_ParamLimits

0x9e4b,	// (0x00085ebd) frm_month_g2_ParamLimits

0x9e5c,	// (0x00085ece) frm_month_g3_ParamLimits

0x9e6d,	// (0x00085edf) frm_month_g4_ParamLimits

0x9e7e,	// (0x00085ef0) frm_month_g5_ParamLimits

0x9e8f,	// (0x00085f01) frm_month_g6_ParamLimits

0x9ea2,	// (0x00085f14) frm_month_g7_ParamLimits

0xef4f,	// (0x0008afc1) frm_month_g8_ParamLimits

0x9eb5,	// (0x00085f27) frm_month_g9_ParamLimits

0x9ec2,	// (0x00085f34) frm_month_g10_ParamLimits

0x9ecf,	// (0x00085f41) frm_month_g11_ParamLimits

0x9edc,	// (0x00085f4e) frm_month_g12_ParamLimits

0x9ee9,	// (0x00085f5b) frm_month_g13_ParamLimits

0x9ef8,	// (0x00085f6a) frm_month_g14_ParamLimits

0x9f07,	// (0x00085f79) frm_month_g15_ParamLimits

0x9f16,	// (0x00085f88) frm_month_g16_ParamLimits

0xff01,	// (0x0008bf73) frm_month_g_ParamLimits

0xef5c,	// (0x0008afce) cell_top_day_name_pane_t1_ParamLimits

0x9f25,	// (0x00085f97) cell_area_left_week_number_pane_g1_ParamLimits

0x9f34,	// (0x00085fa6) cell_area_left_week_number_pane_t1_ParamLimits

0xced2,	// (0x00088f44) cell_month_view_pane_g1_ParamLimits

0x9f4a,	// (0x00085fbc) cell_month_view_pane_t1_ParamLimits

0xa81c,	// (0x0008688e) main_clock2_btn_pane_g1

0xf0c5,	// (0x0008b137) main_clock2_btn_pane_t1

0xa89f,	// (0x00086911) listscroll_cmail_pane_ParamLimits

0xe77b,	// (0x0008a7ed) main_sp_fs_email_pane_g1_ParamLimits

0xe787,	// (0x0008a7f9) main_sp_fs_email_pane_g2_ParamLimits

0xfce4,	// (0x0008bd56) main_sp_fs_email_pane_g_ParamLimits

0xeadf,	// (0x0008ab51) list_recal_day_pane_ParamLimits

0xeaf0,	// (0x0008ab62) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
