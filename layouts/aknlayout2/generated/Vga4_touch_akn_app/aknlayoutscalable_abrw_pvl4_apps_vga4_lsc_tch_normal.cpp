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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002f4f2 };

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
0x1361,	// (0x00030853) Screen

0x136d,	// (0x0003085f) application_window

0x139d,	// (0x0003088f) area_bottom_pane_ParamLimits

0x139d,	// (0x0003088f) area_bottom_pane

0xfa7c,	// (0x0002ef6e) area_top_pane_ParamLimits

0xfa7c,	// (0x0002ef6e) area_top_pane

0x13ff,	// (0x000308f1) call_video_uplink_pane_ParamLimits

0x13ff,	// (0x000308f1) call_video_uplink_pane

0xfb0a,	// (0x0002effc) main_pane_ParamLimits

0xfb0a,	// (0x0002effc) main_pane

0xc5b8,	// (0x0003baaa) context_pane

0x4776,	// (0x00033c68) navi_pane

0x47aa,	// (0x00033c9c) popup_cale_events_window_ParamLimits

0x47aa,	// (0x00033c9c) popup_cale_events_window

0xc5cb,	// (0x0003babd) popup_mup_playback_window

0x47c2,	// (0x00033cb4) signal_pane

0xa52e,	// (0x00039a20) main_browser_pane

0xa6df,	// (0x00039bd1) main_burst_pane

0xff28,	// (0x0002f41a) main_calc_pane

0xc59e,	// (0x0003ba90) main_cale_day_pane

0xff3c,	// (0x0002f42e) main_cale_month_pane

0xc59e,	// (0x0003ba90) main_cale_week_pane

0xa6df,	// (0x00039bd1) main_call_pane

0xa20e,	// (0x00039700) main_call_poc_pane

0xa6df,	// (0x00039bd1) main_camera_pane

0xa6df,	// (0x00039bd1) main_chi_dic_pane

0xaecf,	// (0x0003a3c1) main_clock_pane

0xa20e,	// (0x00039700) main_fmradio_pane

0xa6df,	// (0x00039bd1) main_graph_messa_pane

0xa20e,	// (0x00039700) main_help_pane

0xa52e,	// (0x00039a20) main_im_pane

0xa469,	// (0x0003995b) main_image_pane_ParamLimits

0xa469,	// (0x0003995b) main_image_pane

0xa20e,	// (0x00039700) main_location2_pane

0xa6df,	// (0x00039bd1) main_location_pane

0xa469,	// (0x0003995b) main_messa_pane

0xa20e,	// (0x00039700) main_mp2_pane

0xa6df,	// (0x00039bd1) main_mp_pane

0xa20e,	// (0x00039700) main_msg_pane

0xa20e,	// (0x00039700) main_mup_eq_pane

0xa20e,	// (0x00039700) main_mup_pane

0xa52e,	// (0x00039a20) main_notes_pane

0xa20e,	// (0x00039700) main_pec_pane

0xa20e,	// (0x00039700) main_phob_pane

0xa20e,	// (0x00039700) main_pinb_pane

0xa20e,	// (0x00039700) main_postcard_pane

0xa20e,	// (0x00039700) main_qdial_pane

0xa6df,	// (0x00039bd1) main_skin_pane

0xa20e,	// (0x00039700) main_smil2_pane

0xa6df,	// (0x00039bd1) main_smil_pane

0xa6df,	// (0x00039bd1) main_video_pane

0xa6df,	// (0x00039bd1) main_video_tele_pane

0xa469,	// (0x0003995b) main_viewer_pane_ParamLimits

0xa469,	// (0x0003995b) main_viewer_pane

0xa6df,	// (0x00039bd1) main_vorec_pane

0xff8e,	// (0x0002f480) popup_blid_sat_info_window_ParamLimits

0xff8e,	// (0x0002f480) popup_blid_sat_info_window

0xfff2,	// (0x0002f4e4) popup_dyc_status_message_window_ParamLimits

0xfff2,	// (0x0002f4e4) popup_dyc_status_message_window

0x000c,	// (0x0002f4fe) popup_grid_large_graphic_window_ParamLimits

0x000c,	// (0x0002f4fe) popup_grid_large_graphic_window

0x00ce,	// (0x0002f5c0) popup_loc_request_window_ParamLimits

0x00ce,	// (0x0002f5c0) popup_loc_request_window

0x01f4,	// (0x0002f6e6) popup_wml_address_window_ParamLimits

0x01f4,	// (0x0002f6e6) popup_wml_address_window

0x4566,	// (0x00033a58) call_muted_g1

0x41f7,	// (0x000336e9) popup_call_audio_conf_window_ParamLimits

0x41f7,	// (0x000336e9) popup_call_audio_conf_window

0x4576,	// (0x00033a68) popup_call_audio_first_window_ParamLimits

0x4576,	// (0x00033a68) popup_call_audio_first_window

0x45ec,	// (0x00033ade) popup_call_audio_in_window_ParamLimits

0x45ec,	// (0x00033ade) popup_call_audio_in_window

0x4628,	// (0x00033b1a) popup_call_audio_out_window_ParamLimits

0x4628,	// (0x00033b1a) popup_call_audio_out_window

0x4662,	// (0x00033b54) popup_call_audio_second_window_ParamLimits

0x4662,	// (0x00033b54) popup_call_audio_second_window

0x46b8,	// (0x00033baa) popup_call_audio_wait_window_ParamLimits

0x46b8,	// (0x00033baa) popup_call_audio_wait_window

0x46ed,	// (0x00033bdf) popup_number_entry_window_ParamLimits

0x46ed,	// (0x00033bdf) popup_number_entry_window

0x9dc6,	// (0x000392b8) bg_popup_call_pane_cp05_ParamLimits

0x9dc6,	// (0x000392b8) bg_popup_call_pane_cp05

0x9de6,	// (0x000392d8) popup_number_entry_window_t1

0x9df9,	// (0x000392eb) popup_number_entry_window_t2

0x9e0b,	// (0x000392fd) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0003e5a1) popup_number_entry_window_t

0x9e52,	// (0x00039344) text_title_cp2

0x9e65,	// (0x00039357) bg_popup_call_pane_cp_ParamLimits

0x9e65,	// (0x00039357) bg_popup_call_pane_cp

0x9e73,	// (0x00039365) call_thumbnail_pane

0x9e7b,	// (0x0003936d) popup_call_audio_in_window_g1_ParamLimits

0x9e7b,	// (0x0003936d) popup_call_audio_in_window_g1

0x9e87,	// (0x00039379) popup_call_audio_in_window_g2_ParamLimits

0x9e87,	// (0x00039379) popup_call_audio_in_window_g2

0x9e93,	// (0x00039385) popup_call_audio_in_window_g3_ParamLimits

0x9e93,	// (0x00039385) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0003e5aa) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0003e5aa) popup_call_audio_in_window_g

0x9e9f,	// (0x00039391) popup_call_audio_in_window_t1_ParamLimits

0x9e9f,	// (0x00039391) popup_call_audio_in_window_t1

0x9ebb,	// (0x000393ad) popup_call_audio_in_window_t2_ParamLimits

0x9ebb,	// (0x000393ad) popup_call_audio_in_window_t2

0x9ed7,	// (0x000393c9) popup_call_audio_in_window_t3_ParamLimits

0x9ed7,	// (0x000393c9) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0003e5b1) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0003e5b1) popup_call_audio_in_window_t

0x9e65,	// (0x00039357) bg_popup_call_pane_cp01_ParamLimits

0x9e65,	// (0x00039357) bg_popup_call_pane_cp01

0x9e73,	// (0x00039365) call_thumbnail_pane_cp02

0x9eea,	// (0x000393dc) call_type_pane_cp022

0x9ef2,	// (0x000393e4) popup_call_audio_out_window_g1_ParamLimits

0x9ef2,	// (0x000393e4) popup_call_audio_out_window_g1

0x9f04,	// (0x000393f6) popup_call_audio_out_window_g2_ParamLimits

0x9f04,	// (0x000393f6) popup_call_audio_out_window_g2

0x9f10,	// (0x00039402) popup_call_audio_out_window_g3_ParamLimits

0x9f10,	// (0x00039402) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0003e5b8) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0003e5b8) popup_call_audio_out_window_g

0x9f22,	// (0x00039414) popup_call_audio_out_window_t1_ParamLimits

0x9f22,	// (0x00039414) popup_call_audio_out_window_t1

0x9f3a,	// (0x0003942c) popup_call_audio_out_window_t2_ParamLimits

0x9f3a,	// (0x0003942c) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0003e5bf) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0003e5bf) popup_call_audio_out_window_t

0x9f4f,	// (0x00039441) bg_popup_call_pane_ParamLimits

0x9f4f,	// (0x00039441) bg_popup_call_pane

0x1441,	// (0x00030933) call_thumbnail_pane_cp_ParamLimits

0x1441,	// (0x00030933) call_thumbnail_pane_cp

0x9fd3,	// (0x000394c5) call_type_pane_cp01_ParamLimits

0x9fd3,	// (0x000394c5) call_type_pane_cp01

0xa017,	// (0x00039509) popup_call_audio_first_window_g1_ParamLimits

0xa017,	// (0x00039509) popup_call_audio_first_window_g1

0xa063,	// (0x00039555) popup_call_audio_first_window_g2_ParamLimits

0xa063,	// (0x00039555) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0003e5c4) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0003e5c4) popup_call_audio_first_window_g

0xa0a7,	// (0x00039599) popup_call_audio_first_window_t1_ParamLimits

0xa0a7,	// (0x00039599) popup_call_audio_first_window_t1

0xa153,	// (0x00039645) popup_call_audio_first_window_t4_ParamLimits

0xa153,	// (0x00039645) popup_call_audio_first_window_t4

0xa1df,	// (0x000396d1) popup_call_audio_first_window_t5_ParamLimits

0xa1df,	// (0x000396d1) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0003e5c9) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0003e5c9) popup_call_audio_first_window_t

0xa20e,	// (0x00039700) bg_popup_call_pane_cp02

0xa218,	// (0x0003970a) call_type_pane_cp023

0xa220,	// (0x00039712) popup_call_audio_wait_window_g1

0xa228,	// (0x0003971a) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0003e5d0) popup_call_audio_wait_window_g

0xa230,	// (0x00039722) popup_call_audio_wait_window_t3

0xa23e,	// (0x00039730) bg_popup_call_pane_cp03_ParamLimits

0xa23e,	// (0x00039730) bg_popup_call_pane_cp03

0xa29e,	// (0x00039790) call_thumbnail_pane_cp011_ParamLimits

0xa29e,	// (0x00039790) call_thumbnail_pane_cp011

0xa2aa,	// (0x0003979c) call_type_pane_cp034_ParamLimits

0xa2aa,	// (0x0003979c) call_type_pane_cp034

0xa2e6,	// (0x000397d8) popup_call_audio_second_window_g1_ParamLimits

0xa2e6,	// (0x000397d8) popup_call_audio_second_window_g1

0xa322,	// (0x00039814) popup_call_audio_second_window_g2_ParamLimits

0xa322,	// (0x00039814) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0003e5d5) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0003e5d5) popup_call_audio_second_window_g

0xa35e,	// (0x00039850) popup_call_audio_second_window_t1_ParamLimits

0xa35e,	// (0x00039850) popup_call_audio_second_window_t1

0xa3df,	// (0x000398d1) popup_call_audio_second_window_t2_ParamLimits

0xa3df,	// (0x000398d1) popup_call_audio_second_window_t2

0xa415,	// (0x00039907) popup_call_audio_second_window_t3_ParamLimits

0xa415,	// (0x00039907) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0003e5da) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0003e5da) popup_call_audio_second_window_t

0xa20e,	// (0x00039700) bg_popup_call_pane_cp04

0xa44b,	// (0x0003993d) list_conf_pane

0xa453,	// (0x00039945) popup_call_audio_conf_window_t1

0xa461,	// (0x00039953) call_thumbnail_pane_g1

0xa469,	// (0x0003995b) bg_pinb_pane_ParamLimits

0xa469,	// (0x0003995b) bg_pinb_pane

0xa477,	// (0x00039969) find_pinb_pane

0xa480,	// (0x00039972) listscroll_pinb_pane_ParamLimits

0xa480,	// (0x00039972) listscroll_pinb_pane

0xa48f,	// (0x00039981) pinb_bg_pane_g1

0x1465,	// (0x00030957) pinb_bg_pane_g2

0x1471,	// (0x00030963) pinb_bg_pane_g3

0x147d,	// (0x0003096f) pinb_bg_pane_g4

0x1489,	// (0x0003097b) pinb_bg_pane_g5

0x1495,	// (0x00030987) pinb_bg_pane_g6

0x14a0,	// (0x00030992) pinb_bg_pane_g7

0x14ab,	// (0x0003099d) pinb_bg_pane_g8

0x14b6,	// (0x000309a8) pinb_bg_pane_g9

0x14c0,	// (0x000309b2) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0003e5e1) pinb_bg_pane_g

0x14dd,	// (0x000309cf) grid_pinb_pane

0x14e8,	// (0x000309da) list_pinb_pane

0x14f3,	// (0x000309e5) scroll_pane_cp01_ParamLimits

0x14f3,	// (0x000309e5) scroll_pane_cp01

0xa499,	// (0x0003998b) find_pinb_pane_g1_ParamLimits

0xa499,	// (0x0003998b) find_pinb_pane_g1

0xa4b1,	// (0x000399a3) find_pinb_pane_t1

0xa4c3,	// (0x000399b5) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0003e5fb) find_pinb_pane_t

0xa4d8,	// (0x000399ca) input_focus_pane_cp01_ParamLimits

0xa4d8,	// (0x000399ca) input_focus_pane_cp01

0x1505,	// (0x000309f7) cell_pinb_pane_ParamLimits

0x1505,	// (0x000309f7) cell_pinb_pane

0x1527,	// (0x00030a19) cell_pinb_pane_g1_ParamLimits

0x1527,	// (0x00030a19) cell_pinb_pane_g1

0x153b,	// (0x00030a2d) cell_pinb_pane_g2_ParamLimits

0x153b,	// (0x00030a2d) cell_pinb_pane_g2

0xa4e4,	// (0x000399d6) cell_pinb_pane_g3_ParamLimits

0xa4e4,	// (0x000399d6) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0003e600) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0003e600) cell_pinb_pane_g

0xa20e,	// (0x00039700) grid_highlight_pane_cp01

0x1547,	// (0x00030a39) list_pinb_item_pane_ParamLimits

0x1547,	// (0x00030a39) list_pinb_item_pane

0xa20e,	// (0x00039700) list_highlight_pane_cp02

0x155a,	// (0x00030a4c) list_pinb_item_pane_g1_ParamLimits

0x155a,	// (0x00030a4c) list_pinb_item_pane_g1

0x1567,	// (0x00030a59) list_pinb_item_pane_g2_ParamLimits

0x1567,	// (0x00030a59) list_pinb_item_pane_g2

0x1573,	// (0x00030a65) list_pinb_item_pane_g3_ParamLimits

0x1573,	// (0x00030a65) list_pinb_item_pane_g3

0x1584,	// (0x00030a76) list_pinb_item_pane_g4_ParamLimits

0x1584,	// (0x00030a76) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0003e607) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0003e607) list_pinb_item_pane_g

0x1590,	// (0x00030a82) list_pinb_item_pane_t1_ParamLimits

0x1590,	// (0x00030a82) list_pinb_item_pane_t1

0xfca7,	// (0x0002f199) calc_display_pane

0xfccc,	// (0x0002f1be) calc_paper_pane

0xfcef,	// (0x0002f1e1) grid_calc_pane

0xa20e,	// (0x00039700) bg_list_pane_cp01

0x15af,	// (0x00030aa1) clock_g1

0x15b7,	// (0x00030aa9) clock_g2

0x0001,

0xf11e,	// (0x0003e610) clock_g

0x15bf,	// (0x00030ab1) clock_t1_ParamLimits

0x15bf,	// (0x00030ab1) clock_t1

0x15d4,	// (0x00030ac6) clock_t2_ParamLimits

0x15d4,	// (0x00030ac6) clock_t2

0x15e6,	// (0x00030ad8) clock_t3_ParamLimits

0x15e6,	// (0x00030ad8) clock_t3

0x15f8,	// (0x00030aea) clock_t4_ParamLimits

0x15f8,	// (0x00030aea) clock_t4

0x160a,	// (0x00030afc) clock_t5_ParamLimits

0x160a,	// (0x00030afc) clock_t5

0x161f,	// (0x00030b11) clock_t6_ParamLimits

0x161f,	// (0x00030b11) clock_t6

0x1631,	// (0x00030b23) clock_t7_ParamLimits

0x1631,	// (0x00030b23) clock_t7

0x1643,	// (0x00030b35) clock_t8_ParamLimits

0x1643,	// (0x00030b35) clock_t8

0x1657,	// (0x00030b49) clock_t9_ParamLimits

0x1657,	// (0x00030b49) clock_t9

0x0008,

0xf123,	// (0x0003e615) clock_t_ParamLimits

0xf123,	// (0x0003e615) clock_t

0xa4f0,	// (0x000399e2) popup_clock_analogue_window_cp02

0xa4f0,	// (0x000399e2) popup_clock_digital_window_cp01

0xa4f8,	// (0x000399ea) listscroll_help_pane

0xa20e,	// (0x00039700) phob_pre_status_pane

0xa502,	// (0x000399f4) grid_qdial_pane

0xa469,	// (0x0003995b) listscroll_mce_pane

0xa469,	// (0x0003995b) bg_notes_pane

0xa50c,	// (0x000399fe) list_notes_pane

0x166d,	// (0x00030b5f) scroll_pane_cp06

0xa51a,	// (0x00039a0c) bg_calc_paper_pane

0x1681,	// (0x00030b73) list_calc_pane

0xa52e,	// (0x00039a20) bg_calc_display_pane

0xfd1d,	// (0x0002f20f) calc_display_pane_t1

0xfd2f,	// (0x0002f221) calc_display_pane_t2

0x169b,	// (0x00030b8d) calc_display_pane_t3

0x0002,

0xf136,	// (0x0003e628) calc_display_pane_t

0xfd41,	// (0x0002f233) cell_calc_pane_ParamLimits

0xfd41,	// (0x0002f233) cell_calc_pane

0xa53a,	// (0x00039a2c) bg_calc_paper_pane_g1

0xa546,	// (0x00039a38) bg_calc_paper_pane_g2

0xa552,	// (0x00039a44) bg_calc_paper_pane_g3

0xa55e,	// (0x00039a50) bg_calc_paper_pane_g4

0xa56a,	// (0x00039a5c) bg_calc_paper_pane_g5

0x16ad,	// (0x00030b9f) bg_calc_paper_pane_g6

0x16bb,	// (0x00030bad) bg_calc_paper_pane_g7

0x16c9,	// (0x00030bbb) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0003e62f) bg_calc_paper_pane_g

0x16dc,	// (0x00030bce) calc_bg_paper_pane_g9

0x16ef,	// (0x00030be1) list_calc_item_pane_ParamLimits

0x16ef,	// (0x00030be1) list_calc_item_pane

0xa576,	// (0x00039a68) list_calc_item_pane_g1

0x1707,	// (0x00030bf9) list_calc_item_pane_t1_ParamLimits

0x1707,	// (0x00030bf9) list_calc_item_pane_t1

0xfd7c,	// (0x0002f26e) list_calc_item_pane_t2_ParamLimits

0xfd7c,	// (0x0002f26e) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0003e640) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0003e640) list_calc_item_pane_t

0xa583,	// (0x00039a75) cell_calc_pane_g1

0xa58d,	// (0x00039a7f) grid_highlight_pane_cp02

0x1719,	// (0x00030c0b) bg_calc_display_pane_g1

0xfdae,	// (0x0002f2a0) bg_calc_display_pane_g2

0xa5af,	// (0x00039aa1) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0003e64a) bg_calc_display_pane_g

0xfdb8,	// (0x0002f2aa) cell_qdial_pane_ParamLimits

0xfdb8,	// (0x0002f2aa) cell_qdial_pane

0x1722,	// (0x00030c14) cell_qdial_pane_g1_ParamLimits

0x1722,	// (0x00030c14) cell_qdial_pane_g1

0x1738,	// (0x00030c2a) cell_qdial_pane_g2_ParamLimits

0x1738,	// (0x00030c2a) cell_qdial_pane_g2

0xa5b8,	// (0x00039aaa) cell_qdial_pane_g3_ParamLimits

0xa5b8,	// (0x00039aaa) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0003e651) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0003e651) cell_qdial_pane_g

0x175f,	// (0x00030c51) cell_qdial_pane_t1_ParamLimits

0x175f,	// (0x00030c51) cell_qdial_pane_t1

0x1777,	// (0x00030c69) cell_qdial_pane_t2_ParamLimits

0x1777,	// (0x00030c69) cell_qdial_pane_t2

0x178a,	// (0x00030c7c) cell_qdial_pane_t3_ParamLimits

0x178a,	// (0x00030c7c) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0003e65a) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0003e65a) cell_qdial_pane_t

0xa20e,	// (0x00039700) grid_highlight_pane_cp04

0xa5c4,	// (0x00039ab6) thumbnail_qdial_pane_ParamLimits

0xa5c4,	// (0x00039ab6) thumbnail_qdial_pane

0xa620,	// (0x00039b12) list_help_pane

0xa629,	// (0x00039b1b) scroll_pane_cp02

0x179d,	// (0x00030c8f) help_list_pane_t1_ParamLimits

0x179d,	// (0x00030c8f) help_list_pane_t1

0x17c1,	// (0x00030cb3) bg_notes_pane_g2

0x17c9,	// (0x00030cbb) bg_notes_pane_g3

0x17d1,	// (0x00030cc3) notes_bg_pane_g1

0x17d9,	// (0x00030ccb) notes_bg_pane_g4

0x17e1,	// (0x00030cd3) notes_bg_pane_g5

0x17e9,	// (0x00030cdb) notes_bg_pane_g6

0x17f1,	// (0x00030ce3) notes_bg_pane_g7

0x17f9,	// (0x00030ceb) notes_bg_pane_g8

0x1801,	// (0x00030cf3) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0003e678) notes_bg_pane_g

0x1809,	// (0x00030cfb) list_notes_text_pane_ParamLimits

0x1809,	// (0x00030cfb) list_notes_text_pane

0xa632,	// (0x00039b24) list_notes_text_pane_g1

0x1820,	// (0x00030d12) list_notes_text_pane_t1

0x182e,	// (0x00030d20) listscroll_cale_week_pane

0x1858,	// (0x00030d4a) bg_cale_heading_pane

0x187c,	// (0x00030d6e) bg_cale_pane_cp01

0x1899,	// (0x00030d8b) cale_week_corner_pane

0x18b8,	// (0x00030daa) cale_week_day_heading_pane

0x18e1,	// (0x00030dd3) cale_week_scroll_pane_g1

0x1900,	// (0x00030df2) cale_week_scroll_pane_g2

0x1918,	// (0x00030e0a) cale_week_scroll_pane_g3

0x1930,	// (0x00030e22) cale_week_scroll_pane_g4

0x1948,	// (0x00030e3a) cale_week_scroll_pane_g5

0x1968,	// (0x00030e5a) cale_week_scroll_pane_g6

0x1988,	// (0x00030e7a) cale_week_scroll_pane_g7

0x19ac,	// (0x00030e9e) cale_week_scroll_pane_g8

0x19d0,	// (0x00030ec2) cale_week_scroll_pane_g9

0x19e8,	// (0x00030eda) cale_week_scroll_pane_g10

0x1a00,	// (0x00030ef2) cale_week_scroll_pane_g11

0x1a18,	// (0x00030f0a) cale_week_scroll_pane_g12

0x1a3c,	// (0x00030f2e) cale_week_scroll_pane_g13

0x1a3c,	// (0x00030f2e) cale_week_scroll_pane_g14

0x1a3c,	// (0x00030f2e) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0003e687) cale_week_scroll_pane_g

0x1a84,	// (0x00030f76) cale_week_time_pane

0x1aa8,	// (0x00030f9a) grid_cale_week_pane

0xa667,	// (0x00039b59) scroll_pane_cp08

0x1ada,	// (0x00030fcc) cell_cale_week_pane_ParamLimits

0x1ada,	// (0x00030fcc) cell_cale_week_pane

0x1b76,	// (0x00031068) cale_week_day_heading_pane_t1

0x1ba0,	// (0x00031092) cale_week_day_heading_pane_t2

0x1bcf,	// (0x000310c1) cale_week_day_heading_pane_t3

0x1bfe,	// (0x000310f0) cale_week_day_heading_pane_t4

0x1c2d,	// (0x0003111f) cale_week_day_heading_pane_t5

0x1c60,	// (0x00031152) cale_week_day_heading_pane_t6

0x1c97,	// (0x00031189) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0003e6a8) cale_week_day_heading_pane_t

0xa684,	// (0x00039b76) bg_cale_side_pane

0xfdcc,	// (0x0002f2be) cale_week_time_pane_t1

0xfde6,	// (0x0002f2d8) cale_week_time_pane_t2

0xfe00,	// (0x0002f2f2) cale_week_time_pane_t3

0xfe1a,	// (0x0002f30c) cale_week_time_pane_t4

0xfe34,	// (0x0002f326) cale_week_time_pane_t5

0xfe4e,	// (0x0002f340) cale_week_time_pane_t6

0xfe6e,	// (0x0002f360) cale_week_time_pane_t7

0xfe94,	// (0x0002f386) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0003e6b7) cale_week_time_pane_t

0x1cc1,	// (0x000311b3) cell_cale_week_pane_g2

0x1ce5,	// (0x000311d7) cell_cale_week_pane_g3_ParamLimits

0x1ce5,	// (0x000311d7) cell_cale_week_pane_g3

0xa692,	// (0x00039b84) grid_highlight_pane_cp07

0xa69a,	// (0x00039b8c) listscroll_gms_pane

0xa6a4,	// (0x00039b96) grid_gms_pane

0xa6ad,	// (0x00039b9f) listscroll_gms_pane_g1

0xa6b5,	// (0x00039ba7) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0003e6c8) listscroll_gms_pane_g

0x1cfd,	// (0x000311ef) scroll_pane_cp010

0x1d08,	// (0x000311fa) cell_gms_pane_ParamLimits

0x1d08,	// (0x000311fa) cell_gms_pane

0x1d1f,	// (0x00031211) cell_gms_pane_g1

0xa6bd,	// (0x00039baf) cell_gms_pane_g2

0xa6c5,	// (0x00039bb7) cell_gms_pane_g3

0xa6ce,	// (0x00039bc0) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0003e6cd) cell_gms_pane_g

0xa6d7,	// (0x00039bc9) grid_highlight_pane_cp09

0x450e,	// (0x00033a00) phob_pre_status_pane_g1

0x4516,	// (0x00033a08) phob_pre_status_pane_g2

0x451e,	// (0x00033a10) phob_pre_status_pane_g3

0x4526,	// (0x00033a18) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0003eab8) phob_pre_status_pane_g

0x4536,	// (0x00033a28) phob_pre_status_pane_t1

0x4546,	// (0x00033a38) phob_pre_status_pane_t2

0x4556,	// (0x00033a48) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0003eac3) phob_pre_status_pane_t

0xa6df,	// (0x00039bd1) bg_list_pane_cp05

0x1d2f,	// (0x00031221) grid_vorec_pane

0x1d39,	// (0x0003122b) vorec_t1

0x1d47,	// (0x00031239) vorec_t2

0x1d55,	// (0x00031247) vorec_t3

0x1d63,	// (0x00031255) vorec_t4

0x133b,	// (0x0003082d) vorec_t5

0x1349,	// (0x0003083b) vorec_t6

0x0004,

0xf1e4,	// (0x0003e6d6) vorec_t

0x1357,	// (0x00030849) wait_bar_pane_cp01

0xa6e7,	// (0x00039bd9) cell_vorec_pane_ParamLimits

0xa6e7,	// (0x00039bd9) cell_vorec_pane

0x1d7f,	// (0x00031271) cell_vorec_pane_g1

0xa20e,	// (0x00039700) grid_highlight_pane_cp05

0x1d9f,	// (0x00031291) cams_zoom_pane

0x1dae,	// (0x000312a0) image_vga_pane

0x1dc8,	// (0x000312ba) main_camera_pane_g1

0x1dda,	// (0x000312cc) main_camera_pane_g2

0x1dea,	// (0x000312dc) main_camera_pane_g3

0x1dfe,	// (0x000312f0) main_camera_pane_g4

0x1e12,	// (0x00031304) main_camera_pane_g5

0x1e26,	// (0x00031318) main_camera_pane_g6

0x1e3a,	// (0x0003132c) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0003e6e1) main_camera_pane_g

0x1e4e,	// (0x00031340) main_camera_pane_t1

0x1e64,	// (0x00031356) main_camera_pane_t2

0x0001,

0xf200,	// (0x0003e6f2) main_camera_pane_t

0x1ea2,	// (0x00031394) cams_zoom_pane_cp_ParamLimits

0x1ea2,	// (0x00031394) cams_zoom_pane_cp

0x1eca,	// (0x000313bc) image_cif_pane_ParamLimits

0x1eca,	// (0x000313bc) image_cif_pane

0x1f05,	// (0x000313f7) image_subqcif_pane

0x1f0f,	// (0x00031401) main_video_pane_g1_ParamLimits

0x1f0f,	// (0x00031401) main_video_pane_g1

0x1f33,	// (0x00031425) main_video_pane_g2_ParamLimits

0x1f33,	// (0x00031425) main_video_pane_g2

0x1f69,	// (0x0003145b) main_video_pane_g3_ParamLimits

0x1f69,	// (0x0003145b) main_video_pane_g3

0x1f97,	// (0x00031489) main_video_pane_g4_ParamLimits

0x1f97,	// (0x00031489) main_video_pane_g4

0x1fc5,	// (0x000314b7) main_video_pane_g5_ParamLimits

0x1fc5,	// (0x000314b7) main_video_pane_g5

0xa708,	// (0x00039bfa) main_video_pane_g6_ParamLimits

0xa708,	// (0x00039bfa) main_video_pane_g6

0x0006,

0xf205,	// (0x0003e6f7) main_video_pane_g_ParamLimits

0xf205,	// (0x0003e6f7) main_video_pane_g

0x1fee,	// (0x000314e0) main_video_pane_t1_ParamLimits

0x1fee,	// (0x000314e0) main_video_pane_t1

0xa722,	// (0x00039c14) cams_zoom_pane_g1

0xa72b,	// (0x00039c1d) cams_zoom_pane_g2

0xa734,	// (0x00039c26) cams_zoom_pane_g3

0xa73d,	// (0x00039c2f) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0003e706) cams_zoom_pane_g

0x204b,	// (0x0003153d) grid_cams_pane

0x2065,	// (0x00031557) linegrid_cams_pane

0x2077,	// (0x00031569) cell_cams_pane_ParamLimits

0x2077,	// (0x00031569) cell_cams_pane

0xa746,	// (0x00039c38) cams_burst_image_pane

0xa74e,	// (0x00039c40) cell_cams_pane_g1

0xa20e,	// (0x00039700) grid_highlight_pane_cp03

0xa583,	// (0x00039a75) mp_bg_pane_g1

0xa20e,	// (0x00039700) bg_list_pane_cp03

0xc4c1,	// (0x0003b9b3) bg_mp_pane

0xc4c9,	// (0x0003b9bb) grid_mp_pane

0xc4d1,	// (0x0003b9c3) media_player_g1

0xc4db,	// (0x0003b9cd) media_player_t1

0xc4e9,	// (0x0003b9db) media_player_t2

0xc4f7,	// (0x0003b9e9) media_player_t3

0xc505,	// (0x0003b9f7) media_player_t4

0xc513,	// (0x0003ba05) media_player_t5

0xc521,	// (0x0003ba13) media_player_t6

0xc52f,	// (0x0003ba21) media_player_t7

0x0006,

0xf5b0,	// (0x0003eaa2) media_player_t

0xc53d,	// (0x0003ba2f) wait_bar_pane_cp02

0xf595,	// (0x0003ea87) main_usb_pane_t

0x4505,	// (0x000339f7) cell_mp_pane

0xa583,	// (0x00039a75) cell_mp_pane_g1

0xa20e,	// (0x00039700) grid_highlight_pane_cp06

0xa756,	// (0x00039c48) grid_skin_colour_pane

0xa75e,	// (0x00039c50) list_highlight_pane_cp03

0x21b0,	// (0x000316a2) skin_g1

0xa766,	// (0x00039c58) skin_t1

0xa775,	// (0x00039c67) skin_t2

0x0001,

0xf249,	// (0x0003e73b) skin_t

0x21ba,	// (0x000316ac) cell_skin_colour_pane_ParamLimits

0x21ba,	// (0x000316ac) cell_skin_colour_pane

0xa783,	// (0x00039c75) cell_skin_colour_pane_g1

0x222d,	// (0x0003171f) call_video_g1_ParamLimits

0x222d,	// (0x0003171f) call_video_g1

0x2249,	// (0x0003173b) call_video_g2_ParamLimits

0x2249,	// (0x0003173b) call_video_g2

0x0001,

0xf24e,	// (0x0003e740) call_video_g_ParamLimits

0xf24e,	// (0x0003e740) call_video_g

0x228e,	// (0x00031780) call_video_uplink_pane_cp1_ParamLimits

0x228e,	// (0x00031780) call_video_uplink_pane_cp1

0xa795,	// (0x00039c87) call_video_uplink_pane_cp2

0x232f,	// (0x00031821) video_down_crop_pane_ParamLimits

0x232f,	// (0x00031821) video_down_crop_pane

0x2418,	// (0x0003190a) video_down_pane_ParamLimits

0x2418,	// (0x0003190a) video_down_pane

0xa79d,	// (0x00039c8f) video_down_subqcif_pane_ParamLimits

0xa79d,	// (0x00039c8f) video_down_subqcif_pane

0xa7b7,	// (0x00039ca9) video_down_subqcif_pane_cp_ParamLimits

0xa7b7,	// (0x00039ca9) video_down_subqcif_pane_cp

0xa7df,	// (0x00039cd1) im_reading_pane_ParamLimits

0xa7df,	// (0x00039cd1) im_reading_pane

0x2523,	// (0x00031a15) im_writing_pane_ParamLimits

0x2523,	// (0x00031a15) im_writing_pane

0x2541,	// (0x00031a33) im_reading_pane_t1

0xa7f9,	// (0x00039ceb) list_im_pane

0xa80a,	// (0x00039cfc) scroll_pane_cp07

0x2580,	// (0x00031a72) im_writing_pane_t1_ParamLimits

0x2580,	// (0x00031a72) im_writing_pane_t1

0xa823,	// (0x00039d15) im_writing_pane_t2_ParamLimits

0xa823,	// (0x00039d15) im_writing_pane_t2

0x0001,

0xf258,	// (0x0003e74a) im_writing_pane_t_ParamLimits

0xf258,	// (0x0003e74a) im_writing_pane_t

0xa20e,	// (0x00039700) input_focus_pane_cp04

0xa20e,	// (0x00039700) input_focus_pane_cp05

0x2595,	// (0x00031a87) list_im_single_pane_ParamLimits

0x2595,	// (0x00031a87) list_im_single_pane

0x25ae,	// (0x00031aa0) list_single_im_pane_t1

0x44c5,	// (0x000339b7) blid_accuracy_pane

0x44cd,	// (0x000339bf) blid_compass_pane

0x44d7,	// (0x000339c9) main_location_t1

0x44e7,	// (0x000339d9) main_location_t2

0x44f7,	// (0x000339e9) main_location_t3

0x0002,

0xf5bf,	// (0x0003eab1) main_location_t

0xa20e,	// (0x00039700) aid_levels_location

0xa583,	// (0x00039a75) blid_accuracy_pane_g1

0xa583,	// (0x00039a75) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0003e7ac) blid_accuracy_pane_g

0xa86b,	// (0x00039d5d) wml_content_pane

0xa8a9,	// (0x00039d9b) wml_button_pane_ParamLimits

0xa8a9,	// (0x00039d9b) wml_button_pane

0x25bd,	// (0x00031aaf) wml_list_single_large_pane_ParamLimits

0x25bd,	// (0x00031aaf) wml_list_single_large_pane

0x25d6,	// (0x00031ac8) wml_list_single_medium_pane_ParamLimits

0x25d6,	// (0x00031ac8) wml_list_single_medium_pane

0x25f0,	// (0x00031ae2) wml_list_single_small_pane_ParamLimits

0x25f0,	// (0x00031ae2) wml_list_single_small_pane

0xa8bd,	// (0x00039daf) wml_selection_box_pane_ParamLimits

0xa8bd,	// (0x00039daf) wml_selection_box_pane

0xa8d0,	// (0x00039dc2) wml_list_single_pane_t1

0xa8df,	// (0x00039dd1) wml_list_single_medium_pane_t1

0xa8ee,	// (0x00039de0) wml_list_single_large_pane_t1

0xa8fd,	// (0x00039def) input_focus_pane_cp02_ParamLimits

0xa8fd,	// (0x00039def) input_focus_pane_cp02

0xa910,	// (0x00039e02) wml_selection_box_pane_g1

0xa919,	// (0x00039e0b) wml_selection_box_pane_t1_ParamLimits

0xa919,	// (0x00039e0b) wml_selection_box_pane_t1

0xa469,	// (0x0003995b) bg_wml_button_pane_ParamLimits

0xa469,	// (0x0003995b) bg_wml_button_pane

0xa931,	// (0x00039e23) wml_button_pane_g1

0xa939,	// (0x00039e2b) wml_button_pane_t1

0xa931,	// (0x00039e23) wml_button_bg_pane_g1

0xa949,	// (0x00039e3b) wml_button_bg_pane_g2

0xa951,	// (0x00039e43) wml_button_bg_pane_g3

0xa959,	// (0x00039e4b) wml_button_bg_pane_g4

0xa961,	// (0x00039e53) wml_button_bg_pane_g5

0xa969,	// (0x00039e5b) wml_button_bg_pane_g6

0xa971,	// (0x00039e63) wml_button_bg_pane_g7

0xa979,	// (0x00039e6b) wml_button_bg_pane_g8

0xa981,	// (0x00039e73) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0003e74f) wml_button_bg_pane_g

0x260f,	// (0x00031b01) bg_list_pane_cp02

0xa989,	// (0x00039e7b) mce_header_pane_ParamLimits

0xa989,	// (0x00039e7b) mce_header_pane

0xa99f,	// (0x00039e91) mce_icon_pane

0xa99f,	// (0x00039e91) mce_image_pane

0xa9a8,	// (0x00039e9a) mce_text_pane_ParamLimits

0xa9a8,	// (0x00039e9a) mce_text_pane

0x2619,	// (0x00031b0b) scroll_pane_cp03

0xa8a1,	// (0x00039d93) scroll_pane_cp04

0xa9bb,	// (0x00039ead) scroll_pane_cp05_ParamLimits

0xa9bb,	// (0x00039ead) scroll_pane_cp05

0x2623,	// (0x00031b15) mce_header_field_pane_ParamLimits

0x2623,	// (0x00031b15) mce_header_field_pane

0x263c,	// (0x00031b2e) mce_header_field_pane_2_ParamLimits

0x263c,	// (0x00031b2e) mce_header_field_pane_2

0x2652,	// (0x00031b44) mce_header_field_pane_3

0x265a,	// (0x00031b4c) list_single_mce_message_pane_ParamLimits

0x265a,	// (0x00031b4c) list_single_mce_message_pane

0x2676,	// (0x00031b68) list_single_mce_smart_pane_ParamLimits

0x2676,	// (0x00031b68) list_single_mce_smart_pane

0xa9c7,	// (0x00039eb9) input_focus_pane_cp03

0xa9d0,	// (0x00039ec2) list_header_data_pane

0x269d,	// (0x00031b8f) mce_header_field_pane_t1

0x26ad,	// (0x00031b9f) list_single_mce_header_pane_ParamLimits

0x26ad,	// (0x00031b9f) list_single_mce_header_pane

0xa9d8,	// (0x00039eca) list_single_mce_header_pane_t1

0xa9e7,	// (0x00039ed9) list_single_mce_message_pane_g1

0xa9ef,	// (0x00039ee1) list_single_mce_message_pane_t1

0x26e7,	// (0x00031bd9) bg_cale_heading_pane_cp01_ParamLimits

0x26e7,	// (0x00031bd9) bg_cale_heading_pane_cp01

0xa9fd,	// (0x00039eef) bg_cale_pane_cp02_ParamLimits

0xa9fd,	// (0x00039eef) bg_cale_pane_cp02

0x2739,	// (0x00031c2b) cale_month_corner_pane

0x2758,	// (0x00031c4a) cale_month_day_heading_pane_ParamLimits

0x2758,	// (0x00031c4a) cale_month_day_heading_pane

0x27c2,	// (0x00031cb4) cale_month_pane_g1_ParamLimits

0x27c2,	// (0x00031cb4) cale_month_pane_g1

0x2809,	// (0x00031cfb) cale_month_pane_g2_ParamLimits

0x2809,	// (0x00031cfb) cale_month_pane_g2

0x2845,	// (0x00031d37) cale_month_pane_g3_ParamLimits

0x2845,	// (0x00031d37) cale_month_pane_g3

0x2899,	// (0x00031d8b) cale_month_pane_g4_ParamLimits

0x2899,	// (0x00031d8b) cale_month_pane_g4

0x28ed,	// (0x00031ddf) cale_month_pane_g5_ParamLimits

0x28ed,	// (0x00031ddf) cale_month_pane_g5

0x2949,	// (0x00031e3b) cale_month_pane_g6_ParamLimits

0x2949,	// (0x00031e3b) cale_month_pane_g6

0x29b1,	// (0x00031ea3) cale_month_pane_g7_ParamLimits

0x29b1,	// (0x00031ea3) cale_month_pane_g7

0x2a1d,	// (0x00031f0f) cale_month_pane_g8_ParamLimits

0x2a1d,	// (0x00031f0f) cale_month_pane_g8

0x2a89,	// (0x00031f7b) cale_month_pane_g9_ParamLimits

0x2a89,	// (0x00031f7b) cale_month_pane_g9

0x2aed,	// (0x00031fdf) cale_month_pane_g10_ParamLimits

0x2aed,	// (0x00031fdf) cale_month_pane_g10

0x2b3f,	// (0x00032031) cale_month_pane_g11_ParamLimits

0x2b3f,	// (0x00032031) cale_month_pane_g11

0x2b91,	// (0x00032083) cale_month_pane_g12_ParamLimits

0x2b91,	// (0x00032083) cale_month_pane_g12

0x2be9,	// (0x000320db) cale_month_pane_g13_ParamLimits

0x2be9,	// (0x000320db) cale_month_pane_g13

0x000c,

0xf270,	// (0x0003e762) cale_month_pane_g_ParamLimits

0xf270,	// (0x0003e762) cale_month_pane_g

0x2c41,	// (0x00032133) cale_month_week_pane

0x2c65,	// (0x00032157) grid_cale_month_pane_ParamLimits

0x2c65,	// (0x00032157) grid_cale_month_pane

0x2cc6,	// (0x000321b8) cale_month_day_heading_pane_t1

0x2d4c,	// (0x0003223e) cale_month_day_heading_pane_t2

0x2dc5,	// (0x000322b7) cale_month_day_heading_pane_t3

0x2e3e,	// (0x00032330) cale_month_day_heading_pane_t4

0x2ebf,	// (0x000323b1) cale_month_day_heading_pane_t5

0x2f48,	// (0x0003243a) cale_month_day_heading_pane_t6

0x2fd9,	// (0x000324cb) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0003e77d) cale_month_day_heading_pane_t

0xa684,	// (0x00039b76) bg_cale_side_pane_cp01

0x306a,	// (0x0003255c) cale_month_week_pane_t1

0x3083,	// (0x00032575) cale_month_week_pane_t2

0x309c,	// (0x0003258e) cale_month_week_pane_t3

0x30b5,	// (0x000325a7) cale_month_week_pane_t4

0x30ce,	// (0x000325c0) cale_month_week_pane_t5

0x30e7,	// (0x000325d9) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0003e78c) cale_month_week_pane_t

0x310c,	// (0x000325fe) cell_cale_month_pane_ParamLimits

0x310c,	// (0x000325fe) cell_cale_month_pane

0x3280,	// (0x00032772) cell_cale_month_pane_g1

0xfeba,	// (0x0002f3ac) cell_cale_month_pane_t1_ParamLimits

0xfeba,	// (0x0002f3ac) cell_cale_month_pane_t1

0xa692,	// (0x00039b84) grid_highlight_pane_cp08

0xa583,	// (0x00039a75) main_smil_g1

0x328c,	// (0x0003277e) smil_status_pane

0xaa3c,	// (0x00039f2e) smil_text_pane

0xc3df,	// (0x0003b8d1) bg_popup_call3_rect_pane_g8

0xc3e7,	// (0x0003b8d9) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0003ea45) bg_popup_call3_rect_pane_g

0xc645,	// (0x0003bb37) smil_status_volume_pane_g1

0xaa46,	// (0x00039f38) smil_status_pane_t1

0x4851,	// (0x00033d43) volume_smil_pane

0xaa5d,	// (0x00039f4f) list_smil_text_pane

0x32a1,	// (0x00032793) scroll_pane_cp011

0x32ac,	// (0x0003279e) smil_text_list_pane_t1_ParamLimits

0x32ac,	// (0x0003279e) smil_text_list_pane_t1

0x32f7,	// (0x000327e9) aid_volume_smil_ParamLimits

0x32f7,	// (0x000327e9) aid_volume_smil

0xa583,	// (0x00039a75) smil_volume_pane_g1

0xa583,	// (0x00039a75) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0003e7ac) smil_volume_pane_g

0x182e,	// (0x00030d20) listscroll_cale_day_pane

0xaa67,	// (0x00039f59) bg_cale_pane

0xaa7f,	// (0x00039f71) list_cale_pane

0xaaa2,	// (0x00039f94) scroll_pane_cp09

0xaab3,	// (0x00039fa5) cale_bg_pane_g1

0xaabb,	// (0x00039fad) cale_bg_pane_g2

0xaac3,	// (0x00039fb5) cale_bg_pane_g3

0xaacb,	// (0x00039fbd) cale_bg_pane_g4

0xaad3,	// (0x00039fc5) cale_bg_pane_g5

0xaadb,	// (0x00039fcd) cale_bg_pane_g6

0xaae3,	// (0x00039fd5) cale_bg_pane_g7

0xaaeb,	// (0x00039fdd) cale_bg_pane_g8

0xaaf3,	// (0x00039fe5) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0003e7b1) cale_bg_pane_g

0x3321,	// (0x00032813) list_cale_time_pane_ParamLimits

0x3321,	// (0x00032813) list_cale_time_pane

0xaafb,	// (0x00039fed) list_cale_time_pane_g1_ParamLimits

0xaafb,	// (0x00039fed) list_cale_time_pane_g1

0xab07,	// (0x00039ff9) list_cale_time_pane_g2_ParamLimits

0xab07,	// (0x00039ff9) list_cale_time_pane_g2

0x333b,	// (0x0003282d) list_cale_time_pane_g3_ParamLimits

0x333b,	// (0x0003282d) list_cale_time_pane_g3

0x3349,	// (0x0003283b) list_cale_time_pane_g4_ParamLimits

0x3349,	// (0x0003283b) list_cale_time_pane_g4

0x3357,	// (0x00032849) list_cale_time_pane_g5_ParamLimits

0x3357,	// (0x00032849) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0003e7c4) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0003e7c4) list_cale_time_pane_g

0xab21,	// (0x0003a013) list_cale_time_pane_t1_ParamLimits

0xab21,	// (0x0003a013) list_cale_time_pane_t1

0xab49,	// (0x0003a03b) list_cale_time_pane_t2_ParamLimits

0xab49,	// (0x0003a03b) list_cale_time_pane_t2

0x376d,	// (0x00032c5f) aid_blid_cardinal_pane

0x37af,	// (0x00032ca1) compass_pane_t4

0xab71,	// (0x0003a063) list_cale_time_pane_t4_ParamLimits

0xab71,	// (0x0003a063) list_cale_time_pane_t4

0x37bd,	// (0x00032caf) compass_pane_t5

0x37cd,	// (0x00032cbf) compass_pane_t6

0x37db,	// (0x00032ccd) compass_pane_t7

0xafe9,	// (0x0003a4db) navi_pane_cc_t1

0xb1c8,	// (0x0003a6ba) aid_phob_thumbnail_center_pane

0x3e88,	// (0x0003337a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0003e7d1) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0003e7d1) list_cale_time_pane_t

0x9e65,	// (0x00039357) bg_popup_window_pane_cp02_ParamLimits

0x9e65,	// (0x00039357) bg_popup_window_pane_cp02

0xab99,	// (0x0003a08b) heading_pane_cp01_ParamLimits

0xab99,	// (0x0003a08b) heading_pane_cp01

0xaba5,	// (0x0003a097) loc_req_pane_ParamLimits

0xaba5,	// (0x0003a097) loc_req_pane

0xabb5,	// (0x0003a0a7) loc_type_pane_ParamLimits

0xabb5,	// (0x0003a0a7) loc_type_pane

0xabc7,	// (0x0003a0b9) loc_type_pane_t1_ParamLimits

0xabc7,	// (0x0003a0b9) loc_type_pane_t1

0xabd9,	// (0x0003a0cb) loc_type_pane_t2_ParamLimits

0xabd9,	// (0x0003a0cb) loc_type_pane_t2

0xabeb,	// (0x0003a0dd) loc_type_pane_t3_ParamLimits

0xabeb,	// (0x0003a0dd) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0003e7d8) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0003e7d8) loc_type_pane_t

0xabfd,	// (0x0003a0ef) list_loc_req_pane

0xac07,	// (0x0003a0f9) scroll_pane_cp012

0x3365,	// (0x00032857) list_single_loc_request_popup_menu_pane_ParamLimits

0x3365,	// (0x00032857) list_single_loc_request_popup_menu_pane

0xac12,	// (0x0003a104) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac12,	// (0x0003a104) list_single_loc_request_popup_menu_pane_g1

0xac1e,	// (0x0003a110) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac1e,	// (0x0003a110) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0003e7df) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0003e7df) list_single_loc_request_popup_menu_pane_g

0xac2a,	// (0x0003a11c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac2a,	// (0x0003a11c) list_single_loc_request_popup_menu_pane_t1

0xa469,	// (0x0003995b) bg_popup_window_pane_cp03_ParamLimits

0xa469,	// (0x0003995b) bg_popup_window_pane_cp03

0xb216,	// (0x0003a708) heading_loc_req_pane_ParamLimits

0xb216,	// (0x0003a708) heading_loc_req_pane

0x3372,	// (0x00032864) popup_dyc_status_message_window_g1_ParamLimits

0x3372,	// (0x00032864) popup_dyc_status_message_window_g1

0x3386,	// (0x00032878) popup_dyc_status_message_window_t1_ParamLimits

0x3386,	// (0x00032878) popup_dyc_status_message_window_t1

0x339b,	// (0x0003288d) popup_dyc_status_message_window_t2_ParamLimits

0x339b,	// (0x0003288d) popup_dyc_status_message_window_t2

0x33b0,	// (0x000328a2) popup_dyc_status_message_window_t3_ParamLimits

0x33b0,	// (0x000328a2) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0003e7e4) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0003e7e4) popup_dyc_status_message_window_t

0xa20e,	// (0x00039700) bg_heading_pane_cp01

0xac40,	// (0x0003a132) heading_loc_req_pane_g1

0xac48,	// (0x0003a13a) heading_loc_req_pane_g2

0xac50,	// (0x0003a142) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0003e7eb) heading_loc_req_pane_g

0xac58,	// (0x0003a14a) heading_loc_req_pane_t1

0xac68,	// (0x0003a15a) bg_popup_sub_pane_cp01_ParamLimits

0xac68,	// (0x0003a15a) bg_popup_sub_pane_cp01

0xac76,	// (0x0003a168) popup_cale_events_window_g1_ParamLimits

0xac76,	// (0x0003a168) popup_cale_events_window_g1

0xac96,	// (0x0003a188) popup_cale_events_window_g2_ParamLimits

0xac96,	// (0x0003a188) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0003e81f) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0003e81f) popup_cale_events_window_g

0xacb6,	// (0x0003a1a8) popup_cale_events_window_t1_ParamLimits

0xacb6,	// (0x0003a1a8) popup_cale_events_window_t1

0xacc8,	// (0x0003a1ba) popup_cale_events_window_t2_ParamLimits

0xacc8,	// (0x0003a1ba) popup_cale_events_window_t2

0xad06,	// (0x0003a1f8) popup_cale_events_window_t3_ParamLimits

0xad06,	// (0x0003a1f8) popup_cale_events_window_t3

0xad40,	// (0x0003a232) popup_cale_events_window_t4_ParamLimits

0xad40,	// (0x0003a232) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0003e824) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0003e824) popup_cale_events_window_t

0x34a9,	// (0x0003299b) call_type_pane

0x34b9,	// (0x000329ab) popup_call_status_window_g1

0x34cd,	// (0x000329bf) popup_call_status_window_g2

0x34e1,	// (0x000329d3) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0003e82d) popup_call_status_window_g

0xad76,	// (0x0003a268) call_type_pane_g1

0xad7f,	// (0x0003a271) call_type_pane_g2

0x0001,

0xf342,	// (0x0003e834) call_type_pane_g

0xa20e,	// (0x00039700) bg_popup_sub_pane_cp02

0xad88,	// (0x0003a27a) listscroll_popup_wml_pane

0xad90,	// (0x0003a282) list_wml_pane

0xad9a,	// (0x0003a28c) scroll_pane_cp013

0xada5,	// (0x0003a297) list_single_graphic_popup_wml_pane_ParamLimits

0xada5,	// (0x0003a297) list_single_graphic_popup_wml_pane

0xa583,	// (0x00039a75) list_single_graphic_popup_wml_pane_g1

0xadb9,	// (0x0003a2ab) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0003e839) list_single_graphic_popup_wml_pane_g

0xadc1,	// (0x0003a2b3) list_single_graphic_popup_wml_pane_t1

0xadd7,	// (0x0003a2c9) aid_call_pane

0xa461,	// (0x00039953) popup_clock_analogue_window_g1

0xa461,	// (0x00039953) popup_clock_analogue_window_g2

0x34f1,	// (0x000329e3) popup_clock_analogue_window_g3

0x34f1,	// (0x000329e3) popup_clock_analogue_window_g4

0xa583,	// (0x00039a75) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0003e83e) popup_clock_analogue_window_g

0x34f9,	// (0x000329eb) popup_clock_analogue_window_t1

0x3507,	// (0x000329f9) clock_digital_number_pane_ParamLimits

0x3507,	// (0x000329f9) clock_digital_number_pane

0x3513,	// (0x00032a05) clock_digital_number_pane_cp02_ParamLimits

0x3513,	// (0x00032a05) clock_digital_number_pane_cp02

0x351f,	// (0x00032a11) clock_digital_number_pane_cp03_ParamLimits

0x351f,	// (0x00032a11) clock_digital_number_pane_cp03

0x352b,	// (0x00032a1d) clock_digital_number_pane_cp04_ParamLimits

0x352b,	// (0x00032a1d) clock_digital_number_pane_cp04

0x3537,	// (0x00032a29) clock_digital_separator_pane_ParamLimits

0x3537,	// (0x00032a29) clock_digital_separator_pane

0x3543,	// (0x00032a35) popup_clock_digital_window_t1

0xa583,	// (0x00039a75) clock_digital_number_pane_g1

0xa583,	// (0x00039a75) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0003e7ac) clock_digital_number_pane_g

0xa583,	// (0x00039a75) clock_digital_separator_pane_g1

0xa583,	// (0x00039a75) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0003e7ac) clock_digital_separator_pane_g

0xa20e,	// (0x00039700) bg_popup_window_pane_cp04

0xaddf,	// (0x0003a2d1) heading_pane_cp03

0xade7,	// (0x0003a2d9) listscroll_popup_gms_pane

0xadef,	// (0x0003a2e1) grid_large_graphic_popup_pane

0xadf9,	// (0x0003a2eb) listscroll_popup_gms_pane_g1

0xae01,	// (0x0003a2f3) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0003e849) listscroll_popup_gms_pane_g

0xa8a1,	// (0x00039d93) scroll_pane_cp014

0x3560,	// (0x00032a52) cell_large_graphic_popup_pane_ParamLimits

0x3560,	// (0x00032a52) cell_large_graphic_popup_pane

0x3578,	// (0x00032a6a) cell_large_graphic_popup_pane_g1_ParamLimits

0x3578,	// (0x00032a6a) cell_large_graphic_popup_pane_g1

0xae09,	// (0x0003a2fb) cell_large_graphic_popup_pane_g2_ParamLimits

0xae09,	// (0x0003a2fb) cell_large_graphic_popup_pane_g2

0xae15,	// (0x0003a307) cell_large_graphic_popup_pane_g3_ParamLimits

0xae15,	// (0x0003a307) cell_large_graphic_popup_pane_g3

0xae22,	// (0x0003a314) cell_large_graphic_popup_pane_g4_ParamLimits

0xae22,	// (0x0003a314) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0003e84e) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0003e84e) cell_large_graphic_popup_pane_g

0xae32,	// (0x0003a324) grid_highlight_pane_cp010

0xa583,	// (0x00039a75) bg_popup_call_pane_g1

0xae3c,	// (0x0003a32e) list_single_graphic_popup_conf_pane_ParamLimits

0xae3c,	// (0x0003a32e) list_single_graphic_popup_conf_pane

0xae4e,	// (0x0003a340) list_highlight_pane_cp01

0xae57,	// (0x0003a349) list_single_graphic_popup_conf_pane_g1

0xae5f,	// (0x0003a351) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0003e857) list_single_graphic_popup_conf_pane_g

0xae67,	// (0x0003a359) list_single_graphic_popup_conf_pane_t1

0xae75,	// (0x0003a367) linegrid_cams_pane_g1

0x3584,	// (0x00032a76) linegrid_cams_pane_g2

0xa6c5,	// (0x00039bb7) linegrid_cams_pane_g3

0xae7e,	// (0x0003a370) linegrid_cams_pane_g4

0x358d,	// (0x00032a7f) linegrid_cams_pane_g5

0x3596,	// (0x00032a88) linegrid_cams_pane_g6

0xa6ce,	// (0x00039bc0) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0003e85c) linegrid_cams_pane_g

0xae87,	// (0x0003a379) popup_clock_analogue_window

0xae87,	// (0x0003a379) popup_clock_digital_window

0xa20e,	// (0x00039700) popup_phob_thumbnail_window

0xa583,	// (0x00039a75) call_video_uplink_pane_g1

0xae90,	// (0x0003a382) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0003e86b) call_video_uplink_pane_g

0xae98,	// (0x0003a38a) video_uplink_pane

0xaea0,	// (0x0003a392) mce_image_pane_g1

0x35a1,	// (0x00032a93) mce_image_pane_g2

0x35ab,	// (0x00032a9d) mce_image_pane_g3

0x35b5,	// (0x00032aa7) mce_image_pane_g4

0x35bd,	// (0x00032aaf) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0003e870) mce_image_pane_g

0xaeaa,	// (0x0003a39c) control_top_pane_stacon_cp01_ParamLimits

0xaeaa,	// (0x0003a39c) control_top_pane_stacon_cp01

0xaebe,	// (0x0003a3b0) uni_indicator_pane_stacon_cp01_ParamLimits

0xaebe,	// (0x0003a3b0) uni_indicator_pane_stacon_cp01

0xaecf,	// (0x0003a3c1) bg_popup_sub_pane_cp03

0x35c5,	// (0x00032ab7) chi_dic_find_pane

0x35cd,	// (0x00032abf) listscroll_chi_dic_pane

0x35d6,	// (0x00032ac8) main_pane_chidic_g1

0x35e9,	// (0x00032adb) chi_dic_find_pane_t1

0xaed9,	// (0x0003a3cb) find_chidic_pane

0xaee2,	// (0x0003a3d4) chi_dic_list_pane_ParamLimits

0xaee2,	// (0x0003a3d4) chi_dic_list_pane

0xaef3,	// (0x0003a3e5) scroll_pane_cp020

0x35f7,	// (0x00032ae9) find_chidic_pane_t1

0xa20e,	// (0x00039700) input_focus_pane_cp06

0x3606,	// (0x00032af8) list_chi_dic_pane_ParamLimits

0x3606,	// (0x00032af8) list_chi_dic_pane

0x3618,	// (0x00032b0a) list_chi_dic_pane_t1_ParamLimits

0x3618,	// (0x00032b0a) list_chi_dic_pane_t1

0xa20e,	// (0x00039700) list_highlight_pane_cp020

0xaefb,	// (0x0003a3ed) bg_cale_heading_pane_g1

0x362b,	// (0x00032b1d) bg_cale_heading_pane_g2

0x3633,	// (0x00032b25) bg_cale_heading_pane_g3

0x363b,	// (0x00032b2d) bg_cale_heading_pane_g4

0x3645,	// (0x00032b37) bg_cale_heading_pane_g5

0x364f,	// (0x00032b41) bg_cale_heading_pane_g6

0x3657,	// (0x00032b49) bg_cale_heading_pane_g7

0x365f,	// (0x00032b51) bg_cale_heading_pane_g8

0x3669,	// (0x00032b5b) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0003e87b) bg_cale_heading_pane_g

0xaefb,	// (0x0003a3ed) bg_cale_side_pane_g1

0x3673,	// (0x00032b65) bg_cale_side_pane_g2

0x367d,	// (0x00032b6f) bg_cale_side_pane_g3

0x3687,	// (0x00032b79) bg_cale_side_pane_g4

0x3691,	// (0x00032b83) bg_cale_side_pane_g5

0x369b,	// (0x00032b8d) bg_cale_side_pane_g6

0x36a5,	// (0x00032b97) bg_cale_side_pane_g7

0x36af,	// (0x00032ba1) bg_cale_side_pane_g8

0x36b7,	// (0x00032ba9) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0003e88e) bg_cale_side_pane_g

0x36bf,	// (0x00032bb1) popup_call_status_window_ParamLimits

0x36bf,	// (0x00032bb1) popup_call_status_window

0xaf03,	// (0x0003a3f5) stacon_top_pane

0xaf0b,	// (0x0003a3fd) status_pane_ParamLimits

0xaf0b,	// (0x0003a3fd) status_pane

0xaf20,	// (0x0003a412) status_small_pane

0xaf28,	// (0x0003a41a) control_pane

0xa20e,	// (0x00039700) stacon_bottom_pane

0xaf30,	// (0x0003a422) list_single_mce_smart_pane_t1_ParamLimits

0xaf30,	// (0x0003a422) list_single_mce_smart_pane_t1

0xaf43,	// (0x0003a435) list_single_mce_smart_pane_t2_ParamLimits

0xaf43,	// (0x0003a435) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0003e8a1) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0003e8a1) list_single_mce_smart_pane_t

0x370c,	// (0x00032bfe) compass_pane

0x3717,	// (0x00032c09) main_location2_pane_t1

0x372d,	// (0x00032c1f) main_location2_pane_t2

0x3743,	// (0x00032c35) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0003e8a6) main_location2_pane_t

0xaf62,	// (0x0003a454) compass_pane_g1_ParamLimits

0xaf62,	// (0x0003a454) compass_pane_g1

0x3791,	// (0x00032c83) compass_pane_t1

0x37a0,	// (0x00032c92) compass_pane_t2

0x0005,

0xf3bd,	// (0x0003e8af) compass_pane_t

0x37eb,	// (0x00032cdd) text_secondary_cp61

0xafe0,	// (0x0003a4d2) navi_pane_cams_g5

0xb05c,	// (0x0003a54e) navi_pane_im_t1

0xb06a,	// (0x0003a55c) navi_pane_mp_g1_ParamLimits

0xb06a,	// (0x0003a55c) navi_pane_mp_g1

0xb07e,	// (0x0003a570) navi_pane_mp_g2_ParamLimits

0xb07e,	// (0x0003a570) navi_pane_mp_g2

0xb08a,	// (0x0003a57c) navi_pane_mp_g3_ParamLimits

0xb08a,	// (0x0003a57c) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0003e8c3) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0003e8c3) navi_pane_mp_g

0xb096,	// (0x0003a588) navi_pane_mp_t1

0xb0a4,	// (0x0003a596) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0003e8ca) navi_pane_mp_t

0xb111,	// (0x0003a603) navi_pane_vt_g1

0xb096,	// (0x0003a588) navi_pane_vt_t1

0xb119,	// (0x0003a60b) navi_slider_pane

0xa6df,	// (0x00039bd1) zooming_pane

0xb129,	// (0x0003a61b) navi_slider_pane_g1

0x383c,	// (0x00032d2e) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0003e8d1) navi_slider_pane_g

0xb14d,	// (0x0003a63f) aid_levels_zoom

0xb155,	// (0x0003a647) zooming_pane_g1

0xb15d,	// (0x0003a64f) zooming_pane_g2

0xb15d,	// (0x0003a64f) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0003e8e0) zooming_pane_g

0xb165,	// (0x0003a657) level_10_zoom

0xb16e,	// (0x0003a660) level_11_zoom

0xb177,	// (0x0003a669) level_1_zoom

0xb180,	// (0x0003a672) level_2_zoom

0xb189,	// (0x0003a67b) level_3_zoom

0xb192,	// (0x0003a684) level_4_zoom

0xb19b,	// (0x0003a68d) level_5_zoom

0xb1a4,	// (0x0003a696) level_6_zoom

0xb1ad,	// (0x0003a69f) level_7_zoom

0xb1b6,	// (0x0003a6a8) level_8_zoom

0xb1bf,	// (0x0003a6b1) level_9_zoom

0xb1d0,	// (0x0003a6c2) popup_phob_thumbnail_window_g1

0xb1d8,	// (0x0003a6ca) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0003e8e7) popup_phob_thumbnail_window_g

0xc545,	// (0x0003ba37) level_1_location

0xc54d,	// (0x0003ba3f) level_2_location

0xc555,	// (0x0003ba47) level_3_location

0xc55d,	// (0x0003ba4f) level_4_location

0xa6df,	// (0x00039bd1) level_5_location

0x384e,	// (0x00032d40) mce_icon_pane_g1

0x3858,	// (0x00032d4a) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0003e8ec) mce_icon_pane_g

0x3860,	// (0x00032d52) main_mup_pane_g1_ParamLimits

0x3860,	// (0x00032d52) main_mup_pane_g1

0x3876,	// (0x00032d68) main_mup_pane_g2_ParamLimits

0x3876,	// (0x00032d68) main_mup_pane_g2

0x388e,	// (0x00032d80) main_mup_pane_g3_ParamLimits

0x388e,	// (0x00032d80) main_mup_pane_g3

0x38a6,	// (0x00032d98) main_mup_pane_g4_ParamLimits

0x38a6,	// (0x00032d98) main_mup_pane_g4

0x38b8,	// (0x00032daa) main_mup_pane_g5_ParamLimits

0x38b8,	// (0x00032daa) main_mup_pane_g5

0x38d4,	// (0x00032dc6) main_mup_pane_g6_ParamLimits

0x38d4,	// (0x00032dc6) main_mup_pane_g6

0x38ee,	// (0x00032de0) main_mup_pane_g7_ParamLimits

0x38ee,	// (0x00032de0) main_mup_pane_g7

0x390c,	// (0x00032dfe) main_mup_pane_g8_ParamLimits

0x390c,	// (0x00032dfe) main_mup_pane_g8

0x392a,	// (0x00032e1c) main_mup_pane_g9_ParamLimits

0x392a,	// (0x00032e1c) main_mup_pane_g9

0x3946,	// (0x00032e38) main_mup_pane_g10_ParamLimits

0x3946,	// (0x00032e38) main_mup_pane_g10

0x3964,	// (0x00032e56) main_mup_pane_g11_ParamLimits

0x3964,	// (0x00032e56) main_mup_pane_g11

0x397e,	// (0x00032e70) main_mup_pane_g12_ParamLimits

0x397e,	// (0x00032e70) main_mup_pane_g12

0x3994,	// (0x00032e86) main_mup_pane_g13_ParamLimits

0x3994,	// (0x00032e86) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0003e8f1) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0003e8f1) main_mup_pane_g

0x39a8,	// (0x00032e9a) main_mup_pane_t1_ParamLimits

0x39a8,	// (0x00032e9a) main_mup_pane_t1

0x39c4,	// (0x00032eb6) main_mup_pane_t2_ParamLimits

0x39c4,	// (0x00032eb6) main_mup_pane_t2

0x39dc,	// (0x00032ece) main_mup_pane_t3_ParamLimits

0x39dc,	// (0x00032ece) main_mup_pane_t3

0x39f4,	// (0x00032ee6) main_mup_pane_t4_ParamLimits

0x39f4,	// (0x00032ee6) main_mup_pane_t4

0x3a12,	// (0x00032f04) main_mup_pane_t5_ParamLimits

0x3a12,	// (0x00032f04) main_mup_pane_t5

0x3a27,	// (0x00032f19) main_mup_pane_t6_ParamLimits

0x3a27,	// (0x00032f19) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0003e90c) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0003e90c) main_mup_pane_t

0x3a39,	// (0x00032f2b) mup_progress_pane_ParamLimits

0x3a39,	// (0x00032f2b) mup_progress_pane

0x3a45,	// (0x00032f37) mup_visualizer_pane_ParamLimits

0x3a45,	// (0x00032f37) mup_visualizer_pane

0x3a79,	// (0x00032f6b) mup_volume_pane_ParamLimits

0x3a79,	// (0x00032f6b) mup_volume_pane

0xb1e0,	// (0x0003a6d2) mup_visualizer_pane_g1_ParamLimits

0xb1e0,	// (0x0003a6d2) mup_visualizer_pane_g1

0xb1e0,	// (0x0003a6d2) mup_visualizer_pane_g2_ParamLimits

0xb1e0,	// (0x0003a6d2) mup_visualizer_pane_g2

0xaf62,	// (0x0003a454) mup_visualizer_pane_g3_ParamLimits

0xaf62,	// (0x0003a454) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0003e919) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0003e919) mup_visualizer_pane_g

0xa583,	// (0x00039a75) mup_volume_pane_g1

0xb1f6,	// (0x0003a6e8) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0003e920) mup_volume_pane_g

0xa583,	// (0x00039a75) mup_progress_pane_g1

0xb1ff,	// (0x0003a6f1) mup_progress_pane_g2

0xb222,	// (0x0003a714) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0003e925) mup_progress_pane_g

0xa20e,	// (0x00039700) bg_popup_window_pane_cp05

0xb22b,	// (0x0003a71d) heading_pane_cp02_ParamLimits

0xb22b,	// (0x0003a71d) heading_pane_cp02

0xb247,	// (0x0003a739) list_popup_blid_pane

0xb24f,	// (0x0003a741) list_blid_sat_info_pane_ParamLimits

0xb24f,	// (0x0003a741) list_blid_sat_info_pane

0xb262,	// (0x0003a754) list_blid_sat_info_pane_g1

0xb26a,	// (0x0003a75c) list_blid_sat_info_pane_t1

0x3ba3,	// (0x00033095) mup_equalizer_pane_ParamLimits

0x3ba3,	// (0x00033095) mup_equalizer_pane

0x3bc4,	// (0x000330b6) mup_equalizer_pane_cp1_ParamLimits

0x3bc4,	// (0x000330b6) mup_equalizer_pane_cp1

0x3be5,	// (0x000330d7) mup_equalizer_pane_cp2_ParamLimits

0x3be5,	// (0x000330d7) mup_equalizer_pane_cp2

0x3c0a,	// (0x000330fc) mup_equalizer_pane_cp3_ParamLimits

0x3c0a,	// (0x000330fc) mup_equalizer_pane_cp3

0x3c33,	// (0x00033125) mup_equalizer_pane_cp4_ParamLimits

0x3c33,	// (0x00033125) mup_equalizer_pane_cp4

0x3c5c,	// (0x0003314e) mup_equalizer_pane_cp5

0x3c74,	// (0x00033166) mup_equalizer_pane_cp6

0x3c8c,	// (0x0003317e) mup_equalizer_pane_cp7

0xc45f,	// (0x0003b951) bg_popup_call_poc_act_pane_g9

0xc467,	// (0x0003b959) bg_popup_call_poc_act_pane_g10

0xc46f,	// (0x0003b961) bg_popup_call_poc_act_pane_g11

0x000a,

0xa469,	// (0x0003995b) mup_scale_pane

0xa583,	// (0x00039a75) mup_scale_pane_g1

0xb278,	// (0x0003a76a) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0003e941) mup_scale_pane_g

0xb29c,	// (0x0003a78e) msg_data_pane

0xb2a4,	// (0x0003a796) scroll_pane_cp017

0x3cb6,	// (0x000331a8) bg_list_pane_cp04_ParamLimits

0x3cb6,	// (0x000331a8) bg_list_pane_cp04

0xb2b4,	// (0x0003a7a6) msg_data_pane_g1

0x3cd6,	// (0x000331c8) msg_data_pane_g2

0x3ce0,	// (0x000331d2) msg_data_pane_g3

0x3cea,	// (0x000331dc) msg_data_pane_g4

0x3cf2,	// (0x000331e4) msg_data_pane_g5

0x3cfa,	// (0x000331ec) msg_data_pane_g6

0x3d02,	// (0x000331f4) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0003e950) msg_data_pane_g

0x3d0a,	// (0x000331fc) msg_text_pane_ParamLimits

0x3d0a,	// (0x000331fc) msg_text_pane

0x3d43,	// (0x00033235) qrid_highlight_pane_cp011_ParamLimits

0x3d43,	// (0x00033235) qrid_highlight_pane_cp011

0xa20e,	// (0x00039700) msg_body_pane

0xa20e,	// (0x00039700) msg_header_pane

0xb2c5,	// (0x0003a7b7) input_focus_pane_cp07

0xb2da,	// (0x0003a7cc) msg_header_pane_t1_ParamLimits

0xb2da,	// (0x0003a7cc) msg_header_pane_t1

0xb2ec,	// (0x0003a7de) msg_header_pane_t2_ParamLimits

0xb2ec,	// (0x0003a7de) msg_header_pane_t2

0x0001,

0xf472,	// (0x0003e964) msg_header_pane_t_ParamLimits

0xf472,	// (0x0003e964) msg_header_pane_t

0xb2fe,	// (0x0003a7f0) msg_body_pane_g1

0x3d67,	// (0x00033259) msg_body_pane_t1_ParamLimits

0x3d67,	// (0x00033259) msg_body_pane_t1

0xb306,	// (0x0003a7f8) msg_body_pane_t2_ParamLimits

0xb306,	// (0x0003a7f8) msg_body_pane_t2

0xb318,	// (0x0003a80a) msg_body_pane_t3_ParamLimits

0xb318,	// (0x0003a80a) msg_body_pane_t3

0x0002,

0xf477,	// (0x0003e969) msg_body_pane_t_ParamLimits

0xf477,	// (0x0003e969) msg_body_pane_t

0xff02,	// (0x0002f3f4) main_viewer_pane_g1_ParamLimits

0xff02,	// (0x0002f3f4) main_viewer_pane_g1

0xff10,	// (0x0002f402) main_viewer_pane_g2_ParamLimits

0xff10,	// (0x0002f402) main_viewer_pane_g2

0x3dce,	// (0x000332c0) main_viewer_pane_g3_ParamLimits

0x3dce,	// (0x000332c0) main_viewer_pane_g3

0x3ddd,	// (0x000332cf) main_viewer_pane_g4_ParamLimits

0x3ddd,	// (0x000332cf) main_viewer_pane_g4

0x3dec,	// (0x000332de) main_viewer_pane_g5_ParamLimits

0x3dec,	// (0x000332de) main_viewer_pane_g5

0x3dec,	// (0x000332de) main_viewer_pane_g7_ParamLimits

0x3dec,	// (0x000332de) main_viewer_pane_g7

0x3dfe,	// (0x000332f0) main_viewer_pane_g8_ParamLimits

0x3dfe,	// (0x000332f0) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0003e979) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0003e979) main_viewer_pane_g

0xb32a,	// (0x0003a81c) viewer_content_pane_ParamLimits

0xb32a,	// (0x0003a81c) viewer_content_pane

0x3e45,	// (0x00033337) main_postcard_pane_g1_ParamLimits

0x3e45,	// (0x00033337) main_postcard_pane_g1

0x3e5b,	// (0x0003334d) main_postcard_pane_g2_ParamLimits

0x3e5b,	// (0x0003334d) main_postcard_pane_g2

0x3e71,	// (0x00033363) main_postcard_pane_g3_ParamLimits

0x3e71,	// (0x00033363) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0003e98a) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0003e98a) main_postcard_pane_g

0x3e88,	// (0x0003337a) main_postcard_pane_g4

0xc658,	// (0x0003bb4a) smil_status_volume_pane_g2

0x3ecb,	// (0x000333bd) postcard_pane_ParamLimits

0x3ecb,	// (0x000333bd) postcard_pane

0xb338,	// (0x0003a82a) postcard_pane_g1_ParamLimits

0xb338,	// (0x0003a82a) postcard_pane_g1

0x3f1b,	// (0x0003340d) postcard_pane_g2_ParamLimits

0x3f1b,	// (0x0003340d) postcard_pane_g2

0x3f27,	// (0x00033419) postcard_pane_g3_ParamLimits

0x3f27,	// (0x00033419) postcard_pane_g3

0xb346,	// (0x0003a838) postcard_pane_g4_ParamLimits

0xb346,	// (0x0003a838) postcard_pane_g4

0x3f33,	// (0x00033425) postcard_pane_g5_ParamLimits

0x3f33,	// (0x00033425) postcard_pane_g5

0x3f48,	// (0x0003343a) postcard_pane_g6_ParamLimits

0x3f48,	// (0x0003343a) postcard_pane_g6

0xb338,	// (0x0003a82a) postcard_pane_g7_ParamLimits

0xb338,	// (0x0003a82a) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0003e997) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0003e997) postcard_pane_g

0x3f60,	// (0x00033452) main_mp2_pane_g1_ParamLimits

0x3f60,	// (0x00033452) main_mp2_pane_g1

0x3f6e,	// (0x00033460) main_mp2_pane_g2_ParamLimits

0x3f6e,	// (0x00033460) main_mp2_pane_g2

0x3f7a,	// (0x0003346c) main_mp2_pane_g3_ParamLimits

0x3f7a,	// (0x0003346c) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0003e9a6) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0003e9a6) main_mp2_pane_g

0x3f86,	// (0x00033478) main_mp2_pane_t1_ParamLimits

0x3f86,	// (0x00033478) main_mp2_pane_t1

0x3f9d,	// (0x0003348f) main_mp2_pane_t2_ParamLimits

0x3f9d,	// (0x0003348f) main_mp2_pane_t2

0x3fb1,	// (0x000334a3) main_mp2_pane_t3_ParamLimits

0x3fb1,	// (0x000334a3) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0003e9ad) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0003e9ad) main_mp2_pane_t

0xb354,	// (0x0003a846) pec_content_pane_ParamLimits

0xb354,	// (0x0003a846) pec_content_pane

0xa8a1,	// (0x00039d93) scroll_pane_cp015

0xb366,	// (0x0003a858) pec_attribute_pane_ParamLimits

0xb366,	// (0x0003a858) pec_attribute_pane

0x3fc3,	// (0x000334b5) pec_content_pane_g1_ParamLimits

0x3fc3,	// (0x000334b5) pec_content_pane_g1

0xb376,	// (0x0003a868) pec_content_pane_t1_ParamLimits

0xb376,	// (0x0003a868) pec_content_pane_t1

0xb388,	// (0x0003a87a) pec_content_pane_t2_ParamLimits

0xb388,	// (0x0003a87a) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0003e9b4) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0003e9b4) pec_content_pane_t

0x3fcf,	// (0x000334c1) list_single_graphic_pane_cp01_ParamLimits

0x3fcf,	// (0x000334c1) list_single_graphic_pane_cp01

0xa469,	// (0x0003995b) bg_popup_sub_pane_cp04

0xb39a,	// (0x0003a88c) popup_mup_playback_window_g1

0xb3a6,	// (0x0003a898) popup_mup_playback_window_t1

0xb3bb,	// (0x0003a8ad) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0003e9b9) popup_mup_playback_window_t

0xb3f2,	// (0x0003a8e4) main_image_pane_g1_ParamLimits

0xb3f2,	// (0x0003a8e4) main_image_pane_g1

0xb435,	// (0x0003a927) scroll_pane_cp018_ParamLimits

0xb435,	// (0x0003a927) scroll_pane_cp018

0xb44d,	// (0x0003a93f) scroll_pane_cp016_ParamLimits

0xb44d,	// (0x0003a93f) scroll_pane_cp016

0x40a1,	// (0x00033593) smil2_image_pane_ParamLimits

0x40a1,	// (0x00033593) smil2_image_pane

0x40d7,	// (0x000335c9) smil2_root_pane_ParamLimits

0x40d7,	// (0x000335c9) smil2_root_pane

0x410f,	// (0x00033601) smil2_text_pane_ParamLimits

0x410f,	// (0x00033601) smil2_text_pane

0xa20e,	// (0x00039700) bg_list_pane_cp06

0xb489,	// (0x0003a97b) grid_radio_pane

0xa20e,	// (0x00039700) bg_popup_window_pane_cp06

0xb493,	// (0x0003a985) main_fmradio_pane_t1

0xaddf,	// (0x0003a2d1) heading_pane_cp04

0xb4a1,	// (0x0003a993) main_fmradio_pane_t2

0xc477,	// (0x0003b969) popup_cale_lunar_info_window_g1

0xb4af,	// (0x0003a9a1) main_fmradio_pane_t3

0xc47f,	// (0x0003b971) popup_cale_lunar_info_window_g2

0xb4bf,	// (0x0003a9b1) main_fmradio_pane_t4

0x0001,

0xb4cd,	// (0x0003a9bf) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0003ea94) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0003e9ce) main_fmradio_pane_t

0xb4db,	// (0x0003a9cd) wait_bar_pane_cp03

0xb4e3,	// (0x0003a9d5) cell_fmradio_pane_ParamLimits

0xb4e3,	// (0x0003a9d5) cell_fmradio_pane

0xb338,	// (0x0003a82a) cell_fmradio_pane_g1_ParamLimits

0xb338,	// (0x0003a82a) cell_fmradio_pane_g1

0xa20e,	// (0x00039700) grid_highlight_pane_cp011

0xb4f8,	// (0x0003a9ea) poc_content_pane_ParamLimits

0xb4f8,	// (0x0003a9ea) poc_content_pane

0xb50a,	// (0x0003a9fc) scroll_pane_cp019

0x419f,	// (0x00033691) popup_call_poc_act_window_ParamLimits

0x419f,	// (0x00033691) popup_call_poc_act_window

0x41c3,	// (0x000336b5) popup_call_poc_inact_window_ParamLimits

0x41c3,	// (0x000336b5) popup_call_poc_inact_window

0xf579,	// (0x0003ea6b) bg_popup_call_poc_act_pane_g

0xc3ef,	// (0x0003b8e1) bg_popup_call_poc_inact_pane_g1

0xc3f7,	// (0x0003b8e9) bg_popup_call_poc_inact_pane_g2

0xb512,	// (0x0003aa04) popup_call_poc_act_window_g2

0xc3ff,	// (0x0003b8f1) bg_popup_call_poc_inact_pane_g3

0xc407,	// (0x0003b8f9) bg_popup_call_poc_inact_pane_g4

0xc40f,	// (0x0003b901) bg_popup_call_poc_inact_pane_g5

0xb51a,	// (0x0003aa0c) popup_call_poc_act_window_t1_ParamLimits

0xb51a,	// (0x0003aa0c) popup_call_poc_act_window_t1

0xb542,	// (0x0003aa34) popup_call_poc_act_window_t2_ParamLimits

0xb542,	// (0x0003aa34) popup_call_poc_act_window_t2

0xb56a,	// (0x0003aa5c) popup_call_poc_act_window_t3_ParamLimits

0xb56a,	// (0x0003aa5c) popup_call_poc_act_window_t3

0xb592,	// (0x0003aa84) popup_call_poc_act_window_t4_ParamLimits

0xb592,	// (0x0003aa84) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0003e9d9) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0003e9d9) popup_call_poc_act_window_t

0xc417,	// (0x0003b909) bg_popup_call_poc_inact_pane_g6

0xc41f,	// (0x0003b911) bg_popup_call_poc_inact_pane_g7

0xc427,	// (0x0003b919) bg_popup_call_poc_inact_pane_g8

0xb5a4,	// (0x0003aa96) popup_call_poc_inact_window_g2

0xc42f,	// (0x0003b921) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0003ea58) bg_popup_call_poc_inact_pane_g

0xb5ac,	// (0x0003aa9e) popup_call_poc_inact_window_t1_ParamLimits

0xb5ac,	// (0x0003aa9e) popup_call_poc_inact_window_t1

0xb5c1,	// (0x0003aab3) popup_call_poc_inact_window_t2_ParamLimits

0xb5c1,	// (0x0003aab3) popup_call_poc_inact_window_t2

0xb5d6,	// (0x0003aac8) popup_call_poc_inact_window_t3_ParamLimits

0xb5d6,	// (0x0003aac8) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0003e9e2) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0003e9e2) popup_call_poc_inact_window_t

0xc5b8,	// (0x0003baaa) context_pane_ParamLimits

0x47c2,	// (0x00033cb4) signal_pane_ParamLimits

0xa6df,	// (0x00039bd1) main_call2_pane

0x474f,	// (0x00033c41) popup_phob_thumbnail2_window_ParamLimits

0x474f,	// (0x00033c41) popup_phob_thumbnail2_window

0x3d98,	// (0x0003328a) aid_hotspot_pointer_arrow_pane

0x3da0,	// (0x00033292) aid_hotspot_pointer_hand_pane

0x452e,	// (0x00033a20) phob_pre_status_pane_g5

0x1d9f,	// (0x00031291) cams_zoom_pane_ParamLimits

0x1dae,	// (0x000312a0) image_vga_pane_ParamLimits

0x1dc8,	// (0x000312ba) main_camera_pane_g1_ParamLimits

0x1dda,	// (0x000312cc) main_camera_pane_g2_ParamLimits

0x1dea,	// (0x000312dc) main_camera_pane_g3_ParamLimits

0x1dfe,	// (0x000312f0) main_camera_pane_g4_ParamLimits

0x1e12,	// (0x00031304) main_camera_pane_g5_ParamLimits

0x1e26,	// (0x00031318) main_camera_pane_g6_ParamLimits

0x1e3a,	// (0x0003132c) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0003e6e1) main_camera_pane_g_ParamLimits

0x1e4e,	// (0x00031340) main_camera_pane_t1_ParamLimits

0x1e64,	// (0x00031356) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0003e6f2) main_camera_pane_t_ParamLimits

0xa469,	// (0x0003995b) bg_popup_preview_window_pane_cp01_ParamLimits

0xa469,	// (0x0003995b) bg_popup_preview_window_pane_cp01

0xb5eb,	// (0x0003aadd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb5eb,	// (0x0003aadd) popup_phob_thumbnail2_window_g1

0xa20e,	// (0x00039700) call2_cli_visual_pane

0x41f7,	// (0x000336e9) popup_call2_audio_conf_window_ParamLimits

0x41f7,	// (0x000336e9) popup_call2_audio_conf_window

0x421f,	// (0x00033711) popup_call2_audio_first_window_ParamLimits

0x421f,	// (0x00033711) popup_call2_audio_first_window

0x42b5,	// (0x000337a7) popup_call2_audio_in_window_ParamLimits

0x42b5,	// (0x000337a7) popup_call2_audio_in_window

0x4301,	// (0x000337f3) popup_call2_audio_out_window_ParamLimits

0x4301,	// (0x000337f3) popup_call2_audio_out_window

0x4373,	// (0x00033865) popup_call2_audio_second_window_ParamLimits

0x4373,	// (0x00033865) popup_call2_audio_second_window

0x43d9,	// (0x000338cb) popup_call2_audio_wait_window_ParamLimits

0x43d9,	// (0x000338cb) popup_call2_audio_wait_window

0xa20e,	// (0x00039700) bg_popup_call2_act_pane_cp03

0xa44b,	// (0x0003993d) list_conf_pane_cp

0xb5f7,	// (0x0003aae9) popup_call2_audio_conf_window_t1

0xb605,	// (0x0003aaf7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb605,	// (0x0003aaf7) list_single_graphic_popup_conf2_pane

0xae4e,	// (0x0003a340) list_highlight_pane_cp04

0xb618,	// (0x0003ab0a) list_single_graphic_popup_conf2_pane_g1

0xae5f,	// (0x0003a351) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0003e9e9) list_single_graphic_popup_conf2_pane_g

0xb622,	// (0x0003ab14) list_single_graphic_popup_conf2_pane_t1

0xb630,	// (0x0003ab22) bg_popup_call2_act_pane_cp01_ParamLimits

0xb630,	// (0x0003ab22) bg_popup_call2_act_pane_cp01

0xb6ba,	// (0x0003abac) call_type_pane_cp05_ParamLimits

0xb6ba,	// (0x0003abac) call_type_pane_cp05

0xb70e,	// (0x0003ac00) popup_call2_audio_second_window_g1_ParamLimits

0xb70e,	// (0x0003ac00) popup_call2_audio_second_window_g1

0xb762,	// (0x0003ac54) popup_call2_audio_second_window_g2_ParamLimits

0xb762,	// (0x0003ac54) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0003e9ee) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0003e9ee) popup_call2_audio_second_window_g

0xb7c7,	// (0x0003acb9) popup_call2_audio_second_window_t1_ParamLimits

0xb7c7,	// (0x0003acb9) popup_call2_audio_second_window_t1

0xb882,	// (0x0003ad74) popup_call2_audio_second_window_t2_ParamLimits

0xb882,	// (0x0003ad74) popup_call2_audio_second_window_t2

0xb8d5,	// (0x0003adc7) popup_call2_audio_second_window_t3_ParamLimits

0xb8d5,	// (0x0003adc7) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0003e9f5) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0003e9f5) popup_call2_audio_second_window_t

0xa20e,	// (0x00039700) bg_popup_call2_in_pane_cp02

0xa218,	// (0x0003970a) call_type_pane_cp04

0xa220,	// (0x00039712) popup_call2_audio_wait_window_g1

0xa228,	// (0x0003971a) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0003e5d0) popup_call2_audio_wait_window_g

0xa230,	// (0x00039722) popup_call2_audio_wait_window_t3

0xb9c8,	// (0x0003aeba) bg_popup_call2_act_pane_ParamLimits

0xb9c8,	// (0x0003aeba) bg_popup_call2_act_pane

0xba88,	// (0x0003af7a) call_type_pane_cp03_ParamLimits

0xba88,	// (0x0003af7a) call_type_pane_cp03

0xbaec,	// (0x0003afde) popup_call2_audio_first_window_g1_ParamLimits

0xbaec,	// (0x0003afde) popup_call2_audio_first_window_g1

0xbb5c,	// (0x0003b04e) popup_call2_audio_first_window_g2_ParamLimits

0xbb5c,	// (0x0003b04e) popup_call2_audio_first_window_g2

0xb1e0,	// (0x0003a6d2) popup_call2_audio_first_window_g3_ParamLimits

0xb1e0,	// (0x0003a6d2) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0003e9fe) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0003e9fe) popup_call2_audio_first_window_g

0xbc3a,	// (0x0003b12c) popup_call2_audio_first_window_t1_ParamLimits

0xbc3a,	// (0x0003b12c) popup_call2_audio_first_window_t1

0xbd3d,	// (0x0003b22f) popup_call2_audio_first_window_t4_ParamLimits

0xbd3d,	// (0x0003b22f) popup_call2_audio_first_window_t4

0xbe20,	// (0x0003b312) popup_call2_audio_first_window_t5_ParamLimits

0xbe20,	// (0x0003b312) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0003ea09) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0003ea09) popup_call2_audio_first_window_t

0xa461,	// (0x00039953) bg_popup_call2_act_pane_g1

0xc489,	// (0x0003b97b) popup_cale_lunar_info_window_t1

0xc497,	// (0x0003b989) popup_cale_lunar_info_window_t2

0xc4a5,	// (0x0003b997) popup_cale_lunar_info_window_t3

0xa20e,	// (0x00039700) bg_popup_call2_bubble_pane

0xbf21,	// (0x0003b413) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf21,	// (0x0003b413) bg_popup_call2_in_pane_cp01

0x9eea,	// (0x000393dc) call_type_pane_cp02

0xbf69,	// (0x0003b45b) popup_call2_audio_out_window_g1_ParamLimits

0xbf69,	// (0x0003b45b) popup_call2_audio_out_window_g1

0xbf95,	// (0x0003b487) popup_call2_audio_out_window_g2_ParamLimits

0xbf95,	// (0x0003b487) popup_call2_audio_out_window_g2

0xbfbd,	// (0x0003b4af) popup_call2_audio_out_window_g3_ParamLimits

0xbfbd,	// (0x0003b4af) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0003ea12) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0003ea12) popup_call2_audio_out_window_g

0xbff8,	// (0x0003b4ea) popup_call2_audio_out_window_t1_ParamLimits

0xbff8,	// (0x0003b4ea) popup_call2_audio_out_window_t1

0xc057,	// (0x0003b549) popup_call2_audio_out_window_t2_ParamLimits

0xc057,	// (0x0003b549) popup_call2_audio_out_window_t2

0xc0ab,	// (0x0003b59d) popup_call2_audio_out_window_t3_ParamLimits

0xc0ab,	// (0x0003b59d) popup_call2_audio_out_window_t3

0xc0c1,	// (0x0003b5b3) popup_call2_audio_out_window_t4_ParamLimits

0xc0c1,	// (0x0003b5b3) popup_call2_audio_out_window_t4

0xc0d7,	// (0x0003b5c9) popup_call2_audio_out_window_t5_ParamLimits

0xc0d7,	// (0x0003b5c9) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0003ea1b) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0003ea1b) popup_call2_audio_out_window_t

0xc13b,	// (0x0003b62d) bg_popup_call2_in_pane_ParamLimits

0xc13b,	// (0x0003b62d) bg_popup_call2_in_pane

0xc197,	// (0x0003b689) popup_call2_audio_in_window_g1_ParamLimits

0xc197,	// (0x0003b689) popup_call2_audio_in_window_g1

0xc1cf,	// (0x0003b6c1) popup_call2_audio_in_window_g2_ParamLimits

0xc1cf,	// (0x0003b6c1) popup_call2_audio_in_window_g2

0xc207,	// (0x0003b6f9) popup_call2_audio_in_window_g3_ParamLimits

0xc207,	// (0x0003b6f9) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0003ea28) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0003ea28) popup_call2_audio_in_window_g

0xc25f,	// (0x0003b751) popup_call2_audio_in_window_t1_ParamLimits

0xc25f,	// (0x0003b751) popup_call2_audio_in_window_t1

0xc2df,	// (0x0003b7d1) popup_call2_audio_in_window_t2_ParamLimits

0xc2df,	// (0x0003b7d1) popup_call2_audio_in_window_t2

0xc35f,	// (0x0003b851) popup_call2_audio_in_window_t3_ParamLimits

0xc35f,	// (0x0003b851) popup_call2_audio_in_window_t3

0xc379,	// (0x0003b86b) popup_call2_audio_in_window_t4_ParamLimits

0xc379,	// (0x0003b86b) popup_call2_audio_in_window_t4

0xc38b,	// (0x0003b87d) popup_call2_audio_in_window_t5_ParamLimits

0xc38b,	// (0x0003b87d) popup_call2_audio_in_window_t5

0xc39d,	// (0x0003b88f) popup_call2_audio_in_window_t6_ParamLimits

0xc39d,	// (0x0003b88f) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0003ea31) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0003ea31) popup_call2_audio_in_window_t

0xa461,	// (0x00039953) bg_popup_call2_in_pane_g1

0xc4b3,	// (0x0003b9a5) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0003ea99) popup_cale_lunar_info_window_t

0xa469,	// (0x0003995b) bg_popup_call2_rect_pane_ParamLimits

0xa469,	// (0x0003995b) bg_popup_call2_rect_pane

0xa20e,	// (0x00039700) call2_cli_visual_graphic_pane

0xa20e,	// (0x00039700) call2_cli_visual_text_pane

0x4844,	// (0x00033d36) smil_status_volume_pane_g3

0x0002,

0xa583,	// (0x00039a75) call2_cli_visual_graphic_pane_g1

0xa583,	// (0x00039a75) call2_cli_visual_graphic_pane_g2

0xa583,	// (0x00039a75) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0003ea3e) call2_cli_visual_graphic_pane_g

0xc3af,	// (0x0003b8a1) bg_popup_call2_rect_pane_g1

0xa618,	// (0x00039b0a) bg_popup_call2_rect_pane_g2

0xc3b7,	// (0x0003b8a9) bg_popup_call2_rect_pane_g3

0xc3bf,	// (0x0003b8b1) bg_popup_call2_rect_pane_g4

0xc3c7,	// (0x0003b8b9) bg_popup_call2_rect_pane_g5

0xc3cf,	// (0x0003b8c1) bg_popup_call2_rect_pane_g6

0xc3d7,	// (0x0003b8c9) bg_popup_call2_rect_pane_g7

0xc3df,	// (0x0003b8d1) bg_popup_call2_rect_pane_g8

0xc3e7,	// (0x0003b8d9) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0003ea45) bg_popup_call2_rect_pane_g

0xc3ef,	// (0x0003b8e1) bg_popup_call2_bubble_pane_g1

0xc3f7,	// (0x0003b8e9) bg_popup_call2_bubble_pane_g2

0xc3ff,	// (0x0003b8f1) bg_popup_call2_bubble_pane_g3

0xc407,	// (0x0003b8f9) bg_popup_call2_bubble_pane_g4

0xc40f,	// (0x0003b901) bg_popup_call2_bubble_pane_g5

0xc417,	// (0x0003b909) bg_popup_call2_bubble_pane_g6

0xc41f,	// (0x0003b911) bg_popup_call2_bubble_pane_g7

0xc427,	// (0x0003b919) bg_popup_call2_bubble_pane_g8

0xc42f,	// (0x0003b921) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0003ea58) bg_popup_call2_bubble_pane_g

0x183e,	// (0x00030d30) aid_cale_week_size_cell_pane

0x1e7e,	// (0x00031370) aid_cams_cif_uncrop_pane_ParamLimits

0x1e7e,	// (0x00031370) aid_cams_cif_uncrop_pane

0x2037,	// (0x00031529) aid_cams_size_cell_ParamLimits

0x2037,	// (0x00031529) aid_cams_size_cell

0x204b,	// (0x0003153d) grid_cams_pane_ParamLimits

0x2065,	// (0x00031557) linegrid_cams_pane_ParamLimits

0x225a,	// (0x0003174c) call_video_pane_t1

0x2274,	// (0x00031766) call_video_pane_t2

0x0001,

0xf253,	// (0x0003e745) call_video_pane_t

0x26c1,	// (0x00031bb3) aid_cale_month_size_cell_pane_ParamLimits

0x26c1,	// (0x00031bb3) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0003eae2) smil_status_volume_pane_g

0x4851,	// (0x00033d43) volume_smil_pane_ParamLimits

0x1381,	// (0x00030873) aid_popup2_width_pane

0x1749,	// (0x00030c3b) cell_qdial_pane_g4_ParamLimits

0x1749,	// (0x00030c3b) cell_qdial_pane_g4

0x376d,	// (0x00032c5f) aid_blid_cardinal_pane_ParamLimits

0x377d,	// (0x00032c6f) aid_blid_destination_pane_ParamLimits

0x377d,	// (0x00032c6f) aid_blid_destination_pane

0xa469,	// (0x0003995b) bg_popup_call_poc_act_pane_ParamLimits

0xa469,	// (0x0003995b) bg_popup_call_poc_act_pane

0xa469,	// (0x0003995b) bg_popup_call_poc_inact_pane_ParamLimits

0xa469,	// (0x0003995b) bg_popup_call_poc_inact_pane

0xc437,	// (0x0003b929) bg_popup_call_poc_act_pane_g1

0xc43f,	// (0x0003b931) bg_popup_call_poc_act_pane_g2

0xc447,	// (0x0003b939) bg_popup_call_poc_act_pane_g3

0xc407,	// (0x0003b8f9) bg_popup_call_poc_act_pane_g4

0xc40f,	// (0x0003b901) bg_popup_call_poc_act_pane_g5

0xc44f,	// (0x0003b941) bg_popup_call_poc_act_pane_g6

0xc41f,	// (0x0003b911) bg_popup_call_poc_act_pane_g7

0xc457,	// (0x0003b949) bg_popup_call_poc_act_pane_g8

0xa20e,	// (0x00039700) main_usb_pane

0x4726,	// (0x00033c18) popup_cale_lunar_info_window

0x2541,	// (0x00031a33) im_reading_pane_t1_ParamLimits

0xa7f9,	// (0x00039ceb) list_im_pane_ParamLimits

0xa80a,	// (0x00039cfc) scroll_pane_cp07_ParamLimits

0xa20e,	// (0x00039700) grid_highlight_pane_cp012

0xa469,	// (0x0003995b) mup_scale_pane_ParamLimits

0xb338,	// (0x0003a82a) main_usb_pane_g1_ParamLimits

0xb338,	// (0x0003a82a) main_usb_pane_g1

0x443a,	// (0x0003392c) main_usb_pane_g2_ParamLimits

0x443a,	// (0x0003392c) main_usb_pane_g2

0x0001,

0xf590,	// (0x0003ea82) main_usb_pane_g_ParamLimits

0xf590,	// (0x0003ea82) main_usb_pane_g

0x4450,	// (0x00033942) main_usb_pane_t1_ParamLimits

0x4450,	// (0x00033942) main_usb_pane_t1

0x4462,	// (0x00033954) main_usb_pane_t2_ParamLimits

0x4462,	// (0x00033954) main_usb_pane_t2

0x4474,	// (0x00033966) main_usb_pane_t3_ParamLimits

0x4474,	// (0x00033966) main_usb_pane_t3

0x4486,	// (0x00033978) main_usb_pane_t4_ParamLimits

0x4486,	// (0x00033978) main_usb_pane_t4

0x449b,	// (0x0003398d) main_usb_pane_t5_ParamLimits

0x449b,	// (0x0003398d) main_usb_pane_t5

0x44b0,	// (0x000339a2) main_usb_pane_t6_ParamLimits

0x44b0,	// (0x000339a2) main_usb_pane_t6

0x0005,

0xf595,	// (0x0003ea87) main_usb_pane_t_ParamLimits

0x370c,	// (0x00032bfe) aid_text_placing

0x3717,	// (0x00032c09) main_location2_pane_t1_ParamLimits

0x372d,	// (0x00032c1f) main_location2_pane_t2_ParamLimits

0x3743,	// (0x00032c35) main_location2_pane_t3_ParamLimits

0x3759,	// (0x00032c4b) main_location2_pane_t4_ParamLimits

0x3759,	// (0x00032c4b) main_location2_pane_t4

0xf3b4,	// (0x0003e8a6) main_location2_pane_t_ParamLimits

0xa4a5,	// (0x00039997) find_pinb_pane_g2_ParamLimits

0xa4a5,	// (0x00039997) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0003e5f6) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0003e5f6) find_pinb_pane_g

0xa4b1,	// (0x000399a3) find_pinb_pane_t1_ParamLimits

0xa4c3,	// (0x000399b5) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0003e5fb) find_pinb_pane_t_ParamLimits

0xa20e,	// (0x00039700) main_call3_pane

0x2cc6,	// (0x000321b8) cale_month_day_heading_pane_t1_ParamLimits

0x2d4c,	// (0x0003223e) cale_month_day_heading_pane_t2_ParamLimits

0x2dc5,	// (0x000322b7) cale_month_day_heading_pane_t3_ParamLimits

0x2e3e,	// (0x00032330) cale_month_day_heading_pane_t4_ParamLimits

0x2ebf,	// (0x000323b1) cale_month_day_heading_pane_t5_ParamLimits

0x2f48,	// (0x0003243a) cale_month_day_heading_pane_t6_ParamLimits

0x2fd9,	// (0x000324cb) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0003e77d) cale_month_day_heading_pane_t_ParamLimits

0xaa54,	// (0x00039f46) smil_status_volume_pane

0x3eef,	// (0x000333e1) postcard_address_pane_ParamLimits

0x3eef,	// (0x000333e1) postcard_address_pane

0x3f05,	// (0x000333f7) postcard_message_pane_ParamLimits

0x3f05,	// (0x000333f7) postcard_message_pane

0x4413,	// (0x00033905) call2_cli_visual_pane_t1_ParamLimits

0x4413,	// (0x00033905) call2_cli_visual_pane_t1

0x49f5,	// (0x00033ee7) postcard_message_pane_t1_ParamLimits

0x49f5,	// (0x00033ee7) postcard_message_pane_t1

0xc66b,	// (0x0003bb5d) postcard_address_pane_t1_ParamLimits

0xc66b,	// (0x0003bb5d) postcard_address_pane_t1

0x49e1,	// (0x00033ed3) popup_call3_audio_in_window_ParamLimits

0x49e1,	// (0x00033ed3) popup_call3_audio_in_window

0x4866,	// (0x00033d58) bg_popup_call3_in_pane_ParamLimits

0x4866,	// (0x00033d58) bg_popup_call3_in_pane

0x48e2,	// (0x00033dd4) popup_call3_audio_in_window_g1_ParamLimits

0x48e2,	// (0x00033dd4) popup_call3_audio_in_window_g1

0x4902,	// (0x00033df4) popup_call3_audio_in_window_g2_ParamLimits

0x4902,	// (0x00033df4) popup_call3_audio_in_window_g2

0x4922,	// (0x00033e14) popup_call3_audio_in_window_g3_ParamLimits

0x4922,	// (0x00033e14) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0003eae9) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0003eae9) popup_call3_audio_in_window_g

0x4953,	// (0x00033e45) popup_call3_audio_in_window_t1_ParamLimits

0x4953,	// (0x00033e45) popup_call3_audio_in_window_t1

0x4991,	// (0x00033e83) popup_call3_audio_in_window_t2_ParamLimits

0x4991,	// (0x00033e83) popup_call3_audio_in_window_t2

0x49cf,	// (0x00033ec1) popup_call3_audio_in_window_t3_ParamLimits

0x49cf,	// (0x00033ec1) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0003eaf2) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0003eaf2) popup_call3_audio_in_window_t

0xa6df,	// (0x00039bd1) bg_popup_call3_rect_pane

0xc3af,	// (0x0003b8a1) bg_popup_call3_rect_pane_g1

0xa618,	// (0x00039b0a) bg_popup_call3_rect_pane_g2

0xc3b7,	// (0x0003b8a9) bg_popup_call3_rect_pane_g3

0xc3bf,	// (0x0003b8b1) bg_popup_call3_rect_pane_g4

0xc3c7,	// (0x0003b8b9) bg_popup_call3_rect_pane_g5

0xc3cf,	// (0x0003b8c1) bg_popup_call3_rect_pane_g6

0xc3d7,	// (0x0003b8c9) bg_popup_call3_rect_pane_g7

0x3a8f,	// (0x00032f81) mup_visualizer_osc_pane

0xb1ee,	// (0x0003a6e0) mup_visualizer_spec_pane

0x4896,	// (0x00033d88) call3_video_qcif_pane_ParamLimits

0x4896,	// (0x00033d88) call3_video_qcif_pane

0x48a9,	// (0x00033d9b) call3_video_qcif_uncrop_pane_ParamLimits

0x48a9,	// (0x00033d9b) call3_video_qcif_uncrop_pane

0x48b9,	// (0x00033dab) call3_video_subqcif_pane_ParamLimits

0x48b9,	// (0x00033dab) call3_video_subqcif_pane

0x48cf,	// (0x00033dc1) call3_video_subqcif_uncrop_pane_ParamLimits

0x48cf,	// (0x00033dc1) call3_video_subqcif_uncrop_pane

0x4942,	// (0x00033e34) popup_call3_audio_in_window_g4_ParamLimits

0x4942,	// (0x00033e34) popup_call3_audio_in_window_g4

0x4833,	// (0x00033d25) mup_spec_half_pane

0x483c,	// (0x00033d2e) mup_spec_half_pane_cp

0xc62b,	// (0x0003bb1d) mup_osc_middle_pane

0xc634,	// (0x0003bb26) mup_visualizer_osc_pane_g1

0x4813,	// (0x00033d05) mup_spec_bar_pane_ParamLimits

0x4813,	// (0x00033d05) mup_spec_bar_pane

0xc618,	// (0x0003bb0a) mup_spec_bar_pane_g1

0xc622,	// (0x0003bb14) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0003eadd) mup_spec_bar_pane_g

0x183e,	// (0x00030d30) aid_cale_week_size_cell_pane_ParamLimits

0x1858,	// (0x00030d4a) bg_cale_heading_pane_ParamLimits

0x187c,	// (0x00030d6e) bg_cale_pane_cp01_ParamLimits

0x1899,	// (0x00030d8b) cale_week_corner_pane_ParamLimits

0x18b8,	// (0x00030daa) cale_week_day_heading_pane_ParamLimits

0x18e1,	// (0x00030dd3) cale_week_scroll_pane_g1_ParamLimits

0x1900,	// (0x00030df2) cale_week_scroll_pane_g2_ParamLimits

0x1918,	// (0x00030e0a) cale_week_scroll_pane_g3_ParamLimits

0x1930,	// (0x00030e22) cale_week_scroll_pane_g4_ParamLimits

0x1948,	// (0x00030e3a) cale_week_scroll_pane_g5_ParamLimits

0x1968,	// (0x00030e5a) cale_week_scroll_pane_g6_ParamLimits

0x1988,	// (0x00030e7a) cale_week_scroll_pane_g7_ParamLimits

0x19ac,	// (0x00030e9e) cale_week_scroll_pane_g8_ParamLimits

0x19d0,	// (0x00030ec2) cale_week_scroll_pane_g9_ParamLimits

0x19e8,	// (0x00030eda) cale_week_scroll_pane_g10_ParamLimits

0x1a00,	// (0x00030ef2) cale_week_scroll_pane_g11_ParamLimits

0x1a18,	// (0x00030f0a) cale_week_scroll_pane_g12_ParamLimits

0x1a3c,	// (0x00030f2e) cale_week_scroll_pane_g13_ParamLimits

0x1a3c,	// (0x00030f2e) cale_week_scroll_pane_g14_ParamLimits

0x1a3c,	// (0x00030f2e) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0003e687) cale_week_scroll_pane_g_ParamLimits

0x1a84,	// (0x00030f76) cale_week_time_pane_ParamLimits

0x1aa8,	// (0x00030f9a) grid_cale_week_pane_ParamLimits

0xa655,	// (0x00039b47) listscroll_cale_week_pane_t1

0xa667,	// (0x00039b59) scroll_pane_cp08_ParamLimits

0x2739,	// (0x00031c2b) cale_month_corner_pane_ParamLimits

0xaa2a,	// (0x00039f1c) cale_month_pane_t1

0x2c41,	// (0x00032133) cale_month_week_pane_ParamLimits

0x34b9,	// (0x000329ab) popup_call_status_window_g1_ParamLimits

0x34cd,	// (0x000329bf) popup_call_status_window_g2_ParamLimits

0x34e1,	// (0x000329d3) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0003e82d) popup_call_status_window_g_ParamLimits

0xadcf,	// (0x0003a2c1) aid_call2_pane

0x3d59,	// (0x0003324b) msg_header_pane_g1

0x3eef,	// (0x000333e1) postcard_address2_pane_ParamLimits

0x3eef,	// (0x000333e1) postcard_address2_pane

0x3f05,	// (0x000333f7) postcard_message2_pane_ParamLimits

0x3f05,	// (0x000333f7) postcard_message2_pane

0x47d0,	// (0x00033cc2) message2_row_pane_ParamLimits

0x47d0,	// (0x00033cc2) message2_row_pane

0xc5d3,	// (0x0003bac5) address2_row_pane_ParamLimits

0xc5d3,	// (0x0003bac5) address2_row_pane

0xc5e6,	// (0x0003bad8) postcard_message2_row_pane_g1

0xc5ee,	// (0x0003bae0) postcard_message2_row_pane_t1

0xc5e6,	// (0x0003bad8) address2_row_pane_g1

0xc5ee,	// (0x0003bae0) address2_row_pane_t1

0x1d27,	// (0x00031219) aid_size_cell_vorec

0xa20e,	// (0x00039700) main_rss_pane

0x47f3,	// (0x00033ce5) rss_list_single_pane_ParamLimits

0x47f3,	// (0x00033ce5) rss_list_single_pane

0xc5fc,	// (0x0003baee) rss_list_single_pane_t1

0xc60a,	// (0x0003bafc) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0003ead8) rss_list_single_pane_t

0xa20e,	// (0x00039700) main_camera2_pane

0xa20e,	// (0x00039700) main_video2_pane

0x0274,	// (0x0002f766) cams_zoom_pane_cp2_ParamLimits

0x0274,	// (0x0002f766) cams_zoom_pane_cp2

0x028b,	// (0x0002f77d) image2_vga_pane_ParamLimits

0x028b,	// (0x0002f77d) image2_vga_pane

0x02d3,	// (0x0002f7c5) main_camera2_pane_g1_ParamLimits

0x02d3,	// (0x0002f7c5) main_camera2_pane_g1

0x02f3,	// (0x0002f7e5) main_camera2_pane_g2_ParamLimits

0x02f3,	// (0x0002f7e5) main_camera2_pane_g2

0x030a,	// (0x0002f7fc) main_camera2_pane_g3_ParamLimits

0x030a,	// (0x0002f7fc) main_camera2_pane_g3

0x0321,	// (0x0002f813) main_camera2_pane_g4_ParamLimits

0x0321,	// (0x0002f813) main_camera2_pane_g4

0x0338,	// (0x0002f82a) main_camera2_pane_g5_ParamLimits

0x0338,	// (0x0002f82a) main_camera2_pane_g5

0x034f,	// (0x0002f841) main_camera2_pane_g6_ParamLimits

0x034f,	// (0x0002f841) main_camera2_pane_g6

0x0366,	// (0x0002f858) main_camera2_pane_g7_ParamLimits

0x0366,	// (0x0002f858) main_camera2_pane_g7

0x037d,	// (0x0002f86f) main_camera2_pane_g8_ParamLimits

0x037d,	// (0x0002f86f) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0003eaf9) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0003eaf9) main_camera2_pane_g

0x03ab,	// (0x0002f89d) main_camera2_pane_t1_ParamLimits

0x03ab,	// (0x0002f89d) main_camera2_pane_t1

0x03e0,	// (0x0002f8d2) main_camera2_pane_t2_ParamLimits

0x03e0,	// (0x0002f8d2) main_camera2_pane_t2

0x03fd,	// (0x0002f8ef) main_camera2_pane_t3_ParamLimits

0x03fd,	// (0x0002f8ef) main_camera2_pane_t3

0x045b,	// (0x0002f94d) main_camera2_pane_t4_ParamLimits

0x045b,	// (0x0002f94d) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0003eb0c) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0003eb0c) main_camera2_pane_t

0x04e4,	// (0x0002f9d6) cams_zoom_pane_cp4_ParamLimits

0x04e4,	// (0x0002f9d6) cams_zoom_pane_cp4

0x04fa,	// (0x0002f9ec) image2_cif_pane_ParamLimits

0x04fa,	// (0x0002f9ec) image2_cif_pane

0x0525,	// (0x0002fa17) image2_subqcif_pane_ParamLimits

0x0525,	// (0x0002fa17) image2_subqcif_pane

0x0540,	// (0x0002fa32) main_video2_pane_g1_ParamLimits

0x0540,	// (0x0002fa32) main_video2_pane_g1

0x055a,	// (0x0002fa4c) main_video2_pane_g2_ParamLimits

0x055a,	// (0x0002fa4c) main_video2_pane_g2

0x0570,	// (0x0002fa62) main_video2_pane_g3_ParamLimits

0x0570,	// (0x0002fa62) main_video2_pane_g3

0x0586,	// (0x0002fa78) main_video2_pane_g4_ParamLimits

0x0586,	// (0x0002fa78) main_video2_pane_g4

0x059c,	// (0x0002fa8e) main_video2_pane_g5_ParamLimits

0x059c,	// (0x0002fa8e) main_video2_pane_g5

0x05b2,	// (0x0002faa4) main_video2_pane_g6_ParamLimits

0x05b2,	// (0x0002faa4) main_video2_pane_g6

0x0005,

0xf629,	// (0x0003eb1b) main_video2_pane_g_ParamLimits

0xf629,	// (0x0003eb1b) main_video2_pane_g

0x05cc,	// (0x0002fabe) main_video2_pane_t1_ParamLimits

0x05cc,	// (0x0002fabe) main_video2_pane_t1

0x05f0,	// (0x0002fae2) main_video2_pane_t2_ParamLimits

0x05f0,	// (0x0002fae2) main_video2_pane_t2

0x0640,	// (0x0002fb32) main_video2_pane_t3_ParamLimits

0x0640,	// (0x0002fb32) main_video2_pane_t3

0x0002,

0xf636,	// (0x0003eb28) main_video2_pane_t_ParamLimits

0xf636,	// (0x0003eb28) main_video2_pane_t

0x456e,	// (0x00033a60) call_muted_g2

0x0001,

0xf5d8,	// (0x0003eaca) call_muted_g

0xa20e,	// (0x00039700) main_mup2_pane

0x4a3b,	// (0x00033f2d) main_mup2_pane_g1_ParamLimits

0x4a3b,	// (0x00033f2d) main_mup2_pane_g1

0x4a47,	// (0x00033f39) main_mup2_pane_g2_ParamLimits

0x4a47,	// (0x00033f39) main_mup2_pane_g2

0x4cb8,	// (0x000341aa) main_mup_pane_g13_cp1

0x4cc0,	// (0x000341b2) mup_volume_pane_cp1

0x4a65,	// (0x00033f57) main_mup2_pane_g4_ParamLimits

0x4a65,	// (0x00033f57) main_mup2_pane_g4

0x4a77,	// (0x00033f69) main_mup2_pane_g5_ParamLimits

0x4a77,	// (0x00033f69) main_mup2_pane_g5

0x4a89,	// (0x00033f7b) main_mup2_pane_g6_ParamLimits

0x4a89,	// (0x00033f7b) main_mup2_pane_g6

0x4a9b,	// (0x00033f8d) main_mup2_pane_g7_ParamLimits

0x4a9b,	// (0x00033f8d) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0003eb2f) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0003eb2f) main_mup2_pane_g

0x4ab3,	// (0x00033fa5) main_mup2_pane_t1_ParamLimits

0x4ab3,	// (0x00033fa5) main_mup2_pane_t1

0x4ac9,	// (0x00033fbb) main_mup2_pane_t2_ParamLimits

0x4ac9,	// (0x00033fbb) main_mup2_pane_t2

0x4adf,	// (0x00033fd1) main_mup2_pane_t3_ParamLimits

0x4adf,	// (0x00033fd1) main_mup2_pane_t3

0x4af5,	// (0x00033fe7) main_mup2_pane_t4_ParamLimits

0x4af5,	// (0x00033fe7) main_mup2_pane_t4

0x4b0d,	// (0x00033fff) main_mup2_pane_t5_ParamLimits

0x4b0d,	// (0x00033fff) main_mup2_pane_t5

0x4b25,	// (0x00034017) main_mup2_pane_t6_ParamLimits

0x4b25,	// (0x00034017) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0003eb3e) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0003eb3e) main_mup2_pane_t

0x4b55,	// (0x00034047) mup2_visualizer_pane_ParamLimits

0x4b55,	// (0x00034047) mup2_visualizer_pane

0x4b83,	// (0x00034075) mup_progress_pane_cp_ParamLimits

0x4b83,	// (0x00034075) mup_progress_pane_cp

0x4ca3,	// (0x00034195) mup_volume_pane_cp_ParamLimits

0x4ca3,	// (0x00034195) mup_volume_pane_cp

0x4b99,	// (0x0003408b) mup2_visualizer_pane_g1_ParamLimits

0x4b99,	// (0x0003408b) mup2_visualizer_pane_g1

0xc68e,	// (0x0003bb80) mup2_visualizer_pane_g2_ParamLimits

0xc68e,	// (0x0003bb80) mup2_visualizer_pane_g2

0x4bae,	// (0x000340a0) mup2_visualizer_pane_g3_ParamLimits

0x4bae,	// (0x000340a0) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0003eb4b) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0003eb4b) mup2_visualizer_pane_g

0xb481,	// (0x0003a973) aid_size_cell_fmradio

0xff1e,	// (0x0002f410) aid_height_parent_landcape

0xa888,	// (0x00039d7a) wml_content_pane_cp

0xa890,	// (0x00039d82) wml_tabs_pane

0xa899,	// (0x00039d8b) popup_wml_miniature_window

0xa8a1,	// (0x00039d93) scroll_pane_cp021

0xa8b5,	// (0x00039da7) wml_content_pane_comp8

0xa20e,	// (0x00039700) bg_popup_sub_pane_cp05

0xc6ac,	// (0x0003bb9e) popup_wml_miniature_window_g1

0xc6b4,	// (0x0003bba6) wml_miniature_view_pane

0x4bba,	// (0x000340ac) aid_size_wml_view

0x4bc2,	// (0x000340b4) wml_miniature_view_pane_g1

0x4bcb,	// (0x000340bd) wml_miniature_view_pane_g2

0x4bd4,	// (0x000340c6) wml_miniature_view_pane_g3

0x4bdc,	// (0x000340ce) wml_miniature_view_pane_g4

0x4be4,	// (0x000340d6) wml_miniature_view_pane_g5

0x4bec,	// (0x000340de) wml_miniature_view_pane_g6

0x4bf4,	// (0x000340e6) wml_miniature_view_pane_g7

0x4bfc,	// (0x000340ee) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0003eb52) wml_miniature_view_pane_g

0xc6bc,	// (0x0003bbae) background_graphic_ParamLimits

0xc6bc,	// (0x0003bbae) background_graphic

0xc6c8,	// (0x0003bbba) wml_tabs_2_pane

0xc6d1,	// (0x0003bbc3) wml_tabs_3_pane_ParamLimits

0xc6d1,	// (0x0003bbc3) wml_tabs_3_pane

0xc6e3,	// (0x0003bbd5) wml_tabs_4_pane_ParamLimits

0xc6e3,	// (0x0003bbd5) wml_tabs_4_pane

0xc6f9,	// (0x0003bbeb) wml_tabs_5_pane_ParamLimits

0xc6f9,	// (0x0003bbeb) wml_tabs_5_pane

0xc713,	// (0x0003bc05) wml_tabs_pane_g2_ParamLimits

0xc713,	// (0x0003bc05) wml_tabs_pane_g2

0xc727,	// (0x0003bc19) wml_tabs_pane_g3_ParamLimits

0xc727,	// (0x0003bc19) wml_tabs_pane_g3

0x4c04,	// (0x000340f6) wml_tabs_2_active_pane_ParamLimits

0x4c04,	// (0x000340f6) wml_tabs_2_active_pane

0x4c18,	// (0x0003410a) wml_tabs_2_passive_pane_ParamLimits

0x4c18,	// (0x0003410a) wml_tabs_2_passive_pane

0x4c2c,	// (0x0003411e) wml_tabs_3_active_pane_cp_ParamLimits

0x4c2c,	// (0x0003411e) wml_tabs_3_active_pane_cp

0x4c41,	// (0x00034133) wml_tabs_3_passive_pane_ParamLimits

0x4c41,	// (0x00034133) wml_tabs_3_passive_pane

0x4c54,	// (0x00034146) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c54,	// (0x00034146) wml_tabs_3_passive_pane_cp

0x4c6b,	// (0x0003415d) tabs_4_active_pane

0x4c73,	// (0x00034165) tabs_4_passive_pane

0x4c7d,	// (0x0003416f) tabs_4_passive_pane_cp

0x4c85,	// (0x00034177) tabs_4_passive_pane_cp2

0x4432,	// (0x00033924) aid_height_text

0x3a61,	// (0x00032f53) mup_volume_cont_pane_ParamLimits

0x3a61,	// (0x00032f53) mup_volume_cont_pane

0x14cb,	// (0x000309bd) aid_size_cell_pinb

0x14d5,	// (0x000309c7) aid_size_list_pinb

0x4b6f,	// (0x00034061) mup2_volume_cont_pane_ParamLimits

0x4b6f,	// (0x00034061) mup2_volume_cont_pane

0x4c8f,	// (0x00034181) mup2_volume_cont_pane_g1_ParamLimits

0x4c8f,	// (0x00034181) mup2_volume_cont_pane_g1

0xfa4c,	// (0x0002ef3e) aid_size_cell_touch_ParamLimits

0xfa4c,	// (0x0002ef3e) aid_size_cell_touch

0xfc35,	// (0x0002f127) touch_pane_ParamLimits

0xfc35,	// (0x0002f127) touch_pane

0x1437,	// (0x00030929) main_rss2_pane

0xc744,	// (0x0003bc36) listscroll_rss2_pane

0xc74d,	// (0x0003bc3f) rss2_navigation_pane

0xc755,	// (0x0003bc47) list_rss2_pane

0xaef3,	// (0x0003a3e5) scroll_pane_cp22

0xc75d,	// (0x0003bc4f) rss2_navigation_pane_g1

0xc766,	// (0x0003bc58) rss2_navigation_pane_g2

0xc76e,	// (0x0003bc60) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0003eb63) rss2_navigation_pane_g

0xc776,	// (0x0003bc68) rss2_navigation_pane_t1

0x4cc8,	// (0x000341ba) rss2_list_single_pane_ParamLimits

0x4cc8,	// (0x000341ba) rss2_list_single_pane

0xc784,	// (0x0003bc76) rss2_list_single_pane_t2

0xc792,	// (0x0003bc84) rss2_list_single_pane_t3_ParamLimits

0xc792,	// (0x0003bc84) rss2_list_single_pane_t3

0xc7af,	// (0x0003bca1) rss2_list_single_pane_t4

0x3297,	// (0x00032789) smil_status_pane_g1

0x141d,	// (0x0003090f) main_image2_pane_ParamLimits

0x141d,	// (0x0003090f) main_image2_pane

0x0394,	// (0x0002f886) main_camera2_pane_g9_ParamLimits

0x0394,	// (0x0002f886) main_camera2_pane_g9

0x04b0,	// (0x0002f9a2) main_camera2_pane_t5_ParamLimits

0x04b0,	// (0x0002f9a2) main_camera2_pane_t5

0x4a10,	// (0x00033f02) main_camera2_pane_t6_ParamLimits

0x4a10,	// (0x00033f02) main_camera2_pane_t6

0x4ce2,	// (0x000341d4) main_image2_pane_g1_ParamLimits

0x4ce2,	// (0x000341d4) main_image2_pane_g1

0x4149,	// (0x0003363b) smil2_video_pane_ParamLimits

0x4149,	// (0x0003363b) smil2_video_pane

0x138d,	// (0x0003087f) aid_zoom_text_primary_cp

0x1413,	// (0x00030905) popup_preview_fixed_window

0xa7f1,	// (0x00039ce3) im_reading_pane_g1

0x0266,	// (0x0002f758) cams2_bc_adjust_pane_cp_ParamLimits

0x0266,	// (0x0002f758) cams2_bc_adjust_pane_cp

0x04d6,	// (0x0002f9c8) cams2_bc_adjust_pane_ParamLimits

0x04d6,	// (0x0002f9c8) cams2_bc_adjust_pane

0xc7bd,	// (0x0003bcaf) cams2_bc_adjust_pane_g1

0x4cf8,	// (0x000341ea) cams2_slider_pane

0x4d01,	// (0x000341f3) cams2_slider_pane_g1

0x4d0a,	// (0x000341fc) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0003eb6a) cams2_slider_pane_g

0xfca7,	// (0x0002f199) calc_display_pane_ParamLimits

0xfccc,	// (0x0002f1be) calc_paper_pane_ParamLimits

0xfcef,	// (0x0002f1e1) grid_calc_pane_ParamLimits

0x3543,	// (0x00032a35) popup_clock_digital_window_t1_ParamLimits

0xb41e,	// (0x0003a910) main_image_pane_t1

0xfc87,	// (0x0002f179) aid_size_cell_calc_ParamLimits

0xfc87,	// (0x0002f179) aid_size_cell_calc

0xff74,	// (0x0002f466) popup_blid_sat_info2_window_ParamLimits

0xff74,	// (0x0002f466) popup_blid_sat_info2_window

0xc7cd,	// (0x0003bcbf) aid_size_cell_blid

0xc7d5,	// (0x0003bcc7) bg_popup_window_pane_cp07

0xc7f8,	// (0x0003bcea) grid_popup_blid_pane

0xc802,	// (0x0003bcf4) heading_pane_cp05_ParamLimits

0xc802,	// (0x0003bcf4) heading_pane_cp05

0xc8cc,	// (0x0003bdbe) cell_popup_blid_pane_ParamLimits

0xc8cc,	// (0x0003bdbe) cell_popup_blid_pane

0xc8f6,	// (0x0003bde8) cell_popup_blid_pane_g1

0xc8fe,	// (0x0003bdf0) cell_popup_blid_pane_t1

0x4b3f,	// (0x00034031) mup2_indicator_pane_ParamLimits

0x4b3f,	// (0x00034031) mup2_indicator_pane

0xa6df,	// (0x00039bd1) mup2_visualizer_osc_pane

0xc69a,	// (0x0003bb8c) mup2_visualizer_spec_pane_ParamLimits

0xc69a,	// (0x0003bb8c) mup2_visualizer_spec_pane

0x4d24,	// (0x00034216) mup2_spec_half_pane

0x4d2d,	// (0x0003421f) mup2_spec_half_pane_cp

0x4d35,	// (0x00034227) mup2_spec_bar_pane_ParamLimits

0x4d35,	// (0x00034227) mup2_spec_bar_pane

0xc618,	// (0x0003bb0a) mup2_spec_bar_pane_g1

0xc622,	// (0x0003bb14) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0003eadd) mup2_spec_bar_pane_g

0x4d55,	// (0x00034247) mup2_osc_middle_pane

0xc634,	// (0x0003bb26) mup2_visualizer_osc_pane_g1

0x9de6,	// (0x000392d8) popup_number_entry_window_t1_ParamLimits

0x9df9,	// (0x000392eb) popup_number_entry_window_t2_ParamLimits

0x9e0b,	// (0x000392fd) popup_number_entry_window_t3_ParamLimits

0x9e1d,	// (0x0003930f) popup_number_entry_window_t5_ParamLimits

0x9e1d,	// (0x0003930f) popup_number_entry_window_t5

0xf0af,	// (0x0003e5a1) popup_number_entry_window_t_ParamLimits

0x9e52,	// (0x00039344) text_title_cp2_ParamLimits

0x3da8,	// (0x0003329a) aid_hotspot_pointer_text2_pane

0x3e0a,	// (0x000332fc) main_viewer_pane_g9_ParamLimits

0x3e0a,	// (0x000332fc) main_viewer_pane_g9

0xaa2a,	// (0x00039f1c) cale_month_pane_t1_ParamLimits

0xaa67,	// (0x00039f59) bg_cale_pane_ParamLimits

0xaa7f,	// (0x00039f71) list_cale_pane_ParamLimits

0xaa90,	// (0x00039f82) listscroll_cale_day_pane_t1

0xaaa2,	// (0x00039f94) scroll_pane_cp09_ParamLimits

0x3a97,	// (0x00032f89) main_mup_eq_pane_t1_ParamLimits

0x3a97,	// (0x00032f89) main_mup_eq_pane_t1

0x3ab3,	// (0x00032fa5) main_mup_eq_pane_t2_ParamLimits

0x3ab3,	// (0x00032fa5) main_mup_eq_pane_t2

0x3acf,	// (0x00032fc1) main_mup_eq_pane_t3_ParamLimits

0x3acf,	// (0x00032fc1) main_mup_eq_pane_t3

0x3aed,	// (0x00032fdf) main_mup_eq_pane_t4_ParamLimits

0x3aed,	// (0x00032fdf) main_mup_eq_pane_t4

0x3b0b,	// (0x00032ffd) main_mup_eq_pane_t5_ParamLimits

0x3b0b,	// (0x00032ffd) main_mup_eq_pane_t5

0x3b29,	// (0x0003301b) main_mup_eq_pane_t6_ParamLimits

0x3b29,	// (0x0003301b) main_mup_eq_pane_t6

0x3b3f,	// (0x00033031) main_mup_eq_pane_t7_ParamLimits

0x3b3f,	// (0x00033031) main_mup_eq_pane_t7

0x3b55,	// (0x00033047) main_mup_eq_pane_t8_ParamLimits

0x3b55,	// (0x00033047) main_mup_eq_pane_t8

0x3b6b,	// (0x0003305d) main_mup_eq_pane_t9_ParamLimits

0x3b6b,	// (0x0003305d) main_mup_eq_pane_t9

0x3b87,	// (0x00033079) main_mup_eq_pane_t10_ParamLimits

0x3b87,	// (0x00033079) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0003e92c) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0003e92c) main_mup_eq_pane_t

0x3c5c,	// (0x0003314e) mup_equalizer_pane_cp5_ParamLimits

0x3c74,	// (0x00033166) mup_equalizer_pane_cp6_ParamLimits

0x3c8c,	// (0x0003317e) mup_equalizer_pane_cp7_ParamLimits

0x1437,	// (0x00030929) main_gallery_pane

0xc63d,	// (0x0003bb2f) smil2_volume_pane

0xc645,	// (0x0003bb37) smil_status_volume_pane_g1_ParamLimits

0xc658,	// (0x0003bb4a) smil_status_volume_pane_g2_ParamLimits

0x4844,	// (0x00033d36) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0003eae2) smil_status_volume_pane_g_ParamLimits

0xc7d5,	// (0x0003bcc7) bg_popup_window_pane_cp07_ParamLimits

0xc7e3,	// (0x0003bcd5) blid_firmament_pane

0x4d5e,	// (0x00034250) aid_size_cell_gallery_ParamLimits

0x4d5e,	// (0x00034250) aid_size_cell_gallery

0x4d74,	// (0x00034266) grid_gallery_pane_ParamLimits

0x4d74,	// (0x00034266) grid_gallery_pane

0x4d8f,	// (0x00034281) cell_gallery_pane_ParamLimits

0x4d8f,	// (0x00034281) cell_gallery_pane

0xc90c,	// (0x0003bdfe) bg_cell_gallery_focus_pane_ParamLimits

0xc90c,	// (0x0003bdfe) bg_cell_gallery_focus_pane

0xc91e,	// (0x0003be10) cell_gallery_pane_g1_ParamLimits

0xc91e,	// (0x0003be10) cell_gallery_pane_g1

0x4de0,	// (0x000342d2) cell_gallery_pane_g2_ParamLimits

0x4de0,	// (0x000342d2) cell_gallery_pane_g2

0x4ded,	// (0x000342df) cell_gallery_pane_g3_ParamLimits

0x4ded,	// (0x000342df) cell_gallery_pane_g3

0xc92a,	// (0x0003be1c) cell_gallery_pane_g4_ParamLimits

0xc92a,	// (0x0003be1c) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0003eb90) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0003eb90) cell_gallery_pane_g

0xc936,	// (0x0003be28) bg_cell_gallery_focus_pane_g1

0xc93e,	// (0x0003be30) bg_cell_gallery_focus_pane_g2

0xc946,	// (0x0003be38) bg_cell_gallery_focus_pane_g3

0xc94e,	// (0x0003be40) bg_cell_gallery_focus_pane_g4

0xc956,	// (0x0003be48) bg_cell_gallery_focus_pane_g5

0xc95e,	// (0x0003be50) bg_cell_gallery_focus_pane_g6

0xc966,	// (0x0003be58) bg_cell_gallery_focus_pane_g7

0xc96e,	// (0x0003be60) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0003eb99) bg_cell_gallery_focus_pane_g

0xc976,	// (0x0003be68) aid_firma_cardinal

0xc98a,	// (0x0003be7c) blid_firmament_pane_t1

0xc9a1,	// (0x0003be93) blid_firmament_pane_t2

0xc9b8,	// (0x0003beaa) blid_firmament_pane_t3

0xc9cf,	// (0x0003bec1) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0003ebaa) blid_firmament_pane_t

0xc9e6,	// (0x0003bed8) blid_sat_info_pane

0xc9f6,	// (0x0003bee8) blid_sat_info_pane_g1

0xc9f6,	// (0x0003bee8) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0003ebb3) blid_sat_info_pane_g

0xca00,	// (0x0003bef2) blid_sat_info_pane_t1

0xca0e,	// (0x0003bf00) smil2_volume_content_pane

0xca17,	// (0x0003bf09) smil2_volume_pane_g1

0xa5af,	// (0x00039aa1) smil2_volume_content_pane_g1

0xca1f,	// (0x0003bf11) smil2_volume_content_pane_g2

0xca28,	// (0x0003bf1a) smil2_volume_content_pane_g3

0xca31,	// (0x0003bf23) smil2_volume_content_pane_g4

0xca3a,	// (0x0003bf2c) smil2_volume_content_pane_g5

0xca43,	// (0x0003bf35) smil2_volume_content_pane_g6

0xca4c,	// (0x0003bf3e) smil2_volume_content_pane_g7

0xca55,	// (0x0003bf47) smil2_volume_content_pane_g8

0xca5e,	// (0x0003bf50) smil2_volume_content_pane_g9

0xca67,	// (0x0003bf59) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0003ebb8) smil2_volume_content_pane_g

0x1b76,	// (0x00031068) cale_week_day_heading_pane_t1_ParamLimits

0x1ba0,	// (0x00031092) cale_week_day_heading_pane_t2_ParamLimits

0x1bcf,	// (0x000310c1) cale_week_day_heading_pane_t3_ParamLimits

0x1bfe,	// (0x000310f0) cale_week_day_heading_pane_t4_ParamLimits

0x1c2d,	// (0x0003111f) cale_week_day_heading_pane_t5_ParamLimits

0x1c60,	// (0x00031152) cale_week_day_heading_pane_t6_ParamLimits

0x1c97,	// (0x00031189) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0003e6a8) cale_week_day_heading_pane_t_ParamLimits

0xa684,	// (0x00039b76) bg_cale_side_pane_ParamLimits

0xfdcc,	// (0x0002f2be) cale_week_time_pane_t1_ParamLimits

0xfde6,	// (0x0002f2d8) cale_week_time_pane_t2_ParamLimits

0xfe00,	// (0x0002f2f2) cale_week_time_pane_t3_ParamLimits

0xfe1a,	// (0x0002f30c) cale_week_time_pane_t4_ParamLimits

0xfe34,	// (0x0002f326) cale_week_time_pane_t5_ParamLimits

0xfe4e,	// (0x0002f340) cale_week_time_pane_t6_ParamLimits

0xfe6e,	// (0x0002f360) cale_week_time_pane_t7_ParamLimits

0xfe94,	// (0x0002f386) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0003e6b7) cale_week_time_pane_t_ParamLimits

0x1cc1,	// (0x000311b3) cell_cale_week_pane_g2_ParamLimits

0xa684,	// (0x00039b76) bg_cale_side_pane_cp01_ParamLimits

0x306a,	// (0x0003255c) cale_month_week_pane_t1_ParamLimits

0x3083,	// (0x00032575) cale_month_week_pane_t2_ParamLimits

0x309c,	// (0x0003258e) cale_month_week_pane_t3_ParamLimits

0x30b5,	// (0x000325a7) cale_month_week_pane_t4_ParamLimits

0x30ce,	// (0x000325c0) cale_month_week_pane_t5_ParamLimits

0x30e7,	// (0x000325d9) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0003e78c) cale_month_week_pane_t_ParamLimits

0x3280,	// (0x00032772) cell_cale_month_pane_g1_ParamLimits

0x1437,	// (0x00030929) main_cale_event_viewer_pane

0x9dbc,	// (0x000392ae) listscroll_cale_event_viewer_pane

0xca70,	// (0x0003bf62) list_cale_ev_pane

0xca78,	// (0x0003bf6a) scroll_pane_cp023

0x4dfa,	// (0x000342ec) field_cale_ev_pane_ParamLimits

0x4dfa,	// (0x000342ec) field_cale_ev_pane

0xca84,	// (0x0003bf76) field_cale_ev_content_pane_ParamLimits

0xca84,	// (0x0003bf76) field_cale_ev_content_pane

0xca90,	// (0x0003bf82) field_cale_ev_pane_g1_ParamLimits

0xca90,	// (0x0003bf82) field_cale_ev_pane_g1

0xca9c,	// (0x0003bf8e) field_cale_ev_pane_g2_ParamLimits

0xca9c,	// (0x0003bf8e) field_cale_ev_pane_g2

0xcab4,	// (0x0003bfa6) field_cale_ev_pane_g3_ParamLimits

0xcab4,	// (0x0003bfa6) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0003ebcd) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0003ebcd) field_cale_ev_pane_g

0xcacc,	// (0x0003bfbe) field_cale_ev_pane_t1_ParamLimits

0xcacc,	// (0x0003bfbe) field_cale_ev_pane_t1

0x4e1e,	// (0x00034310) field_cale_ev_content_pane_t1_ParamLimits

0x4e1e,	// (0x00034310) field_cale_ev_content_pane_t1

0xb2bc,	// (0x0003a7ae) bg_button_pane_cp01

0x182e,	// (0x00030d20) listscroll_cale_week_pane_ParamLimits

0xa64c,	// (0x00039b3e) popup_toolbar_window_cp01

0xa655,	// (0x00039b47) listscroll_cale_week_pane_t1_ParamLimits

0x182e,	// (0x00030d20) listscroll_cale_day_pane_ParamLimits

0xa64c,	// (0x00039b3e) popup_toolbar_window_cp02

0xaa90,	// (0x00039f82) listscroll_cale_day_pane_t1_ParamLimits

0xff3c,	// (0x0002f42e) main_cale_month_pane_ParamLimits

0x4761,	// (0x00033c53) popup_toolbar_window_cp03_ParamLimits

0x4761,	// (0x00033c53) popup_toolbar_window_cp03

0x4007,	// (0x000334f9) main_image_pane_g2_ParamLimits

0x4007,	// (0x000334f9) main_image_pane_g2

0x4018,	// (0x0003350a) main_image_pane_g3_ParamLimits

0x4018,	// (0x0003350a) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0003e9be) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0003e9be) main_image_pane_g

0xb41e,	// (0x0003a910) main_image_pane_t1_ParamLimits

0x4029,	// (0x0003351b) main_image_pane_t2_ParamLimits

0x4029,	// (0x0003351b) main_image_pane_t2

0x403b,	// (0x0003352d) main_image_pane_t3_ParamLimits

0x403b,	// (0x0003352d) main_image_pane_t3

0x4063,	// (0x00033555) main_image_pane_t4_ParamLimits

0x4063,	// (0x00033555) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0003e9c5) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0003e9c5) main_image_pane_t

0x4083,	// (0x00033575) popup_image_details_window_cp01

0x408d,	// (0x0003357f) popup_toobar_trans_pane_cp01_ParamLimits

0x408d,	// (0x0003357f) popup_toobar_trans_pane_cp01

0x0067,	// (0x0002f559) popup_image_details_window_ParamLimits

0x0067,	// (0x0002f559) popup_image_details_window

0x4732,	// (0x00033c24) popup_image_focus_window

0x0220,	// (0x0002f712) camera2_autofocus_pane_ParamLimits

0x0220,	// (0x0002f712) camera2_autofocus_pane

0x9dbc,	// (0x000392ae) bg_popup_sub_pane_cp06

0xcae3,	// (0x0003bfd5) popup_image_focus_window_g1

0xcaeb,	// (0x0003bfdd) popup_image_focus_window_g2

0xcaf3,	// (0x0003bfe5) popup_image_focus_window_g3

0xcafb,	// (0x0003bfed) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0003ebd4) popup_image_focus_window_g

0xcb03,	// (0x0003bff5) popup_image_focus_window_t1

0xcb11,	// (0x0003c003) popup_image_focus_window_t2

0xcb21,	// (0x0003c013) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0003ebdd) popup_image_focus_window_t

0xcb2f,	// (0x0003c021) camera2_autofocus_pane_g1

0xb208,	// (0x0003a6fa) bg_tb_trans_pane_cp01

0xcb3d,	// (0x0003c02f) popup_image_details_window_g1

0xcb50,	// (0x0003c042) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0003ebef) popup_image_details_window_g

0xcb79,	// (0x0003c06b) popup_image_details_window_t1

0xcb8b,	// (0x0003c07d) popup_image_details_window_t2

0xcba4,	// (0x0003c096) popup_image_details_window_t3

0xcbb8,	// (0x0003c0aa) popup_image_details_window_t4

0xcbd3,	// (0x0003c0c5) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0003ebf6) popup_image_details_window_t

0xa51a,	// (0x00039a0c) bg_calc_paper_pane_ParamLimits

0x1437,	// (0x00030929) grid_highlight_pane_cp013

0x1681,	// (0x00030b73) list_calc_pane_ParamLimits

0x1693,	// (0x00030b85) scroll_pane_cp024

0xa52e,	// (0x00039a20) bg_calc_display_pane_ParamLimits

0xfd1d,	// (0x0002f20f) calc_display_pane_t1_ParamLimits

0xfd2f,	// (0x0002f221) calc_display_pane_t2_ParamLimits

0x169b,	// (0x00030b8d) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0003e628) calc_display_pane_t_ParamLimits

0xfd96,	// (0x0002f288) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0003e645) cell_calc_pane_g

0xfd9f,	// (0x0002f291) cell_calc_pane_t1

0xa58d,	// (0x00039a7f) grid_highlight_pane_cp02_ParamLimits

0xa5a3,	// (0x00039a95) toolbar_button_pane_cp01_ParamLimits

0xa5a3,	// (0x00039a95) toolbar_button_pane_cp01

0xb463,	// (0x0003a955) temp_image_control_pane_ParamLimits

0xb463,	// (0x0003a955) temp_image_control_pane

0x141d,	// (0x0003090f) main_mp3_pane

0xcbed,	// (0x0003c0df) temp_image_control_pane_g1_ParamLimits

0xcbed,	// (0x0003c0df) temp_image_control_pane_g1

0xcbfb,	// (0x0003c0ed) temp_image_control_pane_g2_ParamLimits

0xcbfb,	// (0x0003c0ed) temp_image_control_pane_g2

0xcc0d,	// (0x0003c0ff) temp_image_control_pane_g3_ParamLimits

0xcc0d,	// (0x0003c0ff) temp_image_control_pane_g3

0x4e6f,	// (0x00034361) temp_image_control_pane_g4_ParamLimits

0x4e6f,	// (0x00034361) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0003ec01) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0003ec01) temp_image_control_pane_g

0xcbed,	// (0x0003c0df) main_mp3_pane_g1

0x4e82,	// (0x00034374) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0003ec0a) main_mp3_pane_g

0xcc50,	// (0x0003c142) main_mp3_pane_t1

0xa6fc,	// (0x00039bee) main_camera_pane_g8_ParamLimits

0xa6fc,	// (0x00039bee) main_camera_pane_g8

0x1fdd,	// (0x000314cf) main_video_pane_g7_ParamLimits

0x1fdd,	// (0x000314cf) main_video_pane_g7

0x4a29,	// (0x00033f1b) main_camera2_pane_t7_ParamLimits

0x4a29,	// (0x00033f1b) main_camera2_pane_t7

0xa848,	// (0x00039d3a) scroll_pane_cp025_ParamLimits

0xa848,	// (0x00039d3a) scroll_pane_cp025

0xa85c,	// (0x00039d4e) scroll_pane_cp026_ParamLimits

0xa85c,	// (0x00039d4e) scroll_pane_cp026

0xa86b,	// (0x00039d5d) wml_content_pane_ParamLimits

0x1437,	// (0x00030929) main_touch_calib_pane

0x4f54,	// (0x00034446) main_touch_calib_pane_g1

0x4f66,	// (0x00034458) main_touch_calib_pane_g2

0x4f78,	// (0x0003446a) main_touch_calib_pane_g3

0x4f8a,	// (0x0003447c) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0003ec28) main_touch_calib_pane_g

0x4f9c,	// (0x0003448e) main_touch_calib_pane_t1

0x4fb6,	// (0x000344a8) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0003ec31) main_touch_calib_pane_t

0xafc2,	// (0x0003a4b4) mup_progress_pane_cp02

0xaff7,	// (0x0003a4e9) navi_pane_g1

0xb0b2,	// (0x0003a5a4) navi_pane_mp_t3

0x141d,	// (0x0003090f) main_mp3_pane_ParamLimits

0x4776,	// (0x00033c68) navi_pane_ParamLimits

0xcbed,	// (0x0003c0df) main_mp3_pane_g1_ParamLimits

0x4e82,	// (0x00034374) main_mp3_pane_g2_ParamLimits

0x4e8e,	// (0x00034380) main_mp3_pane_g3_ParamLimits

0x4e8e,	// (0x00034380) main_mp3_pane_g3

0x4e9c,	// (0x0003438e) main_mp3_pane_g4_ParamLimits

0x4e9c,	// (0x0003438e) main_mp3_pane_g4

0xcc1d,	// (0x0003c10f) main_mp3_pane_g5_ParamLimits

0xcc1d,	// (0x0003c10f) main_mp3_pane_g5

0xcc2b,	// (0x0003c11d) main_mp3_pane_g6_ParamLimits

0xcc2b,	// (0x0003c11d) main_mp3_pane_g6

0xcc38,	// (0x0003c12a) main_mp3_pane_g7_ParamLimits

0xcc38,	// (0x0003c12a) main_mp3_pane_g7

0xcc44,	// (0x0003c136) main_mp3_pane_g8_ParamLimits

0xcc44,	// (0x0003c136) main_mp3_pane_g8

0xf718,	// (0x0003ec0a) main_mp3_pane_g_ParamLimits

0x4ea8,	// (0x0003439a) main_mp3_pane_t2

0x4eb6,	// (0x000343a8) main_mp3_pane_t3

0xcc5e,	// (0x0003c150) main_mp3_pane_t4

0xcc6c,	// (0x0003c15e) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0003ec1b) main_mp3_pane_t

0xcc7a,	// (0x0003c16c) mup_progress_pane_cp01

0x138d,	// (0x0003087f) aid_zoom_text_secondary2

0xca70,	// (0x0003bf62) list_cale_ev2_pane

0xca78,	// (0x0003bf6a) scroll_pane_cp023_ParamLimits

0x5010,	// (0x00034502) field_cale_ev2_pane_ParamLimits

0x5010,	// (0x00034502) field_cale_ev2_pane

0x5034,	// (0x00034526) field_cale_ev2_pane_g1_ParamLimits

0x5034,	// (0x00034526) field_cale_ev2_pane_g1

0x5040,	// (0x00034532) field_cale_ev2_pane_g2_ParamLimits

0x5040,	// (0x00034532) field_cale_ev2_pane_g2

0x5058,	// (0x0003454a) field_cale_ev2_pane_g3_ParamLimits

0x5058,	// (0x0003454a) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0003ec3c) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0003ec3c) field_cale_ev2_pane_g

0x5070,	// (0x00034562) field_cale_ev2_pane_t1_ParamLimits

0x5070,	// (0x00034562) field_cale_ev2_pane_t1

0x5087,	// (0x00034579) field_cale_ev2_pane_t2_ParamLimits

0x5087,	// (0x00034579) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0003ec45) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0003ec45) field_cale_ev2_pane_t

0x3e9f,	// (0x00033391) main_postcard_pane_g5_ParamLimits

0x3e9f,	// (0x00033391) main_postcard_pane_g5

0x3eb5,	// (0x000333a7) main_postcard_pane_g6_ParamLimits

0x3eb5,	// (0x000333a7) main_postcard_pane_g6

0x1d89,	// (0x0003127b) camera2_autofocus_pane_cp_ParamLimits

0x1d89,	// (0x0003127b) camera2_autofocus_pane_cp

0x141d,	// (0x0003090f) main_mup3_pane

0x50e6,	// (0x000345d8) main_mup3_pane_g1_ParamLimits

0x50e6,	// (0x000345d8) main_mup3_pane_g1

0x5108,	// (0x000345fa) main_mup3_pane_g2_ParamLimits

0x5108,	// (0x000345fa) main_mup3_pane_g2

0x5183,	// (0x00034675) main_mup3_pane_g3_ParamLimits

0x5183,	// (0x00034675) main_mup3_pane_g3

0x51ed,	// (0x000346df) main_mup3_pane_g4_ParamLimits

0x51ed,	// (0x000346df) main_mup3_pane_g4

0x5257,	// (0x00034749) main_mup3_pane_g5_ParamLimits

0x5257,	// (0x00034749) main_mup3_pane_g5

0x52c1,	// (0x000347b3) main_mup3_pane_g6_ParamLimits

0x52c1,	// (0x000347b3) main_mup3_pane_g6

0xcc8e,	// (0x0003c180) main_mup3_pane_g7_ParamLimits

0xcc8e,	// (0x0003c180) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0003ec55) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0003ec55) main_mup3_pane_g

0x5341,	// (0x00034833) main_mup3_pane_t1_ParamLimits

0x5341,	// (0x00034833) main_mup3_pane_t1

0x53b3,	// (0x000348a5) main_mup3_pane_t2_ParamLimits

0x53b3,	// (0x000348a5) main_mup3_pane_t2

0x5485,	// (0x00034977) main_mup3_pane_t4_ParamLimits

0x5485,	// (0x00034977) main_mup3_pane_t4

0x54e3,	// (0x000349d5) main_mup3_pane_t5_ParamLimits

0x54e3,	// (0x000349d5) main_mup3_pane_t5

0x559f,	// (0x00034a91) main_mup3_pane_t6_ParamLimits

0x559f,	// (0x00034a91) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0003ec66) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0003ec66) main_mup3_pane_t

0x5657,	// (0x00034b49) mup3_progress_pane_ParamLimits

0x5657,	// (0x00034b49) mup3_progress_pane

0x56ef,	// (0x00034be1) popup_mup3_control_window_ParamLimits

0x56ef,	// (0x00034be1) popup_mup3_control_window

0xcc9c,	// (0x0003c18e) popup_mup3_text_window

0x5725,	// (0x00034c17) mup3_progress_pane_t1

0x5744,	// (0x00034c36) mup3_progress_pane_t2

0xcca4,	// (0x0003c196) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0003ec73) mup3_progress_pane_t

0xccc1,	// (0x0003c1b3) mup_progress_pane_cp03

0x9dbc,	// (0x000392ae) bg_tb_trans_pane_cp04

0x5763,	// (0x00034c55) mup3_volume_pane

0x576b,	// (0x00034c5d) popup_mup3_control_window_g1

0x5774,	// (0x00034c66) mup3_volume_pane_g1

0x577d,	// (0x00034c6f) mup3_volume_pane_g2

0x5786,	// (0x00034c78) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0003ec7a) mup3_volume_pane_g

0x9dbc,	// (0x000392ae) bg_tb_trans_pane_cp03

0xccd1,	// (0x0003c1c3) popup_mup3_text_window_g1

0xccd9,	// (0x0003c1cb) popup_mup3_text_window_t1

0xa576,	// (0x00039a68) list_calc_item_pane_g1_ParamLimits

0xc73b,	// (0x0003bc2d) mup_volume_pane_cp_g1

0x4fd0,	// (0x000344c2) main_touch_calib_pane_t3

0x4fe4,	// (0x000344d6) main_touch_calib_pane_t4

0x4ffa,	// (0x000344ec) main_touch_calib_pane_t5

0x1379,	// (0x0003086b) aid_cell_size_toolbar2

0x1381,	// (0x00030873) aid_popup3_width_pane

0x138d,	// (0x0003087f) aid_zoom_text_msg_primary

0x1d71,	// (0x00031263) vorec_t7

0xa53a,	// (0x00039a2c) bg_calc_paper_pane_g1_ParamLimits

0xa546,	// (0x00039a38) bg_calc_paper_pane_g2_ParamLimits

0xa552,	// (0x00039a44) bg_calc_paper_pane_g3_ParamLimits

0xa55e,	// (0x00039a50) bg_calc_paper_pane_g4_ParamLimits

0xa56a,	// (0x00039a5c) bg_calc_paper_pane_g5_ParamLimits

0x16ad,	// (0x00030b9f) bg_calc_paper_pane_g6_ParamLimits

0x16bb,	// (0x00030bad) bg_calc_paper_pane_g7_ParamLimits

0x16c9,	// (0x00030bbb) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0003e62f) bg_calc_paper_pane_g_ParamLimits

0x16dc,	// (0x00030bce) calc_bg_paper_pane_g9_ParamLimits

0x1eeb,	// (0x000313dd) image_qvga_pane_ParamLimits

0x1eeb,	// (0x000313dd) image_qvga_pane

0xa469,	// (0x0003995b) bg_popup_sub_pane_cp04_ParamLimits

0xb39a,	// (0x0003a88c) popup_mup_playback_window_g1_ParamLimits

0xb3a6,	// (0x0003a898) popup_mup_playback_window_t1_ParamLimits

0xb3bb,	// (0x0003a8ad) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0003e9b9) popup_mup_playback_window_t_ParamLimits

0x4a57,	// (0x00033f49) main_mup2_pane_g3_ParamLimits

0x4a57,	// (0x00033f49) main_mup2_pane_g3

0x22f3,	// (0x000317e5) popup_toolbar_window_cp04

0xb7b6,	// (0x0003aca8) popup_call2_audio_second_window_g3_ParamLimits

0xb7b6,	// (0x0003aca8) popup_call2_audio_second_window_g3

0xbbc0,	// (0x0003b0b2) popup_call2_audio_first_window_g4_ParamLimits

0xbbc0,	// (0x0003b0b2) popup_call2_audio_first_window_g4

0xc23f,	// (0x0003b731) popup_call2_audio_in_window_g4_ParamLimits

0xc23f,	// (0x0003b731) popup_call2_audio_in_window_g4

0x3fe9,	// (0x000334db) aid_area_sk_bg_cut_ParamLimits

0x3fe9,	// (0x000334db) aid_area_sk_bg_cut

0xb3d0,	// (0x0003a8c2) aid_area_sk_bg_cut_2_ParamLimits

0xb3d0,	// (0x0003a8c2) aid_area_sk_bg_cut_2

0x4dd0,	// (0x000342c2) aid_placing_details_win

0x4dd8,	// (0x000342ca) aid_placing_details_win_2

0xcb2f,	// (0x0003c021) camera2_autofocus_pane_g1_ParamLimits

0xfbdc,	// (0x0002f0ce) popup_fixed_preview_cale_window_ParamLimits

0xfbdc,	// (0x0002f0ce) popup_fixed_preview_cale_window

0xb132,	// (0x0003a624) navi_slider_pane_g3

0xb13b,	// (0x0003a62d) navi_slider_pane_g4

0xb144,	// (0x0003a636) navi_slider_pane_g5

0xb132,	// (0x0003a624) navi_slider_pane_g6

0x3845,	// (0x00032d37) navi_slider_pane_g7

0xb281,	// (0x0003a773) mup_scale_pane_g3

0xb28a,	// (0x0003a77c) mup_scale_pane_g4

0xb293,	// (0x0003a785) mup_scale_pane_g5

0x3ca4,	// (0x00033196) mup_scale_pane_g6

0x3cad,	// (0x0003319f) mup_scale_pane_g7

0xb132,	// (0x0003a624) cams2_slider_pane_g3

0xc7c5,	// (0x0003bcb7) cams2_slider_pane_g4

0x4d13,	// (0x00034205) cams2_slider_pane_g5

0xb132,	// (0x0003a624) cams2_slider_pane_g6

0x4d1b,	// (0x0003420d) cams2_slider_pane_g7

0xc9f6,	// (0x0003bee8) camera2_autofocus_pane_cp_g1

0xc59e,	// (0x0003ba90) bg_popup_preview_window_pane_cp02_ParamLimits

0xc59e,	// (0x0003ba90) bg_popup_preview_window_pane_cp02

0xcce7,	// (0x0003c1d9) list_fp_cale_pane_ParamLimits

0xcce7,	// (0x0003c1d9) list_fp_cale_pane

0xccf3,	// (0x0003c1e5) popup_fixed_preview_cale_window_t1_ParamLimits

0xccf3,	// (0x0003c1e5) popup_fixed_preview_cale_window_t1

0x578f,	// (0x00034c81) popup_fixed_preview_cale_window_t2_ParamLimits

0x578f,	// (0x00034c81) popup_fixed_preview_cale_window_t2

0x57a4,	// (0x00034c96) popup_fixed_preview_cale_window_t3_ParamLimits

0x57a4,	// (0x00034c96) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0003ec81) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0003ec81) popup_fixed_preview_cale_window_t

0x57bb,	// (0x00034cad) list_single_fp_cale_pane_ParamLimits

0x57bb,	// (0x00034cad) list_single_fp_cale_pane

0xcd11,	// (0x0003c203) list_single_fp_cale_pane_g1_ParamLimits

0xcd11,	// (0x0003c203) list_single_fp_cale_pane_g1

0xcd1d,	// (0x0003c20f) list_single_fp_cale_pane_g2_ParamLimits

0xcd1d,	// (0x0003c20f) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0003ec88) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0003ec88) list_single_fp_cale_pane_g

0xcd36,	// (0x0003c228) list_single_fp_cale_pane_t1_ParamLimits

0xcd36,	// (0x0003c228) list_single_fp_cale_pane_t1

0xcd48,	// (0x0003c23a) list_single_fp_cale_pane_t2_ParamLimits

0xcd48,	// (0x0003c23a) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0003ec8f) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0003ec8f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1437,	// (0x00030929) main_dialer_pane

0x57d3,	// (0x00034cc5) aid_cell_size_keypad

0x57dd,	// (0x00034ccf) dialer_ne_pane

0x57e7,	// (0x00034cd9) grid_dialer_command_1_pane

0x57ef,	// (0x00034ce1) grid_dialer_command_2_pane

0x57f7,	// (0x00034ce9) grid_dialer_keypad_pane

0x580b,	// (0x00034cfd) bg_popup_call_pane_cp06_ParamLimits

0x580b,	// (0x00034cfd) bg_popup_call_pane_cp06

0x5817,	// (0x00034d09) dialer_ne_clear_pane_ParamLimits

0x5817,	// (0x00034d09) dialer_ne_clear_pane

0xcd7b,	// (0x0003c26d) dialer_ne_pane_g1

0xcd83,	// (0x0003c275) dialer_ne_pane_t1_ParamLimits

0xcd83,	// (0x0003c275) dialer_ne_pane_t1

0x5823,	// (0x00034d15) dialer_ne_pane_t2_ParamLimits

0x5823,	// (0x00034d15) dialer_ne_pane_t2

0x584d,	// (0x00034d3f) dialer_ne_pane_t3_ParamLimits

0x584d,	// (0x00034d3f) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0003ec94) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0003ec94) dialer_ne_pane_t

0x587d,	// (0x00034d6f) dialer_ne_pane_t3_copy1_ParamLimits

0x587d,	// (0x00034d6f) dialer_ne_pane_t3_copy1

0x58ac,	// (0x00034d9e) cell_dialer_keypad_pane_ParamLimits

0x58ac,	// (0x00034d9e) cell_dialer_keypad_pane

0x58c3,	// (0x00034db5) cell_dialer_command_1_pane_ParamLimits

0x58c3,	// (0x00034db5) cell_dialer_command_1_pane

0x58d9,	// (0x00034dcb) cell_dialer_command_2_pane_ParamLimits

0x58d9,	// (0x00034dcb) cell_dialer_command_2_pane

0xcd95,	// (0x0003c287) bg_button_pane_cp02_ParamLimits

0xcd95,	// (0x0003c287) bg_button_pane_cp02

0x58e8,	// (0x00034dda) cell_dialer_keypad_pane_g1_ParamLimits

0x58e8,	// (0x00034dda) cell_dialer_keypad_pane_g1

0xcd95,	// (0x0003c287) bg_button_pane_cp03_ParamLimits

0xcd95,	// (0x0003c287) bg_button_pane_cp03

0x58f9,	// (0x00034deb) cell_dialer_command_1_pane_g1_ParamLimits

0x58f9,	// (0x00034deb) cell_dialer_command_1_pane_g1

0xcda1,	// (0x0003c293) bg_button_pane_cp04

0x590d,	// (0x00034dff) cell_dialer_command_2_pane_g1

0xa6df,	// (0x00039bd1) bg_button_pane_cp06

0xcda9,	// (0x0003c29b) dialer_ne_clear_pane_g1

0xb003,	// (0x0003a4f5) navi_pane_g2

0xb031,	// (0x0003a523) navi_pane_g3

0x0002,

0xf3ca,	// (0x0003e8bc) navi_pane_g

0xb0c0,	// (0x0003a5b2) navi_pane_mv_g2

0xb0e9,	// (0x0003a5db) navi_pane_mv_g5

0x37fa,	// (0x00032cec) navi_pane_mv_t1

0xa52e,	// (0x00039a20) main_clock2_pane

0xb208,	// (0x0003a6fa) main_clock2_list_pane_ParamLimits

0xb208,	// (0x0003a6fa) main_clock2_list_pane

0x5979,	// (0x00034e6b) main_clock2_pane_t1_ParamLimits

0x5979,	// (0x00034e6b) main_clock2_pane_t1

0x59b4,	// (0x00034ea6) main_clock2_pane_t2_ParamLimits

0x59b4,	// (0x00034ea6) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0003eca0) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0003eca0) main_clock2_pane_t

0x5a53,	// (0x00034f45) popup_clock_analogue_window_cp03_ParamLimits

0x5a53,	// (0x00034f45) popup_clock_analogue_window_cp03

0x5a78,	// (0x00034f6a) popup_clock_digital_window_cp02_ParamLimits

0x5a78,	// (0x00034f6a) popup_clock_digital_window_cp02

0x5af1,	// (0x00034fe3) main_clock2_list_single_pane_ParamLimits

0x5af1,	// (0x00034fe3) main_clock2_list_single_pane

0xa6df,	// (0x00039bd1) list_highlight_pane_cp05

0xcde1,	// (0x0003c2d3) main_clock2_list_single_pane_t1

0x22f3,	// (0x000317e5) popup_toolbar_window_cp04_ParamLimits

0x4e3f,	// (0x00034331) camera2_autofocus_pane_g2_ParamLimits

0x4e3f,	// (0x00034331) camera2_autofocus_pane_g2

0x4e4b,	// (0x0003433d) camera2_autofocus_pane_g3_ParamLimits

0x4e4b,	// (0x0003433d) camera2_autofocus_pane_g3

0x4e57,	// (0x00034349) camera2_autofocus_pane_g4_ParamLimits

0x4e57,	// (0x00034349) camera2_autofocus_pane_g4

0x4e63,	// (0x00034355) camera2_autofocus_pane_g5_ParamLimits

0x4e63,	// (0x00034355) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0003ebe4) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0003ebe4) camera2_autofocus_pane_g

0x509c,	// (0x0003458e) camera2_autofocus_pane_cp_g2

0x50a4,	// (0x00034596) camera2_autofocus_pane_cp_g3

0x50ac,	// (0x0003459e) camera2_autofocus_pane_cp_g4

0x50b4,	// (0x000345a6) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0003ec4a) camera2_autofocus_pane_cp_g

0x5803,	// (0x00034cf5) popup_dialer_spcha_window

0x9dbc,	// (0x000392ae) bg_popup_sub_pane_cp07

0xcdef,	// (0x0003c2e1) list_spcha_pane

0xcdf7,	// (0x0003c2e9) list_single_spcha_pane_ParamLimits

0xcdf7,	// (0x0003c2e9) list_single_spcha_pane

0x9dbc,	// (0x000392ae) list_highlight_pane_cp06

0xce08,	// (0x0003c2fa) list_single_spcha_pane_t1

0xbfe9,	// (0x0003b4db) popup_call2_audio_out_window_g4_ParamLimits

0xbfe9,	// (0x0003b4db) popup_call2_audio_out_window_g4

0x1437,	// (0x00030929) main_imed2_pane

0x473c,	// (0x00033c2e) popup_imed_adjust2_window

0x007f,	// (0x0002f571) popup_imed_trans_window_ParamLimits

0x007f,	// (0x0002f571) popup_imed_trans_window

0xc82e,	// (0x0003bd20) popup_blid_sat_info2_window_t1

0xc83c,	// (0x0003bd2e) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0003eb79) popup_blid_sat_info2_window_t

0x5b03,	// (0x00034ff5) aid_size_cell_colour_35

0x5b23,	// (0x00035015) aid_size_cell_colour_112

0x5b43,	// (0x00035035) aid_size_cell_effect

0xc5aa,	// (0x0003ba9c) bg_tb_trans_pane_cp02

0xab99,	// (0x0003a08b) heading_imed_pane

0x5b63,	// (0x00035055) listscroll_imed_pane

0xce16,	// (0x0003c308) heading_imed_pane_g1

0xce1e,	// (0x0003c310) heading_imed_pane_t1

0xce2c,	// (0x0003c31e) grid_imed_colour_35_pane_ParamLimits

0xce2c,	// (0x0003c31e) grid_imed_colour_35_pane

0x5b6f,	// (0x00035061) grid_imed_effect_pane

0xce48,	// (0x0003c33a) list_imed_aspect_pane

0x5b86,	// (0x00035078) scroll_pane_cp027_ParamLimits

0x5b86,	// (0x00035078) scroll_pane_cp027

0x5b97,	// (0x00035089) cell_imed_effect_pane_ParamLimits

0x5b97,	// (0x00035089) cell_imed_effect_pane

0xce50,	// (0x0003c342) cell_imed_colour_pane_ParamLimits

0xce50,	// (0x0003c342) cell_imed_colour_pane

0xce9a,	// (0x0003c38c) cell_imed_colour_pane_g1_ParamLimits

0xce9a,	// (0x0003c38c) cell_imed_colour_pane_g1

0xceab,	// (0x0003c39d) hgihlgiht_grid_pane_cp016_ParamLimits

0xceab,	// (0x0003c39d) hgihlgiht_grid_pane_cp016

0x5bc2,	// (0x000350b4) cell_imed_effect_pane_g1

0x5bca,	// (0x000350bc) grid_highlight_pane_cp017

0xcebc,	// (0x0003c3ae) list_imed_single_pane_ParamLimits

0xcebc,	// (0x0003c3ae) list_imed_single_pane

0x9dbc,	// (0x000392ae) list_highlight_pane_cp07

0xced0,	// (0x0003c3c2) list_imed_aspect_pane_comp1_t1

0xc5aa,	// (0x0003ba9c) bg_tb_trans_pane_cp05

0xcef2,	// (0x0003c3e4) popup_imed_adjust2_window_g1

0xcf19,	// (0x0003c40b) popup_imed_adjust2_window_t1

0xcf31,	// (0x0003c423) slider_imed_adjust_pane

0xcf45,	// (0x0003c437) slider_imed_adjust_pane_g1

0xcf55,	// (0x0003c447) slider_imed_adjust_pane_g2

0xcf65,	// (0x0003c457) slider_imed_adjust_pane_g3

0xcf76,	// (0x0003c468) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0003ecbd) slider_imed_adjust_pane_g

0x5bd3,	// (0x000350c5) aid_size_cell_clipart2

0xcf87,	// (0x0003c479) grid_imed_clipart_pane

0xcf91,	// (0x0003c483) scroll_pane_cp031

0x5bdf,	// (0x000350d1) cell_imed_clipart_pane_ParamLimits

0x5bdf,	// (0x000350d1) cell_imed_clipart_pane

0x5bfc,	// (0x000350ee) cell_imed_clipart_pane_g1

0x9dbc,	// (0x000392ae) grid_highlight_pane_cp014

0x5957,	// (0x00034e49) main_clock2_pane_g1_ParamLimits

0x5957,	// (0x00034e49) main_clock2_pane_g1

0x5a98,	// (0x00034f8a) aid_call2_pane_cp10

0x5aaa,	// (0x00034f9c) aid_call_pane_cp10

0xaf62,	// (0x0003a454) popup_clock_analogue_window_cp10_g1

0xaf62,	// (0x0003a454) popup_clock_analogue_window_cp10_g2

0x5abc,	// (0x00034fae) popup_clock_analogue_window_cp10_g3

0x5abc,	// (0x00034fae) popup_clock_analogue_window_cp10_g4

0xaf62,	// (0x0003a454) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0003ecab) popup_clock_analogue_window_cp10_g

0x5ad2,	// (0x00034fc4) popup_clock_analogue_window_cp10_t1

0x0688,	// (0x0002fb7a) clock_digital_number_pane_cp10_ParamLimits

0x0688,	// (0x0002fb7a) clock_digital_number_pane_cp10

0x06a2,	// (0x0002fb94) clock_digital_number_pane_cp11_ParamLimits

0x06a2,	// (0x0002fb94) clock_digital_number_pane_cp11

0x06bc,	// (0x0002fbae) clock_digital_number_pane_cp12_ParamLimits

0x06bc,	// (0x0002fbae) clock_digital_number_pane_cp12

0x06d8,	// (0x0002fbca) clock_digital_number_pane_cp13_ParamLimits

0x06d8,	// (0x0002fbca) clock_digital_number_pane_cp13

0x06f4,	// (0x0002fbe6) clock_digital_separator_pane_cp10_ParamLimits

0x06f4,	// (0x0002fbe6) clock_digital_separator_pane_cp10

0x0710,	// (0x0002fc02) popup_clock_digital_window_cp02_t1_ParamLimits

0x0710,	// (0x0002fc02) popup_clock_digital_window_cp02_t1

0xa461,	// (0x00039953) clock_digital_number_pane_cp10_g1

0xa461,	// (0x00039953) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0003ecc6) clock_digital_number_pane_cp10_g

0xa461,	// (0x00039953) clock_digital_separator_pane_cp10_g1

0xa461,	// (0x00039953) clock_digital_separator_pane_g2_cp10

0xb0f1,	// (0x0003a5e3) navi_pane_vded_g4

0xb0fa,	// (0x0003a5ec) navi_pane_vded_g5

0xb103,	// (0x0003a5f5) navi_pane_vded_t1

0x1437,	// (0x00030929) main_vded_pane

0x5c05,	// (0x000350f7) main_vded_pane_g1

0x5c11,	// (0x00035103) main_vded_pane_g2

0x5c1d,	// (0x0003510f) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0003eccb) main_vded_pane_g

0x5c29,	// (0x0003511b) main_vded_pane_t1

0x5c37,	// (0x00035129) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0003ecd2) main_vded_pane_t

0x5c45,	// (0x00035137) vded_slider_pane

0x5c4f,	// (0x00035141) vded_video_pane

0xcf99,	// (0x0003c48b) vded_video_pane_g1

0x5c5b,	// (0x0003514d) vded_video_pane_g2

0xc9f6,	// (0x0003bee8) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0003ecd7) vded_video_pane_g

0xcfa3,	// (0x0003c495) vded_slider_pane_g1

0xc73b,	// (0x0003bc2d) vded_slider_pane_g2

0xcfac,	// (0x0003c49e) vded_slider_pane_g3

0xcfb5,	// (0x0003c4a7) vded_slider_pane_g4

0xcfbe,	// (0x0003c4b0) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0003ecde) vded_slider_pane_g

0x56d9,	// (0x00034bcb) mup3_rocker_pane_ParamLimits

0x56d9,	// (0x00034bcb) mup3_rocker_pane

0x5c64,	// (0x00035156) mup3_control_keys_pane_g1

0x5c6c,	// (0x0003515e) mup3_control_keys_pane_g2

0x5c74,	// (0x00035166) mup3_control_keys_pane_g3

0x5c7c,	// (0x0003516e) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0003ece9) mup3_control_keys_pane_g

0xfc11,	// (0x0002f103) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfc11,	// (0x0002f103) popup_toolbar2_fixed_window_cp01

0x570f,	// (0x00034c01) popup_toolbar2_fixed_window_cp02_ParamLimits

0x570f,	// (0x00034c01) popup_toolbar2_fixed_window_cp02

0xb928,	// (0x0003ae1a) popup_call2_audio_second_window_t4_ParamLimits

0xb928,	// (0x0003ae1a) popup_call2_audio_second_window_t4

0xbe56,	// (0x0003b348) popup_call2_audio_first_window_t6_ParamLimits

0xbe56,	// (0x0003b348) popup_call2_audio_first_window_t6

0xc0ec,	// (0x0003b5de) popup_call2_audio_out_window_t6_ParamLimits

0xc0ec,	// (0x0003b5de) popup_call2_audio_out_window_t6

0x1437,	// (0x00030929) main_vitu_pane

0x5c8c,	// (0x0003517e) aid_size_cell_itu_ParamLimits

0x5c8c,	// (0x0003517e) aid_size_cell_itu

0xb208,	// (0x0003a6fa) bg_popup_window_pane_cp08_ParamLimits

0xb208,	// (0x0003a6fa) bg_popup_window_pane_cp08

0x5ca2,	// (0x00035194) field_vitu_entry_pane_ParamLimits

0x5ca2,	// (0x00035194) field_vitu_entry_pane

0x5cb9,	// (0x000351ab) grid_vitu_function_pane_ParamLimits

0x5cb9,	// (0x000351ab) grid_vitu_function_pane

0x5cd4,	// (0x000351c6) grid_vitu_itu_pane_ParamLimits

0x5cd4,	// (0x000351c6) grid_vitu_itu_pane

0x5cf2,	// (0x000351e4) cell_vitu_itu_pane_ParamLimits

0x5cf2,	// (0x000351e4) cell_vitu_itu_pane

0x5d18,	// (0x0003520a) cell_vitu_function_pane_ParamLimits

0x5d18,	// (0x0003520a) cell_vitu_function_pane

0xb208,	// (0x0003a6fa) bg_popup_sub_pane_cp08_ParamLimits

0xb208,	// (0x0003a6fa) bg_popup_sub_pane_cp08

0x5d33,	// (0x00035225) field_vitu_entry_pane_t1_ParamLimits

0x5d33,	// (0x00035225) field_vitu_entry_pane_t1

0xcfdf,	// (0x0003c4d1) field_vitu_entry_pane_t2_ParamLimits

0xcfdf,	// (0x0003c4d1) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0003ecf7) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0003ecf7) field_vitu_entry_pane_t

0xcffc,	// (0x0003c4ee) bg_button_pane_cp05_ParamLimits

0xcffc,	// (0x0003c4ee) bg_button_pane_cp05

0x5d53,	// (0x00035245) cell_vitu_itu_pane_g1

0x5d6b,	// (0x0003525d) cell_vitu_itu_pane_t1_ParamLimits

0x5d6b,	// (0x0003525d) cell_vitu_itu_pane_t1

0x5d7d,	// (0x0003526f) cell_vitu_itu_pane_t2_ParamLimits

0x5d7d,	// (0x0003526f) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0003ecfc) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0003ecfc) cell_vitu_itu_pane_t

0xd00a,	// (0x0003c4fc) bg_button_pane_cp07

0x5db2,	// (0x000352a4) cell_vitu_function_pane_g1

0x15a7,	// (0x00030a99) main_calc_pane_g1

0xfa70,	// (0x0002ef62) aid_visual_content_pane

0x1437,	// (0x00030929) main_vradio_pane

0x5dbb,	// (0x000352ad) main_vradio_pane_g1_ParamLimits

0x5dbb,	// (0x000352ad) main_vradio_pane_g1

0xd014,	// (0x0003c506) main_vradio_pane_g2_ParamLimits

0xd014,	// (0x0003c506) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0003ed03) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0003ed03) main_vradio_pane_g

0x5dd2,	// (0x000352c4) main_vradio_pane_t1_ParamLimits

0x5dd2,	// (0x000352c4) main_vradio_pane_t1

0x5de7,	// (0x000352d9) main_vradio_pane_t2_ParamLimits

0x5de7,	// (0x000352d9) main_vradio_pane_t2

0xd021,	// (0x0003c513) main_vradio_pane_t3_ParamLimits

0xd021,	// (0x0003c513) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0003ed08) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0003ed08) main_vradio_pane_t

0x5dfc,	// (0x000352ee) vradio_rocker_control_pane_ParamLimits

0x5dfc,	// (0x000352ee) vradio_rocker_control_pane

0x5e0e,	// (0x00035300) vradio_station_info_pane_ParamLimits

0x5e0e,	// (0x00035300) vradio_station_info_pane

0xd035,	// (0x0003c527) vradio_frequency_info_pane_ParamLimits

0xd035,	// (0x0003c527) vradio_frequency_info_pane

0xc9f6,	// (0x0003bee8) vradio_station_info_pane_g1

0xd044,	// (0x0003c536) vradio_station_info_pane_t1_ParamLimits

0xd044,	// (0x0003c536) vradio_station_info_pane_t1

0xd066,	// (0x0003c558) vradio_station_info_pane_t2_ParamLimits

0xd066,	// (0x0003c558) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0003ed0f) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0003ed0f) vradio_station_info_pane_t

0xd078,	// (0x0003c56a) vradio_tuning_pane

0xd080,	// (0x0003c572) vradio_rocker_control_pane_g1

0xd088,	// (0x0003c57a) vradio_rocker_control_pane_g2

0xd090,	// (0x0003c582) vradio_rocker_control_pane_g3

0xd098,	// (0x0003c58a) vradio_rocker_control_pane_g4

0xd0a0,	// (0x0003c592) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0003ed14) vradio_rocker_control_pane_g

0x5e1e,	// (0x00035310) vradio_frequency_info_pane_g1

0xd0a8,	// (0x0003c59a) vradio_frequency_info_pane_t1_ParamLimits

0xd0a8,	// (0x0003c59a) vradio_frequency_info_pane_t1

0x5e28,	// (0x0003531a) vradio_tuning_pane_g1

0x5e33,	// (0x00035325) vradio_tuning_pane_t1

0x13d6,	// (0x000308c8) area_side_right_pane_ParamLimits

0x13d6,	// (0x000308c8) area_side_right_pane

0xc565,	// (0x0003ba57) status_small_pane_g1

0xc56d,	// (0x0003ba5f) status_small_pane_g2

0xc576,	// (0x0003ba68) status_small_pane_g3

0xc57f,	// (0x0003ba71) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0003eacf) status_small_pane_g

0xc588,	// (0x0003ba7a) status_small_pane_t1

0x1437,	// (0x00030929) main_video3_pane

0xd0bc,	// (0x0003c5ae) cams_zoom_vslider_pane

0xd0c4,	// (0x0003c5b6) image3_wide_pane_ParamLimits

0xd0c4,	// (0x0003c5b6) image3_wide_pane

0xd0de,	// (0x0003c5d0) image3_wide_small_pane

0xd0ea,	// (0x0003c5dc) main_video3_pane_g1_ParamLimits

0xd0ea,	// (0x0003c5dc) main_video3_pane_g1

0xd106,	// (0x0003c5f8) main_video3_pane_g2_ParamLimits

0xd106,	// (0x0003c5f8) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0003ed1f) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0003ed1f) main_video3_pane_g

0xd122,	// (0x0003c614) main_video3_pane_t1_ParamLimits

0xd122,	// (0x0003c614) main_video3_pane_t1

0xd14d,	// (0x0003c63f) main_video3_pane_t2_ParamLimits

0xd14d,	// (0x0003c63f) main_video3_pane_t2

0xd17a,	// (0x0003c66c) main_video3_pane_t3_ParamLimits

0xd17a,	// (0x0003c66c) main_video3_pane_t3

0x0002,

0xf832,	// (0x0003ed24) main_video3_pane_t_ParamLimits

0xf832,	// (0x0003ed24) main_video3_pane_t

0xd1a7,	// (0x0003c699) cams_zoom_vslider_pane_g1

0xd1b0,	// (0x0003c6a2) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0003ed2b) cams_zoom_vslider_pane_g

0xd1b8,	// (0x0003c6aa) small_slider_vertical_pane

0xc9f6,	// (0x0003bee8) small_slider_vertical_pane_g1

0xc9f6,	// (0x0003bee8) small_slider_vertical_pane_g2

0xd1c0,	// (0x0003c6b2) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0003ed30) small_slider_vertical_pane_g

0x1437,	// (0x00030929) main_hwr_training_pane

0xd1c9,	// (0x0003c6bb) hwr_training_instruct_pane_ParamLimits

0xd1c9,	// (0x0003c6bb) hwr_training_instruct_pane

0x5e42,	// (0x00035334) hwr_training_navi_pane_ParamLimits

0x5e42,	// (0x00035334) hwr_training_navi_pane

0x5e61,	// (0x00035353) hwr_training_write_pane_ParamLimits

0x5e61,	// (0x00035353) hwr_training_write_pane

0x9dbc,	// (0x000392ae) bg_frame_shadow_pane

0xd200,	// (0x0003c6f2) hwr_training_write_pane_g1

0xd208,	// (0x0003c6fa) hwr_training_write_pane_g2

0xd210,	// (0x0003c702) hwr_training_write_pane_g3

0xd218,	// (0x0003c70a) hwr_training_write_pane_g4

0xd220,	// (0x0003c712) hwr_training_write_pane_g5

0xd228,	// (0x0003c71a) hwr_training_write_pane_g6

0xd230,	// (0x0003c722) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0003ed37) hwr_training_write_pane_g

0x5e9c,	// (0x0003538e) hwr_training_navi_pane_g1_ParamLimits

0x5e9c,	// (0x0003538e) hwr_training_navi_pane_g1

0x5eae,	// (0x000353a0) hwr_training_navi_pane_g2_ParamLimits

0x5eae,	// (0x000353a0) hwr_training_navi_pane_g2

0x5ec0,	// (0x000353b2) hwr_training_navi_pane_g3_ParamLimits

0x5ec0,	// (0x000353b2) hwr_training_navi_pane_g3

0x5ed0,	// (0x000353c2) hwr_training_navi_pane_g4_ParamLimits

0x5ed0,	// (0x000353c2) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0003ed46) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0003ed46) hwr_training_navi_pane_g

0x5edd,	// (0x000353cf) hwr_training_navi_pane_t1

0x5eeb,	// (0x000353dd) list_single_hwr_training_instruct_pane_ParamLimits

0x5eeb,	// (0x000353dd) list_single_hwr_training_instruct_pane

0xd238,	// (0x0003c72a) list_single_hwr_training_instruct_pane_t1

0xc936,	// (0x0003be28) bg_frame_shadow_pane_g1

0xd247,	// (0x0003c739) bg_frame_shadow_pane_g2

0xd24f,	// (0x0003c741) bg_frame_shadow_pane_g3

0xd257,	// (0x0003c749) bg_frame_shadow_pane_g4

0xd25f,	// (0x0003c751) bg_frame_shadow_pane_g5

0xd267,	// (0x0003c759) bg_frame_shadow_pane_g6

0xd26f,	// (0x0003c761) bg_frame_shadow_pane_g7

0xa5f0,	// (0x00039ae2) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0003ed51) bg_frame_shadow_pane_g

0x1437,	// (0x00030929) main_video_tele_dialer_pane

0x073e,	// (0x0002fc30) aid_size_cell_video_keypad_ParamLimits

0x073e,	// (0x0002fc30) aid_size_cell_video_keypad

0x0758,	// (0x0002fc4a) grid_video_dialer_keypad_pane_ParamLimits

0x0758,	// (0x0002fc4a) grid_video_dialer_keypad_pane

0x07a4,	// (0x0002fc96) video_down_pane_cp_ParamLimits

0x07a4,	// (0x0002fc96) video_down_pane_cp

0x07ba,	// (0x0002fcac) cell_video_dialer_keypad_pane_ParamLimits

0x07ba,	// (0x0002fcac) cell_video_dialer_keypad_pane

0xd277,	// (0x0003c769) bg_button_pane_cp08_ParamLimits

0xd277,	// (0x0003c769) bg_button_pane_cp08

0x5f23,	// (0x00035415) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f23,	// (0x00035415) cell_video_dialer_keypad_pane_g1

0x56c3,	// (0x00034bb5) mup3_rocker2_pane_ParamLimits

0x56c3,	// (0x00034bb5) mup3_rocker2_pane

0xc9f6,	// (0x0003bee8) mup3_rocker2_pane_g1

0xff4c,	// (0x0002f43e) main_dialer2_pane

0x1437,	// (0x00030929) main_mp4_pane

0x5f7c,	// (0x0003546e) main_mp4_pane_g1_ParamLimits

0x5f7c,	// (0x0003546e) main_mp4_pane_g1

0x5f7c,	// (0x0003546e) main_mp4_pane_g2_ParamLimits

0x5f7c,	// (0x0003546e) main_mp4_pane_g2

0x07e0,	// (0x0002fcd2) main_mp4_pane_g3_ParamLimits

0x07e0,	// (0x0002fcd2) main_mp4_pane_g3

0x5f8a,	// (0x0003547c) main_mp4_pane_g4_ParamLimits

0x5f8a,	// (0x0003547c) main_mp4_pane_g4

0x5fb8,	// (0x000354aa) main_mp4_pane_g5_ParamLimits

0x5fb8,	// (0x000354aa) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0003ed71) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0003ed71) main_mp4_pane_g

0x602c,	// (0x0003551e) main_mp4_pane_t1_ParamLimits

0x602c,	// (0x0003551e) main_mp4_pane_t1

0x6088,	// (0x0003557a) main_mp4_pane_t2_ParamLimits

0x6088,	// (0x0003557a) main_mp4_pane_t2

0xd283,	// (0x0003c775) main_mp4_pane_t3_ParamLimits

0xd283,	// (0x0003c775) main_mp4_pane_t3

0x60da,	// (0x000355cc) main_mp4_pane_t4_ParamLimits

0x60da,	// (0x000355cc) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0003ed82) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0003ed82) main_mp4_pane_t

0x611a,	// (0x0003560c) mp4_progress_pane_ParamLimits

0x611a,	// (0x0003560c) mp4_progress_pane

0x6164,	// (0x00035656) mp4_rocker_pane_ParamLimits

0x6164,	// (0x00035656) mp4_rocker_pane

0xd2b1,	// (0x0003c7a3) mp4_progress_pane_t1

0xd2ca,	// (0x0003c7bc) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0003ed8b) mp4_progress_pane_t

0xd2e3,	// (0x0003c7d5) mup_progress_pane_cp04

0xd2f6,	// (0x0003c7e8) mp4_rocker_pane_g1

0x082a,	// (0x0002fd1c) aid_cell_size_keypad2_ParamLimits

0x082a,	// (0x0002fd1c) aid_cell_size_keypad2

0x0840,	// (0x0002fd32) dialer2_ne_pane_ParamLimits

0x0840,	// (0x0002fd32) dialer2_ne_pane

0x0858,	// (0x0002fd4a) grid_dialer2_keypad_pane_ParamLimits

0x0858,	// (0x0002fd4a) grid_dialer2_keypad_pane

0xc7d5,	// (0x0003bcc7) bg_popup_call_pane_cp07_ParamLimits

0xc7d5,	// (0x0003bcc7) bg_popup_call_pane_cp07

0x6184,	// (0x00035676) dialer2_ne_pane_t1_ParamLimits

0x6184,	// (0x00035676) dialer2_ne_pane_t1

0x0874,	// (0x0002fd66) cell_dialer2_keypad_pane_ParamLimits

0x0874,	// (0x0002fd66) cell_dialer2_keypad_pane

0xd312,	// (0x0003c804) bg_button_pane_pane_cp04_ParamLimits

0xd312,	// (0x0003c804) bg_button_pane_pane_cp04

0x61c4,	// (0x000356b6) cell_dialer2_keypad_pane_g1_ParamLimits

0x61c4,	// (0x000356b6) cell_dialer2_keypad_pane_g1

0x21da,	// (0x000316cc) aid_placing_vt_set_content_ParamLimits

0x21da,	// (0x000316cc) aid_placing_vt_set_content

0x21fe,	// (0x000316f0) aid_placing_vt_set_title_ParamLimits

0x21fe,	// (0x000316f0) aid_placing_vt_set_title

0x1437,	// (0x00030929) main_image3_pane

0x08f8,	// (0x0002fdea) area_side_right_pane_cp01_ParamLimits

0x08f8,	// (0x0002fdea) area_side_right_pane_cp01

0x5f7c,	// (0x0003546e) main_image3_pane_g1_ParamLimits

0x5f7c,	// (0x0003546e) main_image3_pane_g1

0x0911,	// (0x0002fe03) main_image3_pane_g2_ParamLimits

0x0911,	// (0x0002fe03) main_image3_pane_g2

0x0939,	// (0x0002fe2b) main_image3_pane_g3_ParamLimits

0x0939,	// (0x0002fe2b) main_image3_pane_g3

0x0963,	// (0x0002fe55) main_image3_pane_g4_ParamLimits

0x0963,	// (0x0002fe55) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0003ed9a) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0003ed9a) main_image3_pane_g

0x098d,	// (0x0002fe7f) main_image3_pane_t1_ParamLimits

0x098d,	// (0x0002fe7f) main_image3_pane_t1

0x09e5,	// (0x0002fed7) main_image3_pane_t2_ParamLimits

0x09e5,	// (0x0002fed7) main_image3_pane_t2

0x0a37,	// (0x0002ff29) main_image3_pane_t3_ParamLimits

0x0a37,	// (0x0002ff29) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0003eda3) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0003eda3) main_image3_pane_t

0xb208,	// (0x0003a6fa) grid_sctrl_middle_pane_cp01_ParamLimits

0xb208,	// (0x0003a6fa) grid_sctrl_middle_pane_cp01

0x6260,	// (0x00035752) cell_sctrl_middle_pane_cp01_ParamLimits

0x6260,	// (0x00035752) cell_sctrl_middle_pane_cp01

0x627d,	// (0x0003576f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x627d,	// (0x0003576f) cell_sctrl_middle_pane_cp01_g1

0x1437,	// (0x00030929) main_call4_pane

0x0abf,	// (0x0002ffb1) aid_size_button_call4_ParamLimits

0x0abf,	// (0x0002ffb1) aid_size_button_call4

0x0af2,	// (0x0002ffe4) call4_windows_pane_ParamLimits

0x0af2,	// (0x0002ffe4) call4_windows_pane

0x0b11,	// (0x00030003) grid_call4_button_pane_ParamLimits

0x0b11,	// (0x00030003) grid_call4_button_pane

0x629e,	// (0x00035790) call4_windows_conf_pane

0x62b9,	// (0x000357ab) popup_call4_audio_first_window_ParamLimits

0x62b9,	// (0x000357ab) popup_call4_audio_first_window

0x630b,	// (0x000357fd) popup_call4_audio_second_window_ParamLimits

0x630b,	// (0x000357fd) popup_call4_audio_second_window

0x6324,	// (0x00035816) popup_call4_audio_wait_window_ParamLimits

0x6324,	// (0x00035816) popup_call4_audio_wait_window

0x0b3c,	// (0x0003002e) cell_call4_button_pane_ParamLimits

0x0b3c,	// (0x0003002e) cell_call4_button_pane

0x6332,	// (0x00035824) bg_button_pane_cp09_ParamLimits

0x6332,	// (0x00035824) bg_button_pane_cp09

0x0b63,	// (0x00030055) cell_call4_button_pane_g1_ParamLimits

0x0b63,	// (0x00030055) cell_call4_button_pane_g1

0x0b89,	// (0x0003007b) cell_call4_button_pane_t1_ParamLimits

0x0b89,	// (0x0003007b) cell_call4_button_pane_t1

0xd326,	// (0x0003c818) popup_call4_audio_conf_window_ParamLimits

0xd326,	// (0x0003c818) popup_call4_audio_conf_window

0x5725,	// (0x00034c17) mup3_progress_pane_t1_ParamLimits

0x5744,	// (0x00034c36) mup3_progress_pane_t2_ParamLimits

0xcca4,	// (0x0003c196) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0003ec73) mup3_progress_pane_t_ParamLimits

0xccc1,	// (0x0003c1b3) mup_progress_pane_cp03_ParamLimits

0x5c84,	// (0x00035176) mup3_control_keys_pane_g4_copy1

0x6148,	// (0x0003563a) mp4_rocker2_pane_ParamLimits

0x6148,	// (0x0003563a) mp4_rocker2_pane

0xd340,	// (0x0003c832) mp4_rocker2_pane_g1

0xd348,	// (0x0003c83a) mp4_rocker2_pane_g2

0x6370,	// (0x00035862) mp4_rocker2_pane_g3

0x6378,	// (0x0003586a) mp4_rocker2_pane_g4

0x6380,	// (0x00035872) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0003edac) mp4_rocker2_pane_g

0x1437,	// (0x00030929) main_camera4_pane

0x1437,	// (0x00030929) main_video4_pane

0x0772,	// (0x0002fc64) main_video_tele_dialer_pane_t1_ParamLimits

0x0772,	// (0x0002fc64) main_video_tele_dialer_pane_t1

0x078b,	// (0x0002fc7d) main_video_tele_dialer_pane_t2_ParamLimits

0x078b,	// (0x0002fc7d) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0003ed62) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0003ed62) main_video_tele_dialer_pane_t

0x0bc7,	// (0x000300b9) cam4_autofocus_pane_ParamLimits

0x0bc7,	// (0x000300b9) cam4_autofocus_pane

0x0bdd,	// (0x000300cf) cam4_image_uncrop_pane_ParamLimits

0x0bdd,	// (0x000300cf) cam4_image_uncrop_pane

0x0bf6,	// (0x000300e8) cam4_indicators_pane_ParamLimits

0x0bf6,	// (0x000300e8) cam4_indicators_pane

0x0c26,	// (0x00030118) main_camera4_pane_g1_ParamLimits

0x0c26,	// (0x00030118) main_camera4_pane_g1

0x0c38,	// (0x0003012a) main_camera4_pane_g2_ParamLimits

0x0c38,	// (0x0003012a) main_camera4_pane_g2

0x0c4b,	// (0x0003013d) main_camera4_pane_g3_ParamLimits

0x0c4b,	// (0x0003013d) main_camera4_pane_g3

0x0c5e,	// (0x00030150) main_camera4_pane_g4_ParamLimits

0x0c5e,	// (0x00030150) main_camera4_pane_g4

0x0c71,	// (0x00030163) main_camera4_pane_g5_ParamLimits

0x0c71,	// (0x00030163) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0003edb7) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0003edb7) main_camera4_pane_g

0x0c95,	// (0x00030187) main_camera4_pane_t1_ParamLimits

0x0c95,	// (0x00030187) main_camera4_pane_t1

0x63ba,	// (0x000358ac) bg_tb_trans_pane_cp06

0x63d0,	// (0x000358c2) cam4_indicators_pane_g1

0x63e1,	// (0x000358d3) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0003edd2) cam4_indicators_pane_g

0x63f9,	// (0x000358eb) cam4_indicators_pane_t1

0x0ce5,	// (0x000301d7) main_video4_pane_g1_ParamLimits

0x0ce5,	// (0x000301d7) main_video4_pane_g1

0x0cf4,	// (0x000301e6) main_video4_pane_g2_ParamLimits

0x0cf4,	// (0x000301e6) main_video4_pane_g2

0x0d03,	// (0x000301f5) main_video4_pane_g3_ParamLimits

0x0d03,	// (0x000301f5) main_video4_pane_g3

0x0d12,	// (0x00030204) main_video4_pane_g4_ParamLimits

0x0d12,	// (0x00030204) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0003edd9) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0003edd9) main_video4_pane_g

0x0d30,	// (0x00030222) vid4_indicators_pane_ParamLimits

0x0d30,	// (0x00030222) vid4_indicators_pane

0x0d5e,	// (0x00030250) video4_image_uncrop_cif_pane_ParamLimits

0x0d5e,	// (0x00030250) video4_image_uncrop_cif_pane

0x0d78,	// (0x0003026a) video4_image_uncrop_nhd_pane_ParamLimits

0x0d78,	// (0x0003026a) video4_image_uncrop_nhd_pane

0x0bdd,	// (0x000300cf) video4_image_uncrop_vga_pane_ParamLimits

0x0bdd,	// (0x000300cf) video4_image_uncrop_vga_pane

0x141d,	// (0x0003090f) bg_tb_trans_pane_cp07

0x6427,	// (0x00035919) vid4_indicators_pane_g1

0x643d,	// (0x0003592f) vid4_indicators_pane_g2

0x6451,	// (0x00035943) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0003ede4) vid4_indicators_pane_g

0x6482,	// (0x00035974) vid4_indicators_pane_t1

0x6499,	// (0x0003598b) cam4_autofocus_pane_g1

0x64a1,	// (0x00035993) cam4_autofocus_pane_g2

0x64a9,	// (0x0003599b) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0003edef) cam4_autofocus_pane_g

0x64b1,	// (0x000359a3) cam4_autofocus_pane_g3_copy1

0x5f07,	// (0x000353f9) video_down_pane_cp_t1

0x5f15,	// (0x00035407) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0003ed67) video_down_pane_cp_t

0x141d,	// (0x0003090f) popup_vitu2_window_ParamLimits

0x141d,	// (0x0003090f) popup_vitu2_window

0x0d8e,	// (0x00030280) aid_size_cell2_itu2_ParamLimits

0x0d8e,	// (0x00030280) aid_size_cell2_itu2

0x0db4,	// (0x000302a6) aid_size_cell_itu2_ParamLimits

0x0db4,	// (0x000302a6) aid_size_cell_itu2

0x0e14,	// (0x00030306) bg_popup_window_pane_cp09_ParamLimits

0x0e14,	// (0x00030306) bg_popup_window_pane_cp09

0x0e22,	// (0x00030314) field_vitu2_entry_pane_ParamLimits

0x0e22,	// (0x00030314) field_vitu2_entry_pane

0x0e4a,	// (0x0003033c) grid_vitu2_function_pane_ParamLimits

0x0e4a,	// (0x0003033c) grid_vitu2_function_pane

0x0e9b,	// (0x0003038d) grid_vitu2_itu_pane_ParamLimits

0x0e9b,	// (0x0003038d) grid_vitu2_itu_pane

0x0f2b,	// (0x0003041d) cell_vitu2_itu_pane_ParamLimits

0x0f2b,	// (0x0003041d) cell_vitu2_itu_pane

0x0f58,	// (0x0003044a) cell_vitu2_function_pane_ParamLimits

0x0f58,	// (0x0003044a) cell_vitu2_function_pane

0xd350,	// (0x0003c842) bg_popup_call_pane_cp08_ParamLimits

0xd350,	// (0x0003c842) bg_popup_call_pane_cp08

0xd367,	// (0x0003c859) field_vitu2_entry_pane_g1

0xd373,	// (0x0003c865) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0003edf6) field_vitu2_entry_pane_g

0x64b9,	// (0x000359ab) field_vitu2_entry_pane_t1_ParamLimits

0x64b9,	// (0x000359ab) field_vitu2_entry_pane_t1

0xd38d,	// (0x0003c87f) field_vitu2_entry_pane_t2_ParamLimits

0xd38d,	// (0x0003c87f) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0003edfd) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0003edfd) field_vitu2_entry_pane_t

0x0f9c,	// (0x0003048e) bg_button_pane_cp010_ParamLimits

0x0f9c,	// (0x0003048e) bg_button_pane_cp010

0x64e7,	// (0x000359d9) cell_vitu2_itu_pane_g1

0x0fb8,	// (0x000304aa) cell_vitu2_itu_pane_t1_ParamLimits

0x0fb8,	// (0x000304aa) cell_vitu2_itu_pane_t1

0x1016,	// (0x00030508) cell_vitu2_itu_pane_t2_ParamLimits

0x1016,	// (0x00030508) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0003ee07) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0003ee07) cell_vitu2_itu_pane_t

0x141d,	// (0x0003090f) bg_button_pane_cp011

0x1102,	// (0x000305f4) cell_vitu2_function_pane_g1

0x1437,	// (0x00030929) main_myfav_hc_pane

0x0a87,	// (0x0002ff79) popup_image3_note_pane_ParamLimits

0x0a87,	// (0x0002ff79) popup_image3_note_pane

0x0aa3,	// (0x0002ff95) popup_image3_tool_bar_pane_ParamLimits

0x0aa3,	// (0x0002ff95) popup_image3_tool_bar_pane

0x10a4,	// (0x00030596) cell_vitu2_itu_pane_t3_ParamLimits

0x10a4,	// (0x00030596) cell_vitu2_itu_pane_t3

0x9dbc,	// (0x000392ae) bg_popup_trans_pane

0xd3b2,	// (0x0003c8a4) grid_image3_tool_bar_pane

0xd3bc,	// (0x0003c8ae) bg_popup_trans_pane_g1

0xa951,	// (0x00039e43) bg_popup_trans_pane_g2

0xd3c4,	// (0x0003c8b6) bg_popup_trans_pane_g3

0xd3cc,	// (0x0003c8be) bg_popup_trans_pane_g4

0xd3d4,	// (0x0003c8c6) bg_popup_trans_pane_g5

0xd3dc,	// (0x0003c8ce) bg_popup_trans_pane_g6

0xd3e4,	// (0x0003c8d6) bg_popup_trans_pane_g7

0xd3ec,	// (0x0003c8de) bg_popup_trans_pane_g8

0xa931,	// (0x00039e23) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0003ee0e) bg_popup_trans_pane_g

0xd3f4,	// (0x0003c8e6) cell_image3_tool_bar_pane_ParamLimits

0xd3f4,	// (0x0003c8e6) cell_image3_tool_bar_pane

0xc9f6,	// (0x0003bee8) cell_image3_tool_bar_pane_g1

0x9dbc,	// (0x000392ae) bg_popup_trans_pane_cp1

0xd40a,	// (0x0003c8fc) popup_image3_note_pane_t1

0xd418,	// (0x0003c90a) popup_image3_note_pane_t2

0xd426,	// (0x0003c918) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0003ee21) popup_image3_note_pane_t

0xd436,	// (0x0003c928) popup_image3_note_pane_t3_copy1

0x64f9,	// (0x000359eb) bg_myfav_hc_instruction_pane_ParamLimits

0x64f9,	// (0x000359eb) bg_myfav_hc_instruction_pane

0x6511,	// (0x00035a03) cell_myfav_contact_pane_ParamLimits

0x6511,	// (0x00035a03) cell_myfav_contact_pane

0x652d,	// (0x00035a1f) cell_myfav_contact_pane_cp1_ParamLimits

0x652d,	// (0x00035a1f) cell_myfav_contact_pane_cp1

0x6545,	// (0x00035a37) cell_myfav_contact_pane_cp2_ParamLimits

0x6545,	// (0x00035a37) cell_myfav_contact_pane_cp2

0x655d,	// (0x00035a4f) cell_myfav_contact_pane_cp3_ParamLimits

0x655d,	// (0x00035a4f) cell_myfav_contact_pane_cp3

0x6574,	// (0x00035a66) cell_myfav_contact_pane_cp4_ParamLimits

0x6574,	// (0x00035a66) cell_myfav_contact_pane_cp4

0x658c,	// (0x00035a7e) cell_myfav_contact_pane_cp5_ParamLimits

0x658c,	// (0x00035a7e) cell_myfav_contact_pane_cp5

0x65a0,	// (0x00035a92) cell_myfav_contact_pane_cp6_ParamLimits

0x65a0,	// (0x00035a92) cell_myfav_contact_pane_cp6

0x65b6,	// (0x00035aa8) cell_myfav_contact_pane_cp7_ParamLimits

0x65b6,	// (0x00035aa8) cell_myfav_contact_pane_cp7

0xd444,	// (0x0003c936) listscroll_gen_pane_cp05

0x65ce,	// (0x00035ac0) main_myfav_hc_pane_g1_ParamLimits

0x65ce,	// (0x00035ac0) main_myfav_hc_pane_g1

0x65e8,	// (0x00035ada) main_myfav_hc_pane_g2_ParamLimits

0x65e8,	// (0x00035ada) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0003ee28) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0003ee28) main_myfav_hc_pane_g

0x661c,	// (0x00035b0e) main_myfav_hc_pane_t1_ParamLimits

0x661c,	// (0x00035b0e) main_myfav_hc_pane_t1

0xd44d,	// (0x0003c93f) main_myfav_hc_pane_t2_ParamLimits

0xd44d,	// (0x0003c93f) main_myfav_hc_pane_t2

0xd45f,	// (0x0003c951) main_myfav_hc_pane_t3_ParamLimits

0xd45f,	// (0x0003c951) main_myfav_hc_pane_t3

0x6633,	// (0x00035b25) main_myfav_hc_pane_t4_ParamLimits

0x6633,	// (0x00035b25) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0003ee2f) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0003ee2f) main_myfav_hc_pane_t

0xc9f6,	// (0x0003bee8) bg_myfav_hc_instruction_pane_g1

0xd471,	// (0x0003c963) cell_myfav_contact_pane_g1_ParamLimits

0xd471,	// (0x0003c963) cell_myfav_contact_pane_g1

0xd471,	// (0x0003c963) cell_myfav_contact_pane_g2_ParamLimits

0xd471,	// (0x0003c963) cell_myfav_contact_pane_g2

0xd47d,	// (0x0003c96f) cell_myfav_contact_pane_g3_ParamLimits

0xd47d,	// (0x0003c96f) cell_myfav_contact_pane_g3

0xcc8e,	// (0x0003c180) cell_myfav_contact_pane_g4_ParamLimits

0xcc8e,	// (0x0003c180) cell_myfav_contact_pane_g4

0xd48a,	// (0x0003c97c) cell_myfav_contact_pane_g5_ParamLimits

0xd48a,	// (0x0003c97c) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0003ee3a) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0003ee3a) cell_myfav_contact_pane_g

0x6602,	// (0x00035af4) main_myfav_hc_pane_g3_ParamLimits

0x6602,	// (0x00035af4) main_myfav_hc_pane_g3

0xfb74,	// (0x0002f066) popup_adpt_find_window

0x665d,	// (0x00035b4f) afind_page_pane_ParamLimits

0x665d,	// (0x00035b4f) afind_page_pane

0x6672,	// (0x00035b64) aid_size_cell_afind_ParamLimits

0x6672,	// (0x00035b64) aid_size_cell_afind

0x6690,	// (0x00035b82) bg_popup_sub_pane_cp09_ParamLimits

0x6690,	// (0x00035b82) bg_popup_sub_pane_cp09

0x669d,	// (0x00035b8f) find_pane_cp01_ParamLimits

0x669d,	// (0x00035b8f) find_pane_cp01

0xd496,	// (0x0003c988) grid_afind_control_pane_ParamLimits

0xd496,	// (0x0003c988) grid_afind_control_pane

0x66aa,	// (0x00035b9c) grid_afind_pane_ParamLimits

0x66aa,	// (0x00035b9c) grid_afind_pane

0x66cc,	// (0x00035bbe) cell_afind_pane_ParamLimits

0x66cc,	// (0x00035bbe) cell_afind_pane

0xc9f6,	// (0x0003bee8) afind_page_pane_g1

0x6739,	// (0x00035c2b) afind_page_pane_g2

0x6742,	// (0x00035c34) afind_page_pane_g3

0x0002,

0xf953,	// (0x0003ee45) afind_page_pane_g

0x674b,	// (0x00035c3d) afind_page_pane_t1

0xd4aa,	// (0x0003c99c) cell_afind_grid_control_pane_ParamLimits

0xd4aa,	// (0x0003c99c) cell_afind_grid_control_pane

0xd312,	// (0x0003c804) bg_button_pane_cp69_ParamLimits

0xd312,	// (0x0003c804) bg_button_pane_cp69

0x676b,	// (0x00035c5d) cell_afind_pane_g1_ParamLimits

0x676b,	// (0x00035c5d) cell_afind_pane_g1

0x6778,	// (0x00035c6a) cell_afind_pane_t1_ParamLimits

0x6778,	// (0x00035c6a) cell_afind_pane_t1

0xa746,	// (0x00039c38) bg_button_pane_cp72

0xd4b9,	// (0x0003c9ab) cell_afind_grid_control_pane_g1

0x41dc,	// (0x000336ce) aid_image_placing_area_ParamLimits

0x41dc,	// (0x000336ce) aid_image_placing_area

0xcfc7,	// (0x0003c4b9) field_vitu_entry_pane_g1_ParamLimits

0xcfc7,	// (0x0003c4b9) field_vitu_entry_pane_g1

0xcfd3,	// (0x0003c4c5) field_vitu_entry_pane_g2_ParamLimits

0xcfd3,	// (0x0003c4c5) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0003ecf2) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0003ecf2) field_vitu_entry_pane_g

0x5d53,	// (0x00035245) cell_vitu_itu_pane_g1_ParamLimits

0x5d95,	// (0x00035287) cell_vitu_itu_pane_t3_ParamLimits

0x5d95,	// (0x00035287) cell_vitu_itu_pane_t3

0xd2b1,	// (0x0003c7a3) mp4_progress_pane_t1_ParamLimits

0xd2ca,	// (0x0003c7bc) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0003ed8b) mp4_progress_pane_t_ParamLimits

0xd2e3,	// (0x0003c7d5) mup_progress_pane_cp04_ParamLimits

0x6647,	// (0x00035b39) main_myfav_hc_pane_t5_ParamLimits

0x6647,	// (0x00035b39) main_myfav_hc_pane_t5

0x1395,	// (0x00030887) aid_zoom_text_primary

0xfb74,	// (0x0002f066) popup_adpt_find_window_ParamLimits

0x141d,	// (0x0003090f) main_cam_set_pane

0x0c0f,	// (0x00030101) cam4_zoom_pane_ParamLimits

0x0c0f,	// (0x00030101) cam4_zoom_pane

0x678a,	// (0x00035c7c) main_cam_set_pane_g1_ParamLimits

0x678a,	// (0x00035c7c) main_cam_set_pane_g1

0x6798,	// (0x00035c8a) main_cam_set_pane_g2_ParamLimits

0x6798,	// (0x00035c8a) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0003ee4c) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0003ee4c) main_cam_set_pane_g

0x67b9,	// (0x00035cab) main_cam_set_pane_t1_ParamLimits

0x67b9,	// (0x00035cab) main_cam_set_pane_t1

0x67d4,	// (0x00035cc6) main_cset_listscroll_pane_ParamLimits

0x67d4,	// (0x00035cc6) main_cset_listscroll_pane

0x67f8,	// (0x00035cea) main_cset_slider_pane_ParamLimits

0x67f8,	// (0x00035cea) main_cset_slider_pane

0xd4ca,	// (0x0003c9bc) main_cset_list_pane_ParamLimits

0xd4ca,	// (0x0003c9bc) main_cset_list_pane

0xd4da,	// (0x0003c9cc) scroll_pane_cp028

0x6822,	// (0x00035d14) aid_area_touch_slider

0x683e,	// (0x00035d30) cset_slider_pane

0x6868,	// (0x00035d5a) main_cset_slider_pane_g1

0x687d,	// (0x00035d6f) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0003ee51) main_cset_slider_pane_g

0xd513,	// (0x0003ca05) main_cset_slider_pane_t1

0x693f,	// (0x00035e31) main_cset_slider_pane_t2

0x6959,	// (0x00035e4b) main_cset_slider_pane_t3

0x6973,	// (0x00035e65) main_cset_slider_pane_t4

0x698d,	// (0x00035e7f) main_cset_slider_pane_t5

0x69ab,	// (0x00035e9d) main_cset_slider_pane_t6

0x69c2,	// (0x00035eb4) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0003ee76) main_cset_slider_pane_t

0x6ace,	// (0x00035fc0) cset_list_set_pane_ParamLimits

0x6ace,	// (0x00035fc0) cset_list_set_pane

0x6ae2,	// (0x00035fd4) aid_position_infowindow_above

0x6aea,	// (0x00035fdc) aid_position_infowindow_below

0x6af2,	// (0x00035fe4) cset_list_set_pane_g1_ParamLimits

0x6af2,	// (0x00035fe4) cset_list_set_pane_g1

0x6afe,	// (0x00035ff0) cset_list_set_pane_g3_ParamLimits

0x6afe,	// (0x00035ff0) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0003ee95) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0003ee95) cset_list_set_pane_g

0x6b0d,	// (0x00035fff) cset_list_set_pane_t1_ParamLimits

0x6b0d,	// (0x00035fff) cset_list_set_pane_t1

0xb208,	// (0x0003a6fa) list_highlight_pane_cp021_ParamLimits

0xb208,	// (0x0003a6fa) list_highlight_pane_cp021

0xb281,	// (0x0003a773) cset_slider_pane_g1

0xb293,	// (0x0003a785) cset_slider_pane_g2

0xb28a,	// (0x0003a77c) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0003ee9a) cset_slider_pane_g

0x6b22,	// (0x00036014) aid_area_touch_cam4_zoom

0x1116,	// (0x00030608) cam4_zoom_cont_pane

0x111e,	// (0x00030610) cam4_zoom_pane_g1

0x1126,	// (0x00030618) cam4_zoom_pane_g2

0x112e,	// (0x00030620) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0003eea1) cam4_zoom_pane_g

0x6b2b,	// (0x0003601d) cam4_zoom_cont_pane_g1

0x6b34,	// (0x00036026) cam4_zoom_cont_pane_g2

0x6b3d,	// (0x0003602f) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0003eea8) cam4_zoom_cont_pane_g

0x0add,	// (0x0002ffcf) call4_image_pane_ParamLimits

0x0add,	// (0x0002ffcf) call4_image_pane

0x629e,	// (0x00035790) call4_windows_conf_pane_ParamLimits

0x62e9,	// (0x000357db) popup_call4_audio_in_window_ParamLimits

0x62e9,	// (0x000357db) popup_call4_audio_in_window

0x9dbc,	// (0x000392ae) bg_popup_call2_act_pane_cp02

0xd31e,	// (0x0003c810) call4_list_conf_pane

0xc9f6,	// (0x0003bee8) call4_image_pane_g1

0xc9f6,	// (0x0003bee8) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0003ebb3) call4_image_pane_g

0xd5b3,	// (0x0003caa5) list_single_graphic_popup_conf4_pane_ParamLimits

0xd5b3,	// (0x0003caa5) list_single_graphic_popup_conf4_pane

0x9dbc,	// (0x000392ae) list_highlight_pane_cp022

0xd5c8,	// (0x0003caba) list_single_graphic_popup_conf4_pane_g1

0xae5f,	// (0x0003a351) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0003eeaf) list_single_graphic_popup_conf4_pane_g

0xd5d0,	// (0x0003cac2) list_single_graphic_popup_conf4_pane_t1

0x2315,	// (0x00031807) popup_vtel_slider_window_ParamLimits

0x2315,	// (0x00031807) popup_vtel_slider_window

0xd300,	// (0x0003c7f2) dialer2_ne_pane_t2_ParamLimits

0xd300,	// (0x0003c7f2) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0003ed90) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0003ed90) dialer2_ne_pane_t

0xc7d5,	// (0x0003bcc7) bg_popup_sub_pane_cp010_ParamLimits

0xc7d5,	// (0x0003bcc7) bg_popup_sub_pane_cp010

0x6b46,	// (0x00036038) popup_vtel_slider_window_g1_ParamLimits

0x6b46,	// (0x00036038) popup_vtel_slider_window_g1

0x6b59,	// (0x0003604b) popup_vtel_slider_window_g2_ParamLimits

0x6b59,	// (0x0003604b) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0003eeb4) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0003eeb4) popup_vtel_slider_window_g

0x6baf,	// (0x000360a1) vtel_slider_pane_ParamLimits

0x6baf,	// (0x000360a1) vtel_slider_pane

0x6bd1,	// (0x000360c3) vtel_slider_pane_g1_ParamLimits

0x6bd1,	// (0x000360c3) vtel_slider_pane_g1

0x6be5,	// (0x000360d7) vtel_slider_pane_g2_ParamLimits

0x6be5,	// (0x000360d7) vtel_slider_pane_g2

0x6bfd,	// (0x000360ef) vtel_slider_pane_g3_ParamLimits

0x6bfd,	// (0x000360ef) vtel_slider_pane_g3

0x6bd1,	// (0x000360c3) vtel_slider_pane_g4_ParamLimits

0x6bd1,	// (0x000360c3) vtel_slider_pane_g4

0x6c13,	// (0x00036105) vtel_slider_pane_g5_ParamLimits

0x6c13,	// (0x00036105) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0003eebd) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0003eebd) vtel_slider_pane_g

0x141d,	// (0x0003090f) main_gallery2_pane

0x0de0,	// (0x000302d2) aid_size_row_itut2_dropdow_list_ParamLimits

0x0de0,	// (0x000302d2) aid_size_row_itut2_dropdow_list

0x0e72,	// (0x00030364) grid_vitu2_function_top_pane_ParamLimits

0x0e72,	// (0x00030364) grid_vitu2_function_top_pane

0x0ed6,	// (0x000303c8) popup_vitu2_dropdown_list_window_ParamLimits

0x0ed6,	// (0x000303c8) popup_vitu2_dropdown_list_window

0x0eff,	// (0x000303f1) popup_vitu2_match_list_window

0x1137,	// (0x00030629) cell_vitu2_function_top_pane_ParamLimits

0x1137,	// (0x00030629) cell_vitu2_function_top_pane

0x1159,	// (0x0003064b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1159,	// (0x0003064b) cell_vitu2_function_top_pane_cp01

0x1175,	// (0x00030667) cell_vitu2_function_top_wide_pane_ParamLimits

0x1175,	// (0x00030667) cell_vitu2_function_top_wide_pane

0x141d,	// (0x0003090f) bg_button_pane_cp012

0x1191,	// (0x00030683) cell_vitu2_function_top_pane_g1

0x6c37,	// (0x00036129) bg_button_pane_cp013_ParamLimits

0x6c37,	// (0x00036129) bg_button_pane_cp013

0x6c53,	// (0x00036145) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c53,	// (0x00036145) cell_vitu2_function_top_wide_pane_g1

0x141d,	// (0x0003090f) bg_popup_sub_pane_cp20

0x11a5,	// (0x00030697) list_vitu2_match_list_pane

0xd3bc,	// (0x0003c8ae) bg_popup_sub_pane_cp20_g1

0xd3c4,	// (0x0003c8b6) bg_popup_sub_pane_cp20_g2

0xa951,	// (0x00039e43) bg_popup_sub_pane_cp20_g3

0xd3cc,	// (0x0003c8be) bg_popup_sub_pane_cp20_g4

0xa931,	// (0x00039e23) bg_popup_sub_pane_cp20_g5

0xd5e6,	// (0x0003cad8) bg_popup_sub_pane_cp20_g6

0xd3dc,	// (0x0003c8ce) bg_popup_sub_pane_cp20_g7

0xd3e4,	// (0x0003c8d6) bg_popup_sub_pane_cp20_g8

0xd3ec,	// (0x0003c8de) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0003eec8) bg_popup_sub_pane_cp20_g

0x6c6b,	// (0x0003615d) list_vitu2_match_list_item_pane_ParamLimits

0x6c6b,	// (0x0003615d) list_vitu2_match_list_item_pane

0x6c7d,	// (0x0003616f) list_vitu2_match_list_item_pane_t1

0x1437,	// (0x00030929) bg_popup_sub_pane_cp21

0x6cd7,	// (0x000361c9) grid_vitu2_dropdown_list_pane

0x11c3,	// (0x000306b5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x11c3,	// (0x000306b5) cell_vitu2_dropdown_list_char_pane

0x11e6,	// (0x000306d8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x11e6,	// (0x000306d8) cell_vitu2_dropdown_list_ctrl_pane

0xd5ee,	// (0x0003cae0) cell_vitu2_dropdown_list_char_pane_g1

0xd5f7,	// (0x0003cae9) cell_vitu2_dropdown_list_char_pane_g2

0xd600,	// (0x0003caf2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0003eee5) cell_vitu2_dropdown_list_char_pane_g

0x1214,	// (0x00030706) cell_vitu2_dropdown_list_char_pane_t1

0x6cdf,	// (0x000361d1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6cdf,	// (0x000361d1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6cef,	// (0x000361e1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6cef,	// (0x000361e1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d00,	// (0x000361f2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d00,	// (0x000361f2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1222,	// (0x00030714) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1222,	// (0x00030714) cell_vitu2_dropdown_list_ctrl_pane_g4

0x63ba,	// (0x000358ac) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x63ba,	// (0x000358ac) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0003eeec) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0003eeec) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d10,	// (0x00036202) aid_size_cell_gallery2_ParamLimits

0x6d10,	// (0x00036202) aid_size_cell_gallery2

0x6d2e,	// (0x00036220) grid_gallery2_pane_ParamLimits

0x6d2e,	// (0x00036220) grid_gallery2_pane

0x6d48,	// (0x0003623a) scroll_pane_cp029_ParamLimits

0x6d48,	// (0x0003623a) scroll_pane_cp029

0x6d59,	// (0x0003624b) cell_gallery2_pane_ParamLimits

0x6d59,	// (0x0003624b) cell_gallery2_pane

0xd609,	// (0x0003cafb) cell_gallery2_pane_g2

0x6dbd,	// (0x000362af) cell_gallery2_pane_g3

0xd611,	// (0x0003cb03) cell_gallery2_pane_g4

0xd619,	// (0x0003cb0b) cell_gallery2_pane_g5

0xa6df,	// (0x00039bd1) grid_highlight_pane_cp10

0x0eff,	// (0x000303f1) popup_vitu2_match_list_window_ParamLimits

0x0f16,	// (0x00030408) popup_vitu2_query_window_ParamLimits

0x0f16,	// (0x00030408) popup_vitu2_query_window

0x1437,	// (0x00030929) bg_vitu2_candi_button_pane

0xd5ee,	// (0x0003cae0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5f7,	// (0x0003cae9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd600,	// (0x0003caf2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6dc5,	// (0x000362b7) bg_button_pane_cp015

0x6dd9,	// (0x000362cb) bg_button_pane_cp016

0x6dec,	// (0x000362de) bg_button_pane_cp017

0xc5aa,	// (0x0003ba9c) bg_popup_sub_pane_cp22

0xd621,	// (0x0003cb13) popup_vitu2_query_window_g1

0x6e31,	// (0x00036323) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0003eef7) popup_vitu2_query_window_g

0x6e50,	// (0x00036342) popup_vitu2_query_window_t1_ParamLimits

0x6e50,	// (0x00036342) popup_vitu2_query_window_t1

0x6e85,	// (0x00036377) popup_vitu2_query_window_t2_ParamLimits

0x6e85,	// (0x00036377) popup_vitu2_query_window_t2

0x6e97,	// (0x00036389) popup_vitu2_query_window_t3_ParamLimits

0x6e97,	// (0x00036389) popup_vitu2_query_window_t3

0x6ebf,	// (0x000363b1) popup_vitu2_query_window_t4_ParamLimits

0x6ebf,	// (0x000363b1) popup_vitu2_query_window_t4

0x6ee0,	// (0x000363d2) popup_vitu2_query_window_t5_ParamLimits

0x6ee0,	// (0x000363d2) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0003eefe) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0003eefe) popup_vitu2_query_window_t

0xd4c2,	// (0x0003c9b4) main_cset_text_pane

0x6822,	// (0x00035d14) aid_area_touch_slider_ParamLimits

0x683e,	// (0x00035d30) cset_slider_pane_ParamLimits

0x6868,	// (0x00035d5a) main_cset_slider_pane_g1_ParamLimits

0x687d,	// (0x00035d6f) main_cset_slider_pane_g2_ParamLimits

0xd4e3,	// (0x0003c9d5) main_cset_slider_pane_g3_ParamLimits

0xd4e3,	// (0x0003c9d5) main_cset_slider_pane_g3

0x6892,	// (0x00035d84) main_cset_slider_pane_g4_ParamLimits

0x6892,	// (0x00035d84) main_cset_slider_pane_g4

0x68a1,	// (0x00035d93) main_cset_slider_pane_g5_ParamLimits

0x68a1,	// (0x00035d93) main_cset_slider_pane_g5

0x68af,	// (0x00035da1) main_cset_slider_pane_g6_ParamLimits

0x68af,	// (0x00035da1) main_cset_slider_pane_g6

0xf95f,	// (0x0003ee51) main_cset_slider_pane_g_ParamLimits

0xd513,	// (0x0003ca05) main_cset_slider_pane_t1_ParamLimits

0x693f,	// (0x00035e31) main_cset_slider_pane_t2_ParamLimits

0x6959,	// (0x00035e4b) main_cset_slider_pane_t3_ParamLimits

0x6973,	// (0x00035e65) main_cset_slider_pane_t4_ParamLimits

0x698d,	// (0x00035e7f) main_cset_slider_pane_t5_ParamLimits

0x69ab,	// (0x00035e9d) main_cset_slider_pane_t6_ParamLimits

0x69c2,	// (0x00035eb4) main_cset_slider_pane_t7_ParamLimits

0x69f0,	// (0x00035ee2) main_cset_slider_pane_t8_ParamLimits

0x69f0,	// (0x00035ee2) main_cset_slider_pane_t8

0x6a18,	// (0x00035f0a) main_cset_slider_pane_t9_ParamLimits

0x6a18,	// (0x00035f0a) main_cset_slider_pane_t9

0x6a40,	// (0x00035f32) main_cset_slider_pane_t10_ParamLimits

0x6a40,	// (0x00035f32) main_cset_slider_pane_t10

0x6a68,	// (0x00035f5a) main_cset_slider_pane_t11_ParamLimits

0x6a68,	// (0x00035f5a) main_cset_slider_pane_t11

0x6a92,	// (0x00035f84) main_cset_slider_pane_t12_ParamLimits

0x6a92,	// (0x00035f84) main_cset_slider_pane_t12

0x6aaf,	// (0x00035fa1) main_cset_slider_pane_t13_ParamLimits

0x6aaf,	// (0x00035fa1) main_cset_slider_pane_t13

0xf984,	// (0x0003ee76) main_cset_slider_pane_t_ParamLimits

0x9dbc,	// (0x000392ae) bg_popup_sub_pane_cp011

0xd62d,	// (0x0003cb1f) main_cset_text_pane_g1

0xd635,	// (0x0003cb27) main_cset_text_pane_t1

0xd643,	// (0x0003cb35) main_cset_text_pane_t2

0xd651,	// (0x0003cb43) main_cset_text_pane_t3

0xd65f,	// (0x0003cb51) main_cset_text_pane_t4

0xd66d,	// (0x0003cb5f) main_cset_text_pane_t5

0xd67b,	// (0x0003cb6d) main_cset_text_pane_t6

0xd689,	// (0x0003cb7b) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0003ef0d) main_cset_text_pane_t

0x1437,	// (0x00030929) main_cam4_burst_pane

0x1437,	// (0x00030929) main_cam5_pane

0x6759,	// (0x00035c4b) bg_button_pane_cp019

0x6762,	// (0x00035c54) bg_button_pane_cp020

0xd4ef,	// (0x0003c9e1) main_cset_slider_pane_g7_ParamLimits

0xd4ef,	// (0x0003c9e1) main_cset_slider_pane_g7

0xd4fb,	// (0x0003c9ed) main_cset_slider_pane_g8_ParamLimits

0xd4fb,	// (0x0003c9ed) main_cset_slider_pane_g8

0x68c3,	// (0x00035db5) main_cset_slider_pane_g9_ParamLimits

0x68c3,	// (0x00035db5) main_cset_slider_pane_g9

0x68cf,	// (0x00035dc1) main_cset_slider_pane_g10_ParamLimits

0x68cf,	// (0x00035dc1) main_cset_slider_pane_g10

0x68db,	// (0x00035dcd) main_cset_slider_pane_g11_ParamLimits

0x68db,	// (0x00035dcd) main_cset_slider_pane_g11

0x68e7,	// (0x00035dd9) main_cset_slider_pane_g12_ParamLimits

0x68e7,	// (0x00035dd9) main_cset_slider_pane_g12

0x68f3,	// (0x00035de5) main_cset_slider_pane_g13_ParamLimits

0x68f3,	// (0x00035de5) main_cset_slider_pane_g13

0x68ff,	// (0x00035df1) main_cset_slider_pane_g14_ParamLimits

0x68ff,	// (0x00035df1) main_cset_slider_pane_g14

0x690b,	// (0x00035dfd) main_cset_slider_pane_g15_ParamLimits

0x690b,	// (0x00035dfd) main_cset_slider_pane_g15

0xd541,	// (0x0003ca33) main_cset_slider_pane_t14_ParamLimits

0xd541,	// (0x0003ca33) main_cset_slider_pane_t14

0xd57a,	// (0x0003ca6c) main_cset_slider_pane_t15_ParamLimits

0xd57a,	// (0x0003ca6c) main_cset_slider_pane_t15

0x6f57,	// (0x00036449) aid_cam4_burst_size_cell_ParamLimits

0x6f57,	// (0x00036449) aid_cam4_burst_size_cell

0x6f77,	// (0x00036469) grid_cam4_burst_pane_ParamLimits

0x6f77,	// (0x00036469) grid_cam4_burst_pane

0x6fb1,	// (0x000364a3) linegrid_cam4_burst_pane_ParamLimits

0x6fb1,	// (0x000364a3) linegrid_cam4_burst_pane

0xd697,	// (0x0003cb89) scroll_pane_cp30_ParamLimits

0xd697,	// (0x0003cb89) scroll_pane_cp30

0x6fd3,	// (0x000364c5) cell_cam4_burst_pane_ParamLimits

0x6fd3,	// (0x000364c5) cell_cam4_burst_pane

0xd6a3,	// (0x0003cb95) linegrid_cam4_burst_pane_g1_ParamLimits

0xd6a3,	// (0x0003cb95) linegrid_cam4_burst_pane_g1

0x7028,	// (0x0003651a) linegrid_cam4_burst_pane_g2_ParamLimits

0x7028,	// (0x0003651a) linegrid_cam4_burst_pane_g2

0xd6b0,	// (0x0003cba2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd6b0,	// (0x0003cba2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0003ef1c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0003ef1c) linegrid_cam4_burst_pane_g

0x7039,	// (0x0003652b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7039,	// (0x0003652b) linegrid_cam4_burst_pane_g3_copy1

0xd6bd,	// (0x0003cbaf) linegrid_cam4_burst_pane_g4_ParamLimits

0xd6bd,	// (0x0003cbaf) linegrid_cam4_burst_pane_g4

0x7057,	// (0x00036549) linegrid_cam4_burst_pane_g5_ParamLimits

0x7057,	// (0x00036549) linegrid_cam4_burst_pane_g5

0x7068,	// (0x0003655a) linegrid_cam4_burst_pane_g6_ParamLimits

0x7068,	// (0x0003655a) linegrid_cam4_burst_pane_g6

0xd6ca,	// (0x0003cbbc) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6ca,	// (0x0003cbbc) linegrid_cam4_burst_pane_g7

0x707f,	// (0x00036571) cell_cam4_burst_pane_g1

0xd6e3,	// (0x0003cbd5) main_cam5_pane_t1_ParamLimits

0xd6e3,	// (0x0003cbd5) main_cam5_pane_t1

0xd6f5,	// (0x0003cbe7) main_cam5_pane_t2_ParamLimits

0xd6f5,	// (0x0003cbe7) main_cam5_pane_t2

0xd707,	// (0x0003cbf9) main_cam5_pane_t3_ParamLimits

0xd707,	// (0x0003cbf9) main_cam5_pane_t3

0xd719,	// (0x0003cc0b) main_cam5_pane_t4_ParamLimits

0xd719,	// (0x0003cc0b) main_cam5_pane_t4

0xd731,	// (0x0003cc23) main_cam5_pane_t5_ParamLimits

0xd731,	// (0x0003cc23) main_cam5_pane_t5

0xd745,	// (0x0003cc37) main_cam5_pane_t6_ParamLimits

0xd745,	// (0x0003cc37) main_cam5_pane_t6

0xd759,	// (0x0003cc4b) main_cam5_pane_t7_ParamLimits

0xd759,	// (0x0003cc4b) main_cam5_pane_t7

0xd76b,	// (0x0003cc5d) main_cam5_pane_t8_ParamLimits

0xd76b,	// (0x0003cc5d) main_cam5_pane_t8

0xd789,	// (0x0003cc7b) main_cam5_pane_t9_ParamLimits

0xd789,	// (0x0003cc7b) main_cam5_pane_t9

0xd79b,	// (0x0003cc8d) main_cam5_pane_t10_ParamLimits

0xd79b,	// (0x0003cc8d) main_cam5_pane_t10

0xd7ad,	// (0x0003cc9f) main_cam5_pane_t11_ParamLimits

0xd7ad,	// (0x0003cc9f) main_cam5_pane_t11

0xd7c1,	// (0x0003ccb3) main_cam5_pane_t12_ParamLimits

0xd7c1,	// (0x0003ccb3) main_cam5_pane_t12

0xd7d8,	// (0x0003ccca) main_cam5_pane_t13_ParamLimits

0xd7d8,	// (0x0003ccca) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0003ef28) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0003ef28) main_cam5_pane_t

0xfbf5,	// (0x0002f0e7) popup_scut_keymap_window_ParamLimits

0xfbf5,	// (0x0002f0e7) popup_scut_keymap_window

0x7092,	// (0x00036584) aid_size_cell_brow_shortcut

0xa6df,	// (0x00039bd1) bg_popup_window_pane_cp010

0x709e,	// (0x00036590) grid_scut_pane

0x70aa,	// (0x0003659c) cell_scut_pane_ParamLimits

0x70aa,	// (0x0003659c) cell_scut_pane

0x70c3,	// (0x000365b5) cell_scut_pane_g1

0xd7fb,	// (0x0003cced) cell_scut_pane_t1

0xd80a,	// (0x0003ccfc) cell_scut_pane_t2

0x70cc,	// (0x000365be) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0003ef43) cell_scut_pane_t

0x52d4,	// (0x000347c6) main_mup3_pane_g8_ParamLimits

0x52d4,	// (0x000347c6) main_mup3_pane_g8

0x0dfc,	// (0x000302ee) area_vitu2_query_pane_ParamLimits

0x0dfc,	// (0x000302ee) area_vitu2_query_pane

0x6dff,	// (0x000362f1) input_focus_pane_cp08

0xd819,	// (0x0003cd0b) area_vitu2_query_pane_g1

0x70da,	// (0x000365cc) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0003ef4a) area_vitu2_query_pane_g

0x70eb,	// (0x000365dd) area_vitu2_query_pane_t1_ParamLimits

0x70eb,	// (0x000365dd) area_vitu2_query_pane_t1

0x70ff,	// (0x000365f1) area_vitu2_query_pane_t2_ParamLimits

0x70ff,	// (0x000365f1) area_vitu2_query_pane_t2

0x7113,	// (0x00036605) area_vitu2_query_pane_t3_ParamLimits

0x7113,	// (0x00036605) area_vitu2_query_pane_t3

0xd825,	// (0x0003cd17) area_vitu2_query_pane_t4_ParamLimits

0xd825,	// (0x0003cd17) area_vitu2_query_pane_t4

0xd84d,	// (0x0003cd3f) area_vitu2_query_pane_t5_ParamLimits

0xd84d,	// (0x0003cd3f) area_vitu2_query_pane_t5

0xd875,	// (0x0003cd67) area_vitu2_query_pane_t6_ParamLimits

0xd875,	// (0x0003cd67) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0003ef4f) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0003ef4f) area_vitu2_query_pane_t

0x713b,	// (0x0003662d) bg_button_pane_cp018

0x7149,	// (0x0003663b) bg_button_pane_cp021

0x7155,	// (0x00036647) bg_button_pane_cp022

0x7166,	// (0x00036658) input_focus_pane_cp09

0xaf6e,	// (0x0003a460) aid_size_touch_mv_arrow_left

0xaf99,	// (0x0003a48b) aid_size_touch_mv_arrow_right

0x6923,	// (0x00035e15) main_cset_slider_pane_g16_ParamLimits

0x6923,	// (0x00035e15) main_cset_slider_pane_g16

0x6931,	// (0x00035e23) main_cset_slider_pane_g17_ParamLimits

0x6931,	// (0x00035e23) main_cset_slider_pane_g17

0x707f,	// (0x00036571) cell_cam4_burst_pane_g1_ParamLimits

0x9dbc,	// (0x000392ae) compa_mode_pane

0x6b69,	// (0x0003605b) popup_vtel_slider_window_g3_ParamLimits

0x6b69,	// (0x0003605b) popup_vtel_slider_window_g3

0x6b80,	// (0x00036072) popup_vtel_slider_window_g4_ParamLimits

0x6b80,	// (0x00036072) popup_vtel_slider_window_g4

0x6b97,	// (0x00036089) popup_vtel_slider_window_t1_ParamLimits

0x6b97,	// (0x00036089) popup_vtel_slider_window_t1

0x1437,	// (0x00030929) main_cl_pane

0x473c,	// (0x00033c2e) popup_imed_adjust2_window_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_tb_trans_pane_cp05_ParamLimits

0xcef2,	// (0x0003c3e4) popup_imed_adjust2_window_g1_ParamLimits

0xcf01,	// (0x0003c3f3) popup_imed_adjust2_window_g2_ParamLimits

0xcf01,	// (0x0003c3f3) popup_imed_adjust2_window_g2

0xcf0d,	// (0x0003c3ff) popup_imed_adjust2_window_g3_ParamLimits

0xcf0d,	// (0x0003c3ff) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0003ecb6) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0003ecb6) popup_imed_adjust2_window_g

0xcf19,	// (0x0003c40b) popup_imed_adjust2_window_t1_ParamLimits

0xcf31,	// (0x0003c423) slider_imed_adjust_pane_ParamLimits

0xcf45,	// (0x0003c437) slider_imed_adjust_pane_g1_ParamLimits

0xcf55,	// (0x0003c447) slider_imed_adjust_pane_g2_ParamLimits

0xcf65,	// (0x0003c457) slider_imed_adjust_pane_g3_ParamLimits

0xcf76,	// (0x0003c468) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0003ecbd) slider_imed_adjust_pane_g_ParamLimits

0x0baf,	// (0x000300a1) aid_touch_area_cam4_ParamLimits

0x0baf,	// (0x000300a1) aid_touch_area_cam4

0x6388,	// (0x0003587a) battery_pane_cp01

0x0c82,	// (0x00030174) main_camera4_pane_g6_ParamLimits

0x0c82,	// (0x00030174) main_camera4_pane_g6

0x0cac,	// (0x0003019e) main_camera4_pane_t2_ParamLimits

0x0cac,	// (0x0003019e) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0003edc4) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0003edc4) main_camera4_pane_t

0x0ccd,	// (0x000301bf) aid_touch_area_vid4_ParamLimits

0x0ccd,	// (0x000301bf) aid_touch_area_vid4

0x0d21,	// (0x00030213) main_video4_pane_g5_ParamLimits

0x0d21,	// (0x00030213) main_video4_pane_g5

0x0d46,	// (0x00030238) vid4_progress_pane_ParamLimits

0x0d46,	// (0x00030238) vid4_progress_pane

0xd507,	// (0x0003c9f9) main_cset_slider_pane_g18_ParamLimits

0xd507,	// (0x0003c9f9) main_cset_slider_pane_g18

0xd6d7,	// (0x0003cbc9) cell_cam4_burst_pane_g2_ParamLimits

0xd6d7,	// (0x0003cbc9) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0003ef23) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0003ef23) cell_cam4_burst_pane_g

0xa52e,	// (0x00039a20) bg_cl_pane_ParamLimits

0xa52e,	// (0x00039a20) bg_cl_pane

0x7177,	// (0x00036669) cl_header_pane_ParamLimits

0x7177,	// (0x00036669) cl_header_pane

0x718b,	// (0x0003667d) cl_listscroll_pane_ParamLimits

0x718b,	// (0x0003667d) cl_listscroll_pane

0xd8c1,	// (0x0003cdb3) bg_cl_pane_g1

0xd8c9,	// (0x0003cdbb) bg_cl_pane_g2

0xd8d1,	// (0x0003cdc3) bg_cl_pane_g3

0xd8d9,	// (0x0003cdcb) bg_cl_pane_g4

0xd8e1,	// (0x0003cdd3) bg_cl_pane_g5

0xd8e9,	// (0x0003cddb) bg_cl_pane_g6

0xd8f1,	// (0x0003cde3) bg_cl_pane_g7

0xd8f9,	// (0x0003cdeb) bg_cl_pane_g8

0xd901,	// (0x0003cdf3) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0003ef5e) bg_cl_pane_g

0x719b,	// (0x0003668d) aid_height_cl_leading_ParamLimits

0x719b,	// (0x0003668d) aid_height_cl_leading

0x71a7,	// (0x00036699) aid_height_cl_text_ParamLimits

0x71a7,	// (0x00036699) aid_height_cl_text

0xb208,	// (0x0003a6fa) bg_cl_header_pane_ParamLimits

0xb208,	// (0x0003a6fa) bg_cl_header_pane

0x71c6,	// (0x000366b8) cl_header_pane_g1_ParamLimits

0x71c6,	// (0x000366b8) cl_header_pane_g1

0x71dc,	// (0x000366ce) cl_header_pane_t1_ParamLimits

0x71dc,	// (0x000366ce) cl_header_pane_t1

0xd909,	// (0x0003cdfb) cl_list_pane

0xd4da,	// (0x0003c9cc) hc_scroll_pane_cp01

0xa931,	// (0x00039e23) bg_cl_header_pane_g1

0xd3bc,	// (0x0003c8ae) bg_cl_header_pane_g2

0xa951,	// (0x00039e43) bg_cl_header_pane_g3

0xd3cc,	// (0x0003c8be) bg_cl_header_pane_g4

0xd3c4,	// (0x0003c8b6) bg_cl_header_pane_g5

0xd5e6,	// (0x0003cad8) bg_cl_header_pane_g6

0xd3e4,	// (0x0003c8d6) bg_cl_header_pane_g7

0xd3ec,	// (0x0003c8de) bg_cl_header_pane_g8

0xd3dc,	// (0x0003c8ce) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0003ef71) bg_cl_header_pane_g

0x71f5,	// (0x000366e7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71f5,	// (0x000366e7) hc_cl_list_double_graphic_heading_pane

0x7208,	// (0x000366fa) hc_cl_list_single_graphic_pane_ParamLimits

0x7208,	// (0x000366fa) hc_cl_list_single_graphic_pane

0x7220,	// (0x00036712) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7220,	// (0x00036712) hc_cl_list_single_graphic_pane_g1

0x722c,	// (0x0003671e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x722c,	// (0x0003671e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0003ef84) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0003ef84) hc_cl_list_single_graphic_pane_g

0x7240,	// (0x00036732) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7240,	// (0x00036732) hc_cl_list_single_graphic_pane_t1

0x7220,	// (0x00036712) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7220,	// (0x00036712) hc_cl_list_double_graphic_heading_pane_g1

0x7255,	// (0x00036747) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7255,	// (0x00036747) hc_cl_list_double_graphic_heading_pane_g2

0x7269,	// (0x0003675b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7269,	// (0x0003675b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0003ef89) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0003ef89) hc_cl_list_double_graphic_heading_pane_g

0x727d,	// (0x0003676f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x727d,	// (0x0003676f) hc_cl_list_double_graphic_heading_pane_t1

0x7292,	// (0x00036784) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7292,	// (0x00036784) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0003ef90) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0003ef90) hc_cl_list_double_graphic_heading_pane_t

0x72af,	// (0x000367a1) vid4_progress_pane_g1

0x72bf,	// (0x000367b1) vid4_progress_pane_g2

0x123e,	// (0x00030730) vid4_progress_pane_g3

0x63e1,	// (0x000358d3) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0003ef95) vid4_progress_pane_g

0x1250,	// (0x00030742) vid4_progress_pane_t1

0x72cf,	// (0x000367c1) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0003efa0) vid4_progress_pane_t

0x1268,	// (0x0003075a) wait_bar_pane_cp07

0xc7e3,	// (0x0003bcd5) blid_firmament_pane_ParamLimits

0xc826,	// (0x0003bd18) popup_blid_sat_info2_window_g1

0xc84a,	// (0x0003bd3c) popup_blid_sat_info2_window_t3

0xc858,	// (0x0003bd4a) popup_blid_sat_info2_window_t4

0xc866,	// (0x0003bd58) popup_blid_sat_info2_window_t5

0xc874,	// (0x0003bd66) popup_blid_sat_info2_window_t6

0xc884,	// (0x0003bd76) popup_blid_sat_info2_window_t7

0xc892,	// (0x0003bd84) popup_blid_sat_info2_window_t8

0xc8a0,	// (0x0003bd92) popup_blid_sat_info2_window_t9

0xc8ae,	// (0x0003bda0) popup_blid_sat_info2_window_t10

0xc976,	// (0x0003be68) aid_firma_cardinal_ParamLimits

0xc98a,	// (0x0003be7c) blid_firmament_pane_t1_ParamLimits

0xc9a1,	// (0x0003be93) blid_firmament_pane_t2_ParamLimits

0xc9b8,	// (0x0003beaa) blid_firmament_pane_t3_ParamLimits

0xc9cf,	// (0x0003bec1) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0003ebaa) blid_firmament_pane_t_ParamLimits

0xc9e6,	// (0x0003bed8) blid_sat_info_pane_ParamLimits

0x141d,	// (0x0003090f) main_cam_set_pane_ParamLimits

0x5b03,	// (0x00034ff5) aid_size_cell_colour_35_ParamLimits

0x5b23,	// (0x00035015) aid_size_cell_colour_112_ParamLimits

0x5b43,	// (0x00035035) aid_size_cell_effect_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_tb_trans_pane_cp02_ParamLimits

0xab99,	// (0x0003a08b) heading_imed_pane_ParamLimits

0x5b63,	// (0x00035055) listscroll_imed_pane_ParamLimits

0xbbd2,	// (0x0003b0c4) popup_call2_audio_first_window_g5_ParamLimits

0xbbd2,	// (0x0003b0c4) popup_call2_audio_first_window_g5

0x089a,	// (0x0002fd8c) aid_size_touch_image3_arrow_left_ParamLimits

0x089a,	// (0x0002fd8c) aid_size_touch_image3_arrow_left

0x08c6,	// (0x0002fdb8) aid_size_touch_image3_arrow_right_ParamLimits

0x08c6,	// (0x0002fdb8) aid_size_touch_image3_arrow_right

0x72e4,	// (0x000367d6) vid4_progress_pane_t3

0x5e7c,	// (0x0003536e) main_hwr_training_symbol_option_pane_ParamLimits

0x5e7c,	// (0x0003536e) main_hwr_training_symbol_option_pane

0xd1eb,	// (0x0003c6dd) popup_hwr_training_preview_window_ParamLimits

0xd1eb,	// (0x0003c6dd) popup_hwr_training_preview_window

0x0731,	// (0x0002fc23) hwr_training_navi_pane_g5_ParamLimits

0x0731,	// (0x0002fc23) hwr_training_navi_pane_g5

0xd3aa,	// (0x0003c89c) popup_char_count_window

0x141d,	// (0x0003090f) bg_popup_sub_pane_cp20_ParamLimits

0x11a5,	// (0x00030697) list_vitu2_match_list_pane_ParamLimits

0x11b4,	// (0x000306a6) vitu2_page_scroll_pane_ParamLimits

0x11b4,	// (0x000306a6) vitu2_page_scroll_pane

0xd934,	// (0x0003ce26) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd934,	// (0x0003ce26) list_single_hwr_training_symbol_option_pane

0xd947,	// (0x0003ce39) list_single_hwr_training_symbol_option_pane_g1

0xd94f,	// (0x0003ce41) list_single_hwr_training_symbol_option_pane_t1

0xd95d,	// (0x0003ce4f) bg_button_pane_cp023

0xd966,	// (0x0003ce58) bg_button_pane_cp024

0x7331,	// (0x00036823) vitu2_page_scroll_pane_g1

0x7339,	// (0x0003682b) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0003efa7) vitu2_page_scroll_pane_g

0x7343,	// (0x00036835) vitu2_page_scroll_pane_t1

0xd999,	// (0x0003ce8b) popup_char_count_window_g1

0xd9a2,	// (0x0003ce94) popup_char_count_window_g2

0xd9ab,	// (0x0003ce9d) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0003efac) popup_char_count_window_g

0xd9b4,	// (0x0003cea6) popup_char_count_window_t1

0x1437,	// (0x00030929) main_vded2_pane

0xcede,	// (0x0003c3d0) aid_size_cell_imed_line

0xcee8,	// (0x0003c3da) grid_imed_line_width_pane

0x6464,	// (0x00035956) vid4_indicators_pane_g4

0xd9c2,	// (0x0003ceb4) cell_imed_line_width_pane_ParamLimits

0xd9c2,	// (0x0003ceb4) cell_imed_line_width_pane

0xd9d8,	// (0x0003ceca) cell_imed_line_width_pane_g1

0xc7bd,	// (0x0003bcaf) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0003efb3) cell_imed_line_width_pane_g

0x7352,	// (0x00036844) main_vded2_pane_g1_ParamLimits

0x7352,	// (0x00036844) main_vded2_pane_g1

0x736d,	// (0x0003685f) main_vded2_pane_g2_ParamLimits

0x736d,	// (0x0003685f) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0003efb8) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0003efb8) main_vded2_pane_g

0x737f,	// (0x00036871) vded2_slider_pane_ParamLimits

0x737f,	// (0x00036871) vded2_slider_pane

0x738f,	// (0x00036881) aid_size_touch_vded2_end

0x7399,	// (0x0003688b) aid_size_touch_vded2_playhead

0xd9e1,	// (0x0003ced3) aid_size_touch_vded2_start

0xd9e9,	// (0x0003cedb) vded2_slider_bg_pane

0xd9f2,	// (0x0003cee4) vded2_slider_pane_g1

0xd9fb,	// (0x0003ceed) vded2_slider_pane_g2

0x73a3,	// (0x00036895) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0003efbd) vded2_slider_pane_g

0xda03,	// (0x0003cef5) vded2_slider_bg_pane_g1

0xda0c,	// (0x0003cefe) vded2_slider_bg_pane_g2

0xda15,	// (0x0003cf07) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0003efc4) vded2_slider_bg_pane_g

0x3e16,	// (0x00033308) aid_postcard_touch_down_pane_ParamLimits

0x3e16,	// (0x00033308) aid_postcard_touch_down_pane

0x3e2e,	// (0x00033320) aid_postcard_touch_up_pane_ParamLimits

0x3e2e,	// (0x00033320) aid_postcard_touch_up_pane

0x1437,	// (0x00030929) main_blid2_pane

0x471e,	// (0x00033c10) popup_blid2_search_window

0x9dbc,	// (0x000392ae) blid2_gps_pane

0x9dbc,	// (0x000392ae) blid2_navig_pane

0x9dbc,	// (0x000392ae) blid2_search_pane

0x9dbc,	// (0x000392ae) blid2_tripm_pane

0x73ae,	// (0x000368a0) blid2_search_pane_g1_ParamLimits

0x73ae,	// (0x000368a0) blid2_search_pane_g1

0x73c1,	// (0x000368b3) blid2_search_pane_t1_ParamLimits

0x73c1,	// (0x000368b3) blid2_search_pane_t1

0x73d3,	// (0x000368c5) aid_size_cell_blid2_gps_ParamLimits

0x73d3,	// (0x000368c5) aid_size_cell_blid2_gps

0x73eb,	// (0x000368dd) blid2_gps_pane_g1_ParamLimits

0x73eb,	// (0x000368dd) blid2_gps_pane_g1

0x73ff,	// (0x000368f1) grid_blid2_satellite_pane_ParamLimits

0x73ff,	// (0x000368f1) grid_blid2_satellite_pane

0x7417,	// (0x00036909) blid2_navig_pane_g1_ParamLimits

0x7417,	// (0x00036909) blid2_navig_pane_g1

0x7423,	// (0x00036915) blid2_navig_pane_t1_ParamLimits

0x7423,	// (0x00036915) blid2_navig_pane_t1

0x743e,	// (0x00036930) blid2_navig_pane_t2_ParamLimits

0x743e,	// (0x00036930) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0003efcb) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0003efcb) blid2_navig_pane_t

0x7459,	// (0x0003694b) blid2_navig_ring_pane_ParamLimits

0x7459,	// (0x0003694b) blid2_navig_ring_pane

0x7474,	// (0x00036966) blid2_speed_pane_ParamLimits

0x7474,	// (0x00036966) blid2_speed_pane

0x7480,	// (0x00036972) blid2_tripm_pane_g1_ParamLimits

0x7480,	// (0x00036972) blid2_tripm_pane_g1

0x749b,	// (0x0003698d) blid2_tripm_pane_g2_ParamLimits

0x749b,	// (0x0003698d) blid2_tripm_pane_g2

0x74af,	// (0x000369a1) blid2_tripm_pane_g3_ParamLimits

0x74af,	// (0x000369a1) blid2_tripm_pane_g3

0x74c3,	// (0x000369b5) blid2_tripm_pane_g4_ParamLimits

0x74c3,	// (0x000369b5) blid2_tripm_pane_g4

0x74d7,	// (0x000369c9) blid2_tripm_pane_g5_ParamLimits

0x74d7,	// (0x000369c9) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0003efd0) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0003efd0) blid2_tripm_pane_g

0x74fd,	// (0x000369ef) blid2_tripm_pane_t1_ParamLimits

0x74fd,	// (0x000369ef) blid2_tripm_pane_t1

0x7516,	// (0x00036a08) blid2_tripm_pane_t2_ParamLimits

0x7516,	// (0x00036a08) blid2_tripm_pane_t2

0x752f,	// (0x00036a21) blid2_tripm_pane_t3_ParamLimits

0x752f,	// (0x00036a21) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0003efdd) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0003efdd) blid2_tripm_pane_t

0x7576,	// (0x00036a68) cell_blid2_satellite_pane_ParamLimits

0x7576,	// (0x00036a68) cell_blid2_satellite_pane

0x7592,	// (0x00036a84) cell_blid2_satellite_pane_g1

0xda1e,	// (0x0003cf10) cell_blid2_satellite_pane_t1

0xc9f6,	// (0x0003bee8) blid2_speed_pane_g1

0xda2c,	// (0x0003cf1e) blid2_speed_pane_t1

0xda3a,	// (0x0003cf2c) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0003efe6) blid2_speed_pane_t

0xc9f6,	// (0x0003bee8) blid2_navig_ring_pane_g1

0x759b,	// (0x00036a8d) blid2_navig_ring_pane_g2

0x75a3,	// (0x00036a95) blid2_navig_ring_pane_g3

0x75ab,	// (0x00036a9d) blid2_navig_ring_pane_g4

0x75b3,	// (0x00036aa5) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0003efeb) blid2_navig_ring_pane_g

0x9dbc,	// (0x000392ae) bg_popup_window_pane_cp011

0xda48,	// (0x0003cf3a) popup_blid2_search_window_g1

0xda50,	// (0x0003cf42) popup_blid2_search_window_t1

0xda5e,	// (0x0003cf50) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0003eff6) popup_blid2_search_window_t

0xa840,	// (0x00039d32) main_browser_pane_g1

0xa52e,	// (0x00039a20) main_browser_pane_ParamLimits

0x141d,	// (0x0003090f) bg_button_pane_cp011_ParamLimits

0x1102,	// (0x000305f4) cell_vitu2_function_pane_g1_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_popup_sub_pane_cp22_ParamLimits

0x6dff,	// (0x000362f1) input_focus_pane_cp08_ParamLimits

0x6e16,	// (0x00036308) popup_vitu2_query_button_pane_ParamLimits

0x6e16,	// (0x00036308) popup_vitu2_query_button_pane

0x6e27,	// (0x00036319) popup_vitu2_query_input_button_pane

0xd621,	// (0x0003cb13) popup_vitu2_query_window_g1_ParamLimits

0x6e31,	// (0x00036323) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0003eef7) popup_vitu2_query_window_g_ParamLimits

0x9dbc,	// (0x000392ae) bg_button_pane_cp026

0x75bb,	// (0x00036aad) popup_vitu2_query_input_button_pane_g1

0x9dbc,	// (0x000392ae) bg_button_pane_cp025

0xda6c,	// (0x0003cf5e) popup_vitu2_query_button_pane_t1

0x4ec4,	// (0x000343b6) main_mp3_pane_t6

0x4ed2,	// (0x000343c4) popup_slider_window_cp01

0x63c8,	// (0x000358ba) cam4_battery_pane

0x641d,	// (0x0003590f) cam4_battery_pane_cp02

0x72a7,	// (0x00036799) cam4_battery_pane_cp01

0x72a7,	// (0x00036799) cam4_battery_pane_cp03

0xd2f6,	// (0x0003c7e8) cam4_battery_pane_g1

0xc9f6,	// (0x0003bee8) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0003effb) cam4_battery_pane_g

0xc8bc,	// (0x0003bdae) popup_blid_sat_info2_window_t11

0xaf6e,	// (0x0003a460) aid_size_touch_mv_arrow_left_ParamLimits

0xaf99,	// (0x0003a48b) aid_size_touch_mv_arrow_right_ParamLimits

0xaff7,	// (0x0003a4e9) navi_pane_g1_ParamLimits

0xb003,	// (0x0003a4f5) navi_pane_g2_ParamLimits

0xb031,	// (0x0003a523) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0003e8bc) navi_pane_g_ParamLimits

0x37fa,	// (0x00032cec) navi_pane_mv_t1_ParamLimits

0x5b6f,	// (0x00035061) grid_imed_effect_pane_ParamLimits

0x221d,	// (0x0003170f) aid_placing_vt_slider_lsc

0xa78b,	// (0x00039c7d) aid_placing_vt_slider_prt

0xb208,	// (0x0003a6fa) bg_tb_trans_pane_cp01_ParamLimits

0xcb3d,	// (0x0003c02f) popup_image_details_window_g1_ParamLimits

0xcb50,	// (0x0003c042) popup_image_details_window_g2_ParamLimits

0xcb65,	// (0x0003c057) popup_image_details_window_g3_ParamLimits

0xcb65,	// (0x0003c057) popup_image_details_window_g3

0xf6fd,	// (0x0003ebef) popup_image_details_window_g_ParamLimits

0xcb79,	// (0x0003c06b) popup_image_details_window_t1_ParamLimits

0xcb8b,	// (0x0003c07d) popup_image_details_window_t2_ParamLimits

0xcba4,	// (0x0003c096) popup_image_details_window_t3_ParamLimits

0xcbb8,	// (0x0003c0aa) popup_image_details_window_t4_ParamLimits

0xcbd3,	// (0x0003c0c5) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0003ebf6) popup_image_details_window_t_ParamLimits

0x71b3,	// (0x000366a5) cl_header_name_pane_ParamLimits

0x71b3,	// (0x000366a5) cl_header_name_pane

0x75c3,	// (0x00036ab5) cl_header_name_pane_t1_ParamLimits

0x75c3,	// (0x00036ab5) cl_header_name_pane_t1

0x75e4,	// (0x00036ad6) cl_header_name_pane_t2_ParamLimits

0x75e4,	// (0x00036ad6) cl_header_name_pane_t2

0x7626,	// (0x00036b18) cl_header_name_pane_t3_ParamLimits

0x7626,	// (0x00036b18) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0003f000) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0003f000) cl_header_name_pane_t

0xb0c0,	// (0x0003a5b2) navi_pane_mv_g2_ParamLimits

0xd367,	// (0x0003c859) field_vitu2_entry_pane_g1_ParamLimits

0xd373,	// (0x0003c865) field_vitu2_entry_pane_g2_ParamLimits

0xd37f,	// (0x0003c871) field_vitu2_entry_pane_g3_ParamLimits

0xd37f,	// (0x0003c871) field_vitu2_entry_pane_g3

0xf904,	// (0x0003edf6) field_vitu2_entry_pane_g_ParamLimits

0x64e7,	// (0x000359d9) cell_vitu2_itu_pane_g1_ParamLimits

0x0faa,	// (0x0003049c) cell_vitu2_itu_pane_g2_ParamLimits

0x0faa,	// (0x0003049c) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0003ee02) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0003ee02) cell_vitu2_itu_pane_g

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp05_ParamLimits

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp05

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp03

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp04

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp10_ParamLimits

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp10

0x7155,	// (0x00036647) bg_vkb2_func_pane_cp08

0x713b,	// (0x0003662d) bg_vkb2_func_pane_cp06

0x7149,	// (0x0003663b) bg_vkb2_func_pane_cp07

0xd96f,	// (0x0003ce61) bg_vkb2_func_pane_cp11_ParamLimits

0xd96f,	// (0x0003ce61) bg_vkb2_func_pane_cp11

0xd984,	// (0x0003ce76) bg_vkb2_func_pane_cp12_ParamLimits

0xd984,	// (0x0003ce76) bg_vkb2_func_pane_cp12

0x9dbc,	// (0x000392ae) bg_vkb2_func_pane_cp09

0xd3bc,	// (0x0003c8ae) bg_vkb2_func_pane_g1

0xa951,	// (0x00039e43) bg_vkb2_func_pane_g2

0xd3c4,	// (0x0003c8b6) bg_vkb2_func_pane_g3

0xd3cc,	// (0x0003c8be) bg_vkb2_func_pane_g4

0xd5e6,	// (0x0003cad8) bg_vkb2_func_pane_g5

0xd3e4,	// (0x0003c8d6) bg_vkb2_func_pane_g6

0xd3ec,	// (0x0003c8de) bg_vkb2_func_pane_g7

0xd3dc,	// (0x0003c8ce) bg_vkb2_func_pane_g8

0xa931,	// (0x00039e23) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0003f007) bg_vkb2_func_pane_g

0x74eb,	// (0x000369dd) blid2_tripm_pane_g6_ParamLimits

0x74eb,	// (0x000369dd) blid2_tripm_pane_g6

0xd2a9,	// (0x0003c79b) mp4_progress_pane_g1

0x7562,	// (0x00036a54) blid2_tripm_values_pane_ParamLimits

0x7562,	// (0x00036a54) blid2_tripm_values_pane

0x7657,	// (0x00036b49) blid2_tripm_values_pane_t1

0x7665,	// (0x00036b57) blid2_tripm_values_pane_t2

0x7673,	// (0x00036b65) blid2_tripm_values_pane_t3

0x7681,	// (0x00036b73) blid2_tripm_values_pane_t4

0x768f,	// (0x00036b81) blid2_tripm_values_pane_t5

0x769d,	// (0x00036b8f) blid2_tripm_values_pane_t6

0x76ab,	// (0x00036b9d) blid2_tripm_values_pane_t7

0x76b9,	// (0x00036bab) blid2_tripm_values_pane_t8

0x76c7,	// (0x00036bb9) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0003f01a) blid2_tripm_values_pane_t

0x225a,	// (0x0003174c) call_video_pane_t1_ParamLimits

0x2274,	// (0x00031766) call_video_pane_t2_ParamLimits

0xf253,	// (0x0003e745) call_video_pane_t_ParamLimits

0x3d59,	// (0x0003324b) msg_header_pane_g1_ParamLimits

0xb2ce,	// (0x0003a7c0) msg_header_pane_g2_ParamLimits

0xb2ce,	// (0x0003a7c0) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0003e95f) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0003e95f) msg_header_pane_g

0xa52e,	// (0x00039a20) main_clock2_pane_ParamLimits

0x5915,	// (0x00034e07) grid_clock2_toolbar_pane_ParamLimits

0x5915,	// (0x00034e07) grid_clock2_toolbar_pane

0x5915,	// (0x00034e07) listscroll_clock2_pane_ParamLimits

0x5915,	// (0x00034e07) listscroll_clock2_pane

0x59f4,	// (0x00034ee6) main_clock2_pane_t3_ParamLimits

0x59f4,	// (0x00034ee6) main_clock2_pane_t3

0x5a17,	// (0x00034f09) main_clock2_pane_t4_ParamLimits

0x5a17,	// (0x00034f09) main_clock2_pane_t4

0xda7a,	// (0x0003cf6c) cell_clock2_toolbar_pane

0xda82,	// (0x0003cf74) cell_clock2_toolbar_pane_cp01

0xda82,	// (0x0003cf74) cell_clock2_toolbar_pane_cp02

0xda8a,	// (0x0003cf7c) cell_clock2_toolbar_pane_cp03

0xda92,	// (0x0003cf84) list_clock2_pane

0xaef3,	// (0x0003a3e5) scroll_pane_cp10

0xda9a,	// (0x0003cf8c) list_single_clock2_pane_ParamLimits

0xda9a,	// (0x0003cf8c) list_single_clock2_pane

0xa6df,	// (0x00039bd1) list_highlight_pane_cp08

0xdaa7,	// (0x0003cf99) list_single_clock2_pane_t1

0xdada,	// (0x0003cfcc) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0003f02d) list_single_clock2_pane_t

0x9dbc,	// (0x000392ae) bg_button_pane_cp10

0xdae8,	// (0x0003cfda) cell_clock2_toolbar_pane_g1

0xfee6,	// (0x0002f3d8) aid_main_viewer_pane_g1_ParamLimits

0xfee6,	// (0x0002f3d8) aid_main_viewer_pane_g1

0xfef4,	// (0x0002f3e6) aid_main_viewer_pane_g2_ParamLimits

0xfef4,	// (0x0002f3e6) aid_main_viewer_pane_g2

0x3db0,	// (0x000332a2) aid_main_viewer_pane_g3_ParamLimits

0x3db0,	// (0x000332a2) aid_main_viewer_pane_g3

0x3dbf,	// (0x000332b1) aid_main_viewer_pane_g4_ParamLimits

0x3dbf,	// (0x000332b1) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0003e970) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0003e970) aid_main_viewer_pane_g

0xff28,	// (0x0002f41a) main_calc_pane_ParamLimits

0xff4c,	// (0x0002f43e) main_dialer2_pane_ParamLimits

0x1437,	// (0x00030929) main_cam6_pane

0x1437,	// (0x00030929) main_vid6_pane

0x5921,	// (0x00034e13) listscroll_gen_pane_cp06_ParamLimits

0x5921,	// (0x00034e13) listscroll_gen_pane_cp06

0x5a3a,	// (0x00034f2c) main_clock2_pane_t5_ParamLimits

0x5a3a,	// (0x00034f2c) main_clock2_pane_t5

0x5a98,	// (0x00034f8a) aid_call2_pane_cp10_ParamLimits

0x5aaa,	// (0x00034f9c) aid_call_pane_cp10_ParamLimits

0xaf62,	// (0x0003a454) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaf62,	// (0x0003a454) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5abc,	// (0x00034fae) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5abc,	// (0x00034fae) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaf62,	// (0x0003a454) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0003ecab) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ad2,	// (0x00034fc4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61d9,	// (0x000356cb) cell_dialer2_keypad_pane_g2_ParamLimits

0x61d9,	// (0x000356cb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0003ed95) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0003ed95) cell_dialer2_keypad_pane_g

0x61f5,	// (0x000356e7) cell_dialer2_keypad_pane_t1

0x6814,	// (0x00035d06) main_cset_text2_pane_ParamLimits

0x6814,	// (0x00035d06) main_cset_text2_pane

0xd819,	// (0x0003cd0b) area_vitu2_query_pane_g1_ParamLimits

0x70da,	// (0x000365cc) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0003ef4a) area_vitu2_query_pane_g_ParamLimits

0xd89d,	// (0x0003cd8f) area_vitu2_query_pane_t7_ParamLimits

0xd89d,	// (0x0003cd8f) area_vitu2_query_pane_t7

0x713b,	// (0x0003662d) bg_button_pane_cp018_ParamLimits

0x7149,	// (0x0003663b) bg_button_pane_cp021_ParamLimits

0x7155,	// (0x00036647) bg_button_pane_cp022_ParamLimits

0x7155,	// (0x00036647) bg_vkb2_func_pane_cp08_ParamLimits

0x713b,	// (0x0003662d) bg_vkb2_func_pane_cp06_ParamLimits

0x7149,	// (0x0003663b) bg_vkb2_func_pane_cp07_ParamLimits

0x7166,	// (0x00036658) input_focus_pane_cp09_ParamLimits

0x76d5,	// (0x00036bc7) cam6_autofocus_pane_ParamLimits

0x76d5,	// (0x00036bc7) cam6_autofocus_pane

0x127b,	// (0x0003076d) cam6_image_uncrop_pane_ParamLimits

0x127b,	// (0x0003076d) cam6_image_uncrop_pane

0x128a,	// (0x0003077c) cam6_indi_pane_ParamLimits

0x128a,	// (0x0003077c) cam6_indi_pane

0x12a0,	// (0x00030792) cam6_mode_pane_ParamLimits

0x12a0,	// (0x00030792) cam6_mode_pane

0x12b2,	// (0x000307a4) cam6_timer_pane_ParamLimits

0x12b2,	// (0x000307a4) cam6_timer_pane

0x12be,	// (0x000307b0) cam6_zoom_pane_ParamLimits

0x12be,	// (0x000307b0) cam6_zoom_pane

0x76e3,	// (0x00036bd5) cam6_mode_pane_g1_ParamLimits

0x76e3,	// (0x00036bd5) cam6_mode_pane_g1

0x76f3,	// (0x00036be5) cam6_mode_pane_g2_ParamLimits

0x76f3,	// (0x00036be5) cam6_mode_pane_g2

0x7703,	// (0x00036bf5) cam6_mode_pane_g3_ParamLimits

0x7703,	// (0x00036bf5) cam6_mode_pane_g3

0x7713,	// (0x00036c05) cam6_mode_pane_g4_ParamLimits

0x7713,	// (0x00036c05) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0003f032) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0003f032) cam6_mode_pane_g

0xdab5,	// (0x0003cfa7) bg_tb_trans_pane_cp08_ParamLimits

0xdab5,	// (0x0003cfa7) bg_tb_trans_pane_cp08

0xdaf0,	// (0x0003cfe2) cam6_battery_pane_ParamLimits

0xdaf0,	// (0x0003cfe2) cam6_battery_pane

0xdb06,	// (0x0003cff8) cam6_indi_pane_g1_ParamLimits

0xdb06,	// (0x0003cff8) cam6_indi_pane_g1

0xdb18,	// (0x0003d00a) cam6_indi_pane_g2_ParamLimits

0xdb18,	// (0x0003d00a) cam6_indi_pane_g2

0xdb2a,	// (0x0003d01c) cam6_indi_pane_g3_ParamLimits

0xdb2a,	// (0x0003d01c) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0003f03b) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0003f03b) cam6_indi_pane_g

0xdb3c,	// (0x0003d02e) cam6_indi_pane_t1_ParamLimits

0xdb3c,	// (0x0003d02e) cam6_indi_pane_t1

0x64a1,	// (0x00035993) cam6_autofocus_pane_g1

0x6499,	// (0x0003598b) cam6_autofocus_pane_g2

0x64b1,	// (0x000359a3) cam6_autofocus_pane_g3

0x64a9,	// (0x0003599b) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0003f042) cam6_autofocus_pane_g

0xdb62,	// (0x0003d054) cam6_timer_pane_g1

0xdb6a,	// (0x0003d05c) cam6_timer_pane_t1

0xdb78,	// (0x0003d06a) cam6_zoom_cont_pane

0xdb80,	// (0x0003d072) cam6_zoom_pane_g1

0xdb88,	// (0x0003d07a) cam6_zoom_pane_g2

0x7723,	// (0x00036c15) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0003f04b) cam6_zoom_pane_g

0xc9f6,	// (0x0003bee8) cam6_battery_pane_g1

0xc9f6,	// (0x0003bee8) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0003ebb3) cam6_battery_pane_g

0xdb90,	// (0x0003d082) cam6_zoom_cont_pane_g1

0xdb99,	// (0x0003d08b) cam6_zoom_cont_pane_g2

0xdba2,	// (0x0003d094) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0003f052) cam6_zoom_cont_pane_g

0x7740,	// (0x00036c32) cam6_mode_pane_cp_ParamLimits

0x7740,	// (0x00036c32) cam6_mode_pane_cp

0x7752,	// (0x00036c44) cam6_zoom_pane_cp_ParamLimits

0x7752,	// (0x00036c44) cam6_zoom_pane_cp

0x7760,	// (0x00036c52) vid6_image_uncrop_cif_pane_ParamLimits

0x7760,	// (0x00036c52) vid6_image_uncrop_cif_pane

0x7770,	// (0x00036c62) vid6_image_uncrop_nhd_pane_ParamLimits

0x7770,	// (0x00036c62) vid6_image_uncrop_nhd_pane

0x777f,	// (0x00036c71) vid6_image_uncrop_vga_pane_ParamLimits

0x777f,	// (0x00036c71) vid6_image_uncrop_vga_pane

0x778e,	// (0x00036c80) vid6_image_uncrop_wvga_pane_ParamLimits

0x778e,	// (0x00036c80) vid6_image_uncrop_wvga_pane

0x779d,	// (0x00036c8f) vid6_indi_pane_ParamLimits

0x779d,	// (0x00036c8f) vid6_indi_pane

0xdab5,	// (0x0003cfa7) bg_tb_trans_pane_cp09_ParamLimits

0xdab5,	// (0x0003cfa7) bg_tb_trans_pane_cp09

0xdbba,	// (0x0003d0ac) cam6_battery_pane_cp_ParamLimits

0xdbba,	// (0x0003d0ac) cam6_battery_pane_cp

0xdbc6,	// (0x0003d0b8) vid6_indi_pane_g1_ParamLimits

0xdbc6,	// (0x0003d0b8) vid6_indi_pane_g1

0xdbd8,	// (0x0003d0ca) vid6_indi_pane_g2_ParamLimits

0xdbd8,	// (0x0003d0ca) vid6_indi_pane_g2

0xdbea,	// (0x0003d0dc) vid6_indi_pane_g3_ParamLimits

0xdbea,	// (0x0003d0dc) vid6_indi_pane_g3

0xdc01,	// (0x0003d0f3) vid6_indi_pane_g4_ParamLimits

0xdc01,	// (0x0003d0f3) vid6_indi_pane_g4

0xdc18,	// (0x0003d10a) vid6_indi_pane_g5_ParamLimits

0xdc18,	// (0x0003d10a) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0003f059) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0003f059) vid6_indi_pane_g

0xdc32,	// (0x0003d124) vid6_indi_pane_t1_ParamLimits

0xdc32,	// (0x0003d124) vid6_indi_pane_t1

0xdc48,	// (0x0003d13a) vid6_indi_pane_t2_ParamLimits

0xdc48,	// (0x0003d13a) vid6_indi_pane_t2

0xdc70,	// (0x0003d162) vid6_indi_pane_t3_ParamLimits

0xdc70,	// (0x0003d162) vid6_indi_pane_t3

0xdc98,	// (0x0003d18a) vid6_indi_pane_t4_ParamLimits

0xdc98,	// (0x0003d18a) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0003f064) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0003f064) vid6_indi_pane_t

0xdcbc,	// (0x0003d1ae) wait_bar_pane_cp08

0x77b5,	// (0x00036ca7) main_cset_text2_pane_t1_ParamLimits

0x77b5,	// (0x00036ca7) main_cset_text2_pane_t1

0x772b,	// (0x00036c1d) listscroll_gen_pane_cp06_t1_ParamLimits

0x772b,	// (0x00036c1d) listscroll_gen_pane_cp06_t1

0x1437,	// (0x00030929) main_cam6_set_pane

0x63ba,	// (0x000358ac) bg_tb_trans_pane_cp06_ParamLimits

0x63d0,	// (0x000358c2) cam4_indicators_pane_g1_ParamLimits

0x63e1,	// (0x000358d3) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0003edd2) cam4_indicators_pane_g_ParamLimits

0x63f9,	// (0x000358eb) cam4_indicators_pane_t1_ParamLimits

0x141d,	// (0x0003090f) bg_tb_trans_pane_cp07_ParamLimits

0x6427,	// (0x00035919) vid4_indicators_pane_g1_ParamLimits

0x643d,	// (0x0003592f) vid4_indicators_pane_g2_ParamLimits

0x6451,	// (0x00035943) vid4_indicators_pane_g3_ParamLimits

0x6464,	// (0x00035956) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0003ede4) vid4_indicators_pane_g_ParamLimits

0x6482,	// (0x00035974) vid4_indicators_pane_t1_ParamLimits

0x72af,	// (0x000367a1) vid4_progress_pane_g1_ParamLimits

0x72bf,	// (0x000367b1) vid4_progress_pane_g2_ParamLimits

0x123e,	// (0x00030730) vid4_progress_pane_g3_ParamLimits

0x63e1,	// (0x000358d3) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0003ef95) vid4_progress_pane_g_ParamLimits

0x1250,	// (0x00030742) vid4_progress_pane_t1_ParamLimits

0x72cf,	// (0x000367c1) vid4_progress_pane_t2_ParamLimits

0x72e4,	// (0x000367d6) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0003efa0) vid4_progress_pane_t_ParamLimits

0x1268,	// (0x0003075a) wait_bar_pane_cp07_ParamLimits

0x77d6,	// (0x00036cc8) main_cam6_set_pane_g2_ParamLimits

0x77d6,	// (0x00036cc8) main_cam6_set_pane_g2

0x77fc,	// (0x00036cee) main_cset6_listscroll_pane_ParamLimits

0x77fc,	// (0x00036cee) main_cset6_listscroll_pane

0x781a,	// (0x00036d0c) main_cset6_slider_pane_ParamLimits

0x781a,	// (0x00036d0c) main_cset6_slider_pane

0x7830,	// (0x00036d22) main_cset6_text2_pane_ParamLimits

0x7830,	// (0x00036d22) main_cset6_text2_pane

0xdccb,	// (0x0003d1bd) main_cset6_text_pane

0xdcd3,	// (0x0003d1c5) main_cset_list_pane_copy1_ParamLimits

0xdcd3,	// (0x0003d1c5) main_cset_list_pane_copy1

0xdce3,	// (0x0003d1d5) scroll_pane_cp028_copy1

0x783e,	// (0x00036d30) cset_list_set_pane_copy1

0x7852,	// (0x00036d44) aid_position_infowindow_above_copy1

0x785a,	// (0x00036d4c) aid_position_infowindow_below_copy1

0x7862,	// (0x00036d54) cset_list_set_pane_g1_copy1

0x786a,	// (0x00036d5c) cset_list_set_pane_g3_copy1_ParamLimits

0x786a,	// (0x00036d5c) cset_list_set_pane_g3_copy1

0x7879,	// (0x00036d6b) cset_list_set_pane_t1_copy1_ParamLimits

0x7879,	// (0x00036d6b) cset_list_set_pane_t1_copy1

0xb208,	// (0x0003a6fa) list_highlight_pane_cp021_copy1_ParamLimits

0xb208,	// (0x0003a6fa) list_highlight_pane_cp021_copy1

0xdcec,	// (0x0003d1de) cset6_slider_pane_ParamLimits

0xdcec,	// (0x0003d1de) cset6_slider_pane

0xdd18,	// (0x0003d20a) main_cset6_slider_pane_g1_ParamLimits

0xdd18,	// (0x0003d20a) main_cset6_slider_pane_g1

0x788e,	// (0x00036d80) main_cset6_slider_pane_g2_ParamLimits

0x788e,	// (0x00036d80) main_cset6_slider_pane_g2

0xdd40,	// (0x0003d232) main_cset6_slider_pane_g3_ParamLimits

0xdd40,	// (0x0003d232) main_cset6_slider_pane_g3

0x78b6,	// (0x00036da8) main_cset6_slider_pane_g4_ParamLimits

0x78b6,	// (0x00036da8) main_cset6_slider_pane_g4

0x78c2,	// (0x00036db4) main_cset6_slider_pane_g5_ParamLimits

0x78c2,	// (0x00036db4) main_cset6_slider_pane_g5

0xd4ef,	// (0x0003c9e1) main_cset6_slider_pane_g7_ParamLimits

0xd4ef,	// (0x0003c9e1) main_cset6_slider_pane_g7

0xd4fb,	// (0x0003c9ed) main_cset6_slider_pane_g8_ParamLimits

0xd4fb,	// (0x0003c9ed) main_cset6_slider_pane_g8

0x68c3,	// (0x00035db5) main_cset6_slider_pane_g9_ParamLimits

0x68c3,	// (0x00035db5) main_cset6_slider_pane_g9

0x68cf,	// (0x00035dc1) main_cset6_slider_pane_g10_ParamLimits

0x68cf,	// (0x00035dc1) main_cset6_slider_pane_g10

0x68db,	// (0x00035dcd) main_cset6_slider_pane_g11_ParamLimits

0x68db,	// (0x00035dcd) main_cset6_slider_pane_g11

0x68e7,	// (0x00035dd9) main_cset6_slider_pane_g12_ParamLimits

0x68e7,	// (0x00035dd9) main_cset6_slider_pane_g12

0x68f3,	// (0x00035de5) main_cset6_slider_pane_g13_ParamLimits

0x68f3,	// (0x00035de5) main_cset6_slider_pane_g13

0x68ff,	// (0x00035df1) main_cset6_slider_pane_g14_ParamLimits

0x68ff,	// (0x00035df1) main_cset6_slider_pane_g14

0x78d0,	// (0x00036dc2) main_cset6_slider_pane_g15_ParamLimits

0x78d0,	// (0x00036dc2) main_cset6_slider_pane_g15

0x6923,	// (0x00035e15) main_cset6_slider_pane_g16_ParamLimits

0x6923,	// (0x00035e15) main_cset6_slider_pane_g16

0x6931,	// (0x00035e23) main_cset6_slider_pane_g17_ParamLimits

0x6931,	// (0x00035e23) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0003f06d) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0003f06d) main_cset6_slider_pane_g

0xdd4c,	// (0x0003d23e) main_cset6_slider_pane_t1_ParamLimits

0xdd4c,	// (0x0003d23e) main_cset6_slider_pane_t1

0x7900,	// (0x00036df2) main_cset6_slider_pane_t2_ParamLimits

0x7900,	// (0x00036df2) main_cset6_slider_pane_t2

0x792b,	// (0x00036e1d) main_cset6_slider_pane_t3_ParamLimits

0x792b,	// (0x00036e1d) main_cset6_slider_pane_t3

0x7956,	// (0x00036e48) main_cset6_slider_pane_t4_ParamLimits

0x7956,	// (0x00036e48) main_cset6_slider_pane_t4

0x7983,	// (0x00036e75) main_cset6_slider_pane_t5_ParamLimits

0x7983,	// (0x00036e75) main_cset6_slider_pane_t5

0xdd8d,	// (0x0003d27f) main_cset6_slider_pane_t7_ParamLimits

0xdd8d,	// (0x0003d27f) main_cset6_slider_pane_t7

0x79b0,	// (0x00036ea2) main_cset6_slider_pane_t8_ParamLimits

0x79b0,	// (0x00036ea2) main_cset6_slider_pane_t8

0x79d4,	// (0x00036ec6) main_cset6_slider_pane_t9_ParamLimits

0x79d4,	// (0x00036ec6) main_cset6_slider_pane_t9

0x79f8,	// (0x00036eea) main_cset6_slider_pane_t10_ParamLimits

0x79f8,	// (0x00036eea) main_cset6_slider_pane_t10

0x7a1c,	// (0x00036f0e) main_cset6_slider_pane_t11_ParamLimits

0x7a1c,	// (0x00036f0e) main_cset6_slider_pane_t11

0xddc3,	// (0x0003d2b5) main_cset6_slider_pane_t14_ParamLimits

0xddc3,	// (0x0003d2b5) main_cset6_slider_pane_t14

0xddfc,	// (0x0003d2ee) main_cset6_slider_pane_t15_ParamLimits

0xddfc,	// (0x0003d2ee) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0003f092) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0003f092) main_cset6_slider_pane_t

0xde35,	// (0x0003d327) cset_slider_pane_g1_copy1

0xde3e,	// (0x0003d330) cset_slider_pane_g2_copy1

0xde47,	// (0x0003d339) cset_slider_pane_g3_copy1

0x9dbc,	// (0x000392ae) bg_popup_sub_pane_cp011_copy1

0xde50,	// (0x0003d342) main_cset_text_pane_g1_copy1

0xd635,	// (0x0003cb27) main_cset_text_pane_t1_copy1

0xd643,	// (0x0003cb35) main_cset_text_pane_t2_copy1

0xd651,	// (0x0003cb43) main_cset_text_pane_t3_copy1

0xd65f,	// (0x0003cb51) main_cset_text_pane_t4_copy1

0xd66d,	// (0x0003cb5f) main_cset_text_pane_t5_copy1

0xde58,	// (0x0003d34a) main_cset_text_pane_t6_copy1

0xde66,	// (0x0003d358) main_cset_text_pane_t7_copy1

0x77b5,	// (0x00036ca7) main_cset_text2_pane_t1_copy1

0x141d,	// (0x0003090f) main_ncimui_pane

0x01da,	// (0x0002f6cc) popup_query_ncimui_window_ParamLimits

0x01da,	// (0x0002f6cc) popup_query_ncimui_window

0xcc82,	// (0x0003c174) field_cale_ev2_pane_g4_ParamLimits

0xcc82,	// (0x0003c174) field_cale_ev2_pane_g4

0x5f38,	// (0x0003542a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f38,	// (0x0003542a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0003ed6c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0003ed6c) cell_video_dialer_keypad_pane_g

0x5f50,	// (0x00035442) cell_video_dialer_keypad_pane_t1

0x9dbc,	// (0x000392ae) bg_popup_window_pane_cp012

0xaddf,	// (0x0003a2d1) heading_pane_cp06

0xde92,	// (0x0003d384) ncim_query_content_pane

0x9dbc,	// (0x000392ae) bg_popup_heading_pane_cp01

0xde9a,	// (0x0003d38c) ncim_heading_pane_t1

0xdea8,	// (0x0003d39a) ncim_indicator_popup_pane

0xdeba,	// (0x0003d3ac) ncim_query_button_pane

0xded0,	// (0x0003d3c2) ncim_query_content_pane_t1

0xdee2,	// (0x0003d3d4) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0003f0d6) ncim_query_content_pane_t

0xdf1c,	// (0x0003d40e) ncim_query_list_pane

0xdf2e,	// (0x0003d420) ncim_query_popup_pane

0xdea8,	// (0x0003d39a) ncim_indicator_popup_pane_ParamLimits

0x7c41,	// (0x00037133) ncim_query_content_pane_g1_ParamLimits

0x7c41,	// (0x00037133) ncim_query_content_pane_g1

0xded0,	// (0x0003d3c2) ncim_query_content_pane_t1_ParamLimits

0xdee2,	// (0x0003d3d4) ncim_query_content_pane_t2_ParamLimits

0x7c4d,	// (0x0003713f) ncim_query_content_pane_t3_ParamLimits

0x7c4d,	// (0x0003713f) ncim_query_content_pane_t3

0x7c75,	// (0x00037167) ncim_query_content_pane_t4_ParamLimits

0x7c75,	// (0x00037167) ncim_query_content_pane_t4

0x7c9d,	// (0x0003718f) ncim_query_content_pane_t5_ParamLimits

0x7c9d,	// (0x0003718f) ncim_query_content_pane_t5

0xdef4,	// (0x0003d3e6) ncim_query_content_pane_t6_ParamLimits

0xdef4,	// (0x0003d3e6) ncim_query_content_pane_t6

0xfbe4,	// (0x0003f0d6) ncim_query_content_pane_t_ParamLimits

0xdf1c,	// (0x0003d40e) ncim_query_list_pane_ParamLimits

0xdf2e,	// (0x0003d420) ncim_query_popup_pane_ParamLimits

0xdf42,	// (0x0003d434) wait_bar_pane_cp04

0x9dbc,	// (0x000392ae) input_focus_pane_cp011

0xdf4a,	// (0x0003d43c) ncim_query_popup_pane_t1

0xdf58,	// (0x0003d44a) ncim_list_query_list_pane_ParamLimits

0xdf58,	// (0x0003d44a) ncim_list_query_list_pane

0x9dbc,	// (0x000392ae) bg_button_pane_cp027

0xdf6b,	// (0x0003d45d) ncim_query_button_pane_g1

0x9dbc,	// (0x000392ae) list_highlight_pane_cp012

0xdf75,	// (0x0003d467) ncim_list_query_list_pane_g1

0xdf7d,	// (0x0003d46f) ncim_list_query_list_pane_t1

0x63ed,	// (0x000358df) cam4_indicators_pane_g3_ParamLimits

0x63ed,	// (0x000358df) cam4_indicators_pane_g3

0x6470,	// (0x00035962) vid4_indicators_pane_g5_ParamLimits

0x6470,	// (0x00035962) vid4_indicators_pane_g5

0x63ed,	// (0x000358df) vid4_progress_pane_g5_ParamLimits

0x63ed,	// (0x000358df) vid4_progress_pane_g5

0x7b2c,	// (0x0003701e) main_ncimui_pane_g1

0x7b95,	// (0x00037087) ncimui_group_query_pane_ParamLimits

0x7b95,	// (0x00037087) ncimui_group_query_pane

0x7bdd,	// (0x000370cf) ncimui_list_pane_ParamLimits

0x7bdd,	// (0x000370cf) ncimui_list_pane

0x7c04,	// (0x000370f6) ncimui_text_pane_ParamLimits

0x7c04,	// (0x000370f6) ncimui_text_pane

0x7cc5,	// (0x000371b7) ncimui_text_pane_t1_ParamLimits

0x7cc5,	// (0x000371b7) ncimui_text_pane_t1

0xdf8b,	// (0x0003d47d) ncimui_list_single_graphic_pane_ParamLimits

0xdf8b,	// (0x0003d47d) ncimui_list_single_graphic_pane

0x7ce3,	// (0x000371d5) ncimui_query_pane_ParamLimits

0x7ce3,	// (0x000371d5) ncimui_query_pane

0x9dbc,	// (0x000392ae) list_highlight_pane_cp013

0xdf9b,	// (0x0003d48d) ncim_list_query_list_pane_t1_copy1

0xdf75,	// (0x0003d467) ncim_list_single_graphic_pane_g1

0x7cf6,	// (0x000371e8) ncim_query_button_pane_cp01

0x7d02,	// (0x000371f4) ncim_query_entry_pane_ParamLimits

0x7d02,	// (0x000371f4) ncim_query_entry_pane

0x7d15,	// (0x00037207) ncimui_query_pane_g1

0x7d21,	// (0x00037213) ncimui_query_pane_t1_ParamLimits

0x7d21,	// (0x00037213) ncimui_query_pane_t1

0xb208,	// (0x0003a6fa) input_focus_pane_cp012

0xdfa9,	// (0x0003d49b) ncim_query_entry_pane_t1

0xa52e,	// (0x00039a20) main_im_pane_ParamLimits

0x141d,	// (0x0003090f) main_mobtv_pane_ParamLimits

0x141d,	// (0x0003090f) main_mobtv_pane

0x78e8,	// (0x00036dda) main_cset6_slider_pane_g18_ParamLimits

0x78e8,	// (0x00036dda) main_cset6_slider_pane_g18

0x78f4,	// (0x00036de6) main_cset6_slider_pane_g19_ParamLimits

0x78f4,	// (0x00036de6) main_cset6_slider_pane_g19

0x7d3a,	// (0x0003722c) bg_main_mobtv_pane_ParamLimits

0x7d3a,	// (0x0003722c) bg_main_mobtv_pane

0x7d48,	// (0x0003723a) main_mobtv_info_pane

0x7d53,	// (0x00037245) main_mobtv_loading_pane_ParamLimits

0x7d53,	// (0x00037245) main_mobtv_loading_pane

0xdfbb,	// (0x0003d4ad) main_mobtv_pg_channel_list_pane

0xdfc5,	// (0x0003d4b7) main_mobtv_pg_hdr_pane

0x7d60,	// (0x00037252) main_mobtv_programe_curr_pane_ParamLimits

0x7d60,	// (0x00037252) main_mobtv_programe_curr_pane

0x7d6d,	// (0x0003725f) main_mobtv_programe_next_pane_ParamLimits

0x7d6d,	// (0x0003725f) main_mobtv_programe_next_pane

0xdfce,	// (0x0003d4c0) popup_mobtv_noti_window

0xc9f6,	// (0x0003bee8) main_tv_pg_hdr_pane_g1

0xdfd8,	// (0x0003d4ca) main_tv_pg_hdr_pane_g2

0xdfe0,	// (0x0003d4d2) main_tv_pg_hdr_pane_g3

0xdfe8,	// (0x0003d4da) main_tv_pg_hdr_pane_g4

0xdff0,	// (0x0003d4e2) main_tv_pg_hdr_pane_g5

0xdffa,	// (0x0003d4ec) main_tv_pg_hdr_pane_g6

0xe004,	// (0x0003d4f6) main_tv_pg_hdr_pane_g7

0xe00e,	// (0x0003d500) main_tv_pg_hdr_pane_g8

0xe018,	// (0x0003d50a) main_tv_pg_hdr_pane_g9

0xe022,	// (0x0003d514) main_tv_pg_hdr_pane_g10

0xe02c,	// (0x0003d51e) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0003f0e3) main_tv_pg_hdr_pane_g

0xe036,	// (0x0003d528) main_tv_pg_hdr_pane_t1

0xe044,	// (0x0003d536) main_tv_pg_hdr_pane_t2

0xe052,	// (0x0003d544) main_tv_pg_hdr_pane_t3

0xe062,	// (0x0003d554) main_tv_pg_hdr_pane_t4

0xe072,	// (0x0003d564) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0003f0fa) main_tv_pg_hdr_pane_t

0xe082,	// (0x0003d574) single_mobtv_pg_channel_pane_ParamLimits

0xe082,	// (0x0003d574) single_mobtv_pg_channel_pane

0xe094,	// (0x0003d586) single_mobtv_pg_channel_table_pane

0xe09d,	// (0x0003d58f) single_mobtv_pg_channel_thumb_pane

0xe0a6,	// (0x0003d598) single_tv_pg_channel_pane_g1

0xe0af,	// (0x0003d5a1) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0003f105) single_tv_pg_channel_pane_g

0xcc1d,	// (0x0003c10f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcc1d,	// (0x0003c10f) bg_single_mobtv_pg_channel_thumb_pane

0xe0b8,	// (0x0003d5aa) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0b8,	// (0x0003d5aa) single_mobtv_pg_channel_thumb_pane_g1

0xe0c6,	// (0x0003d5b8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0c6,	// (0x0003d5b8) single_mobtv_pg_channel_thumb_pane_g2

0xe0d2,	// (0x0003d5c4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0d2,	// (0x0003d5c4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0003f10a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0003f10a) single_mobtv_pg_channel_thumb_pane_g

0xe0de,	// (0x0003d5d0) single_mobtv_pg_channel_thumb_pane_t1

0xe0ec,	// (0x0003d5de) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0003f111) single_mobtv_pg_channel_thumb_pane_t

0xc9f6,	// (0x0003bee8) bg_single_mobtv_pg_channel_table_pane_g1

0xc9f6,	// (0x0003bee8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0003ebb3) bg_single_mobtv_pg_channel_table_pane_g

0xe0fa,	// (0x0003d5ec) single_mobtv_pg_channel_table_pane_t1

0xe108,	// (0x0003d5fa) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0003f116) single_mobtv_pg_channel_table_pane_t

0x7d82,	// (0x00037274) main_mobtv_info_pane_g1_ParamLimits

0x7d82,	// (0x00037274) main_mobtv_info_pane_g1

0x7da0,	// (0x00037292) main_mobtv_info_pane_t1_ParamLimits

0x7da0,	// (0x00037292) main_mobtv_info_pane_t1

0x7e18,	// (0x0003730a) main_mobtv_info_pane_t2_ParamLimits

0x7e18,	// (0x0003730a) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0003f120) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0003f120) main_mobtv_info_pane_t

0x7ea9,	// (0x0003739b) wait_bar_pane_cp05

0x7ebb,	// (0x000373ad) main_mobtv_loading_pane_g1_ParamLimits

0x7ebb,	// (0x000373ad) main_mobtv_loading_pane_g1

0x7ecc,	// (0x000373be) main_mobtv_loading_pane_g2_ParamLimits

0x7ecc,	// (0x000373be) main_mobtv_loading_pane_g2

0x7ed8,	// (0x000373ca) main_mobtv_loading_pane_g3_ParamLimits

0x7ed8,	// (0x000373ca) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0003f127) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0003f127) main_mobtv_loading_pane_g

0xe116,	// (0x0003d608) main_mobtv_loading_pane_t1_ParamLimits

0xe116,	// (0x0003d608) main_mobtv_loading_pane_t1

0xe12e,	// (0x0003d620) main_mobtv_loading_pane_t2_ParamLimits

0xe12e,	// (0x0003d620) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0003f12e) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0003f12e) main_mobtv_loading_pane_t

0x7eeb,	// (0x000373dd) wait_bar_pane_cp06_ParamLimits

0x7eeb,	// (0x000373dd) wait_bar_pane_cp06

0xe152,	// (0x0003d644) main_mobtv_programe_curr_pane_t1

0xe160,	// (0x0003d652) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0003f133) main_mobtv_programe_curr_pane_t

0xe16e,	// (0x0003d660) main_mobtv_programe_next_pane_t1

0xe17c,	// (0x0003d66e) main_mobtv_programe_next_pane_t2

0xe18a,	// (0x0003d67c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0003f138) main_mobtv_programe_next_pane_t

0x9dbc,	// (0x000392ae) bg_popup_mobtv_noti_window_pane

0xe198,	// (0x0003d68a) popup_mobtv_noti_window_g1

0xe1a0,	// (0x0003d692) popup_mobtv_noti_window_t1

0xe1ae,	// (0x0003d6a0) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0003f13f) popup_mobtv_noti_window_t

0xc9f6,	// (0x0003bee8) bg_popup_mobtv_noti_window_pane_g1

0x1437,	// (0x00030929) sc_clock_pane

0x1437,	// (0x00030929) main_fs_bigclock_pane

0x754c,	// (0x00036a3e) blid2_tripm_pane_t4_ParamLimits

0x754c,	// (0x00036a3e) blid2_tripm_pane_t4

0x7efa,	// (0x000373ec) sc_clock_pane_g1_ParamLimits

0x7efa,	// (0x000373ec) sc_clock_pane_g1

0x7f0c,	// (0x000373fe) sc_clock_pane_t1_ParamLimits

0x7f0c,	// (0x000373fe) sc_clock_pane_t1

0x7f30,	// (0x00037422) sc_clock_pane_t2_ParamLimits

0x7f30,	// (0x00037422) sc_clock_pane_t2

0x7f48,	// (0x0003743a) sc_clock_pane_t3_ParamLimits

0x7f48,	// (0x0003743a) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0003f144) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0003f144) sc_clock_pane_t

0x9190,	// (0x00038682) main_fs_bigclock_indicator_pane_ParamLimits

0x9190,	// (0x00038682) main_fs_bigclock_indicator_pane

0x800e,	// (0x00037500) main_fs_bigclock_pane_g1_ParamLimits

0x800e,	// (0x00037500) main_fs_bigclock_pane_g1

0x919c,	// (0x0003868e) main_fs_bigclock_pane_t1_ParamLimits

0x919c,	// (0x0003868e) main_fs_bigclock_pane_t1

0x91ae,	// (0x000386a0) main_fs_bigclock_pane_t2_ParamLimits

0x91ae,	// (0x000386a0) main_fs_bigclock_pane_t2

0x91c2,	// (0x000386b4) main_fs_bigclock_pane_t3_ParamLimits

0x91c2,	// (0x000386b4) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0003f34d) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0003f34d) main_fs_bigclock_pane_t

0xec27,	// (0x0003e119) main_fs_bigclock_indicator_pane_g1

0xdec2,	// (0x0003d3b4) ncim_query_content_pane_g2_ParamLimits

0xdec2,	// (0x0003d3b4) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0003f0d1) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0003f0d1) ncim_query_content_pane_g

0x7f5f,	// (0x00037451) sc_clock_pane_t4_ParamLimits

0x7f5f,	// (0x00037451) sc_clock_pane_t4

0x141d,	// (0x0003090f) main_radioblah_pane

0x633e,	// (0x00035830) cell_call4_button_pane_t1_copy1_ParamLimits

0x633e,	// (0x00035830) cell_call4_button_pane_t1_copy1

0x7b44,	// (0x00037036) main_ncimui_pane_t1_ParamLimits

0x7b44,	// (0x00037036) main_ncimui_pane_t1

0x7b5e,	// (0x00037050) main_ncimui_pane_t2_ParamLimits

0x7b5e,	// (0x00037050) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0003f0ca) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0003f0ca) main_ncimui_pane_t

0xe1bc,	// (0x0003d6ae) main_radioblah_anim_pane_ParamLimits

0xe1bc,	// (0x0003d6ae) main_radioblah_anim_pane

0xe1cd,	// (0x0003d6bf) main_radioblah_info_pane_ParamLimits

0xe1cd,	// (0x0003d6bf) main_radioblah_info_pane

0xe1e1,	// (0x0003d6d3) main_radioblah_pane_t1_ParamLimits

0xe1e1,	// (0x0003d6d3) main_radioblah_pane_t1

0xe1fd,	// (0x0003d6ef) main_radioblah_pane_t2_ParamLimits

0xe1fd,	// (0x0003d6ef) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0003f165) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0003f165) main_radioblah_pane_t

0x81b7,	// (0x000376a9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81b7,	// (0x000376a9) main_radioblah_rocker_ctrl_pane

0xe245,	// (0x0003d737) main_radioblah_info_pane_t1_ParamLimits

0xe245,	// (0x0003d737) main_radioblah_info_pane_t1

0x820f,	// (0x00037701) main_radioblah_info_pane_t2_ParamLimits

0x820f,	// (0x00037701) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0003f16e) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0003f16e) main_radioblah_info_pane_t

0xc9f6,	// (0x0003bee8) main_radioblah_rocker_ctrl_pane_g1

0x82bf,	// (0x000377b1) main_radioblah_rocker_ctrl_pane_g2

0x82c7,	// (0x000377b9) main_radioblah_rocker_ctrl_pane_g3

0x82cf,	// (0x000377c1) main_radioblah_rocker_ctrl_pane_g4

0x82d7,	// (0x000377c9) main_radioblah_rocker_ctrl_pane_g5

0x82df,	// (0x000377d1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0003f177) main_radioblah_rocker_ctrl_pane_g

0x77b5,	// (0x00036ca7) main_cset_text2_pane_t1_copy1_ParamLimits

0x639c,	// (0x0003588e) cam4_image_uncrop_qvga_pane

0x6413,	// (0x00035905) vid4_image_uncrop_qcif_pane

0x76d5,	// (0x00036bc7) cam6_image_uncrop_qvga_pane_ParamLimits

0x76d5,	// (0x00036bc7) cam6_image_uncrop_qvga_pane

0xdbaa,	// (0x0003d09c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdbaa,	// (0x0003d09c) vid6_image_uncrop_qcif_pane

0x9dbc,	// (0x000392ae) bg_popup_preview_window_pane_cp03

0xde74,	// (0x0003d366) list_cset_text2_pane

0xde7c,	// (0x0003d36e) main_cset6_text2_pane_g1

0xde84,	// (0x0003d376) main_cset6_text2_pane_t1

0xef48,	// (0x0003e43a) list_cset_text2_pane_t1_ParamLimits

0xef48,	// (0x0003e43a) list_cset_text2_pane_t1

0x141d,	// (0x0003090f) main_radioblah_pane_ParamLimits

0x7e95,	// (0x00037387) main_mobtv_info_pane_t3_ParamLimits

0x7e95,	// (0x00037387) main_mobtv_info_pane_t3

0x81a5,	// (0x00037697) main_radioblah_pane_g1

0x81df,	// (0x000376d1) main_radioblah_info_pane_g1

0x8264,	// (0x00037756) main_radioblah_info_pane_t3_ParamLimits

0x8264,	// (0x00037756) main_radioblah_info_pane_t3

0x3230,	// (0x00032722) highlight_cell_cale_month_pane_ParamLimits

0x3230,	// (0x00032722) highlight_cell_cale_month_pane

0x1437,	// (0x00030929) main_phob_fisheye_pane

0xcd05,	// (0x0003c1f7) scroll_pane_cp0031_ParamLimits

0xcd05,	// (0x0003c1f7) scroll_pane_cp0031

0xdcbc,	// (0x0003d1ae) wait_bar_pane_cp08_ParamLimits

0x783e,	// (0x00036d30) cset_list_set_pane_copy1_ParamLimits

0xe27f,	// (0x0003d771) highlight_cell_cale_month_pane_g1

0x82e7,	// (0x000377d9) highlight_cell_cale_month_pane_t1

0xd909,	// (0x0003cdfb) list_gen_pane_cp01

0xd4da,	// (0x0003c9cc) scroll_pane_01

0x82f5,	// (0x000377e7) list_single_double_fisheye_pane

0x82fe,	// (0x000377f0) list_double_fisheye_pane_g1_ParamLimits

0x82fe,	// (0x000377f0) list_double_fisheye_pane_g1

0x830a,	// (0x000377fc) list_double_fisheye_pane_g2_ParamLimits

0x830a,	// (0x000377fc) list_double_fisheye_pane_g2

0x831e,	// (0x00037810) list_double_fisheye_pane_g3_ParamLimits

0x831e,	// (0x00037810) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0003f184) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0003f184) list_double_fisheye_pane_g

0x8347,	// (0x00037839) list_double_fisheye_pane_t1_ParamLimits

0x8347,	// (0x00037839) list_double_fisheye_pane_t1

0x8362,	// (0x00037854) list_double_fisheye_pane_t2_ParamLimits

0x8362,	// (0x00037854) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0003f18f) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0003f18f) list_double_fisheye_pane_t

0x1437,	// (0x00030929) main_call5_pane

0x7f8a,	// (0x0003747c) sc_swipe_pane_ParamLimits

0x7f8a,	// (0x0003747c) sc_swipe_pane

0x8397,	// (0x00037889) call5_image_pane_ParamLimits

0x8397,	// (0x00037889) call5_image_pane

0x83b4,	// (0x000378a6) call5_swipe_1_pane_ParamLimits

0x83b4,	// (0x000378a6) call5_swipe_1_pane

0x83c7,	// (0x000378b9) call5_swipe_2_pane_ParamLimits

0x83c7,	// (0x000378b9) call5_swipe_2_pane

0x83f2,	// (0x000378e4) popup_call5_audio_first_window_ParamLimits

0x83f2,	// (0x000378e4) popup_call5_audio_first_window

0xcc1d,	// (0x0003c10f) call5_swipe_1_pane_g1_ParamLimits

0xcc1d,	// (0x0003c10f) call5_swipe_1_pane_g1

0xe287,	// (0x0003d779) call5_swipe_1_pane_g2_ParamLimits

0xe287,	// (0x0003d779) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0003f194) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0003f194) call5_swipe_1_pane_g

0xe293,	// (0x0003d785) call5_swipe_1_pane_t1_ParamLimits

0xe293,	// (0x0003d785) call5_swipe_1_pane_t1

0xcc1d,	// (0x0003c10f) call5_swipe_2_pane_g1_ParamLimits

0xcc1d,	// (0x0003c10f) call5_swipe_2_pane_g1

0xe2a8,	// (0x0003d79a) call5_swipe_2_pane_g2_ParamLimits

0xe2a8,	// (0x0003d79a) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0003f199) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0003f199) call5_swipe_2_pane_g

0xe2b4,	// (0x0003d7a6) call5_swipe_2_pane_t1_ParamLimits

0xe2b4,	// (0x0003d7a6) call5_swipe_2_pane_t1

0xe2c9,	// (0x0003d7bb) sc_swipe_pane_g1_ParamLimits

0xe2c9,	// (0x0003d7bb) sc_swipe_pane_g1

0xe2d6,	// (0x0003d7c8) sc_swipe_pane_g2_ParamLimits

0xe2d6,	// (0x0003d7c8) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0003f19e) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0003f19e) sc_swipe_pane_g

0xe2e2,	// (0x0003d7d4) sc_swipe_pane_t1_ParamLimits

0xe2e2,	// (0x0003d7d4) sc_swipe_pane_t1

0x1437,	// (0x00030929) main_cmail_launcher_pane

0x8407,	// (0x000378f9) aid_size_cell_cmail_l_ParamLimits

0x8407,	// (0x000378f9) aid_size_cell_cmail_l

0x8415,	// (0x00037907) grid_cmail_l_pane_ParamLimits

0x8415,	// (0x00037907) grid_cmail_l_pane

0x842e,	// (0x00037920) cell_cmail_l_pane_ParamLimits

0x842e,	// (0x00037920) cell_cmail_l_pane

0xe2f7,	// (0x0003d7e9) cell_cmail_l_pane_g1_ParamLimits

0xe2f7,	// (0x0003d7e9) cell_cmail_l_pane_g1

0xe303,	// (0x0003d7f5) cell_cmail_l_pane_t1_ParamLimits

0xe303,	// (0x0003d7f5) cell_cmail_l_pane_t1

0xe319,	// (0x0003d80b) cell_cmail_l_pane_t2_ParamLimits

0xe319,	// (0x0003d80b) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0003f1a3) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0003f1a3) cell_cmail_l_pane_t

0xb208,	// (0x0003a6fa) grid_highlight_pane_cp018_ParamLimits

0xb208,	// (0x0003a6fa) grid_highlight_pane_cp018

0xfad9,	// (0x0002efcb) main2_pane_ParamLimits

0xfad9,	// (0x0002efcb) main2_pane

0xa5d0,	// (0x00039ac2) popup_sp_fs_action_menu_bg_pane_g1

0xa5d8,	// (0x00039aca) popup_sp_fs_action_menu_bg_pane_g2

0xa5e0,	// (0x00039ad2) popup_sp_fs_action_menu_bg_pane_g3

0xa5e8,	// (0x00039ada) popup_sp_fs_action_menu_bg_pane_g4

0xa5f0,	// (0x00039ae2) popup_sp_fs_action_menu_bg_pane_g5

0xa5f8,	// (0x00039aea) popup_sp_fs_action_menu_bg_pane_g6

0xa600,	// (0x00039af2) popup_sp_fs_action_menu_bg_pane_g7

0xa608,	// (0x00039afa) popup_sp_fs_action_menu_bg_pane_g8

0xa610,	// (0x00039b02) popup_sp_fs_action_menu_bg_pane_g9

0xa618,	// (0x00039b0a) popup_sp_fs_action_menu_bg_pane_g10

0xa618,	// (0x00039b0a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0003e661) popup_sp_fs_action_menu_bg_pane_g

0x2099,	// (0x0003158b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t3_g3_g1

0x20a5,	// (0x00031597) list_medium_line_x2_t3_g3_g2_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x2_t3_g3_g2

0x20b1,	// (0x000315a3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0003e70f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0003e70f) list_medium_line_x2_t3_g3_g

0x20bd,	// (0x000315af) list_medium_line_x2_t3_g3_t1_ParamLimits

0x20bd,	// (0x000315af) list_medium_line_x2_t3_g3_t1

0x20d2,	// (0x000315c4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x20d2,	// (0x000315c4) list_medium_line_x2_t3_g3_t2

0x20e6,	// (0x000315d8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0003e716) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0003e716) list_medium_line_x2_t3_g3_t

0x2099,	// (0x0003158b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t3_g2_g1

0x20b1,	// (0x000315a3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0003e71d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0003e71d) list_medium_line_x2_t3_g2_g

0x20fb,	// (0x000315ed) list_medium_line_x2_t3_g2_t1_ParamLimits

0x20fb,	// (0x000315ed) list_medium_line_x2_t3_g2_t1

0x2111,	// (0x00031603) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2111,	// (0x00031603) list_medium_line_x2_t3_g2_t2

0x2123,	// (0x00031615) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2123,	// (0x00031615) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0003e722) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0003e722) list_medium_line_x2_t3_g2_t

0x2099,	// (0x0003158b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t4_g4_g1

0x2141,	// (0x00031633) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2141,	// (0x00031633) list_medium_line_x2_t4_g4_g2

0x20a5,	// (0x00031597) list_medium_line_x2_t4_g4_g3_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x2_t4_g4_g3

0x214d,	// (0x0003163f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x214d,	// (0x0003163f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0003e729) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0003e729) list_medium_line_x2_t4_g4_g

0x2159,	// (0x0003164b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2159,	// (0x0003164b) list_medium_line_x2_t4_g4_t1

0x2173,	// (0x00031665) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2173,	// (0x00031665) list_medium_line_x2_t4_g4_t2

0x2189,	// (0x0003167b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2189,	// (0x0003167b) list_medium_line_x2_t4_g4_t3

0x219e,	// (0x00031690) list_medium_line_x2_t4_g4_t4_ParamLimits

0x219e,	// (0x00031690) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0003e732) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0003e732) list_medium_line_x2_t4_g4_t

0x2099,	// (0x0003158b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t2_g4_g1

0x2141,	// (0x00031633) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2141,	// (0x00031633) list_medium_line_x2_t2_g4_g2

0x20a5,	// (0x00031597) list_medium_line_x2_t2_g4_g3_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x2_t2_g4_g3

0x20b1,	// (0x000315a3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0003e799) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0003e799) list_medium_line_x2_t2_g4_g

0x3256,	// (0x00032748) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3256,	// (0x00032748) list_medium_line_x2_t2_g4_t1

0x20e6,	// (0x000315d8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0003e7a2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0003e7a2) list_medium_line_x2_t2_g4_t

0x2099,	// (0x0003158b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t2_g3_g1

0x20a5,	// (0x00031597) list_medium_line_x2_t2_g3_g2_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x2_t2_g3_g2

0x20b1,	// (0x000315a3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0003e70f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0003e70f) list_medium_line_x2_t2_g3_g

0x326b,	// (0x0003275d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x326b,	// (0x0003275d) list_medium_line_x2_t2_g3_t1

0x20e6,	// (0x000315d8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0003e7a7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0003e7a7) list_medium_line_x2_t2_g3_t

0x33cc,	// (0x000328be) main_sp_fs_list_pane_ParamLimits

0x33cc,	// (0x000328be) main_sp_fs_list_pane

0xc682,	// (0x0003bb74) sp_fs_scroll_pane_ParamLimits

0xc682,	// (0x0003bb74) sp_fs_scroll_pane

0x33d8,	// (0x000328ca) list_medium_line_x2_t3_t1

0x33e8,	// (0x000328da) list_medium_line_x2_t3_t2

0x33f6,	// (0x000328e8) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0003e7f2) list_medium_line_x2_t3_t

0x3404,	// (0x000328f6) list_medium_line_x3_t4_t1

0x3414,	// (0x00032906) list_medium_line_x3_t4_t2

0x3422,	// (0x00032914) list_medium_line_x3_t4_t3

0x33f6,	// (0x000328e8) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0003e7f9) list_medium_line_x3_t4_t

0x3430,	// (0x00032922) list_medium_line_x4_t5_t1

0x3440,	// (0x00032932) list_medium_line_x4_t5_t2

0x3422,	// (0x00032914) list_medium_line_x4_t5_t3

0x344e,	// (0x00032940) list_medium_line_x4_t5_t4

0x33f6,	// (0x000328e8) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0003e802) list_medium_line_x4_t5_t

0x2099,	// (0x0003158b) list_medium_line_t4_g4_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_t4_g4_g1

0x214d,	// (0x0003163f) list_medium_line_t4_g4_g2_ParamLimits

0x214d,	// (0x0003163f) list_medium_line_t4_g4_g2

0x345c,	// (0x0003294e) list_medium_line_t4_g4_g3_ParamLimits

0x345c,	// (0x0003294e) list_medium_line_t4_g4_g3

0x20b1,	// (0x000315a3) list_medium_line_t4_g4_g4_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0003e80d) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0003e80d) list_medium_line_t4_g4_g

0x3468,	// (0x0003295a) list_medium_line_t4_g4_t1_ParamLimits

0x3468,	// (0x0003295a) list_medium_line_t4_g4_t1

0x347d,	// (0x0003296f) list_medium_line_t4_g4_t2_ParamLimits

0x347d,	// (0x0003296f) list_medium_line_t4_g4_t2

0x3493,	// (0x00032985) list_medium_line_t4_g4_t3_ParamLimits

0x3493,	// (0x00032985) list_medium_line_t4_g4_t3

0x20e6,	// (0x000315d8) list_medium_line_t4_g4_t4_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0003e816) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0003e816) list_medium_line_t4_g4_t

0x35de,	// (0x00032ad0) chi_dic_find_pane_g1

0xff60,	// (0x0002f452) main_tport_pane

0x6c29,	// (0x0003611b) list_medium_line_plain_t1

0x6c8b,	// (0x0003617d) list_medium_line_t2_g2_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_t2_g2_g1

0x6c97,	// (0x00036189) list_medium_line_t2_g2_g2_ParamLimits

0x6c97,	// (0x00036189) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0003eedb) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0003eedb) list_medium_line_t2_g2_g

0x6ca3,	// (0x00036195) list_medium_line_t2_g2_t1_ParamLimits

0x6ca3,	// (0x00036195) list_medium_line_t2_g2_t1

0x6cbd,	// (0x000361af) list_medium_line_t2_g2_t2_ParamLimits

0x6cbd,	// (0x000361af) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0003eee0) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0003eee0) list_medium_line_t2_g2_t

0xd912,	// (0x0003ce04) aid_sp_fs_list_icon_a_sm

0xd91a,	// (0x0003ce0c) aid_sp_fs_list_icon_d

0xd922,	// (0x0003ce14) aid_sp_fs_text_primary

0xd92b,	// (0x0003ce1d) aid_sp_fs_text_secondary

0x72f9,	// (0x000367eb) list_medium_line

0x72f9,	// (0x000367eb) list_medium_line_g2

0x72f9,	// (0x000367eb) list_medium_line_g3

0x72f9,	// (0x000367eb) list_medium_line_plain

0x72f9,	// (0x000367eb) list_medium_line_plain_t2

0x72f9,	// (0x000367eb) list_medium_line_plain_t3

0x72f9,	// (0x000367eb) list_medium_line_right_icon

0x72f9,	// (0x000367eb) list_medium_line_right_iconx2

0x72f9,	// (0x000367eb) list_medium_line_t2

0x72f9,	// (0x000367eb) list_medium_line_t2_g2

0x72f9,	// (0x000367eb) list_medium_line_t2_g3

0x72f9,	// (0x000367eb) list_medium_line_t2_right_icon

0x72f9,	// (0x000367eb) list_medium_line_t2_right_iconx2

0x72f9,	// (0x000367eb) list_medium_line_t3

0x72f9,	// (0x000367eb) list_medium_line_t3_g2

0x72f9,	// (0x000367eb) list_medium_line_t3_g3

0x72f9,	// (0x000367eb) list_medium_line_t3_right_iconx2

0x7302,	// (0x000367f4) list_medium_line_t4_g4

0x730b,	// (0x000367fd) list_medium_line_x2

0x730b,	// (0x000367fd) list_medium_line_x2_t2_g2

0x730b,	// (0x000367fd) list_medium_line_x2_t2_g3

0x730b,	// (0x000367fd) list_medium_line_x2_t2_g4

0x730b,	// (0x000367fd) list_medium_line_x2_t3

0x730b,	// (0x000367fd) list_medium_line_x2_t3_g2

0x730b,	// (0x000367fd) list_medium_line_x2_t3_g3

0x730b,	// (0x000367fd) list_medium_line_x2_t3_g4

0x730b,	// (0x000367fd) list_medium_line_x2_t4_g2

0x730b,	// (0x000367fd) list_medium_line_x2_t4_g4

0x7314,	// (0x00036806) list_medium_line_x3

0x7314,	// (0x00036806) list_medium_line_x3_t4

0x7314,	// (0x00036806) list_medium_line_x3_t4_g4

0x7302,	// (0x000367f4) list_medium_line_x4_t4

0x7302,	// (0x000367f4) list_medium_line_x4_t4_g7

0x7302,	// (0x000367f4) list_medium_line_x4_t5

0x731d,	// (0x0003680f) list_single_fs_dyc_pane_ParamLimits

0x731d,	// (0x0003680f) list_single_fs_dyc_pane

0x2099,	// (0x0003158b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x4_t4_g7_g1

0x7a42,	// (0x00036f34) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7a42,	// (0x00036f34) list_medium_line_x4_t4_g7_g2

0x7a4e,	// (0x00036f40) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7a4e,	// (0x00036f40) list_medium_line_x4_t4_g7_g3

0x7a5d,	// (0x00036f4f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7a5d,	// (0x00036f4f) list_medium_line_x4_t4_g7_g4

0x7a69,	// (0x00036f5b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7a69,	// (0x00036f5b) list_medium_line_x4_t4_g7_g5

0x7a78,	// (0x00036f6a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7a78,	// (0x00036f6a) list_medium_line_x4_t4_g7_g6

0x7a87,	// (0x00036f79) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7a87,	// (0x00036f79) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0003f0ab) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0003f0ab) list_medium_line_x4_t4_g7_g

0x7a93,	// (0x00036f85) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7a93,	// (0x00036f85) list_medium_line_x4_t4_g7_t1

0x7aa8,	// (0x00036f9a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7aa8,	// (0x00036f9a) list_medium_line_x4_t4_g7_t2

0x7abd,	// (0x00036faf) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7abd,	// (0x00036faf) list_medium_line_x4_t4_g7_t3

0x7ad2,	// (0x00036fc4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ad2,	// (0x00036fc4) list_medium_line_x4_t4_g7_t4

0x7ae4,	// (0x00036fd6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ae4,	// (0x00036fd6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0003f0ba) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0003f0ba) list_medium_line_x4_t4_g7_t

0x7af6,	// (0x00036fe8) list_single_dyc_row_pane_ParamLimits

0x7af6,	// (0x00036fe8) list_single_dyc_row_pane

0x8384,	// (0x00037876) call5_gesture_pane_ParamLimits

0x8384,	// (0x00037876) call5_gesture_pane

0x83da,	// (0x000378cc) call5_windows_pane_ParamLimits

0x83da,	// (0x000378cc) call5_windows_pane

0x8440,	// (0x00037932) call5_swipe_1_pane_cp_ParamLimits

0x8440,	// (0x00037932) call5_swipe_1_pane_cp

0x844c,	// (0x0003793e) call5_swipe_2_pane_cp_ParamLimits

0x844c,	// (0x0003793e) call5_swipe_2_pane_cp

0xa6df,	// (0x00039bd1) call5_image_pane_cp

0x8458,	// (0x0003794a) popup_call5_audio_first_window_cp_ParamLimits

0x8458,	// (0x0003794a) popup_call5_audio_first_window_cp

0xe2c9,	// (0x0003d7bb) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2c9,	// (0x0003d7bb) call5_swipe_1_pane_g1_cp

0xe336,	// (0x0003d828) call5_swipe_1_pane_g2_cp

0xe2e2,	// (0x0003d7d4) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2e2,	// (0x0003d7d4) call5_swipe_1_pane_t1_cp

0xe2c9,	// (0x0003d7bb) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2c9,	// (0x0003d7bb) call5_swipe_2_pane_g1_cp

0xe33e,	// (0x0003d830) call5_swipe_2_pane_g2_cp

0xe346,	// (0x0003d838) call5_swipe_2_pane_t1_cp_ParamLimits

0xe346,	// (0x0003d838) call5_swipe_2_pane_t1_cp

0xb208,	// (0x0003a6fa) main_sp_fs_email_pane

0xdac3,	// (0x0003cfb5) main_sp_fs_listscroll_pane_te

0x8466,	// (0x00037958) popup_sp_fs_action_menu_pane_ParamLimits

0x8466,	// (0x00037958) popup_sp_fs_action_menu_pane

0xc9f6,	// (0x0003bee8) bg_sp_fs_ctrlbar_pane_g1

0xe35b,	// (0x0003d84d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe364,	// (0x0003d856) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe36d,	// (0x0003d85f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc9f6,	// (0x0003bee8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0003f1a8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc7d5,	// (0x0003bcc7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc7d5,	// (0x0003bcc7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe376,	// (0x0003d868) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe376,	// (0x0003d868) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe382,	// (0x0003d874) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe382,	// (0x0003d874) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0003f1b1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0003f1b1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe38e,	// (0x0003d880) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe38e,	// (0x0003d880) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x84ac,	// (0x0003799e) list_medium_line_t2_right_icon_g1

0x84b4,	// (0x000379a6) list_medium_line_t2_right_icon_t1

0x84c4,	// (0x000379b6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0003f1b6) list_medium_line_t2_right_icon_t

0xc5aa,	// (0x0003ba9c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_sp_fs_ctrlbar_pane

0x8523,	// (0x00037a15) main_sp_fs_ctrlbar_button_pane_cp01

0x852d,	// (0x00037a1f) main_sp_fs_ctrlbar_ddmenu_pane

0xe3e2,	// (0x0003d8d4) main_sp_fs_ctrlbar_pane_g1

0xe3ee,	// (0x0003d8e0) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0003f1bb) main_sp_fs_ctrlbar_pane_g

0x856b,	// (0x00037a5d) main_sp_fs_ctrlbar_pane_t1

0x85aa,	// (0x00037a9c) main_sp_fs_ctrlbar_pane

0x85ce,	// (0x00037ac0) main_sp_fs_listscroll_pane_te_cp01

0x85ee,	// (0x00037ae0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85ee,	// (0x00037ae0) popup_sp_fs_action_menu_pane_cp01

0xb208,	// (0x0003a6fa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb208,	// (0x0003a6fa) bg_sp_fs_highlight_list_pane_cp01

0xe415,	// (0x0003d907) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe415,	// (0x0003d907) sp_fs_action_menu_list_gene_pane_g1

0xe424,	// (0x0003d916) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe424,	// (0x0003d916) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0003f1c9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0003f1c9) sp_fs_action_menu_list_gene_pane_g

0xe431,	// (0x0003d923) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe431,	// (0x0003d923) sp_fs_action_menu_list_gene_pane_t1

0xe449,	// (0x0003d93b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe449,	// (0x0003d93b) sp_fs_action_menu_list_gene_pane

0xe46c,	// (0x0003d95e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe46c,	// (0x0003d95e) popup_sp_fs_action_menu_bg_pane

0xe47a,	// (0x0003d96c) sp_fs_action_menu_list_pane_ParamLimits

0xe47a,	// (0x0003d96c) sp_fs_action_menu_list_pane

0x8624,	// (0x00037b16) sp_fs_scroll_pane_cp01_ParamLimits

0x8624,	// (0x00037b16) sp_fs_scroll_pane_cp01

0x864a,	// (0x00037b3c) list_medium_line_plain_t2_t1

0x865a,	// (0x00037b4c) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0003f1ce) list_medium_line_plain_t2_t

0x866a,	// (0x00037b5c) list_medium_line_plain_t3_t1

0x867a,	// (0x00037b6c) list_medium_line_plain_t3_t2

0x8688,	// (0x00037b7a) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0003f1d3) list_medium_line_plain_t3_t

0x2099,	// (0x0003158b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t2_g2_g1

0x20b1,	// (0x000315a3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0003e71d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0003e71d) list_medium_line_x2_t2_g2_g

0x3468,	// (0x0003295a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3468,	// (0x0003295a) list_medium_line_x2_t2_g2_t1

0x20e6,	// (0x000315d8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0003f1da) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0003f1da) list_medium_line_x2_t2_g2_t

0x2099,	// (0x0003158b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t4_g2_g1

0x20b1,	// (0x000315a3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0003e71d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0003e71d) list_medium_line_x2_t4_g2_g

0x8696,	// (0x00037b88) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8696,	// (0x00037b88) list_medium_line_x2_t4_g2_t1

0x86b0,	// (0x00037ba2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86b0,	// (0x00037ba2) list_medium_line_x2_t4_g2_t2

0x86c6,	// (0x00037bb8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86c6,	// (0x00037bb8) list_medium_line_x2_t4_g2_t3

0x20e6,	// (0x000315d8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0003f1df) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0003f1df) list_medium_line_x2_t4_g2_t

0x86db,	// (0x00037bcd) list_medium_line_t3_right_iconx2_g1

0x84ac,	// (0x0003799e) list_medium_line_t3_right_iconx2_g2

0x86e3,	// (0x00037bd5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0003f1e8) list_medium_line_t3_right_iconx2_g

0x86ed,	// (0x00037bdf) list_medium_line_t3_right_iconx2_t1

0x86fd,	// (0x00037bef) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0003f1ef) list_medium_line_t3_right_iconx2_t

0x2099,	// (0x0003158b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x3_t4_g4_g1

0x20a5,	// (0x00031597) list_medium_line_x3_t4_g4_g2_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x3_t4_g4_g2

0x214d,	// (0x0003163f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x214d,	// (0x0003163f) list_medium_line_x3_t4_g4_g3

0x870b,	// (0x00037bfd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x870b,	// (0x00037bfd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0003f1f4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0003f1f4) list_medium_line_x3_t4_g4_g

0x8717,	// (0x00037c09) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8717,	// (0x00037c09) list_medium_line_x3_t4_g4_t1

0x872e,	// (0x00037c20) list_medium_line_x3_t4_g4_t2_ParamLimits

0x872e,	// (0x00037c20) list_medium_line_x3_t4_g4_t2

0x8747,	// (0x00037c39) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8747,	// (0x00037c39) list_medium_line_x3_t4_g4_t3

0x875c,	// (0x00037c4e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x875c,	// (0x00037c4e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0003f1fd) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0003f1fd) list_medium_line_x3_t4_g4_t

0x8779,	// (0x00037c6b) list_single_dyc_row_text_pane_t1_ParamLimits

0x8779,	// (0x00037c6b) list_single_dyc_row_text_pane_t1

0x87c2,	// (0x00037cb4) list_single_dyc_row_text_pane_t2_ParamLimits

0x87c2,	// (0x00037cb4) list_single_dyc_row_text_pane_t2

0xe49e,	// (0x0003d990) list_single_dyc_row_text_pane_t3_ParamLimits

0xe49e,	// (0x0003d990) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0003f206) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0003f206) list_single_dyc_row_text_pane_t

0xe4c2,	// (0x0003d9b4) list_single_dyc_row_pane_g1_ParamLimits

0xe4c2,	// (0x0003d9b4) list_single_dyc_row_pane_g1

0xe4ce,	// (0x0003d9c0) list_single_dyc_row_pane_g2_ParamLimits

0xe4ce,	// (0x0003d9c0) list_single_dyc_row_pane_g2

0xe4da,	// (0x0003d9cc) list_single_dyc_row_pane_g3_ParamLimits

0xe4da,	// (0x0003d9cc) list_single_dyc_row_pane_g3

0xe4e6,	// (0x0003d9d8) list_single_dyc_row_pane_g4_ParamLimits

0xe4e6,	// (0x0003d9d8) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0003f213) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0003f213) list_single_dyc_row_pane_g

0xe4f2,	// (0x0003d9e4) list_single_dyc_row_text_pane_ParamLimits

0xe4f2,	// (0x0003d9e4) list_single_dyc_row_text_pane

0x9dbc,	// (0x000392ae) bg_sp_fs_scroll_pane

0xe511,	// (0x0003da03) thumb_sp_fs_scroll_pane

0x6c8b,	// (0x0003617d) list_medium_line_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_g1

0x88f7,	// (0x00037de9) list_medium_line_t1_ParamLimits

0x88f7,	// (0x00037de9) list_medium_line_t1

0x2099,	// (0x0003158b) list_medium_line_x2_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_g1

0x20a5,	// (0x00031597) list_medium_line_x2_g2_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0003f21c) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0003f21c) list_medium_line_x2_g

0xe51a,	// (0x0003da0c) list_medium_line_x2_t1_ParamLimits

0xe51a,	// (0x0003da0c) list_medium_line_x2_t1

0x2099,	// (0x0003158b) list_medium_line_x3_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x3_g1

0x20a5,	// (0x00031597) list_medium_line_x3_g2_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0003f21c) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0003f21c) list_medium_line_x3_g

0xe51a,	// (0x0003da0c) list_medium_line_x3_t1_ParamLimits

0xe51a,	// (0x0003da0c) list_medium_line_x3_t1

0xe530,	// (0x0003da22) thumb_sp_fs_scroll_pane_g1

0xe539,	// (0x0003da2b) thumb_sp_fs_scroll_pane_g2

0xe542,	// (0x0003da34) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0003f221) thumb_sp_fs_scroll_pane_g

0xe530,	// (0x0003da22) bg_sp_fs_scroll_pane_g1

0xe539,	// (0x0003da2b) bg_sp_fs_scroll_pane_g2

0xe542,	// (0x0003da34) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0003f221) bg_sp_fs_scroll_pane_g

0x2099,	// (0x0003158b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2099,	// (0x0003158b) list_medium_line_x2_t3_g4_g1

0x2141,	// (0x00031633) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2141,	// (0x00031633) list_medium_line_x2_t3_g4_g2

0x20a5,	// (0x00031597) list_medium_line_x2_t3_g4_g3_ParamLimits

0x20a5,	// (0x00031597) list_medium_line_x2_t3_g4_g3

0x20b1,	// (0x000315a3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x20b1,	// (0x000315a3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0003e799) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0003e799) list_medium_line_x2_t3_g4_g

0x890c,	// (0x00037dfe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x890c,	// (0x00037dfe) list_medium_line_x2_t3_g4_t1

0x8922,	// (0x00037e14) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8922,	// (0x00037e14) list_medium_line_x2_t3_g4_t2

0x20e6,	// (0x000315d8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x20e6,	// (0x000315d8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0003f228) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0003f228) list_medium_line_x2_t3_g4_t

0x6c8b,	// (0x0003617d) list_medium_line_g2_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_g2_g1

0x6c97,	// (0x00036189) list_medium_line_g2_g2_ParamLimits

0x6c97,	// (0x00036189) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0003eedb) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0003eedb) list_medium_line_g2_g

0x893c,	// (0x00037e2e) list_medium_line_g2_t1_ParamLimits

0x893c,	// (0x00037e2e) list_medium_line_g2_t1

0x6c8b,	// (0x0003617d) list_medium_line_t3_g2_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_t3_g2_g1

0x6c97,	// (0x00036189) list_medium_line_t3_g2_g2_ParamLimits

0x6c97,	// (0x00036189) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0003eedb) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0003eedb) list_medium_line_t3_g2_g

0x8951,	// (0x00037e43) list_medium_line_t3_g2_t1_ParamLimits

0x8951,	// (0x00037e43) list_medium_line_t3_g2_t1

0x896b,	// (0x00037e5d) list_medium_line_t3_g2_t2_ParamLimits

0x896b,	// (0x00037e5d) list_medium_line_t3_g2_t2

0x8981,	// (0x00037e73) list_medium_line_t3_g2_t3_ParamLimits

0x8981,	// (0x00037e73) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0003f22f) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0003f22f) list_medium_line_t3_g2_t

0x84ac,	// (0x0003799e) list_medium_line_right_icon_g1

0x899b,	// (0x00037e8d) list_medium_line_right_icon_t1

0x6c8b,	// (0x0003617d) list_medium_line_t2_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_t2_g1

0x89a9,	// (0x00037e9b) list_medium_line_t2_t1_ParamLimits

0x89a9,	// (0x00037e9b) list_medium_line_t2_t1

0x89c3,	// (0x00037eb5) list_medium_line_t2_t2_ParamLimits

0x89c3,	// (0x00037eb5) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0003f236) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0003f236) list_medium_line_t2_t

0x6c8b,	// (0x0003617d) list_medium_line_t3_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_t3_g1

0x89dc,	// (0x00037ece) list_medium_line_t3_t1_ParamLimits

0x89dc,	// (0x00037ece) list_medium_line_t3_t1

0x89f6,	// (0x00037ee8) list_medium_line_t3_t2_ParamLimits

0x89f6,	// (0x00037ee8) list_medium_line_t3_t2

0x8a0c,	// (0x00037efe) list_medium_line_t3_t3_ParamLimits

0x8a0c,	// (0x00037efe) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0003f23b) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0003f23b) list_medium_line_t3_t

0x6c8b,	// (0x0003617d) list_medium_line_g3_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_g3_g1

0x8a21,	// (0x00037f13) list_medium_line_g3_g2_ParamLimits

0x8a21,	// (0x00037f13) list_medium_line_g3_g2

0x6c97,	// (0x00036189) list_medium_line_g3_g3_ParamLimits

0x6c97,	// (0x00036189) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0003f242) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0003f242) list_medium_line_g3_g

0x8a2d,	// (0x00037f1f) list_medium_line_g3_t1_ParamLimits

0x8a2d,	// (0x00037f1f) list_medium_line_g3_t1

0x6c8b,	// (0x0003617d) list_medium_line_t2_g3_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_t2_g3_g1

0x8a21,	// (0x00037f13) list_medium_line_t2_g3_g2_ParamLimits

0x8a21,	// (0x00037f13) list_medium_line_t2_g3_g2

0x6c97,	// (0x00036189) list_medium_line_t2_g3_g3_ParamLimits

0x6c97,	// (0x00036189) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0003f242) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0003f242) list_medium_line_t2_g3_g

0x8a42,	// (0x00037f34) list_medium_line_t2_g3_t1_ParamLimits

0x8a42,	// (0x00037f34) list_medium_line_t2_g3_t1

0x8a5c,	// (0x00037f4e) list_medium_line_t2_g3_t2_ParamLimits

0x8a5c,	// (0x00037f4e) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0003f249) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0003f249) list_medium_line_t2_g3_t

0x6c8b,	// (0x0003617d) list_medium_line_t3_g3_g1_ParamLimits

0x6c8b,	// (0x0003617d) list_medium_line_t3_g3_g1

0x8a21,	// (0x00037f13) list_medium_line_t3_g3_g2_ParamLimits

0x8a21,	// (0x00037f13) list_medium_line_t3_g3_g2

0x6c97,	// (0x00036189) list_medium_line_t3_g3_g3_ParamLimits

0x6c97,	// (0x00036189) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0003f242) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0003f242) list_medium_line_t3_g3_g

0x8a76,	// (0x00037f68) list_medium_line_t3_g3_t1_ParamLimits

0x8a76,	// (0x00037f68) list_medium_line_t3_g3_t1

0x8a8f,	// (0x00037f81) list_medium_line_t3_g3_t2_ParamLimits

0x8a8f,	// (0x00037f81) list_medium_line_t3_g3_t2

0x8aa5,	// (0x00037f97) list_medium_line_t3_g3_t3_ParamLimits

0x8aa5,	// (0x00037f97) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0003f24e) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0003f24e) list_medium_line_t3_g3_t

0x86db,	// (0x00037bcd) list_medium_line_right_iconx2_g1

0x84ac,	// (0x0003799e) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0003f255) list_medium_line_right_iconx2_g

0x8abf,	// (0x00037fb1) list_medium_line_right_iconx2_t1

0x86db,	// (0x00037bcd) list_medium_line_t2_right_iconx2_g1

0x84ac,	// (0x0003799e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0003f255) list_medium_line_t2_right_iconx2_g

0x8acd,	// (0x00037fbf) list_medium_line_t2_right_iconx2_t1

0x8add,	// (0x00037fcf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0003f25a) list_medium_line_t2_right_iconx2_t

0x8aed,	// (0x00037fdf) list_medium_line_x4_t4_t1

0x8afb,	// (0x00037fed) list_medium_line_x4_t4_t2

0x8b0b,	// (0x00037ffd) list_medium_line_x4_t4_t3

0x8b1b,	// (0x0003800d) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0003f25f) list_medium_line_x4_t4_t

0x8b6c,	// (0x0003805e) tport_appsw_pane_ParamLimits

0x8b6c,	// (0x0003805e) tport_appsw_pane

0x8b83,	// (0x00038075) tport_contact_pane_ParamLimits

0x8b83,	// (0x00038075) tport_contact_pane

0x8b9b,	// (0x0003808d) tport_listscroll_pane_ParamLimits

0x8b9b,	// (0x0003808d) tport_listscroll_pane

0x8baf,	// (0x000380a1) cell_tport_appsw_pane_ParamLimits

0x8baf,	// (0x000380a1) cell_tport_appsw_pane

0xd37f,	// (0x0003c871) tport_appsw_pane_g1_ParamLimits

0xd37f,	// (0x0003c871) tport_appsw_pane_g1

0xe54b,	// (0x0003da3d) tport_contact_pane_g1

0xe554,	// (0x0003da46) tport_contact_pane_t1

0xe562,	// (0x0003da54) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0003f268) tport_contact_pane_t

0xe570,	// (0x0003da62) list_tport_pane

0xe579,	// (0x0003da6b) scroll_pane_cp_030

0x8bf9,	// (0x000380eb) cell_tport_appsw_pane_g1

0x8c09,	// (0x000380fb) cell_tport_appsw_pane_t1

0x8c17,	// (0x00038109) grid_highlight_pane_cp019

0x8c1f,	// (0x00038111) list_tport_double_graphic_pane_ParamLimits

0x8c1f,	// (0x00038111) list_tport_double_graphic_pane

0xb208,	// (0x0003a6fa) list_highlight_pane_cp023_ParamLimits

0xb208,	// (0x0003a6fa) list_highlight_pane_cp023

0x8c36,	// (0x00038128) list_tport_double_graphic_pane_g1_ParamLimits

0x8c36,	// (0x00038128) list_tport_double_graphic_pane_g1

0x8c43,	// (0x00038135) list_tport_double_graphic_pane_t1_ParamLimits

0x8c43,	// (0x00038135) list_tport_double_graphic_pane_t1

0x8c58,	// (0x0003814a) list_tport_double_graphic_pane_t2_ParamLimits

0x8c58,	// (0x0003814a) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0003f274) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0003f274) list_tport_double_graphic_pane_t

0x9dbc,	// (0x000392ae) main_cale_note_pane

0x0f81,	// (0x00030473) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0f81,	// (0x00030473) cell_vitu2_function_top_wide_pane_cp01

0x7ea9,	// (0x0003739b) wait_bar_pane_cp05_ParamLimits

0xb208,	// (0x0003a6fa) listscroll_cmail_pane

0xe582,	// (0x0003da74) list_cmail_pane

0x8c6a,	// (0x0003815c) list_cmail_body_pane

0x8c81,	// (0x00038173) list_single_cmail_header_caption_pane

0xe592,	// (0x0003da84) list_single_cmail_header_detail_pane_ParamLimits

0xe592,	// (0x0003da84) list_single_cmail_header_detail_pane

0xe5c4,	// (0x0003dab6) list_single_cmail_header_caption_pane_t1

0x8c9e,	// (0x00038190) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c9e,	// (0x00038190) list_single_cmail_header_detail_pane_g1

0xe5db,	// (0x0003dacd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5db,	// (0x0003dacd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0003f279) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0003f279) list_single_cmail_header_detail_pane_g

0xe5f4,	// (0x0003dae6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5f4,	// (0x0003dae6) list_single_cmail_header_detail_pane_t1

0xe654,	// (0x0003db46) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe654,	// (0x0003db46) list_single_cmail_header_editor_pane_bg

0xe0af,	// (0x0003d5a1) list_cmail_body_pane_g1

0xe66b,	// (0x0003db5d) list_cmail_body_pane_t1

0xd3bc,	// (0x0003c8ae) list_single_cmail_header_editor_pane_bg_g1

0xa951,	// (0x00039e43) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd3cc,	// (0x0003c8be) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd3c4,	// (0x0003c8b6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd5e6,	// (0x0003cad8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd3ec,	// (0x0003c8de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd3dc,	// (0x0003c8ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd3e4,	// (0x0003c8d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa931,	// (0x00039e23) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cb6,	// (0x000381a8) calenote_gesture_pane_ParamLimits

0x8cb6,	// (0x000381a8) calenote_gesture_pane

0x8cd6,	// (0x000381c8) calenote_window_pane_ParamLimits

0x8cd6,	// (0x000381c8) calenote_window_pane

0xe679,	// (0x0003db6b) popup_note_window_cp01

0x8cf2,	// (0x000381e4) calenote_swipe_1_pane_ParamLimits

0x8cf2,	// (0x000381e4) calenote_swipe_1_pane

0x844c,	// (0x0003793e) calenote_swipe_2_pane_ParamLimits

0x844c,	// (0x0003793e) calenote_swipe_2_pane

0xe2c9,	// (0x0003d7bb) calenote_swipe_1_pane_g1_ParamLimits

0xe2c9,	// (0x0003d7bb) calenote_swipe_1_pane_g1

0xe2d6,	// (0x0003d7c8) calenote_swipe_1_pane_g2_ParamLimits

0xe2d6,	// (0x0003d7c8) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0003f19e) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0003f19e) calenote_swipe_1_pane_g

0xe68b,	// (0x0003db7d) calenote_swipe_1_pane_t1_ParamLimits

0xe68b,	// (0x0003db7d) calenote_swipe_1_pane_t1

0xe2c9,	// (0x0003d7bb) calenote_swipe_2_pane_g1_ParamLimits

0xe2c9,	// (0x0003d7bb) calenote_swipe_2_pane_g1

0xe6aa,	// (0x0003db9c) calenote_swipe_2_pane_g2_ParamLimits

0xe6aa,	// (0x0003db9c) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0003f285) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0003f285) calenote_swipe_2_pane_g

0xe6b6,	// (0x0003dba8) calenote_swipe_2_pane_t1_ParamLimits

0xe6b6,	// (0x0003dba8) calenote_swipe_2_pane_t1

0x9dbc,	// (0x000392ae) main_mup_navstr_pane

0x55b1,	// (0x00034aa3) main_mup3_pane_t7_ParamLimits

0x55b1,	// (0x00034aa3) main_mup3_pane_t7

0x5fe6,	// (0x000354d8) main_mp4_pane_g6_ParamLimits

0x5fe6,	// (0x000354d8) main_mp4_pane_g6

0x624e,	// (0x00035740) main_image3_pane_t4_ParamLimits

0x624e,	// (0x00035740) main_image3_pane_t4

0x8d07,	// (0x000381f9) popup_navstr_preview_pane_ParamLimits

0x8d07,	// (0x000381f9) popup_navstr_preview_pane

0x8d17,	// (0x00038209) scroll_navstr_pane_ParamLimits

0x8d17,	// (0x00038209) scroll_navstr_pane

0x9dbc,	// (0x000392ae) bg_popup_preview_window_pane_cp04

0xe6dd,	// (0x0003dbcf) popup_navstr_preview_pane_t1

0x8d2b,	// (0x0003821d) scroll_navstr_pane_g1_ParamLimits

0x8d2b,	// (0x0003821d) scroll_navstr_pane_g1

0x8d3f,	// (0x00038231) scroll_navstr_pane_t1_ParamLimits

0x8d3f,	// (0x00038231) scroll_navstr_pane_t1

0xe682,	// (0x0003db74) bg_button_pane_cp014

0xe682,	// (0x0003db74) bg_button_pane_cp030

0x832a,	// (0x0003781c) list_double_fisheye_pane_g4_ParamLimits

0x832a,	// (0x0003781c) list_double_fisheye_pane_g4

0x8336,	// (0x00037828) list_double_fisheye_pane_g5_ParamLimits

0x8336,	// (0x00037828) list_double_fisheye_pane_g5

0xc682,	// (0x0003bb74) sp_fs_scroll_pane_cp03

0xe3e2,	// (0x0003d8d4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3ee,	// (0x0003d8e0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0003f1bb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x856b,	// (0x00037a5d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe58a,	// (0x0003da7c) sp_fs_scroll_pane_cp02

0xa63b,	// (0x00039b2d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa63b,	// (0x00039b2d) popup_sp_fs_calendar_preview_list_single_pane

0x9dbc,	// (0x000392ae) main_cam6_pano_pane

0x141d,	// (0x0003090f) main_mup3_pane_ParamLimits

0x9dbc,	// (0x000392ae) main_phacti_pane

0x7d7a,	// (0x0003726c) bg_button_pane_cp11

0x7d94,	// (0x00037286) main_mobtv_info_pane_g2_ParamLimits

0x7d94,	// (0x00037286) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0003f11b) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0003f11b) main_mobtv_info_pane_g

0x7f71,	// (0x00037463) sc_clock_pane_t5_ParamLimits

0x7f71,	// (0x00037463) sc_clock_pane_t5

0x81a5,	// (0x00037697) main_radioblah_pane_g1_ParamLimits

0xe215,	// (0x0003d707) main_radioblah_pane_t3_ParamLimits

0xe215,	// (0x0003d707) main_radioblah_pane_t3

0xe22d,	// (0x0003d71f) main_radioblah_pane_t4_ParamLimits

0xe22d,	// (0x0003d71f) main_radioblah_pane_t4

0x81cd,	// (0x000376bf) main_radioblah_text_pane_ParamLimits

0x81cd,	// (0x000376bf) main_radioblah_text_pane

0x81df,	// (0x000376d1) main_radioblah_info_pane_g1_ParamLimits

0x8278,	// (0x0003776a) main_radioblah_info_pane_t4_ParamLimits

0x8278,	// (0x0003776a) main_radioblah_info_pane_t4

0xb208,	// (0x0003a6fa) main_sp_fs_calendar_pane

0x8d56,	// (0x00038248) main_phacti_pane_g1

0x8d5e,	// (0x00038250) phacti_note_pane_ParamLimits

0x8d5e,	// (0x00038250) phacti_note_pane

0xe6f4,	// (0x0003dbe6) phacti_term_pane_ParamLimits

0xe6f4,	// (0x0003dbe6) phacti_term_pane

0xe709,	// (0x0003dbfb) phacti_note_pane_t1_ParamLimits

0xe709,	// (0x0003dbfb) phacti_note_pane_t1

0xe720,	// (0x0003dc12) phacti_term_pane_g1

0xe728,	// (0x0003dc1a) phacti_term_pane_t1_ParamLimits

0xe728,	// (0x0003dc1a) phacti_term_pane_t1

0xe752,	// (0x0003dc44) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe75a,	// (0x0003dc4c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0003f28f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe762,	// (0x0003dc54) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe762,	// (0x0003dc54) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe778,	// (0x0003dc6a) aid_popup_sp_fs_bg_corner_pane

0xc9f6,	// (0x0003bee8) popup_sp_fs_calendar_preview_bg_pane_g1

0x9dbc,	// (0x000392ae) popup_sp_fs_calendar_preview_bg_pane

0xe780,	// (0x0003dc72) popup_sp_fs_calendar_preview_list_pane

0xc5aa,	// (0x0003ba9c) bg_main_sp_fs_cale_pane_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_main_sp_fs_cale_pane

0xe791,	// (0x0003dc83) listscroll_cale_mrui_pane_ParamLimits

0xe791,	// (0x0003dc83) listscroll_cale_mrui_pane

0xe7a6,	// (0x0003dc98) listscroll_sp_fs_schedule_track_pane

0xe7af,	// (0x0003dca1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7af,	// (0x0003dca1) main_sp_fs_ctrlbar_pane_cp01

0xe7c2,	// (0x0003dcb4) main_sp_fs_ribbon_pane

0xe7ca,	// (0x0003dcbc) popup_sp_fs_cale_preview_window

0x8dd3,	// (0x000382c5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8dd3,	// (0x000382c5) list_single_sp_fs_schedule_track_pane

0xb208,	// (0x0003a6fa) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb208,	// (0x0003a6fa) bg_sp_fs_highlight_list_pane_cp03

0x8de7,	// (0x000382d9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8de7,	// (0x000382d9) list_single_sp_fs_schedule_track_pane_g1

0x8df3,	// (0x000382e5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8df3,	// (0x000382e5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0003f294) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0003f294) list_single_sp_fs_schedule_track_pane_g

0x8dff,	// (0x000382f1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dff,	// (0x000382f1) list_single_sp_fs_schedule_track_pane_t1

0x8e21,	// (0x00038313) sp_fs_schedule_track_pane_ParamLimits

0x8e21,	// (0x00038313) sp_fs_schedule_track_pane

0xe7dc,	// (0x0003dcce) sp_fs_schedule_track_pane_g1

0xe7e4,	// (0x0003dcd6) sp_fs_schedule_track_pane_g2

0xe7ec,	// (0x0003dcde) sp_fs_schedule_track_pane_g3

0xe7f4,	// (0x0003dce6) sp_fs_schedule_track_pane_g4

0xe7fc,	// (0x0003dcee) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0003f299) sp_fs_schedule_track_pane_g

0xd3bc,	// (0x0003c8ae) bg_sp_fs_schedule_viewer_highlight_g1

0xa951,	// (0x00039e43) bg_sp_fs_schedule_viewer_highlight_g2

0xd3c4,	// (0x0003c8b6) bg_sp_fs_schedule_viewer_highlight_g3

0xd3cc,	// (0x0003c8be) bg_sp_fs_schedule_viewer_highlight_g4

0xd5e6,	// (0x0003cad8) bg_sp_fs_schedule_viewer_highlight_g5

0xd3dc,	// (0x0003c8ce) bg_sp_fs_schedule_viewer_highlight_g6

0xd3e4,	// (0x0003c8d6) bg_sp_fs_schedule_viewer_highlight_g7

0xd3ec,	// (0x0003c8de) bg_sp_fs_schedule_viewer_highlight_g8

0xa931,	// (0x00039e23) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0003f2a4) bg_sp_fs_schedule_viewer_highlight_g

0x9dbc,	// (0x000392ae) bg_main_sp_fs_ribbon_pane

0x8e36,	// (0x00038328) main_sp_fs_ribbon_pane_g1

0xe804,	// (0x0003dcf6) main_sp_fs_ribbon_pane_t1

0x8e3f,	// (0x00038331) main_sp_fs_ribbon_pane_t2

0xe813,	// (0x0003dd05) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0003f2b7) main_sp_fs_ribbon_pane_t

0xe822,	// (0x0003dd14) main_sp_fs_ribbon_scheduler_pane

0xe82a,	// (0x0003dd1c) bg_main_sp_fs_ribbon_pane_g1

0xe833,	// (0x0003dd25) bg_main_sp_fs_ribbon_pane_g2

0xe83c,	// (0x0003dd2e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0003f2be) bg_main_sp_fs_ribbon_pane_g

0xe844,	// (0x0003dd36) main_sp_fs_ribbon_scheduler_pane_g1

0xe84d,	// (0x0003dd3f) main_sp_fs_ribbon_scheduler_pane_g2

0xe856,	// (0x0003dd48) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0003f2c5) main_sp_fs_ribbon_scheduler_pane_g

0xe85f,	// (0x0003dd51) list_cale_mrui_pane

0x8e4e,	// (0x00038340) sp_fs_scroll_pane_cp07_ParamLimits

0x8e4e,	// (0x00038340) sp_fs_scroll_pane_cp07

0x8e6a,	// (0x0003835c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e6a,	// (0x0003835c) bg_sp_fs_schedule_viewer_highlight

0xe86c,	// (0x0003dd5e) list_single_sp_fs_schedule_track_pane_cp01

0xe874,	// (0x0003dd66) list_sp_fs_schedule_track_pane

0xe87c,	// (0x0003dd6e) sp_fs_scroll_pane_cp06_ParamLimits

0xe87c,	// (0x0003dd6e) sp_fs_scroll_pane_cp06

0xc9f6,	// (0x0003bee8) bgmain_sp_fs_calendar_pane_g1

0x8e7c,	// (0x0003836e) list_single_cale_mrui_pane_ParamLimits

0x8e7c,	// (0x0003836e) list_single_cale_mrui_pane

0xe88e,	// (0x0003dd80) list_single_cale_mrui_row_pane_ParamLimits

0xe88e,	// (0x0003dd80) list_single_cale_mrui_row_pane

0xe89b,	// (0x0003dd8d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89b,	// (0x0003dd8d) list_single_cale_mrui_row_pane_g1

0xe8e0,	// (0x0003ddd2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e0,	// (0x0003ddd2) list_single_cale_mrui_row_pane_t1

0x8e9f,	// (0x00038391) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e9f,	// (0x00038391) list_single_cale_mrui_row_pane_t2

0xe8f2,	// (0x0003dde4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f2,	// (0x0003dde4) list_single_cale_mrui_row_pane_t3

0xe921,	// (0x0003de13) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe921,	// (0x0003de13) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0003f2d3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0003f2d3) list_single_cale_mrui_row_pane_t

0x8f05,	// (0x000383f7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f05,	// (0x000383f7) list_single_cmail_header_editor_pane_bg_cp01

0x8f29,	// (0x0003841b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f29,	// (0x0003841b) list_single_cmail_header_editor_pane_bg_cp02

0x8f49,	// (0x0003843b) main_radioblah_text_pane_t1_ParamLimits

0x8f49,	// (0x0003843b) main_radioblah_text_pane_t1

0xe952,	// (0x0003de44) cam6_indi_pane_cp01

0xe95a,	// (0x0003de4c) cam6_mode_pane_cp01

0xe962,	// (0x0003de54) cam6_pano_pane

0xe96b,	// (0x0003de5d) cam6_zoom_pane_cp01

0xe975,	// (0x0003de67) cam6_pano_image_pane

0xe97e,	// (0x0003de70) cam6_pano_pane_g1

0xe0af,	// (0x0003d5a1) cam6_pano_pane_g2

0xe987,	// (0x0003de79) cam6_pano_pane_g3

0xe990,	// (0x0003de82) cam6_pano_pane_g4

0xcf99,	// (0x0003c48b) cam6_pano_pane_g5

0xe999,	// (0x0003de8b) cam6_pano_pane_g6

0xe9a1,	// (0x0003de93) cam6_pano_pane_g7

0xe9a9,	// (0x0003de9b) cam6_pano_pane_g8

0xe9b2,	// (0x0003dea4) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0003f2dc) cam6_pano_pane_g

0x9dbc,	// (0x000392ae) main_browser_tag_pane

0xe6d5,	// (0x0003dbc7) grid_navstr_albumart_pane

0xe9bd,	// (0x0003deaf) cell_navstr_albumart_pane_ParamLimits

0xe9bd,	// (0x0003deaf) cell_navstr_albumart_pane

0xe9d9,	// (0x0003decb) cell_navstr_albumart_pane_g1

0xc3b7,	// (0x0003b8a9) cell_navstr_albumart_pane_g2

0xc3c7,	// (0x0003b8b9) cell_navstr_albumart_pane_g3

0xc3bf,	// (0x0003b8b1) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0003f2ef) cell_navstr_albumart_pane_g

0x8f64,	// (0x00038456) bt_list_pane_ParamLimits

0x8f64,	// (0x00038456) bt_list_pane

0x8f7a,	// (0x0003846c) bt_list_pane_t1

0x8f89,	// (0x0003847b) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0003f2f8) bt_list_pane_t

0x9dbc,	// (0x000392ae) main_cale_prevew_pane

0x8f98,	// (0x0003848a) popup_cale_preview_window_ParamLimits

0x8f98,	// (0x0003848a) popup_cale_preview_window

0xb208,	// (0x0003a6fa) bg_popup_preview_window_pane_cp05_ParamLimits

0xb208,	// (0x0003a6fa) bg_popup_preview_window_pane_cp05

0xe9e1,	// (0x0003ded3) list_cale_preview_pane_ParamLimits

0xe9e1,	// (0x0003ded3) list_cale_preview_pane

0x8fb5,	// (0x000384a7) list_double_cale_preview_pane_ParamLimits

0x8fb5,	// (0x000384a7) list_double_cale_preview_pane

0x8fc9,	// (0x000384bb) list_single_cale_preview_pane_ParamLimits

0x8fc9,	// (0x000384bb) list_single_cale_preview_pane

0x8fe1,	// (0x000384d3) list_single_cale_preview_pane_g1

0x8fe9,	// (0x000384db) list_single_cale_preview_pane_t1_ParamLimits

0x8fe9,	// (0x000384db) list_single_cale_preview_pane_t1

0x8ffe,	// (0x000384f0) list_double_cale_preview_pane_g1

0x9006,	// (0x000384f8) list_double_cale_preview_pane_t1_ParamLimits

0x9006,	// (0x000384f8) list_double_cale_preview_pane_t1

0x901b,	// (0x0003850d) list_double_cale_preview_pane_t2_ParamLimits

0x901b,	// (0x0003850d) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0003f2fd) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0003f2fd) list_double_cale_preview_pane_t

0x9dbc,	// (0x000392ae) main_ezdial_pane

0xb208,	// (0x0003a6fa) main_sp_fs_email_pane_ParamLimits

0x84d6,	// (0x000379c8) cmail_ddmenu_btn01_pane_ParamLimits

0x84d6,	// (0x000379c8) cmail_ddmenu_btn01_pane

0x84e9,	// (0x000379db) cmail_ddmenu_btn02_pane_ParamLimits

0x84e9,	// (0x000379db) cmail_ddmenu_btn02_pane

0x850c,	// (0x000379fe) cmail_ddmenu_btn03_pane_ParamLimits

0x850c,	// (0x000379fe) cmail_ddmenu_btn03_pane

0x85aa,	// (0x00037a9c) main_sp_fs_ctrlbar_pane_ParamLimits

0x85ce,	// (0x00037ac0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c6a,	// (0x0003815c) list_cmail_body_pane_ParamLimits

0xe5d2,	// (0x0003dac4) bg_button_pane_cp12

0xe5e7,	// (0x0003dad9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e7,	// (0x0003dad9) list_single_cmail_header_detail_pane_g3

0xe630,	// (0x0003db22) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe630,	// (0x0003db22) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0003f280) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0003f280) list_single_cmail_header_detail_pane_t

0xe73d,	// (0x0003dc2f) phacti_term_pane_t2_ParamLimits

0xe73d,	// (0x0003dc2f) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0003f28a) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0003f28a) phacti_term_pane_t

0xe9ed,	// (0x0003dedf) aid_size_list_single_double

0x9033,	// (0x00038525) popup_ezdial_listscroll_window

0x904f,	// (0x00038541) popup_number_entry_window_cp01

0xa6df,	// (0x00039bd1) bg_popup_call_pane_cp09

0xe9f9,	// (0x0003deeb) ezdial_list_pane

0xea01,	// (0x0003def3) scroll_pane_cp23

0xc5aa,	// (0x0003ba9c) bg_button_pane_cp028_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_button_pane_cp028

0x905d,	// (0x0003854f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x905d,	// (0x0003854f) cmail_ddmenu_btn01_pane_g1

0x906c,	// (0x0003855e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x906c,	// (0x0003855e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0003f302) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0003f302) cmail_ddmenu_btn01_pane_g

0xea09,	// (0x0003defb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea09,	// (0x0003defb) cmail_ddmenu_btn01_pane_t1

0xc5aa,	// (0x0003ba9c) bg_button_pane_cp029_ParamLimits

0xc5aa,	// (0x0003ba9c) bg_button_pane_cp029

0x907c,	// (0x0003856e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x907c,	// (0x0003856e) cmail_ddmenu_btn02_pane_g1

0x9097,	// (0x00038589) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9097,	// (0x00038589) cmail_ddmenu_btn02_pane_t1

0xb208,	// (0x0003a6fa) bg_button_pane_cp031_ParamLimits

0xb208,	// (0x0003a6fa) bg_button_pane_cp031

0x907c,	// (0x0003856e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x907c,	// (0x0003856e) cmail_ddmenu_btn03_pane_g1

0x9097,	// (0x00038589) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9097,	// (0x00038589) cmail_ddmenu_btn03_pane_t1

0x61f5,	// (0x000356e7) cell_dialer2_keypad_pane_t1_ParamLimits

0x620f,	// (0x00035701) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x620f,	// (0x00035701) cell_dialer2_keypad_pane_t1_copy1

0x7b8d,	// (0x0003707f) ncimui_group_button_pane

0xb208,	// (0x0003a6fa) main_sp_fs_calendar_pane_ParamLimits

0x8c81,	// (0x00038173) list_single_cmail_header_caption_pane_ParamLimits

0xe788,	// (0x0003dc7a) aid_recal_txt_sm_pane

0x9dbc,	// (0x000392ae) mian_recal_day_pane

0xe7ca,	// (0x0003dcbc) popup_sp_fs_cale_preview_window_ParamLimits

0xea1e,	// (0x0003df10) list_recal_day_pane

0xea61,	// (0x0003df53) list_single_recal_day_pane_ParamLimits

0xea61,	// (0x0003df53) list_single_recal_day_pane

0xea73,	// (0x0003df65) list_single_recal_day_pane_g1_ParamLimits

0xea73,	// (0x0003df65) list_single_recal_day_pane_g1

0xea7f,	// (0x0003df71) list_single_recal_day_pane_g2_ParamLimits

0xea7f,	// (0x0003df71) list_single_recal_day_pane_g2

0xea8b,	// (0x0003df7d) list_single_recal_day_pane_g3_ParamLimits

0xea8b,	// (0x0003df7d) list_single_recal_day_pane_g3

0x90be,	// (0x000385b0) list_single_recal_day_pane_g4_ParamLimits

0x90be,	// (0x000385b0) list_single_recal_day_pane_g4

0xea97,	// (0x0003df89) list_single_recal_day_pane_g5_ParamLimits

0xea97,	// (0x0003df89) list_single_recal_day_pane_g5

0xeaa3,	// (0x0003df95) list_single_recal_day_pane_g6_ParamLimits

0xeaa3,	// (0x0003df95) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0003f311) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0003f311) list_single_recal_day_pane_g

0xeab7,	// (0x0003dfa9) list_single_recal_day_pane_t1

0xeac9,	// (0x0003dfbb) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0003f31c) list_single_recal_day_pane_t

0x90d6,	// (0x000385c8) ncimui_query_button_pane_ParamLimits

0x90d6,	// (0x000385c8) ncimui_query_button_pane

0x90e6,	// (0x000385d8) ncimui_query_button_pane_t1_ParamLimits

0x90e6,	// (0x000385d8) ncimui_query_button_pane_t1

0xeadb,	// (0x0003dfcd) ncimui_query_button_pane_t2_ParamLimits

0xeadb,	// (0x0003dfcd) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0003f321) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0003f321) ncimui_query_button_pane_t

0x90f9,	// (0x000385eb) query_button_pane_ParamLimits

0x90f9,	// (0x000385eb) query_button_pane

0x9dbc,	// (0x000392ae) bg_button_pane_cp0028

0xeaee,	// (0x0003dfe0) query_button_pane_t1

0xff60,	// (0x0002f452) main_tport_pane_ParamLimits

0x8b2b,	// (0x0003801d) bg_popup_window_pane_cp01_ParamLimits

0x8b2b,	// (0x0003801d) bg_popup_window_pane_cp01

0x8b44,	// (0x00038036) heading_pane_cp08_ParamLimits

0x8b44,	// (0x00038036) heading_pane_cp08

0x8b57,	// (0x00038049) heading_pane_cp07_ParamLimits

0x8b57,	// (0x00038049) heading_pane_cp07

0x8bf9,	// (0x000380eb) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0003f26d) cell_tport_appsw_pane_g

0xb2ac,	// (0x0003a79e) input_candi_list_open_g1

0xab14,	// (0x0003a006) list_cale_time_pane_g6_ParamLimits

0xab14,	// (0x0003a006) list_cale_time_pane_g6

0x4edc,	// (0x000343ce) aid_size_touch_calib_1_ParamLimits

0x4edc,	// (0x000343ce) aid_size_touch_calib_1

0x4eee,	// (0x000343e0) aid_size_touch_calib_2_ParamLimits

0x4eee,	// (0x000343e0) aid_size_touch_calib_2

0x4f06,	// (0x000343f8) aid_size_touch_calib_3_ParamLimits

0x4f06,	// (0x000343f8) aid_size_touch_calib_3

0x4f24,	// (0x00034416) aid_size_touch_calib_4_ParamLimits

0x4f24,	// (0x00034416) aid_size_touch_calib_4

0x4f3c,	// (0x0003442e) main_touch_calib_button_group_pane_ParamLimits

0x4f3c,	// (0x0003442e) main_touch_calib_button_group_pane

0x4f54,	// (0x00034446) main_touch_calib_pane_g1_ParamLimits

0x4f66,	// (0x00034458) main_touch_calib_pane_g2_ParamLimits

0x4f78,	// (0x0003446a) main_touch_calib_pane_g3_ParamLimits

0x4f8a,	// (0x0003447c) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0003ec28) main_touch_calib_pane_g_ParamLimits

0x4f9c,	// (0x0003448e) main_touch_calib_pane_t1_ParamLimits

0x4fb6,	// (0x000344a8) main_touch_calib_pane_t2_ParamLimits

0x4fd0,	// (0x000344c2) main_touch_calib_pane_t3_ParamLimits

0x4fe4,	// (0x000344d6) main_touch_calib_pane_t4_ParamLimits

0x4ffa,	// (0x000344ec) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0003ec31) main_touch_calib_pane_t_ParamLimits

0xcd29,	// (0x0003c21b) list_single_fp_cale_pane_g3_ParamLimits

0xcd29,	// (0x0003c21b) list_single_fp_cale_pane_g3

0x141d,	// (0x0003090f) bg_button_pane_cp012_ParamLimits

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp03_ParamLimits

0x1191,	// (0x00030683) cell_vitu2_function_top_pane_g1_ParamLimits

0x141d,	// (0x0003090f) bg_vkb2_func_pane_cp04_ParamLimits

0x7b18,	// (0x0003700a) main_ncimui_button_group_pane_ParamLimits

0x7b18,	// (0x0003700a) main_ncimui_button_group_pane

0x7b78,	// (0x0003706a) main_ncimui_pane_t3_ParamLimits

0x7b78,	// (0x0003706a) main_ncimui_pane_t3

0xe6eb,	// (0x0003dbdd) phacti_button_group_pane

0xe9ed,	// (0x0003dedf) aid_size_list_single_double_ParamLimits

0x9033,	// (0x00038525) popup_ezdial_listscroll_window_ParamLimits

0x904f,	// (0x00038541) popup_number_entry_window_cp01_ParamLimits

0x910c,	// (0x000385fe) phacti_button_pane_ParamLimits

0x910c,	// (0x000385fe) phacti_button_pane

0x9dbc,	// (0x000392ae) bg_button_pane_cp14

0xeafc,	// (0x0003dfee) phacti_button_pane_t1

0x911d,	// (0x0003860f) main_touch_calib_button_pane_ParamLimits

0x911d,	// (0x0003860f) main_touch_calib_button_pane

0xa52e,	// (0x00039a20) bg_button_pane_cp18_ParamLimits

0xa52e,	// (0x00039a20) bg_button_pane_cp18

0xeb0a,	// (0x0003dffc) main_touch_calib_button_pane_t1_ParamLimits

0xeb0a,	// (0x0003dffc) main_touch_calib_button_pane_t1

0xeb20,	// (0x0003e012) main_touch_calib_button_pane_t2_ParamLimits

0xeb20,	// (0x0003e012) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0003f326) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0003f326) main_touch_calib_button_pane_t

0x9dbc,	// (0x000392ae) cell_ncimui_button_pane

0x9dbc,	// (0x000392ae) bg_button_pane_cp032

0xeb3e,	// (0x0003e030) cell_ncimui_button_pane_t1

0x622c,	// (0x0003571e) image3_infobar_pane_ParamLimits

0x622c,	// (0x0003571e) image3_infobar_pane

0x7f9d,	// (0x0003748f) fs_bigclock_status_pane_ParamLimits

0x7f9d,	// (0x0003748f) fs_bigclock_status_pane

0x7faa,	// (0x0003749c) main_fs_bigclock_clock_pane_ParamLimits

0x7faa,	// (0x0003749c) main_fs_bigclock_clock_pane

0x7fdc,	// (0x000374ce) main_fs_bigclock_indi_pane_ParamLimits

0x7fdc,	// (0x000374ce) main_fs_bigclock_indi_pane

0x801c,	// (0x0003750e) main_fs_bigclock_swipe_pane_ParamLimits

0x801c,	// (0x0003750e) main_fs_bigclock_swipe_pane

0x9dbc,	// (0x000392ae) main_fs_clock_dumped_data

0x8068,	// (0x0003755a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8068,	// (0x0003755a) list_single_fs_bigclock_indicator_pane_g1

0x8081,	// (0x00037573) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8081,	// (0x00037573) list_single_fs_bigclock_indicator_pane_g2

0x809b,	// (0x0003758d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x809b,	// (0x0003758d) list_single_fs_bigclock_indicator_pane_g3

0x80b5,	// (0x000375a7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x80b5,	// (0x000375a7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0003f14f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0003f14f) list_single_fs_bigclock_indicator_pane_g

0x80e4,	// (0x000375d6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x80e4,	// (0x000375d6) list_single_fs_bigclock_indicator_pane_t1

0x810c,	// (0x000375fe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x810c,	// (0x000375fe) list_single_fs_bigclock_indicator_pane_t2

0x8134,	// (0x00037626) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8134,	// (0x00037626) list_single_fs_bigclock_indicator_pane_t3

0x815c,	// (0x0003764e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x815c,	// (0x0003764e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0003f15a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0003f15a) list_single_fs_bigclock_indicator_pane_t

0xeb4c,	// (0x0003e03e) image3_infobar_fav_pane_ParamLimits

0xeb4c,	// (0x0003e03e) image3_infobar_fav_pane

0xeb5c,	// (0x0003e04e) image3_infobar_loc_pane_ParamLimits

0xeb5c,	// (0x0003e04e) image3_infobar_loc_pane

0xeb72,	// (0x0003e064) image3_infobar_time_pane_ParamLimits

0xeb72,	// (0x0003e064) image3_infobar_time_pane

0xc9f6,	// (0x0003bee8) image3_infobar_time_pane_g1

0xeb82,	// (0x0003e074) image3_infobar_time_pane_t1

0xc9f6,	// (0x0003bee8) image3_infobar_loc_pane_g1

0xeb90,	// (0x0003e082) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0003f32b) image3_infobar_loc_pane_g

0xeb98,	// (0x0003e08a) image3_infobar_loc_pane_t1

0xc9f6,	// (0x0003bee8) image3_infobar_fav_pane_g1

0xeba6,	// (0x0003e098) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0003f330) image3_infobar_fav_pane_g

0xebae,	// (0x0003e0a0) fs_bigclock_status_battery_pane

0xebb7,	// (0x0003e0a9) fs_bigclock_status_signal_pane

0xebc0,	// (0x0003e0b2) fs_bigclock_status_title_pane

0xebc9,	// (0x0003e0bb) fs_bigclock_status_signal_pane_g1

0xebd2,	// (0x0003e0c4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0003f335) fs_bigclock_status_signal_pane_g

0xebda,	// (0x0003e0cc) fs_bigclock_status_battery_pane_g1

0xebe3,	// (0x0003e0d5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0003f33a) fs_bigclock_status_battery_pane_g

0xebeb,	// (0x0003e0dd) fs_bigclock_status_title_pane_t1

0x9132,	// (0x00038624) main_fs_bigclock_clock_pane_g1

0x9132,	// (0x00038624) main_fs_bigclock_clock_pane_g2

0x9145,	// (0x00038637) main_fs_bigclock_clock_pane_g3

0x9145,	// (0x00038637) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0003f33f) main_fs_bigclock_clock_pane_g

0x915c,	// (0x0003864e) main_fs_bigclock_clock_pane_t1

0x9172,	// (0x00038664) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0003f348) main_fs_bigclock_clock_pane_t

0xebf9,	// (0x0003e0eb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebf9,	// (0x0003e0eb) list_single_fs_bigclock_indicator_pane

0xec0a,	// (0x0003e0fc) list_single_fs_bigclock_pane_ParamLimits

0xec0a,	// (0x0003e0fc) list_single_fs_bigclock_pane

0xec30,	// (0x0003e122) main_fs_bigclock_indicator_pane_t1

0xec3f,	// (0x0003e131) list_single_fs_bigclock_pane_g1

0xec47,	// (0x0003e139) list_single_fs_bigclock_pane_t1

0xc9f6,	// (0x0003bee8) main_fs_bigclock_swipe_pane_g1

0xec8a,	// (0x0003e17c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0003f359) main_fs_bigclock_swipe_pane_g

0xec92,	// (0x0003e184) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec92,	// (0x0003e184) main_fs_bigclock_swipe_pane_t1

0x34a9,	// (0x0003299b) call_type_pane_ParamLimits

0x9dbc,	// (0x000392ae) main_btmg_pane

0xe8c7,	// (0x0003ddb9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c7,	// (0x0003ddb9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0003f2cc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0003f2cc) list_single_cale_mrui_row_pane_g

0xea47,	// (0x0003df39) list_recal_vselct_arw_lo_pane

0xea4f,	// (0x0003df41) list_recal_vselct_arw_up_pane

0xea57,	// (0x0003df49) list_recal_vselct_pane

0x91d4,	// (0x000386c6) btmg_button_pane

0x91de,	// (0x000386d0) main_btmg_pane_g1

0x9dbc,	// (0x000392ae) bg_button_pane_cp044

0xecaf,	// (0x0003e1a1) btmg_button_pane_t1

0xc596,	// (0x0003ba88) aid_listscroll_gen

0xb208,	// (0x0003a6fa) main_cntbar_detail_pane

0xe582,	// (0x0003da74) list_cmail_folder_pane

0xc682,	// (0x0003bb74) sp_fs_scroll_pane_cp03_ParamLimits

0xecbd,	// (0x0003e1af) list_single_fs_dyc_pane_cp01_ParamLimits

0xecbd,	// (0x0003e1af) list_single_fs_dyc_pane_cp01

0xecda,	// (0x0003e1cc) aid_size_cmail_indent

0xece3,	// (0x0003e1d5) list_single_dyc_row_pane_cp01

0x921c,	// (0x0003870e) cntbar_detail_list_pane_ParamLimits

0x921c,	// (0x0003870e) cntbar_detail_list_pane

0x926e,	// (0x00038760) main_cntbar_detail_cont_pane_ParamLimits

0x926e,	// (0x00038760) main_cntbar_detail_cont_pane

0xc682,	// (0x0003bb74) scroll_pane_cp032_ParamLimits

0xc682,	// (0x0003bb74) scroll_pane_cp032

0x9282,	// (0x00038774) cntbar_detail_list_event_pane_ParamLimits

0x9282,	// (0x00038774) cntbar_detail_list_event_pane

0x922e,	// (0x00038720) cntbar_detail_list_shct_pane

0xa99f,	// (0x00039e91) aid_list_gen

0xecec,	// (0x0003e1de) aid_scroll

0xecf5,	// (0x0003e1e7) aid_size_touch_scroll_bar

0x730b,	// (0x000367fd) aid_list_double

0x72f9,	// (0x000367eb) aid_list_single

0x72f9,	// (0x000367eb) aid_list_single_lg

0x9292,	// (0x00038784) aid_list_z_g_a_sm

0x929a,	// (0x0003878c) aid_list_z_g_d

0x92a2,	// (0x00038794) aid_txt_z_prm

0x92b0,	// (0x000387a2) aid_txt_z_prm_cp01

0x92be,	// (0x000387b0) aid_txt_z_sec

0x92cc,	// (0x000387be) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92cc,	// (0x000387be) main_cntbar_detail_cont_pane_g1

0x92e0,	// (0x000387d2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92e0,	// (0x000387d2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0003f35e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0003f35e) main_cntbar_detail_cont_pane_g

0xecfe,	// (0x0003e1f0) main_cntbar_detail_cont_pane_t1

0xed0c,	// (0x0003e1fe) main_cntbar_detail_cont_pane_t2

0xed1a,	// (0x0003e20c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0003f363) main_cntbar_detail_cont_pane_t

0x92f0,	// (0x000387e2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92f0,	// (0x000387e2) cell_cntbar_detail_list_shct_pane

0xed28,	// (0x0003e21a) cntbar_detail_list_shct_pane_g1

0xed31,	// (0x0003e223) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0003f36a) cntbar_detail_list_shct_pane_g

0x9302,	// (0x000387f4) cntbar_detail_list_event_pane_g1_ParamLimits

0x9302,	// (0x000387f4) cntbar_detail_list_event_pane_g1

0x930e,	// (0x00038800) cntbar_detail_list_event_pane_g2_ParamLimits

0x930e,	// (0x00038800) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0003f36f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0003f36f) cntbar_detail_list_event_pane_g

0x937c,	// (0x0003886e) cntbar_detail_list_event_pane_t1_ParamLimits

0x937c,	// (0x0003886e) cntbar_detail_list_event_pane_t1

0x9391,	// (0x00038883) cntbar_detail_list_event_pane_t2_ParamLimits

0x9391,	// (0x00038883) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0003f37c) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0003f37c) cntbar_detail_list_event_pane_t

0xc9f6,	// (0x0003bee8) cell_cntbar_detail_list_shct_pane_g1

0xb0e1,	// (0x0003a5d3) navi_pane_mv_g3

0xb208,	// (0x0003a6fa) main_cntbar_detail_pane_ParamLimits

0x9dbc,	// (0x000392ae) main_notif_wgt_pane

0x5f74,	// (0x00035466) aid_tch_main_mp4_pane_g4

0x617c,	// (0x0003566e) popup_slider_window_cp02

0xea3d,	// (0x0003df2f) list_recal_day_event_pane

0x91e8,	// (0x000386da) cntbar_detail_btn_pane_ParamLimits

0x91e8,	// (0x000386da) cntbar_detail_btn_pane

0x9201,	// (0x000386f3) cntbar_detail_btn_pane_cp01_ParamLimits

0x9201,	// (0x000386f3) cntbar_detail_btn_pane_cp01

0x922e,	// (0x00038720) cntbar_detail_list_shct_pane_ParamLimits

0x923e,	// (0x00038730) cntbar_detail_pane_g1_ParamLimits

0x923e,	// (0x00038730) cntbar_detail_pane_g1

0x9252,	// (0x00038744) cntbar_detail_pane_t1_ParamLimits

0x9252,	// (0x00038744) cntbar_detail_pane_t1

0x931a,	// (0x0003880c) cntbar_detail_list_event_pane_g3_ParamLimits

0x931a,	// (0x0003880c) cntbar_detail_list_event_pane_g3

0x9332,	// (0x00038824) cntbar_detail_list_event_pane_g4_ParamLimits

0x9332,	// (0x00038824) cntbar_detail_list_event_pane_g4

0x934a,	// (0x0003883c) cntbar_detail_list_event_pane_g5_ParamLimits

0x934a,	// (0x0003883c) cntbar_detail_list_event_pane_g5

0x9362,	// (0x00038854) cntbar_detail_list_event_pane_g6_ParamLimits

0x9362,	// (0x00038854) cntbar_detail_list_event_pane_g6

0x93a6,	// (0x00038898) cntbar_detail_list_event_pane_t3_ParamLimits

0x93a6,	// (0x00038898) cntbar_detail_list_event_pane_t3

0x93b8,	// (0x000388aa) popup_notif_wgt_window_ParamLimits

0x93b8,	// (0x000388aa) popup_notif_wgt_window

0x93d1,	// (0x000388c3) popup_submenu_window_cp01_ParamLimits

0x93d1,	// (0x000388c3) popup_submenu_window_cp01

0xa6df,	// (0x00039bd1) bg_popup_window_pane_cp10

0xed3a,	// (0x0003e22c) listscroll_notif_wgt_pane

0xed4c,	// (0x0003e23e) list_notif_wgt_window

0xed55,	// (0x0003e247) scroll_pane_cp033

0x93e5,	// (0x000388d7) list_notif_wgt_row_pane_ParamLimits

0x93e5,	// (0x000388d7) list_notif_wgt_row_pane

0xed5e,	// (0x0003e250) aid_size_list_notif_wgt_del

0xed6b,	// (0x0003e25d) list_notif_wgt_row_pane_g1

0xed77,	// (0x0003e269) list_notif_wgt_row_pane_g2

0xed86,	// (0x0003e278) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0003f383) list_notif_wgt_row_pane_g

0xed93,	// (0x0003e285) list_notif_wgt_row_pane_t1

0xeda9,	// (0x0003e29b) list_notif_wgt_row_pane_t2

0xedbb,	// (0x0003e2ad) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0003f38a) list_notif_wgt_row_pane_t

0xd600,	// (0x0003caf2) list_recal_day_event_pane_g1

0xedcd,	// (0x0003e2bf) list_recal_day_event_pane_t1

0x9dbc,	// (0x000392ae) bg_button_pane_cp045

0x93f5,	// (0x000388e7) cntbar_detail_btn_pane_t1

0xc5aa,	// (0x0003ba9c) main_callh_pane_ParamLimits

0xc5aa,	// (0x0003ba9c) main_callh_pane

0x9dbc,	// (0x000392ae) main_coverflow0_pane

0x9dbc,	// (0x000392ae) main_wgtman_pane

0x803d,	// (0x0003752f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x803d,	// (0x0003752f) main_fs_bigclock_unlock_btn_pane

0x8bf1,	// (0x000380e3) bg_button_pane_cp16

0x8c01,	// (0x000380f3) cell_tport_appsw_pane_g3

0x9403,	// (0x000388f5) cf0_flow_pane_ParamLimits

0x9403,	// (0x000388f5) cf0_flow_pane

0xeddc,	// (0x0003e2ce) listscroll_cf0_pane

0xede7,	// (0x0003e2d9) main_cf0_pane_g1

0x9418,	// (0x0003890a) main_cf0_pane_t1_ParamLimits

0x9418,	// (0x0003890a) main_cf0_pane_t1

0x942f,	// (0x00038921) main_cf0_pane_t2_ParamLimits

0x942f,	// (0x00038921) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0003f396) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0003f396) main_cf0_pane_t

0xedf9,	// (0x0003e2eb) scroll_pane_cp11

0x9446,	// (0x00038938) cf0_flow_pane_g1

0x9452,	// (0x00038944) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0003f39b) cf0_flow_pane_g

0x945e,	// (0x00038950) cf0_flow_pane_t1

0x9dbc,	// (0x000392ae) main_call6_pane

0x9dbc,	// (0x000392ae) main_calllock_pane

0x12cc,	// (0x000307be) call6_btn_grp_pane_ParamLimits

0x12cc,	// (0x000307be) call6_btn_grp_pane

0x12e6,	// (0x000307d8) call6_pane_g1_ParamLimits

0x12e6,	// (0x000307d8) call6_pane_g1

0x12ff,	// (0x000307f1) popup_call6_1st_window_ParamLimits

0x12ff,	// (0x000307f1) popup_call6_1st_window

0x1313,	// (0x00030805) popup_call6_2nd_window_ParamLimits

0x1313,	// (0x00030805) popup_call6_2nd_window

0x1327,	// (0x00030819) cell_call6_btn_pane_ParamLimits

0x1327,	// (0x00030819) cell_call6_btn_pane

0xa6df,	// (0x00039bd1) bg_popup_call2_in_pane_cp03

0xee04,	// (0x0003e2f6) popup_call6_1st_window_g1

0xee0c,	// (0x0003e2fe) popup_call6_1st_window_g2

0xee14,	// (0x0003e306) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0003f3a0) popup_call6_1st_window_g

0xee1c,	// (0x0003e30e) popup_call6_1st_window_t1

0xee2b,	// (0x0003e31d) popup_call6_1st_window_t2

0xee3b,	// (0x0003e32d) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0003f3a7) popup_call6_1st_window_t

0xa6df,	// (0x00039bd1) bg_popup_call2_in_pane_cp04

0xee04,	// (0x0003e2f6) popup_call6_2nd_window_g1

0xee0c,	// (0x0003e2fe) popup_call6_2nd_window_g2

0xee14,	// (0x0003e306) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0003f3a0) popup_call6_2nd_window_g

0xee1c,	// (0x0003e30e) popup_call6_2nd_window_t1

0x1437,	// (0x00030929) bg_button_pane_cp15

0x9470,	// (0x00038962) cell_call6_btn_pane_g1

0x9479,	// (0x0003896b) cell_call6_btn_pane_t1

0x9488,	// (0x0003897a) listscroll_wgtman_pane_ParamLimits

0x9488,	// (0x0003897a) listscroll_wgtman_pane

0x94a9,	// (0x0003899b) wgtman_btn_pane_ParamLimits

0x94a9,	// (0x0003899b) wgtman_btn_pane

0xaef3,	// (0x0003a3e5) aid_scroll_copy1

0xee4b,	// (0x0003e33d) list_wgtman_pane

0x94ec,	// (0x000389de) wgtman_btn_pane_g1_ParamLimits

0x94ec,	// (0x000389de) wgtman_btn_pane_g1

0x9518,	// (0x00038a0a) wgtman_btn_pane_t1_ParamLimits

0x9518,	// (0x00038a0a) wgtman_btn_pane_t1

0xee55,	// (0x0003e347) wgtman_btn_pane_t2_ParamLimits

0xee55,	// (0x0003e347) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0003f3ae) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0003f3ae) wgtman_btn_pane_t

0x9555,	// (0x00038a47) listrow_wgtman_pane_ParamLimits

0x9555,	// (0x00038a47) listrow_wgtman_pane

0x9569,	// (0x00038a5b) listrow_wgtman_pane_g1

0x9576,	// (0x00038a68) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0003f3b3) listrow_wgtman_pane_g

0x9594,	// (0x00038a86) listrow_wgtman_pane_t1

0x95ac,	// (0x00038a9e) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0003f3b8) listrow_wgtman_pane_t

0x95d2,	// (0x00038ac4) wait_bar_pane_cp09

0xee6c,	// (0x0003e35e) main_calllock_btn_pane

0xee76,	// (0x0003e368) main_calllock_pane_g1

0x9dbc,	// (0x000392ae) bg_button_pane_cp17

0xee82,	// (0x0003e374) main_calllock_btn_pane_g1

0xee8b,	// (0x0003e37d) main_calllock_btn_pane_t1

0x9dbc,	// (0x000392ae) main_dialer3_pane

0x9dbc,	// (0x000392ae) main_fmrd2_pane

0xc9f6,	// (0x0003bee8) main_fs_bigclock_unlock_btn_pane_g1

0x95ec,	// (0x00038ade) main_fs_bigclock_unlock_btn_pane_t1

0x95fa,	// (0x00038aec) area_fmrd2_info_pane_ParamLimits

0x95fa,	// (0x00038aec) area_fmrd2_info_pane

0x960b,	// (0x00038afd) area_fmrd2_visual_pane_ParamLimits

0x960b,	// (0x00038afd) area_fmrd2_visual_pane

0x9619,	// (0x00038b0b) fmrd2_indi_pane_ParamLimits

0x9619,	// (0x00038b0b) fmrd2_indi_pane

0x9626,	// (0x00038b18) area_fmrd2_visual_pane_g1

0x962e,	// (0x00038b20) area_fmrd2_visual_pane_t1

0x963e,	// (0x00038b30) area_fmrd2_visual_pane_t2

0x964e,	// (0x00038b40) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0003f3c2) area_fmrd2_visual_pane_t

0x965e,	// (0x00038b50) area_fmrd2_info_pane_g1

0x9666,	// (0x00038b58) area_fmrd2_info_pane_t1

0x9676,	// (0x00038b68) area_fmrd2_info_pane_t2

0x9686,	// (0x00038b78) area_fmrd2_info_pane_t3

0x9696,	// (0x00038b88) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0003f3c9) area_fmrd2_info_pane_t

0x96a6,	// (0x00038b98) fmrd2_indi_pane_t1

0x96b6,	// (0x00038ba8) fmrd2_indi_pane_t2

0x96c6,	// (0x00038bb8) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0003f3d2) fmrd2_indi_pane_t

0x80c6,	// (0x000375b8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x80c6,	// (0x000375b8) list_single_fs_bigclock_indicator_pane_g5

0x817b,	// (0x0003766d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x817b,	// (0x0003766d) list_single_fs_bigclock_indicator_pane_t5

0x8d72,	// (0x00038264) aid_cell_bcale_month_pane_ParamLimits

0x8d72,	// (0x00038264) aid_cell_bcale_month_pane

0x8d90,	// (0x00038282) bcale_month_pane_ParamLimits

0x8d90,	// (0x00038282) bcale_month_pane

0x8db4,	// (0x000382a6) bcale_preview_pane_ParamLimits

0x8db4,	// (0x000382a6) bcale_preview_pane

0xec47,	// (0x0003e139) list_single_fs_bigclock_pane_t1_ParamLimits

0xec66,	// (0x0003e158) list_single_fs_bigclock_pane_t2_ParamLimits

0xec66,	// (0x0003e158) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0003f354) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0003f354) list_single_fs_bigclock_pane_t

0x95e4,	// (0x00038ad6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0003f3bd) main_fs_bigclock_unlock_btn_pane_g

0x96d6,	// (0x00038bc8) aid_dia3_key_size_ParamLimits

0x96d6,	// (0x00038bc8) aid_dia3_key_size

0x96ea,	// (0x00038bdc) aid_dia3_listrow_size_ParamLimits

0x96ea,	// (0x00038bdc) aid_dia3_listrow_size

0x9704,	// (0x00038bf6) dia3_keypad_fun_pane_ParamLimits

0x9704,	// (0x00038bf6) dia3_keypad_fun_pane

0x9720,	// (0x00038c12) dia3_keypad_num_pane_ParamLimits

0x9720,	// (0x00038c12) dia3_keypad_num_pane

0x973c,	// (0x00038c2e) dia3_listscroll_pane_ParamLimits

0x973c,	// (0x00038c2e) dia3_listscroll_pane

0x9752,	// (0x00038c44) dia3_numentry_pane_ParamLimits

0x9752,	// (0x00038c44) dia3_numentry_pane

0xee9a,	// (0x0003e38c) dia3_list_pane

0x976b,	// (0x00038c5d) scroll_pane_cp12

0x9dbc,	// (0x000392ae) bg_dia3_numentry_pane

0x9776,	// (0x00038c68) dia3_numentry_pane_t1

0x9785,	// (0x00038c77) cell_dia3_key_num_pane

0x978d,	// (0x00038c7f) cell_dia3_key0_fun_pane_ParamLimits

0x978d,	// (0x00038c7f) cell_dia3_key0_fun_pane

0x97a1,	// (0x00038c93) cell_dia3_key1_fun_pane_ParamLimits

0x97a1,	// (0x00038c93) cell_dia3_key1_fun_pane

0x97b8,	// (0x00038caa) dia3_listrow_pane

0xdf6b,	// (0x0003d45d) bg_dia3_numentry_pane_g1

0x9dbc,	// (0x000392ae) bg_button_pane_cp21

0x97ca,	// (0x00038cbc) cell_dia3_key_num_pane_t1

0x97d8,	// (0x00038cca) cell_dia3_key_num_pane_t2

0x97e7,	// (0x00038cd9) cell_dia3_key_num_pane_t3

0x97f6,	// (0x00038ce8) cell_dia3_key_num_pane_t4

0x0003,

0xfee7,	// (0x0003f3d9) cell_dia3_key_num_pane_t

0x9dbc,	// (0x000392ae) bg_button_pane_cp19

0x9805,	// (0x00038cf7) cell_dia3_key0_fun_pane_g1

0x9dbc,	// (0x000392ae) bg_button_pane_cp20

0x9805,	// (0x00038cf7) cell_dia3_key1_fun_pane_g1

0x980d,	// (0x00038cff) area_left_week_number_pane

0x981b,	// (0x00038d0d) area_top_day_name_pane

0x982e,	// (0x00038d20) frame_month_view_pane

0xeea5,	// (0x0003e397) grid_month_view_pane

0x9843,	// (0x00038d35) cell_top_day_name_pane_ParamLimits

0x9843,	// (0x00038d35) cell_top_day_name_pane

0x9872,	// (0x00038d64) cell_area_left_week_number_pane_ParamLimits

0x9872,	// (0x00038d64) cell_area_left_week_number_pane

0x9888,	// (0x00038d7a) cell_month_view_pane_ParamLimits

0x9888,	// (0x00038d7a) cell_month_view_pane

0xeeb3,	// (0x0003e3a5) frm_month_g1

0x98b9,	// (0x00038dab) frm_month_g2

0x98cc,	// (0x00038dbe) frm_month_g3

0x98df,	// (0x00038dd1) frm_month_g4

0x98f2,	// (0x00038de4) frm_month_g5

0x9905,	// (0x00038df7) frm_month_g6

0x991a,	// (0x00038e0c) frm_month_g7

0xeec0,	// (0x0003e3b2) frm_month_g8

0x992f,	// (0x00038e21) frm_month_g9

0x993f,	// (0x00038e31) frm_month_g10

0x994f,	// (0x00038e41) frm_month_g11

0x995f,	// (0x00038e51) frm_month_g12

0x9971,	// (0x00038e63) frm_month_g13

0x9985,	// (0x00038e77) frm_month_g14

0x9999,	// (0x00038e8b) frm_month_g15

0x99ad,	// (0x00038e9f) frm_month_g16

0x000f,

0xfef0,	// (0x0003f3e2) frm_month_g

0xeecd,	// (0x0003e3bf) cell_top_day_name_pane_t1

0x99c1,	// (0x00038eb3) cell_area_left_week_number_pane_g1

0x99cd,	// (0x00038ebf) cell_area_left_week_number_pane_t1

0xcc1d,	// (0x0003c10f) cell_month_view_pane_g1

0x99e0,	// (0x00038ed2) cell_month_view_pane_t1

0x9dbc,	// (0x000392ae) main_fps_pane

0xe3a8,	// (0x0003d89a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a8,	// (0x0003d89a) cmail_ddmenu_btn02_pane_cp1

0xe3c4,	// (0x0003d8b6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3c4,	// (0x0003d8b6) cmail_ddmenu_btn02_pane_cp2

0x908b,	// (0x0003857d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x908b,	// (0x0003857d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0003f307) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0003f307) cmail_ddmenu_btn02_pane_g

0x90ac,	// (0x0003859e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x90ac,	// (0x0003859e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0003f30c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0003f30c) cmail_ddmenu_btn02_pane_t

0x99f3,	// (0x00038ee5) fps_text_pane_ParamLimits

0x99f3,	// (0x00038ee5) fps_text_pane

0x9a0a,	// (0x00038efc) main_fps_pane_g1_ParamLimits

0x9a0a,	// (0x00038efc) main_fps_pane_g1

0x9a22,	// (0x00038f14) wait_bar_pane_cp010_ParamLimits

0x9a22,	// (0x00038f14) wait_bar_pane_cp010

0x9a35,	// (0x00038f27) fps_text_pane_t1_ParamLimits

0x9a35,	// (0x00038f27) fps_text_pane_t1

0xef34,	// (0x0003e426) cam4_image_uncrop_pane_g1

0xef3d,	// (0x0003e42f) cam4_image_uncrop_pane_g2

0x63a6,	// (0x00035898) cam4_image_uncrop_pane_g3

0x63af,	// (0x000358a1) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0003edc9) cam4_image_uncrop_pane_g

0x97b8,	// (0x00038caa) dia3_listrow_pane_ParamLimits

0x9dbc,	// (0x000392ae) main_phob2_pane

0x8bc4,	// (0x000380b6) cell_tport_appsw_pane_cp02_ParamLimits

0x8bc4,	// (0x000380b6) cell_tport_appsw_pane_cp02

0x8bd8,	// (0x000380ca) cell_tport_appsw_pane_cp03_ParamLimits

0x8bd8,	// (0x000380ca) cell_tport_appsw_pane_cp03

0x9dbc,	// (0x000392ae) phob2_contact_card_pane

0x9dbc,	// (0x000392ae) phob2_listscroll_pane

0xeee0,	// (0x0003e3d2) phob2_list_pane

0xeee8,	// (0x0003e3da) scroll_pane_cp034

0x9a4d,	// (0x00038f3f) phob2_cc_data_pane_ParamLimits

0x9a4d,	// (0x00038f3f) phob2_cc_data_pane

0x9a66,	// (0x00038f58) phob2_cc_listscroll_pane_ParamLimits

0x9a66,	// (0x00038f58) phob2_cc_listscroll_pane

0x9555,	// (0x00038a47) list_double_large_graphic_phob2_pane_ParamLimits

0x9555,	// (0x00038a47) list_double_large_graphic_phob2_pane

0x9a88,	// (0x00038f7a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a88,	// (0x00038f7a) list_double_large_graphic_phob2_pane_g1

0x9a9e,	// (0x00038f90) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a9e,	// (0x00038f90) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff11,	// (0x0003f403) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff11,	// (0x0003f403) list_double_large_graphic_phob2_pane_g

0x9aaa,	// (0x00038f9c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9aaa,	// (0x00038f9c) list_double_large_graphic_phob2_pane_t1

0x9abf,	// (0x00038fb1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9abf,	// (0x00038fb1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff16,	// (0x0003f408) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff16,	// (0x0003f408) list_double_large_graphic_phob2_pane_t

0x9dbc,	// (0x000392ae) list_highlight_pane_cp024

0x9ad1,	// (0x00038fc3) phob2_cc_button_pane

0x9adb,	// (0x00038fcd) phob2_cc_data_pane_g1_ParamLimits

0x9adb,	// (0x00038fcd) phob2_cc_data_pane_g1

0x9af3,	// (0x00038fe5) phob2_cc_data_pane_g2_ParamLimits

0x9af3,	// (0x00038fe5) phob2_cc_data_pane_g2

0x0001,

0xff1b,	// (0x0003f40d) phob2_cc_data_pane_g_ParamLimits

0xff1b,	// (0x0003f40d) phob2_cc_data_pane_g

0x9b03,	// (0x00038ff5) phob2_cc_data_pane_t1_ParamLimits

0x9b03,	// (0x00038ff5) phob2_cc_data_pane_t1

0x9b25,	// (0x00039017) phob2_cc_data_pane_t2_ParamLimits

0x9b25,	// (0x00039017) phob2_cc_data_pane_t2

0x9b47,	// (0x00039039) phob2_cc_data_pane_t3_ParamLimits

0x9b47,	// (0x00039039) phob2_cc_data_pane_t3

0x0002,

0xff20,	// (0x0003f412) phob2_cc_data_pane_t_ParamLimits

0xff20,	// (0x0003f412) phob2_cc_data_pane_t

0xeef0,	// (0x0003e3e2) phob2_cc_list_pane_ParamLimits

0xeef0,	// (0x0003e3e2) phob2_cc_list_pane

0xd697,	// (0x0003cb89) scroll_pane_cp035_ParamLimits

0xd697,	// (0x0003cb89) scroll_pane_cp035

0xb208,	// (0x0003a6fa) bg_button_pane_cp033

0xeefc,	// (0x0003e3ee) phob2_cc_button_pane_g1

0xef08,	// (0x0003e3fa) phob2_cc_button_pane_t1

0xef62,	// (0x0003e454) phob2_cc_button_pane_t2

0x0001,

0xff27,	// (0x0003f419) phob2_cc_button_pane_t

0x9b69,	// (0x0003905b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b69,	// (0x0003905b) list_double_large_graphic_phob2_cc_pane

0x9ba7,	// (0x00039099) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ba7,	// (0x00039099) list_double_large_graphic_phob2_cc_pane_g1

0x9bb3,	// (0x000390a5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9bb3,	// (0x000390a5) list_double_large_graphic_phob2_cc_pane_g2

0x9bbf,	// (0x000390b1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9bbf,	// (0x000390b1) list_double_large_graphic_phob2_cc_pane_g3

0x9bcb,	// (0x000390bd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9bcb,	// (0x000390bd) list_double_large_graphic_phob2_cc_pane_g4

0x9bd7,	// (0x000390c9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9bd7,	// (0x000390c9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0003f41e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0003f41e) list_double_large_graphic_phob2_cc_pane_g

0x9be3,	// (0x000390d5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9be3,	// (0x000390d5) list_double_large_graphic_phob2_cc_pane_t1

0x9c0c,	// (0x000390fe) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c0c,	// (0x000390fe) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0003f429) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0003f429) list_double_large_graphic_phob2_cc_pane_t

0xef74,	// (0x0003e466) list_highlight_pane_cp025_ParamLimits

0xef74,	// (0x0003e466) list_highlight_pane_cp025

0xb208,	// (0x0003a6fa) bg_button_pane_cp033_ParamLimits

0xeefc,	// (0x0003e3ee) phob2_cc_button_pane_g1_ParamLimits

0xef08,	// (0x0003e3fa) phob2_cc_button_pane_t1_ParamLimits

0xef62,	// (0x0003e454) phob2_cc_button_pane_t2_ParamLimits

0xff27,	// (0x0003f419) phob2_cc_button_pane_t_ParamLimits

0x142b,	// (0x0003091d) popup_wgtman_window

0xd4da,	// (0x0003c9cc) scroll_pane_cp038

0x94ce,	// (0x000389c0) wgtman_btn_pane_cp_01_ParamLimits

0x94ce,	// (0x000389c0) wgtman_btn_pane_cp_01

0xef82,	// (0x0003e474) wgtman_content_pane

0xef8b,	// (0x0003e47d) wgtman_heading_pane

0x9dbc,	// (0x000392ae) bg_heading_pane_cp02

0xef94,	// (0x0003e486) wgtman_heading_pane_g1

0xef9c,	// (0x0003e48e) wgtman_heading_pane_t1

0xefaa,	// (0x0003e49c) scroll_pane_cp036

0xefb2,	// (0x0003e4a4) wgtman_list_pane

0xef48,	// (0x0003e43a) wgtman_list_pane_t1_ParamLimits

0xef48,	// (0x0003e43a) wgtman_list_pane_t1

0x6390,	// (0x00035882) cam4_grid_pane

0x6dc5,	// (0x000362b7) bg_button_pane_cp015_ParamLimits

0x6dd9,	// (0x000362cb) bg_button_pane_cp016_ParamLimits

0x6dec,	// (0x000362de) bg_button_pane_cp017_ParamLimits

0x6e44,	// (0x00036336) popup_vitu2_query_window_g3_ParamLimits

0x6e44,	// (0x00036336) popup_vitu2_query_window_g3

0x6f01,	// (0x000363f3) popup_vitu2_query_window_t6_ParamLimits

0x6f01,	// (0x000363f3) popup_vitu2_query_window_t6

0x6f2c,	// (0x0003641e) popup_vitu2_query_window_t7_ParamLimits

0x6f2c,	// (0x0003641e) popup_vitu2_query_window_t7

0xef34,	// (0x0003e426) cam4_grid_pane_g1

0xef3d,	// (0x0003e42f) cam4_grid_pane_g2

0xefba,	// (0x0003e4ac) cam4_grid_pane_g3

0xefc3,	// (0x0003e4b5) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0003f42e) cam4_grid_pane_g

0x221d,	// (0x0003170f) aid_placing_vt_slider_lsc_ParamLimits

0x250a,	// (0x000319fc) vidtel_button_pane_ParamLimits

0x250a,	// (0x000319fc) vidtel_button_pane

0x9dbc,	// (0x000392ae) bg_button_pane_cp034

0xefce,	// (0x0003e4c0) vidtel_button_pane_g1

0xefd6,	// (0x0003e4c8) vidtel_button_pane_t1

0xd5de,	// (0x0003cad0) aid_size_vtel_slider_touch

0xd697,	// (0x0003cb89) scroll_pane_cp039

0x7cf6,	// (0x000371e8) ncim_query_button_pane_cp01_ParamLimits

0x7d15,	// (0x00037207) ncimui_query_pane_g1_ParamLimits

0xb208,	// (0x0003a6fa) input_focus_pane_cp012_ParamLimits

0xdfa9,	// (0x0003d49b) ncim_query_entry_pane_t1_ParamLimits

0xd697,	// (0x0003cb89) scroll_pane_cp039_ParamLimits

0xafca,	// (0x0003a4bc) navi_pane_bcale_mc_g1

0xafd2,	// (0x0003a4c4) navi_pane_bcale_mc_t1

0xe3fa,	// (0x0003d8ec) main_sp_fs_email_pane_g1

0xe406,	// (0x0003d8f8) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0003f1c4) main_sp_fs_email_pane_g

0xe8d3,	// (0x0003ddc5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d3,	// (0x0003ddc5) list_single_cale_mrui_row_pane_g3

0x90cc,	// (0x000385be) list_single_recal_day_pane_g5_event_pane

0xeaaf,	// (0x0003dfa1) list_single_recal_day_pane_g7

0xefec,	// (0x0003e4de) list_recal_day_event_pane_cp01

0xeff5,	// (0x0003e4e7) list_recal_vselct_arw_lo_pane_cp01

0xeffd,	// (0x0003e4ef) list_recal_vselct_arw_up_pane_cp01

0xf005,	// (0x0003e4f7) list_recal_vselct_pane_cp01

0xd600,	// (0x0003caf2) list_recal_day_event_pane_cp01_g1

0xf00f,	// (0x0003e501) list_recal_day_event_pane_cp01_t1

0xeab7,	// (0x0003dfa9) list_single_recal_day_pane_t1_ParamLimits

0xeac9,	// (0x0003dfbb) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0003f31c) list_single_recal_day_pane_t_ParamLimits

0xa469,	// (0x0003995b) bg_notes_pane_ParamLimits

0xa50c,	// (0x000399fe) list_notes_pane_ParamLimits

0x166d,	// (0x00030b5f) scroll_pane_cp06_ParamLimits

0xa52e,	// (0x00039a20) main_notes_pane_ParamLimits

0xb208,	// (0x0003a6fa) main_welc_pane

0x9c4c,	// (0x0003913e) main_welc_body_pane_ParamLimits

0x9c4c,	// (0x0003913e) main_welc_body_pane

0x9c6b,	// (0x0003915d) main_welc_opti_pane_ParamLimits

0x9c6b,	// (0x0003915d) main_welc_opti_pane

0x9cc3,	// (0x000391b5) main_welc_pane_t1_ParamLimits

0x9cc3,	// (0x000391b5) main_welc_pane_t1

0xef1d,	// (0x0003e40f) main_welc_body_row_pane_ParamLimits

0xef1d,	// (0x0003e40f) main_welc_body_row_pane

0xdacc,	// (0x0003cfbe) main_welc_opti_row_pane_ParamLimits

0xdacc,	// (0x0003cfbe) main_welc_opti_row_pane

0xf01d,	// (0x0003e50f) main_welc_opti_row_pane_g1

0x9d45,	// (0x00039237) main_welc_opti_row_pane_t1

0xf025,	// (0x0003e517) main_welc_body_row_pane_t1

0xed44,	// (0x0003e236) popup_notif_wgt_heading_pane

0xed5e,	// (0x0003e250) aid_size_list_notif_wgt_del_ParamLimits

0xed6b,	// (0x0003e25d) list_notif_wgt_row_pane_g1_ParamLimits

0xed77,	// (0x0003e269) list_notif_wgt_row_pane_g2_ParamLimits

0xed86,	// (0x0003e278) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0003f383) list_notif_wgt_row_pane_g_ParamLimits

0xed93,	// (0x0003e285) list_notif_wgt_row_pane_t1_ParamLimits

0xeda9,	// (0x0003e29b) list_notif_wgt_row_pane_t2_ParamLimits

0xedbb,	// (0x0003e2ad) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0003f38a) list_notif_wgt_row_pane_t_ParamLimits

0x9569,	// (0x00038a5b) listrow_wgtman_pane_g1_ParamLimits

0x9576,	// (0x00038a68) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0003f3b3) listrow_wgtman_pane_g_ParamLimits

0x9594,	// (0x00038a86) listrow_wgtman_pane_t1_ParamLimits

0x95ac,	// (0x00038a9e) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0003f3b8) listrow_wgtman_pane_t_ParamLimits

0x95d2,	// (0x00038ac4) wait_bar_pane_cp09_ParamLimits

0x9dbc,	// (0x000392ae) bg_popup_heading_pane_cp02

0xf034,	// (0x0003e526) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x0003e52e) popup_notif_wgt_heading_pane_t1

0x9dbc,	// (0x000392ae) main_vids_pane

0x9dbc,	// (0x000392ae) vids_listscroll_pane

0x9d54,	// (0x00039246) scroll_pane_cp040

0x9dbc,	// (0x000392ae) vids_list_pane

0x9d5f,	// (0x00039251) vids_list_double_pane_ParamLimits

0x9d5f,	// (0x00039251) vids_list_double_pane

0x9d70,	// (0x00039262) vids_list_double_pane_g1

0x9d79,	// (0x0003926b) vids_list_double_pane_t1

0x9d89,	// (0x0003927b) vids_list_double_pane_t2

0x0001,

0xff53,	// (0x0003f445) vids_list_double_pane_t

0x141d,	// (0x0003090f) main_ncimui_pane_ParamLimits

0x7b2c,	// (0x0003701e) main_ncimui_pane_g1_ParamLimits

0x7b38,	// (0x0003702a) main_ncimui_pane_g2_ParamLimits

0x7b38,	// (0x0003702a) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0003f0c5) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0003f0c5) main_ncimui_pane_g

0x9c8a,	// (0x0003917c) main_welc_pane_g1_ParamLimits

0x9c8a,	// (0x0003917c) main_welc_pane_g1

0x9c9f,	// (0x00039191) main_welc_pane_g2_ParamLimits

0x9c9f,	// (0x00039191) main_welc_pane_g2

0x0002,

0xff45,	// (0x0003f437) main_welc_pane_g_ParamLimits

0xff45,	// (0x0003f437) main_welc_pane_g

0xa469,	// (0x0003995b) listscroll_mce_pane_ParamLimits

0xb121,	// (0x0003a613) wait_bar_pane_cp10

0xc59e,	// (0x0003ba90) main_cale_day_pane_ParamLimits

0xc59e,	// (0x0003ba90) main_cale_week_pane_ParamLimits

0xa469,	// (0x0003995b) main_messa_pane_ParamLimits

0x5945,	// (0x00034e37) main_clock2_btn_pane_ParamLimits

0x5945,	// (0x00034e37) main_clock2_btn_pane

0xcdb1,	// (0x0003c2a3) main_clock2_btn_pane_cp01_ParamLimits

0xcdb1,	// (0x0003c2a3) main_clock2_btn_pane_cp01

0xe85f,	// (0x0003dd51) list_cale_mrui_pane_ParamLimits

0xedf1,	// (0x0003e2e3) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0003f391) main_cf0_pane_g

0x980d,	// (0x00038cff) area_left_week_number_pane_ParamLimits

0x981b,	// (0x00038d0d) area_top_day_name_pane_ParamLimits

0x982e,	// (0x00038d20) frame_month_view_pane_ParamLimits

0xeea5,	// (0x0003e397) grid_month_view_pane_ParamLimits

0xeeb3,	// (0x0003e3a5) frm_month_g1_ParamLimits

0x98b9,	// (0x00038dab) frm_month_g2_ParamLimits

0x98cc,	// (0x00038dbe) frm_month_g3_ParamLimits

0x98df,	// (0x00038dd1) frm_month_g4_ParamLimits

0x98f2,	// (0x00038de4) frm_month_g5_ParamLimits

0x9905,	// (0x00038df7) frm_month_g6_ParamLimits

0x991a,	// (0x00038e0c) frm_month_g7_ParamLimits

0xeec0,	// (0x0003e3b2) frm_month_g8_ParamLimits

0x992f,	// (0x00038e21) frm_month_g9_ParamLimits

0x993f,	// (0x00038e31) frm_month_g10_ParamLimits

0x994f,	// (0x00038e41) frm_month_g11_ParamLimits

0x995f,	// (0x00038e51) frm_month_g12_ParamLimits

0x9971,	// (0x00038e63) frm_month_g13_ParamLimits

0x9985,	// (0x00038e77) frm_month_g14_ParamLimits

0x9999,	// (0x00038e8b) frm_month_g15_ParamLimits

0x99ad,	// (0x00038e9f) frm_month_g16_ParamLimits

0xfef0,	// (0x0003f3e2) frm_month_g_ParamLimits

0xeecd,	// (0x0003e3bf) cell_top_day_name_pane_t1_ParamLimits

0x99c1,	// (0x00038eb3) cell_area_left_week_number_pane_g1_ParamLimits

0x99cd,	// (0x00038ebf) cell_area_left_week_number_pane_t1_ParamLimits

0xcc1d,	// (0x0003c10f) cell_month_view_pane_g1_ParamLimits

0x99e0,	// (0x00038ed2) cell_month_view_pane_t1_ParamLimits

0xa461,	// (0x00039953) main_clock2_btn_pane_g1

0xf04a,	// (0x0003e53c) main_clock2_btn_pane_t1

0xb208,	// (0x0003a6fa) listscroll_cmail_pane_ParamLimits

0xe3fa,	// (0x0003d8ec) main_sp_fs_email_pane_g1_ParamLimits

0xe406,	// (0x0003d8f8) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0003f1c4) main_sp_fs_email_pane_g_ParamLimits

0xea1e,	// (0x0003df10) list_recal_day_pane_ParamLimits

0xea2f,	// (0x0003df21) mian_recal_day_pane_t1

0x8838,	// (0x00037d2a) list_single_dyc_row_text_pane_t4_ParamLimits

0x8838,	// (0x00037d2a) list_single_dyc_row_text_pane_t4

0x8881,	// (0x00037d73) list_single_dyc_row_text_pane_t5_ParamLimits

0x8881,	// (0x00037d73) list_single_dyc_row_text_pane_t5

0xe4b0,	// (0x0003d9a2) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4b0,	// (0x0003d9a2) list_single_dyc_row_text_pane_t6

0x3319,	// (0x0003280b) aid_mgn_list_cale_time_pane

0x141d,	// (0x0003090f) main_gallery2_pane_ParamLimits

0xcdc5,	// (0x0003c2b7) main_clock2_pane_cp01_t1

0xcdd3,	// (0x0003c2c5) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0003ec9b) main_clock2_pane_cp01_t

0x1a60,	// (0x00030f52) cale_week_scroll_pane_g16_ParamLimits

0x1a60,	// (0x00030f52) cale_week_scroll_pane_g16

0xa6df,	// (0x00039bd1) vorec_slider_pane

0xefd6,	// (0x0003e4c8) vidtel_button_pane_t1_ParamLimits

0x9132,	// (0x00038624) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9132,	// (0x00038624) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9145,	// (0x00038637) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9145,	// (0x00038637) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x0003f33f) main_fs_bigclock_clock_pane_g_ParamLimits

0x915c,	// (0x0003864e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9172,	// (0x00038664) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x0003f348) main_fs_bigclock_clock_pane_t_ParamLimits

0x50bc,	// (0x000345ae) main_mup3_lyrics_pane_ParamLimits

0x50bc,	// (0x000345ae) main_mup3_lyrics_pane

0x9d99,	// (0x0003928b) main_mup3_lyrics_pane_t1_ParamLimits

0x9d99,	// (0x0003928b) main_mup3_lyrics_pane_t1

0x5f5e,	// (0x00035450) aid_main_mp4_pane_t1_area

0x5f68,	// (0x0003545a) aid_main_mp4_pane_t2_area

0x6014,	// (0x00035506) main_mp4_pane_g7_ParamLimits

0x6014,	// (0x00035506) main_mp4_pane_g7

0x6020,	// (0x00035512) main_mp4_pane_g8_ParamLimits

0x6020,	// (0x00035512) main_mp4_pane_g8

0x6292,	// (0x00035784) aid_call6_pane_g1_size

0x9b97,	// (0x00039089) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b97,	// (0x00039089) list_double_large_graphic_phob2_other_pane

0x9db4,	// (0x000392a6) list_double_large_graphic_phob2_other_pane_g1

0x9dbc,	// (0x000392ae) list_highlight_pane_cp026

0xb208,	// (0x0003a6fa) main_welc_pane_ParamLimits

0x8537,	// (0x00037a29) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8537,	// (0x00037a29) main_sp_fs_ctrlbar_pane_g3

0x8551,	// (0x00037a43) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8551,	// (0x00037a43) main_sp_fs_ctrlbar_pane_g4

0x8585,	// (0x00037a77) toolbar2_fixed_button_pane_cp01

0x8590,	// (0x00037a82) toolbar2_fixed_button_pane_cp02

0x859d,	// (0x00037a8f) toolbar2_fixed_button_pane_cp03

0x9c35,	// (0x00039127) list_welc_entry_pane_ParamLimits

0x9c35,	// (0x00039127) list_welc_entry_pane

0x9cb4,	// (0x000391a6) main_welc_pane_g3_ParamLimits

0x9cb4,	// (0x000391a6) main_welc_pane_g3

0x9ce5,	// (0x000391d7) main_welc_pane_t2_ParamLimits

0x9ce5,	// (0x000391d7) main_welc_pane_t2

0x9d00,	// (0x000391f2) main_welc_pane_t3_ParamLimits

0x9d00,	// (0x000391f2) main_welc_pane_t3

0x0002,

0xff4c,	// (0x0003f43e) main_welc_pane_t_ParamLimits

0xff4c,	// (0x0003f43e) main_welc_pane_t

0x9d1a,	// (0x0003920c) welc_button_pane_ParamLimits

0x9d1a,	// (0x0003920c) welc_button_pane

0x9d31,	// (0x00039223) welc_service_logo_pane_ParamLimits

0x9d31,	// (0x00039223) welc_service_logo_pane

0xf058,	// (0x0003e54a) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x0003e54a) list_single_welc_entry_pane

0xf06b,	// (0x0003e55d) list_single_welc_entry_pane_g1

0xf073,	// (0x0003e565) list_single_welc_entry_pane_t1

0xf081,	// (0x0003e573) list_single_welc_entry_pane_t2

0x0001,

0xff58,	// (0x0003f44a) list_single_welc_entry_pane_t

0x9dbc,	// (0x000392ae) bg_button_pane_cp035

0xf08f,	// (0x0003e581) welc_button_pane_t1

0xf09d,	// (0x0003e58f) welc_service_logo_pane_g1

0xf0a6,	// (0x0003e598) welc_service_logo_pane_g2

0x0001,

0xff5d,	// (0x0003f44f) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
