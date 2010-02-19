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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004cef0 };

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
0x5b01,	// (0x000529f1) Screen

0x5b0d,	// (0x000529fd) application_window

0x5b4d,	// (0x00052a3d) area_bottom_pane_ParamLimits

0x5b4d,	// (0x00052a3d) area_bottom_pane

0x5b82,	// (0x00052a72) area_top_pane_ParamLimits

0x5b82,	// (0x00052a72) area_top_pane

0x02c7,	// (0x0004d1b7) call_video_uplink_pane_ParamLimits

0x02c7,	// (0x0004d1b7) call_video_uplink_pane

0x5c0f,	// (0x00052aff) main_pane_ParamLimits

0x5c0f,	// (0x00052aff) main_pane

0x4022,	// (0x00050f12) context_pane

0x8d8c,	// (0x00055c7c) navi_pane

0x8db0,	// (0x00055ca0) popup_cale_events_window_ParamLimits

0x8db0,	// (0x00055ca0) popup_cale_events_window

0x4035,	// (0x00050f25) popup_mup_playback_window

0x8dc8,	// (0x00055cb8) signal_pane

0x214c,	// (0x0004f03c) main_browser_pane

0x2b94,	// (0x0004fa84) main_burst_pane

0x8c3e,	// (0x00055b2e) main_calc_pane

0x2b94,	// (0x0004fa84) main_cale_day_pane

0x214c,	// (0x0004f03c) main_cale_month_pane

0x2b94,	// (0x0004fa84) main_cale_week_pane

0x2b94,	// (0x0004fa84) main_call_pane

0x1e1e,	// (0x0004ed0e) main_call_poc_pane

0x2b94,	// (0x0004fa84) main_camera_pane

0x2b94,	// (0x0004fa84) main_chi_dic_pane

0x2a36,	// (0x0004f926) main_clock_pane

0x1e1e,	// (0x0004ed0e) main_fmradio_pane

0x2b94,	// (0x0004fa84) main_graph_messa_pane

0x1e1e,	// (0x0004ed0e) main_help_pane

0x214c,	// (0x0004f03c) main_im_pane

0x2079,	// (0x0004ef69) main_image_pane_ParamLimits

0x2079,	// (0x0004ef69) main_image_pane

0x1e1e,	// (0x0004ed0e) main_location2_pane

0x2b94,	// (0x0004fa84) main_location_pane

0x1e1e,	// (0x0004ed0e) main_messa_pane

0x1e1e,	// (0x0004ed0e) main_mp2_pane

0x2b94,	// (0x0004fa84) main_mp_pane

0x1e1e,	// (0x0004ed0e) main_msg_pane

0x1e1e,	// (0x0004ed0e) main_mup_eq_pane

0x1e1e,	// (0x0004ed0e) main_mup_pane

0x214c,	// (0x0004f03c) main_notes_pane

0x1e1e,	// (0x0004ed0e) main_pec_pane

0x1e1e,	// (0x0004ed0e) main_phob_pane

0x1e1e,	// (0x0004ed0e) main_pinb_pane

0x1e1e,	// (0x0004ed0e) main_postcard_pane

0x1e1e,	// (0x0004ed0e) main_qdial_pane

0x2b94,	// (0x0004fa84) main_skin_pane

0x1e1e,	// (0x0004ed0e) main_smil2_pane

0x2b94,	// (0x0004fa84) main_smil_pane

0x2b94,	// (0x0004fa84) main_video_pane

0x2b94,	// (0x0004fa84) main_video_tele_pane

0x2079,	// (0x0004ef69) main_viewer_pane_ParamLimits

0x2079,	// (0x0004ef69) main_viewer_pane

0x2b94,	// (0x0004fa84) main_vorec_pane

0x8c76,	// (0x00055b66) popup_blid_sat_info_window_ParamLimits

0x8c76,	// (0x00055b66) popup_blid_sat_info_window

0x8c90,	// (0x00055b80) popup_dyc_status_message_window_ParamLimits

0x8c90,	// (0x00055b80) popup_dyc_status_message_window

0x8ca0,	// (0x00055b90) popup_grid_large_graphic_window_ParamLimits

0x8ca0,	// (0x00055b90) popup_grid_large_graphic_window

0x8d18,	// (0x00055c08) popup_loc_request_window_ParamLimits

0x8d18,	// (0x00055c08) popup_loc_request_window

0x8d60,	// (0x00055c50) popup_wml_address_window_ParamLimits

0x8d60,	// (0x00055c50) popup_wml_address_window

0x8b16,	// (0x00055a06) call_muted_g1

0x87d5,	// (0x000556c5) popup_call_audio_conf_window_ParamLimits

0x87d5,	// (0x000556c5) popup_call_audio_conf_window

0x8b26,	// (0x00055a16) popup_call_audio_first_window_ParamLimits

0x8b26,	// (0x00055a16) popup_call_audio_first_window

0x8b66,	// (0x00055a56) popup_call_audio_in_window_ParamLimits

0x8b66,	// (0x00055a56) popup_call_audio_in_window

0x8b8a,	// (0x00055a7a) popup_call_audio_out_window_ParamLimits

0x8b8a,	// (0x00055a7a) popup_call_audio_out_window

0x8bac,	// (0x00055a9c) popup_call_audio_second_window_ParamLimits

0x8bac,	// (0x00055a9c) popup_call_audio_second_window

0x8bdc,	// (0x00055acc) popup_call_audio_wait_window_ParamLimits

0x8bdc,	// (0x00055acc) popup_call_audio_wait_window

0x8bfd,	// (0x00055aed) popup_number_entry_window_ParamLimits

0x8bfd,	// (0x00055aed) popup_number_entry_window

0x02f3,	// (0x0004d1e3) bg_popup_call_pane_cp05_ParamLimits

0x02f3,	// (0x0004d1e3) bg_popup_call_pane_cp05

0x0313,	// (0x0004d203) popup_number_entry_window_t1

0x0326,	// (0x0004d216) popup_number_entry_window_t2

0x0338,	// (0x0004d228) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0005bfd7) popup_number_entry_window_t

0x037f,	// (0x0004d26f) text_title_cp2

0x0392,	// (0x0004d282) bg_popup_call_pane_cp_ParamLimits

0x0392,	// (0x0004d282) bg_popup_call_pane_cp

0x03a0,	// (0x0004d290) call_thumbnail_pane

0x03a8,	// (0x0004d298) popup_call_audio_in_window_g1_ParamLimits

0x03a8,	// (0x0004d298) popup_call_audio_in_window_g1

0x03b4,	// (0x0004d2a4) popup_call_audio_in_window_g2_ParamLimits

0x03b4,	// (0x0004d2a4) popup_call_audio_in_window_g2

0x03c0,	// (0x0004d2b0) popup_call_audio_in_window_g3_ParamLimits

0x03c0,	// (0x0004d2b0) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0005bfe0) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0005bfe0) popup_call_audio_in_window_g

0x03cc,	// (0x0004d2bc) popup_call_audio_in_window_t1_ParamLimits

0x03cc,	// (0x0004d2bc) popup_call_audio_in_window_t1

0x03e8,	// (0x0004d2d8) popup_call_audio_in_window_t2_ParamLimits

0x03e8,	// (0x0004d2d8) popup_call_audio_in_window_t2

0x0404,	// (0x0004d2f4) popup_call_audio_in_window_t3_ParamLimits

0x0404,	// (0x0004d2f4) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0005bfe7) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0005bfe7) popup_call_audio_in_window_t

0x0392,	// (0x0004d282) bg_popup_call_pane_cp01_ParamLimits

0x0392,	// (0x0004d282) bg_popup_call_pane_cp01

0x03a0,	// (0x0004d290) call_thumbnail_pane_cp02

0x0417,	// (0x0004d307) call_type_pane_cp022

0x041f,	// (0x0004d30f) popup_call_audio_out_window_g1_ParamLimits

0x041f,	// (0x0004d30f) popup_call_audio_out_window_g1

0x0431,	// (0x0004d321) popup_call_audio_out_window_g2_ParamLimits

0x0431,	// (0x0004d321) popup_call_audio_out_window_g2

0x043d,	// (0x0004d32d) popup_call_audio_out_window_g3_ParamLimits

0x043d,	// (0x0004d32d) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0005bfee) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0005bfee) popup_call_audio_out_window_g

0x044f,	// (0x0004d33f) popup_call_audio_out_window_t1_ParamLimits

0x044f,	// (0x0004d33f) popup_call_audio_out_window_t1

0x0467,	// (0x0004d357) popup_call_audio_out_window_t2_ParamLimits

0x0467,	// (0x0004d357) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0005bff5) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0005bff5) popup_call_audio_out_window_t

0x047c,	// (0x0004d36c) bg_popup_call_pane_ParamLimits

0x047c,	// (0x0004d36c) bg_popup_call_pane

0x5dc8,	// (0x00052cb8) call_thumbnail_pane_cp_ParamLimits

0x5dc8,	// (0x00052cb8) call_thumbnail_pane_cp

0x1be3,	// (0x0004ead3) call_type_pane_cp01_ParamLimits

0x1be3,	// (0x0004ead3) call_type_pane_cp01

0x1c27,	// (0x0004eb17) popup_call_audio_first_window_g1_ParamLimits

0x1c27,	// (0x0004eb17) popup_call_audio_first_window_g1

0x1c73,	// (0x0004eb63) popup_call_audio_first_window_g2_ParamLimits

0x1c73,	// (0x0004eb63) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0005bffa) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0005bffa) popup_call_audio_first_window_g

0x1cb7,	// (0x0004eba7) popup_call_audio_first_window_t1_ParamLimits

0x1cb7,	// (0x0004eba7) popup_call_audio_first_window_t1

0x1d63,	// (0x0004ec53) popup_call_audio_first_window_t4_ParamLimits

0x1d63,	// (0x0004ec53) popup_call_audio_first_window_t4

0x1def,	// (0x0004ecdf) popup_call_audio_first_window_t5_ParamLimits

0x1def,	// (0x0004ecdf) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0005bfff) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0005bfff) popup_call_audio_first_window_t

0x1e1e,	// (0x0004ed0e) bg_popup_call_pane_cp02

0x1e28,	// (0x0004ed18) call_type_pane_cp023

0x1e30,	// (0x0004ed20) popup_call_audio_wait_window_g1

0x1e38,	// (0x0004ed28) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0005c006) popup_call_audio_wait_window_g

0x1e40,	// (0x0004ed30) popup_call_audio_wait_window_t3

0x1e4e,	// (0x0004ed3e) bg_popup_call_pane_cp03_ParamLimits

0x1e4e,	// (0x0004ed3e) bg_popup_call_pane_cp03

0x1eae,	// (0x0004ed9e) call_thumbnail_pane_cp011_ParamLimits

0x1eae,	// (0x0004ed9e) call_thumbnail_pane_cp011

0x1eba,	// (0x0004edaa) call_type_pane_cp034_ParamLimits

0x1eba,	// (0x0004edaa) call_type_pane_cp034

0x1ef6,	// (0x0004ede6) popup_call_audio_second_window_g1_ParamLimits

0x1ef6,	// (0x0004ede6) popup_call_audio_second_window_g1

0x1f32,	// (0x0004ee22) popup_call_audio_second_window_g2_ParamLimits

0x1f32,	// (0x0004ee22) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0005c00b) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0005c00b) popup_call_audio_second_window_g

0x1f6e,	// (0x0004ee5e) popup_call_audio_second_window_t1_ParamLimits

0x1f6e,	// (0x0004ee5e) popup_call_audio_second_window_t1

0x1fef,	// (0x0004eedf) popup_call_audio_second_window_t2_ParamLimits

0x1fef,	// (0x0004eedf) popup_call_audio_second_window_t2

0x2025,	// (0x0004ef15) popup_call_audio_second_window_t3_ParamLimits

0x2025,	// (0x0004ef15) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0005c010) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0005c010) popup_call_audio_second_window_t

0x1e1e,	// (0x0004ed0e) bg_popup_call_pane_cp04

0x205b,	// (0x0004ef4b) list_conf_pane

0x2063,	// (0x0004ef53) popup_call_audio_conf_window_t1

0x2071,	// (0x0004ef61) call_thumbnail_pane_g1

0x2079,	// (0x0004ef69) bg_pinb_pane_ParamLimits

0x2079,	// (0x0004ef69) bg_pinb_pane

0x2087,	// (0x0004ef77) find_pinb_pane

0x2090,	// (0x0004ef80) listscroll_pinb_pane_ParamLimits

0x2090,	// (0x0004ef80) listscroll_pinb_pane

0x209f,	// (0x0004ef8f) pinb_bg_pane_g1

0x5dec,	// (0x00052cdc) pinb_bg_pane_g2

0x5df8,	// (0x00052ce8) pinb_bg_pane_g3

0x5e04,	// (0x00052cf4) pinb_bg_pane_g4

0x5e10,	// (0x00052d00) pinb_bg_pane_g5

0x5e1c,	// (0x00052d0c) pinb_bg_pane_g6

0x5e27,	// (0x00052d17) pinb_bg_pane_g7

0x5e32,	// (0x00052d22) pinb_bg_pane_g8

0x5e3d,	// (0x00052d2d) pinb_bg_pane_g9

0x5e47,	// (0x00052d37) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0005c017) pinb_bg_pane_g

0x5e64,	// (0x00052d54) grid_pinb_pane

0x5e6f,	// (0x00052d5f) list_pinb_pane

0x5e7a,	// (0x00052d6a) scroll_pane_cp01_ParamLimits

0x5e7a,	// (0x00052d6a) scroll_pane_cp01

0x20a9,	// (0x0004ef99) find_pinb_pane_g1_ParamLimits

0x20a9,	// (0x0004ef99) find_pinb_pane_g1

0x20c1,	// (0x0004efb1) find_pinb_pane_t1

0x20d3,	// (0x0004efc3) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0005c031) find_pinb_pane_t

0x20e8,	// (0x0004efd8) input_focus_pane_cp01_ParamLimits

0x20e8,	// (0x0004efd8) input_focus_pane_cp01

0x5e8c,	// (0x00052d7c) cell_pinb_pane_ParamLimits

0x5e8c,	// (0x00052d7c) cell_pinb_pane

0x5eaa,	// (0x00052d9a) cell_pinb_pane_g1_ParamLimits

0x5eaa,	// (0x00052d9a) cell_pinb_pane_g1

0x5ebf,	// (0x00052daf) cell_pinb_pane_g2_ParamLimits

0x5ebf,	// (0x00052daf) cell_pinb_pane_g2

0x20f4,	// (0x0004efe4) cell_pinb_pane_g3_ParamLimits

0x20f4,	// (0x0004efe4) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0005c036) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0005c036) cell_pinb_pane_g

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp01

0x5ecb,	// (0x00052dbb) list_pinb_item_pane_ParamLimits

0x5ecb,	// (0x00052dbb) list_pinb_item_pane

0x1e1e,	// (0x0004ed0e) list_highlight_pane_cp02

0x5ee6,	// (0x00052dd6) list_pinb_item_pane_g1_ParamLimits

0x5ee6,	// (0x00052dd6) list_pinb_item_pane_g1

0x5ef3,	// (0x00052de3) list_pinb_item_pane_g2_ParamLimits

0x5ef3,	// (0x00052de3) list_pinb_item_pane_g2

0x5eff,	// (0x00052def) list_pinb_item_pane_g3_ParamLimits

0x5eff,	// (0x00052def) list_pinb_item_pane_g3

0x5f10,	// (0x00052e00) list_pinb_item_pane_g4_ParamLimits

0x5f10,	// (0x00052e00) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0005c03d) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0005c03d) list_pinb_item_pane_g

0x5f1c,	// (0x00052e0c) list_pinb_item_pane_t1_ParamLimits

0x5f1c,	// (0x00052e0c) list_pinb_item_pane_t1

0x5f4d,	// (0x00052e3d) calc_display_pane

0x5f6b,	// (0x00052e5b) calc_paper_pane

0x5f87,	// (0x00052e77) grid_calc_pane

0x1e1e,	// (0x0004ed0e) bg_list_pane_cp01

0x5fb3,	// (0x00052ea3) clock_g1

0x5fbb,	// (0x00052eab) clock_g2

0x0001,

0xf156,	// (0x0005c046) clock_g

0x5fc5,	// (0x00052eb5) clock_t1_ParamLimits

0x5fc5,	// (0x00052eb5) clock_t1

0x5fda,	// (0x00052eca) clock_t2_ParamLimits

0x5fda,	// (0x00052eca) clock_t2

0x5fec,	// (0x00052edc) clock_t3_ParamLimits

0x5fec,	// (0x00052edc) clock_t3

0x5ffe,	// (0x00052eee) clock_t4_ParamLimits

0x5ffe,	// (0x00052eee) clock_t4

0x6010,	// (0x00052f00) clock_t5_ParamLimits

0x6010,	// (0x00052f00) clock_t5

0x6025,	// (0x00052f15) clock_t6_ParamLimits

0x6025,	// (0x00052f15) clock_t6

0x6037,	// (0x00052f27) clock_t7_ParamLimits

0x6037,	// (0x00052f27) clock_t7

0x6049,	// (0x00052f39) clock_t8_ParamLimits

0x6049,	// (0x00052f39) clock_t8

0x605f,	// (0x00052f4f) clock_t9_ParamLimits

0x605f,	// (0x00052f4f) clock_t9

0x0008,

0xf15b,	// (0x0005c04b) clock_t_ParamLimits

0xf15b,	// (0x0005c04b) clock_t

0x2100,	// (0x0004eff0) popup_clock_analogue_window_cp02

0x2100,	// (0x0004eff0) popup_clock_digital_window_cp01

0x2108,	// (0x0004eff8) listscroll_help_pane

0x1e1e,	// (0x0004ed0e) phob_pre_status_pane

0x2112,	// (0x0004f002) grid_qdial_pane

0x1e1e,	// (0x0004ed0e) listscroll_mce_pane

0x211c,	// (0x0004f00c) bg_notes_pane

0x212a,	// (0x0004f01a) list_notes_pane

0x6075,	// (0x00052f65) scroll_pane_cp06

0x2138,	// (0x0004f028) bg_calc_paper_pane

0x608e,	// (0x00052f7e) list_calc_pane

0x214c,	// (0x0004f03c) bg_calc_display_pane

0x60a8,	// (0x00052f98) calc_display_pane_t1

0x60bd,	// (0x00052fad) calc_display_pane_t2

0x60d2,	// (0x00052fc2) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0005c05e) calc_display_pane_t

0x60e4,	// (0x00052fd4) cell_calc_pane_ParamLimits

0x60e4,	// (0x00052fd4) cell_calc_pane

0x2158,	// (0x0004f048) bg_calc_paper_pane_g1

0x2170,	// (0x0004f060) bg_calc_paper_pane_g2

0x2164,	// (0x0004f054) bg_calc_paper_pane_g3

0x2188,	// (0x0004f078) bg_calc_paper_pane_g4

0x217c,	// (0x0004f06c) bg_calc_paper_pane_g5

0x6113,	// (0x00053003) bg_calc_paper_pane_g6

0x6124,	// (0x00053014) bg_calc_paper_pane_g7

0x6135,	// (0x00053025) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0005c065) bg_calc_paper_pane_g

0x6148,	// (0x00053038) calc_bg_paper_pane_g9

0x615b,	// (0x0005304b) list_calc_item_pane_ParamLimits

0x615b,	// (0x0005304b) list_calc_item_pane

0x2194,	// (0x0004f084) list_calc_item_pane_g1

0x617c,	// (0x0005306c) list_calc_item_pane_t1_ParamLimits

0x617c,	// (0x0005306c) list_calc_item_pane_t1

0x618e,	// (0x0005307e) list_calc_item_pane_t2_ParamLimits

0x618e,	// (0x0005307e) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0005c076) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0005c076) list_calc_item_pane_t

0x21a1,	// (0x0004f091) cell_calc_pane_g1

0x21ab,	// (0x0004f09b) grid_highlight_pane_cp02

0x21d6,	// (0x0004f0c6) bg_calc_display_pane_g1

0x61be,	// (0x000530ae) bg_calc_display_pane_g2

0x21cd,	// (0x0004f0bd) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0005c080) bg_calc_display_pane_g

0x61c8,	// (0x000530b8) cell_qdial_pane_ParamLimits

0x61c8,	// (0x000530b8) cell_qdial_pane

0x61de,	// (0x000530ce) cell_qdial_pane_g1_ParamLimits

0x61de,	// (0x000530ce) cell_qdial_pane_g1

0x61eb,	// (0x000530db) cell_qdial_pane_g2_ParamLimits

0x61eb,	// (0x000530db) cell_qdial_pane_g2

0x21df,	// (0x0004f0cf) cell_qdial_pane_g3_ParamLimits

0x21df,	// (0x0004f0cf) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0005c087) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0005c087) cell_qdial_pane_g

0x6209,	// (0x000530f9) cell_qdial_pane_t1_ParamLimits

0x6209,	// (0x000530f9) cell_qdial_pane_t1

0x6221,	// (0x00053111) cell_qdial_pane_t2_ParamLimits

0x6221,	// (0x00053111) cell_qdial_pane_t2

0x6234,	// (0x00053124) cell_qdial_pane_t3_ParamLimits

0x6234,	// (0x00053124) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0005c090) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0005c090) cell_qdial_pane_t

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp04

0x21eb,	// (0x0004f0db) thumbnail_qdial_pane_ParamLimits

0x21eb,	// (0x0004f0db) thumbnail_qdial_pane

0x2247,	// (0x0004f137) list_help_pane

0x2250,	// (0x0004f140) scroll_pane_cp02

0x6247,	// (0x00053137) help_list_pane_t1_ParamLimits

0x6247,	// (0x00053137) help_list_pane_t1

0x626e,	// (0x0005315e) bg_notes_pane_g2

0x6276,	// (0x00053166) bg_notes_pane_g3

0x627e,	// (0x0005316e) notes_bg_pane_g1

0x6286,	// (0x00053176) notes_bg_pane_g4

0x628e,	// (0x0005317e) notes_bg_pane_g5

0x6296,	// (0x00053186) notes_bg_pane_g6

0x629e,	// (0x0005318e) notes_bg_pane_g7

0x62a6,	// (0x00053196) notes_bg_pane_g8

0x62ae,	// (0x0005319e) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0005c0ae) notes_bg_pane_g

0x62b6,	// (0x000531a6) list_notes_text_pane_ParamLimits

0x62b6,	// (0x000531a6) list_notes_text_pane

0x2259,	// (0x0004f149) list_notes_text_pane_g1

0x62d8,	// (0x000531c8) list_notes_text_pane_t1

0x214c,	// (0x0004f03c) listscroll_cale_week_pane

0x6303,	// (0x000531f3) bg_cale_heading_pane

0x2273,	// (0x0004f163) bg_cale_pane_cp01

0x631f,	// (0x0005320f) cale_week_corner_pane

0x6335,	// (0x00053225) cale_week_day_heading_pane

0x6351,	// (0x00053241) cale_week_scroll_pane_g1

0x636a,	// (0x0005325a) cale_week_scroll_pane_g2

0x637b,	// (0x0005326b) cale_week_scroll_pane_g3

0x638c,	// (0x0005327c) cale_week_scroll_pane_g4

0x639d,	// (0x0005328d) cale_week_scroll_pane_g5

0x63ae,	// (0x0005329e) cale_week_scroll_pane_g6

0x63c1,	// (0x000532b1) cale_week_scroll_pane_g7

0x63d4,	// (0x000532c4) cale_week_scroll_pane_g8

0x63e7,	// (0x000532d7) cale_week_scroll_pane_g9

0x63f8,	// (0x000532e8) cale_week_scroll_pane_g10

0x6409,	// (0x000532f9) cale_week_scroll_pane_g11

0x641a,	// (0x0005330a) cale_week_scroll_pane_g12

0x642b,	// (0x0005331b) cale_week_scroll_pane_g13

0x643c,	// (0x0005332c) cale_week_scroll_pane_g14

0x6455,	// (0x00053345) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0005c0bd) cale_week_scroll_pane_g

0x646e,	// (0x0005335e) cale_week_time_pane

0x6481,	// (0x00053371) grid_cale_week_pane

0x649e,	// (0x0005338e) scroll_pane_cp08

0x64b8,	// (0x000533a8) cell_cale_week_pane_ParamLimits

0x64b8,	// (0x000533a8) cell_cale_week_pane

0x64fa,	// (0x000533ea) cale_week_day_heading_pane_t1

0x6527,	// (0x00053417) cale_week_day_heading_pane_t2

0x6554,	// (0x00053444) cale_week_day_heading_pane_t3

0x6581,	// (0x00053471) cale_week_day_heading_pane_t4

0x65ae,	// (0x0005349e) cale_week_day_heading_pane_t5

0x65db,	// (0x000534cb) cale_week_day_heading_pane_t6

0x6608,	// (0x000534f8) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0005c0dc) cale_week_day_heading_pane_t

0x229e,	// (0x0004f18e) bg_cale_side_pane

0x6635,	// (0x00053525) cale_week_time_pane_t1

0x664d,	// (0x0005353d) cale_week_time_pane_t2

0x6665,	// (0x00053555) cale_week_time_pane_t3

0x667d,	// (0x0005356d) cale_week_time_pane_t4

0x6695,	// (0x00053585) cale_week_time_pane_t5

0x66ad,	// (0x0005359d) cale_week_time_pane_t6

0x66c5,	// (0x000535b5) cale_week_time_pane_t7

0x66dd,	// (0x000535cd) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0005c0eb) cale_week_time_pane_t

0x66f9,	// (0x000535e9) cell_cale_week_pane_g2

0x6712,	// (0x00053602) cell_cale_week_pane_g3_ParamLimits

0x6712,	// (0x00053602) cell_cale_week_pane_g3

0x22ac,	// (0x0004f19c) grid_highlight_pane_cp07

0x22b4,	// (0x0004f1a4) listscroll_gms_pane

0x22be,	// (0x0004f1ae) grid_gms_pane

0x22c7,	// (0x0004f1b7) listscroll_gms_pane_g1

0x22cf,	// (0x0004f1bf) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0005c0fc) listscroll_gms_pane_g

0x672a,	// (0x0005361a) scroll_pane_cp010

0x6735,	// (0x00053625) cell_gms_pane_ParamLimits

0x6735,	// (0x00053625) cell_gms_pane

0x6748,	// (0x00053638) cell_gms_pane_g1

0x22d7,	// (0x0004f1c7) cell_gms_pane_g2

0x22df,	// (0x0004f1cf) cell_gms_pane_g3

0x22e8,	// (0x0004f1d8) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0005c101) cell_gms_pane_g

0x22f1,	// (0x0004f1e1) grid_highlight_pane_cp09

0x8abe,	// (0x000559ae) phob_pre_status_pane_g1

0x8ac6,	// (0x000559b6) phob_pre_status_pane_g2

0x8ace,	// (0x000559be) phob_pre_status_pane_g3

0x8ad6,	// (0x000559c6) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0005c4f0) phob_pre_status_pane_g

0x8ae6,	// (0x000559d6) phob_pre_status_pane_t1

0x8af6,	// (0x000559e6) phob_pre_status_pane_t2

0x8b06,	// (0x000559f6) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0005c4fb) phob_pre_status_pane_t

0x1e1e,	// (0x0004ed0e) bg_list_pane_cp05

0x6758,	// (0x00053648) grid_vorec_pane

0x6762,	// (0x00053652) vorec_t1

0x6770,	// (0x00053660) vorec_t2

0x677e,	// (0x0005366e) vorec_t3

0x678c,	// (0x0005367c) vorec_t4

0x679a,	// (0x0005368a) vorec_t5

0x67a8,	// (0x00053698) vorec_t6

0x0006,

0xf21a,	// (0x0005c10a) vorec_t

0x67c4,	// (0x000536b4) wait_bar_pane_cp01

0x67cc,	// (0x000536bc) cell_vorec_pane_ParamLimits

0x67cc,	// (0x000536bc) cell_vorec_pane

0x22f9,	// (0x0004f1e9) cell_vorec_pane_g1

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp05

0x67ef,	// (0x000536df) cams_zoom_pane

0x67fb,	// (0x000536eb) image_vga_pane

0x680a,	// (0x000536fa) main_camera_pane_g1

0x6818,	// (0x00053708) main_camera_pane_g2

0x6824,	// (0x00053714) main_camera_pane_g3

0x6832,	// (0x00053722) main_camera_pane_g4

0x6840,	// (0x00053730) main_camera_pane_g5

0x684e,	// (0x0005373e) main_camera_pane_g6

0x685c,	// (0x0005374c) main_camera_pane_g7

0x0007,

0xf229,	// (0x0005c119) main_camera_pane_g

0x686a,	// (0x0005375a) main_camera_pane_t1

0x687c,	// (0x0005376c) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0005c12a) main_camera_pane_t

0x689f,	// (0x0005378f) cams_zoom_pane_cp_ParamLimits

0x689f,	// (0x0005378f) cams_zoom_pane_cp

0x68c3,	// (0x000537b3) image_cif_pane_ParamLimits

0x68c3,	// (0x000537b3) image_cif_pane

0x68e1,	// (0x000537d1) image_subqcif_pane

0x68eb,	// (0x000537db) main_video_pane_g1_ParamLimits

0x68eb,	// (0x000537db) main_video_pane_g1

0x690b,	// (0x000537fb) main_video_pane_g2_ParamLimits

0x690b,	// (0x000537fb) main_video_pane_g2

0x693b,	// (0x0005382b) main_video_pane_g3_ParamLimits

0x693b,	// (0x0005382b) main_video_pane_g3

0x6964,	// (0x00053854) main_video_pane_g4_ParamLimits

0x6964,	// (0x00053854) main_video_pane_g4

0x698d,	// (0x0005387d) main_video_pane_g5_ParamLimits

0x698d,	// (0x0005387d) main_video_pane_g5

0x230f,	// (0x0004f1ff) main_video_pane_g6_ParamLimits

0x230f,	// (0x0004f1ff) main_video_pane_g6

0x0006,

0xf23f,	// (0x0005c12f) main_video_pane_g_ParamLimits

0xf23f,	// (0x0005c12f) main_video_pane_g

0x69af,	// (0x0005389f) main_video_pane_t1_ParamLimits

0x69af,	// (0x0005389f) main_video_pane_t1

0x2329,	// (0x0004f219) cams_zoom_pane_g1

0x2332,	// (0x0004f222) cams_zoom_pane_g2

0x233b,	// (0x0004f22b) cams_zoom_pane_g3

0x2344,	// (0x0004f234) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0005c13e) cams_zoom_pane_g

0x69f9,	// (0x000538e9) grid_cams_pane

0x6a07,	// (0x000538f7) linegrid_cams_pane

0x6a13,	// (0x00053903) cell_cams_pane_ParamLimits

0x6a13,	// (0x00053903) cell_cams_pane

0x234d,	// (0x0004f23d) cams_burst_image_pane

0x2355,	// (0x0004f245) cell_cams_pane_g1

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp03

0x21a1,	// (0x0004f091) mp_bg_pane_g1

0x1e1e,	// (0x0004ed0e) bg_list_pane_cp03

0x3ef4,	// (0x00050de4) bg_mp_pane

0x3efc,	// (0x00050dec) grid_mp_pane

0x3f04,	// (0x00050df4) media_player_g1

0x3f0e,	// (0x00050dfe) media_player_t1

0x3f1c,	// (0x00050e0c) media_player_t2

0x3f2a,	// (0x00050e1a) media_player_t3

0x3f38,	// (0x00050e28) media_player_t4

0x3f46,	// (0x00050e36) media_player_t5

0x3f54,	// (0x00050e44) media_player_t6

0x3f62,	// (0x00050e52) media_player_t7

0x0006,

0xf5ea,	// (0x0005c4da) media_player_t

0x3f70,	// (0x00050e60) wait_bar_pane_cp02

0xf5cf,	// (0x0005c4bf) main_usb_pane_t

0x8ab5,	// (0x000559a5) cell_mp_pane

0x21a1,	// (0x0004f091) cell_mp_pane_g1

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp06

0x235d,	// (0x0004f24d) grid_skin_colour_pane

0x2365,	// (0x0004f255) list_highlight_pane_cp03

0x6a81,	// (0x00053971) skin_g1

0x236d,	// (0x0004f25d) skin_t1

0x237c,	// (0x0004f26c) skin_t2

0x0001,

0xf283,	// (0x0005c173) skin_t

0x6a8b,	// (0x0005397b) cell_skin_colour_pane_ParamLimits

0x6a8b,	// (0x0005397b) cell_skin_colour_pane

0x238a,	// (0x0004f27a) cell_skin_colour_pane_g1

0x6b0b,	// (0x000539fb) call_video_g1_ParamLimits

0x6b0b,	// (0x000539fb) call_video_g1

0x6b1b,	// (0x00053a0b) call_video_g2_ParamLimits

0x6b1b,	// (0x00053a0b) call_video_g2

0x0001,

0xf288,	// (0x0005c178) call_video_g_ParamLimits

0xf288,	// (0x0005c178) call_video_g

0x6b6b,	// (0x00053a5b) call_video_uplink_pane_cp1_ParamLimits

0x6b6b,	// (0x00053a5b) call_video_uplink_pane_cp1

0x239c,	// (0x0004f28c) call_video_uplink_pane_cp2

0x6c39,	// (0x00053b29) video_down_crop_pane_ParamLimits

0x6c39,	// (0x00053b29) video_down_crop_pane

0x6d2b,	// (0x00053c1b) video_down_pane_ParamLimits

0x6d2b,	// (0x00053c1b) video_down_pane

0x23a4,	// (0x0004f294) video_down_subqcif_pane_ParamLimits

0x23a4,	// (0x0004f294) video_down_subqcif_pane

0x23be,	// (0x0004f2ae) video_down_subqcif_pane_cp_ParamLimits

0x23be,	// (0x0004f2ae) video_down_subqcif_pane_cp

0x23e6,	// (0x0004f2d6) im_reading_pane_ParamLimits

0x23e6,	// (0x0004f2d6) im_reading_pane

0x6e48,	// (0x00053d38) im_writing_pane_ParamLimits

0x6e48,	// (0x00053d38) im_writing_pane

0x6e66,	// (0x00053d56) im_reading_pane_t1

0x2400,	// (0x0004f2f0) list_im_pane

0x2411,	// (0x0004f301) scroll_pane_cp07

0x6ea8,	// (0x00053d98) im_writing_pane_t1_ParamLimits

0x6ea8,	// (0x00053d98) im_writing_pane_t1

0x242a,	// (0x0004f31a) im_writing_pane_t2_ParamLimits

0x242a,	// (0x0004f31a) im_writing_pane_t2

0x0001,

0xf292,	// (0x0005c182) im_writing_pane_t_ParamLimits

0xf292,	// (0x0005c182) im_writing_pane_t

0x1e1e,	// (0x0004ed0e) input_focus_pane_cp04

0x1e1e,	// (0x0004ed0e) input_focus_pane_cp05

0x6eba,	// (0x00053daa) list_im_single_pane_ParamLimits

0x6eba,	// (0x00053daa) list_im_single_pane

0x6ed3,	// (0x00053dc3) list_single_im_pane_t1

0x8a79,	// (0x00055969) blid_accuracy_pane

0x8a81,	// (0x00055971) blid_compass_pane

0x8a8b,	// (0x0005597b) main_location_t1

0x8a99,	// (0x00055989) main_location_t2

0x8aa7,	// (0x00055997) main_location_t3

0x0002,

0xf5f9,	// (0x0005c4e9) main_location_t

0x1e1e,	// (0x0004ed0e) aid_levels_location

0x21a1,	// (0x0004f091) blid_accuracy_pane_g1

0x21a1,	// (0x0004f091) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0005c1e4) blid_accuracy_pane_g

0x2472,	// (0x0004f362) wml_content_pane

0x24b0,	// (0x0004f3a0) wml_button_pane_ParamLimits

0x24b0,	// (0x0004f3a0) wml_button_pane

0x6ee2,	// (0x00053dd2) wml_list_single_large_pane_ParamLimits

0x6ee2,	// (0x00053dd2) wml_list_single_large_pane

0x6f04,	// (0x00053df4) wml_list_single_medium_pane_ParamLimits

0x6f04,	// (0x00053df4) wml_list_single_medium_pane

0x6f27,	// (0x00053e17) wml_list_single_small_pane_ParamLimits

0x6f27,	// (0x00053e17) wml_list_single_small_pane

0x24c4,	// (0x0004f3b4) wml_selection_box_pane_ParamLimits

0x24c4,	// (0x0004f3b4) wml_selection_box_pane

0x24d7,	// (0x0004f3c7) wml_list_single_pane_t1

0x24e6,	// (0x0004f3d6) wml_list_single_medium_pane_t1

0x24f5,	// (0x0004f3e5) wml_list_single_large_pane_t1

0x2504,	// (0x0004f3f4) input_focus_pane_cp02_ParamLimits

0x2504,	// (0x0004f3f4) input_focus_pane_cp02

0x2517,	// (0x0004f407) wml_selection_box_pane_g1

0x2520,	// (0x0004f410) wml_selection_box_pane_t1_ParamLimits

0x2520,	// (0x0004f410) wml_selection_box_pane_t1

0x2079,	// (0x0004ef69) bg_wml_button_pane_ParamLimits

0x2079,	// (0x0004ef69) bg_wml_button_pane

0x2538,	// (0x0004f428) wml_button_pane_g1

0x2540,	// (0x0004f430) wml_button_pane_t1

0x2538,	// (0x0004f428) wml_button_bg_pane_g1

0x2550,	// (0x0004f440) wml_button_bg_pane_g2

0x2558,	// (0x0004f448) wml_button_bg_pane_g3

0x2560,	// (0x0004f450) wml_button_bg_pane_g4

0x2568,	// (0x0004f458) wml_button_bg_pane_g5

0x2570,	// (0x0004f460) wml_button_bg_pane_g6

0x2578,	// (0x0004f468) wml_button_bg_pane_g7

0x2580,	// (0x0004f470) wml_button_bg_pane_g8

0x2588,	// (0x0004f478) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0005c187) wml_button_bg_pane_g

0x6f4f,	// (0x00053e3f) bg_list_pane_cp02

0x2590,	// (0x0004f480) mce_header_pane_ParamLimits

0x2590,	// (0x0004f480) mce_header_pane

0x25a6,	// (0x0004f496) mce_icon_pane

0x25a6,	// (0x0004f496) mce_image_pane

0x25af,	// (0x0004f49f) mce_text_pane_ParamLimits

0x25af,	// (0x0004f49f) mce_text_pane

0x6f59,	// (0x00053e49) scroll_pane_cp03

0x24a8,	// (0x0004f398) scroll_pane_cp04

0x25c2,	// (0x0004f4b2) scroll_pane_cp05_ParamLimits

0x25c2,	// (0x0004f4b2) scroll_pane_cp05

0x6f63,	// (0x00053e53) mce_header_field_pane_ParamLimits

0x6f63,	// (0x00053e53) mce_header_field_pane

0x6f85,	// (0x00053e75) mce_header_field_pane_2_ParamLimits

0x6f85,	// (0x00053e75) mce_header_field_pane_2

0x6f9b,	// (0x00053e8b) mce_header_field_pane_3

0x6fa3,	// (0x00053e93) list_single_mce_message_pane_ParamLimits

0x6fa3,	// (0x00053e93) list_single_mce_message_pane

0x6fbc,	// (0x00053eac) list_single_mce_smart_pane_ParamLimits

0x6fbc,	// (0x00053eac) list_single_mce_smart_pane

0x25ce,	// (0x0004f4be) input_focus_pane_cp03

0x25d7,	// (0x0004f4c7) list_header_data_pane

0x6fe0,	// (0x00053ed0) mce_header_field_pane_t1

0x6ff0,	// (0x00053ee0) list_single_mce_header_pane_ParamLimits

0x6ff0,	// (0x00053ee0) list_single_mce_header_pane

0x25df,	// (0x0004f4cf) list_single_mce_header_pane_t1

0x25ee,	// (0x0004f4de) list_single_mce_message_pane_g1

0x25f6,	// (0x0004f4e6) list_single_mce_message_pane_t1

0x7026,	// (0x00053f16) bg_cale_heading_pane_cp01_ParamLimits

0x7026,	// (0x00053f16) bg_cale_heading_pane_cp01

0x2604,	// (0x0004f4f4) bg_cale_pane_cp02_ParamLimits

0x2604,	// (0x0004f4f4) bg_cale_pane_cp02

0x7059,	// (0x00053f49) cale_month_corner_pane

0x706f,	// (0x00053f5f) cale_month_day_heading_pane_ParamLimits

0x706f,	// (0x00053f5f) cale_month_day_heading_pane

0x70b2,	// (0x00053fa2) cale_month_pane_g1_ParamLimits

0x70b2,	// (0x00053fa2) cale_month_pane_g1

0x70de,	// (0x00053fce) cale_month_pane_g2_ParamLimits

0x70de,	// (0x00053fce) cale_month_pane_g2

0x7101,	// (0x00053ff1) cale_month_pane_g3_ParamLimits

0x7101,	// (0x00053ff1) cale_month_pane_g3

0x713d,	// (0x0005402d) cale_month_pane_g4_ParamLimits

0x713d,	// (0x0005402d) cale_month_pane_g4

0x7179,	// (0x00054069) cale_month_pane_g5_ParamLimits

0x7179,	// (0x00054069) cale_month_pane_g5

0x71b5,	// (0x000540a5) cale_month_pane_g6_ParamLimits

0x71b5,	// (0x000540a5) cale_month_pane_g6

0x7201,	// (0x000540f1) cale_month_pane_g7_ParamLimits

0x7201,	// (0x000540f1) cale_month_pane_g7

0x724d,	// (0x0005413d) cale_month_pane_g8_ParamLimits

0x724d,	// (0x0005413d) cale_month_pane_g8

0x7299,	// (0x00054189) cale_month_pane_g9_ParamLimits

0x7299,	// (0x00054189) cale_month_pane_g9

0x72d3,	// (0x000541c3) cale_month_pane_g10_ParamLimits

0x72d3,	// (0x000541c3) cale_month_pane_g10

0x730d,	// (0x000541fd) cale_month_pane_g11_ParamLimits

0x730d,	// (0x000541fd) cale_month_pane_g11

0x7347,	// (0x00054237) cale_month_pane_g12_ParamLimits

0x7347,	// (0x00054237) cale_month_pane_g12

0x7385,	// (0x00054275) cale_month_pane_g13_ParamLimits

0x7385,	// (0x00054275) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0005c19a) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0005c19a) cale_month_pane_g

0x73c3,	// (0x000542b3) cale_month_week_pane

0x73d6,	// (0x000542c6) grid_cale_month_pane_ParamLimits

0x73d6,	// (0x000542c6) grid_cale_month_pane

0x7414,	// (0x00054304) cale_month_day_heading_pane_t1

0x7472,	// (0x00054362) cale_month_day_heading_pane_t2

0x74d7,	// (0x000543c7) cale_month_day_heading_pane_t3

0x753c,	// (0x0005442c) cale_month_day_heading_pane_t4

0x75a1,	// (0x00054491) cale_month_day_heading_pane_t5

0x760e,	// (0x000544fe) cale_month_day_heading_pane_t6

0x7683,	// (0x00054573) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0005c1b5) cale_month_day_heading_pane_t

0x229e,	// (0x0004f18e) bg_cale_side_pane_cp01

0x76f8,	// (0x000545e8) cale_month_week_pane_t1

0x770f,	// (0x000545ff) cale_month_week_pane_t2

0x7726,	// (0x00054616) cale_month_week_pane_t3

0x773d,	// (0x0005462d) cale_month_week_pane_t4

0x7754,	// (0x00054644) cale_month_week_pane_t5

0x776b,	// (0x0005465b) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0005c1c4) cale_month_week_pane_t

0x7782,	// (0x00054672) cell_cale_month_pane_ParamLimits

0x7782,	// (0x00054672) cell_cale_month_pane

0x7850,	// (0x00054740) cell_cale_month_pane_g1

0x785c,	// (0x0005474c) cell_cale_month_pane_t1_ParamLimits

0x785c,	// (0x0005474c) cell_cale_month_pane_t1

0x22ac,	// (0x0004f19c) grid_highlight_pane_cp08

0x21a1,	// (0x0004f091) main_smil_g1

0x7878,	// (0x00054768) smil_status_pane

0x2639,	// (0x0004f529) smil_text_pane

0x3e12,	// (0x00050d02) bg_popup_call3_rect_pane_g8

0x3e1a,	// (0x00050d0a) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0005c47d) bg_popup_call3_rect_pane_g

0x40c2,	// (0x00050fb2) smil_status_volume_pane_g1

0x2643,	// (0x0004f533) smil_status_pane_t1

0x8e5a,	// (0x00055d4a) volume_smil_pane

0x265a,	// (0x0004f54a) list_smil_text_pane

0x788b,	// (0x0005477b) scroll_pane_cp011

0x7896,	// (0x00054786) smil_text_list_pane_t1_ParamLimits

0x7896,	// (0x00054786) smil_text_list_pane_t1

0x78ea,	// (0x000547da) aid_volume_smil_ParamLimits

0x78ea,	// (0x000547da) aid_volume_smil

0x21a1,	// (0x0004f091) smil_volume_pane_g1

0x21a1,	// (0x0004f091) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0005c1e4) smil_volume_pane_g

0x214c,	// (0x0004f03c) listscroll_cale_day_pane

0x2664,	// (0x0004f554) bg_cale_pane

0x267c,	// (0x0004f56c) list_cale_pane

0x268d,	// (0x0004f57d) scroll_pane_cp09

0x269e,	// (0x0004f58e) cale_bg_pane_g1

0x26a6,	// (0x0004f596) cale_bg_pane_g2

0x26ae,	// (0x0004f59e) cale_bg_pane_g3

0x26b6,	// (0x0004f5a6) cale_bg_pane_g4

0x26be,	// (0x0004f5ae) cale_bg_pane_g5

0x26c6,	// (0x0004f5b6) cale_bg_pane_g6

0x26ce,	// (0x0004f5be) cale_bg_pane_g7

0x26d6,	// (0x0004f5c6) cale_bg_pane_g8

0x26de,	// (0x0004f5ce) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0005c1e9) cale_bg_pane_g

0x790c,	// (0x000547fc) list_cale_time_pane_ParamLimits

0x790c,	// (0x000547fc) list_cale_time_pane

0x7921,	// (0x00054811) list_cale_time_pane_g1_ParamLimits

0x7921,	// (0x00054811) list_cale_time_pane_g1

0x26e6,	// (0x0004f5d6) list_cale_time_pane_g2_ParamLimits

0x26e6,	// (0x0004f5d6) list_cale_time_pane_g2

0x792d,	// (0x0005481d) list_cale_time_pane_g3_ParamLimits

0x792d,	// (0x0005481d) list_cale_time_pane_g3

0x793b,	// (0x0005482b) list_cale_time_pane_g4_ParamLimits

0x793b,	// (0x0005482b) list_cale_time_pane_g4

0x7949,	// (0x00054839) list_cale_time_pane_g5_ParamLimits

0x7949,	// (0x00054839) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0005c1fc) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0005c1fc) list_cale_time_pane_g

0x7957,	// (0x00054847) list_cale_time_pane_t1_ParamLimits

0x7957,	// (0x00054847) list_cale_time_pane_t1

0x797f,	// (0x0005486f) list_cale_time_pane_t2_ParamLimits

0x797f,	// (0x0005486f) list_cale_time_pane_t2

0x7d13,	// (0x00054c03) aid_blid_cardinal_pane

0x7d55,	// (0x00054c45) compass_pane_t4

0x79a7,	// (0x00054897) list_cale_time_pane_t4_ParamLimits

0x79a7,	// (0x00054897) list_cale_time_pane_t4

0x7d63,	// (0x00054c53) compass_pane_t5

0x7d73,	// (0x00054c63) compass_pane_t6

0x7d81,	// (0x00054c71) compass_pane_t7

0x2ae6,	// (0x0004f9d6) navi_pane_cc_t1

0x2c3b,	// (0x0004fb2b) aid_phob_thumbnail_center_pane

0x8575,	// (0x00055465) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0005c209) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0005c209) list_cale_time_pane_t

0x0392,	// (0x0004d282) bg_popup_window_pane_cp02_ParamLimits

0x0392,	// (0x0004d282) bg_popup_window_pane_cp02

0x2700,	// (0x0004f5f0) heading_pane_cp01_ParamLimits

0x2700,	// (0x0004f5f0) heading_pane_cp01

0x270c,	// (0x0004f5fc) loc_req_pane_ParamLimits

0x270c,	// (0x0004f5fc) loc_req_pane

0x271c,	// (0x0004f60c) loc_type_pane_ParamLimits

0x271c,	// (0x0004f60c) loc_type_pane

0x272e,	// (0x0004f61e) loc_type_pane_t1_ParamLimits

0x272e,	// (0x0004f61e) loc_type_pane_t1

0x2740,	// (0x0004f630) loc_type_pane_t2_ParamLimits

0x2740,	// (0x0004f630) loc_type_pane_t2

0x2752,	// (0x0004f642) loc_type_pane_t3_ParamLimits

0x2752,	// (0x0004f642) loc_type_pane_t3

0x0002,

0xf320,	// (0x0005c210) loc_type_pane_t_ParamLimits

0xf320,	// (0x0005c210) loc_type_pane_t

0x2764,	// (0x0004f654) list_loc_req_pane

0x276e,	// (0x0004f65e) scroll_pane_cp012

0x79cf,	// (0x000548bf) list_single_loc_request_popup_menu_pane_ParamLimits

0x79cf,	// (0x000548bf) list_single_loc_request_popup_menu_pane

0x2779,	// (0x0004f669) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2779,	// (0x0004f669) list_single_loc_request_popup_menu_pane_g1

0x2785,	// (0x0004f675) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2785,	// (0x0004f675) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0005c217) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0005c217) list_single_loc_request_popup_menu_pane_g

0x2791,	// (0x0004f681) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2791,	// (0x0004f681) list_single_loc_request_popup_menu_pane_t1

0x79e1,	// (0x000548d1) bg_popup_window_pane_cp03_ParamLimits

0x79e1,	// (0x000548d1) bg_popup_window_pane_cp03

0x79ef,	// (0x000548df) heading_loc_req_pane_ParamLimits

0x79ef,	// (0x000548df) heading_loc_req_pane

0x79fb,	// (0x000548eb) popup_dyc_status_message_window_g1_ParamLimits

0x79fb,	// (0x000548eb) popup_dyc_status_message_window_g1

0x7a07,	// (0x000548f7) popup_dyc_status_message_window_t1_ParamLimits

0x7a07,	// (0x000548f7) popup_dyc_status_message_window_t1

0x7a19,	// (0x00054909) popup_dyc_status_message_window_t2_ParamLimits

0x7a19,	// (0x00054909) popup_dyc_status_message_window_t2

0x7a2b,	// (0x0005491b) popup_dyc_status_message_window_t3_ParamLimits

0x7a2b,	// (0x0005491b) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0005c21c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0005c21c) popup_dyc_status_message_window_t

0x1e1e,	// (0x0004ed0e) bg_heading_pane_cp01

0x27a7,	// (0x0004f697) heading_loc_req_pane_g1

0x27af,	// (0x0004f69f) heading_loc_req_pane_g2

0x27b7,	// (0x0004f6a7) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0005c223) heading_loc_req_pane_g

0x27bf,	// (0x0004f6af) heading_loc_req_pane_t1

0x27cf,	// (0x0004f6bf) bg_popup_sub_pane_cp01_ParamLimits

0x27cf,	// (0x0004f6bf) bg_popup_sub_pane_cp01

0x27dd,	// (0x0004f6cd) popup_cale_events_window_g1_ParamLimits

0x27dd,	// (0x0004f6cd) popup_cale_events_window_g1

0x27fd,	// (0x0004f6ed) popup_cale_events_window_g2_ParamLimits

0x27fd,	// (0x0004f6ed) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0005c257) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0005c257) popup_cale_events_window_g

0x281d,	// (0x0004f70d) popup_cale_events_window_t1_ParamLimits

0x281d,	// (0x0004f70d) popup_cale_events_window_t1

0x282f,	// (0x0004f71f) popup_cale_events_window_t2_ParamLimits

0x282f,	// (0x0004f71f) popup_cale_events_window_t2

0x286d,	// (0x0004f75d) popup_cale_events_window_t3_ParamLimits

0x286d,	// (0x0004f75d) popup_cale_events_window_t3

0x28a7,	// (0x0004f797) popup_cale_events_window_t4_ParamLimits

0x28a7,	// (0x0004f797) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0005c25c) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0005c25c) popup_cale_events_window_t

0x7aaf,	// (0x0005499f) call_type_pane

0x2c53,	// (0x0004fb43) popup_call_status_window_g1

0x7abb,	// (0x000549ab) popup_call_status_window_g2

0x7ac7,	// (0x000549b7) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0005c265) popup_call_status_window_g

0x28dd,	// (0x0004f7cd) call_type_pane_g1

0x28e6,	// (0x0004f7d6) call_type_pane_g2

0x0001,

0xf37c,	// (0x0005c26c) call_type_pane_g

0x1e1e,	// (0x0004ed0e) bg_popup_sub_pane_cp02

0x28ef,	// (0x0004f7df) listscroll_popup_wml_pane

0x28f7,	// (0x0004f7e7) list_wml_pane

0x2901,	// (0x0004f7f1) scroll_pane_cp013

0x290c,	// (0x0004f7fc) list_single_graphic_popup_wml_pane_ParamLimits

0x290c,	// (0x0004f7fc) list_single_graphic_popup_wml_pane

0x21a1,	// (0x0004f091) list_single_graphic_popup_wml_pane_g1

0x2920,	// (0x0004f810) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0005c271) list_single_graphic_popup_wml_pane_g

0x2928,	// (0x0004f818) list_single_graphic_popup_wml_pane_t1

0x2936,	// (0x0004f826) aid_call_pane

0x2071,	// (0x0004ef61) popup_clock_analogue_window_g1

0x2071,	// (0x0004ef61) popup_clock_analogue_window_g2

0x7ad3,	// (0x000549c3) popup_clock_analogue_window_g3

0x7ad3,	// (0x000549c3) popup_clock_analogue_window_g4

0x21a1,	// (0x0004f091) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0005c276) popup_clock_analogue_window_g

0x7adb,	// (0x000549cb) popup_clock_analogue_window_t1

0x7ae9,	// (0x000549d9) clock_digital_number_pane_ParamLimits

0x7ae9,	// (0x000549d9) clock_digital_number_pane

0x7af5,	// (0x000549e5) clock_digital_number_pane_cp02_ParamLimits

0x7af5,	// (0x000549e5) clock_digital_number_pane_cp02

0x7b01,	// (0x000549f1) clock_digital_number_pane_cp03_ParamLimits

0x7b01,	// (0x000549f1) clock_digital_number_pane_cp03

0x7b0d,	// (0x000549fd) clock_digital_number_pane_cp04_ParamLimits

0x7b0d,	// (0x000549fd) clock_digital_number_pane_cp04

0x7b19,	// (0x00054a09) clock_digital_separator_pane_ParamLimits

0x7b19,	// (0x00054a09) clock_digital_separator_pane

0x7b25,	// (0x00054a15) popup_clock_digital_window_t1

0x21a1,	// (0x0004f091) clock_digital_number_pane_g1

0x21a1,	// (0x0004f091) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0005c1e4) clock_digital_number_pane_g

0x21a1,	// (0x0004f091) clock_digital_separator_pane_g1

0x21a1,	// (0x0004f091) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0005c1e4) clock_digital_separator_pane_g

0x1e1e,	// (0x0004ed0e) bg_popup_window_pane_cp04

0x2946,	// (0x0004f836) heading_pane_cp03

0x294e,	// (0x0004f83e) listscroll_popup_gms_pane

0x2956,	// (0x0004f846) grid_large_graphic_popup_pane

0x2960,	// (0x0004f850) listscroll_popup_gms_pane_g1

0x2968,	// (0x0004f858) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0005c281) listscroll_popup_gms_pane_g

0x24a8,	// (0x0004f398) scroll_pane_cp014

0x7b42,	// (0x00054a32) cell_large_graphic_popup_pane_ParamLimits

0x7b42,	// (0x00054a32) cell_large_graphic_popup_pane

0x7b5c,	// (0x00054a4c) cell_large_graphic_popup_pane_g1_ParamLimits

0x7b5c,	// (0x00054a4c) cell_large_graphic_popup_pane_g1

0x2970,	// (0x0004f860) cell_large_graphic_popup_pane_g2_ParamLimits

0x2970,	// (0x0004f860) cell_large_graphic_popup_pane_g2

0x297c,	// (0x0004f86c) cell_large_graphic_popup_pane_g3_ParamLimits

0x297c,	// (0x0004f86c) cell_large_graphic_popup_pane_g3

0x2989,	// (0x0004f879) cell_large_graphic_popup_pane_g4_ParamLimits

0x2989,	// (0x0004f879) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0005c286) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0005c286) cell_large_graphic_popup_pane_g

0x2999,	// (0x0004f889) grid_highlight_pane_cp010

0x21a1,	// (0x0004f091) bg_popup_call_pane_g1

0x29a3,	// (0x0004f893) list_single_graphic_popup_conf_pane_ParamLimits

0x29a3,	// (0x0004f893) list_single_graphic_popup_conf_pane

0x29b5,	// (0x0004f8a5) list_highlight_pane_cp01

0x29be,	// (0x0004f8ae) list_single_graphic_popup_conf_pane_g1

0x29c6,	// (0x0004f8b6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0005c28f) list_single_graphic_popup_conf_pane_g

0x29ce,	// (0x0004f8be) list_single_graphic_popup_conf_pane_t1

0x29dc,	// (0x0004f8cc) linegrid_cams_pane_g1

0x7b68,	// (0x00054a58) linegrid_cams_pane_g2

0x22df,	// (0x0004f1cf) linegrid_cams_pane_g3

0x29e5,	// (0x0004f8d5) linegrid_cams_pane_g4

0x7b71,	// (0x00054a61) linegrid_cams_pane_g5

0x7b7a,	// (0x00054a6a) linegrid_cams_pane_g6

0x22e8,	// (0x0004f1d8) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0005c294) linegrid_cams_pane_g

0x29ee,	// (0x0004f8de) popup_clock_analogue_window

0x29ee,	// (0x0004f8de) popup_clock_digital_window

0x1e1e,	// (0x0004ed0e) popup_phob_thumbnail_window

0x21a1,	// (0x0004f091) call_video_uplink_pane_g1

0x29f7,	// (0x0004f8e7) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0005c2a3) call_video_uplink_pane_g

0x29ff,	// (0x0004f8ef) video_uplink_pane

0x2a07,	// (0x0004f8f7) mce_image_pane_g1

0x7b85,	// (0x00054a75) mce_image_pane_g2

0x7b8f,	// (0x00054a7f) mce_image_pane_g3

0x7b99,	// (0x00054a89) mce_image_pane_g4

0x7ba1,	// (0x00054a91) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0005c2a8) mce_image_pane_g

0x2a11,	// (0x0004f901) control_top_pane_stacon_cp01_ParamLimits

0x2a11,	// (0x0004f901) control_top_pane_stacon_cp01

0x2a25,	// (0x0004f915) uni_indicator_pane_stacon_cp01_ParamLimits

0x2a25,	// (0x0004f915) uni_indicator_pane_stacon_cp01

0x2a36,	// (0x0004f926) bg_popup_sub_pane_cp03

0x7ba9,	// (0x00054a99) chi_dic_find_pane

0x7bb1,	// (0x00054aa1) listscroll_chi_dic_pane

0x7bba,	// (0x00054aaa) main_pane_chidic_g1

0x7bcd,	// (0x00054abd) chi_dic_find_pane_t1

0x2a40,	// (0x0004f930) find_chidic_pane

0x2a49,	// (0x0004f939) chi_dic_list_pane_ParamLimits

0x2a49,	// (0x0004f939) chi_dic_list_pane

0x2a5a,	// (0x0004f94a) scroll_pane_cp020

0x7bdb,	// (0x00054acb) find_chidic_pane_t1

0x1e1e,	// (0x0004ed0e) input_focus_pane_cp06

0x7bea,	// (0x00054ada) list_chi_dic_pane_ParamLimits

0x7bea,	// (0x00054ada) list_chi_dic_pane

0x7bff,	// (0x00054aef) list_chi_dic_pane_t1_ParamLimits

0x7bff,	// (0x00054aef) list_chi_dic_pane_t1

0x1e1e,	// (0x0004ed0e) list_highlight_pane_cp020

0x2a62,	// (0x0004f952) bg_cale_heading_pane_g1

0x7c12,	// (0x00054b02) bg_cale_heading_pane_g2

0x7c1a,	// (0x00054b0a) bg_cale_heading_pane_g3

0x7c22,	// (0x00054b12) bg_cale_heading_pane_g4

0x7c2c,	// (0x00054b1c) bg_cale_heading_pane_g5

0x7c36,	// (0x00054b26) bg_cale_heading_pane_g6

0x7c3e,	// (0x00054b2e) bg_cale_heading_pane_g7

0x7c46,	// (0x00054b36) bg_cale_heading_pane_g8

0x7c50,	// (0x00054b40) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0005c2b3) bg_cale_heading_pane_g

0x2a62,	// (0x0004f952) bg_cale_side_pane_g1

0x7c5a,	// (0x00054b4a) bg_cale_side_pane_g2

0x7c64,	// (0x00054b54) bg_cale_side_pane_g3

0x7c6e,	// (0x00054b5e) bg_cale_side_pane_g4

0x7c78,	// (0x00054b68) bg_cale_side_pane_g5

0x7c82,	// (0x00054b72) bg_cale_side_pane_g6

0x7c8c,	// (0x00054b7c) bg_cale_side_pane_g7

0x7c96,	// (0x00054b86) bg_cale_side_pane_g8

0x7c9e,	// (0x00054b8e) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0005c2c6) bg_cale_side_pane_g

0x7ca6,	// (0x00054b96) popup_call_status_window_ParamLimits

0x7ca6,	// (0x00054b96) popup_call_status_window

0x2a6a,	// (0x0004f95a) stacon_top_pane

0x2a72,	// (0x0004f962) status_pane_ParamLimits

0x2a72,	// (0x0004f962) status_pane

0x2a87,	// (0x0004f977) status_small_pane

0x2a8f,	// (0x0004f97f) control_pane

0x1e1e,	// (0x0004ed0e) stacon_bottom_pane

0x2a97,	// (0x0004f987) list_single_mce_smart_pane_t1_ParamLimits

0x2a97,	// (0x0004f987) list_single_mce_smart_pane_t1

0x2aaa,	// (0x0004f99a) list_single_mce_smart_pane_t2_ParamLimits

0x2aaa,	// (0x0004f99a) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0005c2d9) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0005c2d9) list_single_mce_smart_pane_t

0x7cb2,	// (0x00054ba2) compass_pane

0x7cbd,	// (0x00054bad) main_location2_pane_t1

0x7cd3,	// (0x00054bc3) main_location2_pane_t2

0x7ce9,	// (0x00054bd9) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0005c2de) main_location2_pane_t

0x2ac9,	// (0x0004f9b9) compass_pane_g1_ParamLimits

0x2ac9,	// (0x0004f9b9) compass_pane_g1

0x7d37,	// (0x00054c27) compass_pane_t1

0x7d46,	// (0x00054c36) compass_pane_t2

0x0005,

0xf3f7,	// (0x0005c2e7) compass_pane_t

0x7d91,	// (0x00054c81) text_secondary_cp61

0x2add,	// (0x0004f9cd) navi_pane_cams_g5

0x2b00,	// (0x0004f9f0) navi_pane_im_t1

0x2b0e,	// (0x0004f9fe) navi_pane_mp_g1_ParamLimits

0x2b0e,	// (0x0004f9fe) navi_pane_mp_g1

0x2b22,	// (0x0004fa12) navi_pane_mp_g2_ParamLimits

0x2b22,	// (0x0004fa12) navi_pane_mp_g2

0x2b2e,	// (0x0004fa1e) navi_pane_mp_g3_ParamLimits

0x2b2e,	// (0x0004fa1e) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0005c2fb) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0005c2fb) navi_pane_mp_g

0x2b3a,	// (0x0004fa2a) navi_pane_mp_t1

0x2b48,	// (0x0004fa38) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0005c302) navi_pane_mp_t

0x2b84,	// (0x0004fa74) navi_pane_vt_g1

0x2b3a,	// (0x0004fa2a) navi_pane_vt_t1

0x2b8c,	// (0x0004fa7c) navi_slider_pane

0x2b94,	// (0x0004fa84) zooming_pane

0x2b9c,	// (0x0004fa8c) navi_slider_pane_g1

0x7ebe,	// (0x00054dae) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0005c309) navi_slider_pane_g

0x2bc0,	// (0x0004fab0) aid_levels_zoom

0x2bc8,	// (0x0004fab8) zooming_pane_g1

0x2bd0,	// (0x0004fac0) zooming_pane_g2

0x2bd0,	// (0x0004fac0) zooming_pane_g3

0x0002,

0xf428,	// (0x0005c318) zooming_pane_g

0x2bd8,	// (0x0004fac8) level_10_zoom

0x2be1,	// (0x0004fad1) level_11_zoom

0x2bea,	// (0x0004fada) level_1_zoom

0x2bf3,	// (0x0004fae3) level_2_zoom

0x2bfc,	// (0x0004faec) level_3_zoom

0x2c05,	// (0x0004faf5) level_4_zoom

0x2c0e,	// (0x0004fafe) level_5_zoom

0x2c17,	// (0x0004fb07) level_6_zoom

0x2c20,	// (0x0004fb10) level_7_zoom

0x2c29,	// (0x0004fb19) level_8_zoom

0x2c32,	// (0x0004fb22) level_9_zoom

0x2c43,	// (0x0004fb33) popup_phob_thumbnail_window_g1

0x2c4b,	// (0x0004fb3b) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0005c31f) popup_phob_thumbnail_window_g

0x3f78,	// (0x00050e68) level_1_location

0x3f80,	// (0x00050e70) level_2_location

0x3f88,	// (0x00050e78) level_3_location

0x3f90,	// (0x00050e80) level_4_location

0x2b94,	// (0x0004fa84) level_5_location

0x7ed0,	// (0x00054dc0) mce_icon_pane_g1

0x7ed8,	// (0x00054dc8) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0005c324) mce_icon_pane_g

0x7ee0,	// (0x00054dd0) main_mup_pane_g1_ParamLimits

0x7ee0,	// (0x00054dd0) main_mup_pane_g1

0x7ef8,	// (0x00054de8) main_mup_pane_g2_ParamLimits

0x7ef8,	// (0x00054de8) main_mup_pane_g2

0x7f14,	// (0x00054e04) main_mup_pane_g3_ParamLimits

0x7f14,	// (0x00054e04) main_mup_pane_g3

0x7f30,	// (0x00054e20) main_mup_pane_g4_ParamLimits

0x7f30,	// (0x00054e20) main_mup_pane_g4

0x7f44,	// (0x00054e34) main_mup_pane_g5_ParamLimits

0x7f44,	// (0x00054e34) main_mup_pane_g5

0x7f65,	// (0x00054e55) main_mup_pane_g6_ParamLimits

0x7f65,	// (0x00054e55) main_mup_pane_g6

0x7f85,	// (0x00054e75) main_mup_pane_g7_ParamLimits

0x7f85,	// (0x00054e75) main_mup_pane_g7

0x7fa9,	// (0x00054e99) main_mup_pane_g8_ParamLimits

0x7fa9,	// (0x00054e99) main_mup_pane_g8

0x7fcd,	// (0x00054ebd) main_mup_pane_g9_ParamLimits

0x7fcd,	// (0x00054ebd) main_mup_pane_g9

0x7ff0,	// (0x00054ee0) main_mup_pane_g10_ParamLimits

0x7ff0,	// (0x00054ee0) main_mup_pane_g10

0x8013,	// (0x00054f03) main_mup_pane_g11_ParamLimits

0x8013,	// (0x00054f03) main_mup_pane_g11

0x8033,	// (0x00054f23) main_mup_pane_g12_ParamLimits

0x8033,	// (0x00054f23) main_mup_pane_g12

0x8041,	// (0x00054f31) main_mup_pane_g13_ParamLimits

0x8041,	// (0x00054f31) main_mup_pane_g13

0x000c,

0xf439,	// (0x0005c329) main_mup_pane_g_ParamLimits

0xf439,	// (0x0005c329) main_mup_pane_g

0x8057,	// (0x00054f47) main_mup_pane_t1_ParamLimits

0x8057,	// (0x00054f47) main_mup_pane_t1

0x8076,	// (0x00054f66) main_mup_pane_t2_ParamLimits

0x8076,	// (0x00054f66) main_mup_pane_t2

0x8090,	// (0x00054f80) main_mup_pane_t3_ParamLimits

0x8090,	// (0x00054f80) main_mup_pane_t3

0x80aa,	// (0x00054f9a) main_mup_pane_t4_ParamLimits

0x80aa,	// (0x00054f9a) main_mup_pane_t4

0x80bc,	// (0x00054fac) main_mup_pane_t5_ParamLimits

0x80bc,	// (0x00054fac) main_mup_pane_t5

0x80ce,	// (0x00054fbe) main_mup_pane_t6_ParamLimits

0x80ce,	// (0x00054fbe) main_mup_pane_t6

0x0005,

0xf454,	// (0x0005c344) main_mup_pane_t_ParamLimits

0xf454,	// (0x0005c344) main_mup_pane_t

0x80e4,	// (0x00054fd4) mup_progress_pane_ParamLimits

0x80e4,	// (0x00054fd4) mup_progress_pane

0x80f0,	// (0x00054fe0) mup_visualizer_pane_ParamLimits

0x80f0,	// (0x00054fe0) mup_visualizer_pane

0x812a,	// (0x0005501a) mup_volume_pane_ParamLimits

0x812a,	// (0x0005501a) mup_volume_pane

0x2c53,	// (0x0004fb43) mup_visualizer_pane_g1_ParamLimits

0x2c53,	// (0x0004fb43) mup_visualizer_pane_g1

0x2c53,	// (0x0004fb43) mup_visualizer_pane_g2_ParamLimits

0x2c53,	// (0x0004fb43) mup_visualizer_pane_g2

0x2ac9,	// (0x0004f9b9) mup_visualizer_pane_g3_ParamLimits

0x2ac9,	// (0x0004f9b9) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0005c351) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0005c351) mup_visualizer_pane_g

0x21a1,	// (0x0004f091) mup_volume_pane_g1

0x2c69,	// (0x0004fb59) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0005c358) mup_volume_pane_g

0x21a1,	// (0x0004f091) mup_progress_pane_g1

0x2c72,	// (0x0004fb62) mup_progress_pane_g2

0x2c7b,	// (0x0004fb6b) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0005c35d) mup_progress_pane_g

0x1e1e,	// (0x0004ed0e) bg_popup_window_pane_cp05

0x2c84,	// (0x0004fb74) heading_pane_cp02_ParamLimits

0x2c84,	// (0x0004fb74) heading_pane_cp02

0x2ca0,	// (0x0004fb90) list_popup_blid_pane

0x2ca8,	// (0x0004fb98) list_blid_sat_info_pane_ParamLimits

0x2ca8,	// (0x0004fb98) list_blid_sat_info_pane

0x2cbb,	// (0x0004fbab) list_blid_sat_info_pane_g1

0x2cc3,	// (0x0004fbb3) list_blid_sat_info_pane_t1

0x8249,	// (0x00055139) mup_equalizer_pane_ParamLimits

0x8249,	// (0x00055139) mup_equalizer_pane

0x826a,	// (0x0005515a) mup_equalizer_pane_cp1_ParamLimits

0x826a,	// (0x0005515a) mup_equalizer_pane_cp1

0x828b,	// (0x0005517b) mup_equalizer_pane_cp2_ParamLimits

0x828b,	// (0x0005517b) mup_equalizer_pane_cp2

0x82ac,	// (0x0005519c) mup_equalizer_pane_cp3_ParamLimits

0x82ac,	// (0x0005519c) mup_equalizer_pane_cp3

0x82d1,	// (0x000551c1) mup_equalizer_pane_cp4_ParamLimits

0x82d1,	// (0x000551c1) mup_equalizer_pane_cp4

0x82f6,	// (0x000551e6) mup_equalizer_pane_cp5

0x830e,	// (0x000551fe) mup_equalizer_pane_cp6

0x8326,	// (0x00055216) mup_equalizer_pane_cp7

0x3e92,	// (0x00050d82) bg_popup_call_poc_act_pane_g9

0x3e9a,	// (0x00050d8a) bg_popup_call_poc_act_pane_g10

0x3ea2,	// (0x00050d92) bg_popup_call_poc_act_pane_g11

0x000a,

0x2079,	// (0x0004ef69) mup_scale_pane

0x21a1,	// (0x0004f091) mup_scale_pane_g1

0x2cd1,	// (0x0004fbc1) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0005c379) mup_scale_pane_g

0x2cf5,	// (0x0004fbe5) msg_data_pane

0x2cfd,	// (0x0004fbed) scroll_pane_cp017

0x8350,	// (0x00055240) bg_list_pane_cp04_ParamLimits

0x8350,	// (0x00055240) bg_list_pane_cp04

0x2d05,	// (0x0004fbf5) msg_data_pane_g1

0x8378,	// (0x00055268) msg_data_pane_g2

0x8382,	// (0x00055272) msg_data_pane_g3

0x838c,	// (0x0005527c) msg_data_pane_g4

0x8394,	// (0x00055284) msg_data_pane_g5

0x839c,	// (0x0005528c) msg_data_pane_g6

0x83a4,	// (0x00055294) msg_data_pane_g7

0x0006,

0xf498,	// (0x0005c388) msg_data_pane_g

0x83ac,	// (0x0005529c) msg_text_pane_ParamLimits

0x83ac,	// (0x0005529c) msg_text_pane

0x83d4,	// (0x000552c4) qrid_highlight_pane_cp011_ParamLimits

0x83d4,	// (0x000552c4) qrid_highlight_pane_cp011

0x1e1e,	// (0x0004ed0e) msg_body_pane

0x1e1e,	// (0x0004ed0e) msg_header_pane

0x2d16,	// (0x0004fc06) input_focus_pane_cp07

0x83f8,	// (0x000552e8) msg_header_pane_t1_ParamLimits

0x83f8,	// (0x000552e8) msg_header_pane_t1

0x840c,	// (0x000552fc) msg_header_pane_t2_ParamLimits

0x840c,	// (0x000552fc) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0005c39c) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0005c39c) msg_header_pane_t

0x2d2b,	// (0x0004fc1b) msg_body_pane_g1

0x841e,	// (0x0005530e) msg_body_pane_t1_ParamLimits

0x841e,	// (0x0005530e) msg_body_pane_t1

0x844f,	// (0x0005533f) msg_body_pane_t2_ParamLimits

0x844f,	// (0x0005533f) msg_body_pane_t2

0x8461,	// (0x00055351) msg_body_pane_t3_ParamLimits

0x8461,	// (0x00055351) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0005c3a1) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0005c3a1) msg_body_pane_t

0x84c5,	// (0x000553b5) main_viewer_pane_g1_ParamLimits

0x84c5,	// (0x000553b5) main_viewer_pane_g1

0x84d1,	// (0x000553c1) main_viewer_pane_g2_ParamLimits

0x84d1,	// (0x000553c1) main_viewer_pane_g2

0x84dd,	// (0x000553cd) main_viewer_pane_g3_ParamLimits

0x84dd,	// (0x000553cd) main_viewer_pane_g3

0x84ee,	// (0x000553de) main_viewer_pane_g4_ParamLimits

0x84ee,	// (0x000553de) main_viewer_pane_g4

0x84ff,	// (0x000553ef) main_viewer_pane_g5_ParamLimits

0x84ff,	// (0x000553ef) main_viewer_pane_g5

0x84ff,	// (0x000553ef) main_viewer_pane_g7_ParamLimits

0x84ff,	// (0x000553ef) main_viewer_pane_g7

0x8511,	// (0x00055401) main_viewer_pane_g8_ParamLimits

0x8511,	// (0x00055401) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0005c3b1) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0005c3b1) main_viewer_pane_g

0x2d33,	// (0x0004fc23) viewer_content_pane_ParamLimits

0x2d33,	// (0x0004fc23) viewer_content_pane

0x8549,	// (0x00055439) main_postcard_pane_g1_ParamLimits

0x8549,	// (0x00055439) main_postcard_pane_g1

0x8557,	// (0x00055447) main_postcard_pane_g2_ParamLimits

0x8557,	// (0x00055447) main_postcard_pane_g2

0x8565,	// (0x00055455) main_postcard_pane_g3_ParamLimits

0x8565,	// (0x00055455) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0005c3c2) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0005c3c2) main_postcard_pane_g

0x8575,	// (0x00055465) main_postcard_pane_g4

0x40af,	// (0x00050f9f) smil_status_volume_pane_g2

0x85a1,	// (0x00055491) postcard_pane_ParamLimits

0x85a1,	// (0x00055491) postcard_pane

0x2c53,	// (0x0004fb43) postcard_pane_g1_ParamLimits

0x2c53,	// (0x0004fb43) postcard_pane_g1

0x85db,	// (0x000554cb) postcard_pane_g2_ParamLimits

0x85db,	// (0x000554cb) postcard_pane_g2

0x85e7,	// (0x000554d7) postcard_pane_g3_ParamLimits

0x85e7,	// (0x000554d7) postcard_pane_g3

0x2d4f,	// (0x0004fc3f) postcard_pane_g4_ParamLimits

0x2d4f,	// (0x0004fc3f) postcard_pane_g4

0x85f3,	// (0x000554e3) postcard_pane_g5_ParamLimits

0x85f3,	// (0x000554e3) postcard_pane_g5

0x85ff,	// (0x000554ef) postcard_pane_g6_ParamLimits

0x85ff,	// (0x000554ef) postcard_pane_g6

0x2d41,	// (0x0004fc31) postcard_pane_g7_ParamLimits

0x2d41,	// (0x0004fc31) postcard_pane_g7

0x0006,

0xf4df,	// (0x0005c3cf) postcard_pane_g_ParamLimits

0xf4df,	// (0x0005c3cf) postcard_pane_g

0x860d,	// (0x000554fd) main_mp2_pane_g1_ParamLimits

0x860d,	// (0x000554fd) main_mp2_pane_g1

0x861b,	// (0x0005550b) main_mp2_pane_g2_ParamLimits

0x861b,	// (0x0005550b) main_mp2_pane_g2

0x8627,	// (0x00055517) main_mp2_pane_g3_ParamLimits

0x8627,	// (0x00055517) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0005c3de) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0005c3de) main_mp2_pane_g

0x8633,	// (0x00055523) main_mp2_pane_t1_ParamLimits

0x8633,	// (0x00055523) main_mp2_pane_t1

0x864a,	// (0x0005553a) main_mp2_pane_t2_ParamLimits

0x864a,	// (0x0005553a) main_mp2_pane_t2

0x865e,	// (0x0005554e) main_mp2_pane_t3_ParamLimits

0x865e,	// (0x0005554e) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0005c3e5) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0005c3e5) main_mp2_pane_t

0x2d5d,	// (0x0004fc4d) pec_content_pane_ParamLimits

0x2d5d,	// (0x0004fc4d) pec_content_pane

0x24a8,	// (0x0004f398) scroll_pane_cp015

0x2d6f,	// (0x0004fc5f) pec_attribute_pane_ParamLimits

0x2d6f,	// (0x0004fc5f) pec_attribute_pane

0x8670,	// (0x00055560) pec_content_pane_g1_ParamLimits

0x8670,	// (0x00055560) pec_content_pane_g1

0x2d7f,	// (0x0004fc6f) pec_content_pane_t1_ParamLimits

0x2d7f,	// (0x0004fc6f) pec_content_pane_t1

0x2d91,	// (0x0004fc81) pec_content_pane_t2_ParamLimits

0x2d91,	// (0x0004fc81) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0005c3ec) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0005c3ec) pec_content_pane_t

0x867c,	// (0x0005556c) list_single_graphic_pane_cp01_ParamLimits

0x867c,	// (0x0005556c) list_single_graphic_pane_cp01

0x2079,	// (0x0004ef69) bg_popup_sub_pane_cp04

0x2da3,	// (0x0004fc93) popup_mup_playback_window_g1

0x2daf,	// (0x0004fc9f) popup_mup_playback_window_t1

0x2dc4,	// (0x0004fcb4) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0005c3f1) popup_mup_playback_window_t

0x2dfb,	// (0x0004fceb) main_image_pane_g1_ParamLimits

0x2dfb,	// (0x0004fceb) main_image_pane_g1

0x2e3e,	// (0x0004fd2e) scroll_pane_cp018_ParamLimits

0x2e3e,	// (0x0004fd2e) scroll_pane_cp018

0x2e56,	// (0x0004fd46) scroll_pane_cp016_ParamLimits

0x2e56,	// (0x0004fd46) scroll_pane_cp016

0x870a,	// (0x000555fa) smil2_image_pane_ParamLimits

0x870a,	// (0x000555fa) smil2_image_pane

0x8740,	// (0x00055630) smil2_root_pane_ParamLimits

0x8740,	// (0x00055630) smil2_root_pane

0x876c,	// (0x0005565c) smil2_text_pane_ParamLimits

0x876c,	// (0x0005565c) smil2_text_pane

0x1e1e,	// (0x0004ed0e) bg_list_pane_cp06

0x2e92,	// (0x0004fd82) grid_radio_pane

0x1e1e,	// (0x0004ed0e) bg_popup_window_pane_cp06

0x2e9c,	// (0x0004fd8c) main_fmradio_pane_t1

0x2946,	// (0x0004f836) heading_pane_cp04

0x2eaa,	// (0x0004fd9a) main_fmradio_pane_t2

0x3eaa,	// (0x00050d9a) popup_cale_lunar_info_window_g1

0x2eb8,	// (0x0004fda8) main_fmradio_pane_t3

0x3eb2,	// (0x00050da2) popup_cale_lunar_info_window_g2

0x2ec8,	// (0x0004fdb8) main_fmradio_pane_t4

0x0001,

0x2ed6,	// (0x0004fdc6) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0005c4cc) popup_cale_lunar_info_window_g

0xf516,	// (0x0005c406) main_fmradio_pane_t

0x2ee4,	// (0x0004fdd4) wait_bar_pane_cp03

0x2eec,	// (0x0004fddc) cell_fmradio_pane_ParamLimits

0x2eec,	// (0x0004fddc) cell_fmradio_pane

0x2d41,	// (0x0004fc31) cell_fmradio_pane_g1_ParamLimits

0x2d41,	// (0x0004fc31) cell_fmradio_pane_g1

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp011

0x2f01,	// (0x0004fdf1) poc_content_pane_ParamLimits

0x2f01,	// (0x0004fdf1) poc_content_pane

0x2f13,	// (0x0004fe03) scroll_pane_cp019

0x87ac,	// (0x0005569c) popup_call_poc_act_window_ParamLimits

0x87ac,	// (0x0005569c) popup_call_poc_act_window

0x87b9,	// (0x000556a9) popup_call_poc_inact_window_ParamLimits

0x87b9,	// (0x000556a9) popup_call_poc_inact_window

0xf5b3,	// (0x0005c4a3) bg_popup_call_poc_act_pane_g

0x3e22,	// (0x00050d12) bg_popup_call_poc_inact_pane_g1

0x3e2a,	// (0x00050d1a) bg_popup_call_poc_inact_pane_g2

0x2f1b,	// (0x0004fe0b) popup_call_poc_act_window_g2

0x3e32,	// (0x00050d22) bg_popup_call_poc_inact_pane_g3

0x3e3a,	// (0x00050d2a) bg_popup_call_poc_inact_pane_g4

0x3e42,	// (0x00050d32) bg_popup_call_poc_inact_pane_g5

0x2f23,	// (0x0004fe13) popup_call_poc_act_window_t1_ParamLimits

0x2f23,	// (0x0004fe13) popup_call_poc_act_window_t1

0x2f4b,	// (0x0004fe3b) popup_call_poc_act_window_t2_ParamLimits

0x2f4b,	// (0x0004fe3b) popup_call_poc_act_window_t2

0x2f73,	// (0x0004fe63) popup_call_poc_act_window_t3_ParamLimits

0x2f73,	// (0x0004fe63) popup_call_poc_act_window_t3

0x2f9b,	// (0x0004fe8b) popup_call_poc_act_window_t4_ParamLimits

0x2f9b,	// (0x0004fe8b) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0005c411) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0005c411) popup_call_poc_act_window_t

0x3e4a,	// (0x00050d3a) bg_popup_call_poc_inact_pane_g6

0x3e52,	// (0x00050d42) bg_popup_call_poc_inact_pane_g7

0x3e5a,	// (0x00050d4a) bg_popup_call_poc_inact_pane_g8

0x2fad,	// (0x0004fe9d) popup_call_poc_inact_window_g2

0x3e62,	// (0x00050d52) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0005c490) bg_popup_call_poc_inact_pane_g

0x2fb5,	// (0x0004fea5) popup_call_poc_inact_window_t1_ParamLimits

0x2fb5,	// (0x0004fea5) popup_call_poc_inact_window_t1

0x2fca,	// (0x0004feba) popup_call_poc_inact_window_t2_ParamLimits

0x2fca,	// (0x0004feba) popup_call_poc_inact_window_t2

0x2fdf,	// (0x0004fecf) popup_call_poc_inact_window_t3_ParamLimits

0x2fdf,	// (0x0004fecf) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0005c41a) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0005c41a) popup_call_poc_inact_window_t

0x4022,	// (0x00050f12) context_pane_ParamLimits

0x8dc8,	// (0x00055cb8) signal_pane_ParamLimits

0x2b94,	// (0x0004fa84) main_call2_pane

0x4010,	// (0x00050f00) popup_phob_thumbnail2_window_ParamLimits

0x4010,	// (0x00050f00) popup_phob_thumbnail2_window

0x8473,	// (0x00055363) aid_hotspot_pointer_arrow_pane

0x847b,	// (0x0005536b) aid_hotspot_pointer_hand_pane

0x8ade,	// (0x000559ce) phob_pre_status_pane_g5

0x67ef,	// (0x000536df) cams_zoom_pane_ParamLimits

0x67fb,	// (0x000536eb) image_vga_pane_ParamLimits

0x680a,	// (0x000536fa) main_camera_pane_g1_ParamLimits

0x6818,	// (0x00053708) main_camera_pane_g2_ParamLimits

0x6824,	// (0x00053714) main_camera_pane_g3_ParamLimits

0x6832,	// (0x00053722) main_camera_pane_g4_ParamLimits

0x6840,	// (0x00053730) main_camera_pane_g5_ParamLimits

0x684e,	// (0x0005373e) main_camera_pane_g6_ParamLimits

0x685c,	// (0x0005374c) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0005c119) main_camera_pane_g_ParamLimits

0x686a,	// (0x0005375a) main_camera_pane_t1_ParamLimits

0x687c,	// (0x0005376c) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0005c12a) main_camera_pane_t_ParamLimits

0x2079,	// (0x0004ef69) bg_popup_preview_window_pane_cp01_ParamLimits

0x2079,	// (0x0004ef69) bg_popup_preview_window_pane_cp01

0x2ff4,	// (0x0004fee4) popup_phob_thumbnail2_window_g1_ParamLimits

0x2ff4,	// (0x0004fee4) popup_phob_thumbnail2_window_g1

0x1e1e,	// (0x0004ed0e) call2_cli_visual_pane

0x87d5,	// (0x000556c5) popup_call2_audio_conf_window_ParamLimits

0x87d5,	// (0x000556c5) popup_call2_audio_conf_window

0x87ee,	// (0x000556de) popup_call2_audio_first_window_ParamLimits

0x87ee,	// (0x000556de) popup_call2_audio_first_window

0x888c,	// (0x0005577c) popup_call2_audio_in_window_ParamLimits

0x888c,	// (0x0005577c) popup_call2_audio_in_window

0x88d0,	// (0x000557c0) popup_call2_audio_out_window_ParamLimits

0x88d0,	// (0x000557c0) popup_call2_audio_out_window

0x893a,	// (0x0005582a) popup_call2_audio_second_window_ParamLimits

0x893a,	// (0x0005582a) popup_call2_audio_second_window

0x8998,	// (0x00055888) popup_call2_audio_wait_window_ParamLimits

0x8998,	// (0x00055888) popup_call2_audio_wait_window

0x1e1e,	// (0x0004ed0e) bg_popup_call2_act_pane_cp03

0x205b,	// (0x0004ef4b) list_conf_pane_cp

0x3000,	// (0x0004fef0) popup_call2_audio_conf_window_t1

0x300e,	// (0x0004fefe) list_single_graphic_popup_conf2_pane_ParamLimits

0x300e,	// (0x0004fefe) list_single_graphic_popup_conf2_pane

0x29b5,	// (0x0004f8a5) list_highlight_pane_cp04

0x3021,	// (0x0004ff11) list_single_graphic_popup_conf2_pane_g1

0x29c6,	// (0x0004f8b6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0005c421) list_single_graphic_popup_conf2_pane_g

0x302b,	// (0x0004ff1b) list_single_graphic_popup_conf2_pane_t1

0x3039,	// (0x0004ff29) bg_popup_call2_act_pane_cp01_ParamLimits

0x3039,	// (0x0004ff29) bg_popup_call2_act_pane_cp01

0x30c3,	// (0x0004ffb3) call_type_pane_cp05_ParamLimits

0x30c3,	// (0x0004ffb3) call_type_pane_cp05

0x3117,	// (0x00050007) popup_call2_audio_second_window_g1_ParamLimits

0x3117,	// (0x00050007) popup_call2_audio_second_window_g1

0x316b,	// (0x0005005b) popup_call2_audio_second_window_g2_ParamLimits

0x316b,	// (0x0005005b) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0005c426) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0005c426) popup_call2_audio_second_window_g

0x31d0,	// (0x000500c0) popup_call2_audio_second_window_t1_ParamLimits

0x31d0,	// (0x000500c0) popup_call2_audio_second_window_t1

0x3297,	// (0x00050187) popup_call2_audio_second_window_t2_ParamLimits

0x3297,	// (0x00050187) popup_call2_audio_second_window_t2

0x32ea,	// (0x000501da) popup_call2_audio_second_window_t3_ParamLimits

0x32ea,	// (0x000501da) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0005c42d) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0005c42d) popup_call2_audio_second_window_t

0x1e1e,	// (0x0004ed0e) bg_popup_call2_in_pane_cp02

0x1e28,	// (0x0004ed18) call_type_pane_cp04

0x1e30,	// (0x0004ed20) popup_call2_audio_wait_window_g1

0x1e38,	// (0x0004ed28) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0005c006) popup_call2_audio_wait_window_g

0x1e40,	// (0x0004ed30) popup_call2_audio_wait_window_t3

0x33dd,	// (0x000502cd) bg_popup_call2_act_pane_ParamLimits

0x33dd,	// (0x000502cd) bg_popup_call2_act_pane

0x349d,	// (0x0005038d) call_type_pane_cp03_ParamLimits

0x349d,	// (0x0005038d) call_type_pane_cp03

0x3501,	// (0x000503f1) popup_call2_audio_first_window_g1_ParamLimits

0x3501,	// (0x000503f1) popup_call2_audio_first_window_g1

0x3571,	// (0x00050461) popup_call2_audio_first_window_g2_ParamLimits

0x3571,	// (0x00050461) popup_call2_audio_first_window_g2

0x2c53,	// (0x0004fb43) popup_call2_audio_first_window_g3_ParamLimits

0x2c53,	// (0x0004fb43) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0005c436) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0005c436) popup_call2_audio_first_window_g

0x364f,	// (0x0005053f) popup_call2_audio_first_window_t1_ParamLimits

0x364f,	// (0x0005053f) popup_call2_audio_first_window_t1

0x3752,	// (0x00050642) popup_call2_audio_first_window_t4_ParamLimits

0x3752,	// (0x00050642) popup_call2_audio_first_window_t4

0x384d,	// (0x0005073d) popup_call2_audio_first_window_t5_ParamLimits

0x384d,	// (0x0005073d) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0005c441) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0005c441) popup_call2_audio_first_window_t

0x2071,	// (0x0004ef61) bg_popup_call2_act_pane_g1

0x3ebc,	// (0x00050dac) popup_cale_lunar_info_window_t1

0x3eca,	// (0x00050dba) popup_cale_lunar_info_window_t2

0x3ed8,	// (0x00050dc8) popup_cale_lunar_info_window_t3

0x1e1e,	// (0x0004ed0e) bg_popup_call2_bubble_pane

0x394e,	// (0x0005083e) bg_popup_call2_in_pane_cp01_ParamLimits

0x394e,	// (0x0005083e) bg_popup_call2_in_pane_cp01

0x0417,	// (0x0004d307) call_type_pane_cp02

0x3996,	// (0x00050886) popup_call2_audio_out_window_g1_ParamLimits

0x3996,	// (0x00050886) popup_call2_audio_out_window_g1

0x39c2,	// (0x000508b2) popup_call2_audio_out_window_g2_ParamLimits

0x39c2,	// (0x000508b2) popup_call2_audio_out_window_g2

0x39ea,	// (0x000508da) popup_call2_audio_out_window_g3_ParamLimits

0x39ea,	// (0x000508da) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0005c44a) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0005c44a) popup_call2_audio_out_window_g

0x3a25,	// (0x00050915) popup_call2_audio_out_window_t1_ParamLimits

0x3a25,	// (0x00050915) popup_call2_audio_out_window_t1

0x3a84,	// (0x00050974) popup_call2_audio_out_window_t2_ParamLimits

0x3a84,	// (0x00050974) popup_call2_audio_out_window_t2

0x3ad8,	// (0x000509c8) popup_call2_audio_out_window_t3_ParamLimits

0x3ad8,	// (0x000509c8) popup_call2_audio_out_window_t3

0x3aee,	// (0x000509de) popup_call2_audio_out_window_t4_ParamLimits

0x3aee,	// (0x000509de) popup_call2_audio_out_window_t4

0x3b04,	// (0x000509f4) popup_call2_audio_out_window_t5_ParamLimits

0x3b04,	// (0x000509f4) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0005c453) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0005c453) popup_call2_audio_out_window_t

0x3b68,	// (0x00050a58) bg_popup_call2_in_pane_ParamLimits

0x3b68,	// (0x00050a58) bg_popup_call2_in_pane

0x3bc4,	// (0x00050ab4) popup_call2_audio_in_window_g1_ParamLimits

0x3bc4,	// (0x00050ab4) popup_call2_audio_in_window_g1

0x3bfc,	// (0x00050aec) popup_call2_audio_in_window_g2_ParamLimits

0x3bfc,	// (0x00050aec) popup_call2_audio_in_window_g2

0x3c34,	// (0x00050b24) popup_call2_audio_in_window_g3_ParamLimits

0x3c34,	// (0x00050b24) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0005c460) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0005c460) popup_call2_audio_in_window_g

0x3c8c,	// (0x00050b7c) popup_call2_audio_in_window_t1_ParamLimits

0x3c8c,	// (0x00050b7c) popup_call2_audio_in_window_t1

0x3d0c,	// (0x00050bfc) popup_call2_audio_in_window_t2_ParamLimits

0x3d0c,	// (0x00050bfc) popup_call2_audio_in_window_t2

0x3d8c,	// (0x00050c7c) popup_call2_audio_in_window_t3_ParamLimits

0x3d8c,	// (0x00050c7c) popup_call2_audio_in_window_t3

0x3da6,	// (0x00050c96) popup_call2_audio_in_window_t4_ParamLimits

0x3da6,	// (0x00050c96) popup_call2_audio_in_window_t4

0x3db8,	// (0x00050ca8) popup_call2_audio_in_window_t5_ParamLimits

0x3db8,	// (0x00050ca8) popup_call2_audio_in_window_t5

0x3dcd,	// (0x00050cbd) popup_call2_audio_in_window_t6_ParamLimits

0x3dcd,	// (0x00050cbd) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0005c469) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0005c469) popup_call2_audio_in_window_t

0x2071,	// (0x0004ef61) bg_popup_call2_in_pane_g1

0x3ee6,	// (0x00050dd6) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0005c4d1) popup_cale_lunar_info_window_t

0x2079,	// (0x0004ef69) bg_popup_call2_rect_pane_ParamLimits

0x2079,	// (0x0004ef69) bg_popup_call2_rect_pane

0x1e1e,	// (0x0004ed0e) call2_cli_visual_graphic_pane

0x1e1e,	// (0x0004ed0e) call2_cli_visual_text_pane

0x8e4d,	// (0x00055d3d) smil_status_volume_pane_g3

0x0002,

0x21a1,	// (0x0004f091) call2_cli_visual_graphic_pane_g1

0x21a1,	// (0x0004f091) call2_cli_visual_graphic_pane_g2

0x21a1,	// (0x0004f091) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0005c476) call2_cli_visual_graphic_pane_g

0x3de2,	// (0x00050cd2) bg_popup_call2_rect_pane_g1

0x223f,	// (0x0004f12f) bg_popup_call2_rect_pane_g2

0x3dea,	// (0x00050cda) bg_popup_call2_rect_pane_g3

0x3df2,	// (0x00050ce2) bg_popup_call2_rect_pane_g4

0x3dfa,	// (0x00050cea) bg_popup_call2_rect_pane_g5

0x3e02,	// (0x00050cf2) bg_popup_call2_rect_pane_g6

0x3e0a,	// (0x00050cfa) bg_popup_call2_rect_pane_g7

0x3e12,	// (0x00050d02) bg_popup_call2_rect_pane_g8

0x3e1a,	// (0x00050d0a) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0005c47d) bg_popup_call2_rect_pane_g

0x3e22,	// (0x00050d12) bg_popup_call2_bubble_pane_g1

0x3e2a,	// (0x00050d1a) bg_popup_call2_bubble_pane_g2

0x3e32,	// (0x00050d22) bg_popup_call2_bubble_pane_g3

0x3e3a,	// (0x00050d2a) bg_popup_call2_bubble_pane_g4

0x3e42,	// (0x00050d32) bg_popup_call2_bubble_pane_g5

0x3e4a,	// (0x00050d3a) bg_popup_call2_bubble_pane_g6

0x3e52,	// (0x00050d42) bg_popup_call2_bubble_pane_g7

0x3e5a,	// (0x00050d4a) bg_popup_call2_bubble_pane_g8

0x3e62,	// (0x00050d52) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0005c490) bg_popup_call2_bubble_pane_g

0x62f0,	// (0x000531e0) aid_cale_week_size_cell_pane

0x6890,	// (0x00053780) aid_cams_cif_uncrop_pane_ParamLimits

0x6890,	// (0x00053780) aid_cams_cif_uncrop_pane

0x69ed,	// (0x000538dd) aid_cams_size_cell_ParamLimits

0x69ed,	// (0x000538dd) aid_cams_size_cell

0x69f9,	// (0x000538e9) grid_cams_pane_ParamLimits

0x6a07,	// (0x000538f7) linegrid_cams_pane_ParamLimits

0x6b31,	// (0x00053a21) call_video_pane_t1

0x6b4e,	// (0x00053a3e) call_video_pane_t2

0x0001,

0xf28d,	// (0x0005c17d) call_video_pane_t

0x7008,	// (0x00053ef8) aid_cale_month_size_cell_pane_ParamLimits

0x7008,	// (0x00053ef8) aid_cale_month_size_cell_pane

0xf62a,	// (0x0005c51a) smil_status_volume_pane_g

0x8e5a,	// (0x00055d4a) volume_smil_pane_ParamLimits

0x027e,	// (0x0004d16e) aid_popup2_width_pane

0x61fc,	// (0x000530ec) cell_qdial_pane_g4_ParamLimits

0x61fc,	// (0x000530ec) cell_qdial_pane_g4

0x7d13,	// (0x00054c03) aid_blid_cardinal_pane_ParamLimits

0x7d23,	// (0x00054c13) aid_blid_destination_pane_ParamLimits

0x7d23,	// (0x00054c13) aid_blid_destination_pane

0x2079,	// (0x0004ef69) bg_popup_call_poc_act_pane_ParamLimits

0x2079,	// (0x0004ef69) bg_popup_call_poc_act_pane

0x2079,	// (0x0004ef69) bg_popup_call_poc_inact_pane_ParamLimits

0x2079,	// (0x0004ef69) bg_popup_call_poc_inact_pane

0x3e6a,	// (0x00050d5a) bg_popup_call_poc_act_pane_g1

0x3e72,	// (0x00050d62) bg_popup_call_poc_act_pane_g2

0x3e7a,	// (0x00050d6a) bg_popup_call_poc_act_pane_g3

0x3e3a,	// (0x00050d2a) bg_popup_call_poc_act_pane_g4

0x3e42,	// (0x00050d32) bg_popup_call_poc_act_pane_g5

0x3e82,	// (0x00050d72) bg_popup_call_poc_act_pane_g6

0x3e52,	// (0x00050d42) bg_popup_call_poc_act_pane_g7

0x3e8a,	// (0x00050d7a) bg_popup_call_poc_act_pane_g8

0x1e1e,	// (0x0004ed0e) main_usb_pane

0x3fe7,	// (0x00050ed7) popup_cale_lunar_info_window

0x6e66,	// (0x00053d56) im_reading_pane_t1_ParamLimits

0x2400,	// (0x0004f2f0) list_im_pane_ParamLimits

0x2411,	// (0x0004f301) scroll_pane_cp07_ParamLimits

0x1e1e,	// (0x0004ed0e) grid_highlight_pane_cp012

0x2079,	// (0x0004ef69) mup_scale_pane_ParamLimits

0x2c53,	// (0x0004fb43) main_usb_pane_g1_ParamLimits

0x2c53,	// (0x0004fb43) main_usb_pane_g1

0x8a01,	// (0x000558f1) main_usb_pane_g2_ParamLimits

0x8a01,	// (0x000558f1) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0005c4ba) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0005c4ba) main_usb_pane_g

0x8a0d,	// (0x000558fd) main_usb_pane_t1_ParamLimits

0x8a0d,	// (0x000558fd) main_usb_pane_t1

0x8a1f,	// (0x0005590f) main_usb_pane_t2_ParamLimits

0x8a1f,	// (0x0005590f) main_usb_pane_t2

0x8a31,	// (0x00055921) main_usb_pane_t3_ParamLimits

0x8a31,	// (0x00055921) main_usb_pane_t3

0x8a43,	// (0x00055933) main_usb_pane_t4_ParamLimits

0x8a43,	// (0x00055933) main_usb_pane_t4

0x8a55,	// (0x00055945) main_usb_pane_t5_ParamLimits

0x8a55,	// (0x00055945) main_usb_pane_t5

0x8a67,	// (0x00055957) main_usb_pane_t6_ParamLimits

0x8a67,	// (0x00055957) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0005c4bf) main_usb_pane_t_ParamLimits

0x7cb2,	// (0x00054ba2) aid_text_placing

0x7cbd,	// (0x00054bad) main_location2_pane_t1_ParamLimits

0x7cd3,	// (0x00054bc3) main_location2_pane_t2_ParamLimits

0x7ce9,	// (0x00054bd9) main_location2_pane_t3_ParamLimits

0x7cff,	// (0x00054bef) main_location2_pane_t4_ParamLimits

0x7cff,	// (0x00054bef) main_location2_pane_t4

0xf3ee,	// (0x0005c2de) main_location2_pane_t_ParamLimits

0x20b5,	// (0x0004efa5) find_pinb_pane_g2_ParamLimits

0x20b5,	// (0x0004efa5) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0005c02c) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0005c02c) find_pinb_pane_g

0x20c1,	// (0x0004efb1) find_pinb_pane_t1_ParamLimits

0x20d3,	// (0x0004efc3) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0005c031) find_pinb_pane_t_ParamLimits

0x1e1e,	// (0x0004ed0e) main_call3_pane

0x7414,	// (0x00054304) cale_month_day_heading_pane_t1_ParamLimits

0x7472,	// (0x00054362) cale_month_day_heading_pane_t2_ParamLimits

0x74d7,	// (0x000543c7) cale_month_day_heading_pane_t3_ParamLimits

0x753c,	// (0x0005442c) cale_month_day_heading_pane_t4_ParamLimits

0x75a1,	// (0x00054491) cale_month_day_heading_pane_t5_ParamLimits

0x760e,	// (0x000544fe) cale_month_day_heading_pane_t6_ParamLimits

0x7683,	// (0x00054573) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0005c1b5) cale_month_day_heading_pane_t_ParamLimits

0x2651,	// (0x0004f541) smil_status_volume_pane

0x85bf,	// (0x000554af) postcard_address_pane_ParamLimits

0x85bf,	// (0x000554af) postcard_address_pane

0x85cd,	// (0x000554bd) postcard_message_pane_ParamLimits

0x85cd,	// (0x000554bd) postcard_message_pane

0x89d7,	// (0x000558c7) call2_cli_visual_pane_t1_ParamLimits

0x89d7,	// (0x000558c7) call2_cli_visual_pane_t1

0x8fa0,	// (0x00055e90) postcard_message_pane_t1_ParamLimits

0x8fa0,	// (0x00055e90) postcard_message_pane_t1

0x40d5,	// (0x00050fc5) postcard_address_pane_t1_ParamLimits

0x40d5,	// (0x00050fc5) postcard_address_pane_t1

0x8f91,	// (0x00055e81) popup_call3_audio_in_window_ParamLimits

0x8f91,	// (0x00055e81) popup_call3_audio_in_window

0x8e6f,	// (0x00055d5f) bg_popup_call3_in_pane_ParamLimits

0x8e6f,	// (0x00055d5f) bg_popup_call3_in_pane

0x8ed7,	// (0x00055dc7) popup_call3_audio_in_window_g1_ParamLimits

0x8ed7,	// (0x00055dc7) popup_call3_audio_in_window_g1

0x8eef,	// (0x00055ddf) popup_call3_audio_in_window_g2_ParamLimits

0x8eef,	// (0x00055ddf) popup_call3_audio_in_window_g2

0x8f07,	// (0x00055df7) popup_call3_audio_in_window_g3_ParamLimits

0x8f07,	// (0x00055df7) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0005c521) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0005c521) popup_call3_audio_in_window_g

0x8f2f,	// (0x00055e1f) popup_call3_audio_in_window_t1_ParamLimits

0x8f2f,	// (0x00055e1f) popup_call3_audio_in_window_t1

0x8f57,	// (0x00055e47) popup_call3_audio_in_window_t2_ParamLimits

0x8f57,	// (0x00055e47) popup_call3_audio_in_window_t2

0x8f7f,	// (0x00055e6f) popup_call3_audio_in_window_t3_ParamLimits

0x8f7f,	// (0x00055e6f) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0005c52a) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0005c52a) popup_call3_audio_in_window_t

0x2b94,	// (0x0004fa84) bg_popup_call3_rect_pane

0x3de2,	// (0x00050cd2) bg_popup_call3_rect_pane_g1

0x223f,	// (0x0004f12f) bg_popup_call3_rect_pane_g2

0x3dea,	// (0x00050cda) bg_popup_call3_rect_pane_g3

0x3df2,	// (0x00050ce2) bg_popup_call3_rect_pane_g4

0x3dfa,	// (0x00050cea) bg_popup_call3_rect_pane_g5

0x3e02,	// (0x00050cf2) bg_popup_call3_rect_pane_g6

0x3e0a,	// (0x00050cfa) bg_popup_call3_rect_pane_g7

0x8145,	// (0x00055035) mup_visualizer_osc_pane

0x2c61,	// (0x0004fb51) mup_visualizer_spec_pane

0x8e8f,	// (0x00055d7f) call3_video_qcif_pane_ParamLimits

0x8e8f,	// (0x00055d7f) call3_video_qcif_pane

0x8ea1,	// (0x00055d91) call3_video_qcif_uncrop_pane_ParamLimits

0x8ea1,	// (0x00055d91) call3_video_qcif_uncrop_pane

0x8eb1,	// (0x00055da1) call3_video_subqcif_pane_ParamLimits

0x8eb1,	// (0x00055da1) call3_video_subqcif_pane

0x8ec5,	// (0x00055db5) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ec5,	// (0x00055db5) call3_video_subqcif_uncrop_pane

0x8f1f,	// (0x00055e0f) popup_call3_audio_in_window_g4_ParamLimits

0x8f1f,	// (0x00055e0f) popup_call3_audio_in_window_g4

0x8e3c,	// (0x00055d2c) mup_spec_half_pane

0x8e45,	// (0x00055d35) mup_spec_half_pane_cp

0x4095,	// (0x00050f85) mup_osc_middle_pane

0x409e,	// (0x00050f8e) mup_visualizer_osc_pane_g1

0x8e1c,	// (0x00055d0c) mup_spec_bar_pane_ParamLimits

0x8e1c,	// (0x00055d0c) mup_spec_bar_pane

0x4082,	// (0x00050f72) mup_spec_bar_pane_g1

0x408c,	// (0x00050f7c) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0005c515) mup_spec_bar_pane_g

0x62f0,	// (0x000531e0) aid_cale_week_size_cell_pane_ParamLimits

0x6303,	// (0x000531f3) bg_cale_heading_pane_ParamLimits

0x2273,	// (0x0004f163) bg_cale_pane_cp01_ParamLimits

0x631f,	// (0x0005320f) cale_week_corner_pane_ParamLimits

0x6335,	// (0x00053225) cale_week_day_heading_pane_ParamLimits

0x6351,	// (0x00053241) cale_week_scroll_pane_g1_ParamLimits

0x636a,	// (0x0005325a) cale_week_scroll_pane_g2_ParamLimits

0x637b,	// (0x0005326b) cale_week_scroll_pane_g3_ParamLimits

0x638c,	// (0x0005327c) cale_week_scroll_pane_g4_ParamLimits

0x639d,	// (0x0005328d) cale_week_scroll_pane_g5_ParamLimits

0x63ae,	// (0x0005329e) cale_week_scroll_pane_g6_ParamLimits

0x63c1,	// (0x000532b1) cale_week_scroll_pane_g7_ParamLimits

0x63d4,	// (0x000532c4) cale_week_scroll_pane_g8_ParamLimits

0x63e7,	// (0x000532d7) cale_week_scroll_pane_g9_ParamLimits

0x63f8,	// (0x000532e8) cale_week_scroll_pane_g10_ParamLimits

0x6409,	// (0x000532f9) cale_week_scroll_pane_g11_ParamLimits

0x641a,	// (0x0005330a) cale_week_scroll_pane_g12_ParamLimits

0x642b,	// (0x0005331b) cale_week_scroll_pane_g13_ParamLimits

0x643c,	// (0x0005332c) cale_week_scroll_pane_g14_ParamLimits

0x6455,	// (0x00053345) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0005c0bd) cale_week_scroll_pane_g_ParamLimits

0x646e,	// (0x0005335e) cale_week_time_pane_ParamLimits

0x6481,	// (0x00053371) grid_cale_week_pane_ParamLimits

0x228c,	// (0x0004f17c) listscroll_cale_week_pane_t1

0x649e,	// (0x0005338e) scroll_pane_cp08_ParamLimits

0x7059,	// (0x00053f49) cale_month_corner_pane_ParamLimits

0x2627,	// (0x0004f517) cale_month_pane_t1

0x73c3,	// (0x000542b3) cale_month_week_pane_ParamLimits

0x2c53,	// (0x0004fb43) popup_call_status_window_g1_ParamLimits

0x7abb,	// (0x000549ab) popup_call_status_window_g2_ParamLimits

0x7ac7,	// (0x000549b7) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0005c265) popup_call_status_window_g_ParamLimits

0x293e,	// (0x0004f82e) aid_call2_pane

0x83ea,	// (0x000552da) msg_header_pane_g1

0x85bf,	// (0x000554af) postcard_address2_pane_ParamLimits

0x85bf,	// (0x000554af) postcard_address2_pane

0x85cd,	// (0x000554bd) postcard_message2_pane_ParamLimits

0x85cd,	// (0x000554bd) postcard_message2_pane

0x8dd6,	// (0x00055cc6) message2_row_pane_ParamLimits

0x8dd6,	// (0x00055cc6) message2_row_pane

0x403d,	// (0x00050f2d) address2_row_pane_ParamLimits

0x403d,	// (0x00050f2d) address2_row_pane

0x4050,	// (0x00050f40) postcard_message2_row_pane_g1

0x4058,	// (0x00050f48) postcard_message2_row_pane_t1

0x4050,	// (0x00050f40) address2_row_pane_g1

0x4058,	// (0x00050f48) address2_row_pane_t1

0x6750,	// (0x00053640) aid_size_cell_vorec

0x1e1e,	// (0x0004ed0e) main_rss_pane

0x8df0,	// (0x00055ce0) rss_list_single_pane_ParamLimits

0x8df0,	// (0x00055ce0) rss_list_single_pane

0x4066,	// (0x00050f56) rss_list_single_pane_t1

0x4074,	// (0x00050f64) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0005c510) rss_list_single_pane_t

0x1e1e,	// (0x0004ed0e) main_camera2_pane

0x1e1e,	// (0x0004ed0e) main_video2_pane

0x9004,	// (0x00055ef4) cams_zoom_pane_cp2_ParamLimits

0x9004,	// (0x00055ef4) cams_zoom_pane_cp2

0x9010,	// (0x00055f00) image2_vga_pane_ParamLimits

0x9010,	// (0x00055f00) image2_vga_pane

0x901f,	// (0x00055f0f) main_camera2_pane_g1_ParamLimits

0x901f,	// (0x00055f0f) main_camera2_pane_g1

0x902b,	// (0x00055f1b) main_camera2_pane_g2_ParamLimits

0x902b,	// (0x00055f1b) main_camera2_pane_g2

0x9037,	// (0x00055f27) main_camera2_pane_g3_ParamLimits

0x9037,	// (0x00055f27) main_camera2_pane_g3

0x9043,	// (0x00055f33) main_camera2_pane_g4_ParamLimits

0x9043,	// (0x00055f33) main_camera2_pane_g4

0x904f,	// (0x00055f3f) main_camera2_pane_g5_ParamLimits

0x904f,	// (0x00055f3f) main_camera2_pane_g5

0x905b,	// (0x00055f4b) main_camera2_pane_g6_ParamLimits

0x905b,	// (0x00055f4b) main_camera2_pane_g6

0x9067,	// (0x00055f57) main_camera2_pane_g7_ParamLimits

0x9067,	// (0x00055f57) main_camera2_pane_g7

0x9073,	// (0x00055f63) main_camera2_pane_g8_ParamLimits

0x9073,	// (0x00055f63) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0005c531) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0005c531) main_camera2_pane_g

0x908b,	// (0x00055f7b) main_camera2_pane_t1_ParamLimits

0x908b,	// (0x00055f7b) main_camera2_pane_t1

0x909d,	// (0x00055f8d) main_camera2_pane_t2_ParamLimits

0x909d,	// (0x00055f8d) main_camera2_pane_t2

0x90af,	// (0x00055f9f) main_camera2_pane_t3_ParamLimits

0x90af,	// (0x00055f9f) main_camera2_pane_t3

0x90c1,	// (0x00055fb1) main_camera2_pane_t4_ParamLimits

0x90c1,	// (0x00055fb1) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0005c544) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0005c544) main_camera2_pane_t

0x911e,	// (0x0005600e) cams_zoom_pane_cp4_ParamLimits

0x911e,	// (0x0005600e) cams_zoom_pane_cp4

0x912e,	// (0x0005601e) image2_cif_pane_ParamLimits

0x912e,	// (0x0005601e) image2_cif_pane

0x9143,	// (0x00056033) image2_subqcif_pane_ParamLimits

0x9143,	// (0x00056033) image2_subqcif_pane

0x9152,	// (0x00056042) main_video2_pane_g1_ParamLimits

0x9152,	// (0x00056042) main_video2_pane_g1

0x9164,	// (0x00056054) main_video2_pane_g2_ParamLimits

0x9164,	// (0x00056054) main_video2_pane_g2

0x9174,	// (0x00056064) main_video2_pane_g3_ParamLimits

0x9174,	// (0x00056064) main_video2_pane_g3

0x9184,	// (0x00056074) main_video2_pane_g4_ParamLimits

0x9184,	// (0x00056074) main_video2_pane_g4

0x9194,	// (0x00056084) main_video2_pane_g5_ParamLimits

0x9194,	// (0x00056084) main_video2_pane_g5

0x91a4,	// (0x00056094) main_video2_pane_g6_ParamLimits

0x91a4,	// (0x00056094) main_video2_pane_g6

0x0005,

0xf663,	// (0x0005c553) main_video2_pane_g_ParamLimits

0xf663,	// (0x0005c553) main_video2_pane_g

0x91b6,	// (0x000560a6) main_video2_pane_t1_ParamLimits

0x91b6,	// (0x000560a6) main_video2_pane_t1

0x91d0,	// (0x000560c0) main_video2_pane_t2_ParamLimits

0x91d0,	// (0x000560c0) main_video2_pane_t2

0x91f6,	// (0x000560e6) main_video2_pane_t3_ParamLimits

0x91f6,	// (0x000560e6) main_video2_pane_t3

0x0002,

0xf670,	// (0x0005c560) main_video2_pane_t_ParamLimits

0xf670,	// (0x0005c560) main_video2_pane_t

0x8b1e,	// (0x00055a0e) call_muted_g2

0x0001,

0xf612,	// (0x0005c502) call_muted_g

0x1e1e,	// (0x0004ed0e) main_mup2_pane

0x411a,	// (0x0005100a) main_mup2_pane_g1_ParamLimits

0x411a,	// (0x0005100a) main_mup2_pane_g1

0x921c,	// (0x0005610c) main_mup2_pane_g2_ParamLimits

0x921c,	// (0x0005610c) main_mup2_pane_g2

0x94a0,	// (0x00056390) main_mup_pane_g13_cp1

0x94a8,	// (0x00056398) mup_volume_pane_cp1

0x923e,	// (0x0005612e) main_mup2_pane_g4_ParamLimits

0x923e,	// (0x0005612e) main_mup2_pane_g4

0x924f,	// (0x0005613f) main_mup2_pane_g5_ParamLimits

0x924f,	// (0x0005613f) main_mup2_pane_g5

0x9260,	// (0x00056150) main_mup2_pane_g6_ParamLimits

0x9260,	// (0x00056150) main_mup2_pane_g6

0x9271,	// (0x00056161) main_mup2_pane_g7_ParamLimits

0x9271,	// (0x00056161) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0005c567) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0005c567) main_mup2_pane_g

0x928d,	// (0x0005617d) main_mup2_pane_t1_ParamLimits

0x928d,	// (0x0005617d) main_mup2_pane_t1

0x92a4,	// (0x00056194) main_mup2_pane_t2_ParamLimits

0x92a4,	// (0x00056194) main_mup2_pane_t2

0x92bb,	// (0x000561ab) main_mup2_pane_t3_ParamLimits

0x92bb,	// (0x000561ab) main_mup2_pane_t3

0x92d2,	// (0x000561c2) main_mup2_pane_t4_ParamLimits

0x92d2,	// (0x000561c2) main_mup2_pane_t4

0x92ec,	// (0x000561dc) main_mup2_pane_t5_ParamLimits

0x92ec,	// (0x000561dc) main_mup2_pane_t5

0x9306,	// (0x000561f6) main_mup2_pane_t6_ParamLimits

0x9306,	// (0x000561f6) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0005c576) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0005c576) main_mup2_pane_t

0x933e,	// (0x0005622e) mup2_visualizer_pane_ParamLimits

0x933e,	// (0x0005622e) mup2_visualizer_pane

0x9374,	// (0x00056264) mup_progress_pane_cp_ParamLimits

0x9374,	// (0x00056264) mup_progress_pane_cp

0x948b,	// (0x0005637b) mup_volume_pane_cp_ParamLimits

0x948b,	// (0x0005637b) mup_volume_pane_cp

0x938d,	// (0x0005627d) mup2_visualizer_pane_g1_ParamLimits

0x938d,	// (0x0005627d) mup2_visualizer_pane_g1

0x40ec,	// (0x00050fdc) mup2_visualizer_pane_g2_ParamLimits

0x40ec,	// (0x00050fdc) mup2_visualizer_pane_g2

0x93a2,	// (0x00056292) mup2_visualizer_pane_g3_ParamLimits

0x93a2,	// (0x00056292) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0005c583) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0005c583) mup2_visualizer_pane_g

0x2e8a,	// (0x0004fd7a) aid_size_cell_fmradio

0x8c34,	// (0x00055b24) aid_height_parent_landcape

0x248f,	// (0x0004f37f) wml_content_pane_cp

0x2497,	// (0x0004f387) wml_tabs_pane

0x24a0,	// (0x0004f390) popup_wml_miniature_window

0x24a8,	// (0x0004f398) scroll_pane_cp021

0x24bc,	// (0x0004f3ac) wml_content_pane_comp8

0x1e1e,	// (0x0004ed0e) bg_popup_sub_pane_cp05

0x410a,	// (0x00050ffa) popup_wml_miniature_window_g1

0x4112,	// (0x00051002) wml_miniature_view_pane

0x93ae,	// (0x0005629e) aid_size_wml_view

0x93b6,	// (0x000562a6) wml_miniature_view_pane_g1

0x93bf,	// (0x000562af) wml_miniature_view_pane_g2

0x93c8,	// (0x000562b8) wml_miniature_view_pane_g3

0x93d0,	// (0x000562c0) wml_miniature_view_pane_g4

0x93d8,	// (0x000562c8) wml_miniature_view_pane_g5

0x93e0,	// (0x000562d0) wml_miniature_view_pane_g6

0x93e8,	// (0x000562d8) wml_miniature_view_pane_g7

0x93f0,	// (0x000562e0) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0005c58a) wml_miniature_view_pane_g

0x411a,	// (0x0005100a) background_graphic_ParamLimits

0x411a,	// (0x0005100a) background_graphic

0x4126,	// (0x00051016) wml_tabs_2_pane

0x412f,	// (0x0005101f) wml_tabs_3_pane_ParamLimits

0x412f,	// (0x0005101f) wml_tabs_3_pane

0x4141,	// (0x00051031) wml_tabs_4_pane_ParamLimits

0x4141,	// (0x00051031) wml_tabs_4_pane

0x4157,	// (0x00051047) wml_tabs_5_pane_ParamLimits

0x4157,	// (0x00051047) wml_tabs_5_pane

0x4171,	// (0x00051061) wml_tabs_pane_g2_ParamLimits

0x4171,	// (0x00051061) wml_tabs_pane_g2

0x4185,	// (0x00051075) wml_tabs_pane_g3_ParamLimits

0x4185,	// (0x00051075) wml_tabs_pane_g3

0x93f8,	// (0x000562e8) wml_tabs_2_active_pane_ParamLimits

0x93f8,	// (0x000562e8) wml_tabs_2_active_pane

0x940a,	// (0x000562fa) wml_tabs_2_passive_pane_ParamLimits

0x940a,	// (0x000562fa) wml_tabs_2_passive_pane

0x941c,	// (0x0005630c) wml_tabs_3_active_pane_cp_ParamLimits

0x941c,	// (0x0005630c) wml_tabs_3_active_pane_cp

0x942f,	// (0x0005631f) wml_tabs_3_passive_pane_ParamLimits

0x942f,	// (0x0005631f) wml_tabs_3_passive_pane

0x9440,	// (0x00056330) wml_tabs_3_passive_pane_cp_ParamLimits

0x9440,	// (0x00056330) wml_tabs_3_passive_pane_cp

0x9455,	// (0x00056345) tabs_4_active_pane

0x945d,	// (0x0005634d) tabs_4_passive_pane

0x9465,	// (0x00056355) tabs_4_passive_pane_cp

0x946d,	// (0x0005635d) tabs_4_passive_pane_cp2

0x89f9,	// (0x000558e9) aid_height_text

0x810e,	// (0x00054ffe) mup_volume_cont_pane_ParamLimits

0x810e,	// (0x00054ffe) mup_volume_cont_pane

0x5e52,	// (0x00052d42) aid_size_cell_pinb

0x5e5c,	// (0x00052d4c) aid_size_list_pinb

0x935d,	// (0x0005624d) mup2_volume_cont_pane_ParamLimits

0x935d,	// (0x0005624d) mup2_volume_cont_pane

0x9477,	// (0x00056367) mup2_volume_cont_pane_g1_ParamLimits

0x9477,	// (0x00056367) mup2_volume_cont_pane_g1

0x5b19,	// (0x00052a09) aid_size_cell_touch_ParamLimits

0x5b19,	// (0x00052a09) aid_size_cell_touch

0x5d71,	// (0x00052c61) touch_pane_ParamLimits

0x5d71,	// (0x00052c61) touch_pane

0x026c,	// (0x0004d15c) main_rss2_pane

0x41a2,	// (0x00051092) listscroll_rss2_pane

0x41ab,	// (0x0005109b) rss2_navigation_pane

0x41b3,	// (0x000510a3) list_rss2_pane

0x2a5a,	// (0x0004f94a) scroll_pane_cp22

0x41bb,	// (0x000510ab) rss2_navigation_pane_g1

0x41c4,	// (0x000510b4) rss2_navigation_pane_g2

0x41cc,	// (0x000510bc) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0005c59b) rss2_navigation_pane_g

0x41d4,	// (0x000510c4) rss2_navigation_pane_t1

0x94b0,	// (0x000563a0) rss2_list_single_pane_ParamLimits

0x94b0,	// (0x000563a0) rss2_list_single_pane

0x41e2,	// (0x000510d2) rss2_list_single_pane_t2

0x41f0,	// (0x000510e0) rss2_list_single_pane_t3_ParamLimits

0x41f0,	// (0x000510e0) rss2_list_single_pane_t3

0x420d,	// (0x000510fd) rss2_list_single_pane_t4

0x7883,	// (0x00054773) smil_status_pane_g1

0x02e5,	// (0x0004d1d5) main_image2_pane_ParamLimits

0x02e5,	// (0x0004d1d5) main_image2_pane

0x907f,	// (0x00055f6f) main_camera2_pane_g9_ParamLimits

0x907f,	// (0x00055f6f) main_camera2_pane_g9

0x90d3,	// (0x00055fc3) main_camera2_pane_t5_ParamLimits

0x90d3,	// (0x00055fc3) main_camera2_pane_t5

0x90e5,	// (0x00055fd5) main_camera2_pane_t6_ParamLimits

0x90e5,	// (0x00055fd5) main_camera2_pane_t6

0x94d3,	// (0x000563c3) main_image2_pane_g1_ParamLimits

0x94d3,	// (0x000563c3) main_image2_pane_g1

0x8796,	// (0x00055686) smil2_video_pane_ParamLimits

0x8796,	// (0x00055686) smil2_video_pane

0x029a,	// (0x0004d18a) aid_zoom_text_primary_cp

0x02db,	// (0x0004d1cb) popup_preview_fixed_window

0x23f8,	// (0x0004f2e8) im_reading_pane_g1

0x8fc9,	// (0x00055eb9) cams2_bc_adjust_pane_cp_ParamLimits

0x8fc9,	// (0x00055eb9) cams2_bc_adjust_pane_cp

0x9110,	// (0x00056000) cams2_bc_adjust_pane_ParamLimits

0x9110,	// (0x00056000) cams2_bc_adjust_pane

0x434c,	// (0x0005123c) cams2_bc_adjust_pane_g1

0x94df,	// (0x000563cf) cams2_slider_pane

0x94e8,	// (0x000563d8) cams2_slider_pane_g1

0x94f1,	// (0x000563e1) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0005c5a2) cams2_slider_pane_g

0x5f4d,	// (0x00052e3d) calc_display_pane_ParamLimits

0x5f6b,	// (0x00052e5b) calc_paper_pane_ParamLimits

0x5f87,	// (0x00052e77) grid_calc_pane_ParamLimits

0x7b25,	// (0x00054a15) popup_clock_digital_window_t1_ParamLimits

0x2e27,	// (0x0004fd17) main_image_pane_t1

0x5f33,	// (0x00052e23) aid_size_cell_calc_ParamLimits

0x5f33,	// (0x00052e23) aid_size_cell_calc

0x8c66,	// (0x00055b56) popup_blid_sat_info2_window_ParamLimits

0x8c66,	// (0x00055b56) popup_blid_sat_info2_window

0x4223,	// (0x00051113) aid_size_cell_blid

0x422b,	// (0x0005111b) bg_popup_window_pane_cp07

0x424e,	// (0x0005113e) grid_popup_blid_pane

0x4258,	// (0x00051148) heading_pane_cp05_ParamLimits

0x4258,	// (0x00051148) heading_pane_cp05

0x4322,	// (0x00051212) cell_popup_blid_pane_ParamLimits

0x4322,	// (0x00051212) cell_popup_blid_pane

0x4354,	// (0x00051244) cell_popup_blid_pane_g1

0x435c,	// (0x0005124c) cell_popup_blid_pane_t1

0x9323,	// (0x00056213) mup2_indicator_pane_ParamLimits

0x9323,	// (0x00056213) mup2_indicator_pane

0x2b94,	// (0x0004fa84) mup2_visualizer_osc_pane

0x40f8,	// (0x00050fe8) mup2_visualizer_spec_pane_ParamLimits

0x40f8,	// (0x00050fe8) mup2_visualizer_spec_pane

0x950b,	// (0x000563fb) mup2_spec_half_pane

0x9514,	// (0x00056404) mup2_spec_half_pane_cp

0x951c,	// (0x0005640c) mup2_spec_bar_pane_ParamLimits

0x951c,	// (0x0005640c) mup2_spec_bar_pane

0x4082,	// (0x00050f72) mup2_spec_bar_pane_g1

0x408c,	// (0x00050f7c) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0005c515) mup2_spec_bar_pane_g

0x953b,	// (0x0005642b) mup2_osc_middle_pane

0x409e,	// (0x00050f8e) mup2_visualizer_osc_pane_g1

0x0313,	// (0x0004d203) popup_number_entry_window_t1_ParamLimits

0x0326,	// (0x0004d216) popup_number_entry_window_t2_ParamLimits

0x0338,	// (0x0004d228) popup_number_entry_window_t3_ParamLimits

0x034a,	// (0x0004d23a) popup_number_entry_window_t5_ParamLimits

0x034a,	// (0x0004d23a) popup_number_entry_window_t5

0xf0e7,	// (0x0005bfd7) popup_number_entry_window_t_ParamLimits

0x037f,	// (0x0004d26f) text_title_cp2_ParamLimits

0x8483,	// (0x00055373) aid_hotspot_pointer_text2_pane

0x851d,	// (0x0005540d) main_viewer_pane_g9_ParamLimits

0x851d,	// (0x0005540d) main_viewer_pane_g9

0x2627,	// (0x0004f517) cale_month_pane_t1_ParamLimits

0x2664,	// (0x0004f554) bg_cale_pane_ParamLimits

0x267c,	// (0x0004f56c) list_cale_pane_ParamLimits

0x228c,	// (0x0004f17c) listscroll_cale_day_pane_t1

0x268d,	// (0x0004f57d) scroll_pane_cp09_ParamLimits

0x814d,	// (0x0005503d) main_mup_eq_pane_t1_ParamLimits

0x814d,	// (0x0005503d) main_mup_eq_pane_t1

0x8169,	// (0x00055059) main_mup_eq_pane_t2_ParamLimits

0x8169,	// (0x00055059) main_mup_eq_pane_t2

0x8185,	// (0x00055075) main_mup_eq_pane_t3_ParamLimits

0x8185,	// (0x00055075) main_mup_eq_pane_t3

0x819f,	// (0x0005508f) main_mup_eq_pane_t4_ParamLimits

0x819f,	// (0x0005508f) main_mup_eq_pane_t4

0x81b9,	// (0x000550a9) main_mup_eq_pane_t5_ParamLimits

0x81b9,	// (0x000550a9) main_mup_eq_pane_t5

0x81d3,	// (0x000550c3) main_mup_eq_pane_t6_ParamLimits

0x81d3,	// (0x000550c3) main_mup_eq_pane_t6

0x81e9,	// (0x000550d9) main_mup_eq_pane_t7_ParamLimits

0x81e9,	// (0x000550d9) main_mup_eq_pane_t7

0x81ff,	// (0x000550ef) main_mup_eq_pane_t8_ParamLimits

0x81ff,	// (0x000550ef) main_mup_eq_pane_t8

0x8215,	// (0x00055105) main_mup_eq_pane_t9_ParamLimits

0x8215,	// (0x00055105) main_mup_eq_pane_t9

0x8231,	// (0x00055121) main_mup_eq_pane_t10_ParamLimits

0x8231,	// (0x00055121) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0005c364) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0005c364) main_mup_eq_pane_t

0x82f6,	// (0x000551e6) mup_equalizer_pane_cp5_ParamLimits

0x830e,	// (0x000551fe) mup_equalizer_pane_cp6_ParamLimits

0x8326,	// (0x00055216) mup_equalizer_pane_cp7_ParamLimits

0x026c,	// (0x0004d15c) main_gallery_pane

0x40a7,	// (0x00050f97) smil2_volume_pane

0x40c2,	// (0x00050fb2) smil_status_volume_pane_g1_ParamLimits

0x40af,	// (0x00050f9f) smil_status_volume_pane_g2_ParamLimits

0x8e4d,	// (0x00055d3d) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0005c51a) smil_status_volume_pane_g_ParamLimits

0x422b,	// (0x0005111b) bg_popup_window_pane_cp07_ParamLimits

0x4239,	// (0x00051129) blid_firmament_pane

0x9544,	// (0x00056434) aid_size_cell_gallery_ParamLimits

0x9544,	// (0x00056434) aid_size_cell_gallery

0x9552,	// (0x00056442) grid_gallery_pane_ParamLimits

0x9552,	// (0x00056442) grid_gallery_pane

0x9562,	// (0x00056452) cell_gallery_pane_ParamLimits

0x9562,	// (0x00056452) cell_gallery_pane

0x436a,	// (0x0005125a) bg_cell_gallery_focus_pane_ParamLimits

0x436a,	// (0x0005125a) bg_cell_gallery_focus_pane

0x437c,	// (0x0005126c) cell_gallery_pane_g1_ParamLimits

0x437c,	// (0x0005126c) cell_gallery_pane_g1

0x95ad,	// (0x0005649d) cell_gallery_pane_g2_ParamLimits

0x95ad,	// (0x0005649d) cell_gallery_pane_g2

0x95ba,	// (0x000564aa) cell_gallery_pane_g3_ParamLimits

0x95ba,	// (0x000564aa) cell_gallery_pane_g3

0x4388,	// (0x00051278) cell_gallery_pane_g4_ParamLimits

0x4388,	// (0x00051278) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0005c5c8) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0005c5c8) cell_gallery_pane_g

0x4394,	// (0x00051284) bg_cell_gallery_focus_pane_g1

0x439c,	// (0x0005128c) bg_cell_gallery_focus_pane_g2

0x43a4,	// (0x00051294) bg_cell_gallery_focus_pane_g3

0x43ac,	// (0x0005129c) bg_cell_gallery_focus_pane_g4

0x43b4,	// (0x000512a4) bg_cell_gallery_focus_pane_g5

0x43bc,	// (0x000512ac) bg_cell_gallery_focus_pane_g6

0x43c4,	// (0x000512b4) bg_cell_gallery_focus_pane_g7

0x43cc,	// (0x000512bc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0005c5d1) bg_cell_gallery_focus_pane_g

0x43d4,	// (0x000512c4) aid_firma_cardinal

0x43e8,	// (0x000512d8) blid_firmament_pane_t1

0x43ff,	// (0x000512ef) blid_firmament_pane_t2

0x4416,	// (0x00051306) blid_firmament_pane_t3

0x442d,	// (0x0005131d) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0005c5e2) blid_firmament_pane_t

0x4444,	// (0x00051334) blid_sat_info_pane

0x4454,	// (0x00051344) blid_sat_info_pane_g1

0x4454,	// (0x00051344) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0005c5eb) blid_sat_info_pane_g

0x445e,	// (0x0005134e) blid_sat_info_pane_t1

0x446c,	// (0x0005135c) smil2_volume_content_pane

0x4475,	// (0x00051365) smil2_volume_pane_g1

0x447d,	// (0x0005136d) smil2_volume_content_pane_g1

0x4486,	// (0x00051376) smil2_volume_content_pane_g2

0x448f,	// (0x0005137f) smil2_volume_content_pane_g3

0x4498,	// (0x00051388) smil2_volume_content_pane_g4

0x44a1,	// (0x00051391) smil2_volume_content_pane_g5

0x44aa,	// (0x0005139a) smil2_volume_content_pane_g6

0x44b3,	// (0x000513a3) smil2_volume_content_pane_g7

0x44bc,	// (0x000513ac) smil2_volume_content_pane_g8

0x44c5,	// (0x000513b5) smil2_volume_content_pane_g9

0x44ce,	// (0x000513be) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0005c5f0) smil2_volume_content_pane_g

0x64fa,	// (0x000533ea) cale_week_day_heading_pane_t1_ParamLimits

0x6527,	// (0x00053417) cale_week_day_heading_pane_t2_ParamLimits

0x6554,	// (0x00053444) cale_week_day_heading_pane_t3_ParamLimits

0x6581,	// (0x00053471) cale_week_day_heading_pane_t4_ParamLimits

0x65ae,	// (0x0005349e) cale_week_day_heading_pane_t5_ParamLimits

0x65db,	// (0x000534cb) cale_week_day_heading_pane_t6_ParamLimits

0x6608,	// (0x000534f8) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0005c0dc) cale_week_day_heading_pane_t_ParamLimits

0x229e,	// (0x0004f18e) bg_cale_side_pane_ParamLimits

0x6635,	// (0x00053525) cale_week_time_pane_t1_ParamLimits

0x664d,	// (0x0005353d) cale_week_time_pane_t2_ParamLimits

0x6665,	// (0x00053555) cale_week_time_pane_t3_ParamLimits

0x667d,	// (0x0005356d) cale_week_time_pane_t4_ParamLimits

0x6695,	// (0x00053585) cale_week_time_pane_t5_ParamLimits

0x66ad,	// (0x0005359d) cale_week_time_pane_t6_ParamLimits

0x66c5,	// (0x000535b5) cale_week_time_pane_t7_ParamLimits

0x66dd,	// (0x000535cd) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0005c0eb) cale_week_time_pane_t_ParamLimits

0x66f9,	// (0x000535e9) cell_cale_week_pane_g2_ParamLimits

0x229e,	// (0x0004f18e) bg_cale_side_pane_cp01_ParamLimits

0x76f8,	// (0x000545e8) cale_month_week_pane_t1_ParamLimits

0x770f,	// (0x000545ff) cale_month_week_pane_t2_ParamLimits

0x7726,	// (0x00054616) cale_month_week_pane_t3_ParamLimits

0x773d,	// (0x0005462d) cale_month_week_pane_t4_ParamLimits

0x7754,	// (0x00054644) cale_month_week_pane_t5_ParamLimits

0x776b,	// (0x0005465b) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0005c1c4) cale_month_week_pane_t_ParamLimits

0x7850,	// (0x00054740) cell_cale_month_pane_g1_ParamLimits

0x026c,	// (0x0004d15c) main_cale_event_viewer_pane

0x026c,	// (0x0004d15c) listscroll_cale_event_viewer_pane

0x44d7,	// (0x000513c7) list_cale_ev_pane

0x44df,	// (0x000513cf) scroll_pane_cp023

0x95c7,	// (0x000564b7) field_cale_ev_pane_ParamLimits

0x95c7,	// (0x000564b7) field_cale_ev_pane

0x44eb,	// (0x000513db) field_cale_ev_content_pane_ParamLimits

0x44eb,	// (0x000513db) field_cale_ev_content_pane

0x44f7,	// (0x000513e7) field_cale_ev_pane_g1_ParamLimits

0x44f7,	// (0x000513e7) field_cale_ev_pane_g1

0x4503,	// (0x000513f3) field_cale_ev_pane_g2_ParamLimits

0x4503,	// (0x000513f3) field_cale_ev_pane_g2

0x451b,	// (0x0005140b) field_cale_ev_pane_g3_ParamLimits

0x451b,	// (0x0005140b) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0005c605) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0005c605) field_cale_ev_pane_g

0x4533,	// (0x00051423) field_cale_ev_pane_t1_ParamLimits

0x4533,	// (0x00051423) field_cale_ev_pane_t1

0x95eb,	// (0x000564db) field_cale_ev_content_pane_t1_ParamLimits

0x95eb,	// (0x000564db) field_cale_ev_content_pane_t1

0x2d0d,	// (0x0004fbfd) bg_button_pane_cp01

0x214c,	// (0x0004f03c) listscroll_cale_week_pane_ParamLimits

0x62e6,	// (0x000531d6) popup_toolbar_window_cp01

0x228c,	// (0x0004f17c) listscroll_cale_week_pane_t1_ParamLimits

0x214c,	// (0x0004f03c) listscroll_cale_day_pane_ParamLimits

0x62e6,	// (0x000531d6) popup_toolbar_window_cp02

0x228c,	// (0x0004f17c) listscroll_cale_day_pane_t1_ParamLimits

0x214c,	// (0x0004f03c) main_cale_month_pane_ParamLimits

0x8d4a,	// (0x00055c3a) popup_toolbar_window_cp03_ParamLimits

0x8d4a,	// (0x00055c3a) popup_toolbar_window_cp03

0x86a6,	// (0x00055596) main_image_pane_g2_ParamLimits

0x86a6,	// (0x00055596) main_image_pane_g2

0x86b2,	// (0x000555a2) main_image_pane_g3_ParamLimits

0x86b2,	// (0x000555a2) main_image_pane_g3

0x0002,

0xf506,	// (0x0005c3f6) main_image_pane_g_ParamLimits

0xf506,	// (0x0005c3f6) main_image_pane_g

0x2e27,	// (0x0004fd17) main_image_pane_t1_ParamLimits

0x86be,	// (0x000555ae) main_image_pane_t2_ParamLimits

0x86be,	// (0x000555ae) main_image_pane_t2

0x86d0,	// (0x000555c0) main_image_pane_t3_ParamLimits

0x86d0,	// (0x000555c0) main_image_pane_t3

0x86e2,	// (0x000555d2) main_image_pane_t4_ParamLimits

0x86e2,	// (0x000555d2) main_image_pane_t4

0x0003,

0xf50d,	// (0x0005c3fd) main_image_pane_t_ParamLimits

0xf50d,	// (0x0005c3fd) main_image_pane_t

0x86f4,	// (0x000555e4) popup_image_details_window_cp01

0x86fe,	// (0x000555ee) popup_toobar_trans_pane_cp01_ParamLimits

0x86fe,	// (0x000555ee) popup_toobar_trans_pane_cp01

0x8cbb,	// (0x00055bab) popup_image_details_window_ParamLimits

0x8cbb,	// (0x00055bab) popup_image_details_window

0x3ff3,	// (0x00050ee3) popup_image_focus_window

0x8fbb,	// (0x00055eab) camera2_autofocus_pane_ParamLimits

0x8fbb,	// (0x00055eab) camera2_autofocus_pane

0x026c,	// (0x0004d15c) bg_popup_sub_pane_cp06

0x454a,	// (0x0005143a) popup_image_focus_window_g1

0x4552,	// (0x00051442) popup_image_focus_window_g2

0x455a,	// (0x0005144a) popup_image_focus_window_g3

0x4562,	// (0x00051452) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0005c60c) popup_image_focus_window_g

0x456a,	// (0x0005145a) popup_image_focus_window_t1

0x4578,	// (0x00051468) popup_image_focus_window_t2

0x4588,	// (0x00051478) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0005c615) popup_image_focus_window_t

0x4596,	// (0x00051486) camera2_autofocus_pane_g1

0x02e5,	// (0x0004d1d5) bg_tb_trans_pane_cp01

0x45a4,	// (0x00051494) popup_image_details_window_g1

0x45b7,	// (0x000514a7) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0005c627) popup_image_details_window_g

0x45e0,	// (0x000514d0) popup_image_details_window_t1

0x45f2,	// (0x000514e2) popup_image_details_window_t2

0x460b,	// (0x000514fb) popup_image_details_window_t3

0x461f,	// (0x0005150f) popup_image_details_window_t4

0x463a,	// (0x0005152a) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0005c62e) popup_image_details_window_t

0x2138,	// (0x0004f028) bg_calc_paper_pane_ParamLimits

0x6084,	// (0x00052f74) grid_highlight_pane_cp013

0x608e,	// (0x00052f7e) list_calc_pane_ParamLimits

0x60a0,	// (0x00052f90) scroll_pane_cp024

0x214c,	// (0x0004f03c) bg_calc_display_pane_ParamLimits

0x60a8,	// (0x00052f98) calc_display_pane_t1_ParamLimits

0x60bd,	// (0x00052fad) calc_display_pane_t2_ParamLimits

0x60d2,	// (0x00052fc2) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0005c05e) calc_display_pane_t_ParamLimits

0x61a6,	// (0x00053096) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0005c07b) cell_calc_pane_g

0x61af,	// (0x0005309f) cell_calc_pane_t1

0x21ab,	// (0x0004f09b) grid_highlight_pane_cp02_ParamLimits

0x21c1,	// (0x0004f0b1) toolbar_button_pane_cp01_ParamLimits

0x21c1,	// (0x0004f0b1) toolbar_button_pane_cp01

0x2e6c,	// (0x0004fd5c) temp_image_control_pane_ParamLimits

0x2e6c,	// (0x0004fd5c) temp_image_control_pane

0x02e5,	// (0x0004d1d5) main_mp3_pane

0x4654,	// (0x00051544) temp_image_control_pane_g1_ParamLimits

0x4654,	// (0x00051544) temp_image_control_pane_g1

0x4662,	// (0x00051552) temp_image_control_pane_g2_ParamLimits

0x4662,	// (0x00051552) temp_image_control_pane_g2

0x4674,	// (0x00051564) temp_image_control_pane_g3_ParamLimits

0x4674,	// (0x00051564) temp_image_control_pane_g3

0x9636,	// (0x00056526) temp_image_control_pane_g4_ParamLimits

0x9636,	// (0x00056526) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0005c639) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0005c639) temp_image_control_pane_g

0x4654,	// (0x00051544) main_mp3_pane_g1

0x9647,	// (0x00056537) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0005c642) main_mp3_pane_g

0x46b7,	// (0x000515a7) main_mp3_pane_t1

0x2303,	// (0x0004f1f3) main_camera_pane_g8_ParamLimits

0x2303,	// (0x0004f1f3) main_camera_pane_g8

0x69a3,	// (0x00053893) main_video_pane_g7_ParamLimits

0x69a3,	// (0x00053893) main_video_pane_g7

0x90fe,	// (0x00055fee) main_camera2_pane_t7_ParamLimits

0x90fe,	// (0x00055fee) main_camera2_pane_t7

0x244f,	// (0x0004f33f) scroll_pane_cp025_ParamLimits

0x244f,	// (0x0004f33f) scroll_pane_cp025

0x2463,	// (0x0004f353) scroll_pane_cp026_ParamLimits

0x2463,	// (0x0004f353) scroll_pane_cp026

0x2472,	// (0x0004f362) wml_content_pane_ParamLimits

0x026c,	// (0x0004d15c) main_touch_calib_pane

0x96eb,	// (0x000565db) main_touch_calib_pane_g1

0x96f7,	// (0x000565e7) main_touch_calib_pane_g2

0x9703,	// (0x000565f3) main_touch_calib_pane_g3

0x970f,	// (0x000565ff) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0005c660) main_touch_calib_pane_g

0x971b,	// (0x0005660b) main_touch_calib_pane_t1

0x9732,	// (0x00056622) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0005c669) main_touch_calib_pane_t

0x2ad5,	// (0x0004f9c5) mup_progress_pane_cp02

0x2af4,	// (0x0004f9e4) navi_pane_g1

0x2b56,	// (0x0004fa46) navi_pane_mp_t3

0x02e5,	// (0x0004d1d5) main_mp3_pane_ParamLimits

0x8d8c,	// (0x00055c7c) navi_pane_ParamLimits

0x4654,	// (0x00051544) main_mp3_pane_g1_ParamLimits

0x9647,	// (0x00056537) main_mp3_pane_g2_ParamLimits

0x9653,	// (0x00056543) main_mp3_pane_g3_ParamLimits

0x9653,	// (0x00056543) main_mp3_pane_g3

0x965f,	// (0x0005654f) main_mp3_pane_g4_ParamLimits

0x965f,	// (0x0005654f) main_mp3_pane_g4

0x4684,	// (0x00051574) main_mp3_pane_g5_ParamLimits

0x4684,	// (0x00051574) main_mp3_pane_g5

0x4692,	// (0x00051582) main_mp3_pane_g6_ParamLimits

0x4692,	// (0x00051582) main_mp3_pane_g6

0x469f,	// (0x0005158f) main_mp3_pane_g7_ParamLimits

0x469f,	// (0x0005158f) main_mp3_pane_g7

0x46ab,	// (0x0005159b) main_mp3_pane_g8_ParamLimits

0x46ab,	// (0x0005159b) main_mp3_pane_g8

0xf752,	// (0x0005c642) main_mp3_pane_g_ParamLimits

0x966b,	// (0x0005655b) main_mp3_pane_t2

0x967b,	// (0x0005656b) main_mp3_pane_t3

0x46c5,	// (0x000515b5) main_mp3_pane_t4

0x46d3,	// (0x000515c3) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0005c653) main_mp3_pane_t

0x46e1,	// (0x000515d1) mup_progress_pane_cp01

0x029a,	// (0x0004d18a) aid_zoom_text_secondary2

0x44d7,	// (0x000513c7) list_cale_ev2_pane

0x44df,	// (0x000513cf) scroll_pane_cp023_ParamLimits

0x9789,	// (0x00056679) field_cale_ev2_pane_ParamLimits

0x9789,	// (0x00056679) field_cale_ev2_pane

0x97a4,	// (0x00056694) field_cale_ev2_pane_g1_ParamLimits

0x97a4,	// (0x00056694) field_cale_ev2_pane_g1

0x97b0,	// (0x000566a0) field_cale_ev2_pane_g2_ParamLimits

0x97b0,	// (0x000566a0) field_cale_ev2_pane_g2

0x97c8,	// (0x000566b8) field_cale_ev2_pane_g3_ParamLimits

0x97c8,	// (0x000566b8) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0005c674) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0005c674) field_cale_ev2_pane_g

0x97e0,	// (0x000566d0) field_cale_ev2_pane_t1_ParamLimits

0x97e0,	// (0x000566d0) field_cale_ev2_pane_t1

0x97f7,	// (0x000566e7) field_cale_ev2_pane_t2_ParamLimits

0x97f7,	// (0x000566e7) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0005c67d) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0005c67d) field_cale_ev2_pane_t

0x8585,	// (0x00055475) main_postcard_pane_g5_ParamLimits

0x8585,	// (0x00055475) main_postcard_pane_g5

0x8593,	// (0x00055483) main_postcard_pane_g6_ParamLimits

0x8593,	// (0x00055483) main_postcard_pane_g6

0x67e1,	// (0x000536d1) camera2_autofocus_pane_cp_ParamLimits

0x67e1,	// (0x000536d1) camera2_autofocus_pane_cp

0x02e5,	// (0x0004d1d5) main_mup3_pane

0x982c,	// (0x0005671c) main_mup3_pane_g1_ParamLimits

0x982c,	// (0x0005671c) main_mup3_pane_g1

0x984d,	// (0x0005673d) main_mup3_pane_g2_ParamLimits

0x984d,	// (0x0005673d) main_mup3_pane_g2

0x98c9,	// (0x000567b9) main_mup3_pane_g3_ParamLimits

0x98c9,	// (0x000567b9) main_mup3_pane_g3

0x990e,	// (0x000567fe) main_mup3_pane_g4_ParamLimits

0x990e,	// (0x000567fe) main_mup3_pane_g4

0x9953,	// (0x00056843) main_mup3_pane_g5_ParamLimits

0x9953,	// (0x00056843) main_mup3_pane_g5

0x9998,	// (0x00056888) main_mup3_pane_g6_ParamLimits

0x9998,	// (0x00056888) main_mup3_pane_g6

0x46e9,	// (0x000515d9) main_mup3_pane_g7_ParamLimits

0x46e9,	// (0x000515d9) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0005c68d) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0005c68d) main_mup3_pane_g

0x9a0e,	// (0x000568fe) main_mup3_pane_t1_ParamLimits

0x9a0e,	// (0x000568fe) main_mup3_pane_t1

0x9a79,	// (0x00056969) main_mup3_pane_t2_ParamLimits

0x9a79,	// (0x00056969) main_mup3_pane_t2

0x9b42,	// (0x00056a32) main_mup3_pane_t4_ParamLimits

0x9b42,	// (0x00056a32) main_mup3_pane_t4

0x9b96,	// (0x00056a86) main_mup3_pane_t5_ParamLimits

0x9b96,	// (0x00056a86) main_mup3_pane_t5

0x9c46,	// (0x00056b36) main_mup3_pane_t6_ParamLimits

0x9c46,	// (0x00056b36) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0005c69e) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0005c69e) main_mup3_pane_t

0x9cee,	// (0x00056bde) mup3_progress_pane_ParamLimits

0x9cee,	// (0x00056bde) mup3_progress_pane

0x9d68,	// (0x00056c58) popup_mup3_control_window_ParamLimits

0x9d68,	// (0x00056c58) popup_mup3_control_window

0x46f7,	// (0x000515e7) popup_mup3_text_window

0x9d85,	// (0x00056c75) mup3_progress_pane_t1

0x9d9c,	// (0x00056c8c) mup3_progress_pane_t2

0x46ff,	// (0x000515ef) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0005c6ab) mup3_progress_pane_t

0x4716,	// (0x00051606) mup_progress_pane_cp03

0x026c,	// (0x0004d15c) bg_tb_trans_pane_cp04

0x9db3,	// (0x00056ca3) mup3_volume_pane

0x9dbb,	// (0x00056cab) popup_mup3_control_window_g1

0xde1f,	// (0x0005ad0f) mup3_volume_pane_g1

0xde28,	// (0x0005ad18) mup3_volume_pane_g2

0xde31,	// (0x0005ad21) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0005c6b2) mup3_volume_pane_g

0x026c,	// (0x0004d15c) bg_tb_trans_pane_cp03

0x4726,	// (0x00051616) popup_mup3_text_window_g1

0x472e,	// (0x0005161e) popup_mup3_text_window_t1

0x2194,	// (0x0004f084) list_calc_item_pane_g1_ParamLimits

0x4199,	// (0x00051089) mup_volume_pane_cp_g1

0x9749,	// (0x00056639) main_touch_calib_pane_t3

0x975d,	// (0x0005664d) main_touch_calib_pane_t4

0x9773,	// (0x00056663) main_touch_calib_pane_t5

0x0276,	// (0x0004d166) aid_cell_size_toolbar2

0x027e,	// (0x0004d16e) aid_popup3_width_pane

0x028a,	// (0x0004d17a) aid_zoom_text_msg_primary

0x67b6,	// (0x000536a6) vorec_t7

0x2158,	// (0x0004f048) bg_calc_paper_pane_g1_ParamLimits

0x2170,	// (0x0004f060) bg_calc_paper_pane_g2_ParamLimits

0x2164,	// (0x0004f054) bg_calc_paper_pane_g3_ParamLimits

0x2188,	// (0x0004f078) bg_calc_paper_pane_g4_ParamLimits

0x217c,	// (0x0004f06c) bg_calc_paper_pane_g5_ParamLimits

0x6113,	// (0x00053003) bg_calc_paper_pane_g6_ParamLimits

0x6124,	// (0x00053014) bg_calc_paper_pane_g7_ParamLimits

0x6135,	// (0x00053025) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0005c065) bg_calc_paper_pane_g_ParamLimits

0x6148,	// (0x00053038) calc_bg_paper_pane_g9_ParamLimits

0x68d2,	// (0x000537c2) image_qvga_pane_ParamLimits

0x68d2,	// (0x000537c2) image_qvga_pane

0x2079,	// (0x0004ef69) bg_popup_sub_pane_cp04_ParamLimits

0x2da3,	// (0x0004fc93) popup_mup_playback_window_g1_ParamLimits

0x2daf,	// (0x0004fc9f) popup_mup_playback_window_t1_ParamLimits

0x2dc4,	// (0x0004fcb4) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0005c3f1) popup_mup_playback_window_t_ParamLimits

0x922d,	// (0x0005611d) main_mup2_pane_g3_ParamLimits

0x922d,	// (0x0005611d) main_mup2_pane_g3

0x6bd7,	// (0x00053ac7) popup_toolbar_window_cp04

0x31bf,	// (0x000500af) popup_call2_audio_second_window_g3_ParamLimits

0x31bf,	// (0x000500af) popup_call2_audio_second_window_g3

0x35d5,	// (0x000504c5) popup_call2_audio_first_window_g4_ParamLimits

0x35d5,	// (0x000504c5) popup_call2_audio_first_window_g4

0x3c6c,	// (0x00050b5c) popup_call2_audio_in_window_g4_ParamLimits

0x3c6c,	// (0x00050b5c) popup_call2_audio_in_window_g4

0x8699,	// (0x00055589) aid_area_sk_bg_cut_ParamLimits

0x8699,	// (0x00055589) aid_area_sk_bg_cut

0x2dd9,	// (0x0004fcc9) aid_area_sk_bg_cut_2_ParamLimits

0x2dd9,	// (0x0004fcc9) aid_area_sk_bg_cut_2

0x959d,	// (0x0005648d) aid_placing_details_win

0x95a5,	// (0x00056495) aid_placing_details_win_2

0x4596,	// (0x00051486) camera2_autofocus_pane_g1_ParamLimits

0x5d1f,	// (0x00052c0f) popup_fixed_preview_cale_window_ParamLimits

0x5d1f,	// (0x00052c0f) popup_fixed_preview_cale_window

0x2bb7,	// (0x0004faa7) navi_slider_pane_g3

0x2bae,	// (0x0004fa9e) navi_slider_pane_g4

0x2ba5,	// (0x0004fa95) navi_slider_pane_g5

0x2bb7,	// (0x0004faa7) navi_slider_pane_g6

0x7ec7,	// (0x00054db7) navi_slider_pane_g7

0x2cda,	// (0x0004fbca) mup_scale_pane_g3

0x2ce3,	// (0x0004fbd3) mup_scale_pane_g4

0x2cec,	// (0x0004fbdc) mup_scale_pane_g5

0x833e,	// (0x0005522e) mup_scale_pane_g6

0x8347,	// (0x00055237) mup_scale_pane_g7

0x2bb7,	// (0x0004faa7) cams2_slider_pane_g3

0x421b,	// (0x0005110b) cams2_slider_pane_g4

0x94fa,	// (0x000563ea) cams2_slider_pane_g5

0x2bb7,	// (0x0004faa7) cams2_slider_pane_g6

0x9502,	// (0x000563f2) cams2_slider_pane_g7

0x4454,	// (0x00051344) camera2_autofocus_pane_cp_g1

0x473c,	// (0x0005162c) bg_popup_preview_window_pane_cp02_ParamLimits

0x473c,	// (0x0005162c) bg_popup_preview_window_pane_cp02

0x4748,	// (0x00051638) list_fp_cale_pane_ParamLimits

0x4748,	// (0x00051638) list_fp_cale_pane

0x4754,	// (0x00051644) popup_fixed_preview_cale_window_t1_ParamLimits

0x4754,	// (0x00051644) popup_fixed_preview_cale_window_t1

0x9dc4,	// (0x00056cb4) popup_fixed_preview_cale_window_t2_ParamLimits

0x9dc4,	// (0x00056cb4) popup_fixed_preview_cale_window_t2

0x9dd9,	// (0x00056cc9) popup_fixed_preview_cale_window_t3_ParamLimits

0x9dd9,	// (0x00056cc9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0005c6b9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0005c6b9) popup_fixed_preview_cale_window_t

0x9dee,	// (0x00056cde) list_single_fp_cale_pane_ParamLimits

0x9dee,	// (0x00056cde) list_single_fp_cale_pane

0x4772,	// (0x00051662) list_single_fp_cale_pane_g1_ParamLimits

0x4772,	// (0x00051662) list_single_fp_cale_pane_g1

0x477e,	// (0x0005166e) list_single_fp_cale_pane_g2_ParamLimits

0x477e,	// (0x0005166e) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0005c6c0) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0005c6c0) list_single_fp_cale_pane_g

0x4797,	// (0x00051687) list_single_fp_cale_pane_t1_ParamLimits

0x4797,	// (0x00051687) list_single_fp_cale_pane_t1

0x47a9,	// (0x00051699) list_single_fp_cale_pane_t2_ParamLimits

0x47a9,	// (0x00051699) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0005c6c7) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0005c6c7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x026c,	// (0x0004d15c) main_dialer_pane

0x9dfb,	// (0x00056ceb) aid_cell_size_keypad

0x9e05,	// (0x00056cf5) dialer_ne_pane

0x9e0f,	// (0x00056cff) grid_dialer_command_1_pane

0x9e17,	// (0x00056d07) grid_dialer_command_2_pane

0x9e1f,	// (0x00056d0f) grid_dialer_keypad_pane

0x9e33,	// (0x00056d23) bg_popup_call_pane_cp06_ParamLimits

0x9e33,	// (0x00056d23) bg_popup_call_pane_cp06

0x9e3f,	// (0x00056d2f) dialer_ne_clear_pane_ParamLimits

0x9e3f,	// (0x00056d2f) dialer_ne_clear_pane

0x47dc,	// (0x000516cc) dialer_ne_pane_g1

0x47e4,	// (0x000516d4) dialer_ne_pane_t1_ParamLimits

0x47e4,	// (0x000516d4) dialer_ne_pane_t1

0x9e4b,	// (0x00056d3b) dialer_ne_pane_t2_ParamLimits

0x9e4b,	// (0x00056d3b) dialer_ne_pane_t2

0x9e68,	// (0x00056d58) dialer_ne_pane_t3_ParamLimits

0x9e68,	// (0x00056d58) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0005c6cc) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0005c6cc) dialer_ne_pane_t

0x9e8c,	// (0x00056d7c) dialer_ne_pane_t3_copy1_ParamLimits

0x9e8c,	// (0x00056d7c) dialer_ne_pane_t3_copy1

0x9eb0,	// (0x00056da0) cell_dialer_keypad_pane_ParamLimits

0x9eb0,	// (0x00056da0) cell_dialer_keypad_pane

0x9ec5,	// (0x00056db5) cell_dialer_command_1_pane_ParamLimits

0x9ec5,	// (0x00056db5) cell_dialer_command_1_pane

0x9edb,	// (0x00056dcb) cell_dialer_command_2_pane_ParamLimits

0x9edb,	// (0x00056dcb) cell_dialer_command_2_pane

0x47f6,	// (0x000516e6) bg_button_pane_cp02_ParamLimits

0x47f6,	// (0x000516e6) bg_button_pane_cp02

0x9eea,	// (0x00056dda) cell_dialer_keypad_pane_g1_ParamLimits

0x9eea,	// (0x00056dda) cell_dialer_keypad_pane_g1

0x47f6,	// (0x000516e6) bg_button_pane_cp03_ParamLimits

0x47f6,	// (0x000516e6) bg_button_pane_cp03

0x9eff,	// (0x00056def) cell_dialer_command_1_pane_g1_ParamLimits

0x9eff,	// (0x00056def) cell_dialer_command_1_pane_g1

0x4802,	// (0x000516f2) bg_button_pane_cp04

0x9f13,	// (0x00056e03) cell_dialer_command_2_pane_g1

0x2b94,	// (0x0004fa84) bg_button_pane_cp06

0x480a,	// (0x000516fa) dialer_ne_clear_pane_g1

0x7e0a,	// (0x00054cfa) navi_pane_g2

0x7e38,	// (0x00054d28) navi_pane_g3

0x0002,

0xf404,	// (0x0005c2f4) navi_pane_g

0x7e63,	// (0x00054d53) navi_pane_mv_g2

0x7e8a,	// (0x00054d7a) navi_pane_mv_g5

0x7e92,	// (0x00054d82) navi_pane_mv_t1

0x214c,	// (0x0004f03c) main_clock2_pane

0x9f45,	// (0x00056e35) main_clock2_list_pane_ParamLimits

0x9f45,	// (0x00056e35) main_clock2_list_pane

0x9f6f,	// (0x00056e5f) main_clock2_pane_t1_ParamLimits

0x9f6f,	// (0x00056e5f) main_clock2_pane_t1

0x9f9d,	// (0x00056e8d) main_clock2_pane_t2_ParamLimits

0x9f9d,	// (0x00056e8d) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0005c6d3) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0005c6d3) main_clock2_pane_t

0xa006,	// (0x00056ef6) popup_clock_analogue_window_cp03_ParamLimits

0xa006,	// (0x00056ef6) popup_clock_analogue_window_cp03

0xa026,	// (0x00056f16) popup_clock_digital_window_cp02_ParamLimits

0xa026,	// (0x00056f16) popup_clock_digital_window_cp02

0xa097,	// (0x00056f87) main_clock2_list_single_pane_ParamLimits

0xa097,	// (0x00056f87) main_clock2_list_single_pane

0x2b94,	// (0x0004fa84) list_highlight_pane_cp05

0x4812,	// (0x00051702) main_clock2_list_single_pane_t1

0x6bd7,	// (0x00053ac7) popup_toolbar_window_cp04_ParamLimits

0x9606,	// (0x000564f6) camera2_autofocus_pane_g2_ParamLimits

0x9606,	// (0x000564f6) camera2_autofocus_pane_g2

0x9612,	// (0x00056502) camera2_autofocus_pane_g3_ParamLimits

0x9612,	// (0x00056502) camera2_autofocus_pane_g3

0x961e,	// (0x0005650e) camera2_autofocus_pane_g4_ParamLimits

0x961e,	// (0x0005650e) camera2_autofocus_pane_g4

0x962a,	// (0x0005651a) camera2_autofocus_pane_g5_ParamLimits

0x962a,	// (0x0005651a) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0005c61c) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0005c61c) camera2_autofocus_pane_g

0x980c,	// (0x000566fc) camera2_autofocus_pane_cp_g2

0x9814,	// (0x00056704) camera2_autofocus_pane_cp_g3

0x981c,	// (0x0005670c) camera2_autofocus_pane_cp_g4

0x9824,	// (0x00056714) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0005c682) camera2_autofocus_pane_cp_g

0x9e2b,	// (0x00056d1b) popup_dialer_spcha_window

0x026c,	// (0x0004d15c) bg_popup_sub_pane_cp07

0x4820,	// (0x00051710) list_spcha_pane

0x4828,	// (0x00051718) list_single_spcha_pane_ParamLimits

0x4828,	// (0x00051718) list_single_spcha_pane

0x026c,	// (0x0004d15c) list_highlight_pane_cp06

0x4839,	// (0x00051729) list_single_spcha_pane_t1

0x3a16,	// (0x00050906) popup_call2_audio_out_window_g4_ParamLimits

0x3a16,	// (0x00050906) popup_call2_audio_out_window_g4

0x026c,	// (0x0004d15c) main_imed2_pane

0x3ffd,	// (0x00050eed) popup_imed_adjust2_window

0x8cc9,	// (0x00055bb9) popup_imed_trans_window_ParamLimits

0x8cc9,	// (0x00055bb9) popup_imed_trans_window

0x4284,	// (0x00051174) popup_blid_sat_info2_window_t1

0x4292,	// (0x00051182) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0005c5b1) popup_blid_sat_info2_window_t

0xa141,	// (0x00057031) aid_size_cell_colour_35

0xa15b,	// (0x0005704b) aid_size_cell_colour_112

0xa172,	// (0x00057062) aid_size_cell_effect

0x02e5,	// (0x0004d1d5) bg_tb_trans_pane_cp02

0x328b,	// (0x0005017b) heading_imed_pane

0xa18c,	// (0x0005707c) listscroll_imed_pane

0x4847,	// (0x00051737) heading_imed_pane_g1

0x484f,	// (0x0005173f) heading_imed_pane_t1

0x485d,	// (0x0005174d) grid_imed_colour_35_pane_ParamLimits

0x485d,	// (0x0005174d) grid_imed_colour_35_pane

0xa198,	// (0x00057088) grid_imed_effect_pane

0x4879,	// (0x00051769) list_imed_aspect_pane

0xa1a8,	// (0x00057098) scroll_pane_cp027_ParamLimits

0xa1a8,	// (0x00057098) scroll_pane_cp027

0xa1b4,	// (0x000570a4) cell_imed_effect_pane_ParamLimits

0xa1b4,	// (0x000570a4) cell_imed_effect_pane

0x4881,	// (0x00051771) cell_imed_colour_pane_ParamLimits

0x4881,	// (0x00051771) cell_imed_colour_pane

0x48cb,	// (0x000517bb) cell_imed_colour_pane_g1_ParamLimits

0x48cb,	// (0x000517bb) cell_imed_colour_pane_g1

0x48dc,	// (0x000517cc) hgihlgiht_grid_pane_cp016_ParamLimits

0x48dc,	// (0x000517cc) hgihlgiht_grid_pane_cp016

0xa1d0,	// (0x000570c0) cell_imed_effect_pane_g1

0xa1d8,	// (0x000570c8) grid_highlight_pane_cp017

0x48ed,	// (0x000517dd) list_imed_single_pane_ParamLimits

0x48ed,	// (0x000517dd) list_imed_single_pane

0x026c,	// (0x0004d15c) list_highlight_pane_cp07

0x4901,	// (0x000517f1) list_imed_aspect_pane_comp1_t1

0x3fd1,	// (0x00050ec1) bg_tb_trans_pane_cp05

0x4923,	// (0x00051813) popup_imed_adjust2_window_g1

0x494a,	// (0x0005183a) popup_imed_adjust2_window_t1

0x4962,	// (0x00051852) slider_imed_adjust_pane

0x4976,	// (0x00051866) slider_imed_adjust_pane_g1

0x4986,	// (0x00051876) slider_imed_adjust_pane_g2

0x4996,	// (0x00051886) slider_imed_adjust_pane_g3

0x49a7,	// (0x00051897) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0005c6f0) slider_imed_adjust_pane_g

0xa1e1,	// (0x000570d1) aid_size_cell_clipart2

0xa1ed,	// (0x000570dd) grid_imed_clipart_pane

0x49b8,	// (0x000518a8) scroll_pane_cp031

0xa1f7,	// (0x000570e7) cell_imed_clipart_pane_ParamLimits

0xa1f7,	// (0x000570e7) cell_imed_clipart_pane

0xa215,	// (0x00057105) cell_imed_clipart_pane_g1

0x026c,	// (0x0004d15c) grid_highlight_pane_cp014

0x9f51,	// (0x00056e41) main_clock2_pane_g1_ParamLimits

0x9f51,	// (0x00056e41) main_clock2_pane_g1

0xa042,	// (0x00056f32) aid_call2_pane_cp10

0xa054,	// (0x00056f44) aid_call_pane_cp10

0x2ac9,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g1

0x2ac9,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g2

0xa066,	// (0x00056f56) popup_clock_analogue_window_cp10_g3

0xa066,	// (0x00056f56) popup_clock_analogue_window_cp10_g4

0x2ac9,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0005c6de) popup_clock_analogue_window_cp10_g

0xa078,	// (0x00056f68) popup_clock_analogue_window_cp10_t1

0xa0a9,	// (0x00056f99) clock_digital_number_pane_cp10_ParamLimits

0xa0a9,	// (0x00056f99) clock_digital_number_pane_cp10

0xa0c1,	// (0x00056fb1) clock_digital_number_pane_cp11_ParamLimits

0xa0c1,	// (0x00056fb1) clock_digital_number_pane_cp11

0xa0d9,	// (0x00056fc9) clock_digital_number_pane_cp12_ParamLimits

0xa0d9,	// (0x00056fc9) clock_digital_number_pane_cp12

0xa0f1,	// (0x00056fe1) clock_digital_number_pane_cp13_ParamLimits

0xa0f1,	// (0x00056fe1) clock_digital_number_pane_cp13

0xa109,	// (0x00056ff9) clock_digital_separator_pane_cp10_ParamLimits

0xa109,	// (0x00056ff9) clock_digital_separator_pane_cp10

0xa121,	// (0x00057011) popup_clock_digital_window_cp02_t1_ParamLimits

0xa121,	// (0x00057011) popup_clock_digital_window_cp02_t1

0x2071,	// (0x0004ef61) clock_digital_number_pane_cp10_g1

0x2071,	// (0x0004ef61) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0005c6f9) clock_digital_number_pane_cp10_g

0x2071,	// (0x0004ef61) clock_digital_separator_pane_cp10_g1

0x2071,	// (0x0004ef61) clock_digital_separator_pane_g2_cp10

0x2b64,	// (0x0004fa54) navi_pane_vded_g4

0x2b6d,	// (0x0004fa5d) navi_pane_vded_g5

0x2b76,	// (0x0004fa66) navi_pane_vded_t1

0x026c,	// (0x0004d15c) main_vded_pane

0xa21e,	// (0x0005710e) main_vded_pane_g1

0xa22a,	// (0x0005711a) main_vded_pane_g2

0xa234,	// (0x00057124) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0005c6fe) main_vded_pane_g

0xa23e,	// (0x0005712e) main_vded_pane_t1

0xa24c,	// (0x0005713c) main_vded_pane_t2

0x0001,

0xf815,	// (0x0005c705) main_vded_pane_t

0xa25a,	// (0x0005714a) vded_slider_pane

0xa264,	// (0x00057154) vded_video_pane

0x49c0,	// (0x000518b0) vded_video_pane_g1

0xa270,	// (0x00057160) vded_video_pane_g2

0x4454,	// (0x00051344) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0005c70a) vded_video_pane_g

0x49ca,	// (0x000518ba) vded_slider_pane_g1

0x4199,	// (0x00051089) vded_slider_pane_g2

0x49d3,	// (0x000518c3) vded_slider_pane_g3

0x49dc,	// (0x000518cc) vded_slider_pane_g4

0x49e5,	// (0x000518d5) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0005c711) vded_slider_pane_g

0x9d5c,	// (0x00056c4c) mup3_rocker_pane_ParamLimits

0x9d5c,	// (0x00056c4c) mup3_rocker_pane

0xa279,	// (0x00057169) mup3_control_keys_pane_g1

0xa281,	// (0x00057171) mup3_control_keys_pane_g2

0xa289,	// (0x00057179) mup3_control_keys_pane_g3

0xa291,	// (0x00057181) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0005c71c) mup3_control_keys_pane_g

0x5d3d,	// (0x00052c2d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5d3d,	// (0x00052c2d) popup_toolbar2_fixed_window_cp01

0x9d78,	// (0x00056c68) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9d78,	// (0x00056c68) popup_toolbar2_fixed_window_cp02

0x333d,	// (0x0005022d) popup_call2_audio_second_window_t4_ParamLimits

0x333d,	// (0x0005022d) popup_call2_audio_second_window_t4

0x3883,	// (0x00050773) popup_call2_audio_first_window_t6_ParamLimits

0x3883,	// (0x00050773) popup_call2_audio_first_window_t6

0x3b19,	// (0x00050a09) popup_call2_audio_out_window_t6_ParamLimits

0x3b19,	// (0x00050a09) popup_call2_audio_out_window_t6

0x026c,	// (0x0004d15c) main_vitu_pane

0xa2a1,	// (0x00057191) aid_size_cell_itu_ParamLimits

0xa2a1,	// (0x00057191) aid_size_cell_itu

0x0c0f,	// (0x0004daff) bg_popup_window_pane_cp08_ParamLimits

0x0c0f,	// (0x0004daff) bg_popup_window_pane_cp08

0xa2af,	// (0x0005719f) field_vitu_entry_pane_ParamLimits

0xa2af,	// (0x0005719f) field_vitu_entry_pane

0xa2be,	// (0x000571ae) grid_vitu_function_pane_ParamLimits

0xa2be,	// (0x000571ae) grid_vitu_function_pane

0xa2ce,	// (0x000571be) grid_vitu_itu_pane_ParamLimits

0xa2ce,	// (0x000571be) grid_vitu_itu_pane

0xa2dc,	// (0x000571cc) cell_vitu_itu_pane_ParamLimits

0xa2dc,	// (0x000571cc) cell_vitu_itu_pane

0xa2f3,	// (0x000571e3) cell_vitu_function_pane_ParamLimits

0xa2f3,	// (0x000571e3) cell_vitu_function_pane

0x02e5,	// (0x0004d1d5) bg_popup_sub_pane_cp08_ParamLimits

0x02e5,	// (0x0004d1d5) bg_popup_sub_pane_cp08

0xa307,	// (0x000571f7) field_vitu_entry_pane_t1_ParamLimits

0xa307,	// (0x000571f7) field_vitu_entry_pane_t1

0x4a06,	// (0x000518f6) field_vitu_entry_pane_t2_ParamLimits

0x4a06,	// (0x000518f6) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0005c72a) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0005c72a) field_vitu_entry_pane_t

0x4a23,	// (0x00051913) bg_button_pane_cp05_ParamLimits

0x4a23,	// (0x00051913) bg_button_pane_cp05

0xa320,	// (0x00057210) cell_vitu_itu_pane_g1

0xa338,	// (0x00057228) cell_vitu_itu_pane_t1_ParamLimits

0xa338,	// (0x00057228) cell_vitu_itu_pane_t1

0xa34a,	// (0x0005723a) cell_vitu_itu_pane_t2_ParamLimits

0xa34a,	// (0x0005723a) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0005c72f) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0005c72f) cell_vitu_itu_pane_t

0x4a31,	// (0x00051921) bg_button_pane_cp07

0xa38d,	// (0x0005727d) cell_vitu_function_pane_g1

0x5fab,	// (0x00052e9b) main_calc_pane_g1

0x5b41,	// (0x00052a31) aid_visual_content_pane

0x026c,	// (0x0004d15c) main_vradio_pane

0xa396,	// (0x00057286) main_vradio_pane_g1_ParamLimits

0xa396,	// (0x00057286) main_vradio_pane_g1

0x4a3b,	// (0x0005192b) main_vradio_pane_g2_ParamLimits

0x4a3b,	// (0x0005192b) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0005c736) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0005c736) main_vradio_pane_g

0xa3a4,	// (0x00057294) main_vradio_pane_t1_ParamLimits

0xa3a4,	// (0x00057294) main_vradio_pane_t1

0xa3b6,	// (0x000572a6) main_vradio_pane_t2_ParamLimits

0xa3b6,	// (0x000572a6) main_vradio_pane_t2

0x4a48,	// (0x00051938) main_vradio_pane_t3_ParamLimits

0x4a48,	// (0x00051938) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0005c73b) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0005c73b) main_vradio_pane_t

0xa3c8,	// (0x000572b8) vradio_rocker_control_pane_ParamLimits

0xa3c8,	// (0x000572b8) vradio_rocker_control_pane

0xa3d4,	// (0x000572c4) vradio_station_info_pane_ParamLimits

0xa3d4,	// (0x000572c4) vradio_station_info_pane

0x4a5c,	// (0x0005194c) vradio_frequency_info_pane_ParamLimits

0x4a5c,	// (0x0005194c) vradio_frequency_info_pane

0x4454,	// (0x00051344) vradio_station_info_pane_g1

0x4a6b,	// (0x0005195b) vradio_station_info_pane_t1_ParamLimits

0x4a6b,	// (0x0005195b) vradio_station_info_pane_t1

0x4a8d,	// (0x0005197d) vradio_station_info_pane_t2_ParamLimits

0x4a8d,	// (0x0005197d) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0005c742) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0005c742) vradio_station_info_pane_t

0x4a9f,	// (0x0005198f) vradio_tuning_pane

0x4aa7,	// (0x00051997) vradio_rocker_control_pane_g1

0x4aaf,	// (0x0005199f) vradio_rocker_control_pane_g2

0x4ab7,	// (0x000519a7) vradio_rocker_control_pane_g3

0x4abf,	// (0x000519af) vradio_rocker_control_pane_g4

0x4ac7,	// (0x000519b7) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0005c747) vradio_rocker_control_pane_g

0xa3e1,	// (0x000572d1) vradio_frequency_info_pane_g1

0x4acf,	// (0x000519bf) vradio_frequency_info_pane_t1_ParamLimits

0x4acf,	// (0x000519bf) vradio_frequency_info_pane_t1

0xa3eb,	// (0x000572db) vradio_tuning_pane_g1

0xa3f6,	// (0x000572e6) vradio_tuning_pane_t1

0x02a2,	// (0x0004d192) area_side_right_pane_ParamLimits

0x02a2,	// (0x0004d192) area_side_right_pane

0x3f98,	// (0x00050e88) status_small_pane_g1

0x3fa0,	// (0x00050e90) status_small_pane_g2

0x3fa9,	// (0x00050e99) status_small_pane_g3

0x3fb2,	// (0x00050ea2) status_small_pane_g4

0x0003,

0xf617,	// (0x0005c507) status_small_pane_g

0x3fbb,	// (0x00050eab) status_small_pane_t1

0x026c,	// (0x0004d15c) main_video3_pane

0x4ae3,	// (0x000519d3) cams_zoom_vslider_pane

0x4aeb,	// (0x000519db) image3_wide_pane_ParamLimits

0x4aeb,	// (0x000519db) image3_wide_pane

0x4b05,	// (0x000519f5) image3_wide_small_pane

0x4b11,	// (0x00051a01) main_video3_pane_g1_ParamLimits

0x4b11,	// (0x00051a01) main_video3_pane_g1

0x4b2d,	// (0x00051a1d) main_video3_pane_g2_ParamLimits

0x4b2d,	// (0x00051a1d) main_video3_pane_g2

0x0001,

0xf862,	// (0x0005c752) main_video3_pane_g_ParamLimits

0xf862,	// (0x0005c752) main_video3_pane_g

0x4b49,	// (0x00051a39) main_video3_pane_t1_ParamLimits

0x4b49,	// (0x00051a39) main_video3_pane_t1

0x4b74,	// (0x00051a64) main_video3_pane_t2_ParamLimits

0x4b74,	// (0x00051a64) main_video3_pane_t2

0x4ba1,	// (0x00051a91) main_video3_pane_t3_ParamLimits

0x4ba1,	// (0x00051a91) main_video3_pane_t3

0x0002,

0xf867,	// (0x0005c757) main_video3_pane_t_ParamLimits

0xf867,	// (0x0005c757) main_video3_pane_t

0x4bce,	// (0x00051abe) cams_zoom_vslider_pane_g1

0x4bd7,	// (0x00051ac7) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0005c75e) cams_zoom_vslider_pane_g

0x4bdf,	// (0x00051acf) small_slider_vertical_pane

0x4454,	// (0x00051344) small_slider_vertical_pane_g1

0x4454,	// (0x00051344) small_slider_vertical_pane_g2

0x4be7,	// (0x00051ad7) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0005c763) small_slider_vertical_pane_g

0x026c,	// (0x0004d15c) main_hwr_training_pane

0x4bf0,	// (0x00051ae0) hwr_training_instruct_pane_ParamLimits

0x4bf0,	// (0x00051ae0) hwr_training_instruct_pane

0xa405,	// (0x000572f5) hwr_training_navi_pane_ParamLimits

0xa405,	// (0x000572f5) hwr_training_navi_pane

0xa41f,	// (0x0005730f) hwr_training_write_pane_ParamLimits

0xa41f,	// (0x0005730f) hwr_training_write_pane

0x026c,	// (0x0004d15c) bg_frame_shadow_pane

0x4c27,	// (0x00051b17) hwr_training_write_pane_g1

0x4c2f,	// (0x00051b1f) hwr_training_write_pane_g2

0x4c37,	// (0x00051b27) hwr_training_write_pane_g3

0x4c3f,	// (0x00051b2f) hwr_training_write_pane_g4

0x4c47,	// (0x00051b37) hwr_training_write_pane_g5

0x4c4f,	// (0x00051b3f) hwr_training_write_pane_g6

0x4c57,	// (0x00051b47) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0005c76a) hwr_training_write_pane_g

0xa457,	// (0x00057347) hwr_training_navi_pane_g1_ParamLimits

0xa457,	// (0x00057347) hwr_training_navi_pane_g1

0xa469,	// (0x00057359) hwr_training_navi_pane_g2_ParamLimits

0xa469,	// (0x00057359) hwr_training_navi_pane_g2

0xa47b,	// (0x0005736b) hwr_training_navi_pane_g3_ParamLimits

0xa47b,	// (0x0005736b) hwr_training_navi_pane_g3

0xa48b,	// (0x0005737b) hwr_training_navi_pane_g4_ParamLimits

0xa48b,	// (0x0005737b) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0005c779) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0005c779) hwr_training_navi_pane_g

0xa4a5,	// (0x00057395) hwr_training_navi_pane_t1

0xa4b3,	// (0x000573a3) list_single_hwr_training_instruct_pane_ParamLimits

0xa4b3,	// (0x000573a3) list_single_hwr_training_instruct_pane

0x4c5f,	// (0x00051b4f) list_single_hwr_training_instruct_pane_t1

0x4394,	// (0x00051284) bg_frame_shadow_pane_g1

0x4c6e,	// (0x00051b5e) bg_frame_shadow_pane_g2

0x4c76,	// (0x00051b66) bg_frame_shadow_pane_g3

0x4c7e,	// (0x00051b6e) bg_frame_shadow_pane_g4

0x4c86,	// (0x00051b76) bg_frame_shadow_pane_g5

0x4c8e,	// (0x00051b7e) bg_frame_shadow_pane_g6

0x4c96,	// (0x00051b86) bg_frame_shadow_pane_g7

0x2217,	// (0x0004f107) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0005c784) bg_frame_shadow_pane_g

0x026c,	// (0x0004d15c) main_video_tele_dialer_pane

0xa4cc,	// (0x000573bc) aid_size_cell_video_keypad_ParamLimits

0xa4cc,	// (0x000573bc) aid_size_cell_video_keypad

0xa4dc,	// (0x000573cc) grid_video_dialer_keypad_pane_ParamLimits

0xa4dc,	// (0x000573cc) grid_video_dialer_keypad_pane

0xa50e,	// (0x000573fe) video_down_pane_cp_ParamLimits

0xa50e,	// (0x000573fe) video_down_pane_cp

0xa536,	// (0x00057426) cell_video_dialer_keypad_pane_ParamLimits

0xa536,	// (0x00057426) cell_video_dialer_keypad_pane

0x4c9e,	// (0x00051b8e) bg_button_pane_cp08_ParamLimits

0x4c9e,	// (0x00051b8e) bg_button_pane_cp08

0xa54d,	// (0x0005743d) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa54d,	// (0x0005743d) cell_video_dialer_keypad_pane_g1

0x9d50,	// (0x00056c40) mup3_rocker2_pane_ParamLimits

0x9d50,	// (0x00056c40) mup3_rocker2_pane

0x4454,	// (0x00051344) mup3_rocker2_pane_g1

0x8c4b,	// (0x00055b3b) main_dialer2_pane

0x026c,	// (0x0004d15c) main_mp4_pane

0xa58c,	// (0x0005747c) main_mp4_pane_g1_ParamLimits

0xa58c,	// (0x0005747c) main_mp4_pane_g1

0xa59a,	// (0x0005748a) main_mp4_pane_g2_ParamLimits

0xa59a,	// (0x0005748a) main_mp4_pane_g2

0xa5a8,	// (0x00057498) main_mp4_pane_g3_ParamLimits

0xa5a8,	// (0x00057498) main_mp4_pane_g3

0xa5fb,	// (0x000574eb) main_mp4_pane_g4_ParamLimits

0xa5fb,	// (0x000574eb) main_mp4_pane_g4

0xa623,	// (0x00057513) main_mp4_pane_g5_ParamLimits

0xa623,	// (0x00057513) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0005c7a4) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0005c7a4) main_mp4_pane_g

0xa673,	// (0x00057563) main_mp4_pane_t1_ParamLimits

0xa673,	// (0x00057563) main_mp4_pane_t1

0xa6cf,	// (0x000575bf) main_mp4_pane_t2_ParamLimits

0xa6cf,	// (0x000575bf) main_mp4_pane_t2

0xde3a,	// (0x0005ad2a) main_mp4_pane_t3_ParamLimits

0xde3a,	// (0x0005ad2a) main_mp4_pane_t3

0xa721,	// (0x00057611) main_mp4_pane_t4_ParamLimits

0xa721,	// (0x00057611) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0005c7b1) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0005c7b1) main_mp4_pane_t

0xa761,	// (0x00057651) mp4_progress_pane_ParamLimits

0xa761,	// (0x00057651) mp4_progress_pane

0xa7ab,	// (0x0005769b) mp4_rocker_pane_ParamLimits

0xa7ab,	// (0x0005769b) mp4_rocker_pane

0xde62,	// (0x0005ad52) mp4_progress_pane_t1

0xde7b,	// (0x0005ad6b) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0005c7ba) mp4_progress_pane_t

0xde94,	// (0x0005ad84) mup_progress_pane_cp04

0xdea0,	// (0x0005ad90) mp4_rocker_pane_g1

0xa7cd,	// (0x000576bd) aid_cell_size_keypad2_ParamLimits

0xa7cd,	// (0x000576bd) aid_cell_size_keypad2

0xa7dd,	// (0x000576cd) dialer2_ne_pane_ParamLimits

0xa7dd,	// (0x000576cd) dialer2_ne_pane

0xa7e9,	// (0x000576d9) grid_dialer2_keypad_pane_ParamLimits

0xa7e9,	// (0x000576d9) grid_dialer2_keypad_pane

0xdeaa,	// (0x0005ad9a) bg_popup_call_pane_cp07_ParamLimits

0xdeaa,	// (0x0005ad9a) bg_popup_call_pane_cp07

0xa7f7,	// (0x000576e7) dialer2_ne_pane_t1_ParamLimits

0xa7f7,	// (0x000576e7) dialer2_ne_pane_t1

0xa81c,	// (0x0005770c) cell_dialer2_keypad_pane_ParamLimits

0xa81c,	// (0x0005770c) cell_dialer2_keypad_pane

0xdeca,	// (0x0005adba) bg_button_pane_pane_cp04_ParamLimits

0xdeca,	// (0x0005adba) bg_button_pane_pane_cp04

0xa833,	// (0x00057723) cell_dialer2_keypad_pane_g1_ParamLimits

0xa833,	// (0x00057723) cell_dialer2_keypad_pane_g1

0x6aa9,	// (0x00053999) aid_placing_vt_set_content_ParamLimits

0x6aa9,	// (0x00053999) aid_placing_vt_set_content

0x6ad1,	// (0x000539c1) aid_placing_vt_set_title_ParamLimits

0x6ad1,	// (0x000539c1) aid_placing_vt_set_title

0x026c,	// (0x0004d15c) main_image3_pane

0xa8cd,	// (0x000577bd) area_side_right_pane_cp01_ParamLimits

0xa8cd,	// (0x000577bd) area_side_right_pane_cp01

0xa8fc,	// (0x000577ec) main_image3_pane_g1_ParamLimits

0xa8fc,	// (0x000577ec) main_image3_pane_g1

0xa90a,	// (0x000577fa) main_image3_pane_g2_ParamLimits

0xa90a,	// (0x000577fa) main_image3_pane_g2

0xa923,	// (0x00057813) main_image3_pane_g3_ParamLimits

0xa923,	// (0x00057813) main_image3_pane_g3

0xa93c,	// (0x0005782c) main_image3_pane_g4_ParamLimits

0xa93c,	// (0x0005782c) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0005c7c9) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0005c7c9) main_image3_pane_g

0xa955,	// (0x00057845) main_image3_pane_t1_ParamLimits

0xa955,	// (0x00057845) main_image3_pane_t1

0xa97a,	// (0x0005786a) main_image3_pane_t2_ParamLimits

0xa97a,	// (0x0005786a) main_image3_pane_t2

0xa999,	// (0x00057889) main_image3_pane_t3_ParamLimits

0xa999,	// (0x00057889) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0005c7d2) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0005c7d2) main_image3_pane_t

0x0c0f,	// (0x0004daff) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c0f,	// (0x0004daff) grid_sctrl_middle_pane_cp01

0xa9fa,	// (0x000578ea) cell_sctrl_middle_pane_cp01_ParamLimits

0xa9fa,	// (0x000578ea) cell_sctrl_middle_pane_cp01

0xaa0b,	// (0x000578fb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa0b,	// (0x000578fb) cell_sctrl_middle_pane_cp01_g1

0x026c,	// (0x0004d15c) main_call4_pane

0xaa18,	// (0x00057908) aid_size_button_call4_ParamLimits

0xaa18,	// (0x00057908) aid_size_button_call4

0xaa4a,	// (0x0005793a) call4_windows_pane_ParamLimits

0xaa4a,	// (0x0005793a) call4_windows_pane

0xaa66,	// (0x00057956) grid_call4_button_pane_ParamLimits

0xaa66,	// (0x00057956) grid_call4_button_pane

0xded6,	// (0x0005adc6) call4_windows_conf_pane

0xaa8a,	// (0x0005797a) popup_call4_audio_first_window_ParamLimits

0xaa8a,	// (0x0005797a) popup_call4_audio_first_window

0xaab6,	// (0x000579a6) popup_call4_audio_second_window_ParamLimits

0xaab6,	// (0x000579a6) popup_call4_audio_second_window

0xdf13,	// (0x0005ae03) popup_call4_audio_wait_window_ParamLimits

0xdf13,	// (0x0005ae03) popup_call4_audio_wait_window

0xaaca,	// (0x000579ba) cell_call4_button_pane_ParamLimits

0xaaca,	// (0x000579ba) cell_call4_button_pane

0xaaed,	// (0x000579dd) bg_button_pane_cp09_ParamLimits

0xaaed,	// (0x000579dd) bg_button_pane_cp09

0xaaf9,	// (0x000579e9) cell_call4_button_pane_g1_ParamLimits

0xaaf9,	// (0x000579e9) cell_call4_button_pane_g1

0xab06,	// (0x000579f6) cell_call4_button_pane_t1_ParamLimits

0xab06,	// (0x000579f6) cell_call4_button_pane_t1

0xdf5b,	// (0x0005ae4b) popup_call4_audio_conf_window_ParamLimits

0xdf5b,	// (0x0005ae4b) popup_call4_audio_conf_window

0x9d85,	// (0x00056c75) mup3_progress_pane_t1_ParamLimits

0x9d9c,	// (0x00056c8c) mup3_progress_pane_t2_ParamLimits

0x46ff,	// (0x000515ef) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0005c6ab) mup3_progress_pane_t_ParamLimits

0x4716,	// (0x00051606) mup_progress_pane_cp03_ParamLimits

0xa299,	// (0x00057189) mup3_control_keys_pane_g4_copy1

0xa78f,	// (0x0005767f) mp4_rocker2_pane_ParamLimits

0xa78f,	// (0x0005767f) mp4_rocker2_pane

0xdf75,	// (0x0005ae65) mp4_rocker2_pane_g1

0xdf7d,	// (0x0005ae6d) mp4_rocker2_pane_g2

0xab18,	// (0x00057a08) mp4_rocker2_pane_g3

0xab20,	// (0x00057a10) mp4_rocker2_pane_g4

0xab28,	// (0x00057a18) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0005c7db) mp4_rocker2_pane_g

0x026c,	// (0x0004d15c) main_camera4_pane

0x026c,	// (0x0004d15c) main_video4_pane

0xa4ea,	// (0x000573da) main_video_tele_dialer_pane_t1_ParamLimits

0xa4ea,	// (0x000573da) main_video_tele_dialer_pane_t1

0xa4fc,	// (0x000573ec) main_video_tele_dialer_pane_t2_ParamLimits

0xa4fc,	// (0x000573ec) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0005c795) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0005c795) main_video_tele_dialer_pane_t

0xab48,	// (0x00057a38) cam4_autofocus_pane_ParamLimits

0xab48,	// (0x00057a38) cam4_autofocus_pane

0xab60,	// (0x00057a50) cam4_image_uncrop_pane_ParamLimits

0xab60,	// (0x00057a50) cam4_image_uncrop_pane

0xab79,	// (0x00057a69) cam4_indicators_pane_ParamLimits

0xab79,	// (0x00057a69) cam4_indicators_pane

0xab95,	// (0x00057a85) main_camera4_pane_g1_ParamLimits

0xab95,	// (0x00057a85) main_camera4_pane_g1

0xaba1,	// (0x00057a91) main_camera4_pane_g2_ParamLimits

0xaba1,	// (0x00057a91) main_camera4_pane_g2

0xaba1,	// (0x00057a91) main_camera4_pane_g3_ParamLimits

0xaba1,	// (0x00057a91) main_camera4_pane_g3

0xabad,	// (0x00057a9d) main_camera4_pane_g4_ParamLimits

0xabad,	// (0x00057a9d) main_camera4_pane_g4

0xabb9,	// (0x00057aa9) main_camera4_pane_g5_ParamLimits

0xabb9,	// (0x00057aa9) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0005c7e6) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0005c7e6) main_camera4_pane_g

0xabd3,	// (0x00057ac3) main_camera4_pane_t1_ParamLimits

0xabd3,	// (0x00057ac3) main_camera4_pane_t1

0xac1d,	// (0x00057b0d) bg_tb_trans_pane_cp06

0xac33,	// (0x00057b23) cam4_indicators_pane_g1

0xac43,	// (0x00057b33) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0005c801) cam4_indicators_pane_g

0xac5b,	// (0x00057b4b) cam4_indicators_pane_t1

0xac87,	// (0x00057b77) main_video4_pane_g1_ParamLimits

0xac87,	// (0x00057b77) main_video4_pane_g1

0xac93,	// (0x00057b83) main_video4_pane_g2_ParamLimits

0xac93,	// (0x00057b83) main_video4_pane_g2

0xac9f,	// (0x00057b8f) main_video4_pane_g3_ParamLimits

0xac9f,	// (0x00057b8f) main_video4_pane_g3

0xacab,	// (0x00057b9b) main_video4_pane_g4_ParamLimits

0xacab,	// (0x00057b9b) main_video4_pane_g4

0x0004,

0xf918,	// (0x0005c808) main_video4_pane_g_ParamLimits

0xf918,	// (0x0005c808) main_video4_pane_g

0xaccd,	// (0x00057bbd) vid4_indicators_pane_ParamLimits

0xaccd,	// (0x00057bbd) vid4_indicators_pane

0xaceb,	// (0x00057bdb) video4_image_uncrop_cif_pane_ParamLimits

0xaceb,	// (0x00057bdb) video4_image_uncrop_cif_pane

0xacfa,	// (0x00057bea) video4_image_uncrop_nhd_pane_ParamLimits

0xacfa,	// (0x00057bea) video4_image_uncrop_nhd_pane

0xab60,	// (0x00057a50) video4_image_uncrop_vga_pane_ParamLimits

0xab60,	// (0x00057a50) video4_image_uncrop_vga_pane

0xad09,	// (0x00057bf9) bg_tb_trans_pane_cp07

0xad21,	// (0x00057c11) vid4_indicators_pane_g1

0xad33,	// (0x00057c23) vid4_indicators_pane_g2

0xad46,	// (0x00057c36) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0005c813) vid4_indicators_pane_g

0xad73,	// (0x00057c63) vid4_indicators_pane_t1

0xad8e,	// (0x00057c7e) cam4_autofocus_pane_g1

0xad96,	// (0x00057c86) cam4_autofocus_pane_g2

0xad9e,	// (0x00057c8e) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0005c81e) cam4_autofocus_pane_g

0xada6,	// (0x00057c96) cam4_autofocus_pane_g3_copy1

0xa51a,	// (0x0005740a) video_down_pane_cp_t1

0xa528,	// (0x00057418) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0005c79a) video_down_pane_cp_t

0x0c0f,	// (0x0004daff) popup_vitu2_window_ParamLimits

0x0c0f,	// (0x0004daff) popup_vitu2_window

0xadae,	// (0x00057c9e) aid_size_cell2_itu2_ParamLimits

0xadae,	// (0x00057c9e) aid_size_cell2_itu2

0xadd0,	// (0x00057cc0) aid_size_cell_itu2_ParamLimits

0xadd0,	// (0x00057cc0) aid_size_cell_itu2

0xae14,	// (0x00057d04) bg_popup_window_pane_cp09_ParamLimits

0xae14,	// (0x00057d04) bg_popup_window_pane_cp09

0xae22,	// (0x00057d12) field_vitu2_entry_pane_ParamLimits

0xae22,	// (0x00057d12) field_vitu2_entry_pane

0xae42,	// (0x00057d32) grid_vitu2_function_pane_ParamLimits

0xae42,	// (0x00057d32) grid_vitu2_function_pane

0xae86,	// (0x00057d76) grid_vitu2_itu_pane_ParamLimits

0xae86,	// (0x00057d76) grid_vitu2_itu_pane

0xaefa,	// (0x00057dea) cell_vitu2_itu_pane_ParamLimits

0xaefa,	// (0x00057dea) cell_vitu2_itu_pane

0xaf11,	// (0x00057e01) cell_vitu2_function_pane_ParamLimits

0xaf11,	// (0x00057e01) cell_vitu2_function_pane

0xdf85,	// (0x0005ae75) bg_popup_call_pane_cp08_ParamLimits

0xdf85,	// (0x0005ae75) bg_popup_call_pane_cp08

0xdf9e,	// (0x0005ae8e) field_vitu2_entry_pane_g1

0xdfaa,	// (0x0005ae9a) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0005c825) field_vitu2_entry_pane_g

0x0c27,	// (0x0004db17) field_vitu2_entry_pane_t1_ParamLimits

0x0c27,	// (0x0004db17) field_vitu2_entry_pane_t1

0x0c56,	// (0x0004db46) field_vitu2_entry_pane_t2_ParamLimits

0x0c56,	// (0x0004db46) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0005c82c) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0005c82c) field_vitu2_entry_pane_t

0xaf55,	// (0x00057e45) bg_button_pane_cp010_ParamLimits

0xaf55,	// (0x00057e45) bg_button_pane_cp010

0xaf63,	// (0x00057e53) cell_vitu2_itu_pane_g1

0xaf81,	// (0x00057e71) cell_vitu2_itu_pane_t1_ParamLimits

0xaf81,	// (0x00057e71) cell_vitu2_itu_pane_t1

0x5a46,	// (0x00052936) cell_vitu2_itu_pane_t2_ParamLimits

0x5a46,	// (0x00052936) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0005c836) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0005c836) cell_vitu2_itu_pane_t

0xad09,	// (0x00057bf9) bg_button_pane_cp011

0xafd3,	// (0x00057ec3) cell_vitu2_function_pane_g1

0x026c,	// (0x0004d15c) main_myfav_hc_pane

0xa9db,	// (0x000578cb) popup_image3_note_pane_ParamLimits

0xa9db,	// (0x000578cb) popup_image3_note_pane

0xa9e9,	// (0x000578d9) popup_image3_tool_bar_pane_ParamLimits

0xa9e9,	// (0x000578d9) popup_image3_tool_bar_pane

0x5ab4,	// (0x000529a4) cell_vitu2_itu_pane_t3_ParamLimits

0x5ab4,	// (0x000529a4) cell_vitu2_itu_pane_t3

0x026c,	// (0x0004d15c) bg_popup_trans_pane

0xdfcc,	// (0x0005aebc) grid_image3_tool_bar_pane

0xdfd6,	// (0x0005aec6) bg_popup_trans_pane_g1

0x2558,	// (0x0004f448) bg_popup_trans_pane_g2

0xdfde,	// (0x0005aece) bg_popup_trans_pane_g3

0xdfe6,	// (0x0005aed6) bg_popup_trans_pane_g4

0xdfee,	// (0x0005aede) bg_popup_trans_pane_g5

0xdff6,	// (0x0005aee6) bg_popup_trans_pane_g6

0xdffe,	// (0x0005aeee) bg_popup_trans_pane_g7

0xe006,	// (0x0005aef6) bg_popup_trans_pane_g8

0x2538,	// (0x0004f428) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0005c83d) bg_popup_trans_pane_g

0xe00e,	// (0x0005aefe) cell_image3_tool_bar_pane_ParamLimits

0xe00e,	// (0x0005aefe) cell_image3_tool_bar_pane

0x4454,	// (0x00051344) cell_image3_tool_bar_pane_g1

0x026c,	// (0x0004d15c) bg_popup_trans_pane_cp1

0xe024,	// (0x0005af14) popup_image3_note_pane_t1

0xe032,	// (0x0005af22) popup_image3_note_pane_t2

0xe040,	// (0x0005af30) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0005c850) popup_image3_note_pane_t

0xe050,	// (0x0005af40) popup_image3_note_pane_t3_copy1

0xafe7,	// (0x00057ed7) bg_myfav_hc_instruction_pane_ParamLimits

0xafe7,	// (0x00057ed7) bg_myfav_hc_instruction_pane

0xafff,	// (0x00057eef) cell_myfav_contact_pane_ParamLimits

0xafff,	// (0x00057eef) cell_myfav_contact_pane

0xb019,	// (0x00057f09) cell_myfav_contact_pane_cp1_ParamLimits

0xb019,	// (0x00057f09) cell_myfav_contact_pane_cp1

0xb031,	// (0x00057f21) cell_myfav_contact_pane_cp2_ParamLimits

0xb031,	// (0x00057f21) cell_myfav_contact_pane_cp2

0xb049,	// (0x00057f39) cell_myfav_contact_pane_cp3_ParamLimits

0xb049,	// (0x00057f39) cell_myfav_contact_pane_cp3

0xb060,	// (0x00057f50) cell_myfav_contact_pane_cp4_ParamLimits

0xb060,	// (0x00057f50) cell_myfav_contact_pane_cp4

0xb076,	// (0x00057f66) cell_myfav_contact_pane_cp5_ParamLimits

0xb076,	// (0x00057f66) cell_myfav_contact_pane_cp5

0xb08a,	// (0x00057f7a) cell_myfav_contact_pane_cp6_ParamLimits

0xb08a,	// (0x00057f7a) cell_myfav_contact_pane_cp6

0xb09e,	// (0x00057f8e) cell_myfav_contact_pane_cp7_ParamLimits

0xb09e,	// (0x00057f8e) cell_myfav_contact_pane_cp7

0xe05e,	// (0x0005af4e) listscroll_gen_pane_cp05

0xb0b6,	// (0x00057fa6) main_myfav_hc_pane_g1_ParamLimits

0xb0b6,	// (0x00057fa6) main_myfav_hc_pane_g1

0xb0d0,	// (0x00057fc0) main_myfav_hc_pane_g2_ParamLimits

0xb0d0,	// (0x00057fc0) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0005c857) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0005c857) main_myfav_hc_pane_g

0xb102,	// (0x00057ff2) main_myfav_hc_pane_t1_ParamLimits

0xb102,	// (0x00057ff2) main_myfav_hc_pane_t1

0xe067,	// (0x0005af57) main_myfav_hc_pane_t2_ParamLimits

0xe067,	// (0x0005af57) main_myfav_hc_pane_t2

0xe079,	// (0x0005af69) main_myfav_hc_pane_t3_ParamLimits

0xe079,	// (0x0005af69) main_myfav_hc_pane_t3

0xb119,	// (0x00058009) main_myfav_hc_pane_t4_ParamLimits

0xb119,	// (0x00058009) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0005c85e) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0005c85e) main_myfav_hc_pane_t

0x4454,	// (0x00051344) bg_myfav_hc_instruction_pane_g1

0xe08b,	// (0x0005af7b) cell_myfav_contact_pane_g1_ParamLimits

0xe08b,	// (0x0005af7b) cell_myfav_contact_pane_g1

0xe08b,	// (0x0005af7b) cell_myfav_contact_pane_g2_ParamLimits

0xe08b,	// (0x0005af7b) cell_myfav_contact_pane_g2

0xe097,	// (0x0005af87) cell_myfav_contact_pane_g3_ParamLimits

0xe097,	// (0x0005af87) cell_myfav_contact_pane_g3

0x46e9,	// (0x000515d9) cell_myfav_contact_pane_g4_ParamLimits

0x46e9,	// (0x000515d9) cell_myfav_contact_pane_g4

0xe0a4,	// (0x0005af94) cell_myfav_contact_pane_g5_ParamLimits

0xe0a4,	// (0x0005af94) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0005c869) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0005c869) cell_myfav_contact_pane_g

0xb0ea,	// (0x00057fda) main_myfav_hc_pane_g3_ParamLimits

0xb0ea,	// (0x00057fda) main_myfav_hc_pane_g3

0x5c81,	// (0x00052b71) popup_adpt_find_window

0xb143,	// (0x00058033) afind_page_pane_ParamLimits

0xb143,	// (0x00058033) afind_page_pane

0xb150,	// (0x00058040) aid_size_cell_afind_ParamLimits

0xb150,	// (0x00058040) aid_size_cell_afind

0xb16a,	// (0x0005805a) bg_popup_sub_pane_cp09_ParamLimits

0xb16a,	// (0x0005805a) bg_popup_sub_pane_cp09

0xb177,	// (0x00058067) find_pane_cp01_ParamLimits

0xb177,	// (0x00058067) find_pane_cp01

0xe0b0,	// (0x0005afa0) grid_afind_control_pane_ParamLimits

0xe0b0,	// (0x0005afa0) grid_afind_control_pane

0xb184,	// (0x00058074) grid_afind_pane_ParamLimits

0xb184,	// (0x00058074) grid_afind_pane

0xb1a0,	// (0x00058090) cell_afind_pane_ParamLimits

0xb1a0,	// (0x00058090) cell_afind_pane

0x4454,	// (0x00051344) afind_page_pane_g1

0xb1ea,	// (0x000580da) afind_page_pane_g2

0xb1f3,	// (0x000580e3) afind_page_pane_g3

0x0002,

0xf984,	// (0x0005c874) afind_page_pane_g

0xb1fc,	// (0x000580ec) afind_page_pane_t1

0xe0c4,	// (0x0005afb4) cell_afind_grid_control_pane_ParamLimits

0xe0c4,	// (0x0005afb4) cell_afind_grid_control_pane

0xdeca,	// (0x0005adba) bg_button_pane_cp69_ParamLimits

0xdeca,	// (0x0005adba) bg_button_pane_cp69

0xb21c,	// (0x0005810c) cell_afind_pane_g1_ParamLimits

0xb21c,	// (0x0005810c) cell_afind_pane_g1

0xb229,	// (0x00058119) cell_afind_pane_t1_ParamLimits

0xb229,	// (0x00058119) cell_afind_pane_t1

0x234d,	// (0x0004f23d) bg_button_pane_cp72

0xe0d3,	// (0x0005afc3) cell_afind_grid_control_pane_g1

0x87c6,	// (0x000556b6) aid_image_placing_area_ParamLimits

0x87c6,	// (0x000556b6) aid_image_placing_area

0x49ee,	// (0x000518de) field_vitu_entry_pane_g1_ParamLimits

0x49ee,	// (0x000518de) field_vitu_entry_pane_g1

0x49fa,	// (0x000518ea) field_vitu_entry_pane_g2_ParamLimits

0x49fa,	// (0x000518ea) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0005c725) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0005c725) field_vitu_entry_pane_g

0xa320,	// (0x00057210) cell_vitu_itu_pane_g1_ParamLimits

0xa370,	// (0x00057260) cell_vitu_itu_pane_t3_ParamLimits

0xa370,	// (0x00057260) cell_vitu_itu_pane_t3

0xde62,	// (0x0005ad52) mp4_progress_pane_t1_ParamLimits

0xde7b,	// (0x0005ad6b) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0005c7ba) mp4_progress_pane_t_ParamLimits

0xde94,	// (0x0005ad84) mup_progress_pane_cp04_ParamLimits

0xb12d,	// (0x0005801d) main_myfav_hc_pane_t5_ParamLimits

0xb12d,	// (0x0005801d) main_myfav_hc_pane_t5

0x0292,	// (0x0004d182) aid_zoom_text_primary

0x5c81,	// (0x00052b71) popup_adpt_find_window_ParamLimits

0x02e5,	// (0x0004d1d5) main_cam_set_pane

0xab87,	// (0x00057a77) cam4_zoom_pane_ParamLimits

0xab87,	// (0x00057a77) cam4_zoom_pane

0xb23b,	// (0x0005812b) main_cam_set_pane_g1_ParamLimits

0xb23b,	// (0x0005812b) main_cam_set_pane_g1

0xb249,	// (0x00058139) main_cam_set_pane_g2_ParamLimits

0xb249,	// (0x00058139) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0005c87b) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0005c87b) main_cam_set_pane_g

0xb255,	// (0x00058145) main_cam_set_pane_t1_ParamLimits

0xb255,	// (0x00058145) main_cam_set_pane_t1

0xb271,	// (0x00058161) main_cset_listscroll_pane_ParamLimits

0xb271,	// (0x00058161) main_cset_listscroll_pane

0xb2a0,	// (0x00058190) main_cset_slider_pane_ParamLimits

0xb2a0,	// (0x00058190) main_cset_slider_pane

0xe0e4,	// (0x0005afd4) main_cset_list_pane_ParamLimits

0xe0e4,	// (0x0005afd4) main_cset_list_pane

0xe0f4,	// (0x0005afe4) scroll_pane_cp028

0xb2c1,	// (0x000581b1) aid_area_touch_slider

0xb2dd,	// (0x000581cd) cset_slider_pane

0xb307,	// (0x000581f7) main_cset_slider_pane_g1

0xb31c,	// (0x0005820c) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0005c880) main_cset_slider_pane_g

0xe12d,	// (0x0005b01d) main_cset_slider_pane_t1

0xb3d8,	// (0x000582c8) main_cset_slider_pane_t2

0xb3f2,	// (0x000582e2) main_cset_slider_pane_t3

0xb40c,	// (0x000582fc) main_cset_slider_pane_t4

0xb426,	// (0x00058316) main_cset_slider_pane_t5

0xb440,	// (0x00058330) main_cset_slider_pane_t6

0xb455,	// (0x00058345) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0005c8a5) main_cset_slider_pane_t

0xb559,	// (0x00058449) cset_list_set_pane_ParamLimits

0xb559,	// (0x00058449) cset_list_set_pane

0xb56a,	// (0x0005845a) aid_position_infowindow_above

0xb572,	// (0x00058462) aid_position_infowindow_below

0xb57a,	// (0x0005846a) cset_list_set_pane_g1_ParamLimits

0xb57a,	// (0x0005846a) cset_list_set_pane_g1

0xb586,	// (0x00058476) cset_list_set_pane_g3_ParamLimits

0xb586,	// (0x00058476) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0005c8c4) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0005c8c4) cset_list_set_pane_g

0xb595,	// (0x00058485) cset_list_set_pane_t1_ParamLimits

0xb595,	// (0x00058485) cset_list_set_pane_t1

0x02e5,	// (0x0004d1d5) list_highlight_pane_cp021_ParamLimits

0x02e5,	// (0x0004d1d5) list_highlight_pane_cp021

0x2cda,	// (0x0004fbca) cset_slider_pane_g1

0x2cec,	// (0x0004fbdc) cset_slider_pane_g2

0x2ce3,	// (0x0004fbd3) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0005c8c9) cset_slider_pane_g

0xb5aa,	// (0x0005849a) aid_area_touch_cam4_zoom

0xb5b2,	// (0x000584a2) cam4_zoom_cont_pane

0xb5ba,	// (0x000584aa) cam4_zoom_pane_g1

0xb5c2,	// (0x000584b2) cam4_zoom_pane_g2

0xb5ca,	// (0x000584ba) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0005c8d0) cam4_zoom_pane_g

0xb5d2,	// (0x000584c2) cam4_zoom_cont_pane_g1

0xb5db,	// (0x000584cb) cam4_zoom_cont_pane_g2

0xb5e4,	// (0x000584d4) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0005c8d7) cam4_zoom_cont_pane_g

0xaa32,	// (0x00057922) call4_image_pane_ParamLimits

0xaa32,	// (0x00057922) call4_image_pane

0xded6,	// (0x0005adc6) call4_windows_conf_pane_ParamLimits

0xdef1,	// (0x0005ade1) popup_call4_audio_in_window_ParamLimits

0xdef1,	// (0x0005ade1) popup_call4_audio_in_window

0x026c,	// (0x0004d15c) bg_popup_call2_act_pane_cp02

0xdf53,	// (0x0005ae43) call4_list_conf_pane

0x4454,	// (0x00051344) call4_image_pane_g1

0x4454,	// (0x00051344) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0005c5eb) call4_image_pane_g

0xe1cd,	// (0x0005b0bd) list_single_graphic_popup_conf4_pane_ParamLimits

0xe1cd,	// (0x0005b0bd) list_single_graphic_popup_conf4_pane

0x026c,	// (0x0004d15c) list_highlight_pane_cp022

0xe1e2,	// (0x0005b0d2) list_single_graphic_popup_conf4_pane_g1

0x29c6,	// (0x0004f8b6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0005c8de) list_single_graphic_popup_conf4_pane_g

0xe1ea,	// (0x0005b0da) list_single_graphic_popup_conf4_pane_t1

0x6c2b,	// (0x00053b1b) popup_vtel_slider_window_ParamLimits

0x6c2b,	// (0x00053b1b) popup_vtel_slider_window

0xdeb8,	// (0x0005ada8) dialer2_ne_pane_t2_ParamLimits

0xdeb8,	// (0x0005ada8) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0005c7bf) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0005c7bf) dialer2_ne_pane_t

0x02e5,	// (0x0004d1d5) bg_popup_sub_pane_cp010_ParamLimits

0x02e5,	// (0x0004d1d5) bg_popup_sub_pane_cp010

0xb5ed,	// (0x000584dd) popup_vtel_slider_window_g1_ParamLimits

0xb5ed,	// (0x000584dd) popup_vtel_slider_window_g1

0xb5f9,	// (0x000584e9) popup_vtel_slider_window_g2_ParamLimits

0xb5f9,	// (0x000584e9) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0005c8e3) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0005c8e3) popup_vtel_slider_window_g

0xb641,	// (0x00058531) vtel_slider_pane_ParamLimits

0xb641,	// (0x00058531) vtel_slider_pane

0xb650,	// (0x00058540) vtel_slider_pane_g1_ParamLimits

0xb650,	// (0x00058540) vtel_slider_pane_g1

0xb65d,	// (0x0005854d) vtel_slider_pane_g2_ParamLimits

0xb65d,	// (0x0005854d) vtel_slider_pane_g2

0xb66a,	// (0x0005855a) vtel_slider_pane_g3_ParamLimits

0xb66a,	// (0x0005855a) vtel_slider_pane_g3

0xb650,	// (0x00058540) vtel_slider_pane_g4_ParamLimits

0xb650,	// (0x00058540) vtel_slider_pane_g4

0xb677,	// (0x00058567) vtel_slider_pane_g5_ParamLimits

0xb677,	// (0x00058567) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0005c8ec) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0005c8ec) vtel_slider_pane_g

0x026c,	// (0x0004d15c) main_gallery2_pane

0xadf6,	// (0x00057ce6) aid_size_row_itut2_dropdow_list_ParamLimits

0xadf6,	// (0x00057ce6) aid_size_row_itut2_dropdow_list

0xae64,	// (0x00057d54) grid_vitu2_function_top_pane_ParamLimits

0xae64,	// (0x00057d54) grid_vitu2_function_top_pane

0xaeb6,	// (0x00057da6) popup_vitu2_dropdown_list_window_ParamLimits

0xaeb6,	// (0x00057da6) popup_vitu2_dropdown_list_window

0xaed6,	// (0x00057dc6) popup_vitu2_match_list_window

0xb684,	// (0x00058574) cell_vitu2_function_top_pane_ParamLimits

0xb684,	// (0x00058574) cell_vitu2_function_top_pane

0xb6a4,	// (0x00058594) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb6a4,	// (0x00058594) cell_vitu2_function_top_pane_cp01

0xb6c2,	// (0x000585b2) cell_vitu2_function_top_wide_pane_ParamLimits

0xb6c2,	// (0x000585b2) cell_vitu2_function_top_wide_pane

0xad09,	// (0x00057bf9) bg_button_pane_cp012

0xb6e0,	// (0x000585d0) cell_vitu2_function_top_pane_g1

0xb6ef,	// (0x000585df) bg_button_pane_cp013_ParamLimits

0xb6ef,	// (0x000585df) bg_button_pane_cp013

0xb70b,	// (0x000585fb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb70b,	// (0x000585fb) cell_vitu2_function_top_wide_pane_g1

0xb723,	// (0x00058613) bg_popup_sub_pane_cp20

0xb731,	// (0x00058621) list_vitu2_match_list_pane

0xdfd6,	// (0x0005aec6) bg_popup_sub_pane_cp20_g1

0xdfde,	// (0x0005aece) bg_popup_sub_pane_cp20_g2

0x2558,	// (0x0004f448) bg_popup_sub_pane_cp20_g3

0xdfe6,	// (0x0005aed6) bg_popup_sub_pane_cp20_g4

0x2538,	// (0x0004f428) bg_popup_sub_pane_cp20_g5

0xe200,	// (0x0005b0f0) bg_popup_sub_pane_cp20_g6

0xdff6,	// (0x0005aee6) bg_popup_sub_pane_cp20_g7

0xdffe,	// (0x0005aeee) bg_popup_sub_pane_cp20_g8

0xe006,	// (0x0005aef6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0005c8f7) bg_popup_sub_pane_cp20_g

0xb749,	// (0x00058639) list_vitu2_match_list_item_pane_ParamLimits

0xb749,	// (0x00058639) list_vitu2_match_list_item_pane

0xb75b,	// (0x0005864b) list_vitu2_match_list_item_pane_t1

0x6084,	// (0x00052f74) bg_popup_sub_pane_cp21

0xb795,	// (0x00058685) grid_vitu2_dropdown_list_pane

0xb79d,	// (0x0005868d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb79d,	// (0x0005868d) cell_vitu2_dropdown_list_char_pane

0xb7c2,	// (0x000586b2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7c2,	// (0x000586b2) cell_vitu2_dropdown_list_ctrl_pane

0xe208,	// (0x0005b0f8) cell_vitu2_dropdown_list_char_pane_g1

0xe211,	// (0x0005b101) cell_vitu2_dropdown_list_char_pane_g2

0xe21a,	// (0x0005b10a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0005c914) cell_vitu2_dropdown_list_char_pane_g

0xb7f0,	// (0x000586e0) cell_vitu2_dropdown_list_char_pane_t1

0xb7fe,	// (0x000586ee) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb7fe,	// (0x000586ee) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb80e,	// (0x000586fe) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb80e,	// (0x000586fe) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb81f,	// (0x0005870f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb81f,	// (0x0005870f) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb82f,	// (0x0005871f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb82f,	// (0x0005871f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac1d,	// (0x00057b0d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac1d,	// (0x00057b0d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0005c91b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0005c91b) cell_vitu2_dropdown_list_ctrl_pane_g

0xb848,	// (0x00058738) aid_size_cell_gallery2_ParamLimits

0xb848,	// (0x00058738) aid_size_cell_gallery2

0xb856,	// (0x00058746) grid_gallery2_pane_ParamLimits

0xb856,	// (0x00058746) grid_gallery2_pane

0xb865,	// (0x00058755) scroll_pane_cp029_ParamLimits

0xb865,	// (0x00058755) scroll_pane_cp029

0xb871,	// (0x00058761) cell_gallery2_pane_ParamLimits

0xb871,	// (0x00058761) cell_gallery2_pane

0xe223,	// (0x0005b113) cell_gallery2_pane_g2

0xb89b,	// (0x0005878b) cell_gallery2_pane_g3

0xe22d,	// (0x0005b11d) cell_gallery2_pane_g4

0xe235,	// (0x0005b125) cell_gallery2_pane_g5

0x2b94,	// (0x0004fa84) grid_highlight_pane_cp10

0xaed6,	// (0x00057dc6) popup_vitu2_match_list_window_ParamLimits

0xaeea,	// (0x00057dda) popup_vitu2_query_window_ParamLimits

0xaeea,	// (0x00057dda) popup_vitu2_query_window

0x6084,	// (0x00052f74) bg_vitu2_candi_button_pane

0xe208,	// (0x0005b0f8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe211,	// (0x0005b101) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe21a,	// (0x0005b10a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb8a3,	// (0x00058793) bg_button_pane_cp015

0xb8b5,	// (0x000587a5) bg_button_pane_cp016

0xb8c8,	// (0x000587b8) bg_button_pane_cp017

0x3fd1,	// (0x00050ec1) bg_popup_sub_pane_cp22

0xe23d,	// (0x0005b12d) popup_vitu2_query_window_g1

0xb90d,	// (0x000587fd) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0005c926) popup_vitu2_query_window_g

0xb92a,	// (0x0005881a) popup_vitu2_query_window_t1_ParamLimits

0xb92a,	// (0x0005881a) popup_vitu2_query_window_t1

0xb95d,	// (0x0005884d) popup_vitu2_query_window_t2_ParamLimits

0xb95d,	// (0x0005884d) popup_vitu2_query_window_t2

0xb96f,	// (0x0005885f) popup_vitu2_query_window_t3_ParamLimits

0xb96f,	// (0x0005885f) popup_vitu2_query_window_t3

0xb997,	// (0x00058887) popup_vitu2_query_window_t4_ParamLimits

0xb997,	// (0x00058887) popup_vitu2_query_window_t4

0xb9ba,	// (0x000588aa) popup_vitu2_query_window_t5_ParamLimits

0xb9ba,	// (0x000588aa) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0005c92d) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0005c92d) popup_vitu2_query_window_t

0xe0dc,	// (0x0005afcc) main_cset_text_pane

0xb2c1,	// (0x000581b1) aid_area_touch_slider_ParamLimits

0xb2dd,	// (0x000581cd) cset_slider_pane_ParamLimits

0xb307,	// (0x000581f7) main_cset_slider_pane_g1_ParamLimits

0xb31c,	// (0x0005820c) main_cset_slider_pane_g2_ParamLimits

0xe0fd,	// (0x0005afed) main_cset_slider_pane_g3_ParamLimits

0xe0fd,	// (0x0005afed) main_cset_slider_pane_g3

0xb331,	// (0x00058221) main_cset_slider_pane_g4_ParamLimits

0xb331,	// (0x00058221) main_cset_slider_pane_g4

0xb340,	// (0x00058230) main_cset_slider_pane_g5_ParamLimits

0xb340,	// (0x00058230) main_cset_slider_pane_g5

0xb34c,	// (0x0005823c) main_cset_slider_pane_g6_ParamLimits

0xb34c,	// (0x0005823c) main_cset_slider_pane_g6

0xf990,	// (0x0005c880) main_cset_slider_pane_g_ParamLimits

0xe12d,	// (0x0005b01d) main_cset_slider_pane_t1_ParamLimits

0xb3d8,	// (0x000582c8) main_cset_slider_pane_t2_ParamLimits

0xb3f2,	// (0x000582e2) main_cset_slider_pane_t3_ParamLimits

0xb40c,	// (0x000582fc) main_cset_slider_pane_t4_ParamLimits

0xb426,	// (0x00058316) main_cset_slider_pane_t5_ParamLimits

0xb440,	// (0x00058330) main_cset_slider_pane_t6_ParamLimits

0xb455,	// (0x00058345) main_cset_slider_pane_t7_ParamLimits

0xb47f,	// (0x0005836f) main_cset_slider_pane_t8_ParamLimits

0xb47f,	// (0x0005836f) main_cset_slider_pane_t8

0xb4a7,	// (0x00058397) main_cset_slider_pane_t9_ParamLimits

0xb4a7,	// (0x00058397) main_cset_slider_pane_t9

0xb4cf,	// (0x000583bf) main_cset_slider_pane_t10_ParamLimits

0xb4cf,	// (0x000583bf) main_cset_slider_pane_t10

0xb4f7,	// (0x000583e7) main_cset_slider_pane_t11_ParamLimits

0xb4f7,	// (0x000583e7) main_cset_slider_pane_t11

0xb51f,	// (0x0005840f) main_cset_slider_pane_t12_ParamLimits

0xb51f,	// (0x0005840f) main_cset_slider_pane_t12

0xb53c,	// (0x0005842c) main_cset_slider_pane_t13_ParamLimits

0xb53c,	// (0x0005842c) main_cset_slider_pane_t13

0xf9b5,	// (0x0005c8a5) main_cset_slider_pane_t_ParamLimits

0x026c,	// (0x0004d15c) bg_popup_sub_pane_cp011

0xe249,	// (0x0005b139) main_cset_text_pane_g1

0xe251,	// (0x0005b141) main_cset_text_pane_t1

0xe25f,	// (0x0005b14f) main_cset_text_pane_t2

0xe26d,	// (0x0005b15d) main_cset_text_pane_t3

0xe27b,	// (0x0005b16b) main_cset_text_pane_t4

0xe289,	// (0x0005b179) main_cset_text_pane_t5

0xe297,	// (0x0005b187) main_cset_text_pane_t6

0xe2a5,	// (0x0005b195) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0005c93c) main_cset_text_pane_t

0x026c,	// (0x0004d15c) main_cam4_burst_pane

0x026c,	// (0x0004d15c) main_cam5_pane

0xb20a,	// (0x000580fa) bg_button_pane_cp019

0xb213,	// (0x00058103) bg_button_pane_cp020

0xe109,	// (0x0005aff9) main_cset_slider_pane_g7_ParamLimits

0xe109,	// (0x0005aff9) main_cset_slider_pane_g7

0xe115,	// (0x0005b005) main_cset_slider_pane_g8_ParamLimits

0xe115,	// (0x0005b005) main_cset_slider_pane_g8

0xb360,	// (0x00058250) main_cset_slider_pane_g9_ParamLimits

0xb360,	// (0x00058250) main_cset_slider_pane_g9

0xb36c,	// (0x0005825c) main_cset_slider_pane_g10_ParamLimits

0xb36c,	// (0x0005825c) main_cset_slider_pane_g10

0xb378,	// (0x00058268) main_cset_slider_pane_g11_ParamLimits

0xb378,	// (0x00058268) main_cset_slider_pane_g11

0xb384,	// (0x00058274) main_cset_slider_pane_g12_ParamLimits

0xb384,	// (0x00058274) main_cset_slider_pane_g12

0xb390,	// (0x00058280) main_cset_slider_pane_g13_ParamLimits

0xb390,	// (0x00058280) main_cset_slider_pane_g13

0xb39c,	// (0x0005828c) main_cset_slider_pane_g14_ParamLimits

0xb39c,	// (0x0005828c) main_cset_slider_pane_g14

0xb3a8,	// (0x00058298) main_cset_slider_pane_g15_ParamLimits

0xb3a8,	// (0x00058298) main_cset_slider_pane_g15

0xe15b,	// (0x0005b04b) main_cset_slider_pane_t14_ParamLimits

0xe15b,	// (0x0005b04b) main_cset_slider_pane_t14

0xe194,	// (0x0005b084) main_cset_slider_pane_t15_ParamLimits

0xe194,	// (0x0005b084) main_cset_slider_pane_t15

0xba33,	// (0x00058923) aid_cam4_burst_size_cell_ParamLimits

0xba33,	// (0x00058923) aid_cam4_burst_size_cell

0xba4f,	// (0x0005893f) grid_cam4_burst_pane_ParamLimits

0xba4f,	// (0x0005893f) grid_cam4_burst_pane

0xba81,	// (0x00058971) linegrid_cam4_burst_pane_ParamLimits

0xba81,	// (0x00058971) linegrid_cam4_burst_pane

0xba9f,	// (0x0005898f) scroll_pane_cp30_ParamLimits

0xba9f,	// (0x0005898f) scroll_pane_cp30

0xbaab,	// (0x0005899b) cell_cam4_burst_pane_ParamLimits

0xbaab,	// (0x0005899b) cell_cam4_burst_pane

0xe2b3,	// (0x0005b1a3) linegrid_cam4_burst_pane_g1_ParamLimits

0xe2b3,	// (0x0005b1a3) linegrid_cam4_burst_pane_g1

0xbaeb,	// (0x000589db) linegrid_cam4_burst_pane_g2_ParamLimits

0xbaeb,	// (0x000589db) linegrid_cam4_burst_pane_g2

0xe2c0,	// (0x0005b1b0) linegrid_cam4_burst_pane_g3_ParamLimits

0xe2c0,	// (0x0005b1b0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0005c94b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005c94b) linegrid_cam4_burst_pane_g

0xbafc,	// (0x000589ec) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbafc,	// (0x000589ec) linegrid_cam4_burst_pane_g3_copy1

0xe2cd,	// (0x0005b1bd) linegrid_cam4_burst_pane_g4_ParamLimits

0xe2cd,	// (0x0005b1bd) linegrid_cam4_burst_pane_g4

0xbb16,	// (0x00058a06) linegrid_cam4_burst_pane_g5_ParamLimits

0xbb16,	// (0x00058a06) linegrid_cam4_burst_pane_g5

0xbb27,	// (0x00058a17) linegrid_cam4_burst_pane_g6_ParamLimits

0xbb27,	// (0x00058a17) linegrid_cam4_burst_pane_g6

0xe2da,	// (0x0005b1ca) linegrid_cam4_burst_pane_g7_ParamLimits

0xe2da,	// (0x0005b1ca) linegrid_cam4_burst_pane_g7

0xbb3e,	// (0x00058a2e) cell_cam4_burst_pane_g1

0xe2f3,	// (0x0005b1e3) main_cam5_pane_t1_ParamLimits

0xe2f3,	// (0x0005b1e3) main_cam5_pane_t1

0xe305,	// (0x0005b1f5) main_cam5_pane_t2_ParamLimits

0xe305,	// (0x0005b1f5) main_cam5_pane_t2

0xe317,	// (0x0005b207) main_cam5_pane_t3_ParamLimits

0xe317,	// (0x0005b207) main_cam5_pane_t3

0xe329,	// (0x0005b219) main_cam5_pane_t4_ParamLimits

0xe329,	// (0x0005b219) main_cam5_pane_t4

0xe341,	// (0x0005b231) main_cam5_pane_t5_ParamLimits

0xe341,	// (0x0005b231) main_cam5_pane_t5

0xe355,	// (0x0005b245) main_cam5_pane_t6_ParamLimits

0xe355,	// (0x0005b245) main_cam5_pane_t6

0xe369,	// (0x0005b259) main_cam5_pane_t7_ParamLimits

0xe369,	// (0x0005b259) main_cam5_pane_t7

0xe37b,	// (0x0005b26b) main_cam5_pane_t8_ParamLimits

0xe37b,	// (0x0005b26b) main_cam5_pane_t8

0xe399,	// (0x0005b289) main_cam5_pane_t9_ParamLimits

0xe399,	// (0x0005b289) main_cam5_pane_t9

0xe3ab,	// (0x0005b29b) main_cam5_pane_t10_ParamLimits

0xe3ab,	// (0x0005b29b) main_cam5_pane_t10

0xe3bd,	// (0x0005b2ad) main_cam5_pane_t11_ParamLimits

0xe3bd,	// (0x0005b2ad) main_cam5_pane_t11

0xe3d1,	// (0x0005b2c1) main_cam5_pane_t12_ParamLimits

0xe3d1,	// (0x0005b2c1) main_cam5_pane_t12

0xe3e8,	// (0x0005b2d8) main_cam5_pane_t13_ParamLimits

0xe3e8,	// (0x0005b2d8) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0005c957) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0005c957) main_cam5_pane_t

0x5d2e,	// (0x00052c1e) popup_scut_keymap_window_ParamLimits

0x5d2e,	// (0x00052c1e) popup_scut_keymap_window

0xbb51,	// (0x00058a41) aid_size_cell_brow_shortcut

0x2b94,	// (0x0004fa84) bg_popup_window_pane_cp010

0xbb5d,	// (0x00058a4d) grid_scut_pane

0xbb69,	// (0x00058a59) cell_scut_pane_ParamLimits

0xbb69,	// (0x00058a59) cell_scut_pane

0xbb84,	// (0x00058a74) cell_scut_pane_g1

0xe40b,	// (0x0005b2fb) cell_scut_pane_t1

0xe41a,	// (0x0005b30a) cell_scut_pane_t2

0xbb8d,	// (0x00058a7d) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0005c972) cell_scut_pane_t

0x99a6,	// (0x00056896) main_mup3_pane_g8_ParamLimits

0x99a6,	// (0x00056896) main_mup3_pane_g8

0xae04,	// (0x00057cf4) area_vitu2_query_pane_ParamLimits

0xae04,	// (0x00057cf4) area_vitu2_query_pane

0xb8db,	// (0x000587cb) input_focus_pane_cp08

0xe429,	// (0x0005b319) area_vitu2_query_pane_g1

0xbb9b,	// (0x00058a8b) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0005c979) area_vitu2_query_pane_g

0xbbac,	// (0x00058a9c) area_vitu2_query_pane_t1_ParamLimits

0xbbac,	// (0x00058a9c) area_vitu2_query_pane_t1

0xbbc0,	// (0x00058ab0) area_vitu2_query_pane_t2_ParamLimits

0xbbc0,	// (0x00058ab0) area_vitu2_query_pane_t2

0xbbd4,	// (0x00058ac4) area_vitu2_query_pane_t3_ParamLimits

0xbbd4,	// (0x00058ac4) area_vitu2_query_pane_t3

0x0cf5,	// (0x0004dbe5) area_vitu2_query_pane_t4_ParamLimits

0x0cf5,	// (0x0004dbe5) area_vitu2_query_pane_t4

0x0d1d,	// (0x0004dc0d) area_vitu2_query_pane_t5_ParamLimits

0x0d1d,	// (0x0004dc0d) area_vitu2_query_pane_t5

0x0d45,	// (0x0004dc35) area_vitu2_query_pane_t6_ParamLimits

0x0d45,	// (0x0004dc35) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0005c97e) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0005c97e) area_vitu2_query_pane_t

0xbbfc,	// (0x00058aec) bg_button_pane_cp018

0xbc0a,	// (0x00058afa) bg_button_pane_cp021

0xbc16,	// (0x00058b06) bg_button_pane_cp022

0xbc27,	// (0x00058b17) input_focus_pane_cp09

0x7da0,	// (0x00054c90) aid_size_touch_mv_arrow_left

0x7dcb,	// (0x00054cbb) aid_size_touch_mv_arrow_right

0xb3c0,	// (0x000582b0) main_cset_slider_pane_g16_ParamLimits

0xb3c0,	// (0x000582b0) main_cset_slider_pane_g16

0xb3cc,	// (0x000582bc) main_cset_slider_pane_g17_ParamLimits

0xb3cc,	// (0x000582bc) main_cset_slider_pane_g17

0xbb3e,	// (0x00058a2e) cell_cam4_burst_pane_g1_ParamLimits

0x026c,	// (0x0004d15c) compa_mode_pane

0xb605,	// (0x000584f5) popup_vtel_slider_window_g3_ParamLimits

0xb605,	// (0x000584f5) popup_vtel_slider_window_g3

0xb619,	// (0x00058509) popup_vtel_slider_window_g4_ParamLimits

0xb619,	// (0x00058509) popup_vtel_slider_window_g4

0xb62d,	// (0x0005851d) popup_vtel_slider_window_t1_ParamLimits

0xb62d,	// (0x0005851d) popup_vtel_slider_window_t1

0x026c,	// (0x0004d15c) main_cl_pane

0x3ffd,	// (0x00050eed) popup_imed_adjust2_window_ParamLimits

0x3fd1,	// (0x00050ec1) bg_tb_trans_pane_cp05_ParamLimits

0x4923,	// (0x00051813) popup_imed_adjust2_window_g1_ParamLimits

0x4932,	// (0x00051822) popup_imed_adjust2_window_g2_ParamLimits

0x4932,	// (0x00051822) popup_imed_adjust2_window_g2

0x493e,	// (0x0005182e) popup_imed_adjust2_window_g3_ParamLimits

0x493e,	// (0x0005182e) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0005c6e9) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0005c6e9) popup_imed_adjust2_window_g

0x494a,	// (0x0005183a) popup_imed_adjust2_window_t1_ParamLimits

0x4962,	// (0x00051852) slider_imed_adjust_pane_ParamLimits

0x4976,	// (0x00051866) slider_imed_adjust_pane_g1_ParamLimits

0x4986,	// (0x00051876) slider_imed_adjust_pane_g2_ParamLimits

0x4996,	// (0x00051886) slider_imed_adjust_pane_g3_ParamLimits

0x49a7,	// (0x00051897) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0005c6f0) slider_imed_adjust_pane_g_ParamLimits

0xab30,	// (0x00057a20) aid_touch_area_cam4_ParamLimits

0xab30,	// (0x00057a20) aid_touch_area_cam4

0xab40,	// (0x00057a30) battery_pane_cp01

0xabc7,	// (0x00057ab7) main_camera4_pane_g6_ParamLimits

0xabc7,	// (0x00057ab7) main_camera4_pane_g6

0xabe5,	// (0x00057ad5) main_camera4_pane_t2_ParamLimits

0xabe5,	// (0x00057ad5) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0005c7f3) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0005c7f3) main_camera4_pane_t

0xac77,	// (0x00057b67) aid_touch_area_vid4_ParamLimits

0xac77,	// (0x00057b67) aid_touch_area_vid4

0xacb7,	// (0x00057ba7) main_video4_pane_g5_ParamLimits

0xacb7,	// (0x00057ba7) main_video4_pane_g5

0xacdb,	// (0x00057bcb) vid4_progress_pane_ParamLimits

0xacdb,	// (0x00057bcb) vid4_progress_pane

0xe121,	// (0x0005b011) main_cset_slider_pane_g18_ParamLimits

0xe121,	// (0x0005b011) main_cset_slider_pane_g18

0xe2e7,	// (0x0005b1d7) cell_cam4_burst_pane_g2_ParamLimits

0xe2e7,	// (0x0005b1d7) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0005c952) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0005c952) cell_cam4_burst_pane_g

0xbc38,	// (0x00058b28) bg_cl_pane_ParamLimits

0xbc38,	// (0x00058b28) bg_cl_pane

0xbc44,	// (0x00058b34) cl_header_pane_ParamLimits

0xbc44,	// (0x00058b34) cl_header_pane

0xbc50,	// (0x00058b40) cl_listscroll_pane_ParamLimits

0xbc50,	// (0x00058b40) cl_listscroll_pane

0xe435,	// (0x0005b325) bg_cl_pane_g1

0xe43d,	// (0x0005b32d) bg_cl_pane_g2

0xe445,	// (0x0005b335) bg_cl_pane_g3

0xe44d,	// (0x0005b33d) bg_cl_pane_g4

0xe455,	// (0x0005b345) bg_cl_pane_g5

0xe45d,	// (0x0005b34d) bg_cl_pane_g6

0xe465,	// (0x0005b355) bg_cl_pane_g7

0xe46d,	// (0x0005b35d) bg_cl_pane_g8

0xe475,	// (0x0005b365) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0005c98d) bg_cl_pane_g

0xbc5c,	// (0x00058b4c) aid_height_cl_leading_ParamLimits

0xbc5c,	// (0x00058b4c) aid_height_cl_leading

0xbc68,	// (0x00058b58) aid_height_cl_text_ParamLimits

0xbc68,	// (0x00058b58) aid_height_cl_text

0x0c0f,	// (0x0004daff) bg_cl_header_pane_ParamLimits

0x0c0f,	// (0x0004daff) bg_cl_header_pane

0xbc80,	// (0x00058b70) cl_header_pane_g1_ParamLimits

0xbc80,	// (0x00058b70) cl_header_pane_g1

0xbc8d,	// (0x00058b7d) cl_header_pane_t1_ParamLimits

0xbc8d,	// (0x00058b7d) cl_header_pane_t1

0xe47d,	// (0x0005b36d) cl_list_pane

0xe0f4,	// (0x0005afe4) hc_scroll_pane_cp01

0x2538,	// (0x0004f428) bg_cl_header_pane_g1

0xdfd6,	// (0x0005aec6) bg_cl_header_pane_g2

0x2558,	// (0x0004f448) bg_cl_header_pane_g3

0xdfe6,	// (0x0005aed6) bg_cl_header_pane_g4

0xdfde,	// (0x0005aece) bg_cl_header_pane_g5

0xe200,	// (0x0005b0f0) bg_cl_header_pane_g6

0xdffe,	// (0x0005aeee) bg_cl_header_pane_g7

0xe006,	// (0x0005aef6) bg_cl_header_pane_g8

0xdff6,	// (0x0005aee6) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0005c9a0) bg_cl_header_pane_g

0xbc9f,	// (0x00058b8f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbc9f,	// (0x00058b8f) hc_cl_list_double_graphic_heading_pane

0xbcaf,	// (0x00058b9f) hc_cl_list_single_graphic_pane_ParamLimits

0xbcaf,	// (0x00058b9f) hc_cl_list_single_graphic_pane

0xbcc1,	// (0x00058bb1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbcc1,	// (0x00058bb1) hc_cl_list_single_graphic_pane_g1

0xbccd,	// (0x00058bbd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbccd,	// (0x00058bbd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0005c9b3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0005c9b3) hc_cl_list_single_graphic_pane_g

0xbce1,	// (0x00058bd1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbce1,	// (0x00058bd1) hc_cl_list_single_graphic_pane_t1

0xbcc1,	// (0x00058bb1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbcc1,	// (0x00058bb1) hc_cl_list_double_graphic_heading_pane_g1

0xbcf6,	// (0x00058be6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbcf6,	// (0x00058be6) hc_cl_list_double_graphic_heading_pane_g2

0xbd0a,	// (0x00058bfa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbd0a,	// (0x00058bfa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0005c9b8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0005c9b8) hc_cl_list_double_graphic_heading_pane_g

0xbd1e,	// (0x00058c0e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd1e,	// (0x00058c0e) hc_cl_list_double_graphic_heading_pane_t1

0xbd33,	// (0x00058c23) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbd33,	// (0x00058c23) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0005c9bf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0005c9bf) hc_cl_list_double_graphic_heading_pane_t

0xbd5a,	// (0x00058c4a) vid4_progress_pane_g1

0xbd6b,	// (0x00058c5b) vid4_progress_pane_g2

0x8511,	// (0x00055401) vid4_progress_pane_g3

0xac43,	// (0x00057b33) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0005c9c4) vid4_progress_pane_g

0xbd7d,	// (0x00058c6d) vid4_progress_pane_t1

0xbd92,	// (0x00058c82) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0005c9cf) vid4_progress_pane_t

0xbdc1,	// (0x00058cb1) wait_bar_pane_cp07

0x4239,	// (0x00051129) blid_firmament_pane_ParamLimits

0x427c,	// (0x0005116c) popup_blid_sat_info2_window_g1

0x42a0,	// (0x00051190) popup_blid_sat_info2_window_t3

0x42ae,	// (0x0005119e) popup_blid_sat_info2_window_t4

0x42bc,	// (0x000511ac) popup_blid_sat_info2_window_t5

0x42ca,	// (0x000511ba) popup_blid_sat_info2_window_t6

0x42da,	// (0x000511ca) popup_blid_sat_info2_window_t7

0x42e8,	// (0x000511d8) popup_blid_sat_info2_window_t8

0x42f6,	// (0x000511e6) popup_blid_sat_info2_window_t9

0x4304,	// (0x000511f4) popup_blid_sat_info2_window_t10

0x43d4,	// (0x000512c4) aid_firma_cardinal_ParamLimits

0x43e8,	// (0x000512d8) blid_firmament_pane_t1_ParamLimits

0x43ff,	// (0x000512ef) blid_firmament_pane_t2_ParamLimits

0x4416,	// (0x00051306) blid_firmament_pane_t3_ParamLimits

0x442d,	// (0x0005131d) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0005c5e2) blid_firmament_pane_t_ParamLimits

0x4444,	// (0x00051334) blid_sat_info_pane_ParamLimits

0x02e5,	// (0x0004d1d5) main_cam_set_pane_ParamLimits

0xa141,	// (0x00057031) aid_size_cell_colour_35_ParamLimits

0xa15b,	// (0x0005704b) aid_size_cell_colour_112_ParamLimits

0xa172,	// (0x00057062) aid_size_cell_effect_ParamLimits

0x02e5,	// (0x0004d1d5) bg_tb_trans_pane_cp02_ParamLimits

0x328b,	// (0x0005017b) heading_imed_pane_ParamLimits

0xa18c,	// (0x0005707c) listscroll_imed_pane_ParamLimits

0x35e7,	// (0x000504d7) popup_call2_audio_first_window_g5_ParamLimits

0x35e7,	// (0x000504d7) popup_call2_audio_first_window_g5

0xa89b,	// (0x0005778b) aid_size_touch_image3_arrow_left_ParamLimits

0xa89b,	// (0x0005778b) aid_size_touch_image3_arrow_left

0xa8b1,	// (0x000577a1) aid_size_touch_image3_arrow_right_ParamLimits

0xa8b1,	// (0x000577a1) aid_size_touch_image3_arrow_right

0xbdaa,	// (0x00058c9a) vid4_progress_pane_t3

0xa437,	// (0x00057327) main_hwr_training_symbol_option_pane_ParamLimits

0xa437,	// (0x00057327) main_hwr_training_symbol_option_pane

0x4c12,	// (0x00051b02) popup_hwr_training_preview_window_ParamLimits

0x4c12,	// (0x00051b02) popup_hwr_training_preview_window

0xa498,	// (0x00057388) hwr_training_navi_pane_g5_ParamLimits

0xa498,	// (0x00057388) hwr_training_navi_pane_g5

0xdfc4,	// (0x0005aeb4) popup_char_count_window

0xb723,	// (0x00058613) bg_popup_sub_pane_cp20_ParamLimits

0xb731,	// (0x00058621) list_vitu2_match_list_pane_ParamLimits

0xb73d,	// (0x0005862d) vitu2_page_scroll_pane_ParamLimits

0xb73d,	// (0x0005862d) vitu2_page_scroll_pane

0xe486,	// (0x0005b376) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe486,	// (0x0005b376) list_single_hwr_training_symbol_option_pane

0xe499,	// (0x0005b389) list_single_hwr_training_symbol_option_pane_g1

0xe4a1,	// (0x0005b391) list_single_hwr_training_symbol_option_pane_t1

0xe4af,	// (0x0005b39f) bg_button_pane_cp023

0xe4b8,	// (0x0005b3a8) bg_button_pane_cp024

0xbdd3,	// (0x00058cc3) vitu2_page_scroll_pane_g1

0xbddb,	// (0x00058ccb) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0005c9d6) vitu2_page_scroll_pane_g

0xbde5,	// (0x00058cd5) vitu2_page_scroll_pane_t1

0x4199,	// (0x00051089) popup_char_count_window_g1

0xe4eb,	// (0x0005b3db) popup_char_count_window_g2

0xe4f4,	// (0x0005b3e4) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0005c9db) popup_char_count_window_g

0xe4fd,	// (0x0005b3ed) popup_char_count_window_t1

0x026c,	// (0x0004d15c) main_vded2_pane

0x490f,	// (0x000517ff) aid_size_cell_imed_line

0x4919,	// (0x00051809) grid_imed_line_width_pane

0xad57,	// (0x00057c47) vid4_indicators_pane_g4

0xe50b,	// (0x0005b3fb) cell_imed_line_width_pane_ParamLimits

0xe50b,	// (0x0005b3fb) cell_imed_line_width_pane

0xe521,	// (0x0005b411) cell_imed_line_width_pane_g1

0x434c,	// (0x0005123c) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0005c9e2) cell_imed_line_width_pane_g

0xbdf4,	// (0x00058ce4) main_vded2_pane_g1_ParamLimits

0xbdf4,	// (0x00058ce4) main_vded2_pane_g1

0xbe03,	// (0x00058cf3) main_vded2_pane_g2_ParamLimits

0xbe03,	// (0x00058cf3) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0005c9e7) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0005c9e7) main_vded2_pane_g

0xbe11,	// (0x00058d01) vded2_slider_pane_ParamLimits

0xbe11,	// (0x00058d01) vded2_slider_pane

0xbe1e,	// (0x00058d0e) aid_size_touch_vded2_end

0xbe28,	// (0x00058d18) aid_size_touch_vded2_playhead

0xe52a,	// (0x0005b41a) aid_size_touch_vded2_start

0xe532,	// (0x0005b422) vded2_slider_bg_pane

0xe53b,	// (0x0005b42b) vded2_slider_pane_g1

0xe544,	// (0x0005b434) vded2_slider_pane_g2

0xbe30,	// (0x00058d20) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0005c9ec) vded2_slider_pane_g

0xde1f,	// (0x0005ad0f) vded2_slider_bg_pane_g1

0xde28,	// (0x0005ad18) vded2_slider_bg_pane_g2

0xde31,	// (0x0005ad21) vded2_slider_bg_pane_g3

0x0002,

0xf7c2,	// (0x0005c6b2) vded2_slider_bg_pane_g

0x8529,	// (0x00055419) aid_postcard_touch_down_pane_ParamLimits

0x8529,	// (0x00055419) aid_postcard_touch_down_pane

0x8539,	// (0x00055429) aid_postcard_touch_up_pane_ParamLimits

0x8539,	// (0x00055429) aid_postcard_touch_up_pane

0x026c,	// (0x0004d15c) main_blid2_pane

0x3fdf,	// (0x00050ecf) popup_blid2_search_window

0x026c,	// (0x0004d15c) blid2_gps_pane

0x026c,	// (0x0004d15c) blid2_navig_pane

0x026c,	// (0x0004d15c) blid2_search_pane

0x026c,	// (0x0004d15c) blid2_tripm_pane

0xbe39,	// (0x00058d29) blid2_search_pane_g1_ParamLimits

0xbe39,	// (0x00058d29) blid2_search_pane_g1

0xbe45,	// (0x00058d35) blid2_search_pane_t1_ParamLimits

0xbe45,	// (0x00058d35) blid2_search_pane_t1

0xbe57,	// (0x00058d47) aid_size_cell_blid2_gps_ParamLimits

0xbe57,	// (0x00058d47) aid_size_cell_blid2_gps

0xbe67,	// (0x00058d57) blid2_gps_pane_g1_ParamLimits

0xbe67,	// (0x00058d57) blid2_gps_pane_g1

0xbe73,	// (0x00058d63) grid_blid2_satellite_pane_ParamLimits

0xbe73,	// (0x00058d63) grid_blid2_satellite_pane

0xbe81,	// (0x00058d71) blid2_navig_pane_g1_ParamLimits

0xbe81,	// (0x00058d71) blid2_navig_pane_g1

0xbe8d,	// (0x00058d7d) blid2_navig_pane_t1_ParamLimits

0xbe8d,	// (0x00058d7d) blid2_navig_pane_t1

0xbe9f,	// (0x00058d8f) blid2_navig_pane_t2_ParamLimits

0xbe9f,	// (0x00058d8f) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0005c9f3) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0005c9f3) blid2_navig_pane_t

0xbeb1,	// (0x00058da1) blid2_navig_ring_pane_ParamLimits

0xbeb1,	// (0x00058da1) blid2_navig_ring_pane

0xbec1,	// (0x00058db1) blid2_speed_pane_ParamLimits

0xbec1,	// (0x00058db1) blid2_speed_pane

0xbecd,	// (0x00058dbd) blid2_tripm_pane_g1_ParamLimits

0xbecd,	// (0x00058dbd) blid2_tripm_pane_g1

0xbedd,	// (0x00058dcd) blid2_tripm_pane_g2_ParamLimits

0xbedd,	// (0x00058dcd) blid2_tripm_pane_g2

0xbee9,	// (0x00058dd9) blid2_tripm_pane_g3_ParamLimits

0xbee9,	// (0x00058dd9) blid2_tripm_pane_g3

0xbef5,	// (0x00058de5) blid2_tripm_pane_g4_ParamLimits

0xbef5,	// (0x00058de5) blid2_tripm_pane_g4

0xbf01,	// (0x00058df1) blid2_tripm_pane_g5_ParamLimits

0xbf01,	// (0x00058df1) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0005c9f8) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0005c9f8) blid2_tripm_pane_g

0xbf1d,	// (0x00058e0d) blid2_tripm_pane_t1_ParamLimits

0xbf1d,	// (0x00058e0d) blid2_tripm_pane_t1

0xbf2f,	// (0x00058e1f) blid2_tripm_pane_t2_ParamLimits

0xbf2f,	// (0x00058e1f) blid2_tripm_pane_t2

0xbf41,	// (0x00058e31) blid2_tripm_pane_t3_ParamLimits

0xbf41,	// (0x00058e31) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0005ca05) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0005ca05) blid2_tripm_pane_t

0xbf73,	// (0x00058e63) cell_blid2_satellite_pane_ParamLimits

0xbf73,	// (0x00058e63) cell_blid2_satellite_pane

0xbf91,	// (0x00058e81) cell_blid2_satellite_pane_g1

0xe54c,	// (0x0005b43c) cell_blid2_satellite_pane_t1

0x4454,	// (0x00051344) blid2_speed_pane_g1

0xe55a,	// (0x0005b44a) blid2_speed_pane_t1

0xe568,	// (0x0005b458) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0005ca0e) blid2_speed_pane_t

0x4454,	// (0x00051344) blid2_navig_ring_pane_g1

0xbf9a,	// (0x00058e8a) blid2_navig_ring_pane_g2

0xbfa2,	// (0x00058e92) blid2_navig_ring_pane_g3

0xbfaa,	// (0x00058e9a) blid2_navig_ring_pane_g4

0xbfb2,	// (0x00058ea2) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0005ca13) blid2_navig_ring_pane_g

0x026c,	// (0x0004d15c) bg_popup_window_pane_cp011

0xe576,	// (0x0005b466) popup_blid2_search_window_g1

0xe57e,	// (0x0005b46e) popup_blid2_search_window_t1

0xe58c,	// (0x0005b47c) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0005ca1e) popup_blid2_search_window_t

0x2447,	// (0x0004f337) main_browser_pane_g1

0x214c,	// (0x0004f03c) main_browser_pane_ParamLimits

0xad09,	// (0x00057bf9) bg_button_pane_cp011_ParamLimits

0xafd3,	// (0x00057ec3) cell_vitu2_function_pane_g1_ParamLimits

0x3fd1,	// (0x00050ec1) bg_popup_sub_pane_cp22_ParamLimits

0xb8db,	// (0x000587cb) input_focus_pane_cp08_ParamLimits

0xb8f2,	// (0x000587e2) popup_vitu2_query_button_pane_ParamLimits

0xb8f2,	// (0x000587e2) popup_vitu2_query_button_pane

0xb903,	// (0x000587f3) popup_vitu2_query_input_button_pane

0xe23d,	// (0x0005b12d) popup_vitu2_query_window_g1_ParamLimits

0xb90d,	// (0x000587fd) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0005c926) popup_vitu2_query_window_g_ParamLimits

0x026c,	// (0x0004d15c) bg_button_pane_cp026

0xbfba,	// (0x00058eaa) popup_vitu2_query_input_button_pane_g1

0x026c,	// (0x0004d15c) bg_button_pane_cp025

0xe59a,	// (0x0005b48a) popup_vitu2_query_button_pane_t1

0x968b,	// (0x0005657b) main_mp3_pane_t6

0x969b,	// (0x0005658b) popup_slider_window_cp01

0xac2b,	// (0x00057b1b) cam4_battery_pane

0xad17,	// (0x00057c07) cam4_battery_pane_cp02

0xbd48,	// (0x00058c38) cam4_battery_pane_cp01

0xbd52,	// (0x00058c42) cam4_battery_pane_cp03

0xdea0,	// (0x0005ad90) cam4_battery_pane_g1

0x4454,	// (0x00051344) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0005ca23) cam4_battery_pane_g

0x4312,	// (0x00051202) popup_blid_sat_info2_window_t11

0x7da0,	// (0x00054c90) aid_size_touch_mv_arrow_left_ParamLimits

0x7dcb,	// (0x00054cbb) aid_size_touch_mv_arrow_right_ParamLimits

0x2af4,	// (0x0004f9e4) navi_pane_g1_ParamLimits

0x7e0a,	// (0x00054cfa) navi_pane_g2_ParamLimits

0x7e38,	// (0x00054d28) navi_pane_g3_ParamLimits

0xf404,	// (0x0005c2f4) navi_pane_g_ParamLimits

0x7e92,	// (0x00054d82) navi_pane_mv_t1_ParamLimits

0xa198,	// (0x00057088) grid_imed_effect_pane_ParamLimits

0x6af3,	// (0x000539e3) aid_placing_vt_slider_lsc

0x2392,	// (0x0004f282) aid_placing_vt_slider_prt

0x02e5,	// (0x0004d1d5) bg_tb_trans_pane_cp01_ParamLimits

0x45a4,	// (0x00051494) popup_image_details_window_g1_ParamLimits

0x45b7,	// (0x000514a7) popup_image_details_window_g2_ParamLimits

0x45cc,	// (0x000514bc) popup_image_details_window_g3_ParamLimits

0x45cc,	// (0x000514bc) popup_image_details_window_g3

0xf737,	// (0x0005c627) popup_image_details_window_g_ParamLimits

0x45e0,	// (0x000514d0) popup_image_details_window_t1_ParamLimits

0x45f2,	// (0x000514e2) popup_image_details_window_t2_ParamLimits

0x460b,	// (0x000514fb) popup_image_details_window_t3_ParamLimits

0x461f,	// (0x0005150f) popup_image_details_window_t4_ParamLimits

0x463a,	// (0x0005152a) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0005c62e) popup_image_details_window_t_ParamLimits

0xbc74,	// (0x00058b64) cl_header_name_pane_ParamLimits

0xbc74,	// (0x00058b64) cl_header_name_pane

0xbfc2,	// (0x00058eb2) cl_header_name_pane_t1_ParamLimits

0xbfc2,	// (0x00058eb2) cl_header_name_pane_t1

0xbfd9,	// (0x00058ec9) cl_header_name_pane_t2_ParamLimits

0xbfd9,	// (0x00058ec9) cl_header_name_pane_t2

0xc003,	// (0x00058ef3) cl_header_name_pane_t3_ParamLimits

0xc003,	// (0x00058ef3) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0005ca28) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0005ca28) cl_header_name_pane_t

0x7e63,	// (0x00054d53) navi_pane_mv_g2_ParamLimits

0xdf9e,	// (0x0005ae8e) field_vitu2_entry_pane_g1_ParamLimits

0xdfaa,	// (0x0005ae9a) field_vitu2_entry_pane_g2_ParamLimits

0xdfb6,	// (0x0005aea6) field_vitu2_entry_pane_g3_ParamLimits

0xdfb6,	// (0x0005aea6) field_vitu2_entry_pane_g3

0xf935,	// (0x0005c825) field_vitu2_entry_pane_g_ParamLimits

0xaf63,	// (0x00057e53) cell_vitu2_itu_pane_g1_ParamLimits

0xaf73,	// (0x00057e63) cell_vitu2_itu_pane_g2_ParamLimits

0xaf73,	// (0x00057e63) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0005c831) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0005c831) cell_vitu2_itu_pane_g

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp05_ParamLimits

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp05

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp03

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp04

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp10_ParamLimits

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp10

0xbc16,	// (0x00058b06) bg_vkb2_func_pane_cp08

0xbbfc,	// (0x00058aec) bg_vkb2_func_pane_cp06

0xbc0a,	// (0x00058afa) bg_vkb2_func_pane_cp07

0xe4c1,	// (0x0005b3b1) bg_vkb2_func_pane_cp11_ParamLimits

0xe4c1,	// (0x0005b3b1) bg_vkb2_func_pane_cp11

0xe4d6,	// (0x0005b3c6) bg_vkb2_func_pane_cp12_ParamLimits

0xe4d6,	// (0x0005b3c6) bg_vkb2_func_pane_cp12

0x026c,	// (0x0004d15c) bg_vkb2_func_pane_cp09

0xdfd6,	// (0x0005aec6) bg_vkb2_func_pane_g1

0x2558,	// (0x0004f448) bg_vkb2_func_pane_g2

0xdfde,	// (0x0005aece) bg_vkb2_func_pane_g3

0xdfe6,	// (0x0005aed6) bg_vkb2_func_pane_g4

0xe200,	// (0x0005b0f0) bg_vkb2_func_pane_g5

0xdffe,	// (0x0005aeee) bg_vkb2_func_pane_g6

0xe006,	// (0x0005aef6) bg_vkb2_func_pane_g7

0xdff6,	// (0x0005aee6) bg_vkb2_func_pane_g8

0x2538,	// (0x0004f428) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0005ca2f) bg_vkb2_func_pane_g

0xbf0f,	// (0x00058dff) blid2_tripm_pane_g6_ParamLimits

0xbf0f,	// (0x00058dff) blid2_tripm_pane_g6

0xde5a,	// (0x0005ad4a) mp4_progress_pane_g1

0xbf67,	// (0x00058e57) blid2_tripm_values_pane_ParamLimits

0xbf67,	// (0x00058e57) blid2_tripm_values_pane

0xc028,	// (0x00058f18) blid2_tripm_values_pane_t1

0xc036,	// (0x00058f26) blid2_tripm_values_pane_t2

0xc044,	// (0x00058f34) blid2_tripm_values_pane_t3

0xc052,	// (0x00058f42) blid2_tripm_values_pane_t4

0xc060,	// (0x00058f50) blid2_tripm_values_pane_t5

0xc06e,	// (0x00058f5e) blid2_tripm_values_pane_t6

0xc07c,	// (0x00058f6c) blid2_tripm_values_pane_t7

0xc08a,	// (0x00058f7a) blid2_tripm_values_pane_t8

0xc098,	// (0x00058f88) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0005ca42) blid2_tripm_values_pane_t

0x6b31,	// (0x00053a21) call_video_pane_t1_ParamLimits

0x6b4e,	// (0x00053a3e) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0005c17d) call_video_pane_t_ParamLimits

0x83ea,	// (0x000552da) msg_header_pane_g1_ParamLimits

0x2d1f,	// (0x0004fc0f) msg_header_pane_g2_ParamLimits

0x2d1f,	// (0x0004fc0f) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0005c397) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0005c397) msg_header_pane_g

0x214c,	// (0x0004f03c) main_clock2_pane_ParamLimits

0x9f1b,	// (0x00056e0b) grid_clock2_toolbar_pane_ParamLimits

0x9f1b,	// (0x00056e0b) grid_clock2_toolbar_pane

0x9f1b,	// (0x00056e0b) listscroll_clock2_pane_ParamLimits

0x9f1b,	// (0x00056e0b) listscroll_clock2_pane

0x9fcf,	// (0x00056ebf) main_clock2_pane_t3_ParamLimits

0x9fcf,	// (0x00056ebf) main_clock2_pane_t3

0x9fe1,	// (0x00056ed1) main_clock2_pane_t4_ParamLimits

0x9fe1,	// (0x00056ed1) main_clock2_pane_t4

0xe5a8,	// (0x0005b498) cell_clock2_toolbar_pane

0xe5b0,	// (0x0005b4a0) cell_clock2_toolbar_pane_cp01

0xe5b0,	// (0x0005b4a0) cell_clock2_toolbar_pane_cp02

0xe5b8,	// (0x0005b4a8) cell_clock2_toolbar_pane_cp03

0xe5c0,	// (0x0005b4b0) list_clock2_pane

0x2a5a,	// (0x0004f94a) scroll_pane_cp10

0xe5c8,	// (0x0005b4b8) list_single_clock2_pane_ParamLimits

0xe5c8,	// (0x0005b4b8) list_single_clock2_pane

0x2b94,	// (0x0004fa84) list_highlight_pane_cp08

0xe5d5,	// (0x0005b4c5) list_single_clock2_pane_t1

0xe5e3,	// (0x0005b4d3) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0005ca55) list_single_clock2_pane_t

0x026c,	// (0x0004d15c) bg_button_pane_cp10

0xe5f1,	// (0x0005b4e1) cell_clock2_toolbar_pane_g1

0x848b,	// (0x0005537b) aid_main_viewer_pane_g1_ParamLimits

0x848b,	// (0x0005537b) aid_main_viewer_pane_g1

0x8497,	// (0x00055387) aid_main_viewer_pane_g2_ParamLimits

0x8497,	// (0x00055387) aid_main_viewer_pane_g2

0x84a3,	// (0x00055393) aid_main_viewer_pane_g3_ParamLimits

0x84a3,	// (0x00055393) aid_main_viewer_pane_g3

0x84b4,	// (0x000553a4) aid_main_viewer_pane_g4_ParamLimits

0x84b4,	// (0x000553a4) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0005c3a8) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0005c3a8) aid_main_viewer_pane_g

0x8c3e,	// (0x00055b2e) main_calc_pane_ParamLimits

0x8c4b,	// (0x00055b3b) main_dialer2_pane_ParamLimits

0x026c,	// (0x0004d15c) main_cam6_pane

0x026c,	// (0x0004d15c) main_vid6_pane

0x9f27,	// (0x00056e17) listscroll_gen_pane_cp06_ParamLimits

0x9f27,	// (0x00056e17) listscroll_gen_pane_cp06

0x9ff3,	// (0x00056ee3) main_clock2_pane_t5_ParamLimits

0x9ff3,	// (0x00056ee3) main_clock2_pane_t5

0xa042,	// (0x00056f32) aid_call2_pane_cp10_ParamLimits

0xa054,	// (0x00056f44) aid_call_pane_cp10_ParamLimits

0x2ac9,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2ac9,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa066,	// (0x00056f56) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa066,	// (0x00056f56) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2ac9,	// (0x0004f9b9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0005c6de) popup_clock_analogue_window_cp10_g_ParamLimits

0xa078,	// (0x00056f68) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa848,	// (0x00057738) cell_dialer2_keypad_pane_g2_ParamLimits

0xa848,	// (0x00057738) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0005c7c4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0005c7c4) cell_dialer2_keypad_pane_g

0xa864,	// (0x00057754) cell_dialer2_keypad_pane_t1

0xb2ae,	// (0x0005819e) main_cset_text2_pane_ParamLimits

0xb2ae,	// (0x0005819e) main_cset_text2_pane

0xe429,	// (0x0005b319) area_vitu2_query_pane_g1_ParamLimits

0xbb9b,	// (0x00058a8b) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0005c979) area_vitu2_query_pane_g_ParamLimits

0x0d6d,	// (0x0004dc5d) area_vitu2_query_pane_t7_ParamLimits

0x0d6d,	// (0x0004dc5d) area_vitu2_query_pane_t7

0xbbfc,	// (0x00058aec) bg_button_pane_cp018_ParamLimits

0xbc0a,	// (0x00058afa) bg_button_pane_cp021_ParamLimits

0xbc16,	// (0x00058b06) bg_button_pane_cp022_ParamLimits

0xbc16,	// (0x00058b06) bg_vkb2_func_pane_cp08_ParamLimits

0xbbfc,	// (0x00058aec) bg_vkb2_func_pane_cp06_ParamLimits

0xbc0a,	// (0x00058afa) bg_vkb2_func_pane_cp07_ParamLimits

0xbc27,	// (0x00058b17) input_focus_pane_cp09_ParamLimits

0xc0a6,	// (0x00058f96) cam6_autofocus_pane_ParamLimits

0xc0a6,	// (0x00058f96) cam6_autofocus_pane

0xc0c8,	// (0x00058fb8) cam6_image_uncrop_pane_ParamLimits

0xc0c8,	// (0x00058fb8) cam6_image_uncrop_pane

0xc0f5,	// (0x00058fe5) cam6_indi_pane_ParamLimits

0xc0f5,	// (0x00058fe5) cam6_indi_pane

0xc10f,	// (0x00058fff) cam6_mode_pane_ParamLimits

0xc10f,	// (0x00058fff) cam6_mode_pane

0xc123,	// (0x00059013) cam6_timer_pane_ParamLimits

0xc123,	// (0x00059013) cam6_timer_pane

0xc12f,	// (0x0005901f) cam6_zoom_pane_ParamLimits

0xc12f,	// (0x0005901f) cam6_zoom_pane

0xc14b,	// (0x0005903b) cam6_mode_pane_g1_ParamLimits

0xc14b,	// (0x0005903b) cam6_mode_pane_g1

0xc157,	// (0x00059047) cam6_mode_pane_g2_ParamLimits

0xc157,	// (0x00059047) cam6_mode_pane_g2

0xc163,	// (0x00059053) cam6_mode_pane_g3_ParamLimits

0xc163,	// (0x00059053) cam6_mode_pane_g3

0xc16f,	// (0x0005905f) cam6_mode_pane_g4_ParamLimits

0xc16f,	// (0x0005905f) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0005ca5a) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0005ca5a) cam6_mode_pane_g

0xdeaa,	// (0x0005ad9a) bg_tb_trans_pane_cp08_ParamLimits

0xdeaa,	// (0x0005ad9a) bg_tb_trans_pane_cp08

0xe5f9,	// (0x0005b4e9) cam6_battery_pane_ParamLimits

0xe5f9,	// (0x0005b4e9) cam6_battery_pane

0xe60f,	// (0x0005b4ff) cam6_indi_pane_g1_ParamLimits

0xe60f,	// (0x0005b4ff) cam6_indi_pane_g1

0xe621,	// (0x0005b511) cam6_indi_pane_g2_ParamLimits

0xe621,	// (0x0005b511) cam6_indi_pane_g2

0xe633,	// (0x0005b523) cam6_indi_pane_g3_ParamLimits

0xe633,	// (0x0005b523) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0005ca63) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0005ca63) cam6_indi_pane_g

0xe645,	// (0x0005b535) cam6_indi_pane_t1_ParamLimits

0xe645,	// (0x0005b535) cam6_indi_pane_t1

0xad96,	// (0x00057c86) cam6_autofocus_pane_g1

0xad8e,	// (0x00057c7e) cam6_autofocus_pane_g2

0xada6,	// (0x00057c96) cam6_autofocus_pane_g3

0xad9e,	// (0x00057c8e) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0005ca6a) cam6_autofocus_pane_g

0xe66b,	// (0x0005b55b) cam6_timer_pane_g1

0xe673,	// (0x0005b563) cam6_timer_pane_t1

0xe681,	// (0x0005b571) cam6_zoom_cont_pane

0xe689,	// (0x0005b579) cam6_zoom_pane_g1

0xe691,	// (0x0005b581) cam6_zoom_pane_g2

0xc17b,	// (0x0005906b) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0005ca73) cam6_zoom_pane_g

0x4454,	// (0x00051344) cam6_battery_pane_g1

0x4454,	// (0x00051344) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0005c5eb) cam6_battery_pane_g

0xe699,	// (0x0005b589) cam6_zoom_cont_pane_g1

0xe6a2,	// (0x0005b592) cam6_zoom_cont_pane_g2

0xe6ab,	// (0x0005b59b) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0005ca7a) cam6_zoom_cont_pane_g

0xc198,	// (0x00059088) cam6_mode_pane_cp_ParamLimits

0xc198,	// (0x00059088) cam6_mode_pane_cp

0xc1ac,	// (0x0005909c) cam6_zoom_pane_cp_ParamLimits

0xc1ac,	// (0x0005909c) cam6_zoom_pane_cp

0xc1c8,	// (0x000590b8) vid6_image_uncrop_cif_pane_ParamLimits

0xc1c8,	// (0x000590b8) vid6_image_uncrop_cif_pane

0xc1f4,	// (0x000590e4) vid6_image_uncrop_nhd_pane_ParamLimits

0xc1f4,	// (0x000590e4) vid6_image_uncrop_nhd_pane

0xc213,	// (0x00059103) vid6_image_uncrop_vga_pane_ParamLimits

0xc213,	// (0x00059103) vid6_image_uncrop_vga_pane

0xc232,	// (0x00059122) vid6_image_uncrop_wvga_pane_ParamLimits

0xc232,	// (0x00059122) vid6_image_uncrop_wvga_pane

0xc251,	// (0x00059141) vid6_indi_pane_ParamLimits

0xc251,	// (0x00059141) vid6_indi_pane

0xdeaa,	// (0x0005ad9a) bg_tb_trans_pane_cp09_ParamLimits

0xdeaa,	// (0x0005ad9a) bg_tb_trans_pane_cp09

0xe6c3,	// (0x0005b5b3) cam6_battery_pane_cp_ParamLimits

0xe6c3,	// (0x0005b5b3) cam6_battery_pane_cp

0xe6cf,	// (0x0005b5bf) vid6_indi_pane_g1_ParamLimits

0xe6cf,	// (0x0005b5bf) vid6_indi_pane_g1

0xe6e1,	// (0x0005b5d1) vid6_indi_pane_g2_ParamLimits

0xe6e1,	// (0x0005b5d1) vid6_indi_pane_g2

0xe6f3,	// (0x0005b5e3) vid6_indi_pane_g3_ParamLimits

0xe6f3,	// (0x0005b5e3) vid6_indi_pane_g3

0xe70a,	// (0x0005b5fa) vid6_indi_pane_g4_ParamLimits

0xe70a,	// (0x0005b5fa) vid6_indi_pane_g4

0xe721,	// (0x0005b611) vid6_indi_pane_g5_ParamLimits

0xe721,	// (0x0005b611) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0005ca81) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0005ca81) vid6_indi_pane_g

0xe73b,	// (0x0005b62b) vid6_indi_pane_t1_ParamLimits

0xe73b,	// (0x0005b62b) vid6_indi_pane_t1

0xe751,	// (0x0005b641) vid6_indi_pane_t2_ParamLimits

0xe751,	// (0x0005b641) vid6_indi_pane_t2

0xe779,	// (0x0005b669) vid6_indi_pane_t3_ParamLimits

0xe779,	// (0x0005b669) vid6_indi_pane_t3

0xe7a1,	// (0x0005b691) vid6_indi_pane_t4_ParamLimits

0xe7a1,	// (0x0005b691) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0005ca8c) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0005ca8c) vid6_indi_pane_t

0xe7c5,	// (0x0005b6b5) wait_bar_pane_cp08

0xc276,	// (0x00059166) main_cset_text2_pane_t1_ParamLimits

0xc276,	// (0x00059166) main_cset_text2_pane_t1

0xc183,	// (0x00059073) listscroll_gen_pane_cp06_t1_ParamLimits

0xc183,	// (0x00059073) listscroll_gen_pane_cp06_t1

0x026c,	// (0x0004d15c) main_cam6_set_pane

0xac1d,	// (0x00057b0d) bg_tb_trans_pane_cp06_ParamLimits

0xac33,	// (0x00057b23) cam4_indicators_pane_g1_ParamLimits

0xac43,	// (0x00057b33) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0005c801) cam4_indicators_pane_g_ParamLimits

0xac5b,	// (0x00057b4b) cam4_indicators_pane_t1_ParamLimits

0xad09,	// (0x00057bf9) bg_tb_trans_pane_cp07_ParamLimits

0xad21,	// (0x00057c11) vid4_indicators_pane_g1_ParamLimits

0xad33,	// (0x00057c23) vid4_indicators_pane_g2_ParamLimits

0xad46,	// (0x00057c36) vid4_indicators_pane_g3_ParamLimits

0xad57,	// (0x00057c47) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0005c813) vid4_indicators_pane_g_ParamLimits

0xad73,	// (0x00057c63) vid4_indicators_pane_t1_ParamLimits

0xbd5a,	// (0x00058c4a) vid4_progress_pane_g1_ParamLimits

0xbd6b,	// (0x00058c5b) vid4_progress_pane_g2_ParamLimits

0x8511,	// (0x00055401) vid4_progress_pane_g3_ParamLimits

0xac43,	// (0x00057b33) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0005c9c4) vid4_progress_pane_g_ParamLimits

0xbd7d,	// (0x00058c6d) vid4_progress_pane_t1_ParamLimits

0xbd92,	// (0x00058c82) vid4_progress_pane_t2_ParamLimits

0xbdaa,	// (0x00058c9a) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0005c9cf) vid4_progress_pane_t_ParamLimits

0xbdc1,	// (0x00058cb1) wait_bar_pane_cp07_ParamLimits

0xc29d,	// (0x0005918d) main_cam6_set_pane_g2_ParamLimits

0xc29d,	// (0x0005918d) main_cam6_set_pane_g2

0xc2a9,	// (0x00059199) main_cset6_listscroll_pane_ParamLimits

0xc2a9,	// (0x00059199) main_cset6_listscroll_pane

0xc2d6,	// (0x000591c6) main_cset6_slider_pane_ParamLimits

0xc2d6,	// (0x000591c6) main_cset6_slider_pane

0xc2e2,	// (0x000591d2) main_cset6_text2_pane_ParamLimits

0xc2e2,	// (0x000591d2) main_cset6_text2_pane

0xe7d4,	// (0x0005b6c4) main_cset6_text_pane

0xe7dc,	// (0x0005b6cc) main_cset_list_pane_copy1_ParamLimits

0xe7dc,	// (0x0005b6cc) main_cset_list_pane_copy1

0xe7ec,	// (0x0005b6dc) scroll_pane_cp028_copy1

0xc2f5,	// (0x000591e5) cset_list_set_pane_copy1

0xc305,	// (0x000591f5) aid_position_infowindow_above_copy1

0xc30d,	// (0x000591fd) aid_position_infowindow_below_copy1

0xc315,	// (0x00059205) cset_list_set_pane_g1_copy1

0xc31d,	// (0x0005920d) cset_list_set_pane_g3_copy1_ParamLimits

0xc31d,	// (0x0005920d) cset_list_set_pane_g3_copy1

0xc32c,	// (0x0005921c) cset_list_set_pane_t1_copy1_ParamLimits

0xc32c,	// (0x0005921c) cset_list_set_pane_t1_copy1

0x02e5,	// (0x0004d1d5) list_highlight_pane_cp021_copy1_ParamLimits

0x02e5,	// (0x0004d1d5) list_highlight_pane_cp021_copy1

0xe7f5,	// (0x0005b6e5) cset6_slider_pane_ParamLimits

0xe7f5,	// (0x0005b6e5) cset6_slider_pane

0xe821,	// (0x0005b711) main_cset6_slider_pane_g1_ParamLimits

0xe821,	// (0x0005b711) main_cset6_slider_pane_g1

0xc341,	// (0x00059231) main_cset6_slider_pane_g2_ParamLimits

0xc341,	// (0x00059231) main_cset6_slider_pane_g2

0xe849,	// (0x0005b739) main_cset6_slider_pane_g3_ParamLimits

0xe849,	// (0x0005b739) main_cset6_slider_pane_g3

0xc369,	// (0x00059259) main_cset6_slider_pane_g4_ParamLimits

0xc369,	// (0x00059259) main_cset6_slider_pane_g4

0xc375,	// (0x00059265) main_cset6_slider_pane_g5_ParamLimits

0xc375,	// (0x00059265) main_cset6_slider_pane_g5

0xe109,	// (0x0005aff9) main_cset6_slider_pane_g7_ParamLimits

0xe109,	// (0x0005aff9) main_cset6_slider_pane_g7

0xe115,	// (0x0005b005) main_cset6_slider_pane_g8_ParamLimits

0xe115,	// (0x0005b005) main_cset6_slider_pane_g8

0xc381,	// (0x00059271) main_cset6_slider_pane_g9_ParamLimits

0xc381,	// (0x00059271) main_cset6_slider_pane_g9

0xc38d,	// (0x0005927d) main_cset6_slider_pane_g10_ParamLimits

0xc38d,	// (0x0005927d) main_cset6_slider_pane_g10

0xc399,	// (0x00059289) main_cset6_slider_pane_g11_ParamLimits

0xc399,	// (0x00059289) main_cset6_slider_pane_g11

0xc3a5,	// (0x00059295) main_cset6_slider_pane_g12_ParamLimits

0xc3a5,	// (0x00059295) main_cset6_slider_pane_g12

0xc3b1,	// (0x000592a1) main_cset6_slider_pane_g13_ParamLimits

0xc3b1,	// (0x000592a1) main_cset6_slider_pane_g13

0xc3bd,	// (0x000592ad) main_cset6_slider_pane_g14_ParamLimits

0xc3bd,	// (0x000592ad) main_cset6_slider_pane_g14

0xc3c9,	// (0x000592b9) main_cset6_slider_pane_g15_ParamLimits

0xc3c9,	// (0x000592b9) main_cset6_slider_pane_g15

0xc3e1,	// (0x000592d1) main_cset6_slider_pane_g16_ParamLimits

0xc3e1,	// (0x000592d1) main_cset6_slider_pane_g16

0xc3ed,	// (0x000592dd) main_cset6_slider_pane_g17_ParamLimits

0xc3ed,	// (0x000592dd) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0005ca95) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0005ca95) main_cset6_slider_pane_g

0xe855,	// (0x0005b745) main_cset6_slider_pane_t1_ParamLimits

0xe855,	// (0x0005b745) main_cset6_slider_pane_t1

0xc411,	// (0x00059301) main_cset6_slider_pane_t2_ParamLimits

0xc411,	// (0x00059301) main_cset6_slider_pane_t2

0xc43c,	// (0x0005932c) main_cset6_slider_pane_t3_ParamLimits

0xc43c,	// (0x0005932c) main_cset6_slider_pane_t3

0xc467,	// (0x00059357) main_cset6_slider_pane_t4_ParamLimits

0xc467,	// (0x00059357) main_cset6_slider_pane_t4

0xc492,	// (0x00059382) main_cset6_slider_pane_t5_ParamLimits

0xc492,	// (0x00059382) main_cset6_slider_pane_t5

0xe896,	// (0x0005b786) main_cset6_slider_pane_t7_ParamLimits

0xe896,	// (0x0005b786) main_cset6_slider_pane_t7

0xc4bd,	// (0x000593ad) main_cset6_slider_pane_t8_ParamLimits

0xc4bd,	// (0x000593ad) main_cset6_slider_pane_t8

0xc4e1,	// (0x000593d1) main_cset6_slider_pane_t9_ParamLimits

0xc4e1,	// (0x000593d1) main_cset6_slider_pane_t9

0xc505,	// (0x000593f5) main_cset6_slider_pane_t10_ParamLimits

0xc505,	// (0x000593f5) main_cset6_slider_pane_t10

0xc529,	// (0x00059419) main_cset6_slider_pane_t11_ParamLimits

0xc529,	// (0x00059419) main_cset6_slider_pane_t11

0xe8cc,	// (0x0005b7bc) main_cset6_slider_pane_t14_ParamLimits

0xe8cc,	// (0x0005b7bc) main_cset6_slider_pane_t14

0xe905,	// (0x0005b7f5) main_cset6_slider_pane_t15_ParamLimits

0xe905,	// (0x0005b7f5) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0005caba) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0005caba) main_cset6_slider_pane_t

0xe93e,	// (0x0005b82e) cset_slider_pane_g1_copy1

0xe947,	// (0x0005b837) cset_slider_pane_g2_copy1

0xe950,	// (0x0005b840) cset_slider_pane_g3_copy1

0x026c,	// (0x0004d15c) bg_popup_sub_pane_cp011_copy1

0xe249,	// (0x0005b139) main_cset_text_pane_g1_copy1

0xe251,	// (0x0005b141) main_cset_text_pane_t1_copy1

0xe25f,	// (0x0005b14f) main_cset_text_pane_t2_copy1

0xe26d,	// (0x0005b15d) main_cset_text_pane_t3_copy1

0xe27b,	// (0x0005b16b) main_cset_text_pane_t4_copy1

0xe289,	// (0x0005b179) main_cset_text_pane_t5_copy1

0xe297,	// (0x0005b187) main_cset_text_pane_t6_copy1

0xe2a5,	// (0x0005b195) main_cset_text_pane_t7_copy1

0xc54d,	// (0x0005943d) main_cset_text2_pane_t1_copy1

0x026c,	// (0x0004d15c) main_ncimui_pane

0x8c90,	// (0x00055b80) popup_query_ncimui_window_ParamLimits

0x8c90,	// (0x00055b80) popup_query_ncimui_window

0x090c,	// (0x0004d7fc) field_cale_ev2_pane_g4_ParamLimits

0x090c,	// (0x0004d7fc) field_cale_ev2_pane_g4

0xa55e,	// (0x0005744e) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa55e,	// (0x0005744e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0005c79f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0005c79f) cell_video_dialer_keypad_pane_g

0xa576,	// (0x00057466) cell_video_dialer_keypad_pane_t1

0x026c,	// (0x0004d15c) bg_popup_window_pane_cp012

0x2946,	// (0x0004f836) heading_pane_cp06

0xe983,	// (0x0005b873) ncim_query_content_pane

0x026c,	// (0x0004d15c) bg_popup_heading_pane_cp01

0xe98b,	// (0x0005b87b) ncim_heading_pane_t1

0xe999,	// (0x0005b889) ncim_indicator_popup_pane

0xe9ab,	// (0x0005b89b) ncim_query_button_pane

0xe9c1,	// (0x0005b8b1) ncim_query_content_pane_t1

0xe9d3,	// (0x0005b8c3) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x0005caf9) ncim_query_content_pane_t

0xea0d,	// (0x0005b8fd) ncim_query_list_pane

0xea1f,	// (0x0005b90f) ncim_query_popup_pane

0xe999,	// (0x0005b889) ncim_indicator_popup_pane_ParamLimits

0xc674,	// (0x00059564) ncim_query_content_pane_g1_ParamLimits

0xc674,	// (0x00059564) ncim_query_content_pane_g1

0xe9c1,	// (0x0005b8b1) ncim_query_content_pane_t1_ParamLimits

0xe9d3,	// (0x0005b8c3) ncim_query_content_pane_t2_ParamLimits

0xc680,	// (0x00059570) ncim_query_content_pane_t3_ParamLimits

0xc680,	// (0x00059570) ncim_query_content_pane_t3

0xc69d,	// (0x0005958d) ncim_query_content_pane_t4_ParamLimits

0xc69d,	// (0x0005958d) ncim_query_content_pane_t4

0xc6ba,	// (0x000595aa) ncim_query_content_pane_t5_ParamLimits

0xc6ba,	// (0x000595aa) ncim_query_content_pane_t5

0xe9e5,	// (0x0005b8d5) ncim_query_content_pane_t6_ParamLimits

0xe9e5,	// (0x0005b8d5) ncim_query_content_pane_t6

0xfc09,	// (0x0005caf9) ncim_query_content_pane_t_ParamLimits

0xea0d,	// (0x0005b8fd) ncim_query_list_pane_ParamLimits

0xea1f,	// (0x0005b90f) ncim_query_popup_pane_ParamLimits

0xea33,	// (0x0005b923) wait_bar_pane_cp04

0x026c,	// (0x0004d15c) input_focus_pane_cp011

0xea3b,	// (0x0005b92b) ncim_query_popup_pane_t1

0xea49,	// (0x0005b939) ncim_list_query_list_pane_ParamLimits

0xea49,	// (0x0005b939) ncim_list_query_list_pane

0x026c,	// (0x0004d15c) bg_button_pane_cp027

0xea5c,	// (0x0005b94c) ncim_query_button_pane_g1

0x026c,	// (0x0004d15c) list_highlight_pane_cp012

0xea66,	// (0x0005b956) ncim_list_query_list_pane_g1

0xea6e,	// (0x0005b95e) ncim_list_query_list_pane_t1

0xac4f,	// (0x00057b3f) cam4_indicators_pane_g3_ParamLimits

0xac4f,	// (0x00057b3f) cam4_indicators_pane_g3

0xad63,	// (0x00057c53) vid4_indicators_pane_g5_ParamLimits

0xad63,	// (0x00057c53) vid4_indicators_pane_g5

0xac4f,	// (0x00057b3f) vid4_progress_pane_g5_ParamLimits

0xac4f,	// (0x00057b3f) vid4_progress_pane_g5

0xc57b,	// (0x0005946b) main_ncimui_pane_g1

0xc5d5,	// (0x000594c5) ncimui_group_query_pane_ParamLimits

0xc5d5,	// (0x000594c5) ncimui_group_query_pane

0xc61f,	// (0x0005950f) ncimui_list_pane_ParamLimits

0xc61f,	// (0x0005950f) ncimui_list_pane

0xc640,	// (0x00059530) ncimui_text_pane_ParamLimits

0xc640,	// (0x00059530) ncimui_text_pane

0xc6d7,	// (0x000595c7) ncimui_text_pane_t1_ParamLimits

0xc6d7,	// (0x000595c7) ncimui_text_pane_t1

0xea7c,	// (0x0005b96c) ncimui_list_single_graphic_pane_ParamLimits

0xea7c,	// (0x0005b96c) ncimui_list_single_graphic_pane

0xc6f6,	// (0x000595e6) ncimui_query_pane_ParamLimits

0xc6f6,	// (0x000595e6) ncimui_query_pane

0x026c,	// (0x0004d15c) list_highlight_pane_cp013

0xea8c,	// (0x0005b97c) ncim_list_query_list_pane_t1_copy1

0xea66,	// (0x0005b956) ncim_list_single_graphic_pane_g1

0xea9a,	// (0x0005b98a) ncim_query_button_pane_cp01

0xeaa6,	// (0x0005b996) ncim_query_entry_pane_ParamLimits

0xeaa6,	// (0x0005b996) ncim_query_entry_pane

0xeab9,	// (0x0005b9a9) ncimui_query_pane_g1

0xeac5,	// (0x0005b9b5) ncimui_query_pane_t1_ParamLimits

0xeac5,	// (0x0005b9b5) ncimui_query_pane_t1

0x02e5,	// (0x0004d1d5) input_focus_pane_cp012

0xeade,	// (0x0005b9ce) ncim_query_entry_pane_t1

0x214c,	// (0x0004f03c) main_im_pane_ParamLimits

0x02e5,	// (0x0004d1d5) main_mobtv_pane_ParamLimits

0x02e5,	// (0x0004d1d5) main_mobtv_pane

0xc3f9,	// (0x000592e9) main_cset6_slider_pane_g18_ParamLimits

0xc3f9,	// (0x000592e9) main_cset6_slider_pane_g18

0xc405,	// (0x000592f5) main_cset6_slider_pane_g19_ParamLimits

0xc405,	// (0x000592f5) main_cset6_slider_pane_g19

0xdfb6,	// (0x0005aea6) bg_main_mobtv_pane_ParamLimits

0xdfb6,	// (0x0005aea6) bg_main_mobtv_pane

0xc709,	// (0x000595f9) main_mobtv_info_pane

0xc714,	// (0x00059604) main_mobtv_loading_pane_ParamLimits

0xc714,	// (0x00059604) main_mobtv_loading_pane

0xeaf0,	// (0x0005b9e0) main_mobtv_pg_channel_list_pane

0xeafa,	// (0x0005b9ea) main_mobtv_pg_hdr_pane

0xc721,	// (0x00059611) main_mobtv_programe_curr_pane_ParamLimits

0xc721,	// (0x00059611) main_mobtv_programe_curr_pane

0xc72e,	// (0x0005961e) main_mobtv_programe_next_pane_ParamLimits

0xc72e,	// (0x0005961e) main_mobtv_programe_next_pane

0xeb03,	// (0x0005b9f3) popup_mobtv_noti_window

0x4454,	// (0x00051344) main_tv_pg_hdr_pane_g1

0xeb0d,	// (0x0005b9fd) main_tv_pg_hdr_pane_g2

0xeb15,	// (0x0005ba05) main_tv_pg_hdr_pane_g3

0xeb1d,	// (0x0005ba0d) main_tv_pg_hdr_pane_g4

0xeb25,	// (0x0005ba15) main_tv_pg_hdr_pane_g5

0xeb2f,	// (0x0005ba1f) main_tv_pg_hdr_pane_g6

0xeb39,	// (0x0005ba29) main_tv_pg_hdr_pane_g7

0xeb43,	// (0x0005ba33) main_tv_pg_hdr_pane_g8

0xeb4d,	// (0x0005ba3d) main_tv_pg_hdr_pane_g9

0xeb57,	// (0x0005ba47) main_tv_pg_hdr_pane_g10

0xeb61,	// (0x0005ba51) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x0005cb06) main_tv_pg_hdr_pane_g

0xeb6b,	// (0x0005ba5b) main_tv_pg_hdr_pane_t1

0xeb79,	// (0x0005ba69) main_tv_pg_hdr_pane_t2

0xeb87,	// (0x0005ba77) main_tv_pg_hdr_pane_t3

0xeb97,	// (0x0005ba87) main_tv_pg_hdr_pane_t4

0xeba7,	// (0x0005ba97) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x0005cb1d) main_tv_pg_hdr_pane_t

0xebb7,	// (0x0005baa7) single_mobtv_pg_channel_pane_ParamLimits

0xebb7,	// (0x0005baa7) single_mobtv_pg_channel_pane

0xebc9,	// (0x0005bab9) single_mobtv_pg_channel_table_pane

0xebd2,	// (0x0005bac2) single_mobtv_pg_channel_thumb_pane

0xebdb,	// (0x0005bacb) single_tv_pg_channel_pane_g1

0xebe4,	// (0x0005bad4) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x0005cb28) single_tv_pg_channel_pane_g

0x4684,	// (0x00051574) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4684,	// (0x00051574) bg_single_mobtv_pg_channel_thumb_pane

0xebed,	// (0x0005badd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xebed,	// (0x0005badd) single_mobtv_pg_channel_thumb_pane_g1

0xebfb,	// (0x0005baeb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xebfb,	// (0x0005baeb) single_mobtv_pg_channel_thumb_pane_g2

0xec07,	// (0x0005baf7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec07,	// (0x0005baf7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x0005cb2d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x0005cb2d) single_mobtv_pg_channel_thumb_pane_g

0xec13,	// (0x0005bb03) single_mobtv_pg_channel_thumb_pane_t1

0xec21,	// (0x0005bb11) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x0005cb34) single_mobtv_pg_channel_thumb_pane_t

0x4454,	// (0x00051344) bg_single_mobtv_pg_channel_table_pane_g1

0x4454,	// (0x00051344) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0005c5eb) bg_single_mobtv_pg_channel_table_pane_g

0xec2f,	// (0x0005bb1f) single_mobtv_pg_channel_table_pane_t1

0xec3d,	// (0x0005bb2d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x0005cb39) single_mobtv_pg_channel_table_pane_t

0xc743,	// (0x00059633) main_mobtv_info_pane_g1_ParamLimits

0xc743,	// (0x00059633) main_mobtv_info_pane_g1

0xc75f,	// (0x0005964f) main_mobtv_info_pane_t1_ParamLimits

0xc75f,	// (0x0005964f) main_mobtv_info_pane_t1

0xc7d7,	// (0x000596c7) main_mobtv_info_pane_t2_ParamLimits

0xc7d7,	// (0x000596c7) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x0005cb43) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x0005cb43) main_mobtv_info_pane_t

0xc868,	// (0x00059758) wait_bar_pane_cp05

0xc87a,	// (0x0005976a) main_mobtv_loading_pane_g1_ParamLimits

0xc87a,	// (0x0005976a) main_mobtv_loading_pane_g1

0xc886,	// (0x00059776) main_mobtv_loading_pane_g2_ParamLimits

0xc886,	// (0x00059776) main_mobtv_loading_pane_g2

0xc892,	// (0x00059782) main_mobtv_loading_pane_g3_ParamLimits

0xc892,	// (0x00059782) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x0005cb4a) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x0005cb4a) main_mobtv_loading_pane_g

0xec4b,	// (0x0005bb3b) main_mobtv_loading_pane_t1_ParamLimits

0xec4b,	// (0x0005bb3b) main_mobtv_loading_pane_t1

0xec63,	// (0x0005bb53) main_mobtv_loading_pane_t2_ParamLimits

0xec63,	// (0x0005bb53) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x0005cb51) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x0005cb51) main_mobtv_loading_pane_t

0xc8a0,	// (0x00059790) wait_bar_pane_cp06_ParamLimits

0xc8a0,	// (0x00059790) wait_bar_pane_cp06

0xec87,	// (0x0005bb77) main_mobtv_programe_curr_pane_t1

0xec95,	// (0x0005bb85) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x0005cb56) main_mobtv_programe_curr_pane_t

0xeca3,	// (0x0005bb93) main_mobtv_programe_next_pane_t1

0xecb1,	// (0x0005bba1) main_mobtv_programe_next_pane_t2

0xecbf,	// (0x0005bbaf) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x0005cb5b) main_mobtv_programe_next_pane_t

0x026c,	// (0x0004d15c) bg_popup_mobtv_noti_window_pane

0xeccd,	// (0x0005bbbd) popup_mobtv_noti_window_g1

0xecd5,	// (0x0005bbc5) popup_mobtv_noti_window_t1

0xece3,	// (0x0005bbd3) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x0005cb62) popup_mobtv_noti_window_t

0x4454,	// (0x00051344) bg_popup_mobtv_noti_window_pane_g1

0x026c,	// (0x0004d15c) sc_clock_pane

0x026c,	// (0x0004d15c) main_fs_bigclock_pane

0xbf55,	// (0x00058e45) blid2_tripm_pane_t4_ParamLimits

0xbf55,	// (0x00058e45) blid2_tripm_pane_t4

0xc8ac,	// (0x0005979c) sc_clock_pane_g1_ParamLimits

0xc8ac,	// (0x0005979c) sc_clock_pane_g1

0xc8ba,	// (0x000597aa) sc_clock_pane_t1_ParamLimits

0xc8ba,	// (0x000597aa) sc_clock_pane_t1

0xc8cf,	// (0x000597bf) sc_clock_pane_t2_ParamLimits

0xc8cf,	// (0x000597bf) sc_clock_pane_t2

0xc8e1,	// (0x000597d1) sc_clock_pane_t3_ParamLimits

0xc8e1,	// (0x000597d1) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x0005cb67) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x0005cb67) sc_clock_pane_t

0xd5d4,	// (0x0005a4c4) main_fs_bigclock_indicator_pane_ParamLimits

0xd5d4,	// (0x0005a4c4) main_fs_bigclock_indicator_pane

0xc96e,	// (0x0005985e) main_fs_bigclock_pane_g1_ParamLimits

0xc96e,	// (0x0005985e) main_fs_bigclock_pane_g1

0xd5e0,	// (0x0005a4d0) main_fs_bigclock_pane_t1_ParamLimits

0xd5e0,	// (0x0005a4d0) main_fs_bigclock_pane_t1

0xd5f2,	// (0x0005a4e2) main_fs_bigclock_pane_t2_ParamLimits

0xd5f2,	// (0x0005a4e2) main_fs_bigclock_pane_t2

0xd606,	// (0x0005a4f6) main_fs_bigclock_pane_t3_ParamLimits

0xd606,	// (0x0005a4f6) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x0005cd6b) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x0005cd6b) main_fs_bigclock_pane_t

0x1775,	// (0x0004e665) main_fs_bigclock_indicator_pane_g1

0xe9b3,	// (0x0005b8a3) ncim_query_content_pane_g2_ParamLimits

0xe9b3,	// (0x0005b8a3) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x0005caf4) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x0005caf4) ncim_query_content_pane_g

0xc8f3,	// (0x000597e3) sc_clock_pane_t4_ParamLimits

0xc8f3,	// (0x000597e3) sc_clock_pane_t4

0x02e5,	// (0x0004d1d5) main_radioblah_pane

0xdf21,	// (0x0005ae11) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf21,	// (0x0005ae11) cell_call4_button_pane_t1_copy1

0xc585,	// (0x00059475) main_ncimui_pane_t1_ParamLimits

0xc585,	// (0x00059475) main_ncimui_pane_t1

0xc59f,	// (0x0005948f) main_ncimui_pane_t2_ParamLimits

0xc59f,	// (0x0005948f) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x0005caed) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x0005caed) main_ncimui_pane_t

0xee43,	// (0x0005bd33) main_radioblah_anim_pane_ParamLimits

0xee43,	// (0x0005bd33) main_radioblah_anim_pane

0xee54,	// (0x0005bd44) main_radioblah_info_pane_ParamLimits

0xee54,	// (0x0005bd44) main_radioblah_info_pane

0xee68,	// (0x0005bd58) main_radioblah_pane_t1_ParamLimits

0xee68,	// (0x0005bd58) main_radioblah_pane_t1

0xee84,	// (0x0005bd74) main_radioblah_pane_t2_ParamLimits

0xee84,	// (0x0005bd74) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x0005cb88) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x0005cb88) main_radioblah_pane_t

0xc9c0,	// (0x000598b0) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc9c0,	// (0x000598b0) main_radioblah_rocker_ctrl_pane

0xeecc,	// (0x0005bdbc) main_radioblah_info_pane_t1_ParamLimits

0xeecc,	// (0x0005bdbc) main_radioblah_info_pane_t1

0xca09,	// (0x000598f9) main_radioblah_info_pane_t2_ParamLimits

0xca09,	// (0x000598f9) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x0005cb91) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x0005cb91) main_radioblah_info_pane_t

0x4454,	// (0x00051344) main_radioblah_rocker_ctrl_pane_g1

0xcab9,	// (0x000599a9) main_radioblah_rocker_ctrl_pane_g2

0xcac1,	// (0x000599b1) main_radioblah_rocker_ctrl_pane_g3

0xcac9,	// (0x000599b9) main_radioblah_rocker_ctrl_pane_g4

0xcad1,	// (0x000599c1) main_radioblah_rocker_ctrl_pane_g5

0xcad9,	// (0x000599c9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x0005cb9a) main_radioblah_rocker_ctrl_pane_g

0xc54d,	// (0x0005943d) main_cset_text2_pane_t1_copy1_ParamLimits

0xab6f,	// (0x00057a5f) cam4_image_uncrop_qvga_pane

0xacc3,	// (0x00057bb3) vid4_image_uncrop_qcif_pane

0xc0e7,	// (0x00058fd7) cam6_image_uncrop_qvga_pane_ParamLimits

0xc0e7,	// (0x00058fd7) cam6_image_uncrop_qvga_pane

0xe6b3,	// (0x0005b5a3) vid6_image_uncrop_qcif_pane_ParamLimits

0xe6b3,	// (0x0005b5a3) vid6_image_uncrop_qcif_pane

0x026c,	// (0x0004d15c) bg_popup_preview_window_pane_cp03

0xe959,	// (0x0005b849) list_cset_text2_pane

0xe961,	// (0x0005b851) main_cset6_text2_pane_g1

0xe969,	// (0x0005b859) main_cset6_text2_pane_t1

0xcae1,	// (0x000599d1) list_cset_text2_pane_t1_ParamLimits

0xcae1,	// (0x000599d1) list_cset_text2_pane_t1

0x02e5,	// (0x0004d1d5) main_radioblah_pane_ParamLimits

0xc854,	// (0x00059744) main_mobtv_info_pane_t3_ParamLimits

0xc854,	// (0x00059744) main_mobtv_info_pane_t3

0xc9ae,	// (0x0005989e) main_radioblah_pane_g1

0xc9d9,	// (0x000598c9) main_radioblah_info_pane_g1

0xca5e,	// (0x0005994e) main_radioblah_info_pane_t3_ParamLimits

0xca5e,	// (0x0005994e) main_radioblah_info_pane_t3

0x7832,	// (0x00054722) highlight_cell_cale_month_pane_ParamLimits

0x7832,	// (0x00054722) highlight_cell_cale_month_pane

0x026c,	// (0x0004d15c) main_phob_fisheye_pane

0x4766,	// (0x00051656) scroll_pane_cp0031_ParamLimits

0x4766,	// (0x00051656) scroll_pane_cp0031

0xe7c5,	// (0x0005b6b5) wait_bar_pane_cp08_ParamLimits

0xc2f5,	// (0x000591e5) cset_list_set_pane_copy1_ParamLimits

0xef06,	// (0x0005bdf6) highlight_cell_cale_month_pane_g1

0xcaf8,	// (0x000599e8) highlight_cell_cale_month_pane_t1

0xe47d,	// (0x0005b36d) list_gen_pane_cp01

0xe0f4,	// (0x0005afe4) scroll_pane_01

0xcb06,	// (0x000599f6) list_single_double_fisheye_pane

0xcb0f,	// (0x000599ff) list_double_fisheye_pane_g1_ParamLimits

0xcb0f,	// (0x000599ff) list_double_fisheye_pane_g1

0xcb1b,	// (0x00059a0b) list_double_fisheye_pane_g2_ParamLimits

0xcb1b,	// (0x00059a0b) list_double_fisheye_pane_g2

0xcb2f,	// (0x00059a1f) list_double_fisheye_pane_g3_ParamLimits

0xcb2f,	// (0x00059a1f) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x0005cba7) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x0005cba7) list_double_fisheye_pane_g

0xcb58,	// (0x00059a48) list_double_fisheye_pane_t1_ParamLimits

0xcb58,	// (0x00059a48) list_double_fisheye_pane_t1

0xcb73,	// (0x00059a63) list_double_fisheye_pane_t2_ParamLimits

0xcb73,	// (0x00059a63) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x0005cbb2) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x0005cbb2) list_double_fisheye_pane_t

0x026c,	// (0x0004d15c) main_call5_pane

0xc919,	// (0x00059809) sc_swipe_pane_ParamLimits

0xc919,	// (0x00059809) sc_swipe_pane

0xcba1,	// (0x00059a91) call5_image_pane_ParamLimits

0xcba1,	// (0x00059a91) call5_image_pane

0xcbb3,	// (0x00059aa3) call5_swipe_1_pane_ParamLimits

0xcbb3,	// (0x00059aa3) call5_swipe_1_pane

0xcbbf,	// (0x00059aaf) call5_swipe_2_pane_ParamLimits

0xcbbf,	// (0x00059aaf) call5_swipe_2_pane

0xcbdb,	// (0x00059acb) popup_call5_audio_first_window_ParamLimits

0xcbdb,	// (0x00059acb) popup_call5_audio_first_window

0x4684,	// (0x00051574) call5_swipe_1_pane_g1_ParamLimits

0x4684,	// (0x00051574) call5_swipe_1_pane_g1

0xef0e,	// (0x0005bdfe) call5_swipe_1_pane_g2_ParamLimits

0xef0e,	// (0x0005bdfe) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x0005cbb7) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x0005cbb7) call5_swipe_1_pane_g

0xef1a,	// (0x0005be0a) call5_swipe_1_pane_t1_ParamLimits

0xef1a,	// (0x0005be0a) call5_swipe_1_pane_t1

0x4684,	// (0x00051574) call5_swipe_2_pane_g1_ParamLimits

0x4684,	// (0x00051574) call5_swipe_2_pane_g1

0xef2f,	// (0x0005be1f) call5_swipe_2_pane_g2_ParamLimits

0xef2f,	// (0x0005be1f) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x0005cbbc) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x0005cbbc) call5_swipe_2_pane_g

0xef3b,	// (0x0005be2b) call5_swipe_2_pane_t1_ParamLimits

0xef3b,	// (0x0005be2b) call5_swipe_2_pane_t1

0xef50,	// (0x0005be40) sc_swipe_pane_g1_ParamLimits

0xef50,	// (0x0005be40) sc_swipe_pane_g1

0xef5d,	// (0x0005be4d) sc_swipe_pane_g2_ParamLimits

0xef5d,	// (0x0005be4d) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x0005cbc1) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x0005cbc1) sc_swipe_pane_g

0xef69,	// (0x0005be59) sc_swipe_pane_t1_ParamLimits

0xef69,	// (0x0005be59) sc_swipe_pane_t1

0x026c,	// (0x0004d15c) main_cmail_launcher_pane

0xcbeb,	// (0x00059adb) aid_size_cell_cmail_l_ParamLimits

0xcbeb,	// (0x00059adb) aid_size_cell_cmail_l

0xcbfb,	// (0x00059aeb) grid_cmail_l_pane_ParamLimits

0xcbfb,	// (0x00059aeb) grid_cmail_l_pane

0xcc0b,	// (0x00059afb) cell_cmail_l_pane_ParamLimits

0xcc0b,	// (0x00059afb) cell_cmail_l_pane

0xcc21,	// (0x00059b11) cell_cmail_l_pane_g1_ParamLimits

0xcc21,	// (0x00059b11) cell_cmail_l_pane_g1

0xcc2d,	// (0x00059b1d) cell_cmail_l_pane_t1_ParamLimits

0xcc2d,	// (0x00059b1d) cell_cmail_l_pane_t1

0xef7e,	// (0x0005be6e) cell_cmail_l_pane_t2_ParamLimits

0xef7e,	// (0x0005be6e) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x0005cbc6) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x0005cbc6) cell_cmail_l_pane_t

0x02e5,	// (0x0004d1d5) grid_highlight_pane_cp018_ParamLimits

0x02e5,	// (0x0004d1d5) grid_highlight_pane_cp018

0x5be6,	// (0x00052ad6) main2_pane_ParamLimits

0x5be6,	// (0x00052ad6) main2_pane

0x21f7,	// (0x0004f0e7) popup_sp_fs_action_menu_bg_pane_g1

0x21ff,	// (0x0004f0ef) popup_sp_fs_action_menu_bg_pane_g2

0x2207,	// (0x0004f0f7) popup_sp_fs_action_menu_bg_pane_g3

0x220f,	// (0x0004f0ff) popup_sp_fs_action_menu_bg_pane_g4

0x2217,	// (0x0004f107) popup_sp_fs_action_menu_bg_pane_g5

0x221f,	// (0x0004f10f) popup_sp_fs_action_menu_bg_pane_g6

0x2227,	// (0x0004f117) popup_sp_fs_action_menu_bg_pane_g7

0x222f,	// (0x0004f11f) popup_sp_fs_action_menu_bg_pane_g8

0x2237,	// (0x0004f127) popup_sp_fs_action_menu_bg_pane_g9

0x223f,	// (0x0004f12f) popup_sp_fs_action_menu_bg_pane_g10

0x223f,	// (0x0004f12f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0005c097) popup_sp_fs_action_menu_bg_pane_g

0x0602,	// (0x0004d4f2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t3_g3_g1

0x060e,	// (0x0004d4fe) list_medium_line_x2_t3_g3_g2_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x2_t3_g3_g2

0x061a,	// (0x0004d50a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0005c147) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0005c147) list_medium_line_x2_t3_g3_g

0x0626,	// (0x0004d516) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0626,	// (0x0004d516) list_medium_line_x2_t3_g3_t1

0x6a28,	// (0x00053918) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6a28,	// (0x00053918) list_medium_line_x2_t3_g3_t2

0x063b,	// (0x0004d52b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0005c14e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0005c14e) list_medium_line_x2_t3_g3_t

0x0602,	// (0x0004d4f2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t3_g2_g1

0x061a,	// (0x0004d50a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0005c155) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0005c155) list_medium_line_x2_t3_g2_g

0x0650,	// (0x0004d540) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0650,	// (0x0004d540) list_medium_line_x2_t3_g2_t1

0x0666,	// (0x0004d556) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0666,	// (0x0004d556) list_medium_line_x2_t3_g2_t2

0x0678,	// (0x0004d568) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0678,	// (0x0004d568) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0005c15a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0005c15a) list_medium_line_x2_t3_g2_t

0x0602,	// (0x0004d4f2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t4_g4_g1

0x0696,	// (0x0004d586) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0696,	// (0x0004d586) list_medium_line_x2_t4_g4_g2

0x060e,	// (0x0004d4fe) list_medium_line_x2_t4_g4_g3_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x2_t4_g4_g3

0x06a2,	// (0x0004d592) list_medium_line_x2_t4_g4_g4_ParamLimits

0x06a2,	// (0x0004d592) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0005c161) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0005c161) list_medium_line_x2_t4_g4_g

0x6a3c,	// (0x0005392c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6a3c,	// (0x0005392c) list_medium_line_x2_t4_g4_t1

0x6a56,	// (0x00053946) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6a56,	// (0x00053946) list_medium_line_x2_t4_g4_t2

0x6a6c,	// (0x0005395c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6a6c,	// (0x0005395c) list_medium_line_x2_t4_g4_t3

0x06ae,	// (0x0004d59e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x06ae,	// (0x0004d59e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0005c16a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0005c16a) list_medium_line_x2_t4_g4_t

0x0602,	// (0x0004d4f2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t2_g4_g1

0x0696,	// (0x0004d586) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0696,	// (0x0004d586) list_medium_line_x2_t2_g4_g2

0x060e,	// (0x0004d4fe) list_medium_line_x2_t2_g4_g3_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x2_t2_g4_g3

0x061a,	// (0x0004d50a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0005c1d1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0005c1d1) list_medium_line_x2_t2_g4_g

0x06c0,	// (0x0004d5b0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x06c0,	// (0x0004d5b0) list_medium_line_x2_t2_g4_t1

0x063b,	// (0x0004d52b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0005c1da) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0005c1da) list_medium_line_x2_t2_g4_t

0x0602,	// (0x0004d4f2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t2_g3_g1

0x060e,	// (0x0004d4fe) list_medium_line_x2_t2_g3_g2_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x2_t2_g3_g2

0x061a,	// (0x0004d50a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0005c147) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0005c147) list_medium_line_x2_t2_g3_g

0x06d5,	// (0x0004d5c5) list_medium_line_x2_t2_g3_t1_ParamLimits

0x06d5,	// (0x0004d5c5) list_medium_line_x2_t2_g3_t1

0x063b,	// (0x0004d52b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0005c1df) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0005c1df) list_medium_line_x2_t2_g3_t

0x7a3d,	// (0x0005492d) main_sp_fs_list_pane_ParamLimits

0x7a3d,	// (0x0005492d) main_sp_fs_list_pane

0x7a49,	// (0x00054939) sp_fs_scroll_pane_ParamLimits

0x7a49,	// (0x00054939) sp_fs_scroll_pane

0x7a55,	// (0x00054945) list_medium_line_x2_t3_t1

0x7a65,	// (0x00054955) list_medium_line_x2_t3_t2

0x0718,	// (0x0004d608) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0005c22a) list_medium_line_x2_t3_t

0x7a73,	// (0x00054963) list_medium_line_x3_t4_t1

0x7a83,	// (0x00054973) list_medium_line_x3_t4_t2

0x0726,	// (0x0004d616) list_medium_line_x3_t4_t3

0x0718,	// (0x0004d608) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0005c231) list_medium_line_x3_t4_t

0x7a91,	// (0x00054981) list_medium_line_x4_t5_t1

0x7aa1,	// (0x00054991) list_medium_line_x4_t5_t2

0x0726,	// (0x0004d616) list_medium_line_x4_t5_t3

0x0734,	// (0x0004d624) list_medium_line_x4_t5_t4

0x0718,	// (0x0004d608) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0005c23a) list_medium_line_x4_t5_t

0x0602,	// (0x0004d4f2) list_medium_line_t4_g4_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_t4_g4_g1

0x06a2,	// (0x0004d592) list_medium_line_t4_g4_g2_ParamLimits

0x06a2,	// (0x0004d592) list_medium_line_t4_g4_g2

0x0742,	// (0x0004d632) list_medium_line_t4_g4_g3_ParamLimits

0x0742,	// (0x0004d632) list_medium_line_t4_g4_g3

0x061a,	// (0x0004d50a) list_medium_line_t4_g4_g4_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0005c245) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0005c245) list_medium_line_t4_g4_g

0x074e,	// (0x0004d63e) list_medium_line_t4_g4_t1_ParamLimits

0x074e,	// (0x0004d63e) list_medium_line_t4_g4_t1

0x0763,	// (0x0004d653) list_medium_line_t4_g4_t2_ParamLimits

0x0763,	// (0x0004d653) list_medium_line_t4_g4_t2

0x0779,	// (0x0004d669) list_medium_line_t4_g4_t3_ParamLimits

0x0779,	// (0x0004d669) list_medium_line_t4_g4_t3

0x063b,	// (0x0004d52b) list_medium_line_t4_g4_t4_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0005c24e) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0005c24e) list_medium_line_t4_g4_t

0x7bc2,	// (0x00054ab2) chi_dic_find_pane_g1

0x8c59,	// (0x00055b49) main_tport_pane

0x0c93,	// (0x0004db83) list_medium_line_plain_t1

0x0cdd,	// (0x0004dbcd) list_medium_line_t2_g2_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_t2_g2_g1

0x0ce9,	// (0x0004dbd9) list_medium_line_t2_g2_g2_ParamLimits

0x0ce9,	// (0x0004dbd9) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0005c90a) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0005c90a) list_medium_line_t2_g2_g

0xb769,	// (0x00058659) list_medium_line_t2_g2_t1_ParamLimits

0xb769,	// (0x00058659) list_medium_line_t2_g2_t1

0xb780,	// (0x00058670) list_medium_line_t2_g2_t2_ParamLimits

0xb780,	// (0x00058670) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0005c90f) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0005c90f) list_medium_line_t2_g2_t

0x0dae,	// (0x0004dc9e) aid_sp_fs_list_icon_a_sm

0x0db6,	// (0x0004dca6) aid_sp_fs_list_icon_d

0x0dbe,	// (0x0004dcae) aid_sp_fs_text_primary

0x0dc7,	// (0x0004dcb7) aid_sp_fs_text_secondary

0x0dd0,	// (0x0004dcc0) list_medium_line

0x0dd0,	// (0x0004dcc0) list_medium_line_g2

0x0dd0,	// (0x0004dcc0) list_medium_line_g3

0x0dd0,	// (0x0004dcc0) list_medium_line_plain

0x0dd0,	// (0x0004dcc0) list_medium_line_plain_t2

0x0dd0,	// (0x0004dcc0) list_medium_line_plain_t3

0x0dd0,	// (0x0004dcc0) list_medium_line_right_icon

0x0dd0,	// (0x0004dcc0) list_medium_line_right_iconx2

0x0dd0,	// (0x0004dcc0) list_medium_line_t2

0x0dd0,	// (0x0004dcc0) list_medium_line_t2_g2

0x0dd0,	// (0x0004dcc0) list_medium_line_t2_g3

0x0dd0,	// (0x0004dcc0) list_medium_line_t2_right_icon

0x0dd0,	// (0x0004dcc0) list_medium_line_t2_right_iconx2

0x0dd0,	// (0x0004dcc0) list_medium_line_t3

0x0dd0,	// (0x0004dcc0) list_medium_line_t3_g2

0x0dd0,	// (0x0004dcc0) list_medium_line_t3_g3

0x0dd0,	// (0x0004dcc0) list_medium_line_t3_right_iconx2

0x0dd9,	// (0x0004dcc9) list_medium_line_t4_g4

0x0de2,	// (0x0004dcd2) list_medium_line_x2

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t2_g2

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t2_g3

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t2_g4

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t3

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t3_g2

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t3_g3

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t3_g4

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t4_g2

0x0de2,	// (0x0004dcd2) list_medium_line_x2_t4_g4

0x0deb,	// (0x0004dcdb) list_medium_line_x3

0x0deb,	// (0x0004dcdb) list_medium_line_x3_t4

0x0deb,	// (0x0004dcdb) list_medium_line_x3_t4_g4

0x0dd9,	// (0x0004dcc9) list_medium_line_x4_t4

0x0dd9,	// (0x0004dcc9) list_medium_line_x4_t4_g7

0x0dd9,	// (0x0004dcc9) list_medium_line_x4_t5

0x0df4,	// (0x0004dce4) list_single_fs_dyc_pane_ParamLimits

0x0df4,	// (0x0004dce4) list_single_fs_dyc_pane

0x0602,	// (0x0004d4f2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x4_t4_g7_g1

0x0e16,	// (0x0004dd06) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0e16,	// (0x0004dd06) list_medium_line_x4_t4_g7_g2

0x0e22,	// (0x0004dd12) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0e22,	// (0x0004dd12) list_medium_line_x4_t4_g7_g3

0x0e31,	// (0x0004dd21) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0e31,	// (0x0004dd21) list_medium_line_x4_t4_g7_g4

0x0e3d,	// (0x0004dd2d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0e3d,	// (0x0004dd2d) list_medium_line_x4_t4_g7_g5

0x0e4c,	// (0x0004dd3c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0e4c,	// (0x0004dd3c) list_medium_line_x4_t4_g7_g6

0x0e5b,	// (0x0004dd4b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0e5b,	// (0x0004dd4b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0005cad3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0005cad3) list_medium_line_x4_t4_g7_g

0x0e67,	// (0x0004dd57) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0e67,	// (0x0004dd57) list_medium_line_x4_t4_g7_t1

0x0e7c,	// (0x0004dd6c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0e7c,	// (0x0004dd6c) list_medium_line_x4_t4_g7_t2

0x0e91,	// (0x0004dd81) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0e91,	// (0x0004dd81) list_medium_line_x4_t4_g7_t3

0x0ea6,	// (0x0004dd96) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0ea6,	// (0x0004dd96) list_medium_line_x4_t4_g7_t4

0x0eb8,	// (0x0004dda8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0eb8,	// (0x0004dda8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0005cae2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0005cae2) list_medium_line_x4_t4_g7_t

0x0eca,	// (0x0004ddba) list_single_dyc_row_pane_ParamLimits

0x0eca,	// (0x0004ddba) list_single_dyc_row_pane

0xcb95,	// (0x00059a85) call5_gesture_pane_ParamLimits

0xcb95,	// (0x00059a85) call5_gesture_pane

0xcbcb,	// (0x00059abb) call5_windows_pane_ParamLimits

0xcbcb,	// (0x00059abb) call5_windows_pane

0xcc43,	// (0x00059b33) call5_swipe_1_pane_cp_ParamLimits

0xcc43,	// (0x00059b33) call5_swipe_1_pane_cp

0xcc4f,	// (0x00059b3f) call5_swipe_2_pane_cp_ParamLimits

0xcc4f,	// (0x00059b3f) call5_swipe_2_pane_cp

0x2b94,	// (0x0004fa84) call5_image_pane_cp

0xcc5b,	// (0x00059b4b) popup_call5_audio_first_window_cp_ParamLimits

0xcc5b,	// (0x00059b4b) popup_call5_audio_first_window_cp

0xef50,	// (0x0005be40) call5_swipe_1_pane_g1_cp_ParamLimits

0xef50,	// (0x0005be40) call5_swipe_1_pane_g1_cp

0xef90,	// (0x0005be80) call5_swipe_1_pane_g2_cp

0xef69,	// (0x0005be59) call5_swipe_1_pane_t1_cp_ParamLimits

0xef69,	// (0x0005be59) call5_swipe_1_pane_t1_cp

0xef50,	// (0x0005be40) call5_swipe_2_pane_g1_cp_ParamLimits

0xef50,	// (0x0005be40) call5_swipe_2_pane_g1_cp

0xef98,	// (0x0005be88) call5_swipe_2_pane_g2_cp

0xefa0,	// (0x0005be90) call5_swipe_2_pane_t1_cp_ParamLimits

0xefa0,	// (0x0005be90) call5_swipe_2_pane_t1_cp

0x02e5,	// (0x0004d1d5) main_sp_fs_email_pane

0xefb5,	// (0x0005bea5) main_sp_fs_listscroll_pane_te

0x0ee7,	// (0x0004ddd7) popup_sp_fs_action_menu_pane_ParamLimits

0x0ee7,	// (0x0004ddd7) popup_sp_fs_action_menu_pane

0x4454,	// (0x00051344) bg_sp_fs_ctrlbar_pane_g1

0xefbe,	// (0x0005beae) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefc7,	// (0x0005beb7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xefd0,	// (0x0005bec0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4454,	// (0x00051344) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x0005cbcb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x422b,	// (0x0005111b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x422b,	// (0x0005111b) bg_sp_fs_ctrlbar_ddmenu_pane

0xefd9,	// (0x0005bec9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xefd9,	// (0x0005bec9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xefe5,	// (0x0005bed5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xefe5,	// (0x0005bed5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x0005cbd4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x0005cbd4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xeff1,	// (0x0005bee1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xeff1,	// (0x0005bee1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0f2d,	// (0x0004de1d) list_medium_line_t2_right_icon_g1

0xcc69,	// (0x00059b59) list_medium_line_t2_right_icon_t1

0xcc79,	// (0x00059b69) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x0005cbd9) list_medium_line_t2_right_icon_t

0x3fd1,	// (0x00050ec1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3fd1,	// (0x00050ec1) bg_sp_fs_ctrlbar_pane

0xccde,	// (0x00059bce) main_sp_fs_ctrlbar_button_pane_cp01

0xcce6,	// (0x00059bd6) main_sp_fs_ctrlbar_ddmenu_pane

0xf045,	// (0x0005bf35) main_sp_fs_ctrlbar_pane_g1

0xf051,	// (0x0005bf41) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x0005cbde) main_sp_fs_ctrlbar_pane_g

0xf05d,	// (0x0005bf4d) main_sp_fs_ctrlbar_pane_t1

0xccf0,	// (0x00059be0) main_sp_fs_ctrlbar_pane

0xcd0c,	// (0x00059bfc) main_sp_fs_listscroll_pane_te_cp01

0xcd1d,	// (0x00059c0d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcd1d,	// (0x00059c0d) popup_sp_fs_action_menu_pane_cp01

0x02e5,	// (0x0004d1d5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x02e5,	// (0x0004d1d5) bg_sp_fs_highlight_list_pane_cp01

0x0f35,	// (0x0004de25) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0f35,	// (0x0004de25) sp_fs_action_menu_list_gene_pane_g1

0xf082,	// (0x0005bf72) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf082,	// (0x0005bf72) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x0005cbe8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x0005cbe8) sp_fs_action_menu_list_gene_pane_g

0x0f44,	// (0x0004de34) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0f44,	// (0x0004de34) sp_fs_action_menu_list_gene_pane_t1

0x0f5c,	// (0x0004de4c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0f5c,	// (0x0004de4c) sp_fs_action_menu_list_gene_pane

0xf08f,	// (0x0005bf7f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf08f,	// (0x0005bf7f) popup_sp_fs_action_menu_bg_pane

0x0f7f,	// (0x0004de6f) sp_fs_action_menu_list_pane_ParamLimits

0x0f7f,	// (0x0004de6f) sp_fs_action_menu_list_pane

0xf09d,	// (0x0005bf8d) sp_fs_scroll_pane_cp01_ParamLimits

0xf09d,	// (0x0005bf8d) sp_fs_scroll_pane_cp01

0xcd37,	// (0x00059c27) list_medium_line_plain_t2_t1

0xcd47,	// (0x00059c37) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x0005cbed) list_medium_line_plain_t2_t

0xcd55,	// (0x00059c45) list_medium_line_plain_t3_t1

0xcd65,	// (0x00059c55) list_medium_line_plain_t3_t2

0xcd73,	// (0x00059c63) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0005cbf2) list_medium_line_plain_t3_t

0x0602,	// (0x0004d4f2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t2_g2_g1

0x061a,	// (0x0004d50a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0005c155) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0005c155) list_medium_line_x2_t2_g2_g

0x074e,	// (0x0004d63e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x074e,	// (0x0004d63e) list_medium_line_x2_t2_g2_t1

0x063b,	// (0x0004d52b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x0005cbf9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x0005cbf9) list_medium_line_x2_t2_g2_t

0x0602,	// (0x0004d4f2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t4_g2_g1

0x0fa3,	// (0x0004de93) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0fa3,	// (0x0004de93) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0005cbfe) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0005cbfe) list_medium_line_x2_t4_g2_g

0xcd81,	// (0x00059c71) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcd81,	// (0x00059c71) list_medium_line_x2_t4_g2_t1

0xcd9b,	// (0x00059c8b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcd9b,	// (0x00059c8b) list_medium_line_x2_t4_g2_t2

0xcdb1,	// (0x00059ca1) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcdb1,	// (0x00059ca1) list_medium_line_x2_t4_g2_t3

0x063b,	// (0x0004d52b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0005cc03) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0005cc03) list_medium_line_x2_t4_g2_t

0x0fb5,	// (0x0004dea5) list_medium_line_t3_right_iconx2_g1

0x0f2d,	// (0x0004de1d) list_medium_line_t3_right_iconx2_g2

0xcdc6,	// (0x00059cb6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0005cc0c) list_medium_line_t3_right_iconx2_g

0xcdd0,	// (0x00059cc0) list_medium_line_t3_right_iconx2_t1

0xcde0,	// (0x00059cd0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0005cc13) list_medium_line_t3_right_iconx2_t

0x0602,	// (0x0004d4f2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x3_t4_g4_g1

0x060e,	// (0x0004d4fe) list_medium_line_x3_t4_g4_g2_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x3_t4_g4_g2

0x06a2,	// (0x0004d592) list_medium_line_x3_t4_g4_g3_ParamLimits

0x06a2,	// (0x0004d592) list_medium_line_x3_t4_g4_g3

0x0fbd,	// (0x0004dead) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0fbd,	// (0x0004dead) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0005cc18) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0005cc18) list_medium_line_x3_t4_g4_g

0xcdee,	// (0x00059cde) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcdee,	// (0x00059cde) list_medium_line_x3_t4_g4_t1

0xce05,	// (0x00059cf5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xce05,	// (0x00059cf5) list_medium_line_x3_t4_g4_t2

0x0fc9,	// (0x0004deb9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0fc9,	// (0x0004deb9) list_medium_line_x3_t4_g4_t3

0x0fde,	// (0x0004dece) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0fde,	// (0x0004dece) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0005cc21) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0005cc21) list_medium_line_x3_t4_g4_t

0xce1a,	// (0x00059d0a) list_single_dyc_row_text_pane_t1_ParamLimits

0xce1a,	// (0x00059d0a) list_single_dyc_row_text_pane_t1

0xce57,	// (0x00059d47) list_single_dyc_row_text_pane_t2_ParamLimits

0xce57,	// (0x00059d47) list_single_dyc_row_text_pane_t2

0x0ffb,	// (0x0004deeb) list_single_dyc_row_text_pane_t3_ParamLimits

0x0ffb,	// (0x0004deeb) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x0005cc2a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0005cc2a) list_single_dyc_row_text_pane_t

0x100d,	// (0x0004defd) list_single_dyc_row_pane_g1_ParamLimits

0x100d,	// (0x0004defd) list_single_dyc_row_pane_g1

0x1019,	// (0x0004df09) list_single_dyc_row_pane_g2_ParamLimits

0x1019,	// (0x0004df09) list_single_dyc_row_pane_g2

0x1025,	// (0x0004df15) list_single_dyc_row_pane_g3_ParamLimits

0x1025,	// (0x0004df15) list_single_dyc_row_pane_g3

0x1031,	// (0x0004df21) list_single_dyc_row_pane_g4_ParamLimits

0x1031,	// (0x0004df21) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0005cc31) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0005cc31) list_single_dyc_row_pane_g

0x103d,	// (0x0004df2d) list_single_dyc_row_text_pane_ParamLimits

0x103d,	// (0x0004df2d) list_single_dyc_row_text_pane

0x026c,	// (0x0004d15c) bg_sp_fs_scroll_pane

0xf0c3,	// (0x0005bfb3) thumb_sp_fs_scroll_pane

0x0cdd,	// (0x0004dbcd) list_medium_line_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_g1

0x105c,	// (0x0004df4c) list_medium_line_t1_ParamLimits

0x105c,	// (0x0004df4c) list_medium_line_t1

0x0602,	// (0x0004d4f2) list_medium_line_x2_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_g1

0x060e,	// (0x0004d4fe) list_medium_line_x2_g2_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x0005cc3a) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x0005cc3a) list_medium_line_x2_g

0x1071,	// (0x0004df61) list_medium_line_x2_t1_ParamLimits

0x1071,	// (0x0004df61) list_medium_line_x2_t1

0x0602,	// (0x0004d4f2) list_medium_line_x3_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x3_g1

0x060e,	// (0x0004d4fe) list_medium_line_x3_g2_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x0005cc3a) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x0005cc3a) list_medium_line_x3_g

0x1071,	// (0x0004df61) list_medium_line_x3_t1_ParamLimits

0x1071,	// (0x0004df61) list_medium_line_x3_t1

0xf0cc,	// (0x0005bfbc) thumb_sp_fs_scroll_pane_g1

0xf0d5,	// (0x0005bfc5) thumb_sp_fs_scroll_pane_g2

0xf0de,	// (0x0005bfce) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0005cc3f) thumb_sp_fs_scroll_pane_g

0xf0cc,	// (0x0005bfbc) bg_sp_fs_scroll_pane_g1

0xf0d5,	// (0x0005bfc5) bg_sp_fs_scroll_pane_g2

0xf0de,	// (0x0005bfce) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0005cc3f) bg_sp_fs_scroll_pane_g

0x0602,	// (0x0004d4f2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0602,	// (0x0004d4f2) list_medium_line_x2_t3_g4_g1

0x0696,	// (0x0004d586) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0696,	// (0x0004d586) list_medium_line_x2_t3_g4_g2

0x060e,	// (0x0004d4fe) list_medium_line_x2_t3_g4_g3_ParamLimits

0x060e,	// (0x0004d4fe) list_medium_line_x2_t3_g4_g3

0x061a,	// (0x0004d50a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x061a,	// (0x0004d50a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0005c1d1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0005c1d1) list_medium_line_x2_t3_g4_g

0xceb1,	// (0x00059da1) list_medium_line_x2_t3_g4_t1_ParamLimits

0xceb1,	// (0x00059da1) list_medium_line_x2_t3_g4_t1

0xcec7,	// (0x00059db7) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcec7,	// (0x00059db7) list_medium_line_x2_t3_g4_t2

0x063b,	// (0x0004d52b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x063b,	// (0x0004d52b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x0005cc46) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x0005cc46) list_medium_line_x2_t3_g4_t

0x0cdd,	// (0x0004dbcd) list_medium_line_g2_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_g2_g1

0x0ce9,	// (0x0004dbd9) list_medium_line_g2_g2_ParamLimits

0x0ce9,	// (0x0004dbd9) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0005c90a) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0005c90a) list_medium_line_g2_g

0x1087,	// (0x0004df77) list_medium_line_g2_t1_ParamLimits

0x1087,	// (0x0004df77) list_medium_line_g2_t1

0x0cdd,	// (0x0004dbcd) list_medium_line_t3_g2_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_t3_g2_g1

0x0ce9,	// (0x0004dbd9) list_medium_line_t3_g2_g2_ParamLimits

0x0ce9,	// (0x0004dbd9) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0005c90a) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0005c90a) list_medium_line_t3_g2_g

0xcee0,	// (0x00059dd0) list_medium_line_t3_g2_t1_ParamLimits

0xcee0,	// (0x00059dd0) list_medium_line_t3_g2_t1

0xcef7,	// (0x00059de7) list_medium_line_t3_g2_t2_ParamLimits

0xcef7,	// (0x00059de7) list_medium_line_t3_g2_t2

0xcf0c,	// (0x00059dfc) list_medium_line_t3_g2_t3_ParamLimits

0xcf0c,	// (0x00059dfc) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x0005cc4d) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x0005cc4d) list_medium_line_t3_g2_t

0x0f2d,	// (0x0004de1d) list_medium_line_right_icon_g1

0x109c,	// (0x0004df8c) list_medium_line_right_icon_t1

0x0cdd,	// (0x0004dbcd) list_medium_line_t2_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_t2_g1

0xcf25,	// (0x00059e15) list_medium_line_t2_t1_ParamLimits

0xcf25,	// (0x00059e15) list_medium_line_t2_t1

0xcf3f,	// (0x00059e2f) list_medium_line_t2_t2_ParamLimits

0xcf3f,	// (0x00059e2f) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x0005cc54) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x0005cc54) list_medium_line_t2_t

0x0cdd,	// (0x0004dbcd) list_medium_line_t3_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_t3_g1

0xcf54,	// (0x00059e44) list_medium_line_t3_t1_ParamLimits

0xcf54,	// (0x00059e44) list_medium_line_t3_t1

0xcf6e,	// (0x00059e5e) list_medium_line_t3_t2_ParamLimits

0xcf6e,	// (0x00059e5e) list_medium_line_t3_t2

0xcf84,	// (0x00059e74) list_medium_line_t3_t3_ParamLimits

0xcf84,	// (0x00059e74) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x0005cc59) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x0005cc59) list_medium_line_t3_t

0x0cdd,	// (0x0004dbcd) list_medium_line_g3_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_g3_g1

0x10aa,	// (0x0004df9a) list_medium_line_g3_g2_ParamLimits

0x10aa,	// (0x0004df9a) list_medium_line_g3_g2

0x0ce9,	// (0x0004dbd9) list_medium_line_g3_g3_ParamLimits

0x0ce9,	// (0x0004dbd9) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x0005cc60) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x0005cc60) list_medium_line_g3_g

0x10b6,	// (0x0004dfa6) list_medium_line_g3_t1_ParamLimits

0x10b6,	// (0x0004dfa6) list_medium_line_g3_t1

0x0cdd,	// (0x0004dbcd) list_medium_line_t2_g3_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_t2_g3_g1

0x10aa,	// (0x0004df9a) list_medium_line_t2_g3_g2_ParamLimits

0x10aa,	// (0x0004df9a) list_medium_line_t2_g3_g2

0x0ce9,	// (0x0004dbd9) list_medium_line_t2_g3_g3_ParamLimits

0x0ce9,	// (0x0004dbd9) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x0005cc60) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x0005cc60) list_medium_line_t2_g3_g

0xcf99,	// (0x00059e89) list_medium_line_t2_g3_t1_ParamLimits

0xcf99,	// (0x00059e89) list_medium_line_t2_g3_t1

0xcfb0,	// (0x00059ea0) list_medium_line_t2_g3_t2_ParamLimits

0xcfb0,	// (0x00059ea0) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x0005cc67) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x0005cc67) list_medium_line_t2_g3_t

0x0cdd,	// (0x0004dbcd) list_medium_line_t3_g3_g1_ParamLimits

0x0cdd,	// (0x0004dbcd) list_medium_line_t3_g3_g1

0x10aa,	// (0x0004df9a) list_medium_line_t3_g3_g2_ParamLimits

0x10aa,	// (0x0004df9a) list_medium_line_t3_g3_g2

0x0ce9,	// (0x0004dbd9) list_medium_line_t3_g3_g3_ParamLimits

0x0ce9,	// (0x0004dbd9) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x0005cc60) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x0005cc60) list_medium_line_t3_g3_g

0xcfc5,	// (0x00059eb5) list_medium_line_t3_g3_t1_ParamLimits

0xcfc5,	// (0x00059eb5) list_medium_line_t3_g3_t1

0xcfd9,	// (0x00059ec9) list_medium_line_t3_g3_t2_ParamLimits

0xcfd9,	// (0x00059ec9) list_medium_line_t3_g3_t2

0xcfeb,	// (0x00059edb) list_medium_line_t3_g3_t3_ParamLimits

0xcfeb,	// (0x00059edb) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x0005cc6c) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x0005cc6c) list_medium_line_t3_g3_t

0x0fb5,	// (0x0004dea5) list_medium_line_right_iconx2_g1

0x0f2d,	// (0x0004de1d) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x0005cc73) list_medium_line_right_iconx2_g

0x10cb,	// (0x0004dfbb) list_medium_line_right_iconx2_t1

0x0fb5,	// (0x0004dea5) list_medium_line_t2_right_iconx2_g1

0x0f2d,	// (0x0004de1d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x0005cc73) list_medium_line_t2_right_iconx2_g

0xcfff,	// (0x00059eef) list_medium_line_t2_right_iconx2_t1

0xd00f,	// (0x00059eff) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x0005cc78) list_medium_line_t2_right_iconx2_t

0x10d9,	// (0x0004dfc9) list_medium_line_x4_t4_t1

0xd01d,	// (0x00059f0d) list_medium_line_x4_t4_t2

0xd02d,	// (0x00059f1d) list_medium_line_x4_t4_t3

0xd03d,	// (0x00059f2d) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x0005cc7d) list_medium_line_x4_t4_t

0xd076,	// (0x00059f66) tport_appsw_pane_ParamLimits

0xd076,	// (0x00059f66) tport_appsw_pane

0xd084,	// (0x00059f74) tport_contact_pane_ParamLimits

0xd084,	// (0x00059f74) tport_contact_pane

0xd092,	// (0x00059f82) tport_listscroll_pane_ParamLimits

0xd092,	// (0x00059f82) tport_listscroll_pane

0xd0a0,	// (0x00059f90) cell_tport_appsw_pane_ParamLimits

0xd0a0,	// (0x00059f90) cell_tport_appsw_pane

0x46e9,	// (0x000515d9) tport_appsw_pane_g1_ParamLimits

0x46e9,	// (0x000515d9) tport_appsw_pane_g1

0x10e7,	// (0x0004dfd7) tport_contact_pane_g1

0x10f0,	// (0x0004dfe0) tport_contact_pane_t1

0x10fe,	// (0x0004dfee) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x0005cc86) tport_contact_pane_t

0x110c,	// (0x0004dffc) list_tport_pane

0x1115,	// (0x0004e005) scroll_pane_cp_030

0xd0cb,	// (0x00059fbb) cell_tport_appsw_pane_g1

0x112e,	// (0x0004e01e) cell_tport_appsw_pane_t1

0x026c,	// (0x0004d15c) grid_highlight_pane_cp019

0xd0db,	// (0x00059fcb) list_tport_double_graphic_pane_ParamLimits

0xd0db,	// (0x00059fcb) list_tport_double_graphic_pane

0x02e5,	// (0x0004d1d5) list_highlight_pane_cp023_ParamLimits

0x02e5,	// (0x0004d1d5) list_highlight_pane_cp023

0xd0ec,	// (0x00059fdc) list_tport_double_graphic_pane_g1_ParamLimits

0xd0ec,	// (0x00059fdc) list_tport_double_graphic_pane_g1

0xd0f9,	// (0x00059fe9) list_tport_double_graphic_pane_t1_ParamLimits

0xd0f9,	// (0x00059fe9) list_tport_double_graphic_pane_t1

0xd10e,	// (0x00059ffe) list_tport_double_graphic_pane_t2_ParamLimits

0xd10e,	// (0x00059ffe) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0005cc92) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0005cc92) list_tport_double_graphic_pane_t

0x026c,	// (0x0004d15c) main_cale_note_pane

0xaf3a,	// (0x00057e2a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf3a,	// (0x00057e2a) cell_vitu2_function_top_wide_pane_cp01

0xc868,	// (0x00059758) wait_bar_pane_cp05_ParamLimits

0x026c,	// (0x0004d15c) listscroll_cmail_pane

0x1144,	// (0x0004e034) list_cmail_pane

0xd12a,	// (0x0005a01a) list_cmail_body_pane

0xd13f,	// (0x0005a02f) list_single_cmail_header_caption_pane

0xd159,	// (0x0005a049) list_single_cmail_header_detail_pane_ParamLimits

0xd159,	// (0x0005a049) list_single_cmail_header_detail_pane

0xd188,	// (0x0005a078) list_single_cmail_header_caption_pane_t1

0xd198,	// (0x0005a088) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd198,	// (0x0005a088) list_single_cmail_header_detail_pane_g1

0x1164,	// (0x0004e054) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1164,	// (0x0004e054) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x0005cc97) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x0005cc97) list_single_cmail_header_detail_pane_g

0x117d,	// (0x0004e06d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x117d,	// (0x0004e06d) list_single_cmail_header_detail_pane_t1

0x11bb,	// (0x0004e0ab) list_single_cmail_header_editor_pane_bg_ParamLimits

0x11bb,	// (0x0004e0ab) list_single_cmail_header_editor_pane_bg

0xebe4,	// (0x0005bad4) list_cmail_body_pane_g1

0x11cd,	// (0x0004e0bd) list_cmail_body_pane_t1

0xdfd6,	// (0x0005aec6) list_single_cmail_header_editor_pane_bg_g1

0x2558,	// (0x0004f448) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdfe6,	// (0x0005aed6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdfde,	// (0x0005aece) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe200,	// (0x0005b0f0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe006,	// (0x0005aef6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdff6,	// (0x0005aee6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdffe,	// (0x0005aeee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2538,	// (0x0004f428) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd1d6,	// (0x0005a0c6) calenote_gesture_pane_ParamLimits

0xd1d6,	// (0x0005a0c6) calenote_gesture_pane

0xd1f0,	// (0x0005a0e0) calenote_window_pane_ParamLimits

0xd1f0,	// (0x0005a0e0) calenote_window_pane

0x11db,	// (0x0004e0cb) popup_note_window_cp01

0xd208,	// (0x0005a0f8) calenote_swipe_1_pane_ParamLimits

0xd208,	// (0x0005a0f8) calenote_swipe_1_pane

0xcc4f,	// (0x00059b3f) calenote_swipe_2_pane_ParamLimits

0xcc4f,	// (0x00059b3f) calenote_swipe_2_pane

0xef50,	// (0x0005be40) calenote_swipe_1_pane_g1_ParamLimits

0xef50,	// (0x0005be40) calenote_swipe_1_pane_g1

0xef5d,	// (0x0005be4d) calenote_swipe_1_pane_g2_ParamLimits

0xef5d,	// (0x0005be4d) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x0005cbc1) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x0005cbc1) calenote_swipe_1_pane_g

0x11ed,	// (0x0004e0dd) calenote_swipe_1_pane_t1_ParamLimits

0x11ed,	// (0x0004e0dd) calenote_swipe_1_pane_t1

0xef50,	// (0x0005be40) calenote_swipe_2_pane_g1_ParamLimits

0xef50,	// (0x0005be40) calenote_swipe_2_pane_g1

0x120c,	// (0x0004e0fc) calenote_swipe_2_pane_g2_ParamLimits

0x120c,	// (0x0004e0fc) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0005cca3) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0005cca3) calenote_swipe_2_pane_g

0x1218,	// (0x0004e108) calenote_swipe_2_pane_t1_ParamLimits

0x1218,	// (0x0004e108) calenote_swipe_2_pane_t1

0x026c,	// (0x0004d15c) main_mup_navstr_pane

0x9c58,	// (0x00056b48) main_mup3_pane_t7_ParamLimits

0x9c58,	// (0x00056b48) main_mup3_pane_t7

0xa64b,	// (0x0005753b) main_mp4_pane_g6_ParamLimits

0xa64b,	// (0x0005753b) main_mp4_pane_g6

0xa9c9,	// (0x000578b9) main_image3_pane_t4_ParamLimits

0xa9c9,	// (0x000578b9) main_image3_pane_t4

0xd21b,	// (0x0005a10b) popup_navstr_preview_pane_ParamLimits

0xd21b,	// (0x0005a10b) popup_navstr_preview_pane

0xd227,	// (0x0005a117) scroll_navstr_pane_ParamLimits

0xd227,	// (0x0005a117) scroll_navstr_pane

0x026c,	// (0x0004d15c) bg_popup_preview_window_pane_cp04

0x123f,	// (0x0004e12f) popup_navstr_preview_pane_t1

0xd233,	// (0x0005a123) scroll_navstr_pane_g1_ParamLimits

0xd233,	// (0x0005a123) scroll_navstr_pane_g1

0xd240,	// (0x0005a130) scroll_navstr_pane_t1_ParamLimits

0xd240,	// (0x0005a130) scroll_navstr_pane_t1

0x11e4,	// (0x0004e0d4) bg_button_pane_cp014

0x11e4,	// (0x0004e0d4) bg_button_pane_cp030

0xcb3b,	// (0x00059a2b) list_double_fisheye_pane_g4_ParamLimits

0xcb3b,	// (0x00059a2b) list_double_fisheye_pane_g4

0xcb47,	// (0x00059a37) list_double_fisheye_pane_g5_ParamLimits

0xcb47,	// (0x00059a37) list_double_fisheye_pane_g5

0x114c,	// (0x0004e03c) sp_fs_scroll_pane_cp03

0xf045,	// (0x0005bf35) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf051,	// (0x0005bf41) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x0005cbde) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf05d,	// (0x0005bf4d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd120,	// (0x0005a010) sp_fs_scroll_pane_cp02

0x2262,	// (0x0004f152) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2262,	// (0x0004f152) popup_sp_fs_calendar_preview_list_single_pane

0x026c,	// (0x0004d15c) main_cam6_pano_pane

0x02e5,	// (0x0004d1d5) main_mup3_pane_ParamLimits

0x026c,	// (0x0004d15c) main_phacti_pane

0xc73b,	// (0x0005962b) bg_button_pane_cp11

0xc753,	// (0x00059643) main_mobtv_info_pane_g2_ParamLimits

0xc753,	// (0x00059643) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x0005cb3e) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x0005cb3e) main_mobtv_info_pane_g

0xc905,	// (0x000597f5) sc_clock_pane_t5_ParamLimits

0xc905,	// (0x000597f5) sc_clock_pane_t5

0xc9ae,	// (0x0005989e) main_radioblah_pane_g1_ParamLimits

0xee9c,	// (0x0005bd8c) main_radioblah_pane_t3_ParamLimits

0xee9c,	// (0x0005bd8c) main_radioblah_pane_t3

0xeeb4,	// (0x0005bda4) main_radioblah_pane_t4_ParamLimits

0xeeb4,	// (0x0005bda4) main_radioblah_pane_t4

0xc9cc,	// (0x000598bc) main_radioblah_text_pane_ParamLimits

0xc9cc,	// (0x000598bc) main_radioblah_text_pane

0xc9d9,	// (0x000598c9) main_radioblah_info_pane_g1_ParamLimits

0xca72,	// (0x00059962) main_radioblah_info_pane_t4_ParamLimits

0xca72,	// (0x00059962) main_radioblah_info_pane_t4

0x02e5,	// (0x0004d1d5) main_sp_fs_calendar_pane

0xd252,	// (0x0005a142) main_phacti_pane_g1

0xd25a,	// (0x0005a14a) phacti_note_pane_ParamLimits

0xd25a,	// (0x0005a14a) phacti_note_pane

0x1256,	// (0x0004e146) phacti_term_pane_ParamLimits

0x1256,	// (0x0004e146) phacti_term_pane

0x126b,	// (0x0004e15b) phacti_note_pane_t1_ParamLimits

0x126b,	// (0x0004e15b) phacti_note_pane_t1

0x1282,	// (0x0004e172) phacti_term_pane_g1

0x128a,	// (0x0004e17a) phacti_term_pane_t1_ParamLimits

0x128a,	// (0x0004e17a) phacti_term_pane_t1

0x12b4,	// (0x0004e1a4) popup_sp_fs_calendar_preview_list_single_pane_g1

0x12bc,	// (0x0004e1ac) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0005ccad) popup_sp_fs_calendar_preview_list_single_pane_g

0x12c4,	// (0x0004e1b4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x12c4,	// (0x0004e1b4) popup_sp_fs_calendar_preview_list_single_pane_t1

0x12da,	// (0x0004e1ca) aid_popup_sp_fs_bg_corner_pane

0x4454,	// (0x00051344) popup_sp_fs_calendar_preview_bg_pane_g1

0x026c,	// (0x0004d15c) popup_sp_fs_calendar_preview_bg_pane

0x12e2,	// (0x0004e1d2) popup_sp_fs_calendar_preview_list_pane

0x02e5,	// (0x0004d1d5) bg_main_sp_fs_cale_pane_ParamLimits

0x02e5,	// (0x0004d1d5) bg_main_sp_fs_cale_pane

0x12ea,	// (0x0004e1da) listscroll_cale_mrui_pane_ParamLimits

0x12ea,	// (0x0004e1da) listscroll_cale_mrui_pane

0x12fe,	// (0x0004e1ee) listscroll_sp_fs_schedule_track_pane

0x1307,	// (0x0004e1f7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1307,	// (0x0004e1f7) main_sp_fs_ctrlbar_pane_cp01

0x1318,	// (0x0004e208) main_sp_fs_ribbon_pane

0x1320,	// (0x0004e210) popup_sp_fs_cale_preview_window

0xd29d,	// (0x0005a18d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd29d,	// (0x0005a18d) list_single_sp_fs_schedule_track_pane

0x0c0f,	// (0x0004daff) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0c0f,	// (0x0004daff) bg_sp_fs_highlight_list_pane_cp03

0xd2b1,	// (0x0005a1a1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd2b1,	// (0x0005a1a1) list_single_sp_fs_schedule_track_pane_g1

0xd2bd,	// (0x0005a1ad) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd2bd,	// (0x0005a1ad) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0005ccb2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0005ccb2) list_single_sp_fs_schedule_track_pane_g

0xd2c9,	// (0x0005a1b9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd2c9,	// (0x0005a1b9) list_single_sp_fs_schedule_track_pane_t1

0xd2e7,	// (0x0005a1d7) sp_fs_schedule_track_pane_ParamLimits

0xd2e7,	// (0x0005a1d7) sp_fs_schedule_track_pane

0x1332,	// (0x0004e222) sp_fs_schedule_track_pane_g1

0x133a,	// (0x0004e22a) sp_fs_schedule_track_pane_g2

0x1342,	// (0x0004e232) sp_fs_schedule_track_pane_g3

0x134a,	// (0x0004e23a) sp_fs_schedule_track_pane_g4

0x1352,	// (0x0004e242) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x0005ccb7) sp_fs_schedule_track_pane_g

0xdfd6,	// (0x0005aec6) bg_sp_fs_schedule_viewer_highlight_g1

0x2558,	// (0x0004f448) bg_sp_fs_schedule_viewer_highlight_g2

0xdfde,	// (0x0005aece) bg_sp_fs_schedule_viewer_highlight_g3

0xdfe6,	// (0x0005aed6) bg_sp_fs_schedule_viewer_highlight_g4

0xe200,	// (0x0005b0f0) bg_sp_fs_schedule_viewer_highlight_g5

0xdff6,	// (0x0005aee6) bg_sp_fs_schedule_viewer_highlight_g6

0xdffe,	// (0x0005aeee) bg_sp_fs_schedule_viewer_highlight_g7

0xe006,	// (0x0005aef6) bg_sp_fs_schedule_viewer_highlight_g8

0x2538,	// (0x0004f428) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0005ccc2) bg_sp_fs_schedule_viewer_highlight_g

0x026c,	// (0x0004d15c) bg_main_sp_fs_ribbon_pane

0xd2f9,	// (0x0005a1e9) main_sp_fs_ribbon_pane_g1

0x135a,	// (0x0004e24a) main_sp_fs_ribbon_pane_t1

0xd302,	// (0x0005a1f2) main_sp_fs_ribbon_pane_t2

0x1369,	// (0x0004e259) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x0005ccd5) main_sp_fs_ribbon_pane_t

0x1378,	// (0x0004e268) main_sp_fs_ribbon_scheduler_pane

0x1380,	// (0x0004e270) bg_main_sp_fs_ribbon_pane_g1

0x1389,	// (0x0004e279) bg_main_sp_fs_ribbon_pane_g2

0x1392,	// (0x0004e282) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x0005ccdc) bg_main_sp_fs_ribbon_pane_g

0x139a,	// (0x0004e28a) main_sp_fs_ribbon_scheduler_pane_g1

0x13a3,	// (0x0004e293) main_sp_fs_ribbon_scheduler_pane_g2

0x13ac,	// (0x0004e29c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0005cce3) main_sp_fs_ribbon_scheduler_pane_g

0x13b5,	// (0x0004e2a5) list_cale_mrui_pane

0xd311,	// (0x0005a201) sp_fs_scroll_pane_cp07_ParamLimits

0xd311,	// (0x0005a201) sp_fs_scroll_pane_cp07

0xd327,	// (0x0005a217) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd327,	// (0x0005a217) bg_sp_fs_schedule_viewer_highlight

0x13be,	// (0x0004e2ae) list_single_sp_fs_schedule_track_pane_cp01

0x13c6,	// (0x0004e2b6) list_sp_fs_schedule_track_pane

0x13ce,	// (0x0004e2be) sp_fs_scroll_pane_cp06_ParamLimits

0x13ce,	// (0x0004e2be) sp_fs_scroll_pane_cp06

0x4454,	// (0x00051344) bgmain_sp_fs_calendar_pane_g1

0x13e0,	// (0x0004e2d0) list_single_cale_mrui_pane_ParamLimits

0x13e0,	// (0x0004e2d0) list_single_cale_mrui_pane

0x1403,	// (0x0004e2f3) list_single_cale_mrui_row_pane_ParamLimits

0x1403,	// (0x0004e2f3) list_single_cale_mrui_row_pane

0x1410,	// (0x0004e300) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1410,	// (0x0004e300) list_single_cale_mrui_row_pane_g1

0x1455,	// (0x0004e345) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1455,	// (0x0004e345) list_single_cale_mrui_row_pane_t1

0xd334,	// (0x0005a224) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd334,	// (0x0005a224) list_single_cale_mrui_row_pane_t2

0x1467,	// (0x0004e357) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1467,	// (0x0004e357) list_single_cale_mrui_row_pane_t3

0x1496,	// (0x0004e386) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1496,	// (0x0004e386) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0005ccf1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0005ccf1) list_single_cale_mrui_row_pane_t

0xd39a,	// (0x0005a28a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd39a,	// (0x0005a28a) list_single_cmail_header_editor_pane_bg_cp01

0xd3be,	// (0x0005a2ae) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd3be,	// (0x0005a2ae) list_single_cmail_header_editor_pane_bg_cp02

0xd3da,	// (0x0005a2ca) main_radioblah_text_pane_t1_ParamLimits

0xd3da,	// (0x0005a2ca) main_radioblah_text_pane_t1

0x14c5,	// (0x0004e3b5) cam6_indi_pane_cp01

0x14cd,	// (0x0004e3bd) cam6_mode_pane_cp01

0x14d5,	// (0x0004e3c5) cam6_pano_pane

0x14de,	// (0x0004e3ce) cam6_zoom_pane_cp01

0x14e8,	// (0x0004e3d8) cam6_pano_image_pane

0x14f1,	// (0x0004e3e1) cam6_pano_pane_g1

0xebe4,	// (0x0005bad4) cam6_pano_pane_g2

0x14fa,	// (0x0004e3ea) cam6_pano_pane_g3

0x1503,	// (0x0004e3f3) cam6_pano_pane_g4

0x49c0,	// (0x000518b0) cam6_pano_pane_g5

0x150c,	// (0x0004e3fc) cam6_pano_pane_g6

0x1514,	// (0x0004e404) cam6_pano_pane_g7

0x151c,	// (0x0004e40c) cam6_pano_pane_g8

0x1525,	// (0x0004e415) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0005ccfa) cam6_pano_pane_g

0x026c,	// (0x0004d15c) main_browser_tag_pane

0x1237,	// (0x0004e127) grid_navstr_albumart_pane

0x1530,	// (0x0004e420) cell_navstr_albumart_pane_ParamLimits

0x1530,	// (0x0004e420) cell_navstr_albumart_pane

0x154c,	// (0x0004e43c) cell_navstr_albumart_pane_g1

0x3dea,	// (0x00050cda) cell_navstr_albumart_pane_g2

0x3dfa,	// (0x00050cea) cell_navstr_albumart_pane_g3

0x3df2,	// (0x00050ce2) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0005cd0d) cell_navstr_albumart_pane_g

0xd3f4,	// (0x0005a2e4) bt_list_pane_ParamLimits

0xd3f4,	// (0x0005a2e4) bt_list_pane

0xd40d,	// (0x0005a2fd) bt_list_pane_t1

0xd41c,	// (0x0005a30c) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0005cd16) bt_list_pane_t

0x026c,	// (0x0004d15c) main_cale_prevew_pane

0xd42b,	// (0x0005a31b) popup_cale_preview_window_ParamLimits

0xd42b,	// (0x0005a31b) popup_cale_preview_window

0x02e5,	// (0x0004d1d5) bg_popup_preview_window_pane_cp05_ParamLimits

0x02e5,	// (0x0004d1d5) bg_popup_preview_window_pane_cp05

0x1554,	// (0x0004e444) list_cale_preview_pane_ParamLimits

0x1554,	// (0x0004e444) list_cale_preview_pane

0xd446,	// (0x0005a336) list_double_cale_preview_pane_ParamLimits

0xd446,	// (0x0005a336) list_double_cale_preview_pane

0xd45a,	// (0x0005a34a) list_single_cale_preview_pane_ParamLimits

0xd45a,	// (0x0005a34a) list_single_cale_preview_pane

0xd472,	// (0x0005a362) list_single_cale_preview_pane_g1

0xd47a,	// (0x0005a36a) list_single_cale_preview_pane_t1_ParamLimits

0xd47a,	// (0x0005a36a) list_single_cale_preview_pane_t1

0xd48f,	// (0x0005a37f) list_double_cale_preview_pane_g1

0xd497,	// (0x0005a387) list_double_cale_preview_pane_t1_ParamLimits

0xd497,	// (0x0005a387) list_double_cale_preview_pane_t1

0xd4ac,	// (0x0005a39c) list_double_cale_preview_pane_t2_ParamLimits

0xd4ac,	// (0x0005a39c) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0005cd1b) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0005cd1b) list_double_cale_preview_pane_t

0x026c,	// (0x0004d15c) main_ezdial_pane

0x02e5,	// (0x0004d1d5) main_sp_fs_email_pane_ParamLimits

0xcc87,	// (0x00059b77) cmail_ddmenu_btn01_pane_ParamLimits

0xcc87,	// (0x00059b77) cmail_ddmenu_btn01_pane

0xcca4,	// (0x00059b94) cmail_ddmenu_btn02_pane_ParamLimits

0xcca4,	// (0x00059b94) cmail_ddmenu_btn02_pane

0xccc2,	// (0x00059bb2) cmail_ddmenu_btn03_pane_ParamLimits

0xccc2,	// (0x00059bb2) cmail_ddmenu_btn03_pane

0xccf0,	// (0x00059be0) main_sp_fs_ctrlbar_pane_ParamLimits

0xcd0c,	// (0x00059bfc) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd12a,	// (0x0005a01a) list_cmail_body_pane_ParamLimits

0x115b,	// (0x0004e04b) bg_button_pane_cp12

0x1170,	// (0x0004e060) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1170,	// (0x0004e060) list_single_cmail_header_detail_pane_g3

0xd1b0,	// (0x0005a0a0) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd1b0,	// (0x0005a0a0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0005cc9e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0005cc9e) list_single_cmail_header_detail_pane_t

0x129f,	// (0x0004e18f) phacti_term_pane_t2_ParamLimits

0x129f,	// (0x0004e18f) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x0005cca8) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x0005cca8) phacti_term_pane_t

0x1560,	// (0x0004e450) aid_size_list_single_double

0xd4c4,	// (0x0005a3b4) popup_ezdial_listscroll_window

0xd4e4,	// (0x0005a3d4) popup_number_entry_window_cp01

0x2b94,	// (0x0004fa84) bg_popup_call_pane_cp09

0x156c,	// (0x0004e45c) ezdial_list_pane

0x1574,	// (0x0004e464) scroll_pane_cp23

0x422b,	// (0x0005111b) bg_button_pane_cp028_ParamLimits

0x422b,	// (0x0005111b) bg_button_pane_cp028

0xd4f2,	// (0x0005a3e2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd4f2,	// (0x0005a3e2) cmail_ddmenu_btn01_pane_g1

0xd502,	// (0x0005a3f2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd502,	// (0x0005a3f2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0005cd20) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0005cd20) cmail_ddmenu_btn01_pane_g

0x157c,	// (0x0004e46c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x157c,	// (0x0004e46c) cmail_ddmenu_btn01_pane_t1

0x3fd1,	// (0x00050ec1) bg_button_pane_cp029_ParamLimits

0x3fd1,	// (0x00050ec1) bg_button_pane_cp029

0xd502,	// (0x0005a3f2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd502,	// (0x0005a3f2) cmail_ddmenu_btn02_pane_g1

0xd51a,	// (0x0005a40a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd51a,	// (0x0005a40a) cmail_ddmenu_btn02_pane_t1

0x0c0f,	// (0x0004daff) bg_button_pane_cp031_ParamLimits

0x0c0f,	// (0x0004daff) bg_button_pane_cp031

0xd502,	// (0x0005a3f2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd502,	// (0x0005a3f2) cmail_ddmenu_btn03_pane_g1

0xd51a,	// (0x0005a40a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd51a,	// (0x0005a40a) cmail_ddmenu_btn03_pane_t1

0xa864,	// (0x00057754) cell_dialer2_keypad_pane_t1_ParamLimits

0xa87e,	// (0x0005776e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa87e,	// (0x0005776e) cell_dialer2_keypad_pane_t1_copy1

0xc5cb,	// (0x000594bb) ncimui_group_button_pane

0x02e5,	// (0x0004d1d5) main_sp_fs_calendar_pane_ParamLimits

0xd13f,	// (0x0005a02f) list_single_cmail_header_caption_pane_ParamLimits

0x0dc7,	// (0x0004dcb7) aid_recal_txt_sm_pane

0x026c,	// (0x0004d15c) mian_recal_day_pane

0x1320,	// (0x0004e210) popup_sp_fs_cale_preview_window_ParamLimits

0x026c,	// (0x0004d15c) list_recal_day_pane

0x15aa,	// (0x0004e49a) list_single_recal_day_pane_ParamLimits

0x15aa,	// (0x0004e49a) list_single_recal_day_pane

0x15bc,	// (0x0004e4ac) list_single_recal_day_pane_g1_ParamLimits

0x15bc,	// (0x0004e4ac) list_single_recal_day_pane_g1

0x15c8,	// (0x0004e4b8) list_single_recal_day_pane_g2_ParamLimits

0x15c8,	// (0x0004e4b8) list_single_recal_day_pane_g2

0x15d8,	// (0x0004e4c8) list_single_recal_day_pane_g3_ParamLimits

0x15d8,	// (0x0004e4c8) list_single_recal_day_pane_g3

0xd53e,	// (0x0005a42e) list_single_recal_day_pane_g4_ParamLimits

0xd53e,	// (0x0005a42e) list_single_recal_day_pane_g4

0x15e4,	// (0x0004e4d4) list_single_recal_day_pane_g5_ParamLimits

0x15e4,	// (0x0004e4d4) list_single_recal_day_pane_g5

0x15f4,	// (0x0004e4e4) list_single_recal_day_pane_g6_ParamLimits

0x15f4,	// (0x0004e4e4) list_single_recal_day_pane_g6

0x0004,

0xfe3f,	// (0x0005cd2f) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0005cd2f) list_single_recal_day_pane_g

0x160b,	// (0x0004e4fb) list_single_recal_day_pane_t1

0x161d,	// (0x0004e50d) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x0005cd3a) list_single_recal_day_pane_t

0xd55e,	// (0x0005a44e) ncimui_query_button_pane_ParamLimits

0xd55e,	// (0x0005a44e) ncimui_query_button_pane

0xd56e,	// (0x0005a45e) ncimui_query_button_pane_t1_ParamLimits

0xd56e,	// (0x0005a45e) ncimui_query_button_pane_t1

0x1632,	// (0x0004e522) ncimui_query_button_pane_t2_ParamLimits

0x1632,	// (0x0004e522) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0005cd3f) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0005cd3f) ncimui_query_button_pane_t

0xd581,	// (0x0005a471) query_button_pane_ParamLimits

0xd581,	// (0x0005a471) query_button_pane

0x026c,	// (0x0004d15c) bg_button_pane_cp0028

0x1645,	// (0x0004e535) query_button_pane_t1

0x8c59,	// (0x00055b49) main_tport_pane_ParamLimits

0xd04d,	// (0x00059f3d) bg_popup_window_pane_cp01_ParamLimits

0xd04d,	// (0x00059f3d) bg_popup_window_pane_cp01

0xd05a,	// (0x00059f4a) heading_pane_cp08_ParamLimits

0xd05a,	// (0x00059f4a) heading_pane_cp08

0xd068,	// (0x00059f58) heading_pane_cp07_ParamLimits

0xd068,	// (0x00059f58) heading_pane_cp07

0x1126,	// (0x0004e016) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x0005cc8b) cell_tport_appsw_pane_g

0x8370,	// (0x00055260) input_candi_list_open_g1

0x26f3,	// (0x0004f5e3) list_cale_time_pane_g6_ParamLimits

0x26f3,	// (0x0004f5e3) list_cale_time_pane_g6

0x96a5,	// (0x00056595) aid_size_touch_calib_1_ParamLimits

0x96a5,	// (0x00056595) aid_size_touch_calib_1

0x96b1,	// (0x000565a1) aid_size_touch_calib_2_ParamLimits

0x96b1,	// (0x000565a1) aid_size_touch_calib_2

0x96bf,	// (0x000565af) aid_size_touch_calib_3_ParamLimits

0x96bf,	// (0x000565af) aid_size_touch_calib_3

0x96cf,	// (0x000565bf) aid_size_touch_calib_4_ParamLimits

0x96cf,	// (0x000565bf) aid_size_touch_calib_4

0x96dd,	// (0x000565cd) main_touch_calib_button_group_pane_ParamLimits

0x96dd,	// (0x000565cd) main_touch_calib_button_group_pane

0x96eb,	// (0x000565db) main_touch_calib_pane_g1_ParamLimits

0x96f7,	// (0x000565e7) main_touch_calib_pane_g2_ParamLimits

0x9703,	// (0x000565f3) main_touch_calib_pane_g3_ParamLimits

0x970f,	// (0x000565ff) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0005c660) main_touch_calib_pane_g_ParamLimits

0x971b,	// (0x0005660b) main_touch_calib_pane_t1_ParamLimits

0x9732,	// (0x00056622) main_touch_calib_pane_t2_ParamLimits

0x9749,	// (0x00056639) main_touch_calib_pane_t3_ParamLimits

0x975d,	// (0x0005664d) main_touch_calib_pane_t4_ParamLimits

0x9773,	// (0x00056663) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0005c669) main_touch_calib_pane_t_ParamLimits

0x478a,	// (0x0005167a) list_single_fp_cale_pane_g3_ParamLimits

0x478a,	// (0x0005167a) list_single_fp_cale_pane_g3

0xad09,	// (0x00057bf9) bg_button_pane_cp012_ParamLimits

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp03_ParamLimits

0xb6e0,	// (0x000585d0) cell_vitu2_function_top_pane_g1_ParamLimits

0xad09,	// (0x00057bf9) bg_vkb2_func_pane_cp04_ParamLimits

0xc567,	// (0x00059457) main_ncimui_button_group_pane_ParamLimits

0xc567,	// (0x00059457) main_ncimui_button_group_pane

0xc5b9,	// (0x000594a9) main_ncimui_pane_t3_ParamLimits

0xc5b9,	// (0x000594a9) main_ncimui_pane_t3

0x124d,	// (0x0004e13d) phacti_button_group_pane

0x1560,	// (0x0004e450) aid_size_list_single_double_ParamLimits

0xd4c4,	// (0x0005a3b4) popup_ezdial_listscroll_window_ParamLimits

0xd4e4,	// (0x0005a3d4) popup_number_entry_window_cp01_ParamLimits

0xd58e,	// (0x0005a47e) phacti_button_pane_ParamLimits

0xd58e,	// (0x0005a47e) phacti_button_pane

0x026c,	// (0x0004d15c) bg_button_pane_cp14

0x1653,	// (0x0004e543) phacti_button_pane_t1

0xd59f,	// (0x0005a48f) main_touch_calib_button_pane_ParamLimits

0xd59f,	// (0x0005a48f) main_touch_calib_button_pane

0x214c,	// (0x0004f03c) bg_button_pane_cp18_ParamLimits

0x214c,	// (0x0004f03c) bg_button_pane_cp18

0x1661,	// (0x0004e551) main_touch_calib_button_pane_t1_ParamLimits

0x1661,	// (0x0004e551) main_touch_calib_button_pane_t1

0x1677,	// (0x0004e567) main_touch_calib_button_pane_t2_ParamLimits

0x1677,	// (0x0004e567) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0005cd44) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0005cd44) main_touch_calib_button_pane_t

0x026c,	// (0x0004d15c) cell_ncimui_button_pane

0x026c,	// (0x0004d15c) bg_button_pane_cp032

0x1695,	// (0x0004e585) cell_ncimui_button_pane_t1

0xa8da,	// (0x000577ca) image3_infobar_pane_ParamLimits

0xa8da,	// (0x000577ca) image3_infobar_pane

0xc927,	// (0x00059817) fs_bigclock_status_pane_ParamLimits

0xc927,	// (0x00059817) fs_bigclock_status_pane

0xc934,	// (0x00059824) main_fs_bigclock_clock_pane_ParamLimits

0xc934,	// (0x00059824) main_fs_bigclock_clock_pane

0xc94a,	// (0x0005983a) main_fs_bigclock_indi_pane_ParamLimits

0xc94a,	// (0x0005983a) main_fs_bigclock_indi_pane

0xc97c,	// (0x0005986c) main_fs_bigclock_swipe_pane_ParamLimits

0xc97c,	// (0x0005986c) main_fs_bigclock_swipe_pane

0x026c,	// (0x0004d15c) main_fs_clock_dumped_data

0xed05,	// (0x0005bbf5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed05,	// (0x0005bbf5) list_single_fs_bigclock_indicator_pane_g1

0xed2f,	// (0x0005bc1f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed2f,	// (0x0005bc1f) list_single_fs_bigclock_indicator_pane_g2

0xed49,	// (0x0005bc39) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xed49,	// (0x0005bc39) list_single_fs_bigclock_indicator_pane_g3

0xed63,	// (0x0005bc53) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xed63,	// (0x0005bc53) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x0005cb72) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x0005cb72) list_single_fs_bigclock_indicator_pane_g

0xed8e,	// (0x0005bc7e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xed8e,	// (0x0005bc7e) list_single_fs_bigclock_indicator_pane_t1

0xedb6,	// (0x0005bca6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xedb6,	// (0x0005bca6) list_single_fs_bigclock_indicator_pane_t2

0xedde,	// (0x0005bcce) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xedde,	// (0x0005bcce) list_single_fs_bigclock_indicator_pane_t3

0xee06,	// (0x0005bcf6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee06,	// (0x0005bcf6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x0005cb7d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x0005cb7d) list_single_fs_bigclock_indicator_pane_t

0x16a3,	// (0x0004e593) image3_infobar_fav_pane_ParamLimits

0x16a3,	// (0x0004e593) image3_infobar_fav_pane

0x16b3,	// (0x0004e5a3) image3_infobar_loc_pane_ParamLimits

0x16b3,	// (0x0004e5a3) image3_infobar_loc_pane

0x16c9,	// (0x0004e5b9) image3_infobar_time_pane_ParamLimits

0x16c9,	// (0x0004e5b9) image3_infobar_time_pane

0x4454,	// (0x00051344) image3_infobar_time_pane_g1

0x16d9,	// (0x0004e5c9) image3_infobar_time_pane_t1

0x4454,	// (0x00051344) image3_infobar_loc_pane_g1

0x16e7,	// (0x0004e5d7) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x0005cd49) image3_infobar_loc_pane_g

0x16ef,	// (0x0004e5df) image3_infobar_loc_pane_t1

0x4454,	// (0x00051344) image3_infobar_fav_pane_g1

0x16fd,	// (0x0004e5ed) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x0005cd4e) image3_infobar_fav_pane_g

0x1705,	// (0x0004e5f5) fs_bigclock_status_battery_pane

0x170e,	// (0x0004e5fe) fs_bigclock_status_signal_pane

0x1717,	// (0x0004e607) fs_bigclock_status_title_pane

0x1720,	// (0x0004e610) fs_bigclock_status_signal_pane_g1

0x1729,	// (0x0004e619) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0005cd53) fs_bigclock_status_signal_pane_g

0x1731,	// (0x0004e621) fs_bigclock_status_battery_pane_g1

0x173a,	// (0x0004e62a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x0005cd58) fs_bigclock_status_battery_pane_g

0x1742,	// (0x0004e632) fs_bigclock_status_title_pane_t1

0x4454,	// (0x00051344) main_fs_bigclock_clock_pane_g1

0x1750,	// (0x0004e640) main_fs_bigclock_clock_pane_g2

0x1750,	// (0x0004e640) main_fs_bigclock_clock_pane_g3

0x1750,	// (0x0004e640) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x0005cd5d) main_fs_bigclock_clock_pane_g

0x1758,	// (0x0004e648) main_fs_bigclock_clock_pane_t1

0x1766,	// (0x0004e656) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0005cd66) main_fs_bigclock_clock_pane_t

0xd5b1,	// (0x0005a4a1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd5b1,	// (0x0005a4a1) list_single_fs_bigclock_indicator_pane

0xd5c2,	// (0x0005a4b2) list_single_fs_bigclock_pane_ParamLimits

0xd5c2,	// (0x0005a4b2) list_single_fs_bigclock_pane

0x177e,	// (0x0004e66e) main_fs_bigclock_indicator_pane_t1

0x178d,	// (0x0004e67d) list_single_fs_bigclock_pane_g1

0x1795,	// (0x0004e685) list_single_fs_bigclock_pane_t1

0x4454,	// (0x00051344) main_fs_bigclock_swipe_pane_g1

0x17d8,	// (0x0004e6c8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0005cd77) main_fs_bigclock_swipe_pane_g

0x17e0,	// (0x0004e6d0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x17e0,	// (0x0004e6d0) main_fs_bigclock_swipe_pane_t1

0x7aaf,	// (0x0005499f) call_type_pane_ParamLimits

0x026c,	// (0x0004d15c) main_btmg_pane

0x143c,	// (0x0004e32c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x143c,	// (0x0004e32c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfa,	// (0x0005ccea) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x0005ccea) list_single_cale_mrui_row_pane_g

0x159a,	// (0x0004e48a) list_recal_vselct_arw_lo_pane

0x15a2,	// (0x0004e492) list_recal_vselct_arw_up_pane

0x0dbe,	// (0x0004dcae) list_recal_vselct_pane

0x17fd,	// (0x0004e6ed) btmg_button_pane

0xd618,	// (0x0005a508) main_btmg_pane_g1

0x026c,	// (0x0004d15c) bg_button_pane_cp044

0x1807,	// (0x0004e6f7) btmg_button_pane_t1

0x3fc9,	// (0x00050eb9) aid_listscroll_gen

0x02e5,	// (0x0004d1d5) main_cntbar_detail_pane

0x113c,	// (0x0004e02c) list_cmail_folder_pane

0x114c,	// (0x0004e03c) sp_fs_scroll_pane_cp03_ParamLimits

0x3835,	// (0x00050725) list_single_fs_dyc_pane_cp01_ParamLimits

0x3835,	// (0x00050725) list_single_fs_dyc_pane_cp01

0x1815,	// (0x0004e705) aid_size_cmail_indent

0x181e,	// (0x0004e70e) list_single_dyc_row_pane_cp01

0xd640,	// (0x0005a530) cntbar_detail_list_pane_ParamLimits

0xd640,	// (0x0005a530) cntbar_detail_list_pane

0xd680,	// (0x0005a570) main_cntbar_detail_cont_pane_ParamLimits

0xd680,	// (0x0005a570) main_cntbar_detail_cont_pane

0x7a49,	// (0x00054939) scroll_pane_cp032_ParamLimits

0x7a49,	// (0x00054939) scroll_pane_cp032

0xd68c,	// (0x0005a57c) cntbar_detail_list_event_pane_ParamLimits

0xd68c,	// (0x0005a57c) cntbar_detail_list_event_pane

0xd64e,	// (0x0005a53e) cntbar_detail_list_shct_pane

0x25a6,	// (0x0004f496) aid_list_gen

0x1827,	// (0x0004e717) aid_scroll

0x1830,	// (0x0004e720) aid_size_touch_scroll_bar

0xd69c,	// (0x0005a58c) aid_list_double

0x1839,	// (0x0004e729) aid_list_single

0xd6a5,	// (0x0005a595) aid_list_single_lg

0x1842,	// (0x0004e732) aid_list_z_g_a_sm

0x184a,	// (0x0004e73a) aid_list_z_g_d

0x1852,	// (0x0004e742) aid_txt_z_prm

0xd6ae,	// (0x0005a59e) aid_txt_z_prm_cp01

0xd6bc,	// (0x0005a5ac) aid_txt_z_sec

0xd6ca,	// (0x0005a5ba) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd6ca,	// (0x0005a5ba) main_cntbar_detail_cont_pane_g1

0xd6d7,	// (0x0005a5c7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd6d7,	// (0x0005a5c7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x0005cd7c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x0005cd7c) main_cntbar_detail_cont_pane_g

0x1860,	// (0x0004e750) main_cntbar_detail_cont_pane_t1

0x186e,	// (0x0004e75e) main_cntbar_detail_cont_pane_t2

0x187c,	// (0x0004e76c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x0005cd81) main_cntbar_detail_cont_pane_t

0xd6e3,	// (0x0005a5d3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd6e3,	// (0x0005a5d3) cell_cntbar_detail_list_shct_pane

0x188a,	// (0x0004e77a) cntbar_detail_list_shct_pane_g1

0x1893,	// (0x0004e783) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x0005cd88) cntbar_detail_list_shct_pane_g

0xd6f7,	// (0x0005a5e7) cntbar_detail_list_event_pane_g1_ParamLimits

0xd6f7,	// (0x0005a5e7) cntbar_detail_list_event_pane_g1

0xd703,	// (0x0005a5f3) cntbar_detail_list_event_pane_g2_ParamLimits

0xd703,	// (0x0005a5f3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x0005cd8d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x0005cd8d) cntbar_detail_list_event_pane_g

0xd771,	// (0x0005a661) cntbar_detail_list_event_pane_t1_ParamLimits

0xd771,	// (0x0005a661) cntbar_detail_list_event_pane_t1

0xd786,	// (0x0005a676) cntbar_detail_list_event_pane_t2_ParamLimits

0xd786,	// (0x0005a676) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x0005cd9a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x0005cd9a) cntbar_detail_list_event_pane_t

0x4454,	// (0x00051344) cell_cntbar_detail_list_shct_pane_g1

0x7e82,	// (0x00054d72) navi_pane_mv_g3

0x02e5,	// (0x0004d1d5) main_cntbar_detail_pane_ParamLimits

0x026c,	// (0x0004d15c) main_notif_wgt_pane

0xa584,	// (0x00057474) aid_tch_main_mp4_pane_g4

0xa7c3,	// (0x000576b3) popup_slider_window_cp02

0x1591,	// (0x0004e481) list_recal_day_event_pane

0xd620,	// (0x0005a510) cntbar_detail_btn_pane_ParamLimits

0xd620,	// (0x0005a510) cntbar_detail_btn_pane

0xd630,	// (0x0005a520) cntbar_detail_btn_pane_cp01_ParamLimits

0xd630,	// (0x0005a520) cntbar_detail_btn_pane_cp01

0xd64e,	// (0x0005a53e) cntbar_detail_list_shct_pane_ParamLimits

0xd65a,	// (0x0005a54a) cntbar_detail_pane_g1_ParamLimits

0xd65a,	// (0x0005a54a) cntbar_detail_pane_g1

0xd66a,	// (0x0005a55a) cntbar_detail_pane_t1_ParamLimits

0xd66a,	// (0x0005a55a) cntbar_detail_pane_t1

0xd70f,	// (0x0005a5ff) cntbar_detail_list_event_pane_g3_ParamLimits

0xd70f,	// (0x0005a5ff) cntbar_detail_list_event_pane_g3

0xd727,	// (0x0005a617) cntbar_detail_list_event_pane_g4_ParamLimits

0xd727,	// (0x0005a617) cntbar_detail_list_event_pane_g4

0xd73f,	// (0x0005a62f) cntbar_detail_list_event_pane_g5_ParamLimits

0xd73f,	// (0x0005a62f) cntbar_detail_list_event_pane_g5

0xd757,	// (0x0005a647) cntbar_detail_list_event_pane_g6_ParamLimits

0xd757,	// (0x0005a647) cntbar_detail_list_event_pane_g6

0xd79b,	// (0x0005a68b) cntbar_detail_list_event_pane_t3_ParamLimits

0xd79b,	// (0x0005a68b) cntbar_detail_list_event_pane_t3

0xd7ad,	// (0x0005a69d) popup_notif_wgt_window_ParamLimits

0xd7ad,	// (0x0005a69d) popup_notif_wgt_window

0xd7bd,	// (0x0005a6ad) popup_submenu_window_cp01_ParamLimits

0xd7bd,	// (0x0005a6ad) popup_submenu_window_cp01

0x2b94,	// (0x0004fa84) bg_popup_window_pane_cp10

0x189c,	// (0x0004e78c) listscroll_notif_wgt_pane

0x18a6,	// (0x0004e796) list_notif_wgt_window

0x18af,	// (0x0004e79f) scroll_pane_cp033

0x18b8,	// (0x0004e7a8) list_notif_wgt_row_pane_ParamLimits

0x18b8,	// (0x0004e7a8) list_notif_wgt_row_pane

0x18cc,	// (0x0004e7bc) aid_size_list_notif_wgt_del

0x18d5,	// (0x0004e7c5) list_notif_wgt_row_pane_g1

0x18dd,	// (0x0004e7cd) list_notif_wgt_row_pane_g2

0x18e5,	// (0x0004e7d5) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0005cda1) list_notif_wgt_row_pane_g

0x18ee,	// (0x0004e7de) list_notif_wgt_row_pane_t1

0x18fc,	// (0x0004e7ec) list_notif_wgt_row_pane_t2

0x190a,	// (0x0004e7fa) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x0005cda8) list_notif_wgt_row_pane_t

0xe21a,	// (0x0005b10a) list_recal_day_event_pane_g1

0x1918,	// (0x0004e808) list_recal_day_event_pane_t1

0x026c,	// (0x0004d15c) bg_button_pane_cp045

0x1927,	// (0x0004e817) cntbar_detail_btn_pane_t1

0x3fd1,	// (0x00050ec1) main_callh_pane_ParamLimits

0x3fd1,	// (0x00050ec1) main_callh_pane

0x026c,	// (0x0004d15c) main_coverflow0_pane

0x026c,	// (0x0004d15c) main_wgtman_pane

0xc994,	// (0x00059884) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc994,	// (0x00059884) main_fs_bigclock_unlock_btn_pane

0x111e,	// (0x0004e00e) bg_button_pane_cp16

0xd0d3,	// (0x00059fc3) cell_tport_appsw_pane_g3

0xd7cd,	// (0x0005a6bd) cf0_flow_pane_ParamLimits

0xd7cd,	// (0x0005a6bd) cf0_flow_pane

0x1935,	// (0x0004e825) listscroll_cf0_pane

0x193e,	// (0x0004e82e) main_cf0_pane_g1

0xd7dc,	// (0x0005a6cc) main_cf0_pane_t1_ParamLimits

0xd7dc,	// (0x0005a6cc) main_cf0_pane_t1

0xd7f0,	// (0x0005a6e0) main_cf0_pane_t2_ParamLimits

0xd7f0,	// (0x0005a6e0) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0005cdaf) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0005cdaf) main_cf0_pane_t

0x1948,	// (0x0004e838) scroll_pane_cp11

0xd804,	// (0x0005a6f4) cf0_flow_pane_g1

0xd80c,	// (0x0005a6fc) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0005cdb4) cf0_flow_pane_g

0xd814,	// (0x0005a704) cf0_flow_pane_t1

0x026c,	// (0x0004d15c) main_call6_pane

0x026c,	// (0x0004d15c) main_calllock_pane

0xd822,	// (0x0005a712) call6_btn_grp_pane_ParamLimits

0xd822,	// (0x0005a712) call6_btn_grp_pane

0xd82f,	// (0x0005a71f) call6_pane_g1_ParamLimits

0xd82f,	// (0x0005a71f) call6_pane_g1

0xd83f,	// (0x0005a72f) popup_call6_1st_window_ParamLimits

0xd83f,	// (0x0005a72f) popup_call6_1st_window

0xd84d,	// (0x0005a73d) popup_call6_2nd_window_ParamLimits

0xd84d,	// (0x0005a73d) popup_call6_2nd_window

0xd85b,	// (0x0005a74b) cell_call6_btn_pane_ParamLimits

0xd85b,	// (0x0005a74b) cell_call6_btn_pane

0x2b94,	// (0x0004fa84) bg_popup_call2_in_pane_cp03

0x1953,	// (0x0004e843) popup_call6_1st_window_g1

0x195b,	// (0x0004e84b) popup_call6_1st_window_g2

0x1963,	// (0x0004e853) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x0005cdb9) popup_call6_1st_window_g

0x196b,	// (0x0004e85b) popup_call6_1st_window_t1

0x197a,	// (0x0004e86a) popup_call6_1st_window_t2

0x198a,	// (0x0004e87a) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0005cdc0) popup_call6_1st_window_t

0x2b94,	// (0x0004fa84) bg_popup_call2_in_pane_cp04

0x1953,	// (0x0004e843) popup_call6_2nd_window_g1

0x195b,	// (0x0004e84b) popup_call6_2nd_window_g2

0x1963,	// (0x0004e853) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x0005cdb9) popup_call6_2nd_window_g

0x196b,	// (0x0004e85b) popup_call6_2nd_window_t1

0x026c,	// (0x0004d15c) bg_button_pane_cp15

0x199a,	// (0x0004e88a) cell_call6_btn_pane_g1

0x19a3,	// (0x0004e893) cell_call6_btn_pane_t1

0xd86a,	// (0x0005a75a) listscroll_wgtman_pane_ParamLimits

0xd86a,	// (0x0005a75a) listscroll_wgtman_pane

0xd888,	// (0x0005a778) wgtman_btn_pane_ParamLimits

0xd888,	// (0x0005a778) wgtman_btn_pane

0x2a5a,	// (0x0004f94a) aid_scroll_copy1

0x19b2,	// (0x0004e8a2) list_wgtman_pane

0xd8bd,	// (0x0005a7ad) wgtman_btn_pane_g1_ParamLimits

0xd8bd,	// (0x0005a7ad) wgtman_btn_pane_g1

0xd8e5,	// (0x0005a7d5) wgtman_btn_pane_t1_ParamLimits

0xd8e5,	// (0x0005a7d5) wgtman_btn_pane_t1

0x19bc,	// (0x0004e8ac) wgtman_btn_pane_t2_ParamLimits

0x19bc,	// (0x0004e8ac) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x0005cdc7) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x0005cdc7) wgtman_btn_pane_t

0xd91c,	// (0x0005a80c) listrow_wgtman_pane_ParamLimits

0xd91c,	// (0x0005a80c) listrow_wgtman_pane

0xd92d,	// (0x0005a81d) listrow_wgtman_pane_g1

0xd936,	// (0x0005a826) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x0005cdcc) listrow_wgtman_pane_g

0xd940,	// (0x0005a830) listrow_wgtman_pane_t1

0xd94e,	// (0x0005a83e) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0005cdd1) listrow_wgtman_pane_t

0xd95c,	// (0x0005a84c) wait_bar_pane_cp09

0x19d3,	// (0x0004e8c3) main_calllock_btn_pane

0x19dd,	// (0x0004e8cd) main_calllock_pane_g1

0x026c,	// (0x0004d15c) bg_button_pane_cp17

0x19e9,	// (0x0004e8d9) main_calllock_btn_pane_g1

0x19f2,	// (0x0004e8e2) main_calllock_btn_pane_t1

0x026c,	// (0x0004d15c) main_dialer3_pane

0x026c,	// (0x0004d15c) main_fmrd2_pane

0x4454,	// (0x00051344) main_fs_bigclock_unlock_btn_pane_g1

0x1a09,	// (0x0004e8f9) main_fs_bigclock_unlock_btn_pane_t1

0xd964,	// (0x0005a854) area_fmrd2_info_pane_ParamLimits

0xd964,	// (0x0005a854) area_fmrd2_info_pane

0xd970,	// (0x0005a860) area_fmrd2_visual_pane_ParamLimits

0xd970,	// (0x0005a860) area_fmrd2_visual_pane

0xd97e,	// (0x0005a86e) fmrd2_indi_pane_ParamLimits

0xd97e,	// (0x0005a86e) fmrd2_indi_pane

0xd98b,	// (0x0005a87b) area_fmrd2_visual_pane_g1

0xd993,	// (0x0005a883) area_fmrd2_visual_pane_t1

0xd9a3,	// (0x0005a893) area_fmrd2_visual_pane_t2

0xd9b3,	// (0x0005a8a3) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x0005cddb) area_fmrd2_visual_pane_t

0xd9c3,	// (0x0005a8b3) area_fmrd2_info_pane_g1

0xd9cb,	// (0x0005a8bb) area_fmrd2_info_pane_t1

0xd9db,	// (0x0005a8cb) area_fmrd2_info_pane_t2

0xd9eb,	// (0x0005a8db) area_fmrd2_info_pane_t3

0xd9fb,	// (0x0005a8eb) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0005cde2) area_fmrd2_info_pane_t

0xda0b,	// (0x0005a8fb) fmrd2_indi_pane_t1

0xda1b,	// (0x0005a90b) fmrd2_indi_pane_t2

0xda2b,	// (0x0005a91b) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x0005cdeb) fmrd2_indi_pane_t

0xed72,	// (0x0005bc62) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xed72,	// (0x0005bc62) list_single_fs_bigclock_indicator_pane_g5

0xee1b,	// (0x0005bd0b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee1b,	// (0x0005bd0b) list_single_fs_bigclock_indicator_pane_t5

0xd270,	// (0x0005a160) aid_cell_bcale_month_pane_ParamLimits

0xd270,	// (0x0005a160) aid_cell_bcale_month_pane

0xd27c,	// (0x0005a16c) bcale_month_pane_ParamLimits

0xd27c,	// (0x0005a16c) bcale_month_pane

0xd28c,	// (0x0005a17c) bcale_preview_pane_ParamLimits

0xd28c,	// (0x0005a17c) bcale_preview_pane

0x1795,	// (0x0004e685) list_single_fs_bigclock_pane_t1_ParamLimits

0x17b4,	// (0x0004e6a4) list_single_fs_bigclock_pane_t2_ParamLimits

0x17b4,	// (0x0004e6a4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0005cd72) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005cd72) list_single_fs_bigclock_pane_t

0x1a01,	// (0x0004e8f1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x0005cdd6) main_fs_bigclock_unlock_btn_pane_g

0xda3b,	// (0x0005a92b) aid_dia3_key_size_ParamLimits

0xda3b,	// (0x0005a92b) aid_dia3_key_size

0xda47,	// (0x0005a937) aid_dia3_listrow_size_ParamLimits

0xda47,	// (0x0005a937) aid_dia3_listrow_size

0xda55,	// (0x0005a945) dia3_keypad_fun_pane_ParamLimits

0xda55,	// (0x0005a945) dia3_keypad_fun_pane

0xda65,	// (0x0005a955) dia3_keypad_num_pane_ParamLimits

0xda65,	// (0x0005a955) dia3_keypad_num_pane

0xda75,	// (0x0005a965) dia3_listscroll_pane_ParamLimits

0xda75,	// (0x0005a965) dia3_listscroll_pane

0xda85,	// (0x0005a975) dia3_numentry_pane_ParamLimits

0xda85,	// (0x0005a975) dia3_numentry_pane

0x1a17,	// (0x0004e907) dia3_list_pane

0x1a22,	// (0x0004e912) scroll_pane_cp12

0x026c,	// (0x0004d15c) bg_dia3_numentry_pane

0x1a2d,	// (0x0004e91d) dia3_numentry_pane_t1

0xda95,	// (0x0005a985) cell_dia3_key_num_pane

0xda9d,	// (0x0005a98d) cell_dia3_key0_fun_pane_ParamLimits

0xda9d,	// (0x0005a98d) cell_dia3_key0_fun_pane

0xdaaa,	// (0x0005a99a) cell_dia3_key1_fun_pane_ParamLimits

0xdaaa,	// (0x0005a99a) cell_dia3_key1_fun_pane

0xdab7,	// (0x0005a9a7) dia3_listrow_pane

0xea5c,	// (0x0005b94c) bg_dia3_numentry_pane_g1

0x026c,	// (0x0004d15c) bg_button_pane_cp21

0x1a3c,	// (0x0004e92c) cell_dia3_key_num_pane_t1

0x1a4a,	// (0x0004e93a) cell_dia3_key_num_pane_t2

0x1a59,	// (0x0004e949) cell_dia3_key_num_pane_t3

0x1a68,	// (0x0004e958) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0005cdf2) cell_dia3_key_num_pane_t

0x026c,	// (0x0004d15c) bg_button_pane_cp19

0xdac4,	// (0x0005a9b4) cell_dia3_key0_fun_pane_g1

0x026c,	// (0x0004d15c) bg_button_pane_cp20

0xdacc,	// (0x0005a9bc) cell_dia3_key1_fun_pane_g1

0xdad4,	// (0x0005a9c4) area_left_week_number_pane

0xdadd,	// (0x0005a9cd) area_top_day_name_pane

0xdae6,	// (0x0005a9d6) frame_month_view_pane

0xdaf0,	// (0x0005a9e0) grid_month_view_pane

0xdafa,	// (0x0005a9ea) cell_top_day_name_pane_ParamLimits

0xdafa,	// (0x0005a9ea) cell_top_day_name_pane

0xdb16,	// (0x0005aa06) cell_area_left_week_number_pane_ParamLimits

0xdb16,	// (0x0005aa06) cell_area_left_week_number_pane

0xdb2a,	// (0x0005aa1a) cell_month_view_pane_ParamLimits

0xdb2a,	// (0x0005aa1a) cell_month_view_pane

0x1a77,	// (0x0004e967) frm_month_g1

0xdb49,	// (0x0005aa39) frm_month_g2

0xdb53,	// (0x0005aa43) frm_month_g3

0xdb5d,	// (0x0005aa4d) frm_month_g4

0xdb67,	// (0x0005aa57) frm_month_g5

0xdb71,	// (0x0005aa61) frm_month_g6

0xdb7b,	// (0x0005aa6b) frm_month_g7

0x1a80,	// (0x0004e970) frm_month_g8

0xdb85,	// (0x0005aa75) frm_month_g9

0xdb8e,	// (0x0005aa7e) frm_month_g10

0xdb97,	// (0x0005aa87) frm_month_g11

0xdba0,	// (0x0005aa90) frm_month_g12

0xdba9,	// (0x0005aa99) frm_month_g13

0xdbb4,	// (0x0005aaa4) frm_month_g14

0xdbbf,	// (0x0005aaaf) frm_month_g15

0xdbca,	// (0x0005aaba) frm_month_g16

0x000f,

0xff0b,	// (0x0005cdfb) frm_month_g

0xdbd5,	// (0x0005aac5) cell_top_day_name_pane_t1

0xdbe4,	// (0x0005aad4) cell_area_left_week_number_pane_g1

0xdbd5,	// (0x0005aac5) cell_area_left_week_number_pane_t1

0x4454,	// (0x00051344) cell_month_view_pane_g1

0xdbec,	// (0x0005aadc) cell_month_view_pane_t1

0x026c,	// (0x0004d15c) main_fps_pane

0xf00b,	// (0x0005befb) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf00b,	// (0x0005befb) cmail_ddmenu_btn02_pane_cp1

0xf027,	// (0x0005bf17) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf027,	// (0x0005bf17) cmail_ddmenu_btn02_pane_cp2

0xd50e,	// (0x0005a3fe) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd50e,	// (0x0005a3fe) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0005cd25) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0005cd25) cmail_ddmenu_btn02_pane_g

0xd52c,	// (0x0005a41c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd52c,	// (0x0005a41c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0005cd2a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0005cd2a) cmail_ddmenu_btn02_pane_t

0xdbfb,	// (0x0005aaeb) fps_text_pane_ParamLimits

0xdbfb,	// (0x0005aaeb) fps_text_pane

0xdc08,	// (0x0005aaf8) main_fps_pane_g1_ParamLimits

0xdc08,	// (0x0005aaf8) main_fps_pane_g1

0xdc14,	// (0x0005ab04) wait_bar_pane_cp010_ParamLimits

0xdc14,	// (0x0005ab04) wait_bar_pane_cp010

0xdc20,	// (0x0005ab10) fps_text_pane_t1_ParamLimits

0xdc20,	// (0x0005ab10) fps_text_pane_t1

0xabf7,	// (0x00057ae7) cam4_image_uncrop_pane_g1

0xac00,	// (0x00057af0) cam4_image_uncrop_pane_g2

0xac09,	// (0x00057af9) cam4_image_uncrop_pane_g3

0xac12,	// (0x00057b02) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0005c7f8) cam4_image_uncrop_pane_g

0xdab7,	// (0x0005a9a7) dia3_listrow_pane_ParamLimits

0x026c,	// (0x0004d15c) main_phob2_pane

0xd0ad,	// (0x00059f9d) cell_tport_appsw_pane_cp02_ParamLimits

0xd0ad,	// (0x00059f9d) cell_tport_appsw_pane_cp02

0xd0bc,	// (0x00059fac) cell_tport_appsw_pane_cp03_ParamLimits

0xd0bc,	// (0x00059fac) cell_tport_appsw_pane_cp03

0x026c,	// (0x0004d15c) phob2_contact_card_pane

0x026c,	// (0x0004d15c) phob2_listscroll_pane

0x1a89,	// (0x0004e979) phob2_list_pane

0x1a91,	// (0x0004e981) scroll_pane_cp034

0xdc39,	// (0x0005ab29) phob2_cc_data_pane_ParamLimits

0xdc39,	// (0x0005ab29) phob2_cc_data_pane

0xdc55,	// (0x0005ab45) phob2_cc_listscroll_pane_ParamLimits

0xdc55,	// (0x0005ab45) phob2_cc_listscroll_pane

0xdc71,	// (0x0005ab61) list_double_large_graphic_phob2_pane_ParamLimits

0xdc71,	// (0x0005ab61) list_double_large_graphic_phob2_pane

0xdc89,	// (0x0005ab79) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdc89,	// (0x0005ab79) list_double_large_graphic_phob2_pane_g1

0xdc96,	// (0x0005ab86) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdc96,	// (0x0005ab86) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x0005ce1c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x0005ce1c) list_double_large_graphic_phob2_pane_g

0xdca2,	// (0x0005ab92) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdca2,	// (0x0005ab92) list_double_large_graphic_phob2_pane_t1

0xdcb7,	// (0x0005aba7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdcb7,	// (0x0005aba7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0005ce21) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0005ce21) list_double_large_graphic_phob2_pane_t

0x026c,	// (0x0004d15c) list_highlight_pane_cp024

0x1a99,	// (0x0004e989) phob2_cc_button_pane

0xdcc9,	// (0x0005abb9) phob2_cc_data_pane_g1_ParamLimits

0xdcc9,	// (0x0005abb9) phob2_cc_data_pane_g1

0xdcd5,	// (0x0005abc5) phob2_cc_data_pane_g2_ParamLimits

0xdcd5,	// (0x0005abc5) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x0005ce26) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x0005ce26) phob2_cc_data_pane_g

0xdce1,	// (0x0005abd1) phob2_cc_data_pane_t1_ParamLimits

0xdce1,	// (0x0005abd1) phob2_cc_data_pane_t1

0xdcf3,	// (0x0005abe3) phob2_cc_data_pane_t2_ParamLimits

0xdcf3,	// (0x0005abe3) phob2_cc_data_pane_t2

0xdd05,	// (0x0005abf5) phob2_cc_data_pane_t3_ParamLimits

0xdd05,	// (0x0005abf5) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x0005ce2b) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x0005ce2b) phob2_cc_data_pane_t

0x1aa1,	// (0x0004e991) phob2_cc_list_pane_ParamLimits

0x1aa1,	// (0x0004e991) phob2_cc_list_pane

0xe977,	// (0x0005b867) scroll_pane_cp035_ParamLimits

0xe977,	// (0x0005b867) scroll_pane_cp035

0x02e5,	// (0x0004d1d5) bg_button_pane_cp033

0x1aad,	// (0x0004e99d) phob2_cc_button_pane_g1

0x1ab9,	// (0x0004e9a9) phob2_cc_button_pane_t1

0x1ace,	// (0x0004e9be) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0005ce32) phob2_cc_button_pane_t

0xdd17,	// (0x0005ac07) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdd17,	// (0x0005ac07) list_double_large_graphic_phob2_cc_pane

0xdd33,	// (0x0005ac23) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdd33,	// (0x0005ac23) list_double_large_graphic_phob2_cc_pane_g1

0xdd44,	// (0x0005ac34) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdd44,	// (0x0005ac34) list_double_large_graphic_phob2_cc_pane_g2

0xdd53,	// (0x0005ac43) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdd53,	// (0x0005ac43) list_double_large_graphic_phob2_cc_pane_g3

0xdd62,	// (0x0005ac52) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdd62,	// (0x0005ac52) list_double_large_graphic_phob2_cc_pane_g4

0xdd73,	// (0x0005ac63) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdd73,	// (0x0005ac63) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0005ce37) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0005ce37) list_double_large_graphic_phob2_cc_pane_g

0xdd82,	// (0x0005ac72) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdd82,	// (0x0005ac72) list_double_large_graphic_phob2_cc_pane_t1

0xddab,	// (0x0005ac9b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xddab,	// (0x0005ac9b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0005ce42) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0005ce42) list_double_large_graphic_phob2_cc_pane_t

0x1ae0,	// (0x0004e9d0) list_highlight_pane_cp025_ParamLimits

0x1ae0,	// (0x0004e9d0) list_highlight_pane_cp025

0x02e5,	// (0x0004d1d5) bg_button_pane_cp033_ParamLimits

0x1aad,	// (0x0004e99d) phob2_cc_button_pane_g1_ParamLimits

0x1ab9,	// (0x0004e9a9) phob2_cc_button_pane_t1_ParamLimits

0x1ace,	// (0x0004e9be) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0005ce32) phob2_cc_button_pane_t_ParamLimits

0x5d65,	// (0x00052c55) popup_wgtman_window

0xe0f4,	// (0x0005afe4) scroll_pane_cp038

0xd8a5,	// (0x0005a795) wgtman_btn_pane_cp_01_ParamLimits

0xd8a5,	// (0x0005a795) wgtman_btn_pane_cp_01

0x1aee,	// (0x0004e9de) wgtman_content_pane

0x1af7,	// (0x0004e9e7) wgtman_heading_pane

0x026c,	// (0x0004d15c) bg_heading_pane_cp02

0x1b00,	// (0x0004e9f0) wgtman_heading_pane_g1

0x1b08,	// (0x0004e9f8) wgtman_heading_pane_t1

0x1b16,	// (0x0004ea06) scroll_pane_cp036

0x1b1e,	// (0x0004ea0e) wgtman_list_pane

0x1b26,	// (0x0004ea16) wgtman_list_pane_t1_ParamLimits

0x1b26,	// (0x0004ea16) wgtman_list_pane_t1

0xab54,	// (0x00057a44) cam4_grid_pane

0xb8a3,	// (0x00058793) bg_button_pane_cp015_ParamLimits

0xb8b5,	// (0x000587a5) bg_button_pane_cp016_ParamLimits

0xb8c8,	// (0x000587b8) bg_button_pane_cp017_ParamLimits

0xb91e,	// (0x0005880e) popup_vitu2_query_window_g3_ParamLimits

0xb91e,	// (0x0005880e) popup_vitu2_query_window_g3

0xb9dd,	// (0x000588cd) popup_vitu2_query_window_t6_ParamLimits

0xb9dd,	// (0x000588cd) popup_vitu2_query_window_t6

0xba08,	// (0x000588f8) popup_vitu2_query_window_t7_ParamLimits

0xba08,	// (0x000588f8) popup_vitu2_query_window_t7

0xecf1,	// (0x0005bbe1) cam4_grid_pane_g1

0xecfa,	// (0x0005bbea) cam4_grid_pane_g2

0x1b49,	// (0x0004ea39) cam4_grid_pane_g3

0x1b52,	// (0x0004ea42) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0005ce47) cam4_grid_pane_g

0x6af3,	// (0x000539e3) aid_placing_vt_slider_lsc_ParamLimits

0x6e26,	// (0x00053d16) vidtel_button_pane_ParamLimits

0x6e26,	// (0x00053d16) vidtel_button_pane

0x1b5d,	// (0x0004ea4d) bg_button_pane_cp034

0xddd4,	// (0x0005acc4) vidtel_button_pane_g1

0x1b67,	// (0x0004ea57) vidtel_button_pane_t1

0xe1f8,	// (0x0005b0e8) aid_size_vtel_slider_touch

0xe977,	// (0x0005b867) scroll_pane_cp039

0xea9a,	// (0x0005b98a) ncim_query_button_pane_cp01_ParamLimits

0xeab9,	// (0x0005b9a9) ncimui_query_pane_g1_ParamLimits

0x02e5,	// (0x0004d1d5) input_focus_pane_cp012_ParamLimits

0xeade,	// (0x0005b9ce) ncim_query_entry_pane_t1_ParamLimits

0xe977,	// (0x0005b867) scroll_pane_cp039_ParamLimits

0x7df4,	// (0x00054ce4) navi_pane_bcale_mc_g1

0x7dfc,	// (0x00054cec) navi_pane_bcale_mc_t1

0xf072,	// (0x0005bf62) main_sp_fs_email_pane_g1

0xf07a,	// (0x0005bf6a) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x0005cbe3) main_sp_fs_email_pane_g

0x1448,	// (0x0004e338) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1448,	// (0x0004e338) list_single_cale_mrui_row_pane_g3

0xd554,	// (0x0005a444) list_single_recal_day_pane_g5_event_pane

0x1603,	// (0x0004e4f3) list_single_recal_day_pane_g7

0x1b75,	// (0x0004ea65) list_recal_day_event_pane_cp01

0x1b7e,	// (0x0004ea6e) list_recal_vselct_arw_lo_pane_cp01

0x1b86,	// (0x0004ea76) list_recal_vselct_arw_up_pane_cp01

0x1b8e,	// (0x0004ea7e) list_recal_vselct_pane_cp01

0xe21a,	// (0x0005b10a) list_recal_day_event_pane_cp01_g1

0x1b98,	// (0x0004ea88) list_recal_day_event_pane_cp01_t1

0x160b,	// (0x0004e4fb) list_single_recal_day_pane_t1_ParamLimits

0x161d,	// (0x0004e50d) list_single_recal_day_pane_t2_ParamLimits

0xfe4a,	// (0x0005cd3a) list_single_recal_day_pane_t_ParamLimits

0x211c,	// (0x0004f00c) bg_notes_pane_ParamLimits

0x212a,	// (0x0004f01a) list_notes_pane_ParamLimits

0x6075,	// (0x00052f65) scroll_pane_cp06_ParamLimits

0x214c,	// (0x0004f03c) main_notes_pane_ParamLimits

0x026c,	// (0x0004d15c) main_welc_pane

0xdddc,	// (0x0005accc) main_welc_body_pane_ParamLimits

0xdddc,	// (0x0005accc) main_welc_body_pane

0xddeb,	// (0x0005acdb) main_welc_opti_pane_ParamLimits

0xddeb,	// (0x0005acdb) main_welc_opti_pane

0xddfa,	// (0x0005acea) main_welc_pane_t1_ParamLimits

0xddfa,	// (0x0005acea) main_welc_pane_t1

0xd29d,	// (0x0005a18d) main_welc_body_row_pane_ParamLimits

0xd29d,	// (0x0005a18d) main_welc_body_row_pane

0xde0e,	// (0x0005acfe) main_welc_opti_row_pane_ParamLimits

0xde0e,	// (0x0005acfe) main_welc_opti_row_pane

0x1bbd,	// (0x0004eaad) main_welc_opti_row_pane_g1

0x1bc5,	// (0x0004eab5) main_welc_opti_row_pane_t1

0x1bd4,	// (0x0004eac4) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
