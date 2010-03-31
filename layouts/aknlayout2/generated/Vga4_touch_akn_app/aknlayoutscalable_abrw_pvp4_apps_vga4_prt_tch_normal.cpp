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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001eb23 };

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
0x2127,	// (0x00020c4a) Screen

0x2133,	// (0x00020c56) application_window

0x2173,	// (0x00020c96) area_bottom_pane_ParamLimits

0x2173,	// (0x00020c96) area_bottom_pane

0x21a8,	// (0x00020ccb) area_top_pane_ParamLimits

0x21a8,	// (0x00020ccb) area_top_pane

0x9cb3,	// (0x000287d6) call_video_uplink_pane_ParamLimits

0x9cb3,	// (0x000287d6) call_video_uplink_pane

0x2237,	// (0x00020d5a) main_pane_ParamLimits

0x2237,	// (0x00020d5a) main_pane

0xc3d1,	// (0x0002aef4) context_pane

0x55c5,	// (0x000240e8) navi_pane

0x55e9,	// (0x0002410c) popup_cale_events_window_ParamLimits

0x55e9,	// (0x0002410c) popup_cale_events_window

0xc3e4,	// (0x0002af07) popup_mup_playback_window

0x5601,	// (0x00024124) signal_pane

0xa404,	// (0x00028f27) main_browser_pane

0xaf22,	// (0x00029a45) main_burst_pane

0x5477,	// (0x00023f9a) main_calc_pane

0xc374,	// (0x0002ae97) main_cale_day_pane

0x27b0,	// (0x000212d3) main_cale_month_pane

0xc374,	// (0x0002ae97) main_cale_week_pane

0xaf22,	// (0x00029a45) main_call_pane

0xa0e4,	// (0x00028c07) main_call_poc_pane

0xaf22,	// (0x00029a45) main_camera_pane

0xaf22,	// (0x00029a45) main_chi_dic_pane

0xadaa,	// (0x000298cd) main_clock_pane

0xa0e4,	// (0x00028c07) main_fmradio_pane

0xaf22,	// (0x00029a45) main_graph_messa_pane

0xa0e4,	// (0x00028c07) main_help_pane

0xa404,	// (0x00028f27) main_im_pane

0xa33f,	// (0x00028e62) main_image_pane_ParamLimits

0xa33f,	// (0x00028e62) main_image_pane

0xa0e4,	// (0x00028c07) main_location2_pane

0xaf22,	// (0x00029a45) main_location_pane

0xa33f,	// (0x00028e62) main_messa_pane

0xa0e4,	// (0x00028c07) main_mp2_pane

0xaf22,	// (0x00029a45) main_mp_pane

0xa0e4,	// (0x00028c07) main_msg_pane

0xa0e4,	// (0x00028c07) main_mup_eq_pane

0xa0e4,	// (0x00028c07) main_mup_pane

0xa404,	// (0x00028f27) main_notes_pane

0xa0e4,	// (0x00028c07) main_pec_pane

0xa0e4,	// (0x00028c07) main_phob_pane

0xa0e4,	// (0x00028c07) main_pinb_pane

0xa0e4,	// (0x00028c07) main_postcard_pane

0xa0e4,	// (0x00028c07) main_qdial_pane

0xaf22,	// (0x00029a45) main_skin_pane

0xa0e4,	// (0x00028c07) main_smil2_pane

0xaf22,	// (0x00029a45) main_smil_pane

0xaf22,	// (0x00029a45) main_video_pane

0xaf22,	// (0x00029a45) main_video_tele_pane

0xa33f,	// (0x00028e62) main_viewer_pane_ParamLimits

0xa33f,	// (0x00028e62) main_viewer_pane

0xaf22,	// (0x00029a45) main_vorec_pane

0x54af,	// (0x00023fd2) popup_blid_sat_info_window_ParamLimits

0x54af,	// (0x00023fd2) popup_blid_sat_info_window

0x54c9,	// (0x00023fec) popup_dyc_status_message_window_ParamLimits

0x54c9,	// (0x00023fec) popup_dyc_status_message_window

0x54d9,	// (0x00023ffc) popup_grid_large_graphic_window_ParamLimits

0x54d9,	// (0x00023ffc) popup_grid_large_graphic_window

0x5551,	// (0x00024074) popup_loc_request_window_ParamLimits

0x5551,	// (0x00024074) popup_loc_request_window

0x5599,	// (0x000240bc) popup_wml_address_window_ParamLimits

0x5599,	// (0x000240bc) popup_wml_address_window

0x534f,	// (0x00023e72) call_muted_g1

0x500e,	// (0x00023b31) popup_call_audio_conf_window_ParamLimits

0x500e,	// (0x00023b31) popup_call_audio_conf_window

0x535f,	// (0x00023e82) popup_call_audio_first_window_ParamLimits

0x535f,	// (0x00023e82) popup_call_audio_first_window

0x539f,	// (0x00023ec2) popup_call_audio_in_window_ParamLimits

0x539f,	// (0x00023ec2) popup_call_audio_in_window

0x53c3,	// (0x00023ee6) popup_call_audio_out_window_ParamLimits

0x53c3,	// (0x00023ee6) popup_call_audio_out_window

0x53e5,	// (0x00023f08) popup_call_audio_second_window_ParamLimits

0x53e5,	// (0x00023f08) popup_call_audio_second_window

0x5415,	// (0x00023f38) popup_call_audio_wait_window_ParamLimits

0x5415,	// (0x00023f38) popup_call_audio_wait_window

0x5436,	// (0x00023f59) popup_number_entry_window_ParamLimits

0x5436,	// (0x00023f59) popup_number_entry_window

0x9cd1,	// (0x000287f4) bg_popup_call_pane_cp05_ParamLimits

0x9cd1,	// (0x000287f4) bg_popup_call_pane_cp05

0x9cf1,	// (0x00028814) popup_number_entry_window_t1

0x9d04,	// (0x00028827) popup_number_entry_window_t2

0x9d16,	// (0x00028839) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0002dbf0) popup_number_entry_window_t

0x9d28,	// (0x0002884b) text_title_cp2

0x9d3b,	// (0x0002885e) bg_popup_call_pane_cp_ParamLimits

0x9d3b,	// (0x0002885e) bg_popup_call_pane_cp

0x9d49,	// (0x0002886c) call_thumbnail_pane

0x9d51,	// (0x00028874) popup_call_audio_in_window_g1_ParamLimits

0x9d51,	// (0x00028874) popup_call_audio_in_window_g1

0x9d5d,	// (0x00028880) popup_call_audio_in_window_g2_ParamLimits

0x9d5d,	// (0x00028880) popup_call_audio_in_window_g2

0x9d69,	// (0x0002888c) popup_call_audio_in_window_g3_ParamLimits

0x9d69,	// (0x0002888c) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0002dbf9) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0002dbf9) popup_call_audio_in_window_g

0x9d75,	// (0x00028898) popup_call_audio_in_window_t1_ParamLimits

0x9d75,	// (0x00028898) popup_call_audio_in_window_t1

0x9d91,	// (0x000288b4) popup_call_audio_in_window_t2_ParamLimits

0x9d91,	// (0x000288b4) popup_call_audio_in_window_t2

0x9dad,	// (0x000288d0) popup_call_audio_in_window_t3_ParamLimits

0x9dad,	// (0x000288d0) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0002dc00) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0002dc00) popup_call_audio_in_window_t

0x9d3b,	// (0x0002885e) bg_popup_call_pane_cp01_ParamLimits

0x9d3b,	// (0x0002885e) bg_popup_call_pane_cp01

0x9d49,	// (0x0002886c) call_thumbnail_pane_cp02

0x9dc0,	// (0x000288e3) call_type_pane_cp022

0x9dc8,	// (0x000288eb) popup_call_audio_out_window_g1_ParamLimits

0x9dc8,	// (0x000288eb) popup_call_audio_out_window_g1

0x9dda,	// (0x000288fd) popup_call_audio_out_window_g2_ParamLimits

0x9dda,	// (0x000288fd) popup_call_audio_out_window_g2

0x9de6,	// (0x00028909) popup_call_audio_out_window_g3_ParamLimits

0x9de6,	// (0x00028909) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0002dc07) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0002dc07) popup_call_audio_out_window_g

0x9df8,	// (0x0002891b) popup_call_audio_out_window_t1_ParamLimits

0x9df8,	// (0x0002891b) popup_call_audio_out_window_t1

0x9e10,	// (0x00028933) popup_call_audio_out_window_t2_ParamLimits

0x9e10,	// (0x00028933) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0002dc0e) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0002dc0e) popup_call_audio_out_window_t

0x9e25,	// (0x00028948) bg_popup_call_pane_ParamLimits

0x9e25,	// (0x00028948) bg_popup_call_pane

0x243b,	// (0x00020f5e) call_thumbnail_pane_cp_ParamLimits

0x243b,	// (0x00020f5e) call_thumbnail_pane_cp

0x9ea9,	// (0x000289cc) call_type_pane_cp01_ParamLimits

0x9ea9,	// (0x000289cc) call_type_pane_cp01

0x9eed,	// (0x00028a10) popup_call_audio_first_window_g1_ParamLimits

0x9eed,	// (0x00028a10) popup_call_audio_first_window_g1

0x9f39,	// (0x00028a5c) popup_call_audio_first_window_g2_ParamLimits

0x9f39,	// (0x00028a5c) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0002dc13) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0002dc13) popup_call_audio_first_window_g

0x9f7d,	// (0x00028aa0) popup_call_audio_first_window_t1_ParamLimits

0x9f7d,	// (0x00028aa0) popup_call_audio_first_window_t1

0xa029,	// (0x00028b4c) popup_call_audio_first_window_t4_ParamLimits

0xa029,	// (0x00028b4c) popup_call_audio_first_window_t4

0xa0b5,	// (0x00028bd8) popup_call_audio_first_window_t5_ParamLimits

0xa0b5,	// (0x00028bd8) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0002dc18) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0002dc18) popup_call_audio_first_window_t

0xa0e4,	// (0x00028c07) bg_popup_call_pane_cp02

0xa0ee,	// (0x00028c11) call_type_pane_cp023

0xa0f6,	// (0x00028c19) popup_call_audio_wait_window_g1

0xa0fe,	// (0x00028c21) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0002dc1f) popup_call_audio_wait_window_g

0xa106,	// (0x00028c29) popup_call_audio_wait_window_t3

0xa114,	// (0x00028c37) bg_popup_call_pane_cp03_ParamLimits

0xa114,	// (0x00028c37) bg_popup_call_pane_cp03

0xa174,	// (0x00028c97) call_thumbnail_pane_cp011_ParamLimits

0xa174,	// (0x00028c97) call_thumbnail_pane_cp011

0xa180,	// (0x00028ca3) call_type_pane_cp034_ParamLimits

0xa180,	// (0x00028ca3) call_type_pane_cp034

0xa1bc,	// (0x00028cdf) popup_call_audio_second_window_g1_ParamLimits

0xa1bc,	// (0x00028cdf) popup_call_audio_second_window_g1

0xa1f8,	// (0x00028d1b) popup_call_audio_second_window_g2_ParamLimits

0xa1f8,	// (0x00028d1b) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0002dc24) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0002dc24) popup_call_audio_second_window_g

0xa234,	// (0x00028d57) popup_call_audio_second_window_t1_ParamLimits

0xa234,	// (0x00028d57) popup_call_audio_second_window_t1

0xa2b5,	// (0x00028dd8) popup_call_audio_second_window_t2_ParamLimits

0xa2b5,	// (0x00028dd8) popup_call_audio_second_window_t2

0xa2eb,	// (0x00028e0e) popup_call_audio_second_window_t3_ParamLimits

0xa2eb,	// (0x00028e0e) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0002dc29) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0002dc29) popup_call_audio_second_window_t

0xa0e4,	// (0x00028c07) bg_popup_call_pane_cp04

0xa321,	// (0x00028e44) list_conf_pane

0xa329,	// (0x00028e4c) popup_call_audio_conf_window_t1

0xa337,	// (0x00028e5a) call_thumbnail_pane_g1

0xa33f,	// (0x00028e62) bg_pinb_pane_ParamLimits

0xa33f,	// (0x00028e62) bg_pinb_pane

0xa34d,	// (0x00028e70) find_pinb_pane

0xa356,	// (0x00028e79) listscroll_pinb_pane_ParamLimits

0xa356,	// (0x00028e79) listscroll_pinb_pane

0xa365,	// (0x00028e88) pinb_bg_pane_g1

0x245f,	// (0x00020f82) pinb_bg_pane_g2

0x246b,	// (0x00020f8e) pinb_bg_pane_g3

0x2477,	// (0x00020f9a) pinb_bg_pane_g4

0x2483,	// (0x00020fa6) pinb_bg_pane_g5

0x248f,	// (0x00020fb2) pinb_bg_pane_g6

0x249a,	// (0x00020fbd) pinb_bg_pane_g7

0x24a5,	// (0x00020fc8) pinb_bg_pane_g8

0x24b0,	// (0x00020fd3) pinb_bg_pane_g9

0x24ba,	// (0x00020fdd) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0002dc30) pinb_bg_pane_g

0x24d7,	// (0x00020ffa) grid_pinb_pane

0x24e2,	// (0x00021005) list_pinb_pane

0x24ed,	// (0x00021010) scroll_pane_cp01_ParamLimits

0x24ed,	// (0x00021010) scroll_pane_cp01

0xa36f,	// (0x00028e92) find_pinb_pane_g1_ParamLimits

0xa36f,	// (0x00028e92) find_pinb_pane_g1

0xa387,	// (0x00028eaa) find_pinb_pane_t1

0xa399,	// (0x00028ebc) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0002dc4a) find_pinb_pane_t

0xa3ae,	// (0x00028ed1) input_focus_pane_cp01_ParamLimits

0xa3ae,	// (0x00028ed1) input_focus_pane_cp01

0x24ff,	// (0x00021022) cell_pinb_pane_ParamLimits

0x24ff,	// (0x00021022) cell_pinb_pane

0x2524,	// (0x00021047) cell_pinb_pane_g1_ParamLimits

0x2524,	// (0x00021047) cell_pinb_pane_g1

0x2539,	// (0x0002105c) cell_pinb_pane_g2_ParamLimits

0x2539,	// (0x0002105c) cell_pinb_pane_g2

0xa3ba,	// (0x00028edd) cell_pinb_pane_g3_ParamLimits

0xa3ba,	// (0x00028edd) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0002dc4f) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0002dc4f) cell_pinb_pane_g

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp01

0x2545,	// (0x00021068) list_pinb_item_pane_ParamLimits

0x2545,	// (0x00021068) list_pinb_item_pane

0xa0e4,	// (0x00028c07) list_highlight_pane_cp02

0x2563,	// (0x00021086) list_pinb_item_pane_g1_ParamLimits

0x2563,	// (0x00021086) list_pinb_item_pane_g1

0x2570,	// (0x00021093) list_pinb_item_pane_g2_ParamLimits

0x2570,	// (0x00021093) list_pinb_item_pane_g2

0x257c,	// (0x0002109f) list_pinb_item_pane_g3_ParamLimits

0x257c,	// (0x0002109f) list_pinb_item_pane_g3

0x258d,	// (0x000210b0) list_pinb_item_pane_g4_ParamLimits

0x258d,	// (0x000210b0) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0002dc56) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0002dc56) list_pinb_item_pane_g

0x2599,	// (0x000210bc) list_pinb_item_pane_t1_ParamLimits

0x2599,	// (0x000210bc) list_pinb_item_pane_t1

0x0b4b,	// (0x0001f66e) calc_display_pane

0x0b69,	// (0x0001f68c) calc_paper_pane

0x0b85,	// (0x0001f6a8) grid_calc_pane

0xa0e4,	// (0x00028c07) bg_list_pane_cp01

0x25b0,	// (0x000210d3) clock_g1

0x25b8,	// (0x000210db) clock_g2

0x0001,

0xf13c,	// (0x0002dc5f) clock_g

0x25c2,	// (0x000210e5) clock_t1_ParamLimits

0x25c2,	// (0x000210e5) clock_t1

0x25d7,	// (0x000210fa) clock_t2_ParamLimits

0x25d7,	// (0x000210fa) clock_t2

0x25e9,	// (0x0002110c) clock_t3_ParamLimits

0x25e9,	// (0x0002110c) clock_t3

0x25fb,	// (0x0002111e) clock_t4_ParamLimits

0x25fb,	// (0x0002111e) clock_t4

0x260d,	// (0x00021130) clock_t5_ParamLimits

0x260d,	// (0x00021130) clock_t5

0x2622,	// (0x00021145) clock_t6_ParamLimits

0x2622,	// (0x00021145) clock_t6

0x2634,	// (0x00021157) clock_t7_ParamLimits

0x2634,	// (0x00021157) clock_t7

0x2646,	// (0x00021169) clock_t8_ParamLimits

0x2646,	// (0x00021169) clock_t8

0x265c,	// (0x0002117f) clock_t9_ParamLimits

0x265c,	// (0x0002117f) clock_t9

0x0008,

0xf141,	// (0x0002dc64) clock_t_ParamLimits

0xf141,	// (0x0002dc64) clock_t

0xa3c6,	// (0x00028ee9) popup_clock_analogue_window_cp02

0xa3c6,	// (0x00028ee9) popup_clock_digital_window_cp01

0xa3ce,	// (0x00028ef1) listscroll_help_pane

0xa0e4,	// (0x00028c07) phob_pre_status_pane

0xa3d8,	// (0x00028efb) grid_qdial_pane

0xa33f,	// (0x00028e62) listscroll_mce_pane

0xa33f,	// (0x00028e62) bg_notes_pane

0xa3e2,	// (0x00028f05) list_notes_pane

0x2672,	// (0x00021195) scroll_pane_cp06

0xa3f0,	// (0x00028f13) bg_calc_paper_pane

0x0bbb,	// (0x0001f6de) list_calc_pane

0xa404,	// (0x00028f27) bg_calc_display_pane

0x0bd5,	// (0x0001f6f8) calc_display_pane_t1

0x0bea,	// (0x0001f70d) calc_display_pane_t2

0x0bff,	// (0x0001f722) calc_display_pane_t3

0x0002,

0xf154,	// (0x0002dc77) calc_display_pane_t

0x0c11,	// (0x0001f734) cell_calc_pane_ParamLimits

0x0c11,	// (0x0001f734) cell_calc_pane

0xa410,	// (0x00028f33) bg_calc_paper_pane_g1

0xa41c,	// (0x00028f3f) bg_calc_paper_pane_g2

0xa428,	// (0x00028f4b) bg_calc_paper_pane_g3

0xa434,	// (0x00028f57) bg_calc_paper_pane_g4

0xa440,	// (0x00028f63) bg_calc_paper_pane_g5

0x2681,	// (0x000211a4) bg_calc_paper_pane_g6

0x2692,	// (0x000211b5) bg_calc_paper_pane_g7

0x26a3,	// (0x000211c6) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0002dc7e) bg_calc_paper_pane_g

0x26b6,	// (0x000211d9) calc_bg_paper_pane_g9

0x26c9,	// (0x000211ec) list_calc_item_pane_ParamLimits

0x26c9,	// (0x000211ec) list_calc_item_pane

0xa44c,	// (0x00028f6f) list_calc_item_pane_g1

0x0c40,	// (0x0001f763) list_calc_item_pane_t1_ParamLimits

0x0c40,	// (0x0001f763) list_calc_item_pane_t1

0x0c52,	// (0x0001f775) list_calc_item_pane_t2_ParamLimits

0x0c52,	// (0x0001f775) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0002dc8f) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0002dc8f) list_calc_item_pane_t

0xa459,	// (0x00028f7c) cell_calc_pane_g1

0xa463,	// (0x00028f86) grid_highlight_pane_cp02

0xa485,	// (0x00028fa8) bg_calc_display_pane_g1

0x0c82,	// (0x0001f7a5) bg_calc_display_pane_g2

0xa48e,	// (0x00028fb1) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0002dc99) bg_calc_display_pane_g

0x0c8c,	// (0x0001f7af) cell_qdial_pane_ParamLimits

0x0c8c,	// (0x0001f7af) cell_qdial_pane

0x26ea,	// (0x0002120d) cell_qdial_pane_g1_ParamLimits

0x26ea,	// (0x0002120d) cell_qdial_pane_g1

0x26f7,	// (0x0002121a) cell_qdial_pane_g2_ParamLimits

0x26f7,	// (0x0002121a) cell_qdial_pane_g2

0xa497,	// (0x00028fba) cell_qdial_pane_g3_ParamLimits

0xa497,	// (0x00028fba) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0002dca0) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0002dca0) cell_qdial_pane_g

0x2715,	// (0x00021238) cell_qdial_pane_t1_ParamLimits

0x2715,	// (0x00021238) cell_qdial_pane_t1

0x272d,	// (0x00021250) cell_qdial_pane_t2_ParamLimits

0x272d,	// (0x00021250) cell_qdial_pane_t2

0x2740,	// (0x00021263) cell_qdial_pane_t3_ParamLimits

0x2740,	// (0x00021263) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0002dca9) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0002dca9) cell_qdial_pane_t

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp04

0xa4a3,	// (0x00028fc6) thumbnail_qdial_pane_ParamLimits

0xa4a3,	// (0x00028fc6) thumbnail_qdial_pane

0xa4ff,	// (0x00029022) list_help_pane

0xa508,	// (0x0002902b) scroll_pane_cp02

0x2753,	// (0x00021276) help_list_pane_t1_ParamLimits

0x2753,	// (0x00021276) help_list_pane_t1

0x0ca2,	// (0x0001f7c5) bg_notes_pane_g2

0x0caa,	// (0x0001f7cd) bg_notes_pane_g3

0x0cb2,	// (0x0001f7d5) notes_bg_pane_g1

0x0cba,	// (0x0001f7dd) notes_bg_pane_g4

0x0cc2,	// (0x0001f7e5) notes_bg_pane_g5

0x0cca,	// (0x0001f7ed) notes_bg_pane_g6

0x0cd2,	// (0x0001f7f5) notes_bg_pane_g7

0x0cda,	// (0x0001f7fd) notes_bg_pane_g8

0x0ce2,	// (0x0001f805) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0002dcc7) notes_bg_pane_g

0x277a,	// (0x0002129d) list_notes_text_pane_ParamLimits

0x277a,	// (0x0002129d) list_notes_text_pane

0xa511,	// (0x00029034) list_notes_text_pane_g1

0x27a2,	// (0x000212c5) list_notes_text_pane_t1

0x27b0,	// (0x000212d3) listscroll_cale_week_pane

0x27e6,	// (0x00021309) bg_cale_heading_pane

0xa52b,	// (0x0002904e) bg_cale_pane_cp01

0x280f,	// (0x00021332) cale_week_corner_pane

0x282e,	// (0x00021351) cale_week_day_heading_pane

0x285c,	// (0x0002137f) cale_week_scroll_pane_g1

0x2880,	// (0x000213a3) cale_week_scroll_pane_g2

0x2898,	// (0x000213bb) cale_week_scroll_pane_g3

0x28b0,	// (0x000213d3) cale_week_scroll_pane_g4

0x28c8,	// (0x000213eb) cale_week_scroll_pane_g5

0x28e0,	// (0x00021403) cale_week_scroll_pane_g6

0x2900,	// (0x00021423) cale_week_scroll_pane_g7

0x2920,	// (0x00021443) cale_week_scroll_pane_g8

0x2940,	// (0x00021463) cale_week_scroll_pane_g9

0x295d,	// (0x00021480) cale_week_scroll_pane_g10

0x297a,	// (0x0002149d) cale_week_scroll_pane_g11

0x2997,	// (0x000214ba) cale_week_scroll_pane_g12

0x29b4,	// (0x000214d7) cale_week_scroll_pane_g13

0x29d9,	// (0x000214fc) cale_week_scroll_pane_g14

0x2a02,	// (0x00021525) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0002dcd6) cale_week_scroll_pane_g

0x2a2b,	// (0x0002154e) cale_week_time_pane

0x2a4b,	// (0x0002156e) grid_cale_week_pane

0xa55b,	// (0x0002907e) scroll_pane_cp08

0x2a7e,	// (0x000215a1) cell_cale_week_pane_ParamLimits

0x2a7e,	// (0x000215a1) cell_cale_week_pane

0x2b09,	// (0x0002162c) cale_week_day_heading_pane_t1

0x2b51,	// (0x00021674) cale_week_day_heading_pane_t2

0x2b9e,	// (0x000216c1) cale_week_day_heading_pane_t3

0x2beb,	// (0x0002170e) cale_week_day_heading_pane_t4

0x2c38,	// (0x0002175b) cale_week_day_heading_pane_t5

0x2c85,	// (0x000217a8) cale_week_day_heading_pane_t6

0x2cd2,	// (0x000217f5) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0002dcf5) cale_week_day_heading_pane_t

0xa57d,	// (0x000290a0) bg_cale_side_pane

0x0cea,	// (0x0001f80d) cale_week_time_pane_t1

0x0d2e,	// (0x0001f851) cale_week_time_pane_t2

0x0d72,	// (0x0001f895) cale_week_time_pane_t3

0x0db6,	// (0x0001f8d9) cale_week_time_pane_t4

0x0dfa,	// (0x0001f91d) cale_week_time_pane_t5

0x0e3e,	// (0x0001f961) cale_week_time_pane_t6

0x0e82,	// (0x0001f9a5) cale_week_time_pane_t7

0x0ece,	// (0x0001f9f1) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0002dd04) cale_week_time_pane_t

0x2d1a,	// (0x0002183d) cell_cale_week_pane_g2

0x2d39,	// (0x0002185c) cell_cale_week_pane_g3_ParamLimits

0x2d39,	// (0x0002185c) cell_cale_week_pane_g3

0xa58b,	// (0x000290ae) grid_highlight_pane_cp07

0xa593,	// (0x000290b6) listscroll_gms_pane

0xa59d,	// (0x000290c0) grid_gms_pane

0xa5a6,	// (0x000290c9) listscroll_gms_pane_g1

0xa5ae,	// (0x000290d1) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0002dd15) listscroll_gms_pane_g

0x2d51,	// (0x00021874) scroll_pane_cp010

0x2d5c,	// (0x0002187f) cell_gms_pane_ParamLimits

0x2d5c,	// (0x0002187f) cell_gms_pane

0x2d6f,	// (0x00021892) cell_gms_pane_g1

0xa5b6,	// (0x000290d9) cell_gms_pane_g2

0xa5be,	// (0x000290e1) cell_gms_pane_g3

0xa5c7,	// (0x000290ea) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0002dd1a) cell_gms_pane_g

0xa5d0,	// (0x000290f3) grid_highlight_pane_cp09

0x52f7,	// (0x00023e1a) phob_pre_status_pane_g1

0x52ff,	// (0x00023e22) phob_pre_status_pane_g2

0x5307,	// (0x00023e2a) phob_pre_status_pane_g3

0x530f,	// (0x00023e32) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0002e109) phob_pre_status_pane_g

0x531f,	// (0x00023e42) phob_pre_status_pane_t1

0x532f,	// (0x00023e52) phob_pre_status_pane_t2

0x533f,	// (0x00023e62) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0002e114) phob_pre_status_pane_t

0xa0e4,	// (0x00028c07) bg_list_pane_cp05

0x0f24,	// (0x0001fa47) grid_vorec_pane

0x0f30,	// (0x0001fa53) vorec_t1

0x0f3e,	// (0x0001fa61) vorec_t2

0x0f4c,	// (0x0001fa6f) vorec_t3

0x0f5a,	// (0x0001fa7d) vorec_t4

0x0f68,	// (0x0001fa8b) vorec_t5

0x0f76,	// (0x0001fa99) vorec_t6

0x0006,

0xf200,	// (0x0002dd23) vorec_t

0x0f92,	// (0x0001fab5) wait_bar_pane_cp01

0x2d77,	// (0x0002189a) cell_vorec_pane_ParamLimits

0x2d77,	// (0x0002189a) cell_vorec_pane

0x0f9a,	// (0x0001fabd) cell_vorec_pane_g1

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp05

0x2d9a,	// (0x000218bd) cams_zoom_pane

0x2da6,	// (0x000218c9) image_vga_pane

0x2db5,	// (0x000218d8) main_camera_pane_g1

0x2dc3,	// (0x000218e6) main_camera_pane_g2

0x2dcf,	// (0x000218f2) main_camera_pane_g3

0x2ddd,	// (0x00021900) main_camera_pane_g4

0x2deb,	// (0x0002190e) main_camera_pane_g5

0x2df9,	// (0x0002191c) main_camera_pane_g6

0x2e07,	// (0x0002192a) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0002dd32) main_camera_pane_g

0x2e15,	// (0x00021938) main_camera_pane_t1

0x2e27,	// (0x0002194a) main_camera_pane_t2

0x0001,

0xf220,	// (0x0002dd43) main_camera_pane_t

0x2e4a,	// (0x0002196d) cams_zoom_pane_cp_ParamLimits

0x2e4a,	// (0x0002196d) cams_zoom_pane_cp

0x2e6e,	// (0x00021991) image_cif_pane_ParamLimits

0x2e6e,	// (0x00021991) image_cif_pane

0x2e8c,	// (0x000219af) image_subqcif_pane

0x2e96,	// (0x000219b9) main_video_pane_g1_ParamLimits

0x2e96,	// (0x000219b9) main_video_pane_g1

0x2eb6,	// (0x000219d9) main_video_pane_g2_ParamLimits

0x2eb6,	// (0x000219d9) main_video_pane_g2

0x2ee6,	// (0x00021a09) main_video_pane_g3_ParamLimits

0x2ee6,	// (0x00021a09) main_video_pane_g3

0x2f0f,	// (0x00021a32) main_video_pane_g4_ParamLimits

0x2f0f,	// (0x00021a32) main_video_pane_g4

0x2f38,	// (0x00021a5b) main_video_pane_g5_ParamLimits

0x2f38,	// (0x00021a5b) main_video_pane_g5

0xa5f2,	// (0x00029115) main_video_pane_g6_ParamLimits

0xa5f2,	// (0x00029115) main_video_pane_g6

0x0006,

0xf225,	// (0x0002dd48) main_video_pane_g_ParamLimits

0xf225,	// (0x0002dd48) main_video_pane_g

0x2f5a,	// (0x00021a7d) main_video_pane_t1_ParamLimits

0x2f5a,	// (0x00021a7d) main_video_pane_t1

0xa60c,	// (0x0002912f) cams_zoom_pane_g1

0xa615,	// (0x00029138) cams_zoom_pane_g2

0xa61e,	// (0x00029141) cams_zoom_pane_g3

0xa627,	// (0x0002914a) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0002dd57) cams_zoom_pane_g

0x2fa4,	// (0x00021ac7) grid_cams_pane

0x2fb2,	// (0x00021ad5) linegrid_cams_pane

0x2fbe,	// (0x00021ae1) cell_cams_pane_ParamLimits

0x2fbe,	// (0x00021ae1) cell_cams_pane

0xa630,	// (0x00029153) cams_burst_image_pane

0xa638,	// (0x0002915b) cell_cams_pane_g1

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp03

0xa459,	// (0x00028f7c) mp_bg_pane_g1

0xa0e4,	// (0x00028c07) bg_list_pane_cp03

0xc297,	// (0x0002adba) bg_mp_pane

0xc29f,	// (0x0002adc2) grid_mp_pane

0xc2a7,	// (0x0002adca) media_player_g1

0xc2b1,	// (0x0002add4) media_player_t1

0xc2bf,	// (0x0002ade2) media_player_t2

0xc2cd,	// (0x0002adf0) media_player_t3

0xc2db,	// (0x0002adfe) media_player_t4

0xc2e9,	// (0x0002ae0c) media_player_t5

0xc2f7,	// (0x0002ae1a) media_player_t6

0xc305,	// (0x0002ae28) media_player_t7

0x0006,

0xf5d0,	// (0x0002e0f3) media_player_t

0xc313,	// (0x0002ae36) wait_bar_pane_cp02

0xf5b5,	// (0x0002e0d8) main_usb_pane_t

0x52ee,	// (0x00023e11) cell_mp_pane

0xa459,	// (0x00028f7c) cell_mp_pane_g1

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp06

0xa640,	// (0x00029163) grid_skin_colour_pane

0xa648,	// (0x0002916b) list_highlight_pane_cp03

0x30ea,	// (0x00021c0d) skin_g1

0xa650,	// (0x00029173) skin_t1

0xa65f,	// (0x00029182) skin_t2

0x0001,

0xf269,	// (0x0002dd8c) skin_t

0x30f4,	// (0x00021c17) cell_skin_colour_pane_ParamLimits

0x30f4,	// (0x00021c17) cell_skin_colour_pane

0xa66d,	// (0x00029190) cell_skin_colour_pane_g1

0x3174,	// (0x00021c97) call_video_g1_ParamLimits

0x3174,	// (0x00021c97) call_video_g1

0x3184,	// (0x00021ca7) call_video_g2_ParamLimits

0x3184,	// (0x00021ca7) call_video_g2

0x0001,

0xf26e,	// (0x0002dd91) call_video_g_ParamLimits

0xf26e,	// (0x0002dd91) call_video_g

0x31d4,	// (0x00021cf7) call_video_uplink_pane_cp1_ParamLimits

0x31d4,	// (0x00021cf7) call_video_uplink_pane_cp1

0xa67f,	// (0x000291a2) call_video_uplink_pane_cp2

0x32a2,	// (0x00021dc5) video_down_crop_pane_ParamLimits

0x32a2,	// (0x00021dc5) video_down_crop_pane

0x3394,	// (0x00021eb7) video_down_pane_ParamLimits

0x3394,	// (0x00021eb7) video_down_pane

0xa687,	// (0x000291aa) video_down_subqcif_pane_ParamLimits

0xa687,	// (0x000291aa) video_down_subqcif_pane

0xa6a1,	// (0x000291c4) video_down_subqcif_pane_cp_ParamLimits

0xa6a1,	// (0x000291c4) video_down_subqcif_pane_cp

0xa6c9,	// (0x000291ec) im_reading_pane_ParamLimits

0xa6c9,	// (0x000291ec) im_reading_pane

0x34b1,	// (0x00021fd4) im_writing_pane_ParamLimits

0x34b1,	// (0x00021fd4) im_writing_pane

0x34cf,	// (0x00021ff2) im_reading_pane_t1

0xa6e3,	// (0x00029206) list_im_pane

0xa6f4,	// (0x00029217) scroll_pane_cp07

0x3511,	// (0x00022034) im_writing_pane_t1_ParamLimits

0x3511,	// (0x00022034) im_writing_pane_t1

0xa70d,	// (0x00029230) im_writing_pane_t2_ParamLimits

0xa70d,	// (0x00029230) im_writing_pane_t2

0x0001,

0xf278,	// (0x0002dd9b) im_writing_pane_t_ParamLimits

0xf278,	// (0x0002dd9b) im_writing_pane_t

0xa0e4,	// (0x00028c07) input_focus_pane_cp04

0xa0e4,	// (0x00028c07) input_focus_pane_cp05

0x3523,	// (0x00022046) list_im_single_pane_ParamLimits

0x3523,	// (0x00022046) list_im_single_pane

0x353c,	// (0x0002205f) list_single_im_pane_t1

0x52b2,	// (0x00023dd5) blid_accuracy_pane

0x52ba,	// (0x00023ddd) blid_compass_pane

0x52c4,	// (0x00023de7) main_location_t1

0x52d2,	// (0x00023df5) main_location_t2

0x52e0,	// (0x00023e03) main_location_t3

0x0002,

0xf5df,	// (0x0002e102) main_location_t

0xa0e4,	// (0x00028c07) aid_levels_location

0xa459,	// (0x00028f7c) blid_accuracy_pane_g1

0xa459,	// (0x00028f7c) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0002ddfd) blid_accuracy_pane_g

0xa755,	// (0x00029278) wml_content_pane

0xa793,	// (0x000292b6) wml_button_pane_ParamLimits

0xa793,	// (0x000292b6) wml_button_pane

0x354b,	// (0x0002206e) wml_list_single_large_pane_ParamLimits

0x354b,	// (0x0002206e) wml_list_single_large_pane

0x356d,	// (0x00022090) wml_list_single_medium_pane_ParamLimits

0x356d,	// (0x00022090) wml_list_single_medium_pane

0x3590,	// (0x000220b3) wml_list_single_small_pane_ParamLimits

0x3590,	// (0x000220b3) wml_list_single_small_pane

0xa7a7,	// (0x000292ca) wml_selection_box_pane_ParamLimits

0xa7a7,	// (0x000292ca) wml_selection_box_pane

0xa7ba,	// (0x000292dd) wml_list_single_pane_t1

0xa7c9,	// (0x000292ec) wml_list_single_medium_pane_t1

0xa7d8,	// (0x000292fb) wml_list_single_large_pane_t1

0xa7e7,	// (0x0002930a) input_focus_pane_cp02_ParamLimits

0xa7e7,	// (0x0002930a) input_focus_pane_cp02

0xa7fa,	// (0x0002931d) wml_selection_box_pane_g1

0xa803,	// (0x00029326) wml_selection_box_pane_t1_ParamLimits

0xa803,	// (0x00029326) wml_selection_box_pane_t1

0xa33f,	// (0x00028e62) bg_wml_button_pane_ParamLimits

0xa33f,	// (0x00028e62) bg_wml_button_pane

0xa81b,	// (0x0002933e) wml_button_pane_g1

0xa823,	// (0x00029346) wml_button_pane_t1

0xa81b,	// (0x0002933e) wml_button_bg_pane_g1

0xa833,	// (0x00029356) wml_button_bg_pane_g2

0xa83b,	// (0x0002935e) wml_button_bg_pane_g3

0xa843,	// (0x00029366) wml_button_bg_pane_g4

0xa84b,	// (0x0002936e) wml_button_bg_pane_g5

0xa853,	// (0x00029376) wml_button_bg_pane_g6

0xa85b,	// (0x0002937e) wml_button_bg_pane_g7

0xa863,	// (0x00029386) wml_button_bg_pane_g8

0xa86b,	// (0x0002938e) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0002dda0) wml_button_bg_pane_g

0x35b8,	// (0x000220db) bg_list_pane_cp02

0xa873,	// (0x00029396) mce_header_pane_ParamLimits

0xa873,	// (0x00029396) mce_header_pane

0xa889,	// (0x000293ac) mce_icon_pane

0xa889,	// (0x000293ac) mce_image_pane

0xa892,	// (0x000293b5) mce_text_pane_ParamLimits

0xa892,	// (0x000293b5) mce_text_pane

0x35c2,	// (0x000220e5) scroll_pane_cp03

0xa78b,	// (0x000292ae) scroll_pane_cp04

0xa8a5,	// (0x000293c8) scroll_pane_cp05_ParamLimits

0xa8a5,	// (0x000293c8) scroll_pane_cp05

0x35cc,	// (0x000220ef) mce_header_field_pane_ParamLimits

0x35cc,	// (0x000220ef) mce_header_field_pane

0x35ee,	// (0x00022111) mce_header_field_pane_2_ParamLimits

0x35ee,	// (0x00022111) mce_header_field_pane_2

0x3604,	// (0x00022127) mce_header_field_pane_3

0x360c,	// (0x0002212f) list_single_mce_message_pane_ParamLimits

0x360c,	// (0x0002212f) list_single_mce_message_pane

0x362b,	// (0x0002214e) list_single_mce_smart_pane_ParamLimits

0x362b,	// (0x0002214e) list_single_mce_smart_pane

0xa8b1,	// (0x000293d4) input_focus_pane_cp03

0xa8ba,	// (0x000293dd) list_header_data_pane

0x3655,	// (0x00022178) mce_header_field_pane_t1

0x3665,	// (0x00022188) list_single_mce_header_pane_ParamLimits

0x3665,	// (0x00022188) list_single_mce_header_pane

0xa8c2,	// (0x000293e5) list_single_mce_header_pane_t1

0xa8d1,	// (0x000293f4) list_single_mce_message_pane_g1

0xa8d9,	// (0x000293fc) list_single_mce_message_pane_t1

0x36a9,	// (0x000221cc) bg_cale_heading_pane_cp01_ParamLimits

0x36a9,	// (0x000221cc) bg_cale_heading_pane_cp01

0xa8e7,	// (0x0002940a) bg_cale_pane_cp02_ParamLimits

0xa8e7,	// (0x0002940a) bg_cale_pane_cp02

0x36f0,	// (0x00022213) cale_month_corner_pane

0x370f,	// (0x00022232) cale_month_day_heading_pane_ParamLimits

0x370f,	// (0x00022232) cale_month_day_heading_pane

0x3766,	// (0x00022289) cale_month_pane_g1_ParamLimits

0x3766,	// (0x00022289) cale_month_pane_g1

0x37a2,	// (0x000222c5) cale_month_pane_g2_ParamLimits

0x37a2,	// (0x000222c5) cale_month_pane_g2

0x37da,	// (0x000222fd) cale_month_pane_g3_ParamLimits

0x37da,	// (0x000222fd) cale_month_pane_g3

0x382e,	// (0x00022351) cale_month_pane_g4_ParamLimits

0x382e,	// (0x00022351) cale_month_pane_g4

0x3882,	// (0x000223a5) cale_month_pane_g5_ParamLimits

0x3882,	// (0x000223a5) cale_month_pane_g5

0x38d6,	// (0x000223f9) cale_month_pane_g6_ParamLimits

0x38d6,	// (0x000223f9) cale_month_pane_g6

0x393a,	// (0x0002245d) cale_month_pane_g7_ParamLimits

0x393a,	// (0x0002245d) cale_month_pane_g7

0x399e,	// (0x000224c1) cale_month_pane_g8_ParamLimits

0x399e,	// (0x000224c1) cale_month_pane_g8

0x3a02,	// (0x00022525) cale_month_pane_g9_ParamLimits

0x3a02,	// (0x00022525) cale_month_pane_g9

0x3a5a,	// (0x0002257d) cale_month_pane_g10_ParamLimits

0x3a5a,	// (0x0002257d) cale_month_pane_g10

0x3aa8,	// (0x000225cb) cale_month_pane_g11_ParamLimits

0x3aa8,	// (0x000225cb) cale_month_pane_g11

0x3af4,	// (0x00022617) cale_month_pane_g12_ParamLimits

0x3af4,	// (0x00022617) cale_month_pane_g12

0x3b44,	// (0x00022667) cale_month_pane_g13_ParamLimits

0x3b44,	// (0x00022667) cale_month_pane_g13

0x000c,

0xf290,	// (0x0002ddb3) cale_month_pane_g_ParamLimits

0xf290,	// (0x0002ddb3) cale_month_pane_g

0x3b94,	// (0x000226b7) cale_month_week_pane

0x3bb4,	// (0x000226d7) grid_cale_month_pane_ParamLimits

0x3bb4,	// (0x000226d7) grid_cale_month_pane

0x3c02,	// (0x00022725) cale_month_day_heading_pane_t1

0x3c84,	// (0x000227a7) cale_month_day_heading_pane_t2

0x3d11,	// (0x00022834) cale_month_day_heading_pane_t3

0x3d9e,	// (0x000228c1) cale_month_day_heading_pane_t4

0x3e2b,	// (0x0002294e) cale_month_day_heading_pane_t5

0x3ec0,	// (0x000229e3) cale_month_day_heading_pane_t6

0x3f5d,	// (0x00022a80) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0002ddce) cale_month_day_heading_pane_t

0xa57d,	// (0x000290a0) bg_cale_side_pane_cp01

0x3ffa,	// (0x00022b1d) cale_month_week_pane_t1

0x4013,	// (0x00022b36) cale_month_week_pane_t2

0x402c,	// (0x00022b4f) cale_month_week_pane_t3

0x4045,	// (0x00022b68) cale_month_week_pane_t4

0x405e,	// (0x00022b81) cale_month_week_pane_t5

0x4079,	// (0x00022b9c) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0002dddd) cale_month_week_pane_t

0x409a,	// (0x00022bbd) cell_cale_month_pane_ParamLimits

0x409a,	// (0x00022bbd) cell_cale_month_pane

0x0fa4,	// (0x0001fac7) cell_cale_month_pane_g1

0x0fb0,	// (0x0001fad3) cell_cale_month_pane_t1_ParamLimits

0x0fb0,	// (0x0001fad3) cell_cale_month_pane_t1

0xa58b,	// (0x000290ae) grid_highlight_pane_cp08

0xa459,	// (0x00028f7c) main_smil_g1

0x41e6,	// (0x00022d09) smil_status_pane

0xa926,	// (0x00029449) smil_text_pane

0xc1b5,	// (0x0002acd8) bg_popup_call3_rect_pane_g8

0xc1bd,	// (0x0002ace0) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0002e096) bg_popup_call3_rect_pane_g

0xc44b,	// (0x0002af6e) smil_status_volume_pane_g1

0x41f9,	// (0x00022d1c) smil_status_pane_t1

0x10f2,	// (0x0001fc15) volume_smil_pane

0xa930,	// (0x00029453) list_smil_text_pane

0x4210,	// (0x00022d33) scroll_pane_cp011

0x421b,	// (0x00022d3e) smil_text_list_pane_t1_ParamLimits

0x421b,	// (0x00022d3e) smil_text_list_pane_t1

0x0fd0,	// (0x0001faf3) aid_volume_smil_ParamLimits

0x0fd0,	// (0x0001faf3) aid_volume_smil

0xa459,	// (0x00028f7c) smil_volume_pane_g1

0xa459,	// (0x00028f7c) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0002ddfd) smil_volume_pane_g

0x27b0,	// (0x000212d3) listscroll_cale_day_pane

0xa93a,	// (0x0002945d) bg_cale_pane

0xa952,	// (0x00029475) list_cale_pane

0xa975,	// (0x00029498) scroll_pane_cp09

0xa986,	// (0x000294a9) cale_bg_pane_g1

0xa98e,	// (0x000294b1) cale_bg_pane_g2

0xa996,	// (0x000294b9) cale_bg_pane_g3

0xa99e,	// (0x000294c1) cale_bg_pane_g4

0xa9a6,	// (0x000294c9) cale_bg_pane_g5

0xa9ae,	// (0x000294d1) cale_bg_pane_g6

0xa9b6,	// (0x000294d9) cale_bg_pane_g7

0xa9be,	// (0x000294e1) cale_bg_pane_g8

0xa9c6,	// (0x000294e9) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0002de02) cale_bg_pane_g

0x426d,	// (0x00022d90) list_cale_time_pane_ParamLimits

0x426d,	// (0x00022d90) list_cale_time_pane

0xa9d6,	// (0x000294f9) list_cale_time_pane_g1_ParamLimits

0xa9d6,	// (0x000294f9) list_cale_time_pane_g1

0xa9e2,	// (0x00029505) list_cale_time_pane_g2_ParamLimits

0xa9e2,	// (0x00029505) list_cale_time_pane_g2

0x4281,	// (0x00022da4) list_cale_time_pane_g3_ParamLimits

0x4281,	// (0x00022da4) list_cale_time_pane_g3

0x428f,	// (0x00022db2) list_cale_time_pane_g4_ParamLimits

0x428f,	// (0x00022db2) list_cale_time_pane_g4

0x429d,	// (0x00022dc0) list_cale_time_pane_g5_ParamLimits

0x429d,	// (0x00022dc0) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0002de15) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0002de15) list_cale_time_pane_g

0xa9fc,	// (0x0002951f) list_cale_time_pane_t1_ParamLimits

0xa9fc,	// (0x0002951f) list_cale_time_pane_t1

0xaa24,	// (0x00029547) list_cale_time_pane_t2_ParamLimits

0xaa24,	// (0x00029547) list_cale_time_pane_t2

0x4603,	// (0x00023126) aid_blid_cardinal_pane

0x4645,	// (0x00023168) compass_pane_t4

0xaa4c,	// (0x0002956f) list_cale_time_pane_t4_ParamLimits

0xaa4c,	// (0x0002956f) list_cale_time_pane_t4

0x4653,	// (0x00023176) compass_pane_t5

0x4663,	// (0x00023186) compass_pane_t6

0x4671,	// (0x00023194) compass_pane_t7

0xae5a,	// (0x0002997d) navi_pane_cc_t1

0xafc9,	// (0x00029aec) aid_phob_thumbnail_center_pane

0x4dae,	// (0x000238d1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0002de22) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0002de22) list_cale_time_pane_t

0x9d3b,	// (0x0002885e) bg_popup_window_pane_cp02_ParamLimits

0x9d3b,	// (0x0002885e) bg_popup_window_pane_cp02

0xaa74,	// (0x00029597) heading_pane_cp01_ParamLimits

0xaa74,	// (0x00029597) heading_pane_cp01

0xaa80,	// (0x000295a3) loc_req_pane_ParamLimits

0xaa80,	// (0x000295a3) loc_req_pane

0xaa90,	// (0x000295b3) loc_type_pane_ParamLimits

0xaa90,	// (0x000295b3) loc_type_pane

0xaaa2,	// (0x000295c5) loc_type_pane_t1_ParamLimits

0xaaa2,	// (0x000295c5) loc_type_pane_t1

0xaab4,	// (0x000295d7) loc_type_pane_t2_ParamLimits

0xaab4,	// (0x000295d7) loc_type_pane_t2

0xaac6,	// (0x000295e9) loc_type_pane_t3_ParamLimits

0xaac6,	// (0x000295e9) loc_type_pane_t3

0x0002,

0xf306,	// (0x0002de29) loc_type_pane_t_ParamLimits

0xf306,	// (0x0002de29) loc_type_pane_t

0xaad8,	// (0x000295fb) list_loc_req_pane

0xaae2,	// (0x00029605) scroll_pane_cp012

0x42ab,	// (0x00022dce) list_single_loc_request_popup_menu_pane_ParamLimits

0x42ab,	// (0x00022dce) list_single_loc_request_popup_menu_pane

0xaaed,	// (0x00029610) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaaed,	// (0x00029610) list_single_loc_request_popup_menu_pane_g1

0xaaf9,	// (0x0002961c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaaf9,	// (0x0002961c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0002de30) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0002de30) list_single_loc_request_popup_menu_pane_g

0xab05,	// (0x00029628) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab05,	// (0x00029628) list_single_loc_request_popup_menu_pane_t1

0x42bd,	// (0x00022de0) bg_popup_window_pane_cp03_ParamLimits

0x42bd,	// (0x00022de0) bg_popup_window_pane_cp03

0x42cb,	// (0x00022dee) heading_loc_req_pane_ParamLimits

0x42cb,	// (0x00022dee) heading_loc_req_pane

0x42d7,	// (0x00022dfa) popup_dyc_status_message_window_g1_ParamLimits

0x42d7,	// (0x00022dfa) popup_dyc_status_message_window_g1

0x42e3,	// (0x00022e06) popup_dyc_status_message_window_t1_ParamLimits

0x42e3,	// (0x00022e06) popup_dyc_status_message_window_t1

0x42f5,	// (0x00022e18) popup_dyc_status_message_window_t2_ParamLimits

0x42f5,	// (0x00022e18) popup_dyc_status_message_window_t2

0x4307,	// (0x00022e2a) popup_dyc_status_message_window_t3_ParamLimits

0x4307,	// (0x00022e2a) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0002de35) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0002de35) popup_dyc_status_message_window_t

0xa0e4,	// (0x00028c07) bg_heading_pane_cp01

0xab1b,	// (0x0002963e) heading_loc_req_pane_g1

0xab23,	// (0x00029646) heading_loc_req_pane_g2

0xab2b,	// (0x0002964e) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0002de3c) heading_loc_req_pane_g

0xab33,	// (0x00029656) heading_loc_req_pane_t1

0xab43,	// (0x00029666) bg_popup_sub_pane_cp01_ParamLimits

0xab43,	// (0x00029666) bg_popup_sub_pane_cp01

0xab51,	// (0x00029674) popup_cale_events_window_g1_ParamLimits

0xab51,	// (0x00029674) popup_cale_events_window_g1

0xab71,	// (0x00029694) popup_cale_events_window_g2_ParamLimits

0xab71,	// (0x00029694) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0002de70) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0002de70) popup_cale_events_window_g

0xab91,	// (0x000296b4) popup_cale_events_window_t1_ParamLimits

0xab91,	// (0x000296b4) popup_cale_events_window_t1

0xaba3,	// (0x000296c6) popup_cale_events_window_t2_ParamLimits

0xaba3,	// (0x000296c6) popup_cale_events_window_t2

0xabe1,	// (0x00029704) popup_cale_events_window_t3_ParamLimits

0xabe1,	// (0x00029704) popup_cale_events_window_t3

0xac1b,	// (0x0002973e) popup_cale_events_window_t4_ParamLimits

0xac1b,	// (0x0002973e) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0002de75) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0002de75) popup_cale_events_window_t

0x440e,	// (0x00022f31) call_type_pane

0xaec8,	// (0x000299eb) popup_call_status_window_g1

0x441a,	// (0x00022f3d) popup_call_status_window_g2

0x4426,	// (0x00022f49) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0002de7e) popup_call_status_window_g

0xac51,	// (0x00029774) call_type_pane_g1

0xac5a,	// (0x0002977d) call_type_pane_g2

0x0001,

0xf362,	// (0x0002de85) call_type_pane_g

0xa0e4,	// (0x00028c07) bg_popup_sub_pane_cp02

0xac63,	// (0x00029786) listscroll_popup_wml_pane

0xac6b,	// (0x0002978e) list_wml_pane

0xac75,	// (0x00029798) scroll_pane_cp013

0xac80,	// (0x000297a3) list_single_graphic_popup_wml_pane_ParamLimits

0xac80,	// (0x000297a3) list_single_graphic_popup_wml_pane

0xa459,	// (0x00028f7c) list_single_graphic_popup_wml_pane_g1

0xac94,	// (0x000297b7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0002de8a) list_single_graphic_popup_wml_pane_g

0xac9c,	// (0x000297bf) list_single_graphic_popup_wml_pane_t1

0xacb2,	// (0x000297d5) aid_call_pane

0xa337,	// (0x00028e5a) popup_clock_analogue_window_g1

0xa337,	// (0x00028e5a) popup_clock_analogue_window_g2

0x0ff2,	// (0x0001fb15) popup_clock_analogue_window_g3

0x0ff2,	// (0x0001fb15) popup_clock_analogue_window_g4

0xa459,	// (0x00028f7c) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0002de8f) popup_clock_analogue_window_g

0x0ffa,	// (0x0001fb1d) popup_clock_analogue_window_t1

0x1008,	// (0x0001fb2b) clock_digital_number_pane_ParamLimits

0x1008,	// (0x0001fb2b) clock_digital_number_pane

0x1014,	// (0x0001fb37) clock_digital_number_pane_cp02_ParamLimits

0x1014,	// (0x0001fb37) clock_digital_number_pane_cp02

0x1020,	// (0x0001fb43) clock_digital_number_pane_cp03_ParamLimits

0x1020,	// (0x0001fb43) clock_digital_number_pane_cp03

0x102c,	// (0x0001fb4f) clock_digital_number_pane_cp04_ParamLimits

0x102c,	// (0x0001fb4f) clock_digital_number_pane_cp04

0x1038,	// (0x0001fb5b) clock_digital_separator_pane_ParamLimits

0x1038,	// (0x0001fb5b) clock_digital_separator_pane

0x1044,	// (0x0001fb67) popup_clock_digital_window_t1

0xa459,	// (0x00028f7c) clock_digital_number_pane_g1

0xa459,	// (0x00028f7c) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0002ddfd) clock_digital_number_pane_g

0xa459,	// (0x00028f7c) clock_digital_separator_pane_g1

0xa459,	// (0x00028f7c) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0002ddfd) clock_digital_separator_pane_g

0xa0e4,	// (0x00028c07) bg_popup_window_pane_cp04

0xacba,	// (0x000297dd) heading_pane_cp03

0xacc2,	// (0x000297e5) listscroll_popup_gms_pane

0xacca,	// (0x000297ed) grid_large_graphic_popup_pane

0xacd4,	// (0x000297f7) listscroll_popup_gms_pane_g1

0xacdc,	// (0x000297ff) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0002de9a) listscroll_popup_gms_pane_g

0xa78b,	// (0x000292ae) scroll_pane_cp014

0x4432,	// (0x00022f55) cell_large_graphic_popup_pane_ParamLimits

0x4432,	// (0x00022f55) cell_large_graphic_popup_pane

0x444c,	// (0x00022f6f) cell_large_graphic_popup_pane_g1_ParamLimits

0x444c,	// (0x00022f6f) cell_large_graphic_popup_pane_g1

0xace4,	// (0x00029807) cell_large_graphic_popup_pane_g2_ParamLimits

0xace4,	// (0x00029807) cell_large_graphic_popup_pane_g2

0xacf0,	// (0x00029813) cell_large_graphic_popup_pane_g3_ParamLimits

0xacf0,	// (0x00029813) cell_large_graphic_popup_pane_g3

0xacfd,	// (0x00029820) cell_large_graphic_popup_pane_g4_ParamLimits

0xacfd,	// (0x00029820) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0002de9f) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0002de9f) cell_large_graphic_popup_pane_g

0xad0d,	// (0x00029830) grid_highlight_pane_cp010

0xa459,	// (0x00028f7c) bg_popup_call_pane_g1

0xad17,	// (0x0002983a) list_single_graphic_popup_conf_pane_ParamLimits

0xad17,	// (0x0002983a) list_single_graphic_popup_conf_pane

0xad29,	// (0x0002984c) list_highlight_pane_cp01

0xad32,	// (0x00029855) list_single_graphic_popup_conf_pane_g1

0xad3a,	// (0x0002985d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0002dea8) list_single_graphic_popup_conf_pane_g

0xad42,	// (0x00029865) list_single_graphic_popup_conf_pane_t1

0xad50,	// (0x00029873) linegrid_cams_pane_g1

0x4458,	// (0x00022f7b) linegrid_cams_pane_g2

0xa5be,	// (0x000290e1) linegrid_cams_pane_g3

0xad59,	// (0x0002987c) linegrid_cams_pane_g4

0x4461,	// (0x00022f84) linegrid_cams_pane_g5

0x446a,	// (0x00022f8d) linegrid_cams_pane_g6

0xa5c7,	// (0x000290ea) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0002dead) linegrid_cams_pane_g

0xad62,	// (0x00029885) popup_clock_analogue_window

0xad62,	// (0x00029885) popup_clock_digital_window

0xa0e4,	// (0x00028c07) popup_phob_thumbnail_window

0xa459,	// (0x00028f7c) call_video_uplink_pane_g1

0xad6b,	// (0x0002988e) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0002debc) call_video_uplink_pane_g

0xad73,	// (0x00029896) video_uplink_pane

0xad7b,	// (0x0002989e) mce_image_pane_g1

0x4475,	// (0x00022f98) mce_image_pane_g2

0x447f,	// (0x00022fa2) mce_image_pane_g3

0x4489,	// (0x00022fac) mce_image_pane_g4

0x4491,	// (0x00022fb4) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0002dec1) mce_image_pane_g

0xad85,	// (0x000298a8) control_top_pane_stacon_cp01_ParamLimits

0xad85,	// (0x000298a8) control_top_pane_stacon_cp01

0xad99,	// (0x000298bc) uni_indicator_pane_stacon_cp01_ParamLimits

0xad99,	// (0x000298bc) uni_indicator_pane_stacon_cp01

0xadaa,	// (0x000298cd) bg_popup_sub_pane_cp03

0x4499,	// (0x00022fbc) chi_dic_find_pane

0x44a1,	// (0x00022fc4) listscroll_chi_dic_pane

0x44aa,	// (0x00022fcd) main_pane_chidic_g1

0x44bd,	// (0x00022fe0) chi_dic_find_pane_t1

0xadb4,	// (0x000298d7) find_chidic_pane

0xadbd,	// (0x000298e0) chi_dic_list_pane_ParamLimits

0xadbd,	// (0x000298e0) chi_dic_list_pane

0xadce,	// (0x000298f1) scroll_pane_cp020

0x44cb,	// (0x00022fee) find_chidic_pane_t1

0xa0e4,	// (0x00028c07) input_focus_pane_cp06

0x44da,	// (0x00022ffd) list_chi_dic_pane_ParamLimits

0x44da,	// (0x00022ffd) list_chi_dic_pane

0x44ef,	// (0x00023012) list_chi_dic_pane_t1_ParamLimits

0x44ef,	// (0x00023012) list_chi_dic_pane_t1

0xa0e4,	// (0x00028c07) list_highlight_pane_cp020

0xadd6,	// (0x000298f9) bg_cale_heading_pane_g1

0x4502,	// (0x00023025) bg_cale_heading_pane_g2

0x450a,	// (0x0002302d) bg_cale_heading_pane_g3

0x4512,	// (0x00023035) bg_cale_heading_pane_g4

0x451c,	// (0x0002303f) bg_cale_heading_pane_g5

0x4526,	// (0x00023049) bg_cale_heading_pane_g6

0x452e,	// (0x00023051) bg_cale_heading_pane_g7

0x4536,	// (0x00023059) bg_cale_heading_pane_g8

0x4540,	// (0x00023063) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0002decc) bg_cale_heading_pane_g

0xadd6,	// (0x000298f9) bg_cale_side_pane_g1

0x454a,	// (0x0002306d) bg_cale_side_pane_g2

0x4554,	// (0x00023077) bg_cale_side_pane_g3

0x455e,	// (0x00023081) bg_cale_side_pane_g4

0x4568,	// (0x0002308b) bg_cale_side_pane_g5

0x4572,	// (0x00023095) bg_cale_side_pane_g6

0x457c,	// (0x0002309f) bg_cale_side_pane_g7

0x4586,	// (0x000230a9) bg_cale_side_pane_g8

0x458e,	// (0x000230b1) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0002dedf) bg_cale_side_pane_g

0x4596,	// (0x000230b9) popup_call_status_window_ParamLimits

0x4596,	// (0x000230b9) popup_call_status_window

0xadde,	// (0x00029901) stacon_top_pane

0xade6,	// (0x00029909) status_pane_ParamLimits

0xade6,	// (0x00029909) status_pane

0xadfb,	// (0x0002991e) status_small_pane

0xae03,	// (0x00029926) control_pane

0xa0e4,	// (0x00028c07) stacon_bottom_pane

0xae0b,	// (0x0002992e) list_single_mce_smart_pane_t1_ParamLimits

0xae0b,	// (0x0002992e) list_single_mce_smart_pane_t1

0xae1e,	// (0x00029941) list_single_mce_smart_pane_t2_ParamLimits

0xae1e,	// (0x00029941) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0002def2) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0002def2) list_single_mce_smart_pane_t

0x45a2,	// (0x000230c5) compass_pane

0x45ad,	// (0x000230d0) main_location2_pane_t1

0x45c3,	// (0x000230e6) main_location2_pane_t2

0x45d9,	// (0x000230fc) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0002def7) main_location2_pane_t

0xae3d,	// (0x00029960) compass_pane_g1_ParamLimits

0xae3d,	// (0x00029960) compass_pane_g1

0x4627,	// (0x0002314a) compass_pane_t1

0x4636,	// (0x00023159) compass_pane_t2

0x0005,

0xf3dd,	// (0x0002df00) compass_pane_t

0x4681,	// (0x000231a4) text_secondary_cp61

0xae51,	// (0x00029974) navi_pane_cams_g5

0xae74,	// (0x00029997) navi_pane_im_t1

0xae82,	// (0x000299a5) navi_pane_mp_g1_ParamLimits

0xae82,	// (0x000299a5) navi_pane_mp_g1

0xae96,	// (0x000299b9) navi_pane_mp_g2_ParamLimits

0xae96,	// (0x000299b9) navi_pane_mp_g2

0xaea2,	// (0x000299c5) navi_pane_mp_g3_ParamLimits

0xaea2,	// (0x000299c5) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0002df14) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0002df14) navi_pane_mp_g

0xaeae,	// (0x000299d1) navi_pane_mp_t1

0xaed6,	// (0x000299f9) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0002df1b) navi_pane_mp_t

0xaf12,	// (0x00029a35) navi_pane_vt_g1

0xaeae,	// (0x000299d1) navi_pane_vt_t1

0xaf1a,	// (0x00029a3d) navi_slider_pane

0xaf22,	// (0x00029a45) zooming_pane

0xaf2a,	// (0x00029a4d) navi_slider_pane_g1

0x1061,	// (0x0001fb84) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0002df22) navi_slider_pane_g

0xaf4e,	// (0x00029a71) aid_levels_zoom

0xaf56,	// (0x00029a79) zooming_pane_g1

0xaf5e,	// (0x00029a81) zooming_pane_g2

0xaf5e,	// (0x00029a81) zooming_pane_g3

0x0002,

0xf40e,	// (0x0002df31) zooming_pane_g

0xaf66,	// (0x00029a89) level_10_zoom

0xaf6f,	// (0x00029a92) level_11_zoom

0xaf78,	// (0x00029a9b) level_1_zoom

0xaf81,	// (0x00029aa4) level_2_zoom

0xaf8a,	// (0x00029aad) level_3_zoom

0xaf93,	// (0x00029ab6) level_4_zoom

0xaf9c,	// (0x00029abf) level_5_zoom

0xafa5,	// (0x00029ac8) level_6_zoom

0xafae,	// (0x00029ad1) level_7_zoom

0xafb7,	// (0x00029ada) level_8_zoom

0xafc0,	// (0x00029ae3) level_9_zoom

0xafd1,	// (0x00029af4) popup_phob_thumbnail_window_g1

0xafd9,	// (0x00029afc) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0002df38) popup_phob_thumbnail_window_g

0xc31b,	// (0x0002ae3e) level_1_location

0xc323,	// (0x0002ae46) level_2_location

0xc32b,	// (0x0002ae4e) level_3_location

0xc333,	// (0x0002ae56) level_4_location

0xaf22,	// (0x00029a45) level_5_location

0x47b6,	// (0x000232d9) mce_icon_pane_g1

0x47be,	// (0x000232e1) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0002df3d) mce_icon_pane_g

0x47c6,	// (0x000232e9) main_mup_pane_g1_ParamLimits

0x47c6,	// (0x000232e9) main_mup_pane_g1

0x47de,	// (0x00023301) main_mup_pane_g2_ParamLimits

0x47de,	// (0x00023301) main_mup_pane_g2

0x47fa,	// (0x0002331d) main_mup_pane_g3_ParamLimits

0x47fa,	// (0x0002331d) main_mup_pane_g3

0x4816,	// (0x00023339) main_mup_pane_g4_ParamLimits

0x4816,	// (0x00023339) main_mup_pane_g4

0x4832,	// (0x00023355) main_mup_pane_g5_ParamLimits

0x4832,	// (0x00023355) main_mup_pane_g5

0x4853,	// (0x00023376) main_mup_pane_g6_ParamLimits

0x4853,	// (0x00023376) main_mup_pane_g6

0x4873,	// (0x00023396) main_mup_pane_g7_ParamLimits

0x4873,	// (0x00023396) main_mup_pane_g7

0x4897,	// (0x000233ba) main_mup_pane_g8_ParamLimits

0x4897,	// (0x000233ba) main_mup_pane_g8

0x48bb,	// (0x000233de) main_mup_pane_g9_ParamLimits

0x48bb,	// (0x000233de) main_mup_pane_g9

0x48de,	// (0x00023401) main_mup_pane_g10_ParamLimits

0x48de,	// (0x00023401) main_mup_pane_g10

0x4901,	// (0x00023424) main_mup_pane_g11_ParamLimits

0x4901,	// (0x00023424) main_mup_pane_g11

0x4921,	// (0x00023444) main_mup_pane_g12_ParamLimits

0x4921,	// (0x00023444) main_mup_pane_g12

0x492f,	// (0x00023452) main_mup_pane_g13_ParamLimits

0x492f,	// (0x00023452) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0002df42) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0002df42) main_mup_pane_g

0x4945,	// (0x00023468) main_mup_pane_t1_ParamLimits

0x4945,	// (0x00023468) main_mup_pane_t1

0x4964,	// (0x00023487) main_mup_pane_t2_ParamLimits

0x4964,	// (0x00023487) main_mup_pane_t2

0x497e,	// (0x000234a1) main_mup_pane_t3_ParamLimits

0x497e,	// (0x000234a1) main_mup_pane_t3

0x4998,	// (0x000234bb) main_mup_pane_t4_ParamLimits

0x4998,	// (0x000234bb) main_mup_pane_t4

0x49aa,	// (0x000234cd) main_mup_pane_t5_ParamLimits

0x49aa,	// (0x000234cd) main_mup_pane_t5

0x49bc,	// (0x000234df) main_mup_pane_t6_ParamLimits

0x49bc,	// (0x000234df) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0002df5d) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0002df5d) main_mup_pane_t

0x49d2,	// (0x000234f5) mup_progress_pane_ParamLimits

0x49d2,	// (0x000234f5) mup_progress_pane

0x49de,	// (0x00023501) mup_visualizer_pane_ParamLimits

0x49de,	// (0x00023501) mup_visualizer_pane

0x4a1c,	// (0x0002353f) mup_volume_pane_ParamLimits

0x4a1c,	// (0x0002353f) mup_volume_pane

0xaec8,	// (0x000299eb) mup_visualizer_pane_g1_ParamLimits

0xaec8,	// (0x000299eb) mup_visualizer_pane_g1

0xaec8,	// (0x000299eb) mup_visualizer_pane_g2_ParamLimits

0xaec8,	// (0x000299eb) mup_visualizer_pane_g2

0xae3d,	// (0x00029960) mup_visualizer_pane_g3_ParamLimits

0xae3d,	// (0x00029960) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0002df6a) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0002df6a) mup_visualizer_pane_g

0xa459,	// (0x00028f7c) mup_volume_pane_g1

0xafe9,	// (0x00029b0c) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0002df71) mup_volume_pane_g

0xa459,	// (0x00028f7c) mup_progress_pane_g1

0xaff2,	// (0x00029b15) mup_progress_pane_g2

0xaffb,	// (0x00029b1e) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0002df76) mup_progress_pane_g

0xa0e4,	// (0x00028c07) bg_popup_window_pane_cp05

0xb004,	// (0x00029b27) heading_pane_cp02_ParamLimits

0xb004,	// (0x00029b27) heading_pane_cp02

0xb020,	// (0x00029b43) list_popup_blid_pane

0xb028,	// (0x00029b4b) list_blid_sat_info_pane_ParamLimits

0xb028,	// (0x00029b4b) list_blid_sat_info_pane

0xb03b,	// (0x00029b5e) list_blid_sat_info_pane_g1

0xb043,	// (0x00029b66) list_blid_sat_info_pane_t1

0x4b3b,	// (0x0002365e) mup_equalizer_pane_ParamLimits

0x4b3b,	// (0x0002365e) mup_equalizer_pane

0x4b5c,	// (0x0002367f) mup_equalizer_pane_cp1_ParamLimits

0x4b5c,	// (0x0002367f) mup_equalizer_pane_cp1

0x4b7d,	// (0x000236a0) mup_equalizer_pane_cp2_ParamLimits

0x4b7d,	// (0x000236a0) mup_equalizer_pane_cp2

0x4b9e,	// (0x000236c1) mup_equalizer_pane_cp3_ParamLimits

0x4b9e,	// (0x000236c1) mup_equalizer_pane_cp3

0x4bc3,	// (0x000236e6) mup_equalizer_pane_cp4_ParamLimits

0x4bc3,	// (0x000236e6) mup_equalizer_pane_cp4

0x4be8,	// (0x0002370b) mup_equalizer_pane_cp5

0x4c00,	// (0x00023723) mup_equalizer_pane_cp6

0x4c18,	// (0x0002373b) mup_equalizer_pane_cp7

0xc235,	// (0x0002ad58) bg_popup_call_poc_act_pane_g9

0xc23d,	// (0x0002ad60) bg_popup_call_poc_act_pane_g10

0xc245,	// (0x0002ad68) bg_popup_call_poc_act_pane_g11

0x000a,

0xa33f,	// (0x00028e62) mup_scale_pane

0xa459,	// (0x00028f7c) mup_scale_pane_g1

0xb051,	// (0x00029b74) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0002df92) mup_scale_pane_g

0xb075,	// (0x00029b98) msg_data_pane

0xb07d,	// (0x00029ba0) scroll_pane_cp017

0x4c42,	// (0x00023765) bg_list_pane_cp04_ParamLimits

0x4c42,	// (0x00023765) bg_list_pane_cp04

0xb08d,	// (0x00029bb0) msg_data_pane_g1

0x4c62,	// (0x00023785) msg_data_pane_g2

0x4c6c,	// (0x0002378f) msg_data_pane_g3

0x4c76,	// (0x00023799) msg_data_pane_g4

0x4c7e,	// (0x000237a1) msg_data_pane_g5

0x4c86,	// (0x000237a9) msg_data_pane_g6

0x4c8e,	// (0x000237b1) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0002dfa1) msg_data_pane_g

0x4c96,	// (0x000237b9) msg_text_pane_ParamLimits

0x4c96,	// (0x000237b9) msg_text_pane

0x4cbe,	// (0x000237e1) qrid_highlight_pane_cp011_ParamLimits

0x4cbe,	// (0x000237e1) qrid_highlight_pane_cp011

0xa0e4,	// (0x00028c07) msg_body_pane

0xa0e4,	// (0x00028c07) msg_header_pane

0xb095,	// (0x00029bb8) input_focus_pane_cp07

0xb0aa,	// (0x00029bcd) msg_header_pane_t1_ParamLimits

0xb0aa,	// (0x00029bcd) msg_header_pane_t1

0xb0bc,	// (0x00029bdf) msg_header_pane_t2_ParamLimits

0xb0bc,	// (0x00029bdf) msg_header_pane_t2

0x0001,

0xf492,	// (0x0002dfb5) msg_header_pane_t_ParamLimits

0xf492,	// (0x0002dfb5) msg_header_pane_t

0xb0ce,	// (0x00029bf1) msg_body_pane_g1

0x4ced,	// (0x00023810) msg_body_pane_t1_ParamLimits

0x4ced,	// (0x00023810) msg_body_pane_t1

0xb0d6,	// (0x00029bf9) msg_body_pane_t2_ParamLimits

0xb0d6,	// (0x00029bf9) msg_body_pane_t2

0xb0e8,	// (0x00029c0b) msg_body_pane_t3_ParamLimits

0xb0e8,	// (0x00029c0b) msg_body_pane_t3

0x0002,

0xf497,	// (0x0002dfba) msg_body_pane_t_ParamLimits

0xf497,	// (0x0002dfba) msg_body_pane_t

0x10a3,	// (0x0001fbc6) main_viewer_pane_g1_ParamLimits

0x10a3,	// (0x0001fbc6) main_viewer_pane_g1

0x10af,	// (0x0001fbd2) main_viewer_pane_g2_ParamLimits

0x10af,	// (0x0001fbd2) main_viewer_pane_g2

0x4d40,	// (0x00023863) main_viewer_pane_g3_ParamLimits

0x4d40,	// (0x00023863) main_viewer_pane_g3

0x4d51,	// (0x00023874) main_viewer_pane_g4_ParamLimits

0x4d51,	// (0x00023874) main_viewer_pane_g4

0x10bb,	// (0x0001fbde) main_viewer_pane_g5_ParamLimits

0x10bb,	// (0x0001fbde) main_viewer_pane_g5

0x10bb,	// (0x0001fbde) main_viewer_pane_g7_ParamLimits

0x10bb,	// (0x0001fbde) main_viewer_pane_g7

0x10cd,	// (0x0001fbf0) main_viewer_pane_g8_ParamLimits

0x10cd,	// (0x0001fbf0) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0002dfca) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0002dfca) main_viewer_pane_g

0xb0fa,	// (0x00029c1d) viewer_content_pane_ParamLimits

0xb0fa,	// (0x00029c1d) viewer_content_pane

0x4d82,	// (0x000238a5) main_postcard_pane_g1_ParamLimits

0x4d82,	// (0x000238a5) main_postcard_pane_g1

0x4d90,	// (0x000238b3) main_postcard_pane_g2_ParamLimits

0x4d90,	// (0x000238b3) main_postcard_pane_g2

0x4d9e,	// (0x000238c1) main_postcard_pane_g3_ParamLimits

0x4d9e,	// (0x000238c1) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0002dfdb) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0002dfdb) main_postcard_pane_g

0x4dae,	// (0x000238d1) main_postcard_pane_g4

0xc45e,	// (0x0002af81) smil_status_volume_pane_g2

0x4dda,	// (0x000238fd) postcard_pane_ParamLimits

0x4dda,	// (0x000238fd) postcard_pane

0xaec8,	// (0x000299eb) postcard_pane_g1_ParamLimits

0xaec8,	// (0x000299eb) postcard_pane_g1

0x4e14,	// (0x00023937) postcard_pane_g2_ParamLimits

0x4e14,	// (0x00023937) postcard_pane_g2

0x4e20,	// (0x00023943) postcard_pane_g3_ParamLimits

0x4e20,	// (0x00023943) postcard_pane_g3

0xb108,	// (0x00029c2b) postcard_pane_g4_ParamLimits

0xb108,	// (0x00029c2b) postcard_pane_g4

0x4e2c,	// (0x0002394f) postcard_pane_g5_ParamLimits

0x4e2c,	// (0x0002394f) postcard_pane_g5

0x4e38,	// (0x0002395b) postcard_pane_g6_ParamLimits

0x4e38,	// (0x0002395b) postcard_pane_g6

0xb116,	// (0x00029c39) postcard_pane_g7_ParamLimits

0xb116,	// (0x00029c39) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0002dfe8) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0002dfe8) postcard_pane_g

0x4e46,	// (0x00023969) main_mp2_pane_g1_ParamLimits

0x4e46,	// (0x00023969) main_mp2_pane_g1

0x4e54,	// (0x00023977) main_mp2_pane_g2_ParamLimits

0x4e54,	// (0x00023977) main_mp2_pane_g2

0x4e60,	// (0x00023983) main_mp2_pane_g3_ParamLimits

0x4e60,	// (0x00023983) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0002dff7) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0002dff7) main_mp2_pane_g

0x4e6c,	// (0x0002398f) main_mp2_pane_t1_ParamLimits

0x4e6c,	// (0x0002398f) main_mp2_pane_t1

0x4e83,	// (0x000239a6) main_mp2_pane_t2_ParamLimits

0x4e83,	// (0x000239a6) main_mp2_pane_t2

0x4e97,	// (0x000239ba) main_mp2_pane_t3_ParamLimits

0x4e97,	// (0x000239ba) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0002dffe) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0002dffe) main_mp2_pane_t

0xb124,	// (0x00029c47) pec_content_pane_ParamLimits

0xb124,	// (0x00029c47) pec_content_pane

0xa78b,	// (0x000292ae) scroll_pane_cp015

0xb136,	// (0x00029c59) pec_attribute_pane_ParamLimits

0xb136,	// (0x00029c59) pec_attribute_pane

0x4ea9,	// (0x000239cc) pec_content_pane_g1_ParamLimits

0x4ea9,	// (0x000239cc) pec_content_pane_g1

0xb146,	// (0x00029c69) pec_content_pane_t1_ParamLimits

0xb146,	// (0x00029c69) pec_content_pane_t1

0xb158,	// (0x00029c7b) pec_content_pane_t2_ParamLimits

0xb158,	// (0x00029c7b) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0002e005) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0002e005) pec_content_pane_t

0x4eb5,	// (0x000239d8) list_single_graphic_pane_cp01_ParamLimits

0x4eb5,	// (0x000239d8) list_single_graphic_pane_cp01

0xa33f,	// (0x00028e62) bg_popup_sub_pane_cp04

0xb16a,	// (0x00029c8d) popup_mup_playback_window_g1

0xb176,	// (0x00029c99) popup_mup_playback_window_t1

0xb18b,	// (0x00029cae) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0002e00a) popup_mup_playback_window_t

0xb1c2,	// (0x00029ce5) main_image_pane_g1_ParamLimits

0xb1c2,	// (0x00029ce5) main_image_pane_g1

0xb205,	// (0x00029d28) scroll_pane_cp018_ParamLimits

0xb205,	// (0x00029d28) scroll_pane_cp018

0xb21d,	// (0x00029d40) scroll_pane_cp016_ParamLimits

0xb21d,	// (0x00029d40) scroll_pane_cp016

0x4f43,	// (0x00023a66) smil2_image_pane_ParamLimits

0x4f43,	// (0x00023a66) smil2_image_pane

0x4f79,	// (0x00023a9c) smil2_root_pane_ParamLimits

0x4f79,	// (0x00023a9c) smil2_root_pane

0x4fa5,	// (0x00023ac8) smil2_text_pane_ParamLimits

0x4fa5,	// (0x00023ac8) smil2_text_pane

0xa0e4,	// (0x00028c07) bg_list_pane_cp06

0xb259,	// (0x00029d7c) grid_radio_pane

0xa0e4,	// (0x00028c07) bg_popup_window_pane_cp06

0xb263,	// (0x00029d86) main_fmradio_pane_t1

0xacba,	// (0x000297dd) heading_pane_cp04

0xb271,	// (0x00029d94) main_fmradio_pane_t2

0xc24d,	// (0x0002ad70) popup_cale_lunar_info_window_g1

0xb27f,	// (0x00029da2) main_fmradio_pane_t3

0xc255,	// (0x0002ad78) popup_cale_lunar_info_window_g2

0xb28f,	// (0x00029db2) main_fmradio_pane_t4

0x0001,

0xb29d,	// (0x00029dc0) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0002e0e5) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0002e01f) main_fmradio_pane_t

0xb2ab,	// (0x00029dce) wait_bar_pane_cp03

0xb2b3,	// (0x00029dd6) cell_fmradio_pane_ParamLimits

0xb2b3,	// (0x00029dd6) cell_fmradio_pane

0xb116,	// (0x00029c39) cell_fmradio_pane_g1_ParamLimits

0xb116,	// (0x00029c39) cell_fmradio_pane_g1

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp011

0xb2c8,	// (0x00029deb) poc_content_pane_ParamLimits

0xb2c8,	// (0x00029deb) poc_content_pane

0xb2da,	// (0x00029dfd) scroll_pane_cp019

0x4fe5,	// (0x00023b08) popup_call_poc_act_window_ParamLimits

0x4fe5,	// (0x00023b08) popup_call_poc_act_window

0x4ff2,	// (0x00023b15) popup_call_poc_inact_window_ParamLimits

0x4ff2,	// (0x00023b15) popup_call_poc_inact_window

0xf599,	// (0x0002e0bc) bg_popup_call_poc_act_pane_g

0xc1c5,	// (0x0002ace8) bg_popup_call_poc_inact_pane_g1

0xc1cd,	// (0x0002acf0) bg_popup_call_poc_inact_pane_g2

0xb2e2,	// (0x00029e05) popup_call_poc_act_window_g2

0xc1d5,	// (0x0002acf8) bg_popup_call_poc_inact_pane_g3

0xc1dd,	// (0x0002ad00) bg_popup_call_poc_inact_pane_g4

0xc1e5,	// (0x0002ad08) bg_popup_call_poc_inact_pane_g5

0xb2ea,	// (0x00029e0d) popup_call_poc_act_window_t1_ParamLimits

0xb2ea,	// (0x00029e0d) popup_call_poc_act_window_t1

0xb312,	// (0x00029e35) popup_call_poc_act_window_t2_ParamLimits

0xb312,	// (0x00029e35) popup_call_poc_act_window_t2

0xb33a,	// (0x00029e5d) popup_call_poc_act_window_t3_ParamLimits

0xb33a,	// (0x00029e5d) popup_call_poc_act_window_t3

0xb362,	// (0x00029e85) popup_call_poc_act_window_t4_ParamLimits

0xb362,	// (0x00029e85) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0002e02a) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0002e02a) popup_call_poc_act_window_t

0xc1ed,	// (0x0002ad10) bg_popup_call_poc_inact_pane_g6

0xc1f5,	// (0x0002ad18) bg_popup_call_poc_inact_pane_g7

0xc1fd,	// (0x0002ad20) bg_popup_call_poc_inact_pane_g8

0xb374,	// (0x00029e97) popup_call_poc_inact_window_g2

0xc205,	// (0x0002ad28) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0002e0a9) bg_popup_call_poc_inact_pane_g

0xb37c,	// (0x00029e9f) popup_call_poc_inact_window_t1_ParamLimits

0xb37c,	// (0x00029e9f) popup_call_poc_inact_window_t1

0xb391,	// (0x00029eb4) popup_call_poc_inact_window_t2_ParamLimits

0xb391,	// (0x00029eb4) popup_call_poc_inact_window_t2

0xb3a6,	// (0x00029ec9) popup_call_poc_inact_window_t3_ParamLimits

0xb3a6,	// (0x00029ec9) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0002e033) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0002e033) popup_call_poc_inact_window_t

0xc3d1,	// (0x0002aef4) context_pane_ParamLimits

0x5601,	// (0x00024124) signal_pane_ParamLimits

0xaf22,	// (0x00029a45) main_call2_pane

0xc3bf,	// (0x0002aee2) popup_phob_thumbnail2_window_ParamLimits

0xc3bf,	// (0x0002aee2) popup_phob_thumbnail2_window

0x1073,	// (0x0001fb96) aid_hotspot_pointer_arrow_pane

0x107b,	// (0x0001fb9e) aid_hotspot_pointer_hand_pane

0x5317,	// (0x00023e3a) phob_pre_status_pane_g5

0x2d9a,	// (0x000218bd) cams_zoom_pane_ParamLimits

0x2da6,	// (0x000218c9) image_vga_pane_ParamLimits

0x2db5,	// (0x000218d8) main_camera_pane_g1_ParamLimits

0x2dc3,	// (0x000218e6) main_camera_pane_g2_ParamLimits

0x2dcf,	// (0x000218f2) main_camera_pane_g3_ParamLimits

0x2ddd,	// (0x00021900) main_camera_pane_g4_ParamLimits

0x2deb,	// (0x0002190e) main_camera_pane_g5_ParamLimits

0x2df9,	// (0x0002191c) main_camera_pane_g6_ParamLimits

0x2e07,	// (0x0002192a) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0002dd32) main_camera_pane_g_ParamLimits

0x2e15,	// (0x00021938) main_camera_pane_t1_ParamLimits

0x2e27,	// (0x0002194a) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0002dd43) main_camera_pane_t_ParamLimits

0xa33f,	// (0x00028e62) bg_popup_preview_window_pane_cp01_ParamLimits

0xa33f,	// (0x00028e62) bg_popup_preview_window_pane_cp01

0xb3bb,	// (0x00029ede) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3bb,	// (0x00029ede) popup_phob_thumbnail2_window_g1

0xa0e4,	// (0x00028c07) call2_cli_visual_pane

0x500e,	// (0x00023b31) popup_call2_audio_conf_window_ParamLimits

0x500e,	// (0x00023b31) popup_call2_audio_conf_window

0x5027,	// (0x00023b4a) popup_call2_audio_first_window_ParamLimits

0x5027,	// (0x00023b4a) popup_call2_audio_first_window

0x50c5,	// (0x00023be8) popup_call2_audio_in_window_ParamLimits

0x50c5,	// (0x00023be8) popup_call2_audio_in_window

0x5109,	// (0x00023c2c) popup_call2_audio_out_window_ParamLimits

0x5109,	// (0x00023c2c) popup_call2_audio_out_window

0x5173,	// (0x00023c96) popup_call2_audio_second_window_ParamLimits

0x5173,	// (0x00023c96) popup_call2_audio_second_window

0x51d1,	// (0x00023cf4) popup_call2_audio_wait_window_ParamLimits

0x51d1,	// (0x00023cf4) popup_call2_audio_wait_window

0xa0e4,	// (0x00028c07) bg_popup_call2_act_pane_cp03

0xa321,	// (0x00028e44) list_conf_pane_cp

0xb3c7,	// (0x00029eea) popup_call2_audio_conf_window_t1

0xb3d5,	// (0x00029ef8) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3d5,	// (0x00029ef8) list_single_graphic_popup_conf2_pane

0xad29,	// (0x0002984c) list_highlight_pane_cp04

0xb3e8,	// (0x00029f0b) list_single_graphic_popup_conf2_pane_g1

0xad3a,	// (0x0002985d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0002e03a) list_single_graphic_popup_conf2_pane_g

0xb3f2,	// (0x00029f15) list_single_graphic_popup_conf2_pane_t1

0xb400,	// (0x00029f23) bg_popup_call2_act_pane_cp01_ParamLimits

0xb400,	// (0x00029f23) bg_popup_call2_act_pane_cp01

0xb48a,	// (0x00029fad) call_type_pane_cp05_ParamLimits

0xb48a,	// (0x00029fad) call_type_pane_cp05

0xb4de,	// (0x0002a001) popup_call2_audio_second_window_g1_ParamLimits

0xb4de,	// (0x0002a001) popup_call2_audio_second_window_g1

0xb532,	// (0x0002a055) popup_call2_audio_second_window_g2_ParamLimits

0xb532,	// (0x0002a055) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0002e03f) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0002e03f) popup_call2_audio_second_window_g

0xb597,	// (0x0002a0ba) popup_call2_audio_second_window_t1_ParamLimits

0xb597,	// (0x0002a0ba) popup_call2_audio_second_window_t1

0xb652,	// (0x0002a175) popup_call2_audio_second_window_t2_ParamLimits

0xb652,	// (0x0002a175) popup_call2_audio_second_window_t2

0xb6a5,	// (0x0002a1c8) popup_call2_audio_second_window_t3_ParamLimits

0xb6a5,	// (0x0002a1c8) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0002e046) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0002e046) popup_call2_audio_second_window_t

0xa0e4,	// (0x00028c07) bg_popup_call2_in_pane_cp02

0xa0ee,	// (0x00028c11) call_type_pane_cp04

0xa0f6,	// (0x00028c19) popup_call2_audio_wait_window_g1

0xa0fe,	// (0x00028c21) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0002dc1f) popup_call2_audio_wait_window_g

0xa106,	// (0x00028c29) popup_call2_audio_wait_window_t3

0xb798,	// (0x0002a2bb) bg_popup_call2_act_pane_ParamLimits

0xb798,	// (0x0002a2bb) bg_popup_call2_act_pane

0xb858,	// (0x0002a37b) call_type_pane_cp03_ParamLimits

0xb858,	// (0x0002a37b) call_type_pane_cp03

0xb8bc,	// (0x0002a3df) popup_call2_audio_first_window_g1_ParamLimits

0xb8bc,	// (0x0002a3df) popup_call2_audio_first_window_g1

0xb92c,	// (0x0002a44f) popup_call2_audio_first_window_g2_ParamLimits

0xb92c,	// (0x0002a44f) popup_call2_audio_first_window_g2

0xaec8,	// (0x000299eb) popup_call2_audio_first_window_g3_ParamLimits

0xaec8,	// (0x000299eb) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0002e04f) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0002e04f) popup_call2_audio_first_window_g

0xba0a,	// (0x0002a52d) popup_call2_audio_first_window_t1_ParamLimits

0xba0a,	// (0x0002a52d) popup_call2_audio_first_window_t1

0xbb0d,	// (0x0002a630) popup_call2_audio_first_window_t4_ParamLimits

0xbb0d,	// (0x0002a630) popup_call2_audio_first_window_t4

0xbbf0,	// (0x0002a713) popup_call2_audio_first_window_t5_ParamLimits

0xbbf0,	// (0x0002a713) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0002e05a) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0002e05a) popup_call2_audio_first_window_t

0xa337,	// (0x00028e5a) bg_popup_call2_act_pane_g1

0xc25f,	// (0x0002ad82) popup_cale_lunar_info_window_t1

0xc26d,	// (0x0002ad90) popup_cale_lunar_info_window_t2

0xc27b,	// (0x0002ad9e) popup_cale_lunar_info_window_t3

0xa0e4,	// (0x00028c07) bg_popup_call2_bubble_pane

0xbcf1,	// (0x0002a814) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcf1,	// (0x0002a814) bg_popup_call2_in_pane_cp01

0x9dc0,	// (0x000288e3) call_type_pane_cp02

0xbd39,	// (0x0002a85c) popup_call2_audio_out_window_g1_ParamLimits

0xbd39,	// (0x0002a85c) popup_call2_audio_out_window_g1

0xbd65,	// (0x0002a888) popup_call2_audio_out_window_g2_ParamLimits

0xbd65,	// (0x0002a888) popup_call2_audio_out_window_g2

0xbd8d,	// (0x0002a8b0) popup_call2_audio_out_window_g3_ParamLimits

0xbd8d,	// (0x0002a8b0) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0002e063) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0002e063) popup_call2_audio_out_window_g

0xbdc8,	// (0x0002a8eb) popup_call2_audio_out_window_t1_ParamLimits

0xbdc8,	// (0x0002a8eb) popup_call2_audio_out_window_t1

0xbe27,	// (0x0002a94a) popup_call2_audio_out_window_t2_ParamLimits

0xbe27,	// (0x0002a94a) popup_call2_audio_out_window_t2

0xbe7b,	// (0x0002a99e) popup_call2_audio_out_window_t3_ParamLimits

0xbe7b,	// (0x0002a99e) popup_call2_audio_out_window_t3

0xbe91,	// (0x0002a9b4) popup_call2_audio_out_window_t4_ParamLimits

0xbe91,	// (0x0002a9b4) popup_call2_audio_out_window_t4

0xbea7,	// (0x0002a9ca) popup_call2_audio_out_window_t5_ParamLimits

0xbea7,	// (0x0002a9ca) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0002e06c) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0002e06c) popup_call2_audio_out_window_t

0xbf0b,	// (0x0002aa2e) bg_popup_call2_in_pane_ParamLimits

0xbf0b,	// (0x0002aa2e) bg_popup_call2_in_pane

0xbf67,	// (0x0002aa8a) popup_call2_audio_in_window_g1_ParamLimits

0xbf67,	// (0x0002aa8a) popup_call2_audio_in_window_g1

0xbf9f,	// (0x0002aac2) popup_call2_audio_in_window_g2_ParamLimits

0xbf9f,	// (0x0002aac2) popup_call2_audio_in_window_g2

0xbfd7,	// (0x0002aafa) popup_call2_audio_in_window_g3_ParamLimits

0xbfd7,	// (0x0002aafa) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0002e079) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0002e079) popup_call2_audio_in_window_g

0xc02f,	// (0x0002ab52) popup_call2_audio_in_window_t1_ParamLimits

0xc02f,	// (0x0002ab52) popup_call2_audio_in_window_t1

0xc0af,	// (0x0002abd2) popup_call2_audio_in_window_t2_ParamLimits

0xc0af,	// (0x0002abd2) popup_call2_audio_in_window_t2

0xc12f,	// (0x0002ac52) popup_call2_audio_in_window_t3_ParamLimits

0xc12f,	// (0x0002ac52) popup_call2_audio_in_window_t3

0xc149,	// (0x0002ac6c) popup_call2_audio_in_window_t4_ParamLimits

0xc149,	// (0x0002ac6c) popup_call2_audio_in_window_t4

0xc15b,	// (0x0002ac7e) popup_call2_audio_in_window_t5_ParamLimits

0xc15b,	// (0x0002ac7e) popup_call2_audio_in_window_t5

0xc170,	// (0x0002ac93) popup_call2_audio_in_window_t6_ParamLimits

0xc170,	// (0x0002ac93) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0002e082) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0002e082) popup_call2_audio_in_window_t

0xa337,	// (0x00028e5a) bg_popup_call2_in_pane_g1

0xc289,	// (0x0002adac) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0002e0ea) popup_cale_lunar_info_window_t

0xa33f,	// (0x00028e62) bg_popup_call2_rect_pane_ParamLimits

0xa33f,	// (0x00028e62) bg_popup_call2_rect_pane

0xa0e4,	// (0x00028c07) call2_cli_visual_graphic_pane

0xa0e4,	// (0x00028c07) call2_cli_visual_text_pane

0x10e5,	// (0x0001fc08) smil_status_volume_pane_g3

0x0002,

0xa459,	// (0x00028f7c) call2_cli_visual_graphic_pane_g1

0xa459,	// (0x00028f7c) call2_cli_visual_graphic_pane_g2

0xa459,	// (0x00028f7c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0002e08f) call2_cli_visual_graphic_pane_g

0xc185,	// (0x0002aca8) bg_popup_call2_rect_pane_g1

0xa4f7,	// (0x0002901a) bg_popup_call2_rect_pane_g2

0xc18d,	// (0x0002acb0) bg_popup_call2_rect_pane_g3

0xc195,	// (0x0002acb8) bg_popup_call2_rect_pane_g4

0xc19d,	// (0x0002acc0) bg_popup_call2_rect_pane_g5

0xc1a5,	// (0x0002acc8) bg_popup_call2_rect_pane_g6

0xc1ad,	// (0x0002acd0) bg_popup_call2_rect_pane_g7

0xc1b5,	// (0x0002acd8) bg_popup_call2_rect_pane_g8

0xc1bd,	// (0x0002ace0) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0002e096) bg_popup_call2_rect_pane_g

0xc1c5,	// (0x0002ace8) bg_popup_call2_bubble_pane_g1

0xc1cd,	// (0x0002acf0) bg_popup_call2_bubble_pane_g2

0xc1d5,	// (0x0002acf8) bg_popup_call2_bubble_pane_g3

0xc1dd,	// (0x0002ad00) bg_popup_call2_bubble_pane_g4

0xc1e5,	// (0x0002ad08) bg_popup_call2_bubble_pane_g5

0xc1ed,	// (0x0002ad10) bg_popup_call2_bubble_pane_g6

0xc1f5,	// (0x0002ad18) bg_popup_call2_bubble_pane_g7

0xc1fd,	// (0x0002ad20) bg_popup_call2_bubble_pane_g8

0xc205,	// (0x0002ad28) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0002e0a9) bg_popup_call2_bubble_pane_g

0x27cc,	// (0x000212ef) aid_cale_week_size_cell_pane

0x2e3b,	// (0x0002195e) aid_cams_cif_uncrop_pane_ParamLimits

0x2e3b,	// (0x0002195e) aid_cams_cif_uncrop_pane

0x2f98,	// (0x00021abb) aid_cams_size_cell_ParamLimits

0x2f98,	// (0x00021abb) aid_cams_size_cell

0x2fa4,	// (0x00021ac7) grid_cams_pane_ParamLimits

0x2fb2,	// (0x00021ad5) linegrid_cams_pane_ParamLimits

0x319a,	// (0x00021cbd) call_video_pane_t1

0x31b7,	// (0x00021cda) call_video_pane_t2

0x0001,

0xf273,	// (0x0002dd96) call_video_pane_t

0x3683,	// (0x000221a6) aid_cale_month_size_cell_pane_ParamLimits

0x3683,	// (0x000221a6) aid_cale_month_size_cell_pane

0xf610,	// (0x0002e133) smil_status_volume_pane_g

0x10f2,	// (0x0001fc15) volume_smil_pane_ParamLimits

0x9c82,	// (0x000287a5) aid_popup2_width_pane

0x2708,	// (0x0002122b) cell_qdial_pane_g4_ParamLimits

0x2708,	// (0x0002122b) cell_qdial_pane_g4

0x4603,	// (0x00023126) aid_blid_cardinal_pane_ParamLimits

0x4613,	// (0x00023136) aid_blid_destination_pane_ParamLimits

0x4613,	// (0x00023136) aid_blid_destination_pane

0xa33f,	// (0x00028e62) bg_popup_call_poc_act_pane_ParamLimits

0xa33f,	// (0x00028e62) bg_popup_call_poc_act_pane

0xa33f,	// (0x00028e62) bg_popup_call_poc_inact_pane_ParamLimits

0xa33f,	// (0x00028e62) bg_popup_call_poc_inact_pane

0xc20d,	// (0x0002ad30) bg_popup_call_poc_act_pane_g1

0xc215,	// (0x0002ad38) bg_popup_call_poc_act_pane_g2

0xc21d,	// (0x0002ad40) bg_popup_call_poc_act_pane_g3

0xc1dd,	// (0x0002ad00) bg_popup_call_poc_act_pane_g4

0xc1e5,	// (0x0002ad08) bg_popup_call_poc_act_pane_g5

0xc225,	// (0x0002ad48) bg_popup_call_poc_act_pane_g6

0xc1f5,	// (0x0002ad18) bg_popup_call_poc_act_pane_g7

0xc22d,	// (0x0002ad50) bg_popup_call_poc_act_pane_g8

0xa0e4,	// (0x00028c07) main_usb_pane

0xc396,	// (0x0002aeb9) popup_cale_lunar_info_window

0x34cf,	// (0x00021ff2) im_reading_pane_t1_ParamLimits

0xa6e3,	// (0x00029206) list_im_pane_ParamLimits

0xa6f4,	// (0x00029217) scroll_pane_cp07_ParamLimits

0xa0e4,	// (0x00028c07) grid_highlight_pane_cp012

0xa33f,	// (0x00028e62) mup_scale_pane_ParamLimits

0xaec8,	// (0x000299eb) main_usb_pane_g1_ParamLimits

0xaec8,	// (0x000299eb) main_usb_pane_g1

0x523a,	// (0x00023d5d) main_usb_pane_g2_ParamLimits

0x523a,	// (0x00023d5d) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0002e0d3) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0002e0d3) main_usb_pane_g

0x5246,	// (0x00023d69) main_usb_pane_t1_ParamLimits

0x5246,	// (0x00023d69) main_usb_pane_t1

0x5258,	// (0x00023d7b) main_usb_pane_t2_ParamLimits

0x5258,	// (0x00023d7b) main_usb_pane_t2

0x526a,	// (0x00023d8d) main_usb_pane_t3_ParamLimits

0x526a,	// (0x00023d8d) main_usb_pane_t3

0x527c,	// (0x00023d9f) main_usb_pane_t4_ParamLimits

0x527c,	// (0x00023d9f) main_usb_pane_t4

0x528e,	// (0x00023db1) main_usb_pane_t5_ParamLimits

0x528e,	// (0x00023db1) main_usb_pane_t5

0x52a0,	// (0x00023dc3) main_usb_pane_t6_ParamLimits

0x52a0,	// (0x00023dc3) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0002e0d8) main_usb_pane_t_ParamLimits

0x45a2,	// (0x000230c5) aid_text_placing

0x45ad,	// (0x000230d0) main_location2_pane_t1_ParamLimits

0x45c3,	// (0x000230e6) main_location2_pane_t2_ParamLimits

0x45d9,	// (0x000230fc) main_location2_pane_t3_ParamLimits

0x45ef,	// (0x00023112) main_location2_pane_t4_ParamLimits

0x45ef,	// (0x00023112) main_location2_pane_t4

0xf3d4,	// (0x0002def7) main_location2_pane_t_ParamLimits

0xa37b,	// (0x00028e9e) find_pinb_pane_g2_ParamLimits

0xa37b,	// (0x00028e9e) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0002dc45) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0002dc45) find_pinb_pane_g

0xa387,	// (0x00028eaa) find_pinb_pane_t1_ParamLimits

0xa399,	// (0x00028ebc) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0002dc4a) find_pinb_pane_t_ParamLimits

0xa0e4,	// (0x00028c07) main_call3_pane

0x3c02,	// (0x00022725) cale_month_day_heading_pane_t1_ParamLimits

0x3c84,	// (0x000227a7) cale_month_day_heading_pane_t2_ParamLimits

0x3d11,	// (0x00022834) cale_month_day_heading_pane_t3_ParamLimits

0x3d9e,	// (0x000228c1) cale_month_day_heading_pane_t4_ParamLimits

0x3e2b,	// (0x0002294e) cale_month_day_heading_pane_t5_ParamLimits

0x3ec0,	// (0x000229e3) cale_month_day_heading_pane_t6_ParamLimits

0x3f5d,	// (0x00022a80) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0002ddce) cale_month_day_heading_pane_t_ParamLimits

0x4207,	// (0x00022d2a) smil_status_volume_pane

0x4df8,	// (0x0002391b) postcard_address_pane_ParamLimits

0x4df8,	// (0x0002391b) postcard_address_pane

0x4e06,	// (0x00023929) postcard_message_pane_ParamLimits

0x4e06,	// (0x00023929) postcard_message_pane

0x5210,	// (0x00023d33) call2_cli_visual_pane_t1_ParamLimits

0x5210,	// (0x00023d33) call2_cli_visual_pane_t1

0x57e1,	// (0x00024304) postcard_message_pane_t1_ParamLimits

0x57e1,	// (0x00024304) postcard_message_pane_t1

0x57ca,	// (0x000242ed) postcard_address_pane_t1_ParamLimits

0x57ca,	// (0x000242ed) postcard_address_pane_t1

0x57bb,	// (0x000242de) popup_call3_audio_in_window_ParamLimits

0x57bb,	// (0x000242de) popup_call3_audio_in_window

0x5699,	// (0x000241bc) bg_popup_call3_in_pane_ParamLimits

0x5699,	// (0x000241bc) bg_popup_call3_in_pane

0x5701,	// (0x00024224) popup_call3_audio_in_window_g1_ParamLimits

0x5701,	// (0x00024224) popup_call3_audio_in_window_g1

0x5719,	// (0x0002423c) popup_call3_audio_in_window_g2_ParamLimits

0x5719,	// (0x0002423c) popup_call3_audio_in_window_g2

0x5731,	// (0x00024254) popup_call3_audio_in_window_g3_ParamLimits

0x5731,	// (0x00024254) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0002e13a) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0002e13a) popup_call3_audio_in_window_g

0x5759,	// (0x0002427c) popup_call3_audio_in_window_t1_ParamLimits

0x5759,	// (0x0002427c) popup_call3_audio_in_window_t1

0x5781,	// (0x000242a4) popup_call3_audio_in_window_t2_ParamLimits

0x5781,	// (0x000242a4) popup_call3_audio_in_window_t2

0x57a9,	// (0x000242cc) popup_call3_audio_in_window_t3_ParamLimits

0x57a9,	// (0x000242cc) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0002e143) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0002e143) popup_call3_audio_in_window_t

0xaf22,	// (0x00029a45) bg_popup_call3_rect_pane

0xc185,	// (0x0002aca8) bg_popup_call3_rect_pane_g1

0xa4f7,	// (0x0002901a) bg_popup_call3_rect_pane_g2

0xc18d,	// (0x0002acb0) bg_popup_call3_rect_pane_g3

0xc195,	// (0x0002acb8) bg_popup_call3_rect_pane_g4

0xc19d,	// (0x0002acc0) bg_popup_call3_rect_pane_g5

0xc1a5,	// (0x0002acc8) bg_popup_call3_rect_pane_g6

0xc1ad,	// (0x0002acd0) bg_popup_call3_rect_pane_g7

0x4a37,	// (0x0002355a) mup_visualizer_osc_pane

0xafe1,	// (0x00029b04) mup_visualizer_spec_pane

0x56b9,	// (0x000241dc) call3_video_qcif_pane_ParamLimits

0x56b9,	// (0x000241dc) call3_video_qcif_pane

0x56cb,	// (0x000241ee) call3_video_qcif_uncrop_pane_ParamLimits

0x56cb,	// (0x000241ee) call3_video_qcif_uncrop_pane

0x56db,	// (0x000241fe) call3_video_subqcif_pane_ParamLimits

0x56db,	// (0x000241fe) call3_video_subqcif_pane

0x56ef,	// (0x00024212) call3_video_subqcif_uncrop_pane_ParamLimits

0x56ef,	// (0x00024212) call3_video_subqcif_uncrop_pane

0x5749,	// (0x0002426c) popup_call3_audio_in_window_g4_ParamLimits

0x5749,	// (0x0002426c) popup_call3_audio_in_window_g4

0x5688,	// (0x000241ab) mup_spec_half_pane

0x5691,	// (0x000241b4) mup_spec_half_pane_cp

0xc431,	// (0x0002af54) mup_osc_middle_pane

0xc43a,	// (0x0002af5d) mup_visualizer_osc_pane_g1

0x5668,	// (0x0002418b) mup_spec_bar_pane_ParamLimits

0x5668,	// (0x0002418b) mup_spec_bar_pane

0xc41e,	// (0x0002af41) mup_spec_bar_pane_g1

0xc428,	// (0x0002af4b) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0002e12e) mup_spec_bar_pane_g

0x27cc,	// (0x000212ef) aid_cale_week_size_cell_pane_ParamLimits

0x27e6,	// (0x00021309) bg_cale_heading_pane_ParamLimits

0xa52b,	// (0x0002904e) bg_cale_pane_cp01_ParamLimits

0x280f,	// (0x00021332) cale_week_corner_pane_ParamLimits

0x282e,	// (0x00021351) cale_week_day_heading_pane_ParamLimits

0x285c,	// (0x0002137f) cale_week_scroll_pane_g1_ParamLimits

0x2880,	// (0x000213a3) cale_week_scroll_pane_g2_ParamLimits

0x2898,	// (0x000213bb) cale_week_scroll_pane_g3_ParamLimits

0x28b0,	// (0x000213d3) cale_week_scroll_pane_g4_ParamLimits

0x28c8,	// (0x000213eb) cale_week_scroll_pane_g5_ParamLimits

0x28e0,	// (0x00021403) cale_week_scroll_pane_g6_ParamLimits

0x2900,	// (0x00021423) cale_week_scroll_pane_g7_ParamLimits

0x2920,	// (0x00021443) cale_week_scroll_pane_g8_ParamLimits

0x2940,	// (0x00021463) cale_week_scroll_pane_g9_ParamLimits

0x295d,	// (0x00021480) cale_week_scroll_pane_g10_ParamLimits

0x297a,	// (0x0002149d) cale_week_scroll_pane_g11_ParamLimits

0x2997,	// (0x000214ba) cale_week_scroll_pane_g12_ParamLimits

0x29b4,	// (0x000214d7) cale_week_scroll_pane_g13_ParamLimits

0x29d9,	// (0x000214fc) cale_week_scroll_pane_g14_ParamLimits

0x2a02,	// (0x00021525) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0002dcd6) cale_week_scroll_pane_g_ParamLimits

0x2a2b,	// (0x0002154e) cale_week_time_pane_ParamLimits

0x2a4b,	// (0x0002156e) grid_cale_week_pane_ParamLimits

0xa549,	// (0x0002906c) listscroll_cale_week_pane_t1

0xa55b,	// (0x0002907e) scroll_pane_cp08_ParamLimits

0x36f0,	// (0x00022213) cale_month_corner_pane_ParamLimits

0xa914,	// (0x00029437) cale_month_pane_t1

0x3b94,	// (0x000226b7) cale_month_week_pane_ParamLimits

0xaec8,	// (0x000299eb) popup_call_status_window_g1_ParamLimits

0x441a,	// (0x00022f3d) popup_call_status_window_g2_ParamLimits

0x4426,	// (0x00022f49) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0002de7e) popup_call_status_window_g_ParamLimits

0xacaa,	// (0x000297cd) aid_call2_pane

0x4cdf,	// (0x00023802) msg_header_pane_g1

0x4df8,	// (0x0002391b) postcard_address2_pane_ParamLimits

0x4df8,	// (0x0002391b) postcard_address2_pane

0x4e06,	// (0x00023929) postcard_message2_pane_ParamLimits

0x4e06,	// (0x00023929) postcard_message2_pane

0x560f,	// (0x00024132) message2_row_pane_ParamLimits

0x560f,	// (0x00024132) message2_row_pane

0x5629,	// (0x0002414c) address2_row_pane_ParamLimits

0x5629,	// (0x0002414c) address2_row_pane

0xc3ec,	// (0x0002af0f) postcard_message2_row_pane_g1

0xc3f4,	// (0x0002af17) postcard_message2_row_pane_t1

0xc3ec,	// (0x0002af0f) address2_row_pane_g1

0xc3f4,	// (0x0002af17) address2_row_pane_t1

0x0f1c,	// (0x0001fa3f) aid_size_cell_vorec

0xa0e4,	// (0x00028c07) main_rss_pane

0x563c,	// (0x0002415f) rss_list_single_pane_ParamLimits

0x563c,	// (0x0002415f) rss_list_single_pane

0xc402,	// (0x0002af25) rss_list_single_pane_t1

0xc410,	// (0x0002af33) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0002e129) rss_list_single_pane_t

0xa0e4,	// (0x00028c07) main_camera2_pane

0xa0e4,	// (0x00028c07) main_video2_pane

0x1152,	// (0x0001fc75) cams_zoom_pane_cp2_ParamLimits

0x1152,	// (0x0001fc75) cams_zoom_pane_cp2

0x115e,	// (0x0001fc81) image2_vga_pane_ParamLimits

0x115e,	// (0x0001fc81) image2_vga_pane

0x116d,	// (0x0001fc90) main_camera2_pane_g1_ParamLimits

0x116d,	// (0x0001fc90) main_camera2_pane_g1

0x1179,	// (0x0001fc9c) main_camera2_pane_g2_ParamLimits

0x1179,	// (0x0001fc9c) main_camera2_pane_g2

0x1185,	// (0x0001fca8) main_camera2_pane_g3_ParamLimits

0x1185,	// (0x0001fca8) main_camera2_pane_g3

0x1191,	// (0x0001fcb4) main_camera2_pane_g4_ParamLimits

0x1191,	// (0x0001fcb4) main_camera2_pane_g4

0x119d,	// (0x0001fcc0) main_camera2_pane_g5_ParamLimits

0x119d,	// (0x0001fcc0) main_camera2_pane_g5

0x11a9,	// (0x0001fccc) main_camera2_pane_g6_ParamLimits

0x11a9,	// (0x0001fccc) main_camera2_pane_g6

0x11b5,	// (0x0001fcd8) main_camera2_pane_g7_ParamLimits

0x11b5,	// (0x0001fcd8) main_camera2_pane_g7

0x11c1,	// (0x0001fce4) main_camera2_pane_g8_ParamLimits

0x11c1,	// (0x0001fce4) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0002e14a) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0002e14a) main_camera2_pane_g

0x11d9,	// (0x0001fcfc) main_camera2_pane_t1_ParamLimits

0x11d9,	// (0x0001fcfc) main_camera2_pane_t1

0x11eb,	// (0x0001fd0e) main_camera2_pane_t2_ParamLimits

0x11eb,	// (0x0001fd0e) main_camera2_pane_t2

0x11fd,	// (0x0001fd20) main_camera2_pane_t3_ParamLimits

0x11fd,	// (0x0001fd20) main_camera2_pane_t3

0x120f,	// (0x0001fd32) main_camera2_pane_t4_ParamLimits

0x120f,	// (0x0001fd32) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0002e15d) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0002e15d) main_camera2_pane_t

0x126c,	// (0x0001fd8f) cams_zoom_pane_cp4_ParamLimits

0x126c,	// (0x0001fd8f) cams_zoom_pane_cp4

0x127c,	// (0x0001fd9f) image2_cif_pane_ParamLimits

0x127c,	// (0x0001fd9f) image2_cif_pane

0x1291,	// (0x0001fdb4) image2_subqcif_pane_ParamLimits

0x1291,	// (0x0001fdb4) image2_subqcif_pane

0x12a0,	// (0x0001fdc3) main_video2_pane_g1_ParamLimits

0x12a0,	// (0x0001fdc3) main_video2_pane_g1

0x12b2,	// (0x0001fdd5) main_video2_pane_g2_ParamLimits

0x12b2,	// (0x0001fdd5) main_video2_pane_g2

0x12c2,	// (0x0001fde5) main_video2_pane_g3_ParamLimits

0x12c2,	// (0x0001fde5) main_video2_pane_g3

0x12d2,	// (0x0001fdf5) main_video2_pane_g4_ParamLimits

0x12d2,	// (0x0001fdf5) main_video2_pane_g4

0x12e2,	// (0x0001fe05) main_video2_pane_g5_ParamLimits

0x12e2,	// (0x0001fe05) main_video2_pane_g5

0x12f2,	// (0x0001fe15) main_video2_pane_g6_ParamLimits

0x12f2,	// (0x0001fe15) main_video2_pane_g6

0x0005,

0xf649,	// (0x0002e16c) main_video2_pane_g_ParamLimits

0xf649,	// (0x0002e16c) main_video2_pane_g

0x1304,	// (0x0001fe27) main_video2_pane_t1_ParamLimits

0x1304,	// (0x0001fe27) main_video2_pane_t1

0x131e,	// (0x0001fe41) main_video2_pane_t2_ParamLimits

0x131e,	// (0x0001fe41) main_video2_pane_t2

0x1344,	// (0x0001fe67) main_video2_pane_t3_ParamLimits

0x1344,	// (0x0001fe67) main_video2_pane_t3

0x0002,

0xf656,	// (0x0002e179) main_video2_pane_t_ParamLimits

0xf656,	// (0x0002e179) main_video2_pane_t

0x5357,	// (0x00023e7a) call_muted_g2

0x0001,

0xf5f8,	// (0x0002e11b) call_muted_g

0xa0e4,	// (0x00028c07) main_mup2_pane

0xc471,	// (0x0002af94) main_mup2_pane_g1_ParamLimits

0xc471,	// (0x0002af94) main_mup2_pane_g1

0x57fc,	// (0x0002431f) main_mup2_pane_g2_ParamLimits

0x57fc,	// (0x0002431f) main_mup2_pane_g2

0x1393,	// (0x0001feb6) main_mup_pane_g13_cp1

0x139b,	// (0x0001febe) mup_volume_pane_cp1

0x581e,	// (0x00024341) main_mup2_pane_g4_ParamLimits

0x581e,	// (0x00024341) main_mup2_pane_g4

0x5833,	// (0x00024356) main_mup2_pane_g5_ParamLimits

0x5833,	// (0x00024356) main_mup2_pane_g5

0x5848,	// (0x0002436b) main_mup2_pane_g6_ParamLimits

0x5848,	// (0x0002436b) main_mup2_pane_g6

0x585d,	// (0x00024380) main_mup2_pane_g7_ParamLimits

0x585d,	// (0x00024380) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0002e180) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0002e180) main_mup2_pane_g

0x5879,	// (0x0002439c) main_mup2_pane_t1_ParamLimits

0x5879,	// (0x0002439c) main_mup2_pane_t1

0x5890,	// (0x000243b3) main_mup2_pane_t2_ParamLimits

0x5890,	// (0x000243b3) main_mup2_pane_t2

0x58a7,	// (0x000243ca) main_mup2_pane_t3_ParamLimits

0x58a7,	// (0x000243ca) main_mup2_pane_t3

0x58be,	// (0x000243e1) main_mup2_pane_t4_ParamLimits

0x58be,	// (0x000243e1) main_mup2_pane_t4

0x58d8,	// (0x000243fb) main_mup2_pane_t5_ParamLimits

0x58d8,	// (0x000243fb) main_mup2_pane_t5

0x58f2,	// (0x00024415) main_mup2_pane_t6_ParamLimits

0x58f2,	// (0x00024415) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0002e18f) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0002e18f) main_mup2_pane_t

0x592a,	// (0x0002444d) mup2_visualizer_pane_ParamLimits

0x592a,	// (0x0002444d) mup2_visualizer_pane

0x5960,	// (0x00024483) mup_progress_pane_cp_ParamLimits

0x5960,	// (0x00024483) mup_progress_pane_cp

0x137e,	// (0x0001fea1) mup_volume_pane_cp_ParamLimits

0x137e,	// (0x0001fea1) mup_volume_pane_cp

0x5979,	// (0x0002449c) mup2_visualizer_pane_g1_ParamLimits

0x5979,	// (0x0002449c) mup2_visualizer_pane_g1

0xc47d,	// (0x0002afa0) mup2_visualizer_pane_g2_ParamLimits

0xc47d,	// (0x0002afa0) mup2_visualizer_pane_g2

0x598e,	// (0x000244b1) mup2_visualizer_pane_g3_ParamLimits

0x598e,	// (0x000244b1) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0002e19c) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0002e19c) mup2_visualizer_pane_g

0xb251,	// (0x00029d74) aid_size_cell_fmradio

0x546d,	// (0x00023f90) aid_height_parent_landcape

0xa772,	// (0x00029295) wml_content_pane_cp

0xa77a,	// (0x0002929d) wml_tabs_pane

0xa783,	// (0x000292a6) popup_wml_miniature_window

0xa78b,	// (0x000292ae) scroll_pane_cp021

0xa79f,	// (0x000292c2) wml_content_pane_comp8

0xa0e4,	// (0x00028c07) bg_popup_sub_pane_cp05

0xc49b,	// (0x0002afbe) popup_wml_miniature_window_g1

0xc4a3,	// (0x0002afc6) wml_miniature_view_pane

0x599c,	// (0x000244bf) aid_size_wml_view

0x59a4,	// (0x000244c7) wml_miniature_view_pane_g1

0x59ad,	// (0x000244d0) wml_miniature_view_pane_g2

0x59b6,	// (0x000244d9) wml_miniature_view_pane_g3

0x59be,	// (0x000244e1) wml_miniature_view_pane_g4

0x59c6,	// (0x000244e9) wml_miniature_view_pane_g5

0x59ce,	// (0x000244f1) wml_miniature_view_pane_g6

0x59d6,	// (0x000244f9) wml_miniature_view_pane_g7

0x59de,	// (0x00024501) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0002e1a3) wml_miniature_view_pane_g

0xc471,	// (0x0002af94) background_graphic_ParamLimits

0xc471,	// (0x0002af94) background_graphic

0xc4ab,	// (0x0002afce) wml_tabs_2_pane

0xc4b4,	// (0x0002afd7) wml_tabs_3_pane_ParamLimits

0xc4b4,	// (0x0002afd7) wml_tabs_3_pane

0xc4c6,	// (0x0002afe9) wml_tabs_4_pane_ParamLimits

0xc4c6,	// (0x0002afe9) wml_tabs_4_pane

0xc4dc,	// (0x0002afff) wml_tabs_5_pane_ParamLimits

0xc4dc,	// (0x0002afff) wml_tabs_5_pane

0xc4f6,	// (0x0002b019) wml_tabs_pane_g2_ParamLimits

0xc4f6,	// (0x0002b019) wml_tabs_pane_g2

0xc50a,	// (0x0002b02d) wml_tabs_pane_g3_ParamLimits

0xc50a,	// (0x0002b02d) wml_tabs_pane_g3

0x59e6,	// (0x00024509) wml_tabs_2_active_pane_ParamLimits

0x59e6,	// (0x00024509) wml_tabs_2_active_pane

0x59f8,	// (0x0002451b) wml_tabs_2_passive_pane_ParamLimits

0x59f8,	// (0x0002451b) wml_tabs_2_passive_pane

0x5a0a,	// (0x0002452d) wml_tabs_3_active_pane_cp_ParamLimits

0x5a0a,	// (0x0002452d) wml_tabs_3_active_pane_cp

0x5a1d,	// (0x00024540) wml_tabs_3_passive_pane_ParamLimits

0x5a1d,	// (0x00024540) wml_tabs_3_passive_pane

0x5a2e,	// (0x00024551) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a2e,	// (0x00024551) wml_tabs_3_passive_pane_cp

0x5a43,	// (0x00024566) tabs_4_active_pane

0x5a4b,	// (0x0002456e) tabs_4_passive_pane

0x5a53,	// (0x00024576) tabs_4_passive_pane_cp

0x5a5b,	// (0x0002457e) tabs_4_passive_pane_cp2

0x5232,	// (0x00023d55) aid_height_text

0x4a00,	// (0x00023523) mup_volume_cont_pane_ParamLimits

0x4a00,	// (0x00023523) mup_volume_cont_pane

0x24c5,	// (0x00020fe8) aid_size_cell_pinb

0x24cf,	// (0x00020ff2) aid_size_list_pinb

0x5949,	// (0x0002446c) mup2_volume_cont_pane_ParamLimits

0x5949,	// (0x0002446c) mup2_volume_cont_pane

0x136a,	// (0x0001fe8d) mup2_volume_cont_pane_g1_ParamLimits

0x136a,	// (0x0001fe8d) mup2_volume_cont_pane_g1

0x213f,	// (0x00020c62) aid_size_cell_touch_ParamLimits

0x213f,	// (0x00020c62) aid_size_cell_touch

0x23af,	// (0x00020ed2) touch_pane_ParamLimits

0x23af,	// (0x00020ed2) touch_pane

0x9c70,	// (0x00028793) main_rss2_pane

0xc527,	// (0x0002b04a) listscroll_rss2_pane

0xc530,	// (0x0002b053) rss2_navigation_pane

0xc538,	// (0x0002b05b) list_rss2_pane

0xadce,	// (0x000298f1) scroll_pane_cp22

0xc540,	// (0x0002b063) rss2_navigation_pane_g1

0xc549,	// (0x0002b06c) rss2_navigation_pane_g2

0xc551,	// (0x0002b074) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0002e1b4) rss2_navigation_pane_g

0xc559,	// (0x0002b07c) rss2_navigation_pane_t1

0x5a65,	// (0x00024588) rss2_list_single_pane_ParamLimits

0x5a65,	// (0x00024588) rss2_list_single_pane

0xc567,	// (0x0002b08a) rss2_list_single_pane_t2

0xc575,	// (0x0002b098) rss2_list_single_pane_t3_ParamLimits

0xc575,	// (0x0002b098) rss2_list_single_pane_t3

0xc592,	// (0x0002b0b5) rss2_list_single_pane_t4

0x41f1,	// (0x00022d14) smil_status_pane_g1

0xa5d8,	// (0x000290fb) main_image2_pane_ParamLimits

0xa5d8,	// (0x000290fb) main_image2_pane

0x11cd,	// (0x0001fcf0) main_camera2_pane_g9_ParamLimits

0x11cd,	// (0x0001fcf0) main_camera2_pane_g9

0x1221,	// (0x0001fd44) main_camera2_pane_t5_ParamLimits

0x1221,	// (0x0001fd44) main_camera2_pane_t5

0x1233,	// (0x0001fd56) main_camera2_pane_t6_ParamLimits

0x1233,	// (0x0001fd56) main_camera2_pane_t6

0x5a88,	// (0x000245ab) main_image2_pane_g1_ParamLimits

0x5a88,	// (0x000245ab) main_image2_pane_g1

0x4fcf,	// (0x00023af2) smil2_video_pane_ParamLimits

0x4fcf,	// (0x00023af2) smil2_video_pane

0x9c8e,	// (0x000287b1) aid_zoom_text_primary_cp

0x9cc7,	// (0x000287ea) popup_preview_fixed_window

0xa6db,	// (0x000291fe) im_reading_pane_g1

0x1117,	// (0x0001fc3a) cams2_bc_adjust_pane_cp_ParamLimits

0x1117,	// (0x0001fc3a) cams2_bc_adjust_pane_cp

0x125e,	// (0x0001fd81) cams2_bc_adjust_pane_ParamLimits

0x125e,	// (0x0001fd81) cams2_bc_adjust_pane

0xd7bd,	// (0x0002c2e0) cams2_bc_adjust_pane_g1

0x13a3,	// (0x0001fec6) cams2_slider_pane

0x13ac,	// (0x0001fecf) cams2_slider_pane_g1

0x13b5,	// (0x0001fed8) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0002e1bb) cams2_slider_pane_g

0x0b4b,	// (0x0001f66e) calc_display_pane_ParamLimits

0x0b69,	// (0x0001f68c) calc_paper_pane_ParamLimits

0x0b85,	// (0x0001f6a8) grid_calc_pane_ParamLimits

0x1044,	// (0x0001fb67) popup_clock_digital_window_t1_ParamLimits

0xb1ee,	// (0x00029d11) main_image_pane_t1

0x0b31,	// (0x0001f654) aid_size_cell_calc_ParamLimits

0x0b31,	// (0x0001f654) aid_size_cell_calc

0x549f,	// (0x00023fc2) popup_blid_sat_info2_window_ParamLimits

0x549f,	// (0x00023fc2) popup_blid_sat_info2_window

0xc5a8,	// (0x0002b0cb) aid_size_cell_blid

0xc5b0,	// (0x0002b0d3) bg_popup_window_pane_cp07

0xc5d3,	// (0x0002b0f6) grid_popup_blid_pane

0xc5dd,	// (0x0002b100) heading_pane_cp05_ParamLimits

0xc5dd,	// (0x0002b100) heading_pane_cp05

0xc6a7,	// (0x0002b1ca) cell_popup_blid_pane_ParamLimits

0xc6a7,	// (0x0002b1ca) cell_popup_blid_pane

0xc6d1,	// (0x0002b1f4) cell_popup_blid_pane_g1

0xc6d9,	// (0x0002b1fc) cell_popup_blid_pane_t1

0x590f,	// (0x00024432) mup2_indicator_pane_ParamLimits

0x590f,	// (0x00024432) mup2_indicator_pane

0xaf22,	// (0x00029a45) mup2_visualizer_osc_pane

0xc489,	// (0x0002afac) mup2_visualizer_spec_pane_ParamLimits

0xc489,	// (0x0002afac) mup2_visualizer_spec_pane

0x5a94,	// (0x000245b7) mup2_spec_half_pane

0x5a9d,	// (0x000245c0) mup2_spec_half_pane_cp

0x5aa7,	// (0x000245ca) mup2_spec_bar_pane_ParamLimits

0x5aa7,	// (0x000245ca) mup2_spec_bar_pane

0xc41e,	// (0x0002af41) mup2_spec_bar_pane_g1

0xc428,	// (0x0002af4b) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0002e12e) mup2_spec_bar_pane_g

0x5ac6,	// (0x000245e9) mup2_osc_middle_pane

0xc43a,	// (0x0002af5d) mup2_visualizer_osc_pane_g1

0x9cf1,	// (0x00028814) popup_number_entry_window_t1_ParamLimits

0x9d04,	// (0x00028827) popup_number_entry_window_t2_ParamLimits

0x9d16,	// (0x00028839) popup_number_entry_window_t3_ParamLimits

0x2406,	// (0x00020f29) popup_number_entry_window_t5_ParamLimits

0x2406,	// (0x00020f29) popup_number_entry_window_t5

0xf0cd,	// (0x0002dbf0) popup_number_entry_window_t_ParamLimits

0x9d28,	// (0x0002884b) text_title_cp2_ParamLimits

0x1083,	// (0x0001fba6) aid_hotspot_pointer_text2_pane

0x10d9,	// (0x0001fbfc) main_viewer_pane_g9_ParamLimits

0x10d9,	// (0x0001fbfc) main_viewer_pane_g9

0xa914,	// (0x00029437) cale_month_pane_t1_ParamLimits

0xa93a,	// (0x0002945d) bg_cale_pane_ParamLimits

0xa952,	// (0x00029475) list_cale_pane_ParamLimits

0xa963,	// (0x00029486) listscroll_cale_day_pane_t1

0xa975,	// (0x00029498) scroll_pane_cp09_ParamLimits

0x4a3f,	// (0x00023562) main_mup_eq_pane_t1_ParamLimits

0x4a3f,	// (0x00023562) main_mup_eq_pane_t1

0x4a5b,	// (0x0002357e) main_mup_eq_pane_t2_ParamLimits

0x4a5b,	// (0x0002357e) main_mup_eq_pane_t2

0x4a77,	// (0x0002359a) main_mup_eq_pane_t3_ParamLimits

0x4a77,	// (0x0002359a) main_mup_eq_pane_t3

0x4a91,	// (0x000235b4) main_mup_eq_pane_t4_ParamLimits

0x4a91,	// (0x000235b4) main_mup_eq_pane_t4

0x4aab,	// (0x000235ce) main_mup_eq_pane_t5_ParamLimits

0x4aab,	// (0x000235ce) main_mup_eq_pane_t5

0x4ac5,	// (0x000235e8) main_mup_eq_pane_t6_ParamLimits

0x4ac5,	// (0x000235e8) main_mup_eq_pane_t6

0x4adb,	// (0x000235fe) main_mup_eq_pane_t7_ParamLimits

0x4adb,	// (0x000235fe) main_mup_eq_pane_t7

0x4af1,	// (0x00023614) main_mup_eq_pane_t8_ParamLimits

0x4af1,	// (0x00023614) main_mup_eq_pane_t8

0x4b07,	// (0x0002362a) main_mup_eq_pane_t9_ParamLimits

0x4b07,	// (0x0002362a) main_mup_eq_pane_t9

0x4b23,	// (0x00023646) main_mup_eq_pane_t10_ParamLimits

0x4b23,	// (0x00023646) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0002df7d) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0002df7d) main_mup_eq_pane_t

0x4be8,	// (0x0002370b) mup_equalizer_pane_cp5_ParamLimits

0x4c00,	// (0x00023723) mup_equalizer_pane_cp6_ParamLimits

0x4c18,	// (0x0002373b) mup_equalizer_pane_cp7_ParamLimits

0x9c70,	// (0x00028793) main_gallery_pane

0xc443,	// (0x0002af66) smil2_volume_pane

0xc44b,	// (0x0002af6e) smil_status_volume_pane_g1_ParamLimits

0xc45e,	// (0x0002af81) smil_status_volume_pane_g2_ParamLimits

0x10e5,	// (0x0001fc08) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0002e133) smil_status_volume_pane_g_ParamLimits

0xc5b0,	// (0x0002b0d3) bg_popup_window_pane_cp07_ParamLimits

0xc5be,	// (0x0002b0e1) blid_firmament_pane

0x5acf,	// (0x000245f2) aid_size_cell_gallery_ParamLimits

0x5acf,	// (0x000245f2) aid_size_cell_gallery

0x5add,	// (0x00024600) grid_gallery_pane_ParamLimits

0x5add,	// (0x00024600) grid_gallery_pane

0x5aed,	// (0x00024610) cell_gallery_pane_ParamLimits

0x5aed,	// (0x00024610) cell_gallery_pane

0xc6e7,	// (0x0002b20a) bg_cell_gallery_focus_pane_ParamLimits

0xc6e7,	// (0x0002b20a) bg_cell_gallery_focus_pane

0xc6f9,	// (0x0002b21c) cell_gallery_pane_g1_ParamLimits

0xc6f9,	// (0x0002b21c) cell_gallery_pane_g1

0x5b33,	// (0x00024656) cell_gallery_pane_g2_ParamLimits

0x5b33,	// (0x00024656) cell_gallery_pane_g2

0x5b40,	// (0x00024663) cell_gallery_pane_g3_ParamLimits

0x5b40,	// (0x00024663) cell_gallery_pane_g3

0xc705,	// (0x0002b228) cell_gallery_pane_g4_ParamLimits

0xc705,	// (0x0002b228) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0002e1e1) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0002e1e1) cell_gallery_pane_g

0xc711,	// (0x0002b234) bg_cell_gallery_focus_pane_g1

0xc719,	// (0x0002b23c) bg_cell_gallery_focus_pane_g2

0xc721,	// (0x0002b244) bg_cell_gallery_focus_pane_g3

0xc729,	// (0x0002b24c) bg_cell_gallery_focus_pane_g4

0xc731,	// (0x0002b254) bg_cell_gallery_focus_pane_g5

0xc739,	// (0x0002b25c) bg_cell_gallery_focus_pane_g6

0xc741,	// (0x0002b264) bg_cell_gallery_focus_pane_g7

0xc749,	// (0x0002b26c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0002e1ea) bg_cell_gallery_focus_pane_g

0xc751,	// (0x0002b274) aid_firma_cardinal

0xc765,	// (0x0002b288) blid_firmament_pane_t1

0xc77c,	// (0x0002b29f) blid_firmament_pane_t2

0xc793,	// (0x0002b2b6) blid_firmament_pane_t3

0xc7aa,	// (0x0002b2cd) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0002e1fb) blid_firmament_pane_t

0xc7c1,	// (0x0002b2e4) blid_sat_info_pane

0xc7d1,	// (0x0002b2f4) blid_sat_info_pane_g1

0xc7d1,	// (0x0002b2f4) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0002e204) blid_sat_info_pane_g

0xc7db,	// (0x0002b2fe) blid_sat_info_pane_t1

0xc7e9,	// (0x0002b30c) smil2_volume_content_pane

0xc7f2,	// (0x0002b315) smil2_volume_pane_g1

0xc7fa,	// (0x0002b31d) smil2_volume_content_pane_g1

0xc803,	// (0x0002b326) smil2_volume_content_pane_g2

0xc80c,	// (0x0002b32f) smil2_volume_content_pane_g3

0xc815,	// (0x0002b338) smil2_volume_content_pane_g4

0xc81e,	// (0x0002b341) smil2_volume_content_pane_g5

0xc827,	// (0x0002b34a) smil2_volume_content_pane_g6

0xc830,	// (0x0002b353) smil2_volume_content_pane_g7

0xc839,	// (0x0002b35c) smil2_volume_content_pane_g8

0xc842,	// (0x0002b365) smil2_volume_content_pane_g9

0xc84b,	// (0x0002b36e) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0002e209) smil2_volume_content_pane_g

0x2b09,	// (0x0002162c) cale_week_day_heading_pane_t1_ParamLimits

0x2b51,	// (0x00021674) cale_week_day_heading_pane_t2_ParamLimits

0x2b9e,	// (0x000216c1) cale_week_day_heading_pane_t3_ParamLimits

0x2beb,	// (0x0002170e) cale_week_day_heading_pane_t4_ParamLimits

0x2c38,	// (0x0002175b) cale_week_day_heading_pane_t5_ParamLimits

0x2c85,	// (0x000217a8) cale_week_day_heading_pane_t6_ParamLimits

0x2cd2,	// (0x000217f5) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0002dcf5) cale_week_day_heading_pane_t_ParamLimits

0xa57d,	// (0x000290a0) bg_cale_side_pane_ParamLimits

0x0cea,	// (0x0001f80d) cale_week_time_pane_t1_ParamLimits

0x0d2e,	// (0x0001f851) cale_week_time_pane_t2_ParamLimits

0x0d72,	// (0x0001f895) cale_week_time_pane_t3_ParamLimits

0x0db6,	// (0x0001f8d9) cale_week_time_pane_t4_ParamLimits

0x0dfa,	// (0x0001f91d) cale_week_time_pane_t5_ParamLimits

0x0e3e,	// (0x0001f961) cale_week_time_pane_t6_ParamLimits

0x0e82,	// (0x0001f9a5) cale_week_time_pane_t7_ParamLimits

0x0ece,	// (0x0001f9f1) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0002dd04) cale_week_time_pane_t_ParamLimits

0x2d1a,	// (0x0002183d) cell_cale_week_pane_g2_ParamLimits

0xa57d,	// (0x000290a0) bg_cale_side_pane_cp01_ParamLimits

0x3ffa,	// (0x00022b1d) cale_month_week_pane_t1_ParamLimits

0x4013,	// (0x00022b36) cale_month_week_pane_t2_ParamLimits

0x402c,	// (0x00022b4f) cale_month_week_pane_t3_ParamLimits

0x4045,	// (0x00022b68) cale_month_week_pane_t4_ParamLimits

0x405e,	// (0x00022b81) cale_month_week_pane_t5_ParamLimits

0x4079,	// (0x00022b9c) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0002dddd) cale_month_week_pane_t_ParamLimits

0x0fa4,	// (0x0001fac7) cell_cale_month_pane_g1_ParamLimits

0x9c70,	// (0x00028793) main_cale_event_viewer_pane

0x9c70,	// (0x00028793) listscroll_cale_event_viewer_pane

0xc854,	// (0x0002b377) list_cale_ev_pane

0xc85c,	// (0x0002b37f) scroll_pane_cp023

0x5b4d,	// (0x00024670) field_cale_ev_pane_ParamLimits

0x5b4d,	// (0x00024670) field_cale_ev_pane

0xc868,	// (0x0002b38b) field_cale_ev_content_pane_ParamLimits

0xc868,	// (0x0002b38b) field_cale_ev_content_pane

0xc874,	// (0x0002b397) field_cale_ev_pane_g1_ParamLimits

0xc874,	// (0x0002b397) field_cale_ev_pane_g1

0xc880,	// (0x0002b3a3) field_cale_ev_pane_g2_ParamLimits

0xc880,	// (0x0002b3a3) field_cale_ev_pane_g2

0xc898,	// (0x0002b3bb) field_cale_ev_pane_g3_ParamLimits

0xc898,	// (0x0002b3bb) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0002e21e) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0002e21e) field_cale_ev_pane_g

0xc8b0,	// (0x0002b3d3) field_cale_ev_pane_t1_ParamLimits

0xc8b0,	// (0x0002b3d3) field_cale_ev_pane_t1

0x5b71,	// (0x00024694) field_cale_ev_content_pane_t1_ParamLimits

0x5b71,	// (0x00024694) field_cale_ev_content_pane_t1

0x4cd4,	// (0x000237f7) bg_button_pane_cp01

0x27b0,	// (0x000212d3) listscroll_cale_week_pane_ParamLimits

0x27c2,	// (0x000212e5) popup_toolbar_window_cp01

0xa549,	// (0x0002906c) listscroll_cale_week_pane_t1_ParamLimits

0x27b0,	// (0x000212d3) listscroll_cale_day_pane_ParamLimits

0x27c2,	// (0x000212e5) popup_toolbar_window_cp02

0xa963,	// (0x00029486) listscroll_cale_day_pane_t1_ParamLimits

0x27b0,	// (0x000212d3) main_cale_month_pane_ParamLimits

0x5583,	// (0x000240a6) popup_toolbar_window_cp03_ParamLimits

0x5583,	// (0x000240a6) popup_toolbar_window_cp03

0x4edf,	// (0x00023a02) main_image_pane_g2_ParamLimits

0x4edf,	// (0x00023a02) main_image_pane_g2

0x4eeb,	// (0x00023a0e) main_image_pane_g3_ParamLimits

0x4eeb,	// (0x00023a0e) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0002e00f) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0002e00f) main_image_pane_g

0xb1ee,	// (0x00029d11) main_image_pane_t1_ParamLimits

0x4ef7,	// (0x00023a1a) main_image_pane_t2_ParamLimits

0x4ef7,	// (0x00023a1a) main_image_pane_t2

0x4f09,	// (0x00023a2c) main_image_pane_t3_ParamLimits

0x4f09,	// (0x00023a2c) main_image_pane_t3

0x4f1b,	// (0x00023a3e) main_image_pane_t4_ParamLimits

0x4f1b,	// (0x00023a3e) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0002e016) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0002e016) main_image_pane_t

0x4f2d,	// (0x00023a50) popup_image_details_window_cp01

0x4f37,	// (0x00023a5a) popup_toobar_trans_pane_cp01_ParamLimits

0x4f37,	// (0x00023a5a) popup_toobar_trans_pane_cp01

0x54f4,	// (0x00024017) popup_image_details_window_ParamLimits

0x54f4,	// (0x00024017) popup_image_details_window

0xc3a2,	// (0x0002aec5) popup_image_focus_window

0x1109,	// (0x0001fc2c) camera2_autofocus_pane_ParamLimits

0x1109,	// (0x0001fc2c) camera2_autofocus_pane

0x9c70,	// (0x00028793) bg_popup_sub_pane_cp06

0xc8c7,	// (0x0002b3ea) popup_image_focus_window_g1

0xc8cf,	// (0x0002b3f2) popup_image_focus_window_g2

0xc8d7,	// (0x0002b3fa) popup_image_focus_window_g3

0xc8df,	// (0x0002b402) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0002e225) popup_image_focus_window_g

0xc8e7,	// (0x0002b40a) popup_image_focus_window_t1

0xc8f5,	// (0x0002b418) popup_image_focus_window_t2

0xc905,	// (0x0002b428) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0002e22e) popup_image_focus_window_t

0xc913,	// (0x0002b436) camera2_autofocus_pane_g1

0xa5d8,	// (0x000290fb) bg_tb_trans_pane_cp01

0xc921,	// (0x0002b444) popup_image_details_window_g1

0xc934,	// (0x0002b457) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0002e240) popup_image_details_window_g

0xc95d,	// (0x0002b480) popup_image_details_window_t1

0xc96f,	// (0x0002b492) popup_image_details_window_t2

0xc988,	// (0x0002b4ab) popup_image_details_window_t3

0xc99c,	// (0x0002b4bf) popup_image_details_window_t4

0xc9b7,	// (0x0002b4da) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0002e247) popup_image_details_window_t

0xa3f0,	// (0x00028f13) bg_calc_paper_pane_ParamLimits

0x0bb1,	// (0x0001f6d4) grid_highlight_pane_cp013

0x0bbb,	// (0x0001f6de) list_calc_pane_ParamLimits

0x0bcd,	// (0x0001f6f0) scroll_pane_cp024

0xa404,	// (0x00028f27) bg_calc_display_pane_ParamLimits

0x0bd5,	// (0x0001f6f8) calc_display_pane_t1_ParamLimits

0x0bea,	// (0x0001f70d) calc_display_pane_t2_ParamLimits

0x0bff,	// (0x0001f722) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0002dc77) calc_display_pane_t_ParamLimits

0x0c6a,	// (0x0001f78d) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0002dc94) cell_calc_pane_g

0x0c73,	// (0x0001f796) cell_calc_pane_t1

0xa463,	// (0x00028f86) grid_highlight_pane_cp02_ParamLimits

0xa479,	// (0x00028f9c) toolbar_button_pane_cp01_ParamLimits

0xa479,	// (0x00028f9c) toolbar_button_pane_cp01

0xb233,	// (0x00029d56) temp_image_control_pane_ParamLimits

0xb233,	// (0x00029d56) temp_image_control_pane

0xa5d8,	// (0x000290fb) main_mp3_pane

0xc9d1,	// (0x0002b4f4) temp_image_control_pane_g1_ParamLimits

0xc9d1,	// (0x0002b4f4) temp_image_control_pane_g1

0xc9df,	// (0x0002b502) temp_image_control_pane_g2_ParamLimits

0xc9df,	// (0x0002b502) temp_image_control_pane_g2

0xc9f1,	// (0x0002b514) temp_image_control_pane_g3_ParamLimits

0xc9f1,	// (0x0002b514) temp_image_control_pane_g3

0x5bbc,	// (0x000246df) temp_image_control_pane_g4_ParamLimits

0x5bbc,	// (0x000246df) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0002e252) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0002e252) temp_image_control_pane_g

0xc9d1,	// (0x0002b4f4) main_mp3_pane_g1

0x5bcd,	// (0x000246f0) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0002e25b) main_mp3_pane_g

0xca34,	// (0x0002b557) main_mp3_pane_t1

0xa5e6,	// (0x00029109) main_camera_pane_g8_ParamLimits

0xa5e6,	// (0x00029109) main_camera_pane_g8

0x2f4e,	// (0x00021a71) main_video_pane_g7_ParamLimits

0x2f4e,	// (0x00021a71) main_video_pane_g7

0x124c,	// (0x0001fd6f) main_camera2_pane_t7_ParamLimits

0x124c,	// (0x0001fd6f) main_camera2_pane_t7

0xa732,	// (0x00029255) scroll_pane_cp025_ParamLimits

0xa732,	// (0x00029255) scroll_pane_cp025

0xa746,	// (0x00029269) scroll_pane_cp026_ParamLimits

0xa746,	// (0x00029269) scroll_pane_cp026

0xa755,	// (0x00029278) wml_content_pane_ParamLimits

0x9c70,	// (0x00028793) main_touch_calib_pane

0x5c71,	// (0x00024794) main_touch_calib_pane_g1

0x5c7d,	// (0x000247a0) main_touch_calib_pane_g2

0x5c89,	// (0x000247ac) main_touch_calib_pane_g3

0x5c95,	// (0x000247b8) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0002e279) main_touch_calib_pane_g

0x5ca1,	// (0x000247c4) main_touch_calib_pane_t1

0x5cb8,	// (0x000247db) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0002e282) main_touch_calib_pane_t

0xae49,	// (0x0002996c) mup_progress_pane_cp02

0xae68,	// (0x0002998b) navi_pane_g1

0xaee4,	// (0x00029a07) navi_pane_mp_t3

0xa5d8,	// (0x000290fb) main_mp3_pane_ParamLimits

0x55c5,	// (0x000240e8) navi_pane_ParamLimits

0xc9d1,	// (0x0002b4f4) main_mp3_pane_g1_ParamLimits

0x5bcd,	// (0x000246f0) main_mp3_pane_g2_ParamLimits

0x5bd9,	// (0x000246fc) main_mp3_pane_g3_ParamLimits

0x5bd9,	// (0x000246fc) main_mp3_pane_g3

0x5be5,	// (0x00024708) main_mp3_pane_g4_ParamLimits

0x5be5,	// (0x00024708) main_mp3_pane_g4

0xca01,	// (0x0002b524) main_mp3_pane_g5_ParamLimits

0xca01,	// (0x0002b524) main_mp3_pane_g5

0xca0f,	// (0x0002b532) main_mp3_pane_g6_ParamLimits

0xca0f,	// (0x0002b532) main_mp3_pane_g6

0xca1c,	// (0x0002b53f) main_mp3_pane_g7_ParamLimits

0xca1c,	// (0x0002b53f) main_mp3_pane_g7

0xca28,	// (0x0002b54b) main_mp3_pane_g8_ParamLimits

0xca28,	// (0x0002b54b) main_mp3_pane_g8

0xf738,	// (0x0002e25b) main_mp3_pane_g_ParamLimits

0x5bf1,	// (0x00024714) main_mp3_pane_t2

0x5c01,	// (0x00024724) main_mp3_pane_t3

0xca42,	// (0x0002b565) main_mp3_pane_t4

0xca50,	// (0x0002b573) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0002e26c) main_mp3_pane_t

0xca5e,	// (0x0002b581) mup_progress_pane_cp01

0x9c8e,	// (0x000287b1) aid_zoom_text_secondary2

0xc854,	// (0x0002b377) list_cale_ev2_pane

0xc85c,	// (0x0002b37f) scroll_pane_cp023_ParamLimits

0xd409,	// (0x0002bf2c) field_cale_ev2_pane_ParamLimits

0xd409,	// (0x0002bf2c) field_cale_ev2_pane

0x5d13,	// (0x00024836) field_cale_ev2_pane_g1_ParamLimits

0x5d13,	// (0x00024836) field_cale_ev2_pane_g1

0x5d1f,	// (0x00024842) field_cale_ev2_pane_g2_ParamLimits

0x5d1f,	// (0x00024842) field_cale_ev2_pane_g2

0x5d37,	// (0x0002485a) field_cale_ev2_pane_g3_ParamLimits

0x5d37,	// (0x0002485a) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0002e28d) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0002e28d) field_cale_ev2_pane_g

0x5d4f,	// (0x00024872) field_cale_ev2_pane_t1_ParamLimits

0x5d4f,	// (0x00024872) field_cale_ev2_pane_t1

0x5d66,	// (0x00024889) field_cale_ev2_pane_t2_ParamLimits

0x5d66,	// (0x00024889) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0002e296) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0002e296) field_cale_ev2_pane_t

0x4dbe,	// (0x000238e1) main_postcard_pane_g5_ParamLimits

0x4dbe,	// (0x000238e1) main_postcard_pane_g5

0x4dcc,	// (0x000238ef) main_postcard_pane_g6_ParamLimits

0x4dcc,	// (0x000238ef) main_postcard_pane_g6

0x2d8c,	// (0x000218af) camera2_autofocus_pane_cp_ParamLimits

0x2d8c,	// (0x000218af) camera2_autofocus_pane_cp

0xa5d8,	// (0x000290fb) main_mup3_pane

0x5d9b,	// (0x000248be) main_mup3_pane_g1_ParamLimits

0x5d9b,	// (0x000248be) main_mup3_pane_g1

0x5dbc,	// (0x000248df) main_mup3_pane_g2_ParamLimits

0x5dbc,	// (0x000248df) main_mup3_pane_g2

0x5e38,	// (0x0002495b) main_mup3_pane_g3_ParamLimits

0x5e38,	// (0x0002495b) main_mup3_pane_g3

0x5e7d,	// (0x000249a0) main_mup3_pane_g4_ParamLimits

0x5e7d,	// (0x000249a0) main_mup3_pane_g4

0x5ec0,	// (0x000249e3) main_mup3_pane_g5_ParamLimits

0x5ec0,	// (0x000249e3) main_mup3_pane_g5

0x5f05,	// (0x00024a28) main_mup3_pane_g6_ParamLimits

0x5f05,	// (0x00024a28) main_mup3_pane_g6

0xca72,	// (0x0002b595) main_mup3_pane_g7_ParamLimits

0xca72,	// (0x0002b595) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0002e2a6) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0002e2a6) main_mup3_pane_g

0x5f7b,	// (0x00024a9e) main_mup3_pane_t1_ParamLimits

0x5f7b,	// (0x00024a9e) main_mup3_pane_t1

0x5fe4,	// (0x00024b07) main_mup3_pane_t2_ParamLimits

0x5fe4,	// (0x00024b07) main_mup3_pane_t2

0x60ad,	// (0x00024bd0) main_mup3_pane_t4_ParamLimits

0x60ad,	// (0x00024bd0) main_mup3_pane_t4

0x6101,	// (0x00024c24) main_mup3_pane_t5_ParamLimits

0x6101,	// (0x00024c24) main_mup3_pane_t5

0x61af,	// (0x00024cd2) main_mup3_pane_t6_ParamLimits

0x61af,	// (0x00024cd2) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0002e2b7) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0002e2b7) main_mup3_pane_t

0x625b,	// (0x00024d7e) mup3_progress_pane_ParamLimits

0x625b,	// (0x00024d7e) mup3_progress_pane

0x62d5,	// (0x00024df8) popup_mup3_control_window_ParamLimits

0x62d5,	// (0x00024df8) popup_mup3_control_window

0xca80,	// (0x0002b5a3) popup_mup3_text_window

0x62f2,	// (0x00024e15) mup3_progress_pane_t1

0x6311,	// (0x00024e34) mup3_progress_pane_t2

0xca88,	// (0x0002b5ab) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0002e2c4) mup3_progress_pane_t

0xcaa5,	// (0x0002b5c8) mup_progress_pane_cp03

0x9c70,	// (0x00028793) bg_tb_trans_pane_cp04

0x6330,	// (0x00024e53) mup3_volume_pane

0x6338,	// (0x00024e5b) popup_mup3_control_window_g1

0xd424,	// (0x0002bf47) mup3_volume_pane_g1

0xd42d,	// (0x0002bf50) mup3_volume_pane_g2

0xd436,	// (0x0002bf59) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0002e2cb) mup3_volume_pane_g

0x9c70,	// (0x00028793) bg_tb_trans_pane_cp03

0xcab5,	// (0x0002b5d8) popup_mup3_text_window_g1

0xcabd,	// (0x0002b5e0) popup_mup3_text_window_t1

0xa44c,	// (0x00028f6f) list_calc_item_pane_g1_ParamLimits

0xc51e,	// (0x0002b041) mup_volume_pane_cp_g1

0x5cd1,	// (0x000247f4) main_touch_calib_pane_t3

0x5ce7,	// (0x0002480a) main_touch_calib_pane_t4

0x5cfd,	// (0x00024820) main_touch_calib_pane_t5

0x9c7a,	// (0x0002879d) aid_cell_size_toolbar2

0x9c82,	// (0x000287a5) aid_popup3_width_pane

0x9c8e,	// (0x000287b1) aid_zoom_text_msg_primary

0x0f84,	// (0x0001faa7) vorec_t7

0xa410,	// (0x00028f33) bg_calc_paper_pane_g1_ParamLimits

0xa41c,	// (0x00028f3f) bg_calc_paper_pane_g2_ParamLimits

0xa428,	// (0x00028f4b) bg_calc_paper_pane_g3_ParamLimits

0xa434,	// (0x00028f57) bg_calc_paper_pane_g4_ParamLimits

0xa440,	// (0x00028f63) bg_calc_paper_pane_g5_ParamLimits

0x2681,	// (0x000211a4) bg_calc_paper_pane_g6_ParamLimits

0x2692,	// (0x000211b5) bg_calc_paper_pane_g7_ParamLimits

0x26a3,	// (0x000211c6) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0002dc7e) bg_calc_paper_pane_g_ParamLimits

0x26b6,	// (0x000211d9) calc_bg_paper_pane_g9_ParamLimits

0x2e7d,	// (0x000219a0) image_qvga_pane_ParamLimits

0x2e7d,	// (0x000219a0) image_qvga_pane

0xa33f,	// (0x00028e62) bg_popup_sub_pane_cp04_ParamLimits

0xb16a,	// (0x00029c8d) popup_mup_playback_window_g1_ParamLimits

0xb176,	// (0x00029c99) popup_mup_playback_window_t1_ParamLimits

0xb18b,	// (0x00029cae) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0002e00a) popup_mup_playback_window_t_ParamLimits

0x580d,	// (0x00024330) main_mup2_pane_g3_ParamLimits

0x580d,	// (0x00024330) main_mup2_pane_g3

0x3240,	// (0x00021d63) popup_toolbar_window_cp04

0xb586,	// (0x0002a0a9) popup_call2_audio_second_window_g3_ParamLimits

0xb586,	// (0x0002a0a9) popup_call2_audio_second_window_g3

0xb990,	// (0x0002a4b3) popup_call2_audio_first_window_g4_ParamLimits

0xb990,	// (0x0002a4b3) popup_call2_audio_first_window_g4

0xc00f,	// (0x0002ab32) popup_call2_audio_in_window_g4_ParamLimits

0xc00f,	// (0x0002ab32) popup_call2_audio_in_window_g4

0x4ed2,	// (0x000239f5) aid_area_sk_bg_cut_ParamLimits

0x4ed2,	// (0x000239f5) aid_area_sk_bg_cut

0xb1a0,	// (0x00029cc3) aid_area_sk_bg_cut_2_ParamLimits

0xb1a0,	// (0x00029cc3) aid_area_sk_bg_cut_2

0x5b23,	// (0x00024646) aid_placing_details_win

0x5b2b,	// (0x0002464e) aid_placing_details_win_2

0xc913,	// (0x0002b436) camera2_autofocus_pane_g1_ParamLimits

0x2345,	// (0x00020e68) popup_fixed_preview_cale_window_ParamLimits

0x2345,	// (0x00020e68) popup_fixed_preview_cale_window

0xaf33,	// (0x00029a56) navi_slider_pane_g3

0xaf3c,	// (0x00029a5f) navi_slider_pane_g4

0xaf45,	// (0x00029a68) navi_slider_pane_g5

0xaf33,	// (0x00029a56) navi_slider_pane_g6

0x106a,	// (0x0001fb8d) navi_slider_pane_g7

0xb05a,	// (0x00029b7d) mup_scale_pane_g3

0xb063,	// (0x00029b86) mup_scale_pane_g4

0xb06c,	// (0x00029b8f) mup_scale_pane_g5

0x4c30,	// (0x00023753) mup_scale_pane_g6

0x4c39,	// (0x0002375c) mup_scale_pane_g7

0xaf33,	// (0x00029a56) cams2_slider_pane_g3

0xc5a0,	// (0x0002b0c3) cams2_slider_pane_g4

0x13be,	// (0x0001fee1) cams2_slider_pane_g5

0xaf33,	// (0x00029a56) cams2_slider_pane_g6

0x13c6,	// (0x0001fee9) cams2_slider_pane_g7

0xc7d1,	// (0x0002b2f4) camera2_autofocus_pane_cp_g1

0xc374,	// (0x0002ae97) bg_popup_preview_window_pane_cp02_ParamLimits

0xc374,	// (0x0002ae97) bg_popup_preview_window_pane_cp02

0xcacb,	// (0x0002b5ee) list_fp_cale_pane_ParamLimits

0xcacb,	// (0x0002b5ee) list_fp_cale_pane

0xcad7,	// (0x0002b5fa) popup_fixed_preview_cale_window_t1_ParamLimits

0xcad7,	// (0x0002b5fa) popup_fixed_preview_cale_window_t1

0x6341,	// (0x00024e64) popup_fixed_preview_cale_window_t2_ParamLimits

0x6341,	// (0x00024e64) popup_fixed_preview_cale_window_t2

0x6356,	// (0x00024e79) popup_fixed_preview_cale_window_t3_ParamLimits

0x6356,	// (0x00024e79) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0002e2d2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0002e2d2) popup_fixed_preview_cale_window_t

0x636b,	// (0x00024e8e) list_single_fp_cale_pane_ParamLimits

0x636b,	// (0x00024e8e) list_single_fp_cale_pane

0xcaf5,	// (0x0002b618) list_single_fp_cale_pane_g1_ParamLimits

0xcaf5,	// (0x0002b618) list_single_fp_cale_pane_g1

0xcb01,	// (0x0002b624) list_single_fp_cale_pane_g2_ParamLimits

0xcb01,	// (0x0002b624) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0002e2d9) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0002e2d9) list_single_fp_cale_pane_g

0xcb1a,	// (0x0002b63d) list_single_fp_cale_pane_t1_ParamLimits

0xcb1a,	// (0x0002b63d) list_single_fp_cale_pane_t1

0xcb2c,	// (0x0002b64f) list_single_fp_cale_pane_t2_ParamLimits

0xcb2c,	// (0x0002b64f) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0002e2e0) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0002e2e0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c70,	// (0x00028793) main_dialer_pane

0x637b,	// (0x00024e9e) aid_cell_size_keypad

0x6385,	// (0x00024ea8) dialer_ne_pane

0x638f,	// (0x00024eb2) grid_dialer_command_1_pane

0x6397,	// (0x00024eba) grid_dialer_command_2_pane

0x639f,	// (0x00024ec2) grid_dialer_keypad_pane

0x63b3,	// (0x00024ed6) bg_popup_call_pane_cp06_ParamLimits

0x63b3,	// (0x00024ed6) bg_popup_call_pane_cp06

0x63bf,	// (0x00024ee2) dialer_ne_clear_pane_ParamLimits

0x63bf,	// (0x00024ee2) dialer_ne_clear_pane

0xcb5f,	// (0x0002b682) dialer_ne_pane_g1

0xcb67,	// (0x0002b68a) dialer_ne_pane_t1_ParamLimits

0xcb67,	// (0x0002b68a) dialer_ne_pane_t1

0x63cb,	// (0x00024eee) dialer_ne_pane_t2_ParamLimits

0x63cb,	// (0x00024eee) dialer_ne_pane_t2

0x63e8,	// (0x00024f0b) dialer_ne_pane_t3_ParamLimits

0x63e8,	// (0x00024f0b) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0002e2e5) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0002e2e5) dialer_ne_pane_t

0x640c,	// (0x00024f2f) dialer_ne_pane_t3_copy1_ParamLimits

0x640c,	// (0x00024f2f) dialer_ne_pane_t3_copy1

0x6430,	// (0x00024f53) cell_dialer_keypad_pane_ParamLimits

0x6430,	// (0x00024f53) cell_dialer_keypad_pane

0x6447,	// (0x00024f6a) cell_dialer_command_1_pane_ParamLimits

0x6447,	// (0x00024f6a) cell_dialer_command_1_pane

0x645d,	// (0x00024f80) cell_dialer_command_2_pane_ParamLimits

0x645d,	// (0x00024f80) cell_dialer_command_2_pane

0xcb79,	// (0x0002b69c) bg_button_pane_cp02_ParamLimits

0xcb79,	// (0x0002b69c) bg_button_pane_cp02

0x646c,	// (0x00024f8f) cell_dialer_keypad_pane_g1_ParamLimits

0x646c,	// (0x00024f8f) cell_dialer_keypad_pane_g1

0xcb79,	// (0x0002b69c) bg_button_pane_cp03_ParamLimits

0xcb79,	// (0x0002b69c) bg_button_pane_cp03

0x6481,	// (0x00024fa4) cell_dialer_command_1_pane_g1_ParamLimits

0x6481,	// (0x00024fa4) cell_dialer_command_1_pane_g1

0xcb85,	// (0x0002b6a8) bg_button_pane_cp04

0x6495,	// (0x00024fb8) cell_dialer_command_2_pane_g1

0xaf22,	// (0x00029a45) bg_button_pane_cp06

0xcb8d,	// (0x0002b6b0) dialer_ne_clear_pane_g1

0x46fa,	// (0x0002321d) navi_pane_g2

0x4728,	// (0x0002324b) navi_pane_g3

0x0002,

0xf3ea,	// (0x0002df0d) navi_pane_g

0x4753,	// (0x00023276) navi_pane_mv_g2

0x477a,	// (0x0002329d) navi_pane_mv_g5

0x4782,	// (0x000232a5) navi_pane_mv_t1

0xa404,	// (0x00028f27) main_clock2_pane

0x64d3,	// (0x00024ff6) main_clock2_list_pane_ParamLimits

0x64d3,	// (0x00024ff6) main_clock2_list_pane

0x64fd,	// (0x00025020) main_clock2_pane_t1_ParamLimits

0x64fd,	// (0x00025020) main_clock2_pane_t1

0x651f,	// (0x00025042) main_clock2_pane_t2_ParamLimits

0x651f,	// (0x00025042) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002e2ec) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002e2ec) main_clock2_pane_t

0x657c,	// (0x0002509f) popup_clock_analogue_window_cp03_ParamLimits

0x657c,	// (0x0002509f) popup_clock_analogue_window_cp03

0x659c,	// (0x000250bf) popup_clock_digital_window_cp02_ParamLimits

0x659c,	// (0x000250bf) popup_clock_digital_window_cp02

0x660d,	// (0x00025130) main_clock2_list_single_pane_ParamLimits

0x660d,	// (0x00025130) main_clock2_list_single_pane

0xaf22,	// (0x00029a45) list_highlight_pane_cp05

0xcba9,	// (0x0002b6cc) main_clock2_list_single_pane_t1

0x3240,	// (0x00021d63) popup_toolbar_window_cp04_ParamLimits

0x5b8c,	// (0x000246af) camera2_autofocus_pane_g2_ParamLimits

0x5b8c,	// (0x000246af) camera2_autofocus_pane_g2

0x5b98,	// (0x000246bb) camera2_autofocus_pane_g3_ParamLimits

0x5b98,	// (0x000246bb) camera2_autofocus_pane_g3

0x5ba4,	// (0x000246c7) camera2_autofocus_pane_g4_ParamLimits

0x5ba4,	// (0x000246c7) camera2_autofocus_pane_g4

0x5bb0,	// (0x000246d3) camera2_autofocus_pane_g5_ParamLimits

0x5bb0,	// (0x000246d3) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0002e235) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0002e235) camera2_autofocus_pane_g

0x5d7b,	// (0x0002489e) camera2_autofocus_pane_cp_g2

0x5d83,	// (0x000248a6) camera2_autofocus_pane_cp_g3

0x5d8b,	// (0x000248ae) camera2_autofocus_pane_cp_g4

0x5d93,	// (0x000248b6) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0002e29b) camera2_autofocus_pane_cp_g

0x63ab,	// (0x00024ece) popup_dialer_spcha_window

0x9c70,	// (0x00028793) bg_popup_sub_pane_cp07

0xcbb7,	// (0x0002b6da) list_spcha_pane

0xcbbf,	// (0x0002b6e2) list_single_spcha_pane_ParamLimits

0xcbbf,	// (0x0002b6e2) list_single_spcha_pane

0x9c70,	// (0x00028793) list_highlight_pane_cp06

0xcbd0,	// (0x0002b6f3) list_single_spcha_pane_t1

0xbdb9,	// (0x0002a8dc) popup_call2_audio_out_window_g4_ParamLimits

0xbdb9,	// (0x0002a8dc) popup_call2_audio_out_window_g4

0x9c70,	// (0x00028793) main_imed2_pane

0xc3ac,	// (0x0002aecf) popup_imed_adjust2_window

0x5502,	// (0x00024025) popup_imed_trans_window_ParamLimits

0x5502,	// (0x00024025) popup_imed_trans_window

0xc609,	// (0x0002b12c) popup_blid_sat_info2_window_t1

0xc617,	// (0x0002b13a) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0002e1ca) popup_blid_sat_info2_window_t

0x663f,	// (0x00025162) aid_size_cell_colour_35

0x6659,	// (0x0002517c) aid_size_cell_colour_112

0x6670,	// (0x00025193) aid_size_cell_effect

0xa5d8,	// (0x000290fb) bg_tb_trans_pane_cp02

0xaebc,	// (0x000299df) heading_imed_pane

0x668a,	// (0x000251ad) listscroll_imed_pane

0xcbde,	// (0x0002b701) heading_imed_pane_g1

0xcbe6,	// (0x0002b709) heading_imed_pane_t1

0xcbf4,	// (0x0002b717) grid_imed_colour_35_pane_ParamLimits

0xcbf4,	// (0x0002b717) grid_imed_colour_35_pane

0x6696,	// (0x000251b9) grid_imed_effect_pane

0xcc10,	// (0x0002b733) list_imed_aspect_pane

0x66a6,	// (0x000251c9) scroll_pane_cp027_ParamLimits

0x66a6,	// (0x000251c9) scroll_pane_cp027

0x66b2,	// (0x000251d5) cell_imed_effect_pane_ParamLimits

0x66b2,	// (0x000251d5) cell_imed_effect_pane

0xcc18,	// (0x0002b73b) cell_imed_colour_pane_ParamLimits

0xcc18,	// (0x0002b73b) cell_imed_colour_pane

0xcc62,	// (0x0002b785) cell_imed_colour_pane_g1_ParamLimits

0xcc62,	// (0x0002b785) cell_imed_colour_pane_g1

0xcc73,	// (0x0002b796) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc73,	// (0x0002b796) hgihlgiht_grid_pane_cp016

0x66ce,	// (0x000251f1) cell_imed_effect_pane_g1

0x66d6,	// (0x000251f9) grid_highlight_pane_cp017

0xcc84,	// (0x0002b7a7) list_imed_single_pane_ParamLimits

0xcc84,	// (0x0002b7a7) list_imed_single_pane

0x9c70,	// (0x00028793) list_highlight_pane_cp07

0xcc98,	// (0x0002b7bb) list_imed_aspect_pane_comp1_t1

0xc380,	// (0x0002aea3) bg_tb_trans_pane_cp05

0xccba,	// (0x0002b7dd) popup_imed_adjust2_window_g1

0xcce1,	// (0x0002b804) popup_imed_adjust2_window_t1

0xccf9,	// (0x0002b81c) slider_imed_adjust_pane

0xcd0d,	// (0x0002b830) slider_imed_adjust_pane_g1

0xcd1d,	// (0x0002b840) slider_imed_adjust_pane_g2

0xcd2d,	// (0x0002b850) slider_imed_adjust_pane_g3

0xcd3e,	// (0x0002b861) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002e309) slider_imed_adjust_pane_g

0x66df,	// (0x00025202) aid_size_cell_clipart2

0x66eb,	// (0x0002520e) grid_imed_clipart_pane

0xcd4f,	// (0x0002b872) scroll_pane_cp031

0x66f5,	// (0x00025218) cell_imed_clipart_pane_ParamLimits

0x66f5,	// (0x00025218) cell_imed_clipart_pane

0x6713,	// (0x00025236) cell_imed_clipart_pane_g1

0x9c70,	// (0x00028793) grid_highlight_pane_cp014

0x64df,	// (0x00025002) main_clock2_pane_g1_ParamLimits

0x64df,	// (0x00025002) main_clock2_pane_g1

0x65b8,	// (0x000250db) aid_call2_pane_cp10

0x65ca,	// (0x000250ed) aid_call_pane_cp10

0xae3d,	// (0x00029960) popup_clock_analogue_window_cp10_g1

0xae3d,	// (0x00029960) popup_clock_analogue_window_cp10_g2

0x65dc,	// (0x000250ff) popup_clock_analogue_window_cp10_g3

0x65dc,	// (0x000250ff) popup_clock_analogue_window_cp10_g4

0xae3d,	// (0x00029960) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002e2f7) popup_clock_analogue_window_cp10_g

0x65ee,	// (0x00025111) popup_clock_analogue_window_cp10_t1

0x13cf,	// (0x0001fef2) clock_digital_number_pane_cp10_ParamLimits

0x13cf,	// (0x0001fef2) clock_digital_number_pane_cp10

0x13e7,	// (0x0001ff0a) clock_digital_number_pane_cp11_ParamLimits

0x13e7,	// (0x0001ff0a) clock_digital_number_pane_cp11

0x13ff,	// (0x0001ff22) clock_digital_number_pane_cp12_ParamLimits

0x13ff,	// (0x0001ff22) clock_digital_number_pane_cp12

0x1417,	// (0x0001ff3a) clock_digital_number_pane_cp13_ParamLimits

0x1417,	// (0x0001ff3a) clock_digital_number_pane_cp13

0x142f,	// (0x0001ff52) clock_digital_separator_pane_cp10_ParamLimits

0x142f,	// (0x0001ff52) clock_digital_separator_pane_cp10

0x661f,	// (0x00025142) popup_clock_digital_window_cp02_t1_ParamLimits

0x661f,	// (0x00025142) popup_clock_digital_window_cp02_t1

0xa337,	// (0x00028e5a) clock_digital_number_pane_cp10_g1

0xa337,	// (0x00028e5a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002e312) clock_digital_number_pane_cp10_g

0xa337,	// (0x00028e5a) clock_digital_separator_pane_cp10_g1

0xa337,	// (0x00028e5a) clock_digital_separator_pane_g2_cp10

0xaef2,	// (0x00029a15) navi_pane_vded_g4

0xaefb,	// (0x00029a1e) navi_pane_vded_g5

0xaf04,	// (0x00029a27) navi_pane_vded_t1

0x9c70,	// (0x00028793) main_vded_pane

0x671c,	// (0x0002523f) main_vded_pane_g1

0x6728,	// (0x0002524b) main_vded_pane_g2

0x6732,	// (0x00025255) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002e317) main_vded_pane_g

0x673c,	// (0x0002525f) main_vded_pane_t1

0x674a,	// (0x0002526d) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002e31e) main_vded_pane_t

0x6758,	// (0x0002527b) vded_slider_pane

0x6762,	// (0x00025285) vded_video_pane

0xcd57,	// (0x0002b87a) vded_video_pane_g1

0x676e,	// (0x00025291) vded_video_pane_g2

0xc7d1,	// (0x0002b2f4) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002e323) vded_video_pane_g

0xcd61,	// (0x0002b884) vded_slider_pane_g1

0xc51e,	// (0x0002b041) vded_slider_pane_g2

0xcd6a,	// (0x0002b88d) vded_slider_pane_g3

0xcd73,	// (0x0002b896) vded_slider_pane_g4

0xcd7c,	// (0x0002b89f) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002e32a) vded_slider_pane_g

0x62c9,	// (0x00024dec) mup3_rocker_pane_ParamLimits

0x62c9,	// (0x00024dec) mup3_rocker_pane

0x6777,	// (0x0002529a) mup3_control_keys_pane_g1

0x677f,	// (0x000252a2) mup3_control_keys_pane_g2

0x6787,	// (0x000252aa) mup3_control_keys_pane_g3

0x678f,	// (0x000252b2) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002e335) mup3_control_keys_pane_g

0x2363,	// (0x00020e86) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2363,	// (0x00020e86) popup_toolbar2_fixed_window_cp01

0x62e5,	// (0x00024e08) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62e5,	// (0x00024e08) popup_toolbar2_fixed_window_cp02

0xb6f8,	// (0x0002a21b) popup_call2_audio_second_window_t4_ParamLimits

0xb6f8,	// (0x0002a21b) popup_call2_audio_second_window_t4

0xbc26,	// (0x0002a749) popup_call2_audio_first_window_t6_ParamLimits

0xbc26,	// (0x0002a749) popup_call2_audio_first_window_t6

0xbebc,	// (0x0002a9df) popup_call2_audio_out_window_t6_ParamLimits

0xbebc,	// (0x0002a9df) popup_call2_audio_out_window_t6

0x9c70,	// (0x00028793) main_vitu_pane

0x679f,	// (0x000252c2) aid_size_cell_itu_ParamLimits

0x679f,	// (0x000252c2) aid_size_cell_itu

0x2395,	// (0x00020eb8) bg_popup_window_pane_cp08_ParamLimits

0x2395,	// (0x00020eb8) bg_popup_window_pane_cp08

0x67ad,	// (0x000252d0) field_vitu_entry_pane_ParamLimits

0x67ad,	// (0x000252d0) field_vitu_entry_pane

0x67bc,	// (0x000252df) grid_vitu_function_pane_ParamLimits

0x67bc,	// (0x000252df) grid_vitu_function_pane

0x67cc,	// (0x000252ef) grid_vitu_itu_pane_ParamLimits

0x67cc,	// (0x000252ef) grid_vitu_itu_pane

0x67dc,	// (0x000252ff) cell_vitu_itu_pane_ParamLimits

0x67dc,	// (0x000252ff) cell_vitu_itu_pane

0x67f3,	// (0x00025316) cell_vitu_function_pane_ParamLimits

0x67f3,	// (0x00025316) cell_vitu_function_pane

0xa5d8,	// (0x000290fb) bg_popup_sub_pane_cp08_ParamLimits

0xa5d8,	// (0x000290fb) bg_popup_sub_pane_cp08

0x6807,	// (0x0002532a) field_vitu_entry_pane_t1_ParamLimits

0x6807,	// (0x0002532a) field_vitu_entry_pane_t1

0xcd9d,	// (0x0002b8c0) field_vitu_entry_pane_t2_ParamLimits

0xcd9d,	// (0x0002b8c0) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002e343) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002e343) field_vitu_entry_pane_t

0xcdba,	// (0x0002b8dd) bg_button_pane_cp05_ParamLimits

0xcdba,	// (0x0002b8dd) bg_button_pane_cp05

0x6821,	// (0x00025344) cell_vitu_itu_pane_g1

0x6839,	// (0x0002535c) cell_vitu_itu_pane_t1_ParamLimits

0x6839,	// (0x0002535c) cell_vitu_itu_pane_t1

0x684b,	// (0x0002536e) cell_vitu_itu_pane_t2_ParamLimits

0x684b,	// (0x0002536e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002e348) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002e348) cell_vitu_itu_pane_t

0xcdc8,	// (0x0002b8eb) bg_button_pane_cp07

0x688e,	// (0x000253b1) cell_vitu_function_pane_g1

0x0ba9,	// (0x0001f6cc) main_calc_pane_g1

0x2167,	// (0x00020c8a) aid_visual_content_pane

0x9c70,	// (0x00028793) main_vradio_pane

0x6897,	// (0x000253ba) main_vradio_pane_g1_ParamLimits

0x6897,	// (0x000253ba) main_vradio_pane_g1

0xcdd2,	// (0x0002b8f5) main_vradio_pane_g2_ParamLimits

0xcdd2,	// (0x0002b8f5) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002e34f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002e34f) main_vradio_pane_g

0x68a5,	// (0x000253c8) main_vradio_pane_t1_ParamLimits

0x68a5,	// (0x000253c8) main_vradio_pane_t1

0x68b7,	// (0x000253da) main_vradio_pane_t2_ParamLimits

0x68b7,	// (0x000253da) main_vradio_pane_t2

0xcddf,	// (0x0002b902) main_vradio_pane_t3_ParamLimits

0xcddf,	// (0x0002b902) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002e354) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002e354) main_vradio_pane_t

0x68c9,	// (0x000253ec) vradio_rocker_control_pane_ParamLimits

0x68c9,	// (0x000253ec) vradio_rocker_control_pane

0x68d5,	// (0x000253f8) vradio_station_info_pane_ParamLimits

0x68d5,	// (0x000253f8) vradio_station_info_pane

0xcdf3,	// (0x0002b916) vradio_frequency_info_pane_ParamLimits

0xcdf3,	// (0x0002b916) vradio_frequency_info_pane

0xc7d1,	// (0x0002b2f4) vradio_station_info_pane_g1

0xce02,	// (0x0002b925) vradio_station_info_pane_t1_ParamLimits

0xce02,	// (0x0002b925) vradio_station_info_pane_t1

0xce24,	// (0x0002b947) vradio_station_info_pane_t2_ParamLimits

0xce24,	// (0x0002b947) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002e35b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002e35b) vradio_station_info_pane_t

0xce36,	// (0x0002b959) vradio_tuning_pane

0xce3e,	// (0x0002b961) vradio_rocker_control_pane_g1

0xce46,	// (0x0002b969) vradio_rocker_control_pane_g2

0xce4e,	// (0x0002b971) vradio_rocker_control_pane_g3

0xce56,	// (0x0002b979) vradio_rocker_control_pane_g4

0xce5e,	// (0x0002b981) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002e360) vradio_rocker_control_pane_g

0x68e2,	// (0x00025405) vradio_frequency_info_pane_g1

0xce66,	// (0x0002b989) vradio_frequency_info_pane_t1_ParamLimits

0xce66,	// (0x0002b989) vradio_frequency_info_pane_t1

0x68ec,	// (0x0002540f) vradio_tuning_pane_g1

0x68f7,	// (0x0002541a) vradio_tuning_pane_t1

0x9c9e,	// (0x000287c1) area_side_right_pane_ParamLimits

0x9c9e,	// (0x000287c1) area_side_right_pane

0xc33b,	// (0x0002ae5e) status_small_pane_g1

0xc343,	// (0x0002ae66) status_small_pane_g2

0xc34c,	// (0x0002ae6f) status_small_pane_g3

0xc355,	// (0x0002ae78) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0002e120) status_small_pane_g

0xc35e,	// (0x0002ae81) status_small_pane_t1

0x9c70,	// (0x00028793) main_video3_pane

0xce7a,	// (0x0002b99d) cams_zoom_vslider_pane

0xce82,	// (0x0002b9a5) image3_wide_pane_ParamLimits

0xce82,	// (0x0002b9a5) image3_wide_pane

0xce9c,	// (0x0002b9bf) image3_wide_small_pane

0xcea8,	// (0x0002b9cb) main_video3_pane_g1_ParamLimits

0xcea8,	// (0x0002b9cb) main_video3_pane_g1

0xcec4,	// (0x0002b9e7) main_video3_pane_g2_ParamLimits

0xcec4,	// (0x0002b9e7) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002e36b) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002e36b) main_video3_pane_g

0xcee0,	// (0x0002ba03) main_video3_pane_t1_ParamLimits

0xcee0,	// (0x0002ba03) main_video3_pane_t1

0xcf0b,	// (0x0002ba2e) main_video3_pane_t2_ParamLimits

0xcf0b,	// (0x0002ba2e) main_video3_pane_t2

0xcf38,	// (0x0002ba5b) main_video3_pane_t3_ParamLimits

0xcf38,	// (0x0002ba5b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002e370) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002e370) main_video3_pane_t

0xcf65,	// (0x0002ba88) cams_zoom_vslider_pane_g1

0xcf6e,	// (0x0002ba91) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002e377) cams_zoom_vslider_pane_g

0xcf76,	// (0x0002ba99) small_slider_vertical_pane

0xc7d1,	// (0x0002b2f4) small_slider_vertical_pane_g1

0xc7d1,	// (0x0002b2f4) small_slider_vertical_pane_g2

0xcf7e,	// (0x0002baa1) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002e37c) small_slider_vertical_pane_g

0x9c70,	// (0x00028793) main_hwr_training_pane

0xcf87,	// (0x0002baaa) hwr_training_instruct_pane_ParamLimits

0xcf87,	// (0x0002baaa) hwr_training_instruct_pane

0x6906,	// (0x00025429) hwr_training_navi_pane_ParamLimits

0x6906,	// (0x00025429) hwr_training_navi_pane

0x6920,	// (0x00025443) hwr_training_write_pane_ParamLimits

0x6920,	// (0x00025443) hwr_training_write_pane

0x9c70,	// (0x00028793) bg_frame_shadow_pane

0xcfbe,	// (0x0002bae1) hwr_training_write_pane_g1

0xcfc6,	// (0x0002bae9) hwr_training_write_pane_g2

0xcfce,	// (0x0002baf1) hwr_training_write_pane_g3

0xcfd6,	// (0x0002baf9) hwr_training_write_pane_g4

0xcfde,	// (0x0002bb01) hwr_training_write_pane_g5

0xcfe6,	// (0x0002bb09) hwr_training_write_pane_g6

0xcfee,	// (0x0002bb11) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002e383) hwr_training_write_pane_g

0x1447,	// (0x0001ff6a) hwr_training_navi_pane_g1_ParamLimits

0x1447,	// (0x0001ff6a) hwr_training_navi_pane_g1

0x1459,	// (0x0001ff7c) hwr_training_navi_pane_g2_ParamLimits

0x1459,	// (0x0001ff7c) hwr_training_navi_pane_g2

0x146b,	// (0x0001ff8e) hwr_training_navi_pane_g3_ParamLimits

0x146b,	// (0x0001ff8e) hwr_training_navi_pane_g3

0x147b,	// (0x0001ff9e) hwr_training_navi_pane_g4_ParamLimits

0x147b,	// (0x0001ff9e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002e392) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002e392) hwr_training_navi_pane_g

0x1495,	// (0x0001ffb8) hwr_training_navi_pane_t1

0x6958,	// (0x0002547b) list_single_hwr_training_instruct_pane_ParamLimits

0x6958,	// (0x0002547b) list_single_hwr_training_instruct_pane

0xcff6,	// (0x0002bb19) list_single_hwr_training_instruct_pane_t1

0xc711,	// (0x0002b234) bg_frame_shadow_pane_g1

0xd005,	// (0x0002bb28) bg_frame_shadow_pane_g2

0xd00d,	// (0x0002bb30) bg_frame_shadow_pane_g3

0xd015,	// (0x0002bb38) bg_frame_shadow_pane_g4

0xd01d,	// (0x0002bb40) bg_frame_shadow_pane_g5

0xd025,	// (0x0002bb48) bg_frame_shadow_pane_g6

0xd02d,	// (0x0002bb50) bg_frame_shadow_pane_g7

0xa4cf,	// (0x00028ff2) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002e39d) bg_frame_shadow_pane_g

0x9c70,	// (0x00028793) main_video_tele_dialer_pane

0x14a3,	// (0x0001ffc6) aid_size_cell_video_keypad_ParamLimits

0x14a3,	// (0x0001ffc6) aid_size_cell_video_keypad

0x14b3,	// (0x0001ffd6) grid_video_dialer_keypad_pane_ParamLimits

0x14b3,	// (0x0001ffd6) grid_video_dialer_keypad_pane

0x14e5,	// (0x00020008) video_down_pane_cp_ParamLimits

0x14e5,	// (0x00020008) video_down_pane_cp

0x14f1,	// (0x00020014) cell_video_dialer_keypad_pane_ParamLimits

0x14f1,	// (0x00020014) cell_video_dialer_keypad_pane

0xd035,	// (0x0002bb58) bg_button_pane_cp08_ParamLimits

0xd035,	// (0x0002bb58) bg_button_pane_cp08

0x698d,	// (0x000254b0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x698d,	// (0x000254b0) cell_video_dialer_keypad_pane_g1

0x62bd,	// (0x00024de0) mup3_rocker2_pane_ParamLimits

0x62bd,	// (0x00024de0) mup3_rocker2_pane

0xc7d1,	// (0x0002b2f4) mup3_rocker2_pane_g1

0x5484,	// (0x00023fa7) main_dialer2_pane

0x9c70,	// (0x00028793) main_mp4_pane

0x1510,	// (0x00020033) main_mp4_pane_g1_ParamLimits

0x1510,	// (0x00020033) main_mp4_pane_g1

0x151e,	// (0x00020041) main_mp4_pane_g2_ParamLimits

0x151e,	// (0x00020041) main_mp4_pane_g2

0x152c,	// (0x0002004f) main_mp4_pane_g3_ParamLimits

0x152c,	// (0x0002004f) main_mp4_pane_g3

0x157f,	// (0x000200a2) main_mp4_pane_g4_ParamLimits

0x157f,	// (0x000200a2) main_mp4_pane_g4

0x15a7,	// (0x000200ca) main_mp4_pane_g5_ParamLimits

0x15a7,	// (0x000200ca) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002e3bd) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002e3bd) main_mp4_pane_g

0x15f7,	// (0x0002011a) main_mp4_pane_t1_ParamLimits

0x15f7,	// (0x0002011a) main_mp4_pane_t1

0x1653,	// (0x00020176) main_mp4_pane_t2_ParamLimits

0x1653,	// (0x00020176) main_mp4_pane_t2

0xd041,	// (0x0002bb64) main_mp4_pane_t3_ParamLimits

0xd041,	// (0x0002bb64) main_mp4_pane_t3

0x16a5,	// (0x000201c8) main_mp4_pane_t4_ParamLimits

0x16a5,	// (0x000201c8) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002e3ca) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002e3ca) main_mp4_pane_t

0x16e5,	// (0x00020208) mp4_progress_pane_ParamLimits

0x16e5,	// (0x00020208) mp4_progress_pane

0x172f,	// (0x00020252) mp4_rocker_pane_ParamLimits

0x172f,	// (0x00020252) mp4_rocker_pane

0xd069,	// (0x0002bb8c) mp4_progress_pane_t1

0xd082,	// (0x0002bba5) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002e3d3) mp4_progress_pane_t

0xd09b,	// (0x0002bbbe) mup_progress_pane_cp04

0xd7c5,	// (0x0002c2e8) mp4_rocker_pane_g1

0x1751,	// (0x00020274) aid_cell_size_keypad2_ParamLimits

0x1751,	// (0x00020274) aid_cell_size_keypad2

0x1761,	// (0x00020284) dialer2_ne_pane_ParamLimits

0x1761,	// (0x00020284) dialer2_ne_pane

0x176d,	// (0x00020290) grid_dialer2_keypad_pane_ParamLimits

0x176d,	// (0x00020290) grid_dialer2_keypad_pane

0xd43f,	// (0x0002bf62) bg_popup_call_pane_cp07_ParamLimits

0xd43f,	// (0x0002bf62) bg_popup_call_pane_cp07

0x69c4,	// (0x000254e7) dialer2_ne_pane_t1_ParamLimits

0x69c4,	// (0x000254e7) dialer2_ne_pane_t1

0x177b,	// (0x0002029e) cell_dialer2_keypad_pane_ParamLimits

0x177b,	// (0x0002029e) cell_dialer2_keypad_pane

0xd0b9,	// (0x0002bbdc) bg_button_pane_pane_cp04_ParamLimits

0xd0b9,	// (0x0002bbdc) bg_button_pane_pane_cp04

0x69e9,	// (0x0002550c) cell_dialer2_keypad_pane_g1_ParamLimits

0x69e9,	// (0x0002550c) cell_dialer2_keypad_pane_g1

0x3112,	// (0x00021c35) aid_placing_vt_set_content_ParamLimits

0x3112,	// (0x00021c35) aid_placing_vt_set_content

0x313a,	// (0x00021c5d) aid_placing_vt_set_title_ParamLimits

0x313a,	// (0x00021c5d) aid_placing_vt_set_title

0x9c70,	// (0x00028793) main_image3_pane

0x17c4,	// (0x000202e7) area_side_right_pane_cp01_ParamLimits

0x17c4,	// (0x000202e7) area_side_right_pane_cp01

0x17f3,	// (0x00020316) main_image3_pane_g1_ParamLimits

0x17f3,	// (0x00020316) main_image3_pane_g1

0x1801,	// (0x00020324) main_image3_pane_g2_ParamLimits

0x1801,	// (0x00020324) main_image3_pane_g2

0x181a,	// (0x0002033d) main_image3_pane_g3_ParamLimits

0x181a,	// (0x0002033d) main_image3_pane_g3

0x1833,	// (0x00020356) main_image3_pane_g4_ParamLimits

0x1833,	// (0x00020356) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002e3e2) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002e3e2) main_image3_pane_g

0x184c,	// (0x0002036f) main_image3_pane_t1_ParamLimits

0x184c,	// (0x0002036f) main_image3_pane_t1

0x1871,	// (0x00020394) main_image3_pane_t2_ParamLimits

0x1871,	// (0x00020394) main_image3_pane_t2

0x1890,	// (0x000203b3) main_image3_pane_t3_ParamLimits

0x1890,	// (0x000203b3) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002e3eb) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002e3eb) main_image3_pane_t

0x2395,	// (0x00020eb8) grid_sctrl_middle_pane_cp01_ParamLimits

0x2395,	// (0x00020eb8) grid_sctrl_middle_pane_cp01

0x6a51,	// (0x00025574) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a51,	// (0x00025574) cell_sctrl_middle_pane_cp01

0x6a62,	// (0x00025585) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a62,	// (0x00025585) cell_sctrl_middle_pane_cp01_g1

0x9c70,	// (0x00028793) main_call4_pane

0x6a6f,	// (0x00025592) aid_size_button_call4_ParamLimits

0x6a6f,	// (0x00025592) aid_size_button_call4

0x6aa1,	// (0x000255c4) call4_windows_pane_ParamLimits

0x6aa1,	// (0x000255c4) call4_windows_pane

0x6abd,	// (0x000255e0) grid_call4_button_pane_ParamLimits

0x6abd,	// (0x000255e0) grid_call4_button_pane

0xd0c5,	// (0x0002bbe8) call4_windows_conf_pane

0x6ae1,	// (0x00025604) popup_call4_audio_first_window_ParamLimits

0x6ae1,	// (0x00025604) popup_call4_audio_first_window

0x6b0d,	// (0x00025630) popup_call4_audio_second_window_ParamLimits

0x6b0d,	// (0x00025630) popup_call4_audio_second_window

0xd102,	// (0x0002bc25) popup_call4_audio_wait_window_ParamLimits

0xd102,	// (0x0002bc25) popup_call4_audio_wait_window

0x6b21,	// (0x00025644) cell_call4_button_pane_ParamLimits

0x6b21,	// (0x00025644) cell_call4_button_pane

0x6b44,	// (0x00025667) bg_button_pane_cp09_ParamLimits

0x6b44,	// (0x00025667) bg_button_pane_cp09

0x6b50,	// (0x00025673) cell_call4_button_pane_g1_ParamLimits

0x6b50,	// (0x00025673) cell_call4_button_pane_g1

0x6b5d,	// (0x00025680) cell_call4_button_pane_t1_ParamLimits

0x6b5d,	// (0x00025680) cell_call4_button_pane_t1

0xd14a,	// (0x0002bc6d) popup_call4_audio_conf_window_ParamLimits

0xd14a,	// (0x0002bc6d) popup_call4_audio_conf_window

0x62f2,	// (0x00024e15) mup3_progress_pane_t1_ParamLimits

0x6311,	// (0x00024e34) mup3_progress_pane_t2_ParamLimits

0xca88,	// (0x0002b5ab) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0002e2c4) mup3_progress_pane_t_ParamLimits

0xcaa5,	// (0x0002b5c8) mup_progress_pane_cp03_ParamLimits

0x6797,	// (0x000252ba) mup3_control_keys_pane_g4_copy1

0x1713,	// (0x00020236) mp4_rocker2_pane_ParamLimits

0x1713,	// (0x00020236) mp4_rocker2_pane

0xd164,	// (0x0002bc87) mp4_rocker2_pane_g1

0xd16c,	// (0x0002bc8f) mp4_rocker2_pane_g2

0x18f1,	// (0x00020414) mp4_rocker2_pane_g3

0x18f9,	// (0x0002041c) mp4_rocker2_pane_g4

0x1901,	// (0x00020424) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002e3f4) mp4_rocker2_pane_g

0x9c70,	// (0x00028793) main_camera4_pane

0x9c70,	// (0x00028793) main_video4_pane

0x14c1,	// (0x0001ffe4) main_video_tele_dialer_pane_t1_ParamLimits

0x14c1,	// (0x0001ffe4) main_video_tele_dialer_pane_t1

0x14d3,	// (0x0001fff6) main_video_tele_dialer_pane_t2_ParamLimits

0x14d3,	// (0x0001fff6) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002e3ae) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002e3ae) main_video_tele_dialer_pane_t

0x1921,	// (0x00020444) cam4_autofocus_pane_ParamLimits

0x1921,	// (0x00020444) cam4_autofocus_pane

0x1939,	// (0x0002045c) cam4_image_uncrop_pane_ParamLimits

0x1939,	// (0x0002045c) cam4_image_uncrop_pane

0x1952,	// (0x00020475) cam4_indicators_pane_ParamLimits

0x1952,	// (0x00020475) cam4_indicators_pane

0x196e,	// (0x00020491) main_camera4_pane_g1_ParamLimits

0x196e,	// (0x00020491) main_camera4_pane_g1

0x197a,	// (0x0002049d) main_camera4_pane_g2_ParamLimits

0x197a,	// (0x0002049d) main_camera4_pane_g2

0x197a,	// (0x0002049d) main_camera4_pane_g3_ParamLimits

0x197a,	// (0x0002049d) main_camera4_pane_g3

0x1986,	// (0x000204a9) main_camera4_pane_g4_ParamLimits

0x1986,	// (0x000204a9) main_camera4_pane_g4

0x1992,	// (0x000204b5) main_camera4_pane_g5_ParamLimits

0x1992,	// (0x000204b5) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002e3ff) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002e3ff) main_camera4_pane_g

0x19ac,	// (0x000204cf) main_camera4_pane_t1_ParamLimits

0x19ac,	// (0x000204cf) main_camera4_pane_t1

0x19d0,	// (0x000204f3) bg_tb_trans_pane_cp06

0x19e6,	// (0x00020509) cam4_indicators_pane_g1

0x19f7,	// (0x0002051a) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002e41a) cam4_indicators_pane_g

0x1a0f,	// (0x00020532) cam4_indicators_pane_t1

0x1a39,	// (0x0002055c) main_video4_pane_g1_ParamLimits

0x1a39,	// (0x0002055c) main_video4_pane_g1

0x1a45,	// (0x00020568) main_video4_pane_g2_ParamLimits

0x1a45,	// (0x00020568) main_video4_pane_g2

0x1a51,	// (0x00020574) main_video4_pane_g3_ParamLimits

0x1a51,	// (0x00020574) main_video4_pane_g3

0x1a5d,	// (0x00020580) main_video4_pane_g4_ParamLimits

0x1a5d,	// (0x00020580) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002e421) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002e421) main_video4_pane_g

0x1a7f,	// (0x000205a2) vid4_indicators_pane_ParamLimits

0x1a7f,	// (0x000205a2) vid4_indicators_pane

0x1a9e,	// (0x000205c1) video4_image_uncrop_cif_pane_ParamLimits

0x1a9e,	// (0x000205c1) video4_image_uncrop_cif_pane

0x1aad,	// (0x000205d0) video4_image_uncrop_nhd_pane_ParamLimits

0x1aad,	// (0x000205d0) video4_image_uncrop_nhd_pane

0x1939,	// (0x0002045c) video4_image_uncrop_vga_pane_ParamLimits

0x1939,	// (0x0002045c) video4_image_uncrop_vga_pane

0x1abc,	// (0x000205df) bg_tb_trans_pane_cp07

0x1ad4,	// (0x000205f7) vid4_indicators_pane_g1

0x1aea,	// (0x0002060d) vid4_indicators_pane_g2

0x1afe,	// (0x00020621) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002e42c) vid4_indicators_pane_g

0x1b2f,	// (0x00020652) vid4_indicators_pane_t1

0x6b95,	// (0x000256b8) cam4_autofocus_pane_g1

0x6b9d,	// (0x000256c0) cam4_autofocus_pane_g2

0x6ba5,	// (0x000256c8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002e437) cam4_autofocus_pane_g

0x6bad,	// (0x000256d0) cam4_autofocus_pane_g3_copy1

0x6971,	// (0x00025494) video_down_pane_cp_t1

0x697f,	// (0x000254a2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002e3b3) video_down_pane_cp_t

0x2395,	// (0x00020eb8) popup_vitu2_window_ParamLimits

0x2395,	// (0x00020eb8) popup_vitu2_window

0x1b46,	// (0x00020669) aid_size_cell2_itu2_ParamLimits

0x1b46,	// (0x00020669) aid_size_cell2_itu2

0x1b68,	// (0x0002068b) aid_size_cell_itu2_ParamLimits

0x1b68,	// (0x0002068b) aid_size_cell_itu2

0x1bae,	// (0x000206d1) bg_popup_window_pane_cp09_ParamLimits

0x1bae,	// (0x000206d1) bg_popup_window_pane_cp09

0x1bbc,	// (0x000206df) field_vitu2_entry_pane_ParamLimits

0x1bbc,	// (0x000206df) field_vitu2_entry_pane

0x1bdc,	// (0x000206ff) grid_vitu2_function_pane_ParamLimits

0x1bdc,	// (0x000206ff) grid_vitu2_function_pane

0x1c20,	// (0x00020743) grid_vitu2_itu_pane_ParamLimits

0x1c20,	// (0x00020743) grid_vitu2_itu_pane

0x1c98,	// (0x000207bb) cell_vitu2_itu_pane_ParamLimits

0x1c98,	// (0x000207bb) cell_vitu2_itu_pane

0x1caf,	// (0x000207d2) cell_vitu2_function_pane_ParamLimits

0x1caf,	// (0x000207d2) cell_vitu2_function_pane

0xd174,	// (0x0002bc97) bg_popup_call_pane_cp08_ParamLimits

0xd174,	// (0x0002bc97) bg_popup_call_pane_cp08

0xd18d,	// (0x0002bcb0) field_vitu2_entry_pane_g1

0xd199,	// (0x0002bcbc) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002e43e) field_vitu2_entry_pane_g

0x6bb5,	// (0x000256d8) field_vitu2_entry_pane_t1_ParamLimits

0x6bb5,	// (0x000256d8) field_vitu2_entry_pane_t1

0xd1b3,	// (0x0002bcd6) field_vitu2_entry_pane_t2_ParamLimits

0xd1b3,	// (0x0002bcd6) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002e445) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002e445) field_vitu2_entry_pane_t

0x1cf3,	// (0x00020816) bg_button_pane_cp010_ParamLimits

0x1cf3,	// (0x00020816) bg_button_pane_cp010

0x1d01,	// (0x00020824) cell_vitu2_itu_pane_g1

0x1d2a,	// (0x0002084d) cell_vitu2_itu_pane_t1_ParamLimits

0x1d2a,	// (0x0002084d) cell_vitu2_itu_pane_t1

0x1d76,	// (0x00020899) cell_vitu2_itu_pane_t2_ParamLimits

0x1d76,	// (0x00020899) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002e44f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002e44f) cell_vitu2_itu_pane_t

0x1abc,	// (0x000205df) bg_button_pane_cp011

0x1e39,	// (0x0002095c) cell_vitu2_function_pane_g1

0x9c70,	// (0x00028793) main_myfav_hc_pane

0x18d2,	// (0x000203f5) popup_image3_note_pane_ParamLimits

0x18d2,	// (0x000203f5) popup_image3_note_pane

0x18e0,	// (0x00020403) popup_image3_tool_bar_pane_ParamLimits

0x18e0,	// (0x00020403) popup_image3_tool_bar_pane

0x1dec,	// (0x0002090f) cell_vitu2_itu_pane_t3_ParamLimits

0x1dec,	// (0x0002090f) cell_vitu2_itu_pane_t3

0x9c70,	// (0x00028793) bg_popup_trans_pane

0xd1d8,	// (0x0002bcfb) grid_image3_tool_bar_pane

0xd1e2,	// (0x0002bd05) bg_popup_trans_pane_g1

0xa83b,	// (0x0002935e) bg_popup_trans_pane_g2

0xd1ea,	// (0x0002bd0d) bg_popup_trans_pane_g3

0xd1f2,	// (0x0002bd15) bg_popup_trans_pane_g4

0xd1fa,	// (0x0002bd1d) bg_popup_trans_pane_g5

0xd202,	// (0x0002bd25) bg_popup_trans_pane_g6

0xd20a,	// (0x0002bd2d) bg_popup_trans_pane_g7

0xd212,	// (0x0002bd35) bg_popup_trans_pane_g8

0xa81b,	// (0x0002933e) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002e456) bg_popup_trans_pane_g

0xd21a,	// (0x0002bd3d) cell_image3_tool_bar_pane_ParamLimits

0xd21a,	// (0x0002bd3d) cell_image3_tool_bar_pane

0xc7d1,	// (0x0002b2f4) cell_image3_tool_bar_pane_g1

0x9c70,	// (0x00028793) bg_popup_trans_pane_cp1

0xd230,	// (0x0002bd53) popup_image3_note_pane_t1

0xd23e,	// (0x0002bd61) popup_image3_note_pane_t2

0xd24c,	// (0x0002bd6f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002e469) popup_image3_note_pane_t

0xd25c,	// (0x0002bd7f) popup_image3_note_pane_t3_copy1

0x6be3,	// (0x00025706) bg_myfav_hc_instruction_pane_ParamLimits

0x6be3,	// (0x00025706) bg_myfav_hc_instruction_pane

0x6bfb,	// (0x0002571e) cell_myfav_contact_pane_ParamLimits

0x6bfb,	// (0x0002571e) cell_myfav_contact_pane

0x6c15,	// (0x00025738) cell_myfav_contact_pane_cp1_ParamLimits

0x6c15,	// (0x00025738) cell_myfav_contact_pane_cp1

0x6c2d,	// (0x00025750) cell_myfav_contact_pane_cp2_ParamLimits

0x6c2d,	// (0x00025750) cell_myfav_contact_pane_cp2

0x6c45,	// (0x00025768) cell_myfav_contact_pane_cp3_ParamLimits

0x6c45,	// (0x00025768) cell_myfav_contact_pane_cp3

0x6c5c,	// (0x0002577f) cell_myfav_contact_pane_cp4_ParamLimits

0x6c5c,	// (0x0002577f) cell_myfav_contact_pane_cp4

0x6c72,	// (0x00025795) cell_myfav_contact_pane_cp5_ParamLimits

0x6c72,	// (0x00025795) cell_myfav_contact_pane_cp5

0x6c86,	// (0x000257a9) cell_myfav_contact_pane_cp6_ParamLimits

0x6c86,	// (0x000257a9) cell_myfav_contact_pane_cp6

0x6c9a,	// (0x000257bd) cell_myfav_contact_pane_cp7_ParamLimits

0x6c9a,	// (0x000257bd) cell_myfav_contact_pane_cp7

0xd26a,	// (0x0002bd8d) listscroll_gen_pane_cp05

0x6cb2,	// (0x000257d5) main_myfav_hc_pane_g1_ParamLimits

0x6cb2,	// (0x000257d5) main_myfav_hc_pane_g1

0x6ccc,	// (0x000257ef) main_myfav_hc_pane_g2_ParamLimits

0x6ccc,	// (0x000257ef) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002e470) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002e470) main_myfav_hc_pane_g

0x6cfe,	// (0x00025821) main_myfav_hc_pane_t1_ParamLimits

0x6cfe,	// (0x00025821) main_myfav_hc_pane_t1

0xd273,	// (0x0002bd96) main_myfav_hc_pane_t2_ParamLimits

0xd273,	// (0x0002bd96) main_myfav_hc_pane_t2

0xd285,	// (0x0002bda8) main_myfav_hc_pane_t3_ParamLimits

0xd285,	// (0x0002bda8) main_myfav_hc_pane_t3

0x6d15,	// (0x00025838) main_myfav_hc_pane_t4_ParamLimits

0x6d15,	// (0x00025838) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002e477) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002e477) main_myfav_hc_pane_t

0xc7d1,	// (0x0002b2f4) bg_myfav_hc_instruction_pane_g1

0xd297,	// (0x0002bdba) cell_myfav_contact_pane_g1_ParamLimits

0xd297,	// (0x0002bdba) cell_myfav_contact_pane_g1

0xd297,	// (0x0002bdba) cell_myfav_contact_pane_g2_ParamLimits

0xd297,	// (0x0002bdba) cell_myfav_contact_pane_g2

0xd2a3,	// (0x0002bdc6) cell_myfav_contact_pane_g3_ParamLimits

0xd2a3,	// (0x0002bdc6) cell_myfav_contact_pane_g3

0xca72,	// (0x0002b595) cell_myfav_contact_pane_g4_ParamLimits

0xca72,	// (0x0002b595) cell_myfav_contact_pane_g4

0xd2b0,	// (0x0002bdd3) cell_myfav_contact_pane_g5_ParamLimits

0xd2b0,	// (0x0002bdd3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002e482) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002e482) cell_myfav_contact_pane_g

0x6ce6,	// (0x00025809) main_myfav_hc_pane_g3_ParamLimits

0x6ce6,	// (0x00025809) main_myfav_hc_pane_g3

0x22a7,	// (0x00020dca) popup_adpt_find_window

0x6d3f,	// (0x00025862) afind_page_pane_ParamLimits

0x6d3f,	// (0x00025862) afind_page_pane

0x6d4c,	// (0x0002586f) aid_size_cell_afind_ParamLimits

0x6d4c,	// (0x0002586f) aid_size_cell_afind

0x6d66,	// (0x00025889) bg_popup_sub_pane_cp09_ParamLimits

0x6d66,	// (0x00025889) bg_popup_sub_pane_cp09

0x6d73,	// (0x00025896) find_pane_cp01_ParamLimits

0x6d73,	// (0x00025896) find_pane_cp01

0xd2bc,	// (0x0002bddf) grid_afind_control_pane_ParamLimits

0xd2bc,	// (0x0002bddf) grid_afind_control_pane

0x6d80,	// (0x000258a3) grid_afind_pane_ParamLimits

0x6d80,	// (0x000258a3) grid_afind_pane

0x6d9c,	// (0x000258bf) cell_afind_pane_ParamLimits

0x6d9c,	// (0x000258bf) cell_afind_pane

0xc7d1,	// (0x0002b2f4) afind_page_pane_g1

0x6de8,	// (0x0002590b) afind_page_pane_g2

0x6df1,	// (0x00025914) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002e48d) afind_page_pane_g

0x6dfa,	// (0x0002591d) afind_page_pane_t1

0xd2d0,	// (0x0002bdf3) cell_afind_grid_control_pane_ParamLimits

0xd2d0,	// (0x0002bdf3) cell_afind_grid_control_pane

0xd0b9,	// (0x0002bbdc) bg_button_pane_cp69_ParamLimits

0xd0b9,	// (0x0002bbdc) bg_button_pane_cp69

0x6e1a,	// (0x0002593d) cell_afind_pane_g1_ParamLimits

0x6e1a,	// (0x0002593d) cell_afind_pane_g1

0x6e27,	// (0x0002594a) cell_afind_pane_t1_ParamLimits

0x6e27,	// (0x0002594a) cell_afind_pane_t1

0xa630,	// (0x00029153) bg_button_pane_cp72

0xd2df,	// (0x0002be02) cell_afind_grid_control_pane_g1

0x4fff,	// (0x00023b22) aid_image_placing_area_ParamLimits

0x4fff,	// (0x00023b22) aid_image_placing_area

0xcd85,	// (0x0002b8a8) field_vitu_entry_pane_g1_ParamLimits

0xcd85,	// (0x0002b8a8) field_vitu_entry_pane_g1

0xcd91,	// (0x0002b8b4) field_vitu_entry_pane_g2_ParamLimits

0xcd91,	// (0x0002b8b4) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002e33e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002e33e) field_vitu_entry_pane_g

0x6821,	// (0x00025344) cell_vitu_itu_pane_g1_ParamLimits

0x6871,	// (0x00025394) cell_vitu_itu_pane_t3_ParamLimits

0x6871,	// (0x00025394) cell_vitu_itu_pane_t3

0xd069,	// (0x0002bb8c) mp4_progress_pane_t1_ParamLimits

0xd082,	// (0x0002bba5) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002e3d3) mp4_progress_pane_t_ParamLimits

0xd09b,	// (0x0002bbbe) mup_progress_pane_cp04_ParamLimits

0x6d29,	// (0x0002584c) main_myfav_hc_pane_t5_ParamLimits

0x6d29,	// (0x0002584c) main_myfav_hc_pane_t5

0x9c96,	// (0x000287b9) aid_zoom_text_primary

0x22a7,	// (0x00020dca) popup_adpt_find_window_ParamLimits

0xa5d8,	// (0x000290fb) main_cam_set_pane

0x1960,	// (0x00020483) cam4_zoom_pane_ParamLimits

0x1960,	// (0x00020483) cam4_zoom_pane

0x6e39,	// (0x0002595c) main_cam_set_pane_g1_ParamLimits

0x6e39,	// (0x0002595c) main_cam_set_pane_g1

0x6e47,	// (0x0002596a) main_cam_set_pane_g2_ParamLimits

0x6e47,	// (0x0002596a) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002e494) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002e494) main_cam_set_pane_g

0x6e53,	// (0x00025976) main_cam_set_pane_t1_ParamLimits

0x6e53,	// (0x00025976) main_cam_set_pane_t1

0x6e6f,	// (0x00025992) main_cset_listscroll_pane_ParamLimits

0x6e6f,	// (0x00025992) main_cset_listscroll_pane

0x6e9e,	// (0x000259c1) main_cset_slider_pane_ParamLimits

0x6e9e,	// (0x000259c1) main_cset_slider_pane

0xd2f0,	// (0x0002be13) main_cset_list_pane_ParamLimits

0xd2f0,	// (0x0002be13) main_cset_list_pane

0xd300,	// (0x0002be23) scroll_pane_cp028

0x6ebf,	// (0x000259e2) aid_area_touch_slider

0x6edb,	// (0x000259fe) cset_slider_pane

0x6f05,	// (0x00025a28) main_cset_slider_pane_g1

0x6f1a,	// (0x00025a3d) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002e499) main_cset_slider_pane_g

0xd339,	// (0x0002be5c) main_cset_slider_pane_t1

0x6fd6,	// (0x00025af9) main_cset_slider_pane_t2

0x6ff0,	// (0x00025b13) main_cset_slider_pane_t3

0x700a,	// (0x00025b2d) main_cset_slider_pane_t4

0x7024,	// (0x00025b47) main_cset_slider_pane_t5

0x703e,	// (0x00025b61) main_cset_slider_pane_t6

0x7053,	// (0x00025b76) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002e4be) main_cset_slider_pane_t

0x7157,	// (0x00025c7a) cset_list_set_pane_ParamLimits

0x7157,	// (0x00025c7a) cset_list_set_pane

0x7168,	// (0x00025c8b) aid_position_infowindow_above

0x7170,	// (0x00025c93) aid_position_infowindow_below

0x7178,	// (0x00025c9b) cset_list_set_pane_g1_ParamLimits

0x7178,	// (0x00025c9b) cset_list_set_pane_g1

0x7184,	// (0x00025ca7) cset_list_set_pane_g3_ParamLimits

0x7184,	// (0x00025ca7) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002e4dd) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002e4dd) cset_list_set_pane_g

0x7193,	// (0x00025cb6) cset_list_set_pane_t1_ParamLimits

0x7193,	// (0x00025cb6) cset_list_set_pane_t1

0xa5d8,	// (0x000290fb) list_highlight_pane_cp021_ParamLimits

0xa5d8,	// (0x000290fb) list_highlight_pane_cp021

0xb05a,	// (0x00029b7d) cset_slider_pane_g1

0xb06c,	// (0x00029b8f) cset_slider_pane_g2

0xb063,	// (0x00029b86) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002e4e2) cset_slider_pane_g

0x1e4d,	// (0x00020970) aid_area_touch_cam4_zoom

0x1e55,	// (0x00020978) cam4_zoom_cont_pane

0x1e5d,	// (0x00020980) cam4_zoom_pane_g1

0x1e65,	// (0x00020988) cam4_zoom_pane_g2

0x1e6d,	// (0x00020990) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002e4e9) cam4_zoom_pane_g

0x1e75,	// (0x00020998) cam4_zoom_cont_pane_g1

0x1e7e,	// (0x000209a1) cam4_zoom_cont_pane_g2

0x1e87,	// (0x000209aa) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002e4f0) cam4_zoom_cont_pane_g

0x6a89,	// (0x000255ac) call4_image_pane_ParamLimits

0x6a89,	// (0x000255ac) call4_image_pane

0xd0c5,	// (0x0002bbe8) call4_windows_conf_pane_ParamLimits

0xd0e0,	// (0x0002bc03) popup_call4_audio_in_window_ParamLimits

0xd0e0,	// (0x0002bc03) popup_call4_audio_in_window

0x9c70,	// (0x00028793) bg_popup_call2_act_pane_cp02

0xd142,	// (0x0002bc65) call4_list_conf_pane

0xc7d1,	// (0x0002b2f4) call4_image_pane_g1

0xc7d1,	// (0x0002b2f4) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0002e204) call4_image_pane_g

0xd3d9,	// (0x0002befc) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3d9,	// (0x0002befc) list_single_graphic_popup_conf4_pane

0x9c70,	// (0x00028793) list_highlight_pane_cp022

0xd44d,	// (0x0002bf70) list_single_graphic_popup_conf4_pane_g1

0xad3a,	// (0x0002985d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002e4f7) list_single_graphic_popup_conf4_pane_g

0xd455,	// (0x0002bf78) list_single_graphic_popup_conf4_pane_t1

0x3294,	// (0x00021db7) popup_vtel_slider_window_ParamLimits

0x3294,	// (0x00021db7) popup_vtel_slider_window

0xd0a7,	// (0x0002bbca) dialer2_ne_pane_t2_ParamLimits

0xd0a7,	// (0x0002bbca) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002e3d8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002e3d8) dialer2_ne_pane_t

0xa5d8,	// (0x000290fb) bg_popup_sub_pane_cp010_ParamLimits

0xa5d8,	// (0x000290fb) bg_popup_sub_pane_cp010

0x71a8,	// (0x00025ccb) popup_vtel_slider_window_g1_ParamLimits

0x71a8,	// (0x00025ccb) popup_vtel_slider_window_g1

0x71b4,	// (0x00025cd7) popup_vtel_slider_window_g2_ParamLimits

0x71b4,	// (0x00025cd7) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002e4fc) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002e4fc) popup_vtel_slider_window_g

0x71fc,	// (0x00025d1f) vtel_slider_pane_ParamLimits

0x71fc,	// (0x00025d1f) vtel_slider_pane

0x720b,	// (0x00025d2e) vtel_slider_pane_g1_ParamLimits

0x720b,	// (0x00025d2e) vtel_slider_pane_g1

0x7218,	// (0x00025d3b) vtel_slider_pane_g2_ParamLimits

0x7218,	// (0x00025d3b) vtel_slider_pane_g2

0x7225,	// (0x00025d48) vtel_slider_pane_g3_ParamLimits

0x7225,	// (0x00025d48) vtel_slider_pane_g3

0x720b,	// (0x00025d2e) vtel_slider_pane_g4_ParamLimits

0x720b,	// (0x00025d2e) vtel_slider_pane_g4

0x7232,	// (0x00025d55) vtel_slider_pane_g5_ParamLimits

0x7232,	// (0x00025d55) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002e505) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002e505) vtel_slider_pane_g

0xa5d8,	// (0x000290fb) main_gallery2_pane

0x1b8e,	// (0x000206b1) aid_size_row_itut2_dropdow_list_ParamLimits

0x1b8e,	// (0x000206b1) aid_size_row_itut2_dropdow_list

0x1bfe,	// (0x00020721) grid_vitu2_function_top_pane_ParamLimits

0x1bfe,	// (0x00020721) grid_vitu2_function_top_pane

0x1c50,	// (0x00020773) popup_vitu2_dropdown_list_window_ParamLimits

0x1c50,	// (0x00020773) popup_vitu2_dropdown_list_window

0x1c74,	// (0x00020797) popup_vitu2_match_list_window

0x1e90,	// (0x000209b3) cell_vitu2_function_top_pane_ParamLimits

0x1e90,	// (0x000209b3) cell_vitu2_function_top_pane

0x1eb0,	// (0x000209d3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1eb0,	// (0x000209d3) cell_vitu2_function_top_pane_cp01

0x1ece,	// (0x000209f1) cell_vitu2_function_top_wide_pane_ParamLimits

0x1ece,	// (0x000209f1) cell_vitu2_function_top_wide_pane

0x1abc,	// (0x000205df) bg_button_pane_cp012

0x1eec,	// (0x00020a0f) cell_vitu2_function_top_pane_g1

0x1f00,	// (0x00020a23) bg_button_pane_cp013_ParamLimits

0x1f00,	// (0x00020a23) bg_button_pane_cp013

0x723f,	// (0x00025d62) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x723f,	// (0x00025d62) cell_vitu2_function_top_wide_pane_g1

0x1f1c,	// (0x00020a3f) bg_popup_sub_pane_cp20

0x1f2a,	// (0x00020a4d) list_vitu2_match_list_pane

0xd1e2,	// (0x0002bd05) bg_popup_sub_pane_cp20_g1

0xd1ea,	// (0x0002bd0d) bg_popup_sub_pane_cp20_g2

0xa83b,	// (0x0002935e) bg_popup_sub_pane_cp20_g3

0xd1f2,	// (0x0002bd15) bg_popup_sub_pane_cp20_g4

0xa81b,	// (0x0002933e) bg_popup_sub_pane_cp20_g5

0xd479,	// (0x0002bf9c) bg_popup_sub_pane_cp20_g6

0xd202,	// (0x0002bd25) bg_popup_sub_pane_cp20_g7

0xd20a,	// (0x0002bd2d) bg_popup_sub_pane_cp20_g8

0xd212,	// (0x0002bd35) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002e510) bg_popup_sub_pane_cp20_g

0x1f42,	// (0x00020a65) list_vitu2_match_list_item_pane_ParamLimits

0x1f42,	// (0x00020a65) list_vitu2_match_list_item_pane

0x1f54,	// (0x00020a77) list_vitu2_match_list_item_pane_t1

0x0bb1,	// (0x0001f6d4) bg_popup_sub_pane_cp21

0x1f62,	// (0x00020a85) grid_vitu2_dropdown_list_pane

0x1f6a,	// (0x00020a8d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1f6a,	// (0x00020a8d) cell_vitu2_dropdown_list_char_pane

0x1f8f,	// (0x00020ab2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1f8f,	// (0x00020ab2) cell_vitu2_dropdown_list_ctrl_pane

0xd48d,	// (0x0002bfb0) cell_vitu2_dropdown_list_char_pane_g1

0xd496,	// (0x0002bfb9) cell_vitu2_dropdown_list_char_pane_g2

0xd49f,	// (0x0002bfc2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002e52d) cell_vitu2_dropdown_list_char_pane_g

0x1fbd,	// (0x00020ae0) cell_vitu2_dropdown_list_char_pane_t1

0x728f,	// (0x00025db2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x728f,	// (0x00025db2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x729f,	// (0x00025dc2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x729f,	// (0x00025dc2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x72b0,	// (0x00025dd3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x72b0,	// (0x00025dd3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1fcb,	// (0x00020aee) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1fcb,	// (0x00020aee) cell_vitu2_dropdown_list_ctrl_pane_g4

0x19d0,	// (0x000204f3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x19d0,	// (0x000204f3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002e534) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002e534) cell_vitu2_dropdown_list_ctrl_pane_g

0x72c0,	// (0x00025de3) aid_size_cell_gallery2_ParamLimits

0x72c0,	// (0x00025de3) aid_size_cell_gallery2

0x72da,	// (0x00025dfd) grid_gallery2_pane_ParamLimits

0x72da,	// (0x00025dfd) grid_gallery2_pane

0x66a6,	// (0x000251c9) scroll_pane_cp029_ParamLimits

0x66a6,	// (0x000251c9) scroll_pane_cp029

0x72f1,	// (0x00025e14) cell_gallery2_pane_ParamLimits

0x72f1,	// (0x00025e14) cell_gallery2_pane

0xd4a8,	// (0x0002bfcb) cell_gallery2_pane_g2

0x733d,	// (0x00025e60) cell_gallery2_pane_g3

0xd4b0,	// (0x0002bfd3) cell_gallery2_pane_g4

0xd4b8,	// (0x0002bfdb) cell_gallery2_pane_g5

0xaf22,	// (0x00029a45) grid_highlight_pane_cp10

0x1c74,	// (0x00020797) popup_vitu2_match_list_window_ParamLimits

0x1c88,	// (0x000207ab) popup_vitu2_query_window_ParamLimits

0x1c88,	// (0x000207ab) popup_vitu2_query_window

0x0bb1,	// (0x0001f6d4) bg_vitu2_candi_button_pane

0xd48d,	// (0x0002bfb0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd496,	// (0x0002bfb9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd49f,	// (0x0002bfc2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7345,	// (0x00025e68) bg_button_pane_cp015

0x7357,	// (0x00025e7a) bg_button_pane_cp016

0x736a,	// (0x00025e8d) bg_button_pane_cp017

0xc380,	// (0x0002aea3) bg_popup_sub_pane_cp22

0xd4c0,	// (0x0002bfe3) popup_vitu2_query_window_g1

0x73af,	// (0x00025ed2) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002e53f) popup_vitu2_query_window_g

0x73cc,	// (0x00025eef) popup_vitu2_query_window_t1_ParamLimits

0x73cc,	// (0x00025eef) popup_vitu2_query_window_t1

0x73ff,	// (0x00025f22) popup_vitu2_query_window_t2_ParamLimits

0x73ff,	// (0x00025f22) popup_vitu2_query_window_t2

0x7411,	// (0x00025f34) popup_vitu2_query_window_t3_ParamLimits

0x7411,	// (0x00025f34) popup_vitu2_query_window_t3

0x7439,	// (0x00025f5c) popup_vitu2_query_window_t4_ParamLimits

0x7439,	// (0x00025f5c) popup_vitu2_query_window_t4

0x745c,	// (0x00025f7f) popup_vitu2_query_window_t5_ParamLimits

0x745c,	// (0x00025f7f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002e546) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002e546) popup_vitu2_query_window_t

0xd2e8,	// (0x0002be0b) main_cset_text_pane

0x6ebf,	// (0x000259e2) aid_area_touch_slider_ParamLimits

0x6edb,	// (0x000259fe) cset_slider_pane_ParamLimits

0x6f05,	// (0x00025a28) main_cset_slider_pane_g1_ParamLimits

0x6f1a,	// (0x00025a3d) main_cset_slider_pane_g2_ParamLimits

0xd309,	// (0x0002be2c) main_cset_slider_pane_g3_ParamLimits

0xd309,	// (0x0002be2c) main_cset_slider_pane_g3

0x6f2f,	// (0x00025a52) main_cset_slider_pane_g4_ParamLimits

0x6f2f,	// (0x00025a52) main_cset_slider_pane_g4

0x6f3e,	// (0x00025a61) main_cset_slider_pane_g5_ParamLimits

0x6f3e,	// (0x00025a61) main_cset_slider_pane_g5

0x6f4a,	// (0x00025a6d) main_cset_slider_pane_g6_ParamLimits

0x6f4a,	// (0x00025a6d) main_cset_slider_pane_g6

0xf976,	// (0x0002e499) main_cset_slider_pane_g_ParamLimits

0xd339,	// (0x0002be5c) main_cset_slider_pane_t1_ParamLimits

0x6fd6,	// (0x00025af9) main_cset_slider_pane_t2_ParamLimits

0x6ff0,	// (0x00025b13) main_cset_slider_pane_t3_ParamLimits

0x700a,	// (0x00025b2d) main_cset_slider_pane_t4_ParamLimits

0x7024,	// (0x00025b47) main_cset_slider_pane_t5_ParamLimits

0x703e,	// (0x00025b61) main_cset_slider_pane_t6_ParamLimits

0x7053,	// (0x00025b76) main_cset_slider_pane_t7_ParamLimits

0x707d,	// (0x00025ba0) main_cset_slider_pane_t8_ParamLimits

0x707d,	// (0x00025ba0) main_cset_slider_pane_t8

0x70a5,	// (0x00025bc8) main_cset_slider_pane_t9_ParamLimits

0x70a5,	// (0x00025bc8) main_cset_slider_pane_t9

0x70cd,	// (0x00025bf0) main_cset_slider_pane_t10_ParamLimits

0x70cd,	// (0x00025bf0) main_cset_slider_pane_t10

0x70f5,	// (0x00025c18) main_cset_slider_pane_t11_ParamLimits

0x70f5,	// (0x00025c18) main_cset_slider_pane_t11

0x711d,	// (0x00025c40) main_cset_slider_pane_t12_ParamLimits

0x711d,	// (0x00025c40) main_cset_slider_pane_t12

0x713a,	// (0x00025c5d) main_cset_slider_pane_t13_ParamLimits

0x713a,	// (0x00025c5d) main_cset_slider_pane_t13

0xf99b,	// (0x0002e4be) main_cset_slider_pane_t_ParamLimits

0x9c70,	// (0x00028793) bg_popup_sub_pane_cp011

0xd4cc,	// (0x0002bfef) main_cset_text_pane_g1

0xd4d4,	// (0x0002bff7) main_cset_text_pane_t1

0xd4e2,	// (0x0002c005) main_cset_text_pane_t2

0xd4f0,	// (0x0002c013) main_cset_text_pane_t3

0xd4fe,	// (0x0002c021) main_cset_text_pane_t4

0xd50c,	// (0x0002c02f) main_cset_text_pane_t5

0xd51a,	// (0x0002c03d) main_cset_text_pane_t6

0xd528,	// (0x0002c04b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002e555) main_cset_text_pane_t

0x9c70,	// (0x00028793) main_cam4_burst_pane

0x9c70,	// (0x00028793) main_cam5_pane

0x6e08,	// (0x0002592b) bg_button_pane_cp019

0x6e11,	// (0x00025934) bg_button_pane_cp020

0xd315,	// (0x0002be38) main_cset_slider_pane_g7_ParamLimits

0xd315,	// (0x0002be38) main_cset_slider_pane_g7

0xd321,	// (0x0002be44) main_cset_slider_pane_g8_ParamLimits

0xd321,	// (0x0002be44) main_cset_slider_pane_g8

0x6f5e,	// (0x00025a81) main_cset_slider_pane_g9_ParamLimits

0x6f5e,	// (0x00025a81) main_cset_slider_pane_g9

0x6f6a,	// (0x00025a8d) main_cset_slider_pane_g10_ParamLimits

0x6f6a,	// (0x00025a8d) main_cset_slider_pane_g10

0x6f76,	// (0x00025a99) main_cset_slider_pane_g11_ParamLimits

0x6f76,	// (0x00025a99) main_cset_slider_pane_g11

0x6f82,	// (0x00025aa5) main_cset_slider_pane_g12_ParamLimits

0x6f82,	// (0x00025aa5) main_cset_slider_pane_g12

0x6f8e,	// (0x00025ab1) main_cset_slider_pane_g13_ParamLimits

0x6f8e,	// (0x00025ab1) main_cset_slider_pane_g13

0x6f9a,	// (0x00025abd) main_cset_slider_pane_g14_ParamLimits

0x6f9a,	// (0x00025abd) main_cset_slider_pane_g14

0x6fa6,	// (0x00025ac9) main_cset_slider_pane_g15_ParamLimits

0x6fa6,	// (0x00025ac9) main_cset_slider_pane_g15

0xd367,	// (0x0002be8a) main_cset_slider_pane_t14_ParamLimits

0xd367,	// (0x0002be8a) main_cset_slider_pane_t14

0xd3a0,	// (0x0002bec3) main_cset_slider_pane_t15_ParamLimits

0xd3a0,	// (0x0002bec3) main_cset_slider_pane_t15

0x74d5,	// (0x00025ff8) aid_cam4_burst_size_cell_ParamLimits

0x74d5,	// (0x00025ff8) aid_cam4_burst_size_cell

0x74f1,	// (0x00026014) grid_cam4_burst_pane_ParamLimits

0x74f1,	// (0x00026014) grid_cam4_burst_pane

0x7523,	// (0x00026046) linegrid_cam4_burst_pane_ParamLimits

0x7523,	// (0x00026046) linegrid_cam4_burst_pane

0x7541,	// (0x00026064) scroll_pane_cp30_ParamLimits

0x7541,	// (0x00026064) scroll_pane_cp30

0x754d,	// (0x00026070) cell_cam4_burst_pane_ParamLimits

0x754d,	// (0x00026070) cell_cam4_burst_pane

0xd536,	// (0x0002c059) linegrid_cam4_burst_pane_g1_ParamLimits

0xd536,	// (0x0002c059) linegrid_cam4_burst_pane_g1

0x758d,	// (0x000260b0) linegrid_cam4_burst_pane_g2_ParamLimits

0x758d,	// (0x000260b0) linegrid_cam4_burst_pane_g2

0xd543,	// (0x0002c066) linegrid_cam4_burst_pane_g3_ParamLimits

0xd543,	// (0x0002c066) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002e564) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002e564) linegrid_cam4_burst_pane_g

0x759e,	// (0x000260c1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x759e,	// (0x000260c1) linegrid_cam4_burst_pane_g3_copy1

0xd550,	// (0x0002c073) linegrid_cam4_burst_pane_g4_ParamLimits

0xd550,	// (0x0002c073) linegrid_cam4_burst_pane_g4

0x75b8,	// (0x000260db) linegrid_cam4_burst_pane_g5_ParamLimits

0x75b8,	// (0x000260db) linegrid_cam4_burst_pane_g5

0x75c9,	// (0x000260ec) linegrid_cam4_burst_pane_g6_ParamLimits

0x75c9,	// (0x000260ec) linegrid_cam4_burst_pane_g6

0xd55d,	// (0x0002c080) linegrid_cam4_burst_pane_g7_ParamLimits

0xd55d,	// (0x0002c080) linegrid_cam4_burst_pane_g7

0x75e0,	// (0x00026103) cell_cam4_burst_pane_g1

0xd576,	// (0x0002c099) main_cam5_pane_t1_ParamLimits

0xd576,	// (0x0002c099) main_cam5_pane_t1

0xd588,	// (0x0002c0ab) main_cam5_pane_t2_ParamLimits

0xd588,	// (0x0002c0ab) main_cam5_pane_t2

0xd59a,	// (0x0002c0bd) main_cam5_pane_t3_ParamLimits

0xd59a,	// (0x0002c0bd) main_cam5_pane_t3

0xd5ac,	// (0x0002c0cf) main_cam5_pane_t4_ParamLimits

0xd5ac,	// (0x0002c0cf) main_cam5_pane_t4

0xd5c4,	// (0x0002c0e7) main_cam5_pane_t5_ParamLimits

0xd5c4,	// (0x0002c0e7) main_cam5_pane_t5

0xd5d8,	// (0x0002c0fb) main_cam5_pane_t6_ParamLimits

0xd5d8,	// (0x0002c0fb) main_cam5_pane_t6

0xd5ec,	// (0x0002c10f) main_cam5_pane_t7_ParamLimits

0xd5ec,	// (0x0002c10f) main_cam5_pane_t7

0xd5fe,	// (0x0002c121) main_cam5_pane_t8_ParamLimits

0xd5fe,	// (0x0002c121) main_cam5_pane_t8

0xd61c,	// (0x0002c13f) main_cam5_pane_t9_ParamLimits

0xd61c,	// (0x0002c13f) main_cam5_pane_t9

0xd62e,	// (0x0002c151) main_cam5_pane_t10_ParamLimits

0xd62e,	// (0x0002c151) main_cam5_pane_t10

0xd640,	// (0x0002c163) main_cam5_pane_t11_ParamLimits

0xd640,	// (0x0002c163) main_cam5_pane_t11

0xd654,	// (0x0002c177) main_cam5_pane_t12_ParamLimits

0xd654,	// (0x0002c177) main_cam5_pane_t12

0xd66b,	// (0x0002c18e) main_cam5_pane_t13_ParamLimits

0xd66b,	// (0x0002c18e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002e570) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002e570) main_cam5_pane_t

0x2354,	// (0x00020e77) popup_scut_keymap_window_ParamLimits

0x2354,	// (0x00020e77) popup_scut_keymap_window

0x75f3,	// (0x00026116) aid_size_cell_brow_shortcut

0xaf22,	// (0x00029a45) bg_popup_window_pane_cp010

0x75ff,	// (0x00026122) grid_scut_pane

0x760b,	// (0x0002612e) cell_scut_pane_ParamLimits

0x760b,	// (0x0002612e) cell_scut_pane

0x7626,	// (0x00026149) cell_scut_pane_g1

0xd68e,	// (0x0002c1b1) cell_scut_pane_t1

0xd69d,	// (0x0002c1c0) cell_scut_pane_t2

0x762f,	// (0x00026152) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002e58b) cell_scut_pane_t

0x5f13,	// (0x00024a36) main_mup3_pane_g8_ParamLimits

0x5f13,	// (0x00024a36) main_mup3_pane_g8

0x1b9e,	// (0x000206c1) area_vitu2_query_pane_ParamLimits

0x1b9e,	// (0x000206c1) area_vitu2_query_pane

0x737d,	// (0x00025ea0) input_focus_pane_cp08

0xd6ac,	// (0x0002c1cf) area_vitu2_query_pane_g1

0x763d,	// (0x00026160) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002e592) area_vitu2_query_pane_g

0x764e,	// (0x00026171) area_vitu2_query_pane_t1_ParamLimits

0x764e,	// (0x00026171) area_vitu2_query_pane_t1

0x7662,	// (0x00026185) area_vitu2_query_pane_t2_ParamLimits

0x7662,	// (0x00026185) area_vitu2_query_pane_t2

0x7676,	// (0x00026199) area_vitu2_query_pane_t3_ParamLimits

0x7676,	// (0x00026199) area_vitu2_query_pane_t3

0xd6b8,	// (0x0002c1db) area_vitu2_query_pane_t4_ParamLimits

0xd6b8,	// (0x0002c1db) area_vitu2_query_pane_t4

0xd6e0,	// (0x0002c203) area_vitu2_query_pane_t5_ParamLimits

0xd6e0,	// (0x0002c203) area_vitu2_query_pane_t5

0xd708,	// (0x0002c22b) area_vitu2_query_pane_t6_ParamLimits

0xd708,	// (0x0002c22b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002e597) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002e597) area_vitu2_query_pane_t

0x769e,	// (0x000261c1) bg_button_pane_cp018

0x76ac,	// (0x000261cf) bg_button_pane_cp021

0x76b8,	// (0x000261db) bg_button_pane_cp022

0x76c9,	// (0x000261ec) input_focus_pane_cp09

0x4690,	// (0x000231b3) aid_size_touch_mv_arrow_left

0x46bb,	// (0x000231de) aid_size_touch_mv_arrow_right

0x6fbe,	// (0x00025ae1) main_cset_slider_pane_g16_ParamLimits

0x6fbe,	// (0x00025ae1) main_cset_slider_pane_g16

0x6fca,	// (0x00025aed) main_cset_slider_pane_g17_ParamLimits

0x6fca,	// (0x00025aed) main_cset_slider_pane_g17

0x75e0,	// (0x00026103) cell_cam4_burst_pane_g1_ParamLimits

0x9c70,	// (0x00028793) compa_mode_pane

0x71c0,	// (0x00025ce3) popup_vtel_slider_window_g3_ParamLimits

0x71c0,	// (0x00025ce3) popup_vtel_slider_window_g3

0x71d4,	// (0x00025cf7) popup_vtel_slider_window_g4_ParamLimits

0x71d4,	// (0x00025cf7) popup_vtel_slider_window_g4

0x71e8,	// (0x00025d0b) popup_vtel_slider_window_t1_ParamLimits

0x71e8,	// (0x00025d0b) popup_vtel_slider_window_t1

0x9c70,	// (0x00028793) main_cl_pane

0xc3ac,	// (0x0002aecf) popup_imed_adjust2_window_ParamLimits

0xc380,	// (0x0002aea3) bg_tb_trans_pane_cp05_ParamLimits

0xccba,	// (0x0002b7dd) popup_imed_adjust2_window_g1_ParamLimits

0xccc9,	// (0x0002b7ec) popup_imed_adjust2_window_g2_ParamLimits

0xccc9,	// (0x0002b7ec) popup_imed_adjust2_window_g2

0xccd5,	// (0x0002b7f8) popup_imed_adjust2_window_g3_ParamLimits

0xccd5,	// (0x0002b7f8) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002e302) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002e302) popup_imed_adjust2_window_g

0xcce1,	// (0x0002b804) popup_imed_adjust2_window_t1_ParamLimits

0xccf9,	// (0x0002b81c) slider_imed_adjust_pane_ParamLimits

0xcd0d,	// (0x0002b830) slider_imed_adjust_pane_g1_ParamLimits

0xcd1d,	// (0x0002b840) slider_imed_adjust_pane_g2_ParamLimits

0xcd2d,	// (0x0002b850) slider_imed_adjust_pane_g3_ParamLimits

0xcd3e,	// (0x0002b861) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002e309) slider_imed_adjust_pane_g_ParamLimits

0x1909,	// (0x0002042c) aid_touch_area_cam4_ParamLimits

0x1909,	// (0x0002042c) aid_touch_area_cam4

0x1919,	// (0x0002043c) battery_pane_cp01

0x19a0,	// (0x000204c3) main_camera4_pane_g6_ParamLimits

0x19a0,	// (0x000204c3) main_camera4_pane_g6

0x19be,	// (0x000204e1) main_camera4_pane_t2_ParamLimits

0x19be,	// (0x000204e1) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002e40c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002e40c) main_camera4_pane_t

0x1a29,	// (0x0002054c) aid_touch_area_vid4_ParamLimits

0x1a29,	// (0x0002054c) aid_touch_area_vid4

0x1a69,	// (0x0002058c) main_video4_pane_g5_ParamLimits

0x1a69,	// (0x0002058c) main_video4_pane_g5

0x1a8f,	// (0x000205b2) vid4_progress_pane_ParamLimits

0x1a8f,	// (0x000205b2) vid4_progress_pane

0xd32d,	// (0x0002be50) main_cset_slider_pane_g18_ParamLimits

0xd32d,	// (0x0002be50) main_cset_slider_pane_g18

0xd56a,	// (0x0002c08d) cell_cam4_burst_pane_g2_ParamLimits

0xd56a,	// (0x0002c08d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002e56b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002e56b) cell_cam4_burst_pane_g

0x76da,	// (0x000261fd) bg_cl_pane_ParamLimits

0x76da,	// (0x000261fd) bg_cl_pane

0x76e6,	// (0x00026209) cl_header_pane_ParamLimits

0x76e6,	// (0x00026209) cl_header_pane

0x76f2,	// (0x00026215) cl_listscroll_pane_ParamLimits

0x76f2,	// (0x00026215) cl_listscroll_pane

0xd754,	// (0x0002c277) bg_cl_pane_g1

0xd75c,	// (0x0002c27f) bg_cl_pane_g2

0xd764,	// (0x0002c287) bg_cl_pane_g3

0xd76c,	// (0x0002c28f) bg_cl_pane_g4

0xd774,	// (0x0002c297) bg_cl_pane_g5

0xd77c,	// (0x0002c29f) bg_cl_pane_g6

0xd784,	// (0x0002c2a7) bg_cl_pane_g7

0xd78c,	// (0x0002c2af) bg_cl_pane_g8

0xd794,	// (0x0002c2b7) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002e5a6) bg_cl_pane_g

0x76fe,	// (0x00026221) aid_height_cl_leading_ParamLimits

0x76fe,	// (0x00026221) aid_height_cl_leading

0x770a,	// (0x0002622d) aid_height_cl_text_ParamLimits

0x770a,	// (0x0002622d) aid_height_cl_text

0x2395,	// (0x00020eb8) bg_cl_header_pane_ParamLimits

0x2395,	// (0x00020eb8) bg_cl_header_pane

0x7722,	// (0x00026245) cl_header_pane_g1_ParamLimits

0x7722,	// (0x00026245) cl_header_pane_g1

0x772f,	// (0x00026252) cl_header_pane_t1_ParamLimits

0x772f,	// (0x00026252) cl_header_pane_t1

0xd79c,	// (0x0002c2bf) cl_list_pane

0xd300,	// (0x0002be23) hc_scroll_pane_cp01

0xa81b,	// (0x0002933e) bg_cl_header_pane_g1

0xd1e2,	// (0x0002bd05) bg_cl_header_pane_g2

0xa83b,	// (0x0002935e) bg_cl_header_pane_g3

0xd1f2,	// (0x0002bd15) bg_cl_header_pane_g4

0xd1ea,	// (0x0002bd0d) bg_cl_header_pane_g5

0xd479,	// (0x0002bf9c) bg_cl_header_pane_g6

0xd20a,	// (0x0002bd2d) bg_cl_header_pane_g7

0xd212,	// (0x0002bd35) bg_cl_header_pane_g8

0xd202,	// (0x0002bd25) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002e5b9) bg_cl_header_pane_g

0x7741,	// (0x00026264) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7741,	// (0x00026264) hc_cl_list_double_graphic_heading_pane

0x7751,	// (0x00026274) hc_cl_list_single_graphic_pane_ParamLimits

0x7751,	// (0x00026274) hc_cl_list_single_graphic_pane

0x7763,	// (0x00026286) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7763,	// (0x00026286) hc_cl_list_single_graphic_pane_g1

0x776f,	// (0x00026292) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x776f,	// (0x00026292) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002e5cc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002e5cc) hc_cl_list_single_graphic_pane_g

0x7783,	// (0x000262a6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7783,	// (0x000262a6) hc_cl_list_single_graphic_pane_t1

0x7763,	// (0x00026286) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7763,	// (0x00026286) hc_cl_list_double_graphic_heading_pane_g1

0x7798,	// (0x000262bb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7798,	// (0x000262bb) hc_cl_list_double_graphic_heading_pane_g2

0x77ac,	// (0x000262cf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x77ac,	// (0x000262cf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002e5d1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002e5d1) hc_cl_list_double_graphic_heading_pane_g

0x77c0,	// (0x000262e3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x77c0,	// (0x000262e3) hc_cl_list_double_graphic_heading_pane_t1

0x77d5,	// (0x000262f8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x77d5,	// (0x000262f8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002e5d8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002e5d8) hc_cl_list_double_graphic_heading_pane_t

0x1fec,	// (0x00020b0f) vid4_progress_pane_g1

0x1ffe,	// (0x00020b21) vid4_progress_pane_g2

0x10cd,	// (0x0001fbf0) vid4_progress_pane_g3

0x2010,	// (0x00020b33) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002e5dd) vid4_progress_pane_g

0x202e,	// (0x00020b51) vid4_progress_pane_t1

0x2043,	// (0x00020b66) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002e5e8) vid4_progress_pane_t

0x206e,	// (0x00020b91) wait_bar_pane_cp07

0xc5be,	// (0x0002b0e1) blid_firmament_pane_ParamLimits

0xc601,	// (0x0002b124) popup_blid_sat_info2_window_g1

0xc625,	// (0x0002b148) popup_blid_sat_info2_window_t3

0xc633,	// (0x0002b156) popup_blid_sat_info2_window_t4

0xc641,	// (0x0002b164) popup_blid_sat_info2_window_t5

0xc64f,	// (0x0002b172) popup_blid_sat_info2_window_t6

0xc65f,	// (0x0002b182) popup_blid_sat_info2_window_t7

0xc66d,	// (0x0002b190) popup_blid_sat_info2_window_t8

0xc67b,	// (0x0002b19e) popup_blid_sat_info2_window_t9

0xc689,	// (0x0002b1ac) popup_blid_sat_info2_window_t10

0xc751,	// (0x0002b274) aid_firma_cardinal_ParamLimits

0xc765,	// (0x0002b288) blid_firmament_pane_t1_ParamLimits

0xc77c,	// (0x0002b29f) blid_firmament_pane_t2_ParamLimits

0xc793,	// (0x0002b2b6) blid_firmament_pane_t3_ParamLimits

0xc7aa,	// (0x0002b2cd) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0002e1fb) blid_firmament_pane_t_ParamLimits

0xc7c1,	// (0x0002b2e4) blid_sat_info_pane_ParamLimits

0xa5d8,	// (0x000290fb) main_cam_set_pane_ParamLimits

0x663f,	// (0x00025162) aid_size_cell_colour_35_ParamLimits

0x6659,	// (0x0002517c) aid_size_cell_colour_112_ParamLimits

0x6670,	// (0x00025193) aid_size_cell_effect_ParamLimits

0xa5d8,	// (0x000290fb) bg_tb_trans_pane_cp02_ParamLimits

0xaebc,	// (0x000299df) heading_imed_pane_ParamLimits

0x668a,	// (0x000251ad) listscroll_imed_pane_ParamLimits

0xb9a2,	// (0x0002a4c5) popup_call2_audio_first_window_g5_ParamLimits

0xb9a2,	// (0x0002a4c5) popup_call2_audio_first_window_g5

0x1792,	// (0x000202b5) aid_size_touch_image3_arrow_left_ParamLimits

0x1792,	// (0x000202b5) aid_size_touch_image3_arrow_left

0x17a8,	// (0x000202cb) aid_size_touch_image3_arrow_right_ParamLimits

0x17a8,	// (0x000202cb) aid_size_touch_image3_arrow_right

0x2059,	// (0x00020b7c) vid4_progress_pane_t3

0x6938,	// (0x0002545b) main_hwr_training_symbol_option_pane_ParamLimits

0x6938,	// (0x0002545b) main_hwr_training_symbol_option_pane

0xcfa9,	// (0x0002bacc) popup_hwr_training_preview_window_ParamLimits

0xcfa9,	// (0x0002bacc) popup_hwr_training_preview_window

0x1488,	// (0x0001ffab) hwr_training_navi_pane_g5_ParamLimits

0x1488,	// (0x0001ffab) hwr_training_navi_pane_g5

0xd1d0,	// (0x0002bcf3) popup_char_count_window

0x1f1c,	// (0x00020a3f) bg_popup_sub_pane_cp20_ParamLimits

0x1f2a,	// (0x00020a4d) list_vitu2_match_list_pane_ParamLimits

0x1f36,	// (0x00020a59) vitu2_page_scroll_pane_ParamLimits

0x1f36,	// (0x00020a59) vitu2_page_scroll_pane

0xd7f1,	// (0x0002c314) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7f1,	// (0x0002c314) list_single_hwr_training_symbol_option_pane

0xd804,	// (0x0002c327) list_single_hwr_training_symbol_option_pane_g1

0xd80c,	// (0x0002c32f) list_single_hwr_training_symbol_option_pane_t1

0xd81a,	// (0x0002c33d) bg_button_pane_cp023

0xd823,	// (0x0002c346) bg_button_pane_cp024

0x7822,	// (0x00026345) vitu2_page_scroll_pane_g1

0x782a,	// (0x0002634d) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002e5ef) vitu2_page_scroll_pane_g

0x7834,	// (0x00026357) vitu2_page_scroll_pane_t1

0xc51e,	// (0x0002b041) popup_char_count_window_g1

0xd856,	// (0x0002c379) popup_char_count_window_g2

0xd85f,	// (0x0002c382) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002e5f4) popup_char_count_window_g

0xd868,	// (0x0002c38b) popup_char_count_window_t1

0x9c70,	// (0x00028793) main_vded2_pane

0xcca6,	// (0x0002b7c9) aid_size_cell_imed_line

0xccb0,	// (0x0002b7d3) grid_imed_line_width_pane

0x1b11,	// (0x00020634) vid4_indicators_pane_g4

0xd876,	// (0x0002c399) cell_imed_line_width_pane_ParamLimits

0xd876,	// (0x0002c399) cell_imed_line_width_pane

0xd88c,	// (0x0002c3af) cell_imed_line_width_pane_g1

0xd7bd,	// (0x0002c2e0) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002e5fb) cell_imed_line_width_pane_g

0x7843,	// (0x00026366) main_vded2_pane_g1_ParamLimits

0x7843,	// (0x00026366) main_vded2_pane_g1

0x7852,	// (0x00026375) main_vded2_pane_g2_ParamLimits

0x7852,	// (0x00026375) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002e600) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002e600) main_vded2_pane_g

0x7860,	// (0x00026383) vded2_slider_pane_ParamLimits

0x7860,	// (0x00026383) vded2_slider_pane

0x786d,	// (0x00026390) aid_size_touch_vded2_end

0x7877,	// (0x0002639a) aid_size_touch_vded2_playhead

0xd895,	// (0x0002c3b8) aid_size_touch_vded2_start

0xd89d,	// (0x0002c3c0) vded2_slider_bg_pane

0xd8a6,	// (0x0002c3c9) vded2_slider_pane_g1

0xd8af,	// (0x0002c3d2) vded2_slider_pane_g2

0x787f,	// (0x000263a2) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002e605) vded2_slider_pane_g

0xd424,	// (0x0002bf47) vded2_slider_bg_pane_g1

0xd42d,	// (0x0002bf50) vded2_slider_bg_pane_g2

0xd436,	// (0x0002bf59) vded2_slider_bg_pane_g3

0x0002,

0xf7a8,	// (0x0002e2cb) vded2_slider_bg_pane_g

0x4d62,	// (0x00023885) aid_postcard_touch_down_pane_ParamLimits

0x4d62,	// (0x00023885) aid_postcard_touch_down_pane

0x4d72,	// (0x00023895) aid_postcard_touch_up_pane_ParamLimits

0x4d72,	// (0x00023895) aid_postcard_touch_up_pane

0x9c70,	// (0x00028793) main_blid2_pane

0xc38e,	// (0x0002aeb1) popup_blid2_search_window

0x9c70,	// (0x00028793) blid2_gps_pane

0x9c70,	// (0x00028793) blid2_navig_pane

0x9c70,	// (0x00028793) blid2_search_pane

0x9c70,	// (0x00028793) blid2_tripm_pane

0x7888,	// (0x000263ab) blid2_search_pane_g1_ParamLimits

0x7888,	// (0x000263ab) blid2_search_pane_g1

0x7894,	// (0x000263b7) blid2_search_pane_t1_ParamLimits

0x7894,	// (0x000263b7) blid2_search_pane_t1

0x78a6,	// (0x000263c9) aid_size_cell_blid2_gps_ParamLimits

0x78a6,	// (0x000263c9) aid_size_cell_blid2_gps

0x78b6,	// (0x000263d9) blid2_gps_pane_g1_ParamLimits

0x78b6,	// (0x000263d9) blid2_gps_pane_g1

0x78c2,	// (0x000263e5) grid_blid2_satellite_pane_ParamLimits

0x78c2,	// (0x000263e5) grid_blid2_satellite_pane

0x78d0,	// (0x000263f3) blid2_navig_pane_g1_ParamLimits

0x78d0,	// (0x000263f3) blid2_navig_pane_g1

0x78dc,	// (0x000263ff) blid2_navig_pane_t1_ParamLimits

0x78dc,	// (0x000263ff) blid2_navig_pane_t1

0x78ee,	// (0x00026411) blid2_navig_pane_t2_ParamLimits

0x78ee,	// (0x00026411) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0002e60c) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0002e60c) blid2_navig_pane_t

0x7900,	// (0x00026423) blid2_navig_ring_pane_ParamLimits

0x7900,	// (0x00026423) blid2_navig_ring_pane

0x7910,	// (0x00026433) blid2_speed_pane_ParamLimits

0x7910,	// (0x00026433) blid2_speed_pane

0x791c,	// (0x0002643f) blid2_tripm_pane_g1_ParamLimits

0x791c,	// (0x0002643f) blid2_tripm_pane_g1

0x792c,	// (0x0002644f) blid2_tripm_pane_g2_ParamLimits

0x792c,	// (0x0002644f) blid2_tripm_pane_g2

0x7938,	// (0x0002645b) blid2_tripm_pane_g3_ParamLimits

0x7938,	// (0x0002645b) blid2_tripm_pane_g3

0x7944,	// (0x00026467) blid2_tripm_pane_g4_ParamLimits

0x7944,	// (0x00026467) blid2_tripm_pane_g4

0x7950,	// (0x00026473) blid2_tripm_pane_g5_ParamLimits

0x7950,	// (0x00026473) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0002e611) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0002e611) blid2_tripm_pane_g

0x796c,	// (0x0002648f) blid2_tripm_pane_t1_ParamLimits

0x796c,	// (0x0002648f) blid2_tripm_pane_t1

0x797e,	// (0x000264a1) blid2_tripm_pane_t2_ParamLimits

0x797e,	// (0x000264a1) blid2_tripm_pane_t2

0x7990,	// (0x000264b3) blid2_tripm_pane_t3_ParamLimits

0x7990,	// (0x000264b3) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0002e61e) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0002e61e) blid2_tripm_pane_t

0x79c2,	// (0x000264e5) cell_blid2_satellite_pane_ParamLimits

0x79c2,	// (0x000264e5) cell_blid2_satellite_pane

0x79e0,	// (0x00026503) cell_blid2_satellite_pane_g1

0xd8b7,	// (0x0002c3da) cell_blid2_satellite_pane_t1

0xc7d1,	// (0x0002b2f4) blid2_speed_pane_g1

0xd8c5,	// (0x0002c3e8) blid2_speed_pane_t1

0xd8d3,	// (0x0002c3f6) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0002e627) blid2_speed_pane_t

0xc7d1,	// (0x0002b2f4) blid2_navig_ring_pane_g1

0x79e9,	// (0x0002650c) blid2_navig_ring_pane_g2

0x79f1,	// (0x00026514) blid2_navig_ring_pane_g3

0x79f9,	// (0x0002651c) blid2_navig_ring_pane_g4

0x7a01,	// (0x00026524) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0002e62c) blid2_navig_ring_pane_g

0x9c70,	// (0x00028793) bg_popup_window_pane_cp011

0xd8e1,	// (0x0002c404) popup_blid2_search_window_g1

0xd8e9,	// (0x0002c40c) popup_blid2_search_window_t1

0xd8f7,	// (0x0002c41a) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0002e637) popup_blid2_search_window_t

0xa72a,	// (0x0002924d) main_browser_pane_g1

0xa404,	// (0x00028f27) main_browser_pane_ParamLimits

0x1abc,	// (0x000205df) bg_button_pane_cp011_ParamLimits

0x1e39,	// (0x0002095c) cell_vitu2_function_pane_g1_ParamLimits

0xc380,	// (0x0002aea3) bg_popup_sub_pane_cp22_ParamLimits

0x737d,	// (0x00025ea0) input_focus_pane_cp08_ParamLimits

0x7394,	// (0x00025eb7) popup_vitu2_query_button_pane_ParamLimits

0x7394,	// (0x00025eb7) popup_vitu2_query_button_pane

0x73a5,	// (0x00025ec8) popup_vitu2_query_input_button_pane

0xd4c0,	// (0x0002bfe3) popup_vitu2_query_window_g1_ParamLimits

0x73af,	// (0x00025ed2) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002e53f) popup_vitu2_query_window_g_ParamLimits

0x9c70,	// (0x00028793) bg_button_pane_cp026

0x7a09,	// (0x0002652c) popup_vitu2_query_input_button_pane_g1

0x9c70,	// (0x00028793) bg_button_pane_cp025

0xd905,	// (0x0002c428) popup_vitu2_query_button_pane_t1

0x5c11,	// (0x00024734) main_mp3_pane_t6

0x5c21,	// (0x00024744) popup_slider_window_cp01

0x19de,	// (0x00020501) cam4_battery_pane

0x1aca,	// (0x000205ed) cam4_battery_pane_cp02

0x1fe4,	// (0x00020b07) cam4_battery_pane_cp01

0x1fe4,	// (0x00020b07) cam4_battery_pane_cp03

0xd7c5,	// (0x0002c2e8) cam4_battery_pane_g1

0xc7d1,	// (0x0002b2f4) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0002e63c) cam4_battery_pane_g

0xc697,	// (0x0002b1ba) popup_blid_sat_info2_window_t11

0x4690,	// (0x000231b3) aid_size_touch_mv_arrow_left_ParamLimits

0x46bb,	// (0x000231de) aid_size_touch_mv_arrow_right_ParamLimits

0xae68,	// (0x0002998b) navi_pane_g1_ParamLimits

0x46fa,	// (0x0002321d) navi_pane_g2_ParamLimits

0x4728,	// (0x0002324b) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0002df0d) navi_pane_g_ParamLimits

0x4782,	// (0x000232a5) navi_pane_mv_t1_ParamLimits

0x6696,	// (0x000251b9) grid_imed_effect_pane_ParamLimits

0x315c,	// (0x00021c7f) aid_placing_vt_slider_lsc

0xa675,	// (0x00029198) aid_placing_vt_slider_prt

0xa5d8,	// (0x000290fb) bg_tb_trans_pane_cp01_ParamLimits

0xc921,	// (0x0002b444) popup_image_details_window_g1_ParamLimits

0xc934,	// (0x0002b457) popup_image_details_window_g2_ParamLimits

0xc949,	// (0x0002b46c) popup_image_details_window_g3_ParamLimits

0xc949,	// (0x0002b46c) popup_image_details_window_g3

0xf71d,	// (0x0002e240) popup_image_details_window_g_ParamLimits

0xc95d,	// (0x0002b480) popup_image_details_window_t1_ParamLimits

0xc96f,	// (0x0002b492) popup_image_details_window_t2_ParamLimits

0xc988,	// (0x0002b4ab) popup_image_details_window_t3_ParamLimits

0xc99c,	// (0x0002b4bf) popup_image_details_window_t4_ParamLimits

0xc9b7,	// (0x0002b4da) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0002e247) popup_image_details_window_t_ParamLimits

0x7716,	// (0x00026239) cl_header_name_pane_ParamLimits

0x7716,	// (0x00026239) cl_header_name_pane

0x7a11,	// (0x00026534) cl_header_name_pane_t1_ParamLimits

0x7a11,	// (0x00026534) cl_header_name_pane_t1

0x7a28,	// (0x0002654b) cl_header_name_pane_t2_ParamLimits

0x7a28,	// (0x0002654b) cl_header_name_pane_t2

0x7a52,	// (0x00026575) cl_header_name_pane_t3_ParamLimits

0x7a52,	// (0x00026575) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0002e641) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0002e641) cl_header_name_pane_t

0x4753,	// (0x00023276) navi_pane_mv_g2_ParamLimits

0xd18d,	// (0x0002bcb0) field_vitu2_entry_pane_g1_ParamLimits

0xd199,	// (0x0002bcbc) field_vitu2_entry_pane_g2_ParamLimits

0xd1a5,	// (0x0002bcc8) field_vitu2_entry_pane_g3_ParamLimits

0xd1a5,	// (0x0002bcc8) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002e43e) field_vitu2_entry_pane_g_ParamLimits

0x1d01,	// (0x00020824) cell_vitu2_itu_pane_g1_ParamLimits

0x1d11,	// (0x00020834) cell_vitu2_itu_pane_g2_ParamLimits

0x1d11,	// (0x00020834) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002e44a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002e44a) cell_vitu2_itu_pane_g

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp05_ParamLimits

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp05

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp03

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp04

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp10_ParamLimits

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp10

0x76b8,	// (0x000261db) bg_vkb2_func_pane_cp08

0x769e,	// (0x000261c1) bg_vkb2_func_pane_cp06

0x76ac,	// (0x000261cf) bg_vkb2_func_pane_cp07

0xd82c,	// (0x0002c34f) bg_vkb2_func_pane_cp11_ParamLimits

0xd82c,	// (0x0002c34f) bg_vkb2_func_pane_cp11

0xd841,	// (0x0002c364) bg_vkb2_func_pane_cp12_ParamLimits

0xd841,	// (0x0002c364) bg_vkb2_func_pane_cp12

0x9c70,	// (0x00028793) bg_vkb2_func_pane_cp09

0xd1e2,	// (0x0002bd05) bg_vkb2_func_pane_g1

0xa83b,	// (0x0002935e) bg_vkb2_func_pane_g2

0xd1ea,	// (0x0002bd0d) bg_vkb2_func_pane_g3

0xd1f2,	// (0x0002bd15) bg_vkb2_func_pane_g4

0xd479,	// (0x0002bf9c) bg_vkb2_func_pane_g5

0xd20a,	// (0x0002bd2d) bg_vkb2_func_pane_g6

0xd212,	// (0x0002bd35) bg_vkb2_func_pane_g7

0xd202,	// (0x0002bd25) bg_vkb2_func_pane_g8

0xa81b,	// (0x0002933e) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0002e648) bg_vkb2_func_pane_g

0x795e,	// (0x00026481) blid2_tripm_pane_g6_ParamLimits

0x795e,	// (0x00026481) blid2_tripm_pane_g6

0xd061,	// (0x0002bb84) mp4_progress_pane_g1

0x79b6,	// (0x000264d9) blid2_tripm_values_pane_ParamLimits

0x79b6,	// (0x000264d9) blid2_tripm_values_pane

0x7a77,	// (0x0002659a) blid2_tripm_values_pane_t1

0x7a85,	// (0x000265a8) blid2_tripm_values_pane_t2

0x7a93,	// (0x000265b6) blid2_tripm_values_pane_t3

0x7aa1,	// (0x000265c4) blid2_tripm_values_pane_t4

0x7aaf,	// (0x000265d2) blid2_tripm_values_pane_t5

0x7abd,	// (0x000265e0) blid2_tripm_values_pane_t6

0x7acb,	// (0x000265ee) blid2_tripm_values_pane_t7

0x7ad9,	// (0x000265fc) blid2_tripm_values_pane_t8

0x7ae7,	// (0x0002660a) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0002e65b) blid2_tripm_values_pane_t

0x319a,	// (0x00021cbd) call_video_pane_t1_ParamLimits

0x31b7,	// (0x00021cda) call_video_pane_t2_ParamLimits

0xf273,	// (0x0002dd96) call_video_pane_t_ParamLimits

0x4cdf,	// (0x00023802) msg_header_pane_g1_ParamLimits

0xb09e,	// (0x00029bc1) msg_header_pane_g2_ParamLimits

0xb09e,	// (0x00029bc1) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0002dfb0) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0002dfb0) msg_header_pane_g

0xa404,	// (0x00028f27) main_clock2_pane_ParamLimits

0x649d,	// (0x00024fc0) grid_clock2_toolbar_pane_ParamLimits

0x649d,	// (0x00024fc0) grid_clock2_toolbar_pane

0x649d,	// (0x00024fc0) listscroll_clock2_pane_ParamLimits

0x649d,	// (0x00024fc0) listscroll_clock2_pane

0x6545,	// (0x00025068) main_clock2_pane_t3_ParamLimits

0x6545,	// (0x00025068) main_clock2_pane_t3

0x6557,	// (0x0002507a) main_clock2_pane_t4_ParamLimits

0x6557,	// (0x0002507a) main_clock2_pane_t4

0xd913,	// (0x0002c436) cell_clock2_toolbar_pane

0xd91b,	// (0x0002c43e) cell_clock2_toolbar_pane_cp01

0xd91b,	// (0x0002c43e) cell_clock2_toolbar_pane_cp02

0xd923,	// (0x0002c446) cell_clock2_toolbar_pane_cp03

0xd92b,	// (0x0002c44e) list_clock2_pane

0xadce,	// (0x000298f1) scroll_pane_cp10

0xd933,	// (0x0002c456) list_single_clock2_pane_ParamLimits

0xd933,	// (0x0002c456) list_single_clock2_pane

0xaf22,	// (0x00029a45) list_highlight_pane_cp08

0xd940,	// (0x0002c463) list_single_clock2_pane_t1

0xd94e,	// (0x0002c471) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0002e66e) list_single_clock2_pane_t

0x9c70,	// (0x00028793) bg_button_pane_cp10

0xd95c,	// (0x0002c47f) cell_clock2_toolbar_pane_g1

0x108b,	// (0x0001fbae) aid_main_viewer_pane_g1_ParamLimits

0x108b,	// (0x0001fbae) aid_main_viewer_pane_g1

0x1097,	// (0x0001fbba) aid_main_viewer_pane_g2_ParamLimits

0x1097,	// (0x0001fbba) aid_main_viewer_pane_g2

0x4d1e,	// (0x00023841) aid_main_viewer_pane_g3_ParamLimits

0x4d1e,	// (0x00023841) aid_main_viewer_pane_g3

0x4d2f,	// (0x00023852) aid_main_viewer_pane_g4_ParamLimits

0x4d2f,	// (0x00023852) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0002dfc1) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0002dfc1) aid_main_viewer_pane_g

0x5477,	// (0x00023f9a) main_calc_pane_ParamLimits

0x5484,	// (0x00023fa7) main_dialer2_pane_ParamLimits

0x9c70,	// (0x00028793) main_cam6_pane

0x9c70,	// (0x00028793) main_vid6_pane

0x64a9,	// (0x00024fcc) listscroll_gen_pane_cp06_ParamLimits

0x64a9,	// (0x00024fcc) listscroll_gen_pane_cp06

0x6569,	// (0x0002508c) main_clock2_pane_t5_ParamLimits

0x6569,	// (0x0002508c) main_clock2_pane_t5

0x65b8,	// (0x000250db) aid_call2_pane_cp10_ParamLimits

0x65ca,	// (0x000250ed) aid_call_pane_cp10_ParamLimits

0xae3d,	// (0x00029960) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae3d,	// (0x00029960) popup_clock_analogue_window_cp10_g2_ParamLimits

0x65dc,	// (0x000250ff) popup_clock_analogue_window_cp10_g3_ParamLimits

0x65dc,	// (0x000250ff) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae3d,	// (0x00029960) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002e2f7) popup_clock_analogue_window_cp10_g_ParamLimits

0x65ee,	// (0x00025111) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69fe,	// (0x00025521) cell_dialer2_keypad_pane_g2_ParamLimits

0x69fe,	// (0x00025521) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002e3dd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002e3dd) cell_dialer2_keypad_pane_g

0x6a1a,	// (0x0002553d) cell_dialer2_keypad_pane_t1

0x6eac,	// (0x000259cf) main_cset_text2_pane_ParamLimits

0x6eac,	// (0x000259cf) main_cset_text2_pane

0xd6ac,	// (0x0002c1cf) area_vitu2_query_pane_g1_ParamLimits

0x763d,	// (0x00026160) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002e592) area_vitu2_query_pane_g_ParamLimits

0xd730,	// (0x0002c253) area_vitu2_query_pane_t7_ParamLimits

0xd730,	// (0x0002c253) area_vitu2_query_pane_t7

0x769e,	// (0x000261c1) bg_button_pane_cp018_ParamLimits

0x76ac,	// (0x000261cf) bg_button_pane_cp021_ParamLimits

0x76b8,	// (0x000261db) bg_button_pane_cp022_ParamLimits

0x76b8,	// (0x000261db) bg_vkb2_func_pane_cp08_ParamLimits

0x769e,	// (0x000261c1) bg_vkb2_func_pane_cp06_ParamLimits

0x76ac,	// (0x000261cf) bg_vkb2_func_pane_cp07_ParamLimits

0x76c9,	// (0x000261ec) input_focus_pane_cp09_ParamLimits

0x2082,	// (0x00020ba5) cam6_autofocus_pane_ParamLimits

0x2082,	// (0x00020ba5) cam6_autofocus_pane

0x20a4,	// (0x00020bc7) cam6_image_uncrop_pane_ParamLimits

0x20a4,	// (0x00020bc7) cam6_image_uncrop_pane

0x20d1,	// (0x00020bf4) cam6_indi_pane_ParamLimits

0x20d1,	// (0x00020bf4) cam6_indi_pane

0x20eb,	// (0x00020c0e) cam6_mode_pane_ParamLimits

0x20eb,	// (0x00020c0e) cam6_mode_pane

0x20ff,	// (0x00020c22) cam6_timer_pane_ParamLimits

0x20ff,	// (0x00020c22) cam6_timer_pane

0x210b,	// (0x00020c2e) cam6_zoom_pane_ParamLimits

0x210b,	// (0x00020c2e) cam6_zoom_pane

0x7af5,	// (0x00026618) cam6_mode_pane_g1_ParamLimits

0x7af5,	// (0x00026618) cam6_mode_pane_g1

0x7b01,	// (0x00026624) cam6_mode_pane_g2_ParamLimits

0x7b01,	// (0x00026624) cam6_mode_pane_g2

0x7b0d,	// (0x00026630) cam6_mode_pane_g3_ParamLimits

0x7b0d,	// (0x00026630) cam6_mode_pane_g3

0x7b19,	// (0x0002663c) cam6_mode_pane_g4_ParamLimits

0x7b19,	// (0x0002663c) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0002e673) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0002e673) cam6_mode_pane_g

0xd43f,	// (0x0002bf62) bg_tb_trans_pane_cp08_ParamLimits

0xd43f,	// (0x0002bf62) bg_tb_trans_pane_cp08

0xd964,	// (0x0002c487) cam6_battery_pane_ParamLimits

0xd964,	// (0x0002c487) cam6_battery_pane

0xd97a,	// (0x0002c49d) cam6_indi_pane_g1_ParamLimits

0xd97a,	// (0x0002c49d) cam6_indi_pane_g1

0xd98c,	// (0x0002c4af) cam6_indi_pane_g2_ParamLimits

0xd98c,	// (0x0002c4af) cam6_indi_pane_g2

0xd99e,	// (0x0002c4c1) cam6_indi_pane_g3_ParamLimits

0xd99e,	// (0x0002c4c1) cam6_indi_pane_g3

0x0002,

0x072f,	// (0x0001f252) cam6_indi_pane_g_ParamLimits

0x072f,	// (0x0001f252) cam6_indi_pane_g

0xd9b0,	// (0x0002c4d3) cam6_indi_pane_t1_ParamLimits

0xd9b0,	// (0x0002c4d3) cam6_indi_pane_t1

0x6b9d,	// (0x000256c0) cam6_autofocus_pane_g1

0x6b95,	// (0x000256b8) cam6_autofocus_pane_g2

0x6bad,	// (0x000256d0) cam6_autofocus_pane_g3

0x6ba5,	// (0x000256c8) cam6_autofocus_pane_g4

0x0003,

0xfb59,	// (0x0002e67c) cam6_autofocus_pane_g

0xd9d6,	// (0x0002c4f9) cam6_timer_pane_g1

0xd9de,	// (0x0002c501) cam6_timer_pane_t1

0xd9ec,	// (0x0002c50f) cam6_zoom_cont_pane

0xd9f4,	// (0x0002c517) cam6_zoom_pane_g1

0xd9fc,	// (0x0002c51f) cam6_zoom_pane_g2

0x7b25,	// (0x00026648) cam6_zoom_pane_g3

0x0002,

0xfb62,	// (0x0002e685) cam6_zoom_pane_g

0xc7d1,	// (0x0002b2f4) cam6_battery_pane_g1

0xc7d1,	// (0x0002b2f4) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0002e204) cam6_battery_pane_g

0xda04,	// (0x0002c527) cam6_zoom_cont_pane_g1

0xda0d,	// (0x0002c530) cam6_zoom_cont_pane_g2

0xda16,	// (0x0002c539) cam6_zoom_cont_pane_g3

0x0002,

0x0746,	// (0x0001f269) cam6_zoom_cont_pane_g

0x7b42,	// (0x00026665) cam6_mode_pane_cp_ParamLimits

0x7b42,	// (0x00026665) cam6_mode_pane_cp

0x7b56,	// (0x00026679) cam6_zoom_pane_cp_ParamLimits

0x7b56,	// (0x00026679) cam6_zoom_pane_cp

0x7b72,	// (0x00026695) vid6_image_uncrop_cif_pane_ParamLimits

0x7b72,	// (0x00026695) vid6_image_uncrop_cif_pane

0x7b9e,	// (0x000266c1) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b9e,	// (0x000266c1) vid6_image_uncrop_nhd_pane

0x7bbd,	// (0x000266e0) vid6_image_uncrop_vga_pane_ParamLimits

0x7bbd,	// (0x000266e0) vid6_image_uncrop_vga_pane

0x7bdc,	// (0x000266ff) vid6_image_uncrop_wvga_pane_ParamLimits

0x7bdc,	// (0x000266ff) vid6_image_uncrop_wvga_pane

0x7bfb,	// (0x0002671e) vid6_indi_pane_ParamLimits

0x7bfb,	// (0x0002671e) vid6_indi_pane

0xd43f,	// (0x0002bf62) bg_tb_trans_pane_cp09_ParamLimits

0xd43f,	// (0x0002bf62) bg_tb_trans_pane_cp09

0xda2e,	// (0x0002c551) cam6_battery_pane_cp_ParamLimits

0xda2e,	// (0x0002c551) cam6_battery_pane_cp

0xda3a,	// (0x0002c55d) vid6_indi_pane_g1_ParamLimits

0xda3a,	// (0x0002c55d) vid6_indi_pane_g1

0xda4c,	// (0x0002c56f) vid6_indi_pane_g2_ParamLimits

0xda4c,	// (0x0002c56f) vid6_indi_pane_g2

0xda5e,	// (0x0002c581) vid6_indi_pane_g3_ParamLimits

0xda5e,	// (0x0002c581) vid6_indi_pane_g3

0xda75,	// (0x0002c598) vid6_indi_pane_g4_ParamLimits

0xda75,	// (0x0002c598) vid6_indi_pane_g4

0xda8c,	// (0x0002c5af) vid6_indi_pane_g5_ParamLimits

0xda8c,	// (0x0002c5af) vid6_indi_pane_g5

0x0004,

0x074d,	// (0x0001f270) vid6_indi_pane_g_ParamLimits

0x074d,	// (0x0001f270) vid6_indi_pane_g

0xdaa6,	// (0x0002c5c9) vid6_indi_pane_t1_ParamLimits

0xdaa6,	// (0x0002c5c9) vid6_indi_pane_t1

0xdabc,	// (0x0002c5df) vid6_indi_pane_t2_ParamLimits

0xdabc,	// (0x0002c5df) vid6_indi_pane_t2

0xdae4,	// (0x0002c607) vid6_indi_pane_t3_ParamLimits

0xdae4,	// (0x0002c607) vid6_indi_pane_t3

0xdb0c,	// (0x0002c62f) vid6_indi_pane_t4_ParamLimits

0xdb0c,	// (0x0002c62f) vid6_indi_pane_t4

0x0003,

0x0758,	// (0x0001f27b) vid6_indi_pane_t_ParamLimits

0x0758,	// (0x0001f27b) vid6_indi_pane_t

0xdb30,	// (0x0002c653) wait_bar_pane_cp08

0x7c20,	// (0x00026743) main_cset_text2_pane_t1_ParamLimits

0x7c20,	// (0x00026743) main_cset_text2_pane_t1

0x7b2d,	// (0x00026650) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b2d,	// (0x00026650) listscroll_gen_pane_cp06_t1

0x9c70,	// (0x00028793) main_cam6_set_pane

0x19d0,	// (0x000204f3) bg_tb_trans_pane_cp06_ParamLimits

0x19e6,	// (0x00020509) cam4_indicators_pane_g1_ParamLimits

0x19f7,	// (0x0002051a) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002e41a) cam4_indicators_pane_g_ParamLimits

0x1a0f,	// (0x00020532) cam4_indicators_pane_t1_ParamLimits

0x1abc,	// (0x000205df) bg_tb_trans_pane_cp07_ParamLimits

0x1ad4,	// (0x000205f7) vid4_indicators_pane_g1_ParamLimits

0x1aea,	// (0x0002060d) vid4_indicators_pane_g2_ParamLimits

0x1afe,	// (0x00020621) vid4_indicators_pane_g3_ParamLimits

0x1b11,	// (0x00020634) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002e42c) vid4_indicators_pane_g_ParamLimits

0x1b2f,	// (0x00020652) vid4_indicators_pane_t1_ParamLimits

0x1fec,	// (0x00020b0f) vid4_progress_pane_g1_ParamLimits

0x1ffe,	// (0x00020b21) vid4_progress_pane_g2_ParamLimits

0x10cd,	// (0x0001fbf0) vid4_progress_pane_g3_ParamLimits

0x2010,	// (0x00020b33) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002e5dd) vid4_progress_pane_g_ParamLimits

0x202e,	// (0x00020b51) vid4_progress_pane_t1_ParamLimits

0x2043,	// (0x00020b66) vid4_progress_pane_t2_ParamLimits

0x2059,	// (0x00020b7c) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002e5e8) vid4_progress_pane_t_ParamLimits

0x206e,	// (0x00020b91) wait_bar_pane_cp07_ParamLimits

0x7c47,	// (0x0002676a) main_cam6_set_pane_g2_ParamLimits

0x7c47,	// (0x0002676a) main_cam6_set_pane_g2

0x7c53,	// (0x00026776) main_cset6_listscroll_pane_ParamLimits

0x7c53,	// (0x00026776) main_cset6_listscroll_pane

0x7c80,	// (0x000267a3) main_cset6_slider_pane_ParamLimits

0x7c80,	// (0x000267a3) main_cset6_slider_pane

0x7c8c,	// (0x000267af) main_cset6_text2_pane_ParamLimits

0x7c8c,	// (0x000267af) main_cset6_text2_pane

0xdb3f,	// (0x0002c662) main_cset6_text_pane

0xdb47,	// (0x0002c66a) main_cset_list_pane_copy1_ParamLimits

0xdb47,	// (0x0002c66a) main_cset_list_pane_copy1

0xdb57,	// (0x0002c67a) scroll_pane_cp028_copy1

0x7c9f,	// (0x000267c2) cset_list_set_pane_copy1

0x7caf,	// (0x000267d2) aid_position_infowindow_above_copy1

0x7cb7,	// (0x000267da) aid_position_infowindow_below_copy1

0x7cbf,	// (0x000267e2) cset_list_set_pane_g1_copy1

0x7cc7,	// (0x000267ea) cset_list_set_pane_g3_copy1_ParamLimits

0x7cc7,	// (0x000267ea) cset_list_set_pane_g3_copy1

0x7cd6,	// (0x000267f9) cset_list_set_pane_t1_copy1_ParamLimits

0x7cd6,	// (0x000267f9) cset_list_set_pane_t1_copy1

0xa5d8,	// (0x000290fb) list_highlight_pane_cp021_copy1_ParamLimits

0xa5d8,	// (0x000290fb) list_highlight_pane_cp021_copy1

0xdb60,	// (0x0002c683) cset6_slider_pane_ParamLimits

0xdb60,	// (0x0002c683) cset6_slider_pane

0xdb8c,	// (0x0002c6af) main_cset6_slider_pane_g1_ParamLimits

0xdb8c,	// (0x0002c6af) main_cset6_slider_pane_g1

0x7ceb,	// (0x0002680e) main_cset6_slider_pane_g2_ParamLimits

0x7ceb,	// (0x0002680e) main_cset6_slider_pane_g2

0xdbb4,	// (0x0002c6d7) main_cset6_slider_pane_g3_ParamLimits

0xdbb4,	// (0x0002c6d7) main_cset6_slider_pane_g3

0x7d13,	// (0x00026836) main_cset6_slider_pane_g4_ParamLimits

0x7d13,	// (0x00026836) main_cset6_slider_pane_g4

0x7d1f,	// (0x00026842) main_cset6_slider_pane_g5_ParamLimits

0x7d1f,	// (0x00026842) main_cset6_slider_pane_g5

0xd315,	// (0x0002be38) main_cset6_slider_pane_g7_ParamLimits

0xd315,	// (0x0002be38) main_cset6_slider_pane_g7

0xd321,	// (0x0002be44) main_cset6_slider_pane_g8_ParamLimits

0xd321,	// (0x0002be44) main_cset6_slider_pane_g8

0x7d2b,	// (0x0002684e) main_cset6_slider_pane_g9_ParamLimits

0x7d2b,	// (0x0002684e) main_cset6_slider_pane_g9

0x7d37,	// (0x0002685a) main_cset6_slider_pane_g10_ParamLimits

0x7d37,	// (0x0002685a) main_cset6_slider_pane_g10

0x7d43,	// (0x00026866) main_cset6_slider_pane_g11_ParamLimits

0x7d43,	// (0x00026866) main_cset6_slider_pane_g11

0x7d4f,	// (0x00026872) main_cset6_slider_pane_g12_ParamLimits

0x7d4f,	// (0x00026872) main_cset6_slider_pane_g12

0x7d5b,	// (0x0002687e) main_cset6_slider_pane_g13_ParamLimits

0x7d5b,	// (0x0002687e) main_cset6_slider_pane_g13

0x7d67,	// (0x0002688a) main_cset6_slider_pane_g14_ParamLimits

0x7d67,	// (0x0002688a) main_cset6_slider_pane_g14

0x7d73,	// (0x00026896) main_cset6_slider_pane_g15_ParamLimits

0x7d73,	// (0x00026896) main_cset6_slider_pane_g15

0x7d8b,	// (0x000268ae) main_cset6_slider_pane_g16_ParamLimits

0x7d8b,	// (0x000268ae) main_cset6_slider_pane_g16

0x7d97,	// (0x000268ba) main_cset6_slider_pane_g17_ParamLimits

0x7d97,	// (0x000268ba) main_cset6_slider_pane_g17

0x0011,

0xfb69,	// (0x0002e68c) main_cset6_slider_pane_g_ParamLimits

0xfb69,	// (0x0002e68c) main_cset6_slider_pane_g

0xdbc0,	// (0x0002c6e3) main_cset6_slider_pane_t1_ParamLimits

0xdbc0,	// (0x0002c6e3) main_cset6_slider_pane_t1

0x7dbb,	// (0x000268de) main_cset6_slider_pane_t2_ParamLimits

0x7dbb,	// (0x000268de) main_cset6_slider_pane_t2

0x7de6,	// (0x00026909) main_cset6_slider_pane_t3_ParamLimits

0x7de6,	// (0x00026909) main_cset6_slider_pane_t3

0x7e11,	// (0x00026934) main_cset6_slider_pane_t4_ParamLimits

0x7e11,	// (0x00026934) main_cset6_slider_pane_t4

0x7e3c,	// (0x0002695f) main_cset6_slider_pane_t5_ParamLimits

0x7e3c,	// (0x0002695f) main_cset6_slider_pane_t5

0xdc01,	// (0x0002c724) main_cset6_slider_pane_t7_ParamLimits

0xdc01,	// (0x0002c724) main_cset6_slider_pane_t7

0x7e67,	// (0x0002698a) main_cset6_slider_pane_t8_ParamLimits

0x7e67,	// (0x0002698a) main_cset6_slider_pane_t8

0x7e8b,	// (0x000269ae) main_cset6_slider_pane_t9_ParamLimits

0x7e8b,	// (0x000269ae) main_cset6_slider_pane_t9

0x7eaf,	// (0x000269d2) main_cset6_slider_pane_t10_ParamLimits

0x7eaf,	// (0x000269d2) main_cset6_slider_pane_t10

0x7ed3,	// (0x000269f6) main_cset6_slider_pane_t11_ParamLimits

0x7ed3,	// (0x000269f6) main_cset6_slider_pane_t11

0xdc37,	// (0x0002c75a) main_cset6_slider_pane_t14_ParamLimits

0xdc37,	// (0x0002c75a) main_cset6_slider_pane_t14

0xdc70,	// (0x0002c793) main_cset6_slider_pane_t15_ParamLimits

0xdc70,	// (0x0002c793) main_cset6_slider_pane_t15

0x000b,

0xfb8e,	// (0x0002e6b1) main_cset6_slider_pane_t_ParamLimits

0xfb8e,	// (0x0002e6b1) main_cset6_slider_pane_t

0xd3ee,	// (0x0002bf11) cset_slider_pane_g1_copy1

0xd3f7,	// (0x0002bf1a) cset_slider_pane_g2_copy1

0xd400,	// (0x0002bf23) cset_slider_pane_g3_copy1

0x9c70,	// (0x00028793) bg_popup_sub_pane_cp011_copy1

0xdca9,	// (0x0002c7cc) main_cset_text_pane_g1_copy1

0xd4d4,	// (0x0002bff7) main_cset_text_pane_t1_copy1

0xd4e2,	// (0x0002c005) main_cset_text_pane_t2_copy1

0xd4f0,	// (0x0002c013) main_cset_text_pane_t3_copy1

0xd4fe,	// (0x0002c021) main_cset_text_pane_t4_copy1

0xd50c,	// (0x0002c02f) main_cset_text_pane_t5_copy1

0xdcb1,	// (0x0002c7d4) main_cset_text_pane_t6_copy1

0xdcbf,	// (0x0002c7e2) main_cset_text_pane_t7_copy1

0x7fc6,	// (0x00026ae9) main_cset_text2_pane_t1_copy1

0xa5d8,	// (0x000290fb) main_ncimui_pane

0x54c9,	// (0x00023fec) popup_query_ncimui_window_ParamLimits

0x54c9,	// (0x00023fec) popup_query_ncimui_window

0xca66,	// (0x0002b589) field_cale_ev2_pane_g4_ParamLimits

0xca66,	// (0x0002b589) field_cale_ev2_pane_g4

0x699e,	// (0x000254c1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x699e,	// (0x000254c1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002e3b8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002e3b8) cell_video_dialer_keypad_pane_g

0x69b6,	// (0x000254d9) cell_video_dialer_keypad_pane_t1

0x9c70,	// (0x00028793) bg_popup_window_pane_cp012

0xacba,	// (0x000297dd) heading_pane_cp06

0xdceb,	// (0x0002c80e) ncim_query_content_pane

0x9c70,	// (0x00028793) bg_popup_heading_pane_cp01

0xdcf3,	// (0x0002c816) ncim_heading_pane_t1

0xdd01,	// (0x0002c824) ncim_indicator_popup_pane

0xdd13,	// (0x0002c836) ncim_query_button_pane

0xdd29,	// (0x0002c84c) ncim_query_content_pane_t1

0xdd3b,	// (0x0002c85e) ncim_query_content_pane_t2

0x0005,

0xfbd2,	// (0x0002e6f5) ncim_query_content_pane_t

0xdd75,	// (0x0002c898) ncim_query_list_pane

0xdd87,	// (0x0002c8aa) ncim_query_popup_pane

0xdd01,	// (0x0002c824) ncim_indicator_popup_pane_ParamLimits

0x8122,	// (0x00026c45) ncim_query_content_pane_g1_ParamLimits

0x8122,	// (0x00026c45) ncim_query_content_pane_g1

0xdd29,	// (0x0002c84c) ncim_query_content_pane_t1_ParamLimits

0xdd3b,	// (0x0002c85e) ncim_query_content_pane_t2_ParamLimits

0x812e,	// (0x00026c51) ncim_query_content_pane_t3_ParamLimits

0x812e,	// (0x00026c51) ncim_query_content_pane_t3

0x814b,	// (0x00026c6e) ncim_query_content_pane_t4_ParamLimits

0x814b,	// (0x00026c6e) ncim_query_content_pane_t4

0x8168,	// (0x00026c8b) ncim_query_content_pane_t5_ParamLimits

0x8168,	// (0x00026c8b) ncim_query_content_pane_t5

0xdd4d,	// (0x0002c870) ncim_query_content_pane_t6_ParamLimits

0xdd4d,	// (0x0002c870) ncim_query_content_pane_t6

0xfbd2,	// (0x0002e6f5) ncim_query_content_pane_t_ParamLimits

0xdd75,	// (0x0002c898) ncim_query_list_pane_ParamLimits

0xdd87,	// (0x0002c8aa) ncim_query_popup_pane_ParamLimits

0xdd9b,	// (0x0002c8be) wait_bar_pane_cp04

0x9c70,	// (0x00028793) input_focus_pane_cp011

0xdda3,	// (0x0002c8c6) ncim_query_popup_pane_t1

0xddb1,	// (0x0002c8d4) ncim_list_query_list_pane_ParamLimits

0xddb1,	// (0x0002c8d4) ncim_list_query_list_pane

0x9c70,	// (0x00028793) bg_button_pane_cp027

0xddc4,	// (0x0002c8e7) ncim_query_button_pane_g1

0x9c70,	// (0x00028793) list_highlight_pane_cp012

0xddce,	// (0x0002c8f1) ncim_list_query_list_pane_g1

0xddd6,	// (0x0002c8f9) ncim_list_query_list_pane_t1

0x1a03,	// (0x00020526) cam4_indicators_pane_g3_ParamLimits

0x1a03,	// (0x00020526) cam4_indicators_pane_g3

0x1b1d,	// (0x00020640) vid4_indicators_pane_g5_ParamLimits

0x1b1d,	// (0x00020640) vid4_indicators_pane_g5

0x201f,	// (0x00020b42) vid4_progress_pane_g5_ParamLimits

0x201f,	// (0x00020b42) vid4_progress_pane_g5

0x7ff8,	// (0x00026b1b) main_ncimui_pane_g1

0x8064,	// (0x00026b87) ncimui_group_query_pane_ParamLimits

0x8064,	// (0x00026b87) ncimui_group_query_pane

0x80be,	// (0x00026be1) ncimui_list_pane_ParamLimits

0x80be,	// (0x00026be1) ncimui_list_pane

0x80e5,	// (0x00026c08) ncimui_text_pane_ParamLimits

0x80e5,	// (0x00026c08) ncimui_text_pane

0x8185,	// (0x00026ca8) ncimui_text_pane_t1_ParamLimits

0x8185,	// (0x00026ca8) ncimui_text_pane_t1

0xdde4,	// (0x0002c907) ncimui_list_single_graphic_pane_ParamLimits

0xdde4,	// (0x0002c907) ncimui_list_single_graphic_pane

0x81a4,	// (0x00026cc7) ncimui_query_pane_ParamLimits

0x81a4,	// (0x00026cc7) ncimui_query_pane

0x9c70,	// (0x00028793) list_highlight_pane_cp013

0xddf4,	// (0x0002c917) ncim_list_query_list_pane_t1_copy1

0xddce,	// (0x0002c8f1) ncim_list_single_graphic_pane_g1

0xde02,	// (0x0002c925) ncim_query_button_pane_cp01

0xde0e,	// (0x0002c931) ncim_query_entry_pane_ParamLimits

0xde0e,	// (0x0002c931) ncim_query_entry_pane

0xde21,	// (0x0002c944) ncimui_query_pane_g1

0xde2d,	// (0x0002c950) ncimui_query_pane_t1_ParamLimits

0xde2d,	// (0x0002c950) ncimui_query_pane_t1

0xa5d8,	// (0x000290fb) input_focus_pane_cp012

0xde46,	// (0x0002c969) ncim_query_entry_pane_t1

0xa404,	// (0x00028f27) main_im_pane_ParamLimits

0xa5d8,	// (0x000290fb) main_mobtv_pane_ParamLimits

0xa5d8,	// (0x000290fb) main_mobtv_pane

0x7da3,	// (0x000268c6) main_cset6_slider_pane_g18_ParamLimits

0x7da3,	// (0x000268c6) main_cset6_slider_pane_g18

0x7daf,	// (0x000268d2) main_cset6_slider_pane_g19_ParamLimits

0x7daf,	// (0x000268d2) main_cset6_slider_pane_g19

0xd1a5,	// (0x0002bcc8) bg_main_mobtv_pane_ParamLimits

0xd1a5,	// (0x0002bcc8) bg_main_mobtv_pane

0x81b7,	// (0x00026cda) main_mobtv_info_pane

0x81c2,	// (0x00026ce5) main_mobtv_loading_pane_ParamLimits

0x81c2,	// (0x00026ce5) main_mobtv_loading_pane

0xde58,	// (0x0002c97b) main_mobtv_pg_channel_list_pane

0xde62,	// (0x0002c985) main_mobtv_pg_hdr_pane

0x81cf,	// (0x00026cf2) main_mobtv_programe_curr_pane_ParamLimits

0x81cf,	// (0x00026cf2) main_mobtv_programe_curr_pane

0x81dc,	// (0x00026cff) main_mobtv_programe_next_pane_ParamLimits

0x81dc,	// (0x00026cff) main_mobtv_programe_next_pane

0xde6b,	// (0x0002c98e) popup_mobtv_noti_window

0xc7d1,	// (0x0002b2f4) main_tv_pg_hdr_pane_g1

0xde75,	// (0x0002c998) main_tv_pg_hdr_pane_g2

0xde7d,	// (0x0002c9a0) main_tv_pg_hdr_pane_g3

0xde85,	// (0x0002c9a8) main_tv_pg_hdr_pane_g4

0xde8d,	// (0x0002c9b0) main_tv_pg_hdr_pane_g5

0xde97,	// (0x0002c9ba) main_tv_pg_hdr_pane_g6

0xdea1,	// (0x0002c9c4) main_tv_pg_hdr_pane_g7

0xdeab,	// (0x0002c9ce) main_tv_pg_hdr_pane_g8

0xdeb5,	// (0x0002c9d8) main_tv_pg_hdr_pane_g9

0xdebf,	// (0x0002c9e2) main_tv_pg_hdr_pane_g10

0xdec9,	// (0x0002c9ec) main_tv_pg_hdr_pane_g11

0x000a,

0xfbdf,	// (0x0002e702) main_tv_pg_hdr_pane_g

0xded3,	// (0x0002c9f6) main_tv_pg_hdr_pane_t1

0xdee1,	// (0x0002ca04) main_tv_pg_hdr_pane_t2

0xdeef,	// (0x0002ca12) main_tv_pg_hdr_pane_t3

0xdeff,	// (0x0002ca22) main_tv_pg_hdr_pane_t4

0xdf0f,	// (0x0002ca32) main_tv_pg_hdr_pane_t5

0x0004,

0x07ee,	// (0x0001f311) main_tv_pg_hdr_pane_t

0xdf1f,	// (0x0002ca42) single_mobtv_pg_channel_pane_ParamLimits

0xdf1f,	// (0x0002ca42) single_mobtv_pg_channel_pane

0xdf31,	// (0x0002ca54) single_mobtv_pg_channel_table_pane

0xdf3a,	// (0x0002ca5d) single_mobtv_pg_channel_thumb_pane

0xdf43,	// (0x0002ca66) single_tv_pg_channel_pane_g1

0xdf4c,	// (0x0002ca6f) single_tv_pg_channel_pane_g2

0x0001,

0x07f9,	// (0x0001f31c) single_tv_pg_channel_pane_g

0xca01,	// (0x0002b524) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca01,	// (0x0002b524) bg_single_mobtv_pg_channel_thumb_pane

0xdf55,	// (0x0002ca78) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf55,	// (0x0002ca78) single_mobtv_pg_channel_thumb_pane_g1

0xdf63,	// (0x0002ca86) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf63,	// (0x0002ca86) single_mobtv_pg_channel_thumb_pane_g2

0xdf6f,	// (0x0002ca92) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf6f,	// (0x0002ca92) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x07fe,	// (0x0001f321) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x07fe,	// (0x0001f321) single_mobtv_pg_channel_thumb_pane_g

0xdf7b,	// (0x0002ca9e) single_mobtv_pg_channel_thumb_pane_t1

0xdf89,	// (0x0002caac) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0805,	// (0x0001f328) single_mobtv_pg_channel_thumb_pane_t

0xc7d1,	// (0x0002b2f4) bg_single_mobtv_pg_channel_table_pane_g1

0xc7d1,	// (0x0002b2f4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0002e204) bg_single_mobtv_pg_channel_table_pane_g

0xdf97,	// (0x0002caba) single_mobtv_pg_channel_table_pane_t1

0xdfa5,	// (0x0002cac8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x080a,	// (0x0001f32d) single_mobtv_pg_channel_table_pane_t

0x81f1,	// (0x00026d14) main_mobtv_info_pane_g1_ParamLimits

0x81f1,	// (0x00026d14) main_mobtv_info_pane_g1

0x820d,	// (0x00026d30) main_mobtv_info_pane_t1_ParamLimits

0x820d,	// (0x00026d30) main_mobtv_info_pane_t1

0x8285,	// (0x00026da8) main_mobtv_info_pane_t2_ParamLimits

0x8285,	// (0x00026da8) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x0002e71e) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x0002e71e) main_mobtv_info_pane_t

0x8316,	// (0x00026e39) wait_bar_pane_cp05

0x8328,	// (0x00026e4b) main_mobtv_loading_pane_g1_ParamLimits

0x8328,	// (0x00026e4b) main_mobtv_loading_pane_g1

0x8334,	// (0x00026e57) main_mobtv_loading_pane_g2_ParamLimits

0x8334,	// (0x00026e57) main_mobtv_loading_pane_g2

0x8340,	// (0x00026e63) main_mobtv_loading_pane_g3_ParamLimits

0x8340,	// (0x00026e63) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0002e725) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0002e725) main_mobtv_loading_pane_g

0xdfb3,	// (0x0002cad6) main_mobtv_loading_pane_t1_ParamLimits

0xdfb3,	// (0x0002cad6) main_mobtv_loading_pane_t1

0xdfcb,	// (0x0002caee) main_mobtv_loading_pane_t2_ParamLimits

0xdfcb,	// (0x0002caee) main_mobtv_loading_pane_t2

0x0001,

0x0822,	// (0x0001f345) main_mobtv_loading_pane_t_ParamLimits

0x0822,	// (0x0001f345) main_mobtv_loading_pane_t

0x834e,	// (0x00026e71) wait_bar_pane_cp06_ParamLimits

0x834e,	// (0x00026e71) wait_bar_pane_cp06

0xdfef,	// (0x0002cb12) main_mobtv_programe_curr_pane_t1

0xdffd,	// (0x0002cb20) main_mobtv_programe_curr_pane_t2

0x0001,

0x0827,	// (0x0001f34a) main_mobtv_programe_curr_pane_t

0xe00b,	// (0x0002cb2e) main_mobtv_programe_next_pane_t1

0xe019,	// (0x0002cb3c) main_mobtv_programe_next_pane_t2

0xe027,	// (0x0002cb4a) main_mobtv_programe_next_pane_t3

0x0002,

0x082c,	// (0x0001f34f) main_mobtv_programe_next_pane_t

0x9c70,	// (0x00028793) bg_popup_mobtv_noti_window_pane

0xe035,	// (0x0002cb58) popup_mobtv_noti_window_g1

0xe03d,	// (0x0002cb60) popup_mobtv_noti_window_t1

0xe04b,	// (0x0002cb6e) popup_mobtv_noti_window_t2

0x0001,

0x0833,	// (0x0001f356) popup_mobtv_noti_window_t

0xc7d1,	// (0x0002b2f4) bg_popup_mobtv_noti_window_pane_g1

0x9c70,	// (0x00028793) sc_clock_pane

0x9c70,	// (0x00028793) main_fs_bigclock_pane

0x79a4,	// (0x000264c7) blid2_tripm_pane_t4_ParamLimits

0x79a4,	// (0x000264c7) blid2_tripm_pane_t4

0x835a,	// (0x00026e7d) sc_clock_pane_g1_ParamLimits

0x835a,	// (0x00026e7d) sc_clock_pane_g1

0x8368,	// (0x00026e8b) sc_clock_pane_t1_ParamLimits

0x8368,	// (0x00026e8b) sc_clock_pane_t1

0x837d,	// (0x00026ea0) sc_clock_pane_t2_ParamLimits

0x837d,	// (0x00026ea0) sc_clock_pane_t2

0x838f,	// (0x00026eb2) sc_clock_pane_t3_ParamLimits

0x838f,	// (0x00026eb2) sc_clock_pane_t3

0x0004,

0xfc09,	// (0x0002e72c) sc_clock_pane_t_ParamLimits

0xfc09,	// (0x0002e72c) sc_clock_pane_t

0x9271,	// (0x00027d94) main_fs_bigclock_indicator_pane_ParamLimits

0x9271,	// (0x00027d94) main_fs_bigclock_indicator_pane

0x841c,	// (0x00026f3f) main_fs_bigclock_pane_g1_ParamLimits

0x841c,	// (0x00026f3f) main_fs_bigclock_pane_g1

0x927d,	// (0x00027da0) main_fs_bigclock_pane_t1_ParamLimits

0x927d,	// (0x00027da0) main_fs_bigclock_pane_t1

0x928f,	// (0x00027db2) main_fs_bigclock_pane_t2_ParamLimits

0x928f,	// (0x00027db2) main_fs_bigclock_pane_t2

0x92a3,	// (0x00027dc6) main_fs_bigclock_pane_t3_ParamLimits

0x92a3,	// (0x00027dc6) main_fs_bigclock_pane_t3

0x0002,

0xfd79,	// (0x0002e89c) main_fs_bigclock_pane_t_ParamLimits

0xfd79,	// (0x0002e89c) main_fs_bigclock_pane_t

0xec22,	// (0x0002d745) main_fs_bigclock_indicator_pane_g1

0xdd1b,	// (0x0002c83e) ncim_query_content_pane_g2_ParamLimits

0xdd1b,	// (0x0002c83e) ncim_query_content_pane_g2

0x0001,

0xfbcd,	// (0x0002e6f0) ncim_query_content_pane_g_ParamLimits

0xfbcd,	// (0x0002e6f0) ncim_query_content_pane_g

0x83a1,	// (0x00026ec4) sc_clock_pane_t4_ParamLimits

0x83a1,	// (0x00026ec4) sc_clock_pane_t4

0xa5d8,	// (0x000290fb) main_radioblah_pane

0xd110,	// (0x0002bc33) cell_call4_button_pane_t1_copy1_ParamLimits

0xd110,	// (0x0002bc33) cell_call4_button_pane_t1_copy1

0x8014,	// (0x00026b37) main_ncimui_pane_t1_ParamLimits

0x8014,	// (0x00026b37) main_ncimui_pane_t1

0x802e,	// (0x00026b51) main_ncimui_pane_t2_ParamLimits

0x802e,	// (0x00026b51) main_ncimui_pane_t2

0x0002,

0xfbc6,	// (0x0002e6e9) main_ncimui_pane_t_ParamLimits

0xfbc6,	// (0x0002e6e9) main_ncimui_pane_t

0xe197,	// (0x0002ccba) main_radioblah_anim_pane_ParamLimits

0xe197,	// (0x0002ccba) main_radioblah_anim_pane

0xe1a8,	// (0x0002cccb) main_radioblah_info_pane_ParamLimits

0xe1a8,	// (0x0002cccb) main_radioblah_info_pane

0xe1bc,	// (0x0002ccdf) main_radioblah_pane_t1_ParamLimits

0xe1bc,	// (0x0002ccdf) main_radioblah_pane_t1

0xe1d8,	// (0x0002ccfb) main_radioblah_pane_t2_ParamLimits

0xe1d8,	// (0x0002ccfb) main_radioblah_pane_t2

0x0003,

0x0859,	// (0x0001f37c) main_radioblah_pane_t_ParamLimits

0x0859,	// (0x0001f37c) main_radioblah_pane_t

0x846e,	// (0x00026f91) main_radioblah_rocker_ctrl_pane_ParamLimits

0x846e,	// (0x00026f91) main_radioblah_rocker_ctrl_pane

0xe220,	// (0x0002cd43) main_radioblah_info_pane_t1_ParamLimits

0xe220,	// (0x0002cd43) main_radioblah_info_pane_t1

0x84b7,	// (0x00026fda) main_radioblah_info_pane_t2_ParamLimits

0x84b7,	// (0x00026fda) main_radioblah_info_pane_t2

0x0003,

0xfc14,	// (0x0002e737) main_radioblah_info_pane_t_ParamLimits

0xfc14,	// (0x0002e737) main_radioblah_info_pane_t

0xc7d1,	// (0x0002b2f4) main_radioblah_rocker_ctrl_pane_g1

0x8567,	// (0x0002708a) main_radioblah_rocker_ctrl_pane_g2

0x856f,	// (0x00027092) main_radioblah_rocker_ctrl_pane_g3

0x8577,	// (0x0002709a) main_radioblah_rocker_ctrl_pane_g4

0x857f,	// (0x000270a2) main_radioblah_rocker_ctrl_pane_g5

0x8587,	// (0x000270aa) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1d,	// (0x0002e740) main_radioblah_rocker_ctrl_pane_g

0x7fc6,	// (0x00026ae9) main_cset_text2_pane_t1_copy1_ParamLimits

0x1948,	// (0x0002046b) cam4_image_uncrop_qvga_pane

0x1a75,	// (0x00020598) vid4_image_uncrop_qcif_pane

0x20c3,	// (0x00020be6) cam6_image_uncrop_qvga_pane_ParamLimits

0x20c3,	// (0x00020be6) cam6_image_uncrop_qvga_pane

0xda1e,	// (0x0002c541) vid6_image_uncrop_qcif_pane_ParamLimits

0xda1e,	// (0x0002c541) vid6_image_uncrop_qcif_pane

0x9c70,	// (0x00028793) bg_popup_preview_window_pane_cp03

0xdccd,	// (0x0002c7f0) list_cset_text2_pane

0xdcd5,	// (0x0002c7f8) main_cset6_text2_pane_g1

0xdcdd,	// (0x0002c800) main_cset6_text2_pane_t1

0x858f,	// (0x000270b2) list_cset_text2_pane_t1_ParamLimits

0x858f,	// (0x000270b2) list_cset_text2_pane_t1

0xa5d8,	// (0x000290fb) main_radioblah_pane_ParamLimits

0x8302,	// (0x00026e25) main_mobtv_info_pane_t3_ParamLimits

0x8302,	// (0x00026e25) main_mobtv_info_pane_t3

0x845c,	// (0x00026f7f) main_radioblah_pane_g1

0x8487,	// (0x00026faa) main_radioblah_info_pane_g1

0x850c,	// (0x0002702f) main_radioblah_info_pane_t3_ParamLimits

0x850c,	// (0x0002702f) main_radioblah_info_pane_t3

0x4196,	// (0x00022cb9) highlight_cell_cale_month_pane_ParamLimits

0x4196,	// (0x00022cb9) highlight_cell_cale_month_pane

0x9c70,	// (0x00028793) main_phob_fisheye_pane

0xcae9,	// (0x0002b60c) scroll_pane_cp0031_ParamLimits

0xcae9,	// (0x0002b60c) scroll_pane_cp0031

0xdb30,	// (0x0002c653) wait_bar_pane_cp08_ParamLimits

0x7c9f,	// (0x000267c2) cset_list_set_pane_copy1_ParamLimits

0xe25a,	// (0x0002cd7d) highlight_cell_cale_month_pane_g1

0x85a6,	// (0x000270c9) highlight_cell_cale_month_pane_t1

0xd79c,	// (0x0002c2bf) list_gen_pane_cp01

0xd300,	// (0x0002be23) scroll_pane_01

0x85b4,	// (0x000270d7) list_single_double_fisheye_pane

0x85bd,	// (0x000270e0) list_double_fisheye_pane_g1_ParamLimits

0x85bd,	// (0x000270e0) list_double_fisheye_pane_g1

0x85c9,	// (0x000270ec) list_double_fisheye_pane_g2_ParamLimits

0x85c9,	// (0x000270ec) list_double_fisheye_pane_g2

0x85dd,	// (0x00027100) list_double_fisheye_pane_g3_ParamLimits

0x85dd,	// (0x00027100) list_double_fisheye_pane_g3

0x0004,

0xfc2a,	// (0x0002e74d) list_double_fisheye_pane_g_ParamLimits

0xfc2a,	// (0x0002e74d) list_double_fisheye_pane_g

0x8606,	// (0x00027129) list_double_fisheye_pane_t1_ParamLimits

0x8606,	// (0x00027129) list_double_fisheye_pane_t1

0x8621,	// (0x00027144) list_double_fisheye_pane_t2_ParamLimits

0x8621,	// (0x00027144) list_double_fisheye_pane_t2

0x0001,

0xfc35,	// (0x0002e758) list_double_fisheye_pane_t_ParamLimits

0xfc35,	// (0x0002e758) list_double_fisheye_pane_t

0x9c70,	// (0x00028793) main_call5_pane

0x83c7,	// (0x00026eea) sc_swipe_pane_ParamLimits

0x83c7,	// (0x00026eea) sc_swipe_pane

0x864f,	// (0x00027172) call5_image_pane_ParamLimits

0x864f,	// (0x00027172) call5_image_pane

0x8661,	// (0x00027184) call5_swipe_1_pane_ParamLimits

0x8661,	// (0x00027184) call5_swipe_1_pane

0x866d,	// (0x00027190) call5_swipe_2_pane_ParamLimits

0x866d,	// (0x00027190) call5_swipe_2_pane

0x8689,	// (0x000271ac) popup_call5_audio_first_window_ParamLimits

0x8689,	// (0x000271ac) popup_call5_audio_first_window

0xca01,	// (0x0002b524) call5_swipe_1_pane_g1_ParamLimits

0xca01,	// (0x0002b524) call5_swipe_1_pane_g1

0xe262,	// (0x0002cd85) call5_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0002cd85) call5_swipe_1_pane_g2

0x0001,

0xfc3a,	// (0x0002e75d) call5_swipe_1_pane_g_ParamLimits

0xfc3a,	// (0x0002e75d) call5_swipe_1_pane_g

0xe26e,	// (0x0002cd91) call5_swipe_1_pane_t1_ParamLimits

0xe26e,	// (0x0002cd91) call5_swipe_1_pane_t1

0xca01,	// (0x0002b524) call5_swipe_2_pane_g1_ParamLimits

0xca01,	// (0x0002b524) call5_swipe_2_pane_g1

0xe283,	// (0x0002cda6) call5_swipe_2_pane_g2_ParamLimits

0xe283,	// (0x0002cda6) call5_swipe_2_pane_g2

0x0001,

0xfc3f,	// (0x0002e762) call5_swipe_2_pane_g_ParamLimits

0xfc3f,	// (0x0002e762) call5_swipe_2_pane_g

0xe28f,	// (0x0002cdb2) call5_swipe_2_pane_t1_ParamLimits

0xe28f,	// (0x0002cdb2) call5_swipe_2_pane_t1

0xe2a4,	// (0x0002cdc7) sc_swipe_pane_g1_ParamLimits

0xe2a4,	// (0x0002cdc7) sc_swipe_pane_g1

0xe2b1,	// (0x0002cdd4) sc_swipe_pane_g2_ParamLimits

0xe2b1,	// (0x0002cdd4) sc_swipe_pane_g2

0x0001,

0x0892,	// (0x0001f3b5) sc_swipe_pane_g_ParamLimits

0x0892,	// (0x0001f3b5) sc_swipe_pane_g

0xe2bd,	// (0x0002cde0) sc_swipe_pane_t1_ParamLimits

0xe2bd,	// (0x0002cde0) sc_swipe_pane_t1

0x9c70,	// (0x00028793) main_cmail_launcher_pane

0x8699,	// (0x000271bc) aid_size_cell_cmail_l_ParamLimits

0x8699,	// (0x000271bc) aid_size_cell_cmail_l

0x86a9,	// (0x000271cc) grid_cmail_l_pane_ParamLimits

0x86a9,	// (0x000271cc) grid_cmail_l_pane

0x86b9,	// (0x000271dc) cell_cmail_l_pane_ParamLimits

0x86b9,	// (0x000271dc) cell_cmail_l_pane

0x86cf,	// (0x000271f2) cell_cmail_l_pane_g1_ParamLimits

0x86cf,	// (0x000271f2) cell_cmail_l_pane_g1

0x86db,	// (0x000271fe) cell_cmail_l_pane_t1_ParamLimits

0x86db,	// (0x000271fe) cell_cmail_l_pane_t1

0xe2d2,	// (0x0002cdf5) cell_cmail_l_pane_t2_ParamLimits

0xe2d2,	// (0x0002cdf5) cell_cmail_l_pane_t2

0x0001,

0xfc44,	// (0x0002e767) cell_cmail_l_pane_t_ParamLimits

0xfc44,	// (0x0002e767) cell_cmail_l_pane_t

0xa5d8,	// (0x000290fb) grid_highlight_pane_cp018_ParamLimits

0xa5d8,	// (0x000290fb) grid_highlight_pane_cp018

0x220c,	// (0x00020d2f) main2_pane_ParamLimits

0x220c,	// (0x00020d2f) main2_pane

0xa4af,	// (0x00028fd2) popup_sp_fs_action_menu_bg_pane_g1

0xa4b7,	// (0x00028fda) popup_sp_fs_action_menu_bg_pane_g2

0xa4bf,	// (0x00028fe2) popup_sp_fs_action_menu_bg_pane_g3

0xa4c7,	// (0x00028fea) popup_sp_fs_action_menu_bg_pane_g4

0xa4cf,	// (0x00028ff2) popup_sp_fs_action_menu_bg_pane_g5

0xa4d7,	// (0x00028ffa) popup_sp_fs_action_menu_bg_pane_g6

0xa4df,	// (0x00029002) popup_sp_fs_action_menu_bg_pane_g7

0xa4e7,	// (0x0002900a) popup_sp_fs_action_menu_bg_pane_g8

0xa4ef,	// (0x00029012) popup_sp_fs_action_menu_bg_pane_g9

0xa4f7,	// (0x0002901a) popup_sp_fs_action_menu_bg_pane_g10

0xa4f7,	// (0x0002901a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0002dcb0) popup_sp_fs_action_menu_bg_pane_g

0x2fd3,	// (0x00021af6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t3_g3_g1

0x2fdf,	// (0x00021b02) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x2_t3_g3_g2

0x2feb,	// (0x00021b0e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0002dd60) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0002dd60) list_medium_line_x2_t3_g3_g

0x2ff7,	// (0x00021b1a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2ff7,	// (0x00021b1a) list_medium_line_x2_t3_g3_t1

0x300c,	// (0x00021b2f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x300c,	// (0x00021b2f) list_medium_line_x2_t3_g3_t2

0x3020,	// (0x00021b43) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0002dd67) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0002dd67) list_medium_line_x2_t3_g3_t

0x2fd3,	// (0x00021af6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t3_g2_g1

0x2feb,	// (0x00021b0e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0002dd6e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0002dd6e) list_medium_line_x2_t3_g2_g

0x3035,	// (0x00021b58) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3035,	// (0x00021b58) list_medium_line_x2_t3_g2_t1

0x304b,	// (0x00021b6e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x304b,	// (0x00021b6e) list_medium_line_x2_t3_g2_t2

0x305d,	// (0x00021b80) list_medium_line_x2_t3_g2_t3_ParamLimits

0x305d,	// (0x00021b80) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0002dd73) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0002dd73) list_medium_line_x2_t3_g2_t

0x2fd3,	// (0x00021af6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t4_g4_g1

0x307b,	// (0x00021b9e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x307b,	// (0x00021b9e) list_medium_line_x2_t4_g4_g2

0x2fdf,	// (0x00021b02) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x2_t4_g4_g3

0x3087,	// (0x00021baa) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3087,	// (0x00021baa) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0002dd7a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0002dd7a) list_medium_line_x2_t4_g4_g

0x3093,	// (0x00021bb6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3093,	// (0x00021bb6) list_medium_line_x2_t4_g4_t1

0x30ad,	// (0x00021bd0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x30ad,	// (0x00021bd0) list_medium_line_x2_t4_g4_t2

0x30c3,	// (0x00021be6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x30c3,	// (0x00021be6) list_medium_line_x2_t4_g4_t3

0x30d8,	// (0x00021bfb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x30d8,	// (0x00021bfb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0002dd83) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0002dd83) list_medium_line_x2_t4_g4_t

0x2fd3,	// (0x00021af6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t2_g4_g1

0x307b,	// (0x00021b9e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x307b,	// (0x00021b9e) list_medium_line_x2_t2_g4_g2

0x2fdf,	// (0x00021b02) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x2_t2_g4_g3

0x2feb,	// (0x00021b0e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0002ddea) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0002ddea) list_medium_line_x2_t2_g4_g

0x41bc,	// (0x00022cdf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x41bc,	// (0x00022cdf) list_medium_line_x2_t2_g4_t1

0x3020,	// (0x00021b43) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0002ddf3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0002ddf3) list_medium_line_x2_t2_g4_t

0x2fd3,	// (0x00021af6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t2_g3_g1

0x2fdf,	// (0x00021b02) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x2_t2_g3_g2

0x2feb,	// (0x00021b0e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0002dd60) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0002dd60) list_medium_line_x2_t2_g3_g

0x41d1,	// (0x00022cf4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x41d1,	// (0x00022cf4) list_medium_line_x2_t2_g3_t1

0x3020,	// (0x00021b43) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0002ddf8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0002ddf8) list_medium_line_x2_t2_g3_t

0x4319,	// (0x00022e3c) main_sp_fs_list_pane_ParamLimits

0x4319,	// (0x00022e3c) main_sp_fs_list_pane

0x4325,	// (0x00022e48) sp_fs_scroll_pane_ParamLimits

0x4325,	// (0x00022e48) sp_fs_scroll_pane

0x4331,	// (0x00022e54) list_medium_line_x2_t3_t1

0x4341,	// (0x00022e64) list_medium_line_x2_t3_t2

0x434f,	// (0x00022e72) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0002de43) list_medium_line_x2_t3_t

0x435d,	// (0x00022e80) list_medium_line_x3_t4_t1

0x436d,	// (0x00022e90) list_medium_line_x3_t4_t2

0x437b,	// (0x00022e9e) list_medium_line_x3_t4_t3

0x434f,	// (0x00022e72) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0002de4a) list_medium_line_x3_t4_t

0x4389,	// (0x00022eac) list_medium_line_x4_t5_t1

0x4399,	// (0x00022ebc) list_medium_line_x4_t5_t2

0x437b,	// (0x00022e9e) list_medium_line_x4_t5_t3

0x43a7,	// (0x00022eca) list_medium_line_x4_t5_t4

0x434f,	// (0x00022e72) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0002de53) list_medium_line_x4_t5_t

0x2fd3,	// (0x00021af6) list_medium_line_t4_g4_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_t4_g4_g1

0x43b5,	// (0x00022ed8) list_medium_line_t4_g4_g2_ParamLimits

0x43b5,	// (0x00022ed8) list_medium_line_t4_g4_g2

0x43c1,	// (0x00022ee4) list_medium_line_t4_g4_g3_ParamLimits

0x43c1,	// (0x00022ee4) list_medium_line_t4_g4_g3

0x2feb,	// (0x00021b0e) list_medium_line_t4_g4_g4_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0002de5e) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0002de5e) list_medium_line_t4_g4_g

0x43cd,	// (0x00022ef0) list_medium_line_t4_g4_t1_ParamLimits

0x43cd,	// (0x00022ef0) list_medium_line_t4_g4_t1

0x43e2,	// (0x00022f05) list_medium_line_t4_g4_t2_ParamLimits

0x43e2,	// (0x00022f05) list_medium_line_t4_g4_t2

0x43f8,	// (0x00022f1b) list_medium_line_t4_g4_t3_ParamLimits

0x43f8,	// (0x00022f1b) list_medium_line_t4_g4_t3

0x3020,	// (0x00021b43) list_medium_line_t4_g4_t4_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0002de67) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0002de67) list_medium_line_t4_g4_t

0x44b2,	// (0x00022fd5) chi_dic_find_pane_g1

0x5492,	// (0x00023fb5) main_tport_pane

0xd46b,	// (0x0002bf8e) list_medium_line_plain_t1

0x7257,	// (0x00025d7a) list_medium_line_t2_g2_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_t2_g2_g1

0xd481,	// (0x0002bfa4) list_medium_line_t2_g2_g2_ParamLimits

0xd481,	// (0x0002bfa4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002e523) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002e523) list_medium_line_t2_g2_g

0x7263,	// (0x00025d86) list_medium_line_t2_g2_t1_ParamLimits

0x7263,	// (0x00025d86) list_medium_line_t2_g2_t1

0x727a,	// (0x00025d9d) list_medium_line_t2_g2_t2_ParamLimits

0x727a,	// (0x00025d9d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002e528) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002e528) list_medium_line_t2_g2_t

0xd7cf,	// (0x0002c2f2) aid_sp_fs_list_icon_a_sm

0xd7d7,	// (0x0002c2fa) aid_sp_fs_list_icon_d

0xd7df,	// (0x0002c302) aid_sp_fs_text_primary

0xd7e8,	// (0x0002c30b) aid_sp_fs_text_secondary

0x77ea,	// (0x0002630d) list_medium_line

0x77ea,	// (0x0002630d) list_medium_line_g2

0x77ea,	// (0x0002630d) list_medium_line_g3

0x77ea,	// (0x0002630d) list_medium_line_plain

0x77ea,	// (0x0002630d) list_medium_line_plain_t2

0x77ea,	// (0x0002630d) list_medium_line_plain_t3

0x77ea,	// (0x0002630d) list_medium_line_right_icon

0x77ea,	// (0x0002630d) list_medium_line_right_iconx2

0x77ea,	// (0x0002630d) list_medium_line_t2

0x77ea,	// (0x0002630d) list_medium_line_t2_g2

0x77ea,	// (0x0002630d) list_medium_line_t2_g3

0x77ea,	// (0x0002630d) list_medium_line_t2_right_icon

0x77ea,	// (0x0002630d) list_medium_line_t2_right_iconx2

0x77ea,	// (0x0002630d) list_medium_line_t3

0x77ea,	// (0x0002630d) list_medium_line_t3_g2

0x77ea,	// (0x0002630d) list_medium_line_t3_g3

0x77ea,	// (0x0002630d) list_medium_line_t3_right_iconx2

0x77f3,	// (0x00026316) list_medium_line_t4_g4

0x77fc,	// (0x0002631f) list_medium_line_x2

0x77fc,	// (0x0002631f) list_medium_line_x2_t2_g2

0x77fc,	// (0x0002631f) list_medium_line_x2_t2_g3

0x77fc,	// (0x0002631f) list_medium_line_x2_t2_g4

0x77fc,	// (0x0002631f) list_medium_line_x2_t3

0x77fc,	// (0x0002631f) list_medium_line_x2_t3_g2

0x77fc,	// (0x0002631f) list_medium_line_x2_t3_g3

0x77fc,	// (0x0002631f) list_medium_line_x2_t3_g4

0x77fc,	// (0x0002631f) list_medium_line_x2_t4_g2

0x77fc,	// (0x0002631f) list_medium_line_x2_t4_g4

0x7805,	// (0x00026328) list_medium_line_x3

0x7805,	// (0x00026328) list_medium_line_x3_t4

0x7805,	// (0x00026328) list_medium_line_x3_t4_g4

0x77f3,	// (0x00026316) list_medium_line_x4_t4

0x77f3,	// (0x00026316) list_medium_line_x4_t4_g7

0x77f3,	// (0x00026316) list_medium_line_x4_t5

0x780e,	// (0x00026331) list_single_fs_dyc_pane_ParamLimits

0x780e,	// (0x00026331) list_single_fs_dyc_pane

0x2fd3,	// (0x00021af6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x4_t4_g7_g1

0x7ef7,	// (0x00026a1a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ef7,	// (0x00026a1a) list_medium_line_x4_t4_g7_g2

0x7f03,	// (0x00026a26) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7f03,	// (0x00026a26) list_medium_line_x4_t4_g7_g3

0x7f12,	// (0x00026a35) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7f12,	// (0x00026a35) list_medium_line_x4_t4_g7_g4

0x7f1e,	// (0x00026a41) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7f1e,	// (0x00026a41) list_medium_line_x4_t4_g7_g5

0x7f2d,	// (0x00026a50) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7f2d,	// (0x00026a50) list_medium_line_x4_t4_g7_g6

0x7f3c,	// (0x00026a5f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7f3c,	// (0x00026a5f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfba7,	// (0x0002e6ca) list_medium_line_x4_t4_g7_g_ParamLimits

0xfba7,	// (0x0002e6ca) list_medium_line_x4_t4_g7_g

0x7f48,	// (0x00026a6b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7f48,	// (0x00026a6b) list_medium_line_x4_t4_g7_t1

0x7f5d,	// (0x00026a80) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7f5d,	// (0x00026a80) list_medium_line_x4_t4_g7_t2

0x7f72,	// (0x00026a95) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f72,	// (0x00026a95) list_medium_line_x4_t4_g7_t3

0x7f87,	// (0x00026aaa) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f87,	// (0x00026aaa) list_medium_line_x4_t4_g7_t4

0x7f99,	// (0x00026abc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f99,	// (0x00026abc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbb6,	// (0x0002e6d9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbb6,	// (0x0002e6d9) list_medium_line_x4_t4_g7_t

0x7fab,	// (0x00026ace) list_single_dyc_row_pane_ParamLimits

0x7fab,	// (0x00026ace) list_single_dyc_row_pane

0x8643,	// (0x00027166) call5_gesture_pane_ParamLimits

0x8643,	// (0x00027166) call5_gesture_pane

0x8679,	// (0x0002719c) call5_windows_pane_ParamLimits

0x8679,	// (0x0002719c) call5_windows_pane

0x86f1,	// (0x00027214) call5_swipe_1_pane_cp_ParamLimits

0x86f1,	// (0x00027214) call5_swipe_1_pane_cp

0x86fd,	// (0x00027220) call5_swipe_2_pane_cp_ParamLimits

0x86fd,	// (0x00027220) call5_swipe_2_pane_cp

0xaf22,	// (0x00029a45) call5_image_pane_cp

0x8709,	// (0x0002722c) popup_call5_audio_first_window_cp_ParamLimits

0x8709,	// (0x0002722c) popup_call5_audio_first_window_cp

0xe2a4,	// (0x0002cdc7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0002cdc7) call5_swipe_1_pane_g1_cp

0xe2e4,	// (0x0002ce07) call5_swipe_1_pane_g2_cp

0xe2bd,	// (0x0002cde0) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2bd,	// (0x0002cde0) call5_swipe_1_pane_t1_cp

0xe2a4,	// (0x0002cdc7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0002cdc7) call5_swipe_2_pane_g1_cp

0xe2ec,	// (0x0002ce0f) call5_swipe_2_pane_g2_cp

0xe2f4,	// (0x0002ce17) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f4,	// (0x0002ce17) call5_swipe_2_pane_t1_cp

0xa5d8,	// (0x000290fb) main_sp_fs_email_pane

0xe309,	// (0x0002ce2c) main_sp_fs_listscroll_pane_te

0xe312,	// (0x0002ce35) popup_sp_fs_action_menu_pane_ParamLimits

0xe312,	// (0x0002ce35) popup_sp_fs_action_menu_pane

0xc7d1,	// (0x0002b2f4) bg_sp_fs_ctrlbar_pane_g1

0xcd6a,	// (0x0002b88d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd7c,	// (0x0002b89f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd73,	// (0x0002b896) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7d1,	// (0x0002b2f4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc49,	// (0x0002e76c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5b0,	// (0x0002b0d3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5b0,	// (0x0002b0d3) bg_sp_fs_ctrlbar_ddmenu_pane

0xe358,	// (0x0002ce7b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe358,	// (0x0002ce7b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe364,	// (0x0002ce87) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe364,	// (0x0002ce87) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x08a5,	// (0x0001f3c8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x08a5,	// (0x0001f3c8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe370,	// (0x0002ce93) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe370,	// (0x0002ce93) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe38a,	// (0x0002cead) list_medium_line_t2_right_icon_g1

0x8717,	// (0x0002723a) list_medium_line_t2_right_icon_t1

0x8727,	// (0x0002724a) list_medium_line_t2_right_icon_t2

0x0001,

0xfc52,	// (0x0002e775) list_medium_line_t2_right_icon_t

0xc380,	// (0x0002aea3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc380,	// (0x0002aea3) bg_sp_fs_ctrlbar_pane

0x878e,	// (0x000272b1) main_sp_fs_ctrlbar_button_pane_cp01

0x8796,	// (0x000272b9) main_sp_fs_ctrlbar_ddmenu_pane

0xd7b1,	// (0x0002c2d4) main_sp_fs_ctrlbar_pane_g1

0xe3ca,	// (0x0002ceed) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc57,	// (0x0002e77a) main_sp_fs_ctrlbar_pane_g

0xe3d6,	// (0x0002cef9) main_sp_fs_ctrlbar_pane_t1

0x87a0,	// (0x000272c3) main_sp_fs_ctrlbar_pane

0x87ba,	// (0x000272dd) main_sp_fs_listscroll_pane_te_cp01

0x87cb,	// (0x000272ee) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87cb,	// (0x000272ee) popup_sp_fs_action_menu_pane_cp01

0xa5d8,	// (0x000290fb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5d8,	// (0x000290fb) bg_sp_fs_highlight_list_pane_cp01

0xe406,	// (0x0002cf29) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe406,	// (0x0002cf29) sp_fs_action_menu_list_gene_pane_g1

0xe415,	// (0x0002cf38) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe415,	// (0x0002cf38) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x08b9,	// (0x0001f3dc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x08b9,	// (0x0001f3dc) sp_fs_action_menu_list_gene_pane_g

0xe422,	// (0x0002cf45) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe422,	// (0x0002cf45) sp_fs_action_menu_list_gene_pane_t1

0xe43a,	// (0x0002cf5d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe43a,	// (0x0002cf5d) sp_fs_action_menu_list_gene_pane

0xe45d,	// (0x0002cf80) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe45d,	// (0x0002cf80) popup_sp_fs_action_menu_bg_pane

0xe46b,	// (0x0002cf8e) sp_fs_action_menu_list_pane_ParamLimits

0xe46b,	// (0x0002cf8e) sp_fs_action_menu_list_pane

0xe48f,	// (0x0002cfb2) sp_fs_scroll_pane_cp01_ParamLimits

0xe48f,	// (0x0002cfb2) sp_fs_scroll_pane_cp01

0x87f9,	// (0x0002731c) list_medium_line_plain_t2_t1

0x8809,	// (0x0002732c) list_medium_line_plain_t2_t2

0x0001,

0xfc5c,	// (0x0002e77f) list_medium_line_plain_t2_t

0x8817,	// (0x0002733a) list_medium_line_plain_t3_t1

0x8827,	// (0x0002734a) list_medium_line_plain_t3_t2

0x8835,	// (0x00027358) list_medium_line_plain_t3_t3

0x0002,

0xfc61,	// (0x0002e784) list_medium_line_plain_t3_t

0x2fd3,	// (0x00021af6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t2_g2_g1

0x2feb,	// (0x00021b0e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0002dd6e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0002dd6e) list_medium_line_x2_t2_g2_g

0x43cd,	// (0x00022ef0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x43cd,	// (0x00022ef0) list_medium_line_x2_t2_g2_t1

0x3020,	// (0x00021b43) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc68,	// (0x0002e78b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc68,	// (0x0002e78b) list_medium_line_x2_t2_g2_t

0x2fd3,	// (0x00021af6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t4_g2_g1

0x2feb,	// (0x00021b0e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0002dd6e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0002dd6e) list_medium_line_x2_t4_g2_g

0x8843,	// (0x00027366) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8843,	// (0x00027366) list_medium_line_x2_t4_g2_t1

0x885d,	// (0x00027380) list_medium_line_x2_t4_g2_t2_ParamLimits

0x885d,	// (0x00027380) list_medium_line_x2_t4_g2_t2

0x8873,	// (0x00027396) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8873,	// (0x00027396) list_medium_line_x2_t4_g2_t3

0x3020,	// (0x00021b43) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6d,	// (0x0002e790) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6d,	// (0x0002e790) list_medium_line_x2_t4_g2_t

0xe4b5,	// (0x0002cfd8) list_medium_line_t3_right_iconx2_g1

0xe38a,	// (0x0002cead) list_medium_line_t3_right_iconx2_g2

0x8888,	// (0x000273ab) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc76,	// (0x0002e799) list_medium_line_t3_right_iconx2_g

0x8892,	// (0x000273b5) list_medium_line_t3_right_iconx2_t1

0x88a2,	// (0x000273c5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7d,	// (0x0002e7a0) list_medium_line_t3_right_iconx2_t

0x2fd3,	// (0x00021af6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x3_t4_g4_g1

0x2fdf,	// (0x00021b02) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x3_t4_g4_g2

0x43b5,	// (0x00022ed8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x43b5,	// (0x00022ed8) list_medium_line_x3_t4_g4_g3

0x88b0,	// (0x000273d3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x88b0,	// (0x000273d3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc82,	// (0x0002e7a5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc82,	// (0x0002e7a5) list_medium_line_x3_t4_g4_g

0x88bc,	// (0x000273df) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88bc,	// (0x000273df) list_medium_line_x3_t4_g4_t1

0x88d3,	// (0x000273f6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88d3,	// (0x000273f6) list_medium_line_x3_t4_g4_t2

0x88e8,	// (0x0002740b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x88e8,	// (0x0002740b) list_medium_line_x3_t4_g4_t3

0x88fd,	// (0x00027420) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88fd,	// (0x00027420) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8b,	// (0x0002e7ae) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8b,	// (0x0002e7ae) list_medium_line_x3_t4_g4_t

0x891a,	// (0x0002743d) list_single_dyc_row_text_pane_t1_ParamLimits

0x891a,	// (0x0002743d) list_single_dyc_row_text_pane_t1

0x8957,	// (0x0002747a) list_single_dyc_row_text_pane_t2_ParamLimits

0x8957,	// (0x0002747a) list_single_dyc_row_text_pane_t2

0xe4bd,	// (0x0002cfe0) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4bd,	// (0x0002cfe0) list_single_dyc_row_text_pane_t3

0x0005,

0xfc94,	// (0x0002e7b7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc94,	// (0x0002e7b7) list_single_dyc_row_text_pane_t

0xe4e1,	// (0x0002d004) list_single_dyc_row_pane_g1_ParamLimits

0xe4e1,	// (0x0002d004) list_single_dyc_row_pane_g1

0xe4ed,	// (0x0002d010) list_single_dyc_row_pane_g2_ParamLimits

0xe4ed,	// (0x0002d010) list_single_dyc_row_pane_g2

0xe4f9,	// (0x0002d01c) list_single_dyc_row_pane_g3_ParamLimits

0xe4f9,	// (0x0002d01c) list_single_dyc_row_pane_g3

0xe505,	// (0x0002d028) list_single_dyc_row_pane_g4_ParamLimits

0xe505,	// (0x0002d028) list_single_dyc_row_pane_g4

0x0003,

0x0903,	// (0x0001f426) list_single_dyc_row_pane_g_ParamLimits

0x0903,	// (0x0001f426) list_single_dyc_row_pane_g

0xe511,	// (0x0002d034) list_single_dyc_row_text_pane_ParamLimits

0xe511,	// (0x0002d034) list_single_dyc_row_text_pane

0x9c70,	// (0x00028793) bg_sp_fs_scroll_pane

0xe530,	// (0x0002d053) thumb_sp_fs_scroll_pane

0x7257,	// (0x00025d7a) list_medium_line_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_g1

0xe539,	// (0x0002d05c) list_medium_line_t1_ParamLimits

0xe539,	// (0x0002d05c) list_medium_line_t1

0x2fd3,	// (0x00021af6) list_medium_line_x2_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_g1

0x2fdf,	// (0x00021b02) list_medium_line_x2_g2_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x2_g2

0x0001,

0xfca1,	// (0x0002e7c4) list_medium_line_x2_g_ParamLimits

0xfca1,	// (0x0002e7c4) list_medium_line_x2_g

0xe54e,	// (0x0002d071) list_medium_line_x2_t1_ParamLimits

0xe54e,	// (0x0002d071) list_medium_line_x2_t1

0x2fd3,	// (0x00021af6) list_medium_line_x3_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x3_g1

0x2fdf,	// (0x00021b02) list_medium_line_x3_g2_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x3_g2

0x0001,

0xfca1,	// (0x0002e7c4) list_medium_line_x3_g_ParamLimits

0xfca1,	// (0x0002e7c4) list_medium_line_x3_g

0xe54e,	// (0x0002d071) list_medium_line_x3_t1_ParamLimits

0xe54e,	// (0x0002d071) list_medium_line_x3_t1

0xe564,	// (0x0002d087) thumb_sp_fs_scroll_pane_g1

0xe56d,	// (0x0002d090) thumb_sp_fs_scroll_pane_g2

0xe576,	// (0x0002d099) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0911,	// (0x0001f434) thumb_sp_fs_scroll_pane_g

0xe564,	// (0x0002d087) bg_sp_fs_scroll_pane_g1

0xe56d,	// (0x0002d090) bg_sp_fs_scroll_pane_g2

0xe576,	// (0x0002d099) bg_sp_fs_scroll_pane_g3

0x0002,

0x0911,	// (0x0001f434) bg_sp_fs_scroll_pane_g

0x2fd3,	// (0x00021af6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2fd3,	// (0x00021af6) list_medium_line_x2_t3_g4_g1

0x307b,	// (0x00021b9e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x307b,	// (0x00021b9e) list_medium_line_x2_t3_g4_g2

0x2fdf,	// (0x00021b02) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2fdf,	// (0x00021b02) list_medium_line_x2_t3_g4_g3

0x2feb,	// (0x00021b0e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2feb,	// (0x00021b0e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0002ddea) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0002ddea) list_medium_line_x2_t3_g4_g

0x8a80,	// (0x000275a3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a80,	// (0x000275a3) list_medium_line_x2_t3_g4_t1

0x8a96,	// (0x000275b9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a96,	// (0x000275b9) list_medium_line_x2_t3_g4_t2

0x3020,	// (0x00021b43) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3020,	// (0x00021b43) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca6,	// (0x0002e7c9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca6,	// (0x0002e7c9) list_medium_line_x2_t3_g4_t

0x7257,	// (0x00025d7a) list_medium_line_g2_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_g2_g1

0xd481,	// (0x0002bfa4) list_medium_line_g2_g2_ParamLimits

0xd481,	// (0x0002bfa4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002e523) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002e523) list_medium_line_g2_g

0xe57f,	// (0x0002d0a2) list_medium_line_g2_t1_ParamLimits

0xe57f,	// (0x0002d0a2) list_medium_line_g2_t1

0x7257,	// (0x00025d7a) list_medium_line_t3_g2_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_t3_g2_g1

0xd481,	// (0x0002bfa4) list_medium_line_t3_g2_g2_ParamLimits

0xd481,	// (0x0002bfa4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002e523) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002e523) list_medium_line_t3_g2_g

0x8aaf,	// (0x000275d2) list_medium_line_t3_g2_t1_ParamLimits

0x8aaf,	// (0x000275d2) list_medium_line_t3_g2_t1

0x8ac9,	// (0x000275ec) list_medium_line_t3_g2_t2_ParamLimits

0x8ac9,	// (0x000275ec) list_medium_line_t3_g2_t2

0x8adf,	// (0x00027602) list_medium_line_t3_g2_t3_ParamLimits

0x8adf,	// (0x00027602) list_medium_line_t3_g2_t3

0x0002,

0xfcad,	// (0x0002e7d0) list_medium_line_t3_g2_t_ParamLimits

0xfcad,	// (0x0002e7d0) list_medium_line_t3_g2_t

0xe38a,	// (0x0002cead) list_medium_line_right_icon_g1

0xe594,	// (0x0002d0b7) list_medium_line_right_icon_t1

0x7257,	// (0x00025d7a) list_medium_line_t2_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_t2_g1

0x8af6,	// (0x00027619) list_medium_line_t2_t1_ParamLimits

0x8af6,	// (0x00027619) list_medium_line_t2_t1

0x8b10,	// (0x00027633) list_medium_line_t2_t2_ParamLimits

0x8b10,	// (0x00027633) list_medium_line_t2_t2

0x0001,

0xfcb4,	// (0x0002e7d7) list_medium_line_t2_t_ParamLimits

0xfcb4,	// (0x0002e7d7) list_medium_line_t2_t

0x7257,	// (0x00025d7a) list_medium_line_t3_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_t3_g1

0x8b25,	// (0x00027648) list_medium_line_t3_t1_ParamLimits

0x8b25,	// (0x00027648) list_medium_line_t3_t1

0x8b3c,	// (0x0002765f) list_medium_line_t3_t2_ParamLimits

0x8b3c,	// (0x0002765f) list_medium_line_t3_t2

0x8b51,	// (0x00027674) list_medium_line_t3_t3_ParamLimits

0x8b51,	// (0x00027674) list_medium_line_t3_t3

0x0002,

0xfcb9,	// (0x0002e7dc) list_medium_line_t3_t_ParamLimits

0xfcb9,	// (0x0002e7dc) list_medium_line_t3_t

0x7257,	// (0x00025d7a) list_medium_line_g3_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_g3_g1

0xe5a2,	// (0x0002d0c5) list_medium_line_g3_g2_ParamLimits

0xe5a2,	// (0x0002d0c5) list_medium_line_g3_g2

0xd481,	// (0x0002bfa4) list_medium_line_g3_g3_ParamLimits

0xd481,	// (0x0002bfa4) list_medium_line_g3_g3

0x0002,

0xfcc0,	// (0x0002e7e3) list_medium_line_g3_g_ParamLimits

0xfcc0,	// (0x0002e7e3) list_medium_line_g3_g

0xe5ae,	// (0x0002d0d1) list_medium_line_g3_t1_ParamLimits

0xe5ae,	// (0x0002d0d1) list_medium_line_g3_t1

0x7257,	// (0x00025d7a) list_medium_line_t2_g3_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_t2_g3_g1

0xe5a2,	// (0x0002d0c5) list_medium_line_t2_g3_g2_ParamLimits

0xe5a2,	// (0x0002d0c5) list_medium_line_t2_g3_g2

0xd481,	// (0x0002bfa4) list_medium_line_t2_g3_g3_ParamLimits

0xd481,	// (0x0002bfa4) list_medium_line_t2_g3_g3

0x0002,

0xfcc0,	// (0x0002e7e3) list_medium_line_t2_g3_g_ParamLimits

0xfcc0,	// (0x0002e7e3) list_medium_line_t2_g3_g

0x8b63,	// (0x00027686) list_medium_line_t2_g3_t1_ParamLimits

0x8b63,	// (0x00027686) list_medium_line_t2_g3_t1

0x8b7a,	// (0x0002769d) list_medium_line_t2_g3_t2_ParamLimits

0x8b7a,	// (0x0002769d) list_medium_line_t2_g3_t2

0x0001,

0xfcc7,	// (0x0002e7ea) list_medium_line_t2_g3_t_ParamLimits

0xfcc7,	// (0x0002e7ea) list_medium_line_t2_g3_t

0x7257,	// (0x00025d7a) list_medium_line_t3_g3_g1_ParamLimits

0x7257,	// (0x00025d7a) list_medium_line_t3_g3_g1

0xe5a2,	// (0x0002d0c5) list_medium_line_t3_g3_g2_ParamLimits

0xe5a2,	// (0x0002d0c5) list_medium_line_t3_g3_g2

0xd481,	// (0x0002bfa4) list_medium_line_t3_g3_g3_ParamLimits

0xd481,	// (0x0002bfa4) list_medium_line_t3_g3_g3

0x0002,

0xfcc0,	// (0x0002e7e3) list_medium_line_t3_g3_g_ParamLimits

0xfcc0,	// (0x0002e7e3) list_medium_line_t3_g3_g

0x8b8f,	// (0x000276b2) list_medium_line_t3_g3_t1_ParamLimits

0x8b8f,	// (0x000276b2) list_medium_line_t3_g3_t1

0x8ba8,	// (0x000276cb) list_medium_line_t3_g3_t2_ParamLimits

0x8ba8,	// (0x000276cb) list_medium_line_t3_g3_t2

0x8bbe,	// (0x000276e1) list_medium_line_t3_g3_t3_ParamLimits

0x8bbe,	// (0x000276e1) list_medium_line_t3_g3_t3

0x0002,

0xfccc,	// (0x0002e7ef) list_medium_line_t3_g3_t_ParamLimits

0xfccc,	// (0x0002e7ef) list_medium_line_t3_g3_t

0xe4b5,	// (0x0002cfd8) list_medium_line_right_iconx2_g1

0xe38a,	// (0x0002cead) list_medium_line_right_iconx2_g2

0x0001,

0x0945,	// (0x0001f468) list_medium_line_right_iconx2_g

0xe5c3,	// (0x0002d0e6) list_medium_line_right_iconx2_t1

0xe4b5,	// (0x0002cfd8) list_medium_line_t2_right_iconx2_g1

0xe38a,	// (0x0002cead) list_medium_line_t2_right_iconx2_g2

0x0001,

0x0945,	// (0x0001f468) list_medium_line_t2_right_iconx2_g

0x8bd8,	// (0x000276fb) list_medium_line_t2_right_iconx2_t1

0x8be8,	// (0x0002770b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcd3,	// (0x0002e7f6) list_medium_line_t2_right_iconx2_t

0x8bf6,	// (0x00027719) list_medium_line_x4_t4_t1

0x8c04,	// (0x00027727) list_medium_line_x4_t4_t2

0x8c14,	// (0x00027737) list_medium_line_x4_t4_t3

0x8c24,	// (0x00027747) list_medium_line_x4_t4_t4

0x0003,

0xfcd8,	// (0x0002e7fb) list_medium_line_x4_t4_t

0x8c5e,	// (0x00027781) tport_appsw_pane_ParamLimits

0x8c5e,	// (0x00027781) tport_appsw_pane

0x8c6c,	// (0x0002778f) tport_contact_pane_ParamLimits

0x8c6c,	// (0x0002778f) tport_contact_pane

0x8c7c,	// (0x0002779f) tport_listscroll_pane_ParamLimits

0x8c7c,	// (0x0002779f) tport_listscroll_pane

0x8c8c,	// (0x000277af) cell_tport_appsw_pane_ParamLimits

0x8c8c,	// (0x000277af) cell_tport_appsw_pane

0xca72,	// (0x0002b595) tport_appsw_pane_g1_ParamLimits

0xca72,	// (0x0002b595) tport_appsw_pane_g1

0xe5d1,	// (0x0002d0f4) tport_contact_pane_g1

0xe5da,	// (0x0002d0fd) tport_contact_pane_t1

0xe5e8,	// (0x0002d10b) tport_contact_pane_t2

0x0001,

0x0958,	// (0x0001f47b) tport_contact_pane_t

0xe5f6,	// (0x0002d119) list_tport_pane

0xe5ff,	// (0x0002d122) scroll_pane_cp_030

0x8cc1,	// (0x000277e4) cell_tport_appsw_pane_g1

0x8cd1,	// (0x000277f4) cell_tport_appsw_pane_t1

0x8cdf,	// (0x00027802) grid_highlight_pane_cp019

0x8ce7,	// (0x0002780a) list_tport_double_graphic_pane_ParamLimits

0x8ce7,	// (0x0002780a) list_tport_double_graphic_pane

0xa5d8,	// (0x000290fb) list_highlight_pane_cp023_ParamLimits

0xa5d8,	// (0x000290fb) list_highlight_pane_cp023

0x8cf4,	// (0x00027817) list_tport_double_graphic_pane_g1_ParamLimits

0x8cf4,	// (0x00027817) list_tport_double_graphic_pane_g1

0x8d01,	// (0x00027824) list_tport_double_graphic_pane_t1_ParamLimits

0x8d01,	// (0x00027824) list_tport_double_graphic_pane_t1

0x8d16,	// (0x00027839) list_tport_double_graphic_pane_t2_ParamLimits

0x8d16,	// (0x00027839) list_tport_double_graphic_pane_t2

0x0001,

0xfce8,	// (0x0002e80b) list_tport_double_graphic_pane_t_ParamLimits

0xfce8,	// (0x0002e80b) list_tport_double_graphic_pane_t

0x9c70,	// (0x00028793) main_cale_note_pane

0x1cd8,	// (0x000207fb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1cd8,	// (0x000207fb) cell_vitu2_function_top_wide_pane_cp01

0x8316,	// (0x00026e39) wait_bar_pane_cp05_ParamLimits

0xa5d8,	// (0x000290fb) listscroll_cmail_pane

0xe610,	// (0x0002d133) list_cmail_pane

0x8d32,	// (0x00027855) list_cmail_body_pane

0x8d4b,	// (0x0002786e) list_single_cmail_header_caption_pane

0x8d6c,	// (0x0002788f) list_single_cmail_header_detail_pane_ParamLimits

0x8d6c,	// (0x0002788f) list_single_cmail_header_detail_pane

0x8d9d,	// (0x000278c0) list_single_cmail_header_caption_pane_t1

0x8db8,	// (0x000278db) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8db8,	// (0x000278db) list_single_cmail_header_detail_pane_g1

0xe627,	// (0x0002d14a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe627,	// (0x0002d14a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfced,	// (0x0002e810) list_single_cmail_header_detail_pane_g_ParamLimits

0xfced,	// (0x0002e810) list_single_cmail_header_detail_pane_g

0x8dd0,	// (0x000278f3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8dd0,	// (0x000278f3) list_single_cmail_header_detail_pane_t1

0x8e1e,	// (0x00027941) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e1e,	// (0x00027941) list_single_cmail_header_editor_pane_bg

0xdf4c,	// (0x0002ca6f) list_cmail_body_pane_g1

0xe664,	// (0x0002d187) list_cmail_body_pane_t1

0xd1e2,	// (0x0002bd05) list_single_cmail_header_editor_pane_bg_g1

0xa83b,	// (0x0002935e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1f2,	// (0x0002bd15) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1ea,	// (0x0002bd0d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd479,	// (0x0002bf9c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd212,	// (0x0002bd35) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd202,	// (0x0002bd25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd20a,	// (0x0002bd2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa81b,	// (0x0002933e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e35,	// (0x00027958) calenote_gesture_pane_ParamLimits

0x8e35,	// (0x00027958) calenote_gesture_pane

0x8e4f,	// (0x00027972) calenote_window_pane_ParamLimits

0x8e4f,	// (0x00027972) calenote_window_pane

0xe672,	// (0x0002d195) popup_note_window_cp01

0x8e67,	// (0x0002798a) calenote_swipe_1_pane_ParamLimits

0x8e67,	// (0x0002798a) calenote_swipe_1_pane

0x86fd,	// (0x00027220) calenote_swipe_2_pane_ParamLimits

0x86fd,	// (0x00027220) calenote_swipe_2_pane

0xe2a4,	// (0x0002cdc7) calenote_swipe_1_pane_g1_ParamLimits

0xe2a4,	// (0x0002cdc7) calenote_swipe_1_pane_g1

0xe2b1,	// (0x0002cdd4) calenote_swipe_1_pane_g2_ParamLimits

0xe2b1,	// (0x0002cdd4) calenote_swipe_1_pane_g2

0x0001,

0x0892,	// (0x0001f3b5) calenote_swipe_1_pane_g_ParamLimits

0x0892,	// (0x0001f3b5) calenote_swipe_1_pane_g

0xe684,	// (0x0002d1a7) calenote_swipe_1_pane_t1_ParamLimits

0xe684,	// (0x0002d1a7) calenote_swipe_1_pane_t1

0xe2a4,	// (0x0002cdc7) calenote_swipe_2_pane_g1_ParamLimits

0xe2a4,	// (0x0002cdc7) calenote_swipe_2_pane_g1

0xe6a3,	// (0x0002d1c6) calenote_swipe_2_pane_g2_ParamLimits

0xe6a3,	// (0x0002d1c6) calenote_swipe_2_pane_g2

0x0001,

0x0975,	// (0x0001f498) calenote_swipe_2_pane_g_ParamLimits

0x0975,	// (0x0001f498) calenote_swipe_2_pane_g

0xe6af,	// (0x0002d1d2) calenote_swipe_2_pane_t1_ParamLimits

0xe6af,	// (0x0002d1d2) calenote_swipe_2_pane_t1

0x9c70,	// (0x00028793) main_mup_navstr_pane

0x61c1,	// (0x00024ce4) main_mup3_pane_t7_ParamLimits

0x61c1,	// (0x00024ce4) main_mup3_pane_t7

0x15cf,	// (0x000200f2) main_mp4_pane_g6_ParamLimits

0x15cf,	// (0x000200f2) main_mp4_pane_g6

0x18c0,	// (0x000203e3) main_image3_pane_t4_ParamLimits

0x18c0,	// (0x000203e3) main_image3_pane_t4

0x8e7a,	// (0x0002799d) popup_navstr_preview_pane_ParamLimits

0x8e7a,	// (0x0002799d) popup_navstr_preview_pane

0x8e86,	// (0x000279a9) scroll_navstr_pane_ParamLimits

0x8e86,	// (0x000279a9) scroll_navstr_pane

0x9c70,	// (0x00028793) bg_popup_preview_window_pane_cp04

0xe6d6,	// (0x0002d1f9) popup_navstr_preview_pane_t1

0x8e92,	// (0x000279b5) scroll_navstr_pane_g1_ParamLimits

0x8e92,	// (0x000279b5) scroll_navstr_pane_g1

0x8e9f,	// (0x000279c2) scroll_navstr_pane_t1_ParamLimits

0x8e9f,	// (0x000279c2) scroll_navstr_pane_t1

0xe67b,	// (0x0002d19e) bg_button_pane_cp014

0xe67b,	// (0x0002d19e) bg_button_pane_cp030

0x85e9,	// (0x0002710c) list_double_fisheye_pane_g4_ParamLimits

0x85e9,	// (0x0002710c) list_double_fisheye_pane_g4

0x85f5,	// (0x00027118) list_double_fisheye_pane_g5_ParamLimits

0x85f5,	// (0x00027118) list_double_fisheye_pane_g5

0xe618,	// (0x0002d13b) sp_fs_scroll_pane_cp03

0xd7b1,	// (0x0002c2d4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3ca,	// (0x0002ceed) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc57,	// (0x0002e77a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3d6,	// (0x0002cef9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d28,	// (0x0002784b) sp_fs_scroll_pane_cp02

0xa51a,	// (0x0002903d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa51a,	// (0x0002903d) popup_sp_fs_calendar_preview_list_single_pane

0x9c70,	// (0x00028793) main_cam6_pano_pane

0xa5d8,	// (0x000290fb) main_mup3_pane_ParamLimits

0x9c70,	// (0x00028793) main_phacti_pane

0x81e9,	// (0x00026d0c) bg_button_pane_cp11

0x8201,	// (0x00026d24) main_mobtv_info_pane_g2_ParamLimits

0x8201,	// (0x00026d24) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x0002e719) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x0002e719) main_mobtv_info_pane_g

0x83b3,	// (0x00026ed6) sc_clock_pane_t5_ParamLimits

0x83b3,	// (0x00026ed6) sc_clock_pane_t5

0x845c,	// (0x00026f7f) main_radioblah_pane_g1_ParamLimits

0xe1f0,	// (0x0002cd13) main_radioblah_pane_t3_ParamLimits

0xe1f0,	// (0x0002cd13) main_radioblah_pane_t3

0xe208,	// (0x0002cd2b) main_radioblah_pane_t4_ParamLimits

0xe208,	// (0x0002cd2b) main_radioblah_pane_t4

0x847a,	// (0x00026f9d) main_radioblah_text_pane_ParamLimits

0x847a,	// (0x00026f9d) main_radioblah_text_pane

0x8487,	// (0x00026faa) main_radioblah_info_pane_g1_ParamLimits

0x8520,	// (0x00027043) main_radioblah_info_pane_t4_ParamLimits

0x8520,	// (0x00027043) main_radioblah_info_pane_t4

0xa5d8,	// (0x000290fb) main_sp_fs_calendar_pane

0x8eb1,	// (0x000279d4) main_phacti_pane_g1

0x8eb9,	// (0x000279dc) phacti_note_pane_ParamLimits

0x8eb9,	// (0x000279dc) phacti_note_pane

0xe6ed,	// (0x0002d210) phacti_term_pane_ParamLimits

0xe6ed,	// (0x0002d210) phacti_term_pane

0xe702,	// (0x0002d225) phacti_note_pane_t1_ParamLimits

0xe702,	// (0x0002d225) phacti_note_pane_t1

0xe719,	// (0x0002d23c) phacti_term_pane_g1

0xe721,	// (0x0002d244) phacti_term_pane_t1_ParamLimits

0xe721,	// (0x0002d244) phacti_term_pane_t1

0xe74b,	// (0x0002d26e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe753,	// (0x0002d276) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x097f,	// (0x0001f4a2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe75b,	// (0x0002d27e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe75b,	// (0x0002d27e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe771,	// (0x0002d294) aid_popup_sp_fs_bg_corner_pane

0xc7d1,	// (0x0002b2f4) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c70,	// (0x00028793) popup_sp_fs_calendar_preview_bg_pane

0xe779,	// (0x0002d29c) popup_sp_fs_calendar_preview_list_pane

0xc380,	// (0x0002aea3) bg_main_sp_fs_cale_pane_ParamLimits

0xc380,	// (0x0002aea3) bg_main_sp_fs_cale_pane

0xe78a,	// (0x0002d2ad) listscroll_cale_mrui_pane_ParamLimits

0xe78a,	// (0x0002d2ad) listscroll_cale_mrui_pane

0xe79f,	// (0x0002d2c2) listscroll_sp_fs_schedule_track_pane

0xe7a8,	// (0x0002d2cb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7a8,	// (0x0002d2cb) main_sp_fs_ctrlbar_pane_cp01

0xe7bb,	// (0x0002d2de) main_sp_fs_ribbon_pane

0xe7c3,	// (0x0002d2e6) popup_sp_fs_cale_preview_window

0x8f18,	// (0x00027a3b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f18,	// (0x00027a3b) list_single_sp_fs_schedule_track_pane

0x2395,	// (0x00020eb8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2395,	// (0x00020eb8) bg_sp_fs_highlight_list_pane_cp03

0x8f2d,	// (0x00027a50) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f2d,	// (0x00027a50) list_single_sp_fs_schedule_track_pane_g1

0x8f39,	// (0x00027a5c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f39,	// (0x00027a5c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcf9,	// (0x0002e81c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcf9,	// (0x0002e81c) list_single_sp_fs_schedule_track_pane_g

0x8f45,	// (0x00027a68) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f45,	// (0x00027a68) list_single_sp_fs_schedule_track_pane_t1

0x8f63,	// (0x00027a86) sp_fs_schedule_track_pane_ParamLimits

0x8f63,	// (0x00027a86) sp_fs_schedule_track_pane

0xe7d5,	// (0x0002d2f8) sp_fs_schedule_track_pane_g1

0xe7dd,	// (0x0002d300) sp_fs_schedule_track_pane_g2

0xe7e5,	// (0x0002d308) sp_fs_schedule_track_pane_g3

0xe7ed,	// (0x0002d310) sp_fs_schedule_track_pane_g4

0xe7f5,	// (0x0002d318) sp_fs_schedule_track_pane_g5

0x0004,

0x0989,	// (0x0001f4ac) sp_fs_schedule_track_pane_g

0xd1e2,	// (0x0002bd05) bg_sp_fs_schedule_viewer_highlight_g1

0xa83b,	// (0x0002935e) bg_sp_fs_schedule_viewer_highlight_g2

0xd1ea,	// (0x0002bd0d) bg_sp_fs_schedule_viewer_highlight_g3

0xd1f2,	// (0x0002bd15) bg_sp_fs_schedule_viewer_highlight_g4

0xd479,	// (0x0002bf9c) bg_sp_fs_schedule_viewer_highlight_g5

0xd202,	// (0x0002bd25) bg_sp_fs_schedule_viewer_highlight_g6

0xd20a,	// (0x0002bd2d) bg_sp_fs_schedule_viewer_highlight_g7

0xd212,	// (0x0002bd35) bg_sp_fs_schedule_viewer_highlight_g8

0xa81b,	// (0x0002933e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcfe,	// (0x0002e821) bg_sp_fs_schedule_viewer_highlight_g

0x9c70,	// (0x00028793) bg_main_sp_fs_ribbon_pane

0x8f75,	// (0x00027a98) main_sp_fs_ribbon_pane_g1

0xe7fd,	// (0x0002d320) main_sp_fs_ribbon_pane_t1

0x8f7e,	// (0x00027aa1) main_sp_fs_ribbon_pane_t2

0xe80c,	// (0x0002d32f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd11,	// (0x0002e834) main_sp_fs_ribbon_pane_t

0xe81b,	// (0x0002d33e) main_sp_fs_ribbon_scheduler_pane

0xe823,	// (0x0002d346) bg_main_sp_fs_ribbon_pane_g1

0xe82c,	// (0x0002d34f) bg_main_sp_fs_ribbon_pane_g2

0xe835,	// (0x0002d358) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x09ae,	// (0x0001f4d1) bg_main_sp_fs_ribbon_pane_g

0xe83d,	// (0x0002d360) main_sp_fs_ribbon_scheduler_pane_g1

0xe846,	// (0x0002d369) main_sp_fs_ribbon_scheduler_pane_g2

0xe84f,	// (0x0002d372) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x09b5,	// (0x0001f4d8) main_sp_fs_ribbon_scheduler_pane_g

0xe858,	// (0x0002d37b) list_cale_mrui_pane

0x8f8d,	// (0x00027ab0) sp_fs_scroll_pane_cp07_ParamLimits

0x8f8d,	// (0x00027ab0) sp_fs_scroll_pane_cp07

0x8fa9,	// (0x00027acc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fa9,	// (0x00027acc) bg_sp_fs_schedule_viewer_highlight

0xe865,	// (0x0002d388) list_single_sp_fs_schedule_track_pane_cp01

0xe86d,	// (0x0002d390) list_sp_fs_schedule_track_pane

0xe875,	// (0x0002d398) sp_fs_scroll_pane_cp06_ParamLimits

0xe875,	// (0x0002d398) sp_fs_scroll_pane_cp06

0xc7d1,	// (0x0002b2f4) bgmain_sp_fs_calendar_pane_g1

0x8fb6,	// (0x00027ad9) list_single_cale_mrui_pane_ParamLimits

0x8fb6,	// (0x00027ad9) list_single_cale_mrui_pane

0xe887,	// (0x0002d3aa) list_single_cale_mrui_row_pane_ParamLimits

0xe887,	// (0x0002d3aa) list_single_cale_mrui_row_pane

0xe89d,	// (0x0002d3c0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89d,	// (0x0002d3c0) list_single_cale_mrui_row_pane_g1

0xe8e2,	// (0x0002d405) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e2,	// (0x0002d405) list_single_cale_mrui_row_pane_t1

0x8fcb,	// (0x00027aee) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fcb,	// (0x00027aee) list_single_cale_mrui_row_pane_t2

0xe8f4,	// (0x0002d417) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f4,	// (0x0002d417) list_single_cale_mrui_row_pane_t3

0xe923,	// (0x0002d446) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe923,	// (0x0002d446) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd18,	// (0x0002e83b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd18,	// (0x0002e83b) list_single_cale_mrui_row_pane_t

0x9031,	// (0x00027b54) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9031,	// (0x00027b54) list_single_cmail_header_editor_pane_bg_cp01

0x9055,	// (0x00027b78) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9055,	// (0x00027b78) list_single_cmail_header_editor_pane_bg_cp02

0x9071,	// (0x00027b94) main_radioblah_text_pane_t1_ParamLimits

0x9071,	// (0x00027b94) main_radioblah_text_pane_t1

0xe952,	// (0x0002d475) cam6_indi_pane_cp01

0xe95a,	// (0x0002d47d) cam6_mode_pane_cp01

0xe962,	// (0x0002d485) cam6_pano_pane

0xe96b,	// (0x0002d48e) cam6_zoom_pane_cp01

0xe975,	// (0x0002d498) cam6_pano_image_pane

0xe97e,	// (0x0002d4a1) cam6_pano_pane_g1

0xdf4c,	// (0x0002ca6f) cam6_pano_pane_g2

0xe987,	// (0x0002d4aa) cam6_pano_pane_g3

0xe990,	// (0x0002d4b3) cam6_pano_pane_g4

0xcd57,	// (0x0002b87a) cam6_pano_pane_g5

0xe999,	// (0x0002d4bc) cam6_pano_pane_g6

0xe9a1,	// (0x0002d4c4) cam6_pano_pane_g7

0xe9a9,	// (0x0002d4cc) cam6_pano_pane_g8

0xe9b2,	// (0x0002d4d5) cam6_pano_pane_g9

0x0008,

0xfd21,	// (0x0002e844) cam6_pano_pane_g

0x9c70,	// (0x00028793) main_browser_tag_pane

0xe6ce,	// (0x0002d1f1) grid_navstr_albumart_pane

0xe9bd,	// (0x0002d4e0) cell_navstr_albumart_pane_ParamLimits

0xe9bd,	// (0x0002d4e0) cell_navstr_albumart_pane

0xe9dc,	// (0x0002d4ff) cell_navstr_albumart_pane_g1

0xc18d,	// (0x0002acb0) cell_navstr_albumart_pane_g2

0xc19d,	// (0x0002acc0) cell_navstr_albumart_pane_g3

0xc195,	// (0x0002acb8) cell_navstr_albumart_pane_g4

0x0003,

0xfd34,	// (0x0002e857) cell_navstr_albumart_pane_g

0x908b,	// (0x00027bae) bt_list_pane_ParamLimits

0x908b,	// (0x00027bae) bt_list_pane

0x90a4,	// (0x00027bc7) bt_list_pane_t1

0x90b3,	// (0x00027bd6) bt_list_pane_t2

0x0001,

0xfd3d,	// (0x0002e860) bt_list_pane_t

0x9c70,	// (0x00028793) main_cale_prevew_pane

0x90c2,	// (0x00027be5) popup_cale_preview_window_ParamLimits

0x90c2,	// (0x00027be5) popup_cale_preview_window

0xa5d8,	// (0x000290fb) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5d8,	// (0x000290fb) bg_popup_preview_window_pane_cp05

0xe9e4,	// (0x0002d507) list_cale_preview_pane_ParamLimits

0xe9e4,	// (0x0002d507) list_cale_preview_pane

0x90dd,	// (0x00027c00) list_double_cale_preview_pane_ParamLimits

0x90dd,	// (0x00027c00) list_double_cale_preview_pane

0x90f1,	// (0x00027c14) list_single_cale_preview_pane_ParamLimits

0x90f1,	// (0x00027c14) list_single_cale_preview_pane

0x9109,	// (0x00027c2c) list_single_cale_preview_pane_g1

0x9111,	// (0x00027c34) list_single_cale_preview_pane_t1_ParamLimits

0x9111,	// (0x00027c34) list_single_cale_preview_pane_t1

0x9126,	// (0x00027c49) list_double_cale_preview_pane_g1

0x912e,	// (0x00027c51) list_double_cale_preview_pane_t1_ParamLimits

0x912e,	// (0x00027c51) list_double_cale_preview_pane_t1

0x9143,	// (0x00027c66) list_double_cale_preview_pane_t2_ParamLimits

0x9143,	// (0x00027c66) list_double_cale_preview_pane_t2

0x0001,

0xfd42,	// (0x0002e865) list_double_cale_preview_pane_t_ParamLimits

0xfd42,	// (0x0002e865) list_double_cale_preview_pane_t

0x9c70,	// (0x00028793) main_ezdial_pane

0xa5d8,	// (0x000290fb) main_sp_fs_email_pane_ParamLimits

0x8735,	// (0x00027258) cmail_ddmenu_btn01_pane_ParamLimits

0x8735,	// (0x00027258) cmail_ddmenu_btn01_pane

0x8752,	// (0x00027275) cmail_ddmenu_btn02_pane_ParamLimits

0x8752,	// (0x00027275) cmail_ddmenu_btn02_pane

0x8770,	// (0x00027293) cmail_ddmenu_btn03_pane_ParamLimits

0x8770,	// (0x00027293) cmail_ddmenu_btn03_pane

0x87a0,	// (0x000272c3) main_sp_fs_ctrlbar_pane_ParamLimits

0x87ba,	// (0x000272dd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d32,	// (0x00027855) list_cmail_body_pane_ParamLimits

0x8dad,	// (0x000278d0) bg_button_pane_cp12

0xe633,	// (0x0002d156) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe633,	// (0x0002d156) list_single_cmail_header_detail_pane_g3

0xe640,	// (0x0002d163) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe640,	// (0x0002d163) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf4,	// (0x0002e817) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf4,	// (0x0002e817) list_single_cmail_header_detail_pane_t

0xe736,	// (0x0002d259) phacti_term_pane_t2_ParamLimits

0xe736,	// (0x0002d259) phacti_term_pane_t2

0x0001,

0x097a,	// (0x0001f49d) phacti_term_pane_t_ParamLimits

0x097a,	// (0x0001f49d) phacti_term_pane_t

0xe9f0,	// (0x0002d513) aid_size_list_single_double

0x915b,	// (0x00027c7e) popup_ezdial_listscroll_window

0x917d,	// (0x00027ca0) popup_number_entry_window_cp01

0xaf22,	// (0x00029a45) bg_popup_call_pane_cp09

0xe9fc,	// (0x0002d51f) ezdial_list_pane

0xea04,	// (0x0002d527) scroll_pane_cp23

0xc5b0,	// (0x0002b0d3) bg_button_pane_cp028_ParamLimits

0xc5b0,	// (0x0002b0d3) bg_button_pane_cp028

0x918b,	// (0x00027cae) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x918b,	// (0x00027cae) cmail_ddmenu_btn01_pane_g1

0x919d,	// (0x00027cc0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x919d,	// (0x00027cc0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd47,	// (0x0002e86a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd47,	// (0x0002e86a) cmail_ddmenu_btn01_pane_g

0xea0c,	// (0x0002d52f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea0c,	// (0x0002d52f) cmail_ddmenu_btn01_pane_t1

0xc380,	// (0x0002aea3) bg_button_pane_cp029_ParamLimits

0xc380,	// (0x0002aea3) bg_button_pane_cp029

0x91a9,	// (0x00027ccc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91a9,	// (0x00027ccc) cmail_ddmenu_btn02_pane_g1

0x91c1,	// (0x00027ce4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91c1,	// (0x00027ce4) cmail_ddmenu_btn02_pane_t1

0x2395,	// (0x00020eb8) bg_button_pane_cp031_ParamLimits

0x2395,	// (0x00020eb8) bg_button_pane_cp031

0x91a9,	// (0x00027ccc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91a9,	// (0x00027ccc) cmail_ddmenu_btn03_pane_g1

0x91c1,	// (0x00027ce4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91c1,	// (0x00027ce4) cmail_ddmenu_btn03_pane_t1

0x6a1a,	// (0x0002553d) cell_dialer2_keypad_pane_t1_ParamLimits

0x6a34,	// (0x00025557) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6a34,	// (0x00025557) cell_dialer2_keypad_pane_t1_copy1

0x805a,	// (0x00026b7d) ncimui_group_button_pane

0xa5d8,	// (0x000290fb) main_sp_fs_calendar_pane_ParamLimits

0x8d4b,	// (0x0002786e) list_single_cmail_header_caption_pane_ParamLimits

0xe781,	// (0x0002d2a4) aid_recal_txt_sm_pane

0x9c70,	// (0x00028793) mian_recal_day_pane

0xe7c3,	// (0x0002d2e6) popup_sp_fs_cale_preview_window_ParamLimits

0xea22,	// (0x0002d545) list_recal_day_pane

0xea65,	// (0x0002d588) list_single_recal_day_pane_ParamLimits

0xea65,	// (0x0002d588) list_single_recal_day_pane

0xea77,	// (0x0002d59a) list_single_recal_day_pane_g1_ParamLimits

0xea77,	// (0x0002d59a) list_single_recal_day_pane_g1

0xea83,	// (0x0002d5a6) list_single_recal_day_pane_g2_ParamLimits

0xea83,	// (0x0002d5a6) list_single_recal_day_pane_g2

0xea8f,	// (0x0002d5b2) list_single_recal_day_pane_g3_ParamLimits

0xea8f,	// (0x0002d5b2) list_single_recal_day_pane_g3

0x91e5,	// (0x00027d08) list_single_recal_day_pane_g4_ParamLimits

0x91e5,	// (0x00027d08) list_single_recal_day_pane_g4

0xea9b,	// (0x0002d5be) list_single_recal_day_pane_g5_ParamLimits

0xea9b,	// (0x0002d5be) list_single_recal_day_pane_g5

0xeaa7,	// (0x0002d5ca) list_single_recal_day_pane_g6_ParamLimits

0xeaa7,	// (0x0002d5ca) list_single_recal_day_pane_g6

0x0004,

0xfd56,	// (0x0002e879) list_single_recal_day_pane_g_ParamLimits

0xfd56,	// (0x0002e879) list_single_recal_day_pane_g

0xeabb,	// (0x0002d5de) list_single_recal_day_pane_t1

0xeacd,	// (0x0002d5f0) list_single_recal_day_pane_t2

0x0001,

0x0a0c,	// (0x0001f52f) list_single_recal_day_pane_t

0x91fd,	// (0x00027d20) ncimui_query_button_pane_ParamLimits

0x91fd,	// (0x00027d20) ncimui_query_button_pane

0x920d,	// (0x00027d30) ncimui_query_button_pane_t1_ParamLimits

0x920d,	// (0x00027d30) ncimui_query_button_pane_t1

0xeadf,	// (0x0002d602) ncimui_query_button_pane_t2_ParamLimits

0xeadf,	// (0x0002d602) ncimui_query_button_pane_t2

0x0001,

0xfd61,	// (0x0002e884) ncimui_query_button_pane_t_ParamLimits

0xfd61,	// (0x0002e884) ncimui_query_button_pane_t

0x9220,	// (0x00027d43) query_button_pane_ParamLimits

0x9220,	// (0x00027d43) query_button_pane

0x9c70,	// (0x00028793) bg_button_pane_cp0028

0xeaf2,	// (0x0002d615) query_button_pane_t1

0x5492,	// (0x00023fb5) main_tport_pane_ParamLimits

0x8c34,	// (0x00027757) bg_popup_window_pane_cp01_ParamLimits

0x8c34,	// (0x00027757) bg_popup_window_pane_cp01

0x8c42,	// (0x00027765) heading_pane_cp08_ParamLimits

0x8c42,	// (0x00027765) heading_pane_cp08

0x8c50,	// (0x00027773) heading_pane_cp07_ParamLimits

0x8c50,	// (0x00027773) heading_pane_cp07

0x8cc1,	// (0x000277e4) cell_tport_appsw_pane_g2

0x0002,

0xfce1,	// (0x0002e804) cell_tport_appsw_pane_g

0xb085,	// (0x00029ba8) input_candi_list_open_g1

0xa9ef,	// (0x00029512) list_cale_time_pane_g6_ParamLimits

0xa9ef,	// (0x00029512) list_cale_time_pane_g6

0x5c2b,	// (0x0002474e) aid_size_touch_calib_1_ParamLimits

0x5c2b,	// (0x0002474e) aid_size_touch_calib_1

0x5c37,	// (0x0002475a) aid_size_touch_calib_2_ParamLimits

0x5c37,	// (0x0002475a) aid_size_touch_calib_2

0x5c45,	// (0x00024768) aid_size_touch_calib_3_ParamLimits

0x5c45,	// (0x00024768) aid_size_touch_calib_3

0x5c55,	// (0x00024778) aid_size_touch_calib_4_ParamLimits

0x5c55,	// (0x00024778) aid_size_touch_calib_4

0x5c63,	// (0x00024786) main_touch_calib_button_group_pane_ParamLimits

0x5c63,	// (0x00024786) main_touch_calib_button_group_pane

0x5c71,	// (0x00024794) main_touch_calib_pane_g1_ParamLimits

0x5c7d,	// (0x000247a0) main_touch_calib_pane_g2_ParamLimits

0x5c89,	// (0x000247ac) main_touch_calib_pane_g3_ParamLimits

0x5c95,	// (0x000247b8) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0002e279) main_touch_calib_pane_g_ParamLimits

0x5ca1,	// (0x000247c4) main_touch_calib_pane_t1_ParamLimits

0x5cb8,	// (0x000247db) main_touch_calib_pane_t2_ParamLimits

0x5cd1,	// (0x000247f4) main_touch_calib_pane_t3_ParamLimits

0x5ce7,	// (0x0002480a) main_touch_calib_pane_t4_ParamLimits

0x5cfd,	// (0x00024820) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0002e282) main_touch_calib_pane_t_ParamLimits

0xcb0d,	// (0x0002b630) list_single_fp_cale_pane_g3_ParamLimits

0xcb0d,	// (0x0002b630) list_single_fp_cale_pane_g3

0x1abc,	// (0x000205df) bg_button_pane_cp012_ParamLimits

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp03_ParamLimits

0x1eec,	// (0x00020a0f) cell_vitu2_function_top_pane_g1_ParamLimits

0x1abc,	// (0x000205df) bg_vkb2_func_pane_cp04_ParamLimits

0x7fe0,	// (0x00026b03) main_ncimui_button_group_pane_ParamLimits

0x7fe0,	// (0x00026b03) main_ncimui_button_group_pane

0x8048,	// (0x00026b6b) main_ncimui_pane_t3_ParamLimits

0x8048,	// (0x00026b6b) main_ncimui_pane_t3

0xe6e4,	// (0x0002d207) phacti_button_group_pane

0xe9f0,	// (0x0002d513) aid_size_list_single_double_ParamLimits

0x915b,	// (0x00027c7e) popup_ezdial_listscroll_window_ParamLimits

0x917d,	// (0x00027ca0) popup_number_entry_window_cp01_ParamLimits

0x922d,	// (0x00027d50) phacti_button_pane_ParamLimits

0x922d,	// (0x00027d50) phacti_button_pane

0x9c70,	// (0x00028793) bg_button_pane_cp14

0xeb00,	// (0x0002d623) phacti_button_pane_t1

0x923e,	// (0x00027d61) main_touch_calib_button_pane_ParamLimits

0x923e,	// (0x00027d61) main_touch_calib_button_pane

0xa404,	// (0x00028f27) bg_button_pane_cp18_ParamLimits

0xa404,	// (0x00028f27) bg_button_pane_cp18

0xeb0e,	// (0x0002d631) main_touch_calib_button_pane_t1_ParamLimits

0xeb0e,	// (0x0002d631) main_touch_calib_button_pane_t1

0xeb24,	// (0x0002d647) main_touch_calib_button_pane_t2_ParamLimits

0xeb24,	// (0x0002d647) main_touch_calib_button_pane_t2

0x0001,

0x0a16,	// (0x0001f539) main_touch_calib_button_pane_t_ParamLimits

0x0a16,	// (0x0001f539) main_touch_calib_button_pane_t

0x9c70,	// (0x00028793) cell_ncimui_button_pane

0x9c70,	// (0x00028793) bg_button_pane_cp032

0xeb42,	// (0x0002d665) cell_ncimui_button_pane_t1

0x17d1,	// (0x000202f4) image3_infobar_pane_ParamLimits

0x17d1,	// (0x000202f4) image3_infobar_pane

0x83d5,	// (0x00026ef8) fs_bigclock_status_pane_ParamLimits

0x83d5,	// (0x00026ef8) fs_bigclock_status_pane

0x83e2,	// (0x00026f05) main_fs_bigclock_clock_pane_ParamLimits

0x83e2,	// (0x00026f05) main_fs_bigclock_clock_pane

0x83f8,	// (0x00026f1b) main_fs_bigclock_indi_pane_ParamLimits

0x83f8,	// (0x00026f1b) main_fs_bigclock_indi_pane

0x842a,	// (0x00026f4d) main_fs_bigclock_swipe_pane_ParamLimits

0x842a,	// (0x00026f4d) main_fs_bigclock_swipe_pane

0x9c70,	// (0x00028793) main_fs_clock_dumped_data

0xe059,	// (0x0002cb7c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe059,	// (0x0002cb7c) list_single_fs_bigclock_indicator_pane_g1

0xe083,	// (0x0002cba6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe083,	// (0x0002cba6) list_single_fs_bigclock_indicator_pane_g2

0xe09d,	// (0x0002cbc0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe09d,	// (0x0002cbc0) list_single_fs_bigclock_indicator_pane_g3

0xe0b7,	// (0x0002cbda) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b7,	// (0x0002cbda) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0843,	// (0x0001f366) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0843,	// (0x0001f366) list_single_fs_bigclock_indicator_pane_g

0xe0e2,	// (0x0002cc05) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0e2,	// (0x0002cc05) list_single_fs_bigclock_indicator_pane_t1

0xe10a,	// (0x0002cc2d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe10a,	// (0x0002cc2d) list_single_fs_bigclock_indicator_pane_t2

0xe132,	// (0x0002cc55) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe132,	// (0x0002cc55) list_single_fs_bigclock_indicator_pane_t3

0xe15a,	// (0x0002cc7d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe15a,	// (0x0002cc7d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x084e,	// (0x0001f371) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x084e,	// (0x0001f371) list_single_fs_bigclock_indicator_pane_t

0xeb50,	// (0x0002d673) image3_infobar_fav_pane_ParamLimits

0xeb50,	// (0x0002d673) image3_infobar_fav_pane

0xeb60,	// (0x0002d683) image3_infobar_loc_pane_ParamLimits

0xeb60,	// (0x0002d683) image3_infobar_loc_pane

0xeb76,	// (0x0002d699) image3_infobar_time_pane_ParamLimits

0xeb76,	// (0x0002d699) image3_infobar_time_pane

0xc7d1,	// (0x0002b2f4) image3_infobar_time_pane_g1

0xeb86,	// (0x0002d6a9) image3_infobar_time_pane_t1

0xc7d1,	// (0x0002b2f4) image3_infobar_loc_pane_g1

0xeb94,	// (0x0002d6b7) image3_infobar_loc_pane_g2

0x0001,

0xfd66,	// (0x0002e889) image3_infobar_loc_pane_g

0xeb9c,	// (0x0002d6bf) image3_infobar_loc_pane_t1

0xc7d1,	// (0x0002b2f4) image3_infobar_fav_pane_g1

0xebaa,	// (0x0002d6cd) image3_infobar_fav_pane_g2

0x0001,

0xfd6b,	// (0x0002e88e) image3_infobar_fav_pane_g

0xebb2,	// (0x0002d6d5) fs_bigclock_status_battery_pane

0xebbb,	// (0x0002d6de) fs_bigclock_status_signal_pane

0xebc4,	// (0x0002d6e7) fs_bigclock_status_title_pane

0xebcd,	// (0x0002d6f0) fs_bigclock_status_signal_pane_g1

0xebd6,	// (0x0002d6f9) fs_bigclock_status_signal_pane_g2

0x0001,

0x0a25,	// (0x0001f548) fs_bigclock_status_signal_pane_g

0xebde,	// (0x0002d701) fs_bigclock_status_battery_pane_g1

0xebe7,	// (0x0002d70a) fs_bigclock_status_battery_pane_g2

0x0001,

0x0a2a,	// (0x0001f54d) fs_bigclock_status_battery_pane_g

0xebef,	// (0x0002d712) fs_bigclock_status_title_pane_t1

0xc7d1,	// (0x0002b2f4) main_fs_bigclock_clock_pane_g1

0xebfd,	// (0x0002d720) main_fs_bigclock_clock_pane_g2

0xebfd,	// (0x0002d720) main_fs_bigclock_clock_pane_g3

0xebfd,	// (0x0002d720) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd70,	// (0x0002e893) main_fs_bigclock_clock_pane_g

0xec05,	// (0x0002d728) main_fs_bigclock_clock_pane_t1

0xec13,	// (0x0002d736) main_fs_bigclock_clock_pane_t2

0x0001,

0x0a38,	// (0x0001f55b) main_fs_bigclock_clock_pane_t

0x924e,	// (0x00027d71) list_single_fs_bigclock_indicator_pane_ParamLimits

0x924e,	// (0x00027d71) list_single_fs_bigclock_indicator_pane

0x925f,	// (0x00027d82) list_single_fs_bigclock_pane_ParamLimits

0x925f,	// (0x00027d82) list_single_fs_bigclock_pane

0xec2b,	// (0x0002d74e) main_fs_bigclock_indicator_pane_t1

0xec3a,	// (0x0002d75d) list_single_fs_bigclock_pane_g1

0xec42,	// (0x0002d765) list_single_fs_bigclock_pane_t1

0xc7d1,	// (0x0002b2f4) main_fs_bigclock_swipe_pane_g1

0xec85,	// (0x0002d7a8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd80,	// (0x0002e8a3) main_fs_bigclock_swipe_pane_g

0xec8d,	// (0x0002d7b0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec8d,	// (0x0002d7b0) main_fs_bigclock_swipe_pane_t1

0x440e,	// (0x00022f31) call_type_pane_ParamLimits

0x9c70,	// (0x00028793) main_btmg_pane

0xe8c9,	// (0x0002d3ec) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c9,	// (0x0002d3ec) list_single_cale_mrui_row_pane_g2

0x0002,

0x09bc,	// (0x0001f4df) list_single_cale_mrui_row_pane_g_ParamLimits

0x09bc,	// (0x0001f4df) list_single_cale_mrui_row_pane_g

0xea4b,	// (0x0002d56e) list_recal_vselct_arw_lo_pane

0xea53,	// (0x0002d576) list_recal_vselct_arw_up_pane

0xea5b,	// (0x0002d57e) list_recal_vselct_pane

0x92b5,	// (0x00027dd8) btmg_button_pane

0x92c1,	// (0x00027de4) main_btmg_pane_g1

0x9c70,	// (0x00028793) bg_button_pane_cp044

0xecaa,	// (0x0002d7cd) btmg_button_pane_t1

0xc36c,	// (0x0002ae8f) aid_listscroll_gen

0xa5d8,	// (0x000290fb) main_cntbar_detail_pane

0xe608,	// (0x0002d12b) list_cmail_folder_pane

0xe618,	// (0x0002d13b) sp_fs_scroll_pane_cp03_ParamLimits

0x92c9,	// (0x00027dec) list_single_fs_dyc_pane_cp01_ParamLimits

0x92c9,	// (0x00027dec) list_single_fs_dyc_pane_cp01

0xecb8,	// (0x0002d7db) aid_size_cmail_indent

0xecc1,	// (0x0002d7e4) list_single_dyc_row_pane_cp01

0x9307,	// (0x00027e2a) cntbar_detail_list_pane_ParamLimits

0x9307,	// (0x00027e2a) cntbar_detail_list_pane

0x9347,	// (0x00027e6a) main_cntbar_detail_cont_pane_ParamLimits

0x9347,	// (0x00027e6a) main_cntbar_detail_cont_pane

0x4325,	// (0x00022e48) scroll_pane_cp032_ParamLimits

0x4325,	// (0x00022e48) scroll_pane_cp032

0x9353,	// (0x00027e76) cntbar_detail_list_event_pane_ParamLimits

0x9353,	// (0x00027e76) cntbar_detail_list_event_pane

0x9315,	// (0x00027e38) cntbar_detail_list_shct_pane

0xa889,	// (0x000293ac) aid_list_gen

0xecca,	// (0x0002d7ed) aid_scroll

0xecd3,	// (0x0002d7f6) aid_size_touch_scroll_bar

0x77fc,	// (0x0002631f) aid_list_double

0xecdc,	// (0x0002d7ff) aid_list_single

0x77ea,	// (0x0002630d) aid_list_single_lg

0xece5,	// (0x0002d808) aid_list_z_g_a_sm

0xeced,	// (0x0002d810) aid_list_z_g_d

0xecf5,	// (0x0002d818) aid_txt_z_prm

0x9363,	// (0x00027e86) aid_txt_z_prm_cp01

0x9371,	// (0x00027e94) aid_txt_z_sec

0x937f,	// (0x00027ea2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x937f,	// (0x00027ea2) main_cntbar_detail_cont_pane_g1

0x938c,	// (0x00027eaf) main_cntbar_detail_cont_pane_g2_ParamLimits

0x938c,	// (0x00027eaf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd85,	// (0x0002e8a8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd85,	// (0x0002e8a8) main_cntbar_detail_cont_pane_g

0xed03,	// (0x0002d826) main_cntbar_detail_cont_pane_t1

0xed11,	// (0x0002d834) main_cntbar_detail_cont_pane_t2

0xed1f,	// (0x0002d842) main_cntbar_detail_cont_pane_t3

0x0002,

0x0a53,	// (0x0001f576) main_cntbar_detail_cont_pane_t

0x9398,	// (0x00027ebb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9398,	// (0x00027ebb) cell_cntbar_detail_list_shct_pane

0xed2d,	// (0x0002d850) cntbar_detail_list_shct_pane_g1

0xed36,	// (0x0002d859) cntbar_detail_list_shct_pane_g2

0x0001,

0x0a5a,	// (0x0001f57d) cntbar_detail_list_shct_pane_g

0x93ac,	// (0x00027ecf) cntbar_detail_list_event_pane_g1_ParamLimits

0x93ac,	// (0x00027ecf) cntbar_detail_list_event_pane_g1

0x93b8,	// (0x00027edb) cntbar_detail_list_event_pane_g2_ParamLimits

0x93b8,	// (0x00027edb) cntbar_detail_list_event_pane_g2

0x0005,

0xfd8a,	// (0x0002e8ad) cntbar_detail_list_event_pane_g_ParamLimits

0xfd8a,	// (0x0002e8ad) cntbar_detail_list_event_pane_g

0x9426,	// (0x00027f49) cntbar_detail_list_event_pane_t1_ParamLimits

0x9426,	// (0x00027f49) cntbar_detail_list_event_pane_t1

0x943b,	// (0x00027f5e) cntbar_detail_list_event_pane_t2_ParamLimits

0x943b,	// (0x00027f5e) cntbar_detail_list_event_pane_t2

0x0002,

0xfd97,	// (0x0002e8ba) cntbar_detail_list_event_pane_t_ParamLimits

0xfd97,	// (0x0002e8ba) cntbar_detail_list_event_pane_t

0xc7d1,	// (0x0002b2f4) cell_cntbar_detail_list_shct_pane_g1

0x4772,	// (0x00023295) navi_pane_mv_g3

0xa5d8,	// (0x000290fb) main_cntbar_detail_pane_ParamLimits

0x9c70,	// (0x00028793) main_notif_wgt_pane

0x1508,	// (0x0002002b) aid_tch_main_mp4_pane_g4

0x1747,	// (0x0002026a) popup_slider_window_cp02

0xea41,	// (0x0002d564) list_recal_day_event_pane

0x92e7,	// (0x00027e0a) cntbar_detail_btn_pane_ParamLimits

0x92e7,	// (0x00027e0a) cntbar_detail_btn_pane

0x92f7,	// (0x00027e1a) cntbar_detail_btn_pane_cp01_ParamLimits

0x92f7,	// (0x00027e1a) cntbar_detail_btn_pane_cp01

0x9315,	// (0x00027e38) cntbar_detail_list_shct_pane_ParamLimits

0x9321,	// (0x00027e44) cntbar_detail_pane_g1_ParamLimits

0x9321,	// (0x00027e44) cntbar_detail_pane_g1

0x9331,	// (0x00027e54) cntbar_detail_pane_t1_ParamLimits

0x9331,	// (0x00027e54) cntbar_detail_pane_t1

0x93c4,	// (0x00027ee7) cntbar_detail_list_event_pane_g3_ParamLimits

0x93c4,	// (0x00027ee7) cntbar_detail_list_event_pane_g3

0x93dc,	// (0x00027eff) cntbar_detail_list_event_pane_g4_ParamLimits

0x93dc,	// (0x00027eff) cntbar_detail_list_event_pane_g4

0x93f4,	// (0x00027f17) cntbar_detail_list_event_pane_g5_ParamLimits

0x93f4,	// (0x00027f17) cntbar_detail_list_event_pane_g5

0x940c,	// (0x00027f2f) cntbar_detail_list_event_pane_g6_ParamLimits

0x940c,	// (0x00027f2f) cntbar_detail_list_event_pane_g6

0x9450,	// (0x00027f73) cntbar_detail_list_event_pane_t3_ParamLimits

0x9450,	// (0x00027f73) cntbar_detail_list_event_pane_t3

0x9462,	// (0x00027f85) popup_notif_wgt_window_ParamLimits

0x9462,	// (0x00027f85) popup_notif_wgt_window

0x9472,	// (0x00027f95) popup_submenu_window_cp01_ParamLimits

0x9472,	// (0x00027f95) popup_submenu_window_cp01

0xaf22,	// (0x00029a45) bg_popup_window_pane_cp10

0xed3f,	// (0x0002d862) listscroll_notif_wgt_pane

0xed51,	// (0x0002d874) list_notif_wgt_window

0xed5a,	// (0x0002d87d) scroll_pane_cp033

0x9482,	// (0x00027fa5) list_notif_wgt_row_pane_ParamLimits

0x9482,	// (0x00027fa5) list_notif_wgt_row_pane

0xed63,	// (0x0002d886) aid_size_list_notif_wgt_del

0xed70,	// (0x0002d893) list_notif_wgt_row_pane_g1

0xed7c,	// (0x0002d89f) list_notif_wgt_row_pane_g2

0xed88,	// (0x0002d8ab) list_notif_wgt_row_pane_g3

0x0002,

0xfd9e,	// (0x0002e8c1) list_notif_wgt_row_pane_g

0xed95,	// (0x0002d8b8) list_notif_wgt_row_pane_t1

0xedaa,	// (0x0002d8cd) list_notif_wgt_row_pane_t2

0xedbc,	// (0x0002d8df) list_notif_wgt_row_pane_t3

0x0002,

0xfda5,	// (0x0002e8c8) list_notif_wgt_row_pane_t

0xd49f,	// (0x0002bfc2) list_recal_day_event_pane_g1

0xedce,	// (0x0002d8f1) list_recal_day_event_pane_t1

0x9c70,	// (0x00028793) bg_button_pane_cp045

0xeddd,	// (0x0002d900) cntbar_detail_btn_pane_t1

0xc380,	// (0x0002aea3) main_callh_pane_ParamLimits

0xc380,	// (0x0002aea3) main_callh_pane

0x9c70,	// (0x00028793) main_coverflow0_pane

0x9c70,	// (0x00028793) main_wgtman_pane

0x8442,	// (0x00026f65) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8442,	// (0x00026f65) main_fs_bigclock_unlock_btn_pane

0x8cb9,	// (0x000277dc) bg_button_pane_cp16

0x8cc9,	// (0x000277ec) cell_tport_appsw_pane_g3

0x9493,	// (0x00027fb6) cf0_flow_pane_ParamLimits

0x9493,	// (0x00027fb6) cf0_flow_pane

0xedeb,	// (0x0002d90e) listscroll_cf0_pane

0xedf6,	// (0x0002d919) main_cf0_pane_g1

0x94a2,	// (0x00027fc5) main_cf0_pane_t1_ParamLimits

0x94a2,	// (0x00027fc5) main_cf0_pane_t1

0x94b6,	// (0x00027fd9) main_cf0_pane_t2_ParamLimits

0x94b6,	// (0x00027fd9) main_cf0_pane_t2

0x0001,

0xfdb1,	// (0x0002e8d4) main_cf0_pane_t_ParamLimits

0xfdb1,	// (0x0002e8d4) main_cf0_pane_t

0xee08,	// (0x0002d92b) scroll_pane_cp11

0x94ca,	// (0x00027fed) cf0_flow_pane_g1

0x94d2,	// (0x00027ff5) cf0_flow_pane_g2

0x0001,

0xfdb6,	// (0x0002e8d9) cf0_flow_pane_g

0x94da,	// (0x00027ffd) cf0_flow_pane_t1

0x9c70,	// (0x00028793) main_call6_pane

0x9c70,	// (0x00028793) main_calllock_pane

0x94e8,	// (0x0002800b) call6_btn_grp_pane_ParamLimits

0x94e8,	// (0x0002800b) call6_btn_grp_pane

0x94f5,	// (0x00028018) call6_pane_g1_ParamLimits

0x94f5,	// (0x00028018) call6_pane_g1

0x9505,	// (0x00028028) popup_call6_1st_window_ParamLimits

0x9505,	// (0x00028028) popup_call6_1st_window

0x9513,	// (0x00028036) popup_call6_2nd_window_ParamLimits

0x9513,	// (0x00028036) popup_call6_2nd_window

0x9521,	// (0x00028044) cell_call6_btn_pane_ParamLimits

0x9521,	// (0x00028044) cell_call6_btn_pane

0xaf22,	// (0x00029a45) bg_popup_call2_in_pane_cp03

0xee13,	// (0x0002d936) popup_call6_1st_window_g1

0xee1b,	// (0x0002d93e) popup_call6_1st_window_g2

0xee23,	// (0x0002d946) popup_call6_1st_window_g3

0x0002,

0xfdbb,	// (0x0002e8de) popup_call6_1st_window_g

0xee2b,	// (0x0002d94e) popup_call6_1st_window_t1

0xee3a,	// (0x0002d95d) popup_call6_1st_window_t2

0xee4a,	// (0x0002d96d) popup_call6_1st_window_t3

0x0002,

0xfdc2,	// (0x0002e8e5) popup_call6_1st_window_t

0xaf22,	// (0x00029a45) bg_popup_call2_in_pane_cp04

0xee13,	// (0x0002d936) popup_call6_2nd_window_g1

0xee1b,	// (0x0002d93e) popup_call6_2nd_window_g2

0xee23,	// (0x0002d946) popup_call6_2nd_window_g3

0x0002,

0xfdbb,	// (0x0002e8de) popup_call6_2nd_window_g

0xee2b,	// (0x0002d94e) popup_call6_2nd_window_t1

0x9c70,	// (0x00028793) bg_button_pane_cp15

0xee5a,	// (0x0002d97d) cell_call6_btn_pane_g1

0xee63,	// (0x0002d986) cell_call6_btn_pane_t1

0x9530,	// (0x00028053) listscroll_wgtman_pane_ParamLimits

0x9530,	// (0x00028053) listscroll_wgtman_pane

0x954c,	// (0x0002806f) wgtman_btn_pane_ParamLimits

0x954c,	// (0x0002806f) wgtman_btn_pane

0xadce,	// (0x000298f1) aid_scroll_copy1

0xee72,	// (0x0002d995) list_wgtman_pane

0x9581,	// (0x000280a4) wgtman_btn_pane_g1_ParamLimits

0x9581,	// (0x000280a4) wgtman_btn_pane_g1

0x95a9,	// (0x000280cc) wgtman_btn_pane_t1_ParamLimits

0x95a9,	// (0x000280cc) wgtman_btn_pane_t1

0xee7c,	// (0x0002d99f) wgtman_btn_pane_t2_ParamLimits

0xee7c,	// (0x0002d99f) wgtman_btn_pane_t2

0x0001,

0xfdc9,	// (0x0002e8ec) wgtman_btn_pane_t_ParamLimits

0xfdc9,	// (0x0002e8ec) wgtman_btn_pane_t

0x95e0,	// (0x00028103) listrow_wgtman_pane_ParamLimits

0x95e0,	// (0x00028103) listrow_wgtman_pane

0x95f4,	// (0x00028117) listrow_wgtman_pane_g1

0x9601,	// (0x00028124) listrow_wgtman_pane_g2

0x0001,

0xfdce,	// (0x0002e8f1) listrow_wgtman_pane_g

0x961f,	// (0x00028142) listrow_wgtman_pane_t1

0x9637,	// (0x0002815a) listrow_wgtman_pane_t2

0x0001,

0xfdd3,	// (0x0002e8f6) listrow_wgtman_pane_t

0x965d,	// (0x00028180) wait_bar_pane_cp09

0xee93,	// (0x0002d9b6) main_calllock_btn_pane

0xee9d,	// (0x0002d9c0) main_calllock_pane_g1

0x9c70,	// (0x00028793) bg_button_pane_cp17

0xeea9,	// (0x0002d9cc) main_calllock_btn_pane_g1

0xeeb2,	// (0x0002d9d5) main_calllock_btn_pane_t1

0x9c70,	// (0x00028793) main_dialer3_pane

0x9c70,	// (0x00028793) main_fmrd2_pane

0xc7d1,	// (0x0002b2f4) main_fs_bigclock_unlock_btn_pane_g1

0xeec9,	// (0x0002d9ec) main_fs_bigclock_unlock_btn_pane_t1

0x966f,	// (0x00028192) area_fmrd2_info_pane_ParamLimits

0x966f,	// (0x00028192) area_fmrd2_info_pane

0x967b,	// (0x0002819e) area_fmrd2_visual_pane_ParamLimits

0x967b,	// (0x0002819e) area_fmrd2_visual_pane

0x9689,	// (0x000281ac) fmrd2_indi_pane_ParamLimits

0x9689,	// (0x000281ac) fmrd2_indi_pane

0x9696,	// (0x000281b9) area_fmrd2_visual_pane_g1

0x969e,	// (0x000281c1) area_fmrd2_visual_pane_t1

0x96ae,	// (0x000281d1) area_fmrd2_visual_pane_t2

0x96be,	// (0x000281e1) area_fmrd2_visual_pane_t3

0x0002,

0xfddd,	// (0x0002e900) area_fmrd2_visual_pane_t

0x96ce,	// (0x000281f1) area_fmrd2_info_pane_g1

0x96d6,	// (0x000281f9) area_fmrd2_info_pane_t1

0x96e6,	// (0x00028209) area_fmrd2_info_pane_t2

0x96f6,	// (0x00028219) area_fmrd2_info_pane_t3

0x9706,	// (0x00028229) area_fmrd2_info_pane_t4

0x0003,

0xfde4,	// (0x0002e907) area_fmrd2_info_pane_t

0x9716,	// (0x00028239) fmrd2_indi_pane_t1

0x9726,	// (0x00028249) fmrd2_indi_pane_t2

0x9736,	// (0x00028259) fmrd2_indi_pane_t3

0x0002,

0xfded,	// (0x0002e910) fmrd2_indi_pane_t

0xe0c6,	// (0x0002cbe9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c6,	// (0x0002cbe9) list_single_fs_bigclock_indicator_pane_g5

0xe16f,	// (0x0002cc92) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe16f,	// (0x0002cc92) list_single_fs_bigclock_indicator_pane_t5

0x8ecf,	// (0x000279f2) aid_cell_bcale_month_pane_ParamLimits

0x8ecf,	// (0x000279f2) aid_cell_bcale_month_pane

0x8eed,	// (0x00027a10) bcale_month_pane_ParamLimits

0x8eed,	// (0x00027a10) bcale_month_pane

0x8f09,	// (0x00027a2c) bcale_preview_pane_ParamLimits

0x8f09,	// (0x00027a2c) bcale_preview_pane

0xec42,	// (0x0002d765) list_single_fs_bigclock_pane_t1_ParamLimits

0xec61,	// (0x0002d784) list_single_fs_bigclock_pane_t2_ParamLimits

0xec61,	// (0x0002d784) list_single_fs_bigclock_pane_t2

0x0001,

0x0a44,	// (0x0001f567) list_single_fs_bigclock_pane_t_ParamLimits

0x0a44,	// (0x0001f567) list_single_fs_bigclock_pane_t

0xeec1,	// (0x0002d9e4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd8,	// (0x0002e8fb) main_fs_bigclock_unlock_btn_pane_g

0x9746,	// (0x00028269) aid_dia3_key_size_ParamLimits

0x9746,	// (0x00028269) aid_dia3_key_size

0x9752,	// (0x00028275) aid_dia3_listrow_size_ParamLimits

0x9752,	// (0x00028275) aid_dia3_listrow_size

0x9762,	// (0x00028285) dia3_keypad_fun_pane_ParamLimits

0x9762,	// (0x00028285) dia3_keypad_fun_pane

0x9772,	// (0x00028295) dia3_keypad_num_pane_ParamLimits

0x9772,	// (0x00028295) dia3_keypad_num_pane

0x9782,	// (0x000282a5) dia3_listscroll_pane_ParamLimits

0x9782,	// (0x000282a5) dia3_listscroll_pane

0x9790,	// (0x000282b3) dia3_numentry_pane_ParamLimits

0x9790,	// (0x000282b3) dia3_numentry_pane

0xeed7,	// (0x0002d9fa) dia3_list_pane

0xeee2,	// (0x0002da05) scroll_pane_cp12

0x9c70,	// (0x00028793) bg_dia3_numentry_pane

0x979e,	// (0x000282c1) dia3_numentry_pane_t1

0x97ad,	// (0x000282d0) cell_dia3_key_num_pane

0x97b5,	// (0x000282d8) cell_dia3_key0_fun_pane_ParamLimits

0x97b5,	// (0x000282d8) cell_dia3_key0_fun_pane

0x97c2,	// (0x000282e5) cell_dia3_key1_fun_pane_ParamLimits

0x97c2,	// (0x000282e5) cell_dia3_key1_fun_pane

0x97cf,	// (0x000282f2) dia3_listrow_pane

0xddc4,	// (0x0002c8e7) bg_dia3_numentry_pane_g1

0x9c70,	// (0x00028793) bg_button_pane_cp21

0xeeed,	// (0x0002da10) cell_dia3_key_num_pane_t1

0xeefb,	// (0x0002da1e) cell_dia3_key_num_pane_t2

0xef0a,	// (0x0002da2d) cell_dia3_key_num_pane_t3

0xef19,	// (0x0002da3c) cell_dia3_key_num_pane_t4

0x0003,

0xfdf4,	// (0x0002e917) cell_dia3_key_num_pane_t

0x9c70,	// (0x00028793) bg_button_pane_cp19

0x97dc,	// (0x000282ff) cell_dia3_key0_fun_pane_g1

0x9c70,	// (0x00028793) bg_button_pane_cp20

0x97e4,	// (0x00028307) cell_dia3_key1_fun_pane_g1

0x97ec,	// (0x0002830f) area_left_week_number_pane

0x97ff,	// (0x00028322) area_top_day_name_pane

0x980d,	// (0x00028330) frame_month_view_pane

0xef28,	// (0x0002da4b) grid_month_view_pane

0x9822,	// (0x00028345) cell_top_day_name_pane_ParamLimits

0x9822,	// (0x00028345) cell_top_day_name_pane

0x983e,	// (0x00028361) cell_area_left_week_number_pane_ParamLimits

0x983e,	// (0x00028361) cell_area_left_week_number_pane

0x985f,	// (0x00028382) cell_month_view_pane_ParamLimits

0x985f,	// (0x00028382) cell_month_view_pane

0xef36,	// (0x0002da59) frm_month_g1

0x988b,	// (0x000283ae) frm_month_g2

0x989c,	// (0x000283bf) frm_month_g3

0x98ad,	// (0x000283d0) frm_month_g4

0x98be,	// (0x000283e1) frm_month_g5

0x98cf,	// (0x000283f2) frm_month_g6

0x98e2,	// (0x00028405) frm_month_g7

0xef43,	// (0x0002da66) frm_month_g8

0x98f5,	// (0x00028418) frm_month_g9

0x9902,	// (0x00028425) frm_month_g10

0x990f,	// (0x00028432) frm_month_g11

0x991c,	// (0x0002843f) frm_month_g12

0x9929,	// (0x0002844c) frm_month_g13

0x9938,	// (0x0002845b) frm_month_g14

0x9947,	// (0x0002846a) frm_month_g15

0x9956,	// (0x00028479) frm_month_g16

0x000f,

0xfdfd,	// (0x0002e920) frm_month_g

0xef50,	// (0x0002da73) cell_top_day_name_pane_t1

0x9965,	// (0x00028488) cell_area_left_week_number_pane_g1

0x9974,	// (0x00028497) cell_area_left_week_number_pane_t1

0xca01,	// (0x0002b524) cell_month_view_pane_g1

0x998a,	// (0x000284ad) cell_month_view_pane_t1

0x9c70,	// (0x00028793) main_fps_pane

0xe392,	// (0x0002ceb5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe392,	// (0x0002ceb5) cmail_ddmenu_btn02_pane_cp1

0xe3ae,	// (0x0002ced1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3ae,	// (0x0002ced1) cmail_ddmenu_btn02_pane_cp2

0x91b5,	// (0x00027cd8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91b5,	// (0x00027cd8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd4c,	// (0x0002e86f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd4c,	// (0x0002e86f) cmail_ddmenu_btn02_pane_g

0x91d3,	// (0x00027cf6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91d3,	// (0x00027cf6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd51,	// (0x0002e874) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd51,	// (0x0002e874) cmail_ddmenu_btn02_pane_t

0x99a0,	// (0x000284c3) fps_text_pane_ParamLimits

0x99a0,	// (0x000284c3) fps_text_pane

0x99ad,	// (0x000284d0) main_fps_pane_g1_ParamLimits

0x99ad,	// (0x000284d0) main_fps_pane_g1

0x99b9,	// (0x000284dc) wait_bar_pane_cp010_ParamLimits

0x99b9,	// (0x000284dc) wait_bar_pane_cp010

0x99c5,	// (0x000284e8) fps_text_pane_t1_ParamLimits

0x99c5,	// (0x000284e8) fps_text_pane_t1

0x6b6f,	// (0x00025692) cam4_image_uncrop_pane_g1

0x6b78,	// (0x0002569b) cam4_image_uncrop_pane_g2

0x6b81,	// (0x000256a4) cam4_image_uncrop_pane_g3

0x6b8a,	// (0x000256ad) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002e411) cam4_image_uncrop_pane_g

0x97cf,	// (0x000282f2) dia3_listrow_pane_ParamLimits

0x9c70,	// (0x00028793) main_phob2_pane

0x8c9b,	// (0x000277be) cell_tport_appsw_pane_cp02_ParamLimits

0x8c9b,	// (0x000277be) cell_tport_appsw_pane_cp02

0x8caa,	// (0x000277cd) cell_tport_appsw_pane_cp03_ParamLimits

0x8caa,	// (0x000277cd) cell_tport_appsw_pane_cp03

0x9c70,	// (0x00028793) phob2_contact_card_pane

0x9c70,	// (0x00028793) phob2_listscroll_pane

0xef63,	// (0x0002da86) phob2_list_pane

0xef6b,	// (0x0002da8e) scroll_pane_cp034

0x99de,	// (0x00028501) phob2_cc_data_pane_ParamLimits

0x99de,	// (0x00028501) phob2_cc_data_pane

0x99fa,	// (0x0002851d) phob2_cc_listscroll_pane_ParamLimits

0x99fa,	// (0x0002851d) phob2_cc_listscroll_pane

0x9a16,	// (0x00028539) list_double_large_graphic_phob2_pane_ParamLimits

0x9a16,	// (0x00028539) list_double_large_graphic_phob2_pane

0x9a2e,	// (0x00028551) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a2e,	// (0x00028551) list_double_large_graphic_phob2_pane_g1

0x9a44,	// (0x00028567) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a44,	// (0x00028567) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe1e,	// (0x0002e941) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1e,	// (0x0002e941) list_double_large_graphic_phob2_pane_g

0x9a50,	// (0x00028573) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a50,	// (0x00028573) list_double_large_graphic_phob2_pane_t1

0x9a65,	// (0x00028588) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a65,	// (0x00028588) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe23,	// (0x0002e946) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe23,	// (0x0002e946) list_double_large_graphic_phob2_pane_t

0x9c70,	// (0x00028793) list_highlight_pane_cp024

0x9a77,	// (0x0002859a) phob2_cc_button_pane

0x9a7f,	// (0x000285a2) phob2_cc_data_pane_g1_ParamLimits

0x9a7f,	// (0x000285a2) phob2_cc_data_pane_g1

0x9a8b,	// (0x000285ae) phob2_cc_data_pane_g2_ParamLimits

0x9a8b,	// (0x000285ae) phob2_cc_data_pane_g2

0x0001,

0xfe28,	// (0x0002e94b) phob2_cc_data_pane_g_ParamLimits

0xfe28,	// (0x0002e94b) phob2_cc_data_pane_g

0x9a97,	// (0x000285ba) phob2_cc_data_pane_t1_ParamLimits

0x9a97,	// (0x000285ba) phob2_cc_data_pane_t1

0x9aa9,	// (0x000285cc) phob2_cc_data_pane_t2_ParamLimits

0x9aa9,	// (0x000285cc) phob2_cc_data_pane_t2

0x9abb,	// (0x000285de) phob2_cc_data_pane_t3_ParamLimits

0x9abb,	// (0x000285de) phob2_cc_data_pane_t3

0x0002,

0xfe2d,	// (0x0002e950) phob2_cc_data_pane_t_ParamLimits

0xfe2d,	// (0x0002e950) phob2_cc_data_pane_t

0xef73,	// (0x0002da96) phob2_cc_list_pane_ParamLimits

0xef73,	// (0x0002da96) phob2_cc_list_pane

0xd7a5,	// (0x0002c2c8) scroll_pane_cp035_ParamLimits

0xd7a5,	// (0x0002c2c8) scroll_pane_cp035

0xa5d8,	// (0x000290fb) bg_button_pane_cp033

0xef7f,	// (0x0002daa2) phob2_cc_button_pane_g1

0xef9f,	// (0x0002dac2) phob2_cc_button_pane_t1

0xefb4,	// (0x0002dad7) phob2_cc_button_pane_t2

0x0001,

0x0b09,	// (0x0001f62c) phob2_cc_button_pane_t

0x9acd,	// (0x000285f0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9acd,	// (0x000285f0) list_double_large_graphic_phob2_cc_pane

0x9ae9,	// (0x0002860c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ae9,	// (0x0002860c) list_double_large_graphic_phob2_cc_pane_g1

0x9afa,	// (0x0002861d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9afa,	// (0x0002861d) list_double_large_graphic_phob2_cc_pane_g2

0x9b09,	// (0x0002862c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b09,	// (0x0002862c) list_double_large_graphic_phob2_cc_pane_g3

0x9b18,	// (0x0002863b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b18,	// (0x0002863b) list_double_large_graphic_phob2_cc_pane_g4

0x9b29,	// (0x0002864c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b29,	// (0x0002864c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe34,	// (0x0002e957) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe34,	// (0x0002e957) list_double_large_graphic_phob2_cc_pane_g

0x9b38,	// (0x0002865b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b38,	// (0x0002865b) list_double_large_graphic_phob2_cc_pane_t1

0x9b61,	// (0x00028684) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b61,	// (0x00028684) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe3f,	// (0x0002e962) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe3f,	// (0x0002e962) list_double_large_graphic_phob2_cc_pane_t

0xefc6,	// (0x0002dae9) list_highlight_pane_cp025_ParamLimits

0xefc6,	// (0x0002dae9) list_highlight_pane_cp025

0xa5d8,	// (0x000290fb) bg_button_pane_cp033_ParamLimits

0xef7f,	// (0x0002daa2) phob2_cc_button_pane_g1_ParamLimits

0xef9f,	// (0x0002dac2) phob2_cc_button_pane_t1_ParamLimits

0xefb4,	// (0x0002dad7) phob2_cc_button_pane_t2_ParamLimits

0x0b09,	// (0x0001f62c) phob2_cc_button_pane_t_ParamLimits

0x23a3,	// (0x00020ec6) popup_wgtman_window

0xd300,	// (0x0002be23) scroll_pane_cp038

0x9569,	// (0x0002808c) wgtman_btn_pane_cp_01_ParamLimits

0x9569,	// (0x0002808c) wgtman_btn_pane_cp_01

0xefd4,	// (0x0002daf7) wgtman_content_pane

0xefdd,	// (0x0002db00) wgtman_heading_pane

0x9c70,	// (0x00028793) bg_heading_pane_cp02

0xefe6,	// (0x0002db09) wgtman_heading_pane_g1

0xefee,	// (0x0002db11) wgtman_heading_pane_t1

0xeffc,	// (0x0002db1f) scroll_pane_cp036

0xf004,	// (0x0002db27) wgtman_list_pane

0xf00c,	// (0x0002db2f) wgtman_list_pane_t1_ParamLimits

0xf00c,	// (0x0002db2f) wgtman_list_pane_t1

0x192d,	// (0x00020450) cam4_grid_pane

0x7345,	// (0x00025e68) bg_button_pane_cp015_ParamLimits

0x7357,	// (0x00025e7a) bg_button_pane_cp016_ParamLimits

0x736a,	// (0x00025e8d) bg_button_pane_cp017_ParamLimits

0x73c0,	// (0x00025ee3) popup_vitu2_query_window_g3_ParamLimits

0x73c0,	// (0x00025ee3) popup_vitu2_query_window_g3

0x747f,	// (0x00025fa2) popup_vitu2_query_window_t6_ParamLimits

0x747f,	// (0x00025fa2) popup_vitu2_query_window_t6

0x74aa,	// (0x00025fcd) popup_vitu2_query_window_t7_ParamLimits

0x74aa,	// (0x00025fcd) popup_vitu2_query_window_t7

0xef8b,	// (0x0002daae) cam4_grid_pane_g1

0xef94,	// (0x0002dab7) cam4_grid_pane_g2

0xf026,	// (0x0002db49) cam4_grid_pane_g3

0xf02f,	// (0x0002db52) cam4_grid_pane_g4

0x0003,

0xfe44,	// (0x0002e967) cam4_grid_pane_g

0x315c,	// (0x00021c7f) aid_placing_vt_slider_lsc_ParamLimits

0x348f,	// (0x00021fb2) vidtel_button_pane_ParamLimits

0x348f,	// (0x00021fb2) vidtel_button_pane

0xf03a,	// (0x0002db5d) bg_button_pane_cp034

0x9b8a,	// (0x000286ad) vidtel_button_pane_g1

0xf044,	// (0x0002db67) vidtel_button_pane_t1

0xd463,	// (0x0002bf86) aid_size_vtel_slider_touch

0xd7a5,	// (0x0002c2c8) scroll_pane_cp039

0xde02,	// (0x0002c925) ncim_query_button_pane_cp01_ParamLimits

0xde21,	// (0x0002c944) ncimui_query_pane_g1_ParamLimits

0xa5d8,	// (0x000290fb) input_focus_pane_cp012_ParamLimits

0xde46,	// (0x0002c969) ncim_query_entry_pane_t1_ParamLimits

0xd7a5,	// (0x0002c2c8) scroll_pane_cp039_ParamLimits

0x46e4,	// (0x00023207) navi_pane_bcale_mc_g1

0x46ec,	// (0x0002320f) navi_pane_bcale_mc_t1

0xe3eb,	// (0x0002cf0e) main_sp_fs_email_pane_g1

0xe3f7,	// (0x0002cf1a) main_sp_fs_email_pane_g2

0x0001,

0x08b4,	// (0x0001f3d7) main_sp_fs_email_pane_g

0xe8d5,	// (0x0002d3f8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d5,	// (0x0002d3f8) list_single_cale_mrui_row_pane_g3

0x91f3,	// (0x00027d16) list_single_recal_day_pane_g5_event_pane

0xeab3,	// (0x0002d5d6) list_single_recal_day_pane_g7

0xf052,	// (0x0002db75) list_recal_day_event_pane_cp01

0xf05b,	// (0x0002db7e) list_recal_vselct_arw_lo_pane_cp01

0xf063,	// (0x0002db86) list_recal_vselct_arw_up_pane_cp01

0xf06b,	// (0x0002db8e) list_recal_vselct_pane_cp01

0xd49f,	// (0x0002bfc2) list_recal_day_event_pane_cp01_g1

0xf075,	// (0x0002db98) list_recal_day_event_pane_cp01_t1

0xeabb,	// (0x0002d5de) list_single_recal_day_pane_t1_ParamLimits

0xeacd,	// (0x0002d5f0) list_single_recal_day_pane_t2_ParamLimits

0x0a0c,	// (0x0001f52f) list_single_recal_day_pane_t_ParamLimits

0xa33f,	// (0x00028e62) bg_notes_pane_ParamLimits

0xa3e2,	// (0x00028f05) list_notes_pane_ParamLimits

0x2672,	// (0x00021195) scroll_pane_cp06_ParamLimits

0xa404,	// (0x00028f27) main_notes_pane_ParamLimits

0x9c70,	// (0x00028793) main_welc_pane

0x9b92,	// (0x000286b5) main_welc_body_pane_ParamLimits

0x9b92,	// (0x000286b5) main_welc_body_pane

0x9bad,	// (0x000286d0) main_welc_opti_pane_ParamLimits

0x9bad,	// (0x000286d0) main_welc_opti_pane

0x9be2,	// (0x00028705) main_welc_pane_t1_ParamLimits

0x9be2,	// (0x00028705) main_welc_pane_t1

0x9c00,	// (0x00028723) main_welc_body_row_pane_ParamLimits

0x9c00,	// (0x00028723) main_welc_body_row_pane

0x9c1a,	// (0x0002873d) main_welc_opti_row_pane_ParamLimits

0x9c1a,	// (0x0002873d) main_welc_opti_row_pane

0xf083,	// (0x0002dba6) main_welc_opti_row_pane_g1

0xf08b,	// (0x0002dbae) main_welc_opti_row_pane_t1

0xf09a,	// (0x0002dbbd) main_welc_body_row_pane_t1

0xed49,	// (0x0002d86c) popup_notif_wgt_heading_pane

0xed63,	// (0x0002d886) aid_size_list_notif_wgt_del_ParamLimits

0xed70,	// (0x0002d893) list_notif_wgt_row_pane_g1_ParamLimits

0xed7c,	// (0x0002d89f) list_notif_wgt_row_pane_g2_ParamLimits

0xed88,	// (0x0002d8ab) list_notif_wgt_row_pane_g3_ParamLimits

0xfd9e,	// (0x0002e8c1) list_notif_wgt_row_pane_g_ParamLimits

0xed95,	// (0x0002d8b8) list_notif_wgt_row_pane_t1_ParamLimits

0xedaa,	// (0x0002d8cd) list_notif_wgt_row_pane_t2_ParamLimits

0xedbc,	// (0x0002d8df) list_notif_wgt_row_pane_t3_ParamLimits

0xfda5,	// (0x0002e8c8) list_notif_wgt_row_pane_t_ParamLimits

0x95f4,	// (0x00028117) listrow_wgtman_pane_g1_ParamLimits

0x9601,	// (0x00028124) listrow_wgtman_pane_g2_ParamLimits

0xfdce,	// (0x0002e8f1) listrow_wgtman_pane_g_ParamLimits

0x961f,	// (0x00028142) listrow_wgtman_pane_t1_ParamLimits

0x9637,	// (0x0002815a) listrow_wgtman_pane_t2_ParamLimits

0xfdd3,	// (0x0002e8f6) listrow_wgtman_pane_t_ParamLimits

0x965d,	// (0x00028180) wait_bar_pane_cp09_ParamLimits

0x9c70,	// (0x00028793) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0002dbcc) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0002dbd4) popup_notif_wgt_heading_pane_t1

0x9c70,	// (0x00028793) main_vids_pane

0x9c70,	// (0x00028793) vids_listscroll_pane

0x9c2b,	// (0x0002874e) scroll_pane_cp040

0x9c70,	// (0x00028793) vids_list_pane

0x9c36,	// (0x00028759) vids_list_double_pane_ParamLimits

0x9c36,	// (0x00028759) vids_list_double_pane

0x9c49,	// (0x0002876c) vids_list_double_pane_g1

0x9c52,	// (0x00028775) vids_list_double_pane_t1

0x9c62,	// (0x00028785) vids_list_double_pane_t2

0x0001,

0xfe52,	// (0x0002e975) vids_list_double_pane_t

0xa5d8,	// (0x000290fb) main_ncimui_pane_ParamLimits

0x7ff8,	// (0x00026b1b) main_ncimui_pane_g1_ParamLimits

0x8006,	// (0x00026b29) main_ncimui_pane_g2_ParamLimits

0x8006,	// (0x00026b29) main_ncimui_pane_g2

0x0001,

0xfbc1,	// (0x0002e6e4) main_ncimui_pane_g_ParamLimits

0xfbc1,	// (0x0002e6e4) main_ncimui_pane_g

0x9bc8,	// (0x000286eb) main_welc_pane_g1_ParamLimits

0x9bc8,	// (0x000286eb) main_welc_pane_g1

0x9bd4,	// (0x000286f7) main_welc_pane_g2_ParamLimits

0x9bd4,	// (0x000286f7) main_welc_pane_g2

0x0001,

0xfe4d,	// (0x0002e970) main_welc_pane_g_ParamLimits

0xfe4d,	// (0x0002e970) main_welc_pane_g

0xa33f,	// (0x00028e62) listscroll_mce_pane_ParamLimits

0x47ae,	// (0x000232d1) wait_bar_pane_cp10

0xc374,	// (0x0002ae97) main_cale_day_pane_ParamLimits

0xc374,	// (0x0002ae97) main_cale_week_pane_ParamLimits

0xa33f,	// (0x00028e62) main_messa_pane_ParamLimits

0x64c7,	// (0x00024fea) main_clock2_btn_pane_ParamLimits

0x64c7,	// (0x00024fea) main_clock2_btn_pane

0xcb95,	// (0x0002b6b8) main_clock2_btn_pane_cp01_ParamLimits

0xcb95,	// (0x0002b6b8) main_clock2_btn_pane_cp01

0xe858,	// (0x0002d37b) list_cale_mrui_pane_ParamLimits

0xee00,	// (0x0002d923) main_cf0_pane_g2

0x0001,

0xfdac,	// (0x0002e8cf) main_cf0_pane_g

0x97ec,	// (0x0002830f) area_left_week_number_pane_ParamLimits

0x97ff,	// (0x00028322) area_top_day_name_pane_ParamLimits

0x980d,	// (0x00028330) frame_month_view_pane_ParamLimits

0xef28,	// (0x0002da4b) grid_month_view_pane_ParamLimits

0xef36,	// (0x0002da59) frm_month_g1_ParamLimits

0x988b,	// (0x000283ae) frm_month_g2_ParamLimits

0x989c,	// (0x000283bf) frm_month_g3_ParamLimits

0x98ad,	// (0x000283d0) frm_month_g4_ParamLimits

0x98be,	// (0x000283e1) frm_month_g5_ParamLimits

0x98cf,	// (0x000283f2) frm_month_g6_ParamLimits

0x98e2,	// (0x00028405) frm_month_g7_ParamLimits

0xef43,	// (0x0002da66) frm_month_g8_ParamLimits

0x98f5,	// (0x00028418) frm_month_g9_ParamLimits

0x9902,	// (0x00028425) frm_month_g10_ParamLimits

0x990f,	// (0x00028432) frm_month_g11_ParamLimits

0x991c,	// (0x0002843f) frm_month_g12_ParamLimits

0x9929,	// (0x0002844c) frm_month_g13_ParamLimits

0x9938,	// (0x0002845b) frm_month_g14_ParamLimits

0x9947,	// (0x0002846a) frm_month_g15_ParamLimits

0x9956,	// (0x00028479) frm_month_g16_ParamLimits

0xfdfd,	// (0x0002e920) frm_month_g_ParamLimits

0xef50,	// (0x0002da73) cell_top_day_name_pane_t1_ParamLimits

0x9965,	// (0x00028488) cell_area_left_week_number_pane_g1_ParamLimits

0x9974,	// (0x00028497) cell_area_left_week_number_pane_t1_ParamLimits

0xca01,	// (0x0002b524) cell_month_view_pane_g1_ParamLimits

0x998a,	// (0x000284ad) cell_month_view_pane_t1_ParamLimits

0xa337,	// (0x00028e5a) main_clock2_btn_pane_g1

0xf0bf,	// (0x0002dbe2) main_clock2_btn_pane_t1

0xa5d8,	// (0x000290fb) listscroll_cmail_pane_ParamLimits

0xe3eb,	// (0x0002cf0e) main_sp_fs_email_pane_g1_ParamLimits

0xe3f7,	// (0x0002cf1a) main_sp_fs_email_pane_g2_ParamLimits

0x08b4,	// (0x0001f3d7) main_sp_fs_email_pane_g_ParamLimits

0xea22,	// (0x0002d545) list_recal_day_pane_ParamLimits

0xea33,	// (0x0002d556) mian_recal_day_pane_t1

0x89cd,	// (0x000274f0) list_single_dyc_row_text_pane_t4_ParamLimits

0x89cd,	// (0x000274f0) list_single_dyc_row_text_pane_t4

0x8a0a,	// (0x0002752d) list_single_dyc_row_text_pane_t5_ParamLimits

0x8a0a,	// (0x0002752d) list_single_dyc_row_text_pane_t5

0xe4cf,	// (0x0002cff2) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4cf,	// (0x0002cff2) list_single_dyc_row_text_pane_t6

0xa9ce,	// (0x000294f1) aid_mgn_list_cale_time_pane

0xa5d8,	// (0x000290fb) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
