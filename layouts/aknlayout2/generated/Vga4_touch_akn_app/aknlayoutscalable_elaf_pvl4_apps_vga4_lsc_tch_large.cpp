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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007209e };

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
0x165c,	// (0x000736fa) Screen

0x1668,	// (0x00073706) application_window

0x16a4,	// (0x00073742) area_bottom_pane_ParamLimits

0x16a4,	// (0x00073742) area_bottom_pane

0x16dd,	// (0x0007377b) area_top_pane_ParamLimits

0x16dd,	// (0x0007377b) area_top_pane

0xa9cf,	// (0x0007ca6d) call_video_uplink_pane_ParamLimits

0xa9cf,	// (0x0007ca6d) call_video_uplink_pane

0x1757,	// (0x000737f5) main_pane_ParamLimits

0x1757,	// (0x000737f5) main_pane

0xbd77,	// (0x0007de15) context_pane

0x5d2b,	// (0x00077dc9) navi_pane

0x5d5b,	// (0x00077df9) popup_cale_events_window_ParamLimits

0x5d5b,	// (0x00077df9) popup_cale_events_window

0xbd8a,	// (0x0007de28) popup_mup_playback_window

0x5d73,	// (0x00077e11) signal_pane

0x232b,	// (0x000743c9) main_browser_pane

0x47c4,	// (0x00076862) main_burst_pane

0x5a2d,	// (0x00077acb) main_calc_pane

0x47c4,	// (0x00076862) main_cale_day_pane

0x232b,	// (0x000743c9) main_cale_month_pane

0x47c4,	// (0x00076862) main_cale_week_pane

0x47c4,	// (0x00076862) main_call_pane

0x1d65,	// (0x00073e03) main_call_poc_pane

0x47c4,	// (0x00076862) main_camera_pane

0x47c4,	// (0x00076862) main_chi_dic_pane

0x431d,	// (0x000763bb) main_clock_pane

0x1d65,	// (0x00073e03) main_fmradio_pane

0x47c4,	// (0x00076862) main_graph_messa_pane

0x1d65,	// (0x00073e03) main_help_pane

0x232b,	// (0x000743c9) main_im_pane

0x1fc0,	// (0x0007405e) main_image_pane_ParamLimits

0x1fc0,	// (0x0007405e) main_image_pane

0x1d65,	// (0x00073e03) main_location2_pane

0x47c4,	// (0x00076862) main_location_pane

0x1d65,	// (0x00073e03) main_messa_pane

0x1d65,	// (0x00073e03) main_mp2_pane

0x47c4,	// (0x00076862) main_mp_pane

0x1d65,	// (0x00073e03) main_msg_pane

0x1d65,	// (0x00073e03) main_mup_eq_pane

0x1d65,	// (0x00073e03) main_mup_pane

0x47c4,	// (0x00076862) main_notes_pane

0x1d65,	// (0x00073e03) main_pec_pane

0x1d65,	// (0x00073e03) main_phob_pane

0x1d65,	// (0x00073e03) main_pinb_pane

0x1d65,	// (0x00073e03) main_postcard_pane

0x1d65,	// (0x00073e03) main_qdial_pane

0x47c4,	// (0x00076862) main_skin_pane

0x1d65,	// (0x00073e03) main_smil2_pane

0x47c4,	// (0x00076862) main_smil_pane

0x47c4,	// (0x00076862) main_video_pane

0x47c4,	// (0x00076862) main_video_tele_pane

0x1fc0,	// (0x0007405e) main_viewer_pane_ParamLimits

0x1fc0,	// (0x0007405e) main_viewer_pane

0x47c4,	// (0x00076862) main_vorec_pane

0x5a83,	// (0x00077b21) popup_blid_sat_info_window_ParamLimits

0x5a83,	// (0x00077b21) popup_blid_sat_info_window

0x5ae7,	// (0x00077b85) popup_dyc_status_message_window_ParamLimits

0x5ae7,	// (0x00077b85) popup_dyc_status_message_window

0x5b01,	// (0x00077b9f) popup_grid_large_graphic_window_ParamLimits

0x5b01,	// (0x00077b9f) popup_grid_large_graphic_window

0x5bc3,	// (0x00077c61) popup_loc_request_window_ParamLimits

0x5bc3,	// (0x00077c61) popup_loc_request_window

0x5cff,	// (0x00077d9d) popup_wml_address_window_ParamLimits

0x5cff,	// (0x00077d9d) popup_wml_address_window

0x586b,	// (0x00077909) call_muted_g1

0x54fc,	// (0x0007759a) popup_call_audio_conf_window_ParamLimits

0x54fc,	// (0x0007759a) popup_call_audio_conf_window

0x587b,	// (0x00077919) popup_call_audio_first_window_ParamLimits

0x587b,	// (0x00077919) popup_call_audio_first_window

0x58f1,	// (0x0007798f) popup_call_audio_in_window_ParamLimits

0x58f1,	// (0x0007798f) popup_call_audio_in_window

0x592d,	// (0x000779cb) popup_call_audio_out_window_ParamLimits

0x592d,	// (0x000779cb) popup_call_audio_out_window

0x5967,	// (0x00077a05) popup_call_audio_second_window_ParamLimits

0x5967,	// (0x00077a05) popup_call_audio_second_window

0x59bd,	// (0x00077a5b) popup_call_audio_wait_window_ParamLimits

0x59bd,	// (0x00077a5b) popup_call_audio_wait_window

0x59f2,	// (0x00077a90) popup_number_entry_window_ParamLimits

0x59f2,	// (0x00077a90) popup_number_entry_window

0x18f9,	// (0x00073997) bg_popup_call_pane_cp05_ParamLimits

0x18f9,	// (0x00073997) bg_popup_call_pane_cp05

0x1919,	// (0x000739b7) popup_number_entry_window_t1

0x192c,	// (0x000739ca) popup_number_entry_window_t2

0x193e,	// (0x000739dc) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00081199) popup_number_entry_window_t

0x1985,	// (0x00073a23) text_title_cp2

0x1998,	// (0x00073a36) bg_popup_call_pane_cp_ParamLimits

0x1998,	// (0x00073a36) bg_popup_call_pane_cp

0x19a6,	// (0x00073a44) call_thumbnail_pane

0x19ae,	// (0x00073a4c) popup_call_audio_in_window_g1_ParamLimits

0x19ae,	// (0x00073a4c) popup_call_audio_in_window_g1

0x19ba,	// (0x00073a58) popup_call_audio_in_window_g2_ParamLimits

0x19ba,	// (0x00073a58) popup_call_audio_in_window_g2

0x19c6,	// (0x00073a64) popup_call_audio_in_window_g3_ParamLimits

0x19c6,	// (0x00073a64) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000811a2) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000811a2) popup_call_audio_in_window_g

0x19d2,	// (0x00073a70) popup_call_audio_in_window_t1_ParamLimits

0x19d2,	// (0x00073a70) popup_call_audio_in_window_t1

0x19ee,	// (0x00073a8c) popup_call_audio_in_window_t2_ParamLimits

0x19ee,	// (0x00073a8c) popup_call_audio_in_window_t2

0x1a0a,	// (0x00073aa8) popup_call_audio_in_window_t3_ParamLimits

0x1a0a,	// (0x00073aa8) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000811a9) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000811a9) popup_call_audio_in_window_t

0x1998,	// (0x00073a36) bg_popup_call_pane_cp01_ParamLimits

0x1998,	// (0x00073a36) bg_popup_call_pane_cp01

0x19a6,	// (0x00073a44) call_thumbnail_pane_cp02

0x1a1d,	// (0x00073abb) call_type_pane_cp022

0x1a25,	// (0x00073ac3) popup_call_audio_out_window_g1_ParamLimits

0x1a25,	// (0x00073ac3) popup_call_audio_out_window_g1

0x1a37,	// (0x00073ad5) popup_call_audio_out_window_g2_ParamLimits

0x1a37,	// (0x00073ad5) popup_call_audio_out_window_g2

0x1a43,	// (0x00073ae1) popup_call_audio_out_window_g3_ParamLimits

0x1a43,	// (0x00073ae1) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000811b0) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000811b0) popup_call_audio_out_window_g

0x1a55,	// (0x00073af3) popup_call_audio_out_window_t1_ParamLimits

0x1a55,	// (0x00073af3) popup_call_audio_out_window_t1

0x1a6d,	// (0x00073b0b) popup_call_audio_out_window_t2_ParamLimits

0x1a6d,	// (0x00073b0b) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000811b7) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000811b7) popup_call_audio_out_window_t

0x1a82,	// (0x00073b20) bg_popup_call_pane_ParamLimits

0x1a82,	// (0x00073b20) bg_popup_call_pane

0x1b06,	// (0x00073ba4) call_thumbnail_pane_cp_ParamLimits

0x1b06,	// (0x00073ba4) call_thumbnail_pane_cp

0x1b2a,	// (0x00073bc8) call_type_pane_cp01_ParamLimits

0x1b2a,	// (0x00073bc8) call_type_pane_cp01

0x1b6e,	// (0x00073c0c) popup_call_audio_first_window_g1_ParamLimits

0x1b6e,	// (0x00073c0c) popup_call_audio_first_window_g1

0x1bba,	// (0x00073c58) popup_call_audio_first_window_g2_ParamLimits

0x1bba,	// (0x00073c58) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000811bc) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000811bc) popup_call_audio_first_window_g

0x1bfe,	// (0x00073c9c) popup_call_audio_first_window_t1_ParamLimits

0x1bfe,	// (0x00073c9c) popup_call_audio_first_window_t1

0x1caa,	// (0x00073d48) popup_call_audio_first_window_t4_ParamLimits

0x1caa,	// (0x00073d48) popup_call_audio_first_window_t4

0x1d36,	// (0x00073dd4) popup_call_audio_first_window_t5_ParamLimits

0x1d36,	// (0x00073dd4) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000811c1) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000811c1) popup_call_audio_first_window_t

0x1d65,	// (0x00073e03) bg_popup_call_pane_cp02

0x1d6f,	// (0x00073e0d) call_type_pane_cp023

0x1d77,	// (0x00073e15) popup_call_audio_wait_window_g1

0x1d7f,	// (0x00073e1d) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000811c8) popup_call_audio_wait_window_g

0x1d87,	// (0x00073e25) popup_call_audio_wait_window_t3

0x1d95,	// (0x00073e33) bg_popup_call_pane_cp03_ParamLimits

0x1d95,	// (0x00073e33) bg_popup_call_pane_cp03

0x1df5,	// (0x00073e93) call_thumbnail_pane_cp011_ParamLimits

0x1df5,	// (0x00073e93) call_thumbnail_pane_cp011

0x1e01,	// (0x00073e9f) call_type_pane_cp034_ParamLimits

0x1e01,	// (0x00073e9f) call_type_pane_cp034

0x1e3d,	// (0x00073edb) popup_call_audio_second_window_g1_ParamLimits

0x1e3d,	// (0x00073edb) popup_call_audio_second_window_g1

0x1e79,	// (0x00073f17) popup_call_audio_second_window_g2_ParamLimits

0x1e79,	// (0x00073f17) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000811cd) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000811cd) popup_call_audio_second_window_g

0x1eb5,	// (0x00073f53) popup_call_audio_second_window_t1_ParamLimits

0x1eb5,	// (0x00073f53) popup_call_audio_second_window_t1

0x1f36,	// (0x00073fd4) popup_call_audio_second_window_t2_ParamLimits

0x1f36,	// (0x00073fd4) popup_call_audio_second_window_t2

0x1f6c,	// (0x0007400a) popup_call_audio_second_window_t3_ParamLimits

0x1f6c,	// (0x0007400a) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000811d2) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000811d2) popup_call_audio_second_window_t

0x1d65,	// (0x00073e03) bg_popup_call_pane_cp04

0x1fa2,	// (0x00074040) list_conf_pane

0x1faa,	// (0x00074048) popup_call_audio_conf_window_t1

0x1fb8,	// (0x00074056) call_thumbnail_pane_g1

0x1fc0,	// (0x0007405e) bg_pinb_pane_ParamLimits

0x1fc0,	// (0x0007405e) bg_pinb_pane

0x1fce,	// (0x0007406c) find_pinb_pane

0x1fd7,	// (0x00074075) listscroll_pinb_pane_ParamLimits

0x1fd7,	// (0x00074075) listscroll_pinb_pane

0x1fe6,	// (0x00074084) pinb_bg_pane_g1

0x1ff0,	// (0x0007408e) pinb_bg_pane_g2

0x1ffc,	// (0x0007409a) pinb_bg_pane_g3

0x2008,	// (0x000740a6) pinb_bg_pane_g4

0x2014,	// (0x000740b2) pinb_bg_pane_g5

0x2020,	// (0x000740be) pinb_bg_pane_g6

0x202b,	// (0x000740c9) pinb_bg_pane_g7

0x2036,	// (0x000740d4) pinb_bg_pane_g8

0x2041,	// (0x000740df) pinb_bg_pane_g9

0x204b,	// (0x000740e9) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000811d9) pinb_bg_pane_g

0x2068,	// (0x00074106) grid_pinb_pane

0x2073,	// (0x00074111) list_pinb_pane

0x207e,	// (0x0007411c) scroll_pane_cp01_ParamLimits

0x207e,	// (0x0007411c) scroll_pane_cp01

0x2090,	// (0x0007412e) find_pinb_pane_g1_ParamLimits

0x2090,	// (0x0007412e) find_pinb_pane_g1

0x20a8,	// (0x00074146) find_pinb_pane_t1

0x20ba,	// (0x00074158) find_pinb_pane_t2

0x0001,

0xf155,	// (0x000811f3) find_pinb_pane_t

0x20cf,	// (0x0007416d) input_focus_pane_cp01_ParamLimits

0x20cf,	// (0x0007416d) input_focus_pane_cp01

0x20db,	// (0x00074179) cell_pinb_pane_ParamLimits

0x20db,	// (0x00074179) cell_pinb_pane

0x20fd,	// (0x0007419b) cell_pinb_pane_g1_ParamLimits

0x20fd,	// (0x0007419b) cell_pinb_pane_g1

0x2111,	// (0x000741af) cell_pinb_pane_g2_ParamLimits

0x2111,	// (0x000741af) cell_pinb_pane_g2

0x211d,	// (0x000741bb) cell_pinb_pane_g3_ParamLimits

0x211d,	// (0x000741bb) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x000811f8) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x000811f8) cell_pinb_pane_g

0x1d65,	// (0x00073e03) grid_highlight_pane_cp01

0x2129,	// (0x000741c7) list_pinb_item_pane_ParamLimits

0x2129,	// (0x000741c7) list_pinb_item_pane

0x1d65,	// (0x00073e03) list_highlight_pane_cp02

0x213c,	// (0x000741da) list_pinb_item_pane_g1_ParamLimits

0x213c,	// (0x000741da) list_pinb_item_pane_g1

0x2149,	// (0x000741e7) list_pinb_item_pane_g2_ParamLimits

0x2149,	// (0x000741e7) list_pinb_item_pane_g2

0x2155,	// (0x000741f3) list_pinb_item_pane_g3_ParamLimits

0x2155,	// (0x000741f3) list_pinb_item_pane_g3

0x2166,	// (0x00074204) list_pinb_item_pane_g4_ParamLimits

0x2166,	// (0x00074204) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x000811ff) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x000811ff) list_pinb_item_pane_g

0x2172,	// (0x00074210) list_pinb_item_pane_t1_ParamLimits

0x2172,	// (0x00074210) list_pinb_item_pane_t1

0x21a7,	// (0x00074245) calc_display_pane

0x21cd,	// (0x0007426b) calc_paper_pane

0x21f0,	// (0x0007428e) grid_calc_pane

0x1d65,	// (0x00073e03) bg_list_pane_cp01

0x221e,	// (0x000742bc) clock_g1

0x2226,	// (0x000742c4) clock_g2

0x0001,

0xf16a,	// (0x00081208) clock_g

0x222e,	// (0x000742cc) clock_t1_ParamLimits

0x222e,	// (0x000742cc) clock_t1

0x2243,	// (0x000742e1) clock_t2_ParamLimits

0x2243,	// (0x000742e1) clock_t2

0x2255,	// (0x000742f3) clock_t3_ParamLimits

0x2255,	// (0x000742f3) clock_t3

0x2267,	// (0x00074305) clock_t4_ParamLimits

0x2267,	// (0x00074305) clock_t4

0x2279,	// (0x00074317) clock_t5_ParamLimits

0x2279,	// (0x00074317) clock_t5

0x228e,	// (0x0007432c) clock_t6_ParamLimits

0x228e,	// (0x0007432c) clock_t6

0x22a0,	// (0x0007433e) clock_t7_ParamLimits

0x22a0,	// (0x0007433e) clock_t7

0x22b2,	// (0x00074350) clock_t8_ParamLimits

0x22b2,	// (0x00074350) clock_t8

0x22c6,	// (0x00074364) clock_t9_ParamLimits

0x22c6,	// (0x00074364) clock_t9

0x0008,

0xf16f,	// (0x0008120d) clock_t_ParamLimits

0xf16f,	// (0x0008120d) clock_t

0x22dc,	// (0x0007437a) popup_clock_analogue_window_cp02

0x22dc,	// (0x0007437a) popup_clock_digital_window_cp01

0x22e4,	// (0x00074382) listscroll_help_pane

0x1d65,	// (0x00073e03) phob_pre_status_pane

0x22ee,	// (0x0007438c) grid_qdial_pane

0x1d65,	// (0x00073e03) listscroll_mce_pane

0x22f8,	// (0x00074396) bg_notes_pane

0x2302,	// (0x000743a0) list_notes_pane

0x230c,	// (0x000743aa) scroll_pane_cp06

0x2317,	// (0x000743b5) bg_calc_paper_pane

0xa9eb,	// (0x0007ca89) list_calc_pane

0x232b,	// (0x000743c9) bg_calc_display_pane

0x2337,	// (0x000743d5) calc_display_pane_t1

0x2349,	// (0x000743e7) calc_display_pane_t2

0xaa05,	// (0x0007caa3) calc_display_pane_t3

0x0002,

0xf182,	// (0x00081220) calc_display_pane_t

0x235b,	// (0x000743f9) cell_calc_pane_ParamLimits

0x235b,	// (0x000743f9) cell_calc_pane

0x2396,	// (0x00074434) bg_calc_paper_pane_g1

0x23a2,	// (0x00074440) bg_calc_paper_pane_g2

0x23ae,	// (0x0007444c) bg_calc_paper_pane_g3

0x23ba,	// (0x00074458) bg_calc_paper_pane_g4

0x23c6,	// (0x00074464) bg_calc_paper_pane_g5

0x23d2,	// (0x00074470) bg_calc_paper_pane_g6

0x23e5,	// (0x00074483) bg_calc_paper_pane_g7

0x23f8,	// (0x00074496) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00081227) bg_calc_paper_pane_g

0x2409,	// (0x000744a7) calc_bg_paper_pane_g9

0x241a,	// (0x000744b8) list_calc_item_pane_ParamLimits

0x241a,	// (0x000744b8) list_calc_item_pane

0x242e,	// (0x000744cc) list_calc_item_pane_g1

0xaa17,	// (0x0007cab5) list_calc_item_pane_t1_ParamLimits

0xaa17,	// (0x0007cab5) list_calc_item_pane_t1

0x243b,	// (0x000744d9) list_calc_item_pane_t2_ParamLimits

0x243b,	// (0x000744d9) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00081238) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00081238) list_calc_item_pane_t

0x2455,	// (0x000744f3) cell_calc_pane_g1

0x2477,	// (0x00074515) grid_highlight_pane_cp02

0x2499,	// (0x00074537) bg_calc_display_pane_g1

0xaa29,	// (0x0007cac7) bg_calc_display_pane_g2

0x24a2,	// (0x00074540) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00081242) bg_calc_display_pane_g

0x24ab,	// (0x00074549) cell_qdial_pane_ParamLimits

0x24ab,	// (0x00074549) cell_qdial_pane

0x24c1,	// (0x0007455f) cell_qdial_pane_g1_ParamLimits

0x24c1,	// (0x0007455f) cell_qdial_pane_g1

0x24d7,	// (0x00074575) cell_qdial_pane_g2_ParamLimits

0x24d7,	// (0x00074575) cell_qdial_pane_g2

0x24e8,	// (0x00074586) cell_qdial_pane_g3_ParamLimits

0x24e8,	// (0x00074586) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00081249) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00081249) cell_qdial_pane_g

0x2509,	// (0x000745a7) cell_qdial_pane_t1_ParamLimits

0x2509,	// (0x000745a7) cell_qdial_pane_t1

0x2521,	// (0x000745bf) cell_qdial_pane_t2_ParamLimits

0x2521,	// (0x000745bf) cell_qdial_pane_t2

0x2534,	// (0x000745d2) cell_qdial_pane_t3_ParamLimits

0x2534,	// (0x000745d2) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00081252) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00081252) cell_qdial_pane_t

0x1d65,	// (0x00073e03) grid_highlight_pane_cp04

0x2547,	// (0x000745e5) thumbnail_qdial_pane_ParamLimits

0x2547,	// (0x000745e5) thumbnail_qdial_pane

0x25a3,	// (0x00074641) list_help_pane

0x25ac,	// (0x0007464a) scroll_pane_cp02

0x25b5,	// (0x00074653) help_list_pane_t1_ParamLimits

0x25b5,	// (0x00074653) help_list_pane_t1

0xaa33,	// (0x0007cad1) bg_notes_pane_g2

0xaa3b,	// (0x0007cad9) bg_notes_pane_g3

0xaa43,	// (0x0007cae1) notes_bg_pane_g1

0xaa4b,	// (0x0007cae9) notes_bg_pane_g4

0xaa53,	// (0x0007caf1) notes_bg_pane_g5

0xaa5b,	// (0x0007caf9) notes_bg_pane_g6

0xaa63,	// (0x0007cb01) notes_bg_pane_g7

0xaa6b,	// (0x0007cb09) notes_bg_pane_g8

0xaa73,	// (0x0007cb11) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00081270) notes_bg_pane_g

0xe8c7,	// (0x00080965) list_notes_text_pane_ParamLimits

0xe8c7,	// (0x00080965) list_notes_text_pane

0x25d9,	// (0x00074677) list_notes_text_pane_g1

0xaa7b,	// (0x0007cb19) list_notes_text_pane_t1

0x232b,	// (0x000743c9) listscroll_cale_week_pane

0x2610,	// (0x000746ae) bg_cale_heading_pane

0x262c,	// (0x000746ca) bg_cale_pane_cp01

0x2645,	// (0x000746e3) cale_week_corner_pane

0x265b,	// (0x000746f9) cale_week_day_heading_pane

0x2677,	// (0x00074715) cale_week_scroll_pane_g1

0x2690,	// (0x0007472e) cale_week_scroll_pane_g2

0x26a1,	// (0x0007473f) cale_week_scroll_pane_g3

0x26b2,	// (0x00074750) cale_week_scroll_pane_g4

0x26c3,	// (0x00074761) cale_week_scroll_pane_g5

0x26d4,	// (0x00074772) cale_week_scroll_pane_g6

0x26e5,	// (0x00074783) cale_week_scroll_pane_g7

0x26f6,	// (0x00074794) cale_week_scroll_pane_g8

0x2707,	// (0x000747a5) cale_week_scroll_pane_g9

0x2718,	// (0x000747b6) cale_week_scroll_pane_g10

0x2729,	// (0x000747c7) cale_week_scroll_pane_g11

0x273a,	// (0x000747d8) cale_week_scroll_pane_g12

0x274b,	// (0x000747e9) cale_week_scroll_pane_g13

0x2764,	// (0x00074802) cale_week_scroll_pane_g14

0x277d,	// (0x0007481b) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0008127f) cale_week_scroll_pane_g

0x2796,	// (0x00074834) cale_week_time_pane

0x27a7,	// (0x00074845) grid_cale_week_pane

0x27d4,	// (0x00074872) scroll_pane_cp08

0x27ec,	// (0x0007488a) cell_cale_week_pane_ParamLimits

0x27ec,	// (0x0007488a) cell_cale_week_pane

0x2834,	// (0x000748d2) cale_week_day_heading_pane_t1

0x2848,	// (0x000748e6) cale_week_day_heading_pane_t2

0x285c,	// (0x000748fa) cale_week_day_heading_pane_t3

0x2870,	// (0x0007490e) cale_week_day_heading_pane_t4

0x2884,	// (0x00074922) cale_week_day_heading_pane_t5

0x2898,	// (0x00074936) cale_week_day_heading_pane_t6

0x28ac,	// (0x0007494a) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0008129e) cale_week_day_heading_pane_t

0x28c0,	// (0x0007495e) bg_cale_side_pane

0x28ce,	// (0x0007496c) cale_week_time_pane_t1

0x28e6,	// (0x00074984) cale_week_time_pane_t2

0x28fe,	// (0x0007499c) cale_week_time_pane_t3

0x2916,	// (0x000749b4) cale_week_time_pane_t4

0x292e,	// (0x000749cc) cale_week_time_pane_t5

0x2946,	// (0x000749e4) cale_week_time_pane_t6

0x295e,	// (0x000749fc) cale_week_time_pane_t7

0x297a,	// (0x00074a18) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000812ad) cale_week_time_pane_t

0x299a,	// (0x00074a38) cell_cale_week_pane_g2

0x29ab,	// (0x00074a49) cell_cale_week_pane_g3_ParamLimits

0x29ab,	// (0x00074a49) cell_cale_week_pane_g3

0x29c3,	// (0x00074a61) grid_highlight_pane_cp07

0x29cb,	// (0x00074a69) listscroll_gms_pane

0x29d5,	// (0x00074a73) grid_gms_pane

0x29de,	// (0x00074a7c) listscroll_gms_pane_g1

0x29e6,	// (0x00074a84) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000812be) listscroll_gms_pane_g

0x29ee,	// (0x00074a8c) scroll_pane_cp010

0x29f9,	// (0x00074a97) cell_gms_pane_ParamLimits

0x29f9,	// (0x00074a97) cell_gms_pane

0x2a13,	// (0x00074ab1) cell_gms_pane_g1

0x2a1b,	// (0x00074ab9) cell_gms_pane_g2

0x2a23,	// (0x00074ac1) cell_gms_pane_g3

0x2a2c,	// (0x00074aca) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000812c3) cell_gms_pane_g

0x2a35,	// (0x00074ad3) grid_highlight_pane_cp09

0x5813,	// (0x000778b1) phob_pre_status_pane_g1

0x581b,	// (0x000778b9) phob_pre_status_pane_g2

0x5823,	// (0x000778c1) phob_pre_status_pane_g3

0x582b,	// (0x000778c9) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x000816b2) phob_pre_status_pane_g

0x583b,	// (0x000778d9) phob_pre_status_pane_t1

0x584b,	// (0x000778e9) phob_pre_status_pane_t2

0x585b,	// (0x000778f9) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x000816bd) phob_pre_status_pane_t

0x1d65,	// (0x00073e03) bg_list_pane_cp05

0x2a45,	// (0x00074ae3) grid_vorec_pane

0xaa89,	// (0x0007cb27) vorec_t1

0xaa97,	// (0x0007cb35) vorec_t2

0xaaa5,	// (0x0007cb43) vorec_t3

0xaab3,	// (0x0007cb51) vorec_t4

0xaac1,	// (0x0007cb5f) vorec_t5

0xaacf,	// (0x0007cb6d) vorec_t6

0x0006,

0xf22e,	// (0x000812cc) vorec_t

0xaaeb,	// (0x0007cb89) wait_bar_pane_cp01

0x2a4f,	// (0x00074aed) cell_vorec_pane_ParamLimits

0x2a4f,	// (0x00074aed) cell_vorec_pane

0x2a64,	// (0x00074b02) cell_vorec_pane_g1

0x1d65,	// (0x00073e03) grid_highlight_pane_cp05

0x2a84,	// (0x00074b22) cams_zoom_pane

0x2a93,	// (0x00074b31) image_vga_pane

0x2aad,	// (0x00074b4b) main_camera_pane_g1

0x2abf,	// (0x00074b5d) main_camera_pane_g2

0x2acf,	// (0x00074b6d) main_camera_pane_g3

0x2ae3,	// (0x00074b81) main_camera_pane_g4

0x2af7,	// (0x00074b95) main_camera_pane_g5

0x2b0b,	// (0x00074ba9) main_camera_pane_g6

0x2b1f,	// (0x00074bbd) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000812db) main_camera_pane_g

0x2b3f,	// (0x00074bdd) main_camera_pane_t1

0x2b55,	// (0x00074bf3) main_camera_pane_t2

0x0001,

0xf24e,	// (0x000812ec) main_camera_pane_t

0x2b93,	// (0x00074c31) cams_zoom_pane_cp_ParamLimits

0x2b93,	// (0x00074c31) cams_zoom_pane_cp

0x2bbb,	// (0x00074c59) image_cif_pane_ParamLimits

0x2bbb,	// (0x00074c59) image_cif_pane

0x2bf6,	// (0x00074c94) image_subqcif_pane

0x2c00,	// (0x00074c9e) main_video_pane_g1_ParamLimits

0x2c00,	// (0x00074c9e) main_video_pane_g1

0x2c24,	// (0x00074cc2) main_video_pane_g2_ParamLimits

0x2c24,	// (0x00074cc2) main_video_pane_g2

0x2c5a,	// (0x00074cf8) main_video_pane_g3_ParamLimits

0x2c5a,	// (0x00074cf8) main_video_pane_g3

0x2c88,	// (0x00074d26) main_video_pane_g4_ParamLimits

0x2c88,	// (0x00074d26) main_video_pane_g4

0x2cb6,	// (0x00074d54) main_video_pane_g5_ParamLimits

0x2cb6,	// (0x00074d54) main_video_pane_g5

0x2cce,	// (0x00074d6c) main_video_pane_g6_ParamLimits

0x2cce,	// (0x00074d6c) main_video_pane_g6

0x0006,

0xf253,	// (0x000812f1) main_video_pane_g_ParamLimits

0xf253,	// (0x000812f1) main_video_pane_g

0x2cf9,	// (0x00074d97) main_video_pane_t1_ParamLimits

0x2cf9,	// (0x00074d97) main_video_pane_t1

0x2d42,	// (0x00074de0) cams_zoom_pane_g1

0x2d4b,	// (0x00074de9) cams_zoom_pane_g2

0x2d54,	// (0x00074df2) cams_zoom_pane_g3

0x2d5d,	// (0x00074dfb) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00081300) cams_zoom_pane_g

0x2d7a,	// (0x00074e18) grid_cams_pane

0x2d94,	// (0x00074e32) linegrid_cams_pane

0x2da8,	// (0x00074e46) cell_cams_pane_ParamLimits

0x2da8,	// (0x00074e46) cell_cams_pane

0x2dca,	// (0x00074e68) cams_burst_image_pane

0x2dd2,	// (0x00074e70) cell_cams_pane_g1

0x1d65,	// (0x00073e03) grid_highlight_pane_cp03

0x2455,	// (0x000744f3) mp_bg_pane_g1

0x1d65,	// (0x00073e03) bg_list_pane_cp03

0xbc49,	// (0x0007dce7) bg_mp_pane

0xbc51,	// (0x0007dcef) grid_mp_pane

0xbc59,	// (0x0007dcf7) media_player_g1

0xbc63,	// (0x0007dd01) media_player_t1

0xbc71,	// (0x0007dd0f) media_player_t2

0xbc7f,	// (0x0007dd1d) media_player_t3

0xbc8d,	// (0x0007dd2b) media_player_t4

0xbc9b,	// (0x0007dd39) media_player_t5

0xbca9,	// (0x0007dd47) media_player_t6

0xbcb7,	// (0x0007dd55) media_player_t7

0x0006,

0xf5fe,	// (0x0008169c) media_player_t

0xbcc5,	// (0x0007dd63) wait_bar_pane_cp02

0xf5e3,	// (0x00081681) main_usb_pane_t

0x580a,	// (0x000778a8) cell_mp_pane

0x2455,	// (0x000744f3) cell_mp_pane_g1

0x1d65,	// (0x00073e03) grid_highlight_pane_cp06

0x2dda,	// (0x00074e78) grid_skin_colour_pane

0x2de2,	// (0x00074e80) list_highlight_pane_cp03

0x2dea,	// (0x00074e88) skin_g1

0x2df4,	// (0x00074e92) skin_t1

0x2e03,	// (0x00074ea1) skin_t2

0x0001,

0xf297,	// (0x00081335) skin_t

0x2e11,	// (0x00074eaf) cell_skin_colour_pane_ParamLimits

0x2e11,	// (0x00074eaf) cell_skin_colour_pane

0x2e31,	// (0x00074ecf) cell_skin_colour_pane_g1

0x2e87,	// (0x00074f25) call_video_g1_ParamLimits

0x2e87,	// (0x00074f25) call_video_g1

0x2ea3,	// (0x00074f41) call_video_g2_ParamLimits

0x2ea3,	// (0x00074f41) call_video_g2

0x0001,

0xf29c,	// (0x0008133a) call_video_g_ParamLimits

0xf29c,	// (0x0008133a) call_video_g

0x2ed9,	// (0x00074f77) call_video_uplink_pane_cp1_ParamLimits

0x2ed9,	// (0x00074f77) call_video_uplink_pane_cp1

0x2f1d,	// (0x00074fbb) call_video_uplink_pane_cp2

0x2f61,	// (0x00074fff) video_down_crop_pane_ParamLimits

0x2f61,	// (0x00074fff) video_down_crop_pane

0x3027,	// (0x000750c5) video_down_pane_ParamLimits

0x3027,	// (0x000750c5) video_down_pane

0x30f3,	// (0x00075191) video_down_subqcif_pane_ParamLimits

0x30f3,	// (0x00075191) video_down_subqcif_pane

0x310d,	// (0x000751ab) video_down_subqcif_pane_cp_ParamLimits

0x310d,	// (0x000751ab) video_down_subqcif_pane_cp

0x3133,	// (0x000751d1) im_reading_pane_ParamLimits

0x3133,	// (0x000751d1) im_reading_pane

0x3145,	// (0x000751e3) im_writing_pane_ParamLimits

0x3145,	// (0x000751e3) im_writing_pane

0x316b,	// (0x00075209) im_reading_pane_t1

0x31aa,	// (0x00075248) list_im_pane

0x31bb,	// (0x00075259) scroll_pane_cp07

0x31d4,	// (0x00075272) im_writing_pane_t1_ParamLimits

0x31d4,	// (0x00075272) im_writing_pane_t1

0x31e9,	// (0x00075287) im_writing_pane_t2_ParamLimits

0x31e9,	// (0x00075287) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00081344) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00081344) im_writing_pane_t

0x1d65,	// (0x00073e03) input_focus_pane_cp04

0x1d65,	// (0x00073e03) input_focus_pane_cp05

0x3206,	// (0x000752a4) list_im_single_pane_ParamLimits

0x3206,	// (0x000752a4) list_im_single_pane

0x321f,	// (0x000752bd) list_single_im_pane_t1

0x57ca,	// (0x00077868) blid_accuracy_pane

0x57d2,	// (0x00077870) blid_compass_pane

0x57dc,	// (0x0007787a) main_location_t1

0x57ec,	// (0x0007788a) main_location_t2

0x57fc,	// (0x0007789a) main_location_t3

0x0002,

0xf60d,	// (0x000816ab) main_location_t

0x1d65,	// (0x00073e03) aid_levels_location

0x2455,	// (0x000744f3) blid_accuracy_pane_g1

0x2455,	// (0x000744f3) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000813a6) blid_accuracy_pane_g

0x3259,	// (0x000752f7) wml_content_pane

0x3297,	// (0x00075335) wml_button_pane_ParamLimits

0x3297,	// (0x00075335) wml_button_pane

0x32ab,	// (0x00075349) wml_list_single_large_pane_ParamLimits

0x32ab,	// (0x00075349) wml_list_single_large_pane

0x32c4,	// (0x00075362) wml_list_single_medium_pane_ParamLimits

0x32c4,	// (0x00075362) wml_list_single_medium_pane

0x32de,	// (0x0007537c) wml_list_single_small_pane_ParamLimits

0x32de,	// (0x0007537c) wml_list_single_small_pane

0x32fd,	// (0x0007539b) wml_selection_box_pane_ParamLimits

0x32fd,	// (0x0007539b) wml_selection_box_pane

0x3310,	// (0x000753ae) wml_list_single_pane_t1

0x331f,	// (0x000753bd) wml_list_single_medium_pane_t1

0x332e,	// (0x000753cc) wml_list_single_large_pane_t1

0x333d,	// (0x000753db) input_focus_pane_cp02_ParamLimits

0x333d,	// (0x000753db) input_focus_pane_cp02

0x3350,	// (0x000753ee) wml_selection_box_pane_g1

0x3359,	// (0x000753f7) wml_selection_box_pane_t1_ParamLimits

0x3359,	// (0x000753f7) wml_selection_box_pane_t1

0x1fc0,	// (0x0007405e) bg_wml_button_pane_ParamLimits

0x1fc0,	// (0x0007405e) bg_wml_button_pane

0x3371,	// (0x0007540f) wml_button_pane_g1

0x3379,	// (0x00075417) wml_button_pane_t1

0x3371,	// (0x0007540f) wml_button_bg_pane_g1

0x3389,	// (0x00075427) wml_button_bg_pane_g2

0x3391,	// (0x0007542f) wml_button_bg_pane_g3

0x3399,	// (0x00075437) wml_button_bg_pane_g4

0x33a1,	// (0x0007543f) wml_button_bg_pane_g5

0x33a9,	// (0x00075447) wml_button_bg_pane_g6

0x33b1,	// (0x0007544f) wml_button_bg_pane_g7

0x33b9,	// (0x00075457) wml_button_bg_pane_g8

0x33c1,	// (0x0007545f) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00081349) wml_button_bg_pane_g

0x33c9,	// (0x00075467) bg_list_pane_cp02

0x33d3,	// (0x00075471) mce_header_pane_ParamLimits

0x33d3,	// (0x00075471) mce_header_pane

0x33e9,	// (0x00075487) mce_icon_pane

0x33e9,	// (0x00075487) mce_image_pane

0x33f2,	// (0x00075490) mce_text_pane_ParamLimits

0x33f2,	// (0x00075490) mce_text_pane

0x3405,	// (0x000754a3) scroll_pane_cp03

0x328f,	// (0x0007532d) scroll_pane_cp04

0x340f,	// (0x000754ad) scroll_pane_cp05_ParamLimits

0x340f,	// (0x000754ad) scroll_pane_cp05

0x341b,	// (0x000754b9) mce_header_field_pane_ParamLimits

0x341b,	// (0x000754b9) mce_header_field_pane

0x3434,	// (0x000754d2) mce_header_field_pane_2_ParamLimits

0x3434,	// (0x000754d2) mce_header_field_pane_2

0x344a,	// (0x000754e8) mce_header_field_pane_3

0x3452,	// (0x000754f0) list_single_mce_message_pane_ParamLimits

0x3452,	// (0x000754f0) list_single_mce_message_pane

0x346e,	// (0x0007550c) list_single_mce_smart_pane_ParamLimits

0x346e,	// (0x0007550c) list_single_mce_smart_pane

0x3495,	// (0x00075533) input_focus_pane_cp03

0x349e,	// (0x0007553c) list_header_data_pane

0x34a6,	// (0x00075544) mce_header_field_pane_t1

0x34b6,	// (0x00075554) list_single_mce_header_pane_ParamLimits

0x34b6,	// (0x00075554) list_single_mce_header_pane

0x34ca,	// (0x00075568) list_single_mce_header_pane_t1

0x34d9,	// (0x00075577) list_single_mce_message_pane_g1

0x34e1,	// (0x0007557f) list_single_mce_message_pane_t1

0x350d,	// (0x000755ab) bg_cale_heading_pane_cp01_ParamLimits

0x350d,	// (0x000755ab) bg_cale_heading_pane_cp01

0x3540,	// (0x000755de) bg_cale_pane_cp02_ParamLimits

0x3540,	// (0x000755de) bg_cale_pane_cp02

0x3563,	// (0x00075601) cale_month_corner_pane

0x3579,	// (0x00075617) cale_month_day_heading_pane_ParamLimits

0x3579,	// (0x00075617) cale_month_day_heading_pane

0x35ac,	// (0x0007564a) cale_month_pane_g1_ParamLimits

0x35ac,	// (0x0007564a) cale_month_pane_g1

0x35d8,	// (0x00075676) cale_month_pane_g2_ParamLimits

0x35d8,	// (0x00075676) cale_month_pane_g2

0x35f9,	// (0x00075697) cale_month_pane_g3_ParamLimits

0x35f9,	// (0x00075697) cale_month_pane_g3

0x3635,	// (0x000756d3) cale_month_pane_g4_ParamLimits

0x3635,	// (0x000756d3) cale_month_pane_g4

0x3671,	// (0x0007570f) cale_month_pane_g5_ParamLimits

0x3671,	// (0x0007570f) cale_month_pane_g5

0x36ad,	// (0x0007574b) cale_month_pane_g6_ParamLimits

0x36ad,	// (0x0007574b) cale_month_pane_g6

0x36e9,	// (0x00075787) cale_month_pane_g7_ParamLimits

0x36e9,	// (0x00075787) cale_month_pane_g7

0x3725,	// (0x000757c3) cale_month_pane_g8_ParamLimits

0x3725,	// (0x000757c3) cale_month_pane_g8

0x3761,	// (0x000757ff) cale_month_pane_g9_ParamLimits

0x3761,	// (0x000757ff) cale_month_pane_g9

0x3797,	// (0x00075835) cale_month_pane_g10_ParamLimits

0x3797,	// (0x00075835) cale_month_pane_g10

0x37c1,	// (0x0007585f) cale_month_pane_g11_ParamLimits

0x37c1,	// (0x0007585f) cale_month_pane_g11

0x37eb,	// (0x00075889) cale_month_pane_g12_ParamLimits

0x37eb,	// (0x00075889) cale_month_pane_g12

0x3819,	// (0x000758b7) cale_month_pane_g13_ParamLimits

0x3819,	// (0x000758b7) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0008135c) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0008135c) cale_month_pane_g

0x3859,	// (0x000758f7) cale_month_week_pane

0x386a,	// (0x00075908) grid_cale_month_pane_ParamLimits

0x386a,	// (0x00075908) grid_cale_month_pane

0x3898,	// (0x00075936) cale_month_day_heading_pane_t1

0x38f6,	// (0x00075994) cale_month_day_heading_pane_t2

0x395b,	// (0x000759f9) cale_month_day_heading_pane_t3

0x39c0,	// (0x00075a5e) cale_month_day_heading_pane_t4

0x3a25,	// (0x00075ac3) cale_month_day_heading_pane_t5

0x3a8a,	// (0x00075b28) cale_month_day_heading_pane_t6

0x3aef,	// (0x00075b8d) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00081377) cale_month_day_heading_pane_t

0x28c0,	// (0x0007495e) bg_cale_side_pane_cp01

0x3b54,	// (0x00075bf2) cale_month_week_pane_t1

0x3b6b,	// (0x00075c09) cale_month_week_pane_t2

0x3b82,	// (0x00075c20) cale_month_week_pane_t3

0x3b99,	// (0x00075c37) cale_month_week_pane_t4

0x3bb0,	// (0x00075c4e) cale_month_week_pane_t5

0x3bc7,	// (0x00075c65) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00081386) cale_month_week_pane_t

0x3be6,	// (0x00075c84) cell_cale_month_pane_ParamLimits

0x3be6,	// (0x00075c84) cell_cale_month_pane

0xabdb,	// (0x0007cc79) cell_cale_month_pane_g1

0x3c94,	// (0x00075d32) cell_cale_month_pane_t1_ParamLimits

0x3c94,	// (0x00075d32) cell_cale_month_pane_t1

0x29c3,	// (0x00074a61) grid_highlight_pane_cp08

0x2455,	// (0x000744f3) main_smil_g1

0x3cb0,	// (0x00075d4e) smil_status_pane

0x3cbb,	// (0x00075d59) smil_text_pane

0xbb67,	// (0x0007dc05) bg_popup_call3_rect_pane_g8

0xbb6f,	// (0x0007dc0d) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008163f) bg_popup_call3_rect_pane_g

0xbe04,	// (0x0007dea2) smil_status_volume_pane_g1

0x3ccf,	// (0x00075d6d) smil_status_pane_t1

0xbe37,	// (0x0007ded5) volume_smil_pane

0x3ce6,	// (0x00075d84) list_smil_text_pane

0x3cf0,	// (0x00075d8e) scroll_pane_cp011

0x3cfb,	// (0x00075d99) smil_text_list_pane_t1_ParamLimits

0x3cfb,	// (0x00075d99) smil_text_list_pane_t1

0xabe7,	// (0x0007cc85) aid_volume_smil_ParamLimits

0xabe7,	// (0x0007cc85) aid_volume_smil

0x2455,	// (0x000744f3) smil_volume_pane_g1

0x2455,	// (0x000744f3) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000813a6) smil_volume_pane_g

0x232b,	// (0x000743c9) listscroll_cale_day_pane

0x3d50,	// (0x00075dee) bg_cale_pane

0x3d68,	// (0x00075e06) list_cale_pane

0x3d79,	// (0x00075e17) scroll_pane_cp09

0x3d8a,	// (0x00075e28) cale_bg_pane_g1

0x3d92,	// (0x00075e30) cale_bg_pane_g2

0x3d9a,	// (0x00075e38) cale_bg_pane_g3

0x3da2,	// (0x00075e40) cale_bg_pane_g4

0x3daa,	// (0x00075e48) cale_bg_pane_g5

0x3db2,	// (0x00075e50) cale_bg_pane_g6

0x3dba,	// (0x00075e58) cale_bg_pane_g7

0x3dc2,	// (0x00075e60) cale_bg_pane_g8

0x3dca,	// (0x00075e68) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000813ab) cale_bg_pane_g

0x3dd2,	// (0x00075e70) list_cale_time_pane_ParamLimits

0x3dd2,	// (0x00075e70) list_cale_time_pane

0x3de7,	// (0x00075e85) list_cale_time_pane_g1_ParamLimits

0x3de7,	// (0x00075e85) list_cale_time_pane_g1

0x3df3,	// (0x00075e91) list_cale_time_pane_g2_ParamLimits

0x3df3,	// (0x00075e91) list_cale_time_pane_g2

0x3e00,	// (0x00075e9e) list_cale_time_pane_g3_ParamLimits

0x3e00,	// (0x00075e9e) list_cale_time_pane_g3

0x3e0e,	// (0x00075eac) list_cale_time_pane_g4_ParamLimits

0x3e0e,	// (0x00075eac) list_cale_time_pane_g4

0x3e1c,	// (0x00075eba) list_cale_time_pane_g5_ParamLimits

0x3e1c,	// (0x00075eba) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000813be) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000813be) list_cale_time_pane_g

0x3e37,	// (0x00075ed5) list_cale_time_pane_t1_ParamLimits

0x3e37,	// (0x00075ed5) list_cale_time_pane_t1

0x3e5f,	// (0x00075efd) list_cale_time_pane_t2_ParamLimits

0x3e5f,	// (0x00075efd) list_cale_time_pane_t2

0x4550,	// (0x000765ee) aid_blid_cardinal_pane

0x459e,	// (0x0007663c) compass_pane_t4

0x3e87,	// (0x00075f25) list_cale_time_pane_t4_ParamLimits

0x3e87,	// (0x00075f25) list_cale_time_pane_t4

0x45ac,	// (0x0007664a) compass_pane_t5

0x45bc,	// (0x0007665a) compass_pane_t6

0x45ca,	// (0x00076668) compass_pane_t7

0x464c,	// (0x000766ea) navi_pane_cc_t1

0x486b,	// (0x00076909) aid_phob_thumbnail_center_pane

0x4f07,	// (0x00076fa5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000813cb) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000813cb) list_cale_time_pane_t

0x1998,	// (0x00073a36) bg_popup_window_pane_cp02_ParamLimits

0x1998,	// (0x00073a36) bg_popup_window_pane_cp02

0x3eaf,	// (0x00075f4d) heading_pane_cp01_ParamLimits

0x3eaf,	// (0x00075f4d) heading_pane_cp01

0x3ebb,	// (0x00075f59) loc_req_pane_ParamLimits

0x3ebb,	// (0x00075f59) loc_req_pane

0x3ecb,	// (0x00075f69) loc_type_pane_ParamLimits

0x3ecb,	// (0x00075f69) loc_type_pane

0x3edd,	// (0x00075f7b) loc_type_pane_t1_ParamLimits

0x3edd,	// (0x00075f7b) loc_type_pane_t1

0x3eef,	// (0x00075f8d) loc_type_pane_t2_ParamLimits

0x3eef,	// (0x00075f8d) loc_type_pane_t2

0x3f01,	// (0x00075f9f) loc_type_pane_t3_ParamLimits

0x3f01,	// (0x00075f9f) loc_type_pane_t3

0x0002,

0xf334,	// (0x000813d2) loc_type_pane_t_ParamLimits

0xf334,	// (0x000813d2) loc_type_pane_t

0x3f13,	// (0x00075fb1) list_loc_req_pane

0x3f1d,	// (0x00075fbb) scroll_pane_cp012

0x3f28,	// (0x00075fc6) list_single_loc_request_popup_menu_pane_ParamLimits

0x3f28,	// (0x00075fc6) list_single_loc_request_popup_menu_pane

0x3f35,	// (0x00075fd3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3f35,	// (0x00075fd3) list_single_loc_request_popup_menu_pane_g1

0x3f41,	// (0x00075fdf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3f41,	// (0x00075fdf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000813d9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000813d9) list_single_loc_request_popup_menu_pane_g

0x3f4d,	// (0x00075feb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3f4d,	// (0x00075feb) list_single_loc_request_popup_menu_pane_t1

0x1fc0,	// (0x0007405e) bg_popup_window_pane_cp03_ParamLimits

0x1fc0,	// (0x0007405e) bg_popup_window_pane_cp03

0x3f63,	// (0x00076001) heading_loc_req_pane_ParamLimits

0x3f63,	// (0x00076001) heading_loc_req_pane

0x3f6f,	// (0x0007600d) popup_dyc_status_message_window_g1_ParamLimits

0x3f6f,	// (0x0007600d) popup_dyc_status_message_window_g1

0x3f83,	// (0x00076021) popup_dyc_status_message_window_t1_ParamLimits

0x3f83,	// (0x00076021) popup_dyc_status_message_window_t1

0x3f98,	// (0x00076036) popup_dyc_status_message_window_t2_ParamLimits

0x3f98,	// (0x00076036) popup_dyc_status_message_window_t2

0x3fad,	// (0x0007604b) popup_dyc_status_message_window_t3_ParamLimits

0x3fad,	// (0x0007604b) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000813de) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000813de) popup_dyc_status_message_window_t

0x1d65,	// (0x00073e03) bg_heading_pane_cp01

0x3fc9,	// (0x00076067) heading_loc_req_pane_g1

0x3fd1,	// (0x0007606f) heading_loc_req_pane_g2

0x3fd9,	// (0x00076077) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x000813e5) heading_loc_req_pane_g

0x3fe1,	// (0x0007607f) heading_loc_req_pane_t1

0x4009,	// (0x000760a7) bg_popup_sub_pane_cp01_ParamLimits

0x4009,	// (0x000760a7) bg_popup_sub_pane_cp01

0x4017,	// (0x000760b5) popup_cale_events_window_g1_ParamLimits

0x4017,	// (0x000760b5) popup_cale_events_window_g1

0x4037,	// (0x000760d5) popup_cale_events_window_g2_ParamLimits

0x4037,	// (0x000760d5) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00081419) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00081419) popup_cale_events_window_g

0x4057,	// (0x000760f5) popup_cale_events_window_t1_ParamLimits

0x4057,	// (0x000760f5) popup_cale_events_window_t1

0x4069,	// (0x00076107) popup_cale_events_window_t2_ParamLimits

0x4069,	// (0x00076107) popup_cale_events_window_t2

0x40a7,	// (0x00076145) popup_cale_events_window_t3_ParamLimits

0x40a7,	// (0x00076145) popup_cale_events_window_t3

0x40e1,	// (0x0007617f) popup_cale_events_window_t4_ParamLimits

0x40e1,	// (0x0007617f) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0008141e) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0008141e) popup_cale_events_window_t

0x4117,	// (0x000761b5) call_type_pane

0x4127,	// (0x000761c5) popup_call_status_window_g1

0x413b,	// (0x000761d9) popup_call_status_window_g2

0x414f,	// (0x000761ed) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00081427) popup_call_status_window_g

0x415f,	// (0x000761fd) call_type_pane_g1

0x4168,	// (0x00076206) call_type_pane_g2

0x0001,

0xf390,	// (0x0008142e) call_type_pane_g

0x1d65,	// (0x00073e03) bg_popup_sub_pane_cp02

0x4171,	// (0x0007620f) listscroll_popup_wml_pane

0x4179,	// (0x00076217) list_wml_pane

0x4183,	// (0x00076221) scroll_pane_cp013

0x418e,	// (0x0007622c) list_single_graphic_popup_wml_pane_ParamLimits

0x418e,	// (0x0007622c) list_single_graphic_popup_wml_pane

0x2455,	// (0x000744f3) list_single_graphic_popup_wml_pane_g1

0x41a2,	// (0x00076240) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00081433) list_single_graphic_popup_wml_pane_g

0x41aa,	// (0x00076248) list_single_graphic_popup_wml_pane_t1

0x41c0,	// (0x0007625e) aid_call_pane

0x1fb8,	// (0x00074056) popup_clock_analogue_window_g1

0x1fb8,	// (0x00074056) popup_clock_analogue_window_g2

0xac80,	// (0x0007cd1e) popup_clock_analogue_window_g3

0xac80,	// (0x0007cd1e) popup_clock_analogue_window_g4

0x2455,	// (0x000744f3) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00081438) popup_clock_analogue_window_g

0xac88,	// (0x0007cd26) popup_clock_analogue_window_t1

0xac96,	// (0x0007cd34) clock_digital_number_pane_ParamLimits

0xac96,	// (0x0007cd34) clock_digital_number_pane

0xaca2,	// (0x0007cd40) clock_digital_number_pane_cp02_ParamLimits

0xaca2,	// (0x0007cd40) clock_digital_number_pane_cp02

0xacae,	// (0x0007cd4c) clock_digital_number_pane_cp03_ParamLimits

0xacae,	// (0x0007cd4c) clock_digital_number_pane_cp03

0xacba,	// (0x0007cd58) clock_digital_number_pane_cp04_ParamLimits

0xacba,	// (0x0007cd58) clock_digital_number_pane_cp04

0xacc6,	// (0x0007cd64) clock_digital_separator_pane_ParamLimits

0xacc6,	// (0x0007cd64) clock_digital_separator_pane

0xacd2,	// (0x0007cd70) popup_clock_digital_window_t1

0x2455,	// (0x000744f3) clock_digital_number_pane_g1

0x2455,	// (0x000744f3) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000813a6) clock_digital_number_pane_g

0x2455,	// (0x000744f3) clock_digital_separator_pane_g1

0x2455,	// (0x000744f3) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000813a6) clock_digital_separator_pane_g

0x1d65,	// (0x00073e03) bg_popup_window_pane_cp04

0x41c8,	// (0x00076266) heading_pane_cp03

0x41d0,	// (0x0007626e) listscroll_popup_gms_pane

0x41d8,	// (0x00076276) grid_large_graphic_popup_pane

0x41e2,	// (0x00076280) listscroll_popup_gms_pane_g1

0x41ea,	// (0x00076288) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00081443) listscroll_popup_gms_pane_g

0x328f,	// (0x0007532d) scroll_pane_cp014

0x41f2,	// (0x00076290) cell_large_graphic_popup_pane_ParamLimits

0x41f2,	// (0x00076290) cell_large_graphic_popup_pane

0x420a,	// (0x000762a8) cell_large_graphic_popup_pane_g1_ParamLimits

0x420a,	// (0x000762a8) cell_large_graphic_popup_pane_g1

0x4216,	// (0x000762b4) cell_large_graphic_popup_pane_g2_ParamLimits

0x4216,	// (0x000762b4) cell_large_graphic_popup_pane_g2

0x4222,	// (0x000762c0) cell_large_graphic_popup_pane_g3_ParamLimits

0x4222,	// (0x000762c0) cell_large_graphic_popup_pane_g3

0x422f,	// (0x000762cd) cell_large_graphic_popup_pane_g4_ParamLimits

0x422f,	// (0x000762cd) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00081448) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00081448) cell_large_graphic_popup_pane_g

0x423f,	// (0x000762dd) grid_highlight_pane_cp010

0x2455,	// (0x000744f3) bg_popup_call_pane_g1

0x4249,	// (0x000762e7) list_single_graphic_popup_conf_pane_ParamLimits

0x4249,	// (0x000762e7) list_single_graphic_popup_conf_pane

0x425b,	// (0x000762f9) list_highlight_pane_cp01

0x4264,	// (0x00076302) list_single_graphic_popup_conf_pane_g1

0x426c,	// (0x0007630a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00081451) list_single_graphic_popup_conf_pane_g

0x4274,	// (0x00076312) list_single_graphic_popup_conf_pane_t1

0x4282,	// (0x00076320) linegrid_cams_pane_g1

0x428b,	// (0x00076329) linegrid_cams_pane_g2

0x2a23,	// (0x00074ac1) linegrid_cams_pane_g3

0x4294,	// (0x00076332) linegrid_cams_pane_g4

0x429d,	// (0x0007633b) linegrid_cams_pane_g5

0x42a6,	// (0x00076344) linegrid_cams_pane_g6

0x2a2c,	// (0x00074aca) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00081456) linegrid_cams_pane_g

0x42b1,	// (0x0007634f) popup_clock_analogue_window

0x42b1,	// (0x0007634f) popup_clock_digital_window

0x1d65,	// (0x00073e03) popup_phob_thumbnail_window

0x2455,	// (0x000744f3) call_video_uplink_pane_g1

0x42ba,	// (0x00076358) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00081465) call_video_uplink_pane_g

0x42c2,	// (0x00076360) video_uplink_pane

0x42ca,	// (0x00076368) mce_image_pane_g1

0x42d4,	// (0x00076372) mce_image_pane_g2

0x42de,	// (0x0007637c) mce_image_pane_g3

0x42e8,	// (0x00076386) mce_image_pane_g4

0x42f0,	// (0x0007638e) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0008146a) mce_image_pane_g

0x42f8,	// (0x00076396) control_top_pane_stacon_cp01_ParamLimits

0x42f8,	// (0x00076396) control_top_pane_stacon_cp01

0x430c,	// (0x000763aa) uni_indicator_pane_stacon_cp01_ParamLimits

0x430c,	// (0x000763aa) uni_indicator_pane_stacon_cp01

0x431d,	// (0x000763bb) bg_popup_sub_pane_cp03

0x4327,	// (0x000763c5) chi_dic_find_pane

0x432f,	// (0x000763cd) listscroll_chi_dic_pane

0x4338,	// (0x000763d6) main_pane_chidic_g1

0x434b,	// (0x000763e9) chi_dic_find_pane_t1

0x4359,	// (0x000763f7) find_chidic_pane

0x4362,	// (0x00076400) chi_dic_list_pane_ParamLimits

0x4362,	// (0x00076400) chi_dic_list_pane

0x4373,	// (0x00076411) scroll_pane_cp020

0x437b,	// (0x00076419) find_chidic_pane_t1

0x1d65,	// (0x00073e03) input_focus_pane_cp06

0x438a,	// (0x00076428) list_chi_dic_pane_ParamLimits

0x438a,	// (0x00076428) list_chi_dic_pane

0x439c,	// (0x0007643a) list_chi_dic_pane_t1_ParamLimits

0x439c,	// (0x0007643a) list_chi_dic_pane_t1

0x1d65,	// (0x00073e03) list_highlight_pane_cp020

0x43af,	// (0x0007644d) bg_cale_heading_pane_g1

0x43b7,	// (0x00076455) bg_cale_heading_pane_g2

0x43bf,	// (0x0007645d) bg_cale_heading_pane_g3

0x43c7,	// (0x00076465) bg_cale_heading_pane_g4

0x43cf,	// (0x0007646d) bg_cale_heading_pane_g5

0x43d7,	// (0x00076475) bg_cale_heading_pane_g6

0x43df,	// (0x0007647d) bg_cale_heading_pane_g7

0x43e7,	// (0x00076485) bg_cale_heading_pane_g8

0x43ef,	// (0x0007648d) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00081475) bg_cale_heading_pane_g

0x43af,	// (0x0007644d) bg_cale_side_pane_g1

0x43f7,	// (0x00076495) bg_cale_side_pane_g2

0x4401,	// (0x0007649f) bg_cale_side_pane_g3

0x440b,	// (0x000764a9) bg_cale_side_pane_g4

0x4415,	// (0x000764b3) bg_cale_side_pane_g5

0x441f,	// (0x000764bd) bg_cale_side_pane_g6

0x4429,	// (0x000764c7) bg_cale_side_pane_g7

0x4433,	// (0x000764d1) bg_cale_side_pane_g8

0x443b,	// (0x000764d9) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00081488) bg_cale_side_pane_g

0x4443,	// (0x000764e1) popup_call_status_window_ParamLimits

0x4443,	// (0x000764e1) popup_call_status_window

0x4490,	// (0x0007652e) stacon_top_pane

0x4498,	// (0x00076536) status_pane_ParamLimits

0x4498,	// (0x00076536) status_pane

0x44ad,	// (0x0007654b) status_small_pane

0x44b5,	// (0x00076553) control_pane

0x1d65,	// (0x00073e03) stacon_bottom_pane

0x44bd,	// (0x0007655b) list_single_mce_smart_pane_t1_ParamLimits

0x44bd,	// (0x0007655b) list_single_mce_smart_pane_t1

0x44d0,	// (0x0007656e) list_single_mce_smart_pane_t2_ParamLimits

0x44d0,	// (0x0007656e) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0008149b) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0008149b) list_single_mce_smart_pane_t

0x44ef,	// (0x0007658d) compass_pane

0x44fa,	// (0x00076598) main_location2_pane_t1

0x4510,	// (0x000765ae) main_location2_pane_t2

0x4526,	// (0x000765c4) main_location2_pane_t3

0x0003,

0xf402,	// (0x000814a0) main_location2_pane_t

0x4574,	// (0x00076612) compass_pane_g1_ParamLimits

0x4574,	// (0x00076612) compass_pane_g1

0x4580,	// (0x0007661e) compass_pane_t1

0x458f,	// (0x0007662d) compass_pane_t2

0x0005,

0xf40b,	// (0x000814a9) compass_pane_t

0x45da,	// (0x00076678) text_secondary_cp61

0x4643,	// (0x000766e1) navi_pane_cams_g5

0x46bf,	// (0x0007675d) navi_pane_im_t1

0x46cd,	// (0x0007676b) navi_pane_mp_g1_ParamLimits

0x46cd,	// (0x0007676b) navi_pane_mp_g1

0x46e1,	// (0x0007677f) navi_pane_mp_g2_ParamLimits

0x46e1,	// (0x0007677f) navi_pane_mp_g2

0x46ed,	// (0x0007678b) navi_pane_mp_g3_ParamLimits

0x46ed,	// (0x0007678b) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000814bd) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000814bd) navi_pane_mp_g

0x46f9,	// (0x00076797) navi_pane_mp_t1

0x4707,	// (0x000767a5) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000814c4) navi_pane_mp_t

0x47b4,	// (0x00076852) navi_pane_vt_g1

0x46f9,	// (0x00076797) navi_pane_vt_t1

0x47bc,	// (0x0007685a) navi_slider_pane

0x47c4,	// (0x00076862) zooming_pane

0x47cc,	// (0x0007686a) navi_slider_pane_g1

0xacef,	// (0x0007cd8d) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000814cb) navi_slider_pane_g

0x47f0,	// (0x0007688e) aid_levels_zoom

0x47f8,	// (0x00076896) zooming_pane_g1

0x4800,	// (0x0007689e) zooming_pane_g2

0x4800,	// (0x0007689e) zooming_pane_g3

0x0002,

0xf43c,	// (0x000814da) zooming_pane_g

0x4808,	// (0x000768a6) level_10_zoom

0x4811,	// (0x000768af) level_11_zoom

0x481a,	// (0x000768b8) level_1_zoom

0x4823,	// (0x000768c1) level_2_zoom

0x482c,	// (0x000768ca) level_3_zoom

0x4835,	// (0x000768d3) level_4_zoom

0x483e,	// (0x000768dc) level_5_zoom

0x4847,	// (0x000768e5) level_6_zoom

0x4850,	// (0x000768ee) level_7_zoom

0x4859,	// (0x000768f7) level_8_zoom

0x4862,	// (0x00076900) level_9_zoom

0x4873,	// (0x00076911) popup_phob_thumbnail_window_g1

0x487b,	// (0x00076919) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x000814e1) popup_phob_thumbnail_window_g

0xbccd,	// (0x0007dd6b) level_1_location

0xbcd5,	// (0x0007dd73) level_2_location

0xbcdd,	// (0x0007dd7b) level_3_location

0xbce5,	// (0x0007dd83) level_4_location

0x47c4,	// (0x00076862) level_5_location

0x4883,	// (0x00076921) mce_icon_pane_g1

0x488b,	// (0x00076929) mce_icon_pane_g2

0x0001,

0xf448,	// (0x000814e6) mce_icon_pane_g

0x4893,	// (0x00076931) main_mup_pane_g1_ParamLimits

0x4893,	// (0x00076931) main_mup_pane_g1

0x48a9,	// (0x00076947) main_mup_pane_g2_ParamLimits

0x48a9,	// (0x00076947) main_mup_pane_g2

0x48c1,	// (0x0007695f) main_mup_pane_g3_ParamLimits

0x48c1,	// (0x0007695f) main_mup_pane_g3

0x48d9,	// (0x00076977) main_mup_pane_g4_ParamLimits

0x48d9,	// (0x00076977) main_mup_pane_g4

0x48eb,	// (0x00076989) main_mup_pane_g5_ParamLimits

0x48eb,	// (0x00076989) main_mup_pane_g5

0x4907,	// (0x000769a5) main_mup_pane_g6_ParamLimits

0x4907,	// (0x000769a5) main_mup_pane_g6

0x4921,	// (0x000769bf) main_mup_pane_g7_ParamLimits

0x4921,	// (0x000769bf) main_mup_pane_g7

0x493f,	// (0x000769dd) main_mup_pane_g8_ParamLimits

0x493f,	// (0x000769dd) main_mup_pane_g8

0x495d,	// (0x000769fb) main_mup_pane_g9_ParamLimits

0x495d,	// (0x000769fb) main_mup_pane_g9

0x4979,	// (0x00076a17) main_mup_pane_g10_ParamLimits

0x4979,	// (0x00076a17) main_mup_pane_g10

0x4997,	// (0x00076a35) main_mup_pane_g11_ParamLimits

0x4997,	// (0x00076a35) main_mup_pane_g11

0x49b1,	// (0x00076a4f) main_mup_pane_g12_ParamLimits

0x49b1,	// (0x00076a4f) main_mup_pane_g12

0x49c7,	// (0x00076a65) main_mup_pane_g13_ParamLimits

0x49c7,	// (0x00076a65) main_mup_pane_g13

0x000c,

0xf44d,	// (0x000814eb) main_mup_pane_g_ParamLimits

0xf44d,	// (0x000814eb) main_mup_pane_g

0x49db,	// (0x00076a79) main_mup_pane_t1_ParamLimits

0x49db,	// (0x00076a79) main_mup_pane_t1

0x49f7,	// (0x00076a95) main_mup_pane_t2_ParamLimits

0x49f7,	// (0x00076a95) main_mup_pane_t2

0x4a0f,	// (0x00076aad) main_mup_pane_t3_ParamLimits

0x4a0f,	// (0x00076aad) main_mup_pane_t3

0x4a27,	// (0x00076ac5) main_mup_pane_t4_ParamLimits

0x4a27,	// (0x00076ac5) main_mup_pane_t4

0x4a45,	// (0x00076ae3) main_mup_pane_t5_ParamLimits

0x4a45,	// (0x00076ae3) main_mup_pane_t5

0x4a5a,	// (0x00076af8) main_mup_pane_t6_ParamLimits

0x4a5a,	// (0x00076af8) main_mup_pane_t6

0x0005,

0xf468,	// (0x00081506) main_mup_pane_t_ParamLimits

0xf468,	// (0x00081506) main_mup_pane_t

0x4a6c,	// (0x00076b0a) mup_progress_pane_ParamLimits

0x4a6c,	// (0x00076b0a) mup_progress_pane

0x4a78,	// (0x00076b16) mup_visualizer_pane_ParamLimits

0x4a78,	// (0x00076b16) mup_visualizer_pane

0x4aac,	// (0x00076b4a) mup_volume_pane_ParamLimits

0x4aac,	// (0x00076b4a) mup_volume_pane

0x4aca,	// (0x00076b68) mup_visualizer_pane_g1_ParamLimits

0x4aca,	// (0x00076b68) mup_visualizer_pane_g1

0x4aca,	// (0x00076b68) mup_visualizer_pane_g2_ParamLimits

0x4aca,	// (0x00076b68) mup_visualizer_pane_g2

0x4574,	// (0x00076612) mup_visualizer_pane_g3_ParamLimits

0x4574,	// (0x00076612) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00081513) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00081513) mup_visualizer_pane_g

0x2455,	// (0x000744f3) mup_volume_pane_g1

0x4ae0,	// (0x00076b7e) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0008151a) mup_volume_pane_g

0x2455,	// (0x000744f3) mup_progress_pane_g1

0x4ae9,	// (0x00076b87) mup_progress_pane_g2

0x4af2,	// (0x00076b90) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0008151f) mup_progress_pane_g

0x1d65,	// (0x00073e03) bg_popup_window_pane_cp05

0x4afb,	// (0x00076b99) heading_pane_cp02_ParamLimits

0x4afb,	// (0x00076b99) heading_pane_cp02

0x4b17,	// (0x00076bb5) list_popup_blid_pane

0x4b1f,	// (0x00076bbd) list_blid_sat_info_pane_ParamLimits

0x4b1f,	// (0x00076bbd) list_blid_sat_info_pane

0x4b32,	// (0x00076bd0) list_blid_sat_info_pane_g1

0x4b3a,	// (0x00076bd8) list_blid_sat_info_pane_t1

0x4c54,	// (0x00076cf2) mup_equalizer_pane_ParamLimits

0x4c54,	// (0x00076cf2) mup_equalizer_pane

0x4c75,	// (0x00076d13) mup_equalizer_pane_cp1_ParamLimits

0x4c75,	// (0x00076d13) mup_equalizer_pane_cp1

0x4c96,	// (0x00076d34) mup_equalizer_pane_cp2_ParamLimits

0x4c96,	// (0x00076d34) mup_equalizer_pane_cp2

0x4cbb,	// (0x00076d59) mup_equalizer_pane_cp3_ParamLimits

0x4cbb,	// (0x00076d59) mup_equalizer_pane_cp3

0x4ce4,	// (0x00076d82) mup_equalizer_pane_cp4_ParamLimits

0x4ce4,	// (0x00076d82) mup_equalizer_pane_cp4

0x4d0d,	// (0x00076dab) mup_equalizer_pane_cp5

0x4d25,	// (0x00076dc3) mup_equalizer_pane_cp6

0x4d3d,	// (0x00076ddb) mup_equalizer_pane_cp7

0xbbe7,	// (0x0007dc85) bg_popup_call_poc_act_pane_g9

0xbbef,	// (0x0007dc8d) bg_popup_call_poc_act_pane_g10

0xbbf7,	// (0x0007dc95) bg_popup_call_poc_act_pane_g11

0x000a,

0x1fc0,	// (0x0007405e) mup_scale_pane

0x2455,	// (0x000744f3) mup_scale_pane_g1

0x4d55,	// (0x00076df3) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0008153b) mup_scale_pane_g

0x4d8b,	// (0x00076e29) msg_data_pane

0x4d93,	// (0x00076e31) scroll_pane_cp017

0x0d95,	// (0x00072e33) bg_list_pane_cp04_ParamLimits

0x0d95,	// (0x00072e33) bg_list_pane_cp04

0x4d9b,	// (0x00076e39) msg_data_pane_g1

0x4da3,	// (0x00076e41) msg_data_pane_g2

0x4dad,	// (0x00076e4b) msg_data_pane_g3

0x4db7,	// (0x00076e55) msg_data_pane_g4

0x4dbf,	// (0x00076e5d) msg_data_pane_g5

0x4dc7,	// (0x00076e65) msg_data_pane_g6

0x4dcf,	// (0x00076e6d) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0008154a) msg_data_pane_g

0x0dbd,	// (0x00072e5b) msg_text_pane_ParamLimits

0x0dbd,	// (0x00072e5b) msg_text_pane

0x4dd7,	// (0x00076e75) qrid_highlight_pane_cp011_ParamLimits

0x4dd7,	// (0x00076e75) qrid_highlight_pane_cp011

0x1d65,	// (0x00073e03) msg_body_pane

0x1d65,	// (0x00073e03) msg_header_pane

0x4df6,	// (0x00076e94) input_focus_pane_cp07

0x0df7,	// (0x00072e95) msg_header_pane_t1_ParamLimits

0x0df7,	// (0x00072e95) msg_header_pane_t1

0x0e0b,	// (0x00072ea9) msg_header_pane_t2_ParamLimits

0x0e0b,	// (0x00072ea9) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0008155e) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0008155e) msg_header_pane_t

0x4e0b,	// (0x00076ea9) msg_body_pane_g1

0x0e1d,	// (0x00072ebb) msg_body_pane_t1_ParamLimits

0x0e1d,	// (0x00072ebb) msg_body_pane_t1

0x0e4e,	// (0x00072eec) msg_body_pane_t2_ParamLimits

0x0e4e,	// (0x00072eec) msg_body_pane_t2

0x0e60,	// (0x00072efe) msg_body_pane_t3_ParamLimits

0x0e60,	// (0x00072efe) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00081563) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00081563) msg_body_pane_t

0x4e4d,	// (0x00076eeb) main_viewer_pane_g1_ParamLimits

0x4e4d,	// (0x00076eeb) main_viewer_pane_g1

0x4e5b,	// (0x00076ef9) main_viewer_pane_g2_ParamLimits

0x4e5b,	// (0x00076ef9) main_viewer_pane_g2

0x4e69,	// (0x00076f07) main_viewer_pane_g3_ParamLimits

0x4e69,	// (0x00076f07) main_viewer_pane_g3

0x4e78,	// (0x00076f16) main_viewer_pane_g4_ParamLimits

0x4e78,	// (0x00076f16) main_viewer_pane_g4

0xad19,	// (0x0007cdb7) main_viewer_pane_g5_ParamLimits

0xad19,	// (0x0007cdb7) main_viewer_pane_g5

0xad19,	// (0x0007cdb7) main_viewer_pane_g7_ParamLimits

0xad19,	// (0x0007cdb7) main_viewer_pane_g7

0xad2b,	// (0x0007cdc9) main_viewer_pane_g8_ParamLimits

0xad2b,	// (0x0007cdc9) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00081573) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00081573) main_viewer_pane_g

0x4e87,	// (0x00076f25) viewer_content_pane_ParamLimits

0x4e87,	// (0x00076f25) viewer_content_pane

0x4ec4,	// (0x00076f62) main_postcard_pane_g1_ParamLimits

0x4ec4,	// (0x00076f62) main_postcard_pane_g1

0x4eda,	// (0x00076f78) main_postcard_pane_g2_ParamLimits

0x4eda,	// (0x00076f78) main_postcard_pane_g2

0x4ef0,	// (0x00076f8e) main_postcard_pane_g3_ParamLimits

0x4ef0,	// (0x00076f8e) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00081584) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00081584) main_postcard_pane_g

0x4f07,	// (0x00076fa5) main_postcard_pane_g4

0xbe17,	// (0x0007deb5) smil_status_volume_pane_g2

0x4f4a,	// (0x00076fe8) postcard_pane_ParamLimits

0x4f4a,	// (0x00076fe8) postcard_pane

0x4f9a,	// (0x00077038) postcard_pane_g1_ParamLimits

0x4f9a,	// (0x00077038) postcard_pane_g1

0x4fa8,	// (0x00077046) postcard_pane_g2_ParamLimits

0x4fa8,	// (0x00077046) postcard_pane_g2

0x4fb4,	// (0x00077052) postcard_pane_g3_ParamLimits

0x4fb4,	// (0x00077052) postcard_pane_g3

0x4fc0,	// (0x0007705e) postcard_pane_g4_ParamLimits

0x4fc0,	// (0x0007705e) postcard_pane_g4

0x4fce,	// (0x0007706c) postcard_pane_g5_ParamLimits

0x4fce,	// (0x0007706c) postcard_pane_g5

0x4fe0,	// (0x0007707e) postcard_pane_g6_ParamLimits

0x4fe0,	// (0x0007707e) postcard_pane_g6

0x4f9a,	// (0x00077038) postcard_pane_g7_ParamLimits

0x4f9a,	// (0x00077038) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00081591) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00081591) postcard_pane_g

0x4ff8,	// (0x00077096) main_mp2_pane_g1_ParamLimits

0x4ff8,	// (0x00077096) main_mp2_pane_g1

0x5006,	// (0x000770a4) main_mp2_pane_g2_ParamLimits

0x5006,	// (0x000770a4) main_mp2_pane_g2

0x5012,	// (0x000770b0) main_mp2_pane_g3_ParamLimits

0x5012,	// (0x000770b0) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000815a0) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000815a0) main_mp2_pane_g

0x501e,	// (0x000770bc) main_mp2_pane_t1_ParamLimits

0x501e,	// (0x000770bc) main_mp2_pane_t1

0x5035,	// (0x000770d3) main_mp2_pane_t2_ParamLimits

0x5035,	// (0x000770d3) main_mp2_pane_t2

0x5049,	// (0x000770e7) main_mp2_pane_t3_ParamLimits

0x5049,	// (0x000770e7) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000815a7) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000815a7) main_mp2_pane_t

0x505b,	// (0x000770f9) pec_content_pane_ParamLimits

0x505b,	// (0x000770f9) pec_content_pane

0x328f,	// (0x0007532d) scroll_pane_cp015

0x506d,	// (0x0007710b) pec_attribute_pane_ParamLimits

0x506d,	// (0x0007710b) pec_attribute_pane

0x507d,	// (0x0007711b) pec_content_pane_g1_ParamLimits

0x507d,	// (0x0007711b) pec_content_pane_g1

0x5089,	// (0x00077127) pec_content_pane_t1_ParamLimits

0x5089,	// (0x00077127) pec_content_pane_t1

0x509b,	// (0x00077139) pec_content_pane_t2_ParamLimits

0x509b,	// (0x00077139) pec_content_pane_t2

0x0001,

0xf510,	// (0x000815ae) pec_content_pane_t_ParamLimits

0xf510,	// (0x000815ae) pec_content_pane_t

0x50ad,	// (0x0007714b) list_single_graphic_pane_cp01_ParamLimits

0x50ad,	// (0x0007714b) list_single_graphic_pane_cp01

0x1fc0,	// (0x0007405e) bg_popup_sub_pane_cp04

0x50c7,	// (0x00077165) popup_mup_playback_window_g1

0x50d3,	// (0x00077171) popup_mup_playback_window_t1

0x50e8,	// (0x00077186) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000815b3) popup_mup_playback_window_t

0x513d,	// (0x000771db) main_image_pane_g1_ParamLimits

0x513d,	// (0x000771db) main_image_pane_g1

0x521a,	// (0x000772b8) scroll_pane_cp018_ParamLimits

0x521a,	// (0x000772b8) scroll_pane_cp018

0x5232,	// (0x000772d0) scroll_pane_cp016_ParamLimits

0x5232,	// (0x000772d0) scroll_pane_cp016

0x5266,	// (0x00077304) smil2_image_pane_ParamLimits

0x5266,	// (0x00077304) smil2_image_pane

0x529c,	// (0x0007733a) smil2_root_pane_ParamLimits

0x529c,	// (0x0007733a) smil2_root_pane

0x52d4,	// (0x00077372) smil2_text_pane_ParamLimits

0x52d4,	// (0x00077372) smil2_text_pane

0x1d65,	// (0x00073e03) bg_list_pane_cp06

0x536c,	// (0x0007740a) grid_radio_pane

0x1d65,	// (0x00073e03) bg_popup_window_pane_cp06

0x5376,	// (0x00077414) main_fmradio_pane_t1

0x41c8,	// (0x00076266) heading_pane_cp04

0x5384,	// (0x00077422) main_fmradio_pane_t2

0xbbff,	// (0x0007dc9d) popup_cale_lunar_info_window_g1

0x5392,	// (0x00077430) main_fmradio_pane_t3

0xbc07,	// (0x0007dca5) popup_cale_lunar_info_window_g2

0x53a2,	// (0x00077440) main_fmradio_pane_t4

0x0001,

0x53b0,	// (0x0007744e) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0008168e) popup_cale_lunar_info_window_g

0xf52a,	// (0x000815c8) main_fmradio_pane_t

0x53be,	// (0x0007745c) wait_bar_pane_cp03

0x53c6,	// (0x00077464) cell_fmradio_pane_ParamLimits

0x53c6,	// (0x00077464) cell_fmradio_pane

0x4f9a,	// (0x00077038) cell_fmradio_pane_g1_ParamLimits

0x4f9a,	// (0x00077038) cell_fmradio_pane_g1

0x1d65,	// (0x00073e03) grid_highlight_pane_cp011

0x53db,	// (0x00077479) poc_content_pane_ParamLimits

0x53db,	// (0x00077479) poc_content_pane

0x53ed,	// (0x0007748b) scroll_pane_cp019

0x53f5,	// (0x00077493) popup_call_poc_act_window_ParamLimits

0x53f5,	// (0x00077493) popup_call_poc_act_window

0x5419,	// (0x000774b7) popup_call_poc_inact_window_ParamLimits

0x5419,	// (0x000774b7) popup_call_poc_inact_window

0xf5c7,	// (0x00081665) bg_popup_call_poc_act_pane_g

0xbb77,	// (0x0007dc15) bg_popup_call_poc_inact_pane_g1

0xbb7f,	// (0x0007dc1d) bg_popup_call_poc_inact_pane_g2

0x5432,	// (0x000774d0) popup_call_poc_act_window_g2

0xbb87,	// (0x0007dc25) bg_popup_call_poc_inact_pane_g3

0xbb8f,	// (0x0007dc2d) bg_popup_call_poc_inact_pane_g4

0xbb97,	// (0x0007dc35) bg_popup_call_poc_inact_pane_g5

0x543a,	// (0x000774d8) popup_call_poc_act_window_t1_ParamLimits

0x543a,	// (0x000774d8) popup_call_poc_act_window_t1

0x5462,	// (0x00077500) popup_call_poc_act_window_t2_ParamLimits

0x5462,	// (0x00077500) popup_call_poc_act_window_t2

0x548a,	// (0x00077528) popup_call_poc_act_window_t3_ParamLimits

0x548a,	// (0x00077528) popup_call_poc_act_window_t3

0x54b2,	// (0x00077550) popup_call_poc_act_window_t4_ParamLimits

0x54b2,	// (0x00077550) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000815d3) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000815d3) popup_call_poc_act_window_t

0xbb9f,	// (0x0007dc3d) bg_popup_call_poc_inact_pane_g6

0xbba7,	// (0x0007dc45) bg_popup_call_poc_inact_pane_g7

0xbbaf,	// (0x0007dc4d) bg_popup_call_poc_inact_pane_g8

0x54c4,	// (0x00077562) popup_call_poc_inact_window_g2

0xbbb7,	// (0x0007dc55) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00081652) bg_popup_call_poc_inact_pane_g

0x54cc,	// (0x0007756a) popup_call_poc_inact_window_t1_ParamLimits

0x54cc,	// (0x0007756a) popup_call_poc_inact_window_t1

0xad43,	// (0x0007cde1) popup_call_poc_inact_window_t2_ParamLimits

0xad43,	// (0x0007cde1) popup_call_poc_inact_window_t2

0xad58,	// (0x0007cdf6) popup_call_poc_inact_window_t3_ParamLimits

0xad58,	// (0x0007cdf6) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000815dc) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000815dc) popup_call_poc_inact_window_t

0xbd77,	// (0x0007de15) context_pane_ParamLimits

0x5d73,	// (0x00077e11) signal_pane_ParamLimits

0x47c4,	// (0x00076862) main_call2_pane

0xbd65,	// (0x0007de03) popup_phob_thumbnail2_window_ParamLimits

0xbd65,	// (0x0007de03) popup_phob_thumbnail2_window

0xad01,	// (0x0007cd9f) aid_hotspot_pointer_arrow_pane

0xad09,	// (0x0007cda7) aid_hotspot_pointer_hand_pane

0x5833,	// (0x000778d1) phob_pre_status_pane_g5

0x2a84,	// (0x00074b22) cams_zoom_pane_ParamLimits

0x2a93,	// (0x00074b31) image_vga_pane_ParamLimits

0x2aad,	// (0x00074b4b) main_camera_pane_g1_ParamLimits

0x2abf,	// (0x00074b5d) main_camera_pane_g2_ParamLimits

0x2acf,	// (0x00074b6d) main_camera_pane_g3_ParamLimits

0x2ae3,	// (0x00074b81) main_camera_pane_g4_ParamLimits

0x2af7,	// (0x00074b95) main_camera_pane_g5_ParamLimits

0x2b0b,	// (0x00074ba9) main_camera_pane_g6_ParamLimits

0x2b1f,	// (0x00074bbd) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000812db) main_camera_pane_g_ParamLimits

0x2b3f,	// (0x00074bdd) main_camera_pane_t1_ParamLimits

0x2b55,	// (0x00074bf3) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x000812ec) main_camera_pane_t_ParamLimits

0x1fc0,	// (0x0007405e) bg_popup_preview_window_pane_cp01_ParamLimits

0x1fc0,	// (0x0007405e) bg_popup_preview_window_pane_cp01

0xad6d,	// (0x0007ce0b) popup_phob_thumbnail2_window_g1_ParamLimits

0xad6d,	// (0x0007ce0b) popup_phob_thumbnail2_window_g1

0x1d65,	// (0x00073e03) call2_cli_visual_pane

0x54fc,	// (0x0007759a) popup_call2_audio_conf_window_ParamLimits

0x54fc,	// (0x0007759a) popup_call2_audio_conf_window

0x5524,	// (0x000775c2) popup_call2_audio_first_window_ParamLimits

0x5524,	// (0x000775c2) popup_call2_audio_first_window

0x55ba,	// (0x00077658) popup_call2_audio_in_window_ParamLimits

0x55ba,	// (0x00077658) popup_call2_audio_in_window

0x5606,	// (0x000776a4) popup_call2_audio_out_window_ParamLimits

0x5606,	// (0x000776a4) popup_call2_audio_out_window

0x5678,	// (0x00077716) popup_call2_audio_second_window_ParamLimits

0x5678,	// (0x00077716) popup_call2_audio_second_window

0x56de,	// (0x0007777c) popup_call2_audio_wait_window_ParamLimits

0x56de,	// (0x0007777c) popup_call2_audio_wait_window

0x1d65,	// (0x00073e03) bg_popup_call2_act_pane_cp03

0x1fa2,	// (0x00074040) list_conf_pane_cp

0xad79,	// (0x0007ce17) popup_call2_audio_conf_window_t1

0xad87,	// (0x0007ce25) list_single_graphic_popup_conf2_pane_ParamLimits

0xad87,	// (0x0007ce25) list_single_graphic_popup_conf2_pane

0x425b,	// (0x000762f9) list_highlight_pane_cp04

0xad9a,	// (0x0007ce38) list_single_graphic_popup_conf2_pane_g1

0x426c,	// (0x0007630a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x000815e3) list_single_graphic_popup_conf2_pane_g

0xada4,	// (0x0007ce42) list_single_graphic_popup_conf2_pane_t1

0xadb2,	// (0x0007ce50) bg_popup_call2_act_pane_cp01_ParamLimits

0xadb2,	// (0x0007ce50) bg_popup_call2_act_pane_cp01

0xae3c,	// (0x0007ceda) call_type_pane_cp05_ParamLimits

0xae3c,	// (0x0007ceda) call_type_pane_cp05

0xae90,	// (0x0007cf2e) popup_call2_audio_second_window_g1_ParamLimits

0xae90,	// (0x0007cf2e) popup_call2_audio_second_window_g1

0xaee4,	// (0x0007cf82) popup_call2_audio_second_window_g2_ParamLimits

0xaee4,	// (0x0007cf82) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x000815e8) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x000815e8) popup_call2_audio_second_window_g

0xaf49,	// (0x0007cfe7) popup_call2_audio_second_window_t1_ParamLimits

0xaf49,	// (0x0007cfe7) popup_call2_audio_second_window_t1

0xb004,	// (0x0007d0a2) popup_call2_audio_second_window_t2_ParamLimits

0xb004,	// (0x0007d0a2) popup_call2_audio_second_window_t2

0xb057,	// (0x0007d0f5) popup_call2_audio_second_window_t3_ParamLimits

0xb057,	// (0x0007d0f5) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x000815ef) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x000815ef) popup_call2_audio_second_window_t

0x1d65,	// (0x00073e03) bg_popup_call2_in_pane_cp02

0x1d6f,	// (0x00073e0d) call_type_pane_cp04

0x1d77,	// (0x00073e15) popup_call2_audio_wait_window_g1

0x1d7f,	// (0x00073e1d) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000811c8) popup_call2_audio_wait_window_g

0x1d87,	// (0x00073e25) popup_call2_audio_wait_window_t3

0xb14a,	// (0x0007d1e8) bg_popup_call2_act_pane_ParamLimits

0xb14a,	// (0x0007d1e8) bg_popup_call2_act_pane

0xb20a,	// (0x0007d2a8) call_type_pane_cp03_ParamLimits

0xb20a,	// (0x0007d2a8) call_type_pane_cp03

0xb26e,	// (0x0007d30c) popup_call2_audio_first_window_g1_ParamLimits

0xb26e,	// (0x0007d30c) popup_call2_audio_first_window_g1

0xb2de,	// (0x0007d37c) popup_call2_audio_first_window_g2_ParamLimits

0xb2de,	// (0x0007d37c) popup_call2_audio_first_window_g2

0x4aca,	// (0x00076b68) popup_call2_audio_first_window_g3_ParamLimits

0x4aca,	// (0x00076b68) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x000815f8) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x000815f8) popup_call2_audio_first_window_g

0xb3bc,	// (0x0007d45a) popup_call2_audio_first_window_t1_ParamLimits

0xb3bc,	// (0x0007d45a) popup_call2_audio_first_window_t1

0xb4bf,	// (0x0007d55d) popup_call2_audio_first_window_t4_ParamLimits

0xb4bf,	// (0x0007d55d) popup_call2_audio_first_window_t4

0xb5a2,	// (0x0007d640) popup_call2_audio_first_window_t5_ParamLimits

0xb5a2,	// (0x0007d640) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00081603) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00081603) popup_call2_audio_first_window_t

0x1fb8,	// (0x00074056) bg_popup_call2_act_pane_g1

0xbc11,	// (0x0007dcaf) popup_cale_lunar_info_window_t1

0xbc1f,	// (0x0007dcbd) popup_cale_lunar_info_window_t2

0xbc2d,	// (0x0007dccb) popup_cale_lunar_info_window_t3

0x1d65,	// (0x00073e03) bg_popup_call2_bubble_pane

0xb6a3,	// (0x0007d741) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6a3,	// (0x0007d741) bg_popup_call2_in_pane_cp01

0x1a1d,	// (0x00073abb) call_type_pane_cp02

0xb6eb,	// (0x0007d789) popup_call2_audio_out_window_g1_ParamLimits

0xb6eb,	// (0x0007d789) popup_call2_audio_out_window_g1

0xb717,	// (0x0007d7b5) popup_call2_audio_out_window_g2_ParamLimits

0xb717,	// (0x0007d7b5) popup_call2_audio_out_window_g2

0xb73f,	// (0x0007d7dd) popup_call2_audio_out_window_g3_ParamLimits

0xb73f,	// (0x0007d7dd) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0008160c) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0008160c) popup_call2_audio_out_window_g

0xb77a,	// (0x0007d818) popup_call2_audio_out_window_t1_ParamLimits

0xb77a,	// (0x0007d818) popup_call2_audio_out_window_t1

0xb7d9,	// (0x0007d877) popup_call2_audio_out_window_t2_ParamLimits

0xb7d9,	// (0x0007d877) popup_call2_audio_out_window_t2

0xb82d,	// (0x0007d8cb) popup_call2_audio_out_window_t3_ParamLimits

0xb82d,	// (0x0007d8cb) popup_call2_audio_out_window_t3

0xb843,	// (0x0007d8e1) popup_call2_audio_out_window_t4_ParamLimits

0xb843,	// (0x0007d8e1) popup_call2_audio_out_window_t4

0xb859,	// (0x0007d8f7) popup_call2_audio_out_window_t5_ParamLimits

0xb859,	// (0x0007d8f7) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00081615) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00081615) popup_call2_audio_out_window_t

0xb8bd,	// (0x0007d95b) bg_popup_call2_in_pane_ParamLimits

0xb8bd,	// (0x0007d95b) bg_popup_call2_in_pane

0xb919,	// (0x0007d9b7) popup_call2_audio_in_window_g1_ParamLimits

0xb919,	// (0x0007d9b7) popup_call2_audio_in_window_g1

0xb951,	// (0x0007d9ef) popup_call2_audio_in_window_g2_ParamLimits

0xb951,	// (0x0007d9ef) popup_call2_audio_in_window_g2

0xb989,	// (0x0007da27) popup_call2_audio_in_window_g3_ParamLimits

0xb989,	// (0x0007da27) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00081622) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00081622) popup_call2_audio_in_window_g

0xb9e1,	// (0x0007da7f) popup_call2_audio_in_window_t1_ParamLimits

0xb9e1,	// (0x0007da7f) popup_call2_audio_in_window_t1

0xba61,	// (0x0007daff) popup_call2_audio_in_window_t2_ParamLimits

0xba61,	// (0x0007daff) popup_call2_audio_in_window_t2

0xbae1,	// (0x0007db7f) popup_call2_audio_in_window_t3_ParamLimits

0xbae1,	// (0x0007db7f) popup_call2_audio_in_window_t3

0xbafb,	// (0x0007db99) popup_call2_audio_in_window_t4_ParamLimits

0xbafb,	// (0x0007db99) popup_call2_audio_in_window_t4

0xbb0d,	// (0x0007dbab) popup_call2_audio_in_window_t5_ParamLimits

0xbb0d,	// (0x0007dbab) popup_call2_audio_in_window_t5

0xbb22,	// (0x0007dbc0) popup_call2_audio_in_window_t6_ParamLimits

0xbb22,	// (0x0007dbc0) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0008162b) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0008162b) popup_call2_audio_in_window_t

0x1fb8,	// (0x00074056) bg_popup_call2_in_pane_g1

0xbc3b,	// (0x0007dcd9) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00081693) popup_cale_lunar_info_window_t

0x1fc0,	// (0x0007405e) bg_popup_call2_rect_pane_ParamLimits

0x1fc0,	// (0x0007405e) bg_popup_call2_rect_pane

0x1d65,	// (0x00073e03) call2_cli_visual_graphic_pane

0x1d65,	// (0x00073e03) call2_cli_visual_text_pane

0xbe2a,	// (0x0007dec8) smil_status_volume_pane_g3

0x0002,

0x2455,	// (0x000744f3) call2_cli_visual_graphic_pane_g1

0x2455,	// (0x000744f3) call2_cli_visual_graphic_pane_g2

0x2455,	// (0x000744f3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00081638) call2_cli_visual_graphic_pane_g

0xbb37,	// (0x0007dbd5) bg_popup_call2_rect_pane_g1

0x259b,	// (0x00074639) bg_popup_call2_rect_pane_g2

0xbb3f,	// (0x0007dbdd) bg_popup_call2_rect_pane_g3

0xbb47,	// (0x0007dbe5) bg_popup_call2_rect_pane_g4

0xbb4f,	// (0x0007dbed) bg_popup_call2_rect_pane_g5

0xbb57,	// (0x0007dbf5) bg_popup_call2_rect_pane_g6

0xbb5f,	// (0x0007dbfd) bg_popup_call2_rect_pane_g7

0xbb67,	// (0x0007dc05) bg_popup_call2_rect_pane_g8

0xbb6f,	// (0x0007dc0d) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008163f) bg_popup_call2_rect_pane_g

0xbb77,	// (0x0007dc15) bg_popup_call2_bubble_pane_g1

0xbb7f,	// (0x0007dc1d) bg_popup_call2_bubble_pane_g2

0xbb87,	// (0x0007dc25) bg_popup_call2_bubble_pane_g3

0xbb8f,	// (0x0007dc2d) bg_popup_call2_bubble_pane_g4

0xbb97,	// (0x0007dc35) bg_popup_call2_bubble_pane_g5

0xbb9f,	// (0x0007dc3d) bg_popup_call2_bubble_pane_g6

0xbba7,	// (0x0007dc45) bg_popup_call2_bubble_pane_g7

0xbbaf,	// (0x0007dc4d) bg_popup_call2_bubble_pane_g8

0xbbb7,	// (0x0007dc55) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00081652) bg_popup_call2_bubble_pane_g

0x25fd,	// (0x0007469b) aid_cale_week_size_cell_pane

0x2b6f,	// (0x00074c0d) aid_cams_cif_uncrop_pane_ParamLimits

0x2b6f,	// (0x00074c0d) aid_cams_cif_uncrop_pane

0x2d66,	// (0x00074e04) aid_cams_size_cell_ParamLimits

0x2d66,	// (0x00074e04) aid_cams_size_cell

0x2d7a,	// (0x00074e18) grid_cams_pane_ParamLimits

0x2d94,	// (0x00074e32) linegrid_cams_pane_ParamLimits

0x2eb5,	// (0x00074f53) call_video_pane_t1

0x2ec7,	// (0x00074f65) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0008133f) call_video_pane_t

0x34ef,	// (0x0007558d) aid_cale_month_size_cell_pane_ParamLimits

0x34ef,	// (0x0007558d) aid_cale_month_size_cell_pane

0xf63e,	// (0x000816dc) smil_status_volume_pane_g

0xbe37,	// (0x0007ded5) volume_smil_pane_ParamLimits

0xa986,	// (0x0007ca24) aid_popup2_width_pane

0x24f4,	// (0x00074592) cell_qdial_pane_g4_ParamLimits

0x24f4,	// (0x00074592) cell_qdial_pane_g4

0x4550,	// (0x000765ee) aid_blid_cardinal_pane_ParamLimits

0x4560,	// (0x000765fe) aid_blid_destination_pane_ParamLimits

0x4560,	// (0x000765fe) aid_blid_destination_pane

0x1fc0,	// (0x0007405e) bg_popup_call_poc_act_pane_ParamLimits

0x1fc0,	// (0x0007405e) bg_popup_call_poc_act_pane

0x1fc0,	// (0x0007405e) bg_popup_call_poc_inact_pane_ParamLimits

0x1fc0,	// (0x0007405e) bg_popup_call_poc_inact_pane

0xbbbf,	// (0x0007dc5d) bg_popup_call_poc_act_pane_g1

0xbbc7,	// (0x0007dc65) bg_popup_call_poc_act_pane_g2

0xbbcf,	// (0x0007dc6d) bg_popup_call_poc_act_pane_g3

0xbb8f,	// (0x0007dc2d) bg_popup_call_poc_act_pane_g4

0xbb97,	// (0x0007dc35) bg_popup_call_poc_act_pane_g5

0xbbd7,	// (0x0007dc75) bg_popup_call_poc_act_pane_g6

0xbba7,	// (0x0007dc45) bg_popup_call_poc_act_pane_g7

0xbbdf,	// (0x0007dc7d) bg_popup_call_poc_act_pane_g8

0x1d65,	// (0x00073e03) main_usb_pane

0xbd3c,	// (0x0007ddda) popup_cale_lunar_info_window

0x316b,	// (0x00075209) im_reading_pane_t1_ParamLimits

0x31aa,	// (0x00075248) list_im_pane_ParamLimits

0x31bb,	// (0x00075259) scroll_pane_cp07_ParamLimits

0x1d65,	// (0x00073e03) grid_highlight_pane_cp012

0x1fc0,	// (0x0007405e) mup_scale_pane_ParamLimits

0x4f9a,	// (0x00077038) main_usb_pane_g1_ParamLimits

0x4f9a,	// (0x00077038) main_usb_pane_g1

0x573f,	// (0x000777dd) main_usb_pane_g2_ParamLimits

0x573f,	// (0x000777dd) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0008167c) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0008167c) main_usb_pane_g

0x5755,	// (0x000777f3) main_usb_pane_t1_ParamLimits

0x5755,	// (0x000777f3) main_usb_pane_t1

0x5767,	// (0x00077805) main_usb_pane_t2_ParamLimits

0x5767,	// (0x00077805) main_usb_pane_t2

0x5779,	// (0x00077817) main_usb_pane_t3_ParamLimits

0x5779,	// (0x00077817) main_usb_pane_t3

0x578b,	// (0x00077829) main_usb_pane_t4_ParamLimits

0x578b,	// (0x00077829) main_usb_pane_t4

0x57a0,	// (0x0007783e) main_usb_pane_t5_ParamLimits

0x57a0,	// (0x0007783e) main_usb_pane_t5

0x57b5,	// (0x00077853) main_usb_pane_t6_ParamLimits

0x57b5,	// (0x00077853) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00081681) main_usb_pane_t_ParamLimits

0x44ef,	// (0x0007658d) aid_text_placing

0x44fa,	// (0x00076598) main_location2_pane_t1_ParamLimits

0x4510,	// (0x000765ae) main_location2_pane_t2_ParamLimits

0x4526,	// (0x000765c4) main_location2_pane_t3_ParamLimits

0x453c,	// (0x000765da) main_location2_pane_t4_ParamLimits

0x453c,	// (0x000765da) main_location2_pane_t4

0xf402,	// (0x000814a0) main_location2_pane_t_ParamLimits

0x209c,	// (0x0007413a) find_pinb_pane_g2_ParamLimits

0x209c,	// (0x0007413a) find_pinb_pane_g2

0x0001,

0xf150,	// (0x000811ee) find_pinb_pane_g_ParamLimits

0xf150,	// (0x000811ee) find_pinb_pane_g

0x20a8,	// (0x00074146) find_pinb_pane_t1_ParamLimits

0x20ba,	// (0x00074158) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x000811f3) find_pinb_pane_t_ParamLimits

0x1d65,	// (0x00073e03) main_call3_pane

0x3898,	// (0x00075936) cale_month_day_heading_pane_t1_ParamLimits

0x38f6,	// (0x00075994) cale_month_day_heading_pane_t2_ParamLimits

0x395b,	// (0x000759f9) cale_month_day_heading_pane_t3_ParamLimits

0x39c0,	// (0x00075a5e) cale_month_day_heading_pane_t4_ParamLimits

0x3a25,	// (0x00075ac3) cale_month_day_heading_pane_t5_ParamLimits

0x3a8a,	// (0x00075b28) cale_month_day_heading_pane_t6_ParamLimits

0x3aef,	// (0x00075b8d) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00081377) cale_month_day_heading_pane_t_ParamLimits

0x3cdd,	// (0x00075d7b) smil_status_volume_pane

0x4f6e,	// (0x0007700c) postcard_address_pane_ParamLimits

0x4f6e,	// (0x0007700c) postcard_address_pane

0x4f84,	// (0x00077022) postcard_message_pane_ParamLimits

0x4f84,	// (0x00077022) postcard_message_pane

0x5718,	// (0x000777b6) call2_cli_visual_pane_t1_ParamLimits

0x5718,	// (0x000777b6) call2_cli_visual_pane_t1

0x5f84,	// (0x00078022) postcard_message_pane_t1_ParamLimits

0x5f84,	// (0x00078022) postcard_message_pane_t1

0xbe4c,	// (0x0007deea) postcard_address_pane_t1_ParamLimits

0xbe4c,	// (0x0007deea) postcard_address_pane_t1

0x5f70,	// (0x0007800e) popup_call3_audio_in_window_ParamLimits

0x5f70,	// (0x0007800e) popup_call3_audio_in_window

0x5df5,	// (0x00077e93) bg_popup_call3_in_pane_ParamLimits

0x5df5,	// (0x00077e93) bg_popup_call3_in_pane

0x5e71,	// (0x00077f0f) popup_call3_audio_in_window_g1_ParamLimits

0x5e71,	// (0x00077f0f) popup_call3_audio_in_window_g1

0x5e91,	// (0x00077f2f) popup_call3_audio_in_window_g2_ParamLimits

0x5e91,	// (0x00077f2f) popup_call3_audio_in_window_g2

0x5eb1,	// (0x00077f4f) popup_call3_audio_in_window_g3_ParamLimits

0x5eb1,	// (0x00077f4f) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x000816e3) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x000816e3) popup_call3_audio_in_window_g

0x5ee2,	// (0x00077f80) popup_call3_audio_in_window_t1_ParamLimits

0x5ee2,	// (0x00077f80) popup_call3_audio_in_window_t1

0x5f20,	// (0x00077fbe) popup_call3_audio_in_window_t2_ParamLimits

0x5f20,	// (0x00077fbe) popup_call3_audio_in_window_t2

0x5f5e,	// (0x00077ffc) popup_call3_audio_in_window_t3_ParamLimits

0x5f5e,	// (0x00077ffc) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x000816ec) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x000816ec) popup_call3_audio_in_window_t

0x47c4,	// (0x00076862) bg_popup_call3_rect_pane

0xbb37,	// (0x0007dbd5) bg_popup_call3_rect_pane_g1

0x259b,	// (0x00074639) bg_popup_call3_rect_pane_g2

0xbb3f,	// (0x0007dbdd) bg_popup_call3_rect_pane_g3

0xbb47,	// (0x0007dbe5) bg_popup_call3_rect_pane_g4

0xbb4f,	// (0x0007dbed) bg_popup_call3_rect_pane_g5

0xbb57,	// (0x0007dbf5) bg_popup_call3_rect_pane_g6

0xbb5f,	// (0x0007dbfd) bg_popup_call3_rect_pane_g7

0x4ac2,	// (0x00076b60) mup_visualizer_osc_pane

0x4ad8,	// (0x00076b76) mup_visualizer_spec_pane

0x5e25,	// (0x00077ec3) call3_video_qcif_pane_ParamLimits

0x5e25,	// (0x00077ec3) call3_video_qcif_pane

0x5e38,	// (0x00077ed6) call3_video_qcif_uncrop_pane_ParamLimits

0x5e38,	// (0x00077ed6) call3_video_qcif_uncrop_pane

0x5e48,	// (0x00077ee6) call3_video_subqcif_pane_ParamLimits

0x5e48,	// (0x00077ee6) call3_video_subqcif_pane

0x5e5e,	// (0x00077efc) call3_video_subqcif_uncrop_pane_ParamLimits

0x5e5e,	// (0x00077efc) call3_video_subqcif_uncrop_pane

0x5ed1,	// (0x00077f6f) popup_call3_audio_in_window_g4_ParamLimits

0x5ed1,	// (0x00077f6f) popup_call3_audio_in_window_g4

0x5de4,	// (0x00077e82) mup_spec_half_pane

0x5ded,	// (0x00077e8b) mup_spec_half_pane_cp

0xbdea,	// (0x0007de88) mup_osc_middle_pane

0xbdf3,	// (0x0007de91) mup_visualizer_osc_pane_g1

0x5dc4,	// (0x00077e62) mup_spec_bar_pane_ParamLimits

0x5dc4,	// (0x00077e62) mup_spec_bar_pane

0xbdd7,	// (0x0007de75) mup_spec_bar_pane_g1

0xbde1,	// (0x0007de7f) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x000816d7) mup_spec_bar_pane_g

0x25fd,	// (0x0007469b) aid_cale_week_size_cell_pane_ParamLimits

0x2610,	// (0x000746ae) bg_cale_heading_pane_ParamLimits

0x262c,	// (0x000746ca) bg_cale_pane_cp01_ParamLimits

0x2645,	// (0x000746e3) cale_week_corner_pane_ParamLimits

0x265b,	// (0x000746f9) cale_week_day_heading_pane_ParamLimits

0x2677,	// (0x00074715) cale_week_scroll_pane_g1_ParamLimits

0x2690,	// (0x0007472e) cale_week_scroll_pane_g2_ParamLimits

0x26a1,	// (0x0007473f) cale_week_scroll_pane_g3_ParamLimits

0x26b2,	// (0x00074750) cale_week_scroll_pane_g4_ParamLimits

0x26c3,	// (0x00074761) cale_week_scroll_pane_g5_ParamLimits

0x26d4,	// (0x00074772) cale_week_scroll_pane_g6_ParamLimits

0x26e5,	// (0x00074783) cale_week_scroll_pane_g7_ParamLimits

0x26f6,	// (0x00074794) cale_week_scroll_pane_g8_ParamLimits

0x2707,	// (0x000747a5) cale_week_scroll_pane_g9_ParamLimits

0x2718,	// (0x000747b6) cale_week_scroll_pane_g10_ParamLimits

0x2729,	// (0x000747c7) cale_week_scroll_pane_g11_ParamLimits

0x273a,	// (0x000747d8) cale_week_scroll_pane_g12_ParamLimits

0x274b,	// (0x000747e9) cale_week_scroll_pane_g13_ParamLimits

0x2764,	// (0x00074802) cale_week_scroll_pane_g14_ParamLimits

0x277d,	// (0x0007481b) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0008127f) cale_week_scroll_pane_g_ParamLimits

0x2796,	// (0x00074834) cale_week_time_pane_ParamLimits

0x27a7,	// (0x00074845) grid_cale_week_pane_ParamLimits

0x27c2,	// (0x00074860) listscroll_cale_week_pane_t1

0x27d4,	// (0x00074872) scroll_pane_cp08_ParamLimits

0x3563,	// (0x00075601) cale_month_corner_pane_ParamLimits

0x3847,	// (0x000758e5) cale_month_pane_t1

0x3859,	// (0x000758f7) cale_month_week_pane_ParamLimits

0x4127,	// (0x000761c5) popup_call_status_window_g1_ParamLimits

0x413b,	// (0x000761d9) popup_call_status_window_g2_ParamLimits

0x414f,	// (0x000761ed) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00081427) popup_call_status_window_g_ParamLimits

0x41b8,	// (0x00076256) aid_call2_pane

0x0de9,	// (0x00072e87) msg_header_pane_g1

0x4f6e,	// (0x0007700c) postcard_address2_pane_ParamLimits

0x4f6e,	// (0x0007700c) postcard_address2_pane

0x4f84,	// (0x00077022) postcard_message2_pane_ParamLimits

0x4f84,	// (0x00077022) postcard_message2_pane

0x5d81,	// (0x00077e1f) message2_row_pane_ParamLimits

0x5d81,	// (0x00077e1f) message2_row_pane

0xbd92,	// (0x0007de30) address2_row_pane_ParamLimits

0xbd92,	// (0x0007de30) address2_row_pane

0xbda5,	// (0x0007de43) postcard_message2_row_pane_g1

0xbdad,	// (0x0007de4b) postcard_message2_row_pane_t1

0xbda5,	// (0x0007de43) address2_row_pane_g1

0xbdad,	// (0x0007de4b) address2_row_pane_t1

0x2a3d,	// (0x00074adb) aid_size_cell_vorec

0x1d65,	// (0x00073e03) main_rss_pane

0x5da4,	// (0x00077e42) rss_list_single_pane_ParamLimits

0x5da4,	// (0x00077e42) rss_list_single_pane

0xbdbb,	// (0x0007de59) rss_list_single_pane_t1

0xbdc9,	// (0x0007de67) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x000816d2) rss_list_single_pane_t

0x1d65,	// (0x00073e03) main_camera2_pane

0x1d65,	// (0x00073e03) main_video2_pane

0x5ff3,	// (0x00078091) cams_zoom_pane_cp2_ParamLimits

0x5ff3,	// (0x00078091) cams_zoom_pane_cp2

0x600a,	// (0x000780a8) image2_vga_pane_ParamLimits

0x600a,	// (0x000780a8) image2_vga_pane

0x6052,	// (0x000780f0) main_camera2_pane_g1_ParamLimits

0x6052,	// (0x000780f0) main_camera2_pane_g1

0x6072,	// (0x00078110) main_camera2_pane_g2_ParamLimits

0x6072,	// (0x00078110) main_camera2_pane_g2

0x6089,	// (0x00078127) main_camera2_pane_g3_ParamLimits

0x6089,	// (0x00078127) main_camera2_pane_g3

0x60a0,	// (0x0007813e) main_camera2_pane_g4_ParamLimits

0x60a0,	// (0x0007813e) main_camera2_pane_g4

0x60b7,	// (0x00078155) main_camera2_pane_g5_ParamLimits

0x60b7,	// (0x00078155) main_camera2_pane_g5

0x60ce,	// (0x0007816c) main_camera2_pane_g6_ParamLimits

0x60ce,	// (0x0007816c) main_camera2_pane_g6

0x60e5,	// (0x00078183) main_camera2_pane_g7_ParamLimits

0x60e5,	// (0x00078183) main_camera2_pane_g7

0x60fc,	// (0x0007819a) main_camera2_pane_g8_ParamLimits

0x60fc,	// (0x0007819a) main_camera2_pane_g8

0x0008,

0xf655,	// (0x000816f3) main_camera2_pane_g_ParamLimits

0xf655,	// (0x000816f3) main_camera2_pane_g

0x612a,	// (0x000781c8) main_camera2_pane_t1_ParamLimits

0x612a,	// (0x000781c8) main_camera2_pane_t1

0x615f,	// (0x000781fd) main_camera2_pane_t2_ParamLimits

0x615f,	// (0x000781fd) main_camera2_pane_t2

0x617c,	// (0x0007821a) main_camera2_pane_t3_ParamLimits

0x617c,	// (0x0007821a) main_camera2_pane_t3

0x61da,	// (0x00078278) main_camera2_pane_t4_ParamLimits

0x61da,	// (0x00078278) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00081706) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00081706) main_camera2_pane_t

0x6263,	// (0x00078301) cams_zoom_pane_cp4_ParamLimits

0x6263,	// (0x00078301) cams_zoom_pane_cp4

0x6279,	// (0x00078317) image2_cif_pane_ParamLimits

0x6279,	// (0x00078317) image2_cif_pane

0x62a4,	// (0x00078342) image2_subqcif_pane_ParamLimits

0x62a4,	// (0x00078342) image2_subqcif_pane

0x62bf,	// (0x0007835d) main_video2_pane_g1_ParamLimits

0x62bf,	// (0x0007835d) main_video2_pane_g1

0x62d9,	// (0x00078377) main_video2_pane_g2_ParamLimits

0x62d9,	// (0x00078377) main_video2_pane_g2

0x62ef,	// (0x0007838d) main_video2_pane_g3_ParamLimits

0x62ef,	// (0x0007838d) main_video2_pane_g3

0x6305,	// (0x000783a3) main_video2_pane_g4_ParamLimits

0x6305,	// (0x000783a3) main_video2_pane_g4

0x631b,	// (0x000783b9) main_video2_pane_g5_ParamLimits

0x631b,	// (0x000783b9) main_video2_pane_g5

0x6331,	// (0x000783cf) main_video2_pane_g6_ParamLimits

0x6331,	// (0x000783cf) main_video2_pane_g6

0x0005,

0xf677,	// (0x00081715) main_video2_pane_g_ParamLimits

0xf677,	// (0x00081715) main_video2_pane_g

0x634b,	// (0x000783e9) main_video2_pane_t1_ParamLimits

0x634b,	// (0x000783e9) main_video2_pane_t1

0x636f,	// (0x0007840d) main_video2_pane_t2_ParamLimits

0x636f,	// (0x0007840d) main_video2_pane_t2

0x63bf,	// (0x0007845d) main_video2_pane_t3_ParamLimits

0x63bf,	// (0x0007845d) main_video2_pane_t3

0x0002,

0xf684,	// (0x00081722) main_video2_pane_t_ParamLimits

0xf684,	// (0x00081722) main_video2_pane_t

0x5873,	// (0x00077911) call_muted_g2

0x0001,

0xf626,	// (0x000816c4) call_muted_g

0x1d65,	// (0x00073e03) main_mup2_pane

0x6407,	// (0x000784a5) main_mup2_pane_g1_ParamLimits

0x6407,	// (0x000784a5) main_mup2_pane_g1

0x6413,	// (0x000784b1) main_mup2_pane_g2_ParamLimits

0x6413,	// (0x000784b1) main_mup2_pane_g2

0xe907,	// (0x000809a5) main_mup_pane_g13_cp1

0xe90f,	// (0x000809ad) mup_volume_pane_cp1

0x6431,	// (0x000784cf) main_mup2_pane_g4_ParamLimits

0x6431,	// (0x000784cf) main_mup2_pane_g4

0x6443,	// (0x000784e1) main_mup2_pane_g5_ParamLimits

0x6443,	// (0x000784e1) main_mup2_pane_g5

0x6455,	// (0x000784f3) main_mup2_pane_g6_ParamLimits

0x6455,	// (0x000784f3) main_mup2_pane_g6

0x6467,	// (0x00078505) main_mup2_pane_g7_ParamLimits

0x6467,	// (0x00078505) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00081729) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00081729) main_mup2_pane_g

0x647f,	// (0x0007851d) main_mup2_pane_t1_ParamLimits

0x647f,	// (0x0007851d) main_mup2_pane_t1

0x6495,	// (0x00078533) main_mup2_pane_t2_ParamLimits

0x6495,	// (0x00078533) main_mup2_pane_t2

0x64ab,	// (0x00078549) main_mup2_pane_t3_ParamLimits

0x64ab,	// (0x00078549) main_mup2_pane_t3

0x64c1,	// (0x0007855f) main_mup2_pane_t4_ParamLimits

0x64c1,	// (0x0007855f) main_mup2_pane_t4

0x64d9,	// (0x00078577) main_mup2_pane_t5_ParamLimits

0x64d9,	// (0x00078577) main_mup2_pane_t5

0x64f1,	// (0x0007858f) main_mup2_pane_t6_ParamLimits

0x64f1,	// (0x0007858f) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00081738) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00081738) main_mup2_pane_t

0x6521,	// (0x000785bf) mup2_visualizer_pane_ParamLimits

0x6521,	// (0x000785bf) mup2_visualizer_pane

0x654f,	// (0x000785ed) mup_progress_pane_cp_ParamLimits

0x654f,	// (0x000785ed) mup_progress_pane_cp

0xe8f2,	// (0x00080990) mup_volume_pane_cp_ParamLimits

0xe8f2,	// (0x00080990) mup_volume_pane_cp

0x6565,	// (0x00078603) mup2_visualizer_pane_g1_ParamLimits

0x6565,	// (0x00078603) mup2_visualizer_pane_g1

0xbe8e,	// (0x0007df2c) mup2_visualizer_pane_g2_ParamLimits

0xbe8e,	// (0x0007df2c) mup2_visualizer_pane_g2

0x657a,	// (0x00078618) mup2_visualizer_pane_g3_ParamLimits

0x657a,	// (0x00078618) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00081745) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00081745) mup2_visualizer_pane_g

0x5364,	// (0x00077402) aid_size_cell_fmradio

0x5a23,	// (0x00077ac1) aid_height_parent_landcape

0x3276,	// (0x00075314) wml_content_pane_cp

0x327e,	// (0x0007531c) wml_tabs_pane

0x3287,	// (0x00075325) popup_wml_miniature_window

0x328f,	// (0x0007532d) scroll_pane_cp021

0x32a3,	// (0x00075341) wml_content_pane_comp8

0x1d65,	// (0x00073e03) bg_popup_sub_pane_cp05

0xbeac,	// (0x0007df4a) popup_wml_miniature_window_g1

0xbeb4,	// (0x0007df52) wml_miniature_view_pane

0x6586,	// (0x00078624) aid_size_wml_view

0x658e,	// (0x0007862c) wml_miniature_view_pane_g1

0x6597,	// (0x00078635) wml_miniature_view_pane_g2

0x65a0,	// (0x0007863e) wml_miniature_view_pane_g3

0x65a8,	// (0x00078646) wml_miniature_view_pane_g4

0x65b0,	// (0x0007864e) wml_miniature_view_pane_g5

0x65b8,	// (0x00078656) wml_miniature_view_pane_g6

0x65c0,	// (0x0007865e) wml_miniature_view_pane_g7

0x65c8,	// (0x00078666) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0008174c) wml_miniature_view_pane_g

0xbebc,	// (0x0007df5a) background_graphic_ParamLimits

0xbebc,	// (0x0007df5a) background_graphic

0xbec8,	// (0x0007df66) wml_tabs_2_pane

0xbed1,	// (0x0007df6f) wml_tabs_3_pane_ParamLimits

0xbed1,	// (0x0007df6f) wml_tabs_3_pane

0xbee3,	// (0x0007df81) wml_tabs_4_pane_ParamLimits

0xbee3,	// (0x0007df81) wml_tabs_4_pane

0xbef9,	// (0x0007df97) wml_tabs_5_pane_ParamLimits

0xbef9,	// (0x0007df97) wml_tabs_5_pane

0xbf13,	// (0x0007dfb1) wml_tabs_pane_g2_ParamLimits

0xbf13,	// (0x0007dfb1) wml_tabs_pane_g2

0xbf27,	// (0x0007dfc5) wml_tabs_pane_g3_ParamLimits

0xbf27,	// (0x0007dfc5) wml_tabs_pane_g3

0x65d0,	// (0x0007866e) wml_tabs_2_active_pane_ParamLimits

0x65d0,	// (0x0007866e) wml_tabs_2_active_pane

0x65e4,	// (0x00078682) wml_tabs_2_passive_pane_ParamLimits

0x65e4,	// (0x00078682) wml_tabs_2_passive_pane

0x65f8,	// (0x00078696) wml_tabs_3_active_pane_cp_ParamLimits

0x65f8,	// (0x00078696) wml_tabs_3_active_pane_cp

0x660d,	// (0x000786ab) wml_tabs_3_passive_pane_ParamLimits

0x660d,	// (0x000786ab) wml_tabs_3_passive_pane

0x6620,	// (0x000786be) wml_tabs_3_passive_pane_cp_ParamLimits

0x6620,	// (0x000786be) wml_tabs_3_passive_pane_cp

0x6637,	// (0x000786d5) tabs_4_active_pane

0x663f,	// (0x000786dd) tabs_4_passive_pane

0x6649,	// (0x000786e7) tabs_4_passive_pane_cp

0x6651,	// (0x000786ef) tabs_4_passive_pane_cp2

0x5737,	// (0x000777d5) aid_height_text

0x4a94,	// (0x00076b32) mup_volume_cont_pane_ParamLimits

0x4a94,	// (0x00076b32) mup_volume_cont_pane

0x2056,	// (0x000740f4) aid_size_cell_pinb

0x2060,	// (0x000740fe) aid_size_list_pinb

0x653b,	// (0x000785d9) mup2_volume_cont_pane_ParamLimits

0x653b,	// (0x000785d9) mup2_volume_cont_pane

0xe8de,	// (0x0008097c) mup2_volume_cont_pane_g1_ParamLimits

0xe8de,	// (0x0008097c) mup2_volume_cont_pane_g1

0x1674,	// (0x00073712) aid_size_cell_touch_ParamLimits

0x1674,	// (0x00073712) aid_size_cell_touch

0x18a7,	// (0x00073945) touch_pane_ParamLimits

0x18a7,	// (0x00073945) touch_pane

0xa974,	// (0x0007ca12) main_rss2_pane

0xbf44,	// (0x0007dfe2) listscroll_rss2_pane

0xbf4d,	// (0x0007dfeb) rss2_navigation_pane

0xbf55,	// (0x0007dff3) list_rss2_pane

0x4373,	// (0x00076411) scroll_pane_cp22

0xbf5d,	// (0x0007dffb) rss2_navigation_pane_g1

0xbf66,	// (0x0007e004) rss2_navigation_pane_g2

0xbf6e,	// (0x0007e00c) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0008175d) rss2_navigation_pane_g

0xbf76,	// (0x0007e014) rss2_navigation_pane_t1

0x665b,	// (0x000786f9) rss2_list_single_pane_ParamLimits

0x665b,	// (0x000786f9) rss2_list_single_pane

0xbf84,	// (0x0007e022) rss2_list_single_pane_t2

0xbf92,	// (0x0007e030) rss2_list_single_pane_t3_ParamLimits

0xbf92,	// (0x0007e030) rss2_list_single_pane_t3

0xbfaf,	// (0x0007e04d) rss2_list_single_pane_t4

0x3cc5,	// (0x00075d63) smil_status_pane_g1

0x188d,	// (0x0007392b) main_image2_pane_ParamLimits

0x188d,	// (0x0007392b) main_image2_pane

0x6113,	// (0x000781b1) main_camera2_pane_g9_ParamLimits

0x6113,	// (0x000781b1) main_camera2_pane_g9

0x622f,	// (0x000782cd) main_camera2_pane_t5_ParamLimits

0x622f,	// (0x000782cd) main_camera2_pane_t5

0xbe63,	// (0x0007df01) main_camera2_pane_t6_ParamLimits

0xbe63,	// (0x0007df01) main_camera2_pane_t6

0x6675,	// (0x00078713) main_image2_pane_g1_ParamLimits

0x6675,	// (0x00078713) main_image2_pane_g1

0x530e,	// (0x000773ac) smil2_video_pane_ParamLimits

0x530e,	// (0x000773ac) smil2_video_pane

0xa9a2,	// (0x0007ca40) aid_zoom_text_primary_cp

0x1849,	// (0x000738e7) popup_preview_fixed_window

0x3163,	// (0x00075201) im_reading_pane_g1

0x5fe5,	// (0x00078083) cams2_bc_adjust_pane_cp_ParamLimits

0x5fe5,	// (0x00078083) cams2_bc_adjust_pane_cp

0x6255,	// (0x000782f3) cams2_bc_adjust_pane_ParamLimits

0x6255,	// (0x000782f3) cams2_bc_adjust_pane

0xe917,	// (0x000809b5) cams2_bc_adjust_pane_g1

0xe91f,	// (0x000809bd) cams2_slider_pane

0xe928,	// (0x000809c6) cams2_slider_pane_g1

0xe931,	// (0x000809cf) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00081764) cams2_slider_pane_g

0x21a7,	// (0x00074245) calc_display_pane_ParamLimits

0x21cd,	// (0x0007426b) calc_paper_pane_ParamLimits

0x21f0,	// (0x0007428e) grid_calc_pane_ParamLimits

0xacd2,	// (0x0007cd70) popup_clock_digital_window_t1_ParamLimits

0x518b,	// (0x00077229) main_image_pane_t1

0x2189,	// (0x00074227) aid_size_cell_calc_ParamLimits

0x2189,	// (0x00074227) aid_size_cell_calc

0x5a69,	// (0x00077b07) popup_blid_sat_info2_window_ParamLimits

0x5a69,	// (0x00077b07) popup_blid_sat_info2_window

0xbfc5,	// (0x0007e063) aid_size_cell_blid

0xbfcd,	// (0x0007e06b) bg_popup_window_pane_cp07

0xbff0,	// (0x0007e08e) grid_popup_blid_pane

0xbffa,	// (0x0007e098) heading_pane_cp05_ParamLimits

0xbffa,	// (0x0007e098) heading_pane_cp05

0xc0c4,	// (0x0007e162) cell_popup_blid_pane_ParamLimits

0xc0c4,	// (0x0007e162) cell_popup_blid_pane

0xc0ee,	// (0x0007e18c) cell_popup_blid_pane_g1

0xc0f6,	// (0x0007e194) cell_popup_blid_pane_t1

0x650b,	// (0x000785a9) mup2_indicator_pane_ParamLimits

0x650b,	// (0x000785a9) mup2_indicator_pane

0x47c4,	// (0x00076862) mup2_visualizer_osc_pane

0xbe9a,	// (0x0007df38) mup2_visualizer_spec_pane_ParamLimits

0xbe9a,	// (0x0007df38) mup2_visualizer_spec_pane

0x668b,	// (0x00078729) mup2_spec_half_pane

0x6694,	// (0x00078732) mup2_spec_half_pane_cp

0x669c,	// (0x0007873a) mup2_spec_bar_pane_ParamLimits

0x669c,	// (0x0007873a) mup2_spec_bar_pane

0xbdd7,	// (0x0007de75) mup2_spec_bar_pane_g1

0xbde1,	// (0x0007de7f) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x000816d7) mup2_spec_bar_pane_g

0x66bc,	// (0x0007875a) mup2_osc_middle_pane

0xbdf3,	// (0x0007de91) mup2_visualizer_osc_pane_g1

0x1919,	// (0x000739b7) popup_number_entry_window_t1_ParamLimits

0x192c,	// (0x000739ca) popup_number_entry_window_t2_ParamLimits

0x193e,	// (0x000739dc) popup_number_entry_window_t3_ParamLimits

0x1950,	// (0x000739ee) popup_number_entry_window_t5_ParamLimits

0x1950,	// (0x000739ee) popup_number_entry_window_t5

0xf0fb,	// (0x00081199) popup_number_entry_window_t_ParamLimits

0x1985,	// (0x00073a23) text_title_cp2_ParamLimits

0xad11,	// (0x0007cdaf) aid_hotspot_pointer_text2_pane

0xad37,	// (0x0007cdd5) main_viewer_pane_g9_ParamLimits

0xad37,	// (0x0007cdd5) main_viewer_pane_g9

0x3847,	// (0x000758e5) cale_month_pane_t1_ParamLimits

0x3d50,	// (0x00075dee) bg_cale_pane_ParamLimits

0x3d68,	// (0x00075e06) list_cale_pane_ParamLimits

0x27c2,	// (0x00074860) listscroll_cale_day_pane_t1

0x3d79,	// (0x00075e17) scroll_pane_cp09_ParamLimits

0x4b48,	// (0x00076be6) main_mup_eq_pane_t1_ParamLimits

0x4b48,	// (0x00076be6) main_mup_eq_pane_t1

0x4b64,	// (0x00076c02) main_mup_eq_pane_t2_ParamLimits

0x4b64,	// (0x00076c02) main_mup_eq_pane_t2

0x4b80,	// (0x00076c1e) main_mup_eq_pane_t3_ParamLimits

0x4b80,	// (0x00076c1e) main_mup_eq_pane_t3

0x4b9e,	// (0x00076c3c) main_mup_eq_pane_t4_ParamLimits

0x4b9e,	// (0x00076c3c) main_mup_eq_pane_t4

0x4bbc,	// (0x00076c5a) main_mup_eq_pane_t5_ParamLimits

0x4bbc,	// (0x00076c5a) main_mup_eq_pane_t5

0x4bda,	// (0x00076c78) main_mup_eq_pane_t6_ParamLimits

0x4bda,	// (0x00076c78) main_mup_eq_pane_t6

0x4bf0,	// (0x00076c8e) main_mup_eq_pane_t7_ParamLimits

0x4bf0,	// (0x00076c8e) main_mup_eq_pane_t7

0x4c06,	// (0x00076ca4) main_mup_eq_pane_t8_ParamLimits

0x4c06,	// (0x00076ca4) main_mup_eq_pane_t8

0x4c1c,	// (0x00076cba) main_mup_eq_pane_t9_ParamLimits

0x4c1c,	// (0x00076cba) main_mup_eq_pane_t9

0x4c38,	// (0x00076cd6) main_mup_eq_pane_t10_ParamLimits

0x4c38,	// (0x00076cd6) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00081526) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00081526) main_mup_eq_pane_t

0x4d0d,	// (0x00076dab) mup_equalizer_pane_cp5_ParamLimits

0x4d25,	// (0x00076dc3) mup_equalizer_pane_cp6_ParamLimits

0x4d3d,	// (0x00076ddb) mup_equalizer_pane_cp7_ParamLimits

0xa974,	// (0x0007ca12) main_gallery_pane

0xbdfc,	// (0x0007de9a) smil2_volume_pane

0xbe04,	// (0x0007dea2) smil_status_volume_pane_g1_ParamLimits

0xbe17,	// (0x0007deb5) smil_status_volume_pane_g2_ParamLimits

0xbe2a,	// (0x0007dec8) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x000816dc) smil_status_volume_pane_g_ParamLimits

0xbfcd,	// (0x0007e06b) bg_popup_window_pane_cp07_ParamLimits

0xbfdb,	// (0x0007e079) blid_firmament_pane

0x66c5,	// (0x00078763) aid_size_cell_gallery_ParamLimits

0x66c5,	// (0x00078763) aid_size_cell_gallery

0x66db,	// (0x00078779) grid_gallery_pane_ParamLimits

0x66db,	// (0x00078779) grid_gallery_pane

0x66f6,	// (0x00078794) cell_gallery_pane_ParamLimits

0x66f6,	// (0x00078794) cell_gallery_pane

0xc104,	// (0x0007e1a2) bg_cell_gallery_focus_pane_ParamLimits

0xc104,	// (0x0007e1a2) bg_cell_gallery_focus_pane

0xc116,	// (0x0007e1b4) cell_gallery_pane_g1_ParamLimits

0xc116,	// (0x0007e1b4) cell_gallery_pane_g1

0x6747,	// (0x000787e5) cell_gallery_pane_g2_ParamLimits

0x6747,	// (0x000787e5) cell_gallery_pane_g2

0x6754,	// (0x000787f2) cell_gallery_pane_g3_ParamLimits

0x6754,	// (0x000787f2) cell_gallery_pane_g3

0xc122,	// (0x0007e1c0) cell_gallery_pane_g4_ParamLimits

0xc122,	// (0x0007e1c0) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0008178a) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0008178a) cell_gallery_pane_g

0xc12e,	// (0x0007e1cc) bg_cell_gallery_focus_pane_g1

0xc136,	// (0x0007e1d4) bg_cell_gallery_focus_pane_g2

0xc13e,	// (0x0007e1dc) bg_cell_gallery_focus_pane_g3

0xc146,	// (0x0007e1e4) bg_cell_gallery_focus_pane_g4

0xc14e,	// (0x0007e1ec) bg_cell_gallery_focus_pane_g5

0xc156,	// (0x0007e1f4) bg_cell_gallery_focus_pane_g6

0xc15e,	// (0x0007e1fc) bg_cell_gallery_focus_pane_g7

0xc166,	// (0x0007e204) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00081793) bg_cell_gallery_focus_pane_g

0xc16e,	// (0x0007e20c) aid_firma_cardinal

0xc182,	// (0x0007e220) blid_firmament_pane_t1

0xc199,	// (0x0007e237) blid_firmament_pane_t2

0xc1b0,	// (0x0007e24e) blid_firmament_pane_t3

0xc1c7,	// (0x0007e265) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000817a4) blid_firmament_pane_t

0xc1de,	// (0x0007e27c) blid_sat_info_pane

0xc1ee,	// (0x0007e28c) blid_sat_info_pane_g1

0xc1ee,	// (0x0007e28c) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x000817ad) blid_sat_info_pane_g

0xc1f8,	// (0x0007e296) blid_sat_info_pane_t1

0xc206,	// (0x0007e2a4) smil2_volume_content_pane

0xc20f,	// (0x0007e2ad) smil2_volume_pane_g1

0xc217,	// (0x0007e2b5) smil2_volume_content_pane_g1

0xc220,	// (0x0007e2be) smil2_volume_content_pane_g2

0xc229,	// (0x0007e2c7) smil2_volume_content_pane_g3

0xc232,	// (0x0007e2d0) smil2_volume_content_pane_g4

0xc23b,	// (0x0007e2d9) smil2_volume_content_pane_g5

0xc244,	// (0x0007e2e2) smil2_volume_content_pane_g6

0xc24d,	// (0x0007e2eb) smil2_volume_content_pane_g7

0xc256,	// (0x0007e2f4) smil2_volume_content_pane_g8

0xc25f,	// (0x0007e2fd) smil2_volume_content_pane_g9

0xc268,	// (0x0007e306) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x000817b2) smil2_volume_content_pane_g

0x2834,	// (0x000748d2) cale_week_day_heading_pane_t1_ParamLimits

0x2848,	// (0x000748e6) cale_week_day_heading_pane_t2_ParamLimits

0x285c,	// (0x000748fa) cale_week_day_heading_pane_t3_ParamLimits

0x2870,	// (0x0007490e) cale_week_day_heading_pane_t4_ParamLimits

0x2884,	// (0x00074922) cale_week_day_heading_pane_t5_ParamLimits

0x2898,	// (0x00074936) cale_week_day_heading_pane_t6_ParamLimits

0x28ac,	// (0x0007494a) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0008129e) cale_week_day_heading_pane_t_ParamLimits

0x28c0,	// (0x0007495e) bg_cale_side_pane_ParamLimits

0x28ce,	// (0x0007496c) cale_week_time_pane_t1_ParamLimits

0x28e6,	// (0x00074984) cale_week_time_pane_t2_ParamLimits

0x28fe,	// (0x0007499c) cale_week_time_pane_t3_ParamLimits

0x2916,	// (0x000749b4) cale_week_time_pane_t4_ParamLimits

0x292e,	// (0x000749cc) cale_week_time_pane_t5_ParamLimits

0x2946,	// (0x000749e4) cale_week_time_pane_t6_ParamLimits

0x295e,	// (0x000749fc) cale_week_time_pane_t7_ParamLimits

0x297a,	// (0x00074a18) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000812ad) cale_week_time_pane_t_ParamLimits

0x299a,	// (0x00074a38) cell_cale_week_pane_g2_ParamLimits

0x28c0,	// (0x0007495e) bg_cale_side_pane_cp01_ParamLimits

0x3b54,	// (0x00075bf2) cale_month_week_pane_t1_ParamLimits

0x3b6b,	// (0x00075c09) cale_month_week_pane_t2_ParamLimits

0x3b82,	// (0x00075c20) cale_month_week_pane_t3_ParamLimits

0x3b99,	// (0x00075c37) cale_month_week_pane_t4_ParamLimits

0x3bb0,	// (0x00075c4e) cale_month_week_pane_t5_ParamLimits

0x3bc7,	// (0x00075c65) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00081386) cale_month_week_pane_t_ParamLimits

0xabdb,	// (0x0007cc79) cell_cale_month_pane_g1_ParamLimits

0xa974,	// (0x0007ca12) main_cale_event_viewer_pane

0xa974,	// (0x0007ca12) listscroll_cale_event_viewer_pane

0xc271,	// (0x0007e30f) list_cale_ev_pane

0xc279,	// (0x0007e317) scroll_pane_cp023

0x6761,	// (0x000787ff) field_cale_ev_pane_ParamLimits

0x6761,	// (0x000787ff) field_cale_ev_pane

0xc285,	// (0x0007e323) field_cale_ev_content_pane_ParamLimits

0xc285,	// (0x0007e323) field_cale_ev_content_pane

0xc291,	// (0x0007e32f) field_cale_ev_pane_g1_ParamLimits

0xc291,	// (0x0007e32f) field_cale_ev_pane_g1

0xc29d,	// (0x0007e33b) field_cale_ev_pane_g2_ParamLimits

0xc29d,	// (0x0007e33b) field_cale_ev_pane_g2

0xc2b5,	// (0x0007e353) field_cale_ev_pane_g3_ParamLimits

0xc2b5,	// (0x0007e353) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x000817c7) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x000817c7) field_cale_ev_pane_g

0xc2cd,	// (0x0007e36b) field_cale_ev_pane_t1_ParamLimits

0xc2cd,	// (0x0007e36b) field_cale_ev_pane_t1

0x6785,	// (0x00078823) field_cale_ev_content_pane_t1_ParamLimits

0x6785,	// (0x00078823) field_cale_ev_content_pane_t1

0x4ded,	// (0x00076e8b) bg_button_pane_cp01

0x232b,	// (0x000743c9) listscroll_cale_week_pane_ParamLimits

0x25f3,	// (0x00074691) popup_toolbar_window_cp01

0x27c2,	// (0x00074860) listscroll_cale_week_pane_t1_ParamLimits

0x232b,	// (0x000743c9) listscroll_cale_day_pane_ParamLimits

0x3d46,	// (0x00075de4) popup_toolbar_window_cp02

0x27c2,	// (0x00074860) listscroll_cale_day_pane_t1_ParamLimits

0x232b,	// (0x000743c9) main_cale_month_pane_ParamLimits

0x5ce9,	// (0x00077d87) popup_toolbar_window_cp03_ParamLimits

0x5ce9,	// (0x00077d87) popup_toolbar_window_cp03

0x5169,	// (0x00077207) main_image_pane_g2_ParamLimits

0x5169,	// (0x00077207) main_image_pane_g2

0x517a,	// (0x00077218) main_image_pane_g3_ParamLimits

0x517a,	// (0x00077218) main_image_pane_g3

0x0002,

0xf51a,	// (0x000815b8) main_image_pane_g_ParamLimits

0xf51a,	// (0x000815b8) main_image_pane_g

0x518b,	// (0x00077229) main_image_pane_t1_ParamLimits

0x51a2,	// (0x00077240) main_image_pane_t2_ParamLimits

0x51a2,	// (0x00077240) main_image_pane_t2

0x51b4,	// (0x00077252) main_image_pane_t3_ParamLimits

0x51b4,	// (0x00077252) main_image_pane_t3

0x51dc,	// (0x0007727a) main_image_pane_t4_ParamLimits

0x51dc,	// (0x0007727a) main_image_pane_t4

0x0003,

0xf521,	// (0x000815bf) main_image_pane_t_ParamLimits

0xf521,	// (0x000815bf) main_image_pane_t

0x51fc,	// (0x0007729a) popup_image_details_window_cp01

0x5206,	// (0x000772a4) popup_toobar_trans_pane_cp01_ParamLimits

0x5206,	// (0x000772a4) popup_toobar_trans_pane_cp01

0x5b5c,	// (0x00077bfa) popup_image_details_window_ParamLimits

0x5b5c,	// (0x00077bfa) popup_image_details_window

0xbd48,	// (0x0007dde6) popup_image_focus_window

0x5f9f,	// (0x0007803d) camera2_autofocus_pane_ParamLimits

0x5f9f,	// (0x0007803d) camera2_autofocus_pane

0xa974,	// (0x0007ca12) bg_popup_sub_pane_cp06

0xc2e4,	// (0x0007e382) popup_image_focus_window_g1

0xc2ec,	// (0x0007e38a) popup_image_focus_window_g2

0xc2f4,	// (0x0007e392) popup_image_focus_window_g3

0xc2fc,	// (0x0007e39a) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x000817ce) popup_image_focus_window_g

0xc304,	// (0x0007e3a2) popup_image_focus_window_t1

0xc312,	// (0x0007e3b0) popup_image_focus_window_t2

0xc322,	// (0x0007e3c0) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x000817d7) popup_image_focus_window_t

0xc330,	// (0x0007e3ce) camera2_autofocus_pane_g1

0x188d,	// (0x0007392b) bg_tb_trans_pane_cp01

0xc33e,	// (0x0007e3dc) popup_image_details_window_g1

0xc351,	// (0x0007e3ef) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x000817e9) popup_image_details_window_g

0xc37a,	// (0x0007e418) popup_image_details_window_t1

0xc38c,	// (0x0007e42a) popup_image_details_window_t2

0xc3a5,	// (0x0007e443) popup_image_details_window_t3

0xc3b9,	// (0x0007e457) popup_image_details_window_t4

0xc3d4,	// (0x0007e472) popup_image_details_window_t5

0x0004,

0xf752,	// (0x000817f0) popup_image_details_window_t

0x2317,	// (0x000743b5) bg_calc_paper_pane_ParamLimits

0xa974,	// (0x0007ca12) grid_highlight_pane_cp013

0xa9eb,	// (0x0007ca89) list_calc_pane_ParamLimits

0xa9fd,	// (0x0007ca9b) scroll_pane_cp024

0x232b,	// (0x000743c9) bg_calc_display_pane_ParamLimits

0x2337,	// (0x000743d5) calc_display_pane_t1_ParamLimits

0x2349,	// (0x000743e7) calc_display_pane_t2_ParamLimits

0xaa05,	// (0x0007caa3) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00081220) calc_display_pane_t_ParamLimits

0x245f,	// (0x000744fd) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0008123d) cell_calc_pane_g

0x2468,	// (0x00074506) cell_calc_pane_t1

0x2477,	// (0x00074515) grid_highlight_pane_cp02_ParamLimits

0x248d,	// (0x0007452b) toolbar_button_pane_cp01_ParamLimits

0x248d,	// (0x0007452b) toolbar_button_pane_cp01

0x5248,	// (0x000772e6) temp_image_control_pane_ParamLimits

0x5248,	// (0x000772e6) temp_image_control_pane

0x188d,	// (0x0007392b) main_mp3_pane

0xc3ee,	// (0x0007e48c) temp_image_control_pane_g1_ParamLimits

0xc3ee,	// (0x0007e48c) temp_image_control_pane_g1

0xc3fc,	// (0x0007e49a) temp_image_control_pane_g2_ParamLimits

0xc3fc,	// (0x0007e49a) temp_image_control_pane_g2

0xc40e,	// (0x0007e4ac) temp_image_control_pane_g3_ParamLimits

0xc40e,	// (0x0007e4ac) temp_image_control_pane_g3

0x67d6,	// (0x00078874) temp_image_control_pane_g4_ParamLimits

0x67d6,	// (0x00078874) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x000817fb) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x000817fb) temp_image_control_pane_g

0xc3ee,	// (0x0007e48c) main_mp3_pane_g1

0x67e9,	// (0x00078887) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00081804) main_mp3_pane_g

0xc451,	// (0x0007e4ef) main_mp3_pane_t1

0x2b33,	// (0x00074bd1) main_camera_pane_g8_ParamLimits

0x2b33,	// (0x00074bd1) main_camera_pane_g8

0x2ce8,	// (0x00074d86) main_video_pane_g7_ParamLimits

0x2ce8,	// (0x00074d86) main_video_pane_g7

0xbe7c,	// (0x0007df1a) main_camera2_pane_t7_ParamLimits

0xbe7c,	// (0x0007df1a) main_camera2_pane_t7

0x3236,	// (0x000752d4) scroll_pane_cp025_ParamLimits

0x3236,	// (0x000752d4) scroll_pane_cp025

0x324a,	// (0x000752e8) scroll_pane_cp026_ParamLimits

0x324a,	// (0x000752e8) scroll_pane_cp026

0x3259,	// (0x000752f7) wml_content_pane_ParamLimits

0xa974,	// (0x0007ca12) main_touch_calib_pane

0x68b0,	// (0x0007894e) main_touch_calib_pane_g1

0x68bc,	// (0x0007895a) main_touch_calib_pane_g2

0x68c8,	// (0x00078966) main_touch_calib_pane_g3

0x68d4,	// (0x00078972) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00081822) main_touch_calib_pane_g

0x68e0,	// (0x0007897e) main_touch_calib_pane_t1

0x68fa,	// (0x00078998) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0008182b) main_touch_calib_pane_t

0x463b,	// (0x000766d9) mup_progress_pane_cp02

0x465a,	// (0x000766f8) navi_pane_g1

0x4715,	// (0x000767b3) navi_pane_mp_t3

0x188d,	// (0x0007392b) main_mp3_pane_ParamLimits

0x5d2b,	// (0x00077dc9) navi_pane_ParamLimits

0xc3ee,	// (0x0007e48c) main_mp3_pane_g1_ParamLimits

0x67e9,	// (0x00078887) main_mp3_pane_g2_ParamLimits

0x67f5,	// (0x00078893) main_mp3_pane_g3_ParamLimits

0x67f5,	// (0x00078893) main_mp3_pane_g3

0x6803,	// (0x000788a1) main_mp3_pane_g4_ParamLimits

0x6803,	// (0x000788a1) main_mp3_pane_g4

0xc41e,	// (0x0007e4bc) main_mp3_pane_g5_ParamLimits

0xc41e,	// (0x0007e4bc) main_mp3_pane_g5

0xc42c,	// (0x0007e4ca) main_mp3_pane_g6_ParamLimits

0xc42c,	// (0x0007e4ca) main_mp3_pane_g6

0xc439,	// (0x0007e4d7) main_mp3_pane_g7_ParamLimits

0xc439,	// (0x0007e4d7) main_mp3_pane_g7

0xc445,	// (0x0007e4e3) main_mp3_pane_g8_ParamLimits

0xc445,	// (0x0007e4e3) main_mp3_pane_g8

0xf766,	// (0x00081804) main_mp3_pane_g_ParamLimits

0x680f,	// (0x000788ad) main_mp3_pane_t2

0x681d,	// (0x000788bb) main_mp3_pane_t3

0xc45f,	// (0x0007e4fd) main_mp3_pane_t4

0xc46d,	// (0x0007e50b) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00081815) main_mp3_pane_t

0xc47b,	// (0x0007e519) mup_progress_pane_cp01

0xa9a2,	// (0x0007ca40) aid_zoom_text_secondary2

0xc271,	// (0x0007e30f) list_cale_ev2_pane

0xc279,	// (0x0007e317) scroll_pane_cp023_ParamLimits

0x6952,	// (0x000789f0) field_cale_ev2_pane_ParamLimits

0x6952,	// (0x000789f0) field_cale_ev2_pane

0xe94b,	// (0x000809e9) field_cale_ev2_pane_g1_ParamLimits

0xe94b,	// (0x000809e9) field_cale_ev2_pane_g1

0xe957,	// (0x000809f5) field_cale_ev2_pane_g2_ParamLimits

0xe957,	// (0x000809f5) field_cale_ev2_pane_g2

0xe96f,	// (0x00080a0d) field_cale_ev2_pane_g3_ParamLimits

0xe96f,	// (0x00080a0d) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00081836) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00081836) field_cale_ev2_pane_g

0xc483,	// (0x0007e521) field_cale_ev2_pane_t1_ParamLimits

0xc483,	// (0x0007e521) field_cale_ev2_pane_t1

0xc49a,	// (0x0007e538) field_cale_ev2_pane_t2_ParamLimits

0xc49a,	// (0x0007e538) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0008183f) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0008183f) field_cale_ev2_pane_t

0x4f1e,	// (0x00076fbc) main_postcard_pane_g5_ParamLimits

0x4f1e,	// (0x00076fbc) main_postcard_pane_g5

0x4f34,	// (0x00076fd2) main_postcard_pane_g6_ParamLimits

0x4f34,	// (0x00076fd2) main_postcard_pane_g6

0x2a6e,	// (0x00074b0c) camera2_autofocus_pane_cp_ParamLimits

0x2a6e,	// (0x00074b0c) camera2_autofocus_pane_cp

0x188d,	// (0x0007392b) main_mup3_pane

0x6996,	// (0x00078a34) main_mup3_pane_g1_ParamLimits

0x6996,	// (0x00078a34) main_mup3_pane_g1

0x69b8,	// (0x00078a56) main_mup3_pane_g2_ParamLimits

0x69b8,	// (0x00078a56) main_mup3_pane_g2

0x6a3b,	// (0x00078ad9) main_mup3_pane_g3_ParamLimits

0x6a3b,	// (0x00078ad9) main_mup3_pane_g3

0x6a7f,	// (0x00078b1d) main_mup3_pane_g4_ParamLimits

0x6a7f,	// (0x00078b1d) main_mup3_pane_g4

0x6ac3,	// (0x00078b61) main_mup3_pane_g5_ParamLimits

0x6ac3,	// (0x00078b61) main_mup3_pane_g5

0x6b07,	// (0x00078ba5) main_mup3_pane_g6_ParamLimits

0x6b07,	// (0x00078ba5) main_mup3_pane_g6

0xc4af,	// (0x0007e54d) main_mup3_pane_g7_ParamLimits

0xc4af,	// (0x0007e54d) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0008184f) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0008184f) main_mup3_pane_g

0x6b83,	// (0x00078c21) main_mup3_pane_t1_ParamLimits

0x6b83,	// (0x00078c21) main_mup3_pane_t1

0x6bfd,	// (0x00078c9b) main_mup3_pane_t2_ParamLimits

0x6bfd,	// (0x00078c9b) main_mup3_pane_t2

0x6cd7,	// (0x00078d75) main_mup3_pane_t4_ParamLimits

0x6cd7,	// (0x00078d75) main_mup3_pane_t4

0x6d35,	// (0x00078dd3) main_mup3_pane_t5_ParamLimits

0x6d35,	// (0x00078dd3) main_mup3_pane_t5

0x6ded,	// (0x00078e8b) main_mup3_pane_t6_ParamLimits

0x6ded,	// (0x00078e8b) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00081860) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00081860) main_mup3_pane_t

0x6ea3,	// (0x00078f41) mup3_progress_pane_ParamLimits

0x6ea3,	// (0x00078f41) mup3_progress_pane

0x6f27,	// (0x00078fc5) popup_mup3_control_window_ParamLimits

0x6f27,	// (0x00078fc5) popup_mup3_control_window

0xc4bd,	// (0x0007e55b) popup_mup3_text_window

0x6f5d,	// (0x00078ffb) mup3_progress_pane_t1

0x6f74,	// (0x00079012) mup3_progress_pane_t2

0xc4c5,	// (0x0007e563) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0008186d) mup3_progress_pane_t

0xc4dc,	// (0x0007e57a) mup_progress_pane_cp03

0xa974,	// (0x0007ca12) bg_tb_trans_pane_cp04

0x6f8b,	// (0x00079029) mup3_volume_pane

0x6f93,	// (0x00079031) popup_mup3_control_window_g1

0x6f9c,	// (0x0007903a) mup3_volume_pane_g1

0x6fa5,	// (0x00079043) mup3_volume_pane_g2

0x6fae,	// (0x0007904c) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00081874) mup3_volume_pane_g

0xa974,	// (0x0007ca12) bg_tb_trans_pane_cp03

0xc4ec,	// (0x0007e58a) popup_mup3_text_window_g1

0xc4f4,	// (0x0007e592) popup_mup3_text_window_t1

0x242e,	// (0x000744cc) list_calc_item_pane_g1_ParamLimits

0xbf3b,	// (0x0007dfd9) mup_volume_pane_cp_g1

0x6914,	// (0x000789b2) main_touch_calib_pane_t3

0x6928,	// (0x000789c6) main_touch_calib_pane_t4

0x693c,	// (0x000789da) main_touch_calib_pane_t5

0xa97e,	// (0x0007ca1c) aid_cell_size_toolbar2

0xa986,	// (0x0007ca24) aid_popup3_width_pane

0xa992,	// (0x0007ca30) aid_zoom_text_msg_primary

0xaadd,	// (0x0007cb7b) vorec_t7

0x2396,	// (0x00074434) bg_calc_paper_pane_g1_ParamLimits

0x23a2,	// (0x00074440) bg_calc_paper_pane_g2_ParamLimits

0x23ae,	// (0x0007444c) bg_calc_paper_pane_g3_ParamLimits

0x23ba,	// (0x00074458) bg_calc_paper_pane_g4_ParamLimits

0x23c6,	// (0x00074464) bg_calc_paper_pane_g5_ParamLimits

0x23d2,	// (0x00074470) bg_calc_paper_pane_g6_ParamLimits

0x23e5,	// (0x00074483) bg_calc_paper_pane_g7_ParamLimits

0x23f8,	// (0x00074496) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00081227) bg_calc_paper_pane_g_ParamLimits

0x2409,	// (0x000744a7) calc_bg_paper_pane_g9_ParamLimits

0x2bdc,	// (0x00074c7a) image_qvga_pane_ParamLimits

0x2bdc,	// (0x00074c7a) image_qvga_pane

0x1fc0,	// (0x0007405e) bg_popup_sub_pane_cp04_ParamLimits

0x50c7,	// (0x00077165) popup_mup_playback_window_g1_ParamLimits

0x50d3,	// (0x00077171) popup_mup_playback_window_t1_ParamLimits

0x50e8,	// (0x00077186) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000815b3) popup_mup_playback_window_t_ParamLimits

0x6423,	// (0x000784c1) main_mup2_pane_g3_ParamLimits

0x6423,	// (0x000784c1) main_mup2_pane_g3

0x2f25,	// (0x00074fc3) popup_toolbar_window_cp04

0xaf38,	// (0x0007cfd6) popup_call2_audio_second_window_g3_ParamLimits

0xaf38,	// (0x0007cfd6) popup_call2_audio_second_window_g3

0xb342,	// (0x0007d3e0) popup_call2_audio_first_window_g4_ParamLimits

0xb342,	// (0x0007d3e0) popup_call2_audio_first_window_g4

0xb9c1,	// (0x0007da5f) popup_call2_audio_in_window_g4_ParamLimits

0xb9c1,	// (0x0007da5f) popup_call2_audio_in_window_g4

0x50fd,	// (0x0007719b) aid_area_sk_bg_cut_ParamLimits

0x50fd,	// (0x0007719b) aid_area_sk_bg_cut

0x511b,	// (0x000771b9) aid_area_sk_bg_cut_2_ParamLimits

0x511b,	// (0x000771b9) aid_area_sk_bg_cut_2

0x6737,	// (0x000787d5) aid_placing_details_win

0x673f,	// (0x000787dd) aid_placing_details_win_2

0xc330,	// (0x0007e3ce) camera2_autofocus_pane_g1_ParamLimits

0x182e,	// (0x000738cc) popup_fixed_preview_cale_window_ParamLimits

0x182e,	// (0x000738cc) popup_fixed_preview_cale_window

0x47d5,	// (0x00076873) navi_slider_pane_g3

0x47de,	// (0x0007687c) navi_slider_pane_g4

0x47e7,	// (0x00076885) navi_slider_pane_g5

0x47d5,	// (0x00076873) navi_slider_pane_g6

0xacf8,	// (0x0007cd96) navi_slider_pane_g7

0x4d5e,	// (0x00076dfc) mup_scale_pane_g3

0x4d67,	// (0x00076e05) mup_scale_pane_g4

0x4d70,	// (0x00076e0e) mup_scale_pane_g5

0x4d79,	// (0x00076e17) mup_scale_pane_g6

0x4d82,	// (0x00076e20) mup_scale_pane_g7

0x47d5,	// (0x00076873) cams2_slider_pane_g3

0xbfbd,	// (0x0007e05b) cams2_slider_pane_g4

0xe93a,	// (0x000809d8) cams2_slider_pane_g5

0x47d5,	// (0x00076873) cams2_slider_pane_g6

0xe942,	// (0x000809e0) cams2_slider_pane_g7

0xc1ee,	// (0x0007e28c) camera2_autofocus_pane_cp_g1

0xc502,	// (0x0007e5a0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc502,	// (0x0007e5a0) bg_popup_preview_window_pane_cp02

0xc50e,	// (0x0007e5ac) list_fp_cale_pane_ParamLimits

0xc50e,	// (0x0007e5ac) list_fp_cale_pane

0xc51a,	// (0x0007e5b8) popup_fixed_preview_cale_window_t1_ParamLimits

0xc51a,	// (0x0007e5b8) popup_fixed_preview_cale_window_t1

0x6fb7,	// (0x00079055) popup_fixed_preview_cale_window_t2_ParamLimits

0x6fb7,	// (0x00079055) popup_fixed_preview_cale_window_t2

0x6fcc,	// (0x0007906a) popup_fixed_preview_cale_window_t3_ParamLimits

0x6fcc,	// (0x0007906a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0008187b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0008187b) popup_fixed_preview_cale_window_t

0xc538,	// (0x0007e5d6) list_single_fp_cale_pane_ParamLimits

0xc538,	// (0x0007e5d6) list_single_fp_cale_pane

0xc550,	// (0x0007e5ee) list_single_fp_cale_pane_g1_ParamLimits

0xc550,	// (0x0007e5ee) list_single_fp_cale_pane_g1

0xc55c,	// (0x0007e5fa) list_single_fp_cale_pane_g2_ParamLimits

0xc55c,	// (0x0007e5fa) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00081882) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00081882) list_single_fp_cale_pane_g

0xc575,	// (0x0007e613) list_single_fp_cale_pane_t1_ParamLimits

0xc575,	// (0x0007e613) list_single_fp_cale_pane_t1

0xc587,	// (0x0007e625) list_single_fp_cale_pane_t2_ParamLimits

0xc587,	// (0x0007e625) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00081889) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00081889) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa974,	// (0x0007ca12) main_dialer_pane

0x6fe3,	// (0x00079081) aid_cell_size_keypad

0x6fed,	// (0x0007908b) dialer_ne_pane

0x6ff7,	// (0x00079095) grid_dialer_command_1_pane

0x6fff,	// (0x0007909d) grid_dialer_command_2_pane

0x7007,	// (0x000790a5) grid_dialer_keypad_pane

0x701b,	// (0x000790b9) bg_popup_call_pane_cp06_ParamLimits

0x701b,	// (0x000790b9) bg_popup_call_pane_cp06

0x7027,	// (0x000790c5) dialer_ne_clear_pane_ParamLimits

0x7027,	// (0x000790c5) dialer_ne_clear_pane

0xc5ba,	// (0x0007e658) dialer_ne_pane_g1

0xc5c2,	// (0x0007e660) dialer_ne_pane_t1_ParamLimits

0xc5c2,	// (0x0007e660) dialer_ne_pane_t1

0x7033,	// (0x000790d1) dialer_ne_pane_t2_ParamLimits

0x7033,	// (0x000790d1) dialer_ne_pane_t2

0x705d,	// (0x000790fb) dialer_ne_pane_t3_ParamLimits

0x705d,	// (0x000790fb) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0008188e) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0008188e) dialer_ne_pane_t

0x708d,	// (0x0007912b) dialer_ne_pane_t3_copy1_ParamLimits

0x708d,	// (0x0007912b) dialer_ne_pane_t3_copy1

0x70bc,	// (0x0007915a) cell_dialer_keypad_pane_ParamLimits

0x70bc,	// (0x0007915a) cell_dialer_keypad_pane

0x70d3,	// (0x00079171) cell_dialer_command_1_pane_ParamLimits

0x70d3,	// (0x00079171) cell_dialer_command_1_pane

0x70e9,	// (0x00079187) cell_dialer_command_2_pane_ParamLimits

0x70e9,	// (0x00079187) cell_dialer_command_2_pane

0xc5d4,	// (0x0007e672) bg_button_pane_cp02_ParamLimits

0xc5d4,	// (0x0007e672) bg_button_pane_cp02

0x70f8,	// (0x00079196) cell_dialer_keypad_pane_g1_ParamLimits

0x70f8,	// (0x00079196) cell_dialer_keypad_pane_g1

0xc5d4,	// (0x0007e672) bg_button_pane_cp03_ParamLimits

0xc5d4,	// (0x0007e672) bg_button_pane_cp03

0x710d,	// (0x000791ab) cell_dialer_command_1_pane_g1_ParamLimits

0x710d,	// (0x000791ab) cell_dialer_command_1_pane_g1

0xc5e0,	// (0x0007e67e) bg_button_pane_cp04

0x7121,	// (0x000791bf) cell_dialer_command_2_pane_g1

0x47c4,	// (0x00076862) bg_button_pane_cp06

0xc5e8,	// (0x0007e686) dialer_ne_clear_pane_g1

0x4666,	// (0x00076704) navi_pane_g2

0x4694,	// (0x00076732) navi_pane_g3

0x0002,

0xf418,	// (0x000814b6) navi_pane_g

0x4723,	// (0x000767c1) navi_pane_mv_g2

0x474a,	// (0x000767e8) navi_pane_mv_g5

0x4752,	// (0x000767f0) navi_pane_mv_t1

0x232b,	// (0x000743c9) main_clock2_pane

0x7159,	// (0x000791f7) main_clock2_list_pane_ParamLimits

0x7159,	// (0x000791f7) main_clock2_list_pane

0x7191,	// (0x0007922f) main_clock2_pane_t1_ParamLimits

0x7191,	// (0x0007922f) main_clock2_pane_t1

0x71cd,	// (0x0007926b) main_clock2_pane_t2_ParamLimits

0x71cd,	// (0x0007926b) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00081895) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00081895) main_clock2_pane_t

0x7259,	// (0x000792f7) popup_clock_analogue_window_cp03_ParamLimits

0x7259,	// (0x000792f7) popup_clock_analogue_window_cp03

0x7280,	// (0x0007931e) popup_clock_digital_window_cp02_ParamLimits

0x7280,	// (0x0007931e) popup_clock_digital_window_cp02

0x72f9,	// (0x00079397) main_clock2_list_single_pane_ParamLimits

0x72f9,	// (0x00079397) main_clock2_list_single_pane

0x47c4,	// (0x00076862) list_highlight_pane_cp05

0xc5f0,	// (0x0007e68e) main_clock2_list_single_pane_t1

0x2f25,	// (0x00074fc3) popup_toolbar_window_cp04_ParamLimits

0x67a6,	// (0x00078844) camera2_autofocus_pane_g2_ParamLimits

0x67a6,	// (0x00078844) camera2_autofocus_pane_g2

0x67b2,	// (0x00078850) camera2_autofocus_pane_g3_ParamLimits

0x67b2,	// (0x00078850) camera2_autofocus_pane_g3

0x67be,	// (0x0007885c) camera2_autofocus_pane_g4_ParamLimits

0x67be,	// (0x0007885c) camera2_autofocus_pane_g4

0x67ca,	// (0x00078868) camera2_autofocus_pane_g5_ParamLimits

0x67ca,	// (0x00078868) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x000817de) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x000817de) camera2_autofocus_pane_g

0x6976,	// (0x00078a14) camera2_autofocus_pane_cp_g2

0x697e,	// (0x00078a1c) camera2_autofocus_pane_cp_g3

0x6986,	// (0x00078a24) camera2_autofocus_pane_cp_g4

0x698e,	// (0x00078a2c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00081844) camera2_autofocus_pane_cp_g

0x7013,	// (0x000790b1) popup_dialer_spcha_window

0xa974,	// (0x0007ca12) bg_popup_sub_pane_cp07

0xc5fe,	// (0x0007e69c) list_spcha_pane

0xc606,	// (0x0007e6a4) list_single_spcha_pane_ParamLimits

0xc606,	// (0x0007e6a4) list_single_spcha_pane

0xa974,	// (0x0007ca12) list_highlight_pane_cp06

0xc617,	// (0x0007e6b5) list_single_spcha_pane_t1

0xb76b,	// (0x0007d809) popup_call2_audio_out_window_g4_ParamLimits

0xb76b,	// (0x0007d809) popup_call2_audio_out_window_g4

0xa974,	// (0x0007ca12) main_imed2_pane

0xbd52,	// (0x0007ddf0) popup_imed_adjust2_window

0x5b74,	// (0x00077c12) popup_imed_trans_window_ParamLimits

0x5b74,	// (0x00077c12) popup_imed_trans_window

0xc026,	// (0x0007e0c4) popup_blid_sat_info2_window_t1

0xc034,	// (0x0007e0d2) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00081773) popup_blid_sat_info2_window_t

0x73af,	// (0x0007944d) aid_size_cell_colour_35

0x73cf,	// (0x0007946d) aid_size_cell_colour_112

0x73ef,	// (0x0007948d) aid_size_cell_effect

0xbd26,	// (0x0007ddc4) bg_tb_trans_pane_cp02

0x3eaf,	// (0x00075f4d) heading_imed_pane

0x740f,	// (0x000794ad) listscroll_imed_pane

0xc625,	// (0x0007e6c3) heading_imed_pane_g1

0xc62d,	// (0x0007e6cb) heading_imed_pane_t1

0xc63b,	// (0x0007e6d9) grid_imed_colour_35_pane_ParamLimits

0xc63b,	// (0x0007e6d9) grid_imed_colour_35_pane

0x741b,	// (0x000794b9) grid_imed_effect_pane

0xc657,	// (0x0007e6f5) list_imed_aspect_pane

0x7432,	// (0x000794d0) scroll_pane_cp027_ParamLimits

0x7432,	// (0x000794d0) scroll_pane_cp027

0x7443,	// (0x000794e1) cell_imed_effect_pane_ParamLimits

0x7443,	// (0x000794e1) cell_imed_effect_pane

0xc65f,	// (0x0007e6fd) cell_imed_colour_pane_ParamLimits

0xc65f,	// (0x0007e6fd) cell_imed_colour_pane

0xc6a9,	// (0x0007e747) cell_imed_colour_pane_g1_ParamLimits

0xc6a9,	// (0x0007e747) cell_imed_colour_pane_g1

0xc6ba,	// (0x0007e758) hgihlgiht_grid_pane_cp016_ParamLimits

0xc6ba,	// (0x0007e758) hgihlgiht_grid_pane_cp016

0x7468,	// (0x00079506) cell_imed_effect_pane_g1

0x7470,	// (0x0007950e) grid_highlight_pane_cp017

0xc6cb,	// (0x0007e769) list_imed_single_pane_ParamLimits

0xc6cb,	// (0x0007e769) list_imed_single_pane

0xa974,	// (0x0007ca12) list_highlight_pane_cp07

0xc6df,	// (0x0007e77d) list_imed_aspect_pane_comp1_t1

0xbd26,	// (0x0007ddc4) bg_tb_trans_pane_cp05

0xc701,	// (0x0007e79f) popup_imed_adjust2_window_g1

0xc728,	// (0x0007e7c6) popup_imed_adjust2_window_t1

0xed93,	// (0x00080e31) slider_imed_adjust_pane

0xeda7,	// (0x00080e45) slider_imed_adjust_pane_g1

0xedb7,	// (0x00080e55) slider_imed_adjust_pane_g2

0xedc7,	// (0x00080e65) slider_imed_adjust_pane_g3

0xedd8,	// (0x00080e76) slider_imed_adjust_pane_g4

0x0003,

0x0596,	// (0x00072634) slider_imed_adjust_pane_g

0x7479,	// (0x00079517) aid_size_cell_clipart2

0x7485,	// (0x00079523) grid_imed_clipart_pane

0xede9,	// (0x00080e87) scroll_pane_cp031

0x748f,	// (0x0007952d) cell_imed_clipart_pane_ParamLimits

0x748f,	// (0x0007952d) cell_imed_clipart_pane

0x74ac,	// (0x0007954a) cell_imed_clipart_pane_g1

0xa974,	// (0x0007ca12) grid_highlight_pane_cp014

0x716e,	// (0x0007920c) main_clock2_pane_g1_ParamLimits

0x716e,	// (0x0007920c) main_clock2_pane_g1

0x72a0,	// (0x0007933e) aid_call2_pane_cp10

0x72b2,	// (0x00079350) aid_call_pane_cp10

0x4574,	// (0x00076612) popup_clock_analogue_window_cp10_g1

0x4574,	// (0x00076612) popup_clock_analogue_window_cp10_g2

0x72c4,	// (0x00079362) popup_clock_analogue_window_cp10_g3

0x72c4,	// (0x00079362) popup_clock_analogue_window_cp10_g4

0x4574,	// (0x00076612) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000818a0) popup_clock_analogue_window_cp10_g

0x72da,	// (0x00079378) popup_clock_analogue_window_cp10_t1

0x730b,	// (0x000793a9) clock_digital_number_pane_cp10_ParamLimits

0x730b,	// (0x000793a9) clock_digital_number_pane_cp10

0x7325,	// (0x000793c3) clock_digital_number_pane_cp11_ParamLimits

0x7325,	// (0x000793c3) clock_digital_number_pane_cp11

0x733f,	// (0x000793dd) clock_digital_number_pane_cp12_ParamLimits

0x733f,	// (0x000793dd) clock_digital_number_pane_cp12

0x7359,	// (0x000793f7) clock_digital_number_pane_cp13_ParamLimits

0x7359,	// (0x000793f7) clock_digital_number_pane_cp13

0x7373,	// (0x00079411) clock_digital_separator_pane_cp10_ParamLimits

0x7373,	// (0x00079411) clock_digital_separator_pane_cp10

0x738d,	// (0x0007942b) popup_clock_digital_window_cp02_t1_ParamLimits

0x738d,	// (0x0007942b) popup_clock_digital_window_cp02_t1

0x1fb8,	// (0x00074056) clock_digital_number_pane_cp10_g1

0x1fb8,	// (0x00074056) clock_digital_number_pane_cp10_g2

0x0001,

0xf814,	// (0x000818b2) clock_digital_number_pane_cp10_g

0x1fb8,	// (0x00074056) clock_digital_separator_pane_cp10_g1

0x1fb8,	// (0x00074056) clock_digital_separator_pane_g2_cp10

0x4794,	// (0x00076832) navi_pane_vded_g4

0x479d,	// (0x0007683b) navi_pane_vded_g5

0x47a6,	// (0x00076844) navi_pane_vded_t1

0xa974,	// (0x0007ca12) main_vded_pane

0x74b5,	// (0x00079553) main_vded_pane_g1

0x74c1,	// (0x0007955f) main_vded_pane_g2

0x74cd,	// (0x0007956b) main_vded_pane_g3

0x0002,

0xf819,	// (0x000818b7) main_vded_pane_g

0x74d9,	// (0x00079577) main_vded_pane_t1

0x74e7,	// (0x00079585) main_vded_pane_t2

0x0001,

0xf820,	// (0x000818be) main_vded_pane_t

0x74f5,	// (0x00079593) vded_slider_pane

0x74ff,	// (0x0007959d) vded_video_pane

0xedf1,	// (0x00080e8f) vded_video_pane_g1

0x750b,	// (0x000795a9) vded_video_pane_g2

0xc1ee,	// (0x0007e28c) vded_video_pane_g3

0x0002,

0xf825,	// (0x000818c3) vded_video_pane_g

0xedfb,	// (0x00080e99) vded_slider_pane_g1

0xbf3b,	// (0x0007dfd9) vded_slider_pane_g2

0xee04,	// (0x00080ea2) vded_slider_pane_g3

0xee0d,	// (0x00080eab) vded_slider_pane_g4

0xee16,	// (0x00080eb4) vded_slider_pane_g5

0x0004,

0xf82c,	// (0x000818ca) vded_slider_pane_g

0x6f11,	// (0x00078faf) mup3_rocker_pane_ParamLimits

0x6f11,	// (0x00078faf) mup3_rocker_pane

0x7514,	// (0x000795b2) mup3_control_keys_pane_g1

0x751c,	// (0x000795ba) mup3_control_keys_pane_g2

0x7524,	// (0x000795c2) mup3_control_keys_pane_g3

0x752c,	// (0x000795ca) mup3_control_keys_pane_g4

0x0003,

0xf837,	// (0x000818d5) mup3_control_keys_pane_g

0x186f,	// (0x0007390d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x186f,	// (0x0007390d) popup_toolbar2_fixed_window_cp01

0x6f47,	// (0x00078fe5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6f47,	// (0x00078fe5) popup_toolbar2_fixed_window_cp02

0xb0aa,	// (0x0007d148) popup_call2_audio_second_window_t4_ParamLimits

0xb0aa,	// (0x0007d148) popup_call2_audio_second_window_t4

0xb5d8,	// (0x0007d676) popup_call2_audio_first_window_t6_ParamLimits

0xb5d8,	// (0x0007d676) popup_call2_audio_first_window_t6

0xb86e,	// (0x0007d90c) popup_call2_audio_out_window_t6_ParamLimits

0xb86e,	// (0x0007d90c) popup_call2_audio_out_window_t6

0xa974,	// (0x0007ca12) main_vitu_pane

0x753c,	// (0x000795da) aid_size_cell_itu_ParamLimits

0x753c,	// (0x000795da) aid_size_cell_itu

0x188d,	// (0x0007392b) bg_popup_window_pane_cp08_ParamLimits

0x188d,	// (0x0007392b) bg_popup_window_pane_cp08

0x7552,	// (0x000795f0) field_vitu_entry_pane_ParamLimits

0x7552,	// (0x000795f0) field_vitu_entry_pane

0x7569,	// (0x00079607) grid_vitu_function_pane_ParamLimits

0x7569,	// (0x00079607) grid_vitu_function_pane

0x7584,	// (0x00079622) grid_vitu_itu_pane_ParamLimits

0x7584,	// (0x00079622) grid_vitu_itu_pane

0x75a2,	// (0x00079640) cell_vitu_itu_pane_ParamLimits

0x75a2,	// (0x00079640) cell_vitu_itu_pane

0x75c8,	// (0x00079666) cell_vitu_function_pane_ParamLimits

0x75c8,	// (0x00079666) cell_vitu_function_pane

0x188d,	// (0x0007392b) bg_popup_sub_pane_cp08_ParamLimits

0x188d,	// (0x0007392b) bg_popup_sub_pane_cp08

0x75e3,	// (0x00079681) field_vitu_entry_pane_t1_ParamLimits

0x75e3,	// (0x00079681) field_vitu_entry_pane_t1

0xee37,	// (0x00080ed5) field_vitu_entry_pane_t2_ParamLimits

0xee37,	// (0x00080ed5) field_vitu_entry_pane_t2

0x0001,

0xf840,	// (0x000818de) field_vitu_entry_pane_t_ParamLimits

0xf840,	// (0x000818de) field_vitu_entry_pane_t

0xee54,	// (0x00080ef2) bg_button_pane_cp05_ParamLimits

0xee54,	// (0x00080ef2) bg_button_pane_cp05

0x7603,	// (0x000796a1) cell_vitu_itu_pane_g1

0x761b,	// (0x000796b9) cell_vitu_itu_pane_t1_ParamLimits

0x761b,	// (0x000796b9) cell_vitu_itu_pane_t1

0x762d,	// (0x000796cb) cell_vitu_itu_pane_t2_ParamLimits

0x762d,	// (0x000796cb) cell_vitu_itu_pane_t2

0x0002,

0xf845,	// (0x000818e3) cell_vitu_itu_pane_t_ParamLimits

0xf845,	// (0x000818e3) cell_vitu_itu_pane_t

0xee62,	// (0x00080f00) bg_button_pane_cp07

0x7662,	// (0x00079700) cell_vitu_function_pane_g1

0xa9e3,	// (0x0007ca81) main_calc_pane_g1

0x1698,	// (0x00073736) aid_visual_content_pane

0xa974,	// (0x0007ca12) main_vradio_pane

0x766b,	// (0x00079709) main_vradio_pane_g1_ParamLimits

0x766b,	// (0x00079709) main_vradio_pane_g1

0xee6c,	// (0x00080f0a) main_vradio_pane_g2_ParamLimits

0xee6c,	// (0x00080f0a) main_vradio_pane_g2

0x0001,

0xf84c,	// (0x000818ea) main_vradio_pane_g_ParamLimits

0xf84c,	// (0x000818ea) main_vradio_pane_g

0x7682,	// (0x00079720) main_vradio_pane_t1_ParamLimits

0x7682,	// (0x00079720) main_vradio_pane_t1

0x7697,	// (0x00079735) main_vradio_pane_t2_ParamLimits

0x7697,	// (0x00079735) main_vradio_pane_t2

0xee79,	// (0x00080f17) main_vradio_pane_t3_ParamLimits

0xee79,	// (0x00080f17) main_vradio_pane_t3

0x0002,

0xf851,	// (0x000818ef) main_vradio_pane_t_ParamLimits

0xf851,	// (0x000818ef) main_vradio_pane_t

0x76ac,	// (0x0007974a) vradio_rocker_control_pane_ParamLimits

0x76ac,	// (0x0007974a) vradio_rocker_control_pane

0x76be,	// (0x0007975c) vradio_station_info_pane_ParamLimits

0x76be,	// (0x0007975c) vradio_station_info_pane

0xee8d,	// (0x00080f2b) vradio_frequency_info_pane_ParamLimits

0xee8d,	// (0x00080f2b) vradio_frequency_info_pane

0xc1ee,	// (0x0007e28c) vradio_station_info_pane_g1

0xee9c,	// (0x00080f3a) vradio_station_info_pane_t1_ParamLimits

0xee9c,	// (0x00080f3a) vradio_station_info_pane_t1

0xeebe,	// (0x00080f5c) vradio_station_info_pane_t2_ParamLimits

0xeebe,	// (0x00080f5c) vradio_station_info_pane_t2

0x0001,

0x05e8,	// (0x00072686) vradio_station_info_pane_t_ParamLimits

0x05e8,	// (0x00072686) vradio_station_info_pane_t

0xeed0,	// (0x00080f6e) vradio_tuning_pane

0xeed8,	// (0x00080f76) vradio_rocker_control_pane_g1

0xeee0,	// (0x00080f7e) vradio_rocker_control_pane_g2

0xeee8,	// (0x00080f86) vradio_rocker_control_pane_g3

0xeef0,	// (0x00080f8e) vradio_rocker_control_pane_g4

0xeef8,	// (0x00080f96) vradio_rocker_control_pane_g5

0x0004,

0x05ed,	// (0x0007268b) vradio_rocker_control_pane_g

0x76ce,	// (0x0007976c) vradio_frequency_info_pane_g1

0xef00,	// (0x00080f9e) vradio_frequency_info_pane_t1_ParamLimits

0xef00,	// (0x00080f9e) vradio_frequency_info_pane_t1

0x76d8,	// (0x00079776) vradio_tuning_pane_g1

0x76e3,	// (0x00079781) vradio_tuning_pane_t1

0xa9aa,	// (0x0007ca48) area_side_right_pane_ParamLimits

0xa9aa,	// (0x0007ca48) area_side_right_pane

0xbced,	// (0x0007dd8b) status_small_pane_g1

0xbcf5,	// (0x0007dd93) status_small_pane_g2

0xbcfe,	// (0x0007dd9c) status_small_pane_g3

0xbd07,	// (0x0007dda5) status_small_pane_g4

0x0003,

0xf62b,	// (0x000816c9) status_small_pane_g

0xbd10,	// (0x0007ddae) status_small_pane_t1

0xa974,	// (0x0007ca12) main_video3_pane

0xef14,	// (0x00080fb2) cams_zoom_vslider_pane

0xef1c,	// (0x00080fba) image3_wide_pane_ParamLimits

0xef1c,	// (0x00080fba) image3_wide_pane

0xef36,	// (0x00080fd4) image3_wide_small_pane

0xef42,	// (0x00080fe0) main_video3_pane_g1_ParamLimits

0xef42,	// (0x00080fe0) main_video3_pane_g1

0xef5e,	// (0x00080ffc) main_video3_pane_g2_ParamLimits

0xef5e,	// (0x00080ffc) main_video3_pane_g2

0x0001,

0x05f8,	// (0x00072696) main_video3_pane_g_ParamLimits

0x05f8,	// (0x00072696) main_video3_pane_g

0xef7a,	// (0x00081018) main_video3_pane_t1_ParamLimits

0xef7a,	// (0x00081018) main_video3_pane_t1

0xefa5,	// (0x00081043) main_video3_pane_t2_ParamLimits

0xefa5,	// (0x00081043) main_video3_pane_t2

0xefd2,	// (0x00081070) main_video3_pane_t3_ParamLimits

0xefd2,	// (0x00081070) main_video3_pane_t3

0x0002,

0x05fd,	// (0x0007269b) main_video3_pane_t_ParamLimits

0x05fd,	// (0x0007269b) main_video3_pane_t

0xefff,	// (0x0008109d) cams_zoom_vslider_pane_g1

0xf008,	// (0x000810a6) cams_zoom_vslider_pane_g2

0x0001,

0x0604,	// (0x000726a2) cams_zoom_vslider_pane_g

0xf010,	// (0x000810ae) small_slider_vertical_pane

0xc1ee,	// (0x0007e28c) small_slider_vertical_pane_g1

0xc1ee,	// (0x0007e28c) small_slider_vertical_pane_g2

0xf018,	// (0x000810b6) small_slider_vertical_pane_g3

0x0002,

0xf858,	// (0x000818f6) small_slider_vertical_pane_g

0xa974,	// (0x0007ca12) main_hwr_training_pane

0xf021,	// (0x000810bf) hwr_training_instruct_pane_ParamLimits

0xf021,	// (0x000810bf) hwr_training_instruct_pane

0x76f2,	// (0x00079790) hwr_training_navi_pane_ParamLimits

0x76f2,	// (0x00079790) hwr_training_navi_pane

0x7711,	// (0x000797af) hwr_training_write_pane_ParamLimits

0x7711,	// (0x000797af) hwr_training_write_pane

0xa974,	// (0x0007ca12) bg_frame_shadow_pane

0xf058,	// (0x000810f6) hwr_training_write_pane_g1

0xf060,	// (0x000810fe) hwr_training_write_pane_g2

0xf068,	// (0x00081106) hwr_training_write_pane_g3

0xf070,	// (0x0008110e) hwr_training_write_pane_g4

0xf078,	// (0x00081116) hwr_training_write_pane_g5

0xf080,	// (0x0008111e) hwr_training_write_pane_g6

0xf088,	// (0x00081126) hwr_training_write_pane_g7

0x0006,

0x0610,	// (0x000726ae) hwr_training_write_pane_g

0xe993,	// (0x00080a31) hwr_training_navi_pane_g1_ParamLimits

0xe993,	// (0x00080a31) hwr_training_navi_pane_g1

0xe9a5,	// (0x00080a43) hwr_training_navi_pane_g2_ParamLimits

0xe9a5,	// (0x00080a43) hwr_training_navi_pane_g2

0xe9b7,	// (0x00080a55) hwr_training_navi_pane_g3_ParamLimits

0xe9b7,	// (0x00080a55) hwr_training_navi_pane_g3

0xe9c7,	// (0x00080a65) hwr_training_navi_pane_g4_ParamLimits

0xe9c7,	// (0x00080a65) hwr_training_navi_pane_g4

0x0004,

0xf85f,	// (0x000818fd) hwr_training_navi_pane_g_ParamLimits

0xf85f,	// (0x000818fd) hwr_training_navi_pane_g

0xe9d4,	// (0x00080a72) hwr_training_navi_pane_t1

0x7759,	// (0x000797f7) list_single_hwr_training_instruct_pane_ParamLimits

0x7759,	// (0x000797f7) list_single_hwr_training_instruct_pane

0xf090,	// (0x0008112e) list_single_hwr_training_instruct_pane_t1

0xc12e,	// (0x0007e1cc) bg_frame_shadow_pane_g1

0xf09f,	// (0x0008113d) bg_frame_shadow_pane_g2

0xf0a7,	// (0x00081145) bg_frame_shadow_pane_g3

0xf0af,	// (0x0008114d) bg_frame_shadow_pane_g4

0xf0b7,	// (0x00081155) bg_frame_shadow_pane_g5

0xf0bf,	// (0x0008115d) bg_frame_shadow_pane_g6

0xf0c7,	// (0x00081165) bg_frame_shadow_pane_g7

0x2573,	// (0x00074611) bg_frame_shadow_pane_g8

0x0007,

0xf86a,	// (0x00081908) bg_frame_shadow_pane_g

0xa974,	// (0x0007ca12) main_video_tele_dialer_pane

0x7775,	// (0x00079813) aid_size_cell_video_keypad_ParamLimits

0x7775,	// (0x00079813) aid_size_cell_video_keypad

0x778f,	// (0x0007982d) grid_video_dialer_keypad_pane_ParamLimits

0x778f,	// (0x0007982d) grid_video_dialer_keypad_pane

0x77dd,	// (0x0007987b) video_down_pane_cp_ParamLimits

0x77dd,	// (0x0007987b) video_down_pane_cp

0x7811,	// (0x000798af) cell_video_dialer_keypad_pane_ParamLimits

0x7811,	// (0x000798af) cell_video_dialer_keypad_pane

0xf0cf,	// (0x0008116d) bg_button_pane_cp08_ParamLimits

0xf0cf,	// (0x0008116d) bg_button_pane_cp08

0x7837,	// (0x000798d5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7837,	// (0x000798d5) cell_video_dialer_keypad_pane_g1

0x6efb,	// (0x00078f99) mup3_rocker2_pane_ParamLimits

0x6efb,	// (0x00078f99) mup3_rocker2_pane

0xc1ee,	// (0x0007e28c) mup3_rocker2_pane_g1

0x5a41,	// (0x00077adf) main_dialer2_pane

0xa974,	// (0x0007ca12) main_mp4_pane

0xe9ea,	// (0x00080a88) main_mp4_pane_g1_ParamLimits

0xe9ea,	// (0x00080a88) main_mp4_pane_g1

0xe9ea,	// (0x00080a88) main_mp4_pane_g2_ParamLimits

0xe9ea,	// (0x00080a88) main_mp4_pane_g2

0x7872,	// (0x00079910) main_mp4_pane_g3_ParamLimits

0x7872,	// (0x00079910) main_mp4_pane_g3

0xe9f8,	// (0x00080a96) main_mp4_pane_g4_ParamLimits

0xe9f8,	// (0x00080a96) main_mp4_pane_g4

0xea12,	// (0x00080ab0) main_mp4_pane_g5_ParamLimits

0xea12,	// (0x00080ab0) main_mp4_pane_g5

0x0005,

0xf88a,	// (0x00081928) main_mp4_pane_g_ParamLimits

0xf88a,	// (0x00081928) main_mp4_pane_g

0xea46,	// (0x00080ae4) main_mp4_pane_t1_ParamLimits

0xea46,	// (0x00080ae4) main_mp4_pane_t1

0xeaa2,	// (0x00080b40) main_mp4_pane_t2_ParamLimits

0xeaa2,	// (0x00080b40) main_mp4_pane_t2

0xf0db,	// (0x00081179) main_mp4_pane_t3_ParamLimits

0xf0db,	// (0x00081179) main_mp4_pane_t3

0xeaf4,	// (0x00080b92) main_mp4_pane_t4_ParamLimits

0xeaf4,	// (0x00080b92) main_mp4_pane_t4

0x0003,

0xf897,	// (0x00081935) main_mp4_pane_t_ParamLimits

0xf897,	// (0x00081935) main_mp4_pane_t

0xeb34,	// (0x00080bd2) mp4_progress_pane_ParamLimits

0xeb34,	// (0x00080bd2) mp4_progress_pane

0xeb7e,	// (0x00080c1c) mp4_rocker_pane_ParamLimits

0xeb7e,	// (0x00080c1c) mp4_rocker_pane

0xc748,	// (0x0007e7e6) mp4_progress_pane_t1

0xc761,	// (0x0007e7ff) mp4_progress_pane_t2

0x0001,

0xf8a0,	// (0x0008193e) mp4_progress_pane_t

0xc77a,	// (0x0007e818) mup_progress_pane_cp04

0xc1ee,	// (0x0007e28c) mp4_rocker_pane_g1

0x78bc,	// (0x0007995a) aid_cell_size_keypad2_ParamLimits

0x78bc,	// (0x0007995a) aid_cell_size_keypad2

0x78d2,	// (0x00079970) dialer2_ne_pane_ParamLimits

0x78d2,	// (0x00079970) dialer2_ne_pane

0x78ea,	// (0x00079988) grid_dialer2_keypad_pane_ParamLimits

0x78ea,	// (0x00079988) grid_dialer2_keypad_pane

0xbfcd,	// (0x0007e06b) bg_popup_call_pane_cp07_ParamLimits

0xbfcd,	// (0x0007e06b) bg_popup_call_pane_cp07

0x7906,	// (0x000799a4) dialer2_ne_pane_t1_ParamLimits

0x7906,	// (0x000799a4) dialer2_ne_pane_t1

0x7946,	// (0x000799e4) cell_dialer2_keypad_pane_ParamLimits

0x7946,	// (0x000799e4) cell_dialer2_keypad_pane

0xc798,	// (0x0007e836) bg_button_pane_pane_cp04_ParamLimits

0xc798,	// (0x0007e836) bg_button_pane_pane_cp04

0x796c,	// (0x00079a0a) cell_dialer2_keypad_pane_g1_ParamLimits

0x796c,	// (0x00079a0a) cell_dialer2_keypad_pane_g1

0x2e39,	// (0x00074ed7) aid_placing_vt_set_content_ParamLimits

0x2e39,	// (0x00074ed7) aid_placing_vt_set_content

0x2e59,	// (0x00074ef7) aid_placing_vt_set_title_ParamLimits

0x2e59,	// (0x00074ef7) aid_placing_vt_set_title

0xa974,	// (0x0007ca12) main_image3_pane

0x7a32,	// (0x00079ad0) area_side_right_pane_cp01_ParamLimits

0x7a32,	// (0x00079ad0) area_side_right_pane_cp01

0xe9ea,	// (0x00080a88) main_image3_pane_g1_ParamLimits

0xe9ea,	// (0x00080a88) main_image3_pane_g1

0x7a4b,	// (0x00079ae9) main_image3_pane_g2_ParamLimits

0x7a4b,	// (0x00079ae9) main_image3_pane_g2

0x7a73,	// (0x00079b11) main_image3_pane_g3_ParamLimits

0x7a73,	// (0x00079b11) main_image3_pane_g3

0x7a9d,	// (0x00079b3b) main_image3_pane_g4_ParamLimits

0x7a9d,	// (0x00079b3b) main_image3_pane_g4

0x0003,

0xf8af,	// (0x0008194d) main_image3_pane_g_ParamLimits

0xf8af,	// (0x0008194d) main_image3_pane_g

0x7ac7,	// (0x00079b65) main_image3_pane_t1_ParamLimits

0x7ac7,	// (0x00079b65) main_image3_pane_t1

0x7b1f,	// (0x00079bbd) main_image3_pane_t2_ParamLimits

0x7b1f,	// (0x00079bbd) main_image3_pane_t2

0x7b71,	// (0x00079c0f) main_image3_pane_t3_ParamLimits

0x7b71,	// (0x00079c0f) main_image3_pane_t3

0x0003,

0xf8b8,	// (0x00081956) main_image3_pane_t_ParamLimits

0xf8b8,	// (0x00081956) main_image3_pane_t

0x188d,	// (0x0007392b) grid_sctrl_middle_pane_cp01_ParamLimits

0x188d,	// (0x0007392b) grid_sctrl_middle_pane_cp01

0x7bf9,	// (0x00079c97) cell_sctrl_middle_pane_cp01_ParamLimits

0x7bf9,	// (0x00079c97) cell_sctrl_middle_pane_cp01

0x7c16,	// (0x00079cb4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7c16,	// (0x00079cb4) cell_sctrl_middle_pane_cp01_g1

0xa974,	// (0x0007ca12) main_call4_pane

0x7c2b,	// (0x00079cc9) aid_size_button_call4_ParamLimits

0x7c2b,	// (0x00079cc9) aid_size_button_call4

0x7c5e,	// (0x00079cfc) call4_windows_pane_ParamLimits

0x7c5e,	// (0x00079cfc) call4_windows_pane

0x7c80,	// (0x00079d1e) grid_call4_button_pane_ParamLimits

0x7c80,	// (0x00079d1e) grid_call4_button_pane

0xc7a4,	// (0x0007e842) call4_windows_conf_pane

0xc7bf,	// (0x0007e85d) popup_call4_audio_first_window_ParamLimits

0xc7bf,	// (0x0007e85d) popup_call4_audio_first_window

0xc80d,	// (0x0007e8ab) popup_call4_audio_second_window_ParamLimits

0xc80d,	// (0x0007e8ab) popup_call4_audio_second_window

0xc823,	// (0x0007e8c1) popup_call4_audio_wait_window_ParamLimits

0xc823,	// (0x0007e8c1) popup_call4_audio_wait_window

0x7cab,	// (0x00079d49) cell_call4_button_pane_ParamLimits

0x7cab,	// (0x00079d49) cell_call4_button_pane

0x7cd2,	// (0x00079d70) bg_button_pane_cp09_ParamLimits

0x7cd2,	// (0x00079d70) bg_button_pane_cp09

0x7cde,	// (0x00079d7c) cell_call4_button_pane_g1_ParamLimits

0x7cde,	// (0x00079d7c) cell_call4_button_pane_g1

0x7d04,	// (0x00079da2) cell_call4_button_pane_t1_ParamLimits

0x7d04,	// (0x00079da2) cell_call4_button_pane_t1

0xc86b,	// (0x0007e909) popup_call4_audio_conf_window_ParamLimits

0xc86b,	// (0x0007e909) popup_call4_audio_conf_window

0x6f5d,	// (0x00078ffb) mup3_progress_pane_t1_ParamLimits

0x6f74,	// (0x00079012) mup3_progress_pane_t2_ParamLimits

0xc4c5,	// (0x0007e563) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0008186d) mup3_progress_pane_t_ParamLimits

0xc4dc,	// (0x0007e57a) mup_progress_pane_cp03_ParamLimits

0x7534,	// (0x000795d2) mup3_control_keys_pane_g4_copy1

0xeb62,	// (0x00080c00) mp4_rocker2_pane_ParamLimits

0xeb62,	// (0x00080c00) mp4_rocker2_pane

0xc885,	// (0x0007e923) mp4_rocker2_pane_g1

0xc88d,	// (0x0007e92b) mp4_rocker2_pane_g2

0xebd4,	// (0x00080c72) mp4_rocker2_pane_g3

0xebdc,	// (0x00080c7a) mp4_rocker2_pane_g4

0xebe4,	// (0x00080c82) mp4_rocker2_pane_g5

0x0004,

0xf8c1,	// (0x0008195f) mp4_rocker2_pane_g

0xa974,	// (0x0007ca12) main_camera4_pane

0xa974,	// (0x0007ca12) main_video4_pane

0x77ab,	// (0x00079849) main_video_tele_dialer_pane_t1_ParamLimits

0x77ab,	// (0x00079849) main_video_tele_dialer_pane_t1

0x77c4,	// (0x00079862) main_video_tele_dialer_pane_t2_ParamLimits

0x77c4,	// (0x00079862) main_video_tele_dialer_pane_t2

0x0001,

0xf87b,	// (0x00081919) main_video_tele_dialer_pane_t_ParamLimits

0xf87b,	// (0x00081919) main_video_tele_dialer_pane_t

0x7d42,	// (0x00079de0) cam4_autofocus_pane_ParamLimits

0x7d42,	// (0x00079de0) cam4_autofocus_pane

0x7d58,	// (0x00079df6) cam4_image_uncrop_pane_ParamLimits

0x7d58,	// (0x00079df6) cam4_image_uncrop_pane

0x7d71,	// (0x00079e0f) cam4_indicators_pane_ParamLimits

0x7d71,	// (0x00079e0f) cam4_indicators_pane

0x7da0,	// (0x00079e3e) main_camera4_pane_g1_ParamLimits

0x7da0,	// (0x00079e3e) main_camera4_pane_g1

0x7dac,	// (0x00079e4a) main_camera4_pane_g2_ParamLimits

0x7dac,	// (0x00079e4a) main_camera4_pane_g2

0x7dac,	// (0x00079e4a) main_camera4_pane_g3_ParamLimits

0x7dac,	// (0x00079e4a) main_camera4_pane_g3

0x7db8,	// (0x00079e56) main_camera4_pane_g4_ParamLimits

0x7db8,	// (0x00079e56) main_camera4_pane_g4

0x7dc4,	// (0x00079e62) main_camera4_pane_g5_ParamLimits

0x7dc4,	// (0x00079e62) main_camera4_pane_g5

0x0005,

0xf8cc,	// (0x0008196a) main_camera4_pane_g_ParamLimits

0xf8cc,	// (0x0008196a) main_camera4_pane_g

0x7de1,	// (0x00079e7f) main_camera4_pane_t1_ParamLimits

0x7de1,	// (0x00079e7f) main_camera4_pane_t1

0xc41e,	// (0x0007e4bc) bg_tb_trans_pane_cp06

0xec06,	// (0x00080ca4) cam4_indicators_pane_g1

0xec13,	// (0x00080cb1) cam4_indicators_pane_g2

0x0002,

0xf8e7,	// (0x00081985) cam4_indicators_pane_g

0xec33,	// (0x00080cd1) cam4_indicators_pane_t1

0x7e59,	// (0x00079ef7) main_video4_pane_g1_ParamLimits

0x7e59,	// (0x00079ef7) main_video4_pane_g1

0x7e6b,	// (0x00079f09) main_video4_pane_g2_ParamLimits

0x7e6b,	// (0x00079f09) main_video4_pane_g2

0x7e7f,	// (0x00079f1d) main_video4_pane_g3_ParamLimits

0x7e7f,	// (0x00079f1d) main_video4_pane_g3

0x7e8f,	// (0x00079f2d) main_video4_pane_g4_ParamLimits

0x7e8f,	// (0x00079f2d) main_video4_pane_g4

0x0004,

0xf8ee,	// (0x0008198c) main_video4_pane_g_ParamLimits

0xf8ee,	// (0x0008198c) main_video4_pane_g

0x7eaf,	// (0x00079f4d) vid4_indicators_pane_ParamLimits

0x7eaf,	// (0x00079f4d) vid4_indicators_pane

0x7edf,	// (0x00079f7d) video4_image_uncrop_cif_pane_ParamLimits

0x7edf,	// (0x00079f7d) video4_image_uncrop_cif_pane

0x7ef9,	// (0x00079f97) video4_image_uncrop_nhd_pane_ParamLimits

0x7ef9,	// (0x00079f97) video4_image_uncrop_nhd_pane

0x7d58,	// (0x00079df6) video4_image_uncrop_vga_pane_ParamLimits

0x7d58,	// (0x00079df6) video4_image_uncrop_vga_pane

0xc895,	// (0x0007e933) bg_tb_trans_pane_cp07

0x7f0f,	// (0x00079fad) vid4_indicators_pane_g1

0x7f1c,	// (0x00079fba) vid4_indicators_pane_g2

0x7f29,	// (0x00079fc7) vid4_indicators_pane_g3

0x0004,

0xf8f9,	// (0x00081997) vid4_indicators_pane_g

0x7f4e,	// (0x00079fec) vid4_indicators_pane_t1

0x7f60,	// (0x00079ffe) cam4_autofocus_pane_g1

0x7f68,	// (0x0007a006) cam4_autofocus_pane_g2

0x7f70,	// (0x0007a00e) cam4_autofocus_pane_g3

0x0002,

0xf904,	// (0x000819a2) cam4_autofocus_pane_g

0x7f78,	// (0x0007a016) cam4_autofocus_pane_g3_copy1

0x77f5,	// (0x00079893) video_down_pane_cp_t1

0x7803,	// (0x000798a1) video_down_pane_cp_t2

0x0001,

0xf880,	// (0x0008191e) video_down_pane_cp_t

0x188d,	// (0x0007392b) popup_vitu2_window_ParamLimits

0x188d,	// (0x0007392b) popup_vitu2_window

0x7f80,	// (0x0007a01e) aid_size_cell2_itu2_ParamLimits

0x7f80,	// (0x0007a01e) aid_size_cell2_itu2

0x7fa6,	// (0x0007a044) aid_size_cell_itu2_ParamLimits

0x7fa6,	// (0x0007a044) aid_size_cell_itu2

0x8004,	// (0x0007a0a2) bg_popup_window_pane_cp09_ParamLimits

0x8004,	// (0x0007a0a2) bg_popup_window_pane_cp09

0x8012,	// (0x0007a0b0) field_vitu2_entry_pane_ParamLimits

0x8012,	// (0x0007a0b0) field_vitu2_entry_pane

0x803a,	// (0x0007a0d8) grid_vitu2_function_pane_ParamLimits

0x803a,	// (0x0007a0d8) grid_vitu2_function_pane

0x808b,	// (0x0007a129) grid_vitu2_itu_pane_ParamLimits

0x808b,	// (0x0007a129) grid_vitu2_itu_pane

0x8116,	// (0x0007a1b4) cell_vitu2_itu_pane_ParamLimits

0x8116,	// (0x0007a1b4) cell_vitu2_itu_pane

0x813c,	// (0x0007a1da) cell_vitu2_function_pane_ParamLimits

0x813c,	// (0x0007a1da) cell_vitu2_function_pane

0xc8a3,	// (0x0007e941) bg_popup_call_pane_cp08_ParamLimits

0xc8a3,	// (0x0007e941) bg_popup_call_pane_cp08

0xc8bc,	// (0x0007e95a) field_vitu2_entry_pane_g1

0xc8c8,	// (0x0007e966) field_vitu2_entry_pane_g2

0x0002,

0xf90b,	// (0x000819a9) field_vitu2_entry_pane_g

0x0e72,	// (0x00072f10) field_vitu2_entry_pane_t1_ParamLimits

0x0e72,	// (0x00072f10) field_vitu2_entry_pane_t1

0xc8e2,	// (0x0007e980) field_vitu2_entry_pane_t2_ParamLimits

0xc8e2,	// (0x0007e980) field_vitu2_entry_pane_t2

0x0001,

0xf912,	// (0x000819b0) field_vitu2_entry_pane_t_ParamLimits

0xf912,	// (0x000819b0) field_vitu2_entry_pane_t

0x8180,	// (0x0007a21e) bg_button_pane_cp010_ParamLimits

0x8180,	// (0x0007a21e) bg_button_pane_cp010

0x818e,	// (0x0007a22c) cell_vitu2_itu_pane_g1

0x81ac,	// (0x0007a24a) cell_vitu2_itu_pane_t1_ParamLimits

0x81ac,	// (0x0007a24a) cell_vitu2_itu_pane_t1

0x0e8f,	// (0x00072f2d) cell_vitu2_itu_pane_t2_ParamLimits

0x0e8f,	// (0x00072f2d) cell_vitu2_itu_pane_t2

0x0002,

0xf91c,	// (0x000819ba) cell_vitu2_itu_pane_t_ParamLimits

0xf91c,	// (0x000819ba) cell_vitu2_itu_pane_t

0x188d,	// (0x0007392b) bg_button_pane_cp011

0x8212,	// (0x0007a2b0) cell_vitu2_function_pane_g1

0xa974,	// (0x0007ca12) main_myfav_hc_pane

0x7bc1,	// (0x00079c5f) popup_image3_note_pane_ParamLimits

0x7bc1,	// (0x00079c5f) popup_image3_note_pane

0x7bdd,	// (0x00079c7b) popup_image3_tool_bar_pane_ParamLimits

0x7bdd,	// (0x00079c7b) popup_image3_tool_bar_pane

0x0f13,	// (0x00072fb1) cell_vitu2_itu_pane_t3_ParamLimits

0x0f13,	// (0x00072fb1) cell_vitu2_itu_pane_t3

0xa974,	// (0x0007ca12) bg_popup_trans_pane

0xc907,	// (0x0007e9a5) grid_image3_tool_bar_pane

0xc911,	// (0x0007e9af) bg_popup_trans_pane_g1

0x3391,	// (0x0007542f) bg_popup_trans_pane_g2

0xc919,	// (0x0007e9b7) bg_popup_trans_pane_g3

0xc921,	// (0x0007e9bf) bg_popup_trans_pane_g4

0xc929,	// (0x0007e9c7) bg_popup_trans_pane_g5

0xc931,	// (0x0007e9cf) bg_popup_trans_pane_g6

0xc939,	// (0x0007e9d7) bg_popup_trans_pane_g7

0xc941,	// (0x0007e9df) bg_popup_trans_pane_g8

0x3371,	// (0x0007540f) bg_popup_trans_pane_g9

0x0008,

0xf923,	// (0x000819c1) bg_popup_trans_pane_g

0xc949,	// (0x0007e9e7) cell_image3_tool_bar_pane_ParamLimits

0xc949,	// (0x0007e9e7) cell_image3_tool_bar_pane

0xc1ee,	// (0x0007e28c) cell_image3_tool_bar_pane_g1

0xa974,	// (0x0007ca12) bg_popup_trans_pane_cp1

0xc95f,	// (0x0007e9fd) popup_image3_note_pane_t1

0xc96d,	// (0x0007ea0b) popup_image3_note_pane_t2

0xc97b,	// (0x0007ea19) popup_image3_note_pane_t3

0x0002,

0xf936,	// (0x000819d4) popup_image3_note_pane_t

0xc98b,	// (0x0007ea29) popup_image3_note_pane_t3_copy1

0x8226,	// (0x0007a2c4) bg_myfav_hc_instruction_pane_ParamLimits

0x8226,	// (0x0007a2c4) bg_myfav_hc_instruction_pane

0x823e,	// (0x0007a2dc) cell_myfav_contact_pane_ParamLimits

0x823e,	// (0x0007a2dc) cell_myfav_contact_pane

0x825a,	// (0x0007a2f8) cell_myfav_contact_pane_cp1_ParamLimits

0x825a,	// (0x0007a2f8) cell_myfav_contact_pane_cp1

0x8272,	// (0x0007a310) cell_myfav_contact_pane_cp2_ParamLimits

0x8272,	// (0x0007a310) cell_myfav_contact_pane_cp2

0x828a,	// (0x0007a328) cell_myfav_contact_pane_cp3_ParamLimits

0x828a,	// (0x0007a328) cell_myfav_contact_pane_cp3

0x82a1,	// (0x0007a33f) cell_myfav_contact_pane_cp4_ParamLimits

0x82a1,	// (0x0007a33f) cell_myfav_contact_pane_cp4

0x82b9,	// (0x0007a357) cell_myfav_contact_pane_cp5_ParamLimits

0x82b9,	// (0x0007a357) cell_myfav_contact_pane_cp5

0x82cd,	// (0x0007a36b) cell_myfav_contact_pane_cp6_ParamLimits

0x82cd,	// (0x0007a36b) cell_myfav_contact_pane_cp6

0x82e3,	// (0x0007a381) cell_myfav_contact_pane_cp7_ParamLimits

0x82e3,	// (0x0007a381) cell_myfav_contact_pane_cp7

0xc999,	// (0x0007ea37) listscroll_gen_pane_cp05

0x82fb,	// (0x0007a399) main_myfav_hc_pane_g1_ParamLimits

0x82fb,	// (0x0007a399) main_myfav_hc_pane_g1

0x8315,	// (0x0007a3b3) main_myfav_hc_pane_g2_ParamLimits

0x8315,	// (0x0007a3b3) main_myfav_hc_pane_g2

0x0002,

0xf93d,	// (0x000819db) main_myfav_hc_pane_g_ParamLimits

0xf93d,	// (0x000819db) main_myfav_hc_pane_g

0x8349,	// (0x0007a3e7) main_myfav_hc_pane_t1_ParamLimits

0x8349,	// (0x0007a3e7) main_myfav_hc_pane_t1

0xc9a2,	// (0x0007ea40) main_myfav_hc_pane_t2_ParamLimits

0xc9a2,	// (0x0007ea40) main_myfav_hc_pane_t2

0xc9b4,	// (0x0007ea52) main_myfav_hc_pane_t3_ParamLimits

0xc9b4,	// (0x0007ea52) main_myfav_hc_pane_t3

0x8360,	// (0x0007a3fe) main_myfav_hc_pane_t4_ParamLimits

0x8360,	// (0x0007a3fe) main_myfav_hc_pane_t4

0x0004,

0xf944,	// (0x000819e2) main_myfav_hc_pane_t_ParamLimits

0xf944,	// (0x000819e2) main_myfav_hc_pane_t

0xc1ee,	// (0x0007e28c) bg_myfav_hc_instruction_pane_g1

0xc9c6,	// (0x0007ea64) cell_myfav_contact_pane_g1_ParamLimits

0xc9c6,	// (0x0007ea64) cell_myfav_contact_pane_g1

0xc9c6,	// (0x0007ea64) cell_myfav_contact_pane_g2_ParamLimits

0xc9c6,	// (0x0007ea64) cell_myfav_contact_pane_g2

0xc9d2,	// (0x0007ea70) cell_myfav_contact_pane_g3_ParamLimits

0xc9d2,	// (0x0007ea70) cell_myfav_contact_pane_g3

0xc4af,	// (0x0007e54d) cell_myfav_contact_pane_g4_ParamLimits

0xc4af,	// (0x0007e54d) cell_myfav_contact_pane_g4

0xc9df,	// (0x0007ea7d) cell_myfav_contact_pane_g5_ParamLimits

0xc9df,	// (0x0007ea7d) cell_myfav_contact_pane_g5

0x0004,

0xf94f,	// (0x000819ed) cell_myfav_contact_pane_g_ParamLimits

0xf94f,	// (0x000819ed) cell_myfav_contact_pane_g

0x832f,	// (0x0007a3cd) main_myfav_hc_pane_g3_ParamLimits

0x832f,	// (0x0007a3cd) main_myfav_hc_pane_g3

0x17c5,	// (0x00073863) popup_adpt_find_window

0x838a,	// (0x0007a428) afind_page_pane_ParamLimits

0x838a,	// (0x0007a428) afind_page_pane

0x839f,	// (0x0007a43d) aid_size_cell_afind_ParamLimits

0x839f,	// (0x0007a43d) aid_size_cell_afind

0x83bd,	// (0x0007a45b) bg_popup_sub_pane_cp09_ParamLimits

0x83bd,	// (0x0007a45b) bg_popup_sub_pane_cp09

0x83ca,	// (0x0007a468) find_pane_cp01_ParamLimits

0x83ca,	// (0x0007a468) find_pane_cp01

0xc9eb,	// (0x0007ea89) grid_afind_control_pane_ParamLimits

0xc9eb,	// (0x0007ea89) grid_afind_control_pane

0x83d7,	// (0x0007a475) grid_afind_pane_ParamLimits

0x83d7,	// (0x0007a475) grid_afind_pane

0x83f9,	// (0x0007a497) cell_afind_pane_ParamLimits

0x83f9,	// (0x0007a497) cell_afind_pane

0xc1ee,	// (0x0007e28c) afind_page_pane_g1

0x8460,	// (0x0007a4fe) afind_page_pane_g2

0x8469,	// (0x0007a507) afind_page_pane_g3

0x0002,

0xf95a,	// (0x000819f8) afind_page_pane_g

0x8472,	// (0x0007a510) afind_page_pane_t1

0xc9ff,	// (0x0007ea9d) cell_afind_grid_control_pane_ParamLimits

0xc9ff,	// (0x0007ea9d) cell_afind_grid_control_pane

0xc798,	// (0x0007e836) bg_button_pane_cp69_ParamLimits

0xc798,	// (0x0007e836) bg_button_pane_cp69

0x8492,	// (0x0007a530) cell_afind_pane_g1_ParamLimits

0x8492,	// (0x0007a530) cell_afind_pane_g1

0x849f,	// (0x0007a53d) cell_afind_pane_t1_ParamLimits

0x849f,	// (0x0007a53d) cell_afind_pane_t1

0x2dca,	// (0x00074e68) bg_button_pane_cp72

0xca0e,	// (0x0007eaac) cell_afind_grid_control_pane_g1

0x54e1,	// (0x0007757f) aid_image_placing_area_ParamLimits

0x54e1,	// (0x0007757f) aid_image_placing_area

0xee1f,	// (0x00080ebd) field_vitu_entry_pane_g1_ParamLimits

0xee1f,	// (0x00080ebd) field_vitu_entry_pane_g1

0xee2b,	// (0x00080ec9) field_vitu_entry_pane_g2_ParamLimits

0xee2b,	// (0x00080ec9) field_vitu_entry_pane_g2

0x0001,

0x05cb,	// (0x00072669) field_vitu_entry_pane_g_ParamLimits

0x05cb,	// (0x00072669) field_vitu_entry_pane_g

0x7603,	// (0x000796a1) cell_vitu_itu_pane_g1_ParamLimits

0x7645,	// (0x000796e3) cell_vitu_itu_pane_t3_ParamLimits

0x7645,	// (0x000796e3) cell_vitu_itu_pane_t3

0xc748,	// (0x0007e7e6) mp4_progress_pane_t1_ParamLimits

0xc761,	// (0x0007e7ff) mp4_progress_pane_t2_ParamLimits

0xf8a0,	// (0x0008193e) mp4_progress_pane_t_ParamLimits

0xc77a,	// (0x0007e818) mup_progress_pane_cp04_ParamLimits

0x8374,	// (0x0007a412) main_myfav_hc_pane_t5_ParamLimits

0x8374,	// (0x0007a412) main_myfav_hc_pane_t5

0xa99a,	// (0x0007ca38) aid_zoom_text_primary

0x17c5,	// (0x00073863) popup_adpt_find_window_ParamLimits

0x188d,	// (0x0007392b) main_cam_set_pane

0x7d8a,	// (0x00079e28) cam4_zoom_pane_ParamLimits

0x7d8a,	// (0x00079e28) cam4_zoom_pane

0x84b1,	// (0x0007a54f) main_cam_set_pane_g1_ParamLimits

0x84b1,	// (0x0007a54f) main_cam_set_pane_g1

0x84bf,	// (0x0007a55d) main_cam_set_pane_g2_ParamLimits

0x84bf,	// (0x0007a55d) main_cam_set_pane_g2

0x0001,

0xf961,	// (0x000819ff) main_cam_set_pane_g_ParamLimits

0xf961,	// (0x000819ff) main_cam_set_pane_g

0x84e2,	// (0x0007a580) main_cam_set_pane_t1_ParamLimits

0x84e2,	// (0x0007a580) main_cam_set_pane_t1

0x84fd,	// (0x0007a59b) main_cset_listscroll_pane_ParamLimits

0x84fd,	// (0x0007a59b) main_cset_listscroll_pane

0x8521,	// (0x0007a5bf) main_cset_slider_pane_ParamLimits

0x8521,	// (0x0007a5bf) main_cset_slider_pane

0xca1f,	// (0x0007eabd) main_cset_list_pane_ParamLimits

0xca1f,	// (0x0007eabd) main_cset_list_pane

0xca2f,	// (0x0007eacd) scroll_pane_cp028

0x854b,	// (0x0007a5e9) aid_area_touch_slider

0x8567,	// (0x0007a605) cset_slider_pane

0x8591,	// (0x0007a62f) main_cset_slider_pane_g1

0x85a6,	// (0x0007a644) main_cset_slider_pane_g2

0x0011,

0xf966,	// (0x00081a04) main_cset_slider_pane_g

0xca68,	// (0x0007eb06) main_cset_slider_pane_t1

0x8668,	// (0x0007a706) main_cset_slider_pane_t2

0x8682,	// (0x0007a720) main_cset_slider_pane_t3

0x869c,	// (0x0007a73a) main_cset_slider_pane_t4

0x86b6,	// (0x0007a754) main_cset_slider_pane_t5

0x86d4,	// (0x0007a772) main_cset_slider_pane_t6

0x86eb,	// (0x0007a789) main_cset_slider_pane_t7

0x000e,

0xf98b,	// (0x00081a29) main_cset_slider_pane_t

0x87f7,	// (0x0007a895) cset_list_set_pane_ParamLimits

0x87f7,	// (0x0007a895) cset_list_set_pane

0x880b,	// (0x0007a8a9) aid_position_infowindow_above

0x8813,	// (0x0007a8b1) aid_position_infowindow_below

0xec61,	// (0x00080cff) cset_list_set_pane_g1_ParamLimits

0xec61,	// (0x00080cff) cset_list_set_pane_g1

0x0f6b,	// (0x00073009) cset_list_set_pane_g3_ParamLimits

0x0f6b,	// (0x00073009) cset_list_set_pane_g3

0x0001,

0xf9aa,	// (0x00081a48) cset_list_set_pane_g_ParamLimits

0xf9aa,	// (0x00081a48) cset_list_set_pane_g

0x0f7a,	// (0x00073018) cset_list_set_pane_t1_ParamLimits

0x0f7a,	// (0x00073018) cset_list_set_pane_t1

0x188d,	// (0x0007392b) list_highlight_pane_cp021_ParamLimits

0x188d,	// (0x0007392b) list_highlight_pane_cp021

0x4d5e,	// (0x00076dfc) cset_slider_pane_g1

0x4d70,	// (0x00076e0e) cset_slider_pane_g2

0x4d67,	// (0x00076e05) cset_slider_pane_g3

0x0002,

0xf9af,	// (0x00081a4d) cset_slider_pane_g

0xec6d,	// (0x00080d0b) aid_area_touch_cam4_zoom

0xec75,	// (0x00080d13) cam4_zoom_cont_pane

0xec7d,	// (0x00080d1b) cam4_zoom_pane_g1

0xec85,	// (0x00080d23) cam4_zoom_pane_g2

0x881b,	// (0x0007a8b9) cam4_zoom_pane_g3

0x0002,

0xf9b6,	// (0x00081a54) cam4_zoom_pane_g

0xcb08,	// (0x0007eba6) cam4_zoom_cont_pane_g1

0xcb11,	// (0x0007ebaf) cam4_zoom_cont_pane_g2

0xcb1a,	// (0x0007ebb8) cam4_zoom_cont_pane_g3

0x0002,

0xf9bd,	// (0x00081a5b) cam4_zoom_cont_pane_g

0x7c49,	// (0x00079ce7) call4_image_pane_ParamLimits

0x7c49,	// (0x00079ce7) call4_image_pane

0xc7a4,	// (0x0007e842) call4_windows_conf_pane_ParamLimits

0xc7eb,	// (0x0007e889) popup_call4_audio_in_window_ParamLimits

0xc7eb,	// (0x0007e889) popup_call4_audio_in_window

0xa974,	// (0x0007ca12) bg_popup_call2_act_pane_cp02

0xc863,	// (0x0007e901) call4_list_conf_pane

0xc1ee,	// (0x0007e28c) call4_image_pane_g1

0xc1ee,	// (0x0007e28c) call4_image_pane_g2

0x0001,

0xf70f,	// (0x000817ad) call4_image_pane_g

0xcb23,	// (0x0007ebc1) list_single_graphic_popup_conf4_pane_ParamLimits

0xcb23,	// (0x0007ebc1) list_single_graphic_popup_conf4_pane

0xa974,	// (0x0007ca12) list_highlight_pane_cp022

0xcb38,	// (0x0007ebd6) list_single_graphic_popup_conf4_pane_g1

0x426c,	// (0x0007630a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c4,	// (0x00081a62) list_single_graphic_popup_conf4_pane_g

0xcb40,	// (0x0007ebde) list_single_graphic_popup_conf4_pane_t1

0x2f47,	// (0x00074fe5) popup_vtel_slider_window_ParamLimits

0x2f47,	// (0x00074fe5) popup_vtel_slider_window

0xc786,	// (0x0007e824) dialer2_ne_pane_t2_ParamLimits

0xc786,	// (0x0007e824) dialer2_ne_pane_t2

0x0001,

0xf8a5,	// (0x00081943) dialer2_ne_pane_t_ParamLimits

0xf8a5,	// (0x00081943) dialer2_ne_pane_t

0xbfcd,	// (0x0007e06b) bg_popup_sub_pane_cp010_ParamLimits

0xbfcd,	// (0x0007e06b) bg_popup_sub_pane_cp010

0x8823,	// (0x0007a8c1) popup_vtel_slider_window_g1_ParamLimits

0x8823,	// (0x0007a8c1) popup_vtel_slider_window_g1

0x8836,	// (0x0007a8d4) popup_vtel_slider_window_g2_ParamLimits

0x8836,	// (0x0007a8d4) popup_vtel_slider_window_g2

0x0003,

0xf9c9,	// (0x00081a67) popup_vtel_slider_window_g_ParamLimits

0xf9c9,	// (0x00081a67) popup_vtel_slider_window_g

0x888c,	// (0x0007a92a) vtel_slider_pane_ParamLimits

0x888c,	// (0x0007a92a) vtel_slider_pane

0x88ae,	// (0x0007a94c) vtel_slider_pane_g1_ParamLimits

0x88ae,	// (0x0007a94c) vtel_slider_pane_g1

0x88c2,	// (0x0007a960) vtel_slider_pane_g2_ParamLimits

0x88c2,	// (0x0007a960) vtel_slider_pane_g2

0x88da,	// (0x0007a978) vtel_slider_pane_g3_ParamLimits

0x88da,	// (0x0007a978) vtel_slider_pane_g3

0x88ae,	// (0x0007a94c) vtel_slider_pane_g4_ParamLimits

0x88ae,	// (0x0007a94c) vtel_slider_pane_g4

0x88f0,	// (0x0007a98e) vtel_slider_pane_g5_ParamLimits

0x88f0,	// (0x0007a98e) vtel_slider_pane_g5

0x0004,

0xf9d2,	// (0x00081a70) vtel_slider_pane_g_ParamLimits

0xf9d2,	// (0x00081a70) vtel_slider_pane_g

0xa974,	// (0x0007ca12) main_gallery2_pane

0x7fd2,	// (0x0007a070) aid_size_row_itut2_dropdow_list_ParamLimits

0x7fd2,	// (0x0007a070) aid_size_row_itut2_dropdow_list

0x8062,	// (0x0007a100) grid_vitu2_function_top_pane_ParamLimits

0x8062,	// (0x0007a100) grid_vitu2_function_top_pane

0x80c1,	// (0x0007a15f) popup_vitu2_dropdown_list_window_ParamLimits

0x80c1,	// (0x0007a15f) popup_vitu2_dropdown_list_window

0x80ea,	// (0x0007a188) popup_vitu2_match_list_window

0x8906,	// (0x0007a9a4) cell_vitu2_function_top_pane_ParamLimits

0x8906,	// (0x0007a9a4) cell_vitu2_function_top_pane

0x8926,	// (0x0007a9c4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8926,	// (0x0007a9c4) cell_vitu2_function_top_pane_cp01

0x8944,	// (0x0007a9e2) cell_vitu2_function_top_wide_pane_ParamLimits

0x8944,	// (0x0007a9e2) cell_vitu2_function_top_wide_pane

0x188d,	// (0x0007392b) bg_button_pane_cp012

0x8962,	// (0x0007aa00) cell_vitu2_function_top_pane_g1

0xec8d,	// (0x00080d2b) bg_button_pane_cp013_ParamLimits

0xec8d,	// (0x00080d2b) bg_button_pane_cp013

0x8976,	// (0x0007aa14) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8976,	// (0x0007aa14) cell_vitu2_function_top_wide_pane_g1

0x188d,	// (0x0007392b) bg_popup_sub_pane_cp20

0x898e,	// (0x0007aa2c) list_vitu2_match_list_pane

0xc911,	// (0x0007e9af) bg_popup_sub_pane_cp20_g1

0xc919,	// (0x0007e9b7) bg_popup_sub_pane_cp20_g2

0x3391,	// (0x0007542f) bg_popup_sub_pane_cp20_g3

0xc921,	// (0x0007e9bf) bg_popup_sub_pane_cp20_g4

0x3371,	// (0x0007540f) bg_popup_sub_pane_cp20_g5

0xcb5c,	// (0x0007ebfa) bg_popup_sub_pane_cp20_g6

0xc931,	// (0x0007e9cf) bg_popup_sub_pane_cp20_g7

0xc939,	// (0x0007e9d7) bg_popup_sub_pane_cp20_g8

0xc941,	// (0x0007e9df) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9dd,	// (0x00081a7b) bg_popup_sub_pane_cp20_g

0xeca9,	// (0x00080d47) list_vitu2_match_list_item_pane_ParamLimits

0xeca9,	// (0x00080d47) list_vitu2_match_list_item_pane

0xecbb,	// (0x00080d59) list_vitu2_match_list_item_pane_t1

0xa974,	// (0x0007ca12) bg_popup_sub_pane_cp21

0x4171,	// (0x0007620f) grid_vitu2_dropdown_list_pane

0x89ac,	// (0x0007aa4a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x89ac,	// (0x0007aa4a) cell_vitu2_dropdown_list_char_pane

0x89cf,	// (0x0007aa6d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x89cf,	// (0x0007aa6d) cell_vitu2_dropdown_list_ctrl_pane

0xcb7c,	// (0x0007ec1a) cell_vitu2_dropdown_list_char_pane_g1

0xcb85,	// (0x0007ec23) cell_vitu2_dropdown_list_char_pane_g2

0xcb8e,	// (0x0007ec2c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9fa,	// (0x00081a98) cell_vitu2_dropdown_list_char_pane_g

0x89fd,	// (0x0007aa9b) cell_vitu2_dropdown_list_char_pane_t1

0x8a0b,	// (0x0007aaa9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a0b,	// (0x0007aaa9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a1b,	// (0x0007aab9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a1b,	// (0x0007aab9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a2c,	// (0x0007aaca) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a2c,	// (0x0007aaca) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8a3c,	// (0x0007aada) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8a3c,	// (0x0007aada) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc41e,	// (0x0007e4bc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc41e,	// (0x0007e4bc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa01,	// (0x00081a9f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa01,	// (0x00081a9f) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a58,	// (0x0007aaf6) aid_size_cell_gallery2_ParamLimits

0x8a58,	// (0x0007aaf6) aid_size_cell_gallery2

0x8a6e,	// (0x0007ab0c) grid_gallery2_pane_ParamLimits

0x8a6e,	// (0x0007ab0c) grid_gallery2_pane

0x8a82,	// (0x0007ab20) scroll_pane_cp029_ParamLimits

0x8a82,	// (0x0007ab20) scroll_pane_cp029

0x8a8e,	// (0x0007ab2c) cell_gallery2_pane_ParamLimits

0x8a8e,	// (0x0007ab2c) cell_gallery2_pane

0xcb97,	// (0x0007ec35) cell_gallery2_pane_g2

0x8ac8,	// (0x0007ab66) cell_gallery2_pane_g3

0xcba1,	// (0x0007ec3f) cell_gallery2_pane_g4

0xcba9,	// (0x0007ec47) cell_gallery2_pane_g5

0x47c4,	// (0x00076862) grid_highlight_pane_cp10

0x80ea,	// (0x0007a188) popup_vitu2_match_list_window_ParamLimits

0x8101,	// (0x0007a19f) popup_vitu2_query_window_ParamLimits

0x8101,	// (0x0007a19f) popup_vitu2_query_window

0xa974,	// (0x0007ca12) bg_vitu2_candi_button_pane

0xcb7c,	// (0x0007ec1a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcb85,	// (0x0007ec23) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcb8e,	// (0x0007ec2c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fbb,	// (0x00073059) bg_button_pane_cp015

0x8ad0,	// (0x0007ab6e) bg_button_pane_cp016

0x8ada,	// (0x0007ab78) bg_button_pane_cp017

0x188d,	// (0x0007392b) bg_popup_sub_pane_cp22

0xcbb1,	// (0x0007ec4f) popup_vitu2_query_window_g1

0x0fd2,	// (0x00073070) popup_vitu2_query_window_g2

0x0001,

0xfa0c,	// (0x00081aaa) popup_vitu2_query_window_g

0x0fe0,	// (0x0007307e) popup_vitu2_query_window_t1_ParamLimits

0x0fe0,	// (0x0007307e) popup_vitu2_query_window_t1

0x1008,	// (0x000730a6) popup_vitu2_query_window_t2_ParamLimits

0x1008,	// (0x000730a6) popup_vitu2_query_window_t2

0x101a,	// (0x000730b8) popup_vitu2_query_window_t3_ParamLimits

0x101a,	// (0x000730b8) popup_vitu2_query_window_t3

0x8af5,	// (0x0007ab93) popup_vitu2_query_window_t4_ParamLimits

0x8af5,	// (0x0007ab93) popup_vitu2_query_window_t4

0x8b09,	// (0x0007aba7) popup_vitu2_query_window_t5_ParamLimits

0x8b09,	// (0x0007aba7) popup_vitu2_query_window_t5

0x0004,

0xfa11,	// (0x00081aaf) popup_vitu2_query_window_t_ParamLimits

0xfa11,	// (0x00081aaf) popup_vitu2_query_window_t

0xca17,	// (0x0007eab5) main_cset_text_pane

0x854b,	// (0x0007a5e9) aid_area_touch_slider_ParamLimits

0x8567,	// (0x0007a605) cset_slider_pane_ParamLimits

0x8591,	// (0x0007a62f) main_cset_slider_pane_g1_ParamLimits

0x85a6,	// (0x0007a644) main_cset_slider_pane_g2_ParamLimits

0xca38,	// (0x0007ead6) main_cset_slider_pane_g3_ParamLimits

0xca38,	// (0x0007ead6) main_cset_slider_pane_g3

0x85bb,	// (0x0007a659) main_cset_slider_pane_g4_ParamLimits

0x85bb,	// (0x0007a659) main_cset_slider_pane_g4

0x85ca,	// (0x0007a668) main_cset_slider_pane_g5_ParamLimits

0x85ca,	// (0x0007a668) main_cset_slider_pane_g5

0x85d8,	// (0x0007a676) main_cset_slider_pane_g6_ParamLimits

0x85d8,	// (0x0007a676) main_cset_slider_pane_g6

0xf966,	// (0x00081a04) main_cset_slider_pane_g_ParamLimits

0xca68,	// (0x0007eb06) main_cset_slider_pane_t1_ParamLimits

0x8668,	// (0x0007a706) main_cset_slider_pane_t2_ParamLimits

0x8682,	// (0x0007a720) main_cset_slider_pane_t3_ParamLimits

0x869c,	// (0x0007a73a) main_cset_slider_pane_t4_ParamLimits

0x86b6,	// (0x0007a754) main_cset_slider_pane_t5_ParamLimits

0x86d4,	// (0x0007a772) main_cset_slider_pane_t6_ParamLimits

0x86eb,	// (0x0007a789) main_cset_slider_pane_t7_ParamLimits

0x8719,	// (0x0007a7b7) main_cset_slider_pane_t8_ParamLimits

0x8719,	// (0x0007a7b7) main_cset_slider_pane_t8

0x8741,	// (0x0007a7df) main_cset_slider_pane_t9_ParamLimits

0x8741,	// (0x0007a7df) main_cset_slider_pane_t9

0x8769,	// (0x0007a807) main_cset_slider_pane_t10_ParamLimits

0x8769,	// (0x0007a807) main_cset_slider_pane_t10

0x8791,	// (0x0007a82f) main_cset_slider_pane_t11_ParamLimits

0x8791,	// (0x0007a82f) main_cset_slider_pane_t11

0x87bb,	// (0x0007a859) main_cset_slider_pane_t12_ParamLimits

0x87bb,	// (0x0007a859) main_cset_slider_pane_t12

0x87d8,	// (0x0007a876) main_cset_slider_pane_t13_ParamLimits

0x87d8,	// (0x0007a876) main_cset_slider_pane_t13

0xf98b,	// (0x00081a29) main_cset_slider_pane_t_ParamLimits

0xa974,	// (0x0007ca12) bg_popup_sub_pane_cp011

0xcbbd,	// (0x0007ec5b) main_cset_text_pane_g1

0xcbc5,	// (0x0007ec63) main_cset_text_pane_t1

0xcbd3,	// (0x0007ec71) main_cset_text_pane_t2

0xcbe1,	// (0x0007ec7f) main_cset_text_pane_t3

0xcbef,	// (0x0007ec8d) main_cset_text_pane_t4

0xcbfd,	// (0x0007ec9b) main_cset_text_pane_t5

0xcc0b,	// (0x0007eca9) main_cset_text_pane_t6

0xcc19,	// (0x0007ecb7) main_cset_text_pane_t7

0x0006,

0xfa1c,	// (0x00081aba) main_cset_text_pane_t

0xa974,	// (0x0007ca12) main_cam4_burst_pane

0xa974,	// (0x0007ca12) main_cam5_pane

0x8480,	// (0x0007a51e) bg_button_pane_cp019

0x8489,	// (0x0007a527) bg_button_pane_cp020

0xca44,	// (0x0007eae2) main_cset_slider_pane_g7_ParamLimits

0xca44,	// (0x0007eae2) main_cset_slider_pane_g7

0xca50,	// (0x0007eaee) main_cset_slider_pane_g8_ParamLimits

0xca50,	// (0x0007eaee) main_cset_slider_pane_g8

0x85ec,	// (0x0007a68a) main_cset_slider_pane_g9_ParamLimits

0x85ec,	// (0x0007a68a) main_cset_slider_pane_g9

0x85f8,	// (0x0007a696) main_cset_slider_pane_g10_ParamLimits

0x85f8,	// (0x0007a696) main_cset_slider_pane_g10

0x8604,	// (0x0007a6a2) main_cset_slider_pane_g11_ParamLimits

0x8604,	// (0x0007a6a2) main_cset_slider_pane_g11

0x8610,	// (0x0007a6ae) main_cset_slider_pane_g12_ParamLimits

0x8610,	// (0x0007a6ae) main_cset_slider_pane_g12

0x861c,	// (0x0007a6ba) main_cset_slider_pane_g13_ParamLimits

0x861c,	// (0x0007a6ba) main_cset_slider_pane_g13

0x8628,	// (0x0007a6c6) main_cset_slider_pane_g14_ParamLimits

0x8628,	// (0x0007a6c6) main_cset_slider_pane_g14

0x8634,	// (0x0007a6d2) main_cset_slider_pane_g15_ParamLimits

0x8634,	// (0x0007a6d2) main_cset_slider_pane_g15

0xca96,	// (0x0007eb34) main_cset_slider_pane_t14_ParamLimits

0xca96,	// (0x0007eb34) main_cset_slider_pane_t14

0xcacf,	// (0x0007eb6d) main_cset_slider_pane_t15_ParamLimits

0xcacf,	// (0x0007eb6d) main_cset_slider_pane_t15

0x8b1d,	// (0x0007abbb) aid_cam4_burst_size_cell_ParamLimits

0x8b1d,	// (0x0007abbb) aid_cam4_burst_size_cell

0x8b3d,	// (0x0007abdb) grid_cam4_burst_pane_ParamLimits

0x8b3d,	// (0x0007abdb) grid_cam4_burst_pane

0x8b77,	// (0x0007ac15) linegrid_cam4_burst_pane_ParamLimits

0x8b77,	// (0x0007ac15) linegrid_cam4_burst_pane

0xcc27,	// (0x0007ecc5) scroll_pane_cp30_ParamLimits

0xcc27,	// (0x0007ecc5) scroll_pane_cp30

0x8b9b,	// (0x0007ac39) cell_cam4_burst_pane_ParamLimits

0x8b9b,	// (0x0007ac39) cell_cam4_burst_pane

0xcc33,	// (0x0007ecd1) linegrid_cam4_burst_pane_g1_ParamLimits

0xcc33,	// (0x0007ecd1) linegrid_cam4_burst_pane_g1

0x8bf0,	// (0x0007ac8e) linegrid_cam4_burst_pane_g2_ParamLimits

0x8bf0,	// (0x0007ac8e) linegrid_cam4_burst_pane_g2

0xcc40,	// (0x0007ecde) linegrid_cam4_burst_pane_g3_ParamLimits

0xcc40,	// (0x0007ecde) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2b,	// (0x00081ac9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2b,	// (0x00081ac9) linegrid_cam4_burst_pane_g

0x8c01,	// (0x0007ac9f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c01,	// (0x0007ac9f) linegrid_cam4_burst_pane_g3_copy1

0xcc4d,	// (0x0007eceb) linegrid_cam4_burst_pane_g4_ParamLimits

0xcc4d,	// (0x0007eceb) linegrid_cam4_burst_pane_g4

0x8c1f,	// (0x0007acbd) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c1f,	// (0x0007acbd) linegrid_cam4_burst_pane_g5

0x8c30,	// (0x0007acce) linegrid_cam4_burst_pane_g6_ParamLimits

0x8c30,	// (0x0007acce) linegrid_cam4_burst_pane_g6

0xcc5a,	// (0x0007ecf8) linegrid_cam4_burst_pane_g7_ParamLimits

0xcc5a,	// (0x0007ecf8) linegrid_cam4_burst_pane_g7

0x8c47,	// (0x0007ace5) cell_cam4_burst_pane_g1

0xcc73,	// (0x0007ed11) main_cam5_pane_t1_ParamLimits

0xcc73,	// (0x0007ed11) main_cam5_pane_t1

0xcc85,	// (0x0007ed23) main_cam5_pane_t2_ParamLimits

0xcc85,	// (0x0007ed23) main_cam5_pane_t2

0xcc97,	// (0x0007ed35) main_cam5_pane_t3_ParamLimits

0xcc97,	// (0x0007ed35) main_cam5_pane_t3

0xcca9,	// (0x0007ed47) main_cam5_pane_t4_ParamLimits

0xcca9,	// (0x0007ed47) main_cam5_pane_t4

0xccc1,	// (0x0007ed5f) main_cam5_pane_t5_ParamLimits

0xccc1,	// (0x0007ed5f) main_cam5_pane_t5

0xccd5,	// (0x0007ed73) main_cam5_pane_t6_ParamLimits

0xccd5,	// (0x0007ed73) main_cam5_pane_t6

0xcce9,	// (0x0007ed87) main_cam5_pane_t7_ParamLimits

0xcce9,	// (0x0007ed87) main_cam5_pane_t7

0xccfb,	// (0x0007ed99) main_cam5_pane_t8_ParamLimits

0xccfb,	// (0x0007ed99) main_cam5_pane_t8

0xcd19,	// (0x0007edb7) main_cam5_pane_t9_ParamLimits

0xcd19,	// (0x0007edb7) main_cam5_pane_t9

0xcd2b,	// (0x0007edc9) main_cam5_pane_t10_ParamLimits

0xcd2b,	// (0x0007edc9) main_cam5_pane_t10

0xcd3d,	// (0x0007eddb) main_cam5_pane_t11_ParamLimits

0xcd3d,	// (0x0007eddb) main_cam5_pane_t11

0xcd51,	// (0x0007edef) main_cam5_pane_t12_ParamLimits

0xcd51,	// (0x0007edef) main_cam5_pane_t12

0xcd68,	// (0x0007ee06) main_cam5_pane_t13_ParamLimits

0xcd68,	// (0x0007ee06) main_cam5_pane_t13

0x000c,

0xfa37,	// (0x00081ad5) main_cam5_pane_t_ParamLimits

0xfa37,	// (0x00081ad5) main_cam5_pane_t

0x1853,	// (0x000738f1) popup_scut_keymap_window_ParamLimits

0x1853,	// (0x000738f1) popup_scut_keymap_window

0x8c5a,	// (0x0007acf8) aid_size_cell_brow_shortcut

0x47c4,	// (0x00076862) bg_popup_window_pane_cp010

0x8c66,	// (0x0007ad04) grid_scut_pane

0x8c72,	// (0x0007ad10) cell_scut_pane_ParamLimits

0x8c72,	// (0x0007ad10) cell_scut_pane

0x8c8b,	// (0x0007ad29) cell_scut_pane_g1

0xcd8b,	// (0x0007ee29) cell_scut_pane_t1

0xcd9a,	// (0x0007ee38) cell_scut_pane_t2

0x8c94,	// (0x0007ad32) cell_scut_pane_t3

0x0002,

0xfa52,	// (0x00081af0) cell_scut_pane_t

0x6b1a,	// (0x00078bb8) main_mup3_pane_g8_ParamLimits

0x6b1a,	// (0x00078bb8) main_mup3_pane_g8

0x7fec,	// (0x0007a08a) area_vitu2_query_pane_ParamLimits

0x7fec,	// (0x0007a08a) area_vitu2_query_pane

0x0fc5,	// (0x00073063) input_focus_pane_cp08

0xcda9,	// (0x0007ee47) area_vitu2_query_pane_g1

0x1042,	// (0x000730e0) area_vitu2_query_pane_g2

0x0001,

0xfa59,	// (0x00081af7) area_vitu2_query_pane_g

0x8ca2,	// (0x0007ad40) area_vitu2_query_pane_t1_ParamLimits

0x8ca2,	// (0x0007ad40) area_vitu2_query_pane_t1

0x8cb6,	// (0x0007ad54) area_vitu2_query_pane_t2_ParamLimits

0x8cb6,	// (0x0007ad54) area_vitu2_query_pane_t2

0x1055,	// (0x000730f3) area_vitu2_query_pane_t3_ParamLimits

0x1055,	// (0x000730f3) area_vitu2_query_pane_t3

0xcdb5,	// (0x0007ee53) area_vitu2_query_pane_t4_ParamLimits

0xcdb5,	// (0x0007ee53) area_vitu2_query_pane_t4

0xcddd,	// (0x0007ee7b) area_vitu2_query_pane_t5_ParamLimits

0xcddd,	// (0x0007ee7b) area_vitu2_query_pane_t5

0xce05,	// (0x0007eea3) area_vitu2_query_pane_t6_ParamLimits

0xce05,	// (0x0007eea3) area_vitu2_query_pane_t6

0x0006,

0xfa5e,	// (0x00081afc) area_vitu2_query_pane_t_ParamLimits

0xfa5e,	// (0x00081afc) area_vitu2_query_pane_t

0x8cca,	// (0x0007ad68) bg_button_pane_cp018

0x8cd8,	// (0x0007ad76) bg_button_pane_cp021

0x107d,	// (0x0007311b) bg_button_pane_cp022

0x108e,	// (0x0007312c) input_focus_pane_cp09

0x45e9,	// (0x00076687) aid_size_touch_mv_arrow_left

0x4612,	// (0x000766b0) aid_size_touch_mv_arrow_right

0x864c,	// (0x0007a6ea) main_cset_slider_pane_g16_ParamLimits

0x864c,	// (0x0007a6ea) main_cset_slider_pane_g16

0x865a,	// (0x0007a6f8) main_cset_slider_pane_g17_ParamLimits

0x865a,	// (0x0007a6f8) main_cset_slider_pane_g17

0x8c47,	// (0x0007ace5) cell_cam4_burst_pane_g1_ParamLimits

0xa974,	// (0x0007ca12) compa_mode_pane

0x8846,	// (0x0007a8e4) popup_vtel_slider_window_g3_ParamLimits

0x8846,	// (0x0007a8e4) popup_vtel_slider_window_g3

0x885d,	// (0x0007a8fb) popup_vtel_slider_window_g4_ParamLimits

0x885d,	// (0x0007a8fb) popup_vtel_slider_window_g4

0x8874,	// (0x0007a912) popup_vtel_slider_window_t1_ParamLimits

0x8874,	// (0x0007a912) popup_vtel_slider_window_t1

0xa974,	// (0x0007ca12) main_cl_pane

0xbd52,	// (0x0007ddf0) popup_imed_adjust2_window_ParamLimits

0xbd26,	// (0x0007ddc4) bg_tb_trans_pane_cp05_ParamLimits

0xc701,	// (0x0007e79f) popup_imed_adjust2_window_g1_ParamLimits

0xc710,	// (0x0007e7ae) popup_imed_adjust2_window_g2_ParamLimits

0xc710,	// (0x0007e7ae) popup_imed_adjust2_window_g2

0xc71c,	// (0x0007e7ba) popup_imed_adjust2_window_g3_ParamLimits

0xc71c,	// (0x0007e7ba) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000818ab) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000818ab) popup_imed_adjust2_window_g

0xc728,	// (0x0007e7c6) popup_imed_adjust2_window_t1_ParamLimits

0xed93,	// (0x00080e31) slider_imed_adjust_pane_ParamLimits

0xeda7,	// (0x00080e45) slider_imed_adjust_pane_g1_ParamLimits

0xedb7,	// (0x00080e55) slider_imed_adjust_pane_g2_ParamLimits

0xedc7,	// (0x00080e65) slider_imed_adjust_pane_g3_ParamLimits

0xedd8,	// (0x00080e76) slider_imed_adjust_pane_g4_ParamLimits

0x0596,	// (0x00072634) slider_imed_adjust_pane_g_ParamLimits

0x7d2a,	// (0x00079dc8) aid_touch_area_cam4_ParamLimits

0x7d2a,	// (0x00079dc8) aid_touch_area_cam4

0xebec,	// (0x00080c8a) battery_pane_cp01

0x7dd5,	// (0x00079e73) main_camera4_pane_g6_ParamLimits

0x7dd5,	// (0x00079e73) main_camera4_pane_g6

0x7df8,	// (0x00079e96) main_camera4_pane_t2_ParamLimits

0x7df8,	// (0x00079e96) main_camera4_pane_t2

0x0001,

0xf8d9,	// (0x00081977) main_camera4_pane_t_ParamLimits

0xf8d9,	// (0x00081977) main_camera4_pane_t

0x7e41,	// (0x00079edf) aid_touch_area_vid4_ParamLimits

0x7e41,	// (0x00079edf) aid_touch_area_vid4

0x7e9f,	// (0x00079f3d) main_video4_pane_g5_ParamLimits

0x7e9f,	// (0x00079f3d) main_video4_pane_g5

0x7ec6,	// (0x00079f64) vid4_progress_pane_ParamLimits

0x7ec6,	// (0x00079f64) vid4_progress_pane

0xca5c,	// (0x0007eafa) main_cset_slider_pane_g18_ParamLimits

0xca5c,	// (0x0007eafa) main_cset_slider_pane_g18

0xcc67,	// (0x0007ed05) cell_cam4_burst_pane_g2_ParamLimits

0xcc67,	// (0x0007ed05) cell_cam4_burst_pane_g2

0x0001,

0xfa32,	// (0x00081ad0) cell_cam4_burst_pane_g_ParamLimits

0xfa32,	// (0x00081ad0) cell_cam4_burst_pane_g

0x232b,	// (0x000743c9) bg_cl_pane_ParamLimits

0x232b,	// (0x000743c9) bg_cl_pane

0x8ce4,	// (0x0007ad82) cl_header_pane_ParamLimits

0x8ce4,	// (0x0007ad82) cl_header_pane

0x8cf8,	// (0x0007ad96) cl_listscroll_pane_ParamLimits

0x8cf8,	// (0x0007ad96) cl_listscroll_pane

0xce51,	// (0x0007eeef) bg_cl_pane_g1

0xce59,	// (0x0007eef7) bg_cl_pane_g2

0xce61,	// (0x0007eeff) bg_cl_pane_g3

0xce69,	// (0x0007ef07) bg_cl_pane_g4

0xce71,	// (0x0007ef0f) bg_cl_pane_g5

0xce79,	// (0x0007ef17) bg_cl_pane_g6

0xce81,	// (0x0007ef1f) bg_cl_pane_g7

0xce89,	// (0x0007ef27) bg_cl_pane_g8

0xce91,	// (0x0007ef2f) bg_cl_pane_g9

0x0008,

0xfa6d,	// (0x00081b0b) bg_cl_pane_g

0x8d08,	// (0x0007ada6) aid_height_cl_leading_ParamLimits

0x8d08,	// (0x0007ada6) aid_height_cl_leading

0x8d14,	// (0x0007adb2) aid_height_cl_text_ParamLimits

0x8d14,	// (0x0007adb2) aid_height_cl_text

0x188d,	// (0x0007392b) bg_cl_header_pane_ParamLimits

0x188d,	// (0x0007392b) bg_cl_header_pane

0x8d33,	// (0x0007add1) cl_header_pane_g1_ParamLimits

0x8d33,	// (0x0007add1) cl_header_pane_g1

0x8d49,	// (0x0007ade7) cl_header_pane_t1_ParamLimits

0x8d49,	// (0x0007ade7) cl_header_pane_t1

0xce99,	// (0x0007ef37) cl_list_pane

0xca2f,	// (0x0007eacd) hc_scroll_pane_cp01

0x3371,	// (0x0007540f) bg_cl_header_pane_g1

0xc911,	// (0x0007e9af) bg_cl_header_pane_g2

0x3391,	// (0x0007542f) bg_cl_header_pane_g3

0xc921,	// (0x0007e9bf) bg_cl_header_pane_g4

0xc919,	// (0x0007e9b7) bg_cl_header_pane_g5

0xcb5c,	// (0x0007ebfa) bg_cl_header_pane_g6

0xc939,	// (0x0007e9d7) bg_cl_header_pane_g7

0xc941,	// (0x0007e9df) bg_cl_header_pane_g8

0xc931,	// (0x0007e9cf) bg_cl_header_pane_g9

0x0008,

0xfa80,	// (0x00081b1e) bg_cl_header_pane_g

0x8d62,	// (0x0007ae00) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d62,	// (0x0007ae00) hc_cl_list_double_graphic_heading_pane

0x8d75,	// (0x0007ae13) hc_cl_list_single_graphic_pane_ParamLimits

0x8d75,	// (0x0007ae13) hc_cl_list_single_graphic_pane

0x8d8d,	// (0x0007ae2b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d8d,	// (0x0007ae2b) hc_cl_list_single_graphic_pane_g1

0x8d99,	// (0x0007ae37) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d99,	// (0x0007ae37) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa93,	// (0x00081b31) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa93,	// (0x00081b31) hc_cl_list_single_graphic_pane_g

0x8dad,	// (0x0007ae4b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8dad,	// (0x0007ae4b) hc_cl_list_single_graphic_pane_t1

0x8d8d,	// (0x0007ae2b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d8d,	// (0x0007ae2b) hc_cl_list_double_graphic_heading_pane_g1

0x8dc2,	// (0x0007ae60) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8dc2,	// (0x0007ae60) hc_cl_list_double_graphic_heading_pane_g2

0x8dd6,	// (0x0007ae74) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8dd6,	// (0x0007ae74) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa98,	// (0x00081b36) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa98,	// (0x00081b36) hc_cl_list_double_graphic_heading_pane_g

0x8dea,	// (0x0007ae88) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8dea,	// (0x0007ae88) hc_cl_list_double_graphic_heading_pane_t1

0x8dff,	// (0x0007ae9d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8dff,	// (0x0007ae9d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9f,	// (0x00081b3d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9f,	// (0x00081b3d) hc_cl_list_double_graphic_heading_pane_t

0xecd1,	// (0x00080d6f) vid4_progress_pane_g1

0xecdd,	// (0x00080d7b) vid4_progress_pane_g2

0xece9,	// (0x00080d87) vid4_progress_pane_g3

0xecf8,	// (0x00080d96) vid4_progress_pane_g4

0x0004,

0xfaa4,	// (0x00081b42) vid4_progress_pane_g

0xed16,	// (0x00080db4) vid4_progress_pane_t1

0xed2c,	// (0x00080dca) vid4_progress_pane_t2

0x0002,

0xfaaf,	// (0x00081b4d) vid4_progress_pane_t

0xed57,	// (0x00080df5) wait_bar_pane_cp07

0xbfdb,	// (0x0007e079) blid_firmament_pane_ParamLimits

0xc01e,	// (0x0007e0bc) popup_blid_sat_info2_window_g1

0xc042,	// (0x0007e0e0) popup_blid_sat_info2_window_t3

0xc050,	// (0x0007e0ee) popup_blid_sat_info2_window_t4

0xc05e,	// (0x0007e0fc) popup_blid_sat_info2_window_t5

0xc06c,	// (0x0007e10a) popup_blid_sat_info2_window_t6

0xc07c,	// (0x0007e11a) popup_blid_sat_info2_window_t7

0xc08a,	// (0x0007e128) popup_blid_sat_info2_window_t8

0xc098,	// (0x0007e136) popup_blid_sat_info2_window_t9

0xc0a6,	// (0x0007e144) popup_blid_sat_info2_window_t10

0xc16e,	// (0x0007e20c) aid_firma_cardinal_ParamLimits

0xc182,	// (0x0007e220) blid_firmament_pane_t1_ParamLimits

0xc199,	// (0x0007e237) blid_firmament_pane_t2_ParamLimits

0xc1b0,	// (0x0007e24e) blid_firmament_pane_t3_ParamLimits

0xc1c7,	// (0x0007e265) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000817a4) blid_firmament_pane_t_ParamLimits

0xc1de,	// (0x0007e27c) blid_sat_info_pane_ParamLimits

0x188d,	// (0x0007392b) main_cam_set_pane_ParamLimits

0x73af,	// (0x0007944d) aid_size_cell_colour_35_ParamLimits

0x73cf,	// (0x0007946d) aid_size_cell_colour_112_ParamLimits

0x73ef,	// (0x0007948d) aid_size_cell_effect_ParamLimits

0xbd26,	// (0x0007ddc4) bg_tb_trans_pane_cp02_ParamLimits

0x3eaf,	// (0x00075f4d) heading_imed_pane_ParamLimits

0x740f,	// (0x000794ad) listscroll_imed_pane_ParamLimits

0xb354,	// (0x0007d3f2) popup_call2_audio_first_window_g5_ParamLimits

0xb354,	// (0x0007d3f2) popup_call2_audio_first_window_g5

0x79d4,	// (0x00079a72) aid_size_touch_image3_arrow_left_ParamLimits

0x79d4,	// (0x00079a72) aid_size_touch_image3_arrow_left

0x7a00,	// (0x00079a9e) aid_size_touch_image3_arrow_right_ParamLimits

0x7a00,	// (0x00079a9e) aid_size_touch_image3_arrow_right

0xed42,	// (0x00080de0) vid4_progress_pane_t3

0x772c,	// (0x000797ca) main_hwr_training_symbol_option_pane_ParamLimits

0x772c,	// (0x000797ca) main_hwr_training_symbol_option_pane

0xf043,	// (0x000810e1) popup_hwr_training_preview_window_ParamLimits

0xf043,	// (0x000810e1) popup_hwr_training_preview_window

0x774c,	// (0x000797ea) hwr_training_navi_pane_g5_ParamLimits

0x774c,	// (0x000797ea) hwr_training_navi_pane_g5

0xc8ff,	// (0x0007e99d) popup_char_count_window

0x188d,	// (0x0007392b) bg_popup_sub_pane_cp20_ParamLimits

0x898e,	// (0x0007aa2c) list_vitu2_match_list_pane_ParamLimits

0x899d,	// (0x0007aa3b) vitu2_page_scroll_pane_ParamLimits

0x899d,	// (0x0007aa3b) vitu2_page_scroll_pane

0xcef4,	// (0x0007ef92) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcef4,	// (0x0007ef92) list_single_hwr_training_symbol_option_pane

0xcf07,	// (0x0007efa5) list_single_hwr_training_symbol_option_pane_g1

0xcf0f,	// (0x0007efad) list_single_hwr_training_symbol_option_pane_t1

0xcf1d,	// (0x0007efbb) bg_button_pane_cp023

0xcf26,	// (0x0007efc4) bg_button_pane_cp024

0x8e1e,	// (0x0007aebc) vitu2_page_scroll_pane_g1

0x8e26,	// (0x0007aec4) vitu2_page_scroll_pane_g2

0x0001,

0xfab6,	// (0x00081b54) vitu2_page_scroll_pane_g

0x8e30,	// (0x0007aece) vitu2_page_scroll_pane_t1

0xbf3b,	// (0x0007dfd9) popup_char_count_window_g1

0xcf59,	// (0x0007eff7) popup_char_count_window_g2

0xcf62,	// (0x0007f000) popup_char_count_window_g3

0x0002,

0xfabb,	// (0x00081b59) popup_char_count_window_g

0xcf6b,	// (0x0007f009) popup_char_count_window_t1

0xa974,	// (0x0007ca12) main_vded2_pane

0xc6ed,	// (0x0007e78b) aid_size_cell_imed_line

0xc6f7,	// (0x0007e795) grid_imed_line_width_pane

0x7f36,	// (0x00079fd4) vid4_indicators_pane_g4

0xcf79,	// (0x0007f017) cell_imed_line_width_pane_ParamLimits

0xcf79,	// (0x0007f017) cell_imed_line_width_pane

0xcf8f,	// (0x0007f02d) cell_imed_line_width_pane_g1

0xcf98,	// (0x0007f036) cell_imed_line_width_pane_g2

0x0001,

0xfac2,	// (0x00081b60) cell_imed_line_width_pane_g

0x8e3f,	// (0x0007aedd) main_vded2_pane_g1_ParamLimits

0x8e3f,	// (0x0007aedd) main_vded2_pane_g1

0x8e5a,	// (0x0007aef8) main_vded2_pane_g2_ParamLimits

0x8e5a,	// (0x0007aef8) main_vded2_pane_g2

0x0001,

0xfac7,	// (0x00081b65) main_vded2_pane_g_ParamLimits

0xfac7,	// (0x00081b65) main_vded2_pane_g

0x8e6c,	// (0x0007af0a) vded2_slider_pane_ParamLimits

0x8e6c,	// (0x0007af0a) vded2_slider_pane

0x8e7c,	// (0x0007af1a) aid_size_touch_vded2_end

0x8e86,	// (0x0007af24) aid_size_touch_vded2_playhead

0xcfa0,	// (0x0007f03e) aid_size_touch_vded2_start

0xcfa8,	// (0x0007f046) vded2_slider_bg_pane

0xcfb1,	// (0x0007f04f) vded2_slider_pane_g1

0xcfba,	// (0x0007f058) vded2_slider_pane_g2

0x8e90,	// (0x0007af2e) vded2_slider_pane_g3

0x0002,

0xfacc,	// (0x00081b6a) vded2_slider_pane_g

0xcfc2,	// (0x0007f060) vded2_slider_bg_pane_g1

0xcfcb,	// (0x0007f069) vded2_slider_bg_pane_g2

0xcfd4,	// (0x0007f072) vded2_slider_bg_pane_g3

0x0002,

0xfad3,	// (0x00081b71) vded2_slider_bg_pane_g

0x4e95,	// (0x00076f33) aid_postcard_touch_down_pane_ParamLimits

0x4e95,	// (0x00076f33) aid_postcard_touch_down_pane

0x4ead,	// (0x00076f4b) aid_postcard_touch_up_pane_ParamLimits

0x4ead,	// (0x00076f4b) aid_postcard_touch_up_pane

0xa974,	// (0x0007ca12) main_blid2_pane

0xbd34,	// (0x0007ddd2) popup_blid2_search_window

0xa974,	// (0x0007ca12) blid2_gps_pane

0xa974,	// (0x0007ca12) blid2_navig_pane

0xa974,	// (0x0007ca12) blid2_search_pane

0xa974,	// (0x0007ca12) blid2_tripm_pane

0x8e9b,	// (0x0007af39) blid2_search_pane_g1_ParamLimits

0x8e9b,	// (0x0007af39) blid2_search_pane_g1

0x8eb3,	// (0x0007af51) blid2_search_pane_t1_ParamLimits

0x8eb3,	// (0x0007af51) blid2_search_pane_t1

0x8ec5,	// (0x0007af63) aid_size_cell_blid2_gps_ParamLimits

0x8ec5,	// (0x0007af63) aid_size_cell_blid2_gps

0x8edd,	// (0x0007af7b) blid2_gps_pane_g1_ParamLimits

0x8edd,	// (0x0007af7b) blid2_gps_pane_g1

0x8ef1,	// (0x0007af8f) grid_blid2_satellite_pane_ParamLimits

0x8ef1,	// (0x0007af8f) grid_blid2_satellite_pane

0x8f09,	// (0x0007afa7) blid2_navig_pane_g1_ParamLimits

0x8f09,	// (0x0007afa7) blid2_navig_pane_g1

0x8f15,	// (0x0007afb3) blid2_navig_pane_t1_ParamLimits

0x8f15,	// (0x0007afb3) blid2_navig_pane_t1

0x8f30,	// (0x0007afce) blid2_navig_pane_t2_ParamLimits

0x8f30,	// (0x0007afce) blid2_navig_pane_t2

0x0001,

0xfada,	// (0x00081b78) blid2_navig_pane_t_ParamLimits

0xfada,	// (0x00081b78) blid2_navig_pane_t

0x8f4b,	// (0x0007afe9) blid2_navig_ring_pane_ParamLimits

0x8f4b,	// (0x0007afe9) blid2_navig_ring_pane

0x8f66,	// (0x0007b004) blid2_speed_pane_ParamLimits

0x8f66,	// (0x0007b004) blid2_speed_pane

0x8f72,	// (0x0007b010) blid2_tripm_pane_g1_ParamLimits

0x8f72,	// (0x0007b010) blid2_tripm_pane_g1

0x8f8d,	// (0x0007b02b) blid2_tripm_pane_g2_ParamLimits

0x8f8d,	// (0x0007b02b) blid2_tripm_pane_g2

0x8fa1,	// (0x0007b03f) blid2_tripm_pane_g3_ParamLimits

0x8fa1,	// (0x0007b03f) blid2_tripm_pane_g3

0x8fb5,	// (0x0007b053) blid2_tripm_pane_g4_ParamLimits

0x8fb5,	// (0x0007b053) blid2_tripm_pane_g4

0x8fc9,	// (0x0007b067) blid2_tripm_pane_g5_ParamLimits

0x8fc9,	// (0x0007b067) blid2_tripm_pane_g5

0x0005,

0xfadf,	// (0x00081b7d) blid2_tripm_pane_g_ParamLimits

0xfadf,	// (0x00081b7d) blid2_tripm_pane_g

0x8fef,	// (0x0007b08d) blid2_tripm_pane_t1_ParamLimits

0x8fef,	// (0x0007b08d) blid2_tripm_pane_t1

0x900a,	// (0x0007b0a8) blid2_tripm_pane_t2_ParamLimits

0x900a,	// (0x0007b0a8) blid2_tripm_pane_t2

0x9023,	// (0x0007b0c1) blid2_tripm_pane_t3_ParamLimits

0x9023,	// (0x0007b0c1) blid2_tripm_pane_t3

0x0003,

0xfaec,	// (0x00081b8a) blid2_tripm_pane_t_ParamLimits

0xfaec,	// (0x00081b8a) blid2_tripm_pane_t

0x906a,	// (0x0007b108) cell_blid2_satellite_pane_ParamLimits

0x906a,	// (0x0007b108) cell_blid2_satellite_pane

0x9086,	// (0x0007b124) cell_blid2_satellite_pane_g1

0xcfdd,	// (0x0007f07b) cell_blid2_satellite_pane_t1

0xc1ee,	// (0x0007e28c) blid2_speed_pane_g1

0xcfeb,	// (0x0007f089) blid2_speed_pane_t1

0xcff9,	// (0x0007f097) blid2_speed_pane_t2

0x0001,

0xfaf5,	// (0x00081b93) blid2_speed_pane_t

0xc1ee,	// (0x0007e28c) blid2_navig_ring_pane_g1

0x908f,	// (0x0007b12d) blid2_navig_ring_pane_g2

0x9097,	// (0x0007b135) blid2_navig_ring_pane_g3

0x909f,	// (0x0007b13d) blid2_navig_ring_pane_g4

0x90a7,	// (0x0007b145) blid2_navig_ring_pane_g5

0x0004,

0xfafa,	// (0x00081b98) blid2_navig_ring_pane_g

0xa974,	// (0x0007ca12) bg_popup_window_pane_cp011

0xd007,	// (0x0007f0a5) popup_blid2_search_window_g1

0xd00f,	// (0x0007f0ad) popup_blid2_search_window_t1

0xd01d,	// (0x0007f0bb) popup_blid2_search_window_t2

0x0001,

0xfb05,	// (0x00081ba3) popup_blid2_search_window_t

0x322e,	// (0x000752cc) main_browser_pane_g1

0x232b,	// (0x000743c9) main_browser_pane_ParamLimits

0x188d,	// (0x0007392b) bg_button_pane_cp011_ParamLimits

0x8212,	// (0x0007a2b0) cell_vitu2_function_pane_g1_ParamLimits

0x188d,	// (0x0007392b) bg_popup_sub_pane_cp22_ParamLimits

0x0fc5,	// (0x00073063) input_focus_pane_cp08_ParamLimits

0x8ae4,	// (0x0007ab82) popup_vitu2_query_button_pane_ParamLimits

0x8ae4,	// (0x0007ab82) popup_vitu2_query_button_pane

0x0fbb,	// (0x00073059) popup_vitu2_query_input_button_pane

0xcbb1,	// (0x0007ec4f) popup_vitu2_query_window_g1_ParamLimits

0x0fd2,	// (0x00073070) popup_vitu2_query_window_g2_ParamLimits

0xfa0c,	// (0x00081aaa) popup_vitu2_query_window_g_ParamLimits

0xa974,	// (0x0007ca12) bg_button_pane_cp026

0x90af,	// (0x0007b14d) popup_vitu2_query_input_button_pane_g1

0xa974,	// (0x0007ca12) bg_button_pane_cp025

0xd02b,	// (0x0007f0c9) popup_vitu2_query_button_pane_t1

0x682b,	// (0x000788c9) main_mp3_pane_t6

0x6839,	// (0x000788d7) popup_slider_window_cp01

0xebfe,	// (0x00080c9c) cam4_battery_pane

0xec57,	// (0x00080cf5) cam4_battery_pane_cp02

0x8e14,	// (0x0007aeb2) cam4_battery_pane_cp01

0xecc9,	// (0x00080d67) cam4_battery_pane_cp03

0xc1ee,	// (0x0007e28c) cam4_battery_pane_g1

0xd039,	// (0x0007f0d7) cam4_battery_pane_g2

0x0001,

0xfb0a,	// (0x00081ba8) cam4_battery_pane_g

0xc0b4,	// (0x0007e152) popup_blid_sat_info2_window_t11

0x45e9,	// (0x00076687) aid_size_touch_mv_arrow_left_ParamLimits

0x4612,	// (0x000766b0) aid_size_touch_mv_arrow_right_ParamLimits

0x465a,	// (0x000766f8) navi_pane_g1_ParamLimits

0x4666,	// (0x00076704) navi_pane_g2_ParamLimits

0x4694,	// (0x00076732) navi_pane_g3_ParamLimits

0xf418,	// (0x000814b6) navi_pane_g_ParamLimits

0x4752,	// (0x000767f0) navi_pane_mv_t1_ParamLimits

0x741b,	// (0x000794b9) grid_imed_effect_pane_ParamLimits

0x2e75,	// (0x00074f13) aid_placing_vt_slider_lsc

0x2e7d,	// (0x00074f1b) aid_placing_vt_slider_prt

0x188d,	// (0x0007392b) bg_tb_trans_pane_cp01_ParamLimits

0xc33e,	// (0x0007e3dc) popup_image_details_window_g1_ParamLimits

0xc351,	// (0x0007e3ef) popup_image_details_window_g2_ParamLimits

0xc366,	// (0x0007e404) popup_image_details_window_g3_ParamLimits

0xc366,	// (0x0007e404) popup_image_details_window_g3

0xf74b,	// (0x000817e9) popup_image_details_window_g_ParamLimits

0xc37a,	// (0x0007e418) popup_image_details_window_t1_ParamLimits

0xc38c,	// (0x0007e42a) popup_image_details_window_t2_ParamLimits

0xc3a5,	// (0x0007e443) popup_image_details_window_t3_ParamLimits

0xc3b9,	// (0x0007e457) popup_image_details_window_t4_ParamLimits

0xc3d4,	// (0x0007e472) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x000817f0) popup_image_details_window_t_ParamLimits

0x8d20,	// (0x0007adbe) cl_header_name_pane_ParamLimits

0x8d20,	// (0x0007adbe) cl_header_name_pane

0x90b7,	// (0x0007b155) cl_header_name_pane_t1_ParamLimits

0x90b7,	// (0x0007b155) cl_header_name_pane_t1

0x90d8,	// (0x0007b176) cl_header_name_pane_t2_ParamLimits

0x90d8,	// (0x0007b176) cl_header_name_pane_t2

0x911a,	// (0x0007b1b8) cl_header_name_pane_t3_ParamLimits

0x911a,	// (0x0007b1b8) cl_header_name_pane_t3

0x0002,

0xfb0f,	// (0x00081bad) cl_header_name_pane_t_ParamLimits

0xfb0f,	// (0x00081bad) cl_header_name_pane_t

0x4723,	// (0x000767c1) navi_pane_mv_g2_ParamLimits

0xc8bc,	// (0x0007e95a) field_vitu2_entry_pane_g1_ParamLimits

0xc8c8,	// (0x0007e966) field_vitu2_entry_pane_g2_ParamLimits

0xc8d4,	// (0x0007e972) field_vitu2_entry_pane_g3_ParamLimits

0xc8d4,	// (0x0007e972) field_vitu2_entry_pane_g3

0xf90b,	// (0x000819a9) field_vitu2_entry_pane_g_ParamLimits

0x818e,	// (0x0007a22c) cell_vitu2_itu_pane_g1_ParamLimits

0x819e,	// (0x0007a23c) cell_vitu2_itu_pane_g2_ParamLimits

0x819e,	// (0x0007a23c) cell_vitu2_itu_pane_g2

0x0001,

0xf917,	// (0x000819b5) cell_vitu2_itu_pane_g_ParamLimits

0xf917,	// (0x000819b5) cell_vitu2_itu_pane_g

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp05_ParamLimits

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp05

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp03

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp04

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp10_ParamLimits

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp10

0x107d,	// (0x0007311b) bg_vkb2_func_pane_cp08

0x8cca,	// (0x0007ad68) bg_vkb2_func_pane_cp06

0x8cd8,	// (0x0007ad76) bg_vkb2_func_pane_cp07

0xcf2f,	// (0x0007efcd) bg_vkb2_func_pane_cp11_ParamLimits

0xcf2f,	// (0x0007efcd) bg_vkb2_func_pane_cp11

0xcf44,	// (0x0007efe2) bg_vkb2_func_pane_cp12_ParamLimits

0xcf44,	// (0x0007efe2) bg_vkb2_func_pane_cp12

0xa974,	// (0x0007ca12) bg_vkb2_func_pane_cp09

0xc911,	// (0x0007e9af) bg_vkb2_func_pane_g1

0x3391,	// (0x0007542f) bg_vkb2_func_pane_g2

0xc919,	// (0x0007e9b7) bg_vkb2_func_pane_g3

0xc921,	// (0x0007e9bf) bg_vkb2_func_pane_g4

0xcb5c,	// (0x0007ebfa) bg_vkb2_func_pane_g5

0xc939,	// (0x0007e9d7) bg_vkb2_func_pane_g6

0xc941,	// (0x0007e9df) bg_vkb2_func_pane_g7

0xc931,	// (0x0007e9cf) bg_vkb2_func_pane_g8

0x3371,	// (0x0007540f) bg_vkb2_func_pane_g9

0x0008,

0xfb16,	// (0x00081bb4) bg_vkb2_func_pane_g

0x8fdd,	// (0x0007b07b) blid2_tripm_pane_g6_ParamLimits

0x8fdd,	// (0x0007b07b) blid2_tripm_pane_g6

0xc740,	// (0x0007e7de) mp4_progress_pane_g1

0x9056,	// (0x0007b0f4) blid2_tripm_values_pane_ParamLimits

0x9056,	// (0x0007b0f4) blid2_tripm_values_pane

0x914b,	// (0x0007b1e9) blid2_tripm_values_pane_t1

0x9159,	// (0x0007b1f7) blid2_tripm_values_pane_t2

0x9167,	// (0x0007b205) blid2_tripm_values_pane_t3

0x9175,	// (0x0007b213) blid2_tripm_values_pane_t4

0x9183,	// (0x0007b221) blid2_tripm_values_pane_t5

0x9191,	// (0x0007b22f) blid2_tripm_values_pane_t6

0x919f,	// (0x0007b23d) blid2_tripm_values_pane_t7

0x91ad,	// (0x0007b24b) blid2_tripm_values_pane_t8

0x91bb,	// (0x0007b259) blid2_tripm_values_pane_t9

0x0008,

0xfb29,	// (0x00081bc7) blid2_tripm_values_pane_t

0x2eb5,	// (0x00074f53) call_video_pane_t1_ParamLimits

0x2ec7,	// (0x00074f65) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0008133f) call_video_pane_t_ParamLimits

0x0de9,	// (0x00072e87) msg_header_pane_g1_ParamLimits

0x4dff,	// (0x00076e9d) msg_header_pane_g2_ParamLimits

0x4dff,	// (0x00076e9d) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00081559) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00081559) msg_header_pane_g

0x232b,	// (0x000743c9) main_clock2_pane_ParamLimits

0x7129,	// (0x000791c7) grid_clock2_toolbar_pane_ParamLimits

0x7129,	// (0x000791c7) grid_clock2_toolbar_pane

0x7129,	// (0x000791c7) listscroll_clock2_pane_ParamLimits

0x7129,	// (0x000791c7) listscroll_clock2_pane

0x720d,	// (0x000792ab) main_clock2_pane_t3_ParamLimits

0x720d,	// (0x000792ab) main_clock2_pane_t3

0x7228,	// (0x000792c6) main_clock2_pane_t4_ParamLimits

0x7228,	// (0x000792c6) main_clock2_pane_t4

0xd043,	// (0x0007f0e1) cell_clock2_toolbar_pane

0xd04b,	// (0x0007f0e9) cell_clock2_toolbar_pane_cp01

0xd04b,	// (0x0007f0e9) cell_clock2_toolbar_pane_cp02

0xd053,	// (0x0007f0f1) cell_clock2_toolbar_pane_cp03

0xd05b,	// (0x0007f0f9) list_clock2_pane

0x4373,	// (0x00076411) scroll_pane_cp10

0xd063,	// (0x0007f101) list_single_clock2_pane_ParamLimits

0xd063,	// (0x0007f101) list_single_clock2_pane

0x47c4,	// (0x00076862) list_highlight_pane_cp08

0xd070,	// (0x0007f10e) list_single_clock2_pane_t1

0xd07e,	// (0x0007f11c) list_single_clock2_pane_t2

0x0001,

0xfb3c,	// (0x00081bda) list_single_clock2_pane_t

0xa974,	// (0x0007ca12) bg_button_pane_cp10

0xd08c,	// (0x0007f12a) cell_clock2_toolbar_pane_g1

0x4e13,	// (0x00076eb1) aid_main_viewer_pane_g1_ParamLimits

0x4e13,	// (0x00076eb1) aid_main_viewer_pane_g1

0x4e21,	// (0x00076ebf) aid_main_viewer_pane_g2_ParamLimits

0x4e21,	// (0x00076ebf) aid_main_viewer_pane_g2

0x4e2f,	// (0x00076ecd) aid_main_viewer_pane_g3_ParamLimits

0x4e2f,	// (0x00076ecd) aid_main_viewer_pane_g3

0x4e3e,	// (0x00076edc) aid_main_viewer_pane_g4_ParamLimits

0x4e3e,	// (0x00076edc) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0008156a) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0008156a) aid_main_viewer_pane_g

0x5a2d,	// (0x00077acb) main_calc_pane_ParamLimits

0x5a41,	// (0x00077adf) main_dialer2_pane_ParamLimits

0xa974,	// (0x0007ca12) main_cam6_pane

0xa974,	// (0x0007ca12) main_vid6_pane

0x7135,	// (0x000791d3) listscroll_gen_pane_cp06_ParamLimits

0x7135,	// (0x000791d3) listscroll_gen_pane_cp06

0x7243,	// (0x000792e1) main_clock2_pane_t5_ParamLimits

0x7243,	// (0x000792e1) main_clock2_pane_t5

0x72a0,	// (0x0007933e) aid_call2_pane_cp10_ParamLimits

0x72b2,	// (0x00079350) aid_call_pane_cp10_ParamLimits

0x4574,	// (0x00076612) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4574,	// (0x00076612) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72c4,	// (0x00079362) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72c4,	// (0x00079362) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4574,	// (0x00076612) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000818a0) popup_clock_analogue_window_cp10_g_ParamLimits

0x72da,	// (0x00079378) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7981,	// (0x00079a1f) cell_dialer2_keypad_pane_g2_ParamLimits

0x7981,	// (0x00079a1f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8aa,	// (0x00081948) cell_dialer2_keypad_pane_g_ParamLimits

0xf8aa,	// (0x00081948) cell_dialer2_keypad_pane_g

0x799d,	// (0x00079a3b) cell_dialer2_keypad_pane_t1

0x853d,	// (0x0007a5db) main_cset_text2_pane_ParamLimits

0x853d,	// (0x0007a5db) main_cset_text2_pane

0xcda9,	// (0x0007ee47) area_vitu2_query_pane_g1_ParamLimits

0x1042,	// (0x000730e0) area_vitu2_query_pane_g2_ParamLimits

0xfa59,	// (0x00081af7) area_vitu2_query_pane_g_ParamLimits

0xce2d,	// (0x0007eecb) area_vitu2_query_pane_t7_ParamLimits

0xce2d,	// (0x0007eecb) area_vitu2_query_pane_t7

0x8cca,	// (0x0007ad68) bg_button_pane_cp018_ParamLimits

0x8cd8,	// (0x0007ad76) bg_button_pane_cp021_ParamLimits

0x107d,	// (0x0007311b) bg_button_pane_cp022_ParamLimits

0x107d,	// (0x0007311b) bg_vkb2_func_pane_cp08_ParamLimits

0x8cca,	// (0x0007ad68) bg_vkb2_func_pane_cp06_ParamLimits

0x8cd8,	// (0x0007ad76) bg_vkb2_func_pane_cp07_ParamLimits

0x108e,	// (0x0007312c) input_focus_pane_cp09_ParamLimits

0xed71,	// (0x00080e0f) cam6_autofocus_pane_ParamLimits

0xed71,	// (0x00080e0f) cam6_autofocus_pane

0x91c9,	// (0x0007b267) cam6_image_uncrop_pane_ParamLimits

0x91c9,	// (0x0007b267) cam6_image_uncrop_pane

0x91d8,	// (0x0007b276) cam6_indi_pane_ParamLimits

0x91d8,	// (0x0007b276) cam6_indi_pane

0x91ee,	// (0x0007b28c) cam6_mode_pane_ParamLimits

0x91ee,	// (0x0007b28c) cam6_mode_pane

0x9200,	// (0x0007b29e) cam6_timer_pane_ParamLimits

0x9200,	// (0x0007b29e) cam6_timer_pane

0x920c,	// (0x0007b2aa) cam6_zoom_pane_ParamLimits

0x920c,	// (0x0007b2aa) cam6_zoom_pane

0x921a,	// (0x0007b2b8) cam6_mode_pane_g1_ParamLimits

0x921a,	// (0x0007b2b8) cam6_mode_pane_g1

0x922a,	// (0x0007b2c8) cam6_mode_pane_g2_ParamLimits

0x922a,	// (0x0007b2c8) cam6_mode_pane_g2

0x923a,	// (0x0007b2d8) cam6_mode_pane_g3_ParamLimits

0x923a,	// (0x0007b2d8) cam6_mode_pane_g3

0x924a,	// (0x0007b2e8) cam6_mode_pane_g4_ParamLimits

0x924a,	// (0x0007b2e8) cam6_mode_pane_g4

0x0003,

0xfb41,	// (0x00081bdf) cam6_mode_pane_g_ParamLimits

0xfb41,	// (0x00081bdf) cam6_mode_pane_g

0xd094,	// (0x0007f132) bg_tb_trans_pane_cp08_ParamLimits

0xd094,	// (0x0007f132) bg_tb_trans_pane_cp08

0xd0a2,	// (0x0007f140) cam6_battery_pane_ParamLimits

0xd0a2,	// (0x0007f140) cam6_battery_pane

0xd0b8,	// (0x0007f156) cam6_indi_pane_g1_ParamLimits

0xd0b8,	// (0x0007f156) cam6_indi_pane_g1

0xd0ca,	// (0x0007f168) cam6_indi_pane_g2_ParamLimits

0xd0ca,	// (0x0007f168) cam6_indi_pane_g2

0xd0dc,	// (0x0007f17a) cam6_indi_pane_g3_ParamLimits

0xd0dc,	// (0x0007f17a) cam6_indi_pane_g3

0x0002,

0xfb4a,	// (0x00081be8) cam6_indi_pane_g_ParamLimits

0xfb4a,	// (0x00081be8) cam6_indi_pane_g

0xd0ee,	// (0x0007f18c) cam6_indi_pane_t1_ParamLimits

0xd0ee,	// (0x0007f18c) cam6_indi_pane_t1

0x7f60,	// (0x00079ffe) cam6_autofocus_pane_g1

0x7f68,	// (0x0007a006) cam6_autofocus_pane_g2

0x7f70,	// (0x0007a00e) cam6_autofocus_pane_g3

0x7f78,	// (0x0007a016) cam6_autofocus_pane_g4

0x0003,

0xfb51,	// (0x00081bef) cam6_autofocus_pane_g

0xd114,	// (0x0007f1b2) cam6_timer_pane_g1

0xd11c,	// (0x0007f1ba) cam6_timer_pane_t1

0xd12a,	// (0x0007f1c8) cam6_zoom_cont_pane

0xd132,	// (0x0007f1d0) cam6_zoom_pane_g1

0xd13a,	// (0x0007f1d8) cam6_zoom_pane_g2

0x925a,	// (0x0007b2f8) cam6_zoom_pane_g3

0x0002,

0xfb5a,	// (0x00081bf8) cam6_zoom_pane_g

0xc1ee,	// (0x0007e28c) cam6_battery_pane_g1

0xc1ee,	// (0x0007e28c) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x000817ad) cam6_battery_pane_g

0xd142,	// (0x0007f1e0) cam6_zoom_cont_pane_g1

0xd14b,	// (0x0007f1e9) cam6_zoom_cont_pane_g2

0xd154,	// (0x0007f1f2) cam6_zoom_cont_pane_g3

0x0002,

0xfb61,	// (0x00081bff) cam6_zoom_cont_pane_g

0x9277,	// (0x0007b315) cam6_mode_pane_cp_ParamLimits

0x9277,	// (0x0007b315) cam6_mode_pane_cp

0x920c,	// (0x0007b2aa) cam6_zoom_pane_cp_ParamLimits

0x920c,	// (0x0007b2aa) cam6_zoom_pane_cp

0x9289,	// (0x0007b327) vid6_image_uncrop_cif_pane_ParamLimits

0x9289,	// (0x0007b327) vid6_image_uncrop_cif_pane

0x9299,	// (0x0007b337) vid6_image_uncrop_nhd_pane_ParamLimits

0x9299,	// (0x0007b337) vid6_image_uncrop_nhd_pane

0x91c9,	// (0x0007b267) vid6_image_uncrop_vga_pane_ParamLimits

0x91c9,	// (0x0007b267) vid6_image_uncrop_vga_pane

0x92a8,	// (0x0007b346) vid6_image_uncrop_wvga_pane_ParamLimits

0x92a8,	// (0x0007b346) vid6_image_uncrop_wvga_pane

0x92b7,	// (0x0007b355) vid6_indi_pane_ParamLimits

0x92b7,	// (0x0007b355) vid6_indi_pane

0xd094,	// (0x0007f132) bg_tb_trans_pane_cp09_ParamLimits

0xd094,	// (0x0007f132) bg_tb_trans_pane_cp09

0xd16c,	// (0x0007f20a) cam6_battery_pane_cp_ParamLimits

0xd16c,	// (0x0007f20a) cam6_battery_pane_cp

0xd178,	// (0x0007f216) vid6_indi_pane_g1_ParamLimits

0xd178,	// (0x0007f216) vid6_indi_pane_g1

0xd18a,	// (0x0007f228) vid6_indi_pane_g2_ParamLimits

0xd18a,	// (0x0007f228) vid6_indi_pane_g2

0xd19c,	// (0x0007f23a) vid6_indi_pane_g3_ParamLimits

0xd19c,	// (0x0007f23a) vid6_indi_pane_g3

0xd1b3,	// (0x0007f251) vid6_indi_pane_g4_ParamLimits

0xd1b3,	// (0x0007f251) vid6_indi_pane_g4

0xd1ca,	// (0x0007f268) vid6_indi_pane_g5_ParamLimits

0xd1ca,	// (0x0007f268) vid6_indi_pane_g5

0x0004,

0xfb68,	// (0x00081c06) vid6_indi_pane_g_ParamLimits

0xfb68,	// (0x00081c06) vid6_indi_pane_g

0xd1e4,	// (0x0007f282) vid6_indi_pane_t1_ParamLimits

0xd1e4,	// (0x0007f282) vid6_indi_pane_t1

0xd1fa,	// (0x0007f298) vid6_indi_pane_t2_ParamLimits

0xd1fa,	// (0x0007f298) vid6_indi_pane_t2

0xd222,	// (0x0007f2c0) vid6_indi_pane_t3_ParamLimits

0xd222,	// (0x0007f2c0) vid6_indi_pane_t3

0xd24a,	// (0x0007f2e8) vid6_indi_pane_t4_ParamLimits

0xd24a,	// (0x0007f2e8) vid6_indi_pane_t4

0x0003,

0xfb73,	// (0x00081c11) vid6_indi_pane_t_ParamLimits

0xfb73,	// (0x00081c11) vid6_indi_pane_t

0xd26e,	// (0x0007f30c) wait_bar_pane_cp08

0x92cf,	// (0x0007b36d) main_cset_text2_pane_t1_ParamLimits

0x92cf,	// (0x0007b36d) main_cset_text2_pane_t1

0x9262,	// (0x0007b300) listscroll_gen_pane_cp06_t1_ParamLimits

0x9262,	// (0x0007b300) listscroll_gen_pane_cp06_t1

0xa974,	// (0x0007ca12) main_cam6_set_pane

0xc41e,	// (0x0007e4bc) bg_tb_trans_pane_cp06_ParamLimits

0xec06,	// (0x00080ca4) cam4_indicators_pane_g1_ParamLimits

0xec13,	// (0x00080cb1) cam4_indicators_pane_g2_ParamLimits

0xf8e7,	// (0x00081985) cam4_indicators_pane_g_ParamLimits

0xec33,	// (0x00080cd1) cam4_indicators_pane_t1_ParamLimits

0xc895,	// (0x0007e933) bg_tb_trans_pane_cp07_ParamLimits

0x7f0f,	// (0x00079fad) vid4_indicators_pane_g1_ParamLimits

0x7f1c,	// (0x00079fba) vid4_indicators_pane_g2_ParamLimits

0x7f29,	// (0x00079fc7) vid4_indicators_pane_g3_ParamLimits

0x7f36,	// (0x00079fd4) vid4_indicators_pane_g4_ParamLimits

0xf8f9,	// (0x00081997) vid4_indicators_pane_g_ParamLimits

0x7f4e,	// (0x00079fec) vid4_indicators_pane_t1_ParamLimits

0xecd1,	// (0x00080d6f) vid4_progress_pane_g1_ParamLimits

0xecdd,	// (0x00080d7b) vid4_progress_pane_g2_ParamLimits

0xece9,	// (0x00080d87) vid4_progress_pane_g3_ParamLimits

0xecf8,	// (0x00080d96) vid4_progress_pane_g4_ParamLimits

0xfaa4,	// (0x00081b42) vid4_progress_pane_g_ParamLimits

0xed16,	// (0x00080db4) vid4_progress_pane_t1_ParamLimits

0xed2c,	// (0x00080dca) vid4_progress_pane_t2_ParamLimits

0xed42,	// (0x00080de0) vid4_progress_pane_t3_ParamLimits

0xfaaf,	// (0x00081b4d) vid4_progress_pane_t_ParamLimits

0xed57,	// (0x00080df5) wait_bar_pane_cp07_ParamLimits

0x92f0,	// (0x0007b38e) main_cam6_set_pane_g2_ParamLimits

0x92f0,	// (0x0007b38e) main_cam6_set_pane_g2

0x9316,	// (0x0007b3b4) main_cset6_listscroll_pane_ParamLimits

0x9316,	// (0x0007b3b4) main_cset6_listscroll_pane

0x9334,	// (0x0007b3d2) main_cset6_slider_pane_ParamLimits

0x9334,	// (0x0007b3d2) main_cset6_slider_pane

0x934a,	// (0x0007b3e8) main_cset6_text2_pane_ParamLimits

0x934a,	// (0x0007b3e8) main_cset6_text2_pane

0xd27d,	// (0x0007f31b) main_cset6_text_pane

0xd285,	// (0x0007f323) main_cset_list_pane_copy1_ParamLimits

0xd285,	// (0x0007f323) main_cset_list_pane_copy1

0xd295,	// (0x0007f333) scroll_pane_cp028_copy1

0x9358,	// (0x0007b3f6) cset_list_set_pane_copy1

0x936c,	// (0x0007b40a) aid_position_infowindow_above_copy1

0x9374,	// (0x0007b412) aid_position_infowindow_below_copy1

0x937c,	// (0x0007b41a) cset_list_set_pane_g1_copy1

0xd29e,	// (0x0007f33c) cset_list_set_pane_g3_copy1_ParamLimits

0xd29e,	// (0x0007f33c) cset_list_set_pane_g3_copy1

0xd2ad,	// (0x0007f34b) cset_list_set_pane_t1_copy1_ParamLimits

0xd2ad,	// (0x0007f34b) cset_list_set_pane_t1_copy1

0x188d,	// (0x0007392b) list_highlight_pane_cp021_copy1_ParamLimits

0x188d,	// (0x0007392b) list_highlight_pane_cp021_copy1

0xd2c2,	// (0x0007f360) cset6_slider_pane_ParamLimits

0xd2c2,	// (0x0007f360) cset6_slider_pane

0xd2ee,	// (0x0007f38c) main_cset6_slider_pane_g1_ParamLimits

0xd2ee,	// (0x0007f38c) main_cset6_slider_pane_g1

0x9384,	// (0x0007b422) main_cset6_slider_pane_g2_ParamLimits

0x9384,	// (0x0007b422) main_cset6_slider_pane_g2

0xd316,	// (0x0007f3b4) main_cset6_slider_pane_g3_ParamLimits

0xd316,	// (0x0007f3b4) main_cset6_slider_pane_g3

0x93ac,	// (0x0007b44a) main_cset6_slider_pane_g4_ParamLimits

0x93ac,	// (0x0007b44a) main_cset6_slider_pane_g4

0x93b8,	// (0x0007b456) main_cset6_slider_pane_g5_ParamLimits

0x93b8,	// (0x0007b456) main_cset6_slider_pane_g5

0xca44,	// (0x0007eae2) main_cset6_slider_pane_g7_ParamLimits

0xca44,	// (0x0007eae2) main_cset6_slider_pane_g7

0xca50,	// (0x0007eaee) main_cset6_slider_pane_g8_ParamLimits

0xca50,	// (0x0007eaee) main_cset6_slider_pane_g8

0x85ec,	// (0x0007a68a) main_cset6_slider_pane_g9_ParamLimits

0x85ec,	// (0x0007a68a) main_cset6_slider_pane_g9

0x85f8,	// (0x0007a696) main_cset6_slider_pane_g10_ParamLimits

0x85f8,	// (0x0007a696) main_cset6_slider_pane_g10

0x8604,	// (0x0007a6a2) main_cset6_slider_pane_g11_ParamLimits

0x8604,	// (0x0007a6a2) main_cset6_slider_pane_g11

0x8610,	// (0x0007a6ae) main_cset6_slider_pane_g12_ParamLimits

0x8610,	// (0x0007a6ae) main_cset6_slider_pane_g12

0x861c,	// (0x0007a6ba) main_cset6_slider_pane_g13_ParamLimits

0x861c,	// (0x0007a6ba) main_cset6_slider_pane_g13

0x8628,	// (0x0007a6c6) main_cset6_slider_pane_g14_ParamLimits

0x8628,	// (0x0007a6c6) main_cset6_slider_pane_g14

0x93c6,	// (0x0007b464) main_cset6_slider_pane_g15_ParamLimits

0x93c6,	// (0x0007b464) main_cset6_slider_pane_g15

0x864c,	// (0x0007a6ea) main_cset6_slider_pane_g16_ParamLimits

0x864c,	// (0x0007a6ea) main_cset6_slider_pane_g16

0x865a,	// (0x0007a6f8) main_cset6_slider_pane_g17_ParamLimits

0x865a,	// (0x0007a6f8) main_cset6_slider_pane_g17

0x0011,

0xfb7c,	// (0x00081c1a) main_cset6_slider_pane_g_ParamLimits

0xfb7c,	// (0x00081c1a) main_cset6_slider_pane_g

0xd322,	// (0x0007f3c0) main_cset6_slider_pane_t1_ParamLimits

0xd322,	// (0x0007f3c0) main_cset6_slider_pane_t1

0x93f6,	// (0x0007b494) main_cset6_slider_pane_t2_ParamLimits

0x93f6,	// (0x0007b494) main_cset6_slider_pane_t2

0x9421,	// (0x0007b4bf) main_cset6_slider_pane_t3_ParamLimits

0x9421,	// (0x0007b4bf) main_cset6_slider_pane_t3

0x944c,	// (0x0007b4ea) main_cset6_slider_pane_t4_ParamLimits

0x944c,	// (0x0007b4ea) main_cset6_slider_pane_t4

0x9479,	// (0x0007b517) main_cset6_slider_pane_t5_ParamLimits

0x9479,	// (0x0007b517) main_cset6_slider_pane_t5

0xd363,	// (0x0007f401) main_cset6_slider_pane_t7_ParamLimits

0xd363,	// (0x0007f401) main_cset6_slider_pane_t7

0x94a6,	// (0x0007b544) main_cset6_slider_pane_t8_ParamLimits

0x94a6,	// (0x0007b544) main_cset6_slider_pane_t8

0x94ca,	// (0x0007b568) main_cset6_slider_pane_t9_ParamLimits

0x94ca,	// (0x0007b568) main_cset6_slider_pane_t9

0x94ee,	// (0x0007b58c) main_cset6_slider_pane_t10_ParamLimits

0x94ee,	// (0x0007b58c) main_cset6_slider_pane_t10

0x9512,	// (0x0007b5b0) main_cset6_slider_pane_t11_ParamLimits

0x9512,	// (0x0007b5b0) main_cset6_slider_pane_t11

0xd399,	// (0x0007f437) main_cset6_slider_pane_t14_ParamLimits

0xd399,	// (0x0007f437) main_cset6_slider_pane_t14

0xd3d2,	// (0x0007f470) main_cset6_slider_pane_t15_ParamLimits

0xd3d2,	// (0x0007f470) main_cset6_slider_pane_t15

0x000b,

0xfba1,	// (0x00081c3f) main_cset6_slider_pane_t_ParamLimits

0xfba1,	// (0x00081c3f) main_cset6_slider_pane_t

0xcb08,	// (0x0007eba6) cset_slider_pane_g1_copy1

0xcb11,	// (0x0007ebaf) cset_slider_pane_g2_copy1

0xcb1a,	// (0x0007ebb8) cset_slider_pane_g3_copy1

0xa974,	// (0x0007ca12) bg_popup_sub_pane_cp011_copy1

0xcbbd,	// (0x0007ec5b) main_cset_text_pane_g1_copy1

0xcbc5,	// (0x0007ec63) main_cset_text_pane_t1_copy1

0xcbd3,	// (0x0007ec71) main_cset_text_pane_t2_copy1

0xcbe1,	// (0x0007ec7f) main_cset_text_pane_t3_copy1

0xcbef,	// (0x0007ec8d) main_cset_text_pane_t4_copy1

0xcbfd,	// (0x0007ec9b) main_cset_text_pane_t5_copy1

0xcc0b,	// (0x0007eca9) main_cset_text_pane_t6_copy1

0xcc19,	// (0x0007ecb7) main_cset_text_pane_t7_copy1

0x92cf,	// (0x0007b36d) main_cset_text2_pane_t1_copy1

0xa974,	// (0x0007ca12) main_ncimui_pane

0x5ccf,	// (0x00077d6d) popup_query_ncimui_window_ParamLimits

0x5ccf,	// (0x00077d6d) popup_query_ncimui_window

0xe987,	// (0x00080a25) field_cale_ev2_pane_g4_ParamLimits

0xe987,	// (0x00080a25) field_cale_ev2_pane_g4

0x784c,	// (0x000798ea) cell_video_dialer_keypad_pane_g2_ParamLimits

0x784c,	// (0x000798ea) cell_video_dialer_keypad_pane_g2

0x0001,

0xf885,	// (0x00081923) cell_video_dialer_keypad_pane_g_ParamLimits

0xf885,	// (0x00081923) cell_video_dialer_keypad_pane_g

0x7864,	// (0x00079902) cell_video_dialer_keypad_pane_t1

0xa974,	// (0x0007ca12) bg_popup_window_pane_cp012

0x41c8,	// (0x00076266) heading_pane_cp06

0xd4fa,	// (0x0007f598) ncim_query_content_pane

0xa974,	// (0x0007ca12) bg_popup_heading_pane_cp01

0xd502,	// (0x0007f5a0) ncim_heading_pane_t1

0xd510,	// (0x0007f5ae) ncim_indicator_popup_pane

0xd522,	// (0x0007f5c0) ncim_query_button_pane

0xd538,	// (0x0007f5d6) ncim_query_content_pane_t1

0xd54a,	// (0x0007f5e8) ncim_query_content_pane_t2

0x0005,

0xfbe0,	// (0x00081c7e) ncim_query_content_pane_t

0xd584,	// (0x0007f622) ncim_query_list_pane

0xd596,	// (0x0007f634) ncim_query_popup_pane

0xd510,	// (0x0007f5ae) ncim_indicator_popup_pane_ParamLimits

0x95fe,	// (0x0007b69c) ncim_query_content_pane_g1_ParamLimits

0x95fe,	// (0x0007b69c) ncim_query_content_pane_g1

0xd538,	// (0x0007f5d6) ncim_query_content_pane_t1_ParamLimits

0xd54a,	// (0x0007f5e8) ncim_query_content_pane_t2_ParamLimits

0x960a,	// (0x0007b6a8) ncim_query_content_pane_t3_ParamLimits

0x960a,	// (0x0007b6a8) ncim_query_content_pane_t3

0x9632,	// (0x0007b6d0) ncim_query_content_pane_t4_ParamLimits

0x9632,	// (0x0007b6d0) ncim_query_content_pane_t4

0x965a,	// (0x0007b6f8) ncim_query_content_pane_t5_ParamLimits

0x965a,	// (0x0007b6f8) ncim_query_content_pane_t5

0xd55c,	// (0x0007f5fa) ncim_query_content_pane_t6_ParamLimits

0xd55c,	// (0x0007f5fa) ncim_query_content_pane_t6

0xfbe0,	// (0x00081c7e) ncim_query_content_pane_t_ParamLimits

0xd584,	// (0x0007f622) ncim_query_list_pane_ParamLimits

0xd596,	// (0x0007f634) ncim_query_popup_pane_ParamLimits

0xd5aa,	// (0x0007f648) wait_bar_pane_cp04

0xa974,	// (0x0007ca12) input_focus_pane_cp011

0xd5b2,	// (0x0007f650) ncim_query_popup_pane_t1

0xd5c0,	// (0x0007f65e) ncim_list_query_list_pane_ParamLimits

0xd5c0,	// (0x0007f65e) ncim_list_query_list_pane

0xa974,	// (0x0007ca12) bg_button_pane_cp027

0xd5d3,	// (0x0007f671) ncim_query_button_pane_g1

0xa974,	// (0x0007ca12) list_highlight_pane_cp012

0xd5dd,	// (0x0007f67b) ncim_list_query_list_pane_g1

0xd5e5,	// (0x0007f683) ncim_list_query_list_pane_t1

0xec23,	// (0x00080cc1) cam4_indicators_pane_g3_ParamLimits

0xec23,	// (0x00080cc1) cam4_indicators_pane_g3

0x7f42,	// (0x00079fe0) vid4_indicators_pane_g5_ParamLimits

0x7f42,	// (0x00079fe0) vid4_indicators_pane_g5

0xed07,	// (0x00080da5) vid4_progress_pane_g5_ParamLimits

0xed07,	// (0x00080da5) vid4_progress_pane_g5

0x9546,	// (0x0007b5e4) main_ncimui_pane_g1

0x958c,	// (0x0007b62a) ncimui_group_query_pane_ParamLimits

0x958c,	// (0x0007b62a) ncimui_group_query_pane

0x95c0,	// (0x0007b65e) ncimui_list_pane_ParamLimits

0x95c0,	// (0x0007b65e) ncimui_list_pane

0x95da,	// (0x0007b678) ncimui_text_pane_ParamLimits

0x95da,	// (0x0007b678) ncimui_text_pane

0x9682,	// (0x0007b720) ncimui_text_pane_t1_ParamLimits

0x9682,	// (0x0007b720) ncimui_text_pane_t1

0xd5f3,	// (0x0007f691) ncimui_list_single_graphic_pane_ParamLimits

0xd5f3,	// (0x0007f691) ncimui_list_single_graphic_pane

0x96a8,	// (0x0007b746) ncimui_query_pane_ParamLimits

0x96a8,	// (0x0007b746) ncimui_query_pane

0xa974,	// (0x0007ca12) list_highlight_pane_cp013

0xd603,	// (0x0007f6a1) ncim_list_query_list_pane_t1_copy1

0xd5dd,	// (0x0007f67b) ncim_list_single_graphic_pane_g1

0xd611,	// (0x0007f6af) ncim_query_button_pane_cp01

0xd619,	// (0x0007f6b7) ncim_query_entry_pane_ParamLimits

0xd619,	// (0x0007f6b7) ncim_query_entry_pane

0xd629,	// (0x0007f6c7) ncimui_query_pane_g1

0xd631,	// (0x0007f6cf) ncimui_query_pane_t1_ParamLimits

0xd631,	// (0x0007f6cf) ncimui_query_pane_t1

0xa974,	// (0x0007ca12) input_focus_pane_cp012

0xd5b2,	// (0x0007f650) ncim_query_entry_pane_t1

0x232b,	// (0x000743c9) main_im_pane_ParamLimits

0x188d,	// (0x0007392b) main_mobtv_pane_ParamLimits

0x188d,	// (0x0007392b) main_mobtv_pane

0x93de,	// (0x0007b47c) main_cset6_slider_pane_g18_ParamLimits

0x93de,	// (0x0007b47c) main_cset6_slider_pane_g18

0x93ea,	// (0x0007b488) main_cset6_slider_pane_g19_ParamLimits

0x93ea,	// (0x0007b488) main_cset6_slider_pane_g19

0xd647,	// (0x0007f6e5) bg_main_mobtv_pane_ParamLimits

0xd647,	// (0x0007f6e5) bg_main_mobtv_pane

0x96b8,	// (0x0007b756) main_mobtv_info_pane

0x96c3,	// (0x0007b761) main_mobtv_loading_pane_ParamLimits

0x96c3,	// (0x0007b761) main_mobtv_loading_pane

0xd655,	// (0x0007f6f3) main_mobtv_pg_channel_list_pane

0xd65f,	// (0x0007f6fd) main_mobtv_pg_hdr_pane

0x96d0,	// (0x0007b76e) main_mobtv_programe_curr_pane_ParamLimits

0x96d0,	// (0x0007b76e) main_mobtv_programe_curr_pane

0x96dd,	// (0x0007b77b) main_mobtv_programe_next_pane_ParamLimits

0x96dd,	// (0x0007b77b) main_mobtv_programe_next_pane

0xd668,	// (0x0007f706) popup_mobtv_noti_window

0xc1ee,	// (0x0007e28c) main_tv_pg_hdr_pane_g1

0xd672,	// (0x0007f710) main_tv_pg_hdr_pane_g2

0xd67a,	// (0x0007f718) main_tv_pg_hdr_pane_g3

0xd682,	// (0x0007f720) main_tv_pg_hdr_pane_g4

0xd68a,	// (0x0007f728) main_tv_pg_hdr_pane_g5

0xd694,	// (0x0007f732) main_tv_pg_hdr_pane_g6

0xd69e,	// (0x0007f73c) main_tv_pg_hdr_pane_g7

0xd6a8,	// (0x0007f746) main_tv_pg_hdr_pane_g8

0xd6b2,	// (0x0007f750) main_tv_pg_hdr_pane_g9

0xd6bc,	// (0x0007f75a) main_tv_pg_hdr_pane_g10

0xd6c6,	// (0x0007f764) main_tv_pg_hdr_pane_g11

0x000a,

0xfbed,	// (0x00081c8b) main_tv_pg_hdr_pane_g

0xd6d0,	// (0x0007f76e) main_tv_pg_hdr_pane_t1

0xd6de,	// (0x0007f77c) main_tv_pg_hdr_pane_t2

0xd6ec,	// (0x0007f78a) main_tv_pg_hdr_pane_t3

0xd6fc,	// (0x0007f79a) main_tv_pg_hdr_pane_t4

0xd70c,	// (0x0007f7aa) main_tv_pg_hdr_pane_t5

0x0004,

0xfc04,	// (0x00081ca2) main_tv_pg_hdr_pane_t

0xd71c,	// (0x0007f7ba) single_mobtv_pg_channel_pane_ParamLimits

0xd71c,	// (0x0007f7ba) single_mobtv_pg_channel_pane

0xd72e,	// (0x0007f7cc) single_mobtv_pg_channel_table_pane

0xd737,	// (0x0007f7d5) single_mobtv_pg_channel_thumb_pane

0xd740,	// (0x0007f7de) single_tv_pg_channel_pane_g1

0xd749,	// (0x0007f7e7) single_tv_pg_channel_pane_g2

0x0001,

0xfc0f,	// (0x00081cad) single_tv_pg_channel_pane_g

0xc41e,	// (0x0007e4bc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc41e,	// (0x0007e4bc) bg_single_mobtv_pg_channel_thumb_pane

0xd752,	// (0x0007f7f0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd752,	// (0x0007f7f0) single_mobtv_pg_channel_thumb_pane_g1

0xd760,	// (0x0007f7fe) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd760,	// (0x0007f7fe) single_mobtv_pg_channel_thumb_pane_g2

0xd76c,	// (0x0007f80a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd76c,	// (0x0007f80a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc14,	// (0x00081cb2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc14,	// (0x00081cb2) single_mobtv_pg_channel_thumb_pane_g

0xd778,	// (0x0007f816) single_mobtv_pg_channel_thumb_pane_t1

0xd786,	// (0x0007f824) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1b,	// (0x00081cb9) single_mobtv_pg_channel_thumb_pane_t

0xc1ee,	// (0x0007e28c) bg_single_mobtv_pg_channel_table_pane_g1

0xc1ee,	// (0x0007e28c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x000817ad) bg_single_mobtv_pg_channel_table_pane_g

0xd794,	// (0x0007f832) single_mobtv_pg_channel_table_pane_t1

0xd7a2,	// (0x0007f840) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc20,	// (0x00081cbe) single_mobtv_pg_channel_table_pane_t

0x96f2,	// (0x0007b790) main_mobtv_info_pane_g1_ParamLimits

0x96f2,	// (0x0007b790) main_mobtv_info_pane_g1

0x9710,	// (0x0007b7ae) main_mobtv_info_pane_t1_ParamLimits

0x9710,	// (0x0007b7ae) main_mobtv_info_pane_t1

0x9788,	// (0x0007b826) main_mobtv_info_pane_t2_ParamLimits

0x9788,	// (0x0007b826) main_mobtv_info_pane_t2

0x0002,

0xfc2a,	// (0x00081cc8) main_mobtv_info_pane_t_ParamLimits

0xfc2a,	// (0x00081cc8) main_mobtv_info_pane_t

0x9819,	// (0x0007b8b7) wait_bar_pane_cp05

0x982b,	// (0x0007b8c9) main_mobtv_loading_pane_g1_ParamLimits

0x982b,	// (0x0007b8c9) main_mobtv_loading_pane_g1

0x983c,	// (0x0007b8da) main_mobtv_loading_pane_g2_ParamLimits

0x983c,	// (0x0007b8da) main_mobtv_loading_pane_g2

0x9848,	// (0x0007b8e6) main_mobtv_loading_pane_g3_ParamLimits

0x9848,	// (0x0007b8e6) main_mobtv_loading_pane_g3

0x0002,

0xfc31,	// (0x00081ccf) main_mobtv_loading_pane_g_ParamLimits

0xfc31,	// (0x00081ccf) main_mobtv_loading_pane_g

0xd7b0,	// (0x0007f84e) main_mobtv_loading_pane_t1_ParamLimits

0xd7b0,	// (0x0007f84e) main_mobtv_loading_pane_t1

0xd7c8,	// (0x0007f866) main_mobtv_loading_pane_t2_ParamLimits

0xd7c8,	// (0x0007f866) main_mobtv_loading_pane_t2

0x0001,

0xfc38,	// (0x00081cd6) main_mobtv_loading_pane_t_ParamLimits

0xfc38,	// (0x00081cd6) main_mobtv_loading_pane_t

0x985b,	// (0x0007b8f9) wait_bar_pane_cp06_ParamLimits

0x985b,	// (0x0007b8f9) wait_bar_pane_cp06

0xd7ec,	// (0x0007f88a) main_mobtv_programe_curr_pane_t1

0xd7fa,	// (0x0007f898) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3d,	// (0x00081cdb) main_mobtv_programe_curr_pane_t

0xd808,	// (0x0007f8a6) main_mobtv_programe_next_pane_t1

0xd816,	// (0x0007f8b4) main_mobtv_programe_next_pane_t2

0xd824,	// (0x0007f8c2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc42,	// (0x00081ce0) main_mobtv_programe_next_pane_t

0xa974,	// (0x0007ca12) bg_popup_mobtv_noti_window_pane

0xd832,	// (0x0007f8d0) popup_mobtv_noti_window_g1

0xd83a,	// (0x0007f8d8) popup_mobtv_noti_window_t1

0xd848,	// (0x0007f8e6) popup_mobtv_noti_window_t2

0x0001,

0xfc49,	// (0x00081ce7) popup_mobtv_noti_window_t

0xc1ee,	// (0x0007e28c) bg_popup_mobtv_noti_window_pane_g1

0xa974,	// (0x0007ca12) sc_clock_pane

0xa974,	// (0x0007ca12) main_fs_bigclock_pane

0x9040,	// (0x0007b0de) blid2_tripm_pane_t4_ParamLimits

0x9040,	// (0x0007b0de) blid2_tripm_pane_t4

0x986a,	// (0x0007b908) sc_clock_pane_g1_ParamLimits

0x986a,	// (0x0007b908) sc_clock_pane_g1

0x987c,	// (0x0007b91a) sc_clock_pane_t1_ParamLimits

0x987c,	// (0x0007b91a) sc_clock_pane_t1

0x98a0,	// (0x0007b93e) sc_clock_pane_t2_ParamLimits

0x98a0,	// (0x0007b93e) sc_clock_pane_t2

0x98b8,	// (0x0007b956) sc_clock_pane_t3_ParamLimits

0x98b8,	// (0x0007b956) sc_clock_pane_t3

0x0004,

0xfc4e,	// (0x00081cec) sc_clock_pane_t_ParamLimits

0xfc4e,	// (0x00081cec) sc_clock_pane_t

0xa17b,	// (0x0007c219) main_fs_bigclock_indicator_pane_ParamLimits

0xa17b,	// (0x0007c219) main_fs_bigclock_indicator_pane

0xc3ee,	// (0x0007e48c) main_fs_bigclock_pane_g1_ParamLimits

0xc3ee,	// (0x0007e48c) main_fs_bigclock_pane_g1

0xa187,	// (0x0007c225) main_fs_bigclock_pane_t1_ParamLimits

0xa187,	// (0x0007c225) main_fs_bigclock_pane_t1

0xa199,	// (0x0007c237) main_fs_bigclock_pane_t2_ParamLimits

0xa199,	// (0x0007c237) main_fs_bigclock_pane_t2

0xa1ad,	// (0x0007c24b) main_fs_bigclock_pane_t3_ParamLimits

0xa1ad,	// (0x0007c24b) main_fs_bigclock_pane_t3

0x0002,

0xfe4d,	// (0x00081eeb) main_fs_bigclock_pane_t_ParamLimits

0xfe4d,	// (0x00081eeb) main_fs_bigclock_pane_t

0xe4bd,	// (0x0008055b) main_fs_bigclock_indicator_pane_g1

0xd52a,	// (0x0007f5c8) ncim_query_content_pane_g2_ParamLimits

0xd52a,	// (0x0007f5c8) ncim_query_content_pane_g2

0x0001,

0xfbdb,	// (0x00081c79) ncim_query_content_pane_g_ParamLimits

0xfbdb,	// (0x00081c79) ncim_query_content_pane_g

0x98cd,	// (0x0007b96b) sc_clock_pane_t4_ParamLimits

0x98cd,	// (0x0007b96b) sc_clock_pane_t4

0x188d,	// (0x0007392b) main_radioblah_pane

0xc831,	// (0x0007e8cf) cell_call4_button_pane_t1_copy1_ParamLimits

0xc831,	// (0x0007e8cf) cell_call4_button_pane_t1_copy1

0x954e,	// (0x0007b5ec) main_ncimui_pane_t1_ParamLimits

0x954e,	// (0x0007b5ec) main_ncimui_pane_t1

0x9560,	// (0x0007b5fe) main_ncimui_pane_t2_ParamLimits

0x9560,	// (0x0007b5fe) main_ncimui_pane_t2

0x0002,

0xfbd4,	// (0x00081c72) main_ncimui_pane_t_ParamLimits

0xfbd4,	// (0x00081c72) main_ncimui_pane_t

0xd980,	// (0x0007fa1e) main_radioblah_anim_pane_ParamLimits

0xd980,	// (0x0007fa1e) main_radioblah_anim_pane

0xd991,	// (0x0007fa2f) main_radioblah_info_pane_ParamLimits

0xd991,	// (0x0007fa2f) main_radioblah_info_pane

0xd9a5,	// (0x0007fa43) main_radioblah_pane_t1_ParamLimits

0xd9a5,	// (0x0007fa43) main_radioblah_pane_t1

0xd9c1,	// (0x0007fa5f) main_radioblah_pane_t2_ParamLimits

0xd9c1,	// (0x0007fa5f) main_radioblah_pane_t2

0x0003,

0xfc6f,	// (0x00081d0d) main_radioblah_pane_t_ParamLimits

0xfc6f,	// (0x00081d0d) main_radioblah_pane_t

0x997b,	// (0x0007ba19) main_radioblah_rocker_ctrl_pane_ParamLimits

0x997b,	// (0x0007ba19) main_radioblah_rocker_ctrl_pane

0xda09,	// (0x0007faa7) main_radioblah_info_pane_t1_ParamLimits

0xda09,	// (0x0007faa7) main_radioblah_info_pane_t1

0x99d3,	// (0x0007ba71) main_radioblah_info_pane_t2_ParamLimits

0x99d3,	// (0x0007ba71) main_radioblah_info_pane_t2

0x0003,

0xfc78,	// (0x00081d16) main_radioblah_info_pane_t_ParamLimits

0xfc78,	// (0x00081d16) main_radioblah_info_pane_t

0xc1ee,	// (0x0007e28c) main_radioblah_rocker_ctrl_pane_g1

0x9a83,	// (0x0007bb21) main_radioblah_rocker_ctrl_pane_g2

0x9a8b,	// (0x0007bb29) main_radioblah_rocker_ctrl_pane_g3

0x9a93,	// (0x0007bb31) main_radioblah_rocker_ctrl_pane_g4

0x9a9b,	// (0x0007bb39) main_radioblah_rocker_ctrl_pane_g5

0x9aa3,	// (0x0007bb41) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc81,	// (0x00081d1f) main_radioblah_rocker_ctrl_pane_g

0x92cf,	// (0x0007b36d) main_cset_text2_pane_t1_copy1_ParamLimits

0xebf4,	// (0x00080c92) cam4_image_uncrop_qvga_pane

0xec4d,	// (0x00080ceb) vid4_image_uncrop_qcif_pane

0xed71,	// (0x00080e0f) cam6_image_uncrop_qvga_pane_ParamLimits

0xed71,	// (0x00080e0f) cam6_image_uncrop_qvga_pane

0xd15c,	// (0x0007f1fa) vid6_image_uncrop_qcif_pane_ParamLimits

0xd15c,	// (0x0007f1fa) vid6_image_uncrop_qcif_pane

0xa974,	// (0x0007ca12) bg_popup_preview_window_pane_cp03

0xd4dc,	// (0x0007f57a) list_cset_text2_pane

0xd4e4,	// (0x0007f582) main_cset6_text2_pane_g1

0xd4ec,	// (0x0007f58a) main_cset6_text2_pane_t1

0xda43,	// (0x0007fae1) list_cset_text2_pane_t1_ParamLimits

0xda43,	// (0x0007fae1) list_cset_text2_pane_t1

0x188d,	// (0x0007392b) main_radioblah_pane_ParamLimits

0x9805,	// (0x0007b8a3) main_mobtv_info_pane_t3_ParamLimits

0x9805,	// (0x0007b8a3) main_mobtv_info_pane_t3

0x9969,	// (0x0007ba07) main_radioblah_pane_g1

0x99a3,	// (0x0007ba41) main_radioblah_info_pane_g1

0x9a28,	// (0x0007bac6) main_radioblah_info_pane_t3_ParamLimits

0x9a28,	// (0x0007bac6) main_radioblah_info_pane_t3

0x3c76,	// (0x00075d14) highlight_cell_cale_month_pane_ParamLimits

0x3c76,	// (0x00075d14) highlight_cell_cale_month_pane

0xa974,	// (0x0007ca12) main_phob_fisheye_pane

0xc52c,	// (0x0007e5ca) scroll_pane_cp0031_ParamLimits

0xc52c,	// (0x0007e5ca) scroll_pane_cp0031

0xd26e,	// (0x0007f30c) wait_bar_pane_cp08_ParamLimits

0x9358,	// (0x0007b3f6) cset_list_set_pane_copy1_ParamLimits

0xda5d,	// (0x0007fafb) highlight_cell_cale_month_pane_g1

0x9aab,	// (0x0007bb49) highlight_cell_cale_month_pane_t1

0xce99,	// (0x0007ef37) list_gen_pane_cp01

0xca2f,	// (0x0007eacd) scroll_pane_01

0x9ab9,	// (0x0007bb57) list_single_double_fisheye_pane

0xda65,	// (0x0007fb03) list_double_fisheye_pane_g1_ParamLimits

0xda65,	// (0x0007fb03) list_double_fisheye_pane_g1

0xda71,	// (0x0007fb0f) list_double_fisheye_pane_g2_ParamLimits

0xda71,	// (0x0007fb0f) list_double_fisheye_pane_g2

0x9ac2,	// (0x0007bb60) list_double_fisheye_pane_g3_ParamLimits

0x9ac2,	// (0x0007bb60) list_double_fisheye_pane_g3

0x0004,

0xfc8e,	// (0x00081d2c) list_double_fisheye_pane_g_ParamLimits

0xfc8e,	// (0x00081d2c) list_double_fisheye_pane_g

0x109f,	// (0x0007313d) list_double_fisheye_pane_t1_ParamLimits

0x109f,	// (0x0007313d) list_double_fisheye_pane_t1

0x10ba,	// (0x00073158) list_double_fisheye_pane_t2_ParamLimits

0x10ba,	// (0x00073158) list_double_fisheye_pane_t2

0x0001,

0xfc99,	// (0x00081d37) list_double_fisheye_pane_t_ParamLimits

0xfc99,	// (0x00081d37) list_double_fisheye_pane_t

0xa974,	// (0x0007ca12) main_call5_pane

0x98f8,	// (0x0007b996) sc_swipe_pane_ParamLimits

0x98f8,	// (0x0007b996) sc_swipe_pane

0x9ae1,	// (0x0007bb7f) call5_image_pane_ParamLimits

0x9ae1,	// (0x0007bb7f) call5_image_pane

0x9afe,	// (0x0007bb9c) call5_swipe_1_pane_ParamLimits

0x9afe,	// (0x0007bb9c) call5_swipe_1_pane

0x9b11,	// (0x0007bbaf) call5_swipe_2_pane_ParamLimits

0x9b11,	// (0x0007bbaf) call5_swipe_2_pane

0x9b3e,	// (0x0007bbdc) popup_call5_audio_first_window_ParamLimits

0x9b3e,	// (0x0007bbdc) popup_call5_audio_first_window

0xc41e,	// (0x0007e4bc) call5_swipe_1_pane_g1_ParamLimits

0xc41e,	// (0x0007e4bc) call5_swipe_1_pane_g1

0xdaa2,	// (0x0007fb40) call5_swipe_1_pane_g2_ParamLimits

0xdaa2,	// (0x0007fb40) call5_swipe_1_pane_g2

0x0001,

0xfc9e,	// (0x00081d3c) call5_swipe_1_pane_g_ParamLimits

0xfc9e,	// (0x00081d3c) call5_swipe_1_pane_g

0xdaae,	// (0x0007fb4c) call5_swipe_1_pane_t1_ParamLimits

0xdaae,	// (0x0007fb4c) call5_swipe_1_pane_t1

0xc41e,	// (0x0007e4bc) call5_swipe_2_pane_g1_ParamLimits

0xc41e,	// (0x0007e4bc) call5_swipe_2_pane_g1

0xdac3,	// (0x0007fb61) call5_swipe_2_pane_g2_ParamLimits

0xdac3,	// (0x0007fb61) call5_swipe_2_pane_g2

0x0001,

0xfca3,	// (0x00081d41) call5_swipe_2_pane_g_ParamLimits

0xfca3,	// (0x00081d41) call5_swipe_2_pane_g

0xdacf,	// (0x0007fb6d) call5_swipe_2_pane_t1_ParamLimits

0xdacf,	// (0x0007fb6d) call5_swipe_2_pane_t1

0xdae4,	// (0x0007fb82) sc_swipe_pane_g1_ParamLimits

0xdae4,	// (0x0007fb82) sc_swipe_pane_g1

0xdaf1,	// (0x0007fb8f) sc_swipe_pane_g2_ParamLimits

0xdaf1,	// (0x0007fb8f) sc_swipe_pane_g2

0x0001,

0xfca8,	// (0x00081d46) sc_swipe_pane_g_ParamLimits

0xfca8,	// (0x00081d46) sc_swipe_pane_g

0xdafd,	// (0x0007fb9b) sc_swipe_pane_t1_ParamLimits

0xdafd,	// (0x0007fb9b) sc_swipe_pane_t1

0xa974,	// (0x0007ca12) main_cmail_launcher_pane

0x9b53,	// (0x0007bbf1) aid_size_cell_cmail_l_ParamLimits

0x9b53,	// (0x0007bbf1) aid_size_cell_cmail_l

0x9b6d,	// (0x0007bc0b) grid_cmail_l_pane_ParamLimits

0x9b6d,	// (0x0007bc0b) grid_cmail_l_pane

0x9b89,	// (0x0007bc27) cell_cmail_l_pane_ParamLimits

0x9b89,	// (0x0007bc27) cell_cmail_l_pane

0x9bb1,	// (0x0007bc4f) cell_cmail_l_pane_g1_ParamLimits

0x9bb1,	// (0x0007bc4f) cell_cmail_l_pane_g1

0x9bbd,	// (0x0007bc5b) cell_cmail_l_pane_t1_ParamLimits

0x9bbd,	// (0x0007bc5b) cell_cmail_l_pane_t1

0xdb12,	// (0x0007fbb0) cell_cmail_l_pane_t2_ParamLimits

0xdb12,	// (0x0007fbb0) cell_cmail_l_pane_t2

0x0001,

0xfcad,	// (0x00081d4b) cell_cmail_l_pane_t_ParamLimits

0xfcad,	// (0x00081d4b) cell_cmail_l_pane_t

0x188d,	// (0x0007392b) grid_highlight_pane_cp018_ParamLimits

0x188d,	// (0x0007392b) grid_highlight_pane_cp018

0x173a,	// (0x000737d8) main2_pane_ParamLimits

0x173a,	// (0x000737d8) main2_pane

0x2553,	// (0x000745f1) popup_sp_fs_action_menu_bg_pane_g1

0x255b,	// (0x000745f9) popup_sp_fs_action_menu_bg_pane_g2

0x2563,	// (0x00074601) popup_sp_fs_action_menu_bg_pane_g3

0x256b,	// (0x00074609) popup_sp_fs_action_menu_bg_pane_g4

0x2573,	// (0x00074611) popup_sp_fs_action_menu_bg_pane_g5

0x257b,	// (0x00074619) popup_sp_fs_action_menu_bg_pane_g6

0x2583,	// (0x00074621) popup_sp_fs_action_menu_bg_pane_g7

0x258b,	// (0x00074629) popup_sp_fs_action_menu_bg_pane_g8

0x2593,	// (0x00074631) popup_sp_fs_action_menu_bg_pane_g9

0x259b,	// (0x00074639) popup_sp_fs_action_menu_bg_pane_g10

0x259b,	// (0x00074639) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00081259) popup_sp_fs_action_menu_bg_pane_g

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t3_g3_g1

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t3_g3_g2

0xab0b,	// (0x0007cba9) list_medium_line_x2_t3_g3_g3_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00081309) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00081309) list_medium_line_x2_t3_g3_g

0xab17,	// (0x0007cbb5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xab17,	// (0x0007cbb5) list_medium_line_x2_t3_g3_t1

0x0ce2,	// (0x00072d80) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ce2,	// (0x00072d80) list_medium_line_x2_t3_g3_t2

0xab2c,	// (0x0007cbca) list_medium_line_x2_t3_g3_t3_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00081310) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00081310) list_medium_line_x2_t3_g3_t

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t3_g2_g1

0xab0b,	// (0x0007cba9) list_medium_line_x2_t3_g2_g2_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00081317) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00081317) list_medium_line_x2_t3_g2_g

0xab41,	// (0x0007cbdf) list_medium_line_x2_t3_g2_t1_ParamLimits

0xab41,	// (0x0007cbdf) list_medium_line_x2_t3_g2_t1

0xab57,	// (0x0007cbf5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xab57,	// (0x0007cbf5) list_medium_line_x2_t3_g2_t2

0xab69,	// (0x0007cc07) list_medium_line_x2_t3_g2_t3_ParamLimits

0xab69,	// (0x0007cc07) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0008131c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0008131c) list_medium_line_x2_t3_g2_t

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t4_g4_g1

0xab87,	// (0x0007cc25) list_medium_line_x2_t4_g4_g2_ParamLimits

0xab87,	// (0x0007cc25) list_medium_line_x2_t4_g4_g2

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t4_g4_g3

0xab93,	// (0x0007cc31) list_medium_line_x2_t4_g4_g4_ParamLimits

0xab93,	// (0x0007cc31) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00081323) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00081323) list_medium_line_x2_t4_g4_g

0x0cf6,	// (0x00072d94) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cf6,	// (0x00072d94) list_medium_line_x2_t4_g4_t1

0x0d10,	// (0x00072dae) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d10,	// (0x00072dae) list_medium_line_x2_t4_g4_t2

0x0d26,	// (0x00072dc4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d26,	// (0x00072dc4) list_medium_line_x2_t4_g4_t3

0xab9f,	// (0x0007cc3d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xab9f,	// (0x0007cc3d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0008132c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0008132c) list_medium_line_x2_t4_g4_t

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t2_g4_g1

0xab87,	// (0x0007cc25) list_medium_line_x2_t2_g4_g2_ParamLimits

0xab87,	// (0x0007cc25) list_medium_line_x2_t2_g4_g2

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t2_g4_g3

0xab0b,	// (0x0007cba9) list_medium_line_x2_t2_g4_g4_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00081393) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00081393) list_medium_line_x2_t2_g4_g

0xabb1,	// (0x0007cc4f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xabb1,	// (0x0007cc4f) list_medium_line_x2_t2_g4_t1

0xab2c,	// (0x0007cbca) list_medium_line_x2_t2_g4_t2_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0008139c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0008139c) list_medium_line_x2_t2_g4_t

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t2_g3_g1

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t2_g3_g2

0xab0b,	// (0x0007cba9) list_medium_line_x2_t2_g3_g3_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00081309) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00081309) list_medium_line_x2_t2_g3_g

0xabc6,	// (0x0007cc64) list_medium_line_x2_t2_g3_t1_ParamLimits

0xabc6,	// (0x0007cc64) list_medium_line_x2_t2_g3_t1

0xab2c,	// (0x0007cbca) list_medium_line_x2_t2_g3_t2_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000813a1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000813a1) list_medium_line_x2_t2_g3_t

0x3ff1,	// (0x0007608f) main_sp_fs_list_pane_ParamLimits

0x3ff1,	// (0x0007608f) main_sp_fs_list_pane

0x3ffd,	// (0x0007609b) sp_fs_scroll_pane_ParamLimits

0x3ffd,	// (0x0007609b) sp_fs_scroll_pane

0x0d3b,	// (0x00072dd9) list_medium_line_x2_t3_t1

0x0d4b,	// (0x00072de9) list_medium_line_x2_t3_t2

0xac09,	// (0x0007cca7) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x000813ec) list_medium_line_x2_t3_t

0x0d59,	// (0x00072df7) list_medium_line_x3_t4_t1

0x0d69,	// (0x00072e07) list_medium_line_x3_t4_t2

0xac17,	// (0x0007ccb5) list_medium_line_x3_t4_t3

0xac09,	// (0x0007cca7) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x000813f3) list_medium_line_x3_t4_t

0x0d77,	// (0x00072e15) list_medium_line_x4_t5_t1

0x0d87,	// (0x00072e25) list_medium_line_x4_t5_t2

0xac17,	// (0x0007ccb5) list_medium_line_x4_t5_t3

0xac25,	// (0x0007ccc3) list_medium_line_x4_t5_t4

0xac09,	// (0x0007cca7) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x000813fc) list_medium_line_x4_t5_t

0xaaf3,	// (0x0007cb91) list_medium_line_t4_g4_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_t4_g4_g1

0xab93,	// (0x0007cc31) list_medium_line_t4_g4_g2_ParamLimits

0xab93,	// (0x0007cc31) list_medium_line_t4_g4_g2

0xac33,	// (0x0007ccd1) list_medium_line_t4_g4_g3_ParamLimits

0xac33,	// (0x0007ccd1) list_medium_line_t4_g4_g3

0xab0b,	// (0x0007cba9) list_medium_line_t4_g4_g4_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00081407) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00081407) list_medium_line_t4_g4_g

0xac3f,	// (0x0007ccdd) list_medium_line_t4_g4_t1_ParamLimits

0xac3f,	// (0x0007ccdd) list_medium_line_t4_g4_t1

0xac54,	// (0x0007ccf2) list_medium_line_t4_g4_t2_ParamLimits

0xac54,	// (0x0007ccf2) list_medium_line_t4_g4_t2

0xac6a,	// (0x0007cd08) list_medium_line_t4_g4_t3_ParamLimits

0xac6a,	// (0x0007cd08) list_medium_line_t4_g4_t3

0xab2c,	// (0x0007cbca) list_medium_line_t4_g4_t4_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00081410) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00081410) list_medium_line_t4_g4_t

0x4340,	// (0x000763de) chi_dic_find_pane_g1

0x5a55,	// (0x00077af3) main_tport_pane

0xcb4e,	// (0x0007ebec) list_medium_line_plain_t1

0xcb64,	// (0x0007ec02) list_medium_line_t2_g2_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_t2_g2_g1

0xcb70,	// (0x0007ec0e) list_medium_line_t2_g2_g2_ParamLimits

0xcb70,	// (0x0007ec0e) list_medium_line_t2_g2_g2

0x0001,

0xf9f0,	// (0x00081a8e) list_medium_line_t2_g2_g_ParamLimits

0xf9f0,	// (0x00081a8e) list_medium_line_t2_g2_g

0x0f8f,	// (0x0007302d) list_medium_line_t2_g2_t1_ParamLimits

0x0f8f,	// (0x0007302d) list_medium_line_t2_g2_t1

0x0fa6,	// (0x00073044) list_medium_line_t2_g2_t2_ParamLimits

0x0fa6,	// (0x00073044) list_medium_line_t2_g2_t2

0x0001,

0xf9f5,	// (0x00081a93) list_medium_line_t2_g2_t_ParamLimits

0xf9f5,	// (0x00081a93) list_medium_line_t2_g2_t

0xcea2,	// (0x0007ef40) aid_sp_fs_list_icon_a_sm

0xed69,	// (0x00080e07) aid_sp_fs_list_icon_d

0xceaa,	// (0x0007ef48) aid_sp_fs_text_primary

0xceb3,	// (0x0007ef51) aid_sp_fs_text_secondary

0xcebc,	// (0x0007ef5a) list_medium_line

0xcebc,	// (0x0007ef5a) list_medium_line_g2

0xcebc,	// (0x0007ef5a) list_medium_line_g3

0xcebc,	// (0x0007ef5a) list_medium_line_plain

0xcebc,	// (0x0007ef5a) list_medium_line_plain_t2

0xcebc,	// (0x0007ef5a) list_medium_line_plain_t3

0xcebc,	// (0x0007ef5a) list_medium_line_right_icon

0xcebc,	// (0x0007ef5a) list_medium_line_right_iconx2

0xcebc,	// (0x0007ef5a) list_medium_line_t2

0xcebc,	// (0x0007ef5a) list_medium_line_t2_g2

0xcebc,	// (0x0007ef5a) list_medium_line_t2_g3

0xcebc,	// (0x0007ef5a) list_medium_line_t2_right_icon

0xcebc,	// (0x0007ef5a) list_medium_line_t2_right_iconx2

0xcebc,	// (0x0007ef5a) list_medium_line_t3

0xcebc,	// (0x0007ef5a) list_medium_line_t3_g2

0xcebc,	// (0x0007ef5a) list_medium_line_t3_g3

0xcebc,	// (0x0007ef5a) list_medium_line_t3_right_iconx2

0xcec5,	// (0x0007ef63) list_medium_line_t4_g4

0xcece,	// (0x0007ef6c) list_medium_line_x2

0xcece,	// (0x0007ef6c) list_medium_line_x2_t2_g2

0xcece,	// (0x0007ef6c) list_medium_line_x2_t2_g3

0xcece,	// (0x0007ef6c) list_medium_line_x2_t2_g4

0xcece,	// (0x0007ef6c) list_medium_line_x2_t3

0xcece,	// (0x0007ef6c) list_medium_line_x2_t3_g2

0xcece,	// (0x0007ef6c) list_medium_line_x2_t3_g3

0xcece,	// (0x0007ef6c) list_medium_line_x2_t3_g4

0xcece,	// (0x0007ef6c) list_medium_line_x2_t4_g2

0xcece,	// (0x0007ef6c) list_medium_line_x2_t4_g4

0xced7,	// (0x0007ef75) list_medium_line_x3

0xced7,	// (0x0007ef75) list_medium_line_x3_t4

0xced7,	// (0x0007ef75) list_medium_line_x3_t4_g4

0xcec5,	// (0x0007ef63) list_medium_line_x4_t4

0xcec5,	// (0x0007ef63) list_medium_line_x4_t4_g7

0xcec5,	// (0x0007ef63) list_medium_line_x4_t5

0xcee0,	// (0x0007ef7e) list_single_fs_dyc_pane_ParamLimits

0xcee0,	// (0x0007ef7e) list_single_fs_dyc_pane

0xaaf3,	// (0x0007cb91) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x4_t4_g7_g1

0xd40b,	// (0x0007f4a9) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd40b,	// (0x0007f4a9) list_medium_line_x4_t4_g7_g2

0xd417,	// (0x0007f4b5) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd417,	// (0x0007f4b5) list_medium_line_x4_t4_g7_g3

0xd426,	// (0x0007f4c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd426,	// (0x0007f4c4) list_medium_line_x4_t4_g7_g4

0xd432,	// (0x0007f4d0) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd432,	// (0x0007f4d0) list_medium_line_x4_t4_g7_g5

0xd441,	// (0x0007f4df) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd441,	// (0x0007f4df) list_medium_line_x4_t4_g7_g6

0xd450,	// (0x0007f4ee) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd450,	// (0x0007f4ee) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbba,	// (0x00081c58) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbba,	// (0x00081c58) list_medium_line_x4_t4_g7_g

0xd45c,	// (0x0007f4fa) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd45c,	// (0x0007f4fa) list_medium_line_x4_t4_g7_t1

0xd471,	// (0x0007f50f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd471,	// (0x0007f50f) list_medium_line_x4_t4_g7_t2

0xd486,	// (0x0007f524) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd486,	// (0x0007f524) list_medium_line_x4_t4_g7_t3

0xd49b,	// (0x0007f539) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd49b,	// (0x0007f539) list_medium_line_x4_t4_g7_t4

0xd4ad,	// (0x0007f54b) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd4ad,	// (0x0007f54b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc9,	// (0x00081c67) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc9,	// (0x00081c67) list_medium_line_x4_t4_g7_t

0xd4bf,	// (0x0007f55d) list_single_dyc_row_pane_ParamLimits

0xd4bf,	// (0x0007f55d) list_single_dyc_row_pane

0x9ace,	// (0x0007bb6c) call5_gesture_pane_ParamLimits

0x9ace,	// (0x0007bb6c) call5_gesture_pane

0x9b24,	// (0x0007bbc2) call5_windows_pane_ParamLimits

0x9b24,	// (0x0007bbc2) call5_windows_pane

0x9bd3,	// (0x0007bc71) call5_swipe_1_pane_cp_ParamLimits

0x9bd3,	// (0x0007bc71) call5_swipe_1_pane_cp

0x9bdf,	// (0x0007bc7d) call5_swipe_2_pane_cp_ParamLimits

0x9bdf,	// (0x0007bc7d) call5_swipe_2_pane_cp

0x47c4,	// (0x00076862) call5_image_pane_cp

0x9beb,	// (0x0007bc89) popup_call5_audio_first_window_cp_ParamLimits

0x9beb,	// (0x0007bc89) popup_call5_audio_first_window_cp

0xdae4,	// (0x0007fb82) call5_swipe_1_pane_g1_cp_ParamLimits

0xdae4,	// (0x0007fb82) call5_swipe_1_pane_g1_cp

0xdb24,	// (0x0007fbc2) call5_swipe_1_pane_g2_cp

0xdafd,	// (0x0007fb9b) call5_swipe_1_pane_t1_cp_ParamLimits

0xdafd,	// (0x0007fb9b) call5_swipe_1_pane_t1_cp

0xdae4,	// (0x0007fb82) call5_swipe_2_pane_g1_cp_ParamLimits

0xdae4,	// (0x0007fb82) call5_swipe_2_pane_g1_cp

0xdb2c,	// (0x0007fbca) call5_swipe_2_pane_g2_cp

0xdb34,	// (0x0007fbd2) call5_swipe_2_pane_t1_cp_ParamLimits

0xdb34,	// (0x0007fbd2) call5_swipe_2_pane_t1_cp

0x188d,	// (0x0007392b) main_sp_fs_email_pane

0xdb49,	// (0x0007fbe7) main_sp_fs_listscroll_pane_te

0xdb52,	// (0x0007fbf0) popup_sp_fs_action_menu_pane_ParamLimits

0xdb52,	// (0x0007fbf0) popup_sp_fs_action_menu_pane

0xc1ee,	// (0x0007e28c) bg_sp_fs_ctrlbar_pane_g1

0xdb98,	// (0x0007fc36) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdba1,	// (0x0007fc3f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdbaa,	// (0x0007fc48) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc1ee,	// (0x0007e28c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb2,	// (0x00081d50) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbfcd,	// (0x0007e06b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbfcd,	// (0x0007e06b) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbb3,	// (0x0007fc51) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbb3,	// (0x0007fc51) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbbf,	// (0x0007fc5d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdbbf,	// (0x0007fc5d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbb,	// (0x00081d59) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbb,	// (0x00081d59) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdbcb,	// (0x0007fc69) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdbcb,	// (0x0007fc69) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdbe5,	// (0x0007fc83) list_medium_line_t2_right_icon_g1

0x10dc,	// (0x0007317a) list_medium_line_t2_right_icon_t1

0x10ec,	// (0x0007318a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc0,	// (0x00081d5e) list_medium_line_t2_right_icon_t

0xbd26,	// (0x0007ddc4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd26,	// (0x0007ddc4) bg_sp_fs_ctrlbar_pane

0x9c41,	// (0x0007bcdf) main_sp_fs_ctrlbar_button_pane_cp01

0x9c49,	// (0x0007bce7) main_sp_fs_ctrlbar_ddmenu_pane

0xdc27,	// (0x0007fcc5) main_sp_fs_ctrlbar_pane_g1

0xdc33,	// (0x0007fcd1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc5,	// (0x00081d63) main_sp_fs_ctrlbar_pane_g

0xdc3f,	// (0x0007fcdd) main_sp_fs_ctrlbar_pane_t1

0x10fa,	// (0x00073198) main_sp_fs_ctrlbar_pane

0x111e,	// (0x000731bc) main_sp_fs_listscroll_pane_te_cp01

0x113e,	// (0x000731dc) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x113e,	// (0x000731dc) popup_sp_fs_action_menu_pane_cp01

0x188d,	// (0x0007392b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x188d,	// (0x0007392b) bg_sp_fs_highlight_list_pane_cp01

0xdc54,	// (0x0007fcf2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc54,	// (0x0007fcf2) sp_fs_action_menu_list_gene_pane_g1

0xdc63,	// (0x0007fd01) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc63,	// (0x0007fd01) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcca,	// (0x00081d68) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcca,	// (0x00081d68) sp_fs_action_menu_list_gene_pane_g

0xdc70,	// (0x0007fd0e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc70,	// (0x0007fd0e) sp_fs_action_menu_list_gene_pane_t1

0xdc88,	// (0x0007fd26) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdc88,	// (0x0007fd26) sp_fs_action_menu_list_gene_pane

0xdcab,	// (0x0007fd49) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdcab,	// (0x0007fd49) popup_sp_fs_action_menu_bg_pane

0xdcb9,	// (0x0007fd57) sp_fs_action_menu_list_pane_ParamLimits

0xdcb9,	// (0x0007fd57) sp_fs_action_menu_list_pane

0xdcdd,	// (0x0007fd7b) sp_fs_scroll_pane_cp01_ParamLimits

0xdcdd,	// (0x0007fd7b) sp_fs_scroll_pane_cp01

0x115a,	// (0x000731f8) list_medium_line_plain_t2_t1

0x116a,	// (0x00073208) list_medium_line_plain_t2_t2

0x0001,

0xfccf,	// (0x00081d6d) list_medium_line_plain_t2_t

0x1178,	// (0x00073216) list_medium_line_plain_t3_t1

0x1188,	// (0x00073226) list_medium_line_plain_t3_t2

0x1196,	// (0x00073234) list_medium_line_plain_t3_t3

0x0002,

0xfcd4,	// (0x00081d72) list_medium_line_plain_t3_t

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t2_g2_g1

0xab0b,	// (0x0007cba9) list_medium_line_x2_t2_g2_g2_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00081317) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00081317) list_medium_line_x2_t2_g2_g

0xac3f,	// (0x0007ccdd) list_medium_line_x2_t2_g2_t1_ParamLimits

0xac3f,	// (0x0007ccdd) list_medium_line_x2_t2_g2_t1

0xab2c,	// (0x0007cbca) list_medium_line_x2_t2_g2_t2_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcdb,	// (0x00081d79) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcdb,	// (0x00081d79) list_medium_line_x2_t2_g2_t

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t4_g2_g1

0xdd03,	// (0x0007fda1) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdd03,	// (0x0007fda1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce0,	// (0x00081d7e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce0,	// (0x00081d7e) list_medium_line_x2_t4_g2_g

0x11a4,	// (0x00073242) list_medium_line_x2_t4_g2_t1_ParamLimits

0x11a4,	// (0x00073242) list_medium_line_x2_t4_g2_t1

0x11be,	// (0x0007325c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x11be,	// (0x0007325c) list_medium_line_x2_t4_g2_t2

0x11d4,	// (0x00073272) list_medium_line_x2_t4_g2_t3_ParamLimits

0x11d4,	// (0x00073272) list_medium_line_x2_t4_g2_t3

0xab2c,	// (0x0007cbca) list_medium_line_x2_t4_g2_t4_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce5,	// (0x00081d83) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce5,	// (0x00081d83) list_medium_line_x2_t4_g2_t

0xdd15,	// (0x0007fdb3) list_medium_line_t3_right_iconx2_g1

0xdbe5,	// (0x0007fc83) list_medium_line_t3_right_iconx2_g2

0x11e9,	// (0x00073287) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcee,	// (0x00081d8c) list_medium_line_t3_right_iconx2_g

0x11f3,	// (0x00073291) list_medium_line_t3_right_iconx2_t1

0x1203,	// (0x000732a1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf5,	// (0x00081d93) list_medium_line_t3_right_iconx2_t

0xaaf3,	// (0x0007cb91) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x3_t4_g4_g1

0xaaff,	// (0x0007cb9d) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x3_t4_g4_g2

0xab93,	// (0x0007cc31) list_medium_line_x3_t4_g4_g3_ParamLimits

0xab93,	// (0x0007cc31) list_medium_line_x3_t4_g4_g3

0xdd1d,	// (0x0007fdbb) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdd1d,	// (0x0007fdbb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfa,	// (0x00081d98) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfa,	// (0x00081d98) list_medium_line_x3_t4_g4_g

0x1211,	// (0x000732af) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1211,	// (0x000732af) list_medium_line_x3_t4_g4_t1

0x1228,	// (0x000732c6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1228,	// (0x000732c6) list_medium_line_x3_t4_g4_t2

0xdd29,	// (0x0007fdc7) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdd29,	// (0x0007fdc7) list_medium_line_x3_t4_g4_t3

0xdd3e,	// (0x0007fddc) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdd3e,	// (0x0007fddc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd03,	// (0x00081da1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd03,	// (0x00081da1) list_medium_line_x3_t4_g4_t

0x123d,	// (0x000732db) list_single_dyc_row_text_pane_t1_ParamLimits

0x123d,	// (0x000732db) list_single_dyc_row_text_pane_t1

0x1284,	// (0x00073322) list_single_dyc_row_text_pane_t2_ParamLimits

0x1284,	// (0x00073322) list_single_dyc_row_text_pane_t2

0xdd5b,	// (0x0007fdf9) list_single_dyc_row_text_pane_t3_ParamLimits

0xdd5b,	// (0x0007fdf9) list_single_dyc_row_text_pane_t3

0x0002,

0xfd0c,	// (0x00081daa) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0c,	// (0x00081daa) list_single_dyc_row_text_pane_t

0xdd6d,	// (0x0007fe0b) list_single_dyc_row_pane_g1_ParamLimits

0xdd6d,	// (0x0007fe0b) list_single_dyc_row_pane_g1

0xdd79,	// (0x0007fe17) list_single_dyc_row_pane_g2_ParamLimits

0xdd79,	// (0x0007fe17) list_single_dyc_row_pane_g2

0xdd85,	// (0x0007fe23) list_single_dyc_row_pane_g3_ParamLimits

0xdd85,	// (0x0007fe23) list_single_dyc_row_pane_g3

0xdd91,	// (0x0007fe2f) list_single_dyc_row_pane_g4_ParamLimits

0xdd91,	// (0x0007fe2f) list_single_dyc_row_pane_g4

0x0003,

0xfd13,	// (0x00081db1) list_single_dyc_row_pane_g_ParamLimits

0xfd13,	// (0x00081db1) list_single_dyc_row_pane_g

0xdd9d,	// (0x0007fe3b) list_single_dyc_row_text_pane_ParamLimits

0xdd9d,	// (0x0007fe3b) list_single_dyc_row_text_pane

0xa974,	// (0x0007ca12) bg_sp_fs_scroll_pane

0xddbc,	// (0x0007fe5a) thumb_sp_fs_scroll_pane

0xcb64,	// (0x0007ec02) list_medium_line_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_g1

0xddc5,	// (0x0007fe63) list_medium_line_t1_ParamLimits

0xddc5,	// (0x0007fe63) list_medium_line_t1

0xaaf3,	// (0x0007cb91) list_medium_line_x2_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_g1

0xaaff,	// (0x0007cb9d) list_medium_line_x2_g2_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x2_g2

0x0001,

0xfd1c,	// (0x00081dba) list_medium_line_x2_g_ParamLimits

0xfd1c,	// (0x00081dba) list_medium_line_x2_g

0xddda,	// (0x0007fe78) list_medium_line_x2_t1_ParamLimits

0xddda,	// (0x0007fe78) list_medium_line_x2_t1

0xaaf3,	// (0x0007cb91) list_medium_line_x3_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x3_g1

0xaaff,	// (0x0007cb9d) list_medium_line_x3_g2_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x3_g2

0x0001,

0xfd1c,	// (0x00081dba) list_medium_line_x3_g_ParamLimits

0xfd1c,	// (0x00081dba) list_medium_line_x3_g

0xddda,	// (0x0007fe78) list_medium_line_x3_t1_ParamLimits

0xddda,	// (0x0007fe78) list_medium_line_x3_t1

0xddf0,	// (0x0007fe8e) thumb_sp_fs_scroll_pane_g1

0xddf9,	// (0x0007fe97) thumb_sp_fs_scroll_pane_g2

0xde02,	// (0x0007fea0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd21,	// (0x00081dbf) thumb_sp_fs_scroll_pane_g

0xddf0,	// (0x0007fe8e) bg_sp_fs_scroll_pane_g1

0xddf9,	// (0x0007fe97) bg_sp_fs_scroll_pane_g2

0xde02,	// (0x0007fea0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd21,	// (0x00081dbf) bg_sp_fs_scroll_pane_g

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaaf3,	// (0x0007cb91) list_medium_line_x2_t3_g4_g1

0xab87,	// (0x0007cc25) list_medium_line_x2_t3_g4_g2_ParamLimits

0xab87,	// (0x0007cc25) list_medium_line_x2_t3_g4_g2

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaaff,	// (0x0007cb9d) list_medium_line_x2_t3_g4_g3

0xab0b,	// (0x0007cba9) list_medium_line_x2_t3_g4_g4_ParamLimits

0xab0b,	// (0x0007cba9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00081393) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00081393) list_medium_line_x2_t3_g4_g

0x12de,	// (0x0007337c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x12de,	// (0x0007337c) list_medium_line_x2_t3_g4_t1

0x12f4,	// (0x00073392) list_medium_line_x2_t3_g4_t2_ParamLimits

0x12f4,	// (0x00073392) list_medium_line_x2_t3_g4_t2

0xab2c,	// (0x0007cbca) list_medium_line_x2_t3_g4_t3_ParamLimits

0xab2c,	// (0x0007cbca) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd28,	// (0x00081dc6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd28,	// (0x00081dc6) list_medium_line_x2_t3_g4_t

0xcb64,	// (0x0007ec02) list_medium_line_g2_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_g2_g1

0xcb70,	// (0x0007ec0e) list_medium_line_g2_g2_ParamLimits

0xcb70,	// (0x0007ec0e) list_medium_line_g2_g2

0x0001,

0xf9f0,	// (0x00081a8e) list_medium_line_g2_g_ParamLimits

0xf9f0,	// (0x00081a8e) list_medium_line_g2_g

0xde0b,	// (0x0007fea9) list_medium_line_g2_t1_ParamLimits

0xde0b,	// (0x0007fea9) list_medium_line_g2_t1

0xcb64,	// (0x0007ec02) list_medium_line_t3_g2_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_t3_g2_g1

0xcb70,	// (0x0007ec0e) list_medium_line_t3_g2_g2_ParamLimits

0xcb70,	// (0x0007ec0e) list_medium_line_t3_g2_g2

0x0001,

0xf9f0,	// (0x00081a8e) list_medium_line_t3_g2_g_ParamLimits

0xf9f0,	// (0x00081a8e) list_medium_line_t3_g2_g

0x130d,	// (0x000733ab) list_medium_line_t3_g2_t1_ParamLimits

0x130d,	// (0x000733ab) list_medium_line_t3_g2_t1

0x1324,	// (0x000733c2) list_medium_line_t3_g2_t2_ParamLimits

0x1324,	// (0x000733c2) list_medium_line_t3_g2_t2

0x1339,	// (0x000733d7) list_medium_line_t3_g2_t3_ParamLimits

0x1339,	// (0x000733d7) list_medium_line_t3_g2_t3

0x0002,

0xfd2f,	// (0x00081dcd) list_medium_line_t3_g2_t_ParamLimits

0xfd2f,	// (0x00081dcd) list_medium_line_t3_g2_t

0xdbe5,	// (0x0007fc83) list_medium_line_right_icon_g1

0xde20,	// (0x0007febe) list_medium_line_right_icon_t1

0xcb64,	// (0x0007ec02) list_medium_line_t2_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_t2_g1

0x1352,	// (0x000733f0) list_medium_line_t2_t1_ParamLimits

0x1352,	// (0x000733f0) list_medium_line_t2_t1

0x136c,	// (0x0007340a) list_medium_line_t2_t2_ParamLimits

0x136c,	// (0x0007340a) list_medium_line_t2_t2

0x0001,

0xfd36,	// (0x00081dd4) list_medium_line_t2_t_ParamLimits

0xfd36,	// (0x00081dd4) list_medium_line_t2_t

0xcb64,	// (0x0007ec02) list_medium_line_t3_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_t3_g1

0x1381,	// (0x0007341f) list_medium_line_t3_t1_ParamLimits

0x1381,	// (0x0007341f) list_medium_line_t3_t1

0x1398,	// (0x00073436) list_medium_line_t3_t2_ParamLimits

0x1398,	// (0x00073436) list_medium_line_t3_t2

0x13ad,	// (0x0007344b) list_medium_line_t3_t3_ParamLimits

0x13ad,	// (0x0007344b) list_medium_line_t3_t3

0x0002,

0xfd3b,	// (0x00081dd9) list_medium_line_t3_t_ParamLimits

0xfd3b,	// (0x00081dd9) list_medium_line_t3_t

0xcb64,	// (0x0007ec02) list_medium_line_g3_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_g3_g1

0xde2e,	// (0x0007fecc) list_medium_line_g3_g2_ParamLimits

0xde2e,	// (0x0007fecc) list_medium_line_g3_g2

0xcb70,	// (0x0007ec0e) list_medium_line_g3_g3_ParamLimits

0xcb70,	// (0x0007ec0e) list_medium_line_g3_g3

0x0002,

0xfd42,	// (0x00081de0) list_medium_line_g3_g_ParamLimits

0xfd42,	// (0x00081de0) list_medium_line_g3_g

0xde3a,	// (0x0007fed8) list_medium_line_g3_t1_ParamLimits

0xde3a,	// (0x0007fed8) list_medium_line_g3_t1

0xcb64,	// (0x0007ec02) list_medium_line_t2_g3_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_t2_g3_g1

0xde2e,	// (0x0007fecc) list_medium_line_t2_g3_g2_ParamLimits

0xde2e,	// (0x0007fecc) list_medium_line_t2_g3_g2

0xcb70,	// (0x0007ec0e) list_medium_line_t2_g3_g3_ParamLimits

0xcb70,	// (0x0007ec0e) list_medium_line_t2_g3_g3

0x0002,

0xfd42,	// (0x00081de0) list_medium_line_t2_g3_g_ParamLimits

0xfd42,	// (0x00081de0) list_medium_line_t2_g3_g

0x13bf,	// (0x0007345d) list_medium_line_t2_g3_t1_ParamLimits

0x13bf,	// (0x0007345d) list_medium_line_t2_g3_t1

0x13d6,	// (0x00073474) list_medium_line_t2_g3_t2_ParamLimits

0x13d6,	// (0x00073474) list_medium_line_t2_g3_t2

0x0001,

0xfd49,	// (0x00081de7) list_medium_line_t2_g3_t_ParamLimits

0xfd49,	// (0x00081de7) list_medium_line_t2_g3_t

0xcb64,	// (0x0007ec02) list_medium_line_t3_g3_g1_ParamLimits

0xcb64,	// (0x0007ec02) list_medium_line_t3_g3_g1

0xde2e,	// (0x0007fecc) list_medium_line_t3_g3_g2_ParamLimits

0xde2e,	// (0x0007fecc) list_medium_line_t3_g3_g2

0xcb70,	// (0x0007ec0e) list_medium_line_t3_g3_g3_ParamLimits

0xcb70,	// (0x0007ec0e) list_medium_line_t3_g3_g3

0x0002,

0xfd42,	// (0x00081de0) list_medium_line_t3_g3_g_ParamLimits

0xfd42,	// (0x00081de0) list_medium_line_t3_g3_g

0x13eb,	// (0x00073489) list_medium_line_t3_g3_t1_ParamLimits

0x13eb,	// (0x00073489) list_medium_line_t3_g3_t1

0x1404,	// (0x000734a2) list_medium_line_t3_g3_t2_ParamLimits

0x1404,	// (0x000734a2) list_medium_line_t3_g3_t2

0x141a,	// (0x000734b8) list_medium_line_t3_g3_t3_ParamLimits

0x141a,	// (0x000734b8) list_medium_line_t3_g3_t3

0x0002,

0xfd4e,	// (0x00081dec) list_medium_line_t3_g3_t_ParamLimits

0xfd4e,	// (0x00081dec) list_medium_line_t3_g3_t

0xdd15,	// (0x0007fdb3) list_medium_line_right_iconx2_g1

0xdbe5,	// (0x0007fc83) list_medium_line_right_iconx2_g2

0x0001,

0xfd55,	// (0x00081df3) list_medium_line_right_iconx2_g

0xde4f,	// (0x0007feed) list_medium_line_right_iconx2_t1

0xdd15,	// (0x0007fdb3) list_medium_line_t2_right_iconx2_g1

0xdbe5,	// (0x0007fc83) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd55,	// (0x00081df3) list_medium_line_t2_right_iconx2_g

0x1434,	// (0x000734d2) list_medium_line_t2_right_iconx2_t1

0x1444,	// (0x000734e2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd5a,	// (0x00081df8) list_medium_line_t2_right_iconx2_t

0xde5d,	// (0x0007fefb) list_medium_line_x4_t4_t1

0x1452,	// (0x000734f0) list_medium_line_x4_t4_t2

0x1462,	// (0x00073500) list_medium_line_x4_t4_t3

0x1472,	// (0x00073510) list_medium_line_x4_t4_t4

0x0003,

0xfd5f,	// (0x00081dfd) list_medium_line_x4_t4_t

0x9c8d,	// (0x0007bd2b) tport_appsw_pane_ParamLimits

0x9c8d,	// (0x0007bd2b) tport_appsw_pane

0x9ca0,	// (0x0007bd3e) tport_contact_pane_ParamLimits

0x9ca0,	// (0x0007bd3e) tport_contact_pane

0x9cb3,	// (0x0007bd51) tport_listscroll_pane_ParamLimits

0x9cb3,	// (0x0007bd51) tport_listscroll_pane

0x9cc9,	// (0x0007bd67) cell_tport_appsw_pane_ParamLimits

0x9cc9,	// (0x0007bd67) cell_tport_appsw_pane

0xc8d4,	// (0x0007e972) tport_appsw_pane_g1_ParamLimits

0xc8d4,	// (0x0007e972) tport_appsw_pane_g1

0xde6b,	// (0x0007ff09) tport_contact_pane_g1

0xde74,	// (0x0007ff12) tport_contact_pane_t1

0xde82,	// (0x0007ff20) tport_contact_pane_t2

0x0001,

0xfd68,	// (0x00081e06) tport_contact_pane_t

0xde90,	// (0x0007ff2e) list_tport_pane

0xde99,	// (0x0007ff37) scroll_pane_cp_030

0x9d0f,	// (0x0007bdad) cell_tport_appsw_pane_g1

0xdeb2,	// (0x0007ff50) cell_tport_appsw_pane_t1

0xa974,	// (0x0007ca12) grid_highlight_pane_cp019

0x9d1f,	// (0x0007bdbd) list_tport_double_graphic_pane_ParamLimits

0x9d1f,	// (0x0007bdbd) list_tport_double_graphic_pane

0x188d,	// (0x0007392b) list_highlight_pane_cp023_ParamLimits

0x188d,	// (0x0007392b) list_highlight_pane_cp023

0x9d2f,	// (0x0007bdcd) list_tport_double_graphic_pane_g1_ParamLimits

0x9d2f,	// (0x0007bdcd) list_tport_double_graphic_pane_g1

0x9d3c,	// (0x0007bdda) list_tport_double_graphic_pane_t1_ParamLimits

0x9d3c,	// (0x0007bdda) list_tport_double_graphic_pane_t1

0x9d51,	// (0x0007bdef) list_tport_double_graphic_pane_t2_ParamLimits

0x9d51,	// (0x0007bdef) list_tport_double_graphic_pane_t2

0x0001,

0xfd74,	// (0x00081e12) list_tport_double_graphic_pane_t_ParamLimits

0xfd74,	// (0x00081e12) list_tport_double_graphic_pane_t

0xa974,	// (0x0007ca12) main_cale_note_pane

0x8165,	// (0x0007a203) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8165,	// (0x0007a203) cell_vitu2_function_top_wide_pane_cp01

0x9819,	// (0x0007b8b7) wait_bar_pane_cp05_ParamLimits

0xa974,	// (0x0007ca12) listscroll_cmail_pane

0xdec8,	// (0x0007ff66) list_cmail_pane

0x9d6d,	// (0x0007be0b) list_cmail_body_pane

0x9d85,	// (0x0007be23) list_single_cmail_header_caption_pane

0x9da5,	// (0x0007be43) list_single_cmail_header_detail_pane_ParamLimits

0x9da5,	// (0x0007be43) list_single_cmail_header_detail_pane

0x9dd7,	// (0x0007be75) list_single_cmail_header_caption_pane_t1

0x1482,	// (0x00073520) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1482,	// (0x00073520) list_single_cmail_header_detail_pane_g1

0xed7f,	// (0x00080e1d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xed7f,	// (0x00080e1d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd79,	// (0x00081e17) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd79,	// (0x00081e17) list_single_cmail_header_detail_pane_g

0xdef5,	// (0x0007ff93) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdef5,	// (0x0007ff93) list_single_cmail_header_detail_pane_t1

0xdf33,	// (0x0007ffd1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdf33,	// (0x0007ffd1) list_single_cmail_header_editor_pane_bg

0xd749,	// (0x0007f7e7) list_cmail_body_pane_g1

0xdf45,	// (0x0007ffe3) list_cmail_body_pane_t1

0xc911,	// (0x0007e9af) list_single_cmail_header_editor_pane_bg_g1

0x3391,	// (0x0007542f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc921,	// (0x0007e9bf) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc919,	// (0x0007e9b7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcb5c,	// (0x0007ebfa) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc941,	// (0x0007e9df) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc931,	// (0x0007e9cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc939,	// (0x0007e9d7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3371,	// (0x0007540f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9de7,	// (0x0007be85) calenote_gesture_pane_ParamLimits

0x9de7,	// (0x0007be85) calenote_gesture_pane

0x9e07,	// (0x0007bea5) calenote_window_pane_ParamLimits

0x9e07,	// (0x0007bea5) calenote_window_pane

0xdf53,	// (0x0007fff1) popup_note_window_cp01

0x9e23,	// (0x0007bec1) calenote_swipe_1_pane_ParamLimits

0x9e23,	// (0x0007bec1) calenote_swipe_1_pane

0x9bdf,	// (0x0007bc7d) calenote_swipe_2_pane_ParamLimits

0x9bdf,	// (0x0007bc7d) calenote_swipe_2_pane

0xdae4,	// (0x0007fb82) calenote_swipe_1_pane_g1_ParamLimits

0xdae4,	// (0x0007fb82) calenote_swipe_1_pane_g1

0xdaf1,	// (0x0007fb8f) calenote_swipe_1_pane_g2_ParamLimits

0xdaf1,	// (0x0007fb8f) calenote_swipe_1_pane_g2

0x0001,

0xfca8,	// (0x00081d46) calenote_swipe_1_pane_g_ParamLimits

0xfca8,	// (0x00081d46) calenote_swipe_1_pane_g

0xdf65,	// (0x00080003) calenote_swipe_1_pane_t1_ParamLimits

0xdf65,	// (0x00080003) calenote_swipe_1_pane_t1

0xdae4,	// (0x0007fb82) calenote_swipe_2_pane_g1_ParamLimits

0xdae4,	// (0x0007fb82) calenote_swipe_2_pane_g1

0xdf84,	// (0x00080022) calenote_swipe_2_pane_g2_ParamLimits

0xdf84,	// (0x00080022) calenote_swipe_2_pane_g2

0x0001,

0xfd85,	// (0x00081e23) calenote_swipe_2_pane_g_ParamLimits

0xfd85,	// (0x00081e23) calenote_swipe_2_pane_g

0xdf90,	// (0x0008002e) calenote_swipe_2_pane_t1_ParamLimits

0xdf90,	// (0x0008002e) calenote_swipe_2_pane_t1

0xa974,	// (0x0007ca12) main_mup_navstr_pane

0x6dff,	// (0x00078e9d) main_mup3_pane_t7_ParamLimits

0x6dff,	// (0x00078e9d) main_mup3_pane_t7

0xea2c,	// (0x00080aca) main_mp4_pane_g6_ParamLimits

0xea2c,	// (0x00080aca) main_mp4_pane_g6

0xebc2,	// (0x00080c60) main_image3_pane_t4_ParamLimits

0xebc2,	// (0x00080c60) main_image3_pane_t4

0x9e38,	// (0x0007bed6) popup_navstr_preview_pane_ParamLimits

0x9e38,	// (0x0007bed6) popup_navstr_preview_pane

0x9e48,	// (0x0007bee6) scroll_navstr_pane_ParamLimits

0x9e48,	// (0x0007bee6) scroll_navstr_pane

0xa974,	// (0x0007ca12) bg_popup_preview_window_pane_cp04

0xdfb7,	// (0x00080055) popup_navstr_preview_pane_t1

0x9e5c,	// (0x0007befa) scroll_navstr_pane_g1_ParamLimits

0x9e5c,	// (0x0007befa) scroll_navstr_pane_g1

0x9e70,	// (0x0007bf0e) scroll_navstr_pane_t1_ParamLimits

0x9e70,	// (0x0007bf0e) scroll_navstr_pane_t1

0xdf5c,	// (0x0007fffa) bg_button_pane_cp014

0xdf5c,	// (0x0007fffa) bg_button_pane_cp030

0xda85,	// (0x0007fb23) list_double_fisheye_pane_g4_ParamLimits

0xda85,	// (0x0007fb23) list_double_fisheye_pane_g4

0xda91,	// (0x0007fb2f) list_double_fisheye_pane_g5_ParamLimits

0xda91,	// (0x0007fb2f) list_double_fisheye_pane_g5

0xded0,	// (0x0007ff6e) sp_fs_scroll_pane_cp03

0xdc27,	// (0x0007fcc5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc33,	// (0x0007fcd1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc5,	// (0x00081d63) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc3f,	// (0x0007fcdd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9d63,	// (0x0007be01) sp_fs_scroll_pane_cp02

0x25e2,	// (0x00074680) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x25e2,	// (0x00074680) popup_sp_fs_calendar_preview_list_single_pane

0xa974,	// (0x0007ca12) main_cam6_pano_pane

0x188d,	// (0x0007392b) main_mup3_pane_ParamLimits

0xa974,	// (0x0007ca12) main_phacti_pane

0x96ea,	// (0x0007b788) bg_button_pane_cp11

0x9704,	// (0x0007b7a2) main_mobtv_info_pane_g2_ParamLimits

0x9704,	// (0x0007b7a2) main_mobtv_info_pane_g2

0x0001,

0xfc25,	// (0x00081cc3) main_mobtv_info_pane_g_ParamLimits

0xfc25,	// (0x00081cc3) main_mobtv_info_pane_g

0x98df,	// (0x0007b97d) sc_clock_pane_t5_ParamLimits

0x98df,	// (0x0007b97d) sc_clock_pane_t5

0x9969,	// (0x0007ba07) main_radioblah_pane_g1_ParamLimits

0xd9d9,	// (0x0007fa77) main_radioblah_pane_t3_ParamLimits

0xd9d9,	// (0x0007fa77) main_radioblah_pane_t3

0xd9f1,	// (0x0007fa8f) main_radioblah_pane_t4_ParamLimits

0xd9f1,	// (0x0007fa8f) main_radioblah_pane_t4

0x9991,	// (0x0007ba2f) main_radioblah_text_pane_ParamLimits

0x9991,	// (0x0007ba2f) main_radioblah_text_pane

0x99a3,	// (0x0007ba41) main_radioblah_info_pane_g1_ParamLimits

0x9a3c,	// (0x0007bada) main_radioblah_info_pane_t4_ParamLimits

0x9a3c,	// (0x0007bada) main_radioblah_info_pane_t4

0x188d,	// (0x0007392b) main_sp_fs_calendar_pane

0x9e87,	// (0x0007bf25) main_phacti_pane_g1

0x9e8f,	// (0x0007bf2d) phacti_note_pane_ParamLimits

0x9e8f,	// (0x0007bf2d) phacti_note_pane

0xdfce,	// (0x0008006c) phacti_term_pane_ParamLimits

0xdfce,	// (0x0008006c) phacti_term_pane

0xdfe3,	// (0x00080081) phacti_note_pane_t1_ParamLimits

0xdfe3,	// (0x00080081) phacti_note_pane_t1

0xdffa,	// (0x00080098) phacti_term_pane_g1

0xe002,	// (0x000800a0) phacti_term_pane_t1_ParamLimits

0xe002,	// (0x000800a0) phacti_term_pane_t1

0xe02c,	// (0x000800ca) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe034,	// (0x000800d2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd8f,	// (0x00081e2d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe03c,	// (0x000800da) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe03c,	// (0x000800da) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe052,	// (0x000800f0) aid_popup_sp_fs_bg_corner_pane

0xc1ee,	// (0x0007e28c) popup_sp_fs_calendar_preview_bg_pane_g1

0xa974,	// (0x0007ca12) popup_sp_fs_calendar_preview_bg_pane

0xe05a,	// (0x000800f8) popup_sp_fs_calendar_preview_list_pane

0x188d,	// (0x0007392b) bg_main_sp_fs_cale_pane_ParamLimits

0x188d,	// (0x0007392b) bg_main_sp_fs_cale_pane

0xe06b,	// (0x00080109) listscroll_cale_mrui_pane_ParamLimits

0xe06b,	// (0x00080109) listscroll_cale_mrui_pane

0xe07f,	// (0x0008011d) listscroll_sp_fs_schedule_track_pane

0xe088,	// (0x00080126) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe088,	// (0x00080126) main_sp_fs_ctrlbar_pane_cp01

0xe099,	// (0x00080137) main_sp_fs_ribbon_pane

0xe0a1,	// (0x0008013f) popup_sp_fs_cale_preview_window

0x9ee6,	// (0x0007bf84) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9ee6,	// (0x0007bf84) list_single_sp_fs_schedule_track_pane

0x188d,	// (0x0007392b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x188d,	// (0x0007392b) bg_sp_fs_highlight_list_pane_cp03

0x9efa,	// (0x0007bf98) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9efa,	// (0x0007bf98) list_single_sp_fs_schedule_track_pane_g1

0x9f06,	// (0x0007bfa4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9f06,	// (0x0007bfa4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd94,	// (0x00081e32) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd94,	// (0x00081e32) list_single_sp_fs_schedule_track_pane_g

0x9f12,	// (0x0007bfb0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9f12,	// (0x0007bfb0) list_single_sp_fs_schedule_track_pane_t1

0x9f34,	// (0x0007bfd2) sp_fs_schedule_track_pane_ParamLimits

0x9f34,	// (0x0007bfd2) sp_fs_schedule_track_pane

0xe0b3,	// (0x00080151) sp_fs_schedule_track_pane_g1

0xe0bb,	// (0x00080159) sp_fs_schedule_track_pane_g2

0xe0c3,	// (0x00080161) sp_fs_schedule_track_pane_g3

0xe0cb,	// (0x00080169) sp_fs_schedule_track_pane_g4

0xe0d3,	// (0x00080171) sp_fs_schedule_track_pane_g5

0x0004,

0xfd99,	// (0x00081e37) sp_fs_schedule_track_pane_g

0xc911,	// (0x0007e9af) bg_sp_fs_schedule_viewer_highlight_g1

0x3391,	// (0x0007542f) bg_sp_fs_schedule_viewer_highlight_g2

0xc919,	// (0x0007e9b7) bg_sp_fs_schedule_viewer_highlight_g3

0xc921,	// (0x0007e9bf) bg_sp_fs_schedule_viewer_highlight_g4

0xcb5c,	// (0x0007ebfa) bg_sp_fs_schedule_viewer_highlight_g5

0xc931,	// (0x0007e9cf) bg_sp_fs_schedule_viewer_highlight_g6

0xc939,	// (0x0007e9d7) bg_sp_fs_schedule_viewer_highlight_g7

0xc941,	// (0x0007e9df) bg_sp_fs_schedule_viewer_highlight_g8

0x3371,	// (0x0007540f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda4,	// (0x00081e42) bg_sp_fs_schedule_viewer_highlight_g

0xa974,	// (0x0007ca12) bg_main_sp_fs_ribbon_pane

0x9f49,	// (0x0007bfe7) main_sp_fs_ribbon_pane_g1

0xe0db,	// (0x00080179) main_sp_fs_ribbon_pane_t1

0x9f52,	// (0x0007bff0) main_sp_fs_ribbon_pane_t2

0xe0ea,	// (0x00080188) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb7,	// (0x00081e55) main_sp_fs_ribbon_pane_t

0xe0f9,	// (0x00080197) main_sp_fs_ribbon_scheduler_pane

0xe101,	// (0x0008019f) bg_main_sp_fs_ribbon_pane_g1

0xe10a,	// (0x000801a8) bg_main_sp_fs_ribbon_pane_g2

0xe113,	// (0x000801b1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdbe,	// (0x00081e5c) bg_main_sp_fs_ribbon_pane_g

0xe11b,	// (0x000801b9) main_sp_fs_ribbon_scheduler_pane_g1

0xe124,	// (0x000801c2) main_sp_fs_ribbon_scheduler_pane_g2

0xe12d,	// (0x000801cb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdc5,	// (0x00081e63) main_sp_fs_ribbon_scheduler_pane_g

0xe136,	// (0x000801d4) list_cale_mrui_pane

0x9f61,	// (0x0007bfff) sp_fs_scroll_pane_cp07_ParamLimits

0x9f61,	// (0x0007bfff) sp_fs_scroll_pane_cp07

0x9f77,	// (0x0007c015) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9f77,	// (0x0007c015) bg_sp_fs_schedule_viewer_highlight

0xe13f,	// (0x000801dd) list_single_sp_fs_schedule_track_pane_cp01

0xe147,	// (0x000801e5) list_sp_fs_schedule_track_pane

0xe14f,	// (0x000801ed) sp_fs_scroll_pane_cp06_ParamLimits

0xe14f,	// (0x000801ed) sp_fs_scroll_pane_cp06

0xc1ee,	// (0x0007e28c) bgmain_sp_fs_calendar_pane_g1

0x14c0,	// (0x0007355e) list_single_cale_mrui_pane_ParamLimits

0x14c0,	// (0x0007355e) list_single_cale_mrui_pane

0xe161,	// (0x000801ff) list_single_cale_mrui_row_pane_ParamLimits

0xe161,	// (0x000801ff) list_single_cale_mrui_row_pane

0xe16e,	// (0x0008020c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe16e,	// (0x0008020c) list_single_cale_mrui_row_pane_g1

0xe1a6,	// (0x00080244) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe1a6,	// (0x00080244) list_single_cale_mrui_row_pane_t1

0x14e7,	// (0x00073585) list_single_cale_mrui_row_pane_t2_ParamLimits

0x14e7,	// (0x00073585) list_single_cale_mrui_row_pane_t2

0xe1b8,	// (0x00080256) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe1b8,	// (0x00080256) list_single_cale_mrui_row_pane_t3

0xe1e7,	// (0x00080285) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe1e7,	// (0x00080285) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd1,	// (0x00081e6f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd1,	// (0x00081e6f) list_single_cale_mrui_row_pane_t

0x154d,	// (0x000735eb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x154d,	// (0x000735eb) list_single_cmail_header_editor_pane_bg_cp01

0x1571,	// (0x0007360f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1571,	// (0x0007360f) list_single_cmail_header_editor_pane_bg_cp02

0x9f89,	// (0x0007c027) main_radioblah_text_pane_t1_ParamLimits

0x9f89,	// (0x0007c027) main_radioblah_text_pane_t1

0xe216,	// (0x000802b4) cam6_indi_pane_cp01

0xe21e,	// (0x000802bc) cam6_mode_pane_cp01

0xe226,	// (0x000802c4) cam6_pano_pane

0xe22f,	// (0x000802cd) cam6_zoom_pane_cp01

0xe239,	// (0x000802d7) cam6_pano_image_pane

0xe242,	// (0x000802e0) cam6_pano_pane_g1

0xd749,	// (0x0007f7e7) cam6_pano_pane_g2

0xe24b,	// (0x000802e9) cam6_pano_pane_g3

0xe254,	// (0x000802f2) cam6_pano_pane_g4

0xedf1,	// (0x00080e8f) cam6_pano_pane_g5

0xe25d,	// (0x000802fb) cam6_pano_pane_g6

0xe265,	// (0x00080303) cam6_pano_pane_g7

0xe26d,	// (0x0008030b) cam6_pano_pane_g8

0xe276,	// (0x00080314) cam6_pano_pane_g9

0x0008,

0xfdda,	// (0x00081e78) cam6_pano_pane_g

0xa974,	// (0x0007ca12) main_browser_tag_pane

0xdfaf,	// (0x0008004d) grid_navstr_albumart_pane

0xe281,	// (0x0008031f) cell_navstr_albumart_pane_ParamLimits

0xe281,	// (0x0008031f) cell_navstr_albumart_pane

0xe29d,	// (0x0008033b) cell_navstr_albumart_pane_g1

0xbb3f,	// (0x0007dbdd) cell_navstr_albumart_pane_g2

0xbb4f,	// (0x0007dbed) cell_navstr_albumart_pane_g3

0xbb47,	// (0x0007dbe5) cell_navstr_albumart_pane_g4

0x0003,

0xfded,	// (0x00081e8b) cell_navstr_albumart_pane_g

0x9fa4,	// (0x0007c042) bt_list_pane_ParamLimits

0x9fa4,	// (0x0007c042) bt_list_pane

0x9fba,	// (0x0007c058) bt_list_pane_t1

0x9fc9,	// (0x0007c067) bt_list_pane_t2

0x0001,

0xfdf6,	// (0x00081e94) bt_list_pane_t

0xa974,	// (0x0007ca12) main_cale_prevew_pane

0x9fd8,	// (0x0007c076) popup_cale_preview_window_ParamLimits

0x9fd8,	// (0x0007c076) popup_cale_preview_window

0x188d,	// (0x0007392b) bg_popup_preview_window_pane_cp05_ParamLimits

0x188d,	// (0x0007392b) bg_popup_preview_window_pane_cp05

0xe2a5,	// (0x00080343) list_cale_preview_pane_ParamLimits

0xe2a5,	// (0x00080343) list_cale_preview_pane

0x9ff3,	// (0x0007c091) list_double_cale_preview_pane_ParamLimits

0x9ff3,	// (0x0007c091) list_double_cale_preview_pane

0xa007,	// (0x0007c0a5) list_single_cale_preview_pane_ParamLimits

0xa007,	// (0x0007c0a5) list_single_cale_preview_pane

0xa01f,	// (0x0007c0bd) list_single_cale_preview_pane_g1

0xa027,	// (0x0007c0c5) list_single_cale_preview_pane_t1_ParamLimits

0xa027,	// (0x0007c0c5) list_single_cale_preview_pane_t1

0xa03c,	// (0x0007c0da) list_double_cale_preview_pane_g1

0xa044,	// (0x0007c0e2) list_double_cale_preview_pane_t1_ParamLimits

0xa044,	// (0x0007c0e2) list_double_cale_preview_pane_t1

0xa059,	// (0x0007c0f7) list_double_cale_preview_pane_t2_ParamLimits

0xa059,	// (0x0007c0f7) list_double_cale_preview_pane_t2

0x0001,

0xfdfb,	// (0x00081e99) list_double_cale_preview_pane_t_ParamLimits

0xfdfb,	// (0x00081e99) list_double_cale_preview_pane_t

0xa974,	// (0x0007ca12) main_ezdial_pane

0x188d,	// (0x0007392b) main_sp_fs_email_pane_ParamLimits

0x9bf9,	// (0x0007bc97) cmail_ddmenu_btn01_pane_ParamLimits

0x9bf9,	// (0x0007bc97) cmail_ddmenu_btn01_pane

0x9c0c,	// (0x0007bcaa) cmail_ddmenu_btn02_pane_ParamLimits

0x9c0c,	// (0x0007bcaa) cmail_ddmenu_btn02_pane

0x9c2f,	// (0x0007bccd) cmail_ddmenu_btn03_pane_ParamLimits

0x9c2f,	// (0x0007bccd) cmail_ddmenu_btn03_pane

0x10fa,	// (0x00073198) main_sp_fs_ctrlbar_pane_ParamLimits

0x111e,	// (0x000731bc) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9d6d,	// (0x0007be0b) list_cmail_body_pane_ParamLimits

0xdedf,	// (0x0007ff7d) bg_button_pane_cp12

0xdee8,	// (0x0007ff86) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdee8,	// (0x0007ff86) list_single_cmail_header_detail_pane_g3

0x149a,	// (0x00073538) list_single_cmail_header_detail_pane_t2_ParamLimits

0x149a,	// (0x00073538) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd80,	// (0x00081e1e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd80,	// (0x00081e1e) list_single_cmail_header_detail_pane_t

0xe017,	// (0x000800b5) phacti_term_pane_t2_ParamLimits

0xe017,	// (0x000800b5) phacti_term_pane_t2

0x0001,

0xfd8a,	// (0x00081e28) phacti_term_pane_t_ParamLimits

0xfd8a,	// (0x00081e28) phacti_term_pane_t

0xe2b1,	// (0x0008034f) aid_size_list_single_double

0xa071,	// (0x0007c10f) popup_ezdial_listscroll_window

0xa08d,	// (0x0007c12b) popup_number_entry_window_cp01

0x47c4,	// (0x00076862) bg_popup_call_pane_cp09

0xe2bd,	// (0x0008035b) ezdial_list_pane

0xe2c5,	// (0x00080363) scroll_pane_cp23

0xbd26,	// (0x0007ddc4) bg_button_pane_cp028_ParamLimits

0xbd26,	// (0x0007ddc4) bg_button_pane_cp028

0xa09b,	// (0x0007c139) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa09b,	// (0x0007c139) cmail_ddmenu_btn01_pane_g1

0xa0a7,	// (0x0007c145) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa0a7,	// (0x0007c145) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe00,	// (0x00081e9e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe00,	// (0x00081e9e) cmail_ddmenu_btn01_pane_g

0xe2cd,	// (0x0008036b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe2cd,	// (0x0008036b) cmail_ddmenu_btn01_pane_t1

0xbd26,	// (0x0007ddc4) bg_button_pane_cp029_ParamLimits

0xbd26,	// (0x0007ddc4) bg_button_pane_cp029

0xa0b3,	// (0x0007c151) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa0b3,	// (0x0007c151) cmail_ddmenu_btn02_pane_g1

0xa0cb,	// (0x0007c169) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa0cb,	// (0x0007c169) cmail_ddmenu_btn02_pane_t1

0x188d,	// (0x0007392b) bg_button_pane_cp031_ParamLimits

0x188d,	// (0x0007392b) bg_button_pane_cp031

0xa0b3,	// (0x0007c151) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa0b3,	// (0x0007c151) cmail_ddmenu_btn03_pane_g1

0xa0cb,	// (0x0007c169) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa0cb,	// (0x0007c169) cmail_ddmenu_btn03_pane_t1

0x799d,	// (0x00079a3b) cell_dialer2_keypad_pane_t1_ParamLimits

0x79b7,	// (0x00079a55) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x79b7,	// (0x00079a55) cell_dialer2_keypad_pane_t1_copy1

0x9584,	// (0x0007b622) ncimui_group_button_pane

0x188d,	// (0x0007392b) main_sp_fs_calendar_pane_ParamLimits

0x9d85,	// (0x0007be23) list_single_cmail_header_caption_pane_ParamLimits

0xe062,	// (0x00080100) aid_recal_txt_sm_pane

0xa974,	// (0x0007ca12) mian_recal_day_pane

0xe0a1,	// (0x0008013f) popup_sp_fs_cale_preview_window_ParamLimits

0xa974,	// (0x0007ca12) list_recal_day_pane

0xe2fb,	// (0x00080399) list_single_recal_day_pane_ParamLimits

0xe2fb,	// (0x00080399) list_single_recal_day_pane

0xe30d,	// (0x000803ab) list_single_recal_day_pane_g1_ParamLimits

0xe30d,	// (0x000803ab) list_single_recal_day_pane_g1

0xe319,	// (0x000803b7) list_single_recal_day_pane_g2_ParamLimits

0xe319,	// (0x000803b7) list_single_recal_day_pane_g2

0xe325,	// (0x000803c3) list_single_recal_day_pane_g3_ParamLimits

0xe325,	// (0x000803c3) list_single_recal_day_pane_g3

0xa0ef,	// (0x0007c18d) list_single_recal_day_pane_g4_ParamLimits

0xa0ef,	// (0x0007c18d) list_single_recal_day_pane_g4

0xe331,	// (0x000803cf) list_single_recal_day_pane_g5_ParamLimits

0xe331,	// (0x000803cf) list_single_recal_day_pane_g5

0xe33d,	// (0x000803db) list_single_recal_day_pane_g6_ParamLimits

0xe33d,	// (0x000803db) list_single_recal_day_pane_g6

0x0005,

0xfe0f,	// (0x00081ead) list_single_recal_day_pane_g_ParamLimits

0xfe0f,	// (0x00081ead) list_single_recal_day_pane_g

0xe349,	// (0x000803e7) list_single_recal_day_pane_t1

0xe357,	// (0x000803f5) list_single_recal_day_pane_t2

0x0001,

0xfe1c,	// (0x00081eba) list_single_recal_day_pane_t

0xa0fd,	// (0x0007c19b) ncimui_query_button_pane_ParamLimits

0xa0fd,	// (0x0007c19b) ncimui_query_button_pane

0xa10d,	// (0x0007c1ab) ncimui_query_button_pane_t1_ParamLimits

0xa10d,	// (0x0007c1ab) ncimui_query_button_pane_t1

0xe365,	// (0x00080403) ncimui_query_button_pane_t2_ParamLimits

0xe365,	// (0x00080403) ncimui_query_button_pane_t2

0x0001,

0xfe21,	// (0x00081ebf) ncimui_query_button_pane_t_ParamLimits

0xfe21,	// (0x00081ebf) ncimui_query_button_pane_t

0xa120,	// (0x0007c1be) query_button_pane_ParamLimits

0xa120,	// (0x0007c1be) query_button_pane

0xa974,	// (0x0007ca12) bg_button_pane_cp0028

0xe378,	// (0x00080416) query_button_pane_t1

0x5a55,	// (0x00077af3) main_tport_pane_ParamLimits

0x9c53,	// (0x0007bcf1) bg_popup_window_pane_cp01_ParamLimits

0x9c53,	// (0x0007bcf1) bg_popup_window_pane_cp01

0x9c69,	// (0x0007bd07) heading_pane_cp08_ParamLimits

0x9c69,	// (0x0007bd07) heading_pane_cp08

0x9c7a,	// (0x0007bd18) heading_pane_cp07_ParamLimits

0x9c7a,	// (0x0007bd18) heading_pane_cp07

0xdeaa,	// (0x0007ff48) cell_tport_appsw_pane_g2

0x0002,

0xfd6d,	// (0x00081e0b) cell_tport_appsw_pane_g

0x0db5,	// (0x00072e53) input_candi_list_open_g1

0x3e2a,	// (0x00075ec8) list_cale_time_pane_g6_ParamLimits

0x3e2a,	// (0x00075ec8) list_cale_time_pane_g6

0x6843,	// (0x000788e1) aid_size_touch_calib_1_ParamLimits

0x6843,	// (0x000788e1) aid_size_touch_calib_1

0x684f,	// (0x000788ed) aid_size_touch_calib_2_ParamLimits

0x684f,	// (0x000788ed) aid_size_touch_calib_2

0x6865,	// (0x00078903) aid_size_touch_calib_3_ParamLimits

0x6865,	// (0x00078903) aid_size_touch_calib_3

0x6883,	// (0x00078921) aid_size_touch_calib_4_ParamLimits

0x6883,	// (0x00078921) aid_size_touch_calib_4

0x6899,	// (0x00078937) main_touch_calib_button_group_pane_ParamLimits

0x6899,	// (0x00078937) main_touch_calib_button_group_pane

0x68b0,	// (0x0007894e) main_touch_calib_pane_g1_ParamLimits

0x68bc,	// (0x0007895a) main_touch_calib_pane_g2_ParamLimits

0x68c8,	// (0x00078966) main_touch_calib_pane_g3_ParamLimits

0x68d4,	// (0x00078972) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00081822) main_touch_calib_pane_g_ParamLimits

0x68e0,	// (0x0007897e) main_touch_calib_pane_t1_ParamLimits

0x68fa,	// (0x00078998) main_touch_calib_pane_t2_ParamLimits

0x6914,	// (0x000789b2) main_touch_calib_pane_t3_ParamLimits

0x6928,	// (0x000789c6) main_touch_calib_pane_t4_ParamLimits

0x693c,	// (0x000789da) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0008182b) main_touch_calib_pane_t_ParamLimits

0xc568,	// (0x0007e606) list_single_fp_cale_pane_g3_ParamLimits

0xc568,	// (0x0007e606) list_single_fp_cale_pane_g3

0x188d,	// (0x0007392b) bg_button_pane_cp012_ParamLimits

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp03_ParamLimits

0x8962,	// (0x0007aa00) cell_vitu2_function_top_pane_g1_ParamLimits

0x188d,	// (0x0007392b) bg_vkb2_func_pane_cp04_ParamLimits

0x9538,	// (0x0007b5d6) main_ncimui_button_group_pane_ParamLimits

0x9538,	// (0x0007b5d6) main_ncimui_button_group_pane

0x9572,	// (0x0007b610) main_ncimui_pane_t3_ParamLimits

0x9572,	// (0x0007b610) main_ncimui_pane_t3

0xdfc5,	// (0x00080063) phacti_button_group_pane

0xe2b1,	// (0x0008034f) aid_size_list_single_double_ParamLimits

0xa071,	// (0x0007c10f) popup_ezdial_listscroll_window_ParamLimits

0xa08d,	// (0x0007c12b) popup_number_entry_window_cp01_ParamLimits

0xa133,	// (0x0007c1d1) phacti_button_pane_ParamLimits

0xa133,	// (0x0007c1d1) phacti_button_pane

0xa974,	// (0x0007ca12) bg_button_pane_cp14

0xe386,	// (0x00080424) phacti_button_pane_t1

0xa144,	// (0x0007c1e2) main_touch_calib_button_pane_ParamLimits

0xa144,	// (0x0007c1e2) main_touch_calib_button_pane

0x232b,	// (0x000743c9) bg_button_pane_cp18_ParamLimits

0x232b,	// (0x000743c9) bg_button_pane_cp18

0xe394,	// (0x00080432) main_touch_calib_button_pane_t1_ParamLimits

0xe394,	// (0x00080432) main_touch_calib_button_pane_t1

0xe3aa,	// (0x00080448) main_touch_calib_button_pane_t2_ParamLimits

0xe3aa,	// (0x00080448) main_touch_calib_button_pane_t2

0x0001,

0xfe26,	// (0x00081ec4) main_touch_calib_button_pane_t_ParamLimits

0xfe26,	// (0x00081ec4) main_touch_calib_button_pane_t

0xa974,	// (0x0007ca12) cell_ncimui_button_pane

0xa974,	// (0x0007ca12) bg_button_pane_cp032

0xe3c8,	// (0x00080466) cell_ncimui_button_pane_t1

0xeba0,	// (0x00080c3e) image3_infobar_pane_ParamLimits

0xeba0,	// (0x00080c3e) image3_infobar_pane

0x990b,	// (0x0007b9a9) fs_bigclock_status_pane_ParamLimits

0x990b,	// (0x0007b9a9) fs_bigclock_status_pane

0x9918,	// (0x0007b9b6) main_fs_bigclock_clock_pane_ParamLimits

0x9918,	// (0x0007b9b6) main_fs_bigclock_clock_pane

0x992b,	// (0x0007b9c9) main_fs_bigclock_indi_pane_ParamLimits

0x992b,	// (0x0007b9c9) main_fs_bigclock_indi_pane

0x9946,	// (0x0007b9e4) main_fs_bigclock_swipe_pane_ParamLimits

0x9946,	// (0x0007b9e4) main_fs_bigclock_swipe_pane

0xa974,	// (0x0007ca12) main_fs_clock_dumped_data

0xd856,	// (0x0007f8f4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd856,	// (0x0007f8f4) list_single_fs_bigclock_indicator_pane_g1

0xd876,	// (0x0007f914) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd876,	// (0x0007f914) list_single_fs_bigclock_indicator_pane_g2

0xd890,	// (0x0007f92e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd890,	// (0x0007f92e) list_single_fs_bigclock_indicator_pane_g3

0xd8ac,	// (0x0007f94a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd8ac,	// (0x0007f94a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc59,	// (0x00081cf7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc59,	// (0x00081cf7) list_single_fs_bigclock_indicator_pane_g

0xd8d2,	// (0x0007f970) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd8d2,	// (0x0007f970) list_single_fs_bigclock_indicator_pane_t1

0xd8fa,	// (0x0007f998) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd8fa,	// (0x0007f998) list_single_fs_bigclock_indicator_pane_t2

0xd922,	// (0x0007f9c0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd922,	// (0x0007f9c0) list_single_fs_bigclock_indicator_pane_t3

0xd94c,	// (0x0007f9ea) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd94c,	// (0x0007f9ea) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc64,	// (0x00081d02) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc64,	// (0x00081d02) list_single_fs_bigclock_indicator_pane_t

0xe3d6,	// (0x00080474) image3_infobar_fav_pane_ParamLimits

0xe3d6,	// (0x00080474) image3_infobar_fav_pane

0xe3e6,	// (0x00080484) image3_infobar_loc_pane_ParamLimits

0xe3e6,	// (0x00080484) image3_infobar_loc_pane

0xe3fc,	// (0x0008049a) image3_infobar_time_pane_ParamLimits

0xe3fc,	// (0x0008049a) image3_infobar_time_pane

0xc1ee,	// (0x0007e28c) image3_infobar_time_pane_g1

0xe40c,	// (0x000804aa) image3_infobar_time_pane_t1

0xc1ee,	// (0x0007e28c) image3_infobar_loc_pane_g1

0xe41a,	// (0x000804b8) image3_infobar_loc_pane_g2

0x0001,

0xfe2b,	// (0x00081ec9) image3_infobar_loc_pane_g

0xe422,	// (0x000804c0) image3_infobar_loc_pane_t1

0xc1ee,	// (0x0007e28c) image3_infobar_fav_pane_g1

0xe430,	// (0x000804ce) image3_infobar_fav_pane_g2

0x0001,

0xfe30,	// (0x00081ece) image3_infobar_fav_pane_g

0xe438,	// (0x000804d6) fs_bigclock_status_battery_pane

0xe441,	// (0x000804df) fs_bigclock_status_signal_pane

0xe44a,	// (0x000804e8) fs_bigclock_status_title_pane

0xe453,	// (0x000804f1) fs_bigclock_status_signal_pane_g1

0xe45c,	// (0x000804fa) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe35,	// (0x00081ed3) fs_bigclock_status_signal_pane_g

0xe464,	// (0x00080502) fs_bigclock_status_battery_pane_g1

0xe46d,	// (0x0008050b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe3a,	// (0x00081ed8) fs_bigclock_status_battery_pane_g

0xe475,	// (0x00080513) fs_bigclock_status_title_pane_t1

0xc1ee,	// (0x0007e28c) main_fs_bigclock_clock_pane_g1

0xe483,	// (0x00080521) main_fs_bigclock_clock_pane_g2

0xe483,	// (0x00080521) main_fs_bigclock_clock_pane_g3

0xe483,	// (0x00080521) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe3f,	// (0x00081edd) main_fs_bigclock_clock_pane_g

0xe48f,	// (0x0008052d) main_fs_bigclock_clock_pane_t1

0xe49d,	// (0x0008053b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe48,	// (0x00081ee6) main_fs_bigclock_clock_pane_t

0xe4ac,	// (0x0008054a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe4ac,	// (0x0008054a) list_single_fs_bigclock_indicator_pane

0xa159,	// (0x0007c1f7) list_single_fs_bigclock_pane_ParamLimits

0xa159,	// (0x0007c1f7) list_single_fs_bigclock_pane

0xe4c6,	// (0x00080564) main_fs_bigclock_indicator_pane_t1

0xe4d5,	// (0x00080573) list_single_fs_bigclock_pane_g1

0xe4dd,	// (0x0008057b) list_single_fs_bigclock_pane_t1

0xc1ee,	// (0x0007e28c) main_fs_bigclock_swipe_pane_g1

0xe51b,	// (0x000805b9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe59,	// (0x00081ef7) main_fs_bigclock_swipe_pane_g

0xe523,	// (0x000805c1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe523,	// (0x000805c1) main_fs_bigclock_swipe_pane_t1

0x4117,	// (0x000761b5) call_type_pane_ParamLimits

0xa974,	// (0x0007ca12) main_btmg_pane

0xe19a,	// (0x00080238) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe19a,	// (0x00080238) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdcc,	// (0x00081e6a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdcc,	// (0x00081e6a) list_single_cale_mrui_row_pane_g

0xe2eb,	// (0x00080389) list_recal_vselct_arw_lo_pane

0xe2f3,	// (0x00080391) list_recal_vselct_arw_up_pane

0xceb3,	// (0x0007ef51) list_recal_vselct_pane

0xe540,	// (0x000805de) btmg_button_pane

0xa1bf,	// (0x0007c25d) main_btmg_pane_g1

0xa974,	// (0x0007ca12) bg_button_pane_cp044

0xe54a,	// (0x000805e8) btmg_button_pane_t1

0xbd1e,	// (0x0007ddbc) aid_listscroll_gen

0x188d,	// (0x0007392b) main_cntbar_detail_pane

0xdec0,	// (0x0007ff5e) list_cmail_folder_pane

0xded0,	// (0x0007ff6e) sp_fs_scroll_pane_cp03_ParamLimits

0x158d,	// (0x0007362b) list_single_fs_dyc_pane_cp01_ParamLimits

0x158d,	// (0x0007362b) list_single_fs_dyc_pane_cp01

0xe558,	// (0x000805f6) aid_size_cmail_indent

0xe561,	// (0x000805ff) list_single_dyc_row_pane_cp01

0xa1f9,	// (0x0007c297) cntbar_detail_list_pane_ParamLimits

0xa1f9,	// (0x0007c297) cntbar_detail_list_pane

0xa24b,	// (0x0007c2e9) main_cntbar_detail_cont_pane_ParamLimits

0xa24b,	// (0x0007c2e9) main_cntbar_detail_cont_pane

0x3ffd,	// (0x0007609b) scroll_pane_cp032_ParamLimits

0x3ffd,	// (0x0007609b) scroll_pane_cp032

0xa25f,	// (0x0007c2fd) cntbar_detail_list_event_pane_ParamLimits

0xa25f,	// (0x0007c2fd) cntbar_detail_list_event_pane

0xa20b,	// (0x0007c2a9) cntbar_detail_list_shct_pane

0x33e9,	// (0x00075487) aid_list_gen

0xe56a,	// (0x00080608) aid_scroll

0xe573,	// (0x00080611) aid_size_touch_scroll_bar

0xe57c,	// (0x0008061a) aid_list_double

0xe585,	// (0x00080623) aid_list_single

0xa26f,	// (0x0007c30d) aid_list_single_lg

0xe58e,	// (0x0008062c) aid_list_z_g_a_sm

0xed8b,	// (0x00080e29) aid_list_z_g_d

0xe596,	// (0x00080634) aid_txt_z_prm

0xe5a4,	// (0x00080642) aid_txt_z_prm_cp01

0xe5b2,	// (0x00080650) aid_txt_z_sec

0xa278,	// (0x0007c316) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa278,	// (0x0007c316) main_cntbar_detail_cont_pane_g1

0xa28c,	// (0x0007c32a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa28c,	// (0x0007c32a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe5e,	// (0x00081efc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe5e,	// (0x00081efc) main_cntbar_detail_cont_pane_g

0xe5c0,	// (0x0008065e) main_cntbar_detail_cont_pane_t1

0xe5ce,	// (0x0008066c) main_cntbar_detail_cont_pane_t2

0xe5dc,	// (0x0008067a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe63,	// (0x00081f01) main_cntbar_detail_cont_pane_t

0xa29c,	// (0x0007c33a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa29c,	// (0x0007c33a) cell_cntbar_detail_list_shct_pane

0xe5ea,	// (0x00080688) cntbar_detail_list_shct_pane_g1

0xe5f3,	// (0x00080691) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe6a,	// (0x00081f08) cntbar_detail_list_shct_pane_g

0xa2ae,	// (0x0007c34c) cntbar_detail_list_event_pane_g1_ParamLimits

0xa2ae,	// (0x0007c34c) cntbar_detail_list_event_pane_g1

0xa2ba,	// (0x0007c358) cntbar_detail_list_event_pane_g2_ParamLimits

0xa2ba,	// (0x0007c358) cntbar_detail_list_event_pane_g2

0x0005,

0xfe6f,	// (0x00081f0d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe6f,	// (0x00081f0d) cntbar_detail_list_event_pane_g

0xa328,	// (0x0007c3c6) cntbar_detail_list_event_pane_t1_ParamLimits

0xa328,	// (0x0007c3c6) cntbar_detail_list_event_pane_t1

0xa33d,	// (0x0007c3db) cntbar_detail_list_event_pane_t2_ParamLimits

0xa33d,	// (0x0007c3db) cntbar_detail_list_event_pane_t2

0x0002,

0xfe7c,	// (0x00081f1a) cntbar_detail_list_event_pane_t_ParamLimits

0xfe7c,	// (0x00081f1a) cntbar_detail_list_event_pane_t

0xc1ee,	// (0x0007e28c) cell_cntbar_detail_list_shct_pane_g1

0x4742,	// (0x000767e0) navi_pane_mv_g3

0x188d,	// (0x0007392b) main_cntbar_detail_pane_ParamLimits

0xa974,	// (0x0007ca12) main_notif_wgt_pane

0xe9e2,	// (0x00080a80) aid_tch_main_mp4_pane_g4

0xeb96,	// (0x00080c34) popup_slider_window_cp02

0xe2e2,	// (0x00080380) list_recal_day_event_pane

0xa1c9,	// (0x0007c267) cntbar_detail_btn_pane_ParamLimits

0xa1c9,	// (0x0007c267) cntbar_detail_btn_pane

0xa1e1,	// (0x0007c27f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa1e1,	// (0x0007c27f) cntbar_detail_btn_pane_cp01

0xa20b,	// (0x0007c2a9) cntbar_detail_list_shct_pane_ParamLimits

0xa21b,	// (0x0007c2b9) cntbar_detail_pane_g1_ParamLimits

0xa21b,	// (0x0007c2b9) cntbar_detail_pane_g1

0xa22f,	// (0x0007c2cd) cntbar_detail_pane_t1_ParamLimits

0xa22f,	// (0x0007c2cd) cntbar_detail_pane_t1

0xa2c6,	// (0x0007c364) cntbar_detail_list_event_pane_g3_ParamLimits

0xa2c6,	// (0x0007c364) cntbar_detail_list_event_pane_g3

0xa2de,	// (0x0007c37c) cntbar_detail_list_event_pane_g4_ParamLimits

0xa2de,	// (0x0007c37c) cntbar_detail_list_event_pane_g4

0xa2f6,	// (0x0007c394) cntbar_detail_list_event_pane_g5_ParamLimits

0xa2f6,	// (0x0007c394) cntbar_detail_list_event_pane_g5

0xa30e,	// (0x0007c3ac) cntbar_detail_list_event_pane_g6_ParamLimits

0xa30e,	// (0x0007c3ac) cntbar_detail_list_event_pane_g6

0xa352,	// (0x0007c3f0) cntbar_detail_list_event_pane_t3_ParamLimits

0xa352,	// (0x0007c3f0) cntbar_detail_list_event_pane_t3

0xa364,	// (0x0007c402) popup_notif_wgt_window_ParamLimits

0xa364,	// (0x0007c402) popup_notif_wgt_window

0xa37d,	// (0x0007c41b) popup_submenu_window_cp01_ParamLimits

0xa37d,	// (0x0007c41b) popup_submenu_window_cp01

0x47c4,	// (0x00076862) bg_popup_window_pane_cp10

0xe5fc,	// (0x0008069a) listscroll_notif_wgt_pane

0xe606,	// (0x000806a4) list_notif_wgt_window

0xe60f,	// (0x000806ad) scroll_pane_cp033

0xe618,	// (0x000806b6) list_notif_wgt_row_pane_ParamLimits

0xe618,	// (0x000806b6) list_notif_wgt_row_pane

0xe62c,	// (0x000806ca) aid_size_list_notif_wgt_del

0xe635,	// (0x000806d3) list_notif_wgt_row_pane_g1

0xe63d,	// (0x000806db) list_notif_wgt_row_pane_g2

0xe645,	// (0x000806e3) list_notif_wgt_row_pane_g3

0x0002,

0xfe83,	// (0x00081f21) list_notif_wgt_row_pane_g

0xe64e,	// (0x000806ec) list_notif_wgt_row_pane_t1

0xe65c,	// (0x000806fa) list_notif_wgt_row_pane_t2

0xe66a,	// (0x00080708) list_notif_wgt_row_pane_t3

0x0002,

0xfe8a,	// (0x00081f28) list_notif_wgt_row_pane_t

0xcb7c,	// (0x0007ec1a) list_recal_day_event_pane_g1

0xe678,	// (0x00080716) list_recal_day_event_pane_t1

0xa974,	// (0x0007ca12) bg_button_pane_cp045

0xe687,	// (0x00080725) cntbar_detail_btn_pane_t1

0xbd26,	// (0x0007ddc4) main_callh_pane_ParamLimits

0xbd26,	// (0x0007ddc4) main_callh_pane

0xa974,	// (0x0007ca12) main_coverflow0_pane

0xa974,	// (0x0007ca12) main_wgtman_pane

0x9954,	// (0x0007b9f2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9954,	// (0x0007b9f2) main_fs_bigclock_unlock_btn_pane

0xdea2,	// (0x0007ff40) bg_button_pane_cp16

0x9d17,	// (0x0007bdb5) cell_tport_appsw_pane_g3

0xa38f,	// (0x0007c42d) cf0_flow_pane_ParamLimits

0xa38f,	// (0x0007c42d) cf0_flow_pane

0xe695,	// (0x00080733) listscroll_cf0_pane

0xe69e,	// (0x0008073c) main_cf0_pane_g1

0xa3a4,	// (0x0007c442) main_cf0_pane_t1_ParamLimits

0xa3a4,	// (0x0007c442) main_cf0_pane_t1

0xa3bc,	// (0x0007c45a) main_cf0_pane_t2_ParamLimits

0xa3bc,	// (0x0007c45a) main_cf0_pane_t2

0x0001,

0xfe91,	// (0x00081f2f) main_cf0_pane_t_ParamLimits

0xfe91,	// (0x00081f2f) main_cf0_pane_t

0xe6a8,	// (0x00080746) scroll_pane_cp11

0xa3d4,	// (0x0007c472) cf0_flow_pane_g1

0xa3e0,	// (0x0007c47e) cf0_flow_pane_g2

0x0001,

0xfe96,	// (0x00081f34) cf0_flow_pane_g

0xa3ec,	// (0x0007c48a) cf0_flow_pane_t1

0xa974,	// (0x0007ca12) main_call6_pane

0xa974,	// (0x0007ca12) main_calllock_pane

0xa3fe,	// (0x0007c49c) call6_btn_grp_pane_ParamLimits

0xa3fe,	// (0x0007c49c) call6_btn_grp_pane

0xa41a,	// (0x0007c4b8) call6_pane_g1_ParamLimits

0xa41a,	// (0x0007c4b8) call6_pane_g1

0xa430,	// (0x0007c4ce) popup_call6_1st_window_ParamLimits

0xa430,	// (0x0007c4ce) popup_call6_1st_window

0xa441,	// (0x0007c4df) popup_call6_2nd_window_ParamLimits

0xa441,	// (0x0007c4df) popup_call6_2nd_window

0xa452,	// (0x0007c4f0) cell_call6_btn_pane_ParamLimits

0xa452,	// (0x0007c4f0) cell_call6_btn_pane

0x47c4,	// (0x00076862) bg_popup_call2_in_pane_cp03

0xe6b3,	// (0x00080751) popup_call6_1st_window_g1

0xe6bb,	// (0x00080759) popup_call6_1st_window_g2

0xe6c3,	// (0x00080761) popup_call6_1st_window_g3

0x0002,

0xfe9b,	// (0x00081f39) popup_call6_1st_window_g

0xe6cb,	// (0x00080769) popup_call6_1st_window_t1

0xe6da,	// (0x00080778) popup_call6_1st_window_t2

0xe6ea,	// (0x00080788) popup_call6_1st_window_t3

0x0002,

0xfea2,	// (0x00081f40) popup_call6_1st_window_t

0x47c4,	// (0x00076862) bg_popup_call2_in_pane_cp04

0xe6b3,	// (0x00080751) popup_call6_2nd_window_g1

0xe6bb,	// (0x00080759) popup_call6_2nd_window_g2

0xe6c3,	// (0x00080761) popup_call6_2nd_window_g3

0x0002,

0xfe9b,	// (0x00081f39) popup_call6_2nd_window_g

0xe6cb,	// (0x00080769) popup_call6_2nd_window_t1

0xa974,	// (0x0007ca12) bg_button_pane_cp15

0xe6fa,	// (0x00080798) cell_call6_btn_pane_g1

0xe703,	// (0x000807a1) cell_call6_btn_pane_t1

0xa466,	// (0x0007c504) listscroll_wgtman_pane_ParamLimits

0xa466,	// (0x0007c504) listscroll_wgtman_pane

0xa489,	// (0x0007c527) wgtman_btn_pane_ParamLimits

0xa489,	// (0x0007c527) wgtman_btn_pane

0x4373,	// (0x00076411) aid_scroll_copy1

0xe712,	// (0x000807b0) list_wgtman_pane

0xa4cc,	// (0x0007c56a) wgtman_btn_pane_g1_ParamLimits

0xa4cc,	// (0x0007c56a) wgtman_btn_pane_g1

0xa4f8,	// (0x0007c596) wgtman_btn_pane_t1_ParamLimits

0xa4f8,	// (0x0007c596) wgtman_btn_pane_t1

0xe71c,	// (0x000807ba) wgtman_btn_pane_t2_ParamLimits

0xe71c,	// (0x000807ba) wgtman_btn_pane_t2

0x0001,

0xfea9,	// (0x00081f47) wgtman_btn_pane_t_ParamLimits

0xfea9,	// (0x00081f47) wgtman_btn_pane_t

0xe733,	// (0x000807d1) listrow_wgtman_pane_ParamLimits

0xe733,	// (0x000807d1) listrow_wgtman_pane

0xe747,	// (0x000807e5) listrow_wgtman_pane_g1

0xa535,	// (0x0007c5d3) listrow_wgtman_pane_g2

0x0001,

0xfeae,	// (0x00081f4c) listrow_wgtman_pane_g

0xe750,	// (0x000807ee) listrow_wgtman_pane_t1

0xe75e,	// (0x000807fc) listrow_wgtman_pane_t2

0x0001,

0xfeb3,	// (0x00081f51) listrow_wgtman_pane_t

0xe76c,	// (0x0008080a) wait_bar_pane_cp09

0xe774,	// (0x00080812) main_calllock_btn_pane

0xe77e,	// (0x0008081c) main_calllock_pane_g1

0xa974,	// (0x0007ca12) bg_button_pane_cp17

0xe78a,	// (0x00080828) main_calllock_btn_pane_g1

0xe793,	// (0x00080831) main_calllock_btn_pane_t1

0xa974,	// (0x0007ca12) main_dialer3_pane

0xa974,	// (0x0007ca12) main_fmrd2_pane

0xc1ee,	// (0x0007e28c) main_fs_bigclock_unlock_btn_pane_g1

0xe7aa,	// (0x00080848) main_fs_bigclock_unlock_btn_pane_t1

0xa53f,	// (0x0007c5dd) area_fmrd2_info_pane_ParamLimits

0xa53f,	// (0x0007c5dd) area_fmrd2_info_pane

0xa552,	// (0x0007c5f0) area_fmrd2_visual_pane_ParamLimits

0xa552,	// (0x0007c5f0) area_fmrd2_visual_pane

0xa560,	// (0x0007c5fe) fmrd2_indi_pane_ParamLimits

0xa560,	// (0x0007c5fe) fmrd2_indi_pane

0xa56d,	// (0x0007c60b) area_fmrd2_visual_pane_g1

0xa575,	// (0x0007c613) area_fmrd2_visual_pane_t1

0xa585,	// (0x0007c623) area_fmrd2_visual_pane_t2

0xa595,	// (0x0007c633) area_fmrd2_visual_pane_t3

0x0002,

0xfebd,	// (0x00081f5b) area_fmrd2_visual_pane_t

0xa5a5,	// (0x0007c643) area_fmrd2_info_pane_g1

0xa5ad,	// (0x0007c64b) area_fmrd2_info_pane_t1

0xa5bd,	// (0x0007c65b) area_fmrd2_info_pane_t2

0xa5cd,	// (0x0007c66b) area_fmrd2_info_pane_t3

0xa5dd,	// (0x0007c67b) area_fmrd2_info_pane_t4

0x0003,

0xfec4,	// (0x00081f62) area_fmrd2_info_pane_t

0xa5ed,	// (0x0007c68b) fmrd2_indi_pane_t1

0xa5fd,	// (0x0007c69b) fmrd2_indi_pane_t2

0xa60d,	// (0x0007c6ab) fmrd2_indi_pane_t3

0x0002,

0xfecd,	// (0x00081f6b) fmrd2_indi_pane_t

0xd8bb,	// (0x0007f959) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd8bb,	// (0x0007f959) list_single_fs_bigclock_indicator_pane_g5

0xd961,	// (0x0007f9ff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd961,	// (0x0007f9ff) list_single_fs_bigclock_indicator_pane_t5

0x9ea3,	// (0x0007bf41) aid_cell_bcale_month_pane_ParamLimits

0x9ea3,	// (0x0007bf41) aid_cell_bcale_month_pane

0x9eb5,	// (0x0007bf53) bcale_month_pane_ParamLimits

0x9eb5,	// (0x0007bf53) bcale_month_pane

0x9ecd,	// (0x0007bf6b) bcale_preview_pane_ParamLimits

0x9ecd,	// (0x0007bf6b) bcale_preview_pane

0xe4dd,	// (0x0008057b) list_single_fs_bigclock_pane_t1_ParamLimits

0xe4f7,	// (0x00080595) list_single_fs_bigclock_pane_t2_ParamLimits

0xe4f7,	// (0x00080595) list_single_fs_bigclock_pane_t2

0x0001,

0xfe54,	// (0x00081ef2) list_single_fs_bigclock_pane_t_ParamLimits

0xfe54,	// (0x00081ef2) list_single_fs_bigclock_pane_t

0xe7a2,	// (0x00080840) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeb8,	// (0x00081f56) main_fs_bigclock_unlock_btn_pane_g

0xa61d,	// (0x0007c6bb) aid_dia3_key_size_ParamLimits

0xa61d,	// (0x0007c6bb) aid_dia3_key_size

0xa62c,	// (0x0007c6ca) aid_dia3_listrow_size_ParamLimits

0xa62c,	// (0x0007c6ca) aid_dia3_listrow_size

0xa63a,	// (0x0007c6d8) dia3_keypad_fun_pane_ParamLimits

0xa63a,	// (0x0007c6d8) dia3_keypad_fun_pane

0xa656,	// (0x0007c6f4) dia3_keypad_num_pane_ParamLimits

0xa656,	// (0x0007c6f4) dia3_keypad_num_pane

0xa66f,	// (0x0007c70d) dia3_listscroll_pane_ParamLimits

0xa66f,	// (0x0007c70d) dia3_listscroll_pane

0xa684,	// (0x0007c722) dia3_numentry_pane_ParamLimits

0xa684,	// (0x0007c722) dia3_numentry_pane

0xe7b8,	// (0x00080856) dia3_list_pane

0xe7c3,	// (0x00080861) scroll_pane_cp12

0xa974,	// (0x0007ca12) bg_dia3_numentry_pane

0xe7ce,	// (0x0008086c) dia3_numentry_pane_t1

0xa697,	// (0x0007c735) cell_dia3_key_num_pane

0xa69f,	// (0x0007c73d) cell_dia3_key0_fun_pane_ParamLimits

0xa69f,	// (0x0007c73d) cell_dia3_key0_fun_pane

0xa6b3,	// (0x0007c751) cell_dia3_key1_fun_pane_ParamLimits

0xa6b3,	// (0x0007c751) cell_dia3_key1_fun_pane

0xa6cb,	// (0x0007c769) dia3_listrow_pane

0xd5d3,	// (0x0007f671) bg_dia3_numentry_pane_g1

0xa974,	// (0x0007ca12) bg_button_pane_cp21

0xe7dd,	// (0x0008087b) cell_dia3_key_num_pane_t1

0xe7eb,	// (0x00080889) cell_dia3_key_num_pane_t2

0xe7fa,	// (0x00080898) cell_dia3_key_num_pane_t3

0xe809,	// (0x000808a7) cell_dia3_key_num_pane_t4

0x0003,

0xfed4,	// (0x00081f72) cell_dia3_key_num_pane_t

0xa974,	// (0x0007ca12) bg_button_pane_cp19

0xa6dd,	// (0x0007c77b) cell_dia3_key0_fun_pane_g1

0xa974,	// (0x0007ca12) bg_button_pane_cp20

0xa6e5,	// (0x0007c783) cell_dia3_key1_fun_pane_g1

0xa6ed,	// (0x0007c78b) area_left_week_number_pane

0xa6f6,	// (0x0007c794) area_top_day_name_pane

0xa6ff,	// (0x0007c79d) frame_month_view_pane

0xa70b,	// (0x0007c7a9) grid_month_view_pane

0xa715,	// (0x0007c7b3) cell_top_day_name_pane_ParamLimits

0xa715,	// (0x0007c7b3) cell_top_day_name_pane

0xa731,	// (0x0007c7cf) cell_area_left_week_number_pane_ParamLimits

0xa731,	// (0x0007c7cf) cell_area_left_week_number_pane

0xa747,	// (0x0007c7e5) cell_month_view_pane_ParamLimits

0xa747,	// (0x0007c7e5) cell_month_view_pane

0xe818,	// (0x000808b6) frm_month_g1

0xa768,	// (0x0007c806) frm_month_g2

0xa772,	// (0x0007c810) frm_month_g3

0xa77c,	// (0x0007c81a) frm_month_g4

0xa786,	// (0x0007c824) frm_month_g5

0xa790,	// (0x0007c82e) frm_month_g6

0xa79c,	// (0x0007c83a) frm_month_g7

0xe821,	// (0x000808bf) frm_month_g8

0xa7a8,	// (0x0007c846) frm_month_g9

0xa7b1,	// (0x0007c84f) frm_month_g10

0xa7ba,	// (0x0007c858) frm_month_g11

0xa7c3,	// (0x0007c861) frm_month_g12

0xa7cc,	// (0x0007c86a) frm_month_g13

0xa7d5,	// (0x0007c873) frm_month_g14

0xa7e0,	// (0x0007c87e) frm_month_g15

0xa7eb,	// (0x0007c889) frm_month_g16

0x000f,

0xfedd,	// (0x00081f7b) frm_month_g

0xa7f6,	// (0x0007c894) cell_top_day_name_pane_t1

0xa805,	// (0x0007c8a3) cell_area_left_week_number_pane_g1

0xa7f6,	// (0x0007c894) cell_area_left_week_number_pane_t1

0xc1ee,	// (0x0007e28c) cell_month_view_pane_g1

0xa80d,	// (0x0007c8ab) cell_month_view_pane_t1

0xa974,	// (0x0007ca12) main_fps_pane

0xdbed,	// (0x0007fc8b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbed,	// (0x0007fc8b) cmail_ddmenu_btn02_pane_cp1

0xdc09,	// (0x0007fca7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc09,	// (0x0007fca7) cmail_ddmenu_btn02_pane_cp2

0xa0bf,	// (0x0007c15d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa0bf,	// (0x0007c15d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe05,	// (0x00081ea3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe05,	// (0x00081ea3) cmail_ddmenu_btn02_pane_g

0xa0dd,	// (0x0007c17b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa0dd,	// (0x0007c17b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe0a,	// (0x00081ea8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe0a,	// (0x00081ea8) cmail_ddmenu_btn02_pane_t

0xa81c,	// (0x0007c8ba) fps_text_pane_ParamLimits

0xa81c,	// (0x0007c8ba) fps_text_pane

0xa833,	// (0x0007c8d1) main_fps_pane_g1_ParamLimits

0xa833,	// (0x0007c8d1) main_fps_pane_g1

0xa84b,	// (0x0007c8e9) wait_bar_pane_cp010_ParamLimits

0xa84b,	// (0x0007c8e9) wait_bar_pane_cp010

0xa85e,	// (0x0007c8fc) fps_text_pane_t1_ParamLimits

0xa85e,	// (0x0007c8fc) fps_text_pane_t1

0x7e19,	// (0x00079eb7) cam4_image_uncrop_pane_g1

0x7e22,	// (0x00079ec0) cam4_image_uncrop_pane_g2

0x7e2d,	// (0x00079ecb) cam4_image_uncrop_pane_g3

0x7e36,	// (0x00079ed4) cam4_image_uncrop_pane_g4

0x0003,

0xf8de,	// (0x0008197c) cam4_image_uncrop_pane_g

0xa6cb,	// (0x0007c769) dia3_listrow_pane_ParamLimits

0xa974,	// (0x0007ca12) main_phob2_pane

0x9cde,	// (0x0007bd7c) cell_tport_appsw_pane_cp02_ParamLimits

0x9cde,	// (0x0007bd7c) cell_tport_appsw_pane_cp02

0x9cf2,	// (0x0007bd90) cell_tport_appsw_pane_cp03_ParamLimits

0x9cf2,	// (0x0007bd90) cell_tport_appsw_pane_cp03

0xa974,	// (0x0007ca12) phob2_contact_card_pane

0xa974,	// (0x0007ca12) phob2_listscroll_pane

0xe82a,	// (0x000808c8) phob2_list_pane

0xe832,	// (0x000808d0) scroll_pane_cp034

0xa876,	// (0x0007c914) phob2_cc_data_pane_ParamLimits

0xa876,	// (0x0007c914) phob2_cc_data_pane

0xa897,	// (0x0007c935) phob2_cc_listscroll_pane_ParamLimits

0xa897,	// (0x0007c935) phob2_cc_listscroll_pane

0xa8b9,	// (0x0007c957) list_double_large_graphic_phob2_pane_ParamLimits

0xa8b9,	// (0x0007c957) list_double_large_graphic_phob2_pane

0xa8ce,	// (0x0007c96c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa8ce,	// (0x0007c96c) list_double_large_graphic_phob2_pane_g1

0x15a7,	// (0x00073645) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x15a7,	// (0x00073645) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfefe,	// (0x00081f9c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfefe,	// (0x00081f9c) list_double_large_graphic_phob2_pane_g

0x15b3,	// (0x00073651) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x15b3,	// (0x00073651) list_double_large_graphic_phob2_pane_t1

0x15c8,	// (0x00073666) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x15c8,	// (0x00073666) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff03,	// (0x00081fa1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff03,	// (0x00081fa1) list_double_large_graphic_phob2_pane_t

0xa974,	// (0x0007ca12) list_highlight_pane_cp024

0xe83a,	// (0x000808d8) phob2_cc_button_pane

0xa8db,	// (0x0007c979) phob2_cc_data_pane_g1_ParamLimits

0xa8db,	// (0x0007c979) phob2_cc_data_pane_g1

0xa8f1,	// (0x0007c98f) phob2_cc_data_pane_g2_ParamLimits

0xa8f1,	// (0x0007c98f) phob2_cc_data_pane_g2

0x0001,

0xff08,	// (0x00081fa6) phob2_cc_data_pane_g_ParamLimits

0xff08,	// (0x00081fa6) phob2_cc_data_pane_g

0xa905,	// (0x0007c9a3) phob2_cc_data_pane_t1_ParamLimits

0xa905,	// (0x0007c9a3) phob2_cc_data_pane_t1

0xa91f,	// (0x0007c9bd) phob2_cc_data_pane_t2_ParamLimits

0xa91f,	// (0x0007c9bd) phob2_cc_data_pane_t2

0xa939,	// (0x0007c9d7) phob2_cc_data_pane_t3_ParamLimits

0xa939,	// (0x0007c9d7) phob2_cc_data_pane_t3

0x0002,

0xff0d,	// (0x00081fab) phob2_cc_data_pane_t_ParamLimits

0xff0d,	// (0x00081fab) phob2_cc_data_pane_t

0xe842,	// (0x000808e0) phob2_cc_list_pane_ParamLimits

0xe842,	// (0x000808e0) phob2_cc_list_pane

0xcc27,	// (0x0007ecc5) scroll_pane_cp035_ParamLimits

0xcc27,	// (0x0007ecc5) scroll_pane_cp035

0x188d,	// (0x0007392b) bg_button_pane_cp033

0xe84e,	// (0x000808ec) phob2_cc_button_pane_g1

0xe85a,	// (0x000808f8) phob2_cc_button_pane_t1

0xe86f,	// (0x0008090d) phob2_cc_button_pane_t2

0x0001,

0xff14,	// (0x00081fb2) phob2_cc_button_pane_t

0xa953,	// (0x0007c9f1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa953,	// (0x0007c9f1) list_double_large_graphic_phob2_cc_pane

0xa968,	// (0x0007ca06) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa968,	// (0x0007ca06) list_double_large_graphic_phob2_cc_pane_g1

0x15da,	// (0x00073678) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x15da,	// (0x00073678) list_double_large_graphic_phob2_cc_pane_g2

0x15e6,	// (0x00073684) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x15e6,	// (0x00073684) list_double_large_graphic_phob2_cc_pane_g3

0x15f2,	// (0x00073690) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x15f2,	// (0x00073690) list_double_large_graphic_phob2_cc_pane_g4

0x15fe,	// (0x0007369c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x15fe,	// (0x0007369c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff19,	// (0x00081fb7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff19,	// (0x00081fb7) list_double_large_graphic_phob2_cc_pane_g

0x160a,	// (0x000736a8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x160a,	// (0x000736a8) list_double_large_graphic_phob2_cc_pane_t1

0x1633,	// (0x000736d1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1633,	// (0x000736d1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff24,	// (0x00081fc2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff24,	// (0x00081fc2) list_double_large_graphic_phob2_cc_pane_t

0xe881,	// (0x0008091f) list_highlight_pane_cp025_ParamLimits

0xe881,	// (0x0008091f) list_highlight_pane_cp025

0x188d,	// (0x0007392b) bg_button_pane_cp033_ParamLimits

0xe84e,	// (0x000808ec) phob2_cc_button_pane_g1_ParamLimits

0xe85a,	// (0x000808f8) phob2_cc_button_pane_t1_ParamLimits

0xe86f,	// (0x0008090d) phob2_cc_button_pane_t2_ParamLimits

0xff14,	// (0x00081fb2) phob2_cc_button_pane_t_ParamLimits

0x189b,	// (0x00073939) popup_wgtman_window

0xca2f,	// (0x0007eacd) scroll_pane_cp038

0xa4ae,	// (0x0007c54c) wgtman_btn_pane_cp_01_ParamLimits

0xa4ae,	// (0x0007c54c) wgtman_btn_pane_cp_01

0xe88f,	// (0x0008092d) wgtman_content_pane

0xe898,	// (0x00080936) wgtman_heading_pane

0xa974,	// (0x0007ca12) bg_heading_pane_cp02

0xe8a1,	// (0x0008093f) wgtman_heading_pane_g1

0xe8a9,	// (0x00080947) wgtman_heading_pane_t1

0xe8b7,	// (0x00080955) scroll_pane_cp036

0xe8bf,	// (0x0008095d) wgtman_list_pane

0xda43,	// (0x0007fae1) wgtman_list_pane_t1_ParamLimits

0xda43,	// (0x0007fae1) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
