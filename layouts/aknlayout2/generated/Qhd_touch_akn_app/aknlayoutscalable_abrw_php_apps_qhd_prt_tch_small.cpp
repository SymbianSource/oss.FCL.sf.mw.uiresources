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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00048bf1 };

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
0x463b,	// (0x0004d22c) Screen

0x4647,	// (0x0004d238) application_window

0x46ad,	// (0x0004d29e) area_bottom_pane_ParamLimits

0x46ad,	// (0x0004d29e) area_bottom_pane

0x4706,	// (0x0004d2f7) area_top_pane_ParamLimits

0x4706,	// (0x0004d2f7) area_top_pane

0x476a,	// (0x0004d35b) call_video_uplink_pane_ParamLimits

0x476a,	// (0x0004d35b) call_video_uplink_pane

0x47a8,	// (0x0004d399) main_pane_ParamLimits

0x47a8,	// (0x0004d399) main_pane

0xecb2,	// (0x000578a3) context_pane

0x834a,	// (0x00050f3b) navi_pane

0x836a,	// (0x00050f5b) popup_cale_events_window_ParamLimits

0x836a,	// (0x00050f5b) popup_cale_events_window

0xecc5,	// (0x000578b6) popup_mup_playback_window

0x8382,	// (0x00050f73) signal_pane

0x53c3,	// (0x0004dfb4) main_browser_pane

0xd86b,	// (0x0005645c) main_burst_pane

0x8214,	// (0x00050e05) main_calc_pane

0xd86b,	// (0x0005645c) main_cale_day_pane

0x53c3,	// (0x0004dfb4) main_cale_month_pane

0xd86b,	// (0x0005645c) main_cale_week_pane

0xd86b,	// (0x0005645c) main_call_pane

0x4ddb,	// (0x0004d9cc) main_call_poc_pane

0xd86b,	// (0x0005645c) main_camera_pane

0xd86b,	// (0x0005645c) main_chi_dic_pane

0xd6f0,	// (0x000562e1) main_clock_pane

0x4ddb,	// (0x0004d9cc) main_fmradio_pane

0xd86b,	// (0x0005645c) main_graph_messa_pane

0x4ddb,	// (0x0004d9cc) main_help_pane

0x53c3,	// (0x0004dfb4) main_im_pane

0x5036,	// (0x0004dc27) main_image_pane_ParamLimits

0x5036,	// (0x0004dc27) main_image_pane

0x4ddb,	// (0x0004d9cc) main_location2_pane

0xd86b,	// (0x0005645c) main_location_pane

0x4ddb,	// (0x0004d9cc) main_messa_pane

0x4ddb,	// (0x0004d9cc) main_mp2_pane

0xd86b,	// (0x0005645c) main_mp_pane

0x4ddb,	// (0x0004d9cc) main_msg_pane

0x4ddb,	// (0x0004d9cc) main_mup_eq_pane

0x4ddb,	// (0x0004d9cc) main_mup_pane

0xd86b,	// (0x0005645c) main_notes_pane

0x4ddb,	// (0x0004d9cc) main_pec_pane

0x4ddb,	// (0x0004d9cc) main_phob_pane

0x4ddb,	// (0x0004d9cc) main_pinb_pane

0x4ddb,	// (0x0004d9cc) main_postcard_pane

0x4ddb,	// (0x0004d9cc) main_qdial_pane

0xd86b,	// (0x0005645c) main_skin_pane

0x4ddb,	// (0x0004d9cc) main_smil2_pane

0xd86b,	// (0x0005645c) main_smil_pane

0xd86b,	// (0x0005645c) main_video_pane

0xd86b,	// (0x0005645c) main_video_tele_pane

0x5036,	// (0x0004dc27) main_viewer_pane_ParamLimits

0x5036,	// (0x0004dc27) main_viewer_pane

0xd86b,	// (0x0005645c) main_vorec_pane

0x824a,	// (0x00050e3b) popup_blid_sat_info_window_ParamLimits

0x824a,	// (0x00050e3b) popup_blid_sat_info_window

0x8260,	// (0x00050e51) popup_dyc_status_message_window_ParamLimits

0x8260,	// (0x00050e51) popup_dyc_status_message_window

0x8270,	// (0x00050e61) popup_grid_large_graphic_window_ParamLimits

0x8270,	// (0x00050e61) popup_grid_large_graphic_window

0x82e6,	// (0x00050ed7) popup_loc_request_window_ParamLimits

0x82e6,	// (0x00050ed7) popup_loc_request_window

0x8322,	// (0x00050f13) popup_wml_address_window_ParamLimits

0x8322,	// (0x00050f13) popup_wml_address_window

0x80ec,	// (0x00050cdd) call_muted_g1

0x7dae,	// (0x0005099f) popup_call_audio_conf_window_ParamLimits

0x7dae,	// (0x0005099f) popup_call_audio_conf_window

0x80fc,	// (0x00050ced) popup_call_audio_first_window_ParamLimits

0x80fc,	// (0x00050ced) popup_call_audio_first_window

0x813c,	// (0x00050d2d) popup_call_audio_in_window_ParamLimits

0x813c,	// (0x00050d2d) popup_call_audio_in_window

0x8160,	// (0x00050d51) popup_call_audio_out_window_ParamLimits

0x8160,	// (0x00050d51) popup_call_audio_out_window

0x8182,	// (0x00050d73) popup_call_audio_second_window_ParamLimits

0x8182,	// (0x00050d73) popup_call_audio_second_window

0x81b2,	// (0x00050da3) popup_call_audio_wait_window_ParamLimits

0x81b2,	// (0x00050da3) popup_call_audio_wait_window

0x81d3,	// (0x00050dc4) popup_number_entry_window_ParamLimits

0x81d3,	// (0x00050dc4) popup_number_entry_window

0x496b,	// (0x0004d55c) bg_popup_call_pane_cp05_ParamLimits

0x496b,	// (0x0004d55c) bg_popup_call_pane_cp05

0x498b,	// (0x0004d57c) popup_number_entry_window_t1

0x499e,	// (0x0004d58f) popup_number_entry_window_t2

0x49b0,	// (0x0004d5a1) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00057cec) popup_number_entry_window_t

0x49fb,	// (0x0004d5ec) text_title_cp2

0x4a0e,	// (0x0004d5ff) bg_popup_call_pane_cp_ParamLimits

0x4a0e,	// (0x0004d5ff) bg_popup_call_pane_cp

0x4a1c,	// (0x0004d60d) call_thumbnail_pane

0x4a24,	// (0x0004d615) popup_call_audio_in_window_g1_ParamLimits

0x4a24,	// (0x0004d615) popup_call_audio_in_window_g1

0x4a30,	// (0x0004d621) popup_call_audio_in_window_g2_ParamLimits

0x4a30,	// (0x0004d621) popup_call_audio_in_window_g2

0x4a3c,	// (0x0004d62d) popup_call_audio_in_window_g3_ParamLimits

0x4a3c,	// (0x0004d62d) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00057cf5) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00057cf5) popup_call_audio_in_window_g

0x4a48,	// (0x0004d639) popup_call_audio_in_window_t1_ParamLimits

0x4a48,	// (0x0004d639) popup_call_audio_in_window_t1

0x4a64,	// (0x0004d655) popup_call_audio_in_window_t2_ParamLimits

0x4a64,	// (0x0004d655) popup_call_audio_in_window_t2

0x4a80,	// (0x0004d671) popup_call_audio_in_window_t3_ParamLimits

0x4a80,	// (0x0004d671) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00057cfc) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00057cfc) popup_call_audio_in_window_t

0x4a0e,	// (0x0004d5ff) bg_popup_call_pane_cp01_ParamLimits

0x4a0e,	// (0x0004d5ff) bg_popup_call_pane_cp01

0x4a1c,	// (0x0004d60d) call_thumbnail_pane_cp02

0x4a93,	// (0x0004d684) call_type_pane_cp022

0x4a9b,	// (0x0004d68c) popup_call_audio_out_window_g1_ParamLimits

0x4a9b,	// (0x0004d68c) popup_call_audio_out_window_g1

0x4aad,	// (0x0004d69e) popup_call_audio_out_window_g2_ParamLimits

0x4aad,	// (0x0004d69e) popup_call_audio_out_window_g2

0x4ab9,	// (0x0004d6aa) popup_call_audio_out_window_g3_ParamLimits

0x4ab9,	// (0x0004d6aa) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00057d03) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00057d03) popup_call_audio_out_window_g

0x4acb,	// (0x0004d6bc) popup_call_audio_out_window_t1_ParamLimits

0x4acb,	// (0x0004d6bc) popup_call_audio_out_window_t1

0x4ae3,	// (0x0004d6d4) popup_call_audio_out_window_t2_ParamLimits

0x4ae3,	// (0x0004d6d4) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00057d0a) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00057d0a) popup_call_audio_out_window_t

0x4af8,	// (0x0004d6e9) bg_popup_call_pane_ParamLimits

0x4af8,	// (0x0004d6e9) bg_popup_call_pane

0x4b7c,	// (0x0004d76d) call_thumbnail_pane_cp_ParamLimits

0x4b7c,	// (0x0004d76d) call_thumbnail_pane_cp

0x4ba0,	// (0x0004d791) call_type_pane_cp01_ParamLimits

0x4ba0,	// (0x0004d791) call_type_pane_cp01

0x4be4,	// (0x0004d7d5) popup_call_audio_first_window_g1_ParamLimits

0x4be4,	// (0x0004d7d5) popup_call_audio_first_window_g1

0x4c30,	// (0x0004d821) popup_call_audio_first_window_g2_ParamLimits

0x4c30,	// (0x0004d821) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00057d0f) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00057d0f) popup_call_audio_first_window_g

0x4c74,	// (0x0004d865) popup_call_audio_first_window_t1_ParamLimits

0x4c74,	// (0x0004d865) popup_call_audio_first_window_t1

0x4d20,	// (0x0004d911) popup_call_audio_first_window_t4_ParamLimits

0x4d20,	// (0x0004d911) popup_call_audio_first_window_t4

0x4dac,	// (0x0004d99d) popup_call_audio_first_window_t5_ParamLimits

0x4dac,	// (0x0004d99d) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00057d14) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00057d14) popup_call_audio_first_window_t

0x4ddb,	// (0x0004d9cc) bg_popup_call_pane_cp02

0x4de5,	// (0x0004d9d6) call_type_pane_cp023

0x4ded,	// (0x0004d9de) popup_call_audio_wait_window_g1

0x4df5,	// (0x0004d9e6) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00057d1b) popup_call_audio_wait_window_g

0x4dfd,	// (0x0004d9ee) popup_call_audio_wait_window_t3

0x4e0b,	// (0x0004d9fc) bg_popup_call_pane_cp03_ParamLimits

0x4e0b,	// (0x0004d9fc) bg_popup_call_pane_cp03

0x4e6b,	// (0x0004da5c) call_thumbnail_pane_cp011_ParamLimits

0x4e6b,	// (0x0004da5c) call_thumbnail_pane_cp011

0x4e77,	// (0x0004da68) call_type_pane_cp034_ParamLimits

0x4e77,	// (0x0004da68) call_type_pane_cp034

0x4eb3,	// (0x0004daa4) popup_call_audio_second_window_g1_ParamLimits

0x4eb3,	// (0x0004daa4) popup_call_audio_second_window_g1

0x4eef,	// (0x0004dae0) popup_call_audio_second_window_g2_ParamLimits

0x4eef,	// (0x0004dae0) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00057d20) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00057d20) popup_call_audio_second_window_g

0x4f2b,	// (0x0004db1c) popup_call_audio_second_window_t1_ParamLimits

0x4f2b,	// (0x0004db1c) popup_call_audio_second_window_t1

0x4fac,	// (0x0004db9d) popup_call_audio_second_window_t2_ParamLimits

0x4fac,	// (0x0004db9d) popup_call_audio_second_window_t2

0x4fe2,	// (0x0004dbd3) popup_call_audio_second_window_t3_ParamLimits

0x4fe2,	// (0x0004dbd3) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00057d25) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00057d25) popup_call_audio_second_window_t

0x4ddb,	// (0x0004d9cc) bg_popup_call_pane_cp04

0x5018,	// (0x0004dc09) list_conf_pane

0x5020,	// (0x0004dc11) popup_call_audio_conf_window_t1

0x502e,	// (0x0004dc1f) call_thumbnail_pane_g1

0x5036,	// (0x0004dc27) bg_pinb_pane_ParamLimits

0x5036,	// (0x0004dc27) bg_pinb_pane

0x5044,	// (0x0004dc35) find_pinb_pane

0x504d,	// (0x0004dc3e) listscroll_pinb_pane_ParamLimits

0x504d,	// (0x0004dc3e) listscroll_pinb_pane

0x505c,	// (0x0004dc4d) pinb_bg_pane_g1

0x5066,	// (0x0004dc57) pinb_bg_pane_g2

0x5072,	// (0x0004dc63) pinb_bg_pane_g3

0x507e,	// (0x0004dc6f) pinb_bg_pane_g4

0x508a,	// (0x0004dc7b) pinb_bg_pane_g5

0x5096,	// (0x0004dc87) pinb_bg_pane_g6

0x50a1,	// (0x0004dc92) pinb_bg_pane_g7

0x50ac,	// (0x0004dc9d) pinb_bg_pane_g8

0x50b7,	// (0x0004dca8) pinb_bg_pane_g9

0x50c1,	// (0x0004dcb2) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00057d2c) pinb_bg_pane_g

0x50de,	// (0x0004dccf) grid_pinb_pane

0x50e9,	// (0x0004dcda) list_pinb_pane

0x50f4,	// (0x0004dce5) scroll_pane_cp01_ParamLimits

0x50f4,	// (0x0004dce5) scroll_pane_cp01

0x5106,	// (0x0004dcf7) find_pinb_pane_g1_ParamLimits

0x5106,	// (0x0004dcf7) find_pinb_pane_g1

0x511e,	// (0x0004dd0f) find_pinb_pane_t1

0x5130,	// (0x0004dd21) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00057d46) find_pinb_pane_t

0x5145,	// (0x0004dd36) input_focus_pane_cp01_ParamLimits

0x5145,	// (0x0004dd36) input_focus_pane_cp01

0x5151,	// (0x0004dd42) cell_pinb_pane_ParamLimits

0x5151,	// (0x0004dd42) cell_pinb_pane

0x5176,	// (0x0004dd67) cell_pinb_pane_g1_ParamLimits

0x5176,	// (0x0004dd67) cell_pinb_pane_g1

0x518b,	// (0x0004dd7c) cell_pinb_pane_g2_ParamLimits

0x518b,	// (0x0004dd7c) cell_pinb_pane_g2

0x5197,	// (0x0004dd88) cell_pinb_pane_g3_ParamLimits

0x5197,	// (0x0004dd88) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00057d4b) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00057d4b) cell_pinb_pane_g

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp01

0x51a3,	// (0x0004dd94) list_pinb_item_pane_ParamLimits

0x51a3,	// (0x0004dd94) list_pinb_item_pane

0x4ddb,	// (0x0004d9cc) list_highlight_pane_cp02

0x51c3,	// (0x0004ddb4) list_pinb_item_pane_g1_ParamLimits

0x51c3,	// (0x0004ddb4) list_pinb_item_pane_g1

0x51d0,	// (0x0004ddc1) list_pinb_item_pane_g2_ParamLimits

0x51d0,	// (0x0004ddc1) list_pinb_item_pane_g2

0x51dc,	// (0x0004ddcd) list_pinb_item_pane_g3_ParamLimits

0x51dc,	// (0x0004ddcd) list_pinb_item_pane_g3

0x51ed,	// (0x0004ddde) list_pinb_item_pane_g4_ParamLimits

0x51ed,	// (0x0004ddde) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00057d52) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00057d52) list_pinb_item_pane_g

0x51f9,	// (0x0004ddea) list_pinb_item_pane_t1_ParamLimits

0x51f9,	// (0x0004ddea) list_pinb_item_pane_t1

0x522a,	// (0x0004de1b) calc_display_pane

0x5248,	// (0x0004de39) calc_paper_pane

0x5264,	// (0x0004de55) grid_calc_pane

0x4ddb,	// (0x0004d9cc) bg_list_pane_cp01

0x528e,	// (0x0004de7f) clock_g1

0x5296,	// (0x0004de87) clock_g2

0x0001,

0xf16a,	// (0x00057d5b) clock_g

0x52a0,	// (0x0004de91) clock_t1_ParamLimits

0x52a0,	// (0x0004de91) clock_t1

0x52b5,	// (0x0004dea6) clock_t2_ParamLimits

0x52b5,	// (0x0004dea6) clock_t2

0x52c7,	// (0x0004deb8) clock_t3_ParamLimits

0x52c7,	// (0x0004deb8) clock_t3

0x52d9,	// (0x0004deca) clock_t4_ParamLimits

0x52d9,	// (0x0004deca) clock_t4

0x52eb,	// (0x0004dedc) clock_t5_ParamLimits

0x52eb,	// (0x0004dedc) clock_t5

0x5300,	// (0x0004def1) clock_t6_ParamLimits

0x5300,	// (0x0004def1) clock_t6

0x5312,	// (0x0004df03) clock_t7_ParamLimits

0x5312,	// (0x0004df03) clock_t7

0x5324,	// (0x0004df15) clock_t8_ParamLimits

0x5324,	// (0x0004df15) clock_t8

0x533a,	// (0x0004df2b) clock_t9_ParamLimits

0x533a,	// (0x0004df2b) clock_t9

0x0008,

0xf16f,	// (0x00057d60) clock_t_ParamLimits

0xf16f,	// (0x00057d60) clock_t

0x5350,	// (0x0004df41) popup_clock_analogue_window_cp02

0x5350,	// (0x0004df41) popup_clock_digital_window_cp01

0x5358,	// (0x0004df49) listscroll_help_pane

0x4ddb,	// (0x0004d9cc) phob_pre_status_pane

0x5362,	// (0x0004df53) grid_qdial_pane

0x4ddb,	// (0x0004d9cc) listscroll_mce_pane

0x536c,	// (0x0004df5d) bg_notes_pane

0x5376,	// (0x0004df67) list_notes_pane

0x5380,	// (0x0004df71) scroll_pane_cp06

0x538b,	// (0x0004df7c) bg_calc_paper_pane

0x53a9,	// (0x0004df9a) list_calc_pane

0x53c3,	// (0x0004dfb4) bg_calc_display_pane

0x53cf,	// (0x0004dfc0) calc_display_pane_t1

0x53e4,	// (0x0004dfd5) calc_display_pane_t2

0x53f9,	// (0x0004dfea) calc_display_pane_t3

0x0002,

0xf182,	// (0x00057d73) calc_display_pane_t

0x540b,	// (0x0004dffc) cell_calc_pane_ParamLimits

0x540b,	// (0x0004dffc) cell_calc_pane

0x5438,	// (0x0004e029) bg_calc_paper_pane_g1

0x5444,	// (0x0004e035) bg_calc_paper_pane_g2

0x5450,	// (0x0004e041) bg_calc_paper_pane_g3

0x545c,	// (0x0004e04d) bg_calc_paper_pane_g4

0x5468,	// (0x0004e059) bg_calc_paper_pane_g5

0x5474,	// (0x0004e065) bg_calc_paper_pane_g6

0x5485,	// (0x0004e076) bg_calc_paper_pane_g7

0x5496,	// (0x0004e087) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00057d7a) bg_calc_paper_pane_g

0x54a7,	// (0x0004e098) calc_bg_paper_pane_g9

0x54b8,	// (0x0004e0a9) list_calc_item_pane_ParamLimits

0x54b8,	// (0x0004e0a9) list_calc_item_pane

0x54e7,	// (0x0004e0d8) list_calc_item_pane_g1

0x54f4,	// (0x0004e0e5) list_calc_item_pane_t1_ParamLimits

0x54f4,	// (0x0004e0e5) list_calc_item_pane_t1

0x5506,	// (0x0004e0f7) list_calc_item_pane_t2_ParamLimits

0x5506,	// (0x0004e0f7) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00057d8b) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00057d8b) list_calc_item_pane_t

0x551e,	// (0x0004e10f) cell_calc_pane_g1

0x5540,	// (0x0004e131) grid_highlight_pane_cp02

0x5562,	// (0x0004e153) bg_calc_display_pane_g1

0x556b,	// (0x0004e15c) bg_calc_display_pane_g2

0xd270,	// (0x00055e61) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00057d95) bg_calc_display_pane_g

0x5575,	// (0x0004e166) cell_qdial_pane_ParamLimits

0x5575,	// (0x0004e166) cell_qdial_pane

0x5589,	// (0x0004e17a) cell_qdial_pane_g1_ParamLimits

0x5589,	// (0x0004e17a) cell_qdial_pane_g1

0x5596,	// (0x0004e187) cell_qdial_pane_g2_ParamLimits

0x5596,	// (0x0004e187) cell_qdial_pane_g2

0x55a7,	// (0x0004e198) cell_qdial_pane_g3_ParamLimits

0x55a7,	// (0x0004e198) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00057d9c) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00057d9c) cell_qdial_pane_g

0x55c0,	// (0x0004e1b1) cell_qdial_pane_t1_ParamLimits

0x55c0,	// (0x0004e1b1) cell_qdial_pane_t1

0x55d8,	// (0x0004e1c9) cell_qdial_pane_t2_ParamLimits

0x55d8,	// (0x0004e1c9) cell_qdial_pane_t2

0x55eb,	// (0x0004e1dc) cell_qdial_pane_t3_ParamLimits

0x55eb,	// (0x0004e1dc) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00057da5) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00057da5) cell_qdial_pane_t

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp04

0x55fe,	// (0x0004e1ef) thumbnail_qdial_pane_ParamLimits

0x55fe,	// (0x0004e1ef) thumbnail_qdial_pane

0x565a,	// (0x0004e24b) list_help_pane

0x5663,	// (0x0004e254) scroll_pane_cp02

0x566c,	// (0x0004e25d) help_list_pane_t1_ParamLimits

0x566c,	// (0x0004e25d) help_list_pane_t1

0x569f,	// (0x0004e290) bg_notes_pane_g2

0x56a7,	// (0x0004e298) bg_notes_pane_g3

0x56af,	// (0x0004e2a0) notes_bg_pane_g1

0x56b7,	// (0x0004e2a8) notes_bg_pane_g4

0x56bf,	// (0x0004e2b0) notes_bg_pane_g5

0x56c7,	// (0x0004e2b8) notes_bg_pane_g6

0x56cf,	// (0x0004e2c0) notes_bg_pane_g7

0x56d7,	// (0x0004e2c8) notes_bg_pane_g8

0x56df,	// (0x0004e2d0) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00057dc3) notes_bg_pane_g

0x56e7,	// (0x0004e2d8) list_notes_text_pane_ParamLimits

0x56e7,	// (0x0004e2d8) list_notes_text_pane

0x570c,	// (0x0004e2fd) list_notes_text_pane_g1

0x5715,	// (0x0004e306) list_notes_text_pane_t1

0x53c3,	// (0x0004dfb4) listscroll_cale_week_pane

0x5751,	// (0x0004e342) bg_cale_heading_pane

0x5765,	// (0x0004e356) bg_cale_pane_cp01

0x577e,	// (0x0004e36f) cale_week_corner_pane

0x5794,	// (0x0004e385) cale_week_day_heading_pane

0x57a8,	// (0x0004e399) cale_week_scroll_pane_g1

0x57b9,	// (0x0004e3aa) cale_week_scroll_pane_g2

0x57ca,	// (0x0004e3bb) cale_week_scroll_pane_g3

0x57db,	// (0x0004e3cc) cale_week_scroll_pane_g4

0x57ec,	// (0x0004e3dd) cale_week_scroll_pane_g5

0x57fd,	// (0x0004e3ee) cale_week_scroll_pane_g6

0x580e,	// (0x0004e3ff) cale_week_scroll_pane_g7

0x5821,	// (0x0004e412) cale_week_scroll_pane_g8

0x5834,	// (0x0004e425) cale_week_scroll_pane_g9

0x5845,	// (0x0004e436) cale_week_scroll_pane_g10

0x5856,	// (0x0004e447) cale_week_scroll_pane_g11

0x5867,	// (0x0004e458) cale_week_scroll_pane_g12

0x5878,	// (0x0004e469) cale_week_scroll_pane_g13

0x5889,	// (0x0004e47a) cale_week_scroll_pane_g14

0x589a,	// (0x0004e48b) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00057dd2) cale_week_scroll_pane_g

0x58ab,	// (0x0004e49c) cale_week_time_pane

0x58be,	// (0x0004e4af) grid_cale_week_pane

0x58e5,	// (0x0004e4d6) scroll_pane_cp08

0x58ff,	// (0x0004e4f0) cell_cale_week_pane_ParamLimits

0x58ff,	// (0x0004e4f0) cell_cale_week_pane

0x593b,	// (0x0004e52c) cale_week_day_heading_pane_t1

0x5968,	// (0x0004e559) cale_week_day_heading_pane_t2

0x5995,	// (0x0004e586) cale_week_day_heading_pane_t3

0x59c2,	// (0x0004e5b3) cale_week_day_heading_pane_t4

0x59ef,	// (0x0004e5e0) cale_week_day_heading_pane_t5

0x5a1c,	// (0x0004e60d) cale_week_day_heading_pane_t6

0x5a49,	// (0x0004e63a) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00057df1) cale_week_day_heading_pane_t

0x5a76,	// (0x0004e667) bg_cale_side_pane

0x5a84,	// (0x0004e675) cale_week_time_pane_t1

0x5a9c,	// (0x0004e68d) cale_week_time_pane_t2

0x5ab4,	// (0x0004e6a5) cale_week_time_pane_t3

0x5acc,	// (0x0004e6bd) cale_week_time_pane_t4

0x5ae4,	// (0x0004e6d5) cale_week_time_pane_t5

0x5afc,	// (0x0004e6ed) cale_week_time_pane_t6

0x5b14,	// (0x0004e705) cale_week_time_pane_t7

0x5b2c,	// (0x0004e71d) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00057e00) cale_week_time_pane_t

0x5b44,	// (0x0004e735) cell_cale_week_pane_g2

0x5b5d,	// (0x0004e74e) cell_cale_week_pane_g3_ParamLimits

0x5b5d,	// (0x0004e74e) cell_cale_week_pane_g3

0x5b75,	// (0x0004e766) grid_highlight_pane_cp07

0x5b7d,	// (0x0004e76e) listscroll_gms_pane

0x5b87,	// (0x0004e778) grid_gms_pane

0x5b90,	// (0x0004e781) listscroll_gms_pane_g1

0x5b98,	// (0x0004e789) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00057e11) listscroll_gms_pane_g

0x5ba0,	// (0x0004e791) scroll_pane_cp010

0x5bab,	// (0x0004e79c) cell_gms_pane_ParamLimits

0x5bab,	// (0x0004e79c) cell_gms_pane

0x5bbe,	// (0x0004e7af) cell_gms_pane_g1

0x5bc6,	// (0x0004e7b7) cell_gms_pane_g2

0x5bce,	// (0x0004e7bf) cell_gms_pane_g3

0x5bd7,	// (0x0004e7c8) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00057e16) cell_gms_pane_g

0x5be0,	// (0x0004e7d1) grid_highlight_pane_cp09

0x8094,	// (0x00050c85) phob_pre_status_pane_g1

0x809c,	// (0x00050c8d) phob_pre_status_pane_g2

0x80a4,	// (0x00050c95) phob_pre_status_pane_g3

0x80ac,	// (0x00050c9d) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00058205) phob_pre_status_pane_g

0x80bc,	// (0x00050cad) phob_pre_status_pane_t1

0x80cc,	// (0x00050cbd) phob_pre_status_pane_t2

0x80dc,	// (0x00050ccd) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00058210) phob_pre_status_pane_t

0x4ddb,	// (0x0004d9cc) bg_list_pane_cp05

0x5bf0,	// (0x0004e7e1) grid_vorec_pane

0x5bfa,	// (0x0004e7eb) vorec_t1

0x5c08,	// (0x0004e7f9) vorec_t2

0x5c16,	// (0x0004e807) vorec_t3

0x5c24,	// (0x0004e815) vorec_t4

0x5c32,	// (0x0004e823) vorec_t5

0x5c40,	// (0x0004e831) vorec_t6

0x0006,

0xf22e,	// (0x00057e1f) vorec_t

0x5c5c,	// (0x0004e84d) wait_bar_pane_cp01

0x5c64,	// (0x0004e855) cell_vorec_pane_ParamLimits

0x5c64,	// (0x0004e855) cell_vorec_pane

0x5c77,	// (0x0004e868) cell_vorec_pane_g1

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp05

0x5c91,	// (0x0004e882) cams_zoom_pane

0x5c9d,	// (0x0004e88e) image_vga_pane

0x5cac,	// (0x0004e89d) main_camera_pane_g1

0x5cba,	// (0x0004e8ab) main_camera_pane_g2

0x5cc6,	// (0x0004e8b7) main_camera_pane_g3

0x5cd2,	// (0x0004e8c3) main_camera_pane_g4

0x5cde,	// (0x0004e8cf) main_camera_pane_g5

0x5cea,	// (0x0004e8db) main_camera_pane_g6

0x5cf6,	// (0x0004e8e7) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00057e2e) main_camera_pane_g

0x5d0e,	// (0x0004e8ff) main_camera_pane_t1

0x5d20,	// (0x0004e911) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00057e3f) main_camera_pane_t

0x5d41,	// (0x0004e932) cams_zoom_pane_cp_ParamLimits

0x5d41,	// (0x0004e932) cams_zoom_pane_cp

0x5d65,	// (0x0004e956) image_cif_pane_ParamLimits

0x5d65,	// (0x0004e956) image_cif_pane

0x5d83,	// (0x0004e974) image_subqcif_pane

0x5d8b,	// (0x0004e97c) main_video_pane_g1_ParamLimits

0x5d8b,	// (0x0004e97c) main_video_pane_g1

0x5dab,	// (0x0004e99c) main_video_pane_g2_ParamLimits

0x5dab,	// (0x0004e99c) main_video_pane_g2

0x5ddb,	// (0x0004e9cc) main_video_pane_g3_ParamLimits

0x5ddb,	// (0x0004e9cc) main_video_pane_g3

0x5e04,	// (0x0004e9f5) main_video_pane_g4_ParamLimits

0x5e04,	// (0x0004e9f5) main_video_pane_g4

0x5e2d,	// (0x0004ea1e) main_video_pane_g5_ParamLimits

0x5e2d,	// (0x0004ea1e) main_video_pane_g5

0x5e45,	// (0x0004ea36) main_video_pane_g6_ParamLimits

0x5e45,	// (0x0004ea36) main_video_pane_g6

0x0006,

0xf253,	// (0x00057e44) main_video_pane_g_ParamLimits

0xf253,	// (0x00057e44) main_video_pane_g

0x5e6b,	// (0x0004ea5c) main_video_pane_t1_ParamLimits

0x5e6b,	// (0x0004ea5c) main_video_pane_t1

0x5ea9,	// (0x0004ea9a) cams_zoom_pane_g1

0x5eb2,	// (0x0004eaa3) cams_zoom_pane_g2

0x5ebb,	// (0x0004eaac) cams_zoom_pane_g3

0x5ec4,	// (0x0004eab5) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00057e53) cams_zoom_pane_g

0x5ed9,	// (0x0004eaca) grid_cams_pane

0x5ee7,	// (0x0004ead8) linegrid_cams_pane

0x5ef5,	// (0x0004eae6) cell_cams_pane_ParamLimits

0x5ef5,	// (0x0004eae6) cell_cams_pane

0x5f08,	// (0x0004eaf9) cams_burst_image_pane

0x5f10,	// (0x0004eb01) cell_cams_pane_g1

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp03

0x551e,	// (0x0004e10f) mp_bg_pane_g1

0x4ddb,	// (0x0004d9cc) bg_list_pane_cp03

0xeb7c,	// (0x0005776d) bg_mp_pane

0xeb84,	// (0x00057775) grid_mp_pane

0xeb8c,	// (0x0005777d) media_player_g1

0xeb94,	// (0x00057785) media_player_t1

0xeba2,	// (0x00057793) media_player_t2

0xebb0,	// (0x000577a1) media_player_t3

0xebbe,	// (0x000577af) media_player_t4

0xebcc,	// (0x000577bd) media_player_t5

0xebda,	// (0x000577cb) media_player_t6

0xebe8,	// (0x000577d9) media_player_t7

0x0006,

0xf5fe,	// (0x000581ef) media_player_t

0xebf6,	// (0x000577e7) wait_bar_pane_cp02

0xf5e3,	// (0x000581d4) main_usb_pane_t

0x808b,	// (0x00050c7c) cell_mp_pane

0x551e,	// (0x0004e10f) cell_mp_pane_g1

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp06

0x5f6f,	// (0x0004eb60) grid_skin_colour_pane

0x5f77,	// (0x0004eb68) list_highlight_pane_cp03

0x5f7f,	// (0x0004eb70) skin_g1

0x5f89,	// (0x0004eb7a) skin_t1

0x5f98,	// (0x0004eb89) skin_t2

0x0001,

0xf297,	// (0x00057e88) skin_t

0x5fa6,	// (0x0004eb97) cell_skin_colour_pane_ParamLimits

0x5fa6,	// (0x0004eb97) cell_skin_colour_pane

0x5fc2,	// (0x0004ebb3) cell_skin_colour_pane_g1

0x600d,	// (0x0004ebfe) call_video_g1_ParamLimits

0x600d,	// (0x0004ebfe) call_video_g1

0x601d,	// (0x0004ec0e) call_video_g2_ParamLimits

0x601d,	// (0x0004ec0e) call_video_g2

0x0001,

0xf29c,	// (0x00057e8d) call_video_g_ParamLimits

0xf29c,	// (0x00057e8d) call_video_g

0x605b,	// (0x0004ec4c) call_video_uplink_pane_cp1_ParamLimits

0x605b,	// (0x0004ec4c) call_video_uplink_pane_cp1

0x60a7,	// (0x0004ec98) call_video_uplink_pane_cp2

0x610f,	// (0x0004ed00) video_down_crop_pane_ParamLimits

0x610f,	// (0x0004ed00) video_down_crop_pane

0x61f3,	// (0x0004ede4) video_down_pane_ParamLimits

0x61f3,	// (0x0004ede4) video_down_pane

0x62d5,	// (0x0004eec6) video_down_subqcif_pane_ParamLimits

0x62d5,	// (0x0004eec6) video_down_subqcif_pane

0x62ed,	// (0x0004eede) video_down_subqcif_pane_cp_ParamLimits

0x62ed,	// (0x0004eede) video_down_subqcif_pane_cp

0x6311,	// (0x0004ef02) im_reading_pane_ParamLimits

0x6311,	// (0x0004ef02) im_reading_pane

0x6323,	// (0x0004ef14) im_writing_pane_ParamLimits

0x6323,	// (0x0004ef14) im_writing_pane

0x6349,	// (0x0004ef3a) im_reading_pane_t1

0x639d,	// (0x0004ef8e) list_im_pane

0x63ae,	// (0x0004ef9f) scroll_pane_cp07

0x63c7,	// (0x0004efb8) im_writing_pane_t1_ParamLimits

0x63c7,	// (0x0004efb8) im_writing_pane_t1

0x63dc,	// (0x0004efcd) im_writing_pane_t2_ParamLimits

0x63dc,	// (0x0004efcd) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00057e97) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00057e97) im_writing_pane_t

0x4ddb,	// (0x0004d9cc) input_focus_pane_cp04

0x4ddb,	// (0x0004d9cc) input_focus_pane_cp05

0x63f9,	// (0x0004efea) list_im_single_pane_ParamLimits

0x63f9,	// (0x0004efea) list_im_single_pane

0x641d,	// (0x0004f00e) list_single_im_pane_t1

0x804f,	// (0x00050c40) blid_accuracy_pane

0x8057,	// (0x00050c48) blid_compass_pane

0x8061,	// (0x00050c52) main_location_t1

0x806f,	// (0x00050c60) main_location_t2

0x807d,	// (0x00050c6e) main_location_t3

0x0002,

0xf60d,	// (0x000581fe) main_location_t

0x4ddb,	// (0x0004d9cc) aid_levels_location

0x551e,	// (0x0004e10f) blid_accuracy_pane_g1

0x551e,	// (0x0004e10f) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00057ef9) blid_accuracy_pane_g

0x6457,	// (0x0004f048) wml_content_pane

0x6495,	// (0x0004f086) wml_button_pane_ParamLimits

0x6495,	// (0x0004f086) wml_button_pane

0x64a9,	// (0x0004f09a) wml_list_single_large_pane_ParamLimits

0x64a9,	// (0x0004f09a) wml_list_single_large_pane

0x64d3,	// (0x0004f0c4) wml_list_single_medium_pane_ParamLimits

0x64d3,	// (0x0004f0c4) wml_list_single_medium_pane

0x6504,	// (0x0004f0f5) wml_list_single_small_pane_ParamLimits

0x6504,	// (0x0004f0f5) wml_list_single_small_pane

0x653e,	// (0x0004f12f) wml_selection_box_pane_ParamLimits

0x653e,	// (0x0004f12f) wml_selection_box_pane

0x6551,	// (0x0004f142) wml_list_single_pane_t1

0x6560,	// (0x0004f151) wml_list_single_medium_pane_t1

0x656f,	// (0x0004f160) wml_list_single_large_pane_t1

0x657e,	// (0x0004f16f) input_focus_pane_cp02_ParamLimits

0x657e,	// (0x0004f16f) input_focus_pane_cp02

0x6591,	// (0x0004f182) wml_selection_box_pane_g1

0x659a,	// (0x0004f18b) wml_selection_box_pane_t1_ParamLimits

0x659a,	// (0x0004f18b) wml_selection_box_pane_t1

0x5036,	// (0x0004dc27) bg_wml_button_pane_ParamLimits

0x5036,	// (0x0004dc27) bg_wml_button_pane

0x65b2,	// (0x0004f1a3) wml_button_pane_g1

0x65ba,	// (0x0004f1ab) wml_button_pane_t1

0x65b2,	// (0x0004f1a3) wml_button_bg_pane_g1

0x65ca,	// (0x0004f1bb) wml_button_bg_pane_g2

0x65d2,	// (0x0004f1c3) wml_button_bg_pane_g3

0x65da,	// (0x0004f1cb) wml_button_bg_pane_g4

0x65e2,	// (0x0004f1d3) wml_button_bg_pane_g5

0x65ea,	// (0x0004f1db) wml_button_bg_pane_g6

0x65f2,	// (0x0004f1e3) wml_button_bg_pane_g7

0x65fa,	// (0x0004f1eb) wml_button_bg_pane_g8

0x6602,	// (0x0004f1f3) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00057e9c) wml_button_bg_pane_g

0x660a,	// (0x0004f1fb) bg_list_pane_cp02

0x6614,	// (0x0004f205) mce_header_pane_ParamLimits

0x6614,	// (0x0004f205) mce_header_pane

0x662a,	// (0x0004f21b) mce_icon_pane

0x662a,	// (0x0004f21b) mce_image_pane

0x6633,	// (0x0004f224) mce_text_pane_ParamLimits

0x6633,	// (0x0004f224) mce_text_pane

0x6646,	// (0x0004f237) scroll_pane_cp03

0x648d,	// (0x0004f07e) scroll_pane_cp04

0x6650,	// (0x0004f241) scroll_pane_cp05_ParamLimits

0x6650,	// (0x0004f241) scroll_pane_cp05

0x665c,	// (0x0004f24d) mce_header_field_pane_ParamLimits

0x665c,	// (0x0004f24d) mce_header_field_pane

0x667c,	// (0x0004f26d) mce_header_field_pane_2_ParamLimits

0x667c,	// (0x0004f26d) mce_header_field_pane_2

0x6692,	// (0x0004f283) mce_header_field_pane_3

0x669a,	// (0x0004f28b) list_single_mce_message_pane_ParamLimits

0x669a,	// (0x0004f28b) list_single_mce_message_pane

0x66bf,	// (0x0004f2b0) list_single_mce_smart_pane_ParamLimits

0x66bf,	// (0x0004f2b0) list_single_mce_smart_pane

0x66ef,	// (0x0004f2e0) input_focus_pane_cp03

0x66f8,	// (0x0004f2e9) list_header_data_pane

0x6700,	// (0x0004f2f1) mce_header_field_pane_t1

0x670e,	// (0x0004f2ff) list_single_mce_header_pane_ParamLimits

0x670e,	// (0x0004f2ff) list_single_mce_header_pane

0x6734,	// (0x0004f325) list_single_mce_header_pane_t1

0x6743,	// (0x0004f334) list_single_mce_message_pane_g1

0x674b,	// (0x0004f33c) list_single_mce_message_pane_t1

0x6777,	// (0x0004f368) bg_cale_heading_pane_cp01_ParamLimits

0x6777,	// (0x0004f368) bg_cale_heading_pane_cp01

0x679a,	// (0x0004f38b) bg_cale_pane_cp02_ParamLimits

0x679a,	// (0x0004f38b) bg_cale_pane_cp02

0x67bd,	// (0x0004f3ae) cale_month_corner_pane

0x67d3,	// (0x0004f3c4) cale_month_day_heading_pane_ParamLimits

0x67d3,	// (0x0004f3c4) cale_month_day_heading_pane

0x6806,	// (0x0004f3f7) cale_month_pane_g1_ParamLimits

0x6806,	// (0x0004f3f7) cale_month_pane_g1

0x6822,	// (0x0004f413) cale_month_pane_g2_ParamLimits

0x6822,	// (0x0004f413) cale_month_pane_g2

0x683d,	// (0x0004f42e) cale_month_pane_g3_ParamLimits

0x683d,	// (0x0004f42e) cale_month_pane_g3

0x6869,	// (0x0004f45a) cale_month_pane_g4_ParamLimits

0x6869,	// (0x0004f45a) cale_month_pane_g4

0x6895,	// (0x0004f486) cale_month_pane_g5_ParamLimits

0x6895,	// (0x0004f486) cale_month_pane_g5

0x68c1,	// (0x0004f4b2) cale_month_pane_g6_ParamLimits

0x68c1,	// (0x0004f4b2) cale_month_pane_g6

0x68ed,	// (0x0004f4de) cale_month_pane_g7_ParamLimits

0x68ed,	// (0x0004f4de) cale_month_pane_g7

0x6929,	// (0x0004f51a) cale_month_pane_g8_ParamLimits

0x6929,	// (0x0004f51a) cale_month_pane_g8

0x6965,	// (0x0004f556) cale_month_pane_g9_ParamLimits

0x6965,	// (0x0004f556) cale_month_pane_g9

0x699f,	// (0x0004f590) cale_month_pane_g10_ParamLimits

0x699f,	// (0x0004f590) cale_month_pane_g10

0x69d9,	// (0x0004f5ca) cale_month_pane_g11_ParamLimits

0x69d9,	// (0x0004f5ca) cale_month_pane_g11

0x6a13,	// (0x0004f604) cale_month_pane_g12_ParamLimits

0x6a13,	// (0x0004f604) cale_month_pane_g12

0x6a4d,	// (0x0004f63e) cale_month_pane_g13_ParamLimits

0x6a4d,	// (0x0004f63e) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00057eaf) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00057eaf) cale_month_pane_g

0x6a99,	// (0x0004f68a) cale_month_week_pane

0x6aac,	// (0x0004f69d) grid_cale_month_pane_ParamLimits

0x6aac,	// (0x0004f69d) grid_cale_month_pane

0x6ada,	// (0x0004f6cb) cale_month_day_heading_pane_t1

0x6b38,	// (0x0004f729) cale_month_day_heading_pane_t2

0x6b9d,	// (0x0004f78e) cale_month_day_heading_pane_t3

0x6c02,	// (0x0004f7f3) cale_month_day_heading_pane_t4

0x6c67,	// (0x0004f858) cale_month_day_heading_pane_t5

0x6ccc,	// (0x0004f8bd) cale_month_day_heading_pane_t6

0x6d31,	// (0x0004f922) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00057eca) cale_month_day_heading_pane_t

0x5a76,	// (0x0004e667) bg_cale_side_pane_cp01

0x6da6,	// (0x0004f997) cale_month_week_pane_t1

0x6dbd,	// (0x0004f9ae) cale_month_week_pane_t2

0x6dd4,	// (0x0004f9c5) cale_month_week_pane_t3

0x6deb,	// (0x0004f9dc) cale_month_week_pane_t4

0x6e02,	// (0x0004f9f3) cale_month_week_pane_t5

0x6e19,	// (0x0004fa0a) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00057ed9) cale_month_week_pane_t

0x6e30,	// (0x0004fa21) cell_cale_month_pane_ParamLimits

0x6e30,	// (0x0004fa21) cell_cale_month_pane

0x6ee6,	// (0x0004fad7) cell_cale_month_pane_g1

0x6ef2,	// (0x0004fae3) cell_cale_month_pane_t1_ParamLimits

0x6ef2,	// (0x0004fae3) cell_cale_month_pane_t1

0x5b75,	// (0x0004e766) grid_highlight_pane_cp08

0x551e,	// (0x0004e10f) main_smil_g1

0x6f0e,	// (0x0004faff) smil_status_pane

0x6f19,	// (0x0004fb0a) smil_text_pane

0xea9c,	// (0x0005768d) bg_popup_call3_rect_pane_g8

0xeaa4,	// (0x00057695) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00058192) bg_popup_call3_rect_pane_g

0xed2c,	// (0x0005791d) smil_status_volume_pane_g1

0x6f2b,	// (0x0004fb1c) smil_status_pane_t1

0x8435,	// (0x00051026) volume_smil_pane

0xd282,	// (0x00055e73) list_smil_text_pane

0x6f39,	// (0x0004fb2a) scroll_pane_cp011

0x6f44,	// (0x0004fb35) smil_text_list_pane_t1_ParamLimits

0x6f44,	// (0x0004fb35) smil_text_list_pane_t1

0x6fbc,	// (0x0004fbad) aid_volume_smil_ParamLimits

0x6fbc,	// (0x0004fbad) aid_volume_smil

0x551e,	// (0x0004e10f) smil_volume_pane_g1

0x551e,	// (0x0004e10f) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00057ef9) smil_volume_pane_g

0x53c3,	// (0x0004dfb4) listscroll_cale_day_pane

0xd28c,	// (0x00055e7d) bg_cale_pane

0xd2a4,	// (0x00055e95) list_cale_pane

0xd2b5,	// (0x00055ea6) scroll_pane_cp09

0xd2c6,	// (0x00055eb7) cale_bg_pane_g1

0xd2ce,	// (0x00055ebf) cale_bg_pane_g2

0xd2d6,	// (0x00055ec7) cale_bg_pane_g3

0xd2de,	// (0x00055ecf) cale_bg_pane_g4

0xd2e6,	// (0x00055ed7) cale_bg_pane_g5

0xd2ee,	// (0x00055edf) cale_bg_pane_g6

0xd2f6,	// (0x00055ee7) cale_bg_pane_g7

0xd2fe,	// (0x00055eef) cale_bg_pane_g8

0xd306,	// (0x00055ef7) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00057efe) cale_bg_pane_g

0x6fde,	// (0x0004fbcf) list_cale_time_pane_ParamLimits

0x6fde,	// (0x0004fbcf) list_cale_time_pane

0xd30e,	// (0x00055eff) list_cale_time_pane_g1_ParamLimits

0xd30e,	// (0x00055eff) list_cale_time_pane_g1

0xd31a,	// (0x00055f0b) list_cale_time_pane_g2_ParamLimits

0xd31a,	// (0x00055f0b) list_cale_time_pane_g2

0x6ffa,	// (0x0004fbeb) list_cale_time_pane_g3_ParamLimits

0x6ffa,	// (0x0004fbeb) list_cale_time_pane_g3

0x7008,	// (0x0004fbf9) list_cale_time_pane_g4_ParamLimits

0x7008,	// (0x0004fbf9) list_cale_time_pane_g4

0x7016,	// (0x0004fc07) list_cale_time_pane_g5_ParamLimits

0x7016,	// (0x0004fc07) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00057f11) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00057f11) list_cale_time_pane_g

0xd334,	// (0x00055f25) list_cale_time_pane_t1_ParamLimits

0xd334,	// (0x00055f25) list_cale_time_pane_t1

0xd35c,	// (0x00055f4d) list_cale_time_pane_t2_ParamLimits

0xd35c,	// (0x00055f4d) list_cale_time_pane_t2

0x733b,	// (0x0004ff2c) aid_blid_cardinal_pane

0x737d,	// (0x0004ff6e) compass_pane_t4

0xd384,	// (0x00055f75) list_cale_time_pane_t4_ParamLimits

0xd384,	// (0x00055f75) list_cale_time_pane_t4

0x738b,	// (0x0004ff7c) compass_pane_t5

0x739b,	// (0x0004ff8c) compass_pane_t6

0x73a9,	// (0x0004ff9a) compass_pane_t7

0xd7bd,	// (0x000563ae) navi_pane_cc_t1

0xd912,	// (0x00056503) aid_phob_thumbnail_center_pane

0x7b55,	// (0x00050746) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00057f1e) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00057f1e) list_cale_time_pane_t

0x4a0e,	// (0x0004d5ff) bg_popup_window_pane_cp02_ParamLimits

0x4a0e,	// (0x0004d5ff) bg_popup_window_pane_cp02

0xd3ac,	// (0x00055f9d) heading_pane_cp01_ParamLimits

0xd3ac,	// (0x00055f9d) heading_pane_cp01

0xd3b8,	// (0x00055fa9) loc_req_pane_ParamLimits

0xd3b8,	// (0x00055fa9) loc_req_pane

0xd3c8,	// (0x00055fb9) loc_type_pane_ParamLimits

0xd3c8,	// (0x00055fb9) loc_type_pane

0xd3da,	// (0x00055fcb) loc_type_pane_t1_ParamLimits

0xd3da,	// (0x00055fcb) loc_type_pane_t1

0xd3ec,	// (0x00055fdd) loc_type_pane_t2_ParamLimits

0xd3ec,	// (0x00055fdd) loc_type_pane_t2

0xd3fe,	// (0x00055fef) loc_type_pane_t3_ParamLimits

0xd3fe,	// (0x00055fef) loc_type_pane_t3

0x0002,

0xf334,	// (0x00057f25) loc_type_pane_t_ParamLimits

0xf334,	// (0x00057f25) loc_type_pane_t

0xd410,	// (0x00056001) list_loc_req_pane

0xd41a,	// (0x0005600b) scroll_pane_cp012

0x7024,	// (0x0004fc15) list_single_loc_request_popup_menu_pane_ParamLimits

0x7024,	// (0x0004fc15) list_single_loc_request_popup_menu_pane

0xd425,	// (0x00056016) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd425,	// (0x00056016) list_single_loc_request_popup_menu_pane_g1

0xd431,	// (0x00056022) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd431,	// (0x00056022) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00057f2c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00057f2c) list_single_loc_request_popup_menu_pane_g

0xd43d,	// (0x0005602e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd43d,	// (0x0005602e) list_single_loc_request_popup_menu_pane_t1

0x7036,	// (0x0004fc27) bg_popup_window_pane_cp03_ParamLimits

0x7036,	// (0x0004fc27) bg_popup_window_pane_cp03

0x7044,	// (0x0004fc35) heading_loc_req_pane_ParamLimits

0x7044,	// (0x0004fc35) heading_loc_req_pane

0x7050,	// (0x0004fc41) popup_dyc_status_message_window_g1_ParamLimits

0x7050,	// (0x0004fc41) popup_dyc_status_message_window_g1

0x705c,	// (0x0004fc4d) popup_dyc_status_message_window_t1_ParamLimits

0x705c,	// (0x0004fc4d) popup_dyc_status_message_window_t1

0x706e,	// (0x0004fc5f) popup_dyc_status_message_window_t2_ParamLimits

0x706e,	// (0x0004fc5f) popup_dyc_status_message_window_t2

0x7080,	// (0x0004fc71) popup_dyc_status_message_window_t3_ParamLimits

0x7080,	// (0x0004fc71) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00057f31) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00057f31) popup_dyc_status_message_window_t

0x4ddb,	// (0x0004d9cc) bg_heading_pane_cp01

0xd453,	// (0x00056044) heading_loc_req_pane_g1

0xd45b,	// (0x0005604c) heading_loc_req_pane_g2

0xd463,	// (0x00056054) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00057f38) heading_loc_req_pane_g

0xd46b,	// (0x0005605c) heading_loc_req_pane_t1

0xd47a,	// (0x0005606b) bg_popup_sub_pane_cp01_ParamLimits

0xd47a,	// (0x0005606b) bg_popup_sub_pane_cp01

0xd488,	// (0x00056079) popup_cale_events_window_g1_ParamLimits

0xd488,	// (0x00056079) popup_cale_events_window_g1

0xd4a8,	// (0x00056099) popup_cale_events_window_g2_ParamLimits

0xd4a8,	// (0x00056099) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00057f6c) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00057f6c) popup_cale_events_window_g

0xd4c8,	// (0x000560b9) popup_cale_events_window_t1_ParamLimits

0xd4c8,	// (0x000560b9) popup_cale_events_window_t1

0xd4da,	// (0x000560cb) popup_cale_events_window_t2_ParamLimits

0xd4da,	// (0x000560cb) popup_cale_events_window_t2

0xd518,	// (0x00056109) popup_cale_events_window_t3_ParamLimits

0xd518,	// (0x00056109) popup_cale_events_window_t3

0xd552,	// (0x00056143) popup_cale_events_window_t4_ParamLimits

0xd552,	// (0x00056143) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00057f71) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00057f71) popup_cale_events_window_t

0x7104,	// (0x0004fcf5) call_type_pane

0xd588,	// (0x00056179) popup_call_status_window_g1

0x7110,	// (0x0004fd01) popup_call_status_window_g2

0x711c,	// (0x0004fd0d) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00057f7a) popup_call_status_window_g

0xd596,	// (0x00056187) call_type_pane_g1

0xd59f,	// (0x00056190) call_type_pane_g2

0x0001,

0xf390,	// (0x00057f81) call_type_pane_g

0x4ddb,	// (0x0004d9cc) bg_popup_sub_pane_cp02

0xd5a8,	// (0x00056199) listscroll_popup_wml_pane

0xd5b0,	// (0x000561a1) list_wml_pane

0xd5ba,	// (0x000561ab) scroll_pane_cp013

0xd5c5,	// (0x000561b6) list_single_graphic_popup_wml_pane_ParamLimits

0xd5c5,	// (0x000561b6) list_single_graphic_popup_wml_pane

0x551e,	// (0x0004e10f) list_single_graphic_popup_wml_pane_g1

0xd5d9,	// (0x000561ca) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00057f86) list_single_graphic_popup_wml_pane_g

0xd5e1,	// (0x000561d2) list_single_graphic_popup_wml_pane_t1

0xd5f7,	// (0x000561e8) aid_call_pane

0x502e,	// (0x0004dc1f) popup_clock_analogue_window_g1

0x502e,	// (0x0004dc1f) popup_clock_analogue_window_g2

0x7128,	// (0x0004fd19) popup_clock_analogue_window_g3

0x7128,	// (0x0004fd19) popup_clock_analogue_window_g4

0x551e,	// (0x0004e10f) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00057f8b) popup_clock_analogue_window_g

0x7130,	// (0x0004fd21) popup_clock_analogue_window_t1

0x713e,	// (0x0004fd2f) clock_digital_number_pane_ParamLimits

0x713e,	// (0x0004fd2f) clock_digital_number_pane

0x714a,	// (0x0004fd3b) clock_digital_number_pane_cp02_ParamLimits

0x714a,	// (0x0004fd3b) clock_digital_number_pane_cp02

0x7156,	// (0x0004fd47) clock_digital_number_pane_cp03_ParamLimits

0x7156,	// (0x0004fd47) clock_digital_number_pane_cp03

0x7162,	// (0x0004fd53) clock_digital_number_pane_cp04_ParamLimits

0x7162,	// (0x0004fd53) clock_digital_number_pane_cp04

0x7172,	// (0x0004fd63) clock_digital_separator_pane_ParamLimits

0x7172,	// (0x0004fd63) clock_digital_separator_pane

0x717e,	// (0x0004fd6f) popup_clock_digital_window_t1

0x551e,	// (0x0004e10f) clock_digital_number_pane_g1

0x551e,	// (0x0004e10f) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00057ef9) clock_digital_number_pane_g

0x551e,	// (0x0004e10f) clock_digital_separator_pane_g1

0x551e,	// (0x0004e10f) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00057ef9) clock_digital_separator_pane_g

0x4ddb,	// (0x0004d9cc) bg_popup_window_pane_cp04

0xd5ff,	// (0x000561f0) heading_pane_cp03

0xd607,	// (0x000561f8) listscroll_popup_gms_pane

0xd60f,	// (0x00056200) grid_large_graphic_popup_pane

0xd619,	// (0x0005620a) listscroll_popup_gms_pane_g1

0xd621,	// (0x00056212) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00057f96) listscroll_popup_gms_pane_g

0x648d,	// (0x0004f07e) scroll_pane_cp014

0x719b,	// (0x0004fd8c) cell_large_graphic_popup_pane_ParamLimits

0x719b,	// (0x0004fd8c) cell_large_graphic_popup_pane

0x71b3,	// (0x0004fda4) cell_large_graphic_popup_pane_g1_ParamLimits

0x71b3,	// (0x0004fda4) cell_large_graphic_popup_pane_g1

0xd629,	// (0x0005621a) cell_large_graphic_popup_pane_g2_ParamLimits

0xd629,	// (0x0005621a) cell_large_graphic_popup_pane_g2

0xd635,	// (0x00056226) cell_large_graphic_popup_pane_g3_ParamLimits

0xd635,	// (0x00056226) cell_large_graphic_popup_pane_g3

0xd642,	// (0x00056233) cell_large_graphic_popup_pane_g4_ParamLimits

0xd642,	// (0x00056233) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00057f9b) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00057f9b) cell_large_graphic_popup_pane_g

0xd652,	// (0x00056243) grid_highlight_pane_cp010

0x551e,	// (0x0004e10f) bg_popup_call_pane_g1

0xd65c,	// (0x0005624d) list_single_graphic_popup_conf_pane_ParamLimits

0xd65c,	// (0x0005624d) list_single_graphic_popup_conf_pane

0xd66f,	// (0x00056260) list_highlight_pane_cp01

0xd678,	// (0x00056269) list_single_graphic_popup_conf_pane_g1

0xd680,	// (0x00056271) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00057fa4) list_single_graphic_popup_conf_pane_g

0xd688,	// (0x00056279) list_single_graphic_popup_conf_pane_t1

0xd696,	// (0x00056287) linegrid_cams_pane_g1

0x71bf,	// (0x0004fdb0) linegrid_cams_pane_g2

0x5bce,	// (0x0004e7bf) linegrid_cams_pane_g3

0xd69f,	// (0x00056290) linegrid_cams_pane_g4

0x71c8,	// (0x0004fdb9) linegrid_cams_pane_g5

0x71d1,	// (0x0004fdc2) linegrid_cams_pane_g6

0x5bd7,	// (0x0004e7c8) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00057fa9) linegrid_cams_pane_g

0xd6a8,	// (0x00056299) popup_clock_analogue_window

0xd6a8,	// (0x00056299) popup_clock_digital_window

0x4ddb,	// (0x0004d9cc) popup_phob_thumbnail_window

0x551e,	// (0x0004e10f) call_video_uplink_pane_g1

0xd6b1,	// (0x000562a2) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00057fb8) call_video_uplink_pane_g

0xd6b9,	// (0x000562aa) video_uplink_pane

0xd6c1,	// (0x000562b2) mce_image_pane_g1

0x71da,	// (0x0004fdcb) mce_image_pane_g2

0x71e4,	// (0x0004fdd5) mce_image_pane_g3

0x71ec,	// (0x0004fddd) mce_image_pane_g4

0x71f4,	// (0x0004fde5) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00057fbd) mce_image_pane_g

0xd6cb,	// (0x000562bc) control_top_pane_stacon_cp01_ParamLimits

0xd6cb,	// (0x000562bc) control_top_pane_stacon_cp01

0xd6df,	// (0x000562d0) uni_indicator_pane_stacon_cp01_ParamLimits

0xd6df,	// (0x000562d0) uni_indicator_pane_stacon_cp01

0xd6f0,	// (0x000562e1) bg_popup_sub_pane_cp03

0x71fc,	// (0x0004fded) chi_dic_find_pane

0x7204,	// (0x0004fdf5) listscroll_chi_dic_pane

0x720d,	// (0x0004fdfe) main_pane_chidic_g1

0xd6fa,	// (0x000562eb) chi_dic_find_pane_t1

0xd708,	// (0x000562f9) find_chidic_pane

0xd711,	// (0x00056302) chi_dic_list_pane_ParamLimits

0xd711,	// (0x00056302) chi_dic_list_pane

0xd722,	// (0x00056313) scroll_pane_cp020

0xd72a,	// (0x0005631b) find_chidic_pane_t1

0x4ddb,	// (0x0004d9cc) input_focus_pane_cp06

0x7220,	// (0x0004fe11) list_chi_dic_pane_ParamLimits

0x7220,	// (0x0004fe11) list_chi_dic_pane

0x723a,	// (0x0004fe2b) list_chi_dic_pane_t1_ParamLimits

0x723a,	// (0x0004fe2b) list_chi_dic_pane_t1

0x4ddb,	// (0x0004d9cc) list_highlight_pane_cp020

0xd739,	// (0x0005632a) bg_cale_heading_pane_g1

0x724d,	// (0x0004fe3e) bg_cale_heading_pane_g2

0x7255,	// (0x0004fe46) bg_cale_heading_pane_g3

0x725d,	// (0x0004fe4e) bg_cale_heading_pane_g4

0x7267,	// (0x0004fe58) bg_cale_heading_pane_g5

0x7271,	// (0x0004fe62) bg_cale_heading_pane_g6

0x7279,	// (0x0004fe6a) bg_cale_heading_pane_g7

0x7281,	// (0x0004fe72) bg_cale_heading_pane_g8

0x728b,	// (0x0004fe7c) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00057fc8) bg_cale_heading_pane_g

0xd739,	// (0x0005632a) bg_cale_side_pane_g1

0x7295,	// (0x0004fe86) bg_cale_side_pane_g2

0x729d,	// (0x0004fe8e) bg_cale_side_pane_g3

0x72a5,	// (0x0004fe96) bg_cale_side_pane_g4

0x72ad,	// (0x0004fe9e) bg_cale_side_pane_g5

0x72b5,	// (0x0004fea6) bg_cale_side_pane_g6

0x72bd,	// (0x0004feae) bg_cale_side_pane_g7

0x72c5,	// (0x0004feb6) bg_cale_side_pane_g8

0x72cd,	// (0x0004febe) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00057fdb) bg_cale_side_pane_g

0x72d5,	// (0x0004fec6) popup_call_status_window_ParamLimits

0x72d5,	// (0x0004fec6) popup_call_status_window

0xd741,	// (0x00056332) stacon_top_pane

0xd749,	// (0x0005633a) status_pane_ParamLimits

0xd749,	// (0x0005633a) status_pane

0xd75e,	// (0x0005634f) status_small_pane

0xd766,	// (0x00056357) control_pane

0x4ddb,	// (0x0004d9cc) stacon_bottom_pane

0xd76e,	// (0x0005635f) list_single_mce_smart_pane_t1_ParamLimits

0xd76e,	// (0x0005635f) list_single_mce_smart_pane_t1

0xd781,	// (0x00056372) list_single_mce_smart_pane_t2_ParamLimits

0xd781,	// (0x00056372) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00057fee) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00057fee) list_single_mce_smart_pane_t

0x72e1,	// (0x0004fed2) compass_pane

0x72ed,	// (0x0004fede) main_location2_pane_t1

0x7301,	// (0x0004fef2) main_location2_pane_t2

0x7315,	// (0x0004ff06) main_location2_pane_t3

0x0003,

0xf402,	// (0x00057ff3) main_location2_pane_t

0xd7a0,	// (0x00056391) compass_pane_g1_ParamLimits

0xd7a0,	// (0x00056391) compass_pane_g1

0x735f,	// (0x0004ff50) compass_pane_t1

0x736e,	// (0x0004ff5f) compass_pane_t2

0x0005,

0xf40b,	// (0x00057ffc) compass_pane_t

0x73b9,	// (0x0004ffaa) text_secondary_cp61

0xd7b4,	// (0x000563a5) navi_pane_cams_g5

0xd7d7,	// (0x000563c8) navi_pane_im_t1

0xd7e5,	// (0x000563d6) navi_pane_mp_g1_ParamLimits

0xd7e5,	// (0x000563d6) navi_pane_mp_g1

0xd7f9,	// (0x000563ea) navi_pane_mp_g2_ParamLimits

0xd7f9,	// (0x000563ea) navi_pane_mp_g2

0xd805,	// (0x000563f6) navi_pane_mp_g3_ParamLimits

0xd805,	// (0x000563f6) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00058010) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00058010) navi_pane_mp_g

0xd811,	// (0x00056402) navi_pane_mp_t1

0xd81f,	// (0x00056410) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00058017) navi_pane_mp_t

0xd85b,	// (0x0005644c) navi_pane_vt_g1

0xd811,	// (0x00056402) navi_pane_vt_t1

0xd863,	// (0x00056454) navi_slider_pane

0xd86b,	// (0x0005645c) zooming_pane

0xd873,	// (0x00056464) navi_slider_pane_g1

0x74ce,	// (0x000500bf) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0005801e) navi_slider_pane_g

0xd897,	// (0x00056488) aid_levels_zoom

0xd89f,	// (0x00056490) zooming_pane_g1

0xd8a7,	// (0x00056498) zooming_pane_g2

0xd8a7,	// (0x00056498) zooming_pane_g3

0x0002,

0xf43c,	// (0x0005802d) zooming_pane_g

0xd8af,	// (0x000564a0) level_10_zoom

0xd8b8,	// (0x000564a9) level_11_zoom

0xd8c1,	// (0x000564b2) level_1_zoom

0xd8ca,	// (0x000564bb) level_2_zoom

0xd8d3,	// (0x000564c4) level_3_zoom

0xd8dc,	// (0x000564cd) level_4_zoom

0xd8e5,	// (0x000564d6) level_5_zoom

0xd8ee,	// (0x000564df) level_6_zoom

0xd8f7,	// (0x000564e8) level_7_zoom

0xd900,	// (0x000564f1) level_8_zoom

0xd909,	// (0x000564fa) level_9_zoom

0xd91a,	// (0x0005650b) popup_phob_thumbnail_window_g1

0xd922,	// (0x00056513) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00058034) popup_phob_thumbnail_window_g

0xebfe,	// (0x000577ef) level_1_location

0xec06,	// (0x000577f7) level_2_location

0xec0e,	// (0x000577ff) level_3_location

0xec16,	// (0x00057807) level_4_location

0xd86b,	// (0x0005645c) level_5_location

0x74e0,	// (0x000500d1) mce_icon_pane_g1

0x74e8,	// (0x000500d9) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00058039) mce_icon_pane_g

0x74f0,	// (0x000500e1) main_mup_pane_g1_ParamLimits

0x74f0,	// (0x000500e1) main_mup_pane_g1

0x7508,	// (0x000500f9) main_mup_pane_g2_ParamLimits

0x7508,	// (0x000500f9) main_mup_pane_g2

0x7524,	// (0x00050115) main_mup_pane_g3_ParamLimits

0x7524,	// (0x00050115) main_mup_pane_g3

0x7540,	// (0x00050131) main_mup_pane_g4_ParamLimits

0x7540,	// (0x00050131) main_mup_pane_g4

0x755c,	// (0x0005014d) main_mup_pane_g5_ParamLimits

0x755c,	// (0x0005014d) main_mup_pane_g5

0x757d,	// (0x0005016e) main_mup_pane_g6_ParamLimits

0x757d,	// (0x0005016e) main_mup_pane_g6

0x7599,	// (0x0005018a) main_mup_pane_g7_ParamLimits

0x7599,	// (0x0005018a) main_mup_pane_g7

0x75b5,	// (0x000501a6) main_mup_pane_g8_ParamLimits

0x75b5,	// (0x000501a6) main_mup_pane_g8

0x75d5,	// (0x000501c6) main_mup_pane_g9_ParamLimits

0x75d5,	// (0x000501c6) main_mup_pane_g9

0x75f4,	// (0x000501e5) main_mup_pane_g10_ParamLimits

0x75f4,	// (0x000501e5) main_mup_pane_g10

0x7613,	// (0x00050204) main_mup_pane_g11_ParamLimits

0x7613,	// (0x00050204) main_mup_pane_g11

0x762b,	// (0x0005021c) main_mup_pane_g12_ParamLimits

0x762b,	// (0x0005021c) main_mup_pane_g12

0x7639,	// (0x0005022a) main_mup_pane_g13_ParamLimits

0x7639,	// (0x0005022a) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0005803e) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0005803e) main_mup_pane_g

0x764f,	// (0x00050240) main_mup_pane_t1_ParamLimits

0x764f,	// (0x00050240) main_mup_pane_t1

0x766c,	// (0x0005025d) main_mup_pane_t2_ParamLimits

0x766c,	// (0x0005025d) main_mup_pane_t2

0x7686,	// (0x00050277) main_mup_pane_t3_ParamLimits

0x7686,	// (0x00050277) main_mup_pane_t3

0x76a0,	// (0x00050291) main_mup_pane_t4_ParamLimits

0x76a0,	// (0x00050291) main_mup_pane_t4

0x76b2,	// (0x000502a3) main_mup_pane_t5_ParamLimits

0x76b2,	// (0x000502a3) main_mup_pane_t5

0x76c4,	// (0x000502b5) main_mup_pane_t6_ParamLimits

0x76c4,	// (0x000502b5) main_mup_pane_t6

0x0005,

0xf468,	// (0x00058059) main_mup_pane_t_ParamLimits

0xf468,	// (0x00058059) main_mup_pane_t

0x76da,	// (0x000502cb) mup_progress_pane_ParamLimits

0x76da,	// (0x000502cb) mup_progress_pane

0x76e6,	// (0x000502d7) mup_visualizer_pane_ParamLimits

0x76e6,	// (0x000502d7) mup_visualizer_pane

0x7720,	// (0x00050311) mup_volume_pane_ParamLimits

0x7720,	// (0x00050311) mup_volume_pane

0xd588,	// (0x00056179) mup_visualizer_pane_g1_ParamLimits

0xd588,	// (0x00056179) mup_visualizer_pane_g1

0xd588,	// (0x00056179) mup_visualizer_pane_g2_ParamLimits

0xd588,	// (0x00056179) mup_visualizer_pane_g2

0xd7a0,	// (0x00056391) mup_visualizer_pane_g3_ParamLimits

0xd7a0,	// (0x00056391) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00058066) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00058066) mup_visualizer_pane_g

0x551e,	// (0x0004e10f) mup_volume_pane_g1

0xd932,	// (0x00056523) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0005806d) mup_volume_pane_g

0x551e,	// (0x0004e10f) mup_progress_pane_g1

0xd93b,	// (0x0005652c) mup_progress_pane_g2

0xd944,	// (0x00056535) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00058072) mup_progress_pane_g

0x4ddb,	// (0x0004d9cc) bg_popup_window_pane_cp05

0xd94d,	// (0x0005653e) heading_pane_cp02_ParamLimits

0xd94d,	// (0x0005653e) heading_pane_cp02

0xd967,	// (0x00056558) list_popup_blid_pane

0xd96f,	// (0x00056560) list_blid_sat_info_pane_ParamLimits

0xd96f,	// (0x00056560) list_blid_sat_info_pane

0xd982,	// (0x00056573) list_blid_sat_info_pane_g1

0xd98a,	// (0x0005657b) list_blid_sat_info_pane_t1

0x782d,	// (0x0005041e) mup_equalizer_pane_ParamLimits

0x782d,	// (0x0005041e) mup_equalizer_pane

0x784e,	// (0x0005043f) mup_equalizer_pane_cp1_ParamLimits

0x784e,	// (0x0005043f) mup_equalizer_pane_cp1

0x786f,	// (0x00050460) mup_equalizer_pane_cp2_ParamLimits

0x786f,	// (0x00050460) mup_equalizer_pane_cp2

0x7890,	// (0x00050481) mup_equalizer_pane_cp3_ParamLimits

0x7890,	// (0x00050481) mup_equalizer_pane_cp3

0x78b1,	// (0x000504a2) mup_equalizer_pane_cp4_ParamLimits

0x78b1,	// (0x000504a2) mup_equalizer_pane_cp4

0x78d2,	// (0x000504c3) mup_equalizer_pane_cp5

0x78e8,	// (0x000504d9) mup_equalizer_pane_cp6

0x7900,	// (0x000504f1) mup_equalizer_pane_cp7

0xeb1c,	// (0x0005770d) bg_popup_call_poc_act_pane_g9

0xeb24,	// (0x00057715) bg_popup_call_poc_act_pane_g10

0xeb2c,	// (0x0005771d) bg_popup_call_poc_act_pane_g11

0x000a,

0x5036,	// (0x0004dc27) mup_scale_pane

0x551e,	// (0x0004e10f) mup_scale_pane_g1

0xd998,	// (0x00056589) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0005808e) mup_scale_pane_g

0xd9bc,	// (0x000565ad) msg_data_pane

0xd9c4,	// (0x000565b5) scroll_pane_cp017

0x792a,	// (0x0005051b) bg_list_pane_cp04_ParamLimits

0x792a,	// (0x0005051b) bg_list_pane_cp04

0xd9cc,	// (0x000565bd) msg_data_pane_g1

0x794e,	// (0x0005053f) msg_data_pane_g2

0x7958,	// (0x00050549) msg_data_pane_g3

0x7960,	// (0x00050551) msg_data_pane_g4

0x7968,	// (0x00050559) msg_data_pane_g5

0x7970,	// (0x00050561) msg_data_pane_g6

0x7978,	// (0x00050569) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0005809d) msg_data_pane_g

0x7980,	// (0x00050571) msg_text_pane_ParamLimits

0x7980,	// (0x00050571) msg_text_pane

0x79c0,	// (0x000505b1) qrid_highlight_pane_cp011_ParamLimits

0x79c0,	// (0x000505b1) qrid_highlight_pane_cp011

0x4ddb,	// (0x0004d9cc) msg_body_pane

0x4ddb,	// (0x0004d9cc) msg_header_pane

0xd9dd,	// (0x000565ce) input_focus_pane_cp07

0x79e6,	// (0x000505d7) msg_header_pane_t1_ParamLimits

0x79e6,	// (0x000505d7) msg_header_pane_t1

0x79f8,	// (0x000505e9) msg_header_pane_t2_ParamLimits

0x79f8,	// (0x000505e9) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000580b1) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000580b1) msg_header_pane_t

0xd9f2,	// (0x000565e3) msg_body_pane_g1

0x7a0a,	// (0x000505fb) msg_body_pane_t1_ParamLimits

0x7a0a,	// (0x000505fb) msg_body_pane_t1

0x7a3b,	// (0x0005062c) msg_body_pane_t2_ParamLimits

0x7a3b,	// (0x0005062c) msg_body_pane_t2

0x7a4d,	// (0x0005063e) msg_body_pane_t3_ParamLimits

0x7a4d,	// (0x0005063e) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000580b6) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000580b6) msg_body_pane_t

0x7ab1,	// (0x000506a2) main_viewer_pane_g1_ParamLimits

0x7ab1,	// (0x000506a2) main_viewer_pane_g1

0x7abd,	// (0x000506ae) main_viewer_pane_g2_ParamLimits

0x7abd,	// (0x000506ae) main_viewer_pane_g2

0x7ac9,	// (0x000506ba) main_viewer_pane_g3_ParamLimits

0x7ac9,	// (0x000506ba) main_viewer_pane_g3

0x7ada,	// (0x000506cb) main_viewer_pane_g4_ParamLimits

0x7ada,	// (0x000506cb) main_viewer_pane_g4

0x7aeb,	// (0x000506dc) main_viewer_pane_g5_ParamLimits

0x7aeb,	// (0x000506dc) main_viewer_pane_g5

0x7aeb,	// (0x000506dc) main_viewer_pane_g7_ParamLimits

0x7aeb,	// (0x000506dc) main_viewer_pane_g7

0xd425,	// (0x00056016) main_viewer_pane_g8_ParamLimits

0xd425,	// (0x00056016) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000580c6) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000580c6) main_viewer_pane_g

0xd9fa,	// (0x000565eb) viewer_content_pane_ParamLimits

0xd9fa,	// (0x000565eb) viewer_content_pane

0x7b29,	// (0x0005071a) main_postcard_pane_g1_ParamLimits

0x7b29,	// (0x0005071a) main_postcard_pane_g1

0x7b37,	// (0x00050728) main_postcard_pane_g2_ParamLimits

0x7b37,	// (0x00050728) main_postcard_pane_g2

0x7b45,	// (0x00050736) main_postcard_pane_g3_ParamLimits

0x7b45,	// (0x00050736) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000580d7) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000580d7) main_postcard_pane_g

0x7b55,	// (0x00050746) main_postcard_pane_g4

0xed3f,	// (0x00057930) smil_status_volume_pane_g2

0x7b81,	// (0x00050772) postcard_pane_ParamLimits

0x7b81,	// (0x00050772) postcard_pane

0xd588,	// (0x00056179) postcard_pane_g1_ParamLimits

0xd588,	// (0x00056179) postcard_pane_g1

0x7bb3,	// (0x000507a4) postcard_pane_g2_ParamLimits

0x7bb3,	// (0x000507a4) postcard_pane_g2

0x7bbf,	// (0x000507b0) postcard_pane_g3_ParamLimits

0x7bbf,	// (0x000507b0) postcard_pane_g3

0xda08,	// (0x000565f9) postcard_pane_g4_ParamLimits

0xda08,	// (0x000565f9) postcard_pane_g4

0x7bcb,	// (0x000507bc) postcard_pane_g5_ParamLimits

0x7bcb,	// (0x000507bc) postcard_pane_g5

0x7bd7,	// (0x000507c8) postcard_pane_g6_ParamLimits

0x7bd7,	// (0x000507c8) postcard_pane_g6

0xda16,	// (0x00056607) postcard_pane_g7_ParamLimits

0xda16,	// (0x00056607) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000580e4) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000580e4) postcard_pane_g

0x7be3,	// (0x000507d4) main_mp2_pane_g1_ParamLimits

0x7be3,	// (0x000507d4) main_mp2_pane_g1

0x7bef,	// (0x000507e0) main_mp2_pane_g2_ParamLimits

0x7bef,	// (0x000507e0) main_mp2_pane_g2

0x7bfb,	// (0x000507ec) main_mp2_pane_g3_ParamLimits

0x7bfb,	// (0x000507ec) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000580f3) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000580f3) main_mp2_pane_g

0x7c07,	// (0x000507f8) main_mp2_pane_t1_ParamLimits

0x7c07,	// (0x000507f8) main_mp2_pane_t1

0x7c1e,	// (0x0005080f) main_mp2_pane_t2_ParamLimits

0x7c1e,	// (0x0005080f) main_mp2_pane_t2

0x7c32,	// (0x00050823) main_mp2_pane_t3_ParamLimits

0x7c32,	// (0x00050823) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000580fa) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000580fa) main_mp2_pane_t

0xda24,	// (0x00056615) pec_content_pane_ParamLimits

0xda24,	// (0x00056615) pec_content_pane

0x648d,	// (0x0004f07e) scroll_pane_cp015

0xda36,	// (0x00056627) pec_attribute_pane_ParamLimits

0xda36,	// (0x00056627) pec_attribute_pane

0x7c44,	// (0x00050835) pec_content_pane_g1_ParamLimits

0x7c44,	// (0x00050835) pec_content_pane_g1

0xda46,	// (0x00056637) pec_content_pane_t1_ParamLimits

0xda46,	// (0x00056637) pec_content_pane_t1

0xda58,	// (0x00056649) pec_content_pane_t2_ParamLimits

0xda58,	// (0x00056649) pec_content_pane_t2

0x0001,

0xf510,	// (0x00058101) pec_content_pane_t_ParamLimits

0xf510,	// (0x00058101) pec_content_pane_t

0x7c50,	// (0x00050841) list_single_graphic_pane_cp01_ParamLimits

0x7c50,	// (0x00050841) list_single_graphic_pane_cp01

0x5036,	// (0x0004dc27) bg_popup_sub_pane_cp04

0xda6a,	// (0x0005665b) popup_mup_playback_window_g1

0xda76,	// (0x00056667) popup_mup_playback_window_t1

0xda8b,	// (0x0005667c) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00058106) popup_mup_playback_window_t

0xdac2,	// (0x000566b3) main_image_pane_g1_ParamLimits

0xdac2,	// (0x000566b3) main_image_pane_g1

0xdb05,	// (0x000566f6) scroll_pane_cp018_ParamLimits

0xdb05,	// (0x000566f6) scroll_pane_cp018

0xdb1d,	// (0x0005670e) scroll_pane_cp016_ParamLimits

0xdb1d,	// (0x0005670e) scroll_pane_cp016

0x7ce9,	// (0x000508da) smil2_image_pane_ParamLimits

0x7ce9,	// (0x000508da) smil2_image_pane

0x7d19,	// (0x0005090a) smil2_root_pane_ParamLimits

0x7d19,	// (0x0005090a) smil2_root_pane

0x7d45,	// (0x00050936) smil2_text_pane_ParamLimits

0x7d45,	// (0x00050936) smil2_text_pane

0x4ddb,	// (0x0004d9cc) bg_list_pane_cp06

0xdb59,	// (0x0005674a) grid_radio_pane

0x4ddb,	// (0x0004d9cc) bg_popup_window_pane_cp06

0xdb61,	// (0x00056752) main_fmradio_pane_t1

0xd5ff,	// (0x000561f0) heading_pane_cp04

0xdb6f,	// (0x00056760) main_fmradio_pane_t2

0xeb34,	// (0x00057725) popup_cale_lunar_info_window_g1

0xdb7d,	// (0x0005676e) main_fmradio_pane_t3

0xeb3c,	// (0x0005772d) popup_cale_lunar_info_window_g2

0xdb8b,	// (0x0005677c) main_fmradio_pane_t4

0x0001,

0xdb99,	// (0x0005678a) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000581e1) popup_cale_lunar_info_window_g

0xf52a,	// (0x0005811b) main_fmradio_pane_t

0xdba7,	// (0x00056798) wait_bar_pane_cp03

0xdbaf,	// (0x000567a0) cell_fmradio_pane_ParamLimits

0xdbaf,	// (0x000567a0) cell_fmradio_pane

0xda16,	// (0x00056607) cell_fmradio_pane_g1_ParamLimits

0xda16,	// (0x00056607) cell_fmradio_pane_g1

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp011

0xdbc2,	// (0x000567b3) poc_content_pane_ParamLimits

0xdbc2,	// (0x000567b3) poc_content_pane

0xdbd4,	// (0x000567c5) scroll_pane_cp019

0x7d85,	// (0x00050976) popup_call_poc_act_window_ParamLimits

0x7d85,	// (0x00050976) popup_call_poc_act_window

0x7d92,	// (0x00050983) popup_call_poc_inact_window_ParamLimits

0x7d92,	// (0x00050983) popup_call_poc_inact_window

0xf5c7,	// (0x000581b8) bg_popup_call_poc_act_pane_g

0xeaac,	// (0x0005769d) bg_popup_call_poc_inact_pane_g1

0xeab4,	// (0x000576a5) bg_popup_call_poc_inact_pane_g2

0xdbdc,	// (0x000567cd) popup_call_poc_act_window_g2

0xeabc,	// (0x000576ad) bg_popup_call_poc_inact_pane_g3

0xeac4,	// (0x000576b5) bg_popup_call_poc_inact_pane_g4

0xeacc,	// (0x000576bd) bg_popup_call_poc_inact_pane_g5

0xdbe4,	// (0x000567d5) popup_call_poc_act_window_t1_ParamLimits

0xdbe4,	// (0x000567d5) popup_call_poc_act_window_t1

0xdc0c,	// (0x000567fd) popup_call_poc_act_window_t2_ParamLimits

0xdc0c,	// (0x000567fd) popup_call_poc_act_window_t2

0xdc34,	// (0x00056825) popup_call_poc_act_window_t3_ParamLimits

0xdc34,	// (0x00056825) popup_call_poc_act_window_t3

0xdc5c,	// (0x0005684d) popup_call_poc_act_window_t4_ParamLimits

0xdc5c,	// (0x0005684d) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00058126) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00058126) popup_call_poc_act_window_t

0xead4,	// (0x000576c5) bg_popup_call_poc_inact_pane_g6

0xeadc,	// (0x000576cd) bg_popup_call_poc_inact_pane_g7

0xeae4,	// (0x000576d5) bg_popup_call_poc_inact_pane_g8

0xdc6e,	// (0x0005685f) popup_call_poc_inact_window_g2

0xeaec,	// (0x000576dd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x000581a5) bg_popup_call_poc_inact_pane_g

0xdc76,	// (0x00056867) popup_call_poc_inact_window_t1_ParamLimits

0xdc76,	// (0x00056867) popup_call_poc_inact_window_t1

0xdc8b,	// (0x0005687c) popup_call_poc_inact_window_t2_ParamLimits

0xdc8b,	// (0x0005687c) popup_call_poc_inact_window_t2

0xdca0,	// (0x00056891) popup_call_poc_inact_window_t3_ParamLimits

0xdca0,	// (0x00056891) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0005812f) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0005812f) popup_call_poc_inact_window_t

0xecb2,	// (0x000578a3) context_pane_ParamLimits

0x8382,	// (0x00050f73) signal_pane_ParamLimits

0xd86b,	// (0x0005645c) main_call2_pane

0xeca0,	// (0x00057891) popup_phob_thumbnail2_window_ParamLimits

0xeca0,	// (0x00057891) popup_phob_thumbnail2_window

0x7a5f,	// (0x00050650) aid_hotspot_pointer_arrow_pane

0x7a67,	// (0x00050658) aid_hotspot_pointer_hand_pane

0x80b4,	// (0x00050ca5) phob_pre_status_pane_g5

0x5c91,	// (0x0004e882) cams_zoom_pane_ParamLimits

0x5c9d,	// (0x0004e88e) image_vga_pane_ParamLimits

0x5cac,	// (0x0004e89d) main_camera_pane_g1_ParamLimits

0x5cba,	// (0x0004e8ab) main_camera_pane_g2_ParamLimits

0x5cc6,	// (0x0004e8b7) main_camera_pane_g3_ParamLimits

0x5cd2,	// (0x0004e8c3) main_camera_pane_g4_ParamLimits

0x5cde,	// (0x0004e8cf) main_camera_pane_g5_ParamLimits

0x5cea,	// (0x0004e8db) main_camera_pane_g6_ParamLimits

0x5cf6,	// (0x0004e8e7) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00057e2e) main_camera_pane_g_ParamLimits

0x5d0e,	// (0x0004e8ff) main_camera_pane_t1_ParamLimits

0x5d20,	// (0x0004e911) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00057e3f) main_camera_pane_t_ParamLimits

0x5036,	// (0x0004dc27) bg_popup_preview_window_pane_cp01_ParamLimits

0x5036,	// (0x0004dc27) bg_popup_preview_window_pane_cp01

0xdcb5,	// (0x000568a6) popup_phob_thumbnail2_window_g1_ParamLimits

0xdcb5,	// (0x000568a6) popup_phob_thumbnail2_window_g1

0x4ddb,	// (0x0004d9cc) call2_cli_visual_pane

0x7dae,	// (0x0005099f) popup_call2_audio_conf_window_ParamLimits

0x7dae,	// (0x0005099f) popup_call2_audio_conf_window

0x7dc3,	// (0x000509b4) popup_call2_audio_first_window_ParamLimits

0x7dc3,	// (0x000509b4) popup_call2_audio_first_window

0x7e61,	// (0x00050a52) popup_call2_audio_in_window_ParamLimits

0x7e61,	// (0x00050a52) popup_call2_audio_in_window

0x7ea3,	// (0x00050a94) popup_call2_audio_out_window_ParamLimits

0x7ea3,	// (0x00050a94) popup_call2_audio_out_window

0x7f05,	// (0x00050af6) popup_call2_audio_second_window_ParamLimits

0x7f05,	// (0x00050af6) popup_call2_audio_second_window

0x7f63,	// (0x00050b54) popup_call2_audio_wait_window_ParamLimits

0x7f63,	// (0x00050b54) popup_call2_audio_wait_window

0x4ddb,	// (0x0004d9cc) bg_popup_call2_act_pane_cp03

0x5018,	// (0x0004dc09) list_conf_pane_cp

0xdcc1,	// (0x000568b2) popup_call2_audio_conf_window_t1

0xd65c,	// (0x0005624d) list_single_graphic_popup_conf2_pane_ParamLimits

0xd65c,	// (0x0005624d) list_single_graphic_popup_conf2_pane

0xd66f,	// (0x00056260) list_highlight_pane_cp04

0xdccf,	// (0x000568c0) list_single_graphic_popup_conf2_pane_g1

0xd680,	// (0x00056271) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00058136) list_single_graphic_popup_conf2_pane_g

0xdcd9,	// (0x000568ca) list_single_graphic_popup_conf2_pane_t1

0xdce7,	// (0x000568d8) bg_popup_call2_act_pane_cp01_ParamLimits

0xdce7,	// (0x000568d8) bg_popup_call2_act_pane_cp01

0xdd71,	// (0x00056962) call_type_pane_cp05_ParamLimits

0xdd71,	// (0x00056962) call_type_pane_cp05

0xddc5,	// (0x000569b6) popup_call2_audio_second_window_g1_ParamLimits

0xddc5,	// (0x000569b6) popup_call2_audio_second_window_g1

0xde19,	// (0x00056a0a) popup_call2_audio_second_window_g2_ParamLimits

0xde19,	// (0x00056a0a) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0005813b) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0005813b) popup_call2_audio_second_window_g

0xde7e,	// (0x00056a6f) popup_call2_audio_second_window_t1_ParamLimits

0xde7e,	// (0x00056a6f) popup_call2_audio_second_window_t1

0xdf39,	// (0x00056b2a) popup_call2_audio_second_window_t2_ParamLimits

0xdf39,	// (0x00056b2a) popup_call2_audio_second_window_t2

0xdf8c,	// (0x00056b7d) popup_call2_audio_second_window_t3_ParamLimits

0xdf8c,	// (0x00056b7d) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00058142) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00058142) popup_call2_audio_second_window_t

0x4ddb,	// (0x0004d9cc) bg_popup_call2_in_pane_cp02

0x4de5,	// (0x0004d9d6) call_type_pane_cp04

0x4ded,	// (0x0004d9de) popup_call2_audio_wait_window_g1

0x4df5,	// (0x0004d9e6) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00057d1b) popup_call2_audio_wait_window_g

0x4dfd,	// (0x0004d9ee) popup_call2_audio_wait_window_t3

0xe07f,	// (0x00056c70) bg_popup_call2_act_pane_ParamLimits

0xe07f,	// (0x00056c70) bg_popup_call2_act_pane

0xe13f,	// (0x00056d30) call_type_pane_cp03_ParamLimits

0xe13f,	// (0x00056d30) call_type_pane_cp03

0xe1a3,	// (0x00056d94) popup_call2_audio_first_window_g1_ParamLimits

0xe1a3,	// (0x00056d94) popup_call2_audio_first_window_g1

0xe213,	// (0x00056e04) popup_call2_audio_first_window_g2_ParamLimits

0xe213,	// (0x00056e04) popup_call2_audio_first_window_g2

0xd588,	// (0x00056179) popup_call2_audio_first_window_g3_ParamLimits

0xd588,	// (0x00056179) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0005814b) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0005814b) popup_call2_audio_first_window_g

0xe2f1,	// (0x00056ee2) popup_call2_audio_first_window_t1_ParamLimits

0xe2f1,	// (0x00056ee2) popup_call2_audio_first_window_t1

0xe3f4,	// (0x00056fe5) popup_call2_audio_first_window_t4_ParamLimits

0xe3f4,	// (0x00056fe5) popup_call2_audio_first_window_t4

0xe4d7,	// (0x000570c8) popup_call2_audio_first_window_t5_ParamLimits

0xe4d7,	// (0x000570c8) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00058156) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00058156) popup_call2_audio_first_window_t

0x502e,	// (0x0004dc1f) bg_popup_call2_act_pane_g1

0xeb44,	// (0x00057735) popup_cale_lunar_info_window_t1

0xeb52,	// (0x00057743) popup_cale_lunar_info_window_t2

0xeb60,	// (0x00057751) popup_cale_lunar_info_window_t3

0x4ddb,	// (0x0004d9cc) bg_popup_call2_bubble_pane

0xe5d8,	// (0x000571c9) bg_popup_call2_in_pane_cp01_ParamLimits

0xe5d8,	// (0x000571c9) bg_popup_call2_in_pane_cp01

0x4a93,	// (0x0004d684) call_type_pane_cp02

0xe620,	// (0x00057211) popup_call2_audio_out_window_g1_ParamLimits

0xe620,	// (0x00057211) popup_call2_audio_out_window_g1

0xe64c,	// (0x0005723d) popup_call2_audio_out_window_g2_ParamLimits

0xe64c,	// (0x0005723d) popup_call2_audio_out_window_g2

0xe674,	// (0x00057265) popup_call2_audio_out_window_g3_ParamLimits

0xe674,	// (0x00057265) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0005815f) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0005815f) popup_call2_audio_out_window_g

0xe6af,	// (0x000572a0) popup_call2_audio_out_window_t1_ParamLimits

0xe6af,	// (0x000572a0) popup_call2_audio_out_window_t1

0xe70e,	// (0x000572ff) popup_call2_audio_out_window_t2_ParamLimits

0xe70e,	// (0x000572ff) popup_call2_audio_out_window_t2

0xe762,	// (0x00057353) popup_call2_audio_out_window_t3_ParamLimits

0xe762,	// (0x00057353) popup_call2_audio_out_window_t3

0xe778,	// (0x00057369) popup_call2_audio_out_window_t4_ParamLimits

0xe778,	// (0x00057369) popup_call2_audio_out_window_t4

0xe78e,	// (0x0005737f) popup_call2_audio_out_window_t5_ParamLimits

0xe78e,	// (0x0005737f) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00058168) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00058168) popup_call2_audio_out_window_t

0xe7f2,	// (0x000573e3) bg_popup_call2_in_pane_ParamLimits

0xe7f2,	// (0x000573e3) bg_popup_call2_in_pane

0xe84e,	// (0x0005743f) popup_call2_audio_in_window_g1_ParamLimits

0xe84e,	// (0x0005743f) popup_call2_audio_in_window_g1

0xe886,	// (0x00057477) popup_call2_audio_in_window_g2_ParamLimits

0xe886,	// (0x00057477) popup_call2_audio_in_window_g2

0xe8be,	// (0x000574af) popup_call2_audio_in_window_g3_ParamLimits

0xe8be,	// (0x000574af) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00058175) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00058175) popup_call2_audio_in_window_g

0xe916,	// (0x00057507) popup_call2_audio_in_window_t1_ParamLimits

0xe916,	// (0x00057507) popup_call2_audio_in_window_t1

0xe996,	// (0x00057587) popup_call2_audio_in_window_t2_ParamLimits

0xe996,	// (0x00057587) popup_call2_audio_in_window_t2

0xea16,	// (0x00057607) popup_call2_audio_in_window_t3_ParamLimits

0xea16,	// (0x00057607) popup_call2_audio_in_window_t3

0xea30,	// (0x00057621) popup_call2_audio_in_window_t4_ParamLimits

0xea30,	// (0x00057621) popup_call2_audio_in_window_t4

0xea42,	// (0x00057633) popup_call2_audio_in_window_t5_ParamLimits

0xea42,	// (0x00057633) popup_call2_audio_in_window_t5

0xea57,	// (0x00057648) popup_call2_audio_in_window_t6_ParamLimits

0xea57,	// (0x00057648) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0005817e) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0005817e) popup_call2_audio_in_window_t

0x502e,	// (0x0004dc1f) bg_popup_call2_in_pane_g1

0xeb6e,	// (0x0005775f) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000581e6) popup_cale_lunar_info_window_t

0x5036,	// (0x0004dc27) bg_popup_call2_rect_pane_ParamLimits

0x5036,	// (0x0004dc27) bg_popup_call2_rect_pane

0x4ddb,	// (0x0004d9cc) call2_cli_visual_graphic_pane

0x4ddb,	// (0x0004d9cc) call2_cli_visual_text_pane

0x8428,	// (0x00051019) smil_status_volume_pane_g3

0x0002,

0x551e,	// (0x0004e10f) call2_cli_visual_graphic_pane_g1

0x551e,	// (0x0004e10f) call2_cli_visual_graphic_pane_g2

0x551e,	// (0x0004e10f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0005818b) call2_cli_visual_graphic_pane_g

0xea6c,	// (0x0005765d) bg_popup_call2_rect_pane_g1

0x5652,	// (0x0004e243) bg_popup_call2_rect_pane_g2

0xea74,	// (0x00057665) bg_popup_call2_rect_pane_g3

0xea7c,	// (0x0005766d) bg_popup_call2_rect_pane_g4

0xea84,	// (0x00057675) bg_popup_call2_rect_pane_g5

0xea8c,	// (0x0005767d) bg_popup_call2_rect_pane_g6

0xea94,	// (0x00057685) bg_popup_call2_rect_pane_g7

0xea9c,	// (0x0005768d) bg_popup_call2_rect_pane_g8

0xeaa4,	// (0x00057695) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00058192) bg_popup_call2_rect_pane_g

0xeaac,	// (0x0005769d) bg_popup_call2_bubble_pane_g1

0xeab4,	// (0x000576a5) bg_popup_call2_bubble_pane_g2

0xeabc,	// (0x000576ad) bg_popup_call2_bubble_pane_g3

0xeac4,	// (0x000576b5) bg_popup_call2_bubble_pane_g4

0xeacc,	// (0x000576bd) bg_popup_call2_bubble_pane_g5

0xead4,	// (0x000576c5) bg_popup_call2_bubble_pane_g6

0xeadc,	// (0x000576cd) bg_popup_call2_bubble_pane_g7

0xeae4,	// (0x000576d5) bg_popup_call2_bubble_pane_g8

0xeaec,	// (0x000576dd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000581a5) bg_popup_call2_bubble_pane_g

0x573e,	// (0x0004e32f) aid_cale_week_size_cell_pane

0x5d32,	// (0x0004e923) aid_cams_cif_uncrop_pane_ParamLimits

0x5d32,	// (0x0004e923) aid_cams_cif_uncrop_pane

0x5ecd,	// (0x0004eabe) aid_cams_size_cell_ParamLimits

0x5ecd,	// (0x0004eabe) aid_cams_size_cell

0x5ed9,	// (0x0004eaca) grid_cams_pane_ParamLimits

0x5ee7,	// (0x0004ead8) linegrid_cams_pane_ParamLimits

0x6029,	// (0x0004ec1a) call_video_pane_t1

0x6042,	// (0x0004ec33) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00057e92) call_video_pane_t

0x6759,	// (0x0004f34a) aid_cale_month_size_cell_pane_ParamLimits

0x6759,	// (0x0004f34a) aid_cale_month_size_cell_pane

0xf63e,	// (0x0005822f) smil_status_volume_pane_g

0x8435,	// (0x00051026) volume_smil_pane_ParamLimits

0x4665,	// (0x0004d256) aid_popup2_width_pane

0x55b3,	// (0x0004e1a4) cell_qdial_pane_g4_ParamLimits

0x55b3,	// (0x0004e1a4) cell_qdial_pane_g4

0x733b,	// (0x0004ff2c) aid_blid_cardinal_pane_ParamLimits

0x734b,	// (0x0004ff3c) aid_blid_destination_pane_ParamLimits

0x734b,	// (0x0004ff3c) aid_blid_destination_pane

0x5036,	// (0x0004dc27) bg_popup_call_poc_act_pane_ParamLimits

0x5036,	// (0x0004dc27) bg_popup_call_poc_act_pane

0x5036,	// (0x0004dc27) bg_popup_call_poc_inact_pane_ParamLimits

0x5036,	// (0x0004dc27) bg_popup_call_poc_inact_pane

0xeaf4,	// (0x000576e5) bg_popup_call_poc_act_pane_g1

0xeafc,	// (0x000576ed) bg_popup_call_poc_act_pane_g2

0xeb04,	// (0x000576f5) bg_popup_call_poc_act_pane_g3

0xeac4,	// (0x000576b5) bg_popup_call_poc_act_pane_g4

0xeacc,	// (0x000576bd) bg_popup_call_poc_act_pane_g5

0xeb0c,	// (0x000576fd) bg_popup_call_poc_act_pane_g6

0xeadc,	// (0x000576cd) bg_popup_call_poc_act_pane_g7

0xeb14,	// (0x00057705) bg_popup_call_poc_act_pane_g8

0x4ddb,	// (0x0004d9cc) main_usb_pane

0xec7b,	// (0x0005786c) popup_cale_lunar_info_window

0x6349,	// (0x0004ef3a) im_reading_pane_t1_ParamLimits

0x639d,	// (0x0004ef8e) list_im_pane_ParamLimits

0x63ae,	// (0x0004ef9f) scroll_pane_cp07_ParamLimits

0x4ddb,	// (0x0004d9cc) grid_highlight_pane_cp012

0x5036,	// (0x0004dc27) mup_scale_pane_ParamLimits

0xd588,	// (0x00056179) main_usb_pane_g1_ParamLimits

0xd588,	// (0x00056179) main_usb_pane_g1

0x7fd7,	// (0x00050bc8) main_usb_pane_g2_ParamLimits

0x7fd7,	// (0x00050bc8) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000581cf) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000581cf) main_usb_pane_g

0x7fe3,	// (0x00050bd4) main_usb_pane_t1_ParamLimits

0x7fe3,	// (0x00050bd4) main_usb_pane_t1

0x7ff5,	// (0x00050be6) main_usb_pane_t2_ParamLimits

0x7ff5,	// (0x00050be6) main_usb_pane_t2

0x8007,	// (0x00050bf8) main_usb_pane_t3_ParamLimits

0x8007,	// (0x00050bf8) main_usb_pane_t3

0x8019,	// (0x00050c0a) main_usb_pane_t4_ParamLimits

0x8019,	// (0x00050c0a) main_usb_pane_t4

0x802b,	// (0x00050c1c) main_usb_pane_t5_ParamLimits

0x802b,	// (0x00050c1c) main_usb_pane_t5

0x803d,	// (0x00050c2e) main_usb_pane_t6_ParamLimits

0x803d,	// (0x00050c2e) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000581d4) main_usb_pane_t_ParamLimits

0x72e1,	// (0x0004fed2) aid_text_placing

0x72ed,	// (0x0004fede) main_location2_pane_t1_ParamLimits

0x7301,	// (0x0004fef2) main_location2_pane_t2_ParamLimits

0x7315,	// (0x0004ff06) main_location2_pane_t3_ParamLimits

0x7329,	// (0x0004ff1a) main_location2_pane_t4_ParamLimits

0x7329,	// (0x0004ff1a) main_location2_pane_t4

0xf402,	// (0x00057ff3) main_location2_pane_t_ParamLimits

0x5112,	// (0x0004dd03) find_pinb_pane_g2_ParamLimits

0x5112,	// (0x0004dd03) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00057d41) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00057d41) find_pinb_pane_g

0x511e,	// (0x0004dd0f) find_pinb_pane_t1_ParamLimits

0x5130,	// (0x0004dd21) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00057d46) find_pinb_pane_t_ParamLimits

0x4ddb,	// (0x0004d9cc) main_call3_pane

0x6ada,	// (0x0004f6cb) cale_month_day_heading_pane_t1_ParamLimits

0x6b38,	// (0x0004f729) cale_month_day_heading_pane_t2_ParamLimits

0x6b9d,	// (0x0004f78e) cale_month_day_heading_pane_t3_ParamLimits

0x6c02,	// (0x0004f7f3) cale_month_day_heading_pane_t4_ParamLimits

0x6c67,	// (0x0004f858) cale_month_day_heading_pane_t5_ParamLimits

0x6ccc,	// (0x0004f8bd) cale_month_day_heading_pane_t6_ParamLimits

0x6d31,	// (0x0004f922) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00057eca) cale_month_day_heading_pane_t_ParamLimits

0xd279,	// (0x00055e6a) smil_status_volume_pane

0x7b9b,	// (0x0005078c) postcard_address_pane_ParamLimits

0x7b9b,	// (0x0005078c) postcard_address_pane

0x7ba7,	// (0x00050798) postcard_message_pane_ParamLimits

0x7ba7,	// (0x00050798) postcard_message_pane

0x7fa2,	// (0x00050b93) call2_cli_visual_pane_t1_ParamLimits

0x7fa2,	// (0x00050b93) call2_cli_visual_pane_t1

0x858c,	// (0x0005117d) postcard_message_pane_t1_ParamLimits

0x858c,	// (0x0005117d) postcard_message_pane_t1

0x8575,	// (0x00051166) postcard_address_pane_t1_ParamLimits

0x8575,	// (0x00051166) postcard_address_pane_t1

0x8566,	// (0x00051157) popup_call3_audio_in_window_ParamLimits

0x8566,	// (0x00051157) popup_call3_audio_in_window

0x844a,	// (0x0005103b) bg_popup_call3_in_pane_ParamLimits

0x844a,	// (0x0005103b) bg_popup_call3_in_pane

0x84ac,	// (0x0005109d) popup_call3_audio_in_window_g1_ParamLimits

0x84ac,	// (0x0005109d) popup_call3_audio_in_window_g1

0x84c4,	// (0x000510b5) popup_call3_audio_in_window_g2_ParamLimits

0x84c4,	// (0x000510b5) popup_call3_audio_in_window_g2

0x84dc,	// (0x000510cd) popup_call3_audio_in_window_g3_ParamLimits

0x84dc,	// (0x000510cd) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00058236) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00058236) popup_call3_audio_in_window_g

0x8504,	// (0x000510f5) popup_call3_audio_in_window_t1_ParamLimits

0x8504,	// (0x000510f5) popup_call3_audio_in_window_t1

0x852c,	// (0x0005111d) popup_call3_audio_in_window_t2_ParamLimits

0x852c,	// (0x0005111d) popup_call3_audio_in_window_t2

0x8554,	// (0x00051145) popup_call3_audio_in_window_t3_ParamLimits

0x8554,	// (0x00051145) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0005823f) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0005823f) popup_call3_audio_in_window_t

0xd86b,	// (0x0005645c) bg_popup_call3_rect_pane

0xea6c,	// (0x0005765d) bg_popup_call3_rect_pane_g1

0x5652,	// (0x0004e243) bg_popup_call3_rect_pane_g2

0xea74,	// (0x00057665) bg_popup_call3_rect_pane_g3

0xea7c,	// (0x0005766d) bg_popup_call3_rect_pane_g4

0xea84,	// (0x00057675) bg_popup_call3_rect_pane_g5

0xea8c,	// (0x0005767d) bg_popup_call3_rect_pane_g6

0xea94,	// (0x00057685) bg_popup_call3_rect_pane_g7

0x773b,	// (0x0005032c) mup_visualizer_osc_pane

0xd92a,	// (0x0005651b) mup_visualizer_spec_pane

0x846a,	// (0x0005105b) call3_video_qcif_pane_ParamLimits

0x846a,	// (0x0005105b) call3_video_qcif_pane

0x847c,	// (0x0005106d) call3_video_qcif_uncrop_pane_ParamLimits

0x847c,	// (0x0005106d) call3_video_qcif_uncrop_pane

0x848a,	// (0x0005107b) call3_video_subqcif_pane_ParamLimits

0x848a,	// (0x0005107b) call3_video_subqcif_pane

0x849c,	// (0x0005108d) call3_video_subqcif_uncrop_pane_ParamLimits

0x849c,	// (0x0005108d) call3_video_subqcif_uncrop_pane

0x84f4,	// (0x000510e5) popup_call3_audio_in_window_g4_ParamLimits

0x84f4,	// (0x000510e5) popup_call3_audio_in_window_g4

0x8417,	// (0x00051008) mup_spec_half_pane

0x8420,	// (0x00051011) mup_spec_half_pane_cp

0xed12,	// (0x00057903) mup_osc_middle_pane

0xed1b,	// (0x0005790c) mup_visualizer_osc_pane_g1

0x83f8,	// (0x00050fe9) mup_spec_bar_pane_ParamLimits

0x83f8,	// (0x00050fe9) mup_spec_bar_pane

0xecff,	// (0x000578f0) mup_spec_bar_pane_g1

0xed09,	// (0x000578fa) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0005822a) mup_spec_bar_pane_g

0x573e,	// (0x0004e32f) aid_cale_week_size_cell_pane_ParamLimits

0x5751,	// (0x0004e342) bg_cale_heading_pane_ParamLimits

0x5765,	// (0x0004e356) bg_cale_pane_cp01_ParamLimits

0x577e,	// (0x0004e36f) cale_week_corner_pane_ParamLimits

0x5794,	// (0x0004e385) cale_week_day_heading_pane_ParamLimits

0x57a8,	// (0x0004e399) cale_week_scroll_pane_g1_ParamLimits

0x57b9,	// (0x0004e3aa) cale_week_scroll_pane_g2_ParamLimits

0x57ca,	// (0x0004e3bb) cale_week_scroll_pane_g3_ParamLimits

0x57db,	// (0x0004e3cc) cale_week_scroll_pane_g4_ParamLimits

0x57ec,	// (0x0004e3dd) cale_week_scroll_pane_g5_ParamLimits

0x57fd,	// (0x0004e3ee) cale_week_scroll_pane_g6_ParamLimits

0x580e,	// (0x0004e3ff) cale_week_scroll_pane_g7_ParamLimits

0x5821,	// (0x0004e412) cale_week_scroll_pane_g8_ParamLimits

0x5834,	// (0x0004e425) cale_week_scroll_pane_g9_ParamLimits

0x5845,	// (0x0004e436) cale_week_scroll_pane_g10_ParamLimits

0x5856,	// (0x0004e447) cale_week_scroll_pane_g11_ParamLimits

0x5867,	// (0x0004e458) cale_week_scroll_pane_g12_ParamLimits

0x5878,	// (0x0004e469) cale_week_scroll_pane_g13_ParamLimits

0x5889,	// (0x0004e47a) cale_week_scroll_pane_g14_ParamLimits

0x589a,	// (0x0004e48b) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00057dd2) cale_week_scroll_pane_g_ParamLimits

0x58ab,	// (0x0004e49c) cale_week_time_pane_ParamLimits

0x58be,	// (0x0004e4af) grid_cale_week_pane_ParamLimits

0x58d3,	// (0x0004e4c4) listscroll_cale_week_pane_t1

0x58e5,	// (0x0004e4d6) scroll_pane_cp08_ParamLimits

0x67bd,	// (0x0004f3ae) cale_month_corner_pane_ParamLimits

0x6a87,	// (0x0004f678) cale_month_pane_t1

0x6a99,	// (0x0004f68a) cale_month_week_pane_ParamLimits

0xd588,	// (0x00056179) popup_call_status_window_g1_ParamLimits

0x7110,	// (0x0004fd01) popup_call_status_window_g2_ParamLimits

0x711c,	// (0x0004fd0d) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00057f7a) popup_call_status_window_g_ParamLimits

0xd5ef,	// (0x000561e0) aid_call2_pane

0x79da,	// (0x000505cb) msg_header_pane_g1

0x7b9b,	// (0x0005078c) postcard_address2_pane_ParamLimits

0x7b9b,	// (0x0005078c) postcard_address2_pane

0x7ba7,	// (0x00050798) postcard_message2_pane_ParamLimits

0x7ba7,	// (0x00050798) postcard_message2_pane

0x8390,	// (0x00050f81) message2_row_pane_ParamLimits

0x8390,	// (0x00050f81) message2_row_pane

0x83ab,	// (0x00050f9c) address2_row_pane_ParamLimits

0x83ab,	// (0x00050f9c) address2_row_pane

0xeccd,	// (0x000578be) postcard_message2_row_pane_g1

0xecd5,	// (0x000578c6) postcard_message2_row_pane_t1

0xeccd,	// (0x000578be) address2_row_pane_g1

0xecd5,	// (0x000578c6) address2_row_pane_t1

0x5be8,	// (0x0004e7d9) aid_size_cell_vorec

0x4ddb,	// (0x0004d9cc) main_rss_pane

0x83be,	// (0x00050faf) rss_list_single_pane_ParamLimits

0x83be,	// (0x00050faf) rss_list_single_pane

0xece3,	// (0x000578d4) rss_list_single_pane_t1

0xecf1,	// (0x000578e2) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00058225) rss_list_single_pane_t

0x4ddb,	// (0x0004d9cc) main_camera2_pane

0x4ddb,	// (0x0004d9cc) main_video2_pane

0x85f0,	// (0x000511e1) cams_zoom_pane_cp2_ParamLimits

0x85f0,	// (0x000511e1) cams_zoom_pane_cp2

0x85fc,	// (0x000511ed) image2_vga_pane_ParamLimits

0x85fc,	// (0x000511ed) image2_vga_pane

0x860b,	// (0x000511fc) main_camera2_pane_g1_ParamLimits

0x860b,	// (0x000511fc) main_camera2_pane_g1

0x8617,	// (0x00051208) main_camera2_pane_g2_ParamLimits

0x8617,	// (0x00051208) main_camera2_pane_g2

0x8623,	// (0x00051214) main_camera2_pane_g3_ParamLimits

0x8623,	// (0x00051214) main_camera2_pane_g3

0x862f,	// (0x00051220) main_camera2_pane_g4_ParamLimits

0x862f,	// (0x00051220) main_camera2_pane_g4

0x863b,	// (0x0005122c) main_camera2_pane_g5_ParamLimits

0x863b,	// (0x0005122c) main_camera2_pane_g5

0x8647,	// (0x00051238) main_camera2_pane_g6_ParamLimits

0x8647,	// (0x00051238) main_camera2_pane_g6

0x8653,	// (0x00051244) main_camera2_pane_g7_ParamLimits

0x8653,	// (0x00051244) main_camera2_pane_g7

0x865f,	// (0x00051250) main_camera2_pane_g8_ParamLimits

0x865f,	// (0x00051250) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00058246) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00058246) main_camera2_pane_g

0x8677,	// (0x00051268) main_camera2_pane_t1_ParamLimits

0x8677,	// (0x00051268) main_camera2_pane_t1

0x8689,	// (0x0005127a) main_camera2_pane_t2_ParamLimits

0x8689,	// (0x0005127a) main_camera2_pane_t2

0x869b,	// (0x0005128c) main_camera2_pane_t3_ParamLimits

0x869b,	// (0x0005128c) main_camera2_pane_t3

0x86ad,	// (0x0005129e) main_camera2_pane_t4_ParamLimits

0x86ad,	// (0x0005129e) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00058259) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00058259) main_camera2_pane_t

0x870f,	// (0x00051300) cams_zoom_pane_cp4_ParamLimits

0x870f,	// (0x00051300) cams_zoom_pane_cp4

0x871f,	// (0x00051310) image2_cif_pane_ParamLimits

0x871f,	// (0x00051310) image2_cif_pane

0x8734,	// (0x00051325) image2_subqcif_pane_ParamLimits

0x8734,	// (0x00051325) image2_subqcif_pane

0x8743,	// (0x00051334) main_video2_pane_g1_ParamLimits

0x8743,	// (0x00051334) main_video2_pane_g1

0x8755,	// (0x00051346) main_video2_pane_g2_ParamLimits

0x8755,	// (0x00051346) main_video2_pane_g2

0x8765,	// (0x00051356) main_video2_pane_g3_ParamLimits

0x8765,	// (0x00051356) main_video2_pane_g3

0x8775,	// (0x00051366) main_video2_pane_g4_ParamLimits

0x8775,	// (0x00051366) main_video2_pane_g4

0x8785,	// (0x00051376) main_video2_pane_g5_ParamLimits

0x8785,	// (0x00051376) main_video2_pane_g5

0x8795,	// (0x00051386) main_video2_pane_g6_ParamLimits

0x8795,	// (0x00051386) main_video2_pane_g6

0x0005,

0xf677,	// (0x00058268) main_video2_pane_g_ParamLimits

0xf677,	// (0x00058268) main_video2_pane_g

0x87a7,	// (0x00051398) main_video2_pane_t1_ParamLimits

0x87a7,	// (0x00051398) main_video2_pane_t1

0x87c1,	// (0x000513b2) main_video2_pane_t2_ParamLimits

0x87c1,	// (0x000513b2) main_video2_pane_t2

0x87e7,	// (0x000513d8) main_video2_pane_t3_ParamLimits

0x87e7,	// (0x000513d8) main_video2_pane_t3

0x0002,

0xf684,	// (0x00058275) main_video2_pane_t_ParamLimits

0xf684,	// (0x00058275) main_video2_pane_t

0x80f4,	// (0x00050ce5) call_muted_g2

0x0001,

0xf626,	// (0x00058217) call_muted_g

0x4ddb,	// (0x0004d9cc) main_mup2_pane

0xed52,	// (0x00057943) main_mup2_pane_g1_ParamLimits

0xed52,	// (0x00057943) main_mup2_pane_g1

0x880d,	// (0x000513fe) main_mup2_pane_g2_ParamLimits

0x880d,	// (0x000513fe) main_mup2_pane_g2

0x8a8f,	// (0x00051680) main_mup_pane_g13_cp1

0x8a97,	// (0x00051688) mup_volume_pane_cp1

0x882d,	// (0x0005141e) main_mup2_pane_g4_ParamLimits

0x882d,	// (0x0005141e) main_mup2_pane_g4

0x8842,	// (0x00051433) main_mup2_pane_g5_ParamLimits

0x8842,	// (0x00051433) main_mup2_pane_g5

0x8857,	// (0x00051448) main_mup2_pane_g6_ParamLimits

0x8857,	// (0x00051448) main_mup2_pane_g6

0x886c,	// (0x0005145d) main_mup2_pane_g7_ParamLimits

0x886c,	// (0x0005145d) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0005827c) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0005827c) main_mup2_pane_g

0x8888,	// (0x00051479) main_mup2_pane_t1_ParamLimits

0x8888,	// (0x00051479) main_mup2_pane_t1

0x889f,	// (0x00051490) main_mup2_pane_t2_ParamLimits

0x889f,	// (0x00051490) main_mup2_pane_t2

0x88b6,	// (0x000514a7) main_mup2_pane_t3_ParamLimits

0x88b6,	// (0x000514a7) main_mup2_pane_t3

0x88cd,	// (0x000514be) main_mup2_pane_t4_ParamLimits

0x88cd,	// (0x000514be) main_mup2_pane_t4

0x88e7,	// (0x000514d8) main_mup2_pane_t5_ParamLimits

0x88e7,	// (0x000514d8) main_mup2_pane_t5

0x8901,	// (0x000514f2) main_mup2_pane_t6_ParamLimits

0x8901,	// (0x000514f2) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0005828b) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0005828b) main_mup2_pane_t

0x8939,	// (0x0005152a) mup2_visualizer_pane_ParamLimits

0x8939,	// (0x0005152a) mup2_visualizer_pane

0x896f,	// (0x00051560) mup_progress_pane_cp_ParamLimits

0x896f,	// (0x00051560) mup_progress_pane_cp

0x8a7a,	// (0x0005166b) mup_volume_pane_cp_ParamLimits

0x8a7a,	// (0x0005166b) mup_volume_pane_cp

0x8986,	// (0x00051577) mup2_visualizer_pane_g1_ParamLimits

0x8986,	// (0x00051577) mup2_visualizer_pane_g1

0xed5e,	// (0x0005794f) mup2_visualizer_pane_g2_ParamLimits

0xed5e,	// (0x0005794f) mup2_visualizer_pane_g2

0x899b,	// (0x0005158c) mup2_visualizer_pane_g3_ParamLimits

0x899b,	// (0x0005158c) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00058298) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00058298) mup2_visualizer_pane_g

0xdb51,	// (0x00056742) aid_size_cell_fmradio

0x820a,	// (0x00050dfb) aid_height_parent_landcape

0x6474,	// (0x0004f065) wml_content_pane_cp

0x647c,	// (0x0004f06d) wml_tabs_pane

0x6485,	// (0x0004f076) popup_wml_miniature_window

0x648d,	// (0x0004f07e) scroll_pane_cp021

0x64a1,	// (0x0004f092) wml_content_pane_comp8

0x4ddb,	// (0x0004d9cc) bg_popup_sub_pane_cp05

0xed7c,	// (0x0005796d) popup_wml_miniature_window_g1

0xed84,	// (0x00057975) wml_miniature_view_pane

0x89a9,	// (0x0005159a) aid_size_wml_view

0x89b1,	// (0x000515a2) wml_miniature_view_pane_g1

0x89ba,	// (0x000515ab) wml_miniature_view_pane_g2

0x89c3,	// (0x000515b4) wml_miniature_view_pane_g3

0x89cb,	// (0x000515bc) wml_miniature_view_pane_g4

0x89d3,	// (0x000515c4) wml_miniature_view_pane_g5

0x89db,	// (0x000515cc) wml_miniature_view_pane_g6

0x89e3,	// (0x000515d4) wml_miniature_view_pane_g7

0x89eb,	// (0x000515dc) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0005829f) wml_miniature_view_pane_g

0xed52,	// (0x00057943) background_graphic_ParamLimits

0xed52,	// (0x00057943) background_graphic

0xed8c,	// (0x0005797d) wml_tabs_2_pane

0xed95,	// (0x00057986) wml_tabs_3_pane_ParamLimits

0xed95,	// (0x00057986) wml_tabs_3_pane

0xeda7,	// (0x00057998) wml_tabs_4_pane_ParamLimits

0xeda7,	// (0x00057998) wml_tabs_4_pane

0xedbd,	// (0x000579ae) wml_tabs_5_pane_ParamLimits

0xedbd,	// (0x000579ae) wml_tabs_5_pane

0xedd7,	// (0x000579c8) wml_tabs_pane_g2_ParamLimits

0xedd7,	// (0x000579c8) wml_tabs_pane_g2

0xedeb,	// (0x000579dc) wml_tabs_pane_g3_ParamLimits

0xedeb,	// (0x000579dc) wml_tabs_pane_g3

0x89f3,	// (0x000515e4) wml_tabs_2_active_pane_ParamLimits

0x89f3,	// (0x000515e4) wml_tabs_2_active_pane

0x8a03,	// (0x000515f4) wml_tabs_2_passive_pane_ParamLimits

0x8a03,	// (0x000515f4) wml_tabs_2_passive_pane

0x8a13,	// (0x00051604) wml_tabs_3_active_pane_cp_ParamLimits

0x8a13,	// (0x00051604) wml_tabs_3_active_pane_cp

0x8a24,	// (0x00051615) wml_tabs_3_passive_pane_ParamLimits

0x8a24,	// (0x00051615) wml_tabs_3_passive_pane

0x8a35,	// (0x00051626) wml_tabs_3_passive_pane_cp_ParamLimits

0x8a35,	// (0x00051626) wml_tabs_3_passive_pane_cp

0x8a46,	// (0x00051637) tabs_4_active_pane

0x8a4e,	// (0x0005163f) tabs_4_passive_pane

0x8a56,	// (0x00051647) tabs_4_passive_pane_cp

0x8a5e,	// (0x0005164f) tabs_4_passive_pane_cp2

0x7fcf,	// (0x00050bc0) aid_height_text

0x7708,	// (0x000502f9) mup_volume_cont_pane_ParamLimits

0x7708,	// (0x000502f9) mup_volume_cont_pane

0x50cc,	// (0x0004dcbd) aid_size_cell_pinb

0x50d6,	// (0x0004dcc7) aid_size_list_pinb

0x8958,	// (0x00051549) mup2_volume_cont_pane_ParamLimits

0x8958,	// (0x00051549) mup2_volume_cont_pane

0x8a66,	// (0x00051657) mup2_volume_cont_pane_g1_ParamLimits

0x8a66,	// (0x00051657) mup2_volume_cont_pane_g1

0x4671,	// (0x0004d262) aid_size_cell_touch_ParamLimits

0x4671,	// (0x0004d262) aid_size_cell_touch

0x4914,	// (0x0004d505) touch_pane_ParamLimits

0x4914,	// (0x0004d505) touch_pane

0x4653,	// (0x0004d244) main_rss2_pane

0xee08,	// (0x000579f9) listscroll_rss2_pane

0xee11,	// (0x00057a02) rss2_navigation_pane

0xee19,	// (0x00057a0a) list_rss2_pane

0xd722,	// (0x00056313) scroll_pane_cp22

0xee21,	// (0x00057a12) rss2_navigation_pane_g1

0xee2a,	// (0x00057a1b) rss2_navigation_pane_g2

0xee32,	// (0x00057a23) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000582b0) rss2_navigation_pane_g

0xee3a,	// (0x00057a2b) rss2_navigation_pane_t1

0x8a9f,	// (0x00051690) rss2_list_single_pane_ParamLimits

0x8a9f,	// (0x00051690) rss2_list_single_pane

0xee48,	// (0x00057a39) rss2_list_single_pane_t2

0xee56,	// (0x00057a47) rss2_list_single_pane_t3_ParamLimits

0xee56,	// (0x00057a47) rss2_list_single_pane_t3

0xee73,	// (0x00057a64) rss2_list_single_pane_t4

0x6f23,	// (0x0004fb14) smil_status_pane_g1

0xec65,	// (0x00057856) main_image2_pane_ParamLimits

0xec65,	// (0x00057856) main_image2_pane

0x866b,	// (0x0005125c) main_camera2_pane_g9_ParamLimits

0x866b,	// (0x0005125c) main_camera2_pane_g9

0x86bf,	// (0x000512b0) main_camera2_pane_t5_ParamLimits

0x86bf,	// (0x000512b0) main_camera2_pane_t5

0x86d1,	// (0x000512c2) main_camera2_pane_t6_ParamLimits

0x86d1,	// (0x000512c2) main_camera2_pane_t6

0x8ad0,	// (0x000516c1) main_image2_pane_g1_ParamLimits

0x8ad0,	// (0x000516c1) main_image2_pane_g1

0x7d6f,	// (0x00050960) smil2_video_pane_ParamLimits

0x7d6f,	// (0x00050960) smil2_video_pane

0x0679,	// (0x0004926a) aid_zoom_text_primary_cp

0x48c7,	// (0x0004d4b8) popup_preview_fixed_window

0x6341,	// (0x0004ef32) im_reading_pane_g1

0x85b5,	// (0x000511a6) cams2_bc_adjust_pane_cp_ParamLimits

0x85b5,	// (0x000511a6) cams2_bc_adjust_pane_cp

0x8701,	// (0x000512f2) cams2_bc_adjust_pane_ParamLimits

0x8701,	// (0x000512f2) cams2_bc_adjust_pane

0xf0f3,	// (0x00057ce4) cams2_bc_adjust_pane_g1

0x8adc,	// (0x000516cd) cams2_slider_pane

0x8ae5,	// (0x000516d6) cams2_slider_pane_g1

0x8aee,	// (0x000516df) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000582b7) cams2_slider_pane_g

0x522a,	// (0x0004de1b) calc_display_pane_ParamLimits

0x5248,	// (0x0004de39) calc_paper_pane_ParamLimits

0x5264,	// (0x0004de55) grid_calc_pane_ParamLimits

0x717e,	// (0x0004fd6f) popup_clock_digital_window_t1_ParamLimits

0xdaee,	// (0x000566df) main_image_pane_t1

0x5210,	// (0x0004de01) aid_size_cell_calc_ParamLimits

0x5210,	// (0x0004de01) aid_size_cell_calc

0x823c,	// (0x00050e2d) popup_blid_sat_info2_window_ParamLimits

0x823c,	// (0x00050e2d) popup_blid_sat_info2_window

0xee89,	// (0x00057a7a) aid_size_cell_blid

0xee91,	// (0x00057a82) bg_popup_window_pane_cp07

0xeeb4,	// (0x00057aa5) grid_popup_blid_pane

0xeebe,	// (0x00057aaf) heading_pane_cp05_ParamLimits

0xeebe,	// (0x00057aaf) heading_pane_cp05

0xef88,	// (0x00057b79) cell_popup_blid_pane_ParamLimits

0xef88,	// (0x00057b79) cell_popup_blid_pane

0xefac,	// (0x00057b9d) cell_popup_blid_pane_g1

0xefb4,	// (0x00057ba5) cell_popup_blid_pane_t1

0x891e,	// (0x0005150f) mup2_indicator_pane_ParamLimits

0x891e,	// (0x0005150f) mup2_indicator_pane

0xd86b,	// (0x0005645c) mup2_visualizer_osc_pane

0xed6a,	// (0x0005795b) mup2_visualizer_spec_pane_ParamLimits

0xed6a,	// (0x0005795b) mup2_visualizer_spec_pane

0x8b08,	// (0x000516f9) mup2_spec_half_pane

0x8b11,	// (0x00051702) mup2_spec_half_pane_cp

0x8b1b,	// (0x0005170c) mup2_spec_bar_pane_ParamLimits

0x8b1b,	// (0x0005170c) mup2_spec_bar_pane

0xecff,	// (0x000578f0) mup2_spec_bar_pane_g1

0xed09,	// (0x000578fa) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0005822a) mup2_spec_bar_pane_g

0x8b3a,	// (0x0005172b) mup2_osc_middle_pane

0xed1b,	// (0x0005790c) mup2_visualizer_osc_pane_g1

0x498b,	// (0x0004d57c) popup_number_entry_window_t1_ParamLimits

0x499e,	// (0x0004d58f) popup_number_entry_window_t2_ParamLimits

0x49b0,	// (0x0004d5a1) popup_number_entry_window_t3_ParamLimits

0x49c2,	// (0x0004d5b3) popup_number_entry_window_t5_ParamLimits

0x49c2,	// (0x0004d5b3) popup_number_entry_window_t5

0xf0fb,	// (0x00057cec) popup_number_entry_window_t_ParamLimits

0x49fb,	// (0x0004d5ec) text_title_cp2_ParamLimits

0x7a6f,	// (0x00050660) aid_hotspot_pointer_text2_pane

0x7afd,	// (0x000506ee) main_viewer_pane_g9_ParamLimits

0x7afd,	// (0x000506ee) main_viewer_pane_g9

0x6a87,	// (0x0004f678) cale_month_pane_t1_ParamLimits

0xd28c,	// (0x00055e7d) bg_cale_pane_ParamLimits

0xd2a4,	// (0x00055e95) list_cale_pane_ParamLimits

0x58d3,	// (0x0004e4c4) listscroll_cale_day_pane_t1

0xd2b5,	// (0x00055ea6) scroll_pane_cp09_ParamLimits

0x7743,	// (0x00050334) main_mup_eq_pane_t1_ParamLimits

0x7743,	// (0x00050334) main_mup_eq_pane_t1

0x775d,	// (0x0005034e) main_mup_eq_pane_t2_ParamLimits

0x775d,	// (0x0005034e) main_mup_eq_pane_t2

0x7777,	// (0x00050368) main_mup_eq_pane_t3_ParamLimits

0x7777,	// (0x00050368) main_mup_eq_pane_t3

0x778f,	// (0x00050380) main_mup_eq_pane_t4_ParamLimits

0x778f,	// (0x00050380) main_mup_eq_pane_t4

0x77a7,	// (0x00050398) main_mup_eq_pane_t5_ParamLimits

0x77a7,	// (0x00050398) main_mup_eq_pane_t5

0x77bf,	// (0x000503b0) main_mup_eq_pane_t6_ParamLimits

0x77bf,	// (0x000503b0) main_mup_eq_pane_t6

0x77d3,	// (0x000503c4) main_mup_eq_pane_t7_ParamLimits

0x77d3,	// (0x000503c4) main_mup_eq_pane_t7

0x77e7,	// (0x000503d8) main_mup_eq_pane_t8_ParamLimits

0x77e7,	// (0x000503d8) main_mup_eq_pane_t8

0x77fd,	// (0x000503ee) main_mup_eq_pane_t9_ParamLimits

0x77fd,	// (0x000503ee) main_mup_eq_pane_t9

0x7815,	// (0x00050406) main_mup_eq_pane_t10_ParamLimits

0x7815,	// (0x00050406) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00058079) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00058079) main_mup_eq_pane_t

0x78d2,	// (0x000504c3) mup_equalizer_pane_cp5_ParamLimits

0x78e8,	// (0x000504d9) mup_equalizer_pane_cp6_ParamLimits

0x7900,	// (0x000504f1) mup_equalizer_pane_cp7_ParamLimits

0x4653,	// (0x0004d244) main_gallery_pane

0xed24,	// (0x00057915) smil2_volume_pane

0xed2c,	// (0x0005791d) smil_status_volume_pane_g1_ParamLimits

0xed3f,	// (0x00057930) smil_status_volume_pane_g2_ParamLimits

0x8428,	// (0x00051019) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0005822f) smil_status_volume_pane_g_ParamLimits

0xee91,	// (0x00057a82) bg_popup_window_pane_cp07_ParamLimits

0xee9f,	// (0x00057a90) blid_firmament_pane

0x8b43,	// (0x00051734) aid_size_cell_gallery_ParamLimits

0x8b43,	// (0x00051734) aid_size_cell_gallery

0x8b51,	// (0x00051742) grid_gallery_pane_ParamLimits

0x8b51,	// (0x00051742) grid_gallery_pane

0x8b61,	// (0x00051752) cell_gallery_pane_ParamLimits

0x8b61,	// (0x00051752) cell_gallery_pane

0xefc2,	// (0x00057bb3) bg_cell_gallery_focus_pane_ParamLimits

0xefc2,	// (0x00057bb3) bg_cell_gallery_focus_pane

0xefd4,	// (0x00057bc5) cell_gallery_pane_g1_ParamLimits

0xefd4,	// (0x00057bc5) cell_gallery_pane_g1

0x8baf,	// (0x000517a0) cell_gallery_pane_g2_ParamLimits

0x8baf,	// (0x000517a0) cell_gallery_pane_g2

0x8bbc,	// (0x000517ad) cell_gallery_pane_g3_ParamLimits

0x8bbc,	// (0x000517ad) cell_gallery_pane_g3

0xefe0,	// (0x00057bd1) cell_gallery_pane_g4_ParamLimits

0xefe0,	// (0x00057bd1) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000582dd) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000582dd) cell_gallery_pane_g

0xefec,	// (0x00057bdd) bg_cell_gallery_focus_pane_g1

0xeff4,	// (0x00057be5) bg_cell_gallery_focus_pane_g2

0xeffc,	// (0x00057bed) bg_cell_gallery_focus_pane_g3

0xf004,	// (0x00057bf5) bg_cell_gallery_focus_pane_g4

0xf00c,	// (0x00057bfd) bg_cell_gallery_focus_pane_g5

0xf014,	// (0x00057c05) bg_cell_gallery_focus_pane_g6

0xf01c,	// (0x00057c0d) bg_cell_gallery_focus_pane_g7

0xf024,	// (0x00057c15) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000582e6) bg_cell_gallery_focus_pane_g

0xf02c,	// (0x00057c1d) aid_firma_cardinal

0xf040,	// (0x00057c31) blid_firmament_pane_t1

0xf057,	// (0x00057c48) blid_firmament_pane_t2

0xf06e,	// (0x00057c5f) blid_firmament_pane_t3

0xf085,	// (0x00057c76) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000582f7) blid_firmament_pane_t

0xf09c,	// (0x00057c8d) blid_sat_info_pane

0xf0ac,	// (0x00057c9d) blid_sat_info_pane_g1

0xf0ac,	// (0x00057c9d) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00058300) blid_sat_info_pane_g

0xf0b6,	// (0x00057ca7) blid_sat_info_pane_t1

0xf0c4,	// (0x00057cb5) smil2_volume_content_pane

0xf0cd,	// (0x00057cbe) smil2_volume_pane_g1

0xd270,	// (0x00055e61) smil2_volume_content_pane_g1

0xf0d5,	// (0x00057cc6) smil2_volume_content_pane_g2

0xf0de,	// (0x00057ccf) smil2_volume_content_pane_g3

0x0a6c,	// (0x0004965d) smil2_volume_content_pane_g4

0x0a75,	// (0x00049666) smil2_volume_content_pane_g5

0x0a7e,	// (0x0004966f) smil2_volume_content_pane_g6

0x0a87,	// (0x00049678) smil2_volume_content_pane_g7

0x0a90,	// (0x00049681) smil2_volume_content_pane_g8

0x0a99,	// (0x0004968a) smil2_volume_content_pane_g9

0x0aa2,	// (0x00049693) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00058305) smil2_volume_content_pane_g

0x593b,	// (0x0004e52c) cale_week_day_heading_pane_t1_ParamLimits

0x5968,	// (0x0004e559) cale_week_day_heading_pane_t2_ParamLimits

0x5995,	// (0x0004e586) cale_week_day_heading_pane_t3_ParamLimits

0x59c2,	// (0x0004e5b3) cale_week_day_heading_pane_t4_ParamLimits

0x59ef,	// (0x0004e5e0) cale_week_day_heading_pane_t5_ParamLimits

0x5a1c,	// (0x0004e60d) cale_week_day_heading_pane_t6_ParamLimits

0x5a49,	// (0x0004e63a) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00057df1) cale_week_day_heading_pane_t_ParamLimits

0x5a76,	// (0x0004e667) bg_cale_side_pane_ParamLimits

0x5a84,	// (0x0004e675) cale_week_time_pane_t1_ParamLimits

0x5a9c,	// (0x0004e68d) cale_week_time_pane_t2_ParamLimits

0x5ab4,	// (0x0004e6a5) cale_week_time_pane_t3_ParamLimits

0x5acc,	// (0x0004e6bd) cale_week_time_pane_t4_ParamLimits

0x5ae4,	// (0x0004e6d5) cale_week_time_pane_t5_ParamLimits

0x5afc,	// (0x0004e6ed) cale_week_time_pane_t6_ParamLimits

0x5b14,	// (0x0004e705) cale_week_time_pane_t7_ParamLimits

0x5b2c,	// (0x0004e71d) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00057e00) cale_week_time_pane_t_ParamLimits

0x5b44,	// (0x0004e735) cell_cale_week_pane_g2_ParamLimits

0x5a76,	// (0x0004e667) bg_cale_side_pane_cp01_ParamLimits

0x6da6,	// (0x0004f997) cale_month_week_pane_t1_ParamLimits

0x6dbd,	// (0x0004f9ae) cale_month_week_pane_t2_ParamLimits

0x6dd4,	// (0x0004f9c5) cale_month_week_pane_t3_ParamLimits

0x6deb,	// (0x0004f9dc) cale_month_week_pane_t4_ParamLimits

0x6e02,	// (0x0004f9f3) cale_month_week_pane_t5_ParamLimits

0x6e19,	// (0x0004fa0a) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00057ed9) cale_month_week_pane_t_ParamLimits

0x6ee6,	// (0x0004fad7) cell_cale_month_pane_g1_ParamLimits

0x4653,	// (0x0004d244) main_cale_event_viewer_pane

0x4653,	// (0x0004d244) listscroll_cale_event_viewer_pane

0x0aab,	// (0x0004969c) list_cale_ev_pane

0x0ab3,	// (0x000496a4) scroll_pane_cp023

0x0abf,	// (0x000496b0) field_cale_ev_pane_ParamLimits

0x0abf,	// (0x000496b0) field_cale_ev_pane

0x0add,	// (0x000496ce) field_cale_ev_content_pane_ParamLimits

0x0add,	// (0x000496ce) field_cale_ev_content_pane

0x0ae9,	// (0x000496da) field_cale_ev_pane_g1_ParamLimits

0x0ae9,	// (0x000496da) field_cale_ev_pane_g1

0x0af5,	// (0x000496e6) field_cale_ev_pane_g2_ParamLimits

0x0af5,	// (0x000496e6) field_cale_ev_pane_g2

0x0b0d,	// (0x000496fe) field_cale_ev_pane_g3_ParamLimits

0x0b0d,	// (0x000496fe) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0005831a) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0005831a) field_cale_ev_pane_g

0x0b25,	// (0x00049716) field_cale_ev_pane_t1_ParamLimits

0x0b25,	// (0x00049716) field_cale_ev_pane_t1

0x0b3c,	// (0x0004972d) field_cale_ev_content_pane_t1_ParamLimits

0x0b3c,	// (0x0004972d) field_cale_ev_content_pane_t1

0xd9d4,	// (0x000565c5) bg_button_pane_cp01

0x53c3,	// (0x0004dfb4) listscroll_cale_week_pane_ParamLimits

0x5734,	// (0x0004e325) popup_toolbar_window_cp01

0x58d3,	// (0x0004e4c4) listscroll_cale_week_pane_t1_ParamLimits

0x53c3,	// (0x0004dfb4) listscroll_cale_day_pane_ParamLimits

0x5734,	// (0x0004e325) popup_toolbar_window_cp02

0x58d3,	// (0x0004e4c4) listscroll_cale_day_pane_t1_ParamLimits

0x53c3,	// (0x0004dfb4) main_cale_month_pane_ParamLimits

0x830c,	// (0x00050efd) popup_toolbar_window_cp03_ParamLimits

0x830c,	// (0x00050efd) popup_toolbar_window_cp03

0x7c85,	// (0x00050876) main_image_pane_g2_ParamLimits

0x7c85,	// (0x00050876) main_image_pane_g2

0x7c91,	// (0x00050882) main_image_pane_g3_ParamLimits

0x7c91,	// (0x00050882) main_image_pane_g3

0x0002,

0xf51a,	// (0x0005810b) main_image_pane_g_ParamLimits

0xf51a,	// (0x0005810b) main_image_pane_g

0xdaee,	// (0x000566df) main_image_pane_t1_ParamLimits

0x7c9d,	// (0x0005088e) main_image_pane_t2_ParamLimits

0x7c9d,	// (0x0005088e) main_image_pane_t2

0x7caf,	// (0x000508a0) main_image_pane_t3_ParamLimits

0x7caf,	// (0x000508a0) main_image_pane_t3

0x7cc1,	// (0x000508b2) main_image_pane_t4_ParamLimits

0x7cc1,	// (0x000508b2) main_image_pane_t4

0x0003,

0xf521,	// (0x00058112) main_image_pane_t_ParamLimits

0xf521,	// (0x00058112) main_image_pane_t

0x7cd3,	// (0x000508c4) popup_image_details_window_cp01

0x7cdd,	// (0x000508ce) popup_toobar_trans_pane_cp01_ParamLimits

0x7cdd,	// (0x000508ce) popup_toobar_trans_pane_cp01

0x8289,	// (0x00050e7a) popup_image_details_window_ParamLimits

0x8289,	// (0x00050e7a) popup_image_details_window

0xec85,	// (0x00057876) popup_image_focus_window

0x85a7,	// (0x00051198) camera2_autofocus_pane_ParamLimits

0x85a7,	// (0x00051198) camera2_autofocus_pane

0x4653,	// (0x0004d244) bg_popup_sub_pane_cp06

0x0b5a,	// (0x0004974b) popup_image_focus_window_g1

0x0b62,	// (0x00049753) popup_image_focus_window_g2

0x0b6a,	// (0x0004975b) popup_image_focus_window_g3

0x0b72,	// (0x00049763) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00058321) popup_image_focus_window_g

0x0b7a,	// (0x0004976b) popup_image_focus_window_t1

0x0b88,	// (0x00049779) popup_image_focus_window_t2

0x0b98,	// (0x00049789) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0005832a) popup_image_focus_window_t

0x0ba6,	// (0x00049797) camera2_autofocus_pane_g1

0xec65,	// (0x00057856) bg_tb_trans_pane_cp01

0x0bb4,	// (0x000497a5) popup_image_details_window_g1

0x0bc7,	// (0x000497b8) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0005833c) popup_image_details_window_g

0x0bf0,	// (0x000497e1) popup_image_details_window_t1

0x0c02,	// (0x000497f3) popup_image_details_window_t2

0x0c1b,	// (0x0004980c) popup_image_details_window_t3

0x0c2f,	// (0x00049820) popup_image_details_window_t4

0x0c4a,	// (0x0004983b) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00058343) popup_image_details_window_t

0x538b,	// (0x0004df7c) bg_calc_paper_pane_ParamLimits

0x539f,	// (0x0004df90) grid_highlight_pane_cp013

0x53a9,	// (0x0004df9a) list_calc_pane_ParamLimits

0x53bb,	// (0x0004dfac) scroll_pane_cp024

0x53c3,	// (0x0004dfb4) bg_calc_display_pane_ParamLimits

0x53cf,	// (0x0004dfc0) calc_display_pane_t1_ParamLimits

0x53e4,	// (0x0004dfd5) calc_display_pane_t2_ParamLimits

0x53f9,	// (0x0004dfea) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00057d73) calc_display_pane_t_ParamLimits

0x5528,	// (0x0004e119) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00057d90) cell_calc_pane_g

0x5531,	// (0x0004e122) cell_calc_pane_t1

0x5540,	// (0x0004e131) grid_highlight_pane_cp02_ParamLimits

0x5556,	// (0x0004e147) toolbar_button_pane_cp01_ParamLimits

0x5556,	// (0x0004e147) toolbar_button_pane_cp01

0xdb33,	// (0x00056724) temp_image_control_pane_ParamLimits

0xdb33,	// (0x00056724) temp_image_control_pane

0xec65,	// (0x00057856) main_mp3_pane

0x0c64,	// (0x00049855) temp_image_control_pane_g1_ParamLimits

0x0c64,	// (0x00049855) temp_image_control_pane_g1

0x0c72,	// (0x00049863) temp_image_control_pane_g2_ParamLimits

0x0c72,	// (0x00049863) temp_image_control_pane_g2

0x0c84,	// (0x00049875) temp_image_control_pane_g3_ParamLimits

0x0c84,	// (0x00049875) temp_image_control_pane_g3

0x8bf9,	// (0x000517ea) temp_image_control_pane_g4_ParamLimits

0x8bf9,	// (0x000517ea) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0005834e) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0005834e) temp_image_control_pane_g

0x0c64,	// (0x00049855) main_mp3_pane_g1

0x8c0a,	// (0x000517fb) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00058357) main_mp3_pane_g

0x0cc7,	// (0x000498b8) main_mp3_pane_t1

0x5d02,	// (0x0004e8f3) main_camera_pane_g8_ParamLimits

0x5d02,	// (0x0004e8f3) main_camera_pane_g8

0x5e5f,	// (0x0004ea50) main_video_pane_g7_ParamLimits

0x5e5f,	// (0x0004ea50) main_video_pane_g7

0x86ef,	// (0x000512e0) main_camera2_pane_t7_ParamLimits

0x86ef,	// (0x000512e0) main_camera2_pane_t7

0x6434,	// (0x0004f025) scroll_pane_cp025_ParamLimits

0x6434,	// (0x0004f025) scroll_pane_cp025

0x6448,	// (0x0004f039) scroll_pane_cp026_ParamLimits

0x6448,	// (0x0004f039) scroll_pane_cp026

0x6457,	// (0x0004f048) wml_content_pane_ParamLimits

0x4653,	// (0x0004d244) main_touch_calib_pane

0x8cae,	// (0x0005189f) main_touch_calib_pane_g1

0x8cba,	// (0x000518ab) main_touch_calib_pane_g2

0x8cc6,	// (0x000518b7) main_touch_calib_pane_g3

0x8cd2,	// (0x000518c3) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00058375) main_touch_calib_pane_g

0x8cde,	// (0x000518cf) main_touch_calib_pane_t1

0x8cf5,	// (0x000518e6) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0005837e) main_touch_calib_pane_t

0xd7ac,	// (0x0005639d) mup_progress_pane_cp02

0xd7cb,	// (0x000563bc) navi_pane_g1

0xd82d,	// (0x0005641e) navi_pane_mp_t3

0xec65,	// (0x00057856) main_mp3_pane_ParamLimits

0x834a,	// (0x00050f3b) navi_pane_ParamLimits

0x0c64,	// (0x00049855) main_mp3_pane_g1_ParamLimits

0x8c0a,	// (0x000517fb) main_mp3_pane_g2_ParamLimits

0x8c16,	// (0x00051807) main_mp3_pane_g3_ParamLimits

0x8c16,	// (0x00051807) main_mp3_pane_g3

0x8c22,	// (0x00051813) main_mp3_pane_g4_ParamLimits

0x8c22,	// (0x00051813) main_mp3_pane_g4

0x0c94,	// (0x00049885) main_mp3_pane_g5_ParamLimits

0x0c94,	// (0x00049885) main_mp3_pane_g5

0x0ca2,	// (0x00049893) main_mp3_pane_g6_ParamLimits

0x0ca2,	// (0x00049893) main_mp3_pane_g6

0x0caf,	// (0x000498a0) main_mp3_pane_g7_ParamLimits

0x0caf,	// (0x000498a0) main_mp3_pane_g7

0x0cbb,	// (0x000498ac) main_mp3_pane_g8_ParamLimits

0x0cbb,	// (0x000498ac) main_mp3_pane_g8

0xf766,	// (0x00058357) main_mp3_pane_g_ParamLimits

0x8c2e,	// (0x0005181f) main_mp3_pane_t2

0x8c3e,	// (0x0005182f) main_mp3_pane_t3

0x0cd5,	// (0x000498c6) main_mp3_pane_t4

0x0ce3,	// (0x000498d4) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00058368) main_mp3_pane_t

0x0cf1,	// (0x000498e2) mup_progress_pane_cp01

0x0679,	// (0x0004926a) aid_zoom_text_secondary2

0x0aab,	// (0x0004969c) list_cale_ev2_pane

0x0ab3,	// (0x000496a4) scroll_pane_cp023_ParamLimits

0x8d4a,	// (0x0005193b) field_cale_ev2_pane_ParamLimits

0x8d4a,	// (0x0005193b) field_cale_ev2_pane

0x0cf9,	// (0x000498ea) field_cale_ev2_pane_g1_ParamLimits

0x0cf9,	// (0x000498ea) field_cale_ev2_pane_g1

0x0d05,	// (0x000498f6) field_cale_ev2_pane_g2_ParamLimits

0x0d05,	// (0x000498f6) field_cale_ev2_pane_g2

0x0d1d,	// (0x0004990e) field_cale_ev2_pane_g3_ParamLimits

0x0d1d,	// (0x0004990e) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00058389) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00058389) field_cale_ev2_pane_g

0x8d73,	// (0x00051964) field_cale_ev2_pane_t1_ParamLimits

0x8d73,	// (0x00051964) field_cale_ev2_pane_t1

0x8d8a,	// (0x0005197b) field_cale_ev2_pane_t2_ParamLimits

0x8d8a,	// (0x0005197b) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00058392) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00058392) field_cale_ev2_pane_t

0x7b65,	// (0x00050756) main_postcard_pane_g5_ParamLimits

0x7b65,	// (0x00050756) main_postcard_pane_g5

0x7b73,	// (0x00050764) main_postcard_pane_g6_ParamLimits

0x7b73,	// (0x00050764) main_postcard_pane_g6

0x5c81,	// (0x0004e872) camera2_autofocus_pane_cp_ParamLimits

0x5c81,	// (0x0004e872) camera2_autofocus_pane_cp

0xec65,	// (0x00057856) main_mup3_pane

0x8dbf,	// (0x000519b0) main_mup3_pane_g1_ParamLimits

0x8dbf,	// (0x000519b0) main_mup3_pane_g1

0x8de0,	// (0x000519d1) main_mup3_pane_g2_ParamLimits

0x8de0,	// (0x000519d1) main_mup3_pane_g2

0x8e58,	// (0x00051a49) main_mup3_pane_g3_ParamLimits

0x8e58,	// (0x00051a49) main_mup3_pane_g3

0x8e97,	// (0x00051a88) main_mup3_pane_g4_ParamLimits

0x8e97,	// (0x00051a88) main_mup3_pane_g4

0x8ed6,	// (0x00051ac7) main_mup3_pane_g5_ParamLimits

0x8ed6,	// (0x00051ac7) main_mup3_pane_g5

0x8f15,	// (0x00051b06) main_mup3_pane_g6_ParamLimits

0x8f15,	// (0x00051b06) main_mup3_pane_g6

0x0d41,	// (0x00049932) main_mup3_pane_g7_ParamLimits

0x0d41,	// (0x00049932) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000583a2) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000583a2) main_mup3_pane_g

0x8f87,	// (0x00051b78) main_mup3_pane_t1_ParamLimits

0x8f87,	// (0x00051b78) main_mup3_pane_t1

0x8ff2,	// (0x00051be3) main_mup3_pane_t2_ParamLimits

0x8ff2,	// (0x00051be3) main_mup3_pane_t2

0x90b7,	// (0x00051ca8) main_mup3_pane_t4_ParamLimits

0x90b7,	// (0x00051ca8) main_mup3_pane_t4

0x9105,	// (0x00051cf6) main_mup3_pane_t5_ParamLimits

0x9105,	// (0x00051cf6) main_mup3_pane_t5

0x91ad,	// (0x00051d9e) main_mup3_pane_t6_ParamLimits

0x91ad,	// (0x00051d9e) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000583b3) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000583b3) main_mup3_pane_t

0x9255,	// (0x00051e46) mup3_progress_pane_ParamLimits

0x9255,	// (0x00051e46) mup3_progress_pane

0x92c0,	// (0x00051eb1) popup_mup3_control_window_ParamLimits

0x92c0,	// (0x00051eb1) popup_mup3_control_window

0x0d4f,	// (0x00049940) popup_mup3_text_window

0x92d9,	// (0x00051eca) mup3_progress_pane_t1

0x92f0,	// (0x00051ee1) mup3_progress_pane_t2

0x0d57,	// (0x00049948) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000583c0) mup3_progress_pane_t

0x0d6e,	// (0x0004995f) mup_progress_pane_cp03

0x4653,	// (0x0004d244) bg_tb_trans_pane_cp04

0x9307,	// (0x00051ef8) mup3_volume_pane

0x930f,	// (0x00051f00) popup_mup3_control_window_g1

0x9318,	// (0x00051f09) mup3_volume_pane_g1

0x9321,	// (0x00051f12) mup3_volume_pane_g2

0x932a,	// (0x00051f1b) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000583c7) mup3_volume_pane_g

0x4653,	// (0x0004d244) bg_tb_trans_pane_cp03

0x0d7e,	// (0x0004996f) popup_mup3_text_window_g1

0x0d86,	// (0x00049977) popup_mup3_text_window_t1

0x54e7,	// (0x0004e0d8) list_calc_item_pane_g1_ParamLimits

0xedff,	// (0x000579f0) mup_volume_pane_cp_g1

0x8d0c,	// (0x000518fd) main_touch_calib_pane_t3

0x8d20,	// (0x00051911) main_touch_calib_pane_t4

0x8d34,	// (0x00051925) main_touch_calib_pane_t5

0x465d,	// (0x0004d24e) aid_cell_size_toolbar2

0x4665,	// (0x0004d256) aid_popup3_width_pane

0x0671,	// (0x00049262) aid_zoom_text_msg_primary

0x5c4e,	// (0x0004e83f) vorec_t7

0x5438,	// (0x0004e029) bg_calc_paper_pane_g1_ParamLimits

0x5444,	// (0x0004e035) bg_calc_paper_pane_g2_ParamLimits

0x5450,	// (0x0004e041) bg_calc_paper_pane_g3_ParamLimits

0x545c,	// (0x0004e04d) bg_calc_paper_pane_g4_ParamLimits

0x5468,	// (0x0004e059) bg_calc_paper_pane_g5_ParamLimits

0x5474,	// (0x0004e065) bg_calc_paper_pane_g6_ParamLimits

0x5485,	// (0x0004e076) bg_calc_paper_pane_g7_ParamLimits

0x5496,	// (0x0004e087) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00057d7a) bg_calc_paper_pane_g_ParamLimits

0x54a7,	// (0x0004e098) calc_bg_paper_pane_g9_ParamLimits

0x5d74,	// (0x0004e965) image_qvga_pane_ParamLimits

0x5d74,	// (0x0004e965) image_qvga_pane

0x5036,	// (0x0004dc27) bg_popup_sub_pane_cp04_ParamLimits

0xda6a,	// (0x0005665b) popup_mup_playback_window_g1_ParamLimits

0xda76,	// (0x00056667) popup_mup_playback_window_t1_ParamLimits

0xda8b,	// (0x0005667c) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00058106) popup_mup_playback_window_t_ParamLimits

0x881e,	// (0x0005140f) main_mup2_pane_g3_ParamLimits

0x881e,	// (0x0005140f) main_mup2_pane_g3

0x60af,	// (0x0004eca0) popup_toolbar_window_cp04

0xde6d,	// (0x00056a5e) popup_call2_audio_second_window_g3_ParamLimits

0xde6d,	// (0x00056a5e) popup_call2_audio_second_window_g3

0xe277,	// (0x00056e68) popup_call2_audio_first_window_g4_ParamLimits

0xe277,	// (0x00056e68) popup_call2_audio_first_window_g4

0xe8f6,	// (0x000574e7) popup_call2_audio_in_window_g4_ParamLimits

0xe8f6,	// (0x000574e7) popup_call2_audio_in_window_g4

0x7c78,	// (0x00050869) aid_area_sk_bg_cut_ParamLimits

0x7c78,	// (0x00050869) aid_area_sk_bg_cut

0xdaa0,	// (0x00056691) aid_area_sk_bg_cut_2_ParamLimits

0xdaa0,	// (0x00056691) aid_area_sk_bg_cut_2

0x8b9f,	// (0x00051790) aid_placing_details_win

0x8ba7,	// (0x00051798) aid_placing_details_win_2

0x0ba6,	// (0x00049797) camera2_autofocus_pane_g1_ParamLimits

0x48b8,	// (0x0004d4a9) popup_fixed_preview_cale_window_ParamLimits

0x48b8,	// (0x0004d4a9) popup_fixed_preview_cale_window

0xd87c,	// (0x0005646d) navi_slider_pane_g3

0xd885,	// (0x00056476) navi_slider_pane_g4

0xd88e,	// (0x0005647f) navi_slider_pane_g5

0xd87c,	// (0x0005646d) navi_slider_pane_g6

0x74d7,	// (0x000500c8) navi_slider_pane_g7

0xd9a1,	// (0x00056592) mup_scale_pane_g3

0xd9aa,	// (0x0005659b) mup_scale_pane_g4

0xd9b3,	// (0x000565a4) mup_scale_pane_g5

0x7918,	// (0x00050509) mup_scale_pane_g6

0x7921,	// (0x00050512) mup_scale_pane_g7

0xd87c,	// (0x0005646d) cams2_slider_pane_g3

0xee81,	// (0x00057a72) cams2_slider_pane_g4

0x8af7,	// (0x000516e8) cams2_slider_pane_g5

0xd87c,	// (0x0005646d) cams2_slider_pane_g6

0x8aff,	// (0x000516f0) cams2_slider_pane_g7

0xf0ac,	// (0x00057c9d) camera2_autofocus_pane_cp_g1

0x0d94,	// (0x00049985) bg_popup_preview_window_pane_cp02_ParamLimits

0x0d94,	// (0x00049985) bg_popup_preview_window_pane_cp02

0x0da0,	// (0x00049991) list_fp_cale_pane_ParamLimits

0x0da0,	// (0x00049991) list_fp_cale_pane

0x0dac,	// (0x0004999d) popup_fixed_preview_cale_window_t1_ParamLimits

0x0dac,	// (0x0004999d) popup_fixed_preview_cale_window_t1

0x9333,	// (0x00051f24) popup_fixed_preview_cale_window_t2_ParamLimits

0x9333,	// (0x00051f24) popup_fixed_preview_cale_window_t2

0x9348,	// (0x00051f39) popup_fixed_preview_cale_window_t3_ParamLimits

0x9348,	// (0x00051f39) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000583ce) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000583ce) popup_fixed_preview_cale_window_t

0x935d,	// (0x00051f4e) list_single_fp_cale_pane_ParamLimits

0x935d,	// (0x00051f4e) list_single_fp_cale_pane

0x0dca,	// (0x000499bb) list_single_fp_cale_pane_g1_ParamLimits

0x0dca,	// (0x000499bb) list_single_fp_cale_pane_g1

0x0dd6,	// (0x000499c7) list_single_fp_cale_pane_g2_ParamLimits

0x0dd6,	// (0x000499c7) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000583d5) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000583d5) list_single_fp_cale_pane_g

0x0def,	// (0x000499e0) list_single_fp_cale_pane_t1_ParamLimits

0x0def,	// (0x000499e0) list_single_fp_cale_pane_t1

0x0e01,	// (0x000499f2) list_single_fp_cale_pane_t2_ParamLimits

0x0e01,	// (0x000499f2) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000583dc) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000583dc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4653,	// (0x0004d244) main_dialer_pane

0x936f,	// (0x00051f60) aid_cell_size_keypad

0x9379,	// (0x00051f6a) dialer_ne_pane

0x9383,	// (0x00051f74) grid_dialer_command_1_pane

0x938b,	// (0x00051f7c) grid_dialer_command_2_pane

0x9393,	// (0x00051f84) grid_dialer_keypad_pane

0x93a5,	// (0x00051f96) bg_popup_call_pane_cp06_ParamLimits

0x93a5,	// (0x00051f96) bg_popup_call_pane_cp06

0x93b1,	// (0x00051fa2) dialer_ne_clear_pane_ParamLimits

0x93b1,	// (0x00051fa2) dialer_ne_clear_pane

0x0e34,	// (0x00049a25) dialer_ne_pane_g1

0x0e3c,	// (0x00049a2d) dialer_ne_pane_t1_ParamLimits

0x0e3c,	// (0x00049a2d) dialer_ne_pane_t1

0x93bd,	// (0x00051fae) dialer_ne_pane_t2_ParamLimits

0x93bd,	// (0x00051fae) dialer_ne_pane_t2

0x93da,	// (0x00051fcb) dialer_ne_pane_t3_ParamLimits

0x93da,	// (0x00051fcb) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000583e1) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000583e1) dialer_ne_pane_t

0x93fe,	// (0x00051fef) dialer_ne_pane_t3_copy1_ParamLimits

0x93fe,	// (0x00051fef) dialer_ne_pane_t3_copy1

0x9422,	// (0x00052013) cell_dialer_keypad_pane_ParamLimits

0x9422,	// (0x00052013) cell_dialer_keypad_pane

0x9439,	// (0x0005202a) cell_dialer_command_1_pane_ParamLimits

0x9439,	// (0x0005202a) cell_dialer_command_1_pane

0x944f,	// (0x00052040) cell_dialer_command_2_pane_ParamLimits

0x944f,	// (0x00052040) cell_dialer_command_2_pane

0x0e4e,	// (0x00049a3f) bg_button_pane_cp02_ParamLimits

0x0e4e,	// (0x00049a3f) bg_button_pane_cp02

0x945e,	// (0x0005204f) cell_dialer_keypad_pane_g1_ParamLimits

0x945e,	// (0x0005204f) cell_dialer_keypad_pane_g1

0x0e4e,	// (0x00049a3f) bg_button_pane_cp03_ParamLimits

0x0e4e,	// (0x00049a3f) bg_button_pane_cp03

0x9473,	// (0x00052064) cell_dialer_command_1_pane_g1_ParamLimits

0x9473,	// (0x00052064) cell_dialer_command_1_pane_g1

0x0e5a,	// (0x00049a4b) bg_button_pane_cp04

0x9487,	// (0x00052078) cell_dialer_command_2_pane_g1

0xd86b,	// (0x0005645c) bg_button_pane_cp06

0x0e62,	// (0x00049a53) dialer_ne_clear_pane_g1

0x741a,	// (0x0005000b) navi_pane_g2

0x7448,	// (0x00050039) navi_pane_g3

0x0002,

0xf418,	// (0x00058009) navi_pane_g

0x7473,	// (0x00050064) navi_pane_mv_g2

0x749a,	// (0x0005008b) navi_pane_mv_g5

0x74a2,	// (0x00050093) navi_pane_mv_t1

0x53c3,	// (0x0004dfb4) main_clock2_pane

0x94b6,	// (0x000520a7) main_clock2_list_pane_ParamLimits

0x94b6,	// (0x000520a7) main_clock2_list_pane

0x94de,	// (0x000520cf) main_clock2_pane_t1_ParamLimits

0x94de,	// (0x000520cf) main_clock2_pane_t1

0x950c,	// (0x000520fd) main_clock2_pane_t2_ParamLimits

0x950c,	// (0x000520fd) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000583e8) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000583e8) main_clock2_pane_t

0x9573,	// (0x00052164) popup_clock_analogue_window_cp03_ParamLimits

0x9573,	// (0x00052164) popup_clock_analogue_window_cp03

0x9591,	// (0x00052182) popup_clock_digital_window_cp02_ParamLimits

0x9591,	// (0x00052182) popup_clock_digital_window_cp02

0x95fe,	// (0x000521ef) main_clock2_list_single_pane_ParamLimits

0x95fe,	// (0x000521ef) main_clock2_list_single_pane

0xd86b,	// (0x0005645c) list_highlight_pane_cp05

0x0e6a,	// (0x00049a5b) main_clock2_list_single_pane_t1

0x60af,	// (0x0004eca0) popup_toolbar_window_cp04_ParamLimits

0x8bc9,	// (0x000517ba) camera2_autofocus_pane_g2_ParamLimits

0x8bc9,	// (0x000517ba) camera2_autofocus_pane_g2

0x8bd5,	// (0x000517c6) camera2_autofocus_pane_g3_ParamLimits

0x8bd5,	// (0x000517c6) camera2_autofocus_pane_g3

0x8be1,	// (0x000517d2) camera2_autofocus_pane_g4_ParamLimits

0x8be1,	// (0x000517d2) camera2_autofocus_pane_g4

0x8bed,	// (0x000517de) camera2_autofocus_pane_g5_ParamLimits

0x8bed,	// (0x000517de) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00058331) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00058331) camera2_autofocus_pane_g

0x8d9f,	// (0x00051990) camera2_autofocus_pane_cp_g2

0x8da7,	// (0x00051998) camera2_autofocus_pane_cp_g3

0x8daf,	// (0x000519a0) camera2_autofocus_pane_cp_g4

0x8db7,	// (0x000519a8) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00058397) camera2_autofocus_pane_cp_g

0x939d,	// (0x00051f8e) popup_dialer_spcha_window

0x4653,	// (0x0004d244) bg_popup_sub_pane_cp07

0x0e78,	// (0x00049a69) list_spcha_pane

0x0e80,	// (0x00049a71) list_single_spcha_pane_ParamLimits

0x0e80,	// (0x00049a71) list_single_spcha_pane

0x4653,	// (0x0004d244) list_highlight_pane_cp06

0x0e91,	// (0x00049a82) list_single_spcha_pane_t1

0xe6a0,	// (0x00057291) popup_call2_audio_out_window_g4_ParamLimits

0xe6a0,	// (0x00057291) popup_call2_audio_out_window_g4

0x4653,	// (0x0004d244) main_imed2_pane

0xec8d,	// (0x0005787e) popup_imed_adjust2_window

0x8297,	// (0x00050e88) popup_imed_trans_window_ParamLimits

0x8297,	// (0x00050e88) popup_imed_trans_window

0xeeea,	// (0x00057adb) popup_blid_sat_info2_window_t1

0xeef8,	// (0x00057ae9) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000582c6) popup_blid_sat_info2_window_t

0x96a8,	// (0x00052299) aid_size_cell_colour_35

0x96c2,	// (0x000522b3) aid_size_cell_colour_112

0x96d9,	// (0x000522ca) aid_size_cell_effect

0xec65,	// (0x00057856) bg_tb_trans_pane_cp02

0xf0e7,	// (0x00057cd8) heading_imed_pane

0x96f3,	// (0x000522e4) listscroll_imed_pane

0x0e9f,	// (0x00049a90) heading_imed_pane_g1

0x0ea7,	// (0x00049a98) heading_imed_pane_t1

0x0eb5,	// (0x00049aa6) grid_imed_colour_35_pane_ParamLimits

0x0eb5,	// (0x00049aa6) grid_imed_colour_35_pane

0x96ff,	// (0x000522f0) grid_imed_effect_pane

0x0ecc,	// (0x00049abd) list_imed_aspect_pane

0x970f,	// (0x00052300) scroll_pane_cp027_ParamLimits

0x970f,	// (0x00052300) scroll_pane_cp027

0x971b,	// (0x0005230c) cell_imed_effect_pane_ParamLimits

0x971b,	// (0x0005230c) cell_imed_effect_pane

0x0ed4,	// (0x00049ac5) cell_imed_colour_pane_ParamLimits

0x0ed4,	// (0x00049ac5) cell_imed_colour_pane

0x0f16,	// (0x00049b07) cell_imed_colour_pane_g1_ParamLimits

0x0f16,	// (0x00049b07) cell_imed_colour_pane_g1

0x0f27,	// (0x00049b18) hgihlgiht_grid_pane_cp016_ParamLimits

0x0f27,	// (0x00049b18) hgihlgiht_grid_pane_cp016

0x9733,	// (0x00052324) cell_imed_effect_pane_g1

0x973b,	// (0x0005232c) grid_highlight_pane_cp017

0x0f38,	// (0x00049b29) list_imed_single_pane_ParamLimits

0x0f38,	// (0x00049b29) list_imed_single_pane

0x4653,	// (0x0004d244) list_highlight_pane_cp07

0x0f4d,	// (0x00049b3e) list_imed_aspect_pane_comp1_t1

0xec57,	// (0x00057848) bg_tb_trans_pane_cp05

0x0f6f,	// (0x00049b60) popup_imed_adjust2_window_g1

0x0f96,	// (0x00049b87) popup_imed_adjust2_window_t1

0x0fae,	// (0x00049b9f) slider_imed_adjust_pane

0x0fc2,	// (0x00049bb3) slider_imed_adjust_pane_g1

0x0fd2,	// (0x00049bc3) slider_imed_adjust_pane_g2

0x0fe2,	// (0x00049bd3) slider_imed_adjust_pane_g3

0x0ff3,	// (0x00049be4) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00058405) slider_imed_adjust_pane_g

0x9744,	// (0x00052335) aid_size_cell_clipart2

0x9750,	// (0x00052341) grid_imed_clipart_pane

0x1004,	// (0x00049bf5) scroll_pane_cp031

0x975a,	// (0x0005234b) cell_imed_clipart_pane_ParamLimits

0x975a,	// (0x0005234b) cell_imed_clipart_pane

0x977c,	// (0x0005236d) cell_imed_clipart_pane_g1

0x4653,	// (0x0004d244) grid_highlight_pane_cp014

0x94c2,	// (0x000520b3) main_clock2_pane_g1_ParamLimits

0x94c2,	// (0x000520b3) main_clock2_pane_g1

0x95a9,	// (0x0005219a) aid_call2_pane_cp10

0x95bb,	// (0x000521ac) aid_call_pane_cp10

0xd7a0,	// (0x00056391) popup_clock_analogue_window_cp10_g1

0xd7a0,	// (0x00056391) popup_clock_analogue_window_cp10_g2

0x95cd,	// (0x000521be) popup_clock_analogue_window_cp10_g3

0x95cd,	// (0x000521be) popup_clock_analogue_window_cp10_g4

0xd7a0,	// (0x00056391) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000583f3) popup_clock_analogue_window_cp10_g

0x95df,	// (0x000521d0) popup_clock_analogue_window_cp10_t1

0x9610,	// (0x00052201) clock_digital_number_pane_cp10_ParamLimits

0x9610,	// (0x00052201) clock_digital_number_pane_cp10

0x9628,	// (0x00052219) clock_digital_number_pane_cp11_ParamLimits

0x9628,	// (0x00052219) clock_digital_number_pane_cp11

0x9640,	// (0x00052231) clock_digital_number_pane_cp12_ParamLimits

0x9640,	// (0x00052231) clock_digital_number_pane_cp12

0x9658,	// (0x00052249) clock_digital_number_pane_cp13_ParamLimits

0x9658,	// (0x00052249) clock_digital_number_pane_cp13

0x9670,	// (0x00052261) clock_digital_separator_pane_cp10_ParamLimits

0x9670,	// (0x00052261) clock_digital_separator_pane_cp10

0x9688,	// (0x00052279) popup_clock_digital_window_cp02_t1_ParamLimits

0x9688,	// (0x00052279) popup_clock_digital_window_cp02_t1

0x502e,	// (0x0004dc1f) clock_digital_number_pane_cp10_g1

0x502e,	// (0x0004dc1f) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0005840e) clock_digital_number_pane_cp10_g

0x502e,	// (0x0004dc1f) clock_digital_separator_pane_cp10_g1

0x502e,	// (0x0004dc1f) clock_digital_separator_pane_g2_cp10

0xd83b,	// (0x0005642c) navi_pane_vded_g4

0xd844,	// (0x00056435) navi_pane_vded_g5

0xd84d,	// (0x0005643e) navi_pane_vded_t1

0x4653,	// (0x0004d244) main_vded_pane

0x9785,	// (0x00052376) main_vded_pane_g1

0x9791,	// (0x00052382) main_vded_pane_g2

0x979b,	// (0x0005238c) main_vded_pane_g3

0x0002,

0xf822,	// (0x00058413) main_vded_pane_g

0x97a5,	// (0x00052396) main_vded_pane_t1

0x97b3,	// (0x000523a4) main_vded_pane_t2

0x0001,

0xf829,	// (0x0005841a) main_vded_pane_t

0x97c1,	// (0x000523b2) vded_slider_pane

0x97cb,	// (0x000523bc) vded_video_pane

0x100c,	// (0x00049bfd) vded_video_pane_g1

0x97d5,	// (0x000523c6) vded_video_pane_g2

0xf0ac,	// (0x00057c9d) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0005841f) vded_video_pane_g

0x1016,	// (0x00049c07) vded_slider_pane_g1

0xedff,	// (0x000579f0) vded_slider_pane_g2

0x101f,	// (0x00049c10) vded_slider_pane_g3

0x1028,	// (0x00049c19) vded_slider_pane_g4

0x1031,	// (0x00049c22) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00058426) vded_slider_pane_g

0x92b2,	// (0x00051ea3) mup3_rocker_pane_ParamLimits

0x92b2,	// (0x00051ea3) mup3_rocker_pane

0x97de,	// (0x000523cf) mup3_control_keys_pane_g1

0x97e6,	// (0x000523d7) mup3_control_keys_pane_g2

0x97ee,	// (0x000523df) mup3_control_keys_pane_g3

0x97f6,	// (0x000523e7) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00058431) mup3_control_keys_pane_g

0x48e0,	// (0x0004d4d1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x48e0,	// (0x0004d4d1) popup_toolbar2_fixed_window_cp01

0x92cc,	// (0x00051ebd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x92cc,	// (0x00051ebd) popup_toolbar2_fixed_window_cp02

0xdfdf,	// (0x00056bd0) popup_call2_audio_second_window_t4_ParamLimits

0xdfdf,	// (0x00056bd0) popup_call2_audio_second_window_t4

0xe50d,	// (0x000570fe) popup_call2_audio_first_window_t6_ParamLimits

0xe50d,	// (0x000570fe) popup_call2_audio_first_window_t6

0xe7a3,	// (0x00057394) popup_call2_audio_out_window_t6_ParamLimits

0xe7a3,	// (0x00057394) popup_call2_audio_out_window_t6

0x4653,	// (0x0004d244) main_vitu_pane

0x9806,	// (0x000523f7) aid_size_cell_itu_ParamLimits

0x9806,	// (0x000523f7) aid_size_cell_itu

0x145b,	// (0x0004a04c) bg_popup_window_pane_cp08_ParamLimits

0x145b,	// (0x0004a04c) bg_popup_window_pane_cp08

0x9814,	// (0x00052405) field_vitu_entry_pane_ParamLimits

0x9814,	// (0x00052405) field_vitu_entry_pane

0x9823,	// (0x00052414) grid_vitu_function_pane_ParamLimits

0x9823,	// (0x00052414) grid_vitu_function_pane

0x9833,	// (0x00052424) grid_vitu_itu_pane_ParamLimits

0x9833,	// (0x00052424) grid_vitu_itu_pane

0x9843,	// (0x00052434) cell_vitu_itu_pane_ParamLimits

0x9843,	// (0x00052434) cell_vitu_itu_pane

0x9858,	// (0x00052449) cell_vitu_function_pane_ParamLimits

0x9858,	// (0x00052449) cell_vitu_function_pane

0xec65,	// (0x00057856) bg_popup_sub_pane_cp08_ParamLimits

0xec65,	// (0x00057856) bg_popup_sub_pane_cp08

0x986a,	// (0x0005245b) field_vitu_entry_pane_t1_ParamLimits

0x986a,	// (0x0005245b) field_vitu_entry_pane_t1

0x1052,	// (0x00049c43) field_vitu_entry_pane_t2_ParamLimits

0x1052,	// (0x00049c43) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0005843f) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0005843f) field_vitu_entry_pane_t

0x106f,	// (0x00049c60) bg_button_pane_cp05_ParamLimits

0x106f,	// (0x00049c60) bg_button_pane_cp05

0x9885,	// (0x00052476) cell_vitu_itu_pane_g1

0x989d,	// (0x0005248e) cell_vitu_itu_pane_t1_ParamLimits

0x989d,	// (0x0005248e) cell_vitu_itu_pane_t1

0x98af,	// (0x000524a0) cell_vitu_itu_pane_t2_ParamLimits

0x98af,	// (0x000524a0) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00058444) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00058444) cell_vitu_itu_pane_t

0x107d,	// (0x00049c6e) bg_button_pane_cp07

0x98e4,	// (0x000524d5) cell_vitu_function_pane_g1

0x5286,	// (0x0004de77) main_calc_pane_g1

0x4699,	// (0x0004d28a) aid_visual_content_pane

0x4653,	// (0x0004d244) main_vradio_pane

0x98ed,	// (0x000524de) main_vradio_pane_g1_ParamLimits

0x98ed,	// (0x000524de) main_vradio_pane_g1

0x1087,	// (0x00049c78) main_vradio_pane_g2_ParamLimits

0x1087,	// (0x00049c78) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0005844b) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0005844b) main_vradio_pane_g

0x98fd,	// (0x000524ee) main_vradio_pane_t1_ParamLimits

0x98fd,	// (0x000524ee) main_vradio_pane_t1

0x990f,	// (0x00052500) main_vradio_pane_t2_ParamLimits

0x990f,	// (0x00052500) main_vradio_pane_t2

0x1094,	// (0x00049c85) main_vradio_pane_t3_ParamLimits

0x1094,	// (0x00049c85) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00058450) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00058450) main_vradio_pane_t

0x9921,	// (0x00052512) vradio_rocker_control_pane_ParamLimits

0x9921,	// (0x00052512) vradio_rocker_control_pane

0x992d,	// (0x0005251e) vradio_station_info_pane_ParamLimits

0x992d,	// (0x0005251e) vradio_station_info_pane

0x10a8,	// (0x00049c99) vradio_frequency_info_pane_ParamLimits

0x10a8,	// (0x00049c99) vradio_frequency_info_pane

0xf0ac,	// (0x00057c9d) vradio_station_info_pane_g1

0x10b7,	// (0x00049ca8) vradio_station_info_pane_t1_ParamLimits

0x10b7,	// (0x00049ca8) vradio_station_info_pane_t1

0x10d9,	// (0x00049cca) vradio_station_info_pane_t2_ParamLimits

0x10d9,	// (0x00049cca) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00058457) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00058457) vradio_station_info_pane_t

0x10eb,	// (0x00049cdc) vradio_tuning_pane

0x10f3,	// (0x00049ce4) vradio_rocker_control_pane_g1

0x10fb,	// (0x00049cec) vradio_rocker_control_pane_g2

0x1103,	// (0x00049cf4) vradio_rocker_control_pane_g3

0x110b,	// (0x00049cfc) vradio_rocker_control_pane_g4

0x1113,	// (0x00049d04) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0005845c) vradio_rocker_control_pane_g

0x993c,	// (0x0005252d) vradio_frequency_info_pane_g1

0x111b,	// (0x00049d0c) vradio_frequency_info_pane_t1_ParamLimits

0x111b,	// (0x00049d0c) vradio_frequency_info_pane_t1

0x9946,	// (0x00052537) vradio_tuning_pane_g1

0x994f,	// (0x00052540) vradio_tuning_pane_t1

0x46e2,	// (0x0004d2d3) area_side_right_pane_ParamLimits

0x46e2,	// (0x0004d2d3) area_side_right_pane

0xec1e,	// (0x0005780f) status_small_pane_g1

0xec26,	// (0x00057817) status_small_pane_g2

0xec2f,	// (0x00057820) status_small_pane_g3

0xec38,	// (0x00057829) status_small_pane_g4

0x0003,

0xf62b,	// (0x0005821c) status_small_pane_g

0xec41,	// (0x00057832) status_small_pane_t1

0x4653,	// (0x0004d244) main_video3_pane

0x112f,	// (0x00049d20) cams_zoom_vslider_pane

0x1137,	// (0x00049d28) image3_wide_pane_ParamLimits

0x1137,	// (0x00049d28) image3_wide_pane

0x1151,	// (0x00049d42) image3_wide_small_pane

0x115d,	// (0x00049d4e) main_video3_pane_g1_ParamLimits

0x115d,	// (0x00049d4e) main_video3_pane_g1

0x1179,	// (0x00049d6a) main_video3_pane_g2_ParamLimits

0x1179,	// (0x00049d6a) main_video3_pane_g2

0x0001,

0xf876,	// (0x00058467) main_video3_pane_g_ParamLimits

0xf876,	// (0x00058467) main_video3_pane_g

0x1195,	// (0x00049d86) main_video3_pane_t1_ParamLimits

0x1195,	// (0x00049d86) main_video3_pane_t1

0x11c0,	// (0x00049db1) main_video3_pane_t2_ParamLimits

0x11c0,	// (0x00049db1) main_video3_pane_t2

0x11eb,	// (0x00049ddc) main_video3_pane_t3_ParamLimits

0x11eb,	// (0x00049ddc) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0005846c) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0005846c) main_video3_pane_t

0x1218,	// (0x00049e09) cams_zoom_vslider_pane_g1

0x1221,	// (0x00049e12) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00058473) cams_zoom_vslider_pane_g

0x1229,	// (0x00049e1a) small_slider_vertical_pane

0xf0ac,	// (0x00057c9d) small_slider_vertical_pane_g1

0xf0ac,	// (0x00057c9d) small_slider_vertical_pane_g2

0x1231,	// (0x00049e22) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00058478) small_slider_vertical_pane_g

0x4653,	// (0x0004d244) main_hwr_training_pane

0x123a,	// (0x00049e2b) hwr_training_instruct_pane_ParamLimits

0x123a,	// (0x00049e2b) hwr_training_instruct_pane

0x995e,	// (0x0005254f) hwr_training_navi_pane_ParamLimits

0x995e,	// (0x0005254f) hwr_training_navi_pane

0x9978,	// (0x00052569) hwr_training_write_pane_ParamLimits

0x9978,	// (0x00052569) hwr_training_write_pane

0x4653,	// (0x0004d244) bg_frame_shadow_pane

0x1271,	// (0x00049e62) hwr_training_write_pane_g1

0x1279,	// (0x00049e6a) hwr_training_write_pane_g2

0x1281,	// (0x00049e72) hwr_training_write_pane_g3

0x1289,	// (0x00049e7a) hwr_training_write_pane_g4

0x1291,	// (0x00049e82) hwr_training_write_pane_g5

0x1299,	// (0x00049e8a) hwr_training_write_pane_g6

0x12a1,	// (0x00049e92) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0005847f) hwr_training_write_pane_g

0x99b0,	// (0x000525a1) hwr_training_navi_pane_g1_ParamLimits

0x99b0,	// (0x000525a1) hwr_training_navi_pane_g1

0x99c2,	// (0x000525b3) hwr_training_navi_pane_g2_ParamLimits

0x99c2,	// (0x000525b3) hwr_training_navi_pane_g2

0x99d4,	// (0x000525c5) hwr_training_navi_pane_g3_ParamLimits

0x99d4,	// (0x000525c5) hwr_training_navi_pane_g3

0x99e4,	// (0x000525d5) hwr_training_navi_pane_g4_ParamLimits

0x99e4,	// (0x000525d5) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0005848e) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0005848e) hwr_training_navi_pane_g

0x99fe,	// (0x000525ef) hwr_training_navi_pane_t1

0x9a0c,	// (0x000525fd) list_single_hwr_training_instruct_pane_ParamLimits

0x9a0c,	// (0x000525fd) list_single_hwr_training_instruct_pane

0x12a9,	// (0x00049e9a) list_single_hwr_training_instruct_pane_t1

0xefec,	// (0x00057bdd) bg_frame_shadow_pane_g1

0x12b8,	// (0x00049ea9) bg_frame_shadow_pane_g2

0x12c0,	// (0x00049eb1) bg_frame_shadow_pane_g3

0x12c8,	// (0x00049eb9) bg_frame_shadow_pane_g4

0x12d0,	// (0x00049ec1) bg_frame_shadow_pane_g5

0x12d8,	// (0x00049ec9) bg_frame_shadow_pane_g6

0x12e0,	// (0x00049ed1) bg_frame_shadow_pane_g7

0x562a,	// (0x0004e21b) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00058499) bg_frame_shadow_pane_g

0x4653,	// (0x0004d244) main_video_tele_dialer_pane

0x9a31,	// (0x00052622) aid_size_cell_video_keypad_ParamLimits

0x9a31,	// (0x00052622) aid_size_cell_video_keypad

0x9a41,	// (0x00052632) grid_video_dialer_keypad_pane_ParamLimits

0x9a41,	// (0x00052632) grid_video_dialer_keypad_pane

0x9a75,	// (0x00052666) video_down_pane_cp_ParamLimits

0x9a75,	// (0x00052666) video_down_pane_cp

0x9a9f,	// (0x00052690) cell_video_dialer_keypad_pane_ParamLimits

0x9a9f,	// (0x00052690) cell_video_dialer_keypad_pane

0x12e8,	// (0x00049ed9) bg_button_pane_cp08_ParamLimits

0x12e8,	// (0x00049ed9) bg_button_pane_cp08

0x9ab4,	// (0x000526a5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9ab4,	// (0x000526a5) cell_video_dialer_keypad_pane_g1

0x92a6,	// (0x00051e97) mup3_rocker2_pane_ParamLimits

0x92a6,	// (0x00051e97) mup3_rocker2_pane

0xf0ac,	// (0x00057c9d) mup3_rocker2_pane_g1

0x8221,	// (0x00050e12) main_dialer2_pane

0x4653,	// (0x0004d244) main_mp4_pane

0x9af3,	// (0x000526e4) main_mp4_pane_g1_ParamLimits

0x9af3,	// (0x000526e4) main_mp4_pane_g1

0x9b01,	// (0x000526f2) main_mp4_pane_g2_ParamLimits

0x9b01,	// (0x000526f2) main_mp4_pane_g2

0x9b0f,	// (0x00052700) main_mp4_pane_g3_ParamLimits

0x9b0f,	// (0x00052700) main_mp4_pane_g3

0x9b54,	// (0x00052745) main_mp4_pane_g4_ParamLimits

0x9b54,	// (0x00052745) main_mp4_pane_g4

0x9b7c,	// (0x0005276d) main_mp4_pane_g5_ParamLimits

0x9b7c,	// (0x0005276d) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000584b9) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000584b9) main_mp4_pane_g

0x9bcc,	// (0x000527bd) main_mp4_pane_t1_ParamLimits

0x9bcc,	// (0x000527bd) main_mp4_pane_t1

0x9c28,	// (0x00052819) main_mp4_pane_t2_ParamLimits

0x9c28,	// (0x00052819) main_mp4_pane_t2

0x12f4,	// (0x00049ee5) main_mp4_pane_t3_ParamLimits

0x12f4,	// (0x00049ee5) main_mp4_pane_t3

0x9c7a,	// (0x0005286b) main_mp4_pane_t4_ParamLimits

0x9c7a,	// (0x0005286b) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000584c6) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000584c6) main_mp4_pane_t

0x9cbe,	// (0x000528af) mp4_progress_pane_ParamLimits

0x9cbe,	// (0x000528af) mp4_progress_pane

0x9d08,	// (0x000528f9) mp4_rocker_pane_ParamLimits

0x9d08,	// (0x000528f9) mp4_rocker_pane

0x131c,	// (0x00049f0d) mp4_progress_pane_t1

0x1335,	// (0x00049f26) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x000584cf) mp4_progress_pane_t

0x134e,	// (0x00049f3f) mup_progress_pane_cp04

0x1c03,	// (0x0004a7f4) mp4_rocker_pane_g1

0x9d28,	// (0x00052919) aid_cell_size_keypad2_ParamLimits

0x9d28,	// (0x00052919) aid_cell_size_keypad2

0x9d38,	// (0x00052929) dialer2_ne_pane_ParamLimits

0x9d38,	// (0x00052929) dialer2_ne_pane

0x9d46,	// (0x00052937) grid_dialer2_keypad_pane_ParamLimits

0x9d46,	// (0x00052937) grid_dialer2_keypad_pane

0x1c5e,	// (0x0004a84f) bg_popup_call_pane_cp07_ParamLimits

0x1c5e,	// (0x0004a84f) bg_popup_call_pane_cp07

0x9d56,	// (0x00052947) dialer2_ne_pane_t1_ParamLimits

0x9d56,	// (0x00052947) dialer2_ne_pane_t1

0x9d7b,	// (0x0005296c) cell_dialer2_keypad_pane_ParamLimits

0x9d7b,	// (0x0005296c) cell_dialer2_keypad_pane

0x136c,	// (0x00049f5d) bg_button_pane_pane_cp04_ParamLimits

0x136c,	// (0x00049f5d) bg_button_pane_pane_cp04

0x9d90,	// (0x00052981) cell_dialer2_keypad_pane_g1_ParamLimits

0x9d90,	// (0x00052981) cell_dialer2_keypad_pane_g1

0x5fca,	// (0x0004ebbb) aid_placing_vt_set_content_ParamLimits

0x5fca,	// (0x0004ebbb) aid_placing_vt_set_content

0x5fe4,	// (0x0004ebd5) aid_placing_vt_set_title_ParamLimits

0x5fe4,	// (0x0004ebd5) aid_placing_vt_set_title

0x4653,	// (0x0004d244) main_image3_pane

0x9e2a,	// (0x00052a1b) area_side_right_pane_cp01_ParamLimits

0x9e2a,	// (0x00052a1b) area_side_right_pane_cp01

0x9e57,	// (0x00052a48) main_image3_pane_g1_ParamLimits

0x9e57,	// (0x00052a48) main_image3_pane_g1

0x9e65,	// (0x00052a56) main_image3_pane_g2_ParamLimits

0x9e65,	// (0x00052a56) main_image3_pane_g2

0x9e7e,	// (0x00052a6f) main_image3_pane_g3_ParamLimits

0x9e7e,	// (0x00052a6f) main_image3_pane_g3

0x9e97,	// (0x00052a88) main_image3_pane_g4_ParamLimits

0x9e97,	// (0x00052a88) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x000584de) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x000584de) main_image3_pane_g

0x9eb0,	// (0x00052aa1) main_image3_pane_t1_ParamLimits

0x9eb0,	// (0x00052aa1) main_image3_pane_t1

0x9ed5,	// (0x00052ac6) main_image3_pane_t2_ParamLimits

0x9ed5,	// (0x00052ac6) main_image3_pane_t2

0x9ef4,	// (0x00052ae5) main_image3_pane_t3_ParamLimits

0x9ef4,	// (0x00052ae5) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x000584e7) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x000584e7) main_image3_pane_t

0x145b,	// (0x0004a04c) grid_sctrl_middle_pane_cp01_ParamLimits

0x145b,	// (0x0004a04c) grid_sctrl_middle_pane_cp01

0x9f55,	// (0x00052b46) cell_sctrl_middle_pane_cp01_ParamLimits

0x9f55,	// (0x00052b46) cell_sctrl_middle_pane_cp01

0x9f66,	// (0x00052b57) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9f66,	// (0x00052b57) cell_sctrl_middle_pane_cp01_g1

0x4653,	// (0x0004d244) main_call4_pane

0x9f73,	// (0x00052b64) aid_size_button_call4_ParamLimits

0x9f73,	// (0x00052b64) aid_size_button_call4

0x9fa3,	// (0x00052b94) call4_windows_pane_ParamLimits

0x9fa3,	// (0x00052b94) call4_windows_pane

0x9fbd,	// (0x00052bae) grid_call4_button_pane_ParamLimits

0x9fbd,	// (0x00052bae) grid_call4_button_pane

0x1378,	// (0x00049f69) call4_windows_conf_pane

0x138f,	// (0x00049f80) popup_call4_audio_first_window_ParamLimits

0x138f,	// (0x00049f80) popup_call4_audio_first_window

0x13db,	// (0x00049fcc) popup_call4_audio_second_window_ParamLimits

0x13db,	// (0x00049fcc) popup_call4_audio_second_window

0x13ef,	// (0x00049fe0) popup_call4_audio_wait_window_ParamLimits

0x13ef,	// (0x00049fe0) popup_call4_audio_wait_window

0x9fe1,	// (0x00052bd2) cell_call4_button_pane_ParamLimits

0x9fe1,	// (0x00052bd2) cell_call4_button_pane

0xa006,	// (0x00052bf7) bg_button_pane_cp09_ParamLimits

0xa006,	// (0x00052bf7) bg_button_pane_cp09

0xa012,	// (0x00052c03) cell_call4_button_pane_g1_ParamLimits

0xa012,	// (0x00052c03) cell_call4_button_pane_g1

0xa01f,	// (0x00052c10) cell_call4_button_pane_t1_ParamLimits

0xa01f,	// (0x00052c10) cell_call4_button_pane_t1

0x1437,	// (0x0004a028) popup_call4_audio_conf_window_ParamLimits

0x1437,	// (0x0004a028) popup_call4_audio_conf_window

0x92d9,	// (0x00051eca) mup3_progress_pane_t1_ParamLimits

0x92f0,	// (0x00051ee1) mup3_progress_pane_t2_ParamLimits

0x0d57,	// (0x00049948) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000583c0) mup3_progress_pane_t_ParamLimits

0x0d6e,	// (0x0004995f) mup_progress_pane_cp03_ParamLimits

0x97fe,	// (0x000523ef) mup3_control_keys_pane_g4_copy1

0x9cec,	// (0x000528dd) mp4_rocker2_pane_ParamLimits

0x9cec,	// (0x000528dd) mp4_rocker2_pane

0x1453,	// (0x0004a044) mp4_rocker2_pane_g1

0x144b,	// (0x0004a03c) mp4_rocker2_pane_g2

0xa031,	// (0x00052c22) mp4_rocker2_pane_g3

0xa039,	// (0x00052c2a) mp4_rocker2_pane_g4

0xa041,	// (0x00052c32) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x000584f0) mp4_rocker2_pane_g

0x4653,	// (0x0004d244) main_camera4_pane

0x4653,	// (0x0004d244) main_video4_pane

0x9a51,	// (0x00052642) main_video_tele_dialer_pane_t1_ParamLimits

0x9a51,	// (0x00052642) main_video_tele_dialer_pane_t1

0x9a63,	// (0x00052654) main_video_tele_dialer_pane_t2_ParamLimits

0x9a63,	// (0x00052654) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x000584aa) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x000584aa) main_video_tele_dialer_pane_t

0xa061,	// (0x00052c52) cam4_autofocus_pane_ParamLimits

0xa061,	// (0x00052c52) cam4_autofocus_pane

0xa06f,	// (0x00052c60) cam4_image_uncrop_pane_ParamLimits

0xa06f,	// (0x00052c60) cam4_image_uncrop_pane

0xa086,	// (0x00052c77) cam4_indicators_pane_ParamLimits

0xa086,	// (0x00052c77) cam4_indicators_pane

0xa0a2,	// (0x00052c93) main_camera4_pane_g1_ParamLimits

0xa0a2,	// (0x00052c93) main_camera4_pane_g1

0xa0ae,	// (0x00052c9f) main_camera4_pane_g2_ParamLimits

0xa0ae,	// (0x00052c9f) main_camera4_pane_g2

0xa0ae,	// (0x00052c9f) main_camera4_pane_g3_ParamLimits

0xa0ae,	// (0x00052c9f) main_camera4_pane_g3

0xa0ba,	// (0x00052cab) main_camera4_pane_g4_ParamLimits

0xa0ba,	// (0x00052cab) main_camera4_pane_g4

0xa0c6,	// (0x00052cb7) main_camera4_pane_g5_ParamLimits

0xa0c6,	// (0x00052cb7) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x000584fb) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x000584fb) main_camera4_pane_g

0xa0e0,	// (0x00052cd1) main_camera4_pane_t1_ParamLimits

0xa0e0,	// (0x00052cd1) main_camera4_pane_t1

0xa128,	// (0x00052d19) bg_tb_trans_pane_cp06

0xa13e,	// (0x00052d2f) cam4_indicators_pane_g1

0xa14f,	// (0x00052d40) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00058516) cam4_indicators_pane_g

0xa16d,	// (0x00052d5e) cam4_indicators_pane_t1

0xa197,	// (0x00052d88) main_video4_pane_g1_ParamLimits

0xa197,	// (0x00052d88) main_video4_pane_g1

0xa1a3,	// (0x00052d94) main_video4_pane_g2_ParamLimits

0xa1a3,	// (0x00052d94) main_video4_pane_g2

0xa1af,	// (0x00052da0) main_video4_pane_g3_ParamLimits

0xa1af,	// (0x00052da0) main_video4_pane_g3

0xa1bb,	// (0x00052dac) main_video4_pane_g4_ParamLimits

0xa1bb,	// (0x00052dac) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0005851d) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0005851d) main_video4_pane_g

0xa1db,	// (0x00052dcc) vid4_indicators_pane_ParamLimits

0xa1db,	// (0x00052dcc) vid4_indicators_pane

0xa1f9,	// (0x00052dea) video4_image_uncrop_cif_pane_ParamLimits

0xa1f9,	// (0x00052dea) video4_image_uncrop_cif_pane

0xa208,	// (0x00052df9) video4_image_uncrop_nhd_pane_ParamLimits

0xa208,	// (0x00052df9) video4_image_uncrop_nhd_pane

0xa06f,	// (0x00052c60) video4_image_uncrop_vga_pane_ParamLimits

0xa06f,	// (0x00052c60) video4_image_uncrop_vga_pane

0xa215,	// (0x00052e06) bg_tb_trans_pane_cp07

0xa22d,	// (0x00052e1e) vid4_indicators_pane_g1

0xa23e,	// (0x00052e2f) vid4_indicators_pane_g2

0xa24f,	// (0x00052e40) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00058528) vid4_indicators_pane_g

0xa27c,	// (0x00052e6d) vid4_indicators_pane_t1

0xa295,	// (0x00052e86) cam4_autofocus_pane_g1

0xa29d,	// (0x00052e8e) cam4_autofocus_pane_g2

0xa2a5,	// (0x00052e96) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00058533) cam4_autofocus_pane_g

0xa2ad,	// (0x00052e9e) cam4_autofocus_pane_g3_copy1

0x9a83,	// (0x00052674) video_down_pane_cp_t1

0x9a91,	// (0x00052682) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000584af) video_down_pane_cp_t

0x145b,	// (0x0004a04c) popup_vitu2_window_ParamLimits

0x145b,	// (0x0004a04c) popup_vitu2_window

0xa2b5,	// (0x00052ea6) aid_size_cell2_itu2_ParamLimits

0xa2b5,	// (0x00052ea6) aid_size_cell2_itu2

0xa2d7,	// (0x00052ec8) aid_size_cell_itu2_ParamLimits

0xa2d7,	// (0x00052ec8) aid_size_cell_itu2

0xa31b,	// (0x00052f0c) bg_popup_window_pane_cp09_ParamLimits

0xa31b,	// (0x00052f0c) bg_popup_window_pane_cp09

0xa329,	// (0x00052f1a) field_vitu2_entry_pane_ParamLimits

0xa329,	// (0x00052f1a) field_vitu2_entry_pane

0xa349,	// (0x00052f3a) grid_vitu2_function_pane_ParamLimits

0xa349,	// (0x00052f3a) grid_vitu2_function_pane

0xa38d,	// (0x00052f7e) grid_vitu2_itu_pane_ParamLimits

0xa38d,	// (0x00052f7e) grid_vitu2_itu_pane

0xa405,	// (0x00052ff6) cell_vitu2_itu_pane_ParamLimits

0xa405,	// (0x00052ff6) cell_vitu2_itu_pane

0xa41a,	// (0x0005300b) cell_vitu2_function_pane_ParamLimits

0xa41a,	// (0x0005300b) cell_vitu2_function_pane

0x1469,	// (0x0004a05a) bg_popup_call_pane_cp08_ParamLimits

0x1469,	// (0x0004a05a) bg_popup_call_pane_cp08

0x1482,	// (0x0004a073) field_vitu2_entry_pane_g1

0x148e,	// (0x0004a07f) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0005853a) field_vitu2_entry_pane_g

0xa459,	// (0x0005304a) field_vitu2_entry_pane_t1_ParamLimits

0xa459,	// (0x0005304a) field_vitu2_entry_pane_t1

0x14a8,	// (0x0004a099) field_vitu2_entry_pane_t2_ParamLimits

0x14a8,	// (0x0004a099) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00058541) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00058541) field_vitu2_entry_pane_t

0xa489,	// (0x0005307a) bg_button_pane_cp010_ParamLimits

0xa489,	// (0x0005307a) bg_button_pane_cp010

0xa497,	// (0x00053088) cell_vitu2_itu_pane_g1

0xa4b5,	// (0x000530a6) cell_vitu2_itu_pane_t1_ParamLimits

0xa4b5,	// (0x000530a6) cell_vitu2_itu_pane_t1

0x4580,	// (0x0004d171) cell_vitu2_itu_pane_t2_ParamLimits

0x4580,	// (0x0004d171) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0005854b) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0005854b) cell_vitu2_itu_pane_t

0xa215,	// (0x00052e06) bg_button_pane_cp011

0xa507,	// (0x000530f8) cell_vitu2_function_pane_g1

0x4653,	// (0x0004d244) main_myfav_hc_pane

0x9f36,	// (0x00052b27) popup_image3_note_pane_ParamLimits

0x9f36,	// (0x00052b27) popup_image3_note_pane

0x9f44,	// (0x00052b35) popup_image3_tool_bar_pane_ParamLimits

0x9f44,	// (0x00052b35) popup_image3_tool_bar_pane

0x45ee,	// (0x0004d1df) cell_vitu2_itu_pane_t3_ParamLimits

0x45ee,	// (0x0004d1df) cell_vitu2_itu_pane_t3

0x4653,	// (0x0004d244) bg_popup_trans_pane

0x14cd,	// (0x0004a0be) grid_image3_tool_bar_pane

0x14d7,	// (0x0004a0c8) bg_popup_trans_pane_g1

0x65d2,	// (0x0004f1c3) bg_popup_trans_pane_g2

0x14df,	// (0x0004a0d0) bg_popup_trans_pane_g3

0x14e7,	// (0x0004a0d8) bg_popup_trans_pane_g4

0x14ef,	// (0x0004a0e0) bg_popup_trans_pane_g5

0x14f7,	// (0x0004a0e8) bg_popup_trans_pane_g6

0x14ff,	// (0x0004a0f0) bg_popup_trans_pane_g7

0x1507,	// (0x0004a0f8) bg_popup_trans_pane_g8

0x65b2,	// (0x0004f1a3) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00058552) bg_popup_trans_pane_g

0x150f,	// (0x0004a100) cell_image3_tool_bar_pane_ParamLimits

0x150f,	// (0x0004a100) cell_image3_tool_bar_pane

0xf0ac,	// (0x00057c9d) cell_image3_tool_bar_pane_g1

0x4653,	// (0x0004d244) bg_popup_trans_pane_cp1

0x1523,	// (0x0004a114) popup_image3_note_pane_t1

0x1531,	// (0x0004a122) popup_image3_note_pane_t2

0x153f,	// (0x0004a130) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00058565) popup_image3_note_pane_t

0x154d,	// (0x0004a13e) popup_image3_note_pane_t3_copy1

0xa51b,	// (0x0005310c) bg_myfav_hc_instruction_pane_ParamLimits

0xa51b,	// (0x0005310c) bg_myfav_hc_instruction_pane

0xa533,	// (0x00053124) cell_myfav_contact_pane_ParamLimits

0xa533,	// (0x00053124) cell_myfav_contact_pane

0xa54d,	// (0x0005313e) cell_myfav_contact_pane_cp1_ParamLimits

0xa54d,	// (0x0005313e) cell_myfav_contact_pane_cp1

0xa565,	// (0x00053156) cell_myfav_contact_pane_cp2_ParamLimits

0xa565,	// (0x00053156) cell_myfav_contact_pane_cp2

0xa57d,	// (0x0005316e) cell_myfav_contact_pane_cp3_ParamLimits

0xa57d,	// (0x0005316e) cell_myfav_contact_pane_cp3

0xa594,	// (0x00053185) cell_myfav_contact_pane_cp4_ParamLimits

0xa594,	// (0x00053185) cell_myfav_contact_pane_cp4

0xa5aa,	// (0x0005319b) cell_myfav_contact_pane_cp5_ParamLimits

0xa5aa,	// (0x0005319b) cell_myfav_contact_pane_cp5

0xa5be,	// (0x000531af) cell_myfav_contact_pane_cp6_ParamLimits

0xa5be,	// (0x000531af) cell_myfav_contact_pane_cp6

0xa5d2,	// (0x000531c3) cell_myfav_contact_pane_cp7_ParamLimits

0xa5d2,	// (0x000531c3) cell_myfav_contact_pane_cp7

0x155b,	// (0x0004a14c) listscroll_gen_pane_cp05

0xa5ea,	// (0x000531db) main_myfav_hc_pane_g1_ParamLimits

0xa5ea,	// (0x000531db) main_myfav_hc_pane_g1

0xa600,	// (0x000531f1) main_myfav_hc_pane_g2_ParamLimits

0xa600,	// (0x000531f1) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0005856c) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0005856c) main_myfav_hc_pane_g

0xa62e,	// (0x0005321f) main_myfav_hc_pane_t1_ParamLimits

0xa62e,	// (0x0005321f) main_myfav_hc_pane_t1

0x1564,	// (0x0004a155) main_myfav_hc_pane_t2_ParamLimits

0x1564,	// (0x0004a155) main_myfav_hc_pane_t2

0x1576,	// (0x0004a167) main_myfav_hc_pane_t3_ParamLimits

0x1576,	// (0x0004a167) main_myfav_hc_pane_t3

0xa645,	// (0x00053236) main_myfav_hc_pane_t4_ParamLimits

0xa645,	// (0x00053236) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00058573) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00058573) main_myfav_hc_pane_t

0xf0ac,	// (0x00057c9d) bg_myfav_hc_instruction_pane_g1

0x1588,	// (0x0004a179) cell_myfav_contact_pane_g1_ParamLimits

0x1588,	// (0x0004a179) cell_myfav_contact_pane_g1

0x1588,	// (0x0004a179) cell_myfav_contact_pane_g2_ParamLimits

0x1588,	// (0x0004a179) cell_myfav_contact_pane_g2

0x1594,	// (0x0004a185) cell_myfav_contact_pane_g3_ParamLimits

0x1594,	// (0x0004a185) cell_myfav_contact_pane_g3

0x0d41,	// (0x00049932) cell_myfav_contact_pane_g4_ParamLimits

0x0d41,	// (0x00049932) cell_myfav_contact_pane_g4

0x15a1,	// (0x0004a192) cell_myfav_contact_pane_g5_ParamLimits

0x15a1,	// (0x0004a192) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0005857e) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0005857e) cell_myfav_contact_pane_g

0xa616,	// (0x00053207) main_myfav_hc_pane_g3_ParamLimits

0xa616,	// (0x00053207) main_myfav_hc_pane_g3

0x481a,	// (0x0004d40b) popup_adpt_find_window

0xa66f,	// (0x00053260) afind_page_pane_ParamLimits

0xa66f,	// (0x00053260) afind_page_pane

0xa67c,	// (0x0005326d) aid_size_cell_afind_ParamLimits

0xa67c,	// (0x0005326d) aid_size_cell_afind

0xa696,	// (0x00053287) bg_popup_sub_pane_cp09_ParamLimits

0xa696,	// (0x00053287) bg_popup_sub_pane_cp09

0xa6a3,	// (0x00053294) find_pane_cp01_ParamLimits

0xa6a3,	// (0x00053294) find_pane_cp01

0x15ad,	// (0x0004a19e) grid_afind_control_pane_ParamLimits

0x15ad,	// (0x0004a19e) grid_afind_control_pane

0xa6b0,	// (0x000532a1) grid_afind_pane_ParamLimits

0xa6b0,	// (0x000532a1) grid_afind_pane

0xa6cc,	// (0x000532bd) cell_afind_pane_ParamLimits

0xa6cc,	// (0x000532bd) cell_afind_pane

0xf0ac,	// (0x00057c9d) afind_page_pane_g1

0xa712,	// (0x00053303) afind_page_pane_g2

0xa71b,	// (0x0005330c) afind_page_pane_g3

0x0002,

0xf998,	// (0x00058589) afind_page_pane_g

0xa724,	// (0x00053315) afind_page_pane_t1

0x15c1,	// (0x0004a1b2) cell_afind_grid_control_pane_ParamLimits

0x15c1,	// (0x0004a1b2) cell_afind_grid_control_pane

0x136c,	// (0x00049f5d) bg_button_pane_cp69_ParamLimits

0x136c,	// (0x00049f5d) bg_button_pane_cp69

0xa744,	// (0x00053335) cell_afind_pane_g1_ParamLimits

0xa744,	// (0x00053335) cell_afind_pane_g1

0xa751,	// (0x00053342) cell_afind_pane_t1_ParamLimits

0xa751,	// (0x00053342) cell_afind_pane_t1

0x5f08,	// (0x0004eaf9) bg_button_pane_cp72

0x15d0,	// (0x0004a1c1) cell_afind_grid_control_pane_g1

0x7d9f,	// (0x00050990) aid_image_placing_area_ParamLimits

0x7d9f,	// (0x00050990) aid_image_placing_area

0x103a,	// (0x00049c2b) field_vitu_entry_pane_g1_ParamLimits

0x103a,	// (0x00049c2b) field_vitu_entry_pane_g1

0x1046,	// (0x00049c37) field_vitu_entry_pane_g2_ParamLimits

0x1046,	// (0x00049c37) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0005843a) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0005843a) field_vitu_entry_pane_g

0x9885,	// (0x00052476) cell_vitu_itu_pane_g1_ParamLimits

0x98c7,	// (0x000524b8) cell_vitu_itu_pane_t3_ParamLimits

0x98c7,	// (0x000524b8) cell_vitu_itu_pane_t3

0x131c,	// (0x00049f0d) mp4_progress_pane_t1_ParamLimits

0x1335,	// (0x00049f26) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x000584cf) mp4_progress_pane_t_ParamLimits

0x134e,	// (0x00049f3f) mup_progress_pane_cp04_ParamLimits

0xa659,	// (0x0005324a) main_myfav_hc_pane_t5_ParamLimits

0xa659,	// (0x0005324a) main_myfav_hc_pane_t5

0x46a5,	// (0x0004d296) aid_zoom_text_primary

0x481a,	// (0x0004d40b) popup_adpt_find_window_ParamLimits

0xec65,	// (0x00057856) main_cam_set_pane

0xa094,	// (0x00052c85) cam4_zoom_pane_ParamLimits

0xa094,	// (0x00052c85) cam4_zoom_pane

0xa763,	// (0x00053354) main_cam_set_pane_g1_ParamLimits

0xa763,	// (0x00053354) main_cam_set_pane_g1

0xa771,	// (0x00053362) main_cam_set_pane_g2_ParamLimits

0xa771,	// (0x00053362) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00058590) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00058590) main_cam_set_pane_g

0xa77d,	// (0x0005336e) main_cam_set_pane_t1_ParamLimits

0xa77d,	// (0x0005336e) main_cam_set_pane_t1

0xa799,	// (0x0005338a) main_cset_listscroll_pane_ParamLimits

0xa799,	// (0x0005338a) main_cset_listscroll_pane

0xa7c4,	// (0x000533b5) main_cset_slider_pane_ParamLimits

0xa7c4,	// (0x000533b5) main_cset_slider_pane

0x15e1,	// (0x0004a1d2) main_cset_list_pane_ParamLimits

0x15e1,	// (0x0004a1d2) main_cset_list_pane

0x15f1,	// (0x0004a1e2) scroll_pane_cp028

0xa7e3,	// (0x000533d4) aid_area_touch_slider

0xa7ff,	// (0x000533f0) cset_slider_pane

0xa829,	// (0x0005341a) main_cset_slider_pane_g1

0xa83e,	// (0x0005342f) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00058595) main_cset_slider_pane_g

0x162a,	// (0x0004a21b) main_cset_slider_pane_t1

0xa900,	// (0x000534f1) main_cset_slider_pane_t2

0xa91a,	// (0x0005350b) main_cset_slider_pane_t3

0xa934,	// (0x00053525) main_cset_slider_pane_t4

0xa94e,	// (0x0005353f) main_cset_slider_pane_t5

0xa96c,	// (0x0005355d) main_cset_slider_pane_t6

0xa983,	// (0x00053574) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x000585ba) main_cset_slider_pane_t

0xaa8f,	// (0x00053680) cset_list_set_pane_ParamLimits

0xaa8f,	// (0x00053680) cset_list_set_pane

0xaaa5,	// (0x00053696) aid_position_infowindow_above

0xaaad,	// (0x0005369e) aid_position_infowindow_below

0x16ca,	// (0x0004a2bb) cset_list_set_pane_g1_ParamLimits

0x16ca,	// (0x0004a2bb) cset_list_set_pane_g1

0x16d6,	// (0x0004a2c7) cset_list_set_pane_g3_ParamLimits

0x16d6,	// (0x0004a2c7) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x000585d9) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x000585d9) cset_list_set_pane_g

0xaab5,	// (0x000536a6) cset_list_set_pane_t1_ParamLimits

0xaab5,	// (0x000536a6) cset_list_set_pane_t1

0xec65,	// (0x00057856) list_highlight_pane_cp021_ParamLimits

0xec65,	// (0x00057856) list_highlight_pane_cp021

0xd9a1,	// (0x00056592) cset_slider_pane_g1

0xd9b3,	// (0x000565a4) cset_slider_pane_g2

0xd9aa,	// (0x0005659b) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x000585de) cset_slider_pane_g

0xaaca,	// (0x000536bb) aid_area_touch_cam4_zoom

0xaad2,	// (0x000536c3) cam4_zoom_cont_pane

0xaada,	// (0x000536cb) cam4_zoom_pane_g1

0xaae2,	// (0x000536d3) cam4_zoom_pane_g2

0xaaea,	// (0x000536db) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x000585e5) cam4_zoom_pane_g

0xaaf2,	// (0x000536e3) cam4_zoom_cont_pane_g1

0xaafb,	// (0x000536ec) cam4_zoom_cont_pane_g2

0xab04,	// (0x000536f5) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x000585ec) cam4_zoom_cont_pane_g

0x9f8d,	// (0x00052b7e) call4_image_pane_ParamLimits

0x9f8d,	// (0x00052b7e) call4_image_pane

0x1378,	// (0x00049f69) call4_windows_conf_pane_ParamLimits

0x13b9,	// (0x00049faa) popup_call4_audio_in_window_ParamLimits

0x13b9,	// (0x00049faa) popup_call4_audio_in_window

0x4653,	// (0x0004d244) bg_popup_call2_act_pane_cp02

0x142f,	// (0x0004a020) call4_list_conf_pane

0xf0ac,	// (0x00057c9d) call4_image_pane_g1

0xf0ac,	// (0x00057c9d) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00058300) call4_image_pane_g

0x1700,	// (0x0004a2f1) list_single_graphic_popup_conf4_pane_ParamLimits

0x1700,	// (0x0004a2f1) list_single_graphic_popup_conf4_pane

0x4653,	// (0x0004d244) list_highlight_pane_cp022

0x1713,	// (0x0004a304) list_single_graphic_popup_conf4_pane_g1

0xd680,	// (0x00056271) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x000585f3) list_single_graphic_popup_conf4_pane_g

0x171b,	// (0x0004a30c) list_single_graphic_popup_conf4_pane_t1

0x6101,	// (0x0004ecf2) popup_vtel_slider_window_ParamLimits

0x6101,	// (0x0004ecf2) popup_vtel_slider_window

0x135a,	// (0x00049f4b) dialer2_ne_pane_t2_ParamLimits

0x135a,	// (0x00049f4b) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x000584d4) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x000584d4) dialer2_ne_pane_t

0xec65,	// (0x00057856) bg_popup_sub_pane_cp010_ParamLimits

0xec65,	// (0x00057856) bg_popup_sub_pane_cp010

0xab0d,	// (0x000536fe) popup_vtel_slider_window_g1_ParamLimits

0xab0d,	// (0x000536fe) popup_vtel_slider_window_g1

0xab19,	// (0x0005370a) popup_vtel_slider_window_g2_ParamLimits

0xab19,	// (0x0005370a) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x000585f8) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x000585f8) popup_vtel_slider_window_g

0xab61,	// (0x00053752) vtel_slider_pane_ParamLimits

0xab61,	// (0x00053752) vtel_slider_pane

0xab70,	// (0x00053761) vtel_slider_pane_g1_ParamLimits

0xab70,	// (0x00053761) vtel_slider_pane_g1

0xab7d,	// (0x0005376e) vtel_slider_pane_g2_ParamLimits

0xab7d,	// (0x0005376e) vtel_slider_pane_g2

0xab8a,	// (0x0005377b) vtel_slider_pane_g3_ParamLimits

0xab8a,	// (0x0005377b) vtel_slider_pane_g3

0xab70,	// (0x00053761) vtel_slider_pane_g4_ParamLimits

0xab70,	// (0x00053761) vtel_slider_pane_g4

0xab97,	// (0x00053788) vtel_slider_pane_g5_ParamLimits

0xab97,	// (0x00053788) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00058601) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00058601) vtel_slider_pane_g

0x4653,	// (0x0004d244) main_gallery2_pane

0xa2fd,	// (0x00052eee) aid_size_row_itut2_dropdow_list_ParamLimits

0xa2fd,	// (0x00052eee) aid_size_row_itut2_dropdow_list

0xa36b,	// (0x00052f5c) grid_vitu2_function_top_pane_ParamLimits

0xa36b,	// (0x00052f5c) grid_vitu2_function_top_pane

0xa3c1,	// (0x00052fb2) popup_vitu2_dropdown_list_window_ParamLimits

0xa3c1,	// (0x00052fb2) popup_vitu2_dropdown_list_window

0xa3e1,	// (0x00052fd2) popup_vitu2_match_list_window

0xaba4,	// (0x00053795) cell_vitu2_function_top_pane_ParamLimits

0xaba4,	// (0x00053795) cell_vitu2_function_top_pane

0xabc4,	// (0x000537b5) cell_vitu2_function_top_pane_cp01_ParamLimits

0xabc4,	// (0x000537b5) cell_vitu2_function_top_pane_cp01

0xabe2,	// (0x000537d3) cell_vitu2_function_top_wide_pane_ParamLimits

0xabe2,	// (0x000537d3) cell_vitu2_function_top_wide_pane

0xa215,	// (0x00052e06) bg_button_pane_cp012

0xac00,	// (0x000537f1) cell_vitu2_function_top_pane_g1

0xac0f,	// (0x00053800) bg_button_pane_cp013_ParamLimits

0xac0f,	// (0x00053800) bg_button_pane_cp013

0xac2b,	// (0x0005381c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xac2b,	// (0x0005381c) cell_vitu2_function_top_wide_pane_g1

0xac43,	// (0x00053834) bg_popup_sub_pane_cp20

0xac51,	// (0x00053842) list_vitu2_match_list_pane

0x14d7,	// (0x0004a0c8) bg_popup_sub_pane_cp20_g1

0x14df,	// (0x0004a0d0) bg_popup_sub_pane_cp20_g2

0x65d2,	// (0x0004f1c3) bg_popup_sub_pane_cp20_g3

0x14e7,	// (0x0004a0d8) bg_popup_sub_pane_cp20_g4

0x65b2,	// (0x0004f1a3) bg_popup_sub_pane_cp20_g5

0x1737,	// (0x0004a328) bg_popup_sub_pane_cp20_g6

0x14f7,	// (0x0004a0e8) bg_popup_sub_pane_cp20_g7

0x14ff,	// (0x0004a0f0) bg_popup_sub_pane_cp20_g8

0x1507,	// (0x0004a0f8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0005860c) bg_popup_sub_pane_cp20_g

0xac69,	// (0x0005385a) list_vitu2_match_list_item_pane_ParamLimits

0xac69,	// (0x0005385a) list_vitu2_match_list_item_pane

0xac7b,	// (0x0005386c) list_vitu2_match_list_item_pane_t1

0x539f,	// (0x0004df90) bg_popup_sub_pane_cp21

0xacb8,	// (0x000538a9) grid_vitu2_dropdown_list_pane

0xacc0,	// (0x000538b1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xacc0,	// (0x000538b1) cell_vitu2_dropdown_list_char_pane

0xace1,	// (0x000538d2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xace1,	// (0x000538d2) cell_vitu2_dropdown_list_ctrl_pane

0x1769,	// (0x0004a35a) cell_vitu2_dropdown_list_char_pane_g1

0x1760,	// (0x0004a351) cell_vitu2_dropdown_list_char_pane_g2

0x1757,	// (0x0004a348) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00058629) cell_vitu2_dropdown_list_char_pane_g

0xad0d,	// (0x000538fe) cell_vitu2_dropdown_list_char_pane_t1

0xad1b,	// (0x0005390c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xad1b,	// (0x0005390c) cell_vitu2_dropdown_list_ctrl_pane_g1

0xad2b,	// (0x0005391c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xad2b,	// (0x0005391c) cell_vitu2_dropdown_list_ctrl_pane_g2

0xad3c,	// (0x0005392d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xad3c,	// (0x0005392d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xad4c,	// (0x0005393d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xad4c,	// (0x0005393d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa128,	// (0x00052d19) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa128,	// (0x00052d19) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00058630) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00058630) cell_vitu2_dropdown_list_ctrl_pane_g

0xad68,	// (0x00053959) aid_size_cell_gallery2_ParamLimits

0xad68,	// (0x00053959) aid_size_cell_gallery2

0xad76,	// (0x00053967) grid_gallery2_pane_ParamLimits

0xad76,	// (0x00053967) grid_gallery2_pane

0xad85,	// (0x00053976) scroll_pane_cp029_ParamLimits

0xad85,	// (0x00053976) scroll_pane_cp029

0xad91,	// (0x00053982) cell_gallery2_pane_ParamLimits

0xad91,	// (0x00053982) cell_gallery2_pane

0x1772,	// (0x0004a363) cell_gallery2_pane_g2

0x2d8c,	// (0x0004b97d) cell_gallery2_pane_g3

0x177c,	// (0x0004a36d) cell_gallery2_pane_g4

0x1784,	// (0x0004a375) cell_gallery2_pane_g5

0xd86b,	// (0x0005645c) grid_highlight_pane_cp10

0xa3e1,	// (0x00052fd2) popup_vitu2_match_list_window_ParamLimits

0xa3f5,	// (0x00052fe6) popup_vitu2_query_window_ParamLimits

0xa3f5,	// (0x00052fe6) popup_vitu2_query_window

0x539f,	// (0x0004df90) bg_vitu2_candi_button_pane

0x1769,	// (0x0004a35a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1760,	// (0x0004a351) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1757,	// (0x0004a348) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xadbf,	// (0x000539b0) bg_button_pane_cp015

0xadc9,	// (0x000539ba) bg_button_pane_cp016

0xadd3,	// (0x000539c4) bg_button_pane_cp017

0xec65,	// (0x00057856) bg_popup_sub_pane_cp22

0x178c,	// (0x0004a37d) popup_vitu2_query_window_g1

0xadfb,	// (0x000539ec) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0005863b) popup_vitu2_query_window_g

0xae09,	// (0x000539fa) popup_vitu2_query_window_t1_ParamLimits

0xae09,	// (0x000539fa) popup_vitu2_query_window_t1

0xae31,	// (0x00053a22) popup_vitu2_query_window_t2_ParamLimits

0xae31,	// (0x00053a22) popup_vitu2_query_window_t2

0xae43,	// (0x00053a34) popup_vitu2_query_window_t3_ParamLimits

0xae43,	// (0x00053a34) popup_vitu2_query_window_t3

0xae6b,	// (0x00053a5c) popup_vitu2_query_window_t4_ParamLimits

0xae6b,	// (0x00053a5c) popup_vitu2_query_window_t4

0xae7f,	// (0x00053a70) popup_vitu2_query_window_t5_ParamLimits

0xae7f,	// (0x00053a70) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00058640) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00058640) popup_vitu2_query_window_t

0x15d9,	// (0x0004a1ca) main_cset_text_pane

0xa7e3,	// (0x000533d4) aid_area_touch_slider_ParamLimits

0xa7ff,	// (0x000533f0) cset_slider_pane_ParamLimits

0xa829,	// (0x0005341a) main_cset_slider_pane_g1_ParamLimits

0xa83e,	// (0x0005342f) main_cset_slider_pane_g2_ParamLimits

0x15fa,	// (0x0004a1eb) main_cset_slider_pane_g3_ParamLimits

0x15fa,	// (0x0004a1eb) main_cset_slider_pane_g3

0xa853,	// (0x00053444) main_cset_slider_pane_g4_ParamLimits

0xa853,	// (0x00053444) main_cset_slider_pane_g4

0xa862,	// (0x00053453) main_cset_slider_pane_g5_ParamLimits

0xa862,	// (0x00053453) main_cset_slider_pane_g5

0xa870,	// (0x00053461) main_cset_slider_pane_g6_ParamLimits

0xa870,	// (0x00053461) main_cset_slider_pane_g6

0xf9a4,	// (0x00058595) main_cset_slider_pane_g_ParamLimits

0x162a,	// (0x0004a21b) main_cset_slider_pane_t1_ParamLimits

0xa900,	// (0x000534f1) main_cset_slider_pane_t2_ParamLimits

0xa91a,	// (0x0005350b) main_cset_slider_pane_t3_ParamLimits

0xa934,	// (0x00053525) main_cset_slider_pane_t4_ParamLimits

0xa94e,	// (0x0005353f) main_cset_slider_pane_t5_ParamLimits

0xa96c,	// (0x0005355d) main_cset_slider_pane_t6_ParamLimits

0xa983,	// (0x00053574) main_cset_slider_pane_t7_ParamLimits

0xa9b1,	// (0x000535a2) main_cset_slider_pane_t8_ParamLimits

0xa9b1,	// (0x000535a2) main_cset_slider_pane_t8

0xa9d9,	// (0x000535ca) main_cset_slider_pane_t9_ParamLimits

0xa9d9,	// (0x000535ca) main_cset_slider_pane_t9

0xaa01,	// (0x000535f2) main_cset_slider_pane_t10_ParamLimits

0xaa01,	// (0x000535f2) main_cset_slider_pane_t10

0xaa29,	// (0x0005361a) main_cset_slider_pane_t11_ParamLimits

0xaa29,	// (0x0005361a) main_cset_slider_pane_t11

0xaa53,	// (0x00053644) main_cset_slider_pane_t12_ParamLimits

0xaa53,	// (0x00053644) main_cset_slider_pane_t12

0xaa70,	// (0x00053661) main_cset_slider_pane_t13_ParamLimits

0xaa70,	// (0x00053661) main_cset_slider_pane_t13

0xf9c9,	// (0x000585ba) main_cset_slider_pane_t_ParamLimits

0x4653,	// (0x0004d244) bg_popup_sub_pane_cp011

0x1798,	// (0x0004a389) main_cset_text_pane_g1

0x17a0,	// (0x0004a391) main_cset_text_pane_t1

0x17ae,	// (0x0004a39f) main_cset_text_pane_t2

0x17bc,	// (0x0004a3ad) main_cset_text_pane_t3

0x17ca,	// (0x0004a3bb) main_cset_text_pane_t4

0x17d8,	// (0x0004a3c9) main_cset_text_pane_t5

0x17e6,	// (0x0004a3d7) main_cset_text_pane_t6

0x17f4,	// (0x0004a3e5) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0005864b) main_cset_text_pane_t

0x4653,	// (0x0004d244) main_cam4_burst_pane

0x4653,	// (0x0004d244) main_cam5_pane

0xa732,	// (0x00053323) bg_button_pane_cp019

0xa73b,	// (0x0005332c) bg_button_pane_cp020

0x1606,	// (0x0004a1f7) main_cset_slider_pane_g7_ParamLimits

0x1606,	// (0x0004a1f7) main_cset_slider_pane_g7

0x1612,	// (0x0004a203) main_cset_slider_pane_g8_ParamLimits

0x1612,	// (0x0004a203) main_cset_slider_pane_g8

0xa884,	// (0x00053475) main_cset_slider_pane_g9_ParamLimits

0xa884,	// (0x00053475) main_cset_slider_pane_g9

0xa890,	// (0x00053481) main_cset_slider_pane_g10_ParamLimits

0xa890,	// (0x00053481) main_cset_slider_pane_g10

0xa89c,	// (0x0005348d) main_cset_slider_pane_g11_ParamLimits

0xa89c,	// (0x0005348d) main_cset_slider_pane_g11

0xa8a8,	// (0x00053499) main_cset_slider_pane_g12_ParamLimits

0xa8a8,	// (0x00053499) main_cset_slider_pane_g12

0xa8b4,	// (0x000534a5) main_cset_slider_pane_g13_ParamLimits

0xa8b4,	// (0x000534a5) main_cset_slider_pane_g13

0xa8c0,	// (0x000534b1) main_cset_slider_pane_g14_ParamLimits

0xa8c0,	// (0x000534b1) main_cset_slider_pane_g14

0xa8cc,	// (0x000534bd) main_cset_slider_pane_g15_ParamLimits

0xa8cc,	// (0x000534bd) main_cset_slider_pane_g15

0x1658,	// (0x0004a249) main_cset_slider_pane_t14_ParamLimits

0x1658,	// (0x0004a249) main_cset_slider_pane_t14

0x1691,	// (0x0004a282) main_cset_slider_pane_t15_ParamLimits

0x1691,	// (0x0004a282) main_cset_slider_pane_t15

0xae93,	// (0x00053a84) aid_cam4_burst_size_cell_ParamLimits

0xae93,	// (0x00053a84) aid_cam4_burst_size_cell

0xaeaf,	// (0x00053aa0) grid_cam4_burst_pane_ParamLimits

0xaeaf,	// (0x00053aa0) grid_cam4_burst_pane

0xaedf,	// (0x00053ad0) linegrid_cam4_burst_pane_ParamLimits

0xaedf,	// (0x00053ad0) linegrid_cam4_burst_pane

0xaeff,	// (0x00053af0) scroll_pane_cp30_ParamLimits

0xaeff,	// (0x00053af0) scroll_pane_cp30

0xaf0b,	// (0x00053afc) cell_cam4_burst_pane_ParamLimits

0xaf0b,	// (0x00053afc) cell_cam4_burst_pane

0x1802,	// (0x0004a3f3) linegrid_cam4_burst_pane_g1_ParamLimits

0x1802,	// (0x0004a3f3) linegrid_cam4_burst_pane_g1

0xaf47,	// (0x00053b38) linegrid_cam4_burst_pane_g2_ParamLimits

0xaf47,	// (0x00053b38) linegrid_cam4_burst_pane_g2

0x180f,	// (0x0004a400) linegrid_cam4_burst_pane_g3_ParamLimits

0x180f,	// (0x0004a400) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0005865a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0005865a) linegrid_cam4_burst_pane_g

0xaf58,	// (0x00053b49) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaf58,	// (0x00053b49) linegrid_cam4_burst_pane_g3_copy1

0x181c,	// (0x0004a40d) linegrid_cam4_burst_pane_g4_ParamLimits

0x181c,	// (0x0004a40d) linegrid_cam4_burst_pane_g4

0xaf72,	// (0x00053b63) linegrid_cam4_burst_pane_g5_ParamLimits

0xaf72,	// (0x00053b63) linegrid_cam4_burst_pane_g5

0xaf83,	// (0x00053b74) linegrid_cam4_burst_pane_g6_ParamLimits

0xaf83,	// (0x00053b74) linegrid_cam4_burst_pane_g6

0x1829,	// (0x0004a41a) linegrid_cam4_burst_pane_g7_ParamLimits

0x1829,	// (0x0004a41a) linegrid_cam4_burst_pane_g7

0xaf94,	// (0x00053b85) cell_cam4_burst_pane_g1

0x1842,	// (0x0004a433) main_cam5_pane_t1_ParamLimits

0x1842,	// (0x0004a433) main_cam5_pane_t1

0x1854,	// (0x0004a445) main_cam5_pane_t2_ParamLimits

0x1854,	// (0x0004a445) main_cam5_pane_t2

0x1866,	// (0x0004a457) main_cam5_pane_t3_ParamLimits

0x1866,	// (0x0004a457) main_cam5_pane_t3

0x1878,	// (0x0004a469) main_cam5_pane_t4_ParamLimits

0x1878,	// (0x0004a469) main_cam5_pane_t4

0x1890,	// (0x0004a481) main_cam5_pane_t5_ParamLimits

0x1890,	// (0x0004a481) main_cam5_pane_t5

0x18a4,	// (0x0004a495) main_cam5_pane_t6_ParamLimits

0x18a4,	// (0x0004a495) main_cam5_pane_t6

0x18b8,	// (0x0004a4a9) main_cam5_pane_t7_ParamLimits

0x18b8,	// (0x0004a4a9) main_cam5_pane_t7

0x18ca,	// (0x0004a4bb) main_cam5_pane_t8_ParamLimits

0x18ca,	// (0x0004a4bb) main_cam5_pane_t8

0x18e6,	// (0x0004a4d7) main_cam5_pane_t9_ParamLimits

0x18e6,	// (0x0004a4d7) main_cam5_pane_t9

0x18f8,	// (0x0004a4e9) main_cam5_pane_t10_ParamLimits

0x18f8,	// (0x0004a4e9) main_cam5_pane_t10

0x190a,	// (0x0004a4fb) main_cam5_pane_t11_ParamLimits

0x190a,	// (0x0004a4fb) main_cam5_pane_t11

0x191c,	// (0x0004a50d) main_cam5_pane_t12_ParamLimits

0x191c,	// (0x0004a50d) main_cam5_pane_t12

0x1931,	// (0x0004a522) main_cam5_pane_t13_ParamLimits

0x1931,	// (0x0004a522) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00058666) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00058666) main_cam5_pane_t

0x48d1,	// (0x0004d4c2) popup_scut_keymap_window_ParamLimits

0x48d1,	// (0x0004d4c2) popup_scut_keymap_window

0xafa7,	// (0x00053b98) aid_size_cell_brow_shortcut

0xd86b,	// (0x0005645c) bg_popup_window_pane_cp010

0xafb3,	// (0x00053ba4) grid_scut_pane

0xafbf,	// (0x00053bb0) cell_scut_pane_ParamLimits

0xafbf,	// (0x00053bb0) cell_scut_pane

0xafd6,	// (0x00053bc7) cell_scut_pane_g1

0x194e,	// (0x0004a53f) cell_scut_pane_t1

0x195d,	// (0x0004a54e) cell_scut_pane_t2

0xafdf,	// (0x00053bd0) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00058681) cell_scut_pane_t

0x8f23,	// (0x00051b14) main_mup3_pane_g8_ParamLimits

0x8f23,	// (0x00051b14) main_mup3_pane_g8

0xa30b,	// (0x00052efc) area_vitu2_query_pane_ParamLimits

0xa30b,	// (0x00052efc) area_vitu2_query_pane

0xaddd,	// (0x000539ce) input_focus_pane_cp08

0x196c,	// (0x0004a55d) area_vitu2_query_pane_g1

0xafed,	// (0x00053bde) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00058688) area_vitu2_query_pane_g

0xaffe,	// (0x00053bef) area_vitu2_query_pane_t1_ParamLimits

0xaffe,	// (0x00053bef) area_vitu2_query_pane_t1

0xb012,	// (0x00053c03) area_vitu2_query_pane_t2_ParamLimits

0xb012,	// (0x00053c03) area_vitu2_query_pane_t2

0xb026,	// (0x00053c17) area_vitu2_query_pane_t3_ParamLimits

0xb026,	// (0x00053c17) area_vitu2_query_pane_t3

0x1978,	// (0x0004a569) area_vitu2_query_pane_t4_ParamLimits

0x1978,	// (0x0004a569) area_vitu2_query_pane_t4

0x19a0,	// (0x0004a591) area_vitu2_query_pane_t5_ParamLimits

0x19a0,	// (0x0004a591) area_vitu2_query_pane_t5

0x19c8,	// (0x0004a5b9) area_vitu2_query_pane_t6_ParamLimits

0x19c8,	// (0x0004a5b9) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0005868d) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0005868d) area_vitu2_query_pane_t

0xb04e,	// (0x00053c3f) bg_button_pane_cp018

0xb05c,	// (0x00053c4d) bg_button_pane_cp021

0xb068,	// (0x00053c59) bg_button_pane_cp022

0xb079,	// (0x00053c6a) input_focus_pane_cp09

0x73c8,	// (0x0004ffb9) aid_size_touch_mv_arrow_left

0x73f1,	// (0x0004ffe2) aid_size_touch_mv_arrow_right

0xa8e4,	// (0x000534d5) main_cset_slider_pane_g16_ParamLimits

0xa8e4,	// (0x000534d5) main_cset_slider_pane_g16

0xa8f2,	// (0x000534e3) main_cset_slider_pane_g17_ParamLimits

0xa8f2,	// (0x000534e3) main_cset_slider_pane_g17

0xaf94,	// (0x00053b85) cell_cam4_burst_pane_g1_ParamLimits

0x4653,	// (0x0004d244) compa_mode_pane

0xab25,	// (0x00053716) popup_vtel_slider_window_g3_ParamLimits

0xab25,	// (0x00053716) popup_vtel_slider_window_g3

0xab39,	// (0x0005372a) popup_vtel_slider_window_g4_ParamLimits

0xab39,	// (0x0005372a) popup_vtel_slider_window_g4

0xab4d,	// (0x0005373e) popup_vtel_slider_window_t1_ParamLimits

0xab4d,	// (0x0005373e) popup_vtel_slider_window_t1

0x4653,	// (0x0004d244) main_cl_pane

0xec8d,	// (0x0005787e) popup_imed_adjust2_window_ParamLimits

0xec57,	// (0x00057848) bg_tb_trans_pane_cp05_ParamLimits

0x0f6f,	// (0x00049b60) popup_imed_adjust2_window_g1_ParamLimits

0x0f7e,	// (0x00049b6f) popup_imed_adjust2_window_g2_ParamLimits

0x0f7e,	// (0x00049b6f) popup_imed_adjust2_window_g2

0x0f8a,	// (0x00049b7b) popup_imed_adjust2_window_g3_ParamLimits

0x0f8a,	// (0x00049b7b) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000583fe) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000583fe) popup_imed_adjust2_window_g

0x0f96,	// (0x00049b87) popup_imed_adjust2_window_t1_ParamLimits

0x0fae,	// (0x00049b9f) slider_imed_adjust_pane_ParamLimits

0x0fc2,	// (0x00049bb3) slider_imed_adjust_pane_g1_ParamLimits

0x0fd2,	// (0x00049bc3) slider_imed_adjust_pane_g2_ParamLimits

0x0fe2,	// (0x00049bd3) slider_imed_adjust_pane_g3_ParamLimits

0x0ff3,	// (0x00049be4) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00058405) slider_imed_adjust_pane_g_ParamLimits

0xa049,	// (0x00052c3a) aid_touch_area_cam4_ParamLimits

0xa049,	// (0x00052c3a) aid_touch_area_cam4

0xa059,	// (0x00052c4a) battery_pane_cp01

0xa0d4,	// (0x00052cc5) main_camera4_pane_g6_ParamLimits

0xa0d4,	// (0x00052cc5) main_camera4_pane_g6

0xa0f2,	// (0x00052ce3) main_camera4_pane_t2_ParamLimits

0xa0f2,	// (0x00052ce3) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00058508) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00058508) main_camera4_pane_t

0xa187,	// (0x00052d78) aid_touch_area_vid4_ParamLimits

0xa187,	// (0x00052d78) aid_touch_area_vid4

0xa1c7,	// (0x00052db8) main_video4_pane_g5_ParamLimits

0xa1c7,	// (0x00052db8) main_video4_pane_g5

0xa1e9,	// (0x00052dda) vid4_progress_pane_ParamLimits

0xa1e9,	// (0x00052dda) vid4_progress_pane

0x161e,	// (0x0004a20f) main_cset_slider_pane_g18_ParamLimits

0x161e,	// (0x0004a20f) main_cset_slider_pane_g18

0x1836,	// (0x0004a427) cell_cam4_burst_pane_g2_ParamLimits

0x1836,	// (0x0004a427) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00058661) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00058661) cell_cam4_burst_pane_g

0xb08a,	// (0x00053c7b) bg_cl_pane_ParamLimits

0xb08a,	// (0x00053c7b) bg_cl_pane

0xb096,	// (0x00053c87) cl_header_pane_ParamLimits

0xb096,	// (0x00053c87) cl_header_pane

0xb0a2,	// (0x00053c93) cl_listscroll_pane_ParamLimits

0xb0a2,	// (0x00053c93) cl_listscroll_pane

0x1a14,	// (0x0004a605) bg_cl_pane_g1

0x1a1c,	// (0x0004a60d) bg_cl_pane_g2

0x1a24,	// (0x0004a615) bg_cl_pane_g3

0x1a2c,	// (0x0004a61d) bg_cl_pane_g4

0x1a34,	// (0x0004a625) bg_cl_pane_g5

0x1a3c,	// (0x0004a62d) bg_cl_pane_g6

0x1a44,	// (0x0004a635) bg_cl_pane_g7

0x1a4c,	// (0x0004a63d) bg_cl_pane_g8

0x1a54,	// (0x0004a645) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0005869c) bg_cl_pane_g

0xb0ae,	// (0x00053c9f) aid_height_cl_leading_ParamLimits

0xb0ae,	// (0x00053c9f) aid_height_cl_leading

0xb0ba,	// (0x00053cab) aid_height_cl_text_ParamLimits

0xb0ba,	// (0x00053cab) aid_height_cl_text

0x145b,	// (0x0004a04c) bg_cl_header_pane_ParamLimits

0x145b,	// (0x0004a04c) bg_cl_header_pane

0xb0d2,	// (0x00053cc3) cl_header_pane_g1_ParamLimits

0xb0d2,	// (0x00053cc3) cl_header_pane_g1

0xb0df,	// (0x00053cd0) cl_header_pane_t1_ParamLimits

0xb0df,	// (0x00053cd0) cl_header_pane_t1

0x1a5c,	// (0x0004a64d) cl_list_pane

0x15f1,	// (0x0004a1e2) hc_scroll_pane_cp01

0x65b2,	// (0x0004f1a3) bg_cl_header_pane_g1

0x14d7,	// (0x0004a0c8) bg_cl_header_pane_g2

0x65d2,	// (0x0004f1c3) bg_cl_header_pane_g3

0x14e7,	// (0x0004a0d8) bg_cl_header_pane_g4

0x14df,	// (0x0004a0d0) bg_cl_header_pane_g5

0x1737,	// (0x0004a328) bg_cl_header_pane_g6

0x14ff,	// (0x0004a0f0) bg_cl_header_pane_g7

0x1507,	// (0x0004a0f8) bg_cl_header_pane_g8

0x14f7,	// (0x0004a0e8) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x000586af) bg_cl_header_pane_g

0xb0f1,	// (0x00053ce2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb0f1,	// (0x00053ce2) hc_cl_list_double_graphic_heading_pane

0xb102,	// (0x00053cf3) hc_cl_list_single_graphic_pane_ParamLimits

0xb102,	// (0x00053cf3) hc_cl_list_single_graphic_pane

0xb11b,	// (0x00053d0c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb11b,	// (0x00053d0c) hc_cl_list_single_graphic_pane_g1

0xb127,	// (0x00053d18) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb127,	// (0x00053d18) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x000586c2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x000586c2) hc_cl_list_single_graphic_pane_g

0xb13b,	// (0x00053d2c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb13b,	// (0x00053d2c) hc_cl_list_single_graphic_pane_t1

0xb11b,	// (0x00053d0c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb11b,	// (0x00053d0c) hc_cl_list_double_graphic_heading_pane_g1

0xb150,	// (0x00053d41) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb150,	// (0x00053d41) hc_cl_list_double_graphic_heading_pane_g2

0xb164,	// (0x00053d55) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb164,	// (0x00053d55) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x000586c7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x000586c7) hc_cl_list_double_graphic_heading_pane_g

0xb178,	// (0x00053d69) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb178,	// (0x00053d69) hc_cl_list_double_graphic_heading_pane_t1

0xb18d,	// (0x00053d7e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb18d,	// (0x00053d7e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x000586ce) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x000586ce) hc_cl_list_double_graphic_heading_pane_t

0xb1aa,	// (0x00053d9b) vid4_progress_pane_g1

0xb1ba,	// (0x00053dab) vid4_progress_pane_g2

0xd425,	// (0x00056016) vid4_progress_pane_g3

0xb1ca,	// (0x00053dbb) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x000586d3) vid4_progress_pane_g

0xb1e8,	// (0x00053dd9) vid4_progress_pane_t1

0xb1fd,	// (0x00053dee) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x000586de) vid4_progress_pane_t

0xb228,	// (0x00053e19) wait_bar_pane_cp07

0xee9f,	// (0x00057a90) blid_firmament_pane_ParamLimits

0xeee2,	// (0x00057ad3) popup_blid_sat_info2_window_g1

0xef06,	// (0x00057af7) popup_blid_sat_info2_window_t3

0xef14,	// (0x00057b05) popup_blid_sat_info2_window_t4

0xef22,	// (0x00057b13) popup_blid_sat_info2_window_t5

0xef30,	// (0x00057b21) popup_blid_sat_info2_window_t6

0xef40,	// (0x00057b31) popup_blid_sat_info2_window_t7

0xef4e,	// (0x00057b3f) popup_blid_sat_info2_window_t8

0xef5c,	// (0x00057b4d) popup_blid_sat_info2_window_t9

0xef6a,	// (0x00057b5b) popup_blid_sat_info2_window_t10

0xf02c,	// (0x00057c1d) aid_firma_cardinal_ParamLimits

0xf040,	// (0x00057c31) blid_firmament_pane_t1_ParamLimits

0xf057,	// (0x00057c48) blid_firmament_pane_t2_ParamLimits

0xf06e,	// (0x00057c5f) blid_firmament_pane_t3_ParamLimits

0xf085,	// (0x00057c76) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000582f7) blid_firmament_pane_t_ParamLimits

0xf09c,	// (0x00057c8d) blid_sat_info_pane_ParamLimits

0xec65,	// (0x00057856) main_cam_set_pane_ParamLimits

0x96a8,	// (0x00052299) aid_size_cell_colour_35_ParamLimits

0x96c2,	// (0x000522b3) aid_size_cell_colour_112_ParamLimits

0x96d9,	// (0x000522ca) aid_size_cell_effect_ParamLimits

0xec65,	// (0x00057856) bg_tb_trans_pane_cp02_ParamLimits

0xf0e7,	// (0x00057cd8) heading_imed_pane_ParamLimits

0x96f3,	// (0x000522e4) listscroll_imed_pane_ParamLimits

0xe289,	// (0x00056e7a) popup_call2_audio_first_window_g5_ParamLimits

0xe289,	// (0x00056e7a) popup_call2_audio_first_window_g5

0x9df8,	// (0x000529e9) aid_size_touch_image3_arrow_left_ParamLimits

0x9df8,	// (0x000529e9) aid_size_touch_image3_arrow_left

0x9e0e,	// (0x000529ff) aid_size_touch_image3_arrow_right_ParamLimits

0x9e0e,	// (0x000529ff) aid_size_touch_image3_arrow_right

0xb213,	// (0x00053e04) vid4_progress_pane_t3

0x9990,	// (0x00052581) main_hwr_training_symbol_option_pane_ParamLimits

0x9990,	// (0x00052581) main_hwr_training_symbol_option_pane

0x125c,	// (0x00049e4d) popup_hwr_training_preview_window_ParamLimits

0x125c,	// (0x00049e4d) popup_hwr_training_preview_window

0x99f1,	// (0x000525e2) hwr_training_navi_pane_g5_ParamLimits

0x99f1,	// (0x000525e2) hwr_training_navi_pane_g5

0x14c5,	// (0x0004a0b6) popup_char_count_window

0xac43,	// (0x00053834) bg_popup_sub_pane_cp20_ParamLimits

0xac51,	// (0x00053842) list_vitu2_match_list_pane_ParamLimits

0xac5d,	// (0x0005384e) vitu2_page_scroll_pane_ParamLimits

0xac5d,	// (0x0005384e) vitu2_page_scroll_pane

0x1abf,	// (0x0004a6b0) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1abf,	// (0x0004a6b0) list_single_hwr_training_symbol_option_pane

0x1ad2,	// (0x0004a6c3) list_single_hwr_training_symbol_option_pane_g1

0x1ada,	// (0x0004a6cb) list_single_hwr_training_symbol_option_pane_t1

0x1ae8,	// (0x0004a6d9) bg_button_pane_cp023

0x1af1,	// (0x0004a6e2) bg_button_pane_cp024

0xb23a,	// (0x00053e2b) vitu2_page_scroll_pane_g1

0xb242,	// (0x00053e33) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x000586e5) vitu2_page_scroll_pane_g

0xb24a,	// (0x00053e3b) vitu2_page_scroll_pane_t1

0x1b24,	// (0x0004a715) popup_char_count_window_g1

0x1b2d,	// (0x0004a71e) popup_char_count_window_g2

0x1b36,	// (0x0004a727) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x000586ea) popup_char_count_window_g

0x1b3f,	// (0x0004a730) popup_char_count_window_t1

0x4653,	// (0x0004d244) main_vded2_pane

0x0f5b,	// (0x00049b4c) aid_size_cell_imed_line

0x0f65,	// (0x00049b56) grid_imed_line_width_pane

0xa260,	// (0x00052e51) vid4_indicators_pane_g4

0x1b4d,	// (0x0004a73e) cell_imed_line_width_pane_ParamLimits

0x1b4d,	// (0x0004a73e) cell_imed_line_width_pane

0x1b61,	// (0x0004a752) cell_imed_line_width_pane_g1

0xf0f3,	// (0x00057ce4) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x000586f1) cell_imed_line_width_pane_g

0xb259,	// (0x00053e4a) main_vded2_pane_g1_ParamLimits

0xb259,	// (0x00053e4a) main_vded2_pane_g1

0xb266,	// (0x00053e57) main_vded2_pane_g2_ParamLimits

0xb266,	// (0x00053e57) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x000586f6) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x000586f6) main_vded2_pane_g

0xb274,	// (0x00053e65) vded2_slider_pane_ParamLimits

0xb274,	// (0x00053e65) vded2_slider_pane

0xb281,	// (0x00053e72) aid_size_touch_vded2_end

0xb28b,	// (0x00053e7c) aid_size_touch_vded2_playhead

0x1b6a,	// (0x0004a75b) aid_size_touch_vded2_start

0x1b72,	// (0x0004a763) vded2_slider_bg_pane

0x1b7b,	// (0x0004a76c) vded2_slider_pane_g1

0x1b84,	// (0x0004a775) vded2_slider_pane_g2

0xb293,	// (0x00053e84) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x000586fb) vded2_slider_pane_g

0x1b8c,	// (0x0004a77d) vded2_slider_bg_pane_g1

0x1b95,	// (0x0004a786) vded2_slider_bg_pane_g2

0x1b9e,	// (0x0004a78f) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00058702) vded2_slider_bg_pane_g

0x7b09,	// (0x000506fa) aid_postcard_touch_down_pane_ParamLimits

0x7b09,	// (0x000506fa) aid_postcard_touch_down_pane

0x7b19,	// (0x0005070a) aid_postcard_touch_up_pane_ParamLimits

0x7b19,	// (0x0005070a) aid_postcard_touch_up_pane

0x4653,	// (0x0004d244) main_blid2_pane

0xec73,	// (0x00057864) popup_blid2_search_window

0x4653,	// (0x0004d244) blid2_gps_pane

0x4653,	// (0x0004d244) blid2_navig_pane

0x4653,	// (0x0004d244) blid2_search_pane

0x4653,	// (0x0004d244) blid2_tripm_pane

0xb29c,	// (0x00053e8d) blid2_search_pane_g1_ParamLimits

0xb29c,	// (0x00053e8d) blid2_search_pane_g1

0xb2ac,	// (0x00053e9d) blid2_search_pane_t1_ParamLimits

0xb2ac,	// (0x00053e9d) blid2_search_pane_t1

0xb2be,	// (0x00053eaf) aid_size_cell_blid2_gps_ParamLimits

0xb2be,	// (0x00053eaf) aid_size_cell_blid2_gps

0xb2ce,	// (0x00053ebf) blid2_gps_pane_g1_ParamLimits

0xb2ce,	// (0x00053ebf) blid2_gps_pane_g1

0xb2da,	// (0x00053ecb) grid_blid2_satellite_pane_ParamLimits

0xb2da,	// (0x00053ecb) grid_blid2_satellite_pane

0xb2ea,	// (0x00053edb) blid2_navig_pane_g1_ParamLimits

0xb2ea,	// (0x00053edb) blid2_navig_pane_g1

0xb2f6,	// (0x00053ee7) blid2_navig_pane_t1_ParamLimits

0xb2f6,	// (0x00053ee7) blid2_navig_pane_t1

0xb308,	// (0x00053ef9) blid2_navig_pane_t2_ParamLimits

0xb308,	// (0x00053ef9) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00058709) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00058709) blid2_navig_pane_t

0xb31a,	// (0x00053f0b) blid2_navig_ring_pane_ParamLimits

0xb31a,	// (0x00053f0b) blid2_navig_ring_pane

0xb32a,	// (0x00053f1b) blid2_speed_pane_ParamLimits

0xb32a,	// (0x00053f1b) blid2_speed_pane

0xb336,	// (0x00053f27) blid2_tripm_pane_g1_ParamLimits

0xb336,	// (0x00053f27) blid2_tripm_pane_g1

0xb346,	// (0x00053f37) blid2_tripm_pane_g2_ParamLimits

0xb346,	// (0x00053f37) blid2_tripm_pane_g2

0xb352,	// (0x00053f43) blid2_tripm_pane_g3_ParamLimits

0xb352,	// (0x00053f43) blid2_tripm_pane_g3

0xb35e,	// (0x00053f4f) blid2_tripm_pane_g4_ParamLimits

0xb35e,	// (0x00053f4f) blid2_tripm_pane_g4

0xb36a,	// (0x00053f5b) blid2_tripm_pane_g5_ParamLimits

0xb36a,	// (0x00053f5b) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0005870e) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0005870e) blid2_tripm_pane_g

0xb386,	// (0x00053f77) blid2_tripm_pane_t1_ParamLimits

0xb386,	// (0x00053f77) blid2_tripm_pane_t1

0xb39a,	// (0x00053f8b) blid2_tripm_pane_t2_ParamLimits

0xb39a,	// (0x00053f8b) blid2_tripm_pane_t2

0xb3ac,	// (0x00053f9d) blid2_tripm_pane_t3_ParamLimits

0xb3ac,	// (0x00053f9d) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0005871b) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0005871b) blid2_tripm_pane_t

0xb3de,	// (0x00053fcf) cell_blid2_satellite_pane_ParamLimits

0xb3de,	// (0x00053fcf) cell_blid2_satellite_pane

0xb3f8,	// (0x00053fe9) cell_blid2_satellite_pane_g1

0x1ba7,	// (0x0004a798) cell_blid2_satellite_pane_t1

0xf0ac,	// (0x00057c9d) blid2_speed_pane_g1

0x1bb5,	// (0x0004a7a6) blid2_speed_pane_t1

0x1bc3,	// (0x0004a7b4) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00058724) blid2_speed_pane_t

0xf0ac,	// (0x00057c9d) blid2_navig_ring_pane_g1

0xb401,	// (0x00053ff2) blid2_navig_ring_pane_g2

0xb409,	// (0x00053ffa) blid2_navig_ring_pane_g3

0xb411,	// (0x00054002) blid2_navig_ring_pane_g4

0xb419,	// (0x0005400a) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00058729) blid2_navig_ring_pane_g

0x4653,	// (0x0004d244) bg_popup_window_pane_cp011

0x1bd1,	// (0x0004a7c2) popup_blid2_search_window_g1

0x1bd9,	// (0x0004a7ca) popup_blid2_search_window_t1

0x1be7,	// (0x0004a7d8) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00058734) popup_blid2_search_window_t

0x642c,	// (0x0004f01d) main_browser_pane_g1

0x53c3,	// (0x0004dfb4) main_browser_pane_ParamLimits

0xa215,	// (0x00052e06) bg_button_pane_cp011_ParamLimits

0xa507,	// (0x000530f8) cell_vitu2_function_pane_g1_ParamLimits

0xec65,	// (0x00057856) bg_popup_sub_pane_cp22_ParamLimits

0xaddd,	// (0x000539ce) input_focus_pane_cp08_ParamLimits

0xadea,	// (0x000539db) popup_vitu2_query_button_pane_ParamLimits

0xadea,	// (0x000539db) popup_vitu2_query_button_pane

0xadbf,	// (0x000539b0) popup_vitu2_query_input_button_pane

0x178c,	// (0x0004a37d) popup_vitu2_query_window_g1_ParamLimits

0xadfb,	// (0x000539ec) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0005863b) popup_vitu2_query_window_g_ParamLimits

0x4653,	// (0x0004d244) bg_button_pane_cp026

0xb421,	// (0x00054012) popup_vitu2_query_input_button_pane_g1

0x4653,	// (0x0004d244) bg_button_pane_cp025

0x1bf5,	// (0x0004a7e6) popup_vitu2_query_button_pane_t1

0x8c4e,	// (0x0005183f) main_mp3_pane_t6

0x8c5e,	// (0x0005184f) popup_slider_window_cp01

0xa136,	// (0x00052d27) cam4_battery_pane

0xa223,	// (0x00052e14) cam4_battery_pane_cp02

0xb1a2,	// (0x00053d93) cam4_battery_pane_cp01

0xb1a2,	// (0x00053d93) cam4_battery_pane_cp03

0x1c03,	// (0x0004a7f4) cam4_battery_pane_g1

0xf0ac,	// (0x00057c9d) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00058739) cam4_battery_pane_g

0xef78,	// (0x00057b69) popup_blid_sat_info2_window_t11

0x73c8,	// (0x0004ffb9) aid_size_touch_mv_arrow_left_ParamLimits

0x73f1,	// (0x0004ffe2) aid_size_touch_mv_arrow_right_ParamLimits

0xd7cb,	// (0x000563bc) navi_pane_g1_ParamLimits

0x741a,	// (0x0005000b) navi_pane_g2_ParamLimits

0x7448,	// (0x00050039) navi_pane_g3_ParamLimits

0xf418,	// (0x00058009) navi_pane_g_ParamLimits

0x74a2,	// (0x00050093) navi_pane_mv_t1_ParamLimits

0x96ff,	// (0x000522f0) grid_imed_effect_pane_ParamLimits

0x5ffb,	// (0x0004ebec) aid_placing_vt_slider_lsc

0x6003,	// (0x0004ebf4) aid_placing_vt_slider_prt

0xec65,	// (0x00057856) bg_tb_trans_pane_cp01_ParamLimits

0x0bb4,	// (0x000497a5) popup_image_details_window_g1_ParamLimits

0x0bc7,	// (0x000497b8) popup_image_details_window_g2_ParamLimits

0x0bdc,	// (0x000497cd) popup_image_details_window_g3_ParamLimits

0x0bdc,	// (0x000497cd) popup_image_details_window_g3

0xf74b,	// (0x0005833c) popup_image_details_window_g_ParamLimits

0x0bf0,	// (0x000497e1) popup_image_details_window_t1_ParamLimits

0x0c02,	// (0x000497f3) popup_image_details_window_t2_ParamLimits

0x0c1b,	// (0x0004980c) popup_image_details_window_t3_ParamLimits

0x0c2f,	// (0x00049820) popup_image_details_window_t4_ParamLimits

0x0c4a,	// (0x0004983b) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00058343) popup_image_details_window_t_ParamLimits

0xb0c6,	// (0x00053cb7) cl_header_name_pane_ParamLimits

0xb0c6,	// (0x00053cb7) cl_header_name_pane

0xb429,	// (0x0005401a) cl_header_name_pane_t1_ParamLimits

0xb429,	// (0x0005401a) cl_header_name_pane_t1

0xb440,	// (0x00054031) cl_header_name_pane_t2_ParamLimits

0xb440,	// (0x00054031) cl_header_name_pane_t2

0xb46a,	// (0x0005405b) cl_header_name_pane_t3_ParamLimits

0xb46a,	// (0x0005405b) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0005873e) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0005873e) cl_header_name_pane_t

0x7473,	// (0x00050064) navi_pane_mv_g2_ParamLimits

0x1482,	// (0x0004a073) field_vitu2_entry_pane_g1_ParamLimits

0x148e,	// (0x0004a07f) field_vitu2_entry_pane_g2_ParamLimits

0x149a,	// (0x0004a08b) field_vitu2_entry_pane_g3_ParamLimits

0x149a,	// (0x0004a08b) field_vitu2_entry_pane_g3

0xf949,	// (0x0005853a) field_vitu2_entry_pane_g_ParamLimits

0xa497,	// (0x00053088) cell_vitu2_itu_pane_g1_ParamLimits

0xa4a7,	// (0x00053098) cell_vitu2_itu_pane_g2_ParamLimits

0xa4a7,	// (0x00053098) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00058546) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00058546) cell_vitu2_itu_pane_g

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp05_ParamLimits

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp05

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp03

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp04

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp10_ParamLimits

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp10

0xb068,	// (0x00053c59) bg_vkb2_func_pane_cp08

0xb04e,	// (0x00053c3f) bg_vkb2_func_pane_cp06

0xb05c,	// (0x00053c4d) bg_vkb2_func_pane_cp07

0x1afa,	// (0x0004a6eb) bg_vkb2_func_pane_cp11_ParamLimits

0x1afa,	// (0x0004a6eb) bg_vkb2_func_pane_cp11

0x1b0f,	// (0x0004a700) bg_vkb2_func_pane_cp12_ParamLimits

0x1b0f,	// (0x0004a700) bg_vkb2_func_pane_cp12

0x4653,	// (0x0004d244) bg_vkb2_func_pane_cp09

0x14d7,	// (0x0004a0c8) bg_vkb2_func_pane_g1

0x65d2,	// (0x0004f1c3) bg_vkb2_func_pane_g2

0x14df,	// (0x0004a0d0) bg_vkb2_func_pane_g3

0x14e7,	// (0x0004a0d8) bg_vkb2_func_pane_g4

0x1737,	// (0x0004a328) bg_vkb2_func_pane_g5

0x14ff,	// (0x0004a0f0) bg_vkb2_func_pane_g6

0x1507,	// (0x0004a0f8) bg_vkb2_func_pane_g7

0x14f7,	// (0x0004a0e8) bg_vkb2_func_pane_g8

0x65b2,	// (0x0004f1a3) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00058745) bg_vkb2_func_pane_g

0xb378,	// (0x00053f69) blid2_tripm_pane_g6_ParamLimits

0xb378,	// (0x00053f69) blid2_tripm_pane_g6

0x1314,	// (0x00049f05) mp4_progress_pane_g1

0xb3d2,	// (0x00053fc3) blid2_tripm_values_pane_ParamLimits

0xb3d2,	// (0x00053fc3) blid2_tripm_values_pane

0xb48f,	// (0x00054080) blid2_tripm_values_pane_t1

0xb49d,	// (0x0005408e) blid2_tripm_values_pane_t2

0xb4ab,	// (0x0005409c) blid2_tripm_values_pane_t3

0xb4b9,	// (0x000540aa) blid2_tripm_values_pane_t4

0xb4c7,	// (0x000540b8) blid2_tripm_values_pane_t5

0xb4d5,	// (0x000540c6) blid2_tripm_values_pane_t6

0xb4e3,	// (0x000540d4) blid2_tripm_values_pane_t7

0xb4f1,	// (0x000540e2) blid2_tripm_values_pane_t8

0xb4ff,	// (0x000540f0) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00058758) blid2_tripm_values_pane_t

0x6029,	// (0x0004ec1a) call_video_pane_t1_ParamLimits

0x6042,	// (0x0004ec33) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00057e92) call_video_pane_t_ParamLimits

0x79da,	// (0x000505cb) msg_header_pane_g1_ParamLimits

0xd9e6,	// (0x000565d7) msg_header_pane_g2_ParamLimits

0xd9e6,	// (0x000565d7) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000580ac) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000580ac) msg_header_pane_g

0x53c3,	// (0x0004dfb4) main_clock2_pane_ParamLimits

0x948f,	// (0x00052080) grid_clock2_toolbar_pane_ParamLimits

0x948f,	// (0x00052080) grid_clock2_toolbar_pane

0x948f,	// (0x00052080) listscroll_clock2_pane_ParamLimits

0x948f,	// (0x00052080) listscroll_clock2_pane

0x953c,	// (0x0005212d) main_clock2_pane_t3_ParamLimits

0x953c,	// (0x0005212d) main_clock2_pane_t3

0x954e,	// (0x0005213f) main_clock2_pane_t4_ParamLimits

0x954e,	// (0x0005213f) main_clock2_pane_t4

0x1c0d,	// (0x0004a7fe) cell_clock2_toolbar_pane

0x1c15,	// (0x0004a806) cell_clock2_toolbar_pane_cp01

0x1c15,	// (0x0004a806) cell_clock2_toolbar_pane_cp02

0x1c1d,	// (0x0004a80e) cell_clock2_toolbar_pane_cp03

0x1c25,	// (0x0004a816) list_clock2_pane

0xd722,	// (0x00056313) scroll_pane_cp10

0x1c2d,	// (0x0004a81e) list_single_clock2_pane_ParamLimits

0x1c2d,	// (0x0004a81e) list_single_clock2_pane

0xd86b,	// (0x0005645c) list_highlight_pane_cp08

0x1c3a,	// (0x0004a82b) list_single_clock2_pane_t1

0x1c48,	// (0x0004a839) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0005876b) list_single_clock2_pane_t

0x4653,	// (0x0004d244) bg_button_pane_cp10

0x1c56,	// (0x0004a847) cell_clock2_toolbar_pane_g1

0x7a77,	// (0x00050668) aid_main_viewer_pane_g1_ParamLimits

0x7a77,	// (0x00050668) aid_main_viewer_pane_g1

0x7a83,	// (0x00050674) aid_main_viewer_pane_g2_ParamLimits

0x7a83,	// (0x00050674) aid_main_viewer_pane_g2

0x7a8f,	// (0x00050680) aid_main_viewer_pane_g3_ParamLimits

0x7a8f,	// (0x00050680) aid_main_viewer_pane_g3

0x7aa0,	// (0x00050691) aid_main_viewer_pane_g4_ParamLimits

0x7aa0,	// (0x00050691) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000580bd) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000580bd) aid_main_viewer_pane_g

0x8214,	// (0x00050e05) main_calc_pane_ParamLimits

0x8221,	// (0x00050e12) main_dialer2_pane_ParamLimits

0x4653,	// (0x0004d244) main_cam6_pane

0x4653,	// (0x0004d244) main_vid6_pane

0x949b,	// (0x0005208c) listscroll_gen_pane_cp06_ParamLimits

0x949b,	// (0x0005208c) listscroll_gen_pane_cp06

0x9560,	// (0x00052151) main_clock2_pane_t5_ParamLimits

0x9560,	// (0x00052151) main_clock2_pane_t5

0x95a9,	// (0x0005219a) aid_call2_pane_cp10_ParamLimits

0x95bb,	// (0x000521ac) aid_call_pane_cp10_ParamLimits

0xd7a0,	// (0x00056391) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd7a0,	// (0x00056391) popup_clock_analogue_window_cp10_g2_ParamLimits

0x95cd,	// (0x000521be) popup_clock_analogue_window_cp10_g3_ParamLimits

0x95cd,	// (0x000521be) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd7a0,	// (0x00056391) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000583f3) popup_clock_analogue_window_cp10_g_ParamLimits

0x95df,	// (0x000521d0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9da5,	// (0x00052996) cell_dialer2_keypad_pane_g2_ParamLimits

0x9da5,	// (0x00052996) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x000584d9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x000584d9) cell_dialer2_keypad_pane_g

0x9dc1,	// (0x000529b2) cell_dialer2_keypad_pane_t1

0xa7d0,	// (0x000533c1) main_cset_text2_pane_ParamLimits

0xa7d0,	// (0x000533c1) main_cset_text2_pane

0x196c,	// (0x0004a55d) area_vitu2_query_pane_g1_ParamLimits

0xafed,	// (0x00053bde) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00058688) area_vitu2_query_pane_g_ParamLimits

0x19f0,	// (0x0004a5e1) area_vitu2_query_pane_t7_ParamLimits

0x19f0,	// (0x0004a5e1) area_vitu2_query_pane_t7

0xb04e,	// (0x00053c3f) bg_button_pane_cp018_ParamLimits

0xb05c,	// (0x00053c4d) bg_button_pane_cp021_ParamLimits

0xb068,	// (0x00053c59) bg_button_pane_cp022_ParamLimits

0xb068,	// (0x00053c59) bg_vkb2_func_pane_cp08_ParamLimits

0xb04e,	// (0x00053c3f) bg_vkb2_func_pane_cp06_ParamLimits

0xb05c,	// (0x00053c4d) bg_vkb2_func_pane_cp07_ParamLimits

0xb079,	// (0x00053c6a) input_focus_pane_cp09_ParamLimits

0xb50d,	// (0x000540fe) cam6_autofocus_pane_ParamLimits

0xb50d,	// (0x000540fe) cam6_autofocus_pane

0xb52f,	// (0x00054120) cam6_image_uncrop_pane_ParamLimits

0xb52f,	// (0x00054120) cam6_image_uncrop_pane

0xb55c,	// (0x0005414d) cam6_indi_pane_ParamLimits

0xb55c,	// (0x0005414d) cam6_indi_pane

0xb576,	// (0x00054167) cam6_mode_pane_ParamLimits

0xb576,	// (0x00054167) cam6_mode_pane

0xb58a,	// (0x0005417b) cam6_timer_pane_ParamLimits

0xb58a,	// (0x0005417b) cam6_timer_pane

0xb596,	// (0x00054187) cam6_zoom_pane_ParamLimits

0xb596,	// (0x00054187) cam6_zoom_pane

0xb5ae,	// (0x0005419f) cam6_mode_pane_g1_ParamLimits

0xb5ae,	// (0x0005419f) cam6_mode_pane_g1

0xb5ba,	// (0x000541ab) cam6_mode_pane_g2_ParamLimits

0xb5ba,	// (0x000541ab) cam6_mode_pane_g2

0xb5c6,	// (0x000541b7) cam6_mode_pane_g3_ParamLimits

0xb5c6,	// (0x000541b7) cam6_mode_pane_g3

0xb5d2,	// (0x000541c3) cam6_mode_pane_g4_ParamLimits

0xb5d2,	// (0x000541c3) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00058770) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00058770) cam6_mode_pane_g

0x1c5e,	// (0x0004a84f) bg_tb_trans_pane_cp08_ParamLimits

0x1c5e,	// (0x0004a84f) bg_tb_trans_pane_cp08

0x1c6c,	// (0x0004a85d) cam6_battery_pane_ParamLimits

0x1c6c,	// (0x0004a85d) cam6_battery_pane

0x1c82,	// (0x0004a873) cam6_indi_pane_g1_ParamLimits

0x1c82,	// (0x0004a873) cam6_indi_pane_g1

0x1c94,	// (0x0004a885) cam6_indi_pane_g2_ParamLimits

0x1c94,	// (0x0004a885) cam6_indi_pane_g2

0x1ca6,	// (0x0004a897) cam6_indi_pane_g3_ParamLimits

0x1ca6,	// (0x0004a897) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00058779) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00058779) cam6_indi_pane_g

0x1cb8,	// (0x0004a8a9) cam6_indi_pane_t1_ParamLimits

0x1cb8,	// (0x0004a8a9) cam6_indi_pane_t1

0xa29d,	// (0x00052e8e) cam6_autofocus_pane_g1

0xa295,	// (0x00052e86) cam6_autofocus_pane_g2

0xa2ad,	// (0x00052e9e) cam6_autofocus_pane_g3

0xa2a5,	// (0x00052e96) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00058780) cam6_autofocus_pane_g

0x1cde,	// (0x0004a8cf) cam6_timer_pane_g1

0x1ce6,	// (0x0004a8d7) cam6_timer_pane_t1

0x1cf4,	// (0x0004a8e5) cam6_zoom_cont_pane

0x1cfc,	// (0x0004a8ed) cam6_zoom_pane_g1

0x1d04,	// (0x0004a8f5) cam6_zoom_pane_g2

0xb5de,	// (0x000541cf) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00058789) cam6_zoom_pane_g

0xf0ac,	// (0x00057c9d) cam6_battery_pane_g1

0xf0ac,	// (0x00057c9d) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00058300) cam6_battery_pane_g

0x1d0c,	// (0x0004a8fd) cam6_zoom_cont_pane_g1

0x1d15,	// (0x0004a906) cam6_zoom_cont_pane_g2

0x1d1e,	// (0x0004a90f) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00058790) cam6_zoom_cont_pane_g

0xb5fb,	// (0x000541ec) cam6_mode_pane_cp_ParamLimits

0xb5fb,	// (0x000541ec) cam6_mode_pane_cp

0xb60f,	// (0x00054200) cam6_zoom_pane_cp_ParamLimits

0xb60f,	// (0x00054200) cam6_zoom_pane_cp

0xb627,	// (0x00054218) vid6_image_uncrop_cif_pane_ParamLimits

0xb627,	// (0x00054218) vid6_image_uncrop_cif_pane

0xb653,	// (0x00054244) vid6_image_uncrop_nhd_pane_ParamLimits

0xb653,	// (0x00054244) vid6_image_uncrop_nhd_pane

0xb670,	// (0x00054261) vid6_image_uncrop_vga_pane_ParamLimits

0xb670,	// (0x00054261) vid6_image_uncrop_vga_pane

0xb68f,	// (0x00054280) vid6_image_uncrop_wvga_pane_ParamLimits

0xb68f,	// (0x00054280) vid6_image_uncrop_wvga_pane

0xb6ac,	// (0x0005429d) vid6_indi_pane_ParamLimits

0xb6ac,	// (0x0005429d) vid6_indi_pane

0x1c5e,	// (0x0004a84f) bg_tb_trans_pane_cp09_ParamLimits

0x1c5e,	// (0x0004a84f) bg_tb_trans_pane_cp09

0x1d36,	// (0x0004a927) cam6_battery_pane_cp_ParamLimits

0x1d36,	// (0x0004a927) cam6_battery_pane_cp

0x1d42,	// (0x0004a933) vid6_indi_pane_g1_ParamLimits

0x1d42,	// (0x0004a933) vid6_indi_pane_g1

0x1d54,	// (0x0004a945) vid6_indi_pane_g2_ParamLimits

0x1d54,	// (0x0004a945) vid6_indi_pane_g2

0x1d66,	// (0x0004a957) vid6_indi_pane_g3_ParamLimits

0x1d66,	// (0x0004a957) vid6_indi_pane_g3

0x1d7b,	// (0x0004a96c) vid6_indi_pane_g4_ParamLimits

0x1d7b,	// (0x0004a96c) vid6_indi_pane_g4

0x1d90,	// (0x0004a981) vid6_indi_pane_g5_ParamLimits

0x1d90,	// (0x0004a981) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00058797) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00058797) vid6_indi_pane_g

0x1daa,	// (0x0004a99b) vid6_indi_pane_t1_ParamLimits

0x1daa,	// (0x0004a99b) vid6_indi_pane_t1

0x1dc0,	// (0x0004a9b1) vid6_indi_pane_t2_ParamLimits

0x1dc0,	// (0x0004a9b1) vid6_indi_pane_t2

0x1de8,	// (0x0004a9d9) vid6_indi_pane_t3_ParamLimits

0x1de8,	// (0x0004a9d9) vid6_indi_pane_t3

0x1e10,	// (0x0004aa01) vid6_indi_pane_t4_ParamLimits

0x1e10,	// (0x0004aa01) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x000587a2) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x000587a2) vid6_indi_pane_t

0x1e34,	// (0x0004aa25) wait_bar_pane_cp08

0xb6d1,	// (0x000542c2) main_cset_text2_pane_t1_ParamLimits

0xb6d1,	// (0x000542c2) main_cset_text2_pane_t1

0xb5e6,	// (0x000541d7) listscroll_gen_pane_cp06_t1_ParamLimits

0xb5e6,	// (0x000541d7) listscroll_gen_pane_cp06_t1

0x4653,	// (0x0004d244) main_cam6_set_pane

0xa128,	// (0x00052d19) bg_tb_trans_pane_cp06_ParamLimits

0xa13e,	// (0x00052d2f) cam4_indicators_pane_g1_ParamLimits

0xa14f,	// (0x00052d40) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00058516) cam4_indicators_pane_g_ParamLimits

0xa16d,	// (0x00052d5e) cam4_indicators_pane_t1_ParamLimits

0xa215,	// (0x00052e06) bg_tb_trans_pane_cp07_ParamLimits

0xa22d,	// (0x00052e1e) vid4_indicators_pane_g1_ParamLimits

0xa23e,	// (0x00052e2f) vid4_indicators_pane_g2_ParamLimits

0xa24f,	// (0x00052e40) vid4_indicators_pane_g3_ParamLimits

0xa260,	// (0x00052e51) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00058528) vid4_indicators_pane_g_ParamLimits

0xa27c,	// (0x00052e6d) vid4_indicators_pane_t1_ParamLimits

0xb1aa,	// (0x00053d9b) vid4_progress_pane_g1_ParamLimits

0xb1ba,	// (0x00053dab) vid4_progress_pane_g2_ParamLimits

0xd425,	// (0x00056016) vid4_progress_pane_g3_ParamLimits

0xb1ca,	// (0x00053dbb) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x000586d3) vid4_progress_pane_g_ParamLimits

0xb1e8,	// (0x00053dd9) vid4_progress_pane_t1_ParamLimits

0xb1fd,	// (0x00053dee) vid4_progress_pane_t2_ParamLimits

0xb213,	// (0x00053e04) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x000586de) vid4_progress_pane_t_ParamLimits

0xb228,	// (0x00053e19) wait_bar_pane_cp07_ParamLimits

0xb704,	// (0x000542f5) main_cam6_set_pane_g2_ParamLimits

0xb704,	// (0x000542f5) main_cam6_set_pane_g2

0xb710,	// (0x00054301) main_cset6_listscroll_pane_ParamLimits

0xb710,	// (0x00054301) main_cset6_listscroll_pane

0xb73b,	// (0x0005432c) main_cset6_slider_pane_ParamLimits

0xb73b,	// (0x0005432c) main_cset6_slider_pane

0xb747,	// (0x00054338) main_cset6_text2_pane_ParamLimits

0xb747,	// (0x00054338) main_cset6_text2_pane

0x1e43,	// (0x0004aa34) main_cset6_text_pane

0x1e4b,	// (0x0004aa3c) main_cset_list_pane_copy1_ParamLimits

0x1e4b,	// (0x0004aa3c) main_cset_list_pane_copy1

0x1e5b,	// (0x0004aa4c) scroll_pane_cp028_copy1

0xb75a,	// (0x0005434b) cset_list_set_pane_copy1

0xb76d,	// (0x0005435e) aid_position_infowindow_above_copy1

0xb775,	// (0x00054366) aid_position_infowindow_below_copy1

0xb77d,	// (0x0005436e) cset_list_set_pane_g1_copy1

0x16d6,	// (0x0004a2c7) cset_list_set_pane_g3_copy1_ParamLimits

0x16d6,	// (0x0004a2c7) cset_list_set_pane_g3_copy1

0xaab5,	// (0x000536a6) cset_list_set_pane_t1_copy1_ParamLimits

0xaab5,	// (0x000536a6) cset_list_set_pane_t1_copy1

0xec65,	// (0x00057856) list_highlight_pane_cp021_copy1_ParamLimits

0xec65,	// (0x00057856) list_highlight_pane_cp021_copy1

0x1e64,	// (0x0004aa55) cset6_slider_pane_ParamLimits

0x1e64,	// (0x0004aa55) cset6_slider_pane

0x1e90,	// (0x0004aa81) main_cset6_slider_pane_g1_ParamLimits

0x1e90,	// (0x0004aa81) main_cset6_slider_pane_g1

0xb785,	// (0x00054376) main_cset6_slider_pane_g2_ParamLimits

0xb785,	// (0x00054376) main_cset6_slider_pane_g2

0x1eb8,	// (0x0004aaa9) main_cset6_slider_pane_g3_ParamLimits

0x1eb8,	// (0x0004aaa9) main_cset6_slider_pane_g3

0xb7ad,	// (0x0005439e) main_cset6_slider_pane_g4_ParamLimits

0xb7ad,	// (0x0005439e) main_cset6_slider_pane_g4

0xb7b9,	// (0x000543aa) main_cset6_slider_pane_g5_ParamLimits

0xb7b9,	// (0x000543aa) main_cset6_slider_pane_g5

0x1606,	// (0x0004a1f7) main_cset6_slider_pane_g7_ParamLimits

0x1606,	// (0x0004a1f7) main_cset6_slider_pane_g7

0x1612,	// (0x0004a203) main_cset6_slider_pane_g8_ParamLimits

0x1612,	// (0x0004a203) main_cset6_slider_pane_g8

0xb7c7,	// (0x000543b8) main_cset6_slider_pane_g9_ParamLimits

0xb7c7,	// (0x000543b8) main_cset6_slider_pane_g9

0xb7d3,	// (0x000543c4) main_cset6_slider_pane_g10_ParamLimits

0xb7d3,	// (0x000543c4) main_cset6_slider_pane_g10

0xb7df,	// (0x000543d0) main_cset6_slider_pane_g11_ParamLimits

0xb7df,	// (0x000543d0) main_cset6_slider_pane_g11

0xb7eb,	// (0x000543dc) main_cset6_slider_pane_g12_ParamLimits

0xb7eb,	// (0x000543dc) main_cset6_slider_pane_g12

0xb7f7,	// (0x000543e8) main_cset6_slider_pane_g13_ParamLimits

0xb7f7,	// (0x000543e8) main_cset6_slider_pane_g13

0xb803,	// (0x000543f4) main_cset6_slider_pane_g14_ParamLimits

0xb803,	// (0x000543f4) main_cset6_slider_pane_g14

0xb80f,	// (0x00054400) main_cset6_slider_pane_g15_ParamLimits

0xb80f,	// (0x00054400) main_cset6_slider_pane_g15

0xb827,	// (0x00054418) main_cset6_slider_pane_g16_ParamLimits

0xb827,	// (0x00054418) main_cset6_slider_pane_g16

0xb835,	// (0x00054426) main_cset6_slider_pane_g17_ParamLimits

0xb835,	// (0x00054426) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x000587ab) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x000587ab) main_cset6_slider_pane_g

0x1ec4,	// (0x0004aab5) main_cset6_slider_pane_t1_ParamLimits

0x1ec4,	// (0x0004aab5) main_cset6_slider_pane_t1

0xb85b,	// (0x0005444c) main_cset6_slider_pane_t2_ParamLimits

0xb85b,	// (0x0005444c) main_cset6_slider_pane_t2

0xb886,	// (0x00054477) main_cset6_slider_pane_t3_ParamLimits

0xb886,	// (0x00054477) main_cset6_slider_pane_t3

0xb8b1,	// (0x000544a2) main_cset6_slider_pane_t4_ParamLimits

0xb8b1,	// (0x000544a2) main_cset6_slider_pane_t4

0xb8dc,	// (0x000544cd) main_cset6_slider_pane_t5_ParamLimits

0xb8dc,	// (0x000544cd) main_cset6_slider_pane_t5

0x1f05,	// (0x0004aaf6) main_cset6_slider_pane_t7_ParamLimits

0x1f05,	// (0x0004aaf6) main_cset6_slider_pane_t7

0xb909,	// (0x000544fa) main_cset6_slider_pane_t8_ParamLimits

0xb909,	// (0x000544fa) main_cset6_slider_pane_t8

0xb92d,	// (0x0005451e) main_cset6_slider_pane_t9_ParamLimits

0xb92d,	// (0x0005451e) main_cset6_slider_pane_t9

0xb951,	// (0x00054542) main_cset6_slider_pane_t10_ParamLimits

0xb951,	// (0x00054542) main_cset6_slider_pane_t10

0xb975,	// (0x00054566) main_cset6_slider_pane_t11_ParamLimits

0xb975,	// (0x00054566) main_cset6_slider_pane_t11

0x1f3b,	// (0x0004ab2c) main_cset6_slider_pane_t14_ParamLimits

0x1f3b,	// (0x0004ab2c) main_cset6_slider_pane_t14

0x1f74,	// (0x0004ab65) main_cset6_slider_pane_t15_ParamLimits

0x1f74,	// (0x0004ab65) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x000587d0) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x000587d0) main_cset6_slider_pane_t

0x16e5,	// (0x0004a2d6) cset_slider_pane_g1_copy1

0x16ee,	// (0x0004a2df) cset_slider_pane_g2_copy1

0x16f7,	// (0x0004a2e8) cset_slider_pane_g3_copy1

0x4653,	// (0x0004d244) bg_popup_sub_pane_cp011_copy1

0x1798,	// (0x0004a389) main_cset_text_pane_g1_copy1

0x17a0,	// (0x0004a391) main_cset_text_pane_t1_copy1

0x17ae,	// (0x0004a39f) main_cset_text_pane_t2_copy1

0x17bc,	// (0x0004a3ad) main_cset_text_pane_t3_copy1

0x17ca,	// (0x0004a3bb) main_cset_text_pane_t4_copy1

0x17d8,	// (0x0004a3c9) main_cset_text_pane_t5_copy1

0x17e6,	// (0x0004a3d7) main_cset_text_pane_t6_copy1

0x17f4,	// (0x0004a3e5) main_cset_text_pane_t7_copy1

0xb999,	// (0x0005458a) main_cset_text2_pane_t1_copy1

0x4653,	// (0x0004d244) main_ncimui_pane

0x8260,	// (0x00050e51) popup_query_ncimui_window_ParamLimits

0x8260,	// (0x00050e51) popup_query_ncimui_window

0x0d35,	// (0x00049926) field_cale_ev2_pane_g4_ParamLimits

0x0d35,	// (0x00049926) field_cale_ev2_pane_g4

0x9ac5,	// (0x000526b6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9ac5,	// (0x000526b6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000584b4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000584b4) cell_video_dialer_keypad_pane_g

0x9add,	// (0x000526ce) cell_video_dialer_keypad_pane_t1

0x4653,	// (0x0004d244) bg_popup_window_pane_cp012

0xd5ff,	// (0x000561f0) heading_pane_cp06

0x209c,	// (0x0004ac8d) ncim_query_content_pane

0x4653,	// (0x0004d244) bg_popup_heading_pane_cp01

0x20a4,	// (0x0004ac95) ncim_heading_pane_t1

0x20b2,	// (0x0004aca3) ncim_indicator_popup_pane

0x20c4,	// (0x0004acb5) ncim_query_button_pane

0x20d8,	// (0x0004acc9) ncim_query_content_pane_t1

0x20ea,	// (0x0004acdb) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0005880f) ncim_query_content_pane_t

0x2124,	// (0x0004ad15) ncim_query_list_pane

0x2136,	// (0x0004ad27) ncim_query_popup_pane

0x20b2,	// (0x0004aca3) ncim_indicator_popup_pane_ParamLimits

0xba89,	// (0x0005467a) ncim_query_content_pane_g1_ParamLimits

0xba89,	// (0x0005467a) ncim_query_content_pane_g1

0x20d8,	// (0x0004acc9) ncim_query_content_pane_t1_ParamLimits

0x20ea,	// (0x0004acdb) ncim_query_content_pane_t2_ParamLimits

0xba95,	// (0x00054686) ncim_query_content_pane_t3_ParamLimits

0xba95,	// (0x00054686) ncim_query_content_pane_t3

0xbab2,	// (0x000546a3) ncim_query_content_pane_t4_ParamLimits

0xbab2,	// (0x000546a3) ncim_query_content_pane_t4

0xbacf,	// (0x000546c0) ncim_query_content_pane_t5_ParamLimits

0xbacf,	// (0x000546c0) ncim_query_content_pane_t5

0x20fc,	// (0x0004aced) ncim_query_content_pane_t6_ParamLimits

0x20fc,	// (0x0004aced) ncim_query_content_pane_t6

0xfc1e,	// (0x0005880f) ncim_query_content_pane_t_ParamLimits

0x2124,	// (0x0004ad15) ncim_query_list_pane_ParamLimits

0x2136,	// (0x0004ad27) ncim_query_popup_pane_ParamLimits

0x214a,	// (0x0004ad3b) wait_bar_pane_cp04

0x4653,	// (0x0004d244) input_focus_pane_cp011

0x2152,	// (0x0004ad43) ncim_query_popup_pane_t1

0x2160,	// (0x0004ad51) ncim_list_query_list_pane_ParamLimits

0x2160,	// (0x0004ad51) ncim_list_query_list_pane

0x4653,	// (0x0004d244) bg_button_pane_cp027

0x216d,	// (0x0004ad5e) ncim_query_button_pane_g1

0x4653,	// (0x0004d244) list_highlight_pane_cp012

0x2177,	// (0x0004ad68) ncim_list_query_list_pane_g1

0x217f,	// (0x0004ad70) ncim_list_query_list_pane_t1

0xa15e,	// (0x00052d4f) cam4_indicators_pane_g3_ParamLimits

0xa15e,	// (0x00052d4f) cam4_indicators_pane_g3

0xa26c,	// (0x00052e5d) vid4_indicators_pane_g5_ParamLimits

0xa26c,	// (0x00052e5d) vid4_indicators_pane_g5

0xb1d9,	// (0x00053dca) vid4_progress_pane_g5_ParamLimits

0xb1d9,	// (0x00053dca) vid4_progress_pane_g5

0xb9d1,	// (0x000545c2) main_ncimui_pane_g1

0xba17,	// (0x00054608) ncimui_group_query_pane_ParamLimits

0xba17,	// (0x00054608) ncimui_group_query_pane

0xba4b,	// (0x0005463c) ncimui_list_pane_ParamLimits

0xba4b,	// (0x0005463c) ncimui_list_pane

0xba65,	// (0x00054656) ncimui_text_pane_ParamLimits

0xba65,	// (0x00054656) ncimui_text_pane

0xbaec,	// (0x000546dd) ncimui_text_pane_t1_ParamLimits

0xbaec,	// (0x000546dd) ncimui_text_pane_t1

0x218d,	// (0x0004ad7e) ncimui_list_single_graphic_pane_ParamLimits

0x218d,	// (0x0004ad7e) ncimui_list_single_graphic_pane

0xbb0b,	// (0x000546fc) ncimui_query_pane_ParamLimits

0xbb0b,	// (0x000546fc) ncimui_query_pane

0x4653,	// (0x0004d244) list_highlight_pane_cp013

0x219d,	// (0x0004ad8e) ncim_list_query_list_pane_t1_copy1

0x2177,	// (0x0004ad68) ncim_list_single_graphic_pane_g1

0x21ab,	// (0x0004ad9c) ncim_query_button_pane_cp01

0x21b3,	// (0x0004ada4) ncim_query_entry_pane_ParamLimits

0x21b3,	// (0x0004ada4) ncim_query_entry_pane

0x21c3,	// (0x0004adb4) ncimui_query_pane_g1

0x21cb,	// (0x0004adbc) ncimui_query_pane_t1_ParamLimits

0x21cb,	// (0x0004adbc) ncimui_query_pane_t1

0x4653,	// (0x0004d244) input_focus_pane_cp012

0x2152,	// (0x0004ad43) ncim_query_entry_pane_t1

0x53c3,	// (0x0004dfb4) main_im_pane_ParamLimits

0xec65,	// (0x00057856) main_mobtv_pane_ParamLimits

0xec65,	// (0x00057856) main_mobtv_pane

0xb843,	// (0x00054434) main_cset6_slider_pane_g18_ParamLimits

0xb843,	// (0x00054434) main_cset6_slider_pane_g18

0xb84f,	// (0x00054440) main_cset6_slider_pane_g19_ParamLimits

0xb84f,	// (0x00054440) main_cset6_slider_pane_g19

0x149a,	// (0x0004a08b) bg_main_mobtv_pane_ParamLimits

0x149a,	// (0x0004a08b) bg_main_mobtv_pane

0xbb1b,	// (0x0005470c) main_mobtv_info_pane

0xbb26,	// (0x00054717) main_mobtv_loading_pane_ParamLimits

0xbb26,	// (0x00054717) main_mobtv_loading_pane

0x21ef,	// (0x0004ade0) main_mobtv_pg_channel_list_pane

0x21f9,	// (0x0004adea) main_mobtv_pg_hdr_pane

0xbb33,	// (0x00054724) main_mobtv_programe_curr_pane_ParamLimits

0xbb33,	// (0x00054724) main_mobtv_programe_curr_pane

0xbb40,	// (0x00054731) main_mobtv_programe_next_pane_ParamLimits

0xbb40,	// (0x00054731) main_mobtv_programe_next_pane

0x2202,	// (0x0004adf3) popup_mobtv_noti_window

0xf0ac,	// (0x00057c9d) main_tv_pg_hdr_pane_g1

0x220a,	// (0x0004adfb) main_tv_pg_hdr_pane_g2

0x2212,	// (0x0004ae03) main_tv_pg_hdr_pane_g3

0x221a,	// (0x0004ae0b) main_tv_pg_hdr_pane_g4

0x2222,	// (0x0004ae13) main_tv_pg_hdr_pane_g5

0x222c,	// (0x0004ae1d) main_tv_pg_hdr_pane_g6

0x2236,	// (0x0004ae27) main_tv_pg_hdr_pane_g7

0x2240,	// (0x0004ae31) main_tv_pg_hdr_pane_g8

0x224a,	// (0x0004ae3b) main_tv_pg_hdr_pane_g9

0x2254,	// (0x0004ae45) main_tv_pg_hdr_pane_g10

0x225e,	// (0x0004ae4f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0005881c) main_tv_pg_hdr_pane_g

0x2268,	// (0x0004ae59) main_tv_pg_hdr_pane_t1

0x2276,	// (0x0004ae67) main_tv_pg_hdr_pane_t2

0x2284,	// (0x0004ae75) main_tv_pg_hdr_pane_t3

0x2294,	// (0x0004ae85) main_tv_pg_hdr_pane_t4

0x22a4,	// (0x0004ae95) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00058833) main_tv_pg_hdr_pane_t

0x22b4,	// (0x0004aea5) single_mobtv_pg_channel_pane_ParamLimits

0x22b4,	// (0x0004aea5) single_mobtv_pg_channel_pane

0x22c6,	// (0x0004aeb7) single_mobtv_pg_channel_table_pane

0x22cf,	// (0x0004aec0) single_mobtv_pg_channel_thumb_pane

0x22d8,	// (0x0004aec9) single_tv_pg_channel_pane_g1

0x22e1,	// (0x0004aed2) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0005883e) single_tv_pg_channel_pane_g

0x0c94,	// (0x00049885) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0c94,	// (0x00049885) bg_single_mobtv_pg_channel_thumb_pane

0x22ea,	// (0x0004aedb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x22ea,	// (0x0004aedb) single_mobtv_pg_channel_thumb_pane_g1

0x22f8,	// (0x0004aee9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x22f8,	// (0x0004aee9) single_mobtv_pg_channel_thumb_pane_g2

0x2304,	// (0x0004aef5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2304,	// (0x0004aef5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00058843) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00058843) single_mobtv_pg_channel_thumb_pane_g

0x2310,	// (0x0004af01) single_mobtv_pg_channel_thumb_pane_t1

0x231e,	// (0x0004af0f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0005884a) single_mobtv_pg_channel_thumb_pane_t

0xf0ac,	// (0x00057c9d) bg_single_mobtv_pg_channel_table_pane_g1

0xf0ac,	// (0x00057c9d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00058300) bg_single_mobtv_pg_channel_table_pane_g

0x232c,	// (0x0004af1d) single_mobtv_pg_channel_table_pane_t1

0x233a,	// (0x0004af2b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0005884f) single_mobtv_pg_channel_table_pane_t

0xbb55,	// (0x00054746) main_mobtv_info_pane_g1_ParamLimits

0xbb55,	// (0x00054746) main_mobtv_info_pane_g1

0xbb71,	// (0x00054762) main_mobtv_info_pane_t1_ParamLimits

0xbb71,	// (0x00054762) main_mobtv_info_pane_t1

0xbbe9,	// (0x000547da) main_mobtv_info_pane_t2_ParamLimits

0xbbe9,	// (0x000547da) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00058859) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00058859) main_mobtv_info_pane_t

0xbc78,	// (0x00054869) wait_bar_pane_cp05

0xbc8a,	// (0x0005487b) main_mobtv_loading_pane_g1_ParamLimits

0xbc8a,	// (0x0005487b) main_mobtv_loading_pane_g1

0xbc98,	// (0x00054889) main_mobtv_loading_pane_g2_ParamLimits

0xbc98,	// (0x00054889) main_mobtv_loading_pane_g2

0xbca4,	// (0x00054895) main_mobtv_loading_pane_g3_ParamLimits

0xbca4,	// (0x00054895) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00058860) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00058860) main_mobtv_loading_pane_g

0x2348,	// (0x0004af39) main_mobtv_loading_pane_t1_ParamLimits

0x2348,	// (0x0004af39) main_mobtv_loading_pane_t1

0x2360,	// (0x0004af51) main_mobtv_loading_pane_t2_ParamLimits

0x2360,	// (0x0004af51) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00058867) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00058867) main_mobtv_loading_pane_t

0xbcb2,	// (0x000548a3) wait_bar_pane_cp06_ParamLimits

0xbcb2,	// (0x000548a3) wait_bar_pane_cp06

0x2384,	// (0x0004af75) main_mobtv_programe_curr_pane_t1

0x2392,	// (0x0004af83) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0005886c) main_mobtv_programe_curr_pane_t

0x23a0,	// (0x0004af91) main_mobtv_programe_next_pane_t1

0x23ae,	// (0x0004af9f) main_mobtv_programe_next_pane_t2

0x23bc,	// (0x0004afad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00058871) main_mobtv_programe_next_pane_t

0x4653,	// (0x0004d244) bg_popup_mobtv_noti_window_pane

0x23ca,	// (0x0004afbb) popup_mobtv_noti_window_g1

0x23d2,	// (0x0004afc3) popup_mobtv_noti_window_t1

0x23e0,	// (0x0004afd1) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00058878) popup_mobtv_noti_window_t

0xf0ac,	// (0x00057c9d) bg_popup_mobtv_noti_window_pane_g1

0x4653,	// (0x0004d244) sc_clock_pane

0x4653,	// (0x0004d244) main_fs_bigclock_pane

0xb3c0,	// (0x00053fb1) blid2_tripm_pane_t4_ParamLimits

0xb3c0,	// (0x00053fb1) blid2_tripm_pane_t4

0xbcbe,	// (0x000548af) sc_clock_pane_g1_ParamLimits

0xbcbe,	// (0x000548af) sc_clock_pane_g1

0xbccc,	// (0x000548bd) sc_clock_pane_t1_ParamLimits

0xbccc,	// (0x000548bd) sc_clock_pane_t1

0xbcdf,	// (0x000548d0) sc_clock_pane_t2_ParamLimits

0xbcdf,	// (0x000548d0) sc_clock_pane_t2

0xbcf1,	// (0x000548e2) sc_clock_pane_t3_ParamLimits

0xbcf1,	// (0x000548e2) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0005887d) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0005887d) sc_clock_pane_t

0xc9a8,	// (0x00055599) main_fs_bigclock_indicator_pane_ParamLimits

0xc9a8,	// (0x00055599) main_fs_bigclock_indicator_pane

0xbd75,	// (0x00054966) main_fs_bigclock_pane_g1_ParamLimits

0xbd75,	// (0x00054966) main_fs_bigclock_pane_g1

0xc9b4,	// (0x000555a5) main_fs_bigclock_pane_t1_ParamLimits

0xc9b4,	// (0x000555a5) main_fs_bigclock_pane_t1

0xc9c6,	// (0x000555b7) main_fs_bigclock_pane_t2_ParamLimits

0xc9c6,	// (0x000555b7) main_fs_bigclock_pane_t2

0xc9da,	// (0x000555cb) main_fs_bigclock_pane_t3_ParamLimits

0xc9da,	// (0x000555cb) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x00058a7c) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00058a7c) main_fs_bigclock_pane_t

0x2feb,	// (0x0004bbdc) main_fs_bigclock_indicator_pane_g1

0x20cc,	// (0x0004acbd) ncim_query_content_pane_g2_ParamLimits

0x20cc,	// (0x0004acbd) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0005880a) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0005880a) ncim_query_content_pane_g

0xbd05,	// (0x000548f6) sc_clock_pane_t4_ParamLimits

0xbd05,	// (0x000548f6) sc_clock_pane_t4

0xec65,	// (0x00057856) main_radioblah_pane

0x13fd,	// (0x00049fee) cell_call4_button_pane_t1_copy1_ParamLimits

0x13fd,	// (0x00049fee) cell_call4_button_pane_t1_copy1

0xb9d9,	// (0x000545ca) main_ncimui_pane_t1_ParamLimits

0xb9d9,	// (0x000545ca) main_ncimui_pane_t1

0xb9eb,	// (0x000545dc) main_ncimui_pane_t2_ParamLimits

0xb9eb,	// (0x000545dc) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00058803) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00058803) main_ncimui_pane_t

0x250e,	// (0x0004b0ff) main_radioblah_anim_pane_ParamLimits

0x250e,	// (0x0004b0ff) main_radioblah_anim_pane

0x251f,	// (0x0004b110) main_radioblah_info_pane_ParamLimits

0x251f,	// (0x0004b110) main_radioblah_info_pane

0x2533,	// (0x0004b124) main_radioblah_pane_t1_ParamLimits

0x2533,	// (0x0004b124) main_radioblah_pane_t1

0x254f,	// (0x0004b140) main_radioblah_pane_t2_ParamLimits

0x254f,	// (0x0004b140) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0005889e) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0005889e) main_radioblah_pane_t

0xbdc7,	// (0x000549b8) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbdc7,	// (0x000549b8) main_radioblah_rocker_ctrl_pane

0x2597,	// (0x0004b188) main_radioblah_info_pane_t1_ParamLimits

0x2597,	// (0x0004b188) main_radioblah_info_pane_t1

0xbe0c,	// (0x000549fd) main_radioblah_info_pane_t2_ParamLimits

0xbe0c,	// (0x000549fd) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x000588a7) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x000588a7) main_radioblah_info_pane_t

0xf0ac,	// (0x00057c9d) main_radioblah_rocker_ctrl_pane_g1

0xbebc,	// (0x00054aad) main_radioblah_rocker_ctrl_pane_g2

0xbec4,	// (0x00054ab5) main_radioblah_rocker_ctrl_pane_g3

0xbecc,	// (0x00054abd) main_radioblah_rocker_ctrl_pane_g4

0xbed4,	// (0x00054ac5) main_radioblah_rocker_ctrl_pane_g5

0xbedc,	// (0x00054acd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x000588b0) main_radioblah_rocker_ctrl_pane_g

0xb999,	// (0x0005458a) main_cset_text2_pane_t1_copy1_ParamLimits

0xa07e,	// (0x00052c6f) cam4_image_uncrop_qvga_pane

0xa1d3,	// (0x00052dc4) vid4_image_uncrop_qcif_pane

0xb54e,	// (0x0005413f) cam6_image_uncrop_qvga_pane_ParamLimits

0xb54e,	// (0x0005413f) cam6_image_uncrop_qvga_pane

0x1d26,	// (0x0004a917) vid6_image_uncrop_qcif_pane_ParamLimits

0x1d26,	// (0x0004a917) vid6_image_uncrop_qcif_pane

0x4653,	// (0x0004d244) bg_popup_preview_window_pane_cp03

0x207e,	// (0x0004ac6f) list_cset_text2_pane

0x2086,	// (0x0004ac77) main_cset6_text2_pane_g1

0x208e,	// (0x0004ac7f) main_cset6_text2_pane_t1

0xbee4,	// (0x00054ad5) list_cset_text2_pane_t1_ParamLimits

0xbee4,	// (0x00054ad5) list_cset_text2_pane_t1

0xec65,	// (0x00057856) main_radioblah_pane_ParamLimits

0xbc64,	// (0x00054855) main_mobtv_info_pane_t3_ParamLimits

0xbc64,	// (0x00054855) main_mobtv_info_pane_t3

0xbdb5,	// (0x000549a6) main_radioblah_pane_g1

0xbde0,	// (0x000549d1) main_radioblah_info_pane_g1

0xbe61,	// (0x00054a52) main_radioblah_info_pane_t3_ParamLimits

0xbe61,	// (0x00054a52) main_radioblah_info_pane_t3

0x6ec8,	// (0x0004fab9) highlight_cell_cale_month_pane_ParamLimits

0x6ec8,	// (0x0004fab9) highlight_cell_cale_month_pane

0x4653,	// (0x0004d244) main_phob_fisheye_pane

0x0dbe,	// (0x000499af) scroll_pane_cp0031_ParamLimits

0x0dbe,	// (0x000499af) scroll_pane_cp0031

0x1e34,	// (0x0004aa25) wait_bar_pane_cp08_ParamLimits

0xb75a,	// (0x0005434b) cset_list_set_pane_copy1_ParamLimits

0x25d1,	// (0x0004b1c2) highlight_cell_cale_month_pane_g1

0xbf01,	// (0x00054af2) highlight_cell_cale_month_pane_t1

0x1a5c,	// (0x0004a64d) list_gen_pane_cp01

0x15f1,	// (0x0004a1e2) scroll_pane_01

0xbf0f,	// (0x00054b00) list_single_double_fisheye_pane

0xbf18,	// (0x00054b09) list_double_fisheye_pane_g1_ParamLimits

0xbf18,	// (0x00054b09) list_double_fisheye_pane_g1

0xbf24,	// (0x00054b15) list_double_fisheye_pane_g2_ParamLimits

0xbf24,	// (0x00054b15) list_double_fisheye_pane_g2

0xbf38,	// (0x00054b29) list_double_fisheye_pane_g3_ParamLimits

0xbf38,	// (0x00054b29) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x000588bd) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x000588bd) list_double_fisheye_pane_g

0xbf61,	// (0x00054b52) list_double_fisheye_pane_t1_ParamLimits

0xbf61,	// (0x00054b52) list_double_fisheye_pane_t1

0xbf7c,	// (0x00054b6d) list_double_fisheye_pane_t2_ParamLimits

0xbf7c,	// (0x00054b6d) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x000588c8) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x000588c8) list_double_fisheye_pane_t

0x4653,	// (0x0004d244) main_call5_pane

0xbd2b,	// (0x0005491c) sc_swipe_pane_ParamLimits

0xbd2b,	// (0x0005491c) sc_swipe_pane

0xbfaa,	// (0x00054b9b) call5_image_pane_ParamLimits

0xbfaa,	// (0x00054b9b) call5_image_pane

0xbfba,	// (0x00054bab) call5_swipe_1_pane_ParamLimits

0xbfba,	// (0x00054bab) call5_swipe_1_pane

0xbfc6,	// (0x00054bb7) call5_swipe_2_pane_ParamLimits

0xbfc6,	// (0x00054bb7) call5_swipe_2_pane

0xbfe0,	// (0x00054bd1) popup_call5_audio_first_window_ParamLimits

0xbfe0,	// (0x00054bd1) popup_call5_audio_first_window

0x0c94,	// (0x00049885) call5_swipe_1_pane_g1_ParamLimits

0x0c94,	// (0x00049885) call5_swipe_1_pane_g1

0x25e2,	// (0x0004b1d3) call5_swipe_1_pane_g2_ParamLimits

0x25e2,	// (0x0004b1d3) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x000588cd) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x000588cd) call5_swipe_1_pane_g

0x25ee,	// (0x0004b1df) call5_swipe_1_pane_t1_ParamLimits

0x25ee,	// (0x0004b1df) call5_swipe_1_pane_t1

0x0c94,	// (0x00049885) call5_swipe_2_pane_g1_ParamLimits

0x0c94,	// (0x00049885) call5_swipe_2_pane_g1

0x2603,	// (0x0004b1f4) call5_swipe_2_pane_g2_ParamLimits

0x2603,	// (0x0004b1f4) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x000588d2) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x000588d2) call5_swipe_2_pane_g

0x260f,	// (0x0004b200) call5_swipe_2_pane_t1_ParamLimits

0x260f,	// (0x0004b200) call5_swipe_2_pane_t1

0x2624,	// (0x0004b215) sc_swipe_pane_g1_ParamLimits

0x2624,	// (0x0004b215) sc_swipe_pane_g1

0x2631,	// (0x0004b222) sc_swipe_pane_g2_ParamLimits

0x2631,	// (0x0004b222) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x000588d7) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x000588d7) sc_swipe_pane_g

0x263d,	// (0x0004b22e) sc_swipe_pane_t1_ParamLimits

0x263d,	// (0x0004b22e) sc_swipe_pane_t1

0x4653,	// (0x0004d244) main_cmail_launcher_pane

0xbfee,	// (0x00054bdf) aid_size_cell_cmail_l_ParamLimits

0xbfee,	// (0x00054bdf) aid_size_cell_cmail_l

0xbffe,	// (0x00054bef) grid_cmail_l_pane_ParamLimits

0xbffe,	// (0x00054bef) grid_cmail_l_pane

0xc00e,	// (0x00054bff) cell_cmail_l_pane_ParamLimits

0xc00e,	// (0x00054bff) cell_cmail_l_pane

0xc022,	// (0x00054c13) cell_cmail_l_pane_g1_ParamLimits

0xc022,	// (0x00054c13) cell_cmail_l_pane_g1

0xc02e,	// (0x00054c1f) cell_cmail_l_pane_t1_ParamLimits

0xc02e,	// (0x00054c1f) cell_cmail_l_pane_t1

0x2652,	// (0x0004b243) cell_cmail_l_pane_t2_ParamLimits

0x2652,	// (0x0004b243) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x000588dc) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x000588dc) cell_cmail_l_pane_t

0xec65,	// (0x00057856) grid_highlight_pane_cp018_ParamLimits

0xec65,	// (0x00057856) grid_highlight_pane_cp018

0x477e,	// (0x0004d36f) main2_pane_ParamLimits

0x477e,	// (0x0004d36f) main2_pane

0x560a,	// (0x0004e1fb) popup_sp_fs_action_menu_bg_pane_g1

0x5612,	// (0x0004e203) popup_sp_fs_action_menu_bg_pane_g2

0x561a,	// (0x0004e20b) popup_sp_fs_action_menu_bg_pane_g3

0x5622,	// (0x0004e213) popup_sp_fs_action_menu_bg_pane_g4

0x562a,	// (0x0004e21b) popup_sp_fs_action_menu_bg_pane_g5

0x5632,	// (0x0004e223) popup_sp_fs_action_menu_bg_pane_g6

0x563a,	// (0x0004e22b) popup_sp_fs_action_menu_bg_pane_g7

0x5642,	// (0x0004e233) popup_sp_fs_action_menu_bg_pane_g8

0x564a,	// (0x0004e23b) popup_sp_fs_action_menu_bg_pane_g9

0x5652,	// (0x0004e243) popup_sp_fs_action_menu_bg_pane_g10

0x5652,	// (0x0004e243) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00057dac) popup_sp_fs_action_menu_bg_pane_g

0x0779,	// (0x0004936a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t3_g3_g1

0x0785,	// (0x00049376) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x2_t3_g3_g2

0x0791,	// (0x00049382) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0791,	// (0x00049382) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00057e5c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00057e5c) list_medium_line_x2_t3_g3_g

0x079d,	// (0x0004938e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x079d,	// (0x0004938e) list_medium_line_x2_t3_g3_t1

0x5f18,	// (0x0004eb09) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5f18,	// (0x0004eb09) list_medium_line_x2_t3_g3_t2

0x07b2,	// (0x000493a3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00057e63) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00057e63) list_medium_line_x2_t3_g3_t

0x0779,	// (0x0004936a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t3_g2_g1

0x0791,	// (0x00049382) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0791,	// (0x00049382) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00057e6a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00057e6a) list_medium_line_x2_t3_g2_g

0x07c7,	// (0x000493b8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x07c7,	// (0x000493b8) list_medium_line_x2_t3_g2_t1

0x07dd,	// (0x000493ce) list_medium_line_x2_t3_g2_t2_ParamLimits

0x07dd,	// (0x000493ce) list_medium_line_x2_t3_g2_t2

0x07b2,	// (0x000493a3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00057e6f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00057e6f) list_medium_line_x2_t3_g2_t

0x0779,	// (0x0004936a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t4_g4_g1

0x07ef,	// (0x000493e0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x07ef,	// (0x000493e0) list_medium_line_x2_t4_g4_g2

0x0785,	// (0x00049376) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x2_t4_g4_g3

0x07fb,	// (0x000493ec) list_medium_line_x2_t4_g4_g4_ParamLimits

0x07fb,	// (0x000493ec) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00057e76) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00057e76) list_medium_line_x2_t4_g4_g

0x5f2a,	// (0x0004eb1b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5f2a,	// (0x0004eb1b) list_medium_line_x2_t4_g4_t1

0x5f44,	// (0x0004eb35) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5f44,	// (0x0004eb35) list_medium_line_x2_t4_g4_t2

0x5f5a,	// (0x0004eb4b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5f5a,	// (0x0004eb4b) list_medium_line_x2_t4_g4_t3

0x0807,	// (0x000493f8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0807,	// (0x000493f8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00057e7f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00057e7f) list_medium_line_x2_t4_g4_t

0x0779,	// (0x0004936a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t2_g4_g1

0x07ef,	// (0x000493e0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x07ef,	// (0x000493e0) list_medium_line_x2_t2_g4_g2

0x0785,	// (0x00049376) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x2_t2_g4_g3

0x0791,	// (0x00049382) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0791,	// (0x00049382) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00057ee6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00057ee6) list_medium_line_x2_t2_g4_g

0x0819,	// (0x0004940a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0819,	// (0x0004940a) list_medium_line_x2_t2_g4_t1

0x07b2,	// (0x000493a3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00057eef) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00057eef) list_medium_line_x2_t2_g4_t

0x0779,	// (0x0004936a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t2_g3_g1

0x0785,	// (0x00049376) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x2_t2_g3_g2

0x0791,	// (0x00049382) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0791,	// (0x00049382) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00057e5c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00057e5c) list_medium_line_x2_t2_g3_g

0x082e,	// (0x0004941f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x082e,	// (0x0004941f) list_medium_line_x2_t2_g3_t1

0x07b2,	// (0x000493a3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00057ef4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00057ef4) list_medium_line_x2_t2_g3_t

0x7092,	// (0x0004fc83) main_sp_fs_list_pane_ParamLimits

0x7092,	// (0x0004fc83) main_sp_fs_list_pane

0x709e,	// (0x0004fc8f) sp_fs_scroll_pane_ParamLimits

0x709e,	// (0x0004fc8f) sp_fs_scroll_pane

0x70aa,	// (0x0004fc9b) list_medium_line_x2_t3_t1

0x70ba,	// (0x0004fcab) list_medium_line_x2_t3_t2

0x0871,	// (0x00049462) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00057f3f) list_medium_line_x2_t3_t

0x70c8,	// (0x0004fcb9) list_medium_line_x3_t4_t1

0x70d8,	// (0x0004fcc9) list_medium_line_x3_t4_t2

0x087f,	// (0x00049470) list_medium_line_x3_t4_t3

0x0871,	// (0x00049462) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00057f46) list_medium_line_x3_t4_t

0x70e6,	// (0x0004fcd7) list_medium_line_x4_t5_t1

0x70f6,	// (0x0004fce7) list_medium_line_x4_t5_t2

0x087f,	// (0x00049470) list_medium_line_x4_t5_t3

0x088d,	// (0x0004947e) list_medium_line_x4_t5_t4

0x0871,	// (0x00049462) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00057f4f) list_medium_line_x4_t5_t

0x0779,	// (0x0004936a) list_medium_line_t4_g4_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_t4_g4_g1

0x07fb,	// (0x000493ec) list_medium_line_t4_g4_g2_ParamLimits

0x07fb,	// (0x000493ec) list_medium_line_t4_g4_g2

0x089b,	// (0x0004948c) list_medium_line_t4_g4_g3_ParamLimits

0x089b,	// (0x0004948c) list_medium_line_t4_g4_g3

0x0791,	// (0x00049382) list_medium_line_t4_g4_g4_ParamLimits

0x0791,	// (0x00049382) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00057f5a) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00057f5a) list_medium_line_t4_g4_g

0x08a7,	// (0x00049498) list_medium_line_t4_g4_t1_ParamLimits

0x08a7,	// (0x00049498) list_medium_line_t4_g4_t1

0x08bc,	// (0x000494ad) list_medium_line_t4_g4_t2_ParamLimits

0x08bc,	// (0x000494ad) list_medium_line_t4_g4_t2

0x08d1,	// (0x000494c2) list_medium_line_t4_g4_t3_ParamLimits

0x08d1,	// (0x000494c2) list_medium_line_t4_g4_t3

0x07b2,	// (0x000493a3) list_medium_line_t4_g4_t4_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00057f63) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00057f63) list_medium_line_t4_g4_t

0x7215,	// (0x0004fe06) chi_dic_find_pane_g1

0x822f,	// (0x00050e20) main_tport_pane

0x1729,	// (0x0004a31a) list_medium_line_plain_t1

0x173f,	// (0x0004a330) list_medium_line_t2_g2_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_t2_g2_g1

0x174b,	// (0x0004a33c) list_medium_line_t2_g2_g2_ParamLimits

0x174b,	// (0x0004a33c) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0005861f) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0005861f) list_medium_line_t2_g2_g

0xac89,	// (0x0005387a) list_medium_line_t2_g2_t1_ParamLimits

0xac89,	// (0x0005387a) list_medium_line_t2_g2_t1

0xaca3,	// (0x00053894) list_medium_line_t2_g2_t2_ParamLimits

0xaca3,	// (0x00053894) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00058624) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00058624) list_medium_line_t2_g2_t

0x1a65,	// (0x0004a656) aid_sp_fs_list_icon_a_sm

0x1a6d,	// (0x0004a65e) aid_sp_fs_list_icon_d

0x1a75,	// (0x0004a666) aid_sp_fs_text_primary

0x1a7e,	// (0x0004a66f) aid_sp_fs_text_secondary

0x1a87,	// (0x0004a678) list_medium_line

0x1a87,	// (0x0004a678) list_medium_line_g2

0x1a87,	// (0x0004a678) list_medium_line_g3

0x1a87,	// (0x0004a678) list_medium_line_plain

0x1a87,	// (0x0004a678) list_medium_line_plain_t2

0x1a87,	// (0x0004a678) list_medium_line_plain_t3

0x1a87,	// (0x0004a678) list_medium_line_right_icon

0x1a87,	// (0x0004a678) list_medium_line_right_iconx2

0x1a87,	// (0x0004a678) list_medium_line_t2

0x1a87,	// (0x0004a678) list_medium_line_t2_g2

0x1a87,	// (0x0004a678) list_medium_line_t2_g3

0x1a87,	// (0x0004a678) list_medium_line_t2_right_icon

0x1a87,	// (0x0004a678) list_medium_line_t2_right_iconx2

0x1a87,	// (0x0004a678) list_medium_line_t3

0x1a87,	// (0x0004a678) list_medium_line_t3_g2

0x1a87,	// (0x0004a678) list_medium_line_t3_g3

0x1a87,	// (0x0004a678) list_medium_line_t3_right_iconx2

0x1a90,	// (0x0004a681) list_medium_line_t4_g4

0x1a99,	// (0x0004a68a) list_medium_line_x2

0x1a99,	// (0x0004a68a) list_medium_line_x2_t2_g2

0x1a99,	// (0x0004a68a) list_medium_line_x2_t2_g3

0x1a99,	// (0x0004a68a) list_medium_line_x2_t2_g4

0x1a99,	// (0x0004a68a) list_medium_line_x2_t3

0x1a99,	// (0x0004a68a) list_medium_line_x2_t3_g2

0x1a99,	// (0x0004a68a) list_medium_line_x2_t3_g3

0x1a99,	// (0x0004a68a) list_medium_line_x2_t3_g4

0x1a99,	// (0x0004a68a) list_medium_line_x2_t4_g2

0x1a99,	// (0x0004a68a) list_medium_line_x2_t4_g4

0x1aa2,	// (0x0004a693) list_medium_line_x3

0x1aa2,	// (0x0004a693) list_medium_line_x3_t4

0x1aa2,	// (0x0004a693) list_medium_line_x3_t4_g4

0x1a90,	// (0x0004a681) list_medium_line_x4_t4

0x1a90,	// (0x0004a681) list_medium_line_x4_t4_g7

0x1a90,	// (0x0004a681) list_medium_line_x4_t5

0x1aab,	// (0x0004a69c) list_single_fs_dyc_pane_ParamLimits

0x1aab,	// (0x0004a69c) list_single_fs_dyc_pane

0x0779,	// (0x0004936a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x4_t4_g7_g1

0x1fad,	// (0x0004ab9e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1fad,	// (0x0004ab9e) list_medium_line_x4_t4_g7_g2

0x1fb9,	// (0x0004abaa) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1fb9,	// (0x0004abaa) list_medium_line_x4_t4_g7_g3

0x1fc8,	// (0x0004abb9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1fc8,	// (0x0004abb9) list_medium_line_x4_t4_g7_g4

0x1fd4,	// (0x0004abc5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1fd4,	// (0x0004abc5) list_medium_line_x4_t4_g7_g5

0x1fe3,	// (0x0004abd4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1fe3,	// (0x0004abd4) list_medium_line_x4_t4_g7_g6

0x1ff2,	// (0x0004abe3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1ff2,	// (0x0004abe3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x000587e9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x000587e9) list_medium_line_x4_t4_g7_g

0x1ffe,	// (0x0004abef) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1ffe,	// (0x0004abef) list_medium_line_x4_t4_g7_t1

0x2013,	// (0x0004ac04) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2013,	// (0x0004ac04) list_medium_line_x4_t4_g7_t2

0x2028,	// (0x0004ac19) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2028,	// (0x0004ac19) list_medium_line_x4_t4_g7_t3

0x203d,	// (0x0004ac2e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x203d,	// (0x0004ac2e) list_medium_line_x4_t4_g7_t4

0x204f,	// (0x0004ac40) list_medium_line_x4_t4_g7_t5_ParamLimits

0x204f,	// (0x0004ac40) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x000587f8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x000587f8) list_medium_line_x4_t4_g7_t

0x2061,	// (0x0004ac52) list_single_dyc_row_pane_ParamLimits

0x2061,	// (0x0004ac52) list_single_dyc_row_pane

0xbf9e,	// (0x00054b8f) call5_gesture_pane_ParamLimits

0xbf9e,	// (0x00054b8f) call5_gesture_pane

0xbfd2,	// (0x00054bc3) call5_windows_pane_ParamLimits

0xbfd2,	// (0x00054bc3) call5_windows_pane

0xc044,	// (0x00054c35) call5_swipe_1_pane_cp_ParamLimits

0xc044,	// (0x00054c35) call5_swipe_1_pane_cp

0xc050,	// (0x00054c41) call5_swipe_2_pane_cp_ParamLimits

0xc050,	// (0x00054c41) call5_swipe_2_pane_cp

0xd86b,	// (0x0005645c) call5_image_pane_cp

0xc05c,	// (0x00054c4d) popup_call5_audio_first_window_cp_ParamLimits

0xc05c,	// (0x00054c4d) popup_call5_audio_first_window_cp

0x2624,	// (0x0004b215) call5_swipe_1_pane_g1_cp_ParamLimits

0x2624,	// (0x0004b215) call5_swipe_1_pane_g1_cp

0x2664,	// (0x0004b255) call5_swipe_1_pane_g2_cp

0x263d,	// (0x0004b22e) call5_swipe_1_pane_t1_cp_ParamLimits

0x263d,	// (0x0004b22e) call5_swipe_1_pane_t1_cp

0x2624,	// (0x0004b215) call5_swipe_2_pane_g1_cp_ParamLimits

0x2624,	// (0x0004b215) call5_swipe_2_pane_g1_cp

0x266c,	// (0x0004b25d) call5_swipe_2_pane_g2_cp

0x2674,	// (0x0004b265) call5_swipe_2_pane_t1_cp_ParamLimits

0x2674,	// (0x0004b265) call5_swipe_2_pane_t1_cp

0xec65,	// (0x00057856) main_sp_fs_email_pane

0x2689,	// (0x0004b27a) main_sp_fs_listscroll_pane_te

0x2692,	// (0x0004b283) popup_sp_fs_action_menu_pane_ParamLimits

0x2692,	// (0x0004b283) popup_sp_fs_action_menu_pane

0xf0ac,	// (0x00057c9d) bg_sp_fs_ctrlbar_pane_g1

0x26d6,	// (0x0004b2c7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x26df,	// (0x0004b2d0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x26e8,	// (0x0004b2d9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xf0ac,	// (0x00057c9d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x000588e1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xee91,	// (0x00057a82) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xee91,	// (0x00057a82) bg_sp_fs_ctrlbar_ddmenu_pane

0x26f1,	// (0x0004b2e2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x26f1,	// (0x0004b2e2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x26fd,	// (0x0004b2ee) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x26fd,	// (0x0004b2ee) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x000588ea) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x000588ea) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2709,	// (0x0004b2fa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2709,	// (0x0004b2fa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2723,	// (0x0004b314) list_medium_line_t2_right_icon_g1

0xc06a,	// (0x00054c5b) list_medium_line_t2_right_icon_t1

0xc07a,	// (0x00054c6b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x000588ef) list_medium_line_t2_right_icon_t

0xec57,	// (0x00057848) bg_sp_fs_ctrlbar_pane_ParamLimits

0xec57,	// (0x00057848) bg_sp_fs_ctrlbar_pane

0xc0df,	// (0x00054cd0) main_sp_fs_ctrlbar_button_pane_cp01

0xc0e7,	// (0x00054cd8) main_sp_fs_ctrlbar_ddmenu_pane

0x2763,	// (0x0004b354) main_sp_fs_ctrlbar_pane_g1

0x276f,	// (0x0004b360) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x000588f4) main_sp_fs_ctrlbar_pane_g

0x277b,	// (0x0004b36c) main_sp_fs_ctrlbar_pane_t1

0xc0f1,	// (0x00054ce2) main_sp_fs_ctrlbar_pane

0xc10d,	// (0x00054cfe) main_sp_fs_listscroll_pane_te_cp01

0xc11e,	// (0x00054d0f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc11e,	// (0x00054d0f) popup_sp_fs_action_menu_pane_cp01

0xec65,	// (0x00057856) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xec65,	// (0x00057856) bg_sp_fs_highlight_list_pane_cp01

0x2790,	// (0x0004b381) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2790,	// (0x0004b381) sp_fs_action_menu_list_gene_pane_g1

0x279f,	// (0x0004b390) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x279f,	// (0x0004b390) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x000588f9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x000588f9) sp_fs_action_menu_list_gene_pane_g

0x27ac,	// (0x0004b39d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x27ac,	// (0x0004b39d) sp_fs_action_menu_list_gene_pane_t1

0x27c4,	// (0x0004b3b5) sp_fs_action_menu_list_gene_pane_ParamLimits

0x27c4,	// (0x0004b3b5) sp_fs_action_menu_list_gene_pane

0x27e3,	// (0x0004b3d4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x27e3,	// (0x0004b3d4) popup_sp_fs_action_menu_bg_pane

0x27f1,	// (0x0004b3e2) sp_fs_action_menu_list_pane_ParamLimits

0x27f1,	// (0x0004b3e2) sp_fs_action_menu_list_pane

0x2811,	// (0x0004b402) sp_fs_scroll_pane_cp01_ParamLimits

0x2811,	// (0x0004b402) sp_fs_scroll_pane_cp01

0xc136,	// (0x00054d27) list_medium_line_plain_t2_t1

0xc146,	// (0x00054d37) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x000588fe) list_medium_line_plain_t2_t

0xc154,	// (0x00054d45) list_medium_line_plain_t3_t1

0xc164,	// (0x00054d55) list_medium_line_plain_t3_t2

0xc172,	// (0x00054d63) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00058903) list_medium_line_plain_t3_t

0x0779,	// (0x0004936a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t2_g2_g1

0x0791,	// (0x00049382) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0791,	// (0x00049382) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00057e6a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00057e6a) list_medium_line_x2_t2_g2_g

0x08a7,	// (0x00049498) list_medium_line_x2_t2_g2_t1_ParamLimits

0x08a7,	// (0x00049498) list_medium_line_x2_t2_g2_t1

0x07b2,	// (0x000493a3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0005890a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0005890a) list_medium_line_x2_t2_g2_t

0x0779,	// (0x0004936a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t4_g2_g1

0x2837,	// (0x0004b428) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2837,	// (0x0004b428) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0005890f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0005890f) list_medium_line_x2_t4_g2_g

0xc180,	// (0x00054d71) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc180,	// (0x00054d71) list_medium_line_x2_t4_g2_t1

0xc19a,	// (0x00054d8b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc19a,	// (0x00054d8b) list_medium_line_x2_t4_g2_t2

0xc1af,	// (0x00054da0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc1af,	// (0x00054da0) list_medium_line_x2_t4_g2_t3

0x07b2,	// (0x000493a3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x00058914) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x00058914) list_medium_line_x2_t4_g2_t

0x2849,	// (0x0004b43a) list_medium_line_t3_right_iconx2_g1

0x2723,	// (0x0004b314) list_medium_line_t3_right_iconx2_g2

0xc1c4,	// (0x00054db5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0005891d) list_medium_line_t3_right_iconx2_g

0xc1cc,	// (0x00054dbd) list_medium_line_t3_right_iconx2_t1

0xc1dc,	// (0x00054dcd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x00058924) list_medium_line_t3_right_iconx2_t

0x0779,	// (0x0004936a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x3_t4_g4_g1

0x0785,	// (0x00049376) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x3_t4_g4_g2

0x07fb,	// (0x000493ec) list_medium_line_x3_t4_g4_g3_ParamLimits

0x07fb,	// (0x000493ec) list_medium_line_x3_t4_g4_g3

0x2851,	// (0x0004b442) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2851,	// (0x0004b442) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00058929) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00058929) list_medium_line_x3_t4_g4_g

0xc1ea,	// (0x00054ddb) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc1ea,	// (0x00054ddb) list_medium_line_x3_t4_g4_t1

0xc201,	// (0x00054df2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc201,	// (0x00054df2) list_medium_line_x3_t4_g4_t2

0x08bc,	// (0x000494ad) list_medium_line_x3_t4_g4_t3_ParamLimits

0x08bc,	// (0x000494ad) list_medium_line_x3_t4_g4_t3

0x285d,	// (0x0004b44e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x285d,	// (0x0004b44e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00058932) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00058932) list_medium_line_x3_t4_g4_t

0xc216,	// (0x00054e07) list_single_dyc_row_text_pane_t1_ParamLimits

0xc216,	// (0x00054e07) list_single_dyc_row_text_pane_t1

0xc24d,	// (0x00054e3e) list_single_dyc_row_text_pane_t2_ParamLimits

0xc24d,	// (0x00054e3e) list_single_dyc_row_text_pane_t2

0x287a,	// (0x0004b46b) list_single_dyc_row_text_pane_t3_ParamLimits

0x287a,	// (0x0004b46b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0005893b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0005893b) list_single_dyc_row_text_pane_t

0x288c,	// (0x0004b47d) list_single_dyc_row_pane_g1_ParamLimits

0x288c,	// (0x0004b47d) list_single_dyc_row_pane_g1

0x2898,	// (0x0004b489) list_single_dyc_row_pane_g2_ParamLimits

0x2898,	// (0x0004b489) list_single_dyc_row_pane_g2

0x28a4,	// (0x0004b495) list_single_dyc_row_pane_g3_ParamLimits

0x28a4,	// (0x0004b495) list_single_dyc_row_pane_g3

0x28b0,	// (0x0004b4a1) list_single_dyc_row_pane_g4_ParamLimits

0x28b0,	// (0x0004b4a1) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00058942) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00058942) list_single_dyc_row_pane_g

0x28bc,	// (0x0004b4ad) list_single_dyc_row_text_pane_ParamLimits

0x28bc,	// (0x0004b4ad) list_single_dyc_row_text_pane

0x4653,	// (0x0004d244) bg_sp_fs_scroll_pane

0x28db,	// (0x0004b4cc) thumb_sp_fs_scroll_pane

0x173f,	// (0x0004a330) list_medium_line_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_g1

0x28e4,	// (0x0004b4d5) list_medium_line_t1_ParamLimits

0x28e4,	// (0x0004b4d5) list_medium_line_t1

0x0779,	// (0x0004936a) list_medium_line_x2_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_g1

0x0785,	// (0x00049376) list_medium_line_x2_g2_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0005894b) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0005894b) list_medium_line_x2_g

0x28f9,	// (0x0004b4ea) list_medium_line_x2_t1_ParamLimits

0x28f9,	// (0x0004b4ea) list_medium_line_x2_t1

0x0779,	// (0x0004936a) list_medium_line_x3_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x3_g1

0x0785,	// (0x00049376) list_medium_line_x3_g2_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0005894b) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0005894b) list_medium_line_x3_g

0x28f9,	// (0x0004b4ea) list_medium_line_x3_t1_ParamLimits

0x28f9,	// (0x0004b4ea) list_medium_line_x3_t1

0x290f,	// (0x0004b500) thumb_sp_fs_scroll_pane_g1

0x2918,	// (0x0004b509) thumb_sp_fs_scroll_pane_g2

0x2921,	// (0x0004b512) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00058950) thumb_sp_fs_scroll_pane_g

0x290f,	// (0x0004b500) bg_sp_fs_scroll_pane_g1

0x2918,	// (0x0004b509) bg_sp_fs_scroll_pane_g2

0x2921,	// (0x0004b512) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00058950) bg_sp_fs_scroll_pane_g

0x0779,	// (0x0004936a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0779,	// (0x0004936a) list_medium_line_x2_t3_g4_g1

0x07ef,	// (0x000493e0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x07ef,	// (0x000493e0) list_medium_line_x2_t3_g4_g2

0x0785,	// (0x00049376) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0785,	// (0x00049376) list_medium_line_x2_t3_g4_g3

0x0791,	// (0x00049382) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0791,	// (0x00049382) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00057ee6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00057ee6) list_medium_line_x2_t3_g4_g

0xc2a7,	// (0x00054e98) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc2a7,	// (0x00054e98) list_medium_line_x2_t3_g4_t1

0xc2bd,	// (0x00054eae) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc2bd,	// (0x00054eae) list_medium_line_x2_t3_g4_t2

0x07b2,	// (0x000493a3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x07b2,	// (0x000493a3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x00058957) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x00058957) list_medium_line_x2_t3_g4_t

0x173f,	// (0x0004a330) list_medium_line_g2_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_g2_g1

0x174b,	// (0x0004a33c) list_medium_line_g2_g2_ParamLimits

0x174b,	// (0x0004a33c) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0005861f) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0005861f) list_medium_line_g2_g

0x292a,	// (0x0004b51b) list_medium_line_g2_t1_ParamLimits

0x292a,	// (0x0004b51b) list_medium_line_g2_t1

0x173f,	// (0x0004a330) list_medium_line_t3_g2_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_t3_g2_g1

0x174b,	// (0x0004a33c) list_medium_line_t3_g2_g2_ParamLimits

0x174b,	// (0x0004a33c) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0005861f) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0005861f) list_medium_line_t3_g2_g

0xc2d7,	// (0x00054ec8) list_medium_line_t3_g2_t1_ParamLimits

0xc2d7,	// (0x00054ec8) list_medium_line_t3_g2_t1

0xc2ee,	// (0x00054edf) list_medium_line_t3_g2_t2_ParamLimits

0xc2ee,	// (0x00054edf) list_medium_line_t3_g2_t2

0xc303,	// (0x00054ef4) list_medium_line_t3_g2_t3_ParamLimits

0xc303,	// (0x00054ef4) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0005895e) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0005895e) list_medium_line_t3_g2_t

0x2723,	// (0x0004b314) list_medium_line_right_icon_g1

0x293f,	// (0x0004b530) list_medium_line_right_icon_t1

0x173f,	// (0x0004a330) list_medium_line_t2_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_t2_g1

0xc318,	// (0x00054f09) list_medium_line_t2_t1_ParamLimits

0xc318,	// (0x00054f09) list_medium_line_t2_t1

0xc332,	// (0x00054f23) list_medium_line_t2_t2_ParamLimits

0xc332,	// (0x00054f23) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x00058965) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x00058965) list_medium_line_t2_t

0x173f,	// (0x0004a330) list_medium_line_t3_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_t3_g1

0xc347,	// (0x00054f38) list_medium_line_t3_t1_ParamLimits

0xc347,	// (0x00054f38) list_medium_line_t3_t1

0xc35e,	// (0x00054f4f) list_medium_line_t3_t2_ParamLimits

0xc35e,	// (0x00054f4f) list_medium_line_t3_t2

0xc373,	// (0x00054f64) list_medium_line_t3_t3_ParamLimits

0xc373,	// (0x00054f64) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0005896a) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0005896a) list_medium_line_t3_t

0x173f,	// (0x0004a330) list_medium_line_g3_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_g3_g1

0x294d,	// (0x0004b53e) list_medium_line_g3_g2_ParamLimits

0x294d,	// (0x0004b53e) list_medium_line_g3_g2

0x174b,	// (0x0004a33c) list_medium_line_g3_g3_ParamLimits

0x174b,	// (0x0004a33c) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x00058971) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x00058971) list_medium_line_g3_g

0x2959,	// (0x0004b54a) list_medium_line_g3_t1_ParamLimits

0x2959,	// (0x0004b54a) list_medium_line_g3_t1

0x173f,	// (0x0004a330) list_medium_line_t2_g3_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_t2_g3_g1

0x294d,	// (0x0004b53e) list_medium_line_t2_g3_g2_ParamLimits

0x294d,	// (0x0004b53e) list_medium_line_t2_g3_g2

0x174b,	// (0x0004a33c) list_medium_line_t2_g3_g3_ParamLimits

0x174b,	// (0x0004a33c) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x00058971) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x00058971) list_medium_line_t2_g3_g

0xc385,	// (0x00054f76) list_medium_line_t2_g3_t1_ParamLimits

0xc385,	// (0x00054f76) list_medium_line_t2_g3_t1

0xc39f,	// (0x00054f90) list_medium_line_t2_g3_t2_ParamLimits

0xc39f,	// (0x00054f90) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x00058978) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x00058978) list_medium_line_t2_g3_t

0x173f,	// (0x0004a330) list_medium_line_t3_g3_g1_ParamLimits

0x173f,	// (0x0004a330) list_medium_line_t3_g3_g1

0x294d,	// (0x0004b53e) list_medium_line_t3_g3_g2_ParamLimits

0x294d,	// (0x0004b53e) list_medium_line_t3_g3_g2

0x174b,	// (0x0004a33c) list_medium_line_t3_g3_g3_ParamLimits

0x174b,	// (0x0004a33c) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x00058971) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x00058971) list_medium_line_t3_g3_g

0xc3b4,	// (0x00054fa5) list_medium_line_t3_g3_t1_ParamLimits

0xc3b4,	// (0x00054fa5) list_medium_line_t3_g3_t1

0xc3c8,	// (0x00054fb9) list_medium_line_t3_g3_t2_ParamLimits

0xc3c8,	// (0x00054fb9) list_medium_line_t3_g3_t2

0xc3da,	// (0x00054fcb) list_medium_line_t3_g3_t3_ParamLimits

0xc3da,	// (0x00054fcb) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0005897d) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0005897d) list_medium_line_t3_g3_t

0x2849,	// (0x0004b43a) list_medium_line_right_iconx2_g1

0x2723,	// (0x0004b314) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x00058984) list_medium_line_right_iconx2_g

0x296e,	// (0x0004b55f) list_medium_line_right_iconx2_t1

0x2849,	// (0x0004b43a) list_medium_line_t2_right_iconx2_g1

0x2723,	// (0x0004b314) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x00058984) list_medium_line_t2_right_iconx2_g

0xc3ec,	// (0x00054fdd) list_medium_line_t2_right_iconx2_t1

0xc3fc,	// (0x00054fed) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00058989) list_medium_line_t2_right_iconx2_t

0x297c,	// (0x0004b56d) list_medium_line_x4_t4_t1

0xc40a,	// (0x00054ffb) list_medium_line_x4_t4_t2

0xc41a,	// (0x0005500b) list_medium_line_x4_t4_t3

0xc42a,	// (0x0005501b) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0005898e) list_medium_line_x4_t4_t

0xc463,	// (0x00055054) tport_appsw_pane_ParamLimits

0xc463,	// (0x00055054) tport_appsw_pane

0xc46f,	// (0x00055060) tport_contact_pane_ParamLimits

0xc46f,	// (0x00055060) tport_contact_pane

0xc47f,	// (0x00055070) tport_listscroll_pane_ParamLimits

0xc47f,	// (0x00055070) tport_listscroll_pane

0xc48f,	// (0x00055080) cell_tport_appsw_pane_ParamLimits

0xc48f,	// (0x00055080) cell_tport_appsw_pane

0x0d41,	// (0x00049932) tport_appsw_pane_g1_ParamLimits

0x0d41,	// (0x00049932) tport_appsw_pane_g1

0x298a,	// (0x0004b57b) tport_contact_pane_g1

0x2152,	// (0x0004ad43) tport_contact_pane_t1

0x2993,	// (0x0004b584) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00058997) tport_contact_pane_t

0x29a1,	// (0x0004b592) list_tport_pane

0x29aa,	// (0x0004b59b) scroll_pane_cp_030

0x29bb,	// (0x0004b5ac) cell_tport_appsw_pane_g1

0x29cb,	// (0x0004b5bc) cell_tport_appsw_pane_t1

0x4653,	// (0x0004d244) grid_highlight_pane_cp019

0xc4ba,	// (0x000550ab) list_tport_double_graphic_pane_ParamLimits

0xc4ba,	// (0x000550ab) list_tport_double_graphic_pane

0xec65,	// (0x00057856) list_highlight_pane_cp023_ParamLimits

0xec65,	// (0x00057856) list_highlight_pane_cp023

0xc4cc,	// (0x000550bd) list_tport_double_graphic_pane_g1_ParamLimits

0xc4cc,	// (0x000550bd) list_tport_double_graphic_pane_g1

0xc4d9,	// (0x000550ca) list_tport_double_graphic_pane_t1_ParamLimits

0xc4d9,	// (0x000550ca) list_tport_double_graphic_pane_t1

0xc4ee,	// (0x000550df) list_tport_double_graphic_pane_t2_ParamLimits

0xc4ee,	// (0x000550df) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x000589a3) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x000589a3) list_tport_double_graphic_pane_t

0x4653,	// (0x0004d244) main_cale_note_pane

0xa43f,	// (0x00053030) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa43f,	// (0x00053030) cell_vitu2_function_top_wide_pane_cp01

0xbc78,	// (0x00054869) wait_bar_pane_cp05_ParamLimits

0x4653,	// (0x0004d244) listscroll_cmail_pane

0x29e1,	// (0x0004b5d2) list_cmail_pane

0xc50a,	// (0x000550fb) list_cmail_body_pane

0xc527,	// (0x00055118) list_single_cmail_header_caption_pane

0xc54c,	// (0x0005513d) list_single_cmail_header_detail_pane_ParamLimits

0xc54c,	// (0x0005513d) list_single_cmail_header_detail_pane

0xc57f,	// (0x00055170) list_single_cmail_header_caption_pane_t1

0xc58d,	// (0x0005517e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc58d,	// (0x0005517e) list_single_cmail_header_detail_pane_g1

0x2a1b,	// (0x0004b60c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2a1b,	// (0x0004b60c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x000589a8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x000589a8) list_single_cmail_header_detail_pane_g

0x2a34,	// (0x0004b625) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2a34,	// (0x0004b625) list_single_cmail_header_detail_pane_t1

0x2a6a,	// (0x0004b65b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2a6a,	// (0x0004b65b) list_single_cmail_header_editor_pane_bg

0x22e1,	// (0x0004aed2) list_cmail_body_pane_g1

0x2a7c,	// (0x0004b66d) list_cmail_body_pane_t1

0x14d7,	// (0x0004a0c8) list_single_cmail_header_editor_pane_bg_g1

0x65d2,	// (0x0004f1c3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x14e7,	// (0x0004a0d8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x14df,	// (0x0004a0d0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1737,	// (0x0004a328) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1507,	// (0x0004a0f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x14f7,	// (0x0004a0e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x14ff,	// (0x0004a0f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x65b2,	// (0x0004f1a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc5c7,	// (0x000551b8) calenote_gesture_pane_ParamLimits

0xc5c7,	// (0x000551b8) calenote_gesture_pane

0xc5e1,	// (0x000551d2) calenote_window_pane_ParamLimits

0xc5e1,	// (0x000551d2) calenote_window_pane

0x2a8a,	// (0x0004b67b) popup_note_window_cp01

0xc5f9,	// (0x000551ea) calenote_swipe_1_pane_ParamLimits

0xc5f9,	// (0x000551ea) calenote_swipe_1_pane

0xc050,	// (0x00054c41) calenote_swipe_2_pane_ParamLimits

0xc050,	// (0x00054c41) calenote_swipe_2_pane

0x2624,	// (0x0004b215) calenote_swipe_1_pane_g1_ParamLimits

0x2624,	// (0x0004b215) calenote_swipe_1_pane_g1

0x2631,	// (0x0004b222) calenote_swipe_1_pane_g2_ParamLimits

0x2631,	// (0x0004b222) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x000588d7) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x000588d7) calenote_swipe_1_pane_g

0x2a9c,	// (0x0004b68d) calenote_swipe_1_pane_t1_ParamLimits

0x2a9c,	// (0x0004b68d) calenote_swipe_1_pane_t1

0x2624,	// (0x0004b215) calenote_swipe_2_pane_g1_ParamLimits

0x2624,	// (0x0004b215) calenote_swipe_2_pane_g1

0x2abb,	// (0x0004b6ac) calenote_swipe_2_pane_g2_ParamLimits

0x2abb,	// (0x0004b6ac) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x000589b4) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x000589b4) calenote_swipe_2_pane_g

0x2ac7,	// (0x0004b6b8) calenote_swipe_2_pane_t1_ParamLimits

0x2ac7,	// (0x0004b6b8) calenote_swipe_2_pane_t1

0x4653,	// (0x0004d244) main_mup_navstr_pane

0x91bf,	// (0x00051db0) main_mup3_pane_t7_ParamLimits

0x91bf,	// (0x00051db0) main_mup3_pane_t7

0x9ba4,	// (0x00052795) main_mp4_pane_g6_ParamLimits

0x9ba4,	// (0x00052795) main_mp4_pane_g6

0x9f24,	// (0x00052b15) main_image3_pane_t4_ParamLimits

0x9f24,	// (0x00052b15) main_image3_pane_t4

0xc60c,	// (0x000551fd) popup_navstr_preview_pane_ParamLimits

0xc60c,	// (0x000551fd) popup_navstr_preview_pane

0xc618,	// (0x00055209) scroll_navstr_pane_ParamLimits

0xc618,	// (0x00055209) scroll_navstr_pane

0x4653,	// (0x0004d244) bg_popup_preview_window_pane_cp04

0x2aee,	// (0x0004b6df) popup_navstr_preview_pane_t1

0xc624,	// (0x00055215) scroll_navstr_pane_g1_ParamLimits

0xc624,	// (0x00055215) scroll_navstr_pane_g1

0xc631,	// (0x00055222) scroll_navstr_pane_t1_ParamLimits

0xc631,	// (0x00055222) scroll_navstr_pane_t1

0x2a93,	// (0x0004b684) bg_button_pane_cp014

0x2a93,	// (0x0004b684) bg_button_pane_cp030

0xbf44,	// (0x00054b35) list_double_fisheye_pane_g4_ParamLimits

0xbf44,	// (0x00054b35) list_double_fisheye_pane_g4

0xbf50,	// (0x00054b41) list_double_fisheye_pane_g5_ParamLimits

0xbf50,	// (0x00054b41) list_double_fisheye_pane_g5

0x29e9,	// (0x0004b5da) sp_fs_scroll_pane_cp03

0x2763,	// (0x0004b354) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x276f,	// (0x0004b360) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x000588f4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x277b,	// (0x0004b36c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc500,	// (0x000550f1) sp_fs_scroll_pane_cp02

0x5723,	// (0x0004e314) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x5723,	// (0x0004e314) popup_sp_fs_calendar_preview_list_single_pane

0x4653,	// (0x0004d244) main_cam6_pano_pane

0xec65,	// (0x00057856) main_mup3_pane_ParamLimits

0x4653,	// (0x0004d244) main_phacti_pane

0xbb4d,	// (0x0005473e) bg_button_pane_cp11

0xbb65,	// (0x00054756) main_mobtv_info_pane_g2_ParamLimits

0xbb65,	// (0x00054756) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00058854) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00058854) main_mobtv_info_pane_g

0xbd17,	// (0x00054908) sc_clock_pane_t5_ParamLimits

0xbd17,	// (0x00054908) sc_clock_pane_t5

0xbdb5,	// (0x000549a6) main_radioblah_pane_g1_ParamLimits

0x2567,	// (0x0004b158) main_radioblah_pane_t3_ParamLimits

0x2567,	// (0x0004b158) main_radioblah_pane_t3

0x257f,	// (0x0004b170) main_radioblah_pane_t4_ParamLimits

0x257f,	// (0x0004b170) main_radioblah_pane_t4

0xbdd3,	// (0x000549c4) main_radioblah_text_pane_ParamLimits

0xbdd3,	// (0x000549c4) main_radioblah_text_pane

0xbde0,	// (0x000549d1) main_radioblah_info_pane_g1_ParamLimits

0xbe75,	// (0x00054a66) main_radioblah_info_pane_t4_ParamLimits

0xbe75,	// (0x00054a66) main_radioblah_info_pane_t4

0xec65,	// (0x00057856) main_sp_fs_calendar_pane

0xc643,	// (0x00055234) main_phacti_pane_g1

0xc64b,	// (0x0005523c) phacti_note_pane_ParamLimits

0xc64b,	// (0x0005523c) phacti_note_pane

0x2b05,	// (0x0004b6f6) phacti_term_pane_ParamLimits

0x2b05,	// (0x0004b6f6) phacti_term_pane

0x2b1a,	// (0x0004b70b) phacti_note_pane_t1_ParamLimits

0x2b1a,	// (0x0004b70b) phacti_note_pane_t1

0x2b31,	// (0x0004b722) phacti_term_pane_g1

0x2b39,	// (0x0004b72a) phacti_term_pane_t1_ParamLimits

0x2b39,	// (0x0004b72a) phacti_term_pane_t1

0x2b63,	// (0x0004b754) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5f10,	// (0x0004eb01) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x000589be) popup_sp_fs_calendar_preview_list_single_pane_g

0x2b6b,	// (0x0004b75c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2b6b,	// (0x0004b75c) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2b80,	// (0x0004b771) aid_popup_sp_fs_bg_corner_pane

0xf0ac,	// (0x00057c9d) popup_sp_fs_calendar_preview_bg_pane_g1

0x4653,	// (0x0004d244) popup_sp_fs_calendar_preview_bg_pane

0x2b88,	// (0x0004b779) popup_sp_fs_calendar_preview_list_pane

0xec65,	// (0x00057856) bg_main_sp_fs_cale_pane_ParamLimits

0xec65,	// (0x00057856) bg_main_sp_fs_cale_pane

0x2b90,	// (0x0004b781) listscroll_cale_mrui_pane_ParamLimits

0x2b90,	// (0x0004b781) listscroll_cale_mrui_pane

0x2ba4,	// (0x0004b795) listscroll_sp_fs_schedule_track_pane

0x2bad,	// (0x0004b79e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2bad,	// (0x0004b79e) main_sp_fs_ctrlbar_pane_cp01

0x2bbe,	// (0x0004b7af) main_sp_fs_ribbon_pane

0x2bc6,	// (0x0004b7b7) popup_sp_fs_cale_preview_window

0x29f9,	// (0x0004b5ea) list_single_sp_fs_schedule_track_pane_ParamLimits

0x29f9,	// (0x0004b5ea) list_single_sp_fs_schedule_track_pane

0x145b,	// (0x0004a04c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x145b,	// (0x0004a04c) bg_sp_fs_highlight_list_pane_cp03

0xc68a,	// (0x0005527b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc68a,	// (0x0005527b) list_single_sp_fs_schedule_track_pane_g1

0xc696,	// (0x00055287) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc696,	// (0x00055287) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x000589c3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x000589c3) list_single_sp_fs_schedule_track_pane_g

0xc6a2,	// (0x00055293) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc6a2,	// (0x00055293) list_single_sp_fs_schedule_track_pane_t1

0xc6ba,	// (0x000552ab) sp_fs_schedule_track_pane_ParamLimits

0xc6ba,	// (0x000552ab) sp_fs_schedule_track_pane

0x2bd8,	// (0x0004b7c9) sp_fs_schedule_track_pane_g1

0x2be0,	// (0x0004b7d1) sp_fs_schedule_track_pane_g2

0x2be8,	// (0x0004b7d9) sp_fs_schedule_track_pane_g3

0x2bf0,	// (0x0004b7e1) sp_fs_schedule_track_pane_g4

0x2bf8,	// (0x0004b7e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x000589c8) sp_fs_schedule_track_pane_g

0x14d7,	// (0x0004a0c8) bg_sp_fs_schedule_viewer_highlight_g1

0x65d2,	// (0x0004f1c3) bg_sp_fs_schedule_viewer_highlight_g2

0x14df,	// (0x0004a0d0) bg_sp_fs_schedule_viewer_highlight_g3

0x14e7,	// (0x0004a0d8) bg_sp_fs_schedule_viewer_highlight_g4

0x1737,	// (0x0004a328) bg_sp_fs_schedule_viewer_highlight_g5

0x14f7,	// (0x0004a0e8) bg_sp_fs_schedule_viewer_highlight_g6

0x14ff,	// (0x0004a0f0) bg_sp_fs_schedule_viewer_highlight_g7

0x1507,	// (0x0004a0f8) bg_sp_fs_schedule_viewer_highlight_g8

0x65b2,	// (0x0004f1a3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x000589d3) bg_sp_fs_schedule_viewer_highlight_g

0x4653,	// (0x0004d244) bg_main_sp_fs_ribbon_pane

0xc6ca,	// (0x000552bb) main_sp_fs_ribbon_pane_g1

0x2c00,	// (0x0004b7f1) main_sp_fs_ribbon_pane_t1

0xc6d3,	// (0x000552c4) main_sp_fs_ribbon_pane_t2

0x2c0f,	// (0x0004b800) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x000589e6) main_sp_fs_ribbon_pane_t

0x2c1e,	// (0x0004b80f) main_sp_fs_ribbon_scheduler_pane

0x2c26,	// (0x0004b817) bg_main_sp_fs_ribbon_pane_g1

0x2c2f,	// (0x0004b820) bg_main_sp_fs_ribbon_pane_g2

0x2c38,	// (0x0004b829) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x000589ed) bg_main_sp_fs_ribbon_pane_g

0x2c40,	// (0x0004b831) main_sp_fs_ribbon_scheduler_pane_g1

0x2c49,	// (0x0004b83a) main_sp_fs_ribbon_scheduler_pane_g2

0x2c52,	// (0x0004b843) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x000589f4) main_sp_fs_ribbon_scheduler_pane_g

0x2c5b,	// (0x0004b84c) list_cale_mrui_pane

0xc6e2,	// (0x000552d3) sp_fs_scroll_pane_cp07_ParamLimits

0xc6e2,	// (0x000552d3) sp_fs_scroll_pane_cp07

0xc6f8,	// (0x000552e9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc6f8,	// (0x000552e9) bg_sp_fs_schedule_viewer_highlight

0x2c64,	// (0x0004b855) list_single_sp_fs_schedule_track_pane_cp01

0x2c6c,	// (0x0004b85d) list_sp_fs_schedule_track_pane

0x2c74,	// (0x0004b865) sp_fs_scroll_pane_cp06_ParamLimits

0x2c74,	// (0x0004b865) sp_fs_scroll_pane_cp06

0xf0ac,	// (0x00057c9d) bgmain_sp_fs_calendar_pane_g1

0xc705,	// (0x000552f6) list_single_cale_mrui_pane_ParamLimits

0xc705,	// (0x000552f6) list_single_cale_mrui_pane

0x2c86,	// (0x0004b877) list_single_cale_mrui_row_pane_ParamLimits

0x2c86,	// (0x0004b877) list_single_cale_mrui_row_pane

0x2c93,	// (0x0004b884) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2c93,	// (0x0004b884) list_single_cale_mrui_row_pane_g1

0x2ccb,	// (0x0004b8bc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2ccb,	// (0x0004b8bc) list_single_cale_mrui_row_pane_t1

0xc72d,	// (0x0005531e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc72d,	// (0x0005531e) list_single_cale_mrui_row_pane_t2

0x2cdd,	// (0x0004b8ce) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2cdd,	// (0x0004b8ce) list_single_cale_mrui_row_pane_t3

0x2d0c,	// (0x0004b8fd) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2d0c,	// (0x0004b8fd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x00058a00) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x00058a00) list_single_cale_mrui_row_pane_t

0xc793,	// (0x00055384) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc793,	// (0x00055384) list_single_cmail_header_editor_pane_bg_cp01

0xc7b3,	// (0x000553a4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc7b3,	// (0x000553a4) list_single_cmail_header_editor_pane_bg_cp02

0xc7cf,	// (0x000553c0) main_radioblah_text_pane_t1_ParamLimits

0xc7cf,	// (0x000553c0) main_radioblah_text_pane_t1

0x2d3b,	// (0x0004b92c) cam6_indi_pane_cp01

0x2d43,	// (0x0004b934) cam6_mode_pane_cp01

0x2d4b,	// (0x0004b93c) cam6_pano_pane

0x2d54,	// (0x0004b945) cam6_zoom_pane_cp01

0x2d5c,	// (0x0004b94d) cam6_pano_image_pane

0x2d67,	// (0x0004b958) cam6_pano_pane_g1

0x22e1,	// (0x0004aed2) cam6_pano_pane_g2

0x2d70,	// (0x0004b961) cam6_pano_pane_g3

0x2d79,	// (0x0004b96a) cam6_pano_pane_g4

0x100c,	// (0x00049bfd) cam6_pano_pane_g5

0x2d82,	// (0x0004b973) cam6_pano_pane_g6

0x2d8c,	// (0x0004b97d) cam6_pano_pane_g7

0x2d94,	// (0x0004b985) cam6_pano_pane_g8

0x2d9d,	// (0x0004b98e) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00058a09) cam6_pano_pane_g

0x4653,	// (0x0004d244) main_browser_tag_pane

0x2ae6,	// (0x0004b6d7) grid_navstr_albumart_pane

0x2da8,	// (0x0004b999) cell_navstr_albumart_pane_ParamLimits

0x2da8,	// (0x0004b999) cell_navstr_albumart_pane

0x2dcb,	// (0x0004b9bc) cell_navstr_albumart_pane_g1

0xea74,	// (0x00057665) cell_navstr_albumart_pane_g2

0xea84,	// (0x00057675) cell_navstr_albumart_pane_g3

0xea7c,	// (0x0005766d) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00058a1c) cell_navstr_albumart_pane_g

0xc7ea,	// (0x000553db) bt_list_pane_ParamLimits

0xc7ea,	// (0x000553db) bt_list_pane

0xc80a,	// (0x000553fb) bt_list_pane_t1

0xc819,	// (0x0005540a) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00058a25) bt_list_pane_t

0x4653,	// (0x0004d244) main_cale_prevew_pane

0xc828,	// (0x00055419) popup_cale_preview_window_ParamLimits

0xc828,	// (0x00055419) popup_cale_preview_window

0xec65,	// (0x00057856) bg_popup_preview_window_pane_cp05_ParamLimits

0xec65,	// (0x00057856) bg_popup_preview_window_pane_cp05

0x2dd3,	// (0x0004b9c4) list_cale_preview_pane_ParamLimits

0x2dd3,	// (0x0004b9c4) list_cale_preview_pane

0x3129,	// (0x0004bd1a) list_double_cale_preview_pane_ParamLimits

0x3129,	// (0x0004bd1a) list_double_cale_preview_pane

0xc841,	// (0x00055432) list_single_cale_preview_pane_ParamLimits

0xc841,	// (0x00055432) list_single_cale_preview_pane

0xc857,	// (0x00055448) list_single_cale_preview_pane_g1

0xc85f,	// (0x00055450) list_single_cale_preview_pane_t1_ParamLimits

0xc85f,	// (0x00055450) list_single_cale_preview_pane_t1

0xc874,	// (0x00055465) list_double_cale_preview_pane_g1

0xc87c,	// (0x0005546d) list_double_cale_preview_pane_t1_ParamLimits

0xc87c,	// (0x0005546d) list_double_cale_preview_pane_t1

0xc891,	// (0x00055482) list_double_cale_preview_pane_t2_ParamLimits

0xc891,	// (0x00055482) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x00058a2a) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x00058a2a) list_double_cale_preview_pane_t

0x4653,	// (0x0004d244) main_ezdial_pane

0xec65,	// (0x00057856) main_sp_fs_email_pane_ParamLimits

0xc088,	// (0x00054c79) cmail_ddmenu_btn01_pane_ParamLimits

0xc088,	// (0x00054c79) cmail_ddmenu_btn01_pane

0xc0a5,	// (0x00054c96) cmail_ddmenu_btn02_pane_ParamLimits

0xc0a5,	// (0x00054c96) cmail_ddmenu_btn02_pane

0xc0c3,	// (0x00054cb4) cmail_ddmenu_btn03_pane_ParamLimits

0xc0c3,	// (0x00054cb4) cmail_ddmenu_btn03_pane

0xc0f1,	// (0x00054ce2) main_sp_fs_ctrlbar_pane_ParamLimits

0xc10d,	// (0x00054cfe) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc50a,	// (0x000550fb) list_cmail_body_pane_ParamLimits

0x2a12,	// (0x0004b603) bg_button_pane_cp12

0x2a27,	// (0x0004b618) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2a27,	// (0x0004b618) list_single_cmail_header_detail_pane_g3

0xc5a3,	// (0x00055194) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc5a3,	// (0x00055194) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x000589af) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x000589af) list_single_cmail_header_detail_pane_t

0x2b4e,	// (0x0004b73f) phacti_term_pane_t2_ParamLimits

0x2b4e,	// (0x0004b73f) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x000589b9) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x000589b9) phacti_term_pane_t

0x2ddf,	// (0x0004b9d0) aid_size_list_single_double

0xc8a9,	// (0x0005549a) popup_ezdial_listscroll_window

0xc8c9,	// (0x000554ba) popup_number_entry_window_cp01

0xd86b,	// (0x0005645c) bg_popup_call_pane_cp09

0x2deb,	// (0x0004b9dc) ezdial_list_pane

0x2df3,	// (0x0004b9e4) scroll_pane_cp23

0xee91,	// (0x00057a82) bg_button_pane_cp028_ParamLimits

0xee91,	// (0x00057a82) bg_button_pane_cp028

0xc8d7,	// (0x000554c8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc8d7,	// (0x000554c8) cmail_ddmenu_btn01_pane_g1

0xc8e7,	// (0x000554d8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc8e7,	// (0x000554d8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x00058a2f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x00058a2f) cmail_ddmenu_btn01_pane_g

0x2dfb,	// (0x0004b9ec) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2dfb,	// (0x0004b9ec) cmail_ddmenu_btn01_pane_t1

0xec57,	// (0x00057848) bg_button_pane_cp029_ParamLimits

0xec57,	// (0x00057848) bg_button_pane_cp029

0xc8e7,	// (0x000554d8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc8e7,	// (0x000554d8) cmail_ddmenu_btn02_pane_g1

0xc8ff,	// (0x000554f0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc8ff,	// (0x000554f0) cmail_ddmenu_btn02_pane_t1

0x145b,	// (0x0004a04c) bg_button_pane_cp031_ParamLimits

0x145b,	// (0x0004a04c) bg_button_pane_cp031

0xc8e7,	// (0x000554d8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc8e7,	// (0x000554d8) cmail_ddmenu_btn03_pane_g1

0xc8ff,	// (0x000554f0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc8ff,	// (0x000554f0) cmail_ddmenu_btn03_pane_t1

0x9dc1,	// (0x000529b2) cell_dialer2_keypad_pane_t1_ParamLimits

0x9ddb,	// (0x000529cc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9ddb,	// (0x000529cc) cell_dialer2_keypad_pane_t1_copy1

0xba0f,	// (0x00054600) ncimui_group_button_pane

0xec65,	// (0x00057856) main_sp_fs_calendar_pane_ParamLimits

0xc527,	// (0x00055118) list_single_cmail_header_caption_pane_ParamLimits

0x1a7e,	// (0x0004a66f) aid_recal_txt_sm_pane

0x4653,	// (0x0004d244) mian_recal_day_pane

0x2bc6,	// (0x0004b7b7) popup_sp_fs_cale_preview_window_ParamLimits

0x4653,	// (0x0004d244) list_recal_day_pane

0x2e29,	// (0x0004ba1a) list_single_recal_day_pane_ParamLimits

0x2e29,	// (0x0004ba1a) list_single_recal_day_pane

0x2e3b,	// (0x0004ba2c) list_single_recal_day_pane_g1_ParamLimits

0x2e3b,	// (0x0004ba2c) list_single_recal_day_pane_g1

0x2e47,	// (0x0004ba38) list_single_recal_day_pane_g2_ParamLimits

0x2e47,	// (0x0004ba38) list_single_recal_day_pane_g2

0x2e56,	// (0x0004ba47) list_single_recal_day_pane_g3_ParamLimits

0x2e56,	// (0x0004ba47) list_single_recal_day_pane_g3

0xc923,	// (0x00055514) list_single_recal_day_pane_g4_ParamLimits

0xc923,	// (0x00055514) list_single_recal_day_pane_g4

0x2e62,	// (0x0004ba53) list_single_recal_day_pane_g5_ParamLimits

0x2e62,	// (0x0004ba53) list_single_recal_day_pane_g5

0x2e71,	// (0x0004ba62) list_single_recal_day_pane_g6_ParamLimits

0x2e71,	// (0x0004ba62) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x00058a3e) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x00058a3e) list_single_recal_day_pane_g

0x2e7d,	// (0x0004ba6e) list_single_recal_day_pane_t1

0x2e8b,	// (0x0004ba7c) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00058a4b) list_single_recal_day_pane_t

0xc936,	// (0x00055527) ncimui_query_button_pane_ParamLimits

0xc936,	// (0x00055527) ncimui_query_button_pane

0xc946,	// (0x00055537) ncimui_query_button_pane_t1_ParamLimits

0xc946,	// (0x00055537) ncimui_query_button_pane_t1

0x2e99,	// (0x0004ba8a) ncimui_query_button_pane_t2_ParamLimits

0x2e99,	// (0x0004ba8a) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x00058a50) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x00058a50) ncimui_query_button_pane_t

0xc959,	// (0x0005554a) query_button_pane_ParamLimits

0xc959,	// (0x0005554a) query_button_pane

0x4653,	// (0x0004d244) bg_button_pane_cp0028

0x2eac,	// (0x0004ba9d) query_button_pane_t1

0x822f,	// (0x00050e20) main_tport_pane_ParamLimits

0xc43a,	// (0x0005502b) bg_popup_window_pane_cp01_ParamLimits

0xc43a,	// (0x0005502b) bg_popup_window_pane_cp01

0xc447,	// (0x00055038) heading_pane_cp08_ParamLimits

0xc447,	// (0x00055038) heading_pane_cp08

0xc455,	// (0x00055046) heading_pane_cp07_ParamLimits

0xc455,	// (0x00055046) heading_pane_cp07

0x29bb,	// (0x0004b5ac) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0005899c) cell_tport_appsw_pane_g

0x7946,	// (0x00050537) input_candi_list_open_g1

0xd327,	// (0x00055f18) list_cale_time_pane_g6_ParamLimits

0xd327,	// (0x00055f18) list_cale_time_pane_g6

0x8c68,	// (0x00051859) aid_size_touch_calib_1_ParamLimits

0x8c68,	// (0x00051859) aid_size_touch_calib_1

0x8c74,	// (0x00051865) aid_size_touch_calib_2_ParamLimits

0x8c74,	// (0x00051865) aid_size_touch_calib_2

0x8c82,	// (0x00051873) aid_size_touch_calib_3_ParamLimits

0x8c82,	// (0x00051873) aid_size_touch_calib_3

0x8c92,	// (0x00051883) aid_size_touch_calib_4_ParamLimits

0x8c92,	// (0x00051883) aid_size_touch_calib_4

0x8ca0,	// (0x00051891) main_touch_calib_button_group_pane_ParamLimits

0x8ca0,	// (0x00051891) main_touch_calib_button_group_pane

0x8cae,	// (0x0005189f) main_touch_calib_pane_g1_ParamLimits

0x8cba,	// (0x000518ab) main_touch_calib_pane_g2_ParamLimits

0x8cc6,	// (0x000518b7) main_touch_calib_pane_g3_ParamLimits

0x8cd2,	// (0x000518c3) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00058375) main_touch_calib_pane_g_ParamLimits

0x8cde,	// (0x000518cf) main_touch_calib_pane_t1_ParamLimits

0x8cf5,	// (0x000518e6) main_touch_calib_pane_t2_ParamLimits

0x8d0c,	// (0x000518fd) main_touch_calib_pane_t3_ParamLimits

0x8d20,	// (0x00051911) main_touch_calib_pane_t4_ParamLimits

0x8d34,	// (0x00051925) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0005837e) main_touch_calib_pane_t_ParamLimits

0x0de2,	// (0x000499d3) list_single_fp_cale_pane_g3_ParamLimits

0x0de2,	// (0x000499d3) list_single_fp_cale_pane_g3

0xa215,	// (0x00052e06) bg_button_pane_cp012_ParamLimits

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp03_ParamLimits

0xac00,	// (0x000537f1) cell_vitu2_function_top_pane_g1_ParamLimits

0xa215,	// (0x00052e06) bg_vkb2_func_pane_cp04_ParamLimits

0xb9c0,	// (0x000545b1) main_ncimui_button_group_pane_ParamLimits

0xb9c0,	// (0x000545b1) main_ncimui_button_group_pane

0xb9fd,	// (0x000545ee) main_ncimui_pane_t3_ParamLimits

0xb9fd,	// (0x000545ee) main_ncimui_pane_t3

0x2afc,	// (0x0004b6ed) phacti_button_group_pane

0x2ddf,	// (0x0004b9d0) aid_size_list_single_double_ParamLimits

0xc8a9,	// (0x0005549a) popup_ezdial_listscroll_window_ParamLimits

0xc8c9,	// (0x000554ba) popup_number_entry_window_cp01_ParamLimits

0xc966,	// (0x00055557) phacti_button_pane_ParamLimits

0xc966,	// (0x00055557) phacti_button_pane

0x4653,	// (0x0004d244) bg_button_pane_cp14

0x2eba,	// (0x0004baab) phacti_button_pane_t1

0xc977,	// (0x00055568) main_touch_calib_button_pane_ParamLimits

0xc977,	// (0x00055568) main_touch_calib_button_pane

0x53c3,	// (0x0004dfb4) bg_button_pane_cp18_ParamLimits

0x53c3,	// (0x0004dfb4) bg_button_pane_cp18

0x2ec8,	// (0x0004bab9) main_touch_calib_button_pane_t1_ParamLimits

0x2ec8,	// (0x0004bab9) main_touch_calib_button_pane_t1

0x2ede,	// (0x0004bacf) main_touch_calib_button_pane_t2_ParamLimits

0x2ede,	// (0x0004bacf) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x00058a55) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x00058a55) main_touch_calib_button_pane_t

0x4653,	// (0x0004d244) cell_ncimui_button_pane

0x4653,	// (0x0004d244) bg_button_pane_cp032

0x2efc,	// (0x0004baed) cell_ncimui_button_pane_t1

0x9e37,	// (0x00052a28) image3_infobar_pane_ParamLimits

0x9e37,	// (0x00052a28) image3_infobar_pane

0xbd39,	// (0x0005492a) fs_bigclock_status_pane_ParamLimits

0xbd39,	// (0x0005492a) fs_bigclock_status_pane

0xbd46,	// (0x00054937) main_fs_bigclock_clock_pane_ParamLimits

0xbd46,	// (0x00054937) main_fs_bigclock_clock_pane

0xbd56,	// (0x00054947) main_fs_bigclock_indi_pane_ParamLimits

0xbd56,	// (0x00054947) main_fs_bigclock_indi_pane

0xbd83,	// (0x00054974) main_fs_bigclock_swipe_pane_ParamLimits

0xbd83,	// (0x00054974) main_fs_bigclock_swipe_pane

0x4653,	// (0x0004d244) main_fs_clock_dumped_data

0x23ee,	// (0x0004afdf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x23ee,	// (0x0004afdf) list_single_fs_bigclock_indicator_pane_g1

0x240a,	// (0x0004affb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x240a,	// (0x0004affb) list_single_fs_bigclock_indicator_pane_g2

0x2424,	// (0x0004b015) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2424,	// (0x0004b015) list_single_fs_bigclock_indicator_pane_g3

0x243e,	// (0x0004b02f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x243e,	// (0x0004b02f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00058888) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00058888) list_single_fs_bigclock_indicator_pane_g

0x2464,	// (0x0004b055) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2464,	// (0x0004b055) list_single_fs_bigclock_indicator_pane_t1

0x248c,	// (0x0004b07d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x248c,	// (0x0004b07d) list_single_fs_bigclock_indicator_pane_t2

0x24b4,	// (0x0004b0a5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x24b4,	// (0x0004b0a5) list_single_fs_bigclock_indicator_pane_t3

0x24dc,	// (0x0004b0cd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x24dc,	// (0x0004b0cd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00058893) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00058893) list_single_fs_bigclock_indicator_pane_t

0x2f0a,	// (0x0004bafb) image3_infobar_fav_pane_ParamLimits

0x2f0a,	// (0x0004bafb) image3_infobar_fav_pane

0x2f1a,	// (0x0004bb0b) image3_infobar_loc_pane_ParamLimits

0x2f1a,	// (0x0004bb0b) image3_infobar_loc_pane

0x2f2e,	// (0x0004bb1f) image3_infobar_time_pane_ParamLimits

0x2f2e,	// (0x0004bb1f) image3_infobar_time_pane

0xf0ac,	// (0x00057c9d) image3_infobar_time_pane_g1

0x2f3e,	// (0x0004bb2f) image3_infobar_time_pane_t1

0xf0ac,	// (0x00057c9d) image3_infobar_loc_pane_g1

0x2f4c,	// (0x0004bb3d) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00058a5a) image3_infobar_loc_pane_g

0x2f54,	// (0x0004bb45) image3_infobar_loc_pane_t1

0xf0ac,	// (0x00057c9d) image3_infobar_fav_pane_g1

0x2f62,	// (0x0004bb53) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x00058a5f) image3_infobar_fav_pane_g

0x2f6a,	// (0x0004bb5b) fs_bigclock_status_battery_pane

0x2f73,	// (0x0004bb64) fs_bigclock_status_signal_pane

0x2f7c,	// (0x0004bb6d) fs_bigclock_status_title_pane

0x2f85,	// (0x0004bb76) fs_bigclock_status_signal_pane_g1

0x2f8e,	// (0x0004bb7f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x00058a64) fs_bigclock_status_signal_pane_g

0x2f96,	// (0x0004bb87) fs_bigclock_status_battery_pane_g1

0x2f9f,	// (0x0004bb90) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00058a69) fs_bigclock_status_battery_pane_g

0x2fa7,	// (0x0004bb98) fs_bigclock_status_title_pane_t1

0xf0ac,	// (0x00057c9d) main_fs_bigclock_clock_pane_g1

0x2fb5,	// (0x0004bba6) main_fs_bigclock_clock_pane_g2

0x2fb5,	// (0x0004bba6) main_fs_bigclock_clock_pane_g3

0x2fb5,	// (0x0004bba6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x00058a6e) main_fs_bigclock_clock_pane_g

0x2fbd,	// (0x0004bbae) main_fs_bigclock_clock_pane_t1

0x2fcb,	// (0x0004bbbc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x00058a77) main_fs_bigclock_clock_pane_t

0x2fda,	// (0x0004bbcb) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2fda,	// (0x0004bbcb) list_single_fs_bigclock_indicator_pane

0xc989,	// (0x0005557a) list_single_fs_bigclock_pane_ParamLimits

0xc989,	// (0x0005557a) list_single_fs_bigclock_pane

0x2ff4,	// (0x0004bbe5) main_fs_bigclock_indicator_pane_t1

0x3003,	// (0x0004bbf4) list_single_fs_bigclock_pane_g1

0x300b,	// (0x0004bbfc) list_single_fs_bigclock_pane_t1

0xf0ac,	// (0x00057c9d) main_fs_bigclock_swipe_pane_g1

0x3049,	// (0x0004bc3a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00058a88) main_fs_bigclock_swipe_pane_g

0x3051,	// (0x0004bc42) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3051,	// (0x0004bc42) main_fs_bigclock_swipe_pane_t1

0x7104,	// (0x0004fcf5) call_type_pane_ParamLimits

0x4653,	// (0x0004d244) main_btmg_pane

0x2cbf,	// (0x0004b8b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2cbf,	// (0x0004b8b0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x000589fb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x000589fb) list_single_cale_mrui_row_pane_g

0x2e19,	// (0x0004ba0a) list_recal_vselct_arw_lo_pane

0x2e21,	// (0x0004ba12) list_recal_vselct_arw_up_pane

0x1a75,	// (0x0004a666) list_recal_vselct_pane

0x306e,	// (0x0004bc5f) btmg_button_pane

0xc9ec,	// (0x000555dd) main_btmg_pane_g1

0x4653,	// (0x0004d244) bg_button_pane_cp044

0x3078,	// (0x0004bc69) btmg_button_pane_t1

0xec4f,	// (0x00057840) aid_listscroll_gen

0xec65,	// (0x00057856) main_cntbar_detail_pane

0x29d9,	// (0x0004b5ca) list_cmail_folder_pane

0x29e9,	// (0x0004b5da) sp_fs_scroll_pane_cp03_ParamLimits

0xc9f4,	// (0x000555e5) list_single_fs_dyc_pane_cp01_ParamLimits

0xc9f4,	// (0x000555e5) list_single_fs_dyc_pane_cp01

0x3086,	// (0x0004bc77) aid_size_cmail_indent

0x308f,	// (0x0004bc80) list_single_dyc_row_pane_cp01

0xca3a,	// (0x0005562b) cntbar_detail_list_pane_ParamLimits

0xca3a,	// (0x0005562b) cntbar_detail_list_pane

0xca74,	// (0x00055665) main_cntbar_detail_cont_pane_ParamLimits

0xca74,	// (0x00055665) main_cntbar_detail_cont_pane

0x709e,	// (0x0004fc8f) scroll_pane_cp032_ParamLimits

0x709e,	// (0x0004fc8f) scroll_pane_cp032

0xca80,	// (0x00055671) cntbar_detail_list_event_pane_ParamLimits

0xca80,	// (0x00055671) cntbar_detail_list_event_pane

0xca46,	// (0x00055637) cntbar_detail_list_shct_pane

0x662a,	// (0x0004f21b) aid_list_gen

0x3098,	// (0x0004bc89) aid_scroll

0x30a1,	// (0x0004bc92) aid_size_touch_scroll_bar

0x25d9,	// (0x0004b1ca) aid_list_double

0x30aa,	// (0x0004bc9b) aid_list_single

0xca94,	// (0x00055685) aid_list_single_lg

0x30b3,	// (0x0004bca4) aid_list_z_g_a_sm

0x30bb,	// (0x0004bcac) aid_list_z_g_d

0x30c3,	// (0x0004bcb4) aid_txt_z_prm

0xca9d,	// (0x0005568e) aid_txt_z_prm_cp01

0xcaab,	// (0x0005569c) aid_txt_z_sec

0xcab9,	// (0x000556aa) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcab9,	// (0x000556aa) main_cntbar_detail_cont_pane_g1

0xcac6,	// (0x000556b7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcac6,	// (0x000556b7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00058a8d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00058a8d) main_cntbar_detail_cont_pane_g

0x30d1,	// (0x0004bcc2) main_cntbar_detail_cont_pane_t1

0x30df,	// (0x0004bcd0) main_cntbar_detail_cont_pane_t2

0x30ed,	// (0x0004bcde) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00058a92) main_cntbar_detail_cont_pane_t

0xcad2,	// (0x000556c3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcad2,	// (0x000556c3) cell_cntbar_detail_list_shct_pane

0x30fb,	// (0x0004bcec) cntbar_detail_list_shct_pane_g1

0x3104,	// (0x0004bcf5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00058a99) cntbar_detail_list_shct_pane_g

0xcae6,	// (0x000556d7) cntbar_detail_list_event_pane_g1_ParamLimits

0xcae6,	// (0x000556d7) cntbar_detail_list_event_pane_g1

0xcaf2,	// (0x000556e3) cntbar_detail_list_event_pane_g2_ParamLimits

0xcaf2,	// (0x000556e3) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00058a9e) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00058a9e) cntbar_detail_list_event_pane_g

0xcb5e,	// (0x0005574f) cntbar_detail_list_event_pane_t1_ParamLimits

0xcb5e,	// (0x0005574f) cntbar_detail_list_event_pane_t1

0xcb73,	// (0x00055764) cntbar_detail_list_event_pane_t2_ParamLimits

0xcb73,	// (0x00055764) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00058aab) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00058aab) cntbar_detail_list_event_pane_t

0xf0ac,	// (0x00057c9d) cell_cntbar_detail_list_shct_pane_g1

0x7492,	// (0x00050083) navi_pane_mv_g3

0xec65,	// (0x00057856) main_cntbar_detail_pane_ParamLimits

0x4653,	// (0x0004d244) main_notif_wgt_pane

0x9aeb,	// (0x000526dc) aid_tch_main_mp4_pane_g4

0x9d20,	// (0x00052911) popup_slider_window_cp02

0x2e10,	// (0x0004ba01) list_recal_day_event_pane

0xca1a,	// (0x0005560b) cntbar_detail_btn_pane_ParamLimits

0xca1a,	// (0x0005560b) cntbar_detail_btn_pane

0xca2a,	// (0x0005561b) cntbar_detail_btn_pane_cp01_ParamLimits

0xca2a,	// (0x0005561b) cntbar_detail_btn_pane_cp01

0xca46,	// (0x00055637) cntbar_detail_list_shct_pane_ParamLimits

0xca52,	// (0x00055643) cntbar_detail_pane_g1_ParamLimits

0xca52,	// (0x00055643) cntbar_detail_pane_g1

0xca5e,	// (0x0005564f) cntbar_detail_pane_t1_ParamLimits

0xca5e,	// (0x0005564f) cntbar_detail_pane_t1

0xcafe,	// (0x000556ef) cntbar_detail_list_event_pane_g3_ParamLimits

0xcafe,	// (0x000556ef) cntbar_detail_list_event_pane_g3

0xcb16,	// (0x00055707) cntbar_detail_list_event_pane_g4_ParamLimits

0xcb16,	// (0x00055707) cntbar_detail_list_event_pane_g4

0xcb2e,	// (0x0005571f) cntbar_detail_list_event_pane_g5_ParamLimits

0xcb2e,	// (0x0005571f) cntbar_detail_list_event_pane_g5

0xcb46,	// (0x00055737) cntbar_detail_list_event_pane_g6_ParamLimits

0xcb46,	// (0x00055737) cntbar_detail_list_event_pane_g6

0xcb88,	// (0x00055779) cntbar_detail_list_event_pane_t3_ParamLimits

0xcb88,	// (0x00055779) cntbar_detail_list_event_pane_t3

0xcb9a,	// (0x0005578b) popup_notif_wgt_window_ParamLimits

0xcb9a,	// (0x0005578b) popup_notif_wgt_window

0xcbaa,	// (0x0005579b) popup_submenu_window_cp01_ParamLimits

0xcbaa,	// (0x0005579b) popup_submenu_window_cp01

0xd86b,	// (0x0005645c) bg_popup_window_pane_cp10

0x310d,	// (0x0004bcfe) listscroll_notif_wgt_pane

0x3117,	// (0x0004bd08) list_notif_wgt_window

0x3120,	// (0x0004bd11) scroll_pane_cp033

0x3129,	// (0x0004bd1a) list_notif_wgt_row_pane_ParamLimits

0x3129,	// (0x0004bd1a) list_notif_wgt_row_pane

0x313b,	// (0x0004bd2c) aid_size_list_notif_wgt_del

0x3144,	// (0x0004bd35) list_notif_wgt_row_pane_g1

0x314c,	// (0x0004bd3d) list_notif_wgt_row_pane_g2

0x3154,	// (0x0004bd45) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00058ab2) list_notif_wgt_row_pane_g

0x315d,	// (0x0004bd4e) list_notif_wgt_row_pane_t1

0x316b,	// (0x0004bd5c) list_notif_wgt_row_pane_t2

0x3179,	// (0x0004bd6a) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00058ab9) list_notif_wgt_row_pane_t

0x1757,	// (0x0004a348) list_recal_day_event_pane_g1

0x3187,	// (0x0004bd78) list_recal_day_event_pane_t1

0x4653,	// (0x0004d244) bg_button_pane_cp045

0x3196,	// (0x0004bd87) cntbar_detail_btn_pane_t1

0xec57,	// (0x00057848) main_callh_pane_ParamLimits

0xec57,	// (0x00057848) main_callh_pane

0x4653,	// (0x0004d244) main_coverflow0_pane

0x4653,	// (0x0004d244) main_wgtman_pane

0xbd9b,	// (0x0005498c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbd9b,	// (0x0005498c) main_fs_bigclock_unlock_btn_pane

0x29b3,	// (0x0004b5a4) bg_button_pane_cp16

0x29c3,	// (0x0004b5b4) cell_tport_appsw_pane_g3

0xcbb8,	// (0x000557a9) cf0_flow_pane_ParamLimits

0xcbb8,	// (0x000557a9) cf0_flow_pane

0x31a4,	// (0x0004bd95) listscroll_cf0_pane

0x31ad,	// (0x0004bd9e) main_cf0_pane_g1

0xcbc7,	// (0x000557b8) main_cf0_pane_t1_ParamLimits

0xcbc7,	// (0x000557b8) main_cf0_pane_t1

0xcbdb,	// (0x000557cc) main_cf0_pane_t2_ParamLimits

0xcbdb,	// (0x000557cc) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00058ac0) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00058ac0) main_cf0_pane_t

0x31b7,	// (0x0004bda8) scroll_pane_cp11

0xcbef,	// (0x000557e0) cf0_flow_pane_g1

0xcbf7,	// (0x000557e8) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00058ac5) cf0_flow_pane_g

0xcbff,	// (0x000557f0) cf0_flow_pane_t1

0x4653,	// (0x0004d244) main_call6_pane

0x4653,	// (0x0004d244) main_calllock_pane

0xcc0d,	// (0x000557fe) call6_btn_grp_pane_ParamLimits

0xcc0d,	// (0x000557fe) call6_btn_grp_pane

0xcc1c,	// (0x0005580d) call6_pane_g1_ParamLimits

0xcc1c,	// (0x0005580d) call6_pane_g1

0xcc2b,	// (0x0005581c) popup_call6_1st_window_ParamLimits

0xcc2b,	// (0x0005581c) popup_call6_1st_window

0xcc39,	// (0x0005582a) popup_call6_2nd_window_ParamLimits

0xcc39,	// (0x0005582a) popup_call6_2nd_window

0xcc47,	// (0x00055838) cell_call6_btn_pane_ParamLimits

0xcc47,	// (0x00055838) cell_call6_btn_pane

0xd86b,	// (0x0005645c) bg_popup_call2_in_pane_cp03

0x31c2,	// (0x0004bdb3) popup_call6_1st_window_g1

0x31ca,	// (0x0004bdbb) popup_call6_1st_window_g2

0x31d2,	// (0x0004bdc3) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00058aca) popup_call6_1st_window_g

0x31da,	// (0x0004bdcb) popup_call6_1st_window_t1

0x31e9,	// (0x0004bdda) popup_call6_1st_window_t2

0x31f9,	// (0x0004bdea) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00058ad1) popup_call6_1st_window_t

0xd86b,	// (0x0005645c) bg_popup_call2_in_pane_cp04

0x31c2,	// (0x0004bdb3) popup_call6_2nd_window_g1

0x31ca,	// (0x0004bdbb) popup_call6_2nd_window_g2

0x31d2,	// (0x0004bdc3) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00058aca) popup_call6_2nd_window_g

0x31da,	// (0x0004bdcb) popup_call6_2nd_window_t1

0x4653,	// (0x0004d244) bg_button_pane_cp15

0x3209,	// (0x0004bdfa) cell_call6_btn_pane_g1

0x3212,	// (0x0004be03) cell_call6_btn_pane_t1

0xcc56,	// (0x00055847) listscroll_wgtman_pane_ParamLimits

0xcc56,	// (0x00055847) listscroll_wgtman_pane

0xcc74,	// (0x00055865) wgtman_btn_pane_ParamLimits

0xcc74,	// (0x00055865) wgtman_btn_pane

0xd722,	// (0x00056313) aid_scroll_copy1

0x3221,	// (0x0004be12) list_wgtman_pane

0xcca9,	// (0x0005589a) wgtman_btn_pane_g1_ParamLimits

0xcca9,	// (0x0005589a) wgtman_btn_pane_g1

0xccd1,	// (0x000558c2) wgtman_btn_pane_t1_ParamLimits

0xccd1,	// (0x000558c2) wgtman_btn_pane_t1

0x322b,	// (0x0004be1c) wgtman_btn_pane_t2_ParamLimits

0x322b,	// (0x0004be1c) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00058ad8) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00058ad8) wgtman_btn_pane_t

0xcd08,	// (0x000558f9) listrow_wgtman_pane_ParamLimits

0xcd08,	// (0x000558f9) listrow_wgtman_pane

0xcd23,	// (0x00055914) listrow_wgtman_pane_g1

0xcd2c,	// (0x0005591d) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00058add) listrow_wgtman_pane_g

0xcd36,	// (0x00055927) listrow_wgtman_pane_t1

0xcd44,	// (0x00055935) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00058ae2) listrow_wgtman_pane_t

0xcd52,	// (0x00055943) wait_bar_pane_cp09

0x3242,	// (0x0004be33) main_calllock_btn_pane

0x324c,	// (0x0004be3d) main_calllock_pane_g1

0x4653,	// (0x0004d244) bg_button_pane_cp17

0x3258,	// (0x0004be49) main_calllock_btn_pane_g1

0x3261,	// (0x0004be52) main_calllock_btn_pane_t1

0x4653,	// (0x0004d244) main_dialer3_pane

0x4653,	// (0x0004d244) main_fmrd2_pane

0xf0ac,	// (0x00057c9d) main_fs_bigclock_unlock_btn_pane_g1

0x3278,	// (0x0004be69) main_fs_bigclock_unlock_btn_pane_t1

0xcd5a,	// (0x0005594b) area_fmrd2_info_pane_ParamLimits

0xcd5a,	// (0x0005594b) area_fmrd2_info_pane

0xcd68,	// (0x00055959) area_fmrd2_visual_pane_ParamLimits

0xcd68,	// (0x00055959) area_fmrd2_visual_pane

0xcd76,	// (0x00055967) fmrd2_indi_pane_ParamLimits

0xcd76,	// (0x00055967) fmrd2_indi_pane

0xcd83,	// (0x00055974) area_fmrd2_visual_pane_g1

0xcd8b,	// (0x0005597c) area_fmrd2_visual_pane_t1

0xcd9b,	// (0x0005598c) area_fmrd2_visual_pane_t2

0xcdab,	// (0x0005599c) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00058aec) area_fmrd2_visual_pane_t

0xcdbb,	// (0x000559ac) area_fmrd2_info_pane_g1

0xcdc3,	// (0x000559b4) area_fmrd2_info_pane_t1

0xcdd3,	// (0x000559c4) area_fmrd2_info_pane_t2

0xcde3,	// (0x000559d4) area_fmrd2_info_pane_t3

0xcdf3,	// (0x000559e4) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00058af3) area_fmrd2_info_pane_t

0xce01,	// (0x000559f2) fmrd2_indi_pane_t1

0xce11,	// (0x00055a02) fmrd2_indi_pane_t2

0xce21,	// (0x00055a12) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00058afc) fmrd2_indi_pane_t

0x244d,	// (0x0004b03e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x244d,	// (0x0004b03e) list_single_fs_bigclock_indicator_pane_g5

0x24f1,	// (0x0004b0e2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x24f1,	// (0x0004b0e2) list_single_fs_bigclock_indicator_pane_t5

0xc661,	// (0x00055252) aid_cell_bcale_month_pane_ParamLimits

0xc661,	// (0x00055252) aid_cell_bcale_month_pane

0xc66d,	// (0x0005525e) bcale_month_pane_ParamLimits

0xc66d,	// (0x0005525e) bcale_month_pane

0xc67b,	// (0x0005526c) bcale_preview_pane_ParamLimits

0xc67b,	// (0x0005526c) bcale_preview_pane

0x300b,	// (0x0004bbfc) list_single_fs_bigclock_pane_t1_ParamLimits

0x3025,	// (0x0004bc16) list_single_fs_bigclock_pane_t2_ParamLimits

0x3025,	// (0x0004bc16) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x00058a83) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x00058a83) list_single_fs_bigclock_pane_t

0x3270,	// (0x0004be61) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00058ae7) main_fs_bigclock_unlock_btn_pane_g

0xce2f,	// (0x00055a20) aid_dia3_key_size_ParamLimits

0xce2f,	// (0x00055a20) aid_dia3_key_size

0xce3b,	// (0x00055a2c) aid_dia3_listrow_size_ParamLimits

0xce3b,	// (0x00055a2c) aid_dia3_listrow_size

0xce4b,	// (0x00055a3c) dia3_keypad_fun_pane_ParamLimits

0xce4b,	// (0x00055a3c) dia3_keypad_fun_pane

0xce5d,	// (0x00055a4e) dia3_keypad_num_pane_ParamLimits

0xce5d,	// (0x00055a4e) dia3_keypad_num_pane

0xce6f,	// (0x00055a60) dia3_listscroll_pane_ParamLimits

0xce6f,	// (0x00055a60) dia3_listscroll_pane

0xce7d,	// (0x00055a6e) dia3_numentry_pane_ParamLimits

0xce7d,	// (0x00055a6e) dia3_numentry_pane

0x3286,	// (0x0004be77) dia3_list_pane

0x3291,	// (0x0004be82) scroll_pane_cp12

0x4653,	// (0x0004d244) bg_dia3_numentry_pane

0xce8b,	// (0x00055a7c) dia3_numentry_pane_t1

0xce9a,	// (0x00055a8b) cell_dia3_key_num_pane

0xcea2,	// (0x00055a93) cell_dia3_key0_fun_pane_ParamLimits

0xcea2,	// (0x00055a93) cell_dia3_key0_fun_pane

0xceaf,	// (0x00055aa0) cell_dia3_key1_fun_pane_ParamLimits

0xceaf,	// (0x00055aa0) cell_dia3_key1_fun_pane

0xcebc,	// (0x00055aad) dia3_listrow_pane

0x216d,	// (0x0004ad5e) bg_dia3_numentry_pane_g1

0x4653,	// (0x0004d244) bg_button_pane_cp21

0x329c,	// (0x0004be8d) cell_dia3_key_num_pane_t1

0x32aa,	// (0x0004be9b) cell_dia3_key_num_pane_t2

0x32b9,	// (0x0004beaa) cell_dia3_key_num_pane_t3

0x32c8,	// (0x0004beb9) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00058b03) cell_dia3_key_num_pane_t

0x4653,	// (0x0004d244) bg_button_pane_cp19

0xcec9,	// (0x00055aba) cell_dia3_key0_fun_pane_g1

0x4653,	// (0x0004d244) bg_button_pane_cp20

0xced1,	// (0x00055ac2) cell_dia3_key1_fun_pane_g1

0xced9,	// (0x00055aca) area_left_week_number_pane

0xcee2,	// (0x00055ad3) area_top_day_name_pane

0xceeb,	// (0x00055adc) frame_month_view_pane

0xcef5,	// (0x00055ae6) grid_month_view_pane

0xceff,	// (0x00055af0) cell_top_day_name_pane_ParamLimits

0xceff,	// (0x00055af0) cell_top_day_name_pane

0xcf19,	// (0x00055b0a) cell_area_left_week_number_pane_ParamLimits

0xcf19,	// (0x00055b0a) cell_area_left_week_number_pane

0xcf2d,	// (0x00055b1e) cell_month_view_pane_ParamLimits

0xcf2d,	// (0x00055b1e) cell_month_view_pane

0x32d7,	// (0x0004bec8) frm_month_g1

0xcf4a,	// (0x00055b3b) frm_month_g2

0xcf54,	// (0x00055b45) frm_month_g3

0xcf5e,	// (0x00055b4f) frm_month_g4

0xcf68,	// (0x00055b59) frm_month_g5

0xcf72,	// (0x00055b63) frm_month_g6

0xcf7c,	// (0x00055b6d) frm_month_g7

0x32e0,	// (0x0004bed1) frm_month_g8

0xcf86,	// (0x00055b77) frm_month_g9

0xcf8f,	// (0x00055b80) frm_month_g10

0xcf98,	// (0x00055b89) frm_month_g11

0xcfa1,	// (0x00055b92) frm_month_g12

0xcfaa,	// (0x00055b9b) frm_month_g13

0xcfb3,	// (0x00055ba4) frm_month_g14

0xcfbc,	// (0x00055bad) frm_month_g15

0xcfc7,	// (0x00055bb8) frm_month_g16

0x000f,

0xff1b,	// (0x00058b0c) frm_month_g

0xcfd2,	// (0x00055bc3) cell_top_day_name_pane_t1

0xcfe1,	// (0x00055bd2) cell_area_left_week_number_pane_g1

0xcfd2,	// (0x00055bc3) cell_area_left_week_number_pane_t1

0xf0ac,	// (0x00057c9d) cell_month_view_pane_g1

0xcfe9,	// (0x00055bda) cell_month_view_pane_t1

0x4653,	// (0x0004d244) main_fps_pane

0x272b,	// (0x0004b31c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x272b,	// (0x0004b31c) cmail_ddmenu_btn02_pane_cp1

0x2747,	// (0x0004b338) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2747,	// (0x0004b338) cmail_ddmenu_btn02_pane_cp2

0xc8f3,	// (0x000554e4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc8f3,	// (0x000554e4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00058a34) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00058a34) cmail_ddmenu_btn02_pane_g

0xc911,	// (0x00055502) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc911,	// (0x00055502) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00058a39) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00058a39) cmail_ddmenu_btn02_pane_t

0xcff8,	// (0x00055be9) fps_text_pane_ParamLimits

0xcff8,	// (0x00055be9) fps_text_pane

0xd005,	// (0x00055bf6) main_fps_pane_g1_ParamLimits

0xd005,	// (0x00055bf6) main_fps_pane_g1

0xd013,	// (0x00055c04) wait_bar_pane_cp010_ParamLimits

0xd013,	// (0x00055c04) wait_bar_pane_cp010

0xd01f,	// (0x00055c10) fps_text_pane_t1_ParamLimits

0xd01f,	// (0x00055c10) fps_text_pane_t1

0xa104,	// (0x00052cf5) cam4_image_uncrop_pane_g1

0xa10d,	// (0x00052cfe) cam4_image_uncrop_pane_g2

0xa116,	// (0x00052d07) cam4_image_uncrop_pane_g3

0xa11f,	// (0x00052d10) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0005850d) cam4_image_uncrop_pane_g

0xcebc,	// (0x00055aad) dia3_listrow_pane_ParamLimits

0x4653,	// (0x0004d244) main_phob2_pane

0xc49c,	// (0x0005508d) cell_tport_appsw_pane_cp02_ParamLimits

0xc49c,	// (0x0005508d) cell_tport_appsw_pane_cp02

0xc4ab,	// (0x0005509c) cell_tport_appsw_pane_cp03_ParamLimits

0xc4ab,	// (0x0005509c) cell_tport_appsw_pane_cp03

0x4653,	// (0x0004d244) phob2_contact_card_pane

0x4653,	// (0x0004d244) phob2_listscroll_pane

0xd038,	// (0x00055c29) phob2_list_pane

0xd040,	// (0x00055c31) scroll_pane_cp034

0xd048,	// (0x00055c39) phob2_cc_data_pane_ParamLimits

0xd048,	// (0x00055c39) phob2_cc_data_pane

0xd062,	// (0x00055c53) phob2_cc_listscroll_pane_ParamLimits

0xd062,	// (0x00055c53) phob2_cc_listscroll_pane

0xd07c,	// (0x00055c6d) list_double_large_graphic_phob2_pane_ParamLimits

0xd07c,	// (0x00055c6d) list_double_large_graphic_phob2_pane

0xd09a,	// (0x00055c8b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd09a,	// (0x00055c8b) list_double_large_graphic_phob2_pane_g1

0x32e9,	// (0x0004beda) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x32e9,	// (0x0004beda) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00058b2d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00058b2d) list_double_large_graphic_phob2_pane_g

0x32f5,	// (0x0004bee6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x32f5,	// (0x0004bee6) list_double_large_graphic_phob2_pane_t1

0x330a,	// (0x0004befb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x330a,	// (0x0004befb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00058b32) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00058b32) list_double_large_graphic_phob2_pane_t

0x4653,	// (0x0004d244) list_highlight_pane_cp024

0xd0a7,	// (0x00055c98) phob2_cc_button_pane

0xd0af,	// (0x00055ca0) phob2_cc_data_pane_g1_ParamLimits

0xd0af,	// (0x00055ca0) phob2_cc_data_pane_g1

0xd0bb,	// (0x00055cac) phob2_cc_data_pane_g2_ParamLimits

0xd0bb,	// (0x00055cac) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00058b37) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00058b37) phob2_cc_data_pane_g

0xd0c7,	// (0x00055cb8) phob2_cc_data_pane_t1_ParamLimits

0xd0c7,	// (0x00055cb8) phob2_cc_data_pane_t1

0xd0d9,	// (0x00055cca) phob2_cc_data_pane_t2_ParamLimits

0xd0d9,	// (0x00055cca) phob2_cc_data_pane_t2

0xd0eb,	// (0x00055cdc) phob2_cc_data_pane_t3_ParamLimits

0xd0eb,	// (0x00055cdc) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00058b3c) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00058b3c) phob2_cc_data_pane_t

0xd0fd,	// (0x00055cee) phob2_cc_list_pane_ParamLimits

0xd0fd,	// (0x00055cee) phob2_cc_list_pane

0xd109,	// (0x00055cfa) scroll_pane_cp035_ParamLimits

0xd109,	// (0x00055cfa) scroll_pane_cp035

0xec65,	// (0x00057856) bg_button_pane_cp033

0xd115,	// (0x00055d06) phob2_cc_button_pane_g1

0xd121,	// (0x00055d12) phob2_cc_button_pane_t1

0xd136,	// (0x00055d27) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00058b43) phob2_cc_button_pane_t

0xd148,	// (0x00055d39) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd148,	// (0x00055d39) list_double_large_graphic_phob2_cc_pane

0xd16f,	// (0x00055d60) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd16f,	// (0x00055d60) list_double_large_graphic_phob2_cc_pane_g1

0xd180,	// (0x00055d71) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd180,	// (0x00055d71) list_double_large_graphic_phob2_cc_pane_g2

0xd18f,	// (0x00055d80) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd18f,	// (0x00055d80) list_double_large_graphic_phob2_cc_pane_g3

0xd19e,	// (0x00055d8f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd19e,	// (0x00055d8f) list_double_large_graphic_phob2_cc_pane_g4

0xd1af,	// (0x00055da0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd1af,	// (0x00055da0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00058b48) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00058b48) list_double_large_graphic_phob2_cc_pane_g

0xd1be,	// (0x00055daf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd1be,	// (0x00055daf) list_double_large_graphic_phob2_cc_pane_t1

0xd1e7,	// (0x00055dd8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd1e7,	// (0x00055dd8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00058b53) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00058b53) list_double_large_graphic_phob2_cc_pane_t

0xd210,	// (0x00055e01) list_highlight_pane_cp025_ParamLimits

0xd210,	// (0x00055e01) list_highlight_pane_cp025

0xec65,	// (0x00057856) bg_button_pane_cp033_ParamLimits

0xd115,	// (0x00055d06) phob2_cc_button_pane_g1_ParamLimits

0xd121,	// (0x00055d12) phob2_cc_button_pane_t1_ParamLimits

0xd136,	// (0x00055d27) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00058b43) phob2_cc_button_pane_t_ParamLimits

0x4908,	// (0x0004d4f9) popup_wgtman_window

0x15f1,	// (0x0004a1e2) scroll_pane_cp038

0xcc91,	// (0x00055882) wgtman_btn_pane_cp_01_ParamLimits

0xcc91,	// (0x00055882) wgtman_btn_pane_cp_01

0xd21e,	// (0x00055e0f) wgtman_content_pane

0xd227,	// (0x00055e18) wgtman_heading_pane

0x4653,	// (0x0004d244) bg_heading_pane_cp02

0xd230,	// (0x00055e21) wgtman_heading_pane_g1

0xd238,	// (0x00055e29) wgtman_heading_pane_t1

0xd246,	// (0x00055e37) scroll_pane_cp036

0xd24e,	// (0x00055e3f) wgtman_list_pane

0xd256,	// (0x00055e47) wgtman_list_pane_t1_ParamLimits

0xd256,	// (0x00055e47) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
