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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00041de7 };

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
0x183b,	// (0x00043622) Screen

0x1847,	// (0x0004362e) application_window

0x1883,	// (0x0004366a) area_bottom_pane_ParamLimits

0x1883,	// (0x0004366a) area_bottom_pane

0x18bc,	// (0x000436a3) area_top_pane_ParamLimits

0x18bc,	// (0x000436a3) area_top_pane

0xbdbf,	// (0x0004dba6) call_video_uplink_pane_ParamLimits

0xbdbf,	// (0x0004dba6) call_video_uplink_pane

0x1931,	// (0x00043718) main_pane_ParamLimits

0x1931,	// (0x00043718) main_pane

0xe47a,	// (0x00050261) context_pane

0x4831,	// (0x00046618) navi_pane

0x4859,	// (0x00046640) popup_cale_events_window_ParamLimits

0x4859,	// (0x00046640) popup_cale_events_window

0xe48d,	// (0x00050274) popup_mup_playback_window

0x4871,	// (0x00046658) signal_pane

0xc558,	// (0x0004e33f) main_browser_pane

0xcfe0,	// (0x0004edc7) main_burst_pane

0x4591,	// (0x00046378) main_calc_pane

0xcfe0,	// (0x0004edc7) main_cale_day_pane

0xc558,	// (0x0004e33f) main_cale_month_pane

0xcfe0,	// (0x0004edc7) main_cale_week_pane

0xcfe0,	// (0x0004edc7) main_call_pane

0xc1ee,	// (0x0004dfd5) main_call_poc_pane

0xcfe0,	// (0x0004edc7) main_camera_pane

0xcfe0,	// (0x0004edc7) main_chi_dic_pane

0xce6f,	// (0x0004ec56) main_clock_pane

0xc1ee,	// (0x0004dfd5) main_fmradio_pane

0xcfe0,	// (0x0004edc7) main_graph_messa_pane

0xc1ee,	// (0x0004dfd5) main_help_pane

0xc558,	// (0x0004e33f) main_im_pane

0xc449,	// (0x0004e230) main_image_pane_ParamLimits

0xc449,	// (0x0004e230) main_image_pane

0xc1ee,	// (0x0004dfd5) main_location2_pane

0xcfe0,	// (0x0004edc7) main_location_pane

0xc1ee,	// (0x0004dfd5) main_messa_pane

0xc1ee,	// (0x0004dfd5) main_mp2_pane

0xcfe0,	// (0x0004edc7) main_mp_pane

0xc1ee,	// (0x0004dfd5) main_msg_pane

0xc1ee,	// (0x0004dfd5) main_mup_eq_pane

0xc1ee,	// (0x0004dfd5) main_mup_pane

0xcfe0,	// (0x0004edc7) main_notes_pane

0xc1ee,	// (0x0004dfd5) main_pec_pane

0xc1ee,	// (0x0004dfd5) main_phob_pane

0xc1ee,	// (0x0004dfd5) main_pinb_pane

0xc1ee,	// (0x0004dfd5) main_postcard_pane

0xc1ee,	// (0x0004dfd5) main_qdial_pane

0xcfe0,	// (0x0004edc7) main_skin_pane

0xc1ee,	// (0x0004dfd5) main_smil2_pane

0xcfe0,	// (0x0004edc7) main_smil_pane

0xcfe0,	// (0x0004edc7) main_video_pane

0xcfe0,	// (0x0004edc7) main_video_tele_pane

0xc449,	// (0x0004e230) main_viewer_pane_ParamLimits

0xc449,	// (0x0004e230) main_viewer_pane

0xcfe0,	// (0x0004edc7) main_vorec_pane

0x45e5,	// (0x000463cc) popup_blid_sat_info_window_ParamLimits

0x45e5,	// (0x000463cc) popup_blid_sat_info_window

0x463d,	// (0x00046424) popup_dyc_status_message_window_ParamLimits

0x463d,	// (0x00046424) popup_dyc_status_message_window

0x4655,	// (0x0004643c) popup_grid_large_graphic_window_ParamLimits

0x4655,	// (0x0004643c) popup_grid_large_graphic_window

0x470b,	// (0x000464f2) popup_loc_request_window_ParamLimits

0x470b,	// (0x000464f2) popup_loc_request_window

0x4809,	// (0x000465f0) popup_wml_address_window_ParamLimits

0x4809,	// (0x000465f0) popup_wml_address_window

0x43cb,	// (0x000461b2) call_muted_g1

0x4083,	// (0x00045e6a) popup_call_audio_conf_window_ParamLimits

0x4083,	// (0x00045e6a) popup_call_audio_conf_window

0x43df,	// (0x000461c6) popup_call_audio_first_window_ParamLimits

0x43df,	// (0x000461c6) popup_call_audio_first_window

0x4455,	// (0x0004623c) popup_call_audio_in_window_ParamLimits

0x4455,	// (0x0004623c) popup_call_audio_in_window

0x4491,	// (0x00046278) popup_call_audio_out_window_ParamLimits

0x4491,	// (0x00046278) popup_call_audio_out_window

0x44cb,	// (0x000462b2) popup_call_audio_second_window_ParamLimits

0x44cb,	// (0x000462b2) popup_call_audio_second_window

0x4521,	// (0x00046308) popup_call_audio_wait_window_ParamLimits

0x4521,	// (0x00046308) popup_call_audio_wait_window

0x4556,	// (0x0004633d) popup_number_entry_window_ParamLimits

0x4556,	// (0x0004633d) popup_number_entry_window

0xbddd,	// (0x0004dbc4) bg_popup_call_pane_cp05_ParamLimits

0xbddd,	// (0x0004dbc4) bg_popup_call_pane_cp05

0xbdfd,	// (0x0004dbe4) popup_number_entry_window_t1

0xbe10,	// (0x0004dbf7) popup_number_entry_window_t2

0xbe22,	// (0x0004dc09) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00050ed3) popup_number_entry_window_t

0xbe34,	// (0x0004dc1b) text_title_cp2

0xbe47,	// (0x0004dc2e) bg_popup_call_pane_cp_ParamLimits

0xbe47,	// (0x0004dc2e) bg_popup_call_pane_cp

0xbe55,	// (0x0004dc3c) call_thumbnail_pane

0xbe5d,	// (0x0004dc44) popup_call_audio_in_window_g1_ParamLimits

0xbe5d,	// (0x0004dc44) popup_call_audio_in_window_g1

0xbe69,	// (0x0004dc50) popup_call_audio_in_window_g2_ParamLimits

0xbe69,	// (0x0004dc50) popup_call_audio_in_window_g2

0xbe75,	// (0x0004dc5c) popup_call_audio_in_window_g3_ParamLimits

0xbe75,	// (0x0004dc5c) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00050edc) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00050edc) popup_call_audio_in_window_g

0xbe81,	// (0x0004dc68) popup_call_audio_in_window_t1_ParamLimits

0xbe81,	// (0x0004dc68) popup_call_audio_in_window_t1

0xbe9c,	// (0x0004dc83) popup_call_audio_in_window_t2_ParamLimits

0xbe9c,	// (0x0004dc83) popup_call_audio_in_window_t2

0xbeb7,	// (0x0004dc9e) popup_call_audio_in_window_t3_ParamLimits

0xbeb7,	// (0x0004dc9e) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00050ee3) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00050ee3) popup_call_audio_in_window_t

0xbe47,	// (0x0004dc2e) bg_popup_call_pane_cp01_ParamLimits

0xbe47,	// (0x0004dc2e) bg_popup_call_pane_cp01

0xbe55,	// (0x0004dc3c) call_thumbnail_pane_cp02

0xbeca,	// (0x0004dcb1) call_type_pane_cp022

0xbed2,	// (0x0004dcb9) popup_call_audio_out_window_g1_ParamLimits

0xbed2,	// (0x0004dcb9) popup_call_audio_out_window_g1

0xbee4,	// (0x0004dccb) popup_call_audio_out_window_g2_ParamLimits

0xbee4,	// (0x0004dccb) popup_call_audio_out_window_g2

0xbef0,	// (0x0004dcd7) popup_call_audio_out_window_g3_ParamLimits

0xbef0,	// (0x0004dcd7) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00050eea) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00050eea) popup_call_audio_out_window_g

0xbf02,	// (0x0004dce9) popup_call_audio_out_window_t1_ParamLimits

0xbf02,	// (0x0004dce9) popup_call_audio_out_window_t1

0xbf1a,	// (0x0004dd01) popup_call_audio_out_window_t2_ParamLimits

0xbf1a,	// (0x0004dd01) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00050ef1) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00050ef1) popup_call_audio_out_window_t

0xbf2f,	// (0x0004dd16) bg_popup_call_pane_ParamLimits

0xbf2f,	// (0x0004dd16) bg_popup_call_pane

0x1adc,	// (0x000438c3) call_thumbnail_pane_cp_ParamLimits

0x1adc,	// (0x000438c3) call_thumbnail_pane_cp

0xbfb3,	// (0x0004dd9a) call_type_pane_cp01_ParamLimits

0xbfb3,	// (0x0004dd9a) call_type_pane_cp01

0xbff7,	// (0x0004ddde) popup_call_audio_first_window_g1_ParamLimits

0xbff7,	// (0x0004ddde) popup_call_audio_first_window_g1

0xc043,	// (0x0004de2a) popup_call_audio_first_window_g2_ParamLimits

0xc043,	// (0x0004de2a) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00050ef6) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00050ef6) popup_call_audio_first_window_g

0xc087,	// (0x0004de6e) popup_call_audio_first_window_t1_ParamLimits

0xc087,	// (0x0004de6e) popup_call_audio_first_window_t1

0xc133,	// (0x0004df1a) popup_call_audio_first_window_t4_ParamLimits

0xc133,	// (0x0004df1a) popup_call_audio_first_window_t4

0xc1bf,	// (0x0004dfa6) popup_call_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x0004dfa6) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00050efb) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00050efb) popup_call_audio_first_window_t

0xc1ee,	// (0x0004dfd5) bg_popup_call_pane_cp02

0xc1f8,	// (0x0004dfdf) call_type_pane_cp023

0xc200,	// (0x0004dfe7) popup_call_audio_wait_window_g1

0xc208,	// (0x0004dfef) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00050f02) popup_call_audio_wait_window_g

0xc210,	// (0x0004dff7) popup_call_audio_wait_window_t3

0xc21e,	// (0x0004e005) bg_popup_call_pane_cp03_ParamLimits

0xc21e,	// (0x0004e005) bg_popup_call_pane_cp03

0xc27e,	// (0x0004e065) call_thumbnail_pane_cp011_ParamLimits

0xc27e,	// (0x0004e065) call_thumbnail_pane_cp011

0xc28a,	// (0x0004e071) call_type_pane_cp034_ParamLimits

0xc28a,	// (0x0004e071) call_type_pane_cp034

0xc2c6,	// (0x0004e0ad) popup_call_audio_second_window_g1_ParamLimits

0xc2c6,	// (0x0004e0ad) popup_call_audio_second_window_g1

0xc302,	// (0x0004e0e9) popup_call_audio_second_window_g2_ParamLimits

0xc302,	// (0x0004e0e9) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00050f07) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00050f07) popup_call_audio_second_window_g

0xc33e,	// (0x0004e125) popup_call_audio_second_window_t1_ParamLimits

0xc33e,	// (0x0004e125) popup_call_audio_second_window_t1

0xc3bf,	// (0x0004e1a6) popup_call_audio_second_window_t2_ParamLimits

0xc3bf,	// (0x0004e1a6) popup_call_audio_second_window_t2

0xc3f5,	// (0x0004e1dc) popup_call_audio_second_window_t3_ParamLimits

0xc3f5,	// (0x0004e1dc) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00050f0c) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00050f0c) popup_call_audio_second_window_t

0xc1ee,	// (0x0004dfd5) bg_popup_call_pane_cp04

0xc42b,	// (0x0004e212) list_conf_pane

0xc433,	// (0x0004e21a) popup_call_audio_conf_window_t1

0xc441,	// (0x0004e228) call_thumbnail_pane_g1

0xc449,	// (0x0004e230) bg_pinb_pane_ParamLimits

0xc449,	// (0x0004e230) bg_pinb_pane

0xc457,	// (0x0004e23e) find_pinb_pane

0xc460,	// (0x0004e247) listscroll_pinb_pane_ParamLimits

0xc460,	// (0x0004e247) listscroll_pinb_pane

0xc46f,	// (0x0004e256) pinb_bg_pane_g1

0x1b00,	// (0x000438e7) pinb_bg_pane_g2

0x1b0c,	// (0x000438f3) pinb_bg_pane_g3

0x1b18,	// (0x000438ff) pinb_bg_pane_g4

0x1b24,	// (0x0004390b) pinb_bg_pane_g5

0x1b30,	// (0x00043917) pinb_bg_pane_g6

0x1b3b,	// (0x00043922) pinb_bg_pane_g7

0x1b46,	// (0x0004392d) pinb_bg_pane_g8

0x1b51,	// (0x00043938) pinb_bg_pane_g9

0x1b5b,	// (0x00043942) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00050f13) pinb_bg_pane_g

0x1b70,	// (0x00043957) grid_pinb_pane

0x1b79,	// (0x00043960) list_pinb_pane

0x1b82,	// (0x00043969) scroll_pane_cp01_ParamLimits

0x1b82,	// (0x00043969) scroll_pane_cp01

0xc481,	// (0x0004e268) find_pinb_pane_g1_ParamLimits

0xc481,	// (0x0004e268) find_pinb_pane_g1

0xc499,	// (0x0004e280) find_pinb_pane_t1

0xc4ab,	// (0x0004e292) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00050f2d) find_pinb_pane_t

0xc4c0,	// (0x0004e2a7) input_focus_pane_cp01_ParamLimits

0xc4c0,	// (0x0004e2a7) input_focus_pane_cp01

0x1b94,	// (0x0004397b) cell_pinb_pane_ParamLimits

0x1b94,	// (0x0004397b) cell_pinb_pane

0x1bc6,	// (0x000439ad) cell_pinb_pane_g1_ParamLimits

0x1bc6,	// (0x000439ad) cell_pinb_pane_g1

0x1bd6,	// (0x000439bd) cell_pinb_pane_g2_ParamLimits

0x1bd6,	// (0x000439bd) cell_pinb_pane_g2

0xc4cc,	// (0x0004e2b3) cell_pinb_pane_g3_ParamLimits

0xc4cc,	// (0x0004e2b3) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00050f32) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00050f32) cell_pinb_pane_g

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp01

0x1be2,	// (0x000439c9) list_pinb_item_pane_ParamLimits

0x1be2,	// (0x000439c9) list_pinb_item_pane

0xc1ee,	// (0x0004dfd5) list_highlight_pane_cp02

0xc4d8,	// (0x0004e2bf) list_pinb_item_pane_g1_ParamLimits

0xc4d8,	// (0x0004e2bf) list_pinb_item_pane_g1

0xc4e5,	// (0x0004e2cc) list_pinb_item_pane_g2_ParamLimits

0xc4e5,	// (0x0004e2cc) list_pinb_item_pane_g2

0x1bf6,	// (0x000439dd) list_pinb_item_pane_g3_ParamLimits

0x1bf6,	// (0x000439dd) list_pinb_item_pane_g3

0xc4f1,	// (0x0004e2d8) list_pinb_item_pane_g4_ParamLimits

0xc4f1,	// (0x0004e2d8) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00050f39) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00050f39) list_pinb_item_pane_g

0xc4fd,	// (0x0004e2e4) list_pinb_item_pane_t1_ParamLimits

0xc4fd,	// (0x0004e2e4) list_pinb_item_pane_t1

0x1c25,	// (0x00043a0c) calc_display_pane

0x1c4d,	// (0x00043a34) calc_paper_pane

0x1c70,	// (0x00043a57) grid_calc_pane

0xc1ee,	// (0x0004dfd5) bg_list_pane_cp01

0x1c9e,	// (0x00043a85) clock_g1

0x1ca6,	// (0x00043a8d) clock_g2

0x0001,

0xf15b,	// (0x00050f42) clock_g

0x1cae,	// (0x00043a95) clock_t1_ParamLimits

0x1cae,	// (0x00043a95) clock_t1

0x1cc3,	// (0x00043aaa) clock_t2_ParamLimits

0x1cc3,	// (0x00043aaa) clock_t2

0x1cd5,	// (0x00043abc) clock_t3_ParamLimits

0x1cd5,	// (0x00043abc) clock_t3

0x1ce7,	// (0x00043ace) clock_t4_ParamLimits

0x1ce7,	// (0x00043ace) clock_t4

0x1cf9,	// (0x00043ae0) clock_t5_ParamLimits

0x1cf9,	// (0x00043ae0) clock_t5

0x1d0e,	// (0x00043af5) clock_t6_ParamLimits

0x1d0e,	// (0x00043af5) clock_t6

0x1d20,	// (0x00043b07) clock_t7_ParamLimits

0x1d20,	// (0x00043b07) clock_t7

0x1d32,	// (0x00043b19) clock_t8_ParamLimits

0x1d32,	// (0x00043b19) clock_t8

0x1d46,	// (0x00043b2d) clock_t9_ParamLimits

0x1d46,	// (0x00043b2d) clock_t9

0x0008,

0xf160,	// (0x00050f47) clock_t_ParamLimits

0xf160,	// (0x00050f47) clock_t

0xc514,	// (0x0004e2fb) popup_clock_analogue_window_cp02

0xc514,	// (0x0004e2fb) popup_clock_digital_window_cp01

0xc51c,	// (0x0004e303) listscroll_help_pane

0xc1ee,	// (0x0004dfd5) phob_pre_status_pane

0xc526,	// (0x0004e30d) grid_qdial_pane

0xc1ee,	// (0x0004dfd5) listscroll_mce_pane

0xc530,	// (0x0004e317) bg_notes_pane

0xc53a,	// (0x0004e321) list_notes_pane

0x1d5a,	// (0x00043b41) scroll_pane_cp06

0xc544,	// (0x0004e32b) bg_calc_paper_pane

0xa73f,	// (0x0004c526) list_calc_pane

0xc558,	// (0x0004e33f) bg_calc_display_pane

0x1d65,	// (0x00043b4c) calc_display_pane_t1

0x1d77,	// (0x00043b5e) calc_display_pane_t2

0xa759,	// (0x0004c540) calc_display_pane_t3

0x0002,

0xf173,	// (0x00050f5a) calc_display_pane_t

0x1d89,	// (0x00043b70) cell_calc_pane_ParamLimits

0x1d89,	// (0x00043b70) cell_calc_pane

0xc564,	// (0x0004e34b) bg_calc_paper_pane_g1

0xc570,	// (0x0004e357) bg_calc_paper_pane_g2

0xc57c,	// (0x0004e363) bg_calc_paper_pane_g3

0xc588,	// (0x0004e36f) bg_calc_paper_pane_g4

0xc594,	// (0x0004e37b) bg_calc_paper_pane_g5

0x1dbe,	// (0x00043ba5) bg_calc_paper_pane_g6

0x1dcd,	// (0x00043bb4) bg_calc_paper_pane_g7

0x1ddc,	// (0x00043bc3) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00050f61) bg_calc_paper_pane_g

0x1def,	// (0x00043bd6) calc_bg_paper_pane_g9

0x1e02,	// (0x00043be9) list_calc_item_pane_ParamLimits

0x1e02,	// (0x00043be9) list_calc_item_pane

0xc5a0,	// (0x0004e387) list_calc_item_pane_g1

0xa76b,	// (0x0004c552) list_calc_item_pane_t1_ParamLimits

0xa76b,	// (0x0004c552) list_calc_item_pane_t1

0x1e18,	// (0x00043bff) list_calc_item_pane_t2_ParamLimits

0x1e18,	// (0x00043bff) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00050f72) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00050f72) list_calc_item_pane_t

0xc5ad,	// (0x0004e394) cell_calc_pane_g1

0xc5b7,	// (0x0004e39e) grid_highlight_pane_cp02

0xc5d9,	// (0x0004e3c0) bg_calc_display_pane_g1

0xa77d,	// (0x0004c564) bg_calc_display_pane_g2

0xc5e2,	// (0x0004e3c9) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00050f7c) bg_calc_display_pane_g

0x1e4a,	// (0x00043c31) cell_qdial_pane_ParamLimits

0x1e4a,	// (0x00043c31) cell_qdial_pane

0x1e5e,	// (0x00043c45) cell_qdial_pane_g1_ParamLimits

0x1e5e,	// (0x00043c45) cell_qdial_pane_g1

0x1e74,	// (0x00043c5b) cell_qdial_pane_g2_ParamLimits

0x1e74,	// (0x00043c5b) cell_qdial_pane_g2

0xc5eb,	// (0x0004e3d2) cell_qdial_pane_g3_ParamLimits

0xc5eb,	// (0x0004e3d2) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00050f83) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00050f83) cell_qdial_pane_g

0x1e9b,	// (0x00043c82) cell_qdial_pane_t1_ParamLimits

0x1e9b,	// (0x00043c82) cell_qdial_pane_t1

0x1eb3,	// (0x00043c9a) cell_qdial_pane_t2_ParamLimits

0x1eb3,	// (0x00043c9a) cell_qdial_pane_t2

0x1ec6,	// (0x00043cad) cell_qdial_pane_t3_ParamLimits

0x1ec6,	// (0x00043cad) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00050f8c) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00050f8c) cell_qdial_pane_t

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp04

0xc5f7,	// (0x0004e3de) thumbnail_qdial_pane_ParamLimits

0xc5f7,	// (0x0004e3de) thumbnail_qdial_pane

0xc653,	// (0x0004e43a) list_help_pane

0xc65c,	// (0x0004e443) scroll_pane_cp02

0x1ed9,	// (0x00043cc0) help_list_pane_t1_ParamLimits

0x1ed9,	// (0x00043cc0) help_list_pane_t1

0xa787,	// (0x0004c56e) bg_notes_pane_g2

0xa78f,	// (0x0004c576) bg_notes_pane_g3

0xa797,	// (0x0004c57e) notes_bg_pane_g1

0xa79f,	// (0x0004c586) notes_bg_pane_g4

0xa7a7,	// (0x0004c58e) notes_bg_pane_g5

0xa7af,	// (0x0004c596) notes_bg_pane_g6

0xa7b7,	// (0x0004c59e) notes_bg_pane_g7

0xa7bf,	// (0x0004c5a6) notes_bg_pane_g8

0xa7c7,	// (0x0004c5ae) notes_bg_pane_g9

0x0006,

0xf1ac,	// (0x00050f93) notes_bg_pane_g

0xd8d5,	// (0x0004f6bc) list_notes_text_pane_ParamLimits

0xd8d5,	// (0x0004f6bc) list_notes_text_pane

0xc665,	// (0x0004e44c) list_notes_text_pane_g1

0x0dc6,	// (0x00042bad) list_notes_text_pane_t1

0xc558,	// (0x0004e33f) listscroll_cale_week_pane

0x1f16,	// (0x00043cfd) bg_cale_heading_pane

0xc67f,	// (0x0004e466) bg_cale_pane_cp01

0x1f2e,	// (0x00043d15) cale_week_corner_pane

0x1f3f,	// (0x00043d26) cale_week_day_heading_pane

0x1f57,	// (0x00043d3e) cale_week_scroll_pane_g1

0x1f6c,	// (0x00043d53) cale_week_scroll_pane_g2

0x1f7d,	// (0x00043d64) cale_week_scroll_pane_g3

0x1f8e,	// (0x00043d75) cale_week_scroll_pane_g4

0x1f9f,	// (0x00043d86) cale_week_scroll_pane_g5

0x1fb2,	// (0x00043d99) cale_week_scroll_pane_g6

0x1fc5,	// (0x00043dac) cale_week_scroll_pane_g7

0x1fd8,	// (0x00043dbf) cale_week_scroll_pane_g8

0x1feb,	// (0x00043dd2) cale_week_scroll_pane_g9

0x1ffc,	// (0x00043de3) cale_week_scroll_pane_g10

0x200d,	// (0x00043df4) cale_week_scroll_pane_g11

0x201e,	// (0x00043e05) cale_week_scroll_pane_g12

0x202f,	// (0x00043e16) cale_week_scroll_pane_g13

0x2040,	// (0x00043e27) cale_week_scroll_pane_g14

0x2051,	// (0x00043e38) cale_week_scroll_pane_g15

0x000e,

0xf1bb,	// (0x00050fa2) cale_week_scroll_pane_g

0x2062,	// (0x00043e49) cale_week_time_pane

0x2075,	// (0x00043e5c) grid_cale_week_pane

0x208a,	// (0x00043e71) scroll_pane_cp08

0x20a4,	// (0x00043e8b) cell_cale_week_pane_ParamLimits

0x20a4,	// (0x00043e8b) cell_cale_week_pane

0x20e4,	// (0x00043ecb) cale_week_day_heading_pane_t1

0x20f8,	// (0x00043edf) cale_week_day_heading_pane_t2

0x210c,	// (0x00043ef3) cale_week_day_heading_pane_t3

0x2120,	// (0x00043f07) cale_week_day_heading_pane_t4

0x2134,	// (0x00043f1b) cale_week_day_heading_pane_t5

0x2148,	// (0x00043f2f) cale_week_day_heading_pane_t6

0x215e,	// (0x00043f45) cale_week_day_heading_pane_t7

0x0006,

0xf1da,	// (0x00050fc1) cale_week_day_heading_pane_t

0xc6aa,	// (0x0004e491) bg_cale_side_pane

0x2172,	// (0x00043f59) cale_week_time_pane_t1

0x218a,	// (0x00043f71) cale_week_time_pane_t2

0x21a2,	// (0x00043f89) cale_week_time_pane_t3

0x21ba,	// (0x00043fa1) cale_week_time_pane_t4

0x21d2,	// (0x00043fb9) cale_week_time_pane_t5

0x21ea,	// (0x00043fd1) cale_week_time_pane_t6

0x2202,	// (0x00043fe9) cale_week_time_pane_t7

0x221a,	// (0x00044001) cale_week_time_pane_t8

0x0007,

0xf1e9,	// (0x00050fd0) cale_week_time_pane_t

0x2232,	// (0x00044019) cell_cale_week_pane_g2

0x224b,	// (0x00044032) cell_cale_week_pane_g3_ParamLimits

0x224b,	// (0x00044032) cell_cale_week_pane_g3

0xc6b8,	// (0x0004e49f) grid_highlight_pane_cp07

0xc6c0,	// (0x0004e4a7) listscroll_gms_pane

0xc6ca,	// (0x0004e4b1) grid_gms_pane

0xc6d3,	// (0x0004e4ba) listscroll_gms_pane_g1

0xc6db,	// (0x0004e4c2) listscroll_gms_pane_g2

0x0001,

0x0070,	// (0x00041e57) listscroll_gms_pane_g

0x2263,	// (0x0004404a) scroll_pane_cp010

0x226e,	// (0x00044055) cell_gms_pane_ParamLimits

0x226e,	// (0x00044055) cell_gms_pane

0x2281,	// (0x00044068) cell_gms_pane_g1

0xc6e3,	// (0x0004e4ca) cell_gms_pane_g2

0xc665,	// (0x0004e44c) cell_gms_pane_g3

0xc6eb,	// (0x0004e4d2) cell_gms_pane_g4

0x0003,

0xf1fa,	// (0x00050fe1) cell_gms_pane_g

0xc6f4,	// (0x0004e4db) grid_highlight_pane_cp09

0x4373,	// (0x0004615a) phob_pre_status_pane_g1

0x437b,	// (0x00046162) phob_pre_status_pane_g2

0x4383,	// (0x0004616a) phob_pre_status_pane_g3

0x438b,	// (0x00046172) phob_pre_status_pane_g4

0x0004,

0xf485,	// (0x0005126c) phob_pre_status_pane_g

0x439d,	// (0x00046184) phob_pre_status_pane_t1

0x43ab,	// (0x00046192) phob_pre_status_pane_t2

0x43bb,	// (0x000461a2) phob_pre_status_pane_t3

0x0002,

0xf490,	// (0x00051277) phob_pre_status_pane_t

0xc1ee,	// (0x0004dfd5) bg_list_pane_cp05

0xa7d7,	// (0x0004c5be) grid_vorec_pane

0xa7df,	// (0x0004c5c6) vorec_t1

0xa7ed,	// (0x0004c5d4) vorec_t2

0xa7fb,	// (0x0004c5e2) vorec_t3

0xa809,	// (0x0004c5f0) vorec_t4

0xa817,	// (0x0004c5fe) vorec_t5

0xa825,	// (0x0004c60c) vorec_t6

0x0006,

0xf203,	// (0x00050fea) vorec_t

0xa841,	// (0x0004c628) wait_bar_pane_cp01

0xc6fc,	// (0x0004e4e3) cell_vorec_pane_ParamLimits

0xc6fc,	// (0x0004e4e3) cell_vorec_pane

0xc70f,	// (0x0004e4f6) cell_vorec_pane_g1

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp05

0x22a1,	// (0x00044088) cams_zoom_pane

0x22b0,	// (0x00044097) image_vga_pane

0x22ca,	// (0x000440b1) main_camera_pane_g1

0x22dc,	// (0x000440c3) main_camera_pane_g2

0x22ee,	// (0x000440d5) main_camera_pane_g3

0x2300,	// (0x000440e7) main_camera_pane_g4

0x2312,	// (0x000440f9) main_camera_pane_g5

0x2324,	// (0x0004410b) main_camera_pane_g6

0x2336,	// (0x0004411d) main_camera_pane_g7

0x0007,

0xf212,	// (0x00050ff9) main_camera_pane_g

0x2348,	// (0x0004412f) main_camera_pane_t1

0x235e,	// (0x00044145) main_camera_pane_t2

0x0001,

0xf223,	// (0x0005100a) main_camera_pane_t

0x239a,	// (0x00044181) cams_zoom_pane_cp_ParamLimits

0x239a,	// (0x00044181) cams_zoom_pane_cp

0x23c2,	// (0x000441a9) image_cif_pane_ParamLimits

0x23c2,	// (0x000441a9) image_cif_pane

0x23fd,	// (0x000441e4) image_subqcif_pane

0x2405,	// (0x000441ec) main_video_pane_g1_ParamLimits

0x2405,	// (0x000441ec) main_video_pane_g1

0x2429,	// (0x00044210) main_video_pane_g2_ParamLimits

0x2429,	// (0x00044210) main_video_pane_g2

0x245f,	// (0x00044246) main_video_pane_g3_ParamLimits

0x245f,	// (0x00044246) main_video_pane_g3

0x248f,	// (0x00044276) main_video_pane_g4_ParamLimits

0x248f,	// (0x00044276) main_video_pane_g4

0x24bf,	// (0x000442a6) main_video_pane_g5_ParamLimits

0x24bf,	// (0x000442a6) main_video_pane_g5

0xc725,	// (0x0004e50c) main_video_pane_g6_ParamLimits

0xc725,	// (0x0004e50c) main_video_pane_g6

0x0006,

0xf228,	// (0x0005100f) main_video_pane_g_ParamLimits

0xf228,	// (0x0005100f) main_video_pane_g

0x24ea,	// (0x000442d1) main_video_pane_t1_ParamLimits

0x24ea,	// (0x000442d1) main_video_pane_t1

0xc73f,	// (0x0004e526) cams_zoom_pane_g1

0xc748,	// (0x0004e52f) cams_zoom_pane_g2

0xc751,	// (0x0004e538) cams_zoom_pane_g3

0xc75a,	// (0x0004e541) cams_zoom_pane_g4

0x0003,

0x00b2,	// (0x00041e99) cams_zoom_pane_g

0x2547,	// (0x0004432e) grid_cams_pane

0x2561,	// (0x00044348) linegrid_cams_pane

0x2574,	// (0x0004435b) cell_cams_pane_ParamLimits

0x2574,	// (0x0004435b) cell_cams_pane

0xc763,	// (0x0004e54a) cams_burst_image_pane

0xc76b,	// (0x0004e552) cell_cams_pane_g1

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp03

0xc5ad,	// (0x0004e394) mp_bg_pane_g1

0xc1ee,	// (0x0004dfd5) bg_list_pane_cp03

0xe352,	// (0x00050139) bg_mp_pane

0xe35a,	// (0x00050141) grid_mp_pane

0xe362,	// (0x00050149) media_player_g1

0xe36a,	// (0x00050151) media_player_t1

0xe378,	// (0x0005015f) media_player_t2

0xe386,	// (0x0005016d) media_player_t3

0xe394,	// (0x0005017b) media_player_t4

0xe3a2,	// (0x00050189) media_player_t5

0xe3b0,	// (0x00050197) media_player_t6

0xe3be,	// (0x000501a5) media_player_t7

0x0006,

0x044e,	// (0x00042235) media_player_t

0xe3cc,	// (0x000501b3) wait_bar_pane_cp02

0xf471,	// (0x00051258) main_usb_pane_t

0x436a,	// (0x00046151) cell_mp_pane

0xc5ad,	// (0x0004e394) cell_mp_pane_g1

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp06

0xc773,	// (0x0004e55a) grid_skin_colour_pane

0xc77b,	// (0x0004e562) list_highlight_pane_cp03

0x2594,	// (0x0004437b) skin_g1

0xc783,	// (0x0004e56a) skin_t1

0xc792,	// (0x0004e579) skin_t2

0x0001,

0x00e7,	// (0x00041ece) skin_t

0x259c,	// (0x00044383) cell_skin_colour_pane_ParamLimits

0x259c,	// (0x00044383) cell_skin_colour_pane

0xc7a0,	// (0x0004e587) cell_skin_colour_pane_g1

0x2615,	// (0x000443fc) call_video_g1_ParamLimits

0x2615,	// (0x000443fc) call_video_g1

0x2631,	// (0x00044418) call_video_g2_ParamLimits

0x2631,	// (0x00044418) call_video_g2

0x0001,

0xf263,	// (0x0005104a) call_video_g_ParamLimits

0xf263,	// (0x0005104a) call_video_g

0x2683,	// (0x0004446a) call_video_uplink_pane_cp1_ParamLimits

0x2683,	// (0x0004446a) call_video_uplink_pane_cp1

0xc7b2,	// (0x0004e599) call_video_uplink_pane_cp2

0x2722,	// (0x00044509) video_down_crop_pane_ParamLimits

0x2722,	// (0x00044509) video_down_crop_pane

0x280b,	// (0x000445f2) video_down_pane_ParamLimits

0x280b,	// (0x000445f2) video_down_pane

0xc7ba,	// (0x0004e5a1) video_down_subqcif_pane_ParamLimits

0xc7ba,	// (0x0004e5a1) video_down_subqcif_pane

0xc7d2,	// (0x0004e5b9) video_down_subqcif_pane_cp_ParamLimits

0xc7d2,	// (0x0004e5b9) video_down_subqcif_pane_cp

0xc7f6,	// (0x0004e5dd) im_reading_pane_ParamLimits

0xc7f6,	// (0x0004e5dd) im_reading_pane

0x2919,	// (0x00044700) im_writing_pane_ParamLimits

0x2919,	// (0x00044700) im_writing_pane

0x292f,	// (0x00044716) im_reading_pane_t1

0xc810,	// (0x0004e5f7) list_im_pane

0xc821,	// (0x0004e608) scroll_pane_cp07

0x296b,	// (0x00044752) im_writing_pane_t1_ParamLimits

0x296b,	// (0x00044752) im_writing_pane_t1

0xc83a,	// (0x0004e621) im_writing_pane_t2_ParamLimits

0xc83a,	// (0x0004e621) im_writing_pane_t2

0x0001,

0xf26d,	// (0x00051054) im_writing_pane_t_ParamLimits

0xf26d,	// (0x00051054) im_writing_pane_t

0xc1ee,	// (0x0004dfd5) input_focus_pane_cp04

0xc1ee,	// (0x0004dfd5) input_focus_pane_cp05

0x2980,	// (0x00044767) list_im_single_pane_ParamLimits

0x2980,	// (0x00044767) list_im_single_pane

0x2996,	// (0x0004477d) list_single_im_pane_t1

0x432a,	// (0x00046111) blid_accuracy_pane

0x4332,	// (0x00046119) blid_compass_pane

0x433c,	// (0x00046123) main_location_t1

0x434c,	// (0x00046133) main_location_t2

0x435c,	// (0x00046143) main_location_t3

0x0002,

0xf47e,	// (0x00051265) main_location_t

0xc1ee,	// (0x0004dfd5) aid_levels_location

0xc5ad,	// (0x0004e394) blid_accuracy_pane_g1

0xc5ad,	// (0x0004e394) blid_accuracy_pane_g2

0x0001,

0x0158,	// (0x00041f3f) blid_accuracy_pane_g

0xc882,	// (0x0004e669) wml_content_pane

0xc8c0,	// (0x0004e6a7) wml_button_pane_ParamLimits

0xc8c0,	// (0x0004e6a7) wml_button_pane

0x29a5,	// (0x0004478c) wml_list_single_large_pane_ParamLimits

0x29a5,	// (0x0004478c) wml_list_single_large_pane

0x29bc,	// (0x000447a3) wml_list_single_medium_pane_ParamLimits

0x29bc,	// (0x000447a3) wml_list_single_medium_pane

0x29d4,	// (0x000447bb) wml_list_single_small_pane_ParamLimits

0x29d4,	// (0x000447bb) wml_list_single_small_pane

0xc8d4,	// (0x0004e6bb) wml_selection_box_pane_ParamLimits

0xc8d4,	// (0x0004e6bb) wml_selection_box_pane

0xc8e7,	// (0x0004e6ce) wml_list_single_pane_t1

0xc8f6,	// (0x0004e6dd) wml_list_single_medium_pane_t1

0xc905,	// (0x0004e6ec) wml_list_single_large_pane_t1

0xc914,	// (0x0004e6fb) input_focus_pane_cp02_ParamLimits

0xc914,	// (0x0004e6fb) input_focus_pane_cp02

0xc927,	// (0x0004e70e) wml_selection_box_pane_g1

0xc930,	// (0x0004e717) wml_selection_box_pane_t1_ParamLimits

0xc930,	// (0x0004e717) wml_selection_box_pane_t1

0xc449,	// (0x0004e230) bg_wml_button_pane_ParamLimits

0xc449,	// (0x0004e230) bg_wml_button_pane

0xc948,	// (0x0004e72f) wml_button_pane_g1

0xc950,	// (0x0004e737) wml_button_pane_t1

0xc948,	// (0x0004e72f) wml_button_bg_pane_g1

0xc960,	// (0x0004e747) wml_button_bg_pane_g2

0xc968,	// (0x0004e74f) wml_button_bg_pane_g3

0xc970,	// (0x0004e757) wml_button_bg_pane_g4

0xc978,	// (0x0004e75f) wml_button_bg_pane_g5

0xc980,	// (0x0004e767) wml_button_bg_pane_g6

0xc988,	// (0x0004e76f) wml_button_bg_pane_g7

0xc990,	// (0x0004e777) wml_button_bg_pane_g8

0xc998,	// (0x0004e77f) wml_button_bg_pane_g9

0x0008,

0x00fb,	// (0x00041ee2) wml_button_bg_pane_g

0x29f2,	// (0x000447d9) bg_list_pane_cp02

0xc9a0,	// (0x0004e787) mce_header_pane_ParamLimits

0xc9a0,	// (0x0004e787) mce_header_pane

0xc9b6,	// (0x0004e79d) mce_icon_pane

0xc9b6,	// (0x0004e79d) mce_image_pane

0xc9bf,	// (0x0004e7a6) mce_text_pane_ParamLimits

0xc9bf,	// (0x0004e7a6) mce_text_pane

0x29fa,	// (0x000447e1) scroll_pane_cp03

0xc8b8,	// (0x0004e69f) scroll_pane_cp04

0xc9d2,	// (0x0004e7b9) scroll_pane_cp05_ParamLimits

0xc9d2,	// (0x0004e7b9) scroll_pane_cp05

0x2a04,	// (0x000447eb) mce_header_field_pane_ParamLimits

0x2a04,	// (0x000447eb) mce_header_field_pane

0x2a1b,	// (0x00044802) mce_header_field_pane_2_ParamLimits

0x2a1b,	// (0x00044802) mce_header_field_pane_2

0x2a31,	// (0x00044818) mce_header_field_pane_3

0x2a39,	// (0x00044820) list_single_mce_message_pane_ParamLimits

0x2a39,	// (0x00044820) list_single_mce_message_pane

0x2a51,	// (0x00044838) list_single_mce_smart_pane_ParamLimits

0x2a51,	// (0x00044838) list_single_mce_smart_pane

0xc9de,	// (0x0004e7c5) input_focus_pane_cp03

0xc9e7,	// (0x0004e7ce) list_header_data_pane

0x2a74,	// (0x0004485b) mce_header_field_pane_t1

0x2a84,	// (0x0004486b) list_single_mce_header_pane_ParamLimits

0x2a84,	// (0x0004486b) list_single_mce_header_pane

0xc9ef,	// (0x0004e7d6) list_single_mce_header_pane_t1

0xc9fe,	// (0x0004e7e5) list_single_mce_message_pane_g1

0xca06,	// (0x0004e7ed) list_single_mce_message_pane_t1

0x2ab6,	// (0x0004489d) bg_cale_heading_pane_cp01_ParamLimits

0x2ab6,	// (0x0004489d) bg_cale_heading_pane_cp01

0xca14,	// (0x0004e7fb) bg_cale_pane_cp02_ParamLimits

0xca14,	// (0x0004e7fb) bg_cale_pane_cp02

0x2ad9,	// (0x000448c0) cale_month_corner_pane

0x2aef,	// (0x000448d6) cale_month_day_heading_pane_ParamLimits

0x2aef,	// (0x000448d6) cale_month_day_heading_pane

0x2b22,	// (0x00044909) cale_month_pane_g1_ParamLimits

0x2b22,	// (0x00044909) cale_month_pane_g1

0x2b3e,	// (0x00044925) cale_month_pane_g2_ParamLimits

0x2b3e,	// (0x00044925) cale_month_pane_g2

0x2b59,	// (0x00044940) cale_month_pane_g3_ParamLimits

0x2b59,	// (0x00044940) cale_month_pane_g3

0x2b85,	// (0x0004496c) cale_month_pane_g4_ParamLimits

0x2b85,	// (0x0004496c) cale_month_pane_g4

0x2bb1,	// (0x00044998) cale_month_pane_g5_ParamLimits

0x2bb1,	// (0x00044998) cale_month_pane_g5

0x2be5,	// (0x000449cc) cale_month_pane_g6_ParamLimits

0x2be5,	// (0x000449cc) cale_month_pane_g6

0x2c21,	// (0x00044a08) cale_month_pane_g7_ParamLimits

0x2c21,	// (0x00044a08) cale_month_pane_g7

0x2c5d,	// (0x00044a44) cale_month_pane_g8_ParamLimits

0x2c5d,	// (0x00044a44) cale_month_pane_g8

0x2c99,	// (0x00044a80) cale_month_pane_g9_ParamLimits

0x2c99,	// (0x00044a80) cale_month_pane_g9

0x2cd3,	// (0x00044aba) cale_month_pane_g10_ParamLimits

0x2cd3,	// (0x00044aba) cale_month_pane_g10

0x2d0d,	// (0x00044af4) cale_month_pane_g11_ParamLimits

0x2d0d,	// (0x00044af4) cale_month_pane_g11

0x2d47,	// (0x00044b2e) cale_month_pane_g12_ParamLimits

0x2d47,	// (0x00044b2e) cale_month_pane_g12

0x2d81,	// (0x00044b68) cale_month_pane_g13_ParamLimits

0x2d81,	// (0x00044b68) cale_month_pane_g13

0x000c,

0xf272,	// (0x00051059) cale_month_pane_g_ParamLimits

0xf272,	// (0x00051059) cale_month_pane_g

0x2dbb,	// (0x00044ba2) cale_month_week_pane

0x2dce,	// (0x00044bb5) grid_cale_month_pane_ParamLimits

0x2dce,	// (0x00044bb5) grid_cale_month_pane

0x2dfc,	// (0x00044be3) cale_month_day_heading_pane_t1

0x2e5a,	// (0x00044c41) cale_month_day_heading_pane_t2

0x2ebf,	// (0x00044ca6) cale_month_day_heading_pane_t3

0x2f24,	// (0x00044d0b) cale_month_day_heading_pane_t4

0x2f89,	// (0x00044d70) cale_month_day_heading_pane_t5

0x2ffe,	// (0x00044de5) cale_month_day_heading_pane_t6

0x3073,	// (0x00044e5a) cale_month_day_heading_pane_t7

0x0006,

0xf28d,	// (0x00051074) cale_month_day_heading_pane_t

0xc6aa,	// (0x0004e491) bg_cale_side_pane_cp01

0x30e8,	// (0x00044ecf) cale_month_week_pane_t1

0x30ff,	// (0x00044ee6) cale_month_week_pane_t2

0x3116,	// (0x00044efd) cale_month_week_pane_t3

0x312d,	// (0x00044f14) cale_month_week_pane_t4

0x3144,	// (0x00044f2b) cale_month_week_pane_t5

0x315b,	// (0x00044f42) cale_month_week_pane_t6

0x0005,

0xf29c,	// (0x00051083) cale_month_week_pane_t

0x3172,	// (0x00044f59) cell_cale_month_pane_ParamLimits

0x3172,	// (0x00044f59) cell_cale_month_pane

0xa913,	// (0x0004c6fa) cell_cale_month_pane_g1

0x3248,	// (0x0004502f) cell_cale_month_pane_t1_ParamLimits

0x3248,	// (0x0004502f) cell_cale_month_pane_t1

0xc6b8,	// (0x0004e49f) grid_highlight_pane_cp08

0xc5ad,	// (0x0004e394) main_smil_g1

0x3264,	// (0x0004504b) smil_status_pane

0xca49,	// (0x0004e830) smil_text_pane

0xe26a,	// (0x00050051) bg_popup_call3_rect_pane_g8

0xe272,	// (0x00050059) bg_popup_call3_rect_pane_g9

0x0008,

0x03f1,	// (0x000421d8) bg_popup_call3_rect_pane_g

0xe4f4,	// (0x000502db) smil_status_volume_pane_g1

0xca53,	// (0x0004e83a) smil_status_pane_t1

0xaa86,	// (0x0004c86d) volume_smil_pane

0xca6a,	// (0x0004e851) list_smil_text_pane

0x3279,	// (0x00045060) scroll_pane_cp011

0x3284,	// (0x0004506b) smil_text_list_pane_t1_ParamLimits

0x3284,	// (0x0004506b) smil_text_list_pane_t1

0xa91f,	// (0x0004c706) aid_volume_smil_ParamLimits

0xa91f,	// (0x0004c706) aid_volume_smil

0xc5ad,	// (0x0004e394) smil_volume_pane_g1

0xc5ad,	// (0x0004e394) smil_volume_pane_g2

0x0001,

0x0158,	// (0x00041f3f) smil_volume_pane_g

0xc558,	// (0x0004e33f) listscroll_cale_day_pane

0xca74,	// (0x0004e85b) bg_cale_pane

0xca8c,	// (0x0004e873) list_cale_pane

0xca9d,	// (0x0004e884) scroll_pane_cp09

0xcaae,	// (0x0004e895) cale_bg_pane_g1

0xcab6,	// (0x0004e89d) cale_bg_pane_g2

0xcabe,	// (0x0004e8a5) cale_bg_pane_g3

0xcac6,	// (0x0004e8ad) cale_bg_pane_g4

0xcace,	// (0x0004e8b5) cale_bg_pane_g5

0xcad6,	// (0x0004e8bd) cale_bg_pane_g6

0xcade,	// (0x0004e8c5) cale_bg_pane_g7

0xcae6,	// (0x0004e8cd) cale_bg_pane_g8

0xcaee,	// (0x0004e8d5) cale_bg_pane_g9

0x0008,

0x015d,	// (0x00041f44) cale_bg_pane_g

0x32d8,	// (0x000450bf) list_cale_time_pane_ParamLimits

0x32d8,	// (0x000450bf) list_cale_time_pane

0x32ed,	// (0x000450d4) list_cale_time_pane_g1_ParamLimits

0x32ed,	// (0x000450d4) list_cale_time_pane_g1

0xcaf6,	// (0x0004e8dd) list_cale_time_pane_g2_ParamLimits

0xcaf6,	// (0x0004e8dd) list_cale_time_pane_g2

0x32f9,	// (0x000450e0) list_cale_time_pane_g3_ParamLimits

0x32f9,	// (0x000450e0) list_cale_time_pane_g3

0x3315,	// (0x000450fc) list_cale_time_pane_g4_ParamLimits

0x3315,	// (0x000450fc) list_cale_time_pane_g4

0x3323,	// (0x0004510a) list_cale_time_pane_g5_ParamLimits

0x3323,	// (0x0004510a) list_cale_time_pane_g5

0x0005,

0xf2bc,	// (0x000510a3) list_cale_time_pane_g_ParamLimits

0xf2bc,	// (0x000510a3) list_cale_time_pane_g

0x3331,	// (0x00045118) list_cale_time_pane_t1_ParamLimits

0x3331,	// (0x00045118) list_cale_time_pane_t1

0x3359,	// (0x00045140) list_cale_time_pane_t2_ParamLimits

0x3359,	// (0x00045140) list_cale_time_pane_t2

0x362c,	// (0x00045413) aid_blid_cardinal_pane

0x366a,	// (0x00045451) compass_pane_t4

0x3381,	// (0x00045168) list_cale_time_pane_t4_ParamLimits

0x3381,	// (0x00045168) list_cale_time_pane_t4

0x3678,	// (0x0004545f) compass_pane_t5

0x3686,	// (0x0004546d) compass_pane_t6

0x3694,	// (0x0004547b) compass_pane_t7

0xcf32,	// (0x0004ed19) navi_pane_cc_t1

0xd087,	// (0x0004ee6e) aid_phob_thumbnail_center_pane

0x3d3e,	// (0x00045b25) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2c9,	// (0x000510b0) list_cale_time_pane_t_ParamLimits

0xf2c9,	// (0x000510b0) list_cale_time_pane_t

0xbe47,	// (0x0004dc2e) bg_popup_window_pane_cp02_ParamLimits

0xbe47,	// (0x0004dc2e) bg_popup_window_pane_cp02

0xcb10,	// (0x0004e8f7) heading_pane_cp01_ParamLimits

0xcb10,	// (0x0004e8f7) heading_pane_cp01

0xcb1c,	// (0x0004e903) loc_req_pane_ParamLimits

0xcb1c,	// (0x0004e903) loc_req_pane

0xcb2c,	// (0x0004e913) loc_type_pane_ParamLimits

0xcb2c,	// (0x0004e913) loc_type_pane

0xcb3e,	// (0x0004e925) loc_type_pane_t1_ParamLimits

0xcb3e,	// (0x0004e925) loc_type_pane_t1

0xcb50,	// (0x0004e937) loc_type_pane_t2_ParamLimits

0xcb50,	// (0x0004e937) loc_type_pane_t2

0xcb62,	// (0x0004e949) loc_type_pane_t3_ParamLimits

0xcb62,	// (0x0004e949) loc_type_pane_t3

0x0002,

0x0184,	// (0x00041f6b) loc_type_pane_t_ParamLimits

0x0184,	// (0x00041f6b) loc_type_pane_t

0xcb74,	// (0x0004e95b) list_loc_req_pane

0xcb7e,	// (0x0004e965) scroll_pane_cp012

0x33a9,	// (0x00045190) list_single_loc_request_popup_menu_pane_ParamLimits

0x33a9,	// (0x00045190) list_single_loc_request_popup_menu_pane

0xcb89,	// (0x0004e970) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcb89,	// (0x0004e970) list_single_loc_request_popup_menu_pane_g1

0xcb95,	// (0x0004e97c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcb95,	// (0x0004e97c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x018b,	// (0x00041f72) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x018b,	// (0x00041f72) list_single_loc_request_popup_menu_pane_g

0xcba1,	// (0x0004e988) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcba1,	// (0x0004e988) list_single_loc_request_popup_menu_pane_t1

0xc449,	// (0x0004e230) bg_popup_window_pane_cp03_ParamLimits

0xc449,	// (0x0004e230) bg_popup_window_pane_cp03

0xd8ec,	// (0x0004f6d3) heading_loc_req_pane_ParamLimits

0xd8ec,	// (0x0004f6d3) heading_loc_req_pane

0x33b6,	// (0x0004519d) popup_dyc_status_message_window_g1_ParamLimits

0x33b6,	// (0x0004519d) popup_dyc_status_message_window_g1

0x33ca,	// (0x000451b1) popup_dyc_status_message_window_t1_ParamLimits

0x33ca,	// (0x000451b1) popup_dyc_status_message_window_t1

0x33df,	// (0x000451c6) popup_dyc_status_message_window_t2_ParamLimits

0x33df,	// (0x000451c6) popup_dyc_status_message_window_t2

0x33f4,	// (0x000451db) popup_dyc_status_message_window_t3_ParamLimits

0x33f4,	// (0x000451db) popup_dyc_status_message_window_t3

0x0002,

0xf2d0,	// (0x000510b7) popup_dyc_status_message_window_t_ParamLimits

0xf2d0,	// (0x000510b7) popup_dyc_status_message_window_t

0xc1ee,	// (0x0004dfd5) bg_heading_pane_cp01

0xcbb7,	// (0x0004e99e) heading_loc_req_pane_g1

0xcbbf,	// (0x0004e9a6) heading_loc_req_pane_g2

0xcbc7,	// (0x0004e9ae) heading_loc_req_pane_g3

0x0002,

0x0197,	// (0x00041f7e) heading_loc_req_pane_g

0xcbcf,	// (0x0004e9b6) heading_loc_req_pane_t1

0xcbde,	// (0x0004e9c5) bg_popup_sub_pane_cp01_ParamLimits

0xcbde,	// (0x0004e9c5) bg_popup_sub_pane_cp01

0xcbec,	// (0x0004e9d3) popup_cale_events_window_g1_ParamLimits

0xcbec,	// (0x0004e9d3) popup_cale_events_window_g1

0xcc0c,	// (0x0004e9f3) popup_cale_events_window_g2_ParamLimits

0xcc0c,	// (0x0004e9f3) popup_cale_events_window_g2

0x0001,

0x01cb,	// (0x00041fb2) popup_cale_events_window_g_ParamLimits

0x01cb,	// (0x00041fb2) popup_cale_events_window_g

0xcc2c,	// (0x0004ea13) popup_cale_events_window_t1_ParamLimits

0xcc2c,	// (0x0004ea13) popup_cale_events_window_t1

0xcc3e,	// (0x0004ea25) popup_cale_events_window_t2_ParamLimits

0xcc3e,	// (0x0004ea25) popup_cale_events_window_t2

0xcc7c,	// (0x0004ea63) popup_cale_events_window_t3_ParamLimits

0xcc7c,	// (0x0004ea63) popup_cale_events_window_t3

0xccb6,	// (0x0004ea9d) popup_cale_events_window_t4_ParamLimits

0xccb6,	// (0x0004ea9d) popup_cale_events_window_t4

0x0003,

0x01d0,	// (0x00041fb7) popup_cale_events_window_t_ParamLimits

0x01d0,	// (0x00041fb7) popup_cale_events_window_t

0x3428,	// (0x0004520f) call_type_pane

0x3438,	// (0x0004521f) popup_call_status_window_g1

0x344c,	// (0x00045233) popup_call_status_window_g2

0x3460,	// (0x00045247) popup_call_status_window_g3

0x0002,

0xf304,	// (0x000510eb) popup_call_status_window_g

0xccec,	// (0x0004ead3) call_type_pane_g1

0xccf5,	// (0x0004eadc) call_type_pane_g2

0x0001,

0xf30b,	// (0x000510f2) call_type_pane_g

0xc1ee,	// (0x0004dfd5) bg_popup_sub_pane_cp02

0xccfe,	// (0x0004eae5) listscroll_popup_wml_pane

0xcd06,	// (0x0004eaed) list_wml_pane

0xcd10,	// (0x0004eaf7) scroll_pane_cp013

0xcd1b,	// (0x0004eb02) list_single_graphic_popup_wml_pane_ParamLimits

0xcd1b,	// (0x0004eb02) list_single_graphic_popup_wml_pane

0xc5ad,	// (0x0004e394) list_single_graphic_popup_wml_pane_g1

0xcd2f,	// (0x0004eb16) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf310,	// (0x000510f7) list_single_graphic_popup_wml_pane_g

0xcd37,	// (0x0004eb1e) list_single_graphic_popup_wml_pane_t1

0xcd4d,	// (0x0004eb34) aid_call_pane

0xc441,	// (0x0004e228) popup_clock_analogue_window_g1

0xc441,	// (0x0004e228) popup_clock_analogue_window_g2

0xa9b6,	// (0x0004c79d) popup_clock_analogue_window_g3

0xa9b6,	// (0x0004c79d) popup_clock_analogue_window_g4

0xc5ad,	// (0x0004e394) popup_clock_analogue_window_g5

0x0004,

0xf315,	// (0x000510fc) popup_clock_analogue_window_g

0xa9be,	// (0x0004c7a5) popup_clock_analogue_window_t1

0xa9cc,	// (0x0004c7b3) clock_digital_number_pane_ParamLimits

0xa9cc,	// (0x0004c7b3) clock_digital_number_pane

0xa9d8,	// (0x0004c7bf) clock_digital_number_pane_cp02_ParamLimits

0xa9d8,	// (0x0004c7bf) clock_digital_number_pane_cp02

0xa9e4,	// (0x0004c7cb) clock_digital_number_pane_cp03_ParamLimits

0xa9e4,	// (0x0004c7cb) clock_digital_number_pane_cp03

0xa9f0,	// (0x0004c7d7) clock_digital_number_pane_cp04_ParamLimits

0xa9f0,	// (0x0004c7d7) clock_digital_number_pane_cp04

0xa9fc,	// (0x0004c7e3) clock_digital_separator_pane_ParamLimits

0xa9fc,	// (0x0004c7e3) clock_digital_separator_pane

0xaa08,	// (0x0004c7ef) popup_clock_digital_window_t1

0xc5ad,	// (0x0004e394) clock_digital_number_pane_g1

0xc5ad,	// (0x0004e394) clock_digital_number_pane_g2

0x0001,

0x0158,	// (0x00041f3f) clock_digital_number_pane_g

0xc5ad,	// (0x0004e394) clock_digital_separator_pane_g1

0xc5ad,	// (0x0004e394) clock_digital_separator_pane_g2

0x0001,

0x0158,	// (0x00041f3f) clock_digital_separator_pane_g

0xc1ee,	// (0x0004dfd5) bg_popup_window_pane_cp04

0xcd55,	// (0x0004eb3c) heading_pane_cp03

0xcd6b,	// (0x0004eb52) listscroll_popup_gms_pane

0xcd73,	// (0x0004eb5a) grid_large_graphic_popup_pane

0xcd7d,	// (0x0004eb64) listscroll_popup_gms_pane_g1

0xcd85,	// (0x0004eb6c) listscroll_popup_gms_pane_g2

0x0001,

0x01f5,	// (0x00041fdc) listscroll_popup_gms_pane_g

0xc8b8,	// (0x0004e69f) scroll_pane_cp014

0xcd8d,	// (0x0004eb74) cell_large_graphic_popup_pane_ParamLimits

0xcd8d,	// (0x0004eb74) cell_large_graphic_popup_pane

0xcda5,	// (0x0004eb8c) cell_large_graphic_popup_pane_g1_ParamLimits

0xcda5,	// (0x0004eb8c) cell_large_graphic_popup_pane_g1

0xcdb1,	// (0x0004eb98) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdb1,	// (0x0004eb98) cell_large_graphic_popup_pane_g2

0xcdbd,	// (0x0004eba4) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdbd,	// (0x0004eba4) cell_large_graphic_popup_pane_g3

0xcdca,	// (0x0004ebb1) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdca,	// (0x0004ebb1) cell_large_graphic_popup_pane_g4

0x0003,

0x01fa,	// (0x00041fe1) cell_large_graphic_popup_pane_g_ParamLimits

0x01fa,	// (0x00041fe1) cell_large_graphic_popup_pane_g

0xcdda,	// (0x0004ebc1) grid_highlight_pane_cp010

0xc5ad,	// (0x0004e394) bg_popup_call_pane_g1

0xcde4,	// (0x0004ebcb) list_single_graphic_popup_conf_pane_ParamLimits

0xcde4,	// (0x0004ebcb) list_single_graphic_popup_conf_pane

0xcdf6,	// (0x0004ebdd) list_highlight_pane_cp01

0xcdff,	// (0x0004ebe6) list_single_graphic_popup_conf_pane_g1

0xce07,	// (0x0004ebee) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0203,	// (0x00041fea) list_single_graphic_popup_conf_pane_g

0xce0f,	// (0x0004ebf6) list_single_graphic_popup_conf_pane_t1

0xce1d,	// (0x0004ec04) linegrid_cams_pane_g1

0x3470,	// (0x00045257) linegrid_cams_pane_g2

0xc665,	// (0x0004e44c) linegrid_cams_pane_g3

0xce26,	// (0x0004ec0d) linegrid_cams_pane_g4

0x3479,	// (0x00045260) linegrid_cams_pane_g5

0x3482,	// (0x00045269) linegrid_cams_pane_g6

0xc6eb,	// (0x0004e4d2) linegrid_cams_pane_g7

0x0006,

0xf320,	// (0x00051107) linegrid_cams_pane_g

0xce2f,	// (0x0004ec16) popup_clock_analogue_window

0xce2f,	// (0x0004ec16) popup_clock_digital_window

0xc1ee,	// (0x0004dfd5) popup_phob_thumbnail_window

0xc5ad,	// (0x0004e394) call_video_uplink_pane_g1

0xce38,	// (0x0004ec1f) call_video_uplink_pane_g2

0x0001,

0x0217,	// (0x00041ffe) call_video_uplink_pane_g

0xc6b8,	// (0x0004e49f) video_uplink_pane

0xce40,	// (0x0004ec27) mce_image_pane_g1

0x348d,	// (0x00045274) mce_image_pane_g2

0x3495,	// (0x0004527c) mce_image_pane_g3

0x349d,	// (0x00045284) mce_image_pane_g4

0x34a5,	// (0x0004528c) mce_image_pane_g5

0x0004,

0xf32f,	// (0x00051116) mce_image_pane_g

0xce4a,	// (0x0004ec31) control_top_pane_stacon_cp01_ParamLimits

0xce4a,	// (0x0004ec31) control_top_pane_stacon_cp01

0xce5e,	// (0x0004ec45) uni_indicator_pane_stacon_cp01_ParamLimits

0xce5e,	// (0x0004ec45) uni_indicator_pane_stacon_cp01

0xce6f,	// (0x0004ec56) bg_popup_sub_pane_cp03

0x34ad,	// (0x00045294) chi_dic_find_pane

0x34b5,	// (0x0004529c) listscroll_chi_dic_pane

0x34be,	// (0x000452a5) main_pane_chidic_g1

0x34d1,	// (0x000452b8) chi_dic_find_pane_t1

0xce79,	// (0x0004ec60) find_chidic_pane

0xce82,	// (0x0004ec69) chi_dic_list_pane_ParamLimits

0xce82,	// (0x0004ec69) chi_dic_list_pane

0xce93,	// (0x0004ec7a) scroll_pane_cp020

0x34df,	// (0x000452c6) find_chidic_pane_t1

0xc1ee,	// (0x0004dfd5) input_focus_pane_cp06

0x34ee,	// (0x000452d5) list_chi_dic_pane_ParamLimits

0x34ee,	// (0x000452d5) list_chi_dic_pane

0xce9b,	// (0x0004ec82) list_chi_dic_pane_t1_ParamLimits

0xce9b,	// (0x0004ec82) list_chi_dic_pane_t1

0xc1ee,	// (0x0004dfd5) list_highlight_pane_cp020

0xceae,	// (0x0004ec95) bg_cale_heading_pane_g1

0x3502,	// (0x000452e9) bg_cale_heading_pane_g2

0x350a,	// (0x000452f1) bg_cale_heading_pane_g3

0x3512,	// (0x000452f9) bg_cale_heading_pane_g4

0x351c,	// (0x00045303) bg_cale_heading_pane_g5

0x3526,	// (0x0004530d) bg_cale_heading_pane_g6

0x352e,	// (0x00045315) bg_cale_heading_pane_g7

0x3536,	// (0x0004531d) bg_cale_heading_pane_g8

0x3540,	// (0x00045327) bg_cale_heading_pane_g9

0x0008,

0xf33a,	// (0x00051121) bg_cale_heading_pane_g

0xceae,	// (0x0004ec95) bg_cale_side_pane_g1

0x354a,	// (0x00045331) bg_cale_side_pane_g2

0x3552,	// (0x00045339) bg_cale_side_pane_g3

0x355a,	// (0x00045341) bg_cale_side_pane_g4

0x3562,	// (0x00045349) bg_cale_side_pane_g5

0x356a,	// (0x00045351) bg_cale_side_pane_g6

0x3572,	// (0x00045359) bg_cale_side_pane_g7

0x357a,	// (0x00045361) bg_cale_side_pane_g8

0x3582,	// (0x00045369) bg_cale_side_pane_g9

0x0008,

0xf34d,	// (0x00051134) bg_cale_side_pane_g

0x358a,	// (0x00045371) popup_call_status_window_ParamLimits

0x358a,	// (0x00045371) popup_call_status_window

0xceb6,	// (0x0004ec9d) stacon_top_pane

0xcebe,	// (0x0004eca5) status_pane_ParamLimits

0xcebe,	// (0x0004eca5) status_pane

0xced3,	// (0x0004ecba) status_small_pane

0xcedb,	// (0x0004ecc2) control_pane

0xc1ee,	// (0x0004dfd5) stacon_bottom_pane

0xcee3,	// (0x0004ecca) list_single_mce_smart_pane_t1_ParamLimits

0xcee3,	// (0x0004ecca) list_single_mce_smart_pane_t1

0xcef6,	// (0x0004ecdd) list_single_mce_smart_pane_t2_ParamLimits

0xcef6,	// (0x0004ecdd) list_single_mce_smart_pane_t2

0x0001,

0x024d,	// (0x00042034) list_single_mce_smart_pane_t_ParamLimits

0x024d,	// (0x00042034) list_single_mce_smart_pane_t

0x35d1,	// (0x000453b8) compass_pane

0x35da,	// (0x000453c1) main_location2_pane_t1

0x35ee,	// (0x000453d5) main_location2_pane_t2

0x3602,	// (0x000453e9) main_location2_pane_t3

0x0003,

0xf360,	// (0x00051147) main_location2_pane_t

0xcf15,	// (0x0004ecfc) compass_pane_g1_ParamLimits

0xcf15,	// (0x0004ecfc) compass_pane_g1

0x364c,	// (0x00045433) compass_pane_t1

0x365b,	// (0x00045442) compass_pane_t2

0x0005,

0xf369,	// (0x00051150) compass_pane_t

0x36a2,	// (0x00045489) text_secondary_cp61

0xcf29,	// (0x0004ed10) navi_pane_cams_g5

0xcf4c,	// (0x0004ed33) navi_pane_im_t1

0xcf5a,	// (0x0004ed41) navi_pane_mp_g1_ParamLimits

0xcf5a,	// (0x0004ed41) navi_pane_mp_g1

0xcf6e,	// (0x0004ed55) navi_pane_mp_g2_ParamLimits

0xcf6e,	// (0x0004ed55) navi_pane_mp_g2

0xcf7a,	// (0x0004ed61) navi_pane_mp_g3_ParamLimits

0xcf7a,	// (0x0004ed61) navi_pane_mp_g3

0x0002,

0x026f,	// (0x00042056) navi_pane_mp_g_ParamLimits

0x026f,	// (0x00042056) navi_pane_mp_g

0xcf86,	// (0x0004ed6d) navi_pane_mp_t1

0xcf94,	// (0x0004ed7b) navi_pane_mp_t2

0x0002,

0x0276,	// (0x0004205d) navi_pane_mp_t

0xcfd0,	// (0x0004edb7) navi_pane_vt_g1

0xcf86,	// (0x0004ed6d) navi_pane_vt_t1

0xcfd8,	// (0x0004edbf) navi_slider_pane

0xcfe0,	// (0x0004edc7) zooming_pane

0xcfe8,	// (0x0004edcf) navi_slider_pane_g1

0xaa25,	// (0x0004c80c) navi_slider_pane_g2

0x0006,

0xf37d,	// (0x00051164) navi_slider_pane_g

0xd00c,	// (0x0004edf3) aid_levels_zoom

0xd014,	// (0x0004edfb) zooming_pane_g1

0xd01c,	// (0x0004ee03) zooming_pane_g2

0xd01c,	// (0x0004ee03) zooming_pane_g3

0x0002,

0x028c,	// (0x00042073) zooming_pane_g

0xd024,	// (0x0004ee0b) level_10_zoom

0xd02d,	// (0x0004ee14) level_11_zoom

0xd036,	// (0x0004ee1d) level_1_zoom

0xd03f,	// (0x0004ee26) level_2_zoom

0xd048,	// (0x0004ee2f) level_3_zoom

0xd051,	// (0x0004ee38) level_4_zoom

0xd05a,	// (0x0004ee41) level_5_zoom

0xd063,	// (0x0004ee4a) level_6_zoom

0xd06c,	// (0x0004ee53) level_7_zoom

0xd075,	// (0x0004ee5c) level_8_zoom

0xd07e,	// (0x0004ee65) level_9_zoom

0xd08f,	// (0x0004ee76) popup_phob_thumbnail_window_g1

0xd097,	// (0x0004ee7e) popup_phob_thumbnail_window_g2

0x0001,

0x0293,	// (0x0004207a) popup_phob_thumbnail_window_g

0xe3d4,	// (0x000501bb) level_1_location

0xe3dc,	// (0x000501c3) level_2_location

0xe3e4,	// (0x000501cb) level_3_location

0xe3ec,	// (0x000501d3) level_4_location

0xcfe0,	// (0x0004edc7) level_5_location

0x37cb,	// (0x000455b2) mce_icon_pane_g1

0x37d3,	// (0x000455ba) mce_icon_pane_g2

0x0001,

0xf38c,	// (0x00051173) mce_icon_pane_g

0x37db,	// (0x000455c2) main_mup_pane_g1_ParamLimits

0x37db,	// (0x000455c2) main_mup_pane_g1

0x37f1,	// (0x000455d8) main_mup_pane_g2_ParamLimits

0x37f1,	// (0x000455d8) main_mup_pane_g2

0x3809,	// (0x000455f0) main_mup_pane_g3_ParamLimits

0x3809,	// (0x000455f0) main_mup_pane_g3

0x3821,	// (0x00045608) main_mup_pane_g4_ParamLimits

0x3821,	// (0x00045608) main_mup_pane_g4

0x3839,	// (0x00045620) main_mup_pane_g5_ParamLimits

0x3839,	// (0x00045620) main_mup_pane_g5

0x3855,	// (0x0004563c) main_mup_pane_g6_ParamLimits

0x3855,	// (0x0004563c) main_mup_pane_g6

0x386d,	// (0x00045654) main_mup_pane_g7_ParamLimits

0x386d,	// (0x00045654) main_mup_pane_g7

0x3885,	// (0x0004566c) main_mup_pane_g8_ParamLimits

0x3885,	// (0x0004566c) main_mup_pane_g8

0x389d,	// (0x00045684) main_mup_pane_g9_ParamLimits

0x389d,	// (0x00045684) main_mup_pane_g9

0x38b7,	// (0x0004569e) main_mup_pane_g10_ParamLimits

0x38b7,	// (0x0004569e) main_mup_pane_g10

0x38d1,	// (0x000456b8) main_mup_pane_g11_ParamLimits

0x38d1,	// (0x000456b8) main_mup_pane_g11

0x38e5,	// (0x000456cc) main_mup_pane_g12_ParamLimits

0x38e5,	// (0x000456cc) main_mup_pane_g12

0x38fb,	// (0x000456e2) main_mup_pane_g13_ParamLimits

0x38fb,	// (0x000456e2) main_mup_pane_g13

0x000c,

0xf391,	// (0x00051178) main_mup_pane_g_ParamLimits

0xf391,	// (0x00051178) main_mup_pane_g

0x390f,	// (0x000456f6) main_mup_pane_t1_ParamLimits

0x390f,	// (0x000456f6) main_mup_pane_t1

0x3929,	// (0x00045710) main_mup_pane_t2_ParamLimits

0x3929,	// (0x00045710) main_mup_pane_t2

0x3941,	// (0x00045728) main_mup_pane_t3_ParamLimits

0x3941,	// (0x00045728) main_mup_pane_t3

0x3959,	// (0x00045740) main_mup_pane_t4_ParamLimits

0x3959,	// (0x00045740) main_mup_pane_t4

0x3977,	// (0x0004575e) main_mup_pane_t5_ParamLimits

0x3977,	// (0x0004575e) main_mup_pane_t5

0x398c,	// (0x00045773) main_mup_pane_t6_ParamLimits

0x398c,	// (0x00045773) main_mup_pane_t6

0x0005,

0xf3ac,	// (0x00051193) main_mup_pane_t_ParamLimits

0xf3ac,	// (0x00051193) main_mup_pane_t

0x399e,	// (0x00045785) mup_progress_pane_ParamLimits

0x399e,	// (0x00045785) mup_progress_pane

0x39aa,	// (0x00045791) mup_visualizer_pane_ParamLimits

0x39aa,	// (0x00045791) mup_visualizer_pane

0x39de,	// (0x000457c5) mup_volume_pane_ParamLimits

0x39de,	// (0x000457c5) mup_volume_pane

0xcd5d,	// (0x0004eb44) mup_visualizer_pane_g1_ParamLimits

0xcd5d,	// (0x0004eb44) mup_visualizer_pane_g1

0xcd5d,	// (0x0004eb44) mup_visualizer_pane_g2_ParamLimits

0xcd5d,	// (0x0004eb44) mup_visualizer_pane_g2

0xcf15,	// (0x0004ecfc) mup_visualizer_pane_g3_ParamLimits

0xcf15,	// (0x0004ecfc) mup_visualizer_pane_g3

0x0002,

0xf3b9,	// (0x000511a0) mup_visualizer_pane_g_ParamLimits

0xf3b9,	// (0x000511a0) mup_visualizer_pane_g

0xc5ad,	// (0x0004e394) mup_volume_pane_g1

0xd0a7,	// (0x0004ee8e) mup_volume_pane_g2

0x0001,

0x02cc,	// (0x000420b3) mup_volume_pane_g

0xc5ad,	// (0x0004e394) mup_progress_pane_g1

0xd0b0,	// (0x0004ee97) mup_progress_pane_g2

0xd0b9,	// (0x0004eea0) mup_progress_pane_g3

0x0002,

0x02d1,	// (0x000420b8) mup_progress_pane_g

0xc1ee,	// (0x0004dfd5) bg_popup_window_pane_cp05

0xd0c2,	// (0x0004eea9) heading_pane_cp02_ParamLimits

0xd0c2,	// (0x0004eea9) heading_pane_cp02

0xd0dc,	// (0x0004eec3) list_popup_blid_pane

0xd0e4,	// (0x0004eecb) list_blid_sat_info_pane_ParamLimits

0xd0e4,	// (0x0004eecb) list_blid_sat_info_pane

0xd0f7,	// (0x0004eede) list_blid_sat_info_pane_g1

0xd0ff,	// (0x0004eee6) list_blid_sat_info_pane_t1

0x3af4,	// (0x000458db) mup_equalizer_pane_ParamLimits

0x3af4,	// (0x000458db) mup_equalizer_pane

0x3b0d,	// (0x000458f4) mup_equalizer_pane_cp1_ParamLimits

0x3b0d,	// (0x000458f4) mup_equalizer_pane_cp1

0x3b2a,	// (0x00045911) mup_equalizer_pane_cp2_ParamLimits

0x3b2a,	// (0x00045911) mup_equalizer_pane_cp2

0x3b47,	// (0x0004592e) mup_equalizer_pane_cp3_ParamLimits

0x3b47,	// (0x0004592e) mup_equalizer_pane_cp3

0x3b68,	// (0x0004594f) mup_equalizer_pane_cp4_ParamLimits

0x3b68,	// (0x0004594f) mup_equalizer_pane_cp4

0x3b89,	// (0x00045970) mup_equalizer_pane_cp5

0x3b9d,	// (0x00045984) mup_equalizer_pane_cp6

0x3bb1,	// (0x00045998) mup_equalizer_pane_cp7

0xe2f2,	// (0x000500d9) bg_popup_call_poc_act_pane_g9

0xe2fa,	// (0x000500e1) bg_popup_call_poc_act_pane_g10

0xe302,	// (0x000500e9) bg_popup_call_poc_act_pane_g11

0x000a,

0xc449,	// (0x0004e230) mup_scale_pane

0xc5ad,	// (0x0004e394) mup_scale_pane_g1

0xd10d,	// (0x0004eef4) mup_scale_pane_g2

0x0006,

0xf3d5,	// (0x000511bc) mup_scale_pane_g

0xd131,	// (0x0004ef18) msg_data_pane

0xd139,	// (0x0004ef20) scroll_pane_cp017

0x0e86,	// (0x00042c6d) bg_list_pane_cp04_ParamLimits

0x0e86,	// (0x00042c6d) bg_list_pane_cp04

0xd141,	// (0x0004ef28) msg_data_pane_g1

0x3bdf,	// (0x000459c6) msg_data_pane_g2

0x3495,	// (0x0004527c) msg_data_pane_g3

0x3be7,	// (0x000459ce) msg_data_pane_g4

0x3bef,	// (0x000459d6) msg_data_pane_g5

0x3bf7,	// (0x000459de) msg_data_pane_g6

0x3bff,	// (0x000459e6) msg_data_pane_g7

0x0006,

0xf3e4,	// (0x000511cb) msg_data_pane_g

0x3c07,	// (0x000459ee) msg_text_pane_ParamLimits

0x3c07,	// (0x000459ee) msg_text_pane

0x3c30,	// (0x00045a17) qrid_highlight_pane_cp011_ParamLimits

0x3c30,	// (0x00045a17) qrid_highlight_pane_cp011

0xc1ee,	// (0x0004dfd5) msg_body_pane

0xc1ee,	// (0x0004dfd5) msg_header_pane

0xd152,	// (0x0004ef39) input_focus_pane_cp07

0x3c46,	// (0x00045a2d) msg_header_pane_t1_ParamLimits

0x3c46,	// (0x00045a2d) msg_header_pane_t1

0x0eac,	// (0x00042c93) msg_header_pane_t2_ParamLimits

0x0eac,	// (0x00042c93) msg_header_pane_t2

0x0001,

0xf3f8,	// (0x000511df) msg_header_pane_t_ParamLimits

0xf3f8,	// (0x000511df) msg_header_pane_t

0xd167,	// (0x0004ef4e) msg_body_pane_g1

0x0ebe,	// (0x00042ca5) msg_body_pane_t1_ParamLimits

0x0ebe,	// (0x00042ca5) msg_body_pane_t1

0x0eef,	// (0x00042cd6) msg_body_pane_t2_ParamLimits

0x0eef,	// (0x00042cd6) msg_body_pane_t2

0x0f01,	// (0x00042ce8) msg_body_pane_t3_ParamLimits

0x0f01,	// (0x00042ce8) msg_body_pane_t3

0x0002,

0xf3fd,	// (0x000511e4) msg_body_pane_t_ParamLimits

0xf3fd,	// (0x000511e4) msg_body_pane_t

0x3c94,	// (0x00045a7b) main_viewer_pane_g1_ParamLimits

0x3c94,	// (0x00045a7b) main_viewer_pane_g1

0x3ca2,	// (0x00045a89) main_viewer_pane_g2_ParamLimits

0x3ca2,	// (0x00045a89) main_viewer_pane_g2

0x3cb0,	// (0x00045a97) main_viewer_pane_g3_ParamLimits

0x3cb0,	// (0x00045a97) main_viewer_pane_g3

0x3cbf,	// (0x00045aa6) main_viewer_pane_g4_ParamLimits

0x3cbf,	// (0x00045aa6) main_viewer_pane_g4

0xaa4f,	// (0x0004c836) main_viewer_pane_g5_ParamLimits

0xaa4f,	// (0x0004c836) main_viewer_pane_g5

0xaa4f,	// (0x0004c836) main_viewer_pane_g7_ParamLimits

0xaa4f,	// (0x0004c836) main_viewer_pane_g7

0xaa61,	// (0x0004c848) main_viewer_pane_g8_ParamLimits

0xaa61,	// (0x0004c848) main_viewer_pane_g8

0x0007,

0xf40d,	// (0x000511f4) main_viewer_pane_g_ParamLimits

0xf40d,	// (0x000511f4) main_viewer_pane_g

0xd16f,	// (0x0004ef56) viewer_content_pane_ParamLimits

0xd16f,	// (0x0004ef56) viewer_content_pane

0x3cfb,	// (0x00045ae2) main_postcard_pane_g1_ParamLimits

0x3cfb,	// (0x00045ae2) main_postcard_pane_g1

0x3d11,	// (0x00045af8) main_postcard_pane_g2_ParamLimits

0x3d11,	// (0x00045af8) main_postcard_pane_g2

0x3d27,	// (0x00045b0e) main_postcard_pane_g3_ParamLimits

0x3d27,	// (0x00045b0e) main_postcard_pane_g3

0x0005,

0xf41e,	// (0x00051205) main_postcard_pane_g_ParamLimits

0xf41e,	// (0x00051205) main_postcard_pane_g

0x3d3e,	// (0x00045b25) main_postcard_pane_g4

0xe507,	// (0x000502ee) smil_status_volume_pane_g2

0x3d81,	// (0x00045b68) postcard_pane_ParamLimits

0x3d81,	// (0x00045b68) postcard_pane

0xd17d,	// (0x0004ef64) postcard_pane_g1_ParamLimits

0xd17d,	// (0x0004ef64) postcard_pane_g1

0x3dc3,	// (0x00045baa) postcard_pane_g2_ParamLimits

0x3dc3,	// (0x00045baa) postcard_pane_g2

0x3dcf,	// (0x00045bb6) postcard_pane_g3_ParamLimits

0x3dcf,	// (0x00045bb6) postcard_pane_g3

0xd18b,	// (0x0004ef72) postcard_pane_g4_ParamLimits

0xd18b,	// (0x0004ef72) postcard_pane_g4

0x3ddb,	// (0x00045bc2) postcard_pane_g5_ParamLimits

0x3ddb,	// (0x00045bc2) postcard_pane_g5

0x3df0,	// (0x00045bd7) postcard_pane_g6_ParamLimits

0x3df0,	// (0x00045bd7) postcard_pane_g6

0xd17d,	// (0x0004ef64) postcard_pane_g7_ParamLimits

0xd17d,	// (0x0004ef64) postcard_pane_g7

0x0006,

0xf42b,	// (0x00051212) postcard_pane_g_ParamLimits

0xf42b,	// (0x00051212) postcard_pane_g

0x3e04,	// (0x00045beb) main_mp2_pane_g1_ParamLimits

0x3e04,	// (0x00045beb) main_mp2_pane_g1

0x3e10,	// (0x00045bf7) main_mp2_pane_g2_ParamLimits

0x3e10,	// (0x00045bf7) main_mp2_pane_g2

0x3e1c,	// (0x00045c03) main_mp2_pane_g3_ParamLimits

0x3e1c,	// (0x00045c03) main_mp2_pane_g3

0x0002,

0xf43a,	// (0x00051221) main_mp2_pane_g_ParamLimits

0xf43a,	// (0x00051221) main_mp2_pane_g

0x3e28,	// (0x00045c0f) main_mp2_pane_t1_ParamLimits

0x3e28,	// (0x00045c0f) main_mp2_pane_t1

0x3e3d,	// (0x00045c24) main_mp2_pane_t2_ParamLimits

0x3e3d,	// (0x00045c24) main_mp2_pane_t2

0x3e4f,	// (0x00045c36) main_mp2_pane_t3_ParamLimits

0x3e4f,	// (0x00045c36) main_mp2_pane_t3

0x0002,

0xf441,	// (0x00051228) main_mp2_pane_t_ParamLimits

0xf441,	// (0x00051228) main_mp2_pane_t

0xd199,	// (0x0004ef80) pec_content_pane_ParamLimits

0xd199,	// (0x0004ef80) pec_content_pane

0xc8b8,	// (0x0004e69f) scroll_pane_cp015

0xd1ab,	// (0x0004ef92) pec_attribute_pane_ParamLimits

0xd1ab,	// (0x0004ef92) pec_attribute_pane

0x3e61,	// (0x00045c48) pec_content_pane_g1_ParamLimits

0x3e61,	// (0x00045c48) pec_content_pane_g1

0xd1bb,	// (0x0004efa2) pec_content_pane_t1_ParamLimits

0xd1bb,	// (0x0004efa2) pec_content_pane_t1

0xd1cd,	// (0x0004efb4) pec_content_pane_t2_ParamLimits

0xd1cd,	// (0x0004efb4) pec_content_pane_t2

0x0001,

0x0360,	// (0x00042147) pec_content_pane_t_ParamLimits

0x0360,	// (0x00042147) pec_content_pane_t

0x3e6f,	// (0x00045c56) list_single_graphic_pane_cp01_ParamLimits

0x3e6f,	// (0x00045c56) list_single_graphic_pane_cp01

0xc449,	// (0x0004e230) bg_popup_sub_pane_cp04

0xd1df,	// (0x0004efc6) popup_mup_playback_window_g1

0xd1eb,	// (0x0004efd2) popup_mup_playback_window_t1

0xd200,	// (0x0004efe7) popup_mup_playback_window_t2

0x0001,

0x0365,	// (0x0004214c) popup_mup_playback_window_t

0xd237,	// (0x0004f01e) main_image_pane_g1_ParamLimits

0xd237,	// (0x0004f01e) main_image_pane_g1

0xd27a,	// (0x0004f061) scroll_pane_cp018_ParamLimits

0xd27a,	// (0x0004f061) scroll_pane_cp018

0xd292,	// (0x0004f079) scroll_pane_cp016_ParamLimits

0xd292,	// (0x0004f079) scroll_pane_cp016

0x3f3f,	// (0x00045d26) smil2_image_pane_ParamLimits

0x3f3f,	// (0x00045d26) smil2_image_pane

0x3f73,	// (0x00045d5a) smil2_root_pane_ParamLimits

0x3f73,	// (0x00045d5a) smil2_root_pane

0x3fab,	// (0x00045d92) smil2_text_pane_ParamLimits

0x3fab,	// (0x00045d92) smil2_text_pane

0xc1ee,	// (0x0004dfd5) bg_list_pane_cp06

0xd2ce,	// (0x0004f0b5) grid_radio_pane

0xc1ee,	// (0x0004dfd5) bg_popup_window_pane_cp06

0xd2d6,	// (0x0004f0bd) main_fmradio_pane_t1

0xcd55,	// (0x0004eb3c) heading_pane_cp04

0xd2e4,	// (0x0004f0cb) main_fmradio_pane_t2

0xe30a,	// (0x000500f1) popup_cale_lunar_info_window_g1

0xd2f2,	// (0x0004f0d9) main_fmradio_pane_t3

0xe312,	// (0x000500f9) popup_cale_lunar_info_window_g2

0xd300,	// (0x0004f0e7) main_fmradio_pane_t4

0x0001,

0xd30e,	// (0x0004f0f5) main_fmradio_pane_t5

0x0004,

0x0440,	// (0x00042227) popup_cale_lunar_info_window_g

0x037a,	// (0x00042161) main_fmradio_pane_t

0xd31c,	// (0x0004f103) wait_bar_pane_cp03

0xd324,	// (0x0004f10b) cell_fmradio_pane_ParamLimits

0xd324,	// (0x0004f10b) cell_fmradio_pane

0xd17d,	// (0x0004ef64) cell_fmradio_pane_g1_ParamLimits

0xd17d,	// (0x0004ef64) cell_fmradio_pane_g1

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp011

0xd337,	// (0x0004f11e) poc_content_pane_ParamLimits

0xd337,	// (0x0004f11e) poc_content_pane

0xd349,	// (0x0004f130) scroll_pane_cp019

0x402b,	// (0x00045e12) popup_call_poc_act_window_ParamLimits

0x402b,	// (0x00045e12) popup_call_poc_act_window

0x404f,	// (0x00045e36) popup_call_poc_inact_window_ParamLimits

0x404f,	// (0x00045e36) popup_call_poc_inact_window

0x0417,	// (0x000421fe) bg_popup_call_poc_act_pane_g

0xe27a,	// (0x00050061) bg_popup_call_poc_inact_pane_g1

0xe282,	// (0x00050069) bg_popup_call_poc_inact_pane_g2

0xd351,	// (0x0004f138) popup_call_poc_act_window_g2

0xe28a,	// (0x00050071) bg_popup_call_poc_inact_pane_g3

0xe292,	// (0x00050079) bg_popup_call_poc_inact_pane_g4

0xe29a,	// (0x00050081) bg_popup_call_poc_inact_pane_g5

0xd359,	// (0x0004f140) popup_call_poc_act_window_t1_ParamLimits

0xd359,	// (0x0004f140) popup_call_poc_act_window_t1

0xd381,	// (0x0004f168) popup_call_poc_act_window_t2_ParamLimits

0xd381,	// (0x0004f168) popup_call_poc_act_window_t2

0xd3a9,	// (0x0004f190) popup_call_poc_act_window_t3_ParamLimits

0xd3a9,	// (0x0004f190) popup_call_poc_act_window_t3

0xd3d1,	// (0x0004f1b8) popup_call_poc_act_window_t4_ParamLimits

0xd3d1,	// (0x0004f1b8) popup_call_poc_act_window_t4

0x0003,

0x0385,	// (0x0004216c) popup_call_poc_act_window_t_ParamLimits

0x0385,	// (0x0004216c) popup_call_poc_act_window_t

0xe2a2,	// (0x00050089) bg_popup_call_poc_inact_pane_g6

0xe2aa,	// (0x00050091) bg_popup_call_poc_inact_pane_g7

0xe2b2,	// (0x00050099) bg_popup_call_poc_inact_pane_g8

0xd3e3,	// (0x0004f1ca) popup_call_poc_inact_window_g2

0xe2ba,	// (0x000500a1) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0404,	// (0x000421eb) bg_popup_call_poc_inact_pane_g

0xd3eb,	// (0x0004f1d2) popup_call_poc_inact_window_t1_ParamLimits

0xd3eb,	// (0x0004f1d2) popup_call_poc_inact_window_t1

0xd400,	// (0x0004f1e7) popup_call_poc_inact_window_t2_ParamLimits

0xd400,	// (0x0004f1e7) popup_call_poc_inact_window_t2

0xd415,	// (0x0004f1fc) popup_call_poc_inact_window_t3_ParamLimits

0xd415,	// (0x0004f1fc) popup_call_poc_inact_window_t3

0x0002,

0x038e,	// (0x00042175) popup_call_poc_inact_window_t_ParamLimits

0x038e,	// (0x00042175) popup_call_poc_inact_window_t

0xe47a,	// (0x00050261) context_pane_ParamLimits

0x4871,	// (0x00046658) signal_pane_ParamLimits

0xcfe0,	// (0x0004edc7) main_call2_pane

0xe468,	// (0x0005024f) popup_phob_thumbnail2_window_ParamLimits

0xe468,	// (0x0005024f) popup_phob_thumbnail2_window

0xaa37,	// (0x0004c81e) aid_hotspot_pointer_arrow_pane

0xaa3f,	// (0x0004c826) aid_hotspot_pointer_hand_pane

0x4395,	// (0x0004617c) phob_pre_status_pane_g5

0x22a1,	// (0x00044088) cams_zoom_pane_ParamLimits

0x22b0,	// (0x00044097) image_vga_pane_ParamLimits

0x22ca,	// (0x000440b1) main_camera_pane_g1_ParamLimits

0x22dc,	// (0x000440c3) main_camera_pane_g2_ParamLimits

0x22ee,	// (0x000440d5) main_camera_pane_g3_ParamLimits

0x2300,	// (0x000440e7) main_camera_pane_g4_ParamLimits

0x2312,	// (0x000440f9) main_camera_pane_g5_ParamLimits

0x2324,	// (0x0004410b) main_camera_pane_g6_ParamLimits

0x2336,	// (0x0004411d) main_camera_pane_g7_ParamLimits

0xf212,	// (0x00050ff9) main_camera_pane_g_ParamLimits

0x2348,	// (0x0004412f) main_camera_pane_t1_ParamLimits

0x235e,	// (0x00044145) main_camera_pane_t2_ParamLimits

0xf223,	// (0x0005100a) main_camera_pane_t_ParamLimits

0xc449,	// (0x0004e230) bg_popup_preview_window_pane_cp01_ParamLimits

0xc449,	// (0x0004e230) bg_popup_preview_window_pane_cp01

0xd42a,	// (0x0004f211) popup_phob_thumbnail2_window_g1_ParamLimits

0xd42a,	// (0x0004f211) popup_phob_thumbnail2_window_g1

0xc1ee,	// (0x0004dfd5) call2_cli_visual_pane

0x4083,	// (0x00045e6a) popup_call2_audio_conf_window_ParamLimits

0x4083,	// (0x00045e6a) popup_call2_audio_conf_window

0x40a3,	// (0x00045e8a) popup_call2_audio_first_window_ParamLimits

0x40a3,	// (0x00045e8a) popup_call2_audio_first_window

0x4139,	// (0x00045f20) popup_call2_audio_in_window_ParamLimits

0x4139,	// (0x00045f20) popup_call2_audio_in_window

0x4181,	// (0x00045f68) popup_call2_audio_out_window_ParamLimits

0x4181,	// (0x00045f68) popup_call2_audio_out_window

0x41eb,	// (0x00045fd2) popup_call2_audio_second_window_ParamLimits

0x41eb,	// (0x00045fd2) popup_call2_audio_second_window

0x4251,	// (0x00046038) popup_call2_audio_wait_window_ParamLimits

0x4251,	// (0x00046038) popup_call2_audio_wait_window

0xc1ee,	// (0x0004dfd5) bg_popup_call2_act_pane_cp03

0xc42b,	// (0x0004e212) list_conf_pane_cp

0xd436,	// (0x0004f21d) popup_call2_audio_conf_window_t1

0xd444,	// (0x0004f22b) list_single_graphic_popup_conf2_pane_ParamLimits

0xd444,	// (0x0004f22b) list_single_graphic_popup_conf2_pane

0xcdf6,	// (0x0004ebdd) list_highlight_pane_cp04

0xd457,	// (0x0004f23e) list_single_graphic_popup_conf2_pane_g1

0xce07,	// (0x0004ebee) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0395,	// (0x0004217c) list_single_graphic_popup_conf2_pane_g

0xd461,	// (0x0004f248) list_single_graphic_popup_conf2_pane_t1

0xd46f,	// (0x0004f256) bg_popup_call2_act_pane_cp01_ParamLimits

0xd46f,	// (0x0004f256) bg_popup_call2_act_pane_cp01

0xd4f9,	// (0x0004f2e0) call_type_pane_cp05_ParamLimits

0xd4f9,	// (0x0004f2e0) call_type_pane_cp05

0xd54d,	// (0x0004f334) popup_call2_audio_second_window_g1_ParamLimits

0xd54d,	// (0x0004f334) popup_call2_audio_second_window_g1

0xd5a1,	// (0x0004f388) popup_call2_audio_second_window_g2_ParamLimits

0xd5a1,	// (0x0004f388) popup_call2_audio_second_window_g2

0x0002,

0x039a,	// (0x00042181) popup_call2_audio_second_window_g_ParamLimits

0x039a,	// (0x00042181) popup_call2_audio_second_window_g

0xd606,	// (0x0004f3ed) popup_call2_audio_second_window_t1_ParamLimits

0xd606,	// (0x0004f3ed) popup_call2_audio_second_window_t1

0xd6c1,	// (0x0004f4a8) popup_call2_audio_second_window_t2_ParamLimits

0xd6c1,	// (0x0004f4a8) popup_call2_audio_second_window_t2

0xd714,	// (0x0004f4fb) popup_call2_audio_second_window_t3_ParamLimits

0xd714,	// (0x0004f4fb) popup_call2_audio_second_window_t3

0x0003,

0x03a1,	// (0x00042188) popup_call2_audio_second_window_t_ParamLimits

0x03a1,	// (0x00042188) popup_call2_audio_second_window_t

0xc1ee,	// (0x0004dfd5) bg_popup_call2_in_pane_cp02

0xc1f8,	// (0x0004dfdf) call_type_pane_cp04

0xc200,	// (0x0004dfe7) popup_call2_audio_wait_window_g1

0xc208,	// (0x0004dfef) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00050f02) popup_call2_audio_wait_window_g

0xc210,	// (0x0004dff7) popup_call2_audio_wait_window_t3

0xd807,	// (0x0004f5ee) bg_popup_call2_act_pane_ParamLimits

0xd807,	// (0x0004f5ee) bg_popup_call2_act_pane

0xd8f8,	// (0x0004f6df) call_type_pane_cp03_ParamLimits

0xd8f8,	// (0x0004f6df) call_type_pane_cp03

0xd95c,	// (0x0004f743) popup_call2_audio_first_window_g1_ParamLimits

0xd95c,	// (0x0004f743) popup_call2_audio_first_window_g1

0xd9d8,	// (0x0004f7bf) popup_call2_audio_first_window_g2_ParamLimits

0xd9d8,	// (0x0004f7bf) popup_call2_audio_first_window_g2

0xcd5d,	// (0x0004eb44) popup_call2_audio_first_window_g3_ParamLimits

0xcd5d,	// (0x0004eb44) popup_call2_audio_first_window_g3

0x0004,

0xf458,	// (0x0005123f) popup_call2_audio_first_window_g_ParamLimits

0xf458,	// (0x0005123f) popup_call2_audio_first_window_g

0xdab6,	// (0x0004f89d) popup_call2_audio_first_window_t1_ParamLimits

0xdab6,	// (0x0004f89d) popup_call2_audio_first_window_t1

0xdbb9,	// (0x0004f9a0) popup_call2_audio_first_window_t4_ParamLimits

0xdbb9,	// (0x0004f9a0) popup_call2_audio_first_window_t4

0xdca5,	// (0x0004fa8c) popup_call2_audio_first_window_t5_ParamLimits

0xdca5,	// (0x0004fa8c) popup_call2_audio_first_window_t5

0x0003,

0xf463,	// (0x0005124a) popup_call2_audio_first_window_t_ParamLimits

0xf463,	// (0x0005124a) popup_call2_audio_first_window_t

0xc441,	// (0x0004e228) bg_popup_call2_act_pane_g1

0xe31a,	// (0x00050101) popup_cale_lunar_info_window_t1

0xe328,	// (0x0005010f) popup_cale_lunar_info_window_t2

0xe336,	// (0x0005011d) popup_cale_lunar_info_window_t3

0xc1ee,	// (0x0004dfd5) bg_popup_call2_bubble_pane

0xdda6,	// (0x0004fb8d) bg_popup_call2_in_pane_cp01_ParamLimits

0xdda6,	// (0x0004fb8d) bg_popup_call2_in_pane_cp01

0xbeca,	// (0x0004dcb1) call_type_pane_cp02

0xddee,	// (0x0004fbd5) popup_call2_audio_out_window_g1_ParamLimits

0xddee,	// (0x0004fbd5) popup_call2_audio_out_window_g1

0xde1a,	// (0x0004fc01) popup_call2_audio_out_window_g2_ParamLimits

0xde1a,	// (0x0004fc01) popup_call2_audio_out_window_g2

0xde42,	// (0x0004fc29) popup_call2_audio_out_window_g3_ParamLimits

0xde42,	// (0x0004fc29) popup_call2_audio_out_window_g3

0x0003,

0x03be,	// (0x000421a5) popup_call2_audio_out_window_g_ParamLimits

0x03be,	// (0x000421a5) popup_call2_audio_out_window_g

0xde7d,	// (0x0004fc64) popup_call2_audio_out_window_t1_ParamLimits

0xde7d,	// (0x0004fc64) popup_call2_audio_out_window_t1

0xdedc,	// (0x0004fcc3) popup_call2_audio_out_window_t2_ParamLimits

0xdedc,	// (0x0004fcc3) popup_call2_audio_out_window_t2

0xdf30,	// (0x0004fd17) popup_call2_audio_out_window_t3_ParamLimits

0xdf30,	// (0x0004fd17) popup_call2_audio_out_window_t3

0xdf46,	// (0x0004fd2d) popup_call2_audio_out_window_t4_ParamLimits

0xdf46,	// (0x0004fd2d) popup_call2_audio_out_window_t4

0xdf5c,	// (0x0004fd43) popup_call2_audio_out_window_t5_ParamLimits

0xdf5c,	// (0x0004fd43) popup_call2_audio_out_window_t5

0x0005,

0x03c7,	// (0x000421ae) popup_call2_audio_out_window_t_ParamLimits

0x03c7,	// (0x000421ae) popup_call2_audio_out_window_t

0xdfc0,	// (0x0004fda7) bg_popup_call2_in_pane_ParamLimits

0xdfc0,	// (0x0004fda7) bg_popup_call2_in_pane

0xe01c,	// (0x0004fe03) popup_call2_audio_in_window_g1_ParamLimits

0xe01c,	// (0x0004fe03) popup_call2_audio_in_window_g1

0xe054,	// (0x0004fe3b) popup_call2_audio_in_window_g2_ParamLimits

0xe054,	// (0x0004fe3b) popup_call2_audio_in_window_g2

0xe08c,	// (0x0004fe73) popup_call2_audio_in_window_g3_ParamLimits

0xe08c,	// (0x0004fe73) popup_call2_audio_in_window_g3

0x0003,

0x03d4,	// (0x000421bb) popup_call2_audio_in_window_g_ParamLimits

0x03d4,	// (0x000421bb) popup_call2_audio_in_window_g

0xe0e4,	// (0x0004fecb) popup_call2_audio_in_window_t1_ParamLimits

0xe0e4,	// (0x0004fecb) popup_call2_audio_in_window_t1

0xe164,	// (0x0004ff4b) popup_call2_audio_in_window_t2_ParamLimits

0xe164,	// (0x0004ff4b) popup_call2_audio_in_window_t2

0xe1e4,	// (0x0004ffcb) popup_call2_audio_in_window_t3_ParamLimits

0xe1e4,	// (0x0004ffcb) popup_call2_audio_in_window_t3

0xe1fe,	// (0x0004ffe5) popup_call2_audio_in_window_t4_ParamLimits

0xe1fe,	// (0x0004ffe5) popup_call2_audio_in_window_t4

0xe210,	// (0x0004fff7) popup_call2_audio_in_window_t5_ParamLimits

0xe210,	// (0x0004fff7) popup_call2_audio_in_window_t5

0xe225,	// (0x0005000c) popup_call2_audio_in_window_t6_ParamLimits

0xe225,	// (0x0005000c) popup_call2_audio_in_window_t6

0x0005,

0x03dd,	// (0x000421c4) popup_call2_audio_in_window_t_ParamLimits

0x03dd,	// (0x000421c4) popup_call2_audio_in_window_t

0xc441,	// (0x0004e228) bg_popup_call2_in_pane_g1

0xe344,	// (0x0005012b) popup_cale_lunar_info_window_t4

0x0003,

0x0445,	// (0x0004222c) popup_cale_lunar_info_window_t

0xc449,	// (0x0004e230) bg_popup_call2_rect_pane_ParamLimits

0xc449,	// (0x0004e230) bg_popup_call2_rect_pane

0xc1ee,	// (0x0004dfd5) call2_cli_visual_graphic_pane

0xc1ee,	// (0x0004dfd5) call2_cli_visual_text_pane

0xaa79,	// (0x0004c860) smil_status_volume_pane_g3

0x0002,

0xc5ad,	// (0x0004e394) call2_cli_visual_graphic_pane_g1

0xc5ad,	// (0x0004e394) call2_cli_visual_graphic_pane_g2

0xc5ad,	// (0x0004e394) call2_cli_visual_graphic_pane_g3

0x0002,

0x03ea,	// (0x000421d1) call2_cli_visual_graphic_pane_g

0xe23a,	// (0x00050021) bg_popup_call2_rect_pane_g1

0xc64b,	// (0x0004e432) bg_popup_call2_rect_pane_g2

0xe242,	// (0x00050029) bg_popup_call2_rect_pane_g3

0xe24a,	// (0x00050031) bg_popup_call2_rect_pane_g4

0xe252,	// (0x00050039) bg_popup_call2_rect_pane_g5

0xe25a,	// (0x00050041) bg_popup_call2_rect_pane_g6

0xe262,	// (0x00050049) bg_popup_call2_rect_pane_g7

0xe26a,	// (0x00050051) bg_popup_call2_rect_pane_g8

0xe272,	// (0x00050059) bg_popup_call2_rect_pane_g9

0x0008,

0x03f1,	// (0x000421d8) bg_popup_call2_rect_pane_g

0xe27a,	// (0x00050061) bg_popup_call2_bubble_pane_g1

0xe282,	// (0x00050069) bg_popup_call2_bubble_pane_g2

0xe28a,	// (0x00050071) bg_popup_call2_bubble_pane_g3

0xe292,	// (0x00050079) bg_popup_call2_bubble_pane_g4

0xe29a,	// (0x00050081) bg_popup_call2_bubble_pane_g5

0xe2a2,	// (0x00050089) bg_popup_call2_bubble_pane_g6

0xe2aa,	// (0x00050091) bg_popup_call2_bubble_pane_g7

0xe2b2,	// (0x00050099) bg_popup_call2_bubble_pane_g8

0xe2ba,	// (0x000500a1) bg_popup_call2_bubble_pane_g9

0x0008,

0x0404,	// (0x000421eb) bg_popup_call2_bubble_pane_g

0x1f03,	// (0x00043cea) aid_cale_week_size_cell_pane

0x2376,	// (0x0004415d) aid_cams_cif_uncrop_pane_ParamLimits

0x2376,	// (0x0004415d) aid_cams_cif_uncrop_pane

0x2533,	// (0x0004431a) aid_cams_size_cell_ParamLimits

0x2533,	// (0x0004431a) aid_cams_size_cell

0x2547,	// (0x0004432e) grid_cams_pane_ParamLimits

0x2561,	// (0x00044348) linegrid_cams_pane_ParamLimits

0x2647,	// (0x0004442e) call_video_pane_t1

0x2665,	// (0x0004444c) call_video_pane_t2

0x0001,

0xf268,	// (0x0005104f) call_video_pane_t

0x2a98,	// (0x0004487f) aid_cale_month_size_cell_pane_ParamLimits

0x2a98,	// (0x0004487f) aid_cale_month_size_cell_pane

0xf49c,	// (0x00051283) smil_status_volume_pane_g

0xaa86,	// (0x0004c86d) volume_smil_pane_ParamLimits

0xa6ef,	// (0x0004c4d6) aid_popup2_width_pane

0x1e85,	// (0x00043c6c) cell_qdial_pane_g4_ParamLimits

0x1e85,	// (0x00043c6c) cell_qdial_pane_g4

0x362c,	// (0x00045413) aid_blid_cardinal_pane_ParamLimits

0x3638,	// (0x0004541f) aid_blid_destination_pane_ParamLimits

0x3638,	// (0x0004541f) aid_blid_destination_pane

0xc449,	// (0x0004e230) bg_popup_call_poc_act_pane_ParamLimits

0xc449,	// (0x0004e230) bg_popup_call_poc_act_pane

0xc449,	// (0x0004e230) bg_popup_call_poc_inact_pane_ParamLimits

0xc449,	// (0x0004e230) bg_popup_call_poc_inact_pane

0xe2ca,	// (0x000500b1) bg_popup_call_poc_act_pane_g1

0xe2d2,	// (0x000500b9) bg_popup_call_poc_act_pane_g2

0xe2da,	// (0x000500c1) bg_popup_call_poc_act_pane_g3

0xe292,	// (0x00050079) bg_popup_call_poc_act_pane_g4

0xe29a,	// (0x00050081) bg_popup_call_poc_act_pane_g5

0xe2e2,	// (0x000500c9) bg_popup_call_poc_act_pane_g6

0xe2aa,	// (0x00050091) bg_popup_call_poc_act_pane_g7

0xe2ea,	// (0x000500d1) bg_popup_call_poc_act_pane_g8

0xc1ee,	// (0x0004dfd5) main_usb_pane

0xe443,	// (0x0005022a) popup_cale_lunar_info_window

0x292f,	// (0x00044716) im_reading_pane_t1_ParamLimits

0xc810,	// (0x0004e5f7) list_im_pane_ParamLimits

0xc821,	// (0x0004e608) scroll_pane_cp07_ParamLimits

0xc1ee,	// (0x0004dfd5) grid_highlight_pane_cp012

0xc449,	// (0x0004e230) mup_scale_pane_ParamLimits

0xd17d,	// (0x0004ef64) main_usb_pane_g1_ParamLimits

0xd17d,	// (0x0004ef64) main_usb_pane_g1

0x42a8,	// (0x0004608f) main_usb_pane_g2_ParamLimits

0x42a8,	// (0x0004608f) main_usb_pane_g2

0x0001,

0xf46c,	// (0x00051253) main_usb_pane_g_ParamLimits

0xf46c,	// (0x00051253) main_usb_pane_g

0x42be,	// (0x000460a5) main_usb_pane_t1_ParamLimits

0x42be,	// (0x000460a5) main_usb_pane_t1

0x42d0,	// (0x000460b7) main_usb_pane_t2_ParamLimits

0x42d0,	// (0x000460b7) main_usb_pane_t2

0x42e2,	// (0x000460c9) main_usb_pane_t3_ParamLimits

0x42e2,	// (0x000460c9) main_usb_pane_t3

0x42f4,	// (0x000460db) main_usb_pane_t4_ParamLimits

0x42f4,	// (0x000460db) main_usb_pane_t4

0x4306,	// (0x000460ed) main_usb_pane_t5_ParamLimits

0x4306,	// (0x000460ed) main_usb_pane_t5

0x4318,	// (0x000460ff) main_usb_pane_t6_ParamLimits

0x4318,	// (0x000460ff) main_usb_pane_t6

0x0005,

0xf471,	// (0x00051258) main_usb_pane_t_ParamLimits

0x35d1,	// (0x000453b8) aid_text_placing

0x35da,	// (0x000453c1) main_location2_pane_t1_ParamLimits

0x35ee,	// (0x000453d5) main_location2_pane_t2_ParamLimits

0x3602,	// (0x000453e9) main_location2_pane_t3_ParamLimits

0x3618,	// (0x000453ff) main_location2_pane_t4_ParamLimits

0x3618,	// (0x000453ff) main_location2_pane_t4

0xf360,	// (0x00051147) main_location2_pane_t_ParamLimits

0xc48d,	// (0x0004e274) find_pinb_pane_g2_ParamLimits

0xc48d,	// (0x0004e274) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00050f28) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00050f28) find_pinb_pane_g

0xc499,	// (0x0004e280) find_pinb_pane_t1_ParamLimits

0xc4ab,	// (0x0004e292) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00050f2d) find_pinb_pane_t_ParamLimits

0xc1ee,	// (0x0004dfd5) main_call3_pane

0x2dfc,	// (0x00044be3) cale_month_day_heading_pane_t1_ParamLimits

0x2e5a,	// (0x00044c41) cale_month_day_heading_pane_t2_ParamLimits

0x2ebf,	// (0x00044ca6) cale_month_day_heading_pane_t3_ParamLimits

0x2f24,	// (0x00044d0b) cale_month_day_heading_pane_t4_ParamLimits

0x2f89,	// (0x00044d70) cale_month_day_heading_pane_t5_ParamLimits

0x2ffe,	// (0x00044de5) cale_month_day_heading_pane_t6_ParamLimits

0x3073,	// (0x00044e5a) cale_month_day_heading_pane_t7_ParamLimits

0xf28d,	// (0x00051074) cale_month_day_heading_pane_t_ParamLimits

0xca61,	// (0x0004e848) smil_status_volume_pane

0x3d9f,	// (0x00045b86) postcard_address_pane_ParamLimits

0x3d9f,	// (0x00045b86) postcard_address_pane

0x3db1,	// (0x00045b98) postcard_message_pane_ParamLimits

0x3db1,	// (0x00045b98) postcard_message_pane

0x428b,	// (0x00046072) call2_cli_visual_pane_t1_ParamLimits

0x428b,	// (0x00046072) call2_cli_visual_pane_t1

0x4a9f,	// (0x00046886) postcard_message_pane_t1_ParamLimits

0x4a9f,	// (0x00046886) postcard_message_pane_t1

0x4a88,	// (0x0004686f) postcard_address_pane_t1_ParamLimits

0x4a88,	// (0x0004686f) postcard_address_pane_t1

0x4a74,	// (0x0004685b) popup_call3_audio_in_window_ParamLimits

0x4a74,	// (0x0004685b) popup_call3_audio_in_window

0x4903,	// (0x000466ea) bg_popup_call3_in_pane_ParamLimits

0x4903,	// (0x000466ea) bg_popup_call3_in_pane

0x4975,	// (0x0004675c) popup_call3_audio_in_window_g1_ParamLimits

0x4975,	// (0x0004675c) popup_call3_audio_in_window_g1

0x4995,	// (0x0004677c) popup_call3_audio_in_window_g2_ParamLimits

0x4995,	// (0x0004677c) popup_call3_audio_in_window_g2

0x49b5,	// (0x0004679c) popup_call3_audio_in_window_g3_ParamLimits

0x49b5,	// (0x0004679c) popup_call3_audio_in_window_g3

0x0003,

0xf4a3,	// (0x0005128a) popup_call3_audio_in_window_g_ParamLimits

0xf4a3,	// (0x0005128a) popup_call3_audio_in_window_g

0x49e6,	// (0x000467cd) popup_call3_audio_in_window_t1_ParamLimits

0x49e6,	// (0x000467cd) popup_call3_audio_in_window_t1

0x4a24,	// (0x0004680b) popup_call3_audio_in_window_t2_ParamLimits

0x4a24,	// (0x0004680b) popup_call3_audio_in_window_t2

0x4a62,	// (0x00046849) popup_call3_audio_in_window_t3_ParamLimits

0x4a62,	// (0x00046849) popup_call3_audio_in_window_t3

0x0002,

0xf4ac,	// (0x00051293) popup_call3_audio_in_window_t_ParamLimits

0xf4ac,	// (0x00051293) popup_call3_audio_in_window_t

0xcfe0,	// (0x0004edc7) bg_popup_call3_rect_pane

0xe23a,	// (0x00050021) bg_popup_call3_rect_pane_g1

0xc64b,	// (0x0004e432) bg_popup_call3_rect_pane_g2

0xe242,	// (0x00050029) bg_popup_call3_rect_pane_g3

0xe24a,	// (0x00050031) bg_popup_call3_rect_pane_g4

0xe252,	// (0x00050039) bg_popup_call3_rect_pane_g5

0xe25a,	// (0x00050041) bg_popup_call3_rect_pane_g6

0xe262,	// (0x00050049) bg_popup_call3_rect_pane_g7

0x39f4,	// (0x000457db) mup_visualizer_osc_pane

0xd09f,	// (0x0004ee86) mup_visualizer_spec_pane

0x4933,	// (0x0004671a) call3_video_qcif_pane_ParamLimits

0x4933,	// (0x0004671a) call3_video_qcif_pane

0x4944,	// (0x0004672b) call3_video_qcif_uncrop_pane_ParamLimits

0x4944,	// (0x0004672b) call3_video_qcif_uncrop_pane

0x4950,	// (0x00046737) call3_video_subqcif_pane_ParamLimits

0x4950,	// (0x00046737) call3_video_subqcif_pane

0x4964,	// (0x0004674b) call3_video_subqcif_uncrop_pane_ParamLimits

0x4964,	// (0x0004674b) call3_video_subqcif_uncrop_pane

0x49d5,	// (0x000467bc) popup_call3_audio_in_window_g4_ParamLimits

0x49d5,	// (0x000467bc) popup_call3_audio_in_window_g4

0x48f2,	// (0x000466d9) mup_spec_half_pane

0x48fb,	// (0x000466e2) mup_spec_half_pane_cp

0xe4da,	// (0x000502c1) mup_osc_middle_pane

0xe4e3,	// (0x000502ca) mup_visualizer_osc_pane_g1

0x48d2,	// (0x000466b9) mup_spec_bar_pane_ParamLimits

0x48d2,	// (0x000466b9) mup_spec_bar_pane

0xe4c7,	// (0x000502ae) mup_spec_bar_pane_g1

0xe4d1,	// (0x000502b8) mup_spec_bar_pane_g2

0x0001,

0x0489,	// (0x00042270) mup_spec_bar_pane_g

0x1f03,	// (0x00043cea) aid_cale_week_size_cell_pane_ParamLimits

0x1f16,	// (0x00043cfd) bg_cale_heading_pane_ParamLimits

0xc67f,	// (0x0004e466) bg_cale_pane_cp01_ParamLimits

0x1f2e,	// (0x00043d15) cale_week_corner_pane_ParamLimits

0x1f3f,	// (0x00043d26) cale_week_day_heading_pane_ParamLimits

0x1f57,	// (0x00043d3e) cale_week_scroll_pane_g1_ParamLimits

0x1f6c,	// (0x00043d53) cale_week_scroll_pane_g2_ParamLimits

0x1f7d,	// (0x00043d64) cale_week_scroll_pane_g3_ParamLimits

0x1f8e,	// (0x00043d75) cale_week_scroll_pane_g4_ParamLimits

0x1f9f,	// (0x00043d86) cale_week_scroll_pane_g5_ParamLimits

0x1fb2,	// (0x00043d99) cale_week_scroll_pane_g6_ParamLimits

0x1fc5,	// (0x00043dac) cale_week_scroll_pane_g7_ParamLimits

0x1fd8,	// (0x00043dbf) cale_week_scroll_pane_g8_ParamLimits

0x1feb,	// (0x00043dd2) cale_week_scroll_pane_g9_ParamLimits

0x1ffc,	// (0x00043de3) cale_week_scroll_pane_g10_ParamLimits

0x200d,	// (0x00043df4) cale_week_scroll_pane_g11_ParamLimits

0x201e,	// (0x00043e05) cale_week_scroll_pane_g12_ParamLimits

0x202f,	// (0x00043e16) cale_week_scroll_pane_g13_ParamLimits

0x2040,	// (0x00043e27) cale_week_scroll_pane_g14_ParamLimits

0x2051,	// (0x00043e38) cale_week_scroll_pane_g15_ParamLimits

0xf1bb,	// (0x00050fa2) cale_week_scroll_pane_g_ParamLimits

0x2062,	// (0x00043e49) cale_week_time_pane_ParamLimits

0x2075,	// (0x00043e5c) grid_cale_week_pane_ParamLimits

0xc698,	// (0x0004e47f) listscroll_cale_week_pane_t1

0x208a,	// (0x00043e71) scroll_pane_cp08_ParamLimits

0x2ad9,	// (0x000448c0) cale_month_corner_pane_ParamLimits

0xca37,	// (0x0004e81e) cale_month_pane_t1

0x2dbb,	// (0x00044ba2) cale_month_week_pane_ParamLimits

0x3438,	// (0x0004521f) popup_call_status_window_g1_ParamLimits

0x344c,	// (0x00045233) popup_call_status_window_g2_ParamLimits

0x3460,	// (0x00045247) popup_call_status_window_g3_ParamLimits

0xf304,	// (0x000510eb) popup_call_status_window_g_ParamLimits

0xcd45,	// (0x0004eb2c) aid_call2_pane

0x0e9e,	// (0x00042c85) msg_header_pane_g1

0x3d9f,	// (0x00045b86) postcard_address2_pane_ParamLimits

0x3d9f,	// (0x00045b86) postcard_address2_pane

0x3db1,	// (0x00045b98) postcard_message2_pane_ParamLimits

0x3db1,	// (0x00045b98) postcard_message2_pane

0x487f,	// (0x00046666) message2_row_pane_ParamLimits

0x487f,	// (0x00046666) message2_row_pane

0x489e,	// (0x00046685) address2_row_pane_ParamLimits

0x489e,	// (0x00046685) address2_row_pane

0xe495,	// (0x0005027c) postcard_message2_row_pane_g1

0xe49d,	// (0x00050284) postcard_message2_row_pane_t1

0xe495,	// (0x0005027c) address2_row_pane_g1

0xe49d,	// (0x00050284) address2_row_pane_t1

0xa7cf,	// (0x0004c5b6) aid_size_cell_vorec

0xc1ee,	// (0x0004dfd5) main_rss_pane

0x48b1,	// (0x00046698) rss_list_single_pane_ParamLimits

0x48b1,	// (0x00046698) rss_list_single_pane

0xe4ab,	// (0x00050292) rss_list_single_pane_t1

0xe4b9,	// (0x000502a0) rss_list_single_pane_t2

0x0001,

0x0484,	// (0x0004226b) rss_list_single_pane_t

0xc1ee,	// (0x0004dfd5) main_camera2_pane

0xc1ee,	// (0x0004dfd5) main_video2_pane

0x4b18,	// (0x000468ff) cams_zoom_pane_cp2_ParamLimits

0x4b18,	// (0x000468ff) cams_zoom_pane_cp2

0x4b38,	// (0x0004691f) image2_vga_pane_ParamLimits

0x4b38,	// (0x0004691f) image2_vga_pane

0x4b89,	// (0x00046970) main_camera2_pane_g1_ParamLimits

0x4b89,	// (0x00046970) main_camera2_pane_g1

0x4ba9,	// (0x00046990) main_camera2_pane_g2_ParamLimits

0x4ba9,	// (0x00046990) main_camera2_pane_g2

0x4bc9,	// (0x000469b0) main_camera2_pane_g3_ParamLimits

0x4bc9,	// (0x000469b0) main_camera2_pane_g3

0x4be9,	// (0x000469d0) main_camera2_pane_g4_ParamLimits

0x4be9,	// (0x000469d0) main_camera2_pane_g4

0x4c09,	// (0x000469f0) main_camera2_pane_g5_ParamLimits

0x4c09,	// (0x000469f0) main_camera2_pane_g5

0x4c29,	// (0x00046a10) main_camera2_pane_g6_ParamLimits

0x4c29,	// (0x00046a10) main_camera2_pane_g6

0x4c49,	// (0x00046a30) main_camera2_pane_g7_ParamLimits

0x4c49,	// (0x00046a30) main_camera2_pane_g7

0x4c69,	// (0x00046a50) main_camera2_pane_g8_ParamLimits

0x4c69,	// (0x00046a50) main_camera2_pane_g8

0x0008,

0xf4b3,	// (0x0005129a) main_camera2_pane_g_ParamLimits

0xf4b3,	// (0x0005129a) main_camera2_pane_g

0x4ca9,	// (0x00046a90) main_camera2_pane_t1_ParamLimits

0x4ca9,	// (0x00046a90) main_camera2_pane_t1

0x4cde,	// (0x00046ac5) main_camera2_pane_t2_ParamLimits

0x4cde,	// (0x00046ac5) main_camera2_pane_t2

0x4d04,	// (0x00046aeb) main_camera2_pane_t3_ParamLimits

0x4d04,	// (0x00046aeb) main_camera2_pane_t3

0x4d62,	// (0x00046b49) main_camera2_pane_t4_ParamLimits

0x4d62,	// (0x00046b49) main_camera2_pane_t4

0x0006,

0xf4c6,	// (0x000512ad) main_camera2_pane_t_ParamLimits

0xf4c6,	// (0x000512ad) main_camera2_pane_t

0x4df4,	// (0x00046bdb) cams_zoom_pane_cp4_ParamLimits

0x4df4,	// (0x00046bdb) cams_zoom_pane_cp4

0x4e0a,	// (0x00046bf1) image2_cif_pane_ParamLimits

0x4e0a,	// (0x00046bf1) image2_cif_pane

0x4e35,	// (0x00046c1c) image2_subqcif_pane_ParamLimits

0x4e35,	// (0x00046c1c) image2_subqcif_pane

0x4e4f,	// (0x00046c36) main_video2_pane_g1_ParamLimits

0x4e4f,	// (0x00046c36) main_video2_pane_g1

0x4e69,	// (0x00046c50) main_video2_pane_g2_ParamLimits

0x4e69,	// (0x00046c50) main_video2_pane_g2

0x4e7f,	// (0x00046c66) main_video2_pane_g3_ParamLimits

0x4e7f,	// (0x00046c66) main_video2_pane_g3

0x4e95,	// (0x00046c7c) main_video2_pane_g4_ParamLimits

0x4e95,	// (0x00046c7c) main_video2_pane_g4

0x4eab,	// (0x00046c92) main_video2_pane_g5_ParamLimits

0x4eab,	// (0x00046c92) main_video2_pane_g5

0x4ec1,	// (0x00046ca8) main_video2_pane_g6_ParamLimits

0x4ec1,	// (0x00046ca8) main_video2_pane_g6

0x0005,

0xf4d5,	// (0x000512bc) main_video2_pane_g_ParamLimits

0xf4d5,	// (0x000512bc) main_video2_pane_g

0x4edb,	// (0x00046cc2) main_video2_pane_t1_ParamLimits

0x4edb,	// (0x00046cc2) main_video2_pane_t1

0x4eff,	// (0x00046ce6) main_video2_pane_t2_ParamLimits

0x4eff,	// (0x00046ce6) main_video2_pane_t2

0x4f4d,	// (0x00046d34) main_video2_pane_t3_ParamLimits

0x4f4d,	// (0x00046d34) main_video2_pane_t3

0x0002,

0xf4e2,	// (0x000512c9) main_video2_pane_t_ParamLimits

0xf4e2,	// (0x000512c9) main_video2_pane_t

0x43d5,	// (0x000461bc) call_muted_g2

0x0001,

0xf497,	// (0x0005127e) call_muted_g

0xc1ee,	// (0x0004dfd5) main_mup2_pane

0x4f95,	// (0x00046d7c) main_mup2_pane_g1_ParamLimits

0x4f95,	// (0x00046d7c) main_mup2_pane_g1

0x4fa1,	// (0x00046d88) main_mup2_pane_g2_ParamLimits

0x4fa1,	// (0x00046d88) main_mup2_pane_g2

0xaaf4,	// (0x0004c8db) main_mup_pane_g13_cp1

0xaafc,	// (0x0004c8e3) mup_volume_pane_cp1

0x4fbd,	// (0x00046da4) main_mup2_pane_g4_ParamLimits

0x4fbd,	// (0x00046da4) main_mup2_pane_g4

0x4fcf,	// (0x00046db6) main_mup2_pane_g5_ParamLimits

0x4fcf,	// (0x00046db6) main_mup2_pane_g5

0x4fe1,	// (0x00046dc8) main_mup2_pane_g6_ParamLimits

0x4fe1,	// (0x00046dc8) main_mup2_pane_g6

0x4ff3,	// (0x00046dda) main_mup2_pane_g7_ParamLimits

0x4ff3,	// (0x00046dda) main_mup2_pane_g7

0x0006,

0xf4e9,	// (0x000512d0) main_mup2_pane_g_ParamLimits

0xf4e9,	// (0x000512d0) main_mup2_pane_g

0x500b,	// (0x00046df2) main_mup2_pane_t1_ParamLimits

0x500b,	// (0x00046df2) main_mup2_pane_t1

0x5021,	// (0x00046e08) main_mup2_pane_t2_ParamLimits

0x5021,	// (0x00046e08) main_mup2_pane_t2

0x5037,	// (0x00046e1e) main_mup2_pane_t3_ParamLimits

0x5037,	// (0x00046e1e) main_mup2_pane_t3

0x504d,	// (0x00046e34) main_mup2_pane_t4_ParamLimits

0x504d,	// (0x00046e34) main_mup2_pane_t4

0x5065,	// (0x00046e4c) main_mup2_pane_t5_ParamLimits

0x5065,	// (0x00046e4c) main_mup2_pane_t5

0x507d,	// (0x00046e64) main_mup2_pane_t6_ParamLimits

0x507d,	// (0x00046e64) main_mup2_pane_t6

0x0005,

0xf4f8,	// (0x000512df) main_mup2_pane_t_ParamLimits

0xf4f8,	// (0x000512df) main_mup2_pane_t

0x50ad,	// (0x00046e94) mup2_visualizer_pane_ParamLimits

0x50ad,	// (0x00046e94) mup2_visualizer_pane

0x50db,	// (0x00046ec2) mup_progress_pane_cp_ParamLimits

0x50db,	// (0x00046ec2) mup_progress_pane_cp

0xaadf,	// (0x0004c8c6) mup_volume_pane_cp_ParamLimits

0xaadf,	// (0x0004c8c6) mup_volume_pane_cp

0x50ef,	// (0x00046ed6) mup2_visualizer_pane_g1_ParamLimits

0x50ef,	// (0x00046ed6) mup2_visualizer_pane_g1

0xe51a,	// (0x00050301) mup2_visualizer_pane_g2_ParamLimits

0xe51a,	// (0x00050301) mup2_visualizer_pane_g2

0x5106,	// (0x00046eed) mup2_visualizer_pane_g3_ParamLimits

0x5106,	// (0x00046eed) mup2_visualizer_pane_g3

0x0002,

0xf505,	// (0x000512ec) mup2_visualizer_pane_g_ParamLimits

0xf505,	// (0x000512ec) mup2_visualizer_pane_g

0xd2c6,	// (0x0004f0ad) aid_size_cell_fmradio

0x4587,	// (0x0004636e) aid_height_parent_landcape

0xc89f,	// (0x0004e686) wml_content_pane_cp

0xc8a7,	// (0x0004e68e) wml_tabs_pane

0xc8b0,	// (0x0004e697) popup_wml_miniature_window

0xc8b8,	// (0x0004e69f) scroll_pane_cp021

0xc8cc,	// (0x0004e6b3) wml_content_pane_comp8

0xc1ee,	// (0x0004dfd5) bg_popup_sub_pane_cp05

0xe538,	// (0x0005031f) popup_wml_miniature_window_g1

0xe540,	// (0x00050327) wml_miniature_view_pane

0x5112,	// (0x00046ef9) aid_size_wml_view

0x511a,	// (0x00046f01) wml_miniature_view_pane_g1

0x5123,	// (0x00046f0a) wml_miniature_view_pane_g2

0x512c,	// (0x00046f13) wml_miniature_view_pane_g3

0x5134,	// (0x00046f1b) wml_miniature_view_pane_g4

0x513c,	// (0x00046f23) wml_miniature_view_pane_g5

0x5144,	// (0x00046f2b) wml_miniature_view_pane_g6

0x514c,	// (0x00046f33) wml_miniature_view_pane_g7

0x5154,	// (0x00046f3b) wml_miniature_view_pane_g8

0x0007,

0xf50c,	// (0x000512f3) wml_miniature_view_pane_g

0xe548,	// (0x0005032f) background_graphic_ParamLimits

0xe548,	// (0x0005032f) background_graphic

0xe554,	// (0x0005033b) wml_tabs_2_pane

0xe55d,	// (0x00050344) wml_tabs_3_pane_ParamLimits

0xe55d,	// (0x00050344) wml_tabs_3_pane

0xe56f,	// (0x00050356) wml_tabs_4_pane_ParamLimits

0xe56f,	// (0x00050356) wml_tabs_4_pane

0xe585,	// (0x0005036c) wml_tabs_5_pane_ParamLimits

0xe585,	// (0x0005036c) wml_tabs_5_pane

0xe59f,	// (0x00050386) wml_tabs_pane_g2_ParamLimits

0xe59f,	// (0x00050386) wml_tabs_pane_g2

0xe5b3,	// (0x0005039a) wml_tabs_pane_g3_ParamLimits

0xe5b3,	// (0x0005039a) wml_tabs_pane_g3

0x515c,	// (0x00046f43) wml_tabs_2_active_pane_ParamLimits

0x515c,	// (0x00046f43) wml_tabs_2_active_pane

0x5170,	// (0x00046f57) wml_tabs_2_passive_pane_ParamLimits

0x5170,	// (0x00046f57) wml_tabs_2_passive_pane

0x5184,	// (0x00046f6b) wml_tabs_3_active_pane_cp_ParamLimits

0x5184,	// (0x00046f6b) wml_tabs_3_active_pane_cp

0x5199,	// (0x00046f80) wml_tabs_3_passive_pane_ParamLimits

0x5199,	// (0x00046f80) wml_tabs_3_passive_pane

0x51ac,	// (0x00046f93) wml_tabs_3_passive_pane_cp_ParamLimits

0x51ac,	// (0x00046f93) wml_tabs_3_passive_pane_cp

0x51c3,	// (0x00046faa) tabs_4_active_pane

0x51cb,	// (0x00046fb2) tabs_4_passive_pane

0x51d5,	// (0x00046fbc) tabs_4_passive_pane_cp

0x51dd,	// (0x00046fc4) tabs_4_passive_pane_cp2

0xe2c2,	// (0x000500a9) aid_height_text

0x39c6,	// (0x000457ad) mup_volume_cont_pane_ParamLimits

0x39c6,	// (0x000457ad) mup_volume_cont_pane

0x1b66,	// (0x0004394d) aid_size_cell_pinb

0xc479,	// (0x0004e260) aid_size_list_pinb

0x50c7,	// (0x00046eae) mup2_volume_cont_pane_ParamLimits

0x50c7,	// (0x00046eae) mup2_volume_cont_pane

0xaacb,	// (0x0004c8b2) mup2_volume_cont_pane_g1_ParamLimits

0xaacb,	// (0x0004c8b2) mup2_volume_cont_pane_g1

0x1853,	// (0x0004363a) aid_size_cell_touch_ParamLimits

0x1853,	// (0x0004363a) aid_size_cell_touch

0x1a55,	// (0x0004383c) touch_pane_ParamLimits

0x1a55,	// (0x0004383c) touch_pane

0xa6dd,	// (0x0004c4c4) main_rss2_pane

0xe5d0,	// (0x000503b7) listscroll_rss2_pane

0xe5d9,	// (0x000503c0) rss2_navigation_pane

0xe5e1,	// (0x000503c8) list_rss2_pane

0xce93,	// (0x0004ec7a) scroll_pane_cp22

0xe5e9,	// (0x000503d0) rss2_navigation_pane_g1

0xe5f2,	// (0x000503d9) rss2_navigation_pane_g2

0xe5fa,	// (0x000503e1) rss2_navigation_pane_g3

0x0002,

0x050f,	// (0x000422f6) rss2_navigation_pane_g

0xe602,	// (0x000503e9) rss2_navigation_pane_t1

0x51e7,	// (0x00046fce) rss2_list_single_pane_ParamLimits

0x51e7,	// (0x00046fce) rss2_list_single_pane

0xe610,	// (0x000503f7) rss2_list_single_pane_t2

0xe61e,	// (0x00050405) rss2_list_single_pane_t3_ParamLimits

0xe61e,	// (0x00050405) rss2_list_single_pane_t3

0xe63b,	// (0x00050422) rss2_list_single_pane_t4

0x326f,	// (0x00045056) smil_status_pane_g1

0xd8c7,	// (0x0004f6ae) main_image2_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) main_image2_pane

0x4c89,	// (0x00046a70) main_camera2_pane_g9_ParamLimits

0x4c89,	// (0x00046a70) main_camera2_pane_g9

0x4db7,	// (0x00046b9e) main_camera2_pane_t5_ParamLimits

0x4db7,	// (0x00046b9e) main_camera2_pane_t5

0xaa9b,	// (0x0004c882) main_camera2_pane_t6_ParamLimits

0xaa9b,	// (0x0004c882) main_camera2_pane_t6

0x51ff,	// (0x00046fe6) main_image2_pane_g1_ParamLimits

0x51ff,	// (0x00046fe6) main_image2_pane_g1

0x3fe1,	// (0x00045dc8) smil2_video_pane_ParamLimits

0x3fe1,	// (0x00045dc8) smil2_video_pane

0xa70b,	// (0x0004c4f2) aid_zoom_text_primary_cp

0xbdd3,	// (0x0004dbba) popup_preview_fixed_window

0xc808,	// (0x0004e5ef) im_reading_pane_g1

0x4b00,	// (0x000468e7) cams2_bc_adjust_pane_cp_ParamLimits

0x4b00,	// (0x000468e7) cams2_bc_adjust_pane_cp

0x4de6,	// (0x00046bcd) cams2_bc_adjust_pane_ParamLimits

0x4de6,	// (0x00046bcd) cams2_bc_adjust_pane

0xab04,	// (0x0004c8eb) cams2_bc_adjust_pane_g1

0xab0c,	// (0x0004c8f3) cams2_slider_pane

0xab15,	// (0x0004c8fc) cams2_slider_pane_g1

0xab1e,	// (0x0004c905) cams2_slider_pane_g2

0x0006,

0xf51d,	// (0x00051304) cams2_slider_pane_g

0x1c25,	// (0x00043a0c) calc_display_pane_ParamLimits

0x1c4d,	// (0x00043a34) calc_paper_pane_ParamLimits

0x1c70,	// (0x00043a57) grid_calc_pane_ParamLimits

0xaa08,	// (0x0004c7ef) popup_clock_digital_window_t1_ParamLimits

0xd263,	// (0x0004f04a) main_image_pane_t1

0x1c07,	// (0x000439ee) aid_size_cell_calc_ParamLimits

0x1c07,	// (0x000439ee) aid_size_cell_calc

0x45cd,	// (0x000463b4) popup_blid_sat_info2_window_ParamLimits

0x45cd,	// (0x000463b4) popup_blid_sat_info2_window

0xe651,	// (0x00050438) aid_size_cell_blid

0xe659,	// (0x00050440) bg_popup_window_pane_cp07

0xe67c,	// (0x00050463) grid_popup_blid_pane

0xe686,	// (0x0005046d) heading_pane_cp05_ParamLimits

0xe686,	// (0x0005046d) heading_pane_cp05

0xe750,	// (0x00050537) cell_popup_blid_pane_ParamLimits

0xe750,	// (0x00050537) cell_popup_blid_pane

0xe776,	// (0x0005055d) cell_popup_blid_pane_g1

0xe77e,	// (0x00050565) cell_popup_blid_pane_t1

0x5097,	// (0x00046e7e) mup2_indicator_pane_ParamLimits

0x5097,	// (0x00046e7e) mup2_indicator_pane

0xcfe0,	// (0x0004edc7) mup2_visualizer_osc_pane

0xe526,	// (0x0005030d) mup2_visualizer_spec_pane_ParamLimits

0xe526,	// (0x0005030d) mup2_visualizer_spec_pane

0x5215,	// (0x00046ffc) mup2_spec_half_pane

0x521e,	// (0x00047005) mup2_spec_half_pane_cp

0x5226,	// (0x0004700d) mup2_spec_bar_pane_ParamLimits

0x5226,	// (0x0004700d) mup2_spec_bar_pane

0xe4c7,	// (0x000502ae) mup2_spec_bar_pane_g1

0xe4d1,	// (0x000502b8) mup2_spec_bar_pane_g2

0x0001,

0x0489,	// (0x00042270) mup2_spec_bar_pane_g

0x5246,	// (0x0004702d) mup2_osc_middle_pane

0xe4e3,	// (0x000502ca) mup2_visualizer_osc_pane_g1

0xbdfd,	// (0x0004dbe4) popup_number_entry_window_t1_ParamLimits

0xbe10,	// (0x0004dbf7) popup_number_entry_window_t2_ParamLimits

0xbe22,	// (0x0004dc09) popup_number_entry_window_t3_ParamLimits

0x1aa7,	// (0x0004388e) popup_number_entry_window_t5_ParamLimits

0x1aa7,	// (0x0004388e) popup_number_entry_window_t5

0xf0ec,	// (0x00050ed3) popup_number_entry_window_t_ParamLimits

0xbe34,	// (0x0004dc1b) text_title_cp2_ParamLimits

0xaa47,	// (0x0004c82e) aid_hotspot_pointer_text2_pane

0xaa6d,	// (0x0004c854) main_viewer_pane_g9_ParamLimits

0xaa6d,	// (0x0004c854) main_viewer_pane_g9

0xca37,	// (0x0004e81e) cale_month_pane_t1_ParamLimits

0xca74,	// (0x0004e85b) bg_cale_pane_ParamLimits

0xca8c,	// (0x0004e873) list_cale_pane_ParamLimits

0xc698,	// (0x0004e47f) listscroll_cale_day_pane_t1

0xca9d,	// (0x0004e884) scroll_pane_cp09_ParamLimits

0x39fc,	// (0x000457e3) main_mup_eq_pane_t1_ParamLimits

0x39fc,	// (0x000457e3) main_mup_eq_pane_t1

0x3a16,	// (0x000457fd) main_mup_eq_pane_t2_ParamLimits

0x3a16,	// (0x000457fd) main_mup_eq_pane_t2

0x3a30,	// (0x00045817) main_mup_eq_pane_t3_ParamLimits

0x3a30,	// (0x00045817) main_mup_eq_pane_t3

0x3a4c,	// (0x00045833) main_mup_eq_pane_t4_ParamLimits

0x3a4c,	// (0x00045833) main_mup_eq_pane_t4

0x3a68,	// (0x0004584f) main_mup_eq_pane_t5_ParamLimits

0x3a68,	// (0x0004584f) main_mup_eq_pane_t5

0x3a84,	// (0x0004586b) main_mup_eq_pane_t6_ParamLimits

0x3a84,	// (0x0004586b) main_mup_eq_pane_t6

0x3a98,	// (0x0004587f) main_mup_eq_pane_t7_ParamLimits

0x3a98,	// (0x0004587f) main_mup_eq_pane_t7

0x3aac,	// (0x00045893) main_mup_eq_pane_t8_ParamLimits

0x3aac,	// (0x00045893) main_mup_eq_pane_t8

0x3ac0,	// (0x000458a7) main_mup_eq_pane_t9_ParamLimits

0x3ac0,	// (0x000458a7) main_mup_eq_pane_t9

0x3ada,	// (0x000458c1) main_mup_eq_pane_t10_ParamLimits

0x3ada,	// (0x000458c1) main_mup_eq_pane_t10

0x0009,

0xf3c0,	// (0x000511a7) main_mup_eq_pane_t_ParamLimits

0xf3c0,	// (0x000511a7) main_mup_eq_pane_t

0x3b89,	// (0x00045970) mup_equalizer_pane_cp5_ParamLimits

0x3b9d,	// (0x00045984) mup_equalizer_pane_cp6_ParamLimits

0x3bb1,	// (0x00045998) mup_equalizer_pane_cp7_ParamLimits

0xa6dd,	// (0x0004c4c4) main_gallery_pane

0xe4ec,	// (0x000502d3) smil2_volume_pane

0xe4f4,	// (0x000502db) smil_status_volume_pane_g1_ParamLimits

0xe507,	// (0x000502ee) smil_status_volume_pane_g2_ParamLimits

0xaa79,	// (0x0004c860) smil_status_volume_pane_g3_ParamLimits

0xf49c,	// (0x00051283) smil_status_volume_pane_g_ParamLimits

0xe659,	// (0x00050440) bg_popup_window_pane_cp07_ParamLimits

0xe667,	// (0x0005044e) blid_firmament_pane

0x524f,	// (0x00047036) aid_size_cell_gallery_ParamLimits

0x524f,	// (0x00047036) aid_size_cell_gallery

0x5265,	// (0x0004704c) grid_gallery_pane_ParamLimits

0x5265,	// (0x0004704c) grid_gallery_pane

0x527e,	// (0x00047065) cell_gallery_pane_ParamLimits

0x527e,	// (0x00047065) cell_gallery_pane

0xe78c,	// (0x00050573) bg_cell_gallery_focus_pane_ParamLimits

0xe78c,	// (0x00050573) bg_cell_gallery_focus_pane

0xe79e,	// (0x00050585) cell_gallery_pane_g1_ParamLimits

0xe79e,	// (0x00050585) cell_gallery_pane_g1

0x52c7,	// (0x000470ae) cell_gallery_pane_g2_ParamLimits

0x52c7,	// (0x000470ae) cell_gallery_pane_g2

0x52d4,	// (0x000470bb) cell_gallery_pane_g3_ParamLimits

0x52d4,	// (0x000470bb) cell_gallery_pane_g3

0xe7b2,	// (0x00050599) cell_gallery_pane_g4_ParamLimits

0xe7b2,	// (0x00050599) cell_gallery_pane_g4

0x0003,

0xf543,	// (0x0005132a) cell_gallery_pane_g_ParamLimits

0xf543,	// (0x0005132a) cell_gallery_pane_g

0xe7be,	// (0x000505a5) bg_cell_gallery_focus_pane_g1

0xe7c6,	// (0x000505ad) bg_cell_gallery_focus_pane_g2

0xe7ce,	// (0x000505b5) bg_cell_gallery_focus_pane_g3

0xe7d6,	// (0x000505bd) bg_cell_gallery_focus_pane_g4

0xe7de,	// (0x000505c5) bg_cell_gallery_focus_pane_g5

0xe7e6,	// (0x000505cd) bg_cell_gallery_focus_pane_g6

0xe7ee,	// (0x000505d5) bg_cell_gallery_focus_pane_g7

0xe7f6,	// (0x000505dd) bg_cell_gallery_focus_pane_g8

0x0007,

0x0545,	// (0x0004232c) bg_cell_gallery_focus_pane_g

0xe7fe,	// (0x000505e5) aid_firma_cardinal

0xe812,	// (0x000505f9) blid_firmament_pane_t1

0xe829,	// (0x00050610) blid_firmament_pane_t2

0xe840,	// (0x00050627) blid_firmament_pane_t3

0xe857,	// (0x0005063e) blid_firmament_pane_t4

0x0003,

0x0556,	// (0x0004233d) blid_firmament_pane_t

0xe86e,	// (0x00050655) blid_sat_info_pane

0xe87e,	// (0x00050665) blid_sat_info_pane_g1

0xe87e,	// (0x00050665) blid_sat_info_pane_g2

0x0001,

0x055f,	// (0x00042346) blid_sat_info_pane_g

0xe888,	// (0x0005066f) blid_sat_info_pane_t1

0xe896,	// (0x0005067d) smil2_volume_content_pane

0xe89f,	// (0x00050686) smil2_volume_pane_g1

0xe8a7,	// (0x0005068e) smil2_volume_content_pane_g1

0xe8b0,	// (0x00050697) smil2_volume_content_pane_g2

0xe8b9,	// (0x000506a0) smil2_volume_content_pane_g3

0xe8c2,	// (0x000506a9) smil2_volume_content_pane_g4

0xe8cb,	// (0x000506b2) smil2_volume_content_pane_g5

0xe8d4,	// (0x000506bb) smil2_volume_content_pane_g6

0xe8dd,	// (0x000506c4) smil2_volume_content_pane_g7

0xe8e6,	// (0x000506cd) smil2_volume_content_pane_g8

0xe8ef,	// (0x000506d6) smil2_volume_content_pane_g9

0xe8f8,	// (0x000506df) smil2_volume_content_pane_g10

0x0009,

0x0564,	// (0x0004234b) smil2_volume_content_pane_g

0x20e4,	// (0x00043ecb) cale_week_day_heading_pane_t1_ParamLimits

0x20f8,	// (0x00043edf) cale_week_day_heading_pane_t2_ParamLimits

0x210c,	// (0x00043ef3) cale_week_day_heading_pane_t3_ParamLimits

0x2120,	// (0x00043f07) cale_week_day_heading_pane_t4_ParamLimits

0x2134,	// (0x00043f1b) cale_week_day_heading_pane_t5_ParamLimits

0x2148,	// (0x00043f2f) cale_week_day_heading_pane_t6_ParamLimits

0x215e,	// (0x00043f45) cale_week_day_heading_pane_t7_ParamLimits

0xf1da,	// (0x00050fc1) cale_week_day_heading_pane_t_ParamLimits

0xc6aa,	// (0x0004e491) bg_cale_side_pane_ParamLimits

0x2172,	// (0x00043f59) cale_week_time_pane_t1_ParamLimits

0x218a,	// (0x00043f71) cale_week_time_pane_t2_ParamLimits

0x21a2,	// (0x00043f89) cale_week_time_pane_t3_ParamLimits

0x21ba,	// (0x00043fa1) cale_week_time_pane_t4_ParamLimits

0x21d2,	// (0x00043fb9) cale_week_time_pane_t5_ParamLimits

0x21ea,	// (0x00043fd1) cale_week_time_pane_t6_ParamLimits

0x2202,	// (0x00043fe9) cale_week_time_pane_t7_ParamLimits

0x221a,	// (0x00044001) cale_week_time_pane_t8_ParamLimits

0xf1e9,	// (0x00050fd0) cale_week_time_pane_t_ParamLimits

0x2232,	// (0x00044019) cell_cale_week_pane_g2_ParamLimits

0xc6aa,	// (0x0004e491) bg_cale_side_pane_cp01_ParamLimits

0x30e8,	// (0x00044ecf) cale_month_week_pane_t1_ParamLimits

0x30ff,	// (0x00044ee6) cale_month_week_pane_t2_ParamLimits

0x3116,	// (0x00044efd) cale_month_week_pane_t3_ParamLimits

0x312d,	// (0x00044f14) cale_month_week_pane_t4_ParamLimits

0x3144,	// (0x00044f2b) cale_month_week_pane_t5_ParamLimits

0x315b,	// (0x00044f42) cale_month_week_pane_t6_ParamLimits

0xf29c,	// (0x00051083) cale_month_week_pane_t_ParamLimits

0xa913,	// (0x0004c6fa) cell_cale_month_pane_g1_ParamLimits

0xa6dd,	// (0x0004c4c4) main_cale_event_viewer_pane

0xa6dd,	// (0x0004c4c4) listscroll_cale_event_viewer_pane

0xe901,	// (0x000506e8) list_cale_ev_pane

0xe909,	// (0x000506f0) scroll_pane_cp023

0xe915,	// (0x000506fc) field_cale_ev_pane_ParamLimits

0xe915,	// (0x000506fc) field_cale_ev_pane

0xe92f,	// (0x00050716) field_cale_ev_content_pane_ParamLimits

0xe92f,	// (0x00050716) field_cale_ev_content_pane

0xe93b,	// (0x00050722) field_cale_ev_pane_g1_ParamLimits

0xe93b,	// (0x00050722) field_cale_ev_pane_g1

0xe947,	// (0x0005072e) field_cale_ev_pane_g2_ParamLimits

0xe947,	// (0x0005072e) field_cale_ev_pane_g2

0xe95f,	// (0x00050746) field_cale_ev_pane_g3_ParamLimits

0xe95f,	// (0x00050746) field_cale_ev_pane_g3

0x0002,

0x0579,	// (0x00042360) field_cale_ev_pane_g_ParamLimits

0x0579,	// (0x00042360) field_cale_ev_pane_g

0xe977,	// (0x0005075e) field_cale_ev_pane_t1_ParamLimits

0xe977,	// (0x0005075e) field_cale_ev_pane_t1

0xe98e,	// (0x00050775) field_cale_ev_content_pane_t1_ParamLimits

0xe98e,	// (0x00050775) field_cale_ev_content_pane_t1

0xd149,	// (0x0004ef30) bg_button_pane_cp01

0xc558,	// (0x0004e33f) listscroll_cale_week_pane_ParamLimits

0x1ef9,	// (0x00043ce0) popup_toolbar_window_cp01

0xc698,	// (0x0004e47f) listscroll_cale_week_pane_t1_ParamLimits

0xc558,	// (0x0004e33f) listscroll_cale_day_pane_ParamLimits

0x32ce,	// (0x000450b5) popup_toolbar_window_cp02

0xc698,	// (0x0004e47f) listscroll_cale_day_pane_t1_ParamLimits

0xc558,	// (0x0004e33f) main_cale_month_pane_ParamLimits

0x47f3,	// (0x000465da) popup_toolbar_window_cp03_ParamLimits

0x47f3,	// (0x000465da) popup_toolbar_window_cp03

0x3ea5,	// (0x00045c8c) main_image_pane_g2_ParamLimits

0x3ea5,	// (0x00045c8c) main_image_pane_g2

0x3eb6,	// (0x00045c9d) main_image_pane_g3_ParamLimits

0x3eb6,	// (0x00045c9d) main_image_pane_g3

0x0002,

0xf448,	// (0x0005122f) main_image_pane_g_ParamLimits

0xf448,	// (0x0005122f) main_image_pane_g

0xd263,	// (0x0004f04a) main_image_pane_t1_ParamLimits

0x3ec7,	// (0x00045cae) main_image_pane_t2_ParamLimits

0x3ec7,	// (0x00045cae) main_image_pane_t2

0x3ed9,	// (0x00045cc0) main_image_pane_t3_ParamLimits

0x3ed9,	// (0x00045cc0) main_image_pane_t3

0x3f01,	// (0x00045ce8) main_image_pane_t4_ParamLimits

0x3f01,	// (0x00045ce8) main_image_pane_t4

0x0003,

0xf44f,	// (0x00051236) main_image_pane_t_ParamLimits

0xf44f,	// (0x00051236) main_image_pane_t

0x3f21,	// (0x00045d08) popup_image_details_window_cp01

0x3f2b,	// (0x00045d12) popup_toobar_trans_pane_cp01_ParamLimits

0x3f2b,	// (0x00045d12) popup_toobar_trans_pane_cp01

0x46a4,	// (0x0004648b) popup_image_details_window_ParamLimits

0x46a4,	// (0x0004648b) popup_image_details_window

0xe44d,	// (0x00050234) popup_image_focus_window

0x4aba,	// (0x000468a1) camera2_autofocus_pane_ParamLimits

0x4aba,	// (0x000468a1) camera2_autofocus_pane

0xa6dd,	// (0x0004c4c4) bg_popup_sub_pane_cp06

0xe9ab,	// (0x00050792) popup_image_focus_window_g1

0xe9b3,	// (0x0005079a) popup_image_focus_window_g2

0xe9bb,	// (0x000507a2) popup_image_focus_window_g3

0xe9c3,	// (0x000507aa) popup_image_focus_window_g4

0x0003,

0x0580,	// (0x00042367) popup_image_focus_window_g

0xe9cb,	// (0x000507b2) popup_image_focus_window_t1

0xe9d9,	// (0x000507c0) popup_image_focus_window_t2

0xe9e9,	// (0x000507d0) popup_image_focus_window_t3

0x0002,

0x0589,	// (0x00042370) popup_image_focus_window_t

0xe9f7,	// (0x000507de) camera2_autofocus_pane_g1

0xd8c7,	// (0x0004f6ae) bg_tb_trans_pane_cp01

0xea05,	// (0x000507ec) popup_image_details_window_g1

0xea18,	// (0x000507ff) popup_image_details_window_g2

0x0002,

0x059b,	// (0x00042382) popup_image_details_window_g

0xea41,	// (0x00050828) popup_image_details_window_t1

0xea53,	// (0x0005083a) popup_image_details_window_t2

0xea6c,	// (0x00050853) popup_image_details_window_t3

0xea80,	// (0x00050867) popup_image_details_window_t4

0xea9b,	// (0x00050882) popup_image_details_window_t5

0x0004,

0x05a2,	// (0x00042389) popup_image_details_window_t

0xc544,	// (0x0004e32b) bg_calc_paper_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) grid_highlight_pane_cp013

0xa73f,	// (0x0004c526) list_calc_pane_ParamLimits

0xa751,	// (0x0004c538) scroll_pane_cp024

0xc558,	// (0x0004e33f) bg_calc_display_pane_ParamLimits

0x1d65,	// (0x00043b4c) calc_display_pane_t1_ParamLimits

0x1d77,	// (0x00043b5e) calc_display_pane_t2_ParamLimits

0xa759,	// (0x0004c540) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00050f5a) calc_display_pane_t_ParamLimits

0x1e32,	// (0x00043c19) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00050f77) cell_calc_pane_g

0x1e3b,	// (0x00043c22) cell_calc_pane_t1

0xc5b7,	// (0x0004e39e) grid_highlight_pane_cp02_ParamLimits

0xc5cd,	// (0x0004e3b4) toolbar_button_pane_cp01_ParamLimits

0xc5cd,	// (0x0004e3b4) toolbar_button_pane_cp01

0xd2a8,	// (0x0004f08f) temp_image_control_pane_ParamLimits

0xd2a8,	// (0x0004f08f) temp_image_control_pane

0xd8c7,	// (0x0004f6ae) main_mp3_pane

0xeab5,	// (0x0005089c) temp_image_control_pane_g1_ParamLimits

0xeab5,	// (0x0005089c) temp_image_control_pane_g1

0xeac3,	// (0x000508aa) temp_image_control_pane_g2_ParamLimits

0xeac3,	// (0x000508aa) temp_image_control_pane_g2

0xead5,	// (0x000508bc) temp_image_control_pane_g3_ParamLimits

0xead5,	// (0x000508bc) temp_image_control_pane_g3

0x5311,	// (0x000470f8) temp_image_control_pane_g4_ParamLimits

0x5311,	// (0x000470f8) temp_image_control_pane_g4

0x0003,

0xf557,	// (0x0005133e) temp_image_control_pane_g_ParamLimits

0xf557,	// (0x0005133e) temp_image_control_pane_g

0xeab5,	// (0x0005089c) main_mp3_pane_g1

0x5324,	// (0x0004710b) main_mp3_pane_g2

0x0007,

0xf560,	// (0x00051347) main_mp3_pane_g

0xeb18,	// (0x000508ff) main_mp3_pane_t1

0xc719,	// (0x0004e500) main_camera_pane_g8_ParamLimits

0xc719,	// (0x0004e500) main_camera_pane_g8

0x24d9,	// (0x000442c0) main_video_pane_g7_ParamLimits

0x24d9,	// (0x000442c0) main_video_pane_g7

0xaab9,	// (0x0004c8a0) main_camera2_pane_t7_ParamLimits

0xaab9,	// (0x0004c8a0) main_camera2_pane_t7

0xc85f,	// (0x0004e646) scroll_pane_cp025_ParamLimits

0xc85f,	// (0x0004e646) scroll_pane_cp025

0xc873,	// (0x0004e65a) scroll_pane_cp026_ParamLimits

0xc873,	// (0x0004e65a) scroll_pane_cp026

0xc882,	// (0x0004e669) wml_content_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) main_touch_calib_pane

0x53f0,	// (0x000471d7) main_touch_calib_pane_g1

0x53fc,	// (0x000471e3) main_touch_calib_pane_g2

0x5408,	// (0x000471ef) main_touch_calib_pane_g3

0x5414,	// (0x000471fb) main_touch_calib_pane_g4

0x0003,

0xf57e,	// (0x00051365) main_touch_calib_pane_g

0x5420,	// (0x00047207) main_touch_calib_pane_t1

0x543a,	// (0x00047221) main_touch_calib_pane_t2

0x0004,

0xf587,	// (0x0005136e) main_touch_calib_pane_t

0xcf21,	// (0x0004ed08) mup_progress_pane_cp02

0xcf40,	// (0x0004ed27) navi_pane_g1

0xcfa2,	// (0x0004ed89) navi_pane_mp_t3

0xd8c7,	// (0x0004f6ae) main_mp3_pane_ParamLimits

0x4831,	// (0x00046618) navi_pane_ParamLimits

0xeab5,	// (0x0005089c) main_mp3_pane_g1_ParamLimits

0x5324,	// (0x0004710b) main_mp3_pane_g2_ParamLimits

0x5332,	// (0x00047119) main_mp3_pane_g3_ParamLimits

0x5332,	// (0x00047119) main_mp3_pane_g3

0x5340,	// (0x00047127) main_mp3_pane_g4_ParamLimits

0x5340,	// (0x00047127) main_mp3_pane_g4

0xeae5,	// (0x000508cc) main_mp3_pane_g5_ParamLimits

0xeae5,	// (0x000508cc) main_mp3_pane_g5

0xeaf3,	// (0x000508da) main_mp3_pane_g6_ParamLimits

0xeaf3,	// (0x000508da) main_mp3_pane_g6

0xeb00,	// (0x000508e7) main_mp3_pane_g7_ParamLimits

0xeb00,	// (0x000508e7) main_mp3_pane_g7

0xeb0c,	// (0x000508f3) main_mp3_pane_g8_ParamLimits

0xeb0c,	// (0x000508f3) main_mp3_pane_g8

0xf560,	// (0x00051347) main_mp3_pane_g_ParamLimits

0x534e,	// (0x00047135) main_mp3_pane_t2

0x535c,	// (0x00047143) main_mp3_pane_t3

0xeb26,	// (0x0005090d) main_mp3_pane_t4

0xeb34,	// (0x0005091b) main_mp3_pane_t5

0x0005,

0xf571,	// (0x00051358) main_mp3_pane_t

0xeb42,	// (0x00050929) mup_progress_pane_cp01

0xa70b,	// (0x0004c4f2) aid_zoom_text_secondary2

0xe901,	// (0x000506e8) list_cale_ev2_pane

0xe909,	// (0x000506f0) scroll_pane_cp023_ParamLimits

0x5490,	// (0x00047277) field_cale_ev2_pane_ParamLimits

0x5490,	// (0x00047277) field_cale_ev2_pane

0xab38,	// (0x0004c91f) field_cale_ev2_pane_g1_ParamLimits

0xab38,	// (0x0004c91f) field_cale_ev2_pane_g1

0xab44,	// (0x0004c92b) field_cale_ev2_pane_g2_ParamLimits

0xab44,	// (0x0004c92b) field_cale_ev2_pane_g2

0xab5c,	// (0x0004c943) field_cale_ev2_pane_g3_ParamLimits

0xab5c,	// (0x0004c943) field_cale_ev2_pane_g3

0x0003,

0xf592,	// (0x00051379) field_cale_ev2_pane_g_ParamLimits

0xf592,	// (0x00051379) field_cale_ev2_pane_g

0x0f13,	// (0x00042cfa) field_cale_ev2_pane_t1_ParamLimits

0x0f13,	// (0x00042cfa) field_cale_ev2_pane_t1

0x0f2a,	// (0x00042d11) field_cale_ev2_pane_t2_ParamLimits

0x0f2a,	// (0x00042d11) field_cale_ev2_pane_t2

0x0001,

0xf59b,	// (0x00051382) field_cale_ev2_pane_t_ParamLimits

0xf59b,	// (0x00051382) field_cale_ev2_pane_t

0x3d55,	// (0x00045b3c) main_postcard_pane_g5_ParamLimits

0x3d55,	// (0x00045b3c) main_postcard_pane_g5

0x3d6b,	// (0x00045b52) main_postcard_pane_g6_ParamLimits

0x3d6b,	// (0x00045b52) main_postcard_pane_g6

0x2289,	// (0x00044070) camera2_autofocus_pane_cp_ParamLimits

0x2289,	// (0x00044070) camera2_autofocus_pane_cp

0xd8c7,	// (0x0004f6ae) main_mup3_pane

0x54d6,	// (0x000472bd) main_mup3_pane_g1_ParamLimits

0x54d6,	// (0x000472bd) main_mup3_pane_g1

0x54f8,	// (0x000472df) main_mup3_pane_g2_ParamLimits

0x54f8,	// (0x000472df) main_mup3_pane_g2

0x5579,	// (0x00047360) main_mup3_pane_g3_ParamLimits

0x5579,	// (0x00047360) main_mup3_pane_g3

0x55bb,	// (0x000473a2) main_mup3_pane_g4_ParamLimits

0x55bb,	// (0x000473a2) main_mup3_pane_g4

0x55fd,	// (0x000473e4) main_mup3_pane_g5_ParamLimits

0x55fd,	// (0x000473e4) main_mup3_pane_g5

0x5641,	// (0x00047428) main_mup3_pane_g6_ParamLimits

0x5641,	// (0x00047428) main_mup3_pane_g6

0xeb4a,	// (0x00050931) main_mup3_pane_g7_ParamLimits

0xeb4a,	// (0x00050931) main_mup3_pane_g7

0x0007,

0xf5ab,	// (0x00051392) main_mup3_pane_g_ParamLimits

0xf5ab,	// (0x00051392) main_mup3_pane_g

0x56bd,	// (0x000474a4) main_mup3_pane_t1_ParamLimits

0x56bd,	// (0x000474a4) main_mup3_pane_t1

0x5731,	// (0x00047518) main_mup3_pane_t2_ParamLimits

0x5731,	// (0x00047518) main_mup3_pane_t2

0x5805,	// (0x000475ec) main_mup3_pane_t4_ParamLimits

0x5805,	// (0x000475ec) main_mup3_pane_t4

0x585f,	// (0x00047646) main_mup3_pane_t5_ParamLimits

0x585f,	// (0x00047646) main_mup3_pane_t5

0x5913,	// (0x000476fa) main_mup3_pane_t6_ParamLimits

0x5913,	// (0x000476fa) main_mup3_pane_t6

0x0005,

0xf5bc,	// (0x000513a3) main_mup3_pane_t_ParamLimits

0xf5bc,	// (0x000513a3) main_mup3_pane_t

0x59c7,	// (0x000477ae) mup3_progress_pane_ParamLimits

0x59c7,	// (0x000477ae) mup3_progress_pane

0x5a43,	// (0x0004782a) popup_mup3_control_window_ParamLimits

0x5a43,	// (0x0004782a) popup_mup3_control_window

0xeb58,	// (0x0005093f) popup_mup3_text_window

0x5a75,	// (0x0004785c) mup3_progress_pane_t1

0x5a8c,	// (0x00047873) mup3_progress_pane_t2

0xeb60,	// (0x00050947) mup3_progress_pane_t3

0x0002,

0xf5c9,	// (0x000513b0) mup3_progress_pane_t

0xeb77,	// (0x0005095e) mup_progress_pane_cp03

0xa6dd,	// (0x0004c4c4) bg_tb_trans_pane_cp04

0x5aa3,	// (0x0004788a) mup3_volume_pane

0x5aab,	// (0x00047892) popup_mup3_control_window_g1

0x5ab4,	// (0x0004789b) mup3_volume_pane_g1

0x5abd,	// (0x000478a4) mup3_volume_pane_g2

0x5ac6,	// (0x000478ad) mup3_volume_pane_g3

0x0002,

0xf5d0,	// (0x000513b7) mup3_volume_pane_g

0xa6dd,	// (0x0004c4c4) bg_tb_trans_pane_cp03

0xeb87,	// (0x0005096e) popup_mup3_text_window_g1

0xeb8f,	// (0x00050976) popup_mup3_text_window_t1

0xc5a0,	// (0x0004e387) list_calc_item_pane_g1_ParamLimits

0xe5c7,	// (0x000503ae) mup_volume_pane_cp_g1

0x5454,	// (0x0004723b) main_touch_calib_pane_t3

0x5468,	// (0x0004724f) main_touch_calib_pane_t4

0x547c,	// (0x00047263) main_touch_calib_pane_t5

0xa6e7,	// (0x0004c4ce) aid_cell_size_toolbar2

0xa6ef,	// (0x0004c4d6) aid_popup3_width_pane

0xa6fb,	// (0x0004c4e2) aid_zoom_text_msg_primary

0xa833,	// (0x0004c61a) vorec_t7

0xc564,	// (0x0004e34b) bg_calc_paper_pane_g1_ParamLimits

0xc570,	// (0x0004e357) bg_calc_paper_pane_g2_ParamLimits

0xc57c,	// (0x0004e363) bg_calc_paper_pane_g3_ParamLimits

0xc588,	// (0x0004e36f) bg_calc_paper_pane_g4_ParamLimits

0xc594,	// (0x0004e37b) bg_calc_paper_pane_g5_ParamLimits

0x1dbe,	// (0x00043ba5) bg_calc_paper_pane_g6_ParamLimits

0x1dcd,	// (0x00043bb4) bg_calc_paper_pane_g7_ParamLimits

0x1ddc,	// (0x00043bc3) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00050f61) bg_calc_paper_pane_g_ParamLimits

0x1def,	// (0x00043bd6) calc_bg_paper_pane_g9_ParamLimits

0x23e3,	// (0x000441ca) image_qvga_pane_ParamLimits

0x23e3,	// (0x000441ca) image_qvga_pane

0xc449,	// (0x0004e230) bg_popup_sub_pane_cp04_ParamLimits

0xd1df,	// (0x0004efc6) popup_mup_playback_window_g1_ParamLimits

0xd1eb,	// (0x0004efd2) popup_mup_playback_window_t1_ParamLimits

0xd200,	// (0x0004efe7) popup_mup_playback_window_t2_ParamLimits

0x0365,	// (0x0004214c) popup_mup_playback_window_t_ParamLimits

0x4fb1,	// (0x00046d98) main_mup2_pane_g3_ParamLimits

0x4fb1,	// (0x00046d98) main_mup2_pane_g3

0x26e8,	// (0x000444cf) popup_toolbar_window_cp04

0xd5f5,	// (0x0004f3dc) popup_call2_audio_second_window_g3_ParamLimits

0xd5f5,	// (0x0004f3dc) popup_call2_audio_second_window_g3

0xda3c,	// (0x0004f823) popup_call2_audio_first_window_g4_ParamLimits

0xda3c,	// (0x0004f823) popup_call2_audio_first_window_g4

0xe0c4,	// (0x0004feab) popup_call2_audio_in_window_g4_ParamLimits

0xe0c4,	// (0x0004feab) popup_call2_audio_in_window_g4

0x3e87,	// (0x00045c6e) aid_area_sk_bg_cut_ParamLimits

0x3e87,	// (0x00045c6e) aid_area_sk_bg_cut

0xd215,	// (0x0004effc) aid_area_sk_bg_cut_2_ParamLimits

0xd215,	// (0x0004effc) aid_area_sk_bg_cut_2

0x52b7,	// (0x0004709e) aid_placing_details_win

0x52bf,	// (0x000470a6) aid_placing_details_win_2

0xe9f7,	// (0x000507de) camera2_autofocus_pane_g1_ParamLimits

0x1a00,	// (0x000437e7) popup_fixed_preview_cale_window_ParamLimits

0x1a00,	// (0x000437e7) popup_fixed_preview_cale_window

0xcff1,	// (0x0004edd8) navi_slider_pane_g3

0xcffa,	// (0x0004ede1) navi_slider_pane_g4

0xd003,	// (0x0004edea) navi_slider_pane_g5

0xcff1,	// (0x0004edd8) navi_slider_pane_g6

0xaa2e,	// (0x0004c815) navi_slider_pane_g7

0xd116,	// (0x0004eefd) mup_scale_pane_g3

0xd11f,	// (0x0004ef06) mup_scale_pane_g4

0xd128,	// (0x0004ef0f) mup_scale_pane_g5

0x3bc5,	// (0x000459ac) mup_scale_pane_g6

0x3bce,	// (0x000459b5) mup_scale_pane_g7

0xcff1,	// (0x0004edd8) cams2_slider_pane_g3

0xe649,	// (0x00050430) cams2_slider_pane_g4

0xab27,	// (0x0004c90e) cams2_slider_pane_g5

0xcff1,	// (0x0004edd8) cams2_slider_pane_g6

0xab2f,	// (0x0004c916) cams2_slider_pane_g7

0xe87e,	// (0x00050665) camera2_autofocus_pane_cp_g1

0xeb9d,	// (0x00050984) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb9d,	// (0x00050984) bg_popup_preview_window_pane_cp02

0xeba9,	// (0x00050990) list_fp_cale_pane_ParamLimits

0xeba9,	// (0x00050990) list_fp_cale_pane

0xebb5,	// (0x0005099c) popup_fixed_preview_cale_window_t1_ParamLimits

0xebb5,	// (0x0005099c) popup_fixed_preview_cale_window_t1

0x5acf,	// (0x000478b6) popup_fixed_preview_cale_window_t2_ParamLimits

0x5acf,	// (0x000478b6) popup_fixed_preview_cale_window_t2

0x5ae4,	// (0x000478cb) popup_fixed_preview_cale_window_t3_ParamLimits

0x5ae4,	// (0x000478cb) popup_fixed_preview_cale_window_t3

0x0002,

0xf5d7,	// (0x000513be) popup_fixed_preview_cale_window_t_ParamLimits

0xf5d7,	// (0x000513be) popup_fixed_preview_cale_window_t

0x5af9,	// (0x000478e0) list_single_fp_cale_pane_ParamLimits

0x5af9,	// (0x000478e0) list_single_fp_cale_pane

0xebd3,	// (0x000509ba) list_single_fp_cale_pane_g1_ParamLimits

0xebd3,	// (0x000509ba) list_single_fp_cale_pane_g1

0xebdf,	// (0x000509c6) list_single_fp_cale_pane_g2_ParamLimits

0xebdf,	// (0x000509c6) list_single_fp_cale_pane_g2

0x0002,

0x0634,	// (0x0004241b) list_single_fp_cale_pane_g_ParamLimits

0x0634,	// (0x0004241b) list_single_fp_cale_pane_g

0xebf8,	// (0x000509df) list_single_fp_cale_pane_t1_ParamLimits

0xebf8,	// (0x000509df) list_single_fp_cale_pane_t1

0xec0a,	// (0x000509f1) list_single_fp_cale_pane_t2_ParamLimits

0xec0a,	// (0x000509f1) list_single_fp_cale_pane_t2

0x0001,

0x063b,	// (0x00042422) list_single_fp_cale_pane_t_ParamLimits

0x063b,	// (0x00042422) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa6dd,	// (0x0004c4c4) main_dialer_pane

0x5b11,	// (0x000478f8) aid_cell_size_keypad

0x5b1b,	// (0x00047902) dialer_ne_pane

0x5b23,	// (0x0004790a) grid_dialer_command_1_pane

0x5b2b,	// (0x00047912) grid_dialer_command_2_pane

0x5b33,	// (0x0004791a) grid_dialer_keypad_pane

0x5b45,	// (0x0004792c) bg_popup_call_pane_cp06_ParamLimits

0x5b45,	// (0x0004792c) bg_popup_call_pane_cp06

0x5b51,	// (0x00047938) dialer_ne_clear_pane_ParamLimits

0x5b51,	// (0x00047938) dialer_ne_clear_pane

0xec3d,	// (0x00050a24) dialer_ne_pane_g1

0xec45,	// (0x00050a2c) dialer_ne_pane_t1_ParamLimits

0xec45,	// (0x00050a2c) dialer_ne_pane_t1

0x5b5d,	// (0x00047944) dialer_ne_pane_t2_ParamLimits

0x5b5d,	// (0x00047944) dialer_ne_pane_t2

0x5b87,	// (0x0004796e) dialer_ne_pane_t3_ParamLimits

0x5b87,	// (0x0004796e) dialer_ne_pane_t3

0x0002,

0xf5de,	// (0x000513c5) dialer_ne_pane_t_ParamLimits

0xf5de,	// (0x000513c5) dialer_ne_pane_t

0x5bb7,	// (0x0004799e) dialer_ne_pane_t3_copy1_ParamLimits

0x5bb7,	// (0x0004799e) dialer_ne_pane_t3_copy1

0x5be6,	// (0x000479cd) cell_dialer_keypad_pane_ParamLimits

0x5be6,	// (0x000479cd) cell_dialer_keypad_pane

0x5bfd,	// (0x000479e4) cell_dialer_command_1_pane_ParamLimits

0x5bfd,	// (0x000479e4) cell_dialer_command_1_pane

0x5c13,	// (0x000479fa) cell_dialer_command_2_pane_ParamLimits

0x5c13,	// (0x000479fa) cell_dialer_command_2_pane

0xec57,	// (0x00050a3e) bg_button_pane_cp02_ParamLimits

0xec57,	// (0x00050a3e) bg_button_pane_cp02

0x5c22,	// (0x00047a09) cell_dialer_keypad_pane_g1_ParamLimits

0x5c22,	// (0x00047a09) cell_dialer_keypad_pane_g1

0xec57,	// (0x00050a3e) bg_button_pane_cp03_ParamLimits

0xec57,	// (0x00050a3e) bg_button_pane_cp03

0x5c37,	// (0x00047a1e) cell_dialer_command_1_pane_g1_ParamLimits

0x5c37,	// (0x00047a1e) cell_dialer_command_1_pane_g1

0xec63,	// (0x00050a4a) bg_button_pane_cp04

0x5c4b,	// (0x00047a32) cell_dialer_command_2_pane_g1

0xcfe0,	// (0x0004edc7) bg_button_pane_cp06

0xec6b,	// (0x00050a52) dialer_ne_clear_pane_g1

0x3703,	// (0x000454ea) navi_pane_g2

0x3731,	// (0x00045518) navi_pane_g3

0x0002,

0xf376,	// (0x0005115d) navi_pane_g

0x375a,	// (0x00045541) navi_pane_mv_g2

0x3781,	// (0x00045568) navi_pane_mv_g5

0x3789,	// (0x00045570) navi_pane_mv_t1

0xc558,	// (0x0004e33f) main_clock2_pane

0x5c7e,	// (0x00047a65) main_clock2_list_pane_ParamLimits

0x5c7e,	// (0x00047a65) main_clock2_list_pane

0x5cb4,	// (0x00047a9b) main_clock2_pane_t1_ParamLimits

0x5cb4,	// (0x00047a9b) main_clock2_pane_t1

0x5cf2,	// (0x00047ad9) main_clock2_pane_t2_ParamLimits

0x5cf2,	// (0x00047ad9) main_clock2_pane_t2

0x0004,

0xf5e5,	// (0x000513cc) main_clock2_pane_t_ParamLimits

0xf5e5,	// (0x000513cc) main_clock2_pane_t

0x5d7c,	// (0x00047b63) popup_clock_analogue_window_cp03_ParamLimits

0x5d7c,	// (0x00047b63) popup_clock_analogue_window_cp03

0x5da3,	// (0x00047b8a) popup_clock_digital_window_cp02_ParamLimits

0x5da3,	// (0x00047b8a) popup_clock_digital_window_cp02

0x5e18,	// (0x00047bff) main_clock2_list_single_pane_ParamLimits

0x5e18,	// (0x00047bff) main_clock2_list_single_pane

0xcfe0,	// (0x0004edc7) list_highlight_pane_cp05

0xec73,	// (0x00050a5a) main_clock2_list_single_pane_t1

0x26e8,	// (0x000444cf) popup_toolbar_window_cp04_ParamLimits

0x52e1,	// (0x000470c8) camera2_autofocus_pane_g2_ParamLimits

0x52e1,	// (0x000470c8) camera2_autofocus_pane_g2

0x52ed,	// (0x000470d4) camera2_autofocus_pane_g3_ParamLimits

0x52ed,	// (0x000470d4) camera2_autofocus_pane_g3

0x52f9,	// (0x000470e0) camera2_autofocus_pane_g4_ParamLimits

0x52f9,	// (0x000470e0) camera2_autofocus_pane_g4

0x5305,	// (0x000470ec) camera2_autofocus_pane_g5_ParamLimits

0x5305,	// (0x000470ec) camera2_autofocus_pane_g5

0x0004,

0xf54c,	// (0x00051333) camera2_autofocus_pane_g_ParamLimits

0xf54c,	// (0x00051333) camera2_autofocus_pane_g

0x54b6,	// (0x0004729d) camera2_autofocus_pane_cp_g2

0x54be,	// (0x000472a5) camera2_autofocus_pane_cp_g3

0x54c6,	// (0x000472ad) camera2_autofocus_pane_cp_g4

0x54ce,	// (0x000472b5) camera2_autofocus_pane_cp_g5

0x0004,

0xf5a0,	// (0x00051387) camera2_autofocus_pane_cp_g

0x5b3d,	// (0x00047924) popup_dialer_spcha_window

0xa6dd,	// (0x0004c4c4) bg_popup_sub_pane_cp07

0xec81,	// (0x00050a68) list_spcha_pane

0xec89,	// (0x00050a70) list_single_spcha_pane_ParamLimits

0xec89,	// (0x00050a70) list_single_spcha_pane

0xa6dd,	// (0x0004c4c4) list_highlight_pane_cp06

0xec9a,	// (0x00050a81) list_single_spcha_pane_t1

0xde6e,	// (0x0004fc55) popup_call2_audio_out_window_g4_ParamLimits

0xde6e,	// (0x0004fc55) popup_call2_audio_out_window_g4

0xa6dd,	// (0x0004c4c4) main_imed2_pane

0xe455,	// (0x0005023c) popup_imed_adjust2_window

0x46bc,	// (0x000464a3) popup_imed_trans_window_ParamLimits

0x46bc,	// (0x000464a3) popup_imed_trans_window

0xe6b2,	// (0x00050499) popup_blid_sat_info2_window_t1

0xe6c0,	// (0x000504a7) popup_blid_sat_info2_window_t2

0x000a,

0xf52c,	// (0x00051313) popup_blid_sat_info2_window_t

0x5ec2,	// (0x00047ca9) aid_size_cell_colour_35

0x5ee2,	// (0x00047cc9) aid_size_cell_colour_112

0x5f02,	// (0x00047ce9) aid_size_cell_effect

0xe42d,	// (0x00050214) bg_tb_trans_pane_cp02

0xcb10,	// (0x0004e8f7) heading_imed_pane

0x5f22,	// (0x00047d09) listscroll_imed_pane

0xeca8,	// (0x00050a8f) heading_imed_pane_g1

0xecb0,	// (0x00050a97) heading_imed_pane_t1

0xecbe,	// (0x00050aa5) grid_imed_colour_35_pane_ParamLimits

0xecbe,	// (0x00050aa5) grid_imed_colour_35_pane

0x5f2e,	// (0x00047d15) grid_imed_effect_pane

0xecd9,	// (0x00050ac0) list_imed_aspect_pane

0x5f43,	// (0x00047d2a) scroll_pane_cp027_ParamLimits

0x5f43,	// (0x00047d2a) scroll_pane_cp027

0x5f54,	// (0x00047d3b) cell_imed_effect_pane_ParamLimits

0x5f54,	// (0x00047d3b) cell_imed_effect_pane

0xece1,	// (0x00050ac8) cell_imed_colour_pane_ParamLimits

0xece1,	// (0x00050ac8) cell_imed_colour_pane

0xed23,	// (0x00050b0a) cell_imed_colour_pane_g1_ParamLimits

0xed23,	// (0x00050b0a) cell_imed_colour_pane_g1

0xed34,	// (0x00050b1b) hgihlgiht_grid_pane_cp016_ParamLimits

0xed34,	// (0x00050b1b) hgihlgiht_grid_pane_cp016

0x5f7b,	// (0x00047d62) cell_imed_effect_pane_g1

0x5f83,	// (0x00047d6a) grid_highlight_pane_cp017

0xd8d5,	// (0x0004f6bc) list_imed_single_pane_ParamLimits

0xd8d5,	// (0x0004f6bc) list_imed_single_pane

0xa6dd,	// (0x0004c4c4) list_highlight_pane_cp07

0xed45,	// (0x00050b2c) list_imed_aspect_pane_comp1_t1

0xe42d,	// (0x00050214) bg_tb_trans_pane_cp05

0xed67,	// (0x00050b4e) popup_imed_adjust2_window_g1

0xed8e,	// (0x00050b75) popup_imed_adjust2_window_t1

0xeda6,	// (0x00050b8d) slider_imed_adjust_pane

0xedba,	// (0x00050ba1) slider_imed_adjust_pane_g1

0xedca,	// (0x00050bb1) slider_imed_adjust_pane_g2

0xedda,	// (0x00050bc1) slider_imed_adjust_pane_g3

0xedeb,	// (0x00050bd2) slider_imed_adjust_pane_g4

0x0003,

0x0664,	// (0x0004244b) slider_imed_adjust_pane_g

0x5f8c,	// (0x00047d73) aid_size_cell_clipart2

0x5f98,	// (0x00047d7f) grid_imed_clipart_pane

0xedfc,	// (0x00050be3) scroll_pane_cp031

0x5fa2,	// (0x00047d89) cell_imed_clipart_pane_ParamLimits

0x5fa2,	// (0x00047d89) cell_imed_clipart_pane

0x5fc9,	// (0x00047db0) cell_imed_clipart_pane_g1

0xa6dd,	// (0x0004c4c4) grid_highlight_pane_cp014

0x5c93,	// (0x00047a7a) main_clock2_pane_g1_ParamLimits

0x5c93,	// (0x00047a7a) main_clock2_pane_g1

0x5dc3,	// (0x00047baa) aid_call2_pane_cp10

0x5dd5,	// (0x00047bbc) aid_call_pane_cp10

0xcf15,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g1

0xcf15,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g2

0x5de7,	// (0x00047bce) popup_clock_analogue_window_cp10_g3

0x5de7,	// (0x00047bce) popup_clock_analogue_window_cp10_g4

0xcf15,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf5f0,	// (0x000513d7) popup_clock_analogue_window_cp10_g

0x5df9,	// (0x00047be0) popup_clock_analogue_window_cp10_t1

0x5e2a,	// (0x00047c11) clock_digital_number_pane_cp10_ParamLimits

0x5e2a,	// (0x00047c11) clock_digital_number_pane_cp10

0x5e42,	// (0x00047c29) clock_digital_number_pane_cp11_ParamLimits

0x5e42,	// (0x00047c29) clock_digital_number_pane_cp11

0x5e5a,	// (0x00047c41) clock_digital_number_pane_cp12_ParamLimits

0x5e5a,	// (0x00047c41) clock_digital_number_pane_cp12

0x5e72,	// (0x00047c59) clock_digital_number_pane_cp13_ParamLimits

0x5e72,	// (0x00047c59) clock_digital_number_pane_cp13

0x5e8a,	// (0x00047c71) clock_digital_separator_pane_cp10_ParamLimits

0x5e8a,	// (0x00047c71) clock_digital_separator_pane_cp10

0x5ea2,	// (0x00047c89) popup_clock_digital_window_cp02_t1_ParamLimits

0x5ea2,	// (0x00047c89) popup_clock_digital_window_cp02_t1

0xc441,	// (0x0004e228) clock_digital_number_pane_cp10_g1

0xc441,	// (0x0004e228) clock_digital_number_pane_cp10_g2

0x0001,

0x066d,	// (0x00042454) clock_digital_number_pane_cp10_g

0xc441,	// (0x0004e228) clock_digital_separator_pane_cp10_g1

0xc441,	// (0x0004e228) clock_digital_separator_pane_g2_cp10

0xcfb0,	// (0x0004ed97) navi_pane_vded_g4

0xcfb9,	// (0x0004eda0) navi_pane_vded_g5

0xcfc2,	// (0x0004eda9) navi_pane_vded_t1

0xa6dd,	// (0x0004c4c4) main_vded_pane

0x5fd2,	// (0x00047db9) main_vded_pane_g1

0x5fde,	// (0x00047dc5) main_vded_pane_g2

0x5fe8,	// (0x00047dcf) main_vded_pane_g3

0x0002,

0xf5fb,	// (0x000513e2) main_vded_pane_g

0x5ff2,	// (0x00047dd9) main_vded_pane_t1

0x6000,	// (0x00047de7) main_vded_pane_t2

0x0001,

0xf602,	// (0x000513e9) main_vded_pane_t

0x600e,	// (0x00047df5) vded_slider_pane

0x6018,	// (0x00047dff) vded_video_pane

0xee04,	// (0x00050beb) vded_video_pane_g1

0x6022,	// (0x00047e09) vded_video_pane_g2

0xe87e,	// (0x00050665) vded_video_pane_g3

0x0002,

0xf607,	// (0x000513ee) vded_video_pane_g

0xee0e,	// (0x00050bf5) vded_slider_pane_g1

0xe5c7,	// (0x000503ae) vded_slider_pane_g2

0xee17,	// (0x00050bfe) vded_slider_pane_g3

0xee20,	// (0x00050c07) vded_slider_pane_g4

0xee29,	// (0x00050c10) vded_slider_pane_g5

0x0004,

0x0685,	// (0x0004246c) vded_slider_pane_g

0x5a2b,	// (0x00047812) mup3_rocker_pane_ParamLimits

0x5a2b,	// (0x00047812) mup3_rocker_pane

0x602b,	// (0x00047e12) mup3_control_keys_pane_g1

0x6033,	// (0x00047e1a) mup3_control_keys_pane_g2

0x603b,	// (0x00047e22) mup3_control_keys_pane_g3

0x6043,	// (0x00047e2a) mup3_control_keys_pane_g4

0x0003,

0xf60e,	// (0x000513f5) mup3_control_keys_pane_g

0x1a37,	// (0x0004381e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a37,	// (0x0004381e) popup_toolbar2_fixed_window_cp01

0x5a5f,	// (0x00047846) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5a5f,	// (0x00047846) popup_toolbar2_fixed_window_cp02

0xd767,	// (0x0004f54e) popup_call2_audio_second_window_t4_ParamLimits

0xd767,	// (0x0004f54e) popup_call2_audio_second_window_t4

0xdcdb,	// (0x0004fac2) popup_call2_audio_first_window_t6_ParamLimits

0xdcdb,	// (0x0004fac2) popup_call2_audio_first_window_t6

0xdf71,	// (0x0004fd58) popup_call2_audio_out_window_t6_ParamLimits

0xdf71,	// (0x0004fd58) popup_call2_audio_out_window_t6

0xa6dd,	// (0x0004c4c4) main_vitu_pane

0x6053,	// (0x00047e3a) aid_size_cell_itu_ParamLimits

0x6053,	// (0x00047e3a) aid_size_cell_itu

0xd8c7,	// (0x0004f6ae) bg_popup_window_pane_cp08_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_popup_window_pane_cp08

0x6069,	// (0x00047e50) field_vitu_entry_pane_ParamLimits

0x6069,	// (0x00047e50) field_vitu_entry_pane

0x6080,	// (0x00047e67) grid_vitu_function_pane_ParamLimits

0x6080,	// (0x00047e67) grid_vitu_function_pane

0x609b,	// (0x00047e82) grid_vitu_itu_pane_ParamLimits

0x609b,	// (0x00047e82) grid_vitu_itu_pane

0x60b9,	// (0x00047ea0) cell_vitu_itu_pane_ParamLimits

0x60b9,	// (0x00047ea0) cell_vitu_itu_pane

0x60dd,	// (0x00047ec4) cell_vitu_function_pane_ParamLimits

0x60dd,	// (0x00047ec4) cell_vitu_function_pane

0xd8c7,	// (0x0004f6ae) bg_popup_sub_pane_cp08_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_popup_sub_pane_cp08

0x60f8,	// (0x00047edf) field_vitu_entry_pane_t1_ParamLimits

0x60f8,	// (0x00047edf) field_vitu_entry_pane_t1

0xee4a,	// (0x00050c31) field_vitu_entry_pane_t2_ParamLimits

0xee4a,	// (0x00050c31) field_vitu_entry_pane_t2

0x0001,

0xf617,	// (0x000513fe) field_vitu_entry_pane_t_ParamLimits

0xf617,	// (0x000513fe) field_vitu_entry_pane_t

0xee67,	// (0x00050c4e) bg_button_pane_cp05_ParamLimits

0xee67,	// (0x00050c4e) bg_button_pane_cp05

0x6118,	// (0x00047eff) cell_vitu_itu_pane_g1

0x6130,	// (0x00047f17) cell_vitu_itu_pane_t1_ParamLimits

0x6130,	// (0x00047f17) cell_vitu_itu_pane_t1

0x6142,	// (0x00047f29) cell_vitu_itu_pane_t2_ParamLimits

0x6142,	// (0x00047f29) cell_vitu_itu_pane_t2

0x0002,

0xf61c,	// (0x00051403) cell_vitu_itu_pane_t_ParamLimits

0xf61c,	// (0x00051403) cell_vitu_itu_pane_t

0xee75,	// (0x00050c5c) bg_button_pane_cp07

0x6177,	// (0x00047f5e) cell_vitu_function_pane_g1

0xa737,	// (0x0004c51e) main_calc_pane_g1

0x1877,	// (0x0004365e) aid_visual_content_pane

0xa6dd,	// (0x0004c4c4) main_vradio_pane

0x6180,	// (0x00047f67) main_vradio_pane_g1_ParamLimits

0x6180,	// (0x00047f67) main_vradio_pane_g1

0xee7f,	// (0x00050c66) main_vradio_pane_g2_ParamLimits

0xee7f,	// (0x00050c66) main_vradio_pane_g2

0x0001,

0xf623,	// (0x0005140a) main_vradio_pane_g_ParamLimits

0xf623,	// (0x0005140a) main_vradio_pane_g

0x6199,	// (0x00047f80) main_vradio_pane_t1_ParamLimits

0x6199,	// (0x00047f80) main_vradio_pane_t1

0x61ae,	// (0x00047f95) main_vradio_pane_t2_ParamLimits

0x61ae,	// (0x00047f95) main_vradio_pane_t2

0xee8c,	// (0x00050c73) main_vradio_pane_t3_ParamLimits

0xee8c,	// (0x00050c73) main_vradio_pane_t3

0x0002,

0xf628,	// (0x0005140f) main_vradio_pane_t_ParamLimits

0xf628,	// (0x0005140f) main_vradio_pane_t

0x61c3,	// (0x00047faa) vradio_rocker_control_pane_ParamLimits

0x61c3,	// (0x00047faa) vradio_rocker_control_pane

0x61d5,	// (0x00047fbc) vradio_station_info_pane_ParamLimits

0x61d5,	// (0x00047fbc) vradio_station_info_pane

0xeea0,	// (0x00050c87) vradio_frequency_info_pane_ParamLimits

0xeea0,	// (0x00050c87) vradio_frequency_info_pane

0xe87e,	// (0x00050665) vradio_station_info_pane_g1

0xeeaf,	// (0x00050c96) vradio_station_info_pane_t1_ParamLimits

0xeeaf,	// (0x00050c96) vradio_station_info_pane_t1

0xeed1,	// (0x00050cb8) vradio_station_info_pane_t2_ParamLimits

0xeed1,	// (0x00050cb8) vradio_station_info_pane_t2

0x0001,

0x06b6,	// (0x0004249d) vradio_station_info_pane_t_ParamLimits

0x06b6,	// (0x0004249d) vradio_station_info_pane_t

0xeee3,	// (0x00050cca) vradio_tuning_pane

0xeeeb,	// (0x00050cd2) vradio_rocker_control_pane_g1

0xeef3,	// (0x00050cda) vradio_rocker_control_pane_g2

0xeefb,	// (0x00050ce2) vradio_rocker_control_pane_g3

0xef03,	// (0x00050cea) vradio_rocker_control_pane_g4

0xef0b,	// (0x00050cf2) vradio_rocker_control_pane_g5

0x0004,

0x06bb,	// (0x000424a2) vradio_rocker_control_pane_g

0x61e7,	// (0x00047fce) vradio_frequency_info_pane_g1

0xef13,	// (0x00050cfa) vradio_frequency_info_pane_t1_ParamLimits

0xef13,	// (0x00050cfa) vradio_frequency_info_pane_t1

0x61f1,	// (0x00047fd8) vradio_tuning_pane_g1

0x61fc,	// (0x00047fe3) vradio_tuning_pane_t1

0xa713,	// (0x0004c4fa) area_side_right_pane_ParamLimits

0xa713,	// (0x0004c4fa) area_side_right_pane

0xe3f4,	// (0x000501db) status_small_pane_g1

0xe3fc,	// (0x000501e3) status_small_pane_g2

0xe405,	// (0x000501ec) status_small_pane_g3

0xe40e,	// (0x000501f5) status_small_pane_g4

0x0003,

0x047b,	// (0x00042262) status_small_pane_g

0xe417,	// (0x000501fe) status_small_pane_t1

0xa6dd,	// (0x0004c4c4) main_video3_pane

0xef27,	// (0x00050d0e) cams_zoom_vslider_pane

0xef2f,	// (0x00050d16) image3_wide_pane_ParamLimits

0xef2f,	// (0x00050d16) image3_wide_pane

0xef49,	// (0x00050d30) image3_wide_small_pane

0xef55,	// (0x00050d3c) main_video3_pane_g1_ParamLimits

0xef55,	// (0x00050d3c) main_video3_pane_g1

0xef71,	// (0x00050d58) main_video3_pane_g2_ParamLimits

0xef71,	// (0x00050d58) main_video3_pane_g2

0x0001,

0x06c6,	// (0x000424ad) main_video3_pane_g_ParamLimits

0x06c6,	// (0x000424ad) main_video3_pane_g

0xef8d,	// (0x00050d74) main_video3_pane_t1_ParamLimits

0xef8d,	// (0x00050d74) main_video3_pane_t1

0xefb8,	// (0x00050d9f) main_video3_pane_t2_ParamLimits

0xefb8,	// (0x00050d9f) main_video3_pane_t2

0xefe3,	// (0x00050dca) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x00050dca) main_video3_pane_t3

0x0002,

0x06cb,	// (0x000424b2) main_video3_pane_t_ParamLimits

0x06cb,	// (0x000424b2) main_video3_pane_t

0xf010,	// (0x00050df7) cams_zoom_vslider_pane_g1

0xf019,	// (0x00050e00) cams_zoom_vslider_pane_g2

0x0001,

0x06d2,	// (0x000424b9) cams_zoom_vslider_pane_g

0xf021,	// (0x00050e08) small_slider_vertical_pane

0xe87e,	// (0x00050665) small_slider_vertical_pane_g1

0xe87e,	// (0x00050665) small_slider_vertical_pane_g2

0xf029,	// (0x00050e10) small_slider_vertical_pane_g3

0x0002,

0x06d7,	// (0x000424be) small_slider_vertical_pane_g

0xa6dd,	// (0x0004c4c4) main_hwr_training_pane

0xf032,	// (0x00050e19) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x00050e19) hwr_training_instruct_pane

0x620b,	// (0x00047ff2) hwr_training_navi_pane_ParamLimits

0x620b,	// (0x00047ff2) hwr_training_navi_pane

0x622a,	// (0x00048011) hwr_training_write_pane_ParamLimits

0x622a,	// (0x00048011) hwr_training_write_pane

0xa6dd,	// (0x0004c4c4) bg_frame_shadow_pane

0xf069,	// (0x00050e50) hwr_training_write_pane_g1

0xf071,	// (0x00050e58) hwr_training_write_pane_g2

0xf079,	// (0x00050e60) hwr_training_write_pane_g3

0xf081,	// (0x00050e68) hwr_training_write_pane_g4

0xf089,	// (0x00050e70) hwr_training_write_pane_g5

0xf091,	// (0x00050e78) hwr_training_write_pane_g6

0xf099,	// (0x00050e80) hwr_training_write_pane_g7

0x0006,

0x06de,	// (0x000424c5) hwr_training_write_pane_g

0xab80,	// (0x0004c967) hwr_training_navi_pane_g1_ParamLimits

0xab80,	// (0x0004c967) hwr_training_navi_pane_g1

0xab92,	// (0x0004c979) hwr_training_navi_pane_g2_ParamLimits

0xab92,	// (0x0004c979) hwr_training_navi_pane_g2

0xaba4,	// (0x0004c98b) hwr_training_navi_pane_g3_ParamLimits

0xaba4,	// (0x0004c98b) hwr_training_navi_pane_g3

0xabb4,	// (0x0004c99b) hwr_training_navi_pane_g4_ParamLimits

0xabb4,	// (0x0004c99b) hwr_training_navi_pane_g4

0x0004,

0xf62f,	// (0x00051416) hwr_training_navi_pane_g_ParamLimits

0xf62f,	// (0x00051416) hwr_training_navi_pane_g

0xabc1,	// (0x0004c9a8) hwr_training_navi_pane_t1

0x6274,	// (0x0004805b) list_single_hwr_training_instruct_pane_ParamLimits

0x6274,	// (0x0004805b) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x00050e88) list_single_hwr_training_instruct_pane_t1

0xe7be,	// (0x000505a5) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00050e97) bg_frame_shadow_pane_g2

0xf0b8,	// (0x00050e9f) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00050ea7) bg_frame_shadow_pane_g4

0xf0c8,	// (0x00050eaf) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00050eb7) bg_frame_shadow_pane_g6

0xf0d8,	// (0x00050ebf) bg_frame_shadow_pane_g7

0xc623,	// (0x0004e40a) bg_frame_shadow_pane_g8

0x0007,

0x06f8,	// (0x000424df) bg_frame_shadow_pane_g

0xa6dd,	// (0x0004c4c4) main_video_tele_dialer_pane

0x6291,	// (0x00048078) aid_size_cell_video_keypad_ParamLimits

0x6291,	// (0x00048078) aid_size_cell_video_keypad

0x62ab,	// (0x00048092) grid_video_dialer_keypad_pane_ParamLimits

0x62ab,	// (0x00048092) grid_video_dialer_keypad_pane

0x62f7,	// (0x000480de) video_down_pane_cp_ParamLimits

0x62f7,	// (0x000480de) video_down_pane_cp

0x6327,	// (0x0004810e) cell_video_dialer_keypad_pane_ParamLimits

0x6327,	// (0x0004810e) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00050ec7) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00050ec7) bg_button_pane_cp08

0x6349,	// (0x00048130) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6349,	// (0x00048130) cell_video_dialer_keypad_pane_g1

0x5a15,	// (0x000477fc) mup3_rocker2_pane_ParamLimits

0x5a15,	// (0x000477fc) mup3_rocker2_pane

0xe87e,	// (0x00050665) mup3_rocker2_pane_g1

0x45a5,	// (0x0004638c) main_dialer2_pane

0xa6dd,	// (0x0004c4c4) main_mp4_pane

0xabd7,	// (0x0004c9be) main_mp4_pane_g1_ParamLimits

0xabd7,	// (0x0004c9be) main_mp4_pane_g1

0xabd7,	// (0x0004c9be) main_mp4_pane_g2_ParamLimits

0xabd7,	// (0x0004c9be) main_mp4_pane_g2

0x6384,	// (0x0004816b) main_mp4_pane_g3_ParamLimits

0x6384,	// (0x0004816b) main_mp4_pane_g3

0xabe5,	// (0x0004c9cc) main_mp4_pane_g4_ParamLimits

0xabe5,	// (0x0004c9cc) main_mp4_pane_g4

0xac0d,	// (0x0004c9f4) main_mp4_pane_g5_ParamLimits

0xac0d,	// (0x0004c9f4) main_mp4_pane_g5

0x0005,

0xf649,	// (0x00051430) main_mp4_pane_g_ParamLimits

0xf649,	// (0x00051430) main_mp4_pane_g

0xac5d,	// (0x0004ca44) main_mp4_pane_t1_ParamLimits

0xac5d,	// (0x0004ca44) main_mp4_pane_t1

0xacb9,	// (0x0004caa0) main_mp4_pane_t2_ParamLimits

0xacb9,	// (0x0004caa0) main_mp4_pane_t2

0x63c0,	// (0x000481a7) main_mp4_pane_t3_ParamLimits

0x63c0,	// (0x000481a7) main_mp4_pane_t3

0xad0b,	// (0x0004caf2) main_mp4_pane_t4_ParamLimits

0xad0b,	// (0x0004caf2) main_mp4_pane_t4

0x0003,

0xf656,	// (0x0005143d) main_mp4_pane_t_ParamLimits

0xf656,	// (0x0005143d) main_mp4_pane_t

0xad4f,	// (0x0004cb36) mp4_progress_pane_ParamLimits

0xad4f,	// (0x0004cb36) mp4_progress_pane

0xad99,	// (0x0004cb80) mp4_rocker_pane_ParamLimits

0xad99,	// (0x0004cb80) mp4_rocker_pane

0x63e8,	// (0x000481cf) mp4_progress_pane_t1

0x6401,	// (0x000481e8) mp4_progress_pane_t2

0x0001,

0xf65f,	// (0x00051446) mp4_progress_pane_t

0x641a,	// (0x00048201) mup_progress_pane_cp04

0xe87e,	// (0x00050665) mp4_rocker_pane_g1

0x6426,	// (0x0004820d) aid_cell_size_keypad2_ParamLimits

0x6426,	// (0x0004820d) aid_cell_size_keypad2

0x643c,	// (0x00048223) dialer2_ne_pane_ParamLimits

0x643c,	// (0x00048223) dialer2_ne_pane

0x6456,	// (0x0004823d) grid_dialer2_keypad_pane_ParamLimits

0x6456,	// (0x0004823d) grid_dialer2_keypad_pane

0xe659,	// (0x00050440) bg_popup_call_pane_cp07_ParamLimits

0xe659,	// (0x00050440) bg_popup_call_pane_cp07

0x6474,	// (0x0004825b) dialer2_ne_pane_t1_ParamLimits

0x6474,	// (0x0004825b) dialer2_ne_pane_t1

0x64c5,	// (0x000482ac) cell_dialer2_keypad_pane_ParamLimits

0x64c5,	// (0x000482ac) cell_dialer2_keypad_pane

0x64e9,	// (0x000482d0) bg_button_pane_pane_cp04_ParamLimits

0x64e9,	// (0x000482d0) bg_button_pane_pane_cp04

0x64f5,	// (0x000482dc) cell_dialer2_keypad_pane_g1_ParamLimits

0x64f5,	// (0x000482dc) cell_dialer2_keypad_pane_g1

0x25bc,	// (0x000443a3) aid_placing_vt_set_content_ParamLimits

0x25bc,	// (0x000443a3) aid_placing_vt_set_content

0x25e4,	// (0x000443cb) aid_placing_vt_set_title_ParamLimits

0x25e4,	// (0x000443cb) aid_placing_vt_set_title

0xa6dd,	// (0x0004c4c4) main_image3_pane

0x65bb,	// (0x000483a2) area_side_right_pane_cp01_ParamLimits

0x65bb,	// (0x000483a2) area_side_right_pane_cp01

0xabd7,	// (0x0004c9be) main_image3_pane_g1_ParamLimits

0xabd7,	// (0x0004c9be) main_image3_pane_g1

0x65d2,	// (0x000483b9) main_image3_pane_g2_ParamLimits

0x65d2,	// (0x000483b9) main_image3_pane_g2

0x65fa,	// (0x000483e1) main_image3_pane_g3_ParamLimits

0x65fa,	// (0x000483e1) main_image3_pane_g3

0x6624,	// (0x0004840b) main_image3_pane_g4_ParamLimits

0x6624,	// (0x0004840b) main_image3_pane_g4

0x0003,

0xf66e,	// (0x00051455) main_image3_pane_g_ParamLimits

0xf66e,	// (0x00051455) main_image3_pane_g

0x664e,	// (0x00048435) main_image3_pane_t1_ParamLimits

0x664e,	// (0x00048435) main_image3_pane_t1

0x66a6,	// (0x0004848d) main_image3_pane_t2_ParamLimits

0x66a6,	// (0x0004848d) main_image3_pane_t2

0x66f8,	// (0x000484df) main_image3_pane_t3_ParamLimits

0x66f8,	// (0x000484df) main_image3_pane_t3

0x0003,

0xf677,	// (0x0005145e) main_image3_pane_t_ParamLimits

0xf677,	// (0x0005145e) main_image3_pane_t

0xd8c7,	// (0x0004f6ae) grid_sctrl_middle_pane_cp01_ParamLimits

0xd8c7,	// (0x0004f6ae) grid_sctrl_middle_pane_cp01

0x6780,	// (0x00048567) cell_sctrl_middle_pane_cp01_ParamLimits

0x6780,	// (0x00048567) cell_sctrl_middle_pane_cp01

0x679d,	// (0x00048584) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x679d,	// (0x00048584) cell_sctrl_middle_pane_cp01_g1

0xa6dd,	// (0x0004c4c4) main_call4_pane

0x67b3,	// (0x0004859a) aid_size_button_call4_ParamLimits

0x67b3,	// (0x0004859a) aid_size_button_call4

0x67e4,	// (0x000485cb) call4_windows_pane_ParamLimits

0x67e4,	// (0x000485cb) call4_windows_pane

0x6804,	// (0x000485eb) grid_call4_button_pane_ParamLimits

0x6804,	// (0x000485eb) grid_call4_button_pane

0x6831,	// (0x00048618) call4_windows_conf_pane

0x6846,	// (0x0004862d) popup_call4_audio_first_window_ParamLimits

0x6846,	// (0x0004862d) popup_call4_audio_first_window

0x6892,	// (0x00048679) popup_call4_audio_second_window_ParamLimits

0x6892,	// (0x00048679) popup_call4_audio_second_window

0x68a6,	// (0x0004868d) popup_call4_audio_wait_window_ParamLimits

0x68a6,	// (0x0004868d) popup_call4_audio_wait_window

0x68b4,	// (0x0004869b) cell_call4_button_pane_ParamLimits

0x68b4,	// (0x0004869b) cell_call4_button_pane

0x68dd,	// (0x000486c4) bg_button_pane_cp09_ParamLimits

0x68dd,	// (0x000486c4) bg_button_pane_cp09

0x68e9,	// (0x000486d0) cell_call4_button_pane_g1_ParamLimits

0x68e9,	// (0x000486d0) cell_call4_button_pane_g1

0x690f,	// (0x000486f6) cell_call4_button_pane_t1_ParamLimits

0x690f,	// (0x000486f6) cell_call4_button_pane_t1

0x6973,	// (0x0004875a) popup_call4_audio_conf_window_ParamLimits

0x6973,	// (0x0004875a) popup_call4_audio_conf_window

0x5a75,	// (0x0004785c) mup3_progress_pane_t1_ParamLimits

0x5a8c,	// (0x00047873) mup3_progress_pane_t2_ParamLimits

0xeb60,	// (0x00050947) mup3_progress_pane_t3_ParamLimits

0xf5c9,	// (0x000513b0) mup3_progress_pane_t_ParamLimits

0xeb77,	// (0x0005095e) mup_progress_pane_cp03_ParamLimits

0x604b,	// (0x00047e32) mup3_control_keys_pane_g4_copy1

0xad7d,	// (0x0004cb64) mp4_rocker2_pane_ParamLimits

0xad7d,	// (0x0004cb64) mp4_rocker2_pane

0x6987,	// (0x0004876e) mp4_rocker2_pane_g1

0x698f,	// (0x00048776) mp4_rocker2_pane_g2

0xadeb,	// (0x0004cbd2) mp4_rocker2_pane_g3

0xadf3,	// (0x0004cbda) mp4_rocker2_pane_g4

0xadfb,	// (0x0004cbe2) mp4_rocker2_pane_g5

0x0004,

0xf680,	// (0x00051467) mp4_rocker2_pane_g

0xa6dd,	// (0x0004c4c4) main_camera4_pane

0xa6dd,	// (0x0004c4c4) main_video4_pane

0x62c5,	// (0x000480ac) main_video_tele_dialer_pane_t1_ParamLimits

0x62c5,	// (0x000480ac) main_video_tele_dialer_pane_t1

0x62de,	// (0x000480c5) main_video_tele_dialer_pane_t2_ParamLimits

0x62de,	// (0x000480c5) main_video_tele_dialer_pane_t2

0x0001,

0xf63a,	// (0x00051421) main_video_tele_dialer_pane_t_ParamLimits

0xf63a,	// (0x00051421) main_video_tele_dialer_pane_t

0x69af,	// (0x00048796) cam4_autofocus_pane_ParamLimits

0x69af,	// (0x00048796) cam4_autofocus_pane

0x69c5,	// (0x000487ac) cam4_image_uncrop_pane_ParamLimits

0x69c5,	// (0x000487ac) cam4_image_uncrop_pane

0x69df,	// (0x000487c6) cam4_indicators_pane_ParamLimits

0x69df,	// (0x000487c6) cam4_indicators_pane

0x6a0a,	// (0x000487f1) main_camera4_pane_g1_ParamLimits

0x6a0a,	// (0x000487f1) main_camera4_pane_g1

0x6a1d,	// (0x00048804) main_camera4_pane_g2_ParamLimits

0x6a1d,	// (0x00048804) main_camera4_pane_g2

0x6a30,	// (0x00048817) main_camera4_pane_g3_ParamLimits

0x6a30,	// (0x00048817) main_camera4_pane_g3

0x6a43,	// (0x0004882a) main_camera4_pane_g4_ParamLimits

0x6a43,	// (0x0004882a) main_camera4_pane_g4

0x6a56,	// (0x0004883d) main_camera4_pane_g5_ParamLimits

0x6a56,	// (0x0004883d) main_camera4_pane_g5

0x0005,

0xf68b,	// (0x00051472) main_camera4_pane_g_ParamLimits

0xf68b,	// (0x00051472) main_camera4_pane_g

0x6a7a,	// (0x00048861) main_camera4_pane_t1_ParamLimits

0x6a7a,	// (0x00048861) main_camera4_pane_t1

0xeae5,	// (0x000508cc) bg_tb_trans_pane_cp06

0xae27,	// (0x0004cc0e) cam4_indicators_pane_g1

0xae38,	// (0x0004cc1f) cam4_indicators_pane_g2

0x0002,

0xf6a6,	// (0x0005148d) cam4_indicators_pane_g

0xae56,	// (0x0004cc3d) cam4_indicators_pane_t1

0x6af0,	// (0x000488d7) main_video4_pane_g1_ParamLimits

0x6af0,	// (0x000488d7) main_video4_pane_g1

0x6b03,	// (0x000488ea) main_video4_pane_g2_ParamLimits

0x6b03,	// (0x000488ea) main_video4_pane_g2

0x6b17,	// (0x000488fe) main_video4_pane_g3_ParamLimits

0x6b17,	// (0x000488fe) main_video4_pane_g3

0x6b2b,	// (0x00048912) main_video4_pane_g4_ParamLimits

0x6b2b,	// (0x00048912) main_video4_pane_g4

0x0004,

0xf6ad,	// (0x00051494) main_video4_pane_g_ParamLimits

0xf6ad,	// (0x00051494) main_video4_pane_g

0x6b53,	// (0x0004893a) vid4_indicators_pane_ParamLimits

0x6b53,	// (0x0004893a) vid4_indicators_pane

0x6b85,	// (0x0004896c) video4_image_uncrop_cif_pane_ParamLimits

0x6b85,	// (0x0004896c) video4_image_uncrop_cif_pane

0x6b9f,	// (0x00048986) video4_image_uncrop_nhd_pane_ParamLimits

0x6b9f,	// (0x00048986) video4_image_uncrop_nhd_pane

0x69c5,	// (0x000487ac) video4_image_uncrop_vga_pane_ParamLimits

0x69c5,	// (0x000487ac) video4_image_uncrop_vga_pane

0xae78,	// (0x0004cc5f) bg_tb_trans_pane_cp07

0x6bb3,	// (0x0004899a) vid4_indicators_pane_g1

0x6bc0,	// (0x000489a7) vid4_indicators_pane_g2

0x6bcd,	// (0x000489b4) vid4_indicators_pane_g3

0x0004,

0xf6b8,	// (0x0005149f) vid4_indicators_pane_g

0x6bf2,	// (0x000489d9) vid4_indicators_pane_t1

0x6c04,	// (0x000489eb) cam4_autofocus_pane_g1

0x6c0c,	// (0x000489f3) cam4_autofocus_pane_g2

0x6c14,	// (0x000489fb) cam4_autofocus_pane_g3

0x0002,

0xf6c3,	// (0x000514aa) cam4_autofocus_pane_g

0x6c1c,	// (0x00048a03) cam4_autofocus_pane_g3_copy1

0x630b,	// (0x000480f2) video_down_pane_cp_t1

0x6319,	// (0x00048100) video_down_pane_cp_t2

0x0001,

0xf63f,	// (0x00051426) video_down_pane_cp_t

0xd8c7,	// (0x0004f6ae) popup_vitu2_window_ParamLimits

0xd8c7,	// (0x0004f6ae) popup_vitu2_window

0x6c24,	// (0x00048a0b) aid_size_cell2_itu2_ParamLimits

0x6c24,	// (0x00048a0b) aid_size_cell2_itu2

0x6c4a,	// (0x00048a31) aid_size_cell_itu2_ParamLimits

0x6c4a,	// (0x00048a31) aid_size_cell_itu2

0x6ca6,	// (0x00048a8d) bg_popup_window_pane_cp09_ParamLimits

0x6ca6,	// (0x00048a8d) bg_popup_window_pane_cp09

0x6cb4,	// (0x00048a9b) field_vitu2_entry_pane_ParamLimits

0x6cb4,	// (0x00048a9b) field_vitu2_entry_pane

0x6cda,	// (0x00048ac1) grid_vitu2_function_pane_ParamLimits

0x6cda,	// (0x00048ac1) grid_vitu2_function_pane

0x6d2b,	// (0x00048b12) grid_vitu2_itu_pane_ParamLimits

0x6d2b,	// (0x00048b12) grid_vitu2_itu_pane

0x6dbc,	// (0x00048ba3) cell_vitu2_itu_pane_ParamLimits

0x6dbc,	// (0x00048ba3) cell_vitu2_itu_pane

0x6de0,	// (0x00048bc7) cell_vitu2_function_pane_ParamLimits

0x6de0,	// (0x00048bc7) cell_vitu2_function_pane

0x6e1f,	// (0x00048c06) bg_popup_call_pane_cp08_ParamLimits

0x6e1f,	// (0x00048c06) bg_popup_call_pane_cp08

0x6e38,	// (0x00048c1f) field_vitu2_entry_pane_g1

0x6e44,	// (0x00048c2b) field_vitu2_entry_pane_g2

0x0002,

0xf6ca,	// (0x000514b1) field_vitu2_entry_pane_g

0xae8e,	// (0x0004cc75) field_vitu2_entry_pane_t1_ParamLimits

0xae8e,	// (0x0004cc75) field_vitu2_entry_pane_t1

0xaec0,	// (0x0004cca7) field_vitu2_entry_pane_t2_ParamLimits

0xaec0,	// (0x0004cca7) field_vitu2_entry_pane_t2

0x0001,

0xf6d1,	// (0x000514b8) field_vitu2_entry_pane_t_ParamLimits

0xf6d1,	// (0x000514b8) field_vitu2_entry_pane_t

0x6e66,	// (0x00048c4d) bg_button_pane_cp010_ParamLimits

0x6e66,	// (0x00048c4d) bg_button_pane_cp010

0x6e74,	// (0x00048c5b) cell_vitu2_itu_pane_g1

0x6e92,	// (0x00048c79) cell_vitu2_itu_pane_t1_ParamLimits

0x6e92,	// (0x00048c79) cell_vitu2_itu_pane_t1

0x0f3f,	// (0x00042d26) cell_vitu2_itu_pane_t2_ParamLimits

0x0f3f,	// (0x00042d26) cell_vitu2_itu_pane_t2

0x0002,

0xf6db,	// (0x000514c2) cell_vitu2_itu_pane_t_ParamLimits

0xf6db,	// (0x000514c2) cell_vitu2_itu_pane_t

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp011

0x6ef8,	// (0x00048cdf) cell_vitu2_function_pane_g1

0xa6dd,	// (0x0004c4c4) main_myfav_hc_pane

0x6748,	// (0x0004852f) popup_image3_note_pane_ParamLimits

0x6748,	// (0x0004852f) popup_image3_note_pane

0x6764,	// (0x0004854b) popup_image3_tool_bar_pane_ParamLimits

0x6764,	// (0x0004854b) popup_image3_tool_bar_pane

0x0fc3,	// (0x00042daa) cell_vitu2_itu_pane_t3_ParamLimits

0x0fc3,	// (0x00042daa) cell_vitu2_itu_pane_t3

0xa6dd,	// (0x0004c4c4) bg_popup_trans_pane

0x6f0c,	// (0x00048cf3) grid_image3_tool_bar_pane

0x6f16,	// (0x00048cfd) bg_popup_trans_pane_g1

0xc968,	// (0x0004e74f) bg_popup_trans_pane_g2

0x6f1e,	// (0x00048d05) bg_popup_trans_pane_g3

0x6f26,	// (0x00048d0d) bg_popup_trans_pane_g4

0x6f2e,	// (0x00048d15) bg_popup_trans_pane_g5

0x6f36,	// (0x00048d1d) bg_popup_trans_pane_g6

0x6f3e,	// (0x00048d25) bg_popup_trans_pane_g7

0x6f46,	// (0x00048d2d) bg_popup_trans_pane_g8

0xc948,	// (0x0004e72f) bg_popup_trans_pane_g9

0x0008,

0xf6e2,	// (0x000514c9) bg_popup_trans_pane_g

0x6f4e,	// (0x00048d35) cell_image3_tool_bar_pane_ParamLimits

0x6f4e,	// (0x00048d35) cell_image3_tool_bar_pane

0xe87e,	// (0x00050665) cell_image3_tool_bar_pane_g1

0xa6dd,	// (0x0004c4c4) bg_popup_trans_pane_cp1

0x6f62,	// (0x00048d49) popup_image3_note_pane_t1

0x6f70,	// (0x00048d57) popup_image3_note_pane_t2

0x6f7e,	// (0x00048d65) popup_image3_note_pane_t3

0x0002,

0xf6f5,	// (0x000514dc) popup_image3_note_pane_t

0x6f8c,	// (0x00048d73) popup_image3_note_pane_t3_copy1

0x6f9a,	// (0x00048d81) bg_myfav_hc_instruction_pane_ParamLimits

0x6f9a,	// (0x00048d81) bg_myfav_hc_instruction_pane

0x6fb0,	// (0x00048d97) cell_myfav_contact_pane_ParamLimits

0x6fb0,	// (0x00048d97) cell_myfav_contact_pane

0x6fcc,	// (0x00048db3) cell_myfav_contact_pane_cp1_ParamLimits

0x6fcc,	// (0x00048db3) cell_myfav_contact_pane_cp1

0x6fe4,	// (0x00048dcb) cell_myfav_contact_pane_cp2_ParamLimits

0x6fe4,	// (0x00048dcb) cell_myfav_contact_pane_cp2

0x6ffc,	// (0x00048de3) cell_myfav_contact_pane_cp3_ParamLimits

0x6ffc,	// (0x00048de3) cell_myfav_contact_pane_cp3

0x7013,	// (0x00048dfa) cell_myfav_contact_pane_cp4_ParamLimits

0x7013,	// (0x00048dfa) cell_myfav_contact_pane_cp4

0x702b,	// (0x00048e12) cell_myfav_contact_pane_cp5_ParamLimits

0x702b,	// (0x00048e12) cell_myfav_contact_pane_cp5

0x703f,	// (0x00048e26) cell_myfav_contact_pane_cp6_ParamLimits

0x703f,	// (0x00048e26) cell_myfav_contact_pane_cp6

0x7055,	// (0x00048e3c) cell_myfav_contact_pane_cp7_ParamLimits

0x7055,	// (0x00048e3c) cell_myfav_contact_pane_cp7

0x706f,	// (0x00048e56) listscroll_gen_pane_cp05

0x7078,	// (0x00048e5f) main_myfav_hc_pane_g1_ParamLimits

0x7078,	// (0x00048e5f) main_myfav_hc_pane_g1

0x7092,	// (0x00048e79) main_myfav_hc_pane_g2_ParamLimits

0x7092,	// (0x00048e79) main_myfav_hc_pane_g2

0x0002,

0xf6fc,	// (0x000514e3) main_myfav_hc_pane_g_ParamLimits

0xf6fc,	// (0x000514e3) main_myfav_hc_pane_g

0x70c4,	// (0x00048eab) main_myfav_hc_pane_t1_ParamLimits

0x70c4,	// (0x00048eab) main_myfav_hc_pane_t1

0x70db,	// (0x00048ec2) main_myfav_hc_pane_t2_ParamLimits

0x70db,	// (0x00048ec2) main_myfav_hc_pane_t2

0x70ed,	// (0x00048ed4) main_myfav_hc_pane_t3_ParamLimits

0x70ed,	// (0x00048ed4) main_myfav_hc_pane_t3

0x70ff,	// (0x00048ee6) main_myfav_hc_pane_t4_ParamLimits

0x70ff,	// (0x00048ee6) main_myfav_hc_pane_t4

0x0004,

0xf703,	// (0x000514ea) main_myfav_hc_pane_t_ParamLimits

0xf703,	// (0x000514ea) main_myfav_hc_pane_t

0xe87e,	// (0x00050665) bg_myfav_hc_instruction_pane_g1

0x7127,	// (0x00048f0e) cell_myfav_contact_pane_g1_ParamLimits

0x7127,	// (0x00048f0e) cell_myfav_contact_pane_g1

0x7127,	// (0x00048f0e) cell_myfav_contact_pane_g2_ParamLimits

0x7127,	// (0x00048f0e) cell_myfav_contact_pane_g2

0x7133,	// (0x00048f1a) cell_myfav_contact_pane_g3_ParamLimits

0x7133,	// (0x00048f1a) cell_myfav_contact_pane_g3

0xeb4a,	// (0x00050931) cell_myfav_contact_pane_g4_ParamLimits

0xeb4a,	// (0x00050931) cell_myfav_contact_pane_g4

0x7140,	// (0x00048f27) cell_myfav_contact_pane_g5_ParamLimits

0x7140,	// (0x00048f27) cell_myfav_contact_pane_g5

0x0004,

0xf70e,	// (0x000514f5) cell_myfav_contact_pane_g_ParamLimits

0xf70e,	// (0x000514f5) cell_myfav_contact_pane_g

0x70ac,	// (0x00048e93) main_myfav_hc_pane_g3_ParamLimits

0x70ac,	// (0x00048e93) main_myfav_hc_pane_g3

0x1999,	// (0x00043780) popup_adpt_find_window

0x714c,	// (0x00048f33) afind_page_pane_ParamLimits

0x714c,	// (0x00048f33) afind_page_pane

0x7161,	// (0x00048f48) aid_size_cell_afind_ParamLimits

0x7161,	// (0x00048f48) aid_size_cell_afind

0x717f,	// (0x00048f66) bg_popup_sub_pane_cp09_ParamLimits

0x717f,	// (0x00048f66) bg_popup_sub_pane_cp09

0x718c,	// (0x00048f73) find_pane_cp01_ParamLimits

0x718c,	// (0x00048f73) find_pane_cp01

0x7199,	// (0x00048f80) grid_afind_control_pane_ParamLimits

0x7199,	// (0x00048f80) grid_afind_control_pane

0x71ad,	// (0x00048f94) grid_afind_pane_ParamLimits

0x71ad,	// (0x00048f94) grid_afind_pane

0x71cf,	// (0x00048fb6) cell_afind_pane_ParamLimits

0x71cf,	// (0x00048fb6) cell_afind_pane

0xe87e,	// (0x00050665) afind_page_pane_g1

0x7230,	// (0x00049017) afind_page_pane_g2

0x7239,	// (0x00049020) afind_page_pane_g3

0x0002,

0xf719,	// (0x00051500) afind_page_pane_g

0x7242,	// (0x00049029) afind_page_pane_t1

0x7262,	// (0x00049049) cell_afind_grid_control_pane_ParamLimits

0x7262,	// (0x00049049) cell_afind_grid_control_pane

0x64e9,	// (0x000482d0) bg_button_pane_cp69_ParamLimits

0x64e9,	// (0x000482d0) bg_button_pane_cp69

0x7271,	// (0x00049058) cell_afind_pane_g1_ParamLimits

0x7271,	// (0x00049058) cell_afind_pane_g1

0x727e,	// (0x00049065) cell_afind_pane_t1_ParamLimits

0x727e,	// (0x00049065) cell_afind_pane_t1

0xc763,	// (0x0004e54a) bg_button_pane_cp72

0x7290,	// (0x00049077) cell_afind_grid_control_pane_g1

0x4068,	// (0x00045e4f) aid_image_placing_area_ParamLimits

0x4068,	// (0x00045e4f) aid_image_placing_area

0xee32,	// (0x00050c19) field_vitu_entry_pane_g1_ParamLimits

0xee32,	// (0x00050c19) field_vitu_entry_pane_g1

0xee3e,	// (0x00050c25) field_vitu_entry_pane_g2_ParamLimits

0xee3e,	// (0x00050c25) field_vitu_entry_pane_g2

0x0001,

0x0699,	// (0x00042480) field_vitu_entry_pane_g_ParamLimits

0x0699,	// (0x00042480) field_vitu_entry_pane_g

0x6118,	// (0x00047eff) cell_vitu_itu_pane_g1_ParamLimits

0x615a,	// (0x00047f41) cell_vitu_itu_pane_t3_ParamLimits

0x615a,	// (0x00047f41) cell_vitu_itu_pane_t3

0x63e8,	// (0x000481cf) mp4_progress_pane_t1_ParamLimits

0x6401,	// (0x000481e8) mp4_progress_pane_t2_ParamLimits

0xf65f,	// (0x00051446) mp4_progress_pane_t_ParamLimits

0x641a,	// (0x00048201) mup_progress_pane_cp04_ParamLimits

0x7113,	// (0x00048efa) main_myfav_hc_pane_t5_ParamLimits

0x7113,	// (0x00048efa) main_myfav_hc_pane_t5

0xa703,	// (0x0004c4ea) aid_zoom_text_primary

0x1999,	// (0x00043780) popup_adpt_find_window_ParamLimits

0xd8c7,	// (0x0004f6ae) main_cam_set_pane

0x69f6,	// (0x000487dd) cam4_zoom_pane_ParamLimits

0x69f6,	// (0x000487dd) cam4_zoom_pane

0x7299,	// (0x00049080) main_cam_set_pane_g1_ParamLimits

0x7299,	// (0x00049080) main_cam_set_pane_g1

0x72a7,	// (0x0004908e) main_cam_set_pane_g2_ParamLimits

0x72a7,	// (0x0004908e) main_cam_set_pane_g2

0x0001,

0xf720,	// (0x00051507) main_cam_set_pane_g_ParamLimits

0xf720,	// (0x00051507) main_cam_set_pane_g

0x72c8,	// (0x000490af) main_cam_set_pane_t1_ParamLimits

0x72c8,	// (0x000490af) main_cam_set_pane_t1

0x72e3,	// (0x000490ca) main_cset_listscroll_pane_ParamLimits

0x72e3,	// (0x000490ca) main_cset_listscroll_pane

0x7303,	// (0x000490ea) main_cset_slider_pane_ParamLimits

0x7303,	// (0x000490ea) main_cset_slider_pane

0x7331,	// (0x00049118) main_cset_list_pane_ParamLimits

0x7331,	// (0x00049118) main_cset_list_pane

0x7341,	// (0x00049128) scroll_pane_cp028

0x734a,	// (0x00049131) aid_area_touch_slider

0x7366,	// (0x0004914d) cset_slider_pane

0x7390,	// (0x00049177) main_cset_slider_pane_g1

0x73a5,	// (0x0004918c) main_cset_slider_pane_g2

0x0011,

0xf725,	// (0x0005150c) main_cset_slider_pane_g

0x7491,	// (0x00049278) main_cset_slider_pane_t1

0x74bf,	// (0x000492a6) main_cset_slider_pane_t2

0x74d9,	// (0x000492c0) main_cset_slider_pane_t3

0x74f3,	// (0x000492da) main_cset_slider_pane_t4

0x750d,	// (0x000492f4) main_cset_slider_pane_t5

0x7529,	// (0x00049310) main_cset_slider_pane_t6

0x753e,	// (0x00049325) main_cset_slider_pane_t7

0x000e,

0xf74a,	// (0x00051531) main_cset_slider_pane_t

0x76b4,	// (0x0004949b) cset_list_set_pane_ParamLimits

0x76b4,	// (0x0004949b) cset_list_set_pane

0x76c8,	// (0x000494af) aid_position_infowindow_above

0x76d0,	// (0x000494b7) aid_position_infowindow_below

0x101b,	// (0x00042e02) cset_list_set_pane_g1_ParamLimits

0x101b,	// (0x00042e02) cset_list_set_pane_g1

0x1027,	// (0x00042e0e) cset_list_set_pane_g3_ParamLimits

0x1027,	// (0x00042e0e) cset_list_set_pane_g3

0x0001,

0xf769,	// (0x00051550) cset_list_set_pane_g_ParamLimits

0xf769,	// (0x00051550) cset_list_set_pane_g

0x1036,	// (0x00042e1d) cset_list_set_pane_t1_ParamLimits

0x1036,	// (0x00042e1d) cset_list_set_pane_t1

0xd8c7,	// (0x0004f6ae) list_highlight_pane_cp021_ParamLimits

0xd8c7,	// (0x0004f6ae) list_highlight_pane_cp021

0xd116,	// (0x0004eefd) cset_slider_pane_g1

0xd128,	// (0x0004ef0f) cset_slider_pane_g2

0xd11f,	// (0x0004ef06) cset_slider_pane_g3

0x0002,

0x083d,	// (0x00042624) cset_slider_pane_g

0xaedd,	// (0x0004ccc4) aid_area_touch_cam4_zoom

0xaee5,	// (0x0004cccc) cam4_zoom_cont_pane

0xaeed,	// (0x0004ccd4) cam4_zoom_pane_g1

0xaef5,	// (0x0004ccdc) cam4_zoom_pane_g2

0x76d8,	// (0x000494bf) cam4_zoom_pane_g3

0x0002,

0xf76e,	// (0x00051555) cam4_zoom_pane_g

0x76e0,	// (0x000494c7) cam4_zoom_cont_pane_g1

0x76e9,	// (0x000494d0) cam4_zoom_cont_pane_g2

0x76f2,	// (0x000494d9) cam4_zoom_cont_pane_g3

0x0002,

0xf775,	// (0x0005155c) cam4_zoom_cont_pane_g

0x67d1,	// (0x000485b8) call4_image_pane_ParamLimits

0x67d1,	// (0x000485b8) call4_image_pane

0x6831,	// (0x00048618) call4_windows_conf_pane_ParamLimits

0x6870,	// (0x00048657) popup_call4_audio_in_window_ParamLimits

0x6870,	// (0x00048657) popup_call4_audio_in_window

0xa6dd,	// (0x0004c4c4) bg_popup_call2_act_pane_cp02

0x696b,	// (0x00048752) call4_list_conf_pane

0xe87e,	// (0x00050665) call4_image_pane_g1

0xe87e,	// (0x00050665) call4_image_pane_g2

0x0001,

0x055f,	// (0x00042346) call4_image_pane_g

0x76fb,	// (0x000494e2) list_single_graphic_popup_conf4_pane_ParamLimits

0x76fb,	// (0x000494e2) list_single_graphic_popup_conf4_pane

0xa6dd,	// (0x0004c4c4) list_highlight_pane_cp022

0x770e,	// (0x000494f5) list_single_graphic_popup_conf4_pane_g1

0xce07,	// (0x0004ebee) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf77c,	// (0x00051563) list_single_graphic_popup_conf4_pane_g

0x7716,	// (0x000494fd) list_single_graphic_popup_conf4_pane_t1

0x2708,	// (0x000444ef) popup_vtel_slider_window_ParamLimits

0x2708,	// (0x000444ef) popup_vtel_slider_window

0x64b3,	// (0x0004829a) dialer2_ne_pane_t2_ParamLimits

0x64b3,	// (0x0004829a) dialer2_ne_pane_t2

0x0001,

0xf664,	// (0x0005144b) dialer2_ne_pane_t_ParamLimits

0xf664,	// (0x0005144b) dialer2_ne_pane_t

0xe659,	// (0x00050440) bg_popup_sub_pane_cp010_ParamLimits

0xe659,	// (0x00050440) bg_popup_sub_pane_cp010

0x772c,	// (0x00049513) popup_vtel_slider_window_g1_ParamLimits

0x772c,	// (0x00049513) popup_vtel_slider_window_g1

0x773f,	// (0x00049526) popup_vtel_slider_window_g2_ParamLimits

0x773f,	// (0x00049526) popup_vtel_slider_window_g2

0x0003,

0xf781,	// (0x00051568) popup_vtel_slider_window_g_ParamLimits

0xf781,	// (0x00051568) popup_vtel_slider_window_g

0x7795,	// (0x0004957c) vtel_slider_pane_ParamLimits

0x7795,	// (0x0004957c) vtel_slider_pane

0x77b7,	// (0x0004959e) vtel_slider_pane_g1_ParamLimits

0x77b7,	// (0x0004959e) vtel_slider_pane_g1

0x77cb,	// (0x000495b2) vtel_slider_pane_g2_ParamLimits

0x77cb,	// (0x000495b2) vtel_slider_pane_g2

0x77e3,	// (0x000495ca) vtel_slider_pane_g3_ParamLimits

0x77e3,	// (0x000495ca) vtel_slider_pane_g3

0x77b7,	// (0x0004959e) vtel_slider_pane_g4_ParamLimits

0x77b7,	// (0x0004959e) vtel_slider_pane_g4

0x77f9,	// (0x000495e0) vtel_slider_pane_g5_ParamLimits

0x77f9,	// (0x000495e0) vtel_slider_pane_g5

0x0004,

0xf78a,	// (0x00051571) vtel_slider_pane_g_ParamLimits

0xf78a,	// (0x00051571) vtel_slider_pane_g

0xa6dd,	// (0x0004c4c4) main_gallery2_pane

0x6c76,	// (0x00048a5d) aid_size_row_itut2_dropdow_list_ParamLimits

0x6c76,	// (0x00048a5d) aid_size_row_itut2_dropdow_list

0x6d02,	// (0x00048ae9) grid_vitu2_function_top_pane_ParamLimits

0x6d02,	// (0x00048ae9) grid_vitu2_function_top_pane

0x6d67,	// (0x00048b4e) popup_vitu2_dropdown_list_window_ParamLimits

0x6d67,	// (0x00048b4e) popup_vitu2_dropdown_list_window

0x6d90,	// (0x00048b77) popup_vitu2_match_list_window

0x780f,	// (0x000495f6) cell_vitu2_function_top_pane_ParamLimits

0x780f,	// (0x000495f6) cell_vitu2_function_top_pane

0x782d,	// (0x00049614) cell_vitu2_function_top_pane_cp01_ParamLimits

0x782d,	// (0x00049614) cell_vitu2_function_top_pane_cp01

0x784b,	// (0x00049632) cell_vitu2_function_top_wide_pane_ParamLimits

0x784b,	// (0x00049632) cell_vitu2_function_top_wide_pane

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp012

0x7869,	// (0x00049650) cell_vitu2_function_top_pane_g1

0xaf0b,	// (0x0004ccf2) bg_button_pane_cp013_ParamLimits

0xaf0b,	// (0x0004ccf2) bg_button_pane_cp013

0x787d,	// (0x00049664) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x787d,	// (0x00049664) cell_vitu2_function_top_wide_pane_g1

0xd8c7,	// (0x0004f6ae) bg_popup_sub_pane_cp20

0x7895,	// (0x0004967c) list_vitu2_match_list_pane

0x6f16,	// (0x00048cfd) bg_popup_sub_pane_cp20_g1

0x6f1e,	// (0x00048d05) bg_popup_sub_pane_cp20_g2

0xc968,	// (0x0004e74f) bg_popup_sub_pane_cp20_g3

0x6f26,	// (0x00048d0d) bg_popup_sub_pane_cp20_g4

0xc948,	// (0x0004e72f) bg_popup_sub_pane_cp20_g5

0x78b3,	// (0x0004969a) bg_popup_sub_pane_cp20_g6

0x6f36,	// (0x00048d1d) bg_popup_sub_pane_cp20_g7

0x6f3e,	// (0x00048d25) bg_popup_sub_pane_cp20_g8

0x6f46,	// (0x00048d2d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf795,	// (0x0005157c) bg_popup_sub_pane_cp20_g

0xaf27,	// (0x0004cd0e) list_vitu2_match_list_item_pane_ParamLimits

0xaf27,	// (0x0004cd0e) list_vitu2_match_list_item_pane

0xaf39,	// (0x0004cd20) list_vitu2_match_list_item_pane_t1

0xa6dd,	// (0x0004c4c4) bg_popup_sub_pane_cp21

0xccfe,	// (0x0004eae5) grid_vitu2_dropdown_list_pane

0x78bb,	// (0x000496a2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x78bb,	// (0x000496a2) cell_vitu2_dropdown_list_char_pane

0x78dc,	// (0x000496c3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x78dc,	// (0x000496c3) cell_vitu2_dropdown_list_ctrl_pane

0x7908,	// (0x000496ef) cell_vitu2_dropdown_list_char_pane_g1

0x7911,	// (0x000496f8) cell_vitu2_dropdown_list_char_pane_g2

0x791a,	// (0x00049701) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf7b2,	// (0x00051599) cell_vitu2_dropdown_list_char_pane_g

0x7923,	// (0x0004970a) cell_vitu2_dropdown_list_char_pane_t1

0x7931,	// (0x00049718) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7931,	// (0x00049718) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7941,	// (0x00049728) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7941,	// (0x00049728) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7952,	// (0x00049739) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7952,	// (0x00049739) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7962,	// (0x00049749) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7962,	// (0x00049749) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeae5,	// (0x000508cc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeae5,	// (0x000508cc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7b9,	// (0x000515a0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7b9,	// (0x000515a0) cell_vitu2_dropdown_list_ctrl_pane_g

0x797e,	// (0x00049765) aid_size_cell_gallery2_ParamLimits

0x797e,	// (0x00049765) aid_size_cell_gallery2

0x7994,	// (0x0004977b) grid_gallery2_pane_ParamLimits

0x7994,	// (0x0004977b) grid_gallery2_pane

0x79a8,	// (0x0004978f) scroll_pane_cp029_ParamLimits

0x79a8,	// (0x0004978f) scroll_pane_cp029

0x79b4,	// (0x0004979b) cell_gallery2_pane_ParamLimits

0x79b4,	// (0x0004979b) cell_gallery2_pane

0x79ea,	// (0x000497d1) cell_gallery2_pane_g2

0x79f4,	// (0x000497db) cell_gallery2_pane_g3

0x79fc,	// (0x000497e3) cell_gallery2_pane_g4

0x7a04,	// (0x000497eb) cell_gallery2_pane_g5

0xcfe0,	// (0x0004edc7) grid_highlight_pane_cp10

0x6d90,	// (0x00048b77) popup_vitu2_match_list_window_ParamLimits

0x6da5,	// (0x00048b8c) popup_vitu2_query_window_ParamLimits

0x6da5,	// (0x00048b8c) popup_vitu2_query_window

0xa6dd,	// (0x0004c4c4) bg_vitu2_candi_button_pane

0x7908,	// (0x000496ef) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x7911,	// (0x000496f8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x791a,	// (0x00049701) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1080,	// (0x00042e67) bg_button_pane_cp015

0x7a0c,	// (0x000497f3) bg_button_pane_cp016

0x7a1f,	// (0x00049806) bg_button_pane_cp017

0xe42d,	// (0x00050214) bg_popup_sub_pane_cp22

0x7a43,	// (0x0004982a) popup_vitu2_query_window_g1

0x10b5,	// (0x00042e9c) popup_vitu2_query_window_g2

0x0002,

0xf7c4,	// (0x000515ab) popup_vitu2_query_window_g

0x10d4,	// (0x00042ebb) popup_vitu2_query_window_t1_ParamLimits

0x10d4,	// (0x00042ebb) popup_vitu2_query_window_t1

0x1109,	// (0x00042ef0) popup_vitu2_query_window_t2_ParamLimits

0x1109,	// (0x00042ef0) popup_vitu2_query_window_t2

0x111b,	// (0x00042f02) popup_vitu2_query_window_t3_ParamLimits

0x111b,	// (0x00042f02) popup_vitu2_query_window_t3

0x7a4f,	// (0x00049836) popup_vitu2_query_window_t4_ParamLimits

0x7a4f,	// (0x00049836) popup_vitu2_query_window_t4

0x7a70,	// (0x00049857) popup_vitu2_query_window_t5_ParamLimits

0x7a70,	// (0x00049857) popup_vitu2_query_window_t5

0x0006,

0xf7cb,	// (0x000515b2) popup_vitu2_query_window_t_ParamLimits

0xf7cb,	// (0x000515b2) popup_vitu2_query_window_t

0x7329,	// (0x00049110) main_cset_text_pane

0x734a,	// (0x00049131) aid_area_touch_slider_ParamLimits

0x7366,	// (0x0004914d) cset_slider_pane_ParamLimits

0x7390,	// (0x00049177) main_cset_slider_pane_g1_ParamLimits

0x73a5,	// (0x0004918c) main_cset_slider_pane_g2_ParamLimits

0x73ba,	// (0x000491a1) main_cset_slider_pane_g3_ParamLimits

0x73ba,	// (0x000491a1) main_cset_slider_pane_g3

0x73c6,	// (0x000491ad) main_cset_slider_pane_g4_ParamLimits

0x73c6,	// (0x000491ad) main_cset_slider_pane_g4

0x73d5,	// (0x000491bc) main_cset_slider_pane_g5_ParamLimits

0x73d5,	// (0x000491bc) main_cset_slider_pane_g5

0x73e1,	// (0x000491c8) main_cset_slider_pane_g6_ParamLimits

0x73e1,	// (0x000491c8) main_cset_slider_pane_g6

0xf725,	// (0x0005150c) main_cset_slider_pane_g_ParamLimits

0x7491,	// (0x00049278) main_cset_slider_pane_t1_ParamLimits

0x74bf,	// (0x000492a6) main_cset_slider_pane_t2_ParamLimits

0x74d9,	// (0x000492c0) main_cset_slider_pane_t3_ParamLimits

0x74f3,	// (0x000492da) main_cset_slider_pane_t4_ParamLimits

0x750d,	// (0x000492f4) main_cset_slider_pane_t5_ParamLimits

0x7529,	// (0x00049310) main_cset_slider_pane_t6_ParamLimits

0x753e,	// (0x00049325) main_cset_slider_pane_t7_ParamLimits

0x7568,	// (0x0004934f) main_cset_slider_pane_t8_ParamLimits

0x7568,	// (0x0004934f) main_cset_slider_pane_t8

0x7590,	// (0x00049377) main_cset_slider_pane_t9_ParamLimits

0x7590,	// (0x00049377) main_cset_slider_pane_t9

0x75b8,	// (0x0004939f) main_cset_slider_pane_t10_ParamLimits

0x75b8,	// (0x0004939f) main_cset_slider_pane_t10

0x75e0,	// (0x000493c7) main_cset_slider_pane_t11_ParamLimits

0x75e0,	// (0x000493c7) main_cset_slider_pane_t11

0x7608,	// (0x000493ef) main_cset_slider_pane_t12_ParamLimits

0x7608,	// (0x000493ef) main_cset_slider_pane_t12

0x7625,	// (0x0004940c) main_cset_slider_pane_t13_ParamLimits

0x7625,	// (0x0004940c) main_cset_slider_pane_t13

0xf74a,	// (0x00051531) main_cset_slider_pane_t_ParamLimits

0xa6dd,	// (0x0004c4c4) bg_popup_sub_pane_cp011

0x7a91,	// (0x00049878) main_cset_text_pane_g1

0x7a99,	// (0x00049880) main_cset_text_pane_t1

0x7aa7,	// (0x0004988e) main_cset_text_pane_t2

0x7ab5,	// (0x0004989c) main_cset_text_pane_t3

0x7ac3,	// (0x000498aa) main_cset_text_pane_t4

0x7ad1,	// (0x000498b8) main_cset_text_pane_t5

0x7adf,	// (0x000498c6) main_cset_text_pane_t6

0x7aed,	// (0x000498d4) main_cset_text_pane_t7

0x0006,

0xf7da,	// (0x000515c1) main_cset_text_pane_t

0xa6dd,	// (0x0004c4c4) main_cam4_burst_pane

0xa6dd,	// (0x0004c4c4) main_cam5_pane

0x7250,	// (0x00049037) bg_button_pane_cp019

0x7259,	// (0x00049040) bg_button_pane_cp020

0x73f5,	// (0x000491dc) main_cset_slider_pane_g7_ParamLimits

0x73f5,	// (0x000491dc) main_cset_slider_pane_g7

0x7401,	// (0x000491e8) main_cset_slider_pane_g8_ParamLimits

0x7401,	// (0x000491e8) main_cset_slider_pane_g8

0x740d,	// (0x000491f4) main_cset_slider_pane_g9_ParamLimits

0x740d,	// (0x000491f4) main_cset_slider_pane_g9

0x7419,	// (0x00049200) main_cset_slider_pane_g10_ParamLimits

0x7419,	// (0x00049200) main_cset_slider_pane_g10

0x7425,	// (0x0004920c) main_cset_slider_pane_g11_ParamLimits

0x7425,	// (0x0004920c) main_cset_slider_pane_g11

0x7431,	// (0x00049218) main_cset_slider_pane_g12_ParamLimits

0x7431,	// (0x00049218) main_cset_slider_pane_g12

0x743d,	// (0x00049224) main_cset_slider_pane_g13_ParamLimits

0x743d,	// (0x00049224) main_cset_slider_pane_g13

0x7449,	// (0x00049230) main_cset_slider_pane_g14_ParamLimits

0x7449,	// (0x00049230) main_cset_slider_pane_g14

0x7455,	// (0x0004923c) main_cset_slider_pane_g15_ParamLimits

0x7455,	// (0x0004923c) main_cset_slider_pane_g15

0x7642,	// (0x00049429) main_cset_slider_pane_t14_ParamLimits

0x7642,	// (0x00049429) main_cset_slider_pane_t14

0x767b,	// (0x00049462) main_cset_slider_pane_t15_ParamLimits

0x767b,	// (0x00049462) main_cset_slider_pane_t15

0x7afb,	// (0x000498e2) aid_cam4_burst_size_cell_ParamLimits

0x7afb,	// (0x000498e2) aid_cam4_burst_size_cell

0x7b1b,	// (0x00049902) grid_cam4_burst_pane_ParamLimits

0x7b1b,	// (0x00049902) grid_cam4_burst_pane

0x7b53,	// (0x0004993a) linegrid_cam4_burst_pane_ParamLimits

0x7b53,	// (0x0004993a) linegrid_cam4_burst_pane

0x7b79,	// (0x00049960) scroll_pane_cp30_ParamLimits

0x7b79,	// (0x00049960) scroll_pane_cp30

0x7b85,	// (0x0004996c) cell_cam4_burst_pane_ParamLimits

0x7b85,	// (0x0004996c) cell_cam4_burst_pane

0x7bd2,	// (0x000499b9) linegrid_cam4_burst_pane_g1_ParamLimits

0x7bd2,	// (0x000499b9) linegrid_cam4_burst_pane_g1

0x7bdf,	// (0x000499c6) linegrid_cam4_burst_pane_g2_ParamLimits

0x7bdf,	// (0x000499c6) linegrid_cam4_burst_pane_g2

0x7bf0,	// (0x000499d7) linegrid_cam4_burst_pane_g3_ParamLimits

0x7bf0,	// (0x000499d7) linegrid_cam4_burst_pane_g3

0x0002,

0xf7e9,	// (0x000515d0) linegrid_cam4_burst_pane_g_ParamLimits

0xf7e9,	// (0x000515d0) linegrid_cam4_burst_pane_g

0x7bfd,	// (0x000499e4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7bfd,	// (0x000499e4) linegrid_cam4_burst_pane_g3_copy1

0x7c17,	// (0x000499fe) linegrid_cam4_burst_pane_g4_ParamLimits

0x7c17,	// (0x000499fe) linegrid_cam4_burst_pane_g4

0x7c24,	// (0x00049a0b) linegrid_cam4_burst_pane_g5_ParamLimits

0x7c24,	// (0x00049a0b) linegrid_cam4_burst_pane_g5

0x7c35,	// (0x00049a1c) linegrid_cam4_burst_pane_g6_ParamLimits

0x7c35,	// (0x00049a1c) linegrid_cam4_burst_pane_g6

0x7c4c,	// (0x00049a33) linegrid_cam4_burst_pane_g7_ParamLimits

0x7c4c,	// (0x00049a33) linegrid_cam4_burst_pane_g7

0x7c59,	// (0x00049a40) cell_cam4_burst_pane_g1

0x7c78,	// (0x00049a5f) main_cam5_pane_t1_ParamLimits

0x7c78,	// (0x00049a5f) main_cam5_pane_t1

0x7c8a,	// (0x00049a71) main_cam5_pane_t2_ParamLimits

0x7c8a,	// (0x00049a71) main_cam5_pane_t2

0x7c9c,	// (0x00049a83) main_cam5_pane_t3_ParamLimits

0x7c9c,	// (0x00049a83) main_cam5_pane_t3

0x7cae,	// (0x00049a95) main_cam5_pane_t4_ParamLimits

0x7cae,	// (0x00049a95) main_cam5_pane_t4

0x7cc4,	// (0x00049aab) main_cam5_pane_t5_ParamLimits

0x7cc4,	// (0x00049aab) main_cam5_pane_t5

0x7cd6,	// (0x00049abd) main_cam5_pane_t6_ParamLimits

0x7cd6,	// (0x00049abd) main_cam5_pane_t6

0x7cea,	// (0x00049ad1) main_cam5_pane_t7_ParamLimits

0x7cea,	// (0x00049ad1) main_cam5_pane_t7

0x7cfc,	// (0x00049ae3) main_cam5_pane_t8_ParamLimits

0x7cfc,	// (0x00049ae3) main_cam5_pane_t8

0x7d18,	// (0x00049aff) main_cam5_pane_t9_ParamLimits

0x7d18,	// (0x00049aff) main_cam5_pane_t9

0x7d2a,	// (0x00049b11) main_cam5_pane_t10_ParamLimits

0x7d2a,	// (0x00049b11) main_cam5_pane_t10

0x7d3c,	// (0x00049b23) main_cam5_pane_t11_ParamLimits

0x7d3c,	// (0x00049b23) main_cam5_pane_t11

0x7d4e,	// (0x00049b35) main_cam5_pane_t12_ParamLimits

0x7d4e,	// (0x00049b35) main_cam5_pane_t12

0x7d63,	// (0x00049b4a) main_cam5_pane_t13_ParamLimits

0x7d63,	// (0x00049b4a) main_cam5_pane_t13

0x000c,

0xf7f5,	// (0x000515dc) main_cam5_pane_t_ParamLimits

0xf7f5,	// (0x000515dc) main_cam5_pane_t

0x1a1b,	// (0x00043802) popup_scut_keymap_window_ParamLimits

0x1a1b,	// (0x00043802) popup_scut_keymap_window

0x7d80,	// (0x00049b67) aid_size_cell_brow_shortcut

0xcfe0,	// (0x0004edc7) bg_popup_window_pane_cp010

0x7d8c,	// (0x00049b73) grid_scut_pane

0x7d98,	// (0x00049b7f) cell_scut_pane_ParamLimits

0x7d98,	// (0x00049b7f) cell_scut_pane

0x7daf,	// (0x00049b96) cell_scut_pane_g1

0x7db8,	// (0x00049b9f) cell_scut_pane_t1

0x7dc7,	// (0x00049bae) cell_scut_pane_t2

0x7dd6,	// (0x00049bbd) cell_scut_pane_t3

0x0002,

0xf810,	// (0x000515f7) cell_scut_pane_t

0x5654,	// (0x0004743b) main_mup3_pane_g8_ParamLimits

0x5654,	// (0x0004743b) main_mup3_pane_g8

0x6c8e,	// (0x00048a75) area_vitu2_query_pane_ParamLimits

0x6c8e,	// (0x00048a75) area_vitu2_query_pane

0x1094,	// (0x00042e7b) input_focus_pane_cp08

0x7de4,	// (0x00049bcb) area_vitu2_query_pane_g1

0x1199,	// (0x00042f80) area_vitu2_query_pane_g2

0x0001,

0xf817,	// (0x000515fe) area_vitu2_query_pane_g

0x7df0,	// (0x00049bd7) area_vitu2_query_pane_t1_ParamLimits

0x7df0,	// (0x00049bd7) area_vitu2_query_pane_t1

0x7e04,	// (0x00049beb) area_vitu2_query_pane_t2_ParamLimits

0x7e04,	// (0x00049beb) area_vitu2_query_pane_t2

0x11aa,	// (0x00042f91) area_vitu2_query_pane_t3_ParamLimits

0x11aa,	// (0x00042f91) area_vitu2_query_pane_t3

0xaf5f,	// (0x0004cd46) area_vitu2_query_pane_t4_ParamLimits

0xaf5f,	// (0x0004cd46) area_vitu2_query_pane_t4

0xaf87,	// (0x0004cd6e) area_vitu2_query_pane_t5_ParamLimits

0xaf87,	// (0x0004cd6e) area_vitu2_query_pane_t5

0xafaf,	// (0x0004cd96) area_vitu2_query_pane_t6_ParamLimits

0xafaf,	// (0x0004cd96) area_vitu2_query_pane_t6

0x0006,

0xf81c,	// (0x00051603) area_vitu2_query_pane_t_ParamLimits

0xf81c,	// (0x00051603) area_vitu2_query_pane_t

0x7e18,	// (0x00049bff) bg_button_pane_cp018

0x7e26,	// (0x00049c0d) bg_button_pane_cp021

0x11d2,	// (0x00042fb9) bg_button_pane_cp022

0x11e3,	// (0x00042fca) input_focus_pane_cp09

0x36b1,	// (0x00045498) aid_size_touch_mv_arrow_left

0x36da,	// (0x000454c1) aid_size_touch_mv_arrow_right

0x746d,	// (0x00049254) main_cset_slider_pane_g16_ParamLimits

0x746d,	// (0x00049254) main_cset_slider_pane_g16

0x7479,	// (0x00049260) main_cset_slider_pane_g17_ParamLimits

0x7479,	// (0x00049260) main_cset_slider_pane_g17

0x7c59,	// (0x00049a40) cell_cam4_burst_pane_g1_ParamLimits

0xa6dd,	// (0x0004c4c4) compa_mode_pane

0x774f,	// (0x00049536) popup_vtel_slider_window_g3_ParamLimits

0x774f,	// (0x00049536) popup_vtel_slider_window_g3

0x7766,	// (0x0004954d) popup_vtel_slider_window_g4_ParamLimits

0x7766,	// (0x0004954d) popup_vtel_slider_window_g4

0x777d,	// (0x00049564) popup_vtel_slider_window_t1_ParamLimits

0x777d,	// (0x00049564) popup_vtel_slider_window_t1

0xa6dd,	// (0x0004c4c4) main_cl_pane

0xe455,	// (0x0005023c) popup_imed_adjust2_window_ParamLimits

0xe42d,	// (0x00050214) bg_tb_trans_pane_cp05_ParamLimits

0xed67,	// (0x00050b4e) popup_imed_adjust2_window_g1_ParamLimits

0xed76,	// (0x00050b5d) popup_imed_adjust2_window_g2_ParamLimits

0xed76,	// (0x00050b5d) popup_imed_adjust2_window_g2

0xed82,	// (0x00050b69) popup_imed_adjust2_window_g3_ParamLimits

0xed82,	// (0x00050b69) popup_imed_adjust2_window_g3

0x0002,

0x065d,	// (0x00042444) popup_imed_adjust2_window_g_ParamLimits

0x065d,	// (0x00042444) popup_imed_adjust2_window_g

0xed8e,	// (0x00050b75) popup_imed_adjust2_window_t1_ParamLimits

0xeda6,	// (0x00050b8d) slider_imed_adjust_pane_ParamLimits

0xedba,	// (0x00050ba1) slider_imed_adjust_pane_g1_ParamLimits

0xedca,	// (0x00050bb1) slider_imed_adjust_pane_g2_ParamLimits

0xedda,	// (0x00050bc1) slider_imed_adjust_pane_g3_ParamLimits

0xedeb,	// (0x00050bd2) slider_imed_adjust_pane_g4_ParamLimits

0x0664,	// (0x0004244b) slider_imed_adjust_pane_g_ParamLimits

0x6997,	// (0x0004877e) aid_touch_area_cam4_ParamLimits

0x6997,	// (0x0004877e) aid_touch_area_cam4

0xae03,	// (0x0004cbea) battery_pane_cp01

0x6a67,	// (0x0004884e) main_camera4_pane_g6_ParamLimits

0x6a67,	// (0x0004884e) main_camera4_pane_g6

0x6a91,	// (0x00048878) main_camera4_pane_t2_ParamLimits

0x6a91,	// (0x00048878) main_camera4_pane_t2

0x0001,

0xf698,	// (0x0005147f) main_camera4_pane_t_ParamLimits

0xf698,	// (0x0005147f) main_camera4_pane_t

0x6ad8,	// (0x000488bf) aid_touch_area_vid4_ParamLimits

0x6ad8,	// (0x000488bf) aid_touch_area_vid4

0x6b3f,	// (0x00048926) main_video4_pane_g5_ParamLimits

0x6b3f,	// (0x00048926) main_video4_pane_g5

0x6b6a,	// (0x00048951) vid4_progress_pane_ParamLimits

0x6b6a,	// (0x00048951) vid4_progress_pane

0x7485,	// (0x0004926c) main_cset_slider_pane_g18_ParamLimits

0x7485,	// (0x0004926c) main_cset_slider_pane_g18

0x7c6c,	// (0x00049a53) cell_cam4_burst_pane_g2_ParamLimits

0x7c6c,	// (0x00049a53) cell_cam4_burst_pane_g2

0x0001,

0xf7f0,	// (0x000515d7) cell_cam4_burst_pane_g_ParamLimits

0xf7f0,	// (0x000515d7) cell_cam4_burst_pane_g

0xc558,	// (0x0004e33f) bg_cl_pane_ParamLimits

0xc558,	// (0x0004e33f) bg_cl_pane

0x7e32,	// (0x00049c19) cl_header_pane_ParamLimits

0x7e32,	// (0x00049c19) cl_header_pane

0x7e46,	// (0x00049c2d) cl_listscroll_pane_ParamLimits

0x7e46,	// (0x00049c2d) cl_listscroll_pane

0x7e56,	// (0x00049c3d) bg_cl_pane_g1

0x7e5e,	// (0x00049c45) bg_cl_pane_g2

0x7e66,	// (0x00049c4d) bg_cl_pane_g3

0x7e6e,	// (0x00049c55) bg_cl_pane_g4

0x7e76,	// (0x00049c5d) bg_cl_pane_g5

0x7e7e,	// (0x00049c65) bg_cl_pane_g6

0x7e86,	// (0x00049c6d) bg_cl_pane_g7

0x7e8e,	// (0x00049c75) bg_cl_pane_g8

0x7e96,	// (0x00049c7d) bg_cl_pane_g9

0x0008,

0xf82b,	// (0x00051612) bg_cl_pane_g

0x7e9e,	// (0x00049c85) aid_height_cl_leading_ParamLimits

0x7e9e,	// (0x00049c85) aid_height_cl_leading

0x7eaa,	// (0x00049c91) aid_height_cl_text_ParamLimits

0x7eaa,	// (0x00049c91) aid_height_cl_text

0xd8c7,	// (0x0004f6ae) bg_cl_header_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_cl_header_pane

0x7ec9,	// (0x00049cb0) cl_header_pane_g1_ParamLimits

0x7ec9,	// (0x00049cb0) cl_header_pane_g1

0x7edf,	// (0x00049cc6) cl_header_pane_t1_ParamLimits

0x7edf,	// (0x00049cc6) cl_header_pane_t1

0x7ef8,	// (0x00049cdf) cl_list_pane

0x7341,	// (0x00049128) hc_scroll_pane_cp01

0xc948,	// (0x0004e72f) bg_cl_header_pane_g1

0x6f16,	// (0x00048cfd) bg_cl_header_pane_g2

0xc968,	// (0x0004e74f) bg_cl_header_pane_g3

0x6f26,	// (0x00048d0d) bg_cl_header_pane_g4

0x6f1e,	// (0x00048d05) bg_cl_header_pane_g5

0x78b3,	// (0x0004969a) bg_cl_header_pane_g6

0x6f3e,	// (0x00048d25) bg_cl_header_pane_g7

0x6f46,	// (0x00048d2d) bg_cl_header_pane_g8

0x6f36,	// (0x00048d1d) bg_cl_header_pane_g9

0x0008,

0xf83e,	// (0x00051625) bg_cl_header_pane_g

0x7f01,	// (0x00049ce8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7f01,	// (0x00049ce8) hc_cl_list_double_graphic_heading_pane

0x7f15,	// (0x00049cfc) hc_cl_list_single_graphic_pane_ParamLimits

0x7f15,	// (0x00049cfc) hc_cl_list_single_graphic_pane

0x7f2f,	// (0x00049d16) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7f2f,	// (0x00049d16) hc_cl_list_single_graphic_pane_g1

0x7f3b,	// (0x00049d22) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7f3b,	// (0x00049d22) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf851,	// (0x00051638) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf851,	// (0x00051638) hc_cl_list_single_graphic_pane_g

0x7f4f,	// (0x00049d36) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7f4f,	// (0x00049d36) hc_cl_list_single_graphic_pane_t1

0x7f2f,	// (0x00049d16) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7f2f,	// (0x00049d16) hc_cl_list_double_graphic_heading_pane_g1

0x7f64,	// (0x00049d4b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7f64,	// (0x00049d4b) hc_cl_list_double_graphic_heading_pane_g2

0x7f78,	// (0x00049d5f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7f78,	// (0x00049d5f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf856,	// (0x0005163d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf856,	// (0x0005163d) hc_cl_list_double_graphic_heading_pane_g

0x7f8c,	// (0x00049d73) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7f8c,	// (0x00049d73) hc_cl_list_double_graphic_heading_pane_t1

0x7fa1,	// (0x00049d88) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7fa1,	// (0x00049d88) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf85d,	// (0x00051644) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf85d,	// (0x00051644) hc_cl_list_double_graphic_heading_pane_t

0xb003,	// (0x0004cdea) vid4_progress_pane_g1

0xb013,	// (0x0004cdfa) vid4_progress_pane_g2

0xb023,	// (0x0004ce0a) vid4_progress_pane_g3

0xae38,	// (0x0004cc1f) vid4_progress_pane_g4

0x0004,

0xf862,	// (0x00051649) vid4_progress_pane_g

0xb02f,	// (0x0004ce16) vid4_progress_pane_t1

0xb044,	// (0x0004ce2b) vid4_progress_pane_t2

0x0002,

0xf86d,	// (0x00051654) vid4_progress_pane_t

0xb06f,	// (0x0004ce56) wait_bar_pane_cp07

0xe667,	// (0x0005044e) blid_firmament_pane_ParamLimits

0xe6aa,	// (0x00050491) popup_blid_sat_info2_window_g1

0xe6ce,	// (0x000504b5) popup_blid_sat_info2_window_t3

0xe6dc,	// (0x000504c3) popup_blid_sat_info2_window_t4

0xe6ea,	// (0x000504d1) popup_blid_sat_info2_window_t5

0xe6f8,	// (0x000504df) popup_blid_sat_info2_window_t6

0xe708,	// (0x000504ef) popup_blid_sat_info2_window_t7

0xe716,	// (0x000504fd) popup_blid_sat_info2_window_t8

0xe724,	// (0x0005050b) popup_blid_sat_info2_window_t9

0xe732,	// (0x00050519) popup_blid_sat_info2_window_t10

0xe7fe,	// (0x000505e5) aid_firma_cardinal_ParamLimits

0xe812,	// (0x000505f9) blid_firmament_pane_t1_ParamLimits

0xe829,	// (0x00050610) blid_firmament_pane_t2_ParamLimits

0xe840,	// (0x00050627) blid_firmament_pane_t3_ParamLimits

0xe857,	// (0x0005063e) blid_firmament_pane_t4_ParamLimits

0x0556,	// (0x0004233d) blid_firmament_pane_t_ParamLimits

0xe86e,	// (0x00050655) blid_sat_info_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) main_cam_set_pane_ParamLimits

0x5ec2,	// (0x00047ca9) aid_size_cell_colour_35_ParamLimits

0x5ee2,	// (0x00047cc9) aid_size_cell_colour_112_ParamLimits

0x5f02,	// (0x00047ce9) aid_size_cell_effect_ParamLimits

0xe42d,	// (0x00050214) bg_tb_trans_pane_cp02_ParamLimits

0xcb10,	// (0x0004e8f7) heading_imed_pane_ParamLimits

0x5f22,	// (0x00047d09) listscroll_imed_pane_ParamLimits

0xda4e,	// (0x0004f835) popup_call2_audio_first_window_g5_ParamLimits

0xda4e,	// (0x0004f835) popup_call2_audio_first_window_g5

0x655d,	// (0x00048344) aid_size_touch_image3_arrow_left_ParamLimits

0x655d,	// (0x00048344) aid_size_touch_image3_arrow_left

0x6589,	// (0x00048370) aid_size_touch_image3_arrow_right_ParamLimits

0x6589,	// (0x00048370) aid_size_touch_image3_arrow_right

0xb05a,	// (0x0004ce41) vid4_progress_pane_t3

0x6245,	// (0x0004802c) main_hwr_training_symbol_option_pane_ParamLimits

0x6245,	// (0x0004802c) main_hwr_training_symbol_option_pane

0xf054,	// (0x00050e3b) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x00050e3b) popup_hwr_training_preview_window

0x6265,	// (0x0004804c) hwr_training_navi_pane_g5_ParamLimits

0x6265,	// (0x0004804c) hwr_training_navi_pane_g5

0x6e5e,	// (0x00048c45) popup_char_count_window

0xd8c7,	// (0x0004f6ae) bg_popup_sub_pane_cp20_ParamLimits

0x7895,	// (0x0004967c) list_vitu2_match_list_pane_ParamLimits

0x78a4,	// (0x0004968b) vitu2_page_scroll_pane_ParamLimits

0x78a4,	// (0x0004968b) vitu2_page_scroll_pane

0x7fb6,	// (0x00049d9d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7fb6,	// (0x00049d9d) list_single_hwr_training_symbol_option_pane

0x7fc9,	// (0x00049db0) list_single_hwr_training_symbol_option_pane_g1

0x7fd1,	// (0x00049db8) list_single_hwr_training_symbol_option_pane_t1

0x7fdf,	// (0x00049dc6) bg_button_pane_cp023

0x7fe8,	// (0x00049dcf) bg_button_pane_cp024

0x801b,	// (0x00049e02) vitu2_page_scroll_pane_g1

0x8023,	// (0x00049e0a) vitu2_page_scroll_pane_g2

0x0001,

0xf874,	// (0x0005165b) vitu2_page_scroll_pane_g

0x802b,	// (0x00049e12) vitu2_page_scroll_pane_t1

0xe5c7,	// (0x000503ae) popup_char_count_window_g1

0x803a,	// (0x00049e21) popup_char_count_window_g2

0x8043,	// (0x00049e2a) popup_char_count_window_g3

0x0002,

0xf879,	// (0x00051660) popup_char_count_window_g

0x804c,	// (0x00049e33) popup_char_count_window_t1

0xa6dd,	// (0x0004c4c4) main_vded2_pane

0xed53,	// (0x00050b3a) aid_size_cell_imed_line

0xed5d,	// (0x00050b44) grid_imed_line_width_pane

0x6bda,	// (0x000489c1) vid4_indicators_pane_g4

0x805a,	// (0x00049e41) cell_imed_line_width_pane_ParamLimits

0x805a,	// (0x00049e41) cell_imed_line_width_pane

0x806e,	// (0x00049e55) cell_imed_line_width_pane_g1

0xe7aa,	// (0x00050591) cell_imed_line_width_pane_g2

0x0001,

0xf880,	// (0x00051667) cell_imed_line_width_pane_g

0x8077,	// (0x00049e5e) main_vded2_pane_g1_ParamLimits

0x8077,	// (0x00049e5e) main_vded2_pane_g1

0x808d,	// (0x00049e74) main_vded2_pane_g2_ParamLimits

0x808d,	// (0x00049e74) main_vded2_pane_g2

0x0001,

0xf885,	// (0x0005166c) main_vded2_pane_g_ParamLimits

0xf885,	// (0x0005166c) main_vded2_pane_g

0x809f,	// (0x00049e86) vded2_slider_pane_ParamLimits

0x809f,	// (0x00049e86) vded2_slider_pane

0x80af,	// (0x00049e96) aid_size_touch_vded2_end

0x80b9,	// (0x00049ea0) aid_size_touch_vded2_playhead

0x80c3,	// (0x00049eaa) aid_size_touch_vded2_start

0x80cb,	// (0x00049eb2) vded2_slider_bg_pane

0x80d4,	// (0x00049ebb) vded2_slider_pane_g1

0x80dd,	// (0x00049ec4) vded2_slider_pane_g2

0x80e5,	// (0x00049ecc) vded2_slider_pane_g3

0x0002,

0xf88a,	// (0x00051671) vded2_slider_pane_g

0x80f0,	// (0x00049ed7) vded2_slider_bg_pane_g1

0x80f9,	// (0x00049ee0) vded2_slider_bg_pane_g2

0x8102,	// (0x00049ee9) vded2_slider_bg_pane_g3

0x0002,

0xf891,	// (0x00051678) vded2_slider_bg_pane_g

0x3cce,	// (0x00045ab5) aid_postcard_touch_down_pane_ParamLimits

0x3cce,	// (0x00045ab5) aid_postcard_touch_down_pane

0x3ce4,	// (0x00045acb) aid_postcard_touch_up_pane_ParamLimits

0x3ce4,	// (0x00045acb) aid_postcard_touch_up_pane

0xa6dd,	// (0x0004c4c4) main_blid2_pane

0xe43b,	// (0x00050222) popup_blid2_search_window

0xa6dd,	// (0x0004c4c4) blid2_gps_pane

0xa6dd,	// (0x0004c4c4) blid2_navig_pane

0xa6dd,	// (0x0004c4c4) blid2_search_pane

0xa6dd,	// (0x0004c4c4) blid2_tripm_pane

0x810b,	// (0x00049ef2) blid2_search_pane_g1_ParamLimits

0x810b,	// (0x00049ef2) blid2_search_pane_g1

0x8123,	// (0x00049f0a) blid2_search_pane_t1_ParamLimits

0x8123,	// (0x00049f0a) blid2_search_pane_t1

0x8135,	// (0x00049f1c) aid_size_cell_blid2_gps_ParamLimits

0x8135,	// (0x00049f1c) aid_size_cell_blid2_gps

0x814d,	// (0x00049f34) blid2_gps_pane_g1_ParamLimits

0x814d,	// (0x00049f34) blid2_gps_pane_g1

0x8161,	// (0x00049f48) grid_blid2_satellite_pane_ParamLimits

0x8161,	// (0x00049f48) grid_blid2_satellite_pane

0x817b,	// (0x00049f62) blid2_navig_pane_g1_ParamLimits

0x817b,	// (0x00049f62) blid2_navig_pane_g1

0x8187,	// (0x00049f6e) blid2_navig_pane_t1_ParamLimits

0x8187,	// (0x00049f6e) blid2_navig_pane_t1

0x81a2,	// (0x00049f89) blid2_navig_pane_t2_ParamLimits

0x81a2,	// (0x00049f89) blid2_navig_pane_t2

0x0001,

0xf898,	// (0x0005167f) blid2_navig_pane_t_ParamLimits

0xf898,	// (0x0005167f) blid2_navig_pane_t

0x81bd,	// (0x00049fa4) blid2_navig_ring_pane_ParamLimits

0x81bd,	// (0x00049fa4) blid2_navig_ring_pane

0x81d6,	// (0x00049fbd) blid2_speed_pane_ParamLimits

0x81d6,	// (0x00049fbd) blid2_speed_pane

0x81e2,	// (0x00049fc9) blid2_tripm_pane_g1_ParamLimits

0x81e2,	// (0x00049fc9) blid2_tripm_pane_g1

0x81fd,	// (0x00049fe4) blid2_tripm_pane_g2_ParamLimits

0x81fd,	// (0x00049fe4) blid2_tripm_pane_g2

0x8211,	// (0x00049ff8) blid2_tripm_pane_g3_ParamLimits

0x8211,	// (0x00049ff8) blid2_tripm_pane_g3

0x8225,	// (0x0004a00c) blid2_tripm_pane_g4_ParamLimits

0x8225,	// (0x0004a00c) blid2_tripm_pane_g4

0x8239,	// (0x0004a020) blid2_tripm_pane_g5_ParamLimits

0x8239,	// (0x0004a020) blid2_tripm_pane_g5

0x0005,

0xf89d,	// (0x00051684) blid2_tripm_pane_g_ParamLimits

0xf89d,	// (0x00051684) blid2_tripm_pane_g

0x825f,	// (0x0004a046) blid2_tripm_pane_t1_ParamLimits

0x825f,	// (0x0004a046) blid2_tripm_pane_t1

0x827a,	// (0x0004a061) blid2_tripm_pane_t2_ParamLimits

0x827a,	// (0x0004a061) blid2_tripm_pane_t2

0x8295,	// (0x0004a07c) blid2_tripm_pane_t3_ParamLimits

0x8295,	// (0x0004a07c) blid2_tripm_pane_t3

0x0003,

0xf8aa,	// (0x00051691) blid2_tripm_pane_t_ParamLimits

0xf8aa,	// (0x00051691) blid2_tripm_pane_t

0x82dc,	// (0x0004a0c3) cell_blid2_satellite_pane_ParamLimits

0x82dc,	// (0x0004a0c3) cell_blid2_satellite_pane

0x82fa,	// (0x0004a0e1) cell_blid2_satellite_pane_g1

0x8303,	// (0x0004a0ea) cell_blid2_satellite_pane_t1

0xe87e,	// (0x00050665) blid2_speed_pane_g1

0x8311,	// (0x0004a0f8) blid2_speed_pane_t1

0x831f,	// (0x0004a106) blid2_speed_pane_t2

0x0001,

0xf8b3,	// (0x0005169a) blid2_speed_pane_t

0xe87e,	// (0x00050665) blid2_navig_ring_pane_g1

0x832d,	// (0x0004a114) blid2_navig_ring_pane_g2

0x8335,	// (0x0004a11c) blid2_navig_ring_pane_g3

0x833d,	// (0x0004a124) blid2_navig_ring_pane_g4

0x8345,	// (0x0004a12c) blid2_navig_ring_pane_g5

0x0004,

0xf8b8,	// (0x0005169f) blid2_navig_ring_pane_g

0xa6dd,	// (0x0004c4c4) bg_popup_window_pane_cp011

0x834d,	// (0x0004a134) popup_blid2_search_window_g1

0x8355,	// (0x0004a13c) popup_blid2_search_window_t1

0x8363,	// (0x0004a14a) popup_blid2_search_window_t2

0x0001,

0xf8c3,	// (0x000516aa) popup_blid2_search_window_t

0xc857,	// (0x0004e63e) main_browser_pane_g1

0xc558,	// (0x0004e33f) main_browser_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp011_ParamLimits

0x6ef8,	// (0x00048cdf) cell_vitu2_function_pane_g1_ParamLimits

0xe42d,	// (0x00050214) bg_popup_sub_pane_cp22_ParamLimits

0x1094,	// (0x00042e7b) input_focus_pane_cp08_ParamLimits

0x7a32,	// (0x00049819) popup_vitu2_query_button_pane_ParamLimits

0x7a32,	// (0x00049819) popup_vitu2_query_button_pane

0x10ab,	// (0x00042e92) popup_vitu2_query_input_button_pane

0x7a43,	// (0x0004982a) popup_vitu2_query_window_g1_ParamLimits

0x10b5,	// (0x00042e9c) popup_vitu2_query_window_g2_ParamLimits

0xf7c4,	// (0x000515ab) popup_vitu2_query_window_g_ParamLimits

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp026

0x8371,	// (0x0004a158) popup_vitu2_query_input_button_pane_g1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp025

0x8379,	// (0x0004a160) popup_vitu2_query_button_pane_t1

0x536a,	// (0x00047151) main_mp3_pane_t6

0x5378,	// (0x0004715f) popup_slider_window_cp01

0xae1f,	// (0x0004cc06) cam4_battery_pane

0xae86,	// (0x0004cc6d) cam4_battery_pane_cp02

0xaffb,	// (0x0004cde2) cam4_battery_pane_cp01

0xaffb,	// (0x0004cde2) cam4_battery_pane_cp03

0xe87e,	// (0x00050665) cam4_battery_pane_g1

0x8387,	// (0x0004a16e) cam4_battery_pane_g2

0x0001,

0xf8c8,	// (0x000516af) cam4_battery_pane_g

0xe740,	// (0x00050527) popup_blid_sat_info2_window_t11

0x36b1,	// (0x00045498) aid_size_touch_mv_arrow_left_ParamLimits

0x36da,	// (0x000454c1) aid_size_touch_mv_arrow_right_ParamLimits

0xcf40,	// (0x0004ed27) navi_pane_g1_ParamLimits

0x3703,	// (0x000454ea) navi_pane_g2_ParamLimits

0x3731,	// (0x00045518) navi_pane_g3_ParamLimits

0xf376,	// (0x0005115d) navi_pane_g_ParamLimits

0x3789,	// (0x00045570) navi_pane_mv_t1_ParamLimits

0x5f2e,	// (0x00047d15) grid_imed_effect_pane_ParamLimits

0x2605,	// (0x000443ec) aid_placing_vt_slider_lsc

0xc7a8,	// (0x0004e58f) aid_placing_vt_slider_prt

0xd8c7,	// (0x0004f6ae) bg_tb_trans_pane_cp01_ParamLimits

0xea05,	// (0x000507ec) popup_image_details_window_g1_ParamLimits

0xea18,	// (0x000507ff) popup_image_details_window_g2_ParamLimits

0xea2d,	// (0x00050814) popup_image_details_window_g3_ParamLimits

0xea2d,	// (0x00050814) popup_image_details_window_g3

0x059b,	// (0x00042382) popup_image_details_window_g_ParamLimits

0xea41,	// (0x00050828) popup_image_details_window_t1_ParamLimits

0xea53,	// (0x0005083a) popup_image_details_window_t2_ParamLimits

0xea6c,	// (0x00050853) popup_image_details_window_t3_ParamLimits

0xea80,	// (0x00050867) popup_image_details_window_t4_ParamLimits

0xea9b,	// (0x00050882) popup_image_details_window_t5_ParamLimits

0x05a2,	// (0x00042389) popup_image_details_window_t_ParamLimits

0x7eb6,	// (0x00049c9d) cl_header_name_pane_ParamLimits

0x7eb6,	// (0x00049c9d) cl_header_name_pane

0x8391,	// (0x0004a178) cl_header_name_pane_t1_ParamLimits

0x8391,	// (0x0004a178) cl_header_name_pane_t1

0x83b2,	// (0x0004a199) cl_header_name_pane_t2_ParamLimits

0x83b2,	// (0x0004a199) cl_header_name_pane_t2

0x83f4,	// (0x0004a1db) cl_header_name_pane_t3_ParamLimits

0x83f4,	// (0x0004a1db) cl_header_name_pane_t3

0x0002,

0xf8cd,	// (0x000516b4) cl_header_name_pane_t_ParamLimits

0xf8cd,	// (0x000516b4) cl_header_name_pane_t

0x375a,	// (0x00045541) navi_pane_mv_g2_ParamLimits

0x6e38,	// (0x00048c1f) field_vitu2_entry_pane_g1_ParamLimits

0x6e44,	// (0x00048c2b) field_vitu2_entry_pane_g2_ParamLimits

0x6e50,	// (0x00048c37) field_vitu2_entry_pane_g3_ParamLimits

0x6e50,	// (0x00048c37) field_vitu2_entry_pane_g3

0xf6ca,	// (0x000514b1) field_vitu2_entry_pane_g_ParamLimits

0x6e74,	// (0x00048c5b) cell_vitu2_itu_pane_g1_ParamLimits

0x6e84,	// (0x00048c6b) cell_vitu2_itu_pane_g2_ParamLimits

0x6e84,	// (0x00048c6b) cell_vitu2_itu_pane_g2

0x0001,

0xf6d6,	// (0x000514bd) cell_vitu2_itu_pane_g_ParamLimits

0xf6d6,	// (0x000514bd) cell_vitu2_itu_pane_g

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp05_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp05

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp03

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp04

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp10_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp10

0x11d2,	// (0x00042fb9) bg_vkb2_func_pane_cp08

0x7e18,	// (0x00049bff) bg_vkb2_func_pane_cp06

0x7e26,	// (0x00049c0d) bg_vkb2_func_pane_cp07

0x7ff1,	// (0x00049dd8) bg_vkb2_func_pane_cp11_ParamLimits

0x7ff1,	// (0x00049dd8) bg_vkb2_func_pane_cp11

0x8006,	// (0x00049ded) bg_vkb2_func_pane_cp12_ParamLimits

0x8006,	// (0x00049ded) bg_vkb2_func_pane_cp12

0xa6dd,	// (0x0004c4c4) bg_vkb2_func_pane_cp09

0x6f16,	// (0x00048cfd) bg_vkb2_func_pane_g1

0xc968,	// (0x0004e74f) bg_vkb2_func_pane_g2

0x6f1e,	// (0x00048d05) bg_vkb2_func_pane_g3

0x6f26,	// (0x00048d0d) bg_vkb2_func_pane_g4

0x78b3,	// (0x0004969a) bg_vkb2_func_pane_g5

0x6f3e,	// (0x00048d25) bg_vkb2_func_pane_g6

0x6f46,	// (0x00048d2d) bg_vkb2_func_pane_g7

0x6f36,	// (0x00048d1d) bg_vkb2_func_pane_g8

0xc948,	// (0x0004e72f) bg_vkb2_func_pane_g9

0x0008,

0xf8d4,	// (0x000516bb) bg_vkb2_func_pane_g

0x824d,	// (0x0004a034) blid2_tripm_pane_g6_ParamLimits

0x824d,	// (0x0004a034) blid2_tripm_pane_g6

0x63e0,	// (0x000481c7) mp4_progress_pane_g1

0x82c8,	// (0x0004a0af) blid2_tripm_values_pane_ParamLimits

0x82c8,	// (0x0004a0af) blid2_tripm_values_pane

0x8425,	// (0x0004a20c) blid2_tripm_values_pane_t1

0x8433,	// (0x0004a21a) blid2_tripm_values_pane_t2

0x8441,	// (0x0004a228) blid2_tripm_values_pane_t3

0x844f,	// (0x0004a236) blid2_tripm_values_pane_t4

0x845d,	// (0x0004a244) blid2_tripm_values_pane_t5

0x846b,	// (0x0004a252) blid2_tripm_values_pane_t6

0x8479,	// (0x0004a260) blid2_tripm_values_pane_t7

0x8487,	// (0x0004a26e) blid2_tripm_values_pane_t8

0x8495,	// (0x0004a27c) blid2_tripm_values_pane_t9

0x0008,

0xf8e7,	// (0x000516ce) blid2_tripm_values_pane_t

0x2647,	// (0x0004442e) call_video_pane_t1_ParamLimits

0x2665,	// (0x0004444c) call_video_pane_t2_ParamLimits

0xf268,	// (0x0005104f) call_video_pane_t_ParamLimits

0x0e9e,	// (0x00042c85) msg_header_pane_g1_ParamLimits

0xd15b,	// (0x0004ef42) msg_header_pane_g2_ParamLimits

0xd15b,	// (0x0004ef42) msg_header_pane_g2

0x0001,

0xf3f3,	// (0x000511da) msg_header_pane_g_ParamLimits

0xf3f3,	// (0x000511da) msg_header_pane_g

0xc558,	// (0x0004e33f) main_clock2_pane_ParamLimits

0x5c53,	// (0x00047a3a) grid_clock2_toolbar_pane_ParamLimits

0x5c53,	// (0x00047a3a) grid_clock2_toolbar_pane

0x5c53,	// (0x00047a3a) listscroll_clock2_pane_ParamLimits

0x5c53,	// (0x00047a3a) listscroll_clock2_pane

0x5d30,	// (0x00047b17) main_clock2_pane_t3_ParamLimits

0x5d30,	// (0x00047b17) main_clock2_pane_t3

0x5d4b,	// (0x00047b32) main_clock2_pane_t4_ParamLimits

0x5d4b,	// (0x00047b32) main_clock2_pane_t4

0x84a3,	// (0x0004a28a) cell_clock2_toolbar_pane

0x84ab,	// (0x0004a292) cell_clock2_toolbar_pane_cp01

0x84ab,	// (0x0004a292) cell_clock2_toolbar_pane_cp02

0x84b3,	// (0x0004a29a) cell_clock2_toolbar_pane_cp03

0x84bb,	// (0x0004a2a2) list_clock2_pane

0xce93,	// (0x0004ec7a) scroll_pane_cp10

0x84c3,	// (0x0004a2aa) list_single_clock2_pane_ParamLimits

0x84c3,	// (0x0004a2aa) list_single_clock2_pane

0xcfe0,	// (0x0004edc7) list_highlight_pane_cp08

0x84d0,	// (0x0004a2b7) list_single_clock2_pane_t1

0x84de,	// (0x0004a2c5) list_single_clock2_pane_t2

0x0001,

0xf8fa,	// (0x000516e1) list_single_clock2_pane_t

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp10

0x84ec,	// (0x0004a2d3) cell_clock2_toolbar_pane_g1

0x3c5a,	// (0x00045a41) aid_main_viewer_pane_g1_ParamLimits

0x3c5a,	// (0x00045a41) aid_main_viewer_pane_g1

0x3c68,	// (0x00045a4f) aid_main_viewer_pane_g2_ParamLimits

0x3c68,	// (0x00045a4f) aid_main_viewer_pane_g2

0x3c76,	// (0x00045a5d) aid_main_viewer_pane_g3_ParamLimits

0x3c76,	// (0x00045a5d) aid_main_viewer_pane_g3

0x3c85,	// (0x00045a6c) aid_main_viewer_pane_g4_ParamLimits

0x3c85,	// (0x00045a6c) aid_main_viewer_pane_g4

0x0003,

0xf404,	// (0x000511eb) aid_main_viewer_pane_g_ParamLimits

0xf404,	// (0x000511eb) aid_main_viewer_pane_g

0x4591,	// (0x00046378) main_calc_pane_ParamLimits

0x45a5,	// (0x0004638c) main_dialer2_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) main_cam6_pane

0xa6dd,	// (0x0004c4c4) main_vid6_pane

0x5c5f,	// (0x00047a46) listscroll_gen_pane_cp06_ParamLimits

0x5c5f,	// (0x00047a46) listscroll_gen_pane_cp06

0x5d66,	// (0x00047b4d) main_clock2_pane_t5_ParamLimits

0x5d66,	// (0x00047b4d) main_clock2_pane_t5

0x5dc3,	// (0x00047baa) aid_call2_pane_cp10_ParamLimits

0x5dd5,	// (0x00047bbc) aid_call_pane_cp10_ParamLimits

0xcf15,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf15,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5de7,	// (0x00047bce) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5de7,	// (0x00047bce) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf15,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf5f0,	// (0x000513d7) popup_clock_analogue_window_cp10_g_ParamLimits

0x5df9,	// (0x00047be0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x650a,	// (0x000482f1) cell_dialer2_keypad_pane_g2_ParamLimits

0x650a,	// (0x000482f1) cell_dialer2_keypad_pane_g2

0x0001,

0xf669,	// (0x00051450) cell_dialer2_keypad_pane_g_ParamLimits

0xf669,	// (0x00051450) cell_dialer2_keypad_pane_g

0x6526,	// (0x0004830d) cell_dialer2_keypad_pane_t1

0x731b,	// (0x00049102) main_cset_text2_pane_ParamLimits

0x731b,	// (0x00049102) main_cset_text2_pane

0x7de4,	// (0x00049bcb) area_vitu2_query_pane_g1_ParamLimits

0x1199,	// (0x00042f80) area_vitu2_query_pane_g2_ParamLimits

0xf817,	// (0x000515fe) area_vitu2_query_pane_g_ParamLimits

0xafd7,	// (0x0004cdbe) area_vitu2_query_pane_t7_ParamLimits

0xafd7,	// (0x0004cdbe) area_vitu2_query_pane_t7

0x7e18,	// (0x00049bff) bg_button_pane_cp018_ParamLimits

0x7e26,	// (0x00049c0d) bg_button_pane_cp021_ParamLimits

0x11d2,	// (0x00042fb9) bg_button_pane_cp022_ParamLimits

0x11d2,	// (0x00042fb9) bg_vkb2_func_pane_cp08_ParamLimits

0x7e18,	// (0x00049bff) bg_vkb2_func_pane_cp06_ParamLimits

0x7e26,	// (0x00049c0d) bg_vkb2_func_pane_cp07_ParamLimits

0x11e3,	// (0x00042fca) input_focus_pane_cp09_ParamLimits

0xb0d0,	// (0x0004ceb7) cam6_autofocus_pane_ParamLimits

0xb0d0,	// (0x0004ceb7) cam6_autofocus_pane

0x84f4,	// (0x0004a2db) cam6_image_uncrop_pane_ParamLimits

0x84f4,	// (0x0004a2db) cam6_image_uncrop_pane

0x8503,	// (0x0004a2ea) cam6_indi_pane_ParamLimits

0x8503,	// (0x0004a2ea) cam6_indi_pane

0x8519,	// (0x0004a300) cam6_mode_pane_ParamLimits

0x8519,	// (0x0004a300) cam6_mode_pane

0x852b,	// (0x0004a312) cam6_timer_pane_ParamLimits

0x852b,	// (0x0004a312) cam6_timer_pane

0x8537,	// (0x0004a31e) cam6_zoom_pane_ParamLimits

0x8537,	// (0x0004a31e) cam6_zoom_pane

0x8543,	// (0x0004a32a) cam6_mode_pane_g1_ParamLimits

0x8543,	// (0x0004a32a) cam6_mode_pane_g1

0x8553,	// (0x0004a33a) cam6_mode_pane_g2_ParamLimits

0x8553,	// (0x0004a33a) cam6_mode_pane_g2

0x8563,	// (0x0004a34a) cam6_mode_pane_g3_ParamLimits

0x8563,	// (0x0004a34a) cam6_mode_pane_g3

0x8573,	// (0x0004a35a) cam6_mode_pane_g4_ParamLimits

0x8573,	// (0x0004a35a) cam6_mode_pane_g4

0x0003,

0xf8ff,	// (0x000516e6) cam6_mode_pane_g_ParamLimits

0xf8ff,	// (0x000516e6) cam6_mode_pane_g

0x8583,	// (0x0004a36a) bg_tb_trans_pane_cp08_ParamLimits

0x8583,	// (0x0004a36a) bg_tb_trans_pane_cp08

0x8591,	// (0x0004a378) cam6_battery_pane_ParamLimits

0x8591,	// (0x0004a378) cam6_battery_pane

0x85a7,	// (0x0004a38e) cam6_indi_pane_g1_ParamLimits

0x85a7,	// (0x0004a38e) cam6_indi_pane_g1

0x85b9,	// (0x0004a3a0) cam6_indi_pane_g2_ParamLimits

0x85b9,	// (0x0004a3a0) cam6_indi_pane_g2

0x85cb,	// (0x0004a3b2) cam6_indi_pane_g3_ParamLimits

0x85cb,	// (0x0004a3b2) cam6_indi_pane_g3

0x0002,

0xf908,	// (0x000516ef) cam6_indi_pane_g_ParamLimits

0xf908,	// (0x000516ef) cam6_indi_pane_g

0x85dd,	// (0x0004a3c4) cam6_indi_pane_t1_ParamLimits

0x85dd,	// (0x0004a3c4) cam6_indi_pane_t1

0x8603,	// (0x0004a3ea) cam6_autofocus_pane_g1

0x860b,	// (0x0004a3f2) cam6_autofocus_pane_g2

0x8613,	// (0x0004a3fa) cam6_autofocus_pane_g3

0x861b,	// (0x0004a402) cam6_autofocus_pane_g4

0x0003,

0xf90f,	// (0x000516f6) cam6_autofocus_pane_g

0x8623,	// (0x0004a40a) cam6_timer_pane_g1

0x862b,	// (0x0004a412) cam6_timer_pane_t1

0x8639,	// (0x0004a420) cam6_zoom_cont_pane

0x8641,	// (0x0004a428) cam6_zoom_pane_g1

0x8649,	// (0x0004a430) cam6_zoom_pane_g2

0x8651,	// (0x0004a438) cam6_zoom_pane_g3

0x0002,

0xf918,	// (0x000516ff) cam6_zoom_pane_g

0xe87e,	// (0x00050665) cam6_battery_pane_g1

0xe87e,	// (0x00050665) cam6_battery_pane_g2

0x0001,

0x055f,	// (0x00042346) cam6_battery_pane_g

0x8659,	// (0x0004a440) cam6_zoom_cont_pane_g1

0x8662,	// (0x0004a449) cam6_zoom_cont_pane_g2

0x866b,	// (0x0004a452) cam6_zoom_cont_pane_g3

0x0002,

0xf91f,	// (0x00051706) cam6_zoom_cont_pane_g

0x8688,	// (0x0004a46f) cam6_mode_pane_cp_ParamLimits

0x8688,	// (0x0004a46f) cam6_mode_pane_cp

0x8537,	// (0x0004a31e) cam6_zoom_pane_cp_ParamLimits

0x8537,	// (0x0004a31e) cam6_zoom_pane_cp

0x869a,	// (0x0004a481) vid6_image_uncrop_cif_pane_ParamLimits

0x869a,	// (0x0004a481) vid6_image_uncrop_cif_pane

0x86aa,	// (0x0004a491) vid6_image_uncrop_nhd_pane_ParamLimits

0x86aa,	// (0x0004a491) vid6_image_uncrop_nhd_pane

0x84f4,	// (0x0004a2db) vid6_image_uncrop_vga_pane_ParamLimits

0x84f4,	// (0x0004a2db) vid6_image_uncrop_vga_pane

0x86c9,	// (0x0004a4b0) vid6_image_uncrop_wvga_pane_ParamLimits

0x86c9,	// (0x0004a4b0) vid6_image_uncrop_wvga_pane

0x86d8,	// (0x0004a4bf) vid6_indi_pane_ParamLimits

0x86d8,	// (0x0004a4bf) vid6_indi_pane

0x8583,	// (0x0004a36a) bg_tb_trans_pane_cp09_ParamLimits

0x8583,	// (0x0004a36a) bg_tb_trans_pane_cp09

0x86f0,	// (0x0004a4d7) cam6_battery_pane_cp_ParamLimits

0x86f0,	// (0x0004a4d7) cam6_battery_pane_cp

0x86fc,	// (0x0004a4e3) vid6_indi_pane_g1_ParamLimits

0x86fc,	// (0x0004a4e3) vid6_indi_pane_g1

0x870e,	// (0x0004a4f5) vid6_indi_pane_g2_ParamLimits

0x870e,	// (0x0004a4f5) vid6_indi_pane_g2

0x8720,	// (0x0004a507) vid6_indi_pane_g3_ParamLimits

0x8720,	// (0x0004a507) vid6_indi_pane_g3

0x8735,	// (0x0004a51c) vid6_indi_pane_g4_ParamLimits

0x8735,	// (0x0004a51c) vid6_indi_pane_g4

0x874a,	// (0x0004a531) vid6_indi_pane_g5_ParamLimits

0x874a,	// (0x0004a531) vid6_indi_pane_g5

0x0004,

0xf926,	// (0x0005170d) vid6_indi_pane_g_ParamLimits

0xf926,	// (0x0005170d) vid6_indi_pane_g

0x8764,	// (0x0004a54b) vid6_indi_pane_t1_ParamLimits

0x8764,	// (0x0004a54b) vid6_indi_pane_t1

0x877a,	// (0x0004a561) vid6_indi_pane_t2_ParamLimits

0x877a,	// (0x0004a561) vid6_indi_pane_t2

0x87a2,	// (0x0004a589) vid6_indi_pane_t3_ParamLimits

0x87a2,	// (0x0004a589) vid6_indi_pane_t3

0x87ca,	// (0x0004a5b1) vid6_indi_pane_t4_ParamLimits

0x87ca,	// (0x0004a5b1) vid6_indi_pane_t4

0x0003,

0xf931,	// (0x00051718) vid6_indi_pane_t_ParamLimits

0xf931,	// (0x00051718) vid6_indi_pane_t

0x87ee,	// (0x0004a5d5) wait_bar_pane_cp08

0x87fd,	// (0x0004a5e4) main_cset_text2_pane_t1_ParamLimits

0x87fd,	// (0x0004a5e4) main_cset_text2_pane_t1

0x8673,	// (0x0004a45a) listscroll_gen_pane_cp06_t1_ParamLimits

0x8673,	// (0x0004a45a) listscroll_gen_pane_cp06_t1

0xa6dd,	// (0x0004c4c4) main_cam6_set_pane

0xeae5,	// (0x000508cc) bg_tb_trans_pane_cp06_ParamLimits

0xae27,	// (0x0004cc0e) cam4_indicators_pane_g1_ParamLimits

0xae38,	// (0x0004cc1f) cam4_indicators_pane_g2_ParamLimits

0xf6a6,	// (0x0005148d) cam4_indicators_pane_g_ParamLimits

0xae56,	// (0x0004cc3d) cam4_indicators_pane_t1_ParamLimits

0xae78,	// (0x0004cc5f) bg_tb_trans_pane_cp07_ParamLimits

0x6bb3,	// (0x0004899a) vid4_indicators_pane_g1_ParamLimits

0x6bc0,	// (0x000489a7) vid4_indicators_pane_g2_ParamLimits

0x6bcd,	// (0x000489b4) vid4_indicators_pane_g3_ParamLimits

0x6bda,	// (0x000489c1) vid4_indicators_pane_g4_ParamLimits

0xf6b8,	// (0x0005149f) vid4_indicators_pane_g_ParamLimits

0x6bf2,	// (0x000489d9) vid4_indicators_pane_t1_ParamLimits

0xb003,	// (0x0004cdea) vid4_progress_pane_g1_ParamLimits

0xb013,	// (0x0004cdfa) vid4_progress_pane_g2_ParamLimits

0xb023,	// (0x0004ce0a) vid4_progress_pane_g3_ParamLimits

0xae38,	// (0x0004cc1f) vid4_progress_pane_g4_ParamLimits

0xf862,	// (0x00051649) vid4_progress_pane_g_ParamLimits

0xb02f,	// (0x0004ce16) vid4_progress_pane_t1_ParamLimits

0xb044,	// (0x0004ce2b) vid4_progress_pane_t2_ParamLimits

0xb05a,	// (0x0004ce41) vid4_progress_pane_t3_ParamLimits

0xf86d,	// (0x00051654) vid4_progress_pane_t_ParamLimits

0xb06f,	// (0x0004ce56) wait_bar_pane_cp07_ParamLimits

0x881d,	// (0x0004a604) main_cam6_set_pane_g2_ParamLimits

0x881d,	// (0x0004a604) main_cam6_set_pane_g2

0x8841,	// (0x0004a628) main_cset6_listscroll_pane_ParamLimits

0x8841,	// (0x0004a628) main_cset6_listscroll_pane

0x885d,	// (0x0004a644) main_cset6_slider_pane_ParamLimits

0x885d,	// (0x0004a644) main_cset6_slider_pane

0x8873,	// (0x0004a65a) main_cset6_text2_pane_ParamLimits

0x8873,	// (0x0004a65a) main_cset6_text2_pane

0x8881,	// (0x0004a668) main_cset6_text_pane

0x8889,	// (0x0004a670) main_cset_list_pane_copy1_ParamLimits

0x8889,	// (0x0004a670) main_cset_list_pane_copy1

0x8899,	// (0x0004a680) scroll_pane_cp028_copy1

0x88a2,	// (0x0004a689) cset_list_set_pane_copy1

0x88b5,	// (0x0004a69c) aid_position_infowindow_above_copy1

0x88bd,	// (0x0004a6a4) aid_position_infowindow_below_copy1

0x11f4,	// (0x00042fdb) cset_list_set_pane_g1_copy1

0xb0de,	// (0x0004cec5) cset_list_set_pane_g3_copy1_ParamLimits

0xb0de,	// (0x0004cec5) cset_list_set_pane_g3_copy1

0x1036,	// (0x00042e1d) cset_list_set_pane_t1_copy1_ParamLimits

0x1036,	// (0x00042e1d) cset_list_set_pane_t1_copy1

0xd8c7,	// (0x0004f6ae) list_highlight_pane_cp021_copy1_ParamLimits

0xd8c7,	// (0x0004f6ae) list_highlight_pane_cp021_copy1

0x88c5,	// (0x0004a6ac) cset6_slider_pane_ParamLimits

0x88c5,	// (0x0004a6ac) cset6_slider_pane

0x88f1,	// (0x0004a6d8) main_cset6_slider_pane_g1_ParamLimits

0x88f1,	// (0x0004a6d8) main_cset6_slider_pane_g1

0x8919,	// (0x0004a700) main_cset6_slider_pane_g2_ParamLimits

0x8919,	// (0x0004a700) main_cset6_slider_pane_g2

0x73f5,	// (0x000491dc) main_cset6_slider_pane_g3_ParamLimits

0x73f5,	// (0x000491dc) main_cset6_slider_pane_g3

0x7425,	// (0x0004920c) main_cset6_slider_pane_g4_ParamLimits

0x7425,	// (0x0004920c) main_cset6_slider_pane_g4

0x746d,	// (0x00049254) main_cset6_slider_pane_g5_ParamLimits

0x746d,	// (0x00049254) main_cset6_slider_pane_g5

0x73f5,	// (0x000491dc) main_cset6_slider_pane_g7_ParamLimits

0x73f5,	// (0x000491dc) main_cset6_slider_pane_g7

0x7401,	// (0x000491e8) main_cset6_slider_pane_g8_ParamLimits

0x7401,	// (0x000491e8) main_cset6_slider_pane_g8

0x740d,	// (0x000491f4) main_cset6_slider_pane_g9_ParamLimits

0x740d,	// (0x000491f4) main_cset6_slider_pane_g9

0x7419,	// (0x00049200) main_cset6_slider_pane_g10_ParamLimits

0x7419,	// (0x00049200) main_cset6_slider_pane_g10

0x7425,	// (0x0004920c) main_cset6_slider_pane_g11_ParamLimits

0x7425,	// (0x0004920c) main_cset6_slider_pane_g11

0x7431,	// (0x00049218) main_cset6_slider_pane_g12_ParamLimits

0x7431,	// (0x00049218) main_cset6_slider_pane_g12

0x743d,	// (0x00049224) main_cset6_slider_pane_g13_ParamLimits

0x743d,	// (0x00049224) main_cset6_slider_pane_g13

0x7449,	// (0x00049230) main_cset6_slider_pane_g14_ParamLimits

0x7449,	// (0x00049230) main_cset6_slider_pane_g14

0x8941,	// (0x0004a728) main_cset6_slider_pane_g15_ParamLimits

0x8941,	// (0x0004a728) main_cset6_slider_pane_g15

0x746d,	// (0x00049254) main_cset6_slider_pane_g16_ParamLimits

0x746d,	// (0x00049254) main_cset6_slider_pane_g16

0x7479,	// (0x00049260) main_cset6_slider_pane_g17_ParamLimits

0x7479,	// (0x00049260) main_cset6_slider_pane_g17

0x0011,

0xf93a,	// (0x00051721) main_cset6_slider_pane_g_ParamLimits

0xf93a,	// (0x00051721) main_cset6_slider_pane_g

0x8959,	// (0x0004a740) main_cset6_slider_pane_t1_ParamLimits

0x8959,	// (0x0004a740) main_cset6_slider_pane_t1

0x899a,	// (0x0004a781) main_cset6_slider_pane_t2_ParamLimits

0x899a,	// (0x0004a781) main_cset6_slider_pane_t2

0x89c5,	// (0x0004a7ac) main_cset6_slider_pane_t3_ParamLimits

0x89c5,	// (0x0004a7ac) main_cset6_slider_pane_t3

0x89f0,	// (0x0004a7d7) main_cset6_slider_pane_t4_ParamLimits

0x89f0,	// (0x0004a7d7) main_cset6_slider_pane_t4

0x8a1b,	// (0x0004a802) main_cset6_slider_pane_t5_ParamLimits

0x8a1b,	// (0x0004a802) main_cset6_slider_pane_t5

0x8a46,	// (0x0004a82d) main_cset6_slider_pane_t7_ParamLimits

0x8a46,	// (0x0004a82d) main_cset6_slider_pane_t7

0x8a7c,	// (0x0004a863) main_cset6_slider_pane_t8_ParamLimits

0x8a7c,	// (0x0004a863) main_cset6_slider_pane_t8

0x8aa0,	// (0x0004a887) main_cset6_slider_pane_t9_ParamLimits

0x8aa0,	// (0x0004a887) main_cset6_slider_pane_t9

0x8ac4,	// (0x0004a8ab) main_cset6_slider_pane_t10_ParamLimits

0x8ac4,	// (0x0004a8ab) main_cset6_slider_pane_t10

0x8ae8,	// (0x0004a8cf) main_cset6_slider_pane_t11_ParamLimits

0x8ae8,	// (0x0004a8cf) main_cset6_slider_pane_t11

0x8b0c,	// (0x0004a8f3) main_cset6_slider_pane_t14_ParamLimits

0x8b0c,	// (0x0004a8f3) main_cset6_slider_pane_t14

0x8b45,	// (0x0004a92c) main_cset6_slider_pane_t15_ParamLimits

0x8b45,	// (0x0004a92c) main_cset6_slider_pane_t15

0x000b,

0xf95f,	// (0x00051746) main_cset6_slider_pane_t_ParamLimits

0xf95f,	// (0x00051746) main_cset6_slider_pane_t

0x76e0,	// (0x000494c7) cset_slider_pane_g1_copy1

0x76e9,	// (0x000494d0) cset_slider_pane_g2_copy1

0x76f2,	// (0x000494d9) cset_slider_pane_g3_copy1

0xa6dd,	// (0x0004c4c4) bg_popup_sub_pane_cp011_copy1

0x7a91,	// (0x00049878) main_cset_text_pane_g1_copy1

0x7a99,	// (0x00049880) main_cset_text_pane_t1_copy1

0x7aa7,	// (0x0004988e) main_cset_text_pane_t2_copy1

0x7ab5,	// (0x0004989c) main_cset_text_pane_t3_copy1

0x7ac3,	// (0x000498aa) main_cset_text_pane_t4_copy1

0x7ad1,	// (0x000498b8) main_cset_text_pane_t5_copy1

0x7adf,	// (0x000498c6) main_cset_text_pane_t6_copy1

0x7aed,	// (0x000498d4) main_cset_text_pane_t7_copy1

0x87fd,	// (0x0004a5e4) main_cset_text2_pane_t1_copy1

0xa6dd,	// (0x0004c4c4) main_ncimui_pane

0x47db,	// (0x000465c2) popup_query_ncimui_window_ParamLimits

0x47db,	// (0x000465c2) popup_query_ncimui_window

0xab74,	// (0x0004c95b) field_cale_ev2_pane_g4_ParamLimits

0xab74,	// (0x0004c95b) field_cale_ev2_pane_g4

0x635e,	// (0x00048145) cell_video_dialer_keypad_pane_g2_ParamLimits

0x635e,	// (0x00048145) cell_video_dialer_keypad_pane_g2

0x0001,

0xf644,	// (0x0005142b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf644,	// (0x0005142b) cell_video_dialer_keypad_pane_g

0x6376,	// (0x0004815d) cell_video_dialer_keypad_pane_t1

0xa6dd,	// (0x0004c4c4) bg_popup_window_pane_cp012

0xcd55,	// (0x0004eb3c) heading_pane_cp06

0x8c95,	// (0x0004aa7c) ncim_query_content_pane

0xa6dd,	// (0x0004c4c4) bg_popup_heading_pane_cp01

0x8c9d,	// (0x0004aa84) ncim_heading_pane_t1

0x8cab,	// (0x0004aa92) ncim_indicator_popup_pane

0x8cbd,	// (0x0004aaa4) ncim_query_button_pane

0x8cdd,	// (0x0004aac4) ncim_query_content_pane_t1

0x8cef,	// (0x0004aad6) ncim_query_content_pane_t2

0x0005,

0xf99e,	// (0x00051785) ncim_query_content_pane_t

0x8da1,	// (0x0004ab88) ncim_query_list_pane

0x8db3,	// (0x0004ab9a) ncim_query_popup_pane

0x8cab,	// (0x0004aa92) ncim_indicator_popup_pane_ParamLimits

0x8cc5,	// (0x0004aaac) ncim_query_content_pane_g1_ParamLimits

0x8cc5,	// (0x0004aaac) ncim_query_content_pane_g1

0x8cdd,	// (0x0004aac4) ncim_query_content_pane_t1_ParamLimits

0x8cef,	// (0x0004aad6) ncim_query_content_pane_t2_ParamLimits

0x8d01,	// (0x0004aae8) ncim_query_content_pane_t3_ParamLimits

0x8d01,	// (0x0004aae8) ncim_query_content_pane_t3

0x8d29,	// (0x0004ab10) ncim_query_content_pane_t4_ParamLimits

0x8d29,	// (0x0004ab10) ncim_query_content_pane_t4

0x8d51,	// (0x0004ab38) ncim_query_content_pane_t5_ParamLimits

0x8d51,	// (0x0004ab38) ncim_query_content_pane_t5

0x8d79,	// (0x0004ab60) ncim_query_content_pane_t6_ParamLimits

0x8d79,	// (0x0004ab60) ncim_query_content_pane_t6

0xf99e,	// (0x00051785) ncim_query_content_pane_t_ParamLimits

0x8da1,	// (0x0004ab88) ncim_query_list_pane_ParamLimits

0x8db3,	// (0x0004ab9a) ncim_query_popup_pane_ParamLimits

0x8dc7,	// (0x0004abae) wait_bar_pane_cp04

0xa6dd,	// (0x0004c4c4) input_focus_pane_cp011

0x8dcf,	// (0x0004abb6) ncim_query_popup_pane_t1

0x8ddd,	// (0x0004abc4) ncim_list_query_list_pane_ParamLimits

0x8ddd,	// (0x0004abc4) ncim_list_query_list_pane

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp027

0x8df0,	// (0x0004abd7) ncim_query_button_pane_g1

0xa6dd,	// (0x0004c4c4) list_highlight_pane_cp012

0x8dfa,	// (0x0004abe1) ncim_list_query_list_pane_g1

0x8e02,	// (0x0004abe9) ncim_list_query_list_pane_t1

0xae47,	// (0x0004cc2e) cam4_indicators_pane_g3_ParamLimits

0xae47,	// (0x0004cc2e) cam4_indicators_pane_g3

0x6be6,	// (0x000489cd) vid4_indicators_pane_g5_ParamLimits

0x6be6,	// (0x000489cd) vid4_indicators_pane_g5

0xae47,	// (0x0004cc2e) vid4_progress_pane_g5_ParamLimits

0xae47,	// (0x0004cc2e) vid4_progress_pane_g5

0x8bae,	// (0x0004a995) main_ncimui_pane_g1

0x8c04,	// (0x0004a9eb) ncimui_group_query_pane_ParamLimits

0x8c04,	// (0x0004a9eb) ncimui_group_query_pane

0x8c40,	// (0x0004aa27) ncimui_list_pane_ParamLimits

0x8c40,	// (0x0004aa27) ncimui_list_pane

0x8c61,	// (0x0004aa48) ncimui_text_pane_ParamLimits

0x8c61,	// (0x0004aa48) ncimui_text_pane

0x8e10,	// (0x0004abf7) ncimui_text_pane_t1_ParamLimits

0x8e10,	// (0x0004abf7) ncimui_text_pane_t1

0x8e2e,	// (0x0004ac15) ncimui_list_single_graphic_pane_ParamLimits

0x8e2e,	// (0x0004ac15) ncimui_list_single_graphic_pane

0x8e3e,	// (0x0004ac25) ncimui_query_pane_ParamLimits

0x8e3e,	// (0x0004ac25) ncimui_query_pane

0xa6dd,	// (0x0004c4c4) list_highlight_pane_cp013

0x8e51,	// (0x0004ac38) ncim_list_query_list_pane_t1_copy1

0x8dfa,	// (0x0004abe1) ncim_list_single_graphic_pane_g1

0x8e5f,	// (0x0004ac46) ncim_query_button_pane_cp01

0x8e6b,	// (0x0004ac52) ncim_query_entry_pane_ParamLimits

0x8e6b,	// (0x0004ac52) ncim_query_entry_pane

0x8e7e,	// (0x0004ac65) ncimui_query_pane_g1

0x8e8a,	// (0x0004ac71) ncimui_query_pane_t1_ParamLimits

0x8e8a,	// (0x0004ac71) ncimui_query_pane_t1

0xd8c7,	// (0x0004f6ae) input_focus_pane_cp012

0x8ea3,	// (0x0004ac8a) ncim_query_entry_pane_t1

0xc558,	// (0x0004e33f) main_im_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) main_mobtv_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) main_mobtv_pane

0x740d,	// (0x000491f4) main_cset6_slider_pane_g18_ParamLimits

0x740d,	// (0x000491f4) main_cset6_slider_pane_g18

0x743d,	// (0x00049224) main_cset6_slider_pane_g19_ParamLimits

0x743d,	// (0x00049224) main_cset6_slider_pane_g19

0x8eb5,	// (0x0004ac9c) bg_main_mobtv_pane_ParamLimits

0x8eb5,	// (0x0004ac9c) bg_main_mobtv_pane

0x8ec3,	// (0x0004acaa) main_mobtv_info_pane

0x8ecc,	// (0x0004acb3) main_mobtv_loading_pane_ParamLimits

0x8ecc,	// (0x0004acb3) main_mobtv_loading_pane

0x8ed9,	// (0x0004acc0) main_mobtv_pg_channel_list_pane

0x8ee3,	// (0x0004acca) main_mobtv_pg_hdr_pane

0x8eec,	// (0x0004acd3) main_mobtv_programe_curr_pane_ParamLimits

0x8eec,	// (0x0004acd3) main_mobtv_programe_curr_pane

0x8ef9,	// (0x0004ace0) main_mobtv_programe_next_pane_ParamLimits

0x8ef9,	// (0x0004ace0) main_mobtv_programe_next_pane

0x8f06,	// (0x0004aced) popup_mobtv_noti_window

0xe87e,	// (0x00050665) main_tv_pg_hdr_pane_g1

0x8f0e,	// (0x0004acf5) main_tv_pg_hdr_pane_g2

0x8f16,	// (0x0004acfd) main_tv_pg_hdr_pane_g3

0x8f1e,	// (0x0004ad05) main_tv_pg_hdr_pane_g4

0x8f26,	// (0x0004ad0d) main_tv_pg_hdr_pane_g5

0x8f30,	// (0x0004ad17) main_tv_pg_hdr_pane_g6

0x8f3a,	// (0x0004ad21) main_tv_pg_hdr_pane_g7

0x8f44,	// (0x0004ad2b) main_tv_pg_hdr_pane_g8

0x8f4e,	// (0x0004ad35) main_tv_pg_hdr_pane_g9

0x8f58,	// (0x0004ad3f) main_tv_pg_hdr_pane_g10

0x8f62,	// (0x0004ad49) main_tv_pg_hdr_pane_g11

0x000a,

0xf9ab,	// (0x00051792) main_tv_pg_hdr_pane_g

0x8f6c,	// (0x0004ad53) main_tv_pg_hdr_pane_t1

0x8f7a,	// (0x0004ad61) main_tv_pg_hdr_pane_t2

0x8f88,	// (0x0004ad6f) main_tv_pg_hdr_pane_t3

0x8f98,	// (0x0004ad7f) main_tv_pg_hdr_pane_t4

0x8fa8,	// (0x0004ad8f) main_tv_pg_hdr_pane_t5

0x0004,

0xf9c2,	// (0x000517a9) main_tv_pg_hdr_pane_t

0x8fb8,	// (0x0004ad9f) single_mobtv_pg_channel_pane_ParamLimits

0x8fb8,	// (0x0004ad9f) single_mobtv_pg_channel_pane

0x8fca,	// (0x0004adb1) single_mobtv_pg_channel_table_pane

0x8fd3,	// (0x0004adba) single_mobtv_pg_channel_thumb_pane

0x8fdc,	// (0x0004adc3) single_tv_pg_channel_pane_g1

0x8fe5,	// (0x0004adcc) single_tv_pg_channel_pane_g2

0x0001,

0xf9cd,	// (0x000517b4) single_tv_pg_channel_pane_g

0xeae5,	// (0x000508cc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeae5,	// (0x000508cc) bg_single_mobtv_pg_channel_thumb_pane

0x8fee,	// (0x0004add5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8fee,	// (0x0004add5) single_mobtv_pg_channel_thumb_pane_g1

0x8ffc,	// (0x0004ade3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8ffc,	// (0x0004ade3) single_mobtv_pg_channel_thumb_pane_g2

0x9008,	// (0x0004adef) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x9008,	// (0x0004adef) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf9d2,	// (0x000517b9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf9d2,	// (0x000517b9) single_mobtv_pg_channel_thumb_pane_g

0x9014,	// (0x0004adfb) single_mobtv_pg_channel_thumb_pane_t1

0x9022,	// (0x0004ae09) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf9d9,	// (0x000517c0) single_mobtv_pg_channel_thumb_pane_t

0xe87e,	// (0x00050665) bg_single_mobtv_pg_channel_table_pane_g1

0xe87e,	// (0x00050665) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x055f,	// (0x00042346) bg_single_mobtv_pg_channel_table_pane_g

0x9030,	// (0x0004ae17) single_mobtv_pg_channel_table_pane_t1

0x903e,	// (0x0004ae25) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf9de,	// (0x000517c5) single_mobtv_pg_channel_table_pane_t

0x9054,	// (0x0004ae3b) main_mobtv_info_pane_g1_ParamLimits

0x9054,	// (0x0004ae3b) main_mobtv_info_pane_g1

0x9072,	// (0x0004ae59) main_mobtv_info_pane_t1_ParamLimits

0x9072,	// (0x0004ae59) main_mobtv_info_pane_t1

0x90ea,	// (0x0004aed1) main_mobtv_info_pane_t2_ParamLimits

0x90ea,	// (0x0004aed1) main_mobtv_info_pane_t2

0x0002,

0xf9e8,	// (0x000517cf) main_mobtv_info_pane_t_ParamLimits

0xf9e8,	// (0x000517cf) main_mobtv_info_pane_t

0x9179,	// (0x0004af60) wait_bar_pane_cp05

0x918b,	// (0x0004af72) main_mobtv_loading_pane_g1_ParamLimits

0x918b,	// (0x0004af72) main_mobtv_loading_pane_g1

0x919e,	// (0x0004af85) main_mobtv_loading_pane_g2_ParamLimits

0x919e,	// (0x0004af85) main_mobtv_loading_pane_g2

0x91aa,	// (0x0004af91) main_mobtv_loading_pane_g3_ParamLimits

0x91aa,	// (0x0004af91) main_mobtv_loading_pane_g3

0x0002,

0xf9ef,	// (0x000517d6) main_mobtv_loading_pane_g_ParamLimits

0xf9ef,	// (0x000517d6) main_mobtv_loading_pane_g

0x91bd,	// (0x0004afa4) main_mobtv_loading_pane_t1_ParamLimits

0x91bd,	// (0x0004afa4) main_mobtv_loading_pane_t1

0x91d5,	// (0x0004afbc) main_mobtv_loading_pane_t2_ParamLimits

0x91d5,	// (0x0004afbc) main_mobtv_loading_pane_t2

0x0001,

0xf9f6,	// (0x000517dd) main_mobtv_loading_pane_t_ParamLimits

0xf9f6,	// (0x000517dd) main_mobtv_loading_pane_t

0x91f9,	// (0x0004afe0) wait_bar_pane_cp06_ParamLimits

0x91f9,	// (0x0004afe0) wait_bar_pane_cp06

0x9208,	// (0x0004afef) main_mobtv_programe_curr_pane_t1

0x9216,	// (0x0004affd) main_mobtv_programe_curr_pane_t2

0x0001,

0xf9fb,	// (0x000517e2) main_mobtv_programe_curr_pane_t

0x9224,	// (0x0004b00b) main_mobtv_programe_next_pane_t1

0x9232,	// (0x0004b019) main_mobtv_programe_next_pane_t2

0x9240,	// (0x0004b027) main_mobtv_programe_next_pane_t3

0x0002,

0xfa00,	// (0x000517e7) main_mobtv_programe_next_pane_t

0xa6dd,	// (0x0004c4c4) bg_popup_mobtv_noti_window_pane

0x924e,	// (0x0004b035) popup_mobtv_noti_window_g1

0x9256,	// (0x0004b03d) popup_mobtv_noti_window_t1

0x9264,	// (0x0004b04b) popup_mobtv_noti_window_t2

0x0001,

0xfa07,	// (0x000517ee) popup_mobtv_noti_window_t

0xe87e,	// (0x00050665) bg_popup_mobtv_noti_window_pane_g1

0xa6dd,	// (0x0004c4c4) sc_clock_pane

0xa6dd,	// (0x0004c4c4) main_fs_bigclock_pane

0x82b2,	// (0x0004a099) blid2_tripm_pane_t4_ParamLimits

0x82b2,	// (0x0004a099) blid2_tripm_pane_t4

0x9272,	// (0x0004b059) sc_clock_pane_g1_ParamLimits

0x9272,	// (0x0004b059) sc_clock_pane_g1

0x9284,	// (0x0004b06b) sc_clock_pane_t1_ParamLimits

0x9284,	// (0x0004b06b) sc_clock_pane_t1

0x92a6,	// (0x0004b08d) sc_clock_pane_t2_ParamLimits

0x92a6,	// (0x0004b08d) sc_clock_pane_t2

0x92be,	// (0x0004b0a5) sc_clock_pane_t3_ParamLimits

0x92be,	// (0x0004b0a5) sc_clock_pane_t3

0x0004,

0xfa0c,	// (0x000517f3) sc_clock_pane_t_ParamLimits

0xfa0c,	// (0x000517f3) sc_clock_pane_t

0x9f3b,	// (0x0004bd22) main_fs_bigclock_indicator_pane_ParamLimits

0x9f3b,	// (0x0004bd22) main_fs_bigclock_indicator_pane

0xeab5,	// (0x0005089c) main_fs_bigclock_pane_g1_ParamLimits

0xeab5,	// (0x0005089c) main_fs_bigclock_pane_g1

0x9f47,	// (0x0004bd2e) main_fs_bigclock_pane_t1_ParamLimits

0x9f47,	// (0x0004bd2e) main_fs_bigclock_pane_t1

0x9f59,	// (0x0004bd40) main_fs_bigclock_pane_t2_ParamLimits

0x9f59,	// (0x0004bd40) main_fs_bigclock_pane_t2

0x9f6b,	// (0x0004bd52) main_fs_bigclock_pane_t3_ParamLimits

0x9f6b,	// (0x0004bd52) main_fs_bigclock_pane_t3

0x0002,

0xfc02,	// (0x000519e9) main_fs_bigclock_pane_t_ParamLimits

0xfc02,	// (0x000519e9) main_fs_bigclock_pane_t

0xb9d4,	// (0x0004d7bb) main_fs_bigclock_indicator_pane_g1

0x8cd1,	// (0x0004aab8) ncim_query_content_pane_g2_ParamLimits

0x8cd1,	// (0x0004aab8) ncim_query_content_pane_g2

0x0001,

0xf999,	// (0x00051780) ncim_query_content_pane_g_ParamLimits

0xf999,	// (0x00051780) ncim_query_content_pane_g

0x92d7,	// (0x0004b0be) sc_clock_pane_t4_ParamLimits

0x92d7,	// (0x0004b0be) sc_clock_pane_t4

0xd8c7,	// (0x0004f6ae) main_radioblah_pane

0x6939,	// (0x00048720) cell_call4_button_pane_t1_copy1_ParamLimits

0x6939,	// (0x00048720) cell_call4_button_pane_t1_copy1

0x8bb6,	// (0x0004a99d) main_ncimui_pane_t1_ParamLimits

0x8bb6,	// (0x0004a99d) main_ncimui_pane_t1

0x8bd0,	// (0x0004a9b7) main_ncimui_pane_t2_ParamLimits

0x8bd0,	// (0x0004a9b7) main_ncimui_pane_t2

0x0002,

0xf992,	// (0x00051779) main_ncimui_pane_t_ParamLimits

0xf992,	// (0x00051779) main_ncimui_pane_t

0x9495,	// (0x0004b27c) main_radioblah_anim_pane_ParamLimits

0x9495,	// (0x0004b27c) main_radioblah_anim_pane

0x94a6,	// (0x0004b28d) main_radioblah_info_pane_ParamLimits

0x94a6,	// (0x0004b28d) main_radioblah_info_pane

0x94cc,	// (0x0004b2b3) main_radioblah_pane_t1_ParamLimits

0x94cc,	// (0x0004b2b3) main_radioblah_pane_t1

0x94e8,	// (0x0004b2cf) main_radioblah_pane_t2_ParamLimits

0x94e8,	// (0x0004b2cf) main_radioblah_pane_t2

0x0003,

0xfa2d,	// (0x00051814) main_radioblah_pane_t_ParamLimits

0xfa2d,	// (0x00051814) main_radioblah_pane_t

0x9530,	// (0x0004b317) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9530,	// (0x0004b317) main_radioblah_rocker_ctrl_pane

0x9588,	// (0x0004b36f) main_radioblah_info_pane_t1_ParamLimits

0x9588,	// (0x0004b36f) main_radioblah_info_pane_t1

0x95c2,	// (0x0004b3a9) main_radioblah_info_pane_t2_ParamLimits

0x95c2,	// (0x0004b3a9) main_radioblah_info_pane_t2

0x0003,

0xfa36,	// (0x0005181d) main_radioblah_info_pane_t_ParamLimits

0xfa36,	// (0x0005181d) main_radioblah_info_pane_t

0xe87e,	// (0x00050665) main_radioblah_rocker_ctrl_pane_g1

0x9674,	// (0x0004b45b) main_radioblah_rocker_ctrl_pane_g2

0x967c,	// (0x0004b463) main_radioblah_rocker_ctrl_pane_g3

0x9684,	// (0x0004b46b) main_radioblah_rocker_ctrl_pane_g4

0x968c,	// (0x0004b473) main_radioblah_rocker_ctrl_pane_g5

0x9694,	// (0x0004b47b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa3f,	// (0x00051826) main_radioblah_rocker_ctrl_pane_g

0x87fd,	// (0x0004a5e4) main_cset_text2_pane_t1_copy1_ParamLimits

0xae17,	// (0x0004cbfe) cam4_image_uncrop_qvga_pane

0xae70,	// (0x0004cc57) vid4_image_uncrop_qcif_pane

0xb0d0,	// (0x0004ceb7) cam6_image_uncrop_qvga_pane_ParamLimits

0xb0d0,	// (0x0004ceb7) cam6_image_uncrop_qvga_pane

0x86b9,	// (0x0004a4a0) vid6_image_uncrop_qcif_pane_ParamLimits

0x86b9,	// (0x0004a4a0) vid6_image_uncrop_qcif_pane

0xa6dd,	// (0x0004c4c4) bg_popup_preview_window_pane_cp03

0x8b7e,	// (0x0004a965) list_cset_text2_pane

0x8b86,	// (0x0004a96d) main_cset6_text2_pane_g1

0x8b8e,	// (0x0004a975) main_cset6_text2_pane_t1

0x969c,	// (0x0004b483) list_cset_text2_pane_t1_ParamLimits

0x969c,	// (0x0004b483) list_cset_text2_pane_t1

0xd8c7,	// (0x0004f6ae) main_radioblah_pane_ParamLimits

0x9165,	// (0x0004af4c) main_mobtv_info_pane_t3_ParamLimits

0x9165,	// (0x0004af4c) main_mobtv_info_pane_t3

0x94ba,	// (0x0004b2a1) main_radioblah_pane_g1

0x9558,	// (0x0004b33f) main_radioblah_info_pane_g1

0x9619,	// (0x0004b400) main_radioblah_info_pane_t3_ParamLimits

0x9619,	// (0x0004b400) main_radioblah_info_pane_t3

0x322a,	// (0x00045011) highlight_cell_cale_month_pane_ParamLimits

0x322a,	// (0x00045011) highlight_cell_cale_month_pane

0xa6dd,	// (0x0004c4c4) main_phob_fisheye_pane

0xebc7,	// (0x000509ae) scroll_pane_cp0031_ParamLimits

0xebc7,	// (0x000509ae) scroll_pane_cp0031

0x87ee,	// (0x0004a5d5) wait_bar_pane_cp08_ParamLimits

0x88a2,	// (0x0004a689) cset_list_set_pane_copy1_ParamLimits

0x96b9,	// (0x0004b4a0) highlight_cell_cale_month_pane_g1

0x96c1,	// (0x0004b4a8) highlight_cell_cale_month_pane_t1

0x7ef8,	// (0x00049cdf) list_gen_pane_cp01

0x7341,	// (0x00049128) scroll_pane_01

0x96cf,	// (0x0004b4b6) list_single_double_fisheye_pane

0x11fc,	// (0x00042fe3) list_double_fisheye_pane_g1_ParamLimits

0x11fc,	// (0x00042fe3) list_double_fisheye_pane_g1

0x1208,	// (0x00042fef) list_double_fisheye_pane_g2_ParamLimits

0x1208,	// (0x00042fef) list_double_fisheye_pane_g2

0x96d8,	// (0x0004b4bf) list_double_fisheye_pane_g3_ParamLimits

0x96d8,	// (0x0004b4bf) list_double_fisheye_pane_g3

0x0004,

0xfa4c,	// (0x00051833) list_double_fisheye_pane_g_ParamLimits

0xfa4c,	// (0x00051833) list_double_fisheye_pane_g

0x1239,	// (0x00043020) list_double_fisheye_pane_t1_ParamLimits

0x1239,	// (0x00043020) list_double_fisheye_pane_t1

0x1254,	// (0x0004303b) list_double_fisheye_pane_t2_ParamLimits

0x1254,	// (0x0004303b) list_double_fisheye_pane_t2

0x0001,

0xfa57,	// (0x0005183e) list_double_fisheye_pane_t_ParamLimits

0xfa57,	// (0x0005183e) list_double_fisheye_pane_t

0xa6dd,	// (0x0004c4c4) main_call5_pane

0x9302,	// (0x0004b0e9) sc_swipe_pane_ParamLimits

0x9302,	// (0x0004b0e9) sc_swipe_pane

0x96f7,	// (0x0004b4de) call5_image_pane_ParamLimits

0x96f7,	// (0x0004b4de) call5_image_pane

0x9714,	// (0x0004b4fb) call5_swipe_1_pane_ParamLimits

0x9714,	// (0x0004b4fb) call5_swipe_1_pane

0x9727,	// (0x0004b50e) call5_swipe_2_pane_ParamLimits

0x9727,	// (0x0004b50e) call5_swipe_2_pane

0x9752,	// (0x0004b539) popup_call5_audio_first_window_ParamLimits

0x9752,	// (0x0004b539) popup_call5_audio_first_window

0xeae5,	// (0x000508cc) call5_swipe_1_pane_g1_ParamLimits

0xeae5,	// (0x000508cc) call5_swipe_1_pane_g1

0x9763,	// (0x0004b54a) call5_swipe_1_pane_g2_ParamLimits

0x9763,	// (0x0004b54a) call5_swipe_1_pane_g2

0x0001,

0xfa5c,	// (0x00051843) call5_swipe_1_pane_g_ParamLimits

0xfa5c,	// (0x00051843) call5_swipe_1_pane_g

0x976f,	// (0x0004b556) call5_swipe_1_pane_t1_ParamLimits

0x976f,	// (0x0004b556) call5_swipe_1_pane_t1

0xeae5,	// (0x000508cc) call5_swipe_2_pane_g1_ParamLimits

0xeae5,	// (0x000508cc) call5_swipe_2_pane_g1

0x9784,	// (0x0004b56b) call5_swipe_2_pane_g2_ParamLimits

0x9784,	// (0x0004b56b) call5_swipe_2_pane_g2

0x0001,

0xfa61,	// (0x00051848) call5_swipe_2_pane_g_ParamLimits

0xfa61,	// (0x00051848) call5_swipe_2_pane_g

0x9790,	// (0x0004b577) call5_swipe_2_pane_t1_ParamLimits

0x9790,	// (0x0004b577) call5_swipe_2_pane_t1

0x97a5,	// (0x0004b58c) sc_swipe_pane_g1_ParamLimits

0x97a5,	// (0x0004b58c) sc_swipe_pane_g1

0x97b2,	// (0x0004b599) sc_swipe_pane_g2_ParamLimits

0x97b2,	// (0x0004b599) sc_swipe_pane_g2

0x0001,

0xfa66,	// (0x0005184d) sc_swipe_pane_g_ParamLimits

0xfa66,	// (0x0005184d) sc_swipe_pane_g

0x97be,	// (0x0004b5a5) sc_swipe_pane_t1_ParamLimits

0x97be,	// (0x0004b5a5) sc_swipe_pane_t1

0xa6dd,	// (0x0004c4c4) main_cmail_launcher_pane

0x97d3,	// (0x0004b5ba) aid_size_cell_cmail_l_ParamLimits

0x97d3,	// (0x0004b5ba) aid_size_cell_cmail_l

0x97ed,	// (0x0004b5d4) grid_cmail_l_pane_ParamLimits

0x97ed,	// (0x0004b5d4) grid_cmail_l_pane

0x9808,	// (0x0004b5ef) cell_cmail_l_pane_ParamLimits

0x9808,	// (0x0004b5ef) cell_cmail_l_pane

0x982e,	// (0x0004b615) cell_cmail_l_pane_g1_ParamLimits

0x982e,	// (0x0004b615) cell_cmail_l_pane_g1

0x983a,	// (0x0004b621) cell_cmail_l_pane_t1_ParamLimits

0x983a,	// (0x0004b621) cell_cmail_l_pane_t1

0x9850,	// (0x0004b637) cell_cmail_l_pane_t2_ParamLimits

0x9850,	// (0x0004b637) cell_cmail_l_pane_t2

0x0001,

0xfa6b,	// (0x00051852) cell_cmail_l_pane_t_ParamLimits

0xfa6b,	// (0x00051852) cell_cmail_l_pane_t

0xd8c7,	// (0x0004f6ae) grid_highlight_pane_cp018_ParamLimits

0xd8c7,	// (0x0004f6ae) grid_highlight_pane_cp018

0x1919,	// (0x00043700) main2_pane_ParamLimits

0x1919,	// (0x00043700) main2_pane

0xc603,	// (0x0004e3ea) popup_sp_fs_action_menu_bg_pane_g1

0xc60b,	// (0x0004e3f2) popup_sp_fs_action_menu_bg_pane_g2

0xc613,	// (0x0004e3fa) popup_sp_fs_action_menu_bg_pane_g3

0xc61b,	// (0x0004e402) popup_sp_fs_action_menu_bg_pane_g4

0xc623,	// (0x0004e40a) popup_sp_fs_action_menu_bg_pane_g5

0xc62b,	// (0x0004e412) popup_sp_fs_action_menu_bg_pane_g6

0xc633,	// (0x0004e41a) popup_sp_fs_action_menu_bg_pane_g7

0xc63b,	// (0x0004e422) popup_sp_fs_action_menu_bg_pane_g8

0xc643,	// (0x0004e42a) popup_sp_fs_action_menu_bg_pane_g9

0xc64b,	// (0x0004e432) popup_sp_fs_action_menu_bg_pane_g10

0xc64b,	// (0x0004e432) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x000b,	// (0x00041df2) popup_sp_fs_action_menu_bg_pane_g

0xa849,	// (0x0004c630) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t3_g3_g1

0xa855,	// (0x0004c63c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x2_t3_g3_g2

0xa861,	// (0x0004c648) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_x2_t3_g3_g3

0x0002,

0xf237,	// (0x0005101e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf237,	// (0x0005101e) list_medium_line_x2_t3_g3_g

0xa86d,	// (0x0004c654) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa86d,	// (0x0004c654) list_medium_line_x2_t3_g3_t1

0x0dd4,	// (0x00042bbb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0dd4,	// (0x00042bbb) list_medium_line_x2_t3_g3_t2

0xa882,	// (0x0004c669) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23e,	// (0x00051025) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23e,	// (0x00051025) list_medium_line_x2_t3_g3_t

0xa849,	// (0x0004c630) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t3_g2_g1

0xa861,	// (0x0004c648) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_x2_t3_g2_g2

0x0001,

0xf245,	// (0x0005102c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf245,	// (0x0005102c) list_medium_line_x2_t3_g2_g

0xa897,	// (0x0004c67e) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa897,	// (0x0004c67e) list_medium_line_x2_t3_g2_t1

0xa8ad,	// (0x0004c694) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa8ad,	// (0x0004c694) list_medium_line_x2_t3_g2_t2

0xa882,	// (0x0004c669) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24a,	// (0x00051031) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24a,	// (0x00051031) list_medium_line_x2_t3_g2_t

0xa849,	// (0x0004c630) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t4_g4_g1

0xa8bf,	// (0x0004c6a6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa8bf,	// (0x0004c6a6) list_medium_line_x2_t4_g4_g2

0xa855,	// (0x0004c63c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x2_t4_g4_g3

0xa8cb,	// (0x0004c6b2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa8cb,	// (0x0004c6b2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf251,	// (0x00051038) list_medium_line_x2_t4_g4_g_ParamLimits

0xf251,	// (0x00051038) list_medium_line_x2_t4_g4_g

0x0de8,	// (0x00042bcf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0de8,	// (0x00042bcf) list_medium_line_x2_t4_g4_t1

0x0e02,	// (0x00042be9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e02,	// (0x00042be9) list_medium_line_x2_t4_g4_t2

0x0e17,	// (0x00042bfe) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e17,	// (0x00042bfe) list_medium_line_x2_t4_g4_t3

0xa8d7,	// (0x0004c6be) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa8d7,	// (0x0004c6be) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25a,	// (0x00051041) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25a,	// (0x00051041) list_medium_line_x2_t4_g4_t

0xa849,	// (0x0004c630) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t2_g4_g1

0xa8bf,	// (0x0004c6a6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa8bf,	// (0x0004c6a6) list_medium_line_x2_t2_g4_g2

0xa855,	// (0x0004c63c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x2_t2_g4_g3

0xa861,	// (0x0004c648) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a9,	// (0x00051090) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a9,	// (0x00051090) list_medium_line_x2_t2_g4_g

0xa8e9,	// (0x0004c6d0) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa8e9,	// (0x0004c6d0) list_medium_line_x2_t2_g4_t1

0xa882,	// (0x0004c669) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b2,	// (0x00051099) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b2,	// (0x00051099) list_medium_line_x2_t2_g4_t

0xa849,	// (0x0004c630) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t2_g3_g1

0xa855,	// (0x0004c63c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x2_t2_g3_g2

0xa861,	// (0x0004c648) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_x2_t2_g3_g3

0x0002,

0xf237,	// (0x0005101e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf237,	// (0x0005101e) list_medium_line_x2_t2_g3_g

0xa8fe,	// (0x0004c6e5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa8fe,	// (0x0004c6e5) list_medium_line_x2_t2_g3_t1

0xa882,	// (0x0004c669) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b7,	// (0x0005109e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b7,	// (0x0005109e) list_medium_line_x2_t2_g3_t

0x3410,	// (0x000451f7) main_sp_fs_list_pane_ParamLimits

0x3410,	// (0x000451f7) main_sp_fs_list_pane

0x341c,	// (0x00045203) sp_fs_scroll_pane_ParamLimits

0x341c,	// (0x00045203) sp_fs_scroll_pane

0x0e2c,	// (0x00042c13) list_medium_line_x2_t3_t1

0x0e3c,	// (0x00042c23) list_medium_line_x2_t3_t2

0xa941,	// (0x0004c728) list_medium_line_x2_t3_t3

0x0002,

0xf2d7,	// (0x000510be) list_medium_line_x2_t3_t

0x0e4a,	// (0x00042c31) list_medium_line_x3_t4_t1

0x0e5a,	// (0x00042c41) list_medium_line_x3_t4_t2

0xa94f,	// (0x0004c736) list_medium_line_x3_t4_t3

0xa941,	// (0x0004c728) list_medium_line_x3_t4_t4

0x0003,

0xf2de,	// (0x000510c5) list_medium_line_x3_t4_t

0x0e68,	// (0x00042c4f) list_medium_line_x4_t5_t1

0x0e78,	// (0x00042c5f) list_medium_line_x4_t5_t2

0xa94f,	// (0x0004c736) list_medium_line_x4_t5_t3

0xa95d,	// (0x0004c744) list_medium_line_x4_t5_t4

0xa941,	// (0x0004c728) list_medium_line_x4_t5_t5

0x0004,

0xf2e7,	// (0x000510ce) list_medium_line_x4_t5_t

0xa849,	// (0x0004c630) list_medium_line_t4_g4_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_t4_g4_g1

0xa8cb,	// (0x0004c6b2) list_medium_line_t4_g4_g2_ParamLimits

0xa8cb,	// (0x0004c6b2) list_medium_line_t4_g4_g2

0xa96b,	// (0x0004c752) list_medium_line_t4_g4_g3_ParamLimits

0xa96b,	// (0x0004c752) list_medium_line_t4_g4_g3

0xa861,	// (0x0004c648) list_medium_line_t4_g4_g4_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_t4_g4_g4

0x0003,

0xf2f2,	// (0x000510d9) list_medium_line_t4_g4_g_ParamLimits

0xf2f2,	// (0x000510d9) list_medium_line_t4_g4_g

0xa977,	// (0x0004c75e) list_medium_line_t4_g4_t1_ParamLimits

0xa977,	// (0x0004c75e) list_medium_line_t4_g4_t1

0xa98c,	// (0x0004c773) list_medium_line_t4_g4_t2_ParamLimits

0xa98c,	// (0x0004c773) list_medium_line_t4_g4_t2

0xa9a1,	// (0x0004c788) list_medium_line_t4_g4_t3_ParamLimits

0xa9a1,	// (0x0004c788) list_medium_line_t4_g4_t3

0xa882,	// (0x0004c669) list_medium_line_t4_g4_t4_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_t4_g4_t4

0x0003,

0xf2fb,	// (0x000510e2) list_medium_line_t4_g4_t_ParamLimits

0xf2fb,	// (0x000510e2) list_medium_line_t4_g4_t

0x34c6,	// (0x000452ad) chi_dic_find_pane_g1

0x45b9,	// (0x000463a0) main_tport_pane

0xaefd,	// (0x0004cce4) list_medium_line_plain_t1

0xaf47,	// (0x0004cd2e) list_medium_line_t2_g2_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_t2_g2_g1

0xaf53,	// (0x0004cd3a) list_medium_line_t2_g2_g2_ParamLimits

0xaf53,	// (0x0004cd3a) list_medium_line_t2_g2_g2

0x0001,

0xf7a8,	// (0x0005158f) list_medium_line_t2_g2_g_ParamLimits

0xf7a8,	// (0x0005158f) list_medium_line_t2_g2_g

0x104b,	// (0x00042e32) list_medium_line_t2_g2_t1_ParamLimits

0x104b,	// (0x00042e32) list_medium_line_t2_g2_t1

0x1065,	// (0x00042e4c) list_medium_line_t2_g2_t2_ParamLimits

0x1065,	// (0x00042e4c) list_medium_line_t2_g2_t2

0x0001,

0xf7ad,	// (0x00051594) list_medium_line_t2_g2_t_ParamLimits

0xf7ad,	// (0x00051594) list_medium_line_t2_g2_t

0xb07f,	// (0x0004ce66) aid_sp_fs_list_icon_a_sm

0xb087,	// (0x0004ce6e) aid_sp_fs_list_icon_d

0xb08f,	// (0x0004ce76) aid_sp_fs_text_primary

0xb098,	// (0x0004ce7f) aid_sp_fs_text_secondary

0xdc9c,	// (0x0004fa83) list_medium_line

0xdc9c,	// (0x0004fa83) list_medium_line_g2

0xdc9c,	// (0x0004fa83) list_medium_line_g3

0xdc9c,	// (0x0004fa83) list_medium_line_plain

0xdc9c,	// (0x0004fa83) list_medium_line_plain_t2

0xdc9c,	// (0x0004fa83) list_medium_line_plain_t3

0xdc9c,	// (0x0004fa83) list_medium_line_right_icon

0xdc9c,	// (0x0004fa83) list_medium_line_right_iconx2

0xdc9c,	// (0x0004fa83) list_medium_line_t2

0xdc9c,	// (0x0004fa83) list_medium_line_t2_g2

0xdc9c,	// (0x0004fa83) list_medium_line_t2_g3

0xdc9c,	// (0x0004fa83) list_medium_line_t2_right_icon

0xdc9c,	// (0x0004fa83) list_medium_line_t2_right_iconx2

0xdc9c,	// (0x0004fa83) list_medium_line_t3

0xdc9c,	// (0x0004fa83) list_medium_line_t3_g2

0xdc9c,	// (0x0004fa83) list_medium_line_t3_g3

0xdc9c,	// (0x0004fa83) list_medium_line_t3_right_iconx2

0xb0a1,	// (0x0004ce88) list_medium_line_t4_g4

0xb0aa,	// (0x0004ce91) list_medium_line_x2

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t2_g2

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t2_g3

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t2_g4

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t3

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t3_g2

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t3_g3

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t3_g4

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t4_g2

0xb0aa,	// (0x0004ce91) list_medium_line_x2_t4_g4

0xb0b3,	// (0x0004ce9a) list_medium_line_x3

0xb0b3,	// (0x0004ce9a) list_medium_line_x3_t4

0xb0b3,	// (0x0004ce9a) list_medium_line_x3_t4_g4

0xb0a1,	// (0x0004ce88) list_medium_line_x4_t4

0xb0a1,	// (0x0004ce88) list_medium_line_x4_t4_g7

0xb0a1,	// (0x0004ce88) list_medium_line_x4_t5

0xb0bc,	// (0x0004cea3) list_single_fs_dyc_pane_ParamLimits

0xb0bc,	// (0x0004cea3) list_single_fs_dyc_pane

0xa849,	// (0x0004c630) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x4_t4_g7_g1

0xb0ed,	// (0x0004ced4) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb0ed,	// (0x0004ced4) list_medium_line_x4_t4_g7_g2

0xb0f9,	// (0x0004cee0) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb0f9,	// (0x0004cee0) list_medium_line_x4_t4_g7_g3

0xb108,	// (0x0004ceef) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb108,	// (0x0004ceef) list_medium_line_x4_t4_g7_g4

0xb114,	// (0x0004cefb) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb114,	// (0x0004cefb) list_medium_line_x4_t4_g7_g5

0xb123,	// (0x0004cf0a) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb123,	// (0x0004cf0a) list_medium_line_x4_t4_g7_g6

0xb132,	// (0x0004cf19) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb132,	// (0x0004cf19) list_medium_line_x4_t4_g7_g7

0x0006,

0xf978,	// (0x0005175f) list_medium_line_x4_t4_g7_g_ParamLimits

0xf978,	// (0x0005175f) list_medium_line_x4_t4_g7_g

0xb13e,	// (0x0004cf25) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb13e,	// (0x0004cf25) list_medium_line_x4_t4_g7_t1

0xb153,	// (0x0004cf3a) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb153,	// (0x0004cf3a) list_medium_line_x4_t4_g7_t2

0xb168,	// (0x0004cf4f) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb168,	// (0x0004cf4f) list_medium_line_x4_t4_g7_t3

0xb17d,	// (0x0004cf64) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb17d,	// (0x0004cf64) list_medium_line_x4_t4_g7_t4

0xb18f,	// (0x0004cf76) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb18f,	// (0x0004cf76) list_medium_line_x4_t4_g7_t5

0x0004,

0xf987,	// (0x0005176e) list_medium_line_x4_t4_g7_t_ParamLimits

0xf987,	// (0x0005176e) list_medium_line_x4_t4_g7_t

0xb1a1,	// (0x0004cf88) list_single_dyc_row_pane_ParamLimits

0xb1a1,	// (0x0004cf88) list_single_dyc_row_pane

0x96e4,	// (0x0004b4cb) call5_gesture_pane_ParamLimits

0x96e4,	// (0x0004b4cb) call5_gesture_pane

0x973a,	// (0x0004b521) call5_windows_pane_ParamLimits

0x973a,	// (0x0004b521) call5_windows_pane

0x9862,	// (0x0004b649) call5_swipe_1_pane_cp_ParamLimits

0x9862,	// (0x0004b649) call5_swipe_1_pane_cp

0x986e,	// (0x0004b655) call5_swipe_2_pane_cp_ParamLimits

0x986e,	// (0x0004b655) call5_swipe_2_pane_cp

0xcfe0,	// (0x0004edc7) call5_image_pane_cp

0x987a,	// (0x0004b661) popup_call5_audio_first_window_cp_ParamLimits

0x987a,	// (0x0004b661) popup_call5_audio_first_window_cp

0x97a5,	// (0x0004b58c) call5_swipe_1_pane_g1_cp_ParamLimits

0x97a5,	// (0x0004b58c) call5_swipe_1_pane_g1_cp

0x9886,	// (0x0004b66d) call5_swipe_1_pane_g2_cp

0x97be,	// (0x0004b5a5) call5_swipe_1_pane_t1_cp_ParamLimits

0x97be,	// (0x0004b5a5) call5_swipe_1_pane_t1_cp

0x97a5,	// (0x0004b58c) call5_swipe_2_pane_g1_cp_ParamLimits

0x97a5,	// (0x0004b58c) call5_swipe_2_pane_g1_cp

0x988e,	// (0x0004b675) call5_swipe_2_pane_g2_cp

0x9896,	// (0x0004b67d) call5_swipe_2_pane_t1_cp_ParamLimits

0x9896,	// (0x0004b67d) call5_swipe_2_pane_t1_cp

0xd8c7,	// (0x0004f6ae) main_sp_fs_email_pane

0x98ab,	// (0x0004b692) main_sp_fs_listscroll_pane_te

0xb1be,	// (0x0004cfa5) popup_sp_fs_action_menu_pane_ParamLimits

0xb1be,	// (0x0004cfa5) popup_sp_fs_action_menu_pane

0xe87e,	// (0x00050665) bg_sp_fs_ctrlbar_pane_g1

0x98b4,	// (0x0004b69b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x98bd,	// (0x0004b6a4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x98c6,	// (0x0004b6ad) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe87e,	// (0x00050665) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa70,	// (0x00051857) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe659,	// (0x00050440) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe659,	// (0x00050440) bg_sp_fs_ctrlbar_ddmenu_pane

0x98cf,	// (0x0004b6b6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x98cf,	// (0x0004b6b6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x98db,	// (0x0004b6c2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x98db,	// (0x0004b6c2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa79,	// (0x00051860) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa79,	// (0x00051860) main_sp_fs_ctrlbar_ddmenu_pane_g

0x98e7,	// (0x0004b6ce) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x98e7,	// (0x0004b6ce) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb1fe,	// (0x0004cfe5) list_medium_line_t2_right_icon_g1

0x1276,	// (0x0004305d) list_medium_line_t2_right_icon_t1

0x1286,	// (0x0004306d) list_medium_line_t2_right_icon_t2

0x0001,

0xfa7e,	// (0x00051865) list_medium_line_t2_right_icon_t

0xe42d,	// (0x00050214) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe42d,	// (0x00050214) bg_sp_fs_ctrlbar_pane

0x9981,	// (0x0004b768) main_sp_fs_ctrlbar_button_pane_cp01

0x998b,	// (0x0004b772) main_sp_fs_ctrlbar_ddmenu_pane

0xd9cc,	// (0x0004f7b3) main_sp_fs_ctrlbar_pane_g1

0x9995,	// (0x0004b77c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfa83,	// (0x0005186a) main_sp_fs_ctrlbar_pane_g

0x99a1,	// (0x0004b788) main_sp_fs_ctrlbar_pane_t1

0x1298,	// (0x0004307f) main_sp_fs_ctrlbar_pane

0x12bc,	// (0x000430a3) main_sp_fs_listscroll_pane_te_cp01

0x12dc,	// (0x000430c3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12dc,	// (0x000430c3) popup_sp_fs_action_menu_pane_cp01

0xd8c7,	// (0x0004f6ae) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_sp_fs_highlight_list_pane_cp01

0xb206,	// (0x0004cfed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb206,	// (0x0004cfed) sp_fs_action_menu_list_gene_pane_g1

0x99b6,	// (0x0004b79d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x99b6,	// (0x0004b79d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa88,	// (0x0005186f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa88,	// (0x0005186f) sp_fs_action_menu_list_gene_pane_g

0xb215,	// (0x0004cffc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb215,	// (0x0004cffc) sp_fs_action_menu_list_gene_pane_t1

0xb22d,	// (0x0004d014) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb22d,	// (0x0004d014) sp_fs_action_menu_list_gene_pane

0x99c3,	// (0x0004b7aa) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x99c3,	// (0x0004b7aa) popup_sp_fs_action_menu_bg_pane

0xb24a,	// (0x0004d031) sp_fs_action_menu_list_pane_ParamLimits

0xb24a,	// (0x0004d031) sp_fs_action_menu_list_pane

0x99d1,	// (0x0004b7b8) sp_fs_scroll_pane_cp01_ParamLimits

0x99d1,	// (0x0004b7b8) sp_fs_scroll_pane_cp01

0x12f6,	// (0x000430dd) list_medium_line_plain_t2_t1

0x1306,	// (0x000430ed) list_medium_line_plain_t2_t2

0x0001,

0xfa8d,	// (0x00051874) list_medium_line_plain_t2_t

0x1316,	// (0x000430fd) list_medium_line_plain_t3_t1

0x1326,	// (0x0004310d) list_medium_line_plain_t3_t2

0x1334,	// (0x0004311b) list_medium_line_plain_t3_t3

0x0002,

0xfa92,	// (0x00051879) list_medium_line_plain_t3_t

0xa849,	// (0x0004c630) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t2_g2_g1

0xa861,	// (0x0004c648) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_x2_t2_g2_g2

0x0001,

0xf245,	// (0x0005102c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf245,	// (0x0005102c) list_medium_line_x2_t2_g2_g

0xa977,	// (0x0004c75e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa977,	// (0x0004c75e) list_medium_line_x2_t2_g2_t1

0xa882,	// (0x0004c669) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa99,	// (0x00051880) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa99,	// (0x00051880) list_medium_line_x2_t2_g2_t

0xa849,	// (0x0004c630) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t4_g2_g1

0xb268,	// (0x0004d04f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb268,	// (0x0004d04f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa9e,	// (0x00051885) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa9e,	// (0x00051885) list_medium_line_x2_t4_g2_g

0x1342,	// (0x00043129) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1342,	// (0x00043129) list_medium_line_x2_t4_g2_t1

0x1359,	// (0x00043140) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1359,	// (0x00043140) list_medium_line_x2_t4_g2_t2

0x136e,	// (0x00043155) list_medium_line_x2_t4_g2_t3_ParamLimits

0x136e,	// (0x00043155) list_medium_line_x2_t4_g2_t3

0xa882,	// (0x0004c669) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t4_g2_t4

0x0003,

0xfaa3,	// (0x0005188a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfaa3,	// (0x0005188a) list_medium_line_x2_t4_g2_t

0xb27a,	// (0x0004d061) list_medium_line_t3_right_iconx2_g1

0xb1fe,	// (0x0004cfe5) list_medium_line_t3_right_iconx2_g2

0x1380,	// (0x00043167) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfaac,	// (0x00051893) list_medium_line_t3_right_iconx2_g

0x138a,	// (0x00043171) list_medium_line_t3_right_iconx2_t1

0x139a,	// (0x00043181) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfab3,	// (0x0005189a) list_medium_line_t3_right_iconx2_t

0xa849,	// (0x0004c630) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x3_t4_g4_g1

0xa855,	// (0x0004c63c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x3_t4_g4_g2

0xa8cb,	// (0x0004c6b2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa8cb,	// (0x0004c6b2) list_medium_line_x3_t4_g4_g3

0xb282,	// (0x0004d069) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb282,	// (0x0004d069) list_medium_line_x3_t4_g4_g4

0x0003,

0xfab8,	// (0x0005189f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfab8,	// (0x0005189f) list_medium_line_x3_t4_g4_g

0x13a8,	// (0x0004318f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x13a8,	// (0x0004318f) list_medium_line_x3_t4_g4_t1

0x13bf,	// (0x000431a6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x13bf,	// (0x000431a6) list_medium_line_x3_t4_g4_t2

0xa98c,	// (0x0004c773) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa98c,	// (0x0004c773) list_medium_line_x3_t4_g4_t3

0xb28e,	// (0x0004d075) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb28e,	// (0x0004d075) list_medium_line_x3_t4_g4_t4

0x0003,

0xfac1,	// (0x000518a8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfac1,	// (0x000518a8) list_medium_line_x3_t4_g4_t

0x13da,	// (0x000431c1) list_single_dyc_row_text_pane_t1_ParamLimits

0x13da,	// (0x000431c1) list_single_dyc_row_text_pane_t1

0x1423,	// (0x0004320a) list_single_dyc_row_text_pane_t2_ParamLimits

0x1423,	// (0x0004320a) list_single_dyc_row_text_pane_t2

0xb2ab,	// (0x0004d092) list_single_dyc_row_text_pane_t3_ParamLimits

0xb2ab,	// (0x0004d092) list_single_dyc_row_text_pane_t3

0x0002,

0xfaca,	// (0x000518b1) list_single_dyc_row_text_pane_t_ParamLimits

0xfaca,	// (0x000518b1) list_single_dyc_row_text_pane_t

0xb2bd,	// (0x0004d0a4) list_single_dyc_row_pane_g1_ParamLimits

0xb2bd,	// (0x0004d0a4) list_single_dyc_row_pane_g1

0xb2c9,	// (0x0004d0b0) list_single_dyc_row_pane_g2_ParamLimits

0xb2c9,	// (0x0004d0b0) list_single_dyc_row_pane_g2

0xb2d5,	// (0x0004d0bc) list_single_dyc_row_pane_g3_ParamLimits

0xb2d5,	// (0x0004d0bc) list_single_dyc_row_pane_g3

0xb2e1,	// (0x0004d0c8) list_single_dyc_row_pane_g4_ParamLimits

0xb2e1,	// (0x0004d0c8) list_single_dyc_row_pane_g4

0x0003,

0xfad1,	// (0x000518b8) list_single_dyc_row_pane_g_ParamLimits

0xfad1,	// (0x000518b8) list_single_dyc_row_pane_g

0xb2ed,	// (0x0004d0d4) list_single_dyc_row_text_pane_ParamLimits

0xb2ed,	// (0x0004d0d4) list_single_dyc_row_text_pane

0xa6dd,	// (0x0004c4c4) bg_sp_fs_scroll_pane

0x99f7,	// (0x0004b7de) thumb_sp_fs_scroll_pane

0xaf47,	// (0x0004cd2e) list_medium_line_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_g1

0xb30c,	// (0x0004d0f3) list_medium_line_t1_ParamLimits

0xb30c,	// (0x0004d0f3) list_medium_line_t1

0xa849,	// (0x0004c630) list_medium_line_x2_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_g1

0xa855,	// (0x0004c63c) list_medium_line_x2_g2_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x2_g2

0x0001,

0xfada,	// (0x000518c1) list_medium_line_x2_g_ParamLimits

0xfada,	// (0x000518c1) list_medium_line_x2_g

0xb321,	// (0x0004d108) list_medium_line_x2_t1_ParamLimits

0xb321,	// (0x0004d108) list_medium_line_x2_t1

0xa849,	// (0x0004c630) list_medium_line_x3_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x3_g1

0xa855,	// (0x0004c63c) list_medium_line_x3_g2_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x3_g2

0x0001,

0xfada,	// (0x000518c1) list_medium_line_x3_g_ParamLimits

0xfada,	// (0x000518c1) list_medium_line_x3_g

0xb321,	// (0x0004d108) list_medium_line_x3_t1_ParamLimits

0xb321,	// (0x0004d108) list_medium_line_x3_t1

0x9a00,	// (0x0004b7e7) thumb_sp_fs_scroll_pane_g1

0x9a09,	// (0x0004b7f0) thumb_sp_fs_scroll_pane_g2

0x9a12,	// (0x0004b7f9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfadf,	// (0x000518c6) thumb_sp_fs_scroll_pane_g

0x9a00,	// (0x0004b7e7) bg_sp_fs_scroll_pane_g1

0x9a09,	// (0x0004b7f0) bg_sp_fs_scroll_pane_g2

0x9a12,	// (0x0004b7f9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfadf,	// (0x000518c6) bg_sp_fs_scroll_pane_g

0xa849,	// (0x0004c630) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa849,	// (0x0004c630) list_medium_line_x2_t3_g4_g1

0xa8bf,	// (0x0004c6a6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa8bf,	// (0x0004c6a6) list_medium_line_x2_t3_g4_g2

0xa855,	// (0x0004c63c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa855,	// (0x0004c63c) list_medium_line_x2_t3_g4_g3

0xa861,	// (0x0004c648) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa861,	// (0x0004c648) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a9,	// (0x00051090) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a9,	// (0x00051090) list_medium_line_x2_t3_g4_g

0x147d,	// (0x00043264) list_medium_line_x2_t3_g4_t1_ParamLimits

0x147d,	// (0x00043264) list_medium_line_x2_t3_g4_t1

0x1497,	// (0x0004327e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1497,	// (0x0004327e) list_medium_line_x2_t3_g4_t2

0xa882,	// (0x0004c669) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa882,	// (0x0004c669) list_medium_line_x2_t3_g4_t3

0x0002,

0xfae6,	// (0x000518cd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfae6,	// (0x000518cd) list_medium_line_x2_t3_g4_t

0xaf47,	// (0x0004cd2e) list_medium_line_g2_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_g2_g1

0xaf53,	// (0x0004cd3a) list_medium_line_g2_g2_ParamLimits

0xaf53,	// (0x0004cd3a) list_medium_line_g2_g2

0x0001,

0xf7a8,	// (0x0005158f) list_medium_line_g2_g_ParamLimits

0xf7a8,	// (0x0005158f) list_medium_line_g2_g

0xb337,	// (0x0004d11e) list_medium_line_g2_t1_ParamLimits

0xb337,	// (0x0004d11e) list_medium_line_g2_t1

0xaf47,	// (0x0004cd2e) list_medium_line_t3_g2_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_t3_g2_g1

0xaf53,	// (0x0004cd3a) list_medium_line_t3_g2_g2_ParamLimits

0xaf53,	// (0x0004cd3a) list_medium_line_t3_g2_g2

0x0001,

0xf7a8,	// (0x0005158f) list_medium_line_t3_g2_g_ParamLimits

0xf7a8,	// (0x0005158f) list_medium_line_t3_g2_g

0x14b0,	// (0x00043297) list_medium_line_t3_g2_t1_ParamLimits

0x14b0,	// (0x00043297) list_medium_line_t3_g2_t1

0x14c7,	// (0x000432ae) list_medium_line_t3_g2_t2_ParamLimits

0x14c7,	// (0x000432ae) list_medium_line_t3_g2_t2

0x14dc,	// (0x000432c3) list_medium_line_t3_g2_t3_ParamLimits

0x14dc,	// (0x000432c3) list_medium_line_t3_g2_t3

0x0002,

0xfaed,	// (0x000518d4) list_medium_line_t3_g2_t_ParamLimits

0xfaed,	// (0x000518d4) list_medium_line_t3_g2_t

0xb1fe,	// (0x0004cfe5) list_medium_line_right_icon_g1

0xb34c,	// (0x0004d133) list_medium_line_right_icon_t1

0xaf47,	// (0x0004cd2e) list_medium_line_t2_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_t2_g1

0x14f5,	// (0x000432dc) list_medium_line_t2_t1_ParamLimits

0x14f5,	// (0x000432dc) list_medium_line_t2_t1

0x150c,	// (0x000432f3) list_medium_line_t2_t2_ParamLimits

0x150c,	// (0x000432f3) list_medium_line_t2_t2

0x0001,

0xfaf4,	// (0x000518db) list_medium_line_t2_t_ParamLimits

0xfaf4,	// (0x000518db) list_medium_line_t2_t

0xaf47,	// (0x0004cd2e) list_medium_line_t3_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_t3_g1

0x1520,	// (0x00043307) list_medium_line_t3_t1_ParamLimits

0x1520,	// (0x00043307) list_medium_line_t3_t1

0x1537,	// (0x0004331e) list_medium_line_t3_t2_ParamLimits

0x1537,	// (0x0004331e) list_medium_line_t3_t2

0x154c,	// (0x00043333) list_medium_line_t3_t3_ParamLimits

0x154c,	// (0x00043333) list_medium_line_t3_t3

0x0002,

0xfaf9,	// (0x000518e0) list_medium_line_t3_t_ParamLimits

0xfaf9,	// (0x000518e0) list_medium_line_t3_t

0xaf47,	// (0x0004cd2e) list_medium_line_g3_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_g3_g1

0xb35a,	// (0x0004d141) list_medium_line_g3_g2_ParamLimits

0xb35a,	// (0x0004d141) list_medium_line_g3_g2

0xaf53,	// (0x0004cd3a) list_medium_line_g3_g3_ParamLimits

0xaf53,	// (0x0004cd3a) list_medium_line_g3_g3

0x0002,

0xfb00,	// (0x000518e7) list_medium_line_g3_g_ParamLimits

0xfb00,	// (0x000518e7) list_medium_line_g3_g

0xb366,	// (0x0004d14d) list_medium_line_g3_t1_ParamLimits

0xb366,	// (0x0004d14d) list_medium_line_g3_t1

0xaf47,	// (0x0004cd2e) list_medium_line_t2_g3_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_t2_g3_g1

0xb35a,	// (0x0004d141) list_medium_line_t2_g3_g2_ParamLimits

0xb35a,	// (0x0004d141) list_medium_line_t2_g3_g2

0xaf53,	// (0x0004cd3a) list_medium_line_t2_g3_g3_ParamLimits

0xaf53,	// (0x0004cd3a) list_medium_line_t2_g3_g3

0x0002,

0xfb00,	// (0x000518e7) list_medium_line_t2_g3_g_ParamLimits

0xfb00,	// (0x000518e7) list_medium_line_t2_g3_g

0x155e,	// (0x00043345) list_medium_line_t2_g3_t1_ParamLimits

0x155e,	// (0x00043345) list_medium_line_t2_g3_t1

0x1578,	// (0x0004335f) list_medium_line_t2_g3_t2_ParamLimits

0x1578,	// (0x0004335f) list_medium_line_t2_g3_t2

0x0001,

0xfb07,	// (0x000518ee) list_medium_line_t2_g3_t_ParamLimits

0xfb07,	// (0x000518ee) list_medium_line_t2_g3_t

0xaf47,	// (0x0004cd2e) list_medium_line_t3_g3_g1_ParamLimits

0xaf47,	// (0x0004cd2e) list_medium_line_t3_g3_g1

0xb35a,	// (0x0004d141) list_medium_line_t3_g3_g2_ParamLimits

0xb35a,	// (0x0004d141) list_medium_line_t3_g3_g2

0xaf53,	// (0x0004cd3a) list_medium_line_t3_g3_g3_ParamLimits

0xaf53,	// (0x0004cd3a) list_medium_line_t3_g3_g3

0x0002,

0xfb00,	// (0x000518e7) list_medium_line_t3_g3_g_ParamLimits

0xfb00,	// (0x000518e7) list_medium_line_t3_g3_g

0x1593,	// (0x0004337a) list_medium_line_t3_g3_t1_ParamLimits

0x1593,	// (0x0004337a) list_medium_line_t3_g3_t1

0x15a7,	// (0x0004338e) list_medium_line_t3_g3_t2_ParamLimits

0x15a7,	// (0x0004338e) list_medium_line_t3_g3_t2

0x15b9,	// (0x000433a0) list_medium_line_t3_g3_t3_ParamLimits

0x15b9,	// (0x000433a0) list_medium_line_t3_g3_t3

0x0002,

0xfb0c,	// (0x000518f3) list_medium_line_t3_g3_t_ParamLimits

0xfb0c,	// (0x000518f3) list_medium_line_t3_g3_t

0xb27a,	// (0x0004d061) list_medium_line_right_iconx2_g1

0xb1fe,	// (0x0004cfe5) list_medium_line_right_iconx2_g2

0x0001,

0xfb13,	// (0x000518fa) list_medium_line_right_iconx2_g

0xb37b,	// (0x0004d162) list_medium_line_right_iconx2_t1

0xb27a,	// (0x0004d061) list_medium_line_t2_right_iconx2_g1

0xb1fe,	// (0x0004cfe5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb13,	// (0x000518fa) list_medium_line_t2_right_iconx2_g

0x15cd,	// (0x000433b4) list_medium_line_t2_right_iconx2_t1

0x15dd,	// (0x000433c4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb18,	// (0x000518ff) list_medium_line_t2_right_iconx2_t

0xb389,	// (0x0004d170) list_medium_line_x4_t4_t1

0x15ef,	// (0x000433d6) list_medium_line_x4_t4_t2

0x15ff,	// (0x000433e6) list_medium_line_x4_t4_t3

0x160f,	// (0x000433f6) list_medium_line_x4_t4_t4

0x0003,

0xfb1d,	// (0x00051904) list_medium_line_x4_t4_t

0x9a5e,	// (0x0004b845) tport_appsw_pane_ParamLimits

0x9a5e,	// (0x0004b845) tport_appsw_pane

0x9a6f,	// (0x0004b856) tport_contact_pane_ParamLimits

0x9a6f,	// (0x0004b856) tport_contact_pane

0x9a88,	// (0x0004b86f) tport_listscroll_pane_ParamLimits

0x9a88,	// (0x0004b86f) tport_listscroll_pane

0x9aa3,	// (0x0004b88a) cell_tport_appsw_pane_ParamLimits

0x9aa3,	// (0x0004b88a) cell_tport_appsw_pane

0x6e50,	// (0x00048c37) tport_appsw_pane_g1_ParamLimits

0x6e50,	// (0x00048c37) tport_appsw_pane_g1

0xb397,	// (0x0004d17e) tport_contact_pane_g1

0xb3a0,	// (0x0004d187) tport_contact_pane_t1

0xb3ae,	// (0x0004d195) tport_contact_pane_t2

0x0001,

0xfb26,	// (0x0005190d) tport_contact_pane_t

0xb3bc,	// (0x0004d1a3) list_tport_pane

0xb3c5,	// (0x0004d1ac) scroll_pane_cp_030

0xb3d6,	// (0x0004d1bd) cell_tport_appsw_pane_g1

0xb3e6,	// (0x0004d1cd) cell_tport_appsw_pane_t1

0xa6dd,	// (0x0004c4c4) grid_highlight_pane_cp019

0x9ae3,	// (0x0004b8ca) list_tport_double_graphic_pane_ParamLimits

0x9ae3,	// (0x0004b8ca) list_tport_double_graphic_pane

0xd8c7,	// (0x0004f6ae) list_highlight_pane_cp023_ParamLimits

0xd8c7,	// (0x0004f6ae) list_highlight_pane_cp023

0x9af0,	// (0x0004b8d7) list_tport_double_graphic_pane_g1_ParamLimits

0x9af0,	// (0x0004b8d7) list_tport_double_graphic_pane_g1

0x9afd,	// (0x0004b8e4) list_tport_double_graphic_pane_t1_ParamLimits

0x9afd,	// (0x0004b8e4) list_tport_double_graphic_pane_t1

0x9b12,	// (0x0004b8f9) list_tport_double_graphic_pane_t2_ParamLimits

0x9b12,	// (0x0004b8f9) list_tport_double_graphic_pane_t2

0x0001,

0xfb32,	// (0x00051919) list_tport_double_graphic_pane_t_ParamLimits

0xfb32,	// (0x00051919) list_tport_double_graphic_pane_t

0xa6dd,	// (0x0004c4c4) main_cale_note_pane

0x6e05,	// (0x00048bec) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6e05,	// (0x00048bec) cell_vitu2_function_top_wide_pane_cp01

0x9179,	// (0x0004af60) wait_bar_pane_cp05_ParamLimits

0xa6dd,	// (0x0004c4c4) listscroll_cmail_pane

0xb3fc,	// (0x0004d1e3) list_cmail_pane

0x9b2e,	// (0x0004b915) list_cmail_body_pane

0x9b43,	// (0x0004b92a) list_single_cmail_header_caption_pane

0x9b5c,	// (0x0004b943) list_single_cmail_header_detail_pane_ParamLimits

0x9b5c,	// (0x0004b943) list_single_cmail_header_detail_pane

0x9b85,	// (0x0004b96c) list_single_cmail_header_caption_pane_t1

0x161f,	// (0x00043406) list_single_cmail_header_detail_pane_g1_ParamLimits

0x161f,	// (0x00043406) list_single_cmail_header_detail_pane_g1

0xb41c,	// (0x0004d203) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb41c,	// (0x0004d203) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb37,	// (0x0005191e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb37,	// (0x0005191e) list_single_cmail_header_detail_pane_g

0xb435,	// (0x0004d21c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb435,	// (0x0004d21c) list_single_cmail_header_detail_pane_t1

0xb467,	// (0x0004d24e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb467,	// (0x0004d24e) list_single_cmail_header_editor_pane_bg

0xb479,	// (0x0004d260) list_cmail_body_pane_g1

0xb482,	// (0x0004d269) list_cmail_body_pane_t1

0x6f16,	// (0x00048cfd) list_single_cmail_header_editor_pane_bg_g1

0xc968,	// (0x0004e74f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6f26,	// (0x00048d0d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6f1e,	// (0x00048d05) list_single_cmail_header_editor_pane_bg_g1_copy3

0x78b3,	// (0x0004969a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6f46,	// (0x00048d2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6f36,	// (0x00048d1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6f3e,	// (0x00048d25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc948,	// (0x0004e72f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9b95,	// (0x0004b97c) calenote_gesture_pane_ParamLimits

0x9b95,	// (0x0004b97c) calenote_gesture_pane

0x9bb5,	// (0x0004b99c) calenote_window_pane_ParamLimits

0x9bb5,	// (0x0004b99c) calenote_window_pane

0xb490,	// (0x0004d277) popup_note_window_cp01

0x9bd1,	// (0x0004b9b8) calenote_swipe_1_pane_ParamLimits

0x9bd1,	// (0x0004b9b8) calenote_swipe_1_pane

0x986e,	// (0x0004b655) calenote_swipe_2_pane_ParamLimits

0x986e,	// (0x0004b655) calenote_swipe_2_pane

0x97a5,	// (0x0004b58c) calenote_swipe_1_pane_g1_ParamLimits

0x97a5,	// (0x0004b58c) calenote_swipe_1_pane_g1

0x97b2,	// (0x0004b599) calenote_swipe_1_pane_g2_ParamLimits

0x97b2,	// (0x0004b599) calenote_swipe_1_pane_g2

0x0001,

0xfa66,	// (0x0005184d) calenote_swipe_1_pane_g_ParamLimits

0xfa66,	// (0x0005184d) calenote_swipe_1_pane_g

0xb4a2,	// (0x0004d289) calenote_swipe_1_pane_t1_ParamLimits

0xb4a2,	// (0x0004d289) calenote_swipe_1_pane_t1

0x97a5,	// (0x0004b58c) calenote_swipe_2_pane_g1_ParamLimits

0x97a5,	// (0x0004b58c) calenote_swipe_2_pane_g1

0xb4c1,	// (0x0004d2a8) calenote_swipe_2_pane_g2_ParamLimits

0xb4c1,	// (0x0004d2a8) calenote_swipe_2_pane_g2

0x0001,

0xfb43,	// (0x0005192a) calenote_swipe_2_pane_g_ParamLimits

0xfb43,	// (0x0005192a) calenote_swipe_2_pane_g

0xb4cd,	// (0x0004d2b4) calenote_swipe_2_pane_t1_ParamLimits

0xb4cd,	// (0x0004d2b4) calenote_swipe_2_pane_t1

0xa6dd,	// (0x0004c4c4) main_mup_navstr_pane

0x5925,	// (0x0004770c) main_mup3_pane_t7_ParamLimits

0x5925,	// (0x0004770c) main_mup3_pane_t7

0xac35,	// (0x0004ca1c) main_mp4_pane_g6_ParamLimits

0xac35,	// (0x0004ca1c) main_mp4_pane_g6

0xadd9,	// (0x0004cbc0) main_image3_pane_t4_ParamLimits

0xadd9,	// (0x0004cbc0) main_image3_pane_t4

0x9be6,	// (0x0004b9cd) popup_navstr_preview_pane_ParamLimits

0x9be6,	// (0x0004b9cd) popup_navstr_preview_pane

0x9bfa,	// (0x0004b9e1) scroll_navstr_pane_ParamLimits

0x9bfa,	// (0x0004b9e1) scroll_navstr_pane

0xa6dd,	// (0x0004c4c4) bg_popup_preview_window_pane_cp04

0xb4f4,	// (0x0004d2db) popup_navstr_preview_pane_t1

0x9c0e,	// (0x0004b9f5) scroll_navstr_pane_g1_ParamLimits

0x9c0e,	// (0x0004b9f5) scroll_navstr_pane_g1

0x9c22,	// (0x0004ba09) scroll_navstr_pane_t1_ParamLimits

0x9c22,	// (0x0004ba09) scroll_navstr_pane_t1

0xb499,	// (0x0004d280) bg_button_pane_cp014

0xb499,	// (0x0004d280) bg_button_pane_cp030

0x121c,	// (0x00043003) list_double_fisheye_pane_g4_ParamLimits

0x121c,	// (0x00043003) list_double_fisheye_pane_g4

0x1228,	// (0x0004300f) list_double_fisheye_pane_g5_ParamLimits

0x1228,	// (0x0004300f) list_double_fisheye_pane_g5

0xb404,	// (0x0004d1eb) sp_fs_scroll_pane_cp03

0xd9cc,	// (0x0004f7b3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x9995,	// (0x0004b77c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa83,	// (0x0005186a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x99a1,	// (0x0004b788) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9b24,	// (0x0004b90b) sp_fs_scroll_pane_cp02

0xc66e,	// (0x0004e455) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc66e,	// (0x0004e455) popup_sp_fs_calendar_preview_list_single_pane

0xa6dd,	// (0x0004c4c4) main_cam6_pano_pane

0xd8c7,	// (0x0004f6ae) main_mup3_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) main_phacti_pane

0x904c,	// (0x0004ae33) bg_button_pane_cp11

0x9066,	// (0x0004ae4d) main_mobtv_info_pane_g2_ParamLimits

0x9066,	// (0x0004ae4d) main_mobtv_info_pane_g2

0x0001,

0xf9e3,	// (0x000517ca) main_mobtv_info_pane_g_ParamLimits

0xf9e3,	// (0x000517ca) main_mobtv_info_pane_g

0x92e9,	// (0x0004b0d0) sc_clock_pane_t5_ParamLimits

0x92e9,	// (0x0004b0d0) sc_clock_pane_t5

0x94ba,	// (0x0004b2a1) main_radioblah_pane_g1_ParamLimits

0x9500,	// (0x0004b2e7) main_radioblah_pane_t3_ParamLimits

0x9500,	// (0x0004b2e7) main_radioblah_pane_t3

0x9518,	// (0x0004b2ff) main_radioblah_pane_t4_ParamLimits

0x9518,	// (0x0004b2ff) main_radioblah_pane_t4

0x9546,	// (0x0004b32d) main_radioblah_text_pane_ParamLimits

0x9546,	// (0x0004b32d) main_radioblah_text_pane

0x9558,	// (0x0004b33f) main_radioblah_info_pane_g1_ParamLimits

0x962d,	// (0x0004b414) main_radioblah_info_pane_t4_ParamLimits

0x962d,	// (0x0004b414) main_radioblah_info_pane_t4

0xd8c7,	// (0x0004f6ae) main_sp_fs_calendar_pane

0x9c38,	// (0x0004ba1f) main_phacti_pane_g1

0x9c40,	// (0x0004ba27) phacti_note_pane_ParamLimits

0x9c40,	// (0x0004ba27) phacti_note_pane

0xb50b,	// (0x0004d2f2) phacti_term_pane_ParamLimits

0xb50b,	// (0x0004d2f2) phacti_term_pane

0xb520,	// (0x0004d307) phacti_note_pane_t1_ParamLimits

0xb520,	// (0x0004d307) phacti_note_pane_t1

0xb537,	// (0x0004d31e) phacti_term_pane_g1

0xb53f,	// (0x0004d326) phacti_term_pane_t1_ParamLimits

0xb53f,	// (0x0004d326) phacti_term_pane_t1

0xb569,	// (0x0004d350) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb571,	// (0x0004d358) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb4d,	// (0x00051934) popup_sp_fs_calendar_preview_list_single_pane_g

0xb579,	// (0x0004d360) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb579,	// (0x0004d360) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb58f,	// (0x0004d376) aid_popup_sp_fs_bg_corner_pane

0xe87e,	// (0x00050665) popup_sp_fs_calendar_preview_bg_pane_g1

0xa6dd,	// (0x0004c4c4) popup_sp_fs_calendar_preview_bg_pane

0xb597,	// (0x0004d37e) popup_sp_fs_calendar_preview_list_pane

0xd8c7,	// (0x0004f6ae) bg_main_sp_fs_cale_pane_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_main_sp_fs_cale_pane

0xb59f,	// (0x0004d386) listscroll_cale_mrui_pane_ParamLimits

0xb59f,	// (0x0004d386) listscroll_cale_mrui_pane

0xb5b3,	// (0x0004d39a) listscroll_sp_fs_schedule_track_pane

0xb5bc,	// (0x0004d3a3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb5bc,	// (0x0004d3a3) main_sp_fs_ctrlbar_pane_cp01

0xb5cd,	// (0x0004d3b4) main_sp_fs_ribbon_pane

0xb5d5,	// (0x0004d3bc) popup_sp_fs_cale_preview_window

0x9c9b,	// (0x0004ba82) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9c9b,	// (0x0004ba82) list_single_sp_fs_schedule_track_pane

0xd8c7,	// (0x0004f6ae) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_sp_fs_highlight_list_pane_cp03

0x9cb0,	// (0x0004ba97) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9cb0,	// (0x0004ba97) list_single_sp_fs_schedule_track_pane_g1

0x9cbc,	// (0x0004baa3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9cbc,	// (0x0004baa3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb52,	// (0x00051939) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb52,	// (0x00051939) list_single_sp_fs_schedule_track_pane_g

0x9cc8,	// (0x0004baaf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9cc8,	// (0x0004baaf) list_single_sp_fs_schedule_track_pane_t1

0x9ce2,	// (0x0004bac9) sp_fs_schedule_track_pane_ParamLimits

0x9ce2,	// (0x0004bac9) sp_fs_schedule_track_pane

0xb5e7,	// (0x0004d3ce) sp_fs_schedule_track_pane_g1

0xb5ef,	// (0x0004d3d6) sp_fs_schedule_track_pane_g2

0xb5f7,	// (0x0004d3de) sp_fs_schedule_track_pane_g3

0xb5ff,	// (0x0004d3e6) sp_fs_schedule_track_pane_g4

0xb607,	// (0x0004d3ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfb57,	// (0x0005193e) sp_fs_schedule_track_pane_g

0x6f16,	// (0x00048cfd) bg_sp_fs_schedule_viewer_highlight_g1

0xc968,	// (0x0004e74f) bg_sp_fs_schedule_viewer_highlight_g2

0x6f1e,	// (0x00048d05) bg_sp_fs_schedule_viewer_highlight_g3

0x6f26,	// (0x00048d0d) bg_sp_fs_schedule_viewer_highlight_g4

0x78b3,	// (0x0004969a) bg_sp_fs_schedule_viewer_highlight_g5

0x6f36,	// (0x00048d1d) bg_sp_fs_schedule_viewer_highlight_g6

0x6f3e,	// (0x00048d25) bg_sp_fs_schedule_viewer_highlight_g7

0x6f46,	// (0x00048d2d) bg_sp_fs_schedule_viewer_highlight_g8

0xc948,	// (0x0004e72f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb62,	// (0x00051949) bg_sp_fs_schedule_viewer_highlight_g

0xa6dd,	// (0x0004c4c4) bg_main_sp_fs_ribbon_pane

0x9cf3,	// (0x0004bada) main_sp_fs_ribbon_pane_g1

0xb60f,	// (0x0004d3f6) main_sp_fs_ribbon_pane_t1

0x9cfc,	// (0x0004bae3) main_sp_fs_ribbon_pane_t2

0xb61e,	// (0x0004d405) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb75,	// (0x0005195c) main_sp_fs_ribbon_pane_t

0xb62d,	// (0x0004d414) main_sp_fs_ribbon_scheduler_pane

0xb635,	// (0x0004d41c) bg_main_sp_fs_ribbon_pane_g1

0xb63e,	// (0x0004d425) bg_main_sp_fs_ribbon_pane_g2

0xb647,	// (0x0004d42e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb7c,	// (0x00051963) bg_main_sp_fs_ribbon_pane_g

0xb64f,	// (0x0004d436) main_sp_fs_ribbon_scheduler_pane_g1

0xb658,	// (0x0004d43f) main_sp_fs_ribbon_scheduler_pane_g2

0xb661,	// (0x0004d448) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb83,	// (0x0005196a) main_sp_fs_ribbon_scheduler_pane_g

0xb66a,	// (0x0004d451) list_cale_mrui_pane

0x9d0b,	// (0x0004baf2) sp_fs_scroll_pane_cp07_ParamLimits

0x9d0b,	// (0x0004baf2) sp_fs_scroll_pane_cp07

0x9d1f,	// (0x0004bb06) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9d1f,	// (0x0004bb06) bg_sp_fs_schedule_viewer_highlight

0xb673,	// (0x0004d45a) list_single_sp_fs_schedule_track_pane_cp01

0xb67b,	// (0x0004d462) list_sp_fs_schedule_track_pane

0xb683,	// (0x0004d46a) sp_fs_scroll_pane_cp06_ParamLimits

0xb683,	// (0x0004d46a) sp_fs_scroll_pane_cp06

0xe87e,	// (0x00050665) bgmain_sp_fs_calendar_pane_g1

0x165d,	// (0x00043444) list_single_cale_mrui_pane_ParamLimits

0x165d,	// (0x00043444) list_single_cale_mrui_pane

0xb695,	// (0x0004d47c) list_single_cale_mrui_row_pane_ParamLimits

0xb695,	// (0x0004d47c) list_single_cale_mrui_row_pane

0xb6a2,	// (0x0004d489) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb6a2,	// (0x0004d489) list_single_cale_mrui_row_pane_g1

0xb6da,	// (0x0004d4c1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb6da,	// (0x0004d4c1) list_single_cale_mrui_row_pane_t1

0x167f,	// (0x00043466) list_single_cale_mrui_row_pane_t2_ParamLimits

0x167f,	// (0x00043466) list_single_cale_mrui_row_pane_t2

0xb6ec,	// (0x0004d4d3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb6ec,	// (0x0004d4d3) list_single_cale_mrui_row_pane_t3

0xb71b,	// (0x0004d502) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb71b,	// (0x0004d502) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb8f,	// (0x00051976) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb8f,	// (0x00051976) list_single_cale_mrui_row_pane_t

0x16e7,	// (0x000434ce) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x16e7,	// (0x000434ce) list_single_cmail_header_editor_pane_bg_cp01

0x170d,	// (0x000434f4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x170d,	// (0x000434f4) list_single_cmail_header_editor_pane_bg_cp02

0x9d2f,	// (0x0004bb16) main_radioblah_text_pane_t1_ParamLimits

0x9d2f,	// (0x0004bb16) main_radioblah_text_pane_t1

0xb74a,	// (0x0004d531) cam6_indi_pane_cp01

0xb752,	// (0x0004d539) cam6_mode_pane_cp01

0xb75a,	// (0x0004d541) cam6_pano_pane

0xb763,	// (0x0004d54a) cam6_zoom_pane_cp01

0xb76b,	// (0x0004d552) cam6_pano_image_pane

0xb776,	// (0x0004d55d) cam6_pano_pane_g1

0x8fe5,	// (0x0004adcc) cam6_pano_pane_g2

0xb77f,	// (0x0004d566) cam6_pano_pane_g3

0xb788,	// (0x0004d56f) cam6_pano_pane_g4

0xee04,	// (0x00050beb) cam6_pano_pane_g5

0xb791,	// (0x0004d578) cam6_pano_pane_g6

0xb79b,	// (0x0004d582) cam6_pano_pane_g7

0xb7a3,	// (0x0004d58a) cam6_pano_pane_g8

0xb7ac,	// (0x0004d593) cam6_pano_pane_g9

0x0008,

0xfb98,	// (0x0005197f) cam6_pano_pane_g

0xa6dd,	// (0x0004c4c4) main_browser_tag_pane

0xb4ec,	// (0x0004d2d3) grid_navstr_albumart_pane

0xb7b7,	// (0x0004d59e) cell_navstr_albumart_pane_ParamLimits

0xb7b7,	// (0x0004d59e) cell_navstr_albumart_pane

0xd141,	// (0x0004ef28) cell_navstr_albumart_pane_g1

0xe242,	// (0x00050029) cell_navstr_albumart_pane_g2

0xe252,	// (0x00050039) cell_navstr_albumart_pane_g3

0xe24a,	// (0x00050031) cell_navstr_albumart_pane_g4

0x0003,

0x0c81,	// (0x00042a68) cell_navstr_albumart_pane_g

0x9d4a,	// (0x0004bb31) bt_list_pane_ParamLimits

0x9d4a,	// (0x0004bb31) bt_list_pane

0x9d5f,	// (0x0004bb46) bt_list_pane_t1

0x9d6e,	// (0x0004bb55) bt_list_pane_t2

0x0001,

0xfbab,	// (0x00051992) bt_list_pane_t

0xa6dd,	// (0x0004c4c4) main_cale_prevew_pane

0x9d7d,	// (0x0004bb64) popup_cale_preview_window_ParamLimits

0x9d7d,	// (0x0004bb64) popup_cale_preview_window

0xd8c7,	// (0x0004f6ae) bg_popup_preview_window_pane_cp05_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_popup_preview_window_pane_cp05

0xb7d9,	// (0x0004d5c0) list_cale_preview_pane_ParamLimits

0xb7d9,	// (0x0004d5c0) list_cale_preview_pane

0x9d94,	// (0x0004bb7b) list_double_cale_preview_pane_ParamLimits

0x9d94,	// (0x0004bb7b) list_double_cale_preview_pane

0x9da6,	// (0x0004bb8d) list_single_cale_preview_pane_ParamLimits

0x9da6,	// (0x0004bb8d) list_single_cale_preview_pane

0x9dba,	// (0x0004bba1) list_single_cale_preview_pane_g1

0x9dc2,	// (0x0004bba9) list_single_cale_preview_pane_t1_ParamLimits

0x9dc2,	// (0x0004bba9) list_single_cale_preview_pane_t1

0x9dd7,	// (0x0004bbbe) list_double_cale_preview_pane_g1

0x9ddf,	// (0x0004bbc6) list_double_cale_preview_pane_t1_ParamLimits

0x9ddf,	// (0x0004bbc6) list_double_cale_preview_pane_t1

0x9df4,	// (0x0004bbdb) list_double_cale_preview_pane_t2_ParamLimits

0x9df4,	// (0x0004bbdb) list_double_cale_preview_pane_t2

0x0001,

0xfbb0,	// (0x00051997) list_double_cale_preview_pane_t_ParamLimits

0xfbb0,	// (0x00051997) list_double_cale_preview_pane_t

0xa6dd,	// (0x0004c4c4) main_ezdial_pane

0xd8c7,	// (0x0004f6ae) main_sp_fs_email_pane_ParamLimits

0x9901,	// (0x0004b6e8) cmail_ddmenu_btn01_pane_ParamLimits

0x9901,	// (0x0004b6e8) cmail_ddmenu_btn01_pane

0x9914,	// (0x0004b6fb) cmail_ddmenu_btn02_pane_ParamLimits

0x9914,	// (0x0004b6fb) cmail_ddmenu_btn02_pane

0x996f,	// (0x0004b756) cmail_ddmenu_btn03_pane_ParamLimits

0x996f,	// (0x0004b756) cmail_ddmenu_btn03_pane

0x1298,	// (0x0004307f) main_sp_fs_ctrlbar_pane_ParamLimits

0x12bc,	// (0x000430a3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9b2e,	// (0x0004b915) list_cmail_body_pane_ParamLimits

0xb413,	// (0x0004d1fa) bg_button_pane_cp12

0xb428,	// (0x0004d20f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb428,	// (0x0004d20f) list_single_cmail_header_detail_pane_g3

0x1637,	// (0x0004341e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1637,	// (0x0004341e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb3e,	// (0x00051925) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb3e,	// (0x00051925) list_single_cmail_header_detail_pane_t

0xb554,	// (0x0004d33b) phacti_term_pane_t2_ParamLimits

0xb554,	// (0x0004d33b) phacti_term_pane_t2

0x0001,

0xfb48,	// (0x0005192f) phacti_term_pane_t_ParamLimits

0xfb48,	// (0x0005192f) phacti_term_pane_t

0xb7e5,	// (0x0004d5cc) aid_size_list_single_double

0x9e0c,	// (0x0004bbf3) popup_ezdial_listscroll_window

0x9e28,	// (0x0004bc0f) popup_number_entry_window_cp01

0xcfe0,	// (0x0004edc7) bg_popup_call_pane_cp09

0xb7f1,	// (0x0004d5d8) ezdial_list_pane

0xb7f9,	// (0x0004d5e0) scroll_pane_cp23

0xe42d,	// (0x00050214) bg_button_pane_cp028_ParamLimits

0xe42d,	// (0x00050214) bg_button_pane_cp028

0x9e36,	// (0x0004bc1d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9e36,	// (0x0004bc1d) cmail_ddmenu_btn01_pane_g1

0x9e42,	// (0x0004bc29) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9e42,	// (0x0004bc29) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbb5,	// (0x0005199c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbb5,	// (0x0005199c) cmail_ddmenu_btn01_pane_g

0xb801,	// (0x0004d5e8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb801,	// (0x0004d5e8) cmail_ddmenu_btn01_pane_t1

0xe42d,	// (0x00050214) bg_button_pane_cp029_ParamLimits

0xe42d,	// (0x00050214) bg_button_pane_cp029

0x9e4e,	// (0x0004bc35) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9e4e,	// (0x0004bc35) cmail_ddmenu_btn02_pane_g1

0x9e66,	// (0x0004bc4d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e66,	// (0x0004bc4d) cmail_ddmenu_btn02_pane_t1

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp031_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp031

0x9e4e,	// (0x0004bc35) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9e4e,	// (0x0004bc35) cmail_ddmenu_btn03_pane_g1

0x9e66,	// (0x0004bc4d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e66,	// (0x0004bc4d) cmail_ddmenu_btn03_pane_t1

0x6526,	// (0x0004830d) cell_dialer2_keypad_pane_t1_ParamLimits

0x6540,	// (0x00048327) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6540,	// (0x00048327) cell_dialer2_keypad_pane_t1_copy1

0x8bfc,	// (0x0004a9e3) ncimui_group_button_pane

0xd8c7,	// (0x0004f6ae) main_sp_fs_calendar_pane_ParamLimits

0x9b43,	// (0x0004b92a) list_single_cmail_header_caption_pane_ParamLimits

0xb098,	// (0x0004ce7f) aid_recal_txt_sm_pane

0xa6dd,	// (0x0004c4c4) mian_recal_day_pane

0xb5d5,	// (0x0004d3bc) popup_sp_fs_cale_preview_window_ParamLimits

0xa6dd,	// (0x0004c4c4) list_recal_day_pane

0xb82f,	// (0x0004d616) list_single_recal_day_pane_ParamLimits

0xb82f,	// (0x0004d616) list_single_recal_day_pane

0xb841,	// (0x0004d628) list_single_recal_day_pane_g1_ParamLimits

0xb841,	// (0x0004d628) list_single_recal_day_pane_g1

0xb84d,	// (0x0004d634) list_single_recal_day_pane_g2_ParamLimits

0xb84d,	// (0x0004d634) list_single_recal_day_pane_g2

0xb85c,	// (0x0004d643) list_single_recal_day_pane_g3_ParamLimits

0xb85c,	// (0x0004d643) list_single_recal_day_pane_g3

0x9e8a,	// (0x0004bc71) list_single_recal_day_pane_g4_ParamLimits

0x9e8a,	// (0x0004bc71) list_single_recal_day_pane_g4

0xb868,	// (0x0004d64f) list_single_recal_day_pane_g5_ParamLimits

0xb868,	// (0x0004d64f) list_single_recal_day_pane_g5

0xb877,	// (0x0004d65e) list_single_recal_day_pane_g6_ParamLimits

0xb877,	// (0x0004d65e) list_single_recal_day_pane_g6

0x0005,

0xfbc4,	// (0x000519ab) list_single_recal_day_pane_g_ParamLimits

0xfbc4,	// (0x000519ab) list_single_recal_day_pane_g

0xb883,	// (0x0004d66a) list_single_recal_day_pane_t1

0xb891,	// (0x0004d678) list_single_recal_day_pane_t2

0x0001,

0xfbd1,	// (0x000519b8) list_single_recal_day_pane_t

0x9e9d,	// (0x0004bc84) ncimui_query_button_pane_ParamLimits

0x9e9d,	// (0x0004bc84) ncimui_query_button_pane

0x9ead,	// (0x0004bc94) ncimui_query_button_pane_t1_ParamLimits

0x9ead,	// (0x0004bc94) ncimui_query_button_pane_t1

0xb89f,	// (0x0004d686) ncimui_query_button_pane_t2_ParamLimits

0xb89f,	// (0x0004d686) ncimui_query_button_pane_t2

0x0001,

0xfbd6,	// (0x000519bd) ncimui_query_button_pane_t_ParamLimits

0xfbd6,	// (0x000519bd) ncimui_query_button_pane_t

0x9ec0,	// (0x0004bca7) query_button_pane_ParamLimits

0x9ec0,	// (0x0004bca7) query_button_pane

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp0028

0xb8b2,	// (0x0004d699) query_button_pane_t1

0x45b9,	// (0x000463a0) main_tport_pane_ParamLimits

0x9a1b,	// (0x0004b802) bg_popup_window_pane_cp01_ParamLimits

0x9a1b,	// (0x0004b802) bg_popup_window_pane_cp01

0x9a35,	// (0x0004b81c) heading_pane_cp08_ParamLimits

0x9a35,	// (0x0004b81c) heading_pane_cp08

0x9a49,	// (0x0004b830) heading_pane_cp07_ParamLimits

0x9a49,	// (0x0004b830) heading_pane_cp07

0xb3d6,	// (0x0004d1bd) cell_tport_appsw_pane_g2

0x0002,

0xfb2b,	// (0x00051912) cell_tport_appsw_pane_g

0x3bd7,	// (0x000459be) input_candi_list_open_g1

0xcb03,	// (0x0004e8ea) list_cale_time_pane_g6_ParamLimits

0xcb03,	// (0x0004e8ea) list_cale_time_pane_g6

0x5382,	// (0x00047169) aid_size_touch_calib_1_ParamLimits

0x5382,	// (0x00047169) aid_size_touch_calib_1

0x538e,	// (0x00047175) aid_size_touch_calib_2_ParamLimits

0x538e,	// (0x00047175) aid_size_touch_calib_2

0x53a4,	// (0x0004718b) aid_size_touch_calib_3_ParamLimits

0x53a4,	// (0x0004718b) aid_size_touch_calib_3

0x53c2,	// (0x000471a9) aid_size_touch_calib_4_ParamLimits

0x53c2,	// (0x000471a9) aid_size_touch_calib_4

0x53d8,	// (0x000471bf) main_touch_calib_button_group_pane_ParamLimits

0x53d8,	// (0x000471bf) main_touch_calib_button_group_pane

0x53f0,	// (0x000471d7) main_touch_calib_pane_g1_ParamLimits

0x53fc,	// (0x000471e3) main_touch_calib_pane_g2_ParamLimits

0x5408,	// (0x000471ef) main_touch_calib_pane_g3_ParamLimits

0x5414,	// (0x000471fb) main_touch_calib_pane_g4_ParamLimits

0xf57e,	// (0x00051365) main_touch_calib_pane_g_ParamLimits

0x5420,	// (0x00047207) main_touch_calib_pane_t1_ParamLimits

0x543a,	// (0x00047221) main_touch_calib_pane_t2_ParamLimits

0x5454,	// (0x0004723b) main_touch_calib_pane_t3_ParamLimits

0x5468,	// (0x0004724f) main_touch_calib_pane_t4_ParamLimits

0x547c,	// (0x00047263) main_touch_calib_pane_t5_ParamLimits

0xf587,	// (0x0005136e) main_touch_calib_pane_t_ParamLimits

0xebeb,	// (0x000509d2) list_single_fp_cale_pane_g3_ParamLimits

0xebeb,	// (0x000509d2) list_single_fp_cale_pane_g3

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp012_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp03_ParamLimits

0x7869,	// (0x00049650) cell_vitu2_function_top_pane_g1_ParamLimits

0xd8c7,	// (0x0004f6ae) bg_vkb2_func_pane_cp04_ParamLimits

0x8b9c,	// (0x0004a983) main_ncimui_button_group_pane_ParamLimits

0x8b9c,	// (0x0004a983) main_ncimui_button_group_pane

0x8bea,	// (0x0004a9d1) main_ncimui_pane_t3_ParamLimits

0x8bea,	// (0x0004a9d1) main_ncimui_pane_t3

0xb502,	// (0x0004d2e9) phacti_button_group_pane

0xb7e5,	// (0x0004d5cc) aid_size_list_single_double_ParamLimits

0x9e0c,	// (0x0004bbf3) popup_ezdial_listscroll_window_ParamLimits

0x9e28,	// (0x0004bc0f) popup_number_entry_window_cp01_ParamLimits

0x9ed3,	// (0x0004bcba) phacti_button_pane_ParamLimits

0x9ed3,	// (0x0004bcba) phacti_button_pane

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp14

0xb8c0,	// (0x0004d6a7) phacti_button_pane_t1

0x9ee4,	// (0x0004bccb) main_touch_calib_button_pane_ParamLimits

0x9ee4,	// (0x0004bccb) main_touch_calib_button_pane

0xc558,	// (0x0004e33f) bg_button_pane_cp18_ParamLimits

0xc558,	// (0x0004e33f) bg_button_pane_cp18

0xb8ce,	// (0x0004d6b5) main_touch_calib_button_pane_t1_ParamLimits

0xb8ce,	// (0x0004d6b5) main_touch_calib_button_pane_t1

0xb8e4,	// (0x0004d6cb) main_touch_calib_button_pane_t2_ParamLimits

0xb8e4,	// (0x0004d6cb) main_touch_calib_button_pane_t2

0x0001,

0xfbdb,	// (0x000519c2) main_touch_calib_button_pane_t_ParamLimits

0xfbdb,	// (0x000519c2) main_touch_calib_button_pane_t

0xa6dd,	// (0x0004c4c4) cell_ncimui_button_pane

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp032

0xb902,	// (0x0004d6e9) cell_ncimui_button_pane_t1

0xadb9,	// (0x0004cba0) image3_infobar_pane_ParamLimits

0xadb9,	// (0x0004cba0) image3_infobar_pane

0x9315,	// (0x0004b0fc) fs_bigclock_status_pane_ParamLimits

0x9315,	// (0x0004b0fc) fs_bigclock_status_pane

0x9322,	// (0x0004b109) main_fs_bigclock_clock_pane_ParamLimits

0x9322,	// (0x0004b109) main_fs_bigclock_clock_pane

0x9335,	// (0x0004b11c) main_fs_bigclock_indi_pane_ParamLimits

0x9335,	// (0x0004b11c) main_fs_bigclock_indi_pane

0x9350,	// (0x0004b137) main_fs_bigclock_swipe_pane_ParamLimits

0x9350,	// (0x0004b137) main_fs_bigclock_swipe_pane

0xa6dd,	// (0x0004c4c4) main_fs_clock_dumped_data

0x9373,	// (0x0004b15a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9373,	// (0x0004b15a) list_single_fs_bigclock_indicator_pane_g1

0x9391,	// (0x0004b178) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9391,	// (0x0004b178) list_single_fs_bigclock_indicator_pane_g2

0x93ab,	// (0x0004b192) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x93ab,	// (0x0004b192) list_single_fs_bigclock_indicator_pane_g3

0x93c5,	// (0x0004b1ac) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x93c5,	// (0x0004b1ac) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfa17,	// (0x000517fe) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfa17,	// (0x000517fe) list_single_fs_bigclock_indicator_pane_g

0x93eb,	// (0x0004b1d2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x93eb,	// (0x0004b1d2) list_single_fs_bigclock_indicator_pane_t1

0x9413,	// (0x0004b1fa) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9413,	// (0x0004b1fa) list_single_fs_bigclock_indicator_pane_t2

0x943b,	// (0x0004b222) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x943b,	// (0x0004b222) list_single_fs_bigclock_indicator_pane_t3

0x9463,	// (0x0004b24a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9463,	// (0x0004b24a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfa22,	// (0x00051809) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfa22,	// (0x00051809) list_single_fs_bigclock_indicator_pane_t

0xb910,	// (0x0004d6f7) image3_infobar_fav_pane_ParamLimits

0xb910,	// (0x0004d6f7) image3_infobar_fav_pane

0xb920,	// (0x0004d707) image3_infobar_loc_pane_ParamLimits

0xb920,	// (0x0004d707) image3_infobar_loc_pane

0xb934,	// (0x0004d71b) image3_infobar_time_pane_ParamLimits

0xb934,	// (0x0004d71b) image3_infobar_time_pane

0xe87e,	// (0x00050665) image3_infobar_time_pane_g1

0xb944,	// (0x0004d72b) image3_infobar_time_pane_t1

0xe87e,	// (0x00050665) image3_infobar_loc_pane_g1

0xb952,	// (0x0004d739) image3_infobar_loc_pane_g2

0x0001,

0xfbe0,	// (0x000519c7) image3_infobar_loc_pane_g

0xb95a,	// (0x0004d741) image3_infobar_loc_pane_t1

0xe87e,	// (0x00050665) image3_infobar_fav_pane_g1

0xb968,	// (0x0004d74f) image3_infobar_fav_pane_g2

0x0001,

0xfbe5,	// (0x000519cc) image3_infobar_fav_pane_g

0xb970,	// (0x0004d757) fs_bigclock_status_battery_pane

0xb979,	// (0x0004d760) fs_bigclock_status_signal_pane

0xb982,	// (0x0004d769) fs_bigclock_status_title_pane

0xb98b,	// (0x0004d772) fs_bigclock_status_signal_pane_g1

0xb994,	// (0x0004d77b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfbea,	// (0x000519d1) fs_bigclock_status_signal_pane_g

0xb99c,	// (0x0004d783) fs_bigclock_status_battery_pane_g1

0xb9a5,	// (0x0004d78c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfbef,	// (0x000519d6) fs_bigclock_status_battery_pane_g

0xb9ad,	// (0x0004d794) fs_bigclock_status_title_pane_t1

0xe87e,	// (0x00050665) main_fs_bigclock_clock_pane_g1

0xb9bb,	// (0x0004d7a2) main_fs_bigclock_clock_pane_g2

0xb9bb,	// (0x0004d7a2) main_fs_bigclock_clock_pane_g3

0xb9bb,	// (0x0004d7a2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbf4,	// (0x000519db) main_fs_bigclock_clock_pane_g

0x9ef9,	// (0x0004bce0) main_fs_bigclock_clock_pane_t1

0x9f07,	// (0x0004bcee) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbfd,	// (0x000519e4) main_fs_bigclock_clock_pane_t

0xb9c3,	// (0x0004d7aa) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb9c3,	// (0x0004d7aa) list_single_fs_bigclock_indicator_pane

0x9f16,	// (0x0004bcfd) list_single_fs_bigclock_pane_ParamLimits

0x9f16,	// (0x0004bcfd) list_single_fs_bigclock_pane

0xb9dd,	// (0x0004d7c4) main_fs_bigclock_indicator_pane_t1

0xb9ec,	// (0x0004d7d3) list_single_fs_bigclock_pane_g1

0xb9f4,	// (0x0004d7db) list_single_fs_bigclock_pane_t1

0xe87e,	// (0x00050665) main_fs_bigclock_swipe_pane_g1

0xba34,	// (0x0004d81b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc0e,	// (0x000519f5) main_fs_bigclock_swipe_pane_g

0xba3c,	// (0x0004d823) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xba3c,	// (0x0004d823) main_fs_bigclock_swipe_pane_t1

0x3428,	// (0x0004520f) call_type_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) main_btmg_pane

0xb6ce,	// (0x0004d4b5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb6ce,	// (0x0004d4b5) list_single_cale_mrui_row_pane_g2

0x0001,

0xfb8a,	// (0x00051971) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb8a,	// (0x00051971) list_single_cale_mrui_row_pane_g

0xb81f,	// (0x0004d606) list_recal_vselct_arw_lo_pane

0xb827,	// (0x0004d60e) list_recal_vselct_arw_up_pane

0xb08f,	// (0x0004ce76) list_recal_vselct_pane

0xba59,	// (0x0004d840) btmg_button_pane

0x9f7d,	// (0x0004bd64) main_btmg_pane_g1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp044

0xba63,	// (0x0004d84a) btmg_button_pane_t1

0xe425,	// (0x0005020c) aid_listscroll_gen

0xd8c7,	// (0x0004f6ae) main_cntbar_detail_pane

0xb3f4,	// (0x0004d1db) list_cmail_folder_pane

0xb404,	// (0x0004d1eb) sp_fs_scroll_pane_cp03_ParamLimits

0x172d,	// (0x00043514) list_single_fs_dyc_pane_cp01_ParamLimits

0x172d,	// (0x00043514) list_single_fs_dyc_pane_cp01

0xba71,	// (0x0004d858) aid_size_cmail_indent

0xba7a,	// (0x0004d861) list_single_dyc_row_pane_cp01

0x9fb3,	// (0x0004bd9a) cntbar_detail_list_pane_ParamLimits

0x9fb3,	// (0x0004bd9a) cntbar_detail_list_pane

0x9fff,	// (0x0004bde6) main_cntbar_detail_cont_pane_ParamLimits

0x9fff,	// (0x0004bde6) main_cntbar_detail_cont_pane

0x341c,	// (0x00045203) scroll_pane_cp032_ParamLimits

0x341c,	// (0x00045203) scroll_pane_cp032

0xa013,	// (0x0004bdfa) cntbar_detail_list_event_pane_ParamLimits

0xa013,	// (0x0004bdfa) cntbar_detail_list_event_pane

0x9fc3,	// (0x0004bdaa) cntbar_detail_list_shct_pane

0xc9b6,	// (0x0004e79d) aid_list_gen

0xba83,	// (0x0004d86a) aid_scroll

0xba8c,	// (0x0004d873) aid_size_touch_scroll_bar

0xba95,	// (0x0004d87c) aid_list_double

0xba9e,	// (0x0004d885) aid_list_single

0xbaa7,	// (0x0004d88e) aid_list_single_lg

0xbab0,	// (0x0004d897) aid_list_z_g_a_sm

0xbab8,	// (0x0004d89f) aid_list_z_g_d

0xbac0,	// (0x0004d8a7) aid_txt_z_prm

0x1746,	// (0x0004352d) aid_txt_z_prm_cp01

0x1754,	// (0x0004353b) aid_txt_z_sec

0xa023,	// (0x0004be0a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa023,	// (0x0004be0a) main_cntbar_detail_cont_pane_g1

0xa037,	// (0x0004be1e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa037,	// (0x0004be1e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc13,	// (0x000519fa) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc13,	// (0x000519fa) main_cntbar_detail_cont_pane_g

0xbace,	// (0x0004d8b5) main_cntbar_detail_cont_pane_t1

0xbadc,	// (0x0004d8c3) main_cntbar_detail_cont_pane_t2

0xbaea,	// (0x0004d8d1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc18,	// (0x000519ff) main_cntbar_detail_cont_pane_t

0xa047,	// (0x0004be2e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa047,	// (0x0004be2e) cell_cntbar_detail_list_shct_pane

0xbaf8,	// (0x0004d8df) cntbar_detail_list_shct_pane_g1

0xbb01,	// (0x0004d8e8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc1f,	// (0x00051a06) cntbar_detail_list_shct_pane_g

0xa05b,	// (0x0004be42) cntbar_detail_list_event_pane_g1_ParamLimits

0xa05b,	// (0x0004be42) cntbar_detail_list_event_pane_g1

0xa067,	// (0x0004be4e) cntbar_detail_list_event_pane_g2_ParamLimits

0xa067,	// (0x0004be4e) cntbar_detail_list_event_pane_g2

0x0005,

0xfc24,	// (0x00051a0b) cntbar_detail_list_event_pane_g_ParamLimits

0xfc24,	// (0x00051a0b) cntbar_detail_list_event_pane_g

0xa0d3,	// (0x0004beba) cntbar_detail_list_event_pane_t1_ParamLimits

0xa0d3,	// (0x0004beba) cntbar_detail_list_event_pane_t1

0xa0e8,	// (0x0004becf) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0e8,	// (0x0004becf) cntbar_detail_list_event_pane_t2

0x0002,

0xfc31,	// (0x00051a18) cntbar_detail_list_event_pane_t_ParamLimits

0xfc31,	// (0x00051a18) cntbar_detail_list_event_pane_t

0xe87e,	// (0x00050665) cell_cntbar_detail_list_shct_pane_g1

0x3779,	// (0x00045560) navi_pane_mv_g3

0xd8c7,	// (0x0004f6ae) main_cntbar_detail_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) main_notif_wgt_pane

0xabcf,	// (0x0004c9b6) aid_tch_main_mp4_pane_g4

0xadb1,	// (0x0004cb98) popup_slider_window_cp02

0xb816,	// (0x0004d5fd) list_recal_day_event_pane

0x9f87,	// (0x0004bd6e) cntbar_detail_btn_pane_ParamLimits

0x9f87,	// (0x0004bd6e) cntbar_detail_btn_pane

0x9f9d,	// (0x0004bd84) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f9d,	// (0x0004bd84) cntbar_detail_btn_pane_cp01

0x9fc3,	// (0x0004bdaa) cntbar_detail_list_shct_pane_ParamLimits

0x9fd3,	// (0x0004bdba) cntbar_detail_pane_g1_ParamLimits

0x9fd3,	// (0x0004bdba) cntbar_detail_pane_g1

0x9fe3,	// (0x0004bdca) cntbar_detail_pane_t1_ParamLimits

0x9fe3,	// (0x0004bdca) cntbar_detail_pane_t1

0xa073,	// (0x0004be5a) cntbar_detail_list_event_pane_g3_ParamLimits

0xa073,	// (0x0004be5a) cntbar_detail_list_event_pane_g3

0xa08b,	// (0x0004be72) cntbar_detail_list_event_pane_g4_ParamLimits

0xa08b,	// (0x0004be72) cntbar_detail_list_event_pane_g4

0xa0a3,	// (0x0004be8a) cntbar_detail_list_event_pane_g5_ParamLimits

0xa0a3,	// (0x0004be8a) cntbar_detail_list_event_pane_g5

0xa0bb,	// (0x0004bea2) cntbar_detail_list_event_pane_g6_ParamLimits

0xa0bb,	// (0x0004bea2) cntbar_detail_list_event_pane_g6

0xa0fd,	// (0x0004bee4) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0fd,	// (0x0004bee4) cntbar_detail_list_event_pane_t3

0xa10f,	// (0x0004bef6) popup_notif_wgt_window_ParamLimits

0xa10f,	// (0x0004bef6) popup_notif_wgt_window

0xa128,	// (0x0004bf0f) popup_submenu_window_cp01_ParamLimits

0xa128,	// (0x0004bf0f) popup_submenu_window_cp01

0xcfe0,	// (0x0004edc7) bg_popup_window_pane_cp10

0xbb0a,	// (0x0004d8f1) listscroll_notif_wgt_pane

0xbb14,	// (0x0004d8fb) list_notif_wgt_window

0xbb1d,	// (0x0004d904) scroll_pane_cp033

0xbb26,	// (0x0004d90d) list_notif_wgt_row_pane_ParamLimits

0xbb26,	// (0x0004d90d) list_notif_wgt_row_pane

0xbb3a,	// (0x0004d921) aid_size_list_notif_wgt_del

0xbb43,	// (0x0004d92a) list_notif_wgt_row_pane_g1

0xbb4b,	// (0x0004d932) list_notif_wgt_row_pane_g2

0xbb53,	// (0x0004d93a) list_notif_wgt_row_pane_g3

0x0002,

0xfc38,	// (0x00051a1f) list_notif_wgt_row_pane_g

0xbb5c,	// (0x0004d943) list_notif_wgt_row_pane_t1

0xbb6a,	// (0x0004d951) list_notif_wgt_row_pane_t2

0xbb78,	// (0x0004d95f) list_notif_wgt_row_pane_t3

0x0002,

0xfc3f,	// (0x00051a26) list_notif_wgt_row_pane_t

0x7908,	// (0x000496ef) list_recal_day_event_pane_g1

0xbb86,	// (0x0004d96d) list_recal_day_event_pane_t1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp045

0xbb95,	// (0x0004d97c) cntbar_detail_btn_pane_t1

0xe42d,	// (0x00050214) main_callh_pane_ParamLimits

0xe42d,	// (0x00050214) main_callh_pane

0xa6dd,	// (0x0004c4c4) main_coverflow0_pane

0xa6dd,	// (0x0004c4c4) main_wgtman_pane

0x935e,	// (0x0004b145) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x935e,	// (0x0004b145) main_fs_bigclock_unlock_btn_pane

0xb3ce,	// (0x0004d1b5) bg_button_pane_cp16

0xb3de,	// (0x0004d1c5) cell_tport_appsw_pane_g3

0xa13a,	// (0x0004bf21) cf0_flow_pane_ParamLimits

0xa13a,	// (0x0004bf21) cf0_flow_pane

0xbba3,	// (0x0004d98a) listscroll_cf0_pane

0xbbac,	// (0x0004d993) main_cf0_pane_g1

0xa14f,	// (0x0004bf36) main_cf0_pane_t1_ParamLimits

0xa14f,	// (0x0004bf36) main_cf0_pane_t1

0xa166,	// (0x0004bf4d) main_cf0_pane_t2_ParamLimits

0xa166,	// (0x0004bf4d) main_cf0_pane_t2

0x0001,

0xfc46,	// (0x00051a2d) main_cf0_pane_t_ParamLimits

0xfc46,	// (0x00051a2d) main_cf0_pane_t

0xbbb6,	// (0x0004d99d) scroll_pane_cp11

0xa17d,	// (0x0004bf64) cf0_flow_pane_g1

0xa185,	// (0x0004bf6c) cf0_flow_pane_g2

0x0001,

0xfc4b,	// (0x00051a32) cf0_flow_pane_g

0xa18d,	// (0x0004bf74) cf0_flow_pane_t1

0xa6dd,	// (0x0004c4c4) main_call6_pane

0xa6dd,	// (0x0004c4c4) main_calllock_pane

0xa19b,	// (0x0004bf82) call6_btn_grp_pane_ParamLimits

0xa19b,	// (0x0004bf82) call6_btn_grp_pane

0xa1b5,	// (0x0004bf9c) call6_pane_g1_ParamLimits

0xa1b5,	// (0x0004bf9c) call6_pane_g1

0xa1ca,	// (0x0004bfb1) popup_call6_1st_window_ParamLimits

0xa1ca,	// (0x0004bfb1) popup_call6_1st_window

0xa1db,	// (0x0004bfc2) popup_call6_2nd_window_ParamLimits

0xa1db,	// (0x0004bfc2) popup_call6_2nd_window

0xa1ec,	// (0x0004bfd3) cell_call6_btn_pane_ParamLimits

0xa1ec,	// (0x0004bfd3) cell_call6_btn_pane

0xcfe0,	// (0x0004edc7) bg_popup_call2_in_pane_cp03

0xbbc1,	// (0x0004d9a8) popup_call6_1st_window_g1

0xbbc9,	// (0x0004d9b0) popup_call6_1st_window_g2

0xbbd1,	// (0x0004d9b8) popup_call6_1st_window_g3

0x0002,

0xfc50,	// (0x00051a37) popup_call6_1st_window_g

0xbbd9,	// (0x0004d9c0) popup_call6_1st_window_t1

0xbbe8,	// (0x0004d9cf) popup_call6_1st_window_t2

0xbbf8,	// (0x0004d9df) popup_call6_1st_window_t3

0x0002,

0xfc57,	// (0x00051a3e) popup_call6_1st_window_t

0xcfe0,	// (0x0004edc7) bg_popup_call2_in_pane_cp04

0xbbc1,	// (0x0004d9a8) popup_call6_2nd_window_g1

0xbbc9,	// (0x0004d9b0) popup_call6_2nd_window_g2

0xbbd1,	// (0x0004d9b8) popup_call6_2nd_window_g3

0x0002,

0xfc50,	// (0x00051a37) popup_call6_2nd_window_g

0xbbd9,	// (0x0004d9c0) popup_call6_2nd_window_t1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp15

0xbc08,	// (0x0004d9ef) cell_call6_btn_pane_g1

0xbc11,	// (0x0004d9f8) cell_call6_btn_pane_t1

0xa200,	// (0x0004bfe7) listscroll_wgtman_pane_ParamLimits

0xa200,	// (0x0004bfe7) listscroll_wgtman_pane

0xa223,	// (0x0004c00a) wgtman_btn_pane_ParamLimits

0xa223,	// (0x0004c00a) wgtman_btn_pane

0xce93,	// (0x0004ec7a) aid_scroll_copy1

0xbc20,	// (0x0004da07) list_wgtman_pane

0xa266,	// (0x0004c04d) wgtman_btn_pane_g1_ParamLimits

0xa266,	// (0x0004c04d) wgtman_btn_pane_g1

0xa292,	// (0x0004c079) wgtman_btn_pane_t1_ParamLimits

0xa292,	// (0x0004c079) wgtman_btn_pane_t1

0xbc2a,	// (0x0004da11) wgtman_btn_pane_t2_ParamLimits

0xbc2a,	// (0x0004da11) wgtman_btn_pane_t2

0x0001,

0xfc5e,	// (0x00051a45) wgtman_btn_pane_t_ParamLimits

0xfc5e,	// (0x00051a45) wgtman_btn_pane_t

0xa2cf,	// (0x0004c0b6) listrow_wgtman_pane_ParamLimits

0xa2cf,	// (0x0004c0b6) listrow_wgtman_pane

0xa2e2,	// (0x0004c0c9) listrow_wgtman_pane_g1

0xa2eb,	// (0x0004c0d2) listrow_wgtman_pane_g2

0x0001,

0xfc63,	// (0x00051a4a) listrow_wgtman_pane_g

0x1762,	// (0x00043549) listrow_wgtman_pane_t1

0x1770,	// (0x00043557) listrow_wgtman_pane_t2

0x0001,

0xfc68,	// (0x00051a4f) listrow_wgtman_pane_t

0x177e,	// (0x00043565) wait_bar_pane_cp09

0xbc41,	// (0x0004da28) main_calllock_btn_pane

0xbc4b,	// (0x0004da32) main_calllock_pane_g1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp17

0xbc56,	// (0x0004da3d) main_calllock_btn_pane_g1

0xbc5f,	// (0x0004da46) main_calllock_btn_pane_t1

0xa6dd,	// (0x0004c4c4) main_dialer3_pane

0xa6dd,	// (0x0004c4c4) main_fmrd2_pane

0xe87e,	// (0x00050665) main_fs_bigclock_unlock_btn_pane_g1

0xbc76,	// (0x0004da5d) main_fs_bigclock_unlock_btn_pane_t1

0xa2f5,	// (0x0004c0dc) area_fmrd2_info_pane_ParamLimits

0xa2f5,	// (0x0004c0dc) area_fmrd2_info_pane

0xa306,	// (0x0004c0ed) area_fmrd2_visual_pane_ParamLimits

0xa306,	// (0x0004c0ed) area_fmrd2_visual_pane

0xa314,	// (0x0004c0fb) fmrd2_indi_pane_ParamLimits

0xa314,	// (0x0004c0fb) fmrd2_indi_pane

0xa321,	// (0x0004c108) area_fmrd2_visual_pane_g1

0xa329,	// (0x0004c110) area_fmrd2_visual_pane_t1

0xa339,	// (0x0004c120) area_fmrd2_visual_pane_t2

0xa349,	// (0x0004c130) area_fmrd2_visual_pane_t3

0x0002,

0xfc72,	// (0x00051a59) area_fmrd2_visual_pane_t

0xa359,	// (0x0004c140) area_fmrd2_info_pane_g1

0xa361,	// (0x0004c148) area_fmrd2_info_pane_t1

0xa371,	// (0x0004c158) area_fmrd2_info_pane_t2

0xa381,	// (0x0004c168) area_fmrd2_info_pane_t3

0xa391,	// (0x0004c178) area_fmrd2_info_pane_t4

0x0003,

0xfc79,	// (0x00051a60) area_fmrd2_info_pane_t

0xa39f,	// (0x0004c186) fmrd2_indi_pane_t1

0xa3af,	// (0x0004c196) fmrd2_indi_pane_t2

0xa3bf,	// (0x0004c1a6) fmrd2_indi_pane_t3

0x0002,

0xfc82,	// (0x00051a69) fmrd2_indi_pane_t

0x93d4,	// (0x0004b1bb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x93d4,	// (0x0004b1bb) list_single_fs_bigclock_indicator_pane_g5

0x9478,	// (0x0004b25f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9478,	// (0x0004b25f) list_single_fs_bigclock_indicator_pane_t5

0x9c54,	// (0x0004ba3b) aid_cell_bcale_month_pane_ParamLimits

0x9c54,	// (0x0004ba3b) aid_cell_bcale_month_pane

0x9c66,	// (0x0004ba4d) bcale_month_pane_ParamLimits

0x9c66,	// (0x0004ba4d) bcale_month_pane

0x9c80,	// (0x0004ba67) bcale_preview_pane_ParamLimits

0x9c80,	// (0x0004ba67) bcale_preview_pane

0xb9f4,	// (0x0004d7db) list_single_fs_bigclock_pane_t1_ParamLimits

0xba10,	// (0x0004d7f7) list_single_fs_bigclock_pane_t2_ParamLimits

0xba10,	// (0x0004d7f7) list_single_fs_bigclock_pane_t2

0x0001,

0xfc09,	// (0x000519f0) list_single_fs_bigclock_pane_t_ParamLimits

0xfc09,	// (0x000519f0) list_single_fs_bigclock_pane_t

0xbc6e,	// (0x0004da55) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc6d,	// (0x00051a54) main_fs_bigclock_unlock_btn_pane_g

0xa3cf,	// (0x0004c1b6) aid_dia3_key_size_ParamLimits

0xa3cf,	// (0x0004c1b6) aid_dia3_key_size

0xa3de,	// (0x0004c1c5) aid_dia3_listrow_size_ParamLimits

0xa3de,	// (0x0004c1c5) aid_dia3_listrow_size

0xa3f3,	// (0x0004c1da) dia3_keypad_fun_pane_ParamLimits

0xa3f3,	// (0x0004c1da) dia3_keypad_fun_pane

0xa40f,	// (0x0004c1f6) dia3_keypad_num_pane_ParamLimits

0xa40f,	// (0x0004c1f6) dia3_keypad_num_pane

0xa42a,	// (0x0004c211) dia3_listscroll_pane_ParamLimits

0xa42a,	// (0x0004c211) dia3_listscroll_pane

0xa43d,	// (0x0004c224) dia3_numentry_pane_ParamLimits

0xa43d,	// (0x0004c224) dia3_numentry_pane

0xbc84,	// (0x0004da6b) dia3_list_pane

0xbc8f,	// (0x0004da76) scroll_pane_cp12

0xa6dd,	// (0x0004c4c4) bg_dia3_numentry_pane

0xa451,	// (0x0004c238) dia3_numentry_pane_t1

0xa460,	// (0x0004c247) cell_dia3_key_num_pane

0xa468,	// (0x0004c24f) cell_dia3_key0_fun_pane_ParamLimits

0xa468,	// (0x0004c24f) cell_dia3_key0_fun_pane

0xa47c,	// (0x0004c263) cell_dia3_key1_fun_pane_ParamLimits

0xa47c,	// (0x0004c263) cell_dia3_key1_fun_pane

0xa494,	// (0x0004c27b) dia3_listrow_pane

0x8df0,	// (0x0004abd7) bg_dia3_numentry_pane_g1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp21

0xbc9a,	// (0x0004da81) cell_dia3_key_num_pane_t1

0xbca8,	// (0x0004da8f) cell_dia3_key_num_pane_t2

0xbcb7,	// (0x0004da9e) cell_dia3_key_num_pane_t3

0xbcc6,	// (0x0004daad) cell_dia3_key_num_pane_t4

0x0003,

0xfc89,	// (0x00051a70) cell_dia3_key_num_pane_t

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp19

0xa4a6,	// (0x0004c28d) cell_dia3_key0_fun_pane_g1

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp20

0xa4ae,	// (0x0004c295) cell_dia3_key1_fun_pane_g1

0xa4b6,	// (0x0004c29d) area_left_week_number_pane

0xdc9c,	// (0x0004fa83) area_top_day_name_pane

0xa4bf,	// (0x0004c2a6) frame_month_view_pane

0xa4c7,	// (0x0004c2ae) grid_month_view_pane

0xa4d1,	// (0x0004c2b8) cell_top_day_name_pane_ParamLimits

0xa4d1,	// (0x0004c2b8) cell_top_day_name_pane

0x9da6,	// (0x0004bb8d) cell_area_left_week_number_pane_ParamLimits

0x9da6,	// (0x0004bb8d) cell_area_left_week_number_pane

0xa4e7,	// (0x0004c2ce) cell_month_view_pane_ParamLimits

0xa4e7,	// (0x0004c2ce) cell_month_view_pane

0xbcd5,	// (0x0004dabc) frm_month_g1

0xa502,	// (0x0004c2e9) frm_month_g2

0xa50a,	// (0x0004c2f1) frm_month_g3

0xa512,	// (0x0004c2f9) frm_month_g4

0xa51a,	// (0x0004c301) frm_month_g5

0xa522,	// (0x0004c309) frm_month_g6

0xa52a,	// (0x0004c311) frm_month_g7

0xbcde,	// (0x0004dac5) frm_month_g8

0xa532,	// (0x0004c319) frm_month_g9

0xa53b,	// (0x0004c322) frm_month_g10

0xa544,	// (0x0004c32b) frm_month_g11

0xa54d,	// (0x0004c334) frm_month_g12

0xa556,	// (0x0004c33d) frm_month_g13

0xa55f,	// (0x0004c346) frm_month_g14

0xa568,	// (0x0004c34f) frm_month_g15

0xa571,	// (0x0004c358) frm_month_g16

0x000f,

0xfc92,	// (0x00051a79) frm_month_g

0xa57a,	// (0x0004c361) cell_top_day_name_pane_t1

0xa589,	// (0x0004c370) cell_area_left_week_number_pane_g1

0xa57a,	// (0x0004c361) cell_area_left_week_number_pane_t1

0xe87e,	// (0x00050665) cell_month_view_pane_g1

0xa591,	// (0x0004c378) cell_month_view_pane_t1

0xa6dd,	// (0x0004c4c4) main_fps_pane

0x9937,	// (0x0004b71e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x9937,	// (0x0004b71e) cmail_ddmenu_btn02_pane_cp1

0x9953,	// (0x0004b73a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9953,	// (0x0004b73a) cmail_ddmenu_btn02_pane_cp2

0x9e5a,	// (0x0004bc41) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9e5a,	// (0x0004bc41) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbba,	// (0x000519a1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbba,	// (0x000519a1) cmail_ddmenu_btn02_pane_g

0x9e78,	// (0x0004bc5f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e78,	// (0x0004bc5f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbbf,	// (0x000519a6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbbf,	// (0x000519a6) cmail_ddmenu_btn02_pane_t

0xa5a0,	// (0x0004c387) fps_text_pane_ParamLimits

0xa5a0,	// (0x0004c387) fps_text_pane

0xa5b7,	// (0x0004c39e) main_fps_pane_g1_ParamLimits

0xa5b7,	// (0x0004c39e) main_fps_pane_g1

0xa5d1,	// (0x0004c3b8) wait_bar_pane_cp010_ParamLimits

0xa5d1,	// (0x0004c3b8) wait_bar_pane_cp010

0xa5e2,	// (0x0004c3c9) fps_text_pane_t1_ParamLimits

0xa5e2,	// (0x0004c3c9) fps_text_pane_t1

0x6ab2,	// (0x00048899) cam4_image_uncrop_pane_g1

0x6abb,	// (0x000488a2) cam4_image_uncrop_pane_g2

0x6ac4,	// (0x000488ab) cam4_image_uncrop_pane_g3

0x6acd,	// (0x000488b4) cam4_image_uncrop_pane_g4

0x0003,

0xf69d,	// (0x00051484) cam4_image_uncrop_pane_g

0xa494,	// (0x0004c27b) dia3_listrow_pane_ParamLimits

0xa6dd,	// (0x0004c4c4) main_phob2_pane

0x9ab4,	// (0x0004b89b) cell_tport_appsw_pane_cp02_ParamLimits

0x9ab4,	// (0x0004b89b) cell_tport_appsw_pane_cp02

0x9ac8,	// (0x0004b8af) cell_tport_appsw_pane_cp03_ParamLimits

0x9ac8,	// (0x0004b8af) cell_tport_appsw_pane_cp03

0xa6dd,	// (0x0004c4c4) phob2_contact_card_pane

0xa6dd,	// (0x0004c4c4) phob2_listscroll_pane

0xbce7,	// (0x0004dace) phob2_list_pane

0xbcef,	// (0x0004dad6) scroll_pane_cp034

0xa5fa,	// (0x0004c3e1) phob2_cc_data_pane_ParamLimits

0xa5fa,	// (0x0004c3e1) phob2_cc_data_pane

0xa619,	// (0x0004c400) phob2_cc_listscroll_pane_ParamLimits

0xa619,	// (0x0004c400) phob2_cc_listscroll_pane

0x6f4e,	// (0x00048d35) list_double_large_graphic_phob2_pane_ParamLimits

0x6f4e,	// (0x00048d35) list_double_large_graphic_phob2_pane

0xa637,	// (0x0004c41e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa637,	// (0x0004c41e) list_double_large_graphic_phob2_pane_g1

0x1786,	// (0x0004356d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1786,	// (0x0004356d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfcb3,	// (0x00051a9a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfcb3,	// (0x00051a9a) list_double_large_graphic_phob2_pane_g

0x1792,	// (0x00043579) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1792,	// (0x00043579) list_double_large_graphic_phob2_pane_t1

0x17a7,	// (0x0004358e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x17a7,	// (0x0004358e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfcb8,	// (0x00051a9f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfcb8,	// (0x00051a9f) list_double_large_graphic_phob2_pane_t

0xa6dd,	// (0x0004c4c4) list_highlight_pane_cp024

0xbcf7,	// (0x0004dade) phob2_cc_button_pane

0xa644,	// (0x0004c42b) phob2_cc_data_pane_g1_ParamLimits

0xa644,	// (0x0004c42b) phob2_cc_data_pane_g1

0xa659,	// (0x0004c440) phob2_cc_data_pane_g2_ParamLimits

0xa659,	// (0x0004c440) phob2_cc_data_pane_g2

0x0001,

0xfcbd,	// (0x00051aa4) phob2_cc_data_pane_g_ParamLimits

0xfcbd,	// (0x00051aa4) phob2_cc_data_pane_g

0xa66b,	// (0x0004c452) phob2_cc_data_pane_t1_ParamLimits

0xa66b,	// (0x0004c452) phob2_cc_data_pane_t1

0xa683,	// (0x0004c46a) phob2_cc_data_pane_t2_ParamLimits

0xa683,	// (0x0004c46a) phob2_cc_data_pane_t2

0xa69b,	// (0x0004c482) phob2_cc_data_pane_t3_ParamLimits

0xa69b,	// (0x0004c482) phob2_cc_data_pane_t3

0x0002,

0xfcc2,	// (0x00051aa9) phob2_cc_data_pane_t_ParamLimits

0xfcc2,	// (0x00051aa9) phob2_cc_data_pane_t

0xbcff,	// (0x0004dae6) phob2_cc_list_pane_ParamLimits

0xbcff,	// (0x0004dae6) phob2_cc_list_pane

0x7b79,	// (0x00049960) scroll_pane_cp035_ParamLimits

0x7b79,	// (0x00049960) scroll_pane_cp035

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp033

0xbd0b,	// (0x0004daf2) phob2_cc_button_pane_g1

0xbd17,	// (0x0004dafe) phob2_cc_button_pane_t1

0xbd2c,	// (0x0004db13) phob2_cc_button_pane_t2

0x0001,

0xfcc9,	// (0x00051ab0) phob2_cc_button_pane_t

0xa6b5,	// (0x0004c49c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa6b5,	// (0x0004c49c) list_double_large_graphic_phob2_cc_pane

0xa6c9,	// (0x0004c4b0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa6c9,	// (0x0004c4b0) list_double_large_graphic_phob2_cc_pane_g1

0x17b9,	// (0x000435a0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x17b9,	// (0x000435a0) list_double_large_graphic_phob2_cc_pane_g2

0x17c5,	// (0x000435ac) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x17c5,	// (0x000435ac) list_double_large_graphic_phob2_cc_pane_g3

0x17d1,	// (0x000435b8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x17d1,	// (0x000435b8) list_double_large_graphic_phob2_cc_pane_g4

0x17dd,	// (0x000435c4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x17dd,	// (0x000435c4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfcce,	// (0x00051ab5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfcce,	// (0x00051ab5) list_double_large_graphic_phob2_cc_pane_g

0x17e9,	// (0x000435d0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x17e9,	// (0x000435d0) list_double_large_graphic_phob2_cc_pane_t1

0x1812,	// (0x000435f9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1812,	// (0x000435f9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfcd9,	// (0x00051ac0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfcd9,	// (0x00051ac0) list_double_large_graphic_phob2_cc_pane_t

0xbd3e,	// (0x0004db25) list_highlight_pane_cp025_ParamLimits

0xbd3e,	// (0x0004db25) list_highlight_pane_cp025

0xd8c7,	// (0x0004f6ae) bg_button_pane_cp033_ParamLimits

0xbd0b,	// (0x0004daf2) phob2_cc_button_pane_g1_ParamLimits

0xbd17,	// (0x0004dafe) phob2_cc_button_pane_t1_ParamLimits

0xbd2c,	// (0x0004db13) phob2_cc_button_pane_t2_ParamLimits

0xfcc9,	// (0x00051ab0) phob2_cc_button_pane_t_ParamLimits

0x1877,	// (0x0004365e) popup_wgtman_window

0x7341,	// (0x00049128) scroll_pane_cp038

0xa248,	// (0x0004c02f) wgtman_btn_pane_cp_01_ParamLimits

0xa248,	// (0x0004c02f) wgtman_btn_pane_cp_01

0xbd4c,	// (0x0004db33) wgtman_content_pane

0xba95,	// (0x0004d87c) wgtman_heading_pane

0xa6dd,	// (0x0004c4c4) bg_heading_pane_cp02

0xbd55,	// (0x0004db3c) wgtman_heading_pane_g1

0xbd5d,	// (0x0004db44) wgtman_heading_pane_t1

0xbd6b,	// (0x0004db52) scroll_pane_cp036

0xbd73,	// (0x0004db5a) wgtman_list_pane

0xbd7b,	// (0x0004db62) wgtman_list_pane_t1_ParamLimits

0xbd7b,	// (0x0004db62) wgtman_list_pane_t1

0xae0b,	// (0x0004cbf2) cam4_grid_pane

0x1080,	// (0x00042e67) bg_button_pane_cp015_ParamLimits

0x7a0c,	// (0x000497f3) bg_button_pane_cp016_ParamLimits

0x7a1f,	// (0x00049806) bg_button_pane_cp017_ParamLimits

0x10c8,	// (0x00042eaf) popup_vitu2_query_window_g3_ParamLimits

0x10c8,	// (0x00042eaf) popup_vitu2_query_window_g3

0x1143,	// (0x00042f2a) popup_vitu2_query_window_t6_ParamLimits

0x1143,	// (0x00042f2a) popup_vitu2_query_window_t6

0x116e,	// (0x00042f55) popup_vitu2_query_window_t7_ParamLimits

0x116e,	// (0x00042f55) popup_vitu2_query_window_t7

0x6ab2,	// (0x00048899) cam4_grid_pane_g1

0x6abb,	// (0x000488a2) cam4_grid_pane_g2

0xbd9d,	// (0x0004db84) cam4_grid_pane_g3

0xbda6,	// (0x0004db8d) cam4_grid_pane_g4

0x0003,

0xfcde,	// (0x00051ac5) cam4_grid_pane_g

0x2605,	// (0x000443ec) aid_placing_vt_slider_lsc_ParamLimits

0x2902,	// (0x000446e9) vidtel_button_pane_ParamLimits

0x2902,	// (0x000446e9) vidtel_button_pane

0xa6dd,	// (0x0004c4c4) bg_button_pane_cp034

0xa6d5,	// (0x0004c4bc) vidtel_button_pane_g1

0xbdb1,	// (0x0004db98) vidtel_button_pane_t1

0x7724,	// (0x0004950b) aid_size_vtel_slider_touch

0x7b79,	// (0x00049960) scroll_pane_cp039

0x8e5f,	// (0x0004ac46) ncim_query_button_pane_cp01_ParamLimits

0x8e7e,	// (0x0004ac65) ncimui_query_pane_g1_ParamLimits

0xd8c7,	// (0x0004f6ae) input_focus_pane_cp012_ParamLimits

0x8ea3,	// (0x0004ac8a) ncim_query_entry_pane_t1_ParamLimits

0x7b79,	// (0x00049960) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
