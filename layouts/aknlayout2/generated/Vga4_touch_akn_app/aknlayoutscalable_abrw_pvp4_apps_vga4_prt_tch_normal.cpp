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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001efed };

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
0x246f,	// (0x0002145c) Screen

0x247b,	// (0x00021468) application_window

0x2487,	// (0x00021474) area_bottom_pane_ParamLimits

0x2487,	// (0x00021474) area_bottom_pane

0x0a40,	// (0x0001fa2d) area_top_pane_ParamLimits

0x0a40,	// (0x0001fa2d) area_top_pane

0x0aa4,	// (0x0001fa91) call_video_uplink_pane_ParamLimits

0x0aa4,	// (0x0001fa91) call_video_uplink_pane

0x0ae3,	// (0x0001fad0) main_pane_ParamLimits

0x0ae3,	// (0x0001fad0) main_pane

0xc5b8,	// (0x0002b5a5) context_pane

0x5359,	// (0x00024346) navi_pane

0x5381,	// (0x0002436e) popup_cale_events_window_ParamLimits

0x5381,	// (0x0002436e) popup_cale_events_window

0xc5cb,	// (0x0002b5b8) popup_mup_playback_window

0x5399,	// (0x00024386) signal_pane

0xa52e,	// (0x0002951b) main_browser_pane

0xa6d6,	// (0x000296c3) main_burst_pane

0x1104,	// (0x000200f1) main_calc_pane

0xc59e,	// (0x0002b58b) main_cale_day_pane

0x1111,	// (0x000200fe) main_cale_month_pane

0xc59e,	// (0x0002b58b) main_cale_week_pane

0xa6d6,	// (0x000296c3) main_call_pane

0xa20e,	// (0x000291fb) main_call_poc_pane

0xa6d6,	// (0x000296c3) main_camera_pane

0xa6d6,	// (0x000296c3) main_chi_dic_pane

0xaeeb,	// (0x00029ed8) main_clock_pane

0xa20e,	// (0x000291fb) main_fmradio_pane

0xa6d6,	// (0x000296c3) main_graph_messa_pane

0xa20e,	// (0x000291fb) main_help_pane

0xa52e,	// (0x0002951b) main_im_pane

0xa469,	// (0x00029456) main_image_pane_ParamLimits

0xa469,	// (0x00029456) main_image_pane

0xa20e,	// (0x000291fb) main_location2_pane

0xa6d6,	// (0x000296c3) main_location_pane

0xa469,	// (0x00029456) main_messa_pane

0xa20e,	// (0x000291fb) main_mp2_pane

0xa6d6,	// (0x000296c3) main_mp_pane

0xa20e,	// (0x000291fb) main_msg_pane

0xa20e,	// (0x000291fb) main_mup_eq_pane

0xa20e,	// (0x000291fb) main_mup_pane

0xa52e,	// (0x0002951b) main_notes_pane

0xa20e,	// (0x000291fb) main_pec_pane

0xa20e,	// (0x000291fb) main_phob_pane

0xa20e,	// (0x000291fb) main_pinb_pane

0xa20e,	// (0x000291fb) main_postcard_pane

0xa20e,	// (0x000291fb) main_qdial_pane

0xa6d6,	// (0x000296c3) main_skin_pane

0xa20e,	// (0x000291fb) main_smil2_pane

0xa6d6,	// (0x000296c3) main_smil_pane

0xa6d6,	// (0x000296c3) main_video_pane

0xa6d6,	// (0x000296c3) main_video_tele_pane

0xa469,	// (0x00029456) main_viewer_pane_ParamLimits

0xa469,	// (0x00029456) main_viewer_pane

0xa6d6,	// (0x000296c3) main_vorec_pane

0x1164,	// (0x00020151) popup_blid_sat_info_window_ParamLimits

0x1164,	// (0x00020151) popup_blid_sat_info_window

0x118a,	// (0x00020177) popup_dyc_status_message_window_ParamLimits

0x118a,	// (0x00020177) popup_dyc_status_message_window

0x119a,	// (0x00020187) popup_grid_large_graphic_window_ParamLimits

0x119a,	// (0x00020187) popup_grid_large_graphic_window

0x122f,	// (0x0002021c) popup_loc_request_window_ParamLimits

0x122f,	// (0x0002021c) popup_loc_request_window

0x1288,	// (0x00020275) popup_wml_address_window_ParamLimits

0x1288,	// (0x00020275) popup_wml_address_window

0x523b,	// (0x00024228) call_muted_g1

0x4efa,	// (0x00023ee7) popup_call_audio_conf_window_ParamLimits

0x4efa,	// (0x00023ee7) popup_call_audio_conf_window

0x524b,	// (0x00024238) popup_call_audio_first_window_ParamLimits

0x524b,	// (0x00024238) popup_call_audio_first_window

0x528b,	// (0x00024278) popup_call_audio_in_window_ParamLimits

0x528b,	// (0x00024278) popup_call_audio_in_window

0x52af,	// (0x0002429c) popup_call_audio_out_window_ParamLimits

0x52af,	// (0x0002429c) popup_call_audio_out_window

0x52d1,	// (0x000242be) popup_call_audio_second_window_ParamLimits

0x52d1,	// (0x000242be) popup_call_audio_second_window

0x5301,	// (0x000242ee) popup_call_audio_wait_window_ParamLimits

0x5301,	// (0x000242ee) popup_call_audio_wait_window

0x5322,	// (0x0002430f) popup_number_entry_window_ParamLimits

0x5322,	// (0x0002430f) popup_number_entry_window

0x9dc6,	// (0x00028db3) bg_popup_call_pane_cp05_ParamLimits

0x9dc6,	// (0x00028db3) bg_popup_call_pane_cp05

0x9de6,	// (0x00028dd3) popup_number_entry_window_t1

0x9df9,	// (0x00028de6) popup_number_entry_window_t2

0x9e0b,	// (0x00028df8) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0002e09c) popup_number_entry_window_t

0x9e52,	// (0x00028e3f) text_title_cp2

0x9e65,	// (0x00028e52) bg_popup_call_pane_cp_ParamLimits

0x9e65,	// (0x00028e52) bg_popup_call_pane_cp

0x9e73,	// (0x00028e60) call_thumbnail_pane

0x9e7b,	// (0x00028e68) popup_call_audio_in_window_g1_ParamLimits

0x9e7b,	// (0x00028e68) popup_call_audio_in_window_g1

0x9e87,	// (0x00028e74) popup_call_audio_in_window_g2_ParamLimits

0x9e87,	// (0x00028e74) popup_call_audio_in_window_g2

0x9e93,	// (0x00028e80) popup_call_audio_in_window_g3_ParamLimits

0x9e93,	// (0x00028e80) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0002e0a5) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0002e0a5) popup_call_audio_in_window_g

0x9e9f,	// (0x00028e8c) popup_call_audio_in_window_t1_ParamLimits

0x9e9f,	// (0x00028e8c) popup_call_audio_in_window_t1

0x9ebb,	// (0x00028ea8) popup_call_audio_in_window_t2_ParamLimits

0x9ebb,	// (0x00028ea8) popup_call_audio_in_window_t2

0x9ed7,	// (0x00028ec4) popup_call_audio_in_window_t3_ParamLimits

0x9ed7,	// (0x00028ec4) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0002e0ac) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0002e0ac) popup_call_audio_in_window_t

0x9e65,	// (0x00028e52) bg_popup_call_pane_cp01_ParamLimits

0x9e65,	// (0x00028e52) bg_popup_call_pane_cp01

0x9e73,	// (0x00028e60) call_thumbnail_pane_cp02

0x9eea,	// (0x00028ed7) call_type_pane_cp022

0x9ef2,	// (0x00028edf) popup_call_audio_out_window_g1_ParamLimits

0x9ef2,	// (0x00028edf) popup_call_audio_out_window_g1

0x9f04,	// (0x00028ef1) popup_call_audio_out_window_g2_ParamLimits

0x9f04,	// (0x00028ef1) popup_call_audio_out_window_g2

0x9f10,	// (0x00028efd) popup_call_audio_out_window_g3_ParamLimits

0x9f10,	// (0x00028efd) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0002e0b3) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0002e0b3) popup_call_audio_out_window_g

0x9f22,	// (0x00028f0f) popup_call_audio_out_window_t1_ParamLimits

0x9f22,	// (0x00028f0f) popup_call_audio_out_window_t1

0x9f3a,	// (0x00028f27) popup_call_audio_out_window_t2_ParamLimits

0x9f3a,	// (0x00028f27) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0002e0ba) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0002e0ba) popup_call_audio_out_window_t

0x9f4f,	// (0x00028f3c) bg_popup_call_pane_ParamLimits

0x9f4f,	// (0x00028f3c) bg_popup_call_pane

0x24c8,	// (0x000214b5) call_thumbnail_pane_cp_ParamLimits

0x24c8,	// (0x000214b5) call_thumbnail_pane_cp

0x9fd3,	// (0x00028fc0) call_type_pane_cp01_ParamLimits

0x9fd3,	// (0x00028fc0) call_type_pane_cp01

0xa017,	// (0x00029004) popup_call_audio_first_window_g1_ParamLimits

0xa017,	// (0x00029004) popup_call_audio_first_window_g1

0xa063,	// (0x00029050) popup_call_audio_first_window_g2_ParamLimits

0xa063,	// (0x00029050) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0002e0bf) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0002e0bf) popup_call_audio_first_window_g

0xa0a7,	// (0x00029094) popup_call_audio_first_window_t1_ParamLimits

0xa0a7,	// (0x00029094) popup_call_audio_first_window_t1

0xa153,	// (0x00029140) popup_call_audio_first_window_t4_ParamLimits

0xa153,	// (0x00029140) popup_call_audio_first_window_t4

0xa1df,	// (0x000291cc) popup_call_audio_first_window_t5_ParamLimits

0xa1df,	// (0x000291cc) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0002e0c4) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0002e0c4) popup_call_audio_first_window_t

0xa20e,	// (0x000291fb) bg_popup_call_pane_cp02

0xa218,	// (0x00029205) call_type_pane_cp023

0xa220,	// (0x0002920d) popup_call_audio_wait_window_g1

0xa228,	// (0x00029215) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0002e0cb) popup_call_audio_wait_window_g

0xa230,	// (0x0002921d) popup_call_audio_wait_window_t3

0xa23e,	// (0x0002922b) bg_popup_call_pane_cp03_ParamLimits

0xa23e,	// (0x0002922b) bg_popup_call_pane_cp03

0xa29e,	// (0x0002928b) call_thumbnail_pane_cp011_ParamLimits

0xa29e,	// (0x0002928b) call_thumbnail_pane_cp011

0xa2aa,	// (0x00029297) call_type_pane_cp034_ParamLimits

0xa2aa,	// (0x00029297) call_type_pane_cp034

0xa2e6,	// (0x000292d3) popup_call_audio_second_window_g1_ParamLimits

0xa2e6,	// (0x000292d3) popup_call_audio_second_window_g1

0xa322,	// (0x0002930f) popup_call_audio_second_window_g2_ParamLimits

0xa322,	// (0x0002930f) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0002e0d0) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0002e0d0) popup_call_audio_second_window_g

0xa35e,	// (0x0002934b) popup_call_audio_second_window_t1_ParamLimits

0xa35e,	// (0x0002934b) popup_call_audio_second_window_t1

0xa3df,	// (0x000293cc) popup_call_audio_second_window_t2_ParamLimits

0xa3df,	// (0x000293cc) popup_call_audio_second_window_t2

0xa415,	// (0x00029402) popup_call_audio_second_window_t3_ParamLimits

0xa415,	// (0x00029402) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0002e0d5) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0002e0d5) popup_call_audio_second_window_t

0xa20e,	// (0x000291fb) bg_popup_call_pane_cp04

0xa44b,	// (0x00029438) list_conf_pane

0xa453,	// (0x00029440) popup_call_audio_conf_window_t1

0xa461,	// (0x0002944e) call_thumbnail_pane_g1

0xa469,	// (0x00029456) bg_pinb_pane_ParamLimits

0xa469,	// (0x00029456) bg_pinb_pane

0xa477,	// (0x00029464) find_pinb_pane

0xa480,	// (0x0002946d) listscroll_pinb_pane_ParamLimits

0xa480,	// (0x0002946d) listscroll_pinb_pane

0xa48f,	// (0x0002947c) pinb_bg_pane_g1

0x24ec,	// (0x000214d9) pinb_bg_pane_g2

0x24f8,	// (0x000214e5) pinb_bg_pane_g3

0x2504,	// (0x000214f1) pinb_bg_pane_g4

0x2510,	// (0x000214fd) pinb_bg_pane_g5

0x251c,	// (0x00021509) pinb_bg_pane_g6

0x2527,	// (0x00021514) pinb_bg_pane_g7

0x2532,	// (0x0002151f) pinb_bg_pane_g8

0x253d,	// (0x0002152a) pinb_bg_pane_g9

0x2547,	// (0x00021534) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0002e0dc) pinb_bg_pane_g

0x2564,	// (0x00021551) grid_pinb_pane

0x256f,	// (0x0002155c) list_pinb_pane

0x257a,	// (0x00021567) scroll_pane_cp01_ParamLimits

0x257a,	// (0x00021567) scroll_pane_cp01

0xa499,	// (0x00029486) find_pinb_pane_g1_ParamLimits

0xa499,	// (0x00029486) find_pinb_pane_g1

0xa4b1,	// (0x0002949e) find_pinb_pane_t1

0xa4c3,	// (0x000294b0) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0002e0f6) find_pinb_pane_t

0xa4d8,	// (0x000294c5) input_focus_pane_cp01_ParamLimits

0xa4d8,	// (0x000294c5) input_focus_pane_cp01

0x258c,	// (0x00021579) cell_pinb_pane_ParamLimits

0x258c,	// (0x00021579) cell_pinb_pane

0x25b1,	// (0x0002159e) cell_pinb_pane_g1_ParamLimits

0x25b1,	// (0x0002159e) cell_pinb_pane_g1

0x25c6,	// (0x000215b3) cell_pinb_pane_g2_ParamLimits

0x25c6,	// (0x000215b3) cell_pinb_pane_g2

0xa4e4,	// (0x000294d1) cell_pinb_pane_g3_ParamLimits

0xa4e4,	// (0x000294d1) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0002e0fb) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0002e0fb) cell_pinb_pane_g

0xa20e,	// (0x000291fb) grid_highlight_pane_cp01

0x25d2,	// (0x000215bf) list_pinb_item_pane_ParamLimits

0x25d2,	// (0x000215bf) list_pinb_item_pane

0xa20e,	// (0x000291fb) list_highlight_pane_cp02

0x25f0,	// (0x000215dd) list_pinb_item_pane_g1_ParamLimits

0x25f0,	// (0x000215dd) list_pinb_item_pane_g1

0x25fd,	// (0x000215ea) list_pinb_item_pane_g2_ParamLimits

0x25fd,	// (0x000215ea) list_pinb_item_pane_g2

0x2609,	// (0x000215f6) list_pinb_item_pane_g3_ParamLimits

0x2609,	// (0x000215f6) list_pinb_item_pane_g3

0x261a,	// (0x00021607) list_pinb_item_pane_g4_ParamLimits

0x261a,	// (0x00021607) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0002e102) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0002e102) list_pinb_item_pane_g

0x2626,	// (0x00021613) list_pinb_item_pane_t1_ParamLimits

0x2626,	// (0x00021613) list_pinb_item_pane_t1

0x0cd4,	// (0x0001fcc1) calc_display_pane

0x0cf2,	// (0x0001fcdf) calc_paper_pane

0x0d0e,	// (0x0001fcfb) grid_calc_pane

0xa20e,	// (0x000291fb) bg_list_pane_cp01

0x263d,	// (0x0002162a) clock_g1

0x2645,	// (0x00021632) clock_g2

0x0001,

0xf11e,	// (0x0002e10b) clock_g

0x264f,	// (0x0002163c) clock_t1_ParamLimits

0x264f,	// (0x0002163c) clock_t1

0x2664,	// (0x00021651) clock_t2_ParamLimits

0x2664,	// (0x00021651) clock_t2

0x2676,	// (0x00021663) clock_t3_ParamLimits

0x2676,	// (0x00021663) clock_t3

0x2688,	// (0x00021675) clock_t4_ParamLimits

0x2688,	// (0x00021675) clock_t4

0x269a,	// (0x00021687) clock_t5_ParamLimits

0x269a,	// (0x00021687) clock_t5

0x26af,	// (0x0002169c) clock_t6_ParamLimits

0x26af,	// (0x0002169c) clock_t6

0x26c1,	// (0x000216ae) clock_t7_ParamLimits

0x26c1,	// (0x000216ae) clock_t7

0x26d3,	// (0x000216c0) clock_t8_ParamLimits

0x26d3,	// (0x000216c0) clock_t8

0x26e9,	// (0x000216d6) clock_t9_ParamLimits

0x26e9,	// (0x000216d6) clock_t9

0x0008,

0xf123,	// (0x0002e110) clock_t_ParamLimits

0xf123,	// (0x0002e110) clock_t

0xa4f0,	// (0x000294dd) popup_clock_analogue_window_cp02

0xa4f0,	// (0x000294dd) popup_clock_digital_window_cp01

0xa4f8,	// (0x000294e5) listscroll_help_pane

0xa20e,	// (0x000291fb) phob_pre_status_pane

0xa502,	// (0x000294ef) grid_qdial_pane

0xa469,	// (0x00029456) listscroll_mce_pane

0xa469,	// (0x00029456) bg_notes_pane

0xa50c,	// (0x000294f9) list_notes_pane

0x26ff,	// (0x000216ec) scroll_pane_cp06

0xa51a,	// (0x00029507) bg_calc_paper_pane

0x0d3a,	// (0x0001fd27) list_calc_pane

0xa52e,	// (0x0002951b) bg_calc_display_pane

0x0d54,	// (0x0001fd41) calc_display_pane_t1

0x0d69,	// (0x0001fd56) calc_display_pane_t2

0x0d7e,	// (0x0001fd6b) calc_display_pane_t3

0x0002,

0xf136,	// (0x0002e123) calc_display_pane_t

0x0d90,	// (0x0001fd7d) cell_calc_pane_ParamLimits

0x0d90,	// (0x0001fd7d) cell_calc_pane

0xa53a,	// (0x00029527) bg_calc_paper_pane_g1

0xa546,	// (0x00029533) bg_calc_paper_pane_g2

0xa552,	// (0x0002953f) bg_calc_paper_pane_g3

0xa55e,	// (0x0002954b) bg_calc_paper_pane_g4

0xa56a,	// (0x00029557) bg_calc_paper_pane_g5

0x270e,	// (0x000216fb) bg_calc_paper_pane_g6

0x271f,	// (0x0002170c) bg_calc_paper_pane_g7

0x2730,	// (0x0002171d) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0002e12a) bg_calc_paper_pane_g

0x2741,	// (0x0002172e) calc_bg_paper_pane_g9

0x2752,	// (0x0002173f) list_calc_item_pane_ParamLimits

0x2752,	// (0x0002173f) list_calc_item_pane

0xa576,	// (0x00029563) list_calc_item_pane_g1

0x0dbf,	// (0x0001fdac) list_calc_item_pane_t1_ParamLimits

0x0dbf,	// (0x0001fdac) list_calc_item_pane_t1

0x0dd1,	// (0x0001fdbe) list_calc_item_pane_t2_ParamLimits

0x0dd1,	// (0x0001fdbe) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0002e13b) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0002e13b) list_calc_item_pane_t

0xa583,	// (0x00029570) cell_calc_pane_g1

0xa58d,	// (0x0002957a) grid_highlight_pane_cp02

0xd253,	// (0x0002c240) bg_calc_display_pane_g1

0x0e01,	// (0x0001fdee) bg_calc_display_pane_g2

0xd25c,	// (0x0002c249) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0002e145) bg_calc_display_pane_g

0x0e0b,	// (0x0001fdf8) cell_qdial_pane_ParamLimits

0x0e0b,	// (0x0001fdf8) cell_qdial_pane

0x2773,	// (0x00021760) cell_qdial_pane_g1_ParamLimits

0x2773,	// (0x00021760) cell_qdial_pane_g1

0x2780,	// (0x0002176d) cell_qdial_pane_g2_ParamLimits

0x2780,	// (0x0002176d) cell_qdial_pane_g2

0xa5af,	// (0x0002959c) cell_qdial_pane_g3_ParamLimits

0xa5af,	// (0x0002959c) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0002e14c) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0002e14c) cell_qdial_pane_g

0x279e,	// (0x0002178b) cell_qdial_pane_t1_ParamLimits

0x279e,	// (0x0002178b) cell_qdial_pane_t1

0x27b6,	// (0x000217a3) cell_qdial_pane_t2_ParamLimits

0x27b6,	// (0x000217a3) cell_qdial_pane_t2

0x27c9,	// (0x000217b6) cell_qdial_pane_t3_ParamLimits

0x27c9,	// (0x000217b6) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0002e155) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0002e155) cell_qdial_pane_t

0xa20e,	// (0x000291fb) grid_highlight_pane_cp04

0xa5bb,	// (0x000295a8) thumbnail_qdial_pane_ParamLimits

0xa5bb,	// (0x000295a8) thumbnail_qdial_pane

0xa617,	// (0x00029604) list_help_pane

0xa620,	// (0x0002960d) scroll_pane_cp02

0x27dc,	// (0x000217c9) help_list_pane_t1_ParamLimits

0x27dc,	// (0x000217c9) help_list_pane_t1

0x0e21,	// (0x0001fe0e) bg_notes_pane_g2

0x0e29,	// (0x0001fe16) bg_notes_pane_g3

0x0e31,	// (0x0001fe1e) notes_bg_pane_g1

0x0e39,	// (0x0001fe26) notes_bg_pane_g4

0x0e41,	// (0x0001fe2e) notes_bg_pane_g5

0x0e49,	// (0x0001fe36) notes_bg_pane_g6

0x0e51,	// (0x0001fe3e) notes_bg_pane_g7

0x0e59,	// (0x0001fe46) notes_bg_pane_g8

0x0e61,	// (0x0001fe4e) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0002e173) notes_bg_pane_g

0x2803,	// (0x000217f0) list_notes_text_pane_ParamLimits

0x2803,	// (0x000217f0) list_notes_text_pane

0xa629,	// (0x00029616) list_notes_text_pane_g1

0x282b,	// (0x00021818) list_notes_text_pane_t1

0x2839,	// (0x00021826) listscroll_cale_week_pane

0x2865,	// (0x00021852) bg_cale_heading_pane

0x288e,	// (0x0002187b) bg_cale_pane_cp01

0x28b0,	// (0x0002189d) cale_week_corner_pane

0x28cf,	// (0x000218bc) cale_week_day_heading_pane

0x28fd,	// (0x000218ea) cale_week_scroll_pane_g1

0x2921,	// (0x0002190e) cale_week_scroll_pane_g2

0x2939,	// (0x00021926) cale_week_scroll_pane_g3

0x2951,	// (0x0002193e) cale_week_scroll_pane_g4

0x2969,	// (0x00021956) cale_week_scroll_pane_g5

0x2981,	// (0x0002196e) cale_week_scroll_pane_g6

0x29a1,	// (0x0002198e) cale_week_scroll_pane_g7

0x29c1,	// (0x000219ae) cale_week_scroll_pane_g8

0x29e1,	// (0x000219ce) cale_week_scroll_pane_g9

0x29fe,	// (0x000219eb) cale_week_scroll_pane_g10

0x2a1b,	// (0x00021a08) cale_week_scroll_pane_g11

0x2a3a,	// (0x00021a27) cale_week_scroll_pane_g12

0x2a5f,	// (0x00021a4c) cale_week_scroll_pane_g13

0x2a88,	// (0x00021a75) cale_week_scroll_pane_g14

0x2ab1,	// (0x00021a9e) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0002e182) cale_week_scroll_pane_g

0x2afa,	// (0x00021ae7) cale_week_time_pane

0x2b1a,	// (0x00021b07) grid_cale_week_pane

0xa65e,	// (0x0002964b) scroll_pane_cp08

0x2b4b,	// (0x00021b38) cell_cale_week_pane_ParamLimits

0x2b4b,	// (0x00021b38) cell_cale_week_pane

0x2bdb,	// (0x00021bc8) cale_week_day_heading_pane_t1

0x2c03,	// (0x00021bf0) cale_week_day_heading_pane_t2

0x2c30,	// (0x00021c1d) cale_week_day_heading_pane_t3

0x2c5d,	// (0x00021c4a) cale_week_day_heading_pane_t4

0x2c8a,	// (0x00021c77) cale_week_day_heading_pane_t5

0x2cb7,	// (0x00021ca4) cale_week_day_heading_pane_t6

0x2ce4,	// (0x00021cd1) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0002e1a3) cale_week_day_heading_pane_t

0xa67b,	// (0x00029668) bg_cale_side_pane

0x0e69,	// (0x0001fe56) cale_week_time_pane_t1

0x0e8d,	// (0x0001fe7a) cale_week_time_pane_t2

0x0eb1,	// (0x0001fe9e) cale_week_time_pane_t3

0x0ed5,	// (0x0001fec2) cale_week_time_pane_t4

0x0ef9,	// (0x0001fee6) cale_week_time_pane_t5

0x0f1f,	// (0x0001ff0c) cale_week_time_pane_t6

0x0f47,	// (0x0001ff34) cale_week_time_pane_t7

0x0f73,	// (0x0001ff60) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0002e1b2) cale_week_time_pane_t

0x2d0c,	// (0x00021cf9) cell_cale_week_pane_g2

0x2d30,	// (0x00021d1d) cell_cale_week_pane_g3_ParamLimits

0x2d30,	// (0x00021d1d) cell_cale_week_pane_g3

0xa689,	// (0x00029676) grid_highlight_pane_cp07

0xa691,	// (0x0002967e) listscroll_gms_pane

0xa69b,	// (0x00029688) grid_gms_pane

0xa6a4,	// (0x00029691) listscroll_gms_pane_g1

0xa6ac,	// (0x00029699) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0002e1c3) listscroll_gms_pane_g

0x2d48,	// (0x00021d35) scroll_pane_cp010

0x2d53,	// (0x00021d40) cell_gms_pane_ParamLimits

0x2d53,	// (0x00021d40) cell_gms_pane

0x2d66,	// (0x00021d53) cell_gms_pane_g1

0xa6b4,	// (0x000296a1) cell_gms_pane_g2

0xa6bc,	// (0x000296a9) cell_gms_pane_g3

0xa6c5,	// (0x000296b2) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0002e1c8) cell_gms_pane_g

0xa6ce,	// (0x000296bb) grid_highlight_pane_cp09

0x51e3,	// (0x000241d0) phob_pre_status_pane_g1

0x51eb,	// (0x000241d8) phob_pre_status_pane_g2

0x51f3,	// (0x000241e0) phob_pre_status_pane_g3

0x51fb,	// (0x000241e8) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0002e5b3) phob_pre_status_pane_g

0x520b,	// (0x000241f8) phob_pre_status_pane_t1

0x521b,	// (0x00024208) phob_pre_status_pane_t2

0x522b,	// (0x00024218) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0002e5be) phob_pre_status_pane_t

0xa6d6,	// (0x000296c3) bg_list_pane_cp05

0x2d76,	// (0x00021d63) grid_vorec_pane

0x2d80,	// (0x00021d6d) vorec_t1

0x2d8e,	// (0x00021d7b) vorec_t2

0x2d9c,	// (0x00021d89) vorec_t3

0x2daa,	// (0x00021d97) vorec_t4

0x2449,	// (0x00021436) vorec_t5

0x2457,	// (0x00021444) vorec_t6

0x0004,

0xf1e4,	// (0x0002e1d1) vorec_t

0x2465,	// (0x00021452) wait_bar_pane_cp01

0x2dc6,	// (0x00021db3) cell_vorec_pane_ParamLimits

0x2dc6,	// (0x00021db3) cell_vorec_pane

0x0fa3,	// (0x0001ff90) cell_vorec_pane_g1

0xa20e,	// (0x000291fb) grid_highlight_pane_cp05

0x2de9,	// (0x00021dd6) cams_zoom_pane

0x2df5,	// (0x00021de2) image_vga_pane

0x2e04,	// (0x00021df1) main_camera_pane_g1

0x2e12,	// (0x00021dff) main_camera_pane_g2

0x2e1e,	// (0x00021e0b) main_camera_pane_g3

0x2e2c,	// (0x00021e19) main_camera_pane_g4

0x2e3a,	// (0x00021e27) main_camera_pane_g5

0x2e48,	// (0x00021e35) main_camera_pane_g6

0x2e56,	// (0x00021e43) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0002e1dc) main_camera_pane_g

0x2e64,	// (0x00021e51) main_camera_pane_t1

0x2e76,	// (0x00021e63) main_camera_pane_t2

0x0001,

0xf200,	// (0x0002e1ed) main_camera_pane_t

0x2e99,	// (0x00021e86) cams_zoom_pane_cp_ParamLimits

0x2e99,	// (0x00021e86) cams_zoom_pane_cp

0x2ebd,	// (0x00021eaa) image_cif_pane_ParamLimits

0x2ebd,	// (0x00021eaa) image_cif_pane

0x2edb,	// (0x00021ec8) image_subqcif_pane

0x2ee5,	// (0x00021ed2) main_video_pane_g1_ParamLimits

0x2ee5,	// (0x00021ed2) main_video_pane_g1

0x2f05,	// (0x00021ef2) main_video_pane_g2_ParamLimits

0x2f05,	// (0x00021ef2) main_video_pane_g2

0x2f35,	// (0x00021f22) main_video_pane_g3_ParamLimits

0x2f35,	// (0x00021f22) main_video_pane_g3

0x2f5e,	// (0x00021f4b) main_video_pane_g4_ParamLimits

0x2f5e,	// (0x00021f4b) main_video_pane_g4

0x2f87,	// (0x00021f74) main_video_pane_g5_ParamLimits

0x2f87,	// (0x00021f74) main_video_pane_g5

0xa6ea,	// (0x000296d7) main_video_pane_g6_ParamLimits

0xa6ea,	// (0x000296d7) main_video_pane_g6

0x0006,

0xf205,	// (0x0002e1f2) main_video_pane_g_ParamLimits

0xf205,	// (0x0002e1f2) main_video_pane_g

0x2fa9,	// (0x00021f96) main_video_pane_t1_ParamLimits

0x2fa9,	// (0x00021f96) main_video_pane_t1

0xa704,	// (0x000296f1) cams_zoom_pane_g1

0xa70d,	// (0x000296fa) cams_zoom_pane_g2

0xa716,	// (0x00029703) cams_zoom_pane_g3

0xa71f,	// (0x0002970c) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0002e201) cams_zoom_pane_g

0x2ff3,	// (0x00021fe0) grid_cams_pane

0x3001,	// (0x00021fee) linegrid_cams_pane

0x300d,	// (0x00021ffa) cell_cams_pane_ParamLimits

0x300d,	// (0x00021ffa) cell_cams_pane

0xa728,	// (0x00029715) cams_burst_image_pane

0xa730,	// (0x0002971d) cell_cams_pane_g1

0xa20e,	// (0x000291fb) grid_highlight_pane_cp03

0xa583,	// (0x00029570) mp_bg_pane_g1

0xa20e,	// (0x000291fb) bg_list_pane_cp03

0xc4c1,	// (0x0002b4ae) bg_mp_pane

0xc4c9,	// (0x0002b4b6) grid_mp_pane

0xc4d1,	// (0x0002b4be) media_player_g1

0xc4db,	// (0x0002b4c8) media_player_t1

0xc4e9,	// (0x0002b4d6) media_player_t2

0xc4f7,	// (0x0002b4e4) media_player_t3

0xc505,	// (0x0002b4f2) media_player_t4

0xc513,	// (0x0002b500) media_player_t5

0xc521,	// (0x0002b50e) media_player_t6

0xc52f,	// (0x0002b51c) media_player_t7

0x0006,

0xf5b0,	// (0x0002e59d) media_player_t

0xc53d,	// (0x0002b52a) wait_bar_pane_cp02

0xf595,	// (0x0002e582) main_usb_pane_t

0x51da,	// (0x000241c7) cell_mp_pane

0xa583,	// (0x00029570) cell_mp_pane_g1

0xa20e,	// (0x000291fb) grid_highlight_pane_cp06

0xa738,	// (0x00029725) grid_skin_colour_pane

0xa740,	// (0x0002972d) list_highlight_pane_cp03

0x3139,	// (0x00022126) skin_g1

0xa748,	// (0x00029735) skin_t1

0xa757,	// (0x00029744) skin_t2

0x0001,

0xf249,	// (0x0002e236) skin_t

0x3143,	// (0x00022130) cell_skin_colour_pane_ParamLimits

0x3143,	// (0x00022130) cell_skin_colour_pane

0xa765,	// (0x00029752) cell_skin_colour_pane_g1

0x31c3,	// (0x000221b0) call_video_g1_ParamLimits

0x31c3,	// (0x000221b0) call_video_g1

0x31d3,	// (0x000221c0) call_video_g2_ParamLimits

0x31d3,	// (0x000221c0) call_video_g2

0x0001,

0xf24e,	// (0x0002e23b) call_video_g_ParamLimits

0xf24e,	// (0x0002e23b) call_video_g

0x3223,	// (0x00022210) call_video_uplink_pane_cp1_ParamLimits

0x3223,	// (0x00022210) call_video_uplink_pane_cp1

0xa777,	// (0x00029764) call_video_uplink_pane_cp2

0x32f1,	// (0x000222de) video_down_crop_pane_ParamLimits

0x32f1,	// (0x000222de) video_down_crop_pane

0x33e3,	// (0x000223d0) video_down_pane_ParamLimits

0x33e3,	// (0x000223d0) video_down_pane

0xa77f,	// (0x0002976c) video_down_subqcif_pane_ParamLimits

0xa77f,	// (0x0002976c) video_down_subqcif_pane

0xa799,	// (0x00029786) video_down_subqcif_pane_cp_ParamLimits

0xa799,	// (0x00029786) video_down_subqcif_pane_cp

0xa7c1,	// (0x000297ae) im_reading_pane_ParamLimits

0xa7c1,	// (0x000297ae) im_reading_pane

0x3500,	// (0x000224ed) im_writing_pane_ParamLimits

0x3500,	// (0x000224ed) im_writing_pane

0x351e,	// (0x0002250b) im_reading_pane_t1

0xa7db,	// (0x000297c8) list_im_pane

0xa7ec,	// (0x000297d9) scroll_pane_cp07

0x3560,	// (0x0002254d) im_writing_pane_t1_ParamLimits

0x3560,	// (0x0002254d) im_writing_pane_t1

0xa805,	// (0x000297f2) im_writing_pane_t2_ParamLimits

0xa805,	// (0x000297f2) im_writing_pane_t2

0x0001,

0xf258,	// (0x0002e245) im_writing_pane_t_ParamLimits

0xf258,	// (0x0002e245) im_writing_pane_t

0xa20e,	// (0x000291fb) input_focus_pane_cp04

0xa20e,	// (0x000291fb) input_focus_pane_cp05

0x3572,	// (0x0002255f) list_im_single_pane_ParamLimits

0x3572,	// (0x0002255f) list_im_single_pane

0x358b,	// (0x00022578) list_single_im_pane_t1

0x519e,	// (0x0002418b) blid_accuracy_pane

0x51a6,	// (0x00024193) blid_compass_pane

0x51b0,	// (0x0002419d) main_location_t1

0x51be,	// (0x000241ab) main_location_t2

0x51cc,	// (0x000241b9) main_location_t3

0x0002,

0xf5bf,	// (0x0002e5ac) main_location_t

0xa20e,	// (0x000291fb) aid_levels_location

0xa583,	// (0x00029570) blid_accuracy_pane_g1

0xa583,	// (0x00029570) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0002e2a7) blid_accuracy_pane_g

0xa84d,	// (0x0002983a) wml_content_pane

0xa88b,	// (0x00029878) wml_button_pane_ParamLimits

0xa88b,	// (0x00029878) wml_button_pane

0x359a,	// (0x00022587) wml_list_single_large_pane_ParamLimits

0x359a,	// (0x00022587) wml_list_single_large_pane

0x35bc,	// (0x000225a9) wml_list_single_medium_pane_ParamLimits

0x35bc,	// (0x000225a9) wml_list_single_medium_pane

0x35df,	// (0x000225cc) wml_list_single_small_pane_ParamLimits

0x35df,	// (0x000225cc) wml_list_single_small_pane

0xa89f,	// (0x0002988c) wml_selection_box_pane_ParamLimits

0xa89f,	// (0x0002988c) wml_selection_box_pane

0xa8b2,	// (0x0002989f) wml_list_single_pane_t1

0xa8c1,	// (0x000298ae) wml_list_single_medium_pane_t1

0xa8d0,	// (0x000298bd) wml_list_single_large_pane_t1

0xa8df,	// (0x000298cc) input_focus_pane_cp02_ParamLimits

0xa8df,	// (0x000298cc) input_focus_pane_cp02

0xa8f2,	// (0x000298df) wml_selection_box_pane_g1

0xa8fb,	// (0x000298e8) wml_selection_box_pane_t1_ParamLimits

0xa8fb,	// (0x000298e8) wml_selection_box_pane_t1

0xa469,	// (0x00029456) bg_wml_button_pane_ParamLimits

0xa469,	// (0x00029456) bg_wml_button_pane

0xa913,	// (0x00029900) wml_button_pane_g1

0xa91b,	// (0x00029908) wml_button_pane_t1

0xa913,	// (0x00029900) wml_button_bg_pane_g1

0xa92b,	// (0x00029918) wml_button_bg_pane_g2

0xa933,	// (0x00029920) wml_button_bg_pane_g3

0xa93b,	// (0x00029928) wml_button_bg_pane_g4

0xa943,	// (0x00029930) wml_button_bg_pane_g5

0xa94b,	// (0x00029938) wml_button_bg_pane_g6

0xa97f,	// (0x0002996c) wml_button_bg_pane_g7

0xa987,	// (0x00029974) wml_button_bg_pane_g8

0xa98f,	// (0x0002997c) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0002e24a) wml_button_bg_pane_g

0x3607,	// (0x000225f4) bg_list_pane_cp02

0xa997,	// (0x00029984) mce_header_pane_ParamLimits

0xa997,	// (0x00029984) mce_header_pane

0xa9ad,	// (0x0002999a) mce_icon_pane

0xa9ad,	// (0x0002999a) mce_image_pane

0xa9b6,	// (0x000299a3) mce_text_pane_ParamLimits

0xa9b6,	// (0x000299a3) mce_text_pane

0x3611,	// (0x000225fe) scroll_pane_cp03

0xa883,	// (0x00029870) scroll_pane_cp04

0xa9c9,	// (0x000299b6) scroll_pane_cp05_ParamLimits

0xa9c9,	// (0x000299b6) scroll_pane_cp05

0x361b,	// (0x00022608) mce_header_field_pane_ParamLimits

0x361b,	// (0x00022608) mce_header_field_pane

0x363d,	// (0x0002262a) mce_header_field_pane_2_ParamLimits

0x363d,	// (0x0002262a) mce_header_field_pane_2

0x3653,	// (0x00022640) mce_header_field_pane_3

0x365b,	// (0x00022648) list_single_mce_message_pane_ParamLimits

0x365b,	// (0x00022648) list_single_mce_message_pane

0x367a,	// (0x00022667) list_single_mce_smart_pane_ParamLimits

0x367a,	// (0x00022667) list_single_mce_smart_pane

0xa9d5,	// (0x000299c2) input_focus_pane_cp03

0xa9de,	// (0x000299cb) list_header_data_pane

0x36a4,	// (0x00022691) mce_header_field_pane_t1

0x36b4,	// (0x000226a1) list_single_mce_header_pane_ParamLimits

0x36b4,	// (0x000226a1) list_single_mce_header_pane

0xa9e6,	// (0x000299d3) list_single_mce_header_pane_t1

0xa9f5,	// (0x000299e2) list_single_mce_message_pane_g1

0xa9fd,	// (0x000299ea) list_single_mce_message_pane_t1

0x36f8,	// (0x000226e5) bg_cale_heading_pane_cp01_ParamLimits

0x36f8,	// (0x000226e5) bg_cale_heading_pane_cp01

0xaa0b,	// (0x000299f8) bg_cale_pane_cp02_ParamLimits

0xaa0b,	// (0x000299f8) bg_cale_pane_cp02

0x374a,	// (0x00022737) cale_month_corner_pane

0x3769,	// (0x00022756) cale_month_day_heading_pane_ParamLimits

0x3769,	// (0x00022756) cale_month_day_heading_pane

0x37cb,	// (0x000227b8) cale_month_pane_g1_ParamLimits

0x37cb,	// (0x000227b8) cale_month_pane_g1

0x3812,	// (0x000227ff) cale_month_pane_g2_ParamLimits

0x3812,	// (0x000227ff) cale_month_pane_g2

0x384a,	// (0x00022837) cale_month_pane_g3_ParamLimits

0x384a,	// (0x00022837) cale_month_pane_g3

0x389e,	// (0x0002288b) cale_month_pane_g4_ParamLimits

0x389e,	// (0x0002288b) cale_month_pane_g4

0x38f2,	// (0x000228df) cale_month_pane_g5_ParamLimits

0x38f2,	// (0x000228df) cale_month_pane_g5

0x3946,	// (0x00022933) cale_month_pane_g6_ParamLimits

0x3946,	// (0x00022933) cale_month_pane_g6

0x39aa,	// (0x00022997) cale_month_pane_g7_ParamLimits

0x39aa,	// (0x00022997) cale_month_pane_g7

0x3a0e,	// (0x000229fb) cale_month_pane_g8_ParamLimits

0x3a0e,	// (0x000229fb) cale_month_pane_g8

0x3a72,	// (0x00022a5f) cale_month_pane_g9_ParamLimits

0x3a72,	// (0x00022a5f) cale_month_pane_g9

0x3acc,	// (0x00022ab9) cale_month_pane_g10_ParamLimits

0x3acc,	// (0x00022ab9) cale_month_pane_g10

0x3b1e,	// (0x00022b0b) cale_month_pane_g11_ParamLimits

0x3b1e,	// (0x00022b0b) cale_month_pane_g11

0x3b6c,	// (0x00022b59) cale_month_pane_g12_ParamLimits

0x3b6c,	// (0x00022b59) cale_month_pane_g12

0x3bbc,	// (0x00022ba9) cale_month_pane_g13_ParamLimits

0x3bbc,	// (0x00022ba9) cale_month_pane_g13

0x000c,

0xf270,	// (0x0002e25d) cale_month_pane_g_ParamLimits

0xf270,	// (0x0002e25d) cale_month_pane_g

0x3c0c,	// (0x00022bf9) cale_month_week_pane

0x3c2c,	// (0x00022c19) grid_cale_month_pane_ParamLimits

0x3c2c,	// (0x00022c19) grid_cale_month_pane

0x3c85,	// (0x00022c72) cale_month_day_heading_pane_t1

0x3d07,	// (0x00022cf4) cale_month_day_heading_pane_t2

0x3d80,	// (0x00022d6d) cale_month_day_heading_pane_t3

0x3df9,	// (0x00022de6) cale_month_day_heading_pane_t4

0x3e72,	// (0x00022e5f) cale_month_day_heading_pane_t5

0x3ef3,	// (0x00022ee0) cale_month_day_heading_pane_t6

0x3f7c,	// (0x00022f69) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0002e278) cale_month_day_heading_pane_t

0xa67b,	// (0x00029668) bg_cale_side_pane_cp01

0x4005,	// (0x00022ff2) cale_month_week_pane_t1

0x401e,	// (0x0002300b) cale_month_week_pane_t2

0x4037,	// (0x00023024) cale_month_week_pane_t3

0x4050,	// (0x0002303d) cale_month_week_pane_t4

0x4069,	// (0x00023056) cale_month_week_pane_t5

0x4086,	// (0x00023073) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0002e287) cale_month_week_pane_t

0x40a9,	// (0x00023096) cell_cale_month_pane_ParamLimits

0x40a9,	// (0x00023096) cell_cale_month_pane

0x0fad,	// (0x0001ff9a) cell_cale_month_pane_g1

0x0fb9,	// (0x0001ffa6) cell_cale_month_pane_t1_ParamLimits

0x0fb9,	// (0x0001ffa6) cell_cale_month_pane_t1

0xa689,	// (0x00029676) grid_highlight_pane_cp08

0xa583,	// (0x00029570) main_smil_g1

0x4201,	// (0x000231ee) smil_status_pane

0xaa4a,	// (0x00029a37) smil_text_pane

0xc3df,	// (0x0002b3cc) bg_popup_call3_rect_pane_g8

0xc3e7,	// (0x0002b3d4) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0002e540) bg_popup_call3_rect_pane_g

0xc645,	// (0x0002b632) smil_status_volume_pane_g1

0xaa54,	// (0x00029a41) smil_status_pane_t1

0x12c1,	// (0x000202ae) volume_smil_pane

0xaa6b,	// (0x00029a58) list_smil_text_pane

0x4214,	// (0x00023201) scroll_pane_cp011

0x421f,	// (0x0002320c) smil_text_list_pane_t1_ParamLimits

0x421f,	// (0x0002320c) smil_text_list_pane_t1

0x0fe5,	// (0x0001ffd2) aid_volume_smil_ParamLimits

0x0fe5,	// (0x0001ffd2) aid_volume_smil

0xa583,	// (0x00029570) smil_volume_pane_g1

0xa583,	// (0x00029570) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0002e2a7) smil_volume_pane_g

0x2839,	// (0x00021826) listscroll_cale_day_pane

0xaa75,	// (0x00029a62) bg_cale_pane

0xaa8d,	// (0x00029a7a) list_cale_pane

0xaab0,	// (0x00029a9d) scroll_pane_cp09

0xaac1,	// (0x00029aae) cale_bg_pane_g1

0xaac9,	// (0x00029ab6) cale_bg_pane_g2

0xaad1,	// (0x00029abe) cale_bg_pane_g3

0xaad9,	// (0x00029ac6) cale_bg_pane_g4

0xaae1,	// (0x00029ace) cale_bg_pane_g5

0xaae9,	// (0x00029ad6) cale_bg_pane_g6

0xaaf1,	// (0x00029ade) cale_bg_pane_g7

0xaaf9,	// (0x00029ae6) cale_bg_pane_g8

0xab01,	// (0x00029aee) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0002e2ac) cale_bg_pane_g

0x427b,	// (0x00023268) list_cale_time_pane_ParamLimits

0x427b,	// (0x00023268) list_cale_time_pane

0xab09,	// (0x00029af6) list_cale_time_pane_g1_ParamLimits

0xab09,	// (0x00029af6) list_cale_time_pane_g1

0xab15,	// (0x00029b02) list_cale_time_pane_g2_ParamLimits

0xab15,	// (0x00029b02) list_cale_time_pane_g2

0x4292,	// (0x0002327f) list_cale_time_pane_g3_ParamLimits

0x4292,	// (0x0002327f) list_cale_time_pane_g3

0x42a0,	// (0x0002328d) list_cale_time_pane_g4_ParamLimits

0x42a0,	// (0x0002328d) list_cale_time_pane_g4

0x42ae,	// (0x0002329b) list_cale_time_pane_g5_ParamLimits

0x42ae,	// (0x0002329b) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0002e2bf) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0002e2bf) list_cale_time_pane_g

0xab2f,	// (0x00029b1c) list_cale_time_pane_t1_ParamLimits

0xab2f,	// (0x00029b1c) list_cale_time_pane_t1

0xab57,	// (0x00029b44) list_cale_time_pane_t2_ParamLimits

0xab57,	// (0x00029b44) list_cale_time_pane_t2

0x45f3,	// (0x000235e0) aid_blid_cardinal_pane

0x4635,	// (0x00023622) compass_pane_t4

0xab7f,	// (0x00029b6c) list_cale_time_pane_t4_ParamLimits

0xab7f,	// (0x00029b6c) list_cale_time_pane_t4

0x4643,	// (0x00023630) compass_pane_t5

0x4653,	// (0x00023640) compass_pane_t6

0x4661,	// (0x0002364e) compass_pane_t7

0xb005,	// (0x00029ff2) navi_pane_cc_t1

0xb1e4,	// (0x0002a1d1) aid_phob_thumbnail_center_pane

0x4c9a,	// (0x00023c87) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0002e2cc) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0002e2cc) list_cale_time_pane_t

0x9e65,	// (0x00028e52) bg_popup_window_pane_cp02_ParamLimits

0x9e65,	// (0x00028e52) bg_popup_window_pane_cp02

0xaba7,	// (0x00029b94) heading_pane_cp01_ParamLimits

0xaba7,	// (0x00029b94) heading_pane_cp01

0xabb3,	// (0x00029ba0) loc_req_pane_ParamLimits

0xabb3,	// (0x00029ba0) loc_req_pane

0xabc3,	// (0x00029bb0) loc_type_pane_ParamLimits

0xabc3,	// (0x00029bb0) loc_type_pane

0xabd5,	// (0x00029bc2) loc_type_pane_t1_ParamLimits

0xabd5,	// (0x00029bc2) loc_type_pane_t1

0xabe7,	// (0x00029bd4) loc_type_pane_t2_ParamLimits

0xabe7,	// (0x00029bd4) loc_type_pane_t2

0xabf9,	// (0x00029be6) loc_type_pane_t3_ParamLimits

0xabf9,	// (0x00029be6) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0002e2d3) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0002e2d3) loc_type_pane_t

0xac0b,	// (0x00029bf8) list_loc_req_pane

0xac15,	// (0x00029c02) scroll_pane_cp012

0x42bc,	// (0x000232a9) list_single_loc_request_popup_menu_pane_ParamLimits

0x42bc,	// (0x000232a9) list_single_loc_request_popup_menu_pane

0xac20,	// (0x00029c0d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac20,	// (0x00029c0d) list_single_loc_request_popup_menu_pane_g1

0xac2c,	// (0x00029c19) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac2c,	// (0x00029c19) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0002e2da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0002e2da) list_single_loc_request_popup_menu_pane_g

0xac38,	// (0x00029c25) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac38,	// (0x00029c25) list_single_loc_request_popup_menu_pane_t1

0x42ce,	// (0x000232bb) bg_popup_window_pane_cp03_ParamLimits

0x42ce,	// (0x000232bb) bg_popup_window_pane_cp03

0x42dc,	// (0x000232c9) heading_loc_req_pane_ParamLimits

0x42dc,	// (0x000232c9) heading_loc_req_pane

0x42e8,	// (0x000232d5) popup_dyc_status_message_window_g1_ParamLimits

0x42e8,	// (0x000232d5) popup_dyc_status_message_window_g1

0x42f4,	// (0x000232e1) popup_dyc_status_message_window_t1_ParamLimits

0x42f4,	// (0x000232e1) popup_dyc_status_message_window_t1

0x4306,	// (0x000232f3) popup_dyc_status_message_window_t2_ParamLimits

0x4306,	// (0x000232f3) popup_dyc_status_message_window_t2

0x4318,	// (0x00023305) popup_dyc_status_message_window_t3_ParamLimits

0x4318,	// (0x00023305) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0002e2df) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0002e2df) popup_dyc_status_message_window_t

0xa20e,	// (0x000291fb) bg_heading_pane_cp01

0xac4e,	// (0x00029c3b) heading_loc_req_pane_g1

0xac56,	// (0x00029c43) heading_loc_req_pane_g2

0xac5e,	// (0x00029c4b) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0002e2e6) heading_loc_req_pane_g

0xac66,	// (0x00029c53) heading_loc_req_pane_t1

0xac76,	// (0x00029c63) bg_popup_sub_pane_cp01_ParamLimits

0xac76,	// (0x00029c63) bg_popup_sub_pane_cp01

0xac84,	// (0x00029c71) popup_cale_events_window_g1_ParamLimits

0xac84,	// (0x00029c71) popup_cale_events_window_g1

0xaca4,	// (0x00029c91) popup_cale_events_window_g2_ParamLimits

0xaca4,	// (0x00029c91) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0002e31a) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0002e31a) popup_cale_events_window_g

0xacc4,	// (0x00029cb1) popup_cale_events_window_t1_ParamLimits

0xacc4,	// (0x00029cb1) popup_cale_events_window_t1

0xacd6,	// (0x00029cc3) popup_cale_events_window_t2_ParamLimits

0xacd6,	// (0x00029cc3) popup_cale_events_window_t2

0xad14,	// (0x00029d01) popup_cale_events_window_t3_ParamLimits

0xad14,	// (0x00029d01) popup_cale_events_window_t3

0xad4e,	// (0x00029d3b) popup_cale_events_window_t4_ParamLimits

0xad4e,	// (0x00029d3b) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0002e31f) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0002e31f) popup_cale_events_window_t

0x4413,	// (0x00023400) call_type_pane

0xad84,	// (0x00029d71) popup_call_status_window_g1

0x441f,	// (0x0002340c) popup_call_status_window_g2

0x442b,	// (0x00023418) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0002e328) popup_call_status_window_g

0xad92,	// (0x00029d7f) call_type_pane_g1

0xad9b,	// (0x00029d88) call_type_pane_g2

0x0001,

0xf342,	// (0x0002e32f) call_type_pane_g

0xa20e,	// (0x000291fb) bg_popup_sub_pane_cp02

0xada4,	// (0x00029d91) listscroll_popup_wml_pane

0xadac,	// (0x00029d99) list_wml_pane

0xadb6,	// (0x00029da3) scroll_pane_cp013

0xadc1,	// (0x00029dae) list_single_graphic_popup_wml_pane_ParamLimits

0xadc1,	// (0x00029dae) list_single_graphic_popup_wml_pane

0xa583,	// (0x00029570) list_single_graphic_popup_wml_pane_g1

0xadd5,	// (0x00029dc2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0002e334) list_single_graphic_popup_wml_pane_g

0xaddd,	// (0x00029dca) list_single_graphic_popup_wml_pane_t1

0xadf3,	// (0x00029de0) aid_call_pane

0xa461,	// (0x0002944e) popup_clock_analogue_window_g1

0xa461,	// (0x0002944e) popup_clock_analogue_window_g2

0x1007,	// (0x0001fff4) popup_clock_analogue_window_g3

0x1007,	// (0x0001fff4) popup_clock_analogue_window_g4

0xa583,	// (0x00029570) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0002e339) popup_clock_analogue_window_g

0x100f,	// (0x0001fffc) popup_clock_analogue_window_t1

0x101d,	// (0x0002000a) clock_digital_number_pane_ParamLimits

0x101d,	// (0x0002000a) clock_digital_number_pane

0x1029,	// (0x00020016) clock_digital_number_pane_cp02_ParamLimits

0x1029,	// (0x00020016) clock_digital_number_pane_cp02

0x1035,	// (0x00020022) clock_digital_number_pane_cp03_ParamLimits

0x1035,	// (0x00020022) clock_digital_number_pane_cp03

0x1041,	// (0x0002002e) clock_digital_number_pane_cp04_ParamLimits

0x1041,	// (0x0002002e) clock_digital_number_pane_cp04

0x104d,	// (0x0002003a) clock_digital_separator_pane_ParamLimits

0x104d,	// (0x0002003a) clock_digital_separator_pane

0x1059,	// (0x00020046) popup_clock_digital_window_t1

0xa583,	// (0x00029570) clock_digital_number_pane_g1

0xa583,	// (0x00029570) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0002e2a7) clock_digital_number_pane_g

0xa583,	// (0x00029570) clock_digital_separator_pane_g1

0xa583,	// (0x00029570) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0002e2a7) clock_digital_separator_pane_g

0xa20e,	// (0x000291fb) bg_popup_window_pane_cp04

0xadfb,	// (0x00029de8) heading_pane_cp03

0xae03,	// (0x00029df0) listscroll_popup_gms_pane

0xae0b,	// (0x00029df8) grid_large_graphic_popup_pane

0xae15,	// (0x00029e02) listscroll_popup_gms_pane_g1

0xae1d,	// (0x00029e0a) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0002e344) listscroll_popup_gms_pane_g

0xa883,	// (0x00029870) scroll_pane_cp014

0x4437,	// (0x00023424) cell_large_graphic_popup_pane_ParamLimits

0x4437,	// (0x00023424) cell_large_graphic_popup_pane

0x4451,	// (0x0002343e) cell_large_graphic_popup_pane_g1_ParamLimits

0x4451,	// (0x0002343e) cell_large_graphic_popup_pane_g1

0xae25,	// (0x00029e12) cell_large_graphic_popup_pane_g2_ParamLimits

0xae25,	// (0x00029e12) cell_large_graphic_popup_pane_g2

0xae31,	// (0x00029e1e) cell_large_graphic_popup_pane_g3_ParamLimits

0xae31,	// (0x00029e1e) cell_large_graphic_popup_pane_g3

0xae3e,	// (0x00029e2b) cell_large_graphic_popup_pane_g4_ParamLimits

0xae3e,	// (0x00029e2b) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0002e349) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0002e349) cell_large_graphic_popup_pane_g

0xae4e,	// (0x00029e3b) grid_highlight_pane_cp010

0xa583,	// (0x00029570) bg_popup_call_pane_g1

0xae58,	// (0x00029e45) list_single_graphic_popup_conf_pane_ParamLimits

0xae58,	// (0x00029e45) list_single_graphic_popup_conf_pane

0xae6a,	// (0x00029e57) list_highlight_pane_cp01

0xae73,	// (0x00029e60) list_single_graphic_popup_conf_pane_g1

0xae7b,	// (0x00029e68) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0002e352) list_single_graphic_popup_conf_pane_g

0xae83,	// (0x00029e70) list_single_graphic_popup_conf_pane_t1

0xae91,	// (0x00029e7e) linegrid_cams_pane_g1

0x445d,	// (0x0002344a) linegrid_cams_pane_g2

0xa6bc,	// (0x000296a9) linegrid_cams_pane_g3

0xae9a,	// (0x00029e87) linegrid_cams_pane_g4

0x4466,	// (0x00023453) linegrid_cams_pane_g5

0x446f,	// (0x0002345c) linegrid_cams_pane_g6

0xa6c5,	// (0x000296b2) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0002e357) linegrid_cams_pane_g

0xaea3,	// (0x00029e90) popup_clock_analogue_window

0xaea3,	// (0x00029e90) popup_clock_digital_window

0xa20e,	// (0x000291fb) popup_phob_thumbnail_window

0xa583,	// (0x00029570) call_video_uplink_pane_g1

0xaeac,	// (0x00029e99) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0002e366) call_video_uplink_pane_g

0xaeb4,	// (0x00029ea1) video_uplink_pane

0xaebc,	// (0x00029ea9) mce_image_pane_g1

0x447a,	// (0x00023467) mce_image_pane_g2

0x4484,	// (0x00023471) mce_image_pane_g3

0x448e,	// (0x0002347b) mce_image_pane_g4

0x4496,	// (0x00023483) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0002e36b) mce_image_pane_g

0xaec6,	// (0x00029eb3) control_top_pane_stacon_cp01_ParamLimits

0xaec6,	// (0x00029eb3) control_top_pane_stacon_cp01

0xaeda,	// (0x00029ec7) uni_indicator_pane_stacon_cp01_ParamLimits

0xaeda,	// (0x00029ec7) uni_indicator_pane_stacon_cp01

0xaeeb,	// (0x00029ed8) bg_popup_sub_pane_cp03

0x449e,	// (0x0002348b) chi_dic_find_pane

0x44a6,	// (0x00023493) listscroll_chi_dic_pane

0x44af,	// (0x0002349c) main_pane_chidic_g1

0x44c2,	// (0x000234af) chi_dic_find_pane_t1

0xaef5,	// (0x00029ee2) find_chidic_pane

0xaefe,	// (0x00029eeb) chi_dic_list_pane_ParamLimits

0xaefe,	// (0x00029eeb) chi_dic_list_pane

0xaf0f,	// (0x00029efc) scroll_pane_cp020

0x44d0,	// (0x000234bd) find_chidic_pane_t1

0xa20e,	// (0x000291fb) input_focus_pane_cp06

0xa953,	// (0x00029940) list_chi_dic_pane_ParamLimits

0xa953,	// (0x00029940) list_chi_dic_pane

0x44df,	// (0x000234cc) list_chi_dic_pane_t1_ParamLimits

0x44df,	// (0x000234cc) list_chi_dic_pane_t1

0xa20e,	// (0x000291fb) list_highlight_pane_cp020

0xaf17,	// (0x00029f04) bg_cale_heading_pane_g1

0x44f2,	// (0x000234df) bg_cale_heading_pane_g2

0x44fa,	// (0x000234e7) bg_cale_heading_pane_g3

0x4502,	// (0x000234ef) bg_cale_heading_pane_g4

0x450c,	// (0x000234f9) bg_cale_heading_pane_g5

0x4516,	// (0x00023503) bg_cale_heading_pane_g6

0x451e,	// (0x0002350b) bg_cale_heading_pane_g7

0x4526,	// (0x00023513) bg_cale_heading_pane_g8

0x4530,	// (0x0002351d) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0002e376) bg_cale_heading_pane_g

0xaf17,	// (0x00029f04) bg_cale_side_pane_g1

0x453a,	// (0x00023527) bg_cale_side_pane_g2

0x4544,	// (0x00023531) bg_cale_side_pane_g3

0x454e,	// (0x0002353b) bg_cale_side_pane_g4

0x4558,	// (0x00023545) bg_cale_side_pane_g5

0x4562,	// (0x0002354f) bg_cale_side_pane_g6

0x456c,	// (0x00023559) bg_cale_side_pane_g7

0x4576,	// (0x00023563) bg_cale_side_pane_g8

0x457e,	// (0x0002356b) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0002e389) bg_cale_side_pane_g

0x4586,	// (0x00023573) popup_call_status_window_ParamLimits

0x4586,	// (0x00023573) popup_call_status_window

0xaf1f,	// (0x00029f0c) stacon_top_pane

0xaf27,	// (0x00029f14) status_pane_ParamLimits

0xaf27,	// (0x00029f14) status_pane

0xaf3c,	// (0x00029f29) status_small_pane

0xaf44,	// (0x00029f31) control_pane

0xa20e,	// (0x000291fb) stacon_bottom_pane

0xaf4c,	// (0x00029f39) list_single_mce_smart_pane_t1_ParamLimits

0xaf4c,	// (0x00029f39) list_single_mce_smart_pane_t1

0xaf5f,	// (0x00029f4c) list_single_mce_smart_pane_t2_ParamLimits

0xaf5f,	// (0x00029f4c) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0002e39c) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0002e39c) list_single_mce_smart_pane_t

0x4592,	// (0x0002357f) compass_pane

0x459d,	// (0x0002358a) main_location2_pane_t1

0x45b3,	// (0x000235a0) main_location2_pane_t2

0x45c9,	// (0x000235b6) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0002e3a1) main_location2_pane_t

0xaf7e,	// (0x00029f6b) compass_pane_g1_ParamLimits

0xaf7e,	// (0x00029f6b) compass_pane_g1

0x4617,	// (0x00023604) compass_pane_t1

0x4626,	// (0x00023613) compass_pane_t2

0x0005,

0xf3bd,	// (0x0002e3aa) compass_pane_t

0x4671,	// (0x0002365e) text_secondary_cp61

0xaffc,	// (0x00029fe9) navi_pane_cams_g5

0xb078,	// (0x0002a065) navi_pane_im_t1

0xb086,	// (0x0002a073) navi_pane_mp_g1_ParamLimits

0xb086,	// (0x0002a073) navi_pane_mp_g1

0xb09a,	// (0x0002a087) navi_pane_mp_g2_ParamLimits

0xb09a,	// (0x0002a087) navi_pane_mp_g2

0xb0a6,	// (0x0002a093) navi_pane_mp_g3_ParamLimits

0xb0a6,	// (0x0002a093) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0002e3be) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0002e3be) navi_pane_mp_g

0xb0b2,	// (0x0002a09f) navi_pane_mp_t1

0xb0c0,	// (0x0002a0ad) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0002e3c5) navi_pane_mp_t

0xb12d,	// (0x0002a11a) navi_pane_vt_g1

0xb0b2,	// (0x0002a09f) navi_pane_vt_t1

0xb135,	// (0x0002a122) navi_slider_pane

0xa6d6,	// (0x000296c3) zooming_pane

0xb145,	// (0x0002a132) navi_slider_pane_g1

0x1076,	// (0x00020063) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0002e3cc) navi_slider_pane_g

0xb169,	// (0x0002a156) aid_levels_zoom

0xb171,	// (0x0002a15e) zooming_pane_g1

0xb179,	// (0x0002a166) zooming_pane_g2

0xb179,	// (0x0002a166) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0002e3db) zooming_pane_g

0xb181,	// (0x0002a16e) level_10_zoom

0xb18a,	// (0x0002a177) level_11_zoom

0xb193,	// (0x0002a180) level_1_zoom

0xb19c,	// (0x0002a189) level_2_zoom

0xb1a5,	// (0x0002a192) level_3_zoom

0xb1ae,	// (0x0002a19b) level_4_zoom

0xb1b7,	// (0x0002a1a4) level_5_zoom

0xb1c0,	// (0x0002a1ad) level_6_zoom

0xb1c9,	// (0x0002a1b6) level_7_zoom

0xb1d2,	// (0x0002a1bf) level_8_zoom

0xb1db,	// (0x0002a1c8) level_9_zoom

0xb1ec,	// (0x0002a1d9) popup_phob_thumbnail_window_g1

0xb1f4,	// (0x0002a1e1) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0002e3e2) popup_phob_thumbnail_window_g

0xc545,	// (0x0002b532) level_1_location

0xc54d,	// (0x0002b53a) level_2_location

0xc555,	// (0x0002b542) level_3_location

0xc55d,	// (0x0002b54a) level_4_location

0xa6d6,	// (0x000296c3) level_5_location

0x46ac,	// (0x00023699) mce_icon_pane_g1

0x46b4,	// (0x000236a1) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0002e3e7) mce_icon_pane_g

0x46bc,	// (0x000236a9) main_mup_pane_g1_ParamLimits

0x46bc,	// (0x000236a9) main_mup_pane_g1

0x46d4,	// (0x000236c1) main_mup_pane_g2_ParamLimits

0x46d4,	// (0x000236c1) main_mup_pane_g2

0x46f0,	// (0x000236dd) main_mup_pane_g3_ParamLimits

0x46f0,	// (0x000236dd) main_mup_pane_g3

0x470c,	// (0x000236f9) main_mup_pane_g4_ParamLimits

0x470c,	// (0x000236f9) main_mup_pane_g4

0x4720,	// (0x0002370d) main_mup_pane_g5_ParamLimits

0x4720,	// (0x0002370d) main_mup_pane_g5

0x4741,	// (0x0002372e) main_mup_pane_g6_ParamLimits

0x4741,	// (0x0002372e) main_mup_pane_g6

0x4761,	// (0x0002374e) main_mup_pane_g7_ParamLimits

0x4761,	// (0x0002374e) main_mup_pane_g7

0x4785,	// (0x00023772) main_mup_pane_g8_ParamLimits

0x4785,	// (0x00023772) main_mup_pane_g8

0x47a9,	// (0x00023796) main_mup_pane_g9_ParamLimits

0x47a9,	// (0x00023796) main_mup_pane_g9

0x47cc,	// (0x000237b9) main_mup_pane_g10_ParamLimits

0x47cc,	// (0x000237b9) main_mup_pane_g10

0x47ef,	// (0x000237dc) main_mup_pane_g11_ParamLimits

0x47ef,	// (0x000237dc) main_mup_pane_g11

0x480f,	// (0x000237fc) main_mup_pane_g12_ParamLimits

0x480f,	// (0x000237fc) main_mup_pane_g12

0x481d,	// (0x0002380a) main_mup_pane_g13_ParamLimits

0x481d,	// (0x0002380a) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0002e3ec) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0002e3ec) main_mup_pane_g

0x4833,	// (0x00023820) main_mup_pane_t1_ParamLimits

0x4833,	// (0x00023820) main_mup_pane_t1

0x4852,	// (0x0002383f) main_mup_pane_t2_ParamLimits

0x4852,	// (0x0002383f) main_mup_pane_t2

0x486c,	// (0x00023859) main_mup_pane_t3_ParamLimits

0x486c,	// (0x00023859) main_mup_pane_t3

0x4886,	// (0x00023873) main_mup_pane_t4_ParamLimits

0x4886,	// (0x00023873) main_mup_pane_t4

0x4898,	// (0x00023885) main_mup_pane_t5_ParamLimits

0x4898,	// (0x00023885) main_mup_pane_t5

0x48aa,	// (0x00023897) main_mup_pane_t6_ParamLimits

0x48aa,	// (0x00023897) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0002e407) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0002e407) main_mup_pane_t

0x48c0,	// (0x000238ad) mup_progress_pane_ParamLimits

0x48c0,	// (0x000238ad) mup_progress_pane

0x48cc,	// (0x000238b9) mup_visualizer_pane_ParamLimits

0x48cc,	// (0x000238b9) mup_visualizer_pane

0x490a,	// (0x000238f7) mup_volume_pane_ParamLimits

0x490a,	// (0x000238f7) mup_volume_pane

0xad84,	// (0x00029d71) mup_visualizer_pane_g1_ParamLimits

0xad84,	// (0x00029d71) mup_visualizer_pane_g1

0xad84,	// (0x00029d71) mup_visualizer_pane_g2_ParamLimits

0xad84,	// (0x00029d71) mup_visualizer_pane_g2

0xaf7e,	// (0x00029f6b) mup_visualizer_pane_g3_ParamLimits

0xaf7e,	// (0x00029f6b) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0002e414) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0002e414) mup_visualizer_pane_g

0xa583,	// (0x00029570) mup_volume_pane_g1

0xb204,	// (0x0002a1f1) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0002e41b) mup_volume_pane_g

0xa583,	// (0x00029570) mup_progress_pane_g1

0xb20d,	// (0x0002a1fa) mup_progress_pane_g2

0xb216,	// (0x0002a203) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0002e420) mup_progress_pane_g

0xa20e,	// (0x000291fb) bg_popup_window_pane_cp05

0xb21f,	// (0x0002a20c) heading_pane_cp02_ParamLimits

0xb21f,	// (0x0002a20c) heading_pane_cp02

0xb23b,	// (0x0002a228) list_popup_blid_pane

0xb243,	// (0x0002a230) list_blid_sat_info_pane_ParamLimits

0xb243,	// (0x0002a230) list_blid_sat_info_pane

0xb256,	// (0x0002a243) list_blid_sat_info_pane_g1

0xb25e,	// (0x0002a24b) list_blid_sat_info_pane_t1

0x4a29,	// (0x00023a16) mup_equalizer_pane_ParamLimits

0x4a29,	// (0x00023a16) mup_equalizer_pane

0x4a4a,	// (0x00023a37) mup_equalizer_pane_cp1_ParamLimits

0x4a4a,	// (0x00023a37) mup_equalizer_pane_cp1

0x4a6b,	// (0x00023a58) mup_equalizer_pane_cp2_ParamLimits

0x4a6b,	// (0x00023a58) mup_equalizer_pane_cp2

0x4a8c,	// (0x00023a79) mup_equalizer_pane_cp3_ParamLimits

0x4a8c,	// (0x00023a79) mup_equalizer_pane_cp3

0x4ab1,	// (0x00023a9e) mup_equalizer_pane_cp4_ParamLimits

0x4ab1,	// (0x00023a9e) mup_equalizer_pane_cp4

0x4ad6,	// (0x00023ac3) mup_equalizer_pane_cp5

0x4aee,	// (0x00023adb) mup_equalizer_pane_cp6

0x4b06,	// (0x00023af3) mup_equalizer_pane_cp7

0xc45f,	// (0x0002b44c) bg_popup_call_poc_act_pane_g9

0xc467,	// (0x0002b454) bg_popup_call_poc_act_pane_g10

0xc46f,	// (0x0002b45c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa469,	// (0x00029456) mup_scale_pane

0xa583,	// (0x00029570) mup_scale_pane_g1

0xb26c,	// (0x0002a259) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0002e43c) mup_scale_pane_g

0xb290,	// (0x0002a27d) msg_data_pane

0xb298,	// (0x0002a285) scroll_pane_cp017

0x4b30,	// (0x00023b1d) bg_list_pane_cp04_ParamLimits

0x4b30,	// (0x00023b1d) bg_list_pane_cp04

0xb2a8,	// (0x0002a295) msg_data_pane_g1

0x4b50,	// (0x00023b3d) msg_data_pane_g2

0x4b5a,	// (0x00023b47) msg_data_pane_g3

0x4b64,	// (0x00023b51) msg_data_pane_g4

0x4b6c,	// (0x00023b59) msg_data_pane_g5

0x4b74,	// (0x00023b61) msg_data_pane_g6

0x4b7c,	// (0x00023b69) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0002e44b) msg_data_pane_g

0x4b84,	// (0x00023b71) msg_text_pane_ParamLimits

0x4b84,	// (0x00023b71) msg_text_pane

0x4bb5,	// (0x00023ba2) qrid_highlight_pane_cp011_ParamLimits

0x4bb5,	// (0x00023ba2) qrid_highlight_pane_cp011

0xa20e,	// (0x000291fb) msg_body_pane

0xa20e,	// (0x000291fb) msg_header_pane

0xb2b9,	// (0x0002a2a6) input_focus_pane_cp07

0xb2ce,	// (0x0002a2bb) msg_header_pane_t1_ParamLimits

0xb2ce,	// (0x0002a2bb) msg_header_pane_t1

0xb2e0,	// (0x0002a2cd) msg_header_pane_t2_ParamLimits

0xb2e0,	// (0x0002a2cd) msg_header_pane_t2

0x0001,

0xf472,	// (0x0002e45f) msg_header_pane_t_ParamLimits

0xf472,	// (0x0002e45f) msg_header_pane_t

0xb2f2,	// (0x0002a2df) msg_body_pane_g1

0x4bd9,	// (0x00023bc6) msg_body_pane_t1_ParamLimits

0x4bd9,	// (0x00023bc6) msg_body_pane_t1

0xb2fa,	// (0x0002a2e7) msg_body_pane_t2_ParamLimits

0xb2fa,	// (0x0002a2e7) msg_body_pane_t2

0xb30c,	// (0x0002a2f9) msg_body_pane_t3_ParamLimits

0xb30c,	// (0x0002a2f9) msg_body_pane_t3

0x0002,

0xf477,	// (0x0002e464) msg_body_pane_t_ParamLimits

0xf477,	// (0x0002e464) msg_body_pane_t

0x10b8,	// (0x000200a5) main_viewer_pane_g1_ParamLimits

0x10b8,	// (0x000200a5) main_viewer_pane_g1

0x10c4,	// (0x000200b1) main_viewer_pane_g2_ParamLimits

0x10c4,	// (0x000200b1) main_viewer_pane_g2

0x4c2c,	// (0x00023c19) main_viewer_pane_g3_ParamLimits

0x4c2c,	// (0x00023c19) main_viewer_pane_g3

0x4c3d,	// (0x00023c2a) main_viewer_pane_g4_ParamLimits

0x4c3d,	// (0x00023c2a) main_viewer_pane_g4

0x10d0,	// (0x000200bd) main_viewer_pane_g5_ParamLimits

0x10d0,	// (0x000200bd) main_viewer_pane_g5

0x10d0,	// (0x000200bd) main_viewer_pane_g7_ParamLimits

0x10d0,	// (0x000200bd) main_viewer_pane_g7

0x10e2,	// (0x000200cf) main_viewer_pane_g8_ParamLimits

0x10e2,	// (0x000200cf) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0002e474) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0002e474) main_viewer_pane_g

0xb31e,	// (0x0002a30b) viewer_content_pane_ParamLimits

0xb31e,	// (0x0002a30b) viewer_content_pane

0x4c6e,	// (0x00023c5b) main_postcard_pane_g1_ParamLimits

0x4c6e,	// (0x00023c5b) main_postcard_pane_g1

0x4c7c,	// (0x00023c69) main_postcard_pane_g2_ParamLimits

0x4c7c,	// (0x00023c69) main_postcard_pane_g2

0x4c8a,	// (0x00023c77) main_postcard_pane_g3_ParamLimits

0x4c8a,	// (0x00023c77) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0002e485) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0002e485) main_postcard_pane_g

0x4c9a,	// (0x00023c87) main_postcard_pane_g4

0xc658,	// (0x0002b645) smil_status_volume_pane_g2

0x4cc6,	// (0x00023cb3) postcard_pane_ParamLimits

0x4cc6,	// (0x00023cb3) postcard_pane

0xad84,	// (0x00029d71) postcard_pane_g1_ParamLimits

0xad84,	// (0x00029d71) postcard_pane_g1

0x4d00,	// (0x00023ced) postcard_pane_g2_ParamLimits

0x4d00,	// (0x00023ced) postcard_pane_g2

0x4d0c,	// (0x00023cf9) postcard_pane_g3_ParamLimits

0x4d0c,	// (0x00023cf9) postcard_pane_g3

0xb32c,	// (0x0002a319) postcard_pane_g4_ParamLimits

0xb32c,	// (0x0002a319) postcard_pane_g4

0x4d18,	// (0x00023d05) postcard_pane_g5_ParamLimits

0x4d18,	// (0x00023d05) postcard_pane_g5

0x4d24,	// (0x00023d11) postcard_pane_g6_ParamLimits

0x4d24,	// (0x00023d11) postcard_pane_g6

0xb33a,	// (0x0002a327) postcard_pane_g7_ParamLimits

0xb33a,	// (0x0002a327) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0002e492) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0002e492) postcard_pane_g

0x4d32,	// (0x00023d1f) main_mp2_pane_g1_ParamLimits

0x4d32,	// (0x00023d1f) main_mp2_pane_g1

0x4d40,	// (0x00023d2d) main_mp2_pane_g2_ParamLimits

0x4d40,	// (0x00023d2d) main_mp2_pane_g2

0x4d4c,	// (0x00023d39) main_mp2_pane_g3_ParamLimits

0x4d4c,	// (0x00023d39) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0002e4a1) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0002e4a1) main_mp2_pane_g

0x4d58,	// (0x00023d45) main_mp2_pane_t1_ParamLimits

0x4d58,	// (0x00023d45) main_mp2_pane_t1

0x4d6f,	// (0x00023d5c) main_mp2_pane_t2_ParamLimits

0x4d6f,	// (0x00023d5c) main_mp2_pane_t2

0x4d83,	// (0x00023d70) main_mp2_pane_t3_ParamLimits

0x4d83,	// (0x00023d70) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0002e4a8) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0002e4a8) main_mp2_pane_t

0xb348,	// (0x0002a335) pec_content_pane_ParamLimits

0xb348,	// (0x0002a335) pec_content_pane

0xa883,	// (0x00029870) scroll_pane_cp015

0xb35a,	// (0x0002a347) pec_attribute_pane_ParamLimits

0xb35a,	// (0x0002a347) pec_attribute_pane

0x4d95,	// (0x00023d82) pec_content_pane_g1_ParamLimits

0x4d95,	// (0x00023d82) pec_content_pane_g1

0xb36a,	// (0x0002a357) pec_content_pane_t1_ParamLimits

0xb36a,	// (0x0002a357) pec_content_pane_t1

0xb37c,	// (0x0002a369) pec_content_pane_t2_ParamLimits

0xb37c,	// (0x0002a369) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0002e4af) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0002e4af) pec_content_pane_t

0x4da1,	// (0x00023d8e) list_single_graphic_pane_cp01_ParamLimits

0x4da1,	// (0x00023d8e) list_single_graphic_pane_cp01

0xa469,	// (0x00029456) bg_popup_sub_pane_cp04

0xb38e,	// (0x0002a37b) popup_mup_playback_window_g1

0xb39a,	// (0x0002a387) popup_mup_playback_window_t1

0xb3af,	// (0x0002a39c) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0002e4b4) popup_mup_playback_window_t

0xb3e6,	// (0x0002a3d3) main_image_pane_g1_ParamLimits

0xb3e6,	// (0x0002a3d3) main_image_pane_g1

0xb429,	// (0x0002a416) scroll_pane_cp018_ParamLimits

0xb429,	// (0x0002a416) scroll_pane_cp018

0xb44d,	// (0x0002a43a) scroll_pane_cp016_ParamLimits

0xb44d,	// (0x0002a43a) scroll_pane_cp016

0x4e2f,	// (0x00023e1c) smil2_image_pane_ParamLimits

0x4e2f,	// (0x00023e1c) smil2_image_pane

0x4e65,	// (0x00023e52) smil2_root_pane_ParamLimits

0x4e65,	// (0x00023e52) smil2_root_pane

0x4e91,	// (0x00023e7e) smil2_text_pane_ParamLimits

0x4e91,	// (0x00023e7e) smil2_text_pane

0xa20e,	// (0x000291fb) bg_list_pane_cp06

0xb489,	// (0x0002a476) grid_radio_pane

0xa20e,	// (0x000291fb) bg_popup_window_pane_cp06

0xb493,	// (0x0002a480) main_fmradio_pane_t1

0xadfb,	// (0x00029de8) heading_pane_cp04

0xb4a1,	// (0x0002a48e) main_fmradio_pane_t2

0xc477,	// (0x0002b464) popup_cale_lunar_info_window_g1

0xb4af,	// (0x0002a49c) main_fmradio_pane_t3

0xc47f,	// (0x0002b46c) popup_cale_lunar_info_window_g2

0xb4bf,	// (0x0002a4ac) main_fmradio_pane_t4

0x0001,

0xb4cd,	// (0x0002a4ba) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0002e58f) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0002e4c9) main_fmradio_pane_t

0xb4db,	// (0x0002a4c8) wait_bar_pane_cp03

0xb4e3,	// (0x0002a4d0) cell_fmradio_pane_ParamLimits

0xb4e3,	// (0x0002a4d0) cell_fmradio_pane

0xb33a,	// (0x0002a327) cell_fmradio_pane_g1_ParamLimits

0xb33a,	// (0x0002a327) cell_fmradio_pane_g1

0xa20e,	// (0x000291fb) grid_highlight_pane_cp011

0xb4f8,	// (0x0002a4e5) poc_content_pane_ParamLimits

0xb4f8,	// (0x0002a4e5) poc_content_pane

0xb50a,	// (0x0002a4f7) scroll_pane_cp019

0x4ed1,	// (0x00023ebe) popup_call_poc_act_window_ParamLimits

0x4ed1,	// (0x00023ebe) popup_call_poc_act_window

0x4ede,	// (0x00023ecb) popup_call_poc_inact_window_ParamLimits

0x4ede,	// (0x00023ecb) popup_call_poc_inact_window

0xf579,	// (0x0002e566) bg_popup_call_poc_act_pane_g

0xc3ef,	// (0x0002b3dc) bg_popup_call_poc_inact_pane_g1

0xc3f7,	// (0x0002b3e4) bg_popup_call_poc_inact_pane_g2

0xb512,	// (0x0002a4ff) popup_call_poc_act_window_g2

0xc3ff,	// (0x0002b3ec) bg_popup_call_poc_inact_pane_g3

0xc407,	// (0x0002b3f4) bg_popup_call_poc_inact_pane_g4

0xc40f,	// (0x0002b3fc) bg_popup_call_poc_inact_pane_g5

0xb51a,	// (0x0002a507) popup_call_poc_act_window_t1_ParamLimits

0xb51a,	// (0x0002a507) popup_call_poc_act_window_t1

0xb542,	// (0x0002a52f) popup_call_poc_act_window_t2_ParamLimits

0xb542,	// (0x0002a52f) popup_call_poc_act_window_t2

0xb56a,	// (0x0002a557) popup_call_poc_act_window_t3_ParamLimits

0xb56a,	// (0x0002a557) popup_call_poc_act_window_t3

0xb592,	// (0x0002a57f) popup_call_poc_act_window_t4_ParamLimits

0xb592,	// (0x0002a57f) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0002e4d4) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0002e4d4) popup_call_poc_act_window_t

0xc417,	// (0x0002b404) bg_popup_call_poc_inact_pane_g6

0xc41f,	// (0x0002b40c) bg_popup_call_poc_inact_pane_g7

0xc427,	// (0x0002b414) bg_popup_call_poc_inact_pane_g8

0xb5a4,	// (0x0002a591) popup_call_poc_inact_window_g2

0xc42f,	// (0x0002b41c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0002e553) bg_popup_call_poc_inact_pane_g

0xb5ac,	// (0x0002a599) popup_call_poc_inact_window_t1_ParamLimits

0xb5ac,	// (0x0002a599) popup_call_poc_inact_window_t1

0xb5c1,	// (0x0002a5ae) popup_call_poc_inact_window_t2_ParamLimits

0xb5c1,	// (0x0002a5ae) popup_call_poc_inact_window_t2

0xb5d6,	// (0x0002a5c3) popup_call_poc_inact_window_t3_ParamLimits

0xb5d6,	// (0x0002a5c3) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0002e4dd) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0002e4dd) popup_call_poc_inact_window_t

0xc5b8,	// (0x0002b5a5) context_pane_ParamLimits

0x5399,	// (0x00024386) signal_pane_ParamLimits

0xa6d6,	// (0x000296c3) main_call2_pane

0x1261,	// (0x0002024e) popup_phob_thumbnail2_window_ParamLimits

0x1261,	// (0x0002024e) popup_phob_thumbnail2_window

0x1088,	// (0x00020075) aid_hotspot_pointer_arrow_pane

0x1090,	// (0x0002007d) aid_hotspot_pointer_hand_pane

0x5203,	// (0x000241f0) phob_pre_status_pane_g5

0x2de9,	// (0x00021dd6) cams_zoom_pane_ParamLimits

0x2df5,	// (0x00021de2) image_vga_pane_ParamLimits

0x2e04,	// (0x00021df1) main_camera_pane_g1_ParamLimits

0x2e12,	// (0x00021dff) main_camera_pane_g2_ParamLimits

0x2e1e,	// (0x00021e0b) main_camera_pane_g3_ParamLimits

0x2e2c,	// (0x00021e19) main_camera_pane_g4_ParamLimits

0x2e3a,	// (0x00021e27) main_camera_pane_g5_ParamLimits

0x2e48,	// (0x00021e35) main_camera_pane_g6_ParamLimits

0x2e56,	// (0x00021e43) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0002e1dc) main_camera_pane_g_ParamLimits

0x2e64,	// (0x00021e51) main_camera_pane_t1_ParamLimits

0x2e76,	// (0x00021e63) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0002e1ed) main_camera_pane_t_ParamLimits

0xa469,	// (0x00029456) bg_popup_preview_window_pane_cp01_ParamLimits

0xa469,	// (0x00029456) bg_popup_preview_window_pane_cp01

0xb5eb,	// (0x0002a5d8) popup_phob_thumbnail2_window_g1_ParamLimits

0xb5eb,	// (0x0002a5d8) popup_phob_thumbnail2_window_g1

0xa20e,	// (0x000291fb) call2_cli_visual_pane

0x4efa,	// (0x00023ee7) popup_call2_audio_conf_window_ParamLimits

0x4efa,	// (0x00023ee7) popup_call2_audio_conf_window

0x4f13,	// (0x00023f00) popup_call2_audio_first_window_ParamLimits

0x4f13,	// (0x00023f00) popup_call2_audio_first_window

0x4fb1,	// (0x00023f9e) popup_call2_audio_in_window_ParamLimits

0x4fb1,	// (0x00023f9e) popup_call2_audio_in_window

0x4ff5,	// (0x00023fe2) popup_call2_audio_out_window_ParamLimits

0x4ff5,	// (0x00023fe2) popup_call2_audio_out_window

0x505f,	// (0x0002404c) popup_call2_audio_second_window_ParamLimits

0x505f,	// (0x0002404c) popup_call2_audio_second_window

0x50bd,	// (0x000240aa) popup_call2_audio_wait_window_ParamLimits

0x50bd,	// (0x000240aa) popup_call2_audio_wait_window

0xa20e,	// (0x000291fb) bg_popup_call2_act_pane_cp03

0xa44b,	// (0x00029438) list_conf_pane_cp

0xb5f7,	// (0x0002a5e4) popup_call2_audio_conf_window_t1

0xb605,	// (0x0002a5f2) list_single_graphic_popup_conf2_pane_ParamLimits

0xb605,	// (0x0002a5f2) list_single_graphic_popup_conf2_pane

0xae6a,	// (0x00029e57) list_highlight_pane_cp04

0xb618,	// (0x0002a605) list_single_graphic_popup_conf2_pane_g1

0xae7b,	// (0x00029e68) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0002e4e4) list_single_graphic_popup_conf2_pane_g

0xb622,	// (0x0002a60f) list_single_graphic_popup_conf2_pane_t1

0xb630,	// (0x0002a61d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb630,	// (0x0002a61d) bg_popup_call2_act_pane_cp01

0xb6ba,	// (0x0002a6a7) call_type_pane_cp05_ParamLimits

0xb6ba,	// (0x0002a6a7) call_type_pane_cp05

0xb70e,	// (0x0002a6fb) popup_call2_audio_second_window_g1_ParamLimits

0xb70e,	// (0x0002a6fb) popup_call2_audio_second_window_g1

0xb762,	// (0x0002a74f) popup_call2_audio_second_window_g2_ParamLimits

0xb762,	// (0x0002a74f) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0002e4e9) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0002e4e9) popup_call2_audio_second_window_g

0xb7c7,	// (0x0002a7b4) popup_call2_audio_second_window_t1_ParamLimits

0xb7c7,	// (0x0002a7b4) popup_call2_audio_second_window_t1

0xb882,	// (0x0002a86f) popup_call2_audio_second_window_t2_ParamLimits

0xb882,	// (0x0002a86f) popup_call2_audio_second_window_t2

0xb8d5,	// (0x0002a8c2) popup_call2_audio_second_window_t3_ParamLimits

0xb8d5,	// (0x0002a8c2) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0002e4f0) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0002e4f0) popup_call2_audio_second_window_t

0xa20e,	// (0x000291fb) bg_popup_call2_in_pane_cp02

0xa218,	// (0x00029205) call_type_pane_cp04

0xa220,	// (0x0002920d) popup_call2_audio_wait_window_g1

0xa228,	// (0x00029215) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0002e0cb) popup_call2_audio_wait_window_g

0xa230,	// (0x0002921d) popup_call2_audio_wait_window_t3

0xb9c8,	// (0x0002a9b5) bg_popup_call2_act_pane_ParamLimits

0xb9c8,	// (0x0002a9b5) bg_popup_call2_act_pane

0xba88,	// (0x0002aa75) call_type_pane_cp03_ParamLimits

0xba88,	// (0x0002aa75) call_type_pane_cp03

0xbaec,	// (0x0002aad9) popup_call2_audio_first_window_g1_ParamLimits

0xbaec,	// (0x0002aad9) popup_call2_audio_first_window_g1

0xbb5c,	// (0x0002ab49) popup_call2_audio_first_window_g2_ParamLimits

0xbb5c,	// (0x0002ab49) popup_call2_audio_first_window_g2

0xad84,	// (0x00029d71) popup_call2_audio_first_window_g3_ParamLimits

0xad84,	// (0x00029d71) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0002e4f9) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0002e4f9) popup_call2_audio_first_window_g

0xbc3a,	// (0x0002ac27) popup_call2_audio_first_window_t1_ParamLimits

0xbc3a,	// (0x0002ac27) popup_call2_audio_first_window_t1

0xbd3d,	// (0x0002ad2a) popup_call2_audio_first_window_t4_ParamLimits

0xbd3d,	// (0x0002ad2a) popup_call2_audio_first_window_t4

0xbe20,	// (0x0002ae0d) popup_call2_audio_first_window_t5_ParamLimits

0xbe20,	// (0x0002ae0d) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0002e504) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0002e504) popup_call2_audio_first_window_t

0xa461,	// (0x0002944e) bg_popup_call2_act_pane_g1

0xc489,	// (0x0002b476) popup_cale_lunar_info_window_t1

0xc497,	// (0x0002b484) popup_cale_lunar_info_window_t2

0xc4a5,	// (0x0002b492) popup_cale_lunar_info_window_t3

0xa20e,	// (0x000291fb) bg_popup_call2_bubble_pane

0xbf21,	// (0x0002af0e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf21,	// (0x0002af0e) bg_popup_call2_in_pane_cp01

0x9eea,	// (0x00028ed7) call_type_pane_cp02

0xbf69,	// (0x0002af56) popup_call2_audio_out_window_g1_ParamLimits

0xbf69,	// (0x0002af56) popup_call2_audio_out_window_g1

0xbf95,	// (0x0002af82) popup_call2_audio_out_window_g2_ParamLimits

0xbf95,	// (0x0002af82) popup_call2_audio_out_window_g2

0xbfbd,	// (0x0002afaa) popup_call2_audio_out_window_g3_ParamLimits

0xbfbd,	// (0x0002afaa) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0002e50d) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0002e50d) popup_call2_audio_out_window_g

0xbff8,	// (0x0002afe5) popup_call2_audio_out_window_t1_ParamLimits

0xbff8,	// (0x0002afe5) popup_call2_audio_out_window_t1

0xc057,	// (0x0002b044) popup_call2_audio_out_window_t2_ParamLimits

0xc057,	// (0x0002b044) popup_call2_audio_out_window_t2

0xc0ab,	// (0x0002b098) popup_call2_audio_out_window_t3_ParamLimits

0xc0ab,	// (0x0002b098) popup_call2_audio_out_window_t3

0xc0c1,	// (0x0002b0ae) popup_call2_audio_out_window_t4_ParamLimits

0xc0c1,	// (0x0002b0ae) popup_call2_audio_out_window_t4

0xc0d7,	// (0x0002b0c4) popup_call2_audio_out_window_t5_ParamLimits

0xc0d7,	// (0x0002b0c4) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0002e516) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0002e516) popup_call2_audio_out_window_t

0xc13b,	// (0x0002b128) bg_popup_call2_in_pane_ParamLimits

0xc13b,	// (0x0002b128) bg_popup_call2_in_pane

0xc197,	// (0x0002b184) popup_call2_audio_in_window_g1_ParamLimits

0xc197,	// (0x0002b184) popup_call2_audio_in_window_g1

0xc1cf,	// (0x0002b1bc) popup_call2_audio_in_window_g2_ParamLimits

0xc1cf,	// (0x0002b1bc) popup_call2_audio_in_window_g2

0xc207,	// (0x0002b1f4) popup_call2_audio_in_window_g3_ParamLimits

0xc207,	// (0x0002b1f4) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0002e523) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0002e523) popup_call2_audio_in_window_g

0xc25f,	// (0x0002b24c) popup_call2_audio_in_window_t1_ParamLimits

0xc25f,	// (0x0002b24c) popup_call2_audio_in_window_t1

0xc2df,	// (0x0002b2cc) popup_call2_audio_in_window_t2_ParamLimits

0xc2df,	// (0x0002b2cc) popup_call2_audio_in_window_t2

0xc35f,	// (0x0002b34c) popup_call2_audio_in_window_t3_ParamLimits

0xc35f,	// (0x0002b34c) popup_call2_audio_in_window_t3

0xc379,	// (0x0002b366) popup_call2_audio_in_window_t4_ParamLimits

0xc379,	// (0x0002b366) popup_call2_audio_in_window_t4

0xc38b,	// (0x0002b378) popup_call2_audio_in_window_t5_ParamLimits

0xc38b,	// (0x0002b378) popup_call2_audio_in_window_t5

0xc39d,	// (0x0002b38a) popup_call2_audio_in_window_t6_ParamLimits

0xc39d,	// (0x0002b38a) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0002e52c) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0002e52c) popup_call2_audio_in_window_t

0xa461,	// (0x0002944e) bg_popup_call2_in_pane_g1

0xc4b3,	// (0x0002b4a0) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0002e594) popup_cale_lunar_info_window_t

0xa469,	// (0x00029456) bg_popup_call2_rect_pane_ParamLimits

0xa469,	// (0x00029456) bg_popup_call2_rect_pane

0xa20e,	// (0x000291fb) call2_cli_visual_graphic_pane

0xa20e,	// (0x000291fb) call2_cli_visual_text_pane

0x12b4,	// (0x000202a1) smil_status_volume_pane_g3

0x0002,

0xa583,	// (0x00029570) call2_cli_visual_graphic_pane_g1

0xa583,	// (0x00029570) call2_cli_visual_graphic_pane_g2

0xa583,	// (0x00029570) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0002e539) call2_cli_visual_graphic_pane_g

0xc3af,	// (0x0002b39c) bg_popup_call2_rect_pane_g1

0xa60f,	// (0x000295fc) bg_popup_call2_rect_pane_g2

0xc3b7,	// (0x0002b3a4) bg_popup_call2_rect_pane_g3

0xc3bf,	// (0x0002b3ac) bg_popup_call2_rect_pane_g4

0xc3c7,	// (0x0002b3b4) bg_popup_call2_rect_pane_g5

0xc3cf,	// (0x0002b3bc) bg_popup_call2_rect_pane_g6

0xc3d7,	// (0x0002b3c4) bg_popup_call2_rect_pane_g7

0xc3df,	// (0x0002b3cc) bg_popup_call2_rect_pane_g8

0xc3e7,	// (0x0002b3d4) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0002e540) bg_popup_call2_rect_pane_g

0xc3ef,	// (0x0002b3dc) bg_popup_call2_bubble_pane_g1

0xc3f7,	// (0x0002b3e4) bg_popup_call2_bubble_pane_g2

0xc3ff,	// (0x0002b3ec) bg_popup_call2_bubble_pane_g3

0xc407,	// (0x0002b3f4) bg_popup_call2_bubble_pane_g4

0xc40f,	// (0x0002b3fc) bg_popup_call2_bubble_pane_g5

0xc417,	// (0x0002b404) bg_popup_call2_bubble_pane_g6

0xc41f,	// (0x0002b40c) bg_popup_call2_bubble_pane_g7

0xc427,	// (0x0002b414) bg_popup_call2_bubble_pane_g8

0xc42f,	// (0x0002b41c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0002e553) bg_popup_call2_bubble_pane_g

0x284b,	// (0x00021838) aid_cale_week_size_cell_pane

0x2e8a,	// (0x00021e77) aid_cams_cif_uncrop_pane_ParamLimits

0x2e8a,	// (0x00021e77) aid_cams_cif_uncrop_pane

0x2fe7,	// (0x00021fd4) aid_cams_size_cell_ParamLimits

0x2fe7,	// (0x00021fd4) aid_cams_size_cell

0x2ff3,	// (0x00021fe0) grid_cams_pane_ParamLimits

0x3001,	// (0x00021fee) linegrid_cams_pane_ParamLimits

0x31e9,	// (0x000221d6) call_video_pane_t1

0x3206,	// (0x000221f3) call_video_pane_t2

0x0001,

0xf253,	// (0x0002e240) call_video_pane_t

0x36d2,	// (0x000226bf) aid_cale_month_size_cell_pane_ParamLimits

0x36d2,	// (0x000226bf) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0002e5dd) smil_status_volume_pane_g

0x12c1,	// (0x000202ae) volume_smil_pane_ParamLimits

0x09c7,	// (0x0001f9b4) aid_popup2_width_pane

0x2791,	// (0x0002177e) cell_qdial_pane_g4_ParamLimits

0x2791,	// (0x0002177e) cell_qdial_pane_g4

0x45f3,	// (0x000235e0) aid_blid_cardinal_pane_ParamLimits

0x4603,	// (0x000235f0) aid_blid_destination_pane_ParamLimits

0x4603,	// (0x000235f0) aid_blid_destination_pane

0xa469,	// (0x00029456) bg_popup_call_poc_act_pane_ParamLimits

0xa469,	// (0x00029456) bg_popup_call_poc_act_pane

0xa469,	// (0x00029456) bg_popup_call_poc_inact_pane_ParamLimits

0xa469,	// (0x00029456) bg_popup_call_poc_inact_pane

0xc437,	// (0x0002b424) bg_popup_call_poc_act_pane_g1

0xc43f,	// (0x0002b42c) bg_popup_call_poc_act_pane_g2

0xc447,	// (0x0002b434) bg_popup_call_poc_act_pane_g3

0xc407,	// (0x0002b3f4) bg_popup_call_poc_act_pane_g4

0xc40f,	// (0x0002b3fc) bg_popup_call_poc_act_pane_g5

0xc44f,	// (0x0002b43c) bg_popup_call_poc_act_pane_g6

0xc41f,	// (0x0002b40c) bg_popup_call_poc_act_pane_g7

0xc457,	// (0x0002b444) bg_popup_call_poc_act_pane_g8

0xa20e,	// (0x000291fb) main_usb_pane

0x117e,	// (0x0002016b) popup_cale_lunar_info_window

0x351e,	// (0x0002250b) im_reading_pane_t1_ParamLimits

0xa7db,	// (0x000297c8) list_im_pane_ParamLimits

0xa7ec,	// (0x000297d9) scroll_pane_cp07_ParamLimits

0xa20e,	// (0x000291fb) grid_highlight_pane_cp012

0xa469,	// (0x00029456) mup_scale_pane_ParamLimits

0xad84,	// (0x00029d71) main_usb_pane_g1_ParamLimits

0xad84,	// (0x00029d71) main_usb_pane_g1

0x5126,	// (0x00024113) main_usb_pane_g2_ParamLimits

0x5126,	// (0x00024113) main_usb_pane_g2

0x0001,

0xf590,	// (0x0002e57d) main_usb_pane_g_ParamLimits

0xf590,	// (0x0002e57d) main_usb_pane_g

0x5132,	// (0x0002411f) main_usb_pane_t1_ParamLimits

0x5132,	// (0x0002411f) main_usb_pane_t1

0x5144,	// (0x00024131) main_usb_pane_t2_ParamLimits

0x5144,	// (0x00024131) main_usb_pane_t2

0x5156,	// (0x00024143) main_usb_pane_t3_ParamLimits

0x5156,	// (0x00024143) main_usb_pane_t3

0x5168,	// (0x00024155) main_usb_pane_t4_ParamLimits

0x5168,	// (0x00024155) main_usb_pane_t4

0x517a,	// (0x00024167) main_usb_pane_t5_ParamLimits

0x517a,	// (0x00024167) main_usb_pane_t5

0x518c,	// (0x00024179) main_usb_pane_t6_ParamLimits

0x518c,	// (0x00024179) main_usb_pane_t6

0x0005,

0xf595,	// (0x0002e582) main_usb_pane_t_ParamLimits

0x4592,	// (0x0002357f) aid_text_placing

0x459d,	// (0x0002358a) main_location2_pane_t1_ParamLimits

0x45b3,	// (0x000235a0) main_location2_pane_t2_ParamLimits

0x45c9,	// (0x000235b6) main_location2_pane_t3_ParamLimits

0x45df,	// (0x000235cc) main_location2_pane_t4_ParamLimits

0x45df,	// (0x000235cc) main_location2_pane_t4

0xf3b4,	// (0x0002e3a1) main_location2_pane_t_ParamLimits

0xa4a5,	// (0x00029492) find_pinb_pane_g2_ParamLimits

0xa4a5,	// (0x00029492) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0002e0f1) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0002e0f1) find_pinb_pane_g

0xa4b1,	// (0x0002949e) find_pinb_pane_t1_ParamLimits

0xa4c3,	// (0x000294b0) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0002e0f6) find_pinb_pane_t_ParamLimits

0xa20e,	// (0x000291fb) main_call3_pane

0x3c85,	// (0x00022c72) cale_month_day_heading_pane_t1_ParamLimits

0x3d07,	// (0x00022cf4) cale_month_day_heading_pane_t2_ParamLimits

0x3d80,	// (0x00022d6d) cale_month_day_heading_pane_t3_ParamLimits

0x3df9,	// (0x00022de6) cale_month_day_heading_pane_t4_ParamLimits

0x3e72,	// (0x00022e5f) cale_month_day_heading_pane_t5_ParamLimits

0x3ef3,	// (0x00022ee0) cale_month_day_heading_pane_t6_ParamLimits

0x3f7c,	// (0x00022f69) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0002e278) cale_month_day_heading_pane_t_ParamLimits

0xaa62,	// (0x00029a4f) smil_status_volume_pane

0x4ce4,	// (0x00023cd1) postcard_address_pane_ParamLimits

0x4ce4,	// (0x00023cd1) postcard_address_pane

0x4cf2,	// (0x00023cdf) postcard_message_pane_ParamLimits

0x4cf2,	// (0x00023cdf) postcard_message_pane

0x50fc,	// (0x000240e9) call2_cli_visual_pane_t1_ParamLimits

0x50fc,	// (0x000240e9) call2_cli_visual_pane_t1

0x554f,	// (0x0002453c) postcard_message_pane_t1_ParamLimits

0x554f,	// (0x0002453c) postcard_message_pane_t1

0xc66b,	// (0x0002b658) postcard_address_pane_t1_ParamLimits

0xc66b,	// (0x0002b658) postcard_address_pane_t1

0x5540,	// (0x0002452d) popup_call3_audio_in_window_ParamLimits

0x5540,	// (0x0002452d) popup_call3_audio_in_window

0x541e,	// (0x0002440b) bg_popup_call3_in_pane_ParamLimits

0x541e,	// (0x0002440b) bg_popup_call3_in_pane

0x5486,	// (0x00024473) popup_call3_audio_in_window_g1_ParamLimits

0x5486,	// (0x00024473) popup_call3_audio_in_window_g1

0x549e,	// (0x0002448b) popup_call3_audio_in_window_g2_ParamLimits

0x549e,	// (0x0002448b) popup_call3_audio_in_window_g2

0x54b6,	// (0x000244a3) popup_call3_audio_in_window_g3_ParamLimits

0x54b6,	// (0x000244a3) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0002e5e4) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0002e5e4) popup_call3_audio_in_window_g

0x54de,	// (0x000244cb) popup_call3_audio_in_window_t1_ParamLimits

0x54de,	// (0x000244cb) popup_call3_audio_in_window_t1

0x5506,	// (0x000244f3) popup_call3_audio_in_window_t2_ParamLimits

0x5506,	// (0x000244f3) popup_call3_audio_in_window_t2

0x552e,	// (0x0002451b) popup_call3_audio_in_window_t3_ParamLimits

0x552e,	// (0x0002451b) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0002e5ed) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0002e5ed) popup_call3_audio_in_window_t

0xa6d6,	// (0x000296c3) bg_popup_call3_rect_pane

0xc3af,	// (0x0002b39c) bg_popup_call3_rect_pane_g1

0xa60f,	// (0x000295fc) bg_popup_call3_rect_pane_g2

0xc3b7,	// (0x0002b3a4) bg_popup_call3_rect_pane_g3

0xc3bf,	// (0x0002b3ac) bg_popup_call3_rect_pane_g4

0xc3c7,	// (0x0002b3b4) bg_popup_call3_rect_pane_g5

0xc3cf,	// (0x0002b3bc) bg_popup_call3_rect_pane_g6

0xc3d7,	// (0x0002b3c4) bg_popup_call3_rect_pane_g7

0x4925,	// (0x00023912) mup_visualizer_osc_pane

0xb1fc,	// (0x0002a1e9) mup_visualizer_spec_pane

0x543e,	// (0x0002442b) call3_video_qcif_pane_ParamLimits

0x543e,	// (0x0002442b) call3_video_qcif_pane

0x5450,	// (0x0002443d) call3_video_qcif_uncrop_pane_ParamLimits

0x5450,	// (0x0002443d) call3_video_qcif_uncrop_pane

0x5460,	// (0x0002444d) call3_video_subqcif_pane_ParamLimits

0x5460,	// (0x0002444d) call3_video_subqcif_pane

0x5474,	// (0x00024461) call3_video_subqcif_uncrop_pane_ParamLimits

0x5474,	// (0x00024461) call3_video_subqcif_uncrop_pane

0x54ce,	// (0x000244bb) popup_call3_audio_in_window_g4_ParamLimits

0x54ce,	// (0x000244bb) popup_call3_audio_in_window_g4

0x540d,	// (0x000243fa) mup_spec_half_pane

0x5416,	// (0x00024403) mup_spec_half_pane_cp

0xc62b,	// (0x0002b618) mup_osc_middle_pane

0xc634,	// (0x0002b621) mup_visualizer_osc_pane_g1

0x53ed,	// (0x000243da) mup_spec_bar_pane_ParamLimits

0x53ed,	// (0x000243da) mup_spec_bar_pane

0xc618,	// (0x0002b605) mup_spec_bar_pane_g1

0xc622,	// (0x0002b60f) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0002e5d8) mup_spec_bar_pane_g

0x284b,	// (0x00021838) aid_cale_week_size_cell_pane_ParamLimits

0x2865,	// (0x00021852) bg_cale_heading_pane_ParamLimits

0x288e,	// (0x0002187b) bg_cale_pane_cp01_ParamLimits

0x28b0,	// (0x0002189d) cale_week_corner_pane_ParamLimits

0x28cf,	// (0x000218bc) cale_week_day_heading_pane_ParamLimits

0x28fd,	// (0x000218ea) cale_week_scroll_pane_g1_ParamLimits

0x2921,	// (0x0002190e) cale_week_scroll_pane_g2_ParamLimits

0x2939,	// (0x00021926) cale_week_scroll_pane_g3_ParamLimits

0x2951,	// (0x0002193e) cale_week_scroll_pane_g4_ParamLimits

0x2969,	// (0x00021956) cale_week_scroll_pane_g5_ParamLimits

0x2981,	// (0x0002196e) cale_week_scroll_pane_g6_ParamLimits

0x29a1,	// (0x0002198e) cale_week_scroll_pane_g7_ParamLimits

0x29c1,	// (0x000219ae) cale_week_scroll_pane_g8_ParamLimits

0x29e1,	// (0x000219ce) cale_week_scroll_pane_g9_ParamLimits

0x29fe,	// (0x000219eb) cale_week_scroll_pane_g10_ParamLimits

0x2a1b,	// (0x00021a08) cale_week_scroll_pane_g11_ParamLimits

0x2a3a,	// (0x00021a27) cale_week_scroll_pane_g12_ParamLimits

0x2a5f,	// (0x00021a4c) cale_week_scroll_pane_g13_ParamLimits

0x2a88,	// (0x00021a75) cale_week_scroll_pane_g14_ParamLimits

0x2ab1,	// (0x00021a9e) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0002e182) cale_week_scroll_pane_g_ParamLimits

0x2afa,	// (0x00021ae7) cale_week_time_pane_ParamLimits

0x2b1a,	// (0x00021b07) grid_cale_week_pane_ParamLimits

0xa64c,	// (0x00029639) listscroll_cale_week_pane_t1

0xa65e,	// (0x0002964b) scroll_pane_cp08_ParamLimits

0x374a,	// (0x00022737) cale_month_corner_pane_ParamLimits

0xaa38,	// (0x00029a25) cale_month_pane_t1

0x3c0c,	// (0x00022bf9) cale_month_week_pane_ParamLimits

0xad84,	// (0x00029d71) popup_call_status_window_g1_ParamLimits

0x441f,	// (0x0002340c) popup_call_status_window_g2_ParamLimits

0x442b,	// (0x00023418) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0002e328) popup_call_status_window_g_ParamLimits

0xadeb,	// (0x00029dd8) aid_call2_pane

0x4bcb,	// (0x00023bb8) msg_header_pane_g1

0x4ce4,	// (0x00023cd1) postcard_address2_pane_ParamLimits

0x4ce4,	// (0x00023cd1) postcard_address2_pane

0x4cf2,	// (0x00023cdf) postcard_message2_pane_ParamLimits

0x4cf2,	// (0x00023cdf) postcard_message2_pane

0x53a7,	// (0x00024394) message2_row_pane_ParamLimits

0x53a7,	// (0x00024394) message2_row_pane

0xc5d3,	// (0x0002b5c0) address2_row_pane_ParamLimits

0xc5d3,	// (0x0002b5c0) address2_row_pane

0xc5e6,	// (0x0002b5d3) postcard_message2_row_pane_g1

0xc5ee,	// (0x0002b5db) postcard_message2_row_pane_t1

0xc5e6,	// (0x0002b5d3) address2_row_pane_g1

0xc5ee,	// (0x0002b5db) address2_row_pane_t1

0x2d6e,	// (0x00021d5b) aid_size_cell_vorec

0xa20e,	// (0x000291fb) main_rss_pane

0x53c1,	// (0x000243ae) rss_list_single_pane_ParamLimits

0x53c1,	// (0x000243ae) rss_list_single_pane

0xc5fc,	// (0x0002b5e9) rss_list_single_pane_t1

0xc60a,	// (0x0002b5f7) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0002e5d3) rss_list_single_pane_t

0xa20e,	// (0x000291fb) main_camera2_pane

0xa20e,	// (0x000291fb) main_video2_pane

0x131f,	// (0x0002030c) cams_zoom_pane_cp2_ParamLimits

0x131f,	// (0x0002030c) cams_zoom_pane_cp2

0x132b,	// (0x00020318) image2_vga_pane_ParamLimits

0x132b,	// (0x00020318) image2_vga_pane

0x133a,	// (0x00020327) main_camera2_pane_g1_ParamLimits

0x133a,	// (0x00020327) main_camera2_pane_g1

0x1346,	// (0x00020333) main_camera2_pane_g2_ParamLimits

0x1346,	// (0x00020333) main_camera2_pane_g2

0x1352,	// (0x0002033f) main_camera2_pane_g3_ParamLimits

0x1352,	// (0x0002033f) main_camera2_pane_g3

0x135e,	// (0x0002034b) main_camera2_pane_g4_ParamLimits

0x135e,	// (0x0002034b) main_camera2_pane_g4

0x136a,	// (0x00020357) main_camera2_pane_g5_ParamLimits

0x136a,	// (0x00020357) main_camera2_pane_g5

0x1376,	// (0x00020363) main_camera2_pane_g6_ParamLimits

0x1376,	// (0x00020363) main_camera2_pane_g6

0x1382,	// (0x0002036f) main_camera2_pane_g7_ParamLimits

0x1382,	// (0x0002036f) main_camera2_pane_g7

0x138e,	// (0x0002037b) main_camera2_pane_g8_ParamLimits

0x138e,	// (0x0002037b) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0002e5f4) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0002e5f4) main_camera2_pane_g

0x13a6,	// (0x00020393) main_camera2_pane_t1_ParamLimits

0x13a6,	// (0x00020393) main_camera2_pane_t1

0x13b8,	// (0x000203a5) main_camera2_pane_t2_ParamLimits

0x13b8,	// (0x000203a5) main_camera2_pane_t2

0x13ca,	// (0x000203b7) main_camera2_pane_t3_ParamLimits

0x13ca,	// (0x000203b7) main_camera2_pane_t3

0x13dc,	// (0x000203c9) main_camera2_pane_t4_ParamLimits

0x13dc,	// (0x000203c9) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0002e607) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0002e607) main_camera2_pane_t

0x1439,	// (0x00020426) cams_zoom_pane_cp4_ParamLimits

0x1439,	// (0x00020426) cams_zoom_pane_cp4

0x1449,	// (0x00020436) image2_cif_pane_ParamLimits

0x1449,	// (0x00020436) image2_cif_pane

0x145e,	// (0x0002044b) image2_subqcif_pane_ParamLimits

0x145e,	// (0x0002044b) image2_subqcif_pane

0x146d,	// (0x0002045a) main_video2_pane_g1_ParamLimits

0x146d,	// (0x0002045a) main_video2_pane_g1

0x147f,	// (0x0002046c) main_video2_pane_g2_ParamLimits

0x147f,	// (0x0002046c) main_video2_pane_g2

0x148f,	// (0x0002047c) main_video2_pane_g3_ParamLimits

0x148f,	// (0x0002047c) main_video2_pane_g3

0x149f,	// (0x0002048c) main_video2_pane_g4_ParamLimits

0x149f,	// (0x0002048c) main_video2_pane_g4

0x14af,	// (0x0002049c) main_video2_pane_g5_ParamLimits

0x14af,	// (0x0002049c) main_video2_pane_g5

0x14bf,	// (0x000204ac) main_video2_pane_g6_ParamLimits

0x14bf,	// (0x000204ac) main_video2_pane_g6

0x0005,

0xf629,	// (0x0002e616) main_video2_pane_g_ParamLimits

0xf629,	// (0x0002e616) main_video2_pane_g

0x14d1,	// (0x000204be) main_video2_pane_t1_ParamLimits

0x14d1,	// (0x000204be) main_video2_pane_t1

0x14eb,	// (0x000204d8) main_video2_pane_t2_ParamLimits

0x14eb,	// (0x000204d8) main_video2_pane_t2

0x1511,	// (0x000204fe) main_video2_pane_t3_ParamLimits

0x1511,	// (0x000204fe) main_video2_pane_t3

0x0002,

0xf636,	// (0x0002e623) main_video2_pane_t_ParamLimits

0xf636,	// (0x0002e623) main_video2_pane_t

0x5243,	// (0x00024230) call_muted_g2

0x0001,

0xf5d8,	// (0x0002e5c5) call_muted_g

0xa20e,	// (0x000291fb) main_mup2_pane

0xc682,	// (0x0002b66f) main_mup2_pane_g1_ParamLimits

0xc682,	// (0x0002b66f) main_mup2_pane_g1

0x556a,	// (0x00024557) main_mup2_pane_g2_ParamLimits

0x556a,	// (0x00024557) main_mup2_pane_g2

0x1560,	// (0x0002054d) main_mup_pane_g13_cp1

0x1568,	// (0x00020555) mup_volume_pane_cp1

0x558c,	// (0x00024579) main_mup2_pane_g4_ParamLimits

0x558c,	// (0x00024579) main_mup2_pane_g4

0x55a1,	// (0x0002458e) main_mup2_pane_g5_ParamLimits

0x55a1,	// (0x0002458e) main_mup2_pane_g5

0x55b6,	// (0x000245a3) main_mup2_pane_g6_ParamLimits

0x55b6,	// (0x000245a3) main_mup2_pane_g6

0x55cb,	// (0x000245b8) main_mup2_pane_g7_ParamLimits

0x55cb,	// (0x000245b8) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0002e62a) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0002e62a) main_mup2_pane_g

0x55e7,	// (0x000245d4) main_mup2_pane_t1_ParamLimits

0x55e7,	// (0x000245d4) main_mup2_pane_t1

0x55fe,	// (0x000245eb) main_mup2_pane_t2_ParamLimits

0x55fe,	// (0x000245eb) main_mup2_pane_t2

0x5615,	// (0x00024602) main_mup2_pane_t3_ParamLimits

0x5615,	// (0x00024602) main_mup2_pane_t3

0x562c,	// (0x00024619) main_mup2_pane_t4_ParamLimits

0x562c,	// (0x00024619) main_mup2_pane_t4

0x5646,	// (0x00024633) main_mup2_pane_t5_ParamLimits

0x5646,	// (0x00024633) main_mup2_pane_t5

0x5660,	// (0x0002464d) main_mup2_pane_t6_ParamLimits

0x5660,	// (0x0002464d) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0002e639) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0002e639) main_mup2_pane_t

0x5698,	// (0x00024685) mup2_visualizer_pane_ParamLimits

0x5698,	// (0x00024685) mup2_visualizer_pane

0x56ce,	// (0x000246bb) mup_progress_pane_cp_ParamLimits

0x56ce,	// (0x000246bb) mup_progress_pane_cp

0x154b,	// (0x00020538) mup_volume_pane_cp_ParamLimits

0x154b,	// (0x00020538) mup_volume_pane_cp

0x56e7,	// (0x000246d4) mup2_visualizer_pane_g1_ParamLimits

0x56e7,	// (0x000246d4) mup2_visualizer_pane_g1

0xc68e,	// (0x0002b67b) mup2_visualizer_pane_g2_ParamLimits

0xc68e,	// (0x0002b67b) mup2_visualizer_pane_g2

0x56fc,	// (0x000246e9) mup2_visualizer_pane_g3_ParamLimits

0x56fc,	// (0x000246e9) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0002e646) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0002e646) mup2_visualizer_pane_g

0xb481,	// (0x0002a46e) aid_size_cell_fmradio

0x10fa,	// (0x000200e7) aid_height_parent_landcape

0xa86a,	// (0x00029857) wml_content_pane_cp

0xa872,	// (0x0002985f) wml_tabs_pane

0xa87b,	// (0x00029868) popup_wml_miniature_window

0xa883,	// (0x00029870) scroll_pane_cp021

0xa897,	// (0x00029884) wml_content_pane_comp8

0xa20e,	// (0x000291fb) bg_popup_sub_pane_cp05

0xc6ac,	// (0x0002b699) popup_wml_miniature_window_g1

0xc6b4,	// (0x0002b6a1) wml_miniature_view_pane

0x570a,	// (0x000246f7) aid_size_wml_view

0x5712,	// (0x000246ff) wml_miniature_view_pane_g1

0x571b,	// (0x00024708) wml_miniature_view_pane_g2

0x5724,	// (0x00024711) wml_miniature_view_pane_g3

0x572c,	// (0x00024719) wml_miniature_view_pane_g4

0x5734,	// (0x00024721) wml_miniature_view_pane_g5

0x573c,	// (0x00024729) wml_miniature_view_pane_g6

0x5744,	// (0x00024731) wml_miniature_view_pane_g7

0x574c,	// (0x00024739) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0002e64d) wml_miniature_view_pane_g

0xc682,	// (0x0002b66f) background_graphic_ParamLimits

0xc682,	// (0x0002b66f) background_graphic

0xc6bc,	// (0x0002b6a9) wml_tabs_2_pane

0xc6c5,	// (0x0002b6b2) wml_tabs_3_pane_ParamLimits

0xc6c5,	// (0x0002b6b2) wml_tabs_3_pane

0xc6d7,	// (0x0002b6c4) wml_tabs_4_pane_ParamLimits

0xc6d7,	// (0x0002b6c4) wml_tabs_4_pane

0xc6ed,	// (0x0002b6da) wml_tabs_5_pane_ParamLimits

0xc6ed,	// (0x0002b6da) wml_tabs_5_pane

0xc707,	// (0x0002b6f4) wml_tabs_pane_g2_ParamLimits

0xc707,	// (0x0002b6f4) wml_tabs_pane_g2

0xc71b,	// (0x0002b708) wml_tabs_pane_g3_ParamLimits

0xc71b,	// (0x0002b708) wml_tabs_pane_g3

0x5754,	// (0x00024741) wml_tabs_2_active_pane_ParamLimits

0x5754,	// (0x00024741) wml_tabs_2_active_pane

0x5766,	// (0x00024753) wml_tabs_2_passive_pane_ParamLimits

0x5766,	// (0x00024753) wml_tabs_2_passive_pane

0x5778,	// (0x00024765) wml_tabs_3_active_pane_cp_ParamLimits

0x5778,	// (0x00024765) wml_tabs_3_active_pane_cp

0x578b,	// (0x00024778) wml_tabs_3_passive_pane_ParamLimits

0x578b,	// (0x00024778) wml_tabs_3_passive_pane

0x579c,	// (0x00024789) wml_tabs_3_passive_pane_cp_ParamLimits

0x579c,	// (0x00024789) wml_tabs_3_passive_pane_cp

0x57b1,	// (0x0002479e) tabs_4_active_pane

0x57b9,	// (0x000247a6) tabs_4_passive_pane

0x57c1,	// (0x000247ae) tabs_4_passive_pane_cp

0x57c9,	// (0x000247b6) tabs_4_passive_pane_cp2

0x511e,	// (0x0002410b) aid_height_text

0x48ee,	// (0x000238db) mup_volume_cont_pane_ParamLimits

0x48ee,	// (0x000238db) mup_volume_cont_pane

0x2552,	// (0x0002153f) aid_size_cell_pinb

0x255c,	// (0x00021549) aid_size_list_pinb

0x56b7,	// (0x000246a4) mup2_volume_cont_pane_ParamLimits

0x56b7,	// (0x000246a4) mup2_volume_cont_pane

0x1537,	// (0x00020524) mup2_volume_cont_pane_g1_ParamLimits

0x1537,	// (0x00020524) mup2_volume_cont_pane_g1

0x09d3,	// (0x0001f9c0) aid_size_cell_touch_ParamLimits

0x09d3,	// (0x0001f9c0) aid_size_cell_touch

0x0c63,	// (0x0001fc50) touch_pane_ParamLimits

0x0c63,	// (0x0001fc50) touch_pane

0x0c59,	// (0x0001fc46) main_rss2_pane

0xc738,	// (0x0002b725) listscroll_rss2_pane

0xc741,	// (0x0002b72e) rss2_navigation_pane

0xc749,	// (0x0002b736) list_rss2_pane

0xaf0f,	// (0x00029efc) scroll_pane_cp22

0xc751,	// (0x0002b73e) rss2_navigation_pane_g1

0xc75a,	// (0x0002b747) rss2_navigation_pane_g2

0xc762,	// (0x0002b74f) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0002e65e) rss2_navigation_pane_g

0xc76a,	// (0x0002b757) rss2_navigation_pane_t1

0x57d3,	// (0x000247c0) rss2_list_single_pane_ParamLimits

0x57d3,	// (0x000247c0) rss2_list_single_pane

0xc778,	// (0x0002b765) rss2_list_single_pane_t2

0xc786,	// (0x0002b773) rss2_list_single_pane_t3_ParamLimits

0xc786,	// (0x0002b773) rss2_list_single_pane_t3

0xc7a3,	// (0x0002b790) rss2_list_single_pane_t4

0x420c,	// (0x000231f9) smil_status_pane_g1

0x1123,	// (0x00020110) main_image2_pane_ParamLimits

0x1123,	// (0x00020110) main_image2_pane

0x139a,	// (0x00020387) main_camera2_pane_g9_ParamLimits

0x139a,	// (0x00020387) main_camera2_pane_g9

0x13ee,	// (0x000203db) main_camera2_pane_t5_ParamLimits

0x13ee,	// (0x000203db) main_camera2_pane_t5

0x1400,	// (0x000203ed) main_camera2_pane_t6_ParamLimits

0x1400,	// (0x000203ed) main_camera2_pane_t6

0x57f6,	// (0x000247e3) main_image2_pane_g1_ParamLimits

0x57f6,	// (0x000247e3) main_image2_pane_g1

0x4ebb,	// (0x00023ea8) smil2_video_pane_ParamLimits

0x4ebb,	// (0x00023ea8) smil2_video_pane

0x0a07,	// (0x0001f9f4) aid_zoom_text_primary_cp

0x0c00,	// (0x0001fbed) popup_preview_fixed_window

0xa7d3,	// (0x000297c0) im_reading_pane_g1

0x12e4,	// (0x000202d1) cams2_bc_adjust_pane_cp_ParamLimits

0x12e4,	// (0x000202d1) cams2_bc_adjust_pane_cp

0x142b,	// (0x00020418) cams2_bc_adjust_pane_ParamLimits

0x142b,	// (0x00020418) cams2_bc_adjust_pane

0xd7c9,	// (0x0002c7b6) cams2_bc_adjust_pane_g1

0x1570,	// (0x0002055d) cams2_slider_pane

0x1579,	// (0x00020566) cams2_slider_pane_g1

0x1582,	// (0x0002056f) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0002e665) cams2_slider_pane_g

0x0cd4,	// (0x0001fcc1) calc_display_pane_ParamLimits

0x0cf2,	// (0x0001fcdf) calc_paper_pane_ParamLimits

0x0d0e,	// (0x0001fcfb) grid_calc_pane_ParamLimits

0x1059,	// (0x00020046) popup_clock_digital_window_t1_ParamLimits

0xb412,	// (0x0002a3ff) main_image_pane_t1

0x0cba,	// (0x0001fca7) aid_size_cell_calc_ParamLimits

0x0cba,	// (0x0001fca7) aid_size_cell_calc

0x1154,	// (0x00020141) popup_blid_sat_info2_window_ParamLimits

0x1154,	// (0x00020141) popup_blid_sat_info2_window

0xc7b9,	// (0x0002b7a6) aid_size_cell_blid

0xc7c1,	// (0x0002b7ae) bg_popup_window_pane_cp07

0xc7e4,	// (0x0002b7d1) grid_popup_blid_pane

0xc7ee,	// (0x0002b7db) heading_pane_cp05_ParamLimits

0xc7ee,	// (0x0002b7db) heading_pane_cp05

0xc8b8,	// (0x0002b8a5) cell_popup_blid_pane_ParamLimits

0xc8b8,	// (0x0002b8a5) cell_popup_blid_pane

0xc8e2,	// (0x0002b8cf) cell_popup_blid_pane_g1

0xc8ea,	// (0x0002b8d7) cell_popup_blid_pane_t1

0x567d,	// (0x0002466a) mup2_indicator_pane_ParamLimits

0x567d,	// (0x0002466a) mup2_indicator_pane

0xa6d6,	// (0x000296c3) mup2_visualizer_osc_pane

0xc69a,	// (0x0002b687) mup2_visualizer_spec_pane_ParamLimits

0xc69a,	// (0x0002b687) mup2_visualizer_spec_pane

0x5802,	// (0x000247ef) mup2_spec_half_pane

0x580b,	// (0x000247f8) mup2_spec_half_pane_cp

0x5815,	// (0x00024802) mup2_spec_bar_pane_ParamLimits

0x5815,	// (0x00024802) mup2_spec_bar_pane

0xc618,	// (0x0002b605) mup2_spec_bar_pane_g1

0xc622,	// (0x0002b60f) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0002e5d8) mup2_spec_bar_pane_g

0x5834,	// (0x00024821) mup2_osc_middle_pane

0xc634,	// (0x0002b621) mup2_visualizer_osc_pane_g1

0x9de6,	// (0x00028dd3) popup_number_entry_window_t1_ParamLimits

0x9df9,	// (0x00028de6) popup_number_entry_window_t2_ParamLimits

0x9e0b,	// (0x00028df8) popup_number_entry_window_t3_ParamLimits

0x9e1d,	// (0x00028e0a) popup_number_entry_window_t5_ParamLimits

0x9e1d,	// (0x00028e0a) popup_number_entry_window_t5

0xf0af,	// (0x0002e09c) popup_number_entry_window_t_ParamLimits

0x9e52,	// (0x00028e3f) text_title_cp2_ParamLimits

0x1098,	// (0x00020085) aid_hotspot_pointer_text2_pane

0x10ee,	// (0x000200db) main_viewer_pane_g9_ParamLimits

0x10ee,	// (0x000200db) main_viewer_pane_g9

0xaa38,	// (0x00029a25) cale_month_pane_t1_ParamLimits

0xaa75,	// (0x00029a62) bg_cale_pane_ParamLimits

0xaa8d,	// (0x00029a7a) list_cale_pane_ParamLimits

0xaa9e,	// (0x00029a8b) listscroll_cale_day_pane_t1

0xaab0,	// (0x00029a9d) scroll_pane_cp09_ParamLimits

0x492d,	// (0x0002391a) main_mup_eq_pane_t1_ParamLimits

0x492d,	// (0x0002391a) main_mup_eq_pane_t1

0x4949,	// (0x00023936) main_mup_eq_pane_t2_ParamLimits

0x4949,	// (0x00023936) main_mup_eq_pane_t2

0x4965,	// (0x00023952) main_mup_eq_pane_t3_ParamLimits

0x4965,	// (0x00023952) main_mup_eq_pane_t3

0x497f,	// (0x0002396c) main_mup_eq_pane_t4_ParamLimits

0x497f,	// (0x0002396c) main_mup_eq_pane_t4

0x4999,	// (0x00023986) main_mup_eq_pane_t5_ParamLimits

0x4999,	// (0x00023986) main_mup_eq_pane_t5

0x49b3,	// (0x000239a0) main_mup_eq_pane_t6_ParamLimits

0x49b3,	// (0x000239a0) main_mup_eq_pane_t6

0x49c9,	// (0x000239b6) main_mup_eq_pane_t7_ParamLimits

0x49c9,	// (0x000239b6) main_mup_eq_pane_t7

0x49df,	// (0x000239cc) main_mup_eq_pane_t8_ParamLimits

0x49df,	// (0x000239cc) main_mup_eq_pane_t8

0x49f5,	// (0x000239e2) main_mup_eq_pane_t9_ParamLimits

0x49f5,	// (0x000239e2) main_mup_eq_pane_t9

0x4a11,	// (0x000239fe) main_mup_eq_pane_t10_ParamLimits

0x4a11,	// (0x000239fe) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0002e427) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0002e427) main_mup_eq_pane_t

0x4ad6,	// (0x00023ac3) mup_equalizer_pane_cp5_ParamLimits

0x4aee,	// (0x00023adb) mup_equalizer_pane_cp6_ParamLimits

0x4b06,	// (0x00023af3) mup_equalizer_pane_cp7_ParamLimits

0x0c59,	// (0x0001fc46) main_gallery_pane

0xc63d,	// (0x0002b62a) smil2_volume_pane

0xc645,	// (0x0002b632) smil_status_volume_pane_g1_ParamLimits

0xc658,	// (0x0002b645) smil_status_volume_pane_g2_ParamLimits

0x12b4,	// (0x000202a1) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0002e5dd) smil_status_volume_pane_g_ParamLimits

0xc7c1,	// (0x0002b7ae) bg_popup_window_pane_cp07_ParamLimits

0xc7cf,	// (0x0002b7bc) blid_firmament_pane

0x583d,	// (0x0002482a) aid_size_cell_gallery_ParamLimits

0x583d,	// (0x0002482a) aid_size_cell_gallery

0x584b,	// (0x00024838) grid_gallery_pane_ParamLimits

0x584b,	// (0x00024838) grid_gallery_pane

0x585b,	// (0x00024848) cell_gallery_pane_ParamLimits

0x585b,	// (0x00024848) cell_gallery_pane

0xc8f8,	// (0x0002b8e5) bg_cell_gallery_focus_pane_ParamLimits

0xc8f8,	// (0x0002b8e5) bg_cell_gallery_focus_pane

0xc90a,	// (0x0002b8f7) cell_gallery_pane_g1_ParamLimits

0xc90a,	// (0x0002b8f7) cell_gallery_pane_g1

0x58a6,	// (0x00024893) cell_gallery_pane_g2_ParamLimits

0x58a6,	// (0x00024893) cell_gallery_pane_g2

0x58b3,	// (0x000248a0) cell_gallery_pane_g3_ParamLimits

0x58b3,	// (0x000248a0) cell_gallery_pane_g3

0xc916,	// (0x0002b903) cell_gallery_pane_g4_ParamLimits

0xc916,	// (0x0002b903) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0002e68b) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0002e68b) cell_gallery_pane_g

0xc922,	// (0x0002b90f) bg_cell_gallery_focus_pane_g1

0xc92a,	// (0x0002b917) bg_cell_gallery_focus_pane_g2

0xc932,	// (0x0002b91f) bg_cell_gallery_focus_pane_g3

0xc93a,	// (0x0002b927) bg_cell_gallery_focus_pane_g4

0xc942,	// (0x0002b92f) bg_cell_gallery_focus_pane_g5

0xc94a,	// (0x0002b937) bg_cell_gallery_focus_pane_g6

0xc952,	// (0x0002b93f) bg_cell_gallery_focus_pane_g7

0xc95a,	// (0x0002b947) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0002e694) bg_cell_gallery_focus_pane_g

0xc962,	// (0x0002b94f) aid_firma_cardinal

0xc976,	// (0x0002b963) blid_firmament_pane_t1

0xc98d,	// (0x0002b97a) blid_firmament_pane_t2

0xc9a4,	// (0x0002b991) blid_firmament_pane_t3

0xc9bb,	// (0x0002b9a8) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0002e6a5) blid_firmament_pane_t

0xc9d2,	// (0x0002b9bf) blid_sat_info_pane

0xc9e2,	// (0x0002b9cf) blid_sat_info_pane_g1

0xc9e2,	// (0x0002b9cf) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0002e6ae) blid_sat_info_pane_g

0xc9ec,	// (0x0002b9d9) blid_sat_info_pane_t1

0xc9fa,	// (0x0002b9e7) smil2_volume_content_pane

0xca03,	// (0x0002b9f0) smil2_volume_pane_g1

0xa976,	// (0x00029963) smil2_volume_content_pane_g1

0xca0b,	// (0x0002b9f8) smil2_volume_content_pane_g2

0xca14,	// (0x0002ba01) smil2_volume_content_pane_g3

0xca1d,	// (0x0002ba0a) smil2_volume_content_pane_g4

0xca26,	// (0x0002ba13) smil2_volume_content_pane_g5

0xca2f,	// (0x0002ba1c) smil2_volume_content_pane_g6

0xca38,	// (0x0002ba25) smil2_volume_content_pane_g7

0xca41,	// (0x0002ba2e) smil2_volume_content_pane_g8

0xca4a,	// (0x0002ba37) smil2_volume_content_pane_g9

0xca53,	// (0x0002ba40) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0002e6b3) smil2_volume_content_pane_g

0x2bdb,	// (0x00021bc8) cale_week_day_heading_pane_t1_ParamLimits

0x2c03,	// (0x00021bf0) cale_week_day_heading_pane_t2_ParamLimits

0x2c30,	// (0x00021c1d) cale_week_day_heading_pane_t3_ParamLimits

0x2c5d,	// (0x00021c4a) cale_week_day_heading_pane_t4_ParamLimits

0x2c8a,	// (0x00021c77) cale_week_day_heading_pane_t5_ParamLimits

0x2cb7,	// (0x00021ca4) cale_week_day_heading_pane_t6_ParamLimits

0x2ce4,	// (0x00021cd1) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0002e1a3) cale_week_day_heading_pane_t_ParamLimits

0xa67b,	// (0x00029668) bg_cale_side_pane_ParamLimits

0x0e69,	// (0x0001fe56) cale_week_time_pane_t1_ParamLimits

0x0e8d,	// (0x0001fe7a) cale_week_time_pane_t2_ParamLimits

0x0eb1,	// (0x0001fe9e) cale_week_time_pane_t3_ParamLimits

0x0ed5,	// (0x0001fec2) cale_week_time_pane_t4_ParamLimits

0x0ef9,	// (0x0001fee6) cale_week_time_pane_t5_ParamLimits

0x0f1f,	// (0x0001ff0c) cale_week_time_pane_t6_ParamLimits

0x0f47,	// (0x0001ff34) cale_week_time_pane_t7_ParamLimits

0x0f73,	// (0x0001ff60) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0002e1b2) cale_week_time_pane_t_ParamLimits

0x2d0c,	// (0x00021cf9) cell_cale_week_pane_g2_ParamLimits

0xa67b,	// (0x00029668) bg_cale_side_pane_cp01_ParamLimits

0x4005,	// (0x00022ff2) cale_month_week_pane_t1_ParamLimits

0x401e,	// (0x0002300b) cale_month_week_pane_t2_ParamLimits

0x4037,	// (0x00023024) cale_month_week_pane_t3_ParamLimits

0x4050,	// (0x0002303d) cale_month_week_pane_t4_ParamLimits

0x4069,	// (0x00023056) cale_month_week_pane_t5_ParamLimits

0x4086,	// (0x00023073) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0002e287) cale_month_week_pane_t_ParamLimits

0x0fad,	// (0x0001ff9a) cell_cale_month_pane_g1_ParamLimits

0x0c59,	// (0x0001fc46) main_cale_event_viewer_pane

0x9dbc,	// (0x00028da9) listscroll_cale_event_viewer_pane

0xca5c,	// (0x0002ba49) list_cale_ev_pane

0xca64,	// (0x0002ba51) scroll_pane_cp023

0x58c0,	// (0x000248ad) field_cale_ev_pane_ParamLimits

0x58c0,	// (0x000248ad) field_cale_ev_pane

0xca70,	// (0x0002ba5d) field_cale_ev_content_pane_ParamLimits

0xca70,	// (0x0002ba5d) field_cale_ev_content_pane

0xca7c,	// (0x0002ba69) field_cale_ev_pane_g1_ParamLimits

0xca7c,	// (0x0002ba69) field_cale_ev_pane_g1

0xca88,	// (0x0002ba75) field_cale_ev_pane_g2_ParamLimits

0xca88,	// (0x0002ba75) field_cale_ev_pane_g2

0xcaa0,	// (0x0002ba8d) field_cale_ev_pane_g3_ParamLimits

0xcaa0,	// (0x0002ba8d) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0002e6c8) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0002e6c8) field_cale_ev_pane_g

0xcab8,	// (0x0002baa5) field_cale_ev_pane_t1_ParamLimits

0xcab8,	// (0x0002baa5) field_cale_ev_pane_t1

0x58e4,	// (0x000248d1) field_cale_ev_content_pane_t1_ParamLimits

0x58e4,	// (0x000248d1) field_cale_ev_content_pane_t1

0xb2b0,	// (0x0002a29d) bg_button_pane_cp01

0x2839,	// (0x00021826) listscroll_cale_week_pane_ParamLimits

0xa643,	// (0x00029630) popup_toolbar_window_cp01

0xa64c,	// (0x00029639) listscroll_cale_week_pane_t1_ParamLimits

0x2839,	// (0x00021826) listscroll_cale_day_pane_ParamLimits

0xa643,	// (0x00029630) popup_toolbar_window_cp02

0xaa9e,	// (0x00029a8b) listscroll_cale_day_pane_t1_ParamLimits

0x1111,	// (0x000200fe) main_cale_month_pane_ParamLimits

0x1273,	// (0x00020260) popup_toolbar_window_cp03_ParamLimits

0x1273,	// (0x00020260) popup_toolbar_window_cp03

0x4dcb,	// (0x00023db8) main_image_pane_g2_ParamLimits

0x4dcb,	// (0x00023db8) main_image_pane_g2

0x4dd7,	// (0x00023dc4) main_image_pane_g3_ParamLimits

0x4dd7,	// (0x00023dc4) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0002e4b9) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0002e4b9) main_image_pane_g

0xb412,	// (0x0002a3ff) main_image_pane_t1_ParamLimits

0x4de3,	// (0x00023dd0) main_image_pane_t2_ParamLimits

0x4de3,	// (0x00023dd0) main_image_pane_t2

0x4df5,	// (0x00023de2) main_image_pane_t3_ParamLimits

0x4df5,	// (0x00023de2) main_image_pane_t3

0x4e07,	// (0x00023df4) main_image_pane_t4_ParamLimits

0x4e07,	// (0x00023df4) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0002e4c0) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0002e4c0) main_image_pane_t

0x4e19,	// (0x00023e06) popup_image_details_window_cp01

0x4e23,	// (0x00023e10) popup_toobar_trans_pane_cp01_ParamLimits

0x4e23,	// (0x00023e10) popup_toobar_trans_pane_cp01

0x11b5,	// (0x000201a2) popup_image_details_window_ParamLimits

0x11b5,	// (0x000201a2) popup_image_details_window

0x11c3,	// (0x000201b0) popup_image_focus_window

0x12d6,	// (0x000202c3) camera2_autofocus_pane_ParamLimits

0x12d6,	// (0x000202c3) camera2_autofocus_pane

0x9dbc,	// (0x00028da9) bg_popup_sub_pane_cp06

0xcacf,	// (0x0002babc) popup_image_focus_window_g1

0xcad7,	// (0x0002bac4) popup_image_focus_window_g2

0xcadf,	// (0x0002bacc) popup_image_focus_window_g3

0xcae7,	// (0x0002bad4) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0002e6cf) popup_image_focus_window_g

0xcaef,	// (0x0002badc) popup_image_focus_window_t1

0xcafd,	// (0x0002baea) popup_image_focus_window_t2

0xcb0d,	// (0x0002bafa) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0002e6d8) popup_image_focus_window_t

0xcb1b,	// (0x0002bb08) camera2_autofocus_pane_g1

0xa968,	// (0x00029955) bg_tb_trans_pane_cp01

0xcb29,	// (0x0002bb16) popup_image_details_window_g1

0xcb3c,	// (0x0002bb29) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0002e6ea) popup_image_details_window_g

0xcb65,	// (0x0002bb52) popup_image_details_window_t1

0xcb77,	// (0x0002bb64) popup_image_details_window_t2

0xcb90,	// (0x0002bb7d) popup_image_details_window_t3

0xcba4,	// (0x0002bb91) popup_image_details_window_t4

0xcbbf,	// (0x0002bbac) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0002e6f1) popup_image_details_window_t

0xa51a,	// (0x00029507) bg_calc_paper_pane_ParamLimits

0x0c59,	// (0x0001fc46) grid_highlight_pane_cp013

0x0d3a,	// (0x0001fd27) list_calc_pane_ParamLimits

0x0d4c,	// (0x0001fd39) scroll_pane_cp024

0xa52e,	// (0x0002951b) bg_calc_display_pane_ParamLimits

0x0d54,	// (0x0001fd41) calc_display_pane_t1_ParamLimits

0x0d69,	// (0x0001fd56) calc_display_pane_t2_ParamLimits

0x0d7e,	// (0x0001fd6b) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0002e123) calc_display_pane_t_ParamLimits

0x0de9,	// (0x0001fdd6) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0002e140) cell_calc_pane_g

0x0df2,	// (0x0001fddf) cell_calc_pane_t1

0xa58d,	// (0x0002957a) grid_highlight_pane_cp02_ParamLimits

0xa5a3,	// (0x00029590) toolbar_button_pane_cp01_ParamLimits

0xa5a3,	// (0x00029590) toolbar_button_pane_cp01

0xb463,	// (0x0002a450) temp_image_control_pane_ParamLimits

0xb463,	// (0x0002a450) temp_image_control_pane

0x1123,	// (0x00020110) main_mp3_pane

0xcbd9,	// (0x0002bbc6) temp_image_control_pane_g1_ParamLimits

0xcbd9,	// (0x0002bbc6) temp_image_control_pane_g1

0xcbe7,	// (0x0002bbd4) temp_image_control_pane_g2_ParamLimits

0xcbe7,	// (0x0002bbd4) temp_image_control_pane_g2

0xcbf9,	// (0x0002bbe6) temp_image_control_pane_g3_ParamLimits

0xcbf9,	// (0x0002bbe6) temp_image_control_pane_g3

0x592f,	// (0x0002491c) temp_image_control_pane_g4_ParamLimits

0x592f,	// (0x0002491c) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0002e6fc) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0002e6fc) temp_image_control_pane_g

0xcbd9,	// (0x0002bbc6) main_mp3_pane_g1

0x5940,	// (0x0002492d) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0002e705) main_mp3_pane_g

0xcc3c,	// (0x0002bc29) main_mp3_pane_t1

0xa6de,	// (0x000296cb) main_camera_pane_g8_ParamLimits

0xa6de,	// (0x000296cb) main_camera_pane_g8

0x2f9d,	// (0x00021f8a) main_video_pane_g7_ParamLimits

0x2f9d,	// (0x00021f8a) main_video_pane_g7

0x1419,	// (0x00020406) main_camera2_pane_t7_ParamLimits

0x1419,	// (0x00020406) main_camera2_pane_t7

0xa82a,	// (0x00029817) scroll_pane_cp025_ParamLimits

0xa82a,	// (0x00029817) scroll_pane_cp025

0xa83e,	// (0x0002982b) scroll_pane_cp026_ParamLimits

0xa83e,	// (0x0002982b) scroll_pane_cp026

0xa84d,	// (0x0002983a) wml_content_pane_ParamLimits

0x0c59,	// (0x0001fc46) main_touch_calib_pane

0x59e4,	// (0x000249d1) main_touch_calib_pane_g1

0x59f0,	// (0x000249dd) main_touch_calib_pane_g2

0x59fc,	// (0x000249e9) main_touch_calib_pane_g3

0x5a08,	// (0x000249f5) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0002e723) main_touch_calib_pane_g

0x5a14,	// (0x00024a01) main_touch_calib_pane_t1

0x5a2b,	// (0x00024a18) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0002e72c) main_touch_calib_pane_t

0xafde,	// (0x00029fcb) mup_progress_pane_cp02

0xb013,	// (0x0002a000) navi_pane_g1

0xb0ce,	// (0x0002a0bb) navi_pane_mp_t3

0x1123,	// (0x00020110) main_mp3_pane_ParamLimits

0x5359,	// (0x00024346) navi_pane_ParamLimits

0xcbd9,	// (0x0002bbc6) main_mp3_pane_g1_ParamLimits

0x5940,	// (0x0002492d) main_mp3_pane_g2_ParamLimits

0x594c,	// (0x00024939) main_mp3_pane_g3_ParamLimits

0x594c,	// (0x00024939) main_mp3_pane_g3

0x5958,	// (0x00024945) main_mp3_pane_g4_ParamLimits

0x5958,	// (0x00024945) main_mp3_pane_g4

0xcc09,	// (0x0002bbf6) main_mp3_pane_g5_ParamLimits

0xcc09,	// (0x0002bbf6) main_mp3_pane_g5

0xcc17,	// (0x0002bc04) main_mp3_pane_g6_ParamLimits

0xcc17,	// (0x0002bc04) main_mp3_pane_g6

0xcc24,	// (0x0002bc11) main_mp3_pane_g7_ParamLimits

0xcc24,	// (0x0002bc11) main_mp3_pane_g7

0xcc30,	// (0x0002bc1d) main_mp3_pane_g8_ParamLimits

0xcc30,	// (0x0002bc1d) main_mp3_pane_g8

0xf718,	// (0x0002e705) main_mp3_pane_g_ParamLimits

0x5964,	// (0x00024951) main_mp3_pane_t2

0x5974,	// (0x00024961) main_mp3_pane_t3

0xcc4a,	// (0x0002bc37) main_mp3_pane_t4

0xcc58,	// (0x0002bc45) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0002e716) main_mp3_pane_t

0xcc66,	// (0x0002bc53) mup_progress_pane_cp01

0x0a07,	// (0x0001f9f4) aid_zoom_text_secondary2

0xca5c,	// (0x0002ba49) list_cale_ev2_pane

0xca64,	// (0x0002ba51) scroll_pane_cp023_ParamLimits

0x5a86,	// (0x00024a73) field_cale_ev2_pane_ParamLimits

0x5a86,	// (0x00024a73) field_cale_ev2_pane

0x5aa1,	// (0x00024a8e) field_cale_ev2_pane_g1_ParamLimits

0x5aa1,	// (0x00024a8e) field_cale_ev2_pane_g1

0x5aad,	// (0x00024a9a) field_cale_ev2_pane_g2_ParamLimits

0x5aad,	// (0x00024a9a) field_cale_ev2_pane_g2

0x5ac5,	// (0x00024ab2) field_cale_ev2_pane_g3_ParamLimits

0x5ac5,	// (0x00024ab2) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0002e737) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0002e737) field_cale_ev2_pane_g

0x5add,	// (0x00024aca) field_cale_ev2_pane_t1_ParamLimits

0x5add,	// (0x00024aca) field_cale_ev2_pane_t1

0x5af4,	// (0x00024ae1) field_cale_ev2_pane_t2_ParamLimits

0x5af4,	// (0x00024ae1) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0002e740) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0002e740) field_cale_ev2_pane_t

0x4caa,	// (0x00023c97) main_postcard_pane_g5_ParamLimits

0x4caa,	// (0x00023c97) main_postcard_pane_g5

0x4cb8,	// (0x00023ca5) main_postcard_pane_g6_ParamLimits

0x4cb8,	// (0x00023ca5) main_postcard_pane_g6

0x2ddb,	// (0x00021dc8) camera2_autofocus_pane_cp_ParamLimits

0x2ddb,	// (0x00021dc8) camera2_autofocus_pane_cp

0x1123,	// (0x00020110) main_mup3_pane

0x5b4c,	// (0x00024b39) main_mup3_pane_g1_ParamLimits

0x5b4c,	// (0x00024b39) main_mup3_pane_g1

0x5b6d,	// (0x00024b5a) main_mup3_pane_g2_ParamLimits

0x5b6d,	// (0x00024b5a) main_mup3_pane_g2

0x5be1,	// (0x00024bce) main_mup3_pane_g3_ParamLimits

0x5be1,	// (0x00024bce) main_mup3_pane_g3

0x5c46,	// (0x00024c33) main_mup3_pane_g4_ParamLimits

0x5c46,	// (0x00024c33) main_mup3_pane_g4

0x5cab,	// (0x00024c98) main_mup3_pane_g5_ParamLimits

0x5cab,	// (0x00024c98) main_mup3_pane_g5

0x5d10,	// (0x00024cfd) main_mup3_pane_g6_ParamLimits

0x5d10,	// (0x00024cfd) main_mup3_pane_g6

0xcc7a,	// (0x0002bc67) main_mup3_pane_g7_ParamLimits

0xcc7a,	// (0x0002bc67) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0002e750) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0002e750) main_mup3_pane_g

0x5d86,	// (0x00024d73) main_mup3_pane_t1_ParamLimits

0x5d86,	// (0x00024d73) main_mup3_pane_t1

0x5df1,	// (0x00024dde) main_mup3_pane_t2_ParamLimits

0x5df1,	// (0x00024dde) main_mup3_pane_t2

0x5eb6,	// (0x00024ea3) main_mup3_pane_t4_ParamLimits

0x5eb6,	// (0x00024ea3) main_mup3_pane_t4

0x5f0a,	// (0x00024ef7) main_mup3_pane_t5_ParamLimits

0x5f0a,	// (0x00024ef7) main_mup3_pane_t5

0x5fba,	// (0x00024fa7) main_mup3_pane_t6_ParamLimits

0x5fba,	// (0x00024fa7) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0002e761) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0002e761) main_mup3_pane_t

0x6064,	// (0x00025051) mup3_progress_pane_ParamLimits

0x6064,	// (0x00025051) mup3_progress_pane

0x60e2,	// (0x000250cf) popup_mup3_control_window_ParamLimits

0x60e2,	// (0x000250cf) popup_mup3_control_window

0xcc88,	// (0x0002bc75) popup_mup3_text_window

0x60ff,	// (0x000250ec) mup3_progress_pane_t1

0x611e,	// (0x0002510b) mup3_progress_pane_t2

0xcc90,	// (0x0002bc7d) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0002e76e) mup3_progress_pane_t

0xccad,	// (0x0002bc9a) mup_progress_pane_cp03

0x9dbc,	// (0x00028da9) bg_tb_trans_pane_cp04

0x613d,	// (0x0002512a) mup3_volume_pane

0x6145,	// (0x00025132) popup_mup3_control_window_g1

0xd265,	// (0x0002c252) mup3_volume_pane_g1

0xd26e,	// (0x0002c25b) mup3_volume_pane_g2

0xd277,	// (0x0002c264) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0002e775) mup3_volume_pane_g

0x9dbc,	// (0x00028da9) bg_tb_trans_pane_cp03

0xccbd,	// (0x0002bcaa) popup_mup3_text_window_g1

0xccc5,	// (0x0002bcb2) popup_mup3_text_window_t1

0xa576,	// (0x00029563) list_calc_item_pane_g1_ParamLimits

0xc72f,	// (0x0002b71c) mup_volume_pane_cp_g1

0x5a44,	// (0x00024a31) main_touch_calib_pane_t3

0x5a5a,	// (0x00024a47) main_touch_calib_pane_t4

0x5a70,	// (0x00024a5d) main_touch_calib_pane_t5

0x09bf,	// (0x0001f9ac) aid_cell_size_toolbar2

0x09c7,	// (0x0001f9b4) aid_popup3_width_pane

0x0a07,	// (0x0001f9f4) aid_zoom_text_msg_primary

0x2db8,	// (0x00021da5) vorec_t7

0xa53a,	// (0x00029527) bg_calc_paper_pane_g1_ParamLimits

0xa546,	// (0x00029533) bg_calc_paper_pane_g2_ParamLimits

0xa552,	// (0x0002953f) bg_calc_paper_pane_g3_ParamLimits

0xa55e,	// (0x0002954b) bg_calc_paper_pane_g4_ParamLimits

0xa56a,	// (0x00029557) bg_calc_paper_pane_g5_ParamLimits

0x270e,	// (0x000216fb) bg_calc_paper_pane_g6_ParamLimits

0x271f,	// (0x0002170c) bg_calc_paper_pane_g7_ParamLimits

0x2730,	// (0x0002171d) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0002e12a) bg_calc_paper_pane_g_ParamLimits

0x2741,	// (0x0002172e) calc_bg_paper_pane_g9_ParamLimits

0x2ecc,	// (0x00021eb9) image_qvga_pane_ParamLimits

0x2ecc,	// (0x00021eb9) image_qvga_pane

0xa469,	// (0x00029456) bg_popup_sub_pane_cp04_ParamLimits

0xb38e,	// (0x0002a37b) popup_mup_playback_window_g1_ParamLimits

0xb39a,	// (0x0002a387) popup_mup_playback_window_t1_ParamLimits

0xb3af,	// (0x0002a39c) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0002e4b4) popup_mup_playback_window_t_ParamLimits

0x557b,	// (0x00024568) main_mup2_pane_g3_ParamLimits

0x557b,	// (0x00024568) main_mup2_pane_g3

0x328f,	// (0x0002227c) popup_toolbar_window_cp04

0xb7b6,	// (0x0002a7a3) popup_call2_audio_second_window_g3_ParamLimits

0xb7b6,	// (0x0002a7a3) popup_call2_audio_second_window_g3

0xbbc0,	// (0x0002abad) popup_call2_audio_first_window_g4_ParamLimits

0xbbc0,	// (0x0002abad) popup_call2_audio_first_window_g4

0xc23f,	// (0x0002b22c) popup_call2_audio_in_window_g4_ParamLimits

0xc23f,	// (0x0002b22c) popup_call2_audio_in_window_g4

0x4dbe,	// (0x00023dab) aid_area_sk_bg_cut_ParamLimits

0x4dbe,	// (0x00023dab) aid_area_sk_bg_cut

0xb3c4,	// (0x0002a3b1) aid_area_sk_bg_cut_2_ParamLimits

0xb3c4,	// (0x0002a3b1) aid_area_sk_bg_cut_2

0x5896,	// (0x00024883) aid_placing_details_win

0x589e,	// (0x0002488b) aid_placing_details_win_2

0xcb1b,	// (0x0002bb08) camera2_autofocus_pane_g1_ParamLimits

0x0bf1,	// (0x0001fbde) popup_fixed_preview_cale_window_ParamLimits

0x0bf1,	// (0x0001fbde) popup_fixed_preview_cale_window

0xb14e,	// (0x0002a13b) navi_slider_pane_g3

0xb157,	// (0x0002a144) navi_slider_pane_g4

0xb160,	// (0x0002a14d) navi_slider_pane_g5

0xb14e,	// (0x0002a13b) navi_slider_pane_g6

0x107f,	// (0x0002006c) navi_slider_pane_g7

0xb275,	// (0x0002a262) mup_scale_pane_g3

0xb27e,	// (0x0002a26b) mup_scale_pane_g4

0xb287,	// (0x0002a274) mup_scale_pane_g5

0x4b1e,	// (0x00023b0b) mup_scale_pane_g6

0x4b27,	// (0x00023b14) mup_scale_pane_g7

0xb14e,	// (0x0002a13b) cams2_slider_pane_g3

0xc7b1,	// (0x0002b79e) cams2_slider_pane_g4

0x158b,	// (0x00020578) cams2_slider_pane_g5

0xb14e,	// (0x0002a13b) cams2_slider_pane_g6

0x1593,	// (0x00020580) cams2_slider_pane_g7

0xc9e2,	// (0x0002b9cf) camera2_autofocus_pane_cp_g1

0xc59e,	// (0x0002b58b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc59e,	// (0x0002b58b) bg_popup_preview_window_pane_cp02

0xccd3,	// (0x0002bcc0) list_fp_cale_pane_ParamLimits

0xccd3,	// (0x0002bcc0) list_fp_cale_pane

0xccdf,	// (0x0002bccc) popup_fixed_preview_cale_window_t1_ParamLimits

0xccdf,	// (0x0002bccc) popup_fixed_preview_cale_window_t1

0x614e,	// (0x0002513b) popup_fixed_preview_cale_window_t2_ParamLimits

0x614e,	// (0x0002513b) popup_fixed_preview_cale_window_t2

0x6163,	// (0x00025150) popup_fixed_preview_cale_window_t3_ParamLimits

0x6163,	// (0x00025150) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0002e77c) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0002e77c) popup_fixed_preview_cale_window_t

0x6178,	// (0x00025165) list_single_fp_cale_pane_ParamLimits

0x6178,	// (0x00025165) list_single_fp_cale_pane

0xccfd,	// (0x0002bcea) list_single_fp_cale_pane_g1_ParamLimits

0xccfd,	// (0x0002bcea) list_single_fp_cale_pane_g1

0xcd09,	// (0x0002bcf6) list_single_fp_cale_pane_g2_ParamLimits

0xcd09,	// (0x0002bcf6) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0002e783) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0002e783) list_single_fp_cale_pane_g

0xcd22,	// (0x0002bd0f) list_single_fp_cale_pane_t1_ParamLimits

0xcd22,	// (0x0002bd0f) list_single_fp_cale_pane_t1

0xcd34,	// (0x0002bd21) list_single_fp_cale_pane_t2_ParamLimits

0xcd34,	// (0x0002bd21) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0002e78a) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0002e78a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0c59,	// (0x0001fc46) main_dialer_pane

0x6188,	// (0x00025175) aid_cell_size_keypad

0x6192,	// (0x0002517f) dialer_ne_pane

0x619c,	// (0x00025189) grid_dialer_command_1_pane

0x61a4,	// (0x00025191) grid_dialer_command_2_pane

0x61ac,	// (0x00025199) grid_dialer_keypad_pane

0x61c0,	// (0x000251ad) bg_popup_call_pane_cp06_ParamLimits

0x61c0,	// (0x000251ad) bg_popup_call_pane_cp06

0x61cc,	// (0x000251b9) dialer_ne_clear_pane_ParamLimits

0x61cc,	// (0x000251b9) dialer_ne_clear_pane

0xcd67,	// (0x0002bd54) dialer_ne_pane_g1

0xcd6f,	// (0x0002bd5c) dialer_ne_pane_t1_ParamLimits

0xcd6f,	// (0x0002bd5c) dialer_ne_pane_t1

0x61d8,	// (0x000251c5) dialer_ne_pane_t2_ParamLimits

0x61d8,	// (0x000251c5) dialer_ne_pane_t2

0x61f5,	// (0x000251e2) dialer_ne_pane_t3_ParamLimits

0x61f5,	// (0x000251e2) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0002e78f) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0002e78f) dialer_ne_pane_t

0x6219,	// (0x00025206) dialer_ne_pane_t3_copy1_ParamLimits

0x6219,	// (0x00025206) dialer_ne_pane_t3_copy1

0x623d,	// (0x0002522a) cell_dialer_keypad_pane_ParamLimits

0x623d,	// (0x0002522a) cell_dialer_keypad_pane

0x6254,	// (0x00025241) cell_dialer_command_1_pane_ParamLimits

0x6254,	// (0x00025241) cell_dialer_command_1_pane

0x626a,	// (0x00025257) cell_dialer_command_2_pane_ParamLimits

0x626a,	// (0x00025257) cell_dialer_command_2_pane

0xcd81,	// (0x0002bd6e) bg_button_pane_cp02_ParamLimits

0xcd81,	// (0x0002bd6e) bg_button_pane_cp02

0x6279,	// (0x00025266) cell_dialer_keypad_pane_g1_ParamLimits

0x6279,	// (0x00025266) cell_dialer_keypad_pane_g1

0xcd81,	// (0x0002bd6e) bg_button_pane_cp03_ParamLimits

0xcd81,	// (0x0002bd6e) bg_button_pane_cp03

0x628e,	// (0x0002527b) cell_dialer_command_1_pane_g1_ParamLimits

0x628e,	// (0x0002527b) cell_dialer_command_1_pane_g1

0xcd8d,	// (0x0002bd7a) bg_button_pane_cp04

0x62a2,	// (0x0002528f) cell_dialer_command_2_pane_g1

0xa6d6,	// (0x000296c3) bg_button_pane_cp06

0xcd95,	// (0x0002bd82) dialer_ne_clear_pane_g1

0xb01f,	// (0x0002a00c) navi_pane_g2

0xb04d,	// (0x0002a03a) navi_pane_g3

0x0002,

0xf3ca,	// (0x0002e3b7) navi_pane_g

0xb0dc,	// (0x0002a0c9) navi_pane_mv_g2

0xb105,	// (0x0002a0f2) navi_pane_mv_g5

0x4680,	// (0x0002366d) navi_pane_mv_t1

0xa52e,	// (0x0002951b) main_clock2_pane

0xd280,	// (0x0002c26d) main_clock2_list_pane_ParamLimits

0xd280,	// (0x0002c26d) main_clock2_list_pane

0x62fd,	// (0x000252ea) main_clock2_pane_t1_ParamLimits

0x62fd,	// (0x000252ea) main_clock2_pane_t1

0x632b,	// (0x00025318) main_clock2_pane_t2_ParamLimits

0x632b,	// (0x00025318) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0002e79b) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0002e79b) main_clock2_pane_t

0x6390,	// (0x0002537d) popup_clock_analogue_window_cp03_ParamLimits

0x6390,	// (0x0002537d) popup_clock_analogue_window_cp03

0x63ae,	// (0x0002539b) popup_clock_digital_window_cp02_ParamLimits

0x63ae,	// (0x0002539b) popup_clock_digital_window_cp02

0x6423,	// (0x00025410) main_clock2_list_single_pane_ParamLimits

0x6423,	// (0x00025410) main_clock2_list_single_pane

0xa6d6,	// (0x000296c3) list_highlight_pane_cp05

0xcdcd,	// (0x0002bdba) main_clock2_list_single_pane_t1

0x328f,	// (0x0002227c) popup_toolbar_window_cp04_ParamLimits

0x58ff,	// (0x000248ec) camera2_autofocus_pane_g2_ParamLimits

0x58ff,	// (0x000248ec) camera2_autofocus_pane_g2

0x590b,	// (0x000248f8) camera2_autofocus_pane_g3_ParamLimits

0x590b,	// (0x000248f8) camera2_autofocus_pane_g3

0x5917,	// (0x00024904) camera2_autofocus_pane_g4_ParamLimits

0x5917,	// (0x00024904) camera2_autofocus_pane_g4

0x5923,	// (0x00024910) camera2_autofocus_pane_g5_ParamLimits

0x5923,	// (0x00024910) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0002e6df) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0002e6df) camera2_autofocus_pane_g

0x5b09,	// (0x00024af6) camera2_autofocus_pane_cp_g2

0x5b11,	// (0x00024afe) camera2_autofocus_pane_cp_g3

0x5b19,	// (0x00024b06) camera2_autofocus_pane_cp_g4

0x5b21,	// (0x00024b0e) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0002e745) camera2_autofocus_pane_cp_g

0x61b8,	// (0x000251a5) popup_dialer_spcha_window

0x9dbc,	// (0x00028da9) bg_popup_sub_pane_cp07

0xcddb,	// (0x0002bdc8) list_spcha_pane

0xcde3,	// (0x0002bdd0) list_single_spcha_pane_ParamLimits

0xcde3,	// (0x0002bdd0) list_single_spcha_pane

0x9dbc,	// (0x00028da9) list_highlight_pane_cp06

0xcdf4,	// (0x0002bde1) list_single_spcha_pane_t1

0xbfe9,	// (0x0002afd6) popup_call2_audio_out_window_g4_ParamLimits

0xbfe9,	// (0x0002afd6) popup_call2_audio_out_window_g4

0x0c59,	// (0x0001fc46) main_imed2_pane

0x11cd,	// (0x000201ba) popup_imed_adjust2_window

0x11e0,	// (0x000201cd) popup_imed_trans_window_ParamLimits

0x11e0,	// (0x000201cd) popup_imed_trans_window

0xc81a,	// (0x0002b807) popup_blid_sat_info2_window_t1

0xc828,	// (0x0002b815) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0002e674) popup_blid_sat_info2_window_t

0x6435,	// (0x00025422) aid_size_cell_colour_35

0x644f,	// (0x0002543c) aid_size_cell_colour_112

0x6466,	// (0x00025453) aid_size_cell_effect

0xa968,	// (0x00029955) bg_tb_trans_pane_cp02

0xb441,	// (0x0002a42e) heading_imed_pane

0x6480,	// (0x0002546d) listscroll_imed_pane

0xce02,	// (0x0002bdef) heading_imed_pane_g1

0xce0a,	// (0x0002bdf7) heading_imed_pane_t1

0xce18,	// (0x0002be05) grid_imed_colour_35_pane_ParamLimits

0xce18,	// (0x0002be05) grid_imed_colour_35_pane

0x648c,	// (0x00025479) grid_imed_effect_pane

0xce34,	// (0x0002be21) list_imed_aspect_pane

0x649c,	// (0x00025489) scroll_pane_cp027_ParamLimits

0x649c,	// (0x00025489) scroll_pane_cp027

0x64a8,	// (0x00025495) cell_imed_effect_pane_ParamLimits

0x64a8,	// (0x00025495) cell_imed_effect_pane

0xce3c,	// (0x0002be29) cell_imed_colour_pane_ParamLimits

0xce3c,	// (0x0002be29) cell_imed_colour_pane

0xce86,	// (0x0002be73) cell_imed_colour_pane_g1_ParamLimits

0xce86,	// (0x0002be73) cell_imed_colour_pane_g1

0xce97,	// (0x0002be84) hgihlgiht_grid_pane_cp016_ParamLimits

0xce97,	// (0x0002be84) hgihlgiht_grid_pane_cp016

0x64c4,	// (0x000254b1) cell_imed_effect_pane_g1

0x64cc,	// (0x000254b9) grid_highlight_pane_cp017

0xcea8,	// (0x0002be95) list_imed_single_pane_ParamLimits

0xcea8,	// (0x0002be95) list_imed_single_pane

0x9dbc,	// (0x00028da9) list_highlight_pane_cp07

0xcebc,	// (0x0002bea9) list_imed_aspect_pane_comp1_t1

0xc5aa,	// (0x0002b597) bg_tb_trans_pane_cp05

0xcede,	// (0x0002becb) popup_imed_adjust2_window_g1

0xcf05,	// (0x0002bef2) popup_imed_adjust2_window_t1

0xcf1d,	// (0x0002bf0a) slider_imed_adjust_pane

0xcf31,	// (0x0002bf1e) slider_imed_adjust_pane_g1

0xcf41,	// (0x0002bf2e) slider_imed_adjust_pane_g2

0xcf51,	// (0x0002bf3e) slider_imed_adjust_pane_g3

0xcf62,	// (0x0002bf4f) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0002e7b8) slider_imed_adjust_pane_g

0x64d5,	// (0x000254c2) aid_size_cell_clipart2

0xcf73,	// (0x0002bf60) grid_imed_clipart_pane

0xcf7d,	// (0x0002bf6a) scroll_pane_cp031

0x64e1,	// (0x000254ce) cell_imed_clipart_pane_ParamLimits

0x64e1,	// (0x000254ce) cell_imed_clipart_pane

0x64ff,	// (0x000254ec) cell_imed_clipart_pane_g1

0x9dbc,	// (0x00028da9) grid_highlight_pane_cp014

0x62df,	// (0x000252cc) main_clock2_pane_g1_ParamLimits

0x62df,	// (0x000252cc) main_clock2_pane_g1

0x63ca,	// (0x000253b7) aid_call2_pane_cp10

0x63dc,	// (0x000253c9) aid_call_pane_cp10

0xaf7e,	// (0x00029f6b) popup_clock_analogue_window_cp10_g1

0xaf7e,	// (0x00029f6b) popup_clock_analogue_window_cp10_g2

0x63ee,	// (0x000253db) popup_clock_analogue_window_cp10_g3

0x63ee,	// (0x000253db) popup_clock_analogue_window_cp10_g4

0xaf7e,	// (0x00029f6b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0002e7a6) popup_clock_analogue_window_cp10_g

0x6404,	// (0x000253f1) popup_clock_analogue_window_cp10_t1

0x159c,	// (0x00020589) clock_digital_number_pane_cp10_ParamLimits

0x159c,	// (0x00020589) clock_digital_number_pane_cp10

0x15b6,	// (0x000205a3) clock_digital_number_pane_cp11_ParamLimits

0x15b6,	// (0x000205a3) clock_digital_number_pane_cp11

0x15d0,	// (0x000205bd) clock_digital_number_pane_cp12_ParamLimits

0x15d0,	// (0x000205bd) clock_digital_number_pane_cp12

0x15ea,	// (0x000205d7) clock_digital_number_pane_cp13_ParamLimits

0x15ea,	// (0x000205d7) clock_digital_number_pane_cp13

0x1606,	// (0x000205f3) clock_digital_separator_pane_cp10_ParamLimits

0x1606,	// (0x000205f3) clock_digital_separator_pane_cp10

0x1620,	// (0x0002060d) popup_clock_digital_window_cp02_t1_ParamLimits

0x1620,	// (0x0002060d) popup_clock_digital_window_cp02_t1

0xa461,	// (0x0002944e) clock_digital_number_pane_cp10_g1

0xa461,	// (0x0002944e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0002e7c1) clock_digital_number_pane_cp10_g

0xa461,	// (0x0002944e) clock_digital_separator_pane_cp10_g1

0xa461,	// (0x0002944e) clock_digital_separator_pane_g2_cp10

0xb10d,	// (0x0002a0fa) navi_pane_vded_g4

0xb116,	// (0x0002a103) navi_pane_vded_g5

0xb11f,	// (0x0002a10c) navi_pane_vded_t1

0x0c59,	// (0x0001fc46) main_vded_pane

0x6508,	// (0x000254f5) main_vded_pane_g1

0x6514,	// (0x00025501) main_vded_pane_g2

0x651e,	// (0x0002550b) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0002e7c6) main_vded_pane_g

0x6528,	// (0x00025515) main_vded_pane_t1

0x6536,	// (0x00025523) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0002e7cd) main_vded_pane_t

0x6544,	// (0x00025531) vded_slider_pane

0x654e,	// (0x0002553b) vded_video_pane

0xcf85,	// (0x0002bf72) vded_video_pane_g1

0x655a,	// (0x00025547) vded_video_pane_g2

0xc9e2,	// (0x0002b9cf) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0002e7d2) vded_video_pane_g

0xcf8f,	// (0x0002bf7c) vded_slider_pane_g1

0xc72f,	// (0x0002b71c) vded_slider_pane_g2

0xcf98,	// (0x0002bf85) vded_slider_pane_g3

0xcfa1,	// (0x0002bf8e) vded_slider_pane_g4

0xcfaa,	// (0x0002bf97) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0002e7d9) vded_slider_pane_g

0x60d6,	// (0x000250c3) mup3_rocker_pane_ParamLimits

0x60d6,	// (0x000250c3) mup3_rocker_pane

0x6563,	// (0x00025550) mup3_control_keys_pane_g1

0x656b,	// (0x00025558) mup3_control_keys_pane_g2

0x6573,	// (0x00025560) mup3_control_keys_pane_g3

0x657b,	// (0x00025568) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0002e7e4) mup3_control_keys_pane_g

0x0c19,	// (0x0001fc06) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c19,	// (0x0001fc06) popup_toolbar2_fixed_window_cp01

0x60f2,	// (0x000250df) popup_toolbar2_fixed_window_cp02_ParamLimits

0x60f2,	// (0x000250df) popup_toolbar2_fixed_window_cp02

0xb928,	// (0x0002a915) popup_call2_audio_second_window_t4_ParamLimits

0xb928,	// (0x0002a915) popup_call2_audio_second_window_t4

0xbe56,	// (0x0002ae43) popup_call2_audio_first_window_t6_ParamLimits

0xbe56,	// (0x0002ae43) popup_call2_audio_first_window_t6

0xc0ec,	// (0x0002b0d9) popup_call2_audio_out_window_t6_ParamLimits

0xc0ec,	// (0x0002b0d9) popup_call2_audio_out_window_t6

0x0c59,	// (0x0001fc46) main_vitu_pane

0x658b,	// (0x00025578) aid_size_cell_itu_ParamLimits

0x658b,	// (0x00025578) aid_size_cell_itu

0xd280,	// (0x0002c26d) bg_popup_window_pane_cp08_ParamLimits

0xd280,	// (0x0002c26d) bg_popup_window_pane_cp08

0x6599,	// (0x00025586) field_vitu_entry_pane_ParamLimits

0x6599,	// (0x00025586) field_vitu_entry_pane

0x65a8,	// (0x00025595) grid_vitu_function_pane_ParamLimits

0x65a8,	// (0x00025595) grid_vitu_function_pane

0x65b8,	// (0x000255a5) grid_vitu_itu_pane_ParamLimits

0x65b8,	// (0x000255a5) grid_vitu_itu_pane

0x65c8,	// (0x000255b5) cell_vitu_itu_pane_ParamLimits

0x65c8,	// (0x000255b5) cell_vitu_itu_pane

0x65df,	// (0x000255cc) cell_vitu_function_pane_ParamLimits

0x65df,	// (0x000255cc) cell_vitu_function_pane

0xa968,	// (0x00029955) bg_popup_sub_pane_cp08_ParamLimits

0xa968,	// (0x00029955) bg_popup_sub_pane_cp08

0x65f3,	// (0x000255e0) field_vitu_entry_pane_t1_ParamLimits

0x65f3,	// (0x000255e0) field_vitu_entry_pane_t1

0xcfcb,	// (0x0002bfb8) field_vitu_entry_pane_t2_ParamLimits

0xcfcb,	// (0x0002bfb8) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0002e7f2) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0002e7f2) field_vitu_entry_pane_t

0xcfe8,	// (0x0002bfd5) bg_button_pane_cp05_ParamLimits

0xcfe8,	// (0x0002bfd5) bg_button_pane_cp05

0x660d,	// (0x000255fa) cell_vitu_itu_pane_g1

0x6625,	// (0x00025612) cell_vitu_itu_pane_t1_ParamLimits

0x6625,	// (0x00025612) cell_vitu_itu_pane_t1

0x6637,	// (0x00025624) cell_vitu_itu_pane_t2_ParamLimits

0x6637,	// (0x00025624) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0002e7f7) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0002e7f7) cell_vitu_itu_pane_t

0xcff6,	// (0x0002bfe3) bg_button_pane_cp07

0x667a,	// (0x00025667) cell_vitu_function_pane_g1

0x0d32,	// (0x0001fd1f) main_calc_pane_g1

0x09fb,	// (0x0001f9e8) aid_visual_content_pane

0x0c59,	// (0x0001fc46) main_vradio_pane

0x6683,	// (0x00025670) main_vradio_pane_g1_ParamLimits

0x6683,	// (0x00025670) main_vradio_pane_g1

0xd000,	// (0x0002bfed) main_vradio_pane_g2_ParamLimits

0xd000,	// (0x0002bfed) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0002e7fe) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0002e7fe) main_vradio_pane_g

0x6691,	// (0x0002567e) main_vradio_pane_t1_ParamLimits

0x6691,	// (0x0002567e) main_vradio_pane_t1

0x66a3,	// (0x00025690) main_vradio_pane_t2_ParamLimits

0x66a3,	// (0x00025690) main_vradio_pane_t2

0xd00d,	// (0x0002bffa) main_vradio_pane_t3_ParamLimits

0xd00d,	// (0x0002bffa) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0002e803) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0002e803) main_vradio_pane_t

0x66b5,	// (0x000256a2) vradio_rocker_control_pane_ParamLimits

0x66b5,	// (0x000256a2) vradio_rocker_control_pane

0x66c1,	// (0x000256ae) vradio_station_info_pane_ParamLimits

0x66c1,	// (0x000256ae) vradio_station_info_pane

0xd021,	// (0x0002c00e) vradio_frequency_info_pane_ParamLimits

0xd021,	// (0x0002c00e) vradio_frequency_info_pane

0xc9e2,	// (0x0002b9cf) vradio_station_info_pane_g1

0xd030,	// (0x0002c01d) vradio_station_info_pane_t1_ParamLimits

0xd030,	// (0x0002c01d) vradio_station_info_pane_t1

0xd052,	// (0x0002c03f) vradio_station_info_pane_t2_ParamLimits

0xd052,	// (0x0002c03f) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0002e80a) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0002e80a) vradio_station_info_pane_t

0xd064,	// (0x0002c051) vradio_tuning_pane

0xd06c,	// (0x0002c059) vradio_rocker_control_pane_g1

0xd074,	// (0x0002c061) vradio_rocker_control_pane_g2

0xd07c,	// (0x0002c069) vradio_rocker_control_pane_g3

0xd084,	// (0x0002c071) vradio_rocker_control_pane_g4

0xd08c,	// (0x0002c079) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0002e80f) vradio_rocker_control_pane_g

0x66ce,	// (0x000256bb) vradio_frequency_info_pane_g1

0xd094,	// (0x0002c081) vradio_frequency_info_pane_t1_ParamLimits

0xd094,	// (0x0002c081) vradio_frequency_info_pane_t1

0x66d8,	// (0x000256c5) vradio_tuning_pane_g1

0x66e3,	// (0x000256d0) vradio_tuning_pane_t1

0x0a17,	// (0x0001fa04) area_side_right_pane_ParamLimits

0x0a17,	// (0x0001fa04) area_side_right_pane

0xc565,	// (0x0002b552) status_small_pane_g1

0xc56d,	// (0x0002b55a) status_small_pane_g2

0xc576,	// (0x0002b563) status_small_pane_g3

0xc57f,	// (0x0002b56c) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0002e5ca) status_small_pane_g

0xc588,	// (0x0002b575) status_small_pane_t1

0x0c59,	// (0x0001fc46) main_video3_pane

0xd0a8,	// (0x0002c095) cams_zoom_vslider_pane

0xd0b0,	// (0x0002c09d) image3_wide_pane_ParamLimits

0xd0b0,	// (0x0002c09d) image3_wide_pane

0xd0ca,	// (0x0002c0b7) image3_wide_small_pane

0xd0d6,	// (0x0002c0c3) main_video3_pane_g1_ParamLimits

0xd0d6,	// (0x0002c0c3) main_video3_pane_g1

0xd0f2,	// (0x0002c0df) main_video3_pane_g2_ParamLimits

0xd0f2,	// (0x0002c0df) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0002e81a) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0002e81a) main_video3_pane_g

0xd10e,	// (0x0002c0fb) main_video3_pane_t1_ParamLimits

0xd10e,	// (0x0002c0fb) main_video3_pane_t1

0xd139,	// (0x0002c126) main_video3_pane_t2_ParamLimits

0xd139,	// (0x0002c126) main_video3_pane_t2

0xd166,	// (0x0002c153) main_video3_pane_t3_ParamLimits

0xd166,	// (0x0002c153) main_video3_pane_t3

0x0002,

0xf832,	// (0x0002e81f) main_video3_pane_t_ParamLimits

0xf832,	// (0x0002e81f) main_video3_pane_t

0xd193,	// (0x0002c180) cams_zoom_vslider_pane_g1

0xd19c,	// (0x0002c189) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0002e826) cams_zoom_vslider_pane_g

0xd1a4,	// (0x0002c191) small_slider_vertical_pane

0xc9e2,	// (0x0002b9cf) small_slider_vertical_pane_g1

0xc9e2,	// (0x0002b9cf) small_slider_vertical_pane_g2

0xd1ac,	// (0x0002c199) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0002e82b) small_slider_vertical_pane_g

0x0c59,	// (0x0001fc46) main_hwr_training_pane

0xd1b5,	// (0x0002c1a2) hwr_training_instruct_pane_ParamLimits

0xd1b5,	// (0x0002c1a2) hwr_training_instruct_pane

0x66f2,	// (0x000256df) hwr_training_navi_pane_ParamLimits

0x66f2,	// (0x000256df) hwr_training_navi_pane

0x670c,	// (0x000256f9) hwr_training_write_pane_ParamLimits

0x670c,	// (0x000256f9) hwr_training_write_pane

0x9dbc,	// (0x00028da9) bg_frame_shadow_pane

0xd1ec,	// (0x0002c1d9) hwr_training_write_pane_g1

0xd1f4,	// (0x0002c1e1) hwr_training_write_pane_g2

0xd1fc,	// (0x0002c1e9) hwr_training_write_pane_g3

0xd204,	// (0x0002c1f1) hwr_training_write_pane_g4

0xd20c,	// (0x0002c1f9) hwr_training_write_pane_g5

0xd214,	// (0x0002c201) hwr_training_write_pane_g6

0xd21c,	// (0x0002c209) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0002e832) hwr_training_write_pane_g

0x1641,	// (0x0002062e) hwr_training_navi_pane_g1_ParamLimits

0x1641,	// (0x0002062e) hwr_training_navi_pane_g1

0x1653,	// (0x00020640) hwr_training_navi_pane_g2_ParamLimits

0x1653,	// (0x00020640) hwr_training_navi_pane_g2

0x1665,	// (0x00020652) hwr_training_navi_pane_g3_ParamLimits

0x1665,	// (0x00020652) hwr_training_navi_pane_g3

0x1675,	// (0x00020662) hwr_training_navi_pane_g4_ParamLimits

0x1675,	// (0x00020662) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0002e841) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0002e841) hwr_training_navi_pane_g

0x168f,	// (0x0002067c) hwr_training_navi_pane_t1

0x6744,	// (0x00025731) list_single_hwr_training_instruct_pane_ParamLimits

0x6744,	// (0x00025731) list_single_hwr_training_instruct_pane

0xd224,	// (0x0002c211) list_single_hwr_training_instruct_pane_t1

0xc922,	// (0x0002b90f) bg_frame_shadow_pane_g1

0xd233,	// (0x0002c220) bg_frame_shadow_pane_g2

0xd23b,	// (0x0002c228) bg_frame_shadow_pane_g3

0xd243,	// (0x0002c230) bg_frame_shadow_pane_g4

0xd24b,	// (0x0002c238) bg_frame_shadow_pane_g5

0xd28e,	// (0x0002c27b) bg_frame_shadow_pane_g6

0xd296,	// (0x0002c283) bg_frame_shadow_pane_g7

0xa5e7,	// (0x000295d4) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0002e84c) bg_frame_shadow_pane_g

0x0c59,	// (0x0001fc46) main_video_tele_dialer_pane

0x169d,	// (0x0002068a) aid_size_cell_video_keypad_ParamLimits

0x169d,	// (0x0002068a) aid_size_cell_video_keypad

0x16ad,	// (0x0002069a) grid_video_dialer_keypad_pane_ParamLimits

0x16ad,	// (0x0002069a) grid_video_dialer_keypad_pane

0x16bb,	// (0x000206a8) video_down_pane_cp_ParamLimits

0x16bb,	// (0x000206a8) video_down_pane_cp

0x16c9,	// (0x000206b6) cell_video_dialer_keypad_pane_ParamLimits

0x16c9,	// (0x000206b6) cell_video_dialer_keypad_pane

0xd29e,	// (0x0002c28b) bg_button_pane_cp08_ParamLimits

0xd29e,	// (0x0002c28b) bg_button_pane_cp08

0x679d,	// (0x0002578a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x679d,	// (0x0002578a) cell_video_dialer_keypad_pane_g1

0x60ca,	// (0x000250b7) mup3_rocker2_pane_ParamLimits

0x60ca,	// (0x000250b7) mup3_rocker2_pane

0xc9e2,	// (0x0002b9cf) mup3_rocker2_pane_g1

0x1131,	// (0x0002011e) main_dialer2_pane

0x0c59,	// (0x0001fc46) main_mp4_pane

0x16fe,	// (0x000206eb) main_mp4_pane_g1_ParamLimits

0x16fe,	// (0x000206eb) main_mp4_pane_g1

0x170c,	// (0x000206f9) main_mp4_pane_g2_ParamLimits

0x170c,	// (0x000206f9) main_mp4_pane_g2

0x171a,	// (0x00020707) main_mp4_pane_g3_ParamLimits

0x171a,	// (0x00020707) main_mp4_pane_g3

0x176d,	// (0x0002075a) main_mp4_pane_g4_ParamLimits

0x176d,	// (0x0002075a) main_mp4_pane_g4

0x179b,	// (0x00020788) main_mp4_pane_g5_ParamLimits

0x179b,	// (0x00020788) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0002e86c) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0002e86c) main_mp4_pane_g

0x180f,	// (0x000207fc) main_mp4_pane_t1_ParamLimits

0x180f,	// (0x000207fc) main_mp4_pane_t1

0x186b,	// (0x00020858) main_mp4_pane_t2_ParamLimits

0x186b,	// (0x00020858) main_mp4_pane_t2

0xd2aa,	// (0x0002c297) main_mp4_pane_t3_ParamLimits

0xd2aa,	// (0x0002c297) main_mp4_pane_t3

0x18bd,	// (0x000208aa) main_mp4_pane_t4_ParamLimits

0x18bd,	// (0x000208aa) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0002e87d) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0002e87d) main_mp4_pane_t

0x18fd,	// (0x000208ea) mp4_progress_pane_ParamLimits

0x18fd,	// (0x000208ea) mp4_progress_pane

0x1947,	// (0x00020934) mp4_rocker_pane_ParamLimits

0x1947,	// (0x00020934) mp4_rocker_pane

0xd2d8,	// (0x0002c2c5) mp4_progress_pane_t1

0xd2f1,	// (0x0002c2de) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0002e886) mp4_progress_pane_t

0xd30a,	// (0x0002c2f7) mup_progress_pane_cp04

0xd7d1,	// (0x0002c7be) mp4_rocker_pane_g1

0x1967,	// (0x00020954) aid_cell_size_keypad2_ParamLimits

0x1967,	// (0x00020954) aid_cell_size_keypad2

0x1977,	// (0x00020964) dialer2_ne_pane_ParamLimits

0x1977,	// (0x00020964) dialer2_ne_pane

0x1983,	// (0x00020970) grid_dialer2_keypad_pane_ParamLimits

0x1983,	// (0x00020970) grid_dialer2_keypad_pane

0xd31d,	// (0x0002c30a) bg_popup_call_pane_cp07_ParamLimits

0xd31d,	// (0x0002c30a) bg_popup_call_pane_cp07

0x67d8,	// (0x000257c5) dialer2_ne_pane_t1_ParamLimits

0x67d8,	// (0x000257c5) dialer2_ne_pane_t1

0x1991,	// (0x0002097e) cell_dialer2_keypad_pane_ParamLimits

0x1991,	// (0x0002097e) cell_dialer2_keypad_pane

0xd33d,	// (0x0002c32a) bg_button_pane_pane_cp04_ParamLimits

0xd33d,	// (0x0002c32a) bg_button_pane_pane_cp04

0x67fd,	// (0x000257ea) cell_dialer2_keypad_pane_g1_ParamLimits

0x67fd,	// (0x000257ea) cell_dialer2_keypad_pane_g1

0x3161,	// (0x0002214e) aid_placing_vt_set_content_ParamLimits

0x3161,	// (0x0002214e) aid_placing_vt_set_content

0x3189,	// (0x00022176) aid_placing_vt_set_title_ParamLimits

0x3189,	// (0x00022176) aid_placing_vt_set_title

0x0c59,	// (0x0001fc46) main_image3_pane

0x19da,	// (0x000209c7) area_side_right_pane_cp01_ParamLimits

0x19da,	// (0x000209c7) area_side_right_pane_cp01

0x1a09,	// (0x000209f6) main_image3_pane_g1_ParamLimits

0x1a09,	// (0x000209f6) main_image3_pane_g1

0x1a17,	// (0x00020a04) main_image3_pane_g2_ParamLimits

0x1a17,	// (0x00020a04) main_image3_pane_g2

0x1a30,	// (0x00020a1d) main_image3_pane_g3_ParamLimits

0x1a30,	// (0x00020a1d) main_image3_pane_g3

0x1a49,	// (0x00020a36) main_image3_pane_g4_ParamLimits

0x1a49,	// (0x00020a36) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0002e895) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0002e895) main_image3_pane_g

0x1a62,	// (0x00020a4f) main_image3_pane_t1_ParamLimits

0x1a62,	// (0x00020a4f) main_image3_pane_t1

0x1a87,	// (0x00020a74) main_image3_pane_t2_ParamLimits

0x1a87,	// (0x00020a74) main_image3_pane_t2

0x1aa6,	// (0x00020a93) main_image3_pane_t3_ParamLimits

0x1aa6,	// (0x00020a93) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0002e89e) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0002e89e) main_image3_pane_t

0xd280,	// (0x0002c26d) grid_sctrl_middle_pane_cp01_ParamLimits

0xd280,	// (0x0002c26d) grid_sctrl_middle_pane_cp01

0x6865,	// (0x00025852) cell_sctrl_middle_pane_cp01_ParamLimits

0x6865,	// (0x00025852) cell_sctrl_middle_pane_cp01

0x6876,	// (0x00025863) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6876,	// (0x00025863) cell_sctrl_middle_pane_cp01_g1

0x0c59,	// (0x0001fc46) main_call4_pane

0x1b07,	// (0x00020af4) aid_size_button_call4_ParamLimits

0x1b07,	// (0x00020af4) aid_size_button_call4

0x1b3d,	// (0x00020b2a) call4_windows_pane_ParamLimits

0x1b3d,	// (0x00020b2a) call4_windows_pane

0x1b52,	// (0x00020b3f) grid_call4_button_pane_ParamLimits

0x1b52,	// (0x00020b3f) grid_call4_button_pane

0x688f,	// (0x0002587c) call4_windows_conf_pane

0x68aa,	// (0x00025897) popup_call4_audio_first_window_ParamLimits

0x68aa,	// (0x00025897) popup_call4_audio_first_window

0x68fc,	// (0x000258e9) popup_call4_audio_second_window_ParamLimits

0x68fc,	// (0x000258e9) popup_call4_audio_second_window

0x6915,	// (0x00025902) popup_call4_audio_wait_window_ParamLimits

0x6915,	// (0x00025902) popup_call4_audio_wait_window

0x1b76,	// (0x00020b63) cell_call4_button_pane_ParamLimits

0x1b76,	// (0x00020b63) cell_call4_button_pane

0x6923,	// (0x00025910) bg_button_pane_cp09_ParamLimits

0x6923,	// (0x00025910) bg_button_pane_cp09

0x1b99,	// (0x00020b86) cell_call4_button_pane_g1_ParamLimits

0x1b99,	// (0x00020b86) cell_call4_button_pane_g1

0x692f,	// (0x0002591c) cell_call4_button_pane_t1_ParamLimits

0x692f,	// (0x0002591c) cell_call4_button_pane_t1

0xd351,	// (0x0002c33e) popup_call4_audio_conf_window_ParamLimits

0xd351,	// (0x0002c33e) popup_call4_audio_conf_window

0x60ff,	// (0x000250ec) mup3_progress_pane_t1_ParamLimits

0x611e,	// (0x0002510b) mup3_progress_pane_t2_ParamLimits

0xcc90,	// (0x0002bc7d) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0002e76e) mup3_progress_pane_t_ParamLimits

0xccad,	// (0x0002bc9a) mup_progress_pane_cp03_ParamLimits

0x6583,	// (0x00025570) mup3_control_keys_pane_g4_copy1

0x192b,	// (0x00020918) mp4_rocker2_pane_ParamLimits

0x192b,	// (0x00020918) mp4_rocker2_pane

0xd36b,	// (0x0002c358) mp4_rocker2_pane_g1

0xd373,	// (0x0002c360) mp4_rocker2_pane_g2

0x1bd8,	// (0x00020bc5) mp4_rocker2_pane_g3

0x1be0,	// (0x00020bcd) mp4_rocker2_pane_g4

0x1be8,	// (0x00020bd5) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0002e8a7) mp4_rocker2_pane_g

0x0c59,	// (0x0001fc46) main_camera4_pane

0x0c59,	// (0x0001fc46) main_video4_pane

0x675d,	// (0x0002574a) main_video_tele_dialer_pane_t1_ParamLimits

0x675d,	// (0x0002574a) main_video_tele_dialer_pane_t1

0x676f,	// (0x0002575c) main_video_tele_dialer_pane_t2_ParamLimits

0x676f,	// (0x0002575c) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0002e85d) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0002e85d) main_video_tele_dialer_pane_t

0x1c08,	// (0x00020bf5) cam4_autofocus_pane_ParamLimits

0x1c08,	// (0x00020bf5) cam4_autofocus_pane

0x1c20,	// (0x00020c0d) cam4_image_uncrop_pane_ParamLimits

0x1c20,	// (0x00020c0d) cam4_image_uncrop_pane

0x1c39,	// (0x00020c26) cam4_indicators_pane_ParamLimits

0x1c39,	// (0x00020c26) cam4_indicators_pane

0x1c55,	// (0x00020c42) main_camera4_pane_g1_ParamLimits

0x1c55,	// (0x00020c42) main_camera4_pane_g1

0x1c61,	// (0x00020c4e) main_camera4_pane_g2_ParamLimits

0x1c61,	// (0x00020c4e) main_camera4_pane_g2

0x1c61,	// (0x00020c4e) main_camera4_pane_g3_ParamLimits

0x1c61,	// (0x00020c4e) main_camera4_pane_g3

0x1c6d,	// (0x00020c5a) main_camera4_pane_g4_ParamLimits

0x1c6d,	// (0x00020c5a) main_camera4_pane_g4

0x1c79,	// (0x00020c66) main_camera4_pane_g5_ParamLimits

0x1c79,	// (0x00020c66) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0002e8b2) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0002e8b2) main_camera4_pane_g

0x1c93,	// (0x00020c80) main_camera4_pane_t1_ParamLimits

0x1c93,	// (0x00020c80) main_camera4_pane_t1

0x1cb7,	// (0x00020ca4) bg_tb_trans_pane_cp06

0x1ccd,	// (0x00020cba) cam4_indicators_pane_g1

0x1cde,	// (0x00020ccb) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0002e8cd) cam4_indicators_pane_g

0x1cf6,	// (0x00020ce3) cam4_indicators_pane_t1

0x1d20,	// (0x00020d0d) main_video4_pane_g1_ParamLimits

0x1d20,	// (0x00020d0d) main_video4_pane_g1

0x1d2c,	// (0x00020d19) main_video4_pane_g2_ParamLimits

0x1d2c,	// (0x00020d19) main_video4_pane_g2

0x1d38,	// (0x00020d25) main_video4_pane_g3_ParamLimits

0x1d38,	// (0x00020d25) main_video4_pane_g3

0x1d44,	// (0x00020d31) main_video4_pane_g4_ParamLimits

0x1d44,	// (0x00020d31) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0002e8d4) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0002e8d4) main_video4_pane_g

0x1d66,	// (0x00020d53) vid4_indicators_pane_ParamLimits

0x1d66,	// (0x00020d53) vid4_indicators_pane

0x1d85,	// (0x00020d72) video4_image_uncrop_cif_pane_ParamLimits

0x1d85,	// (0x00020d72) video4_image_uncrop_cif_pane

0x1d94,	// (0x00020d81) video4_image_uncrop_nhd_pane_ParamLimits

0x1d94,	// (0x00020d81) video4_image_uncrop_nhd_pane

0x1c20,	// (0x00020c0d) video4_image_uncrop_vga_pane_ParamLimits

0x1c20,	// (0x00020c0d) video4_image_uncrop_vga_pane

0x1123,	// (0x00020110) bg_tb_trans_pane_cp07

0x1dad,	// (0x00020d9a) vid4_indicators_pane_g1

0x1dc3,	// (0x00020db0) vid4_indicators_pane_g2

0x1dd7,	// (0x00020dc4) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0002e8df) vid4_indicators_pane_g

0x1e08,	// (0x00020df5) vid4_indicators_pane_t1

0x6967,	// (0x00025954) cam4_autofocus_pane_g1

0x696f,	// (0x0002595c) cam4_autofocus_pane_g2

0x6977,	// (0x00025964) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0002e8ea) cam4_autofocus_pane_g

0x697f,	// (0x0002596c) cam4_autofocus_pane_g3_copy1

0x6781,	// (0x0002576e) video_down_pane_cp_t1

0x678f,	// (0x0002577c) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0002e862) video_down_pane_cp_t

0x0c4b,	// (0x0001fc38) popup_vitu2_window_ParamLimits

0x0c4b,	// (0x0001fc38) popup_vitu2_window

0x1e1f,	// (0x00020e0c) aid_size_cell2_itu2_ParamLimits

0x1e1f,	// (0x00020e0c) aid_size_cell2_itu2

0x1e41,	// (0x00020e2e) aid_size_cell_itu2_ParamLimits

0x1e41,	// (0x00020e2e) aid_size_cell_itu2

0x1e87,	// (0x00020e74) bg_popup_window_pane_cp09_ParamLimits

0x1e87,	// (0x00020e74) bg_popup_window_pane_cp09

0x1e95,	// (0x00020e82) field_vitu2_entry_pane_ParamLimits

0x1e95,	// (0x00020e82) field_vitu2_entry_pane

0x1eb5,	// (0x00020ea2) grid_vitu2_function_pane_ParamLimits

0x1eb5,	// (0x00020ea2) grid_vitu2_function_pane

0x1ef9,	// (0x00020ee6) grid_vitu2_itu_pane_ParamLimits

0x1ef9,	// (0x00020ee6) grid_vitu2_itu_pane

0x1f71,	// (0x00020f5e) cell_vitu2_itu_pane_ParamLimits

0x1f71,	// (0x00020f5e) cell_vitu2_itu_pane

0x1f8c,	// (0x00020f79) cell_vitu2_function_pane_ParamLimits

0x1f8c,	// (0x00020f79) cell_vitu2_function_pane

0xd37b,	// (0x0002c368) bg_popup_call_pane_cp08_ParamLimits

0xd37b,	// (0x0002c368) bg_popup_call_pane_cp08

0xd392,	// (0x0002c37f) field_vitu2_entry_pane_g1

0xd39e,	// (0x0002c38b) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0002e8f1) field_vitu2_entry_pane_g

0x6987,	// (0x00025974) field_vitu2_entry_pane_t1_ParamLimits

0x6987,	// (0x00025974) field_vitu2_entry_pane_t1

0xd3b8,	// (0x0002c3a5) field_vitu2_entry_pane_t2_ParamLimits

0xd3b8,	// (0x0002c3a5) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0002e8f8) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0002e8f8) field_vitu2_entry_pane_t

0x1fd0,	// (0x00020fbd) bg_button_pane_cp010_ParamLimits

0x1fd0,	// (0x00020fbd) bg_button_pane_cp010

0x1fde,	// (0x00020fcb) cell_vitu2_itu_pane_g1

0x1ffe,	// (0x00020feb) cell_vitu2_itu_pane_t1_ParamLimits

0x1ffe,	// (0x00020feb) cell_vitu2_itu_pane_t1

0x204a,	// (0x00021037) cell_vitu2_itu_pane_t2_ParamLimits

0x204a,	// (0x00021037) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0002e902) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0002e902) cell_vitu2_itu_pane_t

0x1123,	// (0x00020110) bg_button_pane_cp011

0x2112,	// (0x000210ff) cell_vitu2_function_pane_g1

0x0c59,	// (0x0001fc46) main_myfav_hc_pane

0x1ae8,	// (0x00020ad5) popup_image3_note_pane_ParamLimits

0x1ae8,	// (0x00020ad5) popup_image3_note_pane

0x1af6,	// (0x00020ae3) popup_image3_tool_bar_pane_ParamLimits

0x1af6,	// (0x00020ae3) popup_image3_tool_bar_pane

0x20c0,	// (0x000210ad) cell_vitu2_itu_pane_t3_ParamLimits

0x20c0,	// (0x000210ad) cell_vitu2_itu_pane_t3

0x9dbc,	// (0x00028da9) bg_popup_trans_pane

0xd3dd,	// (0x0002c3ca) grid_image3_tool_bar_pane

0xd3e7,	// (0x0002c3d4) bg_popup_trans_pane_g1

0xa933,	// (0x00029920) bg_popup_trans_pane_g2

0xd3ef,	// (0x0002c3dc) bg_popup_trans_pane_g3

0xd3f7,	// (0x0002c3e4) bg_popup_trans_pane_g4

0xd3ff,	// (0x0002c3ec) bg_popup_trans_pane_g5

0xd407,	// (0x0002c3f4) bg_popup_trans_pane_g6

0xd40f,	// (0x0002c3fc) bg_popup_trans_pane_g7

0xd417,	// (0x0002c404) bg_popup_trans_pane_g8

0xa913,	// (0x00029900) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0002e909) bg_popup_trans_pane_g

0xd41f,	// (0x0002c40c) cell_image3_tool_bar_pane_ParamLimits

0xd41f,	// (0x0002c40c) cell_image3_tool_bar_pane

0xc9e2,	// (0x0002b9cf) cell_image3_tool_bar_pane_g1

0x9dbc,	// (0x00028da9) bg_popup_trans_pane_cp1

0xd435,	// (0x0002c422) popup_image3_note_pane_t1

0xd443,	// (0x0002c430) popup_image3_note_pane_t2

0xd451,	// (0x0002c43e) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0002e91c) popup_image3_note_pane_t

0xd461,	// (0x0002c44e) popup_image3_note_pane_t3_copy1

0x69b5,	// (0x000259a2) bg_myfav_hc_instruction_pane_ParamLimits

0x69b5,	// (0x000259a2) bg_myfav_hc_instruction_pane

0x69cd,	// (0x000259ba) cell_myfav_contact_pane_ParamLimits

0x69cd,	// (0x000259ba) cell_myfav_contact_pane

0x69e7,	// (0x000259d4) cell_myfav_contact_pane_cp1_ParamLimits

0x69e7,	// (0x000259d4) cell_myfav_contact_pane_cp1

0x69ff,	// (0x000259ec) cell_myfav_contact_pane_cp2_ParamLimits

0x69ff,	// (0x000259ec) cell_myfav_contact_pane_cp2

0x6a17,	// (0x00025a04) cell_myfav_contact_pane_cp3_ParamLimits

0x6a17,	// (0x00025a04) cell_myfav_contact_pane_cp3

0x6a2e,	// (0x00025a1b) cell_myfav_contact_pane_cp4_ParamLimits

0x6a2e,	// (0x00025a1b) cell_myfav_contact_pane_cp4

0x6a44,	// (0x00025a31) cell_myfav_contact_pane_cp5_ParamLimits

0x6a44,	// (0x00025a31) cell_myfav_contact_pane_cp5

0x6a58,	// (0x00025a45) cell_myfav_contact_pane_cp6_ParamLimits

0x6a58,	// (0x00025a45) cell_myfav_contact_pane_cp6

0x6a6c,	// (0x00025a59) cell_myfav_contact_pane_cp7_ParamLimits

0x6a6c,	// (0x00025a59) cell_myfav_contact_pane_cp7

0xd46f,	// (0x0002c45c) listscroll_gen_pane_cp05

0x6a84,	// (0x00025a71) main_myfav_hc_pane_g1_ParamLimits

0x6a84,	// (0x00025a71) main_myfav_hc_pane_g1

0x6a9e,	// (0x00025a8b) main_myfav_hc_pane_g2_ParamLimits

0x6a9e,	// (0x00025a8b) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0002e923) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0002e923) main_myfav_hc_pane_g

0x6ad0,	// (0x00025abd) main_myfav_hc_pane_t1_ParamLimits

0x6ad0,	// (0x00025abd) main_myfav_hc_pane_t1

0xd478,	// (0x0002c465) main_myfav_hc_pane_t2_ParamLimits

0xd478,	// (0x0002c465) main_myfav_hc_pane_t2

0xd48a,	// (0x0002c477) main_myfav_hc_pane_t3_ParamLimits

0xd48a,	// (0x0002c477) main_myfav_hc_pane_t3

0x6ae7,	// (0x00025ad4) main_myfav_hc_pane_t4_ParamLimits

0x6ae7,	// (0x00025ad4) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0002e92a) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0002e92a) main_myfav_hc_pane_t

0xc9e2,	// (0x0002b9cf) bg_myfav_hc_instruction_pane_g1

0xd49c,	// (0x0002c489) cell_myfav_contact_pane_g1_ParamLimits

0xd49c,	// (0x0002c489) cell_myfav_contact_pane_g1

0xd49c,	// (0x0002c489) cell_myfav_contact_pane_g2_ParamLimits

0xd49c,	// (0x0002c489) cell_myfav_contact_pane_g2

0xd4a8,	// (0x0002c495) cell_myfav_contact_pane_g3_ParamLimits

0xd4a8,	// (0x0002c495) cell_myfav_contact_pane_g3

0xcc7a,	// (0x0002bc67) cell_myfav_contact_pane_g4_ParamLimits

0xcc7a,	// (0x0002bc67) cell_myfav_contact_pane_g4

0xd4b5,	// (0x0002c4a2) cell_myfav_contact_pane_g5_ParamLimits

0xd4b5,	// (0x0002c4a2) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0002e935) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0002e935) cell_myfav_contact_pane_g

0x6ab8,	// (0x00025aa5) main_myfav_hc_pane_g3_ParamLimits

0x6ab8,	// (0x00025aa5) main_myfav_hc_pane_g3

0x0b53,	// (0x0001fb40) popup_adpt_find_window

0x6b11,	// (0x00025afe) afind_page_pane_ParamLimits

0x6b11,	// (0x00025afe) afind_page_pane

0x6b1e,	// (0x00025b0b) aid_size_cell_afind_ParamLimits

0x6b1e,	// (0x00025b0b) aid_size_cell_afind

0x6b38,	// (0x00025b25) bg_popup_sub_pane_cp09_ParamLimits

0x6b38,	// (0x00025b25) bg_popup_sub_pane_cp09

0x6b45,	// (0x00025b32) find_pane_cp01_ParamLimits

0x6b45,	// (0x00025b32) find_pane_cp01

0xd4c1,	// (0x0002c4ae) grid_afind_control_pane_ParamLimits

0xd4c1,	// (0x0002c4ae) grid_afind_control_pane

0x6b52,	// (0x00025b3f) grid_afind_pane_ParamLimits

0x6b52,	// (0x00025b3f) grid_afind_pane

0x6b6e,	// (0x00025b5b) cell_afind_pane_ParamLimits

0x6b6e,	// (0x00025b5b) cell_afind_pane

0xc9e2,	// (0x0002b9cf) afind_page_pane_g1

0x6bba,	// (0x00025ba7) afind_page_pane_g2

0x6bc3,	// (0x00025bb0) afind_page_pane_g3

0x0002,

0xf953,	// (0x0002e940) afind_page_pane_g

0x6bcc,	// (0x00025bb9) afind_page_pane_t1

0xd4d5,	// (0x0002c4c2) cell_afind_grid_control_pane_ParamLimits

0xd4d5,	// (0x0002c4c2) cell_afind_grid_control_pane

0xd33d,	// (0x0002c32a) bg_button_pane_cp69_ParamLimits

0xd33d,	// (0x0002c32a) bg_button_pane_cp69

0x6bec,	// (0x00025bd9) cell_afind_pane_g1_ParamLimits

0x6bec,	// (0x00025bd9) cell_afind_pane_g1

0x6bf9,	// (0x00025be6) cell_afind_pane_t1_ParamLimits

0x6bf9,	// (0x00025be6) cell_afind_pane_t1

0xa728,	// (0x00029715) bg_button_pane_cp72

0xd4e4,	// (0x0002c4d1) cell_afind_grid_control_pane_g1

0x4eeb,	// (0x00023ed8) aid_image_placing_area_ParamLimits

0x4eeb,	// (0x00023ed8) aid_image_placing_area

0xcfb3,	// (0x0002bfa0) field_vitu_entry_pane_g1_ParamLimits

0xcfb3,	// (0x0002bfa0) field_vitu_entry_pane_g1

0xcfbf,	// (0x0002bfac) field_vitu_entry_pane_g2_ParamLimits

0xcfbf,	// (0x0002bfac) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0002e7ed) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0002e7ed) field_vitu_entry_pane_g

0x660d,	// (0x000255fa) cell_vitu_itu_pane_g1_ParamLimits

0x665d,	// (0x0002564a) cell_vitu_itu_pane_t3_ParamLimits

0x665d,	// (0x0002564a) cell_vitu_itu_pane_t3

0xd2d8,	// (0x0002c2c5) mp4_progress_pane_t1_ParamLimits

0xd2f1,	// (0x0002c2de) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0002e886) mp4_progress_pane_t_ParamLimits

0xd30a,	// (0x0002c2f7) mup_progress_pane_cp04_ParamLimits

0x6afb,	// (0x00025ae8) main_myfav_hc_pane_t5_ParamLimits

0x6afb,	// (0x00025ae8) main_myfav_hc_pane_t5

0x0a0f,	// (0x0001f9fc) aid_zoom_text_primary

0x0b53,	// (0x0001fb40) popup_adpt_find_window_ParamLimits

0x1123,	// (0x00020110) main_cam_set_pane

0x1c47,	// (0x00020c34) cam4_zoom_pane_ParamLimits

0x1c47,	// (0x00020c34) cam4_zoom_pane

0x6c0b,	// (0x00025bf8) main_cam_set_pane_g1_ParamLimits

0x6c0b,	// (0x00025bf8) main_cam_set_pane_g1

0x6c19,	// (0x00025c06) main_cam_set_pane_g2_ParamLimits

0x6c19,	// (0x00025c06) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0002e947) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0002e947) main_cam_set_pane_g

0x6c25,	// (0x00025c12) main_cam_set_pane_t1_ParamLimits

0x6c25,	// (0x00025c12) main_cam_set_pane_t1

0x6c41,	// (0x00025c2e) main_cset_listscroll_pane_ParamLimits

0x6c41,	// (0x00025c2e) main_cset_listscroll_pane

0x6c70,	// (0x00025c5d) main_cset_slider_pane_ParamLimits

0x6c70,	// (0x00025c5d) main_cset_slider_pane

0xd4f5,	// (0x0002c4e2) main_cset_list_pane_ParamLimits

0xd4f5,	// (0x0002c4e2) main_cset_list_pane

0xd505,	// (0x0002c4f2) scroll_pane_cp028

0x6c91,	// (0x00025c7e) aid_area_touch_slider

0x6cad,	// (0x00025c9a) cset_slider_pane

0x6cd7,	// (0x00025cc4) main_cset_slider_pane_g1

0x6cec,	// (0x00025cd9) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0002e94c) main_cset_slider_pane_g

0xd53e,	// (0x0002c52b) main_cset_slider_pane_t1

0x6da8,	// (0x00025d95) main_cset_slider_pane_t2

0x6dc2,	// (0x00025daf) main_cset_slider_pane_t3

0x6ddc,	// (0x00025dc9) main_cset_slider_pane_t4

0x6df6,	// (0x00025de3) main_cset_slider_pane_t5

0x6e10,	// (0x00025dfd) main_cset_slider_pane_t6

0x6e25,	// (0x00025e12) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0002e971) main_cset_slider_pane_t

0x6f29,	// (0x00025f16) cset_list_set_pane_ParamLimits

0x6f29,	// (0x00025f16) cset_list_set_pane

0x6f3a,	// (0x00025f27) aid_position_infowindow_above

0x6f42,	// (0x00025f2f) aid_position_infowindow_below

0x6f4a,	// (0x00025f37) cset_list_set_pane_g1_ParamLimits

0x6f4a,	// (0x00025f37) cset_list_set_pane_g1

0x6f56,	// (0x00025f43) cset_list_set_pane_g3_ParamLimits

0x6f56,	// (0x00025f43) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0002e990) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0002e990) cset_list_set_pane_g

0x6f65,	// (0x00025f52) cset_list_set_pane_t1_ParamLimits

0x6f65,	// (0x00025f52) cset_list_set_pane_t1

0xa968,	// (0x00029955) list_highlight_pane_cp021_ParamLimits

0xa968,	// (0x00029955) list_highlight_pane_cp021

0xb275,	// (0x0002a262) cset_slider_pane_g1

0xb287,	// (0x0002a274) cset_slider_pane_g2

0xb27e,	// (0x0002a26b) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0002e995) cset_slider_pane_g

0x2126,	// (0x00021113) aid_area_touch_cam4_zoom

0x212f,	// (0x0002111c) cam4_zoom_cont_pane

0x2137,	// (0x00021124) cam4_zoom_pane_g1

0x213f,	// (0x0002112c) cam4_zoom_pane_g2

0x2147,	// (0x00021134) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0002e99c) cam4_zoom_pane_g

0x2150,	// (0x0002113d) cam4_zoom_cont_pane_g1

0x2159,	// (0x00021146) cam4_zoom_cont_pane_g2

0x2162,	// (0x0002114f) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0002e9a3) cam4_zoom_cont_pane_g

0x1b21,	// (0x00020b0e) call4_image_pane_ParamLimits

0x1b21,	// (0x00020b0e) call4_image_pane

0x688f,	// (0x0002587c) call4_windows_conf_pane_ParamLimits

0x68da,	// (0x000258c7) popup_call4_audio_in_window_ParamLimits

0x68da,	// (0x000258c7) popup_call4_audio_in_window

0x9dbc,	// (0x00028da9) bg_popup_call2_act_pane_cp02

0xd349,	// (0x0002c336) call4_list_conf_pane

0xc9e2,	// (0x0002b9cf) call4_image_pane_g1

0xc9e2,	// (0x0002b9cf) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0002e6ae) call4_image_pane_g

0xd5de,	// (0x0002c5cb) list_single_graphic_popup_conf4_pane_ParamLimits

0xd5de,	// (0x0002c5cb) list_single_graphic_popup_conf4_pane

0x9dbc,	// (0x00028da9) list_highlight_pane_cp022

0xd5f3,	// (0x0002c5e0) list_single_graphic_popup_conf4_pane_g1

0xae7b,	// (0x00029e68) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0002e9aa) list_single_graphic_popup_conf4_pane_g

0xd5fb,	// (0x0002c5e8) list_single_graphic_popup_conf4_pane_t1

0x32e3,	// (0x000222d0) popup_vtel_slider_window_ParamLimits

0x32e3,	// (0x000222d0) popup_vtel_slider_window

0xd32b,	// (0x0002c318) dialer2_ne_pane_t2_ParamLimits

0xd32b,	// (0x0002c318) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0002e88b) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0002e88b) dialer2_ne_pane_t

0xa968,	// (0x00029955) bg_popup_sub_pane_cp010_ParamLimits

0xa968,	// (0x00029955) bg_popup_sub_pane_cp010

0x6f7a,	// (0x00025f67) popup_vtel_slider_window_g1_ParamLimits

0x6f7a,	// (0x00025f67) popup_vtel_slider_window_g1

0x6f86,	// (0x00025f73) popup_vtel_slider_window_g2_ParamLimits

0x6f86,	// (0x00025f73) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0002e9af) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0002e9af) popup_vtel_slider_window_g

0x6fce,	// (0x00025fbb) vtel_slider_pane_ParamLimits

0x6fce,	// (0x00025fbb) vtel_slider_pane

0x6fdd,	// (0x00025fca) vtel_slider_pane_g1_ParamLimits

0x6fdd,	// (0x00025fca) vtel_slider_pane_g1

0x6fea,	// (0x00025fd7) vtel_slider_pane_g2_ParamLimits

0x6fea,	// (0x00025fd7) vtel_slider_pane_g2

0x6ff7,	// (0x00025fe4) vtel_slider_pane_g3_ParamLimits

0x6ff7,	// (0x00025fe4) vtel_slider_pane_g3

0x6fdd,	// (0x00025fca) vtel_slider_pane_g4_ParamLimits

0x6fdd,	// (0x00025fca) vtel_slider_pane_g4

0x7004,	// (0x00025ff1) vtel_slider_pane_g5_ParamLimits

0x7004,	// (0x00025ff1) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0002e9b8) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0002e9b8) vtel_slider_pane_g

0x1123,	// (0x00020110) main_gallery2_pane

0x1e67,	// (0x00020e54) aid_size_row_itut2_dropdow_list_ParamLimits

0x1e67,	// (0x00020e54) aid_size_row_itut2_dropdow_list

0x1ed7,	// (0x00020ec4) grid_vitu2_function_top_pane_ParamLimits

0x1ed7,	// (0x00020ec4) grid_vitu2_function_top_pane

0x1f2d,	// (0x00020f1a) popup_vitu2_dropdown_list_window_ParamLimits

0x1f2d,	// (0x00020f1a) popup_vitu2_dropdown_list_window

0x1f4d,	// (0x00020f3a) popup_vitu2_match_list_window

0x216b,	// (0x00021158) cell_vitu2_function_top_pane_ParamLimits

0x216b,	// (0x00021158) cell_vitu2_function_top_pane

0x218f,	// (0x0002117c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x218f,	// (0x0002117c) cell_vitu2_function_top_pane_cp01

0x21ab,	// (0x00021198) cell_vitu2_function_top_wide_pane_ParamLimits

0x21ab,	// (0x00021198) cell_vitu2_function_top_wide_pane

0x1123,	// (0x00020110) bg_button_pane_cp012

0x21c7,	// (0x000211b4) cell_vitu2_function_top_pane_g1

0x21db,	// (0x000211c8) bg_button_pane_cp013_ParamLimits

0x21db,	// (0x000211c8) bg_button_pane_cp013

0x701f,	// (0x0002600c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x701f,	// (0x0002600c) cell_vitu2_function_top_wide_pane_g1

0x0c4b,	// (0x0001fc38) bg_popup_sub_pane_cp20

0x21f7,	// (0x000211e4) list_vitu2_match_list_pane

0xd3e7,	// (0x0002c3d4) bg_popup_sub_pane_cp20_g1

0xd3ef,	// (0x0002c3dc) bg_popup_sub_pane_cp20_g2

0xa933,	// (0x00029920) bg_popup_sub_pane_cp20_g3

0xd3f7,	// (0x0002c3e4) bg_popup_sub_pane_cp20_g4

0xa913,	// (0x00029900) bg_popup_sub_pane_cp20_g5

0xd611,	// (0x0002c5fe) bg_popup_sub_pane_cp20_g6

0xd407,	// (0x0002c3f4) bg_popup_sub_pane_cp20_g7

0xd40f,	// (0x0002c3fc) bg_popup_sub_pane_cp20_g8

0xd417,	// (0x0002c404) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0002e9c3) bg_popup_sub_pane_cp20_g

0x220f,	// (0x000211fc) list_vitu2_match_list_item_pane_ParamLimits

0x220f,	// (0x000211fc) list_vitu2_match_list_item_pane

0x2221,	// (0x0002120e) list_vitu2_match_list_item_pane_t1

0x0c59,	// (0x0001fc46) bg_popup_sub_pane_cp21

0x222f,	// (0x0002121c) grid_vitu2_dropdown_list_pane

0x2237,	// (0x00021224) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2237,	// (0x00021224) cell_vitu2_dropdown_list_char_pane

0x225c,	// (0x00021249) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x225c,	// (0x00021249) cell_vitu2_dropdown_list_ctrl_pane

0xd619,	// (0x0002c606) cell_vitu2_dropdown_list_char_pane_g1

0xd622,	// (0x0002c60f) cell_vitu2_dropdown_list_char_pane_g2

0xd62b,	// (0x0002c618) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0002e9e0) cell_vitu2_dropdown_list_char_pane_g

0x228a,	// (0x00021277) cell_vitu2_dropdown_list_char_pane_t1

0x707f,	// (0x0002606c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x707f,	// (0x0002606c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x708f,	// (0x0002607c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x708f,	// (0x0002607c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70a0,	// (0x0002608d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70a0,	// (0x0002608d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2298,	// (0x00021285) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2298,	// (0x00021285) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1cb7,	// (0x00020ca4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1cb7,	// (0x00020ca4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0002e9e7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0002e9e7) cell_vitu2_dropdown_list_ctrl_pane_g

0x70b0,	// (0x0002609d) aid_size_cell_gallery2_ParamLimits

0x70b0,	// (0x0002609d) aid_size_cell_gallery2

0x70ca,	// (0x000260b7) grid_gallery2_pane_ParamLimits

0x70ca,	// (0x000260b7) grid_gallery2_pane

0x70e1,	// (0x000260ce) scroll_pane_cp029_ParamLimits

0x70e1,	// (0x000260ce) scroll_pane_cp029

0x70f1,	// (0x000260de) cell_gallery2_pane_ParamLimits

0x70f1,	// (0x000260de) cell_gallery2_pane

0xd634,	// (0x0002c621) cell_gallery2_pane_g2

0x7148,	// (0x00026135) cell_gallery2_pane_g3

0xd63c,	// (0x0002c629) cell_gallery2_pane_g4

0xd644,	// (0x0002c631) cell_gallery2_pane_g5

0xa6d6,	// (0x000296c3) grid_highlight_pane_cp10

0x1f4d,	// (0x00020f3a) popup_vitu2_match_list_window_ParamLimits

0x1f61,	// (0x00020f4e) popup_vitu2_query_window_ParamLimits

0x1f61,	// (0x00020f4e) popup_vitu2_query_window

0x0c59,	// (0x0001fc46) bg_vitu2_candi_button_pane

0xd619,	// (0x0002c606) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd622,	// (0x0002c60f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd62b,	// (0x0002c618) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7150,	// (0x0002613d) bg_button_pane_cp015

0x7162,	// (0x0002614f) bg_button_pane_cp016

0x7175,	// (0x00026162) bg_button_pane_cp017

0xc5aa,	// (0x0002b597) bg_popup_sub_pane_cp22

0xd64c,	// (0x0002c639) popup_vitu2_query_window_g1

0x71ba,	// (0x000261a7) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0002e9f2) popup_vitu2_query_window_g

0x71d7,	// (0x000261c4) popup_vitu2_query_window_t1_ParamLimits

0x71d7,	// (0x000261c4) popup_vitu2_query_window_t1

0x720a,	// (0x000261f7) popup_vitu2_query_window_t2_ParamLimits

0x720a,	// (0x000261f7) popup_vitu2_query_window_t2

0x721c,	// (0x00026209) popup_vitu2_query_window_t3_ParamLimits

0x721c,	// (0x00026209) popup_vitu2_query_window_t3

0x7244,	// (0x00026231) popup_vitu2_query_window_t4_ParamLimits

0x7244,	// (0x00026231) popup_vitu2_query_window_t4

0x7267,	// (0x00026254) popup_vitu2_query_window_t5_ParamLimits

0x7267,	// (0x00026254) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0002e9f9) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0002e9f9) popup_vitu2_query_window_t

0xd4ed,	// (0x0002c4da) main_cset_text_pane

0x6c91,	// (0x00025c7e) aid_area_touch_slider_ParamLimits

0x6cad,	// (0x00025c9a) cset_slider_pane_ParamLimits

0x6cd7,	// (0x00025cc4) main_cset_slider_pane_g1_ParamLimits

0x6cec,	// (0x00025cd9) main_cset_slider_pane_g2_ParamLimits

0xd50e,	// (0x0002c4fb) main_cset_slider_pane_g3_ParamLimits

0xd50e,	// (0x0002c4fb) main_cset_slider_pane_g3

0x6d01,	// (0x00025cee) main_cset_slider_pane_g4_ParamLimits

0x6d01,	// (0x00025cee) main_cset_slider_pane_g4

0x6d10,	// (0x00025cfd) main_cset_slider_pane_g5_ParamLimits

0x6d10,	// (0x00025cfd) main_cset_slider_pane_g5

0x6d1c,	// (0x00025d09) main_cset_slider_pane_g6_ParamLimits

0x6d1c,	// (0x00025d09) main_cset_slider_pane_g6

0xf95f,	// (0x0002e94c) main_cset_slider_pane_g_ParamLimits

0xd53e,	// (0x0002c52b) main_cset_slider_pane_t1_ParamLimits

0x6da8,	// (0x00025d95) main_cset_slider_pane_t2_ParamLimits

0x6dc2,	// (0x00025daf) main_cset_slider_pane_t3_ParamLimits

0x6ddc,	// (0x00025dc9) main_cset_slider_pane_t4_ParamLimits

0x6df6,	// (0x00025de3) main_cset_slider_pane_t5_ParamLimits

0x6e10,	// (0x00025dfd) main_cset_slider_pane_t6_ParamLimits

0x6e25,	// (0x00025e12) main_cset_slider_pane_t7_ParamLimits

0x6e4f,	// (0x00025e3c) main_cset_slider_pane_t8_ParamLimits

0x6e4f,	// (0x00025e3c) main_cset_slider_pane_t8

0x6e77,	// (0x00025e64) main_cset_slider_pane_t9_ParamLimits

0x6e77,	// (0x00025e64) main_cset_slider_pane_t9

0x6e9f,	// (0x00025e8c) main_cset_slider_pane_t10_ParamLimits

0x6e9f,	// (0x00025e8c) main_cset_slider_pane_t10

0x6ec7,	// (0x00025eb4) main_cset_slider_pane_t11_ParamLimits

0x6ec7,	// (0x00025eb4) main_cset_slider_pane_t11

0x6eef,	// (0x00025edc) main_cset_slider_pane_t12_ParamLimits

0x6eef,	// (0x00025edc) main_cset_slider_pane_t12

0x6f0c,	// (0x00025ef9) main_cset_slider_pane_t13_ParamLimits

0x6f0c,	// (0x00025ef9) main_cset_slider_pane_t13

0xf984,	// (0x0002e971) main_cset_slider_pane_t_ParamLimits

0x9dbc,	// (0x00028da9) bg_popup_sub_pane_cp011

0xd658,	// (0x0002c645) main_cset_text_pane_g1

0xd660,	// (0x0002c64d) main_cset_text_pane_t1

0xd66e,	// (0x0002c65b) main_cset_text_pane_t2

0xd67c,	// (0x0002c669) main_cset_text_pane_t3

0xd68a,	// (0x0002c677) main_cset_text_pane_t4

0xd698,	// (0x0002c685) main_cset_text_pane_t5

0xd6a6,	// (0x0002c693) main_cset_text_pane_t6

0xd6b4,	// (0x0002c6a1) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0002ea08) main_cset_text_pane_t

0x0c59,	// (0x0001fc46) main_cam4_burst_pane

0x0c59,	// (0x0001fc46) main_cam5_pane

0x6bda,	// (0x00025bc7) bg_button_pane_cp019

0x6be3,	// (0x00025bd0) bg_button_pane_cp020

0xd51a,	// (0x0002c507) main_cset_slider_pane_g7_ParamLimits

0xd51a,	// (0x0002c507) main_cset_slider_pane_g7

0xd526,	// (0x0002c513) main_cset_slider_pane_g8_ParamLimits

0xd526,	// (0x0002c513) main_cset_slider_pane_g8

0x6d30,	// (0x00025d1d) main_cset_slider_pane_g9_ParamLimits

0x6d30,	// (0x00025d1d) main_cset_slider_pane_g9

0x6d3c,	// (0x00025d29) main_cset_slider_pane_g10_ParamLimits

0x6d3c,	// (0x00025d29) main_cset_slider_pane_g10

0x6d48,	// (0x00025d35) main_cset_slider_pane_g11_ParamLimits

0x6d48,	// (0x00025d35) main_cset_slider_pane_g11

0x6d54,	// (0x00025d41) main_cset_slider_pane_g12_ParamLimits

0x6d54,	// (0x00025d41) main_cset_slider_pane_g12

0x6d60,	// (0x00025d4d) main_cset_slider_pane_g13_ParamLimits

0x6d60,	// (0x00025d4d) main_cset_slider_pane_g13

0x6d6c,	// (0x00025d59) main_cset_slider_pane_g14_ParamLimits

0x6d6c,	// (0x00025d59) main_cset_slider_pane_g14

0x6d78,	// (0x00025d65) main_cset_slider_pane_g15_ParamLimits

0x6d78,	// (0x00025d65) main_cset_slider_pane_g15

0xd56c,	// (0x0002c559) main_cset_slider_pane_t14_ParamLimits

0xd56c,	// (0x0002c559) main_cset_slider_pane_t14

0xd5a5,	// (0x0002c592) main_cset_slider_pane_t15_ParamLimits

0xd5a5,	// (0x0002c592) main_cset_slider_pane_t15

0x72e0,	// (0x000262cd) aid_cam4_burst_size_cell_ParamLimits

0x72e0,	// (0x000262cd) aid_cam4_burst_size_cell

0x72fc,	// (0x000262e9) grid_cam4_burst_pane_ParamLimits

0x72fc,	// (0x000262e9) grid_cam4_burst_pane

0x732e,	// (0x0002631b) linegrid_cam4_burst_pane_ParamLimits

0x732e,	// (0x0002631b) linegrid_cam4_burst_pane

0x734c,	// (0x00026339) scroll_pane_cp30_ParamLimits

0x734c,	// (0x00026339) scroll_pane_cp30

0x7358,	// (0x00026345) cell_cam4_burst_pane_ParamLimits

0x7358,	// (0x00026345) cell_cam4_burst_pane

0xd6c2,	// (0x0002c6af) linegrid_cam4_burst_pane_g1_ParamLimits

0xd6c2,	// (0x0002c6af) linegrid_cam4_burst_pane_g1

0x7398,	// (0x00026385) linegrid_cam4_burst_pane_g2_ParamLimits

0x7398,	// (0x00026385) linegrid_cam4_burst_pane_g2

0xd6cf,	// (0x0002c6bc) linegrid_cam4_burst_pane_g3_ParamLimits

0xd6cf,	// (0x0002c6bc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0002ea17) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0002ea17) linegrid_cam4_burst_pane_g

0x73a9,	// (0x00026396) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73a9,	// (0x00026396) linegrid_cam4_burst_pane_g3_copy1

0xd6dc,	// (0x0002c6c9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd6dc,	// (0x0002c6c9) linegrid_cam4_burst_pane_g4

0x73c3,	// (0x000263b0) linegrid_cam4_burst_pane_g5_ParamLimits

0x73c3,	// (0x000263b0) linegrid_cam4_burst_pane_g5

0x73d4,	// (0x000263c1) linegrid_cam4_burst_pane_g6_ParamLimits

0x73d4,	// (0x000263c1) linegrid_cam4_burst_pane_g6

0xd6e9,	// (0x0002c6d6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6e9,	// (0x0002c6d6) linegrid_cam4_burst_pane_g7

0x73eb,	// (0x000263d8) cell_cam4_burst_pane_g1

0xd702,	// (0x0002c6ef) main_cam5_pane_t1_ParamLimits

0xd702,	// (0x0002c6ef) main_cam5_pane_t1

0xd714,	// (0x0002c701) main_cam5_pane_t2_ParamLimits

0xd714,	// (0x0002c701) main_cam5_pane_t2

0xd726,	// (0x0002c713) main_cam5_pane_t3_ParamLimits

0xd726,	// (0x0002c713) main_cam5_pane_t3

0xd738,	// (0x0002c725) main_cam5_pane_t4_ParamLimits

0xd738,	// (0x0002c725) main_cam5_pane_t4

0xd750,	// (0x0002c73d) main_cam5_pane_t5_ParamLimits

0xd750,	// (0x0002c73d) main_cam5_pane_t5

0xd764,	// (0x0002c751) main_cam5_pane_t6_ParamLimits

0xd764,	// (0x0002c751) main_cam5_pane_t6

0xd778,	// (0x0002c765) main_cam5_pane_t7_ParamLimits

0xd778,	// (0x0002c765) main_cam5_pane_t7

0xd78a,	// (0x0002c777) main_cam5_pane_t8_ParamLimits

0xd78a,	// (0x0002c777) main_cam5_pane_t8

0xd7db,	// (0x0002c7c8) main_cam5_pane_t9_ParamLimits

0xd7db,	// (0x0002c7c8) main_cam5_pane_t9

0xd7ed,	// (0x0002c7da) main_cam5_pane_t10_ParamLimits

0xd7ed,	// (0x0002c7da) main_cam5_pane_t10

0xd7ff,	// (0x0002c7ec) main_cam5_pane_t11_ParamLimits

0xd7ff,	// (0x0002c7ec) main_cam5_pane_t11

0xd813,	// (0x0002c800) main_cam5_pane_t12_ParamLimits

0xd813,	// (0x0002c800) main_cam5_pane_t12

0xd82a,	// (0x0002c817) main_cam5_pane_t13_ParamLimits

0xd82a,	// (0x0002c817) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0002ea23) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0002ea23) main_cam5_pane_t

0x0c0a,	// (0x0001fbf7) popup_scut_keymap_window_ParamLimits

0x0c0a,	// (0x0001fbf7) popup_scut_keymap_window

0x73fe,	// (0x000263eb) aid_size_cell_brow_shortcut

0xa6d6,	// (0x000296c3) bg_popup_window_pane_cp010

0x740a,	// (0x000263f7) grid_scut_pane

0x7416,	// (0x00026403) cell_scut_pane_ParamLimits

0x7416,	// (0x00026403) cell_scut_pane

0x7431,	// (0x0002641e) cell_scut_pane_g1

0xd84d,	// (0x0002c83a) cell_scut_pane_t1

0xd85c,	// (0x0002c849) cell_scut_pane_t2

0x743a,	// (0x00026427) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0002ea3e) cell_scut_pane_t

0x5d1e,	// (0x00024d0b) main_mup3_pane_g8_ParamLimits

0x5d1e,	// (0x00024d0b) main_mup3_pane_g8

0x1e77,	// (0x00020e64) area_vitu2_query_pane_ParamLimits

0x1e77,	// (0x00020e64) area_vitu2_query_pane

0x7188,	// (0x00026175) input_focus_pane_cp08

0xd86b,	// (0x0002c858) area_vitu2_query_pane_g1

0x7448,	// (0x00026435) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0002ea45) area_vitu2_query_pane_g

0x7459,	// (0x00026446) area_vitu2_query_pane_t1_ParamLimits

0x7459,	// (0x00026446) area_vitu2_query_pane_t1

0x746d,	// (0x0002645a) area_vitu2_query_pane_t2_ParamLimits

0x746d,	// (0x0002645a) area_vitu2_query_pane_t2

0x7481,	// (0x0002646e) area_vitu2_query_pane_t3_ParamLimits

0x7481,	// (0x0002646e) area_vitu2_query_pane_t3

0xd877,	// (0x0002c864) area_vitu2_query_pane_t4_ParamLimits

0xd877,	// (0x0002c864) area_vitu2_query_pane_t4

0xd89f,	// (0x0002c88c) area_vitu2_query_pane_t5_ParamLimits

0xd89f,	// (0x0002c88c) area_vitu2_query_pane_t5

0xd8c7,	// (0x0002c8b4) area_vitu2_query_pane_t6_ParamLimits

0xd8c7,	// (0x0002c8b4) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0002ea4a) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0002ea4a) area_vitu2_query_pane_t

0x74a9,	// (0x00026496) bg_button_pane_cp018

0x74b7,	// (0x000264a4) bg_button_pane_cp021

0x74c3,	// (0x000264b0) bg_button_pane_cp022

0x74d4,	// (0x000264c1) input_focus_pane_cp09

0xaf8a,	// (0x00029f77) aid_size_touch_mv_arrow_left

0xafb5,	// (0x00029fa2) aid_size_touch_mv_arrow_right

0x6d90,	// (0x00025d7d) main_cset_slider_pane_g16_ParamLimits

0x6d90,	// (0x00025d7d) main_cset_slider_pane_g16

0x6d9c,	// (0x00025d89) main_cset_slider_pane_g17_ParamLimits

0x6d9c,	// (0x00025d89) main_cset_slider_pane_g17

0x73eb,	// (0x000263d8) cell_cam4_burst_pane_g1_ParamLimits

0x9dbc,	// (0x00028da9) compa_mode_pane

0x6f92,	// (0x00025f7f) popup_vtel_slider_window_g3_ParamLimits

0x6f92,	// (0x00025f7f) popup_vtel_slider_window_g3

0x6fa6,	// (0x00025f93) popup_vtel_slider_window_g4_ParamLimits

0x6fa6,	// (0x00025f93) popup_vtel_slider_window_g4

0x6fba,	// (0x00025fa7) popup_vtel_slider_window_t1_ParamLimits

0x6fba,	// (0x00025fa7) popup_vtel_slider_window_t1

0x0c59,	// (0x0001fc46) main_cl_pane

0x11cd,	// (0x000201ba) popup_imed_adjust2_window_ParamLimits

0xc5aa,	// (0x0002b597) bg_tb_trans_pane_cp05_ParamLimits

0xcede,	// (0x0002becb) popup_imed_adjust2_window_g1_ParamLimits

0xceed,	// (0x0002beda) popup_imed_adjust2_window_g2_ParamLimits

0xceed,	// (0x0002beda) popup_imed_adjust2_window_g2

0xcef9,	// (0x0002bee6) popup_imed_adjust2_window_g3_ParamLimits

0xcef9,	// (0x0002bee6) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0002e7b1) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0002e7b1) popup_imed_adjust2_window_g

0xcf05,	// (0x0002bef2) popup_imed_adjust2_window_t1_ParamLimits

0xcf1d,	// (0x0002bf0a) slider_imed_adjust_pane_ParamLimits

0xcf31,	// (0x0002bf1e) slider_imed_adjust_pane_g1_ParamLimits

0xcf41,	// (0x0002bf2e) slider_imed_adjust_pane_g2_ParamLimits

0xcf51,	// (0x0002bf3e) slider_imed_adjust_pane_g3_ParamLimits

0xcf62,	// (0x0002bf4f) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0002e7b8) slider_imed_adjust_pane_g_ParamLimits

0x1bf0,	// (0x00020bdd) aid_touch_area_cam4_ParamLimits

0x1bf0,	// (0x00020bdd) aid_touch_area_cam4

0x1c00,	// (0x00020bed) battery_pane_cp01

0x1c87,	// (0x00020c74) main_camera4_pane_g6_ParamLimits

0x1c87,	// (0x00020c74) main_camera4_pane_g6

0x1ca5,	// (0x00020c92) main_camera4_pane_t2_ParamLimits

0x1ca5,	// (0x00020c92) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0002e8bf) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0002e8bf) main_camera4_pane_t

0x1d10,	// (0x00020cfd) aid_touch_area_vid4_ParamLimits

0x1d10,	// (0x00020cfd) aid_touch_area_vid4

0x1d50,	// (0x00020d3d) main_video4_pane_g5_ParamLimits

0x1d50,	// (0x00020d3d) main_video4_pane_g5

0x1d76,	// (0x00020d63) vid4_progress_pane_ParamLimits

0x1d76,	// (0x00020d63) vid4_progress_pane

0xd532,	// (0x0002c51f) main_cset_slider_pane_g18_ParamLimits

0xd532,	// (0x0002c51f) main_cset_slider_pane_g18

0xd6f6,	// (0x0002c6e3) cell_cam4_burst_pane_g2_ParamLimits

0xd6f6,	// (0x0002c6e3) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0002ea1e) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0002ea1e) cell_cam4_burst_pane_g

0x74e5,	// (0x000264d2) bg_cl_pane_ParamLimits

0x74e5,	// (0x000264d2) bg_cl_pane

0x74f1,	// (0x000264de) cl_header_pane_ParamLimits

0x74f1,	// (0x000264de) cl_header_pane

0x74fd,	// (0x000264ea) cl_listscroll_pane_ParamLimits

0x74fd,	// (0x000264ea) cl_listscroll_pane

0xd913,	// (0x0002c900) bg_cl_pane_g1

0xd91b,	// (0x0002c908) bg_cl_pane_g2

0xd923,	// (0x0002c910) bg_cl_pane_g3

0xd92b,	// (0x0002c918) bg_cl_pane_g4

0xd933,	// (0x0002c920) bg_cl_pane_g5

0xd93b,	// (0x0002c928) bg_cl_pane_g6

0xd943,	// (0x0002c930) bg_cl_pane_g7

0xd94b,	// (0x0002c938) bg_cl_pane_g8

0xd953,	// (0x0002c940) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0002ea59) bg_cl_pane_g

0x7509,	// (0x000264f6) aid_height_cl_leading_ParamLimits

0x7509,	// (0x000264f6) aid_height_cl_leading

0x7515,	// (0x00026502) aid_height_cl_text_ParamLimits

0x7515,	// (0x00026502) aid_height_cl_text

0xd280,	// (0x0002c26d) bg_cl_header_pane_ParamLimits

0xd280,	// (0x0002c26d) bg_cl_header_pane

0x752d,	// (0x0002651a) cl_header_pane_g1_ParamLimits

0x752d,	// (0x0002651a) cl_header_pane_g1

0x753a,	// (0x00026527) cl_header_pane_t1_ParamLimits

0x753a,	// (0x00026527) cl_header_pane_t1

0xd95b,	// (0x0002c948) cl_list_pane

0xd505,	// (0x0002c4f2) hc_scroll_pane_cp01

0xa913,	// (0x00029900) bg_cl_header_pane_g1

0xd3e7,	// (0x0002c3d4) bg_cl_header_pane_g2

0xa933,	// (0x00029920) bg_cl_header_pane_g3

0xd3f7,	// (0x0002c3e4) bg_cl_header_pane_g4

0xd3ef,	// (0x0002c3dc) bg_cl_header_pane_g5

0xd611,	// (0x0002c5fe) bg_cl_header_pane_g6

0xd40f,	// (0x0002c3fc) bg_cl_header_pane_g7

0xd417,	// (0x0002c404) bg_cl_header_pane_g8

0xd407,	// (0x0002c3f4) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0002ea6c) bg_cl_header_pane_g

0x754c,	// (0x00026539) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x754c,	// (0x00026539) hc_cl_list_double_graphic_heading_pane

0x755c,	// (0x00026549) hc_cl_list_single_graphic_pane_ParamLimits

0x755c,	// (0x00026549) hc_cl_list_single_graphic_pane

0x756e,	// (0x0002655b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x756e,	// (0x0002655b) hc_cl_list_single_graphic_pane_g1

0x757a,	// (0x00026567) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x757a,	// (0x00026567) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0002ea7f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0002ea7f) hc_cl_list_single_graphic_pane_g

0x758e,	// (0x0002657b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x758e,	// (0x0002657b) hc_cl_list_single_graphic_pane_t1

0x756e,	// (0x0002655b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x756e,	// (0x0002655b) hc_cl_list_double_graphic_heading_pane_g1

0x75a3,	// (0x00026590) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75a3,	// (0x00026590) hc_cl_list_double_graphic_heading_pane_g2

0x75b7,	// (0x000265a4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75b7,	// (0x000265a4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0002ea84) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0002ea84) hc_cl_list_double_graphic_heading_pane_g

0x75cb,	// (0x000265b8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75cb,	// (0x000265b8) hc_cl_list_double_graphic_heading_pane_t1

0x75e0,	// (0x000265cd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75e0,	// (0x000265cd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0002ea8b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0002ea8b) hc_cl_list_double_graphic_heading_pane_t

0x22b9,	// (0x000212a6) vid4_progress_pane_g1

0x22c9,	// (0x000212b6) vid4_progress_pane_g2

0x22d9,	// (0x000212c6) vid4_progress_pane_g3

0x1cde,	// (0x00020ccb) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0002ea90) vid4_progress_pane_g

0x22eb,	// (0x000212d8) vid4_progress_pane_t1

0x2301,	// (0x000212ee) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0002ea9b) vid4_progress_pane_t

0x232b,	// (0x00021318) wait_bar_pane_cp07

0xc7cf,	// (0x0002b7bc) blid_firmament_pane_ParamLimits

0xc812,	// (0x0002b7ff) popup_blid_sat_info2_window_g1

0xc836,	// (0x0002b823) popup_blid_sat_info2_window_t3

0xc844,	// (0x0002b831) popup_blid_sat_info2_window_t4

0xc852,	// (0x0002b83f) popup_blid_sat_info2_window_t5

0xc860,	// (0x0002b84d) popup_blid_sat_info2_window_t6

0xc870,	// (0x0002b85d) popup_blid_sat_info2_window_t7

0xc87e,	// (0x0002b86b) popup_blid_sat_info2_window_t8

0xc88c,	// (0x0002b879) popup_blid_sat_info2_window_t9

0xc89a,	// (0x0002b887) popup_blid_sat_info2_window_t10

0xc962,	// (0x0002b94f) aid_firma_cardinal_ParamLimits

0xc976,	// (0x0002b963) blid_firmament_pane_t1_ParamLimits

0xc98d,	// (0x0002b97a) blid_firmament_pane_t2_ParamLimits

0xc9a4,	// (0x0002b991) blid_firmament_pane_t3_ParamLimits

0xc9bb,	// (0x0002b9a8) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0002e6a5) blid_firmament_pane_t_ParamLimits

0xc9d2,	// (0x0002b9bf) blid_sat_info_pane_ParamLimits

0x1123,	// (0x00020110) main_cam_set_pane_ParamLimits

0x6435,	// (0x00025422) aid_size_cell_colour_35_ParamLimits

0x644f,	// (0x0002543c) aid_size_cell_colour_112_ParamLimits

0x6466,	// (0x00025453) aid_size_cell_effect_ParamLimits

0xa968,	// (0x00029955) bg_tb_trans_pane_cp02_ParamLimits

0xb441,	// (0x0002a42e) heading_imed_pane_ParamLimits

0x6480,	// (0x0002546d) listscroll_imed_pane_ParamLimits

0xbbd2,	// (0x0002abbf) popup_call2_audio_first_window_g5_ParamLimits

0xbbd2,	// (0x0002abbf) popup_call2_audio_first_window_g5

0x19a8,	// (0x00020995) aid_size_touch_image3_arrow_left_ParamLimits

0x19a8,	// (0x00020995) aid_size_touch_image3_arrow_left

0x19be,	// (0x000209ab) aid_size_touch_image3_arrow_right_ParamLimits

0x19be,	// (0x000209ab) aid_size_touch_image3_arrow_right

0x2316,	// (0x00021303) vid4_progress_pane_t3

0x6724,	// (0x00025711) main_hwr_training_symbol_option_pane_ParamLimits

0x6724,	// (0x00025711) main_hwr_training_symbol_option_pane

0xd1d7,	// (0x0002c1c4) popup_hwr_training_preview_window_ParamLimits

0xd1d7,	// (0x0002c1c4) popup_hwr_training_preview_window

0x1682,	// (0x0002066f) hwr_training_navi_pane_g5_ParamLimits

0x1682,	// (0x0002066f) hwr_training_navi_pane_g5

0xd3d5,	// (0x0002c3c2) popup_char_count_window

0x0c4b,	// (0x0001fc38) bg_popup_sub_pane_cp20_ParamLimits

0x21f7,	// (0x000211e4) list_vitu2_match_list_pane_ParamLimits

0x2203,	// (0x000211f0) vitu2_page_scroll_pane_ParamLimits

0x2203,	// (0x000211f0) vitu2_page_scroll_pane

0xd986,	// (0x0002c973) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd986,	// (0x0002c973) list_single_hwr_training_symbol_option_pane

0xd999,	// (0x0002c986) list_single_hwr_training_symbol_option_pane_g1

0xd9a1,	// (0x0002c98e) list_single_hwr_training_symbol_option_pane_t1

0xd9af,	// (0x0002c99c) bg_button_pane_cp023

0xd9b8,	// (0x0002c9a5) bg_button_pane_cp024

0x7624,	// (0x00026611) vitu2_page_scroll_pane_g1

0x762c,	// (0x00026619) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0002eaa2) vitu2_page_scroll_pane_g

0x7636,	// (0x00026623) vitu2_page_scroll_pane_t1

0xd25c,	// (0x0002c249) popup_char_count_window_g1

0xd9eb,	// (0x0002c9d8) popup_char_count_window_g2

0xd253,	// (0x0002c240) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0002eaa7) popup_char_count_window_g

0xd9f4,	// (0x0002c9e1) popup_char_count_window_t1

0x0c59,	// (0x0001fc46) main_vded2_pane

0xceca,	// (0x0002beb7) aid_size_cell_imed_line

0xced4,	// (0x0002bec1) grid_imed_line_width_pane

0x1dea,	// (0x00020dd7) vid4_indicators_pane_g4

0xda02,	// (0x0002c9ef) cell_imed_line_width_pane_ParamLimits

0xda02,	// (0x0002c9ef) cell_imed_line_width_pane

0xda18,	// (0x0002ca05) cell_imed_line_width_pane_g1

0xd7c9,	// (0x0002c7b6) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0002eaae) cell_imed_line_width_pane_g

0x7645,	// (0x00026632) main_vded2_pane_g1_ParamLimits

0x7645,	// (0x00026632) main_vded2_pane_g1

0x7654,	// (0x00026641) main_vded2_pane_g2_ParamLimits

0x7654,	// (0x00026641) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0002eab3) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0002eab3) main_vded2_pane_g

0x7662,	// (0x0002664f) vded2_slider_pane_ParamLimits

0x7662,	// (0x0002664f) vded2_slider_pane

0x766f,	// (0x0002665c) aid_size_touch_vded2_end

0x7679,	// (0x00026666) aid_size_touch_vded2_playhead

0xda21,	// (0x0002ca0e) aid_size_touch_vded2_start

0xda29,	// (0x0002ca16) vded2_slider_bg_pane

0xda32,	// (0x0002ca1f) vded2_slider_pane_g1

0xda3b,	// (0x0002ca28) vded2_slider_pane_g2

0x7681,	// (0x0002666e) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0002eab8) vded2_slider_pane_g

0xd265,	// (0x0002c252) vded2_slider_bg_pane_g1

0xd26e,	// (0x0002c25b) vded2_slider_bg_pane_g2

0xd277,	// (0x0002c264) vded2_slider_bg_pane_g3

0x0002,

0xf788,	// (0x0002e775) vded2_slider_bg_pane_g

0x4c4e,	// (0x00023c3b) aid_postcard_touch_down_pane_ParamLimits

0x4c4e,	// (0x00023c3b) aid_postcard_touch_down_pane

0x4c5e,	// (0x00023c4b) aid_postcard_touch_up_pane_ParamLimits

0x4c5e,	// (0x00023c4b) aid_postcard_touch_up_pane

0x0c59,	// (0x0001fc46) main_blid2_pane

0x114c,	// (0x00020139) popup_blid2_search_window

0x9dbc,	// (0x00028da9) blid2_gps_pane

0x9dbc,	// (0x00028da9) blid2_navig_pane

0x9dbc,	// (0x00028da9) blid2_search_pane

0x9dbc,	// (0x00028da9) blid2_tripm_pane

0x768a,	// (0x00026677) blid2_search_pane_g1_ParamLimits

0x768a,	// (0x00026677) blid2_search_pane_g1

0x7696,	// (0x00026683) blid2_search_pane_t1_ParamLimits

0x7696,	// (0x00026683) blid2_search_pane_t1

0x76a8,	// (0x00026695) aid_size_cell_blid2_gps_ParamLimits

0x76a8,	// (0x00026695) aid_size_cell_blid2_gps

0x76b8,	// (0x000266a5) blid2_gps_pane_g1_ParamLimits

0x76b8,	// (0x000266a5) blid2_gps_pane_g1

0x76c4,	// (0x000266b1) grid_blid2_satellite_pane_ParamLimits

0x76c4,	// (0x000266b1) grid_blid2_satellite_pane

0x76d2,	// (0x000266bf) blid2_navig_pane_g1_ParamLimits

0x76d2,	// (0x000266bf) blid2_navig_pane_g1

0x76de,	// (0x000266cb) blid2_navig_pane_t1_ParamLimits

0x76de,	// (0x000266cb) blid2_navig_pane_t1

0x76f0,	// (0x000266dd) blid2_navig_pane_t2_ParamLimits

0x76f0,	// (0x000266dd) blid2_navig_pane_t2

0x0001,

0xfad2,	// (0x0002eabf) blid2_navig_pane_t_ParamLimits

0xfad2,	// (0x0002eabf) blid2_navig_pane_t

0x7702,	// (0x000266ef) blid2_navig_ring_pane_ParamLimits

0x7702,	// (0x000266ef) blid2_navig_ring_pane

0x7712,	// (0x000266ff) blid2_speed_pane_ParamLimits

0x7712,	// (0x000266ff) blid2_speed_pane

0x771e,	// (0x0002670b) blid2_tripm_pane_g1_ParamLimits

0x771e,	// (0x0002670b) blid2_tripm_pane_g1

0x772e,	// (0x0002671b) blid2_tripm_pane_g2_ParamLimits

0x772e,	// (0x0002671b) blid2_tripm_pane_g2

0x773a,	// (0x00026727) blid2_tripm_pane_g3_ParamLimits

0x773a,	// (0x00026727) blid2_tripm_pane_g3

0x7746,	// (0x00026733) blid2_tripm_pane_g4_ParamLimits

0x7746,	// (0x00026733) blid2_tripm_pane_g4

0x7752,	// (0x0002673f) blid2_tripm_pane_g5_ParamLimits

0x7752,	// (0x0002673f) blid2_tripm_pane_g5

0x0005,

0xfad7,	// (0x0002eac4) blid2_tripm_pane_g_ParamLimits

0xfad7,	// (0x0002eac4) blid2_tripm_pane_g

0x776e,	// (0x0002675b) blid2_tripm_pane_t1_ParamLimits

0x776e,	// (0x0002675b) blid2_tripm_pane_t1

0x7780,	// (0x0002676d) blid2_tripm_pane_t2_ParamLimits

0x7780,	// (0x0002676d) blid2_tripm_pane_t2

0x7792,	// (0x0002677f) blid2_tripm_pane_t3_ParamLimits

0x7792,	// (0x0002677f) blid2_tripm_pane_t3

0x0003,

0xfae4,	// (0x0002ead1) blid2_tripm_pane_t_ParamLimits

0xfae4,	// (0x0002ead1) blid2_tripm_pane_t

0x77c4,	// (0x000267b1) cell_blid2_satellite_pane_ParamLimits

0x77c4,	// (0x000267b1) cell_blid2_satellite_pane

0x77e2,	// (0x000267cf) cell_blid2_satellite_pane_g1

0xda43,	// (0x0002ca30) cell_blid2_satellite_pane_t1

0xc9e2,	// (0x0002b9cf) blid2_speed_pane_g1

0xda51,	// (0x0002ca3e) blid2_speed_pane_t1

0xda5f,	// (0x0002ca4c) blid2_speed_pane_t2

0x0001,

0xfaed,	// (0x0002eada) blid2_speed_pane_t

0xc9e2,	// (0x0002b9cf) blid2_navig_ring_pane_g1

0x77eb,	// (0x000267d8) blid2_navig_ring_pane_g2

0x77f3,	// (0x000267e0) blid2_navig_ring_pane_g3

0x77fb,	// (0x000267e8) blid2_navig_ring_pane_g4

0x7803,	// (0x000267f0) blid2_navig_ring_pane_g5

0x0004,

0xfaf2,	// (0x0002eadf) blid2_navig_ring_pane_g

0x9dbc,	// (0x00028da9) bg_popup_window_pane_cp011

0xda6d,	// (0x0002ca5a) popup_blid2_search_window_g1

0xda75,	// (0x0002ca62) popup_blid2_search_window_t1

0xda83,	// (0x0002ca70) popup_blid2_search_window_t2

0x0001,

0xfafd,	// (0x0002eaea) popup_blid2_search_window_t

0xa822,	// (0x0002980f) main_browser_pane_g1

0xa52e,	// (0x0002951b) main_browser_pane_ParamLimits

0x1123,	// (0x00020110) bg_button_pane_cp011_ParamLimits

0x2112,	// (0x000210ff) cell_vitu2_function_pane_g1_ParamLimits

0xc5aa,	// (0x0002b597) bg_popup_sub_pane_cp22_ParamLimits

0x7188,	// (0x00026175) input_focus_pane_cp08_ParamLimits

0x719f,	// (0x0002618c) popup_vitu2_query_button_pane_ParamLimits

0x719f,	// (0x0002618c) popup_vitu2_query_button_pane

0x71b0,	// (0x0002619d) popup_vitu2_query_input_button_pane

0xd64c,	// (0x0002c639) popup_vitu2_query_window_g1_ParamLimits

0x71ba,	// (0x000261a7) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0002e9f2) popup_vitu2_query_window_g_ParamLimits

0x9dbc,	// (0x00028da9) bg_button_pane_cp026

0x780b,	// (0x000267f8) popup_vitu2_query_input_button_pane_g1

0x9dbc,	// (0x00028da9) bg_button_pane_cp025

0xda91,	// (0x0002ca7e) popup_vitu2_query_button_pane_t1

0x5984,	// (0x00024971) main_mp3_pane_t6

0x5994,	// (0x00024981) popup_slider_window_cp01

0x1cc5,	// (0x00020cb2) cam4_battery_pane

0x1da3,	// (0x00020d90) cam4_battery_pane_cp02

0x22b1,	// (0x0002129e) cam4_battery_pane_cp01

0x22b1,	// (0x0002129e) cam4_battery_pane_cp03

0xd7d1,	// (0x0002c7be) cam4_battery_pane_g1

0xc9e2,	// (0x0002b9cf) cam4_battery_pane_g2

0x0001,

0xfb02,	// (0x0002eaef) cam4_battery_pane_g

0xc8a8,	// (0x0002b895) popup_blid_sat_info2_window_t11

0xaf8a,	// (0x00029f77) aid_size_touch_mv_arrow_left_ParamLimits

0xafb5,	// (0x00029fa2) aid_size_touch_mv_arrow_right_ParamLimits

0xb013,	// (0x0002a000) navi_pane_g1_ParamLimits

0xb01f,	// (0x0002a00c) navi_pane_g2_ParamLimits

0xb04d,	// (0x0002a03a) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0002e3b7) navi_pane_g_ParamLimits

0x4680,	// (0x0002366d) navi_pane_mv_t1_ParamLimits

0x648c,	// (0x00025479) grid_imed_effect_pane_ParamLimits

0x31ab,	// (0x00022198) aid_placing_vt_slider_lsc

0xa76d,	// (0x0002975a) aid_placing_vt_slider_prt

0xa968,	// (0x00029955) bg_tb_trans_pane_cp01_ParamLimits

0xcb29,	// (0x0002bb16) popup_image_details_window_g1_ParamLimits

0xcb3c,	// (0x0002bb29) popup_image_details_window_g2_ParamLimits

0xcb51,	// (0x0002bb3e) popup_image_details_window_g3_ParamLimits

0xcb51,	// (0x0002bb3e) popup_image_details_window_g3

0xf6fd,	// (0x0002e6ea) popup_image_details_window_g_ParamLimits

0xcb65,	// (0x0002bb52) popup_image_details_window_t1_ParamLimits

0xcb77,	// (0x0002bb64) popup_image_details_window_t2_ParamLimits

0xcb90,	// (0x0002bb7d) popup_image_details_window_t3_ParamLimits

0xcba4,	// (0x0002bb91) popup_image_details_window_t4_ParamLimits

0xcbbf,	// (0x0002bbac) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0002e6f1) popup_image_details_window_t_ParamLimits

0x7521,	// (0x0002650e) cl_header_name_pane_ParamLimits

0x7521,	// (0x0002650e) cl_header_name_pane

0x7813,	// (0x00026800) cl_header_name_pane_t1_ParamLimits

0x7813,	// (0x00026800) cl_header_name_pane_t1

0x782a,	// (0x00026817) cl_header_name_pane_t2_ParamLimits

0x782a,	// (0x00026817) cl_header_name_pane_t2

0x7854,	// (0x00026841) cl_header_name_pane_t3_ParamLimits

0x7854,	// (0x00026841) cl_header_name_pane_t3

0x0002,

0xfb07,	// (0x0002eaf4) cl_header_name_pane_t_ParamLimits

0xfb07,	// (0x0002eaf4) cl_header_name_pane_t

0xb0dc,	// (0x0002a0c9) navi_pane_mv_g2_ParamLimits

0xd392,	// (0x0002c37f) field_vitu2_entry_pane_g1_ParamLimits

0xd39e,	// (0x0002c38b) field_vitu2_entry_pane_g2_ParamLimits

0xd3aa,	// (0x0002c397) field_vitu2_entry_pane_g3_ParamLimits

0xd3aa,	// (0x0002c397) field_vitu2_entry_pane_g3

0xf904,	// (0x0002e8f1) field_vitu2_entry_pane_g_ParamLimits

0x1fde,	// (0x00020fcb) cell_vitu2_itu_pane_g1_ParamLimits

0x1ff0,	// (0x00020fdd) cell_vitu2_itu_pane_g2_ParamLimits

0x1ff0,	// (0x00020fdd) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0002e8fd) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0002e8fd) cell_vitu2_itu_pane_g

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp05_ParamLimits

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp05

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp03

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp04

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp10_ParamLimits

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp10

0x74c3,	// (0x000264b0) bg_vkb2_func_pane_cp08

0x74a9,	// (0x00026496) bg_vkb2_func_pane_cp06

0x74b7,	// (0x000264a4) bg_vkb2_func_pane_cp07

0xd9c1,	// (0x0002c9ae) bg_vkb2_func_pane_cp11_ParamLimits

0xd9c1,	// (0x0002c9ae) bg_vkb2_func_pane_cp11

0xd9d6,	// (0x0002c9c3) bg_vkb2_func_pane_cp12_ParamLimits

0xd9d6,	// (0x0002c9c3) bg_vkb2_func_pane_cp12

0x9dbc,	// (0x00028da9) bg_vkb2_func_pane_cp09

0xd3e7,	// (0x0002c3d4) bg_vkb2_func_pane_g1

0xa933,	// (0x00029920) bg_vkb2_func_pane_g2

0xd3ef,	// (0x0002c3dc) bg_vkb2_func_pane_g3

0xd3f7,	// (0x0002c3e4) bg_vkb2_func_pane_g4

0xd611,	// (0x0002c5fe) bg_vkb2_func_pane_g5

0xd40f,	// (0x0002c3fc) bg_vkb2_func_pane_g6

0xd417,	// (0x0002c404) bg_vkb2_func_pane_g7

0xd407,	// (0x0002c3f4) bg_vkb2_func_pane_g8

0xa913,	// (0x00029900) bg_vkb2_func_pane_g9

0x0008,

0xfb0e,	// (0x0002eafb) bg_vkb2_func_pane_g

0x7760,	// (0x0002674d) blid2_tripm_pane_g6_ParamLimits

0x7760,	// (0x0002674d) blid2_tripm_pane_g6

0xd2d0,	// (0x0002c2bd) mp4_progress_pane_g1

0x77b8,	// (0x000267a5) blid2_tripm_values_pane_ParamLimits

0x77b8,	// (0x000267a5) blid2_tripm_values_pane

0x7879,	// (0x00026866) blid2_tripm_values_pane_t1

0x7887,	// (0x00026874) blid2_tripm_values_pane_t2

0x7895,	// (0x00026882) blid2_tripm_values_pane_t3

0x78a3,	// (0x00026890) blid2_tripm_values_pane_t4

0x78b1,	// (0x0002689e) blid2_tripm_values_pane_t5

0x78bf,	// (0x000268ac) blid2_tripm_values_pane_t6

0x78cd,	// (0x000268ba) blid2_tripm_values_pane_t7

0x78db,	// (0x000268c8) blid2_tripm_values_pane_t8

0x78e9,	// (0x000268d6) blid2_tripm_values_pane_t9

0x0008,

0xfb21,	// (0x0002eb0e) blid2_tripm_values_pane_t

0x31e9,	// (0x000221d6) call_video_pane_t1_ParamLimits

0x3206,	// (0x000221f3) call_video_pane_t2_ParamLimits

0xf253,	// (0x0002e240) call_video_pane_t_ParamLimits

0x4bcb,	// (0x00023bb8) msg_header_pane_g1_ParamLimits

0xb2c2,	// (0x0002a2af) msg_header_pane_g2_ParamLimits

0xb2c2,	// (0x0002a2af) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0002e45a) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0002e45a) msg_header_pane_g

0xa52e,	// (0x0002951b) main_clock2_pane_ParamLimits

0x62aa,	// (0x00025297) grid_clock2_toolbar_pane_ParamLimits

0x62aa,	// (0x00025297) grid_clock2_toolbar_pane

0x62aa,	// (0x00025297) listscroll_clock2_pane_ParamLimits

0x62aa,	// (0x00025297) listscroll_clock2_pane

0x6359,	// (0x00025346) main_clock2_pane_t3_ParamLimits

0x6359,	// (0x00025346) main_clock2_pane_t3

0x636b,	// (0x00025358) main_clock2_pane_t4_ParamLimits

0x636b,	// (0x00025358) main_clock2_pane_t4

0xda9f,	// (0x0002ca8c) cell_clock2_toolbar_pane

0xdaa7,	// (0x0002ca94) cell_clock2_toolbar_pane_cp01

0xdaa7,	// (0x0002ca94) cell_clock2_toolbar_pane_cp02

0xdaaf,	// (0x0002ca9c) cell_clock2_toolbar_pane_cp03

0xdab7,	// (0x0002caa4) list_clock2_pane

0xaf0f,	// (0x00029efc) scroll_pane_cp10

0xdabf,	// (0x0002caac) list_single_clock2_pane_ParamLimits

0xdabf,	// (0x0002caac) list_single_clock2_pane

0xa6d6,	// (0x000296c3) list_highlight_pane_cp08

0xdacc,	// (0x0002cab9) list_single_clock2_pane_t1

0xdada,	// (0x0002cac7) list_single_clock2_pane_t2

0x0001,

0xfb34,	// (0x0002eb21) list_single_clock2_pane_t

0x9dbc,	// (0x00028da9) bg_button_pane_cp10

0xdae8,	// (0x0002cad5) cell_clock2_toolbar_pane_g1

0x10a0,	// (0x0002008d) aid_main_viewer_pane_g1_ParamLimits

0x10a0,	// (0x0002008d) aid_main_viewer_pane_g1

0x10ac,	// (0x00020099) aid_main_viewer_pane_g2_ParamLimits

0x10ac,	// (0x00020099) aid_main_viewer_pane_g2

0x4c0a,	// (0x00023bf7) aid_main_viewer_pane_g3_ParamLimits

0x4c0a,	// (0x00023bf7) aid_main_viewer_pane_g3

0x4c1b,	// (0x00023c08) aid_main_viewer_pane_g4_ParamLimits

0x4c1b,	// (0x00023c08) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0002e46b) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0002e46b) aid_main_viewer_pane_g

0x1104,	// (0x000200f1) main_calc_pane_ParamLimits

0x1131,	// (0x0002011e) main_dialer2_pane_ParamLimits

0x0c59,	// (0x0001fc46) main_cam6_pane

0x0c59,	// (0x0001fc46) main_vid6_pane

0x62b6,	// (0x000252a3) listscroll_gen_pane_cp06_ParamLimits

0x62b6,	// (0x000252a3) listscroll_gen_pane_cp06

0x637d,	// (0x0002536a) main_clock2_pane_t5_ParamLimits

0x637d,	// (0x0002536a) main_clock2_pane_t5

0x63ca,	// (0x000253b7) aid_call2_pane_cp10_ParamLimits

0x63dc,	// (0x000253c9) aid_call_pane_cp10_ParamLimits

0xaf7e,	// (0x00029f6b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaf7e,	// (0x00029f6b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x63ee,	// (0x000253db) popup_clock_analogue_window_cp10_g3_ParamLimits

0x63ee,	// (0x000253db) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaf7e,	// (0x00029f6b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0002e7a6) popup_clock_analogue_window_cp10_g_ParamLimits

0x6404,	// (0x000253f1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6812,	// (0x000257ff) cell_dialer2_keypad_pane_g2_ParamLimits

0x6812,	// (0x000257ff) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0002e890) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0002e890) cell_dialer2_keypad_pane_g

0x682e,	// (0x0002581b) cell_dialer2_keypad_pane_t1

0x6c7e,	// (0x00025c6b) main_cset_text2_pane_ParamLimits

0x6c7e,	// (0x00025c6b) main_cset_text2_pane

0xd86b,	// (0x0002c858) area_vitu2_query_pane_g1_ParamLimits

0x7448,	// (0x00026435) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0002ea45) area_vitu2_query_pane_g_ParamLimits

0xd8ef,	// (0x0002c8dc) area_vitu2_query_pane_t7_ParamLimits

0xd8ef,	// (0x0002c8dc) area_vitu2_query_pane_t7

0x74a9,	// (0x00026496) bg_button_pane_cp018_ParamLimits

0x74b7,	// (0x000264a4) bg_button_pane_cp021_ParamLimits

0x74c3,	// (0x000264b0) bg_button_pane_cp022_ParamLimits

0x74c3,	// (0x000264b0) bg_vkb2_func_pane_cp08_ParamLimits

0x74a9,	// (0x00026496) bg_vkb2_func_pane_cp06_ParamLimits

0x74b7,	// (0x000264a4) bg_vkb2_func_pane_cp07_ParamLimits

0x74d4,	// (0x000264c1) input_focus_pane_cp09_ParamLimits

0x233e,	// (0x0002132b) cam6_autofocus_pane_ParamLimits

0x233e,	// (0x0002132b) cam6_autofocus_pane

0x2360,	// (0x0002134d) cam6_image_uncrop_pane_ParamLimits

0x2360,	// (0x0002134d) cam6_image_uncrop_pane

0x238d,	// (0x0002137a) cam6_indi_pane_ParamLimits

0x238d,	// (0x0002137a) cam6_indi_pane

0x23a7,	// (0x00021394) cam6_mode_pane_ParamLimits

0x23a7,	// (0x00021394) cam6_mode_pane

0x23bb,	// (0x000213a8) cam6_timer_pane_ParamLimits

0x23bb,	// (0x000213a8) cam6_timer_pane

0x23c7,	// (0x000213b4) cam6_zoom_pane_ParamLimits

0x23c7,	// (0x000213b4) cam6_zoom_pane

0x78f7,	// (0x000268e4) cam6_mode_pane_g1_ParamLimits

0x78f7,	// (0x000268e4) cam6_mode_pane_g1

0x7903,	// (0x000268f0) cam6_mode_pane_g2_ParamLimits

0x7903,	// (0x000268f0) cam6_mode_pane_g2

0x790f,	// (0x000268fc) cam6_mode_pane_g3_ParamLimits

0x790f,	// (0x000268fc) cam6_mode_pane_g3

0x791b,	// (0x00026908) cam6_mode_pane_g4_ParamLimits

0x791b,	// (0x00026908) cam6_mode_pane_g4

0x0003,

0xfb39,	// (0x0002eb26) cam6_mode_pane_g_ParamLimits

0xfb39,	// (0x0002eb26) cam6_mode_pane_g

0xd31d,	// (0x0002c30a) bg_tb_trans_pane_cp08_ParamLimits

0xd31d,	// (0x0002c30a) bg_tb_trans_pane_cp08

0xdaf0,	// (0x0002cadd) cam6_battery_pane_ParamLimits

0xdaf0,	// (0x0002cadd) cam6_battery_pane

0xdb06,	// (0x0002caf3) cam6_indi_pane_g1_ParamLimits

0xdb06,	// (0x0002caf3) cam6_indi_pane_g1

0xdb18,	// (0x0002cb05) cam6_indi_pane_g2_ParamLimits

0xdb18,	// (0x0002cb05) cam6_indi_pane_g2

0xdb2a,	// (0x0002cb17) cam6_indi_pane_g3_ParamLimits

0xdb2a,	// (0x0002cb17) cam6_indi_pane_g3

0x0002,

0xfb42,	// (0x0002eb2f) cam6_indi_pane_g_ParamLimits

0xfb42,	// (0x0002eb2f) cam6_indi_pane_g

0xdb3c,	// (0x0002cb29) cam6_indi_pane_t1_ParamLimits

0xdb3c,	// (0x0002cb29) cam6_indi_pane_t1

0x696f,	// (0x0002595c) cam6_autofocus_pane_g1

0x6967,	// (0x00025954) cam6_autofocus_pane_g2

0x697f,	// (0x0002596c) cam6_autofocus_pane_g3

0x6977,	// (0x00025964) cam6_autofocus_pane_g4

0x0003,

0xfb49,	// (0x0002eb36) cam6_autofocus_pane_g

0xdb62,	// (0x0002cb4f) cam6_timer_pane_g1

0xdb6a,	// (0x0002cb57) cam6_timer_pane_t1

0xdb78,	// (0x0002cb65) cam6_zoom_cont_pane

0xdb80,	// (0x0002cb6d) cam6_zoom_pane_g1

0xdb88,	// (0x0002cb75) cam6_zoom_pane_g2

0x7927,	// (0x00026914) cam6_zoom_pane_g3

0x0002,

0xfb52,	// (0x0002eb3f) cam6_zoom_pane_g

0xc9e2,	// (0x0002b9cf) cam6_battery_pane_g1

0xc9e2,	// (0x0002b9cf) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0002e6ae) cam6_battery_pane_g

0xdb90,	// (0x0002cb7d) cam6_zoom_cont_pane_g1

0xdb99,	// (0x0002cb86) cam6_zoom_cont_pane_g2

0xdba2,	// (0x0002cb8f) cam6_zoom_cont_pane_g3

0x0002,

0xfb59,	// (0x0002eb46) cam6_zoom_cont_pane_g

0x7944,	// (0x00026931) cam6_mode_pane_cp_ParamLimits

0x7944,	// (0x00026931) cam6_mode_pane_cp

0x7958,	// (0x00026945) cam6_zoom_pane_cp_ParamLimits

0x7958,	// (0x00026945) cam6_zoom_pane_cp

0x7974,	// (0x00026961) vid6_image_uncrop_cif_pane_ParamLimits

0x7974,	// (0x00026961) vid6_image_uncrop_cif_pane

0x79a0,	// (0x0002698d) vid6_image_uncrop_nhd_pane_ParamLimits

0x79a0,	// (0x0002698d) vid6_image_uncrop_nhd_pane

0x79bf,	// (0x000269ac) vid6_image_uncrop_vga_pane_ParamLimits

0x79bf,	// (0x000269ac) vid6_image_uncrop_vga_pane

0x79de,	// (0x000269cb) vid6_image_uncrop_wvga_pane_ParamLimits

0x79de,	// (0x000269cb) vid6_image_uncrop_wvga_pane

0x79fd,	// (0x000269ea) vid6_indi_pane_ParamLimits

0x79fd,	// (0x000269ea) vid6_indi_pane

0xd31d,	// (0x0002c30a) bg_tb_trans_pane_cp09_ParamLimits

0xd31d,	// (0x0002c30a) bg_tb_trans_pane_cp09

0xdbba,	// (0x0002cba7) cam6_battery_pane_cp_ParamLimits

0xdbba,	// (0x0002cba7) cam6_battery_pane_cp

0xdbc6,	// (0x0002cbb3) vid6_indi_pane_g1_ParamLimits

0xdbc6,	// (0x0002cbb3) vid6_indi_pane_g1

0xdbd8,	// (0x0002cbc5) vid6_indi_pane_g2_ParamLimits

0xdbd8,	// (0x0002cbc5) vid6_indi_pane_g2

0xdbea,	// (0x0002cbd7) vid6_indi_pane_g3_ParamLimits

0xdbea,	// (0x0002cbd7) vid6_indi_pane_g3

0xdc01,	// (0x0002cbee) vid6_indi_pane_g4_ParamLimits

0xdc01,	// (0x0002cbee) vid6_indi_pane_g4

0xdc18,	// (0x0002cc05) vid6_indi_pane_g5_ParamLimits

0xdc18,	// (0x0002cc05) vid6_indi_pane_g5

0x0004,

0xfb60,	// (0x0002eb4d) vid6_indi_pane_g_ParamLimits

0xfb60,	// (0x0002eb4d) vid6_indi_pane_g

0xdc32,	// (0x0002cc1f) vid6_indi_pane_t1_ParamLimits

0xdc32,	// (0x0002cc1f) vid6_indi_pane_t1

0xdc48,	// (0x0002cc35) vid6_indi_pane_t2_ParamLimits

0xdc48,	// (0x0002cc35) vid6_indi_pane_t2

0xdc70,	// (0x0002cc5d) vid6_indi_pane_t3_ParamLimits

0xdc70,	// (0x0002cc5d) vid6_indi_pane_t3

0xdc98,	// (0x0002cc85) vid6_indi_pane_t4_ParamLimits

0xdc98,	// (0x0002cc85) vid6_indi_pane_t4

0x0003,

0xfb6b,	// (0x0002eb58) vid6_indi_pane_t_ParamLimits

0xfb6b,	// (0x0002eb58) vid6_indi_pane_t

0xdcbc,	// (0x0002cca9) wait_bar_pane_cp08

0x7a22,	// (0x00026a0f) main_cset_text2_pane_t1_ParamLimits

0x7a22,	// (0x00026a0f) main_cset_text2_pane_t1

0x792f,	// (0x0002691c) listscroll_gen_pane_cp06_t1_ParamLimits

0x792f,	// (0x0002691c) listscroll_gen_pane_cp06_t1

0x0c59,	// (0x0001fc46) main_cam6_set_pane

0x1cb7,	// (0x00020ca4) bg_tb_trans_pane_cp06_ParamLimits

0x1ccd,	// (0x00020cba) cam4_indicators_pane_g1_ParamLimits

0x1cde,	// (0x00020ccb) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0002e8cd) cam4_indicators_pane_g_ParamLimits

0x1cf6,	// (0x00020ce3) cam4_indicators_pane_t1_ParamLimits

0x1123,	// (0x00020110) bg_tb_trans_pane_cp07_ParamLimits

0x1dad,	// (0x00020d9a) vid4_indicators_pane_g1_ParamLimits

0x1dc3,	// (0x00020db0) vid4_indicators_pane_g2_ParamLimits

0x1dd7,	// (0x00020dc4) vid4_indicators_pane_g3_ParamLimits

0x1dea,	// (0x00020dd7) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0002e8df) vid4_indicators_pane_g_ParamLimits

0x1e08,	// (0x00020df5) vid4_indicators_pane_t1_ParamLimits

0x22b9,	// (0x000212a6) vid4_progress_pane_g1_ParamLimits

0x22c9,	// (0x000212b6) vid4_progress_pane_g2_ParamLimits

0x22d9,	// (0x000212c6) vid4_progress_pane_g3_ParamLimits

0x1cde,	// (0x00020ccb) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0002ea90) vid4_progress_pane_g_ParamLimits

0x22eb,	// (0x000212d8) vid4_progress_pane_t1_ParamLimits

0x2301,	// (0x000212ee) vid4_progress_pane_t2_ParamLimits

0x2316,	// (0x00021303) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0002ea9b) vid4_progress_pane_t_ParamLimits

0x232b,	// (0x00021318) wait_bar_pane_cp07_ParamLimits

0x7a49,	// (0x00026a36) main_cam6_set_pane_g2_ParamLimits

0x7a49,	// (0x00026a36) main_cam6_set_pane_g2

0x7a55,	// (0x00026a42) main_cset6_listscroll_pane_ParamLimits

0x7a55,	// (0x00026a42) main_cset6_listscroll_pane

0x7a82,	// (0x00026a6f) main_cset6_slider_pane_ParamLimits

0x7a82,	// (0x00026a6f) main_cset6_slider_pane

0x7a8e,	// (0x00026a7b) main_cset6_text2_pane_ParamLimits

0x7a8e,	// (0x00026a7b) main_cset6_text2_pane

0xdccb,	// (0x0002ccb8) main_cset6_text_pane

0xdcd3,	// (0x0002ccc0) main_cset_list_pane_copy1_ParamLimits

0xdcd3,	// (0x0002ccc0) main_cset_list_pane_copy1

0xdce3,	// (0x0002ccd0) scroll_pane_cp028_copy1

0x7aa1,	// (0x00026a8e) cset_list_set_pane_copy1

0x7ab1,	// (0x00026a9e) aid_position_infowindow_above_copy1

0x7ab9,	// (0x00026aa6) aid_position_infowindow_below_copy1

0x7ac1,	// (0x00026aae) cset_list_set_pane_g1_copy1

0x7ac9,	// (0x00026ab6) cset_list_set_pane_g3_copy1_ParamLimits

0x7ac9,	// (0x00026ab6) cset_list_set_pane_g3_copy1

0x7ad8,	// (0x00026ac5) cset_list_set_pane_t1_copy1_ParamLimits

0x7ad8,	// (0x00026ac5) cset_list_set_pane_t1_copy1

0xa968,	// (0x00029955) list_highlight_pane_cp021_copy1_ParamLimits

0xa968,	// (0x00029955) list_highlight_pane_cp021_copy1

0xdcec,	// (0x0002ccd9) cset6_slider_pane_ParamLimits

0xdcec,	// (0x0002ccd9) cset6_slider_pane

0xdd18,	// (0x0002cd05) main_cset6_slider_pane_g1_ParamLimits

0xdd18,	// (0x0002cd05) main_cset6_slider_pane_g1

0x7aed,	// (0x00026ada) main_cset6_slider_pane_g2_ParamLimits

0x7aed,	// (0x00026ada) main_cset6_slider_pane_g2

0xdd40,	// (0x0002cd2d) main_cset6_slider_pane_g3_ParamLimits

0xdd40,	// (0x0002cd2d) main_cset6_slider_pane_g3

0x7b15,	// (0x00026b02) main_cset6_slider_pane_g4_ParamLimits

0x7b15,	// (0x00026b02) main_cset6_slider_pane_g4

0x7b21,	// (0x00026b0e) main_cset6_slider_pane_g5_ParamLimits

0x7b21,	// (0x00026b0e) main_cset6_slider_pane_g5

0xd51a,	// (0x0002c507) main_cset6_slider_pane_g7_ParamLimits

0xd51a,	// (0x0002c507) main_cset6_slider_pane_g7

0xd526,	// (0x0002c513) main_cset6_slider_pane_g8_ParamLimits

0xd526,	// (0x0002c513) main_cset6_slider_pane_g8

0x7b2d,	// (0x00026b1a) main_cset6_slider_pane_g9_ParamLimits

0x7b2d,	// (0x00026b1a) main_cset6_slider_pane_g9

0x7b39,	// (0x00026b26) main_cset6_slider_pane_g10_ParamLimits

0x7b39,	// (0x00026b26) main_cset6_slider_pane_g10

0x7b45,	// (0x00026b32) main_cset6_slider_pane_g11_ParamLimits

0x7b45,	// (0x00026b32) main_cset6_slider_pane_g11

0x7b51,	// (0x00026b3e) main_cset6_slider_pane_g12_ParamLimits

0x7b51,	// (0x00026b3e) main_cset6_slider_pane_g12

0x7b5d,	// (0x00026b4a) main_cset6_slider_pane_g13_ParamLimits

0x7b5d,	// (0x00026b4a) main_cset6_slider_pane_g13

0x7b69,	// (0x00026b56) main_cset6_slider_pane_g14_ParamLimits

0x7b69,	// (0x00026b56) main_cset6_slider_pane_g14

0x7b75,	// (0x00026b62) main_cset6_slider_pane_g15_ParamLimits

0x7b75,	// (0x00026b62) main_cset6_slider_pane_g15

0x7b8d,	// (0x00026b7a) main_cset6_slider_pane_g16_ParamLimits

0x7b8d,	// (0x00026b7a) main_cset6_slider_pane_g16

0x7b99,	// (0x00026b86) main_cset6_slider_pane_g17_ParamLimits

0x7b99,	// (0x00026b86) main_cset6_slider_pane_g17

0x0011,

0xfb74,	// (0x0002eb61) main_cset6_slider_pane_g_ParamLimits

0xfb74,	// (0x0002eb61) main_cset6_slider_pane_g

0xdd4c,	// (0x0002cd39) main_cset6_slider_pane_t1_ParamLimits

0xdd4c,	// (0x0002cd39) main_cset6_slider_pane_t1

0x7bbd,	// (0x00026baa) main_cset6_slider_pane_t2_ParamLimits

0x7bbd,	// (0x00026baa) main_cset6_slider_pane_t2

0x7be8,	// (0x00026bd5) main_cset6_slider_pane_t3_ParamLimits

0x7be8,	// (0x00026bd5) main_cset6_slider_pane_t3

0x7c13,	// (0x00026c00) main_cset6_slider_pane_t4_ParamLimits

0x7c13,	// (0x00026c00) main_cset6_slider_pane_t4

0x7c3e,	// (0x00026c2b) main_cset6_slider_pane_t5_ParamLimits

0x7c3e,	// (0x00026c2b) main_cset6_slider_pane_t5

0xdd8d,	// (0x0002cd7a) main_cset6_slider_pane_t7_ParamLimits

0xdd8d,	// (0x0002cd7a) main_cset6_slider_pane_t7

0x7c69,	// (0x00026c56) main_cset6_slider_pane_t8_ParamLimits

0x7c69,	// (0x00026c56) main_cset6_slider_pane_t8

0x7c8d,	// (0x00026c7a) main_cset6_slider_pane_t9_ParamLimits

0x7c8d,	// (0x00026c7a) main_cset6_slider_pane_t9

0x7cb1,	// (0x00026c9e) main_cset6_slider_pane_t10_ParamLimits

0x7cb1,	// (0x00026c9e) main_cset6_slider_pane_t10

0x7cd5,	// (0x00026cc2) main_cset6_slider_pane_t11_ParamLimits

0x7cd5,	// (0x00026cc2) main_cset6_slider_pane_t11

0xddc3,	// (0x0002cdb0) main_cset6_slider_pane_t14_ParamLimits

0xddc3,	// (0x0002cdb0) main_cset6_slider_pane_t14

0xddfc,	// (0x0002cde9) main_cset6_slider_pane_t15_ParamLimits

0xddfc,	// (0x0002cde9) main_cset6_slider_pane_t15

0x000b,

0xfb99,	// (0x0002eb86) main_cset6_slider_pane_t_ParamLimits

0xfb99,	// (0x0002eb86) main_cset6_slider_pane_t

0xde35,	// (0x0002ce22) cset_slider_pane_g1_copy1

0xde3e,	// (0x0002ce2b) cset_slider_pane_g2_copy1

0xde47,	// (0x0002ce34) cset_slider_pane_g3_copy1

0x9dbc,	// (0x00028da9) bg_popup_sub_pane_cp011_copy1

0xde50,	// (0x0002ce3d) main_cset_text_pane_g1_copy1

0xd660,	// (0x0002c64d) main_cset_text_pane_t1_copy1

0xd66e,	// (0x0002c65b) main_cset_text_pane_t2_copy1

0xd67c,	// (0x0002c669) main_cset_text_pane_t3_copy1

0xd68a,	// (0x0002c677) main_cset_text_pane_t4_copy1

0xd698,	// (0x0002c685) main_cset_text_pane_t5_copy1

0xde58,	// (0x0002ce45) main_cset_text_pane_t6_copy1

0xde66,	// (0x0002ce53) main_cset_text_pane_t7_copy1

0x7dcf,	// (0x00026dbc) main_cset_text2_pane_t1_copy1

0x1123,	// (0x00020110) main_ncimui_pane

0x118a,	// (0x00020177) popup_query_ncimui_window_ParamLimits

0x118a,	// (0x00020177) popup_query_ncimui_window

0xcc6e,	// (0x0002bc5b) field_cale_ev2_pane_g4_ParamLimits

0xcc6e,	// (0x0002bc5b) field_cale_ev2_pane_g4

0x67b2,	// (0x0002579f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x67b2,	// (0x0002579f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0002e867) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0002e867) cell_video_dialer_keypad_pane_g

0x67ca,	// (0x000257b7) cell_video_dialer_keypad_pane_t1

0x9dbc,	// (0x00028da9) bg_popup_window_pane_cp012

0xadfb,	// (0x00029de8) heading_pane_cp06

0xde92,	// (0x0002ce7f) ncim_query_content_pane

0x9dbc,	// (0x00028da9) bg_popup_heading_pane_cp01

0xde9a,	// (0x0002ce87) ncim_heading_pane_t1

0xdea8,	// (0x0002ce95) ncim_indicator_popup_pane

0xdeba,	// (0x0002cea7) ncim_query_button_pane

0xded0,	// (0x0002cebd) ncim_query_content_pane_t1

0xdee2,	// (0x0002cecf) ncim_query_content_pane_t2

0x0005,

0xfbdd,	// (0x0002ebca) ncim_query_content_pane_t

0xdf1c,	// (0x0002cf09) ncim_query_list_pane

0xdf2e,	// (0x0002cf1b) ncim_query_popup_pane

0xdea8,	// (0x0002ce95) ncim_indicator_popup_pane_ParamLimits

0x7f2b,	// (0x00026f18) ncim_query_content_pane_g1_ParamLimits

0x7f2b,	// (0x00026f18) ncim_query_content_pane_g1

0xded0,	// (0x0002cebd) ncim_query_content_pane_t1_ParamLimits

0xdee2,	// (0x0002cecf) ncim_query_content_pane_t2_ParamLimits

0x7f37,	// (0x00026f24) ncim_query_content_pane_t3_ParamLimits

0x7f37,	// (0x00026f24) ncim_query_content_pane_t3

0x7f54,	// (0x00026f41) ncim_query_content_pane_t4_ParamLimits

0x7f54,	// (0x00026f41) ncim_query_content_pane_t4

0x7f71,	// (0x00026f5e) ncim_query_content_pane_t5_ParamLimits

0x7f71,	// (0x00026f5e) ncim_query_content_pane_t5

0xdef4,	// (0x0002cee1) ncim_query_content_pane_t6_ParamLimits

0xdef4,	// (0x0002cee1) ncim_query_content_pane_t6

0xfbdd,	// (0x0002ebca) ncim_query_content_pane_t_ParamLimits

0xdf1c,	// (0x0002cf09) ncim_query_list_pane_ParamLimits

0xdf2e,	// (0x0002cf1b) ncim_query_popup_pane_ParamLimits

0xdf42,	// (0x0002cf2f) wait_bar_pane_cp04

0x9dbc,	// (0x00028da9) input_focus_pane_cp011

0xdf4a,	// (0x0002cf37) ncim_query_popup_pane_t1

0xdf58,	// (0x0002cf45) ncim_list_query_list_pane_ParamLimits

0xdf58,	// (0x0002cf45) ncim_list_query_list_pane

0x9dbc,	// (0x00028da9) bg_button_pane_cp027

0xdf6b,	// (0x0002cf58) ncim_query_button_pane_g1

0x9dbc,	// (0x00028da9) list_highlight_pane_cp012

0xdf75,	// (0x0002cf62) ncim_list_query_list_pane_g1

0xdf7d,	// (0x0002cf6a) ncim_list_query_list_pane_t1

0x1cea,	// (0x00020cd7) cam4_indicators_pane_g3_ParamLimits

0x1cea,	// (0x00020cd7) cam4_indicators_pane_g3

0x1df6,	// (0x00020de3) vid4_indicators_pane_g5_ParamLimits

0x1df6,	// (0x00020de3) vid4_indicators_pane_g5

0x1cea,	// (0x00020cd7) vid4_progress_pane_g5_ParamLimits

0x1cea,	// (0x00020cd7) vid4_progress_pane_g5

0x7e01,	// (0x00026dee) main_ncimui_pane_g1

0x7e6d,	// (0x00026e5a) ncimui_group_query_pane_ParamLimits

0x7e6d,	// (0x00026e5a) ncimui_group_query_pane

0x7ec7,	// (0x00026eb4) ncimui_list_pane_ParamLimits

0x7ec7,	// (0x00026eb4) ncimui_list_pane

0x7eee,	// (0x00026edb) ncimui_text_pane_ParamLimits

0x7eee,	// (0x00026edb) ncimui_text_pane

0x7f8e,	// (0x00026f7b) ncimui_text_pane_t1_ParamLimits

0x7f8e,	// (0x00026f7b) ncimui_text_pane_t1

0xdf8b,	// (0x0002cf78) ncimui_list_single_graphic_pane_ParamLimits

0xdf8b,	// (0x0002cf78) ncimui_list_single_graphic_pane

0x7fad,	// (0x00026f9a) ncimui_query_pane_ParamLimits

0x7fad,	// (0x00026f9a) ncimui_query_pane

0x9dbc,	// (0x00028da9) list_highlight_pane_cp013

0xdf9b,	// (0x0002cf88) ncim_list_query_list_pane_t1_copy1

0xdf75,	// (0x0002cf62) ncim_list_single_graphic_pane_g1

0x7fc0,	// (0x00026fad) ncim_query_button_pane_cp01

0x7fcc,	// (0x00026fb9) ncim_query_entry_pane_ParamLimits

0x7fcc,	// (0x00026fb9) ncim_query_entry_pane

0x7fdf,	// (0x00026fcc) ncimui_query_pane_g1

0x7feb,	// (0x00026fd8) ncimui_query_pane_t1_ParamLimits

0x7feb,	// (0x00026fd8) ncimui_query_pane_t1

0xa968,	// (0x00029955) input_focus_pane_cp012

0xdfa9,	// (0x0002cf96) ncim_query_entry_pane_t1

0xa52e,	// (0x0002951b) main_im_pane_ParamLimits

0x1123,	// (0x00020110) main_mobtv_pane_ParamLimits

0x1123,	// (0x00020110) main_mobtv_pane

0x7ba5,	// (0x00026b92) main_cset6_slider_pane_g18_ParamLimits

0x7ba5,	// (0x00026b92) main_cset6_slider_pane_g18

0x7bb1,	// (0x00026b9e) main_cset6_slider_pane_g19_ParamLimits

0x7bb1,	// (0x00026b9e) main_cset6_slider_pane_g19

0xd3aa,	// (0x0002c397) bg_main_mobtv_pane_ParamLimits

0xd3aa,	// (0x0002c397) bg_main_mobtv_pane

0x8004,	// (0x00026ff1) main_mobtv_info_pane

0x800f,	// (0x00026ffc) main_mobtv_loading_pane_ParamLimits

0x800f,	// (0x00026ffc) main_mobtv_loading_pane

0xdfbb,	// (0x0002cfa8) main_mobtv_pg_channel_list_pane

0xdfc5,	// (0x0002cfb2) main_mobtv_pg_hdr_pane

0x801c,	// (0x00027009) main_mobtv_programe_curr_pane_ParamLimits

0x801c,	// (0x00027009) main_mobtv_programe_curr_pane

0x8029,	// (0x00027016) main_mobtv_programe_next_pane_ParamLimits

0x8029,	// (0x00027016) main_mobtv_programe_next_pane

0xdfce,	// (0x0002cfbb) popup_mobtv_noti_window

0xc9e2,	// (0x0002b9cf) main_tv_pg_hdr_pane_g1

0xdfd8,	// (0x0002cfc5) main_tv_pg_hdr_pane_g2

0xdfe0,	// (0x0002cfcd) main_tv_pg_hdr_pane_g3

0xdfe8,	// (0x0002cfd5) main_tv_pg_hdr_pane_g4

0xdff0,	// (0x0002cfdd) main_tv_pg_hdr_pane_g5

0xdffa,	// (0x0002cfe7) main_tv_pg_hdr_pane_g6

0xe004,	// (0x0002cff1) main_tv_pg_hdr_pane_g7

0xe00e,	// (0x0002cffb) main_tv_pg_hdr_pane_g8

0xe018,	// (0x0002d005) main_tv_pg_hdr_pane_g9

0xe022,	// (0x0002d00f) main_tv_pg_hdr_pane_g10

0xe02c,	// (0x0002d019) main_tv_pg_hdr_pane_g11

0x000a,

0xfbea,	// (0x0002ebd7) main_tv_pg_hdr_pane_g

0xe036,	// (0x0002d023) main_tv_pg_hdr_pane_t1

0xe044,	// (0x0002d031) main_tv_pg_hdr_pane_t2

0xe052,	// (0x0002d03f) main_tv_pg_hdr_pane_t3

0xe062,	// (0x0002d04f) main_tv_pg_hdr_pane_t4

0xe072,	// (0x0002d05f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc01,	// (0x0002ebee) main_tv_pg_hdr_pane_t

0xe082,	// (0x0002d06f) single_mobtv_pg_channel_pane_ParamLimits

0xe082,	// (0x0002d06f) single_mobtv_pg_channel_pane

0xe094,	// (0x0002d081) single_mobtv_pg_channel_table_pane

0xe09d,	// (0x0002d08a) single_mobtv_pg_channel_thumb_pane

0xe0a6,	// (0x0002d093) single_tv_pg_channel_pane_g1

0xe0af,	// (0x0002d09c) single_tv_pg_channel_pane_g2

0x0001,

0xfc0c,	// (0x0002ebf9) single_tv_pg_channel_pane_g

0xcc09,	// (0x0002bbf6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcc09,	// (0x0002bbf6) bg_single_mobtv_pg_channel_thumb_pane

0xe0b8,	// (0x0002d0a5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0b8,	// (0x0002d0a5) single_mobtv_pg_channel_thumb_pane_g1

0xe0c6,	// (0x0002d0b3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0c6,	// (0x0002d0b3) single_mobtv_pg_channel_thumb_pane_g2

0xe0d2,	// (0x0002d0bf) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0d2,	// (0x0002d0bf) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc11,	// (0x0002ebfe) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc11,	// (0x0002ebfe) single_mobtv_pg_channel_thumb_pane_g

0xe0de,	// (0x0002d0cb) single_mobtv_pg_channel_thumb_pane_t1

0xe0ec,	// (0x0002d0d9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc18,	// (0x0002ec05) single_mobtv_pg_channel_thumb_pane_t

0xc9e2,	// (0x0002b9cf) bg_single_mobtv_pg_channel_table_pane_g1

0xc9e2,	// (0x0002b9cf) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0002e6ae) bg_single_mobtv_pg_channel_table_pane_g

0xe0fa,	// (0x0002d0e7) single_mobtv_pg_channel_table_pane_t1

0xe108,	// (0x0002d0f5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1d,	// (0x0002ec0a) single_mobtv_pg_channel_table_pane_t

0x803e,	// (0x0002702b) main_mobtv_info_pane_g1_ParamLimits

0x803e,	// (0x0002702b) main_mobtv_info_pane_g1

0x805a,	// (0x00027047) main_mobtv_info_pane_t1_ParamLimits

0x805a,	// (0x00027047) main_mobtv_info_pane_t1

0x80d2,	// (0x000270bf) main_mobtv_info_pane_t2_ParamLimits

0x80d2,	// (0x000270bf) main_mobtv_info_pane_t2

0x0002,

0xfc27,	// (0x0002ec14) main_mobtv_info_pane_t_ParamLimits

0xfc27,	// (0x0002ec14) main_mobtv_info_pane_t

0x8163,	// (0x00027150) wait_bar_pane_cp05

0x8175,	// (0x00027162) main_mobtv_loading_pane_g1_ParamLimits

0x8175,	// (0x00027162) main_mobtv_loading_pane_g1

0x8181,	// (0x0002716e) main_mobtv_loading_pane_g2_ParamLimits

0x8181,	// (0x0002716e) main_mobtv_loading_pane_g2

0x818d,	// (0x0002717a) main_mobtv_loading_pane_g3_ParamLimits

0x818d,	// (0x0002717a) main_mobtv_loading_pane_g3

0x0002,

0xfc2e,	// (0x0002ec1b) main_mobtv_loading_pane_g_ParamLimits

0xfc2e,	// (0x0002ec1b) main_mobtv_loading_pane_g

0xe116,	// (0x0002d103) main_mobtv_loading_pane_t1_ParamLimits

0xe116,	// (0x0002d103) main_mobtv_loading_pane_t1

0xe12e,	// (0x0002d11b) main_mobtv_loading_pane_t2_ParamLimits

0xe12e,	// (0x0002d11b) main_mobtv_loading_pane_t2

0x0001,

0xfc35,	// (0x0002ec22) main_mobtv_loading_pane_t_ParamLimits

0xfc35,	// (0x0002ec22) main_mobtv_loading_pane_t

0x819b,	// (0x00027188) wait_bar_pane_cp06_ParamLimits

0x819b,	// (0x00027188) wait_bar_pane_cp06

0xe152,	// (0x0002d13f) main_mobtv_programe_curr_pane_t1

0xe160,	// (0x0002d14d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3a,	// (0x0002ec27) main_mobtv_programe_curr_pane_t

0xe16e,	// (0x0002d15b) main_mobtv_programe_next_pane_t1

0xe17c,	// (0x0002d169) main_mobtv_programe_next_pane_t2

0xe18a,	// (0x0002d177) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3f,	// (0x0002ec2c) main_mobtv_programe_next_pane_t

0x9dbc,	// (0x00028da9) bg_popup_mobtv_noti_window_pane

0xe198,	// (0x0002d185) popup_mobtv_noti_window_g1

0xe1a0,	// (0x0002d18d) popup_mobtv_noti_window_t1

0xe1ae,	// (0x0002d19b) popup_mobtv_noti_window_t2

0x0001,

0xfc46,	// (0x0002ec33) popup_mobtv_noti_window_t

0xc9e2,	// (0x0002b9cf) bg_popup_mobtv_noti_window_pane_g1

0x0c59,	// (0x0001fc46) sc_clock_pane

0x0c59,	// (0x0001fc46) main_fs_bigclock_pane

0x77a6,	// (0x00026793) blid2_tripm_pane_t4_ParamLimits

0x77a6,	// (0x00026793) blid2_tripm_pane_t4

0x81a7,	// (0x00027194) sc_clock_pane_g1_ParamLimits

0x81a7,	// (0x00027194) sc_clock_pane_g1

0x81b5,	// (0x000271a2) sc_clock_pane_t1_ParamLimits

0x81b5,	// (0x000271a2) sc_clock_pane_t1

0x81ca,	// (0x000271b7) sc_clock_pane_t2_ParamLimits

0x81ca,	// (0x000271b7) sc_clock_pane_t2

0x81dc,	// (0x000271c9) sc_clock_pane_t3_ParamLimits

0x81dc,	// (0x000271c9) sc_clock_pane_t3

0x0004,

0xfc4b,	// (0x0002ec38) sc_clock_pane_t_ParamLimits

0xfc4b,	// (0x0002ec38) sc_clock_pane_t

0x92b9,	// (0x000282a6) main_fs_bigclock_indicator_pane_ParamLimits

0x92b9,	// (0x000282a6) main_fs_bigclock_indicator_pane

0x826b,	// (0x00027258) main_fs_bigclock_pane_g1_ParamLimits

0x826b,	// (0x00027258) main_fs_bigclock_pane_g1

0x92c5,	// (0x000282b2) main_fs_bigclock_pane_t1_ParamLimits

0x92c5,	// (0x000282b2) main_fs_bigclock_pane_t1

0x92d7,	// (0x000282c4) main_fs_bigclock_pane_t2_ParamLimits

0x92d7,	// (0x000282c4) main_fs_bigclock_pane_t2

0x92eb,	// (0x000282d8) main_fs_bigclock_pane_t3_ParamLimits

0x92eb,	// (0x000282d8) main_fs_bigclock_pane_t3

0x0002,

0xfe54,	// (0x0002ee41) main_fs_bigclock_pane_t_ParamLimits

0xfe54,	// (0x0002ee41) main_fs_bigclock_pane_t

0xec3e,	// (0x0002dc2b) main_fs_bigclock_indicator_pane_g1

0xdec2,	// (0x0002ceaf) ncim_query_content_pane_g2_ParamLimits

0xdec2,	// (0x0002ceaf) ncim_query_content_pane_g2

0x0001,

0xfbd8,	// (0x0002ebc5) ncim_query_content_pane_g_ParamLimits

0xfbd8,	// (0x0002ebc5) ncim_query_content_pane_g

0x81ee,	// (0x000271db) sc_clock_pane_t4_ParamLimits

0x81ee,	// (0x000271db) sc_clock_pane_t4

0x1123,	// (0x00020110) main_radioblah_pane

0x1ba6,	// (0x00020b93) cell_call4_button_pane_t1_copy1_ParamLimits

0x1ba6,	// (0x00020b93) cell_call4_button_pane_t1_copy1

0x7e1d,	// (0x00026e0a) main_ncimui_pane_t1_ParamLimits

0x7e1d,	// (0x00026e0a) main_ncimui_pane_t1

0x7e37,	// (0x00026e24) main_ncimui_pane_t2_ParamLimits

0x7e37,	// (0x00026e24) main_ncimui_pane_t2

0x0002,

0xfbd1,	// (0x0002ebbe) main_ncimui_pane_t_ParamLimits

0xfbd1,	// (0x0002ebbe) main_ncimui_pane_t

0xe1bc,	// (0x0002d1a9) main_radioblah_anim_pane_ParamLimits

0xe1bc,	// (0x0002d1a9) main_radioblah_anim_pane

0xe1cd,	// (0x0002d1ba) main_radioblah_info_pane_ParamLimits

0xe1cd,	// (0x0002d1ba) main_radioblah_info_pane

0xe1e1,	// (0x0002d1ce) main_radioblah_pane_t1_ParamLimits

0xe1e1,	// (0x0002d1ce) main_radioblah_pane_t1

0xe1fd,	// (0x0002d1ea) main_radioblah_pane_t2_ParamLimits

0xe1fd,	// (0x0002d1ea) main_radioblah_pane_t2

0x0003,

0xfc6c,	// (0x0002ec59) main_radioblah_pane_t_ParamLimits

0xfc6c,	// (0x0002ec59) main_radioblah_pane_t

0x840a,	// (0x000273f7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x840a,	// (0x000273f7) main_radioblah_rocker_ctrl_pane

0xe245,	// (0x0002d232) main_radioblah_info_pane_t1_ParamLimits

0xe245,	// (0x0002d232) main_radioblah_info_pane_t1

0x8453,	// (0x00027440) main_radioblah_info_pane_t2_ParamLimits

0x8453,	// (0x00027440) main_radioblah_info_pane_t2

0x0003,

0xfc75,	// (0x0002ec62) main_radioblah_info_pane_t_ParamLimits

0xfc75,	// (0x0002ec62) main_radioblah_info_pane_t

0xc9e2,	// (0x0002b9cf) main_radioblah_rocker_ctrl_pane_g1

0x8503,	// (0x000274f0) main_radioblah_rocker_ctrl_pane_g2

0x850b,	// (0x000274f8) main_radioblah_rocker_ctrl_pane_g3

0x8513,	// (0x00027500) main_radioblah_rocker_ctrl_pane_g4

0x851b,	// (0x00027508) main_radioblah_rocker_ctrl_pane_g5

0x8523,	// (0x00027510) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7e,	// (0x0002ec6b) main_radioblah_rocker_ctrl_pane_g

0x7dcf,	// (0x00026dbc) main_cset_text2_pane_t1_copy1_ParamLimits

0x1c2f,	// (0x00020c1c) cam4_image_uncrop_qvga_pane

0x1d5c,	// (0x00020d49) vid4_image_uncrop_qcif_pane

0x237f,	// (0x0002136c) cam6_image_uncrop_qvga_pane_ParamLimits

0x237f,	// (0x0002136c) cam6_image_uncrop_qvga_pane

0xdbaa,	// (0x0002cb97) vid6_image_uncrop_qcif_pane_ParamLimits

0xdbaa,	// (0x0002cb97) vid6_image_uncrop_qcif_pane

0x9dbc,	// (0x00028da9) bg_popup_preview_window_pane_cp03

0xde74,	// (0x0002ce61) list_cset_text2_pane

0xde7c,	// (0x0002ce69) main_cset6_text2_pane_g1

0xde84,	// (0x0002ce71) main_cset6_text2_pane_t1

0x852b,	// (0x00027518) list_cset_text2_pane_t1_ParamLimits

0x852b,	// (0x00027518) list_cset_text2_pane_t1

0x1123,	// (0x00020110) main_radioblah_pane_ParamLimits

0x814f,	// (0x0002713c) main_mobtv_info_pane_t3_ParamLimits

0x814f,	// (0x0002713c) main_mobtv_info_pane_t3

0x83f8,	// (0x000273e5) main_radioblah_pane_g1

0x8423,	// (0x00027410) main_radioblah_info_pane_g1

0x84a8,	// (0x00027495) main_radioblah_info_pane_t3_ParamLimits

0x84a8,	// (0x00027495) main_radioblah_info_pane_t3

0x41b1,	// (0x0002319e) highlight_cell_cale_month_pane_ParamLimits

0x41b1,	// (0x0002319e) highlight_cell_cale_month_pane

0x0c59,	// (0x0001fc46) main_phob_fisheye_pane

0xccf1,	// (0x0002bcde) scroll_pane_cp0031_ParamLimits

0xccf1,	// (0x0002bcde) scroll_pane_cp0031

0xdcbc,	// (0x0002cca9) wait_bar_pane_cp08_ParamLimits

0x7aa1,	// (0x00026a8e) cset_list_set_pane_copy1_ParamLimits

0xe27f,	// (0x0002d26c) highlight_cell_cale_month_pane_g1

0x8542,	// (0x0002752f) highlight_cell_cale_month_pane_t1

0xd95b,	// (0x0002c948) list_gen_pane_cp01

0xd505,	// (0x0002c4f2) scroll_pane_01

0x8550,	// (0x0002753d) list_single_double_fisheye_pane

0x8559,	// (0x00027546) list_double_fisheye_pane_g1_ParamLimits

0x8559,	// (0x00027546) list_double_fisheye_pane_g1

0x8565,	// (0x00027552) list_double_fisheye_pane_g2_ParamLimits

0x8565,	// (0x00027552) list_double_fisheye_pane_g2

0x8579,	// (0x00027566) list_double_fisheye_pane_g3_ParamLimits

0x8579,	// (0x00027566) list_double_fisheye_pane_g3

0x0004,

0xfc8b,	// (0x0002ec78) list_double_fisheye_pane_g_ParamLimits

0xfc8b,	// (0x0002ec78) list_double_fisheye_pane_g

0x85a2,	// (0x0002758f) list_double_fisheye_pane_t1_ParamLimits

0x85a2,	// (0x0002758f) list_double_fisheye_pane_t1

0x85bd,	// (0x000275aa) list_double_fisheye_pane_t2_ParamLimits

0x85bd,	// (0x000275aa) list_double_fisheye_pane_t2

0x0001,

0xfc96,	// (0x0002ec83) list_double_fisheye_pane_t_ParamLimits

0xfc96,	// (0x0002ec83) list_double_fisheye_pane_t

0x0c59,	// (0x0001fc46) main_call5_pane

0x8214,	// (0x00027201) sc_swipe_pane_ParamLimits

0x8214,	// (0x00027201) sc_swipe_pane

0x85eb,	// (0x000275d8) call5_image_pane_ParamLimits

0x85eb,	// (0x000275d8) call5_image_pane

0x85fd,	// (0x000275ea) call5_swipe_1_pane_ParamLimits

0x85fd,	// (0x000275ea) call5_swipe_1_pane

0x8609,	// (0x000275f6) call5_swipe_2_pane_ParamLimits

0x8609,	// (0x000275f6) call5_swipe_2_pane

0x8623,	// (0x00027610) popup_call5_audio_first_window_ParamLimits

0x8623,	// (0x00027610) popup_call5_audio_first_window

0xcc09,	// (0x0002bbf6) call5_swipe_1_pane_g1_ParamLimits

0xcc09,	// (0x0002bbf6) call5_swipe_1_pane_g1

0xe287,	// (0x0002d274) call5_swipe_1_pane_g2_ParamLimits

0xe287,	// (0x0002d274) call5_swipe_1_pane_g2

0x0001,

0xfc9b,	// (0x0002ec88) call5_swipe_1_pane_g_ParamLimits

0xfc9b,	// (0x0002ec88) call5_swipe_1_pane_g

0xe293,	// (0x0002d280) call5_swipe_1_pane_t1_ParamLimits

0xe293,	// (0x0002d280) call5_swipe_1_pane_t1

0xcc09,	// (0x0002bbf6) call5_swipe_2_pane_g1_ParamLimits

0xcc09,	// (0x0002bbf6) call5_swipe_2_pane_g1

0xe2a8,	// (0x0002d295) call5_swipe_2_pane_g2_ParamLimits

0xe2a8,	// (0x0002d295) call5_swipe_2_pane_g2

0x0001,

0xfca0,	// (0x0002ec8d) call5_swipe_2_pane_g_ParamLimits

0xfca0,	// (0x0002ec8d) call5_swipe_2_pane_g

0xe2b4,	// (0x0002d2a1) call5_swipe_2_pane_t1_ParamLimits

0xe2b4,	// (0x0002d2a1) call5_swipe_2_pane_t1

0xe2c9,	// (0x0002d2b6) sc_swipe_pane_g1_ParamLimits

0xe2c9,	// (0x0002d2b6) sc_swipe_pane_g1

0xe2d6,	// (0x0002d2c3) sc_swipe_pane_g2_ParamLimits

0xe2d6,	// (0x0002d2c3) sc_swipe_pane_g2

0x0001,

0xfca5,	// (0x0002ec92) sc_swipe_pane_g_ParamLimits

0xfca5,	// (0x0002ec92) sc_swipe_pane_g

0xe2e2,	// (0x0002d2cf) sc_swipe_pane_t1_ParamLimits

0xe2e2,	// (0x0002d2cf) sc_swipe_pane_t1

0x0c59,	// (0x0001fc46) main_cmail_launcher_pane

0x8633,	// (0x00027620) aid_size_cell_cmail_l_ParamLimits

0x8633,	// (0x00027620) aid_size_cell_cmail_l

0x8641,	// (0x0002762e) grid_cmail_l_pane_ParamLimits

0x8641,	// (0x0002762e) grid_cmail_l_pane

0x8651,	// (0x0002763e) cell_cmail_l_pane_ParamLimits

0x8651,	// (0x0002763e) cell_cmail_l_pane

0xe2f7,	// (0x0002d2e4) cell_cmail_l_pane_g1_ParamLimits

0xe2f7,	// (0x0002d2e4) cell_cmail_l_pane_g1

0xe303,	// (0x0002d2f0) cell_cmail_l_pane_t1_ParamLimits

0xe303,	// (0x0002d2f0) cell_cmail_l_pane_t1

0xe319,	// (0x0002d306) cell_cmail_l_pane_t2_ParamLimits

0xe319,	// (0x0002d306) cell_cmail_l_pane_t2

0x0001,

0xfcaa,	// (0x0002ec97) cell_cmail_l_pane_t_ParamLimits

0xfcaa,	// (0x0002ec97) cell_cmail_l_pane_t

0xa968,	// (0x00029955) grid_highlight_pane_cp018_ParamLimits

0xa968,	// (0x00029955) grid_highlight_pane_cp018

0x0ab8,	// (0x0001faa5) main2_pane_ParamLimits

0x0ab8,	// (0x0001faa5) main2_pane

0xa5c7,	// (0x000295b4) popup_sp_fs_action_menu_bg_pane_g1

0xa5cf,	// (0x000295bc) popup_sp_fs_action_menu_bg_pane_g2

0xa5d7,	// (0x000295c4) popup_sp_fs_action_menu_bg_pane_g3

0xa5df,	// (0x000295cc) popup_sp_fs_action_menu_bg_pane_g4

0xa5e7,	// (0x000295d4) popup_sp_fs_action_menu_bg_pane_g5

0xa5ef,	// (0x000295dc) popup_sp_fs_action_menu_bg_pane_g6

0xa5f7,	// (0x000295e4) popup_sp_fs_action_menu_bg_pane_g7

0xa5ff,	// (0x000295ec) popup_sp_fs_action_menu_bg_pane_g8

0xa607,	// (0x000295f4) popup_sp_fs_action_menu_bg_pane_g9

0xa60f,	// (0x000295fc) popup_sp_fs_action_menu_bg_pane_g10

0xa60f,	// (0x000295fc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0002e15c) popup_sp_fs_action_menu_bg_pane_g

0x3022,	// (0x0002200f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t3_g3_g1

0x302e,	// (0x0002201b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x2_t3_g3_g2

0x303a,	// (0x00022027) list_medium_line_x2_t3_g3_g3_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0002e20a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0002e20a) list_medium_line_x2_t3_g3_g

0x3046,	// (0x00022033) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3046,	// (0x00022033) list_medium_line_x2_t3_g3_t1

0x305b,	// (0x00022048) list_medium_line_x2_t3_g3_t2_ParamLimits

0x305b,	// (0x00022048) list_medium_line_x2_t3_g3_t2

0x306f,	// (0x0002205c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0002e211) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0002e211) list_medium_line_x2_t3_g3_t

0x3022,	// (0x0002200f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t3_g2_g1

0x303a,	// (0x00022027) list_medium_line_x2_t3_g2_g2_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0002e218) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0002e218) list_medium_line_x2_t3_g2_g

0x3084,	// (0x00022071) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3084,	// (0x00022071) list_medium_line_x2_t3_g2_t1

0x309a,	// (0x00022087) list_medium_line_x2_t3_g2_t2_ParamLimits

0x309a,	// (0x00022087) list_medium_line_x2_t3_g2_t2

0x30ac,	// (0x00022099) list_medium_line_x2_t3_g2_t3_ParamLimits

0x30ac,	// (0x00022099) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0002e21d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0002e21d) list_medium_line_x2_t3_g2_t

0x3022,	// (0x0002200f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t4_g4_g1

0x30ca,	// (0x000220b7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x30ca,	// (0x000220b7) list_medium_line_x2_t4_g4_g2

0x302e,	// (0x0002201b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x2_t4_g4_g3

0x30d6,	// (0x000220c3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x30d6,	// (0x000220c3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0002e224) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0002e224) list_medium_line_x2_t4_g4_g

0x30e2,	// (0x000220cf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x30e2,	// (0x000220cf) list_medium_line_x2_t4_g4_t1

0x30fc,	// (0x000220e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x30fc,	// (0x000220e9) list_medium_line_x2_t4_g4_t2

0x3112,	// (0x000220ff) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3112,	// (0x000220ff) list_medium_line_x2_t4_g4_t3

0x3127,	// (0x00022114) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3127,	// (0x00022114) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0002e22d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0002e22d) list_medium_line_x2_t4_g4_t

0x3022,	// (0x0002200f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t2_g4_g1

0x30ca,	// (0x000220b7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x30ca,	// (0x000220b7) list_medium_line_x2_t2_g4_g2

0x302e,	// (0x0002201b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x2_t2_g4_g3

0x303a,	// (0x00022027) list_medium_line_x2_t2_g4_g4_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0002e294) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0002e294) list_medium_line_x2_t2_g4_g

0x41d7,	// (0x000231c4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x41d7,	// (0x000231c4) list_medium_line_x2_t2_g4_t1

0x306f,	// (0x0002205c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0002e29d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0002e29d) list_medium_line_x2_t2_g4_t

0x3022,	// (0x0002200f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t2_g3_g1

0x302e,	// (0x0002201b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x2_t2_g3_g2

0x303a,	// (0x00022027) list_medium_line_x2_t2_g3_g3_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0002e20a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0002e20a) list_medium_line_x2_t2_g3_g

0x41ec,	// (0x000231d9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x41ec,	// (0x000231d9) list_medium_line_x2_t2_g3_t1

0x306f,	// (0x0002205c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0002e2a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0002e2a2) list_medium_line_x2_t2_g3_t

0x432a,	// (0x00023317) main_sp_fs_list_pane_ParamLimits

0x432a,	// (0x00023317) main_sp_fs_list_pane

0x4336,	// (0x00023323) sp_fs_scroll_pane_ParamLimits

0x4336,	// (0x00023323) sp_fs_scroll_pane

0x4342,	// (0x0002332f) list_medium_line_x2_t3_t1

0x4352,	// (0x0002333f) list_medium_line_x2_t3_t2

0x4360,	// (0x0002334d) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0002e2ed) list_medium_line_x2_t3_t

0x436e,	// (0x0002335b) list_medium_line_x3_t4_t1

0x437e,	// (0x0002336b) list_medium_line_x3_t4_t2

0x438c,	// (0x00023379) list_medium_line_x3_t4_t3

0x4360,	// (0x0002334d) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0002e2f4) list_medium_line_x3_t4_t

0x439a,	// (0x00023387) list_medium_line_x4_t5_t1

0x43aa,	// (0x00023397) list_medium_line_x4_t5_t2

0x438c,	// (0x00023379) list_medium_line_x4_t5_t3

0x43b8,	// (0x000233a5) list_medium_line_x4_t5_t4

0x4360,	// (0x0002334d) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0002e2fd) list_medium_line_x4_t5_t

0x3022,	// (0x0002200f) list_medium_line_t4_g4_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_t4_g4_g1

0x30d6,	// (0x000220c3) list_medium_line_t4_g4_g2_ParamLimits

0x30d6,	// (0x000220c3) list_medium_line_t4_g4_g2

0x43c6,	// (0x000233b3) list_medium_line_t4_g4_g3_ParamLimits

0x43c6,	// (0x000233b3) list_medium_line_t4_g4_g3

0x303a,	// (0x00022027) list_medium_line_t4_g4_g4_ParamLimits

0x303a,	// (0x00022027) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0002e308) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0002e308) list_medium_line_t4_g4_g

0x43d2,	// (0x000233bf) list_medium_line_t4_g4_t1_ParamLimits

0x43d2,	// (0x000233bf) list_medium_line_t4_g4_t1

0x43e7,	// (0x000233d4) list_medium_line_t4_g4_t2_ParamLimits

0x43e7,	// (0x000233d4) list_medium_line_t4_g4_t2

0x43fd,	// (0x000233ea) list_medium_line_t4_g4_t3_ParamLimits

0x43fd,	// (0x000233ea) list_medium_line_t4_g4_t3

0x306f,	// (0x0002205c) list_medium_line_t4_g4_t4_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0002e311) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0002e311) list_medium_line_t4_g4_t

0x44b7,	// (0x000234a4) chi_dic_find_pane_g1

0x113f,	// (0x0002012c) main_tport_pane

0x7011,	// (0x00025ffe) list_medium_line_plain_t1

0x7037,	// (0x00026024) list_medium_line_t2_g2_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_t2_g2_g1

0x7043,	// (0x00026030) list_medium_line_t2_g2_g2_ParamLimits

0x7043,	// (0x00026030) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0002e9d6) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0002e9d6) list_medium_line_t2_g2_g

0x704f,	// (0x0002603c) list_medium_line_t2_g2_t1_ParamLimits

0x704f,	// (0x0002603c) list_medium_line_t2_g2_t1

0x7069,	// (0x00026056) list_medium_line_t2_g2_t2_ParamLimits

0x7069,	// (0x00026056) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0002e9db) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0002e9db) list_medium_line_t2_g2_t

0xd964,	// (0x0002c951) aid_sp_fs_list_icon_a_sm

0xd96c,	// (0x0002c959) aid_sp_fs_list_icon_d

0xd974,	// (0x0002c961) aid_sp_fs_text_primary

0xd97d,	// (0x0002c96a) aid_sp_fs_text_secondary

0x75f5,	// (0x000265e2) list_medium_line

0x75f5,	// (0x000265e2) list_medium_line_g2

0x75f5,	// (0x000265e2) list_medium_line_g3

0x75f5,	// (0x000265e2) list_medium_line_plain

0x75f5,	// (0x000265e2) list_medium_line_plain_t2

0x75f5,	// (0x000265e2) list_medium_line_plain_t3

0x75f5,	// (0x000265e2) list_medium_line_right_icon

0x75f5,	// (0x000265e2) list_medium_line_right_iconx2

0x75f5,	// (0x000265e2) list_medium_line_t2

0x75f5,	// (0x000265e2) list_medium_line_t2_g2

0x75f5,	// (0x000265e2) list_medium_line_t2_g3

0x75f5,	// (0x000265e2) list_medium_line_t2_right_icon

0x75f5,	// (0x000265e2) list_medium_line_t2_right_iconx2

0x75f5,	// (0x000265e2) list_medium_line_t3

0x75f5,	// (0x000265e2) list_medium_line_t3_g2

0x75f5,	// (0x000265e2) list_medium_line_t3_g3

0x75f5,	// (0x000265e2) list_medium_line_t3_right_iconx2

0x75fe,	// (0x000265eb) list_medium_line_t4_g4

0x75f5,	// (0x000265e2) list_medium_line_x2

0x75f5,	// (0x000265e2) list_medium_line_x2_t2_g2

0x75f5,	// (0x000265e2) list_medium_line_x2_t2_g3

0x75f5,	// (0x000265e2) list_medium_line_x2_t2_g4

0x75f5,	// (0x000265e2) list_medium_line_x2_t3

0x75f5,	// (0x000265e2) list_medium_line_x2_t3_g2

0x75f5,	// (0x000265e2) list_medium_line_x2_t3_g3

0x75f5,	// (0x000265e2) list_medium_line_x2_t3_g4

0x75f5,	// (0x000265e2) list_medium_line_x2_t4_g2

0x75f5,	// (0x000265e2) list_medium_line_x2_t4_g4

0x7607,	// (0x000265f4) list_medium_line_x3

0x7607,	// (0x000265f4) list_medium_line_x3_t4

0x7607,	// (0x000265f4) list_medium_line_x3_t4_g4

0x75fe,	// (0x000265eb) list_medium_line_x4_t4

0x75fe,	// (0x000265eb) list_medium_line_x4_t4_g7

0x75fe,	// (0x000265eb) list_medium_line_x4_t5

0x7610,	// (0x000265fd) list_single_fs_dyc_pane_ParamLimits

0x7610,	// (0x000265fd) list_single_fs_dyc_pane

0x3022,	// (0x0002200f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x4_t4_g7_g1

0x7cf9,	// (0x00026ce6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cf9,	// (0x00026ce6) list_medium_line_x4_t4_g7_g2

0x7d05,	// (0x00026cf2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d05,	// (0x00026cf2) list_medium_line_x4_t4_g7_g3

0x7d14,	// (0x00026d01) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d14,	// (0x00026d01) list_medium_line_x4_t4_g7_g4

0x7d20,	// (0x00026d0d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d20,	// (0x00026d0d) list_medium_line_x4_t4_g7_g5

0x7d2f,	// (0x00026d1c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d2f,	// (0x00026d1c) list_medium_line_x4_t4_g7_g6

0x7d3e,	// (0x00026d2b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d3e,	// (0x00026d2b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb2,	// (0x0002eb9f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb2,	// (0x0002eb9f) list_medium_line_x4_t4_g7_g

0x7d4a,	// (0x00026d37) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d4a,	// (0x00026d37) list_medium_line_x4_t4_g7_t1

0x7d5f,	// (0x00026d4c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d5f,	// (0x00026d4c) list_medium_line_x4_t4_g7_t2

0x7d74,	// (0x00026d61) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d74,	// (0x00026d61) list_medium_line_x4_t4_g7_t3

0x7d89,	// (0x00026d76) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d89,	// (0x00026d76) list_medium_line_x4_t4_g7_t4

0x7d9b,	// (0x00026d88) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d9b,	// (0x00026d88) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc1,	// (0x0002ebae) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc1,	// (0x0002ebae) list_medium_line_x4_t4_g7_t

0x7dad,	// (0x00026d9a) list_single_dyc_row_pane_ParamLimits

0x7dad,	// (0x00026d9a) list_single_dyc_row_pane

0x85df,	// (0x000275cc) call5_gesture_pane_ParamLimits

0x85df,	// (0x000275cc) call5_gesture_pane

0x8615,	// (0x00027602) call5_windows_pane_ParamLimits

0x8615,	// (0x00027602) call5_windows_pane

0x8666,	// (0x00027653) call5_swipe_1_pane_cp_ParamLimits

0x8666,	// (0x00027653) call5_swipe_1_pane_cp

0x8672,	// (0x0002765f) call5_swipe_2_pane_cp_ParamLimits

0x8672,	// (0x0002765f) call5_swipe_2_pane_cp

0xa6d6,	// (0x000296c3) call5_image_pane_cp

0x867e,	// (0x0002766b) popup_call5_audio_first_window_cp_ParamLimits

0x867e,	// (0x0002766b) popup_call5_audio_first_window_cp

0xe2c9,	// (0x0002d2b6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2c9,	// (0x0002d2b6) call5_swipe_1_pane_g1_cp

0xe336,	// (0x0002d323) call5_swipe_1_pane_g2_cp

0xe2e2,	// (0x0002d2cf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2e2,	// (0x0002d2cf) call5_swipe_1_pane_t1_cp

0xe2c9,	// (0x0002d2b6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2c9,	// (0x0002d2b6) call5_swipe_2_pane_g1_cp

0xe33e,	// (0x0002d32b) call5_swipe_2_pane_g2_cp

0xe346,	// (0x0002d333) call5_swipe_2_pane_t1_cp_ParamLimits

0xe346,	// (0x0002d333) call5_swipe_2_pane_t1_cp

0xa968,	// (0x00029955) main_sp_fs_email_pane

0xd7b4,	// (0x0002c7a1) main_sp_fs_listscroll_pane_te

0x868c,	// (0x00027679) popup_sp_fs_action_menu_pane_ParamLimits

0x868c,	// (0x00027679) popup_sp_fs_action_menu_pane

0xc9e2,	// (0x0002b9cf) bg_sp_fs_ctrlbar_pane_g1

0xe35b,	// (0x0002d348) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe364,	// (0x0002d351) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe36d,	// (0x0002d35a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc9e2,	// (0x0002b9cf) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcaf,	// (0x0002ec9c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc7c1,	// (0x0002b7ae) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc7c1,	// (0x0002b7ae) bg_sp_fs_ctrlbar_ddmenu_pane

0xe376,	// (0x0002d363) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe376,	// (0x0002d363) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe382,	// (0x0002d36f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe382,	// (0x0002d36f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb8,	// (0x0002eca5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb8,	// (0x0002eca5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe38e,	// (0x0002d37b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe38e,	// (0x0002d37b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86d2,	// (0x000276bf) list_medium_line_t2_right_icon_g1

0x86da,	// (0x000276c7) list_medium_line_t2_right_icon_t1

0x86ea,	// (0x000276d7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbd,	// (0x0002ecaa) list_medium_line_t2_right_icon_t

0xc5aa,	// (0x0002b597) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc5aa,	// (0x0002b597) bg_sp_fs_ctrlbar_pane

0x8751,	// (0x0002773e) main_sp_fs_ctrlbar_button_pane_cp01

0x8759,	// (0x00027746) main_sp_fs_ctrlbar_ddmenu_pane

0xe3e2,	// (0x0002d3cf) main_sp_fs_ctrlbar_pane_g1

0xe3ee,	// (0x0002d3db) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc2,	// (0x0002ecaf) main_sp_fs_ctrlbar_pane_g

0x8797,	// (0x00027784) main_sp_fs_ctrlbar_pane_t1

0x87d4,	// (0x000277c1) main_sp_fs_ctrlbar_pane

0x87ee,	// (0x000277db) main_sp_fs_listscroll_pane_te_cp01

0x87ff,	// (0x000277ec) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87ff,	// (0x000277ec) popup_sp_fs_action_menu_pane_cp01

0xa968,	// (0x00029955) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa968,	// (0x00029955) bg_sp_fs_highlight_list_pane_cp01

0xe415,	// (0x0002d402) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe415,	// (0x0002d402) sp_fs_action_menu_list_gene_pane_g1

0xe424,	// (0x0002d411) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe424,	// (0x0002d411) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd0,	// (0x0002ecbd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd0,	// (0x0002ecbd) sp_fs_action_menu_list_gene_pane_g

0xe431,	// (0x0002d41e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe431,	// (0x0002d41e) sp_fs_action_menu_list_gene_pane_t1

0xe449,	// (0x0002d436) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe449,	// (0x0002d436) sp_fs_action_menu_list_gene_pane

0xe46c,	// (0x0002d459) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe46c,	// (0x0002d459) popup_sp_fs_action_menu_bg_pane

0xe47a,	// (0x0002d467) sp_fs_action_menu_list_pane_ParamLimits

0xe47a,	// (0x0002d467) sp_fs_action_menu_list_pane

0x882d,	// (0x0002781a) sp_fs_scroll_pane_cp01_ParamLimits

0x882d,	// (0x0002781a) sp_fs_scroll_pane_cp01

0x8853,	// (0x00027840) list_medium_line_plain_t2_t1

0x8863,	// (0x00027850) list_medium_line_plain_t2_t2

0x0001,

0xfcd5,	// (0x0002ecc2) list_medium_line_plain_t2_t

0x8871,	// (0x0002785e) list_medium_line_plain_t3_t1

0x8881,	// (0x0002786e) list_medium_line_plain_t3_t2

0x888f,	// (0x0002787c) list_medium_line_plain_t3_t3

0x0002,

0xfcda,	// (0x0002ecc7) list_medium_line_plain_t3_t

0x3022,	// (0x0002200f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t2_g2_g1

0x303a,	// (0x00022027) list_medium_line_x2_t2_g2_g2_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0002e218) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0002e218) list_medium_line_x2_t2_g2_g

0x43d2,	// (0x000233bf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x43d2,	// (0x000233bf) list_medium_line_x2_t2_g2_t1

0x306f,	// (0x0002205c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce1,	// (0x0002ecce) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce1,	// (0x0002ecce) list_medium_line_x2_t2_g2_t

0x3022,	// (0x0002200f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t4_g2_g1

0x303a,	// (0x00022027) list_medium_line_x2_t4_g2_g2_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0002e218) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0002e218) list_medium_line_x2_t4_g2_g

0x889d,	// (0x0002788a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x889d,	// (0x0002788a) list_medium_line_x2_t4_g2_t1

0x88b7,	// (0x000278a4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x88b7,	// (0x000278a4) list_medium_line_x2_t4_g2_t2

0x88cd,	// (0x000278ba) list_medium_line_x2_t4_g2_t3_ParamLimits

0x88cd,	// (0x000278ba) list_medium_line_x2_t4_g2_t3

0x306f,	// (0x0002205c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce6,	// (0x0002ecd3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce6,	// (0x0002ecd3) list_medium_line_x2_t4_g2_t

0x88e2,	// (0x000278cf) list_medium_line_t3_right_iconx2_g1

0x86d2,	// (0x000276bf) list_medium_line_t3_right_iconx2_g2

0x88ea,	// (0x000278d7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcef,	// (0x0002ecdc) list_medium_line_t3_right_iconx2_g

0x88f2,	// (0x000278df) list_medium_line_t3_right_iconx2_t1

0x8902,	// (0x000278ef) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf6,	// (0x0002ece3) list_medium_line_t3_right_iconx2_t

0x3022,	// (0x0002200f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x3_t4_g4_g1

0x302e,	// (0x0002201b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x3_t4_g4_g2

0x30d6,	// (0x000220c3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x30d6,	// (0x000220c3) list_medium_line_x3_t4_g4_g3

0x8910,	// (0x000278fd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8910,	// (0x000278fd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfb,	// (0x0002ece8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfb,	// (0x0002ece8) list_medium_line_x3_t4_g4_g

0x891c,	// (0x00027909) list_medium_line_x3_t4_g4_t1_ParamLimits

0x891c,	// (0x00027909) list_medium_line_x3_t4_g4_t1

0x8933,	// (0x00027920) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8933,	// (0x00027920) list_medium_line_x3_t4_g4_t2

0x8948,	// (0x00027935) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8948,	// (0x00027935) list_medium_line_x3_t4_g4_t3

0x895d,	// (0x0002794a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x895d,	// (0x0002794a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd04,	// (0x0002ecf1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd04,	// (0x0002ecf1) list_medium_line_x3_t4_g4_t

0x897a,	// (0x00027967) list_single_dyc_row_text_pane_t1_ParamLimits

0x897a,	// (0x00027967) list_single_dyc_row_text_pane_t1

0x89b9,	// (0x000279a6) list_single_dyc_row_text_pane_t2_ParamLimits

0x89b9,	// (0x000279a6) list_single_dyc_row_text_pane_t2

0xe49e,	// (0x0002d48b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe49e,	// (0x0002d48b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd0d,	// (0x0002ecfa) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0d,	// (0x0002ecfa) list_single_dyc_row_text_pane_t

0xe4c2,	// (0x0002d4af) list_single_dyc_row_pane_g1_ParamLimits

0xe4c2,	// (0x0002d4af) list_single_dyc_row_pane_g1

0xe4ce,	// (0x0002d4bb) list_single_dyc_row_pane_g2_ParamLimits

0xe4ce,	// (0x0002d4bb) list_single_dyc_row_pane_g2

0xe4da,	// (0x0002d4c7) list_single_dyc_row_pane_g3_ParamLimits

0xe4da,	// (0x0002d4c7) list_single_dyc_row_pane_g3

0xe4e6,	// (0x0002d4d3) list_single_dyc_row_pane_g4_ParamLimits

0xe4e6,	// (0x0002d4d3) list_single_dyc_row_pane_g4

0x0003,

0xfd1a,	// (0x0002ed07) list_single_dyc_row_pane_g_ParamLimits

0xfd1a,	// (0x0002ed07) list_single_dyc_row_pane_g

0xe4f2,	// (0x0002d4df) list_single_dyc_row_text_pane_ParamLimits

0xe4f2,	// (0x0002d4df) list_single_dyc_row_text_pane

0x9dbc,	// (0x00028da9) bg_sp_fs_scroll_pane

0xe511,	// (0x0002d4fe) thumb_sp_fs_scroll_pane

0x7037,	// (0x00026024) list_medium_line_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_g1

0x8ae4,	// (0x00027ad1) list_medium_line_t1_ParamLimits

0x8ae4,	// (0x00027ad1) list_medium_line_t1

0x3022,	// (0x0002200f) list_medium_line_x2_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_g1

0x302e,	// (0x0002201b) list_medium_line_x2_g2_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x2_g2

0x0001,

0xfd23,	// (0x0002ed10) list_medium_line_x2_g_ParamLimits

0xfd23,	// (0x0002ed10) list_medium_line_x2_g

0xe51a,	// (0x0002d507) list_medium_line_x2_t1_ParamLimits

0xe51a,	// (0x0002d507) list_medium_line_x2_t1

0x3022,	// (0x0002200f) list_medium_line_x3_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x3_g1

0x302e,	// (0x0002201b) list_medium_line_x3_g2_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x3_g2

0x0001,

0xfd23,	// (0x0002ed10) list_medium_line_x3_g_ParamLimits

0xfd23,	// (0x0002ed10) list_medium_line_x3_g

0xe51a,	// (0x0002d507) list_medium_line_x3_t1_ParamLimits

0xe51a,	// (0x0002d507) list_medium_line_x3_t1

0xe530,	// (0x0002d51d) thumb_sp_fs_scroll_pane_g1

0xe539,	// (0x0002d526) thumb_sp_fs_scroll_pane_g2

0xe542,	// (0x0002d52f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0002ed15) thumb_sp_fs_scroll_pane_g

0xe530,	// (0x0002d51d) bg_sp_fs_scroll_pane_g1

0xe539,	// (0x0002d526) bg_sp_fs_scroll_pane_g2

0xe542,	// (0x0002d52f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0002ed15) bg_sp_fs_scroll_pane_g

0x3022,	// (0x0002200f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3022,	// (0x0002200f) list_medium_line_x2_t3_g4_g1

0x30ca,	// (0x000220b7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x30ca,	// (0x000220b7) list_medium_line_x2_t3_g4_g2

0x302e,	// (0x0002201b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x302e,	// (0x0002201b) list_medium_line_x2_t3_g4_g3

0x303a,	// (0x00022027) list_medium_line_x2_t3_g4_g4_ParamLimits

0x303a,	// (0x00022027) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0002e294) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0002e294) list_medium_line_x2_t3_g4_g

0x8af9,	// (0x00027ae6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8af9,	// (0x00027ae6) list_medium_line_x2_t3_g4_t1

0x8b0f,	// (0x00027afc) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8b0f,	// (0x00027afc) list_medium_line_x2_t3_g4_t2

0x306f,	// (0x0002205c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x306f,	// (0x0002205c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd2f,	// (0x0002ed1c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd2f,	// (0x0002ed1c) list_medium_line_x2_t3_g4_t

0x7037,	// (0x00026024) list_medium_line_g2_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_g2_g1

0x7043,	// (0x00026030) list_medium_line_g2_g2_ParamLimits

0x7043,	// (0x00026030) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0002e9d6) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0002e9d6) list_medium_line_g2_g

0x8b29,	// (0x00027b16) list_medium_line_g2_t1_ParamLimits

0x8b29,	// (0x00027b16) list_medium_line_g2_t1

0x7037,	// (0x00026024) list_medium_line_t3_g2_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_t3_g2_g1

0x7043,	// (0x00026030) list_medium_line_t3_g2_g2_ParamLimits

0x7043,	// (0x00026030) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0002e9d6) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0002e9d6) list_medium_line_t3_g2_g

0x8b3e,	// (0x00027b2b) list_medium_line_t3_g2_t1_ParamLimits

0x8b3e,	// (0x00027b2b) list_medium_line_t3_g2_t1

0x8b58,	// (0x00027b45) list_medium_line_t3_g2_t2_ParamLimits

0x8b58,	// (0x00027b45) list_medium_line_t3_g2_t2

0x8b6e,	// (0x00027b5b) list_medium_line_t3_g2_t3_ParamLimits

0x8b6e,	// (0x00027b5b) list_medium_line_t3_g2_t3

0x0002,

0xfd36,	// (0x0002ed23) list_medium_line_t3_g2_t_ParamLimits

0xfd36,	// (0x0002ed23) list_medium_line_t3_g2_t

0x86d2,	// (0x000276bf) list_medium_line_right_icon_g1

0x8b88,	// (0x00027b75) list_medium_line_right_icon_t1

0x7037,	// (0x00026024) list_medium_line_t2_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_t2_g1

0x8b96,	// (0x00027b83) list_medium_line_t2_t1_ParamLimits

0x8b96,	// (0x00027b83) list_medium_line_t2_t1

0x8bb0,	// (0x00027b9d) list_medium_line_t2_t2_ParamLimits

0x8bb0,	// (0x00027b9d) list_medium_line_t2_t2

0x0001,

0xfd3d,	// (0x0002ed2a) list_medium_line_t2_t_ParamLimits

0xfd3d,	// (0x0002ed2a) list_medium_line_t2_t

0x7037,	// (0x00026024) list_medium_line_t3_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_t3_g1

0x8bc5,	// (0x00027bb2) list_medium_line_t3_t1_ParamLimits

0x8bc5,	// (0x00027bb2) list_medium_line_t3_t1

0x8bdf,	// (0x00027bcc) list_medium_line_t3_t2_ParamLimits

0x8bdf,	// (0x00027bcc) list_medium_line_t3_t2

0x8bf5,	// (0x00027be2) list_medium_line_t3_t3_ParamLimits

0x8bf5,	// (0x00027be2) list_medium_line_t3_t3

0x0002,

0xfd42,	// (0x0002ed2f) list_medium_line_t3_t_ParamLimits

0xfd42,	// (0x0002ed2f) list_medium_line_t3_t

0x7037,	// (0x00026024) list_medium_line_g3_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_g3_g1

0x8c0a,	// (0x00027bf7) list_medium_line_g3_g2_ParamLimits

0x8c0a,	// (0x00027bf7) list_medium_line_g3_g2

0x7043,	// (0x00026030) list_medium_line_g3_g3_ParamLimits

0x7043,	// (0x00026030) list_medium_line_g3_g3

0x0002,

0xfd49,	// (0x0002ed36) list_medium_line_g3_g_ParamLimits

0xfd49,	// (0x0002ed36) list_medium_line_g3_g

0x8c16,	// (0x00027c03) list_medium_line_g3_t1_ParamLimits

0x8c16,	// (0x00027c03) list_medium_line_g3_t1

0x7037,	// (0x00026024) list_medium_line_t2_g3_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_t2_g3_g1

0x8c0a,	// (0x00027bf7) list_medium_line_t2_g3_g2_ParamLimits

0x8c0a,	// (0x00027bf7) list_medium_line_t2_g3_g2

0x7043,	// (0x00026030) list_medium_line_t2_g3_g3_ParamLimits

0x7043,	// (0x00026030) list_medium_line_t2_g3_g3

0x0002,

0xfd49,	// (0x0002ed36) list_medium_line_t2_g3_g_ParamLimits

0xfd49,	// (0x0002ed36) list_medium_line_t2_g3_g

0x8c2b,	// (0x00027c18) list_medium_line_t2_g3_t1_ParamLimits

0x8c2b,	// (0x00027c18) list_medium_line_t2_g3_t1

0x8c45,	// (0x00027c32) list_medium_line_t2_g3_t2_ParamLimits

0x8c45,	// (0x00027c32) list_medium_line_t2_g3_t2

0x0001,

0xfd50,	// (0x0002ed3d) list_medium_line_t2_g3_t_ParamLimits

0xfd50,	// (0x0002ed3d) list_medium_line_t2_g3_t

0x7037,	// (0x00026024) list_medium_line_t3_g3_g1_ParamLimits

0x7037,	// (0x00026024) list_medium_line_t3_g3_g1

0x8c0a,	// (0x00027bf7) list_medium_line_t3_g3_g2_ParamLimits

0x8c0a,	// (0x00027bf7) list_medium_line_t3_g3_g2

0x7043,	// (0x00026030) list_medium_line_t3_g3_g3_ParamLimits

0x7043,	// (0x00026030) list_medium_line_t3_g3_g3

0x0002,

0xfd49,	// (0x0002ed36) list_medium_line_t3_g3_g_ParamLimits

0xfd49,	// (0x0002ed36) list_medium_line_t3_g3_g

0x8c5b,	// (0x00027c48) list_medium_line_t3_g3_t1_ParamLimits

0x8c5b,	// (0x00027c48) list_medium_line_t3_g3_t1

0x8c74,	// (0x00027c61) list_medium_line_t3_g3_t2_ParamLimits

0x8c74,	// (0x00027c61) list_medium_line_t3_g3_t2

0x8c8a,	// (0x00027c77) list_medium_line_t3_g3_t3_ParamLimits

0x8c8a,	// (0x00027c77) list_medium_line_t3_g3_t3

0x0002,

0xfd55,	// (0x0002ed42) list_medium_line_t3_g3_t_ParamLimits

0xfd55,	// (0x0002ed42) list_medium_line_t3_g3_t

0x88e2,	// (0x000278cf) list_medium_line_right_iconx2_g1

0x86d2,	// (0x000276bf) list_medium_line_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0002ed49) list_medium_line_right_iconx2_g

0x8ca4,	// (0x00027c91) list_medium_line_right_iconx2_t1

0x88e2,	// (0x000278cf) list_medium_line_t2_right_iconx2_g1

0x86d2,	// (0x000276bf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0002ed49) list_medium_line_t2_right_iconx2_g

0x8cb2,	// (0x00027c9f) list_medium_line_t2_right_iconx2_t1

0x8cc2,	// (0x00027caf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd61,	// (0x0002ed4e) list_medium_line_t2_right_iconx2_t

0x8cd0,	// (0x00027cbd) list_medium_line_x4_t4_t1

0x8cde,	// (0x00027ccb) list_medium_line_x4_t4_t2

0x8cee,	// (0x00027cdb) list_medium_line_x4_t4_t3

0x8cfe,	// (0x00027ceb) list_medium_line_x4_t4_t4

0x0003,

0xfd66,	// (0x0002ed53) list_medium_line_x4_t4_t

0x8d38,	// (0x00027d25) tport_appsw_pane_ParamLimits

0x8d38,	// (0x00027d25) tport_appsw_pane

0x8d46,	// (0x00027d33) tport_contact_pane_ParamLimits

0x8d46,	// (0x00027d33) tport_contact_pane

0x8d56,	// (0x00027d43) tport_listscroll_pane_ParamLimits

0x8d56,	// (0x00027d43) tport_listscroll_pane

0x8d65,	// (0x00027d52) cell_tport_appsw_pane_ParamLimits

0x8d65,	// (0x00027d52) cell_tport_appsw_pane

0xcc7a,	// (0x0002bc67) tport_appsw_pane_g1_ParamLimits

0xcc7a,	// (0x0002bc67) tport_appsw_pane_g1

0xe54b,	// (0x0002d538) tport_contact_pane_g1

0xe554,	// (0x0002d541) tport_contact_pane_t1

0xe562,	// (0x0002d54f) tport_contact_pane_t2

0x0001,

0xfd6f,	// (0x0002ed5c) tport_contact_pane_t

0xe570,	// (0x0002d55d) list_tport_pane

0xe579,	// (0x0002d566) scroll_pane_cp_030

0x8d9a,	// (0x00027d87) cell_tport_appsw_pane_g1

0x8daa,	// (0x00027d97) cell_tport_appsw_pane_t1

0x8db8,	// (0x00027da5) grid_highlight_pane_cp019

0x8dc0,	// (0x00027dad) list_tport_double_graphic_pane_ParamLimits

0x8dc0,	// (0x00027dad) list_tport_double_graphic_pane

0xa968,	// (0x00029955) list_highlight_pane_cp023_ParamLimits

0xa968,	// (0x00029955) list_highlight_pane_cp023

0x8ddd,	// (0x00027dca) list_tport_double_graphic_pane_g1_ParamLimits

0x8ddd,	// (0x00027dca) list_tport_double_graphic_pane_g1

0x8dea,	// (0x00027dd7) list_tport_double_graphic_pane_t1_ParamLimits

0x8dea,	// (0x00027dd7) list_tport_double_graphic_pane_t1

0x8dff,	// (0x00027dec) list_tport_double_graphic_pane_t2_ParamLimits

0x8dff,	// (0x00027dec) list_tport_double_graphic_pane_t2

0x0001,

0xfd7b,	// (0x0002ed68) list_tport_double_graphic_pane_t_ParamLimits

0xfd7b,	// (0x0002ed68) list_tport_double_graphic_pane_t

0x9dbc,	// (0x00028da9) main_cale_note_pane

0x1fb5,	// (0x00020fa2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1fb5,	// (0x00020fa2) cell_vitu2_function_top_wide_pane_cp01

0x8163,	// (0x00027150) wait_bar_pane_cp05_ParamLimits

0xa968,	// (0x00029955) listscroll_cmail_pane

0xe582,	// (0x0002d56f) list_cmail_pane

0x8e11,	// (0x00027dfe) list_cmail_body_pane

0x8e2b,	// (0x00027e18) list_single_cmail_header_caption_pane

0xe592,	// (0x0002d57f) list_single_cmail_header_detail_pane_ParamLimits

0xe592,	// (0x0002d57f) list_single_cmail_header_detail_pane

0xe5c4,	// (0x0002d5b1) list_single_cmail_header_caption_pane_t1

0x8e4b,	// (0x00027e38) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e4b,	// (0x00027e38) list_single_cmail_header_detail_pane_g1

0xe5db,	// (0x0002d5c8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5db,	// (0x0002d5c8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd80,	// (0x0002ed6d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd80,	// (0x0002ed6d) list_single_cmail_header_detail_pane_g

0xe5f4,	// (0x0002d5e1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5f4,	// (0x0002d5e1) list_single_cmail_header_detail_pane_t1

0xe654,	// (0x0002d641) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe654,	// (0x0002d641) list_single_cmail_header_editor_pane_bg

0xe0af,	// (0x0002d09c) list_cmail_body_pane_g1

0xe66b,	// (0x0002d658) list_cmail_body_pane_t1

0xd3e7,	// (0x0002c3d4) list_single_cmail_header_editor_pane_bg_g1

0xa933,	// (0x00029920) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd3f7,	// (0x0002c3e4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd3ef,	// (0x0002c3dc) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd611,	// (0x0002c5fe) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd417,	// (0x0002c404) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd407,	// (0x0002c3f4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd40f,	// (0x0002c3fc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa913,	// (0x00029900) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e63,	// (0x00027e50) calenote_gesture_pane_ParamLimits

0x8e63,	// (0x00027e50) calenote_gesture_pane

0x8e7d,	// (0x00027e6a) calenote_window_pane_ParamLimits

0x8e7d,	// (0x00027e6a) calenote_window_pane

0xe679,	// (0x0002d666) popup_note_window_cp01

0x8e95,	// (0x00027e82) calenote_swipe_1_pane_ParamLimits

0x8e95,	// (0x00027e82) calenote_swipe_1_pane

0x8672,	// (0x0002765f) calenote_swipe_2_pane_ParamLimits

0x8672,	// (0x0002765f) calenote_swipe_2_pane

0xe2c9,	// (0x0002d2b6) calenote_swipe_1_pane_g1_ParamLimits

0xe2c9,	// (0x0002d2b6) calenote_swipe_1_pane_g1

0xe2d6,	// (0x0002d2c3) calenote_swipe_1_pane_g2_ParamLimits

0xe2d6,	// (0x0002d2c3) calenote_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x0002ec92) calenote_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x0002ec92) calenote_swipe_1_pane_g

0xe68b,	// (0x0002d678) calenote_swipe_1_pane_t1_ParamLimits

0xe68b,	// (0x0002d678) calenote_swipe_1_pane_t1

0xe2c9,	// (0x0002d2b6) calenote_swipe_2_pane_g1_ParamLimits

0xe2c9,	// (0x0002d2b6) calenote_swipe_2_pane_g1

0xe6aa,	// (0x0002d697) calenote_swipe_2_pane_g2_ParamLimits

0xe6aa,	// (0x0002d697) calenote_swipe_2_pane_g2

0x0001,

0xfd8c,	// (0x0002ed79) calenote_swipe_2_pane_g_ParamLimits

0xfd8c,	// (0x0002ed79) calenote_swipe_2_pane_g

0xe6b6,	// (0x0002d6a3) calenote_swipe_2_pane_t1_ParamLimits

0xe6b6,	// (0x0002d6a3) calenote_swipe_2_pane_t1

0x9dbc,	// (0x00028da9) main_mup_navstr_pane

0x5fcc,	// (0x00024fb9) main_mup3_pane_t7_ParamLimits

0x5fcc,	// (0x00024fb9) main_mup3_pane_t7

0x17c9,	// (0x000207b6) main_mp4_pane_g6_ParamLimits

0x17c9,	// (0x000207b6) main_mp4_pane_g6

0x1ad6,	// (0x00020ac3) main_image3_pane_t4_ParamLimits

0x1ad6,	// (0x00020ac3) main_image3_pane_t4

0x8ea8,	// (0x00027e95) popup_navstr_preview_pane_ParamLimits

0x8ea8,	// (0x00027e95) popup_navstr_preview_pane

0x8eb4,	// (0x00027ea1) scroll_navstr_pane_ParamLimits

0x8eb4,	// (0x00027ea1) scroll_navstr_pane

0x9dbc,	// (0x00028da9) bg_popup_preview_window_pane_cp04

0xe6dd,	// (0x0002d6ca) popup_navstr_preview_pane_t1

0x8ec0,	// (0x00027ead) scroll_navstr_pane_g1_ParamLimits

0x8ec0,	// (0x00027ead) scroll_navstr_pane_g1

0x8ecd,	// (0x00027eba) scroll_navstr_pane_t1_ParamLimits

0x8ecd,	// (0x00027eba) scroll_navstr_pane_t1

0xe682,	// (0x0002d66f) bg_button_pane_cp014

0xe682,	// (0x0002d66f) bg_button_pane_cp030

0x8585,	// (0x00027572) list_double_fisheye_pane_g4_ParamLimits

0x8585,	// (0x00027572) list_double_fisheye_pane_g4

0x8591,	// (0x0002757e) list_double_fisheye_pane_g5_ParamLimits

0x8591,	// (0x0002757e) list_double_fisheye_pane_g5

0xd7bd,	// (0x0002c7aa) sp_fs_scroll_pane_cp03

0xe3e2,	// (0x0002d3cf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3ee,	// (0x0002d3db) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc2,	// (0x0002ecaf) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8797,	// (0x00027784) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe58a,	// (0x0002d577) sp_fs_scroll_pane_cp02

0xa632,	// (0x0002961f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa632,	// (0x0002961f) popup_sp_fs_calendar_preview_list_single_pane

0x9dbc,	// (0x00028da9) main_cam6_pano_pane

0x1123,	// (0x00020110) main_mup3_pane_ParamLimits

0x9dbc,	// (0x00028da9) main_phacti_pane

0x8036,	// (0x00027023) bg_button_pane_cp11

0x804e,	// (0x0002703b) main_mobtv_info_pane_g2_ParamLimits

0x804e,	// (0x0002703b) main_mobtv_info_pane_g2

0x0001,

0xfc22,	// (0x0002ec0f) main_mobtv_info_pane_g_ParamLimits

0xfc22,	// (0x0002ec0f) main_mobtv_info_pane_g

0x8200,	// (0x000271ed) sc_clock_pane_t5_ParamLimits

0x8200,	// (0x000271ed) sc_clock_pane_t5

0x83f8,	// (0x000273e5) main_radioblah_pane_g1_ParamLimits

0xe215,	// (0x0002d202) main_radioblah_pane_t3_ParamLimits

0xe215,	// (0x0002d202) main_radioblah_pane_t3

0xe22d,	// (0x0002d21a) main_radioblah_pane_t4_ParamLimits

0xe22d,	// (0x0002d21a) main_radioblah_pane_t4

0x8416,	// (0x00027403) main_radioblah_text_pane_ParamLimits

0x8416,	// (0x00027403) main_radioblah_text_pane

0x8423,	// (0x00027410) main_radioblah_info_pane_g1_ParamLimits

0x84bc,	// (0x000274a9) main_radioblah_info_pane_t4_ParamLimits

0x84bc,	// (0x000274a9) main_radioblah_info_pane_t4

0xa968,	// (0x00029955) main_sp_fs_calendar_pane

0x8edf,	// (0x00027ecc) main_phacti_pane_g1

0x8ee7,	// (0x00027ed4) phacti_note_pane_ParamLimits

0x8ee7,	// (0x00027ed4) phacti_note_pane

0xe6f4,	// (0x0002d6e1) phacti_term_pane_ParamLimits

0xe6f4,	// (0x0002d6e1) phacti_term_pane

0xe709,	// (0x0002d6f6) phacti_note_pane_t1_ParamLimits

0xe709,	// (0x0002d6f6) phacti_note_pane_t1

0xe720,	// (0x0002d70d) phacti_term_pane_g1

0xe728,	// (0x0002d715) phacti_term_pane_t1_ParamLimits

0xe728,	// (0x0002d715) phacti_term_pane_t1

0xe752,	// (0x0002d73f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe75a,	// (0x0002d747) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd96,	// (0x0002ed83) popup_sp_fs_calendar_preview_list_single_pane_g

0xe762,	// (0x0002d74f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe762,	// (0x0002d74f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe778,	// (0x0002d765) aid_popup_sp_fs_bg_corner_pane

0xc9e2,	// (0x0002b9cf) popup_sp_fs_calendar_preview_bg_pane_g1

0x9dbc,	// (0x00028da9) popup_sp_fs_calendar_preview_bg_pane

0xe780,	// (0x0002d76d) popup_sp_fs_calendar_preview_list_pane

0xc5aa,	// (0x0002b597) bg_main_sp_fs_cale_pane_ParamLimits

0xc5aa,	// (0x0002b597) bg_main_sp_fs_cale_pane

0xe791,	// (0x0002d77e) listscroll_cale_mrui_pane_ParamLimits

0xe791,	// (0x0002d77e) listscroll_cale_mrui_pane

0xe7a6,	// (0x0002d793) listscroll_sp_fs_schedule_track_pane

0xe7af,	// (0x0002d79c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7af,	// (0x0002d79c) main_sp_fs_ctrlbar_pane_cp01

0xe7c2,	// (0x0002d7af) main_sp_fs_ribbon_pane

0xe7ca,	// (0x0002d7b7) popup_sp_fs_cale_preview_window

0xebf9,	// (0x0002dbe6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xebf9,	// (0x0002dbe6) list_single_sp_fs_schedule_track_pane

0xd280,	// (0x0002c26d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd280,	// (0x0002c26d) bg_sp_fs_highlight_list_pane_cp03

0x8f4a,	// (0x00027f37) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f4a,	// (0x00027f37) list_single_sp_fs_schedule_track_pane_g1

0x8f56,	// (0x00027f43) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f56,	// (0x00027f43) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd9b,	// (0x0002ed88) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd9b,	// (0x0002ed88) list_single_sp_fs_schedule_track_pane_g

0x8f62,	// (0x00027f4f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f62,	// (0x00027f4f) list_single_sp_fs_schedule_track_pane_t1

0x8f80,	// (0x00027f6d) sp_fs_schedule_track_pane_ParamLimits

0x8f80,	// (0x00027f6d) sp_fs_schedule_track_pane

0xe7dc,	// (0x0002d7c9) sp_fs_schedule_track_pane_g1

0xe7e4,	// (0x0002d7d1) sp_fs_schedule_track_pane_g2

0xe7ec,	// (0x0002d7d9) sp_fs_schedule_track_pane_g3

0xe7f4,	// (0x0002d7e1) sp_fs_schedule_track_pane_g4

0xe7fc,	// (0x0002d7e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfda0,	// (0x0002ed8d) sp_fs_schedule_track_pane_g

0xd3e7,	// (0x0002c3d4) bg_sp_fs_schedule_viewer_highlight_g1

0xa933,	// (0x00029920) bg_sp_fs_schedule_viewer_highlight_g2

0xd3ef,	// (0x0002c3dc) bg_sp_fs_schedule_viewer_highlight_g3

0xd3f7,	// (0x0002c3e4) bg_sp_fs_schedule_viewer_highlight_g4

0xd611,	// (0x0002c5fe) bg_sp_fs_schedule_viewer_highlight_g5

0xd407,	// (0x0002c3f4) bg_sp_fs_schedule_viewer_highlight_g6

0xd40f,	// (0x0002c3fc) bg_sp_fs_schedule_viewer_highlight_g7

0xd417,	// (0x0002c404) bg_sp_fs_schedule_viewer_highlight_g8

0xa913,	// (0x00029900) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdab,	// (0x0002ed98) bg_sp_fs_schedule_viewer_highlight_g

0x9dbc,	// (0x00028da9) bg_main_sp_fs_ribbon_pane

0x8f92,	// (0x00027f7f) main_sp_fs_ribbon_pane_g1

0xe804,	// (0x0002d7f1) main_sp_fs_ribbon_pane_t1

0x8f9b,	// (0x00027f88) main_sp_fs_ribbon_pane_t2

0xe813,	// (0x0002d800) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdbe,	// (0x0002edab) main_sp_fs_ribbon_pane_t

0xe822,	// (0x0002d80f) main_sp_fs_ribbon_scheduler_pane

0xe82a,	// (0x0002d817) bg_main_sp_fs_ribbon_pane_g1

0xe833,	// (0x0002d820) bg_main_sp_fs_ribbon_pane_g2

0xe83c,	// (0x0002d829) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdc5,	// (0x0002edb2) bg_main_sp_fs_ribbon_pane_g

0xe844,	// (0x0002d831) main_sp_fs_ribbon_scheduler_pane_g1

0xe84d,	// (0x0002d83a) main_sp_fs_ribbon_scheduler_pane_g2

0xe856,	// (0x0002d843) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdcc,	// (0x0002edb9) main_sp_fs_ribbon_scheduler_pane_g

0xe85f,	// (0x0002d84c) list_cale_mrui_pane

0x8faa,	// (0x00027f97) sp_fs_scroll_pane_cp07_ParamLimits

0x8faa,	// (0x00027f97) sp_fs_scroll_pane_cp07

0x8fc6,	// (0x00027fb3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fc6,	// (0x00027fb3) bg_sp_fs_schedule_viewer_highlight

0xe86c,	// (0x0002d859) list_single_sp_fs_schedule_track_pane_cp01

0xe874,	// (0x0002d861) list_sp_fs_schedule_track_pane

0xe87c,	// (0x0002d869) sp_fs_scroll_pane_cp06_ParamLimits

0xe87c,	// (0x0002d869) sp_fs_scroll_pane_cp06

0xc9e2,	// (0x0002b9cf) bgmain_sp_fs_calendar_pane_g1

0x8fd3,	// (0x00027fc0) list_single_cale_mrui_pane_ParamLimits

0x8fd3,	// (0x00027fc0) list_single_cale_mrui_pane

0xe88e,	// (0x0002d87b) list_single_cale_mrui_row_pane_ParamLimits

0xe88e,	// (0x0002d87b) list_single_cale_mrui_row_pane

0xe89b,	// (0x0002d888) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89b,	// (0x0002d888) list_single_cale_mrui_row_pane_g1

0xe8e0,	// (0x0002d8cd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e0,	// (0x0002d8cd) list_single_cale_mrui_row_pane_t1

0x8ff9,	// (0x00027fe6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ff9,	// (0x00027fe6) list_single_cale_mrui_row_pane_t2

0xe8f2,	// (0x0002d8df) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f2,	// (0x0002d8df) list_single_cale_mrui_row_pane_t3

0xe921,	// (0x0002d90e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe921,	// (0x0002d90e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdda,	// (0x0002edc7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdda,	// (0x0002edc7) list_single_cale_mrui_row_pane_t

0x905f,	// (0x0002804c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x905f,	// (0x0002804c) list_single_cmail_header_editor_pane_bg_cp01

0x9081,	// (0x0002806e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9081,	// (0x0002806e) list_single_cmail_header_editor_pane_bg_cp02

0x909f,	// (0x0002808c) main_radioblah_text_pane_t1_ParamLimits

0x909f,	// (0x0002808c) main_radioblah_text_pane_t1

0xe952,	// (0x0002d93f) cam6_indi_pane_cp01

0xe95a,	// (0x0002d947) cam6_mode_pane_cp01

0xe962,	// (0x0002d94f) cam6_pano_pane

0xe96b,	// (0x0002d958) cam6_zoom_pane_cp01

0xe975,	// (0x0002d962) cam6_pano_image_pane

0xe97e,	// (0x0002d96b) cam6_pano_pane_g1

0xe0af,	// (0x0002d09c) cam6_pano_pane_g2

0xe987,	// (0x0002d974) cam6_pano_pane_g3

0xe990,	// (0x0002d97d) cam6_pano_pane_g4

0xcf85,	// (0x0002bf72) cam6_pano_pane_g5

0xe999,	// (0x0002d986) cam6_pano_pane_g6

0xe9a1,	// (0x0002d98e) cam6_pano_pane_g7

0xe9a9,	// (0x0002d996) cam6_pano_pane_g8

0xe9b2,	// (0x0002d99f) cam6_pano_pane_g9

0x0008,

0xfde3,	// (0x0002edd0) cam6_pano_pane_g

0x9dbc,	// (0x00028da9) main_browser_tag_pane

0xe6d5,	// (0x0002d6c2) grid_navstr_albumart_pane

0xe9bd,	// (0x0002d9aa) cell_navstr_albumart_pane_ParamLimits

0xe9bd,	// (0x0002d9aa) cell_navstr_albumart_pane

0xe9d9,	// (0x0002d9c6) cell_navstr_albumart_pane_g1

0xc3b7,	// (0x0002b3a4) cell_navstr_albumart_pane_g2

0xc3c7,	// (0x0002b3b4) cell_navstr_albumart_pane_g3

0xc3bf,	// (0x0002b3ac) cell_navstr_albumart_pane_g4

0x0003,

0xfdf6,	// (0x0002ede3) cell_navstr_albumart_pane_g

0x90b9,	// (0x000280a6) bt_list_pane_ParamLimits

0x90b9,	// (0x000280a6) bt_list_pane

0x90d2,	// (0x000280bf) bt_list_pane_t1

0x90e1,	// (0x000280ce) bt_list_pane_t2

0x0001,

0xfdff,	// (0x0002edec) bt_list_pane_t

0x9dbc,	// (0x00028da9) main_cale_prevew_pane

0x90f0,	// (0x000280dd) popup_cale_preview_window_ParamLimits

0x90f0,	// (0x000280dd) popup_cale_preview_window

0xa968,	// (0x00029955) bg_popup_preview_window_pane_cp05_ParamLimits

0xa968,	// (0x00029955) bg_popup_preview_window_pane_cp05

0xe9e1,	// (0x0002d9ce) list_cale_preview_pane_ParamLimits

0xe9e1,	// (0x0002d9ce) list_cale_preview_pane

0x910d,	// (0x000280fa) list_double_cale_preview_pane_ParamLimits

0x910d,	// (0x000280fa) list_double_cale_preview_pane

0x9121,	// (0x0002810e) list_single_cale_preview_pane_ParamLimits

0x9121,	// (0x0002810e) list_single_cale_preview_pane

0x9139,	// (0x00028126) list_single_cale_preview_pane_g1

0x9141,	// (0x0002812e) list_single_cale_preview_pane_t1_ParamLimits

0x9141,	// (0x0002812e) list_single_cale_preview_pane_t1

0x9156,	// (0x00028143) list_double_cale_preview_pane_g1

0x915e,	// (0x0002814b) list_double_cale_preview_pane_t1_ParamLimits

0x915e,	// (0x0002814b) list_double_cale_preview_pane_t1

0x9173,	// (0x00028160) list_double_cale_preview_pane_t2_ParamLimits

0x9173,	// (0x00028160) list_double_cale_preview_pane_t2

0x0001,

0xfe04,	// (0x0002edf1) list_double_cale_preview_pane_t_ParamLimits

0xfe04,	// (0x0002edf1) list_double_cale_preview_pane_t

0x9dbc,	// (0x00028da9) main_ezdial_pane

0xa968,	// (0x00029955) main_sp_fs_email_pane_ParamLimits

0x86f8,	// (0x000276e5) cmail_ddmenu_btn01_pane_ParamLimits

0x86f8,	// (0x000276e5) cmail_ddmenu_btn01_pane

0x8715,	// (0x00027702) cmail_ddmenu_btn02_pane_ParamLimits

0x8715,	// (0x00027702) cmail_ddmenu_btn02_pane

0x8733,	// (0x00027720) cmail_ddmenu_btn03_pane_ParamLimits

0x8733,	// (0x00027720) cmail_ddmenu_btn03_pane

0x87d4,	// (0x000277c1) main_sp_fs_ctrlbar_pane_ParamLimits

0x87ee,	// (0x000277db) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8e11,	// (0x00027dfe) list_cmail_body_pane_ParamLimits

0xe5d2,	// (0x0002d5bf) bg_button_pane_cp12

0xe5e7,	// (0x0002d5d4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e7,	// (0x0002d5d4) list_single_cmail_header_detail_pane_g3

0xe630,	// (0x0002d61d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe630,	// (0x0002d61d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd87,	// (0x0002ed74) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd87,	// (0x0002ed74) list_single_cmail_header_detail_pane_t

0xe73d,	// (0x0002d72a) phacti_term_pane_t2_ParamLimits

0xe73d,	// (0x0002d72a) phacti_term_pane_t2

0x0001,

0xfd91,	// (0x0002ed7e) phacti_term_pane_t_ParamLimits

0xfd91,	// (0x0002ed7e) phacti_term_pane_t

0xe9ed,	// (0x0002d9da) aid_size_list_single_double

0x918b,	// (0x00028178) popup_ezdial_listscroll_window

0x91ad,	// (0x0002819a) popup_number_entry_window_cp01

0xa6d6,	// (0x000296c3) bg_popup_call_pane_cp09

0xe9f9,	// (0x0002d9e6) ezdial_list_pane

0xea01,	// (0x0002d9ee) scroll_pane_cp23

0xc7c1,	// (0x0002b7ae) bg_button_pane_cp028_ParamLimits

0xc7c1,	// (0x0002b7ae) bg_button_pane_cp028

0x91bb,	// (0x000281a8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91bb,	// (0x000281a8) cmail_ddmenu_btn01_pane_g1

0x91cd,	// (0x000281ba) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91cd,	// (0x000281ba) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe09,	// (0x0002edf6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe09,	// (0x0002edf6) cmail_ddmenu_btn01_pane_g

0xea09,	// (0x0002d9f6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea09,	// (0x0002d9f6) cmail_ddmenu_btn01_pane_t1

0xc5aa,	// (0x0002b597) bg_button_pane_cp029_ParamLimits

0xc5aa,	// (0x0002b597) bg_button_pane_cp029

0x91cd,	// (0x000281ba) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91cd,	// (0x000281ba) cmail_ddmenu_btn02_pane_g1

0x91e5,	// (0x000281d2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91e5,	// (0x000281d2) cmail_ddmenu_btn02_pane_t1

0xd280,	// (0x0002c26d) bg_button_pane_cp031_ParamLimits

0xd280,	// (0x0002c26d) bg_button_pane_cp031

0x91cd,	// (0x000281ba) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91cd,	// (0x000281ba) cmail_ddmenu_btn03_pane_g1

0x91e5,	// (0x000281d2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91e5,	// (0x000281d2) cmail_ddmenu_btn03_pane_t1

0x682e,	// (0x0002581b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6848,	// (0x00025835) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6848,	// (0x00025835) cell_dialer2_keypad_pane_t1_copy1

0x7e63,	// (0x00026e50) ncimui_group_button_pane

0xa968,	// (0x00029955) main_sp_fs_calendar_pane_ParamLimits

0x8e2b,	// (0x00027e18) list_single_cmail_header_caption_pane_ParamLimits

0xe788,	// (0x0002d775) aid_recal_txt_sm_pane

0x9dbc,	// (0x00028da9) mian_recal_day_pane

0xe7ca,	// (0x0002d7b7) popup_sp_fs_cale_preview_window_ParamLimits

0xea1e,	// (0x0002da0b) list_recal_day_pane

0xea61,	// (0x0002da4e) list_single_recal_day_pane_ParamLimits

0xea61,	// (0x0002da4e) list_single_recal_day_pane

0xea73,	// (0x0002da60) list_single_recal_day_pane_g1_ParamLimits

0xea73,	// (0x0002da60) list_single_recal_day_pane_g1

0xea7f,	// (0x0002da6c) list_single_recal_day_pane_g2_ParamLimits

0xea7f,	// (0x0002da6c) list_single_recal_day_pane_g2

0xea8b,	// (0x0002da78) list_single_recal_day_pane_g3_ParamLimits

0xea8b,	// (0x0002da78) list_single_recal_day_pane_g3

0x9209,	// (0x000281f6) list_single_recal_day_pane_g4_ParamLimits

0x9209,	// (0x000281f6) list_single_recal_day_pane_g4

0xea97,	// (0x0002da84) list_single_recal_day_pane_g5_ParamLimits

0xea97,	// (0x0002da84) list_single_recal_day_pane_g5

0xeaa3,	// (0x0002da90) list_single_recal_day_pane_g6_ParamLimits

0xeaa3,	// (0x0002da90) list_single_recal_day_pane_g6

0x0004,

0xfe18,	// (0x0002ee05) list_single_recal_day_pane_g_ParamLimits

0xfe18,	// (0x0002ee05) list_single_recal_day_pane_g

0xeab7,	// (0x0002daa4) list_single_recal_day_pane_t1

0xeac9,	// (0x0002dab6) list_single_recal_day_pane_t2

0x0001,

0xfe23,	// (0x0002ee10) list_single_recal_day_pane_t

0x9221,	// (0x0002820e) ncimui_query_button_pane_ParamLimits

0x9221,	// (0x0002820e) ncimui_query_button_pane

0x9231,	// (0x0002821e) ncimui_query_button_pane_t1_ParamLimits

0x9231,	// (0x0002821e) ncimui_query_button_pane_t1

0xeadb,	// (0x0002dac8) ncimui_query_button_pane_t2_ParamLimits

0xeadb,	// (0x0002dac8) ncimui_query_button_pane_t2

0x0001,

0xfe28,	// (0x0002ee15) ncimui_query_button_pane_t_ParamLimits

0xfe28,	// (0x0002ee15) ncimui_query_button_pane_t

0x9244,	// (0x00028231) query_button_pane_ParamLimits

0x9244,	// (0x00028231) query_button_pane

0x9dbc,	// (0x00028da9) bg_button_pane_cp0028

0xeaee,	// (0x0002dadb) query_button_pane_t1

0x113f,	// (0x0002012c) main_tport_pane_ParamLimits

0x8d0e,	// (0x00027cfb) bg_popup_window_pane_cp01_ParamLimits

0x8d0e,	// (0x00027cfb) bg_popup_window_pane_cp01

0x8d1c,	// (0x00027d09) heading_pane_cp08_ParamLimits

0x8d1c,	// (0x00027d09) heading_pane_cp08

0x8d2a,	// (0x00027d17) heading_pane_cp07_ParamLimits

0x8d2a,	// (0x00027d17) heading_pane_cp07

0x8d9a,	// (0x00027d87) cell_tport_appsw_pane_g2

0x0002,

0xfd74,	// (0x0002ed61) cell_tport_appsw_pane_g

0xb2a0,	// (0x0002a28d) input_candi_list_open_g1

0xab22,	// (0x00029b0f) list_cale_time_pane_g6_ParamLimits

0xab22,	// (0x00029b0f) list_cale_time_pane_g6

0x599e,	// (0x0002498b) aid_size_touch_calib_1_ParamLimits

0x599e,	// (0x0002498b) aid_size_touch_calib_1

0x59aa,	// (0x00024997) aid_size_touch_calib_2_ParamLimits

0x59aa,	// (0x00024997) aid_size_touch_calib_2

0x59b8,	// (0x000249a5) aid_size_touch_calib_3_ParamLimits

0x59b8,	// (0x000249a5) aid_size_touch_calib_3

0x59c8,	// (0x000249b5) aid_size_touch_calib_4_ParamLimits

0x59c8,	// (0x000249b5) aid_size_touch_calib_4

0x59d6,	// (0x000249c3) main_touch_calib_button_group_pane_ParamLimits

0x59d6,	// (0x000249c3) main_touch_calib_button_group_pane

0x59e4,	// (0x000249d1) main_touch_calib_pane_g1_ParamLimits

0x59f0,	// (0x000249dd) main_touch_calib_pane_g2_ParamLimits

0x59fc,	// (0x000249e9) main_touch_calib_pane_g3_ParamLimits

0x5a08,	// (0x000249f5) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0002e723) main_touch_calib_pane_g_ParamLimits

0x5a14,	// (0x00024a01) main_touch_calib_pane_t1_ParamLimits

0x5a2b,	// (0x00024a18) main_touch_calib_pane_t2_ParamLimits

0x5a44,	// (0x00024a31) main_touch_calib_pane_t3_ParamLimits

0x5a5a,	// (0x00024a47) main_touch_calib_pane_t4_ParamLimits

0x5a70,	// (0x00024a5d) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0002e72c) main_touch_calib_pane_t_ParamLimits

0xcd15,	// (0x0002bd02) list_single_fp_cale_pane_g3_ParamLimits

0xcd15,	// (0x0002bd02) list_single_fp_cale_pane_g3

0x1123,	// (0x00020110) bg_button_pane_cp012_ParamLimits

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp03_ParamLimits

0x21c7,	// (0x000211b4) cell_vitu2_function_top_pane_g1_ParamLimits

0x1123,	// (0x00020110) bg_vkb2_func_pane_cp04_ParamLimits

0x7de9,	// (0x00026dd6) main_ncimui_button_group_pane_ParamLimits

0x7de9,	// (0x00026dd6) main_ncimui_button_group_pane

0x7e51,	// (0x00026e3e) main_ncimui_pane_t3_ParamLimits

0x7e51,	// (0x00026e3e) main_ncimui_pane_t3

0xe6eb,	// (0x0002d6d8) phacti_button_group_pane

0xe9ed,	// (0x0002d9da) aid_size_list_single_double_ParamLimits

0x918b,	// (0x00028178) popup_ezdial_listscroll_window_ParamLimits

0x91ad,	// (0x0002819a) popup_number_entry_window_cp01_ParamLimits

0x9251,	// (0x0002823e) phacti_button_pane_ParamLimits

0x9251,	// (0x0002823e) phacti_button_pane

0x9dbc,	// (0x00028da9) bg_button_pane_cp14

0xeafc,	// (0x0002dae9) phacti_button_pane_t1

0x9262,	// (0x0002824f) main_touch_calib_button_pane_ParamLimits

0x9262,	// (0x0002824f) main_touch_calib_button_pane

0xa52e,	// (0x0002951b) bg_button_pane_cp18_ParamLimits

0xa52e,	// (0x0002951b) bg_button_pane_cp18

0xeb0a,	// (0x0002daf7) main_touch_calib_button_pane_t1_ParamLimits

0xeb0a,	// (0x0002daf7) main_touch_calib_button_pane_t1

0xeb20,	// (0x0002db0d) main_touch_calib_button_pane_t2_ParamLimits

0xeb20,	// (0x0002db0d) main_touch_calib_button_pane_t2

0x0001,

0xfe2d,	// (0x0002ee1a) main_touch_calib_button_pane_t_ParamLimits

0xfe2d,	// (0x0002ee1a) main_touch_calib_button_pane_t

0x9dbc,	// (0x00028da9) cell_ncimui_button_pane

0x9dbc,	// (0x00028da9) bg_button_pane_cp032

0xeb3e,	// (0x0002db2b) cell_ncimui_button_pane_t1

0x19e7,	// (0x000209d4) image3_infobar_pane_ParamLimits

0x19e7,	// (0x000209d4) image3_infobar_pane

0x8222,	// (0x0002720f) fs_bigclock_status_pane_ParamLimits

0x8222,	// (0x0002720f) fs_bigclock_status_pane

0x822f,	// (0x0002721c) main_fs_bigclock_clock_pane_ParamLimits

0x822f,	// (0x0002721c) main_fs_bigclock_clock_pane

0x824b,	// (0x00027238) main_fs_bigclock_indi_pane_ParamLimits

0x824b,	// (0x00027238) main_fs_bigclock_indi_pane

0x8279,	// (0x00027266) main_fs_bigclock_swipe_pane_ParamLimits

0x8279,	// (0x00027266) main_fs_bigclock_swipe_pane

0x9dbc,	// (0x00028da9) main_fs_clock_dumped_data

0x82b3,	// (0x000272a0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x82b3,	// (0x000272a0) list_single_fs_bigclock_indicator_pane_g1

0x82d2,	// (0x000272bf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x82d2,	// (0x000272bf) list_single_fs_bigclock_indicator_pane_g2

0x82ec,	// (0x000272d9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x82ec,	// (0x000272d9) list_single_fs_bigclock_indicator_pane_g3

0x8308,	// (0x000272f5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8308,	// (0x000272f5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc56,	// (0x0002ec43) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc56,	// (0x0002ec43) list_single_fs_bigclock_indicator_pane_g

0x8337,	// (0x00027324) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8337,	// (0x00027324) list_single_fs_bigclock_indicator_pane_t1

0x835f,	// (0x0002734c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x835f,	// (0x0002734c) list_single_fs_bigclock_indicator_pane_t2

0x8387,	// (0x00027374) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8387,	// (0x00027374) list_single_fs_bigclock_indicator_pane_t3

0x83af,	// (0x0002739c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x83af,	// (0x0002739c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc61,	// (0x0002ec4e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc61,	// (0x0002ec4e) list_single_fs_bigclock_indicator_pane_t

0xeb4c,	// (0x0002db39) image3_infobar_fav_pane_ParamLimits

0xeb4c,	// (0x0002db39) image3_infobar_fav_pane

0xeb5c,	// (0x0002db49) image3_infobar_loc_pane_ParamLimits

0xeb5c,	// (0x0002db49) image3_infobar_loc_pane

0xeb72,	// (0x0002db5f) image3_infobar_time_pane_ParamLimits

0xeb72,	// (0x0002db5f) image3_infobar_time_pane

0xc9e2,	// (0x0002b9cf) image3_infobar_time_pane_g1

0xeb82,	// (0x0002db6f) image3_infobar_time_pane_t1

0xc9e2,	// (0x0002b9cf) image3_infobar_loc_pane_g1

0xeb90,	// (0x0002db7d) image3_infobar_loc_pane_g2

0x0001,

0xfe32,	// (0x0002ee1f) image3_infobar_loc_pane_g

0xeb98,	// (0x0002db85) image3_infobar_loc_pane_t1

0xc9e2,	// (0x0002b9cf) image3_infobar_fav_pane_g1

0xeba6,	// (0x0002db93) image3_infobar_fav_pane_g2

0x0001,

0xfe37,	// (0x0002ee24) image3_infobar_fav_pane_g

0xebae,	// (0x0002db9b) fs_bigclock_status_battery_pane

0xebb7,	// (0x0002dba4) fs_bigclock_status_signal_pane

0xebc0,	// (0x0002dbad) fs_bigclock_status_title_pane

0xebc9,	// (0x0002dbb6) fs_bigclock_status_signal_pane_g1

0xebd2,	// (0x0002dbbf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe3c,	// (0x0002ee29) fs_bigclock_status_signal_pane_g

0xebda,	// (0x0002dbc7) fs_bigclock_status_battery_pane_g1

0xebe3,	// (0x0002dbd0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe41,	// (0x0002ee2e) fs_bigclock_status_battery_pane_g

0xebeb,	// (0x0002dbd8) fs_bigclock_status_title_pane_t1

0x9272,	// (0x0002825f) main_fs_bigclock_clock_pane_g1

0x9272,	// (0x0002825f) main_fs_bigclock_clock_pane_g2

0x9281,	// (0x0002826e) main_fs_bigclock_clock_pane_g3

0x9281,	// (0x0002826e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe46,	// (0x0002ee33) main_fs_bigclock_clock_pane_g

0x9291,	// (0x0002827e) main_fs_bigclock_clock_pane_t1

0x92a6,	// (0x00028293) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe4f,	// (0x0002ee3c) main_fs_bigclock_clock_pane_t

0xec10,	// (0x0002dbfd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec10,	// (0x0002dbfd) list_single_fs_bigclock_indicator_pane

0xec21,	// (0x0002dc0e) list_single_fs_bigclock_pane_ParamLimits

0xec21,	// (0x0002dc0e) list_single_fs_bigclock_pane

0xec47,	// (0x0002dc34) main_fs_bigclock_indicator_pane_t1

0xec56,	// (0x0002dc43) list_single_fs_bigclock_pane_g1

0xec5e,	// (0x0002dc4b) list_single_fs_bigclock_pane_t1

0xc9e2,	// (0x0002b9cf) main_fs_bigclock_swipe_pane_g1

0xeca1,	// (0x0002dc8e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe60,	// (0x0002ee4d) main_fs_bigclock_swipe_pane_g

0xeca9,	// (0x0002dc96) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca9,	// (0x0002dc96) main_fs_bigclock_swipe_pane_t1

0x4413,	// (0x00023400) call_type_pane_ParamLimits

0x9dbc,	// (0x00028da9) main_btmg_pane

0xe8c7,	// (0x0002d8b4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c7,	// (0x0002d8b4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd3,	// (0x0002edc0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd3,	// (0x0002edc0) list_single_cale_mrui_row_pane_g

0xea47,	// (0x0002da34) list_recal_vselct_arw_lo_pane

0xea4f,	// (0x0002da3c) list_recal_vselct_arw_up_pane

0xea57,	// (0x0002da44) list_recal_vselct_pane

0x92fd,	// (0x000282ea) btmg_button_pane

0x9309,	// (0x000282f6) main_btmg_pane_g1

0x9dbc,	// (0x00028da9) bg_button_pane_cp044

0xecc6,	// (0x0002dcb3) btmg_button_pane_t1

0xc596,	// (0x0002b583) aid_listscroll_gen

0xa968,	// (0x00029955) main_cntbar_detail_pane

0xe582,	// (0x0002d56f) list_cmail_folder_pane

0xd7bd,	// (0x0002c7aa) sp_fs_scroll_pane_cp03_ParamLimits

0xecd4,	// (0x0002dcc1) list_single_fs_dyc_pane_cp01_ParamLimits

0xecd4,	// (0x0002dcc1) list_single_fs_dyc_pane_cp01

0xecf1,	// (0x0002dcde) aid_size_cmail_indent

0xecfa,	// (0x0002dce7) list_single_dyc_row_pane_cp01

0x9331,	// (0x0002831e) cntbar_detail_list_pane_ParamLimits

0x9331,	// (0x0002831e) cntbar_detail_list_pane

0x9371,	// (0x0002835e) main_cntbar_detail_cont_pane_ParamLimits

0x9371,	// (0x0002835e) main_cntbar_detail_cont_pane

0x4336,	// (0x00023323) scroll_pane_cp032_ParamLimits

0x4336,	// (0x00023323) scroll_pane_cp032

0x937d,	// (0x0002836a) cntbar_detail_list_event_pane_ParamLimits

0x937d,	// (0x0002836a) cntbar_detail_list_event_pane

0x933f,	// (0x0002832c) cntbar_detail_list_shct_pane

0xa9ad,	// (0x0002999a) aid_list_gen

0xed03,	// (0x0002dcf0) aid_scroll

0xed0c,	// (0x0002dcf9) aid_size_touch_scroll_bar

0x75f5,	// (0x000265e2) aid_list_double

0x938d,	// (0x0002837a) aid_list_single

0x75f5,	// (0x000265e2) aid_list_single_lg

0x9396,	// (0x00028383) aid_list_z_g_a_sm

0x939e,	// (0x0002838b) aid_list_z_g_d

0x93a6,	// (0x00028393) aid_txt_z_prm

0x93b4,	// (0x000283a1) aid_txt_z_prm_cp01

0x93c2,	// (0x000283af) aid_txt_z_sec

0x93d0,	// (0x000283bd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93d0,	// (0x000283bd) main_cntbar_detail_cont_pane_g1

0x93dd,	// (0x000283ca) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93dd,	// (0x000283ca) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe65,	// (0x0002ee52) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe65,	// (0x0002ee52) main_cntbar_detail_cont_pane_g

0xed15,	// (0x0002dd02) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x0002dd10) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x0002dd1e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe6a,	// (0x0002ee57) main_cntbar_detail_cont_pane_t

0x93e9,	// (0x000283d6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93e9,	// (0x000283d6) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x0002dd2c) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x0002dd35) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe71,	// (0x0002ee5e) cntbar_detail_list_shct_pane_g

0x93fd,	// (0x000283ea) cntbar_detail_list_event_pane_g1_ParamLimits

0x93fd,	// (0x000283ea) cntbar_detail_list_event_pane_g1

0x9409,	// (0x000283f6) cntbar_detail_list_event_pane_g2_ParamLimits

0x9409,	// (0x000283f6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe76,	// (0x0002ee63) cntbar_detail_list_event_pane_g_ParamLimits

0xfe76,	// (0x0002ee63) cntbar_detail_list_event_pane_g

0x9477,	// (0x00028464) cntbar_detail_list_event_pane_t1_ParamLimits

0x9477,	// (0x00028464) cntbar_detail_list_event_pane_t1

0x948c,	// (0x00028479) cntbar_detail_list_event_pane_t2_ParamLimits

0x948c,	// (0x00028479) cntbar_detail_list_event_pane_t2

0x0002,

0xfe83,	// (0x0002ee70) cntbar_detail_list_event_pane_t_ParamLimits

0xfe83,	// (0x0002ee70) cntbar_detail_list_event_pane_t

0xc9e2,	// (0x0002b9cf) cell_cntbar_detail_list_shct_pane_g1

0xb0fd,	// (0x0002a0ea) navi_pane_mv_g3

0xa968,	// (0x00029955) main_cntbar_detail_pane_ParamLimits

0x9dbc,	// (0x00028da9) main_notif_wgt_pane

0x16f6,	// (0x000206e3) aid_tch_main_mp4_pane_g4

0x195f,	// (0x0002094c) popup_slider_window_cp02

0xea3d,	// (0x0002da2a) list_recal_day_event_pane

0x9311,	// (0x000282fe) cntbar_detail_btn_pane_ParamLimits

0x9311,	// (0x000282fe) cntbar_detail_btn_pane

0x9321,	// (0x0002830e) cntbar_detail_btn_pane_cp01_ParamLimits

0x9321,	// (0x0002830e) cntbar_detail_btn_pane_cp01

0x933f,	// (0x0002832c) cntbar_detail_list_shct_pane_ParamLimits

0x934b,	// (0x00028338) cntbar_detail_pane_g1_ParamLimits

0x934b,	// (0x00028338) cntbar_detail_pane_g1

0x935b,	// (0x00028348) cntbar_detail_pane_t1_ParamLimits

0x935b,	// (0x00028348) cntbar_detail_pane_t1

0x9415,	// (0x00028402) cntbar_detail_list_event_pane_g3_ParamLimits

0x9415,	// (0x00028402) cntbar_detail_list_event_pane_g3

0x942d,	// (0x0002841a) cntbar_detail_list_event_pane_g4_ParamLimits

0x942d,	// (0x0002841a) cntbar_detail_list_event_pane_g4

0x9445,	// (0x00028432) cntbar_detail_list_event_pane_g5_ParamLimits

0x9445,	// (0x00028432) cntbar_detail_list_event_pane_g5

0x945d,	// (0x0002844a) cntbar_detail_list_event_pane_g6_ParamLimits

0x945d,	// (0x0002844a) cntbar_detail_list_event_pane_g6

0x94a1,	// (0x0002848e) cntbar_detail_list_event_pane_t3_ParamLimits

0x94a1,	// (0x0002848e) cntbar_detail_list_event_pane_t3

0x94b3,	// (0x000284a0) popup_notif_wgt_window_ParamLimits

0x94b3,	// (0x000284a0) popup_notif_wgt_window

0x94c3,	// (0x000284b0) popup_submenu_window_cp01_ParamLimits

0x94c3,	// (0x000284b0) popup_submenu_window_cp01

0xa6d6,	// (0x000296c3) bg_popup_window_pane_cp10

0xed51,	// (0x0002dd3e) listscroll_notif_wgt_pane

0xed63,	// (0x0002dd50) list_notif_wgt_window

0xed6c,	// (0x0002dd59) scroll_pane_cp033

0x94d3,	// (0x000284c0) list_notif_wgt_row_pane_ParamLimits

0x94d3,	// (0x000284c0) list_notif_wgt_row_pane

0xed75,	// (0x0002dd62) aid_size_list_notif_wgt_del

0xed82,	// (0x0002dd6f) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0002dd7b) list_notif_wgt_row_pane_g2

0xed9d,	// (0x0002dd8a) list_notif_wgt_row_pane_g3

0x0002,

0xfe8a,	// (0x0002ee77) list_notif_wgt_row_pane_g

0xedaa,	// (0x0002dd97) list_notif_wgt_row_pane_t1

0xedc0,	// (0x0002ddad) list_notif_wgt_row_pane_t2

0xedd2,	// (0x0002ddbf) list_notif_wgt_row_pane_t3

0x0002,

0xfe91,	// (0x0002ee7e) list_notif_wgt_row_pane_t

0xd62b,	// (0x0002c618) list_recal_day_event_pane_g1

0xede4,	// (0x0002ddd1) list_recal_day_event_pane_t1

0x9dbc,	// (0x00028da9) bg_button_pane_cp045

0x94e7,	// (0x000284d4) cntbar_detail_btn_pane_t1

0xc5aa,	// (0x0002b597) main_callh_pane_ParamLimits

0xc5aa,	// (0x0002b597) main_callh_pane

0x9dbc,	// (0x00028da9) main_coverflow0_pane

0x9dbc,	// (0x00028da9) main_wgtman_pane

0x8291,	// (0x0002727e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8291,	// (0x0002727e) main_fs_bigclock_unlock_btn_pane

0x8d92,	// (0x00027d7f) bg_button_pane_cp16

0x8da2,	// (0x00027d8f) cell_tport_appsw_pane_g3

0x94f5,	// (0x000284e2) cf0_flow_pane_ParamLimits

0x94f5,	// (0x000284e2) cf0_flow_pane

0xedf3,	// (0x0002dde0) listscroll_cf0_pane

0xedfe,	// (0x0002ddeb) main_cf0_pane_g1

0x9504,	// (0x000284f1) main_cf0_pane_t1_ParamLimits

0x9504,	// (0x000284f1) main_cf0_pane_t1

0x9518,	// (0x00028505) main_cf0_pane_t2_ParamLimits

0x9518,	// (0x00028505) main_cf0_pane_t2

0x0001,

0xfe9d,	// (0x0002ee8a) main_cf0_pane_t_ParamLimits

0xfe9d,	// (0x0002ee8a) main_cf0_pane_t

0xee10,	// (0x0002ddfd) scroll_pane_cp11

0x952c,	// (0x00028519) cf0_flow_pane_g1

0x9534,	// (0x00028521) cf0_flow_pane_g2

0x0001,

0xfea2,	// (0x0002ee8f) cf0_flow_pane_g

0x953c,	// (0x00028529) cf0_flow_pane_t1

0x9dbc,	// (0x00028da9) main_call6_pane

0x9dbc,	// (0x00028da9) main_calllock_pane

0x23e3,	// (0x000213d0) call6_btn_grp_pane_ParamLimits

0x23e3,	// (0x000213d0) call6_btn_grp_pane

0x23f0,	// (0x000213dd) call6_pane_g1_ParamLimits

0x23f0,	// (0x000213dd) call6_pane_g1

0x2400,	// (0x000213ed) popup_call6_1st_window_ParamLimits

0x2400,	// (0x000213ed) popup_call6_1st_window

0x2410,	// (0x000213fd) popup_call6_2nd_window_ParamLimits

0x2410,	// (0x000213fd) popup_call6_2nd_window

0x2420,	// (0x0002140d) cell_call6_btn_pane_ParamLimits

0x2420,	// (0x0002140d) cell_call6_btn_pane

0xa6d6,	// (0x000296c3) bg_popup_call2_in_pane_cp03

0xee1b,	// (0x0002de08) popup_call6_1st_window_g1

0xee23,	// (0x0002de10) popup_call6_1st_window_g2

0xee2b,	// (0x0002de18) popup_call6_1st_window_g3

0x0002,

0xfea7,	// (0x0002ee94) popup_call6_1st_window_g

0xee33,	// (0x0002de20) popup_call6_1st_window_t1

0xee42,	// (0x0002de2f) popup_call6_1st_window_t2

0xee52,	// (0x0002de3f) popup_call6_1st_window_t3

0x0002,

0xfeae,	// (0x0002ee9b) popup_call6_1st_window_t

0xa6d6,	// (0x000296c3) bg_popup_call2_in_pane_cp04

0xee1b,	// (0x0002de08) popup_call6_2nd_window_g1

0xee23,	// (0x0002de10) popup_call6_2nd_window_g2

0xee2b,	// (0x0002de18) popup_call6_2nd_window_g3

0x0002,

0xfea7,	// (0x0002ee94) popup_call6_2nd_window_g

0xee33,	// (0x0002de20) popup_call6_2nd_window_t1

0x0c59,	// (0x0001fc46) bg_button_pane_cp15

0x2431,	// (0x0002141e) cell_call6_btn_pane_g1

0x243a,	// (0x00021427) cell_call6_btn_pane_t1

0x954a,	// (0x00028537) listscroll_wgtman_pane_ParamLimits

0x954a,	// (0x00028537) listscroll_wgtman_pane

0x9566,	// (0x00028553) wgtman_btn_pane_ParamLimits

0x9566,	// (0x00028553) wgtman_btn_pane

0xaf0f,	// (0x00029efc) aid_scroll_copy1

0xee62,	// (0x0002de4f) list_wgtman_pane

0x959b,	// (0x00028588) wgtman_btn_pane_g1_ParamLimits

0x959b,	// (0x00028588) wgtman_btn_pane_g1

0x95c3,	// (0x000285b0) wgtman_btn_pane_t1_ParamLimits

0x95c3,	// (0x000285b0) wgtman_btn_pane_t1

0xee6c,	// (0x0002de59) wgtman_btn_pane_t2_ParamLimits

0xee6c,	// (0x0002de59) wgtman_btn_pane_t2

0x0001,

0xfeb5,	// (0x0002eea2) wgtman_btn_pane_t_ParamLimits

0xfeb5,	// (0x0002eea2) wgtman_btn_pane_t

0x95fa,	// (0x000285e7) listrow_wgtman_pane_ParamLimits

0x95fa,	// (0x000285e7) listrow_wgtman_pane

0x960f,	// (0x000285fc) listrow_wgtman_pane_g1

0x961c,	// (0x00028609) listrow_wgtman_pane_g2

0x0001,

0xfeba,	// (0x0002eea7) listrow_wgtman_pane_g

0x963a,	// (0x00028627) listrow_wgtman_pane_t1

0x9652,	// (0x0002863f) listrow_wgtman_pane_t2

0x0001,

0xfebf,	// (0x0002eeac) listrow_wgtman_pane_t

0x9678,	// (0x00028665) wait_bar_pane_cp09

0xee83,	// (0x0002de70) main_calllock_btn_pane

0xee8d,	// (0x0002de7a) main_calllock_pane_g1

0x9dbc,	// (0x00028da9) bg_button_pane_cp17

0xee99,	// (0x0002de86) main_calllock_btn_pane_g1

0xeea2,	// (0x0002de8f) main_calllock_btn_pane_t1

0x9dbc,	// (0x00028da9) main_dialer3_pane

0x9dbc,	// (0x00028da9) main_fmrd2_pane

0xc9e2,	// (0x0002b9cf) main_fs_bigclock_unlock_btn_pane_g1

0x9692,	// (0x0002867f) main_fs_bigclock_unlock_btn_pane_t1

0x96a0,	// (0x0002868d) area_fmrd2_info_pane_ParamLimits

0x96a0,	// (0x0002868d) area_fmrd2_info_pane

0x96ac,	// (0x00028699) area_fmrd2_visual_pane_ParamLimits

0x96ac,	// (0x00028699) area_fmrd2_visual_pane

0x96ba,	// (0x000286a7) fmrd2_indi_pane_ParamLimits

0x96ba,	// (0x000286a7) fmrd2_indi_pane

0x96c7,	// (0x000286b4) area_fmrd2_visual_pane_g1

0x96cf,	// (0x000286bc) area_fmrd2_visual_pane_t1

0x96df,	// (0x000286cc) area_fmrd2_visual_pane_t2

0x96ef,	// (0x000286dc) area_fmrd2_visual_pane_t3

0x0002,

0xfec9,	// (0x0002eeb6) area_fmrd2_visual_pane_t

0x96ff,	// (0x000286ec) area_fmrd2_info_pane_g1

0x9707,	// (0x000286f4) area_fmrd2_info_pane_t1

0x9717,	// (0x00028704) area_fmrd2_info_pane_t2

0x9727,	// (0x00028714) area_fmrd2_info_pane_t3

0x9737,	// (0x00028724) area_fmrd2_info_pane_t4

0x0003,

0xfed0,	// (0x0002eebd) area_fmrd2_info_pane_t

0x9747,	// (0x00028734) fmrd2_indi_pane_t1

0x9757,	// (0x00028744) fmrd2_indi_pane_t2

0x9767,	// (0x00028754) fmrd2_indi_pane_t3

0x0002,

0xfed9,	// (0x0002eec6) fmrd2_indi_pane_t

0x8319,	// (0x00027306) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8319,	// (0x00027306) list_single_fs_bigclock_indicator_pane_g5

0x83ce,	// (0x000273bb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x83ce,	// (0x000273bb) list_single_fs_bigclock_indicator_pane_t5

0x8efd,	// (0x00027eea) aid_cell_bcale_month_pane_ParamLimits

0x8efd,	// (0x00027eea) aid_cell_bcale_month_pane

0x8f1b,	// (0x00027f08) bcale_month_pane_ParamLimits

0x8f1b,	// (0x00027f08) bcale_month_pane

0x8f39,	// (0x00027f26) bcale_preview_pane_ParamLimits

0x8f39,	// (0x00027f26) bcale_preview_pane

0xec5e,	// (0x0002dc4b) list_single_fs_bigclock_pane_t1_ParamLimits

0xec7d,	// (0x0002dc6a) list_single_fs_bigclock_pane_t2_ParamLimits

0xec7d,	// (0x0002dc6a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe5b,	// (0x0002ee48) list_single_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0002ee48) list_single_fs_bigclock_pane_t

0x968a,	// (0x00028677) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfec4,	// (0x0002eeb1) main_fs_bigclock_unlock_btn_pane_g

0x9777,	// (0x00028764) aid_dia3_key_size_ParamLimits

0x9777,	// (0x00028764) aid_dia3_key_size

0x9783,	// (0x00028770) aid_dia3_listrow_size_ParamLimits

0x9783,	// (0x00028770) aid_dia3_listrow_size

0x9793,	// (0x00028780) dia3_keypad_fun_pane_ParamLimits

0x9793,	// (0x00028780) dia3_keypad_fun_pane

0x97a3,	// (0x00028790) dia3_keypad_num_pane_ParamLimits

0x97a3,	// (0x00028790) dia3_keypad_num_pane

0x97b3,	// (0x000287a0) dia3_listscroll_pane_ParamLimits

0x97b3,	// (0x000287a0) dia3_listscroll_pane

0x97c1,	// (0x000287ae) dia3_numentry_pane_ParamLimits

0x97c1,	// (0x000287ae) dia3_numentry_pane

0xeeb1,	// (0x0002de9e) dia3_list_pane

0x97cf,	// (0x000287bc) scroll_pane_cp12

0x9dbc,	// (0x00028da9) bg_dia3_numentry_pane

0x97da,	// (0x000287c7) dia3_numentry_pane_t1

0x97e9,	// (0x000287d6) cell_dia3_key_num_pane

0x97f1,	// (0x000287de) cell_dia3_key0_fun_pane_ParamLimits

0x97f1,	// (0x000287de) cell_dia3_key0_fun_pane

0x97fe,	// (0x000287eb) cell_dia3_key1_fun_pane_ParamLimits

0x97fe,	// (0x000287eb) cell_dia3_key1_fun_pane

0x980b,	// (0x000287f8) dia3_listrow_pane

0xdf6b,	// (0x0002cf58) bg_dia3_numentry_pane_g1

0x9dbc,	// (0x00028da9) bg_button_pane_cp21

0x9818,	// (0x00028805) cell_dia3_key_num_pane_t1

0x9826,	// (0x00028813) cell_dia3_key_num_pane_t2

0x9835,	// (0x00028822) cell_dia3_key_num_pane_t3

0x9844,	// (0x00028831) cell_dia3_key_num_pane_t4

0x0003,

0xfee0,	// (0x0002eecd) cell_dia3_key_num_pane_t

0x9dbc,	// (0x00028da9) bg_button_pane_cp19

0x9853,	// (0x00028840) cell_dia3_key0_fun_pane_g1

0x9dbc,	// (0x00028da9) bg_button_pane_cp20

0x985b,	// (0x00028848) cell_dia3_key1_fun_pane_g1

0x9863,	// (0x00028850) area_left_week_number_pane

0x9876,	// (0x00028863) area_top_day_name_pane

0x9884,	// (0x00028871) frame_month_view_pane

0xeebc,	// (0x0002dea9) grid_month_view_pane

0x9899,	// (0x00028886) cell_top_day_name_pane_ParamLimits

0x9899,	// (0x00028886) cell_top_day_name_pane

0x98b5,	// (0x000288a2) cell_area_left_week_number_pane_ParamLimits

0x98b5,	// (0x000288a2) cell_area_left_week_number_pane

0x98d6,	// (0x000288c3) cell_month_view_pane_ParamLimits

0x98d6,	// (0x000288c3) cell_month_view_pane

0xeeca,	// (0x0002deb7) frm_month_g1

0x9902,	// (0x000288ef) frm_month_g2

0x9913,	// (0x00028900) frm_month_g3

0x9924,	// (0x00028911) frm_month_g4

0x9935,	// (0x00028922) frm_month_g5

0x9946,	// (0x00028933) frm_month_g6

0x9959,	// (0x00028946) frm_month_g7

0xeed7,	// (0x0002dec4) frm_month_g8

0x996c,	// (0x00028959) frm_month_g9

0x9979,	// (0x00028966) frm_month_g10

0x9986,	// (0x00028973) frm_month_g11

0x9993,	// (0x00028980) frm_month_g12

0x99a0,	// (0x0002898d) frm_month_g13

0x99af,	// (0x0002899c) frm_month_g14

0x99be,	// (0x000289ab) frm_month_g15

0x99cd,	// (0x000289ba) frm_month_g16

0x000f,

0xfee9,	// (0x0002eed6) frm_month_g

0xeee4,	// (0x0002ded1) cell_top_day_name_pane_t1

0x99dc,	// (0x000289c9) cell_area_left_week_number_pane_g1

0x99eb,	// (0x000289d8) cell_area_left_week_number_pane_t1

0xcc09,	// (0x0002bbf6) cell_month_view_pane_g1

0x9a01,	// (0x000289ee) cell_month_view_pane_t1

0x9dbc,	// (0x00028da9) main_fps_pane

0xe3a8,	// (0x0002d395) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a8,	// (0x0002d395) cmail_ddmenu_btn02_pane_cp1

0xe3c4,	// (0x0002d3b1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3c4,	// (0x0002d3b1) cmail_ddmenu_btn02_pane_cp2

0x91d9,	// (0x000281c6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91d9,	// (0x000281c6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe0e,	// (0x0002edfb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe0e,	// (0x0002edfb) cmail_ddmenu_btn02_pane_g

0x91f7,	// (0x000281e4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91f7,	// (0x000281e4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe13,	// (0x0002ee00) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe13,	// (0x0002ee00) cmail_ddmenu_btn02_pane_t

0x9a17,	// (0x00028a04) fps_text_pane_ParamLimits

0x9a17,	// (0x00028a04) fps_text_pane

0x9a24,	// (0x00028a11) main_fps_pane_g1_ParamLimits

0x9a24,	// (0x00028a11) main_fps_pane_g1

0x9a30,	// (0x00028a1d) wait_bar_pane_cp010_ParamLimits

0x9a30,	// (0x00028a1d) wait_bar_pane_cp010

0x9a3c,	// (0x00028a29) fps_text_pane_t1_ParamLimits

0x9a3c,	// (0x00028a29) fps_text_pane_t1

0x6941,	// (0x0002592e) cam4_image_uncrop_pane_g1

0x694a,	// (0x00025937) cam4_image_uncrop_pane_g2

0x6953,	// (0x00025940) cam4_image_uncrop_pane_g3

0x695c,	// (0x00025949) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0002e8c4) cam4_image_uncrop_pane_g

0x980b,	// (0x000287f8) dia3_listrow_pane_ParamLimits

0x9dbc,	// (0x00028da9) main_phob2_pane

0x8d74,	// (0x00027d61) cell_tport_appsw_pane_cp02_ParamLimits

0x8d74,	// (0x00027d61) cell_tport_appsw_pane_cp02

0x8d83,	// (0x00027d70) cell_tport_appsw_pane_cp03_ParamLimits

0x8d83,	// (0x00027d70) cell_tport_appsw_pane_cp03

0x9dbc,	// (0x00028da9) phob2_contact_card_pane

0x9dbc,	// (0x00028da9) phob2_listscroll_pane

0xeef7,	// (0x0002dee4) phob2_list_pane

0xeeff,	// (0x0002deec) scroll_pane_cp034

0x9a55,	// (0x00028a42) phob2_cc_data_pane_ParamLimits

0x9a55,	// (0x00028a42) phob2_cc_data_pane

0x9a6c,	// (0x00028a59) phob2_cc_listscroll_pane_ParamLimits

0x9a6c,	// (0x00028a59) phob2_cc_listscroll_pane

0x9a88,	// (0x00028a75) list_double_large_graphic_phob2_pane_ParamLimits

0x9a88,	// (0x00028a75) list_double_large_graphic_phob2_pane

0x9aa0,	// (0x00028a8d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9aa0,	// (0x00028a8d) list_double_large_graphic_phob2_pane_g1

0x9ab6,	// (0x00028aa3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9ab6,	// (0x00028aa3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0a,	// (0x0002eef7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0a,	// (0x0002eef7) list_double_large_graphic_phob2_pane_g

0x9ac2,	// (0x00028aaf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9ac2,	// (0x00028aaf) list_double_large_graphic_phob2_pane_t1

0x9ad7,	// (0x00028ac4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9ad7,	// (0x00028ac4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff0f,	// (0x0002eefc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff0f,	// (0x0002eefc) list_double_large_graphic_phob2_pane_t

0x9dbc,	// (0x00028da9) list_highlight_pane_cp024

0x9ae9,	// (0x00028ad6) phob2_cc_button_pane

0x9af1,	// (0x00028ade) phob2_cc_data_pane_g1_ParamLimits

0x9af1,	// (0x00028ade) phob2_cc_data_pane_g1

0x9b05,	// (0x00028af2) phob2_cc_data_pane_g2_ParamLimits

0x9b05,	// (0x00028af2) phob2_cc_data_pane_g2

0x0001,

0xff14,	// (0x0002ef01) phob2_cc_data_pane_g_ParamLimits

0xff14,	// (0x0002ef01) phob2_cc_data_pane_g

0x9b14,	// (0x00028b01) phob2_cc_data_pane_t1_ParamLimits

0x9b14,	// (0x00028b01) phob2_cc_data_pane_t1

0x9b2d,	// (0x00028b1a) phob2_cc_data_pane_t2_ParamLimits

0x9b2d,	// (0x00028b1a) phob2_cc_data_pane_t2

0x9b46,	// (0x00028b33) phob2_cc_data_pane_t3_ParamLimits

0x9b46,	// (0x00028b33) phob2_cc_data_pane_t3

0x0002,

0xff19,	// (0x0002ef06) phob2_cc_data_pane_t_ParamLimits

0xff19,	// (0x0002ef06) phob2_cc_data_pane_t

0xef07,	// (0x0002def4) phob2_cc_list_pane_ParamLimits

0xef07,	// (0x0002def4) phob2_cc_list_pane

0xd7a8,	// (0x0002c795) scroll_pane_cp035_ParamLimits

0xd7a8,	// (0x0002c795) scroll_pane_cp035

0xa968,	// (0x00029955) bg_button_pane_cp033

0xef13,	// (0x0002df00) phob2_cc_button_pane_g1

0xef1f,	// (0x0002df0c) phob2_cc_button_pane_t1

0xef34,	// (0x0002df21) phob2_cc_button_pane_t2

0x0001,

0xff20,	// (0x0002ef0d) phob2_cc_button_pane_t

0x9b5f,	// (0x00028b4c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b5f,	// (0x00028b4c) list_double_large_graphic_phob2_cc_pane

0x9bae,	// (0x00028b9b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9bae,	// (0x00028b9b) list_double_large_graphic_phob2_cc_pane_g1

0x9bbf,	// (0x00028bac) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9bbf,	// (0x00028bac) list_double_large_graphic_phob2_cc_pane_g2

0x9bce,	// (0x00028bbb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9bce,	// (0x00028bbb) list_double_large_graphic_phob2_cc_pane_g3

0x9bdd,	// (0x00028bca) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9bdd,	// (0x00028bca) list_double_large_graphic_phob2_cc_pane_g4

0x9bee,	// (0x00028bdb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9bee,	// (0x00028bdb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff25,	// (0x0002ef12) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff25,	// (0x0002ef12) list_double_large_graphic_phob2_cc_pane_g

0x9bfd,	// (0x00028bea) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9bfd,	// (0x00028bea) list_double_large_graphic_phob2_cc_pane_t1

0x9c26,	// (0x00028c13) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c26,	// (0x00028c13) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff30,	// (0x0002ef1d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff30,	// (0x0002ef1d) list_double_large_graphic_phob2_cc_pane_t

0xef46,	// (0x0002df33) list_highlight_pane_cp025_ParamLimits

0xef46,	// (0x0002df33) list_highlight_pane_cp025

0xa968,	// (0x00029955) bg_button_pane_cp033_ParamLimits

0xef13,	// (0x0002df00) phob2_cc_button_pane_g1_ParamLimits

0xef1f,	// (0x0002df0c) phob2_cc_button_pane_t1_ParamLimits

0xef34,	// (0x0002df21) phob2_cc_button_pane_t2_ParamLimits

0xff20,	// (0x0002ef0d) phob2_cc_button_pane_t_ParamLimits

0x24bc,	// (0x000214a9) popup_wgtman_window

0xd505,	// (0x0002c4f2) scroll_pane_cp038

0x9583,	// (0x00028570) wgtman_btn_pane_cp_01_ParamLimits

0x9583,	// (0x00028570) wgtman_btn_pane_cp_01

0xef54,	// (0x0002df41) wgtman_content_pane

0xef5d,	// (0x0002df4a) wgtman_heading_pane

0x9dbc,	// (0x00028da9) bg_heading_pane_cp02

0xef66,	// (0x0002df53) wgtman_heading_pane_g1

0xef6e,	// (0x0002df5b) wgtman_heading_pane_t1

0xef7c,	// (0x0002df69) scroll_pane_cp036

0xef84,	// (0x0002df71) wgtman_list_pane

0xef8c,	// (0x0002df79) wgtman_list_pane_t1_ParamLimits

0xef8c,	// (0x0002df79) wgtman_list_pane_t1

0x1c14,	// (0x00020c01) cam4_grid_pane

0x7150,	// (0x0002613d) bg_button_pane_cp015_ParamLimits

0x7162,	// (0x0002614f) bg_button_pane_cp016_ParamLimits

0x7175,	// (0x00026162) bg_button_pane_cp017_ParamLimits

0x71cb,	// (0x000261b8) popup_vitu2_query_window_g3_ParamLimits

0x71cb,	// (0x000261b8) popup_vitu2_query_window_g3

0x728a,	// (0x00026277) popup_vitu2_query_window_t6_ParamLimits

0x728a,	// (0x00026277) popup_vitu2_query_window_t6

0x72b5,	// (0x000262a2) popup_vitu2_query_window_t7_ParamLimits

0x72b5,	// (0x000262a2) popup_vitu2_query_window_t7

0xefa6,	// (0x0002df93) cam4_grid_pane_g1

0xefaf,	// (0x0002df9c) cam4_grid_pane_g2

0xefba,	// (0x0002dfa7) cam4_grid_pane_g3

0xefc3,	// (0x0002dfb0) cam4_grid_pane_g4

0x0003,

0xff35,	// (0x0002ef22) cam4_grid_pane_g

0x31ab,	// (0x00022198) aid_placing_vt_slider_lsc_ParamLimits

0x34de,	// (0x000224cb) vidtel_button_pane_ParamLimits

0x34de,	// (0x000224cb) vidtel_button_pane

0x9dbc,	// (0x00028da9) bg_button_pane_cp034

0xefce,	// (0x0002dfbb) vidtel_button_pane_g1

0xefd6,	// (0x0002dfc3) vidtel_button_pane_t1

0xd609,	// (0x0002c5f6) aid_size_vtel_slider_touch

0xd7a8,	// (0x0002c795) scroll_pane_cp039

0x7fc0,	// (0x00026fad) ncim_query_button_pane_cp01_ParamLimits

0x7fdf,	// (0x00026fcc) ncimui_query_pane_g1_ParamLimits

0xa968,	// (0x00029955) input_focus_pane_cp012_ParamLimits

0xdfa9,	// (0x0002cf96) ncim_query_entry_pane_t1_ParamLimits

0xd7a8,	// (0x0002c795) scroll_pane_cp039_ParamLimits

0xafe6,	// (0x00029fd3) navi_pane_bcale_mc_g1

0xafee,	// (0x00029fdb) navi_pane_bcale_mc_t1

0xe3fa,	// (0x0002d3e7) main_sp_fs_email_pane_g1

0xe406,	// (0x0002d3f3) main_sp_fs_email_pane_g2

0x0001,

0xfccb,	// (0x0002ecb8) main_sp_fs_email_pane_g

0xe8d3,	// (0x0002d8c0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d3,	// (0x0002d8c0) list_single_cale_mrui_row_pane_g3

0x9217,	// (0x00028204) list_single_recal_day_pane_g5_event_pane

0xeaaf,	// (0x0002da9c) list_single_recal_day_pane_g7

0xefec,	// (0x0002dfd9) list_recal_day_event_pane_cp01

0xeff5,	// (0x0002dfe2) list_recal_vselct_arw_lo_pane_cp01

0xeffd,	// (0x0002dfea) list_recal_vselct_arw_up_pane_cp01

0xf005,	// (0x0002dff2) list_recal_vselct_pane_cp01

0xd62b,	// (0x0002c618) list_recal_day_event_pane_cp01_g1

0xf00f,	// (0x0002dffc) list_recal_day_event_pane_cp01_t1

0xeab7,	// (0x0002daa4) list_single_recal_day_pane_t1_ParamLimits

0xeac9,	// (0x0002dab6) list_single_recal_day_pane_t2_ParamLimits

0xfe23,	// (0x0002ee10) list_single_recal_day_pane_t_ParamLimits

0xa469,	// (0x00029456) bg_notes_pane_ParamLimits

0xa50c,	// (0x000294f9) list_notes_pane_ParamLimits

0x26ff,	// (0x000216ec) scroll_pane_cp06_ParamLimits

0xa52e,	// (0x0002951b) main_notes_pane_ParamLimits

0xa968,	// (0x00029955) main_welc_pane

0x9c5e,	// (0x00028c4b) main_welc_body_pane_ParamLimits

0x9c5e,	// (0x00028c4b) main_welc_body_pane

0x9c79,	// (0x00028c66) main_welc_opti_pane_ParamLimits

0x9c79,	// (0x00028c66) main_welc_opti_pane

0x9cba,	// (0x00028ca7) main_welc_pane_t1_ParamLimits

0x9cba,	// (0x00028ca7) main_welc_pane_t1

0x9d1c,	// (0x00028d09) main_welc_body_row_pane_ParamLimits

0x9d1c,	// (0x00028d09) main_welc_body_row_pane

0xd280,	// (0x0002c26d) main_welc_opti_row_pane_ParamLimits

0xd280,	// (0x0002c26d) main_welc_opti_row_pane

0xf01d,	// (0x0002e00a) main_welc_opti_row_pane_g1

0x9d36,	// (0x00028d23) main_welc_opti_row_pane_t1

0xf025,	// (0x0002e012) main_welc_body_row_pane_t1

0xed5b,	// (0x0002dd48) popup_notif_wgt_heading_pane

0xed75,	// (0x0002dd62) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0002dd6f) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0002dd7b) list_notif_wgt_row_pane_g2_ParamLimits

0xed9d,	// (0x0002dd8a) list_notif_wgt_row_pane_g3_ParamLimits

0xfe8a,	// (0x0002ee77) list_notif_wgt_row_pane_g_ParamLimits

0xedaa,	// (0x0002dd97) list_notif_wgt_row_pane_t1_ParamLimits

0xedc0,	// (0x0002ddad) list_notif_wgt_row_pane_t2_ParamLimits

0xedd2,	// (0x0002ddbf) list_notif_wgt_row_pane_t3_ParamLimits

0xfe91,	// (0x0002ee7e) list_notif_wgt_row_pane_t_ParamLimits

0x960f,	// (0x000285fc) listrow_wgtman_pane_g1_ParamLimits

0x961c,	// (0x00028609) listrow_wgtman_pane_g2_ParamLimits

0xfeba,	// (0x0002eea7) listrow_wgtman_pane_g_ParamLimits

0x963a,	// (0x00028627) listrow_wgtman_pane_t1_ParamLimits

0x9652,	// (0x0002863f) listrow_wgtman_pane_t2_ParamLimits

0xfebf,	// (0x0002eeac) listrow_wgtman_pane_t_ParamLimits

0x9678,	// (0x00028665) wait_bar_pane_cp09_ParamLimits

0x9dbc,	// (0x00028da9) bg_popup_heading_pane_cp02

0xf034,	// (0x0002e021) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x0002e029) popup_notif_wgt_heading_pane_t1

0x9dbc,	// (0x00028da9) main_vids_pane

0x9dbc,	// (0x00028da9) vids_listscroll_pane

0x9d45,	// (0x00028d32) scroll_pane_cp040

0x9dbc,	// (0x00028da9) vids_list_pane

0x9d50,	// (0x00028d3d) vids_list_double_pane_ParamLimits

0x9d50,	// (0x00028d3d) vids_list_double_pane

0x9d64,	// (0x00028d51) vids_list_double_pane_g1

0x9d6d,	// (0x00028d5a) vids_list_double_pane_t1

0x9d7d,	// (0x00028d6a) vids_list_double_pane_t2

0x0001,

0xff4c,	// (0x0002ef39) vids_list_double_pane_t

0x1123,	// (0x00020110) main_ncimui_pane_ParamLimits

0x7e01,	// (0x00026dee) main_ncimui_pane_g1_ParamLimits

0x7e0f,	// (0x00026dfc) main_ncimui_pane_g2_ParamLimits

0x7e0f,	// (0x00026dfc) main_ncimui_pane_g2

0x0001,

0xfbcc,	// (0x0002ebb9) main_ncimui_pane_g_ParamLimits

0xfbcc,	// (0x0002ebb9) main_ncimui_pane_g

0x9c94,	// (0x00028c81) main_welc_pane_g1_ParamLimits

0x9c94,	// (0x00028c81) main_welc_pane_g1

0x9ca0,	// (0x00028c8d) main_welc_pane_g2_ParamLimits

0x9ca0,	// (0x00028c8d) main_welc_pane_g2

0x0002,

0xff3e,	// (0x0002ef2b) main_welc_pane_g_ParamLimits

0xff3e,	// (0x0002ef2b) main_welc_pane_g

0xa469,	// (0x00029456) listscroll_mce_pane_ParamLimits

0xb13d,	// (0x0002a12a) wait_bar_pane_cp10

0xc59e,	// (0x0002b58b) main_cale_day_pane_ParamLimits

0xc59e,	// (0x0002b58b) main_cale_week_pane_ParamLimits

0xa469,	// (0x00029456) main_messa_pane_ParamLimits

0x62d3,	// (0x000252c0) main_clock2_btn_pane_ParamLimits

0x62d3,	// (0x000252c0) main_clock2_btn_pane

0xcd9d,	// (0x0002bd8a) main_clock2_btn_pane_cp01_ParamLimits

0xcd9d,	// (0x0002bd8a) main_clock2_btn_pane_cp01

0xe85f,	// (0x0002d84c) list_cale_mrui_pane_ParamLimits

0xee08,	// (0x0002ddf5) main_cf0_pane_g2

0x0001,

0xfe98,	// (0x0002ee85) main_cf0_pane_g

0x9863,	// (0x00028850) area_left_week_number_pane_ParamLimits

0x9876,	// (0x00028863) area_top_day_name_pane_ParamLimits

0x9884,	// (0x00028871) frame_month_view_pane_ParamLimits

0xeebc,	// (0x0002dea9) grid_month_view_pane_ParamLimits

0xeeca,	// (0x0002deb7) frm_month_g1_ParamLimits

0x9902,	// (0x000288ef) frm_month_g2_ParamLimits

0x9913,	// (0x00028900) frm_month_g3_ParamLimits

0x9924,	// (0x00028911) frm_month_g4_ParamLimits

0x9935,	// (0x00028922) frm_month_g5_ParamLimits

0x9946,	// (0x00028933) frm_month_g6_ParamLimits

0x9959,	// (0x00028946) frm_month_g7_ParamLimits

0xeed7,	// (0x0002dec4) frm_month_g8_ParamLimits

0x996c,	// (0x00028959) frm_month_g9_ParamLimits

0x9979,	// (0x00028966) frm_month_g10_ParamLimits

0x9986,	// (0x00028973) frm_month_g11_ParamLimits

0x9993,	// (0x00028980) frm_month_g12_ParamLimits

0x99a0,	// (0x0002898d) frm_month_g13_ParamLimits

0x99af,	// (0x0002899c) frm_month_g14_ParamLimits

0x99be,	// (0x000289ab) frm_month_g15_ParamLimits

0x99cd,	// (0x000289ba) frm_month_g16_ParamLimits

0xfee9,	// (0x0002eed6) frm_month_g_ParamLimits

0xeee4,	// (0x0002ded1) cell_top_day_name_pane_t1_ParamLimits

0x99dc,	// (0x000289c9) cell_area_left_week_number_pane_g1_ParamLimits

0x99eb,	// (0x000289d8) cell_area_left_week_number_pane_t1_ParamLimits

0xcc09,	// (0x0002bbf6) cell_month_view_pane_g1_ParamLimits

0x9a01,	// (0x000289ee) cell_month_view_pane_t1_ParamLimits

0xa461,	// (0x0002944e) main_clock2_btn_pane_g1

0xf04a,	// (0x0002e037) main_clock2_btn_pane_t1

0xa968,	// (0x00029955) listscroll_cmail_pane_ParamLimits

0xe3fa,	// (0x0002d3e7) main_sp_fs_email_pane_g1_ParamLimits

0xe406,	// (0x0002d3f3) main_sp_fs_email_pane_g2_ParamLimits

0xfccb,	// (0x0002ecb8) main_sp_fs_email_pane_g_ParamLimits

0xea1e,	// (0x0002da0b) list_recal_day_pane_ParamLimits

0xea2f,	// (0x0002da1c) mian_recal_day_pane_t1

0x8a2f,	// (0x00027a1c) list_single_dyc_row_text_pane_t4_ParamLimits

0x8a2f,	// (0x00027a1c) list_single_dyc_row_text_pane_t4

0x8a6e,	// (0x00027a5b) list_single_dyc_row_text_pane_t5_ParamLimits

0x8a6e,	// (0x00027a5b) list_single_dyc_row_text_pane_t5

0xe4b0,	// (0x0002d49d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4b0,	// (0x0002d49d) list_single_dyc_row_text_pane_t6

0x4273,	// (0x00023260) aid_mgn_list_cale_time_pane

0x1123,	// (0x00020110) main_gallery2_pane_ParamLimits

0xcdb1,	// (0x0002bd9e) main_clock2_pane_cp01_t1

0xcdbf,	// (0x0002bdac) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0002e796) main_clock2_pane_cp01_t

0x2ada,	// (0x00021ac7) cale_week_scroll_pane_g16_ParamLimits

0x2ada,	// (0x00021ac7) cale_week_scroll_pane_g16

0xa6d6,	// (0x000296c3) vorec_slider_pane

0xefd6,	// (0x0002dfc3) vidtel_button_pane_t1_ParamLimits

0x9272,	// (0x0002825f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9272,	// (0x0002825f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9281,	// (0x0002826e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9281,	// (0x0002826e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe46,	// (0x0002ee33) main_fs_bigclock_clock_pane_g_ParamLimits

0x9291,	// (0x0002827e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x92a6,	// (0x00028293) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe4f,	// (0x0002ee3c) main_fs_bigclock_clock_pane_t_ParamLimits

0x5b29,	// (0x00024b16) main_mup3_lyrics_pane_ParamLimits

0x5b29,	// (0x00024b16) main_mup3_lyrics_pane

0x9d8d,	// (0x00028d7a) main_mup3_lyrics_pane_t1_ParamLimits

0x9d8d,	// (0x00028d7a) main_mup3_lyrics_pane_t1

0x16e0,	// (0x000206cd) aid_main_mp4_pane_t1_area

0x16ea,	// (0x000206d7) aid_main_mp4_pane_t2_area

0x17f7,	// (0x000207e4) main_mp4_pane_g7_ParamLimits

0x17f7,	// (0x000207e4) main_mp4_pane_g7

0x1803,	// (0x000207f0) main_mp4_pane_g8_ParamLimits

0x1803,	// (0x000207f0) main_mp4_pane_g8

0x6883,	// (0x00025870) aid_call6_pane_g1_size

0x9b8d,	// (0x00028b7a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b8d,	// (0x00028b7a) list_double_large_graphic_phob2_other_pane

0x9db4,	// (0x00028da1) list_double_large_graphic_phob2_other_pane_g1

0x9dbc,	// (0x00028da9) list_highlight_pane_cp026

0xa968,	// (0x00029955) main_welc_pane_ParamLimits

0x8763,	// (0x00027750) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8763,	// (0x00027750) main_sp_fs_ctrlbar_pane_g3

0x877d,	// (0x0002776a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x877d,	// (0x0002776a) main_sp_fs_ctrlbar_pane_g4

0x87af,	// (0x0002779c) toolbar2_fixed_button_pane_cp01

0x87ba,	// (0x000277a7) toolbar2_fixed_button_pane_cp02

0x87c7,	// (0x000277b4) toolbar2_fixed_button_pane_cp03

0x9c4f,	// (0x00028c3c) list_welc_entry_pane_ParamLimits

0x9c4f,	// (0x00028c3c) list_welc_entry_pane

0x9cae,	// (0x00028c9b) main_welc_pane_g3_ParamLimits

0x9cae,	// (0x00028c9b) main_welc_pane_g3

0x9cd8,	// (0x00028cc5) main_welc_pane_t2_ParamLimits

0x9cd8,	// (0x00028cc5) main_welc_pane_t2

0x9cec,	// (0x00028cd9) main_welc_pane_t3_ParamLimits

0x9cec,	// (0x00028cd9) main_welc_pane_t3

0x0002,

0xff45,	// (0x0002ef32) main_welc_pane_t_ParamLimits

0xff45,	// (0x0002ef32) main_welc_pane_t

0x9d00,	// (0x00028ced) welc_button_pane_ParamLimits

0x9d00,	// (0x00028ced) welc_button_pane

0x9d0e,	// (0x00028cfb) welc_service_logo_pane_ParamLimits

0x9d0e,	// (0x00028cfb) welc_service_logo_pane

0xf058,	// (0x0002e045) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x0002e045) list_single_welc_entry_pane

0xf06b,	// (0x0002e058) list_single_welc_entry_pane_g1

0xf073,	// (0x0002e060) list_single_welc_entry_pane_t1

0xf081,	// (0x0002e06e) list_single_welc_entry_pane_t2

0x0001,

0x09b5,	// (0x0001f9a2) list_single_welc_entry_pane_t

0x9dbc,	// (0x00028da9) bg_button_pane_cp035

0xf08f,	// (0x0002e07c) welc_button_pane_t1

0xf09d,	// (0x0002e08a) welc_service_logo_pane_g1

0xf0a6,	// (0x0002e093) welc_service_logo_pane_g2

0x0001,

0x09ba,	// (0x0001f9a7) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
