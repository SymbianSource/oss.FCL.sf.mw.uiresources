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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005dd08 };

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
0x0b88,	// (0x0005e890) Screen

0x0b94,	// (0x0005e89c) application_window

0x0be4,	// (0x0005e8ec) area_bottom_pane_ParamLimits

0x0be4,	// (0x0005e8ec) area_bottom_pane

0x0c19,	// (0x0005e921) area_top_pane_ParamLimits

0x0c19,	// (0x0005e921) area_top_pane

0x9ca5,	// (0x000679ad) call_video_uplink_pane_ParamLimits

0x9ca5,	// (0x000679ad) call_video_uplink_pane

0x0ca8,	// (0x0005e9b0) main_pane_ParamLimits

0x0ca8,	// (0x0005e9b0) main_pane

0xc873,	// (0x0006a57b) context_pane

0x45ed,	// (0x000622f5) navi_pane

0x4611,	// (0x00062319) popup_cale_events_window_ParamLimits

0x4611,	// (0x00062319) popup_cale_events_window

0xc886,	// (0x0006a58e) popup_mup_playback_window

0x4629,	// (0x00062331) signal_pane

0xa8b4,	// (0x000685bc) main_browser_pane

0xb3f9,	// (0x00069101) main_burst_pane

0x449f,	// (0x000621a7) main_calc_pane

0xc816,	// (0x0006a51e) main_cale_day_pane

0x13da,	// (0x0005f0e2) main_cale_month_pane

0xc816,	// (0x0006a51e) main_cale_week_pane

0xb3f9,	// (0x00069101) main_call_pane

0xa0d6,	// (0x00067dde) main_call_poc_pane

0xb3f9,	// (0x00069101) main_camera_pane

0xb3f9,	// (0x00069101) main_chi_dic_pane

0xb29b,	// (0x00068fa3) main_clock_pane

0xa0d6,	// (0x00067dde) main_fmradio_pane

0xb3f9,	// (0x00069101) main_graph_messa_pane

0xa0d6,	// (0x00067dde) main_help_pane

0xa8b4,	// (0x000685bc) main_im_pane

0xa7ef,	// (0x000684f7) main_image_pane_ParamLimits

0xa7ef,	// (0x000684f7) main_image_pane

0xa0d6,	// (0x00067dde) main_location2_pane

0xb3f9,	// (0x00069101) main_location_pane

0xa7ef,	// (0x000684f7) main_messa_pane

0xa0d6,	// (0x00067dde) main_mp2_pane

0xb3f9,	// (0x00069101) main_mp_pane

0xa0d6,	// (0x00067dde) main_msg_pane

0xa0d6,	// (0x00067dde) main_mup_eq_pane

0xa0d6,	// (0x00067dde) main_mup_pane

0xa8b4,	// (0x000685bc) main_notes_pane

0xa0d6,	// (0x00067dde) main_pec_pane

0xa0d6,	// (0x00067dde) main_phob_pane

0xa0d6,	// (0x00067dde) main_pinb_pane

0xa0d6,	// (0x00067dde) main_postcard_pane

0xa0d6,	// (0x00067dde) main_qdial_pane

0xb3f9,	// (0x00069101) main_skin_pane

0xa0d6,	// (0x00067dde) main_smil2_pane

0xb3f9,	// (0x00069101) main_smil_pane

0xb3f9,	// (0x00069101) main_video_pane

0xb3f9,	// (0x00069101) main_video_tele_pane

0xa7ef,	// (0x000684f7) main_viewer_pane_ParamLimits

0xa7ef,	// (0x000684f7) main_viewer_pane

0xb3f9,	// (0x00069101) main_vorec_pane

0x44d7,	// (0x000621df) popup_blid_sat_info_window_ParamLimits

0x44d7,	// (0x000621df) popup_blid_sat_info_window

0x44f1,	// (0x000621f9) popup_dyc_status_message_window_ParamLimits

0x44f1,	// (0x000621f9) popup_dyc_status_message_window

0x4501,	// (0x00062209) popup_grid_large_graphic_window_ParamLimits

0x4501,	// (0x00062209) popup_grid_large_graphic_window

0x4579,	// (0x00062281) popup_loc_request_window_ParamLimits

0x4579,	// (0x00062281) popup_loc_request_window

0x45c1,	// (0x000622c9) popup_wml_address_window_ParamLimits

0x45c1,	// (0x000622c9) popup_wml_address_window

0x4377,	// (0x0006207f) call_muted_g1

0x4036,	// (0x00061d3e) popup_call_audio_conf_window_ParamLimits

0x4036,	// (0x00061d3e) popup_call_audio_conf_window

0x4387,	// (0x0006208f) popup_call_audio_first_window_ParamLimits

0x4387,	// (0x0006208f) popup_call_audio_first_window

0x43c7,	// (0x000620cf) popup_call_audio_in_window_ParamLimits

0x43c7,	// (0x000620cf) popup_call_audio_in_window

0x43eb,	// (0x000620f3) popup_call_audio_out_window_ParamLimits

0x43eb,	// (0x000620f3) popup_call_audio_out_window

0x440d,	// (0x00062115) popup_call_audio_second_window_ParamLimits

0x440d,	// (0x00062115) popup_call_audio_second_window

0x443d,	// (0x00062145) popup_call_audio_wait_window_ParamLimits

0x443d,	// (0x00062145) popup_call_audio_wait_window

0x445e,	// (0x00062166) popup_number_entry_window_ParamLimits

0x445e,	// (0x00062166) popup_number_entry_window

0x9cc3,	// (0x000679cb) bg_popup_call_pane_cp05_ParamLimits

0x9cc3,	// (0x000679cb) bg_popup_call_pane_cp05

0x9ce3,	// (0x000679eb) popup_number_entry_window_t1

0x9cf6,	// (0x000679fe) popup_number_entry_window_t2

0x9d08,	// (0x00067a10) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0006cdce) popup_number_entry_window_t

0x9d1a,	// (0x00067a22) text_title_cp2

0x9d2d,	// (0x00067a35) bg_popup_call_pane_cp_ParamLimits

0x9d2d,	// (0x00067a35) bg_popup_call_pane_cp

0x9d3b,	// (0x00067a43) call_thumbnail_pane

0x9d43,	// (0x00067a4b) popup_call_audio_in_window_g1_ParamLimits

0x9d43,	// (0x00067a4b) popup_call_audio_in_window_g1

0x9d4f,	// (0x00067a57) popup_call_audio_in_window_g2_ParamLimits

0x9d4f,	// (0x00067a57) popup_call_audio_in_window_g2

0x9d5b,	// (0x00067a63) popup_call_audio_in_window_g3_ParamLimits

0x9d5b,	// (0x00067a63) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0006cdd7) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0006cdd7) popup_call_audio_in_window_g

0x9d67,	// (0x00067a6f) popup_call_audio_in_window_t1_ParamLimits

0x9d67,	// (0x00067a6f) popup_call_audio_in_window_t1

0x9d83,	// (0x00067a8b) popup_call_audio_in_window_t2_ParamLimits

0x9d83,	// (0x00067a8b) popup_call_audio_in_window_t2

0x9d9f,	// (0x00067aa7) popup_call_audio_in_window_t3_ParamLimits

0x9d9f,	// (0x00067aa7) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0006cdde) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0006cdde) popup_call_audio_in_window_t

0x9d2d,	// (0x00067a35) bg_popup_call_pane_cp01_ParamLimits

0x9d2d,	// (0x00067a35) bg_popup_call_pane_cp01

0x9d3b,	// (0x00067a43) call_thumbnail_pane_cp02

0x9db2,	// (0x00067aba) call_type_pane_cp022

0x9dba,	// (0x00067ac2) popup_call_audio_out_window_g1_ParamLimits

0x9dba,	// (0x00067ac2) popup_call_audio_out_window_g1

0x9dcc,	// (0x00067ad4) popup_call_audio_out_window_g2_ParamLimits

0x9dcc,	// (0x00067ad4) popup_call_audio_out_window_g2

0x9dd8,	// (0x00067ae0) popup_call_audio_out_window_g3_ParamLimits

0x9dd8,	// (0x00067ae0) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0006cde5) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0006cde5) popup_call_audio_out_window_g

0x9dea,	// (0x00067af2) popup_call_audio_out_window_t1_ParamLimits

0x9dea,	// (0x00067af2) popup_call_audio_out_window_t1

0x9e02,	// (0x00067b0a) popup_call_audio_out_window_t2_ParamLimits

0x9e02,	// (0x00067b0a) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0006cdec) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0006cdec) popup_call_audio_out_window_t

0x9e17,	// (0x00067b1f) bg_popup_call_pane_ParamLimits

0x9e17,	// (0x00067b1f) bg_popup_call_pane

0x0eac,	// (0x0005ebb4) call_thumbnail_pane_cp_ParamLimits

0x0eac,	// (0x0005ebb4) call_thumbnail_pane_cp

0x9e9b,	// (0x00067ba3) call_type_pane_cp01_ParamLimits

0x9e9b,	// (0x00067ba3) call_type_pane_cp01

0x9edf,	// (0x00067be7) popup_call_audio_first_window_g1_ParamLimits

0x9edf,	// (0x00067be7) popup_call_audio_first_window_g1

0x9f2b,	// (0x00067c33) popup_call_audio_first_window_g2_ParamLimits

0x9f2b,	// (0x00067c33) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0006cdf1) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0006cdf1) popup_call_audio_first_window_g

0x9f6f,	// (0x00067c77) popup_call_audio_first_window_t1_ParamLimits

0x9f6f,	// (0x00067c77) popup_call_audio_first_window_t1

0xa01b,	// (0x00067d23) popup_call_audio_first_window_t4_ParamLimits

0xa01b,	// (0x00067d23) popup_call_audio_first_window_t4

0xa0a7,	// (0x00067daf) popup_call_audio_first_window_t5_ParamLimits

0xa0a7,	// (0x00067daf) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0006cdf6) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0006cdf6) popup_call_audio_first_window_t

0xa0d6,	// (0x00067dde) bg_popup_call_pane_cp02

0xa0e0,	// (0x00067de8) call_type_pane_cp023

0xa0e8,	// (0x00067df0) popup_call_audio_wait_window_g1

0xa0f0,	// (0x00067df8) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006cdfd) popup_call_audio_wait_window_g

0xa0f8,	// (0x00067e00) popup_call_audio_wait_window_t3

0xa106,	// (0x00067e0e) bg_popup_call_pane_cp03_ParamLimits

0xa106,	// (0x00067e0e) bg_popup_call_pane_cp03

0xa166,	// (0x00067e6e) call_thumbnail_pane_cp011_ParamLimits

0xa166,	// (0x00067e6e) call_thumbnail_pane_cp011

0xa172,	// (0x00067e7a) call_type_pane_cp034_ParamLimits

0xa172,	// (0x00067e7a) call_type_pane_cp034

0xa1ae,	// (0x00067eb6) popup_call_audio_second_window_g1_ParamLimits

0xa1ae,	// (0x00067eb6) popup_call_audio_second_window_g1

0xa1ea,	// (0x00067ef2) popup_call_audio_second_window_g2_ParamLimits

0xa1ea,	// (0x00067ef2) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0006ce02) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0006ce02) popup_call_audio_second_window_g

0xa226,	// (0x00067f2e) popup_call_audio_second_window_t1_ParamLimits

0xa226,	// (0x00067f2e) popup_call_audio_second_window_t1

0xa2a7,	// (0x00067faf) popup_call_audio_second_window_t2_ParamLimits

0xa2a7,	// (0x00067faf) popup_call_audio_second_window_t2

0xa79b,	// (0x000684a3) popup_call_audio_second_window_t3_ParamLimits

0xa79b,	// (0x000684a3) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0006ce07) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0006ce07) popup_call_audio_second_window_t

0xa0d6,	// (0x00067dde) bg_popup_call_pane_cp04

0xa7d1,	// (0x000684d9) list_conf_pane

0xa7d9,	// (0x000684e1) popup_call_audio_conf_window_t1

0xa7e7,	// (0x000684ef) call_thumbnail_pane_g1

0xa7ef,	// (0x000684f7) bg_pinb_pane_ParamLimits

0xa7ef,	// (0x000684f7) bg_pinb_pane

0xa7fd,	// (0x00068505) find_pinb_pane

0xa806,	// (0x0006850e) listscroll_pinb_pane_ParamLimits

0xa806,	// (0x0006850e) listscroll_pinb_pane

0xa815,	// (0x0006851d) pinb_bg_pane_g1

0x0ed0,	// (0x0005ebd8) pinb_bg_pane_g2

0x0edc,	// (0x0005ebe4) pinb_bg_pane_g3

0x0ee8,	// (0x0005ebf0) pinb_bg_pane_g4

0x0ef4,	// (0x0005ebfc) pinb_bg_pane_g5

0x0f00,	// (0x0005ec08) pinb_bg_pane_g6

0x0f0b,	// (0x0005ec13) pinb_bg_pane_g7

0x0f16,	// (0x0005ec1e) pinb_bg_pane_g8

0x0f21,	// (0x0005ec29) pinb_bg_pane_g9

0x0f2b,	// (0x0005ec33) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0006ce0e) pinb_bg_pane_g

0x0f48,	// (0x0005ec50) grid_pinb_pane

0x0f53,	// (0x0005ec5b) list_pinb_pane

0x0f5e,	// (0x0005ec66) scroll_pane_cp01_ParamLimits

0x0f5e,	// (0x0005ec66) scroll_pane_cp01

0xa81f,	// (0x00068527) find_pinb_pane_g1_ParamLimits

0xa81f,	// (0x00068527) find_pinb_pane_g1

0xa837,	// (0x0006853f) find_pinb_pane_t1

0xa849,	// (0x00068551) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0006ce28) find_pinb_pane_t

0xa85e,	// (0x00068566) input_focus_pane_cp01_ParamLimits

0xa85e,	// (0x00068566) input_focus_pane_cp01

0x0f70,	// (0x0005ec78) cell_pinb_pane_ParamLimits

0x0f70,	// (0x0005ec78) cell_pinb_pane

0x0f95,	// (0x0005ec9d) cell_pinb_pane_g1_ParamLimits

0x0f95,	// (0x0005ec9d) cell_pinb_pane_g1

0x0faa,	// (0x0005ecb2) cell_pinb_pane_g2_ParamLimits

0x0faa,	// (0x0005ecb2) cell_pinb_pane_g2

0xa86a,	// (0x00068572) cell_pinb_pane_g3_ParamLimits

0xa86a,	// (0x00068572) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0006ce2d) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0006ce2d) cell_pinb_pane_g

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp01

0x0fb6,	// (0x0005ecbe) list_pinb_item_pane_ParamLimits

0x0fb6,	// (0x0005ecbe) list_pinb_item_pane

0xa0d6,	// (0x00067dde) list_highlight_pane_cp02

0x0fd4,	// (0x0005ecdc) list_pinb_item_pane_g1_ParamLimits

0x0fd4,	// (0x0005ecdc) list_pinb_item_pane_g1

0x0fe1,	// (0x0005ece9) list_pinb_item_pane_g2_ParamLimits

0x0fe1,	// (0x0005ece9) list_pinb_item_pane_g2

0x0fed,	// (0x0005ecf5) list_pinb_item_pane_g3_ParamLimits

0x0fed,	// (0x0005ecf5) list_pinb_item_pane_g3

0x0ffe,	// (0x0005ed06) list_pinb_item_pane_g4_ParamLimits

0x0ffe,	// (0x0005ed06) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0006ce34) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0006ce34) list_pinb_item_pane_g

0x100a,	// (0x0005ed12) list_pinb_item_pane_t1_ParamLimits

0x100a,	// (0x0005ed12) list_pinb_item_pane_t1

0x103b,	// (0x0005ed43) calc_display_pane

0x1059,	// (0x0005ed61) calc_paper_pane

0x1075,	// (0x0005ed7d) grid_calc_pane

0xa0d6,	// (0x00067dde) bg_list_pane_cp01

0x10a1,	// (0x0005eda9) clock_g1

0x10a9,	// (0x0005edb1) clock_g2

0x0001,

0xf135,	// (0x0006ce3d) clock_g

0x10b3,	// (0x0005edbb) clock_t1_ParamLimits

0x10b3,	// (0x0005edbb) clock_t1

0x10c8,	// (0x0005edd0) clock_t2_ParamLimits

0x10c8,	// (0x0005edd0) clock_t2

0x10da,	// (0x0005ede2) clock_t3_ParamLimits

0x10da,	// (0x0005ede2) clock_t3

0x10ec,	// (0x0005edf4) clock_t4_ParamLimits

0x10ec,	// (0x0005edf4) clock_t4

0x10fe,	// (0x0005ee06) clock_t5_ParamLimits

0x10fe,	// (0x0005ee06) clock_t5

0x1113,	// (0x0005ee1b) clock_t6_ParamLimits

0x1113,	// (0x0005ee1b) clock_t6

0x1125,	// (0x0005ee2d) clock_t7_ParamLimits

0x1125,	// (0x0005ee2d) clock_t7

0x1137,	// (0x0005ee3f) clock_t8_ParamLimits

0x1137,	// (0x0005ee3f) clock_t8

0x114d,	// (0x0005ee55) clock_t9_ParamLimits

0x114d,	// (0x0005ee55) clock_t9

0x0008,

0xf13a,	// (0x0006ce42) clock_t_ParamLimits

0xf13a,	// (0x0006ce42) clock_t

0xa876,	// (0x0006857e) popup_clock_analogue_window_cp02

0xa876,	// (0x0006857e) popup_clock_digital_window_cp01

0xa87e,	// (0x00068586) listscroll_help_pane

0xa0d6,	// (0x00067dde) phob_pre_status_pane

0xa888,	// (0x00068590) grid_qdial_pane

0xa7ef,	// (0x000684f7) listscroll_mce_pane

0xa7ef,	// (0x000684f7) bg_notes_pane

0xa892,	// (0x0006859a) list_notes_pane

0x1163,	// (0x0005ee6b) scroll_pane_cp06

0xa8a0,	// (0x000685a8) bg_calc_paper_pane

0x117c,	// (0x0005ee84) list_calc_pane

0xa8b4,	// (0x000685bc) bg_calc_display_pane

0x1196,	// (0x0005ee9e) calc_display_pane_t1

0x11ab,	// (0x0005eeb3) calc_display_pane_t2

0x11c0,	// (0x0005eec8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0006ce55) calc_display_pane_t

0x11d2,	// (0x0005eeda) cell_calc_pane_ParamLimits

0x11d2,	// (0x0005eeda) cell_calc_pane

0xa8c0,	// (0x000685c8) bg_calc_paper_pane_g1

0xa8cc,	// (0x000685d4) bg_calc_paper_pane_g2

0xa8d8,	// (0x000685e0) bg_calc_paper_pane_g3

0xa8e4,	// (0x000685ec) bg_calc_paper_pane_g4

0xa8f0,	// (0x000685f8) bg_calc_paper_pane_g5

0x1201,	// (0x0005ef09) bg_calc_paper_pane_g6

0x1212,	// (0x0005ef1a) bg_calc_paper_pane_g7

0x1223,	// (0x0005ef2b) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0006ce5c) bg_calc_paper_pane_g

0x1236,	// (0x0005ef3e) calc_bg_paper_pane_g9

0x1249,	// (0x0005ef51) list_calc_item_pane_ParamLimits

0x1249,	// (0x0005ef51) list_calc_item_pane

0xa8fc,	// (0x00068604) list_calc_item_pane_g1

0x126a,	// (0x0005ef72) list_calc_item_pane_t1_ParamLimits

0x126a,	// (0x0005ef72) list_calc_item_pane_t1

0x127c,	// (0x0005ef84) list_calc_item_pane_t2_ParamLimits

0x127c,	// (0x0005ef84) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0006ce6d) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0006ce6d) list_calc_item_pane_t

0xa909,	// (0x00068611) cell_calc_pane_g1

0xa913,	// (0x0006861b) grid_highlight_pane_cp02

0xa935,	// (0x0006863d) bg_calc_display_pane_g1

0x12ac,	// (0x0005efb4) bg_calc_display_pane_g2

0xa93e,	// (0x00068646) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0006ce77) bg_calc_display_pane_g

0x12b6,	// (0x0005efbe) cell_qdial_pane_ParamLimits

0x12b6,	// (0x0005efbe) cell_qdial_pane

0x12cc,	// (0x0005efd4) cell_qdial_pane_g1_ParamLimits

0x12cc,	// (0x0005efd4) cell_qdial_pane_g1

0x12d9,	// (0x0005efe1) cell_qdial_pane_g2_ParamLimits

0x12d9,	// (0x0005efe1) cell_qdial_pane_g2

0xa947,	// (0x0006864f) cell_qdial_pane_g3_ParamLimits

0xa947,	// (0x0006864f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0006ce7e) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0006ce7e) cell_qdial_pane_g

0x12f7,	// (0x0005efff) cell_qdial_pane_t1_ParamLimits

0x12f7,	// (0x0005efff) cell_qdial_pane_t1

0x130f,	// (0x0005f017) cell_qdial_pane_t2_ParamLimits

0x130f,	// (0x0005f017) cell_qdial_pane_t2

0x1322,	// (0x0005f02a) cell_qdial_pane_t3_ParamLimits

0x1322,	// (0x0005f02a) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0006ce87) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0006ce87) cell_qdial_pane_t

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp04

0xa953,	// (0x0006865b) thumbnail_qdial_pane_ParamLimits

0xa953,	// (0x0006865b) thumbnail_qdial_pane

0xa9af,	// (0x000686b7) list_help_pane

0xa9b8,	// (0x000686c0) scroll_pane_cp02

0x1335,	// (0x0005f03d) help_list_pane_t1_ParamLimits

0x1335,	// (0x0005f03d) help_list_pane_t1

0x135c,	// (0x0005f064) bg_notes_pane_g2

0x1364,	// (0x0005f06c) bg_notes_pane_g3

0x136c,	// (0x0005f074) notes_bg_pane_g1

0x1374,	// (0x0005f07c) notes_bg_pane_g4

0x137c,	// (0x0005f084) notes_bg_pane_g5

0x1384,	// (0x0005f08c) notes_bg_pane_g6

0x138c,	// (0x0005f094) notes_bg_pane_g7

0x1394,	// (0x0005f09c) notes_bg_pane_g8

0x139c,	// (0x0005f0a4) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0006cea5) notes_bg_pane_g

0x13a4,	// (0x0005f0ac) list_notes_text_pane_ParamLimits

0x13a4,	// (0x0005f0ac) list_notes_text_pane

0xa9c1,	// (0x000686c9) list_notes_text_pane_g1

0x13cc,	// (0x0005f0d4) list_notes_text_pane_t1

0x13da,	// (0x0005f0e2) listscroll_cale_week_pane

0x1410,	// (0x0005f118) bg_cale_heading_pane

0xa9db,	// (0x000686e3) bg_cale_pane_cp01

0x1439,	// (0x0005f141) cale_week_corner_pane

0x1458,	// (0x0005f160) cale_week_day_heading_pane

0x1486,	// (0x0005f18e) cale_week_scroll_pane_g1

0x14aa,	// (0x0005f1b2) cale_week_scroll_pane_g2

0x14c2,	// (0x0005f1ca) cale_week_scroll_pane_g3

0x14da,	// (0x0005f1e2) cale_week_scroll_pane_g4

0x14f2,	// (0x0005f1fa) cale_week_scroll_pane_g5

0x150a,	// (0x0005f212) cale_week_scroll_pane_g6

0x152a,	// (0x0005f232) cale_week_scroll_pane_g7

0x154a,	// (0x0005f252) cale_week_scroll_pane_g8

0x156a,	// (0x0005f272) cale_week_scroll_pane_g9

0x1587,	// (0x0005f28f) cale_week_scroll_pane_g10

0x15a4,	// (0x0005f2ac) cale_week_scroll_pane_g11

0x15c1,	// (0x0005f2c9) cale_week_scroll_pane_g12

0x15de,	// (0x0005f2e6) cale_week_scroll_pane_g13

0x1603,	// (0x0005f30b) cale_week_scroll_pane_g14

0x162c,	// (0x0005f334) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006ceb4) cale_week_scroll_pane_g

0x1675,	// (0x0005f37d) cale_week_time_pane

0x1695,	// (0x0005f39d) grid_cale_week_pane

0xaa0b,	// (0x00068713) scroll_pane_cp08

0x16c8,	// (0x0005f3d0) cell_cale_week_pane_ParamLimits

0x16c8,	// (0x0005f3d0) cell_cale_week_pane

0x1758,	// (0x0005f460) cale_week_day_heading_pane_t1

0x17a0,	// (0x0005f4a8) cale_week_day_heading_pane_t2

0x17ed,	// (0x0005f4f5) cale_week_day_heading_pane_t3

0x183a,	// (0x0005f542) cale_week_day_heading_pane_t4

0x1887,	// (0x0005f58f) cale_week_day_heading_pane_t5

0x18d4,	// (0x0005f5dc) cale_week_day_heading_pane_t6

0x1921,	// (0x0005f629) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0006ced5) cale_week_day_heading_pane_t

0xaa2d,	// (0x00068735) bg_cale_side_pane

0x1969,	// (0x0005f671) cale_week_time_pane_t1

0x19ad,	// (0x0005f6b5) cale_week_time_pane_t2

0x19f1,	// (0x0005f6f9) cale_week_time_pane_t3

0x1a35,	// (0x0005f73d) cale_week_time_pane_t4

0x1a79,	// (0x0005f781) cale_week_time_pane_t5

0x1abd,	// (0x0005f7c5) cale_week_time_pane_t6

0x1b01,	// (0x0005f809) cale_week_time_pane_t7

0x1b4d,	// (0x0005f855) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0006cee4) cale_week_time_pane_t

0x1b9b,	// (0x0005f8a3) cell_cale_week_pane_g2

0x1bbf,	// (0x0005f8c7) cell_cale_week_pane_g3_ParamLimits

0x1bbf,	// (0x0005f8c7) cell_cale_week_pane_g3

0xaa3b,	// (0x00068743) grid_highlight_pane_cp07

0xaa43,	// (0x0006874b) listscroll_gms_pane

0xaa4d,	// (0x00068755) grid_gms_pane

0xaa56,	// (0x0006875e) listscroll_gms_pane_g1

0xaa5e,	// (0x00068766) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0006cef5) listscroll_gms_pane_g

0x1bd7,	// (0x0005f8df) scroll_pane_cp010

0x1be2,	// (0x0005f8ea) cell_gms_pane_ParamLimits

0x1be2,	// (0x0005f8ea) cell_gms_pane

0x1bf5,	// (0x0005f8fd) cell_gms_pane_g1

0xaa66,	// (0x0006876e) cell_gms_pane_g2

0xaa6e,	// (0x00068776) cell_gms_pane_g3

0xaa77,	// (0x0006877f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0006cefa) cell_gms_pane_g

0xaa80,	// (0x00068788) grid_highlight_pane_cp09

0x431f,	// (0x00062027) phob_pre_status_pane_g1

0x4327,	// (0x0006202f) phob_pre_status_pane_g2

0x432f,	// (0x00062037) phob_pre_status_pane_g3

0x4337,	// (0x0006203f) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0006d2e9) phob_pre_status_pane_g

0x4347,	// (0x0006204f) phob_pre_status_pane_t1

0x4357,	// (0x0006205f) phob_pre_status_pane_t2

0x4367,	// (0x0006206f) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0006d2f4) phob_pre_status_pane_t

0xa0d6,	// (0x00067dde) bg_list_pane_cp05

0x1c05,	// (0x0005f90d) grid_vorec_pane

0x1c11,	// (0x0005f919) vorec_t1

0x1c1f,	// (0x0005f927) vorec_t2

0x1c2d,	// (0x0005f935) vorec_t3

0x1c3b,	// (0x0005f943) vorec_t4

0x1c49,	// (0x0005f951) vorec_t5

0x1c57,	// (0x0005f95f) vorec_t6

0x0006,

0xf1fb,	// (0x0006cf03) vorec_t

0x1c73,	// (0x0005f97b) wait_bar_pane_cp01

0x1c7b,	// (0x0005f983) cell_vorec_pane_ParamLimits

0x1c7b,	// (0x0005f983) cell_vorec_pane

0x1c90,	// (0x0005f998) cell_vorec_pane_g1

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp05

0x1ca8,	// (0x0005f9b0) cams_zoom_pane

0x1cb4,	// (0x0005f9bc) image_vga_pane

0x1cc3,	// (0x0005f9cb) main_camera_pane_g1

0x1cd1,	// (0x0005f9d9) main_camera_pane_g2

0x1cdd,	// (0x0005f9e5) main_camera_pane_g3

0x1ceb,	// (0x0005f9f3) main_camera_pane_g4

0x1cf9,	// (0x0005fa01) main_camera_pane_g5

0x1d07,	// (0x0005fa0f) main_camera_pane_g6

0x1d15,	// (0x0005fa1d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006cf12) main_camera_pane_g

0x1d23,	// (0x0005fa2b) main_camera_pane_t1

0x1d35,	// (0x0005fa3d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006cf23) main_camera_pane_t

0x1d58,	// (0x0005fa60) cams_zoom_pane_cp_ParamLimits

0x1d58,	// (0x0005fa60) cams_zoom_pane_cp

0x1d7c,	// (0x0005fa84) image_cif_pane_ParamLimits

0x1d7c,	// (0x0005fa84) image_cif_pane

0x1d9a,	// (0x0005faa2) image_subqcif_pane

0x1da4,	// (0x0005faac) main_video_pane_g1_ParamLimits

0x1da4,	// (0x0005faac) main_video_pane_g1

0x1dc4,	// (0x0005facc) main_video_pane_g2_ParamLimits

0x1dc4,	// (0x0005facc) main_video_pane_g2

0x1df4,	// (0x0005fafc) main_video_pane_g3_ParamLimits

0x1df4,	// (0x0005fafc) main_video_pane_g3

0x1e1d,	// (0x0005fb25) main_video_pane_g4_ParamLimits

0x1e1d,	// (0x0005fb25) main_video_pane_g4

0x1e46,	// (0x0005fb4e) main_video_pane_g5_ParamLimits

0x1e46,	// (0x0005fb4e) main_video_pane_g5

0xaa94,	// (0x0006879c) main_video_pane_g6_ParamLimits

0xaa94,	// (0x0006879c) main_video_pane_g6

0x0006,

0xf220,	// (0x0006cf28) main_video_pane_g_ParamLimits

0xf220,	// (0x0006cf28) main_video_pane_g

0x1e68,	// (0x0005fb70) main_video_pane_t1_ParamLimits

0x1e68,	// (0x0005fb70) main_video_pane_t1

0xaaae,	// (0x000687b6) cams_zoom_pane_g1

0xaab7,	// (0x000687bf) cams_zoom_pane_g2

0xaac0,	// (0x000687c8) cams_zoom_pane_g3

0xaac9,	// (0x000687d1) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006cf37) cams_zoom_pane_g

0x1eb2,	// (0x0005fbba) grid_cams_pane

0x1ec0,	// (0x0005fbc8) linegrid_cams_pane

0x1ecc,	// (0x0005fbd4) cell_cams_pane_ParamLimits

0x1ecc,	// (0x0005fbd4) cell_cams_pane

0xaad2,	// (0x000687da) cams_burst_image_pane

0xaada,	// (0x000687e2) cell_cams_pane_g1

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp03

0xa909,	// (0x00068611) mp_bg_pane_g1

0xa0d6,	// (0x00067dde) bg_list_pane_cp03

0xc739,	// (0x0006a441) bg_mp_pane

0xc741,	// (0x0006a449) grid_mp_pane

0xc749,	// (0x0006a451) media_player_g1

0xc753,	// (0x0006a45b) media_player_t1

0xc761,	// (0x0006a469) media_player_t2

0xc76f,	// (0x0006a477) media_player_t3

0xc77d,	// (0x0006a485) media_player_t4

0xc78b,	// (0x0006a493) media_player_t5

0xc799,	// (0x0006a4a1) media_player_t6

0xc7a7,	// (0x0006a4af) media_player_t7

0x0006,

0xf5cb,	// (0x0006d2d3) media_player_t

0xc7b5,	// (0x0006a4bd) wait_bar_pane_cp02

0xf5b0,	// (0x0006d2b8) main_usb_pane_t

0x4316,	// (0x0006201e) cell_mp_pane

0xa909,	// (0x00068611) cell_mp_pane_g1

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp06

0xaae2,	// (0x000687ea) grid_skin_colour_pane

0xaaea,	// (0x000687f2) list_highlight_pane_cp03

0x1fe0,	// (0x0005fce8) skin_g1

0xaaf2,	// (0x000687fa) skin_t1

0xab01,	// (0x00068809) skin_t2

0x0001,

0xf264,	// (0x0006cf6c) skin_t

0x1fea,	// (0x0005fcf2) cell_skin_colour_pane_ParamLimits

0x1fea,	// (0x0005fcf2) cell_skin_colour_pane

0xab0f,	// (0x00068817) cell_skin_colour_pane_g1

0x206a,	// (0x0005fd72) call_video_g1_ParamLimits

0x206a,	// (0x0005fd72) call_video_g1

0x207a,	// (0x0005fd82) call_video_g2_ParamLimits

0x207a,	// (0x0005fd82) call_video_g2

0x0001,

0xf269,	// (0x0006cf71) call_video_g_ParamLimits

0xf269,	// (0x0006cf71) call_video_g

0x20ca,	// (0x0005fdd2) call_video_uplink_pane_cp1_ParamLimits

0x20ca,	// (0x0005fdd2) call_video_uplink_pane_cp1

0xab21,	// (0x00068829) call_video_uplink_pane_cp2

0x2198,	// (0x0005fea0) video_down_crop_pane_ParamLimits

0x2198,	// (0x0005fea0) video_down_crop_pane

0x228a,	// (0x0005ff92) video_down_pane_ParamLimits

0x228a,	// (0x0005ff92) video_down_pane

0xab29,	// (0x00068831) video_down_subqcif_pane_ParamLimits

0xab29,	// (0x00068831) video_down_subqcif_pane

0xab43,	// (0x0006884b) video_down_subqcif_pane_cp_ParamLimits

0xab43,	// (0x0006884b) video_down_subqcif_pane_cp

0xab6b,	// (0x00068873) im_reading_pane_ParamLimits

0xab6b,	// (0x00068873) im_reading_pane

0x23a7,	// (0x000600af) im_writing_pane_ParamLimits

0x23a7,	// (0x000600af) im_writing_pane

0x23c5,	// (0x000600cd) im_reading_pane_t1

0xab85,	// (0x0006888d) list_im_pane

0xab96,	// (0x0006889e) scroll_pane_cp07

0x2407,	// (0x0006010f) im_writing_pane_t1_ParamLimits

0x2407,	// (0x0006010f) im_writing_pane_t1

0xabaf,	// (0x000688b7) im_writing_pane_t2_ParamLimits

0xabaf,	// (0x000688b7) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006cf7b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006cf7b) im_writing_pane_t

0xa0d6,	// (0x00067dde) input_focus_pane_cp04

0xa0d6,	// (0x00067dde) input_focus_pane_cp05

0x2419,	// (0x00060121) list_im_single_pane_ParamLimits

0x2419,	// (0x00060121) list_im_single_pane

0x2432,	// (0x0006013a) list_single_im_pane_t1

0x42da,	// (0x00061fe2) blid_accuracy_pane

0x42e2,	// (0x00061fea) blid_compass_pane

0x42ec,	// (0x00061ff4) main_location_t1

0x42fa,	// (0x00062002) main_location_t2

0x4308,	// (0x00062010) main_location_t3

0x0002,

0xf5da,	// (0x0006d2e2) main_location_t

0xa0d6,	// (0x00067dde) aid_levels_location

0xa909,	// (0x00068611) blid_accuracy_pane_g1

0xa909,	// (0x00068611) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006cfdd) blid_accuracy_pane_g

0xabf7,	// (0x000688ff) wml_content_pane

0xac35,	// (0x0006893d) wml_button_pane_ParamLimits

0xac35,	// (0x0006893d) wml_button_pane

0x2441,	// (0x00060149) wml_list_single_large_pane_ParamLimits

0x2441,	// (0x00060149) wml_list_single_large_pane

0x2463,	// (0x0006016b) wml_list_single_medium_pane_ParamLimits

0x2463,	// (0x0006016b) wml_list_single_medium_pane

0x2486,	// (0x0006018e) wml_list_single_small_pane_ParamLimits

0x2486,	// (0x0006018e) wml_list_single_small_pane

0xac49,	// (0x00068951) wml_selection_box_pane_ParamLimits

0xac49,	// (0x00068951) wml_selection_box_pane

0xac5c,	// (0x00068964) wml_list_single_pane_t1

0xac6b,	// (0x00068973) wml_list_single_medium_pane_t1

0xac7a,	// (0x00068982) wml_list_single_large_pane_t1

0xac89,	// (0x00068991) input_focus_pane_cp02_ParamLimits

0xac89,	// (0x00068991) input_focus_pane_cp02

0xac9c,	// (0x000689a4) wml_selection_box_pane_g1

0xaca5,	// (0x000689ad) wml_selection_box_pane_t1_ParamLimits

0xaca5,	// (0x000689ad) wml_selection_box_pane_t1

0xa7ef,	// (0x000684f7) bg_wml_button_pane_ParamLimits

0xa7ef,	// (0x000684f7) bg_wml_button_pane

0xacbd,	// (0x000689c5) wml_button_pane_g1

0xacc5,	// (0x000689cd) wml_button_pane_t1

0xacbd,	// (0x000689c5) wml_button_bg_pane_g1

0xacd5,	// (0x000689dd) wml_button_bg_pane_g2

0xacdd,	// (0x000689e5) wml_button_bg_pane_g3

0xace5,	// (0x000689ed) wml_button_bg_pane_g4

0xaced,	// (0x000689f5) wml_button_bg_pane_g5

0xacf5,	// (0x000689fd) wml_button_bg_pane_g6

0xacfd,	// (0x00068a05) wml_button_bg_pane_g7

0xad05,	// (0x00068a0d) wml_button_bg_pane_g8

0xad0d,	// (0x00068a15) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006cf80) wml_button_bg_pane_g

0x24ae,	// (0x000601b6) bg_list_pane_cp02

0xad15,	// (0x00068a1d) mce_header_pane_ParamLimits

0xad15,	// (0x00068a1d) mce_header_pane

0xad2b,	// (0x00068a33) mce_icon_pane

0xad2b,	// (0x00068a33) mce_image_pane

0xad34,	// (0x00068a3c) mce_text_pane_ParamLimits

0xad34,	// (0x00068a3c) mce_text_pane

0x24b8,	// (0x000601c0) scroll_pane_cp03

0xac2d,	// (0x00068935) scroll_pane_cp04

0xad47,	// (0x00068a4f) scroll_pane_cp05_ParamLimits

0xad47,	// (0x00068a4f) scroll_pane_cp05

0x24c2,	// (0x000601ca) mce_header_field_pane_ParamLimits

0x24c2,	// (0x000601ca) mce_header_field_pane

0x24e4,	// (0x000601ec) mce_header_field_pane_2_ParamLimits

0x24e4,	// (0x000601ec) mce_header_field_pane_2

0x24fa,	// (0x00060202) mce_header_field_pane_3

0x2502,	// (0x0006020a) list_single_mce_message_pane_ParamLimits

0x2502,	// (0x0006020a) list_single_mce_message_pane

0x2521,	// (0x00060229) list_single_mce_smart_pane_ParamLimits

0x2521,	// (0x00060229) list_single_mce_smart_pane

0xad53,	// (0x00068a5b) input_focus_pane_cp03

0xad5c,	// (0x00068a64) list_header_data_pane

0x254b,	// (0x00060253) mce_header_field_pane_t1

0x255b,	// (0x00060263) list_single_mce_header_pane_ParamLimits

0x255b,	// (0x00060263) list_single_mce_header_pane

0xad64,	// (0x00068a6c) list_single_mce_header_pane_t1

0xad73,	// (0x00068a7b) list_single_mce_message_pane_g1

0xad7b,	// (0x00068a83) list_single_mce_message_pane_t1

0x259f,	// (0x000602a7) bg_cale_heading_pane_cp01_ParamLimits

0x259f,	// (0x000602a7) bg_cale_heading_pane_cp01

0xad89,	// (0x00068a91) bg_cale_pane_cp02_ParamLimits

0xad89,	// (0x00068a91) bg_cale_pane_cp02

0x25e6,	// (0x000602ee) cale_month_corner_pane

0x2605,	// (0x0006030d) cale_month_day_heading_pane_ParamLimits

0x2605,	// (0x0006030d) cale_month_day_heading_pane

0x265c,	// (0x00060364) cale_month_pane_g1_ParamLimits

0x265c,	// (0x00060364) cale_month_pane_g1

0x2698,	// (0x000603a0) cale_month_pane_g2_ParamLimits

0x2698,	// (0x000603a0) cale_month_pane_g2

0x26d0,	// (0x000603d8) cale_month_pane_g3_ParamLimits

0x26d0,	// (0x000603d8) cale_month_pane_g3

0x2724,	// (0x0006042c) cale_month_pane_g4_ParamLimits

0x2724,	// (0x0006042c) cale_month_pane_g4

0x2778,	// (0x00060480) cale_month_pane_g5_ParamLimits

0x2778,	// (0x00060480) cale_month_pane_g5

0x27cc,	// (0x000604d4) cale_month_pane_g6_ParamLimits

0x27cc,	// (0x000604d4) cale_month_pane_g6

0x2830,	// (0x00060538) cale_month_pane_g7_ParamLimits

0x2830,	// (0x00060538) cale_month_pane_g7

0x2894,	// (0x0006059c) cale_month_pane_g8_ParamLimits

0x2894,	// (0x0006059c) cale_month_pane_g8

0x28f8,	// (0x00060600) cale_month_pane_g9_ParamLimits

0x28f8,	// (0x00060600) cale_month_pane_g9

0x2950,	// (0x00060658) cale_month_pane_g10_ParamLimits

0x2950,	// (0x00060658) cale_month_pane_g10

0x299e,	// (0x000606a6) cale_month_pane_g11_ParamLimits

0x299e,	// (0x000606a6) cale_month_pane_g11

0x29ea,	// (0x000606f2) cale_month_pane_g12_ParamLimits

0x29ea,	// (0x000606f2) cale_month_pane_g12

0x2a3a,	// (0x00060742) cale_month_pane_g13_ParamLimits

0x2a3a,	// (0x00060742) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006cf93) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006cf93) cale_month_pane_g

0x2a8a,	// (0x00060792) cale_month_week_pane

0x2aaa,	// (0x000607b2) grid_cale_month_pane_ParamLimits

0x2aaa,	// (0x000607b2) grid_cale_month_pane

0x2af8,	// (0x00060800) cale_month_day_heading_pane_t1

0x2b7a,	// (0x00060882) cale_month_day_heading_pane_t2

0x2c07,	// (0x0006090f) cale_month_day_heading_pane_t3

0x2c94,	// (0x0006099c) cale_month_day_heading_pane_t4

0x2d21,	// (0x00060a29) cale_month_day_heading_pane_t5

0x2db6,	// (0x00060abe) cale_month_day_heading_pane_t6

0x2e53,	// (0x00060b5b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006cfae) cale_month_day_heading_pane_t

0xaa2d,	// (0x00068735) bg_cale_side_pane_cp01

0x2ef0,	// (0x00060bf8) cale_month_week_pane_t1

0x2f09,	// (0x00060c11) cale_month_week_pane_t2

0x2f22,	// (0x00060c2a) cale_month_week_pane_t3

0x2f3b,	// (0x00060c43) cale_month_week_pane_t4

0x2f54,	// (0x00060c5c) cale_month_week_pane_t5

0x2f6f,	// (0x00060c77) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006cfbd) cale_month_week_pane_t

0x2f90,	// (0x00060c98) cell_cale_month_pane_ParamLimits

0x2f90,	// (0x00060c98) cell_cale_month_pane

0x30dc,	// (0x00060de4) cell_cale_month_pane_g1

0x30e8,	// (0x00060df0) cell_cale_month_pane_t1_ParamLimits

0x30e8,	// (0x00060df0) cell_cale_month_pane_t1

0xaa3b,	// (0x00068743) grid_highlight_pane_cp08

0xa909,	// (0x00068611) main_smil_g1

0x3108,	// (0x00060e10) smil_status_pane

0xadc8,	// (0x00068ad0) smil_text_pane

0xc657,	// (0x0006a35f) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x0006a367) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0006d276) bg_popup_call3_rect_pane_g

0xc8ed,	// (0x0006a5f5) smil_status_volume_pane_g1

0x311b,	// (0x00060e23) smil_status_pane_t1

0x46ce,	// (0x000623d6) volume_smil_pane

0xadd2,	// (0x00068ada) list_smil_text_pane

0x3132,	// (0x00060e3a) scroll_pane_cp011

0x313d,	// (0x00060e45) smil_text_list_pane_t1_ParamLimits

0x313d,	// (0x00060e45) smil_text_list_pane_t1

0x318f,	// (0x00060e97) aid_volume_smil_ParamLimits

0x318f,	// (0x00060e97) aid_volume_smil

0xa909,	// (0x00068611) smil_volume_pane_g1

0xa909,	// (0x00068611) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006cfdd) smil_volume_pane_g

0x13da,	// (0x0005f0e2) listscroll_cale_day_pane

0xaddc,	// (0x00068ae4) bg_cale_pane

0xadf4,	// (0x00068afc) list_cale_pane

0xae17,	// (0x00068b1f) scroll_pane_cp09

0xae28,	// (0x00068b30) cale_bg_pane_g1

0xae30,	// (0x00068b38) cale_bg_pane_g2

0xae38,	// (0x00068b40) cale_bg_pane_g3

0xae40,	// (0x00068b48) cale_bg_pane_g4

0xae48,	// (0x00068b50) cale_bg_pane_g5

0xae50,	// (0x00068b58) cale_bg_pane_g6

0xae58,	// (0x00068b60) cale_bg_pane_g7

0xae60,	// (0x00068b68) cale_bg_pane_g8

0xae68,	// (0x00068b70) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006cfe2) cale_bg_pane_g

0x31b1,	// (0x00060eb9) list_cale_time_pane_ParamLimits

0x31b1,	// (0x00060eb9) list_cale_time_pane

0xae78,	// (0x00068b80) list_cale_time_pane_g1_ParamLimits

0xae78,	// (0x00068b80) list_cale_time_pane_g1

0xae84,	// (0x00068b8c) list_cale_time_pane_g2_ParamLimits

0xae84,	// (0x00068b8c) list_cale_time_pane_g2

0x31c5,	// (0x00060ecd) list_cale_time_pane_g3_ParamLimits

0x31c5,	// (0x00060ecd) list_cale_time_pane_g3

0x31d3,	// (0x00060edb) list_cale_time_pane_g4_ParamLimits

0x31d3,	// (0x00060edb) list_cale_time_pane_g4

0x31e1,	// (0x00060ee9) list_cale_time_pane_g5_ParamLimits

0x31e1,	// (0x00060ee9) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006cff5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006cff5) list_cale_time_pane_g

0xae9e,	// (0x00068ba6) list_cale_time_pane_t1_ParamLimits

0xae9e,	// (0x00068ba6) list_cale_time_pane_t1

0xaec6,	// (0x00068bce) list_cale_time_pane_t2_ParamLimits

0xaec6,	// (0x00068bce) list_cale_time_pane_t2

0x35aa,	// (0x000612b2) aid_blid_cardinal_pane

0x35ec,	// (0x000612f4) compass_pane_t4

0xaeee,	// (0x00068bf6) list_cale_time_pane_t4_ParamLimits

0xaeee,	// (0x00068bf6) list_cale_time_pane_t4

0x35fa,	// (0x00061302) compass_pane_t5

0x360a,	// (0x00061312) compass_pane_t6

0x3618,	// (0x00061320) compass_pane_t7

0xb34b,	// (0x00069053) navi_pane_cc_t1

0xb4a0,	// (0x000691a8) aid_phob_thumbnail_center_pane

0x3dd6,	// (0x00061ade) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006d002) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006d002) list_cale_time_pane_t

0x9d2d,	// (0x00067a35) bg_popup_window_pane_cp02_ParamLimits

0x9d2d,	// (0x00067a35) bg_popup_window_pane_cp02

0xaf16,	// (0x00068c1e) heading_pane_cp01_ParamLimits

0xaf16,	// (0x00068c1e) heading_pane_cp01

0xaf22,	// (0x00068c2a) loc_req_pane_ParamLimits

0xaf22,	// (0x00068c2a) loc_req_pane

0xaf32,	// (0x00068c3a) loc_type_pane_ParamLimits

0xaf32,	// (0x00068c3a) loc_type_pane

0xaf44,	// (0x00068c4c) loc_type_pane_t1_ParamLimits

0xaf44,	// (0x00068c4c) loc_type_pane_t1

0xaf56,	// (0x00068c5e) loc_type_pane_t2_ParamLimits

0xaf56,	// (0x00068c5e) loc_type_pane_t2

0xaf68,	// (0x00068c70) loc_type_pane_t3_ParamLimits

0xaf68,	// (0x00068c70) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006d009) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006d009) loc_type_pane_t

0xaf7a,	// (0x00068c82) list_loc_req_pane

0xaf84,	// (0x00068c8c) scroll_pane_cp012

0x31ef,	// (0x00060ef7) list_single_loc_request_popup_menu_pane_ParamLimits

0x31ef,	// (0x00060ef7) list_single_loc_request_popup_menu_pane

0xaf8f,	// (0x00068c97) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf8f,	// (0x00068c97) list_single_loc_request_popup_menu_pane_g1

0xaf9b,	// (0x00068ca3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf9b,	// (0x00068ca3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006d010) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006d010) list_single_loc_request_popup_menu_pane_g

0xafa7,	// (0x00068caf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafa7,	// (0x00068caf) list_single_loc_request_popup_menu_pane_t1

0x3201,	// (0x00060f09) bg_popup_window_pane_cp03_ParamLimits

0x3201,	// (0x00060f09) bg_popup_window_pane_cp03

0x320f,	// (0x00060f17) heading_loc_req_pane_ParamLimits

0x320f,	// (0x00060f17) heading_loc_req_pane

0x321b,	// (0x00060f23) popup_dyc_status_message_window_g1_ParamLimits

0x321b,	// (0x00060f23) popup_dyc_status_message_window_g1

0x3227,	// (0x00060f2f) popup_dyc_status_message_window_t1_ParamLimits

0x3227,	// (0x00060f2f) popup_dyc_status_message_window_t1

0x3239,	// (0x00060f41) popup_dyc_status_message_window_t2_ParamLimits

0x3239,	// (0x00060f41) popup_dyc_status_message_window_t2

0x324b,	// (0x00060f53) popup_dyc_status_message_window_t3_ParamLimits

0x324b,	// (0x00060f53) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006d015) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006d015) popup_dyc_status_message_window_t

0xa0d6,	// (0x00067dde) bg_heading_pane_cp01

0xafbd,	// (0x00068cc5) heading_loc_req_pane_g1

0xafc5,	// (0x00068ccd) heading_loc_req_pane_g2

0xafcd,	// (0x00068cd5) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006d01c) heading_loc_req_pane_g

0xafd5,	// (0x00068cdd) heading_loc_req_pane_t1

0xafe5,	// (0x00068ced) bg_popup_sub_pane_cp01_ParamLimits

0xafe5,	// (0x00068ced) bg_popup_sub_pane_cp01

0xaff3,	// (0x00068cfb) popup_cale_events_window_g1_ParamLimits

0xaff3,	// (0x00068cfb) popup_cale_events_window_g1

0xb013,	// (0x00068d1b) popup_cale_events_window_g2_ParamLimits

0xb013,	// (0x00068d1b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006d050) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006d050) popup_cale_events_window_g

0xb033,	// (0x00068d3b) popup_cale_events_window_t1_ParamLimits

0xb033,	// (0x00068d3b) popup_cale_events_window_t1

0xb045,	// (0x00068d4d) popup_cale_events_window_t2_ParamLimits

0xb045,	// (0x00068d4d) popup_cale_events_window_t2

0xb083,	// (0x00068d8b) popup_cale_events_window_t3_ParamLimits

0xb083,	// (0x00068d8b) popup_cale_events_window_t3

0xb0bd,	// (0x00068dc5) popup_cale_events_window_t4_ParamLimits

0xb0bd,	// (0x00068dc5) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006d055) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006d055) popup_cale_events_window_t

0x3346,	// (0x0006104e) call_type_pane

0xb14e,	// (0x00068e56) popup_call_status_window_g1

0x3352,	// (0x0006105a) popup_call_status_window_g2

0x335e,	// (0x00061066) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006d05e) popup_call_status_window_g

0xb0f3,	// (0x00068dfb) call_type_pane_g1

0xb0fc,	// (0x00068e04) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006d065) call_type_pane_g

0xa0d6,	// (0x00067dde) bg_popup_sub_pane_cp02

0xb105,	// (0x00068e0d) listscroll_popup_wml_pane

0xb15c,	// (0x00068e64) list_wml_pane

0xb166,	// (0x00068e6e) scroll_pane_cp013

0xb171,	// (0x00068e79) list_single_graphic_popup_wml_pane_ParamLimits

0xb171,	// (0x00068e79) list_single_graphic_popup_wml_pane

0xa909,	// (0x00068611) list_single_graphic_popup_wml_pane_g1

0xb185,	// (0x00068e8d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006d06a) list_single_graphic_popup_wml_pane_g

0xb18d,	// (0x00068e95) list_single_graphic_popup_wml_pane_t1

0xb1a3,	// (0x00068eab) aid_call_pane

0xa7e7,	// (0x000684ef) popup_clock_analogue_window_g1

0xa7e7,	// (0x000684ef) popup_clock_analogue_window_g2

0x336a,	// (0x00061072) popup_clock_analogue_window_g3

0x336a,	// (0x00061072) popup_clock_analogue_window_g4

0xa909,	// (0x00068611) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006d06f) popup_clock_analogue_window_g

0x3372,	// (0x0006107a) popup_clock_analogue_window_t1

0x3380,	// (0x00061088) clock_digital_number_pane_ParamLimits

0x3380,	// (0x00061088) clock_digital_number_pane

0x338c,	// (0x00061094) clock_digital_number_pane_cp02_ParamLimits

0x338c,	// (0x00061094) clock_digital_number_pane_cp02

0x3398,	// (0x000610a0) clock_digital_number_pane_cp03_ParamLimits

0x3398,	// (0x000610a0) clock_digital_number_pane_cp03

0x33a4,	// (0x000610ac) clock_digital_number_pane_cp04_ParamLimits

0x33a4,	// (0x000610ac) clock_digital_number_pane_cp04

0x33b0,	// (0x000610b8) clock_digital_separator_pane_ParamLimits

0x33b0,	// (0x000610b8) clock_digital_separator_pane

0x33bc,	// (0x000610c4) popup_clock_digital_window_t1

0xa909,	// (0x00068611) clock_digital_number_pane_g1

0xa909,	// (0x00068611) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006cfdd) clock_digital_number_pane_g

0xa909,	// (0x00068611) clock_digital_separator_pane_g1

0xa909,	// (0x00068611) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006cfdd) clock_digital_separator_pane_g

0xa0d6,	// (0x00067dde) bg_popup_window_pane_cp04

0xb1ab,	// (0x00068eb3) heading_pane_cp03

0xb1b3,	// (0x00068ebb) listscroll_popup_gms_pane

0xb1bb,	// (0x00068ec3) grid_large_graphic_popup_pane

0xb1c5,	// (0x00068ecd) listscroll_popup_gms_pane_g1

0xb1cd,	// (0x00068ed5) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006d07a) listscroll_popup_gms_pane_g

0xac2d,	// (0x00068935) scroll_pane_cp014

0x33d9,	// (0x000610e1) cell_large_graphic_popup_pane_ParamLimits

0x33d9,	// (0x000610e1) cell_large_graphic_popup_pane

0x33f3,	// (0x000610fb) cell_large_graphic_popup_pane_g1_ParamLimits

0x33f3,	// (0x000610fb) cell_large_graphic_popup_pane_g1

0xb1d5,	// (0x00068edd) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1d5,	// (0x00068edd) cell_large_graphic_popup_pane_g2

0xb1e1,	// (0x00068ee9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1e1,	// (0x00068ee9) cell_large_graphic_popup_pane_g3

0xb1ee,	// (0x00068ef6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ee,	// (0x00068ef6) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006d07f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006d07f) cell_large_graphic_popup_pane_g

0xb1fe,	// (0x00068f06) grid_highlight_pane_cp010

0xa909,	// (0x00068611) bg_popup_call_pane_g1

0xb208,	// (0x00068f10) list_single_graphic_popup_conf_pane_ParamLimits

0xb208,	// (0x00068f10) list_single_graphic_popup_conf_pane

0xb21a,	// (0x00068f22) list_highlight_pane_cp01

0xb223,	// (0x00068f2b) list_single_graphic_popup_conf_pane_g1

0xb22b,	// (0x00068f33) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006d088) list_single_graphic_popup_conf_pane_g

0xb233,	// (0x00068f3b) list_single_graphic_popup_conf_pane_t1

0xb241,	// (0x00068f49) linegrid_cams_pane_g1

0x33ff,	// (0x00061107) linegrid_cams_pane_g2

0xaa6e,	// (0x00068776) linegrid_cams_pane_g3

0xb24a,	// (0x00068f52) linegrid_cams_pane_g4

0x3408,	// (0x00061110) linegrid_cams_pane_g5

0x3411,	// (0x00061119) linegrid_cams_pane_g6

0xaa77,	// (0x0006877f) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006d08d) linegrid_cams_pane_g

0xb253,	// (0x00068f5b) popup_clock_analogue_window

0xb253,	// (0x00068f5b) popup_clock_digital_window

0xa0d6,	// (0x00067dde) popup_phob_thumbnail_window

0xa909,	// (0x00068611) call_video_uplink_pane_g1

0xb25c,	// (0x00068f64) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006d09c) call_video_uplink_pane_g

0xb264,	// (0x00068f6c) video_uplink_pane

0xb26c,	// (0x00068f74) mce_image_pane_g1

0x341c,	// (0x00061124) mce_image_pane_g2

0x3426,	// (0x0006112e) mce_image_pane_g3

0x3430,	// (0x00061138) mce_image_pane_g4

0x3438,	// (0x00061140) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006d0a1) mce_image_pane_g

0xb276,	// (0x00068f7e) control_top_pane_stacon_cp01_ParamLimits

0xb276,	// (0x00068f7e) control_top_pane_stacon_cp01

0xb28a,	// (0x00068f92) uni_indicator_pane_stacon_cp01_ParamLimits

0xb28a,	// (0x00068f92) uni_indicator_pane_stacon_cp01

0xb29b,	// (0x00068fa3) bg_popup_sub_pane_cp03

0x3440,	// (0x00061148) chi_dic_find_pane

0x3448,	// (0x00061150) listscroll_chi_dic_pane

0x3451,	// (0x00061159) main_pane_chidic_g1

0x3464,	// (0x0006116c) chi_dic_find_pane_t1

0xb2a5,	// (0x00068fad) find_chidic_pane

0xb2ae,	// (0x00068fb6) chi_dic_list_pane_ParamLimits

0xb2ae,	// (0x00068fb6) chi_dic_list_pane

0xb2bf,	// (0x00068fc7) scroll_pane_cp020

0x3472,	// (0x0006117a) find_chidic_pane_t1

0xa0d6,	// (0x00067dde) input_focus_pane_cp06

0x3481,	// (0x00061189) list_chi_dic_pane_ParamLimits

0x3481,	// (0x00061189) list_chi_dic_pane

0x3496,	// (0x0006119e) list_chi_dic_pane_t1_ParamLimits

0x3496,	// (0x0006119e) list_chi_dic_pane_t1

0xa0d6,	// (0x00067dde) list_highlight_pane_cp020

0xb2c7,	// (0x00068fcf) bg_cale_heading_pane_g1

0x34a9,	// (0x000611b1) bg_cale_heading_pane_g2

0x34b1,	// (0x000611b9) bg_cale_heading_pane_g3

0x34b9,	// (0x000611c1) bg_cale_heading_pane_g4

0x34c3,	// (0x000611cb) bg_cale_heading_pane_g5

0x34cd,	// (0x000611d5) bg_cale_heading_pane_g6

0x34d5,	// (0x000611dd) bg_cale_heading_pane_g7

0x34dd,	// (0x000611e5) bg_cale_heading_pane_g8

0x34e7,	// (0x000611ef) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006d0ac) bg_cale_heading_pane_g

0xb2c7,	// (0x00068fcf) bg_cale_side_pane_g1

0x34f1,	// (0x000611f9) bg_cale_side_pane_g2

0x34fb,	// (0x00061203) bg_cale_side_pane_g3

0x3505,	// (0x0006120d) bg_cale_side_pane_g4

0x350f,	// (0x00061217) bg_cale_side_pane_g5

0x3519,	// (0x00061221) bg_cale_side_pane_g6

0x3523,	// (0x0006122b) bg_cale_side_pane_g7

0x352d,	// (0x00061235) bg_cale_side_pane_g8

0x3535,	// (0x0006123d) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006d0bf) bg_cale_side_pane_g

0x353d,	// (0x00061245) popup_call_status_window_ParamLimits

0x353d,	// (0x00061245) popup_call_status_window

0xb2cf,	// (0x00068fd7) stacon_top_pane

0xb2d7,	// (0x00068fdf) status_pane_ParamLimits

0xb2d7,	// (0x00068fdf) status_pane

0xb2ec,	// (0x00068ff4) status_small_pane

0xb2f4,	// (0x00068ffc) control_pane

0xa0d6,	// (0x00067dde) stacon_bottom_pane

0xb2fc,	// (0x00069004) list_single_mce_smart_pane_t1_ParamLimits

0xb2fc,	// (0x00069004) list_single_mce_smart_pane_t1

0xb30f,	// (0x00069017) list_single_mce_smart_pane_t2_ParamLimits

0xb30f,	// (0x00069017) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0006d0d2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0006d0d2) list_single_mce_smart_pane_t

0x3549,	// (0x00061251) compass_pane

0x3554,	// (0x0006125c) main_location2_pane_t1

0x356a,	// (0x00061272) main_location2_pane_t2

0x3580,	// (0x00061288) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0006d0d7) main_location2_pane_t

0xb32e,	// (0x00069036) compass_pane_g1_ParamLimits

0xb32e,	// (0x00069036) compass_pane_g1

0x35ce,	// (0x000612d6) compass_pane_t1

0x35dd,	// (0x000612e5) compass_pane_t2

0x0005,

0xf3d8,	// (0x0006d0e0) compass_pane_t

0x3628,	// (0x00061330) text_secondary_cp61

0xb342,	// (0x0006904a) navi_pane_cams_g5

0xb365,	// (0x0006906d) navi_pane_im_t1

0xb373,	// (0x0006907b) navi_pane_mp_g1_ParamLimits

0xb373,	// (0x0006907b) navi_pane_mp_g1

0xb387,	// (0x0006908f) navi_pane_mp_g2_ParamLimits

0xb387,	// (0x0006908f) navi_pane_mp_g2

0xb393,	// (0x0006909b) navi_pane_mp_g3_ParamLimits

0xb393,	// (0x0006909b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0006d0f4) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0006d0f4) navi_pane_mp_g

0xb39f,	// (0x000690a7) navi_pane_mp_t1

0xb3ad,	// (0x000690b5) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0006d0fb) navi_pane_mp_t

0xb3e9,	// (0x000690f1) navi_pane_vt_g1

0xb39f,	// (0x000690a7) navi_pane_vt_t1

0xb3f1,	// (0x000690f9) navi_slider_pane

0xb3f9,	// (0x00069101) zooming_pane

0xb401,	// (0x00069109) navi_slider_pane_g1

0x375d,	// (0x00061465) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0006d102) navi_slider_pane_g

0xb425,	// (0x0006912d) aid_levels_zoom

0xb42d,	// (0x00069135) zooming_pane_g1

0xb435,	// (0x0006913d) zooming_pane_g2

0xb435,	// (0x0006913d) zooming_pane_g3

0x0002,

0xf409,	// (0x0006d111) zooming_pane_g

0xb43d,	// (0x00069145) level_10_zoom

0xb446,	// (0x0006914e) level_11_zoom

0xb44f,	// (0x00069157) level_1_zoom

0xb458,	// (0x00069160) level_2_zoom

0xb461,	// (0x00069169) level_3_zoom

0xb46a,	// (0x00069172) level_4_zoom

0xb473,	// (0x0006917b) level_5_zoom

0xb47c,	// (0x00069184) level_6_zoom

0xb485,	// (0x0006918d) level_7_zoom

0xb48e,	// (0x00069196) level_8_zoom

0xb497,	// (0x0006919f) level_9_zoom

0xb4a8,	// (0x000691b0) popup_phob_thumbnail_window_g1

0xb4b0,	// (0x000691b8) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0006d118) popup_phob_thumbnail_window_g

0xc7bd,	// (0x0006a4c5) level_1_location

0xc7c5,	// (0x0006a4cd) level_2_location

0xc7cd,	// (0x0006a4d5) level_3_location

0xc7d5,	// (0x0006a4dd) level_4_location

0xb3f9,	// (0x00069101) level_5_location

0x376f,	// (0x00061477) mce_icon_pane_g1

0x3777,	// (0x0006147f) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0006d11d) mce_icon_pane_g

0x377f,	// (0x00061487) main_mup_pane_g1_ParamLimits

0x377f,	// (0x00061487) main_mup_pane_g1

0x3797,	// (0x0006149f) main_mup_pane_g2_ParamLimits

0x3797,	// (0x0006149f) main_mup_pane_g2

0x37b3,	// (0x000614bb) main_mup_pane_g3_ParamLimits

0x37b3,	// (0x000614bb) main_mup_pane_g3

0x37cf,	// (0x000614d7) main_mup_pane_g4_ParamLimits

0x37cf,	// (0x000614d7) main_mup_pane_g4

0x37eb,	// (0x000614f3) main_mup_pane_g5_ParamLimits

0x37eb,	// (0x000614f3) main_mup_pane_g5

0x380c,	// (0x00061514) main_mup_pane_g6_ParamLimits

0x380c,	// (0x00061514) main_mup_pane_g6

0x382c,	// (0x00061534) main_mup_pane_g7_ParamLimits

0x382c,	// (0x00061534) main_mup_pane_g7

0x3850,	// (0x00061558) main_mup_pane_g8_ParamLimits

0x3850,	// (0x00061558) main_mup_pane_g8

0x3874,	// (0x0006157c) main_mup_pane_g9_ParamLimits

0x3874,	// (0x0006157c) main_mup_pane_g9

0x3897,	// (0x0006159f) main_mup_pane_g10_ParamLimits

0x3897,	// (0x0006159f) main_mup_pane_g10

0x38ba,	// (0x000615c2) main_mup_pane_g11_ParamLimits

0x38ba,	// (0x000615c2) main_mup_pane_g11

0x38da,	// (0x000615e2) main_mup_pane_g12_ParamLimits

0x38da,	// (0x000615e2) main_mup_pane_g12

0x38e8,	// (0x000615f0) main_mup_pane_g13_ParamLimits

0x38e8,	// (0x000615f0) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0006d122) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0006d122) main_mup_pane_g

0x38fe,	// (0x00061606) main_mup_pane_t1_ParamLimits

0x38fe,	// (0x00061606) main_mup_pane_t1

0x391d,	// (0x00061625) main_mup_pane_t2_ParamLimits

0x391d,	// (0x00061625) main_mup_pane_t2

0x3937,	// (0x0006163f) main_mup_pane_t3_ParamLimits

0x3937,	// (0x0006163f) main_mup_pane_t3

0x3951,	// (0x00061659) main_mup_pane_t4_ParamLimits

0x3951,	// (0x00061659) main_mup_pane_t4

0x3963,	// (0x0006166b) main_mup_pane_t5_ParamLimits

0x3963,	// (0x0006166b) main_mup_pane_t5

0x3975,	// (0x0006167d) main_mup_pane_t6_ParamLimits

0x3975,	// (0x0006167d) main_mup_pane_t6

0x0005,

0xf435,	// (0x0006d13d) main_mup_pane_t_ParamLimits

0xf435,	// (0x0006d13d) main_mup_pane_t

0x398b,	// (0x00061693) mup_progress_pane_ParamLimits

0x398b,	// (0x00061693) mup_progress_pane

0x3997,	// (0x0006169f) mup_visualizer_pane_ParamLimits

0x3997,	// (0x0006169f) mup_visualizer_pane

0x39d5,	// (0x000616dd) mup_volume_pane_ParamLimits

0x39d5,	// (0x000616dd) mup_volume_pane

0xb14e,	// (0x00068e56) mup_visualizer_pane_g1_ParamLimits

0xb14e,	// (0x00068e56) mup_visualizer_pane_g1

0xb14e,	// (0x00068e56) mup_visualizer_pane_g2_ParamLimits

0xb14e,	// (0x00068e56) mup_visualizer_pane_g2

0xb32e,	// (0x00069036) mup_visualizer_pane_g3_ParamLimits

0xb32e,	// (0x00069036) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0006d14a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0006d14a) mup_visualizer_pane_g

0xa909,	// (0x00068611) mup_volume_pane_g1

0xb4c0,	// (0x000691c8) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0006d151) mup_volume_pane_g

0xa909,	// (0x00068611) mup_progress_pane_g1

0xb4c9,	// (0x000691d1) mup_progress_pane_g2

0xb4d2,	// (0x000691da) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0006d156) mup_progress_pane_g

0xa0d6,	// (0x00067dde) bg_popup_window_pane_cp05

0xb4db,	// (0x000691e3) heading_pane_cp02_ParamLimits

0xb4db,	// (0x000691e3) heading_pane_cp02

0xb4f7,	// (0x000691ff) list_popup_blid_pane

0xb4ff,	// (0x00069207) list_blid_sat_info_pane_ParamLimits

0xb4ff,	// (0x00069207) list_blid_sat_info_pane

0xb512,	// (0x0006921a) list_blid_sat_info_pane_g1

0xb51a,	// (0x00069222) list_blid_sat_info_pane_t1

0x3af4,	// (0x000617fc) mup_equalizer_pane_ParamLimits

0x3af4,	// (0x000617fc) mup_equalizer_pane

0x3b15,	// (0x0006181d) mup_equalizer_pane_cp1_ParamLimits

0x3b15,	// (0x0006181d) mup_equalizer_pane_cp1

0x3b36,	// (0x0006183e) mup_equalizer_pane_cp2_ParamLimits

0x3b36,	// (0x0006183e) mup_equalizer_pane_cp2

0x3b57,	// (0x0006185f) mup_equalizer_pane_cp3_ParamLimits

0x3b57,	// (0x0006185f) mup_equalizer_pane_cp3

0x3b7c,	// (0x00061884) mup_equalizer_pane_cp4_ParamLimits

0x3b7c,	// (0x00061884) mup_equalizer_pane_cp4

0x3ba1,	// (0x000618a9) mup_equalizer_pane_cp5

0x3bb9,	// (0x000618c1) mup_equalizer_pane_cp6

0x3bd1,	// (0x000618d9) mup_equalizer_pane_cp7

0xc6d7,	// (0x0006a3df) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x0006a3e7) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x0006a3ef) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7ef,	// (0x000684f7) mup_scale_pane

0xa909,	// (0x00068611) mup_scale_pane_g1

0xb528,	// (0x00069230) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0006d172) mup_scale_pane_g

0xb54c,	// (0x00069254) msg_data_pane

0xb554,	// (0x0006925c) scroll_pane_cp017

0x3bfb,	// (0x00061903) bg_list_pane_cp04_ParamLimits

0x3bfb,	// (0x00061903) bg_list_pane_cp04

0xb55c,	// (0x00069264) msg_data_pane_g1

0x3c23,	// (0x0006192b) msg_data_pane_g2

0x3c2d,	// (0x00061935) msg_data_pane_g3

0x3c37,	// (0x0006193f) msg_data_pane_g4

0x3c3f,	// (0x00061947) msg_data_pane_g5

0x3c47,	// (0x0006194f) msg_data_pane_g6

0x3c4f,	// (0x00061957) msg_data_pane_g7

0x0006,

0xf479,	// (0x0006d181) msg_data_pane_g

0x3c57,	// (0x0006195f) msg_text_pane_ParamLimits

0x3c57,	// (0x0006195f) msg_text_pane

0x3c7f,	// (0x00061987) qrid_highlight_pane_cp011_ParamLimits

0x3c7f,	// (0x00061987) qrid_highlight_pane_cp011

0xa0d6,	// (0x00067dde) msg_body_pane

0xa0d6,	// (0x00067dde) msg_header_pane

0xb56d,	// (0x00069275) input_focus_pane_cp07

0xb582,	// (0x0006928a) msg_header_pane_t1_ParamLimits

0xb582,	// (0x0006928a) msg_header_pane_t1

0xa301,	// (0x00068009) msg_header_pane_t2_ParamLimits

0xa301,	// (0x00068009) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0006d195) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0006d195) msg_header_pane_t

0xb594,	// (0x0006929c) msg_body_pane_g1

0x3ca3,	// (0x000619ab) msg_body_pane_t1_ParamLimits

0x3ca3,	// (0x000619ab) msg_body_pane_t1

0xa313,	// (0x0006801b) msg_body_pane_t2_ParamLimits

0xa313,	// (0x0006801b) msg_body_pane_t2

0xa325,	// (0x0006802d) msg_body_pane_t3_ParamLimits

0xa325,	// (0x0006802d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0006d19a) msg_body_pane_t_ParamLimits

0xf492,	// (0x0006d19a) msg_body_pane_t

0x3d26,	// (0x00061a2e) main_viewer_pane_g1_ParamLimits

0x3d26,	// (0x00061a2e) main_viewer_pane_g1

0x3d32,	// (0x00061a3a) main_viewer_pane_g2_ParamLimits

0x3d32,	// (0x00061a3a) main_viewer_pane_g2

0x3d3e,	// (0x00061a46) main_viewer_pane_g3_ParamLimits

0x3d3e,	// (0x00061a46) main_viewer_pane_g3

0x3d4f,	// (0x00061a57) main_viewer_pane_g4_ParamLimits

0x3d4f,	// (0x00061a57) main_viewer_pane_g4

0x3d60,	// (0x00061a68) main_viewer_pane_g5_ParamLimits

0x3d60,	// (0x00061a68) main_viewer_pane_g5

0x3d60,	// (0x00061a68) main_viewer_pane_g7_ParamLimits

0x3d60,	// (0x00061a68) main_viewer_pane_g7

0x3d72,	// (0x00061a7a) main_viewer_pane_g8_ParamLimits

0x3d72,	// (0x00061a7a) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0006d1aa) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0006d1aa) main_viewer_pane_g

0xb59c,	// (0x000692a4) viewer_content_pane_ParamLimits

0xb59c,	// (0x000692a4) viewer_content_pane

0x3daa,	// (0x00061ab2) main_postcard_pane_g1_ParamLimits

0x3daa,	// (0x00061ab2) main_postcard_pane_g1

0x3db8,	// (0x00061ac0) main_postcard_pane_g2_ParamLimits

0x3db8,	// (0x00061ac0) main_postcard_pane_g2

0x3dc6,	// (0x00061ace) main_postcard_pane_g3_ParamLimits

0x3dc6,	// (0x00061ace) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0006d1bb) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0006d1bb) main_postcard_pane_g

0x3dd6,	// (0x00061ade) main_postcard_pane_g4

0xc900,	// (0x0006a608) smil_status_volume_pane_g2

0x3e02,	// (0x00061b0a) postcard_pane_ParamLimits

0x3e02,	// (0x00061b0a) postcard_pane

0xb14e,	// (0x00068e56) postcard_pane_g1_ParamLimits

0xb14e,	// (0x00068e56) postcard_pane_g1

0x3e3c,	// (0x00061b44) postcard_pane_g2_ParamLimits

0x3e3c,	// (0x00061b44) postcard_pane_g2

0x3e48,	// (0x00061b50) postcard_pane_g3_ParamLimits

0x3e48,	// (0x00061b50) postcard_pane_g3

0xb5aa,	// (0x000692b2) postcard_pane_g4_ParamLimits

0xb5aa,	// (0x000692b2) postcard_pane_g4

0x3e54,	// (0x00061b5c) postcard_pane_g5_ParamLimits

0x3e54,	// (0x00061b5c) postcard_pane_g5

0x3e60,	// (0x00061b68) postcard_pane_g6_ParamLimits

0x3e60,	// (0x00061b68) postcard_pane_g6

0xb5b8,	// (0x000692c0) postcard_pane_g7_ParamLimits

0xb5b8,	// (0x000692c0) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0006d1c8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0006d1c8) postcard_pane_g

0x3e6e,	// (0x00061b76) main_mp2_pane_g1_ParamLimits

0x3e6e,	// (0x00061b76) main_mp2_pane_g1

0x3e7c,	// (0x00061b84) main_mp2_pane_g2_ParamLimits

0x3e7c,	// (0x00061b84) main_mp2_pane_g2

0x3e88,	// (0x00061b90) main_mp2_pane_g3_ParamLimits

0x3e88,	// (0x00061b90) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0006d1d7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0006d1d7) main_mp2_pane_g

0x3e94,	// (0x00061b9c) main_mp2_pane_t1_ParamLimits

0x3e94,	// (0x00061b9c) main_mp2_pane_t1

0x3eab,	// (0x00061bb3) main_mp2_pane_t2_ParamLimits

0x3eab,	// (0x00061bb3) main_mp2_pane_t2

0x3ebf,	// (0x00061bc7) main_mp2_pane_t3_ParamLimits

0x3ebf,	// (0x00061bc7) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0006d1de) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0006d1de) main_mp2_pane_t

0xb5c6,	// (0x000692ce) pec_content_pane_ParamLimits

0xb5c6,	// (0x000692ce) pec_content_pane

0xac2d,	// (0x00068935) scroll_pane_cp015

0xb5d8,	// (0x000692e0) pec_attribute_pane_ParamLimits

0xb5d8,	// (0x000692e0) pec_attribute_pane

0x3ed1,	// (0x00061bd9) pec_content_pane_g1_ParamLimits

0x3ed1,	// (0x00061bd9) pec_content_pane_g1

0xb5e8,	// (0x000692f0) pec_content_pane_t1_ParamLimits

0xb5e8,	// (0x000692f0) pec_content_pane_t1

0xb5fa,	// (0x00069302) pec_content_pane_t2_ParamLimits

0xb5fa,	// (0x00069302) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0006d1e5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0006d1e5) pec_content_pane_t

0x3edd,	// (0x00061be5) list_single_graphic_pane_cp01_ParamLimits

0x3edd,	// (0x00061be5) list_single_graphic_pane_cp01

0xa7ef,	// (0x000684f7) bg_popup_sub_pane_cp04

0xb60c,	// (0x00069314) popup_mup_playback_window_g1

0xb618,	// (0x00069320) popup_mup_playback_window_t1

0xb62d,	// (0x00069335) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0006d1ea) popup_mup_playback_window_t

0xb664,	// (0x0006936c) main_image_pane_g1_ParamLimits

0xb664,	// (0x0006936c) main_image_pane_g1

0xb6a7,	// (0x000693af) scroll_pane_cp018_ParamLimits

0xb6a7,	// (0x000693af) scroll_pane_cp018

0xb6bf,	// (0x000693c7) scroll_pane_cp016_ParamLimits

0xb6bf,	// (0x000693c7) scroll_pane_cp016

0x3f6b,	// (0x00061c73) smil2_image_pane_ParamLimits

0x3f6b,	// (0x00061c73) smil2_image_pane

0x3fa1,	// (0x00061ca9) smil2_root_pane_ParamLimits

0x3fa1,	// (0x00061ca9) smil2_root_pane

0x3fcd,	// (0x00061cd5) smil2_text_pane_ParamLimits

0x3fcd,	// (0x00061cd5) smil2_text_pane

0xa0d6,	// (0x00067dde) bg_list_pane_cp06

0xb6fb,	// (0x00069403) grid_radio_pane

0xa0d6,	// (0x00067dde) bg_popup_window_pane_cp06

0xb705,	// (0x0006940d) main_fmradio_pane_t1

0xb1ab,	// (0x00068eb3) heading_pane_cp04

0xb713,	// (0x0006941b) main_fmradio_pane_t2

0xc6ef,	// (0x0006a3f7) popup_cale_lunar_info_window_g1

0xb721,	// (0x00069429) main_fmradio_pane_t3

0xc6f7,	// (0x0006a3ff) popup_cale_lunar_info_window_g2

0xb731,	// (0x00069439) main_fmradio_pane_t4

0x0001,

0xb73f,	// (0x00069447) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0006d2c5) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0006d1ff) main_fmradio_pane_t

0xb74d,	// (0x00069455) wait_bar_pane_cp03

0xb755,	// (0x0006945d) cell_fmradio_pane_ParamLimits

0xb755,	// (0x0006945d) cell_fmradio_pane

0xb5b8,	// (0x000692c0) cell_fmradio_pane_g1_ParamLimits

0xb5b8,	// (0x000692c0) cell_fmradio_pane_g1

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp011

0xb76a,	// (0x00069472) poc_content_pane_ParamLimits

0xb76a,	// (0x00069472) poc_content_pane

0xb77c,	// (0x00069484) scroll_pane_cp019

0x400d,	// (0x00061d15) popup_call_poc_act_window_ParamLimits

0x400d,	// (0x00061d15) popup_call_poc_act_window

0x401a,	// (0x00061d22) popup_call_poc_inact_window_ParamLimits

0x401a,	// (0x00061d22) popup_call_poc_inact_window

0xf594,	// (0x0006d29c) bg_popup_call_poc_act_pane_g

0xc667,	// (0x0006a36f) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x0006a377) bg_popup_call_poc_inact_pane_g2

0xb784,	// (0x0006948c) popup_call_poc_act_window_g2

0xc677,	// (0x0006a37f) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x0006a387) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x0006a38f) bg_popup_call_poc_inact_pane_g5

0xb78c,	// (0x00069494) popup_call_poc_act_window_t1_ParamLimits

0xb78c,	// (0x00069494) popup_call_poc_act_window_t1

0xb7b4,	// (0x000694bc) popup_call_poc_act_window_t2_ParamLimits

0xb7b4,	// (0x000694bc) popup_call_poc_act_window_t2

0xb7dc,	// (0x000694e4) popup_call_poc_act_window_t3_ParamLimits

0xb7dc,	// (0x000694e4) popup_call_poc_act_window_t3

0xb804,	// (0x0006950c) popup_call_poc_act_window_t4_ParamLimits

0xb804,	// (0x0006950c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0006d20a) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0006d20a) popup_call_poc_act_window_t

0xc68f,	// (0x0006a397) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x0006a39f) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x0006a3a7) bg_popup_call_poc_inact_pane_g8

0xb816,	// (0x0006951e) popup_call_poc_inact_window_g2

0xc6a7,	// (0x0006a3af) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0006d289) bg_popup_call_poc_inact_pane_g

0xb81e,	// (0x00069526) popup_call_poc_inact_window_t1_ParamLimits

0xb81e,	// (0x00069526) popup_call_poc_inact_window_t1

0xb833,	// (0x0006953b) popup_call_poc_inact_window_t2_ParamLimits

0xb833,	// (0x0006953b) popup_call_poc_inact_window_t2

0xb848,	// (0x00069550) popup_call_poc_inact_window_t3_ParamLimits

0xb848,	// (0x00069550) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0006d213) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0006d213) popup_call_poc_inact_window_t

0xc873,	// (0x0006a57b) context_pane_ParamLimits

0x4629,	// (0x00062331) signal_pane_ParamLimits

0xb3f9,	// (0x00069101) main_call2_pane

0xc861,	// (0x0006a569) popup_phob_thumbnail2_window_ParamLimits

0xc861,	// (0x0006a569) popup_phob_thumbnail2_window

0x3cd4,	// (0x000619dc) aid_hotspot_pointer_arrow_pane

0x3cdc,	// (0x000619e4) aid_hotspot_pointer_hand_pane

0x433f,	// (0x00062047) phob_pre_status_pane_g5

0x1ca8,	// (0x0005f9b0) cams_zoom_pane_ParamLimits

0x1cb4,	// (0x0005f9bc) image_vga_pane_ParamLimits

0x1cc3,	// (0x0005f9cb) main_camera_pane_g1_ParamLimits

0x1cd1,	// (0x0005f9d9) main_camera_pane_g2_ParamLimits

0x1cdd,	// (0x0005f9e5) main_camera_pane_g3_ParamLimits

0x1ceb,	// (0x0005f9f3) main_camera_pane_g4_ParamLimits

0x1cf9,	// (0x0005fa01) main_camera_pane_g5_ParamLimits

0x1d07,	// (0x0005fa0f) main_camera_pane_g6_ParamLimits

0x1d15,	// (0x0005fa1d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006cf12) main_camera_pane_g_ParamLimits

0x1d23,	// (0x0005fa2b) main_camera_pane_t1_ParamLimits

0x1d35,	// (0x0005fa3d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006cf23) main_camera_pane_t_ParamLimits

0xa7ef,	// (0x000684f7) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7ef,	// (0x000684f7) bg_popup_preview_window_pane_cp01

0xb85d,	// (0x00069565) popup_phob_thumbnail2_window_g1_ParamLimits

0xb85d,	// (0x00069565) popup_phob_thumbnail2_window_g1

0xa0d6,	// (0x00067dde) call2_cli_visual_pane

0x4036,	// (0x00061d3e) popup_call2_audio_conf_window_ParamLimits

0x4036,	// (0x00061d3e) popup_call2_audio_conf_window

0x404f,	// (0x00061d57) popup_call2_audio_first_window_ParamLimits

0x404f,	// (0x00061d57) popup_call2_audio_first_window

0x40ed,	// (0x00061df5) popup_call2_audio_in_window_ParamLimits

0x40ed,	// (0x00061df5) popup_call2_audio_in_window

0x4131,	// (0x00061e39) popup_call2_audio_out_window_ParamLimits

0x4131,	// (0x00061e39) popup_call2_audio_out_window

0x419b,	// (0x00061ea3) popup_call2_audio_second_window_ParamLimits

0x419b,	// (0x00061ea3) popup_call2_audio_second_window

0x41f9,	// (0x00061f01) popup_call2_audio_wait_window_ParamLimits

0x41f9,	// (0x00061f01) popup_call2_audio_wait_window

0xa0d6,	// (0x00067dde) bg_popup_call2_act_pane_cp03

0xa7d1,	// (0x000684d9) list_conf_pane_cp

0xb869,	// (0x00069571) popup_call2_audio_conf_window_t1

0xb877,	// (0x0006957f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb877,	// (0x0006957f) list_single_graphic_popup_conf2_pane

0xb21a,	// (0x00068f22) list_highlight_pane_cp04

0xb88a,	// (0x00069592) list_single_graphic_popup_conf2_pane_g1

0xb22b,	// (0x00068f33) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0006d21a) list_single_graphic_popup_conf2_pane_g

0xb894,	// (0x0006959c) list_single_graphic_popup_conf2_pane_t1

0xb8a2,	// (0x000695aa) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8a2,	// (0x000695aa) bg_popup_call2_act_pane_cp01

0xb92c,	// (0x00069634) call_type_pane_cp05_ParamLimits

0xb92c,	// (0x00069634) call_type_pane_cp05

0xb980,	// (0x00069688) popup_call2_audio_second_window_g1_ParamLimits

0xb980,	// (0x00069688) popup_call2_audio_second_window_g1

0xb9d4,	// (0x000696dc) popup_call2_audio_second_window_g2_ParamLimits

0xb9d4,	// (0x000696dc) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0006d21f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0006d21f) popup_call2_audio_second_window_g

0xba39,	// (0x00069741) popup_call2_audio_second_window_t1_ParamLimits

0xba39,	// (0x00069741) popup_call2_audio_second_window_t1

0xbaf4,	// (0x000697fc) popup_call2_audio_second_window_t2_ParamLimits

0xbaf4,	// (0x000697fc) popup_call2_audio_second_window_t2

0xbb47,	// (0x0006984f) popup_call2_audio_second_window_t3_ParamLimits

0xbb47,	// (0x0006984f) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0006d226) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0006d226) popup_call2_audio_second_window_t

0xa0d6,	// (0x00067dde) bg_popup_call2_in_pane_cp02

0xa0e0,	// (0x00067de8) call_type_pane_cp04

0xa0e8,	// (0x00067df0) popup_call2_audio_wait_window_g1

0xa0f0,	// (0x00067df8) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006cdfd) popup_call2_audio_wait_window_g

0xa0f8,	// (0x00067e00) popup_call2_audio_wait_window_t3

0xbc3a,	// (0x00069942) bg_popup_call2_act_pane_ParamLimits

0xbc3a,	// (0x00069942) bg_popup_call2_act_pane

0xbcfa,	// (0x00069a02) call_type_pane_cp03_ParamLimits

0xbcfa,	// (0x00069a02) call_type_pane_cp03

0xbd5e,	// (0x00069a66) popup_call2_audio_first_window_g1_ParamLimits

0xbd5e,	// (0x00069a66) popup_call2_audio_first_window_g1

0xbdce,	// (0x00069ad6) popup_call2_audio_first_window_g2_ParamLimits

0xbdce,	// (0x00069ad6) popup_call2_audio_first_window_g2

0xb14e,	// (0x00068e56) popup_call2_audio_first_window_g3_ParamLimits

0xb14e,	// (0x00068e56) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0006d22f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0006d22f) popup_call2_audio_first_window_g

0xbeac,	// (0x00069bb4) popup_call2_audio_first_window_t1_ParamLimits

0xbeac,	// (0x00069bb4) popup_call2_audio_first_window_t1

0xbfaf,	// (0x00069cb7) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x00069cb7) popup_call2_audio_first_window_t4

0xc092,	// (0x00069d9a) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x00069d9a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0006d23a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0006d23a) popup_call2_audio_first_window_t

0xa7e7,	// (0x000684ef) bg_popup_call2_act_pane_g1

0xc701,	// (0x0006a409) popup_cale_lunar_info_window_t1

0xc70f,	// (0x0006a417) popup_cale_lunar_info_window_t2

0xc71d,	// (0x0006a425) popup_cale_lunar_info_window_t3

0xa0d6,	// (0x00067dde) bg_popup_call2_bubble_pane

0xc193,	// (0x00069e9b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x00069e9b) bg_popup_call2_in_pane_cp01

0x9db2,	// (0x00067aba) call_type_pane_cp02

0xc1db,	// (0x00069ee3) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x00069ee3) popup_call2_audio_out_window_g1

0xc207,	// (0x00069f0f) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x00069f0f) popup_call2_audio_out_window_g2

0xc22f,	// (0x00069f37) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x00069f37) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0006d243) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0006d243) popup_call2_audio_out_window_g

0xc26a,	// (0x00069f72) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x00069f72) popup_call2_audio_out_window_t1

0xc2c9,	// (0x00069fd1) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x00069fd1) popup_call2_audio_out_window_t2

0xc31d,	// (0x0006a025) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x0006a025) popup_call2_audio_out_window_t3

0xc333,	// (0x0006a03b) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x0006a03b) popup_call2_audio_out_window_t4

0xc349,	// (0x0006a051) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x0006a051) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0006d24c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0006d24c) popup_call2_audio_out_window_t

0xc3ad,	// (0x0006a0b5) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x0006a0b5) bg_popup_call2_in_pane

0xc409,	// (0x0006a111) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x0006a111) popup_call2_audio_in_window_g1

0xc441,	// (0x0006a149) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x0006a149) popup_call2_audio_in_window_g2

0xc479,	// (0x0006a181) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x0006a181) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0006d259) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0006d259) popup_call2_audio_in_window_g

0xc4d1,	// (0x0006a1d9) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x0006a1d9) popup_call2_audio_in_window_t1

0xc551,	// (0x0006a259) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x0006a259) popup_call2_audio_in_window_t2

0xc5d1,	// (0x0006a2d9) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x0006a2d9) popup_call2_audio_in_window_t3

0xc5eb,	// (0x0006a2f3) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x0006a2f3) popup_call2_audio_in_window_t4

0xc5fd,	// (0x0006a305) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x0006a305) popup_call2_audio_in_window_t5

0xc612,	// (0x0006a31a) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x0006a31a) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0006d262) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0006d262) popup_call2_audio_in_window_t

0xa7e7,	// (0x000684ef) bg_popup_call2_in_pane_g1

0xc72b,	// (0x0006a433) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0006d2ca) popup_cale_lunar_info_window_t

0xa7ef,	// (0x000684f7) bg_popup_call2_rect_pane_ParamLimits

0xa7ef,	// (0x000684f7) bg_popup_call2_rect_pane

0xa0d6,	// (0x00067dde) call2_cli_visual_graphic_pane

0xa0d6,	// (0x00067dde) call2_cli_visual_text_pane

0x46c1,	// (0x000623c9) smil_status_volume_pane_g3

0x0002,

0xa909,	// (0x00068611) call2_cli_visual_graphic_pane_g1

0xa909,	// (0x00068611) call2_cli_visual_graphic_pane_g2

0xa909,	// (0x00068611) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0006d26f) call2_cli_visual_graphic_pane_g

0xc627,	// (0x0006a32f) bg_popup_call2_rect_pane_g1

0xa9a7,	// (0x000686af) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x0006a337) bg_popup_call2_rect_pane_g3

0xc637,	// (0x0006a33f) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x0006a347) bg_popup_call2_rect_pane_g5

0xc647,	// (0x0006a34f) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x0006a357) bg_popup_call2_rect_pane_g7

0xc657,	// (0x0006a35f) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x0006a367) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0006d276) bg_popup_call2_rect_pane_g

0xc667,	// (0x0006a36f) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x0006a377) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x0006a37f) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x0006a387) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x0006a38f) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x0006a397) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x0006a39f) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x0006a3a7) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x0006a3af) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0006d289) bg_popup_call2_bubble_pane_g

0x13f6,	// (0x0005f0fe) aid_cale_week_size_cell_pane

0x1d49,	// (0x0005fa51) aid_cams_cif_uncrop_pane_ParamLimits

0x1d49,	// (0x0005fa51) aid_cams_cif_uncrop_pane

0x1ea6,	// (0x0005fbae) aid_cams_size_cell_ParamLimits

0x1ea6,	// (0x0005fbae) aid_cams_size_cell

0x1eb2,	// (0x0005fbba) grid_cams_pane_ParamLimits

0x1ec0,	// (0x0005fbc8) linegrid_cams_pane_ParamLimits

0x2090,	// (0x0005fd98) call_video_pane_t1

0x20ad,	// (0x0005fdb5) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006cf76) call_video_pane_t

0x2579,	// (0x00060281) aid_cale_month_size_cell_pane_ParamLimits

0x2579,	// (0x00060281) aid_cale_month_size_cell_pane

0xf60b,	// (0x0006d313) smil_status_volume_pane_g

0x46ce,	// (0x000623d6) volume_smil_pane_ParamLimits

0x9c7c,	// (0x00067984) aid_popup2_width_pane

0x12ea,	// (0x0005eff2) cell_qdial_pane_g4_ParamLimits

0x12ea,	// (0x0005eff2) cell_qdial_pane_g4

0x35aa,	// (0x000612b2) aid_blid_cardinal_pane_ParamLimits

0x35ba,	// (0x000612c2) aid_blid_destination_pane_ParamLimits

0x35ba,	// (0x000612c2) aid_blid_destination_pane

0xa7ef,	// (0x000684f7) bg_popup_call_poc_act_pane_ParamLimits

0xa7ef,	// (0x000684f7) bg_popup_call_poc_act_pane

0xa7ef,	// (0x000684f7) bg_popup_call_poc_inact_pane_ParamLimits

0xa7ef,	// (0x000684f7) bg_popup_call_poc_inact_pane

0xc6af,	// (0x0006a3b7) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x0006a3bf) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x0006a3c7) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x0006a387) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x0006a38f) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x0006a3cf) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x0006a39f) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x0006a3d7) bg_popup_call_poc_act_pane_g8

0xa0d6,	// (0x00067dde) main_usb_pane

0xc838,	// (0x0006a540) popup_cale_lunar_info_window

0x23c5,	// (0x000600cd) im_reading_pane_t1_ParamLimits

0xab85,	// (0x0006888d) list_im_pane_ParamLimits

0xab96,	// (0x0006889e) scroll_pane_cp07_ParamLimits

0xa0d6,	// (0x00067dde) grid_highlight_pane_cp012

0xa7ef,	// (0x000684f7) mup_scale_pane_ParamLimits

0xb14e,	// (0x00068e56) main_usb_pane_g1_ParamLimits

0xb14e,	// (0x00068e56) main_usb_pane_g1

0x4262,	// (0x00061f6a) main_usb_pane_g2_ParamLimits

0x4262,	// (0x00061f6a) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0006d2b3) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0006d2b3) main_usb_pane_g

0x426e,	// (0x00061f76) main_usb_pane_t1_ParamLimits

0x426e,	// (0x00061f76) main_usb_pane_t1

0x4280,	// (0x00061f88) main_usb_pane_t2_ParamLimits

0x4280,	// (0x00061f88) main_usb_pane_t2

0x4292,	// (0x00061f9a) main_usb_pane_t3_ParamLimits

0x4292,	// (0x00061f9a) main_usb_pane_t3

0x42a4,	// (0x00061fac) main_usb_pane_t4_ParamLimits

0x42a4,	// (0x00061fac) main_usb_pane_t4

0x42b6,	// (0x00061fbe) main_usb_pane_t5_ParamLimits

0x42b6,	// (0x00061fbe) main_usb_pane_t5

0x42c8,	// (0x00061fd0) main_usb_pane_t6_ParamLimits

0x42c8,	// (0x00061fd0) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0006d2b8) main_usb_pane_t_ParamLimits

0x3549,	// (0x00061251) aid_text_placing

0x3554,	// (0x0006125c) main_location2_pane_t1_ParamLimits

0x356a,	// (0x00061272) main_location2_pane_t2_ParamLimits

0x3580,	// (0x00061288) main_location2_pane_t3_ParamLimits

0x3596,	// (0x0006129e) main_location2_pane_t4_ParamLimits

0x3596,	// (0x0006129e) main_location2_pane_t4

0xf3cf,	// (0x0006d0d7) main_location2_pane_t_ParamLimits

0xa82b,	// (0x00068533) find_pinb_pane_g2_ParamLimits

0xa82b,	// (0x00068533) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0006ce23) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0006ce23) find_pinb_pane_g

0xa837,	// (0x0006853f) find_pinb_pane_t1_ParamLimits

0xa849,	// (0x00068551) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0006ce28) find_pinb_pane_t_ParamLimits

0xa0d6,	// (0x00067dde) main_call3_pane

0x2af8,	// (0x00060800) cale_month_day_heading_pane_t1_ParamLimits

0x2b7a,	// (0x00060882) cale_month_day_heading_pane_t2_ParamLimits

0x2c07,	// (0x0006090f) cale_month_day_heading_pane_t3_ParamLimits

0x2c94,	// (0x0006099c) cale_month_day_heading_pane_t4_ParamLimits

0x2d21,	// (0x00060a29) cale_month_day_heading_pane_t5_ParamLimits

0x2db6,	// (0x00060abe) cale_month_day_heading_pane_t6_ParamLimits

0x2e53,	// (0x00060b5b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006cfae) cale_month_day_heading_pane_t_ParamLimits

0x3129,	// (0x00060e31) smil_status_volume_pane

0x3e20,	// (0x00061b28) postcard_address_pane_ParamLimits

0x3e20,	// (0x00061b28) postcard_address_pane

0x3e2e,	// (0x00061b36) postcard_message_pane_ParamLimits

0x3e2e,	// (0x00061b36) postcard_message_pane

0x4238,	// (0x00061f40) call2_cli_visual_pane_t1_ParamLimits

0x4238,	// (0x00061f40) call2_cli_visual_pane_t1

0x482d,	// (0x00062535) postcard_message_pane_t1_ParamLimits

0x482d,	// (0x00062535) postcard_message_pane_t1

0x4816,	// (0x0006251e) postcard_address_pane_t1_ParamLimits

0x4816,	// (0x0006251e) postcard_address_pane_t1

0x4807,	// (0x0006250f) popup_call3_audio_in_window_ParamLimits

0x4807,	// (0x0006250f) popup_call3_audio_in_window

0x46e5,	// (0x000623ed) bg_popup_call3_in_pane_ParamLimits

0x46e5,	// (0x000623ed) bg_popup_call3_in_pane

0x474d,	// (0x00062455) popup_call3_audio_in_window_g1_ParamLimits

0x474d,	// (0x00062455) popup_call3_audio_in_window_g1

0x4765,	// (0x0006246d) popup_call3_audio_in_window_g2_ParamLimits

0x4765,	// (0x0006246d) popup_call3_audio_in_window_g2

0x477d,	// (0x00062485) popup_call3_audio_in_window_g3_ParamLimits

0x477d,	// (0x00062485) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0006d31a) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0006d31a) popup_call3_audio_in_window_g

0x47a5,	// (0x000624ad) popup_call3_audio_in_window_t1_ParamLimits

0x47a5,	// (0x000624ad) popup_call3_audio_in_window_t1

0x47cd,	// (0x000624d5) popup_call3_audio_in_window_t2_ParamLimits

0x47cd,	// (0x000624d5) popup_call3_audio_in_window_t2

0x47f5,	// (0x000624fd) popup_call3_audio_in_window_t3_ParamLimits

0x47f5,	// (0x000624fd) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0006d323) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0006d323) popup_call3_audio_in_window_t

0xb3f9,	// (0x00069101) bg_popup_call3_rect_pane

0xc627,	// (0x0006a32f) bg_popup_call3_rect_pane_g1

0xa9a7,	// (0x000686af) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x0006a337) bg_popup_call3_rect_pane_g3

0xc637,	// (0x0006a33f) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x0006a347) bg_popup_call3_rect_pane_g5

0xc647,	// (0x0006a34f) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x0006a357) bg_popup_call3_rect_pane_g7

0x39f0,	// (0x000616f8) mup_visualizer_osc_pane

0xb4b8,	// (0x000691c0) mup_visualizer_spec_pane

0x4705,	// (0x0006240d) call3_video_qcif_pane_ParamLimits

0x4705,	// (0x0006240d) call3_video_qcif_pane

0x4717,	// (0x0006241f) call3_video_qcif_uncrop_pane_ParamLimits

0x4717,	// (0x0006241f) call3_video_qcif_uncrop_pane

0x4727,	// (0x0006242f) call3_video_subqcif_pane_ParamLimits

0x4727,	// (0x0006242f) call3_video_subqcif_pane

0x473b,	// (0x00062443) call3_video_subqcif_uncrop_pane_ParamLimits

0x473b,	// (0x00062443) call3_video_subqcif_uncrop_pane

0x4795,	// (0x0006249d) popup_call3_audio_in_window_g4_ParamLimits

0x4795,	// (0x0006249d) popup_call3_audio_in_window_g4

0x46b0,	// (0x000623b8) mup_spec_half_pane

0x46b9,	// (0x000623c1) mup_spec_half_pane_cp

0xc8d3,	// (0x0006a5db) mup_osc_middle_pane

0xc8dc,	// (0x0006a5e4) mup_visualizer_osc_pane_g1

0x4690,	// (0x00062398) mup_spec_bar_pane_ParamLimits

0x4690,	// (0x00062398) mup_spec_bar_pane

0xc8c0,	// (0x0006a5c8) mup_spec_bar_pane_g1

0xc8ca,	// (0x0006a5d2) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0006d30e) mup_spec_bar_pane_g

0x13f6,	// (0x0005f0fe) aid_cale_week_size_cell_pane_ParamLimits

0x1410,	// (0x0005f118) bg_cale_heading_pane_ParamLimits

0xa9db,	// (0x000686e3) bg_cale_pane_cp01_ParamLimits

0x1439,	// (0x0005f141) cale_week_corner_pane_ParamLimits

0x1458,	// (0x0005f160) cale_week_day_heading_pane_ParamLimits

0x1486,	// (0x0005f18e) cale_week_scroll_pane_g1_ParamLimits

0x14aa,	// (0x0005f1b2) cale_week_scroll_pane_g2_ParamLimits

0x14c2,	// (0x0005f1ca) cale_week_scroll_pane_g3_ParamLimits

0x14da,	// (0x0005f1e2) cale_week_scroll_pane_g4_ParamLimits

0x14f2,	// (0x0005f1fa) cale_week_scroll_pane_g5_ParamLimits

0x150a,	// (0x0005f212) cale_week_scroll_pane_g6_ParamLimits

0x152a,	// (0x0005f232) cale_week_scroll_pane_g7_ParamLimits

0x154a,	// (0x0005f252) cale_week_scroll_pane_g8_ParamLimits

0x156a,	// (0x0005f272) cale_week_scroll_pane_g9_ParamLimits

0x1587,	// (0x0005f28f) cale_week_scroll_pane_g10_ParamLimits

0x15a4,	// (0x0005f2ac) cale_week_scroll_pane_g11_ParamLimits

0x15c1,	// (0x0005f2c9) cale_week_scroll_pane_g12_ParamLimits

0x15de,	// (0x0005f2e6) cale_week_scroll_pane_g13_ParamLimits

0x1603,	// (0x0005f30b) cale_week_scroll_pane_g14_ParamLimits

0x162c,	// (0x0005f334) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006ceb4) cale_week_scroll_pane_g_ParamLimits

0x1675,	// (0x0005f37d) cale_week_time_pane_ParamLimits

0x1695,	// (0x0005f39d) grid_cale_week_pane_ParamLimits

0xa9f9,	// (0x00068701) listscroll_cale_week_pane_t1

0xaa0b,	// (0x00068713) scroll_pane_cp08_ParamLimits

0x25e6,	// (0x000602ee) cale_month_corner_pane_ParamLimits

0xadb6,	// (0x00068abe) cale_month_pane_t1

0x2a8a,	// (0x00060792) cale_month_week_pane_ParamLimits

0xb14e,	// (0x00068e56) popup_call_status_window_g1_ParamLimits

0x3352,	// (0x0006105a) popup_call_status_window_g2_ParamLimits

0x335e,	// (0x00061066) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006d05e) popup_call_status_window_g_ParamLimits

0xb19b,	// (0x00068ea3) aid_call2_pane

0x3c95,	// (0x0006199d) msg_header_pane_g1

0x3e20,	// (0x00061b28) postcard_address2_pane_ParamLimits

0x3e20,	// (0x00061b28) postcard_address2_pane

0x3e2e,	// (0x00061b36) postcard_message2_pane_ParamLimits

0x3e2e,	// (0x00061b36) postcard_message2_pane

0x4637,	// (0x0006233f) message2_row_pane_ParamLimits

0x4637,	// (0x0006233f) message2_row_pane

0x4651,	// (0x00062359) address2_row_pane_ParamLimits

0x4651,	// (0x00062359) address2_row_pane

0xc88e,	// (0x0006a596) postcard_message2_row_pane_g1

0xc896,	// (0x0006a59e) postcard_message2_row_pane_t1

0xc88e,	// (0x0006a596) address2_row_pane_g1

0xc896,	// (0x0006a59e) address2_row_pane_t1

0x1bfd,	// (0x0005f905) aid_size_cell_vorec

0xa0d6,	// (0x00067dde) main_rss_pane

0x4664,	// (0x0006236c) rss_list_single_pane_ParamLimits

0x4664,	// (0x0006236c) rss_list_single_pane

0xc8a4,	// (0x0006a5ac) rss_list_single_pane_t1

0xc8b2,	// (0x0006a5ba) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0006d309) rss_list_single_pane_t

0xa0d6,	// (0x00067dde) main_camera2_pane

0xa0d6,	// (0x00067dde) main_video2_pane

0x4891,	// (0x00062599) cams_zoom_pane_cp2_ParamLimits

0x4891,	// (0x00062599) cams_zoom_pane_cp2

0x489d,	// (0x000625a5) image2_vga_pane_ParamLimits

0x489d,	// (0x000625a5) image2_vga_pane

0x48ac,	// (0x000625b4) main_camera2_pane_g1_ParamLimits

0x48ac,	// (0x000625b4) main_camera2_pane_g1

0x48b8,	// (0x000625c0) main_camera2_pane_g2_ParamLimits

0x48b8,	// (0x000625c0) main_camera2_pane_g2

0x48c4,	// (0x000625cc) main_camera2_pane_g3_ParamLimits

0x48c4,	// (0x000625cc) main_camera2_pane_g3

0x48d0,	// (0x000625d8) main_camera2_pane_g4_ParamLimits

0x48d0,	// (0x000625d8) main_camera2_pane_g4

0x48dc,	// (0x000625e4) main_camera2_pane_g5_ParamLimits

0x48dc,	// (0x000625e4) main_camera2_pane_g5

0x48e8,	// (0x000625f0) main_camera2_pane_g6_ParamLimits

0x48e8,	// (0x000625f0) main_camera2_pane_g6

0x48f4,	// (0x000625fc) main_camera2_pane_g7_ParamLimits

0x48f4,	// (0x000625fc) main_camera2_pane_g7

0x4900,	// (0x00062608) main_camera2_pane_g8_ParamLimits

0x4900,	// (0x00062608) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0006d32a) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0006d32a) main_camera2_pane_g

0x4918,	// (0x00062620) main_camera2_pane_t1_ParamLimits

0x4918,	// (0x00062620) main_camera2_pane_t1

0x492a,	// (0x00062632) main_camera2_pane_t2_ParamLimits

0x492a,	// (0x00062632) main_camera2_pane_t2

0x493c,	// (0x00062644) main_camera2_pane_t3_ParamLimits

0x493c,	// (0x00062644) main_camera2_pane_t3

0x494e,	// (0x00062656) main_camera2_pane_t4_ParamLimits

0x494e,	// (0x00062656) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0006d33d) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0006d33d) main_camera2_pane_t

0x49ab,	// (0x000626b3) cams_zoom_pane_cp4_ParamLimits

0x49ab,	// (0x000626b3) cams_zoom_pane_cp4

0x49bb,	// (0x000626c3) image2_cif_pane_ParamLimits

0x49bb,	// (0x000626c3) image2_cif_pane

0x49d0,	// (0x000626d8) image2_subqcif_pane_ParamLimits

0x49d0,	// (0x000626d8) image2_subqcif_pane

0x49df,	// (0x000626e7) main_video2_pane_g1_ParamLimits

0x49df,	// (0x000626e7) main_video2_pane_g1

0x49f1,	// (0x000626f9) main_video2_pane_g2_ParamLimits

0x49f1,	// (0x000626f9) main_video2_pane_g2

0x4a01,	// (0x00062709) main_video2_pane_g3_ParamLimits

0x4a01,	// (0x00062709) main_video2_pane_g3

0x4a11,	// (0x00062719) main_video2_pane_g4_ParamLimits

0x4a11,	// (0x00062719) main_video2_pane_g4

0x4a21,	// (0x00062729) main_video2_pane_g5_ParamLimits

0x4a21,	// (0x00062729) main_video2_pane_g5

0x4a31,	// (0x00062739) main_video2_pane_g6_ParamLimits

0x4a31,	// (0x00062739) main_video2_pane_g6

0x0005,

0xf644,	// (0x0006d34c) main_video2_pane_g_ParamLimits

0xf644,	// (0x0006d34c) main_video2_pane_g

0x4a43,	// (0x0006274b) main_video2_pane_t1_ParamLimits

0x4a43,	// (0x0006274b) main_video2_pane_t1

0x4a5d,	// (0x00062765) main_video2_pane_t2_ParamLimits

0x4a5d,	// (0x00062765) main_video2_pane_t2

0x4a83,	// (0x0006278b) main_video2_pane_t3_ParamLimits

0x4a83,	// (0x0006278b) main_video2_pane_t3

0x0002,

0xf651,	// (0x0006d359) main_video2_pane_t_ParamLimits

0xf651,	// (0x0006d359) main_video2_pane_t

0x437f,	// (0x00062087) call_muted_g2

0x0001,

0xf5f3,	// (0x0006d2fb) call_muted_g

0xa0d6,	// (0x00067dde) main_mup2_pane

0xc913,	// (0x0006a61b) main_mup2_pane_g1_ParamLimits

0xc913,	// (0x0006a61b) main_mup2_pane_g1

0x4aa9,	// (0x000627b1) main_mup2_pane_g2_ParamLimits

0x4aa9,	// (0x000627b1) main_mup2_pane_g2

0x4d3b,	// (0x00062a43) main_mup_pane_g13_cp1

0x4d43,	// (0x00062a4b) mup_volume_pane_cp1

0x4acb,	// (0x000627d3) main_mup2_pane_g4_ParamLimits

0x4acb,	// (0x000627d3) main_mup2_pane_g4

0x4ae0,	// (0x000627e8) main_mup2_pane_g5_ParamLimits

0x4ae0,	// (0x000627e8) main_mup2_pane_g5

0x4af5,	// (0x000627fd) main_mup2_pane_g6_ParamLimits

0x4af5,	// (0x000627fd) main_mup2_pane_g6

0x4b0a,	// (0x00062812) main_mup2_pane_g7_ParamLimits

0x4b0a,	// (0x00062812) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0006d360) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0006d360) main_mup2_pane_g

0x4b26,	// (0x0006282e) main_mup2_pane_t1_ParamLimits

0x4b26,	// (0x0006282e) main_mup2_pane_t1

0x4b3d,	// (0x00062845) main_mup2_pane_t2_ParamLimits

0x4b3d,	// (0x00062845) main_mup2_pane_t2

0x4b54,	// (0x0006285c) main_mup2_pane_t3_ParamLimits

0x4b54,	// (0x0006285c) main_mup2_pane_t3

0x4b6b,	// (0x00062873) main_mup2_pane_t4_ParamLimits

0x4b6b,	// (0x00062873) main_mup2_pane_t4

0x4b85,	// (0x0006288d) main_mup2_pane_t5_ParamLimits

0x4b85,	// (0x0006288d) main_mup2_pane_t5

0x4b9f,	// (0x000628a7) main_mup2_pane_t6_ParamLimits

0x4b9f,	// (0x000628a7) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0006d36f) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0006d36f) main_mup2_pane_t

0x4bd7,	// (0x000628df) mup2_visualizer_pane_ParamLimits

0x4bd7,	// (0x000628df) mup2_visualizer_pane

0x4c0d,	// (0x00062915) mup_progress_pane_cp_ParamLimits

0x4c0d,	// (0x00062915) mup_progress_pane_cp

0x4d26,	// (0x00062a2e) mup_volume_pane_cp_ParamLimits

0x4d26,	// (0x00062a2e) mup_volume_pane_cp

0x4c26,	// (0x0006292e) mup2_visualizer_pane_g1_ParamLimits

0x4c26,	// (0x0006292e) mup2_visualizer_pane_g1

0xc91f,	// (0x0006a627) mup2_visualizer_pane_g2_ParamLimits

0xc91f,	// (0x0006a627) mup2_visualizer_pane_g2

0x4c3b,	// (0x00062943) mup2_visualizer_pane_g3_ParamLimits

0x4c3b,	// (0x00062943) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0006d37c) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0006d37c) mup2_visualizer_pane_g

0xb6f3,	// (0x000693fb) aid_size_cell_fmradio

0x4495,	// (0x0006219d) aid_height_parent_landcape

0xac14,	// (0x0006891c) wml_content_pane_cp

0xac1c,	// (0x00068924) wml_tabs_pane

0xac25,	// (0x0006892d) popup_wml_miniature_window

0xac2d,	// (0x00068935) scroll_pane_cp021

0xac41,	// (0x00068949) wml_content_pane_comp8

0xa0d6,	// (0x00067dde) bg_popup_sub_pane_cp05

0xc93d,	// (0x0006a645) popup_wml_miniature_window_g1

0xc945,	// (0x0006a64d) wml_miniature_view_pane

0x4c49,	// (0x00062951) aid_size_wml_view

0x4c51,	// (0x00062959) wml_miniature_view_pane_g1

0x4c5a,	// (0x00062962) wml_miniature_view_pane_g2

0x4c63,	// (0x0006296b) wml_miniature_view_pane_g3

0x4c6b,	// (0x00062973) wml_miniature_view_pane_g4

0x4c73,	// (0x0006297b) wml_miniature_view_pane_g5

0x4c7b,	// (0x00062983) wml_miniature_view_pane_g6

0x4c83,	// (0x0006298b) wml_miniature_view_pane_g7

0x4c8b,	// (0x00062993) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0006d383) wml_miniature_view_pane_g

0xc913,	// (0x0006a61b) background_graphic_ParamLimits

0xc913,	// (0x0006a61b) background_graphic

0xc94d,	// (0x0006a655) wml_tabs_2_pane

0xc956,	// (0x0006a65e) wml_tabs_3_pane_ParamLimits

0xc956,	// (0x0006a65e) wml_tabs_3_pane

0xc968,	// (0x0006a670) wml_tabs_4_pane_ParamLimits

0xc968,	// (0x0006a670) wml_tabs_4_pane

0xc97e,	// (0x0006a686) wml_tabs_5_pane_ParamLimits

0xc97e,	// (0x0006a686) wml_tabs_5_pane

0xc998,	// (0x0006a6a0) wml_tabs_pane_g2_ParamLimits

0xc998,	// (0x0006a6a0) wml_tabs_pane_g2

0xc9ac,	// (0x0006a6b4) wml_tabs_pane_g3_ParamLimits

0xc9ac,	// (0x0006a6b4) wml_tabs_pane_g3

0x4c93,	// (0x0006299b) wml_tabs_2_active_pane_ParamLimits

0x4c93,	// (0x0006299b) wml_tabs_2_active_pane

0x4ca5,	// (0x000629ad) wml_tabs_2_passive_pane_ParamLimits

0x4ca5,	// (0x000629ad) wml_tabs_2_passive_pane

0x4cb7,	// (0x000629bf) wml_tabs_3_active_pane_cp_ParamLimits

0x4cb7,	// (0x000629bf) wml_tabs_3_active_pane_cp

0x4cca,	// (0x000629d2) wml_tabs_3_passive_pane_ParamLimits

0x4cca,	// (0x000629d2) wml_tabs_3_passive_pane

0x4cdb,	// (0x000629e3) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cdb,	// (0x000629e3) wml_tabs_3_passive_pane_cp

0x4cf0,	// (0x000629f8) tabs_4_active_pane

0x4cf8,	// (0x00062a00) tabs_4_passive_pane

0x4d00,	// (0x00062a08) tabs_4_passive_pane_cp

0x4d08,	// (0x00062a10) tabs_4_passive_pane_cp2

0x425a,	// (0x00061f62) aid_height_text

0x39b9,	// (0x000616c1) mup_volume_cont_pane_ParamLimits

0x39b9,	// (0x000616c1) mup_volume_cont_pane

0x0f36,	// (0x0005ec3e) aid_size_cell_pinb

0x0f40,	// (0x0005ec48) aid_size_list_pinb

0x4bf6,	// (0x000628fe) mup2_volume_cont_pane_ParamLimits

0x4bf6,	// (0x000628fe) mup2_volume_cont_pane

0x4d12,	// (0x00062a1a) mup2_volume_cont_pane_g1_ParamLimits

0x4d12,	// (0x00062a1a) mup2_volume_cont_pane_g1

0x0ba0,	// (0x0005e8a8) aid_size_cell_touch_ParamLimits

0x0ba0,	// (0x0005e8a8) aid_size_cell_touch

0x0e20,	// (0x0005eb28) touch_pane_ParamLimits

0x0e20,	// (0x0005eb28) touch_pane

0x9c6a,	// (0x00067972) main_rss2_pane

0xc9c9,	// (0x0006a6d1) listscroll_rss2_pane

0xc9d2,	// (0x0006a6da) rss2_navigation_pane

0xc9da,	// (0x0006a6e2) list_rss2_pane

0xb2bf,	// (0x00068fc7) scroll_pane_cp22

0xc9e2,	// (0x0006a6ea) rss2_navigation_pane_g1

0xc9eb,	// (0x0006a6f3) rss2_navigation_pane_g2

0xc9f3,	// (0x0006a6fb) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0006d394) rss2_navigation_pane_g

0xc9fb,	// (0x0006a703) rss2_navigation_pane_t1

0x4d4b,	// (0x00062a53) rss2_list_single_pane_ParamLimits

0x4d4b,	// (0x00062a53) rss2_list_single_pane

0xca09,	// (0x0006a711) rss2_list_single_pane_t2

0xca17,	// (0x0006a71f) rss2_list_single_pane_t3_ParamLimits

0xca17,	// (0x0006a71f) rss2_list_single_pane_t3

0xca34,	// (0x0006a73c) rss2_list_single_pane_t4

0x3113,	// (0x00060e1b) smil_status_pane_g1

0xa337,	// (0x0006803f) main_image2_pane_ParamLimits

0xa337,	// (0x0006803f) main_image2_pane

0x490c,	// (0x00062614) main_camera2_pane_g9_ParamLimits

0x490c,	// (0x00062614) main_camera2_pane_g9

0x4960,	// (0x00062668) main_camera2_pane_t5_ParamLimits

0x4960,	// (0x00062668) main_camera2_pane_t5

0x4972,	// (0x0006267a) main_camera2_pane_t6_ParamLimits

0x4972,	// (0x0006267a) main_camera2_pane_t6

0x4d6e,	// (0x00062a76) main_image2_pane_g1_ParamLimits

0x4d6e,	// (0x00062a76) main_image2_pane_g1

0x3ff7,	// (0x00061cff) smil2_video_pane_ParamLimits

0x3ff7,	// (0x00061cff) smil2_video_pane

0x0bdc,	// (0x0005e8e4) aid_zoom_text_primary_cp

0x9cb9,	// (0x000679c1) popup_preview_fixed_window

0xab7d,	// (0x00068885) im_reading_pane_g1

0x4856,	// (0x0006255e) cams2_bc_adjust_pane_cp_ParamLimits

0x4856,	// (0x0006255e) cams2_bc_adjust_pane_cp

0x499d,	// (0x000626a5) cams2_bc_adjust_pane_ParamLimits

0x499d,	// (0x000626a5) cams2_bc_adjust_pane

0xd02b,	// (0x0006ad33) cams2_bc_adjust_pane_g1

0x4d7a,	// (0x00062a82) cams2_slider_pane

0x4d83,	// (0x00062a8b) cams2_slider_pane_g1

0x4d8c,	// (0x00062a94) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0006d39b) cams2_slider_pane_g

0x103b,	// (0x0005ed43) calc_display_pane_ParamLimits

0x1059,	// (0x0005ed61) calc_paper_pane_ParamLimits

0x1075,	// (0x0005ed7d) grid_calc_pane_ParamLimits

0x33bc,	// (0x000610c4) popup_clock_digital_window_t1_ParamLimits

0xb690,	// (0x00069398) main_image_pane_t1

0x1021,	// (0x0005ed29) aid_size_cell_calc_ParamLimits

0x1021,	// (0x0005ed29) aid_size_cell_calc

0x44c7,	// (0x000621cf) popup_blid_sat_info2_window_ParamLimits

0x44c7,	// (0x000621cf) popup_blid_sat_info2_window

0xca4a,	// (0x0006a752) aid_size_cell_blid

0xca52,	// (0x0006a75a) bg_popup_window_pane_cp07

0xca75,	// (0x0006a77d) grid_popup_blid_pane

0xca7f,	// (0x0006a787) heading_pane_cp05_ParamLimits

0xca7f,	// (0x0006a787) heading_pane_cp05

0xcb49,	// (0x0006a851) cell_popup_blid_pane_ParamLimits

0xcb49,	// (0x0006a851) cell_popup_blid_pane

0xcb73,	// (0x0006a87b) cell_popup_blid_pane_g1

0xcb7b,	// (0x0006a883) cell_popup_blid_pane_t1

0x4bbc,	// (0x000628c4) mup2_indicator_pane_ParamLimits

0x4bbc,	// (0x000628c4) mup2_indicator_pane

0xb3f9,	// (0x00069101) mup2_visualizer_osc_pane

0xc92b,	// (0x0006a633) mup2_visualizer_spec_pane_ParamLimits

0xc92b,	// (0x0006a633) mup2_visualizer_spec_pane

0x4da6,	// (0x00062aae) mup2_spec_half_pane

0x4daf,	// (0x00062ab7) mup2_spec_half_pane_cp

0x4db9,	// (0x00062ac1) mup2_spec_bar_pane_ParamLimits

0x4db9,	// (0x00062ac1) mup2_spec_bar_pane

0xc8c0,	// (0x0006a5c8) mup2_spec_bar_pane_g1

0xc8ca,	// (0x0006a5d2) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0006d30e) mup2_spec_bar_pane_g

0x4dd8,	// (0x00062ae0) mup2_osc_middle_pane

0xc8dc,	// (0x0006a5e4) mup2_visualizer_osc_pane_g1

0x9ce3,	// (0x000679eb) popup_number_entry_window_t1_ParamLimits

0x9cf6,	// (0x000679fe) popup_number_entry_window_t2_ParamLimits

0x9d08,	// (0x00067a10) popup_number_entry_window_t3_ParamLimits

0x0e77,	// (0x0005eb7f) popup_number_entry_window_t5_ParamLimits

0x0e77,	// (0x0005eb7f) popup_number_entry_window_t5

0xf0c6,	// (0x0006cdce) popup_number_entry_window_t_ParamLimits

0x9d1a,	// (0x00067a22) text_title_cp2_ParamLimits

0x3ce4,	// (0x000619ec) aid_hotspot_pointer_text2_pane

0x3d7e,	// (0x00061a86) main_viewer_pane_g9_ParamLimits

0x3d7e,	// (0x00061a86) main_viewer_pane_g9

0xadb6,	// (0x00068abe) cale_month_pane_t1_ParamLimits

0xaddc,	// (0x00068ae4) bg_cale_pane_ParamLimits

0xadf4,	// (0x00068afc) list_cale_pane_ParamLimits

0xae05,	// (0x00068b0d) listscroll_cale_day_pane_t1

0xae17,	// (0x00068b1f) scroll_pane_cp09_ParamLimits

0x39f8,	// (0x00061700) main_mup_eq_pane_t1_ParamLimits

0x39f8,	// (0x00061700) main_mup_eq_pane_t1

0x3a14,	// (0x0006171c) main_mup_eq_pane_t2_ParamLimits

0x3a14,	// (0x0006171c) main_mup_eq_pane_t2

0x3a30,	// (0x00061738) main_mup_eq_pane_t3_ParamLimits

0x3a30,	// (0x00061738) main_mup_eq_pane_t3

0x3a4a,	// (0x00061752) main_mup_eq_pane_t4_ParamLimits

0x3a4a,	// (0x00061752) main_mup_eq_pane_t4

0x3a64,	// (0x0006176c) main_mup_eq_pane_t5_ParamLimits

0x3a64,	// (0x0006176c) main_mup_eq_pane_t5

0x3a7e,	// (0x00061786) main_mup_eq_pane_t6_ParamLimits

0x3a7e,	// (0x00061786) main_mup_eq_pane_t6

0x3a94,	// (0x0006179c) main_mup_eq_pane_t7_ParamLimits

0x3a94,	// (0x0006179c) main_mup_eq_pane_t7

0x3aaa,	// (0x000617b2) main_mup_eq_pane_t8_ParamLimits

0x3aaa,	// (0x000617b2) main_mup_eq_pane_t8

0x3ac0,	// (0x000617c8) main_mup_eq_pane_t9_ParamLimits

0x3ac0,	// (0x000617c8) main_mup_eq_pane_t9

0x3adc,	// (0x000617e4) main_mup_eq_pane_t10_ParamLimits

0x3adc,	// (0x000617e4) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0006d15d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0006d15d) main_mup_eq_pane_t

0x3ba1,	// (0x000618a9) mup_equalizer_pane_cp5_ParamLimits

0x3bb9,	// (0x000618c1) mup_equalizer_pane_cp6_ParamLimits

0x3bd1,	// (0x000618d9) mup_equalizer_pane_cp7_ParamLimits

0x9c6a,	// (0x00067972) main_gallery_pane

0xc8e5,	// (0x0006a5ed) smil2_volume_pane

0xc8ed,	// (0x0006a5f5) smil_status_volume_pane_g1_ParamLimits

0xc900,	// (0x0006a608) smil_status_volume_pane_g2_ParamLimits

0x46c1,	// (0x000623c9) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0006d313) smil_status_volume_pane_g_ParamLimits

0xca52,	// (0x0006a75a) bg_popup_window_pane_cp07_ParamLimits

0xca60,	// (0x0006a768) blid_firmament_pane

0x4de1,	// (0x00062ae9) aid_size_cell_gallery_ParamLimits

0x4de1,	// (0x00062ae9) aid_size_cell_gallery

0x4def,	// (0x00062af7) grid_gallery_pane_ParamLimits

0x4def,	// (0x00062af7) grid_gallery_pane

0x4dff,	// (0x00062b07) cell_gallery_pane_ParamLimits

0x4dff,	// (0x00062b07) cell_gallery_pane

0xcb89,	// (0x0006a891) bg_cell_gallery_focus_pane_ParamLimits

0xcb89,	// (0x0006a891) bg_cell_gallery_focus_pane

0xcb9b,	// (0x0006a8a3) cell_gallery_pane_g1_ParamLimits

0xcb9b,	// (0x0006a8a3) cell_gallery_pane_g1

0x4e45,	// (0x00062b4d) cell_gallery_pane_g2_ParamLimits

0x4e45,	// (0x00062b4d) cell_gallery_pane_g2

0x4e52,	// (0x00062b5a) cell_gallery_pane_g3_ParamLimits

0x4e52,	// (0x00062b5a) cell_gallery_pane_g3

0xcba7,	// (0x0006a8af) cell_gallery_pane_g4_ParamLimits

0xcba7,	// (0x0006a8af) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0006d3c1) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0006d3c1) cell_gallery_pane_g

0xcbb3,	// (0x0006a8bb) bg_cell_gallery_focus_pane_g1

0xcbbb,	// (0x0006a8c3) bg_cell_gallery_focus_pane_g2

0xcbc3,	// (0x0006a8cb) bg_cell_gallery_focus_pane_g3

0xcbcb,	// (0x0006a8d3) bg_cell_gallery_focus_pane_g4

0xcbd3,	// (0x0006a8db) bg_cell_gallery_focus_pane_g5

0xcbdb,	// (0x0006a8e3) bg_cell_gallery_focus_pane_g6

0xcbe3,	// (0x0006a8eb) bg_cell_gallery_focus_pane_g7

0xcbeb,	// (0x0006a8f3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0006d3ca) bg_cell_gallery_focus_pane_g

0xcbf3,	// (0x0006a8fb) aid_firma_cardinal

0xcc07,	// (0x0006a90f) blid_firmament_pane_t1

0xcc1e,	// (0x0006a926) blid_firmament_pane_t2

0xcc35,	// (0x0006a93d) blid_firmament_pane_t3

0xcc4c,	// (0x0006a954) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0006d3db) blid_firmament_pane_t

0xcc63,	// (0x0006a96b) blid_sat_info_pane

0xcc73,	// (0x0006a97b) blid_sat_info_pane_g1

0xcc73,	// (0x0006a97b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0006d3e4) blid_sat_info_pane_g

0xcc7d,	// (0x0006a985) blid_sat_info_pane_t1

0xcc8b,	// (0x0006a993) smil2_volume_content_pane

0xcc94,	// (0x0006a99c) smil2_volume_pane_g1

0xcc9c,	// (0x0006a9a4) smil2_volume_content_pane_g1

0xcca5,	// (0x0006a9ad) smil2_volume_content_pane_g2

0xccae,	// (0x0006a9b6) smil2_volume_content_pane_g3

0xccb7,	// (0x0006a9bf) smil2_volume_content_pane_g4

0xccc0,	// (0x0006a9c8) smil2_volume_content_pane_g5

0xccc9,	// (0x0006a9d1) smil2_volume_content_pane_g6

0xccd2,	// (0x0006a9da) smil2_volume_content_pane_g7

0xccdb,	// (0x0006a9e3) smil2_volume_content_pane_g8

0xcce4,	// (0x0006a9ec) smil2_volume_content_pane_g9

0xcced,	// (0x0006a9f5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0006d3e9) smil2_volume_content_pane_g

0x1758,	// (0x0005f460) cale_week_day_heading_pane_t1_ParamLimits

0x17a0,	// (0x0005f4a8) cale_week_day_heading_pane_t2_ParamLimits

0x17ed,	// (0x0005f4f5) cale_week_day_heading_pane_t3_ParamLimits

0x183a,	// (0x0005f542) cale_week_day_heading_pane_t4_ParamLimits

0x1887,	// (0x0005f58f) cale_week_day_heading_pane_t5_ParamLimits

0x18d4,	// (0x0005f5dc) cale_week_day_heading_pane_t6_ParamLimits

0x1921,	// (0x0005f629) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0006ced5) cale_week_day_heading_pane_t_ParamLimits

0xaa2d,	// (0x00068735) bg_cale_side_pane_ParamLimits

0x1969,	// (0x0005f671) cale_week_time_pane_t1_ParamLimits

0x19ad,	// (0x0005f6b5) cale_week_time_pane_t2_ParamLimits

0x19f1,	// (0x0005f6f9) cale_week_time_pane_t3_ParamLimits

0x1a35,	// (0x0005f73d) cale_week_time_pane_t4_ParamLimits

0x1a79,	// (0x0005f781) cale_week_time_pane_t5_ParamLimits

0x1abd,	// (0x0005f7c5) cale_week_time_pane_t6_ParamLimits

0x1b01,	// (0x0005f809) cale_week_time_pane_t7_ParamLimits

0x1b4d,	// (0x0005f855) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0006cee4) cale_week_time_pane_t_ParamLimits

0x1b9b,	// (0x0005f8a3) cell_cale_week_pane_g2_ParamLimits

0xaa2d,	// (0x00068735) bg_cale_side_pane_cp01_ParamLimits

0x2ef0,	// (0x00060bf8) cale_month_week_pane_t1_ParamLimits

0x2f09,	// (0x00060c11) cale_month_week_pane_t2_ParamLimits

0x2f22,	// (0x00060c2a) cale_month_week_pane_t3_ParamLimits

0x2f3b,	// (0x00060c43) cale_month_week_pane_t4_ParamLimits

0x2f54,	// (0x00060c5c) cale_month_week_pane_t5_ParamLimits

0x2f6f,	// (0x00060c77) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006cfbd) cale_month_week_pane_t_ParamLimits

0x30dc,	// (0x00060de4) cell_cale_month_pane_g1_ParamLimits

0x9c6a,	// (0x00067972) main_cale_event_viewer_pane

0x9c6a,	// (0x00067972) listscroll_cale_event_viewer_pane

0xccf6,	// (0x0006a9fe) list_cale_ev_pane

0xccfe,	// (0x0006aa06) scroll_pane_cp023

0x4e5f,	// (0x00062b67) field_cale_ev_pane_ParamLimits

0x4e5f,	// (0x00062b67) field_cale_ev_pane

0xcd0a,	// (0x0006aa12) field_cale_ev_content_pane_ParamLimits

0xcd0a,	// (0x0006aa12) field_cale_ev_content_pane

0xcd16,	// (0x0006aa1e) field_cale_ev_pane_g1_ParamLimits

0xcd16,	// (0x0006aa1e) field_cale_ev_pane_g1

0xcd22,	// (0x0006aa2a) field_cale_ev_pane_g2_ParamLimits

0xcd22,	// (0x0006aa2a) field_cale_ev_pane_g2

0xcd3a,	// (0x0006aa42) field_cale_ev_pane_g3_ParamLimits

0xcd3a,	// (0x0006aa42) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0006d3fe) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0006d3fe) field_cale_ev_pane_g

0xcd52,	// (0x0006aa5a) field_cale_ev_pane_t1_ParamLimits

0xcd52,	// (0x0006aa5a) field_cale_ev_pane_t1

0x4e83,	// (0x00062b8b) field_cale_ev_content_pane_t1_ParamLimits

0x4e83,	// (0x00062b8b) field_cale_ev_content_pane_t1

0xb564,	// (0x0006926c) bg_button_pane_cp01

0x13da,	// (0x0005f0e2) listscroll_cale_week_pane_ParamLimits

0x13ec,	// (0x0005f0f4) popup_toolbar_window_cp01

0xa9f9,	// (0x00068701) listscroll_cale_week_pane_t1_ParamLimits

0x13da,	// (0x0005f0e2) listscroll_cale_day_pane_ParamLimits

0x13ec,	// (0x0005f0f4) popup_toolbar_window_cp02

0xae05,	// (0x00068b0d) listscroll_cale_day_pane_t1_ParamLimits

0x13da,	// (0x0005f0e2) main_cale_month_pane_ParamLimits

0x45ab,	// (0x000622b3) popup_toolbar_window_cp03_ParamLimits

0x45ab,	// (0x000622b3) popup_toolbar_window_cp03

0x3f07,	// (0x00061c0f) main_image_pane_g2_ParamLimits

0x3f07,	// (0x00061c0f) main_image_pane_g2

0x3f13,	// (0x00061c1b) main_image_pane_g3_ParamLimits

0x3f13,	// (0x00061c1b) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0006d1ef) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0006d1ef) main_image_pane_g

0xb690,	// (0x00069398) main_image_pane_t1_ParamLimits

0x3f1f,	// (0x00061c27) main_image_pane_t2_ParamLimits

0x3f1f,	// (0x00061c27) main_image_pane_t2

0x3f31,	// (0x00061c39) main_image_pane_t3_ParamLimits

0x3f31,	// (0x00061c39) main_image_pane_t3

0x3f43,	// (0x00061c4b) main_image_pane_t4_ParamLimits

0x3f43,	// (0x00061c4b) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0006d1f6) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0006d1f6) main_image_pane_t

0x3f55,	// (0x00061c5d) popup_image_details_window_cp01

0x3f5f,	// (0x00061c67) popup_toobar_trans_pane_cp01_ParamLimits

0x3f5f,	// (0x00061c67) popup_toobar_trans_pane_cp01

0x451c,	// (0x00062224) popup_image_details_window_ParamLimits

0x451c,	// (0x00062224) popup_image_details_window

0xc844,	// (0x0006a54c) popup_image_focus_window

0x4848,	// (0x00062550) camera2_autofocus_pane_ParamLimits

0x4848,	// (0x00062550) camera2_autofocus_pane

0x9c6a,	// (0x00067972) bg_popup_sub_pane_cp06

0xcd69,	// (0x0006aa71) popup_image_focus_window_g1

0xcd71,	// (0x0006aa79) popup_image_focus_window_g2

0xcd79,	// (0x0006aa81) popup_image_focus_window_g3

0xcd81,	// (0x0006aa89) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0006d405) popup_image_focus_window_g

0xcd89,	// (0x0006aa91) popup_image_focus_window_t1

0xcd97,	// (0x0006aa9f) popup_image_focus_window_t2

0xcda7,	// (0x0006aaaf) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0006d40e) popup_image_focus_window_t

0xcdb5,	// (0x0006aabd) camera2_autofocus_pane_g1

0xa337,	// (0x0006803f) bg_tb_trans_pane_cp01

0xcdc3,	// (0x0006aacb) popup_image_details_window_g1

0xcdd6,	// (0x0006aade) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0006d420) popup_image_details_window_g

0xcdff,	// (0x0006ab07) popup_image_details_window_t1

0xce11,	// (0x0006ab19) popup_image_details_window_t2

0xce2a,	// (0x0006ab32) popup_image_details_window_t3

0xce3e,	// (0x0006ab46) popup_image_details_window_t4

0xce59,	// (0x0006ab61) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0006d427) popup_image_details_window_t

0xa8a0,	// (0x000685a8) bg_calc_paper_pane_ParamLimits

0x1172,	// (0x0005ee7a) grid_highlight_pane_cp013

0x117c,	// (0x0005ee84) list_calc_pane_ParamLimits

0x118e,	// (0x0005ee96) scroll_pane_cp024

0xa8b4,	// (0x000685bc) bg_calc_display_pane_ParamLimits

0x1196,	// (0x0005ee9e) calc_display_pane_t1_ParamLimits

0x11ab,	// (0x0005eeb3) calc_display_pane_t2_ParamLimits

0x11c0,	// (0x0005eec8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0006ce55) calc_display_pane_t_ParamLimits

0x1294,	// (0x0005ef9c) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006ce72) cell_calc_pane_g

0x129d,	// (0x0005efa5) cell_calc_pane_t1

0xa913,	// (0x0006861b) grid_highlight_pane_cp02_ParamLimits

0xa929,	// (0x00068631) toolbar_button_pane_cp01_ParamLimits

0xa929,	// (0x00068631) toolbar_button_pane_cp01

0xb6d5,	// (0x000693dd) temp_image_control_pane_ParamLimits

0xb6d5,	// (0x000693dd) temp_image_control_pane

0xa337,	// (0x0006803f) main_mp3_pane

0xce73,	// (0x0006ab7b) temp_image_control_pane_g1_ParamLimits

0xce73,	// (0x0006ab7b) temp_image_control_pane_g1

0xce81,	// (0x0006ab89) temp_image_control_pane_g2_ParamLimits

0xce81,	// (0x0006ab89) temp_image_control_pane_g2

0xce93,	// (0x0006ab9b) temp_image_control_pane_g3_ParamLimits

0xce93,	// (0x0006ab9b) temp_image_control_pane_g3

0x4ece,	// (0x00062bd6) temp_image_control_pane_g4_ParamLimits

0x4ece,	// (0x00062bd6) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0006d432) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0006d432) temp_image_control_pane_g

0xce73,	// (0x0006ab7b) main_mp3_pane_g1

0x4edf,	// (0x00062be7) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0006d43b) main_mp3_pane_g

0xced6,	// (0x0006abde) main_mp3_pane_t1

0xaa88,	// (0x00068790) main_camera_pane_g8_ParamLimits

0xaa88,	// (0x00068790) main_camera_pane_g8

0x1e5c,	// (0x0005fb64) main_video_pane_g7_ParamLimits

0x1e5c,	// (0x0005fb64) main_video_pane_g7

0x498b,	// (0x00062693) main_camera2_pane_t7_ParamLimits

0x498b,	// (0x00062693) main_camera2_pane_t7

0xabd4,	// (0x000688dc) scroll_pane_cp025_ParamLimits

0xabd4,	// (0x000688dc) scroll_pane_cp025

0xabe8,	// (0x000688f0) scroll_pane_cp026_ParamLimits

0xabe8,	// (0x000688f0) scroll_pane_cp026

0xabf7,	// (0x000688ff) wml_content_pane_ParamLimits

0x9c6a,	// (0x00067972) main_touch_calib_pane

0x4f83,	// (0x00062c8b) main_touch_calib_pane_g1

0x4f8f,	// (0x00062c97) main_touch_calib_pane_g2

0x4f9b,	// (0x00062ca3) main_touch_calib_pane_g3

0x4fa7,	// (0x00062caf) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0006d459) main_touch_calib_pane_g

0x4fb3,	// (0x00062cbb) main_touch_calib_pane_t1

0x4fca,	// (0x00062cd2) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0006d462) main_touch_calib_pane_t

0xb33a,	// (0x00069042) mup_progress_pane_cp02

0xb359,	// (0x00069061) navi_pane_g1

0xb3bb,	// (0x000690c3) navi_pane_mp_t3

0xa337,	// (0x0006803f) main_mp3_pane_ParamLimits

0x45ed,	// (0x000622f5) navi_pane_ParamLimits

0xce73,	// (0x0006ab7b) main_mp3_pane_g1_ParamLimits

0x4edf,	// (0x00062be7) main_mp3_pane_g2_ParamLimits

0x4eeb,	// (0x00062bf3) main_mp3_pane_g3_ParamLimits

0x4eeb,	// (0x00062bf3) main_mp3_pane_g3

0x4ef7,	// (0x00062bff) main_mp3_pane_g4_ParamLimits

0x4ef7,	// (0x00062bff) main_mp3_pane_g4

0xcea3,	// (0x0006abab) main_mp3_pane_g5_ParamLimits

0xcea3,	// (0x0006abab) main_mp3_pane_g5

0xceb1,	// (0x0006abb9) main_mp3_pane_g6_ParamLimits

0xceb1,	// (0x0006abb9) main_mp3_pane_g6

0xcebe,	// (0x0006abc6) main_mp3_pane_g7_ParamLimits

0xcebe,	// (0x0006abc6) main_mp3_pane_g7

0xceca,	// (0x0006abd2) main_mp3_pane_g8_ParamLimits

0xceca,	// (0x0006abd2) main_mp3_pane_g8

0xf733,	// (0x0006d43b) main_mp3_pane_g_ParamLimits

0x4f03,	// (0x00062c0b) main_mp3_pane_t2

0x4f13,	// (0x00062c1b) main_mp3_pane_t3

0xcee4,	// (0x0006abec) main_mp3_pane_t4

0xcef2,	// (0x0006abfa) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0006d44c) main_mp3_pane_t

0xcf00,	// (0x0006ac08) mup_progress_pane_cp01

0x0bdc,	// (0x0005e8e4) aid_zoom_text_secondary2

0xccf6,	// (0x0006a9fe) list_cale_ev2_pane

0xccfe,	// (0x0006aa06) scroll_pane_cp023_ParamLimits

0xe605,	// (0x0006c30d) field_cale_ev2_pane_ParamLimits

0xe605,	// (0x0006c30d) field_cale_ev2_pane

0x5025,	// (0x00062d2d) field_cale_ev2_pane_g1_ParamLimits

0x5025,	// (0x00062d2d) field_cale_ev2_pane_g1

0x5031,	// (0x00062d39) field_cale_ev2_pane_g2_ParamLimits

0x5031,	// (0x00062d39) field_cale_ev2_pane_g2

0x5049,	// (0x00062d51) field_cale_ev2_pane_g3_ParamLimits

0x5049,	// (0x00062d51) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0006d46d) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0006d46d) field_cale_ev2_pane_g

0x5061,	// (0x00062d69) field_cale_ev2_pane_t1_ParamLimits

0x5061,	// (0x00062d69) field_cale_ev2_pane_t1

0x5078,	// (0x00062d80) field_cale_ev2_pane_t2_ParamLimits

0x5078,	// (0x00062d80) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0006d476) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0006d476) field_cale_ev2_pane_t

0x3de6,	// (0x00061aee) main_postcard_pane_g5_ParamLimits

0x3de6,	// (0x00061aee) main_postcard_pane_g5

0x3df4,	// (0x00061afc) main_postcard_pane_g6_ParamLimits

0x3df4,	// (0x00061afc) main_postcard_pane_g6

0x1c9a,	// (0x0005f9a2) camera2_autofocus_pane_cp_ParamLimits

0x1c9a,	// (0x0005f9a2) camera2_autofocus_pane_cp

0xa337,	// (0x0006803f) main_mup3_pane

0x50ad,	// (0x00062db5) main_mup3_pane_g1_ParamLimits

0x50ad,	// (0x00062db5) main_mup3_pane_g1

0x50ce,	// (0x00062dd6) main_mup3_pane_g2_ParamLimits

0x50ce,	// (0x00062dd6) main_mup3_pane_g2

0x514a,	// (0x00062e52) main_mup3_pane_g3_ParamLimits

0x514a,	// (0x00062e52) main_mup3_pane_g3

0x518f,	// (0x00062e97) main_mup3_pane_g4_ParamLimits

0x518f,	// (0x00062e97) main_mup3_pane_g4

0x51d2,	// (0x00062eda) main_mup3_pane_g5_ParamLimits

0x51d2,	// (0x00062eda) main_mup3_pane_g5

0x5217,	// (0x00062f1f) main_mup3_pane_g6_ParamLimits

0x5217,	// (0x00062f1f) main_mup3_pane_g6

0xcf08,	// (0x0006ac10) main_mup3_pane_g7_ParamLimits

0xcf08,	// (0x0006ac10) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0006d486) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0006d486) main_mup3_pane_g

0x528d,	// (0x00062f95) main_mup3_pane_t1_ParamLimits

0x528d,	// (0x00062f95) main_mup3_pane_t1

0x52f6,	// (0x00062ffe) main_mup3_pane_t2_ParamLimits

0x52f6,	// (0x00062ffe) main_mup3_pane_t2

0x53bf,	// (0x000630c7) main_mup3_pane_t4_ParamLimits

0x53bf,	// (0x000630c7) main_mup3_pane_t4

0x5413,	// (0x0006311b) main_mup3_pane_t5_ParamLimits

0x5413,	// (0x0006311b) main_mup3_pane_t5

0x54c1,	// (0x000631c9) main_mup3_pane_t6_ParamLimits

0x54c1,	// (0x000631c9) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0006d497) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0006d497) main_mup3_pane_t

0x556d,	// (0x00063275) mup3_progress_pane_ParamLimits

0x556d,	// (0x00063275) mup3_progress_pane

0x55e7,	// (0x000632ef) popup_mup3_control_window_ParamLimits

0x55e7,	// (0x000632ef) popup_mup3_control_window

0xcf16,	// (0x0006ac1e) popup_mup3_text_window

0x5604,	// (0x0006330c) mup3_progress_pane_t1

0x5623,	// (0x0006332b) mup3_progress_pane_t2

0xcf1e,	// (0x0006ac26) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0006d4a4) mup3_progress_pane_t

0xcf3b,	// (0x0006ac43) mup_progress_pane_cp03

0x9c6a,	// (0x00067972) bg_tb_trans_pane_cp04

0x5642,	// (0x0006334a) mup3_volume_pane

0x564a,	// (0x00063352) popup_mup3_control_window_g1

0xd8e3,	// (0x0006b5eb) mup3_volume_pane_g1

0xd8ec,	// (0x0006b5f4) mup3_volume_pane_g2

0xd8f5,	// (0x0006b5fd) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0006d4ab) mup3_volume_pane_g

0x9c6a,	// (0x00067972) bg_tb_trans_pane_cp03

0xcf4b,	// (0x0006ac53) popup_mup3_text_window_g1

0xcf53,	// (0x0006ac5b) popup_mup3_text_window_t1

0xa8fc,	// (0x00068604) list_calc_item_pane_g1_ParamLimits

0xc9c0,	// (0x0006a6c8) mup_volume_pane_cp_g1

0x4fe3,	// (0x00062ceb) main_touch_calib_pane_t3

0x4ff9,	// (0x00062d01) main_touch_calib_pane_t4

0x500f,	// (0x00062d17) main_touch_calib_pane_t5

0x9c74,	// (0x0006797c) aid_cell_size_toolbar2

0x9c7c,	// (0x00067984) aid_popup3_width_pane

0x0bd4,	// (0x0005e8dc) aid_zoom_text_msg_primary

0x1c65,	// (0x0005f96d) vorec_t7

0xa8c0,	// (0x000685c8) bg_calc_paper_pane_g1_ParamLimits

0xa8cc,	// (0x000685d4) bg_calc_paper_pane_g2_ParamLimits

0xa8d8,	// (0x000685e0) bg_calc_paper_pane_g3_ParamLimits

0xa8e4,	// (0x000685ec) bg_calc_paper_pane_g4_ParamLimits

0xa8f0,	// (0x000685f8) bg_calc_paper_pane_g5_ParamLimits

0x1201,	// (0x0005ef09) bg_calc_paper_pane_g6_ParamLimits

0x1212,	// (0x0005ef1a) bg_calc_paper_pane_g7_ParamLimits

0x1223,	// (0x0005ef2b) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0006ce5c) bg_calc_paper_pane_g_ParamLimits

0x1236,	// (0x0005ef3e) calc_bg_paper_pane_g9_ParamLimits

0x1d8b,	// (0x0005fa93) image_qvga_pane_ParamLimits

0x1d8b,	// (0x0005fa93) image_qvga_pane

0xa7ef,	// (0x000684f7) bg_popup_sub_pane_cp04_ParamLimits

0xb60c,	// (0x00069314) popup_mup_playback_window_g1_ParamLimits

0xb618,	// (0x00069320) popup_mup_playback_window_t1_ParamLimits

0xb62d,	// (0x00069335) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0006d1ea) popup_mup_playback_window_t_ParamLimits

0x4aba,	// (0x000627c2) main_mup2_pane_g3_ParamLimits

0x4aba,	// (0x000627c2) main_mup2_pane_g3

0x2136,	// (0x0005fe3e) popup_toolbar_window_cp04

0xba28,	// (0x00069730) popup_call2_audio_second_window_g3_ParamLimits

0xba28,	// (0x00069730) popup_call2_audio_second_window_g3

0xbe32,	// (0x00069b3a) popup_call2_audio_first_window_g4_ParamLimits

0xbe32,	// (0x00069b3a) popup_call2_audio_first_window_g4

0xc4b1,	// (0x0006a1b9) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x0006a1b9) popup_call2_audio_in_window_g4

0x3efa,	// (0x00061c02) aid_area_sk_bg_cut_ParamLimits

0x3efa,	// (0x00061c02) aid_area_sk_bg_cut

0xb642,	// (0x0006934a) aid_area_sk_bg_cut_2_ParamLimits

0xb642,	// (0x0006934a) aid_area_sk_bg_cut_2

0x4e35,	// (0x00062b3d) aid_placing_details_win

0x4e3d,	// (0x00062b45) aid_placing_details_win_2

0xcdb5,	// (0x0006aabd) camera2_autofocus_pane_g1_ParamLimits

0x0db6,	// (0x0005eabe) popup_fixed_preview_cale_window_ParamLimits

0x0db6,	// (0x0005eabe) popup_fixed_preview_cale_window

0xb40a,	// (0x00069112) navi_slider_pane_g3

0xb413,	// (0x0006911b) navi_slider_pane_g4

0xb41c,	// (0x00069124) navi_slider_pane_g5

0xb40a,	// (0x00069112) navi_slider_pane_g6

0x3766,	// (0x0006146e) navi_slider_pane_g7

0xb531,	// (0x00069239) mup_scale_pane_g3

0xb53a,	// (0x00069242) mup_scale_pane_g4

0xb543,	// (0x0006924b) mup_scale_pane_g5

0x3be9,	// (0x000618f1) mup_scale_pane_g6

0x3bf2,	// (0x000618fa) mup_scale_pane_g7

0xb40a,	// (0x00069112) cams2_slider_pane_g3

0xca42,	// (0x0006a74a) cams2_slider_pane_g4

0x4d95,	// (0x00062a9d) cams2_slider_pane_g5

0xb40a,	// (0x00069112) cams2_slider_pane_g6

0x4d9d,	// (0x00062aa5) cams2_slider_pane_g7

0xcc73,	// (0x0006a97b) camera2_autofocus_pane_cp_g1

0xc816,	// (0x0006a51e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc816,	// (0x0006a51e) bg_popup_preview_window_pane_cp02

0xcf61,	// (0x0006ac69) list_fp_cale_pane_ParamLimits

0xcf61,	// (0x0006ac69) list_fp_cale_pane

0xcf6d,	// (0x0006ac75) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf6d,	// (0x0006ac75) popup_fixed_preview_cale_window_t1

0x5653,	// (0x0006335b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5653,	// (0x0006335b) popup_fixed_preview_cale_window_t2

0x5668,	// (0x00063370) popup_fixed_preview_cale_window_t3_ParamLimits

0x5668,	// (0x00063370) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0006d4b2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0006d4b2) popup_fixed_preview_cale_window_t

0x567d,	// (0x00063385) list_single_fp_cale_pane_ParamLimits

0x567d,	// (0x00063385) list_single_fp_cale_pane

0xcf8b,	// (0x0006ac93) list_single_fp_cale_pane_g1_ParamLimits

0xcf8b,	// (0x0006ac93) list_single_fp_cale_pane_g1

0xcf97,	// (0x0006ac9f) list_single_fp_cale_pane_g2_ParamLimits

0xcf97,	// (0x0006ac9f) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0006d4b9) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0006d4b9) list_single_fp_cale_pane_g

0xcfb0,	// (0x0006acb8) list_single_fp_cale_pane_t1_ParamLimits

0xcfb0,	// (0x0006acb8) list_single_fp_cale_pane_t1

0xcfc2,	// (0x0006acca) list_single_fp_cale_pane_t2_ParamLimits

0xcfc2,	// (0x0006acca) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0006d4c0) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0006d4c0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c6a,	// (0x00067972) main_dialer_pane

0x568d,	// (0x00063395) aid_cell_size_keypad

0x5697,	// (0x0006339f) dialer_ne_pane

0x56a1,	// (0x000633a9) grid_dialer_command_1_pane

0x56a9,	// (0x000633b1) grid_dialer_command_2_pane

0x56b1,	// (0x000633b9) grid_dialer_keypad_pane

0x56c5,	// (0x000633cd) bg_popup_call_pane_cp06_ParamLimits

0x56c5,	// (0x000633cd) bg_popup_call_pane_cp06

0x56d1,	// (0x000633d9) dialer_ne_clear_pane_ParamLimits

0x56d1,	// (0x000633d9) dialer_ne_clear_pane

0xcff5,	// (0x0006acfd) dialer_ne_pane_g1

0xcffd,	// (0x0006ad05) dialer_ne_pane_t1_ParamLimits

0xcffd,	// (0x0006ad05) dialer_ne_pane_t1

0x56dd,	// (0x000633e5) dialer_ne_pane_t2_ParamLimits

0x56dd,	// (0x000633e5) dialer_ne_pane_t2

0x56fa,	// (0x00063402) dialer_ne_pane_t3_ParamLimits

0x56fa,	// (0x00063402) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0006d4c5) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0006d4c5) dialer_ne_pane_t

0x571e,	// (0x00063426) dialer_ne_pane_t3_copy1_ParamLimits

0x571e,	// (0x00063426) dialer_ne_pane_t3_copy1

0x5742,	// (0x0006344a) cell_dialer_keypad_pane_ParamLimits

0x5742,	// (0x0006344a) cell_dialer_keypad_pane

0x5759,	// (0x00063461) cell_dialer_command_1_pane_ParamLimits

0x5759,	// (0x00063461) cell_dialer_command_1_pane

0x576f,	// (0x00063477) cell_dialer_command_2_pane_ParamLimits

0x576f,	// (0x00063477) cell_dialer_command_2_pane

0xd00f,	// (0x0006ad17) bg_button_pane_cp02_ParamLimits

0xd00f,	// (0x0006ad17) bg_button_pane_cp02

0x577e,	// (0x00063486) cell_dialer_keypad_pane_g1_ParamLimits

0x577e,	// (0x00063486) cell_dialer_keypad_pane_g1

0xd00f,	// (0x0006ad17) bg_button_pane_cp03_ParamLimits

0xd00f,	// (0x0006ad17) bg_button_pane_cp03

0x5793,	// (0x0006349b) cell_dialer_command_1_pane_g1_ParamLimits

0x5793,	// (0x0006349b) cell_dialer_command_1_pane_g1

0xd01b,	// (0x0006ad23) bg_button_pane_cp04

0x57a7,	// (0x000634af) cell_dialer_command_2_pane_g1

0xb3f9,	// (0x00069101) bg_button_pane_cp06

0xd023,	// (0x0006ad2b) dialer_ne_clear_pane_g1

0x36a1,	// (0x000613a9) navi_pane_g2

0x36cf,	// (0x000613d7) navi_pane_g3

0x0002,

0xf3e5,	// (0x0006d0ed) navi_pane_g

0x36fa,	// (0x00061402) navi_pane_mv_g2

0x3721,	// (0x00061429) navi_pane_mv_g5

0x3729,	// (0x00061431) navi_pane_mv_t1

0xa8b4,	// (0x000685bc) main_clock2_pane

0x57e5,	// (0x000634ed) main_clock2_list_pane_ParamLimits

0x57e5,	// (0x000634ed) main_clock2_list_pane

0x580f,	// (0x00063517) main_clock2_pane_t1_ParamLimits

0x580f,	// (0x00063517) main_clock2_pane_t1

0x5831,	// (0x00063539) main_clock2_pane_t2_ParamLimits

0x5831,	// (0x00063539) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0006d4d1) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0006d4d1) main_clock2_pane_t

0x588e,	// (0x00063596) popup_clock_analogue_window_cp03_ParamLimits

0x588e,	// (0x00063596) popup_clock_analogue_window_cp03

0x58ae,	// (0x000635b6) popup_clock_digital_window_cp02_ParamLimits

0x58ae,	// (0x000635b6) popup_clock_digital_window_cp02

0x591f,	// (0x00063627) main_clock2_list_single_pane_ParamLimits

0x591f,	// (0x00063627) main_clock2_list_single_pane

0xb3f9,	// (0x00069101) list_highlight_pane_cp05

0xd067,	// (0x0006ad6f) main_clock2_list_single_pane_t1

0x2136,	// (0x0005fe3e) popup_toolbar_window_cp04_ParamLimits

0x4e9e,	// (0x00062ba6) camera2_autofocus_pane_g2_ParamLimits

0x4e9e,	// (0x00062ba6) camera2_autofocus_pane_g2

0x4eaa,	// (0x00062bb2) camera2_autofocus_pane_g3_ParamLimits

0x4eaa,	// (0x00062bb2) camera2_autofocus_pane_g3

0x4eb6,	// (0x00062bbe) camera2_autofocus_pane_g4_ParamLimits

0x4eb6,	// (0x00062bbe) camera2_autofocus_pane_g4

0x4ec2,	// (0x00062bca) camera2_autofocus_pane_g5_ParamLimits

0x4ec2,	// (0x00062bca) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0006d415) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0006d415) camera2_autofocus_pane_g

0x508d,	// (0x00062d95) camera2_autofocus_pane_cp_g2

0x5095,	// (0x00062d9d) camera2_autofocus_pane_cp_g3

0x509d,	// (0x00062da5) camera2_autofocus_pane_cp_g4

0x50a5,	// (0x00062dad) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0006d47b) camera2_autofocus_pane_cp_g

0x56bd,	// (0x000633c5) popup_dialer_spcha_window

0x9c6a,	// (0x00067972) bg_popup_sub_pane_cp07

0xd075,	// (0x0006ad7d) list_spcha_pane

0xd07d,	// (0x0006ad85) list_single_spcha_pane_ParamLimits

0xd07d,	// (0x0006ad85) list_single_spcha_pane

0x9c6a,	// (0x00067972) list_highlight_pane_cp06

0xd08e,	// (0x0006ad96) list_single_spcha_pane_t1

0xc25b,	// (0x00069f63) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x00069f63) popup_call2_audio_out_window_g4

0x9c6a,	// (0x00067972) main_imed2_pane

0xc84e,	// (0x0006a556) popup_imed_adjust2_window

0x452a,	// (0x00062232) popup_imed_trans_window_ParamLimits

0x452a,	// (0x00062232) popup_imed_trans_window

0xcaab,	// (0x0006a7b3) popup_blid_sat_info2_window_t1

0xcab9,	// (0x0006a7c1) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0006d3aa) popup_blid_sat_info2_window_t

0x59c9,	// (0x000636d1) aid_size_cell_colour_35

0x59e3,	// (0x000636eb) aid_size_cell_colour_112

0x59fa,	// (0x00063702) aid_size_cell_effect

0xa337,	// (0x0006803f) bg_tb_trans_pane_cp02

0xb10d,	// (0x00068e15) heading_imed_pane

0x5a14,	// (0x0006371c) listscroll_imed_pane

0xd09c,	// (0x0006ada4) heading_imed_pane_g1

0xd0a4,	// (0x0006adac) heading_imed_pane_t1

0xd0b2,	// (0x0006adba) grid_imed_colour_35_pane_ParamLimits

0xd0b2,	// (0x0006adba) grid_imed_colour_35_pane

0x5a20,	// (0x00063728) grid_imed_effect_pane

0xd0ce,	// (0x0006add6) list_imed_aspect_pane

0x5a30,	// (0x00063738) scroll_pane_cp027_ParamLimits

0x5a30,	// (0x00063738) scroll_pane_cp027

0x5a3c,	// (0x00063744) cell_imed_effect_pane_ParamLimits

0x5a3c,	// (0x00063744) cell_imed_effect_pane

0xd0d6,	// (0x0006adde) cell_imed_colour_pane_ParamLimits

0xd0d6,	// (0x0006adde) cell_imed_colour_pane

0xd120,	// (0x0006ae28) cell_imed_colour_pane_g1_ParamLimits

0xd120,	// (0x0006ae28) cell_imed_colour_pane_g1

0xd131,	// (0x0006ae39) hgihlgiht_grid_pane_cp016_ParamLimits

0xd131,	// (0x0006ae39) hgihlgiht_grid_pane_cp016

0x5a58,	// (0x00063760) cell_imed_effect_pane_g1

0x5a60,	// (0x00063768) grid_highlight_pane_cp017

0xd142,	// (0x0006ae4a) list_imed_single_pane_ParamLimits

0xd142,	// (0x0006ae4a) list_imed_single_pane

0x9c6a,	// (0x00067972) list_highlight_pane_cp07

0xd156,	// (0x0006ae5e) list_imed_aspect_pane_comp1_t1

0xc822,	// (0x0006a52a) bg_tb_trans_pane_cp05

0xd178,	// (0x0006ae80) popup_imed_adjust2_window_g1

0xd19f,	// (0x0006aea7) popup_imed_adjust2_window_t1

0xd1b7,	// (0x0006aebf) slider_imed_adjust_pane

0xd1cb,	// (0x0006aed3) slider_imed_adjust_pane_g1

0xd1db,	// (0x0006aee3) slider_imed_adjust_pane_g2

0xd1eb,	// (0x0006aef3) slider_imed_adjust_pane_g3

0xd1fc,	// (0x0006af04) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0006d4ee) slider_imed_adjust_pane_g

0x5a69,	// (0x00063771) aid_size_cell_clipart2

0x5a75,	// (0x0006377d) grid_imed_clipart_pane

0xd20d,	// (0x0006af15) scroll_pane_cp031

0x5a7f,	// (0x00063787) cell_imed_clipart_pane_ParamLimits

0x5a7f,	// (0x00063787) cell_imed_clipart_pane

0x5a9d,	// (0x000637a5) cell_imed_clipart_pane_g1

0x9c6a,	// (0x00067972) grid_highlight_pane_cp014

0x57f1,	// (0x000634f9) main_clock2_pane_g1_ParamLimits

0x57f1,	// (0x000634f9) main_clock2_pane_g1

0x58ca,	// (0x000635d2) aid_call2_pane_cp10

0x58dc,	// (0x000635e4) aid_call_pane_cp10

0xb32e,	// (0x00069036) popup_clock_analogue_window_cp10_g1

0xb32e,	// (0x00069036) popup_clock_analogue_window_cp10_g2

0x58ee,	// (0x000635f6) popup_clock_analogue_window_cp10_g3

0x58ee,	// (0x000635f6) popup_clock_analogue_window_cp10_g4

0xb32e,	// (0x00069036) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0006d4dc) popup_clock_analogue_window_cp10_g

0x5900,	// (0x00063608) popup_clock_analogue_window_cp10_t1

0x5931,	// (0x00063639) clock_digital_number_pane_cp10_ParamLimits

0x5931,	// (0x00063639) clock_digital_number_pane_cp10

0x5949,	// (0x00063651) clock_digital_number_pane_cp11_ParamLimits

0x5949,	// (0x00063651) clock_digital_number_pane_cp11

0x5961,	// (0x00063669) clock_digital_number_pane_cp12_ParamLimits

0x5961,	// (0x00063669) clock_digital_number_pane_cp12

0x5979,	// (0x00063681) clock_digital_number_pane_cp13_ParamLimits

0x5979,	// (0x00063681) clock_digital_number_pane_cp13

0x5991,	// (0x00063699) clock_digital_separator_pane_cp10_ParamLimits

0x5991,	// (0x00063699) clock_digital_separator_pane_cp10

0x59a9,	// (0x000636b1) popup_clock_digital_window_cp02_t1_ParamLimits

0x59a9,	// (0x000636b1) popup_clock_digital_window_cp02_t1

0xa7e7,	// (0x000684ef) clock_digital_number_pane_cp10_g1

0xa7e7,	// (0x000684ef) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0006d4f7) clock_digital_number_pane_cp10_g

0xa7e7,	// (0x000684ef) clock_digital_separator_pane_cp10_g1

0xa7e7,	// (0x000684ef) clock_digital_separator_pane_g2_cp10

0xb3c9,	// (0x000690d1) navi_pane_vded_g4

0xb3d2,	// (0x000690da) navi_pane_vded_g5

0xb3db,	// (0x000690e3) navi_pane_vded_t1

0x9c6a,	// (0x00067972) main_vded_pane

0x5aa6,	// (0x000637ae) main_vded_pane_g1

0x5ab2,	// (0x000637ba) main_vded_pane_g2

0x5abc,	// (0x000637c4) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0006d4fc) main_vded_pane_g

0x5ac6,	// (0x000637ce) main_vded_pane_t1

0x5ad4,	// (0x000637dc) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0006d503) main_vded_pane_t

0x5ae2,	// (0x000637ea) vded_slider_pane

0x5aec,	// (0x000637f4) vded_video_pane

0xd215,	// (0x0006af1d) vded_video_pane_g1

0x5af8,	// (0x00063800) vded_video_pane_g2

0xcc73,	// (0x0006a97b) vded_video_pane_g3

0x0002,

0xf800,	// (0x0006d508) vded_video_pane_g

0xd21f,	// (0x0006af27) vded_slider_pane_g1

0xc9c0,	// (0x0006a6c8) vded_slider_pane_g2

0xd228,	// (0x0006af30) vded_slider_pane_g3

0xd231,	// (0x0006af39) vded_slider_pane_g4

0xd23a,	// (0x0006af42) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0006d50f) vded_slider_pane_g

0x55db,	// (0x000632e3) mup3_rocker_pane_ParamLimits

0x55db,	// (0x000632e3) mup3_rocker_pane

0x5b01,	// (0x00063809) mup3_control_keys_pane_g1

0x5b09,	// (0x00063811) mup3_control_keys_pane_g2

0x5b11,	// (0x00063819) mup3_control_keys_pane_g3

0x5b19,	// (0x00063821) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0006d51a) mup3_control_keys_pane_g

0x0dd4,	// (0x0005eadc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dd4,	// (0x0005eadc) popup_toolbar2_fixed_window_cp01

0x55f7,	// (0x000632ff) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55f7,	// (0x000632ff) popup_toolbar2_fixed_window_cp02

0xbb9a,	// (0x000698a2) popup_call2_audio_second_window_t4_ParamLimits

0xbb9a,	// (0x000698a2) popup_call2_audio_second_window_t4

0xc0c8,	// (0x00069dd0) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x00069dd0) popup_call2_audio_first_window_t6

0xc35e,	// (0x0006a066) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x0006a066) popup_call2_audio_out_window_t6

0x9c6a,	// (0x00067972) main_vitu_pane

0x5b29,	// (0x00063831) aid_size_cell_itu_ParamLimits

0x5b29,	// (0x00063831) aid_size_cell_itu

0x0e06,	// (0x0005eb0e) bg_popup_window_pane_cp08_ParamLimits

0x0e06,	// (0x0005eb0e) bg_popup_window_pane_cp08

0x5b37,	// (0x0006383f) field_vitu_entry_pane_ParamLimits

0x5b37,	// (0x0006383f) field_vitu_entry_pane

0x5b46,	// (0x0006384e) grid_vitu_function_pane_ParamLimits

0x5b46,	// (0x0006384e) grid_vitu_function_pane

0x5b56,	// (0x0006385e) grid_vitu_itu_pane_ParamLimits

0x5b56,	// (0x0006385e) grid_vitu_itu_pane

0x5b66,	// (0x0006386e) cell_vitu_itu_pane_ParamLimits

0x5b66,	// (0x0006386e) cell_vitu_itu_pane

0x5b7d,	// (0x00063885) cell_vitu_function_pane_ParamLimits

0x5b7d,	// (0x00063885) cell_vitu_function_pane

0xa337,	// (0x0006803f) bg_popup_sub_pane_cp08_ParamLimits

0xa337,	// (0x0006803f) bg_popup_sub_pane_cp08

0x5b91,	// (0x00063899) field_vitu_entry_pane_t1_ParamLimits

0x5b91,	// (0x00063899) field_vitu_entry_pane_t1

0xd25b,	// (0x0006af63) field_vitu_entry_pane_t2_ParamLimits

0xd25b,	// (0x0006af63) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0006d528) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0006d528) field_vitu_entry_pane_t

0xd278,	// (0x0006af80) bg_button_pane_cp05_ParamLimits

0xd278,	// (0x0006af80) bg_button_pane_cp05

0x5bab,	// (0x000638b3) cell_vitu_itu_pane_g1

0x5bc3,	// (0x000638cb) cell_vitu_itu_pane_t1_ParamLimits

0x5bc3,	// (0x000638cb) cell_vitu_itu_pane_t1

0x5bd5,	// (0x000638dd) cell_vitu_itu_pane_t2_ParamLimits

0x5bd5,	// (0x000638dd) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0006d52d) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0006d52d) cell_vitu_itu_pane_t

0xd286,	// (0x0006af8e) bg_button_pane_cp07

0x5c18,	// (0x00063920) cell_vitu_function_pane_g1

0x1099,	// (0x0005eda1) main_calc_pane_g1

0x0bc8,	// (0x0005e8d0) aid_visual_content_pane

0x9c6a,	// (0x00067972) main_vradio_pane

0x5c21,	// (0x00063929) main_vradio_pane_g1_ParamLimits

0x5c21,	// (0x00063929) main_vradio_pane_g1

0xd290,	// (0x0006af98) main_vradio_pane_g2_ParamLimits

0xd290,	// (0x0006af98) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0006d534) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0006d534) main_vradio_pane_g

0x5c2f,	// (0x00063937) main_vradio_pane_t1_ParamLimits

0x5c2f,	// (0x00063937) main_vradio_pane_t1

0x5c41,	// (0x00063949) main_vradio_pane_t2_ParamLimits

0x5c41,	// (0x00063949) main_vradio_pane_t2

0xd29d,	// (0x0006afa5) main_vradio_pane_t3_ParamLimits

0xd29d,	// (0x0006afa5) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0006d539) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0006d539) main_vradio_pane_t

0x5c53,	// (0x0006395b) vradio_rocker_control_pane_ParamLimits

0x5c53,	// (0x0006395b) vradio_rocker_control_pane

0x5c5f,	// (0x00063967) vradio_station_info_pane_ParamLimits

0x5c5f,	// (0x00063967) vradio_station_info_pane

0xd2b1,	// (0x0006afb9) vradio_frequency_info_pane_ParamLimits

0xd2b1,	// (0x0006afb9) vradio_frequency_info_pane

0xcc73,	// (0x0006a97b) vradio_station_info_pane_g1

0xd2c0,	// (0x0006afc8) vradio_station_info_pane_t1_ParamLimits

0xd2c0,	// (0x0006afc8) vradio_station_info_pane_t1

0xd2e2,	// (0x0006afea) vradio_station_info_pane_t2_ParamLimits

0xd2e2,	// (0x0006afea) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0006d540) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0006d540) vradio_station_info_pane_t

0xd2f4,	// (0x0006affc) vradio_tuning_pane

0xd2fc,	// (0x0006b004) vradio_rocker_control_pane_g1

0xd304,	// (0x0006b00c) vradio_rocker_control_pane_g2

0xd30c,	// (0x0006b014) vradio_rocker_control_pane_g3

0xd314,	// (0x0006b01c) vradio_rocker_control_pane_g4

0xd31c,	// (0x0006b024) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0006d545) vradio_rocker_control_pane_g

0x5c6c,	// (0x00063974) vradio_frequency_info_pane_g1

0xd324,	// (0x0006b02c) vradio_frequency_info_pane_t1_ParamLimits

0xd324,	// (0x0006b02c) vradio_frequency_info_pane_t1

0x5c76,	// (0x0006397e) vradio_tuning_pane_g1

0x5c81,	// (0x00063989) vradio_tuning_pane_t1

0x9c90,	// (0x00067998) area_side_right_pane_ParamLimits

0x9c90,	// (0x00067998) area_side_right_pane

0xc7dd,	// (0x0006a4e5) status_small_pane_g1

0xc7e5,	// (0x0006a4ed) status_small_pane_g2

0xc7ee,	// (0x0006a4f6) status_small_pane_g3

0xc7f7,	// (0x0006a4ff) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0006d300) status_small_pane_g

0xc800,	// (0x0006a508) status_small_pane_t1

0x9c6a,	// (0x00067972) main_video3_pane

0xd338,	// (0x0006b040) cams_zoom_vslider_pane

0xd340,	// (0x0006b048) image3_wide_pane_ParamLimits

0xd340,	// (0x0006b048) image3_wide_pane

0xd35a,	// (0x0006b062) image3_wide_small_pane

0xd366,	// (0x0006b06e) main_video3_pane_g1_ParamLimits

0xd366,	// (0x0006b06e) main_video3_pane_g1

0xd382,	// (0x0006b08a) main_video3_pane_g2_ParamLimits

0xd382,	// (0x0006b08a) main_video3_pane_g2

0x0001,

0xf848,	// (0x0006d550) main_video3_pane_g_ParamLimits

0xf848,	// (0x0006d550) main_video3_pane_g

0xd39e,	// (0x0006b0a6) main_video3_pane_t1_ParamLimits

0xd39e,	// (0x0006b0a6) main_video3_pane_t1

0xd3c9,	// (0x0006b0d1) main_video3_pane_t2_ParamLimits

0xd3c9,	// (0x0006b0d1) main_video3_pane_t2

0xd3f6,	// (0x0006b0fe) main_video3_pane_t3_ParamLimits

0xd3f6,	// (0x0006b0fe) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0006d555) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0006d555) main_video3_pane_t

0xd423,	// (0x0006b12b) cams_zoom_vslider_pane_g1

0xd42c,	// (0x0006b134) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0006d55c) cams_zoom_vslider_pane_g

0xd434,	// (0x0006b13c) small_slider_vertical_pane

0xcc73,	// (0x0006a97b) small_slider_vertical_pane_g1

0xcc73,	// (0x0006a97b) small_slider_vertical_pane_g2

0xd43c,	// (0x0006b144) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0006d561) small_slider_vertical_pane_g

0x9c6a,	// (0x00067972) main_hwr_training_pane

0xd445,	// (0x0006b14d) hwr_training_instruct_pane_ParamLimits

0xd445,	// (0x0006b14d) hwr_training_instruct_pane

0x5c90,	// (0x00063998) hwr_training_navi_pane_ParamLimits

0x5c90,	// (0x00063998) hwr_training_navi_pane

0x5caa,	// (0x000639b2) hwr_training_write_pane_ParamLimits

0x5caa,	// (0x000639b2) hwr_training_write_pane

0x9c6a,	// (0x00067972) bg_frame_shadow_pane

0xd488,	// (0x0006b190) hwr_training_write_pane_g1

0xd490,	// (0x0006b198) hwr_training_write_pane_g2

0xd498,	// (0x0006b1a0) hwr_training_write_pane_g3

0xd4a0,	// (0x0006b1a8) hwr_training_write_pane_g4

0xd4a8,	// (0x0006b1b0) hwr_training_write_pane_g5

0xd4b0,	// (0x0006b1b8) hwr_training_write_pane_g6

0xd4b8,	// (0x0006b1c0) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0006d568) hwr_training_write_pane_g

0x5ce2,	// (0x000639ea) hwr_training_navi_pane_g1_ParamLimits

0x5ce2,	// (0x000639ea) hwr_training_navi_pane_g1

0x5cf4,	// (0x000639fc) hwr_training_navi_pane_g2_ParamLimits

0x5cf4,	// (0x000639fc) hwr_training_navi_pane_g2

0x5d06,	// (0x00063a0e) hwr_training_navi_pane_g3_ParamLimits

0x5d06,	// (0x00063a0e) hwr_training_navi_pane_g3

0x5d16,	// (0x00063a1e) hwr_training_navi_pane_g4_ParamLimits

0x5d16,	// (0x00063a1e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0006d577) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0006d577) hwr_training_navi_pane_g

0x5d30,	// (0x00063a38) hwr_training_navi_pane_t1

0x5d3e,	// (0x00063a46) list_single_hwr_training_instruct_pane_ParamLimits

0x5d3e,	// (0x00063a46) list_single_hwr_training_instruct_pane

0xd4c0,	// (0x0006b1c8) list_single_hwr_training_instruct_pane_t1

0xcbb3,	// (0x0006a8bb) bg_frame_shadow_pane_g1

0xd4cf,	// (0x0006b1d7) bg_frame_shadow_pane_g2

0xd4d7,	// (0x0006b1df) bg_frame_shadow_pane_g3

0xd4df,	// (0x0006b1e7) bg_frame_shadow_pane_g4

0xd4e7,	// (0x0006b1ef) bg_frame_shadow_pane_g5

0xd4ef,	// (0x0006b1f7) bg_frame_shadow_pane_g6

0xd4f7,	// (0x0006b1ff) bg_frame_shadow_pane_g7

0xa97f,	// (0x00068687) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0006d582) bg_frame_shadow_pane_g

0x9c6a,	// (0x00067972) main_video_tele_dialer_pane

0x5d57,	// (0x00063a5f) aid_size_cell_video_keypad_ParamLimits

0x5d57,	// (0x00063a5f) aid_size_cell_video_keypad

0x5d67,	// (0x00063a6f) grid_video_dialer_keypad_pane_ParamLimits

0x5d67,	// (0x00063a6f) grid_video_dialer_keypad_pane

0x5d99,	// (0x00063aa1) video_down_pane_cp_ParamLimits

0x5d99,	// (0x00063aa1) video_down_pane_cp

0x5dc1,	// (0x00063ac9) cell_video_dialer_keypad_pane_ParamLimits

0x5dc1,	// (0x00063ac9) cell_video_dialer_keypad_pane

0xd4ff,	// (0x0006b207) bg_button_pane_cp08_ParamLimits

0xd4ff,	// (0x0006b207) bg_button_pane_cp08

0x5dd8,	// (0x00063ae0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dd8,	// (0x00063ae0) cell_video_dialer_keypad_pane_g1

0x55cf,	// (0x000632d7) mup3_rocker2_pane_ParamLimits

0x55cf,	// (0x000632d7) mup3_rocker2_pane

0xcc73,	// (0x0006a97b) mup3_rocker2_pane_g1

0x44ac,	// (0x000621b4) main_dialer2_pane

0x9c6a,	// (0x00067972) main_mp4_pane

0x5e17,	// (0x00063b1f) main_mp4_pane_g1_ParamLimits

0x5e17,	// (0x00063b1f) main_mp4_pane_g1

0x5e25,	// (0x00063b2d) main_mp4_pane_g2_ParamLimits

0x5e25,	// (0x00063b2d) main_mp4_pane_g2

0x5e33,	// (0x00063b3b) main_mp4_pane_g3_ParamLimits

0x5e33,	// (0x00063b3b) main_mp4_pane_g3

0x5e86,	// (0x00063b8e) main_mp4_pane_g4_ParamLimits

0x5e86,	// (0x00063b8e) main_mp4_pane_g4

0x5eae,	// (0x00063bb6) main_mp4_pane_g5_ParamLimits

0x5eae,	// (0x00063bb6) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0006d5a2) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0006d5a2) main_mp4_pane_g

0x5efe,	// (0x00063c06) main_mp4_pane_t1_ParamLimits

0x5efe,	// (0x00063c06) main_mp4_pane_t1

0x5f5a,	// (0x00063c62) main_mp4_pane_t2_ParamLimits

0x5f5a,	// (0x00063c62) main_mp4_pane_t2

0xd50b,	// (0x0006b213) main_mp4_pane_t3_ParamLimits

0xd50b,	// (0x0006b213) main_mp4_pane_t3

0x5fac,	// (0x00063cb4) main_mp4_pane_t4_ParamLimits

0x5fac,	// (0x00063cb4) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0006d5af) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0006d5af) main_mp4_pane_t

0x5fec,	// (0x00063cf4) mp4_progress_pane_ParamLimits

0x5fec,	// (0x00063cf4) mp4_progress_pane

0x6036,	// (0x00063d3e) mp4_rocker_pane_ParamLimits

0x6036,	// (0x00063d3e) mp4_rocker_pane

0xd533,	// (0x0006b23b) mp4_progress_pane_t1

0xd54c,	// (0x0006b254) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0006d5b8) mp4_progress_pane_t

0xd565,	// (0x0006b26d) mup_progress_pane_cp04

0xd8fe,	// (0x0006b606) mp4_rocker_pane_g1

0x6058,	// (0x00063d60) aid_cell_size_keypad2_ParamLimits

0x6058,	// (0x00063d60) aid_cell_size_keypad2

0x6068,	// (0x00063d70) dialer2_ne_pane_ParamLimits

0x6068,	// (0x00063d70) dialer2_ne_pane

0x6074,	// (0x00063d7c) grid_dialer2_keypad_pane_ParamLimits

0x6074,	// (0x00063d7c) grid_dialer2_keypad_pane

0xd908,	// (0x0006b610) bg_popup_call_pane_cp07_ParamLimits

0xd908,	// (0x0006b610) bg_popup_call_pane_cp07

0x6082,	// (0x00063d8a) dialer2_ne_pane_t1_ParamLimits

0x6082,	// (0x00063d8a) dialer2_ne_pane_t1

0x60a7,	// (0x00063daf) cell_dialer2_keypad_pane_ParamLimits

0x60a7,	// (0x00063daf) cell_dialer2_keypad_pane

0xd583,	// (0x0006b28b) bg_button_pane_pane_cp04_ParamLimits

0xd583,	// (0x0006b28b) bg_button_pane_pane_cp04

0x60be,	// (0x00063dc6) cell_dialer2_keypad_pane_g1_ParamLimits

0x60be,	// (0x00063dc6) cell_dialer2_keypad_pane_g1

0x2008,	// (0x0005fd10) aid_placing_vt_set_content_ParamLimits

0x2008,	// (0x0005fd10) aid_placing_vt_set_content

0x2030,	// (0x0005fd38) aid_placing_vt_set_title_ParamLimits

0x2030,	// (0x0005fd38) aid_placing_vt_set_title

0x9c6a,	// (0x00067972) main_image3_pane

0x6158,	// (0x00063e60) area_side_right_pane_cp01_ParamLimits

0x6158,	// (0x00063e60) area_side_right_pane_cp01

0x6187,	// (0x00063e8f) main_image3_pane_g1_ParamLimits

0x6187,	// (0x00063e8f) main_image3_pane_g1

0x6195,	// (0x00063e9d) main_image3_pane_g2_ParamLimits

0x6195,	// (0x00063e9d) main_image3_pane_g2

0x61ae,	// (0x00063eb6) main_image3_pane_g3_ParamLimits

0x61ae,	// (0x00063eb6) main_image3_pane_g3

0x61c7,	// (0x00063ecf) main_image3_pane_g4_ParamLimits

0x61c7,	// (0x00063ecf) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0006d5c7) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0006d5c7) main_image3_pane_g

0x61e0,	// (0x00063ee8) main_image3_pane_t1_ParamLimits

0x61e0,	// (0x00063ee8) main_image3_pane_t1

0x6205,	// (0x00063f0d) main_image3_pane_t2_ParamLimits

0x6205,	// (0x00063f0d) main_image3_pane_t2

0x6224,	// (0x00063f2c) main_image3_pane_t3_ParamLimits

0x6224,	// (0x00063f2c) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0006d5d0) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0006d5d0) main_image3_pane_t

0x0e06,	// (0x0005eb0e) grid_sctrl_middle_pane_cp01_ParamLimits

0x0e06,	// (0x0005eb0e) grid_sctrl_middle_pane_cp01

0x6285,	// (0x00063f8d) cell_sctrl_middle_pane_cp01_ParamLimits

0x6285,	// (0x00063f8d) cell_sctrl_middle_pane_cp01

0x6296,	// (0x00063f9e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6296,	// (0x00063f9e) cell_sctrl_middle_pane_cp01_g1

0x9c6a,	// (0x00067972) main_call4_pane

0x62a3,	// (0x00063fab) aid_size_button_call4_ParamLimits

0x62a3,	// (0x00063fab) aid_size_button_call4

0x62d5,	// (0x00063fdd) call4_windows_pane_ParamLimits

0x62d5,	// (0x00063fdd) call4_windows_pane

0x62f1,	// (0x00063ff9) grid_call4_button_pane_ParamLimits

0x62f1,	// (0x00063ff9) grid_call4_button_pane

0xd58f,	// (0x0006b297) call4_windows_conf_pane

0x6315,	// (0x0006401d) popup_call4_audio_first_window_ParamLimits

0x6315,	// (0x0006401d) popup_call4_audio_first_window

0x6341,	// (0x00064049) popup_call4_audio_second_window_ParamLimits

0x6341,	// (0x00064049) popup_call4_audio_second_window

0xd5cc,	// (0x0006b2d4) popup_call4_audio_wait_window_ParamLimits

0xd5cc,	// (0x0006b2d4) popup_call4_audio_wait_window

0x6355,	// (0x0006405d) cell_call4_button_pane_ParamLimits

0x6355,	// (0x0006405d) cell_call4_button_pane

0x6378,	// (0x00064080) bg_button_pane_cp09_ParamLimits

0x6378,	// (0x00064080) bg_button_pane_cp09

0x6384,	// (0x0006408c) cell_call4_button_pane_g1_ParamLimits

0x6384,	// (0x0006408c) cell_call4_button_pane_g1

0x6391,	// (0x00064099) cell_call4_button_pane_t1_ParamLimits

0x6391,	// (0x00064099) cell_call4_button_pane_t1

0xd614,	// (0x0006b31c) popup_call4_audio_conf_window_ParamLimits

0xd614,	// (0x0006b31c) popup_call4_audio_conf_window

0x5604,	// (0x0006330c) mup3_progress_pane_t1_ParamLimits

0x5623,	// (0x0006332b) mup3_progress_pane_t2_ParamLimits

0xcf1e,	// (0x0006ac26) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0006d4a4) mup3_progress_pane_t_ParamLimits

0xcf3b,	// (0x0006ac43) mup_progress_pane_cp03_ParamLimits

0x5b21,	// (0x00063829) mup3_control_keys_pane_g4_copy1

0x601a,	// (0x00063d22) mp4_rocker2_pane_ParamLimits

0x601a,	// (0x00063d22) mp4_rocker2_pane

0xd62e,	// (0x0006b336) mp4_rocker2_pane_g1

0xd636,	// (0x0006b33e) mp4_rocker2_pane_g2

0x63a3,	// (0x000640ab) mp4_rocker2_pane_g3

0x63ab,	// (0x000640b3) mp4_rocker2_pane_g4

0x63b3,	// (0x000640bb) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0006d5d9) mp4_rocker2_pane_g

0x9c6a,	// (0x00067972) main_camera4_pane

0x9c6a,	// (0x00067972) main_video4_pane

0x5d75,	// (0x00063a7d) main_video_tele_dialer_pane_t1_ParamLimits

0x5d75,	// (0x00063a7d) main_video_tele_dialer_pane_t1

0x5d87,	// (0x00063a8f) main_video_tele_dialer_pane_t2_ParamLimits

0x5d87,	// (0x00063a8f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0006d593) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0006d593) main_video_tele_dialer_pane_t

0x63d3,	// (0x000640db) cam4_autofocus_pane_ParamLimits

0x63d3,	// (0x000640db) cam4_autofocus_pane

0x63eb,	// (0x000640f3) cam4_image_uncrop_pane_ParamLimits

0x63eb,	// (0x000640f3) cam4_image_uncrop_pane

0x6404,	// (0x0006410c) cam4_indicators_pane_ParamLimits

0x6404,	// (0x0006410c) cam4_indicators_pane

0x6420,	// (0x00064128) main_camera4_pane_g1_ParamLimits

0x6420,	// (0x00064128) main_camera4_pane_g1

0x642c,	// (0x00064134) main_camera4_pane_g2_ParamLimits

0x642c,	// (0x00064134) main_camera4_pane_g2

0x642c,	// (0x00064134) main_camera4_pane_g3_ParamLimits

0x642c,	// (0x00064134) main_camera4_pane_g3

0x6438,	// (0x00064140) main_camera4_pane_g4_ParamLimits

0x6438,	// (0x00064140) main_camera4_pane_g4

0x6444,	// (0x0006414c) main_camera4_pane_g5_ParamLimits

0x6444,	// (0x0006414c) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0006d5e4) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0006d5e4) main_camera4_pane_g

0x645e,	// (0x00064166) main_camera4_pane_t1_ParamLimits

0x645e,	// (0x00064166) main_camera4_pane_t1

0x64a8,	// (0x000641b0) bg_tb_trans_pane_cp06

0x64be,	// (0x000641c6) cam4_indicators_pane_g1

0x64cf,	// (0x000641d7) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0006d5ff) cam4_indicators_pane_g

0x64e7,	// (0x000641ef) cam4_indicators_pane_t1

0x6511,	// (0x00064219) main_video4_pane_g1_ParamLimits

0x6511,	// (0x00064219) main_video4_pane_g1

0x651d,	// (0x00064225) main_video4_pane_g2_ParamLimits

0x651d,	// (0x00064225) main_video4_pane_g2

0x6529,	// (0x00064231) main_video4_pane_g3_ParamLimits

0x6529,	// (0x00064231) main_video4_pane_g3

0x6535,	// (0x0006423d) main_video4_pane_g4_ParamLimits

0x6535,	// (0x0006423d) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0006d606) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0006d606) main_video4_pane_g

0x6557,	// (0x0006425f) vid4_indicators_pane_ParamLimits

0x6557,	// (0x0006425f) vid4_indicators_pane

0x6576,	// (0x0006427e) video4_image_uncrop_cif_pane_ParamLimits

0x6576,	// (0x0006427e) video4_image_uncrop_cif_pane

0x6585,	// (0x0006428d) video4_image_uncrop_nhd_pane_ParamLimits

0x6585,	// (0x0006428d) video4_image_uncrop_nhd_pane

0x63eb,	// (0x000640f3) video4_image_uncrop_vga_pane_ParamLimits

0x63eb,	// (0x000640f3) video4_image_uncrop_vga_pane

0x6594,	// (0x0006429c) bg_tb_trans_pane_cp07

0x65ac,	// (0x000642b4) vid4_indicators_pane_g1

0x65c2,	// (0x000642ca) vid4_indicators_pane_g2

0x65d6,	// (0x000642de) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0006d611) vid4_indicators_pane_g

0x6607,	// (0x0006430f) vid4_indicators_pane_t1

0x661e,	// (0x00064326) cam4_autofocus_pane_g1

0x6626,	// (0x0006432e) cam4_autofocus_pane_g2

0x662e,	// (0x00064336) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0006d61c) cam4_autofocus_pane_g

0x6636,	// (0x0006433e) cam4_autofocus_pane_g3_copy1

0x5da5,	// (0x00063aad) video_down_pane_cp_t1

0x5db3,	// (0x00063abb) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0006d598) video_down_pane_cp_t

0x0e06,	// (0x0005eb0e) popup_vitu2_window_ParamLimits

0x0e06,	// (0x0005eb0e) popup_vitu2_window

0x663e,	// (0x00064346) aid_size_cell2_itu2_ParamLimits

0x663e,	// (0x00064346) aid_size_cell2_itu2

0x6660,	// (0x00064368) aid_size_cell_itu2_ParamLimits

0x6660,	// (0x00064368) aid_size_cell_itu2

0x66a6,	// (0x000643ae) bg_popup_window_pane_cp09_ParamLimits

0x66a6,	// (0x000643ae) bg_popup_window_pane_cp09

0x66b4,	// (0x000643bc) field_vitu2_entry_pane_ParamLimits

0x66b4,	// (0x000643bc) field_vitu2_entry_pane

0x66d4,	// (0x000643dc) grid_vitu2_function_pane_ParamLimits

0x66d4,	// (0x000643dc) grid_vitu2_function_pane

0x6718,	// (0x00064420) grid_vitu2_itu_pane_ParamLimits

0x6718,	// (0x00064420) grid_vitu2_itu_pane

0x678c,	// (0x00064494) cell_vitu2_itu_pane_ParamLimits

0x678c,	// (0x00064494) cell_vitu2_itu_pane

0x67a3,	// (0x000644ab) cell_vitu2_function_pane_ParamLimits

0x67a3,	// (0x000644ab) cell_vitu2_function_pane

0xd63e,	// (0x0006b346) bg_popup_call_pane_cp08_ParamLimits

0xd63e,	// (0x0006b346) bg_popup_call_pane_cp08

0xd655,	// (0x0006b35d) field_vitu2_entry_pane_g1

0xd661,	// (0x0006b369) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0006d623) field_vitu2_entry_pane_g

0x67e7,	// (0x000644ef) field_vitu2_entry_pane_t1_ParamLimits

0x67e7,	// (0x000644ef) field_vitu2_entry_pane_t1

0xa351,	// (0x00068059) field_vitu2_entry_pane_t2_ParamLimits

0xa351,	// (0x00068059) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0006d62a) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0006d62a) field_vitu2_entry_pane_t

0x6812,	// (0x0006451a) bg_button_pane_cp010_ParamLimits

0x6812,	// (0x0006451a) bg_button_pane_cp010

0x6820,	// (0x00064528) cell_vitu2_itu_pane_g1

0x6849,	// (0x00064551) cell_vitu2_itu_pane_t1_ParamLimits

0x6849,	// (0x00064551) cell_vitu2_itu_pane_t1

0x0acd,	// (0x0005e7d5) cell_vitu2_itu_pane_t2_ParamLimits

0x0acd,	// (0x0005e7d5) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0006d634) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0006d634) cell_vitu2_itu_pane_t

0x6594,	// (0x0006429c) bg_button_pane_cp011

0x6895,	// (0x0006459d) cell_vitu2_function_pane_g1

0x9c6a,	// (0x00067972) main_myfav_hc_pane

0x6266,	// (0x00063f6e) popup_image3_note_pane_ParamLimits

0x6266,	// (0x00063f6e) popup_image3_note_pane

0x6274,	// (0x00063f7c) popup_image3_tool_bar_pane_ParamLimits

0x6274,	// (0x00063f7c) popup_image3_tool_bar_pane

0x0b3b,	// (0x0005e843) cell_vitu2_itu_pane_t3_ParamLimits

0x0b3b,	// (0x0005e843) cell_vitu2_itu_pane_t3

0x9c6a,	// (0x00067972) bg_popup_trans_pane

0xd683,	// (0x0006b38b) grid_image3_tool_bar_pane

0xd68d,	// (0x0006b395) bg_popup_trans_pane_g1

0xacdd,	// (0x000689e5) bg_popup_trans_pane_g2

0xd695,	// (0x0006b39d) bg_popup_trans_pane_g3

0xd69d,	// (0x0006b3a5) bg_popup_trans_pane_g4

0xd6a5,	// (0x0006b3ad) bg_popup_trans_pane_g5

0xd6ad,	// (0x0006b3b5) bg_popup_trans_pane_g6

0xd6b5,	// (0x0006b3bd) bg_popup_trans_pane_g7

0xd6bd,	// (0x0006b3c5) bg_popup_trans_pane_g8

0xacbd,	// (0x000689c5) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0006d63b) bg_popup_trans_pane_g

0xd6c5,	// (0x0006b3cd) cell_image3_tool_bar_pane_ParamLimits

0xd6c5,	// (0x0006b3cd) cell_image3_tool_bar_pane

0xcc73,	// (0x0006a97b) cell_image3_tool_bar_pane_g1

0x9c6a,	// (0x00067972) bg_popup_trans_pane_cp1

0xd6db,	// (0x0006b3e3) popup_image3_note_pane_t1

0xd6e9,	// (0x0006b3f1) popup_image3_note_pane_t2

0xd6f7,	// (0x0006b3ff) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0006d64e) popup_image3_note_pane_t

0xd707,	// (0x0006b40f) popup_image3_note_pane_t3_copy1

0x68a9,	// (0x000645b1) bg_myfav_hc_instruction_pane_ParamLimits

0x68a9,	// (0x000645b1) bg_myfav_hc_instruction_pane

0x68c1,	// (0x000645c9) cell_myfav_contact_pane_ParamLimits

0x68c1,	// (0x000645c9) cell_myfav_contact_pane

0x68db,	// (0x000645e3) cell_myfav_contact_pane_cp1_ParamLimits

0x68db,	// (0x000645e3) cell_myfav_contact_pane_cp1

0x68f3,	// (0x000645fb) cell_myfav_contact_pane_cp2_ParamLimits

0x68f3,	// (0x000645fb) cell_myfav_contact_pane_cp2

0x690b,	// (0x00064613) cell_myfav_contact_pane_cp3_ParamLimits

0x690b,	// (0x00064613) cell_myfav_contact_pane_cp3

0x6922,	// (0x0006462a) cell_myfav_contact_pane_cp4_ParamLimits

0x6922,	// (0x0006462a) cell_myfav_contact_pane_cp4

0x6938,	// (0x00064640) cell_myfav_contact_pane_cp5_ParamLimits

0x6938,	// (0x00064640) cell_myfav_contact_pane_cp5

0x694c,	// (0x00064654) cell_myfav_contact_pane_cp6_ParamLimits

0x694c,	// (0x00064654) cell_myfav_contact_pane_cp6

0x6960,	// (0x00064668) cell_myfav_contact_pane_cp7_ParamLimits

0x6960,	// (0x00064668) cell_myfav_contact_pane_cp7

0xd715,	// (0x0006b41d) listscroll_gen_pane_cp05

0x6978,	// (0x00064680) main_myfav_hc_pane_g1_ParamLimits

0x6978,	// (0x00064680) main_myfav_hc_pane_g1

0x6992,	// (0x0006469a) main_myfav_hc_pane_g2_ParamLimits

0x6992,	// (0x0006469a) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0006d655) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0006d655) main_myfav_hc_pane_g

0x69c4,	// (0x000646cc) main_myfav_hc_pane_t1_ParamLimits

0x69c4,	// (0x000646cc) main_myfav_hc_pane_t1

0xd71e,	// (0x0006b426) main_myfav_hc_pane_t2_ParamLimits

0xd71e,	// (0x0006b426) main_myfav_hc_pane_t2

0xd730,	// (0x0006b438) main_myfav_hc_pane_t3_ParamLimits

0xd730,	// (0x0006b438) main_myfav_hc_pane_t3

0x69db,	// (0x000646e3) main_myfav_hc_pane_t4_ParamLimits

0x69db,	// (0x000646e3) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0006d65c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0006d65c) main_myfav_hc_pane_t

0xcc73,	// (0x0006a97b) bg_myfav_hc_instruction_pane_g1

0xd742,	// (0x0006b44a) cell_myfav_contact_pane_g1_ParamLimits

0xd742,	// (0x0006b44a) cell_myfav_contact_pane_g1

0xd742,	// (0x0006b44a) cell_myfav_contact_pane_g2_ParamLimits

0xd742,	// (0x0006b44a) cell_myfav_contact_pane_g2

0xd74e,	// (0x0006b456) cell_myfav_contact_pane_g3_ParamLimits

0xd74e,	// (0x0006b456) cell_myfav_contact_pane_g3

0xcf08,	// (0x0006ac10) cell_myfav_contact_pane_g4_ParamLimits

0xcf08,	// (0x0006ac10) cell_myfav_contact_pane_g4

0xd75b,	// (0x0006b463) cell_myfav_contact_pane_g5_ParamLimits

0xd75b,	// (0x0006b463) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0006d667) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0006d667) cell_myfav_contact_pane_g

0x69ac,	// (0x000646b4) main_myfav_hc_pane_g3_ParamLimits

0x69ac,	// (0x000646b4) main_myfav_hc_pane_g3

0x0d18,	// (0x0005ea20) popup_adpt_find_window

0x6a05,	// (0x0006470d) afind_page_pane_ParamLimits

0x6a05,	// (0x0006470d) afind_page_pane

0x6a12,	// (0x0006471a) aid_size_cell_afind_ParamLimits

0x6a12,	// (0x0006471a) aid_size_cell_afind

0x6a2c,	// (0x00064734) bg_popup_sub_pane_cp09_ParamLimits

0x6a2c,	// (0x00064734) bg_popup_sub_pane_cp09

0x6a39,	// (0x00064741) find_pane_cp01_ParamLimits

0x6a39,	// (0x00064741) find_pane_cp01

0xd767,	// (0x0006b46f) grid_afind_control_pane_ParamLimits

0xd767,	// (0x0006b46f) grid_afind_control_pane

0x6a46,	// (0x0006474e) grid_afind_pane_ParamLimits

0x6a46,	// (0x0006474e) grid_afind_pane

0x6a62,	// (0x0006476a) cell_afind_pane_ParamLimits

0x6a62,	// (0x0006476a) cell_afind_pane

0xcc73,	// (0x0006a97b) afind_page_pane_g1

0x6aae,	// (0x000647b6) afind_page_pane_g2

0x6ab7,	// (0x000647bf) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0006d672) afind_page_pane_g

0x6ac0,	// (0x000647c8) afind_page_pane_t1

0xd77b,	// (0x0006b483) cell_afind_grid_control_pane_ParamLimits

0xd77b,	// (0x0006b483) cell_afind_grid_control_pane

0xd583,	// (0x0006b28b) bg_button_pane_cp69_ParamLimits

0xd583,	// (0x0006b28b) bg_button_pane_cp69

0x6ae0,	// (0x000647e8) cell_afind_pane_g1_ParamLimits

0x6ae0,	// (0x000647e8) cell_afind_pane_g1

0x6aed,	// (0x000647f5) cell_afind_pane_t1_ParamLimits

0x6aed,	// (0x000647f5) cell_afind_pane_t1

0xaad2,	// (0x000687da) bg_button_pane_cp72

0xd78a,	// (0x0006b492) cell_afind_grid_control_pane_g1

0x4027,	// (0x00061d2f) aid_image_placing_area_ParamLimits

0x4027,	// (0x00061d2f) aid_image_placing_area

0xd243,	// (0x0006af4b) field_vitu_entry_pane_g1_ParamLimits

0xd243,	// (0x0006af4b) field_vitu_entry_pane_g1

0xd24f,	// (0x0006af57) field_vitu_entry_pane_g2_ParamLimits

0xd24f,	// (0x0006af57) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0006d523) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0006d523) field_vitu_entry_pane_g

0x5bab,	// (0x000638b3) cell_vitu_itu_pane_g1_ParamLimits

0x5bfb,	// (0x00063903) cell_vitu_itu_pane_t3_ParamLimits

0x5bfb,	// (0x00063903) cell_vitu_itu_pane_t3

0xd533,	// (0x0006b23b) mp4_progress_pane_t1_ParamLimits

0xd54c,	// (0x0006b254) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0006d5b8) mp4_progress_pane_t_ParamLimits

0xd565,	// (0x0006b26d) mup_progress_pane_cp04_ParamLimits

0x69ef,	// (0x000646f7) main_myfav_hc_pane_t5_ParamLimits

0x69ef,	// (0x000646f7) main_myfav_hc_pane_t5

0x9c88,	// (0x00067990) aid_zoom_text_primary

0x0d18,	// (0x0005ea20) popup_adpt_find_window_ParamLimits

0xa337,	// (0x0006803f) main_cam_set_pane

0x6412,	// (0x0006411a) cam4_zoom_pane_ParamLimits

0x6412,	// (0x0006411a) cam4_zoom_pane

0x6aff,	// (0x00064807) main_cam_set_pane_g1_ParamLimits

0x6aff,	// (0x00064807) main_cam_set_pane_g1

0x6b0d,	// (0x00064815) main_cam_set_pane_g2_ParamLimits

0x6b0d,	// (0x00064815) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0006d679) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0006d679) main_cam_set_pane_g

0x6b19,	// (0x00064821) main_cam_set_pane_t1_ParamLimits

0x6b19,	// (0x00064821) main_cam_set_pane_t1

0x6b35,	// (0x0006483d) main_cset_listscroll_pane_ParamLimits

0x6b35,	// (0x0006483d) main_cset_listscroll_pane

0x6b64,	// (0x0006486c) main_cset_slider_pane_ParamLimits

0x6b64,	// (0x0006486c) main_cset_slider_pane

0xd79b,	// (0x0006b4a3) main_cset_list_pane_ParamLimits

0xd79b,	// (0x0006b4a3) main_cset_list_pane

0xd7ab,	// (0x0006b4b3) scroll_pane_cp028

0x6b85,	// (0x0006488d) aid_area_touch_slider

0x6ba1,	// (0x000648a9) cset_slider_pane

0x6bcb,	// (0x000648d3) main_cset_slider_pane_g1

0x6be0,	// (0x000648e8) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0006d67e) main_cset_slider_pane_g

0xd7e4,	// (0x0006b4ec) main_cset_slider_pane_t1

0x6c9c,	// (0x000649a4) main_cset_slider_pane_t2

0x6cb6,	// (0x000649be) main_cset_slider_pane_t3

0x6cd0,	// (0x000649d8) main_cset_slider_pane_t4

0x6cea,	// (0x000649f2) main_cset_slider_pane_t5

0x6d04,	// (0x00064a0c) main_cset_slider_pane_t6

0x6d19,	// (0x00064a21) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0006d6a3) main_cset_slider_pane_t

0x6e1d,	// (0x00064b25) cset_list_set_pane_ParamLimits

0x6e1d,	// (0x00064b25) cset_list_set_pane

0x6e2e,	// (0x00064b36) aid_position_infowindow_above

0x6e36,	// (0x00064b3e) aid_position_infowindow_below

0x6e3e,	// (0x00064b46) cset_list_set_pane_g1_ParamLimits

0x6e3e,	// (0x00064b46) cset_list_set_pane_g1

0x6e4a,	// (0x00064b52) cset_list_set_pane_g3_ParamLimits

0x6e4a,	// (0x00064b52) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0006d6c2) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0006d6c2) cset_list_set_pane_g

0x6e59,	// (0x00064b61) cset_list_set_pane_t1_ParamLimits

0x6e59,	// (0x00064b61) cset_list_set_pane_t1

0xa337,	// (0x0006803f) list_highlight_pane_cp021_ParamLimits

0xa337,	// (0x0006803f) list_highlight_pane_cp021

0xb531,	// (0x00069239) cset_slider_pane_g1

0xb543,	// (0x0006924b) cset_slider_pane_g2

0xb53a,	// (0x00069242) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0006d6c7) cset_slider_pane_g

0x6e6e,	// (0x00064b76) aid_area_touch_cam4_zoom

0x6e76,	// (0x00064b7e) cam4_zoom_cont_pane

0x6e7e,	// (0x00064b86) cam4_zoom_pane_g1

0x6e86,	// (0x00064b8e) cam4_zoom_pane_g2

0x6e8e,	// (0x00064b96) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0006d6ce) cam4_zoom_pane_g

0x6e96,	// (0x00064b9e) cam4_zoom_cont_pane_g1

0x6e9f,	// (0x00064ba7) cam4_zoom_cont_pane_g2

0x6ea8,	// (0x00064bb0) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0006d6d5) cam4_zoom_cont_pane_g

0x62bd,	// (0x00063fc5) call4_image_pane_ParamLimits

0x62bd,	// (0x00063fc5) call4_image_pane

0xd58f,	// (0x0006b297) call4_windows_conf_pane_ParamLimits

0xd5aa,	// (0x0006b2b2) popup_call4_audio_in_window_ParamLimits

0xd5aa,	// (0x0006b2b2) popup_call4_audio_in_window

0x9c6a,	// (0x00067972) bg_popup_call2_act_pane_cp02

0xd60c,	// (0x0006b314) call4_list_conf_pane

0xcc73,	// (0x0006a97b) call4_image_pane_g1

0xcc73,	// (0x0006a97b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0006d3e4) call4_image_pane_g

0xd884,	// (0x0006b58c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd884,	// (0x0006b58c) list_single_graphic_popup_conf4_pane

0x9c6a,	// (0x00067972) list_highlight_pane_cp022

0xd899,	// (0x0006b5a1) list_single_graphic_popup_conf4_pane_g1

0xb22b,	// (0x00068f33) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0006d6dc) list_single_graphic_popup_conf4_pane_g

0xd8a1,	// (0x0006b5a9) list_single_graphic_popup_conf4_pane_t1

0x218a,	// (0x0005fe92) popup_vtel_slider_window_ParamLimits

0x218a,	// (0x0005fe92) popup_vtel_slider_window

0xd571,	// (0x0006b279) dialer2_ne_pane_t2_ParamLimits

0xd571,	// (0x0006b279) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0006d5bd) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0006d5bd) dialer2_ne_pane_t

0xa337,	// (0x0006803f) bg_popup_sub_pane_cp010_ParamLimits

0xa337,	// (0x0006803f) bg_popup_sub_pane_cp010

0x6eb1,	// (0x00064bb9) popup_vtel_slider_window_g1_ParamLimits

0x6eb1,	// (0x00064bb9) popup_vtel_slider_window_g1

0x6ebd,	// (0x00064bc5) popup_vtel_slider_window_g2_ParamLimits

0x6ebd,	// (0x00064bc5) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0006d6e1) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0006d6e1) popup_vtel_slider_window_g

0x6f05,	// (0x00064c0d) vtel_slider_pane_ParamLimits

0x6f05,	// (0x00064c0d) vtel_slider_pane

0x6f14,	// (0x00064c1c) vtel_slider_pane_g1_ParamLimits

0x6f14,	// (0x00064c1c) vtel_slider_pane_g1

0x6f21,	// (0x00064c29) vtel_slider_pane_g2_ParamLimits

0x6f21,	// (0x00064c29) vtel_slider_pane_g2

0x6f2e,	// (0x00064c36) vtel_slider_pane_g3_ParamLimits

0x6f2e,	// (0x00064c36) vtel_slider_pane_g3

0x6f14,	// (0x00064c1c) vtel_slider_pane_g4_ParamLimits

0x6f14,	// (0x00064c1c) vtel_slider_pane_g4

0x6f3b,	// (0x00064c43) vtel_slider_pane_g5_ParamLimits

0x6f3b,	// (0x00064c43) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0006d6ea) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0006d6ea) vtel_slider_pane_g

0xa337,	// (0x0006803f) main_gallery2_pane

0x6686,	// (0x0006438e) aid_size_row_itut2_dropdow_list_ParamLimits

0x6686,	// (0x0006438e) aid_size_row_itut2_dropdow_list

0x66f6,	// (0x000643fe) grid_vitu2_function_top_pane_ParamLimits

0x66f6,	// (0x000643fe) grid_vitu2_function_top_pane

0x6748,	// (0x00064450) popup_vitu2_dropdown_list_window_ParamLimits

0x6748,	// (0x00064450) popup_vitu2_dropdown_list_window

0x6768,	// (0x00064470) popup_vitu2_match_list_window

0x6f56,	// (0x00064c5e) cell_vitu2_function_top_pane_ParamLimits

0x6f56,	// (0x00064c5e) cell_vitu2_function_top_pane

0x6f76,	// (0x00064c7e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f76,	// (0x00064c7e) cell_vitu2_function_top_pane_cp01

0x6f94,	// (0x00064c9c) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f94,	// (0x00064c9c) cell_vitu2_function_top_wide_pane

0x6594,	// (0x0006429c) bg_button_pane_cp012

0x6fb2,	// (0x00064cba) cell_vitu2_function_top_pane_g1

0x6fc5,	// (0x00064ccd) bg_button_pane_cp013_ParamLimits

0x6fc5,	// (0x00064ccd) bg_button_pane_cp013

0x6fe1,	// (0x00064ce9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fe1,	// (0x00064ce9) cell_vitu2_function_top_wide_pane_g1

0x6ff9,	// (0x00064d01) bg_popup_sub_pane_cp20

0x7007,	// (0x00064d0f) list_vitu2_match_list_pane

0xd68d,	// (0x0006b395) bg_popup_sub_pane_cp20_g1

0xd695,	// (0x0006b39d) bg_popup_sub_pane_cp20_g2

0xacdd,	// (0x000689e5) bg_popup_sub_pane_cp20_g3

0xd69d,	// (0x0006b3a5) bg_popup_sub_pane_cp20_g4

0xacbd,	// (0x000689c5) bg_popup_sub_pane_cp20_g5

0xd8b7,	// (0x0006b5bf) bg_popup_sub_pane_cp20_g6

0xd6ad,	// (0x0006b3b5) bg_popup_sub_pane_cp20_g7

0xd6b5,	// (0x0006b3bd) bg_popup_sub_pane_cp20_g8

0xd6bd,	// (0x0006b3c5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0006d6f5) bg_popup_sub_pane_cp20_g

0x701f,	// (0x00064d27) list_vitu2_match_list_item_pane_ParamLimits

0x701f,	// (0x00064d27) list_vitu2_match_list_item_pane

0x7031,	// (0x00064d39) list_vitu2_match_list_item_pane_t1

0x1172,	// (0x0005ee7a) bg_popup_sub_pane_cp21

0x7083,	// (0x00064d8b) grid_vitu2_dropdown_list_pane

0x708b,	// (0x00064d93) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x708b,	// (0x00064d93) cell_vitu2_dropdown_list_char_pane

0x70b0,	// (0x00064db8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70b0,	// (0x00064db8) cell_vitu2_dropdown_list_ctrl_pane

0xd916,	// (0x0006b61e) cell_vitu2_dropdown_list_char_pane_g1

0xd91f,	// (0x0006b627) cell_vitu2_dropdown_list_char_pane_g2

0xd8bf,	// (0x0006b5c7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0006d712) cell_vitu2_dropdown_list_char_pane_g

0x70de,	// (0x00064de6) cell_vitu2_dropdown_list_char_pane_t1

0x70ec,	// (0x00064df4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70ec,	// (0x00064df4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70fc,	// (0x00064e04) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70fc,	// (0x00064e04) cell_vitu2_dropdown_list_ctrl_pane_g2

0x710d,	// (0x00064e15) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x710d,	// (0x00064e15) cell_vitu2_dropdown_list_ctrl_pane_g3

0x711d,	// (0x00064e25) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x711d,	// (0x00064e25) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64a8,	// (0x000641b0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64a8,	// (0x000641b0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0006d719) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0006d719) cell_vitu2_dropdown_list_ctrl_pane_g

0x7136,	// (0x00064e3e) aid_size_cell_gallery2_ParamLimits

0x7136,	// (0x00064e3e) aid_size_cell_gallery2

0x7150,	// (0x00064e58) grid_gallery2_pane_ParamLimits

0x7150,	// (0x00064e58) grid_gallery2_pane

0x5a30,	// (0x00063738) scroll_pane_cp029_ParamLimits

0x5a30,	// (0x00063738) scroll_pane_cp029

0x7167,	// (0x00064e6f) cell_gallery2_pane_ParamLimits

0x7167,	// (0x00064e6f) cell_gallery2_pane

0xd928,	// (0x0006b630) cell_gallery2_pane_g2

0x71b3,	// (0x00064ebb) cell_gallery2_pane_g3

0xd930,	// (0x0006b638) cell_gallery2_pane_g4

0xd938,	// (0x0006b640) cell_gallery2_pane_g5

0xb3f9,	// (0x00069101) grid_highlight_pane_cp10

0x6768,	// (0x00064470) popup_vitu2_match_list_window_ParamLimits

0x677c,	// (0x00064484) popup_vitu2_query_window_ParamLimits

0x677c,	// (0x00064484) popup_vitu2_query_window

0x1172,	// (0x0005ee7a) bg_vitu2_candi_button_pane

0xd916,	// (0x0006b61e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91f,	// (0x0006b627) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8bf,	// (0x0006b5c7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71bb,	// (0x00064ec3) bg_button_pane_cp015

0x71cd,	// (0x00064ed5) bg_button_pane_cp016

0x71e0,	// (0x00064ee8) bg_button_pane_cp017

0xc822,	// (0x0006a52a) bg_popup_sub_pane_cp22

0xd940,	// (0x0006b648) popup_vitu2_query_window_g1

0x7225,	// (0x00064f2d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0006d724) popup_vitu2_query_window_g

0x7242,	// (0x00064f4a) popup_vitu2_query_window_t1_ParamLimits

0x7242,	// (0x00064f4a) popup_vitu2_query_window_t1

0x7275,	// (0x00064f7d) popup_vitu2_query_window_t2_ParamLimits

0x7275,	// (0x00064f7d) popup_vitu2_query_window_t2

0x7287,	// (0x00064f8f) popup_vitu2_query_window_t3_ParamLimits

0x7287,	// (0x00064f8f) popup_vitu2_query_window_t3

0x72af,	// (0x00064fb7) popup_vitu2_query_window_t4_ParamLimits

0x72af,	// (0x00064fb7) popup_vitu2_query_window_t4

0x72d2,	// (0x00064fda) popup_vitu2_query_window_t5_ParamLimits

0x72d2,	// (0x00064fda) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0006d72b) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0006d72b) popup_vitu2_query_window_t

0xd793,	// (0x0006b49b) main_cset_text_pane

0x6b85,	// (0x0006488d) aid_area_touch_slider_ParamLimits

0x6ba1,	// (0x000648a9) cset_slider_pane_ParamLimits

0x6bcb,	// (0x000648d3) main_cset_slider_pane_g1_ParamLimits

0x6be0,	// (0x000648e8) main_cset_slider_pane_g2_ParamLimits

0xd7b4,	// (0x0006b4bc) main_cset_slider_pane_g3_ParamLimits

0xd7b4,	// (0x0006b4bc) main_cset_slider_pane_g3

0x6bf5,	// (0x000648fd) main_cset_slider_pane_g4_ParamLimits

0x6bf5,	// (0x000648fd) main_cset_slider_pane_g4

0x6c04,	// (0x0006490c) main_cset_slider_pane_g5_ParamLimits

0x6c04,	// (0x0006490c) main_cset_slider_pane_g5

0x6c10,	// (0x00064918) main_cset_slider_pane_g6_ParamLimits

0x6c10,	// (0x00064918) main_cset_slider_pane_g6

0xf976,	// (0x0006d67e) main_cset_slider_pane_g_ParamLimits

0xd7e4,	// (0x0006b4ec) main_cset_slider_pane_t1_ParamLimits

0x6c9c,	// (0x000649a4) main_cset_slider_pane_t2_ParamLimits

0x6cb6,	// (0x000649be) main_cset_slider_pane_t3_ParamLimits

0x6cd0,	// (0x000649d8) main_cset_slider_pane_t4_ParamLimits

0x6cea,	// (0x000649f2) main_cset_slider_pane_t5_ParamLimits

0x6d04,	// (0x00064a0c) main_cset_slider_pane_t6_ParamLimits

0x6d19,	// (0x00064a21) main_cset_slider_pane_t7_ParamLimits

0x6d43,	// (0x00064a4b) main_cset_slider_pane_t8_ParamLimits

0x6d43,	// (0x00064a4b) main_cset_slider_pane_t8

0x6d6b,	// (0x00064a73) main_cset_slider_pane_t9_ParamLimits

0x6d6b,	// (0x00064a73) main_cset_slider_pane_t9

0x6d93,	// (0x00064a9b) main_cset_slider_pane_t10_ParamLimits

0x6d93,	// (0x00064a9b) main_cset_slider_pane_t10

0x6dbb,	// (0x00064ac3) main_cset_slider_pane_t11_ParamLimits

0x6dbb,	// (0x00064ac3) main_cset_slider_pane_t11

0x6de3,	// (0x00064aeb) main_cset_slider_pane_t12_ParamLimits

0x6de3,	// (0x00064aeb) main_cset_slider_pane_t12

0x6e00,	// (0x00064b08) main_cset_slider_pane_t13_ParamLimits

0x6e00,	// (0x00064b08) main_cset_slider_pane_t13

0xf99b,	// (0x0006d6a3) main_cset_slider_pane_t_ParamLimits

0x9c6a,	// (0x00067972) bg_popup_sub_pane_cp011

0xd94c,	// (0x0006b654) main_cset_text_pane_g1

0xd954,	// (0x0006b65c) main_cset_text_pane_t1

0xd962,	// (0x0006b66a) main_cset_text_pane_t2

0xd970,	// (0x0006b678) main_cset_text_pane_t3

0xd97e,	// (0x0006b686) main_cset_text_pane_t4

0xd98c,	// (0x0006b694) main_cset_text_pane_t5

0xd99a,	// (0x0006b6a2) main_cset_text_pane_t6

0xd9a8,	// (0x0006b6b0) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0006d73a) main_cset_text_pane_t

0x9c6a,	// (0x00067972) main_cam4_burst_pane

0x9c6a,	// (0x00067972) main_cam5_pane

0x6ace,	// (0x000647d6) bg_button_pane_cp019

0x6ad7,	// (0x000647df) bg_button_pane_cp020

0xd7c0,	// (0x0006b4c8) main_cset_slider_pane_g7_ParamLimits

0xd7c0,	// (0x0006b4c8) main_cset_slider_pane_g7

0xd7cc,	// (0x0006b4d4) main_cset_slider_pane_g8_ParamLimits

0xd7cc,	// (0x0006b4d4) main_cset_slider_pane_g8

0x6c24,	// (0x0006492c) main_cset_slider_pane_g9_ParamLimits

0x6c24,	// (0x0006492c) main_cset_slider_pane_g9

0x6c30,	// (0x00064938) main_cset_slider_pane_g10_ParamLimits

0x6c30,	// (0x00064938) main_cset_slider_pane_g10

0x6c3c,	// (0x00064944) main_cset_slider_pane_g11_ParamLimits

0x6c3c,	// (0x00064944) main_cset_slider_pane_g11

0x6c48,	// (0x00064950) main_cset_slider_pane_g12_ParamLimits

0x6c48,	// (0x00064950) main_cset_slider_pane_g12

0x6c54,	// (0x0006495c) main_cset_slider_pane_g13_ParamLimits

0x6c54,	// (0x0006495c) main_cset_slider_pane_g13

0x6c60,	// (0x00064968) main_cset_slider_pane_g14_ParamLimits

0x6c60,	// (0x00064968) main_cset_slider_pane_g14

0x6c6c,	// (0x00064974) main_cset_slider_pane_g15_ParamLimits

0x6c6c,	// (0x00064974) main_cset_slider_pane_g15

0xd812,	// (0x0006b51a) main_cset_slider_pane_t14_ParamLimits

0xd812,	// (0x0006b51a) main_cset_slider_pane_t14

0xd84b,	// (0x0006b553) main_cset_slider_pane_t15_ParamLimits

0xd84b,	// (0x0006b553) main_cset_slider_pane_t15

0x734b,	// (0x00065053) aid_cam4_burst_size_cell_ParamLimits

0x734b,	// (0x00065053) aid_cam4_burst_size_cell

0x7367,	// (0x0006506f) grid_cam4_burst_pane_ParamLimits

0x7367,	// (0x0006506f) grid_cam4_burst_pane

0x7399,	// (0x000650a1) linegrid_cam4_burst_pane_ParamLimits

0x7399,	// (0x000650a1) linegrid_cam4_burst_pane

0x73b7,	// (0x000650bf) scroll_pane_cp30_ParamLimits

0x73b7,	// (0x000650bf) scroll_pane_cp30

0x73c3,	// (0x000650cb) cell_cam4_burst_pane_ParamLimits

0x73c3,	// (0x000650cb) cell_cam4_burst_pane

0xd9b6,	// (0x0006b6be) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9b6,	// (0x0006b6be) linegrid_cam4_burst_pane_g1

0x7403,	// (0x0006510b) linegrid_cam4_burst_pane_g2_ParamLimits

0x7403,	// (0x0006510b) linegrid_cam4_burst_pane_g2

0xd9c3,	// (0x0006b6cb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9c3,	// (0x0006b6cb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0006d749) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0006d749) linegrid_cam4_burst_pane_g

0x7414,	// (0x0006511c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7414,	// (0x0006511c) linegrid_cam4_burst_pane_g3_copy1

0xd9d0,	// (0x0006b6d8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9d0,	// (0x0006b6d8) linegrid_cam4_burst_pane_g4

0x742e,	// (0x00065136) linegrid_cam4_burst_pane_g5_ParamLimits

0x742e,	// (0x00065136) linegrid_cam4_burst_pane_g5

0x743f,	// (0x00065147) linegrid_cam4_burst_pane_g6_ParamLimits

0x743f,	// (0x00065147) linegrid_cam4_burst_pane_g6

0xd9dd,	// (0x0006b6e5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9dd,	// (0x0006b6e5) linegrid_cam4_burst_pane_g7

0x7456,	// (0x0006515e) cell_cam4_burst_pane_g1

0xd9f6,	// (0x0006b6fe) main_cam5_pane_t1_ParamLimits

0xd9f6,	// (0x0006b6fe) main_cam5_pane_t1

0xda08,	// (0x0006b710) main_cam5_pane_t2_ParamLimits

0xda08,	// (0x0006b710) main_cam5_pane_t2

0xda1a,	// (0x0006b722) main_cam5_pane_t3_ParamLimits

0xda1a,	// (0x0006b722) main_cam5_pane_t3

0xda2c,	// (0x0006b734) main_cam5_pane_t4_ParamLimits

0xda2c,	// (0x0006b734) main_cam5_pane_t4

0xda44,	// (0x0006b74c) main_cam5_pane_t5_ParamLimits

0xda44,	// (0x0006b74c) main_cam5_pane_t5

0xda58,	// (0x0006b760) main_cam5_pane_t6_ParamLimits

0xda58,	// (0x0006b760) main_cam5_pane_t6

0xda6c,	// (0x0006b774) main_cam5_pane_t7_ParamLimits

0xda6c,	// (0x0006b774) main_cam5_pane_t7

0xda7e,	// (0x0006b786) main_cam5_pane_t8_ParamLimits

0xda7e,	// (0x0006b786) main_cam5_pane_t8

0xda9c,	// (0x0006b7a4) main_cam5_pane_t9_ParamLimits

0xda9c,	// (0x0006b7a4) main_cam5_pane_t9

0xdaae,	// (0x0006b7b6) main_cam5_pane_t10_ParamLimits

0xdaae,	// (0x0006b7b6) main_cam5_pane_t10

0xdac0,	// (0x0006b7c8) main_cam5_pane_t11_ParamLimits

0xdac0,	// (0x0006b7c8) main_cam5_pane_t11

0xdad4,	// (0x0006b7dc) main_cam5_pane_t12_ParamLimits

0xdad4,	// (0x0006b7dc) main_cam5_pane_t12

0xdaeb,	// (0x0006b7f3) main_cam5_pane_t13_ParamLimits

0xdaeb,	// (0x0006b7f3) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0006d755) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0006d755) main_cam5_pane_t

0x0dc5,	// (0x0005eacd) popup_scut_keymap_window_ParamLimits

0x0dc5,	// (0x0005eacd) popup_scut_keymap_window

0x7469,	// (0x00065171) aid_size_cell_brow_shortcut

0xb3f9,	// (0x00069101) bg_popup_window_pane_cp010

0x7475,	// (0x0006517d) grid_scut_pane

0x7481,	// (0x00065189) cell_scut_pane_ParamLimits

0x7481,	// (0x00065189) cell_scut_pane

0x749c,	// (0x000651a4) cell_scut_pane_g1

0xdb0e,	// (0x0006b816) cell_scut_pane_t1

0xdb1d,	// (0x0006b825) cell_scut_pane_t2

0x74a5,	// (0x000651ad) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0006d770) cell_scut_pane_t

0x5225,	// (0x00062f2d) main_mup3_pane_g8_ParamLimits

0x5225,	// (0x00062f2d) main_mup3_pane_g8

0x6696,	// (0x0006439e) area_vitu2_query_pane_ParamLimits

0x6696,	// (0x0006439e) area_vitu2_query_pane

0x71f3,	// (0x00064efb) input_focus_pane_cp08

0xdb2c,	// (0x0006b834) area_vitu2_query_pane_g1

0x74b3,	// (0x000651bb) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0006d777) area_vitu2_query_pane_g

0x74c4,	// (0x000651cc) area_vitu2_query_pane_t1_ParamLimits

0x74c4,	// (0x000651cc) area_vitu2_query_pane_t1

0x74d8,	// (0x000651e0) area_vitu2_query_pane_t2_ParamLimits

0x74d8,	// (0x000651e0) area_vitu2_query_pane_t2

0x74ec,	// (0x000651f4) area_vitu2_query_pane_t3_ParamLimits

0x74ec,	// (0x000651f4) area_vitu2_query_pane_t3

0xa36e,	// (0x00068076) area_vitu2_query_pane_t4_ParamLimits

0xa36e,	// (0x00068076) area_vitu2_query_pane_t4

0xa396,	// (0x0006809e) area_vitu2_query_pane_t5_ParamLimits

0xa396,	// (0x0006809e) area_vitu2_query_pane_t5

0xa3be,	// (0x000680c6) area_vitu2_query_pane_t6_ParamLimits

0xa3be,	// (0x000680c6) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0006d77c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0006d77c) area_vitu2_query_pane_t

0x7514,	// (0x0006521c) bg_button_pane_cp018

0x7522,	// (0x0006522a) bg_button_pane_cp021

0x752e,	// (0x00065236) bg_button_pane_cp022

0x753f,	// (0x00065247) input_focus_pane_cp09

0x3637,	// (0x0006133f) aid_size_touch_mv_arrow_left

0x3662,	// (0x0006136a) aid_size_touch_mv_arrow_right

0x6c84,	// (0x0006498c) main_cset_slider_pane_g16_ParamLimits

0x6c84,	// (0x0006498c) main_cset_slider_pane_g16

0x6c90,	// (0x00064998) main_cset_slider_pane_g17_ParamLimits

0x6c90,	// (0x00064998) main_cset_slider_pane_g17

0x7456,	// (0x0006515e) cell_cam4_burst_pane_g1_ParamLimits

0x9c6a,	// (0x00067972) compa_mode_pane

0x6ec9,	// (0x00064bd1) popup_vtel_slider_window_g3_ParamLimits

0x6ec9,	// (0x00064bd1) popup_vtel_slider_window_g3

0x6edd,	// (0x00064be5) popup_vtel_slider_window_g4_ParamLimits

0x6edd,	// (0x00064be5) popup_vtel_slider_window_g4

0x6ef1,	// (0x00064bf9) popup_vtel_slider_window_t1_ParamLimits

0x6ef1,	// (0x00064bf9) popup_vtel_slider_window_t1

0x9c6a,	// (0x00067972) main_cl_pane

0xc84e,	// (0x0006a556) popup_imed_adjust2_window_ParamLimits

0xc822,	// (0x0006a52a) bg_tb_trans_pane_cp05_ParamLimits

0xd178,	// (0x0006ae80) popup_imed_adjust2_window_g1_ParamLimits

0xd187,	// (0x0006ae8f) popup_imed_adjust2_window_g2_ParamLimits

0xd187,	// (0x0006ae8f) popup_imed_adjust2_window_g2

0xd193,	// (0x0006ae9b) popup_imed_adjust2_window_g3_ParamLimits

0xd193,	// (0x0006ae9b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0006d4e7) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0006d4e7) popup_imed_adjust2_window_g

0xd19f,	// (0x0006aea7) popup_imed_adjust2_window_t1_ParamLimits

0xd1b7,	// (0x0006aebf) slider_imed_adjust_pane_ParamLimits

0xd1cb,	// (0x0006aed3) slider_imed_adjust_pane_g1_ParamLimits

0xd1db,	// (0x0006aee3) slider_imed_adjust_pane_g2_ParamLimits

0xd1eb,	// (0x0006aef3) slider_imed_adjust_pane_g3_ParamLimits

0xd1fc,	// (0x0006af04) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0006d4ee) slider_imed_adjust_pane_g_ParamLimits

0x63bb,	// (0x000640c3) aid_touch_area_cam4_ParamLimits

0x63bb,	// (0x000640c3) aid_touch_area_cam4

0x63cb,	// (0x000640d3) battery_pane_cp01

0x6452,	// (0x0006415a) main_camera4_pane_g6_ParamLimits

0x6452,	// (0x0006415a) main_camera4_pane_g6

0x6470,	// (0x00064178) main_camera4_pane_t2_ParamLimits

0x6470,	// (0x00064178) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0006d5f1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0006d5f1) main_camera4_pane_t

0x6501,	// (0x00064209) aid_touch_area_vid4_ParamLimits

0x6501,	// (0x00064209) aid_touch_area_vid4

0x6541,	// (0x00064249) main_video4_pane_g5_ParamLimits

0x6541,	// (0x00064249) main_video4_pane_g5

0x6567,	// (0x0006426f) vid4_progress_pane_ParamLimits

0x6567,	// (0x0006426f) vid4_progress_pane

0xd7d8,	// (0x0006b4e0) main_cset_slider_pane_g18_ParamLimits

0xd7d8,	// (0x0006b4e0) main_cset_slider_pane_g18

0xd9ea,	// (0x0006b6f2) cell_cam4_burst_pane_g2_ParamLimits

0xd9ea,	// (0x0006b6f2) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0006d750) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0006d750) cell_cam4_burst_pane_g

0x7550,	// (0x00065258) bg_cl_pane_ParamLimits

0x7550,	// (0x00065258) bg_cl_pane

0x755c,	// (0x00065264) cl_header_pane_ParamLimits

0x755c,	// (0x00065264) cl_header_pane

0x7568,	// (0x00065270) cl_listscroll_pane_ParamLimits

0x7568,	// (0x00065270) cl_listscroll_pane

0xdb38,	// (0x0006b840) bg_cl_pane_g1

0xdb40,	// (0x0006b848) bg_cl_pane_g2

0xdb48,	// (0x0006b850) bg_cl_pane_g3

0xdb50,	// (0x0006b858) bg_cl_pane_g4

0xdb58,	// (0x0006b860) bg_cl_pane_g5

0xdb60,	// (0x0006b868) bg_cl_pane_g6

0xdb68,	// (0x0006b870) bg_cl_pane_g7

0xdb70,	// (0x0006b878) bg_cl_pane_g8

0xdb78,	// (0x0006b880) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0006d78b) bg_cl_pane_g

0x7574,	// (0x0006527c) aid_height_cl_leading_ParamLimits

0x7574,	// (0x0006527c) aid_height_cl_leading

0x7580,	// (0x00065288) aid_height_cl_text_ParamLimits

0x7580,	// (0x00065288) aid_height_cl_text

0x0e06,	// (0x0005eb0e) bg_cl_header_pane_ParamLimits

0x0e06,	// (0x0005eb0e) bg_cl_header_pane

0x7598,	// (0x000652a0) cl_header_pane_g1_ParamLimits

0x7598,	// (0x000652a0) cl_header_pane_g1

0x75a5,	// (0x000652ad) cl_header_pane_t1_ParamLimits

0x75a5,	// (0x000652ad) cl_header_pane_t1

0xdb80,	// (0x0006b888) cl_list_pane

0xd7ab,	// (0x0006b4b3) hc_scroll_pane_cp01

0xacbd,	// (0x000689c5) bg_cl_header_pane_g1

0xd68d,	// (0x0006b395) bg_cl_header_pane_g2

0xacdd,	// (0x000689e5) bg_cl_header_pane_g3

0xd69d,	// (0x0006b3a5) bg_cl_header_pane_g4

0xd695,	// (0x0006b39d) bg_cl_header_pane_g5

0xd8b7,	// (0x0006b5bf) bg_cl_header_pane_g6

0xd6b5,	// (0x0006b3bd) bg_cl_header_pane_g7

0xd6bd,	// (0x0006b3c5) bg_cl_header_pane_g8

0xd6ad,	// (0x0006b3b5) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0006d79e) bg_cl_header_pane_g

0x75b7,	// (0x000652bf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75b7,	// (0x000652bf) hc_cl_list_double_graphic_heading_pane

0x75c7,	// (0x000652cf) hc_cl_list_single_graphic_pane_ParamLimits

0x75c7,	// (0x000652cf) hc_cl_list_single_graphic_pane

0x75d9,	// (0x000652e1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75d9,	// (0x000652e1) hc_cl_list_single_graphic_pane_g1

0x75e5,	// (0x000652ed) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75e5,	// (0x000652ed) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0006d7b1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0006d7b1) hc_cl_list_single_graphic_pane_g

0x75f9,	// (0x00065301) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75f9,	// (0x00065301) hc_cl_list_single_graphic_pane_t1

0x75d9,	// (0x000652e1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75d9,	// (0x000652e1) hc_cl_list_double_graphic_heading_pane_g1

0x760e,	// (0x00065316) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x760e,	// (0x00065316) hc_cl_list_double_graphic_heading_pane_g2

0x7622,	// (0x0006532a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7622,	// (0x0006532a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0006d7b6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0006d7b6) hc_cl_list_double_graphic_heading_pane_g

0x7636,	// (0x0006533e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7636,	// (0x0006533e) hc_cl_list_double_graphic_heading_pane_t1

0x764b,	// (0x00065353) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x764b,	// (0x00065353) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0006d7bd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0006d7bd) hc_cl_list_double_graphic_heading_pane_t

0x7668,	// (0x00065370) vid4_progress_pane_g1

0x767a,	// (0x00065382) vid4_progress_pane_g2

0x3d72,	// (0x00061a7a) vid4_progress_pane_g3

0x768c,	// (0x00065394) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0006d7c2) vid4_progress_pane_g

0x76aa,	// (0x000653b2) vid4_progress_pane_t1

0x76bf,	// (0x000653c7) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0006d7cd) vid4_progress_pane_t

0x76ea,	// (0x000653f2) wait_bar_pane_cp07

0xca60,	// (0x0006a768) blid_firmament_pane_ParamLimits

0xcaa3,	// (0x0006a7ab) popup_blid_sat_info2_window_g1

0xcac7,	// (0x0006a7cf) popup_blid_sat_info2_window_t3

0xcad5,	// (0x0006a7dd) popup_blid_sat_info2_window_t4

0xcae3,	// (0x0006a7eb) popup_blid_sat_info2_window_t5

0xcaf1,	// (0x0006a7f9) popup_blid_sat_info2_window_t6

0xcb01,	// (0x0006a809) popup_blid_sat_info2_window_t7

0xcb0f,	// (0x0006a817) popup_blid_sat_info2_window_t8

0xcb1d,	// (0x0006a825) popup_blid_sat_info2_window_t9

0xcb2b,	// (0x0006a833) popup_blid_sat_info2_window_t10

0xcbf3,	// (0x0006a8fb) aid_firma_cardinal_ParamLimits

0xcc07,	// (0x0006a90f) blid_firmament_pane_t1_ParamLimits

0xcc1e,	// (0x0006a926) blid_firmament_pane_t2_ParamLimits

0xcc35,	// (0x0006a93d) blid_firmament_pane_t3_ParamLimits

0xcc4c,	// (0x0006a954) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0006d3db) blid_firmament_pane_t_ParamLimits

0xcc63,	// (0x0006a96b) blid_sat_info_pane_ParamLimits

0xa337,	// (0x0006803f) main_cam_set_pane_ParamLimits

0x59c9,	// (0x000636d1) aid_size_cell_colour_35_ParamLimits

0x59e3,	// (0x000636eb) aid_size_cell_colour_112_ParamLimits

0x59fa,	// (0x00063702) aid_size_cell_effect_ParamLimits

0xa337,	// (0x0006803f) bg_tb_trans_pane_cp02_ParamLimits

0xb10d,	// (0x00068e15) heading_imed_pane_ParamLimits

0x5a14,	// (0x0006371c) listscroll_imed_pane_ParamLimits

0xbe44,	// (0x00069b4c) popup_call2_audio_first_window_g5_ParamLimits

0xbe44,	// (0x00069b4c) popup_call2_audio_first_window_g5

0x6126,	// (0x00063e2e) aid_size_touch_image3_arrow_left_ParamLimits

0x6126,	// (0x00063e2e) aid_size_touch_image3_arrow_left

0x613c,	// (0x00063e44) aid_size_touch_image3_arrow_right_ParamLimits

0x613c,	// (0x00063e44) aid_size_touch_image3_arrow_right

0x76d5,	// (0x000653dd) vid4_progress_pane_t3

0x5cc2,	// (0x000639ca) main_hwr_training_symbol_option_pane_ParamLimits

0x5cc2,	// (0x000639ca) main_hwr_training_symbol_option_pane

0xd467,	// (0x0006b16f) popup_hwr_training_preview_window_ParamLimits

0xd467,	// (0x0006b16f) popup_hwr_training_preview_window

0x5d23,	// (0x00063a2b) hwr_training_navi_pane_g5_ParamLimits

0x5d23,	// (0x00063a2b) hwr_training_navi_pane_g5

0xd67b,	// (0x0006b383) popup_char_count_window

0x6ff9,	// (0x00064d01) bg_popup_sub_pane_cp20_ParamLimits

0x7007,	// (0x00064d0f) list_vitu2_match_list_pane_ParamLimits

0x7013,	// (0x00064d1b) vitu2_page_scroll_pane_ParamLimits

0x7013,	// (0x00064d1b) vitu2_page_scroll_pane

0xdb89,	// (0x0006b891) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb89,	// (0x0006b891) list_single_hwr_training_symbol_option_pane

0xdb9c,	// (0x0006b8a4) list_single_hwr_training_symbol_option_pane_g1

0xdba4,	// (0x0006b8ac) list_single_hwr_training_symbol_option_pane_t1

0xdbb2,	// (0x0006b8ba) bg_button_pane_cp023

0xdbbb,	// (0x0006b8c3) bg_button_pane_cp024

0x7736,	// (0x0006543e) vitu2_page_scroll_pane_g1

0x773e,	// (0x00065446) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0006d7d4) vitu2_page_scroll_pane_g

0x7748,	// (0x00065450) vitu2_page_scroll_pane_t1

0xc9c0,	// (0x0006a6c8) popup_char_count_window_g1

0xdbee,	// (0x0006b8f6) popup_char_count_window_g2

0xdbf7,	// (0x0006b8ff) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0006d7d9) popup_char_count_window_g

0xdc00,	// (0x0006b908) popup_char_count_window_t1

0x9c6a,	// (0x00067972) main_vded2_pane

0xd164,	// (0x0006ae6c) aid_size_cell_imed_line

0xd16e,	// (0x0006ae76) grid_imed_line_width_pane

0x65e9,	// (0x000642f1) vid4_indicators_pane_g4

0xdc0e,	// (0x0006b916) cell_imed_line_width_pane_ParamLimits

0xdc0e,	// (0x0006b916) cell_imed_line_width_pane

0xdc24,	// (0x0006b92c) cell_imed_line_width_pane_g1

0xd02b,	// (0x0006ad33) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0006d7e0) cell_imed_line_width_pane_g

0x7757,	// (0x0006545f) main_vded2_pane_g1_ParamLimits

0x7757,	// (0x0006545f) main_vded2_pane_g1

0x7766,	// (0x0006546e) main_vded2_pane_g2_ParamLimits

0x7766,	// (0x0006546e) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0006d7e5) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0006d7e5) main_vded2_pane_g

0x7774,	// (0x0006547c) vded2_slider_pane_ParamLimits

0x7774,	// (0x0006547c) vded2_slider_pane

0x7781,	// (0x00065489) aid_size_touch_vded2_end

0x778b,	// (0x00065493) aid_size_touch_vded2_playhead

0xdc2d,	// (0x0006b935) aid_size_touch_vded2_start

0xdc35,	// (0x0006b93d) vded2_slider_bg_pane

0xdc3e,	// (0x0006b946) vded2_slider_pane_g1

0xdc47,	// (0x0006b94f) vded2_slider_pane_g2

0x7793,	// (0x0006549b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0006d7ea) vded2_slider_pane_g

0xd8e3,	// (0x0006b5eb) vded2_slider_bg_pane_g1

0xd8ec,	// (0x0006b5f4) vded2_slider_bg_pane_g2

0xd8f5,	// (0x0006b5fd) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0006d4ab) vded2_slider_bg_pane_g

0x3d8a,	// (0x00061a92) aid_postcard_touch_down_pane_ParamLimits

0x3d8a,	// (0x00061a92) aid_postcard_touch_down_pane

0x3d9a,	// (0x00061aa2) aid_postcard_touch_up_pane_ParamLimits

0x3d9a,	// (0x00061aa2) aid_postcard_touch_up_pane

0x9c6a,	// (0x00067972) main_blid2_pane

0xc830,	// (0x0006a538) popup_blid2_search_window

0x9c6a,	// (0x00067972) blid2_gps_pane

0x9c6a,	// (0x00067972) blid2_navig_pane

0x9c6a,	// (0x00067972) blid2_search_pane

0x9c6a,	// (0x00067972) blid2_tripm_pane

0x779c,	// (0x000654a4) blid2_search_pane_g1_ParamLimits

0x779c,	// (0x000654a4) blid2_search_pane_g1

0x77a8,	// (0x000654b0) blid2_search_pane_t1_ParamLimits

0x77a8,	// (0x000654b0) blid2_search_pane_t1

0x77ba,	// (0x000654c2) aid_size_cell_blid2_gps_ParamLimits

0x77ba,	// (0x000654c2) aid_size_cell_blid2_gps

0x77ca,	// (0x000654d2) blid2_gps_pane_g1_ParamLimits

0x77ca,	// (0x000654d2) blid2_gps_pane_g1

0x77d6,	// (0x000654de) grid_blid2_satellite_pane_ParamLimits

0x77d6,	// (0x000654de) grid_blid2_satellite_pane

0x77e4,	// (0x000654ec) blid2_navig_pane_g1_ParamLimits

0x77e4,	// (0x000654ec) blid2_navig_pane_g1

0x77f0,	// (0x000654f8) blid2_navig_pane_t1_ParamLimits

0x77f0,	// (0x000654f8) blid2_navig_pane_t1

0x7802,	// (0x0006550a) blid2_navig_pane_t2_ParamLimits

0x7802,	// (0x0006550a) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0006d7f1) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0006d7f1) blid2_navig_pane_t

0x7814,	// (0x0006551c) blid2_navig_ring_pane_ParamLimits

0x7814,	// (0x0006551c) blid2_navig_ring_pane

0x7824,	// (0x0006552c) blid2_speed_pane_ParamLimits

0x7824,	// (0x0006552c) blid2_speed_pane

0x7830,	// (0x00065538) blid2_tripm_pane_g1_ParamLimits

0x7830,	// (0x00065538) blid2_tripm_pane_g1

0x7840,	// (0x00065548) blid2_tripm_pane_g2_ParamLimits

0x7840,	// (0x00065548) blid2_tripm_pane_g2

0x784c,	// (0x00065554) blid2_tripm_pane_g3_ParamLimits

0x784c,	// (0x00065554) blid2_tripm_pane_g3

0x7858,	// (0x00065560) blid2_tripm_pane_g4_ParamLimits

0x7858,	// (0x00065560) blid2_tripm_pane_g4

0x7864,	// (0x0006556c) blid2_tripm_pane_g5_ParamLimits

0x7864,	// (0x0006556c) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0006d7f6) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0006d7f6) blid2_tripm_pane_g

0x7880,	// (0x00065588) blid2_tripm_pane_t1_ParamLimits

0x7880,	// (0x00065588) blid2_tripm_pane_t1

0x7892,	// (0x0006559a) blid2_tripm_pane_t2_ParamLimits

0x7892,	// (0x0006559a) blid2_tripm_pane_t2

0x78a4,	// (0x000655ac) blid2_tripm_pane_t3_ParamLimits

0x78a4,	// (0x000655ac) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0006d803) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0006d803) blid2_tripm_pane_t

0x78d6,	// (0x000655de) cell_blid2_satellite_pane_ParamLimits

0x78d6,	// (0x000655de) cell_blid2_satellite_pane

0x78f4,	// (0x000655fc) cell_blid2_satellite_pane_g1

0xdc4f,	// (0x0006b957) cell_blid2_satellite_pane_t1

0xcc73,	// (0x0006a97b) blid2_speed_pane_g1

0xdc5d,	// (0x0006b965) blid2_speed_pane_t1

0xdc6b,	// (0x0006b973) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0006d80c) blid2_speed_pane_t

0xcc73,	// (0x0006a97b) blid2_navig_ring_pane_g1

0x78fd,	// (0x00065605) blid2_navig_ring_pane_g2

0x7905,	// (0x0006560d) blid2_navig_ring_pane_g3

0x790d,	// (0x00065615) blid2_navig_ring_pane_g4

0x7915,	// (0x0006561d) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0006d811) blid2_navig_ring_pane_g

0x9c6a,	// (0x00067972) bg_popup_window_pane_cp011

0xdc79,	// (0x0006b981) popup_blid2_search_window_g1

0xdc81,	// (0x0006b989) popup_blid2_search_window_t1

0xdc8f,	// (0x0006b997) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0006d81c) popup_blid2_search_window_t

0xabcc,	// (0x000688d4) main_browser_pane_g1

0xa8b4,	// (0x000685bc) main_browser_pane_ParamLimits

0x6594,	// (0x0006429c) bg_button_pane_cp011_ParamLimits

0x6895,	// (0x0006459d) cell_vitu2_function_pane_g1_ParamLimits

0xc822,	// (0x0006a52a) bg_popup_sub_pane_cp22_ParamLimits

0x71f3,	// (0x00064efb) input_focus_pane_cp08_ParamLimits

0x720a,	// (0x00064f12) popup_vitu2_query_button_pane_ParamLimits

0x720a,	// (0x00064f12) popup_vitu2_query_button_pane

0x721b,	// (0x00064f23) popup_vitu2_query_input_button_pane

0xd940,	// (0x0006b648) popup_vitu2_query_window_g1_ParamLimits

0x7225,	// (0x00064f2d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0006d724) popup_vitu2_query_window_g_ParamLimits

0x9c6a,	// (0x00067972) bg_button_pane_cp026

0x791d,	// (0x00065625) popup_vitu2_query_input_button_pane_g1

0x9c6a,	// (0x00067972) bg_button_pane_cp025

0xdc9d,	// (0x0006b9a5) popup_vitu2_query_button_pane_t1

0x4f23,	// (0x00062c2b) main_mp3_pane_t6

0x4f33,	// (0x00062c3b) popup_slider_window_cp01

0x64b6,	// (0x000641be) cam4_battery_pane

0x65a2,	// (0x000642aa) cam4_battery_pane_cp02

0x7660,	// (0x00065368) cam4_battery_pane_cp01

0x7660,	// (0x00065368) cam4_battery_pane_cp03

0xd8fe,	// (0x0006b606) cam4_battery_pane_g1

0xcc73,	// (0x0006a97b) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0006d821) cam4_battery_pane_g

0xcb39,	// (0x0006a841) popup_blid_sat_info2_window_t11

0x3637,	// (0x0006133f) aid_size_touch_mv_arrow_left_ParamLimits

0x3662,	// (0x0006136a) aid_size_touch_mv_arrow_right_ParamLimits

0xb359,	// (0x00069061) navi_pane_g1_ParamLimits

0x36a1,	// (0x000613a9) navi_pane_g2_ParamLimits

0x36cf,	// (0x000613d7) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0006d0ed) navi_pane_g_ParamLimits

0x3729,	// (0x00061431) navi_pane_mv_t1_ParamLimits

0x5a20,	// (0x00063728) grid_imed_effect_pane_ParamLimits

0x2052,	// (0x0005fd5a) aid_placing_vt_slider_lsc

0xab17,	// (0x0006881f) aid_placing_vt_slider_prt

0xa337,	// (0x0006803f) bg_tb_trans_pane_cp01_ParamLimits

0xcdc3,	// (0x0006aacb) popup_image_details_window_g1_ParamLimits

0xcdd6,	// (0x0006aade) popup_image_details_window_g2_ParamLimits

0xcdeb,	// (0x0006aaf3) popup_image_details_window_g3_ParamLimits

0xcdeb,	// (0x0006aaf3) popup_image_details_window_g3

0xf718,	// (0x0006d420) popup_image_details_window_g_ParamLimits

0xcdff,	// (0x0006ab07) popup_image_details_window_t1_ParamLimits

0xce11,	// (0x0006ab19) popup_image_details_window_t2_ParamLimits

0xce2a,	// (0x0006ab32) popup_image_details_window_t3_ParamLimits

0xce3e,	// (0x0006ab46) popup_image_details_window_t4_ParamLimits

0xce59,	// (0x0006ab61) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0006d427) popup_image_details_window_t_ParamLimits

0x758c,	// (0x00065294) cl_header_name_pane_ParamLimits

0x758c,	// (0x00065294) cl_header_name_pane

0x7925,	// (0x0006562d) cl_header_name_pane_t1_ParamLimits

0x7925,	// (0x0006562d) cl_header_name_pane_t1

0x793c,	// (0x00065644) cl_header_name_pane_t2_ParamLimits

0x793c,	// (0x00065644) cl_header_name_pane_t2

0x7966,	// (0x0006566e) cl_header_name_pane_t3_ParamLimits

0x7966,	// (0x0006566e) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0006d826) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0006d826) cl_header_name_pane_t

0x36fa,	// (0x00061402) navi_pane_mv_g2_ParamLimits

0xd655,	// (0x0006b35d) field_vitu2_entry_pane_g1_ParamLimits

0xd661,	// (0x0006b369) field_vitu2_entry_pane_g2_ParamLimits

0xd66d,	// (0x0006b375) field_vitu2_entry_pane_g3_ParamLimits

0xd66d,	// (0x0006b375) field_vitu2_entry_pane_g3

0xf91b,	// (0x0006d623) field_vitu2_entry_pane_g_ParamLimits

0x6820,	// (0x00064528) cell_vitu2_itu_pane_g1_ParamLimits

0x6830,	// (0x00064538) cell_vitu2_itu_pane_g2_ParamLimits

0x6830,	// (0x00064538) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0006d62f) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0006d62f) cell_vitu2_itu_pane_g

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp05_ParamLimits

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp05

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp03

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp04

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp10_ParamLimits

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp10

0x752e,	// (0x00065236) bg_vkb2_func_pane_cp08

0x7514,	// (0x0006521c) bg_vkb2_func_pane_cp06

0x7522,	// (0x0006522a) bg_vkb2_func_pane_cp07

0xdbc4,	// (0x0006b8cc) bg_vkb2_func_pane_cp11_ParamLimits

0xdbc4,	// (0x0006b8cc) bg_vkb2_func_pane_cp11

0xdbd9,	// (0x0006b8e1) bg_vkb2_func_pane_cp12_ParamLimits

0xdbd9,	// (0x0006b8e1) bg_vkb2_func_pane_cp12

0x9c6a,	// (0x00067972) bg_vkb2_func_pane_cp09

0xd68d,	// (0x0006b395) bg_vkb2_func_pane_g1

0xacdd,	// (0x000689e5) bg_vkb2_func_pane_g2

0xd695,	// (0x0006b39d) bg_vkb2_func_pane_g3

0xd69d,	// (0x0006b3a5) bg_vkb2_func_pane_g4

0xd8b7,	// (0x0006b5bf) bg_vkb2_func_pane_g5

0xd6b5,	// (0x0006b3bd) bg_vkb2_func_pane_g6

0xd6bd,	// (0x0006b3c5) bg_vkb2_func_pane_g7

0xd6ad,	// (0x0006b3b5) bg_vkb2_func_pane_g8

0xacbd,	// (0x000689c5) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0006d82d) bg_vkb2_func_pane_g

0x7872,	// (0x0006557a) blid2_tripm_pane_g6_ParamLimits

0x7872,	// (0x0006557a) blid2_tripm_pane_g6

0xd52b,	// (0x0006b233) mp4_progress_pane_g1

0x78ca,	// (0x000655d2) blid2_tripm_values_pane_ParamLimits

0x78ca,	// (0x000655d2) blid2_tripm_values_pane

0x798b,	// (0x00065693) blid2_tripm_values_pane_t1

0x7999,	// (0x000656a1) blid2_tripm_values_pane_t2

0x79a7,	// (0x000656af) blid2_tripm_values_pane_t3

0x79b5,	// (0x000656bd) blid2_tripm_values_pane_t4

0x79c3,	// (0x000656cb) blid2_tripm_values_pane_t5

0x79d1,	// (0x000656d9) blid2_tripm_values_pane_t6

0x79df,	// (0x000656e7) blid2_tripm_values_pane_t7

0x79ed,	// (0x000656f5) blid2_tripm_values_pane_t8

0x79fb,	// (0x00065703) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0006d840) blid2_tripm_values_pane_t

0x2090,	// (0x0005fd98) call_video_pane_t1_ParamLimits

0x20ad,	// (0x0005fdb5) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006cf76) call_video_pane_t_ParamLimits

0x3c95,	// (0x0006199d) msg_header_pane_g1_ParamLimits

0xb576,	// (0x0006927e) msg_header_pane_g2_ParamLimits

0xb576,	// (0x0006927e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0006d190) msg_header_pane_g_ParamLimits

0xf488,	// (0x0006d190) msg_header_pane_g

0xa8b4,	// (0x000685bc) main_clock2_pane_ParamLimits

0x57af,	// (0x000634b7) grid_clock2_toolbar_pane_ParamLimits

0x57af,	// (0x000634b7) grid_clock2_toolbar_pane

0x57af,	// (0x000634b7) listscroll_clock2_pane_ParamLimits

0x57af,	// (0x000634b7) listscroll_clock2_pane

0x5857,	// (0x0006355f) main_clock2_pane_t3_ParamLimits

0x5857,	// (0x0006355f) main_clock2_pane_t3

0x5869,	// (0x00063571) main_clock2_pane_t4_ParamLimits

0x5869,	// (0x00063571) main_clock2_pane_t4

0xdcab,	// (0x0006b9b3) cell_clock2_toolbar_pane

0xdcb3,	// (0x0006b9bb) cell_clock2_toolbar_pane_cp01

0xdcb3,	// (0x0006b9bb) cell_clock2_toolbar_pane_cp02

0xdcbb,	// (0x0006b9c3) cell_clock2_toolbar_pane_cp03

0xdcc3,	// (0x0006b9cb) list_clock2_pane

0xb2bf,	// (0x00068fc7) scroll_pane_cp10

0xdccb,	// (0x0006b9d3) list_single_clock2_pane_ParamLimits

0xdccb,	// (0x0006b9d3) list_single_clock2_pane

0xb3f9,	// (0x00069101) list_highlight_pane_cp08

0xdcd8,	// (0x0006b9e0) list_single_clock2_pane_t1

0xdce6,	// (0x0006b9ee) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0006d853) list_single_clock2_pane_t

0x9c6a,	// (0x00067972) bg_button_pane_cp10

0xdcf4,	// (0x0006b9fc) cell_clock2_toolbar_pane_g1

0x3cec,	// (0x000619f4) aid_main_viewer_pane_g1_ParamLimits

0x3cec,	// (0x000619f4) aid_main_viewer_pane_g1

0x3cf8,	// (0x00061a00) aid_main_viewer_pane_g2_ParamLimits

0x3cf8,	// (0x00061a00) aid_main_viewer_pane_g2

0x3d04,	// (0x00061a0c) aid_main_viewer_pane_g3_ParamLimits

0x3d04,	// (0x00061a0c) aid_main_viewer_pane_g3

0x3d15,	// (0x00061a1d) aid_main_viewer_pane_g4_ParamLimits

0x3d15,	// (0x00061a1d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0006d1a1) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0006d1a1) aid_main_viewer_pane_g

0x449f,	// (0x000621a7) main_calc_pane_ParamLimits

0x44ac,	// (0x000621b4) main_dialer2_pane_ParamLimits

0x9c6a,	// (0x00067972) main_cam6_pane

0x9c6a,	// (0x00067972) main_vid6_pane

0x57bb,	// (0x000634c3) listscroll_gen_pane_cp06_ParamLimits

0x57bb,	// (0x000634c3) listscroll_gen_pane_cp06

0x587b,	// (0x00063583) main_clock2_pane_t5_ParamLimits

0x587b,	// (0x00063583) main_clock2_pane_t5

0x58ca,	// (0x000635d2) aid_call2_pane_cp10_ParamLimits

0x58dc,	// (0x000635e4) aid_call_pane_cp10_ParamLimits

0xb32e,	// (0x00069036) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb32e,	// (0x00069036) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58ee,	// (0x000635f6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58ee,	// (0x000635f6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb32e,	// (0x00069036) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0006d4dc) popup_clock_analogue_window_cp10_g_ParamLimits

0x5900,	// (0x00063608) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60d3,	// (0x00063ddb) cell_dialer2_keypad_pane_g2_ParamLimits

0x60d3,	// (0x00063ddb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0006d5c2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0006d5c2) cell_dialer2_keypad_pane_g

0x60ef,	// (0x00063df7) cell_dialer2_keypad_pane_t1

0x6b72,	// (0x0006487a) main_cset_text2_pane_ParamLimits

0x6b72,	// (0x0006487a) main_cset_text2_pane

0xdb2c,	// (0x0006b834) area_vitu2_query_pane_g1_ParamLimits

0x74b3,	// (0x000651bb) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0006d777) area_vitu2_query_pane_g_ParamLimits

0xa3e6,	// (0x000680ee) area_vitu2_query_pane_t7_ParamLimits

0xa3e6,	// (0x000680ee) area_vitu2_query_pane_t7

0x7514,	// (0x0006521c) bg_button_pane_cp018_ParamLimits

0x7522,	// (0x0006522a) bg_button_pane_cp021_ParamLimits

0x752e,	// (0x00065236) bg_button_pane_cp022_ParamLimits

0x752e,	// (0x00065236) bg_vkb2_func_pane_cp08_ParamLimits

0x7514,	// (0x0006521c) bg_vkb2_func_pane_cp06_ParamLimits

0x7522,	// (0x0006522a) bg_vkb2_func_pane_cp07_ParamLimits

0x753f,	// (0x00065247) input_focus_pane_cp09_ParamLimits

0x7a09,	// (0x00065711) cam6_autofocus_pane_ParamLimits

0x7a09,	// (0x00065711) cam6_autofocus_pane

0x7a2b,	// (0x00065733) cam6_image_uncrop_pane_ParamLimits

0x7a2b,	// (0x00065733) cam6_image_uncrop_pane

0x7a58,	// (0x00065760) cam6_indi_pane_ParamLimits

0x7a58,	// (0x00065760) cam6_indi_pane

0x7a72,	// (0x0006577a) cam6_mode_pane_ParamLimits

0x7a72,	// (0x0006577a) cam6_mode_pane

0x7a86,	// (0x0006578e) cam6_timer_pane_ParamLimits

0x7a86,	// (0x0006578e) cam6_timer_pane

0x7a92,	// (0x0006579a) cam6_zoom_pane_ParamLimits

0x7a92,	// (0x0006579a) cam6_zoom_pane

0x7aae,	// (0x000657b6) cam6_mode_pane_g1_ParamLimits

0x7aae,	// (0x000657b6) cam6_mode_pane_g1

0x7aba,	// (0x000657c2) cam6_mode_pane_g2_ParamLimits

0x7aba,	// (0x000657c2) cam6_mode_pane_g2

0x7ac6,	// (0x000657ce) cam6_mode_pane_g3_ParamLimits

0x7ac6,	// (0x000657ce) cam6_mode_pane_g3

0x7ad2,	// (0x000657da) cam6_mode_pane_g4_ParamLimits

0x7ad2,	// (0x000657da) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0006d858) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0006d858) cam6_mode_pane_g

0xd908,	// (0x0006b610) bg_tb_trans_pane_cp08_ParamLimits

0xd908,	// (0x0006b610) bg_tb_trans_pane_cp08

0xdcfc,	// (0x0006ba04) cam6_battery_pane_ParamLimits

0xdcfc,	// (0x0006ba04) cam6_battery_pane

0xdd12,	// (0x0006ba1a) cam6_indi_pane_g1_ParamLimits

0xdd12,	// (0x0006ba1a) cam6_indi_pane_g1

0xdd24,	// (0x0006ba2c) cam6_indi_pane_g2_ParamLimits

0xdd24,	// (0x0006ba2c) cam6_indi_pane_g2

0xdd42,	// (0x0006ba4a) cam6_indi_pane_g3_ParamLimits

0xdd42,	// (0x0006ba4a) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0006d861) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0006d861) cam6_indi_pane_g

0xdd54,	// (0x0006ba5c) cam6_indi_pane_t1_ParamLimits

0xdd54,	// (0x0006ba5c) cam6_indi_pane_t1

0x6626,	// (0x0006432e) cam6_autofocus_pane_g1

0x661e,	// (0x00064326) cam6_autofocus_pane_g2

0x6636,	// (0x0006433e) cam6_autofocus_pane_g3

0x662e,	// (0x00064336) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0006d868) cam6_autofocus_pane_g

0xdd7a,	// (0x0006ba82) cam6_timer_pane_g1

0xdd82,	// (0x0006ba8a) cam6_timer_pane_t1

0xdd90,	// (0x0006ba98) cam6_zoom_cont_pane

0xdd98,	// (0x0006baa0) cam6_zoom_pane_g1

0xdda0,	// (0x0006baa8) cam6_zoom_pane_g2

0x7ade,	// (0x000657e6) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0006d871) cam6_zoom_pane_g

0xcc73,	// (0x0006a97b) cam6_battery_pane_g1

0xcc73,	// (0x0006a97b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0006d3e4) cam6_battery_pane_g

0xdda8,	// (0x0006bab0) cam6_zoom_cont_pane_g1

0xddb1,	// (0x0006bab9) cam6_zoom_cont_pane_g2

0xddba,	// (0x0006bac2) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0006d878) cam6_zoom_cont_pane_g

0x7afb,	// (0x00065803) cam6_mode_pane_cp_ParamLimits

0x7afb,	// (0x00065803) cam6_mode_pane_cp

0x7b0f,	// (0x00065817) cam6_zoom_pane_cp_ParamLimits

0x7b0f,	// (0x00065817) cam6_zoom_pane_cp

0x7b2b,	// (0x00065833) vid6_image_uncrop_cif_pane_ParamLimits

0x7b2b,	// (0x00065833) vid6_image_uncrop_cif_pane

0x7b57,	// (0x0006585f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b57,	// (0x0006585f) vid6_image_uncrop_nhd_pane

0x7b76,	// (0x0006587e) vid6_image_uncrop_vga_pane_ParamLimits

0x7b76,	// (0x0006587e) vid6_image_uncrop_vga_pane

0x7b95,	// (0x0006589d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b95,	// (0x0006589d) vid6_image_uncrop_wvga_pane

0x7bb4,	// (0x000658bc) vid6_indi_pane_ParamLimits

0x7bb4,	// (0x000658bc) vid6_indi_pane

0xd908,	// (0x0006b610) bg_tb_trans_pane_cp09_ParamLimits

0xd908,	// (0x0006b610) bg_tb_trans_pane_cp09

0xddd2,	// (0x0006bada) cam6_battery_pane_cp_ParamLimits

0xddd2,	// (0x0006bada) cam6_battery_pane_cp

0xddde,	// (0x0006bae6) vid6_indi_pane_g1_ParamLimits

0xddde,	// (0x0006bae6) vid6_indi_pane_g1

0xddf0,	// (0x0006baf8) vid6_indi_pane_g2_ParamLimits

0xddf0,	// (0x0006baf8) vid6_indi_pane_g2

0xde02,	// (0x0006bb0a) vid6_indi_pane_g3_ParamLimits

0xde02,	// (0x0006bb0a) vid6_indi_pane_g3

0xde19,	// (0x0006bb21) vid6_indi_pane_g4_ParamLimits

0xde19,	// (0x0006bb21) vid6_indi_pane_g4

0xde30,	// (0x0006bb38) vid6_indi_pane_g5_ParamLimits

0xde30,	// (0x0006bb38) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0006d87f) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0006d87f) vid6_indi_pane_g

0xde4a,	// (0x0006bb52) vid6_indi_pane_t1_ParamLimits

0xde4a,	// (0x0006bb52) vid6_indi_pane_t1

0xde60,	// (0x0006bb68) vid6_indi_pane_t2_ParamLimits

0xde60,	// (0x0006bb68) vid6_indi_pane_t2

0xde88,	// (0x0006bb90) vid6_indi_pane_t3_ParamLimits

0xde88,	// (0x0006bb90) vid6_indi_pane_t3

0xdeb0,	// (0x0006bbb8) vid6_indi_pane_t4_ParamLimits

0xdeb0,	// (0x0006bbb8) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0006d88a) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0006d88a) vid6_indi_pane_t

0xded4,	// (0x0006bbdc) wait_bar_pane_cp08

0x7bd9,	// (0x000658e1) main_cset_text2_pane_t1_ParamLimits

0x7bd9,	// (0x000658e1) main_cset_text2_pane_t1

0x7ae6,	// (0x000657ee) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ae6,	// (0x000657ee) listscroll_gen_pane_cp06_t1

0x9c6a,	// (0x00067972) main_cam6_set_pane

0x64a8,	// (0x000641b0) bg_tb_trans_pane_cp06_ParamLimits

0x64be,	// (0x000641c6) cam4_indicators_pane_g1_ParamLimits

0x64cf,	// (0x000641d7) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0006d5ff) cam4_indicators_pane_g_ParamLimits

0x64e7,	// (0x000641ef) cam4_indicators_pane_t1_ParamLimits

0x6594,	// (0x0006429c) bg_tb_trans_pane_cp07_ParamLimits

0x65ac,	// (0x000642b4) vid4_indicators_pane_g1_ParamLimits

0x65c2,	// (0x000642ca) vid4_indicators_pane_g2_ParamLimits

0x65d6,	// (0x000642de) vid4_indicators_pane_g3_ParamLimits

0x65e9,	// (0x000642f1) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0006d611) vid4_indicators_pane_g_ParamLimits

0x6607,	// (0x0006430f) vid4_indicators_pane_t1_ParamLimits

0x7668,	// (0x00065370) vid4_progress_pane_g1_ParamLimits

0x767a,	// (0x00065382) vid4_progress_pane_g2_ParamLimits

0x3d72,	// (0x00061a7a) vid4_progress_pane_g3_ParamLimits

0x768c,	// (0x00065394) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0006d7c2) vid4_progress_pane_g_ParamLimits

0x76aa,	// (0x000653b2) vid4_progress_pane_t1_ParamLimits

0x76bf,	// (0x000653c7) vid4_progress_pane_t2_ParamLimits

0x76d5,	// (0x000653dd) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0006d7cd) vid4_progress_pane_t_ParamLimits

0x76ea,	// (0x000653f2) wait_bar_pane_cp07_ParamLimits

0x7c00,	// (0x00065908) main_cam6_set_pane_g2_ParamLimits

0x7c00,	// (0x00065908) main_cam6_set_pane_g2

0x7c0c,	// (0x00065914) main_cset6_listscroll_pane_ParamLimits

0x7c0c,	// (0x00065914) main_cset6_listscroll_pane

0x7c39,	// (0x00065941) main_cset6_slider_pane_ParamLimits

0x7c39,	// (0x00065941) main_cset6_slider_pane

0x7c45,	// (0x0006594d) main_cset6_text2_pane_ParamLimits

0x7c45,	// (0x0006594d) main_cset6_text2_pane

0xdee3,	// (0x0006bbeb) main_cset6_text_pane

0xdeeb,	// (0x0006bbf3) main_cset_list_pane_copy1_ParamLimits

0xdeeb,	// (0x0006bbf3) main_cset_list_pane_copy1

0xdefb,	// (0x0006bc03) scroll_pane_cp028_copy1

0x7c58,	// (0x00065960) cset_list_set_pane_copy1

0x7c68,	// (0x00065970) aid_position_infowindow_above_copy1

0x7c70,	// (0x00065978) aid_position_infowindow_below_copy1

0x7c78,	// (0x00065980) cset_list_set_pane_g1_copy1

0x7c80,	// (0x00065988) cset_list_set_pane_g3_copy1_ParamLimits

0x7c80,	// (0x00065988) cset_list_set_pane_g3_copy1

0x7c8f,	// (0x00065997) cset_list_set_pane_t1_copy1_ParamLimits

0x7c8f,	// (0x00065997) cset_list_set_pane_t1_copy1

0xa337,	// (0x0006803f) list_highlight_pane_cp021_copy1_ParamLimits

0xa337,	// (0x0006803f) list_highlight_pane_cp021_copy1

0xdf04,	// (0x0006bc0c) cset6_slider_pane_ParamLimits

0xdf04,	// (0x0006bc0c) cset6_slider_pane

0xdf30,	// (0x0006bc38) main_cset6_slider_pane_g1_ParamLimits

0xdf30,	// (0x0006bc38) main_cset6_slider_pane_g1

0x7ca4,	// (0x000659ac) main_cset6_slider_pane_g2_ParamLimits

0x7ca4,	// (0x000659ac) main_cset6_slider_pane_g2

0xdf58,	// (0x0006bc60) main_cset6_slider_pane_g3_ParamLimits

0xdf58,	// (0x0006bc60) main_cset6_slider_pane_g3

0x7ccc,	// (0x000659d4) main_cset6_slider_pane_g4_ParamLimits

0x7ccc,	// (0x000659d4) main_cset6_slider_pane_g4

0x7cd8,	// (0x000659e0) main_cset6_slider_pane_g5_ParamLimits

0x7cd8,	// (0x000659e0) main_cset6_slider_pane_g5

0xd7c0,	// (0x0006b4c8) main_cset6_slider_pane_g7_ParamLimits

0xd7c0,	// (0x0006b4c8) main_cset6_slider_pane_g7

0xd7cc,	// (0x0006b4d4) main_cset6_slider_pane_g8_ParamLimits

0xd7cc,	// (0x0006b4d4) main_cset6_slider_pane_g8

0x7ce4,	// (0x000659ec) main_cset6_slider_pane_g9_ParamLimits

0x7ce4,	// (0x000659ec) main_cset6_slider_pane_g9

0x7cf0,	// (0x000659f8) main_cset6_slider_pane_g10_ParamLimits

0x7cf0,	// (0x000659f8) main_cset6_slider_pane_g10

0x7cfc,	// (0x00065a04) main_cset6_slider_pane_g11_ParamLimits

0x7cfc,	// (0x00065a04) main_cset6_slider_pane_g11

0x7d08,	// (0x00065a10) main_cset6_slider_pane_g12_ParamLimits

0x7d08,	// (0x00065a10) main_cset6_slider_pane_g12

0x7d14,	// (0x00065a1c) main_cset6_slider_pane_g13_ParamLimits

0x7d14,	// (0x00065a1c) main_cset6_slider_pane_g13

0x7d20,	// (0x00065a28) main_cset6_slider_pane_g14_ParamLimits

0x7d20,	// (0x00065a28) main_cset6_slider_pane_g14

0x7d2c,	// (0x00065a34) main_cset6_slider_pane_g15_ParamLimits

0x7d2c,	// (0x00065a34) main_cset6_slider_pane_g15

0x7d44,	// (0x00065a4c) main_cset6_slider_pane_g16_ParamLimits

0x7d44,	// (0x00065a4c) main_cset6_slider_pane_g16

0x7d50,	// (0x00065a58) main_cset6_slider_pane_g17_ParamLimits

0x7d50,	// (0x00065a58) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0006d893) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0006d893) main_cset6_slider_pane_g

0xdf64,	// (0x0006bc6c) main_cset6_slider_pane_t1_ParamLimits

0xdf64,	// (0x0006bc6c) main_cset6_slider_pane_t1

0x7d74,	// (0x00065a7c) main_cset6_slider_pane_t2_ParamLimits

0x7d74,	// (0x00065a7c) main_cset6_slider_pane_t2

0x7d9f,	// (0x00065aa7) main_cset6_slider_pane_t3_ParamLimits

0x7d9f,	// (0x00065aa7) main_cset6_slider_pane_t3

0x7dca,	// (0x00065ad2) main_cset6_slider_pane_t4_ParamLimits

0x7dca,	// (0x00065ad2) main_cset6_slider_pane_t4

0x7df5,	// (0x00065afd) main_cset6_slider_pane_t5_ParamLimits

0x7df5,	// (0x00065afd) main_cset6_slider_pane_t5

0xdfa5,	// (0x0006bcad) main_cset6_slider_pane_t7_ParamLimits

0xdfa5,	// (0x0006bcad) main_cset6_slider_pane_t7

0x7e20,	// (0x00065b28) main_cset6_slider_pane_t8_ParamLimits

0x7e20,	// (0x00065b28) main_cset6_slider_pane_t8

0x7e44,	// (0x00065b4c) main_cset6_slider_pane_t9_ParamLimits

0x7e44,	// (0x00065b4c) main_cset6_slider_pane_t9

0x7e68,	// (0x00065b70) main_cset6_slider_pane_t10_ParamLimits

0x7e68,	// (0x00065b70) main_cset6_slider_pane_t10

0x7e8c,	// (0x00065b94) main_cset6_slider_pane_t11_ParamLimits

0x7e8c,	// (0x00065b94) main_cset6_slider_pane_t11

0xdfdb,	// (0x0006bce3) main_cset6_slider_pane_t14_ParamLimits

0xdfdb,	// (0x0006bce3) main_cset6_slider_pane_t14

0xe014,	// (0x0006bd1c) main_cset6_slider_pane_t15_ParamLimits

0xe014,	// (0x0006bd1c) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0006d8b8) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0006d8b8) main_cset6_slider_pane_t

0xd8c8,	// (0x0006b5d0) cset_slider_pane_g1_copy1

0xd8d1,	// (0x0006b5d9) cset_slider_pane_g2_copy1

0xd8da,	// (0x0006b5e2) cset_slider_pane_g3_copy1

0x9c6a,	// (0x00067972) bg_popup_sub_pane_cp011_copy1

0xe04d,	// (0x0006bd55) main_cset_text_pane_g1_copy1

0xd954,	// (0x0006b65c) main_cset_text_pane_t1_copy1

0xd962,	// (0x0006b66a) main_cset_text_pane_t2_copy1

0xd970,	// (0x0006b678) main_cset_text_pane_t3_copy1

0xd97e,	// (0x0006b686) main_cset_text_pane_t4_copy1

0xd98c,	// (0x0006b694) main_cset_text_pane_t5_copy1

0xe055,	// (0x0006bd5d) main_cset_text_pane_t6_copy1

0xe063,	// (0x0006bd6b) main_cset_text_pane_t7_copy1

0x7f55,	// (0x00065c5d) main_cset_text2_pane_t1_copy1

0xa337,	// (0x0006803f) main_ncimui_pane

0x44f1,	// (0x000621f9) popup_query_ncimui_window_ParamLimits

0x44f1,	// (0x000621f9) popup_query_ncimui_window

0xa345,	// (0x0006804d) field_cale_ev2_pane_g4_ParamLimits

0xa345,	// (0x0006804d) field_cale_ev2_pane_g4

0x5de9,	// (0x00063af1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5de9,	// (0x00063af1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0006d59d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0006d59d) cell_video_dialer_keypad_pane_g

0x5e01,	// (0x00063b09) cell_video_dialer_keypad_pane_t1

0x9c6a,	// (0x00067972) bg_popup_window_pane_cp012

0xb1ab,	// (0x00068eb3) heading_pane_cp06

0xe08f,	// (0x0006bd97) ncim_query_content_pane

0x9c6a,	// (0x00067972) bg_popup_heading_pane_cp01

0xe097,	// (0x0006bd9f) ncim_heading_pane_t1

0xe0a5,	// (0x0006bdad) ncim_indicator_popup_pane

0xe0b7,	// (0x0006bdbf) ncim_query_button_pane

0xe0cd,	// (0x0006bdd5) ncim_query_content_pane_t1

0xe0df,	// (0x0006bde7) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0006d8fc) ncim_query_content_pane_t

0xe119,	// (0x0006be21) ncim_query_list_pane

0xe12b,	// (0x0006be33) ncim_query_popup_pane

0xe0a5,	// (0x0006bdad) ncim_indicator_popup_pane_ParamLimits

0x80b1,	// (0x00065db9) ncim_query_content_pane_g1_ParamLimits

0x80b1,	// (0x00065db9) ncim_query_content_pane_g1

0xe0cd,	// (0x0006bdd5) ncim_query_content_pane_t1_ParamLimits

0xe0df,	// (0x0006bde7) ncim_query_content_pane_t2_ParamLimits

0x80bd,	// (0x00065dc5) ncim_query_content_pane_t3_ParamLimits

0x80bd,	// (0x00065dc5) ncim_query_content_pane_t3

0x80da,	// (0x00065de2) ncim_query_content_pane_t4_ParamLimits

0x80da,	// (0x00065de2) ncim_query_content_pane_t4

0x80f7,	// (0x00065dff) ncim_query_content_pane_t5_ParamLimits

0x80f7,	// (0x00065dff) ncim_query_content_pane_t5

0xe0f1,	// (0x0006bdf9) ncim_query_content_pane_t6_ParamLimits

0xe0f1,	// (0x0006bdf9) ncim_query_content_pane_t6

0xfbf4,	// (0x0006d8fc) ncim_query_content_pane_t_ParamLimits

0xe119,	// (0x0006be21) ncim_query_list_pane_ParamLimits

0xe12b,	// (0x0006be33) ncim_query_popup_pane_ParamLimits

0xe13f,	// (0x0006be47) wait_bar_pane_cp04

0x9c6a,	// (0x00067972) input_focus_pane_cp011

0xe147,	// (0x0006be4f) ncim_query_popup_pane_t1

0xe155,	// (0x0006be5d) ncim_list_query_list_pane_ParamLimits

0xe155,	// (0x0006be5d) ncim_list_query_list_pane

0x9c6a,	// (0x00067972) bg_button_pane_cp027

0xe168,	// (0x0006be70) ncim_query_button_pane_g1

0x9c6a,	// (0x00067972) list_highlight_pane_cp012

0xe172,	// (0x0006be7a) ncim_list_query_list_pane_g1

0xe17a,	// (0x0006be82) ncim_list_query_list_pane_t1

0x64db,	// (0x000641e3) cam4_indicators_pane_g3_ParamLimits

0x64db,	// (0x000641e3) cam4_indicators_pane_g3

0x65f5,	// (0x000642fd) vid4_indicators_pane_g5_ParamLimits

0x65f5,	// (0x000642fd) vid4_indicators_pane_g5

0x769b,	// (0x000653a3) vid4_progress_pane_g5_ParamLimits

0x769b,	// (0x000653a3) vid4_progress_pane_g5

0x7f87,	// (0x00065c8f) main_ncimui_pane_g1

0x7ff3,	// (0x00065cfb) ncimui_group_query_pane_ParamLimits

0x7ff3,	// (0x00065cfb) ncimui_group_query_pane

0x804d,	// (0x00065d55) ncimui_list_pane_ParamLimits

0x804d,	// (0x00065d55) ncimui_list_pane

0x8074,	// (0x00065d7c) ncimui_text_pane_ParamLimits

0x8074,	// (0x00065d7c) ncimui_text_pane

0x8114,	// (0x00065e1c) ncimui_text_pane_t1_ParamLimits

0x8114,	// (0x00065e1c) ncimui_text_pane_t1

0xe188,	// (0x0006be90) ncimui_list_single_graphic_pane_ParamLimits

0xe188,	// (0x0006be90) ncimui_list_single_graphic_pane

0x8133,	// (0x00065e3b) ncimui_query_pane_ParamLimits

0x8133,	// (0x00065e3b) ncimui_query_pane

0x9c6a,	// (0x00067972) list_highlight_pane_cp013

0xe198,	// (0x0006bea0) ncim_list_query_list_pane_t1_copy1

0xe172,	// (0x0006be7a) ncim_list_single_graphic_pane_g1

0xe1a6,	// (0x0006beae) ncim_query_button_pane_cp01

0xe1b2,	// (0x0006beba) ncim_query_entry_pane_ParamLimits

0xe1b2,	// (0x0006beba) ncim_query_entry_pane

0xe1c5,	// (0x0006becd) ncimui_query_pane_g1

0xe1d1,	// (0x0006bed9) ncimui_query_pane_t1_ParamLimits

0xe1d1,	// (0x0006bed9) ncimui_query_pane_t1

0xa337,	// (0x0006803f) input_focus_pane_cp012

0xe1ea,	// (0x0006bef2) ncim_query_entry_pane_t1

0xa8b4,	// (0x000685bc) main_im_pane_ParamLimits

0xa337,	// (0x0006803f) main_mobtv_pane_ParamLimits

0xa337,	// (0x0006803f) main_mobtv_pane

0x7d5c,	// (0x00065a64) main_cset6_slider_pane_g18_ParamLimits

0x7d5c,	// (0x00065a64) main_cset6_slider_pane_g18

0x7d68,	// (0x00065a70) main_cset6_slider_pane_g19_ParamLimits

0x7d68,	// (0x00065a70) main_cset6_slider_pane_g19

0xd66d,	// (0x0006b375) bg_main_mobtv_pane_ParamLimits

0xd66d,	// (0x0006b375) bg_main_mobtv_pane

0x8146,	// (0x00065e4e) main_mobtv_info_pane

0x8151,	// (0x00065e59) main_mobtv_loading_pane_ParamLimits

0x8151,	// (0x00065e59) main_mobtv_loading_pane

0xe1fc,	// (0x0006bf04) main_mobtv_pg_channel_list_pane

0xe206,	// (0x0006bf0e) main_mobtv_pg_hdr_pane

0x815e,	// (0x00065e66) main_mobtv_programe_curr_pane_ParamLimits

0x815e,	// (0x00065e66) main_mobtv_programe_curr_pane

0x816b,	// (0x00065e73) main_mobtv_programe_next_pane_ParamLimits

0x816b,	// (0x00065e73) main_mobtv_programe_next_pane

0xe20f,	// (0x0006bf17) popup_mobtv_noti_window

0xcc73,	// (0x0006a97b) main_tv_pg_hdr_pane_g1

0xe219,	// (0x0006bf21) main_tv_pg_hdr_pane_g2

0xe221,	// (0x0006bf29) main_tv_pg_hdr_pane_g3

0xe229,	// (0x0006bf31) main_tv_pg_hdr_pane_g4

0xe231,	// (0x0006bf39) main_tv_pg_hdr_pane_g5

0xe23b,	// (0x0006bf43) main_tv_pg_hdr_pane_g6

0xe245,	// (0x0006bf4d) main_tv_pg_hdr_pane_g7

0xe24f,	// (0x0006bf57) main_tv_pg_hdr_pane_g8

0xe259,	// (0x0006bf61) main_tv_pg_hdr_pane_g9

0xe263,	// (0x0006bf6b) main_tv_pg_hdr_pane_g10

0xe26d,	// (0x0006bf75) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0006d909) main_tv_pg_hdr_pane_g

0xe277,	// (0x0006bf7f) main_tv_pg_hdr_pane_t1

0xe285,	// (0x0006bf8d) main_tv_pg_hdr_pane_t2

0xe293,	// (0x0006bf9b) main_tv_pg_hdr_pane_t3

0xe2a3,	// (0x0006bfab) main_tv_pg_hdr_pane_t4

0xe2b3,	// (0x0006bfbb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0006d920) main_tv_pg_hdr_pane_t

0xe2c3,	// (0x0006bfcb) single_mobtv_pg_channel_pane_ParamLimits

0xe2c3,	// (0x0006bfcb) single_mobtv_pg_channel_pane

0xe2d5,	// (0x0006bfdd) single_mobtv_pg_channel_table_pane

0xe2de,	// (0x0006bfe6) single_mobtv_pg_channel_thumb_pane

0xe2e7,	// (0x0006bfef) single_tv_pg_channel_pane_g1

0xe2f0,	// (0x0006bff8) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0006d92b) single_tv_pg_channel_pane_g

0xcea3,	// (0x0006abab) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea3,	// (0x0006abab) bg_single_mobtv_pg_channel_thumb_pane

0xe2f9,	// (0x0006c001) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f9,	// (0x0006c001) single_mobtv_pg_channel_thumb_pane_g1

0xe307,	// (0x0006c00f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe307,	// (0x0006c00f) single_mobtv_pg_channel_thumb_pane_g2

0xe313,	// (0x0006c01b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe313,	// (0x0006c01b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0006d930) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0006d930) single_mobtv_pg_channel_thumb_pane_g

0xe31f,	// (0x0006c027) single_mobtv_pg_channel_thumb_pane_t1

0xe32d,	// (0x0006c035) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0006d937) single_mobtv_pg_channel_thumb_pane_t

0xcc73,	// (0x0006a97b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc73,	// (0x0006a97b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0006d3e4) bg_single_mobtv_pg_channel_table_pane_g

0xe33b,	// (0x0006c043) single_mobtv_pg_channel_table_pane_t1

0xe349,	// (0x0006c051) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0006d93c) single_mobtv_pg_channel_table_pane_t

0x8180,	// (0x00065e88) main_mobtv_info_pane_g1_ParamLimits

0x8180,	// (0x00065e88) main_mobtv_info_pane_g1

0x819c,	// (0x00065ea4) main_mobtv_info_pane_t1_ParamLimits

0x819c,	// (0x00065ea4) main_mobtv_info_pane_t1

0x8214,	// (0x00065f1c) main_mobtv_info_pane_t2_ParamLimits

0x8214,	// (0x00065f1c) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0006d946) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0006d946) main_mobtv_info_pane_t

0x82a5,	// (0x00065fad) wait_bar_pane_cp05

0x82b7,	// (0x00065fbf) main_mobtv_loading_pane_g1_ParamLimits

0x82b7,	// (0x00065fbf) main_mobtv_loading_pane_g1

0x82c3,	// (0x00065fcb) main_mobtv_loading_pane_g2_ParamLimits

0x82c3,	// (0x00065fcb) main_mobtv_loading_pane_g2

0x82cf,	// (0x00065fd7) main_mobtv_loading_pane_g3_ParamLimits

0x82cf,	// (0x00065fd7) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0006d94d) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0006d94d) main_mobtv_loading_pane_g

0xe357,	// (0x0006c05f) main_mobtv_loading_pane_t1_ParamLimits

0xe357,	// (0x0006c05f) main_mobtv_loading_pane_t1

0xe36f,	// (0x0006c077) main_mobtv_loading_pane_t2_ParamLimits

0xe36f,	// (0x0006c077) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0006d954) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0006d954) main_mobtv_loading_pane_t

0x82dd,	// (0x00065fe5) wait_bar_pane_cp06_ParamLimits

0x82dd,	// (0x00065fe5) wait_bar_pane_cp06

0xe393,	// (0x0006c09b) main_mobtv_programe_curr_pane_t1

0xe3a1,	// (0x0006c0a9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0006d959) main_mobtv_programe_curr_pane_t

0xe3af,	// (0x0006c0b7) main_mobtv_programe_next_pane_t1

0xe3bd,	// (0x0006c0c5) main_mobtv_programe_next_pane_t2

0xe3cb,	// (0x0006c0d3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0006d95e) main_mobtv_programe_next_pane_t

0x9c6a,	// (0x00067972) bg_popup_mobtv_noti_window_pane

0xe3d9,	// (0x0006c0e1) popup_mobtv_noti_window_g1

0xe3e1,	// (0x0006c0e9) popup_mobtv_noti_window_t1

0xe3ef,	// (0x0006c0f7) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0006d965) popup_mobtv_noti_window_t

0xcc73,	// (0x0006a97b) bg_popup_mobtv_noti_window_pane_g1

0x9c6a,	// (0x00067972) sc_clock_pane

0x9c6a,	// (0x00067972) main_fs_bigclock_pane

0x78b8,	// (0x000655c0) blid2_tripm_pane_t4_ParamLimits

0x78b8,	// (0x000655c0) blid2_tripm_pane_t4

0x82e9,	// (0x00065ff1) sc_clock_pane_g1_ParamLimits

0x82e9,	// (0x00065ff1) sc_clock_pane_g1

0x82f7,	// (0x00065fff) sc_clock_pane_t1_ParamLimits

0x82f7,	// (0x00065fff) sc_clock_pane_t1

0x830c,	// (0x00066014) sc_clock_pane_t2_ParamLimits

0x830c,	// (0x00066014) sc_clock_pane_t2

0x831e,	// (0x00066026) sc_clock_pane_t3_ParamLimits

0x831e,	// (0x00066026) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0006d96a) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0006d96a) sc_clock_pane_t

0x9268,	// (0x00066f70) main_fs_bigclock_indicator_pane_ParamLimits

0x9268,	// (0x00066f70) main_fs_bigclock_indicator_pane

0x83b1,	// (0x000660b9) main_fs_bigclock_pane_g1_ParamLimits

0x83b1,	// (0x000660b9) main_fs_bigclock_pane_g1

0x9274,	// (0x00066f7c) main_fs_bigclock_pane_t1_ParamLimits

0x9274,	// (0x00066f7c) main_fs_bigclock_pane_t1

0x9286,	// (0x00066f8e) main_fs_bigclock_pane_t2_ParamLimits

0x9286,	// (0x00066f8e) main_fs_bigclock_pane_t2

0x929a,	// (0x00066fa2) main_fs_bigclock_pane_t3_ParamLimits

0x929a,	// (0x00066fa2) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0006db74) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0006db74) main_fs_bigclock_pane_t

0xec5b,	// (0x0006c963) main_fs_bigclock_indicator_pane_g1

0xe0bf,	// (0x0006bdc7) ncim_query_content_pane_g2_ParamLimits

0xe0bf,	// (0x0006bdc7) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0006d8f7) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0006d8f7) ncim_query_content_pane_g

0x8330,	// (0x00066038) sc_clock_pane_t4_ParamLimits

0x8330,	// (0x00066038) sc_clock_pane_t4

0xa337,	// (0x0006803f) main_radioblah_pane

0xd5da,	// (0x0006b2e2) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5da,	// (0x0006b2e2) cell_call4_button_pane_t1_copy1

0x7fa3,	// (0x00065cab) main_ncimui_pane_t1_ParamLimits

0x7fa3,	// (0x00065cab) main_ncimui_pane_t1

0x7fbd,	// (0x00065cc5) main_ncimui_pane_t2_ParamLimits

0x7fbd,	// (0x00065cc5) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0006d8f0) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0006d8f0) main_ncimui_pane_t

0xe542,	// (0x0006c24a) main_radioblah_anim_pane_ParamLimits

0xe542,	// (0x0006c24a) main_radioblah_anim_pane

0xe553,	// (0x0006c25b) main_radioblah_info_pane_ParamLimits

0xe553,	// (0x0006c25b) main_radioblah_info_pane

0xe567,	// (0x0006c26f) main_radioblah_pane_t1_ParamLimits

0xe567,	// (0x0006c26f) main_radioblah_pane_t1

0xe583,	// (0x0006c28b) main_radioblah_pane_t2_ParamLimits

0xe583,	// (0x0006c28b) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0006d98b) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0006d98b) main_radioblah_pane_t

0x8403,	// (0x0006610b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8403,	// (0x0006610b) main_radioblah_rocker_ctrl_pane

0xe5cb,	// (0x0006c2d3) main_radioblah_info_pane_t1_ParamLimits

0xe5cb,	// (0x0006c2d3) main_radioblah_info_pane_t1

0x844c,	// (0x00066154) main_radioblah_info_pane_t2_ParamLimits

0x844c,	// (0x00066154) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0006d994) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0006d994) main_radioblah_info_pane_t

0xcc73,	// (0x0006a97b) main_radioblah_rocker_ctrl_pane_g1

0x84fc,	// (0x00066204) main_radioblah_rocker_ctrl_pane_g2

0x8504,	// (0x0006620c) main_radioblah_rocker_ctrl_pane_g3

0x850c,	// (0x00066214) main_radioblah_rocker_ctrl_pane_g4

0x8514,	// (0x0006621c) main_radioblah_rocker_ctrl_pane_g5

0x851c,	// (0x00066224) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0006d99d) main_radioblah_rocker_ctrl_pane_g

0x7f55,	// (0x00065c5d) main_cset_text2_pane_t1_copy1_ParamLimits

0x63fa,	// (0x00064102) cam4_image_uncrop_qvga_pane

0x654d,	// (0x00064255) vid4_image_uncrop_qcif_pane

0x7a4a,	// (0x00065752) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a4a,	// (0x00065752) cam6_image_uncrop_qvga_pane

0xddc2,	// (0x0006baca) vid6_image_uncrop_qcif_pane_ParamLimits

0xddc2,	// (0x0006baca) vid6_image_uncrop_qcif_pane

0x9c6a,	// (0x00067972) bg_popup_preview_window_pane_cp03

0xe071,	// (0x0006bd79) list_cset_text2_pane

0xe079,	// (0x0006bd81) main_cset6_text2_pane_g1

0xe081,	// (0x0006bd89) main_cset6_text2_pane_t1

0x8524,	// (0x0006622c) list_cset_text2_pane_t1_ParamLimits

0x8524,	// (0x0006622c) list_cset_text2_pane_t1

0xa337,	// (0x0006803f) main_radioblah_pane_ParamLimits

0x8291,	// (0x00065f99) main_mobtv_info_pane_t3_ParamLimits

0x8291,	// (0x00065f99) main_mobtv_info_pane_t3

0x83f1,	// (0x000660f9) main_radioblah_pane_g1

0x841c,	// (0x00066124) main_radioblah_info_pane_g1

0x84a1,	// (0x000661a9) main_radioblah_info_pane_t3_ParamLimits

0x84a1,	// (0x000661a9) main_radioblah_info_pane_t3

0x308c,	// (0x00060d94) highlight_cell_cale_month_pane_ParamLimits

0x308c,	// (0x00060d94) highlight_cell_cale_month_pane

0x9c6a,	// (0x00067972) main_phob_fisheye_pane

0xcf7f,	// (0x0006ac87) scroll_pane_cp0031_ParamLimits

0xcf7f,	// (0x0006ac87) scroll_pane_cp0031

0xded4,	// (0x0006bbdc) wait_bar_pane_cp08_ParamLimits

0x7c58,	// (0x00065960) cset_list_set_pane_copy1_ParamLimits

0xe620,	// (0x0006c328) highlight_cell_cale_month_pane_g1

0x853b,	// (0x00066243) highlight_cell_cale_month_pane_t1

0xdb80,	// (0x0006b888) list_gen_pane_cp01

0xd7ab,	// (0x0006b4b3) scroll_pane_01

0x8549,	// (0x00066251) list_single_double_fisheye_pane

0x8552,	// (0x0006625a) list_double_fisheye_pane_g1_ParamLimits

0x8552,	// (0x0006625a) list_double_fisheye_pane_g1

0x855e,	// (0x00066266) list_double_fisheye_pane_g2_ParamLimits

0x855e,	// (0x00066266) list_double_fisheye_pane_g2

0x8572,	// (0x0006627a) list_double_fisheye_pane_g3_ParamLimits

0x8572,	// (0x0006627a) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0006d9aa) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0006d9aa) list_double_fisheye_pane_g

0x859b,	// (0x000662a3) list_double_fisheye_pane_t1_ParamLimits

0x859b,	// (0x000662a3) list_double_fisheye_pane_t1

0x85b6,	// (0x000662be) list_double_fisheye_pane_t2_ParamLimits

0x85b6,	// (0x000662be) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0006d9b5) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0006d9b5) list_double_fisheye_pane_t

0x9c6a,	// (0x00067972) main_call5_pane

0x8356,	// (0x0006605e) sc_swipe_pane_ParamLimits

0x8356,	// (0x0006605e) sc_swipe_pane

0x85e4,	// (0x000662ec) call5_image_pane_ParamLimits

0x85e4,	// (0x000662ec) call5_image_pane

0x85f6,	// (0x000662fe) call5_swipe_1_pane_ParamLimits

0x85f6,	// (0x000662fe) call5_swipe_1_pane

0x8602,	// (0x0006630a) call5_swipe_2_pane_ParamLimits

0x8602,	// (0x0006630a) call5_swipe_2_pane

0x861e,	// (0x00066326) popup_call5_audio_first_window_ParamLimits

0x861e,	// (0x00066326) popup_call5_audio_first_window

0xcea3,	// (0x0006abab) call5_swipe_1_pane_g1_ParamLimits

0xcea3,	// (0x0006abab) call5_swipe_1_pane_g1

0xe628,	// (0x0006c330) call5_swipe_1_pane_g2_ParamLimits

0xe628,	// (0x0006c330) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0006d9ba) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0006d9ba) call5_swipe_1_pane_g

0xe634,	// (0x0006c33c) call5_swipe_1_pane_t1_ParamLimits

0xe634,	// (0x0006c33c) call5_swipe_1_pane_t1

0xcea3,	// (0x0006abab) call5_swipe_2_pane_g1_ParamLimits

0xcea3,	// (0x0006abab) call5_swipe_2_pane_g1

0xe649,	// (0x0006c351) call5_swipe_2_pane_g2_ParamLimits

0xe649,	// (0x0006c351) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0006d9bf) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0006d9bf) call5_swipe_2_pane_g

0xe655,	// (0x0006c35d) call5_swipe_2_pane_t1_ParamLimits

0xe655,	// (0x0006c35d) call5_swipe_2_pane_t1

0xe66a,	// (0x0006c372) sc_swipe_pane_g1_ParamLimits

0xe66a,	// (0x0006c372) sc_swipe_pane_g1

0xe677,	// (0x0006c37f) sc_swipe_pane_g2_ParamLimits

0xe677,	// (0x0006c37f) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0006d9c4) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0006d9c4) sc_swipe_pane_g

0xe683,	// (0x0006c38b) sc_swipe_pane_t1_ParamLimits

0xe683,	// (0x0006c38b) sc_swipe_pane_t1

0x9c6a,	// (0x00067972) main_cmail_launcher_pane

0x862e,	// (0x00066336) aid_size_cell_cmail_l_ParamLimits

0x862e,	// (0x00066336) aid_size_cell_cmail_l

0x863e,	// (0x00066346) grid_cmail_l_pane_ParamLimits

0x863e,	// (0x00066346) grid_cmail_l_pane

0x864e,	// (0x00066356) cell_cmail_l_pane_ParamLimits

0x864e,	// (0x00066356) cell_cmail_l_pane

0x8664,	// (0x0006636c) cell_cmail_l_pane_g1_ParamLimits

0x8664,	// (0x0006636c) cell_cmail_l_pane_g1

0x8670,	// (0x00066378) cell_cmail_l_pane_t1_ParamLimits

0x8670,	// (0x00066378) cell_cmail_l_pane_t1

0xe698,	// (0x0006c3a0) cell_cmail_l_pane_t2_ParamLimits

0xe698,	// (0x0006c3a0) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0006d9c9) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0006d9c9) cell_cmail_l_pane_t

0xa337,	// (0x0006803f) grid_highlight_pane_cp018_ParamLimits

0xa337,	// (0x0006803f) grid_highlight_pane_cp018

0x0c7d,	// (0x0005e985) main2_pane_ParamLimits

0x0c7d,	// (0x0005e985) main2_pane

0xa95f,	// (0x00068667) popup_sp_fs_action_menu_bg_pane_g1

0xa967,	// (0x0006866f) popup_sp_fs_action_menu_bg_pane_g2

0xa96f,	// (0x00068677) popup_sp_fs_action_menu_bg_pane_g3

0xa977,	// (0x0006867f) popup_sp_fs_action_menu_bg_pane_g4

0xa97f,	// (0x00068687) popup_sp_fs_action_menu_bg_pane_g5

0xa987,	// (0x0006868f) popup_sp_fs_action_menu_bg_pane_g6

0xa98f,	// (0x00068697) popup_sp_fs_action_menu_bg_pane_g7

0xa997,	// (0x0006869f) popup_sp_fs_action_menu_bg_pane_g8

0xa99f,	// (0x000686a7) popup_sp_fs_action_menu_bg_pane_g9

0xa9a7,	// (0x000686af) popup_sp_fs_action_menu_bg_pane_g10

0xa9a7,	// (0x000686af) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0006ce8e) popup_sp_fs_action_menu_bg_pane_g

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t3_g3_g1

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t3_g3_g2

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006cf40) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006cf40) list_medium_line_x2_t3_g3_g

0x1eed,	// (0x0005fbf5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1eed,	// (0x0005fbf5) list_medium_line_x2_t3_g3_t1

0x1f02,	// (0x0005fc0a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f02,	// (0x0005fc0a) list_medium_line_x2_t3_g3_t2

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006cf47) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006cf47) list_medium_line_x2_t3_g3_t

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t3_g2_g1

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006cf4e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006cf4e) list_medium_line_x2_t3_g2_g

0x1f2b,	// (0x0005fc33) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f2b,	// (0x0005fc33) list_medium_line_x2_t3_g2_t1

0x1f41,	// (0x0005fc49) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f41,	// (0x0005fc49) list_medium_line_x2_t3_g2_t2

0x1f53,	// (0x0005fc5b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f53,	// (0x0005fc5b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006cf53) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006cf53) list_medium_line_x2_t3_g2_t

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t4_g4_g1

0x1f71,	// (0x0005fc79) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f71,	// (0x0005fc79) list_medium_line_x2_t4_g4_g2

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t4_g4_g3

0x1f7d,	// (0x0005fc85) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f7d,	// (0x0005fc85) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006cf5a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006cf5a) list_medium_line_x2_t4_g4_g

0x1f89,	// (0x0005fc91) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f89,	// (0x0005fc91) list_medium_line_x2_t4_g4_t1

0x1fa3,	// (0x0005fcab) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fa3,	// (0x0005fcab) list_medium_line_x2_t4_g4_t2

0x1fb9,	// (0x0005fcc1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fb9,	// (0x0005fcc1) list_medium_line_x2_t4_g4_t3

0x1fce,	// (0x0005fcd6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fce,	// (0x0005fcd6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006cf63) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006cf63) list_medium_line_x2_t4_g4_t

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t2_g4_g1

0x1f71,	// (0x0005fc79) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f71,	// (0x0005fc79) list_medium_line_x2_t2_g4_g2

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t2_g4_g3

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006cfca) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006cfca) list_medium_line_x2_t2_g4_g

0x30b2,	// (0x00060dba) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30b2,	// (0x00060dba) list_medium_line_x2_t2_g4_t1

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006cfd3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006cfd3) list_medium_line_x2_t2_g4_t

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t2_g3_g1

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t2_g3_g2

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006cf40) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006cf40) list_medium_line_x2_t2_g3_g

0x30c7,	// (0x00060dcf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30c7,	// (0x00060dcf) list_medium_line_x2_t2_g3_t1

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006cfd8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006cfd8) list_medium_line_x2_t2_g3_t

0x325d,	// (0x00060f65) main_sp_fs_list_pane_ParamLimits

0x325d,	// (0x00060f65) main_sp_fs_list_pane

0x3269,	// (0x00060f71) sp_fs_scroll_pane_ParamLimits

0x3269,	// (0x00060f71) sp_fs_scroll_pane

0x3275,	// (0x00060f7d) list_medium_line_x2_t3_t1

0x3285,	// (0x00060f8d) list_medium_line_x2_t3_t2

0x3293,	// (0x00060f9b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006d023) list_medium_line_x2_t3_t

0x32a1,	// (0x00060fa9) list_medium_line_x3_t4_t1

0x32b1,	// (0x00060fb9) list_medium_line_x3_t4_t2

0x32bf,	// (0x00060fc7) list_medium_line_x3_t4_t3

0x3293,	// (0x00060f9b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006d02a) list_medium_line_x3_t4_t

0x32cd,	// (0x00060fd5) list_medium_line_x4_t5_t1

0x32dd,	// (0x00060fe5) list_medium_line_x4_t5_t2

0x32bf,	// (0x00060fc7) list_medium_line_x4_t5_t3

0x32eb,	// (0x00060ff3) list_medium_line_x4_t5_t4

0x3293,	// (0x00060f9b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006d033) list_medium_line_x4_t5_t

0xa2dd,	// (0x00067fe5) list_medium_line_t4_g4_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_t4_g4_g1

0xa2f5,	// (0x00067ffd) list_medium_line_t4_g4_g2_ParamLimits

0xa2f5,	// (0x00067ffd) list_medium_line_t4_g4_g2

0x32f9,	// (0x00061001) list_medium_line_t4_g4_g3_ParamLimits

0x32f9,	// (0x00061001) list_medium_line_t4_g4_g3

0xa2e9,	// (0x00067ff1) list_medium_line_t4_g4_g4_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006d03e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006d03e) list_medium_line_t4_g4_g

0x3305,	// (0x0006100d) list_medium_line_t4_g4_t1_ParamLimits

0x3305,	// (0x0006100d) list_medium_line_t4_g4_t1

0x331a,	// (0x00061022) list_medium_line_t4_g4_t2_ParamLimits

0x331a,	// (0x00061022) list_medium_line_t4_g4_t2

0x3330,	// (0x00061038) list_medium_line_t4_g4_t3_ParamLimits

0x3330,	// (0x00061038) list_medium_line_t4_g4_t3

0x1f16,	// (0x0005fc1e) list_medium_line_t4_g4_t4_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006d047) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006d047) list_medium_line_t4_g4_t

0x3459,	// (0x00061161) chi_dic_find_pane_g1

0x44ba,	// (0x000621c2) main_tport_pane

0x6f48,	// (0x00064c50) list_medium_line_plain_t1

0x703f,	// (0x00064d47) list_medium_line_t2_g2_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_t2_g2_g1

0x704b,	// (0x00064d53) list_medium_line_t2_g2_g2_ParamLimits

0x704b,	// (0x00064d53) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0006d708) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0006d708) list_medium_line_t2_g2_g

0x7057,	// (0x00064d5f) list_medium_line_t2_g2_t1_ParamLimits

0x7057,	// (0x00064d5f) list_medium_line_t2_g2_t1

0x706e,	// (0x00064d76) list_medium_line_t2_g2_t2_ParamLimits

0x706e,	// (0x00064d76) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0006d70d) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0006d70d) list_medium_line_t2_g2_t

0xa40a,	// (0x00068112) aid_sp_fs_list_icon_a_sm

0xa412,	// (0x0006811a) aid_sp_fs_list_icon_d

0xa41a,	// (0x00068122) aid_sp_fs_text_primary

0xa423,	// (0x0006812b) aid_sp_fs_text_secondary

0x76fe,	// (0x00065406) list_medium_line

0x76fe,	// (0x00065406) list_medium_line_g2

0x76fe,	// (0x00065406) list_medium_line_g3

0x76fe,	// (0x00065406) list_medium_line_plain

0x76fe,	// (0x00065406) list_medium_line_plain_t2

0x76fe,	// (0x00065406) list_medium_line_plain_t3

0x76fe,	// (0x00065406) list_medium_line_right_icon

0x76fe,	// (0x00065406) list_medium_line_right_iconx2

0x76fe,	// (0x00065406) list_medium_line_t2

0x76fe,	// (0x00065406) list_medium_line_t2_g2

0x76fe,	// (0x00065406) list_medium_line_t2_g3

0x76fe,	// (0x00065406) list_medium_line_t2_right_icon

0x76fe,	// (0x00065406) list_medium_line_t2_right_iconx2

0x76fe,	// (0x00065406) list_medium_line_t3

0x76fe,	// (0x00065406) list_medium_line_t3_g2

0x76fe,	// (0x00065406) list_medium_line_t3_g3

0x76fe,	// (0x00065406) list_medium_line_t3_right_iconx2

0x7707,	// (0x0006540f) list_medium_line_t4_g4

0x7710,	// (0x00065418) list_medium_line_x2

0x7710,	// (0x00065418) list_medium_line_x2_t2_g2

0x7710,	// (0x00065418) list_medium_line_x2_t2_g3

0x7710,	// (0x00065418) list_medium_line_x2_t2_g4

0x7710,	// (0x00065418) list_medium_line_x2_t3

0x7710,	// (0x00065418) list_medium_line_x2_t3_g2

0x7710,	// (0x00065418) list_medium_line_x2_t3_g3

0x7710,	// (0x00065418) list_medium_line_x2_t3_g4

0x7710,	// (0x00065418) list_medium_line_x2_t4_g2

0x7710,	// (0x00065418) list_medium_line_x2_t4_g4

0x7719,	// (0x00065421) list_medium_line_x3

0x7719,	// (0x00065421) list_medium_line_x3_t4

0x7719,	// (0x00065421) list_medium_line_x3_t4_g4

0x7707,	// (0x0006540f) list_medium_line_x4_t4

0x7707,	// (0x0006540f) list_medium_line_x4_t4_g7

0x7707,	// (0x0006540f) list_medium_line_x4_t5

0x7722,	// (0x0006542a) list_single_fs_dyc_pane_ParamLimits

0x7722,	// (0x0006542a) list_single_fs_dyc_pane

0xa2dd,	// (0x00067fe5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x4_t4_g7_g1

0xa42c,	// (0x00068134) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa42c,	// (0x00068134) list_medium_line_x4_t4_g7_g2

0x7eb0,	// (0x00065bb8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7eb0,	// (0x00065bb8) list_medium_line_x4_t4_g7_g3

0x7ebf,	// (0x00065bc7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ebf,	// (0x00065bc7) list_medium_line_x4_t4_g7_g4

0x7ecb,	// (0x00065bd3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ecb,	// (0x00065bd3) list_medium_line_x4_t4_g7_g5

0x7eda,	// (0x00065be2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7eda,	// (0x00065be2) list_medium_line_x4_t4_g7_g6

0xa438,	// (0x00068140) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa438,	// (0x00068140) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0006d8d1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0006d8d1) list_medium_line_x4_t4_g7_g

0x7ee9,	// (0x00065bf1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ee9,	// (0x00065bf1) list_medium_line_x4_t4_g7_t1

0x7efe,	// (0x00065c06) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7efe,	// (0x00065c06) list_medium_line_x4_t4_g7_t2

0x7f13,	// (0x00065c1b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f13,	// (0x00065c1b) list_medium_line_x4_t4_g7_t3

0x7f28,	// (0x00065c30) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f28,	// (0x00065c30) list_medium_line_x4_t4_g7_t4

0xa444,	// (0x0006814c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa444,	// (0x0006814c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0006d8e0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0006d8e0) list_medium_line_x4_t4_g7_t

0x7f3a,	// (0x00065c42) list_single_dyc_row_pane_ParamLimits

0x7f3a,	// (0x00065c42) list_single_dyc_row_pane

0x85d8,	// (0x000662e0) call5_gesture_pane_ParamLimits

0x85d8,	// (0x000662e0) call5_gesture_pane

0x860e,	// (0x00066316) call5_windows_pane_ParamLimits

0x860e,	// (0x00066316) call5_windows_pane

0x8686,	// (0x0006638e) call5_swipe_1_pane_cp_ParamLimits

0x8686,	// (0x0006638e) call5_swipe_1_pane_cp

0x8692,	// (0x0006639a) call5_swipe_2_pane_cp_ParamLimits

0x8692,	// (0x0006639a) call5_swipe_2_pane_cp

0xb3f9,	// (0x00069101) call5_image_pane_cp

0x869e,	// (0x000663a6) popup_call5_audio_first_window_cp_ParamLimits

0x869e,	// (0x000663a6) popup_call5_audio_first_window_cp

0xe66a,	// (0x0006c372) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66a,	// (0x0006c372) call5_swipe_1_pane_g1_cp

0xe6aa,	// (0x0006c3b2) call5_swipe_1_pane_g2_cp

0xe683,	// (0x0006c38b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe683,	// (0x0006c38b) call5_swipe_1_pane_t1_cp

0xe66a,	// (0x0006c372) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66a,	// (0x0006c372) call5_swipe_2_pane_g1_cp

0xe6b2,	// (0x0006c3ba) call5_swipe_2_pane_g2_cp

0xe6ba,	// (0x0006c3c2) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ba,	// (0x0006c3c2) call5_swipe_2_pane_t1_cp

0xa337,	// (0x0006803f) main_sp_fs_email_pane

0xe6cf,	// (0x0006c3d7) main_sp_fs_listscroll_pane_te

0xa456,	// (0x0006815e) popup_sp_fs_action_menu_pane_ParamLimits

0xa456,	// (0x0006815e) popup_sp_fs_action_menu_pane

0xcc73,	// (0x0006a97b) bg_sp_fs_ctrlbar_pane_g1

0xd228,	// (0x0006af30) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd23a,	// (0x0006af42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd231,	// (0x0006af39) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc73,	// (0x0006a97b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0006d9ce) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca52,	// (0x0006a75a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca52,	// (0x0006a75a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d8,	// (0x0006c3e0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d8,	// (0x0006c3e0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e4,	// (0x0006c3ec) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e4,	// (0x0006c3ec) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0006d9d7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0006d9d7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f0,	// (0x0006c3f8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f0,	// (0x0006c3f8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86ac,	// (0x000663b4) list_medium_line_t2_right_icon_g1

0x86b4,	// (0x000663bc) list_medium_line_t2_right_icon_t1

0x86c4,	// (0x000663cc) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0006d9dc) list_medium_line_t2_right_icon_t

0xc822,	// (0x0006a52a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc822,	// (0x0006a52a) bg_sp_fs_ctrlbar_pane

0x872b,	// (0x00066433) main_sp_fs_ctrlbar_button_pane_cp01

0x8733,	// (0x0006643b) main_sp_fs_ctrlbar_ddmenu_pane

0xd47c,	// (0x0006b184) main_sp_fs_ctrlbar_pane_g1

0xe742,	// (0x0006c44a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0006d9e1) main_sp_fs_ctrlbar_pane_g

0xe74e,	// (0x0006c456) main_sp_fs_ctrlbar_pane_t1

0x873d,	// (0x00066445) main_sp_fs_ctrlbar_pane

0x8757,	// (0x0006645f) main_sp_fs_listscroll_pane_te_cp01

0x8768,	// (0x00066470) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8768,	// (0x00066470) popup_sp_fs_action_menu_pane_cp01

0xa337,	// (0x0006803f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa337,	// (0x0006803f) bg_sp_fs_highlight_list_pane_cp01

0xa49c,	// (0x000681a4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa49c,	// (0x000681a4) sp_fs_action_menu_list_gene_pane_g1

0xe77e,	// (0x0006c486) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe77e,	// (0x0006c486) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0006d9eb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0006d9eb) sp_fs_action_menu_list_gene_pane_g

0xa4ab,	// (0x000681b3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4ab,	// (0x000681b3) sp_fs_action_menu_list_gene_pane_t1

0xa4c3,	// (0x000681cb) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4c3,	// (0x000681cb) sp_fs_action_menu_list_gene_pane

0xe78b,	// (0x0006c493) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78b,	// (0x0006c493) popup_sp_fs_action_menu_bg_pane

0xa4e6,	// (0x000681ee) sp_fs_action_menu_list_pane_ParamLimits

0xa4e6,	// (0x000681ee) sp_fs_action_menu_list_pane

0xe799,	// (0x0006c4a1) sp_fs_scroll_pane_cp01_ParamLimits

0xe799,	// (0x0006c4a1) sp_fs_scroll_pane_cp01

0x8792,	// (0x0006649a) list_medium_line_plain_t2_t1

0x87a2,	// (0x000664aa) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0006d9f0) list_medium_line_plain_t2_t

0x87b0,	// (0x000664b8) list_medium_line_plain_t3_t1

0x87c0,	// (0x000664c8) list_medium_line_plain_t3_t2

0x87ce,	// (0x000664d6) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0006d9f5) list_medium_line_plain_t3_t

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t2_g2_g1

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006cf4e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006cf4e) list_medium_line_x2_t2_g2_g

0x3305,	// (0x0006100d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3305,	// (0x0006100d) list_medium_line_x2_t2_g2_t1

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0006d9fc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0006d9fc) list_medium_line_x2_t2_g2_t

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t4_g2_g1

0xa50a,	// (0x00068212) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa50a,	// (0x00068212) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0006da01) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0006da01) list_medium_line_x2_t4_g2_g

0x87dc,	// (0x000664e4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87dc,	// (0x000664e4) list_medium_line_x2_t4_g2_t1

0x87f6,	// (0x000664fe) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87f6,	// (0x000664fe) list_medium_line_x2_t4_g2_t2

0x880c,	// (0x00066514) list_medium_line_x2_t4_g2_t3_ParamLimits

0x880c,	// (0x00066514) list_medium_line_x2_t4_g2_t3

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0006da06) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0006da06) list_medium_line_x2_t4_g2_t

0x8821,	// (0x00066529) list_medium_line_t3_right_iconx2_g1

0x86ac,	// (0x000663b4) list_medium_line_t3_right_iconx2_g2

0x8829,	// (0x00066531) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0006da0f) list_medium_line_t3_right_iconx2_g

0x8833,	// (0x0006653b) list_medium_line_t3_right_iconx2_t1

0x8843,	// (0x0006654b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0006da16) list_medium_line_t3_right_iconx2_t

0xa2dd,	// (0x00067fe5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x3_t4_g4_g1

0x1ee1,	// (0x0005fbe9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x3_t4_g4_g2

0xa2f5,	// (0x00067ffd) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa2f5,	// (0x00067ffd) list_medium_line_x3_t4_g4_g3

0x8851,	// (0x00066559) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8851,	// (0x00066559) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0006da1b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0006da1b) list_medium_line_x3_t4_g4_g

0x885d,	// (0x00066565) list_medium_line_x3_t4_g4_t1_ParamLimits

0x885d,	// (0x00066565) list_medium_line_x3_t4_g4_t1

0x8874,	// (0x0006657c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8874,	// (0x0006657c) list_medium_line_x3_t4_g4_t2

0x8889,	// (0x00066591) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8889,	// (0x00066591) list_medium_line_x3_t4_g4_t3

0x889e,	// (0x000665a6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x889e,	// (0x000665a6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0006da24) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0006da24) list_medium_line_x3_t4_g4_t

0x88bb,	// (0x000665c3) list_single_dyc_row_text_pane_t1_ParamLimits

0x88bb,	// (0x000665c3) list_single_dyc_row_text_pane_t1

0x88f8,	// (0x00066600) list_single_dyc_row_text_pane_t2_ParamLimits

0x88f8,	// (0x00066600) list_single_dyc_row_text_pane_t2

0xa51c,	// (0x00068224) list_single_dyc_row_text_pane_t3_ParamLimits

0xa51c,	// (0x00068224) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0006da2d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0006da2d) list_single_dyc_row_text_pane_t

0xa540,	// (0x00068248) list_single_dyc_row_pane_g1_ParamLimits

0xa540,	// (0x00068248) list_single_dyc_row_pane_g1

0xa54c,	// (0x00068254) list_single_dyc_row_pane_g2_ParamLimits

0xa54c,	// (0x00068254) list_single_dyc_row_pane_g2

0xa558,	// (0x00068260) list_single_dyc_row_pane_g3_ParamLimits

0xa558,	// (0x00068260) list_single_dyc_row_pane_g3

0xa564,	// (0x0006826c) list_single_dyc_row_pane_g4_ParamLimits

0xa564,	// (0x0006826c) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0006da3a) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0006da3a) list_single_dyc_row_pane_g

0xa570,	// (0x00068278) list_single_dyc_row_text_pane_ParamLimits

0xa570,	// (0x00068278) list_single_dyc_row_text_pane

0x9c6a,	// (0x00067972) bg_sp_fs_scroll_pane

0xe7bf,	// (0x0006c4c7) thumb_sp_fs_scroll_pane

0x703f,	// (0x00064d47) list_medium_line_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_g1

0x8a21,	// (0x00066729) list_medium_line_t1_ParamLimits

0x8a21,	// (0x00066729) list_medium_line_t1

0xa2dd,	// (0x00067fe5) list_medium_line_x2_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_g1

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_g2_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0006da43) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0006da43) list_medium_line_x2_g

0xa58f,	// (0x00068297) list_medium_line_x2_t1_ParamLimits

0xa58f,	// (0x00068297) list_medium_line_x2_t1

0xa2dd,	// (0x00067fe5) list_medium_line_x3_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x3_g1

0x1ee1,	// (0x0005fbe9) list_medium_line_x3_g2_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0006da43) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0006da43) list_medium_line_x3_g

0xa58f,	// (0x00068297) list_medium_line_x3_t1_ParamLimits

0xa58f,	// (0x00068297) list_medium_line_x3_t1

0xe7c8,	// (0x0006c4d0) thumb_sp_fs_scroll_pane_g1

0xe7d1,	// (0x0006c4d9) thumb_sp_fs_scroll_pane_g2

0xe7da,	// (0x0006c4e2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006da48) thumb_sp_fs_scroll_pane_g

0xe7c8,	// (0x0006c4d0) bg_sp_fs_scroll_pane_g1

0xe7d1,	// (0x0006c4d9) bg_sp_fs_scroll_pane_g2

0xe7da,	// (0x0006c4e2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006da48) bg_sp_fs_scroll_pane_g

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa2dd,	// (0x00067fe5) list_medium_line_x2_t3_g4_g1

0x1f71,	// (0x0005fc79) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f71,	// (0x0005fc79) list_medium_line_x2_t3_g4_g2

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ee1,	// (0x0005fbe9) list_medium_line_x2_t3_g4_g3

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa2e9,	// (0x00067ff1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006cfca) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006cfca) list_medium_line_x2_t3_g4_g

0x8a36,	// (0x0006673e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a36,	// (0x0006673e) list_medium_line_x2_t3_g4_t1

0x8a4c,	// (0x00066754) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a4c,	// (0x00066754) list_medium_line_x2_t3_g4_t2

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f16,	// (0x0005fc1e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0006da4f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0006da4f) list_medium_line_x2_t3_g4_t

0x703f,	// (0x00064d47) list_medium_line_g2_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_g2_g1

0x704b,	// (0x00064d53) list_medium_line_g2_g2_ParamLimits

0x704b,	// (0x00064d53) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0006d708) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0006d708) list_medium_line_g2_g

0x8a65,	// (0x0006676d) list_medium_line_g2_t1_ParamLimits

0x8a65,	// (0x0006676d) list_medium_line_g2_t1

0x703f,	// (0x00064d47) list_medium_line_t3_g2_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_t3_g2_g1

0x704b,	// (0x00064d53) list_medium_line_t3_g2_g2_ParamLimits

0x704b,	// (0x00064d53) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0006d708) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0006d708) list_medium_line_t3_g2_g

0x8a7a,	// (0x00066782) list_medium_line_t3_g2_t1_ParamLimits

0x8a7a,	// (0x00066782) list_medium_line_t3_g2_t1

0x8a94,	// (0x0006679c) list_medium_line_t3_g2_t2_ParamLimits

0x8a94,	// (0x0006679c) list_medium_line_t3_g2_t2

0x8aaa,	// (0x000667b2) list_medium_line_t3_g2_t3_ParamLimits

0x8aaa,	// (0x000667b2) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0006da56) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0006da56) list_medium_line_t3_g2_t

0x86ac,	// (0x000663b4) list_medium_line_right_icon_g1

0x8ac1,	// (0x000667c9) list_medium_line_right_icon_t1

0x703f,	// (0x00064d47) list_medium_line_t2_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_t2_g1

0x8acf,	// (0x000667d7) list_medium_line_t2_t1_ParamLimits

0x8acf,	// (0x000667d7) list_medium_line_t2_t1

0x8ae9,	// (0x000667f1) list_medium_line_t2_t2_ParamLimits

0x8ae9,	// (0x000667f1) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0006da5d) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0006da5d) list_medium_line_t2_t

0x703f,	// (0x00064d47) list_medium_line_t3_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_t3_g1

0x8afe,	// (0x00066806) list_medium_line_t3_t1_ParamLimits

0x8afe,	// (0x00066806) list_medium_line_t3_t1

0x8b15,	// (0x0006681d) list_medium_line_t3_t2_ParamLimits

0x8b15,	// (0x0006681d) list_medium_line_t3_t2

0x8b2a,	// (0x00066832) list_medium_line_t3_t3_ParamLimits

0x8b2a,	// (0x00066832) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0006da62) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0006da62) list_medium_line_t3_t

0x703f,	// (0x00064d47) list_medium_line_g3_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_g3_g1

0x8b3c,	// (0x00066844) list_medium_line_g3_g2_ParamLimits

0x8b3c,	// (0x00066844) list_medium_line_g3_g2

0x704b,	// (0x00064d53) list_medium_line_g3_g3_ParamLimits

0x704b,	// (0x00064d53) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0006da69) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0006da69) list_medium_line_g3_g

0x8b48,	// (0x00066850) list_medium_line_g3_t1_ParamLimits

0x8b48,	// (0x00066850) list_medium_line_g3_t1

0x703f,	// (0x00064d47) list_medium_line_t2_g3_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_t2_g3_g1

0x8b3c,	// (0x00066844) list_medium_line_t2_g3_g2_ParamLimits

0x8b3c,	// (0x00066844) list_medium_line_t2_g3_g2

0x704b,	// (0x00064d53) list_medium_line_t2_g3_g3_ParamLimits

0x704b,	// (0x00064d53) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0006da69) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0006da69) list_medium_line_t2_g3_g

0x8b5d,	// (0x00066865) list_medium_line_t2_g3_t1_ParamLimits

0x8b5d,	// (0x00066865) list_medium_line_t2_g3_t1

0x8b74,	// (0x0006687c) list_medium_line_t2_g3_t2_ParamLimits

0x8b74,	// (0x0006687c) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0006da70) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0006da70) list_medium_line_t2_g3_t

0x703f,	// (0x00064d47) list_medium_line_t3_g3_g1_ParamLimits

0x703f,	// (0x00064d47) list_medium_line_t3_g3_g1

0x8b3c,	// (0x00066844) list_medium_line_t3_g3_g2_ParamLimits

0x8b3c,	// (0x00066844) list_medium_line_t3_g3_g2

0x704b,	// (0x00064d53) list_medium_line_t3_g3_g3_ParamLimits

0x704b,	// (0x00064d53) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0006da69) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0006da69) list_medium_line_t3_g3_g

0x8b89,	// (0x00066891) list_medium_line_t3_g3_t1_ParamLimits

0x8b89,	// (0x00066891) list_medium_line_t3_g3_t1

0x8b9d,	// (0x000668a5) list_medium_line_t3_g3_t2_ParamLimits

0x8b9d,	// (0x000668a5) list_medium_line_t3_g3_t2

0x8baf,	// (0x000668b7) list_medium_line_t3_g3_t3_ParamLimits

0x8baf,	// (0x000668b7) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0006da75) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0006da75) list_medium_line_t3_g3_t

0x8821,	// (0x00066529) list_medium_line_right_iconx2_g1

0x86ac,	// (0x000663b4) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006da7c) list_medium_line_right_iconx2_g

0x8bc3,	// (0x000668cb) list_medium_line_right_iconx2_t1

0x8821,	// (0x00066529) list_medium_line_t2_right_iconx2_g1

0x86ac,	// (0x000663b4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006da7c) list_medium_line_t2_right_iconx2_g

0x8bd1,	// (0x000668d9) list_medium_line_t2_right_iconx2_t1

0x8be1,	// (0x000668e9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0006da81) list_medium_line_t2_right_iconx2_t

0x8bef,	// (0x000668f7) list_medium_line_x4_t4_t1

0x8bfd,	// (0x00066905) list_medium_line_x4_t4_t2

0x8c0d,	// (0x00066915) list_medium_line_x4_t4_t3

0x8c1d,	// (0x00066925) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0006da86) list_medium_line_x4_t4_t

0x8c57,	// (0x0006695f) tport_appsw_pane_ParamLimits

0x8c57,	// (0x0006695f) tport_appsw_pane

0x8c65,	// (0x0006696d) tport_contact_pane_ParamLimits

0x8c65,	// (0x0006696d) tport_contact_pane

0x8c75,	// (0x0006697d) tport_listscroll_pane_ParamLimits

0x8c75,	// (0x0006697d) tport_listscroll_pane

0x8c85,	// (0x0006698d) cell_tport_appsw_pane_ParamLimits

0x8c85,	// (0x0006698d) cell_tport_appsw_pane

0xcf08,	// (0x0006ac10) tport_appsw_pane_g1_ParamLimits

0xcf08,	// (0x0006ac10) tport_appsw_pane_g1

0xe7e3,	// (0x0006c4eb) tport_contact_pane_g1

0xe7ec,	// (0x0006c4f4) tport_contact_pane_t1

0xe7fa,	// (0x0006c502) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0006da8f) tport_contact_pane_t

0xe808,	// (0x0006c510) list_tport_pane

0xe811,	// (0x0006c519) scroll_pane_cp_030

0x8cba,	// (0x000669c2) cell_tport_appsw_pane_g1

0x8cca,	// (0x000669d2) cell_tport_appsw_pane_t1

0x8cd8,	// (0x000669e0) grid_highlight_pane_cp019

0x8ce0,	// (0x000669e8) list_tport_double_graphic_pane_ParamLimits

0x8ce0,	// (0x000669e8) list_tport_double_graphic_pane

0xa337,	// (0x0006803f) list_highlight_pane_cp023_ParamLimits

0xa337,	// (0x0006803f) list_highlight_pane_cp023

0x8ced,	// (0x000669f5) list_tport_double_graphic_pane_g1_ParamLimits

0x8ced,	// (0x000669f5) list_tport_double_graphic_pane_g1

0x8cfa,	// (0x00066a02) list_tport_double_graphic_pane_t1_ParamLimits

0x8cfa,	// (0x00066a02) list_tport_double_graphic_pane_t1

0x8d0f,	// (0x00066a17) list_tport_double_graphic_pane_t2_ParamLimits

0x8d0f,	// (0x00066a17) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0006da9b) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0006da9b) list_tport_double_graphic_pane_t

0x9c6a,	// (0x00067972) main_cale_note_pane

0x67cc,	// (0x000644d4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67cc,	// (0x000644d4) cell_vitu2_function_top_wide_pane_cp01

0x82a5,	// (0x00065fad) wait_bar_pane_cp05_ParamLimits

0xa337,	// (0x0006803f) listscroll_cmail_pane

0xe822,	// (0x0006c52a) list_cmail_pane

0x8d2b,	// (0x00066a33) list_cmail_body_pane

0x8d44,	// (0x00066a4c) list_single_cmail_header_caption_pane

0x8d65,	// (0x00066a6d) list_single_cmail_header_detail_pane_ParamLimits

0x8d65,	// (0x00066a6d) list_single_cmail_header_detail_pane

0x8d96,	// (0x00066a9e) list_single_cmail_header_caption_pane_t1

0x8da6,	// (0x00066aae) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8da6,	// (0x00066aae) list_single_cmail_header_detail_pane_g1

0xa5a5,	// (0x000682ad) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa5a5,	// (0x000682ad) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0006daa0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0006daa0) list_single_cmail_header_detail_pane_g

0x8dbe,	// (0x00066ac6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8dbe,	// (0x00066ac6) list_single_cmail_header_detail_pane_t1

0x8e06,	// (0x00066b0e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e06,	// (0x00066b0e) list_single_cmail_header_editor_pane_bg

0xe2f0,	// (0x0006bff8) list_cmail_body_pane_g1

0xe84f,	// (0x0006c557) list_cmail_body_pane_t1

0xd68d,	// (0x0006b395) list_single_cmail_header_editor_pane_bg_g1

0xacdd,	// (0x000689e5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd69d,	// (0x0006b3a5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd695,	// (0x0006b39d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b7,	// (0x0006b5bf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6bd,	// (0x0006b3c5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ad,	// (0x0006b3b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b5,	// (0x0006b3bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacbd,	// (0x000689c5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e1d,	// (0x00066b25) calenote_gesture_pane_ParamLimits

0x8e1d,	// (0x00066b25) calenote_gesture_pane

0x8e37,	// (0x00066b3f) calenote_window_pane_ParamLimits

0x8e37,	// (0x00066b3f) calenote_window_pane

0xe85d,	// (0x0006c565) popup_note_window_cp01

0x8e4f,	// (0x00066b57) calenote_swipe_1_pane_ParamLimits

0x8e4f,	// (0x00066b57) calenote_swipe_1_pane

0x8692,	// (0x0006639a) calenote_swipe_2_pane_ParamLimits

0x8692,	// (0x0006639a) calenote_swipe_2_pane

0xe66a,	// (0x0006c372) calenote_swipe_1_pane_g1_ParamLimits

0xe66a,	// (0x0006c372) calenote_swipe_1_pane_g1

0xe677,	// (0x0006c37f) calenote_swipe_1_pane_g2_ParamLimits

0xe677,	// (0x0006c37f) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0006d9c4) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0006d9c4) calenote_swipe_1_pane_g

0xe86f,	// (0x0006c577) calenote_swipe_1_pane_t1_ParamLimits

0xe86f,	// (0x0006c577) calenote_swipe_1_pane_t1

0xe66a,	// (0x0006c372) calenote_swipe_2_pane_g1_ParamLimits

0xe66a,	// (0x0006c372) calenote_swipe_2_pane_g1

0xe88e,	// (0x0006c596) calenote_swipe_2_pane_g2_ParamLimits

0xe88e,	// (0x0006c596) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0006daac) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0006daac) calenote_swipe_2_pane_g

0xe89a,	// (0x0006c5a2) calenote_swipe_2_pane_t1_ParamLimits

0xe89a,	// (0x0006c5a2) calenote_swipe_2_pane_t1

0x9c6a,	// (0x00067972) main_mup_navstr_pane

0x54d3,	// (0x000631db) main_mup3_pane_t7_ParamLimits

0x54d3,	// (0x000631db) main_mup3_pane_t7

0x5ed6,	// (0x00063bde) main_mp4_pane_g6_ParamLimits

0x5ed6,	// (0x00063bde) main_mp4_pane_g6

0x6254,	// (0x00063f5c) main_image3_pane_t4_ParamLimits

0x6254,	// (0x00063f5c) main_image3_pane_t4

0x8e62,	// (0x00066b6a) popup_navstr_preview_pane_ParamLimits

0x8e62,	// (0x00066b6a) popup_navstr_preview_pane

0x8e6e,	// (0x00066b76) scroll_navstr_pane_ParamLimits

0x8e6e,	// (0x00066b76) scroll_navstr_pane

0x9c6a,	// (0x00067972) bg_popup_preview_window_pane_cp04

0xe8c1,	// (0x0006c5c9) popup_navstr_preview_pane_t1

0x8e7a,	// (0x00066b82) scroll_navstr_pane_g1_ParamLimits

0x8e7a,	// (0x00066b82) scroll_navstr_pane_g1

0x8e87,	// (0x00066b8f) scroll_navstr_pane_t1_ParamLimits

0x8e87,	// (0x00066b8f) scroll_navstr_pane_t1

0xe866,	// (0x0006c56e) bg_button_pane_cp014

0xe866,	// (0x0006c56e) bg_button_pane_cp030

0x857e,	// (0x00066286) list_double_fisheye_pane_g4_ParamLimits

0x857e,	// (0x00066286) list_double_fisheye_pane_g4

0x858a,	// (0x00066292) list_double_fisheye_pane_g5_ParamLimits

0x858a,	// (0x00066292) list_double_fisheye_pane_g5

0xe82a,	// (0x0006c532) sp_fs_scroll_pane_cp03

0xd47c,	// (0x0006b184) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe742,	// (0x0006c44a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0006d9e1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe74e,	// (0x0006c456) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d21,	// (0x00066a29) sp_fs_scroll_pane_cp02

0xa9ca,	// (0x000686d2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9ca,	// (0x000686d2) popup_sp_fs_calendar_preview_list_single_pane

0x9c6a,	// (0x00067972) main_cam6_pano_pane

0xa337,	// (0x0006803f) main_mup3_pane_ParamLimits

0x9c6a,	// (0x00067972) main_phacti_pane

0x8178,	// (0x00065e80) bg_button_pane_cp11

0x8190,	// (0x00065e98) main_mobtv_info_pane_g2_ParamLimits

0x8190,	// (0x00065e98) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0006d941) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0006d941) main_mobtv_info_pane_g

0x8342,	// (0x0006604a) sc_clock_pane_t5_ParamLimits

0x8342,	// (0x0006604a) sc_clock_pane_t5

0x83f1,	// (0x000660f9) main_radioblah_pane_g1_ParamLimits

0xe59b,	// (0x0006c2a3) main_radioblah_pane_t3_ParamLimits

0xe59b,	// (0x0006c2a3) main_radioblah_pane_t3

0xe5b3,	// (0x0006c2bb) main_radioblah_pane_t4_ParamLimits

0xe5b3,	// (0x0006c2bb) main_radioblah_pane_t4

0x840f,	// (0x00066117) main_radioblah_text_pane_ParamLimits

0x840f,	// (0x00066117) main_radioblah_text_pane

0x841c,	// (0x00066124) main_radioblah_info_pane_g1_ParamLimits

0x84b5,	// (0x000661bd) main_radioblah_info_pane_t4_ParamLimits

0x84b5,	// (0x000661bd) main_radioblah_info_pane_t4

0xa337,	// (0x0006803f) main_sp_fs_calendar_pane

0x8e99,	// (0x00066ba1) main_phacti_pane_g1

0x8ea1,	// (0x00066ba9) phacti_note_pane_ParamLimits

0x8ea1,	// (0x00066ba9) phacti_note_pane

0xe8d8,	// (0x0006c5e0) phacti_term_pane_ParamLimits

0xe8d8,	// (0x0006c5e0) phacti_term_pane

0xe8ed,	// (0x0006c5f5) phacti_note_pane_t1_ParamLimits

0xe8ed,	// (0x0006c5f5) phacti_note_pane_t1

0xa5d5,	// (0x000682dd) phacti_term_pane_g1

0xa5dd,	// (0x000682e5) phacti_term_pane_t1_ParamLimits

0xa5dd,	// (0x000682e5) phacti_term_pane_t1

0xe904,	// (0x0006c60c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe90c,	// (0x0006c614) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0006dab6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe914,	// (0x0006c61c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe914,	// (0x0006c61c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe92a,	// (0x0006c632) aid_popup_sp_fs_bg_corner_pane

0xcc73,	// (0x0006a97b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c6a,	// (0x00067972) popup_sp_fs_calendar_preview_bg_pane

0xe932,	// (0x0006c63a) popup_sp_fs_calendar_preview_list_pane

0xc822,	// (0x0006a52a) bg_main_sp_fs_cale_pane_ParamLimits

0xc822,	// (0x0006a52a) bg_main_sp_fs_cale_pane

0xa610,	// (0x00068318) listscroll_cale_mrui_pane_ParamLimits

0xa610,	// (0x00068318) listscroll_cale_mrui_pane

0xa625,	// (0x0006832d) listscroll_sp_fs_schedule_track_pane

0xa62e,	// (0x00068336) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa62e,	// (0x00068336) main_sp_fs_ctrlbar_pane_cp01

0xe93a,	// (0x0006c642) main_sp_fs_ribbon_pane

0xa641,	// (0x00068349) popup_sp_fs_cale_preview_window

0x8f00,	// (0x00066c08) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f00,	// (0x00066c08) list_single_sp_fs_schedule_track_pane

0x0e06,	// (0x0005eb0e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0e06,	// (0x0005eb0e) bg_sp_fs_highlight_list_pane_cp03

0x8f15,	// (0x00066c1d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f15,	// (0x00066c1d) list_single_sp_fs_schedule_track_pane_g1

0x8f21,	// (0x00066c29) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f21,	// (0x00066c29) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0006dabb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0006dabb) list_single_sp_fs_schedule_track_pane_g

0x8f2d,	// (0x00066c35) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f2d,	// (0x00066c35) list_single_sp_fs_schedule_track_pane_t1

0x8f4b,	// (0x00066c53) sp_fs_schedule_track_pane_ParamLimits

0x8f4b,	// (0x00066c53) sp_fs_schedule_track_pane

0xe942,	// (0x0006c64a) sp_fs_schedule_track_pane_g1

0xe94a,	// (0x0006c652) sp_fs_schedule_track_pane_g2

0xe952,	// (0x0006c65a) sp_fs_schedule_track_pane_g3

0xe95a,	// (0x0006c662) sp_fs_schedule_track_pane_g4

0xe962,	// (0x0006c66a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0006dac0) sp_fs_schedule_track_pane_g

0xd68d,	// (0x0006b395) bg_sp_fs_schedule_viewer_highlight_g1

0xacdd,	// (0x000689e5) bg_sp_fs_schedule_viewer_highlight_g2

0xd695,	// (0x0006b39d) bg_sp_fs_schedule_viewer_highlight_g3

0xd69d,	// (0x0006b3a5) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b7,	// (0x0006b5bf) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ad,	// (0x0006b3b5) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b5,	// (0x0006b3bd) bg_sp_fs_schedule_viewer_highlight_g7

0xd6bd,	// (0x0006b3c5) bg_sp_fs_schedule_viewer_highlight_g8

0xacbd,	// (0x000689c5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0006dacb) bg_sp_fs_schedule_viewer_highlight_g

0x9c6a,	// (0x00067972) bg_main_sp_fs_ribbon_pane

0x8f5d,	// (0x00066c65) main_sp_fs_ribbon_pane_g1

0xe96a,	// (0x0006c672) main_sp_fs_ribbon_pane_t1

0x8f66,	// (0x00066c6e) main_sp_fs_ribbon_pane_t2

0xe979,	// (0x0006c681) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0006dade) main_sp_fs_ribbon_pane_t

0xe988,	// (0x0006c690) main_sp_fs_ribbon_scheduler_pane

0xe990,	// (0x0006c698) bg_main_sp_fs_ribbon_pane_g1

0xe999,	// (0x0006c6a1) bg_main_sp_fs_ribbon_pane_g2

0xe9a2,	// (0x0006c6aa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0006dae5) bg_main_sp_fs_ribbon_pane_g

0xe9aa,	// (0x0006c6b2) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b3,	// (0x0006c6bb) main_sp_fs_ribbon_scheduler_pane_g2

0xe9bc,	// (0x0006c6c4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0006daec) main_sp_fs_ribbon_scheduler_pane_g

0xe9c5,	// (0x0006c6cd) list_cale_mrui_pane

0x8f75,	// (0x00066c7d) sp_fs_scroll_pane_cp07_ParamLimits

0x8f75,	// (0x00066c7d) sp_fs_scroll_pane_cp07

0x8f91,	// (0x00066c99) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f91,	// (0x00066c99) bg_sp_fs_schedule_viewer_highlight

0xe9d2,	// (0x0006c6da) list_single_sp_fs_schedule_track_pane_cp01

0xe9da,	// (0x0006c6e2) list_sp_fs_schedule_track_pane

0xe9e2,	// (0x0006c6ea) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e2,	// (0x0006c6ea) sp_fs_scroll_pane_cp06

0xcc73,	// (0x0006a97b) bgmain_sp_fs_calendar_pane_g1

0x8f9e,	// (0x00066ca6) list_single_cale_mrui_pane_ParamLimits

0x8f9e,	// (0x00066ca6) list_single_cale_mrui_pane

0xa653,	// (0x0006835b) list_single_cale_mrui_row_pane_ParamLimits

0xa653,	// (0x0006835b) list_single_cale_mrui_row_pane

0xa669,	// (0x00068371) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa669,	// (0x00068371) list_single_cale_mrui_row_pane_g1

0xa6a1,	// (0x000683a9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6a1,	// (0x000683a9) list_single_cale_mrui_row_pane_t1

0x8fb3,	// (0x00066cbb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fb3,	// (0x00066cbb) list_single_cale_mrui_row_pane_t2

0xa6b3,	// (0x000683bb) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa6b3,	// (0x000683bb) list_single_cale_mrui_row_pane_t3

0xa6e2,	// (0x000683ea) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa6e2,	// (0x000683ea) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0006dafa) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0006dafa) list_single_cale_mrui_row_pane_t

0x9019,	// (0x00066d21) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9019,	// (0x00066d21) list_single_cmail_header_editor_pane_bg_cp01

0x903d,	// (0x00066d45) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x903d,	// (0x00066d45) list_single_cmail_header_editor_pane_bg_cp02

0x9059,	// (0x00066d61) main_radioblah_text_pane_t1_ParamLimits

0x9059,	// (0x00066d61) main_radioblah_text_pane_t1

0xea01,	// (0x0006c709) cam6_indi_pane_cp01

0xea09,	// (0x0006c711) cam6_mode_pane_cp01

0xea11,	// (0x0006c719) cam6_pano_pane

0xea1a,	// (0x0006c722) cam6_zoom_pane_cp01

0xea24,	// (0x0006c72c) cam6_pano_image_pane

0xea2d,	// (0x0006c735) cam6_pano_pane_g1

0xe2f0,	// (0x0006bff8) cam6_pano_pane_g2

0xea36,	// (0x0006c73e) cam6_pano_pane_g3

0xea3f,	// (0x0006c747) cam6_pano_pane_g4

0xd215,	// (0x0006af1d) cam6_pano_pane_g5

0xea5c,	// (0x0006c764) cam6_pano_pane_g6

0xea64,	// (0x0006c76c) cam6_pano_pane_g7

0xea6c,	// (0x0006c774) cam6_pano_pane_g8

0xea75,	// (0x0006c77d) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0006db03) cam6_pano_pane_g

0x9c6a,	// (0x00067972) main_browser_tag_pane

0xe8b9,	// (0x0006c5c1) grid_navstr_albumart_pane

0xea80,	// (0x0006c788) cell_navstr_albumart_pane_ParamLimits

0xea80,	// (0x0006c788) cell_navstr_albumart_pane

0xea9f,	// (0x0006c7a7) cell_navstr_albumart_pane_g1

0xc62f,	// (0x0006a337) cell_navstr_albumart_pane_g2

0xc63f,	// (0x0006a347) cell_navstr_albumart_pane_g3

0xc637,	// (0x0006a33f) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0006db16) cell_navstr_albumart_pane_g

0x9073,	// (0x00066d7b) bt_list_pane_ParamLimits

0x9073,	// (0x00066d7b) bt_list_pane

0x908c,	// (0x00066d94) bt_list_pane_t1

0x909b,	// (0x00066da3) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0006db1f) bt_list_pane_t

0x9c6a,	// (0x00067972) main_cale_prevew_pane

0x90aa,	// (0x00066db2) popup_cale_preview_window_ParamLimits

0x90aa,	// (0x00066db2) popup_cale_preview_window

0xa337,	// (0x0006803f) bg_popup_preview_window_pane_cp05_ParamLimits

0xa337,	// (0x0006803f) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x0006c7af) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x0006c7af) list_cale_preview_pane

0x90c5,	// (0x00066dcd) list_double_cale_preview_pane_ParamLimits

0x90c5,	// (0x00066dcd) list_double_cale_preview_pane

0x90d9,	// (0x00066de1) list_single_cale_preview_pane_ParamLimits

0x90d9,	// (0x00066de1) list_single_cale_preview_pane

0x90f1,	// (0x00066df9) list_single_cale_preview_pane_g1

0x90f9,	// (0x00066e01) list_single_cale_preview_pane_t1_ParamLimits

0x90f9,	// (0x00066e01) list_single_cale_preview_pane_t1

0x910e,	// (0x00066e16) list_double_cale_preview_pane_g1

0x9116,	// (0x00066e1e) list_double_cale_preview_pane_t1_ParamLimits

0x9116,	// (0x00066e1e) list_double_cale_preview_pane_t1

0x912b,	// (0x00066e33) list_double_cale_preview_pane_t2_ParamLimits

0x912b,	// (0x00066e33) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0006db24) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0006db24) list_double_cale_preview_pane_t

0x9c6a,	// (0x00067972) main_ezdial_pane

0xa337,	// (0x0006803f) main_sp_fs_email_pane_ParamLimits

0x86d2,	// (0x000663da) cmail_ddmenu_btn01_pane_ParamLimits

0x86d2,	// (0x000663da) cmail_ddmenu_btn01_pane

0x86ef,	// (0x000663f7) cmail_ddmenu_btn02_pane_ParamLimits

0x86ef,	// (0x000663f7) cmail_ddmenu_btn02_pane

0x870d,	// (0x00066415) cmail_ddmenu_btn03_pane_ParamLimits

0x870d,	// (0x00066415) cmail_ddmenu_btn03_pane

0x873d,	// (0x00066445) main_sp_fs_ctrlbar_pane_ParamLimits

0x8757,	// (0x0006645f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d2b,	// (0x00066a33) list_cmail_body_pane_ParamLimits

0xe839,	// (0x0006c541) bg_button_pane_cp12

0xe842,	// (0x0006c54a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe842,	// (0x0006c54a) list_single_cmail_header_detail_pane_g3

0xa5b1,	// (0x000682b9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa5b1,	// (0x000682b9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0006daa7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0006daa7) list_single_cmail_header_detail_pane_t

0xa5f2,	// (0x000682fa) phacti_term_pane_t2_ParamLimits

0xa5f2,	// (0x000682fa) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0006dab1) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0006dab1) phacti_term_pane_t

0xeab3,	// (0x0006c7bb) aid_size_list_single_double

0x9143,	// (0x00066e4b) popup_ezdial_listscroll_window

0x9165,	// (0x00066e6d) popup_number_entry_window_cp01

0xb3f9,	// (0x00069101) bg_popup_call_pane_cp09

0xeabf,	// (0x0006c7c7) ezdial_list_pane

0xeac7,	// (0x0006c7cf) scroll_pane_cp23

0xca52,	// (0x0006a75a) bg_button_pane_cp028_ParamLimits

0xca52,	// (0x0006a75a) bg_button_pane_cp028

0x9173,	// (0x00066e7b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9173,	// (0x00066e7b) cmail_ddmenu_btn01_pane_g1

0x9185,	// (0x00066e8d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9185,	// (0x00066e8d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0006db29) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0006db29) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x0006c7d7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x0006c7d7) cmail_ddmenu_btn01_pane_t1

0xc822,	// (0x0006a52a) bg_button_pane_cp029_ParamLimits

0xc822,	// (0x0006a52a) bg_button_pane_cp029

0x9191,	// (0x00066e99) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9191,	// (0x00066e99) cmail_ddmenu_btn02_pane_g1

0x91a9,	// (0x00066eb1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91a9,	// (0x00066eb1) cmail_ddmenu_btn02_pane_t1

0x0e06,	// (0x0005eb0e) bg_button_pane_cp031_ParamLimits

0x0e06,	// (0x0005eb0e) bg_button_pane_cp031

0x9191,	// (0x00066e99) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9191,	// (0x00066e99) cmail_ddmenu_btn03_pane_g1

0x91a9,	// (0x00066eb1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91a9,	// (0x00066eb1) cmail_ddmenu_btn03_pane_t1

0x60ef,	// (0x00063df7) cell_dialer2_keypad_pane_t1_ParamLimits

0x6109,	// (0x00063e11) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6109,	// (0x00063e11) cell_dialer2_keypad_pane_t1_copy1

0x7fe9,	// (0x00065cf1) ncimui_group_button_pane

0xa337,	// (0x0006803f) main_sp_fs_calendar_pane_ParamLimits

0x8d44,	// (0x00066a4c) list_single_cmail_header_caption_pane_ParamLimits

0xa607,	// (0x0006830f) aid_recal_txt_sm_pane

0x9c6a,	// (0x00067972) mian_recal_day_pane

0xa641,	// (0x00068349) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x0006c7ed) list_recal_day_pane

0xa72d,	// (0x00068435) list_single_recal_day_pane_ParamLimits

0xa72d,	// (0x00068435) list_single_recal_day_pane

0xeb0c,	// (0x0006c814) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x0006c814) list_single_recal_day_pane_g1

0xa73f,	// (0x00068447) list_single_recal_day_pane_g2_ParamLimits

0xa73f,	// (0x00068447) list_single_recal_day_pane_g2

0xa74b,	// (0x00068453) list_single_recal_day_pane_g3_ParamLimits

0xa74b,	// (0x00068453) list_single_recal_day_pane_g3

0x91cd,	// (0x00066ed5) list_single_recal_day_pane_g4_ParamLimits

0x91cd,	// (0x00066ed5) list_single_recal_day_pane_g4

0xa757,	// (0x0006845f) list_single_recal_day_pane_g5_ParamLimits

0xa757,	// (0x0006845f) list_single_recal_day_pane_g5

0xa763,	// (0x0006846b) list_single_recal_day_pane_g6_ParamLimits

0xa763,	// (0x0006846b) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0006db38) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0006db38) list_single_recal_day_pane_g

0xa777,	// (0x0006847f) list_single_recal_day_pane_t1

0xa789,	// (0x00068491) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0006db43) list_single_recal_day_pane_t

0x91e5,	// (0x00066eed) ncimui_query_button_pane_ParamLimits

0x91e5,	// (0x00066eed) ncimui_query_button_pane

0x91f5,	// (0x00066efd) ncimui_query_button_pane_t1_ParamLimits

0x91f5,	// (0x00066efd) ncimui_query_button_pane_t1

0xeb18,	// (0x0006c820) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x0006c820) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0006db48) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0006db48) ncimui_query_button_pane_t

0x9208,	// (0x00066f10) query_button_pane_ParamLimits

0x9208,	// (0x00066f10) query_button_pane

0x9c6a,	// (0x00067972) bg_button_pane_cp0028

0xeb2b,	// (0x0006c833) query_button_pane_t1

0x44ba,	// (0x000621c2) main_tport_pane_ParamLimits

0x8c2d,	// (0x00066935) bg_popup_window_pane_cp01_ParamLimits

0x8c2d,	// (0x00066935) bg_popup_window_pane_cp01

0x8c3b,	// (0x00066943) heading_pane_cp08_ParamLimits

0x8c3b,	// (0x00066943) heading_pane_cp08

0x8c49,	// (0x00066951) heading_pane_cp07_ParamLimits

0x8c49,	// (0x00066951) heading_pane_cp07

0x8cba,	// (0x000669c2) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0006da94) cell_tport_appsw_pane_g

0x3c1b,	// (0x00061923) input_candi_list_open_g1

0xae91,	// (0x00068b99) list_cale_time_pane_g6_ParamLimits

0xae91,	// (0x00068b99) list_cale_time_pane_g6

0x4f3d,	// (0x00062c45) aid_size_touch_calib_1_ParamLimits

0x4f3d,	// (0x00062c45) aid_size_touch_calib_1

0x4f49,	// (0x00062c51) aid_size_touch_calib_2_ParamLimits

0x4f49,	// (0x00062c51) aid_size_touch_calib_2

0x4f57,	// (0x00062c5f) aid_size_touch_calib_3_ParamLimits

0x4f57,	// (0x00062c5f) aid_size_touch_calib_3

0x4f67,	// (0x00062c6f) aid_size_touch_calib_4_ParamLimits

0x4f67,	// (0x00062c6f) aid_size_touch_calib_4

0x4f75,	// (0x00062c7d) main_touch_calib_button_group_pane_ParamLimits

0x4f75,	// (0x00062c7d) main_touch_calib_button_group_pane

0x4f83,	// (0x00062c8b) main_touch_calib_pane_g1_ParamLimits

0x4f8f,	// (0x00062c97) main_touch_calib_pane_g2_ParamLimits

0x4f9b,	// (0x00062ca3) main_touch_calib_pane_g3_ParamLimits

0x4fa7,	// (0x00062caf) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0006d459) main_touch_calib_pane_g_ParamLimits

0x4fb3,	// (0x00062cbb) main_touch_calib_pane_t1_ParamLimits

0x4fca,	// (0x00062cd2) main_touch_calib_pane_t2_ParamLimits

0x4fe3,	// (0x00062ceb) main_touch_calib_pane_t3_ParamLimits

0x4ff9,	// (0x00062d01) main_touch_calib_pane_t4_ParamLimits

0x500f,	// (0x00062d17) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0006d462) main_touch_calib_pane_t_ParamLimits

0xcfa3,	// (0x0006acab) list_single_fp_cale_pane_g3_ParamLimits

0xcfa3,	// (0x0006acab) list_single_fp_cale_pane_g3

0x6594,	// (0x0006429c) bg_button_pane_cp012_ParamLimits

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp03_ParamLimits

0x6fb2,	// (0x00064cba) cell_vitu2_function_top_pane_g1_ParamLimits

0x6594,	// (0x0006429c) bg_vkb2_func_pane_cp04_ParamLimits

0x7f6f,	// (0x00065c77) main_ncimui_button_group_pane_ParamLimits

0x7f6f,	// (0x00065c77) main_ncimui_button_group_pane

0x7fd7,	// (0x00065cdf) main_ncimui_pane_t3_ParamLimits

0x7fd7,	// (0x00065cdf) main_ncimui_pane_t3

0xe8cf,	// (0x0006c5d7) phacti_button_group_pane

0xeab3,	// (0x0006c7bb) aid_size_list_single_double_ParamLimits

0x9143,	// (0x00066e4b) popup_ezdial_listscroll_window_ParamLimits

0x9165,	// (0x00066e6d) popup_number_entry_window_cp01_ParamLimits

0x9215,	// (0x00066f1d) phacti_button_pane_ParamLimits

0x9215,	// (0x00066f1d) phacti_button_pane

0x9c6a,	// (0x00067972) bg_button_pane_cp14

0xeb39,	// (0x0006c841) phacti_button_pane_t1

0x9226,	// (0x00066f2e) main_touch_calib_button_pane_ParamLimits

0x9226,	// (0x00066f2e) main_touch_calib_button_pane

0xa8b4,	// (0x000685bc) bg_button_pane_cp18_ParamLimits

0xa8b4,	// (0x000685bc) bg_button_pane_cp18

0xeb47,	// (0x0006c84f) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x0006c84f) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0006c865) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0006c865) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0006db4d) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0006db4d) main_touch_calib_button_pane_t

0x9c6a,	// (0x00067972) cell_ncimui_button_pane

0x9c6a,	// (0x00067972) bg_button_pane_cp032

0xeb7b,	// (0x0006c883) cell_ncimui_button_pane_t1

0x6165,	// (0x00063e6d) image3_infobar_pane_ParamLimits

0x6165,	// (0x00063e6d) image3_infobar_pane

0x8364,	// (0x0006606c) fs_bigclock_status_pane_ParamLimits

0x8364,	// (0x0006606c) fs_bigclock_status_pane

0x8371,	// (0x00066079) main_fs_bigclock_clock_pane_ParamLimits

0x8371,	// (0x00066079) main_fs_bigclock_clock_pane

0x838d,	// (0x00066095) main_fs_bigclock_indi_pane_ParamLimits

0x838d,	// (0x00066095) main_fs_bigclock_indi_pane

0x83bf,	// (0x000660c7) main_fs_bigclock_swipe_pane_ParamLimits

0x83bf,	// (0x000660c7) main_fs_bigclock_swipe_pane

0x9c6a,	// (0x00067972) main_fs_clock_dumped_data

0xe3fd,	// (0x0006c105) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fd,	// (0x0006c105) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x0006c12f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x0006c12f) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x0006c149) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x0006c149) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x0006c163) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x0006c163) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0006d975) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0006d975) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x0006c18e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x0006c18e) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x0006c1b6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x0006c1b6) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x0006c1de) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x0006c1de) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x0006c206) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x0006c206) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0006d980) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0006d980) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0006c891) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0006c891) image3_infobar_fav_pane

0xeb99,	// (0x0006c8a1) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0006c8a1) image3_infobar_loc_pane

0xebaf,	// (0x0006c8b7) image3_infobar_time_pane_ParamLimits

0xebaf,	// (0x0006c8b7) image3_infobar_time_pane

0xcc73,	// (0x0006a97b) image3_infobar_time_pane_g1

0xebbf,	// (0x0006c8c7) image3_infobar_time_pane_t1

0xcc73,	// (0x0006a97b) image3_infobar_loc_pane_g1

0xebcd,	// (0x0006c8d5) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0006db52) image3_infobar_loc_pane_g

0xebd5,	// (0x0006c8dd) image3_infobar_loc_pane_t1

0xcc73,	// (0x0006a97b) image3_infobar_fav_pane_g1

0xebe3,	// (0x0006c8eb) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0006db57) image3_infobar_fav_pane_g

0xebeb,	// (0x0006c8f3) fs_bigclock_status_battery_pane

0xebf4,	// (0x0006c8fc) fs_bigclock_status_signal_pane

0xebfd,	// (0x0006c905) fs_bigclock_status_title_pane

0xec06,	// (0x0006c90e) fs_bigclock_status_signal_pane_g1

0xec0f,	// (0x0006c917) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0006db5c) fs_bigclock_status_signal_pane_g

0xec17,	// (0x0006c91f) fs_bigclock_status_battery_pane_g1

0xec20,	// (0x0006c928) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0006db61) fs_bigclock_status_battery_pane_g

0xec28,	// (0x0006c930) fs_bigclock_status_title_pane_t1

0xcc73,	// (0x0006a97b) main_fs_bigclock_clock_pane_g1

0xec36,	// (0x0006c93e) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0006c949) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0006c949) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0006db66) main_fs_bigclock_clock_pane_g

0xec4d,	// (0x0006c955) main_fs_bigclock_clock_pane_t1

0x9236,	// (0x00066f3e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0006db6f) main_fs_bigclock_clock_pane_t

0x9245,	// (0x00066f4d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9245,	// (0x00066f4d) list_single_fs_bigclock_indicator_pane

0x9256,	// (0x00066f5e) list_single_fs_bigclock_pane_ParamLimits

0x9256,	// (0x00066f5e) list_single_fs_bigclock_pane

0xec64,	// (0x0006c96c) main_fs_bigclock_indicator_pane_t1

0xec73,	// (0x0006c97b) list_single_fs_bigclock_pane_g1

0xec7b,	// (0x0006c983) list_single_fs_bigclock_pane_t1

0xcc73,	// (0x0006a97b) main_fs_bigclock_swipe_pane_g1

0xecbe,	// (0x0006c9c6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0006db80) main_fs_bigclock_swipe_pane_g

0xecc6,	// (0x0006c9ce) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc6,	// (0x0006c9ce) main_fs_bigclock_swipe_pane_t1

0x3346,	// (0x0006104e) call_type_pane_ParamLimits

0x9c6a,	// (0x00067972) main_btmg_pane

0xa695,	// (0x0006839d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa695,	// (0x0006839d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0006daf3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0006daf3) list_single_cale_mrui_row_pane_g

0xa71b,	// (0x00068423) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x0006c80c) list_recal_vselct_arw_up_pane

0xa723,	// (0x0006842b) list_recal_vselct_pane

0x92ac,	// (0x00066fb4) btmg_button_pane

0x92b8,	// (0x00066fc0) main_btmg_pane_g1

0x9c6a,	// (0x00067972) bg_button_pane_cp044

0xece3,	// (0x0006c9eb) btmg_button_pane_t1

0xc80e,	// (0x0006a516) aid_listscroll_gen

0xa337,	// (0x0006803f) main_cntbar_detail_pane

0xe81a,	// (0x0006c522) list_cmail_folder_pane

0xe82a,	// (0x0006c532) sp_fs_scroll_pane_cp03_ParamLimits

0x92c0,	// (0x00066fc8) list_single_fs_dyc_pane_cp01_ParamLimits

0x92c0,	// (0x00066fc8) list_single_fs_dyc_pane_cp01

0xecf1,	// (0x0006c9f9) aid_size_cmail_indent

0xb119,	// (0x00068e21) list_single_dyc_row_pane_cp01

0x9301,	// (0x00067009) cntbar_detail_list_pane_ParamLimits

0x9301,	// (0x00067009) cntbar_detail_list_pane

0x9341,	// (0x00067049) main_cntbar_detail_cont_pane_ParamLimits

0x9341,	// (0x00067049) main_cntbar_detail_cont_pane

0x3269,	// (0x00060f71) scroll_pane_cp032_ParamLimits

0x3269,	// (0x00060f71) scroll_pane_cp032

0x934d,	// (0x00067055) cntbar_detail_list_event_pane_ParamLimits

0x934d,	// (0x00067055) cntbar_detail_list_event_pane

0x930f,	// (0x00067017) cntbar_detail_list_shct_pane

0xad2b,	// (0x00068a33) aid_list_gen

0xecfa,	// (0x0006ca02) aid_scroll

0xed03,	// (0x0006ca0b) aid_size_touch_scroll_bar

0x7710,	// (0x00065418) aid_list_double

0xed0c,	// (0x0006ca14) aid_list_single

0x76fe,	// (0x00065406) aid_list_single_lg

0xb122,	// (0x00068e2a) aid_list_z_g_a_sm

0xb12a,	// (0x00068e32) aid_list_z_g_d

0xb132,	// (0x00068e3a) aid_txt_z_prm

0x935d,	// (0x00067065) aid_txt_z_prm_cp01

0x936b,	// (0x00067073) aid_txt_z_sec

0x9379,	// (0x00067081) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9379,	// (0x00067081) main_cntbar_detail_cont_pane_g1

0x9386,	// (0x0006708e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9386,	// (0x0006708e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0006db85) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0006db85) main_cntbar_detail_cont_pane_g

0xed15,	// (0x0006ca1d) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x0006ca2b) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x0006ca39) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0006db8a) main_cntbar_detail_cont_pane_t

0x9392,	// (0x0006709a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9392,	// (0x0006709a) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x0006ca47) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x0006ca50) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0006db91) cntbar_detail_list_shct_pane_g

0x93a6,	// (0x000670ae) cntbar_detail_list_event_pane_g1_ParamLimits

0x93a6,	// (0x000670ae) cntbar_detail_list_event_pane_g1

0x93b2,	// (0x000670ba) cntbar_detail_list_event_pane_g2_ParamLimits

0x93b2,	// (0x000670ba) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0006db96) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0006db96) cntbar_detail_list_event_pane_g

0x9420,	// (0x00067128) cntbar_detail_list_event_pane_t1_ParamLimits

0x9420,	// (0x00067128) cntbar_detail_list_event_pane_t1

0x9435,	// (0x0006713d) cntbar_detail_list_event_pane_t2_ParamLimits

0x9435,	// (0x0006713d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0006dba3) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0006dba3) cntbar_detail_list_event_pane_t

0xcc73,	// (0x0006a97b) cell_cntbar_detail_list_shct_pane_g1

0x3719,	// (0x00061421) navi_pane_mv_g3

0xa337,	// (0x0006803f) main_cntbar_detail_pane_ParamLimits

0x9c6a,	// (0x00067972) main_notif_wgt_pane

0x5e0f,	// (0x00063b17) aid_tch_main_mp4_pane_g4

0x604e,	// (0x00063d56) popup_slider_window_cp02

0xa711,	// (0x00068419) list_recal_day_event_pane

0x92e1,	// (0x00066fe9) cntbar_detail_btn_pane_ParamLimits

0x92e1,	// (0x00066fe9) cntbar_detail_btn_pane

0x92f1,	// (0x00066ff9) cntbar_detail_btn_pane_cp01_ParamLimits

0x92f1,	// (0x00066ff9) cntbar_detail_btn_pane_cp01

0x930f,	// (0x00067017) cntbar_detail_list_shct_pane_ParamLimits

0x931b,	// (0x00067023) cntbar_detail_pane_g1_ParamLimits

0x931b,	// (0x00067023) cntbar_detail_pane_g1

0x932b,	// (0x00067033) cntbar_detail_pane_t1_ParamLimits

0x932b,	// (0x00067033) cntbar_detail_pane_t1

0x93be,	// (0x000670c6) cntbar_detail_list_event_pane_g3_ParamLimits

0x93be,	// (0x000670c6) cntbar_detail_list_event_pane_g3

0x93d6,	// (0x000670de) cntbar_detail_list_event_pane_g4_ParamLimits

0x93d6,	// (0x000670de) cntbar_detail_list_event_pane_g4

0x93ee,	// (0x000670f6) cntbar_detail_list_event_pane_g5_ParamLimits

0x93ee,	// (0x000670f6) cntbar_detail_list_event_pane_g5

0x9406,	// (0x0006710e) cntbar_detail_list_event_pane_g6_ParamLimits

0x9406,	// (0x0006710e) cntbar_detail_list_event_pane_g6

0x944a,	// (0x00067152) cntbar_detail_list_event_pane_t3_ParamLimits

0x944a,	// (0x00067152) cntbar_detail_list_event_pane_t3

0x945c,	// (0x00067164) popup_notif_wgt_window_ParamLimits

0x945c,	// (0x00067164) popup_notif_wgt_window

0x946c,	// (0x00067174) popup_submenu_window_cp01_ParamLimits

0x946c,	// (0x00067174) popup_submenu_window_cp01

0xb3f9,	// (0x00069101) bg_popup_window_pane_cp10

0xed51,	// (0x0006ca59) listscroll_notif_wgt_pane

0xed63,	// (0x0006ca6b) list_notif_wgt_window

0xed6c,	// (0x0006ca74) scroll_pane_cp033

0x947c,	// (0x00067184) list_notif_wgt_row_pane_ParamLimits

0x947c,	// (0x00067184) list_notif_wgt_row_pane

0xed75,	// (0x0006ca7d) aid_size_list_notif_wgt_del

0xed82,	// (0x0006ca8a) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0006ca96) list_notif_wgt_row_pane_g2

0xeda2,	// (0x0006caaa) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0006dbaa) list_notif_wgt_row_pane_g

0xedaf,	// (0x0006cab7) list_notif_wgt_row_pane_t1

0xedc5,	// (0x0006cacd) list_notif_wgt_row_pane_t2

0xedd7,	// (0x0006cadf) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0006dbb1) list_notif_wgt_row_pane_t

0xd8bf,	// (0x0006b5c7) list_recal_day_event_pane_g1

0xede9,	// (0x0006caf1) list_recal_day_event_pane_t1

0x9c6a,	// (0x00067972) bg_button_pane_cp045

0xedf8,	// (0x0006cb00) cntbar_detail_btn_pane_t1

0xc822,	// (0x0006a52a) main_callh_pane_ParamLimits

0xc822,	// (0x0006a52a) main_callh_pane

0x9c6a,	// (0x00067972) main_coverflow0_pane

0x9c6a,	// (0x00067972) main_wgtman_pane

0x83d7,	// (0x000660df) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83d7,	// (0x000660df) main_fs_bigclock_unlock_btn_pane

0x8cb2,	// (0x000669ba) bg_button_pane_cp16

0x8cc2,	// (0x000669ca) cell_tport_appsw_pane_g3

0x948d,	// (0x00067195) cf0_flow_pane_ParamLimits

0x948d,	// (0x00067195) cf0_flow_pane

0xee06,	// (0x0006cb0e) listscroll_cf0_pane

0xee11,	// (0x0006cb19) main_cf0_pane_g1

0x949c,	// (0x000671a4) main_cf0_pane_t1_ParamLimits

0x949c,	// (0x000671a4) main_cf0_pane_t1

0x94b0,	// (0x000671b8) main_cf0_pane_t2_ParamLimits

0x94b0,	// (0x000671b8) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0006dbbd) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0006dbbd) main_cf0_pane_t

0xee23,	// (0x0006cb2b) scroll_pane_cp11

0x94c4,	// (0x000671cc) cf0_flow_pane_g1

0x94cc,	// (0x000671d4) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0006dbc2) cf0_flow_pane_g

0x94d4,	// (0x000671dc) cf0_flow_pane_t1

0x9c6a,	// (0x00067972) main_call6_pane

0x9c6a,	// (0x00067972) main_calllock_pane

0x94e2,	// (0x000671ea) call6_btn_grp_pane_ParamLimits

0x94e2,	// (0x000671ea) call6_btn_grp_pane

0x94ef,	// (0x000671f7) call6_pane_g1_ParamLimits

0x94ef,	// (0x000671f7) call6_pane_g1

0x94ff,	// (0x00067207) popup_call6_1st_window_ParamLimits

0x94ff,	// (0x00067207) popup_call6_1st_window

0x950d,	// (0x00067215) popup_call6_2nd_window_ParamLimits

0x950d,	// (0x00067215) popup_call6_2nd_window

0x951b,	// (0x00067223) cell_call6_btn_pane_ParamLimits

0x951b,	// (0x00067223) cell_call6_btn_pane

0xb3f9,	// (0x00069101) bg_popup_call2_in_pane_cp03

0xee2e,	// (0x0006cb36) popup_call6_1st_window_g1

0xee36,	// (0x0006cb3e) popup_call6_1st_window_g2

0xee3e,	// (0x0006cb46) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0006dbc7) popup_call6_1st_window_g

0xee46,	// (0x0006cb4e) popup_call6_1st_window_t1

0xee55,	// (0x0006cb5d) popup_call6_1st_window_t2

0xee65,	// (0x0006cb6d) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0006dbce) popup_call6_1st_window_t

0xb3f9,	// (0x00069101) bg_popup_call2_in_pane_cp04

0xee2e,	// (0x0006cb36) popup_call6_2nd_window_g1

0xee36,	// (0x0006cb3e) popup_call6_2nd_window_g2

0xee3e,	// (0x0006cb46) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0006dbc7) popup_call6_2nd_window_g

0xee46,	// (0x0006cb4e) popup_call6_2nd_window_t1

0x9c6a,	// (0x00067972) bg_button_pane_cp15

0xee75,	// (0x0006cb7d) cell_call6_btn_pane_g1

0xee7e,	// (0x0006cb86) cell_call6_btn_pane_t1

0x952a,	// (0x00067232) listscroll_wgtman_pane_ParamLimits

0x952a,	// (0x00067232) listscroll_wgtman_pane

0x9546,	// (0x0006724e) wgtman_btn_pane_ParamLimits

0x9546,	// (0x0006724e) wgtman_btn_pane

0xb2bf,	// (0x00068fc7) aid_scroll_copy1

0xee8d,	// (0x0006cb95) list_wgtman_pane

0x957b,	// (0x00067283) wgtman_btn_pane_g1_ParamLimits

0x957b,	// (0x00067283) wgtman_btn_pane_g1

0x95a3,	// (0x000672ab) wgtman_btn_pane_t1_ParamLimits

0x95a3,	// (0x000672ab) wgtman_btn_pane_t1

0xee97,	// (0x0006cb9f) wgtman_btn_pane_t2_ParamLimits

0xee97,	// (0x0006cb9f) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0006dbd5) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0006dbd5) wgtman_btn_pane_t

0x95da,	// (0x000672e2) listrow_wgtman_pane_ParamLimits

0x95da,	// (0x000672e2) listrow_wgtman_pane

0x95ee,	// (0x000672f6) listrow_wgtman_pane_g1

0x95fb,	// (0x00067303) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0006dbda) listrow_wgtman_pane_g

0x9619,	// (0x00067321) listrow_wgtman_pane_t1

0x9631,	// (0x00067339) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0006dbdf) listrow_wgtman_pane_t

0x9657,	// (0x0006735f) wait_bar_pane_cp09

0xeeae,	// (0x0006cbb6) main_calllock_btn_pane

0xeeb8,	// (0x0006cbc0) main_calllock_pane_g1

0x9c6a,	// (0x00067972) bg_button_pane_cp17

0xeec4,	// (0x0006cbcc) main_calllock_btn_pane_g1

0xeecd,	// (0x0006cbd5) main_calllock_btn_pane_t1

0x9c6a,	// (0x00067972) main_dialer3_pane

0x9c6a,	// (0x00067972) main_fmrd2_pane

0xcc73,	// (0x0006a97b) main_fs_bigclock_unlock_btn_pane_g1

0xeee4,	// (0x0006cbec) main_fs_bigclock_unlock_btn_pane_t1

0x9669,	// (0x00067371) area_fmrd2_info_pane_ParamLimits

0x9669,	// (0x00067371) area_fmrd2_info_pane

0x9675,	// (0x0006737d) area_fmrd2_visual_pane_ParamLimits

0x9675,	// (0x0006737d) area_fmrd2_visual_pane

0x9683,	// (0x0006738b) fmrd2_indi_pane_ParamLimits

0x9683,	// (0x0006738b) fmrd2_indi_pane

0x9690,	// (0x00067398) area_fmrd2_visual_pane_g1

0x9698,	// (0x000673a0) area_fmrd2_visual_pane_t1

0x96a8,	// (0x000673b0) area_fmrd2_visual_pane_t2

0x96b8,	// (0x000673c0) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0006dbe9) area_fmrd2_visual_pane_t

0x96c8,	// (0x000673d0) area_fmrd2_info_pane_g1

0x96d0,	// (0x000673d8) area_fmrd2_info_pane_t1

0x96e0,	// (0x000673e8) area_fmrd2_info_pane_t2

0x96f0,	// (0x000673f8) area_fmrd2_info_pane_t3

0x9700,	// (0x00067408) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0006dbf0) area_fmrd2_info_pane_t

0x9710,	// (0x00067418) fmrd2_indi_pane_t1

0x9720,	// (0x00067428) fmrd2_indi_pane_t2

0x9730,	// (0x00067438) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0006dbf9) fmrd2_indi_pane_t

0xe46a,	// (0x0006c172) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x0006c172) list_single_fs_bigclock_indicator_pane_g5

0xe51a,	// (0x0006c222) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51a,	// (0x0006c222) list_single_fs_bigclock_indicator_pane_t5

0x8eb7,	// (0x00066bbf) aid_cell_bcale_month_pane_ParamLimits

0x8eb7,	// (0x00066bbf) aid_cell_bcale_month_pane

0x8ed5,	// (0x00066bdd) bcale_month_pane_ParamLimits

0x8ed5,	// (0x00066bdd) bcale_month_pane

0x8ef1,	// (0x00066bf9) bcale_preview_pane_ParamLimits

0x8ef1,	// (0x00066bf9) bcale_preview_pane

0xec7b,	// (0x0006c983) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9a,	// (0x0006c9a2) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9a,	// (0x0006c9a2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0006db7b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0006db7b) list_single_fs_bigclock_pane_t

0xeedc,	// (0x0006cbe4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0006dbe4) main_fs_bigclock_unlock_btn_pane_g

0x9740,	// (0x00067448) aid_dia3_key_size_ParamLimits

0x9740,	// (0x00067448) aid_dia3_key_size

0x974c,	// (0x00067454) aid_dia3_listrow_size_ParamLimits

0x974c,	// (0x00067454) aid_dia3_listrow_size

0x975c,	// (0x00067464) dia3_keypad_fun_pane_ParamLimits

0x975c,	// (0x00067464) dia3_keypad_fun_pane

0x976c,	// (0x00067474) dia3_keypad_num_pane_ParamLimits

0x976c,	// (0x00067474) dia3_keypad_num_pane

0x977c,	// (0x00067484) dia3_listscroll_pane_ParamLimits

0x977c,	// (0x00067484) dia3_listscroll_pane

0x978a,	// (0x00067492) dia3_numentry_pane_ParamLimits

0x978a,	// (0x00067492) dia3_numentry_pane

0xeef2,	// (0x0006cbfa) dia3_list_pane

0xeefd,	// (0x0006cc05) scroll_pane_cp12

0x9c6a,	// (0x00067972) bg_dia3_numentry_pane

0x9798,	// (0x000674a0) dia3_numentry_pane_t1

0x97a7,	// (0x000674af) cell_dia3_key_num_pane

0x97af,	// (0x000674b7) cell_dia3_key0_fun_pane_ParamLimits

0x97af,	// (0x000674b7) cell_dia3_key0_fun_pane

0x97bc,	// (0x000674c4) cell_dia3_key1_fun_pane_ParamLimits

0x97bc,	// (0x000674c4) cell_dia3_key1_fun_pane

0x97c9,	// (0x000674d1) dia3_listrow_pane

0xe168,	// (0x0006be70) bg_dia3_numentry_pane_g1

0x9c6a,	// (0x00067972) bg_button_pane_cp21

0xef08,	// (0x0006cc10) cell_dia3_key_num_pane_t1

0xef16,	// (0x0006cc1e) cell_dia3_key_num_pane_t2

0xef25,	// (0x0006cc2d) cell_dia3_key_num_pane_t3

0xef34,	// (0x0006cc3c) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0006dc00) cell_dia3_key_num_pane_t

0x9c6a,	// (0x00067972) bg_button_pane_cp19

0x97d6,	// (0x000674de) cell_dia3_key0_fun_pane_g1

0x9c6a,	// (0x00067972) bg_button_pane_cp20

0x97de,	// (0x000674e6) cell_dia3_key1_fun_pane_g1

0x97e6,	// (0x000674ee) area_left_week_number_pane

0x97f9,	// (0x00067501) area_top_day_name_pane

0x9807,	// (0x0006750f) frame_month_view_pane

0xef43,	// (0x0006cc4b) grid_month_view_pane

0x981c,	// (0x00067524) cell_top_day_name_pane_ParamLimits

0x981c,	// (0x00067524) cell_top_day_name_pane

0x9838,	// (0x00067540) cell_area_left_week_number_pane_ParamLimits

0x9838,	// (0x00067540) cell_area_left_week_number_pane

0x9859,	// (0x00067561) cell_month_view_pane_ParamLimits

0x9859,	// (0x00067561) cell_month_view_pane

0xef51,	// (0x0006cc59) frm_month_g1

0x9885,	// (0x0006758d) frm_month_g2

0x9896,	// (0x0006759e) frm_month_g3

0x98a7,	// (0x000675af) frm_month_g4

0x98b8,	// (0x000675c0) frm_month_g5

0x98c9,	// (0x000675d1) frm_month_g6

0x98dc,	// (0x000675e4) frm_month_g7

0xef5e,	// (0x0006cc66) frm_month_g8

0x98ef,	// (0x000675f7) frm_month_g9

0x98fc,	// (0x00067604) frm_month_g10

0x9909,	// (0x00067611) frm_month_g11

0x9916,	// (0x0006761e) frm_month_g12

0x9923,	// (0x0006762b) frm_month_g13

0x9932,	// (0x0006763a) frm_month_g14

0x9941,	// (0x00067649) frm_month_g15

0x9950,	// (0x00067658) frm_month_g16

0x000f,

0xff01,	// (0x0006dc09) frm_month_g

0xef6b,	// (0x0006cc73) cell_top_day_name_pane_t1

0x995f,	// (0x00067667) cell_area_left_week_number_pane_g1

0x996e,	// (0x00067676) cell_area_left_week_number_pane_t1

0xcea3,	// (0x0006abab) cell_month_view_pane_g1

0x9984,	// (0x0006768c) cell_month_view_pane_t1

0x9c6a,	// (0x00067972) main_fps_pane

0xe70a,	// (0x0006c412) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70a,	// (0x0006c412) cmail_ddmenu_btn02_pane_cp1

0xe726,	// (0x0006c42e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe726,	// (0x0006c42e) cmail_ddmenu_btn02_pane_cp2

0x919d,	// (0x00066ea5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x919d,	// (0x00066ea5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0006db2e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0006db2e) cmail_ddmenu_btn02_pane_g

0x91bb,	// (0x00066ec3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91bb,	// (0x00066ec3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0006db33) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0006db33) cmail_ddmenu_btn02_pane_t

0x999a,	// (0x000676a2) fps_text_pane_ParamLimits

0x999a,	// (0x000676a2) fps_text_pane

0x99a7,	// (0x000676af) main_fps_pane_g1_ParamLimits

0x99a7,	// (0x000676af) main_fps_pane_g1

0x99b3,	// (0x000676bb) wait_bar_pane_cp010_ParamLimits

0x99b3,	// (0x000676bb) wait_bar_pane_cp010

0x99bf,	// (0x000676c7) fps_text_pane_t1_ParamLimits

0x99bf,	// (0x000676c7) fps_text_pane_t1

0x6482,	// (0x0006418a) cam4_image_uncrop_pane_g1

0x648b,	// (0x00064193) cam4_image_uncrop_pane_g2

0x6494,	// (0x0006419c) cam4_image_uncrop_pane_g3

0x649d,	// (0x000641a5) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0006d5f6) cam4_image_uncrop_pane_g

0x97c9,	// (0x000674d1) dia3_listrow_pane_ParamLimits

0x9c6a,	// (0x00067972) main_phob2_pane

0x8c94,	// (0x0006699c) cell_tport_appsw_pane_cp02_ParamLimits

0x8c94,	// (0x0006699c) cell_tport_appsw_pane_cp02

0x8ca3,	// (0x000669ab) cell_tport_appsw_pane_cp03_ParamLimits

0x8ca3,	// (0x000669ab) cell_tport_appsw_pane_cp03

0x9c6a,	// (0x00067972) phob2_contact_card_pane

0x9c6a,	// (0x00067972) phob2_listscroll_pane

0xef7e,	// (0x0006cc86) phob2_list_pane

0xef86,	// (0x0006cc8e) scroll_pane_cp034

0x99d8,	// (0x000676e0) phob2_cc_data_pane_ParamLimits

0x99d8,	// (0x000676e0) phob2_cc_data_pane

0x99f4,	// (0x000676fc) phob2_cc_listscroll_pane_ParamLimits

0x99f4,	// (0x000676fc) phob2_cc_listscroll_pane

0x9a10,	// (0x00067718) list_double_large_graphic_phob2_pane_ParamLimits

0x9a10,	// (0x00067718) list_double_large_graphic_phob2_pane

0x9a28,	// (0x00067730) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a28,	// (0x00067730) list_double_large_graphic_phob2_pane_g1

0x9a3e,	// (0x00067746) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a3e,	// (0x00067746) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0006dc2a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0006dc2a) list_double_large_graphic_phob2_pane_g

0x9a4a,	// (0x00067752) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a4a,	// (0x00067752) list_double_large_graphic_phob2_pane_t1

0x9a5f,	// (0x00067767) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a5f,	// (0x00067767) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0006dc2f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0006dc2f) list_double_large_graphic_phob2_pane_t

0x9c6a,	// (0x00067972) list_highlight_pane_cp024

0x9a71,	// (0x00067779) phob2_cc_button_pane

0x9a79,	// (0x00067781) phob2_cc_data_pane_g1_ParamLimits

0x9a79,	// (0x00067781) phob2_cc_data_pane_g1

0x9a85,	// (0x0006778d) phob2_cc_data_pane_g2_ParamLimits

0x9a85,	// (0x0006778d) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0006dc34) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0006dc34) phob2_cc_data_pane_g

0x9a91,	// (0x00067799) phob2_cc_data_pane_t1_ParamLimits

0x9a91,	// (0x00067799) phob2_cc_data_pane_t1

0x9aa3,	// (0x000677ab) phob2_cc_data_pane_t2_ParamLimits

0x9aa3,	// (0x000677ab) phob2_cc_data_pane_t2

0x9ab5,	// (0x000677bd) phob2_cc_data_pane_t3_ParamLimits

0x9ab5,	// (0x000677bd) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0006dc39) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0006dc39) phob2_cc_data_pane_t

0xef8e,	// (0x0006cc96) phob2_cc_list_pane_ParamLimits

0xef8e,	// (0x0006cc96) phob2_cc_list_pane

0xdd36,	// (0x0006ba3e) scroll_pane_cp035_ParamLimits

0xdd36,	// (0x0006ba3e) scroll_pane_cp035

0xa337,	// (0x0006803f) bg_button_pane_cp033

0xef9a,	// (0x0006cca2) phob2_cc_button_pane_g1

0xefa6,	// (0x0006ccae) phob2_cc_button_pane_t1

0xefbb,	// (0x0006ccc3) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0006dc40) phob2_cc_button_pane_t

0x9ac7,	// (0x000677cf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ac7,	// (0x000677cf) list_double_large_graphic_phob2_cc_pane

0x9ae3,	// (0x000677eb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ae3,	// (0x000677eb) list_double_large_graphic_phob2_cc_pane_g1

0x9af4,	// (0x000677fc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9af4,	// (0x000677fc) list_double_large_graphic_phob2_cc_pane_g2

0x9b03,	// (0x0006780b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b03,	// (0x0006780b) list_double_large_graphic_phob2_cc_pane_g3

0x9b12,	// (0x0006781a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b12,	// (0x0006781a) list_double_large_graphic_phob2_cc_pane_g4

0x9b23,	// (0x0006782b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b23,	// (0x0006782b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0006dc45) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0006dc45) list_double_large_graphic_phob2_cc_pane_g

0x9b32,	// (0x0006783a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b32,	// (0x0006783a) list_double_large_graphic_phob2_cc_pane_t1

0x9b5b,	// (0x00067863) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b5b,	// (0x00067863) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0006dc50) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0006dc50) list_double_large_graphic_phob2_cc_pane_t

0xefcd,	// (0x0006ccd5) list_highlight_pane_cp025_ParamLimits

0xefcd,	// (0x0006ccd5) list_highlight_pane_cp025

0xa337,	// (0x0006803f) bg_button_pane_cp033_ParamLimits

0xef9a,	// (0x0006cca2) phob2_cc_button_pane_g1_ParamLimits

0xefa6,	// (0x0006ccae) phob2_cc_button_pane_t1_ParamLimits

0xefbb,	// (0x0006ccc3) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0006dc40) phob2_cc_button_pane_t_ParamLimits

0x0e14,	// (0x0005eb1c) popup_wgtman_window

0xd7ab,	// (0x0006b4b3) scroll_pane_cp038

0x9563,	// (0x0006726b) wgtman_btn_pane_cp_01_ParamLimits

0x9563,	// (0x0006726b) wgtman_btn_pane_cp_01

0xefdb,	// (0x0006cce3) wgtman_content_pane

0xefe4,	// (0x0006ccec) wgtman_heading_pane

0x9c6a,	// (0x00067972) bg_heading_pane_cp02

0xefed,	// (0x0006ccf5) wgtman_heading_pane_g1

0xeff5,	// (0x0006ccfd) wgtman_heading_pane_t1

0xf003,	// (0x0006cd0b) scroll_pane_cp036

0xf00b,	// (0x0006cd13) wgtman_list_pane

0xf013,	// (0x0006cd1b) wgtman_list_pane_t1_ParamLimits

0xf013,	// (0x0006cd1b) wgtman_list_pane_t1

0x63df,	// (0x000640e7) cam4_grid_pane

0x71bb,	// (0x00064ec3) bg_button_pane_cp015_ParamLimits

0x71cd,	// (0x00064ed5) bg_button_pane_cp016_ParamLimits

0x71e0,	// (0x00064ee8) bg_button_pane_cp017_ParamLimits

0x7236,	// (0x00064f3e) popup_vitu2_query_window_g3_ParamLimits

0x7236,	// (0x00064f3e) popup_vitu2_query_window_g3

0x72f5,	// (0x00064ffd) popup_vitu2_query_window_t6_ParamLimits

0x72f5,	// (0x00064ffd) popup_vitu2_query_window_t6

0x7320,	// (0x00065028) popup_vitu2_query_window_t7_ParamLimits

0x7320,	// (0x00065028) popup_vitu2_query_window_t7

0xea48,	// (0x0006c750) cam4_grid_pane_g1

0xea51,	// (0x0006c759) cam4_grid_pane_g2

0xf02d,	// (0x0006cd35) cam4_grid_pane_g3

0xf036,	// (0x0006cd3e) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0006dc55) cam4_grid_pane_g

0x2052,	// (0x0005fd5a) aid_placing_vt_slider_lsc_ParamLimits

0x2385,	// (0x0006008d) vidtel_button_pane_ParamLimits

0x2385,	// (0x0006008d) vidtel_button_pane

0xf041,	// (0x0006cd49) bg_button_pane_cp034

0x9b84,	// (0x0006788c) vidtel_button_pane_g1

0xf04b,	// (0x0006cd53) vidtel_button_pane_t1

0xd8af,	// (0x0006b5b7) aid_size_vtel_slider_touch

0xdd36,	// (0x0006ba3e) scroll_pane_cp039

0xe1a6,	// (0x0006beae) ncim_query_button_pane_cp01_ParamLimits

0xe1c5,	// (0x0006becd) ncimui_query_pane_g1_ParamLimits

0xa337,	// (0x0006803f) input_focus_pane_cp012_ParamLimits

0xe1ea,	// (0x0006bef2) ncim_query_entry_pane_t1_ParamLimits

0xdd36,	// (0x0006ba3e) scroll_pane_cp039_ParamLimits

0x368b,	// (0x00061393) navi_pane_bcale_mc_g1

0x3693,	// (0x0006139b) navi_pane_bcale_mc_t1

0xe763,	// (0x0006c46b) main_sp_fs_email_pane_g1

0xe76f,	// (0x0006c477) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0006d9e6) main_sp_fs_email_pane_g

0xe9f4,	// (0x0006c6fc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f4,	// (0x0006c6fc) list_single_cale_mrui_row_pane_g3

0x91db,	// (0x00066ee3) list_single_recal_day_pane_g5_event_pane

0xa76f,	// (0x00068477) list_single_recal_day_pane_g7

0xf059,	// (0x0006cd61) list_recal_day_event_pane_cp01

0xf062,	// (0x0006cd6a) list_recal_vselct_arw_lo_pane_cp01

0xf06a,	// (0x0006cd72) list_recal_vselct_arw_up_pane_cp01

0xf072,	// (0x0006cd7a) list_recal_vselct_pane_cp01

0xd8bf,	// (0x0006b5c7) list_recal_day_event_pane_cp01_g1

0xb140,	// (0x00068e48) list_recal_day_event_pane_cp01_t1

0xa777,	// (0x0006847f) list_single_recal_day_pane_t1_ParamLimits

0xa789,	// (0x00068491) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0006db43) list_single_recal_day_pane_t_ParamLimits

0xa7ef,	// (0x000684f7) bg_notes_pane_ParamLimits

0xa892,	// (0x0006859a) list_notes_pane_ParamLimits

0x1163,	// (0x0005ee6b) scroll_pane_cp06_ParamLimits

0xa8b4,	// (0x000685bc) main_notes_pane_ParamLimits

0x9c6a,	// (0x00067972) main_welc_pane

0x9b8c,	// (0x00067894) main_welc_body_pane_ParamLimits

0x9b8c,	// (0x00067894) main_welc_body_pane

0x9ba7,	// (0x000678af) main_welc_opti_pane_ParamLimits

0x9ba7,	// (0x000678af) main_welc_opti_pane

0x9bdc,	// (0x000678e4) main_welc_pane_t1_ParamLimits

0x9bdc,	// (0x000678e4) main_welc_pane_t1

0x9bfa,	// (0x00067902) main_welc_body_row_pane_ParamLimits

0x9bfa,	// (0x00067902) main_welc_body_row_pane

0x9c14,	// (0x0006791c) main_welc_opti_row_pane_ParamLimits

0x9c14,	// (0x0006791c) main_welc_opti_row_pane

0xf07c,	// (0x0006cd84) main_welc_opti_row_pane_g1

0xf084,	// (0x0006cd8c) main_welc_opti_row_pane_t1

0xf093,	// (0x0006cd9b) main_welc_body_row_pane_t1

0xed5b,	// (0x0006ca63) popup_notif_wgt_heading_pane

0xed75,	// (0x0006ca7d) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0006ca8a) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0006ca96) list_notif_wgt_row_pane_g2_ParamLimits

0xeda2,	// (0x0006caaa) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0006dbaa) list_notif_wgt_row_pane_g_ParamLimits

0xedaf,	// (0x0006cab7) list_notif_wgt_row_pane_t1_ParamLimits

0xedc5,	// (0x0006cacd) list_notif_wgt_row_pane_t2_ParamLimits

0xedd7,	// (0x0006cadf) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0006dbb1) list_notif_wgt_row_pane_t_ParamLimits

0x95ee,	// (0x000672f6) listrow_wgtman_pane_g1_ParamLimits

0x95fb,	// (0x00067303) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0006dbda) listrow_wgtman_pane_g_ParamLimits

0x9619,	// (0x00067321) listrow_wgtman_pane_t1_ParamLimits

0x9631,	// (0x00067339) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0006dbdf) listrow_wgtman_pane_t_ParamLimits

0x9657,	// (0x0006735f) wait_bar_pane_cp09_ParamLimits

0x9c6a,	// (0x00067972) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0006cdaa) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0006cdb2) popup_notif_wgt_heading_pane_t1

0x9c6a,	// (0x00067972) main_vids_pane

0x9c6a,	// (0x00067972) vids_listscroll_pane

0x9c25,	// (0x0006792d) scroll_pane_cp040

0x9c6a,	// (0x00067972) vids_list_pane

0x9c30,	// (0x00067938) vids_list_double_pane_ParamLimits

0x9c30,	// (0x00067938) vids_list_double_pane

0x9c43,	// (0x0006794b) vids_list_double_pane_g1

0x9c4c,	// (0x00067954) vids_list_double_pane_t1

0x9c5c,	// (0x00067964) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0006dc63) vids_list_double_pane_t

0xa337,	// (0x0006803f) main_ncimui_pane_ParamLimits

0x7f87,	// (0x00065c8f) main_ncimui_pane_g1_ParamLimits

0x7f95,	// (0x00065c9d) main_ncimui_pane_g2_ParamLimits

0x7f95,	// (0x00065c9d) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0006d8eb) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0006d8eb) main_ncimui_pane_g

0x9bc2,	// (0x000678ca) main_welc_pane_g1_ParamLimits

0x9bc2,	// (0x000678ca) main_welc_pane_g1

0x9bce,	// (0x000678d6) main_welc_pane_g2_ParamLimits

0x9bce,	// (0x000678d6) main_welc_pane_g2

0x0001,

0xff56,	// (0x0006dc5e) main_welc_pane_g_ParamLimits

0xff56,	// (0x0006dc5e) main_welc_pane_g

0xa7ef,	// (0x000684f7) listscroll_mce_pane_ParamLimits

0x3755,	// (0x0006145d) wait_bar_pane_cp10

0xc816,	// (0x0006a51e) main_cale_day_pane_ParamLimits

0xc816,	// (0x0006a51e) main_cale_week_pane_ParamLimits

0xa7ef,	// (0x000684f7) main_messa_pane_ParamLimits

0x57d9,	// (0x000634e1) main_clock2_btn_pane_ParamLimits

0x57d9,	// (0x000634e1) main_clock2_btn_pane

0xd033,	// (0x0006ad3b) main_clock2_btn_pane_cp01_ParamLimits

0xd033,	// (0x0006ad3b) main_clock2_btn_pane_cp01

0xe9c5,	// (0x0006c6cd) list_cale_mrui_pane_ParamLimits

0xee1b,	// (0x0006cb23) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0006dbb8) main_cf0_pane_g

0x97e6,	// (0x000674ee) area_left_week_number_pane_ParamLimits

0x97f9,	// (0x00067501) area_top_day_name_pane_ParamLimits

0x9807,	// (0x0006750f) frame_month_view_pane_ParamLimits

0xef43,	// (0x0006cc4b) grid_month_view_pane_ParamLimits

0xef51,	// (0x0006cc59) frm_month_g1_ParamLimits

0x9885,	// (0x0006758d) frm_month_g2_ParamLimits

0x9896,	// (0x0006759e) frm_month_g3_ParamLimits

0x98a7,	// (0x000675af) frm_month_g4_ParamLimits

0x98b8,	// (0x000675c0) frm_month_g5_ParamLimits

0x98c9,	// (0x000675d1) frm_month_g6_ParamLimits

0x98dc,	// (0x000675e4) frm_month_g7_ParamLimits

0xef5e,	// (0x0006cc66) frm_month_g8_ParamLimits

0x98ef,	// (0x000675f7) frm_month_g9_ParamLimits

0x98fc,	// (0x00067604) frm_month_g10_ParamLimits

0x9909,	// (0x00067611) frm_month_g11_ParamLimits

0x9916,	// (0x0006761e) frm_month_g12_ParamLimits

0x9923,	// (0x0006762b) frm_month_g13_ParamLimits

0x9932,	// (0x0006763a) frm_month_g14_ParamLimits

0x9941,	// (0x00067649) frm_month_g15_ParamLimits

0x9950,	// (0x00067658) frm_month_g16_ParamLimits

0xff01,	// (0x0006dc09) frm_month_g_ParamLimits

0xef6b,	// (0x0006cc73) cell_top_day_name_pane_t1_ParamLimits

0x995f,	// (0x00067667) cell_area_left_week_number_pane_g1_ParamLimits

0x996e,	// (0x00067676) cell_area_left_week_number_pane_t1_ParamLimits

0xcea3,	// (0x0006abab) cell_month_view_pane_g1_ParamLimits

0x9984,	// (0x0006768c) cell_month_view_pane_t1_ParamLimits

0xa7e7,	// (0x000684ef) main_clock2_btn_pane_g1

0xf0b8,	// (0x0006cdc0) main_clock2_btn_pane_t1

0xa337,	// (0x0006803f) listscroll_cmail_pane_ParamLimits

0xe763,	// (0x0006c46b) main_sp_fs_email_pane_g1_ParamLimits

0xe76f,	// (0x0006c477) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0006d9e6) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x0006c7ed) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x0006c7fe) mian_recal_day_pane_t1

0x896e,	// (0x00066676) list_single_dyc_row_text_pane_t4_ParamLimits

0x896e,	// (0x00066676) list_single_dyc_row_text_pane_t4

0x89ab,	// (0x000666b3) list_single_dyc_row_text_pane_t5_ParamLimits

0x89ab,	// (0x000666b3) list_single_dyc_row_text_pane_t5

0xa52e,	// (0x00068236) list_single_dyc_row_text_pane_t6_ParamLimits

0xa52e,	// (0x00068236) list_single_dyc_row_text_pane_t6

0xae70,	// (0x00068b78) aid_mgn_list_cale_time_pane

0xa337,	// (0x0006803f) main_gallery2_pane_ParamLimits

0xd047,	// (0x0006ad4f) main_clock2_pane_cp01_t1

0xd057,	// (0x0006ad5f) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0006d4cc) main_clock2_pane_cp01_t

0x1655,	// (0x0005f35d) cale_week_scroll_pane_g16_ParamLimits

0x1655,	// (0x0005f35d) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
