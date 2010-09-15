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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0006d09e };

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
0x2a9b,	// (0x0006fb39) Screen

0x2aa5,	// (0x0006fb43) application_window

0x2ae5,	// (0x0006fb83) area_bottom_pane_ParamLimits

0x2ae5,	// (0x0006fb83) area_bottom_pane

0x2b18,	// (0x0006fbb6) area_top_pane_ParamLimits

0x2b18,	// (0x0006fbb6) area_top_pane

0xb220,	// (0x000782be) call_video_uplink_pane_ParamLimits

0xb220,	// (0x000782be) call_video_uplink_pane

0x2b98,	// (0x0006fc36) main_pane_ParamLimits

0x2b98,	// (0x0006fc36) main_pane

0x0d52,	// (0x0006ddf0) context_pane

0x5f8e,	// (0x0007302c) navi_pane

0x5fb7,	// (0x00073055) popup_cale_events_window_ParamLimits

0x5fb7,	// (0x00073055) popup_cale_events_window

0x0d65,	// (0x0006de03) popup_mup_playback_window

0x5fcf,	// (0x0007306d) signal_pane

0x35d4,	// (0x00070672) main_browser_pane

0xb30c,	// (0x000783aa) main_burst_pane

0xb23c,	// (0x000782da) main_calc_pane

0x0d2e,	// (0x0006ddcc) main_cale_day_pane

0x3870,	// (0x0007090e) main_cale_month_pane

0x0d2e,	// (0x0006ddcc) main_cale_week_pane

0xb30c,	// (0x000783aa) main_call_pane

0x310f,	// (0x000701ad) main_call_poc_pane

0xb30c,	// (0x000783aa) main_camera_pane

0xb30c,	// (0x000783aa) main_chi_dic_pane

0xbbd2,	// (0x00078c70) main_clock_pane

0x310f,	// (0x000701ad) main_fmradio_pane

0xb30c,	// (0x000783aa) main_graph_messa_pane

0x310f,	// (0x000701ad) main_help_pane

0x35d4,	// (0x00070672) main_im_pane

0x336a,	// (0x00070408) main_image_pane_ParamLimits

0x336a,	// (0x00070408) main_image_pane

0x310f,	// (0x000701ad) main_location2_pane

0xb30c,	// (0x000783aa) main_location_pane

0x336a,	// (0x00070408) main_messa_pane

0x310f,	// (0x000701ad) main_mp2_pane

0xb30c,	// (0x000783aa) main_mp_pane

0x310f,	// (0x000701ad) main_msg_pane

0x310f,	// (0x000701ad) main_mup_eq_pane

0x310f,	// (0x000701ad) main_mup_pane

0x35d4,	// (0x00070672) main_notes_pane

0x310f,	// (0x000701ad) main_pec_pane

0x310f,	// (0x000701ad) main_phob_pane

0x310f,	// (0x000701ad) main_pinb_pane

0x310f,	// (0x000701ad) main_postcard_pane

0x310f,	// (0x000701ad) main_qdial_pane

0xb30c,	// (0x000783aa) main_skin_pane

0x310f,	// (0x000701ad) main_smil2_pane

0xb30c,	// (0x000783aa) main_smil_pane

0xb30c,	// (0x000783aa) main_video_pane

0xb30c,	// (0x000783aa) main_video_tele_pane

0x336a,	// (0x00070408) main_viewer_pane_ParamLimits

0x336a,	// (0x00070408) main_viewer_pane

0xb30c,	// (0x000783aa) main_vorec_pane

0x5d82,	// (0x00072e20) popup_blid_sat_info_window_ParamLimits

0x5d82,	// (0x00072e20) popup_blid_sat_info_window

0x5dd8,	// (0x00072e76) popup_dyc_status_message_window_ParamLimits

0x5dd8,	// (0x00072e76) popup_dyc_status_message_window

0x5dee,	// (0x00072e8c) popup_grid_large_graphic_window_ParamLimits

0x5dee,	// (0x00072e8c) popup_grid_large_graphic_window

0x5e84,	// (0x00072f22) popup_loc_request_window_ParamLimits

0x5e84,	// (0x00072f22) popup_loc_request_window

0x5f68,	// (0x00073006) popup_wml_address_window_ParamLimits

0x5f68,	// (0x00073006) popup_wml_address_window

0x5bd8,	// (0x00072c76) call_muted_g1

0x58b8,	// (0x00072956) popup_call_audio_conf_window_ParamLimits

0x58b8,	// (0x00072956) popup_call_audio_conf_window

0x5be8,	// (0x00072c86) popup_call_audio_first_window_ParamLimits

0x5be8,	// (0x00072c86) popup_call_audio_first_window

0x5c46,	// (0x00072ce4) popup_call_audio_in_window_ParamLimits

0x5c46,	// (0x00072ce4) popup_call_audio_in_window

0x5c72,	// (0x00072d10) popup_call_audio_out_window_ParamLimits

0x5c72,	// (0x00072d10) popup_call_audio_out_window

0x5ca0,	// (0x00072d3e) popup_call_audio_second_window_ParamLimits

0x5ca0,	// (0x00072d3e) popup_call_audio_second_window

0x5ce6,	// (0x00072d84) popup_call_audio_wait_window_ParamLimits

0x5ce6,	// (0x00072d84) popup_call_audio_wait_window

0x5d19,	// (0x00072db7) popup_number_entry_window_ParamLimits

0x5d19,	// (0x00072db7) popup_number_entry_window

0x2ca6,	// (0x0006fd44) bg_popup_call_pane_cp05_ParamLimits

0x2ca6,	// (0x0006fd44) bg_popup_call_pane_cp05

0x2cc6,	// (0x0006fd64) popup_number_entry_window_t1

0x2cd9,	// (0x0006fd77) popup_number_entry_window_t2

0x2ceb,	// (0x0006fd89) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x0007c0fd) popup_number_entry_window_t

0x2d31,	// (0x0006fdcf) text_title_cp2

0x2d44,	// (0x0006fde2) bg_popup_call_pane_cp_ParamLimits

0x2d44,	// (0x0006fde2) bg_popup_call_pane_cp

0x2d52,	// (0x0006fdf0) call_thumbnail_pane

0x2d5a,	// (0x0006fdf8) popup_call_audio_in_window_g1_ParamLimits

0x2d5a,	// (0x0006fdf8) popup_call_audio_in_window_g1

0x2d66,	// (0x0006fe04) popup_call_audio_in_window_g2_ParamLimits

0x2d66,	// (0x0006fe04) popup_call_audio_in_window_g2

0x2d72,	// (0x0006fe10) popup_call_audio_in_window_g3_ParamLimits

0x2d72,	// (0x0006fe10) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x0007c106) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x0007c106) popup_call_audio_in_window_g

0x2d7e,	// (0x0006fe1c) popup_call_audio_in_window_t1_ParamLimits

0x2d7e,	// (0x0006fe1c) popup_call_audio_in_window_t1

0x2d99,	// (0x0006fe37) popup_call_audio_in_window_t2_ParamLimits

0x2d99,	// (0x0006fe37) popup_call_audio_in_window_t2

0x2db4,	// (0x0006fe52) popup_call_audio_in_window_t3_ParamLimits

0x2db4,	// (0x0006fe52) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x0007c10d) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x0007c10d) popup_call_audio_in_window_t

0x2d44,	// (0x0006fde2) bg_popup_call_pane_cp01_ParamLimits

0x2d44,	// (0x0006fde2) bg_popup_call_pane_cp01

0x2d52,	// (0x0006fdf0) call_thumbnail_pane_cp02

0x2dc7,	// (0x0006fe65) call_type_pane_cp022

0x2dcf,	// (0x0006fe6d) popup_call_audio_out_window_g1_ParamLimits

0x2dcf,	// (0x0006fe6d) popup_call_audio_out_window_g1

0x2de1,	// (0x0006fe7f) popup_call_audio_out_window_g2_ParamLimits

0x2de1,	// (0x0006fe7f) popup_call_audio_out_window_g2

0x2ded,	// (0x0006fe8b) popup_call_audio_out_window_g3_ParamLimits

0x2ded,	// (0x0006fe8b) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x0007c114) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x0007c114) popup_call_audio_out_window_g

0x2dff,	// (0x0006fe9d) popup_call_audio_out_window_t1_ParamLimits

0x2dff,	// (0x0006fe9d) popup_call_audio_out_window_t1

0x2e17,	// (0x0006feb5) popup_call_audio_out_window_t2_ParamLimits

0x2e17,	// (0x0006feb5) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x0007c11b) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x0007c11b) popup_call_audio_out_window_t

0x2e2c,	// (0x0006feca) bg_popup_call_pane_ParamLimits

0x2e2c,	// (0x0006feca) bg_popup_call_pane

0x2eb0,	// (0x0006ff4e) call_thumbnail_pane_cp_ParamLimits

0x2eb0,	// (0x0006ff4e) call_thumbnail_pane_cp

0x2ed4,	// (0x0006ff72) call_type_pane_cp01_ParamLimits

0x2ed4,	// (0x0006ff72) call_type_pane_cp01

0x2f18,	// (0x0006ffb6) popup_call_audio_first_window_g1_ParamLimits

0x2f18,	// (0x0006ffb6) popup_call_audio_first_window_g1

0x2f64,	// (0x00070002) popup_call_audio_first_window_g2_ParamLimits

0x2f64,	// (0x00070002) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0007c120) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0007c120) popup_call_audio_first_window_g

0x2fa8,	// (0x00070046) popup_call_audio_first_window_t1_ParamLimits

0x2fa8,	// (0x00070046) popup_call_audio_first_window_t1

0x3054,	// (0x000700f2) popup_call_audio_first_window_t4_ParamLimits

0x3054,	// (0x000700f2) popup_call_audio_first_window_t4

0x30e0,	// (0x0007017e) popup_call_audio_first_window_t5_ParamLimits

0x30e0,	// (0x0007017e) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x0007c125) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x0007c125) popup_call_audio_first_window_t

0x310f,	// (0x000701ad) bg_popup_call_pane_cp02

0x3119,	// (0x000701b7) call_type_pane_cp023

0x3121,	// (0x000701bf) popup_call_audio_wait_window_g1

0x3129,	// (0x000701c7) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x0007c12c) popup_call_audio_wait_window_g

0x3131,	// (0x000701cf) popup_call_audio_wait_window_t3

0x313f,	// (0x000701dd) bg_popup_call_pane_cp03_ParamLimits

0x313f,	// (0x000701dd) bg_popup_call_pane_cp03

0x319f,	// (0x0007023d) call_thumbnail_pane_cp011_ParamLimits

0x319f,	// (0x0007023d) call_thumbnail_pane_cp011

0x31ab,	// (0x00070249) call_type_pane_cp034_ParamLimits

0x31ab,	// (0x00070249) call_type_pane_cp034

0x31e7,	// (0x00070285) popup_call_audio_second_window_g1_ParamLimits

0x31e7,	// (0x00070285) popup_call_audio_second_window_g1

0x3223,	// (0x000702c1) popup_call_audio_second_window_g2_ParamLimits

0x3223,	// (0x000702c1) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x0007c131) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x0007c131) popup_call_audio_second_window_g

0x325f,	// (0x000702fd) popup_call_audio_second_window_t1_ParamLimits

0x325f,	// (0x000702fd) popup_call_audio_second_window_t1

0x32e0,	// (0x0007037e) popup_call_audio_second_window_t2_ParamLimits

0x32e0,	// (0x0007037e) popup_call_audio_second_window_t2

0x3316,	// (0x000703b4) popup_call_audio_second_window_t3_ParamLimits

0x3316,	// (0x000703b4) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x0007c136) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x0007c136) popup_call_audio_second_window_t

0x310f,	// (0x000701ad) bg_popup_call_pane_cp04

0x334c,	// (0x000703ea) list_conf_pane

0x3354,	// (0x000703f2) popup_call_audio_conf_window_t1

0x3362,	// (0x00070400) call_thumbnail_pane_g1

0x336a,	// (0x00070408) bg_pinb_pane_ParamLimits

0x336a,	// (0x00070408) bg_pinb_pane

0x3378,	// (0x00070416) find_pinb_pane

0x336a,	// (0x00070408) listscroll_pinb_pane_ParamLimits

0x336a,	// (0x00070408) listscroll_pinb_pane

0x3382,	// (0x00070420) pinb_bg_pane_g1

0x3382,	// (0x00070420) pinb_bg_pane_g2

0x3382,	// (0x00070420) pinb_bg_pane_g3

0x3382,	// (0x00070420) pinb_bg_pane_g4

0x3382,	// (0x00070420) pinb_bg_pane_g5

0x3382,	// (0x00070420) pinb_bg_pane_g6

0x3382,	// (0x00070420) pinb_bg_pane_g7

0x3382,	// (0x00070420) pinb_bg_pane_g8

0x3382,	// (0x00070420) pinb_bg_pane_g9

0x3382,	// (0x00070420) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x0007c13d) pinb_bg_pane_g

0x3397,	// (0x00070435) grid_pinb_pane

0x2aaf,	// (0x0006fb4d) list_pinb_pane

0x33a1,	// (0x0007043f) scroll_pane_cp01_ParamLimits

0x33a1,	// (0x0007043f) scroll_pane_cp01

0x33ae,	// (0x0007044c) find_pinb_pane_g1_ParamLimits

0x33ae,	// (0x0007044c) find_pinb_pane_g1

0x33c6,	// (0x00070464) find_pinb_pane_t1

0x33d8,	// (0x00070476) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x0007c157) find_pinb_pane_t

0x33ed,	// (0x0007048b) input_focus_pane_cp01_ParamLimits

0x33ed,	// (0x0007048b) input_focus_pane_cp01

0x33f9,	// (0x00070497) cell_pinb_pane_ParamLimits

0x33f9,	// (0x00070497) cell_pinb_pane

0x340f,	// (0x000704ad) cell_pinb_pane_g1_ParamLimits

0x340f,	// (0x000704ad) cell_pinb_pane_g1

0x341d,	// (0x000704bb) cell_pinb_pane_g2_ParamLimits

0x341d,	// (0x000704bb) cell_pinb_pane_g2

0x341d,	// (0x000704bb) cell_pinb_pane_g3_ParamLimits

0x341d,	// (0x000704bb) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x0007c15c) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x0007c15c) cell_pinb_pane_g

0x310f,	// (0x000701ad) grid_highlight_pane_cp01

0x342b,	// (0x000704c9) list_pinb_item_pane_ParamLimits

0x342b,	// (0x000704c9) list_pinb_item_pane

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp02

0x3439,	// (0x000704d7) list_pinb_item_pane_g1_ParamLimits

0x3439,	// (0x000704d7) list_pinb_item_pane_g1

0x341d,	// (0x000704bb) list_pinb_item_pane_g2_ParamLimits

0x341d,	// (0x000704bb) list_pinb_item_pane_g2

0x340f,	// (0x000704ad) list_pinb_item_pane_g3_ParamLimits

0x340f,	// (0x000704ad) list_pinb_item_pane_g3

0x341d,	// (0x000704bb) list_pinb_item_pane_g4_ParamLimits

0x341d,	// (0x000704bb) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x0007c163) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x0007c163) list_pinb_item_pane_g

0x3447,	// (0x000704e5) list_pinb_item_pane_t1_ParamLimits

0x3447,	// (0x000704e5) list_pinb_item_pane_t1

0x3479,	// (0x00070517) calc_display_pane

0x3495,	// (0x00070533) calc_paper_pane

0x34b6,	// (0x00070554) grid_calc_pane

0x310f,	// (0x000701ad) bg_list_pane_cp01

0x34d2,	// (0x00070570) clock_g1

0x34da,	// (0x00070578) clock_g2

0x0001,

0xf0ce,	// (0x0007c16c) clock_g

0x34e2,	// (0x00070580) clock_t1_ParamLimits

0x34e2,	// (0x00070580) clock_t1

0x34f7,	// (0x00070595) clock_t2_ParamLimits

0x34f7,	// (0x00070595) clock_t2

0x3509,	// (0x000705a7) clock_t3_ParamLimits

0x3509,	// (0x000705a7) clock_t3

0x351b,	// (0x000705b9) clock_t4_ParamLimits

0x351b,	// (0x000705b9) clock_t4

0x352d,	// (0x000705cb) clock_t5_ParamLimits

0x352d,	// (0x000705cb) clock_t5

0x3542,	// (0x000705e0) clock_t6_ParamLimits

0x3542,	// (0x000705e0) clock_t6

0x3554,	// (0x000705f2) clock_t7_ParamLimits

0x3554,	// (0x000705f2) clock_t7

0x3566,	// (0x00070604) clock_t8_ParamLimits

0x3566,	// (0x00070604) clock_t8

0x3578,	// (0x00070616) clock_t9_ParamLimits

0x3578,	// (0x00070616) clock_t9

0x0008,

0xf0d3,	// (0x0007c171) clock_t_ParamLimits

0xf0d3,	// (0x0007c171) clock_t

0x358a,	// (0x00070628) popup_clock_analogue_window_cp02

0x358a,	// (0x00070628) popup_clock_digital_window_cp01

0x310f,	// (0x000701ad) listscroll_help_pane

0x310f,	// (0x000701ad) phob_pre_status_pane

0x3592,	// (0x00070630) grid_qdial_pane

0x336a,	// (0x00070408) listscroll_mce_pane

0x336a,	// (0x00070408) bg_notes_pane

0x359c,	// (0x0007063a) list_notes_pane

0x35aa,	// (0x00070648) scroll_pane_cp06

0x35bc,	// (0x0007065a) bg_calc_paper_pane

0xb252,	// (0x000782f0) list_calc_pane

0x35d4,	// (0x00070672) bg_calc_display_pane

0xb26c,	// (0x0007830a) calc_display_pane_t1

0xb281,	// (0x0007831f) calc_display_pane_t2

0xb296,	// (0x00078334) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x0007c184) calc_display_pane_t

0x35e0,	// (0x0007067e) cell_calc_pane_ParamLimits

0x35e0,	// (0x0007067e) cell_calc_pane

0x3613,	// (0x000706b1) bg_calc_paper_pane_g1

0x361f,	// (0x000706bd) bg_calc_paper_pane_g2

0x362b,	// (0x000706c9) bg_calc_paper_pane_g3

0x3637,	// (0x000706d5) bg_calc_paper_pane_g4

0x3643,	// (0x000706e1) bg_calc_paper_pane_g5

0x364f,	// (0x000706ed) bg_calc_paper_pane_g6

0x365e,	// (0x000706fc) bg_calc_paper_pane_g7

0x366d,	// (0x0007070b) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x0007c18b) bg_calc_paper_pane_g

0x367c,	// (0x0007071a) calc_bg_paper_pane_g9

0x368b,	// (0x00070729) list_calc_item_pane_ParamLimits

0x368b,	// (0x00070729) list_calc_item_pane

0x369f,	// (0x0007073d) list_calc_item_pane_g1

0xb2a8,	// (0x00078346) list_calc_item_pane_t1_ParamLimits

0xb2a8,	// (0x00078346) list_calc_item_pane_t1

0x36ac,	// (0x0007074a) list_calc_item_pane_t2_ParamLimits

0x36ac,	// (0x0007074a) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x0007c19c) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x0007c19c) list_calc_item_pane_t

0x3382,	// (0x00070420) cell_calc_pane_g1

0x36da,	// (0x00070778) grid_highlight_pane_cp02

0x36fc,	// (0x0007079a) bg_calc_display_pane_g1

0xb2ba,	// (0x00078358) bg_calc_display_pane_g2

0x3705,	// (0x000707a3) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x0007c1a6) bg_calc_display_pane_g

0x370e,	// (0x000707ac) cell_qdial_pane_ParamLimits

0x370e,	// (0x000707ac) cell_qdial_pane

0x3720,	// (0x000707be) cell_qdial_pane_g1_ParamLimits

0x3720,	// (0x000707be) cell_qdial_pane_g1

0x3736,	// (0x000707d4) cell_qdial_pane_g2_ParamLimits

0x3736,	// (0x000707d4) cell_qdial_pane_g2

0x3747,	// (0x000707e5) cell_qdial_pane_g3_ParamLimits

0x3747,	// (0x000707e5) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x0007c1ad) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x0007c1ad) cell_qdial_pane_g

0x3769,	// (0x00070807) cell_qdial_pane_t1_ParamLimits

0x3769,	// (0x00070807) cell_qdial_pane_t1

0x3781,	// (0x0007081f) cell_qdial_pane_t2_ParamLimits

0x3781,	// (0x0007081f) cell_qdial_pane_t2

0x3794,	// (0x00070832) cell_qdial_pane_t3_ParamLimits

0x3794,	// (0x00070832) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x0007c1b6) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x0007c1b6) cell_qdial_pane_t

0x310f,	// (0x000701ad) grid_highlight_pane_cp04

0x37a7,	// (0x00070845) thumbnail_qdial_pane_ParamLimits

0x37a7,	// (0x00070845) thumbnail_qdial_pane

0x3803,	// (0x000708a1) list_help_pane

0x380d,	// (0x000708ab) scroll_pane_cp02

0x3816,	// (0x000708b4) help_list_pane_t1_ParamLimits

0x3816,	// (0x000708b4) help_list_pane_t1

0xb2c4,	// (0x00078362) bg_notes_pane_g2

0xb2cc,	// (0x0007836a) bg_notes_pane_g3

0xb2d4,	// (0x00078372) notes_bg_pane_g1

0xb2dc,	// (0x0007837a) notes_bg_pane_g4

0xb2e4,	// (0x00078382) notes_bg_pane_g5

0xb2ec,	// (0x0007838a) notes_bg_pane_g6

0xb2f4,	// (0x00078392) notes_bg_pane_g7

0xb2fc,	// (0x0007839a) notes_bg_pane_g8

0xb304,	// (0x000783a2) notes_bg_pane_g9

0x0006,

0xf136,	// (0x0007c1d4) notes_bg_pane_g

0x3833,	// (0x000708d1) list_notes_text_pane_ParamLimits

0x3833,	// (0x000708d1) list_notes_text_pane

0x3856,	// (0x000708f4) list_notes_text_pane_g1

0x20bd,	// (0x0006f15b) list_notes_text_pane_t1

0x3870,	// (0x0007090e) listscroll_cale_week_pane

0x38a3,	// (0x00070941) bg_cale_heading_pane

0x38bb,	// (0x00070959) bg_cale_pane_cp01

0x38d8,	// (0x00070976) cale_week_corner_pane

0x38f7,	// (0x00070995) cale_week_day_heading_pane

0x3914,	// (0x000709b2) cale_week_scroll_pane_g1

0x3927,	// (0x000709c5) cale_week_scroll_pane_g2

0x393f,	// (0x000709dd) cale_week_scroll_pane_g3

0x3957,	// (0x000709f5) cale_week_scroll_pane_g4

0x396f,	// (0x00070a0d) cale_week_scroll_pane_g5

0x3987,	// (0x00070a25) cale_week_scroll_pane_g6

0x399f,	// (0x00070a3d) cale_week_scroll_pane_g7

0x39b7,	// (0x00070a55) cale_week_scroll_pane_g8

0x39d3,	// (0x00070a71) cale_week_scroll_pane_g9

0x39eb,	// (0x00070a89) cale_week_scroll_pane_g10

0x3a03,	// (0x00070aa1) cale_week_scroll_pane_g11

0x3a1b,	// (0x00070ab9) cale_week_scroll_pane_g12

0x3a33,	// (0x00070ad1) cale_week_scroll_pane_g13

0x3a4b,	// (0x00070ae9) cale_week_scroll_pane_g14

0x3a63,	// (0x00070b01) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0007c1e3) cale_week_scroll_pane_g

0x3a97,	// (0x00070b35) cale_week_time_pane

0x3ab3,	// (0x00070b51) grid_cale_week_pane

0x3ae3,	// (0x00070b81) scroll_pane_cp08

0x3b00,	// (0x00070b9e) cell_cale_week_pane_ParamLimits

0x3b00,	// (0x00070b9e) cell_cale_week_pane

0x3b76,	// (0x00070c14) cale_week_day_heading_pane_t1

0x3ba0,	// (0x00070c3e) cale_week_day_heading_pane_t2

0x3bcf,	// (0x00070c6d) cale_week_day_heading_pane_t3

0x3bfe,	// (0x00070c9c) cale_week_day_heading_pane_t4

0x3c2d,	// (0x00070ccb) cale_week_day_heading_pane_t5

0x3c5c,	// (0x00070cfa) cale_week_day_heading_pane_t6

0x3c8b,	// (0x00070d29) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x0007c204) cale_week_day_heading_pane_t

0x3cb5,	// (0x00070d53) bg_cale_side_pane

0x3cc3,	// (0x00070d61) cale_week_time_pane_t1

0x3cfd,	// (0x00070d9b) cale_week_time_pane_t2

0x3d37,	// (0x00070dd5) cale_week_time_pane_t3

0x3d71,	// (0x00070e0f) cale_week_time_pane_t4

0x3dab,	// (0x00070e49) cale_week_time_pane_t5

0x3de5,	// (0x00070e83) cale_week_time_pane_t6

0x3e1f,	// (0x00070ebd) cale_week_time_pane_t7

0x3e59,	// (0x00070ef7) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x0007c213) cale_week_time_pane_t

0x3e93,	// (0x00070f31) cell_cale_week_pane_g2

0x3eb2,	// (0x00070f50) cell_cale_week_pane_g3_ParamLimits

0x3eb2,	// (0x00070f50) cell_cale_week_pane_g3

0x3eca,	// (0x00070f68) grid_highlight_pane_cp07

0x3ed2,	// (0x00070f70) listscroll_gms_pane

0x3edc,	// (0x00070f7a) grid_gms_pane

0x3ee5,	// (0x00070f83) listscroll_gms_pane_g1

0x3eed,	// (0x00070f8b) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x0007c224) listscroll_gms_pane_g

0x3ef5,	// (0x00070f93) scroll_pane_cp010

0x3f00,	// (0x00070f9e) cell_gms_pane_ParamLimits

0x3f00,	// (0x00070f9e) cell_gms_pane

0x3f10,	// (0x00070fae) cell_gms_pane_g1

0x3f18,	// (0x00070fb6) cell_gms_pane_g2

0x3856,	// (0x000708f4) cell_gms_pane_g3

0x3f20,	// (0x00070fbe) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x0007c229) cell_gms_pane_g

0x3f29,	// (0x00070fc7) grid_highlight_pane_cp09

0x5b66,	// (0x00072c04) phob_pre_status_pane_g1

0x5b6e,	// (0x00072c0c) phob_pre_status_pane_g2

0x5b76,	// (0x00072c14) phob_pre_status_pane_g3

0x5b7e,	// (0x00072c1c) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x0007c617) phob_pre_status_pane_g

0x5b8e,	// (0x00072c2c) phob_pre_status_pane_t1

0x5b9c,	// (0x00072c3a) phob_pre_status_pane_t2

0x5baa,	// (0x00072c48) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0007c622) phob_pre_status_pane_t

0xb30c,	// (0x000783aa) bg_list_pane_cp05

0x3f39,	// (0x00070fd7) grid_vorec_pane

0xb314,	// (0x000783b2) vorec_t1

0xb322,	// (0x000783c0) vorec_t2

0xb330,	// (0x000783ce) vorec_t3

0x3f41,	// (0x00070fdf) vorec_t4

0xaa6a,	// (0x00077b08) vorec_t5

0xaa78,	// (0x00077b16) vorec_t6

0x0004,

0xf194,	// (0x0007c232) vorec_t

0xaa86,	// (0x00077b24) wait_bar_pane_cp01

0x3f4f,	// (0x00070fed) cell_vorec_pane_ParamLimits

0x3f4f,	// (0x00070fed) cell_vorec_pane

0xb34c,	// (0x000783ea) cell_vorec_pane_g1

0x310f,	// (0x000701ad) grid_highlight_pane_cp05

0xb23c,	// (0x000782da) cams_zoom_pane

0xb23c,	// (0x000782da) image_vga_pane

0x340f,	// (0x000704ad) main_camera_pane_g1

0x340f,	// (0x000704ad) main_camera_pane_g2

0x340f,	// (0x000704ad) main_camera_pane_g3

0x340f,	// (0x000704ad) main_camera_pane_g4

0x340f,	// (0x000704ad) main_camera_pane_g5

0x340f,	// (0x000704ad) main_camera_pane_g6

0x340f,	// (0x000704ad) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0007c23d) main_camera_pane_g

0xb356,	// (0x000783f4) main_camera_pane_t1

0xb356,	// (0x000783f4) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0007c24e) main_camera_pane_t

0x3f76,	// (0x00071014) cams_zoom_pane_cp_ParamLimits

0x3f76,	// (0x00071014) cams_zoom_pane_cp

0x3faa,	// (0x00071048) image_cif_pane_ParamLimits

0x3faa,	// (0x00071048) image_cif_pane

0x2aaf,	// (0x0006fb4d) image_subqcif_pane

0x3fbc,	// (0x0007105a) main_video_pane_g1_ParamLimits

0x3fbc,	// (0x0007105a) main_video_pane_g1

0x3fea,	// (0x00071088) main_video_pane_g2_ParamLimits

0x3fea,	// (0x00071088) main_video_pane_g2

0x4024,	// (0x000710c2) main_video_pane_g3_ParamLimits

0x4024,	// (0x000710c2) main_video_pane_g3

0x4024,	// (0x000710c2) main_video_pane_g4_ParamLimits

0x4024,	// (0x000710c2) main_video_pane_g4

0x4058,	// (0x000710f6) main_video_pane_g5_ParamLimits

0x4058,	// (0x000710f6) main_video_pane_g5

0xb36a,	// (0x00078408) main_video_pane_g6_ParamLimits

0xb36a,	// (0x00078408) main_video_pane_g6

0x0006,

0xf1b5,	// (0x0007c253) main_video_pane_g_ParamLimits

0xf1b5,	// (0x0007c253) main_video_pane_g

0x4074,	// (0x00071112) main_video_pane_t1_ParamLimits

0x4074,	// (0x00071112) main_video_pane_t1

0xb384,	// (0x00078422) cams_zoom_pane_g1

0xb384,	// (0x00078422) cams_zoom_pane_g2

0xb384,	// (0x00078422) cams_zoom_pane_g3

0xb384,	// (0x00078422) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x0007c262) cams_zoom_pane_g

0x40cc,	// (0x0007116a) grid_cams_pane

0x40e1,	// (0x0007117f) linegrid_cams_pane

0x40f2,	// (0x00071190) cell_cams_pane_ParamLimits

0x40f2,	// (0x00071190) cell_cams_pane

0xb38e,	// (0x0007842c) cams_burst_image_pane

0xb396,	// (0x00078434) cell_cams_pane_g1

0x310f,	// (0x000701ad) grid_highlight_pane_cp03

0x3382,	// (0x00070420) mp_bg_pane_g1

0x2aaf,	// (0x0006fb4d) bg_list_pane_cp03

0x2aaf,	// (0x0006fb4d) bg_mp_pane

0x2aaf,	// (0x0006fb4d) grid_mp_pane

0xb384,	// (0x00078422) media_player_g1

0x0cd6,	// (0x0006dd74) media_player_t1

0x0cd6,	// (0x0006dd74) media_player_t2

0x0cd6,	// (0x0006dd74) media_player_t3

0x0cd6,	// (0x0006dd74) media_player_t4

0x0cd6,	// (0x0006dd74) media_player_t5

0x0cd6,	// (0x0006dd74) media_player_t6

0x0cd6,	// (0x0006dd74) media_player_t7

0x0006,

0xf563,	// (0x0007c601) media_player_t

0x2aaf,	// (0x0006fb4d) wait_bar_pane_cp02

0xf548,	// (0x0007c5e6) main_usb_pane_t

0xbbd2,	// (0x00078c70) cell_mp_pane

0x3382,	// (0x00070420) cell_mp_pane_g1

0x310f,	// (0x000701ad) grid_highlight_pane_cp06

0xb3dc,	// (0x0007847a) grid_skin_colour_pane

0xb3e4,	// (0x00078482) list_highlight_pane_cp03

0x4110,	// (0x000711ae) skin_g1

0xb3ec,	// (0x0007848a) skin_t1

0xb3fb,	// (0x00078499) skin_t2

0x0001,

0xf1f2,	// (0x0007c290) skin_t

0x4118,	// (0x000711b6) cell_skin_colour_pane_ParamLimits

0x4118,	// (0x000711b6) cell_skin_colour_pane

0xb409,	// (0x000784a7) cell_skin_colour_pane_g1

0x4181,	// (0x0007121f) call_video_g1_ParamLimits

0x4181,	// (0x0007121f) call_video_g1

0x4197,	// (0x00071235) call_video_g2_ParamLimits

0x4197,	// (0x00071235) call_video_g2

0x0001,

0xf1f7,	// (0x0007c295) call_video_g_ParamLimits

0xf1f7,	// (0x0007c295) call_video_g

0x41df,	// (0x0007127d) call_video_uplink_pane_cp1_ParamLimits

0x41df,	// (0x0007127d) call_video_uplink_pane_cp1

0xb41b,	// (0x000784b9) call_video_uplink_pane_cp2

0x4274,	// (0x00071312) video_down_crop_pane_ParamLimits

0x4274,	// (0x00071312) video_down_crop_pane

0x4337,	// (0x000713d5) video_down_pane_ParamLimits

0x4337,	// (0x000713d5) video_down_pane

0xb423,	// (0x000784c1) video_down_subqcif_pane_ParamLimits

0xb423,	// (0x000784c1) video_down_subqcif_pane

0xb43b,	// (0x000784d9) video_down_subqcif_pane_cp_ParamLimits

0xb43b,	// (0x000784d9) video_down_subqcif_pane_cp

0xb45f,	// (0x000784fd) im_reading_pane_ParamLimits

0xb45f,	// (0x000784fd) im_reading_pane

0x43f4,	// (0x00071492) im_writing_pane_ParamLimits

0x43f4,	// (0x00071492) im_writing_pane

0x440a,	// (0x000714a8) im_reading_pane_t1

0xb479,	// (0x00078517) list_im_pane

0xb48a,	// (0x00078528) scroll_pane_cp07

0x4440,	// (0x000714de) im_writing_pane_t1_ParamLimits

0x4440,	// (0x000714de) im_writing_pane_t1

0xb4a3,	// (0x00078541) im_writing_pane_t2_ParamLimits

0xb4a3,	// (0x00078541) im_writing_pane_t2

0x0001,

0xf201,	// (0x0007c29f) im_writing_pane_t_ParamLimits

0xf201,	// (0x0007c29f) im_writing_pane_t

0x310f,	// (0x000701ad) input_focus_pane_cp04

0x310f,	// (0x000701ad) input_focus_pane_cp05

0x4455,	// (0x000714f3) list_im_single_pane_ParamLimits

0x4455,	// (0x000714f3) list_im_single_pane

0xb4c0,	// (0x0007855e) list_single_im_pane_t1

0xb30c,	// (0x000783aa) blid_accuracy_pane

0xb30c,	// (0x000783aa) blid_compass_pane

0x0ce6,	// (0x0006dd84) main_location_t1

0x0ce6,	// (0x0006dd84) main_location_t2

0x0ce6,	// (0x0006dd84) main_location_t3

0x0002,

0xf572,	// (0x0007c610) main_location_t

0x310f,	// (0x000701ad) aid_levels_location

0x3382,	// (0x00070420) blid_accuracy_pane_g1

0x3382,	// (0x00070420) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x0007c2f3) blid_accuracy_pane_g

0xb4fa,	// (0x00078598) wml_content_pane

0xb538,	// (0x000785d6) wml_button_pane_ParamLimits

0xb538,	// (0x000785d6) wml_button_pane

0x446b,	// (0x00071509) wml_list_single_large_pane_ParamLimits

0x446b,	// (0x00071509) wml_list_single_large_pane

0x447f,	// (0x0007151d) wml_list_single_medium_pane_ParamLimits

0x447f,	// (0x0007151d) wml_list_single_medium_pane

0x4494,	// (0x00071532) wml_list_single_small_pane_ParamLimits

0x4494,	// (0x00071532) wml_list_single_small_pane

0xb54c,	// (0x000785ea) wml_selection_box_pane_ParamLimits

0xb54c,	// (0x000785ea) wml_selection_box_pane

0xb55f,	// (0x000785fd) wml_list_single_pane_t1

0xb56e,	// (0x0007860c) wml_list_single_medium_pane_t1

0xb57d,	// (0x0007861b) wml_list_single_large_pane_t1

0xb58c,	// (0x0007862a) input_focus_pane_cp02_ParamLimits

0xb58c,	// (0x0007862a) input_focus_pane_cp02

0xb59f,	// (0x0007863d) wml_selection_box_pane_g1

0xb5a8,	// (0x00078646) wml_selection_box_pane_t1_ParamLimits

0xb5a8,	// (0x00078646) wml_selection_box_pane_t1

0x336a,	// (0x00070408) bg_wml_button_pane_ParamLimits

0x336a,	// (0x00070408) bg_wml_button_pane

0xb5c0,	// (0x0007865e) wml_button_pane_g1

0xb5c8,	// (0x00078666) wml_button_pane_t1

0xb5c0,	// (0x0007865e) wml_button_bg_pane_g1

0xb5d8,	// (0x00078676) wml_button_bg_pane_g2

0xb5e0,	// (0x0007867e) wml_button_bg_pane_g3

0xb5e8,	// (0x00078686) wml_button_bg_pane_g4

0xb5f0,	// (0x0007868e) wml_button_bg_pane_g5

0xb5f8,	// (0x00078696) wml_button_bg_pane_g6

0xb600,	// (0x0007869e) wml_button_bg_pane_g7

0xb608,	// (0x000786a6) wml_button_bg_pane_g8

0xb610,	// (0x000786ae) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x0007c2a4) wml_button_bg_pane_g

0x44ab,	// (0x00071549) bg_list_pane_cp02

0xb618,	// (0x000786b6) mce_header_pane_ParamLimits

0xb618,	// (0x000786b6) mce_header_pane

0xb62c,	// (0x000786ca) mce_icon_pane

0xb62c,	// (0x000786ca) mce_image_pane

0xb635,	// (0x000786d3) mce_text_pane_ParamLimits

0xb635,	// (0x000786d3) mce_text_pane

0x44b4,	// (0x00071552) scroll_pane_cp03

0x44b4,	// (0x00071552) scroll_pane_cp04

0xb649,	// (0x000786e7) scroll_pane_cp05_ParamLimits

0xb649,	// (0x000786e7) scroll_pane_cp05

0x44be,	// (0x0007155c) mce_header_field_pane_ParamLimits

0x44be,	// (0x0007155c) mce_header_field_pane

0x44d5,	// (0x00071573) mce_header_field_pane_2_ParamLimits

0x44d5,	// (0x00071573) mce_header_field_pane_2

0x44eb,	// (0x00071589) mce_header_field_pane_3

0x44f3,	// (0x00071591) list_single_mce_message_pane_ParamLimits

0x44f3,	// (0x00071591) list_single_mce_message_pane

0x4508,	// (0x000715a6) list_single_mce_smart_pane_ParamLimits

0x4508,	// (0x000715a6) list_single_mce_smart_pane

0xb655,	// (0x000786f3) input_focus_pane_cp03

0xb65e,	// (0x000786fc) list_header_data_pane

0x4528,	// (0x000715c6) mce_header_field_pane_t1

0x4536,	// (0x000715d4) list_single_mce_header_pane_ParamLimits

0x4536,	// (0x000715d4) list_single_mce_header_pane

0xb666,	// (0x00078704) list_single_mce_header_pane_t1

0xb675,	// (0x00078713) list_single_mce_message_pane_g1

0xb67e,	// (0x0007871c) list_single_mce_message_pane_t1

0x4570,	// (0x0007160e) bg_cale_heading_pane_cp01_ParamLimits

0x4570,	// (0x0007160e) bg_cale_heading_pane_cp01

0xb68d,	// (0x0007872b) bg_cale_pane_cp02_ParamLimits

0xb68d,	// (0x0007872b) bg_cale_pane_cp02

0x459f,	// (0x0007163d) cale_month_corner_pane

0x45be,	// (0x0007165c) cale_month_day_heading_pane_ParamLimits

0x45be,	// (0x0007165c) cale_month_day_heading_pane

0x45f5,	// (0x00071693) cale_month_pane_g1_ParamLimits

0x45f5,	// (0x00071693) cale_month_pane_g1

0x4619,	// (0x000716b7) cale_month_pane_g2_ParamLimits

0x4619,	// (0x000716b7) cale_month_pane_g2

0x4641,	// (0x000716df) cale_month_pane_g3_ParamLimits

0x4641,	// (0x000716df) cale_month_pane_g3

0x467d,	// (0x0007171b) cale_month_pane_g4_ParamLimits

0x467d,	// (0x0007171b) cale_month_pane_g4

0x46b9,	// (0x00071757) cale_month_pane_g5_ParamLimits

0x46b9,	// (0x00071757) cale_month_pane_g5

0x46f5,	// (0x00071793) cale_month_pane_g6_ParamLimits

0x46f5,	// (0x00071793) cale_month_pane_g6

0x4731,	// (0x000717cf) cale_month_pane_g7_ParamLimits

0x4731,	// (0x000717cf) cale_month_pane_g7

0x476d,	// (0x0007180b) cale_month_pane_g8_ParamLimits

0x476d,	// (0x0007180b) cale_month_pane_g8

0x47b1,	// (0x0007184f) cale_month_pane_g9_ParamLimits

0x47b1,	// (0x0007184f) cale_month_pane_g9

0x47f3,	// (0x00071891) cale_month_pane_g10_ParamLimits

0x47f3,	// (0x00071891) cale_month_pane_g10

0x4835,	// (0x000718d3) cale_month_pane_g11_ParamLimits

0x4835,	// (0x000718d3) cale_month_pane_g11

0x4877,	// (0x00071915) cale_month_pane_g12_ParamLimits

0x4877,	// (0x00071915) cale_month_pane_g12

0x48b9,	// (0x00071957) cale_month_pane_g13_ParamLimits

0x48b9,	// (0x00071957) cale_month_pane_g13

0x000c,

0xf219,	// (0x0007c2b7) cale_month_pane_g_ParamLimits

0xf219,	// (0x0007c2b7) cale_month_pane_g

0x48fb,	// (0x00071999) cale_month_week_pane

0x4917,	// (0x000719b5) grid_cale_month_pane_ParamLimits

0x4917,	// (0x000719b5) grid_cale_month_pane

0x4945,	// (0x000719e3) cale_month_day_heading_pane_t1

0x49cb,	// (0x00071a69) cale_month_day_heading_pane_t2

0x4a5c,	// (0x00071afa) cale_month_day_heading_pane_t3

0x4aed,	// (0x00071b8b) cale_month_day_heading_pane_t4

0x4b7e,	// (0x00071c1c) cale_month_day_heading_pane_t5

0x4c0f,	// (0x00071cad) cale_month_day_heading_pane_t6

0x4ca0,	// (0x00071d3e) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0007c2d2) cale_month_day_heading_pane_t

0x3cb5,	// (0x00070d53) bg_cale_side_pane_cp01

0x4d35,	// (0x00071dd3) cale_month_week_pane_t1

0x4d4e,	// (0x00071dec) cale_month_week_pane_t2

0x4d67,	// (0x00071e05) cale_month_week_pane_t3

0x4d80,	// (0x00071e1e) cale_month_week_pane_t4

0x4d99,	// (0x00071e37) cale_month_week_pane_t5

0x4db2,	// (0x00071e50) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0007c2e1) cale_month_week_pane_t

0x4dcb,	// (0x00071e69) cell_cale_month_pane_ParamLimits

0x4dcb,	// (0x00071e69) cell_cale_month_pane

0xb6cc,	// (0x0007876a) cell_cale_month_pane_g1

0x4ebd,	// (0x00071f5b) cell_cale_month_pane_t1_ParamLimits

0x4ebd,	// (0x00071f5b) cell_cale_month_pane_t1

0x3eca,	// (0x00070f68) grid_highlight_pane_cp08

0x3382,	// (0x00070420) main_smil_g1

0x4edd,	// (0x00071f7b) smil_status_pane

0xb6d8,	// (0x00078776) smil_text_pane

0x0bae,	// (0x0006dc4c) bg_popup_call3_rect_pane_g8

0x0bb6,	// (0x0006dc54) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x0007c591) bg_popup_call3_rect_pane_g

0x0dc7,	// (0x0006de65) smil_status_volume_pane_g1

0x4eee,	// (0x00071f8c) smil_status_pane_t1

0xcb2c,	// (0x00079bca) volume_smil_pane

0xb6e2,	// (0x00078780) list_smil_text_pane

0x4f05,	// (0x00071fa3) scroll_pane_cp011

0x4f10,	// (0x00071fae) smil_text_list_pane_t1_ParamLimits

0x4f10,	// (0x00071fae) smil_text_list_pane_t1

0xb6ec,	// (0x0007878a) aid_volume_smil_ParamLimits

0xb6ec,	// (0x0007878a) aid_volume_smil

0x3382,	// (0x00070420) smil_volume_pane_g1

0x3382,	// (0x00070420) smil_volume_pane_g2

0x0001,

0xf255,	// (0x0007c2f3) smil_volume_pane_g

0x3870,	// (0x0007090e) listscroll_cale_day_pane

0xb70e,	// (0x000787ac) bg_cale_pane

0xb726,	// (0x000787c4) list_cale_pane

0xb749,	// (0x000787e7) scroll_pane_cp09

0xb75a,	// (0x000787f8) cale_bg_pane_g1

0xb762,	// (0x00078800) cale_bg_pane_g2

0xb76a,	// (0x00078808) cale_bg_pane_g3

0xb772,	// (0x00078810) cale_bg_pane_g4

0xb77a,	// (0x00078818) cale_bg_pane_g5

0xb782,	// (0x00078820) cale_bg_pane_g6

0xb78a,	// (0x00078828) cale_bg_pane_g7

0xb792,	// (0x00078830) cale_bg_pane_g8

0xb79a,	// (0x00078838) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x0007c2f8) cale_bg_pane_g

0x4f54,	// (0x00071ff2) list_cale_time_pane_ParamLimits

0x4f54,	// (0x00071ff2) list_cale_time_pane

0xb7a2,	// (0x00078840) list_cale_time_pane_g1_ParamLimits

0xb7a2,	// (0x00078840) list_cale_time_pane_g1

0xb7ae,	// (0x0007884c) list_cale_time_pane_g2_ParamLimits

0xb7ae,	// (0x0007884c) list_cale_time_pane_g2

0x4f69,	// (0x00072007) list_cale_time_pane_g3_ParamLimits

0x4f69,	// (0x00072007) list_cale_time_pane_g3

0x4f75,	// (0x00072013) list_cale_time_pane_g4_ParamLimits

0x4f75,	// (0x00072013) list_cale_time_pane_g4

0x4f81,	// (0x0007201f) list_cale_time_pane_g5_ParamLimits

0x4f81,	// (0x0007201f) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0007c30b) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0007c30b) list_cale_time_pane_g

0xb7c8,	// (0x00078866) list_cale_time_pane_t1_ParamLimits

0xb7c8,	// (0x00078866) list_cale_time_pane_t1

0xb7f0,	// (0x0007888e) list_cale_time_pane_t2_ParamLimits

0xb7f0,	// (0x0007888e) list_cale_time_pane_t2

0x5201,	// (0x0007229f) aid_blid_cardinal_pane

0x523f,	// (0x000722dd) compass_pane_t4

0xb818,	// (0x000788b6) list_cale_time_pane_t4_ParamLimits

0xb818,	// (0x000788b6) list_cale_time_pane_t4

0x524d,	// (0x000722eb) compass_pane_t5

0x525b,	// (0x000722f9) compass_pane_t6

0x5269,	// (0x00072307) compass_pane_t7

0xbcef,	// (0x00078d8d) navi_pane_cc_t1

0xbea6,	// (0x00078f44) aid_phob_thumbnail_center_pane

0x55a8,	// (0x00072646) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x0007c318) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x0007c318) list_cale_time_pane_t

0x2d44,	// (0x0006fde2) bg_popup_window_pane_cp02_ParamLimits

0x2d44,	// (0x0006fde2) bg_popup_window_pane_cp02

0xb840,	// (0x000788de) heading_pane_cp01_ParamLimits

0xb840,	// (0x000788de) heading_pane_cp01

0xb84c,	// (0x000788ea) loc_req_pane_ParamLimits

0xb84c,	// (0x000788ea) loc_req_pane

0xb85c,	// (0x000788fa) loc_type_pane_ParamLimits

0xb85c,	// (0x000788fa) loc_type_pane

0xb86e,	// (0x0007890c) loc_type_pane_t1_ParamLimits

0xb86e,	// (0x0007890c) loc_type_pane_t1

0xb880,	// (0x0007891e) loc_type_pane_t2_ParamLimits

0xb880,	// (0x0007891e) loc_type_pane_t2

0xb892,	// (0x00078930) loc_type_pane_t3_ParamLimits

0xb892,	// (0x00078930) loc_type_pane_t3

0x0002,

0xf281,	// (0x0007c31f) loc_type_pane_t_ParamLimits

0xf281,	// (0x0007c31f) loc_type_pane_t

0xb8a4,	// (0x00078942) list_loc_req_pane

0xb8ae,	// (0x0007894c) scroll_pane_cp012

0x4f8d,	// (0x0007202b) list_single_loc_request_popup_menu_pane_ParamLimits

0x4f8d,	// (0x0007202b) list_single_loc_request_popup_menu_pane

0xb8b7,	// (0x00078955) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb8b7,	// (0x00078955) list_single_loc_request_popup_menu_pane_g1

0xb8c3,	// (0x00078961) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb8c3,	// (0x00078961) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x0007c326) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x0007c326) list_single_loc_request_popup_menu_pane_g

0xb8cf,	// (0x0007896d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb8cf,	// (0x0007896d) list_single_loc_request_popup_menu_pane_t1

0x336a,	// (0x00070408) bg_popup_window_pane_cp03_ParamLimits

0x336a,	// (0x00070408) bg_popup_window_pane_cp03

0x119d,	// (0x0006e23b) heading_loc_req_pane_ParamLimits

0x119d,	// (0x0006e23b) heading_loc_req_pane

0x4f9a,	// (0x00072038) popup_dyc_status_message_window_g1_ParamLimits

0x4f9a,	// (0x00072038) popup_dyc_status_message_window_g1

0x4fae,	// (0x0007204c) popup_dyc_status_message_window_t1_ParamLimits

0x4fae,	// (0x0007204c) popup_dyc_status_message_window_t1

0x4fc3,	// (0x00072061) popup_dyc_status_message_window_t2_ParamLimits

0x4fc3,	// (0x00072061) popup_dyc_status_message_window_t2

0x4fd8,	// (0x00072076) popup_dyc_status_message_window_t3_ParamLimits

0x4fd8,	// (0x00072076) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0007c32b) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0007c32b) popup_dyc_status_message_window_t

0x310f,	// (0x000701ad) bg_heading_pane_cp01

0xb8e5,	// (0x00078983) heading_loc_req_pane_g1

0xb8ed,	// (0x0007898b) heading_loc_req_pane_g2

0xb8f5,	// (0x00078993) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x0007c332) heading_loc_req_pane_g

0xb8fd,	// (0x0007899b) heading_loc_req_pane_t1

0xb92a,	// (0x000789c8) bg_popup_sub_pane_cp01_ParamLimits

0xb92a,	// (0x000789c8) bg_popup_sub_pane_cp01

0xb938,	// (0x000789d6) popup_cale_events_window_g1_ParamLimits

0xb938,	// (0x000789d6) popup_cale_events_window_g1

0xb958,	// (0x000789f6) popup_cale_events_window_g2_ParamLimits

0xb958,	// (0x000789f6) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x0007c366) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x0007c366) popup_cale_events_window_g

0xb978,	// (0x00078a16) popup_cale_events_window_t1_ParamLimits

0xb978,	// (0x00078a16) popup_cale_events_window_t1

0xb98a,	// (0x00078a28) popup_cale_events_window_t2_ParamLimits

0xb98a,	// (0x00078a28) popup_cale_events_window_t2

0xb9c8,	// (0x00078a66) popup_cale_events_window_t3_ParamLimits

0xb9c8,	// (0x00078a66) popup_cale_events_window_t3

0xba02,	// (0x00078aa0) popup_cale_events_window_t4_ParamLimits

0xba02,	// (0x00078aa0) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x0007c36b) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x0007c36b) popup_cale_events_window_t

0x500e,	// (0x000720ac) call_type_pane

0x501e,	// (0x000720bc) popup_call_status_window_g1

0x5032,	// (0x000720d0) popup_call_status_window_g2

0x5046,	// (0x000720e4) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x0007c374) popup_call_status_window_g

0xba38,	// (0x00078ad6) call_type_pane_g1

0xba41,	// (0x00078adf) call_type_pane_g2

0x0001,

0xf2dd,	// (0x0007c37b) call_type_pane_g

0x310f,	// (0x000701ad) bg_popup_sub_pane_cp02

0xba4a,	// (0x00078ae8) listscroll_popup_wml_pane

0xba52,	// (0x00078af0) list_wml_pane

0xba5c,	// (0x00078afa) scroll_pane_cp013

0x5056,	// (0x000720f4) list_single_graphic_popup_wml_pane_ParamLimits

0x5056,	// (0x000720f4) list_single_graphic_popup_wml_pane

0x3382,	// (0x00070420) list_single_graphic_popup_wml_pane_g1

0xba65,	// (0x00078b03) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x0007c380) list_single_graphic_popup_wml_pane_g

0xba6d,	// (0x00078b0b) list_single_graphic_popup_wml_pane_t1

0xba83,	// (0x00078b21) aid_call_pane

0x3362,	// (0x00070400) popup_clock_analogue_window_g1

0x3362,	// (0x00070400) popup_clock_analogue_window_g2

0xba8b,	// (0x00078b29) popup_clock_analogue_window_g3

0xba8b,	// (0x00078b29) popup_clock_analogue_window_g4

0x3382,	// (0x00070420) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x0007c385) popup_clock_analogue_window_g

0xba93,	// (0x00078b31) popup_clock_analogue_window_t1

0xbaa1,	// (0x00078b3f) clock_digital_number_pane_ParamLimits

0xbaa1,	// (0x00078b3f) clock_digital_number_pane

0xbaad,	// (0x00078b4b) clock_digital_number_pane_cp02_ParamLimits

0xbaad,	// (0x00078b4b) clock_digital_number_pane_cp02

0xbab9,	// (0x00078b57) clock_digital_number_pane_cp03_ParamLimits

0xbab9,	// (0x00078b57) clock_digital_number_pane_cp03

0xbac5,	// (0x00078b63) clock_digital_number_pane_cp04_ParamLimits

0xbac5,	// (0x00078b63) clock_digital_number_pane_cp04

0xbad1,	// (0x00078b6f) clock_digital_separator_pane_ParamLimits

0xbad1,	// (0x00078b6f) clock_digital_separator_pane

0xbadd,	// (0x00078b7b) popup_clock_digital_window_t1

0x3382,	// (0x00070420) clock_digital_number_pane_g1

0x3382,	// (0x00070420) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x0007c2f3) clock_digital_number_pane_g

0x3382,	// (0x00070420) clock_digital_separator_pane_g1

0x3382,	// (0x00070420) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x0007c2f3) clock_digital_separator_pane_g

0x310f,	// (0x000701ad) bg_popup_window_pane_cp04

0xbafa,	// (0x00078b98) heading_pane_cp03

0xb30c,	// (0x000783aa) listscroll_popup_gms_pane

0x310f,	// (0x000701ad) grid_large_graphic_popup_pane

0xbb03,	// (0x00078ba1) listscroll_popup_gms_pane_g1

0xbb0c,	// (0x00078baa) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x0007c390) listscroll_popup_gms_pane_g

0xbb15,	// (0x00078bb3) scroll_pane_cp014

0x342b,	// (0x000704c9) cell_large_graphic_popup_pane_ParamLimits

0x342b,	// (0x000704c9) cell_large_graphic_popup_pane

0x340f,	// (0x000704ad) cell_large_graphic_popup_pane_g1_ParamLimits

0x340f,	// (0x000704ad) cell_large_graphic_popup_pane_g1

0xbb1d,	// (0x00078bbb) cell_large_graphic_popup_pane_g2_ParamLimits

0xbb1d,	// (0x00078bbb) cell_large_graphic_popup_pane_g2

0xbb2b,	// (0x00078bc9) cell_large_graphic_popup_pane_g3_ParamLimits

0xbb2b,	// (0x00078bc9) cell_large_graphic_popup_pane_g3

0xbb39,	// (0x00078bd7) cell_large_graphic_popup_pane_g4_ParamLimits

0xbb39,	// (0x00078bd7) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x0007c395) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x0007c395) cell_large_graphic_popup_pane_g

0x310f,	// (0x000701ad) grid_highlight_pane_cp010

0x3382,	// (0x00070420) bg_popup_call_pane_g1

0xbb4a,	// (0x00078be8) list_single_graphic_popup_conf_pane_ParamLimits

0xbb4a,	// (0x00078be8) list_single_graphic_popup_conf_pane

0xbb5d,	// (0x00078bfb) list_highlight_pane_cp01

0xbb66,	// (0x00078c04) list_single_graphic_popup_conf_pane_g1

0xbb6e,	// (0x00078c0c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x0007c39e) list_single_graphic_popup_conf_pane_g

0xbb76,	// (0x00078c14) list_single_graphic_popup_conf_pane_t1

0xbb84,	// (0x00078c22) linegrid_cams_pane_g1

0x5069,	// (0x00072107) linegrid_cams_pane_g2

0x3856,	// (0x000708f4) linegrid_cams_pane_g3

0xbb8d,	// (0x00078c2b) linegrid_cams_pane_g4

0x5072,	// (0x00072110) linegrid_cams_pane_g5

0x507b,	// (0x00072119) linegrid_cams_pane_g6

0x3f20,	// (0x00070fbe) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x0007c3a3) linegrid_cams_pane_g

0xbb96,	// (0x00078c34) popup_clock_analogue_window

0xbb96,	// (0x00078c34) popup_clock_digital_window

0x310f,	// (0x000701ad) popup_phob_thumbnail_window

0x3382,	// (0x00070420) call_video_uplink_pane_g1

0xbb9f,	// (0x00078c3d) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x0007c3b2) call_video_uplink_pane_g

0x3eca,	// (0x00070f68) video_uplink_pane

0xbba7,	// (0x00078c45) mce_image_pane_g1

0x5084,	// (0x00072122) mce_image_pane_g2

0x508c,	// (0x0007212a) mce_image_pane_g3

0x5094,	// (0x00072132) mce_image_pane_g4

0x509c,	// (0x0007213a) mce_image_pane_g5

0x0004,

0xf319,	// (0x0007c3b7) mce_image_pane_g

0xbbb1,	// (0x00078c4f) control_top_pane_stacon_cp01_ParamLimits

0xbbb1,	// (0x00078c4f) control_top_pane_stacon_cp01

0xbbc1,	// (0x00078c5f) uni_indicator_pane_stacon_cp01_ParamLimits

0xbbc1,	// (0x00078c5f) uni_indicator_pane_stacon_cp01

0xbbd2,	// (0x00078c70) bg_popup_sub_pane_cp03

0xbbdc,	// (0x00078c7a) chi_dic_find_pane

0x50a4,	// (0x00072142) listscroll_chi_dic_pane

0xbbe4,	// (0x00078c82) main_pane_chidic_g1

0xbbec,	// (0x00078c8a) chi_dic_find_pane_t1

0xbbfa,	// (0x00078c98) find_chidic_pane

0xbc03,	// (0x00078ca1) chi_dic_list_pane_ParamLimits

0xbc03,	// (0x00078ca1) chi_dic_list_pane

0xbb15,	// (0x00078bb3) scroll_pane_cp020

0xbc14,	// (0x00078cb2) find_chidic_pane_t1

0x310f,	// (0x000701ad) input_focus_pane_cp06

0x50b8,	// (0x00072156) list_chi_dic_pane_ParamLimits

0x50b8,	// (0x00072156) list_chi_dic_pane

0x50ca,	// (0x00072168) list_chi_dic_pane_t1_ParamLimits

0x50ca,	// (0x00072168) list_chi_dic_pane_t1

0x310f,	// (0x000701ad) list_highlight_pane_cp020

0xbc23,	// (0x00078cc1) bg_cale_heading_pane_g1

0x50dd,	// (0x0007217b) bg_cale_heading_pane_g2

0x50e5,	// (0x00072183) bg_cale_heading_pane_g3

0x50ed,	// (0x0007218b) bg_cale_heading_pane_g4

0x50f5,	// (0x00072193) bg_cale_heading_pane_g5

0x50fd,	// (0x0007219b) bg_cale_heading_pane_g6

0x5105,	// (0x000721a3) bg_cale_heading_pane_g7

0x510d,	// (0x000721ab) bg_cale_heading_pane_g8

0x5115,	// (0x000721b3) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x0007c3c2) bg_cale_heading_pane_g

0xbc23,	// (0x00078cc1) bg_cale_side_pane_g1

0x511d,	// (0x000721bb) bg_cale_side_pane_g2

0x5125,	// (0x000721c3) bg_cale_side_pane_g3

0x512d,	// (0x000721cb) bg_cale_side_pane_g4

0x5135,	// (0x000721d3) bg_cale_side_pane_g5

0x513d,	// (0x000721db) bg_cale_side_pane_g6

0x5145,	// (0x000721e3) bg_cale_side_pane_g7

0x514d,	// (0x000721eb) bg_cale_side_pane_g8

0x5155,	// (0x000721f3) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x0007c3d5) bg_cale_side_pane_g

0x515d,	// (0x000721fb) popup_call_status_window_ParamLimits

0x515d,	// (0x000721fb) popup_call_status_window

0xbc2b,	// (0x00078cc9) stacon_top_pane

0xbc33,	// (0x00078cd1) status_pane_ParamLimits

0xbc33,	// (0x00078cd1) status_pane

0xbc4d,	// (0x00078ceb) status_small_pane

0xbc55,	// (0x00078cf3) control_pane

0x310f,	// (0x000701ad) stacon_bottom_pane

0xbc5d,	// (0x00078cfb) list_single_mce_smart_pane_t1_ParamLimits

0xbc5d,	// (0x00078cfb) list_single_mce_smart_pane_t1

0xbc70,	// (0x00078d0e) list_single_mce_smart_pane_t2_ParamLimits

0xbc70,	// (0x00078d0e) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x0007c3e8) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x0007c3e8) list_single_mce_smart_pane_t

0x51a4,	// (0x00072242) compass_pane

0x51ad,	// (0x0007224b) main_location2_pane_t1

0x51c3,	// (0x00072261) main_location2_pane_t2

0x51d9,	// (0x00072277) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0007c3ed) main_location2_pane_t

0xbc98,	// (0x00078d36) compass_pane_g1_ParamLimits

0xbc98,	// (0x00078d36) compass_pane_g1

0x5221,	// (0x000722bf) compass_pane_t1

0x5230,	// (0x000722ce) compass_pane_t2

0x0005,

0xf358,	// (0x0007c3f6) compass_pane_t

0x5277,	// (0x00072315) text_secondary_cp61

0xbce6,	// (0x00078d84) navi_pane_cams_g5

0xbd32,	// (0x00078dd0) navi_pane_im_t1

0xbd40,	// (0x00078dde) navi_pane_mp_g1_ParamLimits

0xbd40,	// (0x00078dde) navi_pane_mp_g1

0xbd54,	// (0x00078df2) navi_pane_mp_g2_ParamLimits

0xbd54,	// (0x00078df2) navi_pane_mp_g2

0xbd60,	// (0x00078dfe) navi_pane_mp_g3_ParamLimits

0xbd60,	// (0x00078dfe) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x0007c40a) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x0007c40a) navi_pane_mp_g

0xbd6c,	// (0x00078e0a) navi_pane_mp_t1

0xbd7a,	// (0x00078e18) navi_pane_mp_t2

0x0002,

0xf373,	// (0x0007c411) navi_pane_mp_t

0xbde5,	// (0x00078e83) navi_pane_vt_g1

0xbd6c,	// (0x00078e0a) navi_pane_vt_t1

0xbded,	// (0x00078e8b) navi_slider_pane

0xb30c,	// (0x000783aa) zooming_pane

0xbdf5,	// (0x00078e93) navi_slider_pane_g1

0xbdfe,	// (0x00078e9c) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x0007c418) navi_slider_pane_g

0xbe2b,	// (0x00078ec9) aid_levels_zoom

0xbe33,	// (0x00078ed1) zooming_pane_g1

0xbe3b,	// (0x00078ed9) zooming_pane_g2

0xbe3b,	// (0x00078ed9) zooming_pane_g3

0x0002,

0xf389,	// (0x0007c427) zooming_pane_g

0xbe43,	// (0x00078ee1) level_10_zoom

0xbe4c,	// (0x00078eea) level_11_zoom

0xbe55,	// (0x00078ef3) level_1_zoom

0xbe5e,	// (0x00078efc) level_2_zoom

0xbe67,	// (0x00078f05) level_3_zoom

0xbe70,	// (0x00078f0e) level_4_zoom

0xbe79,	// (0x00078f17) level_5_zoom

0xbe82,	// (0x00078f20) level_6_zoom

0xbe8b,	// (0x00078f29) level_7_zoom

0xbe94,	// (0x00078f32) level_8_zoom

0xbe9d,	// (0x00078f3b) level_9_zoom

0xbeae,	// (0x00078f4c) popup_phob_thumbnail_window_g1

0xbeb6,	// (0x00078f54) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0007c42e) popup_phob_thumbnail_window_g

0x5bb8,	// (0x00072c56) level_1_location

0x5bc0,	// (0x00072c5e) level_2_location

0x5bc8,	// (0x00072c66) level_3_location

0x5bd0,	// (0x00072c6e) level_4_location

0xb30c,	// (0x000783aa) level_5_location

0x530d,	// (0x000723ab) mce_icon_pane_g1

0x5315,	// (0x000723b3) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0007c433) mce_icon_pane_g

0x0e21,	// (0x0006debf) main_mup_pane_g1_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g1

0x0e21,	// (0x0006debf) main_mup_pane_g2_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g2

0x0e21,	// (0x0006debf) main_mup_pane_g3_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g3

0x0e21,	// (0x0006debf) main_mup_pane_g4_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g4

0x0e21,	// (0x0006debf) main_mup_pane_g5_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g5

0x0e21,	// (0x0006debf) main_mup_pane_g6_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g6

0x0e21,	// (0x0006debf) main_mup_pane_g7_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g7

0x0e21,	// (0x0006debf) main_mup_pane_g8_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g8

0x0e21,	// (0x0006debf) main_mup_pane_g9_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g9

0x0e21,	// (0x0006debf) main_mup_pane_g10_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g10

0x0e21,	// (0x0006debf) main_mup_pane_g11_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g11

0x340f,	// (0x000704ad) main_mup_pane_g12_ParamLimits

0x340f,	// (0x000704ad) main_mup_pane_g12

0x0e21,	// (0x0006debf) main_mup_pane_g13_ParamLimits

0x0e21,	// (0x0006debf) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0007c438) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0007c438) main_mup_pane_g

0x0e2f,	// (0x0006decd) main_mup_pane_t1_ParamLimits

0x0e2f,	// (0x0006decd) main_mup_pane_t1

0x0e2f,	// (0x0006decd) main_mup_pane_t2_ParamLimits

0x0e2f,	// (0x0006decd) main_mup_pane_t2

0x0e2f,	// (0x0006decd) main_mup_pane_t3_ParamLimits

0x0e2f,	// (0x0006decd) main_mup_pane_t3

0xb356,	// (0x000783f4) main_mup_pane_t4_ParamLimits

0xb356,	// (0x000783f4) main_mup_pane_t4

0xb356,	// (0x000783f4) main_mup_pane_t5_ParamLimits

0xb356,	// (0x000783f4) main_mup_pane_t5

0xbebe,	// (0x00078f5c) main_mup_pane_t6_ParamLimits

0xbebe,	// (0x00078f5c) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x0007c453) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x0007c453) main_mup_pane_t

0x342b,	// (0x000704c9) mup_progress_pane_ParamLimits

0x342b,	// (0x000704c9) mup_progress_pane

0x0d3a,	// (0x0006ddd8) mup_visualizer_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) mup_visualizer_pane

0x0d3a,	// (0x0006ddd8) mup_volume_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) mup_volume_pane

0x341d,	// (0x000704bb) mup_visualizer_pane_g1_ParamLimits

0x341d,	// (0x000704bb) mup_visualizer_pane_g1

0xbed2,	// (0x00078f70) mup_visualizer_pane_g2_ParamLimits

0xbed2,	// (0x00078f70) mup_visualizer_pane_g2

0x340f,	// (0x000704ad) mup_visualizer_pane_g3_ParamLimits

0x340f,	// (0x000704ad) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0007c460) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0007c460) mup_visualizer_pane_g

0xb384,	// (0x00078422) mup_volume_pane_g1

0xb384,	// (0x00078422) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x0007c467) mup_volume_pane_g

0xb384,	// (0x00078422) mup_progress_pane_g1

0xb384,	// (0x00078422) mup_progress_pane_g2

0xb384,	// (0x00078422) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x0007c46c) mup_progress_pane_g

0x310f,	// (0x000701ad) bg_popup_window_pane_cp05

0xbee0,	// (0x00078f7e) heading_pane_cp02_ParamLimits

0xbee0,	// (0x00078f7e) heading_pane_cp02

0xbefa,	// (0x00078f98) list_popup_blid_pane

0xbf02,	// (0x00078fa0) list_blid_sat_info_pane_ParamLimits

0xbf02,	// (0x00078fa0) list_blid_sat_info_pane

0xbf15,	// (0x00078fb3) list_blid_sat_info_pane_g1

0xbf1d,	// (0x00078fbb) list_blid_sat_info_pane_t1

0x53ef,	// (0x0007248d) mup_equalizer_pane_ParamLimits

0x53ef,	// (0x0007248d) mup_equalizer_pane

0x5408,	// (0x000724a6) mup_equalizer_pane_cp1_ParamLimits

0x5408,	// (0x000724a6) mup_equalizer_pane_cp1

0x5421,	// (0x000724bf) mup_equalizer_pane_cp2_ParamLimits

0x5421,	// (0x000724bf) mup_equalizer_pane_cp2

0x543a,	// (0x000724d8) mup_equalizer_pane_cp3_ParamLimits

0x543a,	// (0x000724d8) mup_equalizer_pane_cp3

0x5453,	// (0x000724f1) mup_equalizer_pane_cp4_ParamLimits

0x5453,	// (0x000724f1) mup_equalizer_pane_cp4

0x546c,	// (0x0007250a) mup_equalizer_pane_cp5

0x547e,	// (0x0007251c) mup_equalizer_pane_cp6

0x5490,	// (0x0007252e) mup_equalizer_pane_cp7

0x0c2e,	// (0x0006dccc) bg_popup_call_poc_act_pane_g9

0x0c36,	// (0x0006dcd4) bg_popup_call_poc_act_pane_g10

0x0c3e,	// (0x0006dcdc) bg_popup_call_poc_act_pane_g11

0x000a,

0x336a,	// (0x00070408) mup_scale_pane

0x3382,	// (0x00070420) mup_scale_pane_g1

0xbf2b,	// (0x00078fc9) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x0007c488) mup_scale_pane_g

0xbf4f,	// (0x00078fed) msg_data_pane

0xbf57,	// (0x00078ff5) scroll_pane_cp017

0x20cb,	// (0x0006f169) bg_list_pane_cp04_ParamLimits

0x20cb,	// (0x0006f169) bg_list_pane_cp04

0xbf67,	// (0x00079005) msg_data_pane_g1

0x5084,	// (0x00072122) msg_data_pane_g2

0x508c,	// (0x0007212a) msg_data_pane_g3

0x54b6,	// (0x00072554) msg_data_pane_g4

0x509c,	// (0x0007213a) msg_data_pane_g5

0x530d,	// (0x000723ab) msg_data_pane_g6

0x54be,	// (0x0007255c) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x0007c497) msg_data_pane_g

0x20e3,	// (0x0006f181) msg_text_pane_ParamLimits

0x20e3,	// (0x0006f181) msg_text_pane

0x54c6,	// (0x00072564) qrid_highlight_pane_cp011_ParamLimits

0x54c6,	// (0x00072564) qrid_highlight_pane_cp011

0x310f,	// (0x000701ad) msg_body_pane

0x310f,	// (0x000701ad) msg_header_pane

0xbf78,	// (0x00079016) input_focus_pane_cp07

0xbf8d,	// (0x0007902b) msg_header_pane_t1_ParamLimits

0xbf8d,	// (0x0007902b) msg_header_pane_t1

0x2114,	// (0x0006f1b2) msg_header_pane_t2_ParamLimits

0x2114,	// (0x0006f1b2) msg_header_pane_t2

0x0001,

0xf40d,	// (0x0007c4ab) msg_header_pane_t_ParamLimits

0xf40d,	// (0x0007c4ab) msg_header_pane_t

0xbfa3,	// (0x00079041) msg_body_pane_g1

0x212b,	// (0x0006f1c9) msg_body_pane_t1_ParamLimits

0x212b,	// (0x0006f1c9) msg_body_pane_t1

0x2156,	// (0x0006f1f4) msg_body_pane_t2_ParamLimits

0x2156,	// (0x0006f1f4) msg_body_pane_t2

0x2168,	// (0x0006f206) msg_body_pane_t3_ParamLimits

0x2168,	// (0x0006f206) msg_body_pane_t3

0x0002,

0xf412,	// (0x0007c4b0) msg_body_pane_t_ParamLimits

0xf412,	// (0x0007c4b0) msg_body_pane_t

0x5512,	// (0x000725b0) main_viewer_pane_g1_ParamLimits

0x5512,	// (0x000725b0) main_viewer_pane_g1

0x551e,	// (0x000725bc) main_viewer_pane_g2_ParamLimits

0x551e,	// (0x000725bc) main_viewer_pane_g2

0x552a,	// (0x000725c8) main_viewer_pane_g3_ParamLimits

0x552a,	// (0x000725c8) main_viewer_pane_g3

0x5539,	// (0x000725d7) main_viewer_pane_g4_ParamLimits

0x5539,	// (0x000725d7) main_viewer_pane_g4

0xbfc3,	// (0x00079061) main_viewer_pane_g5_ParamLimits

0xbfc3,	// (0x00079061) main_viewer_pane_g5

0xbfc3,	// (0x00079061) main_viewer_pane_g7_ParamLimits

0xbfc3,	// (0x00079061) main_viewer_pane_g7

0xbfd5,	// (0x00079073) main_viewer_pane_g8_ParamLimits

0xbfd5,	// (0x00079073) main_viewer_pane_g8

0x0007,

0xf422,	// (0x0007c4c0) main_viewer_pane_g_ParamLimits

0xf422,	// (0x0007c4c0) main_viewer_pane_g

0xbfed,	// (0x0007908b) viewer_content_pane_ParamLimits

0xbfed,	// (0x0007908b) viewer_content_pane

0x556d,	// (0x0007260b) main_postcard_pane_g1_ParamLimits

0x556d,	// (0x0007260b) main_postcard_pane_g1

0x5581,	// (0x0007261f) main_postcard_pane_g2_ParamLimits

0x5581,	// (0x0007261f) main_postcard_pane_g2

0x5595,	// (0x00072633) main_postcard_pane_g3_ParamLimits

0x5595,	// (0x00072633) main_postcard_pane_g3

0x0005,

0xf433,	// (0x0007c4d1) main_postcard_pane_g_ParamLimits

0xf433,	// (0x0007c4d1) main_postcard_pane_g

0x55a8,	// (0x00072646) main_postcard_pane_g4

0x0dda,	// (0x0006de78) smil_status_volume_pane_g2

0x55e3,	// (0x00072681) postcard_pane_ParamLimits

0x55e3,	// (0x00072681) postcard_pane

0xbffb,	// (0x00079099) postcard_pane_g1_ParamLimits

0xbffb,	// (0x00079099) postcard_pane_g1

0x5623,	// (0x000726c1) postcard_pane_g2_ParamLimits

0x5623,	// (0x000726c1) postcard_pane_g2

0x562f,	// (0x000726cd) postcard_pane_g3_ParamLimits

0x562f,	// (0x000726cd) postcard_pane_g3

0xc009,	// (0x000790a7) postcard_pane_g4_ParamLimits

0xc009,	// (0x000790a7) postcard_pane_g4

0x563b,	// (0x000726d9) postcard_pane_g5_ParamLimits

0x563b,	// (0x000726d9) postcard_pane_g5

0x5650,	// (0x000726ee) postcard_pane_g6_ParamLimits

0x5650,	// (0x000726ee) postcard_pane_g6

0xbffb,	// (0x00079099) postcard_pane_g7_ParamLimits

0xbffb,	// (0x00079099) postcard_pane_g7

0x0006,

0xf440,	// (0x0007c4de) postcard_pane_g_ParamLimits

0xf440,	// (0x0007c4de) postcard_pane_g

0x5664,	// (0x00072702) main_mp2_pane_g1_ParamLimits

0x5664,	// (0x00072702) main_mp2_pane_g1

0x5670,	// (0x0007270e) main_mp2_pane_g2_ParamLimits

0x5670,	// (0x0007270e) main_mp2_pane_g2

0x567c,	// (0x0007271a) main_mp2_pane_g3_ParamLimits

0x567c,	// (0x0007271a) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0007c4ed) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0007c4ed) main_mp2_pane_g

0x5688,	// (0x00072726) main_mp2_pane_t1_ParamLimits

0x5688,	// (0x00072726) main_mp2_pane_t1

0x569d,	// (0x0007273b) main_mp2_pane_t2_ParamLimits

0x569d,	// (0x0007273b) main_mp2_pane_t2

0x56af,	// (0x0007274d) main_mp2_pane_t3_ParamLimits

0x56af,	// (0x0007274d) main_mp2_pane_t3

0x0002,

0xf456,	// (0x0007c4f4) main_mp2_pane_t_ParamLimits

0xf456,	// (0x0007c4f4) main_mp2_pane_t

0xc017,	// (0x000790b5) pec_content_pane_ParamLimits

0xc017,	// (0x000790b5) pec_content_pane

0xb530,	// (0x000785ce) scroll_pane_cp015

0xc029,	// (0x000790c7) pec_attribute_pane_ParamLimits

0xc029,	// (0x000790c7) pec_attribute_pane

0x56c1,	// (0x0007275f) pec_content_pane_g1_ParamLimits

0x56c1,	// (0x0007275f) pec_content_pane_g1

0xc039,	// (0x000790d7) pec_content_pane_t1_ParamLimits

0xc039,	// (0x000790d7) pec_content_pane_t1

0xc04b,	// (0x000790e9) pec_content_pane_t2_ParamLimits

0xc04b,	// (0x000790e9) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0007c4fb) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0007c4fb) pec_content_pane_t

0x56cd,	// (0x0007276b) list_single_graphic_pane_cp01_ParamLimits

0x56cd,	// (0x0007276b) list_single_graphic_pane_cp01

0x336a,	// (0x00070408) bg_popup_sub_pane_cp04

0xc05d,	// (0x000790fb) popup_mup_playback_window_g1

0xc069,	// (0x00079107) popup_mup_playback_window_t1

0xc07e,	// (0x0007911c) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0007c500) popup_mup_playback_window_t

0xc0b5,	// (0x00079153) main_image_pane_g1_ParamLimits

0xc0b5,	// (0x00079153) main_image_pane_g1

0xc0f8,	// (0x00079196) scroll_pane_cp018_ParamLimits

0xc0f8,	// (0x00079196) scroll_pane_cp018

0xc110,	// (0x000791ae) scroll_pane_cp016_ParamLimits

0xc110,	// (0x000791ae) scroll_pane_cp016

0x5798,	// (0x00072836) smil2_image_pane_ParamLimits

0x5798,	// (0x00072836) smil2_image_pane

0x57c0,	// (0x0007285e) smil2_root_pane_ParamLimits

0x57c0,	// (0x0007285e) smil2_root_pane

0x57f8,	// (0x00072896) smil2_text_pane_ParamLimits

0x57f8,	// (0x00072896) smil2_text_pane

0x310f,	// (0x000701ad) bg_list_pane_cp06

0xc144,	// (0x000791e2) grid_radio_pane

0x310f,	// (0x000701ad) bg_popup_window_pane_cp06

0xc14c,	// (0x000791ea) main_fmradio_pane_t1

0x0c86,	// (0x0006dd24) heading_pane_cp04

0xc15a,	// (0x000791f8) main_fmradio_pane_t2

0x0c8e,	// (0x0006dd2c) popup_cale_lunar_info_window_g1

0xc168,	// (0x00079206) main_fmradio_pane_t3

0x0c96,	// (0x0006dd34) popup_cale_lunar_info_window_g2

0xc176,	// (0x00079214) main_fmradio_pane_t4

0x0001,

0xc184,	// (0x00079222) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0007c5f3) popup_cale_lunar_info_window_g

0xf477,	// (0x0007c515) main_fmradio_pane_t

0xc192,	// (0x00079230) wait_bar_pane_cp03

0xc19a,	// (0x00079238) cell_fmradio_pane_ParamLimits

0xc19a,	// (0x00079238) cell_fmradio_pane

0xbffb,	// (0x00079099) cell_fmradio_pane_g1_ParamLimits

0xbffb,	// (0x00079099) cell_fmradio_pane_g1

0x310f,	// (0x000701ad) grid_highlight_pane_cp011

0xc1ad,	// (0x0007924b) poc_content_pane_ParamLimits

0xc1ad,	// (0x0007924b) poc_content_pane

0xc1c0,	// (0x0007925e) scroll_pane_cp019

0x586c,	// (0x0007290a) popup_call_poc_act_window_ParamLimits

0x586c,	// (0x0007290a) popup_call_poc_act_window

0x588c,	// (0x0007292a) popup_call_poc_inact_window_ParamLimits

0x588c,	// (0x0007292a) popup_call_poc_inact_window

0xf519,	// (0x0007c5b7) bg_popup_call_poc_act_pane_g

0x0c46,	// (0x0006dce4) bg_popup_call_poc_inact_pane_g1

0x0c4e,	// (0x0006dcec) bg_popup_call_poc_inact_pane_g2

0xc1c8,	// (0x00079266) popup_call_poc_act_window_g2

0x0c56,	// (0x0006dcf4) bg_popup_call_poc_inact_pane_g3

0x0bd6,	// (0x0006dc74) bg_popup_call_poc_inact_pane_g4

0x0c5e,	// (0x0006dcfc) bg_popup_call_poc_inact_pane_g5

0xc1d0,	// (0x0007926e) popup_call_poc_act_window_t1_ParamLimits

0xc1d0,	// (0x0007926e) popup_call_poc_act_window_t1

0xc1f8,	// (0x00079296) popup_call_poc_act_window_t2_ParamLimits

0xc1f8,	// (0x00079296) popup_call_poc_act_window_t2

0xc220,	// (0x000792be) popup_call_poc_act_window_t3_ParamLimits

0xc220,	// (0x000792be) popup_call_poc_act_window_t3

0xc248,	// (0x000792e6) popup_call_poc_act_window_t4_ParamLimits

0xc248,	// (0x000792e6) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0007c520) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0007c520) popup_call_poc_act_window_t

0x0c66,	// (0x0006dd04) bg_popup_call_poc_inact_pane_g6

0x0c6e,	// (0x0006dd0c) bg_popup_call_poc_inact_pane_g7

0x0c76,	// (0x0006dd14) bg_popup_call_poc_inact_pane_g8

0xc25a,	// (0x000792f8) popup_call_poc_inact_window_g2

0x0c7e,	// (0x0006dd1c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0007c5ce) bg_popup_call_poc_inact_pane_g

0xc262,	// (0x00079300) popup_call_poc_inact_window_t1_ParamLimits

0xc262,	// (0x00079300) popup_call_poc_inact_window_t1

0xc277,	// (0x00079315) popup_call_poc_inact_window_t2_ParamLimits

0xc277,	// (0x00079315) popup_call_poc_inact_window_t2

0xc28c,	// (0x0007932a) popup_call_poc_inact_window_t3_ParamLimits

0xc28c,	// (0x0007932a) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x0007c529) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x0007c529) popup_call_poc_inact_window_t

0x0d52,	// (0x0006ddf0) context_pane_ParamLimits

0x5fcf,	// (0x0007306d) signal_pane_ParamLimits

0xb30c,	// (0x000783aa) main_call2_pane

0xcaf8,	// (0x00079b96) popup_phob_thumbnail2_window_ParamLimits

0xcaf8,	// (0x00079b96) popup_phob_thumbnail2_window

0xbfab,	// (0x00079049) aid_hotspot_pointer_arrow_pane

0xbfb3,	// (0x00079051) aid_hotspot_pointer_hand_pane

0x5b86,	// (0x00072c24) phob_pre_status_pane_g5

0xb23c,	// (0x000782da) cams_zoom_pane_ParamLimits

0xb23c,	// (0x000782da) image_vga_pane_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g1_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g2_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g3_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g4_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g5_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g6_ParamLimits

0x340f,	// (0x000704ad) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0007c23d) main_camera_pane_g_ParamLimits

0xb356,	// (0x000783f4) main_camera_pane_t1_ParamLimits

0xb356,	// (0x000783f4) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0007c24e) main_camera_pane_t_ParamLimits

0x336a,	// (0x00070408) bg_popup_preview_window_pane_cp01_ParamLimits

0x336a,	// (0x00070408) bg_popup_preview_window_pane_cp01

0xc2a1,	// (0x0007933f) popup_phob_thumbnail2_window_g1_ParamLimits

0xc2a1,	// (0x0007933f) popup_phob_thumbnail2_window_g1

0x310f,	// (0x000701ad) call2_cli_visual_pane

0x58b8,	// (0x00072956) popup_call2_audio_conf_window_ParamLimits

0x58b8,	// (0x00072956) popup_call2_audio_conf_window

0x58d6,	// (0x00072974) popup_call2_audio_first_window_ParamLimits

0x58d6,	// (0x00072974) popup_call2_audio_first_window

0x594c,	// (0x000729ea) popup_call2_audio_in_window_ParamLimits

0x594c,	// (0x000729ea) popup_call2_audio_in_window

0x5980,	// (0x00072a1e) popup_call2_audio_out_window_ParamLimits

0x5980,	// (0x00072a1e) popup_call2_audio_out_window

0x59d2,	// (0x00072a70) popup_call2_audio_second_window_ParamLimits

0x59d2,	// (0x00072a70) popup_call2_audio_second_window

0x5a24,	// (0x00072ac2) popup_call2_audio_wait_window_ParamLimits

0x5a24,	// (0x00072ac2) popup_call2_audio_wait_window

0x310f,	// (0x000701ad) bg_popup_call2_act_pane_cp03

0x334c,	// (0x000703ea) list_conf_pane_cp

0xc2ad,	// (0x0007934b) popup_call2_audio_conf_window_t1

0xbb4a,	// (0x00078be8) list_single_graphic_popup_conf2_pane_ParamLimits

0xbb4a,	// (0x00078be8) list_single_graphic_popup_conf2_pane

0xbb5d,	// (0x00078bfb) list_highlight_pane_cp04

0xc2bb,	// (0x00079359) list_single_graphic_popup_conf2_pane_g1

0xbb6e,	// (0x00078c0c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0007c530) list_single_graphic_popup_conf2_pane_g

0xc2c3,	// (0x00079361) list_single_graphic_popup_conf2_pane_t1

0xc2d1,	// (0x0007936f) bg_popup_call2_act_pane_cp01_ParamLimits

0xc2d1,	// (0x0007936f) bg_popup_call2_act_pane_cp01

0xc35b,	// (0x000793f9) call_type_pane_cp05_ParamLimits

0xc35b,	// (0x000793f9) call_type_pane_cp05

0xc3af,	// (0x0007944d) popup_call2_audio_second_window_g1_ParamLimits

0xc3af,	// (0x0007944d) popup_call2_audio_second_window_g1

0xc403,	// (0x000794a1) popup_call2_audio_second_window_g2_ParamLimits

0xc403,	// (0x000794a1) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x0007c535) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x0007c535) popup_call2_audio_second_window_g

0xc468,	// (0x00079506) popup_call2_audio_second_window_t1_ParamLimits

0xc468,	// (0x00079506) popup_call2_audio_second_window_t1

0xc523,	// (0x000795c1) popup_call2_audio_second_window_t2_ParamLimits

0xc523,	// (0x000795c1) popup_call2_audio_second_window_t2

0xc576,	// (0x00079614) popup_call2_audio_second_window_t3_ParamLimits

0xc576,	// (0x00079614) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0007c53c) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0007c53c) popup_call2_audio_second_window_t

0x310f,	// (0x000701ad) bg_popup_call2_in_pane_cp02

0x3119,	// (0x000701b7) call_type_pane_cp04

0x5a5c,	// (0x00072afa) popup_call2_audio_wait_window_g1

0x5a64,	// (0x00072b02) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x0007c545) popup_call2_audio_wait_window_g

0x3131,	// (0x000701cf) popup_call2_audio_wait_window_t3

0xc669,	// (0x00079707) bg_popup_call2_act_pane_ParamLimits

0xc669,	// (0x00079707) bg_popup_call2_act_pane

0xc729,	// (0x000797c7) call_type_pane_cp03_ParamLimits

0xc729,	// (0x000797c7) call_type_pane_cp03

0xc78d,	// (0x0007982b) popup_call2_audio_first_window_g1_ParamLimits

0xc78d,	// (0x0007982b) popup_call2_audio_first_window_g1

0xc7fd,	// (0x0007989b) popup_call2_audio_first_window_g2_ParamLimits

0xc7fd,	// (0x0007989b) popup_call2_audio_first_window_g2

0xc861,	// (0x000798ff) popup_call2_audio_first_window_g3_ParamLimits

0xc861,	// (0x000798ff) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x0007c54a) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x0007c54a) popup_call2_audio_first_window_g

0xc8e9,	// (0x00079987) popup_call2_audio_first_window_t1_ParamLimits

0xc8e9,	// (0x00079987) popup_call2_audio_first_window_t1

0xc9ec,	// (0x00079a8a) popup_call2_audio_first_window_t4_ParamLimits

0xc9ec,	// (0x00079a8a) popup_call2_audio_first_window_t4

0x0641,	// (0x0006d6df) popup_call2_audio_first_window_t5_ParamLimits

0x0641,	// (0x0006d6df) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x0007c555) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x0007c555) popup_call2_audio_first_window_t

0x3362,	// (0x00070400) bg_popup_call2_act_pane_g1

0x0c9e,	// (0x0006dd3c) popup_cale_lunar_info_window_t1

0x0cac,	// (0x0006dd4a) popup_cale_lunar_info_window_t2

0x0cba,	// (0x0006dd58) popup_cale_lunar_info_window_t3

0x310f,	// (0x000701ad) bg_popup_call2_bubble_pane

0x0742,	// (0x0006d7e0) bg_popup_call2_in_pane_cp01_ParamLimits

0x0742,	// (0x0006d7e0) bg_popup_call2_in_pane_cp01

0x2dc7,	// (0x0006fe65) call_type_pane_cp02

0x5a6c,	// (0x00072b0a) popup_call2_audio_out_window_g1_ParamLimits

0x5a6c,	// (0x00072b0a) popup_call2_audio_out_window_g1

0x078a,	// (0x0006d828) popup_call2_audio_out_window_g2_ParamLimits

0x078a,	// (0x0006d828) popup_call2_audio_out_window_g2

0x5a98,	// (0x00072b36) popup_call2_audio_out_window_g3_ParamLimits

0x5a98,	// (0x00072b36) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x0007c55e) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x0007c55e) popup_call2_audio_out_window_g

0x07c1,	// (0x0006d85f) popup_call2_audio_out_window_t1_ParamLimits

0x07c1,	// (0x0006d85f) popup_call2_audio_out_window_t1

0x0820,	// (0x0006d8be) popup_call2_audio_out_window_t2_ParamLimits

0x0820,	// (0x0006d8be) popup_call2_audio_out_window_t2

0x0874,	// (0x0006d912) popup_call2_audio_out_window_t3_ParamLimits

0x0874,	// (0x0006d912) popup_call2_audio_out_window_t3

0x088a,	// (0x0006d928) popup_call2_audio_out_window_t4_ParamLimits

0x088a,	// (0x0006d928) popup_call2_audio_out_window_t4

0x08a0,	// (0x0006d93e) popup_call2_audio_out_window_t5_ParamLimits

0x08a0,	// (0x0006d93e) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x0007c567) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x0007c567) popup_call2_audio_out_window_t

0x0904,	// (0x0006d9a2) bg_popup_call2_in_pane_ParamLimits

0x0904,	// (0x0006d9a2) bg_popup_call2_in_pane

0x0960,	// (0x0006d9fe) popup_call2_audio_in_window_g1_ParamLimits

0x0960,	// (0x0006d9fe) popup_call2_audio_in_window_g1

0x0998,	// (0x0006da36) popup_call2_audio_in_window_g2_ParamLimits

0x0998,	// (0x0006da36) popup_call2_audio_in_window_g2

0x09d0,	// (0x0006da6e) popup_call2_audio_in_window_g3_ParamLimits

0x09d0,	// (0x0006da6e) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x0007c574) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x0007c574) popup_call2_audio_in_window_g

0x0a28,	// (0x0006dac6) popup_call2_audio_in_window_t1_ParamLimits

0x0a28,	// (0x0006dac6) popup_call2_audio_in_window_t1

0x0aa8,	// (0x0006db46) popup_call2_audio_in_window_t2_ParamLimits

0x0aa8,	// (0x0006db46) popup_call2_audio_in_window_t2

0x0b28,	// (0x0006dbc6) popup_call2_audio_in_window_t3_ParamLimits

0x0b28,	// (0x0006dbc6) popup_call2_audio_in_window_t3

0x0b42,	// (0x0006dbe0) popup_call2_audio_in_window_t4_ParamLimits

0x0b42,	// (0x0006dbe0) popup_call2_audio_in_window_t4

0x0b54,	// (0x0006dbf2) popup_call2_audio_in_window_t5_ParamLimits

0x0b54,	// (0x0006dbf2) popup_call2_audio_in_window_t5

0x0b69,	// (0x0006dc07) popup_call2_audio_in_window_t6_ParamLimits

0x0b69,	// (0x0006dc07) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x0007c57d) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x0007c57d) popup_call2_audio_in_window_t

0x3362,	// (0x00070400) bg_popup_call2_in_pane_g1

0x0cc8,	// (0x0006dd66) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0007c5f8) popup_cale_lunar_info_window_t

0x336a,	// (0x00070408) bg_popup_call2_rect_pane_ParamLimits

0x336a,	// (0x00070408) bg_popup_call2_rect_pane

0x310f,	// (0x000701ad) call2_cli_visual_graphic_pane

0x310f,	// (0x000701ad) call2_cli_visual_text_pane

0xcb1f,	// (0x00079bbd) smil_status_volume_pane_g3

0x0002,

0x3382,	// (0x00070420) call2_cli_visual_graphic_pane_g1

0x3382,	// (0x00070420) call2_cli_visual_graphic_pane_g2

0x3382,	// (0x00070420) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x0007c58a) call2_cli_visual_graphic_pane_g

0x0b7e,	// (0x0006dc1c) bg_popup_call2_rect_pane_g1

0x37fb,	// (0x00070899) bg_popup_call2_rect_pane_g2

0x0b86,	// (0x0006dc24) bg_popup_call2_rect_pane_g3

0x0b8e,	// (0x0006dc2c) bg_popup_call2_rect_pane_g4

0x0b96,	// (0x0006dc34) bg_popup_call2_rect_pane_g5

0x0b9e,	// (0x0006dc3c) bg_popup_call2_rect_pane_g6

0x0ba6,	// (0x0006dc44) bg_popup_call2_rect_pane_g7

0x0bae,	// (0x0006dc4c) bg_popup_call2_rect_pane_g8

0x0bb6,	// (0x0006dc54) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x0007c591) bg_popup_call2_rect_pane_g

0x0bbe,	// (0x0006dc5c) bg_popup_call2_bubble_pane_g1

0x0bc6,	// (0x0006dc64) bg_popup_call2_bubble_pane_g2

0x0bce,	// (0x0006dc6c) bg_popup_call2_bubble_pane_g3

0x0bd6,	// (0x0006dc74) bg_popup_call2_bubble_pane_g4

0x0bde,	// (0x0006dc7c) bg_popup_call2_bubble_pane_g5

0x0be6,	// (0x0006dc84) bg_popup_call2_bubble_pane_g6

0x0bee,	// (0x0006dc8c) bg_popup_call2_bubble_pane_g7

0x0bf6,	// (0x0006dc94) bg_popup_call2_bubble_pane_g8

0x0bfe,	// (0x0006dc9c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x0007c5a4) bg_popup_call2_bubble_pane_g

0x3889,	// (0x00070927) aid_cale_week_size_cell_pane

0x3f62,	// (0x00071000) aid_cams_cif_uncrop_pane_ParamLimits

0x3f62,	// (0x00071000) aid_cams_cif_uncrop_pane

0x40b8,	// (0x00071156) aid_cams_size_cell_ParamLimits

0x40b8,	// (0x00071156) aid_cams_size_cell

0x40cc,	// (0x0007116a) grid_cams_pane_ParamLimits

0x40e1,	// (0x0007117f) linegrid_cams_pane_ParamLimits

0x41ab,	// (0x00071249) call_video_pane_t1

0x41c5,	// (0x00071263) call_video_pane_t2

0x0001,

0xf1fc,	// (0x0007c29a) call_video_pane_t

0x454a,	// (0x000715e8) aid_cale_month_size_cell_pane_ParamLimits

0x454a,	// (0x000715e8) aid_cale_month_size_cell_pane

0xf59e,	// (0x0007c63c) smil_status_volume_pane_g

0xcb2c,	// (0x00079bca) volume_smil_pane_ParamLimits

0xb1f3,	// (0x00078291) aid_popup2_width_pane

0x3753,	// (0x000707f1) cell_qdial_pane_g4_ParamLimits

0x3753,	// (0x000707f1) cell_qdial_pane_g4

0x5201,	// (0x0007229f) aid_blid_cardinal_pane_ParamLimits

0x520d,	// (0x000722ab) aid_blid_destination_pane_ParamLimits

0x520d,	// (0x000722ab) aid_blid_destination_pane

0x336a,	// (0x00070408) bg_popup_call_poc_act_pane_ParamLimits

0x336a,	// (0x00070408) bg_popup_call_poc_act_pane

0x336a,	// (0x00070408) bg_popup_call_poc_inact_pane_ParamLimits

0x336a,	// (0x00070408) bg_popup_call_poc_inact_pane

0x0c06,	// (0x0006dca4) bg_popup_call_poc_act_pane_g1

0x0c0e,	// (0x0006dcac) bg_popup_call_poc_act_pane_g2

0x0c16,	// (0x0006dcb4) bg_popup_call_poc_act_pane_g3

0x0bd6,	// (0x0006dc74) bg_popup_call_poc_act_pane_g4

0x0bde,	// (0x0006dc7c) bg_popup_call_poc_act_pane_g5

0x0c1e,	// (0x0006dcbc) bg_popup_call_poc_act_pane_g6

0x0bee,	// (0x0006dc8c) bg_popup_call_poc_act_pane_g7

0x0c26,	// (0x0006dcc4) bg_popup_call_poc_act_pane_g8

0x310f,	// (0x000701ad) main_usb_pane

0xcad7,	// (0x00079b75) popup_cale_lunar_info_window

0x440a,	// (0x000714a8) im_reading_pane_t1_ParamLimits

0xb479,	// (0x00078517) list_im_pane_ParamLimits

0xb48a,	// (0x00078528) scroll_pane_cp07_ParamLimits

0x310f,	// (0x000701ad) grid_highlight_pane_cp012

0x336a,	// (0x00070408) mup_scale_pane_ParamLimits

0xbffb,	// (0x00079099) main_usb_pane_g1_ParamLimits

0xbffb,	// (0x00079099) main_usb_pane_g1

0x5ae6,	// (0x00072b84) main_usb_pane_g2_ParamLimits

0x5ae6,	// (0x00072b84) main_usb_pane_g2

0x0001,

0xf543,	// (0x0007c5e1) main_usb_pane_g_ParamLimits

0xf543,	// (0x0007c5e1) main_usb_pane_g

0x5afa,	// (0x00072b98) main_usb_pane_t1_ParamLimits

0x5afa,	// (0x00072b98) main_usb_pane_t1

0x5b0c,	// (0x00072baa) main_usb_pane_t2_ParamLimits

0x5b0c,	// (0x00072baa) main_usb_pane_t2

0x5b1e,	// (0x00072bbc) main_usb_pane_t3_ParamLimits

0x5b1e,	// (0x00072bbc) main_usb_pane_t3

0x5b30,	// (0x00072bce) main_usb_pane_t4_ParamLimits

0x5b30,	// (0x00072bce) main_usb_pane_t4

0x5b42,	// (0x00072be0) main_usb_pane_t5_ParamLimits

0x5b42,	// (0x00072be0) main_usb_pane_t5

0x5b54,	// (0x00072bf2) main_usb_pane_t6_ParamLimits

0x5b54,	// (0x00072bf2) main_usb_pane_t6

0x0005,

0xf548,	// (0x0007c5e6) main_usb_pane_t_ParamLimits

0xbc8f,	// (0x00078d2d) aid_text_placing

0x51ad,	// (0x0007224b) main_location2_pane_t1_ParamLimits

0x51c3,	// (0x00072261) main_location2_pane_t2_ParamLimits

0x51d9,	// (0x00072277) main_location2_pane_t3_ParamLimits

0x51ef,	// (0x0007228d) main_location2_pane_t4_ParamLimits

0x51ef,	// (0x0007228d) main_location2_pane_t4

0xf34f,	// (0x0007c3ed) main_location2_pane_t_ParamLimits

0x33ba,	// (0x00070458) find_pinb_pane_g2_ParamLimits

0x33ba,	// (0x00070458) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x0007c152) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x0007c152) find_pinb_pane_g

0x33c6,	// (0x00070464) find_pinb_pane_t1_ParamLimits

0x33d8,	// (0x00070476) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x0007c157) find_pinb_pane_t_ParamLimits

0x310f,	// (0x000701ad) main_call3_pane

0x4945,	// (0x000719e3) cale_month_day_heading_pane_t1_ParamLimits

0x49cb,	// (0x00071a69) cale_month_day_heading_pane_t2_ParamLimits

0x4a5c,	// (0x00071afa) cale_month_day_heading_pane_t3_ParamLimits

0x4aed,	// (0x00071b8b) cale_month_day_heading_pane_t4_ParamLimits

0x4b7e,	// (0x00071c1c) cale_month_day_heading_pane_t5_ParamLimits

0x4c0f,	// (0x00071cad) cale_month_day_heading_pane_t6_ParamLimits

0x4ca0,	// (0x00071d3e) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0007c2d2) cale_month_day_heading_pane_t_ParamLimits

0x4efc,	// (0x00071f9a) smil_status_volume_pane

0x55ff,	// (0x0007269d) postcard_address_pane_ParamLimits

0x55ff,	// (0x0007269d) postcard_address_pane

0x5611,	// (0x000726af) postcard_message_pane_ParamLimits

0x5611,	// (0x000726af) postcard_message_pane

0x5ac4,	// (0x00072b62) call2_cli_visual_pane_t1_ParamLimits

0x5ac4,	// (0x00072b62) call2_cli_visual_pane_t1

0x0e05,	// (0x0006dea3) postcard_message_pane_t1_ParamLimits

0x0e05,	// (0x0006dea3) postcard_message_pane_t1

0x0ded,	// (0x0006de8b) postcard_address_pane_t1_ParamLimits

0x0ded,	// (0x0006de8b) postcard_address_pane_t1

0x617b,	// (0x00073219) popup_call3_audio_in_window_ParamLimits

0x617b,	// (0x00073219) popup_call3_audio_in_window

0x600a,	// (0x000730a8) bg_popup_call3_in_pane_ParamLimits

0x600a,	// (0x000730a8) bg_popup_call3_in_pane

0x607c,	// (0x0007311a) popup_call3_audio_in_window_g1_ParamLimits

0x607c,	// (0x0007311a) popup_call3_audio_in_window_g1

0x609c,	// (0x0007313a) popup_call3_audio_in_window_g2_ParamLimits

0x609c,	// (0x0007313a) popup_call3_audio_in_window_g2

0x60bc,	// (0x0007315a) popup_call3_audio_in_window_g3_ParamLimits

0x60bc,	// (0x0007315a) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x0007c643) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x0007c643) popup_call3_audio_in_window_g

0x60ed,	// (0x0007318b) popup_call3_audio_in_window_t1_ParamLimits

0x60ed,	// (0x0007318b) popup_call3_audio_in_window_t1

0x612b,	// (0x000731c9) popup_call3_audio_in_window_t2_ParamLimits

0x612b,	// (0x000731c9) popup_call3_audio_in_window_t2

0x6169,	// (0x00073207) popup_call3_audio_in_window_t3_ParamLimits

0x6169,	// (0x00073207) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0007c64c) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0007c64c) popup_call3_audio_in_window_t

0xb30c,	// (0x000783aa) bg_popup_call3_rect_pane

0x0b7e,	// (0x0006dc1c) bg_popup_call3_rect_pane_g1

0x37fb,	// (0x00070899) bg_popup_call3_rect_pane_g2

0x0b86,	// (0x0006dc24) bg_popup_call3_rect_pane_g3

0x0b8e,	// (0x0006dc2c) bg_popup_call3_rect_pane_g4

0x0b96,	// (0x0006dc34) bg_popup_call3_rect_pane_g5

0x0b9e,	// (0x0006dc3c) bg_popup_call3_rect_pane_g6

0x0ba6,	// (0x0006dc44) bg_popup_call3_rect_pane_g7

0x2aaf,	// (0x0006fb4d) mup_visualizer_osc_pane

0x2aaf,	// (0x0006fb4d) mup_visualizer_spec_pane

0x603a,	// (0x000730d8) call3_video_qcif_pane_ParamLimits

0x603a,	// (0x000730d8) call3_video_qcif_pane

0x604b,	// (0x000730e9) call3_video_qcif_uncrop_pane_ParamLimits

0x604b,	// (0x000730e9) call3_video_qcif_uncrop_pane

0x6057,	// (0x000730f5) call3_video_subqcif_pane_ParamLimits

0x6057,	// (0x000730f5) call3_video_subqcif_pane

0x606b,	// (0x00073109) call3_video_subqcif_uncrop_pane_ParamLimits

0x606b,	// (0x00073109) call3_video_subqcif_uncrop_pane

0x60dc,	// (0x0007317a) popup_call3_audio_in_window_g4_ParamLimits

0x60dc,	// (0x0007317a) popup_call3_audio_in_window_g4

0x2aaf,	// (0x0006fb4d) mup_spec_half_pane

0x2aaf,	// (0x0006fb4d) mup_spec_half_pane_cp

0x2aaf,	// (0x0006fb4d) mup_osc_middle_pane

0xb384,	// (0x00078422) mup_visualizer_osc_pane_g1

0x0da0,	// (0x0006de3e) mup_spec_bar_pane_ParamLimits

0x0da0,	// (0x0006de3e) mup_spec_bar_pane

0xb384,	// (0x00078422) mup_spec_bar_pane_g1

0xb384,	// (0x00078422) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x0007c467) mup_spec_bar_pane_g

0x3889,	// (0x00070927) aid_cale_week_size_cell_pane_ParamLimits

0x38a3,	// (0x00070941) bg_cale_heading_pane_ParamLimits

0x38bb,	// (0x00070959) bg_cale_pane_cp01_ParamLimits

0x38d8,	// (0x00070976) cale_week_corner_pane_ParamLimits

0x38f7,	// (0x00070995) cale_week_day_heading_pane_ParamLimits

0x3914,	// (0x000709b2) cale_week_scroll_pane_g1_ParamLimits

0x3927,	// (0x000709c5) cale_week_scroll_pane_g2_ParamLimits

0x393f,	// (0x000709dd) cale_week_scroll_pane_g3_ParamLimits

0x3957,	// (0x000709f5) cale_week_scroll_pane_g4_ParamLimits

0x396f,	// (0x00070a0d) cale_week_scroll_pane_g5_ParamLimits

0x3987,	// (0x00070a25) cale_week_scroll_pane_g6_ParamLimits

0x399f,	// (0x00070a3d) cale_week_scroll_pane_g7_ParamLimits

0x39b7,	// (0x00070a55) cale_week_scroll_pane_g8_ParamLimits

0x39d3,	// (0x00070a71) cale_week_scroll_pane_g9_ParamLimits

0x39eb,	// (0x00070a89) cale_week_scroll_pane_g10_ParamLimits

0x3a03,	// (0x00070aa1) cale_week_scroll_pane_g11_ParamLimits

0x3a1b,	// (0x00070ab9) cale_week_scroll_pane_g12_ParamLimits

0x3a33,	// (0x00070ad1) cale_week_scroll_pane_g13_ParamLimits

0x3a4b,	// (0x00070ae9) cale_week_scroll_pane_g14_ParamLimits

0x3a63,	// (0x00070b01) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0007c1e3) cale_week_scroll_pane_g_ParamLimits

0x3a97,	// (0x00070b35) cale_week_time_pane_ParamLimits

0x3ab3,	// (0x00070b51) grid_cale_week_pane_ParamLimits

0x3ad1,	// (0x00070b6f) listscroll_cale_week_pane_t1

0x3ae3,	// (0x00070b81) scroll_pane_cp08_ParamLimits

0x459f,	// (0x0007163d) cale_month_corner_pane_ParamLimits

0xb6ba,	// (0x00078758) cale_month_pane_t1

0x48fb,	// (0x00071999) cale_month_week_pane_ParamLimits

0x501e,	// (0x000720bc) popup_call_status_window_g1_ParamLimits

0x5032,	// (0x000720d0) popup_call_status_window_g2_ParamLimits

0x5046,	// (0x000720e4) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x0007c374) popup_call_status_window_g_ParamLimits

0xba7b,	// (0x00078b19) aid_call2_pane

0x2108,	// (0x0006f1a6) msg_header_pane_g1

0x55ff,	// (0x0007269d) postcard_address2_pane_ParamLimits

0x55ff,	// (0x0007269d) postcard_address2_pane

0x5611,	// (0x000726af) postcard_message2_pane_ParamLimits

0x5611,	// (0x000726af) postcard_message2_pane

0x5fdd,	// (0x0007307b) message2_row_pane_ParamLimits

0x5fdd,	// (0x0007307b) message2_row_pane

0x5ff7,	// (0x00073095) address2_row_pane_ParamLimits

0x5ff7,	// (0x00073095) address2_row_pane

0x0d6d,	// (0x0006de0b) postcard_message2_row_pane_g1

0x0d75,	// (0x0006de13) postcard_message2_row_pane_t1

0x0d6d,	// (0x0006de0b) address2_row_pane_g1

0x0d75,	// (0x0006de13) address2_row_pane_t1

0x3f31,	// (0x00070fcf) aid_size_cell_vorec

0x310f,	// (0x000701ad) main_rss_pane

0x0d83,	// (0x0006de21) rss_list_single_pane_ParamLimits

0x0d83,	// (0x0006de21) rss_list_single_pane

0x0d91,	// (0x0006de2f) rss_list_single_pane_t1

0x0d91,	// (0x0006de2f) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x0007c637) rss_list_single_pane_t

0x310f,	// (0x000701ad) main_camera2_pane

0x310f,	// (0x000701ad) main_video2_pane

0xeb44,	// (0x0007bbe2) cams_zoom_pane_cp2_ParamLimits

0xeb44,	// (0x0007bbe2) cams_zoom_pane_cp2

0xeb44,	// (0x0007bbe2) image2_vga_pane_ParamLimits

0xeb44,	// (0x0007bbe2) image2_vga_pane

0xeb52,	// (0x0007bbf0) main_camera2_pane_g1_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g1

0xeb52,	// (0x0007bbf0) main_camera2_pane_g2_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g2

0xeb52,	// (0x0007bbf0) main_camera2_pane_g3_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g3

0xeb52,	// (0x0007bbf0) main_camera2_pane_g4_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g4

0xeb52,	// (0x0007bbf0) main_camera2_pane_g5_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g5

0xeb52,	// (0x0007bbf0) main_camera2_pane_g6_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g6

0xeb52,	// (0x0007bbf0) main_camera2_pane_g7_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g7

0xeb52,	// (0x0007bbf0) main_camera2_pane_g8_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x0007c653) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x0007c653) main_camera2_pane_g

0x619b,	// (0x00073239) main_camera2_pane_t1_ParamLimits

0x619b,	// (0x00073239) main_camera2_pane_t1

0x619b,	// (0x00073239) main_camera2_pane_t2_ParamLimits

0x619b,	// (0x00073239) main_camera2_pane_t2

0x619b,	// (0x00073239) main_camera2_pane_t3_ParamLimits

0x619b,	// (0x00073239) main_camera2_pane_t3

0x619b,	// (0x00073239) main_camera2_pane_t4_ParamLimits

0x619b,	// (0x00073239) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x0007c666) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x0007c666) main_camera2_pane_t

0x11a9,	// (0x0006e247) cams_zoom_pane_cp4_ParamLimits

0x11a9,	// (0x0006e247) cams_zoom_pane_cp4

0x0633,	// (0x0006d6d1) image2_cif_pane_ParamLimits

0x0633,	// (0x0006d6d1) image2_cif_pane

0xb23c,	// (0x000782da) image2_subqcif_pane_ParamLimits

0xb23c,	// (0x000782da) image2_subqcif_pane

0x61af,	// (0x0007324d) main_video2_pane_g1_ParamLimits

0x61af,	// (0x0007324d) main_video2_pane_g1

0x61af,	// (0x0007324d) main_video2_pane_g2_ParamLimits

0x61af,	// (0x0007324d) main_video2_pane_g2

0x61af,	// (0x0007324d) main_video2_pane_g3_ParamLimits

0x61af,	// (0x0007324d) main_video2_pane_g3

0x61af,	// (0x0007324d) main_video2_pane_g4_ParamLimits

0x61af,	// (0x0007324d) main_video2_pane_g4

0x61af,	// (0x0007324d) main_video2_pane_g5_ParamLimits

0x61af,	// (0x0007324d) main_video2_pane_g5

0x61af,	// (0x0007324d) main_video2_pane_g6_ParamLimits

0x61af,	// (0x0007324d) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x0007c675) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x0007c675) main_video2_pane_g

0x61bd,	// (0x0007325b) main_video2_pane_t1_ParamLimits

0x61bd,	// (0x0007325b) main_video2_pane_t1

0x61bd,	// (0x0007325b) main_video2_pane_t2_ParamLimits

0x61bd,	// (0x0007325b) main_video2_pane_t2

0x61bd,	// (0x0007325b) main_video2_pane_t3_ParamLimits

0x61bd,	// (0x0007325b) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x0007c682) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x0007c682) main_video2_pane_t

0x5be0,	// (0x00072c7e) call_muted_g2

0x0001,

0xf58b,	// (0x0007c629) call_muted_g

0x310f,	// (0x000701ad) main_mup2_pane

0x0e21,	// (0x0006debf) main_mup2_pane_g1_ParamLimits

0x0e21,	// (0x0006debf) main_mup2_pane_g1

0x0e21,	// (0x0006debf) main_mup2_pane_g2_ParamLimits

0x0e21,	// (0x0006debf) main_mup2_pane_g2

0xb384,	// (0x00078422) main_mup_pane_g13_cp1

0x2aaf,	// (0x0006fb4d) mup_volume_pane_cp1

0x0e21,	// (0x0006debf) main_mup2_pane_g4_ParamLimits

0x0e21,	// (0x0006debf) main_mup2_pane_g4

0x0e21,	// (0x0006debf) main_mup2_pane_g5_ParamLimits

0x0e21,	// (0x0006debf) main_mup2_pane_g5

0x0e21,	// (0x0006debf) main_mup2_pane_g6_ParamLimits

0x0e21,	// (0x0006debf) main_mup2_pane_g6

0x0e21,	// (0x0006debf) main_mup2_pane_g7_ParamLimits

0x0e21,	// (0x0006debf) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x0007c689) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x0007c689) main_mup2_pane_g

0x0e2f,	// (0x0006decd) main_mup2_pane_t1_ParamLimits

0x0e2f,	// (0x0006decd) main_mup2_pane_t1

0x0e2f,	// (0x0006decd) main_mup2_pane_t2_ParamLimits

0x0e2f,	// (0x0006decd) main_mup2_pane_t2

0x0e2f,	// (0x0006decd) main_mup2_pane_t3_ParamLimits

0x0e2f,	// (0x0006decd) main_mup2_pane_t3

0x0e2f,	// (0x0006decd) main_mup2_pane_t4_ParamLimits

0x0e2f,	// (0x0006decd) main_mup2_pane_t4

0x0e2f,	// (0x0006decd) main_mup2_pane_t5_ParamLimits

0x0e2f,	// (0x0006decd) main_mup2_pane_t5

0x0e2f,	// (0x0006decd) main_mup2_pane_t6_ParamLimits

0x0e2f,	// (0x0006decd) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x0007c698) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x0007c698) main_mup2_pane_t

0x0d3a,	// (0x0006ddd8) mup2_visualizer_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) mup2_visualizer_pane

0x0d3a,	// (0x0006ddd8) mup_progress_pane_cp_ParamLimits

0x0d3a,	// (0x0006ddd8) mup_progress_pane_cp

0x0e43,	// (0x0006dee1) mup_volume_pane_cp_ParamLimits

0x0e43,	// (0x0006dee1) mup_volume_pane_cp

0x340f,	// (0x000704ad) mup2_visualizer_pane_g1_ParamLimits

0x340f,	// (0x000704ad) mup2_visualizer_pane_g1

0x341d,	// (0x000704bb) mup2_visualizer_pane_g2_ParamLimits

0x341d,	// (0x000704bb) mup2_visualizer_pane_g2

0x341d,	// (0x000704bb) mup2_visualizer_pane_g3_ParamLimits

0x341d,	// (0x000704bb) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x0007c15c) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x0007c15c) mup2_visualizer_pane_g

0x5864,	// (0x00072902) aid_size_cell_fmradio

0x5d3c,	// (0x00072dda) aid_height_parent_landcape

0xb517,	// (0x000785b5) wml_content_pane_cp

0xb51f,	// (0x000785bd) wml_tabs_pane

0xb528,	// (0x000785c6) popup_wml_miniature_window

0xb530,	// (0x000785ce) scroll_pane_cp021

0xb544,	// (0x000785e2) wml_content_pane_comp8

0x310f,	// (0x000701ad) bg_popup_sub_pane_cp05

0x0e59,	// (0x0006def7) popup_wml_miniature_window_g1

0x0e61,	// (0x0006deff) wml_miniature_view_pane

0x61d1,	// (0x0007326f) aid_size_wml_view

0x61d9,	// (0x00073277) wml_miniature_view_pane_g1

0x61e2,	// (0x00073280) wml_miniature_view_pane_g2

0x61eb,	// (0x00073289) wml_miniature_view_pane_g3

0x61f3,	// (0x00073291) wml_miniature_view_pane_g4

0x61fb,	// (0x00073299) wml_miniature_view_pane_g5

0x6203,	// (0x000732a1) wml_miniature_view_pane_g6

0x620b,	// (0x000732a9) wml_miniature_view_pane_g7

0x6213,	// (0x000732b1) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x0007c6a5) wml_miniature_view_pane_g

0x0e69,	// (0x0006df07) background_graphic_ParamLimits

0x0e69,	// (0x0006df07) background_graphic

0x0e75,	// (0x0006df13) wml_tabs_2_pane

0x0e7e,	// (0x0006df1c) wml_tabs_3_pane_ParamLimits

0x0e7e,	// (0x0006df1c) wml_tabs_3_pane

0x0e90,	// (0x0006df2e) wml_tabs_4_pane_ParamLimits

0x0e90,	// (0x0006df2e) wml_tabs_4_pane

0x0ea6,	// (0x0006df44) wml_tabs_5_pane_ParamLimits

0x0ea6,	// (0x0006df44) wml_tabs_5_pane

0x0ec0,	// (0x0006df5e) wml_tabs_pane_g2_ParamLimits

0x0ec0,	// (0x0006df5e) wml_tabs_pane_g2

0x0ed5,	// (0x0006df73) wml_tabs_pane_g3_ParamLimits

0x0ed5,	// (0x0006df73) wml_tabs_pane_g3

0x0eea,	// (0x0006df88) wml_tabs_2_active_pane_ParamLimits

0x0eea,	// (0x0006df88) wml_tabs_2_active_pane

0x0eea,	// (0x0006df88) wml_tabs_2_passive_pane_ParamLimits

0x0eea,	// (0x0006df88) wml_tabs_2_passive_pane

0x621b,	// (0x000732b9) wml_tabs_3_active_pane_cp_ParamLimits

0x621b,	// (0x000732b9) wml_tabs_3_active_pane_cp

0x622c,	// (0x000732ca) wml_tabs_3_passive_pane_ParamLimits

0x622c,	// (0x000732ca) wml_tabs_3_passive_pane

0x623d,	// (0x000732db) wml_tabs_3_passive_pane_cp_ParamLimits

0x623d,	// (0x000732db) wml_tabs_3_passive_pane_cp

0x624e,	// (0x000732ec) tabs_4_active_pane

0x6256,	// (0x000732f4) tabs_4_passive_pane

0x625e,	// (0x000732fc) tabs_4_passive_pane_cp

0x6266,	// (0x00073304) tabs_4_passive_pane_cp2

0x5ade,	// (0x00072b7c) aid_height_text

0x0d3a,	// (0x0006ddd8) mup_volume_cont_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) mup_volume_cont_pane

0x338c,	// (0x0007042a) aid_size_cell_pinb

0x2aaf,	// (0x0006fb4d) aid_size_list_pinb

0x0d3a,	// (0x0006ddd8) mup2_volume_cont_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) mup2_volume_cont_pane

0xcb55,	// (0x00079bf3) mup2_volume_cont_pane_g1_ParamLimits

0xcb55,	// (0x00079bf3) mup2_volume_cont_pane_g1

0x2ab9,	// (0x0006fb57) aid_size_cell_touch_ParamLimits

0x2ab9,	// (0x0006fb57) aid_size_cell_touch

0x2c5e,	// (0x0006fcfc) touch_pane_ParamLimits

0x2c5e,	// (0x0006fcfc) touch_pane

0x2aaf,	// (0x0006fb4d) main_rss2_pane

0x0f01,	// (0x0006df9f) listscroll_rss2_pane

0x0f0a,	// (0x0006dfa8) rss2_navigation_pane

0x0f12,	// (0x0006dfb0) list_rss2_pane

0xbb15,	// (0x00078bb3) scroll_pane_cp22

0x0f1a,	// (0x0006dfb8) rss2_navigation_pane_g1

0x0f23,	// (0x0006dfc1) rss2_navigation_pane_g2

0x0f2b,	// (0x0006dfc9) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x0007c6b6) rss2_navigation_pane_g

0x0f33,	// (0x0006dfd1) rss2_navigation_pane_t1

0x626e,	// (0x0007330c) rss2_list_single_pane_ParamLimits

0x626e,	// (0x0007330c) rss2_list_single_pane

0x0f41,	// (0x0006dfdf) rss2_list_single_pane_t2

0x0f4f,	// (0x0006dfed) rss2_list_single_pane_t3_ParamLimits

0x0f4f,	// (0x0006dfed) rss2_list_single_pane_t3

0x0f6c,	// (0x0006e00a) rss2_list_single_pane_t4

0x4ee6,	// (0x00071f84) smil_status_pane_g1

0xb23c,	// (0x000782da) main_image2_pane_ParamLimits

0xb23c,	// (0x000782da) main_image2_pane

0xeb52,	// (0x0007bbf0) main_camera2_pane_g9_ParamLimits

0xeb52,	// (0x0007bbf0) main_camera2_pane_g9

0x619b,	// (0x00073239) main_camera2_pane_t5_ParamLimits

0x619b,	// (0x00073239) main_camera2_pane_t5

0xcb41,	// (0x00079bdf) main_camera2_pane_t6_ParamLimits

0xcb41,	// (0x00079bdf) main_camera2_pane_t6

0x6282,	// (0x00073320) main_image2_pane_g1_ParamLimits

0x6282,	// (0x00073320) main_image2_pane_g1

0x5826,	// (0x000728c4) smil2_video_pane_ParamLimits

0x5826,	// (0x000728c4) smil2_video_pane

0xb20b,	// (0x000782a9) aid_zoom_text_primary_cp

0xb234,	// (0x000782d2) popup_preview_fixed_window

0xb471,	// (0x0007850f) im_reading_pane_g1

0x618d,	// (0x0007322b) cams2_bc_adjust_pane_cp_ParamLimits

0x618d,	// (0x0007322b) cams2_bc_adjust_pane_cp

0x0d3a,	// (0x0006ddd8) cams2_bc_adjust_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) cams2_bc_adjust_pane

0xb384,	// (0x00078422) cams2_bc_adjust_pane_g1

0x2aaf,	// (0x0006fb4d) cams2_slider_pane

0xb384,	// (0x00078422) cams2_slider_pane_g1

0xb384,	// (0x00078422) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x0007c6bd) cams2_slider_pane_g

0x3479,	// (0x00070517) calc_display_pane_ParamLimits

0x3495,	// (0x00070533) calc_paper_pane_ParamLimits

0x34b6,	// (0x00070554) grid_calc_pane_ParamLimits

0xbadd,	// (0x00078b7b) popup_clock_digital_window_t1_ParamLimits

0xc0e1,	// (0x0007917f) main_image_pane_t1

0x345b,	// (0x000704f9) aid_size_cell_calc_ParamLimits

0x345b,	// (0x000704f9) aid_size_cell_calc

0x5d6c,	// (0x00072e0a) popup_blid_sat_info2_window_ParamLimits

0x5d6c,	// (0x00072e0a) popup_blid_sat_info2_window

0x0f7a,	// (0x0006e018) aid_size_cell_blid

0x0633,	// (0x0006d6d1) bg_popup_window_pane_cp07

0x0f97,	// (0x0006e035) grid_popup_blid_pane

0x0f9f,	// (0x0006e03d) heading_pane_cp05_ParamLimits

0x0f9f,	// (0x0006e03d) heading_pane_cp05

0x1067,	// (0x0006e105) cell_popup_blid_pane_ParamLimits

0x1067,	// (0x0006e105) cell_popup_blid_pane

0x1087,	// (0x0006e125) cell_popup_blid_pane_g1

0x108f,	// (0x0006e12d) cell_popup_blid_pane_t1

0x0d3a,	// (0x0006ddd8) mup2_indicator_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) mup2_indicator_pane

0x2aaf,	// (0x0006fb4d) mup2_visualizer_osc_pane

0x0e43,	// (0x0006dee1) mup2_visualizer_spec_pane_ParamLimits

0x0e43,	// (0x0006dee1) mup2_visualizer_spec_pane

0x2aaf,	// (0x0006fb4d) mup2_spec_half_pane

0x2aaf,	// (0x0006fb4d) mup2_spec_half_pane_cp

0x109d,	// (0x0006e13b) mup2_spec_bar_pane_ParamLimits

0x109d,	// (0x0006e13b) mup2_spec_bar_pane

0xb384,	// (0x00078422) mup2_spec_bar_pane_g1

0x10bc,	// (0x0006e15a) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x0007c6e3) mup2_spec_bar_pane_g

0x2aaf,	// (0x0006fb4d) mup2_osc_middle_pane

0xb384,	// (0x00078422) mup2_visualizer_osc_pane_g1

0x2cc6,	// (0x0006fd64) popup_number_entry_window_t1_ParamLimits

0x2cd9,	// (0x0006fd77) popup_number_entry_window_t2_ParamLimits

0x2ceb,	// (0x0006fd89) popup_number_entry_window_t3_ParamLimits

0x2cfd,	// (0x0006fd9b) popup_number_entry_window_t5_ParamLimits

0x2cfd,	// (0x0006fd9b) popup_number_entry_window_t5

0xf05f,	// (0x0007c0fd) popup_number_entry_window_t_ParamLimits

0x2d31,	// (0x0006fdcf) text_title_cp2_ParamLimits

0xbfbb,	// (0x00079059) aid_hotspot_pointer_text2_pane

0xbfe1,	// (0x0007907f) main_viewer_pane_g9_ParamLimits

0xbfe1,	// (0x0007907f) main_viewer_pane_g9

0xb6ba,	// (0x00078758) cale_month_pane_t1_ParamLimits

0xb70e,	// (0x000787ac) bg_cale_pane_ParamLimits

0xb726,	// (0x000787c4) list_cale_pane_ParamLimits

0xb737,	// (0x000787d5) listscroll_cale_day_pane_t1

0xb749,	// (0x000787e7) scroll_pane_cp09_ParamLimits

0x531d,	// (0x000723bb) main_mup_eq_pane_t1_ParamLimits

0x531d,	// (0x000723bb) main_mup_eq_pane_t1

0x5335,	// (0x000723d3) main_mup_eq_pane_t2_ParamLimits

0x5335,	// (0x000723d3) main_mup_eq_pane_t2

0x534b,	// (0x000723e9) main_mup_eq_pane_t3_ParamLimits

0x534b,	// (0x000723e9) main_mup_eq_pane_t3

0x5361,	// (0x000723ff) main_mup_eq_pane_t4_ParamLimits

0x5361,	// (0x000723ff) main_mup_eq_pane_t4

0x5377,	// (0x00072415) main_mup_eq_pane_t5_ParamLimits

0x5377,	// (0x00072415) main_mup_eq_pane_t5

0x538d,	// (0x0007242b) main_mup_eq_pane_t6_ParamLimits

0x538d,	// (0x0007242b) main_mup_eq_pane_t6

0x539f,	// (0x0007243d) main_mup_eq_pane_t7_ParamLimits

0x539f,	// (0x0007243d) main_mup_eq_pane_t7

0x53b1,	// (0x0007244f) main_mup_eq_pane_t8_ParamLimits

0x53b1,	// (0x0007244f) main_mup_eq_pane_t8

0x53c3,	// (0x00072461) main_mup_eq_pane_t9_ParamLimits

0x53c3,	// (0x00072461) main_mup_eq_pane_t9

0x53d9,	// (0x00072477) main_mup_eq_pane_t10_ParamLimits

0x53d9,	// (0x00072477) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x0007c473) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x0007c473) main_mup_eq_pane_t

0x546c,	// (0x0007250a) mup_equalizer_pane_cp5_ParamLimits

0x547e,	// (0x0007251c) mup_equalizer_pane_cp6_ParamLimits

0x5490,	// (0x0007252e) mup_equalizer_pane_cp7_ParamLimits

0x2aaf,	// (0x0006fb4d) main_gallery_pane

0x0dbf,	// (0x0006de5d) smil2_volume_pane

0x0dc7,	// (0x0006de65) smil_status_volume_pane_g1_ParamLimits

0x0dda,	// (0x0006de78) smil_status_volume_pane_g2_ParamLimits

0xcb1f,	// (0x00079bbd) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0007c63c) smil_status_volume_pane_g_ParamLimits

0x0633,	// (0x0006d6d1) bg_popup_window_pane_cp07_ParamLimits

0x0f82,	// (0x0006e020) blid_firmament_pane

0xb23c,	// (0x000782da) aid_size_cell_gallery_ParamLimits

0xb23c,	// (0x000782da) aid_size_cell_gallery

0x6296,	// (0x00073334) grid_gallery_pane_ParamLimits

0x6296,	// (0x00073334) grid_gallery_pane

0x62ac,	// (0x0007334a) cell_gallery_pane_ParamLimits

0x62ac,	// (0x0007334a) cell_gallery_pane

0xb23c,	// (0x000782da) bg_cell_gallery_focus_pane_ParamLimits

0xb23c,	// (0x000782da) bg_cell_gallery_focus_pane

0x340f,	// (0x000704ad) cell_gallery_pane_g1_ParamLimits

0x340f,	// (0x000704ad) cell_gallery_pane_g1

0x340f,	// (0x000704ad) cell_gallery_pane_g2_ParamLimits

0x340f,	// (0x000704ad) cell_gallery_pane_g2

0x340f,	// (0x000704ad) cell_gallery_pane_g3_ParamLimits

0x340f,	// (0x000704ad) cell_gallery_pane_g3

0x341d,	// (0x000704bb) cell_gallery_pane_g4_ParamLimits

0x341d,	// (0x000704bb) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x0007c6e8) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x0007c6e8) cell_gallery_pane_g

0x10c6,	// (0x0006e164) bg_cell_gallery_focus_pane_g1

0x10ce,	// (0x0006e16c) bg_cell_gallery_focus_pane_g2

0x10d6,	// (0x0006e174) bg_cell_gallery_focus_pane_g3

0x10de,	// (0x0006e17c) bg_cell_gallery_focus_pane_g4

0x10e6,	// (0x0006e184) bg_cell_gallery_focus_pane_g5

0x10ee,	// (0x0006e18c) bg_cell_gallery_focus_pane_g6

0x10f6,	// (0x0006e194) bg_cell_gallery_focus_pane_g7

0x10fe,	// (0x0006e19c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x0007c6f1) bg_cell_gallery_focus_pane_g

0x1106,	// (0x0006e1a4) aid_firma_cardinal

0x111a,	// (0x0006e1b8) blid_firmament_pane_t1

0x1131,	// (0x0006e1cf) blid_firmament_pane_t2

0x1148,	// (0x0006e1e6) blid_firmament_pane_t3

0x115f,	// (0x0006e1fd) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x0007c702) blid_firmament_pane_t

0x1176,	// (0x0006e214) blid_sat_info_pane

0xb384,	// (0x00078422) blid_sat_info_pane_g1

0xb384,	// (0x00078422) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x0007c467) blid_sat_info_pane_g

0x1186,	// (0x0006e224) blid_sat_info_pane_t1

0x1194,	// (0x0006e232) smil2_volume_content_pane

0x62cc,	// (0x0007336a) smil2_volume_pane_g1

0x62d4,	// (0x00073372) smil2_volume_content_pane_g1

0x62dd,	// (0x0007337b) smil2_volume_content_pane_g2

0x62e6,	// (0x00073384) smil2_volume_content_pane_g3

0x62ef,	// (0x0007338d) smil2_volume_content_pane_g4

0x62f8,	// (0x00073396) smil2_volume_content_pane_g5

0x6301,	// (0x0007339f) smil2_volume_content_pane_g6

0x630a,	// (0x000733a8) smil2_volume_content_pane_g7

0x6313,	// (0x000733b1) smil2_volume_content_pane_g8

0x631c,	// (0x000733ba) smil2_volume_content_pane_g9

0x6325,	// (0x000733c3) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0007c70b) smil2_volume_content_pane_g

0x3b76,	// (0x00070c14) cale_week_day_heading_pane_t1_ParamLimits

0x3ba0,	// (0x00070c3e) cale_week_day_heading_pane_t2_ParamLimits

0x3bcf,	// (0x00070c6d) cale_week_day_heading_pane_t3_ParamLimits

0x3bfe,	// (0x00070c9c) cale_week_day_heading_pane_t4_ParamLimits

0x3c2d,	// (0x00070ccb) cale_week_day_heading_pane_t5_ParamLimits

0x3c5c,	// (0x00070cfa) cale_week_day_heading_pane_t6_ParamLimits

0x3c8b,	// (0x00070d29) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x0007c204) cale_week_day_heading_pane_t_ParamLimits

0x3cb5,	// (0x00070d53) bg_cale_side_pane_ParamLimits

0x3cc3,	// (0x00070d61) cale_week_time_pane_t1_ParamLimits

0x3cfd,	// (0x00070d9b) cale_week_time_pane_t2_ParamLimits

0x3d37,	// (0x00070dd5) cale_week_time_pane_t3_ParamLimits

0x3d71,	// (0x00070e0f) cale_week_time_pane_t4_ParamLimits

0x3dab,	// (0x00070e49) cale_week_time_pane_t5_ParamLimits

0x3de5,	// (0x00070e83) cale_week_time_pane_t6_ParamLimits

0x3e1f,	// (0x00070ebd) cale_week_time_pane_t7_ParamLimits

0x3e59,	// (0x00070ef7) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x0007c213) cale_week_time_pane_t_ParamLimits

0x3e93,	// (0x00070f31) cell_cale_week_pane_g2_ParamLimits

0x3cb5,	// (0x00070d53) bg_cale_side_pane_cp01_ParamLimits

0x4d35,	// (0x00071dd3) cale_month_week_pane_t1_ParamLimits

0x4d4e,	// (0x00071dec) cale_month_week_pane_t2_ParamLimits

0x4d67,	// (0x00071e05) cale_month_week_pane_t3_ParamLimits

0x4d80,	// (0x00071e1e) cale_month_week_pane_t4_ParamLimits

0x4d99,	// (0x00071e37) cale_month_week_pane_t5_ParamLimits

0x4db2,	// (0x00071e50) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0007c2e1) cale_month_week_pane_t_ParamLimits

0xb6cc,	// (0x0007876a) cell_cale_month_pane_g1_ParamLimits

0x2aaf,	// (0x0006fb4d) main_cale_event_viewer_pane

0x2aaf,	// (0x0006fb4d) listscroll_cale_event_viewer_pane

0x632e,	// (0x000733cc) list_cale_ev_pane

0x6336,	// (0x000733d4) scroll_pane_cp023

0x6342,	// (0x000733e0) field_cale_ev_pane_ParamLimits

0x6342,	// (0x000733e0) field_cale_ev_pane

0x635c,	// (0x000733fa) field_cale_ev_content_pane_ParamLimits

0x635c,	// (0x000733fa) field_cale_ev_content_pane

0x6368,	// (0x00073406) field_cale_ev_pane_g1_ParamLimits

0x6368,	// (0x00073406) field_cale_ev_pane_g1

0x6374,	// (0x00073412) field_cale_ev_pane_g2_ParamLimits

0x6374,	// (0x00073412) field_cale_ev_pane_g2

0x638c,	// (0x0007342a) field_cale_ev_pane_g3_ParamLimits

0x638c,	// (0x0007342a) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0007c720) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0007c720) field_cale_ev_pane_g

0x63a4,	// (0x00073442) field_cale_ev_pane_t1_ParamLimits

0x63a4,	// (0x00073442) field_cale_ev_pane_t1

0x3816,	// (0x000708b4) field_cale_ev_content_pane_t1_ParamLimits

0x3816,	// (0x000708b4) field_cale_ev_content_pane_t1

0xbf6f,	// (0x0007900d) bg_button_pane_cp01

0x3870,	// (0x0007090e) listscroll_cale_week_pane_ParamLimits

0x3880,	// (0x0007091e) popup_toolbar_window_cp01

0x3ad1,	// (0x00070b6f) listscroll_cale_week_pane_t1_ParamLimits

0x3870,	// (0x0007090e) listscroll_cale_day_pane_ParamLimits

0x3880,	// (0x0007091e) popup_toolbar_window_cp02

0xb737,	// (0x000787d5) listscroll_cale_day_pane_t1_ParamLimits

0x3870,	// (0x0007090e) main_cale_month_pane_ParamLimits

0xcb0a,	// (0x00079ba8) popup_toolbar_window_cp03_ParamLimits

0xcb0a,	// (0x00079ba8) popup_toolbar_window_cp03

0x5700,	// (0x0007279e) main_image_pane_g2_ParamLimits

0x5700,	// (0x0007279e) main_image_pane_g2

0x5711,	// (0x000727af) main_image_pane_g3_ParamLimits

0x5711,	// (0x000727af) main_image_pane_g3

0x0002,

0xf467,	// (0x0007c505) main_image_pane_g_ParamLimits

0xf467,	// (0x0007c505) main_image_pane_g

0xc0e1,	// (0x0007917f) main_image_pane_t1_ParamLimits

0x5722,	// (0x000727c0) main_image_pane_t2_ParamLimits

0x5722,	// (0x000727c0) main_image_pane_t2

0x5734,	// (0x000727d2) main_image_pane_t3_ParamLimits

0x5734,	// (0x000727d2) main_image_pane_t3

0x575c,	// (0x000727fa) main_image_pane_t4_ParamLimits

0x575c,	// (0x000727fa) main_image_pane_t4

0x0003,

0xf46e,	// (0x0007c50c) main_image_pane_t_ParamLimits

0xf46e,	// (0x0007c50c) main_image_pane_t

0x577c,	// (0x0007281a) popup_image_details_window_cp01

0x5784,	// (0x00072822) popup_toobar_trans_pane_cp01_ParamLimits

0x5784,	// (0x00072822) popup_toobar_trans_pane_cp01

0x5e35,	// (0x00072ed3) popup_image_details_window_ParamLimits

0x5e35,	// (0x00072ed3) popup_image_details_window

0xcadf,	// (0x00079b7d) popup_image_focus_window

0xeb44,	// (0x0007bbe2) camera2_autofocus_pane_ParamLimits

0xeb44,	// (0x0007bbe2) camera2_autofocus_pane

0x2aaf,	// (0x0006fb4d) bg_popup_sub_pane_cp06

0x63bb,	// (0x00073459) popup_image_focus_window_g1

0x63c3,	// (0x00073461) popup_image_focus_window_g2

0x63cb,	// (0x00073469) popup_image_focus_window_g3

0x63d3,	// (0x00073471) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x0007c727) popup_image_focus_window_g

0x63db,	// (0x00073479) popup_image_focus_window_t1

0x63e9,	// (0x00073487) popup_image_focus_window_t2

0x63f8,	// (0x00073496) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0007c730) popup_image_focus_window_t

0x340f,	// (0x000704ad) camera2_autofocus_pane_g1

0xb23c,	// (0x000782da) bg_tb_trans_pane_cp01

0x6406,	// (0x000734a4) popup_image_details_window_g1

0x6419,	// (0x000734b7) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x0007c742) popup_image_details_window_g

0x6442,	// (0x000734e0) popup_image_details_window_t1

0x6454,	// (0x000734f2) popup_image_details_window_t2

0x646d,	// (0x0007350b) popup_image_details_window_t3

0x6481,	// (0x0007351f) popup_image_details_window_t4

0x649c,	// (0x0007353a) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x0007c749) popup_image_details_window_t

0x35bc,	// (0x0007065a) bg_calc_paper_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) grid_highlight_pane_cp013

0xb252,	// (0x000782f0) list_calc_pane_ParamLimits

0xb264,	// (0x00078302) scroll_pane_cp024

0x35d4,	// (0x00070672) bg_calc_display_pane_ParamLimits

0xb26c,	// (0x0007830a) calc_display_pane_t1_ParamLimits

0xb281,	// (0x0007831f) calc_display_pane_t2_ParamLimits

0xb296,	// (0x00078334) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x0007c184) calc_display_pane_t_ParamLimits

0x36c2,	// (0x00070760) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0007c1a1) cell_calc_pane_g

0x36cb,	// (0x00070769) cell_calc_pane_t1

0x36da,	// (0x00070778) grid_highlight_pane_cp02_ParamLimits

0x36f0,	// (0x0007078e) toolbar_button_pane_cp01_ParamLimits

0x36f0,	// (0x0007078e) toolbar_button_pane_cp01

0xc126,	// (0x000791c4) temp_image_control_pane_ParamLimits

0xc126,	// (0x000791c4) temp_image_control_pane

0xb23c,	// (0x000782da) main_mp3_pane

0x64b6,	// (0x00073554) temp_image_control_pane_g1_ParamLimits

0x64b6,	// (0x00073554) temp_image_control_pane_g1

0x64c4,	// (0x00073562) temp_image_control_pane_g2_ParamLimits

0x64c4,	// (0x00073562) temp_image_control_pane_g2

0x64d6,	// (0x00073574) temp_image_control_pane_g3_ParamLimits

0x64d6,	// (0x00073574) temp_image_control_pane_g3

0x64e6,	// (0x00073584) temp_image_control_pane_g4_ParamLimits

0x64e6,	// (0x00073584) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x0007c754) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x0007c754) temp_image_control_pane_g

0x64b6,	// (0x00073554) main_mp3_pane_g1

0x64f7,	// (0x00073595) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0007c75d) main_mp3_pane_g

0x6540,	// (0x000735de) main_mp3_pane_t1

0x341d,	// (0x000704bb) main_camera_pane_g8_ParamLimits

0x341d,	// (0x000704bb) main_camera_pane_g8

0x4066,	// (0x00071104) main_video_pane_g7_ParamLimits

0x4066,	// (0x00071104) main_video_pane_g7

0xbebe,	// (0x00078f5c) main_camera2_pane_t7_ParamLimits

0xbebe,	// (0x00078f5c) main_camera2_pane_t7

0xb4d7,	// (0x00078575) scroll_pane_cp025_ParamLimits

0xb4d7,	// (0x00078575) scroll_pane_cp025

0xb4eb,	// (0x00078589) scroll_pane_cp026_ParamLimits

0xb4eb,	// (0x00078589) scroll_pane_cp026

0xb4fa,	// (0x00078598) wml_content_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) main_touch_calib_pane

0x6610,	// (0x000736ae) main_touch_calib_pane_g1

0x6622,	// (0x000736c0) main_touch_calib_pane_g2

0x6634,	// (0x000736d2) main_touch_calib_pane_g3

0x6646,	// (0x000736e4) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x0007c77b) main_touch_calib_pane_g

0x6658,	// (0x000736f6) main_touch_calib_pane_t1

0x6670,	// (0x0007370e) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x0007c784) main_touch_calib_pane_t

0xbcc8,	// (0x00078d66) mup_progress_pane_cp02

0xbcfd,	// (0x00078d9b) navi_pane_g1

0xbd88,	// (0x00078e26) navi_pane_mp_t3

0xb23c,	// (0x000782da) main_mp3_pane_ParamLimits

0x5f8e,	// (0x0007302c) navi_pane_ParamLimits

0x64b6,	// (0x00073554) main_mp3_pane_g1_ParamLimits

0x64f7,	// (0x00073595) main_mp3_pane_g2_ParamLimits

0x6503,	// (0x000735a1) main_mp3_pane_g3_ParamLimits

0x6503,	// (0x000735a1) main_mp3_pane_g3

0x650f,	// (0x000735ad) main_mp3_pane_g4_ParamLimits

0x650f,	// (0x000735ad) main_mp3_pane_g4

0x340f,	// (0x000704ad) main_mp3_pane_g5_ParamLimits

0x340f,	// (0x000704ad) main_mp3_pane_g5

0x651b,	// (0x000735b9) main_mp3_pane_g6_ParamLimits

0x651b,	// (0x000735b9) main_mp3_pane_g6

0x6528,	// (0x000735c6) main_mp3_pane_g7_ParamLimits

0x6528,	// (0x000735c6) main_mp3_pane_g7

0x6534,	// (0x000735d2) main_mp3_pane_g8_ParamLimits

0x6534,	// (0x000735d2) main_mp3_pane_g8

0xf6bf,	// (0x0007c75d) main_mp3_pane_g_ParamLimits

0x654e,	// (0x000735ec) main_mp3_pane_t2

0x655c,	// (0x000735fa) main_mp3_pane_t3

0x656a,	// (0x00073608) main_mp3_pane_t4

0x6578,	// (0x00073616) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x0007c76e) main_mp3_pane_t

0x6594,	// (0x00073632) mup_progress_pane_cp01

0xb20b,	// (0x000782a9) aid_zoom_text_secondary2

0x632e,	// (0x000733cc) list_cale_ev2_pane

0x6336,	// (0x000733d4) scroll_pane_cp023_ParamLimits

0x66be,	// (0x0007375c) field_cale_ev2_pane_ParamLimits

0x66be,	// (0x0007375c) field_cale_ev2_pane

0xcb6b,	// (0x00079c09) field_cale_ev2_pane_g1_ParamLimits

0xcb6b,	// (0x00079c09) field_cale_ev2_pane_g1

0xcb77,	// (0x00079c15) field_cale_ev2_pane_g2_ParamLimits

0xcb77,	// (0x00079c15) field_cale_ev2_pane_g2

0xcb8f,	// (0x00079c2d) field_cale_ev2_pane_g3_ParamLimits

0xcb8f,	// (0x00079c2d) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x0007c78f) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x0007c78f) field_cale_ev2_pane_g

0xcbb3,	// (0x00079c51) field_cale_ev2_pane_t1_ParamLimits

0xcbb3,	// (0x00079c51) field_cale_ev2_pane_t1

0xcbca,	// (0x00079c68) field_cale_ev2_pane_t2_ParamLimits

0xcbca,	// (0x00079c68) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x0007c798) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x0007c798) field_cale_ev2_pane_t

0x55bb,	// (0x00072659) main_postcard_pane_g5_ParamLimits

0x55bb,	// (0x00072659) main_postcard_pane_g5

0x55cf,	// (0x0007266d) main_postcard_pane_g6_ParamLimits

0x55cf,	// (0x0007266d) main_postcard_pane_g6

0xb23c,	// (0x000782da) camera2_autofocus_pane_cp_ParamLimits

0xb23c,	// (0x000782da) camera2_autofocus_pane_cp

0xb23c,	// (0x000782da) main_mup3_pane

0x6714,	// (0x000737b2) main_mup3_pane_g1_ParamLimits

0x6714,	// (0x000737b2) main_mup3_pane_g1

0x6736,	// (0x000737d4) main_mup3_pane_g2_ParamLimits

0x6736,	// (0x000737d4) main_mup3_pane_g2

0x67a9,	// (0x00073847) main_mup3_pane_g3_ParamLimits

0x67a9,	// (0x00073847) main_mup3_pane_g3

0x67e7,	// (0x00073885) main_mup3_pane_g4_ParamLimits

0x67e7,	// (0x00073885) main_mup3_pane_g4

0x6825,	// (0x000738c3) main_mup3_pane_g5_ParamLimits

0x6825,	// (0x000738c3) main_mup3_pane_g5

0x6863,	// (0x00073901) main_mup3_pane_g6_ParamLimits

0x6863,	// (0x00073901) main_mup3_pane_g6

0x341d,	// (0x000704bb) main_mup3_pane_g7_ParamLimits

0x341d,	// (0x000704bb) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x0007c7a8) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x0007c7a8) main_mup3_pane_g

0x68d9,	// (0x00073977) main_mup3_pane_t1_ParamLimits

0x68d9,	// (0x00073977) main_mup3_pane_t1

0x693f,	// (0x000739dd) main_mup3_pane_t2_ParamLimits

0x693f,	// (0x000739dd) main_mup3_pane_t2

0x6a05,	// (0x00073aa3) main_mup3_pane_t4_ParamLimits

0x6a05,	// (0x00073aa3) main_mup3_pane_t4

0x6a53,	// (0x00073af1) main_mup3_pane_t5_ParamLimits

0x6a53,	// (0x00073af1) main_mup3_pane_t5

0x6b01,	// (0x00073b9f) main_mup3_pane_t6_ParamLimits

0x6b01,	// (0x00073b9f) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x0007c7b9) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x0007c7b9) main_mup3_pane_t

0x6bb5,	// (0x00073c53) mup3_progress_pane_ParamLimits

0x6bb5,	// (0x00073c53) mup3_progress_pane

0x6c31,	// (0x00073ccf) popup_mup3_control_window_ParamLimits

0x6c31,	// (0x00073ccf) popup_mup3_control_window

0x6c49,	// (0x00073ce7) popup_mup3_text_window

0x6c67,	// (0x00073d05) mup3_progress_pane_t1

0x6c85,	// (0x00073d23) mup3_progress_pane_t2

0x6ca3,	// (0x00073d41) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x0007c7c6) mup3_progress_pane_t

0x6cc0,	// (0x00073d5e) mup_progress_pane_cp03

0x2aaf,	// (0x0006fb4d) bg_tb_trans_pane_cp04

0x6cd0,	// (0x00073d6e) mup3_volume_pane

0x6cd8,	// (0x00073d76) popup_mup3_control_window_g1

0x6ce1,	// (0x00073d7f) mup3_volume_pane_g1

0x6cea,	// (0x00073d88) mup3_volume_pane_g2

0x6cf3,	// (0x00073d91) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0007c7cd) mup3_volume_pane_g

0x2aaf,	// (0x0006fb4d) bg_tb_trans_pane_cp03

0x6cfc,	// (0x00073d9a) popup_mup3_text_window_g1

0x6d04,	// (0x00073da2) popup_mup3_text_window_t1

0x369f,	// (0x0007073d) list_calc_item_pane_g1_ParamLimits

0x0ef8,	// (0x0006df96) mup_volume_pane_cp_g1

0x6688,	// (0x00073726) main_touch_calib_pane_t3

0x669a,	// (0x00073738) main_touch_calib_pane_t4

0x66ac,	// (0x0007374a) main_touch_calib_pane_t5

0xb1eb,	// (0x00078289) aid_cell_size_toolbar2

0xb1f3,	// (0x00078291) aid_popup3_width_pane

0xb1fb,	// (0x00078299) aid_zoom_text_msg_primary

0xb33e,	// (0x000783dc) vorec_t7

0x3613,	// (0x000706b1) bg_calc_paper_pane_g1_ParamLimits

0x361f,	// (0x000706bd) bg_calc_paper_pane_g2_ParamLimits

0x362b,	// (0x000706c9) bg_calc_paper_pane_g3_ParamLimits

0x3637,	// (0x000706d5) bg_calc_paper_pane_g4_ParamLimits

0x3643,	// (0x000706e1) bg_calc_paper_pane_g5_ParamLimits

0x364f,	// (0x000706ed) bg_calc_paper_pane_g6_ParamLimits

0x365e,	// (0x000706fc) bg_calc_paper_pane_g7_ParamLimits

0x366d,	// (0x0007070b) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x0007c18b) bg_calc_paper_pane_g_ParamLimits

0x367c,	// (0x0007071a) calc_bg_paper_pane_g9_ParamLimits

0xb23c,	// (0x000782da) image_qvga_pane_ParamLimits

0xb23c,	// (0x000782da) image_qvga_pane

0x336a,	// (0x00070408) bg_popup_sub_pane_cp04_ParamLimits

0xc05d,	// (0x000790fb) popup_mup_playback_window_g1_ParamLimits

0xc069,	// (0x00079107) popup_mup_playback_window_t1_ParamLimits

0xc07e,	// (0x0007911c) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0007c500) popup_mup_playback_window_t_ParamLimits

0x341d,	// (0x000704bb) main_mup2_pane_g3_ParamLimits

0x341d,	// (0x000704bb) main_mup2_pane_g3

0x4244,	// (0x000712e2) popup_toolbar_window_cp04

0xc457,	// (0x000794f5) popup_call2_audio_second_window_g3_ParamLimits

0xc457,	// (0x000794f5) popup_call2_audio_second_window_g3

0xc86f,	// (0x0007990d) popup_call2_audio_first_window_g4_ParamLimits

0xc86f,	// (0x0007990d) popup_call2_audio_first_window_g4

0x0a08,	// (0x0006daa6) popup_call2_audio_in_window_g4_ParamLimits

0x0a08,	// (0x0006daa6) popup_call2_audio_in_window_g4

0x56e2,	// (0x00072780) aid_area_sk_bg_cut_ParamLimits

0x56e2,	// (0x00072780) aid_area_sk_bg_cut

0xc093,	// (0x00079131) aid_area_sk_bg_cut_2_ParamLimits

0xc093,	// (0x00079131) aid_area_sk_bg_cut_2

0x2aaf,	// (0x0006fb4d) aid_placing_details_win

0x2aaf,	// (0x0006fb4d) aid_placing_details_win_2

0x340f,	// (0x000704ad) camera2_autofocus_pane_g1_ParamLimits

0x2bff,	// (0x0006fc9d) popup_fixed_preview_cale_window_ParamLimits

0x2bff,	// (0x0006fc9d) popup_fixed_preview_cale_window

0xbe07,	// (0x00078ea5) navi_slider_pane_g3

0xbe10,	// (0x00078eae) navi_slider_pane_g4

0xbe19,	// (0x00078eb7) navi_slider_pane_g5

0xbe07,	// (0x00078ea5) navi_slider_pane_g6

0xbe22,	// (0x00078ec0) navi_slider_pane_g7

0xbf34,	// (0x00078fd2) mup_scale_pane_g3

0xbf3d,	// (0x00078fdb) mup_scale_pane_g4

0xbf46,	// (0x00078fe4) mup_scale_pane_g5

0x54a4,	// (0x00072542) mup_scale_pane_g6

0x54ad,	// (0x0007254b) mup_scale_pane_g7

0xb384,	// (0x00078422) cams2_slider_pane_g3

0xb384,	// (0x00078422) cams2_slider_pane_g4

0xb384,	// (0x00078422) cams2_slider_pane_g5

0xb384,	// (0x00078422) cams2_slider_pane_g6

0xb384,	// (0x00078422) cams2_slider_pane_g7

0xb384,	// (0x00078422) camera2_autofocus_pane_cp_g1

0x0d2e,	// (0x0006ddcc) bg_popup_preview_window_pane_cp02_ParamLimits

0x0d2e,	// (0x0006ddcc) bg_popup_preview_window_pane_cp02

0x6d12,	// (0x00073db0) list_fp_cale_pane_ParamLimits

0x6d12,	// (0x00073db0) list_fp_cale_pane

0x6d1e,	// (0x00073dbc) popup_fixed_preview_cale_window_t1_ParamLimits

0x6d1e,	// (0x00073dbc) popup_fixed_preview_cale_window_t1

0x6d30,	// (0x00073dce) popup_fixed_preview_cale_window_t2_ParamLimits

0x6d30,	// (0x00073dce) popup_fixed_preview_cale_window_t2

0x6d45,	// (0x00073de3) popup_fixed_preview_cale_window_t3_ParamLimits

0x6d45,	// (0x00073de3) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x0007c7d4) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x0007c7d4) popup_fixed_preview_cale_window_t

0x6d66,	// (0x00073e04) list_single_fp_cale_pane_ParamLimits

0x6d66,	// (0x00073e04) list_single_fp_cale_pane

0x6d7a,	// (0x00073e18) list_single_fp_cale_pane_g1_ParamLimits

0x6d7a,	// (0x00073e18) list_single_fp_cale_pane_g1

0x6d86,	// (0x00073e24) list_single_fp_cale_pane_g2_ParamLimits

0x6d86,	// (0x00073e24) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0007c7db) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0007c7db) list_single_fp_cale_pane_g

0x6d9f,	// (0x00073e3d) list_single_fp_cale_pane_t1_ParamLimits

0x6d9f,	// (0x00073e3d) list_single_fp_cale_pane_t1

0x6db1,	// (0x00073e4f) list_single_fp_cale_pane_t2_ParamLimits

0x6db1,	// (0x00073e4f) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x0007c7e2) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x0007c7e2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2aaf,	// (0x0006fb4d) main_dialer_pane

0x6de4,	// (0x00073e82) aid_cell_size_keypad

0x2aaf,	// (0x0006fb4d) dialer_ne_pane

0x2aaf,	// (0x0006fb4d) grid_dialer_command_1_pane

0x2aaf,	// (0x0006fb4d) grid_dialer_command_2_pane

0x2aaf,	// (0x0006fb4d) grid_dialer_keypad_pane

0x6dee,	// (0x00073e8c) bg_popup_call_pane_cp06_ParamLimits

0x6dee,	// (0x00073e8c) bg_popup_call_pane_cp06

0x6dee,	// (0x00073e8c) dialer_ne_clear_pane_ParamLimits

0x6dee,	// (0x00073e8c) dialer_ne_clear_pane

0xb384,	// (0x00078422) dialer_ne_pane_g1

0xbebe,	// (0x00078f5c) dialer_ne_pane_t1_ParamLimits

0xbebe,	// (0x00078f5c) dialer_ne_pane_t1

0x6dfc,	// (0x00073e9a) dialer_ne_pane_t2_ParamLimits

0x6dfc,	// (0x00073e9a) dialer_ne_pane_t2

0x6e24,	// (0x00073ec2) dialer_ne_pane_t3_ParamLimits

0x6e24,	// (0x00073ec2) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x0007c7e7) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x0007c7e7) dialer_ne_pane_t

0x6e24,	// (0x00073ec2) dialer_ne_pane_t3_copy1_ParamLimits

0x6e24,	// (0x00073ec2) dialer_ne_pane_t3_copy1

0x6e51,	// (0x00073eef) cell_dialer_keypad_pane_ParamLimits

0x6e51,	// (0x00073eef) cell_dialer_keypad_pane

0x6e66,	// (0x00073f04) cell_dialer_command_1_pane_ParamLimits

0x6e66,	// (0x00073f04) cell_dialer_command_1_pane

0x6e77,	// (0x00073f15) cell_dialer_command_2_pane_ParamLimits

0x6e77,	// (0x00073f15) cell_dialer_command_2_pane

0xb23c,	// (0x000782da) bg_button_pane_cp02_ParamLimits

0xb23c,	// (0x000782da) bg_button_pane_cp02

0x340f,	// (0x000704ad) cell_dialer_keypad_pane_g1_ParamLimits

0x340f,	// (0x000704ad) cell_dialer_keypad_pane_g1

0xb23c,	// (0x000782da) bg_button_pane_cp03_ParamLimits

0xb23c,	// (0x000782da) bg_button_pane_cp03

0x340f,	// (0x000704ad) cell_dialer_command_1_pane_g1_ParamLimits

0x340f,	// (0x000704ad) cell_dialer_command_1_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp04

0xb384,	// (0x00078422) cell_dialer_command_2_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp06

0xb384,	// (0x00078422) dialer_ne_clear_pane_g1

0xbd09,	// (0x00078da7) navi_pane_g2

0x52aa,	// (0x00072348) navi_pane_g3

0x0002,

0xf365,	// (0x0007c403) navi_pane_g

0xbd96,	// (0x00078e34) navi_pane_mv_g2

0xbdbd,	// (0x00078e5b) navi_pane_mv_g5

0x52c7,	// (0x00072365) navi_pane_mv_t1

0x35d4,	// (0x00070672) main_clock2_pane

0x6ed7,	// (0x00073f75) main_clock2_list_pane_ParamLimits

0x6ed7,	// (0x00073f75) main_clock2_list_pane

0x6f25,	// (0x00073fc3) main_clock2_pane_t1_ParamLimits

0x6f25,	// (0x00073fc3) main_clock2_pane_t1

0x6f5f,	// (0x00073ffd) main_clock2_pane_t2_ParamLimits

0x6f5f,	// (0x00073ffd) main_clock2_pane_t2

0x0004,

0xf755,	// (0x0007c7f3) main_clock2_pane_t_ParamLimits

0xf755,	// (0x0007c7f3) main_clock2_pane_t

0x6ff3,	// (0x00074091) popup_clock_analogue_window_cp03_ParamLimits

0x6ff3,	// (0x00074091) popup_clock_analogue_window_cp03

0x7018,	// (0x000740b6) popup_clock_digital_window_cp02_ParamLimits

0x7018,	// (0x000740b6) popup_clock_digital_window_cp02

0x7089,	// (0x00074127) main_clock2_list_single_pane_ParamLimits

0x7089,	// (0x00074127) main_clock2_list_single_pane

0xb30c,	// (0x000783aa) list_highlight_pane_cp05

0x709b,	// (0x00074139) main_clock2_list_single_pane_t1

0x4244,	// (0x000712e2) popup_toolbar_window_cp04_ParamLimits

0x341d,	// (0x000704bb) camera2_autofocus_pane_g2_ParamLimits

0x341d,	// (0x000704bb) camera2_autofocus_pane_g2

0x341d,	// (0x000704bb) camera2_autofocus_pane_g3_ParamLimits

0x341d,	// (0x000704bb) camera2_autofocus_pane_g3

0x341d,	// (0x000704bb) camera2_autofocus_pane_g4_ParamLimits

0x341d,	// (0x000704bb) camera2_autofocus_pane_g4

0x341d,	// (0x000704bb) camera2_autofocus_pane_g5_ParamLimits

0x341d,	// (0x000704bb) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x0007c737) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x0007c737) camera2_autofocus_pane_g

0x66d6,	// (0x00073774) camera2_autofocus_pane_cp_g2

0x66de,	// (0x0007377c) camera2_autofocus_pane_cp_g3

0x66e6,	// (0x00073784) camera2_autofocus_pane_cp_g4

0x66ee,	// (0x0007378c) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x0007c79d) camera2_autofocus_pane_cp_g

0x2aaf,	// (0x0006fb4d) popup_dialer_spcha_window

0x2aaf,	// (0x0006fb4d) bg_popup_sub_pane_cp07

0x2aaf,	// (0x0006fb4d) list_spcha_pane

0x7141,	// (0x000741df) list_single_spcha_pane_ParamLimits

0x7141,	// (0x000741df) list_single_spcha_pane

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp06

0x0cd6,	// (0x0006dd74) list_single_spcha_pane_t1

0x07b2,	// (0x0006d850) popup_call2_audio_out_window_g4_ParamLimits

0x07b2,	// (0x0006d850) popup_call2_audio_out_window_g4

0x2aaf,	// (0x0006fb4d) main_imed2_pane

0xcae7,	// (0x00079b85) popup_imed_adjust2_window

0x5e4b,	// (0x00072ee9) popup_imed_trans_window_ParamLimits

0x5e4b,	// (0x00072ee9) popup_imed_trans_window

0x0fcb,	// (0x0006e069) popup_blid_sat_info2_window_t1

0x0fd9,	// (0x0006e077) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0007c6cc) popup_blid_sat_info2_window_t

0x7153,	// (0x000741f1) aid_size_cell_colour_35

0x7173,	// (0x00074211) aid_size_cell_colour_112

0x7193,	// (0x00074231) aid_size_cell_effect

0x0d3a,	// (0x0006ddd8) bg_tb_trans_pane_cp02

0xb840,	// (0x000788de) heading_imed_pane

0x71b3,	// (0x00074251) listscroll_imed_pane

0x71bf,	// (0x0007425d) heading_imed_pane_g1

0x71c7,	// (0x00074265) heading_imed_pane_t1

0x71d5,	// (0x00074273) grid_imed_colour_35_pane_ParamLimits

0x71d5,	// (0x00074273) grid_imed_colour_35_pane

0x71e8,	// (0x00074286) grid_imed_effect_pane

0x71fb,	// (0x00074299) list_imed_aspect_pane

0x7203,	// (0x000742a1) scroll_pane_cp027_ParamLimits

0x7203,	// (0x000742a1) scroll_pane_cp027

0x720f,	// (0x000742ad) cell_imed_effect_pane_ParamLimits

0x720f,	// (0x000742ad) cell_imed_effect_pane

0x7234,	// (0x000742d2) cell_imed_colour_pane_ParamLimits

0x7234,	// (0x000742d2) cell_imed_colour_pane

0x726e,	// (0x0007430c) cell_imed_colour_pane_g1_ParamLimits

0x726e,	// (0x0007430c) cell_imed_colour_pane_g1

0x727f,	// (0x0007431d) hgihlgiht_grid_pane_cp016_ParamLimits

0x727f,	// (0x0007431d) hgihlgiht_grid_pane_cp016

0x7290,	// (0x0007432e) cell_imed_effect_pane_g1

0x7298,	// (0x00074336) grid_highlight_pane_cp017

0x72a1,	// (0x0007433f) list_imed_single_pane_ParamLimits

0x72a1,	// (0x0007433f) list_imed_single_pane

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp07

0x72b4,	// (0x00074352) list_imed_aspect_pane_comp1_t1

0x0d3a,	// (0x0006ddd8) bg_tb_trans_pane_cp05

0x72d4,	// (0x00074372) popup_imed_adjust2_window_g1

0x72fb,	// (0x00074399) popup_imed_adjust2_window_t1

0x7313,	// (0x000743b1) slider_imed_adjust_pane

0x7327,	// (0x000743c5) slider_imed_adjust_pane_g1

0x7337,	// (0x000743d5) slider_imed_adjust_pane_g2

0x7347,	// (0x000743e5) slider_imed_adjust_pane_g3

0x7358,	// (0x000743f6) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x0007c810) slider_imed_adjust_pane_g

0x7369,	// (0x00074407) aid_size_cell_clipart2

0x7375,	// (0x00074413) grid_imed_clipart_pane

0x737f,	// (0x0007441d) scroll_pane_cp031

0x7387,	// (0x00074425) cell_imed_clipart_pane_ParamLimits

0x7387,	// (0x00074425) cell_imed_clipart_pane

0x739f,	// (0x0007443d) cell_imed_clipart_pane_g1

0x2aaf,	// (0x0006fb4d) grid_highlight_pane_cp014

0x6f06,	// (0x00073fa4) main_clock2_pane_g1_ParamLimits

0x6f06,	// (0x00073fa4) main_clock2_pane_g1

0x7034,	// (0x000740d2) aid_call2_pane_cp10

0x7046,	// (0x000740e4) aid_call_pane_cp10

0xbc98,	// (0x00078d36) popup_clock_analogue_window_cp10_g1

0xbc98,	// (0x00078d36) popup_clock_analogue_window_cp10_g2

0x7058,	// (0x000740f6) popup_clock_analogue_window_cp10_g3

0x7058,	// (0x000740f6) popup_clock_analogue_window_cp10_g4

0xbc98,	// (0x00078d36) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x0007c7fe) popup_clock_analogue_window_cp10_g

0x706a,	// (0x00074108) popup_clock_analogue_window_cp10_t1

0x70a9,	// (0x00074147) clock_digital_number_pane_cp10_ParamLimits

0x70a9,	// (0x00074147) clock_digital_number_pane_cp10

0x70c1,	// (0x0007415f) clock_digital_number_pane_cp11_ParamLimits

0x70c1,	// (0x0007415f) clock_digital_number_pane_cp11

0x70d9,	// (0x00074177) clock_digital_number_pane_cp12_ParamLimits

0x70d9,	// (0x00074177) clock_digital_number_pane_cp12

0x70f1,	// (0x0007418f) clock_digital_number_pane_cp13_ParamLimits

0x70f1,	// (0x0007418f) clock_digital_number_pane_cp13

0x7109,	// (0x000741a7) clock_digital_separator_pane_cp10_ParamLimits

0x7109,	// (0x000741a7) clock_digital_separator_pane_cp10

0x7121,	// (0x000741bf) popup_clock_digital_window_cp02_t1_ParamLimits

0x7121,	// (0x000741bf) popup_clock_digital_window_cp02_t1

0x3362,	// (0x00070400) clock_digital_number_pane_cp10_g1

0x3362,	// (0x00070400) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x0007c819) clock_digital_number_pane_cp10_g

0x3362,	// (0x00070400) clock_digital_separator_pane_cp10_g1

0x3362,	// (0x00070400) clock_digital_separator_pane_g2_cp10

0xbdc5,	// (0x00078e63) navi_pane_vded_g4

0xbdce,	// (0x00078e6c) navi_pane_vded_g5

0xbdd7,	// (0x00078e75) navi_pane_vded_t1

0x2aaf,	// (0x0006fb4d) main_vded_pane

0x73a8,	// (0x00074446) main_vded_pane_g1

0x73b2,	// (0x00074450) main_vded_pane_g2

0x73ba,	// (0x00074458) main_vded_pane_g3

0x0002,

0xf780,	// (0x0007c81e) main_vded_pane_g

0x73c2,	// (0x00074460) main_vded_pane_t1

0x73d0,	// (0x0007446e) main_vded_pane_t2

0x0001,

0xf787,	// (0x0007c825) main_vded_pane_t

0x73de,	// (0x0007447c) vded_slider_pane

0x73e6,	// (0x00074484) vded_video_pane

0x73ee,	// (0x0007448c) vded_video_pane_g1

0x73f8,	// (0x00074496) vded_video_pane_g2

0xb384,	// (0x00078422) vded_video_pane_g3

0x0002,

0xf78c,	// (0x0007c82a) vded_video_pane_g

0x7401,	// (0x0007449f) vded_slider_pane_g1

0x0ef8,	// (0x0006df96) vded_slider_pane_g2

0x740a,	// (0x000744a8) vded_slider_pane_g3

0x7413,	// (0x000744b1) vded_slider_pane_g4

0x741c,	// (0x000744ba) vded_slider_pane_g5

0x0004,

0xf793,	// (0x0007c831) vded_slider_pane_g

0x6c1b,	// (0x00073cb9) mup3_rocker_pane_ParamLimits

0x6c1b,	// (0x00073cb9) mup3_rocker_pane

0x7425,	// (0x000744c3) mup3_control_keys_pane_g1

0x742d,	// (0x000744cb) mup3_control_keys_pane_g2

0x7435,	// (0x000744d3) mup3_control_keys_pane_g3

0x743d,	// (0x000744db) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0007c83c) mup3_control_keys_pane_g

0x2c32,	// (0x0006fcd0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2c32,	// (0x0006fcd0) popup_toolbar2_fixed_window_cp01

0x6c51,	// (0x00073cef) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6c51,	// (0x00073cef) popup_toolbar2_fixed_window_cp02

0xc5c9,	// (0x00079667) popup_call2_audio_second_window_t4_ParamLimits

0xc5c9,	// (0x00079667) popup_call2_audio_second_window_t4

0x0677,	// (0x0006d715) popup_call2_audio_first_window_t6_ParamLimits

0x0677,	// (0x0006d715) popup_call2_audio_first_window_t6

0x08b5,	// (0x0006d953) popup_call2_audio_out_window_t6_ParamLimits

0x08b5,	// (0x0006d953) popup_call2_audio_out_window_t6

0x2aaf,	// (0x0006fb4d) main_vitu_pane

0xb23c,	// (0x000782da) aid_size_cell_itu_ParamLimits

0xb23c,	// (0x000782da) aid_size_cell_itu

0xb23c,	// (0x000782da) bg_popup_window_pane_cp08_ParamLimits

0xb23c,	// (0x000782da) bg_popup_window_pane_cp08

0xb23c,	// (0x000782da) field_vitu_entry_pane_ParamLimits

0xb23c,	// (0x000782da) field_vitu_entry_pane

0xb23c,	// (0x000782da) grid_vitu_function_pane_ParamLimits

0xb23c,	// (0x000782da) grid_vitu_function_pane

0xb23c,	// (0x000782da) grid_vitu_itu_pane_ParamLimits

0xb23c,	// (0x000782da) grid_vitu_itu_pane

0x744d,	// (0x000744eb) cell_vitu_itu_pane_ParamLimits

0x744d,	// (0x000744eb) cell_vitu_itu_pane

0xb23c,	// (0x000782da) cell_vitu_function_pane_ParamLimits

0xb23c,	// (0x000782da) cell_vitu_function_pane

0xb23c,	// (0x000782da) bg_popup_sub_pane_cp08_ParamLimits

0xb23c,	// (0x000782da) bg_popup_sub_pane_cp08

0xb356,	// (0x000783f4) field_vitu_entry_pane_t1_ParamLimits

0xb356,	// (0x000783f4) field_vitu_entry_pane_t1

0x7461,	// (0x000744ff) field_vitu_entry_pane_t2_ParamLimits

0x7461,	// (0x000744ff) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x0007c84a) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x0007c84a) field_vitu_entry_pane_t

0x0633,	// (0x0006d6d1) bg_button_pane_cp05_ParamLimits

0x0633,	// (0x0006d6d1) bg_button_pane_cp05

0x747e,	// (0x0007451c) cell_vitu_itu_pane_g1

0x0e2f,	// (0x0006decd) cell_vitu_itu_pane_t1_ParamLimits

0x0e2f,	// (0x0006decd) cell_vitu_itu_pane_t1

0x0e2f,	// (0x0006decd) cell_vitu_itu_pane_t2_ParamLimits

0x0e2f,	// (0x0006decd) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0007c84f) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0007c84f) cell_vitu_itu_pane_t

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp07

0xb384,	// (0x00078422) cell_vitu_function_pane_g1

0xb24a,	// (0x000782e8) main_calc_pane_g1

0x2add,	// (0x0006fb7b) aid_visual_content_pane

0x2aaf,	// (0x0006fb4d) main_vradio_pane

0x340f,	// (0x000704ad) main_vradio_pane_g1_ParamLimits

0x340f,	// (0x000704ad) main_vradio_pane_g1

0x341d,	// (0x000704bb) main_vradio_pane_g2_ParamLimits

0x341d,	// (0x000704bb) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x0007c856) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x0007c856) main_vradio_pane_g

0xb356,	// (0x000783f4) main_vradio_pane_t1_ParamLimits

0xb356,	// (0x000783f4) main_vradio_pane_t1

0xb356,	// (0x000783f4) main_vradio_pane_t2_ParamLimits

0xb356,	// (0x000783f4) main_vradio_pane_t2

0xbebe,	// (0x00078f5c) main_vradio_pane_t3_ParamLimits

0xbebe,	// (0x00078f5c) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0007c85b) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0007c85b) main_vradio_pane_t

0xb23c,	// (0x000782da) vradio_rocker_control_pane_ParamLimits

0xb23c,	// (0x000782da) vradio_rocker_control_pane

0xb23c,	// (0x000782da) vradio_station_info_pane_ParamLimits

0xb23c,	// (0x000782da) vradio_station_info_pane

0xb23c,	// (0x000782da) vradio_frequency_info_pane_ParamLimits

0xb23c,	// (0x000782da) vradio_frequency_info_pane

0xb384,	// (0x00078422) vradio_station_info_pane_g1

0x0e2f,	// (0x0006decd) vradio_station_info_pane_t1_ParamLimits

0x0e2f,	// (0x0006decd) vradio_station_info_pane_t1

0xbebe,	// (0x00078f5c) vradio_station_info_pane_t2_ParamLimits

0xbebe,	// (0x00078f5c) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x0007c862) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x0007c862) vradio_station_info_pane_t

0x2aaf,	// (0x0006fb4d) vradio_tuning_pane

0x749a,	// (0x00074538) vradio_rocker_control_pane_g1

0x74a2,	// (0x00074540) vradio_rocker_control_pane_g2

0x74aa,	// (0x00074548) vradio_rocker_control_pane_g3

0x74b2,	// (0x00074550) vradio_rocker_control_pane_g4

0x74ba,	// (0x00074558) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x0007c867) vradio_rocker_control_pane_g

0xb384,	// (0x00078422) vradio_frequency_info_pane_g1

0xb356,	// (0x000783f4) vradio_frequency_info_pane_t1_ParamLimits

0xb356,	// (0x000783f4) vradio_frequency_info_pane_t1

0x74c2,	// (0x00074560) vradio_tuning_pane_g1

0x74cb,	// (0x00074569) vradio_tuning_pane_t1

0xb213,	// (0x000782b1) area_side_right_pane_ParamLimits

0xb213,	// (0x000782b1) area_side_right_pane

0x0cf5,	// (0x0006dd93) status_small_pane_g1

0x0cfd,	// (0x0006dd9b) status_small_pane_g2

0x0d06,	// (0x0006dda4) status_small_pane_g3

0x0d0f,	// (0x0006ddad) status_small_pane_g4

0x0003,

0xf590,	// (0x0007c62e) status_small_pane_g

0x0d18,	// (0x0006ddb6) status_small_pane_t1

0x2aaf,	// (0x0006fb4d) main_video3_pane

0x74da,	// (0x00074578) cams_zoom_vslider_pane

0x74e2,	// (0x00074580) image3_wide_pane_ParamLimits

0x74e2,	// (0x00074580) image3_wide_pane

0x74fc,	// (0x0007459a) image3_wide_small_pane

0x7506,	// (0x000745a4) main_video3_pane_g1_ParamLimits

0x7506,	// (0x000745a4) main_video3_pane_g1

0x7522,	// (0x000745c0) main_video3_pane_g2_ParamLimits

0x7522,	// (0x000745c0) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x0007c872) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x0007c872) main_video3_pane_g

0x753e,	// (0x000745dc) main_video3_pane_t1_ParamLimits

0x753e,	// (0x000745dc) main_video3_pane_t1

0x7569,	// (0x00074607) main_video3_pane_t2_ParamLimits

0x7569,	// (0x00074607) main_video3_pane_t2

0x7594,	// (0x00074632) main_video3_pane_t3_ParamLimits

0x7594,	// (0x00074632) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x0007c877) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x0007c877) main_video3_pane_t

0x75bf,	// (0x0007465d) cams_zoom_vslider_pane_g1

0x75c8,	// (0x00074666) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x0007c87e) cams_zoom_vslider_pane_g

0x75d0,	// (0x0007466e) small_slider_vertical_pane

0xb384,	// (0x00078422) small_slider_vertical_pane_g1

0xb384,	// (0x00078422) small_slider_vertical_pane_g2

0x75d8,	// (0x00074676) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x0007c883) small_slider_vertical_pane_g

0x2aaf,	// (0x0006fb4d) main_hwr_training_pane

0x75e1,	// (0x0007467f) hwr_training_instruct_pane_ParamLimits

0x75e1,	// (0x0007467f) hwr_training_instruct_pane

0x75fb,	// (0x00074699) hwr_training_navi_pane_ParamLimits

0x75fb,	// (0x00074699) hwr_training_navi_pane

0x7612,	// (0x000746b0) hwr_training_write_pane_ParamLimits

0x7612,	// (0x000746b0) hwr_training_write_pane

0x2aaf,	// (0x0006fb4d) bg_frame_shadow_pane

0x765a,	// (0x000746f8) hwr_training_write_pane_g1

0x7662,	// (0x00074700) hwr_training_write_pane_g2

0x766a,	// (0x00074708) hwr_training_write_pane_g3

0x7672,	// (0x00074710) hwr_training_write_pane_g4

0x767a,	// (0x00074718) hwr_training_write_pane_g5

0x7682,	// (0x00074720) hwr_training_write_pane_g6

0x768a,	// (0x00074728) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x0007c88a) hwr_training_write_pane_g

0xeb60,	// (0x0007bbfe) hwr_training_navi_pane_g1_ParamLimits

0xeb60,	// (0x0007bbfe) hwr_training_navi_pane_g1

0xeb72,	// (0x0007bc10) hwr_training_navi_pane_g2_ParamLimits

0xeb72,	// (0x0007bc10) hwr_training_navi_pane_g2

0xeb84,	// (0x0007bc22) hwr_training_navi_pane_g3_ParamLimits

0xeb84,	// (0x0007bc22) hwr_training_navi_pane_g3

0xeb94,	// (0x0007bc32) hwr_training_navi_pane_g4_ParamLimits

0xeb94,	// (0x0007bc32) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x0007c899) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x0007c899) hwr_training_navi_pane_g

0xeba1,	// (0x0007bc3f) hwr_training_navi_pane_t1

0x769f,	// (0x0007473d) list_single_hwr_training_instruct_pane_ParamLimits

0x769f,	// (0x0007473d) list_single_hwr_training_instruct_pane

0x76b7,	// (0x00074755) list_single_hwr_training_instruct_pane_t1

0x10c6,	// (0x0006e164) bg_frame_shadow_pane_g1

0x76c6,	// (0x00074764) bg_frame_shadow_pane_g2

0x76ce,	// (0x0007476c) bg_frame_shadow_pane_g3

0x76d6,	// (0x00074774) bg_frame_shadow_pane_g4

0x76de,	// (0x0007477c) bg_frame_shadow_pane_g5

0x76e6,	// (0x00074784) bg_frame_shadow_pane_g6

0x76ee,	// (0x0007478c) bg_frame_shadow_pane_g7

0x37d3,	// (0x00070871) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x0007c8a4) bg_frame_shadow_pane_g

0x2aaf,	// (0x0006fb4d) main_video_tele_dialer_pane

0x76f6,	// (0x00074794) aid_size_cell_video_keypad_ParamLimits

0x76f6,	// (0x00074794) aid_size_cell_video_keypad

0x7710,	// (0x000747ae) grid_video_dialer_keypad_pane_ParamLimits

0x7710,	// (0x000747ae) grid_video_dialer_keypad_pane

0x7752,	// (0x000747f0) video_down_pane_cp_ParamLimits

0x7752,	// (0x000747f0) video_down_pane_cp

0x7782,	// (0x00074820) cell_video_dialer_keypad_pane_ParamLimits

0x7782,	// (0x00074820) cell_video_dialer_keypad_pane

0x77a4,	// (0x00074842) bg_button_pane_cp08_ParamLimits

0x77a4,	// (0x00074842) bg_button_pane_cp08

0x77b0,	// (0x0007484e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x77b0,	// (0x0007484e) cell_video_dialer_keypad_pane_g1

0x6c05,	// (0x00073ca3) mup3_rocker2_pane_ParamLimits

0x6c05,	// (0x00073ca3) mup3_rocker2_pane

0xb384,	// (0x00078422) mup3_rocker2_pane_g1

0x5d44,	// (0x00072de2) main_dialer2_pane

0x2aaf,	// (0x0006fb4d) main_mp4_pane

0xebcb,	// (0x0007bc69) main_mp4_pane_g1_ParamLimits

0xebcb,	// (0x0007bc69) main_mp4_pane_g1

0xebcb,	// (0x0007bc69) main_mp4_pane_g2_ParamLimits

0xebcb,	// (0x0007bc69) main_mp4_pane_g2

0x77eb,	// (0x00074889) main_mp4_pane_g3_ParamLimits

0x77eb,	// (0x00074889) main_mp4_pane_g3

0xebd9,	// (0x0007bc77) main_mp4_pane_g4_ParamLimits

0xebd9,	// (0x0007bc77) main_mp4_pane_g4

0xec07,	// (0x0007bca5) main_mp4_pane_g5_ParamLimits

0xec07,	// (0x0007bca5) main_mp4_pane_g5

0x0007,

0xf826,	// (0x0007c8c4) main_mp4_pane_g_ParamLimits

0xf826,	// (0x0007c8c4) main_mp4_pane_g

0xec7b,	// (0x0007bd19) main_mp4_pane_t1_ParamLimits

0xec7b,	// (0x0007bd19) main_mp4_pane_t1

0xecd3,	// (0x0007bd71) main_mp4_pane_t2_ParamLimits

0xecd3,	// (0x0007bd71) main_mp4_pane_t2

0xcbdf,	// (0x00079c7d) main_mp4_pane_t3_ParamLimits

0xcbdf,	// (0x00079c7d) main_mp4_pane_t3

0xed25,	// (0x0007bdc3) main_mp4_pane_t4_ParamLimits

0xed25,	// (0x0007bdc3) main_mp4_pane_t4

0x0003,

0xf837,	// (0x0007c8d5) main_mp4_pane_t_ParamLimits

0xf837,	// (0x0007c8d5) main_mp4_pane_t

0xed65,	// (0x0007be03) mp4_progress_pane_ParamLimits

0xed65,	// (0x0007be03) mp4_progress_pane

0xeda9,	// (0x0007be47) mp4_rocker_pane_ParamLimits

0xeda9,	// (0x0007be47) mp4_rocker_pane

0xcc0d,	// (0x00079cab) mp4_progress_pane_t1

0xcc24,	// (0x00079cc2) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x0007c8de) mp4_progress_pane_t

0xcc3b,	// (0x00079cd9) mup_progress_pane_cp04

0xb384,	// (0x00078422) mp4_rocker_pane_g1

0x781b,	// (0x000748b9) aid_cell_size_keypad2_ParamLimits

0x781b,	// (0x000748b9) aid_cell_size_keypad2

0x7835,	// (0x000748d3) dialer2_ne_pane_ParamLimits

0x7835,	// (0x000748d3) dialer2_ne_pane

0x784a,	// (0x000748e8) grid_dialer2_keypad_pane_ParamLimits

0x784a,	// (0x000748e8) grid_dialer2_keypad_pane

0x0633,	// (0x0006d6d1) bg_popup_call_pane_cp07_ParamLimits

0x0633,	// (0x0006d6d1) bg_popup_call_pane_cp07

0x7860,	// (0x000748fe) dialer2_ne_pane_t1_ParamLimits

0x7860,	// (0x000748fe) dialer2_ne_pane_t1

0x789d,	// (0x0007493b) cell_dialer2_keypad_pane_ParamLimits

0x789d,	// (0x0007493b) cell_dialer2_keypad_pane

0xcc59,	// (0x00079cf7) bg_button_pane_pane_cp04_ParamLimits

0xcc59,	// (0x00079cf7) bg_button_pane_pane_cp04

0x78bf,	// (0x0007495d) cell_dialer2_keypad_pane_g1_ParamLimits

0x78bf,	// (0x0007495d) cell_dialer2_keypad_pane_g1

0x4132,	// (0x000711d0) aid_placing_vt_set_content_ParamLimits

0x4132,	// (0x000711d0) aid_placing_vt_set_content

0x4154,	// (0x000711f2) aid_placing_vt_set_title_ParamLimits

0x4154,	// (0x000711f2) aid_placing_vt_set_title

0x2aaf,	// (0x0006fb4d) main_image3_pane

0x794e,	// (0x000749ec) area_side_right_pane_cp01_ParamLimits

0x794e,	// (0x000749ec) area_side_right_pane_cp01

0xebcb,	// (0x0007bc69) main_image3_pane_g1_ParamLimits

0xebcb,	// (0x0007bc69) main_image3_pane_g1

0x7965,	// (0x00074a03) main_image3_pane_g2_ParamLimits

0x7965,	// (0x00074a03) main_image3_pane_g2

0x798b,	// (0x00074a29) main_image3_pane_g3_ParamLimits

0x798b,	// (0x00074a29) main_image3_pane_g3

0x79b1,	// (0x00074a4f) main_image3_pane_g4_ParamLimits

0x79b1,	// (0x00074a4f) main_image3_pane_g4

0x0003,

0xf84f,	// (0x0007c8ed) main_image3_pane_g_ParamLimits

0xf84f,	// (0x0007c8ed) main_image3_pane_g

0x79d7,	// (0x00074a75) main_image3_pane_t1_ParamLimits

0x79d7,	// (0x00074a75) main_image3_pane_t1

0x7a2f,	// (0x00074acd) main_image3_pane_t2_ParamLimits

0x7a2f,	// (0x00074acd) main_image3_pane_t2

0x7a81,	// (0x00074b1f) main_image3_pane_t3_ParamLimits

0x7a81,	// (0x00074b1f) main_image3_pane_t3

0x0003,

0xf858,	// (0x0007c8f6) main_image3_pane_t_ParamLimits

0xf858,	// (0x0007c8f6) main_image3_pane_t

0xb23c,	// (0x000782da) grid_sctrl_middle_pane_cp01_ParamLimits

0xb23c,	// (0x000782da) grid_sctrl_middle_pane_cp01

0x7b01,	// (0x00074b9f) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b01,	// (0x00074b9f) cell_sctrl_middle_pane_cp01

0x7b1e,	// (0x00074bbc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7b1e,	// (0x00074bbc) cell_sctrl_middle_pane_cp01_g1

0x2aaf,	// (0x0006fb4d) main_call4_pane

0x7b34,	// (0x00074bd2) aid_size_button_call4_ParamLimits

0x7b34,	// (0x00074bd2) aid_size_button_call4

0x7b61,	// (0x00074bff) call4_windows_pane_ParamLimits

0x7b61,	// (0x00074bff) call4_windows_pane

0x7b77,	// (0x00074c15) grid_call4_button_pane_ParamLimits

0x7b77,	// (0x00074c15) grid_call4_button_pane

0xcc7d,	// (0x00079d1b) call4_windows_conf_pane

0x7b9e,	// (0x00074c3c) popup_call4_audio_first_window_ParamLimits

0x7b9e,	// (0x00074c3c) popup_call4_audio_first_window

0xccb0,	// (0x00079d4e) popup_call4_audio_second_window_ParamLimits

0xccb0,	// (0x00079d4e) popup_call4_audio_second_window

0xccc2,	// (0x00079d60) popup_call4_audio_wait_window_ParamLimits

0xccc2,	// (0x00079d60) popup_call4_audio_wait_window

0x7bbe,	// (0x00074c5c) cell_call4_button_pane_ParamLimits

0x7bbe,	// (0x00074c5c) cell_call4_button_pane

0x7be3,	// (0x00074c81) bg_button_pane_cp09_ParamLimits

0x7be3,	// (0x00074c81) bg_button_pane_cp09

0x7bef,	// (0x00074c8d) cell_call4_button_pane_g1_ParamLimits

0x7bef,	// (0x00074c8d) cell_call4_button_pane_g1

0x7c15,	// (0x00074cb3) cell_call4_button_pane_t1_ParamLimits

0x7c15,	// (0x00074cb3) cell_call4_button_pane_t1

0xccd6,	// (0x00079d74) popup_call4_audio_conf_window_ParamLimits

0xccd6,	// (0x00079d74) popup_call4_audio_conf_window

0x6c67,	// (0x00073d05) mup3_progress_pane_t1_ParamLimits

0x6c85,	// (0x00073d23) mup3_progress_pane_t2_ParamLimits

0x6ca3,	// (0x00073d41) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x0007c7c6) mup3_progress_pane_t_ParamLimits

0x6cc0,	// (0x00073d5e) mup_progress_pane_cp03_ParamLimits

0x7445,	// (0x000744e3) mup3_control_keys_pane_g4_copy1

0xed93,	// (0x0007be31) mp4_rocker2_pane_ParamLimits

0xed93,	// (0x0007be31) mp4_rocker2_pane

0xccea,	// (0x00079d88) mp4_rocker2_pane_g1

0xccf2,	// (0x00079d90) mp4_rocker2_pane_g2

0xee2b,	// (0x0007bec9) mp4_rocker2_pane_g3

0xee33,	// (0x0007bed1) mp4_rocker2_pane_g4

0xee3b,	// (0x0007bed9) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x0007c8ff) mp4_rocker2_pane_g

0x2aaf,	// (0x0006fb4d) main_camera4_pane

0x2aaf,	// (0x0006fb4d) main_video4_pane

0x7724,	// (0x000747c2) main_video_tele_dialer_pane_t1_ParamLimits

0x7724,	// (0x000747c2) main_video_tele_dialer_pane_t1

0x773b,	// (0x000747d9) main_video_tele_dialer_pane_t2_ParamLimits

0x773b,	// (0x000747d9) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x0007c8b5) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x0007c8b5) main_video_tele_dialer_pane_t

0x7c53,	// (0x00074cf1) cam4_autofocus_pane_ParamLimits

0x7c53,	// (0x00074cf1) cam4_autofocus_pane

0x7c67,	// (0x00074d05) cam4_image_uncrop_pane_ParamLimits

0x7c67,	// (0x00074d05) cam4_image_uncrop_pane

0x7c7e,	// (0x00074d1c) cam4_indicators_pane_ParamLimits

0x7c7e,	// (0x00074d1c) cam4_indicators_pane

0x7ca2,	// (0x00074d40) main_camera4_pane_g1_ParamLimits

0x7ca2,	// (0x00074d40) main_camera4_pane_g1

0x7cae,	// (0x00074d4c) main_camera4_pane_g2_ParamLimits

0x7cae,	// (0x00074d4c) main_camera4_pane_g2

0x7cae,	// (0x00074d4c) main_camera4_pane_g3_ParamLimits

0x7cae,	// (0x00074d4c) main_camera4_pane_g3

0x7cba,	// (0x00074d58) main_camera4_pane_g4_ParamLimits

0x7cba,	// (0x00074d58) main_camera4_pane_g4

0x7cc6,	// (0x00074d64) main_camera4_pane_g5_ParamLimits

0x7cc6,	// (0x00074d64) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x0007c90a) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x0007c90a) main_camera4_pane_g

0x7ce3,	// (0x00074d81) main_camera4_pane_t1_ParamLimits

0x7ce3,	// (0x00074d81) main_camera4_pane_t1

0x340f,	// (0x000704ad) bg_tb_trans_pane_cp06

0xee65,	// (0x0007bf03) cam4_indicators_pane_g1

0xee75,	// (0x0007bf13) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x0007c925) cam4_indicators_pane_g

0xee95,	// (0x0007bf33) cam4_indicators_pane_t1

0x7d38,	// (0x00074dd6) main_video4_pane_g1_ParamLimits

0x7d38,	// (0x00074dd6) main_video4_pane_g1

0x7d4a,	// (0x00074de8) main_video4_pane_g2_ParamLimits

0x7d4a,	// (0x00074de8) main_video4_pane_g2

0x7d4a,	// (0x00074de8) main_video4_pane_g3_ParamLimits

0x7d4a,	// (0x00074de8) main_video4_pane_g3

0x7d59,	// (0x00074df7) main_video4_pane_g4_ParamLimits

0x7d59,	// (0x00074df7) main_video4_pane_g4

0x0004,

0xf88e,	// (0x0007c92c) main_video4_pane_g_ParamLimits

0xf88e,	// (0x0007c92c) main_video4_pane_g

0x7d77,	// (0x00074e15) vid4_indicators_pane_ParamLimits

0x7d77,	// (0x00074e15) vid4_indicators_pane

0x7d9f,	// (0x00074e3d) video4_image_uncrop_cif_pane_ParamLimits

0x7d9f,	// (0x00074e3d) video4_image_uncrop_cif_pane

0x7db7,	// (0x00074e55) video4_image_uncrop_nhd_pane_ParamLimits

0x7db7,	// (0x00074e55) video4_image_uncrop_nhd_pane

0x7dcb,	// (0x00074e69) video4_image_uncrop_vga_pane_ParamLimits

0x7dcb,	// (0x00074e69) video4_image_uncrop_vga_pane

0xb23c,	// (0x000782da) bg_tb_trans_pane_cp07

0xee65,	// (0x0007bf03) vid4_indicators_pane_g1

0xeeb7,	// (0x0007bf55) vid4_indicators_pane_g2

0xeec7,	// (0x0007bf65) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x0007c937) vid4_indicators_pane_g

0xeef4,	// (0x0007bf92) vid4_indicators_pane_t1

0x7de3,	// (0x00074e81) cam4_autofocus_pane_g1

0x7deb,	// (0x00074e89) cam4_autofocus_pane_g2

0x7df3,	// (0x00074e91) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x0007c942) cam4_autofocus_pane_g

0x7dfb,	// (0x00074e99) cam4_autofocus_pane_g3_copy1

0x7766,	// (0x00074804) video_down_pane_cp_t1

0x7774,	// (0x00074812) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x0007c8ba) video_down_pane_cp_t

0xb23c,	// (0x000782da) popup_vitu2_window_ParamLimits

0xb23c,	// (0x000782da) popup_vitu2_window

0x7e03,	// (0x00074ea1) aid_size_cell2_itu2_ParamLimits

0x7e03,	// (0x00074ea1) aid_size_cell2_itu2

0x7e29,	// (0x00074ec7) aid_size_cell_itu2_ParamLimits

0x7e29,	// (0x00074ec7) aid_size_cell_itu2

0x6dee,	// (0x00073e8c) bg_popup_window_pane_cp09_ParamLimits

0x6dee,	// (0x00073e8c) bg_popup_window_pane_cp09

0x7e7b,	// (0x00074f19) field_vitu2_entry_pane_ParamLimits

0x7e7b,	// (0x00074f19) field_vitu2_entry_pane

0x7e95,	// (0x00074f33) grid_vitu2_function_pane_ParamLimits

0x7e95,	// (0x00074f33) grid_vitu2_function_pane

0x7ed0,	// (0x00074f6e) grid_vitu2_itu_pane_ParamLimits

0x7ed0,	// (0x00074f6e) grid_vitu2_itu_pane

0x7f3e,	// (0x00074fdc) cell_vitu2_itu_pane_ParamLimits

0x7f3e,	// (0x00074fdc) cell_vitu2_itu_pane

0x7f66,	// (0x00075004) cell_vitu2_function_pane_ParamLimits

0x7f66,	// (0x00075004) cell_vitu2_function_pane

0xcd0c,	// (0x00079daa) bg_popup_call_pane_cp08_ParamLimits

0xcd0c,	// (0x00079daa) bg_popup_call_pane_cp08

0xcd23,	// (0x00079dc1) field_vitu2_entry_pane_g1

0xcd2f,	// (0x00079dcd) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x0007c949) field_vitu2_entry_pane_g

0x217a,	// (0x0006f218) field_vitu2_entry_pane_t1_ParamLimits

0x217a,	// (0x0006f218) field_vitu2_entry_pane_t1

0xcd3b,	// (0x00079dd9) field_vitu2_entry_pane_t2_ParamLimits

0xcd3b,	// (0x00079dd9) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x0007c950) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x0007c950) field_vitu2_entry_pane_t

0x7fa5,	// (0x00075043) bg_button_pane_cp010_ParamLimits

0x7fa5,	// (0x00075043) bg_button_pane_cp010

0x7fb3,	// (0x00075051) cell_vitu2_itu_pane_g1

0x7fd9,	// (0x00075077) cell_vitu2_itu_pane_t1_ParamLimits

0x7fd9,	// (0x00075077) cell_vitu2_itu_pane_t1

0x21a7,	// (0x0006f245) cell_vitu2_itu_pane_t2_ParamLimits

0x21a7,	// (0x0006f245) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x0007c95a) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x0007c95a) cell_vitu2_itu_pane_t

0xb23c,	// (0x000782da) bg_button_pane_cp011

0x8037,	// (0x000750d5) cell_vitu2_function_pane_g1

0x2aaf,	// (0x0006fb4d) main_myfav_hc_pane

0x7acd,	// (0x00074b6b) popup_image3_note_pane_ParamLimits

0x7acd,	// (0x00074b6b) popup_image3_note_pane

0x7ae7,	// (0x00074b85) popup_image3_tool_bar_pane_ParamLimits

0x7ae7,	// (0x00074b85) popup_image3_tool_bar_pane

0x2235,	// (0x0006f2d3) cell_vitu2_itu_pane_t3_ParamLimits

0x2235,	// (0x0006f2d3) cell_vitu2_itu_pane_t3

0x2aaf,	// (0x0006fb4d) bg_popup_trans_pane

0xcd60,	// (0x00079dfe) grid_image3_tool_bar_pane

0xcd6a,	// (0x00079e08) bg_popup_trans_pane_g1

0xb5e0,	// (0x0007867e) bg_popup_trans_pane_g2

0xcd72,	// (0x00079e10) bg_popup_trans_pane_g3

0xcd7a,	// (0x00079e18) bg_popup_trans_pane_g4

0xcd82,	// (0x00079e20) bg_popup_trans_pane_g5

0xcd8a,	// (0x00079e28) bg_popup_trans_pane_g6

0xcd92,	// (0x00079e30) bg_popup_trans_pane_g7

0xcd9a,	// (0x00079e38) bg_popup_trans_pane_g8

0xb5c0,	// (0x0007865e) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x0007c961) bg_popup_trans_pane_g

0xcda2,	// (0x00079e40) cell_image3_tool_bar_pane_ParamLimits

0xcda2,	// (0x00079e40) cell_image3_tool_bar_pane

0xb384,	// (0x00078422) cell_image3_tool_bar_pane_g1

0x2aaf,	// (0x0006fb4d) bg_popup_trans_pane_cp1

0xcdb6,	// (0x00079e54) popup_image3_note_pane_t1

0xcdc4,	// (0x00079e62) popup_image3_note_pane_t2

0xcdd2,	// (0x00079e70) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x0007c974) popup_image3_note_pane_t

0xcde0,	// (0x00079e7e) popup_image3_note_pane_t3_copy1

0x804b,	// (0x000750e9) bg_myfav_hc_instruction_pane_ParamLimits

0x804b,	// (0x000750e9) bg_myfav_hc_instruction_pane

0x805d,	// (0x000750fb) cell_myfav_contact_pane_ParamLimits

0x805d,	// (0x000750fb) cell_myfav_contact_pane

0x8077,	// (0x00075115) cell_myfav_contact_pane_cp1_ParamLimits

0x8077,	// (0x00075115) cell_myfav_contact_pane_cp1

0x808d,	// (0x0007512b) cell_myfav_contact_pane_cp2_ParamLimits

0x808d,	// (0x0007512b) cell_myfav_contact_pane_cp2

0x80a3,	// (0x00075141) cell_myfav_contact_pane_cp3_ParamLimits

0x80a3,	// (0x00075141) cell_myfav_contact_pane_cp3

0x80b8,	// (0x00075156) cell_myfav_contact_pane_cp4_ParamLimits

0x80b8,	// (0x00075156) cell_myfav_contact_pane_cp4

0x80cc,	// (0x0007516a) cell_myfav_contact_pane_cp5_ParamLimits

0x80cc,	// (0x0007516a) cell_myfav_contact_pane_cp5

0x80e0,	// (0x0007517e) cell_myfav_contact_pane_cp6_ParamLimits

0x80e0,	// (0x0007517e) cell_myfav_contact_pane_cp6

0x80f4,	// (0x00075192) cell_myfav_contact_pane_cp7_ParamLimits

0x80f4,	// (0x00075192) cell_myfav_contact_pane_cp7

0xcdee,	// (0x00079e8c) listscroll_gen_pane_cp05

0x810c,	// (0x000751aa) main_myfav_hc_pane_g1_ParamLimits

0x810c,	// (0x000751aa) main_myfav_hc_pane_g1

0x8122,	// (0x000751c0) main_myfav_hc_pane_g2_ParamLimits

0x8122,	// (0x000751c0) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x0007c97b) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x0007c97b) main_myfav_hc_pane_g

0x814c,	// (0x000751ea) main_myfav_hc_pane_t1_ParamLimits

0x814c,	// (0x000751ea) main_myfav_hc_pane_t1

0xcdf7,	// (0x00079e95) main_myfav_hc_pane_t2_ParamLimits

0xcdf7,	// (0x00079e95) main_myfav_hc_pane_t2

0xce09,	// (0x00079ea7) main_myfav_hc_pane_t3_ParamLimits

0xce09,	// (0x00079ea7) main_myfav_hc_pane_t3

0x8161,	// (0x000751ff) main_myfav_hc_pane_t4_ParamLimits

0x8161,	// (0x000751ff) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x0007c982) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x0007c982) main_myfav_hc_pane_t

0xb384,	// (0x00078422) bg_myfav_hc_instruction_pane_g1

0xce1b,	// (0x00079eb9) cell_myfav_contact_pane_g1_ParamLimits

0xce1b,	// (0x00079eb9) cell_myfav_contact_pane_g1

0xce1b,	// (0x00079eb9) cell_myfav_contact_pane_g2_ParamLimits

0xce1b,	// (0x00079eb9) cell_myfav_contact_pane_g2

0xce27,	// (0x00079ec5) cell_myfav_contact_pane_g3_ParamLimits

0xce27,	// (0x00079ec5) cell_myfav_contact_pane_g3

0x341d,	// (0x000704bb) cell_myfav_contact_pane_g4_ParamLimits

0x341d,	// (0x000704bb) cell_myfav_contact_pane_g4

0xce34,	// (0x00079ed2) cell_myfav_contact_pane_g5_ParamLimits

0xce34,	// (0x00079ed2) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x0007c98d) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x0007c98d) cell_myfav_contact_pane_g

0x8138,	// (0x000751d6) main_myfav_hc_pane_g3_ParamLimits

0x8138,	// (0x000751d6) main_myfav_hc_pane_g3

0x2078,	// (0x0006f116) popup_adpt_find_window

0x8185,	// (0x00075223) afind_page_pane_ParamLimits

0x8185,	// (0x00075223) afind_page_pane

0x819a,	// (0x00075238) aid_size_cell_afind_ParamLimits

0x819a,	// (0x00075238) aid_size_cell_afind

0x81b8,	// (0x00075256) bg_popup_sub_pane_cp09_ParamLimits

0x81b8,	// (0x00075256) bg_popup_sub_pane_cp09

0x81c5,	// (0x00075263) find_pane_cp01_ParamLimits

0x81c5,	// (0x00075263) find_pane_cp01

0xce40,	// (0x00079ede) grid_afind_control_pane_ParamLimits

0xce40,	// (0x00079ede) grid_afind_control_pane

0x81d2,	// (0x00075270) grid_afind_pane_ParamLimits

0x81d2,	// (0x00075270) grid_afind_pane

0x81f0,	// (0x0007528e) cell_afind_pane_ParamLimits

0x81f0,	// (0x0007528e) cell_afind_pane

0xb384,	// (0x00078422) afind_page_pane_g1

0x823f,	// (0x000752dd) afind_page_pane_g2

0x8247,	// (0x000752e5) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x0007c998) afind_page_pane_g

0x824f,	// (0x000752ed) afind_page_pane_t1

0xce66,	// (0x00079f04) cell_afind_grid_control_pane_ParamLimits

0xce66,	// (0x00079f04) cell_afind_grid_control_pane

0xcc59,	// (0x00079cf7) bg_button_pane_cp69_ParamLimits

0xcc59,	// (0x00079cf7) bg_button_pane_cp69

0x825d,	// (0x000752fb) cell_afind_pane_g1_ParamLimits

0x825d,	// (0x000752fb) cell_afind_pane_g1

0x826a,	// (0x00075308) cell_afind_pane_t1_ParamLimits

0x826a,	// (0x00075308) cell_afind_pane_t1

0xb38e,	// (0x0007842c) bg_button_pane_cp72

0xce75,	// (0x00079f13) cell_afind_grid_control_pane_g1

0x58a1,	// (0x0007293f) aid_image_placing_area_ParamLimits

0x58a1,	// (0x0007293f) aid_image_placing_area

0x340f,	// (0x000704ad) field_vitu_entry_pane_g1_ParamLimits

0x340f,	// (0x000704ad) field_vitu_entry_pane_g1

0x340f,	// (0x000704ad) field_vitu_entry_pane_g2_ParamLimits

0x340f,	// (0x000704ad) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x0007c845) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x0007c845) field_vitu_entry_pane_g

0x747e,	// (0x0007451c) cell_vitu_itu_pane_g1_ParamLimits

0x7461,	// (0x000744ff) cell_vitu_itu_pane_t3_ParamLimits

0x7461,	// (0x000744ff) cell_vitu_itu_pane_t3

0xcc0d,	// (0x00079cab) mp4_progress_pane_t1_ParamLimits

0xcc24,	// (0x00079cc2) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x0007c8de) mp4_progress_pane_t_ParamLimits

0xcc3b,	// (0x00079cd9) mup_progress_pane_cp04_ParamLimits

0x8173,	// (0x00075211) main_myfav_hc_pane_t5_ParamLimits

0x8173,	// (0x00075211) main_myfav_hc_pane_t5

0xb203,	// (0x000782a1) aid_zoom_text_primary

0x2078,	// (0x0006f116) popup_adpt_find_window_ParamLimits

0xb23c,	// (0x000782da) main_cam_set_pane

0x7c90,	// (0x00074d2e) cam4_zoom_pane_ParamLimits

0x7c90,	// (0x00074d2e) cam4_zoom_pane

0x827c,	// (0x0007531a) main_cam_set_pane_g1_ParamLimits

0x827c,	// (0x0007531a) main_cam_set_pane_g1

0x828a,	// (0x00075328) main_cam_set_pane_g2_ParamLimits

0x828a,	// (0x00075328) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x0007c99f) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x0007c99f) main_cam_set_pane_g

0x82a9,	// (0x00075347) main_cam_set_pane_t1_ParamLimits

0x82a9,	// (0x00075347) main_cam_set_pane_t1

0x82bb,	// (0x00075359) main_cset_listscroll_pane_ParamLimits

0x82bb,	// (0x00075359) main_cset_listscroll_pane

0x82dd,	// (0x0007537b) main_cset_slider_pane_ParamLimits

0x82dd,	// (0x0007537b) main_cset_slider_pane

0xce86,	// (0x00079f24) main_cset_list_pane_ParamLimits

0xce86,	// (0x00079f24) main_cset_list_pane

0xce96,	// (0x00079f34) scroll_pane_cp028

0x8301,	// (0x0007539f) aid_area_touch_slider

0x831d,	// (0x000753bb) cset_slider_pane

0x8340,	// (0x000753de) main_cset_slider_pane_g1

0x8355,	// (0x000753f3) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x0007c9a4) main_cset_slider_pane_g

0xcecf,	// (0x00079f6d) main_cset_slider_pane_t1

0x8411,	// (0x000754af) main_cset_slider_pane_t2

0x842b,	// (0x000754c9) main_cset_slider_pane_t3

0x8445,	// (0x000754e3) main_cset_slider_pane_t4

0x845f,	// (0x000754fd) main_cset_slider_pane_t5

0x8479,	// (0x00075517) main_cset_slider_pane_t6

0x848e,	// (0x0007552c) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0007c9c9) main_cset_slider_pane_t

0x8592,	// (0x00075630) cset_list_set_pane_ParamLimits

0x8592,	// (0x00075630) cset_list_set_pane

0xcf69,	// (0x0007a007) aid_position_infowindow_above

0xcf71,	// (0x0007a00f) aid_position_infowindow_below

0x85a3,	// (0x00075641) cset_list_set_pane_g1_ParamLimits

0x85a3,	// (0x00075641) cset_list_set_pane_g1

0x2293,	// (0x0006f331) cset_list_set_pane_g3_ParamLimits

0x2293,	// (0x0006f331) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0007c9e8) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0007c9e8) cset_list_set_pane_g

0x22a2,	// (0x0006f340) cset_list_set_pane_t1_ParamLimits

0x22a2,	// (0x0006f340) cset_list_set_pane_t1

0xb23c,	// (0x000782da) list_highlight_pane_cp021_ParamLimits

0xb23c,	// (0x000782da) list_highlight_pane_cp021

0xbf34,	// (0x00078fd2) cset_slider_pane_g1

0xbf46,	// (0x00078fe4) cset_slider_pane_g2

0xbf3d,	// (0x00078fdb) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x0007c9ed) cset_slider_pane_g

0xef0e,	// (0x0007bfac) aid_area_touch_cam4_zoom

0xef16,	// (0x0007bfb4) cam4_zoom_cont_pane

0xef1e,	// (0x0007bfbc) cam4_zoom_pane_g1

0xef26,	// (0x0007bfc4) cam4_zoom_pane_g2

0x85af,	// (0x0007564d) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x0007c9f4) cam4_zoom_pane_g

0xcf79,	// (0x0007a017) cam4_zoom_cont_pane_g1

0xcf82,	// (0x0007a020) cam4_zoom_cont_pane_g2

0xcf8b,	// (0x0007a029) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0007c9fb) cam4_zoom_cont_pane_g

0x7b52,	// (0x00074bf0) call4_image_pane_ParamLimits

0x7b52,	// (0x00074bf0) call4_image_pane

0xcc7d,	// (0x00079d1b) call4_windows_conf_pane_ParamLimits

0xcc90,	// (0x00079d2e) popup_call4_audio_in_window_ParamLimits

0xcc90,	// (0x00079d2e) popup_call4_audio_in_window

0x2aaf,	// (0x0006fb4d) bg_popup_call2_act_pane_cp02

0xccce,	// (0x00079d6c) call4_list_conf_pane

0xb384,	// (0x00078422) call4_image_pane_g1

0xb384,	// (0x00078422) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x0007c467) call4_image_pane_g

0xcf94,	// (0x0007a032) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf94,	// (0x0007a032) list_single_graphic_popup_conf4_pane

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp022

0xcfa7,	// (0x0007a045) list_single_graphic_popup_conf4_pane_g1

0xbb6e,	// (0x00078c0c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x0007ca02) list_single_graphic_popup_conf4_pane_g

0xcfaf,	// (0x0007a04d) list_single_graphic_popup_conf4_pane_t1

0x425e,	// (0x000712fc) popup_vtel_slider_window_ParamLimits

0x425e,	// (0x000712fc) popup_vtel_slider_window

0xcc47,	// (0x00079ce5) dialer2_ne_pane_t2_ParamLimits

0xcc47,	// (0x00079ce5) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x0007c8e3) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x0007c8e3) dialer2_ne_pane_t

0x0633,	// (0x0006d6d1) bg_popup_sub_pane_cp010_ParamLimits

0x0633,	// (0x0006d6d1) bg_popup_sub_pane_cp010

0x85b7,	// (0x00075655) popup_vtel_slider_window_g1_ParamLimits

0x85b7,	// (0x00075655) popup_vtel_slider_window_g1

0x85ca,	// (0x00075668) popup_vtel_slider_window_g2_ParamLimits

0x85ca,	// (0x00075668) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x0007ca07) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x0007ca07) popup_vtel_slider_window_g

0x861e,	// (0x000756bc) vtel_slider_pane_ParamLimits

0x861e,	// (0x000756bc) vtel_slider_pane

0x8640,	// (0x000756de) vtel_slider_pane_g1_ParamLimits

0x8640,	// (0x000756de) vtel_slider_pane_g1

0x8654,	// (0x000756f2) vtel_slider_pane_g2_ParamLimits

0x8654,	// (0x000756f2) vtel_slider_pane_g2

0x866c,	// (0x0007570a) vtel_slider_pane_g3_ParamLimits

0x866c,	// (0x0007570a) vtel_slider_pane_g3

0x8640,	// (0x000756de) vtel_slider_pane_g4_ParamLimits

0x8640,	// (0x000756de) vtel_slider_pane_g4

0x8682,	// (0x00075720) vtel_slider_pane_g5_ParamLimits

0x8682,	// (0x00075720) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x0007ca10) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x0007ca10) vtel_slider_pane_g

0xb23c,	// (0x000782da) main_gallery2_pane

0x7e55,	// (0x00074ef3) aid_size_row_itut2_dropdow_list_ParamLimits

0x7e55,	// (0x00074ef3) aid_size_row_itut2_dropdow_list

0x7eb1,	// (0x00074f4f) grid_vitu2_function_top_pane_ParamLimits

0x7eb1,	// (0x00074f4f) grid_vitu2_function_top_pane

0x7ef9,	// (0x00074f97) popup_vitu2_dropdown_list_window_ParamLimits

0x7ef9,	// (0x00074f97) popup_vitu2_dropdown_list_window

0x7f1a,	// (0x00074fb8) popup_vitu2_match_list_window

0x8698,	// (0x00075736) cell_vitu2_function_top_pane_ParamLimits

0x8698,	// (0x00075736) cell_vitu2_function_top_pane

0x86b0,	// (0x0007574e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x86b0,	// (0x0007574e) cell_vitu2_function_top_pane_cp01

0x86cc,	// (0x0007576a) cell_vitu2_function_top_wide_pane_ParamLimits

0x86cc,	// (0x0007576a) cell_vitu2_function_top_wide_pane

0xb23c,	// (0x000782da) bg_button_pane_cp012

0x86e9,	// (0x00075787) cell_vitu2_function_top_pane_g1

0xef2e,	// (0x0007bfcc) bg_button_pane_cp013_ParamLimits

0xef2e,	// (0x0007bfcc) bg_button_pane_cp013

0x86fd,	// (0x0007579b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x86fd,	// (0x0007579b) cell_vitu2_function_top_wide_pane_g1

0xb23c,	// (0x000782da) bg_popup_sub_pane_cp20

0x8715,	// (0x000757b3) list_vitu2_match_list_pane

0xcd6a,	// (0x00079e08) bg_popup_sub_pane_cp20_g1

0xcd72,	// (0x00079e10) bg_popup_sub_pane_cp20_g2

0xb5e0,	// (0x0007867e) bg_popup_sub_pane_cp20_g3

0xcd7a,	// (0x00079e18) bg_popup_sub_pane_cp20_g4

0xb5c0,	// (0x0007865e) bg_popup_sub_pane_cp20_g5

0xcfc5,	// (0x0007a063) bg_popup_sub_pane_cp20_g6

0xcd8a,	// (0x00079e28) bg_popup_sub_pane_cp20_g7

0xcd92,	// (0x00079e30) bg_popup_sub_pane_cp20_g8

0xcd9a,	// (0x00079e38) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x0007ca1b) bg_popup_sub_pane_cp20_g

0xef4a,	// (0x0007bfe8) list_vitu2_match_list_item_pane_ParamLimits

0xef4a,	// (0x0007bfe8) list_vitu2_match_list_item_pane

0xef5c,	// (0x0007bffa) list_vitu2_match_list_item_pane_t1

0x2aaf,	// (0x0006fb4d) bg_popup_sub_pane_cp21

0xb30c,	// (0x000783aa) grid_vitu2_dropdown_list_pane

0x8733,	// (0x000757d1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8733,	// (0x000757d1) cell_vitu2_dropdown_list_char_pane

0x8751,	// (0x000757ef) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8751,	// (0x000757ef) cell_vitu2_dropdown_list_ctrl_pane

0xcfcd,	// (0x0007a06b) cell_vitu2_dropdown_list_char_pane_g1

0xcfd6,	// (0x0007a074) cell_vitu2_dropdown_list_char_pane_g2

0xcfdf,	// (0x0007a07d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0007ca38) cell_vitu2_dropdown_list_char_pane_g

0x8779,	// (0x00075817) cell_vitu2_dropdown_list_char_pane_t1

0x8787,	// (0x00075825) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8787,	// (0x00075825) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8797,	// (0x00075835) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8797,	// (0x00075835) cell_vitu2_dropdown_list_ctrl_pane_g2

0x87a8,	// (0x00075846) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x87a8,	// (0x00075846) cell_vitu2_dropdown_list_ctrl_pane_g3

0x87b8,	// (0x00075856) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x87b8,	// (0x00075856) cell_vitu2_dropdown_list_ctrl_pane_g4

0x340f,	// (0x000704ad) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x340f,	// (0x000704ad) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0007ca3f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0007ca3f) cell_vitu2_dropdown_list_ctrl_pane_g

0x87d4,	// (0x00075872) aid_size_cell_gallery2_ParamLimits

0x87d4,	// (0x00075872) aid_size_cell_gallery2

0x87f2,	// (0x00075890) grid_gallery2_pane_ParamLimits

0x87f2,	// (0x00075890) grid_gallery2_pane

0x7203,	// (0x000742a1) scroll_pane_cp029_ParamLimits

0x7203,	// (0x000742a1) scroll_pane_cp029

0x8806,	// (0x000758a4) cell_gallery2_pane_ParamLimits

0x8806,	// (0x000758a4) cell_gallery2_pane

0xcfe8,	// (0x0007a086) cell_gallery2_pane_g2

0x885f,	// (0x000758fd) cell_gallery2_pane_g3

0xcff0,	// (0x0007a08e) cell_gallery2_pane_g4

0xcff8,	// (0x0007a096) cell_gallery2_pane_g5

0xb30c,	// (0x000783aa) grid_highlight_pane_cp10

0x7f1a,	// (0x00074fb8) popup_vitu2_match_list_window_ParamLimits

0x7f2b,	// (0x00074fc9) popup_vitu2_query_window_ParamLimits

0x7f2b,	// (0x00074fc9) popup_vitu2_query_window

0x2aaf,	// (0x0006fb4d) bg_vitu2_candi_button_pane

0xcfcd,	// (0x0007a06b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcfd6,	// (0x0007a074) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcfdf,	// (0x0007a07d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x22b7,	// (0x0006f355) bg_button_pane_cp015

0x8867,	// (0x00075905) bg_button_pane_cp016

0x8873,	// (0x00075911) bg_button_pane_cp017

0x0d3a,	// (0x0006ddd8) bg_popup_sub_pane_cp22

0xd000,	// (0x0007a09e) popup_vitu2_query_window_g1

0x22eb,	// (0x0006f389) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0007ca4a) popup_vitu2_query_window_g

0x22ff,	// (0x0006f39d) popup_vitu2_query_window_t1_ParamLimits

0x22ff,	// (0x0006f39d) popup_vitu2_query_window_t1

0x2332,	// (0x0006f3d0) popup_vitu2_query_window_t2_ParamLimits

0x2332,	// (0x0006f3d0) popup_vitu2_query_window_t2

0x2344,	// (0x0006f3e2) popup_vitu2_query_window_t3_ParamLimits

0x2344,	// (0x0006f3e2) popup_vitu2_query_window_t3

0x889a,	// (0x00075938) popup_vitu2_query_window_t4_ParamLimits

0x889a,	// (0x00075938) popup_vitu2_query_window_t4

0x88ac,	// (0x0007594a) popup_vitu2_query_window_t5_ParamLimits

0x88ac,	// (0x0007594a) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0007ca51) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0007ca51) popup_vitu2_query_window_t

0xce7e,	// (0x00079f1c) main_cset_text_pane

0x8301,	// (0x0007539f) aid_area_touch_slider_ParamLimits

0x831d,	// (0x000753bb) cset_slider_pane_ParamLimits

0x8340,	// (0x000753de) main_cset_slider_pane_g1_ParamLimits

0x8355,	// (0x000753f3) main_cset_slider_pane_g2_ParamLimits

0xce9f,	// (0x00079f3d) main_cset_slider_pane_g3_ParamLimits

0xce9f,	// (0x00079f3d) main_cset_slider_pane_g3

0x836a,	// (0x00075408) main_cset_slider_pane_g4_ParamLimits

0x836a,	// (0x00075408) main_cset_slider_pane_g4

0x8379,	// (0x00075417) main_cset_slider_pane_g5_ParamLimits

0x8379,	// (0x00075417) main_cset_slider_pane_g5

0x8385,	// (0x00075423) main_cset_slider_pane_g6_ParamLimits

0x8385,	// (0x00075423) main_cset_slider_pane_g6

0xf906,	// (0x0007c9a4) main_cset_slider_pane_g_ParamLimits

0xcecf,	// (0x00079f6d) main_cset_slider_pane_t1_ParamLimits

0x8411,	// (0x000754af) main_cset_slider_pane_t2_ParamLimits

0x842b,	// (0x000754c9) main_cset_slider_pane_t3_ParamLimits

0x8445,	// (0x000754e3) main_cset_slider_pane_t4_ParamLimits

0x845f,	// (0x000754fd) main_cset_slider_pane_t5_ParamLimits

0x8479,	// (0x00075517) main_cset_slider_pane_t6_ParamLimits

0x848e,	// (0x0007552c) main_cset_slider_pane_t7_ParamLimits

0x84b8,	// (0x00075556) main_cset_slider_pane_t8_ParamLimits

0x84b8,	// (0x00075556) main_cset_slider_pane_t8

0x84e0,	// (0x0007557e) main_cset_slider_pane_t9_ParamLimits

0x84e0,	// (0x0007557e) main_cset_slider_pane_t9

0x8508,	// (0x000755a6) main_cset_slider_pane_t10_ParamLimits

0x8508,	// (0x000755a6) main_cset_slider_pane_t10

0x8530,	// (0x000755ce) main_cset_slider_pane_t11_ParamLimits

0x8530,	// (0x000755ce) main_cset_slider_pane_t11

0x8558,	// (0x000755f6) main_cset_slider_pane_t12_ParamLimits

0x8558,	// (0x000755f6) main_cset_slider_pane_t12

0x8575,	// (0x00075613) main_cset_slider_pane_t13_ParamLimits

0x8575,	// (0x00075613) main_cset_slider_pane_t13

0xf92b,	// (0x0007c9c9) main_cset_slider_pane_t_ParamLimits

0x2aaf,	// (0x0006fb4d) bg_popup_sub_pane_cp011

0xd00c,	// (0x0007a0aa) main_cset_text_pane_g1

0xd014,	// (0x0007a0b2) main_cset_text_pane_t1

0xd022,	// (0x0007a0c0) main_cset_text_pane_t2

0xd030,	// (0x0007a0ce) main_cset_text_pane_t3

0xd03e,	// (0x0007a0dc) main_cset_text_pane_t4

0xd04c,	// (0x0007a0ea) main_cset_text_pane_t5

0xd05a,	// (0x0007a0f8) main_cset_text_pane_t6

0xd068,	// (0x0007a106) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0007ca60) main_cset_text_pane_t

0x2aaf,	// (0x0006fb4d) main_cam4_burst_pane

0x2aaf,	// (0x0006fb4d) main_cam5_pane

0xce54,	// (0x00079ef2) bg_button_pane_cp019

0xce5d,	// (0x00079efb) bg_button_pane_cp020

0xceab,	// (0x00079f49) main_cset_slider_pane_g7_ParamLimits

0xceab,	// (0x00079f49) main_cset_slider_pane_g7

0xceb7,	// (0x00079f55) main_cset_slider_pane_g8_ParamLimits

0xceb7,	// (0x00079f55) main_cset_slider_pane_g8

0x8399,	// (0x00075437) main_cset_slider_pane_g9_ParamLimits

0x8399,	// (0x00075437) main_cset_slider_pane_g9

0x83a5,	// (0x00075443) main_cset_slider_pane_g10_ParamLimits

0x83a5,	// (0x00075443) main_cset_slider_pane_g10

0x83b1,	// (0x0007544f) main_cset_slider_pane_g11_ParamLimits

0x83b1,	// (0x0007544f) main_cset_slider_pane_g11

0x83bd,	// (0x0007545b) main_cset_slider_pane_g12_ParamLimits

0x83bd,	// (0x0007545b) main_cset_slider_pane_g12

0x83c9,	// (0x00075467) main_cset_slider_pane_g13_ParamLimits

0x83c9,	// (0x00075467) main_cset_slider_pane_g13

0x83d5,	// (0x00075473) main_cset_slider_pane_g14_ParamLimits

0x83d5,	// (0x00075473) main_cset_slider_pane_g14

0x83e1,	// (0x0007547f) main_cset_slider_pane_g15_ParamLimits

0x83e1,	// (0x0007547f) main_cset_slider_pane_g15

0xcef7,	// (0x00079f95) main_cset_slider_pane_t14_ParamLimits

0xcef7,	// (0x00079f95) main_cset_slider_pane_t14

0xcf30,	// (0x00079fce) main_cset_slider_pane_t15_ParamLimits

0xcf30,	// (0x00079fce) main_cset_slider_pane_t15

0x88be,	// (0x0007595c) aid_cam4_burst_size_cell_ParamLimits

0x88be,	// (0x0007595c) aid_cam4_burst_size_cell

0x88de,	// (0x0007597c) grid_cam4_burst_pane_ParamLimits

0x88de,	// (0x0007597c) grid_cam4_burst_pane

0x8904,	// (0x000759a2) linegrid_cam4_burst_pane_ParamLimits

0x8904,	// (0x000759a2) linegrid_cam4_burst_pane

0x8926,	// (0x000759c4) scroll_pane_cp30_ParamLimits

0x8926,	// (0x000759c4) scroll_pane_cp30

0x8932,	// (0x000759d0) cell_cam4_burst_pane_ParamLimits

0x8932,	// (0x000759d0) cell_cam4_burst_pane

0xd076,	// (0x0007a114) linegrid_cam4_burst_pane_g1_ParamLimits

0xd076,	// (0x0007a114) linegrid_cam4_burst_pane_g1

0x8979,	// (0x00075a17) linegrid_cam4_burst_pane_g2_ParamLimits

0x8979,	// (0x00075a17) linegrid_cam4_burst_pane_g2

0xd083,	// (0x0007a121) linegrid_cam4_burst_pane_g3_ParamLimits

0xd083,	// (0x0007a121) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0007ca6f) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0007ca6f) linegrid_cam4_burst_pane_g

0x898a,	// (0x00075a28) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x898a,	// (0x00075a28) linegrid_cam4_burst_pane_g3_copy1

0xd090,	// (0x0007a12e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd090,	// (0x0007a12e) linegrid_cam4_burst_pane_g4

0x89a4,	// (0x00075a42) linegrid_cam4_burst_pane_g5_ParamLimits

0x89a4,	// (0x00075a42) linegrid_cam4_burst_pane_g5

0x89b5,	// (0x00075a53) linegrid_cam4_burst_pane_g6_ParamLimits

0x89b5,	// (0x00075a53) linegrid_cam4_burst_pane_g6

0xd09d,	// (0x0007a13b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd09d,	// (0x0007a13b) linegrid_cam4_burst_pane_g7

0x89c6,	// (0x00075a64) cell_cam4_burst_pane_g1

0xd0b6,	// (0x0007a154) main_cam5_pane_t1_ParamLimits

0xd0b6,	// (0x0007a154) main_cam5_pane_t1

0xd0c8,	// (0x0007a166) main_cam5_pane_t2_ParamLimits

0xd0c8,	// (0x0007a166) main_cam5_pane_t2

0xd0da,	// (0x0007a178) main_cam5_pane_t3_ParamLimits

0xd0da,	// (0x0007a178) main_cam5_pane_t3

0xd0ec,	// (0x0007a18a) main_cam5_pane_t4_ParamLimits

0xd0ec,	// (0x0007a18a) main_cam5_pane_t4

0xd102,	// (0x0007a1a0) main_cam5_pane_t5_ParamLimits

0xd102,	// (0x0007a1a0) main_cam5_pane_t5

0xd114,	// (0x0007a1b2) main_cam5_pane_t6_ParamLimits

0xd114,	// (0x0007a1b2) main_cam5_pane_t6

0xd126,	// (0x0007a1c4) main_cam5_pane_t7_ParamLimits

0xd126,	// (0x0007a1c4) main_cam5_pane_t7

0xd138,	// (0x0007a1d6) main_cam5_pane_t8_ParamLimits

0xd138,	// (0x0007a1d6) main_cam5_pane_t8

0xd154,	// (0x0007a1f2) main_cam5_pane_t9_ParamLimits

0xd154,	// (0x0007a1f2) main_cam5_pane_t9

0xd166,	// (0x0007a204) main_cam5_pane_t10_ParamLimits

0xd166,	// (0x0007a204) main_cam5_pane_t10

0xd178,	// (0x0007a216) main_cam5_pane_t11_ParamLimits

0xd178,	// (0x0007a216) main_cam5_pane_t11

0xd18a,	// (0x0007a228) main_cam5_pane_t12_ParamLimits

0xd18a,	// (0x0007a228) main_cam5_pane_t12

0xd19f,	// (0x0007a23d) main_cam5_pane_t13_ParamLimits

0xd19f,	// (0x0007a23d) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0007ca7b) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0007ca7b) main_cam5_pane_t

0x2c16,	// (0x0006fcb4) popup_scut_keymap_window_ParamLimits

0x2c16,	// (0x0006fcb4) popup_scut_keymap_window

0x89db,	// (0x00075a79) aid_size_cell_brow_shortcut

0xb30c,	// (0x000783aa) bg_popup_window_pane_cp010

0x89e7,	// (0x00075a85) grid_scut_pane

0x89f1,	// (0x00075a8f) cell_scut_pane_ParamLimits

0x89f1,	// (0x00075a8f) cell_scut_pane

0x8a06,	// (0x00075aa4) cell_scut_pane_g1

0xd1bc,	// (0x0007a25a) cell_scut_pane_t1

0xd1cb,	// (0x0007a269) cell_scut_pane_t2

0x8a0f,	// (0x00075aad) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0007ca96) cell_scut_pane_t

0x6872,	// (0x00073910) main_mup3_pane_g8_ParamLimits

0x6872,	// (0x00073910) main_mup3_pane_g8

0x7e69,	// (0x00074f07) area_vitu2_query_pane_ParamLimits

0x7e69,	// (0x00074f07) area_vitu2_query_pane

0x22c8,	// (0x0006f366) input_focus_pane_cp08

0xd1da,	// (0x0007a278) area_vitu2_query_pane_g1

0x23c2,	// (0x0006f460) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0007ca9d) area_vitu2_query_pane_g

0x8a1d,	// (0x00075abb) area_vitu2_query_pane_t1_ParamLimits

0x8a1d,	// (0x00075abb) area_vitu2_query_pane_t1

0x8a2f,	// (0x00075acd) area_vitu2_query_pane_t2_ParamLimits

0x8a2f,	// (0x00075acd) area_vitu2_query_pane_t2

0x23d1,	// (0x0006f46f) area_vitu2_query_pane_t3_ParamLimits

0x23d1,	// (0x0006f46f) area_vitu2_query_pane_t3

0xd1e6,	// (0x0007a284) area_vitu2_query_pane_t4_ParamLimits

0xd1e6,	// (0x0007a284) area_vitu2_query_pane_t4

0xd20e,	// (0x0007a2ac) area_vitu2_query_pane_t5_ParamLimits

0xd20e,	// (0x0007a2ac) area_vitu2_query_pane_t5

0xd236,	// (0x0007a2d4) area_vitu2_query_pane_t6_ParamLimits

0xd236,	// (0x0007a2d4) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0007caa2) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0007caa2) area_vitu2_query_pane_t

0x8a41,	// (0x00075adf) bg_button_pane_cp018

0x8a4d,	// (0x00075aeb) bg_button_pane_cp021

0x23f9,	// (0x0006f497) bg_button_pane_cp022

0x2418,	// (0x0006f4b6) input_focus_pane_cp09

0x5286,	// (0x00072324) aid_size_touch_mv_arrow_left

0xbca4,	// (0x00078d42) aid_size_touch_mv_arrow_right

0x83f9,	// (0x00075497) main_cset_slider_pane_g16_ParamLimits

0x83f9,	// (0x00075497) main_cset_slider_pane_g16

0x8405,	// (0x000754a3) main_cset_slider_pane_g17_ParamLimits

0x8405,	// (0x000754a3) main_cset_slider_pane_g17

0x89c6,	// (0x00075a64) cell_cam4_burst_pane_g1_ParamLimits

0x2aaf,	// (0x0006fb4d) compa_mode_pane

0x85da,	// (0x00075678) popup_vtel_slider_window_g3_ParamLimits

0x85da,	// (0x00075678) popup_vtel_slider_window_g3

0x85f1,	// (0x0007568f) popup_vtel_slider_window_g4_ParamLimits

0x85f1,	// (0x0007568f) popup_vtel_slider_window_g4

0x8608,	// (0x000756a6) popup_vtel_slider_window_t1_ParamLimits

0x8608,	// (0x000756a6) popup_vtel_slider_window_t1

0x2aaf,	// (0x0006fb4d) main_cl_pane

0xcae7,	// (0x00079b85) popup_imed_adjust2_window_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_tb_trans_pane_cp05_ParamLimits

0x72d4,	// (0x00074372) popup_imed_adjust2_window_g1_ParamLimits

0x72e3,	// (0x00074381) popup_imed_adjust2_window_g2_ParamLimits

0x72e3,	// (0x00074381) popup_imed_adjust2_window_g2

0x72ef,	// (0x0007438d) popup_imed_adjust2_window_g3_ParamLimits

0x72ef,	// (0x0007438d) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x0007c809) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x0007c809) popup_imed_adjust2_window_g

0x72fb,	// (0x00074399) popup_imed_adjust2_window_t1_ParamLimits

0x7313,	// (0x000743b1) slider_imed_adjust_pane_ParamLimits

0x7327,	// (0x000743c5) slider_imed_adjust_pane_g1_ParamLimits

0x7337,	// (0x000743d5) slider_imed_adjust_pane_g2_ParamLimits

0x7347,	// (0x000743e5) slider_imed_adjust_pane_g3_ParamLimits

0x7358,	// (0x000743f6) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x0007c810) slider_imed_adjust_pane_g_ParamLimits

0x7c3f,	// (0x00074cdd) aid_touch_area_cam4_ParamLimits

0x7c3f,	// (0x00074cdd) aid_touch_area_cam4

0xee43,	// (0x0007bee1) battery_pane_cp01

0x7cd7,	// (0x00074d75) main_camera4_pane_g6_ParamLimits

0x7cd7,	// (0x00074d75) main_camera4_pane_g6

0x7cf8,	// (0x00074d96) main_camera4_pane_t2_ParamLimits

0x7cf8,	// (0x00074d96) main_camera4_pane_t2

0x0001,

0xf879,	// (0x0007c917) main_camera4_pane_t_ParamLimits

0xf879,	// (0x0007c917) main_camera4_pane_t

0x7d26,	// (0x00074dc4) aid_touch_area_vid4_ParamLimits

0x7d26,	// (0x00074dc4) aid_touch_area_vid4

0x7d68,	// (0x00074e06) main_video4_pane_g5_ParamLimits

0x7d68,	// (0x00074e06) main_video4_pane_g5

0x7d89,	// (0x00074e27) vid4_progress_pane_ParamLimits

0x7d89,	// (0x00074e27) vid4_progress_pane

0xcec3,	// (0x00079f61) main_cset_slider_pane_g18_ParamLimits

0xcec3,	// (0x00079f61) main_cset_slider_pane_g18

0xd0aa,	// (0x0007a148) cell_cam4_burst_pane_g2_ParamLimits

0xd0aa,	// (0x0007a148) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0007ca76) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0007ca76) cell_cam4_burst_pane_g

0x35d4,	// (0x00070672) bg_cl_pane_ParamLimits

0x35d4,	// (0x00070672) bg_cl_pane

0x8a59,	// (0x00075af7) cl_header_pane_ParamLimits

0x8a59,	// (0x00075af7) cl_header_pane

0x8a6d,	// (0x00075b0b) cl_listscroll_pane_ParamLimits

0x8a6d,	// (0x00075b0b) cl_listscroll_pane

0xd282,	// (0x0007a320) bg_cl_pane_g1

0xd28a,	// (0x0007a328) bg_cl_pane_g2

0xd292,	// (0x0007a330) bg_cl_pane_g3

0xd29a,	// (0x0007a338) bg_cl_pane_g4

0xd2a2,	// (0x0007a340) bg_cl_pane_g5

0xd2aa,	// (0x0007a348) bg_cl_pane_g6

0xd2b2,	// (0x0007a350) bg_cl_pane_g7

0xd2ba,	// (0x0007a358) bg_cl_pane_g8

0xd2c2,	// (0x0007a360) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0007cab1) bg_cl_pane_g

0x8a7d,	// (0x00075b1b) aid_height_cl_leading_ParamLimits

0x8a7d,	// (0x00075b1b) aid_height_cl_leading

0x8a89,	// (0x00075b27) aid_height_cl_text_ParamLimits

0x8a89,	// (0x00075b27) aid_height_cl_text

0xb23c,	// (0x000782da) bg_cl_header_pane_ParamLimits

0xb23c,	// (0x000782da) bg_cl_header_pane

0x8aa8,	// (0x00075b46) cl_header_pane_g1_ParamLimits

0x8aa8,	// (0x00075b46) cl_header_pane_g1

0x8abe,	// (0x00075b5c) cl_header_pane_t1_ParamLimits

0x8abe,	// (0x00075b5c) cl_header_pane_t1

0xd2ca,	// (0x0007a368) cl_list_pane

0xd2d3,	// (0x0007a371) hc_scroll_pane_cp01

0xb5c0,	// (0x0007865e) bg_cl_header_pane_g1

0xcd6a,	// (0x00079e08) bg_cl_header_pane_g2

0xb5e0,	// (0x0007867e) bg_cl_header_pane_g3

0xcd7a,	// (0x00079e18) bg_cl_header_pane_g4

0xcd72,	// (0x00079e10) bg_cl_header_pane_g5

0xcfc5,	// (0x0007a063) bg_cl_header_pane_g6

0xcd92,	// (0x00079e30) bg_cl_header_pane_g7

0xcd9a,	// (0x00079e38) bg_cl_header_pane_g8

0xcd8a,	// (0x00079e28) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0007cac4) bg_cl_header_pane_g

0x8ad7,	// (0x00075b75) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8ad7,	// (0x00075b75) hc_cl_list_double_graphic_heading_pane

0x8ae7,	// (0x00075b85) hc_cl_list_single_graphic_pane_ParamLimits

0x8ae7,	// (0x00075b85) hc_cl_list_single_graphic_pane

0x8afa,	// (0x00075b98) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8afa,	// (0x00075b98) hc_cl_list_single_graphic_pane_g1

0x8b06,	// (0x00075ba4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8b06,	// (0x00075ba4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0007cad7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0007cad7) hc_cl_list_single_graphic_pane_g

0x8b1a,	// (0x00075bb8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8b1a,	// (0x00075bb8) hc_cl_list_single_graphic_pane_t1

0x8afa,	// (0x00075b98) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8afa,	// (0x00075b98) hc_cl_list_double_graphic_heading_pane_g1

0x8b2f,	// (0x00075bcd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8b2f,	// (0x00075bcd) hc_cl_list_double_graphic_heading_pane_g2

0x8b43,	// (0x00075be1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8b43,	// (0x00075be1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0007cadc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0007cadc) hc_cl_list_double_graphic_heading_pane_g

0x8b57,	// (0x00075bf5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8b57,	// (0x00075bf5) hc_cl_list_double_graphic_heading_pane_t1

0x8b6c,	// (0x00075c0a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8b6c,	// (0x00075c0a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0007cae3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0007cae3) hc_cl_list_double_graphic_heading_pane_t

0xef77,	// (0x0007c015) vid4_progress_pane_g1

0xef86,	// (0x0007c024) vid4_progress_pane_g2

0xef95,	// (0x0007c033) vid4_progress_pane_g3

0xefa4,	// (0x0007c042) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0007cae8) vid4_progress_pane_g

0xefb0,	// (0x0007c04e) vid4_progress_pane_t1

0xefc6,	// (0x0007c064) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0007caf3) vid4_progress_pane_t

0xeff0,	// (0x0007c08e) wait_bar_pane_cp07

0x0f82,	// (0x0006e020) blid_firmament_pane_ParamLimits

0x0fc3,	// (0x0006e061) popup_blid_sat_info2_window_g1

0x0fe7,	// (0x0006e085) popup_blid_sat_info2_window_t3

0x0ff5,	// (0x0006e093) popup_blid_sat_info2_window_t4

0x1003,	// (0x0006e0a1) popup_blid_sat_info2_window_t5

0x1011,	// (0x0006e0af) popup_blid_sat_info2_window_t6

0x1021,	// (0x0006e0bf) popup_blid_sat_info2_window_t7

0x102f,	// (0x0006e0cd) popup_blid_sat_info2_window_t8

0x103d,	// (0x0006e0db) popup_blid_sat_info2_window_t9

0x104b,	// (0x0006e0e9) popup_blid_sat_info2_window_t10

0x1106,	// (0x0006e1a4) aid_firma_cardinal_ParamLimits

0x111a,	// (0x0006e1b8) blid_firmament_pane_t1_ParamLimits

0x1131,	// (0x0006e1cf) blid_firmament_pane_t2_ParamLimits

0x1148,	// (0x0006e1e6) blid_firmament_pane_t3_ParamLimits

0x115f,	// (0x0006e1fd) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x0007c702) blid_firmament_pane_t_ParamLimits

0x1176,	// (0x0006e214) blid_sat_info_pane_ParamLimits

0xb23c,	// (0x000782da) main_cam_set_pane_ParamLimits

0x7153,	// (0x000741f1) aid_size_cell_colour_35_ParamLimits

0x7173,	// (0x00074211) aid_size_cell_colour_112_ParamLimits

0x7193,	// (0x00074231) aid_size_cell_effect_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_tb_trans_pane_cp02_ParamLimits

0xb840,	// (0x000788de) heading_imed_pane_ParamLimits

0x71b3,	// (0x00074251) listscroll_imed_pane_ParamLimits

0xc881,	// (0x0007991f) popup_call2_audio_first_window_g5_ParamLimits

0xc881,	// (0x0007991f) popup_call2_audio_first_window_g5

0x790a,	// (0x000749a8) aid_size_touch_image3_arrow_left_ParamLimits

0x790a,	// (0x000749a8) aid_size_touch_image3_arrow_left

0x792a,	// (0x000749c8) aid_size_touch_image3_arrow_right_ParamLimits

0x792a,	// (0x000749c8) aid_size_touch_image3_arrow_right

0xefdb,	// (0x0007c079) vid4_progress_pane_t3

0x7629,	// (0x000746c7) main_hwr_training_symbol_option_pane_ParamLimits

0x7629,	// (0x000746c7) main_hwr_training_symbol_option_pane

0x7645,	// (0x000746e3) popup_hwr_training_preview_window_ParamLimits

0x7645,	// (0x000746e3) popup_hwr_training_preview_window

0x7692,	// (0x00074730) hwr_training_navi_pane_g5_ParamLimits

0x7692,	// (0x00074730) hwr_training_navi_pane_g5

0xcd58,	// (0x00079df6) popup_char_count_window

0xb23c,	// (0x000782da) bg_popup_sub_pane_cp20_ParamLimits

0x8715,	// (0x000757b3) list_vitu2_match_list_pane_ParamLimits

0x8724,	// (0x000757c2) vitu2_page_scroll_pane_ParamLimits

0x8724,	// (0x000757c2) vitu2_page_scroll_pane

0xd2f6,	// (0x0007a394) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd2f6,	// (0x0007a394) list_single_hwr_training_symbol_option_pane

0xd309,	// (0x0007a3a7) list_single_hwr_training_symbol_option_pane_g1

0xd311,	// (0x0007a3af) list_single_hwr_training_symbol_option_pane_t1

0xd31f,	// (0x0007a3bd) bg_button_pane_cp023

0xd328,	// (0x0007a3c6) bg_button_pane_cp024

0x8b81,	// (0x00075c1f) vitu2_page_scroll_pane_g1

0x8b89,	// (0x00075c27) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0007cafa) vitu2_page_scroll_pane_g

0x8b91,	// (0x00075c2f) vitu2_page_scroll_pane_t1

0x62d4,	// (0x00073372) popup_char_count_window_g1

0xd35b,	// (0x0007a3f9) popup_char_count_window_g2

0xd364,	// (0x0007a402) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0007caff) popup_char_count_window_g

0xd36d,	// (0x0007a40b) popup_char_count_window_t1

0x2aaf,	// (0x0006fb4d) main_vded2_pane

0x72c2,	// (0x00074360) aid_size_cell_imed_line

0x72cc,	// (0x0007436a) grid_imed_line_width_pane

0xeed8,	// (0x0007bf76) vid4_indicators_pane_g4

0xd37b,	// (0x0007a419) cell_imed_line_width_pane_ParamLimits

0xd37b,	// (0x0007a419) cell_imed_line_width_pane

0xd38d,	// (0x0007a42b) cell_imed_line_width_pane_g1

0xd396,	// (0x0007a434) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0007cb06) cell_imed_line_width_pane_g

0x8ba0,	// (0x00075c3e) main_vded2_pane_g1_ParamLimits

0x8ba0,	// (0x00075c3e) main_vded2_pane_g1

0x8bb6,	// (0x00075c54) main_vded2_pane_g2_ParamLimits

0x8bb6,	// (0x00075c54) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0007cb0b) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0007cb0b) main_vded2_pane_g

0x8bc6,	// (0x00075c64) vded2_slider_pane_ParamLimits

0x8bc6,	// (0x00075c64) vded2_slider_pane

0x8bd9,	// (0x00075c77) aid_size_touch_vded2_end

0x8be1,	// (0x00075c7f) aid_size_touch_vded2_playhead

0x8be9,	// (0x00075c87) aid_size_touch_vded2_start

0x8bf1,	// (0x00075c8f) vded2_slider_bg_pane

0x8bfa,	// (0x00075c98) vded2_slider_pane_g1

0x8c03,	// (0x00075ca1) vded2_slider_pane_g2

0x8c0b,	// (0x00075ca9) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0007cb10) vded2_slider_pane_g

0x8c14,	// (0x00075cb2) vded2_slider_bg_pane_g1

0x8c1d,	// (0x00075cbb) vded2_slider_bg_pane_g2

0x8c26,	// (0x00075cc4) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0007cb17) vded2_slider_bg_pane_g

0x5548,	// (0x000725e6) aid_postcard_touch_down_pane_ParamLimits

0x5548,	// (0x000725e6) aid_postcard_touch_down_pane

0x555a,	// (0x000725f8) aid_postcard_touch_up_pane_ParamLimits

0x555a,	// (0x000725f8) aid_postcard_touch_up_pane

0x2aaf,	// (0x0006fb4d) main_blid2_pane

0xcacf,	// (0x00079b6d) popup_blid2_search_window

0x2aaf,	// (0x0006fb4d) blid2_gps_pane

0x2aaf,	// (0x0006fb4d) blid2_navig_pane

0x2aaf,	// (0x0006fb4d) blid2_search_pane

0x2aaf,	// (0x0006fb4d) blid2_tripm_pane

0x8c2f,	// (0x00075ccd) blid2_search_pane_g1_ParamLimits

0x8c2f,	// (0x00075ccd) blid2_search_pane_g1

0x8c43,	// (0x00075ce1) blid2_search_pane_t1_ParamLimits

0x8c43,	// (0x00075ce1) blid2_search_pane_t1

0x8c55,	// (0x00075cf3) aid_size_cell_blid2_gps_ParamLimits

0x8c55,	// (0x00075cf3) aid_size_cell_blid2_gps

0x8c6d,	// (0x00075d0b) blid2_gps_pane_g1_ParamLimits

0x8c6d,	// (0x00075d0b) blid2_gps_pane_g1

0x8c81,	// (0x00075d1f) grid_blid2_satellite_pane_ParamLimits

0x8c81,	// (0x00075d1f) grid_blid2_satellite_pane

0x8c95,	// (0x00075d33) blid2_navig_pane_g1_ParamLimits

0x8c95,	// (0x00075d33) blid2_navig_pane_g1

0x8ca1,	// (0x00075d3f) blid2_navig_pane_t1_ParamLimits

0x8ca1,	// (0x00075d3f) blid2_navig_pane_t1

0x8cba,	// (0x00075d58) blid2_navig_pane_t2_ParamLimits

0x8cba,	// (0x00075d58) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0007cb1e) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0007cb1e) blid2_navig_pane_t

0x8cd3,	// (0x00075d71) blid2_navig_ring_pane_ParamLimits

0x8cd3,	// (0x00075d71) blid2_navig_ring_pane

0x8ce8,	// (0x00075d86) blid2_speed_pane_ParamLimits

0x8ce8,	// (0x00075d86) blid2_speed_pane

0x8cf4,	// (0x00075d92) blid2_tripm_pane_g1_ParamLimits

0x8cf4,	// (0x00075d92) blid2_tripm_pane_g1

0x8d09,	// (0x00075da7) blid2_tripm_pane_g2_ParamLimits

0x8d09,	// (0x00075da7) blid2_tripm_pane_g2

0x8d1d,	// (0x00075dbb) blid2_tripm_pane_g3_ParamLimits

0x8d1d,	// (0x00075dbb) blid2_tripm_pane_g3

0x8d31,	// (0x00075dcf) blid2_tripm_pane_g4_ParamLimits

0x8d31,	// (0x00075dcf) blid2_tripm_pane_g4

0x8d45,	// (0x00075de3) blid2_tripm_pane_g5_ParamLimits

0x8d45,	// (0x00075de3) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0007cb23) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0007cb23) blid2_tripm_pane_g

0x8d67,	// (0x00075e05) blid2_tripm_pane_t1_ParamLimits

0x8d67,	// (0x00075e05) blid2_tripm_pane_t1

0x8d7e,	// (0x00075e1c) blid2_tripm_pane_t2_ParamLimits

0x8d7e,	// (0x00075e1c) blid2_tripm_pane_t2

0x8d95,	// (0x00075e33) blid2_tripm_pane_t3_ParamLimits

0x8d95,	// (0x00075e33) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0007cb30) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0007cb30) blid2_tripm_pane_t

0x8dd8,	// (0x00075e76) cell_blid2_satellite_pane_ParamLimits

0x8dd8,	// (0x00075e76) cell_blid2_satellite_pane

0x8df0,	// (0x00075e8e) cell_blid2_satellite_pane_g1

0xd39e,	// (0x0007a43c) cell_blid2_satellite_pane_t1

0xb384,	// (0x00078422) blid2_speed_pane_g1

0xd3ac,	// (0x0007a44a) blid2_speed_pane_t1

0xd3ba,	// (0x0007a458) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0007cb39) blid2_speed_pane_t

0xb384,	// (0x00078422) blid2_navig_ring_pane_g1

0x8df9,	// (0x00075e97) blid2_navig_ring_pane_g2

0x8e01,	// (0x00075e9f) blid2_navig_ring_pane_g3

0x8e09,	// (0x00075ea7) blid2_navig_ring_pane_g4

0x8e11,	// (0x00075eaf) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0007cb3e) blid2_navig_ring_pane_g

0x2aaf,	// (0x0006fb4d) bg_popup_window_pane_cp011

0xd3c8,	// (0x0007a466) popup_blid2_search_window_g1

0xd3d0,	// (0x0007a46e) popup_blid2_search_window_t1

0xd3de,	// (0x0007a47c) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0007cb49) popup_blid2_search_window_t

0xb4cf,	// (0x0007856d) main_browser_pane_g1

0x35d4,	// (0x00070672) main_browser_pane_ParamLimits

0xb23c,	// (0x000782da) bg_button_pane_cp011_ParamLimits

0x8037,	// (0x000750d5) cell_vitu2_function_pane_g1_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_popup_sub_pane_cp22_ParamLimits

0x22c8,	// (0x0006f366) input_focus_pane_cp08_ParamLimits

0x887f,	// (0x0007591d) popup_vitu2_query_button_pane_ParamLimits

0x887f,	// (0x0007591d) popup_vitu2_query_button_pane

0x22e3,	// (0x0006f381) popup_vitu2_query_input_button_pane

0xd000,	// (0x0007a09e) popup_vitu2_query_window_g1_ParamLimits

0x22eb,	// (0x0006f389) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0007ca4a) popup_vitu2_query_window_g_ParamLimits

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp026

0x8e19,	// (0x00075eb7) popup_vitu2_query_input_button_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp025

0xd3ec,	// (0x0007a48a) popup_vitu2_query_button_pane_t1

0x6586,	// (0x00073624) main_mp3_pane_t6

0x659c,	// (0x0007363a) popup_slider_window_cp01

0xee5d,	// (0x0007befb) cam4_battery_pane

0xee5d,	// (0x0007befb) cam4_battery_pane_cp02

0xee5d,	// (0x0007befb) cam4_battery_pane_cp01

0xee5d,	// (0x0007befb) cam4_battery_pane_cp03

0xb384,	// (0x00078422) cam4_battery_pane_g1

0x8e21,	// (0x00075ebf) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0007cb4e) cam4_battery_pane_g

0x1059,	// (0x0006e0f7) popup_blid_sat_info2_window_t11

0x5286,	// (0x00072324) aid_size_touch_mv_arrow_left_ParamLimits

0xbca4,	// (0x00078d42) aid_size_touch_mv_arrow_right_ParamLimits

0xbcfd,	// (0x00078d9b) navi_pane_g1_ParamLimits

0xbd09,	// (0x00078da7) navi_pane_g2_ParamLimits

0x52aa,	// (0x00072348) navi_pane_g3_ParamLimits

0xf365,	// (0x0007c403) navi_pane_g_ParamLimits

0x52c7,	// (0x00072365) navi_pane_mv_t1_ParamLimits

0x71e8,	// (0x00074286) grid_imed_effect_pane_ParamLimits

0x4171,	// (0x0007120f) aid_placing_vt_slider_lsc

0xb411,	// (0x000784af) aid_placing_vt_slider_prt

0xb23c,	// (0x000782da) bg_tb_trans_pane_cp01_ParamLimits

0x6406,	// (0x000734a4) popup_image_details_window_g1_ParamLimits

0x6419,	// (0x000734b7) popup_image_details_window_g2_ParamLimits

0x642e,	// (0x000734cc) popup_image_details_window_g3_ParamLimits

0x642e,	// (0x000734cc) popup_image_details_window_g3

0xf6a4,	// (0x0007c742) popup_image_details_window_g_ParamLimits

0x6442,	// (0x000734e0) popup_image_details_window_t1_ParamLimits

0x6454,	// (0x000734f2) popup_image_details_window_t2_ParamLimits

0x646d,	// (0x0007350b) popup_image_details_window_t3_ParamLimits

0x6481,	// (0x0007351f) popup_image_details_window_t4_ParamLimits

0x649c,	// (0x0007353a) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x0007c749) popup_image_details_window_t_ParamLimits

0x8a95,	// (0x00075b33) cl_header_name_pane_ParamLimits

0x8a95,	// (0x00075b33) cl_header_name_pane

0x8e2b,	// (0x00075ec9) cl_header_name_pane_t1_ParamLimits

0x8e2b,	// (0x00075ec9) cl_header_name_pane_t1

0x8e4c,	// (0x00075eea) cl_header_name_pane_t2_ParamLimits

0x8e4c,	// (0x00075eea) cl_header_name_pane_t2

0x8e8e,	// (0x00075f2c) cl_header_name_pane_t3_ParamLimits

0x8e8e,	// (0x00075f2c) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0007cb53) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0007cb53) cl_header_name_pane_t

0xbd96,	// (0x00078e34) navi_pane_mv_g2_ParamLimits

0xcd23,	// (0x00079dc1) field_vitu2_entry_pane_g1_ParamLimits

0xcd2f,	// (0x00079dcd) field_vitu2_entry_pane_g2_ParamLimits

0x0e21,	// (0x0006debf) field_vitu2_entry_pane_g3_ParamLimits

0x0e21,	// (0x0006debf) field_vitu2_entry_pane_g3

0xf8ab,	// (0x0007c949) field_vitu2_entry_pane_g_ParamLimits

0x7fb3,	// (0x00075051) cell_vitu2_itu_pane_g1_ParamLimits

0x7fcb,	// (0x00075069) cell_vitu2_itu_pane_g2_ParamLimits

0x7fcb,	// (0x00075069) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x0007c955) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x0007c955) cell_vitu2_itu_pane_g

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp05_ParamLimits

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp05

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp03

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp04

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp10_ParamLimits

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp10

0x2408,	// (0x0006f4a6) bg_vkb2_func_pane_cp08

0x8a41,	// (0x00075adf) bg_vkb2_func_pane_cp06

0x8a4d,	// (0x00075aeb) bg_vkb2_func_pane_cp07

0xd331,	// (0x0007a3cf) bg_vkb2_func_pane_cp11_ParamLimits

0xd331,	// (0x0007a3cf) bg_vkb2_func_pane_cp11

0xd346,	// (0x0007a3e4) bg_vkb2_func_pane_cp12_ParamLimits

0xd346,	// (0x0007a3e4) bg_vkb2_func_pane_cp12

0x2aaf,	// (0x0006fb4d) bg_vkb2_func_pane_cp09

0xcd6a,	// (0x00079e08) bg_vkb2_func_pane_g1

0xb5e0,	// (0x0007867e) bg_vkb2_func_pane_g2

0xcd72,	// (0x00079e10) bg_vkb2_func_pane_g3

0xcd7a,	// (0x00079e18) bg_vkb2_func_pane_g4

0xcfc5,	// (0x0007a063) bg_vkb2_func_pane_g5

0xcd92,	// (0x00079e30) bg_vkb2_func_pane_g6

0xcd9a,	// (0x00079e38) bg_vkb2_func_pane_g7

0xcd8a,	// (0x00079e28) bg_vkb2_func_pane_g8

0xb5c0,	// (0x0007865e) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0007cb5a) bg_vkb2_func_pane_g

0x8d57,	// (0x00075df5) blid2_tripm_pane_g6_ParamLimits

0x8d57,	// (0x00075df5) blid2_tripm_pane_g6

0xcc05,	// (0x00079ca3) mp4_progress_pane_g1

0x8dc6,	// (0x00075e64) blid2_tripm_values_pane_ParamLimits

0x8dc6,	// (0x00075e64) blid2_tripm_values_pane

0x8ebf,	// (0x00075f5d) blid2_tripm_values_pane_t1

0x8ecd,	// (0x00075f6b) blid2_tripm_values_pane_t2

0x8edb,	// (0x00075f79) blid2_tripm_values_pane_t3

0x8ee9,	// (0x00075f87) blid2_tripm_values_pane_t4

0x8ef7,	// (0x00075f95) blid2_tripm_values_pane_t5

0x8f05,	// (0x00075fa3) blid2_tripm_values_pane_t6

0x8f13,	// (0x00075fb1) blid2_tripm_values_pane_t7

0x8f21,	// (0x00075fbf) blid2_tripm_values_pane_t8

0x8f2f,	// (0x00075fcd) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0007cb6d) blid2_tripm_values_pane_t

0x41ab,	// (0x00071249) call_video_pane_t1_ParamLimits

0x41c5,	// (0x00071263) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x0007c29a) call_video_pane_t_ParamLimits

0x2108,	// (0x0006f1a6) msg_header_pane_g1_ParamLimits

0xbf81,	// (0x0007901f) msg_header_pane_g2_ParamLimits

0xbf81,	// (0x0007901f) msg_header_pane_g2

0x0001,

0xf408,	// (0x0007c4a6) msg_header_pane_g_ParamLimits

0xf408,	// (0x0007c4a6) msg_header_pane_g

0x35d4,	// (0x00070672) main_clock2_pane_ParamLimits

0x6e86,	// (0x00073f24) grid_clock2_toolbar_pane_ParamLimits

0x6e86,	// (0x00073f24) grid_clock2_toolbar_pane

0x6e86,	// (0x00073f24) listscroll_clock2_pane_ParamLimits

0x6e86,	// (0x00073f24) listscroll_clock2_pane

0x6f99,	// (0x00074037) main_clock2_pane_t3_ParamLimits

0x6f99,	// (0x00074037) main_clock2_pane_t3

0x6fbb,	// (0x00074059) main_clock2_pane_t4_ParamLimits

0x6fbb,	// (0x00074059) main_clock2_pane_t4

0xd3fa,	// (0x0007a498) cell_clock2_toolbar_pane

0xd402,	// (0x0007a4a0) cell_clock2_toolbar_pane_cp01

0xd402,	// (0x0007a4a0) cell_clock2_toolbar_pane_cp02

0xd40a,	// (0x0007a4a8) cell_clock2_toolbar_pane_cp03

0xd412,	// (0x0007a4b0) list_clock2_pane

0xd41a,	// (0x0007a4b8) scroll_pane_cp10

0xd422,	// (0x0007a4c0) list_single_clock2_pane_ParamLimits

0xd422,	// (0x0007a4c0) list_single_clock2_pane

0xb30c,	// (0x000783aa) list_highlight_pane_cp08

0xd42f,	// (0x0007a4cd) list_single_clock2_pane_t1

0xd43d,	// (0x0007a4db) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0007cb80) list_single_clock2_pane_t

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp10

0xd44b,	// (0x0007a4e9) cell_clock2_toolbar_pane_g1

0x54dc,	// (0x0007257a) aid_main_viewer_pane_g1_ParamLimits

0x54dc,	// (0x0007257a) aid_main_viewer_pane_g1

0x54e8,	// (0x00072586) aid_main_viewer_pane_g2_ParamLimits

0x54e8,	// (0x00072586) aid_main_viewer_pane_g2

0x54f4,	// (0x00072592) aid_main_viewer_pane_g3_ParamLimits

0x54f4,	// (0x00072592) aid_main_viewer_pane_g3

0x5503,	// (0x000725a1) aid_main_viewer_pane_g4_ParamLimits

0x5503,	// (0x000725a1) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x0007c4b7) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x0007c4b7) aid_main_viewer_pane_g

0xb23c,	// (0x000782da) main_calc_pane_ParamLimits

0x5d44,	// (0x00072de2) main_dialer2_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) main_cam6_pane

0x2aaf,	// (0x0006fb4d) main_vid6_pane

0x6e92,	// (0x00073f30) listscroll_gen_pane_cp06_ParamLimits

0x6e92,	// (0x00073f30) listscroll_gen_pane_cp06

0x6fdc,	// (0x0007407a) main_clock2_pane_t5_ParamLimits

0x6fdc,	// (0x0007407a) main_clock2_pane_t5

0x7034,	// (0x000740d2) aid_call2_pane_cp10_ParamLimits

0x7046,	// (0x000740e4) aid_call_pane_cp10_ParamLimits

0xbc98,	// (0x00078d36) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbc98,	// (0x00078d36) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7058,	// (0x000740f6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7058,	// (0x000740f6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbc98,	// (0x00078d36) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x0007c7fe) popup_clock_analogue_window_cp10_g_ParamLimits

0x706a,	// (0x00074108) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcc65,	// (0x00079d03) cell_dialer2_keypad_pane_g2_ParamLimits

0xcc65,	// (0x00079d03) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0007c8e8) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0007c8e8) cell_dialer2_keypad_pane_g

0x78d3,	// (0x00074971) cell_dialer2_keypad_pane_t1

0x82f3,	// (0x00075391) main_cset_text2_pane_ParamLimits

0x82f3,	// (0x00075391) main_cset_text2_pane

0xd1da,	// (0x0007a278) area_vitu2_query_pane_g1_ParamLimits

0x23c2,	// (0x0006f460) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0007ca9d) area_vitu2_query_pane_g_ParamLimits

0xd25e,	// (0x0007a2fc) area_vitu2_query_pane_t7_ParamLimits

0xd25e,	// (0x0007a2fc) area_vitu2_query_pane_t7

0x8a41,	// (0x00075adf) bg_button_pane_cp018_ParamLimits

0x8a4d,	// (0x00075aeb) bg_button_pane_cp021_ParamLimits

0x23f9,	// (0x0006f497) bg_button_pane_cp022_ParamLimits

0x2408,	// (0x0006f4a6) bg_vkb2_func_pane_cp08_ParamLimits

0x8a41,	// (0x00075adf) bg_vkb2_func_pane_cp06_ParamLimits

0x8a4d,	// (0x00075aeb) bg_vkb2_func_pane_cp07_ParamLimits

0x2418,	// (0x0006f4b6) input_focus_pane_cp09_ParamLimits

0xf011,	// (0x0007c0af) cam6_autofocus_pane_ParamLimits

0xf011,	// (0x0007c0af) cam6_autofocus_pane

0x8f3d,	// (0x00075fdb) cam6_image_uncrop_pane_ParamLimits

0x8f3d,	// (0x00075fdb) cam6_image_uncrop_pane

0x8f4b,	// (0x00075fe9) cam6_indi_pane_ParamLimits

0x8f4b,	// (0x00075fe9) cam6_indi_pane

0x8f61,	// (0x00075fff) cam6_mode_pane_ParamLimits

0x8f61,	// (0x00075fff) cam6_mode_pane

0x8f73,	// (0x00076011) cam6_timer_pane_ParamLimits

0x8f73,	// (0x00076011) cam6_timer_pane

0x8f7f,	// (0x0007601d) cam6_zoom_pane_ParamLimits

0x8f7f,	// (0x0007601d) cam6_zoom_pane

0x8f8c,	// (0x0007602a) cam6_mode_pane_g1_ParamLimits

0x8f8c,	// (0x0007602a) cam6_mode_pane_g1

0x8f9c,	// (0x0007603a) cam6_mode_pane_g2_ParamLimits

0x8f9c,	// (0x0007603a) cam6_mode_pane_g2

0x8fac,	// (0x0007604a) cam6_mode_pane_g3_ParamLimits

0x8fac,	// (0x0007604a) cam6_mode_pane_g3

0x8fbc,	// (0x0007605a) cam6_mode_pane_g4_ParamLimits

0x8fbc,	// (0x0007605a) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0007cb85) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0007cb85) cam6_mode_pane_g

0x11a9,	// (0x0006e247) bg_tb_trans_pane_cp08_ParamLimits

0x11a9,	// (0x0006e247) bg_tb_trans_pane_cp08

0xd453,	// (0x0007a4f1) cam6_battery_pane_ParamLimits

0xd453,	// (0x0007a4f1) cam6_battery_pane

0xd469,	// (0x0007a507) cam6_indi_pane_g1_ParamLimits

0xd469,	// (0x0007a507) cam6_indi_pane_g1

0xd47b,	// (0x0007a519) cam6_indi_pane_g2_ParamLimits

0xd47b,	// (0x0007a519) cam6_indi_pane_g2

0xd48d,	// (0x0007a52b) cam6_indi_pane_g3_ParamLimits

0xd48d,	// (0x0007a52b) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0007cb8e) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0007cb8e) cam6_indi_pane_g

0xd49f,	// (0x0007a53d) cam6_indi_pane_t1_ParamLimits

0xd49f,	// (0x0007a53d) cam6_indi_pane_t1

0x7de3,	// (0x00074e81) cam6_autofocus_pane_g1

0x7deb,	// (0x00074e89) cam6_autofocus_pane_g2

0x7df3,	// (0x00074e91) cam6_autofocus_pane_g3

0x7dfb,	// (0x00074e99) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0007cb95) cam6_autofocus_pane_g

0xd4c5,	// (0x0007a563) cam6_timer_pane_g1

0xd4cd,	// (0x0007a56b) cam6_timer_pane_t1

0xd4db,	// (0x0007a579) cam6_zoom_cont_pane

0xd4e3,	// (0x0007a581) cam6_zoom_pane_g1

0xd4ec,	// (0x0007a58a) cam6_zoom_pane_g2

0x8fcc,	// (0x0007606a) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0007cb9e) cam6_zoom_pane_g

0xb384,	// (0x00078422) cam6_battery_pane_g1

0xb384,	// (0x00078422) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x0007c467) cam6_battery_pane_g

0xd4e3,	// (0x0007a581) cam6_zoom_cont_pane_g1

0xd4ec,	// (0x0007a58a) cam6_zoom_cont_pane_g2

0xd4f5,	// (0x0007a593) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0007cba5) cam6_zoom_cont_pane_g

0x8fea,	// (0x00076088) cam6_mode_pane_cp_ParamLimits

0x8fea,	// (0x00076088) cam6_mode_pane_cp

0x8ffc,	// (0x0007609a) cam6_zoom_pane_cp_ParamLimits

0x8ffc,	// (0x0007609a) cam6_zoom_pane_cp

0x9008,	// (0x000760a6) vid6_image_uncrop_cif_pane_ParamLimits

0x9008,	// (0x000760a6) vid6_image_uncrop_cif_pane

0x9016,	// (0x000760b4) vid6_image_uncrop_nhd_pane_ParamLimits

0x9016,	// (0x000760b4) vid6_image_uncrop_nhd_pane

0x9023,	// (0x000760c1) vid6_image_uncrop_vga_pane_ParamLimits

0x9023,	// (0x000760c1) vid6_image_uncrop_vga_pane

0x9030,	// (0x000760ce) vid6_image_uncrop_wvga_pane_ParamLimits

0x9030,	// (0x000760ce) vid6_image_uncrop_wvga_pane

0x903d,	// (0x000760db) vid6_indi_pane_ParamLimits

0x903d,	// (0x000760db) vid6_indi_pane

0x11a9,	// (0x0006e247) bg_tb_trans_pane_cp09_ParamLimits

0x11a9,	// (0x0006e247) bg_tb_trans_pane_cp09

0xd509,	// (0x0007a5a7) cam6_battery_pane_cp_ParamLimits

0xd509,	// (0x0007a5a7) cam6_battery_pane_cp

0xd515,	// (0x0007a5b3) vid6_indi_pane_g1_ParamLimits

0xd515,	// (0x0007a5b3) vid6_indi_pane_g1

0xd527,	// (0x0007a5c5) vid6_indi_pane_g2_ParamLimits

0xd527,	// (0x0007a5c5) vid6_indi_pane_g2

0xd539,	// (0x0007a5d7) vid6_indi_pane_g3_ParamLimits

0xd539,	// (0x0007a5d7) vid6_indi_pane_g3

0xd54e,	// (0x0007a5ec) vid6_indi_pane_g4_ParamLimits

0xd54e,	// (0x0007a5ec) vid6_indi_pane_g4

0xd563,	// (0x0007a601) vid6_indi_pane_g5_ParamLimits

0xd563,	// (0x0007a601) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0007cbac) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0007cbac) vid6_indi_pane_g

0xd57d,	// (0x0007a61b) vid6_indi_pane_t1_ParamLimits

0xd57d,	// (0x0007a61b) vid6_indi_pane_t1

0xd593,	// (0x0007a631) vid6_indi_pane_t2_ParamLimits

0xd593,	// (0x0007a631) vid6_indi_pane_t2

0xd5bb,	// (0x0007a659) vid6_indi_pane_t3_ParamLimits

0xd5bb,	// (0x0007a659) vid6_indi_pane_t3

0xd5e3,	// (0x0007a681) vid6_indi_pane_t4_ParamLimits

0xd5e3,	// (0x0007a681) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0007cbb7) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0007cbb7) vid6_indi_pane_t

0xd607,	// (0x0007a6a5) wait_bar_pane_cp08

0x9054,	// (0x000760f2) main_cset_text2_pane_t1_ParamLimits

0x9054,	// (0x000760f2) main_cset_text2_pane_t1

0x8fd5,	// (0x00076073) listscroll_gen_pane_cp06_t1_ParamLimits

0x8fd5,	// (0x00076073) listscroll_gen_pane_cp06_t1

0x2aaf,	// (0x0006fb4d) main_cam6_set_pane

0x340f,	// (0x000704ad) bg_tb_trans_pane_cp06_ParamLimits

0xee65,	// (0x0007bf03) cam4_indicators_pane_g1_ParamLimits

0xee75,	// (0x0007bf13) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x0007c925) cam4_indicators_pane_g_ParamLimits

0xee95,	// (0x0007bf33) cam4_indicators_pane_t1_ParamLimits

0xb23c,	// (0x000782da) bg_tb_trans_pane_cp07_ParamLimits

0xee65,	// (0x0007bf03) vid4_indicators_pane_g1_ParamLimits

0xeeb7,	// (0x0007bf55) vid4_indicators_pane_g2_ParamLimits

0xeec7,	// (0x0007bf65) vid4_indicators_pane_g3_ParamLimits

0xeed8,	// (0x0007bf76) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x0007c937) vid4_indicators_pane_g_ParamLimits

0xeef4,	// (0x0007bf92) vid4_indicators_pane_t1_ParamLimits

0xef77,	// (0x0007c015) vid4_progress_pane_g1_ParamLimits

0xef86,	// (0x0007c024) vid4_progress_pane_g2_ParamLimits

0xef95,	// (0x0007c033) vid4_progress_pane_g3_ParamLimits

0xefa4,	// (0x0007c042) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0007cae8) vid4_progress_pane_g_ParamLimits

0xefb0,	// (0x0007c04e) vid4_progress_pane_t1_ParamLimits

0xefc6,	// (0x0007c064) vid4_progress_pane_t2_ParamLimits

0xefdb,	// (0x0007c079) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0007caf3) vid4_progress_pane_t_ParamLimits

0xeff0,	// (0x0007c08e) wait_bar_pane_cp07_ParamLimits

0x906f,	// (0x0007610d) main_cam6_set_pane_g2_ParamLimits

0x906f,	// (0x0007610d) main_cam6_set_pane_g2

0x9091,	// (0x0007612f) main_cset6_listscroll_pane_ParamLimits

0x9091,	// (0x0007612f) main_cset6_listscroll_pane

0x90ab,	// (0x00076149) main_cset6_slider_pane_ParamLimits

0x90ab,	// (0x00076149) main_cset6_slider_pane

0x90c1,	// (0x0007615f) main_cset6_text2_pane_ParamLimits

0x90c1,	// (0x0007615f) main_cset6_text2_pane

0xd617,	// (0x0007a6b5) main_cset6_text_pane

0xce86,	// (0x00079f24) main_cset_list_pane_copy1_ParamLimits

0xce86,	// (0x00079f24) main_cset_list_pane_copy1

0xce96,	// (0x00079f34) scroll_pane_cp028_copy1

0x90cf,	// (0x0007616d) cset_list_set_pane_copy1

0x90e1,	// (0x0007617f) aid_position_infowindow_above_copy1

0x90e9,	// (0x00076187) aid_position_infowindow_below_copy1

0x90f1,	// (0x0007618f) cset_list_set_pane_g1_copy1

0x2457,	// (0x0006f4f5) cset_list_set_pane_g3_copy1_ParamLimits

0x2457,	// (0x0006f4f5) cset_list_set_pane_g3_copy1

0x2466,	// (0x0006f504) cset_list_set_pane_t1_copy1_ParamLimits

0x2466,	// (0x0006f504) cset_list_set_pane_t1_copy1

0xb23c,	// (0x000782da) list_highlight_pane_cp021_copy1_ParamLimits

0xb23c,	// (0x000782da) list_highlight_pane_cp021_copy1

0xd61f,	// (0x0007a6bd) cset6_slider_pane_ParamLimits

0xd61f,	// (0x0007a6bd) cset6_slider_pane

0xd64b,	// (0x0007a6e9) main_cset6_slider_pane_g1_ParamLimits

0xd64b,	// (0x0007a6e9) main_cset6_slider_pane_g1

0x90f9,	// (0x00076197) main_cset6_slider_pane_g2_ParamLimits

0x90f9,	// (0x00076197) main_cset6_slider_pane_g2

0xceab,	// (0x00079f49) main_cset6_slider_pane_g3_ParamLimits

0xceab,	// (0x00079f49) main_cset6_slider_pane_g3

0x83b1,	// (0x0007544f) main_cset6_slider_pane_g4_ParamLimits

0x83b1,	// (0x0007544f) main_cset6_slider_pane_g4

0x83f9,	// (0x00075497) main_cset6_slider_pane_g5_ParamLimits

0x83f9,	// (0x00075497) main_cset6_slider_pane_g5

0xceab,	// (0x00079f49) main_cset6_slider_pane_g7_ParamLimits

0xceab,	// (0x00079f49) main_cset6_slider_pane_g7

0xceb7,	// (0x00079f55) main_cset6_slider_pane_g8_ParamLimits

0xceb7,	// (0x00079f55) main_cset6_slider_pane_g8

0x8399,	// (0x00075437) main_cset6_slider_pane_g9_ParamLimits

0x8399,	// (0x00075437) main_cset6_slider_pane_g9

0x83a5,	// (0x00075443) main_cset6_slider_pane_g10_ParamLimits

0x83a5,	// (0x00075443) main_cset6_slider_pane_g10

0x83b1,	// (0x0007544f) main_cset6_slider_pane_g11_ParamLimits

0x83b1,	// (0x0007544f) main_cset6_slider_pane_g11

0x83bd,	// (0x0007545b) main_cset6_slider_pane_g12_ParamLimits

0x83bd,	// (0x0007545b) main_cset6_slider_pane_g12

0x83c9,	// (0x00075467) main_cset6_slider_pane_g13_ParamLimits

0x83c9,	// (0x00075467) main_cset6_slider_pane_g13

0x83d5,	// (0x00075473) main_cset6_slider_pane_g14_ParamLimits

0x83d5,	// (0x00075473) main_cset6_slider_pane_g14

0x9121,	// (0x000761bf) main_cset6_slider_pane_g15_ParamLimits

0x9121,	// (0x000761bf) main_cset6_slider_pane_g15

0x83f9,	// (0x00075497) main_cset6_slider_pane_g16_ParamLimits

0x83f9,	// (0x00075497) main_cset6_slider_pane_g16

0x8405,	// (0x000754a3) main_cset6_slider_pane_g17_ParamLimits

0x8405,	// (0x000754a3) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0007cbc0) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0007cbc0) main_cset6_slider_pane_g

0xd673,	// (0x0007a711) main_cset6_slider_pane_t1_ParamLimits

0xd673,	// (0x0007a711) main_cset6_slider_pane_t1

0xd6b4,	// (0x0007a752) main_cset6_slider_pane_t2_ParamLimits

0xd6b4,	// (0x0007a752) main_cset6_slider_pane_t2

0xd6df,	// (0x0007a77d) main_cset6_slider_pane_t3_ParamLimits

0xd6df,	// (0x0007a77d) main_cset6_slider_pane_t3

0x9139,	// (0x000761d7) main_cset6_slider_pane_t4_ParamLimits

0x9139,	// (0x000761d7) main_cset6_slider_pane_t4

0x9164,	// (0x00076202) main_cset6_slider_pane_t5_ParamLimits

0x9164,	// (0x00076202) main_cset6_slider_pane_t5

0xd70a,	// (0x0007a7a8) main_cset6_slider_pane_t7_ParamLimits

0xd70a,	// (0x0007a7a8) main_cset6_slider_pane_t7

0x918f,	// (0x0007622d) main_cset6_slider_pane_t8_ParamLimits

0x918f,	// (0x0007622d) main_cset6_slider_pane_t8

0x91b3,	// (0x00076251) main_cset6_slider_pane_t9_ParamLimits

0x91b3,	// (0x00076251) main_cset6_slider_pane_t9

0x91d7,	// (0x00076275) main_cset6_slider_pane_t10_ParamLimits

0x91d7,	// (0x00076275) main_cset6_slider_pane_t10

0x91fb,	// (0x00076299) main_cset6_slider_pane_t11_ParamLimits

0x91fb,	// (0x00076299) main_cset6_slider_pane_t11

0xd740,	// (0x0007a7de) main_cset6_slider_pane_t14_ParamLimits

0xd740,	// (0x0007a7de) main_cset6_slider_pane_t14

0xd779,	// (0x0007a817) main_cset6_slider_pane_t15_ParamLimits

0xd779,	// (0x0007a817) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0007cbe5) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0007cbe5) main_cset6_slider_pane_t

0xcf79,	// (0x0007a017) cset_slider_pane_g1_copy1

0xcf82,	// (0x0007a020) cset_slider_pane_g2_copy1

0xcf8b,	// (0x0007a029) cset_slider_pane_g3_copy1

0x2aaf,	// (0x0006fb4d) bg_popup_sub_pane_cp011_copy1

0xd00c,	// (0x0007a0aa) main_cset_text_pane_g1_copy1

0xd014,	// (0x0007a0b2) main_cset_text_pane_t1_copy1

0xd022,	// (0x0007a0c0) main_cset_text_pane_t2_copy1

0xd030,	// (0x0007a0ce) main_cset_text_pane_t3_copy1

0xd03e,	// (0x0007a0dc) main_cset_text_pane_t4_copy1

0xd04c,	// (0x0007a0ea) main_cset_text_pane_t5_copy1

0xd05a,	// (0x0007a0f8) main_cset_text_pane_t6_copy1

0xd068,	// (0x0007a106) main_cset_text_pane_t7_copy1

0x921f,	// (0x000762bd) main_cset_text2_pane_t1_copy1

0xb23c,	// (0x000782da) main_ncimui_pane

0x5f52,	// (0x00072ff0) popup_query_ncimui_window_ParamLimits

0x5f52,	// (0x00072ff0) popup_query_ncimui_window

0xcba7,	// (0x00079c45) field_cale_ev2_pane_g4_ParamLimits

0xcba7,	// (0x00079c45) field_cale_ev2_pane_g4

0x77c5,	// (0x00074863) cell_video_dialer_keypad_pane_g2_ParamLimits

0x77c5,	// (0x00074863) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x0007c8bf) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x0007c8bf) cell_video_dialer_keypad_pane_g

0x77dd,	// (0x0007487b) cell_video_dialer_keypad_pane_t1

0x2aaf,	// (0x0006fb4d) bg_popup_window_pane_cp012

0x0c86,	// (0x0006dd24) heading_pane_cp06

0xd802,	// (0x0007a8a0) ncim_query_content_pane

0x2aaf,	// (0x0006fb4d) bg_popup_heading_pane_cp01

0xd80a,	// (0x0007a8a8) ncim_heading_pane_t1

0xd818,	// (0x0007a8b6) ncim_indicator_popup_pane

0xd82a,	// (0x0007a8c8) ncim_query_button_pane

0xd83e,	// (0x0007a8dc) ncim_query_content_pane_t1

0xd850,	// (0x0007a8ee) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0007cc29) ncim_query_content_pane_t

0xd88a,	// (0x0007a928) ncim_query_list_pane

0xd89c,	// (0x0007a93a) ncim_query_popup_pane

0xd818,	// (0x0007a8b6) ncim_indicator_popup_pane_ParamLimits

0x935e,	// (0x000763fc) ncim_query_content_pane_g1_ParamLimits

0x935e,	// (0x000763fc) ncim_query_content_pane_g1

0xd83e,	// (0x0007a8dc) ncim_query_content_pane_t1_ParamLimits

0xd850,	// (0x0007a8ee) ncim_query_content_pane_t2_ParamLimits

0x936a,	// (0x00076408) ncim_query_content_pane_t3_ParamLimits

0x936a,	// (0x00076408) ncim_query_content_pane_t3

0x9392,	// (0x00076430) ncim_query_content_pane_t4_ParamLimits

0x9392,	// (0x00076430) ncim_query_content_pane_t4

0x93ba,	// (0x00076458) ncim_query_content_pane_t5_ParamLimits

0x93ba,	// (0x00076458) ncim_query_content_pane_t5

0xd862,	// (0x0007a900) ncim_query_content_pane_t6_ParamLimits

0xd862,	// (0x0007a900) ncim_query_content_pane_t6

0xfb8b,	// (0x0007cc29) ncim_query_content_pane_t_ParamLimits

0xd88a,	// (0x0007a928) ncim_query_list_pane_ParamLimits

0xd89c,	// (0x0007a93a) ncim_query_popup_pane_ParamLimits

0xd8b0,	// (0x0007a94e) wait_bar_pane_cp04

0x2aaf,	// (0x0006fb4d) input_focus_pane_cp011

0xd8b8,	// (0x0007a956) ncim_query_popup_pane_t1

0xd8c6,	// (0x0007a964) ncim_list_query_list_pane_ParamLimits

0xd8c6,	// (0x0007a964) ncim_list_query_list_pane

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp027

0xd8d9,	// (0x0007a977) ncim_query_button_pane_g1

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp012

0xd8e3,	// (0x0007a981) ncim_list_query_list_pane_g1

0xd8eb,	// (0x0007a989) ncim_list_query_list_pane_t1

0xee85,	// (0x0007bf23) cam4_indicators_pane_g3_ParamLimits

0xee85,	// (0x0007bf23) cam4_indicators_pane_g3

0xeee4,	// (0x0007bf82) vid4_indicators_pane_g5_ParamLimits

0xeee4,	// (0x0007bf82) vid4_indicators_pane_g5

0xb8b7,	// (0x00078955) vid4_progress_pane_g5_ParamLimits

0xb8b7,	// (0x00078955) vid4_progress_pane_g5

0x924e,	// (0x000762ec) main_ncimui_pane_g1

0x92b4,	// (0x00076352) ncimui_group_query_pane_ParamLimits

0x92b4,	// (0x00076352) ncimui_group_query_pane

0x92fc,	// (0x0007639a) ncimui_list_pane_ParamLimits

0x92fc,	// (0x0007639a) ncimui_list_pane

0x9321,	// (0x000763bf) ncimui_text_pane_ParamLimits

0x9321,	// (0x000763bf) ncimui_text_pane

0x93e2,	// (0x00076480) ncimui_text_pane_t1_ParamLimits

0x93e2,	// (0x00076480) ncimui_text_pane_t1

0xd902,	// (0x0007a9a0) ncimui_list_single_graphic_pane_ParamLimits

0xd902,	// (0x0007a9a0) ncimui_list_single_graphic_pane

0x9400,	// (0x0007649e) ncimui_query_pane_ParamLimits

0x9400,	// (0x0007649e) ncimui_query_pane

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp013

0xd912,	// (0x0007a9b0) ncim_list_query_list_pane_t1_copy1

0xd920,	// (0x0007a9be) ncim_list_single_graphic_pane_g1

0xd928,	// (0x0007a9c6) ncim_query_button_pane_cp01

0xd934,	// (0x0007a9d2) ncim_query_entry_pane_ParamLimits

0xd934,	// (0x0007a9d2) ncim_query_entry_pane

0xd947,	// (0x0007a9e5) ncimui_query_pane_g1

0xd953,	// (0x0007a9f1) ncimui_query_pane_t1_ParamLimits

0xd953,	// (0x0007a9f1) ncimui_query_pane_t1

0xb23c,	// (0x000782da) input_focus_pane_cp012

0xd96c,	// (0x0007aa0a) ncim_query_entry_pane_t1

0x35d4,	// (0x00070672) main_im_pane_ParamLimits

0xb23c,	// (0x000782da) main_mobtv_pane_ParamLimits

0xb23c,	// (0x000782da) main_mobtv_pane

0x8399,	// (0x00075437) main_cset6_slider_pane_g18_ParamLimits

0x8399,	// (0x00075437) main_cset6_slider_pane_g18

0x83c9,	// (0x00075467) main_cset6_slider_pane_g19_ParamLimits

0x83c9,	// (0x00075467) main_cset6_slider_pane_g19

0x3439,	// (0x000704d7) bg_main_mobtv_pane_ParamLimits

0x3439,	// (0x000704d7) bg_main_mobtv_pane

0x9410,	// (0x000764ae) main_mobtv_info_pane

0x9419,	// (0x000764b7) main_mobtv_loading_pane_ParamLimits

0x9419,	// (0x000764b7) main_mobtv_loading_pane

0xd97e,	// (0x0007aa1c) main_mobtv_pg_channel_list_pane

0xd988,	// (0x0007aa26) main_mobtv_pg_hdr_pane

0x9426,	// (0x000764c4) main_mobtv_programe_curr_pane_ParamLimits

0x9426,	// (0x000764c4) main_mobtv_programe_curr_pane

0x9433,	// (0x000764d1) main_mobtv_programe_next_pane_ParamLimits

0x9433,	// (0x000764d1) main_mobtv_programe_next_pane

0xd991,	// (0x0007aa2f) popup_mobtv_noti_window

0xb384,	// (0x00078422) main_tv_pg_hdr_pane_g1

0xd999,	// (0x0007aa37) main_tv_pg_hdr_pane_g2

0xd9a1,	// (0x0007aa3f) main_tv_pg_hdr_pane_g3

0xd9a9,	// (0x0007aa47) main_tv_pg_hdr_pane_g4

0xd9b1,	// (0x0007aa4f) main_tv_pg_hdr_pane_g5

0xd9b9,	// (0x0007aa57) main_tv_pg_hdr_pane_g6

0xd9c1,	// (0x0007aa5f) main_tv_pg_hdr_pane_g7

0xd9c9,	// (0x0007aa67) main_tv_pg_hdr_pane_g8

0xd9d1,	// (0x0007aa6f) main_tv_pg_hdr_pane_g9

0xd9d9,	// (0x0007aa77) main_tv_pg_hdr_pane_g10

0xd9e3,	// (0x0007aa81) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0007cc36) main_tv_pg_hdr_pane_g

0xd9ed,	// (0x0007aa8b) main_tv_pg_hdr_pane_t1

0xd9fb,	// (0x0007aa99) main_tv_pg_hdr_pane_t2

0xda09,	// (0x0007aaa7) main_tv_pg_hdr_pane_t3

0xda17,	// (0x0007aab5) main_tv_pg_hdr_pane_t4

0xda25,	// (0x0007aac3) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0007cc4d) main_tv_pg_hdr_pane_t

0xda33,	// (0x0007aad1) single_mobtv_pg_channel_pane_ParamLimits

0xda33,	// (0x0007aad1) single_mobtv_pg_channel_pane

0xda45,	// (0x0007aae3) single_mobtv_pg_channel_table_pane

0xda4e,	// (0x0007aaec) single_mobtv_pg_channel_thumb_pane

0xda57,	// (0x0007aaf5) single_tv_pg_channel_pane_g1

0xda60,	// (0x0007aafe) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0007cc58) single_tv_pg_channel_pane_g

0x340f,	// (0x000704ad) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x340f,	// (0x000704ad) bg_single_mobtv_pg_channel_thumb_pane

0xda69,	// (0x0007ab07) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda69,	// (0x0007ab07) single_mobtv_pg_channel_thumb_pane_g1

0xda77,	// (0x0007ab15) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda77,	// (0x0007ab15) single_mobtv_pg_channel_thumb_pane_g2

0xda83,	// (0x0007ab21) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda83,	// (0x0007ab21) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0007cc5d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0007cc5d) single_mobtv_pg_channel_thumb_pane_g

0xda8f,	// (0x0007ab2d) single_mobtv_pg_channel_thumb_pane_t1

0xda9d,	// (0x0007ab3b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0007cc64) single_mobtv_pg_channel_thumb_pane_t

0xb384,	// (0x00078422) bg_single_mobtv_pg_channel_table_pane_g1

0xb384,	// (0x00078422) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x0007c467) bg_single_mobtv_pg_channel_table_pane_g

0xdaab,	// (0x0007ab49) single_mobtv_pg_channel_table_pane_t1

0xdab9,	// (0x0007ab57) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0007cc69) single_mobtv_pg_channel_table_pane_t

0x9448,	// (0x000764e6) main_mobtv_info_pane_g1_ParamLimits

0x9448,	// (0x000764e6) main_mobtv_info_pane_g1

0x9464,	// (0x00076502) main_mobtv_info_pane_t1_ParamLimits

0x9464,	// (0x00076502) main_mobtv_info_pane_t1

0x94ca,	// (0x00076568) main_mobtv_info_pane_t2_ParamLimits

0x94ca,	// (0x00076568) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0007cc73) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0007cc73) main_mobtv_info_pane_t

0x954d,	// (0x000765eb) wait_bar_pane_cp05

0x955d,	// (0x000765fb) main_mobtv_loading_pane_g1_ParamLimits

0x955d,	// (0x000765fb) main_mobtv_loading_pane_g1

0x956e,	// (0x0007660c) main_mobtv_loading_pane_g2_ParamLimits

0x956e,	// (0x0007660c) main_mobtv_loading_pane_g2

0x957a,	// (0x00076618) main_mobtv_loading_pane_g3_ParamLimits

0x957a,	// (0x00076618) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0007cc7a) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0007cc7a) main_mobtv_loading_pane_g

0xdac7,	// (0x0007ab65) main_mobtv_loading_pane_t1_ParamLimits

0xdac7,	// (0x0007ab65) main_mobtv_loading_pane_t1

0xdadf,	// (0x0007ab7d) main_mobtv_loading_pane_t2_ParamLimits

0xdadf,	// (0x0007ab7d) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0007cc81) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0007cc81) main_mobtv_loading_pane_t

0x958b,	// (0x00076629) wait_bar_pane_cp06_ParamLimits

0x958b,	// (0x00076629) wait_bar_pane_cp06

0xdb03,	// (0x0007aba1) main_mobtv_programe_curr_pane_t1

0xdb11,	// (0x0007abaf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0007cc86) main_mobtv_programe_curr_pane_t

0xdb1f,	// (0x0007abbd) main_mobtv_programe_next_pane_t1

0xdb2d,	// (0x0007abcb) main_mobtv_programe_next_pane_t2

0xdb3b,	// (0x0007abd9) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0007cc8b) main_mobtv_programe_next_pane_t

0x2aaf,	// (0x0006fb4d) bg_popup_mobtv_noti_window_pane

0xdb49,	// (0x0007abe7) popup_mobtv_noti_window_g1

0xdb51,	// (0x0007abef) popup_mobtv_noti_window_t1

0xdb5f,	// (0x0007abfd) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0007cc92) popup_mobtv_noti_window_t

0xb384,	// (0x00078422) bg_popup_mobtv_noti_window_pane_g1

0x2aaf,	// (0x0006fb4d) sc_clock_pane

0x2aaf,	// (0x0006fb4d) main_fs_bigclock_pane

0x8db0,	// (0x00075e4e) blid2_tripm_pane_t4_ParamLimits

0x8db0,	// (0x00075e4e) blid2_tripm_pane_t4

0x959a,	// (0x00076638) sc_clock_pane_g1_ParamLimits

0x959a,	// (0x00076638) sc_clock_pane_g1

0x95ac,	// (0x0007664a) sc_clock_pane_t1_ParamLimits

0x95ac,	// (0x0007664a) sc_clock_pane_t1

0x95ce,	// (0x0007666c) sc_clock_pane_t2_ParamLimits

0x95ce,	// (0x0007666c) sc_clock_pane_t2

0x95e4,	// (0x00076682) sc_clock_pane_t3_ParamLimits

0x95e4,	// (0x00076682) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0007cc97) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0007cc97) sc_clock_pane_t

0x9f31,	// (0x00076fcf) main_fs_bigclock_indicator_pane_ParamLimits

0x9f31,	// (0x00076fcf) main_fs_bigclock_indicator_pane

0x9680,	// (0x0007671e) main_fs_bigclock_pane_g1_ParamLimits

0x9680,	// (0x0007671e) main_fs_bigclock_pane_g1

0x9f3d,	// (0x00076fdb) main_fs_bigclock_pane_t1_ParamLimits

0x9f3d,	// (0x00076fdb) main_fs_bigclock_pane_t1

0x9f4f,	// (0x00076fed) main_fs_bigclock_pane_t2_ParamLimits

0x9f4f,	// (0x00076fed) main_fs_bigclock_pane_t2

0x9f61,	// (0x00076fff) main_fs_bigclock_pane_t3_ParamLimits

0x9f61,	// (0x00076fff) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x0007ce60) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x0007ce60) main_fs_bigclock_pane_t

0xe5ab,	// (0x0007b649) main_fs_bigclock_indicator_pane_g1

0xd832,	// (0x0007a8d0) ncim_query_content_pane_g2_ParamLimits

0xd832,	// (0x0007a8d0) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0007cc24) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0007cc24) ncim_query_content_pane_g

0x95fb,	// (0x00076699) sc_clock_pane_t4_ParamLimits

0x95fb,	// (0x00076699) sc_clock_pane_t4

0xb23c,	// (0x000782da) main_radioblah_pane

0xedf9,	// (0x0007be97) cell_call4_button_pane_t1_copy1_ParamLimits

0xedf9,	// (0x0007be97) cell_call4_button_pane_t1_copy1

0x9266,	// (0x00076304) main_ncimui_pane_t1_ParamLimits

0x9266,	// (0x00076304) main_ncimui_pane_t1

0x9280,	// (0x0007631e) main_ncimui_pane_t2_ParamLimits

0x9280,	// (0x0007631e) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0007cc1d) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0007cc1d) main_ncimui_pane_t

0xdca0,	// (0x0007ad3e) main_radioblah_anim_pane_ParamLimits

0xdca0,	// (0x0007ad3e) main_radioblah_anim_pane

0xdcb1,	// (0x0007ad4f) main_radioblah_info_pane_ParamLimits

0xdcb1,	// (0x0007ad4f) main_radioblah_info_pane

0xdcc5,	// (0x0007ad63) main_radioblah_pane_t1_ParamLimits

0xdcc5,	// (0x0007ad63) main_radioblah_pane_t1

0xdce1,	// (0x0007ad7f) main_radioblah_pane_t2_ParamLimits

0xdce1,	// (0x0007ad7f) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0007ccb8) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0007ccb8) main_radioblah_pane_t

0x96ca,	// (0x00076768) main_radioblah_rocker_ctrl_pane_ParamLimits

0x96ca,	// (0x00076768) main_radioblah_rocker_ctrl_pane

0xdd29,	// (0x0007adc7) main_radioblah_info_pane_t1_ParamLimits

0xdd29,	// (0x0007adc7) main_radioblah_info_pane_t1

0x971e,	// (0x000767bc) main_radioblah_info_pane_t2_ParamLimits

0x971e,	// (0x000767bc) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0007ccc1) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0007ccc1) main_radioblah_info_pane_t

0xb384,	// (0x00078422) main_radioblah_rocker_ctrl_pane_g1

0x97cc,	// (0x0007686a) main_radioblah_rocker_ctrl_pane_g2

0x97d4,	// (0x00076872) main_radioblah_rocker_ctrl_pane_g3

0x97dc,	// (0x0007687a) main_radioblah_rocker_ctrl_pane_g4

0x97e4,	// (0x00076882) main_radioblah_rocker_ctrl_pane_g5

0x97ec,	// (0x0007688a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0007ccca) main_radioblah_rocker_ctrl_pane_g

0x921f,	// (0x000762bd) main_cset_text2_pane_t1_copy1_ParamLimits

0xee55,	// (0x0007bef3) cam4_image_uncrop_qvga_pane

0xeeaf,	// (0x0007bf4d) vid4_image_uncrop_qcif_pane

0xf011,	// (0x0007c0af) cam6_image_uncrop_qvga_pane_ParamLimits

0xf011,	// (0x0007c0af) cam6_image_uncrop_qvga_pane

0xd4fd,	// (0x0007a59b) vid6_image_uncrop_qcif_pane_ParamLimits

0xd4fd,	// (0x0007a59b) vid6_image_uncrop_qcif_pane

0x2aaf,	// (0x0006fb4d) bg_popup_preview_window_pane_cp03

0xd7d8,	// (0x0007a876) list_cset_text2_pane

0xd7e0,	// (0x0007a87e) main_cset6_text2_pane_g1

0xd7e8,	// (0x0007a886) main_cset6_text2_pane_t1

0x97f4,	// (0x00076892) list_cset_text2_pane_t1_ParamLimits

0x97f4,	// (0x00076892) list_cset_text2_pane_t1

0xb23c,	// (0x000782da) main_radioblah_pane_ParamLimits

0x953b,	// (0x000765d9) main_mobtv_info_pane_t3_ParamLimits

0x953b,	// (0x000765d9) main_mobtv_info_pane_t3

0x96b8,	// (0x00076756) main_radioblah_pane_g1

0x96f2,	// (0x00076790) main_radioblah_info_pane_g1

0x9771,	// (0x0007680f) main_radioblah_info_pane_t3_ParamLimits

0x9771,	// (0x0007680f) main_radioblah_info_pane_t3

0x4e97,	// (0x00071f35) highlight_cell_cale_month_pane_ParamLimits

0x4e97,	// (0x00071f35) highlight_cell_cale_month_pane

0x2aaf,	// (0x0006fb4d) main_phob_fisheye_pane

0x6d5a,	// (0x00073df8) scroll_pane_cp0031_ParamLimits

0x6d5a,	// (0x00073df8) scroll_pane_cp0031

0xd607,	// (0x0007a6a5) wait_bar_pane_cp08_ParamLimits

0x90cf,	// (0x0007616d) cset_list_set_pane_copy1_ParamLimits

0xdd63,	// (0x0007ae01) highlight_cell_cale_month_pane_g1

0x980d,	// (0x000768ab) highlight_cell_cale_month_pane_t1

0xdd6b,	// (0x0007ae09) list_gen_pane_cp01

0xce96,	// (0x00079f34) scroll_pane_01

0x2498,	// (0x0006f536) list_single_double_fisheye_pane

0x24a1,	// (0x0006f53f) list_double_fisheye_pane_g1_ParamLimits

0x24a1,	// (0x0006f53f) list_double_fisheye_pane_g1

0x24ad,	// (0x0006f54b) list_double_fisheye_pane_g2_ParamLimits

0x24ad,	// (0x0006f54b) list_double_fisheye_pane_g2

0x24c1,	// (0x0006f55f) list_double_fisheye_pane_g3_ParamLimits

0x24c1,	// (0x0006f55f) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0007ccd7) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0007ccd7) list_double_fisheye_pane_g

0x24ea,	// (0x0006f588) list_double_fisheye_pane_t1_ParamLimits

0x24ea,	// (0x0006f588) list_double_fisheye_pane_t1

0x2505,	// (0x0006f5a3) list_double_fisheye_pane_t2_ParamLimits

0x2505,	// (0x0006f5a3) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0007cce2) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0007cce2) list_double_fisheye_pane_t

0x2aaf,	// (0x0006fb4d) main_call5_pane

0x9624,	// (0x000766c2) sc_swipe_pane_ParamLimits

0x9624,	// (0x000766c2) sc_swipe_pane

0x982c,	// (0x000768ca) call5_image_pane_ParamLimits

0x982c,	// (0x000768ca) call5_image_pane

0x9841,	// (0x000768df) call5_swipe_1_pane_ParamLimits

0x9841,	// (0x000768df) call5_swipe_1_pane

0x9852,	// (0x000768f0) call5_swipe_2_pane_ParamLimits

0x9852,	// (0x000768f0) call5_swipe_2_pane

0x9877,	// (0x00076915) popup_call5_audio_first_window_ParamLimits

0x9877,	// (0x00076915) popup_call5_audio_first_window

0x340f,	// (0x000704ad) call5_swipe_1_pane_g1_ParamLimits

0x340f,	// (0x000704ad) call5_swipe_1_pane_g1

0xdd74,	// (0x0007ae12) call5_swipe_1_pane_g2_ParamLimits

0xdd74,	// (0x0007ae12) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0007cce7) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0007cce7) call5_swipe_1_pane_g

0xdd80,	// (0x0007ae1e) call5_swipe_1_pane_t1_ParamLimits

0xdd80,	// (0x0007ae1e) call5_swipe_1_pane_t1

0x340f,	// (0x000704ad) call5_swipe_2_pane_g1_ParamLimits

0x340f,	// (0x000704ad) call5_swipe_2_pane_g1

0xdd95,	// (0x0007ae33) call5_swipe_2_pane_g2_ParamLimits

0xdd95,	// (0x0007ae33) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0007ccec) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0007ccec) call5_swipe_2_pane_g

0xdda1,	// (0x0007ae3f) call5_swipe_2_pane_t1_ParamLimits

0xdda1,	// (0x0007ae3f) call5_swipe_2_pane_t1

0xddb6,	// (0x0007ae54) sc_swipe_pane_g1_ParamLimits

0xddb6,	// (0x0007ae54) sc_swipe_pane_g1

0xddc3,	// (0x0007ae61) sc_swipe_pane_g2_ParamLimits

0xddc3,	// (0x0007ae61) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0007ccf1) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0007ccf1) sc_swipe_pane_g

0xddcf,	// (0x0007ae6d) sc_swipe_pane_t1_ParamLimits

0xddcf,	// (0x0007ae6d) sc_swipe_pane_t1

0x2aaf,	// (0x0006fb4d) main_cmail_launcher_pane

0x9886,	// (0x00076924) aid_size_cell_cmail_l_ParamLimits

0x9886,	// (0x00076924) aid_size_cell_cmail_l

0x989f,	// (0x0007693d) grid_cmail_l_pane_ParamLimits

0x989f,	// (0x0007693d) grid_cmail_l_pane

0x98b4,	// (0x00076952) cell_cmail_l_pane_ParamLimits

0x98b4,	// (0x00076952) cell_cmail_l_pane

0x98d6,	// (0x00076974) cell_cmail_l_pane_g1_ParamLimits

0x98d6,	// (0x00076974) cell_cmail_l_pane_g1

0x98e6,	// (0x00076984) cell_cmail_l_pane_t1_ParamLimits

0x98e6,	// (0x00076984) cell_cmail_l_pane_t1

0xdde4,	// (0x0007ae82) cell_cmail_l_pane_t2_ParamLimits

0xdde4,	// (0x0007ae82) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0007ccf6) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0007ccf6) cell_cmail_l_pane_t

0xb23c,	// (0x000782da) grid_highlight_pane_cp018_ParamLimits

0xb23c,	// (0x000782da) grid_highlight_pane_cp018

0x2b6d,	// (0x0006fc0b) main2_pane_ParamLimits

0x2b6d,	// (0x0006fc0b) main2_pane

0x37b3,	// (0x00070851) popup_sp_fs_action_menu_bg_pane_g1

0x37bb,	// (0x00070859) popup_sp_fs_action_menu_bg_pane_g2

0x37c3,	// (0x00070861) popup_sp_fs_action_menu_bg_pane_g3

0x37cb,	// (0x00070869) popup_sp_fs_action_menu_bg_pane_g4

0x37d3,	// (0x00070871) popup_sp_fs_action_menu_bg_pane_g5

0x37db,	// (0x00070879) popup_sp_fs_action_menu_bg_pane_g6

0x37e3,	// (0x00070881) popup_sp_fs_action_menu_bg_pane_g7

0x37eb,	// (0x00070889) popup_sp_fs_action_menu_bg_pane_g8

0x37f3,	// (0x00070891) popup_sp_fs_action_menu_bg_pane_g9

0x37fb,	// (0x00070899) popup_sp_fs_action_menu_bg_pane_g10

0x37fb,	// (0x00070899) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x0007c1bd) popup_sp_fs_action_menu_bg_pane_g

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g3_g1

0xb3aa,	// (0x00078448) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t3_g3_g2

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x0007c26b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x0007c26b) list_medium_line_x2_t3_g3_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g3_t1

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g3_t2

0xb3c9,	// (0x00078467) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0007c272) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0007c272) list_medium_line_x2_t3_g3_t

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g2_g1

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x0007c279) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x0007c279) list_medium_line_x2_t3_g2_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g2_t1

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g2_t2

0xb3c9,	// (0x00078467) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0007c272) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0007c272) list_medium_line_x2_t3_g2_t

0xb39e,	// (0x0007843c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t4_g4_g1

0xb3aa,	// (0x00078448) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t4_g4_g2

0xb3aa,	// (0x00078448) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t4_g4_g3

0xb39e,	// (0x0007843c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x0007c27e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x0007c27e) list_medium_line_x2_t4_g4_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g4_t1

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g4_t2

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g4_t3

0xb3c9,	// (0x00078467) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x0007c287) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x0007c287) list_medium_line_x2_t4_g4_t

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g4_g1

0xb3aa,	// (0x00078448) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t2_g4_g2

0xb3aa,	// (0x00078448) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t2_g4_g3

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x0007c27e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x0007c27e) list_medium_line_x2_t2_g4_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t2_g4_t1

0xb3c9,	// (0x00078467) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0007c2ee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0007c2ee) list_medium_line_x2_t2_g4_t

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g3_g1

0xb3aa,	// (0x00078448) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t2_g3_g2

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x0007c26b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x0007c26b) list_medium_line_x2_t2_g3_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t2_g3_t1

0xb3c9,	// (0x00078467) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0007c2ee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0007c2ee) list_medium_line_x2_t2_g3_t

0x4ff4,	// (0x00072092) main_sp_fs_list_pane_ParamLimits

0x4ff4,	// (0x00072092) main_sp_fs_list_pane

0x5001,	// (0x0007209f) sp_fs_scroll_pane_ParamLimits

0x5001,	// (0x0007209f) sp_fs_scroll_pane

0xb90c,	// (0x000789aa) list_medium_line_x2_t3_t1

0xb90c,	// (0x000789aa) list_medium_line_x2_t3_t2

0xb91b,	// (0x000789b9) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x0007c339) list_medium_line_x2_t3_t

0xb90c,	// (0x000789aa) list_medium_line_x3_t4_t1

0xb90c,	// (0x000789aa) list_medium_line_x3_t4_t2

0xb90c,	// (0x000789aa) list_medium_line_x3_t4_t3

0xb90c,	// (0x000789aa) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x0007c340) list_medium_line_x3_t4_t

0xb90c,	// (0x000789aa) list_medium_line_x4_t5_t1

0xb90c,	// (0x000789aa) list_medium_line_x4_t5_t2

0xb90c,	// (0x000789aa) list_medium_line_x4_t5_t3

0xb90c,	// (0x000789aa) list_medium_line_x4_t5_t4

0xb90c,	// (0x000789aa) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x0007c349) list_medium_line_x4_t5_t

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g1

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g2_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g2

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g3_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g3

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g4_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x0007c354) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x0007c354) list_medium_line_t4_g4_g

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t1

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t2

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t3

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t4_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0007c35d) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0007c35d) list_medium_line_t4_g4_t

0x50ad,	// (0x0007214b) chi_dic_find_pane_g1

0x5d58,	// (0x00072df6) main_tport_pane

0xb90c,	// (0x000789aa) list_medium_line_plain_t1

0xb39e,	// (0x0007843c) list_medium_line_t2_g2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t2_g2_g1

0xef6a,	// (0x0007c008) list_medium_line_t2_g2_g2_ParamLimits

0xef6a,	// (0x0007c008) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x0007ca2e) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x0007ca2e) list_medium_line_t2_g2_g

0xb3b6,	// (0x00078454) list_medium_line_t2_g2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t2_g2_t1

0xb3b6,	// (0x00078454) list_medium_line_t2_g2_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x0007ca33) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x0007ca33) list_medium_line_t2_g2_t

0xd2dc,	// (0x0007a37a) aid_sp_fs_list_icon_a_sm

0xf000,	// (0x0007c09e) aid_sp_fs_list_icon_d

0xd2e4,	// (0x0007a382) aid_sp_fs_text_primary

0xf008,	// (0x0007c0a6) aid_sp_fs_text_secondary

0xd2ed,	// (0x0007a38b) list_medium_line

0xd2ed,	// (0x0007a38b) list_medium_line_g2

0xd2ed,	// (0x0007a38b) list_medium_line_g3

0xd2ed,	// (0x0007a38b) list_medium_line_plain

0xd2ed,	// (0x0007a38b) list_medium_line_plain_t2

0xd2ed,	// (0x0007a38b) list_medium_line_plain_t3

0xd2ed,	// (0x0007a38b) list_medium_line_right_icon

0xd2ed,	// (0x0007a38b) list_medium_line_right_iconx2

0xd2ed,	// (0x0007a38b) list_medium_line_t2

0xd2ed,	// (0x0007a38b) list_medium_line_t2_g2

0xd2ed,	// (0x0007a38b) list_medium_line_t2_g3

0xd2ed,	// (0x0007a38b) list_medium_line_t2_right_icon

0xd2ed,	// (0x0007a38b) list_medium_line_t2_right_iconx2

0xd2ed,	// (0x0007a38b) list_medium_line_t3

0xd2ed,	// (0x0007a38b) list_medium_line_t3_g2

0xd2ed,	// (0x0007a38b) list_medium_line_t3_g3

0xd2ed,	// (0x0007a38b) list_medium_line_t3_right_iconx2

0x2428,	// (0x0006f4c6) list_medium_line_t4_g4

0x2431,	// (0x0006f4cf) list_medium_line_x2

0x2431,	// (0x0006f4cf) list_medium_line_x2_t2_g2

0x2431,	// (0x0006f4cf) list_medium_line_x2_t2_g3

0x2431,	// (0x0006f4cf) list_medium_line_x2_t2_g4

0x2431,	// (0x0006f4cf) list_medium_line_x2_t3

0x2431,	// (0x0006f4cf) list_medium_line_x2_t3_g2

0x2431,	// (0x0006f4cf) list_medium_line_x2_t3_g3

0x2431,	// (0x0006f4cf) list_medium_line_x2_t3_g4

0x2431,	// (0x0006f4cf) list_medium_line_x2_t4_g2

0x2431,	// (0x0006f4cf) list_medium_line_x2_t4_g4

0x243a,	// (0x0006f4d8) list_medium_line_x3

0x243a,	// (0x0006f4d8) list_medium_line_x3_t4

0x243a,	// (0x0006f4d8) list_medium_line_x3_t4_g4

0x2428,	// (0x0006f4c6) list_medium_line_x4_t4

0x2428,	// (0x0006f4c6) list_medium_line_x4_t4_g7

0x2428,	// (0x0006f4c6) list_medium_line_x4_t5

0x2443,	// (0x0006f4e1) list_single_fs_dyc_pane_ParamLimits

0x2443,	// (0x0006f4e1) list_single_fs_dyc_pane

0xb39e,	// (0x0007843c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x4_t4_g7_g1

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g2_ParamLimits

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g2

0xb3aa,	// (0x00078448) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x4_t4_g7_g3

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g4_ParamLimits

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g4

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g5_ParamLimits

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g5

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g6_ParamLimits

0x340f,	// (0x000704ad) list_medium_line_x4_t4_g7_g6

0x341d,	// (0x000704bb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x341d,	// (0x000704bb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0007cbfe) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0007cbfe) list_medium_line_x4_t4_g7_g

0xb3b6,	// (0x00078454) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x4_t4_g7_t1

0xb3b6,	// (0x00078454) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x4_t4_g7_t2

0xb3b6,	// (0x00078454) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x4_t4_g7_t3

0xd7b2,	// (0x0007a850) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd7b2,	// (0x0007a850) list_medium_line_x4_t4_g7_t4

0xd7c5,	// (0x0007a863) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd7c5,	// (0x0007a863) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0007cc0d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0007cc0d) list_medium_line_x4_t4_g7_t

0x247b,	// (0x0006f519) list_single_dyc_row_pane_ParamLimits

0x247b,	// (0x0006f519) list_single_dyc_row_pane

0x981b,	// (0x000768b9) call5_gesture_pane_ParamLimits

0x981b,	// (0x000768b9) call5_gesture_pane

0x9863,	// (0x00076901) call5_windows_pane_ParamLimits

0x9863,	// (0x00076901) call5_windows_pane

0x98fc,	// (0x0007699a) call5_swipe_1_pane_cp_ParamLimits

0x98fc,	// (0x0007699a) call5_swipe_1_pane_cp

0x9908,	// (0x000769a6) call5_swipe_2_pane_cp_ParamLimits

0x9908,	// (0x000769a6) call5_swipe_2_pane_cp

0xb30c,	// (0x000783aa) call5_image_pane_cp

0x9914,	// (0x000769b2) popup_call5_audio_first_window_cp_ParamLimits

0x9914,	// (0x000769b2) popup_call5_audio_first_window_cp

0xddb6,	// (0x0007ae54) call5_swipe_1_pane_g1_cp_ParamLimits

0xddb6,	// (0x0007ae54) call5_swipe_1_pane_g1_cp

0xddfc,	// (0x0007ae9a) call5_swipe_1_pane_g2_cp

0xddcf,	// (0x0007ae6d) call5_swipe_1_pane_t1_cp_ParamLimits

0xddcf,	// (0x0007ae6d) call5_swipe_1_pane_t1_cp

0xddb6,	// (0x0007ae54) call5_swipe_2_pane_g1_cp_ParamLimits

0xddb6,	// (0x0007ae54) call5_swipe_2_pane_g1_cp

0xde04,	// (0x0007aea2) call5_swipe_2_pane_g2_cp

0xde0c,	// (0x0007aeaa) call5_swipe_2_pane_t1_cp_ParamLimits

0xde0c,	// (0x0007aeaa) call5_swipe_2_pane_t1_cp

0xb23c,	// (0x000782da) main_sp_fs_email_pane

0xde21,	// (0x0007aebf) main_sp_fs_listscroll_pane_te

0x2527,	// (0x0006f5c5) popup_sp_fs_action_menu_pane_ParamLimits

0x2527,	// (0x0006f5c5) popup_sp_fs_action_menu_pane

0xb384,	// (0x00078422) bg_sp_fs_ctrlbar_pane_g1

0x740a,	// (0x000744a8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x741c,	// (0x000744ba) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7413,	// (0x000744b1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb384,	// (0x00078422) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0007ccfb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0633,	// (0x0006d6d1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0633,	// (0x0006d6d1) bg_sp_fs_ctrlbar_ddmenu_pane

0xde2a,	// (0x0007aec8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde2a,	// (0x0007aec8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde36,	// (0x0007aed4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde36,	// (0x0007aed4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0007cd04) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0007cd04) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde42,	// (0x0007aee0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde42,	// (0x0007aee0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xf01d,	// (0x0007c0bb) list_medium_line_t2_right_icon_g1

0xb90c,	// (0x000789aa) list_medium_line_t2_right_icon_t1

0xb90c,	// (0x000789aa) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0007cd09) list_medium_line_t2_right_icon_t

0x0d3a,	// (0x0006ddd8) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_sp_fs_ctrlbar_pane

0x9966,	// (0x00076a04) main_sp_fs_ctrlbar_button_pane_cp01

0x996e,	// (0x00076a0c) main_sp_fs_ctrlbar_ddmenu_pane

0xde94,	// (0x0007af32) main_sp_fs_ctrlbar_pane_g1

0xdea0,	// (0x0007af3e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0007cd0e) main_sp_fs_ctrlbar_pane_g

0x99aa,	// (0x00076a48) main_sp_fs_ctrlbar_pane_t1

0x99f3,	// (0x00076a91) main_sp_fs_ctrlbar_pane

0x9a14,	// (0x00076ab2) main_sp_fs_listscroll_pane_te_cp01

0x255b,	// (0x0006f5f9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x255b,	// (0x0006f5f9) popup_sp_fs_action_menu_pane_cp01

0xb23c,	// (0x000782da) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb23c,	// (0x000782da) bg_sp_fs_highlight_list_pane_cp01

0x258b,	// (0x0006f629) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x258b,	// (0x0006f629) sp_fs_action_menu_list_gene_pane_g1

0xdec7,	// (0x0007af65) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdec7,	// (0x0007af65) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0007cd1c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0007cd1c) sp_fs_action_menu_list_gene_pane_g

0x259a,	// (0x0006f638) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x259a,	// (0x0006f638) sp_fs_action_menu_list_gene_pane_t1

0x25b2,	// (0x0006f650) sp_fs_action_menu_list_gene_pane_ParamLimits

0x25b2,	// (0x0006f650) sp_fs_action_menu_list_gene_pane

0xded4,	// (0x0007af72) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xded4,	// (0x0007af72) popup_sp_fs_action_menu_bg_pane

0x25d1,	// (0x0006f66f) sp_fs_action_menu_list_pane_ParamLimits

0x25d1,	// (0x0006f66f) sp_fs_action_menu_list_pane

0xdee2,	// (0x0007af80) sp_fs_scroll_pane_cp01_ParamLimits

0xdee2,	// (0x0007af80) sp_fs_scroll_pane_cp01

0xb90c,	// (0x000789aa) list_medium_line_plain_t2_t1

0xb90c,	// (0x000789aa) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0007cd09) list_medium_line_plain_t2_t

0xb90c,	// (0x000789aa) list_medium_line_plain_t3_t1

0xb90c,	// (0x000789aa) list_medium_line_plain_t3_t2

0xb90c,	// (0x000789aa) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x0007cd21) list_medium_line_plain_t3_t

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g2_g1

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x0007c279) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x0007c279) list_medium_line_x2_t2_g2_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t2_g2_t1

0xb3c9,	// (0x00078467) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0007c2ee) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0007c2ee) list_medium_line_x2_t2_g2_t

0xb39e,	// (0x0007843c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t4_g2_g1

0xdf08,	// (0x0007afa6) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdf08,	// (0x0007afa6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x0007cd28) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x0007cd28) list_medium_line_x2_t4_g2_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g2_t1

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g2_t2

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t4_g2_t3

0xb3c9,	// (0x00078467) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x0007c287) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x0007c287) list_medium_line_x2_t4_g2_t

0xf01d,	// (0x0007c0bb) list_medium_line_t3_right_iconx2_g1

0xb384,	// (0x00078422) list_medium_line_t3_right_iconx2_g2

0xdf19,	// (0x0007afb7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x0007cd2d) list_medium_line_t3_right_iconx2_g

0xb90c,	// (0x000789aa) list_medium_line_t3_right_iconx2_t1

0xb90c,	// (0x000789aa) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0007cd09) list_medium_line_t3_right_iconx2_t

0xb39e,	// (0x0007843c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x3_t4_g4_g1

0xb3aa,	// (0x00078448) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x3_t4_g4_g2

0xb39e,	// (0x0007843c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x3_t4_g4_g3

0xb3aa,	// (0x00078448) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x0007cd34) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x0007cd34) list_medium_line_x3_t4_g4_g

0xb3b6,	// (0x00078454) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x3_t4_g4_t1

0xb3b6,	// (0x00078454) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x3_t4_g4_t2

0xb3b6,	// (0x00078454) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x3_t4_g4_t3

0xdf22,	// (0x0007afc0) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdf22,	// (0x0007afc0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x0007cd3d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x0007cd3d) list_medium_line_x3_t4_g4_t

0x25f1,	// (0x0006f68f) list_single_dyc_row_text_pane_t1_ParamLimits

0x25f1,	// (0x0006f68f) list_single_dyc_row_text_pane_t1

0x2628,	// (0x0006f6c6) list_single_dyc_row_text_pane_t2_ParamLimits

0x2628,	// (0x0006f6c6) list_single_dyc_row_text_pane_t2

0xdf3f,	// (0x0007afdd) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf3f,	// (0x0007afdd) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x0007cd46) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x0007cd46) list_single_dyc_row_text_pane_t

0xdf63,	// (0x0007b001) list_single_dyc_row_pane_g1_ParamLimits

0xdf63,	// (0x0007b001) list_single_dyc_row_pane_g1

0xdf6f,	// (0x0007b00d) list_single_dyc_row_pane_g2_ParamLimits

0xdf6f,	// (0x0007b00d) list_single_dyc_row_pane_g2

0xdf7b,	// (0x0007b019) list_single_dyc_row_pane_g3_ParamLimits

0xdf7b,	// (0x0007b019) list_single_dyc_row_pane_g3

0xdf87,	// (0x0007b025) list_single_dyc_row_pane_g4_ParamLimits

0xdf87,	// (0x0007b025) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x0007cd53) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x0007cd53) list_single_dyc_row_pane_g

0xdf93,	// (0x0007b031) list_single_dyc_row_text_pane_ParamLimits

0xdf93,	// (0x0007b031) list_single_dyc_row_text_pane

0x2aaf,	// (0x0006fb4d) bg_sp_fs_scroll_pane

0xdfb2,	// (0x0007b050) thumb_sp_fs_scroll_pane

0xb39e,	// (0x0007843c) list_medium_line_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_g1

0xb3b6,	// (0x00078454) list_medium_line_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t1

0xb39e,	// (0x0007843c) list_medium_line_x2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_g1

0xef6a,	// (0x0007c008) list_medium_line_x2_g2_ParamLimits

0xef6a,	// (0x0007c008) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x0007ca2e) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x0007ca2e) list_medium_line_x2_g

0xb356,	// (0x000783f4) list_medium_line_x2_t1_ParamLimits

0xb356,	// (0x000783f4) list_medium_line_x2_t1

0xb39e,	// (0x0007843c) list_medium_line_x3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x3_g1

0xf025,	// (0x0007c0c3) list_medium_line_x3_g2_ParamLimits

0xf025,	// (0x0007c0c3) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x0007cd5c) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x0007cd5c) list_medium_line_x3_g

0xdfbb,	// (0x0007b059) list_medium_line_x3_t1_ParamLimits

0xdfbb,	// (0x0007b059) list_medium_line_x3_t1

0xdfcf,	// (0x0007b06d) thumb_sp_fs_scroll_pane_g1

0xdfd8,	// (0x0007b076) thumb_sp_fs_scroll_pane_g2

0xdfe1,	// (0x0007b07f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0007cd61) thumb_sp_fs_scroll_pane_g

0xdfcf,	// (0x0007b06d) bg_sp_fs_scroll_pane_g1

0xdfd8,	// (0x0007b076) bg_sp_fs_scroll_pane_g2

0xdfe1,	// (0x0007b07f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0007cd61) bg_sp_fs_scroll_pane_g

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g4_g1

0xb3aa,	// (0x00078448) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t3_g4_g2

0xb3aa,	// (0x00078448) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_x2_t3_g4_g3

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x0007c27e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x0007c27e) list_medium_line_x2_t3_g4_g

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g4_t1

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_x2_t3_g4_t2

0xb3c9,	// (0x00078467) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb3c9,	// (0x00078467) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0007c272) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0007c272) list_medium_line_x2_t3_g4_t

0xb39e,	// (0x0007843c) list_medium_line_g2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_g2_g1

0xef6a,	// (0x0007c008) list_medium_line_g2_g2_ParamLimits

0xef6a,	// (0x0007c008) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x0007ca2e) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x0007ca2e) list_medium_line_g2_g

0xb3b6,	// (0x00078454) list_medium_line_g2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_g2_t1

0xb39e,	// (0x0007843c) list_medium_line_t3_g2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t3_g2_g1

0xef6a,	// (0x0007c008) list_medium_line_t3_g2_g2_ParamLimits

0xef6a,	// (0x0007c008) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x0007ca2e) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x0007ca2e) list_medium_line_t3_g2_g

0xb3b6,	// (0x00078454) list_medium_line_t3_g2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_g2_t1

0xb3b6,	// (0x00078454) list_medium_line_t3_g2_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_g2_t2

0xb3b6,	// (0x00078454) list_medium_line_t3_g2_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x0007cd68) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x0007cd68) list_medium_line_t3_g2_t

0xdfea,	// (0x0007b088) list_medium_line_right_icon_g1

0xb90c,	// (0x000789aa) list_medium_line_right_icon_t1

0xb39e,	// (0x0007843c) list_medium_line_t2_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t2_g1

0xb3b6,	// (0x00078454) list_medium_line_t2_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t2_t1

0xb3b6,	// (0x00078454) list_medium_line_t2_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x0007ca33) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x0007ca33) list_medium_line_t2_t

0xb39e,	// (0x0007843c) list_medium_line_t3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t3_g1

0xb3b6,	// (0x00078454) list_medium_line_t3_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_t1

0xb3b6,	// (0x00078454) list_medium_line_t3_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_t2

0xb3b6,	// (0x00078454) list_medium_line_t3_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x0007cd68) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x0007cd68) list_medium_line_t3_t

0xb39e,	// (0x0007843c) list_medium_line_g3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_g3_g1

0xb3aa,	// (0x00078448) list_medium_line_g3_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_g3_g2

0xb3aa,	// (0x00078448) list_medium_line_g3_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x0007cd6f) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x0007cd6f) list_medium_line_g3_g

0xb3b6,	// (0x00078454) list_medium_line_g3_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_g3_t1

0xb39e,	// (0x0007843c) list_medium_line_t2_g3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t2_g3_g1

0xb3aa,	// (0x00078448) list_medium_line_t2_g3_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_t2_g3_g2

0xb3aa,	// (0x00078448) list_medium_line_t2_g3_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x0007cd6f) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x0007cd6f) list_medium_line_t2_g3_g

0xb3b6,	// (0x00078454) list_medium_line_t2_g3_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t2_g3_t1

0xb3b6,	// (0x00078454) list_medium_line_t2_g3_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x0007ca33) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x0007ca33) list_medium_line_t2_g3_t

0xb39e,	// (0x0007843c) list_medium_line_t3_g3_g1_ParamLimits

0xb39e,	// (0x0007843c) list_medium_line_t3_g3_g1

0xb3aa,	// (0x00078448) list_medium_line_t3_g3_g2_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_t3_g3_g2

0xb3aa,	// (0x00078448) list_medium_line_t3_g3_g3_ParamLimits

0xb3aa,	// (0x00078448) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x0007cd6f) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x0007cd6f) list_medium_line_t3_g3_g

0xb3b6,	// (0x00078454) list_medium_line_t3_g3_t1_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_g3_t1

0xb3b6,	// (0x00078454) list_medium_line_t3_g3_t2_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_g3_t2

0xb3b6,	// (0x00078454) list_medium_line_t3_g3_t3_ParamLimits

0xb3b6,	// (0x00078454) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x0007cd68) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x0007cd68) list_medium_line_t3_g3_t

0xf01d,	// (0x0007c0bb) list_medium_line_right_iconx2_g1

0xf01d,	// (0x0007c0bb) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0007cd76) list_medium_line_right_iconx2_g

0xb91b,	// (0x000789b9) list_medium_line_right_iconx2_t1

0xf01d,	// (0x0007c0bb) list_medium_line_t2_right_iconx2_g1

0xf01d,	// (0x0007c0bb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0007cd76) list_medium_line_t2_right_iconx2_g

0xb90c,	// (0x000789aa) list_medium_line_t2_right_iconx2_t1

0xb90c,	// (0x000789aa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0007cd09) list_medium_line_t2_right_iconx2_t

0xb90c,	// (0x000789aa) list_medium_line_x4_t4_t1

0xb90c,	// (0x000789aa) list_medium_line_x4_t4_t2

0xb90c,	// (0x000789aa) list_medium_line_x4_t4_t3

0xb90c,	// (0x000789aa) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x0007c340) list_medium_line_x4_t4_t

0x9a6d,	// (0x00076b0b) tport_appsw_pane_ParamLimits

0x9a6d,	// (0x00076b0b) tport_appsw_pane

0x9a7e,	// (0x00076b1c) tport_contact_pane_ParamLimits

0x9a7e,	// (0x00076b1c) tport_contact_pane

0x9a92,	// (0x00076b30) tport_listscroll_pane_ParamLimits

0x9a92,	// (0x00076b30) tport_listscroll_pane

0x9aaa,	// (0x00076b48) cell_tport_appsw_pane_ParamLimits

0x9aaa,	// (0x00076b48) cell_tport_appsw_pane

0x0e21,	// (0x0006debf) tport_appsw_pane_g1_ParamLimits

0x0e21,	// (0x0006debf) tport_appsw_pane_g1

0xdff3,	// (0x0007b091) tport_contact_pane_g1

0xdffc,	// (0x0007b09a) tport_contact_pane_t1

0xe00a,	// (0x0007b0a8) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x0007cd7b) tport_contact_pane_t

0xe018,	// (0x0007b0b6) list_tport_pane

0x380d,	// (0x000708ab) scroll_pane_cp_030

0xe029,	// (0x0007b0c7) cell_tport_appsw_pane_g1

0xe039,	// (0x0007b0d7) cell_tport_appsw_pane_t1

0xe047,	// (0x0007b0e5) grid_highlight_pane_cp019

0x9ae0,	// (0x00076b7e) list_tport_double_graphic_pane_ParamLimits

0x9ae0,	// (0x00076b7e) list_tport_double_graphic_pane

0xb23c,	// (0x000782da) list_highlight_pane_cp023_ParamLimits

0xb23c,	// (0x000782da) list_highlight_pane_cp023

0x9aed,	// (0x00076b8b) list_tport_double_graphic_pane_g1_ParamLimits

0x9aed,	// (0x00076b8b) list_tport_double_graphic_pane_g1

0x9afa,	// (0x00076b98) list_tport_double_graphic_pane_t1_ParamLimits

0x9afa,	// (0x00076b98) list_tport_double_graphic_pane_t1

0x9b0f,	// (0x00076bad) list_tport_double_graphic_pane_t2_ParamLimits

0x9b0f,	// (0x00076bad) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x0007cd87) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x0007cd87) list_tport_double_graphic_pane_t

0x2aaf,	// (0x0006fb4d) main_cale_note_pane

0x7f8b,	// (0x00075029) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7f8b,	// (0x00075029) cell_vitu2_function_top_wide_pane_cp01

0x954d,	// (0x000765eb) wait_bar_pane_cp05_ParamLimits

0xb23c,	// (0x000782da) listscroll_cmail_pane

0xe057,	// (0x0007b0f5) list_cmail_pane

0x9b21,	// (0x00076bbf) list_cmail_body_pane

0x9b21,	// (0x00076bbf) list_single_cmail_header_caption_pane

0x9b38,	// (0x00076bd6) list_single_cmail_header_detail_pane_ParamLimits

0x9b38,	// (0x00076bd6) list_single_cmail_header_detail_pane

0xe07a,	// (0x0007b118) list_single_cmail_header_caption_pane_t1

0x274b,	// (0x0006f7e9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x274b,	// (0x0006f7e9) list_single_cmail_header_detail_pane_g1

0xf032,	// (0x0007c0d0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf032,	// (0x0007c0d0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x0007cd8c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x0007cd8c) list_single_cmail_header_detail_pane_g

0x2761,	// (0x0006f7ff) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2761,	// (0x0006f7ff) list_single_cmail_header_detail_pane_t1

0xe0c2,	// (0x0007b160) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe0c2,	// (0x0007b160) list_single_cmail_header_editor_pane_bg

0xe0d9,	// (0x0007b177) list_cmail_body_pane_g1

0xe0e2,	// (0x0007b180) list_cmail_body_pane_t1

0xcd6a,	// (0x00079e08) list_single_cmail_header_editor_pane_bg_g1

0xb5e0,	// (0x0007867e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd7a,	// (0x00079e18) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd72,	// (0x00079e10) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcfc5,	// (0x0007a063) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd9a,	// (0x00079e38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd8a,	// (0x00079e28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd92,	// (0x00079e30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb5c0,	// (0x0007865e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9b63,	// (0x00076c01) calenote_gesture_pane_ParamLimits

0x9b63,	// (0x00076c01) calenote_gesture_pane

0x9b7f,	// (0x00076c1d) calenote_window_pane_ParamLimits

0x9b7f,	// (0x00076c1d) calenote_window_pane

0xe0f0,	// (0x0007b18e) popup_note_window_cp01

0x9b9b,	// (0x00076c39) calenote_swipe_1_pane_ParamLimits

0x9b9b,	// (0x00076c39) calenote_swipe_1_pane

0x9908,	// (0x000769a6) calenote_swipe_2_pane_ParamLimits

0x9908,	// (0x000769a6) calenote_swipe_2_pane

0xddb6,	// (0x0007ae54) calenote_swipe_1_pane_g1_ParamLimits

0xddb6,	// (0x0007ae54) calenote_swipe_1_pane_g1

0xddc3,	// (0x0007ae61) calenote_swipe_1_pane_g2_ParamLimits

0xddc3,	// (0x0007ae61) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0007ccf1) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0007ccf1) calenote_swipe_1_pane_g

0xe102,	// (0x0007b1a0) calenote_swipe_1_pane_t1_ParamLimits

0xe102,	// (0x0007b1a0) calenote_swipe_1_pane_t1

0xddb6,	// (0x0007ae54) calenote_swipe_2_pane_g1_ParamLimits

0xddb6,	// (0x0007ae54) calenote_swipe_2_pane_g1

0xe121,	// (0x0007b1bf) calenote_swipe_2_pane_g2_ParamLimits

0xe121,	// (0x0007b1bf) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x0007cd98) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x0007cd98) calenote_swipe_2_pane_g

0xe12d,	// (0x0007b1cb) calenote_swipe_2_pane_t1_ParamLimits

0xe12d,	// (0x0007b1cb) calenote_swipe_2_pane_t1

0x2aaf,	// (0x0006fb4d) main_mup_navstr_pane

0x6b13,	// (0x00073bb1) main_mup3_pane_t7_ParamLimits

0x6b13,	// (0x00073bb1) main_mup3_pane_t7

0xec35,	// (0x0007bcd3) main_mp4_pane_g6_ParamLimits

0xec35,	// (0x0007bcd3) main_mp4_pane_g6

0xede7,	// (0x0007be85) main_image3_pane_t4_ParamLimits

0xede7,	// (0x0007be85) main_image3_pane_t4

0x9bb0,	// (0x00076c4e) popup_navstr_preview_pane_ParamLimits

0x9bb0,	// (0x00076c4e) popup_navstr_preview_pane

0x9bc0,	// (0x00076c5e) scroll_navstr_pane_ParamLimits

0x9bc0,	// (0x00076c5e) scroll_navstr_pane

0x2aaf,	// (0x0006fb4d) bg_popup_preview_window_pane_cp04

0xe154,	// (0x0007b1f2) popup_navstr_preview_pane_t1

0x9bd4,	// (0x00076c72) scroll_navstr_pane_g1_ParamLimits

0x9bd4,	// (0x00076c72) scroll_navstr_pane_g1

0x9be8,	// (0x00076c86) scroll_navstr_pane_t1_ParamLimits

0x9be8,	// (0x00076c86) scroll_navstr_pane_t1

0xe0f9,	// (0x0007b197) bg_button_pane_cp014

0xe0f9,	// (0x0007b197) bg_button_pane_cp030

0x24cd,	// (0x0006f56b) list_double_fisheye_pane_g4_ParamLimits

0x24cd,	// (0x0006f56b) list_double_fisheye_pane_g4

0x24d9,	// (0x0006f577) list_double_fisheye_pane_g5_ParamLimits

0x24d9,	// (0x0006f577) list_double_fisheye_pane_g5

0xe06e,	// (0x0007b10c) sp_fs_scroll_pane_cp03

0xde94,	// (0x0007af32) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdea0,	// (0x0007af3e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0007cd0e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x99aa,	// (0x00076a48) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe066,	// (0x0007b104) sp_fs_scroll_pane_cp02

0x385f,	// (0x000708fd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x385f,	// (0x000708fd) popup_sp_fs_calendar_preview_list_single_pane

0x2aaf,	// (0x0006fb4d) main_cam6_pano_pane

0xb23c,	// (0x000782da) main_mup3_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) main_phacti_pane

0x9440,	// (0x000764de) bg_button_pane_cp11

0x9458,	// (0x000764f6) main_mobtv_info_pane_g2_ParamLimits

0x9458,	// (0x000764f6) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0007cc6e) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0007cc6e) main_mobtv_info_pane_g

0x960d,	// (0x000766ab) sc_clock_pane_t5_ParamLimits

0x960d,	// (0x000766ab) sc_clock_pane_t5

0x96b8,	// (0x00076756) main_radioblah_pane_g1_ParamLimits

0xdcf9,	// (0x0007ad97) main_radioblah_pane_t3_ParamLimits

0xdcf9,	// (0x0007ad97) main_radioblah_pane_t3

0xdd11,	// (0x0007adaf) main_radioblah_pane_t4_ParamLimits

0xdd11,	// (0x0007adaf) main_radioblah_pane_t4

0x96e0,	// (0x0007677e) main_radioblah_text_pane_ParamLimits

0x96e0,	// (0x0007677e) main_radioblah_text_pane

0x96f2,	// (0x00076790) main_radioblah_info_pane_g1_ParamLimits

0x9785,	// (0x00076823) main_radioblah_info_pane_t4_ParamLimits

0x9785,	// (0x00076823) main_radioblah_info_pane_t4

0xb23c,	// (0x000782da) main_sp_fs_calendar_pane

0x9bfe,	// (0x00076c9c) main_phacti_pane_g1

0x9c06,	// (0x00076ca4) phacti_note_pane_ParamLimits

0x9c06,	// (0x00076ca4) phacti_note_pane

0xe16b,	// (0x0007b209) phacti_term_pane_ParamLimits

0xe16b,	// (0x0007b209) phacti_term_pane

0xe180,	// (0x0007b21e) phacti_note_pane_t1_ParamLimits

0xe180,	// (0x0007b21e) phacti_note_pane_t1

0xe197,	// (0x0007b235) phacti_term_pane_g1

0xe19f,	// (0x0007b23d) phacti_term_pane_t1_ParamLimits

0xe19f,	// (0x0007b23d) phacti_term_pane_t1

0xe1c9,	// (0x0007b267) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe1d1,	// (0x0007b26f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0007cda2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe1d9,	// (0x0007b277) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe1d9,	// (0x0007b277) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1ef,	// (0x0007b28d) aid_popup_sp_fs_bg_corner_pane

0xb384,	// (0x00078422) popup_sp_fs_calendar_preview_bg_pane_g1

0x2aaf,	// (0x0006fb4d) popup_sp_fs_calendar_preview_bg_pane

0xe1f7,	// (0x0007b295) popup_sp_fs_calendar_preview_list_pane

0x0d3a,	// (0x0006ddd8) bg_main_sp_fs_cale_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_main_sp_fs_cale_pane

0xe1ff,	// (0x0007b29d) listscroll_cale_mrui_pane_ParamLimits

0xe1ff,	// (0x0007b29d) listscroll_cale_mrui_pane

0xe214,	// (0x0007b2b2) listscroll_sp_fs_schedule_track_pane

0xe21d,	// (0x0007b2bb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe21d,	// (0x0007b2bb) main_sp_fs_ctrlbar_pane_cp01

0xe230,	// (0x0007b2ce) main_sp_fs_ribbon_pane

0xe238,	// (0x0007b2d6) popup_sp_fs_cale_preview_window

0x9c69,	// (0x00076d07) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9c69,	// (0x00076d07) list_single_sp_fs_schedule_track_pane

0xb23c,	// (0x000782da) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb23c,	// (0x000782da) bg_sp_fs_highlight_list_pane_cp03

0x9c7d,	// (0x00076d1b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9c7d,	// (0x00076d1b) list_single_sp_fs_schedule_track_pane_g1

0x9c89,	// (0x00076d27) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c89,	// (0x00076d27) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x0007cda7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x0007cda7) list_single_sp_fs_schedule_track_pane_g

0x9c95,	// (0x00076d33) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9c95,	// (0x00076d33) list_single_sp_fs_schedule_track_pane_t1

0x9caf,	// (0x00076d4d) sp_fs_schedule_track_pane_ParamLimits

0x9caf,	// (0x00076d4d) sp_fs_schedule_track_pane

0xe24a,	// (0x0007b2e8) sp_fs_schedule_track_pane_g1

0xe252,	// (0x0007b2f0) sp_fs_schedule_track_pane_g2

0xe25a,	// (0x0007b2f8) sp_fs_schedule_track_pane_g3

0xe262,	// (0x0007b300) sp_fs_schedule_track_pane_g4

0xe26a,	// (0x0007b308) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x0007cdac) sp_fs_schedule_track_pane_g

0xcd6a,	// (0x00079e08) bg_sp_fs_schedule_viewer_highlight_g1

0xb5e0,	// (0x0007867e) bg_sp_fs_schedule_viewer_highlight_g2

0xcd72,	// (0x00079e10) bg_sp_fs_schedule_viewer_highlight_g3

0xcd7a,	// (0x00079e18) bg_sp_fs_schedule_viewer_highlight_g4

0xcfc5,	// (0x0007a063) bg_sp_fs_schedule_viewer_highlight_g5

0xcd8a,	// (0x00079e28) bg_sp_fs_schedule_viewer_highlight_g6

0xcd92,	// (0x00079e30) bg_sp_fs_schedule_viewer_highlight_g7

0xcd9a,	// (0x00079e38) bg_sp_fs_schedule_viewer_highlight_g8

0xb5c0,	// (0x0007865e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x0007cdb7) bg_sp_fs_schedule_viewer_highlight_g

0x2aaf,	// (0x0006fb4d) bg_main_sp_fs_ribbon_pane

0x9cc0,	// (0x00076d5e) main_sp_fs_ribbon_pane_g1

0xe272,	// (0x0007b310) main_sp_fs_ribbon_pane_t1

0x9cc9,	// (0x00076d67) main_sp_fs_ribbon_pane_t2

0xe281,	// (0x0007b31f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x0007cdca) main_sp_fs_ribbon_pane_t

0xe290,	// (0x0007b32e) main_sp_fs_ribbon_scheduler_pane

0xe298,	// (0x0007b336) bg_main_sp_fs_ribbon_pane_g1

0xe2a1,	// (0x0007b33f) bg_main_sp_fs_ribbon_pane_g2

0xe2aa,	// (0x0007b348) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x0007cdd1) bg_main_sp_fs_ribbon_pane_g

0xe2b2,	// (0x0007b350) main_sp_fs_ribbon_scheduler_pane_g1

0xe2bb,	// (0x0007b359) main_sp_fs_ribbon_scheduler_pane_g2

0xe2c4,	// (0x0007b362) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x0007cdd8) main_sp_fs_ribbon_scheduler_pane_g

0xe2cd,	// (0x0007b36b) list_cale_mrui_pane

0x9cd8,	// (0x00076d76) sp_fs_scroll_pane_cp07_ParamLimits

0x9cd8,	// (0x00076d76) sp_fs_scroll_pane_cp07

0x9cf0,	// (0x00076d8e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9cf0,	// (0x00076d8e) bg_sp_fs_schedule_viewer_highlight

0xe2da,	// (0x0007b378) list_single_sp_fs_schedule_track_pane_cp01

0xe2e2,	// (0x0007b380) list_sp_fs_schedule_track_pane

0xe2ea,	// (0x0007b388) sp_fs_scroll_pane_cp06_ParamLimits

0xe2ea,	// (0x0007b388) sp_fs_scroll_pane_cp06

0xb384,	// (0x00078422) bgmain_sp_fs_calendar_pane_g1

0x279d,	// (0x0006f83b) list_single_cale_mrui_pane_ParamLimits

0x279d,	// (0x0006f83b) list_single_cale_mrui_pane

0xe2fc,	// (0x0007b39a) list_single_cale_mrui_row_pane_ParamLimits

0xe2fc,	// (0x0007b39a) list_single_cale_mrui_row_pane

0x27bd,	// (0x0006f85b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x27bd,	// (0x0006f85b) list_single_cale_mrui_row_pane_g1

0x27f5,	// (0x0006f893) list_single_cale_mrui_row_pane_t1_ParamLimits

0x27f5,	// (0x0006f893) list_single_cale_mrui_row_pane_t1

0x2807,	// (0x0006f8a5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2807,	// (0x0006f8a5) list_single_cale_mrui_row_pane_t2

0x286d,	// (0x0006f90b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x286d,	// (0x0006f90b) list_single_cale_mrui_row_pane_t3

0x289c,	// (0x0006f93a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x289c,	// (0x0006f93a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x0007cde6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x0007cde6) list_single_cale_mrui_row_pane_t

0x28cb,	// (0x0006f969) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x28cb,	// (0x0006f969) list_single_cmail_header_editor_pane_bg_cp01

0x28ef,	// (0x0006f98d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x28ef,	// (0x0006f98d) list_single_cmail_header_editor_pane_bg_cp02

0x9d00,	// (0x00076d9e) main_radioblah_text_pane_t1_ParamLimits

0x9d00,	// (0x00076d9e) main_radioblah_text_pane_t1

0xe31f,	// (0x0007b3bd) cam6_indi_pane_cp01

0xe327,	// (0x0007b3c5) cam6_mode_pane_cp01

0xe32f,	// (0x0007b3cd) cam6_pano_pane

0xe338,	// (0x0007b3d6) cam6_zoom_pane_cp01

0xe340,	// (0x0007b3de) cam6_pano_image_pane

0xe349,	// (0x0007b3e7) cam6_pano_pane_g1

0xda60,	// (0x0007aafe) cam6_pano_pane_g2

0xe352,	// (0x0007b3f0) cam6_pano_pane_g3

0xe35b,	// (0x0007b3f9) cam6_pano_pane_g4

0x73ee,	// (0x0007448c) cam6_pano_pane_g5

0xe364,	// (0x0007b402) cam6_pano_pane_g6

0xe36c,	// (0x0007b40a) cam6_pano_pane_g7

0xe374,	// (0x0007b412) cam6_pano_pane_g8

0xe37d,	// (0x0007b41b) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x0007cdef) cam6_pano_pane_g

0x2aaf,	// (0x0006fb4d) main_browser_tag_pane

0xe14c,	// (0x0007b1ea) grid_navstr_albumart_pane

0xe386,	// (0x0007b424) cell_navstr_albumart_pane_ParamLimits

0xe386,	// (0x0007b424) cell_navstr_albumart_pane

0xbf67,	// (0x00079005) cell_navstr_albumart_pane_g1

0x0b86,	// (0x0006dc24) cell_navstr_albumart_pane_g2

0x0b96,	// (0x0006dc34) cell_navstr_albumart_pane_g3

0x0b8e,	// (0x0006dc2c) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x0007ce02) cell_navstr_albumart_pane_g

0x9d19,	// (0x00076db7) bt_list_pane_ParamLimits

0x9d19,	// (0x00076db7) bt_list_pane

0x9d2c,	// (0x00076dca) bt_list_pane_t1

0x9d3b,	// (0x00076dd9) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x0007ce0b) bt_list_pane_t

0x2aaf,	// (0x0006fb4d) main_cale_prevew_pane

0x9d4a,	// (0x00076de8) popup_cale_preview_window_ParamLimits

0x9d4a,	// (0x00076de8) popup_cale_preview_window

0xb23c,	// (0x000782da) bg_popup_preview_window_pane_cp05_ParamLimits

0xb23c,	// (0x000782da) bg_popup_preview_window_pane_cp05

0xe39d,	// (0x0007b43b) list_cale_preview_pane_ParamLimits

0xe39d,	// (0x0007b43b) list_cale_preview_pane

0x9d5f,	// (0x00076dfd) list_double_cale_preview_pane_ParamLimits

0x9d5f,	// (0x00076dfd) list_double_cale_preview_pane

0x9d70,	// (0x00076e0e) list_single_cale_preview_pane_ParamLimits

0x9d70,	// (0x00076e0e) list_single_cale_preview_pane

0xe3a9,	// (0x0007b447) list_single_cale_preview_pane_g1

0xe3b1,	// (0x0007b44f) list_single_cale_preview_pane_t1_ParamLimits

0xe3b1,	// (0x0007b44f) list_single_cale_preview_pane_t1

0x9d84,	// (0x00076e22) list_double_cale_preview_pane_g1

0x9d8c,	// (0x00076e2a) list_double_cale_preview_pane_t1_ParamLimits

0x9d8c,	// (0x00076e2a) list_double_cale_preview_pane_t1

0x9da1,	// (0x00076e3f) list_double_cale_preview_pane_t2_ParamLimits

0x9da1,	// (0x00076e3f) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x0007ce10) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x0007ce10) list_double_cale_preview_pane_t

0x2aaf,	// (0x0006fb4d) main_ezdial_pane

0xb23c,	// (0x000782da) main_sp_fs_email_pane_ParamLimits

0x9920,	// (0x000769be) cmail_ddmenu_btn01_pane_ParamLimits

0x9920,	// (0x000769be) cmail_ddmenu_btn01_pane

0x9933,	// (0x000769d1) cmail_ddmenu_btn02_pane_ParamLimits

0x9933,	// (0x000769d1) cmail_ddmenu_btn02_pane

0x9956,	// (0x000769f4) cmail_ddmenu_btn03_pane_ParamLimits

0x9956,	// (0x000769f4) cmail_ddmenu_btn03_pane

0x99f3,	// (0x00076a91) main_sp_fs_ctrlbar_pane_ParamLimits

0x9a14,	// (0x00076ab2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9b21,	// (0x00076bbf) list_cmail_body_pane_ParamLimits

0xe088,	// (0x0007b126) bg_button_pane_cp12

0xe091,	// (0x0007b12f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe091,	// (0x0007b12f) list_single_cmail_header_detail_pane_g3

0xe09e,	// (0x0007b13c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe09e,	// (0x0007b13c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x0007cd93) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x0007cd93) list_single_cmail_header_detail_pane_t

0xe1b4,	// (0x0007b252) phacti_term_pane_t2_ParamLimits

0xe1b4,	// (0x0007b252) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x0007cd9d) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x0007cd9d) phacti_term_pane_t

0xe3c6,	// (0x0007b464) aid_size_list_single_double

0x9db9,	// (0x00076e57) popup_ezdial_listscroll_window

0x9dcf,	// (0x00076e6d) popup_number_entry_window_cp01

0xb30c,	// (0x000783aa) bg_popup_call_pane_cp09

0xe3d2,	// (0x0007b470) ezdial_list_pane

0xe3da,	// (0x0007b478) scroll_pane_cp23

0x0d3a,	// (0x0006ddd8) bg_button_pane_cp028_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_button_pane_cp028

0x9ddb,	// (0x00076e79) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9ddb,	// (0x00076e79) cmail_ddmenu_btn01_pane_g1

0x9de7,	// (0x00076e85) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9de7,	// (0x00076e85) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x0007ce15) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x0007ce15) cmail_ddmenu_btn01_pane_g

0xe3e2,	// (0x0007b480) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe3e2,	// (0x0007b480) cmail_ddmenu_btn01_pane_t1

0x0d3a,	// (0x0006ddd8) bg_button_pane_cp029_ParamLimits

0x0d3a,	// (0x0006ddd8) bg_button_pane_cp029

0x9df3,	// (0x00076e91) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9df3,	// (0x00076e91) cmail_ddmenu_btn02_pane_g1

0x9e0b,	// (0x00076ea9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e0b,	// (0x00076ea9) cmail_ddmenu_btn02_pane_t1

0xb23c,	// (0x000782da) bg_button_pane_cp031_ParamLimits

0xb23c,	// (0x000782da) bg_button_pane_cp031

0x9df3,	// (0x00076e91) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9df3,	// (0x00076e91) cmail_ddmenu_btn03_pane_g1

0x9e0b,	// (0x00076ea9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e0b,	// (0x00076ea9) cmail_ddmenu_btn03_pane_t1

0x78d3,	// (0x00074971) cell_dialer2_keypad_pane_t1_ParamLimits

0x78ed,	// (0x0007498b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x78ed,	// (0x0007498b) cell_dialer2_keypad_pane_t1_copy1

0x92ac,	// (0x0007634a) ncimui_group_button_pane

0xb23c,	// (0x000782da) main_sp_fs_calendar_pane_ParamLimits

0x9b21,	// (0x00076bbf) list_single_cmail_header_caption_pane_ParamLimits

0xf03e,	// (0x0007c0dc) aid_recal_txt_sm_pane

0x2aaf,	// (0x0006fb4d) mian_recal_day_pane

0xe238,	// (0x0007b2d6) popup_sp_fs_cale_preview_window_ParamLimits

0xe3f7,	// (0x0007b495) list_recal_day_pane

0xe439,	// (0x0007b4d7) list_single_recal_day_pane_ParamLimits

0xe439,	// (0x0007b4d7) list_single_recal_day_pane

0xe44b,	// (0x0007b4e9) list_single_recal_day_pane_g1_ParamLimits

0xe44b,	// (0x0007b4e9) list_single_recal_day_pane_g1

0xe457,	// (0x0007b4f5) list_single_recal_day_pane_g2_ParamLimits

0xe457,	// (0x0007b4f5) list_single_recal_day_pane_g2

0xe463,	// (0x0007b501) list_single_recal_day_pane_g3_ParamLimits

0xe463,	// (0x0007b501) list_single_recal_day_pane_g3

0x290d,	// (0x0006f9ab) list_single_recal_day_pane_g4_ParamLimits

0x290d,	// (0x0006f9ab) list_single_recal_day_pane_g4

0xe46f,	// (0x0007b50d) list_single_recal_day_pane_g5_ParamLimits

0xe46f,	// (0x0007b50d) list_single_recal_day_pane_g5

0x2925,	// (0x0006f9c3) list_single_recal_day_pane_g6_ParamLimits

0x2925,	// (0x0006f9c3) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x0007ce24) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x0007ce24) list_single_recal_day_pane_g

0xe483,	// (0x0007b521) list_single_recal_day_pane_t1

0x2931,	// (0x0006f9cf) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x0007ce2f) list_single_recal_day_pane_t

0x9e2f,	// (0x00076ecd) ncimui_query_button_pane_ParamLimits

0x9e2f,	// (0x00076ecd) ncimui_query_button_pane

0x9e3f,	// (0x00076edd) ncimui_query_button_pane_t1_ParamLimits

0x9e3f,	// (0x00076edd) ncimui_query_button_pane_t1

0xe495,	// (0x0007b533) ncimui_query_button_pane_t2_ParamLimits

0xe495,	// (0x0007b533) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x0007ce34) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x0007ce34) ncimui_query_button_pane_t

0x9e52,	// (0x00076ef0) query_button_pane_ParamLimits

0x9e52,	// (0x00076ef0) query_button_pane

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp0028

0xe4a8,	// (0x0007b546) query_button_pane_t1

0x5d58,	// (0x00072df6) main_tport_pane_ParamLimits

0x9a34,	// (0x00076ad2) bg_popup_window_pane_cp01_ParamLimits

0x9a34,	// (0x00076ad2) bg_popup_window_pane_cp01

0x9a4b,	// (0x00076ae9) heading_pane_cp08_ParamLimits

0x9a4b,	// (0x00076ae9) heading_pane_cp08

0x9a5c,	// (0x00076afa) heading_pane_cp07_ParamLimits

0x9a5c,	// (0x00076afa) heading_pane_cp07

0xe029,	// (0x0007b0c7) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x0007cd80) cell_tport_appsw_pane_g

0xbf5f,	// (0x00078ffd) input_candi_list_open_g1

0xb7bb,	// (0x00078859) list_cale_time_pane_g6_ParamLimits

0xb7bb,	// (0x00078859) list_cale_time_pane_g6

0x65a4,	// (0x00073642) aid_size_touch_calib_1_ParamLimits

0x65a4,	// (0x00073642) aid_size_touch_calib_1

0x65b6,	// (0x00073654) aid_size_touch_calib_2_ParamLimits

0x65b6,	// (0x00073654) aid_size_touch_calib_2

0x65cc,	// (0x0007366a) aid_size_touch_calib_3_ParamLimits

0x65cc,	// (0x0007366a) aid_size_touch_calib_3

0x65e4,	// (0x00073682) aid_size_touch_calib_4_ParamLimits

0x65e4,	// (0x00073682) aid_size_touch_calib_4

0x65f8,	// (0x00073696) main_touch_calib_button_group_pane_ParamLimits

0x65f8,	// (0x00073696) main_touch_calib_button_group_pane

0x6610,	// (0x000736ae) main_touch_calib_pane_g1_ParamLimits

0x6622,	// (0x000736c0) main_touch_calib_pane_g2_ParamLimits

0x6634,	// (0x000736d2) main_touch_calib_pane_g3_ParamLimits

0x6646,	// (0x000736e4) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x0007c77b) main_touch_calib_pane_g_ParamLimits

0x6658,	// (0x000736f6) main_touch_calib_pane_t1_ParamLimits

0x6670,	// (0x0007370e) main_touch_calib_pane_t2_ParamLimits

0x6688,	// (0x00073726) main_touch_calib_pane_t3_ParamLimits

0x669a,	// (0x00073738) main_touch_calib_pane_t4_ParamLimits

0x66ac,	// (0x0007374a) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x0007c784) main_touch_calib_pane_t_ParamLimits

0x6d92,	// (0x00073e30) list_single_fp_cale_pane_g3_ParamLimits

0x6d92,	// (0x00073e30) list_single_fp_cale_pane_g3

0xb23c,	// (0x000782da) bg_button_pane_cp012_ParamLimits

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp03_ParamLimits

0x86e9,	// (0x00075787) cell_vitu2_function_top_pane_g1_ParamLimits

0xb23c,	// (0x000782da) bg_vkb2_func_pane_cp04_ParamLimits

0x923c,	// (0x000762da) main_ncimui_button_group_pane_ParamLimits

0x923c,	// (0x000762da) main_ncimui_button_group_pane

0x929a,	// (0x00076338) main_ncimui_pane_t3_ParamLimits

0x929a,	// (0x00076338) main_ncimui_pane_t3

0xe162,	// (0x0007b200) phacti_button_group_pane

0xe3c6,	// (0x0007b464) aid_size_list_single_double_ParamLimits

0x9db9,	// (0x00076e57) popup_ezdial_listscroll_window_ParamLimits

0x9dcf,	// (0x00076e6d) popup_number_entry_window_cp01_ParamLimits

0x9e64,	// (0x00076f02) phacti_button_pane_ParamLimits

0x9e64,	// (0x00076f02) phacti_button_pane

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp14

0xe4b6,	// (0x0007b554) phacti_button_pane_t1

0x9e73,	// (0x00076f11) main_touch_calib_button_pane_ParamLimits

0x9e73,	// (0x00076f11) main_touch_calib_button_pane

0x35d4,	// (0x00070672) bg_button_pane_cp18_ParamLimits

0x35d4,	// (0x00070672) bg_button_pane_cp18

0x9e8e,	// (0x00076f2c) main_touch_calib_button_pane_t1_ParamLimits

0x9e8e,	// (0x00076f2c) main_touch_calib_button_pane_t1

0x9ea4,	// (0x00076f42) main_touch_calib_button_pane_t2_ParamLimits

0x9ea4,	// (0x00076f42) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x0007ce39) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x0007ce39) main_touch_calib_button_pane_t

0x2aaf,	// (0x0006fb4d) cell_ncimui_button_pane

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp032

0xe4c4,	// (0x0007b562) cell_ncimui_button_pane_t1

0xedc7,	// (0x0007be65) image3_infobar_pane_ParamLimits

0xedc7,	// (0x0007be65) image3_infobar_pane

0x9635,	// (0x000766d3) fs_bigclock_status_pane_ParamLimits

0x9635,	// (0x000766d3) fs_bigclock_status_pane

0x9642,	// (0x000766e0) main_fs_bigclock_clock_pane_ParamLimits

0x9642,	// (0x000766e0) main_fs_bigclock_clock_pane

0x9664,	// (0x00076702) main_fs_bigclock_indi_pane_ParamLimits

0x9664,	// (0x00076702) main_fs_bigclock_indi_pane

0x968e,	// (0x0007672c) main_fs_bigclock_swipe_pane_ParamLimits

0x968e,	// (0x0007672c) main_fs_bigclock_swipe_pane

0x2aaf,	// (0x0006fb4d) main_fs_clock_dumped_data

0xdb6d,	// (0x0007ac0b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb6d,	// (0x0007ac0b) list_single_fs_bigclock_indicator_pane_g1

0xdb87,	// (0x0007ac25) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb87,	// (0x0007ac25) list_single_fs_bigclock_indicator_pane_g2

0xdba1,	// (0x0007ac3f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdba1,	// (0x0007ac3f) list_single_fs_bigclock_indicator_pane_g3

0xdbbb,	// (0x0007ac59) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbbb,	// (0x0007ac59) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0007cca2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0007cca2) list_single_fs_bigclock_indicator_pane_g

0xdbe4,	// (0x0007ac82) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbe4,	// (0x0007ac82) list_single_fs_bigclock_indicator_pane_t1

0xdc0c,	// (0x0007acaa) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc0c,	// (0x0007acaa) list_single_fs_bigclock_indicator_pane_t2

0xdc34,	// (0x0007acd2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc34,	// (0x0007acd2) list_single_fs_bigclock_indicator_pane_t3

0xdc5c,	// (0x0007acfa) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc5c,	// (0x0007acfa) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0007ccad) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0007ccad) list_single_fs_bigclock_indicator_pane_t

0xe4d2,	// (0x0007b570) image3_infobar_fav_pane_ParamLimits

0xe4d2,	// (0x0007b570) image3_infobar_fav_pane

0xe4e2,	// (0x0007b580) image3_infobar_loc_pane_ParamLimits

0xe4e2,	// (0x0007b580) image3_infobar_loc_pane

0xe4f6,	// (0x0007b594) image3_infobar_time_pane_ParamLimits

0xe4f6,	// (0x0007b594) image3_infobar_time_pane

0xb384,	// (0x00078422) image3_infobar_time_pane_g1

0xe506,	// (0x0007b5a4) image3_infobar_time_pane_t1

0xb384,	// (0x00078422) image3_infobar_loc_pane_g1

0xe514,	// (0x0007b5b2) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x0007ce3e) image3_infobar_loc_pane_g

0xe51c,	// (0x0007b5ba) image3_infobar_loc_pane_t1

0xb384,	// (0x00078422) image3_infobar_fav_pane_g1

0xe52a,	// (0x0007b5c8) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x0007ce43) image3_infobar_fav_pane_g

0xe532,	// (0x0007b5d0) fs_bigclock_status_battery_pane

0xe53b,	// (0x0007b5d9) fs_bigclock_status_signal_pane

0xe544,	// (0x0007b5e2) fs_bigclock_status_title_pane

0xe54d,	// (0x0007b5eb) fs_bigclock_status_signal_pane_g1

0xe556,	// (0x0007b5f4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x0007ce48) fs_bigclock_status_signal_pane_g

0xe55e,	// (0x0007b5fc) fs_bigclock_status_battery_pane_g1

0xe567,	// (0x0007b605) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x0007ce4d) fs_bigclock_status_battery_pane_g

0xe56f,	// (0x0007b60d) fs_bigclock_status_title_pane_t1

0x9ec2,	// (0x00076f60) main_fs_bigclock_clock_pane_g1

0x9ed4,	// (0x00076f72) main_fs_bigclock_clock_pane_g2

0x9ee5,	// (0x00076f83) main_fs_bigclock_clock_pane_g3

0x9ee5,	// (0x00076f83) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x0007ce52) main_fs_bigclock_clock_pane_g

0x9ef8,	// (0x00076f96) main_fs_bigclock_clock_pane_t1

0x9f13,	// (0x00076fb1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x0007ce5b) main_fs_bigclock_clock_pane_t

0xe57d,	// (0x0007b61b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe57d,	// (0x0007b61b) list_single_fs_bigclock_indicator_pane

0xe58e,	// (0x0007b62c) list_single_fs_bigclock_pane_ParamLimits

0xe58e,	// (0x0007b62c) list_single_fs_bigclock_pane

0xe5b4,	// (0x0007b652) main_fs_bigclock_indicator_pane_t1

0xe5c3,	// (0x0007b661) list_single_fs_bigclock_pane_g1

0xe5cb,	// (0x0007b669) list_single_fs_bigclock_pane_t1

0xb384,	// (0x00078422) main_fs_bigclock_swipe_pane_g1

0xe60b,	// (0x0007b6a9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x0007ce6c) main_fs_bigclock_swipe_pane_g

0xe613,	// (0x0007b6b1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe613,	// (0x0007b6b1) main_fs_bigclock_swipe_pane_t1

0x500e,	// (0x000720ac) call_type_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) main_btmg_pane

0x27e9,	// (0x0006f887) list_single_cale_mrui_row_pane_g2_ParamLimits

0x27e9,	// (0x0006f887) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x0007cddf) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x0007cddf) list_single_cale_mrui_row_pane_g

0xe420,	// (0x0007b4be) list_recal_vselct_arw_lo_pane

0xe428,	// (0x0007b4c6) list_recal_vselct_arw_up_pane

0xe430,	// (0x0007b4ce) list_recal_vselct_pane

0xe630,	// (0x0007b6ce) btmg_button_pane

0x9f73,	// (0x00077011) main_btmg_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp044

0xe638,	// (0x0007b6d6) btmg_button_pane_t1

0x0d26,	// (0x0006ddc4) aid_listscroll_gen

0xb23c,	// (0x000782da) main_cntbar_detail_pane

0xe04f,	// (0x0007b0ed) list_cmail_folder_pane

0xe06e,	// (0x0007b10c) sp_fs_scroll_pane_cp03_ParamLimits

0x2943,	// (0x0006f9e1) list_single_fs_dyc_pane_cp01_ParamLimits

0x2943,	// (0x0006f9e1) list_single_fs_dyc_pane_cp01

0xe646,	// (0x0007b6e4) aid_size_cmail_indent

0xe64f,	// (0x0007b6ed) list_single_dyc_row_pane_cp01

0x9fa3,	// (0x00077041) cntbar_detail_list_pane_ParamLimits

0x9fa3,	// (0x00077041) cntbar_detail_list_pane

0x9fe9,	// (0x00077087) main_cntbar_detail_cont_pane_ParamLimits

0x9fe9,	// (0x00077087) main_cntbar_detail_cont_pane

0x9ffd,	// (0x0007709b) scroll_pane_cp032_ParamLimits

0x9ffd,	// (0x0007709b) scroll_pane_cp032

0xa009,	// (0x000770a7) cntbar_detail_list_event_pane_ParamLimits

0xa009,	// (0x000770a7) cntbar_detail_list_event_pane

0x9fb3,	// (0x00077051) cntbar_detail_list_shct_pane

0xe658,	// (0x0007b6f6) aid_list_gen

0x380d,	// (0x000708ab) aid_scroll

0xd2d3,	// (0x0007a371) aid_size_touch_scroll_bar

0x2431,	// (0x0006f4cf) aid_list_double

0xd2ed,	// (0x0007a38b) aid_list_single

0xd2ed,	// (0x0007a38b) aid_list_single_lg

0x2959,	// (0x0006f9f7) aid_list_z_g_a_sm

0x2961,	// (0x0006f9ff) aid_list_z_g_d

0x2969,	// (0x0006fa07) aid_txt_z_prm

0x2977,	// (0x0006fa15) aid_txt_z_prm_cp01

0x2985,	// (0x0006fa23) aid_txt_z_sec

0xa01a,	// (0x000770b8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa01a,	// (0x000770b8) main_cntbar_detail_cont_pane_g1

0xa02e,	// (0x000770cc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa02e,	// (0x000770cc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x0007ce71) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x0007ce71) main_cntbar_detail_cont_pane_g

0xe661,	// (0x0007b6ff) main_cntbar_detail_cont_pane_t1

0xe66f,	// (0x0007b70d) main_cntbar_detail_cont_pane_t2

0xe67d,	// (0x0007b71b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x0007ce76) main_cntbar_detail_cont_pane_t

0xa03e,	// (0x000770dc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa03e,	// (0x000770dc) cell_cntbar_detail_list_shct_pane

0xe68b,	// (0x0007b729) cntbar_detail_list_shct_pane_g1

0xe694,	// (0x0007b732) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x0007ce7d) cntbar_detail_list_shct_pane_g

0xa050,	// (0x000770ee) cntbar_detail_list_event_pane_g1_ParamLimits

0xa050,	// (0x000770ee) cntbar_detail_list_event_pane_g1

0xa05c,	// (0x000770fa) cntbar_detail_list_event_pane_g2_ParamLimits

0xa05c,	// (0x000770fa) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x0007ce82) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x0007ce82) cntbar_detail_list_event_pane_g

0xa0c8,	// (0x00077166) cntbar_detail_list_event_pane_t1_ParamLimits

0xa0c8,	// (0x00077166) cntbar_detail_list_event_pane_t1

0xa0dd,	// (0x0007717b) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0dd,	// (0x0007717b) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x0007ce8f) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x0007ce8f) cntbar_detail_list_event_pane_t

0xb384,	// (0x00078422) cell_cntbar_detail_list_shct_pane_g1

0xbdb5,	// (0x00078e53) navi_pane_mv_g3

0xb23c,	// (0x000782da) main_cntbar_detail_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) main_notif_wgt_pane

0xebc3,	// (0x0007bc61) aid_tch_main_mp4_pane_g4

0xedbf,	// (0x0007be5d) popup_slider_window_cp02

0xe416,	// (0x0007b4b4) list_recal_day_event_pane

0x9f7b,	// (0x00077019) cntbar_detail_btn_pane_ParamLimits

0x9f7b,	// (0x00077019) cntbar_detail_btn_pane

0x9f8e,	// (0x0007702c) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f8e,	// (0x0007702c) cntbar_detail_btn_pane_cp01

0x9fb3,	// (0x00077051) cntbar_detail_list_shct_pane_ParamLimits

0x9fc3,	// (0x00077061) cntbar_detail_pane_g1_ParamLimits

0x9fc3,	// (0x00077061) cntbar_detail_pane_g1

0x9fd3,	// (0x00077071) cntbar_detail_pane_t1_ParamLimits

0x9fd3,	// (0x00077071) cntbar_detail_pane_t1

0xa068,	// (0x00077106) cntbar_detail_list_event_pane_g3_ParamLimits

0xa068,	// (0x00077106) cntbar_detail_list_event_pane_g3

0xa080,	// (0x0007711e) cntbar_detail_list_event_pane_g4_ParamLimits

0xa080,	// (0x0007711e) cntbar_detail_list_event_pane_g4

0xa098,	// (0x00077136) cntbar_detail_list_event_pane_g5_ParamLimits

0xa098,	// (0x00077136) cntbar_detail_list_event_pane_g5

0xa0b0,	// (0x0007714e) cntbar_detail_list_event_pane_g6_ParamLimits

0xa0b0,	// (0x0007714e) cntbar_detail_list_event_pane_g6

0xa0f2,	// (0x00077190) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0f2,	// (0x00077190) cntbar_detail_list_event_pane_t3

0xa104,	// (0x000771a2) popup_notif_wgt_window_ParamLimits

0xa104,	// (0x000771a2) popup_notif_wgt_window

0xa119,	// (0x000771b7) popup_submenu_window_cp01_ParamLimits

0xa119,	// (0x000771b7) popup_submenu_window_cp01

0xb30c,	// (0x000783aa) bg_popup_window_pane_cp10

0xe69d,	// (0x0007b73b) listscroll_notif_wgt_pane

0xe6ae,	// (0x0007b74c) list_notif_wgt_window

0xe6b7,	// (0x0007b755) scroll_pane_cp033

0xa129,	// (0x000771c7) list_notif_wgt_row_pane_ParamLimits

0xa129,	// (0x000771c7) list_notif_wgt_row_pane

0xe6c0,	// (0x0007b75e) aid_size_list_notif_wgt_del

0xe6cd,	// (0x0007b76b) list_notif_wgt_row_pane_g1

0xe6d9,	// (0x0007b777) list_notif_wgt_row_pane_g2

0xe6ed,	// (0x0007b78b) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x0007ce96) list_notif_wgt_row_pane_g

0xe6fa,	// (0x0007b798) list_notif_wgt_row_pane_t1

0xe710,	// (0x0007b7ae) list_notif_wgt_row_pane_t2

0xe722,	// (0x0007b7c0) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x0007ce9d) list_notif_wgt_row_pane_t

0xcfcd,	// (0x0007a06b) list_recal_day_event_pane_g1

0xe734,	// (0x0007b7d2) list_recal_day_event_pane_t1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp045

0xa139,	// (0x000771d7) cntbar_detail_btn_pane_t1

0x0d3a,	// (0x0006ddd8) main_callh_pane_ParamLimits

0x0d3a,	// (0x0006ddd8) main_callh_pane

0x2aaf,	// (0x0006fb4d) main_coverflow0_pane

0x2aaf,	// (0x0006fb4d) main_wgtman_pane

0x96a2,	// (0x00076740) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x96a2,	// (0x00076740) main_fs_bigclock_unlock_btn_pane

0xe021,	// (0x0007b0bf) bg_button_pane_cp16

0xe031,	// (0x0007b0cf) cell_tport_appsw_pane_g3

0xa147,	// (0x000771e5) cf0_flow_pane_ParamLimits

0xa147,	// (0x000771e5) cf0_flow_pane

0xe743,	// (0x0007b7e1) listscroll_cf0_pane

0xe74c,	// (0x0007b7ea) main_cf0_pane_g1

0xa15c,	// (0x000771fa) main_cf0_pane_t1_ParamLimits

0xa15c,	// (0x000771fa) main_cf0_pane_t1

0xa171,	// (0x0007720f) main_cf0_pane_t2_ParamLimits

0xa171,	// (0x0007720f) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x0007cea9) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x0007cea9) main_cf0_pane_t

0xe75e,	// (0x0007b7fc) scroll_pane_cp11

0xa186,	// (0x00077224) cf0_flow_pane_g1

0xa18e,	// (0x0007722c) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x0007ceae) cf0_flow_pane_g

0xa196,	// (0x00077234) cf0_flow_pane_t1

0x2aaf,	// (0x0006fb4d) main_call6_pane

0x2aaf,	// (0x0006fb4d) main_calllock_pane

0xa1a4,	// (0x00077242) call6_btn_grp_pane_ParamLimits

0xa1a4,	// (0x00077242) call6_btn_grp_pane

0xa1ba,	// (0x00077258) call6_pane_g1_ParamLimits

0xa1ba,	// (0x00077258) call6_pane_g1

0xa1cd,	// (0x0007726b) popup_call6_1st_window_ParamLimits

0xa1cd,	// (0x0007726b) popup_call6_1st_window

0xa1dc,	// (0x0007727a) popup_call6_2nd_window_ParamLimits

0xa1dc,	// (0x0007727a) popup_call6_2nd_window

0xa1eb,	// (0x00077289) cell_call6_btn_pane_ParamLimits

0xa1eb,	// (0x00077289) cell_call6_btn_pane

0xb30c,	// (0x000783aa) bg_popup_call2_in_pane_cp03

0xe767,	// (0x0007b805) popup_call6_1st_window_g1

0xe76f,	// (0x0007b80d) popup_call6_1st_window_g2

0xe777,	// (0x0007b815) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x0007ceb3) popup_call6_1st_window_g

0xe77f,	// (0x0007b81d) popup_call6_1st_window_t1

0xe78e,	// (0x0007b82c) popup_call6_1st_window_t2

0xe79c,	// (0x0007b83a) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x0007ceba) popup_call6_1st_window_t

0xb30c,	// (0x000783aa) bg_popup_call2_in_pane_cp04

0xe7aa,	// (0x0007b848) popup_call6_2nd_window_g1

0xe7b2,	// (0x0007b850) popup_call6_2nd_window_g2

0xe7ba,	// (0x0007b858) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x0007cec1) popup_call6_2nd_window_g

0xe7c2,	// (0x0007b860) popup_call6_2nd_window_t1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp15

0xf047,	// (0x0007c0e5) cell_call6_btn_pane_g1

0xf050,	// (0x0007c0ee) cell_call6_btn_pane_t1

0xa1ff,	// (0x0007729d) listscroll_wgtman_pane_ParamLimits

0xa1ff,	// (0x0007729d) listscroll_wgtman_pane

0xa220,	// (0x000772be) wgtman_btn_pane_ParamLimits

0xa220,	// (0x000772be) wgtman_btn_pane

0xbb15,	// (0x00078bb3) aid_scroll_copy1

0xe7d1,	// (0x0007b86f) list_wgtman_pane

0xa260,	// (0x000772fe) wgtman_btn_pane_g1_ParamLimits

0xa260,	// (0x000772fe) wgtman_btn_pane_g1

0xa28c,	// (0x0007732a) wgtman_btn_pane_t1_ParamLimits

0xa28c,	// (0x0007732a) wgtman_btn_pane_t1

0xe7db,	// (0x0007b879) wgtman_btn_pane_t2_ParamLimits

0xe7db,	// (0x0007b879) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x0007cec8) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x0007cec8) wgtman_btn_pane_t

0xa2c9,	// (0x00077367) listrow_wgtman_pane_ParamLimits

0xa2c9,	// (0x00077367) listrow_wgtman_pane

0xa2db,	// (0x00077379) listrow_wgtman_pane_g1

0xa2e8,	// (0x00077386) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x0007cecd) listrow_wgtman_pane_g

0x2993,	// (0x0006fa31) listrow_wgtman_pane_t1

0x29ab,	// (0x0006fa49) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x0007ced2) listrow_wgtman_pane_t

0x29d1,	// (0x0006fa6f) wait_bar_pane_cp09

0xe7f2,	// (0x0007b890) main_calllock_btn_pane

0xe7fa,	// (0x0007b898) main_calllock_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp17

0xe803,	// (0x0007b8a1) main_calllock_btn_pane_g1

0xe80c,	// (0x0007b8aa) main_calllock_btn_pane_t1

0x2aaf,	// (0x0006fb4d) main_dialer3_pane

0x2aaf,	// (0x0006fb4d) main_fmrd2_pane

0xb384,	// (0x00078422) main_fs_bigclock_unlock_btn_pane_g1

0xe823,	// (0x0007b8c1) main_fs_bigclock_unlock_btn_pane_t1

0xa300,	// (0x0007739e) area_fmrd2_info_pane_ParamLimits

0xa300,	// (0x0007739e) area_fmrd2_info_pane

0xa30f,	// (0x000773ad) area_fmrd2_visual_pane_ParamLimits

0xa30f,	// (0x000773ad) area_fmrd2_visual_pane

0xa31d,	// (0x000773bb) fmrd2_indi_pane_ParamLimits

0xa31d,	// (0x000773bb) fmrd2_indi_pane

0xa32a,	// (0x000773c8) area_fmrd2_visual_pane_g1

0xa332,	// (0x000773d0) area_fmrd2_visual_pane_t1

0xa340,	// (0x000773de) area_fmrd2_visual_pane_t2

0xa34e,	// (0x000773ec) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x0007cedc) area_fmrd2_visual_pane_t

0xa35c,	// (0x000773fa) area_fmrd2_info_pane_g1

0xa364,	// (0x00077402) area_fmrd2_info_pane_t1

0xa372,	// (0x00077410) area_fmrd2_info_pane_t2

0xa380,	// (0x0007741e) area_fmrd2_info_pane_t3

0xa38e,	// (0x0007742c) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x0007cee3) area_fmrd2_info_pane_t

0xa39c,	// (0x0007743a) fmrd2_indi_pane_t1

0xa3aa,	// (0x00077448) fmrd2_indi_pane_t2

0xa3b8,	// (0x00077456) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x0007ceec) fmrd2_indi_pane_t

0xdbca,	// (0x0007ac68) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbca,	// (0x0007ac68) list_single_fs_bigclock_indicator_pane_g5

0xdc78,	// (0x0007ad16) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc78,	// (0x0007ad16) list_single_fs_bigclock_indicator_pane_t5

0x9c1a,	// (0x00076cb8) aid_cell_bcale_month_pane_ParamLimits

0x9c1a,	// (0x00076cb8) aid_cell_bcale_month_pane

0x9c38,	// (0x00076cd6) bcale_month_pane_ParamLimits

0x9c38,	// (0x00076cd6) bcale_month_pane

0x9c50,	// (0x00076cee) bcale_preview_pane_ParamLimits

0x9c50,	// (0x00076cee) bcale_preview_pane

0xe5cb,	// (0x0007b669) list_single_fs_bigclock_pane_t1_ParamLimits

0xe5e7,	// (0x0007b685) list_single_fs_bigclock_pane_t2_ParamLimits

0xe5e7,	// (0x0007b685) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x0007ce67) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x0007ce67) list_single_fs_bigclock_pane_t

0xe81b,	// (0x0007b8b9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x0007ced7) main_fs_bigclock_unlock_btn_pane_g

0xa3c6,	// (0x00077464) aid_dia3_key_size_ParamLimits

0xa3c6,	// (0x00077464) aid_dia3_key_size

0xa3d5,	// (0x00077473) aid_dia3_listrow_size_ParamLimits

0xa3d5,	// (0x00077473) aid_dia3_listrow_size

0xa3e8,	// (0x00077486) dia3_keypad_fun_pane_ParamLimits

0xa3e8,	// (0x00077486) dia3_keypad_fun_pane

0xa3fc,	// (0x0007749a) dia3_keypad_num_pane_ParamLimits

0xa3fc,	// (0x0007749a) dia3_keypad_num_pane

0xa40d,	// (0x000774ab) dia3_listscroll_pane_ParamLimits

0xa40d,	// (0x000774ab) dia3_listscroll_pane

0xa41e,	// (0x000774bc) dia3_numentry_pane_ParamLimits

0xa41e,	// (0x000774bc) dia3_numentry_pane

0xe831,	// (0x0007b8cf) dia3_list_pane

0xe83a,	// (0x0007b8d8) scroll_pane_cp12

0x2aaf,	// (0x0006fb4d) bg_dia3_numentry_pane

0xa432,	// (0x000774d0) dia3_numentry_pane_t1

0xa441,	// (0x000774df) cell_dia3_key_num_pane

0xa449,	// (0x000774e7) cell_dia3_key0_fun_pane_ParamLimits

0xa449,	// (0x000774e7) cell_dia3_key0_fun_pane

0xa45d,	// (0x000774fb) cell_dia3_key1_fun_pane_ParamLimits

0xa45d,	// (0x000774fb) cell_dia3_key1_fun_pane

0xa474,	// (0x00077512) dia3_listrow_pane

0xd8d9,	// (0x0007a977) bg_dia3_numentry_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp21

0xe843,	// (0x0007b8e1) cell_dia3_key_num_pane_t1

0xe851,	// (0x0007b8ef) cell_dia3_key_num_pane_t2

0xe860,	// (0x0007b8fe) cell_dia3_key_num_pane_t3

0xe86f,	// (0x0007b90d) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x0007cef3) cell_dia3_key_num_pane_t

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp19

0xe87e,	// (0x0007b91c) cell_dia3_key0_fun_pane_g1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp20

0xa486,	// (0x00077524) cell_dia3_key1_fun_pane_g1

0xa48e,	// (0x0007752c) area_left_week_number_pane

0xa49a,	// (0x00077538) area_top_day_name_pane

0xa4ab,	// (0x00077549) frame_month_view_pane

0xe886,	// (0x0007b924) grid_month_view_pane

0xa4bc,	// (0x0007755a) cell_top_day_name_pane_ParamLimits

0xa4bc,	// (0x0007755a) cell_top_day_name_pane

0xa4df,	// (0x0007757d) cell_area_left_week_number_pane_ParamLimits

0xa4df,	// (0x0007757d) cell_area_left_week_number_pane

0xa4f3,	// (0x00077591) cell_month_view_pane_ParamLimits

0xa4f3,	// (0x00077591) cell_month_view_pane

0xe894,	// (0x0007b932) frm_month_g1

0xa518,	// (0x000775b6) frm_month_g2

0xa529,	// (0x000775c7) frm_month_g3

0xa53a,	// (0x000775d8) frm_month_g4

0xa54b,	// (0x000775e9) frm_month_g5

0xa55c,	// (0x000775fa) frm_month_g6

0xa56d,	// (0x0007760b) frm_month_g7

0xe8a1,	// (0x0007b93f) frm_month_g8

0xa57e,	// (0x0007761c) frm_month_g9

0xa58e,	// (0x0007762c) frm_month_g10

0xa59e,	// (0x0007763c) frm_month_g11

0xa5ae,	// (0x0007764c) frm_month_g12

0xa5be,	// (0x0007765c) frm_month_g13

0xa5ce,	// (0x0007766c) frm_month_g14

0xa5de,	// (0x0007767c) frm_month_g15

0xa5f0,	// (0x0007768e) frm_month_g16

0x000f,

0xfe5e,	// (0x0007cefc) frm_month_g

0xe8ae,	// (0x0007b94c) cell_top_day_name_pane_t1

0xa602,	// (0x000776a0) cell_area_left_week_number_pane_g1

0xa60e,	// (0x000776ac) cell_area_left_week_number_pane_t1

0x340f,	// (0x000704ad) cell_month_view_pane_g1

0xa621,	// (0x000776bf) cell_month_view_pane_t1

0x2aaf,	// (0x0006fb4d) main_fps_pane

0xde5c,	// (0x0007aefa) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde5c,	// (0x0007aefa) cmail_ddmenu_btn02_pane_cp1

0xde78,	// (0x0007af16) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde78,	// (0x0007af16) cmail_ddmenu_btn02_pane_cp2

0x9dff,	// (0x00076e9d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9dff,	// (0x00076e9d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x0007ce1a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x0007ce1a) cmail_ddmenu_btn02_pane_g

0x9e1d,	// (0x00076ebb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e1d,	// (0x00076ebb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x0007ce1f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x0007ce1f) cmail_ddmenu_btn02_pane_t

0xa634,	// (0x000776d2) fps_text_pane_ParamLimits

0xa634,	// (0x000776d2) fps_text_pane

0xa64a,	// (0x000776e8) main_fps_pane_g1_ParamLimits

0xa64a,	// (0x000776e8) main_fps_pane_g1

0xa660,	// (0x000776fe) wait_bar_pane_cp010_ParamLimits

0xa660,	// (0x000776fe) wait_bar_pane_cp010

0xa671,	// (0x0007770f) fps_text_pane_t1_ParamLimits

0xa671,	// (0x0007770f) fps_text_pane_t1

0xccfa,	// (0x00079d98) cam4_image_uncrop_pane_g1

0xcd03,	// (0x00079da1) cam4_image_uncrop_pane_g2

0x7d14,	// (0x00074db2) cam4_image_uncrop_pane_g3

0x7d1d,	// (0x00074dbb) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x0007c91c) cam4_image_uncrop_pane_g

0xa474,	// (0x00077512) dia3_listrow_pane_ParamLimits

0x2aaf,	// (0x0006fb4d) main_phob2_pane

0x9abb,	// (0x00076b59) cell_tport_appsw_pane_cp02_ParamLimits

0x9abb,	// (0x00076b59) cell_tport_appsw_pane_cp02

0x9acb,	// (0x00076b69) cell_tport_appsw_pane_cp03_ParamLimits

0x9acb,	// (0x00076b69) cell_tport_appsw_pane_cp03

0x2aaf,	// (0x0006fb4d) phob2_contact_card_pane

0x2aaf,	// (0x0006fb4d) phob2_listscroll_pane

0xe8c1,	// (0x0007b95f) phob2_list_pane

0xe8c9,	// (0x0007b967) scroll_pane_cp034

0xa689,	// (0x00077727) phob2_cc_data_pane_ParamLimits

0xa689,	// (0x00077727) phob2_cc_data_pane

0xa6a6,	// (0x00077744) phob2_cc_listscroll_pane_ParamLimits

0xa6a6,	// (0x00077744) phob2_cc_listscroll_pane

0xa2c9,	// (0x00077367) list_double_large_graphic_phob2_pane_ParamLimits

0xa2c9,	// (0x00077367) list_double_large_graphic_phob2_pane

0xa6c2,	// (0x00077760) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa6c2,	// (0x00077760) list_double_large_graphic_phob2_pane_g1

0x29e3,	// (0x0006fa81) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x29e3,	// (0x0006fa81) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x0007cf1d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x0007cf1d) list_double_large_graphic_phob2_pane_g

0x29fb,	// (0x0006fa99) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x29fb,	// (0x0006fa99) list_double_large_graphic_phob2_pane_t1

0x2a10,	// (0x0006faae) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2a10,	// (0x0006faae) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x0007cf26) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x0007cf26) list_double_large_graphic_phob2_pane_t

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp024

0xe8d1,	// (0x0007b96f) phob2_cc_button_pane

0xa6db,	// (0x00077779) phob2_cc_data_pane_g1_ParamLimits

0xa6db,	// (0x00077779) phob2_cc_data_pane_g1

0xa6f2,	// (0x00077790) phob2_cc_data_pane_g2_ParamLimits

0xa6f2,	// (0x00077790) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x0007cf2b) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x0007cf2b) phob2_cc_data_pane_g

0xa704,	// (0x000777a2) phob2_cc_data_pane_t1_ParamLimits

0xa704,	// (0x000777a2) phob2_cc_data_pane_t1

0xa71c,	// (0x000777ba) phob2_cc_data_pane_t2_ParamLimits

0xa71c,	// (0x000777ba) phob2_cc_data_pane_t2

0xa734,	// (0x000777d2) phob2_cc_data_pane_t3_ParamLimits

0xa734,	// (0x000777d2) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0007cf30) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0007cf30) phob2_cc_data_pane_t

0xe8d9,	// (0x0007b977) phob2_cc_list_pane_ParamLimits

0xe8d9,	// (0x0007b977) phob2_cc_list_pane

0xd7f6,	// (0x0007a894) scroll_pane_cp035_ParamLimits

0xd7f6,	// (0x0007a894) scroll_pane_cp035

0xb23c,	// (0x000782da) bg_button_pane_cp033

0xe8e5,	// (0x0007b983) phob2_cc_button_pane_g1

0xe8f1,	// (0x0007b98f) phob2_cc_button_pane_t1

0xe906,	// (0x0007b9a4) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x0007cf37) phob2_cc_button_pane_t

0xa74c,	// (0x000777ea) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa74c,	// (0x000777ea) list_double_large_graphic_phob2_cc_pane

0xa77a,	// (0x00077818) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa77a,	// (0x00077818) list_double_large_graphic_phob2_cc_pane_g1

0xa786,	// (0x00077824) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa786,	// (0x00077824) list_double_large_graphic_phob2_cc_pane_g2

0x2a25,	// (0x0006fac3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2a25,	// (0x0006fac3) list_double_large_graphic_phob2_cc_pane_g3

0x2a31,	// (0x0006facf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2a31,	// (0x0006facf) list_double_large_graphic_phob2_cc_pane_g4

0x2a3d,	// (0x0006fadb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2a3d,	// (0x0006fadb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x0007cf3c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x0007cf3c) list_double_large_graphic_phob2_cc_pane_g

0x2a49,	// (0x0006fae7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2a49,	// (0x0006fae7) list_double_large_graphic_phob2_cc_pane_t1

0x2a72,	// (0x0006fb10) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2a72,	// (0x0006fb10) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x0007cf47) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x0007cf47) list_double_large_graphic_phob2_cc_pane_t

0xe918,	// (0x0007b9b6) list_highlight_pane_cp025_ParamLimits

0xe918,	// (0x0007b9b6) list_highlight_pane_cp025

0xb23c,	// (0x000782da) bg_button_pane_cp033_ParamLimits

0xe8e5,	// (0x0007b983) phob2_cc_button_pane_g1_ParamLimits

0xe8f1,	// (0x0007b98f) phob2_cc_button_pane_t1_ParamLimits

0xe906,	// (0x0007b9a4) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x0007cf37) phob2_cc_button_pane_t_ParamLimits

0x2c56,	// (0x0006fcf4) popup_wgtman_window

0xd8f9,	// (0x0007a997) scroll_pane_cp038

0xa242,	// (0x000772e0) wgtman_btn_pane_cp_01_ParamLimits

0xa242,	// (0x000772e0) wgtman_btn_pane_cp_01

0xe926,	// (0x0007b9c4) wgtman_content_pane

0xe92f,	// (0x0007b9cd) wgtman_heading_pane

0x2aaf,	// (0x0006fb4d) bg_heading_pane_cp02

0xe938,	// (0x0007b9d6) wgtman_heading_pane_g1

0xe940,	// (0x0007b9de) wgtman_heading_pane_t1

0xe94e,	// (0x0007b9ec) scroll_pane_cp036

0xe956,	// (0x0007b9f4) wgtman_list_pane

0xe95e,	// (0x0007b9fc) wgtman_list_pane_t1_ParamLimits

0xe95e,	// (0x0007b9fc) wgtman_list_pane_t1

0xee4b,	// (0x0007bee9) cam4_grid_pane

0x22b7,	// (0x0006f355) bg_button_pane_cp015_ParamLimits

0x8867,	// (0x00075905) bg_button_pane_cp016_ParamLimits

0x8873,	// (0x00075911) bg_button_pane_cp017_ParamLimits

0x888e,	// (0x0007592c) popup_vitu2_query_window_g3_ParamLimits

0x888e,	// (0x0007592c) popup_vitu2_query_window_g3

0x236c,	// (0x0006f40a) popup_vitu2_query_window_t6_ParamLimits

0x236c,	// (0x0006f40a) popup_vitu2_query_window_t6

0x2397,	// (0x0006f435) popup_vitu2_query_window_t7_ParamLimits

0x2397,	// (0x0006f435) popup_vitu2_query_window_t7

0xccfa,	// (0x00079d98) cam4_grid_pane_g1

0xcd03,	// (0x00079da1) cam4_grid_pane_g2

0xe975,	// (0x0007ba13) cam4_grid_pane_g3

0xe97e,	// (0x0007ba1c) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x0007cf4c) cam4_grid_pane_g

0x4171,	// (0x0007120f) aid_placing_vt_slider_lsc_ParamLimits

0x43e1,	// (0x0007147f) vidtel_button_pane_ParamLimits

0x43e1,	// (0x0007147f) vidtel_button_pane

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp034

0xa792,	// (0x00077830) vidtel_button_pane_g1

0xa79a,	// (0x00077838) vidtel_button_pane_t1

0xcfbd,	// (0x0007a05b) aid_size_vtel_slider_touch

0xd7f6,	// (0x0007a894) scroll_pane_cp039

0xd928,	// (0x0007a9c6) ncim_query_button_pane_cp01_ParamLimits

0xd947,	// (0x0007a9e5) ncimui_query_pane_g1_ParamLimits

0xb23c,	// (0x000782da) input_focus_pane_cp012_ParamLimits

0xd96c,	// (0x0007aa0a) ncim_query_entry_pane_t1_ParamLimits

0xd7f6,	// (0x0007a894) scroll_pane_cp039_ParamLimits

0xbcd0,	// (0x00078d6e) navi_pane_bcale_mc_g1

0xbcd8,	// (0x00078d76) navi_pane_bcale_mc_t1

0xdeac,	// (0x0007af4a) main_sp_fs_email_pane_g1

0xdeb8,	// (0x0007af56) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0007cd17) main_sp_fs_email_pane_g

0xe312,	// (0x0007b3b0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe312,	// (0x0007b3b0) list_single_cale_mrui_row_pane_g3

0x291b,	// (0x0006f9b9) list_single_recal_day_pane_g5_event_pane

0xe47b,	// (0x0007b519) list_single_recal_day_pane_g7

0xe987,	// (0x0007ba25) list_recal_day_event_pane_cp01

0xe990,	// (0x0007ba2e) list_recal_vselct_arw_lo_pane_cp01

0xe998,	// (0x0007ba36) list_recal_vselct_arw_up_pane_cp01

0xe9a0,	// (0x0007ba3e) list_recal_vselct_pane_cp01

0xcfcd,	// (0x0007a06b) list_recal_day_event_pane_cp01_g1

0xe9aa,	// (0x0007ba48) list_recal_day_event_pane_cp01_t1

0xe483,	// (0x0007b521) list_single_recal_day_pane_t1_ParamLimits

0x2931,	// (0x0006f9cf) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x0007ce2f) list_single_recal_day_pane_t_ParamLimits

0x336a,	// (0x00070408) bg_notes_pane_ParamLimits

0x359c,	// (0x0007063a) list_notes_pane_ParamLimits

0x35aa,	// (0x00070648) scroll_pane_cp06_ParamLimits

0x35d4,	// (0x00070672) main_notes_pane_ParamLimits

0xb23c,	// (0x000782da) main_welc_pane

0xa7d7,	// (0x00077875) main_welc_body_pane_ParamLimits

0xa7d7,	// (0x00077875) main_welc_body_pane

0xa7f3,	// (0x00077891) main_welc_opti_pane_ParamLimits

0xa7f3,	// (0x00077891) main_welc_opti_pane

0xa867,	// (0x00077905) main_welc_pane_t1_ParamLimits

0xa867,	// (0x00077905) main_welc_pane_t1

0xaa17,	// (0x00077ab5) main_welc_body_row_pane_ParamLimits

0xaa17,	// (0x00077ab5) main_welc_body_row_pane

0x342b,	// (0x000704c9) main_welc_opti_row_pane_ParamLimits

0x342b,	// (0x000704c9) main_welc_opti_row_pane

0xe9c8,	// (0x0007ba66) main_welc_opti_row_pane_g1

0xaa2a,	// (0x00077ac8) main_welc_opti_row_pane_t1

0xe9d0,	// (0x0007ba6e) main_welc_body_row_pane_t1

0xe6a6,	// (0x0007b744) popup_notif_wgt_heading_pane

0xe6c0,	// (0x0007b75e) aid_size_list_notif_wgt_del_ParamLimits

0xe6cd,	// (0x0007b76b) list_notif_wgt_row_pane_g1_ParamLimits

0xe6d9,	// (0x0007b777) list_notif_wgt_row_pane_g2_ParamLimits

0xe6ed,	// (0x0007b78b) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x0007ce96) list_notif_wgt_row_pane_g_ParamLimits

0xe6fa,	// (0x0007b798) list_notif_wgt_row_pane_t1_ParamLimits

0xe710,	// (0x0007b7ae) list_notif_wgt_row_pane_t2_ParamLimits

0xe722,	// (0x0007b7c0) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x0007ce9d) list_notif_wgt_row_pane_t_ParamLimits

0xa2db,	// (0x00077379) listrow_wgtman_pane_g1_ParamLimits

0xa2e8,	// (0x00077386) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x0007cecd) listrow_wgtman_pane_g_ParamLimits

0x2993,	// (0x0006fa31) listrow_wgtman_pane_t1_ParamLimits

0x29ab,	// (0x0006fa49) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x0007ced2) listrow_wgtman_pane_t_ParamLimits

0x29d1,	// (0x0006fa6f) wait_bar_pane_cp09_ParamLimits

0x2aaf,	// (0x0006fb4d) bg_popup_heading_pane_cp02

0xe9df,	// (0x0007ba7d) popup_notif_wgt_heading_pane_g1

0xe9e7,	// (0x0007ba85) popup_notif_wgt_heading_pane_t1

0x0d48,	// (0x0006dde6) main_vids_pane

0x2aaf,	// (0x0006fb4d) vids_listscroll_pane

0xaa39,	// (0x00077ad7) scroll_pane_cp040

0x2aaf,	// (0x0006fb4d) vids_list_pane

0xe9f5,	// (0x0007ba93) vids_list_double_pane_ParamLimits

0xe9f5,	// (0x0007ba93) vids_list_double_pane

0xaa44,	// (0x00077ae2) vids_list_double_pane_g1

0xaa4d,	// (0x00077aeb) vids_list_double_pane_t1

0xaa5c,	// (0x00077afa) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x0007cf6b) vids_list_double_pane_t

0xb23c,	// (0x000782da) main_ncimui_pane_ParamLimits

0x924e,	// (0x000762ec) main_ncimui_pane_g1_ParamLimits

0x925a,	// (0x000762f8) main_ncimui_pane_g2_ParamLimits

0x925a,	// (0x000762f8) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0007cc18) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0007cc18) main_ncimui_pane_g

0xa80a,	// (0x000778a8) main_welc_pane_g1_ParamLimits

0xa80a,	// (0x000778a8) main_welc_pane_g1

0xa81d,	// (0x000778bb) main_welc_pane_g2_ParamLimits

0xa81d,	// (0x000778bb) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x0007cf55) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x0007cf55) main_welc_pane_g

0x336a,	// (0x00070408) listscroll_mce_pane_ParamLimits

0x5305,	// (0x000723a3) wait_bar_pane_cp10

0x0d2e,	// (0x0006ddcc) main_cale_day_pane_ParamLimits

0x0d2e,	// (0x0006ddcc) main_cale_week_pane_ParamLimits

0x336a,	// (0x00070408) main_messa_pane_ParamLimits

0x6eb3,	// (0x00073f51) main_clock2_btn_pane_ParamLimits

0x6eb3,	// (0x00073f51) main_clock2_btn_pane

0x6ec3,	// (0x00073f61) main_clock2_btn_pane_cp01_ParamLimits

0x6ec3,	// (0x00073f61) main_clock2_btn_pane_cp01

0xe2cd,	// (0x0007b36b) list_cale_mrui_pane_ParamLimits

0xe756,	// (0x0007b7f4) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x0007cea4) main_cf0_pane_g

0xa48e,	// (0x0007752c) area_left_week_number_pane_ParamLimits

0xa49a,	// (0x00077538) area_top_day_name_pane_ParamLimits

0xa4ab,	// (0x00077549) frame_month_view_pane_ParamLimits

0xe886,	// (0x0007b924) grid_month_view_pane_ParamLimits

0xe894,	// (0x0007b932) frm_month_g1_ParamLimits

0xa518,	// (0x000775b6) frm_month_g2_ParamLimits

0xa529,	// (0x000775c7) frm_month_g3_ParamLimits

0xa53a,	// (0x000775d8) frm_month_g4_ParamLimits

0xa54b,	// (0x000775e9) frm_month_g5_ParamLimits

0xa55c,	// (0x000775fa) frm_month_g6_ParamLimits

0xa56d,	// (0x0007760b) frm_month_g7_ParamLimits

0xe8a1,	// (0x0007b93f) frm_month_g8_ParamLimits

0xa57e,	// (0x0007761c) frm_month_g9_ParamLimits

0xa58e,	// (0x0007762c) frm_month_g10_ParamLimits

0xa59e,	// (0x0007763c) frm_month_g11_ParamLimits

0xa5ae,	// (0x0007764c) frm_month_g12_ParamLimits

0xa5be,	// (0x0007765c) frm_month_g13_ParamLimits

0xa5ce,	// (0x0007766c) frm_month_g14_ParamLimits

0xa5de,	// (0x0007767c) frm_month_g15_ParamLimits

0xa5f0,	// (0x0007768e) frm_month_g16_ParamLimits

0xfe5e,	// (0x0007cefc) frm_month_g_ParamLimits

0xe8ae,	// (0x0007b94c) cell_top_day_name_pane_t1_ParamLimits

0xa602,	// (0x000776a0) cell_area_left_week_number_pane_g1_ParamLimits

0xa60e,	// (0x000776ac) cell_area_left_week_number_pane_t1_ParamLimits

0x340f,	// (0x000704ad) cell_month_view_pane_g1_ParamLimits

0xa621,	// (0x000776bf) cell_month_view_pane_t1_ParamLimits

0x3362,	// (0x00070400) main_clock2_btn_pane_g1

0xea05,	// (0x0007baa3) main_clock2_btn_pane_t1

0xb23c,	// (0x000782da) listscroll_cmail_pane_ParamLimits

0xdeac,	// (0x0007af4a) main_sp_fs_email_pane_g1_ParamLimits

0xdeb8,	// (0x0007af56) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0007cd17) main_sp_fs_email_pane_g_ParamLimits

0xe3f7,	// (0x0007b495) list_recal_day_pane_ParamLimits

0xe408,	// (0x0007b4a6) mian_recal_day_pane_t1

0x269e,	// (0x0006f73c) list_single_dyc_row_text_pane_t4_ParamLimits

0x269e,	// (0x0006f73c) list_single_dyc_row_text_pane_t4

0x26d5,	// (0x0006f773) list_single_dyc_row_text_pane_t5_ParamLimits

0x26d5,	// (0x0006f773) list_single_dyc_row_text_pane_t5

0xdf51,	// (0x0007afef) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf51,	// (0x0007afef) list_single_dyc_row_text_pane_t6

0x4f4c,	// (0x00071fea) aid_mgn_list_cale_time_pane

0xb23c,	// (0x000782da) main_gallery2_pane_ParamLimits

0x6eea,	// (0x00073f88) main_clock2_pane_cp01_t1

0x6ef8,	// (0x00073f96) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x0007c7ee) main_clock2_pane_cp01_t

0x3a7b,	// (0x00070b19) cale_week_scroll_pane_g16_ParamLimits

0x3a7b,	// (0x00070b19) cale_week_scroll_pane_g16

0xb30c,	// (0x000783aa) vorec_slider_pane

0xa79a,	// (0x00077838) vidtel_button_pane_t1_ParamLimits

0x9ec2,	// (0x00076f60) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9ed4,	// (0x00076f72) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9ee5,	// (0x00076f83) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9ee5,	// (0x00076f83) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x0007ce52) main_fs_bigclock_clock_pane_g_ParamLimits

0x9ef8,	// (0x00076f96) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9f13,	// (0x00076fb1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x0007ce5b) main_fs_bigclock_clock_pane_t_ParamLimits

0x66f6,	// (0x00073794) main_mup3_lyrics_pane_ParamLimits

0x66f6,	// (0x00073794) main_mup3_lyrics_pane

0xaa8e,	// (0x00077b2c) main_mup3_lyrics_pane_t1_ParamLimits

0xaa8e,	// (0x00077b2c) main_mup3_lyrics_pane_t1

0xebaf,	// (0x0007bc4d) aid_main_mp4_pane_t1_area

0xebb9,	// (0x0007bc57) aid_main_mp4_pane_t2_area

0xec63,	// (0x0007bd01) main_mp4_pane_g7_ParamLimits

0xec63,	// (0x0007bd01) main_mp4_pane_g7

0xec6f,	// (0x0007bd0d) main_mp4_pane_g8_ParamLimits

0xec6f,	// (0x0007bd0d) main_mp4_pane_g8

0x7b96,	// (0x00074c34) aid_call6_pane_g1_size

0xa766,	// (0x00077804) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa766,	// (0x00077804) list_double_large_graphic_phob2_other_pane

0xbc23,	// (0x00078cc1) list_double_large_graphic_phob2_other_pane_g1

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp026

0xb23c,	// (0x000782da) main_welc_pane_ParamLimits

0x9978,	// (0x00076a16) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9978,	// (0x00076a16) main_sp_fs_ctrlbar_pane_g3

0x9990,	// (0x00076a2e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9990,	// (0x00076a2e) main_sp_fs_ctrlbar_pane_g4

0x99d2,	// (0x00076a70) toolbar2_fixed_button_pane_cp01

0x99dd,	// (0x00076a7b) toolbar2_fixed_button_pane_cp02

0x99e8,	// (0x00076a86) toolbar2_fixed_button_pane_cp03

0xa7c3,	// (0x00077861) list_welc_entry_pane_ParamLimits

0xa7c3,	// (0x00077861) list_welc_entry_pane

0xa830,	// (0x000778ce) main_welc_pane_g3_ParamLimits

0xa830,	// (0x000778ce) main_welc_pane_g3

0xa881,	// (0x0007791f) main_welc_pane_t2_ParamLimits

0xa881,	// (0x0007791f) main_welc_pane_t2

0xa898,	// (0x00077936) main_welc_pane_t3_ParamLimits

0xa898,	// (0x00077936) main_welc_pane_t3

0x0005,

0xfec0,	// (0x0007cf5e) main_welc_pane_t_ParamLimits

0xfec0,	// (0x0007cf5e) main_welc_pane_t

0xa9a8,	// (0x00077a46) welc_button_pane_ParamLimits

0xa9a8,	// (0x00077a46) welc_button_pane

0xaa06,	// (0x00077aa4) welc_service_logo_pane_ParamLimits

0xaa06,	// (0x00077aa4) welc_service_logo_pane

0xaaad,	// (0x00077b4b) list_single_welc_entry_pane_ParamLimits

0xaaad,	// (0x00077b4b) list_single_welc_entry_pane

0xaabe,	// (0x00077b5c) list_single_welc_entry_pane_g1

0xaac6,	// (0x00077b64) list_single_welc_entry_pane_t1

0xaad4,	// (0x00077b72) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x0007cf70) list_single_welc_entry_pane_t

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp035

0xaae2,	// (0x00077b80) welc_button_pane_t1

0xea13,	// (0x0007bab1) welc_service_logo_pane_g1

0xea1c,	// (0x0007baba) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x0007cf75) welc_service_logo_pane_g

0x2aaf,	// (0x0006fb4d) main_int_radio_pane

0x36fc,	// (0x0007079a) list_single_fs_dyc_pane_g1

0x29ef,	// (0x0006fa8d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x29ef,	// (0x0006fa8d) list_double_large_graphic_phob2_pane_g3

0xa6cf,	// (0x0007776d) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa6cf,	// (0x0007776d) list_double_large_graphic_phob2_pane_g4

0xaaf0,	// (0x00077b8e) main_int_radio1_pane_ParamLimits

0xaaf0,	// (0x00077b8e) main_int_radio1_pane

0xea25,	// (0x0007bac3) find_pane_cp02

0xab0d,	// (0x00077bab) input_focus_pane_cp12_ParamLimits

0xab0d,	// (0x00077bab) input_focus_pane_cp12

0xab1d,	// (0x00077bbb) input_focus_pane_cp13_ParamLimits

0xab1d,	// (0x00077bbb) input_focus_pane_cp13

0xab31,	// (0x00077bcf) input_focus_pane_cp14_ParamLimits

0xab31,	// (0x00077bcf) input_focus_pane_cp14

0xea2e,	// (0x0007bacc) int_radio1_listscroll_pane

0xab45,	// (0x00077be3) main_int_radio1_pane_g1_ParamLimits

0xab45,	// (0x00077be3) main_int_radio1_pane_g1

0xab59,	// (0x00077bf7) main_int_radio1_pane_t1_ParamLimits

0xab59,	// (0x00077bf7) main_int_radio1_pane_t1

0xab70,	// (0x00077c0e) main_int_radio1_pane_t2_ParamLimits

0xab70,	// (0x00077c0e) main_int_radio1_pane_t2

0xab87,	// (0x00077c25) main_int_radio1_pane_t3_ParamLimits

0xab87,	// (0x00077c25) main_int_radio1_pane_t3

0xab9e,	// (0x00077c3c) main_int_radio1_pane_t4_ParamLimits

0xab9e,	// (0x00077c3c) main_int_radio1_pane_t4

0xea38,	// (0x0007bad6) main_int_radio1_pane_t5_ParamLimits

0xea38,	// (0x0007bad6) main_int_radio1_pane_t5

0xabb0,	// (0x00077c4e) main_int_radio1_pane_t6_ParamLimits

0xabb0,	// (0x00077c4e) main_int_radio1_pane_t6

0xabc5,	// (0x00077c63) main_int_radio1_pane_t7_ParamLimits

0xabc5,	// (0x00077c63) main_int_radio1_pane_t7

0xabda,	// (0x00077c78) main_int_radio1_pane_t8_ParamLimits

0xabda,	// (0x00077c78) main_int_radio1_pane_t8

0xabf7,	// (0x00077c95) main_int_radio1_pane_t9_ParamLimits

0xabf7,	// (0x00077c95) main_int_radio1_pane_t9

0xac09,	// (0x00077ca7) main_int_radio1_pane_t10_ParamLimits

0xac09,	// (0x00077ca7) main_int_radio1_pane_t10

0xac2d,	// (0x00077ccb) main_int_radio1_pane_t11_ParamLimits

0xac2d,	// (0x00077ccb) main_int_radio1_pane_t11

0xac51,	// (0x00077cef) main_int_radio1_pane_t12_ParamLimits

0xac51,	// (0x00077cef) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x0007cf7a) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x0007cf7a) main_int_radio1_pane_t

0xea4a,	// (0x0007bae8) int_radio_list_pane

0xe8c9,	// (0x0007b967) scroll_pane_cp037

0xea52,	// (0x0007baf0) list_double_large_graphic_int_radio_pane_ParamLimits

0xea52,	// (0x0007baf0) list_double_large_graphic_int_radio_pane

0xea63,	// (0x0007bb01) list_double_large_graphic_int_radio_pane_g1

0xea6c,	// (0x0007bb0a) list_double_large_graphic_int_radio_pane_t1

0xea7a,	// (0x0007bb18) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x0007cf93) list_double_large_graphic_int_radio_pane_t

0x2aaf,	// (0x0006fb4d) list_highlight_pane_cp027

0xe9b8,	// (0x0007ba56) main_button_pane_4

0xa843,	// (0x000778e1) main_welc_pane_g4_ParamLimits

0xa843,	// (0x000778e1) main_welc_pane_g4

0xa8af,	// (0x0007794d) main_welc_pane_t4_ParamLimits

0xa8af,	// (0x0007794d) main_welc_pane_t4

0xa8c6,	// (0x00077964) main_welc_pane_t5_ParamLimits

0xa8c6,	// (0x00077964) main_welc_pane_t5

0xa901,	// (0x0007799f) main_welc_pane_t6_ParamLimits

0xa901,	// (0x0007799f) main_welc_pane_t6

0xa9bb,	// (0x00077a59) welc_button_pane_2_ParamLimits

0xa9bb,	// (0x00077a59) welc_button_pane_2

0xa9cf,	// (0x00077a6d) welc_button_pane_3_ParamLimits

0xa9cf,	// (0x00077a6d) welc_button_pane_3

0xe9c0,	// (0x0007ba5e) welc_button_pane_4

0xa9e6,	// (0x00077a84) welc_button_pane_5_ParamLimits

0xa9e6,	// (0x00077a84) welc_button_pane_5

0x2add,	// (0x0006fb7b) main_popup_welc_pane

0xea97,	// (0x0007bb35) main_welc_sk_g3

0xeaa1,	// (0x0007bb3f) main_welc_sk_g4

0xeaab,	// (0x0007bb49) main_welc_sk_t3

0xeab9,	// (0x0007bb57) main_welc_sk_t4

0xeac7,	// (0x0007bb65) popup_welc_pane_t4

0xead5,	// (0x0007bb73) popup_welc_pane_t5

0xeae3,	// (0x0007bb81) popup_welc_pane_t6

0x2aaf,	// (0x0006fb4d) main_acti_pane

0x2aaf,	// (0x0006fb4d) main_sso_pane

0xac63,	// (0x00077d01) sso_body_pane_ParamLimits

0xac63,	// (0x00077d01) sso_body_pane

0xac77,	// (0x00077d15) sso_logo_pane_ParamLimits

0xac77,	// (0x00077d15) sso_logo_pane

0xac9f,	// (0x00077d3d) sso_sk_pane_ParamLimits

0xac9f,	// (0x00077d3d) sso_sk_pane

0xb384,	// (0x00078422) main_sso_logo_pane_g1

0xacb1,	// (0x00077d4f) sso_sk_pane_t1_ParamLimits

0xacb1,	// (0x00077d4f) sso_sk_pane_t1

0xacca,	// (0x00077d68) sso_sk_pane_t2_ParamLimits

0xacca,	// (0x00077d68) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x0007cf98) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x0007cf98) sso_sk_pane_t

0xeb1b,	// (0x0007bbb9) aid_sso_gap

0xeb24,	// (0x0007bbc2) aid_sso_txt1

0xeb2c,	// (0x0007bbca) aid_sso_txt2

0xeb34,	// (0x0007bbd2) aid_sso_txt3

0x0002,

0xfeff,	// (0x0007cf9d) aid_sso_txt

0xeb3c,	// (0x0007bbda) aid_sso_widget

0xad2a,	// (0x00077dc8) sso_btn_pane_ParamLimits

0xad2a,	// (0x00077dc8) sso_btn_pane

0xad9c,	// (0x00077e3a) sso_option_pane_ParamLimits

0xad9c,	// (0x00077e3a) sso_option_pane

0xadfa,	// (0x00077e98) sso_query_pane_ParamLimits

0xadfa,	// (0x00077e98) sso_query_pane

0xae3a,	// (0x00077ed8) sso_query_pane_cp01_ParamLimits

0xae3a,	// (0x00077ed8) sso_query_pane_cp01

0xae7c,	// (0x00077f1a) sso_t_hdr_pane_ParamLimits

0xae7c,	// (0x00077f1a) sso_t_hdr_pane

0xaea0,	// (0x00077f3e) sso_t_nml_pane_ParamLimits

0xaea0,	// (0x00077f3e) sso_t_nml_pane

0xeb34,	// (0x0007bbd2) sso_t_sub_pane

0xac84,	// (0x00077d22) sso_popup_window_ParamLimits

0xac84,	// (0x00077d22) sso_popup_window

0xace0,	// (0x00077d7e) sso_apps_pane_ParamLimits

0xace0,	// (0x00077d7e) sso_apps_pane

0xad06,	// (0x00077da4) sso_body_pane_g1

0xad0e,	// (0x00077dac) sso_body_pane_t1

0xad1c,	// (0x00077dba) sso_body_pane_t2

0x0001,

0xff06,	// (0x0007cfa4) sso_body_pane_t

0xad6c,	// (0x00077e0a) sso_btn_pane_cp01_ParamLimits

0xad6c,	// (0x00077e0a) sso_btn_pane_cp01

0xadd4,	// (0x00077e72) sso_prog_pane_ParamLimits

0xadd4,	// (0x00077e72) sso_prog_pane

0xaeea,	// (0x00077f88) sso_t_hdr_pane_t1_ParamLimits

0xaeea,	// (0x00077f88) sso_t_hdr_pane_t1

0x010c,	// (0x0006d1aa) input_focus_pane_cp10_ParamLimits

0x010c,	// (0x0006d1aa) input_focus_pane_cp10

0x0124,	// (0x0006d1c2) sso_query_pane_t1_ParamLimits

0x0124,	// (0x0006d1c2) sso_query_pane_t1

0x0137,	// (0x0006d1d5) sso_query_pane_t2_ParamLimits

0x0137,	// (0x0006d1d5) sso_query_pane_t2

0x0152,	// (0x0006d1f0) sso_query_pane_t3_ParamLimits

0x0152,	// (0x0006d1f0) sso_query_pane_t3

0x017c,	// (0x0006d21a) sso_query_pane_t4_ParamLimits

0x017c,	// (0x0006d21a) sso_query_pane_t4

0x0003,

0xff0b,	// (0x0007cfa9) sso_query_pane_t_ParamLimits

0xff0b,	// (0x0007cfa9) sso_query_pane_t

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp22

0xea88,	// (0x0007bb26) sso_btn_pane_t1

0xaefd,	// (0x00077f9b) sso_t_nml_pane_t1_ParamLimits

0xaefd,	// (0x00077f9b) sso_t_nml_pane_t1

0x01bd,	// (0x0006d25b) sso_option_row_pane_ParamLimits

0x01bd,	// (0x0006d25b) sso_option_row_pane

0x01d0,	// (0x0006d26e) sso_t_sub_pane_t1_ParamLimits

0x01d0,	// (0x0006d26e) sso_t_sub_pane_t1

0xb23c,	// (0x000782da) bg_popup_window_pane_cp11_ParamLimits

0xb23c,	// (0x000782da) bg_popup_window_pane_cp11

0x01e3,	// (0x0006d281) popup_sk_window_cp01_ParamLimits

0x01e3,	// (0x0006d281) popup_sk_window_cp01

0x01f0,	// (0x0006d28e) sso_popup_body_pane_ParamLimits

0x01f0,	// (0x0006d28e) sso_popup_body_pane

0x01fd,	// (0x0006d29b) scroll_pane_cp21_ParamLimits

0x01fd,	// (0x0006d29b) scroll_pane_cp21

0x020a,	// (0x0006d2a8) sso_popup_body_t_pane_ParamLimits

0x020a,	// (0x0006d2a8) sso_popup_body_t_pane

0x0217,	// (0x0006d2b5) sso_popup_body_t_hdr_pane_ParamLimits

0x0217,	// (0x0006d2b5) sso_popup_body_t_hdr_pane

0x0223,	// (0x0006d2c1) sso_popup_body_t_nml_pane_ParamLimits

0x0223,	// (0x0006d2c1) sso_popup_body_t_nml_pane

0x023c,	// (0x0006d2da) sso_popup_body_t_sub_pane_ParamLimits

0x023c,	// (0x0006d2da) sso_popup_body_t_sub_pane

0x025b,	// (0x0006d2f9) sso_popup_body_t_hdr_pane_t1

0xaf18,	// (0x00077fb6) sso_popup_body_t_nml_pane_t1_ParamLimits

0xaf18,	// (0x00077fb6) sso_popup_body_t_nml_pane_t1

0x02a5,	// (0x0006d343) sso_popup_body_t_sub_pane_t1_ParamLimits

0x02a5,	// (0x0006d343) sso_popup_body_t_sub_pane_t1

0xb384,	// (0x00078422) sso_prog_pane_g1

0xaf4f,	// (0x00077fed) sso_apps_pane_comp1_ParamLimits

0xaf4f,	// (0x00077fed) sso_apps_pane_comp1

0x02dc,	// (0x0006d37a) sso_apps_pane_comp1_g1

0x02e4,	// (0x0006d382) sso_apps_pane_comp1_t1

0x0300,	// (0x0006d39e) sso_option_row_pane_g1

0x0308,	// (0x0006d3a6) sso_option_row_pane_t1

0xa7b0,	// (0x0007784e) bg_welc_area_ParamLimits

0xa7b0,	// (0x0007784e) bg_welc_area

0xa93f,	// (0x000779dd) sso_t_hdr_pane_a_t1_ParamLimits

0xa93f,	// (0x000779dd) sso_t_hdr_pane_a_t1

0xa958,	// (0x000779f6) sso_t_nml_pane_a_t1_ParamLimits

0xa958,	// (0x000779f6) sso_t_nml_pane_a_t1

0xa97d,	// (0x00077a1b) sso_t_sub_pane_a_t1_ParamLimits

0xa97d,	// (0x00077a1b) sso_t_sub_pane_a_t1

0xea88,	// (0x0007bb26) sso_btn_pane_t1_copy1

0x2aaf,	// (0x0006fb4d) welc_button_pane_2_comp1

0xeaf1,	// (0x0007bb8f) sso_t_hdr_pane_p_t1

0xeaff,	// (0x0007bb9d) sso_t_nml_pane_p_t1

0xeb0d,	// (0x0007bbab) sso_t_sub_pane_p_t1

0xe057,	// (0x0007b0f5) list_cmail_pane_ParamLimits

0xa9f6,	// (0x00077a94) welc_button_pane_cp01_ParamLimits

0xa9f6,	// (0x00077a94) welc_button_pane_cp01

0x2aaf,	// (0x0006fb4d) main_att_pane

0x02f2,	// (0x0006d390) input_focus_pane_cp10_t1

0x0308,	// (0x0006d3a6) sso_option_row_pane_t1_ParamLimits

0xaf62,	// (0x00078000) main_att_body_pane_ParamLimits

0xaf62,	// (0x00078000) main_att_body_pane

0xaf78,	// (0x00078016) att_btn_pane_ParamLimits

0xaf78,	// (0x00078016) att_btn_pane

0xaf95,	// (0x00078033) att_btn_pane_cp01_ParamLimits

0xaf95,	// (0x00078033) att_btn_pane_cp01

0xafb1,	// (0x0007804f) att_li_srv_pane_ParamLimits

0xafb1,	// (0x0007804f) att_li_srv_pane

0xafc7,	// (0x00078065) att_opt_pane_ParamLimits

0xafc7,	// (0x00078065) att_opt_pane

0xb00d,	// (0x000780ab) att_query_pane_ParamLimits

0xb00d,	// (0x000780ab) att_query_pane

0xb041,	// (0x000780df) att_query_pane_cp01_ParamLimits

0xb041,	// (0x000780df) att_query_pane_cp01

0xb07b,	// (0x00078119) att_t_hdr_pane_ParamLimits

0xb07b,	// (0x00078119) att_t_hdr_pane

0xb0bf,	// (0x0007815d) att_t_nml_pane_ParamLimits

0xb0bf,	// (0x0007815d) att_t_nml_pane

0xb0f0,	// (0x0007818e) att_t_nml_pane_cp01_ParamLimits

0xb0f0,	// (0x0007818e) att_t_nml_pane_cp01

0xb116,	// (0x000781b4) att_t_nmlb_pane_ParamLimits

0xb116,	// (0x000781b4) att_t_nmlb_pane

0xb12f,	// (0x000781cd) att_term_pane_ParamLimits

0xb12f,	// (0x000781cd) att_term_pane

0xb173,	// (0x00078211) main_att_body_pane_g1_ParamLimits

0xb173,	// (0x00078211) main_att_body_pane_g1

0x00f3,	// (0x0006d191) att_t_hdr_pane_t1_ParamLimits

0x00f3,	// (0x0006d191) att_t_hdr_pane_t1

0x053f,	// (0x0006d5dd) att_t_nml_pane_t1_ParamLimits

0x053f,	// (0x0006d5dd) att_t_nml_pane_t1

0x0564,	// (0x0006d602) att_btn_pane_t1

0x2aaf,	// (0x0006fb4d) bg_button_pane_cp23

0xb1b7,	// (0x00078255) att_li_srv_row_pane_ParamLimits

0xb1b7,	// (0x00078255) att_li_srv_row_pane

0x0582,	// (0x0006d620) att_t_nmlb_pane_t1_ParamLimits

0x0582,	// (0x0006d620) att_t_nmlb_pane_t1

0x059b,	// (0x0006d639) att_query_pane_t1

0x05aa,	// (0x0006d648) att_query_pane_t2

0x05b9,	// (0x0006d657) att_query_pane_t3

0x0002,

0xff14,	// (0x0007cfb2) att_query_pane_t

0x05c8,	// (0x0006d666) input_focus_pane_cp11

0x05d1,	// (0x0006d66f) att_term_pane_t1_ParamLimits

0x05d1,	// (0x0006d66f) att_term_pane_t1

0x2aaf,	// (0x0006fb4d) att_opt_row_pane

0x05ee,	// (0x0006d68c) att_opt_row_pane_g1

0x05f6,	// (0x0006d694) att_opt_row_pane_t1_ParamLimits

0x05f6,	// (0x0006d694) att_opt_row_pane_t1

0xb1c7,	// (0x00078265) att_li_srv_row_pane_g1

0xb1cf,	// (0x0007826d) att_li_srv_row_pane_t1

0xb1dd,	// (0x0007827b) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x0007cfb9) att_li_srv_row_pane_t
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
