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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004c7d0 };

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
0x5bcd,	// (0x0005239d) Screen

0x5bd9,	// (0x000523a9) application_window

0x5c19,	// (0x000523e9) area_bottom_pane_ParamLimits

0x5c19,	// (0x000523e9) area_bottom_pane

0x5c4e,	// (0x0005241e) area_top_pane_ParamLimits

0x5c4e,	// (0x0005241e) area_top_pane

0x043b,	// (0x0004cc0b) call_video_uplink_pane_ParamLimits

0x043b,	// (0x0004cc0b) call_video_uplink_pane

0x5cdb,	// (0x000524ab) main_pane_ParamLimits

0x5cdb,	// (0x000524ab) main_pane

0x41c6,	// (0x00050996) context_pane

0x8eb2,	// (0x00055682) navi_pane

0x8ed6,	// (0x000556a6) popup_cale_events_window_ParamLimits

0x8ed6,	// (0x000556a6) popup_cale_events_window

0x41d9,	// (0x000509a9) popup_mup_playback_window

0x8eee,	// (0x000556be) signal_pane

0x22f2,	// (0x0004eac2) main_browser_pane

0x2d46,	// (0x0004f516) main_burst_pane

0x8d64,	// (0x00055534) main_calc_pane

0x2d46,	// (0x0004f516) main_cale_day_pane

0x22f2,	// (0x0004eac2) main_cale_month_pane

0x2d46,	// (0x0004f516) main_cale_week_pane

0x2d46,	// (0x0004f516) main_call_pane

0x1fcc,	// (0x0004e79c) main_call_poc_pane

0x2d46,	// (0x0004f516) main_camera_pane

0x2d46,	// (0x0004f516) main_chi_dic_pane

0x2be8,	// (0x0004f3b8) main_clock_pane

0x1fcc,	// (0x0004e79c) main_fmradio_pane

0x2d46,	// (0x0004f516) main_graph_messa_pane

0x1fcc,	// (0x0004e79c) main_help_pane

0x22f2,	// (0x0004eac2) main_im_pane

0x2227,	// (0x0004e9f7) main_image_pane_ParamLimits

0x2227,	// (0x0004e9f7) main_image_pane

0x1fcc,	// (0x0004e79c) main_location2_pane

0x2d46,	// (0x0004f516) main_location_pane

0x1fcc,	// (0x0004e79c) main_messa_pane

0x1fcc,	// (0x0004e79c) main_mp2_pane

0x2d46,	// (0x0004f516) main_mp_pane

0x1fcc,	// (0x0004e79c) main_msg_pane

0x1fcc,	// (0x0004e79c) main_mup_eq_pane

0x1fcc,	// (0x0004e79c) main_mup_pane

0x2d46,	// (0x0004f516) main_notes_pane

0x1fcc,	// (0x0004e79c) main_pec_pane

0x1fcc,	// (0x0004e79c) main_phob_pane

0x1fcc,	// (0x0004e79c) main_pinb_pane

0x1fcc,	// (0x0004e79c) main_postcard_pane

0x1fcc,	// (0x0004e79c) main_qdial_pane

0x2d46,	// (0x0004f516) main_skin_pane

0x1fcc,	// (0x0004e79c) main_smil2_pane

0x2d46,	// (0x0004f516) main_smil_pane

0x2d46,	// (0x0004f516) main_video_pane

0x2d46,	// (0x0004f516) main_video_tele_pane

0x2227,	// (0x0004e9f7) main_viewer_pane_ParamLimits

0x2227,	// (0x0004e9f7) main_viewer_pane

0x2d46,	// (0x0004f516) main_vorec_pane

0x8d9c,	// (0x0005556c) popup_blid_sat_info_window_ParamLimits

0x8d9c,	// (0x0005556c) popup_blid_sat_info_window

0x8db6,	// (0x00055586) popup_dyc_status_message_window_ParamLimits

0x8db6,	// (0x00055586) popup_dyc_status_message_window

0x8dc6,	// (0x00055596) popup_grid_large_graphic_window_ParamLimits

0x8dc6,	// (0x00055596) popup_grid_large_graphic_window

0x8e3e,	// (0x0005560e) popup_loc_request_window_ParamLimits

0x8e3e,	// (0x0005560e) popup_loc_request_window

0x8e86,	// (0x00055656) popup_wml_address_window_ParamLimits

0x8e86,	// (0x00055656) popup_wml_address_window

0x8c3c,	// (0x0005540c) call_muted_g1

0x88f8,	// (0x000550c8) popup_call_audio_conf_window_ParamLimits

0x88f8,	// (0x000550c8) popup_call_audio_conf_window

0x8c4c,	// (0x0005541c) popup_call_audio_first_window_ParamLimits

0x8c4c,	// (0x0005541c) popup_call_audio_first_window

0x8c8c,	// (0x0005545c) popup_call_audio_in_window_ParamLimits

0x8c8c,	// (0x0005545c) popup_call_audio_in_window

0x8cb0,	// (0x00055480) popup_call_audio_out_window_ParamLimits

0x8cb0,	// (0x00055480) popup_call_audio_out_window

0x8cd2,	// (0x000554a2) popup_call_audio_second_window_ParamLimits

0x8cd2,	// (0x000554a2) popup_call_audio_second_window

0x8d02,	// (0x000554d2) popup_call_audio_wait_window_ParamLimits

0x8d02,	// (0x000554d2) popup_call_audio_wait_window

0x8d23,	// (0x000554f3) popup_number_entry_window_ParamLimits

0x8d23,	// (0x000554f3) popup_number_entry_window

0x0467,	// (0x0004cc37) bg_popup_call_pane_cp05_ParamLimits

0x0467,	// (0x0004cc37) bg_popup_call_pane_cp05

0x0487,	// (0x0004cc57) popup_number_entry_window_t1

0x049a,	// (0x0004cc6a) popup_number_entry_window_t2

0x04ac,	// (0x0004cc7c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0005b8bc) popup_number_entry_window_t

0x04be,	// (0x0004cc8e) text_title_cp2

0x04d1,	// (0x0004cca1) bg_popup_call_pane_cp_ParamLimits

0x04d1,	// (0x0004cca1) bg_popup_call_pane_cp

0x04df,	// (0x0004ccaf) call_thumbnail_pane

0x04e7,	// (0x0004ccb7) popup_call_audio_in_window_g1_ParamLimits

0x04e7,	// (0x0004ccb7) popup_call_audio_in_window_g1

0x04f3,	// (0x0004ccc3) popup_call_audio_in_window_g2_ParamLimits

0x04f3,	// (0x0004ccc3) popup_call_audio_in_window_g2

0x04ff,	// (0x0004cccf) popup_call_audio_in_window_g3_ParamLimits

0x04ff,	// (0x0004cccf) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005b8c5) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005b8c5) popup_call_audio_in_window_g

0x050b,	// (0x0004ccdb) popup_call_audio_in_window_t1_ParamLimits

0x050b,	// (0x0004ccdb) popup_call_audio_in_window_t1

0x0527,	// (0x0004ccf7) popup_call_audio_in_window_t2_ParamLimits

0x0527,	// (0x0004ccf7) popup_call_audio_in_window_t2

0x1c95,	// (0x0004e465) popup_call_audio_in_window_t3_ParamLimits

0x1c95,	// (0x0004e465) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0005b8cc) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0005b8cc) popup_call_audio_in_window_t

0x04d1,	// (0x0004cca1) bg_popup_call_pane_cp01_ParamLimits

0x04d1,	// (0x0004cca1) bg_popup_call_pane_cp01

0x04df,	// (0x0004ccaf) call_thumbnail_pane_cp02

0x1ca8,	// (0x0004e478) call_type_pane_cp022

0x1cb0,	// (0x0004e480) popup_call_audio_out_window_g1_ParamLimits

0x1cb0,	// (0x0004e480) popup_call_audio_out_window_g1

0x1cc2,	// (0x0004e492) popup_call_audio_out_window_g2_ParamLimits

0x1cc2,	// (0x0004e492) popup_call_audio_out_window_g2

0x1cce,	// (0x0004e49e) popup_call_audio_out_window_g3_ParamLimits

0x1cce,	// (0x0004e49e) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0005b8d3) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0005b8d3) popup_call_audio_out_window_g

0x1ce0,	// (0x0004e4b0) popup_call_audio_out_window_t1_ParamLimits

0x1ce0,	// (0x0004e4b0) popup_call_audio_out_window_t1

0x1cf8,	// (0x0004e4c8) popup_call_audio_out_window_t2_ParamLimits

0x1cf8,	// (0x0004e4c8) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005b8da) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005b8da) popup_call_audio_out_window_t

0x1d0d,	// (0x0004e4dd) bg_popup_call_pane_ParamLimits

0x1d0d,	// (0x0004e4dd) bg_popup_call_pane

0x5ec3,	// (0x00052693) call_thumbnail_pane_cp_ParamLimits

0x5ec3,	// (0x00052693) call_thumbnail_pane_cp

0x1d91,	// (0x0004e561) call_type_pane_cp01_ParamLimits

0x1d91,	// (0x0004e561) call_type_pane_cp01

0x1dd5,	// (0x0004e5a5) popup_call_audio_first_window_g1_ParamLimits

0x1dd5,	// (0x0004e5a5) popup_call_audio_first_window_g1

0x1e21,	// (0x0004e5f1) popup_call_audio_first_window_g2_ParamLimits

0x1e21,	// (0x0004e5f1) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0005b8df) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0005b8df) popup_call_audio_first_window_g

0x1e65,	// (0x0004e635) popup_call_audio_first_window_t1_ParamLimits

0x1e65,	// (0x0004e635) popup_call_audio_first_window_t1

0x1f11,	// (0x0004e6e1) popup_call_audio_first_window_t4_ParamLimits

0x1f11,	// (0x0004e6e1) popup_call_audio_first_window_t4

0x1f9d,	// (0x0004e76d) popup_call_audio_first_window_t5_ParamLimits

0x1f9d,	// (0x0004e76d) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0005b8e4) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0005b8e4) popup_call_audio_first_window_t

0x1fcc,	// (0x0004e79c) bg_popup_call_pane_cp02

0x1fd6,	// (0x0004e7a6) call_type_pane_cp023

0x1fde,	// (0x0004e7ae) popup_call_audio_wait_window_g1

0x1fe6,	// (0x0004e7b6) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005b8eb) popup_call_audio_wait_window_g

0x1fee,	// (0x0004e7be) popup_call_audio_wait_window_t3

0x1ffc,	// (0x0004e7cc) bg_popup_call_pane_cp03_ParamLimits

0x1ffc,	// (0x0004e7cc) bg_popup_call_pane_cp03

0x205c,	// (0x0004e82c) call_thumbnail_pane_cp011_ParamLimits

0x205c,	// (0x0004e82c) call_thumbnail_pane_cp011

0x2068,	// (0x0004e838) call_type_pane_cp034_ParamLimits

0x2068,	// (0x0004e838) call_type_pane_cp034

0x20a4,	// (0x0004e874) popup_call_audio_second_window_g1_ParamLimits

0x20a4,	// (0x0004e874) popup_call_audio_second_window_g1

0x20e0,	// (0x0004e8b0) popup_call_audio_second_window_g2_ParamLimits

0x20e0,	// (0x0004e8b0) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0005b8f0) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0005b8f0) popup_call_audio_second_window_g

0x211c,	// (0x0004e8ec) popup_call_audio_second_window_t1_ParamLimits

0x211c,	// (0x0004e8ec) popup_call_audio_second_window_t1

0x219d,	// (0x0004e96d) popup_call_audio_second_window_t2_ParamLimits

0x219d,	// (0x0004e96d) popup_call_audio_second_window_t2

0x21d3,	// (0x0004e9a3) popup_call_audio_second_window_t3_ParamLimits

0x21d3,	// (0x0004e9a3) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0005b8f5) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0005b8f5) popup_call_audio_second_window_t

0x1fcc,	// (0x0004e79c) bg_popup_call_pane_cp04

0x2209,	// (0x0004e9d9) list_conf_pane

0x2211,	// (0x0004e9e1) popup_call_audio_conf_window_t1

0x221f,	// (0x0004e9ef) call_thumbnail_pane_g1

0x2227,	// (0x0004e9f7) bg_pinb_pane_ParamLimits

0x2227,	// (0x0004e9f7) bg_pinb_pane

0x2235,	// (0x0004ea05) find_pinb_pane

0x223e,	// (0x0004ea0e) listscroll_pinb_pane_ParamLimits

0x223e,	// (0x0004ea0e) listscroll_pinb_pane

0x224d,	// (0x0004ea1d) pinb_bg_pane_g1

0x5ee7,	// (0x000526b7) pinb_bg_pane_g2

0x5ef3,	// (0x000526c3) pinb_bg_pane_g3

0x5eff,	// (0x000526cf) pinb_bg_pane_g4

0x5f0b,	// (0x000526db) pinb_bg_pane_g5

0x5f17,	// (0x000526e7) pinb_bg_pane_g6

0x5f22,	// (0x000526f2) pinb_bg_pane_g7

0x5f2d,	// (0x000526fd) pinb_bg_pane_g8

0x5f38,	// (0x00052708) pinb_bg_pane_g9

0x5f42,	// (0x00052712) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0005b8fc) pinb_bg_pane_g

0x5f5f,	// (0x0005272f) grid_pinb_pane

0x5f6a,	// (0x0005273a) list_pinb_pane

0x5f75,	// (0x00052745) scroll_pane_cp01_ParamLimits

0x5f75,	// (0x00052745) scroll_pane_cp01

0x2257,	// (0x0004ea27) find_pinb_pane_g1_ParamLimits

0x2257,	// (0x0004ea27) find_pinb_pane_g1

0x226f,	// (0x0004ea3f) find_pinb_pane_t1

0x2281,	// (0x0004ea51) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0005b916) find_pinb_pane_t

0x2296,	// (0x0004ea66) input_focus_pane_cp01_ParamLimits

0x2296,	// (0x0004ea66) input_focus_pane_cp01

0x5f87,	// (0x00052757) cell_pinb_pane_ParamLimits

0x5f87,	// (0x00052757) cell_pinb_pane

0x5fa7,	// (0x00052777) cell_pinb_pane_g1_ParamLimits

0x5fa7,	// (0x00052777) cell_pinb_pane_g1

0x5fbc,	// (0x0005278c) cell_pinb_pane_g2_ParamLimits

0x5fbc,	// (0x0005278c) cell_pinb_pane_g2

0x22a2,	// (0x0004ea72) cell_pinb_pane_g3_ParamLimits

0x22a2,	// (0x0004ea72) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0005b91b) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0005b91b) cell_pinb_pane_g

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp01

0x5fc8,	// (0x00052798) list_pinb_item_pane_ParamLimits

0x5fc8,	// (0x00052798) list_pinb_item_pane

0x1fcc,	// (0x0004e79c) list_highlight_pane_cp02

0x5fe3,	// (0x000527b3) list_pinb_item_pane_g1_ParamLimits

0x5fe3,	// (0x000527b3) list_pinb_item_pane_g1

0x5ff0,	// (0x000527c0) list_pinb_item_pane_g2_ParamLimits

0x5ff0,	// (0x000527c0) list_pinb_item_pane_g2

0x5ffc,	// (0x000527cc) list_pinb_item_pane_g3_ParamLimits

0x5ffc,	// (0x000527cc) list_pinb_item_pane_g3

0x600d,	// (0x000527dd) list_pinb_item_pane_g4_ParamLimits

0x600d,	// (0x000527dd) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0005b922) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0005b922) list_pinb_item_pane_g

0x6019,	// (0x000527e9) list_pinb_item_pane_t1_ParamLimits

0x6019,	// (0x000527e9) list_pinb_item_pane_t1

0x604a,	// (0x0005281a) calc_display_pane

0x6068,	// (0x00052838) calc_paper_pane

0x6084,	// (0x00052854) grid_calc_pane

0x1fcc,	// (0x0004e79c) bg_list_pane_cp01

0x60b0,	// (0x00052880) clock_g1

0x60b8,	// (0x00052888) clock_g2

0x0001,

0xf15b,	// (0x0005b92b) clock_g

0x60c2,	// (0x00052892) clock_t1_ParamLimits

0x60c2,	// (0x00052892) clock_t1

0x60d7,	// (0x000528a7) clock_t2_ParamLimits

0x60d7,	// (0x000528a7) clock_t2

0x60e9,	// (0x000528b9) clock_t3_ParamLimits

0x60e9,	// (0x000528b9) clock_t3

0x60fb,	// (0x000528cb) clock_t4_ParamLimits

0x60fb,	// (0x000528cb) clock_t4

0x610d,	// (0x000528dd) clock_t5_ParamLimits

0x610d,	// (0x000528dd) clock_t5

0x6122,	// (0x000528f2) clock_t6_ParamLimits

0x6122,	// (0x000528f2) clock_t6

0x6134,	// (0x00052904) clock_t7_ParamLimits

0x6134,	// (0x00052904) clock_t7

0x6146,	// (0x00052916) clock_t8_ParamLimits

0x6146,	// (0x00052916) clock_t8

0x615c,	// (0x0005292c) clock_t9_ParamLimits

0x615c,	// (0x0005292c) clock_t9

0x0008,

0xf160,	// (0x0005b930) clock_t_ParamLimits

0xf160,	// (0x0005b930) clock_t

0x22ae,	// (0x0004ea7e) popup_clock_analogue_window_cp02

0x22ae,	// (0x0004ea7e) popup_clock_digital_window_cp01

0x22b6,	// (0x0004ea86) listscroll_help_pane

0x1fcc,	// (0x0004e79c) phob_pre_status_pane

0x22c0,	// (0x0004ea90) grid_qdial_pane

0x1fcc,	// (0x0004e79c) listscroll_mce_pane

0x22ca,	// (0x0004ea9a) bg_notes_pane

0x22d4,	// (0x0004eaa4) list_notes_pane

0x6172,	// (0x00052942) scroll_pane_cp06

0x22de,	// (0x0004eaae) bg_calc_paper_pane

0x6187,	// (0x00052957) list_calc_pane

0x22f2,	// (0x0004eac2) bg_calc_display_pane

0x61a1,	// (0x00052971) calc_display_pane_t1

0x61b6,	// (0x00052986) calc_display_pane_t2

0x61cb,	// (0x0005299b) calc_display_pane_t3

0x0002,

0xf173,	// (0x0005b943) calc_display_pane_t

0x61dd,	// (0x000529ad) cell_calc_pane_ParamLimits

0x61dd,	// (0x000529ad) cell_calc_pane

0x22fe,	// (0x0004eace) bg_calc_paper_pane_g1

0x2316,	// (0x0004eae6) bg_calc_paper_pane_g2

0x230a,	// (0x0004eada) bg_calc_paper_pane_g3

0x232e,	// (0x0004eafe) bg_calc_paper_pane_g4

0x2322,	// (0x0004eaf2) bg_calc_paper_pane_g5

0x620c,	// (0x000529dc) bg_calc_paper_pane_g6

0x621d,	// (0x000529ed) bg_calc_paper_pane_g7

0x622e,	// (0x000529fe) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0005b94a) bg_calc_paper_pane_g

0x623f,	// (0x00052a0f) calc_bg_paper_pane_g9

0x6250,	// (0x00052a20) list_calc_item_pane_ParamLimits

0x6250,	// (0x00052a20) list_calc_item_pane

0x233a,	// (0x0004eb0a) list_calc_item_pane_g1

0x6274,	// (0x00052a44) list_calc_item_pane_t1_ParamLimits

0x6274,	// (0x00052a44) list_calc_item_pane_t1

0x6286,	// (0x00052a56) list_calc_item_pane_t2_ParamLimits

0x6286,	// (0x00052a56) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0005b95b) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0005b95b) list_calc_item_pane_t

0x2347,	// (0x0004eb17) cell_calc_pane_g1

0x2351,	// (0x0004eb21) grid_highlight_pane_cp02

0x237c,	// (0x0004eb4c) bg_calc_display_pane_g1

0x62b6,	// (0x00052a86) bg_calc_display_pane_g2

0x2373,	// (0x0004eb43) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0005b965) bg_calc_display_pane_g

0x62c0,	// (0x00052a90) cell_qdial_pane_ParamLimits

0x62c0,	// (0x00052a90) cell_qdial_pane

0x62d6,	// (0x00052aa6) cell_qdial_pane_g1_ParamLimits

0x62d6,	// (0x00052aa6) cell_qdial_pane_g1

0x62e3,	// (0x00052ab3) cell_qdial_pane_g2_ParamLimits

0x62e3,	// (0x00052ab3) cell_qdial_pane_g2

0x2385,	// (0x0004eb55) cell_qdial_pane_g3_ParamLimits

0x2385,	// (0x0004eb55) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0005b96c) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0005b96c) cell_qdial_pane_g

0x6301,	// (0x00052ad1) cell_qdial_pane_t1_ParamLimits

0x6301,	// (0x00052ad1) cell_qdial_pane_t1

0x6319,	// (0x00052ae9) cell_qdial_pane_t2_ParamLimits

0x6319,	// (0x00052ae9) cell_qdial_pane_t2

0x632c,	// (0x00052afc) cell_qdial_pane_t3_ParamLimits

0x632c,	// (0x00052afc) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0005b975) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0005b975) cell_qdial_pane_t

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp04

0x2391,	// (0x0004eb61) thumbnail_qdial_pane_ParamLimits

0x2391,	// (0x0004eb61) thumbnail_qdial_pane

0x23ed,	// (0x0004ebbd) list_help_pane

0x23f6,	// (0x0004ebc6) scroll_pane_cp02

0x633f,	// (0x00052b0f) help_list_pane_t1_ParamLimits

0x633f,	// (0x00052b0f) help_list_pane_t1

0x6369,	// (0x00052b39) bg_notes_pane_g2

0x6371,	// (0x00052b41) bg_notes_pane_g3

0x6379,	// (0x00052b49) notes_bg_pane_g1

0x6381,	// (0x00052b51) notes_bg_pane_g4

0x6389,	// (0x00052b59) notes_bg_pane_g5

0x6391,	// (0x00052b61) notes_bg_pane_g6

0x6399,	// (0x00052b69) notes_bg_pane_g7

0x63a1,	// (0x00052b71) notes_bg_pane_g8

0x63a9,	// (0x00052b79) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0005b993) notes_bg_pane_g

0x63b1,	// (0x00052b81) list_notes_text_pane_ParamLimits

0x63b1,	// (0x00052b81) list_notes_text_pane

0x23ff,	// (0x0004ebcf) list_notes_text_pane_g1

0x05db,	// (0x0004cdab) list_notes_text_pane_t1

0x22f2,	// (0x0004eac2) listscroll_cale_week_pane

0x63eb,	// (0x00052bbb) bg_cale_heading_pane

0x2419,	// (0x0004ebe9) bg_cale_pane_cp01

0x63ff,	// (0x00052bcf) cale_week_corner_pane

0x6415,	// (0x00052be5) cale_week_day_heading_pane

0x6429,	// (0x00052bf9) cale_week_scroll_pane_g1

0x643a,	// (0x00052c0a) cale_week_scroll_pane_g2

0x644b,	// (0x00052c1b) cale_week_scroll_pane_g3

0x645c,	// (0x00052c2c) cale_week_scroll_pane_g4

0x646d,	// (0x00052c3d) cale_week_scroll_pane_g5

0x647e,	// (0x00052c4e) cale_week_scroll_pane_g6

0x6491,	// (0x00052c61) cale_week_scroll_pane_g7

0x64a4,	// (0x00052c74) cale_week_scroll_pane_g8

0x64b7,	// (0x00052c87) cale_week_scroll_pane_g9

0x64c8,	// (0x00052c98) cale_week_scroll_pane_g10

0x64d9,	// (0x00052ca9) cale_week_scroll_pane_g11

0x64ea,	// (0x00052cba) cale_week_scroll_pane_g12

0x64fb,	// (0x00052ccb) cale_week_scroll_pane_g13

0x650c,	// (0x00052cdc) cale_week_scroll_pane_g14

0x651d,	// (0x00052ced) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0005b9a2) cale_week_scroll_pane_g

0x652e,	// (0x00052cfe) cale_week_time_pane

0x6541,	// (0x00052d11) grid_cale_week_pane

0x6556,	// (0x00052d26) scroll_pane_cp08

0x6570,	// (0x00052d40) cell_cale_week_pane_ParamLimits

0x6570,	// (0x00052d40) cell_cale_week_pane

0x65ae,	// (0x00052d7e) cale_week_day_heading_pane_t1

0x65db,	// (0x00052dab) cale_week_day_heading_pane_t2

0x6608,	// (0x00052dd8) cale_week_day_heading_pane_t3

0x6635,	// (0x00052e05) cale_week_day_heading_pane_t4

0x6662,	// (0x00052e32) cale_week_day_heading_pane_t5

0x668f,	// (0x00052e5f) cale_week_day_heading_pane_t6

0x66bc,	// (0x00052e8c) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0005b9c1) cale_week_day_heading_pane_t

0x2444,	// (0x0004ec14) bg_cale_side_pane

0x66e9,	// (0x00052eb9) cale_week_time_pane_t1

0x6715,	// (0x00052ee5) cale_week_time_pane_t2

0x6741,	// (0x00052f11) cale_week_time_pane_t3

0x676d,	// (0x00052f3d) cale_week_time_pane_t4

0x6799,	// (0x00052f69) cale_week_time_pane_t5

0x67c5,	// (0x00052f95) cale_week_time_pane_t6

0x67f1,	// (0x00052fc1) cale_week_time_pane_t7

0x681d,	// (0x00052fed) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0005b9d0) cale_week_time_pane_t

0x6849,	// (0x00053019) cell_cale_week_pane_g2

0x6862,	// (0x00053032) cell_cale_week_pane_g3_ParamLimits

0x6862,	// (0x00053032) cell_cale_week_pane_g3

0x2452,	// (0x0004ec22) grid_highlight_pane_cp07

0x245a,	// (0x0004ec2a) listscroll_gms_pane

0x2464,	// (0x0004ec34) grid_gms_pane

0x246d,	// (0x0004ec3d) listscroll_gms_pane_g1

0x2475,	// (0x0004ec45) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0005b9e1) listscroll_gms_pane_g

0x687a,	// (0x0005304a) scroll_pane_cp010

0x6885,	// (0x00053055) cell_gms_pane_ParamLimits

0x6885,	// (0x00053055) cell_gms_pane

0x6898,	// (0x00053068) cell_gms_pane_g1

0x247d,	// (0x0004ec4d) cell_gms_pane_g2

0x2485,	// (0x0004ec55) cell_gms_pane_g3

0x248e,	// (0x0004ec5e) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0005b9e6) cell_gms_pane_g

0x2497,	// (0x0004ec67) grid_highlight_pane_cp09

0x8be4,	// (0x000553b4) phob_pre_status_pane_g1

0x8bec,	// (0x000553bc) phob_pre_status_pane_g2

0x8bf4,	// (0x000553c4) phob_pre_status_pane_g3

0x8bfc,	// (0x000553cc) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0005bdd5) phob_pre_status_pane_g

0x8c0c,	// (0x000553dc) phob_pre_status_pane_t1

0x8c1c,	// (0x000553ec) phob_pre_status_pane_t2

0x8c2c,	// (0x000553fc) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0005bde0) phob_pre_status_pane_t

0x1fcc,	// (0x0004e79c) bg_list_pane_cp05

0x68a8,	// (0x00053078) grid_vorec_pane

0x68b2,	// (0x00053082) vorec_t1

0x68c0,	// (0x00053090) vorec_t2

0x68ce,	// (0x0005309e) vorec_t3

0x68dc,	// (0x000530ac) vorec_t4

0x68ea,	// (0x000530ba) vorec_t5

0x68f8,	// (0x000530c8) vorec_t6

0x0006,

0xf21f,	// (0x0005b9ef) vorec_t

0x6914,	// (0x000530e4) wait_bar_pane_cp01

0x691c,	// (0x000530ec) cell_vorec_pane_ParamLimits

0x691c,	// (0x000530ec) cell_vorec_pane

0x249f,	// (0x0004ec6f) cell_vorec_pane_g1

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp05

0x6941,	// (0x00053111) cams_zoom_pane

0x694d,	// (0x0005311d) image_vga_pane

0x695c,	// (0x0005312c) main_camera_pane_g1

0x696a,	// (0x0005313a) main_camera_pane_g2

0x6976,	// (0x00053146) main_camera_pane_g3

0x6984,	// (0x00053154) main_camera_pane_g4

0x6992,	// (0x00053162) main_camera_pane_g5

0x69a0,	// (0x00053170) main_camera_pane_g6

0x69ae,	// (0x0005317e) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0005b9fe) main_camera_pane_g

0x69bc,	// (0x0005318c) main_camera_pane_t1

0x69ce,	// (0x0005319e) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0005ba0f) main_camera_pane_t

0x69f1,	// (0x000531c1) cams_zoom_pane_cp_ParamLimits

0x69f1,	// (0x000531c1) cams_zoom_pane_cp

0x6a15,	// (0x000531e5) image_cif_pane_ParamLimits

0x6a15,	// (0x000531e5) image_cif_pane

0x6a33,	// (0x00053203) image_subqcif_pane

0x6a3d,	// (0x0005320d) main_video_pane_g1_ParamLimits

0x6a3d,	// (0x0005320d) main_video_pane_g1

0x6a5d,	// (0x0005322d) main_video_pane_g2_ParamLimits

0x6a5d,	// (0x0005322d) main_video_pane_g2

0x6a8d,	// (0x0005325d) main_video_pane_g3_ParamLimits

0x6a8d,	// (0x0005325d) main_video_pane_g3

0x6ab6,	// (0x00053286) main_video_pane_g4_ParamLimits

0x6ab6,	// (0x00053286) main_video_pane_g4

0x6adf,	// (0x000532af) main_video_pane_g5_ParamLimits

0x6adf,	// (0x000532af) main_video_pane_g5

0x24b5,	// (0x0004ec85) main_video_pane_g6_ParamLimits

0x24b5,	// (0x0004ec85) main_video_pane_g6

0x0006,

0xf244,	// (0x0005ba14) main_video_pane_g_ParamLimits

0xf244,	// (0x0005ba14) main_video_pane_g

0x6b01,	// (0x000532d1) main_video_pane_t1_ParamLimits

0x6b01,	// (0x000532d1) main_video_pane_t1

0x24cf,	// (0x0004ec9f) cams_zoom_pane_g1

0x24d8,	// (0x0004eca8) cams_zoom_pane_g2

0x24e1,	// (0x0004ecb1) cams_zoom_pane_g3

0x24ea,	// (0x0004ecba) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0005ba23) cams_zoom_pane_g

0x6b4b,	// (0x0005331b) grid_cams_pane

0x6b59,	// (0x00053329) linegrid_cams_pane

0x6b67,	// (0x00053337) cell_cams_pane_ParamLimits

0x6b67,	// (0x00053337) cell_cams_pane

0x24f3,	// (0x0004ecc3) cams_burst_image_pane

0x24fb,	// (0x0004eccb) cell_cams_pane_g1

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp03

0x2347,	// (0x0004eb17) mp_bg_pane_g1

0x1fcc,	// (0x0004e79c) bg_list_pane_cp03

0x4098,	// (0x00050868) bg_mp_pane

0x40a0,	// (0x00050870) grid_mp_pane

0x40a8,	// (0x00050878) media_player_g1

0x40b2,	// (0x00050882) media_player_t1

0x40c0,	// (0x00050890) media_player_t2

0x40ce,	// (0x0005089e) media_player_t3

0x40dc,	// (0x000508ac) media_player_t4

0x40ea,	// (0x000508ba) media_player_t5

0x40f8,	// (0x000508c8) media_player_t6

0x4106,	// (0x000508d6) media_player_t7

0x0006,

0xf5ef,	// (0x0005bdbf) media_player_t

0x4114,	// (0x000508e4) wait_bar_pane_cp02

0xf5d4,	// (0x0005bda4) main_usb_pane_t

0x8bdb,	// (0x000553ab) cell_mp_pane

0x2347,	// (0x0004eb17) cell_mp_pane_g1

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp06

0x2503,	// (0x0004ecd3) grid_skin_colour_pane

0x250b,	// (0x0004ecdb) list_highlight_pane_cp03

0x6bd5,	// (0x000533a5) skin_g1

0x2513,	// (0x0004ece3) skin_t1

0x2522,	// (0x0004ecf2) skin_t2

0x0001,

0xf288,	// (0x0005ba58) skin_t

0x6bdf,	// (0x000533af) cell_skin_colour_pane_ParamLimits

0x6bdf,	// (0x000533af) cell_skin_colour_pane

0x2530,	// (0x0004ed00) cell_skin_colour_pane_g1

0x6c5f,	// (0x0005342f) call_video_g1_ParamLimits

0x6c5f,	// (0x0005342f) call_video_g1

0x6c6f,	// (0x0005343f) call_video_g2_ParamLimits

0x6c6f,	// (0x0005343f) call_video_g2

0x0001,

0xf28d,	// (0x0005ba5d) call_video_g_ParamLimits

0xf28d,	// (0x0005ba5d) call_video_g

0x6cbf,	// (0x0005348f) call_video_uplink_pane_cp1_ParamLimits

0x6cbf,	// (0x0005348f) call_video_uplink_pane_cp1

0x2542,	// (0x0004ed12) call_video_uplink_pane_cp2

0x6d8d,	// (0x0005355d) video_down_crop_pane_ParamLimits

0x6d8d,	// (0x0005355d) video_down_crop_pane

0x6e7f,	// (0x0005364f) video_down_pane_ParamLimits

0x6e7f,	// (0x0005364f) video_down_pane

0x254a,	// (0x0004ed1a) video_down_subqcif_pane_ParamLimits

0x254a,	// (0x0004ed1a) video_down_subqcif_pane

0x2564,	// (0x0004ed34) video_down_subqcif_pane_cp_ParamLimits

0x2564,	// (0x0004ed34) video_down_subqcif_pane_cp

0x258a,	// (0x0004ed5a) im_reading_pane_ParamLimits

0x258a,	// (0x0004ed5a) im_reading_pane

0x6f9c,	// (0x0005376c) im_writing_pane_ParamLimits

0x6f9c,	// (0x0005376c) im_writing_pane

0x6fba,	// (0x0005378a) im_reading_pane_t1

0x25a4,	// (0x0004ed74) list_im_pane

0x25b5,	// (0x0004ed85) scroll_pane_cp07

0x7002,	// (0x000537d2) im_writing_pane_t1_ParamLimits

0x7002,	// (0x000537d2) im_writing_pane_t1

0x25ce,	// (0x0004ed9e) im_writing_pane_t2_ParamLimits

0x25ce,	// (0x0004ed9e) im_writing_pane_t2

0x0001,

0xf297,	// (0x0005ba67) im_writing_pane_t_ParamLimits

0xf297,	// (0x0005ba67) im_writing_pane_t

0x1fcc,	// (0x0004e79c) input_focus_pane_cp04

0x1fcc,	// (0x0004e79c) input_focus_pane_cp05

0x7014,	// (0x000537e4) list_im_single_pane_ParamLimits

0x7014,	// (0x000537e4) list_im_single_pane

0x7030,	// (0x00053800) list_single_im_pane_t1

0x8b9f,	// (0x0005536f) blid_accuracy_pane

0x8ba7,	// (0x00055377) blid_compass_pane

0x8bb1,	// (0x00055381) main_location_t1

0x8bbf,	// (0x0005538f) main_location_t2

0x8bcd,	// (0x0005539d) main_location_t3

0x0002,

0xf5fe,	// (0x0005bdce) main_location_t

0x1fcc,	// (0x0004e79c) aid_levels_location

0x2347,	// (0x0004eb17) blid_accuracy_pane_g1

0x2347,	// (0x0004eb17) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0005bac9) blid_accuracy_pane_g

0x2616,	// (0x0004ede6) wml_content_pane

0x2654,	// (0x0004ee24) wml_button_pane_ParamLimits

0x2654,	// (0x0004ee24) wml_button_pane

0x703f,	// (0x0005380f) wml_list_single_large_pane_ParamLimits

0x703f,	// (0x0005380f) wml_list_single_large_pane

0x7061,	// (0x00053831) wml_list_single_medium_pane_ParamLimits

0x7061,	// (0x00053831) wml_list_single_medium_pane

0x7087,	// (0x00053857) wml_list_single_small_pane_ParamLimits

0x7087,	// (0x00053857) wml_list_single_small_pane

0x2668,	// (0x0004ee38) wml_selection_box_pane_ParamLimits

0x2668,	// (0x0004ee38) wml_selection_box_pane

0x267b,	// (0x0004ee4b) wml_list_single_pane_t1

0x268a,	// (0x0004ee5a) wml_list_single_medium_pane_t1

0x2699,	// (0x0004ee69) wml_list_single_large_pane_t1

0x26a8,	// (0x0004ee78) input_focus_pane_cp02_ParamLimits

0x26a8,	// (0x0004ee78) input_focus_pane_cp02

0x26bb,	// (0x0004ee8b) wml_selection_box_pane_g1

0x26c4,	// (0x0004ee94) wml_selection_box_pane_t1_ParamLimits

0x26c4,	// (0x0004ee94) wml_selection_box_pane_t1

0x2227,	// (0x0004e9f7) bg_wml_button_pane_ParamLimits

0x2227,	// (0x0004e9f7) bg_wml_button_pane

0x26dc,	// (0x0004eeac) wml_button_pane_g1

0x26e4,	// (0x0004eeb4) wml_button_pane_t1

0x26dc,	// (0x0004eeac) wml_button_bg_pane_g1

0x26f4,	// (0x0004eec4) wml_button_bg_pane_g2

0x26fc,	// (0x0004eecc) wml_button_bg_pane_g3

0x2704,	// (0x0004eed4) wml_button_bg_pane_g4

0x270c,	// (0x0004eedc) wml_button_bg_pane_g5

0x2714,	// (0x0004eee4) wml_button_bg_pane_g6

0x271c,	// (0x0004eeec) wml_button_bg_pane_g7

0x2724,	// (0x0004eef4) wml_button_bg_pane_g8

0x272c,	// (0x0004eefc) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0005ba6c) wml_button_bg_pane_g

0x70b2,	// (0x00053882) bg_list_pane_cp02

0x2734,	// (0x0004ef04) mce_header_pane_ParamLimits

0x2734,	// (0x0004ef04) mce_header_pane

0x274a,	// (0x0004ef1a) mce_icon_pane

0x274a,	// (0x0004ef1a) mce_image_pane

0x2753,	// (0x0004ef23) mce_text_pane_ParamLimits

0x2753,	// (0x0004ef23) mce_text_pane

0x70bc,	// (0x0005388c) scroll_pane_cp03

0x264c,	// (0x0004ee1c) scroll_pane_cp04

0x2766,	// (0x0004ef36) scroll_pane_cp05_ParamLimits

0x2766,	// (0x0004ef36) scroll_pane_cp05

0x70c6,	// (0x00053896) mce_header_field_pane_ParamLimits

0x70c6,	// (0x00053896) mce_header_field_pane

0x70e8,	// (0x000538b8) mce_header_field_pane_2_ParamLimits

0x70e8,	// (0x000538b8) mce_header_field_pane_2

0x70fe,	// (0x000538ce) mce_header_field_pane_3

0x7106,	// (0x000538d6) list_single_mce_message_pane_ParamLimits

0x7106,	// (0x000538d6) list_single_mce_message_pane

0x7125,	// (0x000538f5) list_single_mce_smart_pane_ParamLimits

0x7125,	// (0x000538f5) list_single_mce_smart_pane

0x2772,	// (0x0004ef42) input_focus_pane_cp03

0x277b,	// (0x0004ef4b) list_header_data_pane

0x714f,	// (0x0005391f) mce_header_field_pane_t1

0x715f,	// (0x0005392f) list_single_mce_header_pane_ParamLimits

0x715f,	// (0x0005392f) list_single_mce_header_pane

0x2783,	// (0x0004ef53) list_single_mce_header_pane_t1

0x2792,	// (0x0004ef62) list_single_mce_message_pane_g1

0x279a,	// (0x0004ef6a) list_single_mce_message_pane_t1

0x719b,	// (0x0005396b) bg_cale_heading_pane_cp01_ParamLimits

0x719b,	// (0x0005396b) bg_cale_heading_pane_cp01

0x27a8,	// (0x0004ef78) bg_cale_pane_cp02_ParamLimits

0x27a8,	// (0x0004ef78) bg_cale_pane_cp02

0x71be,	// (0x0005398e) cale_month_corner_pane

0x71d4,	// (0x000539a4) cale_month_day_heading_pane_ParamLimits

0x71d4,	// (0x000539a4) cale_month_day_heading_pane

0x7207,	// (0x000539d7) cale_month_pane_g1_ParamLimits

0x7207,	// (0x000539d7) cale_month_pane_g1

0x7223,	// (0x000539f3) cale_month_pane_g2_ParamLimits

0x7223,	// (0x000539f3) cale_month_pane_g2

0x723e,	// (0x00053a0e) cale_month_pane_g3_ParamLimits

0x723e,	// (0x00053a0e) cale_month_pane_g3

0x726a,	// (0x00053a3a) cale_month_pane_g4_ParamLimits

0x726a,	// (0x00053a3a) cale_month_pane_g4

0x7296,	// (0x00053a66) cale_month_pane_g5_ParamLimits

0x7296,	// (0x00053a66) cale_month_pane_g5

0x72c2,	// (0x00053a92) cale_month_pane_g6_ParamLimits

0x72c2,	// (0x00053a92) cale_month_pane_g6

0x72fe,	// (0x00053ace) cale_month_pane_g7_ParamLimits

0x72fe,	// (0x00053ace) cale_month_pane_g7

0x733a,	// (0x00053b0a) cale_month_pane_g8_ParamLimits

0x733a,	// (0x00053b0a) cale_month_pane_g8

0x7376,	// (0x00053b46) cale_month_pane_g9_ParamLimits

0x7376,	// (0x00053b46) cale_month_pane_g9

0x73b0,	// (0x00053b80) cale_month_pane_g10_ParamLimits

0x73b0,	// (0x00053b80) cale_month_pane_g10

0x73ea,	// (0x00053bba) cale_month_pane_g11_ParamLimits

0x73ea,	// (0x00053bba) cale_month_pane_g11

0x7424,	// (0x00053bf4) cale_month_pane_g12_ParamLimits

0x7424,	// (0x00053bf4) cale_month_pane_g12

0x745e,	// (0x00053c2e) cale_month_pane_g13_ParamLimits

0x745e,	// (0x00053c2e) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0005ba7f) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0005ba7f) cale_month_pane_g

0x7498,	// (0x00053c68) cale_month_week_pane

0x74ab,	// (0x00053c7b) grid_cale_month_pane_ParamLimits

0x74ab,	// (0x00053c7b) grid_cale_month_pane

0x74d9,	// (0x00053ca9) cale_month_day_heading_pane_t1

0x7537,	// (0x00053d07) cale_month_day_heading_pane_t2

0x759c,	// (0x00053d6c) cale_month_day_heading_pane_t3

0x7601,	// (0x00053dd1) cale_month_day_heading_pane_t4

0x7666,	// (0x00053e36) cale_month_day_heading_pane_t5

0x76d3,	// (0x00053ea3) cale_month_day_heading_pane_t6

0x7748,	// (0x00053f18) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0005ba9a) cale_month_day_heading_pane_t

0x2444,	// (0x0004ec14) bg_cale_side_pane_cp01

0x77bd,	// (0x00053f8d) cale_month_week_pane_t1

0x77e8,	// (0x00053fb8) cale_month_week_pane_t2

0x7813,	// (0x00053fe3) cale_month_week_pane_t3

0x783e,	// (0x0005400e) cale_month_week_pane_t4

0x7869,	// (0x00054039) cale_month_week_pane_t5

0x7894,	// (0x00054064) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0005baa9) cale_month_week_pane_t

0x78bf,	// (0x0005408f) cell_cale_month_pane_ParamLimits

0x78bf,	// (0x0005408f) cell_cale_month_pane

0x798d,	// (0x0005415d) cell_cale_month_pane_g1

0x7999,	// (0x00054169) cell_cale_month_pane_t1_ParamLimits

0x7999,	// (0x00054169) cell_cale_month_pane_t1

0x2452,	// (0x0004ec22) grid_highlight_pane_cp08

0x2347,	// (0x0004eb17) main_smil_g1

0x79b5,	// (0x00054185) smil_status_pane

0x27dd,	// (0x0004efad) smil_text_pane

0x3fb6,	// (0x00050786) bg_popup_call3_rect_pane_g8

0x3fbe,	// (0x0005078e) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0005bd62) bg_popup_call3_rect_pane_g

0x4266,	// (0x00050a36) smil_status_volume_pane_g1

0x27e7,	// (0x0004efb7) smil_status_pane_t1

0x8f80,	// (0x00055750) volume_smil_pane

0x27fe,	// (0x0004efce) list_smil_text_pane

0x79c8,	// (0x00054198) scroll_pane_cp011

0x79d3,	// (0x000541a3) smil_text_list_pane_t1_ParamLimits

0x79d3,	// (0x000541a3) smil_text_list_pane_t1

0x7a37,	// (0x00054207) aid_volume_smil_ParamLimits

0x7a37,	// (0x00054207) aid_volume_smil

0x2347,	// (0x0004eb17) smil_volume_pane_g1

0x2347,	// (0x0004eb17) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0005bac9) smil_volume_pane_g

0x22f2,	// (0x0004eac2) listscroll_cale_day_pane

0x2808,	// (0x0004efd8) bg_cale_pane

0x2820,	// (0x0004eff0) list_cale_pane

0x2831,	// (0x0004f001) scroll_pane_cp09

0x2842,	// (0x0004f012) cale_bg_pane_g1

0x284a,	// (0x0004f01a) cale_bg_pane_g2

0x2852,	// (0x0004f022) cale_bg_pane_g3

0x285a,	// (0x0004f02a) cale_bg_pane_g4

0x2862,	// (0x0004f032) cale_bg_pane_g5

0x286a,	// (0x0004f03a) cale_bg_pane_g6

0x2872,	// (0x0004f042) cale_bg_pane_g7

0x287a,	// (0x0004f04a) cale_bg_pane_g8

0x2882,	// (0x0004f052) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0005bace) cale_bg_pane_g

0x7a59,	// (0x00054229) list_cale_time_pane_ParamLimits

0x7a59,	// (0x00054229) list_cale_time_pane

0x7a71,	// (0x00054241) list_cale_time_pane_g1_ParamLimits

0x7a71,	// (0x00054241) list_cale_time_pane_g1

0x288a,	// (0x0004f05a) list_cale_time_pane_g2_ParamLimits

0x288a,	// (0x0004f05a) list_cale_time_pane_g2

0x7a7d,	// (0x0005424d) list_cale_time_pane_g3_ParamLimits

0x7a7d,	// (0x0005424d) list_cale_time_pane_g3

0x7a8b,	// (0x0005425b) list_cale_time_pane_g4_ParamLimits

0x7a8b,	// (0x0005425b) list_cale_time_pane_g4

0x7a99,	// (0x00054269) list_cale_time_pane_g5_ParamLimits

0x7a99,	// (0x00054269) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0005bae1) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0005bae1) list_cale_time_pane_g

0x7aa7,	// (0x00054277) list_cale_time_pane_t1_ParamLimits

0x7aa7,	// (0x00054277) list_cale_time_pane_t1

0x7acf,	// (0x0005429f) list_cale_time_pane_t2_ParamLimits

0x7acf,	// (0x0005429f) list_cale_time_pane_t2

0x7e3e,	// (0x0005460e) aid_blid_cardinal_pane

0x7e80,	// (0x00054650) compass_pane_t4

0x7af7,	// (0x000542c7) list_cale_time_pane_t4_ParamLimits

0x7af7,	// (0x000542c7) list_cale_time_pane_t4

0x7e8e,	// (0x0005465e) compass_pane_t5

0x7e9e,	// (0x0005466e) compass_pane_t6

0x7eac,	// (0x0005467c) compass_pane_t7

0x2c98,	// (0x0004f468) navi_pane_cc_t1

0x2ded,	// (0x0004f5bd) aid_phob_thumbnail_center_pane

0x8695,	// (0x00054e65) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0005baee) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0005baee) list_cale_time_pane_t

0x04d1,	// (0x0004cca1) bg_popup_window_pane_cp02_ParamLimits

0x04d1,	// (0x0004cca1) bg_popup_window_pane_cp02

0x28a4,	// (0x0004f074) heading_pane_cp01_ParamLimits

0x28a4,	// (0x0004f074) heading_pane_cp01

0x28b0,	// (0x0004f080) loc_req_pane_ParamLimits

0x28b0,	// (0x0004f080) loc_req_pane

0x28c0,	// (0x0004f090) loc_type_pane_ParamLimits

0x28c0,	// (0x0004f090) loc_type_pane

0x28d2,	// (0x0004f0a2) loc_type_pane_t1_ParamLimits

0x28d2,	// (0x0004f0a2) loc_type_pane_t1

0x28e4,	// (0x0004f0b4) loc_type_pane_t2_ParamLimits

0x28e4,	// (0x0004f0b4) loc_type_pane_t2

0x28f6,	// (0x0004f0c6) loc_type_pane_t3_ParamLimits

0x28f6,	// (0x0004f0c6) loc_type_pane_t3

0x0002,

0xf325,	// (0x0005baf5) loc_type_pane_t_ParamLimits

0xf325,	// (0x0005baf5) loc_type_pane_t

0x2908,	// (0x0004f0d8) list_loc_req_pane

0x2912,	// (0x0004f0e2) scroll_pane_cp012

0x7b1f,	// (0x000542ef) list_single_loc_request_popup_menu_pane_ParamLimits

0x7b1f,	// (0x000542ef) list_single_loc_request_popup_menu_pane

0x291d,	// (0x0004f0ed) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x291d,	// (0x0004f0ed) list_single_loc_request_popup_menu_pane_g1

0x2929,	// (0x0004f0f9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2929,	// (0x0004f0f9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0005bafc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0005bafc) list_single_loc_request_popup_menu_pane_g

0x2935,	// (0x0004f105) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2935,	// (0x0004f105) list_single_loc_request_popup_menu_pane_t1

0x7b31,	// (0x00054301) bg_popup_window_pane_cp03_ParamLimits

0x7b31,	// (0x00054301) bg_popup_window_pane_cp03

0x7b3f,	// (0x0005430f) heading_loc_req_pane_ParamLimits

0x7b3f,	// (0x0005430f) heading_loc_req_pane

0x7b4b,	// (0x0005431b) popup_dyc_status_message_window_g1_ParamLimits

0x7b4b,	// (0x0005431b) popup_dyc_status_message_window_g1

0x7b57,	// (0x00054327) popup_dyc_status_message_window_t1_ParamLimits

0x7b57,	// (0x00054327) popup_dyc_status_message_window_t1

0x7b69,	// (0x00054339) popup_dyc_status_message_window_t2_ParamLimits

0x7b69,	// (0x00054339) popup_dyc_status_message_window_t2

0x7b7b,	// (0x0005434b) popup_dyc_status_message_window_t3_ParamLimits

0x7b7b,	// (0x0005434b) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0005bb01) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0005bb01) popup_dyc_status_message_window_t

0x1fcc,	// (0x0004e79c) bg_heading_pane_cp01

0x294b,	// (0x0004f11b) heading_loc_req_pane_g1

0x2953,	// (0x0004f123) heading_loc_req_pane_g2

0x295b,	// (0x0004f12b) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0005bb08) heading_loc_req_pane_g

0x2963,	// (0x0004f133) heading_loc_req_pane_t1

0x2973,	// (0x0004f143) bg_popup_sub_pane_cp01_ParamLimits

0x2973,	// (0x0004f143) bg_popup_sub_pane_cp01

0x2981,	// (0x0004f151) popup_cale_events_window_g1_ParamLimits

0x2981,	// (0x0004f151) popup_cale_events_window_g1

0x29a1,	// (0x0004f171) popup_cale_events_window_g2_ParamLimits

0x29a1,	// (0x0004f171) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0005bb3c) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0005bb3c) popup_cale_events_window_g

0x29c1,	// (0x0004f191) popup_cale_events_window_t1_ParamLimits

0x29c1,	// (0x0004f191) popup_cale_events_window_t1

0x29d3,	// (0x0004f1a3) popup_cale_events_window_t2_ParamLimits

0x29d3,	// (0x0004f1a3) popup_cale_events_window_t2

0x2a11,	// (0x0004f1e1) popup_cale_events_window_t3_ParamLimits

0x2a11,	// (0x0004f1e1) popup_cale_events_window_t3

0x2a4b,	// (0x0004f21b) popup_cale_events_window_t4_ParamLimits

0x2a4b,	// (0x0004f21b) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0005bb41) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0005bb41) popup_cale_events_window_t

0x7bff,	// (0x000543cf) call_type_pane

0x2b3d,	// (0x0004f30d) popup_call_status_window_g1

0x7c0b,	// (0x000543db) popup_call_status_window_g2

0x7c17,	// (0x000543e7) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0005bb4a) popup_call_status_window_g

0x2a81,	// (0x0004f251) call_type_pane_g1

0x2a8a,	// (0x0004f25a) call_type_pane_g2

0x0001,

0xf381,	// (0x0005bb51) call_type_pane_g

0x1fcc,	// (0x0004e79c) bg_popup_sub_pane_cp02

0x2a93,	// (0x0004f263) listscroll_popup_wml_pane

0x2a9b,	// (0x0004f26b) list_wml_pane

0x2aa5,	// (0x0004f275) scroll_pane_cp013

0x2ab0,	// (0x0004f280) list_single_graphic_popup_wml_pane_ParamLimits

0x2ab0,	// (0x0004f280) list_single_graphic_popup_wml_pane

0x2347,	// (0x0004eb17) list_single_graphic_popup_wml_pane_g1

0x2ac4,	// (0x0004f294) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0005bb56) list_single_graphic_popup_wml_pane_g

0x2acc,	// (0x0004f29c) list_single_graphic_popup_wml_pane_t1

0x2ada,	// (0x0004f2aa) aid_call_pane

0x221f,	// (0x0004e9ef) popup_clock_analogue_window_g1

0x221f,	// (0x0004e9ef) popup_clock_analogue_window_g2

0x7c23,	// (0x000543f3) popup_clock_analogue_window_g3

0x7c23,	// (0x000543f3) popup_clock_analogue_window_g4

0x2347,	// (0x0004eb17) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0005bb5b) popup_clock_analogue_window_g

0x7c2b,	// (0x000543fb) popup_clock_analogue_window_t1

0x7c39,	// (0x00054409) clock_digital_number_pane_ParamLimits

0x7c39,	// (0x00054409) clock_digital_number_pane

0x7c45,	// (0x00054415) clock_digital_number_pane_cp02_ParamLimits

0x7c45,	// (0x00054415) clock_digital_number_pane_cp02

0x7c51,	// (0x00054421) clock_digital_number_pane_cp03_ParamLimits

0x7c51,	// (0x00054421) clock_digital_number_pane_cp03

0x7c5d,	// (0x0005442d) clock_digital_number_pane_cp04_ParamLimits

0x7c5d,	// (0x0005442d) clock_digital_number_pane_cp04

0x7c69,	// (0x00054439) clock_digital_separator_pane_ParamLimits

0x7c69,	// (0x00054439) clock_digital_separator_pane

0x7c75,	// (0x00054445) popup_clock_digital_window_t1

0x2347,	// (0x0004eb17) clock_digital_number_pane_g1

0x2347,	// (0x0004eb17) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0005bac9) clock_digital_number_pane_g

0x2347,	// (0x0004eb17) clock_digital_separator_pane_g1

0x2347,	// (0x0004eb17) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0005bac9) clock_digital_separator_pane_g

0x1fcc,	// (0x0004e79c) bg_popup_window_pane_cp04

0x2aea,	// (0x0004f2ba) heading_pane_cp03

0x2af2,	// (0x0004f2c2) listscroll_popup_gms_pane

0x2afa,	// (0x0004f2ca) grid_large_graphic_popup_pane

0x2b04,	// (0x0004f2d4) listscroll_popup_gms_pane_g1

0x2b0c,	// (0x0004f2dc) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005bb66) listscroll_popup_gms_pane_g

0x264c,	// (0x0004ee1c) scroll_pane_cp014

0x7c92,	// (0x00054462) cell_large_graphic_popup_pane_ParamLimits

0x7c92,	// (0x00054462) cell_large_graphic_popup_pane

0x7cac,	// (0x0005447c) cell_large_graphic_popup_pane_g1_ParamLimits

0x7cac,	// (0x0005447c) cell_large_graphic_popup_pane_g1

0x2b14,	// (0x0004f2e4) cell_large_graphic_popup_pane_g2_ParamLimits

0x2b14,	// (0x0004f2e4) cell_large_graphic_popup_pane_g2

0x2b20,	// (0x0004f2f0) cell_large_graphic_popup_pane_g3_ParamLimits

0x2b20,	// (0x0004f2f0) cell_large_graphic_popup_pane_g3

0x2b2d,	// (0x0004f2fd) cell_large_graphic_popup_pane_g4_ParamLimits

0x2b2d,	// (0x0004f2fd) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0005bb6b) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0005bb6b) cell_large_graphic_popup_pane_g

0x2b4b,	// (0x0004f31b) grid_highlight_pane_cp010

0x2347,	// (0x0004eb17) bg_popup_call_pane_g1

0x2b55,	// (0x0004f325) list_single_graphic_popup_conf_pane_ParamLimits

0x2b55,	// (0x0004f325) list_single_graphic_popup_conf_pane

0x2b67,	// (0x0004f337) list_highlight_pane_cp01

0x2b70,	// (0x0004f340) list_single_graphic_popup_conf_pane_g1

0x2b78,	// (0x0004f348) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005bb74) list_single_graphic_popup_conf_pane_g

0x2b80,	// (0x0004f350) list_single_graphic_popup_conf_pane_t1

0x2b8e,	// (0x0004f35e) linegrid_cams_pane_g1

0x7cb8,	// (0x00054488) linegrid_cams_pane_g2

0x2485,	// (0x0004ec55) linegrid_cams_pane_g3

0x2b97,	// (0x0004f367) linegrid_cams_pane_g4

0x7cc1,	// (0x00054491) linegrid_cams_pane_g5

0x7cca,	// (0x0005449a) linegrid_cams_pane_g6

0x248e,	// (0x0004ec5e) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0005bb79) linegrid_cams_pane_g

0x2ba0,	// (0x0004f370) popup_clock_analogue_window

0x2ba0,	// (0x0004f370) popup_clock_digital_window

0x1fcc,	// (0x0004e79c) popup_phob_thumbnail_window

0x2347,	// (0x0004eb17) call_video_uplink_pane_g1

0x2ba9,	// (0x0004f379) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005bb88) call_video_uplink_pane_g

0x2bb1,	// (0x0004f381) video_uplink_pane

0x2bb9,	// (0x0004f389) mce_image_pane_g1

0x7cd5,	// (0x000544a5) mce_image_pane_g2

0x7cdf,	// (0x000544af) mce_image_pane_g3

0x7ce9,	// (0x000544b9) mce_image_pane_g4

0x7cf1,	// (0x000544c1) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0005bb8d) mce_image_pane_g

0x2bc3,	// (0x0004f393) control_top_pane_stacon_cp01_ParamLimits

0x2bc3,	// (0x0004f393) control_top_pane_stacon_cp01

0x2bd7,	// (0x0004f3a7) uni_indicator_pane_stacon_cp01_ParamLimits

0x2bd7,	// (0x0004f3a7) uni_indicator_pane_stacon_cp01

0x2be8,	// (0x0004f3b8) bg_popup_sub_pane_cp03

0x7cf9,	// (0x000544c9) chi_dic_find_pane

0x7d01,	// (0x000544d1) listscroll_chi_dic_pane

0x7d0a,	// (0x000544da) main_pane_chidic_g1

0x7d1d,	// (0x000544ed) chi_dic_find_pane_t1

0x2bf2,	// (0x0004f3c2) find_chidic_pane

0x2bfb,	// (0x0004f3cb) chi_dic_list_pane_ParamLimits

0x2bfb,	// (0x0004f3cb) chi_dic_list_pane

0x2c0c,	// (0x0004f3dc) scroll_pane_cp020

0x7d2b,	// (0x000544fb) find_chidic_pane_t1

0x1fcc,	// (0x0004e79c) input_focus_pane_cp06

0x7d3a,	// (0x0005450a) list_chi_dic_pane_ParamLimits

0x7d3a,	// (0x0005450a) list_chi_dic_pane

0x7d52,	// (0x00054522) list_chi_dic_pane_t1_ParamLimits

0x7d52,	// (0x00054522) list_chi_dic_pane_t1

0x1fcc,	// (0x0004e79c) list_highlight_pane_cp020

0x2c14,	// (0x0004f3e4) bg_cale_heading_pane_g1

0x7d65,	// (0x00054535) bg_cale_heading_pane_g2

0x7d6d,	// (0x0005453d) bg_cale_heading_pane_g3

0x7d75,	// (0x00054545) bg_cale_heading_pane_g4

0x7d7f,	// (0x0005454f) bg_cale_heading_pane_g5

0x7d89,	// (0x00054559) bg_cale_heading_pane_g6

0x7d91,	// (0x00054561) bg_cale_heading_pane_g7

0x7d99,	// (0x00054569) bg_cale_heading_pane_g8

0x7da3,	// (0x00054573) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005bb98) bg_cale_heading_pane_g

0x2c14,	// (0x0004f3e4) bg_cale_side_pane_g1

0x7dad,	// (0x0005457d) bg_cale_side_pane_g2

0x7db5,	// (0x00054585) bg_cale_side_pane_g3

0x7dbd,	// (0x0005458d) bg_cale_side_pane_g4

0x7dc5,	// (0x00054595) bg_cale_side_pane_g5

0x7dcd,	// (0x0005459d) bg_cale_side_pane_g6

0x7dd5,	// (0x000545a5) bg_cale_side_pane_g7

0x7ddd,	// (0x000545ad) bg_cale_side_pane_g8

0x7de5,	// (0x000545b5) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005bbab) bg_cale_side_pane_g

0x7ded,	// (0x000545bd) popup_call_status_window_ParamLimits

0x7ded,	// (0x000545bd) popup_call_status_window

0x2c1c,	// (0x0004f3ec) stacon_top_pane

0x2c24,	// (0x0004f3f4) status_pane_ParamLimits

0x2c24,	// (0x0004f3f4) status_pane

0x2c39,	// (0x0004f409) status_small_pane

0x2c41,	// (0x0004f411) control_pane

0x1fcc,	// (0x0004e79c) stacon_bottom_pane

0x2c49,	// (0x0004f419) list_single_mce_smart_pane_t1_ParamLimits

0x2c49,	// (0x0004f419) list_single_mce_smart_pane_t1

0x2c5c,	// (0x0004f42c) list_single_mce_smart_pane_t2_ParamLimits

0x2c5c,	// (0x0004f42c) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0005bbbe) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0005bbbe) list_single_mce_smart_pane_t

0x7df9,	// (0x000545c9) compass_pane

0x7e04,	// (0x000545d4) main_location2_pane_t1

0x7e18,	// (0x000545e8) main_location2_pane_t2

0x7e18,	// (0x000545e8) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005bbc3) main_location2_pane_t

0x2c7b,	// (0x0004f44b) compass_pane_g1_ParamLimits

0x2c7b,	// (0x0004f44b) compass_pane_g1

0x7e62,	// (0x00054632) compass_pane_t1

0x7e71,	// (0x00054641) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005bbcc) compass_pane_t

0x7ebc,	// (0x0005468c) text_secondary_cp61

0x2c8f,	// (0x0004f45f) navi_pane_cams_g5

0x2cb2,	// (0x0004f482) navi_pane_im_t1

0x2cc0,	// (0x0004f490) navi_pane_mp_g1_ParamLimits

0x2cc0,	// (0x0004f490) navi_pane_mp_g1

0x2cd4,	// (0x0004f4a4) navi_pane_mp_g2_ParamLimits

0x2cd4,	// (0x0004f4a4) navi_pane_mp_g2

0x2ce0,	// (0x0004f4b0) navi_pane_mp_g3_ParamLimits

0x2ce0,	// (0x0004f4b0) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0005bbe0) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0005bbe0) navi_pane_mp_g

0x2cec,	// (0x0004f4bc) navi_pane_mp_t1

0x2cfa,	// (0x0004f4ca) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0005bbe7) navi_pane_mp_t

0x2d36,	// (0x0004f506) navi_pane_vt_g1

0x2cec,	// (0x0004f4bc) navi_pane_vt_t1

0x2d3e,	// (0x0004f50e) navi_slider_pane

0x2d46,	// (0x0004f516) zooming_pane

0x2d4e,	// (0x0004f51e) navi_slider_pane_g1

0x7fd3,	// (0x000547a3) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0005bbee) navi_slider_pane_g

0x2d72,	// (0x0004f542) aid_levels_zoom

0x2d7a,	// (0x0004f54a) zooming_pane_g1

0x2d82,	// (0x0004f552) zooming_pane_g2

0x2d82,	// (0x0004f552) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005bbfd) zooming_pane_g

0x2d8a,	// (0x0004f55a) level_10_zoom

0x2d93,	// (0x0004f563) level_11_zoom

0x2d9c,	// (0x0004f56c) level_1_zoom

0x2da5,	// (0x0004f575) level_2_zoom

0x2dae,	// (0x0004f57e) level_3_zoom

0x2db7,	// (0x0004f587) level_4_zoom

0x2dc0,	// (0x0004f590) level_5_zoom

0x2dc9,	// (0x0004f599) level_6_zoom

0x2dd2,	// (0x0004f5a2) level_7_zoom

0x2ddb,	// (0x0004f5ab) level_8_zoom

0x2de4,	// (0x0004f5b4) level_9_zoom

0x2df5,	// (0x0004f5c5) popup_phob_thumbnail_window_g1

0x2dfd,	// (0x0004f5cd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0005bc04) popup_phob_thumbnail_window_g

0x411c,	// (0x000508ec) level_1_location

0x4124,	// (0x000508f4) level_2_location

0x412c,	// (0x000508fc) level_3_location

0x4134,	// (0x00050904) level_4_location

0x2d46,	// (0x0004f516) level_5_location

0x7fe5,	// (0x000547b5) mce_icon_pane_g1

0x7fed,	// (0x000547bd) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005bc09) mce_icon_pane_g

0x7ff5,	// (0x000547c5) main_mup_pane_g1_ParamLimits

0x7ff5,	// (0x000547c5) main_mup_pane_g1

0x800d,	// (0x000547dd) main_mup_pane_g2_ParamLimits

0x800d,	// (0x000547dd) main_mup_pane_g2

0x8029,	// (0x000547f9) main_mup_pane_g3_ParamLimits

0x8029,	// (0x000547f9) main_mup_pane_g3

0x8045,	// (0x00054815) main_mup_pane_g4_ParamLimits

0x8045,	// (0x00054815) main_mup_pane_g4

0x8059,	// (0x00054829) main_mup_pane_g5_ParamLimits

0x8059,	// (0x00054829) main_mup_pane_g5

0x807a,	// (0x0005484a) main_mup_pane_g6_ParamLimits

0x807a,	// (0x0005484a) main_mup_pane_g6

0x809a,	// (0x0005486a) main_mup_pane_g7_ParamLimits

0x809a,	// (0x0005486a) main_mup_pane_g7

0x80be,	// (0x0005488e) main_mup_pane_g8_ParamLimits

0x80be,	// (0x0005488e) main_mup_pane_g8

0x80e2,	// (0x000548b2) main_mup_pane_g9_ParamLimits

0x80e2,	// (0x000548b2) main_mup_pane_g9

0x8105,	// (0x000548d5) main_mup_pane_g10_ParamLimits

0x8105,	// (0x000548d5) main_mup_pane_g10

0x8128,	// (0x000548f8) main_mup_pane_g11_ParamLimits

0x8128,	// (0x000548f8) main_mup_pane_g11

0x8148,	// (0x00054918) main_mup_pane_g12_ParamLimits

0x8148,	// (0x00054918) main_mup_pane_g12

0x8156,	// (0x00054926) main_mup_pane_g13_ParamLimits

0x8156,	// (0x00054926) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0005bc0e) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0005bc0e) main_mup_pane_g

0x816c,	// (0x0005493c) main_mup_pane_t1_ParamLimits

0x816c,	// (0x0005493c) main_mup_pane_t1

0x818b,	// (0x0005495b) main_mup_pane_t2_ParamLimits

0x818b,	// (0x0005495b) main_mup_pane_t2

0x81a5,	// (0x00054975) main_mup_pane_t3_ParamLimits

0x81a5,	// (0x00054975) main_mup_pane_t3

0x81bf,	// (0x0005498f) main_mup_pane_t4_ParamLimits

0x81bf,	// (0x0005498f) main_mup_pane_t4

0x81d1,	// (0x000549a1) main_mup_pane_t5_ParamLimits

0x81d1,	// (0x000549a1) main_mup_pane_t5

0x81e3,	// (0x000549b3) main_mup_pane_t6_ParamLimits

0x81e3,	// (0x000549b3) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005bc29) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005bc29) main_mup_pane_t

0x81f9,	// (0x000549c9) mup_progress_pane_ParamLimits

0x81f9,	// (0x000549c9) mup_progress_pane

0x8205,	// (0x000549d5) mup_visualizer_pane_ParamLimits

0x8205,	// (0x000549d5) mup_visualizer_pane

0x8243,	// (0x00054a13) mup_volume_pane_ParamLimits

0x8243,	// (0x00054a13) mup_volume_pane

0x2b3d,	// (0x0004f30d) mup_visualizer_pane_g1_ParamLimits

0x2b3d,	// (0x0004f30d) mup_visualizer_pane_g1

0x2b3d,	// (0x0004f30d) mup_visualizer_pane_g2_ParamLimits

0x2b3d,	// (0x0004f30d) mup_visualizer_pane_g2

0x2c7b,	// (0x0004f44b) mup_visualizer_pane_g3_ParamLimits

0x2c7b,	// (0x0004f44b) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0005bc36) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0005bc36) mup_visualizer_pane_g

0x2347,	// (0x0004eb17) mup_volume_pane_g1

0x2e0d,	// (0x0004f5dd) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005bc3d) mup_volume_pane_g

0x2347,	// (0x0004eb17) mup_progress_pane_g1

0x2e16,	// (0x0004f5e6) mup_progress_pane_g2

0x2e1f,	// (0x0004f5ef) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0005bc42) mup_progress_pane_g

0x1fcc,	// (0x0004e79c) bg_popup_window_pane_cp05

0x2e28,	// (0x0004f5f8) heading_pane_cp02_ParamLimits

0x2e28,	// (0x0004f5f8) heading_pane_cp02

0x2e44,	// (0x0004f614) list_popup_blid_pane

0x2e4c,	// (0x0004f61c) list_blid_sat_info_pane_ParamLimits

0x2e4c,	// (0x0004f61c) list_blid_sat_info_pane

0x2e5f,	// (0x0004f62f) list_blid_sat_info_pane_g1

0x2e67,	// (0x0004f637) list_blid_sat_info_pane_t1

0x8362,	// (0x00054b32) mup_equalizer_pane_ParamLimits

0x8362,	// (0x00054b32) mup_equalizer_pane

0x8383,	// (0x00054b53) mup_equalizer_pane_cp1_ParamLimits

0x8383,	// (0x00054b53) mup_equalizer_pane_cp1

0x83a4,	// (0x00054b74) mup_equalizer_pane_cp2_ParamLimits

0x83a4,	// (0x00054b74) mup_equalizer_pane_cp2

0x83c5,	// (0x00054b95) mup_equalizer_pane_cp3_ParamLimits

0x83c5,	// (0x00054b95) mup_equalizer_pane_cp3

0x83ea,	// (0x00054bba) mup_equalizer_pane_cp4_ParamLimits

0x83ea,	// (0x00054bba) mup_equalizer_pane_cp4

0x840f,	// (0x00054bdf) mup_equalizer_pane_cp5

0x8427,	// (0x00054bf7) mup_equalizer_pane_cp6

0x843f,	// (0x00054c0f) mup_equalizer_pane_cp7

0x4036,	// (0x00050806) bg_popup_call_poc_act_pane_g9

0x403e,	// (0x0005080e) bg_popup_call_poc_act_pane_g10

0x4046,	// (0x00050816) bg_popup_call_poc_act_pane_g11

0x000a,

0x2227,	// (0x0004e9f7) mup_scale_pane

0x2347,	// (0x0004eb17) mup_scale_pane_g1

0x2e75,	// (0x0004f645) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0005bc5e) mup_scale_pane_g

0x2e99,	// (0x0004f669) msg_data_pane

0x2ea1,	// (0x0004f671) scroll_pane_cp017

0x8469,	// (0x00054c39) bg_list_pane_cp04_ParamLimits

0x8469,	// (0x00054c39) bg_list_pane_cp04

0x2ea9,	// (0x0004f679) msg_data_pane_g1

0x848f,	// (0x00054c5f) msg_data_pane_g2

0x8499,	// (0x00054c69) msg_data_pane_g3

0x84a3,	// (0x00054c73) msg_data_pane_g4

0x84ab,	// (0x00054c7b) msg_data_pane_g5

0x84b3,	// (0x00054c83) msg_data_pane_g6

0x84bb,	// (0x00054c8b) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0005bc6d) msg_data_pane_g

0x84c3,	// (0x00054c93) msg_text_pane_ParamLimits

0x84c3,	// (0x00054c93) msg_text_pane

0x84f4,	// (0x00054cc4) qrid_highlight_pane_cp011_ParamLimits

0x84f4,	// (0x00054cc4) qrid_highlight_pane_cp011

0x1fcc,	// (0x0004e79c) msg_body_pane

0x1fcc,	// (0x0004e79c) msg_header_pane

0x2eba,	// (0x0004f68a) input_focus_pane_cp07

0x8518,	// (0x00054ce8) msg_header_pane_t1_ParamLimits

0x8518,	// (0x00054ce8) msg_header_pane_t1

0x852c,	// (0x00054cfc) msg_header_pane_t2_ParamLimits

0x852c,	// (0x00054cfc) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0005bc81) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0005bc81) msg_header_pane_t

0x2ecf,	// (0x0004f69f) msg_body_pane_g1

0x853e,	// (0x00054d0e) msg_body_pane_t1_ParamLimits

0x853e,	// (0x00054d0e) msg_body_pane_t1

0x856f,	// (0x00054d3f) msg_body_pane_t2_ParamLimits

0x856f,	// (0x00054d3f) msg_body_pane_t2

0x8581,	// (0x00054d51) msg_body_pane_t3_ParamLimits

0x8581,	// (0x00054d51) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005bc86) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005bc86) msg_body_pane_t

0x85e5,	// (0x00054db5) main_viewer_pane_g1_ParamLimits

0x85e5,	// (0x00054db5) main_viewer_pane_g1

0x85f1,	// (0x00054dc1) main_viewer_pane_g2_ParamLimits

0x85f1,	// (0x00054dc1) main_viewer_pane_g2

0x85fd,	// (0x00054dcd) main_viewer_pane_g3_ParamLimits

0x85fd,	// (0x00054dcd) main_viewer_pane_g3

0x860e,	// (0x00054dde) main_viewer_pane_g4_ParamLimits

0x860e,	// (0x00054dde) main_viewer_pane_g4

0x861f,	// (0x00054def) main_viewer_pane_g5_ParamLimits

0x861f,	// (0x00054def) main_viewer_pane_g5

0x861f,	// (0x00054def) main_viewer_pane_g7_ParamLimits

0x861f,	// (0x00054def) main_viewer_pane_g7

0x8631,	// (0x00054e01) main_viewer_pane_g8_ParamLimits

0x8631,	// (0x00054e01) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005bc96) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005bc96) main_viewer_pane_g

0x2ed7,	// (0x0004f6a7) viewer_content_pane_ParamLimits

0x2ed7,	// (0x0004f6a7) viewer_content_pane

0x8669,	// (0x00054e39) main_postcard_pane_g1_ParamLimits

0x8669,	// (0x00054e39) main_postcard_pane_g1

0x8677,	// (0x00054e47) main_postcard_pane_g2_ParamLimits

0x8677,	// (0x00054e47) main_postcard_pane_g2

0x8685,	// (0x00054e55) main_postcard_pane_g3_ParamLimits

0x8685,	// (0x00054e55) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005bca7) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005bca7) main_postcard_pane_g

0x8695,	// (0x00054e65) main_postcard_pane_g4

0x4253,	// (0x00050a23) smil_status_volume_pane_g2

0x86c1,	// (0x00054e91) postcard_pane_ParamLimits

0x86c1,	// (0x00054e91) postcard_pane

0x2b3d,	// (0x0004f30d) postcard_pane_g1_ParamLimits

0x2b3d,	// (0x0004f30d) postcard_pane_g1

0x86fb,	// (0x00054ecb) postcard_pane_g2_ParamLimits

0x86fb,	// (0x00054ecb) postcard_pane_g2

0x8707,	// (0x00054ed7) postcard_pane_g3_ParamLimits

0x8707,	// (0x00054ed7) postcard_pane_g3

0x2ee5,	// (0x0004f6b5) postcard_pane_g4_ParamLimits

0x2ee5,	// (0x0004f6b5) postcard_pane_g4

0x8713,	// (0x00054ee3) postcard_pane_g5_ParamLimits

0x8713,	// (0x00054ee3) postcard_pane_g5

0x871f,	// (0x00054eef) postcard_pane_g6_ParamLimits

0x871f,	// (0x00054eef) postcard_pane_g6

0x2ef3,	// (0x0004f6c3) postcard_pane_g7_ParamLimits

0x2ef3,	// (0x0004f6c3) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005bcb4) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005bcb4) postcard_pane_g

0x872d,	// (0x00054efd) main_mp2_pane_g1_ParamLimits

0x872d,	// (0x00054efd) main_mp2_pane_g1

0x873b,	// (0x00054f0b) main_mp2_pane_g2_ParamLimits

0x873b,	// (0x00054f0b) main_mp2_pane_g2

0x8747,	// (0x00054f17) main_mp2_pane_g3_ParamLimits

0x8747,	// (0x00054f17) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005bcc3) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005bcc3) main_mp2_pane_g

0x8753,	// (0x00054f23) main_mp2_pane_t1_ParamLimits

0x8753,	// (0x00054f23) main_mp2_pane_t1

0x876a,	// (0x00054f3a) main_mp2_pane_t2_ParamLimits

0x876a,	// (0x00054f3a) main_mp2_pane_t2

0x877e,	// (0x00054f4e) main_mp2_pane_t3_ParamLimits

0x877e,	// (0x00054f4e) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0005bcca) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0005bcca) main_mp2_pane_t

0x2f01,	// (0x0004f6d1) pec_content_pane_ParamLimits

0x2f01,	// (0x0004f6d1) pec_content_pane

0x264c,	// (0x0004ee1c) scroll_pane_cp015

0x2f13,	// (0x0004f6e3) pec_attribute_pane_ParamLimits

0x2f13,	// (0x0004f6e3) pec_attribute_pane

0x8790,	// (0x00054f60) pec_content_pane_g1_ParamLimits

0x8790,	// (0x00054f60) pec_content_pane_g1

0x2f23,	// (0x0004f6f3) pec_content_pane_t1_ParamLimits

0x2f23,	// (0x0004f6f3) pec_content_pane_t1

0x2f35,	// (0x0004f705) pec_content_pane_t2_ParamLimits

0x2f35,	// (0x0004f705) pec_content_pane_t2

0x0001,

0xf501,	// (0x0005bcd1) pec_content_pane_t_ParamLimits

0xf501,	// (0x0005bcd1) pec_content_pane_t

0x879c,	// (0x00054f6c) list_single_graphic_pane_cp01_ParamLimits

0x879c,	// (0x00054f6c) list_single_graphic_pane_cp01

0x2227,	// (0x0004e9f7) bg_popup_sub_pane_cp04

0x2f47,	// (0x0004f717) popup_mup_playback_window_g1

0x2f53,	// (0x0004f723) popup_mup_playback_window_t1

0x2f68,	// (0x0004f738) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0005bcd6) popup_mup_playback_window_t

0x2f9f,	// (0x0004f76f) main_image_pane_g1_ParamLimits

0x2f9f,	// (0x0004f76f) main_image_pane_g1

0x2fe2,	// (0x0004f7b2) scroll_pane_cp018_ParamLimits

0x2fe2,	// (0x0004f7b2) scroll_pane_cp018

0x2ffa,	// (0x0004f7ca) scroll_pane_cp016_ParamLimits

0x2ffa,	// (0x0004f7ca) scroll_pane_cp016

0x882d,	// (0x00054ffd) smil2_image_pane_ParamLimits

0x882d,	// (0x00054ffd) smil2_image_pane

0x8863,	// (0x00055033) smil2_root_pane_ParamLimits

0x8863,	// (0x00055033) smil2_root_pane

0x888f,	// (0x0005505f) smil2_text_pane_ParamLimits

0x888f,	// (0x0005505f) smil2_text_pane

0x1fcc,	// (0x0004e79c) bg_list_pane_cp06

0x3036,	// (0x0004f806) grid_radio_pane

0x1fcc,	// (0x0004e79c) bg_popup_window_pane_cp06

0x3040,	// (0x0004f810) main_fmradio_pane_t1

0x2aea,	// (0x0004f2ba) heading_pane_cp04

0x304e,	// (0x0004f81e) main_fmradio_pane_t2

0x404e,	// (0x0005081e) popup_cale_lunar_info_window_g1

0x305c,	// (0x0004f82c) main_fmradio_pane_t3

0x4056,	// (0x00050826) popup_cale_lunar_info_window_g2

0x306c,	// (0x0004f83c) main_fmradio_pane_t4

0x0001,

0x307a,	// (0x0004f84a) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0005bdb1) popup_cale_lunar_info_window_g

0xf51b,	// (0x0005bceb) main_fmradio_pane_t

0x3088,	// (0x0004f858) wait_bar_pane_cp03

0x3090,	// (0x0004f860) cell_fmradio_pane_ParamLimits

0x3090,	// (0x0004f860) cell_fmradio_pane

0x2ef3,	// (0x0004f6c3) cell_fmradio_pane_g1_ParamLimits

0x2ef3,	// (0x0004f6c3) cell_fmradio_pane_g1

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp011

0x30a5,	// (0x0004f875) poc_content_pane_ParamLimits

0x30a5,	// (0x0004f875) poc_content_pane

0x30b7,	// (0x0004f887) scroll_pane_cp019

0x88cf,	// (0x0005509f) popup_call_poc_act_window_ParamLimits

0x88cf,	// (0x0005509f) popup_call_poc_act_window

0x88dc,	// (0x000550ac) popup_call_poc_inact_window_ParamLimits

0x88dc,	// (0x000550ac) popup_call_poc_inact_window

0xf5b8,	// (0x0005bd88) bg_popup_call_poc_act_pane_g

0x3fc6,	// (0x00050796) bg_popup_call_poc_inact_pane_g1

0x3fce,	// (0x0005079e) bg_popup_call_poc_inact_pane_g2

0x30bf,	// (0x0004f88f) popup_call_poc_act_window_g2

0x3fd6,	// (0x000507a6) bg_popup_call_poc_inact_pane_g3

0x3fde,	// (0x000507ae) bg_popup_call_poc_inact_pane_g4

0x3fe6,	// (0x000507b6) bg_popup_call_poc_inact_pane_g5

0x30c7,	// (0x0004f897) popup_call_poc_act_window_t1_ParamLimits

0x30c7,	// (0x0004f897) popup_call_poc_act_window_t1

0x30ef,	// (0x0004f8bf) popup_call_poc_act_window_t2_ParamLimits

0x30ef,	// (0x0004f8bf) popup_call_poc_act_window_t2

0x3117,	// (0x0004f8e7) popup_call_poc_act_window_t3_ParamLimits

0x3117,	// (0x0004f8e7) popup_call_poc_act_window_t3

0x313f,	// (0x0004f90f) popup_call_poc_act_window_t4_ParamLimits

0x313f,	// (0x0004f90f) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0005bcf6) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0005bcf6) popup_call_poc_act_window_t

0x3fee,	// (0x000507be) bg_popup_call_poc_inact_pane_g6

0x3ff6,	// (0x000507c6) bg_popup_call_poc_inact_pane_g7

0x3ffe,	// (0x000507ce) bg_popup_call_poc_inact_pane_g8

0x3151,	// (0x0004f921) popup_call_poc_inact_window_g2

0x4006,	// (0x000507d6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0005bd75) bg_popup_call_poc_inact_pane_g

0x3159,	// (0x0004f929) popup_call_poc_inact_window_t1_ParamLimits

0x3159,	// (0x0004f929) popup_call_poc_inact_window_t1

0x316e,	// (0x0004f93e) popup_call_poc_inact_window_t2_ParamLimits

0x316e,	// (0x0004f93e) popup_call_poc_inact_window_t2

0x3183,	// (0x0004f953) popup_call_poc_inact_window_t3_ParamLimits

0x3183,	// (0x0004f953) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0005bcff) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0005bcff) popup_call_poc_inact_window_t

0x41c6,	// (0x00050996) context_pane_ParamLimits

0x8eee,	// (0x000556be) signal_pane_ParamLimits

0x2d46,	// (0x0004f516) main_call2_pane

0x41b4,	// (0x00050984) popup_phob_thumbnail2_window_ParamLimits

0x41b4,	// (0x00050984) popup_phob_thumbnail2_window

0x8593,	// (0x00054d63) aid_hotspot_pointer_arrow_pane

0x859b,	// (0x00054d6b) aid_hotspot_pointer_hand_pane

0x8c04,	// (0x000553d4) phob_pre_status_pane_g5

0x6941,	// (0x00053111) cams_zoom_pane_ParamLimits

0x694d,	// (0x0005311d) image_vga_pane_ParamLimits

0x695c,	// (0x0005312c) main_camera_pane_g1_ParamLimits

0x696a,	// (0x0005313a) main_camera_pane_g2_ParamLimits

0x6976,	// (0x00053146) main_camera_pane_g3_ParamLimits

0x6984,	// (0x00053154) main_camera_pane_g4_ParamLimits

0x6992,	// (0x00053162) main_camera_pane_g5_ParamLimits

0x69a0,	// (0x00053170) main_camera_pane_g6_ParamLimits

0x69ae,	// (0x0005317e) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0005b9fe) main_camera_pane_g_ParamLimits

0x69bc,	// (0x0005318c) main_camera_pane_t1_ParamLimits

0x69ce,	// (0x0005319e) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0005ba0f) main_camera_pane_t_ParamLimits

0x2227,	// (0x0004e9f7) bg_popup_preview_window_pane_cp01_ParamLimits

0x2227,	// (0x0004e9f7) bg_popup_preview_window_pane_cp01

0x3198,	// (0x0004f968) popup_phob_thumbnail2_window_g1_ParamLimits

0x3198,	// (0x0004f968) popup_phob_thumbnail2_window_g1

0x1fcc,	// (0x0004e79c) call2_cli_visual_pane

0x88f8,	// (0x000550c8) popup_call2_audio_conf_window_ParamLimits

0x88f8,	// (0x000550c8) popup_call2_audio_conf_window

0x8911,	// (0x000550e1) popup_call2_audio_first_window_ParamLimits

0x8911,	// (0x000550e1) popup_call2_audio_first_window

0x89af,	// (0x0005517f) popup_call2_audio_in_window_ParamLimits

0x89af,	// (0x0005517f) popup_call2_audio_in_window

0x89f3,	// (0x000551c3) popup_call2_audio_out_window_ParamLimits

0x89f3,	// (0x000551c3) popup_call2_audio_out_window

0x8a5d,	// (0x0005522d) popup_call2_audio_second_window_ParamLimits

0x8a5d,	// (0x0005522d) popup_call2_audio_second_window

0x8abb,	// (0x0005528b) popup_call2_audio_wait_window_ParamLimits

0x8abb,	// (0x0005528b) popup_call2_audio_wait_window

0x1fcc,	// (0x0004e79c) bg_popup_call2_act_pane_cp03

0x2209,	// (0x0004e9d9) list_conf_pane_cp

0x31a4,	// (0x0004f974) popup_call2_audio_conf_window_t1

0x31b2,	// (0x0004f982) list_single_graphic_popup_conf2_pane_ParamLimits

0x31b2,	// (0x0004f982) list_single_graphic_popup_conf2_pane

0x2b67,	// (0x0004f337) list_highlight_pane_cp04

0x31c5,	// (0x0004f995) list_single_graphic_popup_conf2_pane_g1

0x2b78,	// (0x0004f348) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0005bd06) list_single_graphic_popup_conf2_pane_g

0x31cf,	// (0x0004f99f) list_single_graphic_popup_conf2_pane_t1

0x31dd,	// (0x0004f9ad) bg_popup_call2_act_pane_cp01_ParamLimits

0x31dd,	// (0x0004f9ad) bg_popup_call2_act_pane_cp01

0x3267,	// (0x0004fa37) call_type_pane_cp05_ParamLimits

0x3267,	// (0x0004fa37) call_type_pane_cp05

0x32c7,	// (0x0004fa97) popup_call2_audio_second_window_g1_ParamLimits

0x32c7,	// (0x0004fa97) popup_call2_audio_second_window_g1

0x331b,	// (0x0004faeb) popup_call2_audio_second_window_g2_ParamLimits

0x331b,	// (0x0004faeb) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0005bd0b) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0005bd0b) popup_call2_audio_second_window_g

0x3380,	// (0x0004fb50) popup_call2_audio_second_window_t1_ParamLimits

0x3380,	// (0x0004fb50) popup_call2_audio_second_window_t1

0x343b,	// (0x0004fc0b) popup_call2_audio_second_window_t2_ParamLimits

0x343b,	// (0x0004fc0b) popup_call2_audio_second_window_t2

0x348e,	// (0x0004fc5e) popup_call2_audio_second_window_t3_ParamLimits

0x348e,	// (0x0004fc5e) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0005bd12) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0005bd12) popup_call2_audio_second_window_t

0x1fcc,	// (0x0004e79c) bg_popup_call2_in_pane_cp02

0x1fd6,	// (0x0004e7a6) call_type_pane_cp04

0x1fde,	// (0x0004e7ae) popup_call2_audio_wait_window_g1

0x1fe6,	// (0x0004e7b6) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005b8eb) popup_call2_audio_wait_window_g

0x1fee,	// (0x0004e7be) popup_call2_audio_wait_window_t3

0x3581,	// (0x0004fd51) bg_popup_call2_act_pane_ParamLimits

0x3581,	// (0x0004fd51) bg_popup_call2_act_pane

0x3659,	// (0x0004fe29) call_type_pane_cp03_ParamLimits

0x3659,	// (0x0004fe29) call_type_pane_cp03

0x36bd,	// (0x0004fe8d) popup_call2_audio_first_window_g1_ParamLimits

0x36bd,	// (0x0004fe8d) popup_call2_audio_first_window_g1

0x372d,	// (0x0004fefd) popup_call2_audio_first_window_g2_ParamLimits

0x372d,	// (0x0004fefd) popup_call2_audio_first_window_g2

0x2b3d,	// (0x0004f30d) popup_call2_audio_first_window_g3_ParamLimits

0x2b3d,	// (0x0004f30d) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0005bd1b) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0005bd1b) popup_call2_audio_first_window_g

0x380b,	// (0x0004ffdb) popup_call2_audio_first_window_t1_ParamLimits

0x380b,	// (0x0004ffdb) popup_call2_audio_first_window_t1

0x390e,	// (0x000500de) popup_call2_audio_first_window_t4_ParamLimits

0x390e,	// (0x000500de) popup_call2_audio_first_window_t4

0x39f1,	// (0x000501c1) popup_call2_audio_first_window_t5_ParamLimits

0x39f1,	// (0x000501c1) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0005bd26) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0005bd26) popup_call2_audio_first_window_t

0x221f,	// (0x0004e9ef) bg_popup_call2_act_pane_g1

0x4060,	// (0x00050830) popup_cale_lunar_info_window_t1

0x406e,	// (0x0005083e) popup_cale_lunar_info_window_t2

0x407c,	// (0x0005084c) popup_cale_lunar_info_window_t3

0x1fcc,	// (0x0004e79c) bg_popup_call2_bubble_pane

0x3af2,	// (0x000502c2) bg_popup_call2_in_pane_cp01_ParamLimits

0x3af2,	// (0x000502c2) bg_popup_call2_in_pane_cp01

0x1ca8,	// (0x0004e478) call_type_pane_cp02

0x3b3a,	// (0x0005030a) popup_call2_audio_out_window_g1_ParamLimits

0x3b3a,	// (0x0005030a) popup_call2_audio_out_window_g1

0x3b66,	// (0x00050336) popup_call2_audio_out_window_g2_ParamLimits

0x3b66,	// (0x00050336) popup_call2_audio_out_window_g2

0x3b8e,	// (0x0005035e) popup_call2_audio_out_window_g3_ParamLimits

0x3b8e,	// (0x0005035e) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0005bd2f) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0005bd2f) popup_call2_audio_out_window_g

0x3bc9,	// (0x00050399) popup_call2_audio_out_window_t1_ParamLimits

0x3bc9,	// (0x00050399) popup_call2_audio_out_window_t1

0x3c28,	// (0x000503f8) popup_call2_audio_out_window_t2_ParamLimits

0x3c28,	// (0x000503f8) popup_call2_audio_out_window_t2

0x3c7c,	// (0x0005044c) popup_call2_audio_out_window_t3_ParamLimits

0x3c7c,	// (0x0005044c) popup_call2_audio_out_window_t3

0x3c92,	// (0x00050462) popup_call2_audio_out_window_t4_ParamLimits

0x3c92,	// (0x00050462) popup_call2_audio_out_window_t4

0x3ca8,	// (0x00050478) popup_call2_audio_out_window_t5_ParamLimits

0x3ca8,	// (0x00050478) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0005bd38) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0005bd38) popup_call2_audio_out_window_t

0x3d0c,	// (0x000504dc) bg_popup_call2_in_pane_ParamLimits

0x3d0c,	// (0x000504dc) bg_popup_call2_in_pane

0x3d68,	// (0x00050538) popup_call2_audio_in_window_g1_ParamLimits

0x3d68,	// (0x00050538) popup_call2_audio_in_window_g1

0x3da0,	// (0x00050570) popup_call2_audio_in_window_g2_ParamLimits

0x3da0,	// (0x00050570) popup_call2_audio_in_window_g2

0x3dd8,	// (0x000505a8) popup_call2_audio_in_window_g3_ParamLimits

0x3dd8,	// (0x000505a8) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0005bd45) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0005bd45) popup_call2_audio_in_window_g

0x3e30,	// (0x00050600) popup_call2_audio_in_window_t1_ParamLimits

0x3e30,	// (0x00050600) popup_call2_audio_in_window_t1

0x3eb0,	// (0x00050680) popup_call2_audio_in_window_t2_ParamLimits

0x3eb0,	// (0x00050680) popup_call2_audio_in_window_t2

0x3f30,	// (0x00050700) popup_call2_audio_in_window_t3_ParamLimits

0x3f30,	// (0x00050700) popup_call2_audio_in_window_t3

0x3f4a,	// (0x0005071a) popup_call2_audio_in_window_t4_ParamLimits

0x3f4a,	// (0x0005071a) popup_call2_audio_in_window_t4

0x3f5c,	// (0x0005072c) popup_call2_audio_in_window_t5_ParamLimits

0x3f5c,	// (0x0005072c) popup_call2_audio_in_window_t5

0x3f71,	// (0x00050741) popup_call2_audio_in_window_t6_ParamLimits

0x3f71,	// (0x00050741) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0005bd4e) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0005bd4e) popup_call2_audio_in_window_t

0x221f,	// (0x0004e9ef) bg_popup_call2_in_pane_g1

0x408a,	// (0x0005085a) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0005bdb6) popup_cale_lunar_info_window_t

0x2227,	// (0x0004e9f7) bg_popup_call2_rect_pane_ParamLimits

0x2227,	// (0x0004e9f7) bg_popup_call2_rect_pane

0x1fcc,	// (0x0004e79c) call2_cli_visual_graphic_pane

0x1fcc,	// (0x0004e79c) call2_cli_visual_text_pane

0x8f73,	// (0x00055743) smil_status_volume_pane_g3

0x0002,

0x2347,	// (0x0004eb17) call2_cli_visual_graphic_pane_g1

0x2347,	// (0x0004eb17) call2_cli_visual_graphic_pane_g2

0x2347,	// (0x0004eb17) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0005bd5b) call2_cli_visual_graphic_pane_g

0x3f86,	// (0x00050756) bg_popup_call2_rect_pane_g1

0x23e5,	// (0x0004ebb5) bg_popup_call2_rect_pane_g2

0x3f8e,	// (0x0005075e) bg_popup_call2_rect_pane_g3

0x3f96,	// (0x00050766) bg_popup_call2_rect_pane_g4

0x3f9e,	// (0x0005076e) bg_popup_call2_rect_pane_g5

0x3fa6,	// (0x00050776) bg_popup_call2_rect_pane_g6

0x3fae,	// (0x0005077e) bg_popup_call2_rect_pane_g7

0x3fb6,	// (0x00050786) bg_popup_call2_rect_pane_g8

0x3fbe,	// (0x0005078e) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0005bd62) bg_popup_call2_rect_pane_g

0x3fc6,	// (0x00050796) bg_popup_call2_bubble_pane_g1

0x3fce,	// (0x0005079e) bg_popup_call2_bubble_pane_g2

0x3fd6,	// (0x000507a6) bg_popup_call2_bubble_pane_g3

0x3fde,	// (0x000507ae) bg_popup_call2_bubble_pane_g4

0x3fe6,	// (0x000507b6) bg_popup_call2_bubble_pane_g5

0x3fee,	// (0x000507be) bg_popup_call2_bubble_pane_g6

0x3ff6,	// (0x000507c6) bg_popup_call2_bubble_pane_g7

0x3ffe,	// (0x000507ce) bg_popup_call2_bubble_pane_g8

0x4006,	// (0x000507d6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0005bd75) bg_popup_call2_bubble_pane_g

0x63d8,	// (0x00052ba8) aid_cale_week_size_cell_pane

0x69e2,	// (0x000531b2) aid_cams_cif_uncrop_pane_ParamLimits

0x69e2,	// (0x000531b2) aid_cams_cif_uncrop_pane

0x6b3f,	// (0x0005330f) aid_cams_size_cell_ParamLimits

0x6b3f,	// (0x0005330f) aid_cams_size_cell

0x6b4b,	// (0x0005331b) grid_cams_pane_ParamLimits

0x6b59,	// (0x00053329) linegrid_cams_pane_ParamLimits

0x6c85,	// (0x00053455) call_video_pane_t1

0x6ca2,	// (0x00053472) call_video_pane_t2

0x0001,

0xf292,	// (0x0005ba62) call_video_pane_t

0x717d,	// (0x0005394d) aid_cale_month_size_cell_pane_ParamLimits

0x717d,	// (0x0005394d) aid_cale_month_size_cell_pane

0xf62f,	// (0x0005bdff) smil_status_volume_pane_g

0x8f80,	// (0x00055750) volume_smil_pane_ParamLimits

0x03f2,	// (0x0004cbc2) aid_popup2_width_pane

0x62f4,	// (0x00052ac4) cell_qdial_pane_g4_ParamLimits

0x62f4,	// (0x00052ac4) cell_qdial_pane_g4

0x7e3e,	// (0x0005460e) aid_blid_cardinal_pane_ParamLimits

0x7e4e,	// (0x0005461e) aid_blid_destination_pane_ParamLimits

0x7e4e,	// (0x0005461e) aid_blid_destination_pane

0x2227,	// (0x0004e9f7) bg_popup_call_poc_act_pane_ParamLimits

0x2227,	// (0x0004e9f7) bg_popup_call_poc_act_pane

0x2227,	// (0x0004e9f7) bg_popup_call_poc_inact_pane_ParamLimits

0x2227,	// (0x0004e9f7) bg_popup_call_poc_inact_pane

0x400e,	// (0x000507de) bg_popup_call_poc_act_pane_g1

0x4016,	// (0x000507e6) bg_popup_call_poc_act_pane_g2

0x401e,	// (0x000507ee) bg_popup_call_poc_act_pane_g3

0x3fde,	// (0x000507ae) bg_popup_call_poc_act_pane_g4

0x3fe6,	// (0x000507b6) bg_popup_call_poc_act_pane_g5

0x4026,	// (0x000507f6) bg_popup_call_poc_act_pane_g6

0x3ff6,	// (0x000507c6) bg_popup_call_poc_act_pane_g7

0x402e,	// (0x000507fe) bg_popup_call_poc_act_pane_g8

0x1fcc,	// (0x0004e79c) main_usb_pane

0x418b,	// (0x0005095b) popup_cale_lunar_info_window

0x6fba,	// (0x0005378a) im_reading_pane_t1_ParamLimits

0x25a4,	// (0x0004ed74) list_im_pane_ParamLimits

0x25b5,	// (0x0004ed85) scroll_pane_cp07_ParamLimits

0x1fcc,	// (0x0004e79c) grid_highlight_pane_cp012

0x2227,	// (0x0004e9f7) mup_scale_pane_ParamLimits

0x2b3d,	// (0x0004f30d) main_usb_pane_g1_ParamLimits

0x2b3d,	// (0x0004f30d) main_usb_pane_g1

0x8b27,	// (0x000552f7) main_usb_pane_g2_ParamLimits

0x8b27,	// (0x000552f7) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0005bd9f) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0005bd9f) main_usb_pane_g

0x8b33,	// (0x00055303) main_usb_pane_t1_ParamLimits

0x8b33,	// (0x00055303) main_usb_pane_t1

0x8b45,	// (0x00055315) main_usb_pane_t2_ParamLimits

0x8b45,	// (0x00055315) main_usb_pane_t2

0x8b57,	// (0x00055327) main_usb_pane_t3_ParamLimits

0x8b57,	// (0x00055327) main_usb_pane_t3

0x8b69,	// (0x00055339) main_usb_pane_t4_ParamLimits

0x8b69,	// (0x00055339) main_usb_pane_t4

0x8b7b,	// (0x0005534b) main_usb_pane_t5_ParamLimits

0x8b7b,	// (0x0005534b) main_usb_pane_t5

0x8b8d,	// (0x0005535d) main_usb_pane_t6_ParamLimits

0x8b8d,	// (0x0005535d) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0005bda4) main_usb_pane_t_ParamLimits

0x7df9,	// (0x000545c9) aid_text_placing

0x7e04,	// (0x000545d4) main_location2_pane_t1_ParamLimits

0x7e18,	// (0x000545e8) main_location2_pane_t2_ParamLimits

0x7e18,	// (0x000545e8) main_location2_pane_t3_ParamLimits

0x7e2c,	// (0x000545fc) main_location2_pane_t4_ParamLimits

0x7e2c,	// (0x000545fc) main_location2_pane_t4

0xf3f3,	// (0x0005bbc3) main_location2_pane_t_ParamLimits

0x2263,	// (0x0004ea33) find_pinb_pane_g2_ParamLimits

0x2263,	// (0x0004ea33) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0005b911) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0005b911) find_pinb_pane_g

0x226f,	// (0x0004ea3f) find_pinb_pane_t1_ParamLimits

0x2281,	// (0x0004ea51) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0005b916) find_pinb_pane_t_ParamLimits

0x1fcc,	// (0x0004e79c) main_call3_pane

0x74d9,	// (0x00053ca9) cale_month_day_heading_pane_t1_ParamLimits

0x7537,	// (0x00053d07) cale_month_day_heading_pane_t2_ParamLimits

0x759c,	// (0x00053d6c) cale_month_day_heading_pane_t3_ParamLimits

0x7601,	// (0x00053dd1) cale_month_day_heading_pane_t4_ParamLimits

0x7666,	// (0x00053e36) cale_month_day_heading_pane_t5_ParamLimits

0x76d3,	// (0x00053ea3) cale_month_day_heading_pane_t6_ParamLimits

0x7748,	// (0x00053f18) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0005ba9a) cale_month_day_heading_pane_t_ParamLimits

0x27f5,	// (0x0004efc5) smil_status_volume_pane

0x86df,	// (0x00054eaf) postcard_address_pane_ParamLimits

0x86df,	// (0x00054eaf) postcard_address_pane

0x86ed,	// (0x00054ebd) postcard_message_pane_ParamLimits

0x86ed,	// (0x00054ebd) postcard_message_pane

0x8afa,	// (0x000552ca) call2_cli_visual_pane_t1_ParamLimits

0x8afa,	// (0x000552ca) call2_cli_visual_pane_t1

0x90c6,	// (0x00055896) postcard_message_pane_t1_ParamLimits

0x90c6,	// (0x00055896) postcard_message_pane_t1

0x4279,	// (0x00050a49) postcard_address_pane_t1_ParamLimits

0x4279,	// (0x00050a49) postcard_address_pane_t1

0x90b7,	// (0x00055887) popup_call3_audio_in_window_ParamLimits

0x90b7,	// (0x00055887) popup_call3_audio_in_window

0x8f95,	// (0x00055765) bg_popup_call3_in_pane_ParamLimits

0x8f95,	// (0x00055765) bg_popup_call3_in_pane

0x8ffd,	// (0x000557cd) popup_call3_audio_in_window_g1_ParamLimits

0x8ffd,	// (0x000557cd) popup_call3_audio_in_window_g1

0x9015,	// (0x000557e5) popup_call3_audio_in_window_g2_ParamLimits

0x9015,	// (0x000557e5) popup_call3_audio_in_window_g2

0x902d,	// (0x000557fd) popup_call3_audio_in_window_g3_ParamLimits

0x902d,	// (0x000557fd) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0005be06) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0005be06) popup_call3_audio_in_window_g

0x9055,	// (0x00055825) popup_call3_audio_in_window_t1_ParamLimits

0x9055,	// (0x00055825) popup_call3_audio_in_window_t1

0x907d,	// (0x0005584d) popup_call3_audio_in_window_t2_ParamLimits

0x907d,	// (0x0005584d) popup_call3_audio_in_window_t2

0x90a5,	// (0x00055875) popup_call3_audio_in_window_t3_ParamLimits

0x90a5,	// (0x00055875) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0005be0f) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0005be0f) popup_call3_audio_in_window_t

0x2d46,	// (0x0004f516) bg_popup_call3_rect_pane

0x3f86,	// (0x00050756) bg_popup_call3_rect_pane_g1

0x23e5,	// (0x0004ebb5) bg_popup_call3_rect_pane_g2

0x3f8e,	// (0x0005075e) bg_popup_call3_rect_pane_g3

0x3f96,	// (0x00050766) bg_popup_call3_rect_pane_g4

0x3f9e,	// (0x0005076e) bg_popup_call3_rect_pane_g5

0x3fa6,	// (0x00050776) bg_popup_call3_rect_pane_g6

0x3fae,	// (0x0005077e) bg_popup_call3_rect_pane_g7

0x825e,	// (0x00054a2e) mup_visualizer_osc_pane

0x2e05,	// (0x0004f5d5) mup_visualizer_spec_pane

0x8fb5,	// (0x00055785) call3_video_qcif_pane_ParamLimits

0x8fb5,	// (0x00055785) call3_video_qcif_pane

0x8fc7,	// (0x00055797) call3_video_qcif_uncrop_pane_ParamLimits

0x8fc7,	// (0x00055797) call3_video_qcif_uncrop_pane

0x8fd7,	// (0x000557a7) call3_video_subqcif_pane_ParamLimits

0x8fd7,	// (0x000557a7) call3_video_subqcif_pane

0x8feb,	// (0x000557bb) call3_video_subqcif_uncrop_pane_ParamLimits

0x8feb,	// (0x000557bb) call3_video_subqcif_uncrop_pane

0x9045,	// (0x00055815) popup_call3_audio_in_window_g4_ParamLimits

0x9045,	// (0x00055815) popup_call3_audio_in_window_g4

0x8f62,	// (0x00055732) mup_spec_half_pane

0x8f6b,	// (0x0005573b) mup_spec_half_pane_cp

0x4239,	// (0x00050a09) mup_osc_middle_pane

0x4242,	// (0x00050a12) mup_visualizer_osc_pane_g1

0x8f42,	// (0x00055712) mup_spec_bar_pane_ParamLimits

0x8f42,	// (0x00055712) mup_spec_bar_pane

0x4226,	// (0x000509f6) mup_spec_bar_pane_g1

0x4230,	// (0x00050a00) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005bdfa) mup_spec_bar_pane_g

0x63d8,	// (0x00052ba8) aid_cale_week_size_cell_pane_ParamLimits

0x63eb,	// (0x00052bbb) bg_cale_heading_pane_ParamLimits

0x2419,	// (0x0004ebe9) bg_cale_pane_cp01_ParamLimits

0x63ff,	// (0x00052bcf) cale_week_corner_pane_ParamLimits

0x6415,	// (0x00052be5) cale_week_day_heading_pane_ParamLimits

0x6429,	// (0x00052bf9) cale_week_scroll_pane_g1_ParamLimits

0x643a,	// (0x00052c0a) cale_week_scroll_pane_g2_ParamLimits

0x644b,	// (0x00052c1b) cale_week_scroll_pane_g3_ParamLimits

0x645c,	// (0x00052c2c) cale_week_scroll_pane_g4_ParamLimits

0x646d,	// (0x00052c3d) cale_week_scroll_pane_g5_ParamLimits

0x647e,	// (0x00052c4e) cale_week_scroll_pane_g6_ParamLimits

0x6491,	// (0x00052c61) cale_week_scroll_pane_g7_ParamLimits

0x64a4,	// (0x00052c74) cale_week_scroll_pane_g8_ParamLimits

0x64b7,	// (0x00052c87) cale_week_scroll_pane_g9_ParamLimits

0x64c8,	// (0x00052c98) cale_week_scroll_pane_g10_ParamLimits

0x64d9,	// (0x00052ca9) cale_week_scroll_pane_g11_ParamLimits

0x64ea,	// (0x00052cba) cale_week_scroll_pane_g12_ParamLimits

0x64fb,	// (0x00052ccb) cale_week_scroll_pane_g13_ParamLimits

0x650c,	// (0x00052cdc) cale_week_scroll_pane_g14_ParamLimits

0x651d,	// (0x00052ced) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0005b9a2) cale_week_scroll_pane_g_ParamLimits

0x652e,	// (0x00052cfe) cale_week_time_pane_ParamLimits

0x6541,	// (0x00052d11) grid_cale_week_pane_ParamLimits

0x2432,	// (0x0004ec02) listscroll_cale_week_pane_t1

0x6556,	// (0x00052d26) scroll_pane_cp08_ParamLimits

0x71be,	// (0x0005398e) cale_month_corner_pane_ParamLimits

0x27cb,	// (0x0004ef9b) cale_month_pane_t1

0x7498,	// (0x00053c68) cale_month_week_pane_ParamLimits

0x2b3d,	// (0x0004f30d) popup_call_status_window_g1_ParamLimits

0x7c0b,	// (0x000543db) popup_call_status_window_g2_ParamLimits

0x7c17,	// (0x000543e7) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0005bb4a) popup_call_status_window_g_ParamLimits

0x2ae2,	// (0x0004f2b2) aid_call2_pane

0x850a,	// (0x00054cda) msg_header_pane_g1

0x86df,	// (0x00054eaf) postcard_address2_pane_ParamLimits

0x86df,	// (0x00054eaf) postcard_address2_pane

0x86ed,	// (0x00054ebd) postcard_message2_pane_ParamLimits

0x86ed,	// (0x00054ebd) postcard_message2_pane

0x8efc,	// (0x000556cc) message2_row_pane_ParamLimits

0x8efc,	// (0x000556cc) message2_row_pane

0x41e1,	// (0x000509b1) address2_row_pane_ParamLimits

0x41e1,	// (0x000509b1) address2_row_pane

0x41f4,	// (0x000509c4) postcard_message2_row_pane_g1

0x41fc,	// (0x000509cc) postcard_message2_row_pane_t1

0x41f4,	// (0x000509c4) address2_row_pane_g1

0x41fc,	// (0x000509cc) address2_row_pane_t1

0x68a0,	// (0x00053070) aid_size_cell_vorec

0x1fcc,	// (0x0004e79c) main_rss_pane

0x8f16,	// (0x000556e6) rss_list_single_pane_ParamLimits

0x8f16,	// (0x000556e6) rss_list_single_pane

0x420a,	// (0x000509da) rss_list_single_pane_t1

0x4218,	// (0x000509e8) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0005bdf5) rss_list_single_pane_t

0x1fcc,	// (0x0004e79c) main_camera2_pane

0x1fcc,	// (0x0004e79c) main_video2_pane

0x912a,	// (0x000558fa) cams_zoom_pane_cp2_ParamLimits

0x912a,	// (0x000558fa) cams_zoom_pane_cp2

0x9136,	// (0x00055906) image2_vga_pane_ParamLimits

0x9136,	// (0x00055906) image2_vga_pane

0x9145,	// (0x00055915) main_camera2_pane_g1_ParamLimits

0x9145,	// (0x00055915) main_camera2_pane_g1

0x9151,	// (0x00055921) main_camera2_pane_g2_ParamLimits

0x9151,	// (0x00055921) main_camera2_pane_g2

0x915d,	// (0x0005592d) main_camera2_pane_g3_ParamLimits

0x915d,	// (0x0005592d) main_camera2_pane_g3

0x9169,	// (0x00055939) main_camera2_pane_g4_ParamLimits

0x9169,	// (0x00055939) main_camera2_pane_g4

0x9175,	// (0x00055945) main_camera2_pane_g5_ParamLimits

0x9175,	// (0x00055945) main_camera2_pane_g5

0x9181,	// (0x00055951) main_camera2_pane_g6_ParamLimits

0x9181,	// (0x00055951) main_camera2_pane_g6

0x918d,	// (0x0005595d) main_camera2_pane_g7_ParamLimits

0x918d,	// (0x0005595d) main_camera2_pane_g7

0x9199,	// (0x00055969) main_camera2_pane_g8_ParamLimits

0x9199,	// (0x00055969) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0005be16) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0005be16) main_camera2_pane_g

0x91b1,	// (0x00055981) main_camera2_pane_t1_ParamLimits

0x91b1,	// (0x00055981) main_camera2_pane_t1

0x91c3,	// (0x00055993) main_camera2_pane_t2_ParamLimits

0x91c3,	// (0x00055993) main_camera2_pane_t2

0x91d5,	// (0x000559a5) main_camera2_pane_t3_ParamLimits

0x91d5,	// (0x000559a5) main_camera2_pane_t3

0x91e7,	// (0x000559b7) main_camera2_pane_t4_ParamLimits

0x91e7,	// (0x000559b7) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0005be29) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0005be29) main_camera2_pane_t

0x9244,	// (0x00055a14) cams_zoom_pane_cp4_ParamLimits

0x9244,	// (0x00055a14) cams_zoom_pane_cp4

0x9254,	// (0x00055a24) image2_cif_pane_ParamLimits

0x9254,	// (0x00055a24) image2_cif_pane

0x9269,	// (0x00055a39) image2_subqcif_pane_ParamLimits

0x9269,	// (0x00055a39) image2_subqcif_pane

0x9278,	// (0x00055a48) main_video2_pane_g1_ParamLimits

0x9278,	// (0x00055a48) main_video2_pane_g1

0x928a,	// (0x00055a5a) main_video2_pane_g2_ParamLimits

0x928a,	// (0x00055a5a) main_video2_pane_g2

0x929a,	// (0x00055a6a) main_video2_pane_g3_ParamLimits

0x929a,	// (0x00055a6a) main_video2_pane_g3

0x92aa,	// (0x00055a7a) main_video2_pane_g4_ParamLimits

0x92aa,	// (0x00055a7a) main_video2_pane_g4

0x92ba,	// (0x00055a8a) main_video2_pane_g5_ParamLimits

0x92ba,	// (0x00055a8a) main_video2_pane_g5

0x92ca,	// (0x00055a9a) main_video2_pane_g6_ParamLimits

0x92ca,	// (0x00055a9a) main_video2_pane_g6

0x0005,

0xf668,	// (0x0005be38) main_video2_pane_g_ParamLimits

0xf668,	// (0x0005be38) main_video2_pane_g

0x92dc,	// (0x00055aac) main_video2_pane_t1_ParamLimits

0x92dc,	// (0x00055aac) main_video2_pane_t1

0x92f6,	// (0x00055ac6) main_video2_pane_t2_ParamLimits

0x92f6,	// (0x00055ac6) main_video2_pane_t2

0x931c,	// (0x00055aec) main_video2_pane_t3_ParamLimits

0x931c,	// (0x00055aec) main_video2_pane_t3

0x0002,

0xf675,	// (0x0005be45) main_video2_pane_t_ParamLimits

0xf675,	// (0x0005be45) main_video2_pane_t

0x8c44,	// (0x00055414) call_muted_g2

0x0001,

0xf617,	// (0x0005bde7) call_muted_g

0x1fcc,	// (0x0004e79c) main_mup2_pane

0x42be,	// (0x00050a8e) main_mup2_pane_g1_ParamLimits

0x42be,	// (0x00050a8e) main_mup2_pane_g1

0x9342,	// (0x00055b12) main_mup2_pane_g2_ParamLimits

0x9342,	// (0x00055b12) main_mup2_pane_g2

0x95d4,	// (0x00055da4) main_mup_pane_g13_cp1

0x95dc,	// (0x00055dac) mup_volume_pane_cp1

0x9364,	// (0x00055b34) main_mup2_pane_g4_ParamLimits

0x9364,	// (0x00055b34) main_mup2_pane_g4

0x9379,	// (0x00055b49) main_mup2_pane_g5_ParamLimits

0x9379,	// (0x00055b49) main_mup2_pane_g5

0x938e,	// (0x00055b5e) main_mup2_pane_g6_ParamLimits

0x938e,	// (0x00055b5e) main_mup2_pane_g6

0x93a3,	// (0x00055b73) main_mup2_pane_g7_ParamLimits

0x93a3,	// (0x00055b73) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0005be4c) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0005be4c) main_mup2_pane_g

0x93bf,	// (0x00055b8f) main_mup2_pane_t1_ParamLimits

0x93bf,	// (0x00055b8f) main_mup2_pane_t1

0x93d6,	// (0x00055ba6) main_mup2_pane_t2_ParamLimits

0x93d6,	// (0x00055ba6) main_mup2_pane_t2

0x93ed,	// (0x00055bbd) main_mup2_pane_t3_ParamLimits

0x93ed,	// (0x00055bbd) main_mup2_pane_t3

0x9404,	// (0x00055bd4) main_mup2_pane_t4_ParamLimits

0x9404,	// (0x00055bd4) main_mup2_pane_t4

0x941e,	// (0x00055bee) main_mup2_pane_t5_ParamLimits

0x941e,	// (0x00055bee) main_mup2_pane_t5

0x9438,	// (0x00055c08) main_mup2_pane_t6_ParamLimits

0x9438,	// (0x00055c08) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0005be5b) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0005be5b) main_mup2_pane_t

0x9470,	// (0x00055c40) mup2_visualizer_pane_ParamLimits

0x9470,	// (0x00055c40) mup2_visualizer_pane

0x94a6,	// (0x00055c76) mup_progress_pane_cp_ParamLimits

0x94a6,	// (0x00055c76) mup_progress_pane_cp

0x95bf,	// (0x00055d8f) mup_volume_pane_cp_ParamLimits

0x95bf,	// (0x00055d8f) mup_volume_pane_cp

0x94bf,	// (0x00055c8f) mup2_visualizer_pane_g1_ParamLimits

0x94bf,	// (0x00055c8f) mup2_visualizer_pane_g1

0x4290,	// (0x00050a60) mup2_visualizer_pane_g2_ParamLimits

0x4290,	// (0x00050a60) mup2_visualizer_pane_g2

0x94d4,	// (0x00055ca4) mup2_visualizer_pane_g3_ParamLimits

0x94d4,	// (0x00055ca4) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0005be68) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0005be68) mup2_visualizer_pane_g

0x302e,	// (0x0004f7fe) aid_size_cell_fmradio

0x8d5a,	// (0x0005552a) aid_height_parent_landcape

0x2633,	// (0x0004ee03) wml_content_pane_cp

0x263b,	// (0x0004ee0b) wml_tabs_pane

0x2644,	// (0x0004ee14) popup_wml_miniature_window

0x264c,	// (0x0004ee1c) scroll_pane_cp021

0x2660,	// (0x0004ee30) wml_content_pane_comp8

0x1fcc,	// (0x0004e79c) bg_popup_sub_pane_cp05

0x42ae,	// (0x00050a7e) popup_wml_miniature_window_g1

0x42b6,	// (0x00050a86) wml_miniature_view_pane

0x94e2,	// (0x00055cb2) aid_size_wml_view

0x94ea,	// (0x00055cba) wml_miniature_view_pane_g1

0x94f3,	// (0x00055cc3) wml_miniature_view_pane_g2

0x94fc,	// (0x00055ccc) wml_miniature_view_pane_g3

0x9504,	// (0x00055cd4) wml_miniature_view_pane_g4

0x950c,	// (0x00055cdc) wml_miniature_view_pane_g5

0x9514,	// (0x00055ce4) wml_miniature_view_pane_g6

0x951c,	// (0x00055cec) wml_miniature_view_pane_g7

0x9524,	// (0x00055cf4) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0005be6f) wml_miniature_view_pane_g

0x42be,	// (0x00050a8e) background_graphic_ParamLimits

0x42be,	// (0x00050a8e) background_graphic

0x42ca,	// (0x00050a9a) wml_tabs_2_pane

0x42d3,	// (0x00050aa3) wml_tabs_3_pane_ParamLimits

0x42d3,	// (0x00050aa3) wml_tabs_3_pane

0x42e5,	// (0x00050ab5) wml_tabs_4_pane_ParamLimits

0x42e5,	// (0x00050ab5) wml_tabs_4_pane

0x42fb,	// (0x00050acb) wml_tabs_5_pane_ParamLimits

0x42fb,	// (0x00050acb) wml_tabs_5_pane

0x4315,	// (0x00050ae5) wml_tabs_pane_g2_ParamLimits

0x4315,	// (0x00050ae5) wml_tabs_pane_g2

0x4329,	// (0x00050af9) wml_tabs_pane_g3_ParamLimits

0x4329,	// (0x00050af9) wml_tabs_pane_g3

0x952c,	// (0x00055cfc) wml_tabs_2_active_pane_ParamLimits

0x952c,	// (0x00055cfc) wml_tabs_2_active_pane

0x953e,	// (0x00055d0e) wml_tabs_2_passive_pane_ParamLimits

0x953e,	// (0x00055d0e) wml_tabs_2_passive_pane

0x9550,	// (0x00055d20) wml_tabs_3_active_pane_cp_ParamLimits

0x9550,	// (0x00055d20) wml_tabs_3_active_pane_cp

0x9563,	// (0x00055d33) wml_tabs_3_passive_pane_ParamLimits

0x9563,	// (0x00055d33) wml_tabs_3_passive_pane

0x9574,	// (0x00055d44) wml_tabs_3_passive_pane_cp_ParamLimits

0x9574,	// (0x00055d44) wml_tabs_3_passive_pane_cp

0x9589,	// (0x00055d59) tabs_4_active_pane

0x9591,	// (0x00055d61) tabs_4_passive_pane

0x9599,	// (0x00055d69) tabs_4_passive_pane_cp

0x95a1,	// (0x00055d71) tabs_4_passive_pane_cp2

0x8b1f,	// (0x000552ef) aid_height_text

0x8227,	// (0x000549f7) mup_volume_cont_pane_ParamLimits

0x8227,	// (0x000549f7) mup_volume_cont_pane

0x5f4d,	// (0x0005271d) aid_size_cell_pinb

0x5f57,	// (0x00052727) aid_size_list_pinb

0x948f,	// (0x00055c5f) mup2_volume_cont_pane_ParamLimits

0x948f,	// (0x00055c5f) mup2_volume_cont_pane

0x95ab,	// (0x00055d7b) mup2_volume_cont_pane_g1_ParamLimits

0x95ab,	// (0x00055d7b) mup2_volume_cont_pane_g1

0x5be5,	// (0x000523b5) aid_size_cell_touch_ParamLimits

0x5be5,	// (0x000523b5) aid_size_cell_touch

0x5e34,	// (0x00052604) touch_pane_ParamLimits

0x5e34,	// (0x00052604) touch_pane

0x03e0,	// (0x0004cbb0) main_rss2_pane

0x4346,	// (0x00050b16) listscroll_rss2_pane

0x434f,	// (0x00050b1f) rss2_navigation_pane

0x4357,	// (0x00050b27) list_rss2_pane

0x2c0c,	// (0x0004f3dc) scroll_pane_cp22

0x435f,	// (0x00050b2f) rss2_navigation_pane_g1

0x4368,	// (0x00050b38) rss2_navigation_pane_g2

0x4370,	// (0x00050b40) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0005be80) rss2_navigation_pane_g

0x4378,	// (0x00050b48) rss2_navigation_pane_t1

0x95e4,	// (0x00055db4) rss2_list_single_pane_ParamLimits

0x95e4,	// (0x00055db4) rss2_list_single_pane

0x4386,	// (0x00050b56) rss2_list_single_pane_t2

0x4394,	// (0x00050b64) rss2_list_single_pane_t3_ParamLimits

0x4394,	// (0x00050b64) rss2_list_single_pane_t3

0x43b1,	// (0x00050b81) rss2_list_single_pane_t4

0x79c0,	// (0x00054190) smil_status_pane_g1

0x0459,	// (0x0004cc29) main_image2_pane_ParamLimits

0x0459,	// (0x0004cc29) main_image2_pane

0x91a5,	// (0x00055975) main_camera2_pane_g9_ParamLimits

0x91a5,	// (0x00055975) main_camera2_pane_g9

0x91f9,	// (0x000559c9) main_camera2_pane_t5_ParamLimits

0x91f9,	// (0x000559c9) main_camera2_pane_t5

0x920b,	// (0x000559db) main_camera2_pane_t6_ParamLimits

0x920b,	// (0x000559db) main_camera2_pane_t6

0x960a,	// (0x00055dda) main_image2_pane_g1_ParamLimits

0x960a,	// (0x00055dda) main_image2_pane_g1

0x88b9,	// (0x00055089) smil2_video_pane_ParamLimits

0x88b9,	// (0x00055089) smil2_video_pane

0x040e,	// (0x0004cbde) aid_zoom_text_primary_cp

0x044f,	// (0x0004cc1f) popup_preview_fixed_window

0x259c,	// (0x0004ed6c) im_reading_pane_g1

0x90ef,	// (0x000558bf) cams2_bc_adjust_pane_cp_ParamLimits

0x90ef,	// (0x000558bf) cams2_bc_adjust_pane_cp

0x9236,	// (0x00055a06) cams2_bc_adjust_pane_ParamLimits

0x9236,	// (0x00055a06) cams2_bc_adjust_pane

0x4518,	// (0x00050ce8) cams2_bc_adjust_pane_g1

0x9616,	// (0x00055de6) cams2_slider_pane

0x961f,	// (0x00055def) cams2_slider_pane_g1

0x9628,	// (0x00055df8) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0005be87) cams2_slider_pane_g

0x604a,	// (0x0005281a) calc_display_pane_ParamLimits

0x6068,	// (0x00052838) calc_paper_pane_ParamLimits

0x6084,	// (0x00052854) grid_calc_pane_ParamLimits

0x7c75,	// (0x00054445) popup_clock_digital_window_t1_ParamLimits

0x2fcb,	// (0x0004f79b) main_image_pane_t1

0x6030,	// (0x00052800) aid_size_cell_calc_ParamLimits

0x6030,	// (0x00052800) aid_size_cell_calc

0x8d8c,	// (0x0005555c) popup_blid_sat_info2_window_ParamLimits

0x8d8c,	// (0x0005555c) popup_blid_sat_info2_window

0x43c7,	// (0x00050b97) aid_size_cell_blid

0x43cf,	// (0x00050b9f) bg_popup_window_pane_cp07

0x43f2,	// (0x00050bc2) grid_popup_blid_pane

0x43fc,	// (0x00050bcc) heading_pane_cp05_ParamLimits

0x43fc,	// (0x00050bcc) heading_pane_cp05

0x44c6,	// (0x00050c96) cell_popup_blid_pane_ParamLimits

0x44c6,	// (0x00050c96) cell_popup_blid_pane

0x44f0,	// (0x00050cc0) cell_popup_blid_pane_g1

0x44f8,	// (0x00050cc8) cell_popup_blid_pane_t1

0x9455,	// (0x00055c25) mup2_indicator_pane_ParamLimits

0x9455,	// (0x00055c25) mup2_indicator_pane

0x2d46,	// (0x0004f516) mup2_visualizer_osc_pane

0x429c,	// (0x00050a6c) mup2_visualizer_spec_pane_ParamLimits

0x429c,	// (0x00050a6c) mup2_visualizer_spec_pane

0x9642,	// (0x00055e12) mup2_spec_half_pane

0x964b,	// (0x00055e1b) mup2_spec_half_pane_cp

0x9655,	// (0x00055e25) mup2_spec_bar_pane_ParamLimits

0x9655,	// (0x00055e25) mup2_spec_bar_pane

0x4226,	// (0x000509f6) mup2_spec_bar_pane_g1

0x4230,	// (0x00050a00) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005bdfa) mup2_spec_bar_pane_g

0x9674,	// (0x00055e44) mup2_osc_middle_pane

0x4242,	// (0x00050a12) mup2_visualizer_osc_pane_g1

0x0487,	// (0x0004cc57) popup_number_entry_window_t1_ParamLimits

0x049a,	// (0x0004cc6a) popup_number_entry_window_t2_ParamLimits

0x04ac,	// (0x0004cc7c) popup_number_entry_window_t3_ParamLimits

0x5e8b,	// (0x0005265b) popup_number_entry_window_t5_ParamLimits

0x5e8b,	// (0x0005265b) popup_number_entry_window_t5

0xf0ec,	// (0x0005b8bc) popup_number_entry_window_t_ParamLimits

0x04be,	// (0x0004cc8e) text_title_cp2_ParamLimits

0x85a3,	// (0x00054d73) aid_hotspot_pointer_text2_pane

0x863d,	// (0x00054e0d) main_viewer_pane_g9_ParamLimits

0x863d,	// (0x00054e0d) main_viewer_pane_g9

0x27cb,	// (0x0004ef9b) cale_month_pane_t1_ParamLimits

0x2808,	// (0x0004efd8) bg_cale_pane_ParamLimits

0x2820,	// (0x0004eff0) list_cale_pane_ParamLimits

0x2432,	// (0x0004ec02) listscroll_cale_day_pane_t1

0x2831,	// (0x0004f001) scroll_pane_cp09_ParamLimits

0x8266,	// (0x00054a36) main_mup_eq_pane_t1_ParamLimits

0x8266,	// (0x00054a36) main_mup_eq_pane_t1

0x8282,	// (0x00054a52) main_mup_eq_pane_t2_ParamLimits

0x8282,	// (0x00054a52) main_mup_eq_pane_t2

0x829e,	// (0x00054a6e) main_mup_eq_pane_t3_ParamLimits

0x829e,	// (0x00054a6e) main_mup_eq_pane_t3

0x82b8,	// (0x00054a88) main_mup_eq_pane_t4_ParamLimits

0x82b8,	// (0x00054a88) main_mup_eq_pane_t4

0x82d2,	// (0x00054aa2) main_mup_eq_pane_t5_ParamLimits

0x82d2,	// (0x00054aa2) main_mup_eq_pane_t5

0x82ec,	// (0x00054abc) main_mup_eq_pane_t6_ParamLimits

0x82ec,	// (0x00054abc) main_mup_eq_pane_t6

0x8302,	// (0x00054ad2) main_mup_eq_pane_t7_ParamLimits

0x8302,	// (0x00054ad2) main_mup_eq_pane_t7

0x8318,	// (0x00054ae8) main_mup_eq_pane_t8_ParamLimits

0x8318,	// (0x00054ae8) main_mup_eq_pane_t8

0x832e,	// (0x00054afe) main_mup_eq_pane_t9_ParamLimits

0x832e,	// (0x00054afe) main_mup_eq_pane_t9

0x834a,	// (0x00054b1a) main_mup_eq_pane_t10_ParamLimits

0x834a,	// (0x00054b1a) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0005bc49) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0005bc49) main_mup_eq_pane_t

0x840f,	// (0x00054bdf) mup_equalizer_pane_cp5_ParamLimits

0x8427,	// (0x00054bf7) mup_equalizer_pane_cp6_ParamLimits

0x843f,	// (0x00054c0f) mup_equalizer_pane_cp7_ParamLimits

0x03e0,	// (0x0004cbb0) main_gallery_pane

0x424b,	// (0x00050a1b) smil2_volume_pane

0x4266,	// (0x00050a36) smil_status_volume_pane_g1_ParamLimits

0x4253,	// (0x00050a23) smil_status_volume_pane_g2_ParamLimits

0x8f73,	// (0x00055743) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0005bdff) smil_status_volume_pane_g_ParamLimits

0x43cf,	// (0x00050b9f) bg_popup_window_pane_cp07_ParamLimits

0x43dd,	// (0x00050bad) blid_firmament_pane

0x967d,	// (0x00055e4d) aid_size_cell_gallery_ParamLimits

0x967d,	// (0x00055e4d) aid_size_cell_gallery

0x968b,	// (0x00055e5b) grid_gallery_pane_ParamLimits

0x968b,	// (0x00055e5b) grid_gallery_pane

0x969b,	// (0x00055e6b) cell_gallery_pane_ParamLimits

0x969b,	// (0x00055e6b) cell_gallery_pane

0x4506,	// (0x00050cd6) bg_cell_gallery_focus_pane_ParamLimits

0x4506,	// (0x00050cd6) bg_cell_gallery_focus_pane

0x4520,	// (0x00050cf0) cell_gallery_pane_g1_ParamLimits

0x4520,	// (0x00050cf0) cell_gallery_pane_g1

0x96e9,	// (0x00055eb9) cell_gallery_pane_g2_ParamLimits

0x96e9,	// (0x00055eb9) cell_gallery_pane_g2

0x96f6,	// (0x00055ec6) cell_gallery_pane_g3_ParamLimits

0x96f6,	// (0x00055ec6) cell_gallery_pane_g3

0x452c,	// (0x00050cfc) cell_gallery_pane_g4_ParamLimits

0x452c,	// (0x00050cfc) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0005bead) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0005bead) cell_gallery_pane_g

0x4538,	// (0x00050d08) bg_cell_gallery_focus_pane_g1

0x4540,	// (0x00050d10) bg_cell_gallery_focus_pane_g2

0x4548,	// (0x00050d18) bg_cell_gallery_focus_pane_g3

0x4550,	// (0x00050d20) bg_cell_gallery_focus_pane_g4

0x4558,	// (0x00050d28) bg_cell_gallery_focus_pane_g5

0x4560,	// (0x00050d30) bg_cell_gallery_focus_pane_g6

0x4568,	// (0x00050d38) bg_cell_gallery_focus_pane_g7

0x4570,	// (0x00050d40) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0005beb6) bg_cell_gallery_focus_pane_g

0x4578,	// (0x00050d48) aid_firma_cardinal

0x458c,	// (0x00050d5c) blid_firmament_pane_t1

0x45a3,	// (0x00050d73) blid_firmament_pane_t2

0x45ba,	// (0x00050d8a) blid_firmament_pane_t3

0x45d1,	// (0x00050da1) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0005bec7) blid_firmament_pane_t

0x45e8,	// (0x00050db8) blid_sat_info_pane

0x45f8,	// (0x00050dc8) blid_sat_info_pane_g1

0x45f8,	// (0x00050dc8) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0005bed0) blid_sat_info_pane_g

0x4602,	// (0x00050dd2) blid_sat_info_pane_t1

0x4610,	// (0x00050de0) smil2_volume_content_pane

0x4619,	// (0x00050de9) smil2_volume_pane_g1

0x4621,	// (0x00050df1) smil2_volume_content_pane_g1

0x462a,	// (0x00050dfa) smil2_volume_content_pane_g2

0x4633,	// (0x00050e03) smil2_volume_content_pane_g3

0x463c,	// (0x00050e0c) smil2_volume_content_pane_g4

0x4645,	// (0x00050e15) smil2_volume_content_pane_g5

0x464e,	// (0x00050e1e) smil2_volume_content_pane_g6

0x4657,	// (0x00050e27) smil2_volume_content_pane_g7

0x4660,	// (0x00050e30) smil2_volume_content_pane_g8

0x4669,	// (0x00050e39) smil2_volume_content_pane_g9

0x4672,	// (0x00050e42) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0005bed5) smil2_volume_content_pane_g

0x65ae,	// (0x00052d7e) cale_week_day_heading_pane_t1_ParamLimits

0x65db,	// (0x00052dab) cale_week_day_heading_pane_t2_ParamLimits

0x6608,	// (0x00052dd8) cale_week_day_heading_pane_t3_ParamLimits

0x6635,	// (0x00052e05) cale_week_day_heading_pane_t4_ParamLimits

0x6662,	// (0x00052e32) cale_week_day_heading_pane_t5_ParamLimits

0x668f,	// (0x00052e5f) cale_week_day_heading_pane_t6_ParamLimits

0x66bc,	// (0x00052e8c) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0005b9c1) cale_week_day_heading_pane_t_ParamLimits

0x2444,	// (0x0004ec14) bg_cale_side_pane_ParamLimits

0x66e9,	// (0x00052eb9) cale_week_time_pane_t1_ParamLimits

0x6715,	// (0x00052ee5) cale_week_time_pane_t2_ParamLimits

0x6741,	// (0x00052f11) cale_week_time_pane_t3_ParamLimits

0x676d,	// (0x00052f3d) cale_week_time_pane_t4_ParamLimits

0x6799,	// (0x00052f69) cale_week_time_pane_t5_ParamLimits

0x67c5,	// (0x00052f95) cale_week_time_pane_t6_ParamLimits

0x67f1,	// (0x00052fc1) cale_week_time_pane_t7_ParamLimits

0x681d,	// (0x00052fed) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0005b9d0) cale_week_time_pane_t_ParamLimits

0x6849,	// (0x00053019) cell_cale_week_pane_g2_ParamLimits

0x2444,	// (0x0004ec14) bg_cale_side_pane_cp01_ParamLimits

0x77bd,	// (0x00053f8d) cale_month_week_pane_t1_ParamLimits

0x77e8,	// (0x00053fb8) cale_month_week_pane_t2_ParamLimits

0x7813,	// (0x00053fe3) cale_month_week_pane_t3_ParamLimits

0x783e,	// (0x0005400e) cale_month_week_pane_t4_ParamLimits

0x7869,	// (0x00054039) cale_month_week_pane_t5_ParamLimits

0x7894,	// (0x00054064) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0005baa9) cale_month_week_pane_t_ParamLimits

0x798d,	// (0x0005415d) cell_cale_month_pane_g1_ParamLimits

0x03e0,	// (0x0004cbb0) main_cale_event_viewer_pane

0x03e0,	// (0x0004cbb0) listscroll_cale_event_viewer_pane

0x467b,	// (0x00050e4b) list_cale_ev_pane

0x4683,	// (0x00050e53) scroll_pane_cp023

0x9703,	// (0x00055ed3) field_cale_ev_pane_ParamLimits

0x9703,	// (0x00055ed3) field_cale_ev_pane

0x468f,	// (0x00050e5f) field_cale_ev_content_pane_ParamLimits

0x468f,	// (0x00050e5f) field_cale_ev_content_pane

0x469b,	// (0x00050e6b) field_cale_ev_pane_g1_ParamLimits

0x469b,	// (0x00050e6b) field_cale_ev_pane_g1

0x46a7,	// (0x00050e77) field_cale_ev_pane_g2_ParamLimits

0x46a7,	// (0x00050e77) field_cale_ev_pane_g2

0x46bf,	// (0x00050e8f) field_cale_ev_pane_g3_ParamLimits

0x46bf,	// (0x00050e8f) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0005beea) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0005beea) field_cale_ev_pane_g

0x46d7,	// (0x00050ea7) field_cale_ev_pane_t1_ParamLimits

0x46d7,	// (0x00050ea7) field_cale_ev_pane_t1

0x9727,	// (0x00055ef7) field_cale_ev_content_pane_t1_ParamLimits

0x9727,	// (0x00055ef7) field_cale_ev_content_pane_t1

0x2eb1,	// (0x0004f681) bg_button_pane_cp01

0x22f2,	// (0x0004eac2) listscroll_cale_week_pane_ParamLimits

0x63ce,	// (0x00052b9e) popup_toolbar_window_cp01

0x2432,	// (0x0004ec02) listscroll_cale_week_pane_t1_ParamLimits

0x22f2,	// (0x0004eac2) listscroll_cale_day_pane_ParamLimits

0x63ce,	// (0x00052b9e) popup_toolbar_window_cp02

0x2432,	// (0x0004ec02) listscroll_cale_day_pane_t1_ParamLimits

0x22f2,	// (0x0004eac2) main_cale_month_pane_ParamLimits

0x8e70,	// (0x00055640) popup_toolbar_window_cp03_ParamLimits

0x8e70,	// (0x00055640) popup_toolbar_window_cp03

0x87c9,	// (0x00054f99) main_image_pane_g2_ParamLimits

0x87c9,	// (0x00054f99) main_image_pane_g2

0x87d5,	// (0x00054fa5) main_image_pane_g3_ParamLimits

0x87d5,	// (0x00054fa5) main_image_pane_g3

0x0002,

0xf50b,	// (0x0005bcdb) main_image_pane_g_ParamLimits

0xf50b,	// (0x0005bcdb) main_image_pane_g

0x2fcb,	// (0x0004f79b) main_image_pane_t1_ParamLimits

0x87e1,	// (0x00054fb1) main_image_pane_t2_ParamLimits

0x87e1,	// (0x00054fb1) main_image_pane_t2

0x87f3,	// (0x00054fc3) main_image_pane_t3_ParamLimits

0x87f3,	// (0x00054fc3) main_image_pane_t3

0x8805,	// (0x00054fd5) main_image_pane_t4_ParamLimits

0x8805,	// (0x00054fd5) main_image_pane_t4

0x0003,

0xf512,	// (0x0005bce2) main_image_pane_t_ParamLimits

0xf512,	// (0x0005bce2) main_image_pane_t

0x8817,	// (0x00054fe7) popup_image_details_window_cp01

0x8821,	// (0x00054ff1) popup_toobar_trans_pane_cp01_ParamLimits

0x8821,	// (0x00054ff1) popup_toobar_trans_pane_cp01

0x8de1,	// (0x000555b1) popup_image_details_window_ParamLimits

0x8de1,	// (0x000555b1) popup_image_details_window

0x4197,	// (0x00050967) popup_image_focus_window

0x90e1,	// (0x000558b1) camera2_autofocus_pane_ParamLimits

0x90e1,	// (0x000558b1) camera2_autofocus_pane

0x03e0,	// (0x0004cbb0) bg_popup_sub_pane_cp06

0x46ee,	// (0x00050ebe) popup_image_focus_window_g1

0x46f6,	// (0x00050ec6) popup_image_focus_window_g2

0x46fe,	// (0x00050ece) popup_image_focus_window_g3

0x4706,	// (0x00050ed6) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0005bef1) popup_image_focus_window_g

0x470e,	// (0x00050ede) popup_image_focus_window_t1

0x471c,	// (0x00050eec) popup_image_focus_window_t2

0x472c,	// (0x00050efc) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0005befa) popup_image_focus_window_t

0x473a,	// (0x00050f0a) camera2_autofocus_pane_g1

0x0459,	// (0x0004cc29) bg_tb_trans_pane_cp01

0x4748,	// (0x00050f18) popup_image_details_window_g1

0x475b,	// (0x00050f2b) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0005bf0c) popup_image_details_window_g

0x4784,	// (0x00050f54) popup_image_details_window_t1

0x4796,	// (0x00050f66) popup_image_details_window_t2

0x47af,	// (0x00050f7f) popup_image_details_window_t3

0x47c3,	// (0x00050f93) popup_image_details_window_t4

0x47de,	// (0x00050fae) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0005bf13) popup_image_details_window_t

0x22de,	// (0x0004eaae) bg_calc_paper_pane_ParamLimits

0x617d,	// (0x0005294d) grid_highlight_pane_cp013

0x6187,	// (0x00052957) list_calc_pane_ParamLimits

0x6199,	// (0x00052969) scroll_pane_cp024

0x22f2,	// (0x0004eac2) bg_calc_display_pane_ParamLimits

0x61a1,	// (0x00052971) calc_display_pane_t1_ParamLimits

0x61b6,	// (0x00052986) calc_display_pane_t2_ParamLimits

0x61cb,	// (0x0005299b) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0005b943) calc_display_pane_t_ParamLimits

0x629e,	// (0x00052a6e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0005b960) cell_calc_pane_g

0x62a7,	// (0x00052a77) cell_calc_pane_t1

0x2351,	// (0x0004eb21) grid_highlight_pane_cp02_ParamLimits

0x2367,	// (0x0004eb37) toolbar_button_pane_cp01_ParamLimits

0x2367,	// (0x0004eb37) toolbar_button_pane_cp01

0x3010,	// (0x0004f7e0) temp_image_control_pane_ParamLimits

0x3010,	// (0x0004f7e0) temp_image_control_pane

0x0459,	// (0x0004cc29) main_mp3_pane

0x47f8,	// (0x00050fc8) temp_image_control_pane_g1_ParamLimits

0x47f8,	// (0x00050fc8) temp_image_control_pane_g1

0x4806,	// (0x00050fd6) temp_image_control_pane_g2_ParamLimits

0x4806,	// (0x00050fd6) temp_image_control_pane_g2

0x4818,	// (0x00050fe8) temp_image_control_pane_g3_ParamLimits

0x4818,	// (0x00050fe8) temp_image_control_pane_g3

0x9775,	// (0x00055f45) temp_image_control_pane_g4_ParamLimits

0x9775,	// (0x00055f45) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0005bf1e) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0005bf1e) temp_image_control_pane_g

0x47f8,	// (0x00050fc8) main_mp3_pane_g1

0x9786,	// (0x00055f56) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0005bf27) main_mp3_pane_g

0x485b,	// (0x0005102b) main_mp3_pane_t1

0x24a9,	// (0x0004ec79) main_camera_pane_g8_ParamLimits

0x24a9,	// (0x0004ec79) main_camera_pane_g8

0x6af5,	// (0x000532c5) main_video_pane_g7_ParamLimits

0x6af5,	// (0x000532c5) main_video_pane_g7

0x9224,	// (0x000559f4) main_camera2_pane_t7_ParamLimits

0x9224,	// (0x000559f4) main_camera2_pane_t7

0x25f3,	// (0x0004edc3) scroll_pane_cp025_ParamLimits

0x25f3,	// (0x0004edc3) scroll_pane_cp025

0x2607,	// (0x0004edd7) scroll_pane_cp026_ParamLimits

0x2607,	// (0x0004edd7) scroll_pane_cp026

0x2616,	// (0x0004ede6) wml_content_pane_ParamLimits

0x03e0,	// (0x0004cbb0) main_touch_calib_pane

0x982a,	// (0x00055ffa) main_touch_calib_pane_g1

0x9836,	// (0x00056006) main_touch_calib_pane_g2

0x9842,	// (0x00056012) main_touch_calib_pane_g3

0x984e,	// (0x0005601e) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0005bf45) main_touch_calib_pane_g

0x985a,	// (0x0005602a) main_touch_calib_pane_t1

0x9871,	// (0x00056041) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0005bf4e) main_touch_calib_pane_t

0x2c87,	// (0x0004f457) mup_progress_pane_cp02

0x2ca6,	// (0x0004f476) navi_pane_g1

0x2d08,	// (0x0004f4d8) navi_pane_mp_t3

0x0459,	// (0x0004cc29) main_mp3_pane_ParamLimits

0x8eb2,	// (0x00055682) navi_pane_ParamLimits

0x47f8,	// (0x00050fc8) main_mp3_pane_g1_ParamLimits

0x9786,	// (0x00055f56) main_mp3_pane_g2_ParamLimits

0x9792,	// (0x00055f62) main_mp3_pane_g3_ParamLimits

0x9792,	// (0x00055f62) main_mp3_pane_g3

0x979e,	// (0x00055f6e) main_mp3_pane_g4_ParamLimits

0x979e,	// (0x00055f6e) main_mp3_pane_g4

0x4828,	// (0x00050ff8) main_mp3_pane_g5_ParamLimits

0x4828,	// (0x00050ff8) main_mp3_pane_g5

0x4836,	// (0x00051006) main_mp3_pane_g6_ParamLimits

0x4836,	// (0x00051006) main_mp3_pane_g6

0x4843,	// (0x00051013) main_mp3_pane_g7_ParamLimits

0x4843,	// (0x00051013) main_mp3_pane_g7

0x484f,	// (0x0005101f) main_mp3_pane_g8_ParamLimits

0x484f,	// (0x0005101f) main_mp3_pane_g8

0xf757,	// (0x0005bf27) main_mp3_pane_g_ParamLimits

0x97aa,	// (0x00055f7a) main_mp3_pane_t2

0x97ba,	// (0x00055f8a) main_mp3_pane_t3

0x4869,	// (0x00051039) main_mp3_pane_t4

0x4877,	// (0x00051047) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0005bf38) main_mp3_pane_t

0x4885,	// (0x00051055) mup_progress_pane_cp01

0x040e,	// (0x0004cbde) aid_zoom_text_secondary2

0x467b,	// (0x00050e4b) list_cale_ev2_pane

0x4683,	// (0x00050e53) scroll_pane_cp023_ParamLimits

0x98c8,	// (0x00056098) field_cale_ev2_pane_ParamLimits

0x98c8,	// (0x00056098) field_cale_ev2_pane

0x095d,	// (0x0004d12d) field_cale_ev2_pane_g1_ParamLimits

0x095d,	// (0x0004d12d) field_cale_ev2_pane_g1

0x0969,	// (0x0004d139) field_cale_ev2_pane_g2_ParamLimits

0x0969,	// (0x0004d139) field_cale_ev2_pane_g2

0x0981,	// (0x0004d151) field_cale_ev2_pane_g3_ParamLimits

0x0981,	// (0x0004d151) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0005bf59) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0005bf59) field_cale_ev2_pane_g

0x09a5,	// (0x0004d175) field_cale_ev2_pane_t1_ParamLimits

0x09a5,	// (0x0004d175) field_cale_ev2_pane_t1

0x09bc,	// (0x0004d18c) field_cale_ev2_pane_t2_ParamLimits

0x09bc,	// (0x0004d18c) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0005bf62) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0005bf62) field_cale_ev2_pane_t

0x86a5,	// (0x00054e75) main_postcard_pane_g5_ParamLimits

0x86a5,	// (0x00054e75) main_postcard_pane_g5

0x86b3,	// (0x00054e83) main_postcard_pane_g6_ParamLimits

0x86b3,	// (0x00054e83) main_postcard_pane_g6

0x6933,	// (0x00053103) camera2_autofocus_pane_cp_ParamLimits

0x6933,	// (0x00053103) camera2_autofocus_pane_cp

0x0459,	// (0x0004cc29) main_mup3_pane

0x9906,	// (0x000560d6) main_mup3_pane_g1_ParamLimits

0x9906,	// (0x000560d6) main_mup3_pane_g1

0x9927,	// (0x000560f7) main_mup3_pane_g2_ParamLimits

0x9927,	// (0x000560f7) main_mup3_pane_g2

0x99a3,	// (0x00056173) main_mup3_pane_g3_ParamLimits

0x99a3,	// (0x00056173) main_mup3_pane_g3

0x99e4,	// (0x000561b4) main_mup3_pane_g4_ParamLimits

0x99e4,	// (0x000561b4) main_mup3_pane_g4

0x9a25,	// (0x000561f5) main_mup3_pane_g5_ParamLimits

0x9a25,	// (0x000561f5) main_mup3_pane_g5

0x9a66,	// (0x00056236) main_mup3_pane_g6_ParamLimits

0x9a66,	// (0x00056236) main_mup3_pane_g6

0x488d,	// (0x0005105d) main_mup3_pane_g7_ParamLimits

0x488d,	// (0x0005105d) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0005bf72) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0005bf72) main_mup3_pane_g

0x9ad8,	// (0x000562a8) main_mup3_pane_t1_ParamLimits

0x9ad8,	// (0x000562a8) main_mup3_pane_t1

0x9b4b,	// (0x0005631b) main_mup3_pane_t2_ParamLimits

0x9b4b,	// (0x0005631b) main_mup3_pane_t2

0x9c18,	// (0x000563e8) main_mup3_pane_t4_ParamLimits

0x9c18,	// (0x000563e8) main_mup3_pane_t4

0x9c6c,	// (0x0005643c) main_mup3_pane_t5_ParamLimits

0x9c6c,	// (0x0005643c) main_mup3_pane_t5

0x9d18,	// (0x000564e8) main_mup3_pane_t6_ParamLimits

0x9d18,	// (0x000564e8) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0005bf83) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0005bf83) main_mup3_pane_t

0x9dc0,	// (0x00056590) mup3_progress_pane_ParamLimits

0x9dc0,	// (0x00056590) mup3_progress_pane

0x9e2b,	// (0x000565fb) popup_mup3_control_window_ParamLimits

0x9e2b,	// (0x000565fb) popup_mup3_control_window

0x489b,	// (0x0005106b) popup_mup3_text_window

0x9e48,	// (0x00056618) mup3_progress_pane_t1

0x9e5f,	// (0x0005662f) mup3_progress_pane_t2

0x48a3,	// (0x00051073) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0005bf90) mup3_progress_pane_t

0x48ba,	// (0x0005108a) mup_progress_pane_cp03

0x03e0,	// (0x0004cbb0) bg_tb_trans_pane_cp04

0x9e76,	// (0x00056646) mup3_volume_pane

0x9e7e,	// (0x0005664e) popup_mup3_control_window_g1

0xdf31,	// (0x0005a701) mup3_volume_pane_g1

0xdf3a,	// (0x0005a70a) mup3_volume_pane_g2

0xdf43,	// (0x0005a713) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0005bf97) mup3_volume_pane_g

0x03e0,	// (0x0004cbb0) bg_tb_trans_pane_cp03

0x48ca,	// (0x0005109a) popup_mup3_text_window_g1

0x48d2,	// (0x000510a2) popup_mup3_text_window_t1

0x233a,	// (0x0004eb0a) list_calc_item_pane_g1_ParamLimits

0x433d,	// (0x00050b0d) mup_volume_pane_cp_g1

0x9888,	// (0x00056058) main_touch_calib_pane_t3

0x989c,	// (0x0005606c) main_touch_calib_pane_t4

0x98b2,	// (0x00056082) main_touch_calib_pane_t5

0x03ea,	// (0x0004cbba) aid_cell_size_toolbar2

0x03f2,	// (0x0004cbc2) aid_popup3_width_pane

0x03fe,	// (0x0004cbce) aid_zoom_text_msg_primary

0x6906,	// (0x000530d6) vorec_t7

0x22fe,	// (0x0004eace) bg_calc_paper_pane_g1_ParamLimits

0x2316,	// (0x0004eae6) bg_calc_paper_pane_g2_ParamLimits

0x230a,	// (0x0004eada) bg_calc_paper_pane_g3_ParamLimits

0x232e,	// (0x0004eafe) bg_calc_paper_pane_g4_ParamLimits

0x2322,	// (0x0004eaf2) bg_calc_paper_pane_g5_ParamLimits

0x620c,	// (0x000529dc) bg_calc_paper_pane_g6_ParamLimits

0x621d,	// (0x000529ed) bg_calc_paper_pane_g7_ParamLimits

0x622e,	// (0x000529fe) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0005b94a) bg_calc_paper_pane_g_ParamLimits

0x623f,	// (0x00052a0f) calc_bg_paper_pane_g9_ParamLimits

0x6a24,	// (0x000531f4) image_qvga_pane_ParamLimits

0x6a24,	// (0x000531f4) image_qvga_pane

0x2227,	// (0x0004e9f7) bg_popup_sub_pane_cp04_ParamLimits

0x2f47,	// (0x0004f717) popup_mup_playback_window_g1_ParamLimits

0x2f53,	// (0x0004f723) popup_mup_playback_window_t1_ParamLimits

0x2f68,	// (0x0004f738) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0005bcd6) popup_mup_playback_window_t_ParamLimits

0x9353,	// (0x00055b23) main_mup2_pane_g3_ParamLimits

0x9353,	// (0x00055b23) main_mup2_pane_g3

0x6d2b,	// (0x000534fb) popup_toolbar_window_cp04

0x336f,	// (0x0004fb3f) popup_call2_audio_second_window_g3_ParamLimits

0x336f,	// (0x0004fb3f) popup_call2_audio_second_window_g3

0x3791,	// (0x0004ff61) popup_call2_audio_first_window_g4_ParamLimits

0x3791,	// (0x0004ff61) popup_call2_audio_first_window_g4

0x3e10,	// (0x000505e0) popup_call2_audio_in_window_g4_ParamLimits

0x3e10,	// (0x000505e0) popup_call2_audio_in_window_g4

0x87bc,	// (0x00054f8c) aid_area_sk_bg_cut_ParamLimits

0x87bc,	// (0x00054f8c) aid_area_sk_bg_cut

0x2f7d,	// (0x0004f74d) aid_area_sk_bg_cut_2_ParamLimits

0x2f7d,	// (0x0004f74d) aid_area_sk_bg_cut_2

0x96d9,	// (0x00055ea9) aid_placing_details_win

0x96e1,	// (0x00055eb1) aid_placing_details_win_2

0x473a,	// (0x00050f0a) camera2_autofocus_pane_g1_ParamLimits

0x5dee,	// (0x000525be) popup_fixed_preview_cale_window_ParamLimits

0x5dee,	// (0x000525be) popup_fixed_preview_cale_window

0x2d69,	// (0x0004f539) navi_slider_pane_g3

0x2d60,	// (0x0004f530) navi_slider_pane_g4

0x2d57,	// (0x0004f527) navi_slider_pane_g5

0x2d69,	// (0x0004f539) navi_slider_pane_g6

0x7fdc,	// (0x000547ac) navi_slider_pane_g7

0x2e7e,	// (0x0004f64e) mup_scale_pane_g3

0x2e87,	// (0x0004f657) mup_scale_pane_g4

0x2e90,	// (0x0004f660) mup_scale_pane_g5

0x8457,	// (0x00054c27) mup_scale_pane_g6

0x8460,	// (0x00054c30) mup_scale_pane_g7

0x2d69,	// (0x0004f539) cams2_slider_pane_g3

0x43bf,	// (0x00050b8f) cams2_slider_pane_g4

0x9631,	// (0x00055e01) cams2_slider_pane_g5

0x2d69,	// (0x0004f539) cams2_slider_pane_g6

0x9639,	// (0x00055e09) cams2_slider_pane_g7

0x45f8,	// (0x00050dc8) camera2_autofocus_pane_cp_g1

0x48e0,	// (0x000510b0) bg_popup_preview_window_pane_cp02_ParamLimits

0x48e0,	// (0x000510b0) bg_popup_preview_window_pane_cp02

0x48ec,	// (0x000510bc) list_fp_cale_pane_ParamLimits

0x48ec,	// (0x000510bc) list_fp_cale_pane

0x48f8,	// (0x000510c8) popup_fixed_preview_cale_window_t1_ParamLimits

0x48f8,	// (0x000510c8) popup_fixed_preview_cale_window_t1

0x9e87,	// (0x00056657) popup_fixed_preview_cale_window_t2_ParamLimits

0x9e87,	// (0x00056657) popup_fixed_preview_cale_window_t2

0x9e9c,	// (0x0005666c) popup_fixed_preview_cale_window_t3_ParamLimits

0x9e9c,	// (0x0005666c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0005bf9e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0005bf9e) popup_fixed_preview_cale_window_t

0x9eb1,	// (0x00056681) list_single_fp_cale_pane_ParamLimits

0x9eb1,	// (0x00056681) list_single_fp_cale_pane

0x4916,	// (0x000510e6) list_single_fp_cale_pane_g1_ParamLimits

0x4916,	// (0x000510e6) list_single_fp_cale_pane_g1

0x4922,	// (0x000510f2) list_single_fp_cale_pane_g2_ParamLimits

0x4922,	// (0x000510f2) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0005bfa5) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0005bfa5) list_single_fp_cale_pane_g

0x493b,	// (0x0005110b) list_single_fp_cale_pane_t1_ParamLimits

0x493b,	// (0x0005110b) list_single_fp_cale_pane_t1

0x494d,	// (0x0005111d) list_single_fp_cale_pane_t2_ParamLimits

0x494d,	// (0x0005111d) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0005bfac) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0005bfac) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x03e0,	// (0x0004cbb0) main_dialer_pane

0x9ec1,	// (0x00056691) aid_cell_size_keypad

0x9ecb,	// (0x0005669b) dialer_ne_pane

0x9ed5,	// (0x000566a5) grid_dialer_command_1_pane

0x9edd,	// (0x000566ad) grid_dialer_command_2_pane

0x9ee5,	// (0x000566b5) grid_dialer_keypad_pane

0x9ef9,	// (0x000566c9) bg_popup_call_pane_cp06_ParamLimits

0x9ef9,	// (0x000566c9) bg_popup_call_pane_cp06

0x9f05,	// (0x000566d5) dialer_ne_clear_pane_ParamLimits

0x9f05,	// (0x000566d5) dialer_ne_clear_pane

0x4980,	// (0x00051150) dialer_ne_pane_g1

0x4988,	// (0x00051158) dialer_ne_pane_t1_ParamLimits

0x4988,	// (0x00051158) dialer_ne_pane_t1

0x9f11,	// (0x000566e1) dialer_ne_pane_t2_ParamLimits

0x9f11,	// (0x000566e1) dialer_ne_pane_t2

0x9f2e,	// (0x000566fe) dialer_ne_pane_t3_ParamLimits

0x9f2e,	// (0x000566fe) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0005bfb1) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0005bfb1) dialer_ne_pane_t

0x9f52,	// (0x00056722) dialer_ne_pane_t3_copy1_ParamLimits

0x9f52,	// (0x00056722) dialer_ne_pane_t3_copy1

0x9f76,	// (0x00056746) cell_dialer_keypad_pane_ParamLimits

0x9f76,	// (0x00056746) cell_dialer_keypad_pane

0x9f8d,	// (0x0005675d) cell_dialer_command_1_pane_ParamLimits

0x9f8d,	// (0x0005675d) cell_dialer_command_1_pane

0x9fa3,	// (0x00056773) cell_dialer_command_2_pane_ParamLimits

0x9fa3,	// (0x00056773) cell_dialer_command_2_pane

0x499a,	// (0x0005116a) bg_button_pane_cp02_ParamLimits

0x499a,	// (0x0005116a) bg_button_pane_cp02

0x9fb2,	// (0x00056782) cell_dialer_keypad_pane_g1_ParamLimits

0x9fb2,	// (0x00056782) cell_dialer_keypad_pane_g1

0x499a,	// (0x0005116a) bg_button_pane_cp03_ParamLimits

0x499a,	// (0x0005116a) bg_button_pane_cp03

0x9fc6,	// (0x00056796) cell_dialer_command_1_pane_g1_ParamLimits

0x9fc6,	// (0x00056796) cell_dialer_command_1_pane_g1

0x49a6,	// (0x00051176) bg_button_pane_cp04

0x9fda,	// (0x000567aa) cell_dialer_command_2_pane_g1

0x2d46,	// (0x0004f516) bg_button_pane_cp06

0x49ae,	// (0x0005117e) dialer_ne_clear_pane_g1

0x7f1f,	// (0x000546ef) navi_pane_g2

0x7f4d,	// (0x0005471d) navi_pane_g3

0x0002,

0xf409,	// (0x0005bbd9) navi_pane_g

0x7f78,	// (0x00054748) navi_pane_mv_g2

0x7f9f,	// (0x0005476f) navi_pane_mv_g5

0x7fa7,	// (0x00054777) navi_pane_mv_t1

0x22f2,	// (0x0004eac2) main_clock2_pane

0xa010,	// (0x000567e0) main_clock2_list_pane_ParamLimits

0xa010,	// (0x000567e0) main_clock2_list_pane

0xa03a,	// (0x0005680a) main_clock2_pane_t1_ParamLimits

0xa03a,	// (0x0005680a) main_clock2_pane_t1

0xa068,	// (0x00056838) main_clock2_pane_t2_ParamLimits

0xa068,	// (0x00056838) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0005bfb8) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0005bfb8) main_clock2_pane_t

0xa0d1,	// (0x000568a1) popup_clock_analogue_window_cp03_ParamLimits

0xa0d1,	// (0x000568a1) popup_clock_analogue_window_cp03

0xa0f1,	// (0x000568c1) popup_clock_digital_window_cp02_ParamLimits

0xa0f1,	// (0x000568c1) popup_clock_digital_window_cp02

0xa162,	// (0x00056932) main_clock2_list_single_pane_ParamLimits

0xa162,	// (0x00056932) main_clock2_list_single_pane

0x2d46,	// (0x0004f516) list_highlight_pane_cp05

0x49b6,	// (0x00051186) main_clock2_list_single_pane_t1

0x6d2b,	// (0x000534fb) popup_toolbar_window_cp04_ParamLimits

0x9745,	// (0x00055f15) camera2_autofocus_pane_g2_ParamLimits

0x9745,	// (0x00055f15) camera2_autofocus_pane_g2

0x9751,	// (0x00055f21) camera2_autofocus_pane_g3_ParamLimits

0x9751,	// (0x00055f21) camera2_autofocus_pane_g3

0x975d,	// (0x00055f2d) camera2_autofocus_pane_g4_ParamLimits

0x975d,	// (0x00055f2d) camera2_autofocus_pane_g4

0x9769,	// (0x00055f39) camera2_autofocus_pane_g5_ParamLimits

0x9769,	// (0x00055f39) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0005bf01) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0005bf01) camera2_autofocus_pane_g

0x98e6,	// (0x000560b6) camera2_autofocus_pane_cp_g2

0x98ee,	// (0x000560be) camera2_autofocus_pane_cp_g3

0x98f6,	// (0x000560c6) camera2_autofocus_pane_cp_g4

0x98fe,	// (0x000560ce) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0005bf67) camera2_autofocus_pane_cp_g

0x9ef1,	// (0x000566c1) popup_dialer_spcha_window

0x03e0,	// (0x0004cbb0) bg_popup_sub_pane_cp07

0x49c4,	// (0x00051194) list_spcha_pane

0x49cc,	// (0x0005119c) list_single_spcha_pane_ParamLimits

0x49cc,	// (0x0005119c) list_single_spcha_pane

0x03e0,	// (0x0004cbb0) list_highlight_pane_cp06

0x49dd,	// (0x000511ad) list_single_spcha_pane_t1

0x3bba,	// (0x0005038a) popup_call2_audio_out_window_g4_ParamLimits

0x3bba,	// (0x0005038a) popup_call2_audio_out_window_g4

0x03e0,	// (0x0004cbb0) main_imed2_pane

0x41a1,	// (0x00050971) popup_imed_adjust2_window

0x8def,	// (0x000555bf) popup_imed_trans_window_ParamLimits

0x8def,	// (0x000555bf) popup_imed_trans_window

0x4428,	// (0x00050bf8) popup_blid_sat_info2_window_t1

0x4436,	// (0x00050c06) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0005be96) popup_blid_sat_info2_window_t

0xa20c,	// (0x000569dc) aid_size_cell_colour_35

0xa226,	// (0x000569f6) aid_size_cell_colour_112

0xa23d,	// (0x00056a0d) aid_size_cell_effect

0x0459,	// (0x0004cc29) bg_tb_trans_pane_cp02

0x32bb,	// (0x0004fa8b) heading_imed_pane

0xa257,	// (0x00056a27) listscroll_imed_pane

0x49eb,	// (0x000511bb) heading_imed_pane_g1

0x49f3,	// (0x000511c3) heading_imed_pane_t1

0x4a01,	// (0x000511d1) grid_imed_colour_35_pane_ParamLimits

0x4a01,	// (0x000511d1) grid_imed_colour_35_pane

0xa263,	// (0x00056a33) grid_imed_effect_pane

0x4a1d,	// (0x000511ed) list_imed_aspect_pane

0xa273,	// (0x00056a43) scroll_pane_cp027_ParamLimits

0xa273,	// (0x00056a43) scroll_pane_cp027

0xa27f,	// (0x00056a4f) cell_imed_effect_pane_ParamLimits

0xa27f,	// (0x00056a4f) cell_imed_effect_pane

0x4a25,	// (0x000511f5) cell_imed_colour_pane_ParamLimits

0x4a25,	// (0x000511f5) cell_imed_colour_pane

0x4a6f,	// (0x0005123f) cell_imed_colour_pane_g1_ParamLimits

0x4a6f,	// (0x0005123f) cell_imed_colour_pane_g1

0x4a80,	// (0x00051250) hgihlgiht_grid_pane_cp016_ParamLimits

0x4a80,	// (0x00051250) hgihlgiht_grid_pane_cp016

0xa29b,	// (0x00056a6b) cell_imed_effect_pane_g1

0xa2a3,	// (0x00056a73) grid_highlight_pane_cp017

0x4a91,	// (0x00051261) list_imed_single_pane_ParamLimits

0x4a91,	// (0x00051261) list_imed_single_pane

0x03e0,	// (0x0004cbb0) list_highlight_pane_cp07

0x4aa5,	// (0x00051275) list_imed_aspect_pane_comp1_t1

0x4175,	// (0x00050945) bg_tb_trans_pane_cp05

0x4ac7,	// (0x00051297) popup_imed_adjust2_window_g1

0x4aee,	// (0x000512be) popup_imed_adjust2_window_t1

0x4b06,	// (0x000512d6) slider_imed_adjust_pane

0x4b1a,	// (0x000512ea) slider_imed_adjust_pane_g1

0x4b2a,	// (0x000512fa) slider_imed_adjust_pane_g2

0x4b3a,	// (0x0005130a) slider_imed_adjust_pane_g3

0x4b4b,	// (0x0005131b) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0005bfd5) slider_imed_adjust_pane_g

0xa2ac,	// (0x00056a7c) aid_size_cell_clipart2

0xa2b8,	// (0x00056a88) grid_imed_clipart_pane

0x4b5c,	// (0x0005132c) scroll_pane_cp031

0xa2c2,	// (0x00056a92) cell_imed_clipart_pane_ParamLimits

0xa2c2,	// (0x00056a92) cell_imed_clipart_pane

0xa2e0,	// (0x00056ab0) cell_imed_clipart_pane_g1

0x03e0,	// (0x0004cbb0) grid_highlight_pane_cp014

0xa01c,	// (0x000567ec) main_clock2_pane_g1_ParamLimits

0xa01c,	// (0x000567ec) main_clock2_pane_g1

0xa10d,	// (0x000568dd) aid_call2_pane_cp10

0xa11f,	// (0x000568ef) aid_call_pane_cp10

0x2c7b,	// (0x0004f44b) popup_clock_analogue_window_cp10_g1

0x2c7b,	// (0x0004f44b) popup_clock_analogue_window_cp10_g2

0xa131,	// (0x00056901) popup_clock_analogue_window_cp10_g3

0xa131,	// (0x00056901) popup_clock_analogue_window_cp10_g4

0x2c7b,	// (0x0004f44b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0005bfc3) popup_clock_analogue_window_cp10_g

0xa143,	// (0x00056913) popup_clock_analogue_window_cp10_t1

0xa174,	// (0x00056944) clock_digital_number_pane_cp10_ParamLimits

0xa174,	// (0x00056944) clock_digital_number_pane_cp10

0xa18c,	// (0x0005695c) clock_digital_number_pane_cp11_ParamLimits

0xa18c,	// (0x0005695c) clock_digital_number_pane_cp11

0xa1a4,	// (0x00056974) clock_digital_number_pane_cp12_ParamLimits

0xa1a4,	// (0x00056974) clock_digital_number_pane_cp12

0xa1bc,	// (0x0005698c) clock_digital_number_pane_cp13_ParamLimits

0xa1bc,	// (0x0005698c) clock_digital_number_pane_cp13

0xa1d4,	// (0x000569a4) clock_digital_separator_pane_cp10_ParamLimits

0xa1d4,	// (0x000569a4) clock_digital_separator_pane_cp10

0xa1ec,	// (0x000569bc) popup_clock_digital_window_cp02_t1_ParamLimits

0xa1ec,	// (0x000569bc) popup_clock_digital_window_cp02_t1

0x221f,	// (0x0004e9ef) clock_digital_number_pane_cp10_g1

0x221f,	// (0x0004e9ef) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0005bfde) clock_digital_number_pane_cp10_g

0x221f,	// (0x0004e9ef) clock_digital_separator_pane_cp10_g1

0x221f,	// (0x0004e9ef) clock_digital_separator_pane_g2_cp10

0x2d16,	// (0x0004f4e6) navi_pane_vded_g4

0x2d1f,	// (0x0004f4ef) navi_pane_vded_g5

0x2d28,	// (0x0004f4f8) navi_pane_vded_t1

0x03e0,	// (0x0004cbb0) main_vded_pane

0xa2e9,	// (0x00056ab9) main_vded_pane_g1

0xa2f5,	// (0x00056ac5) main_vded_pane_g2

0xa2ff,	// (0x00056acf) main_vded_pane_g3

0x0002,

0xf813,	// (0x0005bfe3) main_vded_pane_g

0xa309,	// (0x00056ad9) main_vded_pane_t1

0xa317,	// (0x00056ae7) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0005bfea) main_vded_pane_t

0xa325,	// (0x00056af5) vded_slider_pane

0xa32f,	// (0x00056aff) vded_video_pane

0x4b64,	// (0x00051334) vded_video_pane_g1

0xa33b,	// (0x00056b0b) vded_video_pane_g2

0x45f8,	// (0x00050dc8) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0005bfef) vded_video_pane_g

0x4b6e,	// (0x0005133e) vded_slider_pane_g1

0x433d,	// (0x00050b0d) vded_slider_pane_g2

0x4b77,	// (0x00051347) vded_slider_pane_g3

0x4b80,	// (0x00051350) vded_slider_pane_g4

0x4b89,	// (0x00051359) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0005bff6) vded_slider_pane_g

0x9e1f,	// (0x000565ef) mup3_rocker_pane_ParamLimits

0x9e1f,	// (0x000565ef) mup3_rocker_pane

0xa344,	// (0x00056b14) mup3_control_keys_pane_g1

0xa34c,	// (0x00056b1c) mup3_control_keys_pane_g2

0xa354,	// (0x00056b24) mup3_control_keys_pane_g3

0xa35c,	// (0x00056b2c) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0005c001) mup3_control_keys_pane_g

0x5e0c,	// (0x000525dc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5e0c,	// (0x000525dc) popup_toolbar2_fixed_window_cp01

0x9e3b,	// (0x0005660b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9e3b,	// (0x0005660b) popup_toolbar2_fixed_window_cp02

0x34e1,	// (0x0004fcb1) popup_call2_audio_second_window_t4_ParamLimits

0x34e1,	// (0x0004fcb1) popup_call2_audio_second_window_t4

0x3a27,	// (0x000501f7) popup_call2_audio_first_window_t6_ParamLimits

0x3a27,	// (0x000501f7) popup_call2_audio_first_window_t6

0x3cbd,	// (0x0005048d) popup_call2_audio_out_window_t6_ParamLimits

0x3cbd,	// (0x0005048d) popup_call2_audio_out_window_t6

0x03e0,	// (0x0004cbb0) main_vitu_pane

0xa36c,	// (0x00056b3c) aid_size_cell_itu_ParamLimits

0xa36c,	// (0x00056b3c) aid_size_cell_itu

0x0ca1,	// (0x0004d471) bg_popup_window_pane_cp08_ParamLimits

0x0ca1,	// (0x0004d471) bg_popup_window_pane_cp08

0xa37a,	// (0x00056b4a) field_vitu_entry_pane_ParamLimits

0xa37a,	// (0x00056b4a) field_vitu_entry_pane

0xa389,	// (0x00056b59) grid_vitu_function_pane_ParamLimits

0xa389,	// (0x00056b59) grid_vitu_function_pane

0xa399,	// (0x00056b69) grid_vitu_itu_pane_ParamLimits

0xa399,	// (0x00056b69) grid_vitu_itu_pane

0xa3a9,	// (0x00056b79) cell_vitu_itu_pane_ParamLimits

0xa3a9,	// (0x00056b79) cell_vitu_itu_pane

0xa3c0,	// (0x00056b90) cell_vitu_function_pane_ParamLimits

0xa3c0,	// (0x00056b90) cell_vitu_function_pane

0x0459,	// (0x0004cc29) bg_popup_sub_pane_cp08_ParamLimits

0x0459,	// (0x0004cc29) bg_popup_sub_pane_cp08

0xa3d4,	// (0x00056ba4) field_vitu_entry_pane_t1_ParamLimits

0xa3d4,	// (0x00056ba4) field_vitu_entry_pane_t1

0x4baa,	// (0x0005137a) field_vitu_entry_pane_t2_ParamLimits

0x4baa,	// (0x0005137a) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0005c00f) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0005c00f) field_vitu_entry_pane_t

0x4bc7,	// (0x00051397) bg_button_pane_cp05_ParamLimits

0x4bc7,	// (0x00051397) bg_button_pane_cp05

0xa3ee,	// (0x00056bbe) cell_vitu_itu_pane_g1

0xa406,	// (0x00056bd6) cell_vitu_itu_pane_t1_ParamLimits

0xa406,	// (0x00056bd6) cell_vitu_itu_pane_t1

0xa418,	// (0x00056be8) cell_vitu_itu_pane_t2_ParamLimits

0xa418,	// (0x00056be8) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0005c014) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0005c014) cell_vitu_itu_pane_t

0x4bd5,	// (0x000513a5) bg_button_pane_cp07

0xa44d,	// (0x00056c1d) cell_vitu_function_pane_g1

0x60a8,	// (0x00052878) main_calc_pane_g1

0x5c0d,	// (0x000523dd) aid_visual_content_pane

0x03e0,	// (0x0004cbb0) main_vradio_pane

0xa456,	// (0x00056c26) main_vradio_pane_g1_ParamLimits

0xa456,	// (0x00056c26) main_vradio_pane_g1

0x4bdf,	// (0x000513af) main_vradio_pane_g2_ParamLimits

0x4bdf,	// (0x000513af) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0005c01b) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0005c01b) main_vradio_pane_g

0xa464,	// (0x00056c34) main_vradio_pane_t1_ParamLimits

0xa464,	// (0x00056c34) main_vradio_pane_t1

0xa476,	// (0x00056c46) main_vradio_pane_t2_ParamLimits

0xa476,	// (0x00056c46) main_vradio_pane_t2

0x4bec,	// (0x000513bc) main_vradio_pane_t3_ParamLimits

0x4bec,	// (0x000513bc) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0005c020) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0005c020) main_vradio_pane_t

0xa488,	// (0x00056c58) vradio_rocker_control_pane_ParamLimits

0xa488,	// (0x00056c58) vradio_rocker_control_pane

0xa494,	// (0x00056c64) vradio_station_info_pane_ParamLimits

0xa494,	// (0x00056c64) vradio_station_info_pane

0x4c00,	// (0x000513d0) vradio_frequency_info_pane_ParamLimits

0x4c00,	// (0x000513d0) vradio_frequency_info_pane

0x45f8,	// (0x00050dc8) vradio_station_info_pane_g1

0x4c0f,	// (0x000513df) vradio_station_info_pane_t1_ParamLimits

0x4c0f,	// (0x000513df) vradio_station_info_pane_t1

0x4c31,	// (0x00051401) vradio_station_info_pane_t2_ParamLimits

0x4c31,	// (0x00051401) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0005c027) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0005c027) vradio_station_info_pane_t

0x4c43,	// (0x00051413) vradio_tuning_pane

0x4c4b,	// (0x0005141b) vradio_rocker_control_pane_g1

0x4c53,	// (0x00051423) vradio_rocker_control_pane_g2

0x4c5b,	// (0x0005142b) vradio_rocker_control_pane_g3

0x4c63,	// (0x00051433) vradio_rocker_control_pane_g4

0x4c6b,	// (0x0005143b) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0005c02c) vradio_rocker_control_pane_g

0xa4a1,	// (0x00056c71) vradio_frequency_info_pane_g1

0x4c73,	// (0x00051443) vradio_frequency_info_pane_t1_ParamLimits

0x4c73,	// (0x00051443) vradio_frequency_info_pane_t1

0xa4ab,	// (0x00056c7b) vradio_tuning_pane_g1

0xa4b6,	// (0x00056c86) vradio_tuning_pane_t1

0x0416,	// (0x0004cbe6) area_side_right_pane_ParamLimits

0x0416,	// (0x0004cbe6) area_side_right_pane

0x413c,	// (0x0005090c) status_small_pane_g1

0x4144,	// (0x00050914) status_small_pane_g2

0x414d,	// (0x0005091d) status_small_pane_g3

0x4156,	// (0x00050926) status_small_pane_g4

0x0003,

0xf61c,	// (0x0005bdec) status_small_pane_g

0x415f,	// (0x0005092f) status_small_pane_t1

0x03e0,	// (0x0004cbb0) main_video3_pane

0x4c87,	// (0x00051457) cams_zoom_vslider_pane

0x4c8f,	// (0x0005145f) image3_wide_pane_ParamLimits

0x4c8f,	// (0x0005145f) image3_wide_pane

0x4ca9,	// (0x00051479) image3_wide_small_pane

0x4cb5,	// (0x00051485) main_video3_pane_g1_ParamLimits

0x4cb5,	// (0x00051485) main_video3_pane_g1

0x4cd1,	// (0x000514a1) main_video3_pane_g2_ParamLimits

0x4cd1,	// (0x000514a1) main_video3_pane_g2

0x0001,

0xf867,	// (0x0005c037) main_video3_pane_g_ParamLimits

0xf867,	// (0x0005c037) main_video3_pane_g

0x4ced,	// (0x000514bd) main_video3_pane_t1_ParamLimits

0x4ced,	// (0x000514bd) main_video3_pane_t1

0x4d18,	// (0x000514e8) main_video3_pane_t2_ParamLimits

0x4d18,	// (0x000514e8) main_video3_pane_t2

0x4d45,	// (0x00051515) main_video3_pane_t3_ParamLimits

0x4d45,	// (0x00051515) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0005c03c) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0005c03c) main_video3_pane_t

0x4d72,	// (0x00051542) cams_zoom_vslider_pane_g1

0x4d7b,	// (0x0005154b) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0005c043) cams_zoom_vslider_pane_g

0x4d83,	// (0x00051553) small_slider_vertical_pane

0x45f8,	// (0x00050dc8) small_slider_vertical_pane_g1

0x45f8,	// (0x00050dc8) small_slider_vertical_pane_g2

0x4d8b,	// (0x0005155b) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0005c048) small_slider_vertical_pane_g

0x03e0,	// (0x0004cbb0) main_hwr_training_pane

0x4d94,	// (0x00051564) hwr_training_instruct_pane_ParamLimits

0x4d94,	// (0x00051564) hwr_training_instruct_pane

0xa4c5,	// (0x00056c95) hwr_training_navi_pane_ParamLimits

0xa4c5,	// (0x00056c95) hwr_training_navi_pane

0xa4df,	// (0x00056caf) hwr_training_write_pane_ParamLimits

0xa4df,	// (0x00056caf) hwr_training_write_pane

0x03e0,	// (0x0004cbb0) bg_frame_shadow_pane

0x4dcb,	// (0x0005159b) hwr_training_write_pane_g1

0x4dd3,	// (0x000515a3) hwr_training_write_pane_g2

0x4ddb,	// (0x000515ab) hwr_training_write_pane_g3

0x4de3,	// (0x000515b3) hwr_training_write_pane_g4

0x4deb,	// (0x000515bb) hwr_training_write_pane_g5

0x4df3,	// (0x000515c3) hwr_training_write_pane_g6

0x4dfb,	// (0x000515cb) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0005c04f) hwr_training_write_pane_g

0xa517,	// (0x00056ce7) hwr_training_navi_pane_g1_ParamLimits

0xa517,	// (0x00056ce7) hwr_training_navi_pane_g1

0xa529,	// (0x00056cf9) hwr_training_navi_pane_g2_ParamLimits

0xa529,	// (0x00056cf9) hwr_training_navi_pane_g2

0xa53b,	// (0x00056d0b) hwr_training_navi_pane_g3_ParamLimits

0xa53b,	// (0x00056d0b) hwr_training_navi_pane_g3

0xa54b,	// (0x00056d1b) hwr_training_navi_pane_g4_ParamLimits

0xa54b,	// (0x00056d1b) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0005c05e) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0005c05e) hwr_training_navi_pane_g

0xa565,	// (0x00056d35) hwr_training_navi_pane_t1

0xa573,	// (0x00056d43) list_single_hwr_training_instruct_pane_ParamLimits

0xa573,	// (0x00056d43) list_single_hwr_training_instruct_pane

0x4e03,	// (0x000515d3) list_single_hwr_training_instruct_pane_t1

0x4538,	// (0x00050d08) bg_frame_shadow_pane_g1

0x4e12,	// (0x000515e2) bg_frame_shadow_pane_g2

0x4e1a,	// (0x000515ea) bg_frame_shadow_pane_g3

0x4e22,	// (0x000515f2) bg_frame_shadow_pane_g4

0x4e2a,	// (0x000515fa) bg_frame_shadow_pane_g5

0x4e32,	// (0x00051602) bg_frame_shadow_pane_g6

0x4e3a,	// (0x0005160a) bg_frame_shadow_pane_g7

0x23bd,	// (0x0004eb8d) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0005c069) bg_frame_shadow_pane_g

0x03e0,	// (0x0004cbb0) main_video_tele_dialer_pane

0xa592,	// (0x00056d62) aid_size_cell_video_keypad_ParamLimits

0xa592,	// (0x00056d62) aid_size_cell_video_keypad

0xa5a2,	// (0x00056d72) grid_video_dialer_keypad_pane_ParamLimits

0xa5a2,	// (0x00056d72) grid_video_dialer_keypad_pane

0xa5d6,	// (0x00056da6) video_down_pane_cp_ParamLimits

0xa5d6,	// (0x00056da6) video_down_pane_cp

0xa600,	// (0x00056dd0) cell_video_dialer_keypad_pane_ParamLimits

0xa600,	// (0x00056dd0) cell_video_dialer_keypad_pane

0x4e42,	// (0x00051612) bg_button_pane_cp08_ParamLimits

0x4e42,	// (0x00051612) bg_button_pane_cp08

0xa617,	// (0x00056de7) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa617,	// (0x00056de7) cell_video_dialer_keypad_pane_g1

0x9e13,	// (0x000565e3) mup3_rocker2_pane_ParamLimits

0x9e13,	// (0x000565e3) mup3_rocker2_pane

0x45f8,	// (0x00050dc8) mup3_rocker2_pane_g1

0x8d71,	// (0x00055541) main_dialer2_pane

0x03e0,	// (0x0004cbb0) main_mp4_pane

0xa65a,	// (0x00056e2a) main_mp4_pane_g1_ParamLimits

0xa65a,	// (0x00056e2a) main_mp4_pane_g1

0xa668,	// (0x00056e38) main_mp4_pane_g2_ParamLimits

0xa668,	// (0x00056e38) main_mp4_pane_g2

0xa676,	// (0x00056e46) main_mp4_pane_g3_ParamLimits

0xa676,	// (0x00056e46) main_mp4_pane_g3

0xa6c9,	// (0x00056e99) main_mp4_pane_g4_ParamLimits

0xa6c9,	// (0x00056e99) main_mp4_pane_g4

0xa6e3,	// (0x00056eb3) main_mp4_pane_g5_ParamLimits

0xa6e3,	// (0x00056eb3) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0005c089) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0005c089) main_mp4_pane_g

0xa717,	// (0x00056ee7) main_mp4_pane_t1_ParamLimits

0xa717,	// (0x00056ee7) main_mp4_pane_t1

0xa773,	// (0x00056f43) main_mp4_pane_t2_ParamLimits

0xa773,	// (0x00056f43) main_mp4_pane_t2

0xdf4c,	// (0x0005a71c) main_mp4_pane_t3_ParamLimits

0xdf4c,	// (0x0005a71c) main_mp4_pane_t3

0xa7c5,	// (0x00056f95) main_mp4_pane_t4_ParamLimits

0xa7c5,	// (0x00056f95) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0005c096) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0005c096) main_mp4_pane_t

0xa805,	// (0x00056fd5) mp4_progress_pane_ParamLimits

0xa805,	// (0x00056fd5) mp4_progress_pane

0xa84f,	// (0x0005701f) mp4_rocker_pane_ParamLimits

0xa84f,	// (0x0005701f) mp4_rocker_pane

0xdf74,	// (0x0005a744) mp4_progress_pane_t1

0xdf8d,	// (0x0005a75d) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0005c09f) mp4_progress_pane_t

0xdfa6,	// (0x0005a776) mup_progress_pane_cp04

0xdfb2,	// (0x0005a782) mp4_rocker_pane_g1

0xa871,	// (0x00057041) aid_cell_size_keypad2_ParamLimits

0xa871,	// (0x00057041) aid_cell_size_keypad2

0xa881,	// (0x00057051) dialer2_ne_pane_ParamLimits

0xa881,	// (0x00057051) dialer2_ne_pane

0xa88d,	// (0x0005705d) grid_dialer2_keypad_pane_ParamLimits

0xa88d,	// (0x0005705d) grid_dialer2_keypad_pane

0xdfbc,	// (0x0005a78c) bg_popup_call_pane_cp07_ParamLimits

0xdfbc,	// (0x0005a78c) bg_popup_call_pane_cp07

0xa89b,	// (0x0005706b) dialer2_ne_pane_t1_ParamLimits

0xa89b,	// (0x0005706b) dialer2_ne_pane_t1

0xa8c0,	// (0x00057090) cell_dialer2_keypad_pane_ParamLimits

0xa8c0,	// (0x00057090) cell_dialer2_keypad_pane

0xdfdc,	// (0x0005a7ac) bg_button_pane_pane_cp04_ParamLimits

0xdfdc,	// (0x0005a7ac) bg_button_pane_pane_cp04

0xa8d7,	// (0x000570a7) cell_dialer2_keypad_pane_g1_ParamLimits

0xa8d7,	// (0x000570a7) cell_dialer2_keypad_pane_g1

0x6bfd,	// (0x000533cd) aid_placing_vt_set_content_ParamLimits

0x6bfd,	// (0x000533cd) aid_placing_vt_set_content

0x6c25,	// (0x000533f5) aid_placing_vt_set_title_ParamLimits

0x6c25,	// (0x000533f5) aid_placing_vt_set_title

0x03e0,	// (0x0004cbb0) main_image3_pane

0xa971,	// (0x00057141) area_side_right_pane_cp01_ParamLimits

0xa971,	// (0x00057141) area_side_right_pane_cp01

0xa9a0,	// (0x00057170) main_image3_pane_g1_ParamLimits

0xa9a0,	// (0x00057170) main_image3_pane_g1

0xa9ae,	// (0x0005717e) main_image3_pane_g2_ParamLimits

0xa9ae,	// (0x0005717e) main_image3_pane_g2

0xa9c7,	// (0x00057197) main_image3_pane_g3_ParamLimits

0xa9c7,	// (0x00057197) main_image3_pane_g3

0xa9e0,	// (0x000571b0) main_image3_pane_g4_ParamLimits

0xa9e0,	// (0x000571b0) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0005c0ae) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0005c0ae) main_image3_pane_g

0xa9f9,	// (0x000571c9) main_image3_pane_t1_ParamLimits

0xa9f9,	// (0x000571c9) main_image3_pane_t1

0xaa1e,	// (0x000571ee) main_image3_pane_t2_ParamLimits

0xaa1e,	// (0x000571ee) main_image3_pane_t2

0xaa3d,	// (0x0005720d) main_image3_pane_t3_ParamLimits

0xaa3d,	// (0x0005720d) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0005c0b7) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0005c0b7) main_image3_pane_t

0x0ca1,	// (0x0004d471) grid_sctrl_middle_pane_cp01_ParamLimits

0x0ca1,	// (0x0004d471) grid_sctrl_middle_pane_cp01

0xaa9e,	// (0x0005726e) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa9e,	// (0x0005726e) cell_sctrl_middle_pane_cp01

0xaaaf,	// (0x0005727f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaaaf,	// (0x0005727f) cell_sctrl_middle_pane_cp01_g1

0x03e0,	// (0x0004cbb0) main_call4_pane

0xaabc,	// (0x0005728c) aid_size_button_call4_ParamLimits

0xaabc,	// (0x0005728c) aid_size_button_call4

0xaaee,	// (0x000572be) call4_windows_pane_ParamLimits

0xaaee,	// (0x000572be) call4_windows_pane

0xab0a,	// (0x000572da) grid_call4_button_pane_ParamLimits

0xab0a,	// (0x000572da) grid_call4_button_pane

0xdfe8,	// (0x0005a7b8) call4_windows_conf_pane

0xe003,	// (0x0005a7d3) popup_call4_audio_first_window_ParamLimits

0xe003,	// (0x0005a7d3) popup_call4_audio_first_window

0xe051,	// (0x0005a821) popup_call4_audio_second_window_ParamLimits

0xe051,	// (0x0005a821) popup_call4_audio_second_window

0xe067,	// (0x0005a837) popup_call4_audio_wait_window_ParamLimits

0xe067,	// (0x0005a837) popup_call4_audio_wait_window

0xab2e,	// (0x000572fe) cell_call4_button_pane_ParamLimits

0xab2e,	// (0x000572fe) cell_call4_button_pane

0xab51,	// (0x00057321) bg_button_pane_cp09_ParamLimits

0xab51,	// (0x00057321) bg_button_pane_cp09

0xab5d,	// (0x0005732d) cell_call4_button_pane_g1_ParamLimits

0xab5d,	// (0x0005732d) cell_call4_button_pane_g1

0xab6a,	// (0x0005733a) cell_call4_button_pane_t1_ParamLimits

0xab6a,	// (0x0005733a) cell_call4_button_pane_t1

0xe0af,	// (0x0005a87f) popup_call4_audio_conf_window_ParamLimits

0xe0af,	// (0x0005a87f) popup_call4_audio_conf_window

0x9e48,	// (0x00056618) mup3_progress_pane_t1_ParamLimits

0x9e5f,	// (0x0005662f) mup3_progress_pane_t2_ParamLimits

0x48a3,	// (0x00051073) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0005bf90) mup3_progress_pane_t_ParamLimits

0x48ba,	// (0x0005108a) mup_progress_pane_cp03_ParamLimits

0xa364,	// (0x00056b34) mup3_control_keys_pane_g4_copy1

0xa833,	// (0x00057003) mp4_rocker2_pane_ParamLimits

0xa833,	// (0x00057003) mp4_rocker2_pane

0xe0c9,	// (0x0005a899) mp4_rocker2_pane_g1

0xe0d1,	// (0x0005a8a1) mp4_rocker2_pane_g2

0xab7c,	// (0x0005734c) mp4_rocker2_pane_g3

0xab84,	// (0x00057354) mp4_rocker2_pane_g4

0xab8c,	// (0x0005735c) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0005c0c0) mp4_rocker2_pane_g

0x03e0,	// (0x0004cbb0) main_camera4_pane

0x03e0,	// (0x0004cbb0) main_video4_pane

0xa5b2,	// (0x00056d82) main_video_tele_dialer_pane_t1_ParamLimits

0xa5b2,	// (0x00056d82) main_video_tele_dialer_pane_t1

0xa5c4,	// (0x00056d94) main_video_tele_dialer_pane_t2_ParamLimits

0xa5c4,	// (0x00056d94) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0005c07a) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0005c07a) main_video_tele_dialer_pane_t

0xabac,	// (0x0005737c) cam4_autofocus_pane_ParamLimits

0xabac,	// (0x0005737c) cam4_autofocus_pane

0xabc4,	// (0x00057394) cam4_image_uncrop_pane_ParamLimits

0xabc4,	// (0x00057394) cam4_image_uncrop_pane

0xabdd,	// (0x000573ad) cam4_indicators_pane_ParamLimits

0xabdd,	// (0x000573ad) cam4_indicators_pane

0xabf9,	// (0x000573c9) main_camera4_pane_g1_ParamLimits

0xabf9,	// (0x000573c9) main_camera4_pane_g1

0xac05,	// (0x000573d5) main_camera4_pane_g2_ParamLimits

0xac05,	// (0x000573d5) main_camera4_pane_g2

0xac05,	// (0x000573d5) main_camera4_pane_g3_ParamLimits

0xac05,	// (0x000573d5) main_camera4_pane_g3

0xac11,	// (0x000573e1) main_camera4_pane_g4_ParamLimits

0xac11,	// (0x000573e1) main_camera4_pane_g4

0xac1d,	// (0x000573ed) main_camera4_pane_g5_ParamLimits

0xac1d,	// (0x000573ed) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0005c0cb) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0005c0cb) main_camera4_pane_g

0xac37,	// (0x00057407) main_camera4_pane_t1_ParamLimits

0xac37,	// (0x00057407) main_camera4_pane_t1

0xac81,	// (0x00057451) bg_tb_trans_pane_cp06

0xac97,	// (0x00057467) cam4_indicators_pane_g1

0xaca4,	// (0x00057474) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0005c0e6) cam4_indicators_pane_g

0xacc4,	// (0x00057494) cam4_indicators_pane_t1

0xacee,	// (0x000574be) main_video4_pane_g1_ParamLimits

0xacee,	// (0x000574be) main_video4_pane_g1

0xacfa,	// (0x000574ca) main_video4_pane_g2_ParamLimits

0xacfa,	// (0x000574ca) main_video4_pane_g2

0xad06,	// (0x000574d6) main_video4_pane_g3_ParamLimits

0xad06,	// (0x000574d6) main_video4_pane_g3

0xad12,	// (0x000574e2) main_video4_pane_g4_ParamLimits

0xad12,	// (0x000574e2) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0005c0ed) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0005c0ed) main_video4_pane_g

0xad34,	// (0x00057504) vid4_indicators_pane_ParamLimits

0xad34,	// (0x00057504) vid4_indicators_pane

0xad52,	// (0x00057522) video4_image_uncrop_cif_pane_ParamLimits

0xad52,	// (0x00057522) video4_image_uncrop_cif_pane

0xad61,	// (0x00057531) video4_image_uncrop_nhd_pane_ParamLimits

0xad61,	// (0x00057531) video4_image_uncrop_nhd_pane

0xabc4,	// (0x00057394) video4_image_uncrop_vga_pane_ParamLimits

0xabc4,	// (0x00057394) video4_image_uncrop_vga_pane

0xad70,	// (0x00057540) bg_tb_trans_pane_cp07

0xac97,	// (0x00057467) vid4_indicators_pane_g1

0xad88,	// (0x00057558) vid4_indicators_pane_g2

0xad95,	// (0x00057565) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0005c0f8) vid4_indicators_pane_g

0xadc2,	// (0x00057592) vid4_indicators_pane_t1

0xaddc,	// (0x000575ac) cam4_autofocus_pane_g1

0xade4,	// (0x000575b4) cam4_autofocus_pane_g2

0xadec,	// (0x000575bc) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0005c103) cam4_autofocus_pane_g

0xadf4,	// (0x000575c4) cam4_autofocus_pane_g3_copy1

0xa5e4,	// (0x00056db4) video_down_pane_cp_t1

0xa5f2,	// (0x00056dc2) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0005c07f) video_down_pane_cp_t

0x0ca1,	// (0x0004d471) popup_vitu2_window_ParamLimits

0x0ca1,	// (0x0004d471) popup_vitu2_window

0xadfc,	// (0x000575cc) aid_size_cell2_itu2_ParamLimits

0xadfc,	// (0x000575cc) aid_size_cell2_itu2

0xae1e,	// (0x000575ee) aid_size_cell_itu2_ParamLimits

0xae1e,	// (0x000575ee) aid_size_cell_itu2

0xae62,	// (0x00057632) bg_popup_window_pane_cp09_ParamLimits

0xae62,	// (0x00057632) bg_popup_window_pane_cp09

0xae70,	// (0x00057640) field_vitu2_entry_pane_ParamLimits

0xae70,	// (0x00057640) field_vitu2_entry_pane

0xae90,	// (0x00057660) grid_vitu2_function_pane_ParamLimits

0xae90,	// (0x00057660) grid_vitu2_function_pane

0xaed4,	// (0x000576a4) grid_vitu2_itu_pane_ParamLimits

0xaed4,	// (0x000576a4) grid_vitu2_itu_pane

0xaf48,	// (0x00057718) cell_vitu2_itu_pane_ParamLimits

0xaf48,	// (0x00057718) cell_vitu2_itu_pane

0xaf5f,	// (0x0005772f) cell_vitu2_function_pane_ParamLimits

0xaf5f,	// (0x0005772f) cell_vitu2_function_pane

0xe0d9,	// (0x0005a8a9) bg_popup_call_pane_cp08_ParamLimits

0xe0d9,	// (0x0005a8a9) bg_popup_call_pane_cp08

0xe0f2,	// (0x0005a8c2) field_vitu2_entry_pane_g1

0xe0fe,	// (0x0005a8ce) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0005c10a) field_vitu2_entry_pane_g

0x0cb9,	// (0x0004d489) field_vitu2_entry_pane_t1_ParamLimits

0x0cb9,	// (0x0004d489) field_vitu2_entry_pane_t1

0x0cd6,	// (0x0004d4a6) field_vitu2_entry_pane_t2_ParamLimits

0x0cd6,	// (0x0004d4a6) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0005c111) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0005c111) field_vitu2_entry_pane_t

0xafa3,	// (0x00057773) bg_button_pane_cp010_ParamLimits

0xafa3,	// (0x00057773) bg_button_pane_cp010

0xafb1,	// (0x00057781) cell_vitu2_itu_pane_g1

0xafcf,	// (0x0005779f) cell_vitu2_itu_pane_t1_ParamLimits

0xafcf,	// (0x0005779f) cell_vitu2_itu_pane_t1

0x5b12,	// (0x000522e2) cell_vitu2_itu_pane_t2_ParamLimits

0x5b12,	// (0x000522e2) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0005c11b) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0005c11b) cell_vitu2_itu_pane_t

0xad70,	// (0x00057540) bg_button_pane_cp011

0xb021,	// (0x000577f1) cell_vitu2_function_pane_g1

0x03e0,	// (0x0004cbb0) main_myfav_hc_pane

0xaa7f,	// (0x0005724f) popup_image3_note_pane_ParamLimits

0xaa7f,	// (0x0005724f) popup_image3_note_pane

0xaa8d,	// (0x0005725d) popup_image3_tool_bar_pane_ParamLimits

0xaa8d,	// (0x0005725d) popup_image3_tool_bar_pane

0x5b80,	// (0x00052350) cell_vitu2_itu_pane_t3_ParamLimits

0x5b80,	// (0x00052350) cell_vitu2_itu_pane_t3

0x03e0,	// (0x0004cbb0) bg_popup_trans_pane

0xe120,	// (0x0005a8f0) grid_image3_tool_bar_pane

0xe12a,	// (0x0005a8fa) bg_popup_trans_pane_g1

0x26fc,	// (0x0004eecc) bg_popup_trans_pane_g2

0xe132,	// (0x0005a902) bg_popup_trans_pane_g3

0xe13a,	// (0x0005a90a) bg_popup_trans_pane_g4

0xe142,	// (0x0005a912) bg_popup_trans_pane_g5

0xe14a,	// (0x0005a91a) bg_popup_trans_pane_g6

0xe152,	// (0x0005a922) bg_popup_trans_pane_g7

0xe15a,	// (0x0005a92a) bg_popup_trans_pane_g8

0x26dc,	// (0x0004eeac) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0005c122) bg_popup_trans_pane_g

0xe162,	// (0x0005a932) cell_image3_tool_bar_pane_ParamLimits

0xe162,	// (0x0005a932) cell_image3_tool_bar_pane

0x45f8,	// (0x00050dc8) cell_image3_tool_bar_pane_g1

0x03e0,	// (0x0004cbb0) bg_popup_trans_pane_cp1

0xe178,	// (0x0005a948) popup_image3_note_pane_t1

0xe186,	// (0x0005a956) popup_image3_note_pane_t2

0xe194,	// (0x0005a964) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0005c135) popup_image3_note_pane_t

0xe1a4,	// (0x0005a974) popup_image3_note_pane_t3_copy1

0xb035,	// (0x00057805) bg_myfav_hc_instruction_pane_ParamLimits

0xb035,	// (0x00057805) bg_myfav_hc_instruction_pane

0xb04d,	// (0x0005781d) cell_myfav_contact_pane_ParamLimits

0xb04d,	// (0x0005781d) cell_myfav_contact_pane

0xb067,	// (0x00057837) cell_myfav_contact_pane_cp1_ParamLimits

0xb067,	// (0x00057837) cell_myfav_contact_pane_cp1

0xb07f,	// (0x0005784f) cell_myfav_contact_pane_cp2_ParamLimits

0xb07f,	// (0x0005784f) cell_myfav_contact_pane_cp2

0xb097,	// (0x00057867) cell_myfav_contact_pane_cp3_ParamLimits

0xb097,	// (0x00057867) cell_myfav_contact_pane_cp3

0xb0ae,	// (0x0005787e) cell_myfav_contact_pane_cp4_ParamLimits

0xb0ae,	// (0x0005787e) cell_myfav_contact_pane_cp4

0xb0c4,	// (0x00057894) cell_myfav_contact_pane_cp5_ParamLimits

0xb0c4,	// (0x00057894) cell_myfav_contact_pane_cp5

0xb0d8,	// (0x000578a8) cell_myfav_contact_pane_cp6_ParamLimits

0xb0d8,	// (0x000578a8) cell_myfav_contact_pane_cp6

0xb0ec,	// (0x000578bc) cell_myfav_contact_pane_cp7_ParamLimits

0xb0ec,	// (0x000578bc) cell_myfav_contact_pane_cp7

0xe1b2,	// (0x0005a982) listscroll_gen_pane_cp05

0xb104,	// (0x000578d4) main_myfav_hc_pane_g1_ParamLimits

0xb104,	// (0x000578d4) main_myfav_hc_pane_g1

0xb11e,	// (0x000578ee) main_myfav_hc_pane_g2_ParamLimits

0xb11e,	// (0x000578ee) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0005c13c) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0005c13c) main_myfav_hc_pane_g

0xb150,	// (0x00057920) main_myfav_hc_pane_t1_ParamLimits

0xb150,	// (0x00057920) main_myfav_hc_pane_t1

0xe1bb,	// (0x0005a98b) main_myfav_hc_pane_t2_ParamLimits

0xe1bb,	// (0x0005a98b) main_myfav_hc_pane_t2

0xe1cd,	// (0x0005a99d) main_myfav_hc_pane_t3_ParamLimits

0xe1cd,	// (0x0005a99d) main_myfav_hc_pane_t3

0xb167,	// (0x00057937) main_myfav_hc_pane_t4_ParamLimits

0xb167,	// (0x00057937) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0005c143) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0005c143) main_myfav_hc_pane_t

0x45f8,	// (0x00050dc8) bg_myfav_hc_instruction_pane_g1

0xe1df,	// (0x0005a9af) cell_myfav_contact_pane_g1_ParamLimits

0xe1df,	// (0x0005a9af) cell_myfav_contact_pane_g1

0xe1df,	// (0x0005a9af) cell_myfav_contact_pane_g2_ParamLimits

0xe1df,	// (0x0005a9af) cell_myfav_contact_pane_g2

0xe1eb,	// (0x0005a9bb) cell_myfav_contact_pane_g3_ParamLimits

0xe1eb,	// (0x0005a9bb) cell_myfav_contact_pane_g3

0x488d,	// (0x0005105d) cell_myfav_contact_pane_g4_ParamLimits

0x488d,	// (0x0005105d) cell_myfav_contact_pane_g4

0xe1f8,	// (0x0005a9c8) cell_myfav_contact_pane_g5_ParamLimits

0xe1f8,	// (0x0005a9c8) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0005c14e) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0005c14e) cell_myfav_contact_pane_g

0xb138,	// (0x00057908) main_myfav_hc_pane_g3_ParamLimits

0xb138,	// (0x00057908) main_myfav_hc_pane_g3

0x5d4f,	// (0x0005251f) popup_adpt_find_window

0xb191,	// (0x00057961) afind_page_pane_ParamLimits

0xb191,	// (0x00057961) afind_page_pane

0xb19e,	// (0x0005796e) aid_size_cell_afind_ParamLimits

0xb19e,	// (0x0005796e) aid_size_cell_afind

0xb1b8,	// (0x00057988) bg_popup_sub_pane_cp09_ParamLimits

0xb1b8,	// (0x00057988) bg_popup_sub_pane_cp09

0xb1c5,	// (0x00057995) find_pane_cp01_ParamLimits

0xb1c5,	// (0x00057995) find_pane_cp01

0xe204,	// (0x0005a9d4) grid_afind_control_pane_ParamLimits

0xe204,	// (0x0005a9d4) grid_afind_control_pane

0xb1d2,	// (0x000579a2) grid_afind_pane_ParamLimits

0xb1d2,	// (0x000579a2) grid_afind_pane

0xb1ee,	// (0x000579be) cell_afind_pane_ParamLimits

0xb1ee,	// (0x000579be) cell_afind_pane

0x45f8,	// (0x00050dc8) afind_page_pane_g1

0xb23a,	// (0x00057a0a) afind_page_pane_g2

0xb243,	// (0x00057a13) afind_page_pane_g3

0x0002,

0xf989,	// (0x0005c159) afind_page_pane_g

0xb24c,	// (0x00057a1c) afind_page_pane_t1

0xe218,	// (0x0005a9e8) cell_afind_grid_control_pane_ParamLimits

0xe218,	// (0x0005a9e8) cell_afind_grid_control_pane

0xdfdc,	// (0x0005a7ac) bg_button_pane_cp69_ParamLimits

0xdfdc,	// (0x0005a7ac) bg_button_pane_cp69

0xb26c,	// (0x00057a3c) cell_afind_pane_g1_ParamLimits

0xb26c,	// (0x00057a3c) cell_afind_pane_g1

0xb279,	// (0x00057a49) cell_afind_pane_t1_ParamLimits

0xb279,	// (0x00057a49) cell_afind_pane_t1

0x24f3,	// (0x0004ecc3) bg_button_pane_cp72

0xe227,	// (0x0005a9f7) cell_afind_grid_control_pane_g1

0x88e9,	// (0x000550b9) aid_image_placing_area_ParamLimits

0x88e9,	// (0x000550b9) aid_image_placing_area

0x4b92,	// (0x00051362) field_vitu_entry_pane_g1_ParamLimits

0x4b92,	// (0x00051362) field_vitu_entry_pane_g1

0x4b9e,	// (0x0005136e) field_vitu_entry_pane_g2_ParamLimits

0x4b9e,	// (0x0005136e) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0005c00a) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0005c00a) field_vitu_entry_pane_g

0xa3ee,	// (0x00056bbe) cell_vitu_itu_pane_g1_ParamLimits

0xa430,	// (0x00056c00) cell_vitu_itu_pane_t3_ParamLimits

0xa430,	// (0x00056c00) cell_vitu_itu_pane_t3

0xdf74,	// (0x0005a744) mp4_progress_pane_t1_ParamLimits

0xdf8d,	// (0x0005a75d) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0005c09f) mp4_progress_pane_t_ParamLimits

0xdfa6,	// (0x0005a776) mup_progress_pane_cp04_ParamLimits

0xb17b,	// (0x0005794b) main_myfav_hc_pane_t5_ParamLimits

0xb17b,	// (0x0005794b) main_myfav_hc_pane_t5

0x0406,	// (0x0004cbd6) aid_zoom_text_primary

0x5d4f,	// (0x0005251f) popup_adpt_find_window_ParamLimits

0x0459,	// (0x0004cc29) main_cam_set_pane

0xabeb,	// (0x000573bb) cam4_zoom_pane_ParamLimits

0xabeb,	// (0x000573bb) cam4_zoom_pane

0xb28b,	// (0x00057a5b) main_cam_set_pane_g1_ParamLimits

0xb28b,	// (0x00057a5b) main_cam_set_pane_g1

0xb299,	// (0x00057a69) main_cam_set_pane_g2_ParamLimits

0xb299,	// (0x00057a69) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0005c160) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0005c160) main_cam_set_pane_g

0xb2a5,	// (0x00057a75) main_cam_set_pane_t1_ParamLimits

0xb2a5,	// (0x00057a75) main_cam_set_pane_t1

0xb2c1,	// (0x00057a91) main_cset_listscroll_pane_ParamLimits

0xb2c1,	// (0x00057a91) main_cset_listscroll_pane

0xb2f0,	// (0x00057ac0) main_cset_slider_pane_ParamLimits

0xb2f0,	// (0x00057ac0) main_cset_slider_pane

0xe238,	// (0x0005aa08) main_cset_list_pane_ParamLimits

0xe238,	// (0x0005aa08) main_cset_list_pane

0xe248,	// (0x0005aa18) scroll_pane_cp028

0xb311,	// (0x00057ae1) aid_area_touch_slider

0xb32d,	// (0x00057afd) cset_slider_pane

0xb357,	// (0x00057b27) main_cset_slider_pane_g1

0xb36c,	// (0x00057b3c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0005c165) main_cset_slider_pane_g

0xe281,	// (0x0005aa51) main_cset_slider_pane_t1

0xb428,	// (0x00057bf8) main_cset_slider_pane_t2

0xb442,	// (0x00057c12) main_cset_slider_pane_t3

0xb45c,	// (0x00057c2c) main_cset_slider_pane_t4

0xb476,	// (0x00057c46) main_cset_slider_pane_t5

0xb492,	// (0x00057c62) main_cset_slider_pane_t6

0xb4a7,	// (0x00057c77) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0005c18a) main_cset_slider_pane_t

0xb5ab,	// (0x00057d7b) cset_list_set_pane_ParamLimits

0xb5ab,	// (0x00057d7b) cset_list_set_pane

0xb5bc,	// (0x00057d8c) aid_position_infowindow_above

0xb5c4,	// (0x00057d94) aid_position_infowindow_below

0x0cf3,	// (0x0004d4c3) cset_list_set_pane_g1_ParamLimits

0x0cf3,	// (0x0004d4c3) cset_list_set_pane_g1

0x0f3a,	// (0x0004d70a) cset_list_set_pane_g3_ParamLimits

0x0f3a,	// (0x0004d70a) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0005c1a9) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0005c1a9) cset_list_set_pane_g

0x0cff,	// (0x0004d4cf) cset_list_set_pane_t1_ParamLimits

0x0cff,	// (0x0004d4cf) cset_list_set_pane_t1

0x0459,	// (0x0004cc29) list_highlight_pane_cp021_ParamLimits

0x0459,	// (0x0004cc29) list_highlight_pane_cp021

0x2e7e,	// (0x0004f64e) cset_slider_pane_g1

0x2e90,	// (0x0004f660) cset_slider_pane_g2

0x2e87,	// (0x0004f657) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0005c1ae) cset_slider_pane_g

0xb5cc,	// (0x00057d9c) aid_area_touch_cam4_zoom

0xb5d4,	// (0x00057da4) cam4_zoom_cont_pane

0xb5dc,	// (0x00057dac) cam4_zoom_pane_g1

0xb5e4,	// (0x00057db4) cam4_zoom_pane_g2

0xb5ec,	// (0x00057dbc) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0005c1b5) cam4_zoom_pane_g

0xb5f4,	// (0x00057dc4) cam4_zoom_cont_pane_g1

0xb5fd,	// (0x00057dcd) cam4_zoom_cont_pane_g2

0xb606,	// (0x00057dd6) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0005c1bc) cam4_zoom_cont_pane_g

0xaad6,	// (0x000572a6) call4_image_pane_ParamLimits

0xaad6,	// (0x000572a6) call4_image_pane

0xdfe8,	// (0x0005a7b8) call4_windows_conf_pane_ParamLimits

0xe02f,	// (0x0005a7ff) popup_call4_audio_in_window_ParamLimits

0xe02f,	// (0x0005a7ff) popup_call4_audio_in_window

0x03e0,	// (0x0004cbb0) bg_popup_call2_act_pane_cp02

0xe0a7,	// (0x0005a877) call4_list_conf_pane

0x45f8,	// (0x00050dc8) call4_image_pane_g1

0x45f8,	// (0x00050dc8) call4_image_pane_g2

0x0001,

0xf700,	// (0x0005bed0) call4_image_pane_g

0xe321,	// (0x0005aaf1) list_single_graphic_popup_conf4_pane_ParamLimits

0xe321,	// (0x0005aaf1) list_single_graphic_popup_conf4_pane

0x03e0,	// (0x0004cbb0) list_highlight_pane_cp022

0xe336,	// (0x0005ab06) list_single_graphic_popup_conf4_pane_g1

0x2b78,	// (0x0004f348) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0005c1c3) list_single_graphic_popup_conf4_pane_g

0xe33e,	// (0x0005ab0e) list_single_graphic_popup_conf4_pane_t1

0x6d7f,	// (0x0005354f) popup_vtel_slider_window_ParamLimits

0x6d7f,	// (0x0005354f) popup_vtel_slider_window

0xdfca,	// (0x0005a79a) dialer2_ne_pane_t2_ParamLimits

0xdfca,	// (0x0005a79a) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0005c0a4) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0005c0a4) dialer2_ne_pane_t

0x0459,	// (0x0004cc29) bg_popup_sub_pane_cp010_ParamLimits

0x0459,	// (0x0004cc29) bg_popup_sub_pane_cp010

0xb60f,	// (0x00057ddf) popup_vtel_slider_window_g1_ParamLimits

0xb60f,	// (0x00057ddf) popup_vtel_slider_window_g1

0xb61b,	// (0x00057deb) popup_vtel_slider_window_g2_ParamLimits

0xb61b,	// (0x00057deb) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0005c1c8) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0005c1c8) popup_vtel_slider_window_g

0xb663,	// (0x00057e33) vtel_slider_pane_ParamLimits

0xb663,	// (0x00057e33) vtel_slider_pane

0xb672,	// (0x00057e42) vtel_slider_pane_g1_ParamLimits

0xb672,	// (0x00057e42) vtel_slider_pane_g1

0xb67f,	// (0x00057e4f) vtel_slider_pane_g2_ParamLimits

0xb67f,	// (0x00057e4f) vtel_slider_pane_g2

0xb68c,	// (0x00057e5c) vtel_slider_pane_g3_ParamLimits

0xb68c,	// (0x00057e5c) vtel_slider_pane_g3

0xb672,	// (0x00057e42) vtel_slider_pane_g4_ParamLimits

0xb672,	// (0x00057e42) vtel_slider_pane_g4

0xb699,	// (0x00057e69) vtel_slider_pane_g5_ParamLimits

0xb699,	// (0x00057e69) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0005c1d1) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0005c1d1) vtel_slider_pane_g

0x03e0,	// (0x0004cbb0) main_gallery2_pane

0xae44,	// (0x00057614) aid_size_row_itut2_dropdow_list_ParamLimits

0xae44,	// (0x00057614) aid_size_row_itut2_dropdow_list

0xaeb2,	// (0x00057682) grid_vitu2_function_top_pane_ParamLimits

0xaeb2,	// (0x00057682) grid_vitu2_function_top_pane

0xaf04,	// (0x000576d4) popup_vitu2_dropdown_list_window_ParamLimits

0xaf04,	// (0x000576d4) popup_vitu2_dropdown_list_window

0xaf24,	// (0x000576f4) popup_vitu2_match_list_window

0xb6a6,	// (0x00057e76) cell_vitu2_function_top_pane_ParamLimits

0xb6a6,	// (0x00057e76) cell_vitu2_function_top_pane

0xb6c6,	// (0x00057e96) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb6c6,	// (0x00057e96) cell_vitu2_function_top_pane_cp01

0xb6e4,	// (0x00057eb4) cell_vitu2_function_top_wide_pane_ParamLimits

0xb6e4,	// (0x00057eb4) cell_vitu2_function_top_wide_pane

0xad70,	// (0x00057540) bg_button_pane_cp012

0xb702,	// (0x00057ed2) cell_vitu2_function_top_pane_g1

0xb711,	// (0x00057ee1) bg_button_pane_cp013_ParamLimits

0xb711,	// (0x00057ee1) bg_button_pane_cp013

0xb72d,	// (0x00057efd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb72d,	// (0x00057efd) cell_vitu2_function_top_wide_pane_g1

0xb745,	// (0x00057f15) bg_popup_sub_pane_cp20

0xb753,	// (0x00057f23) list_vitu2_match_list_pane

0xe12a,	// (0x0005a8fa) bg_popup_sub_pane_cp20_g1

0xe132,	// (0x0005a902) bg_popup_sub_pane_cp20_g2

0x26fc,	// (0x0004eecc) bg_popup_sub_pane_cp20_g3

0xe13a,	// (0x0005a90a) bg_popup_sub_pane_cp20_g4

0x26dc,	// (0x0004eeac) bg_popup_sub_pane_cp20_g5

0xe354,	// (0x0005ab24) bg_popup_sub_pane_cp20_g6

0xe14a,	// (0x0005a91a) bg_popup_sub_pane_cp20_g7

0xe152,	// (0x0005a922) bg_popup_sub_pane_cp20_g8

0xe15a,	// (0x0005a92a) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0005c1dc) bg_popup_sub_pane_cp20_g

0xb76b,	// (0x00057f3b) list_vitu2_match_list_item_pane_ParamLimits

0xb76b,	// (0x00057f3b) list_vitu2_match_list_item_pane

0xb77d,	// (0x00057f4d) list_vitu2_match_list_item_pane_t1

0x617d,	// (0x0005294d) bg_popup_sub_pane_cp21

0xb7b7,	// (0x00057f87) grid_vitu2_dropdown_list_pane

0xb7bf,	// (0x00057f8f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb7bf,	// (0x00057f8f) cell_vitu2_dropdown_list_char_pane

0xb7e4,	// (0x00057fb4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7e4,	// (0x00057fb4) cell_vitu2_dropdown_list_ctrl_pane

0xe35c,	// (0x0005ab2c) cell_vitu2_dropdown_list_char_pane_g1

0xe365,	// (0x0005ab35) cell_vitu2_dropdown_list_char_pane_g2

0xe36e,	// (0x0005ab3e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0005c1f9) cell_vitu2_dropdown_list_char_pane_g

0xb812,	// (0x00057fe2) cell_vitu2_dropdown_list_char_pane_t1

0xb820,	// (0x00057ff0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb820,	// (0x00057ff0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb830,	// (0x00058000) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb830,	// (0x00058000) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb841,	// (0x00058011) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb841,	// (0x00058011) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb851,	// (0x00058021) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb851,	// (0x00058021) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac81,	// (0x00057451) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac81,	// (0x00057451) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0005c200) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0005c200) cell_vitu2_dropdown_list_ctrl_pane_g

0xb86a,	// (0x0005803a) aid_size_cell_gallery2_ParamLimits

0xb86a,	// (0x0005803a) aid_size_cell_gallery2

0xb878,	// (0x00058048) grid_gallery2_pane_ParamLimits

0xb878,	// (0x00058048) grid_gallery2_pane

0xb887,	// (0x00058057) scroll_pane_cp029_ParamLimits

0xb887,	// (0x00058057) scroll_pane_cp029

0xb893,	// (0x00058063) cell_gallery2_pane_ParamLimits

0xb893,	// (0x00058063) cell_gallery2_pane

0xe377,	// (0x0005ab47) cell_gallery2_pane_g2

0xb8bd,	// (0x0005808d) cell_gallery2_pane_g3

0xe381,	// (0x0005ab51) cell_gallery2_pane_g4

0xe389,	// (0x0005ab59) cell_gallery2_pane_g5

0x2d46,	// (0x0004f516) grid_highlight_pane_cp10

0xaf24,	// (0x000576f4) popup_vitu2_match_list_window_ParamLimits

0xaf38,	// (0x00057708) popup_vitu2_query_window_ParamLimits

0xaf38,	// (0x00057708) popup_vitu2_query_window

0x617d,	// (0x0005294d) bg_vitu2_candi_button_pane

0xe35c,	// (0x0005ab2c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe365,	// (0x0005ab35) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe36e,	// (0x0005ab3e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb8c5,	// (0x00058095) bg_button_pane_cp015

0xb8d7,	// (0x000580a7) bg_button_pane_cp016

0xb8ea,	// (0x000580ba) bg_button_pane_cp017

0x4175,	// (0x00050945) bg_popup_sub_pane_cp22

0xe391,	// (0x0005ab61) popup_vitu2_query_window_g1

0xb92f,	// (0x000580ff) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0005c20b) popup_vitu2_query_window_g

0xb94c,	// (0x0005811c) popup_vitu2_query_window_t1_ParamLimits

0xb94c,	// (0x0005811c) popup_vitu2_query_window_t1

0xb97f,	// (0x0005814f) popup_vitu2_query_window_t2_ParamLimits

0xb97f,	// (0x0005814f) popup_vitu2_query_window_t2

0xb991,	// (0x00058161) popup_vitu2_query_window_t3_ParamLimits

0xb991,	// (0x00058161) popup_vitu2_query_window_t3

0xb9b9,	// (0x00058189) popup_vitu2_query_window_t4_ParamLimits

0xb9b9,	// (0x00058189) popup_vitu2_query_window_t4

0xb9dc,	// (0x000581ac) popup_vitu2_query_window_t5_ParamLimits

0xb9dc,	// (0x000581ac) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0005c212) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0005c212) popup_vitu2_query_window_t

0xe230,	// (0x0005aa00) main_cset_text_pane

0xb311,	// (0x00057ae1) aid_area_touch_slider_ParamLimits

0xb32d,	// (0x00057afd) cset_slider_pane_ParamLimits

0xb357,	// (0x00057b27) main_cset_slider_pane_g1_ParamLimits

0xb36c,	// (0x00057b3c) main_cset_slider_pane_g2_ParamLimits

0xe251,	// (0x0005aa21) main_cset_slider_pane_g3_ParamLimits

0xe251,	// (0x0005aa21) main_cset_slider_pane_g3

0xb381,	// (0x00057b51) main_cset_slider_pane_g4_ParamLimits

0xb381,	// (0x00057b51) main_cset_slider_pane_g4

0xb390,	// (0x00057b60) main_cset_slider_pane_g5_ParamLimits

0xb390,	// (0x00057b60) main_cset_slider_pane_g5

0xb39c,	// (0x00057b6c) main_cset_slider_pane_g6_ParamLimits

0xb39c,	// (0x00057b6c) main_cset_slider_pane_g6

0xf995,	// (0x0005c165) main_cset_slider_pane_g_ParamLimits

0xe281,	// (0x0005aa51) main_cset_slider_pane_t1_ParamLimits

0xb428,	// (0x00057bf8) main_cset_slider_pane_t2_ParamLimits

0xb442,	// (0x00057c12) main_cset_slider_pane_t3_ParamLimits

0xb45c,	// (0x00057c2c) main_cset_slider_pane_t4_ParamLimits

0xb476,	// (0x00057c46) main_cset_slider_pane_t5_ParamLimits

0xb492,	// (0x00057c62) main_cset_slider_pane_t6_ParamLimits

0xb4a7,	// (0x00057c77) main_cset_slider_pane_t7_ParamLimits

0xb4d1,	// (0x00057ca1) main_cset_slider_pane_t8_ParamLimits

0xb4d1,	// (0x00057ca1) main_cset_slider_pane_t8

0xb4f9,	// (0x00057cc9) main_cset_slider_pane_t9_ParamLimits

0xb4f9,	// (0x00057cc9) main_cset_slider_pane_t9

0xb521,	// (0x00057cf1) main_cset_slider_pane_t10_ParamLimits

0xb521,	// (0x00057cf1) main_cset_slider_pane_t10

0xb549,	// (0x00057d19) main_cset_slider_pane_t11_ParamLimits

0xb549,	// (0x00057d19) main_cset_slider_pane_t11

0xb571,	// (0x00057d41) main_cset_slider_pane_t12_ParamLimits

0xb571,	// (0x00057d41) main_cset_slider_pane_t12

0xb58e,	// (0x00057d5e) main_cset_slider_pane_t13_ParamLimits

0xb58e,	// (0x00057d5e) main_cset_slider_pane_t13

0xf9ba,	// (0x0005c18a) main_cset_slider_pane_t_ParamLimits

0x03e0,	// (0x0004cbb0) bg_popup_sub_pane_cp011

0xe39d,	// (0x0005ab6d) main_cset_text_pane_g1

0xe3a5,	// (0x0005ab75) main_cset_text_pane_t1

0xe3b3,	// (0x0005ab83) main_cset_text_pane_t2

0xe3c1,	// (0x0005ab91) main_cset_text_pane_t3

0xe3cf,	// (0x0005ab9f) main_cset_text_pane_t4

0xe3dd,	// (0x0005abad) main_cset_text_pane_t5

0xe3eb,	// (0x0005abbb) main_cset_text_pane_t6

0xe3f9,	// (0x0005abc9) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0005c221) main_cset_text_pane_t

0x03e0,	// (0x0004cbb0) main_cam4_burst_pane

0x03e0,	// (0x0004cbb0) main_cam5_pane

0xb25a,	// (0x00057a2a) bg_button_pane_cp019

0xb263,	// (0x00057a33) bg_button_pane_cp020

0xe25d,	// (0x0005aa2d) main_cset_slider_pane_g7_ParamLimits

0xe25d,	// (0x0005aa2d) main_cset_slider_pane_g7

0xe269,	// (0x0005aa39) main_cset_slider_pane_g8_ParamLimits

0xe269,	// (0x0005aa39) main_cset_slider_pane_g8

0xb3b0,	// (0x00057b80) main_cset_slider_pane_g9_ParamLimits

0xb3b0,	// (0x00057b80) main_cset_slider_pane_g9

0xb3bc,	// (0x00057b8c) main_cset_slider_pane_g10_ParamLimits

0xb3bc,	// (0x00057b8c) main_cset_slider_pane_g10

0xb3c8,	// (0x00057b98) main_cset_slider_pane_g11_ParamLimits

0xb3c8,	// (0x00057b98) main_cset_slider_pane_g11

0xb3d4,	// (0x00057ba4) main_cset_slider_pane_g12_ParamLimits

0xb3d4,	// (0x00057ba4) main_cset_slider_pane_g12

0xb3e0,	// (0x00057bb0) main_cset_slider_pane_g13_ParamLimits

0xb3e0,	// (0x00057bb0) main_cset_slider_pane_g13

0xb3ec,	// (0x00057bbc) main_cset_slider_pane_g14_ParamLimits

0xb3ec,	// (0x00057bbc) main_cset_slider_pane_g14

0xb3f8,	// (0x00057bc8) main_cset_slider_pane_g15_ParamLimits

0xb3f8,	// (0x00057bc8) main_cset_slider_pane_g15

0xe2af,	// (0x0005aa7f) main_cset_slider_pane_t14_ParamLimits

0xe2af,	// (0x0005aa7f) main_cset_slider_pane_t14

0xe2e8,	// (0x0005aab8) main_cset_slider_pane_t15_ParamLimits

0xe2e8,	// (0x0005aab8) main_cset_slider_pane_t15

0xba55,	// (0x00058225) aid_cam4_burst_size_cell_ParamLimits

0xba55,	// (0x00058225) aid_cam4_burst_size_cell

0xba71,	// (0x00058241) grid_cam4_burst_pane_ParamLimits

0xba71,	// (0x00058241) grid_cam4_burst_pane

0xbaa3,	// (0x00058273) linegrid_cam4_burst_pane_ParamLimits

0xbaa3,	// (0x00058273) linegrid_cam4_burst_pane

0xbac3,	// (0x00058293) scroll_pane_cp30_ParamLimits

0xbac3,	// (0x00058293) scroll_pane_cp30

0xbacf,	// (0x0005829f) cell_cam4_burst_pane_ParamLimits

0xbacf,	// (0x0005829f) cell_cam4_burst_pane

0xe407,	// (0x0005abd7) linegrid_cam4_burst_pane_g1_ParamLimits

0xe407,	// (0x0005abd7) linegrid_cam4_burst_pane_g1

0xbb0f,	// (0x000582df) linegrid_cam4_burst_pane_g2_ParamLimits

0xbb0f,	// (0x000582df) linegrid_cam4_burst_pane_g2

0xe414,	// (0x0005abe4) linegrid_cam4_burst_pane_g3_ParamLimits

0xe414,	// (0x0005abe4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0005c230) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0005c230) linegrid_cam4_burst_pane_g

0xbb20,	// (0x000582f0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbb20,	// (0x000582f0) linegrid_cam4_burst_pane_g3_copy1

0xe421,	// (0x0005abf1) linegrid_cam4_burst_pane_g4_ParamLimits

0xe421,	// (0x0005abf1) linegrid_cam4_burst_pane_g4

0xbb3a,	// (0x0005830a) linegrid_cam4_burst_pane_g5_ParamLimits

0xbb3a,	// (0x0005830a) linegrid_cam4_burst_pane_g5

0xbb4b,	// (0x0005831b) linegrid_cam4_burst_pane_g6_ParamLimits

0xbb4b,	// (0x0005831b) linegrid_cam4_burst_pane_g6

0xe42e,	// (0x0005abfe) linegrid_cam4_burst_pane_g7_ParamLimits

0xe42e,	// (0x0005abfe) linegrid_cam4_burst_pane_g7

0xbb62,	// (0x00058332) cell_cam4_burst_pane_g1

0xe447,	// (0x0005ac17) main_cam5_pane_t1_ParamLimits

0xe447,	// (0x0005ac17) main_cam5_pane_t1

0xe459,	// (0x0005ac29) main_cam5_pane_t2_ParamLimits

0xe459,	// (0x0005ac29) main_cam5_pane_t2

0xe46b,	// (0x0005ac3b) main_cam5_pane_t3_ParamLimits

0xe46b,	// (0x0005ac3b) main_cam5_pane_t3

0xe47d,	// (0x0005ac4d) main_cam5_pane_t4_ParamLimits

0xe47d,	// (0x0005ac4d) main_cam5_pane_t4

0xe495,	// (0x0005ac65) main_cam5_pane_t5_ParamLimits

0xe495,	// (0x0005ac65) main_cam5_pane_t5

0xe4a9,	// (0x0005ac79) main_cam5_pane_t6_ParamLimits

0xe4a9,	// (0x0005ac79) main_cam5_pane_t6

0xe4bd,	// (0x0005ac8d) main_cam5_pane_t7_ParamLimits

0xe4bd,	// (0x0005ac8d) main_cam5_pane_t7

0xe4cf,	// (0x0005ac9f) main_cam5_pane_t8_ParamLimits

0xe4cf,	// (0x0005ac9f) main_cam5_pane_t8

0xe4ed,	// (0x0005acbd) main_cam5_pane_t9_ParamLimits

0xe4ed,	// (0x0005acbd) main_cam5_pane_t9

0xe4ff,	// (0x0005accf) main_cam5_pane_t10_ParamLimits

0xe4ff,	// (0x0005accf) main_cam5_pane_t10

0xe511,	// (0x0005ace1) main_cam5_pane_t11_ParamLimits

0xe511,	// (0x0005ace1) main_cam5_pane_t11

0xe525,	// (0x0005acf5) main_cam5_pane_t12_ParamLimits

0xe525,	// (0x0005acf5) main_cam5_pane_t12

0xe53c,	// (0x0005ad0c) main_cam5_pane_t13_ParamLimits

0xe53c,	// (0x0005ad0c) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0005c23c) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0005c23c) main_cam5_pane_t

0x5dfd,	// (0x000525cd) popup_scut_keymap_window_ParamLimits

0x5dfd,	// (0x000525cd) popup_scut_keymap_window

0xbb75,	// (0x00058345) aid_size_cell_brow_shortcut

0x2d46,	// (0x0004f516) bg_popup_window_pane_cp010

0xbb81,	// (0x00058351) grid_scut_pane

0xbb8d,	// (0x0005835d) cell_scut_pane_ParamLimits

0xbb8d,	// (0x0005835d) cell_scut_pane

0xbba8,	// (0x00058378) cell_scut_pane_g1

0xe55f,	// (0x0005ad2f) cell_scut_pane_t1

0xe56e,	// (0x0005ad3e) cell_scut_pane_t2

0xbbb1,	// (0x00058381) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0005c257) cell_scut_pane_t

0x9a74,	// (0x00056244) main_mup3_pane_g8_ParamLimits

0x9a74,	// (0x00056244) main_mup3_pane_g8

0xae52,	// (0x00057622) area_vitu2_query_pane_ParamLimits

0xae52,	// (0x00057622) area_vitu2_query_pane

0xb8fd,	// (0x000580cd) input_focus_pane_cp08

0xe57d,	// (0x0005ad4d) area_vitu2_query_pane_g1

0xbbbf,	// (0x0005838f) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0005c25e) area_vitu2_query_pane_g

0xbbd0,	// (0x000583a0) area_vitu2_query_pane_t1_ParamLimits

0xbbd0,	// (0x000583a0) area_vitu2_query_pane_t1

0xbbe4,	// (0x000583b4) area_vitu2_query_pane_t2_ParamLimits

0xbbe4,	// (0x000583b4) area_vitu2_query_pane_t2

0xbbf8,	// (0x000583c8) area_vitu2_query_pane_t3_ParamLimits

0xbbf8,	// (0x000583c8) area_vitu2_query_pane_t3

0x0d96,	// (0x0004d566) area_vitu2_query_pane_t4_ParamLimits

0x0d96,	// (0x0004d566) area_vitu2_query_pane_t4

0x0dbe,	// (0x0004d58e) area_vitu2_query_pane_t5_ParamLimits

0x0dbe,	// (0x0004d58e) area_vitu2_query_pane_t5

0x0de6,	// (0x0004d5b6) area_vitu2_query_pane_t6_ParamLimits

0x0de6,	// (0x0004d5b6) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0005c263) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0005c263) area_vitu2_query_pane_t

0xbc20,	// (0x000583f0) bg_button_pane_cp018

0xbc2e,	// (0x000583fe) bg_button_pane_cp021

0xbc3a,	// (0x0005840a) bg_button_pane_cp022

0xbc4b,	// (0x0005841b) input_focus_pane_cp09

0x7ecb,	// (0x0005469b) aid_size_touch_mv_arrow_left

0x7ef6,	// (0x000546c6) aid_size_touch_mv_arrow_right

0xb410,	// (0x00057be0) main_cset_slider_pane_g16_ParamLimits

0xb410,	// (0x00057be0) main_cset_slider_pane_g16

0xb41c,	// (0x00057bec) main_cset_slider_pane_g17_ParamLimits

0xb41c,	// (0x00057bec) main_cset_slider_pane_g17

0xbb62,	// (0x00058332) cell_cam4_burst_pane_g1_ParamLimits

0x03e0,	// (0x0004cbb0) compa_mode_pane

0xb627,	// (0x00057df7) popup_vtel_slider_window_g3_ParamLimits

0xb627,	// (0x00057df7) popup_vtel_slider_window_g3

0xb63b,	// (0x00057e0b) popup_vtel_slider_window_g4_ParamLimits

0xb63b,	// (0x00057e0b) popup_vtel_slider_window_g4

0xb64f,	// (0x00057e1f) popup_vtel_slider_window_t1_ParamLimits

0xb64f,	// (0x00057e1f) popup_vtel_slider_window_t1

0x03e0,	// (0x0004cbb0) main_cl_pane

0x41a1,	// (0x00050971) popup_imed_adjust2_window_ParamLimits

0x4175,	// (0x00050945) bg_tb_trans_pane_cp05_ParamLimits

0x4ac7,	// (0x00051297) popup_imed_adjust2_window_g1_ParamLimits

0x4ad6,	// (0x000512a6) popup_imed_adjust2_window_g2_ParamLimits

0x4ad6,	// (0x000512a6) popup_imed_adjust2_window_g2

0x4ae2,	// (0x000512b2) popup_imed_adjust2_window_g3_ParamLimits

0x4ae2,	// (0x000512b2) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0005bfce) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0005bfce) popup_imed_adjust2_window_g

0x4aee,	// (0x000512be) popup_imed_adjust2_window_t1_ParamLimits

0x4b06,	// (0x000512d6) slider_imed_adjust_pane_ParamLimits

0x4b1a,	// (0x000512ea) slider_imed_adjust_pane_g1_ParamLimits

0x4b2a,	// (0x000512fa) slider_imed_adjust_pane_g2_ParamLimits

0x4b3a,	// (0x0005130a) slider_imed_adjust_pane_g3_ParamLimits

0x4b4b,	// (0x0005131b) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0005bfd5) slider_imed_adjust_pane_g_ParamLimits

0xab94,	// (0x00057364) aid_touch_area_cam4_ParamLimits

0xab94,	// (0x00057364) aid_touch_area_cam4

0xaba4,	// (0x00057374) battery_pane_cp01

0xac2b,	// (0x000573fb) main_camera4_pane_g6_ParamLimits

0xac2b,	// (0x000573fb) main_camera4_pane_g6

0xac49,	// (0x00057419) main_camera4_pane_t2_ParamLimits

0xac49,	// (0x00057419) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0005c0d8) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0005c0d8) main_camera4_pane_t

0xacde,	// (0x000574ae) aid_touch_area_vid4_ParamLimits

0xacde,	// (0x000574ae) aid_touch_area_vid4

0xad1e,	// (0x000574ee) main_video4_pane_g5_ParamLimits

0xad1e,	// (0x000574ee) main_video4_pane_g5

0xad42,	// (0x00057512) vid4_progress_pane_ParamLimits

0xad42,	// (0x00057512) vid4_progress_pane

0xe275,	// (0x0005aa45) main_cset_slider_pane_g18_ParamLimits

0xe275,	// (0x0005aa45) main_cset_slider_pane_g18

0xe43b,	// (0x0005ac0b) cell_cam4_burst_pane_g2_ParamLimits

0xe43b,	// (0x0005ac0b) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0005c237) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0005c237) cell_cam4_burst_pane_g

0xbc5c,	// (0x0005842c) bg_cl_pane_ParamLimits

0xbc5c,	// (0x0005842c) bg_cl_pane

0xbc68,	// (0x00058438) cl_header_pane_ParamLimits

0xbc68,	// (0x00058438) cl_header_pane

0xbc74,	// (0x00058444) cl_listscroll_pane_ParamLimits

0xbc74,	// (0x00058444) cl_listscroll_pane

0xe589,	// (0x0005ad59) bg_cl_pane_g1

0xe591,	// (0x0005ad61) bg_cl_pane_g2

0xe599,	// (0x0005ad69) bg_cl_pane_g3

0xe5a1,	// (0x0005ad71) bg_cl_pane_g4

0xe5a9,	// (0x0005ad79) bg_cl_pane_g5

0xe5b1,	// (0x0005ad81) bg_cl_pane_g6

0xe5b9,	// (0x0005ad89) bg_cl_pane_g7

0xe5c1,	// (0x0005ad91) bg_cl_pane_g8

0xe5c9,	// (0x0005ad99) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0005c272) bg_cl_pane_g

0xbc80,	// (0x00058450) aid_height_cl_leading_ParamLimits

0xbc80,	// (0x00058450) aid_height_cl_leading

0xbc8c,	// (0x0005845c) aid_height_cl_text_ParamLimits

0xbc8c,	// (0x0005845c) aid_height_cl_text

0x0ca1,	// (0x0004d471) bg_cl_header_pane_ParamLimits

0x0ca1,	// (0x0004d471) bg_cl_header_pane

0xbca4,	// (0x00058474) cl_header_pane_g1_ParamLimits

0xbca4,	// (0x00058474) cl_header_pane_g1

0xbcb1,	// (0x00058481) cl_header_pane_t1_ParamLimits

0xbcb1,	// (0x00058481) cl_header_pane_t1

0xe5d1,	// (0x0005ada1) cl_list_pane

0xe248,	// (0x0005aa18) hc_scroll_pane_cp01

0x26dc,	// (0x0004eeac) bg_cl_header_pane_g1

0xe12a,	// (0x0005a8fa) bg_cl_header_pane_g2

0x26fc,	// (0x0004eecc) bg_cl_header_pane_g3

0xe13a,	// (0x0005a90a) bg_cl_header_pane_g4

0xe132,	// (0x0005a902) bg_cl_header_pane_g5

0xe354,	// (0x0005ab24) bg_cl_header_pane_g6

0xe152,	// (0x0005a922) bg_cl_header_pane_g7

0xe15a,	// (0x0005a92a) bg_cl_header_pane_g8

0xe14a,	// (0x0005a91a) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0005c285) bg_cl_header_pane_g

0xbcc3,	// (0x00058493) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbcc3,	// (0x00058493) hc_cl_list_double_graphic_heading_pane

0x0d5e,	// (0x0004d52e) hc_cl_list_single_graphic_pane_ParamLimits

0x0d5e,	// (0x0004d52e) hc_cl_list_single_graphic_pane

0xbcd3,	// (0x000584a3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbcd3,	// (0x000584a3) hc_cl_list_single_graphic_pane_g1

0xbcdf,	// (0x000584af) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbcdf,	// (0x000584af) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0005c298) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0005c298) hc_cl_list_single_graphic_pane_g

0xbcf3,	// (0x000584c3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbcf3,	// (0x000584c3) hc_cl_list_single_graphic_pane_t1

0xbcd3,	// (0x000584a3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbcd3,	// (0x000584a3) hc_cl_list_double_graphic_heading_pane_g1

0xbd08,	// (0x000584d8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbd08,	// (0x000584d8) hc_cl_list_double_graphic_heading_pane_g2

0xbd1c,	// (0x000584ec) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbd1c,	// (0x000584ec) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0005c29d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0005c29d) hc_cl_list_double_graphic_heading_pane_g

0xbd30,	// (0x00058500) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd30,	// (0x00058500) hc_cl_list_double_graphic_heading_pane_t1

0xbd45,	// (0x00058515) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbd45,	// (0x00058515) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0005c2a4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0005c2a4) hc_cl_list_double_graphic_heading_pane_t

0xbd6c,	// (0x0005853c) vid4_progress_pane_g1

0xbd78,	// (0x00058548) vid4_progress_pane_g2

0xbd84,	// (0x00058554) vid4_progress_pane_g3

0xbd93,	// (0x00058563) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0005c2a9) vid4_progress_pane_g

0xbdb1,	// (0x00058581) vid4_progress_pane_t1

0xbdc7,	// (0x00058597) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0005c2b4) vid4_progress_pane_t

0xbdf2,	// (0x000585c2) wait_bar_pane_cp07

0x43dd,	// (0x00050bad) blid_firmament_pane_ParamLimits

0x4420,	// (0x00050bf0) popup_blid_sat_info2_window_g1

0x4444,	// (0x00050c14) popup_blid_sat_info2_window_t3

0x4452,	// (0x00050c22) popup_blid_sat_info2_window_t4

0x4460,	// (0x00050c30) popup_blid_sat_info2_window_t5

0x446e,	// (0x00050c3e) popup_blid_sat_info2_window_t6

0x447e,	// (0x00050c4e) popup_blid_sat_info2_window_t7

0x448c,	// (0x00050c5c) popup_blid_sat_info2_window_t8

0x449a,	// (0x00050c6a) popup_blid_sat_info2_window_t9

0x44a8,	// (0x00050c78) popup_blid_sat_info2_window_t10

0x4578,	// (0x00050d48) aid_firma_cardinal_ParamLimits

0x458c,	// (0x00050d5c) blid_firmament_pane_t1_ParamLimits

0x45a3,	// (0x00050d73) blid_firmament_pane_t2_ParamLimits

0x45ba,	// (0x00050d8a) blid_firmament_pane_t3_ParamLimits

0x45d1,	// (0x00050da1) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0005bec7) blid_firmament_pane_t_ParamLimits

0x45e8,	// (0x00050db8) blid_sat_info_pane_ParamLimits

0x0459,	// (0x0004cc29) main_cam_set_pane_ParamLimits

0xa20c,	// (0x000569dc) aid_size_cell_colour_35_ParamLimits

0xa226,	// (0x000569f6) aid_size_cell_colour_112_ParamLimits

0xa23d,	// (0x00056a0d) aid_size_cell_effect_ParamLimits

0x0459,	// (0x0004cc29) bg_tb_trans_pane_cp02_ParamLimits

0x32bb,	// (0x0004fa8b) heading_imed_pane_ParamLimits

0xa257,	// (0x00056a27) listscroll_imed_pane_ParamLimits

0x37a3,	// (0x0004ff73) popup_call2_audio_first_window_g5_ParamLimits

0x37a3,	// (0x0004ff73) popup_call2_audio_first_window_g5

0xa93f,	// (0x0005710f) aid_size_touch_image3_arrow_left_ParamLimits

0xa93f,	// (0x0005710f) aid_size_touch_image3_arrow_left

0xa955,	// (0x00057125) aid_size_touch_image3_arrow_right_ParamLimits

0xa955,	// (0x00057125) aid_size_touch_image3_arrow_right

0xbddd,	// (0x000585ad) vid4_progress_pane_t3

0xa4f7,	// (0x00056cc7) main_hwr_training_symbol_option_pane_ParamLimits

0xa4f7,	// (0x00056cc7) main_hwr_training_symbol_option_pane

0x4db6,	// (0x00051586) popup_hwr_training_preview_window_ParamLimits

0x4db6,	// (0x00051586) popup_hwr_training_preview_window

0xa558,	// (0x00056d28) hwr_training_navi_pane_g5_ParamLimits

0xa558,	// (0x00056d28) hwr_training_navi_pane_g5

0xe118,	// (0x0005a8e8) popup_char_count_window

0xb745,	// (0x00057f15) bg_popup_sub_pane_cp20_ParamLimits

0xb753,	// (0x00057f23) list_vitu2_match_list_pane_ParamLimits

0xb75f,	// (0x00057f2f) vitu2_page_scroll_pane_ParamLimits

0xb75f,	// (0x00057f2f) vitu2_page_scroll_pane

0xe5da,	// (0x0005adaa) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe5da,	// (0x0005adaa) list_single_hwr_training_symbol_option_pane

0xe5ed,	// (0x0005adbd) list_single_hwr_training_symbol_option_pane_g1

0xe5f5,	// (0x0005adc5) list_single_hwr_training_symbol_option_pane_t1

0xe603,	// (0x0005add3) bg_button_pane_cp023

0xe60c,	// (0x0005addc) bg_button_pane_cp024

0xbe04,	// (0x000585d4) vitu2_page_scroll_pane_g1

0xbe0c,	// (0x000585dc) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0005c2bb) vitu2_page_scroll_pane_g

0xbe16,	// (0x000585e6) vitu2_page_scroll_pane_t1

0x433d,	// (0x00050b0d) popup_char_count_window_g1

0xe63f,	// (0x0005ae0f) popup_char_count_window_g2

0xe648,	// (0x0005ae18) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0005c2c0) popup_char_count_window_g

0xe651,	// (0x0005ae21) popup_char_count_window_t1

0x03e0,	// (0x0004cbb0) main_vded2_pane

0x4ab3,	// (0x00051283) aid_size_cell_imed_line

0x4abd,	// (0x0005128d) grid_imed_line_width_pane

0xada6,	// (0x00057576) vid4_indicators_pane_g4

0xe65f,	// (0x0005ae2f) cell_imed_line_width_pane_ParamLimits

0xe65f,	// (0x0005ae2f) cell_imed_line_width_pane

0xe675,	// (0x0005ae45) cell_imed_line_width_pane_g1

0x4518,	// (0x00050ce8) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0005c2c7) cell_imed_line_width_pane_g

0xbe25,	// (0x000585f5) main_vded2_pane_g1_ParamLimits

0xbe25,	// (0x000585f5) main_vded2_pane_g1

0xbe34,	// (0x00058604) main_vded2_pane_g2_ParamLimits

0xbe34,	// (0x00058604) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0005c2cc) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0005c2cc) main_vded2_pane_g

0xbe42,	// (0x00058612) vded2_slider_pane_ParamLimits

0xbe42,	// (0x00058612) vded2_slider_pane

0xbe4f,	// (0x0005861f) aid_size_touch_vded2_end

0xbe59,	// (0x00058629) aid_size_touch_vded2_playhead

0xe67e,	// (0x0005ae4e) aid_size_touch_vded2_start

0xe686,	// (0x0005ae56) vded2_slider_bg_pane

0xe68f,	// (0x0005ae5f) vded2_slider_pane_g1

0xe698,	// (0x0005ae68) vded2_slider_pane_g2

0xbe61,	// (0x00058631) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0005c2d1) vded2_slider_pane_g

0xdf31,	// (0x0005a701) vded2_slider_bg_pane_g1

0xdf3a,	// (0x0005a70a) vded2_slider_bg_pane_g2

0xdf43,	// (0x0005a713) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x0005bf97) vded2_slider_bg_pane_g

0x8649,	// (0x00054e19) aid_postcard_touch_down_pane_ParamLimits

0x8649,	// (0x00054e19) aid_postcard_touch_down_pane

0x8659,	// (0x00054e29) aid_postcard_touch_up_pane_ParamLimits

0x8659,	// (0x00054e29) aid_postcard_touch_up_pane

0x03e0,	// (0x0004cbb0) main_blid2_pane

0x4183,	// (0x00050953) popup_blid2_search_window

0x03e0,	// (0x0004cbb0) blid2_gps_pane

0x03e0,	// (0x0004cbb0) blid2_navig_pane

0x03e0,	// (0x0004cbb0) blid2_search_pane

0x03e0,	// (0x0004cbb0) blid2_tripm_pane

0xbe6a,	// (0x0005863a) blid2_search_pane_g1_ParamLimits

0xbe6a,	// (0x0005863a) blid2_search_pane_g1

0xbe7a,	// (0x0005864a) blid2_search_pane_t1_ParamLimits

0xbe7a,	// (0x0005864a) blid2_search_pane_t1

0xbe8c,	// (0x0005865c) aid_size_cell_blid2_gps_ParamLimits

0xbe8c,	// (0x0005865c) aid_size_cell_blid2_gps

0xbe9c,	// (0x0005866c) blid2_gps_pane_g1_ParamLimits

0xbe9c,	// (0x0005866c) blid2_gps_pane_g1

0xbea8,	// (0x00058678) grid_blid2_satellite_pane_ParamLimits

0xbea8,	// (0x00058678) grid_blid2_satellite_pane

0xbeb6,	// (0x00058686) blid2_navig_pane_g1_ParamLimits

0xbeb6,	// (0x00058686) blid2_navig_pane_g1

0xbec2,	// (0x00058692) blid2_navig_pane_t1_ParamLimits

0xbec2,	// (0x00058692) blid2_navig_pane_t1

0xbed4,	// (0x000586a4) blid2_navig_pane_t2_ParamLimits

0xbed4,	// (0x000586a4) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x0005c2d8) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x0005c2d8) blid2_navig_pane_t

0xbee6,	// (0x000586b6) blid2_navig_ring_pane_ParamLimits

0xbee6,	// (0x000586b6) blid2_navig_ring_pane

0xbef6,	// (0x000586c6) blid2_speed_pane_ParamLimits

0xbef6,	// (0x000586c6) blid2_speed_pane

0xbf02,	// (0x000586d2) blid2_tripm_pane_g1_ParamLimits

0xbf02,	// (0x000586d2) blid2_tripm_pane_g1

0xbf12,	// (0x000586e2) blid2_tripm_pane_g2_ParamLimits

0xbf12,	// (0x000586e2) blid2_tripm_pane_g2

0xbf1e,	// (0x000586ee) blid2_tripm_pane_g3_ParamLimits

0xbf1e,	// (0x000586ee) blid2_tripm_pane_g3

0xbf2a,	// (0x000586fa) blid2_tripm_pane_g4_ParamLimits

0xbf2a,	// (0x000586fa) blid2_tripm_pane_g4

0xbf36,	// (0x00058706) blid2_tripm_pane_g5_ParamLimits

0xbf36,	// (0x00058706) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x0005c2dd) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x0005c2dd) blid2_tripm_pane_g

0xbf52,	// (0x00058722) blid2_tripm_pane_t1_ParamLimits

0xbf52,	// (0x00058722) blid2_tripm_pane_t1

0xbf66,	// (0x00058736) blid2_tripm_pane_t2_ParamLimits

0xbf66,	// (0x00058736) blid2_tripm_pane_t2

0xbf78,	// (0x00058748) blid2_tripm_pane_t3_ParamLimits

0xbf78,	// (0x00058748) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x0005c2ea) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x0005c2ea) blid2_tripm_pane_t

0xbfaa,	// (0x0005877a) cell_blid2_satellite_pane_ParamLimits

0xbfaa,	// (0x0005877a) cell_blid2_satellite_pane

0xbfc8,	// (0x00058798) cell_blid2_satellite_pane_g1

0xe6a0,	// (0x0005ae70) cell_blid2_satellite_pane_t1

0x45f8,	// (0x00050dc8) blid2_speed_pane_g1

0xe6ae,	// (0x0005ae7e) blid2_speed_pane_t1

0xe6bc,	// (0x0005ae8c) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x0005c2f3) blid2_speed_pane_t

0x45f8,	// (0x00050dc8) blid2_navig_ring_pane_g1

0xbfd1,	// (0x000587a1) blid2_navig_ring_pane_g2

0xbfd9,	// (0x000587a9) blid2_navig_ring_pane_g3

0xbfe1,	// (0x000587b1) blid2_navig_ring_pane_g4

0xbfe9,	// (0x000587b9) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x0005c2f8) blid2_navig_ring_pane_g

0x03e0,	// (0x0004cbb0) bg_popup_window_pane_cp011

0xe6ca,	// (0x0005ae9a) popup_blid2_search_window_g1

0xe6d2,	// (0x0005aea2) popup_blid2_search_window_t1

0xe6e0,	// (0x0005aeb0) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x0005c303) popup_blid2_search_window_t

0x25eb,	// (0x0004edbb) main_browser_pane_g1

0x22f2,	// (0x0004eac2) main_browser_pane_ParamLimits

0xad70,	// (0x00057540) bg_button_pane_cp011_ParamLimits

0xb021,	// (0x000577f1) cell_vitu2_function_pane_g1_ParamLimits

0x4175,	// (0x00050945) bg_popup_sub_pane_cp22_ParamLimits

0xb8fd,	// (0x000580cd) input_focus_pane_cp08_ParamLimits

0xb914,	// (0x000580e4) popup_vitu2_query_button_pane_ParamLimits

0xb914,	// (0x000580e4) popup_vitu2_query_button_pane

0xb925,	// (0x000580f5) popup_vitu2_query_input_button_pane

0xe391,	// (0x0005ab61) popup_vitu2_query_window_g1_ParamLimits

0xb92f,	// (0x000580ff) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0005c20b) popup_vitu2_query_window_g_ParamLimits

0x03e0,	// (0x0004cbb0) bg_button_pane_cp026

0xbff1,	// (0x000587c1) popup_vitu2_query_input_button_pane_g1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp025

0xe6ee,	// (0x0005aebe) popup_vitu2_query_button_pane_t1

0x97ca,	// (0x00055f9a) main_mp3_pane_t6

0x97da,	// (0x00055faa) popup_slider_window_cp01

0xac8f,	// (0x0005745f) cam4_battery_pane

0xad7e,	// (0x0005754e) cam4_battery_pane_cp02

0xbd5a,	// (0x0005852a) cam4_battery_pane_cp01

0xbd64,	// (0x00058534) cam4_battery_pane_cp03

0xdfb2,	// (0x0005a782) cam4_battery_pane_g1

0x45f8,	// (0x00050dc8) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x0005c308) cam4_battery_pane_g

0x44b6,	// (0x00050c86) popup_blid_sat_info2_window_t11

0x7ecb,	// (0x0005469b) aid_size_touch_mv_arrow_left_ParamLimits

0x7ef6,	// (0x000546c6) aid_size_touch_mv_arrow_right_ParamLimits

0x2ca6,	// (0x0004f476) navi_pane_g1_ParamLimits

0x7f1f,	// (0x000546ef) navi_pane_g2_ParamLimits

0x7f4d,	// (0x0005471d) navi_pane_g3_ParamLimits

0xf409,	// (0x0005bbd9) navi_pane_g_ParamLimits

0x7fa7,	// (0x00054777) navi_pane_mv_t1_ParamLimits

0xa263,	// (0x00056a33) grid_imed_effect_pane_ParamLimits

0x6c47,	// (0x00053417) aid_placing_vt_slider_lsc

0x2538,	// (0x0004ed08) aid_placing_vt_slider_prt

0x0459,	// (0x0004cc29) bg_tb_trans_pane_cp01_ParamLimits

0x4748,	// (0x00050f18) popup_image_details_window_g1_ParamLimits

0x475b,	// (0x00050f2b) popup_image_details_window_g2_ParamLimits

0x4770,	// (0x00050f40) popup_image_details_window_g3_ParamLimits

0x4770,	// (0x00050f40) popup_image_details_window_g3

0xf73c,	// (0x0005bf0c) popup_image_details_window_g_ParamLimits

0x4784,	// (0x00050f54) popup_image_details_window_t1_ParamLimits

0x4796,	// (0x00050f66) popup_image_details_window_t2_ParamLimits

0x47af,	// (0x00050f7f) popup_image_details_window_t3_ParamLimits

0x47c3,	// (0x00050f93) popup_image_details_window_t4_ParamLimits

0x47de,	// (0x00050fae) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0005bf13) popup_image_details_window_t_ParamLimits

0xbc98,	// (0x00058468) cl_header_name_pane_ParamLimits

0xbc98,	// (0x00058468) cl_header_name_pane

0xbff9,	// (0x000587c9) cl_header_name_pane_t1_ParamLimits

0xbff9,	// (0x000587c9) cl_header_name_pane_t1

0xc010,	// (0x000587e0) cl_header_name_pane_t2_ParamLimits

0xc010,	// (0x000587e0) cl_header_name_pane_t2

0xc03a,	// (0x0005880a) cl_header_name_pane_t3_ParamLimits

0xc03a,	// (0x0005880a) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x0005c30d) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x0005c30d) cl_header_name_pane_t

0x7f78,	// (0x00054748) navi_pane_mv_g2_ParamLimits

0xe0f2,	// (0x0005a8c2) field_vitu2_entry_pane_g1_ParamLimits

0xe0fe,	// (0x0005a8ce) field_vitu2_entry_pane_g2_ParamLimits

0xe10a,	// (0x0005a8da) field_vitu2_entry_pane_g3_ParamLimits

0xe10a,	// (0x0005a8da) field_vitu2_entry_pane_g3

0xf93a,	// (0x0005c10a) field_vitu2_entry_pane_g_ParamLimits

0xafb1,	// (0x00057781) cell_vitu2_itu_pane_g1_ParamLimits

0xafc1,	// (0x00057791) cell_vitu2_itu_pane_g2_ParamLimits

0xafc1,	// (0x00057791) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0005c116) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0005c116) cell_vitu2_itu_pane_g

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp05_ParamLimits

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp05

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp03

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp04

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp10_ParamLimits

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp10

0xbc3a,	// (0x0005840a) bg_vkb2_func_pane_cp08

0xbc20,	// (0x000583f0) bg_vkb2_func_pane_cp06

0xbc2e,	// (0x000583fe) bg_vkb2_func_pane_cp07

0xe615,	// (0x0005ade5) bg_vkb2_func_pane_cp11_ParamLimits

0xe615,	// (0x0005ade5) bg_vkb2_func_pane_cp11

0xe62a,	// (0x0005adfa) bg_vkb2_func_pane_cp12_ParamLimits

0xe62a,	// (0x0005adfa) bg_vkb2_func_pane_cp12

0x03e0,	// (0x0004cbb0) bg_vkb2_func_pane_cp09

0xe12a,	// (0x0005a8fa) bg_vkb2_func_pane_g1

0x26fc,	// (0x0004eecc) bg_vkb2_func_pane_g2

0xe132,	// (0x0005a902) bg_vkb2_func_pane_g3

0xe13a,	// (0x0005a90a) bg_vkb2_func_pane_g4

0xe354,	// (0x0005ab24) bg_vkb2_func_pane_g5

0xe152,	// (0x0005a922) bg_vkb2_func_pane_g6

0xe15a,	// (0x0005a92a) bg_vkb2_func_pane_g7

0xe14a,	// (0x0005a91a) bg_vkb2_func_pane_g8

0x26dc,	// (0x0004eeac) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x0005c314) bg_vkb2_func_pane_g

0xbf44,	// (0x00058714) blid2_tripm_pane_g6_ParamLimits

0xbf44,	// (0x00058714) blid2_tripm_pane_g6

0xdf6c,	// (0x0005a73c) mp4_progress_pane_g1

0xbf9e,	// (0x0005876e) blid2_tripm_values_pane_ParamLimits

0xbf9e,	// (0x0005876e) blid2_tripm_values_pane

0xc05f,	// (0x0005882f) blid2_tripm_values_pane_t1

0xc06d,	// (0x0005883d) blid2_tripm_values_pane_t2

0xc07b,	// (0x0005884b) blid2_tripm_values_pane_t3

0xc089,	// (0x00058859) blid2_tripm_values_pane_t4

0xc097,	// (0x00058867) blid2_tripm_values_pane_t5

0xc0a5,	// (0x00058875) blid2_tripm_values_pane_t6

0xc0b3,	// (0x00058883) blid2_tripm_values_pane_t7

0xc0c1,	// (0x00058891) blid2_tripm_values_pane_t8

0xc0cf,	// (0x0005889f) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x0005c327) blid2_tripm_values_pane_t

0x6c85,	// (0x00053455) call_video_pane_t1_ParamLimits

0x6ca2,	// (0x00053472) call_video_pane_t2_ParamLimits

0xf292,	// (0x0005ba62) call_video_pane_t_ParamLimits

0x850a,	// (0x00054cda) msg_header_pane_g1_ParamLimits

0x2ec3,	// (0x0004f693) msg_header_pane_g2_ParamLimits

0x2ec3,	// (0x0004f693) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0005bc7c) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0005bc7c) msg_header_pane_g

0x22f2,	// (0x0004eac2) main_clock2_pane_ParamLimits

0x9fe2,	// (0x000567b2) grid_clock2_toolbar_pane_ParamLimits

0x9fe2,	// (0x000567b2) grid_clock2_toolbar_pane

0x9fe2,	// (0x000567b2) listscroll_clock2_pane_ParamLimits

0x9fe2,	// (0x000567b2) listscroll_clock2_pane

0xa09a,	// (0x0005686a) main_clock2_pane_t3_ParamLimits

0xa09a,	// (0x0005686a) main_clock2_pane_t3

0xa0ac,	// (0x0005687c) main_clock2_pane_t4_ParamLimits

0xa0ac,	// (0x0005687c) main_clock2_pane_t4

0xe6fc,	// (0x0005aecc) cell_clock2_toolbar_pane

0xe704,	// (0x0005aed4) cell_clock2_toolbar_pane_cp01

0xe704,	// (0x0005aed4) cell_clock2_toolbar_pane_cp02

0xe70c,	// (0x0005aedc) cell_clock2_toolbar_pane_cp03

0xe714,	// (0x0005aee4) list_clock2_pane

0x2c0c,	// (0x0004f3dc) scroll_pane_cp10

0xe71c,	// (0x0005aeec) list_single_clock2_pane_ParamLimits

0xe71c,	// (0x0005aeec) list_single_clock2_pane

0x2d46,	// (0x0004f516) list_highlight_pane_cp08

0xe729,	// (0x0005aef9) list_single_clock2_pane_t1

0xe737,	// (0x0005af07) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x0005c33a) list_single_clock2_pane_t

0x03e0,	// (0x0004cbb0) bg_button_pane_cp10

0xe745,	// (0x0005af15) cell_clock2_toolbar_pane_g1

0x85ab,	// (0x00054d7b) aid_main_viewer_pane_g1_ParamLimits

0x85ab,	// (0x00054d7b) aid_main_viewer_pane_g1

0x85b7,	// (0x00054d87) aid_main_viewer_pane_g2_ParamLimits

0x85b7,	// (0x00054d87) aid_main_viewer_pane_g2

0x85c3,	// (0x00054d93) aid_main_viewer_pane_g3_ParamLimits

0x85c3,	// (0x00054d93) aid_main_viewer_pane_g3

0x85d4,	// (0x00054da4) aid_main_viewer_pane_g4_ParamLimits

0x85d4,	// (0x00054da4) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0005bc8d) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0005bc8d) aid_main_viewer_pane_g

0x8d64,	// (0x00055534) main_calc_pane_ParamLimits

0x8d71,	// (0x00055541) main_dialer2_pane_ParamLimits

0x03e0,	// (0x0004cbb0) main_cam6_pane

0x03e0,	// (0x0004cbb0) main_vid6_pane

0x9fee,	// (0x000567be) listscroll_gen_pane_cp06_ParamLimits

0x9fee,	// (0x000567be) listscroll_gen_pane_cp06

0xa0be,	// (0x0005688e) main_clock2_pane_t5_ParamLimits

0xa0be,	// (0x0005688e) main_clock2_pane_t5

0xa10d,	// (0x000568dd) aid_call2_pane_cp10_ParamLimits

0xa11f,	// (0x000568ef) aid_call_pane_cp10_ParamLimits

0x2c7b,	// (0x0004f44b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2c7b,	// (0x0004f44b) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa131,	// (0x00056901) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa131,	// (0x00056901) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2c7b,	// (0x0004f44b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0005bfc3) popup_clock_analogue_window_cp10_g_ParamLimits

0xa143,	// (0x00056913) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa8ec,	// (0x000570bc) cell_dialer2_keypad_pane_g2_ParamLimits

0xa8ec,	// (0x000570bc) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0005c0a9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0005c0a9) cell_dialer2_keypad_pane_g

0xa908,	// (0x000570d8) cell_dialer2_keypad_pane_t1

0xb2fe,	// (0x00057ace) main_cset_text2_pane_ParamLimits

0xb2fe,	// (0x00057ace) main_cset_text2_pane

0xe57d,	// (0x0005ad4d) area_vitu2_query_pane_g1_ParamLimits

0xbbbf,	// (0x0005838f) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0005c25e) area_vitu2_query_pane_g_ParamLimits

0x0e0e,	// (0x0004d5de) area_vitu2_query_pane_t7_ParamLimits

0x0e0e,	// (0x0004d5de) area_vitu2_query_pane_t7

0xbc20,	// (0x000583f0) bg_button_pane_cp018_ParamLimits

0xbc2e,	// (0x000583fe) bg_button_pane_cp021_ParamLimits

0xbc3a,	// (0x0005840a) bg_button_pane_cp022_ParamLimits

0xbc3a,	// (0x0005840a) bg_vkb2_func_pane_cp08_ParamLimits

0xbc20,	// (0x000583f0) bg_vkb2_func_pane_cp06_ParamLimits

0xbc2e,	// (0x000583fe) bg_vkb2_func_pane_cp07_ParamLimits

0xbc4b,	// (0x0005841b) input_focus_pane_cp09_ParamLimits

0xc0dd,	// (0x000588ad) cam6_autofocus_pane_ParamLimits

0xc0dd,	// (0x000588ad) cam6_autofocus_pane

0xc0ff,	// (0x000588cf) cam6_image_uncrop_pane_ParamLimits

0xc0ff,	// (0x000588cf) cam6_image_uncrop_pane

0xc12c,	// (0x000588fc) cam6_indi_pane_ParamLimits

0xc12c,	// (0x000588fc) cam6_indi_pane

0xc146,	// (0x00058916) cam6_mode_pane_ParamLimits

0xc146,	// (0x00058916) cam6_mode_pane

0xc15a,	// (0x0005892a) cam6_timer_pane_ParamLimits

0xc15a,	// (0x0005892a) cam6_timer_pane

0xc166,	// (0x00058936) cam6_zoom_pane_ParamLimits

0xc166,	// (0x00058936) cam6_zoom_pane

0xc184,	// (0x00058954) cam6_mode_pane_g1_ParamLimits

0xc184,	// (0x00058954) cam6_mode_pane_g1

0xc190,	// (0x00058960) cam6_mode_pane_g2_ParamLimits

0xc190,	// (0x00058960) cam6_mode_pane_g2

0xc19c,	// (0x0005896c) cam6_mode_pane_g3_ParamLimits

0xc19c,	// (0x0005896c) cam6_mode_pane_g3

0xc1a8,	// (0x00058978) cam6_mode_pane_g4_ParamLimits

0xc1a8,	// (0x00058978) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x0005c33f) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x0005c33f) cam6_mode_pane_g

0xdfbc,	// (0x0005a78c) bg_tb_trans_pane_cp08_ParamLimits

0xdfbc,	// (0x0005a78c) bg_tb_trans_pane_cp08

0xe74d,	// (0x0005af1d) cam6_battery_pane_ParamLimits

0xe74d,	// (0x0005af1d) cam6_battery_pane

0xe763,	// (0x0005af33) cam6_indi_pane_g1_ParamLimits

0xe763,	// (0x0005af33) cam6_indi_pane_g1

0xe775,	// (0x0005af45) cam6_indi_pane_g2_ParamLimits

0xe775,	// (0x0005af45) cam6_indi_pane_g2

0xe787,	// (0x0005af57) cam6_indi_pane_g3_ParamLimits

0xe787,	// (0x0005af57) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x0005c348) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x0005c348) cam6_indi_pane_g

0xe799,	// (0x0005af69) cam6_indi_pane_t1_ParamLimits

0xe799,	// (0x0005af69) cam6_indi_pane_t1

0xade4,	// (0x000575b4) cam6_autofocus_pane_g1

0xaddc,	// (0x000575ac) cam6_autofocus_pane_g2

0xadf4,	// (0x000575c4) cam6_autofocus_pane_g3

0xadec,	// (0x000575bc) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x0005c34f) cam6_autofocus_pane_g

0xe7bf,	// (0x0005af8f) cam6_timer_pane_g1

0xe7c7,	// (0x0005af97) cam6_timer_pane_t1

0xe7d5,	// (0x0005afa5) cam6_zoom_cont_pane

0xe7dd,	// (0x0005afad) cam6_zoom_pane_g1

0xe7e5,	// (0x0005afb5) cam6_zoom_pane_g2

0xc1b4,	// (0x00058984) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x0005c358) cam6_zoom_pane_g

0x45f8,	// (0x00050dc8) cam6_battery_pane_g1

0x45f8,	// (0x00050dc8) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0005bed0) cam6_battery_pane_g

0xe7ed,	// (0x0005afbd) cam6_zoom_cont_pane_g1

0xe7f6,	// (0x0005afc6) cam6_zoom_cont_pane_g2

0xe7ff,	// (0x0005afcf) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x0005c35f) cam6_zoom_cont_pane_g

0xc1d1,	// (0x000589a1) cam6_mode_pane_cp_ParamLimits

0xc1d1,	// (0x000589a1) cam6_mode_pane_cp

0xc1e5,	// (0x000589b5) cam6_zoom_pane_cp_ParamLimits

0xc1e5,	// (0x000589b5) cam6_zoom_pane_cp

0xc203,	// (0x000589d3) vid6_image_uncrop_cif_pane_ParamLimits

0xc203,	// (0x000589d3) vid6_image_uncrop_cif_pane

0xc22f,	// (0x000589ff) vid6_image_uncrop_nhd_pane_ParamLimits

0xc22f,	// (0x000589ff) vid6_image_uncrop_nhd_pane

0xc24e,	// (0x00058a1e) vid6_image_uncrop_vga_pane_ParamLimits

0xc24e,	// (0x00058a1e) vid6_image_uncrop_vga_pane

0xc26d,	// (0x00058a3d) vid6_image_uncrop_wvga_pane_ParamLimits

0xc26d,	// (0x00058a3d) vid6_image_uncrop_wvga_pane

0xc28c,	// (0x00058a5c) vid6_indi_pane_ParamLimits

0xc28c,	// (0x00058a5c) vid6_indi_pane

0xdfbc,	// (0x0005a78c) bg_tb_trans_pane_cp09_ParamLimits

0xdfbc,	// (0x0005a78c) bg_tb_trans_pane_cp09

0xe817,	// (0x0005afe7) cam6_battery_pane_cp_ParamLimits

0xe817,	// (0x0005afe7) cam6_battery_pane_cp

0xe823,	// (0x0005aff3) vid6_indi_pane_g1_ParamLimits

0xe823,	// (0x0005aff3) vid6_indi_pane_g1

0xe835,	// (0x0005b005) vid6_indi_pane_g2_ParamLimits

0xe835,	// (0x0005b005) vid6_indi_pane_g2

0xe847,	// (0x0005b017) vid6_indi_pane_g3_ParamLimits

0xe847,	// (0x0005b017) vid6_indi_pane_g3

0xe85e,	// (0x0005b02e) vid6_indi_pane_g4_ParamLimits

0xe85e,	// (0x0005b02e) vid6_indi_pane_g4

0xe875,	// (0x0005b045) vid6_indi_pane_g5_ParamLimits

0xe875,	// (0x0005b045) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x0005c366) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x0005c366) vid6_indi_pane_g

0xe88f,	// (0x0005b05f) vid6_indi_pane_t1_ParamLimits

0xe88f,	// (0x0005b05f) vid6_indi_pane_t1

0xe8a5,	// (0x0005b075) vid6_indi_pane_t2_ParamLimits

0xe8a5,	// (0x0005b075) vid6_indi_pane_t2

0xe8cd,	// (0x0005b09d) vid6_indi_pane_t3_ParamLimits

0xe8cd,	// (0x0005b09d) vid6_indi_pane_t3

0xe8f5,	// (0x0005b0c5) vid6_indi_pane_t4_ParamLimits

0xe8f5,	// (0x0005b0c5) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x0005c371) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x0005c371) vid6_indi_pane_t

0xe919,	// (0x0005b0e9) wait_bar_pane_cp08

0xc2b1,	// (0x00058a81) main_cset_text2_pane_t1_ParamLimits

0xc2b1,	// (0x00058a81) main_cset_text2_pane_t1

0xc1bc,	// (0x0005898c) listscroll_gen_pane_cp06_t1_ParamLimits

0xc1bc,	// (0x0005898c) listscroll_gen_pane_cp06_t1

0x03e0,	// (0x0004cbb0) main_cam6_set_pane

0xac81,	// (0x00057451) bg_tb_trans_pane_cp06_ParamLimits

0xac97,	// (0x00057467) cam4_indicators_pane_g1_ParamLimits

0xaca4,	// (0x00057474) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0005c0e6) cam4_indicators_pane_g_ParamLimits

0xacc4,	// (0x00057494) cam4_indicators_pane_t1_ParamLimits

0xad70,	// (0x00057540) bg_tb_trans_pane_cp07_ParamLimits

0xac97,	// (0x00057467) vid4_indicators_pane_g1_ParamLimits

0xad88,	// (0x00057558) vid4_indicators_pane_g2_ParamLimits

0xad95,	// (0x00057565) vid4_indicators_pane_g3_ParamLimits

0xada6,	// (0x00057576) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0005c0f8) vid4_indicators_pane_g_ParamLimits

0xadc2,	// (0x00057592) vid4_indicators_pane_t1_ParamLimits

0xbd6c,	// (0x0005853c) vid4_progress_pane_g1_ParamLimits

0xbd78,	// (0x00058548) vid4_progress_pane_g2_ParamLimits

0xbd84,	// (0x00058554) vid4_progress_pane_g3_ParamLimits

0xbd93,	// (0x00058563) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0005c2a9) vid4_progress_pane_g_ParamLimits

0xbdb1,	// (0x00058581) vid4_progress_pane_t1_ParamLimits

0xbdc7,	// (0x00058597) vid4_progress_pane_t2_ParamLimits

0xbddd,	// (0x000585ad) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0005c2b4) vid4_progress_pane_t_ParamLimits

0xbdf2,	// (0x000585c2) wait_bar_pane_cp07_ParamLimits

0xc2d8,	// (0x00058aa8) main_cam6_set_pane_g2_ParamLimits

0xc2d8,	// (0x00058aa8) main_cam6_set_pane_g2

0xc2e4,	// (0x00058ab4) main_cset6_listscroll_pane_ParamLimits

0xc2e4,	// (0x00058ab4) main_cset6_listscroll_pane

0xc311,	// (0x00058ae1) main_cset6_slider_pane_ParamLimits

0xc311,	// (0x00058ae1) main_cset6_slider_pane

0xc31d,	// (0x00058aed) main_cset6_text2_pane_ParamLimits

0xc31d,	// (0x00058aed) main_cset6_text2_pane

0xe928,	// (0x0005b0f8) main_cset6_text_pane

0xe930,	// (0x0005b100) main_cset_list_pane_copy1_ParamLimits

0xe930,	// (0x0005b100) main_cset_list_pane_copy1

0xe940,	// (0x0005b110) scroll_pane_cp028_copy1

0xc330,	// (0x00058b00) cset_list_set_pane_copy1

0xc340,	// (0x00058b10) aid_position_infowindow_above_copy1

0xc348,	// (0x00058b18) aid_position_infowindow_below_copy1

0xc350,	// (0x00058b20) cset_list_set_pane_g1_copy1

0xc358,	// (0x00058b28) cset_list_set_pane_g3_copy1_ParamLimits

0xc358,	// (0x00058b28) cset_list_set_pane_g3_copy1

0xc367,	// (0x00058b37) cset_list_set_pane_t1_copy1_ParamLimits

0xc367,	// (0x00058b37) cset_list_set_pane_t1_copy1

0x0459,	// (0x0004cc29) list_highlight_pane_cp021_copy1_ParamLimits

0x0459,	// (0x0004cc29) list_highlight_pane_cp021_copy1

0xe949,	// (0x0005b119) cset6_slider_pane_ParamLimits

0xe949,	// (0x0005b119) cset6_slider_pane

0xe975,	// (0x0005b145) main_cset6_slider_pane_g1_ParamLimits

0xe975,	// (0x0005b145) main_cset6_slider_pane_g1

0xc37c,	// (0x00058b4c) main_cset6_slider_pane_g2_ParamLimits

0xc37c,	// (0x00058b4c) main_cset6_slider_pane_g2

0xe99d,	// (0x0005b16d) main_cset6_slider_pane_g3_ParamLimits

0xe99d,	// (0x0005b16d) main_cset6_slider_pane_g3

0xc3a4,	// (0x00058b74) main_cset6_slider_pane_g4_ParamLimits

0xc3a4,	// (0x00058b74) main_cset6_slider_pane_g4

0xc3b0,	// (0x00058b80) main_cset6_slider_pane_g5_ParamLimits

0xc3b0,	// (0x00058b80) main_cset6_slider_pane_g5

0xe25d,	// (0x0005aa2d) main_cset6_slider_pane_g7_ParamLimits

0xe25d,	// (0x0005aa2d) main_cset6_slider_pane_g7

0xe269,	// (0x0005aa39) main_cset6_slider_pane_g8_ParamLimits

0xe269,	// (0x0005aa39) main_cset6_slider_pane_g8

0xc3bc,	// (0x00058b8c) main_cset6_slider_pane_g9_ParamLimits

0xc3bc,	// (0x00058b8c) main_cset6_slider_pane_g9

0xc3c8,	// (0x00058b98) main_cset6_slider_pane_g10_ParamLimits

0xc3c8,	// (0x00058b98) main_cset6_slider_pane_g10

0xc3d4,	// (0x00058ba4) main_cset6_slider_pane_g11_ParamLimits

0xc3d4,	// (0x00058ba4) main_cset6_slider_pane_g11

0xc3e0,	// (0x00058bb0) main_cset6_slider_pane_g12_ParamLimits

0xc3e0,	// (0x00058bb0) main_cset6_slider_pane_g12

0xc3ec,	// (0x00058bbc) main_cset6_slider_pane_g13_ParamLimits

0xc3ec,	// (0x00058bbc) main_cset6_slider_pane_g13

0xc3f8,	// (0x00058bc8) main_cset6_slider_pane_g14_ParamLimits

0xc3f8,	// (0x00058bc8) main_cset6_slider_pane_g14

0xc404,	// (0x00058bd4) main_cset6_slider_pane_g15_ParamLimits

0xc404,	// (0x00058bd4) main_cset6_slider_pane_g15

0xc41c,	// (0x00058bec) main_cset6_slider_pane_g16_ParamLimits

0xc41c,	// (0x00058bec) main_cset6_slider_pane_g16

0xc428,	// (0x00058bf8) main_cset6_slider_pane_g17_ParamLimits

0xc428,	// (0x00058bf8) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x0005c37a) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x0005c37a) main_cset6_slider_pane_g

0xe9a9,	// (0x0005b179) main_cset6_slider_pane_t1_ParamLimits

0xe9a9,	// (0x0005b179) main_cset6_slider_pane_t1

0xc44c,	// (0x00058c1c) main_cset6_slider_pane_t2_ParamLimits

0xc44c,	// (0x00058c1c) main_cset6_slider_pane_t2

0xc477,	// (0x00058c47) main_cset6_slider_pane_t3_ParamLimits

0xc477,	// (0x00058c47) main_cset6_slider_pane_t3

0xc4a2,	// (0x00058c72) main_cset6_slider_pane_t4_ParamLimits

0xc4a2,	// (0x00058c72) main_cset6_slider_pane_t4

0xc4cd,	// (0x00058c9d) main_cset6_slider_pane_t5_ParamLimits

0xc4cd,	// (0x00058c9d) main_cset6_slider_pane_t5

0xe9ea,	// (0x0005b1ba) main_cset6_slider_pane_t7_ParamLimits

0xe9ea,	// (0x0005b1ba) main_cset6_slider_pane_t7

0xc4f8,	// (0x00058cc8) main_cset6_slider_pane_t8_ParamLimits

0xc4f8,	// (0x00058cc8) main_cset6_slider_pane_t8

0xc51c,	// (0x00058cec) main_cset6_slider_pane_t9_ParamLimits

0xc51c,	// (0x00058cec) main_cset6_slider_pane_t9

0xc540,	// (0x00058d10) main_cset6_slider_pane_t10_ParamLimits

0xc540,	// (0x00058d10) main_cset6_slider_pane_t10

0xc564,	// (0x00058d34) main_cset6_slider_pane_t11_ParamLimits

0xc564,	// (0x00058d34) main_cset6_slider_pane_t11

0xea20,	// (0x0005b1f0) main_cset6_slider_pane_t14_ParamLimits

0xea20,	// (0x0005b1f0) main_cset6_slider_pane_t14

0xea59,	// (0x0005b229) main_cset6_slider_pane_t15_ParamLimits

0xea59,	// (0x0005b229) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x0005c39f) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x0005c39f) main_cset6_slider_pane_t

0xea92,	// (0x0005b262) cset_slider_pane_g1_copy1

0xea9b,	// (0x0005b26b) cset_slider_pane_g2_copy1

0xeaa4,	// (0x0005b274) cset_slider_pane_g3_copy1

0x03e0,	// (0x0004cbb0) bg_popup_sub_pane_cp011_copy1

0xe39d,	// (0x0005ab6d) main_cset_text_pane_g1_copy1

0xe3a5,	// (0x0005ab75) main_cset_text_pane_t1_copy1

0xe3b3,	// (0x0005ab83) main_cset_text_pane_t2_copy1

0xe3c1,	// (0x0005ab91) main_cset_text_pane_t3_copy1

0xe3cf,	// (0x0005ab9f) main_cset_text_pane_t4_copy1

0xe3dd,	// (0x0005abad) main_cset_text_pane_t5_copy1

0xe3eb,	// (0x0005abbb) main_cset_text_pane_t6_copy1

0xe3f9,	// (0x0005abc9) main_cset_text_pane_t7_copy1

0xc588,	// (0x00058d58) main_cset_text2_pane_t1_copy1

0x03e0,	// (0x0004cbb0) main_ncimui_pane

0x8db6,	// (0x00055586) popup_query_ncimui_window_ParamLimits

0x8db6,	// (0x00055586) popup_query_ncimui_window

0x0999,	// (0x0004d169) field_cale_ev2_pane_g4_ParamLimits

0x0999,	// (0x0004d169) field_cale_ev2_pane_g4

0xa62c,	// (0x00056dfc) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa62c,	// (0x00056dfc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0005c084) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0005c084) cell_video_dialer_keypad_pane_g

0xa644,	// (0x00056e14) cell_video_dialer_keypad_pane_t1

0x03e0,	// (0x0004cbb0) bg_popup_window_pane_cp012

0x2aea,	// (0x0004f2ba) heading_pane_cp06

0xead7,	// (0x0005b2a7) ncim_query_content_pane

0x03e0,	// (0x0004cbb0) bg_popup_heading_pane_cp01

0xeadf,	// (0x0005b2af) ncim_heading_pane_t1

0xeaed,	// (0x0005b2bd) ncim_indicator_popup_pane

0xeaff,	// (0x0005b2cf) ncim_query_button_pane

0xeb15,	// (0x0005b2e5) ncim_query_content_pane_t1

0xeb27,	// (0x0005b2f7) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005c3de) ncim_query_content_pane_t

0xeb61,	// (0x0005b331) ncim_query_list_pane

0xeb73,	// (0x0005b343) ncim_query_popup_pane

0xeaed,	// (0x0005b2bd) ncim_indicator_popup_pane_ParamLimits

0xc6b3,	// (0x00058e83) ncim_query_content_pane_g1_ParamLimits

0xc6b3,	// (0x00058e83) ncim_query_content_pane_g1

0xeb15,	// (0x0005b2e5) ncim_query_content_pane_t1_ParamLimits

0xeb27,	// (0x0005b2f7) ncim_query_content_pane_t2_ParamLimits

0xc6bf,	// (0x00058e8f) ncim_query_content_pane_t3_ParamLimits

0xc6bf,	// (0x00058e8f) ncim_query_content_pane_t3

0xc6dc,	// (0x00058eac) ncim_query_content_pane_t4_ParamLimits

0xc6dc,	// (0x00058eac) ncim_query_content_pane_t4

0xc6f9,	// (0x00058ec9) ncim_query_content_pane_t5_ParamLimits

0xc6f9,	// (0x00058ec9) ncim_query_content_pane_t5

0xeb39,	// (0x0005b309) ncim_query_content_pane_t6_ParamLimits

0xeb39,	// (0x0005b309) ncim_query_content_pane_t6

0xfc0e,	// (0x0005c3de) ncim_query_content_pane_t_ParamLimits

0xeb61,	// (0x0005b331) ncim_query_list_pane_ParamLimits

0xeb73,	// (0x0005b343) ncim_query_popup_pane_ParamLimits

0xeb87,	// (0x0005b357) wait_bar_pane_cp04

0x03e0,	// (0x0004cbb0) input_focus_pane_cp011

0xeb8f,	// (0x0005b35f) ncim_query_popup_pane_t1

0xeb9d,	// (0x0005b36d) ncim_list_query_list_pane_ParamLimits

0xeb9d,	// (0x0005b36d) ncim_list_query_list_pane

0x03e0,	// (0x0004cbb0) bg_button_pane_cp027

0xebb0,	// (0x0005b380) ncim_query_button_pane_g1

0x03e0,	// (0x0004cbb0) list_highlight_pane_cp012

0xebba,	// (0x0005b38a) ncim_list_query_list_pane_g1

0xebc2,	// (0x0005b392) ncim_list_query_list_pane_t1

0xacb4,	// (0x00057484) cam4_indicators_pane_g3_ParamLimits

0xacb4,	// (0x00057484) cam4_indicators_pane_g3

0xadb2,	// (0x00057582) vid4_indicators_pane_g5_ParamLimits

0xadb2,	// (0x00057582) vid4_indicators_pane_g5

0xbda2,	// (0x00058572) vid4_progress_pane_g5_ParamLimits

0xbda2,	// (0x00058572) vid4_progress_pane_g5

0xc5ba,	// (0x00058d8a) main_ncimui_pane_g1

0xc614,	// (0x00058de4) ncimui_group_query_pane_ParamLimits

0xc614,	// (0x00058de4) ncimui_group_query_pane

0xc65e,	// (0x00058e2e) ncimui_list_pane_ParamLimits

0xc65e,	// (0x00058e2e) ncimui_list_pane

0xc67f,	// (0x00058e4f) ncimui_text_pane_ParamLimits

0xc67f,	// (0x00058e4f) ncimui_text_pane

0xc716,	// (0x00058ee6) ncimui_text_pane_t1_ParamLimits

0xc716,	// (0x00058ee6) ncimui_text_pane_t1

0xebd0,	// (0x0005b3a0) ncimui_list_single_graphic_pane_ParamLimits

0xebd0,	// (0x0005b3a0) ncimui_list_single_graphic_pane

0xc735,	// (0x00058f05) ncimui_query_pane_ParamLimits

0xc735,	// (0x00058f05) ncimui_query_pane

0x03e0,	// (0x0004cbb0) list_highlight_pane_cp013

0xebe0,	// (0x0005b3b0) ncim_list_query_list_pane_t1_copy1

0xebba,	// (0x0005b38a) ncim_list_single_graphic_pane_g1

0xebee,	// (0x0005b3be) ncim_query_button_pane_cp01

0xebfa,	// (0x0005b3ca) ncim_query_entry_pane_ParamLimits

0xebfa,	// (0x0005b3ca) ncim_query_entry_pane

0xec0d,	// (0x0005b3dd) ncimui_query_pane_g1

0xec19,	// (0x0005b3e9) ncimui_query_pane_t1_ParamLimits

0xec19,	// (0x0005b3e9) ncimui_query_pane_t1

0x0459,	// (0x0004cc29) input_focus_pane_cp012

0xec32,	// (0x0005b402) ncim_query_entry_pane_t1

0x22f2,	// (0x0004eac2) main_im_pane_ParamLimits

0x0459,	// (0x0004cc29) main_mobtv_pane_ParamLimits

0x0459,	// (0x0004cc29) main_mobtv_pane

0xc434,	// (0x00058c04) main_cset6_slider_pane_g18_ParamLimits

0xc434,	// (0x00058c04) main_cset6_slider_pane_g18

0xc440,	// (0x00058c10) main_cset6_slider_pane_g19_ParamLimits

0xc440,	// (0x00058c10) main_cset6_slider_pane_g19

0xe10a,	// (0x0005a8da) bg_main_mobtv_pane_ParamLimits

0xe10a,	// (0x0005a8da) bg_main_mobtv_pane

0xc748,	// (0x00058f18) main_mobtv_info_pane

0xc753,	// (0x00058f23) main_mobtv_loading_pane_ParamLimits

0xc753,	// (0x00058f23) main_mobtv_loading_pane

0xec44,	// (0x0005b414) main_mobtv_pg_channel_list_pane

0xec4e,	// (0x0005b41e) main_mobtv_pg_hdr_pane

0xc760,	// (0x00058f30) main_mobtv_programe_curr_pane_ParamLimits

0xc760,	// (0x00058f30) main_mobtv_programe_curr_pane

0xc76d,	// (0x00058f3d) main_mobtv_programe_next_pane_ParamLimits

0xc76d,	// (0x00058f3d) main_mobtv_programe_next_pane

0xec57,	// (0x0005b427) popup_mobtv_noti_window

0x45f8,	// (0x00050dc8) main_tv_pg_hdr_pane_g1

0xec61,	// (0x0005b431) main_tv_pg_hdr_pane_g2

0xec69,	// (0x0005b439) main_tv_pg_hdr_pane_g3

0xec71,	// (0x0005b441) main_tv_pg_hdr_pane_g4

0xec79,	// (0x0005b449) main_tv_pg_hdr_pane_g5

0xec83,	// (0x0005b453) main_tv_pg_hdr_pane_g6

0xec8d,	// (0x0005b45d) main_tv_pg_hdr_pane_g7

0xec97,	// (0x0005b467) main_tv_pg_hdr_pane_g8

0xeca1,	// (0x0005b471) main_tv_pg_hdr_pane_g9

0xecab,	// (0x0005b47b) main_tv_pg_hdr_pane_g10

0xecb5,	// (0x0005b485) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005c3eb) main_tv_pg_hdr_pane_g

0xecbf,	// (0x0005b48f) main_tv_pg_hdr_pane_t1

0xeccd,	// (0x0005b49d) main_tv_pg_hdr_pane_t2

0xecdb,	// (0x0005b4ab) main_tv_pg_hdr_pane_t3

0xeceb,	// (0x0005b4bb) main_tv_pg_hdr_pane_t4

0xecfb,	// (0x0005b4cb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005c402) main_tv_pg_hdr_pane_t

0xed0b,	// (0x0005b4db) single_mobtv_pg_channel_pane_ParamLimits

0xed0b,	// (0x0005b4db) single_mobtv_pg_channel_pane

0xed1d,	// (0x0005b4ed) single_mobtv_pg_channel_table_pane

0xed26,	// (0x0005b4f6) single_mobtv_pg_channel_thumb_pane

0xed2f,	// (0x0005b4ff) single_tv_pg_channel_pane_g1

0xed38,	// (0x0005b508) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005c40d) single_tv_pg_channel_pane_g

0x4828,	// (0x00050ff8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4828,	// (0x00050ff8) bg_single_mobtv_pg_channel_thumb_pane

0xed41,	// (0x0005b511) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xed41,	// (0x0005b511) single_mobtv_pg_channel_thumb_pane_g1

0xed4f,	// (0x0005b51f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xed4f,	// (0x0005b51f) single_mobtv_pg_channel_thumb_pane_g2

0xed5b,	// (0x0005b52b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xed5b,	// (0x0005b52b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0005c412) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0005c412) single_mobtv_pg_channel_thumb_pane_g

0xed67,	// (0x0005b537) single_mobtv_pg_channel_thumb_pane_t1

0xed75,	// (0x0005b545) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0005c419) single_mobtv_pg_channel_thumb_pane_t

0x45f8,	// (0x00050dc8) bg_single_mobtv_pg_channel_table_pane_g1

0x45f8,	// (0x00050dc8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0005bed0) bg_single_mobtv_pg_channel_table_pane_g

0xed83,	// (0x0005b553) single_mobtv_pg_channel_table_pane_t1

0xed91,	// (0x0005b561) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0005c41e) single_mobtv_pg_channel_table_pane_t

0xc782,	// (0x00058f52) main_mobtv_info_pane_g1_ParamLimits

0xc782,	// (0x00058f52) main_mobtv_info_pane_g1

0xc79e,	// (0x00058f6e) main_mobtv_info_pane_t1_ParamLimits

0xc79e,	// (0x00058f6e) main_mobtv_info_pane_t1

0xc816,	// (0x00058fe6) main_mobtv_info_pane_t2_ParamLimits

0xc816,	// (0x00058fe6) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0005c428) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0005c428) main_mobtv_info_pane_t

0xc8a9,	// (0x00059079) wait_bar_pane_cp05

0xc8bb,	// (0x0005908b) main_mobtv_loading_pane_g1_ParamLimits

0xc8bb,	// (0x0005908b) main_mobtv_loading_pane_g1

0xc8c7,	// (0x00059097) main_mobtv_loading_pane_g2_ParamLimits

0xc8c7,	// (0x00059097) main_mobtv_loading_pane_g2

0xc8d3,	// (0x000590a3) main_mobtv_loading_pane_g3_ParamLimits

0xc8d3,	// (0x000590a3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0005c42f) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0005c42f) main_mobtv_loading_pane_g

0xedb3,	// (0x0005b583) main_mobtv_loading_pane_t1_ParamLimits

0xedb3,	// (0x0005b583) main_mobtv_loading_pane_t1

0xedcb,	// (0x0005b59b) main_mobtv_loading_pane_t2_ParamLimits

0xedcb,	// (0x0005b59b) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0005c436) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0005c436) main_mobtv_loading_pane_t

0xc8e1,	// (0x000590b1) wait_bar_pane_cp06_ParamLimits

0xc8e1,	// (0x000590b1) wait_bar_pane_cp06

0xedef,	// (0x0005b5bf) main_mobtv_programe_curr_pane_t1

0xedfd,	// (0x0005b5cd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0005c43b) main_mobtv_programe_curr_pane_t

0xee0b,	// (0x0005b5db) main_mobtv_programe_next_pane_t1

0xee19,	// (0x0005b5e9) main_mobtv_programe_next_pane_t2

0xee27,	// (0x0005b5f7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0005c440) main_mobtv_programe_next_pane_t

0x03e0,	// (0x0004cbb0) bg_popup_mobtv_noti_window_pane

0xee35,	// (0x0005b605) popup_mobtv_noti_window_g1

0xee3d,	// (0x0005b60d) popup_mobtv_noti_window_t1

0xee4b,	// (0x0005b61b) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0005c447) popup_mobtv_noti_window_t

0x45f8,	// (0x00050dc8) bg_popup_mobtv_noti_window_pane_g1

0x03e0,	// (0x0004cbb0) sc_clock_pane

0x03e0,	// (0x0004cbb0) main_fs_bigclock_pane

0xbf8c,	// (0x0005875c) blid2_tripm_pane_t4_ParamLimits

0xbf8c,	// (0x0005875c) blid2_tripm_pane_t4

0xc8ed,	// (0x000590bd) sc_clock_pane_g1_ParamLimits

0xc8ed,	// (0x000590bd) sc_clock_pane_g1

0xc8fb,	// (0x000590cb) sc_clock_pane_t1_ParamLimits

0xc8fb,	// (0x000590cb) sc_clock_pane_t1

0xc910,	// (0x000590e0) sc_clock_pane_t2_ParamLimits

0xc910,	// (0x000590e0) sc_clock_pane_t2

0xc922,	// (0x000590f2) sc_clock_pane_t3_ParamLimits

0xc922,	// (0x000590f2) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0005c44c) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0005c44c) sc_clock_pane_t

0xd769,	// (0x00059f39) main_fs_bigclock_indicator_pane_ParamLimits

0xd769,	// (0x00059f39) main_fs_bigclock_indicator_pane

0xc9c3,	// (0x00059193) main_fs_bigclock_pane_g1_ParamLimits

0xc9c3,	// (0x00059193) main_fs_bigclock_pane_g1

0xd775,	// (0x00059f45) main_fs_bigclock_pane_t1_ParamLimits

0xd775,	// (0x00059f45) main_fs_bigclock_pane_t1

0xd787,	// (0x00059f57) main_fs_bigclock_pane_t2_ParamLimits

0xd787,	// (0x00059f57) main_fs_bigclock_pane_t2

0xd79b,	// (0x00059f6b) main_fs_bigclock_pane_t3_ParamLimits

0xd79b,	// (0x00059f6b) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x0005c64b) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x0005c64b) main_fs_bigclock_pane_t

0x187b,	// (0x0004e04b) main_fs_bigclock_indicator_pane_g1

0xeb07,	// (0x0005b2d7) ncim_query_content_pane_g2_ParamLimits

0xeb07,	// (0x0005b2d7) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005c3d9) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005c3d9) ncim_query_content_pane_g

0xc934,	// (0x00059104) sc_clock_pane_t4_ParamLimits

0xc934,	// (0x00059104) sc_clock_pane_t4

0x0459,	// (0x0004cc29) main_radioblah_pane

0xe075,	// (0x0005a845) cell_call4_button_pane_t1_copy1_ParamLimits

0xe075,	// (0x0005a845) cell_call4_button_pane_t1_copy1

0xc5c4,	// (0x00058d94) main_ncimui_pane_t1_ParamLimits

0xc5c4,	// (0x00058d94) main_ncimui_pane_t1

0xc5de,	// (0x00058dae) main_ncimui_pane_t2_ParamLimits

0xc5de,	// (0x00058dae) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005c3d2) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005c3d2) main_ncimui_pane_t

0xee59,	// (0x0005b629) main_radioblah_anim_pane_ParamLimits

0xee59,	// (0x0005b629) main_radioblah_anim_pane

0xee6a,	// (0x0005b63a) main_radioblah_info_pane_ParamLimits

0xee6a,	// (0x0005b63a) main_radioblah_info_pane

0xee7e,	// (0x0005b64e) main_radioblah_pane_t1_ParamLimits

0xee7e,	// (0x0005b64e) main_radioblah_pane_t1

0xee9a,	// (0x0005b66a) main_radioblah_pane_t2_ParamLimits

0xee9a,	// (0x0005b66a) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0005c46d) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0005c46d) main_radioblah_pane_t

0xcb46,	// (0x00059316) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcb46,	// (0x00059316) main_radioblah_rocker_ctrl_pane

0xeee2,	// (0x0005b6b2) main_radioblah_info_pane_t1_ParamLimits

0xeee2,	// (0x0005b6b2) main_radioblah_info_pane_t1

0xcb8f,	// (0x0005935f) main_radioblah_info_pane_t2_ParamLimits

0xcb8f,	// (0x0005935f) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0005c476) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0005c476) main_radioblah_info_pane_t

0x45f8,	// (0x00050dc8) main_radioblah_rocker_ctrl_pane_g1

0xcc3f,	// (0x0005940f) main_radioblah_rocker_ctrl_pane_g2

0xcc47,	// (0x00059417) main_radioblah_rocker_ctrl_pane_g3

0xcc4f,	// (0x0005941f) main_radioblah_rocker_ctrl_pane_g4

0xcc57,	// (0x00059427) main_radioblah_rocker_ctrl_pane_g5

0xcc5f,	// (0x0005942f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0005c47f) main_radioblah_rocker_ctrl_pane_g

0xc588,	// (0x00058d58) main_cset_text2_pane_t1_copy1_ParamLimits

0xabd3,	// (0x000573a3) cam4_image_uncrop_qvga_pane

0xad2a,	// (0x000574fa) vid4_image_uncrop_qcif_pane

0xc11e,	// (0x000588ee) cam6_image_uncrop_qvga_pane_ParamLimits

0xc11e,	// (0x000588ee) cam6_image_uncrop_qvga_pane

0xe807,	// (0x0005afd7) vid6_image_uncrop_qcif_pane_ParamLimits

0xe807,	// (0x0005afd7) vid6_image_uncrop_qcif_pane

0x03e0,	// (0x0004cbb0) bg_popup_preview_window_pane_cp03

0xeaad,	// (0x0005b27d) list_cset_text2_pane

0xeab5,	// (0x0005b285) main_cset6_text2_pane_g1

0xeabd,	// (0x0005b28d) main_cset6_text2_pane_t1

0xcc67,	// (0x00059437) list_cset_text2_pane_t1_ParamLimits

0xcc67,	// (0x00059437) list_cset_text2_pane_t1

0x0459,	// (0x0004cc29) main_radioblah_pane_ParamLimits

0xc895,	// (0x00059065) main_mobtv_info_pane_t3_ParamLimits

0xc895,	// (0x00059065) main_mobtv_info_pane_t3

0xcb34,	// (0x00059304) main_radioblah_pane_g1

0xcb5f,	// (0x0005932f) main_radioblah_info_pane_g1

0xcbe4,	// (0x000593b4) main_radioblah_info_pane_t3_ParamLimits

0xcbe4,	// (0x000593b4) main_radioblah_info_pane_t3

0x796f,	// (0x0005413f) highlight_cell_cale_month_pane_ParamLimits

0x796f,	// (0x0005413f) highlight_cell_cale_month_pane

0x03e0,	// (0x0004cbb0) main_phob_fisheye_pane

0x490a,	// (0x000510da) scroll_pane_cp0031_ParamLimits

0x490a,	// (0x000510da) scroll_pane_cp0031

0xe919,	// (0x0005b0e9) wait_bar_pane_cp08_ParamLimits

0xc330,	// (0x00058b00) cset_list_set_pane_copy1_ParamLimits

0xef1c,	// (0x0005b6ec) highlight_cell_cale_month_pane_g1

0xcc80,	// (0x00059450) highlight_cell_cale_month_pane_t1

0xe5d1,	// (0x0005ada1) list_gen_pane_cp01

0xe248,	// (0x0005aa18) scroll_pane_01

0x0f06,	// (0x0004d6d6) list_single_double_fisheye_pane

0xcc8e,	// (0x0005945e) list_double_fisheye_pane_g1_ParamLimits

0xcc8e,	// (0x0005945e) list_double_fisheye_pane_g1

0xcc9a,	// (0x0005946a) list_double_fisheye_pane_g2_ParamLimits

0xcc9a,	// (0x0005946a) list_double_fisheye_pane_g2

0xccae,	// (0x0005947e) list_double_fisheye_pane_g3_ParamLimits

0xccae,	// (0x0005947e) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0005c48c) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0005c48c) list_double_fisheye_pane_g

0xccd7,	// (0x000594a7) list_double_fisheye_pane_t1_ParamLimits

0xccd7,	// (0x000594a7) list_double_fisheye_pane_t1

0xccf2,	// (0x000594c2) list_double_fisheye_pane_t2_ParamLimits

0xccf2,	// (0x000594c2) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0005c497) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0005c497) list_double_fisheye_pane_t

0x03e0,	// (0x0004cbb0) main_call5_pane

0xc95a,	// (0x0005912a) sc_swipe_pane_ParamLimits

0xc95a,	// (0x0005912a) sc_swipe_pane

0xcd20,	// (0x000594f0) call5_image_pane_ParamLimits

0xcd20,	// (0x000594f0) call5_image_pane

0xcd32,	// (0x00059502) call5_swipe_1_pane_ParamLimits

0xcd32,	// (0x00059502) call5_swipe_1_pane

0xcd3e,	// (0x0005950e) call5_swipe_2_pane_ParamLimits

0xcd3e,	// (0x0005950e) call5_swipe_2_pane

0xcd5a,	// (0x0005952a) popup_call5_audio_first_window_ParamLimits

0xcd5a,	// (0x0005952a) popup_call5_audio_first_window

0x4828,	// (0x00050ff8) call5_swipe_1_pane_g1_ParamLimits

0x4828,	// (0x00050ff8) call5_swipe_1_pane_g1

0xef24,	// (0x0005b6f4) call5_swipe_1_pane_g2_ParamLimits

0xef24,	// (0x0005b6f4) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0005c49c) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0005c49c) call5_swipe_1_pane_g

0xef30,	// (0x0005b700) call5_swipe_1_pane_t1_ParamLimits

0xef30,	// (0x0005b700) call5_swipe_1_pane_t1

0x4828,	// (0x00050ff8) call5_swipe_2_pane_g1_ParamLimits

0x4828,	// (0x00050ff8) call5_swipe_2_pane_g1

0xef45,	// (0x0005b715) call5_swipe_2_pane_g2_ParamLimits

0xef45,	// (0x0005b715) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0005c4a1) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0005c4a1) call5_swipe_2_pane_g

0xef51,	// (0x0005b721) call5_swipe_2_pane_t1_ParamLimits

0xef51,	// (0x0005b721) call5_swipe_2_pane_t1

0xef66,	// (0x0005b736) sc_swipe_pane_g1_ParamLimits

0xef66,	// (0x0005b736) sc_swipe_pane_g1

0xef73,	// (0x0005b743) sc_swipe_pane_g2_ParamLimits

0xef73,	// (0x0005b743) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0005c4a6) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0005c4a6) sc_swipe_pane_g

0xef7f,	// (0x0005b74f) sc_swipe_pane_t1_ParamLimits

0xef7f,	// (0x0005b74f) sc_swipe_pane_t1

0x03e0,	// (0x0004cbb0) main_cmail_launcher_pane

0xcd6a,	// (0x0005953a) aid_size_cell_cmail_l_ParamLimits

0xcd6a,	// (0x0005953a) aid_size_cell_cmail_l

0xcd7a,	// (0x0005954a) grid_cmail_l_pane_ParamLimits

0xcd7a,	// (0x0005954a) grid_cmail_l_pane

0xcd8a,	// (0x0005955a) cell_cmail_l_pane_ParamLimits

0xcd8a,	// (0x0005955a) cell_cmail_l_pane

0xcda0,	// (0x00059570) cell_cmail_l_pane_g1_ParamLimits

0xcda0,	// (0x00059570) cell_cmail_l_pane_g1

0xcdac,	// (0x0005957c) cell_cmail_l_pane_t1_ParamLimits

0xcdac,	// (0x0005957c) cell_cmail_l_pane_t1

0xef94,	// (0x0005b764) cell_cmail_l_pane_t2_ParamLimits

0xef94,	// (0x0005b764) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0005c4ab) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0005c4ab) cell_cmail_l_pane_t

0x0459,	// (0x0004cc29) grid_highlight_pane_cp018_ParamLimits

0x0459,	// (0x0004cc29) grid_highlight_pane_cp018

0x5cb2,	// (0x00052482) main2_pane_ParamLimits

0x5cb2,	// (0x00052482) main2_pane

0x239d,	// (0x0004eb6d) popup_sp_fs_action_menu_bg_pane_g1

0x23a5,	// (0x0004eb75) popup_sp_fs_action_menu_bg_pane_g2

0x23ad,	// (0x0004eb7d) popup_sp_fs_action_menu_bg_pane_g3

0x23b5,	// (0x0004eb85) popup_sp_fs_action_menu_bg_pane_g4

0x23bd,	// (0x0004eb8d) popup_sp_fs_action_menu_bg_pane_g5

0x23c5,	// (0x0004eb95) popup_sp_fs_action_menu_bg_pane_g6

0x23cd,	// (0x0004eb9d) popup_sp_fs_action_menu_bg_pane_g7

0x23d5,	// (0x0004eba5) popup_sp_fs_action_menu_bg_pane_g8

0x23dd,	// (0x0004ebad) popup_sp_fs_action_menu_bg_pane_g9

0x23e5,	// (0x0004ebb5) popup_sp_fs_action_menu_bg_pane_g10

0x23e5,	// (0x0004ebb5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0005b97c) popup_sp_fs_action_menu_bg_pane_g

0x0653,	// (0x0004ce23) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t3_g3_g1

0x065f,	// (0x0004ce2f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x2_t3_g3_g2

0x066b,	// (0x0004ce3b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0005ba2c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0005ba2c) list_medium_line_x2_t3_g3_g

0x0677,	// (0x0004ce47) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0677,	// (0x0004ce47) list_medium_line_x2_t3_g3_t1

0x6b7c,	// (0x0005334c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6b7c,	// (0x0005334c) list_medium_line_x2_t3_g3_t2

0x068c,	// (0x0004ce5c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0005ba33) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0005ba33) list_medium_line_x2_t3_g3_t

0x0653,	// (0x0004ce23) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t3_g2_g1

0x066b,	// (0x0004ce3b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0005ba3a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0005ba3a) list_medium_line_x2_t3_g2_g

0x06a1,	// (0x0004ce71) list_medium_line_x2_t3_g2_t1_ParamLimits

0x06a1,	// (0x0004ce71) list_medium_line_x2_t3_g2_t1

0x06b7,	// (0x0004ce87) list_medium_line_x2_t3_g2_t2_ParamLimits

0x06b7,	// (0x0004ce87) list_medium_line_x2_t3_g2_t2

0x06c9,	// (0x0004ce99) list_medium_line_x2_t3_g2_t3_ParamLimits

0x06c9,	// (0x0004ce99) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0005ba3f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0005ba3f) list_medium_line_x2_t3_g2_t

0x0653,	// (0x0004ce23) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t4_g4_g1

0x06e7,	// (0x0004ceb7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x06e7,	// (0x0004ceb7) list_medium_line_x2_t4_g4_g2

0x065f,	// (0x0004ce2f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x2_t4_g4_g3

0x06f3,	// (0x0004cec3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x06f3,	// (0x0004cec3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0005ba46) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0005ba46) list_medium_line_x2_t4_g4_g

0x6b90,	// (0x00053360) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6b90,	// (0x00053360) list_medium_line_x2_t4_g4_t1

0x6baa,	// (0x0005337a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6baa,	// (0x0005337a) list_medium_line_x2_t4_g4_t2

0x6bc0,	// (0x00053390) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6bc0,	// (0x00053390) list_medium_line_x2_t4_g4_t3

0x06ff,	// (0x0004cecf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x06ff,	// (0x0004cecf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0005ba4f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0005ba4f) list_medium_line_x2_t4_g4_t

0x0653,	// (0x0004ce23) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t2_g4_g1

0x06e7,	// (0x0004ceb7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x06e7,	// (0x0004ceb7) list_medium_line_x2_t2_g4_g2

0x065f,	// (0x0004ce2f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x2_t2_g4_g3

0x066b,	// (0x0004ce3b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0005bab6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0005bab6) list_medium_line_x2_t2_g4_g

0x0711,	// (0x0004cee1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0711,	// (0x0004cee1) list_medium_line_x2_t2_g4_t1

0x068c,	// (0x0004ce5c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0005babf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0005babf) list_medium_line_x2_t2_g4_t

0x0653,	// (0x0004ce23) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t2_g3_g1

0x065f,	// (0x0004ce2f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x2_t2_g3_g2

0x066b,	// (0x0004ce3b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0005ba2c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0005ba2c) list_medium_line_x2_t2_g3_g

0x0726,	// (0x0004cef6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0726,	// (0x0004cef6) list_medium_line_x2_t2_g3_t1

0x068c,	// (0x0004ce5c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0005bac4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0005bac4) list_medium_line_x2_t2_g3_t

0x7b8d,	// (0x0005435d) main_sp_fs_list_pane_ParamLimits

0x7b8d,	// (0x0005435d) main_sp_fs_list_pane

0x7b99,	// (0x00054369) sp_fs_scroll_pane_ParamLimits

0x7b99,	// (0x00054369) sp_fs_scroll_pane

0x7ba5,	// (0x00054375) list_medium_line_x2_t3_t1

0x7bb5,	// (0x00054385) list_medium_line_x2_t3_t2

0x0769,	// (0x0004cf39) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0005bb0f) list_medium_line_x2_t3_t

0x7bc3,	// (0x00054393) list_medium_line_x3_t4_t1

0x7bd3,	// (0x000543a3) list_medium_line_x3_t4_t2

0x0777,	// (0x0004cf47) list_medium_line_x3_t4_t3

0x0769,	// (0x0004cf39) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0005bb16) list_medium_line_x3_t4_t

0x7be1,	// (0x000543b1) list_medium_line_x4_t5_t1

0x7bf1,	// (0x000543c1) list_medium_line_x4_t5_t2

0x0777,	// (0x0004cf47) list_medium_line_x4_t5_t3

0x0785,	// (0x0004cf55) list_medium_line_x4_t5_t4

0x0769,	// (0x0004cf39) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0005bb1f) list_medium_line_x4_t5_t

0x0653,	// (0x0004ce23) list_medium_line_t4_g4_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_t4_g4_g1

0x06f3,	// (0x0004cec3) list_medium_line_t4_g4_g2_ParamLimits

0x06f3,	// (0x0004cec3) list_medium_line_t4_g4_g2

0x0793,	// (0x0004cf63) list_medium_line_t4_g4_g3_ParamLimits

0x0793,	// (0x0004cf63) list_medium_line_t4_g4_g3

0x066b,	// (0x0004ce3b) list_medium_line_t4_g4_g4_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0005bb2a) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0005bb2a) list_medium_line_t4_g4_g

0x079f,	// (0x0004cf6f) list_medium_line_t4_g4_t1_ParamLimits

0x079f,	// (0x0004cf6f) list_medium_line_t4_g4_t1

0x07b4,	// (0x0004cf84) list_medium_line_t4_g4_t2_ParamLimits

0x07b4,	// (0x0004cf84) list_medium_line_t4_g4_t2

0x07ca,	// (0x0004cf9a) list_medium_line_t4_g4_t3_ParamLimits

0x07ca,	// (0x0004cf9a) list_medium_line_t4_g4_t3

0x068c,	// (0x0004ce5c) list_medium_line_t4_g4_t4_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0005bb33) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0005bb33) list_medium_line_t4_g4_t

0x7d12,	// (0x000544e2) chi_dic_find_pane_g1

0x8d7f,	// (0x0005554f) main_tport_pane

0x0d34,	// (0x0004d504) list_medium_line_plain_t1

0x0d7e,	// (0x0004d54e) list_medium_line_t2_g2_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_t2_g2_g1

0x0d8a,	// (0x0004d55a) list_medium_line_t2_g2_g2_ParamLimits

0x0d8a,	// (0x0004d55a) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0005c1ef) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0005c1ef) list_medium_line_t2_g2_g

0xb78b,	// (0x00057f5b) list_medium_line_t2_g2_t1_ParamLimits

0xb78b,	// (0x00057f5b) list_medium_line_t2_g2_t1

0xb7a2,	// (0x00057f72) list_medium_line_t2_g2_t2_ParamLimits

0xb7a2,	// (0x00057f72) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0005c1f4) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0005c1f4) list_medium_line_t2_g2_t

0x0ed2,	// (0x0004d6a2) aid_sp_fs_list_icon_a_sm

0x0eda,	// (0x0004d6aa) aid_sp_fs_list_icon_d

0x0ee2,	// (0x0004d6b2) aid_sp_fs_text_primary

0x0eeb,	// (0x0004d6bb) aid_sp_fs_text_secondary

0x0ef4,	// (0x0004d6c4) list_medium_line

0x0ef4,	// (0x0004d6c4) list_medium_line_g2

0x0ef4,	// (0x0004d6c4) list_medium_line_g3

0x0ef4,	// (0x0004d6c4) list_medium_line_plain

0x0ef4,	// (0x0004d6c4) list_medium_line_plain_t2

0x0ef4,	// (0x0004d6c4) list_medium_line_plain_t3

0x0ef4,	// (0x0004d6c4) list_medium_line_right_icon

0x0ef4,	// (0x0004d6c4) list_medium_line_right_iconx2

0x0ef4,	// (0x0004d6c4) list_medium_line_t2

0x0ef4,	// (0x0004d6c4) list_medium_line_t2_g2

0x0ef4,	// (0x0004d6c4) list_medium_line_t2_g3

0x0ef4,	// (0x0004d6c4) list_medium_line_t2_right_icon

0x0ef4,	// (0x0004d6c4) list_medium_line_t2_right_iconx2

0x0ef4,	// (0x0004d6c4) list_medium_line_t3

0x0ef4,	// (0x0004d6c4) list_medium_line_t3_g2

0x0ef4,	// (0x0004d6c4) list_medium_line_t3_g3

0x0ef4,	// (0x0004d6c4) list_medium_line_t3_right_iconx2

0x0efd,	// (0x0004d6cd) list_medium_line_t4_g4

0x0f06,	// (0x0004d6d6) list_medium_line_x2

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t2_g2

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t2_g3

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t2_g4

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t3

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t3_g2

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t3_g3

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t3_g4

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t4_g2

0x0f06,	// (0x0004d6d6) list_medium_line_x2_t4_g4

0x0f0f,	// (0x0004d6df) list_medium_line_x3

0x0f0f,	// (0x0004d6df) list_medium_line_x3_t4

0x0f0f,	// (0x0004d6df) list_medium_line_x3_t4_g4

0x0efd,	// (0x0004d6cd) list_medium_line_x4_t4

0x0efd,	// (0x0004d6cd) list_medium_line_x4_t4_g7

0x0efd,	// (0x0004d6cd) list_medium_line_x4_t5

0x0f18,	// (0x0004d6e8) list_single_fs_dyc_pane_ParamLimits

0x0f18,	// (0x0004d6e8) list_single_fs_dyc_pane

0x0653,	// (0x0004ce23) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x4_t4_g7_g1

0x0f49,	// (0x0004d719) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0f49,	// (0x0004d719) list_medium_line_x4_t4_g7_g2

0x0f55,	// (0x0004d725) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0f55,	// (0x0004d725) list_medium_line_x4_t4_g7_g3

0x0f64,	// (0x0004d734) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0f64,	// (0x0004d734) list_medium_line_x4_t4_g7_g4

0x0f70,	// (0x0004d740) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0f70,	// (0x0004d740) list_medium_line_x4_t4_g7_g5

0x0f7f,	// (0x0004d74f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0f7f,	// (0x0004d74f) list_medium_line_x4_t4_g7_g6

0x0f8e,	// (0x0004d75e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0f8e,	// (0x0004d75e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x0005c3b8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x0005c3b8) list_medium_line_x4_t4_g7_g

0x0f9a,	// (0x0004d76a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0f9a,	// (0x0004d76a) list_medium_line_x4_t4_g7_t1

0x0faf,	// (0x0004d77f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0faf,	// (0x0004d77f) list_medium_line_x4_t4_g7_t2

0x0fc4,	// (0x0004d794) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0fc4,	// (0x0004d794) list_medium_line_x4_t4_g7_t3

0x0fd9,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0fd9,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t4

0x0feb,	// (0x0004d7bb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0feb,	// (0x0004d7bb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x0005c3c7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x0005c3c7) list_medium_line_x4_t4_g7_t

0x0ffd,	// (0x0004d7cd) list_single_dyc_row_pane_ParamLimits

0x0ffd,	// (0x0004d7cd) list_single_dyc_row_pane

0xcd14,	// (0x000594e4) call5_gesture_pane_ParamLimits

0xcd14,	// (0x000594e4) call5_gesture_pane

0xcd4a,	// (0x0005951a) call5_windows_pane_ParamLimits

0xcd4a,	// (0x0005951a) call5_windows_pane

0xcdc2,	// (0x00059592) call5_swipe_1_pane_cp_ParamLimits

0xcdc2,	// (0x00059592) call5_swipe_1_pane_cp

0xcdce,	// (0x0005959e) call5_swipe_2_pane_cp_ParamLimits

0xcdce,	// (0x0005959e) call5_swipe_2_pane_cp

0x2d46,	// (0x0004f516) call5_image_pane_cp

0xcdda,	// (0x000595aa) popup_call5_audio_first_window_cp_ParamLimits

0xcdda,	// (0x000595aa) popup_call5_audio_first_window_cp

0xef66,	// (0x0005b736) call5_swipe_1_pane_g1_cp_ParamLimits

0xef66,	// (0x0005b736) call5_swipe_1_pane_g1_cp

0xefa6,	// (0x0005b776) call5_swipe_1_pane_g2_cp

0xef7f,	// (0x0005b74f) call5_swipe_1_pane_t1_cp_ParamLimits

0xef7f,	// (0x0005b74f) call5_swipe_1_pane_t1_cp

0xef66,	// (0x0005b736) call5_swipe_2_pane_g1_cp_ParamLimits

0xef66,	// (0x0005b736) call5_swipe_2_pane_g1_cp

0xefae,	// (0x0005b77e) call5_swipe_2_pane_g2_cp

0xefb6,	// (0x0005b786) call5_swipe_2_pane_t1_cp_ParamLimits

0xefb6,	// (0x0005b786) call5_swipe_2_pane_t1_cp

0x0459,	// (0x0004cc29) main_sp_fs_email_pane

0xefcb,	// (0x0005b79b) main_sp_fs_listscroll_pane_te

0x101a,	// (0x0004d7ea) popup_sp_fs_action_menu_pane_ParamLimits

0x101a,	// (0x0004d7ea) popup_sp_fs_action_menu_pane

0x45f8,	// (0x00050dc8) bg_sp_fs_ctrlbar_pane_g1

0xefd4,	// (0x0005b7a4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefdd,	// (0x0005b7ad) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xefe6,	// (0x0005b7b6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x45f8,	// (0x00050dc8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0005c4b0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x43cf,	// (0x00050b9f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x43cf,	// (0x00050b9f) bg_sp_fs_ctrlbar_ddmenu_pane

0xefef,	// (0x0005b7bf) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xefef,	// (0x0005b7bf) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xeffb,	// (0x0005b7cb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xeffb,	// (0x0005b7cb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0005c4b9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0005c4b9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf007,	// (0x0005b7d7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf007,	// (0x0005b7d7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1060,	// (0x0004d830) list_medium_line_t2_right_icon_g1

0xcde8,	// (0x000595b8) list_medium_line_t2_right_icon_t1

0xcdf8,	// (0x000595c8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0005c4be) list_medium_line_t2_right_icon_t

0x4175,	// (0x00050945) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4175,	// (0x00050945) bg_sp_fs_ctrlbar_pane

0xce5d,	// (0x0005962d) main_sp_fs_ctrlbar_button_pane_cp01

0xce65,	// (0x00059635) main_sp_fs_ctrlbar_ddmenu_pane

0xf05b,	// (0x0005b82b) main_sp_fs_ctrlbar_pane_g1

0xf067,	// (0x0005b837) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0005c4c3) main_sp_fs_ctrlbar_pane_g

0xf073,	// (0x0005b843) main_sp_fs_ctrlbar_pane_t1

0xce6f,	// (0x0005963f) main_sp_fs_ctrlbar_pane

0xce8b,	// (0x0005965b) main_sp_fs_listscroll_pane_te_cp01

0xce9c,	// (0x0005966c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xce9c,	// (0x0005966c) popup_sp_fs_action_menu_pane_cp01

0x0459,	// (0x0004cc29) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0459,	// (0x0004cc29) bg_sp_fs_highlight_list_pane_cp01

0x1068,	// (0x0004d838) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1068,	// (0x0004d838) sp_fs_action_menu_list_gene_pane_g1

0xf088,	// (0x0005b858) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf088,	// (0x0005b858) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x0005c4c8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x0005c4c8) sp_fs_action_menu_list_gene_pane_g

0x1077,	// (0x0004d847) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1077,	// (0x0004d847) sp_fs_action_menu_list_gene_pane_t1

0x108f,	// (0x0004d85f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x108f,	// (0x0004d85f) sp_fs_action_menu_list_gene_pane

0xf095,	// (0x0005b865) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf095,	// (0x0005b865) popup_sp_fs_action_menu_bg_pane

0x10b2,	// (0x0004d882) sp_fs_action_menu_list_pane_ParamLimits

0x10b2,	// (0x0004d882) sp_fs_action_menu_list_pane

0xf0a3,	// (0x0005b873) sp_fs_scroll_pane_cp01_ParamLimits

0xf0a3,	// (0x0005b873) sp_fs_scroll_pane_cp01

0xceb6,	// (0x00059686) list_medium_line_plain_t2_t1

0xcec6,	// (0x00059696) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x0005c4cd) list_medium_line_plain_t2_t

0xced4,	// (0x000596a4) list_medium_line_plain_t3_t1

0xcee4,	// (0x000596b4) list_medium_line_plain_t3_t2

0xcef2,	// (0x000596c2) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0005c4d2) list_medium_line_plain_t3_t

0x0653,	// (0x0004ce23) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t2_g2_g1

0x066b,	// (0x0004ce3b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0005ba3a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0005ba3a) list_medium_line_x2_t2_g2_g

0x079f,	// (0x0004cf6f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x079f,	// (0x0004cf6f) list_medium_line_x2_t2_g2_t1

0x068c,	// (0x0004ce5c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x0005c4d9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x0005c4d9) list_medium_line_x2_t2_g2_t

0x0653,	// (0x0004ce23) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t4_g2_g1

0x10d6,	// (0x0004d8a6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x10d6,	// (0x0004d8a6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0005c4de) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0005c4de) list_medium_line_x2_t4_g2_g

0xcf00,	// (0x000596d0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcf00,	// (0x000596d0) list_medium_line_x2_t4_g2_t1

0xcf1a,	// (0x000596ea) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcf1a,	// (0x000596ea) list_medium_line_x2_t4_g2_t2

0xcf30,	// (0x00059700) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcf30,	// (0x00059700) list_medium_line_x2_t4_g2_t3

0x068c,	// (0x0004ce5c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0005c4e3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0005c4e3) list_medium_line_x2_t4_g2_t

0x10e8,	// (0x0004d8b8) list_medium_line_t3_right_iconx2_g1

0x1060,	// (0x0004d830) list_medium_line_t3_right_iconx2_g2

0xcf45,	// (0x00059715) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0005c4ec) list_medium_line_t3_right_iconx2_g

0xcf4f,	// (0x0005971f) list_medium_line_t3_right_iconx2_t1

0xcf5f,	// (0x0005972f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0005c4f3) list_medium_line_t3_right_iconx2_t

0x0653,	// (0x0004ce23) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x3_t4_g4_g1

0x065f,	// (0x0004ce2f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x3_t4_g4_g2

0x06f3,	// (0x0004cec3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x06f3,	// (0x0004cec3) list_medium_line_x3_t4_g4_g3

0x10f0,	// (0x0004d8c0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x10f0,	// (0x0004d8c0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0005c4f8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0005c4f8) list_medium_line_x3_t4_g4_g

0xcf6d,	// (0x0005973d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcf6d,	// (0x0005973d) list_medium_line_x3_t4_g4_t1

0xcf84,	// (0x00059754) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcf84,	// (0x00059754) list_medium_line_x3_t4_g4_t2

0x10fc,	// (0x0004d8cc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x10fc,	// (0x0004d8cc) list_medium_line_x3_t4_g4_t3

0x1111,	// (0x0004d8e1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1111,	// (0x0004d8e1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0005c501) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0005c501) list_medium_line_x3_t4_g4_t

0xcf99,	// (0x00059769) list_single_dyc_row_text_pane_t1_ParamLimits

0xcf99,	// (0x00059769) list_single_dyc_row_text_pane_t1

0xcfd6,	// (0x000597a6) list_single_dyc_row_text_pane_t2_ParamLimits

0xcfd6,	// (0x000597a6) list_single_dyc_row_text_pane_t2

0x112e,	// (0x0004d8fe) list_single_dyc_row_text_pane_t3_ParamLimits

0x112e,	// (0x0004d8fe) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x0005c50a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0005c50a) list_single_dyc_row_text_pane_t

0x1140,	// (0x0004d910) list_single_dyc_row_pane_g1_ParamLimits

0x1140,	// (0x0004d910) list_single_dyc_row_pane_g1

0x114c,	// (0x0004d91c) list_single_dyc_row_pane_g2_ParamLimits

0x114c,	// (0x0004d91c) list_single_dyc_row_pane_g2

0x1158,	// (0x0004d928) list_single_dyc_row_pane_g3_ParamLimits

0x1158,	// (0x0004d928) list_single_dyc_row_pane_g3

0x1164,	// (0x0004d934) list_single_dyc_row_pane_g4_ParamLimits

0x1164,	// (0x0004d934) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0005c511) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0005c511) list_single_dyc_row_pane_g

0x1170,	// (0x0004d940) list_single_dyc_row_text_pane_ParamLimits

0x1170,	// (0x0004d940) list_single_dyc_row_text_pane

0x03e0,	// (0x0004cbb0) bg_sp_fs_scroll_pane

0xf0c9,	// (0x0005b899) thumb_sp_fs_scroll_pane

0x0d7e,	// (0x0004d54e) list_medium_line_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_g1

0x118f,	// (0x0004d95f) list_medium_line_t1_ParamLimits

0x118f,	// (0x0004d95f) list_medium_line_t1

0x0653,	// (0x0004ce23) list_medium_line_x2_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_g1

0x065f,	// (0x0004ce2f) list_medium_line_x2_g2_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x0005c51a) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x0005c51a) list_medium_line_x2_g

0x11a4,	// (0x0004d974) list_medium_line_x2_t1_ParamLimits

0x11a4,	// (0x0004d974) list_medium_line_x2_t1

0x0653,	// (0x0004ce23) list_medium_line_x3_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x3_g1

0x065f,	// (0x0004ce2f) list_medium_line_x3_g2_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x0005c51a) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x0005c51a) list_medium_line_x3_g

0x11a4,	// (0x0004d974) list_medium_line_x3_t1_ParamLimits

0x11a4,	// (0x0004d974) list_medium_line_x3_t1

0x11ba,	// (0x0004d98a) thumb_sp_fs_scroll_pane_g1

0x11c3,	// (0x0004d993) thumb_sp_fs_scroll_pane_g2

0x11cc,	// (0x0004d99c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0005c51f) thumb_sp_fs_scroll_pane_g

0x11ba,	// (0x0004d98a) bg_sp_fs_scroll_pane_g1

0x11c3,	// (0x0004d993) bg_sp_fs_scroll_pane_g2

0x11cc,	// (0x0004d99c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0005c51f) bg_sp_fs_scroll_pane_g

0x0653,	// (0x0004ce23) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0653,	// (0x0004ce23) list_medium_line_x2_t3_g4_g1

0x06e7,	// (0x0004ceb7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x06e7,	// (0x0004ceb7) list_medium_line_x2_t3_g4_g2

0x065f,	// (0x0004ce2f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x065f,	// (0x0004ce2f) list_medium_line_x2_t3_g4_g3

0x066b,	// (0x0004ce3b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x066b,	// (0x0004ce3b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0005bab6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0005bab6) list_medium_line_x2_t3_g4_g

0xd030,	// (0x00059800) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd030,	// (0x00059800) list_medium_line_x2_t3_g4_t1

0xd046,	// (0x00059816) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd046,	// (0x00059816) list_medium_line_x2_t3_g4_t2

0x068c,	// (0x0004ce5c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x068c,	// (0x0004ce5c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x0005c526) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x0005c526) list_medium_line_x2_t3_g4_t

0x0d7e,	// (0x0004d54e) list_medium_line_g2_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_g2_g1

0x0d8a,	// (0x0004d55a) list_medium_line_g2_g2_ParamLimits

0x0d8a,	// (0x0004d55a) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0005c1ef) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0005c1ef) list_medium_line_g2_g

0x11d5,	// (0x0004d9a5) list_medium_line_g2_t1_ParamLimits

0x11d5,	// (0x0004d9a5) list_medium_line_g2_t1

0x0d7e,	// (0x0004d54e) list_medium_line_t3_g2_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_t3_g2_g1

0x0d8a,	// (0x0004d55a) list_medium_line_t3_g2_g2_ParamLimits

0x0d8a,	// (0x0004d55a) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0005c1ef) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0005c1ef) list_medium_line_t3_g2_g

0xd05f,	// (0x0005982f) list_medium_line_t3_g2_t1_ParamLimits

0xd05f,	// (0x0005982f) list_medium_line_t3_g2_t1

0xd076,	// (0x00059846) list_medium_line_t3_g2_t2_ParamLimits

0xd076,	// (0x00059846) list_medium_line_t3_g2_t2

0xd08b,	// (0x0005985b) list_medium_line_t3_g2_t3_ParamLimits

0xd08b,	// (0x0005985b) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x0005c52d) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x0005c52d) list_medium_line_t3_g2_t

0x1060,	// (0x0004d830) list_medium_line_right_icon_g1

0x11ea,	// (0x0004d9ba) list_medium_line_right_icon_t1

0x0d7e,	// (0x0004d54e) list_medium_line_t2_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_t2_g1

0xd0a4,	// (0x00059874) list_medium_line_t2_t1_ParamLimits

0xd0a4,	// (0x00059874) list_medium_line_t2_t1

0xd0be,	// (0x0005988e) list_medium_line_t2_t2_ParamLimits

0xd0be,	// (0x0005988e) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x0005c534) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x0005c534) list_medium_line_t2_t

0x0d7e,	// (0x0004d54e) list_medium_line_t3_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_t3_g1

0xd0d3,	// (0x000598a3) list_medium_line_t3_t1_ParamLimits

0xd0d3,	// (0x000598a3) list_medium_line_t3_t1

0xd0ed,	// (0x000598bd) list_medium_line_t3_t2_ParamLimits

0xd0ed,	// (0x000598bd) list_medium_line_t3_t2

0xd103,	// (0x000598d3) list_medium_line_t3_t3_ParamLimits

0xd103,	// (0x000598d3) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x0005c539) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x0005c539) list_medium_line_t3_t

0x0d7e,	// (0x0004d54e) list_medium_line_g3_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_g3_g1

0x11f8,	// (0x0004d9c8) list_medium_line_g3_g2_ParamLimits

0x11f8,	// (0x0004d9c8) list_medium_line_g3_g2

0x0d8a,	// (0x0004d55a) list_medium_line_g3_g3_ParamLimits

0x0d8a,	// (0x0004d55a) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x0005c540) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x0005c540) list_medium_line_g3_g

0x1204,	// (0x0004d9d4) list_medium_line_g3_t1_ParamLimits

0x1204,	// (0x0004d9d4) list_medium_line_g3_t1

0x0d7e,	// (0x0004d54e) list_medium_line_t2_g3_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_t2_g3_g1

0x11f8,	// (0x0004d9c8) list_medium_line_t2_g3_g2_ParamLimits

0x11f8,	// (0x0004d9c8) list_medium_line_t2_g3_g2

0x0d8a,	// (0x0004d55a) list_medium_line_t2_g3_g3_ParamLimits

0x0d8a,	// (0x0004d55a) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x0005c540) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x0005c540) list_medium_line_t2_g3_g

0xd118,	// (0x000598e8) list_medium_line_t2_g3_t1_ParamLimits

0xd118,	// (0x000598e8) list_medium_line_t2_g3_t1

0xd12f,	// (0x000598ff) list_medium_line_t2_g3_t2_ParamLimits

0xd12f,	// (0x000598ff) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x0005c547) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x0005c547) list_medium_line_t2_g3_t

0x0d7e,	// (0x0004d54e) list_medium_line_t3_g3_g1_ParamLimits

0x0d7e,	// (0x0004d54e) list_medium_line_t3_g3_g1

0x11f8,	// (0x0004d9c8) list_medium_line_t3_g3_g2_ParamLimits

0x11f8,	// (0x0004d9c8) list_medium_line_t3_g3_g2

0x0d8a,	// (0x0004d55a) list_medium_line_t3_g3_g3_ParamLimits

0x0d8a,	// (0x0004d55a) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x0005c540) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x0005c540) list_medium_line_t3_g3_g

0xd144,	// (0x00059914) list_medium_line_t3_g3_t1_ParamLimits

0xd144,	// (0x00059914) list_medium_line_t3_g3_t1

0xd158,	// (0x00059928) list_medium_line_t3_g3_t2_ParamLimits

0xd158,	// (0x00059928) list_medium_line_t3_g3_t2

0xd16a,	// (0x0005993a) list_medium_line_t3_g3_t3_ParamLimits

0xd16a,	// (0x0005993a) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x0005c54c) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x0005c54c) list_medium_line_t3_g3_t

0x10e8,	// (0x0004d8b8) list_medium_line_right_iconx2_g1

0x1060,	// (0x0004d830) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x0005c553) list_medium_line_right_iconx2_g

0x1219,	// (0x0004d9e9) list_medium_line_right_iconx2_t1

0x10e8,	// (0x0004d8b8) list_medium_line_t2_right_iconx2_g1

0x1060,	// (0x0004d830) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x0005c553) list_medium_line_t2_right_iconx2_g

0xd17e,	// (0x0005994e) list_medium_line_t2_right_iconx2_t1

0xd18e,	// (0x0005995e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x0005c558) list_medium_line_t2_right_iconx2_t

0x1227,	// (0x0004d9f7) list_medium_line_x4_t4_t1

0xd19c,	// (0x0005996c) list_medium_line_x4_t4_t2

0xd1ac,	// (0x0005997c) list_medium_line_x4_t4_t3

0xd1bc,	// (0x0005998c) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x0005c55d) list_medium_line_x4_t4_t

0xd1f5,	// (0x000599c5) tport_appsw_pane_ParamLimits

0xd1f5,	// (0x000599c5) tport_appsw_pane

0xd203,	// (0x000599d3) tport_contact_pane_ParamLimits

0xd203,	// (0x000599d3) tport_contact_pane

0xd211,	// (0x000599e1) tport_listscroll_pane_ParamLimits

0xd211,	// (0x000599e1) tport_listscroll_pane

0xd21f,	// (0x000599ef) cell_tport_appsw_pane_ParamLimits

0xd21f,	// (0x000599ef) cell_tport_appsw_pane

0x488d,	// (0x0005105d) tport_appsw_pane_g1_ParamLimits

0x488d,	// (0x0005105d) tport_appsw_pane_g1

0x1235,	// (0x0004da05) tport_contact_pane_g1

0x123e,	// (0x0004da0e) tport_contact_pane_t1

0x124c,	// (0x0004da1c) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x0005c566) tport_contact_pane_t

0x125a,	// (0x0004da2a) list_tport_pane

0x1263,	// (0x0004da33) scroll_pane_cp_030

0xd24a,	// (0x00059a1a) cell_tport_appsw_pane_g1

0x127c,	// (0x0004da4c) cell_tport_appsw_pane_t1

0x03e0,	// (0x0004cbb0) grid_highlight_pane_cp019

0xd25a,	// (0x00059a2a) list_tport_double_graphic_pane_ParamLimits

0xd25a,	// (0x00059a2a) list_tport_double_graphic_pane

0x0459,	// (0x0004cc29) list_highlight_pane_cp023_ParamLimits

0x0459,	// (0x0004cc29) list_highlight_pane_cp023

0xd26b,	// (0x00059a3b) list_tport_double_graphic_pane_g1_ParamLimits

0xd26b,	// (0x00059a3b) list_tport_double_graphic_pane_g1

0xd278,	// (0x00059a48) list_tport_double_graphic_pane_t1_ParamLimits

0xd278,	// (0x00059a48) list_tport_double_graphic_pane_t1

0xd28d,	// (0x00059a5d) list_tport_double_graphic_pane_t2_ParamLimits

0xd28d,	// (0x00059a5d) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0005c572) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0005c572) list_tport_double_graphic_pane_t

0x03e0,	// (0x0004cbb0) main_cale_note_pane

0xaf88,	// (0x00057758) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf88,	// (0x00057758) cell_vitu2_function_top_wide_pane_cp01

0xc8a9,	// (0x00059079) wait_bar_pane_cp05_ParamLimits

0x03e0,	// (0x0004cbb0) listscroll_cmail_pane

0x1292,	// (0x0004da62) list_cmail_pane

0xd2a9,	// (0x00059a79) list_cmail_body_pane

0xd2be,	// (0x00059a8e) list_single_cmail_header_caption_pane

0xd2d8,	// (0x00059aa8) list_single_cmail_header_detail_pane_ParamLimits

0xd2d8,	// (0x00059aa8) list_single_cmail_header_detail_pane

0xd307,	// (0x00059ad7) list_single_cmail_header_caption_pane_t1

0xd317,	// (0x00059ae7) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd317,	// (0x00059ae7) list_single_cmail_header_detail_pane_g1

0x12b2,	// (0x0004da82) list_single_cmail_header_detail_pane_g2_ParamLimits

0x12b2,	// (0x0004da82) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x0005c577) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x0005c577) list_single_cmail_header_detail_pane_g

0x12cb,	// (0x0004da9b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x12cb,	// (0x0004da9b) list_single_cmail_header_detail_pane_t1

0x1309,	// (0x0004dad9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1309,	// (0x0004dad9) list_single_cmail_header_editor_pane_bg

0xed38,	// (0x0005b508) list_cmail_body_pane_g1

0x131b,	// (0x0004daeb) list_cmail_body_pane_t1

0xe12a,	// (0x0005a8fa) list_single_cmail_header_editor_pane_bg_g1

0x26fc,	// (0x0004eecc) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe13a,	// (0x0005a90a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe132,	// (0x0005a902) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe354,	// (0x0005ab24) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe15a,	// (0x0005a92a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe14a,	// (0x0005a91a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe152,	// (0x0005a922) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x26dc,	// (0x0004eeac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd355,	// (0x00059b25) calenote_gesture_pane_ParamLimits

0xd355,	// (0x00059b25) calenote_gesture_pane

0xd36f,	// (0x00059b3f) calenote_window_pane_ParamLimits

0xd36f,	// (0x00059b3f) calenote_window_pane

0x1329,	// (0x0004daf9) popup_note_window_cp01

0xd387,	// (0x00059b57) calenote_swipe_1_pane_ParamLimits

0xd387,	// (0x00059b57) calenote_swipe_1_pane

0xcdce,	// (0x0005959e) calenote_swipe_2_pane_ParamLimits

0xcdce,	// (0x0005959e) calenote_swipe_2_pane

0xef66,	// (0x0005b736) calenote_swipe_1_pane_g1_ParamLimits

0xef66,	// (0x0005b736) calenote_swipe_1_pane_g1

0xef73,	// (0x0005b743) calenote_swipe_1_pane_g2_ParamLimits

0xef73,	// (0x0005b743) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0005c4a6) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0005c4a6) calenote_swipe_1_pane_g

0x133b,	// (0x0004db0b) calenote_swipe_1_pane_t1_ParamLimits

0x133b,	// (0x0004db0b) calenote_swipe_1_pane_t1

0xef66,	// (0x0005b736) calenote_swipe_2_pane_g1_ParamLimits

0xef66,	// (0x0005b736) calenote_swipe_2_pane_g1

0x135a,	// (0x0004db2a) calenote_swipe_2_pane_g2_ParamLimits

0x135a,	// (0x0004db2a) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0005c583) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0005c583) calenote_swipe_2_pane_g

0x1366,	// (0x0004db36) calenote_swipe_2_pane_t1_ParamLimits

0x1366,	// (0x0004db36) calenote_swipe_2_pane_t1

0x03e0,	// (0x0004cbb0) main_mup_navstr_pane

0x9d2a,	// (0x000564fa) main_mup3_pane_t7_ParamLimits

0x9d2a,	// (0x000564fa) main_mup3_pane_t7

0xa6fd,	// (0x00056ecd) main_mp4_pane_g6_ParamLimits

0xa6fd,	// (0x00056ecd) main_mp4_pane_g6

0xaa6d,	// (0x0005723d) main_image3_pane_t4_ParamLimits

0xaa6d,	// (0x0005723d) main_image3_pane_t4

0xd39a,	// (0x00059b6a) popup_navstr_preview_pane_ParamLimits

0xd39a,	// (0x00059b6a) popup_navstr_preview_pane

0xd3a6,	// (0x00059b76) scroll_navstr_pane_ParamLimits

0xd3a6,	// (0x00059b76) scroll_navstr_pane

0x03e0,	// (0x0004cbb0) bg_popup_preview_window_pane_cp04

0x138d,	// (0x0004db5d) popup_navstr_preview_pane_t1

0xd3b2,	// (0x00059b82) scroll_navstr_pane_g1_ParamLimits

0xd3b2,	// (0x00059b82) scroll_navstr_pane_g1

0xd3bf,	// (0x00059b8f) scroll_navstr_pane_t1_ParamLimits

0xd3bf,	// (0x00059b8f) scroll_navstr_pane_t1

0x1332,	// (0x0004db02) bg_button_pane_cp014

0x1332,	// (0x0004db02) bg_button_pane_cp030

0xccba,	// (0x0005948a) list_double_fisheye_pane_g4_ParamLimits

0xccba,	// (0x0005948a) list_double_fisheye_pane_g4

0xccc6,	// (0x00059496) list_double_fisheye_pane_g5_ParamLimits

0xccc6,	// (0x00059496) list_double_fisheye_pane_g5

0x129a,	// (0x0004da6a) sp_fs_scroll_pane_cp03

0xf05b,	// (0x0005b82b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf067,	// (0x0005b837) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0005c4c3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf073,	// (0x0005b843) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd29f,	// (0x00059a6f) sp_fs_scroll_pane_cp02

0x2408,	// (0x0004ebd8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2408,	// (0x0004ebd8) popup_sp_fs_calendar_preview_list_single_pane

0x03e0,	// (0x0004cbb0) main_cam6_pano_pane

0x0459,	// (0x0004cc29) main_mup3_pane_ParamLimits

0x03e0,	// (0x0004cbb0) main_phacti_pane

0xc77a,	// (0x00058f4a) bg_button_pane_cp11

0xc792,	// (0x00058f62) main_mobtv_info_pane_g2_ParamLimits

0xc792,	// (0x00058f62) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0005c423) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0005c423) main_mobtv_info_pane_g

0xc946,	// (0x00059116) sc_clock_pane_t5_ParamLimits

0xc946,	// (0x00059116) sc_clock_pane_t5

0xcb34,	// (0x00059304) main_radioblah_pane_g1_ParamLimits

0xeeb2,	// (0x0005b682) main_radioblah_pane_t3_ParamLimits

0xeeb2,	// (0x0005b682) main_radioblah_pane_t3

0xeeca,	// (0x0005b69a) main_radioblah_pane_t4_ParamLimits

0xeeca,	// (0x0005b69a) main_radioblah_pane_t4

0xcb52,	// (0x00059322) main_radioblah_text_pane_ParamLimits

0xcb52,	// (0x00059322) main_radioblah_text_pane

0xcb5f,	// (0x0005932f) main_radioblah_info_pane_g1_ParamLimits

0xcbf8,	// (0x000593c8) main_radioblah_info_pane_t4_ParamLimits

0xcbf8,	// (0x000593c8) main_radioblah_info_pane_t4

0x0459,	// (0x0004cc29) main_sp_fs_calendar_pane

0xd3d1,	// (0x00059ba1) main_phacti_pane_g1

0xd3d9,	// (0x00059ba9) phacti_note_pane_ParamLimits

0xd3d9,	// (0x00059ba9) phacti_note_pane

0x13a4,	// (0x0004db74) phacti_term_pane_ParamLimits

0x13a4,	// (0x0004db74) phacti_term_pane

0x13b9,	// (0x0004db89) phacti_note_pane_t1_ParamLimits

0x13b9,	// (0x0004db89) phacti_note_pane_t1

0x13d0,	// (0x0004dba0) phacti_term_pane_g1

0x13d8,	// (0x0004dba8) phacti_term_pane_t1_ParamLimits

0x13d8,	// (0x0004dba8) phacti_term_pane_t1

0x1402,	// (0x0004dbd2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x140a,	// (0x0004dbda) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0005c58d) popup_sp_fs_calendar_preview_list_single_pane_g

0x1412,	// (0x0004dbe2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1412,	// (0x0004dbe2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1428,	// (0x0004dbf8) aid_popup_sp_fs_bg_corner_pane

0x45f8,	// (0x00050dc8) popup_sp_fs_calendar_preview_bg_pane_g1

0x03e0,	// (0x0004cbb0) popup_sp_fs_calendar_preview_bg_pane

0x1430,	// (0x0004dc00) popup_sp_fs_calendar_preview_list_pane

0x0459,	// (0x0004cc29) bg_main_sp_fs_cale_pane_ParamLimits

0x0459,	// (0x0004cc29) bg_main_sp_fs_cale_pane

0x1438,	// (0x0004dc08) listscroll_cale_mrui_pane_ParamLimits

0x1438,	// (0x0004dc08) listscroll_cale_mrui_pane

0x144c,	// (0x0004dc1c) listscroll_sp_fs_schedule_track_pane

0x1455,	// (0x0004dc25) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1455,	// (0x0004dc25) main_sp_fs_ctrlbar_pane_cp01

0x1466,	// (0x0004dc36) main_sp_fs_ribbon_pane

0x146e,	// (0x0004dc3e) popup_sp_fs_cale_preview_window

0xd418,	// (0x00059be8) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd418,	// (0x00059be8) list_single_sp_fs_schedule_track_pane

0x0ca1,	// (0x0004d471) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0ca1,	// (0x0004d471) bg_sp_fs_highlight_list_pane_cp03

0xd42a,	// (0x00059bfa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd42a,	// (0x00059bfa) list_single_sp_fs_schedule_track_pane_g1

0xd436,	// (0x00059c06) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd436,	// (0x00059c06) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0005c592) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0005c592) list_single_sp_fs_schedule_track_pane_g

0xd442,	// (0x00059c12) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd442,	// (0x00059c12) list_single_sp_fs_schedule_track_pane_t1

0xd460,	// (0x00059c30) sp_fs_schedule_track_pane_ParamLimits

0xd460,	// (0x00059c30) sp_fs_schedule_track_pane

0x1480,	// (0x0004dc50) sp_fs_schedule_track_pane_g1

0x1488,	// (0x0004dc58) sp_fs_schedule_track_pane_g2

0x1490,	// (0x0004dc60) sp_fs_schedule_track_pane_g3

0x1498,	// (0x0004dc68) sp_fs_schedule_track_pane_g4

0x14a0,	// (0x0004dc70) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x0005c597) sp_fs_schedule_track_pane_g

0xe12a,	// (0x0005a8fa) bg_sp_fs_schedule_viewer_highlight_g1

0x26fc,	// (0x0004eecc) bg_sp_fs_schedule_viewer_highlight_g2

0xe132,	// (0x0005a902) bg_sp_fs_schedule_viewer_highlight_g3

0xe13a,	// (0x0005a90a) bg_sp_fs_schedule_viewer_highlight_g4

0xe354,	// (0x0005ab24) bg_sp_fs_schedule_viewer_highlight_g5

0xe14a,	// (0x0005a91a) bg_sp_fs_schedule_viewer_highlight_g6

0xe152,	// (0x0005a922) bg_sp_fs_schedule_viewer_highlight_g7

0xe15a,	// (0x0005a92a) bg_sp_fs_schedule_viewer_highlight_g8

0x26dc,	// (0x0004eeac) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0005c5a2) bg_sp_fs_schedule_viewer_highlight_g

0x03e0,	// (0x0004cbb0) bg_main_sp_fs_ribbon_pane

0xd472,	// (0x00059c42) main_sp_fs_ribbon_pane_g1

0x14a8,	// (0x0004dc78) main_sp_fs_ribbon_pane_t1

0xd47b,	// (0x00059c4b) main_sp_fs_ribbon_pane_t2

0x14b7,	// (0x0004dc87) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x0005c5b5) main_sp_fs_ribbon_pane_t

0x14c6,	// (0x0004dc96) main_sp_fs_ribbon_scheduler_pane

0x14ce,	// (0x0004dc9e) bg_main_sp_fs_ribbon_pane_g1

0x14d7,	// (0x0004dca7) bg_main_sp_fs_ribbon_pane_g2

0x14e0,	// (0x0004dcb0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x0005c5bc) bg_main_sp_fs_ribbon_pane_g

0x14e8,	// (0x0004dcb8) main_sp_fs_ribbon_scheduler_pane_g1

0x14f1,	// (0x0004dcc1) main_sp_fs_ribbon_scheduler_pane_g2

0x14fa,	// (0x0004dcca) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0005c5c3) main_sp_fs_ribbon_scheduler_pane_g

0x1503,	// (0x0004dcd3) list_cale_mrui_pane

0xd48a,	// (0x00059c5a) sp_fs_scroll_pane_cp07_ParamLimits

0xd48a,	// (0x00059c5a) sp_fs_scroll_pane_cp07

0xd4a0,	// (0x00059c70) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd4a0,	// (0x00059c70) bg_sp_fs_schedule_viewer_highlight

0x150c,	// (0x0004dcdc) list_single_sp_fs_schedule_track_pane_cp01

0x1514,	// (0x0004dce4) list_sp_fs_schedule_track_pane

0x151c,	// (0x0004dcec) sp_fs_scroll_pane_cp06_ParamLimits

0x151c,	// (0x0004dcec) sp_fs_scroll_pane_cp06

0x45f8,	// (0x00050dc8) bgmain_sp_fs_calendar_pane_g1

0xd4ad,	// (0x00059c7d) list_single_cale_mrui_pane_ParamLimits

0xd4ad,	// (0x00059c7d) list_single_cale_mrui_pane

0x152e,	// (0x0004dcfe) list_single_cale_mrui_row_pane_ParamLimits

0x152e,	// (0x0004dcfe) list_single_cale_mrui_row_pane

0x153b,	// (0x0004dd0b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x153b,	// (0x0004dd0b) list_single_cale_mrui_row_pane_g1

0x1573,	// (0x0004dd43) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1573,	// (0x0004dd43) list_single_cale_mrui_row_pane_t1

0xd4cf,	// (0x00059c9f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd4cf,	// (0x00059c9f) list_single_cale_mrui_row_pane_t2

0x1585,	// (0x0004dd55) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1585,	// (0x0004dd55) list_single_cale_mrui_row_pane_t3

0x15b4,	// (0x0004dd84) list_single_cale_mrui_row_pane_t4_ParamLimits

0x15b4,	// (0x0004dd84) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x0005c5cf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x0005c5cf) list_single_cale_mrui_row_pane_t

0xd535,	// (0x00059d05) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd535,	// (0x00059d05) list_single_cmail_header_editor_pane_bg_cp01

0xd559,	// (0x00059d29) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd559,	// (0x00059d29) list_single_cmail_header_editor_pane_bg_cp02

0xd575,	// (0x00059d45) main_radioblah_text_pane_t1_ParamLimits

0xd575,	// (0x00059d45) main_radioblah_text_pane_t1

0x15e3,	// (0x0004ddb3) cam6_indi_pane_cp01

0x15eb,	// (0x0004ddbb) cam6_mode_pane_cp01

0x15f3,	// (0x0004ddc3) cam6_pano_pane

0x15fc,	// (0x0004ddcc) cam6_zoom_pane_cp01

0x1606,	// (0x0004ddd6) cam6_pano_image_pane

0x160f,	// (0x0004dddf) cam6_pano_pane_g1

0xed38,	// (0x0005b508) cam6_pano_pane_g2

0x1618,	// (0x0004dde8) cam6_pano_pane_g3

0x1621,	// (0x0004ddf1) cam6_pano_pane_g4

0x4b64,	// (0x00051334) cam6_pano_pane_g5

0x162a,	// (0x0004ddfa) cam6_pano_pane_g6

0x1632,	// (0x0004de02) cam6_pano_pane_g7

0x163a,	// (0x0004de0a) cam6_pano_pane_g8

0x1643,	// (0x0004de13) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x0005c5d8) cam6_pano_pane_g

0x03e0,	// (0x0004cbb0) main_browser_tag_pane

0x1385,	// (0x0004db55) grid_navstr_albumart_pane

0x164e,	// (0x0004de1e) cell_navstr_albumart_pane_ParamLimits

0x164e,	// (0x0004de1e) cell_navstr_albumart_pane

0x166a,	// (0x0004de3a) cell_navstr_albumart_pane_g1

0x3f8e,	// (0x0005075e) cell_navstr_albumart_pane_g2

0x3f9e,	// (0x0005076e) cell_navstr_albumart_pane_g3

0x3f96,	// (0x00050766) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x0005c5eb) cell_navstr_albumart_pane_g

0xd590,	// (0x00059d60) bt_list_pane_ParamLimits

0xd590,	// (0x00059d60) bt_list_pane

0xd5a9,	// (0x00059d79) bt_list_pane_t1

0xd5b8,	// (0x00059d88) bt_list_pane_t2

0x0001,

0xfe24,	// (0x0005c5f4) bt_list_pane_t

0x03e0,	// (0x0004cbb0) main_cale_prevew_pane

0xd5c7,	// (0x00059d97) popup_cale_preview_window_ParamLimits

0xd5c7,	// (0x00059d97) popup_cale_preview_window

0x0459,	// (0x0004cc29) bg_popup_preview_window_pane_cp05_ParamLimits

0x0459,	// (0x0004cc29) bg_popup_preview_window_pane_cp05

0x1672,	// (0x0004de42) list_cale_preview_pane_ParamLimits

0x1672,	// (0x0004de42) list_cale_preview_pane

0xd5e2,	// (0x00059db2) list_double_cale_preview_pane_ParamLimits

0xd5e2,	// (0x00059db2) list_double_cale_preview_pane

0xd5f6,	// (0x00059dc6) list_single_cale_preview_pane_ParamLimits

0xd5f6,	// (0x00059dc6) list_single_cale_preview_pane

0xd60e,	// (0x00059dde) list_single_cale_preview_pane_g1

0xd616,	// (0x00059de6) list_single_cale_preview_pane_t1_ParamLimits

0xd616,	// (0x00059de6) list_single_cale_preview_pane_t1

0xd62b,	// (0x00059dfb) list_double_cale_preview_pane_g1

0xd633,	// (0x00059e03) list_double_cale_preview_pane_t1_ParamLimits

0xd633,	// (0x00059e03) list_double_cale_preview_pane_t1

0xd648,	// (0x00059e18) list_double_cale_preview_pane_t2_ParamLimits

0xd648,	// (0x00059e18) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x0005c5f9) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x0005c5f9) list_double_cale_preview_pane_t

0x03e0,	// (0x0004cbb0) main_ezdial_pane

0x0459,	// (0x0004cc29) main_sp_fs_email_pane_ParamLimits

0xce06,	// (0x000595d6) cmail_ddmenu_btn01_pane_ParamLimits

0xce06,	// (0x000595d6) cmail_ddmenu_btn01_pane

0xce23,	// (0x000595f3) cmail_ddmenu_btn02_pane_ParamLimits

0xce23,	// (0x000595f3) cmail_ddmenu_btn02_pane

0xce41,	// (0x00059611) cmail_ddmenu_btn03_pane_ParamLimits

0xce41,	// (0x00059611) cmail_ddmenu_btn03_pane

0xce6f,	// (0x0005963f) main_sp_fs_ctrlbar_pane_ParamLimits

0xce8b,	// (0x0005965b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd2a9,	// (0x00059a79) list_cmail_body_pane_ParamLimits

0x12a9,	// (0x0004da79) bg_button_pane_cp12

0x12be,	// (0x0004da8e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x12be,	// (0x0004da8e) list_single_cmail_header_detail_pane_g3

0xd32f,	// (0x00059aff) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd32f,	// (0x00059aff) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0005c57e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0005c57e) list_single_cmail_header_detail_pane_t

0x13ed,	// (0x0004dbbd) phacti_term_pane_t2_ParamLimits

0x13ed,	// (0x0004dbbd) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x0005c588) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x0005c588) phacti_term_pane_t

0x167e,	// (0x0004de4e) aid_size_list_single_double

0xd660,	// (0x00059e30) popup_ezdial_listscroll_window

0xd680,	// (0x00059e50) popup_number_entry_window_cp01

0x2d46,	// (0x0004f516) bg_popup_call_pane_cp09

0x168a,	// (0x0004de5a) ezdial_list_pane

0x1692,	// (0x0004de62) scroll_pane_cp23

0x43cf,	// (0x00050b9f) bg_button_pane_cp028_ParamLimits

0x43cf,	// (0x00050b9f) bg_button_pane_cp028

0xd68e,	// (0x00059e5e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd68e,	// (0x00059e5e) cmail_ddmenu_btn01_pane_g1

0xd69e,	// (0x00059e6e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd69e,	// (0x00059e6e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x0005c5fe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x0005c5fe) cmail_ddmenu_btn01_pane_g

0x169a,	// (0x0004de6a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x169a,	// (0x0004de6a) cmail_ddmenu_btn01_pane_t1

0x4175,	// (0x00050945) bg_button_pane_cp029_ParamLimits

0x4175,	// (0x00050945) bg_button_pane_cp029

0xd69e,	// (0x00059e6e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd69e,	// (0x00059e6e) cmail_ddmenu_btn02_pane_g1

0xd6b6,	// (0x00059e86) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd6b6,	// (0x00059e86) cmail_ddmenu_btn02_pane_t1

0x0ca1,	// (0x0004d471) bg_button_pane_cp031_ParamLimits

0x0ca1,	// (0x0004d471) bg_button_pane_cp031

0xd69e,	// (0x00059e6e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd69e,	// (0x00059e6e) cmail_ddmenu_btn03_pane_g1

0xd6b6,	// (0x00059e86) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd6b6,	// (0x00059e86) cmail_ddmenu_btn03_pane_t1

0xa908,	// (0x000570d8) cell_dialer2_keypad_pane_t1_ParamLimits

0xa922,	// (0x000570f2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa922,	// (0x000570f2) cell_dialer2_keypad_pane_t1_copy1

0xc60a,	// (0x00058dda) ncimui_group_button_pane

0x0459,	// (0x0004cc29) main_sp_fs_calendar_pane_ParamLimits

0xd2be,	// (0x00059a8e) list_single_cmail_header_caption_pane_ParamLimits

0x0eeb,	// (0x0004d6bb) aid_recal_txt_sm_pane

0x03e0,	// (0x0004cbb0) mian_recal_day_pane

0x146e,	// (0x0004dc3e) popup_sp_fs_cale_preview_window_ParamLimits

0x03e0,	// (0x0004cbb0) list_recal_day_pane

0x16c8,	// (0x0004de98) list_single_recal_day_pane_ParamLimits

0x16c8,	// (0x0004de98) list_single_recal_day_pane

0x16da,	// (0x0004deaa) list_single_recal_day_pane_g1_ParamLimits

0x16da,	// (0x0004deaa) list_single_recal_day_pane_g1

0x16e6,	// (0x0004deb6) list_single_recal_day_pane_g2_ParamLimits

0x16e6,	// (0x0004deb6) list_single_recal_day_pane_g2

0x16f2,	// (0x0004dec2) list_single_recal_day_pane_g3_ParamLimits

0x16f2,	// (0x0004dec2) list_single_recal_day_pane_g3

0xd6da,	// (0x00059eaa) list_single_recal_day_pane_g4_ParamLimits

0xd6da,	// (0x00059eaa) list_single_recal_day_pane_g4

0x16fe,	// (0x0004dece) list_single_recal_day_pane_g5_ParamLimits

0x16fe,	// (0x0004dece) list_single_recal_day_pane_g5

0x170a,	// (0x0004deda) list_single_recal_day_pane_g6_ParamLimits

0x170a,	// (0x0004deda) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x0005c60d) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x0005c60d) list_single_recal_day_pane_g

0x1716,	// (0x0004dee6) list_single_recal_day_pane_t1

0x1724,	// (0x0004def4) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x0005c61a) list_single_recal_day_pane_t

0xd6e8,	// (0x00059eb8) ncimui_query_button_pane_ParamLimits

0xd6e8,	// (0x00059eb8) ncimui_query_button_pane

0xd6f8,	// (0x00059ec8) ncimui_query_button_pane_t1_ParamLimits

0xd6f8,	// (0x00059ec8) ncimui_query_button_pane_t1

0x1732,	// (0x0004df02) ncimui_query_button_pane_t2_ParamLimits

0x1732,	// (0x0004df02) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0005c61f) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0005c61f) ncimui_query_button_pane_t

0xd70b,	// (0x00059edb) query_button_pane_ParamLimits

0xd70b,	// (0x00059edb) query_button_pane

0x03e0,	// (0x0004cbb0) bg_button_pane_cp0028

0x1745,	// (0x0004df15) query_button_pane_t1

0x8d7f,	// (0x0005554f) main_tport_pane_ParamLimits

0xd1cc,	// (0x0005999c) bg_popup_window_pane_cp01_ParamLimits

0xd1cc,	// (0x0005999c) bg_popup_window_pane_cp01

0xd1d9,	// (0x000599a9) heading_pane_cp08_ParamLimits

0xd1d9,	// (0x000599a9) heading_pane_cp08

0xd1e7,	// (0x000599b7) heading_pane_cp07_ParamLimits

0xd1e7,	// (0x000599b7) heading_pane_cp07

0x1274,	// (0x0004da44) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x0005c56b) cell_tport_appsw_pane_g

0x8487,	// (0x00054c57) input_candi_list_open_g1

0x2897,	// (0x0004f067) list_cale_time_pane_g6_ParamLimits

0x2897,	// (0x0004f067) list_cale_time_pane_g6

0x97e4,	// (0x00055fb4) aid_size_touch_calib_1_ParamLimits

0x97e4,	// (0x00055fb4) aid_size_touch_calib_1

0x97f0,	// (0x00055fc0) aid_size_touch_calib_2_ParamLimits

0x97f0,	// (0x00055fc0) aid_size_touch_calib_2

0x97fe,	// (0x00055fce) aid_size_touch_calib_3_ParamLimits

0x97fe,	// (0x00055fce) aid_size_touch_calib_3

0x980e,	// (0x00055fde) aid_size_touch_calib_4_ParamLimits

0x980e,	// (0x00055fde) aid_size_touch_calib_4

0x981c,	// (0x00055fec) main_touch_calib_button_group_pane_ParamLimits

0x981c,	// (0x00055fec) main_touch_calib_button_group_pane

0x982a,	// (0x00055ffa) main_touch_calib_pane_g1_ParamLimits

0x9836,	// (0x00056006) main_touch_calib_pane_g2_ParamLimits

0x9842,	// (0x00056012) main_touch_calib_pane_g3_ParamLimits

0x984e,	// (0x0005601e) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0005bf45) main_touch_calib_pane_g_ParamLimits

0x985a,	// (0x0005602a) main_touch_calib_pane_t1_ParamLimits

0x9871,	// (0x00056041) main_touch_calib_pane_t2_ParamLimits

0x9888,	// (0x00056058) main_touch_calib_pane_t3_ParamLimits

0x989c,	// (0x0005606c) main_touch_calib_pane_t4_ParamLimits

0x98b2,	// (0x00056082) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0005bf4e) main_touch_calib_pane_t_ParamLimits

0x492e,	// (0x000510fe) list_single_fp_cale_pane_g3_ParamLimits

0x492e,	// (0x000510fe) list_single_fp_cale_pane_g3

0xad70,	// (0x00057540) bg_button_pane_cp012_ParamLimits

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp03_ParamLimits

0xb702,	// (0x00057ed2) cell_vitu2_function_top_pane_g1_ParamLimits

0xad70,	// (0x00057540) bg_vkb2_func_pane_cp04_ParamLimits

0xc5a6,	// (0x00058d76) main_ncimui_button_group_pane_ParamLimits

0xc5a6,	// (0x00058d76) main_ncimui_button_group_pane

0xc5f8,	// (0x00058dc8) main_ncimui_pane_t3_ParamLimits

0xc5f8,	// (0x00058dc8) main_ncimui_pane_t3

0x139b,	// (0x0004db6b) phacti_button_group_pane

0x167e,	// (0x0004de4e) aid_size_list_single_double_ParamLimits

0xd660,	// (0x00059e30) popup_ezdial_listscroll_window_ParamLimits

0xd680,	// (0x00059e50) popup_number_entry_window_cp01_ParamLimits

0xd718,	// (0x00059ee8) phacti_button_pane_ParamLimits

0xd718,	// (0x00059ee8) phacti_button_pane

0x03e0,	// (0x0004cbb0) bg_button_pane_cp14

0x1753,	// (0x0004df23) phacti_button_pane_t1

0xd729,	// (0x00059ef9) main_touch_calib_button_pane_ParamLimits

0xd729,	// (0x00059ef9) main_touch_calib_button_pane

0x22f2,	// (0x0004eac2) bg_button_pane_cp18_ParamLimits

0x22f2,	// (0x0004eac2) bg_button_pane_cp18

0x1761,	// (0x0004df31) main_touch_calib_button_pane_t1_ParamLimits

0x1761,	// (0x0004df31) main_touch_calib_button_pane_t1

0x1777,	// (0x0004df47) main_touch_calib_button_pane_t2_ParamLimits

0x1777,	// (0x0004df47) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0005c624) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0005c624) main_touch_calib_button_pane_t

0x03e0,	// (0x0004cbb0) cell_ncimui_button_pane

0x03e0,	// (0x0004cbb0) bg_button_pane_cp032

0x1795,	// (0x0004df65) cell_ncimui_button_pane_t1

0xa97e,	// (0x0005714e) image3_infobar_pane_ParamLimits

0xa97e,	// (0x0005714e) image3_infobar_pane

0xc968,	// (0x00059138) fs_bigclock_status_pane_ParamLimits

0xc968,	// (0x00059138) fs_bigclock_status_pane

0xc975,	// (0x00059145) main_fs_bigclock_clock_pane_ParamLimits

0xc975,	// (0x00059145) main_fs_bigclock_clock_pane

0xc999,	// (0x00059169) main_fs_bigclock_indi_pane_ParamLimits

0xc999,	// (0x00059169) main_fs_bigclock_indi_pane

0xc9d1,	// (0x000591a1) main_fs_bigclock_swipe_pane_ParamLimits

0xc9d1,	// (0x000591a1) main_fs_bigclock_swipe_pane

0x03e0,	// (0x0004cbb0) main_fs_clock_dumped_data

0xca03,	// (0x000591d3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xca03,	// (0x000591d3) list_single_fs_bigclock_indicator_pane_g1

0xca28,	// (0x000591f8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xca28,	// (0x000591f8) list_single_fs_bigclock_indicator_pane_g2

0xca42,	// (0x00059212) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xca42,	// (0x00059212) list_single_fs_bigclock_indicator_pane_g3

0xca60,	// (0x00059230) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xca60,	// (0x00059230) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0005c457) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0005c457) list_single_fs_bigclock_indicator_pane_g

0xca86,	// (0x00059256) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xca86,	// (0x00059256) list_single_fs_bigclock_indicator_pane_t1

0xcaae,	// (0x0005927e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xcaae,	// (0x0005927e) list_single_fs_bigclock_indicator_pane_t2

0xcad6,	// (0x000592a6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xcad6,	// (0x000592a6) list_single_fs_bigclock_indicator_pane_t3

0xcb00,	// (0x000592d0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xcb00,	// (0x000592d0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0005c462) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0005c462) list_single_fs_bigclock_indicator_pane_t

0x17a3,	// (0x0004df73) image3_infobar_fav_pane_ParamLimits

0x17a3,	// (0x0004df73) image3_infobar_fav_pane

0x17b3,	// (0x0004df83) image3_infobar_loc_pane_ParamLimits

0x17b3,	// (0x0004df83) image3_infobar_loc_pane

0x17c9,	// (0x0004df99) image3_infobar_time_pane_ParamLimits

0x17c9,	// (0x0004df99) image3_infobar_time_pane

0x45f8,	// (0x00050dc8) image3_infobar_time_pane_g1

0x17d9,	// (0x0004dfa9) image3_infobar_time_pane_t1

0x45f8,	// (0x00050dc8) image3_infobar_loc_pane_g1

0x17e7,	// (0x0004dfb7) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x0005c629) image3_infobar_loc_pane_g

0x17ef,	// (0x0004dfbf) image3_infobar_loc_pane_t1

0x45f8,	// (0x00050dc8) image3_infobar_fav_pane_g1

0x17fd,	// (0x0004dfcd) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x0005c62e) image3_infobar_fav_pane_g

0x1805,	// (0x0004dfd5) fs_bigclock_status_battery_pane

0x180e,	// (0x0004dfde) fs_bigclock_status_signal_pane

0x1817,	// (0x0004dfe7) fs_bigclock_status_title_pane

0x1820,	// (0x0004dff0) fs_bigclock_status_signal_pane_g1

0x1829,	// (0x0004dff9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0005c633) fs_bigclock_status_signal_pane_g

0x1831,	// (0x0004e001) fs_bigclock_status_battery_pane_g1

0x183a,	// (0x0004e00a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x0005c638) fs_bigclock_status_battery_pane_g

0x1842,	// (0x0004e012) fs_bigclock_status_title_pane_t1

0x45f8,	// (0x00050dc8) main_fs_bigclock_clock_pane_g1

0x1850,	// (0x0004e020) main_fs_bigclock_clock_pane_g2

0x1850,	// (0x0004e020) main_fs_bigclock_clock_pane_g3

0x1850,	// (0x0004e020) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x0005c63d) main_fs_bigclock_clock_pane_g

0x185c,	// (0x0004e02c) main_fs_bigclock_clock_pane_t1

0xd73b,	// (0x00059f0b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0005c646) main_fs_bigclock_clock_pane_t

0x186a,	// (0x0004e03a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x186a,	// (0x0004e03a) list_single_fs_bigclock_indicator_pane

0xd74a,	// (0x00059f1a) list_single_fs_bigclock_pane_ParamLimits

0xd74a,	// (0x00059f1a) list_single_fs_bigclock_pane

0x1884,	// (0x0004e054) main_fs_bigclock_indicator_pane_t1

0x1893,	// (0x0004e063) list_single_fs_bigclock_pane_g1

0x189b,	// (0x0004e06b) list_single_fs_bigclock_pane_t1

0x45f8,	// (0x00050dc8) main_fs_bigclock_swipe_pane_g1

0x18db,	// (0x0004e0ab) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0005c657) main_fs_bigclock_swipe_pane_g

0x18e3,	// (0x0004e0b3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x18e3,	// (0x0004e0b3) main_fs_bigclock_swipe_pane_t1

0x7bff,	// (0x000543cf) call_type_pane_ParamLimits

0x03e0,	// (0x0004cbb0) main_btmg_pane

0x1567,	// (0x0004dd37) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1567,	// (0x0004dd37) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x0005c5ca) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x0005c5ca) list_single_cale_mrui_row_pane_g

0x16b8,	// (0x0004de88) list_recal_vselct_arw_lo_pane

0x16c0,	// (0x0004de90) list_recal_vselct_arw_up_pane

0x0ee2,	// (0x0004d6b2) list_recal_vselct_pane

0x1900,	// (0x0004e0d0) btmg_button_pane

0xd7ad,	// (0x00059f7d) main_btmg_pane_g1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp044

0x190a,	// (0x0004e0da) btmg_button_pane_t1

0x416d,	// (0x0005093d) aid_listscroll_gen

0x0459,	// (0x0004cc29) main_cntbar_detail_pane

0x128a,	// (0x0004da5a) list_cmail_folder_pane

0x129a,	// (0x0004da6a) sp_fs_scroll_pane_cp03_ParamLimits

0x3641,	// (0x0004fe11) list_single_fs_dyc_pane_cp01_ParamLimits

0x3641,	// (0x0004fe11) list_single_fs_dyc_pane_cp01

0x1918,	// (0x0004e0e8) aid_size_cmail_indent

0x1921,	// (0x0004e0f1) list_single_dyc_row_pane_cp01

0xd7d5,	// (0x00059fa5) cntbar_detail_list_pane_ParamLimits

0xd7d5,	// (0x00059fa5) cntbar_detail_list_pane

0xd815,	// (0x00059fe5) main_cntbar_detail_cont_pane_ParamLimits

0xd815,	// (0x00059fe5) main_cntbar_detail_cont_pane

0x7b99,	// (0x00054369) scroll_pane_cp032_ParamLimits

0x7b99,	// (0x00054369) scroll_pane_cp032

0xd821,	// (0x00059ff1) cntbar_detail_list_event_pane_ParamLimits

0xd821,	// (0x00059ff1) cntbar_detail_list_event_pane

0xd7e3,	// (0x00059fb3) cntbar_detail_list_shct_pane

0x274a,	// (0x0004ef1a) aid_list_gen

0x192a,	// (0x0004e0fa) aid_scroll

0x1933,	// (0x0004e103) aid_size_touch_scroll_bar

0xd831,	// (0x0005a001) aid_list_double

0x1945,	// (0x0004e115) aid_list_single

0xe603,	// (0x0005add3) aid_list_single_lg

0x194e,	// (0x0004e11e) aid_list_z_g_a_sm

0x1956,	// (0x0004e126) aid_list_z_g_d

0x195e,	// (0x0004e12e) aid_txt_z_prm

0xd83a,	// (0x0005a00a) aid_txt_z_prm_cp01

0xd848,	// (0x0005a018) aid_txt_z_sec

0xd856,	// (0x0005a026) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd856,	// (0x0005a026) main_cntbar_detail_cont_pane_g1

0xd863,	// (0x0005a033) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd863,	// (0x0005a033) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x0005c65c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x0005c65c) main_cntbar_detail_cont_pane_g

0x196c,	// (0x0004e13c) main_cntbar_detail_cont_pane_t1

0x197a,	// (0x0004e14a) main_cntbar_detail_cont_pane_t2

0x1988,	// (0x0004e158) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x0005c661) main_cntbar_detail_cont_pane_t

0xd86f,	// (0x0005a03f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd86f,	// (0x0005a03f) cell_cntbar_detail_list_shct_pane

0x1996,	// (0x0004e166) cntbar_detail_list_shct_pane_g1

0x199f,	// (0x0004e16f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x0005c668) cntbar_detail_list_shct_pane_g

0xd883,	// (0x0005a053) cntbar_detail_list_event_pane_g1_ParamLimits

0xd883,	// (0x0005a053) cntbar_detail_list_event_pane_g1

0xd88f,	// (0x0005a05f) cntbar_detail_list_event_pane_g2_ParamLimits

0xd88f,	// (0x0005a05f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x0005c66d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x0005c66d) cntbar_detail_list_event_pane_g

0xd8fd,	// (0x0005a0cd) cntbar_detail_list_event_pane_t1_ParamLimits

0xd8fd,	// (0x0005a0cd) cntbar_detail_list_event_pane_t1

0xd912,	// (0x0005a0e2) cntbar_detail_list_event_pane_t2_ParamLimits

0xd912,	// (0x0005a0e2) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x0005c67a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x0005c67a) cntbar_detail_list_event_pane_t

0x45f8,	// (0x00050dc8) cell_cntbar_detail_list_shct_pane_g1

0x7f97,	// (0x00054767) navi_pane_mv_g3

0x0459,	// (0x0004cc29) main_cntbar_detail_pane_ParamLimits

0x03e0,	// (0x0004cbb0) main_notif_wgt_pane

0xa652,	// (0x00056e22) aid_tch_main_mp4_pane_g4

0xa867,	// (0x00057037) popup_slider_window_cp02

0x16af,	// (0x0004de7f) list_recal_day_event_pane

0xd7b5,	// (0x00059f85) cntbar_detail_btn_pane_ParamLimits

0xd7b5,	// (0x00059f85) cntbar_detail_btn_pane

0xd7c5,	// (0x00059f95) cntbar_detail_btn_pane_cp01_ParamLimits

0xd7c5,	// (0x00059f95) cntbar_detail_btn_pane_cp01

0xd7e3,	// (0x00059fb3) cntbar_detail_list_shct_pane_ParamLimits

0xd7ef,	// (0x00059fbf) cntbar_detail_pane_g1_ParamLimits

0xd7ef,	// (0x00059fbf) cntbar_detail_pane_g1

0xd7ff,	// (0x00059fcf) cntbar_detail_pane_t1_ParamLimits

0xd7ff,	// (0x00059fcf) cntbar_detail_pane_t1

0xd89b,	// (0x0005a06b) cntbar_detail_list_event_pane_g3_ParamLimits

0xd89b,	// (0x0005a06b) cntbar_detail_list_event_pane_g3

0xd8b3,	// (0x0005a083) cntbar_detail_list_event_pane_g4_ParamLimits

0xd8b3,	// (0x0005a083) cntbar_detail_list_event_pane_g4

0xd8cb,	// (0x0005a09b) cntbar_detail_list_event_pane_g5_ParamLimits

0xd8cb,	// (0x0005a09b) cntbar_detail_list_event_pane_g5

0xd8e3,	// (0x0005a0b3) cntbar_detail_list_event_pane_g6_ParamLimits

0xd8e3,	// (0x0005a0b3) cntbar_detail_list_event_pane_g6

0xd927,	// (0x0005a0f7) cntbar_detail_list_event_pane_t3_ParamLimits

0xd927,	// (0x0005a0f7) cntbar_detail_list_event_pane_t3

0xd939,	// (0x0005a109) popup_notif_wgt_window_ParamLimits

0xd939,	// (0x0005a109) popup_notif_wgt_window

0xd949,	// (0x0005a119) popup_submenu_window_cp01_ParamLimits

0xd949,	// (0x0005a119) popup_submenu_window_cp01

0x2d46,	// (0x0004f516) bg_popup_window_pane_cp10

0x19a8,	// (0x0004e178) listscroll_notif_wgt_pane

0x19b2,	// (0x0004e182) list_notif_wgt_window

0x19bb,	// (0x0004e18b) scroll_pane_cp033

0x19c4,	// (0x0004e194) list_notif_wgt_row_pane_ParamLimits

0x19c4,	// (0x0004e194) list_notif_wgt_row_pane

0x19d8,	// (0x0004e1a8) aid_size_list_notif_wgt_del

0x19e1,	// (0x0004e1b1) list_notif_wgt_row_pane_g1

0x19e9,	// (0x0004e1b9) list_notif_wgt_row_pane_g2

0x19f1,	// (0x0004e1c1) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0005c681) list_notif_wgt_row_pane_g

0x19fa,	// (0x0004e1ca) list_notif_wgt_row_pane_t1

0x1a08,	// (0x0004e1d8) list_notif_wgt_row_pane_t2

0x1a16,	// (0x0004e1e6) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x0005c688) list_notif_wgt_row_pane_t

0xe36e,	// (0x0005ab3e) list_recal_day_event_pane_g1

0x1a24,	// (0x0004e1f4) list_recal_day_event_pane_t1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp045

0x1a33,	// (0x0004e203) cntbar_detail_btn_pane_t1

0x4175,	// (0x00050945) main_callh_pane_ParamLimits

0x4175,	// (0x00050945) main_callh_pane

0x03e0,	// (0x0004cbb0) main_coverflow0_pane

0x03e0,	// (0x0004cbb0) main_wgtman_pane

0xc9e9,	// (0x000591b9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc9e9,	// (0x000591b9) main_fs_bigclock_unlock_btn_pane

0x126c,	// (0x0004da3c) bg_button_pane_cp16

0xd252,	// (0x00059a22) cell_tport_appsw_pane_g3

0xd957,	// (0x0005a127) cf0_flow_pane_ParamLimits

0xd957,	// (0x0005a127) cf0_flow_pane

0x1a41,	// (0x0004e211) listscroll_cf0_pane

0x1a4a,	// (0x0004e21a) main_cf0_pane_g1

0xd966,	// (0x0005a136) main_cf0_pane_t1_ParamLimits

0xd966,	// (0x0005a136) main_cf0_pane_t1

0xd97a,	// (0x0005a14a) main_cf0_pane_t2_ParamLimits

0xd97a,	// (0x0005a14a) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0005c68f) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0005c68f) main_cf0_pane_t

0x1a54,	// (0x0004e224) scroll_pane_cp11

0xd98e,	// (0x0005a15e) cf0_flow_pane_g1

0xd996,	// (0x0005a166) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0005c694) cf0_flow_pane_g

0xd99e,	// (0x0005a16e) cf0_flow_pane_t1

0x03e0,	// (0x0004cbb0) main_call6_pane

0x03e0,	// (0x0004cbb0) main_calllock_pane

0xd9ac,	// (0x0005a17c) call6_btn_grp_pane_ParamLimits

0xd9ac,	// (0x0005a17c) call6_btn_grp_pane

0xd9bb,	// (0x0005a18b) call6_pane_g1_ParamLimits

0xd9bb,	// (0x0005a18b) call6_pane_g1

0xd9cb,	// (0x0005a19b) popup_call6_1st_window_ParamLimits

0xd9cb,	// (0x0005a19b) popup_call6_1st_window

0xd9d9,	// (0x0005a1a9) popup_call6_2nd_window_ParamLimits

0xd9d9,	// (0x0005a1a9) popup_call6_2nd_window

0xd9e7,	// (0x0005a1b7) cell_call6_btn_pane_ParamLimits

0xd9e7,	// (0x0005a1b7) cell_call6_btn_pane

0x2d46,	// (0x0004f516) bg_popup_call2_in_pane_cp03

0x1a5f,	// (0x0004e22f) popup_call6_1st_window_g1

0x1a67,	// (0x0004e237) popup_call6_1st_window_g2

0x1a6f,	// (0x0004e23f) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x0005c699) popup_call6_1st_window_g

0x1a77,	// (0x0004e247) popup_call6_1st_window_t1

0x1a86,	// (0x0004e256) popup_call6_1st_window_t2

0x1a96,	// (0x0004e266) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0005c6a0) popup_call6_1st_window_t

0x2d46,	// (0x0004f516) bg_popup_call2_in_pane_cp04

0x1a5f,	// (0x0004e22f) popup_call6_2nd_window_g1

0x1a67,	// (0x0004e237) popup_call6_2nd_window_g2

0x1a6f,	// (0x0004e23f) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x0005c699) popup_call6_2nd_window_g

0x1a77,	// (0x0004e247) popup_call6_2nd_window_t1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp15

0x1aa6,	// (0x0004e276) cell_call6_btn_pane_g1

0x1aaf,	// (0x0004e27f) cell_call6_btn_pane_t1

0xd9f6,	// (0x0005a1c6) listscroll_wgtman_pane_ParamLimits

0xd9f6,	// (0x0005a1c6) listscroll_wgtman_pane

0xda14,	// (0x0005a1e4) wgtman_btn_pane_ParamLimits

0xda14,	// (0x0005a1e4) wgtman_btn_pane

0x2c0c,	// (0x0004f3dc) aid_scroll_copy1

0x1abe,	// (0x0004e28e) list_wgtman_pane

0xda49,	// (0x0005a219) wgtman_btn_pane_g1_ParamLimits

0xda49,	// (0x0005a219) wgtman_btn_pane_g1

0xda71,	// (0x0005a241) wgtman_btn_pane_t1_ParamLimits

0xda71,	// (0x0005a241) wgtman_btn_pane_t1

0x1ac8,	// (0x0004e298) wgtman_btn_pane_t2_ParamLimits

0x1ac8,	// (0x0004e298) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x0005c6a7) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x0005c6a7) wgtman_btn_pane_t

0x1adf,	// (0x0004e2af) listrow_wgtman_pane_ParamLimits

0x1adf,	// (0x0004e2af) listrow_wgtman_pane

0x1af3,	// (0x0004e2c3) listrow_wgtman_pane_g1

0xdaa8,	// (0x0005a278) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x0005c6ac) listrow_wgtman_pane_g

0x1afc,	// (0x0004e2cc) listrow_wgtman_pane_t1

0x1b0a,	// (0x0004e2da) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0005c6b1) listrow_wgtman_pane_t

0x1b18,	// (0x0004e2e8) wait_bar_pane_cp09

0x1b20,	// (0x0004e2f0) main_calllock_btn_pane

0x1b2a,	// (0x0004e2fa) main_calllock_pane_g1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp17

0x1b36,	// (0x0004e306) main_calllock_btn_pane_g1

0x1b3f,	// (0x0004e30f) main_calllock_btn_pane_t1

0x03e0,	// (0x0004cbb0) main_dialer3_pane

0x03e0,	// (0x0004cbb0) main_fmrd2_pane

0x45f8,	// (0x00050dc8) main_fs_bigclock_unlock_btn_pane_g1

0x1b56,	// (0x0004e326) main_fs_bigclock_unlock_btn_pane_t1

0xdab2,	// (0x0005a282) area_fmrd2_info_pane_ParamLimits

0xdab2,	// (0x0005a282) area_fmrd2_info_pane

0xdac0,	// (0x0005a290) area_fmrd2_visual_pane_ParamLimits

0xdac0,	// (0x0005a290) area_fmrd2_visual_pane

0xdace,	// (0x0005a29e) fmrd2_indi_pane_ParamLimits

0xdace,	// (0x0005a29e) fmrd2_indi_pane

0xdadb,	// (0x0005a2ab) area_fmrd2_visual_pane_g1

0xdae3,	// (0x0005a2b3) area_fmrd2_visual_pane_t1

0xdaf3,	// (0x0005a2c3) area_fmrd2_visual_pane_t2

0xdb03,	// (0x0005a2d3) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x0005c6bb) area_fmrd2_visual_pane_t

0xdb13,	// (0x0005a2e3) area_fmrd2_info_pane_g1

0xdb1b,	// (0x0005a2eb) area_fmrd2_info_pane_t1

0xdb2b,	// (0x0005a2fb) area_fmrd2_info_pane_t2

0xdb3b,	// (0x0005a30b) area_fmrd2_info_pane_t3

0xdb4b,	// (0x0005a31b) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0005c6c2) area_fmrd2_info_pane_t

0xdb5b,	// (0x0005a32b) fmrd2_indi_pane_t1

0xdb6b,	// (0x0005a33b) fmrd2_indi_pane_t2

0xdb7b,	// (0x0005a34b) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x0005c6cb) fmrd2_indi_pane_t

0xca6f,	// (0x0005923f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xca6f,	// (0x0005923f) list_single_fs_bigclock_indicator_pane_g5

0xcb15,	// (0x000592e5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xcb15,	// (0x000592e5) list_single_fs_bigclock_indicator_pane_t5

0xd3ef,	// (0x00059bbf) aid_cell_bcale_month_pane_ParamLimits

0xd3ef,	// (0x00059bbf) aid_cell_bcale_month_pane

0xd3fb,	// (0x00059bcb) bcale_month_pane_ParamLimits

0xd3fb,	// (0x00059bcb) bcale_month_pane

0xd409,	// (0x00059bd9) bcale_preview_pane_ParamLimits

0xd409,	// (0x00059bd9) bcale_preview_pane

0x189b,	// (0x0004e06b) list_single_fs_bigclock_pane_t1_ParamLimits

0x18b7,	// (0x0004e087) list_single_fs_bigclock_pane_t2_ParamLimits

0x18b7,	// (0x0004e087) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0005c652) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005c652) list_single_fs_bigclock_pane_t

0x1b4e,	// (0x0004e31e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x0005c6b6) main_fs_bigclock_unlock_btn_pane_g

0xdb8b,	// (0x0005a35b) aid_dia3_key_size_ParamLimits

0xdb8b,	// (0x0005a35b) aid_dia3_key_size

0xdb97,	// (0x0005a367) aid_dia3_listrow_size_ParamLimits

0xdb97,	// (0x0005a367) aid_dia3_listrow_size

0xdba5,	// (0x0005a375) dia3_keypad_fun_pane_ParamLimits

0xdba5,	// (0x0005a375) dia3_keypad_fun_pane

0xdbb5,	// (0x0005a385) dia3_keypad_num_pane_ParamLimits

0xdbb5,	// (0x0005a385) dia3_keypad_num_pane

0xdbc5,	// (0x0005a395) dia3_listscroll_pane_ParamLimits

0xdbc5,	// (0x0005a395) dia3_listscroll_pane

0xdbd5,	// (0x0005a3a5) dia3_numentry_pane_ParamLimits

0xdbd5,	// (0x0005a3a5) dia3_numentry_pane

0x1b64,	// (0x0004e334) dia3_list_pane

0x1b6f,	// (0x0004e33f) scroll_pane_cp12

0x03e0,	// (0x0004cbb0) bg_dia3_numentry_pane

0x1b7a,	// (0x0004e34a) dia3_numentry_pane_t1

0xdbe5,	// (0x0005a3b5) cell_dia3_key_num_pane

0xdbed,	// (0x0005a3bd) cell_dia3_key0_fun_pane_ParamLimits

0xdbed,	// (0x0005a3bd) cell_dia3_key0_fun_pane

0xdbfa,	// (0x0005a3ca) cell_dia3_key1_fun_pane_ParamLimits

0xdbfa,	// (0x0005a3ca) cell_dia3_key1_fun_pane

0xdc07,	// (0x0005a3d7) dia3_listrow_pane

0xebb0,	// (0x0005b380) bg_dia3_numentry_pane_g1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp21

0x1b89,	// (0x0004e359) cell_dia3_key_num_pane_t1

0x1b97,	// (0x0004e367) cell_dia3_key_num_pane_t2

0x1ba6,	// (0x0004e376) cell_dia3_key_num_pane_t3

0x1bb5,	// (0x0004e385) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0005c6d2) cell_dia3_key_num_pane_t

0x03e0,	// (0x0004cbb0) bg_button_pane_cp19

0xdc14,	// (0x0005a3e4) cell_dia3_key0_fun_pane_g1

0x03e0,	// (0x0004cbb0) bg_button_pane_cp20

0xdc1c,	// (0x0005a3ec) cell_dia3_key1_fun_pane_g1

0xdc24,	// (0x0005a3f4) area_left_week_number_pane

0xdc2d,	// (0x0005a3fd) area_top_day_name_pane

0xdc36,	// (0x0005a406) frame_month_view_pane

0xdc40,	// (0x0005a410) grid_month_view_pane

0xdc4a,	// (0x0005a41a) cell_top_day_name_pane_ParamLimits

0xdc4a,	// (0x0005a41a) cell_top_day_name_pane

0xdc66,	// (0x0005a436) cell_area_left_week_number_pane_ParamLimits

0xdc66,	// (0x0005a436) cell_area_left_week_number_pane

0xdc7a,	// (0x0005a44a) cell_month_view_pane_ParamLimits

0xdc7a,	// (0x0005a44a) cell_month_view_pane

0x1bc4,	// (0x0004e394) frm_month_g1

0xdc99,	// (0x0005a469) frm_month_g2

0xdca3,	// (0x0005a473) frm_month_g3

0xdcad,	// (0x0005a47d) frm_month_g4

0xdcb7,	// (0x0005a487) frm_month_g5

0xdcc1,	// (0x0005a491) frm_month_g6

0xdccb,	// (0x0005a49b) frm_month_g7

0x1bcd,	// (0x0004e39d) frm_month_g8

0xdcd5,	// (0x0005a4a5) frm_month_g9

0xdcde,	// (0x0005a4ae) frm_month_g10

0xdce7,	// (0x0005a4b7) frm_month_g11

0xdcf0,	// (0x0005a4c0) frm_month_g12

0xdcf9,	// (0x0005a4c9) frm_month_g13

0xdd04,	// (0x0005a4d4) frm_month_g14

0xdd0f,	// (0x0005a4df) frm_month_g15

0xdd1a,	// (0x0005a4ea) frm_month_g16

0x000f,

0xff0b,	// (0x0005c6db) frm_month_g

0xdd25,	// (0x0005a4f5) cell_top_day_name_pane_t1

0xdd34,	// (0x0005a504) cell_area_left_week_number_pane_g1

0xdd25,	// (0x0005a4f5) cell_area_left_week_number_pane_t1

0x45f8,	// (0x00050dc8) cell_month_view_pane_g1

0xdd3c,	// (0x0005a50c) cell_month_view_pane_t1

0x03e0,	// (0x0004cbb0) main_fps_pane

0xf021,	// (0x0005b7f1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf021,	// (0x0005b7f1) cmail_ddmenu_btn02_pane_cp1

0xf03d,	// (0x0005b80d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf03d,	// (0x0005b80d) cmail_ddmenu_btn02_pane_cp2

0xd6aa,	// (0x00059e7a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd6aa,	// (0x00059e7a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x0005c603) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x0005c603) cmail_ddmenu_btn02_pane_g

0xd6c8,	// (0x00059e98) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd6c8,	// (0x00059e98) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x0005c608) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x0005c608) cmail_ddmenu_btn02_pane_t

0xdd4b,	// (0x0005a51b) fps_text_pane_ParamLimits

0xdd4b,	// (0x0005a51b) fps_text_pane

0xdd58,	// (0x0005a528) main_fps_pane_g1_ParamLimits

0xdd58,	// (0x0005a528) main_fps_pane_g1

0xdd64,	// (0x0005a534) wait_bar_pane_cp010_ParamLimits

0xdd64,	// (0x0005a534) wait_bar_pane_cp010

0xdd70,	// (0x0005a540) fps_text_pane_t1_ParamLimits

0xdd70,	// (0x0005a540) fps_text_pane_t1

0xac5b,	// (0x0005742b) cam4_image_uncrop_pane_g1

0xac64,	// (0x00057434) cam4_image_uncrop_pane_g2

0xac6d,	// (0x0005743d) cam4_image_uncrop_pane_g3

0xac76,	// (0x00057446) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0005c0dd) cam4_image_uncrop_pane_g

0xdc07,	// (0x0005a3d7) dia3_listrow_pane_ParamLimits

0x03e0,	// (0x0004cbb0) main_phob2_pane

0xd22c,	// (0x000599fc) cell_tport_appsw_pane_cp02_ParamLimits

0xd22c,	// (0x000599fc) cell_tport_appsw_pane_cp02

0xd23b,	// (0x00059a0b) cell_tport_appsw_pane_cp03_ParamLimits

0xd23b,	// (0x00059a0b) cell_tport_appsw_pane_cp03

0x03e0,	// (0x0004cbb0) phob2_contact_card_pane

0x03e0,	// (0x0004cbb0) phob2_listscroll_pane

0x1bd6,	// (0x0004e3a6) phob2_list_pane

0x1bde,	// (0x0004e3ae) scroll_pane_cp034

0xdd89,	// (0x0005a559) phob2_cc_data_pane_ParamLimits

0xdd89,	// (0x0005a559) phob2_cc_data_pane

0xdda5,	// (0x0005a575) phob2_cc_listscroll_pane_ParamLimits

0xdda5,	// (0x0005a575) phob2_cc_listscroll_pane

0xddc1,	// (0x0005a591) list_double_large_graphic_phob2_pane_ParamLimits

0xddc1,	// (0x0005a591) list_double_large_graphic_phob2_pane

0xdddb,	// (0x0005a5ab) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdddb,	// (0x0005a5ab) list_double_large_graphic_phob2_pane_g1

0xdde8,	// (0x0005a5b8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdde8,	// (0x0005a5b8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x0005c6fc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x0005c6fc) list_double_large_graphic_phob2_pane_g

0xddf4,	// (0x0005a5c4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xddf4,	// (0x0005a5c4) list_double_large_graphic_phob2_pane_t1

0xde09,	// (0x0005a5d9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xde09,	// (0x0005a5d9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0005c701) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0005c701) list_double_large_graphic_phob2_pane_t

0x03e0,	// (0x0004cbb0) list_highlight_pane_cp024

0x1be6,	// (0x0004e3b6) phob2_cc_button_pane

0xde1b,	// (0x0005a5eb) phob2_cc_data_pane_g1_ParamLimits

0xde1b,	// (0x0005a5eb) phob2_cc_data_pane_g1

0xde27,	// (0x0005a5f7) phob2_cc_data_pane_g2_ParamLimits

0xde27,	// (0x0005a5f7) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x0005c706) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x0005c706) phob2_cc_data_pane_g

0xde33,	// (0x0005a603) phob2_cc_data_pane_t1_ParamLimits

0xde33,	// (0x0005a603) phob2_cc_data_pane_t1

0xde45,	// (0x0005a615) phob2_cc_data_pane_t2_ParamLimits

0xde45,	// (0x0005a615) phob2_cc_data_pane_t2

0xde57,	// (0x0005a627) phob2_cc_data_pane_t3_ParamLimits

0xde57,	// (0x0005a627) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x0005c70b) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x0005c70b) phob2_cc_data_pane_t

0x1bee,	// (0x0004e3be) phob2_cc_list_pane_ParamLimits

0x1bee,	// (0x0004e3be) phob2_cc_list_pane

0xeacb,	// (0x0005b29b) scroll_pane_cp035_ParamLimits

0xeacb,	// (0x0005b29b) scroll_pane_cp035

0x0459,	// (0x0004cc29) bg_button_pane_cp033

0x1bfa,	// (0x0004e3ca) phob2_cc_button_pane_g1

0x1c06,	// (0x0004e3d6) phob2_cc_button_pane_t1

0x1c1b,	// (0x0004e3eb) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0005c712) phob2_cc_button_pane_t

0xde69,	// (0x0005a639) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xde69,	// (0x0005a639) list_double_large_graphic_phob2_cc_pane

0xde88,	// (0x0005a658) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xde88,	// (0x0005a658) list_double_large_graphic_phob2_cc_pane_g1

0xde99,	// (0x0005a669) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xde99,	// (0x0005a669) list_double_large_graphic_phob2_cc_pane_g2

0xdea8,	// (0x0005a678) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdea8,	// (0x0005a678) list_double_large_graphic_phob2_cc_pane_g3

0xdeb7,	// (0x0005a687) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdeb7,	// (0x0005a687) list_double_large_graphic_phob2_cc_pane_g4

0xdec8,	// (0x0005a698) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdec8,	// (0x0005a698) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0005c717) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0005c717) list_double_large_graphic_phob2_cc_pane_g

0xded7,	// (0x0005a6a7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xded7,	// (0x0005a6a7) list_double_large_graphic_phob2_cc_pane_t1

0xdf00,	// (0x0005a6d0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdf00,	// (0x0005a6d0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0005c722) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0005c722) list_double_large_graphic_phob2_cc_pane_t

0x1c2d,	// (0x0004e3fd) list_highlight_pane_cp025_ParamLimits

0x1c2d,	// (0x0004e3fd) list_highlight_pane_cp025

0x0459,	// (0x0004cc29) bg_button_pane_cp033_ParamLimits

0x1bfa,	// (0x0004e3ca) phob2_cc_button_pane_g1_ParamLimits

0x1c06,	// (0x0004e3d6) phob2_cc_button_pane_t1_ParamLimits

0x1c1b,	// (0x0004e3eb) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0005c712) phob2_cc_button_pane_t_ParamLimits

0x5c0d,	// (0x000523dd) popup_wgtman_window

0xe248,	// (0x0005aa18) scroll_pane_cp038

0xda31,	// (0x0005a201) wgtman_btn_pane_cp_01_ParamLimits

0xda31,	// (0x0005a201) wgtman_btn_pane_cp_01

0x1c3b,	// (0x0004e40b) wgtman_content_pane

0x1c44,	// (0x0004e414) wgtman_heading_pane

0x03e0,	// (0x0004cbb0) bg_heading_pane_cp02

0x1c4d,	// (0x0004e41d) wgtman_heading_pane_g1

0x1c55,	// (0x0004e425) wgtman_heading_pane_t1

0x1c63,	// (0x0004e433) scroll_pane_cp036

0x1c6b,	// (0x0004e43b) wgtman_list_pane

0xf0d2,	// (0x0005b8a2) wgtman_list_pane_t1_ParamLimits

0xf0d2,	// (0x0005b8a2) wgtman_list_pane_t1

0xabb8,	// (0x00057388) cam4_grid_pane

0xb8c5,	// (0x00058095) bg_button_pane_cp015_ParamLimits

0xb8d7,	// (0x000580a7) bg_button_pane_cp016_ParamLimits

0xb8ea,	// (0x000580ba) bg_button_pane_cp017_ParamLimits

0xb940,	// (0x00058110) popup_vitu2_query_window_g3_ParamLimits

0xb940,	// (0x00058110) popup_vitu2_query_window_g3

0xb9ff,	// (0x000581cf) popup_vitu2_query_window_t6_ParamLimits

0xb9ff,	// (0x000581cf) popup_vitu2_query_window_t6

0xba2a,	// (0x000581fa) popup_vitu2_query_window_t7_ParamLimits

0xba2a,	// (0x000581fa) popup_vitu2_query_window_t7

0xed9f,	// (0x0005b56f) cam4_grid_pane_g1

0xeda8,	// (0x0005b578) cam4_grid_pane_g2

0x1c73,	// (0x0004e443) cam4_grid_pane_g3

0x1c7c,	// (0x0004e44c) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0005c727) cam4_grid_pane_g

0x6c47,	// (0x00053417) aid_placing_vt_slider_lsc_ParamLimits

0x6f7a,	// (0x0005374a) vidtel_button_pane_ParamLimits

0x6f7a,	// (0x0005374a) vidtel_button_pane

0x03e0,	// (0x0004cbb0) bg_button_pane_cp034

0xdf29,	// (0x0005a6f9) vidtel_button_pane_g1

0x1c87,	// (0x0004e457) vidtel_button_pane_t1

0xe34c,	// (0x0005ab1c) aid_size_vtel_slider_touch

0xeacb,	// (0x0005b29b) scroll_pane_cp039

0xebee,	// (0x0005b3be) ncim_query_button_pane_cp01_ParamLimits

0xec0d,	// (0x0005b3dd) ncimui_query_pane_g1_ParamLimits

0x0459,	// (0x0004cc29) input_focus_pane_cp012_ParamLimits

0xec32,	// (0x0005b402) ncim_query_entry_pane_t1_ParamLimits

0xeacb,	// (0x0005b29b) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
