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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001e512 };

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
0x25ae,	// (0x00020ac0) Screen

0x25ba,	// (0x00020acc) application_window

0x25c6,	// (0x00020ad8) area_bottom_pane_ParamLimits

0x25c6,	// (0x00020ad8) area_bottom_pane

0x0c07,	// (0x0001f119) area_top_pane_ParamLimits

0x0c07,	// (0x0001f119) area_top_pane

0x0c6b,	// (0x0001f17d) call_video_uplink_pane_ParamLimits

0x0c6b,	// (0x0001f17d) call_video_uplink_pane

0x0caa,	// (0x0001f1bc) main_pane_ParamLimits

0x0caa,	// (0x0001f1bc) main_pane

0xc3f6,	// (0x0002a908) context_pane

0x544f,	// (0x00023961) navi_pane

0x5475,	// (0x00023987) popup_cale_events_window_ParamLimits

0x5475,	// (0x00023987) popup_cale_events_window

0xc409,	// (0x0002a91b) popup_mup_playback_window

0x548d,	// (0x0002399f) signal_pane

0xa35a,	// (0x0002886c) main_browser_pane

0xa52d,	// (0x00028a3f) main_burst_pane

0x1266,	// (0x0001f778) main_calc_pane

0xc3dc,	// (0x0002a8ee) main_cale_day_pane

0x29dc,	// (0x00020eee) main_cale_month_pane

0xc3dc,	// (0x0002a8ee) main_cale_week_pane

0xa52d,	// (0x00028a3f) main_call_pane

0xa02e,	// (0x00028540) main_call_poc_pane

0xa52d,	// (0x00028a3f) main_camera_pane

0xa52d,	// (0x00028a3f) main_chi_dic_pane

0xad39,	// (0x0002924b) main_clock_pane

0xa02e,	// (0x00028540) main_fmradio_pane

0xa52d,	// (0x00028a3f) main_graph_messa_pane

0xa02e,	// (0x00028540) main_help_pane

0xa35a,	// (0x0002886c) main_im_pane

0xa289,	// (0x0002879b) main_image_pane_ParamLimits

0xa289,	// (0x0002879b) main_image_pane

0xa02e,	// (0x00028540) main_location2_pane

0xa52d,	// (0x00028a3f) main_location_pane

0xa289,	// (0x0002879b) main_messa_pane

0xa02e,	// (0x00028540) main_mp2_pane

0xa52d,	// (0x00028a3f) main_mp_pane

0xa02e,	// (0x00028540) main_msg_pane

0xa02e,	// (0x00028540) main_mup_eq_pane

0xa02e,	// (0x00028540) main_mup_pane

0xa35a,	// (0x0002886c) main_notes_pane

0xa02e,	// (0x00028540) main_pec_pane

0xa02e,	// (0x00028540) main_phob_pane

0xa02e,	// (0x00028540) main_pinb_pane

0xa02e,	// (0x00028540) main_postcard_pane

0xa02e,	// (0x00028540) main_qdial_pane

0xa52d,	// (0x00028a3f) main_skin_pane

0xa02e,	// (0x00028540) main_smil2_pane

0xa52d,	// (0x00028a3f) main_smil_pane

0xa52d,	// (0x00028a3f) main_video_pane

0xa52d,	// (0x00028a3f) main_video_tele_pane

0xa289,	// (0x0002879b) main_viewer_pane_ParamLimits

0xa289,	// (0x0002879b) main_viewer_pane

0xa52d,	// (0x00028a3f) main_vorec_pane

0x12b2,	// (0x0001f7c4) popup_blid_sat_info_window_ParamLimits

0x12b2,	// (0x0001f7c4) popup_blid_sat_info_window

0x12d2,	// (0x0001f7e4) popup_dyc_status_message_window_ParamLimits

0x12d2,	// (0x0001f7e4) popup_dyc_status_message_window

0x12e0,	// (0x0001f7f2) popup_grid_large_graphic_window_ParamLimits

0x12e0,	// (0x0001f7f2) popup_grid_large_graphic_window

0x136f,	// (0x0001f881) popup_loc_request_window_ParamLimits

0x136f,	// (0x0001f881) popup_loc_request_window

0x13bc,	// (0x0001f8ce) popup_wml_address_window_ParamLimits

0x13bc,	// (0x0001f8ce) popup_wml_address_window

0x5331,	// (0x00023843) call_muted_g1

0x4fed,	// (0x000234ff) popup_call_audio_conf_window_ParamLimits

0x4fed,	// (0x000234ff) popup_call_audio_conf_window

0x5341,	// (0x00023853) popup_call_audio_first_window_ParamLimits

0x5341,	// (0x00023853) popup_call_audio_first_window

0x5381,	// (0x00023893) popup_call_audio_in_window_ParamLimits

0x5381,	// (0x00023893) popup_call_audio_in_window

0x53a5,	// (0x000238b7) popup_call_audio_out_window_ParamLimits

0x53a5,	// (0x000238b7) popup_call_audio_out_window

0x53c7,	// (0x000238d9) popup_call_audio_second_window_ParamLimits

0x53c7,	// (0x000238d9) popup_call_audio_second_window

0x53f7,	// (0x00023909) popup_call_audio_wait_window_ParamLimits

0x53f7,	// (0x00023909) popup_call_audio_wait_window

0x5418,	// (0x0002392a) popup_number_entry_window_ParamLimits

0x5418,	// (0x0002392a) popup_number_entry_window

0x9c1b,	// (0x0002812d) bg_popup_call_pane_cp05_ParamLimits

0x9c1b,	// (0x0002812d) bg_popup_call_pane_cp05

0x9c3b,	// (0x0002814d) popup_number_entry_window_t1

0x9c4e,	// (0x00028160) popup_number_entry_window_t2

0x9c60,	// (0x00028172) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0002d5c1) popup_number_entry_window_t

0x9c72,	// (0x00028184) text_title_cp2

0x9c85,	// (0x00028197) bg_popup_call_pane_cp_ParamLimits

0x9c85,	// (0x00028197) bg_popup_call_pane_cp

0x9c93,	// (0x000281a5) call_thumbnail_pane

0x9c9b,	// (0x000281ad) popup_call_audio_in_window_g1_ParamLimits

0x9c9b,	// (0x000281ad) popup_call_audio_in_window_g1

0x9ca7,	// (0x000281b9) popup_call_audio_in_window_g2_ParamLimits

0x9ca7,	// (0x000281b9) popup_call_audio_in_window_g2

0x9cb3,	// (0x000281c5) popup_call_audio_in_window_g3_ParamLimits

0x9cb3,	// (0x000281c5) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0002d5ca) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0002d5ca) popup_call_audio_in_window_g

0x9cbf,	// (0x000281d1) popup_call_audio_in_window_t1_ParamLimits

0x9cbf,	// (0x000281d1) popup_call_audio_in_window_t1

0x9cdb,	// (0x000281ed) popup_call_audio_in_window_t2_ParamLimits

0x9cdb,	// (0x000281ed) popup_call_audio_in_window_t2

0x9cf7,	// (0x00028209) popup_call_audio_in_window_t3_ParamLimits

0x9cf7,	// (0x00028209) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0002d5d1) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0002d5d1) popup_call_audio_in_window_t

0x9c85,	// (0x00028197) bg_popup_call_pane_cp01_ParamLimits

0x9c85,	// (0x00028197) bg_popup_call_pane_cp01

0x9c93,	// (0x000281a5) call_thumbnail_pane_cp02

0x9d0a,	// (0x0002821c) call_type_pane_cp022

0x9d12,	// (0x00028224) popup_call_audio_out_window_g1_ParamLimits

0x9d12,	// (0x00028224) popup_call_audio_out_window_g1

0x9d24,	// (0x00028236) popup_call_audio_out_window_g2_ParamLimits

0x9d24,	// (0x00028236) popup_call_audio_out_window_g2

0x9d30,	// (0x00028242) popup_call_audio_out_window_g3_ParamLimits

0x9d30,	// (0x00028242) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0002d5d8) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0002d5d8) popup_call_audio_out_window_g

0x9d42,	// (0x00028254) popup_call_audio_out_window_t1_ParamLimits

0x9d42,	// (0x00028254) popup_call_audio_out_window_t1

0x9d5a,	// (0x0002826c) popup_call_audio_out_window_t2_ParamLimits

0x9d5a,	// (0x0002826c) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0002d5df) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0002d5df) popup_call_audio_out_window_t

0x9d6f,	// (0x00028281) bg_popup_call_pane_ParamLimits

0x9d6f,	// (0x00028281) bg_popup_call_pane

0x2643,	// (0x00020b55) call_thumbnail_pane_cp_ParamLimits

0x2643,	// (0x00020b55) call_thumbnail_pane_cp

0x9df3,	// (0x00028305) call_type_pane_cp01_ParamLimits

0x9df3,	// (0x00028305) call_type_pane_cp01

0x9e37,	// (0x00028349) popup_call_audio_first_window_g1_ParamLimits

0x9e37,	// (0x00028349) popup_call_audio_first_window_g1

0x9e83,	// (0x00028395) popup_call_audio_first_window_g2_ParamLimits

0x9e83,	// (0x00028395) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0002d5e4) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0002d5e4) popup_call_audio_first_window_g

0x9ec7,	// (0x000283d9) popup_call_audio_first_window_t1_ParamLimits

0x9ec7,	// (0x000283d9) popup_call_audio_first_window_t1

0x9f73,	// (0x00028485) popup_call_audio_first_window_t4_ParamLimits

0x9f73,	// (0x00028485) popup_call_audio_first_window_t4

0x9fff,	// (0x00028511) popup_call_audio_first_window_t5_ParamLimits

0x9fff,	// (0x00028511) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0002d5e9) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0002d5e9) popup_call_audio_first_window_t

0xa02e,	// (0x00028540) bg_popup_call_pane_cp02

0xa038,	// (0x0002854a) call_type_pane_cp023

0xa040,	// (0x00028552) popup_call_audio_wait_window_g1

0xa048,	// (0x0002855a) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0002d5f0) popup_call_audio_wait_window_g

0xa050,	// (0x00028562) popup_call_audio_wait_window_t3

0xa05e,	// (0x00028570) bg_popup_call_pane_cp03_ParamLimits

0xa05e,	// (0x00028570) bg_popup_call_pane_cp03

0xa0be,	// (0x000285d0) call_thumbnail_pane_cp011_ParamLimits

0xa0be,	// (0x000285d0) call_thumbnail_pane_cp011

0xa0ca,	// (0x000285dc) call_type_pane_cp034_ParamLimits

0xa0ca,	// (0x000285dc) call_type_pane_cp034

0xa106,	// (0x00028618) popup_call_audio_second_window_g1_ParamLimits

0xa106,	// (0x00028618) popup_call_audio_second_window_g1

0xa142,	// (0x00028654) popup_call_audio_second_window_g2_ParamLimits

0xa142,	// (0x00028654) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0002d5f5) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0002d5f5) popup_call_audio_second_window_g

0xa17e,	// (0x00028690) popup_call_audio_second_window_t1_ParamLimits

0xa17e,	// (0x00028690) popup_call_audio_second_window_t1

0xa1ff,	// (0x00028711) popup_call_audio_second_window_t2_ParamLimits

0xa1ff,	// (0x00028711) popup_call_audio_second_window_t2

0xa235,	// (0x00028747) popup_call_audio_second_window_t3_ParamLimits

0xa235,	// (0x00028747) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0002d5fa) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0002d5fa) popup_call_audio_second_window_t

0xa02e,	// (0x00028540) bg_popup_call_pane_cp04

0xa26b,	// (0x0002877d) list_conf_pane

0xa273,	// (0x00028785) popup_call_audio_conf_window_t1

0xa281,	// (0x00028793) call_thumbnail_pane_g1

0xa289,	// (0x0002879b) bg_pinb_pane_ParamLimits

0xa289,	// (0x0002879b) bg_pinb_pane

0xa297,	// (0x000287a9) find_pinb_pane

0xa2a0,	// (0x000287b2) listscroll_pinb_pane_ParamLimits

0xa2a0,	// (0x000287b2) listscroll_pinb_pane

0xa2af,	// (0x000287c1) pinb_bg_pane_g1

0x2667,	// (0x00020b79) pinb_bg_pane_g2

0x2673,	// (0x00020b85) pinb_bg_pane_g3

0x267f,	// (0x00020b91) pinb_bg_pane_g4

0x268b,	// (0x00020b9d) pinb_bg_pane_g5

0x2697,	// (0x00020ba9) pinb_bg_pane_g6

0x26a2,	// (0x00020bb4) pinb_bg_pane_g7

0x26ad,	// (0x00020bbf) pinb_bg_pane_g8

0x26b8,	// (0x00020bca) pinb_bg_pane_g9

0x26c2,	// (0x00020bd4) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0002d601) pinb_bg_pane_g

0x26df,	// (0x00020bf1) grid_pinb_pane

0x26ea,	// (0x00020bfc) list_pinb_pane

0x26f5,	// (0x00020c07) scroll_pane_cp01_ParamLimits

0x26f5,	// (0x00020c07) scroll_pane_cp01

0xa2b9,	// (0x000287cb) find_pinb_pane_g1_ParamLimits

0xa2b9,	// (0x000287cb) find_pinb_pane_g1

0xa2d1,	// (0x000287e3) find_pinb_pane_t1

0xa2e3,	// (0x000287f5) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0002d61b) find_pinb_pane_t

0xa2f8,	// (0x0002880a) input_focus_pane_cp01_ParamLimits

0xa2f8,	// (0x0002880a) input_focus_pane_cp01

0x2707,	// (0x00020c19) cell_pinb_pane_ParamLimits

0x2707,	// (0x00020c19) cell_pinb_pane

0x2732,	// (0x00020c44) cell_pinb_pane_g1_ParamLimits

0x2732,	// (0x00020c44) cell_pinb_pane_g1

0xa304,	// (0x00028816) cell_pinb_pane_g2_ParamLimits

0xa304,	// (0x00028816) cell_pinb_pane_g2

0xa310,	// (0x00028822) cell_pinb_pane_g3_ParamLimits

0xa310,	// (0x00028822) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0002d620) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0002d620) cell_pinb_pane_g

0xa02e,	// (0x00028540) grid_highlight_pane_cp01

0x2747,	// (0x00020c59) list_pinb_item_pane_ParamLimits

0x2747,	// (0x00020c59) list_pinb_item_pane

0xa02e,	// (0x00028540) list_highlight_pane_cp02

0x2770,	// (0x00020c82) list_pinb_item_pane_g1_ParamLimits

0x2770,	// (0x00020c82) list_pinb_item_pane_g1

0x277d,	// (0x00020c8f) list_pinb_item_pane_g2_ParamLimits

0x277d,	// (0x00020c8f) list_pinb_item_pane_g2

0x2789,	// (0x00020c9b) list_pinb_item_pane_g3_ParamLimits

0x2789,	// (0x00020c9b) list_pinb_item_pane_g3

0x279a,	// (0x00020cac) list_pinb_item_pane_g4_ParamLimits

0x279a,	// (0x00020cac) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0002d627) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0002d627) list_pinb_item_pane_g

0x27a6,	// (0x00020cb8) list_pinb_item_pane_t1_ParamLimits

0x27a6,	// (0x00020cb8) list_pinb_item_pane_t1

0x0e98,	// (0x0001f3aa) calc_display_pane

0x0eb6,	// (0x0001f3c8) calc_paper_pane

0x0ed2,	// (0x0001f3e4) grid_calc_pane

0xa02e,	// (0x00028540) bg_list_pane_cp01

0x27bd,	// (0x00020ccf) clock_g1

0x27c5,	// (0x00020cd7) clock_g2

0x0001,

0xf11e,	// (0x0002d630) clock_g

0x27cf,	// (0x00020ce1) clock_t1_ParamLimits

0x27cf,	// (0x00020ce1) clock_t1

0x27e4,	// (0x00020cf6) clock_t2_ParamLimits

0x27e4,	// (0x00020cf6) clock_t2

0x27f6,	// (0x00020d08) clock_t3_ParamLimits

0x27f6,	// (0x00020d08) clock_t3

0x2808,	// (0x00020d1a) clock_t4_ParamLimits

0x2808,	// (0x00020d1a) clock_t4

0x281a,	// (0x00020d2c) clock_t5_ParamLimits

0x281a,	// (0x00020d2c) clock_t5

0x282f,	// (0x00020d41) clock_t6_ParamLimits

0x282f,	// (0x00020d41) clock_t6

0x2841,	// (0x00020d53) clock_t7_ParamLimits

0x2841,	// (0x00020d53) clock_t7

0x2853,	// (0x00020d65) clock_t8_ParamLimits

0x2853,	// (0x00020d65) clock_t8

0x2869,	// (0x00020d7b) clock_t9_ParamLimits

0x2869,	// (0x00020d7b) clock_t9

0x0008,

0xf123,	// (0x0002d635) clock_t_ParamLimits

0xf123,	// (0x0002d635) clock_t

0xa31c,	// (0x0002882e) popup_clock_analogue_window_cp02

0xa31c,	// (0x0002882e) popup_clock_digital_window_cp01

0xa324,	// (0x00028836) listscroll_help_pane

0xa02e,	// (0x00028540) phob_pre_status_pane

0xa32e,	// (0x00028840) grid_qdial_pane

0xa289,	// (0x0002879b) listscroll_mce_pane

0xa289,	// (0x0002879b) bg_notes_pane

0xa338,	// (0x0002884a) list_notes_pane

0x287f,	// (0x00020d91) scroll_pane_cp06

0xa346,	// (0x00028858) bg_calc_paper_pane

0x0efe,	// (0x0001f410) list_calc_pane

0xa35a,	// (0x0002886c) bg_calc_display_pane

0x0f18,	// (0x0001f42a) calc_display_pane_t1

0x0f2d,	// (0x0001f43f) calc_display_pane_t2

0x0f42,	// (0x0001f454) calc_display_pane_t3

0x0002,

0xf136,	// (0x0002d648) calc_display_pane_t

0x0f54,	// (0x0001f466) cell_calc_pane_ParamLimits

0x0f54,	// (0x0001f466) cell_calc_pane

0xa366,	// (0x00028878) bg_calc_paper_pane_g1

0xa372,	// (0x00028884) bg_calc_paper_pane_g2

0xa37e,	// (0x00028890) bg_calc_paper_pane_g3

0xa38a,	// (0x0002889c) bg_calc_paper_pane_g4

0xa396,	// (0x000288a8) bg_calc_paper_pane_g5

0x288e,	// (0x00020da0) bg_calc_paper_pane_g6

0x289f,	// (0x00020db1) bg_calc_paper_pane_g7

0x28b0,	// (0x00020dc2) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0002d64f) bg_calc_paper_pane_g

0x28c1,	// (0x00020dd3) calc_bg_paper_pane_g9

0x28d2,	// (0x00020de4) list_calc_item_pane_ParamLimits

0x28d2,	// (0x00020de4) list_calc_item_pane

0xa3a2,	// (0x000288b4) list_calc_item_pane_g1

0x0f81,	// (0x0001f493) list_calc_item_pane_t1_ParamLimits

0x0f81,	// (0x0001f493) list_calc_item_pane_t1

0x0f93,	// (0x0001f4a5) list_calc_item_pane_t2_ParamLimits

0x0f93,	// (0x0001f4a5) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0002d660) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0002d660) list_calc_item_pane_t

0xa3af,	// (0x000288c1) cell_calc_pane_g1

0xa3b9,	// (0x000288cb) grid_highlight_pane_cp02

0x28ff,	// (0x00020e11) bg_calc_display_pane_g1

0x0fc3,	// (0x0001f4d5) bg_calc_display_pane_g2

0x2908,	// (0x00020e1a) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0002d66a) bg_calc_display_pane_g

0x0fcd,	// (0x0001f4df) cell_qdial_pane_ParamLimits

0x0fcd,	// (0x0001f4df) cell_qdial_pane

0x2911,	// (0x00020e23) cell_qdial_pane_g1_ParamLimits

0x2911,	// (0x00020e23) cell_qdial_pane_g1

0x291e,	// (0x00020e30) cell_qdial_pane_g2_ParamLimits

0x291e,	// (0x00020e30) cell_qdial_pane_g2

0xa3db,	// (0x000288ed) cell_qdial_pane_g3_ParamLimits

0xa3db,	// (0x000288ed) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0002d671) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0002d671) cell_qdial_pane_g

0x293b,	// (0x00020e4d) cell_qdial_pane_t1_ParamLimits

0x293b,	// (0x00020e4d) cell_qdial_pane_t1

0x2953,	// (0x00020e65) cell_qdial_pane_t2_ParamLimits

0x2953,	// (0x00020e65) cell_qdial_pane_t2

0x2966,	// (0x00020e78) cell_qdial_pane_t3_ParamLimits

0x2966,	// (0x00020e78) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0002d67a) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0002d67a) cell_qdial_pane_t

0xa02e,	// (0x00028540) grid_highlight_pane_cp04

0xa3e7,	// (0x000288f9) thumbnail_qdial_pane_ParamLimits

0xa3e7,	// (0x000288f9) thumbnail_qdial_pane

0xa443,	// (0x00028955) list_help_pane

0xa44c,	// (0x0002895e) scroll_pane_cp02

0x2979,	// (0x00020e8b) help_list_pane_t1_ParamLimits

0x2979,	// (0x00020e8b) help_list_pane_t1

0x0fe1,	// (0x0001f4f3) bg_notes_pane_g2

0x0fe9,	// (0x0001f4fb) bg_notes_pane_g3

0x0ff1,	// (0x0001f503) notes_bg_pane_g1

0x0ff9,	// (0x0001f50b) notes_bg_pane_g4

0x1001,	// (0x0001f513) notes_bg_pane_g5

0x1009,	// (0x0001f51b) notes_bg_pane_g6

0x1011,	// (0x0001f523) notes_bg_pane_g7

0x1019,	// (0x0001f52b) notes_bg_pane_g8

0x1021,	// (0x0001f533) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0002d698) notes_bg_pane_g

0x29b0,	// (0x00020ec2) list_notes_text_pane_ParamLimits

0x29b0,	// (0x00020ec2) list_notes_text_pane

0xa455,	// (0x00028967) list_notes_text_pane_g1

0xa45e,	// (0x00028970) list_notes_text_pane_t1

0x29dc,	// (0x00020eee) listscroll_cale_week_pane

0x2a01,	// (0x00020f13) bg_cale_heading_pane

0xa486,	// (0x00028998) bg_cale_pane_cp01

0x2a23,	// (0x00020f35) cale_week_corner_pane

0x2a3d,	// (0x00020f4f) cale_week_day_heading_pane

0x2a5f,	// (0x00020f71) cale_week_scroll_pane_g1

0x2a7c,	// (0x00020f8e) cale_week_scroll_pane_g2

0x2a8f,	// (0x00020fa1) cale_week_scroll_pane_g3

0x2aa2,	// (0x00020fb4) cale_week_scroll_pane_g4

0x2ab5,	// (0x00020fc7) cale_week_scroll_pane_g5

0x2ac8,	// (0x00020fda) cale_week_scroll_pane_g6

0x2adb,	// (0x00020fed) cale_week_scroll_pane_g7

0x2af0,	// (0x00021002) cale_week_scroll_pane_g8

0x2b05,	// (0x00021017) cale_week_scroll_pane_g9

0x2b18,	// (0x0002102a) cale_week_scroll_pane_g10

0x2b2b,	// (0x0002103d) cale_week_scroll_pane_g11

0x2b3e,	// (0x00021050) cale_week_scroll_pane_g12

0x2b55,	// (0x00021067) cale_week_scroll_pane_g13

0x2b70,	// (0x00021082) cale_week_scroll_pane_g14

0x2b8b,	// (0x0002109d) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0002d6a7) cale_week_scroll_pane_g

0x2bbb,	// (0x000210cd) cale_week_time_pane

0x2bd0,	// (0x000210e2) grid_cale_week_pane

0xa4b5,	// (0x000289c7) scroll_pane_cp08

0x2bef,	// (0x00021101) cell_cale_week_pane_ParamLimits

0x2bef,	// (0x00021101) cell_cale_week_pane

0x2c51,	// (0x00021163) cale_week_day_heading_pane_t1

0x2c6c,	// (0x0002117e) cale_week_day_heading_pane_t2

0x2c87,	// (0x00021199) cale_week_day_heading_pane_t3

0x2ca2,	// (0x000211b4) cale_week_day_heading_pane_t4

0x2cbd,	// (0x000211cf) cale_week_day_heading_pane_t5

0x2cd8,	// (0x000211ea) cale_week_day_heading_pane_t6

0x2cf3,	// (0x00021205) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0002d6c8) cale_week_day_heading_pane_t

0xa4d2,	// (0x000289e4) bg_cale_side_pane

0x1029,	// (0x0001f53b) cale_week_time_pane_t1

0x1043,	// (0x0001f555) cale_week_time_pane_t2

0x105d,	// (0x0001f56f) cale_week_time_pane_t3

0x1077,	// (0x0001f589) cale_week_time_pane_t4

0x1091,	// (0x0001f5a3) cale_week_time_pane_t5

0x10ab,	// (0x0001f5bd) cale_week_time_pane_t6

0x10cb,	// (0x0001f5dd) cale_week_time_pane_t7

0x10ed,	// (0x0001f5ff) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0002d6d7) cale_week_time_pane_t

0x2d0e,	// (0x00021220) cell_cale_week_pane_g2

0x2d32,	// (0x00021244) cell_cale_week_pane_g3_ParamLimits

0x2d32,	// (0x00021244) cell_cale_week_pane_g3

0xa4e0,	// (0x000289f2) grid_highlight_pane_cp07

0xa4e8,	// (0x000289fa) listscroll_gms_pane

0xa4f2,	// (0x00028a04) grid_gms_pane

0xa4fb,	// (0x00028a0d) listscroll_gms_pane_g1

0xa503,	// (0x00028a15) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0002d6e8) listscroll_gms_pane_g

0x2d4a,	// (0x0002125c) scroll_pane_cp010

0x2d55,	// (0x00021267) cell_gms_pane_ParamLimits

0x2d55,	// (0x00021267) cell_gms_pane

0x2d65,	// (0x00021277) cell_gms_pane_g1

0xa50b,	// (0x00028a1d) cell_gms_pane_g2

0xa513,	// (0x00028a25) cell_gms_pane_g3

0xa51c,	// (0x00028a2e) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0002d6ed) cell_gms_pane_g

0xa525,	// (0x00028a37) grid_highlight_pane_cp09

0x52d9,	// (0x000237eb) phob_pre_status_pane_g1

0x52e1,	// (0x000237f3) phob_pre_status_pane_g2

0x52e9,	// (0x000237fb) phob_pre_status_pane_g3

0x52f1,	// (0x00023803) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0002daeb) phob_pre_status_pane_g

0x5301,	// (0x00023813) phob_pre_status_pane_t1

0x5311,	// (0x00023823) phob_pre_status_pane_t2

0x5321,	// (0x00023833) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0002daf6) phob_pre_status_pane_t

0xa52d,	// (0x00028a3f) bg_list_pane_cp05

0x2d75,	// (0x00021287) grid_vorec_pane

0x2d7f,	// (0x00021291) vorec_t1

0x2d8d,	// (0x0002129f) vorec_t2

0x2d9b,	// (0x000212ad) vorec_t3

0x2da9,	// (0x000212bb) vorec_t4

0x2588,	// (0x00020a9a) vorec_t5

0x2596,	// (0x00020aa8) vorec_t6

0x0004,

0xf1e4,	// (0x0002d6f6) vorec_t

0x25a4,	// (0x00020ab6) wait_bar_pane_cp01

0x2dc5,	// (0x000212d7) cell_vorec_pane_ParamLimits

0x2dc5,	// (0x000212d7) cell_vorec_pane

0x1111,	// (0x0001f623) cell_vorec_pane_g1

0xa02e,	// (0x00028540) grid_highlight_pane_cp05

0x2de8,	// (0x000212fa) cams_zoom_pane

0x2df4,	// (0x00021306) image_vga_pane

0x2e03,	// (0x00021315) main_camera_pane_g1

0x2e11,	// (0x00021323) main_camera_pane_g2

0x2e1d,	// (0x0002132f) main_camera_pane_g3

0x2e29,	// (0x0002133b) main_camera_pane_g4

0x2e35,	// (0x00021347) main_camera_pane_g5

0x2e41,	// (0x00021353) main_camera_pane_g6

0x2e4d,	// (0x0002135f) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0002d701) main_camera_pane_g

0x2e59,	// (0x0002136b) main_camera_pane_t1

0x2e6b,	// (0x0002137d) main_camera_pane_t2

0x0001,

0xf200,	// (0x0002d712) main_camera_pane_t

0x2e8c,	// (0x0002139e) cams_zoom_pane_cp_ParamLimits

0x2e8c,	// (0x0002139e) cams_zoom_pane_cp

0x2eb0,	// (0x000213c2) image_cif_pane_ParamLimits

0x2eb0,	// (0x000213c2) image_cif_pane

0x2ece,	// (0x000213e0) image_subqcif_pane

0x2ed6,	// (0x000213e8) main_video_pane_g1_ParamLimits

0x2ed6,	// (0x000213e8) main_video_pane_g1

0x2ef6,	// (0x00021408) main_video_pane_g2_ParamLimits

0x2ef6,	// (0x00021408) main_video_pane_g2

0x2f26,	// (0x00021438) main_video_pane_g3_ParamLimits

0x2f26,	// (0x00021438) main_video_pane_g3

0x2f4f,	// (0x00021461) main_video_pane_g4_ParamLimits

0x2f4f,	// (0x00021461) main_video_pane_g4

0x2f78,	// (0x0002148a) main_video_pane_g5_ParamLimits

0x2f78,	// (0x0002148a) main_video_pane_g5

0xa541,	// (0x00028a53) main_video_pane_g6_ParamLimits

0xa541,	// (0x00028a53) main_video_pane_g6

0x0006,

0xf205,	// (0x0002d717) main_video_pane_g_ParamLimits

0xf205,	// (0x0002d717) main_video_pane_g

0x2f9a,	// (0x000214ac) main_video_pane_t1_ParamLimits

0x2f9a,	// (0x000214ac) main_video_pane_t1

0xa55b,	// (0x00028a6d) cams_zoom_pane_g1

0xa564,	// (0x00028a76) cams_zoom_pane_g2

0xa56d,	// (0x00028a7f) cams_zoom_pane_g3

0xa576,	// (0x00028a88) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0002d726) cams_zoom_pane_g

0x2fe4,	// (0x000214f6) grid_cams_pane

0x2ff2,	// (0x00021504) linegrid_cams_pane

0x3000,	// (0x00021512) cell_cams_pane_ParamLimits

0x3000,	// (0x00021512) cell_cams_pane

0xa57f,	// (0x00028a91) cams_burst_image_pane

0xa587,	// (0x00028a99) cell_cams_pane_g1

0xa02e,	// (0x00028540) grid_highlight_pane_cp03

0xa3af,	// (0x000288c1) mp_bg_pane_g1

0xa02e,	// (0x00028540) bg_list_pane_cp03

0xc301,	// (0x0002a813) bg_mp_pane

0xc309,	// (0x0002a81b) grid_mp_pane

0xc311,	// (0x0002a823) media_player_g1

0xc319,	// (0x0002a82b) media_player_t1

0xc327,	// (0x0002a839) media_player_t2

0xc335,	// (0x0002a847) media_player_t3

0xc343,	// (0x0002a855) media_player_t4

0xc351,	// (0x0002a863) media_player_t5

0xc35f,	// (0x0002a871) media_player_t6

0xc36d,	// (0x0002a87f) media_player_t7

0x0006,

0xf5c3,	// (0x0002dad5) media_player_t

0xc37b,	// (0x0002a88d) wait_bar_pane_cp02

0xf5a8,	// (0x0002daba) main_usb_pane_t

0x52d0,	// (0x000237e2) cell_mp_pane

0xa3af,	// (0x000288c1) cell_mp_pane_g1

0xa02e,	// (0x00028540) grid_highlight_pane_cp06

0xa58f,	// (0x00028aa1) grid_skin_colour_pane

0xa597,	// (0x00028aa9) list_highlight_pane_cp03

0x3128,	// (0x0002163a) skin_g1

0xa59f,	// (0x00028ab1) skin_t1

0xa5ae,	// (0x00028ac0) skin_t2

0x0001,

0xf249,	// (0x0002d75b) skin_t

0x3132,	// (0x00021644) cell_skin_colour_pane_ParamLimits

0x3132,	// (0x00021644) cell_skin_colour_pane

0xa5bc,	// (0x00028ace) cell_skin_colour_pane_g1

0x31b6,	// (0x000216c8) call_video_g1_ParamLimits

0x31b6,	// (0x000216c8) call_video_g1

0x31c6,	// (0x000216d8) call_video_g2_ParamLimits

0x31c6,	// (0x000216d8) call_video_g2

0x0001,

0xf24e,	// (0x0002d760) call_video_g_ParamLimits

0xf24e,	// (0x0002d760) call_video_g

0x3220,	// (0x00021732) call_video_uplink_pane_cp1_ParamLimits

0x3220,	// (0x00021732) call_video_uplink_pane_cp1

0xa5ce,	// (0x00028ae0) call_video_uplink_pane_cp2

0x32ec,	// (0x000217fe) video_down_crop_pane_ParamLimits

0x32ec,	// (0x000217fe) video_down_crop_pane

0x33de,	// (0x000218f0) video_down_pane_ParamLimits

0x33de,	// (0x000218f0) video_down_pane

0xa5d6,	// (0x00028ae8) video_down_subqcif_pane_ParamLimits

0xa5d6,	// (0x00028ae8) video_down_subqcif_pane

0xa5ee,	// (0x00028b00) video_down_subqcif_pane_cp_ParamLimits

0xa5ee,	// (0x00028b00) video_down_subqcif_pane_cp

0xa649,	// (0x00028b5b) im_reading_pane_ParamLimits

0xa649,	// (0x00028b5b) im_reading_pane

0x34fe,	// (0x00021a10) im_writing_pane_ParamLimits

0x34fe,	// (0x00021a10) im_writing_pane

0x351c,	// (0x00021a2e) im_reading_pane_t1

0xa663,	// (0x00028b75) list_im_pane

0xa674,	// (0x00028b86) scroll_pane_cp07

0x3574,	// (0x00021a86) im_writing_pane_t1_ParamLimits

0x3574,	// (0x00021a86) im_writing_pane_t1

0xa68d,	// (0x00028b9f) im_writing_pane_t2_ParamLimits

0xa68d,	// (0x00028b9f) im_writing_pane_t2

0x0001,

0xf258,	// (0x0002d76a) im_writing_pane_t_ParamLimits

0xf258,	// (0x0002d76a) im_writing_pane_t

0xa02e,	// (0x00028540) input_focus_pane_cp04

0xa02e,	// (0x00028540) input_focus_pane_cp05

0x3586,	// (0x00021a98) list_im_single_pane_ParamLimits

0x3586,	// (0x00021a98) list_im_single_pane

0x35ad,	// (0x00021abf) list_single_im_pane_t1

0x5294,	// (0x000237a6) blid_accuracy_pane

0x529c,	// (0x000237ae) blid_compass_pane

0x52a6,	// (0x000237b8) main_location_t1

0x52b4,	// (0x000237c6) main_location_t2

0x52c2,	// (0x000237d4) main_location_t3

0x0002,

0xf5d2,	// (0x0002dae4) main_location_t

0xa02e,	// (0x00028540) aid_levels_location

0xa3af,	// (0x000288c1) blid_accuracy_pane_g1

0xa3af,	// (0x000288c1) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0002d7cc) blid_accuracy_pane_g

0xa6d5,	// (0x00028be7) wml_content_pane

0xa713,	// (0x00028c25) wml_button_pane_ParamLimits

0xa713,	// (0x00028c25) wml_button_pane

0x35bc,	// (0x00021ace) wml_list_single_large_pane_ParamLimits

0x35bc,	// (0x00021ace) wml_list_single_large_pane

0x35e7,	// (0x00021af9) wml_list_single_medium_pane_ParamLimits

0x35e7,	// (0x00021af9) wml_list_single_medium_pane

0x3619,	// (0x00021b2b) wml_list_single_small_pane_ParamLimits

0x3619,	// (0x00021b2b) wml_list_single_small_pane

0xa727,	// (0x00028c39) wml_selection_box_pane_ParamLimits

0xa727,	// (0x00028c39) wml_selection_box_pane

0xa73a,	// (0x00028c4c) wml_list_single_pane_t1

0xa749,	// (0x00028c5b) wml_list_single_medium_pane_t1

0xa758,	// (0x00028c6a) wml_list_single_large_pane_t1

0xa767,	// (0x00028c79) input_focus_pane_cp02_ParamLimits

0xa767,	// (0x00028c79) input_focus_pane_cp02

0xa77a,	// (0x00028c8c) wml_selection_box_pane_g1

0xa783,	// (0x00028c95) wml_selection_box_pane_t1_ParamLimits

0xa783,	// (0x00028c95) wml_selection_box_pane_t1

0xa289,	// (0x0002879b) bg_wml_button_pane_ParamLimits

0xa289,	// (0x0002879b) bg_wml_button_pane

0xa79b,	// (0x00028cad) wml_button_pane_g1

0xa7a3,	// (0x00028cb5) wml_button_pane_t1

0xa79b,	// (0x00028cad) wml_button_bg_pane_g1

0xa7b3,	// (0x00028cc5) wml_button_bg_pane_g2

0xa7bb,	// (0x00028ccd) wml_button_bg_pane_g3

0xa7c3,	// (0x00028cd5) wml_button_bg_pane_g4

0xa7cb,	// (0x00028cdd) wml_button_bg_pane_g5

0xa7d3,	// (0x00028ce5) wml_button_bg_pane_g6

0xa7db,	// (0x00028ced) wml_button_bg_pane_g7

0xa7e3,	// (0x00028cf5) wml_button_bg_pane_g8

0xa7eb,	// (0x00028cfd) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0002d76f) wml_button_bg_pane_g

0x3656,	// (0x00021b68) bg_list_pane_cp02

0xa7f3,	// (0x00028d05) mce_header_pane_ParamLimits

0xa7f3,	// (0x00028d05) mce_header_pane

0xa809,	// (0x00028d1b) mce_icon_pane

0xa809,	// (0x00028d1b) mce_image_pane

0xa812,	// (0x00028d24) mce_text_pane_ParamLimits

0xa812,	// (0x00028d24) mce_text_pane

0x3660,	// (0x00021b72) scroll_pane_cp03

0xa70b,	// (0x00028c1d) scroll_pane_cp04

0xa825,	// (0x00028d37) scroll_pane_cp05_ParamLimits

0xa825,	// (0x00028d37) scroll_pane_cp05

0x366a,	// (0x00021b7c) mce_header_field_pane_ParamLimits

0x366a,	// (0x00021b7c) mce_header_field_pane

0x368a,	// (0x00021b9c) mce_header_field_pane_2_ParamLimits

0x368a,	// (0x00021b9c) mce_header_field_pane_2

0x36a0,	// (0x00021bb2) mce_header_field_pane_3

0x36a8,	// (0x00021bba) list_single_mce_message_pane_ParamLimits

0x36a8,	// (0x00021bba) list_single_mce_message_pane

0x36d6,	// (0x00021be8) list_single_mce_smart_pane_ParamLimits

0x36d6,	// (0x00021be8) list_single_mce_smart_pane

0xa831,	// (0x00028d43) input_focus_pane_cp03

0xa83a,	// (0x00028d4c) list_header_data_pane

0x370f,	// (0x00021c21) mce_header_field_pane_t1

0x371d,	// (0x00021c2f) list_single_mce_header_pane_ParamLimits

0x371d,	// (0x00021c2f) list_single_mce_header_pane

0xa842,	// (0x00028d54) list_single_mce_header_pane_t1

0xa851,	// (0x00028d63) list_single_mce_message_pane_g1

0xa859,	// (0x00028d6b) list_single_mce_message_pane_t1

0x3773,	// (0x00021c85) bg_cale_heading_pane_cp01_ParamLimits

0x3773,	// (0x00021c85) bg_cale_heading_pane_cp01

0xa867,	// (0x00028d79) bg_cale_pane_cp02_ParamLimits

0xa867,	// (0x00028d79) bg_cale_pane_cp02

0x37c1,	// (0x00021cd3) cale_month_corner_pane

0x37e0,	// (0x00021cf2) cale_month_day_heading_pane_ParamLimits

0x37e0,	// (0x00021cf2) cale_month_day_heading_pane

0x3846,	// (0x00021d58) cale_month_pane_g1_ParamLimits

0x3846,	// (0x00021d58) cale_month_pane_g1

0x3889,	// (0x00021d9b) cale_month_pane_g2_ParamLimits

0x3889,	// (0x00021d9b) cale_month_pane_g2

0x38c3,	// (0x00021dd5) cale_month_pane_g3_ParamLimits

0x38c3,	// (0x00021dd5) cale_month_pane_g3

0x3913,	// (0x00021e25) cale_month_pane_g4_ParamLimits

0x3913,	// (0x00021e25) cale_month_pane_g4

0x3963,	// (0x00021e75) cale_month_pane_g5_ParamLimits

0x3963,	// (0x00021e75) cale_month_pane_g5

0x39b3,	// (0x00021ec5) cale_month_pane_g6_ParamLimits

0x39b3,	// (0x00021ec5) cale_month_pane_g6

0x3a03,	// (0x00021f15) cale_month_pane_g7_ParamLimits

0x3a03,	// (0x00021f15) cale_month_pane_g7

0x3a6b,	// (0x00021f7d) cale_month_pane_g8_ParamLimits

0x3a6b,	// (0x00021f7d) cale_month_pane_g8

0x3ad3,	// (0x00021fe5) cale_month_pane_g9_ParamLimits

0x3ad3,	// (0x00021fe5) cale_month_pane_g9

0x3b31,	// (0x00022043) cale_month_pane_g10_ParamLimits

0x3b31,	// (0x00022043) cale_month_pane_g10

0x3b8f,	// (0x000220a1) cale_month_pane_g11_ParamLimits

0x3b8f,	// (0x000220a1) cale_month_pane_g11

0x3be3,	// (0x000220f5) cale_month_pane_g12_ParamLimits

0x3be3,	// (0x000220f5) cale_month_pane_g12

0x3c39,	// (0x0002214b) cale_month_pane_g13_ParamLimits

0x3c39,	// (0x0002214b) cale_month_pane_g13

0x000c,

0xf270,	// (0x0002d782) cale_month_pane_g_ParamLimits

0xf270,	// (0x0002d782) cale_month_pane_g

0x3c8f,	// (0x000221a1) cale_month_week_pane

0x3cb3,	// (0x000221c5) grid_cale_month_pane_ParamLimits

0x3cb3,	// (0x000221c5) grid_cale_month_pane

0x3d10,	// (0x00022222) cale_month_day_heading_pane_t1

0x3d96,	// (0x000222a8) cale_month_day_heading_pane_t2

0x3e0f,	// (0x00022321) cale_month_day_heading_pane_t3

0x3e88,	// (0x0002239a) cale_month_day_heading_pane_t4

0x3f01,	// (0x00022413) cale_month_day_heading_pane_t5

0x3f7a,	// (0x0002248c) cale_month_day_heading_pane_t6

0x3ff3,	// (0x00022505) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0002d79d) cale_month_day_heading_pane_t

0xa4d2,	// (0x000289e4) bg_cale_side_pane_cp01

0x4084,	// (0x00022596) cale_month_week_pane_t1

0x409d,	// (0x000225af) cale_month_week_pane_t2

0x40b6,	// (0x000225c8) cale_month_week_pane_t3

0x40cf,	// (0x000225e1) cale_month_week_pane_t4

0x40ea,	// (0x000225fc) cale_month_week_pane_t5

0x410b,	// (0x0002261d) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0002d7ac) cale_month_week_pane_t

0x412c,	// (0x0002263e) cell_cale_month_pane_ParamLimits

0x412c,	// (0x0002263e) cell_cale_month_pane

0x111b,	// (0x0001f62d) cell_cale_month_pane_g1

0x1127,	// (0x0001f639) cell_cale_month_pane_t1_ParamLimits

0x1127,	// (0x0001f639) cell_cale_month_pane_t1

0xa4e0,	// (0x000289f2) grid_highlight_pane_cp08

0xa3af,	// (0x000288c1) main_smil_g1

0x427c,	// (0x0002278e) smil_status_pane

0xa8a6,	// (0x00028db8) smil_text_pane

0xc1e1,	// (0x0002a6f3) bg_popup_call3_rect_pane_g8

0xc1e9,	// (0x0002a6fb) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0002da65) bg_popup_call3_rect_pane_g

0xc470,	// (0x0002a982) smil_status_volume_pane_g1

0xa8b0,	// (0x00028dc2) smil_status_pane_t1

0x13f1,	// (0x0001f903) volume_smil_pane

0xa8c7,	// (0x00028dd9) list_smil_text_pane

0x428f,	// (0x000227a1) scroll_pane_cp011

0x429a,	// (0x000227ac) smil_text_list_pane_t1_ParamLimits

0x429a,	// (0x000227ac) smil_text_list_pane_t1

0x1153,	// (0x0001f665) aid_volume_smil_ParamLimits

0x1153,	// (0x0001f665) aid_volume_smil

0xa3af,	// (0x000288c1) smil_volume_pane_g1

0xa3af,	// (0x000288c1) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0002d7cc) smil_volume_pane_g

0x29dc,	// (0x00020eee) listscroll_cale_day_pane

0xa8d1,	// (0x00028de3) bg_cale_pane

0xa8e9,	// (0x00028dfb) list_cale_pane

0xa90c,	// (0x00028e1e) scroll_pane_cp09

0xa91d,	// (0x00028e2f) cale_bg_pane_g1

0xa925,	// (0x00028e37) cale_bg_pane_g2

0xa92d,	// (0x00028e3f) cale_bg_pane_g3

0xa935,	// (0x00028e47) cale_bg_pane_g4

0xa93d,	// (0x00028e4f) cale_bg_pane_g5

0xa945,	// (0x00028e57) cale_bg_pane_g6

0xa94d,	// (0x00028e5f) cale_bg_pane_g7

0xa955,	// (0x00028e67) cale_bg_pane_g8

0xa95d,	// (0x00028e6f) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0002d7d1) cale_bg_pane_g

0x432f,	// (0x00022841) list_cale_time_pane_ParamLimits

0x432f,	// (0x00022841) list_cale_time_pane

0xa965,	// (0x00028e77) list_cale_time_pane_g1_ParamLimits

0xa965,	// (0x00028e77) list_cale_time_pane_g1

0xa971,	// (0x00028e83) list_cale_time_pane_g2_ParamLimits

0xa971,	// (0x00028e83) list_cale_time_pane_g2

0x4357,	// (0x00022869) list_cale_time_pane_g3_ParamLimits

0x4357,	// (0x00022869) list_cale_time_pane_g3

0x4365,	// (0x00022877) list_cale_time_pane_g4_ParamLimits

0x4365,	// (0x00022877) list_cale_time_pane_g4

0x4373,	// (0x00022885) list_cale_time_pane_g5_ParamLimits

0x4373,	// (0x00022885) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0002d7e4) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0002d7e4) list_cale_time_pane_g

0xa98b,	// (0x00028e9d) list_cale_time_pane_t1_ParamLimits

0xa98b,	// (0x00028e9d) list_cale_time_pane_t1

0xa9b3,	// (0x00028ec5) list_cale_time_pane_t2_ParamLimits

0xa9b3,	// (0x00028ec5) list_cale_time_pane_t2

0x46cc,	// (0x00022bde) aid_blid_cardinal_pane

0x470e,	// (0x00022c20) compass_pane_t4

0xa9db,	// (0x00028eed) list_cale_time_pane_t4_ParamLimits

0xa9db,	// (0x00028eed) list_cale_time_pane_t4

0x471c,	// (0x00022c2e) compass_pane_t5

0x472c,	// (0x00022c3e) compass_pane_t6

0x473a,	// (0x00022c4c) compass_pane_t7

0xae53,	// (0x00029365) navi_pane_cc_t1

0xb04a,	// (0x0002955c) aid_phob_thumbnail_center_pane

0x4d95,	// (0x000232a7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0002d7f1) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0002d7f1) list_cale_time_pane_t

0x9c85,	// (0x00028197) bg_popup_window_pane_cp02_ParamLimits

0x9c85,	// (0x00028197) bg_popup_window_pane_cp02

0xaa03,	// (0x00028f15) heading_pane_cp01_ParamLimits

0xaa03,	// (0x00028f15) heading_pane_cp01

0xaa0f,	// (0x00028f21) loc_req_pane_ParamLimits

0xaa0f,	// (0x00028f21) loc_req_pane

0xaa1f,	// (0x00028f31) loc_type_pane_ParamLimits

0xaa1f,	// (0x00028f31) loc_type_pane

0xaa31,	// (0x00028f43) loc_type_pane_t1_ParamLimits

0xaa31,	// (0x00028f43) loc_type_pane_t1

0xaa43,	// (0x00028f55) loc_type_pane_t2_ParamLimits

0xaa43,	// (0x00028f55) loc_type_pane_t2

0xaa55,	// (0x00028f67) loc_type_pane_t3_ParamLimits

0xaa55,	// (0x00028f67) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0002d7f8) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0002d7f8) loc_type_pane_t

0xaa67,	// (0x00028f79) list_loc_req_pane

0xaa71,	// (0x00028f83) scroll_pane_cp012

0x4381,	// (0x00022893) list_single_loc_request_popup_menu_pane_ParamLimits

0x4381,	// (0x00022893) list_single_loc_request_popup_menu_pane

0xaa7c,	// (0x00028f8e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa7c,	// (0x00028f8e) list_single_loc_request_popup_menu_pane_g1

0xaa88,	// (0x00028f9a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa88,	// (0x00028f9a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0002d7ff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0002d7ff) list_single_loc_request_popup_menu_pane_g

0xaa94,	// (0x00028fa6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa94,	// (0x00028fa6) list_single_loc_request_popup_menu_pane_t1

0x4399,	// (0x000228ab) bg_popup_window_pane_cp03_ParamLimits

0x4399,	// (0x000228ab) bg_popup_window_pane_cp03

0x43a7,	// (0x000228b9) heading_loc_req_pane_ParamLimits

0x43a7,	// (0x000228b9) heading_loc_req_pane

0x43b3,	// (0x000228c5) popup_dyc_status_message_window_g1_ParamLimits

0x43b3,	// (0x000228c5) popup_dyc_status_message_window_g1

0x43bf,	// (0x000228d1) popup_dyc_status_message_window_t1_ParamLimits

0x43bf,	// (0x000228d1) popup_dyc_status_message_window_t1

0x43d1,	// (0x000228e3) popup_dyc_status_message_window_t2_ParamLimits

0x43d1,	// (0x000228e3) popup_dyc_status_message_window_t2

0x43e3,	// (0x000228f5) popup_dyc_status_message_window_t3_ParamLimits

0x43e3,	// (0x000228f5) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0002d804) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0002d804) popup_dyc_status_message_window_t

0xa02e,	// (0x00028540) bg_heading_pane_cp01

0xaaaa,	// (0x00028fbc) heading_loc_req_pane_g1

0xaab2,	// (0x00028fc4) heading_loc_req_pane_g2

0xaaba,	// (0x00028fcc) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0002d80b) heading_loc_req_pane_g

0xaac2,	// (0x00028fd4) heading_loc_req_pane_t1

0xaad1,	// (0x00028fe3) bg_popup_sub_pane_cp01_ParamLimits

0xaad1,	// (0x00028fe3) bg_popup_sub_pane_cp01

0xaadf,	// (0x00028ff1) popup_cale_events_window_g1_ParamLimits

0xaadf,	// (0x00028ff1) popup_cale_events_window_g1

0xaaff,	// (0x00029011) popup_cale_events_window_g2_ParamLimits

0xaaff,	// (0x00029011) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0002d83f) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0002d83f) popup_cale_events_window_g

0xab1f,	// (0x00029031) popup_cale_events_window_t1_ParamLimits

0xab1f,	// (0x00029031) popup_cale_events_window_t1

0xab31,	// (0x00029043) popup_cale_events_window_t2_ParamLimits

0xab31,	// (0x00029043) popup_cale_events_window_t2

0xab6f,	// (0x00029081) popup_cale_events_window_t3_ParamLimits

0xab6f,	// (0x00029081) popup_cale_events_window_t3

0xaba9,	// (0x000290bb) popup_cale_events_window_t4_ParamLimits

0xaba9,	// (0x000290bb) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0002d844) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0002d844) popup_cale_events_window_t

0x44de,	// (0x000229f0) call_type_pane

0xafc1,	// (0x000294d3) popup_call_status_window_g1

0x44ea,	// (0x000229fc) popup_call_status_window_g2

0x44f6,	// (0x00022a08) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0002d84d) popup_call_status_window_g

0xabdf,	// (0x000290f1) call_type_pane_g1

0xabe8,	// (0x000290fa) call_type_pane_g2

0x0001,

0xf342,	// (0x0002d854) call_type_pane_g

0xa02e,	// (0x00028540) bg_popup_sub_pane_cp02

0xabf1,	// (0x00029103) listscroll_popup_wml_pane

0xabf9,	// (0x0002910b) list_wml_pane

0xac03,	// (0x00029115) scroll_pane_cp013

0xac0e,	// (0x00029120) list_single_graphic_popup_wml_pane_ParamLimits

0xac0e,	// (0x00029120) list_single_graphic_popup_wml_pane

0xa3af,	// (0x000288c1) list_single_graphic_popup_wml_pane_g1

0xac22,	// (0x00029134) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0002d859) list_single_graphic_popup_wml_pane_g

0xac2a,	// (0x0002913c) list_single_graphic_popup_wml_pane_t1

0xac40,	// (0x00029152) aid_call_pane

0xa281,	// (0x00028793) popup_clock_analogue_window_g1

0xa281,	// (0x00028793) popup_clock_analogue_window_g2

0x1175,	// (0x0001f687) popup_clock_analogue_window_g3

0x1175,	// (0x0001f687) popup_clock_analogue_window_g4

0xa3af,	// (0x000288c1) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0002d85e) popup_clock_analogue_window_g

0x117d,	// (0x0001f68f) popup_clock_analogue_window_t1

0x118b,	// (0x0001f69d) clock_digital_number_pane_ParamLimits

0x118b,	// (0x0001f69d) clock_digital_number_pane

0x1197,	// (0x0001f6a9) clock_digital_number_pane_cp02_ParamLimits

0x1197,	// (0x0001f6a9) clock_digital_number_pane_cp02

0x11a3,	// (0x0001f6b5) clock_digital_number_pane_cp03_ParamLimits

0x11a3,	// (0x0001f6b5) clock_digital_number_pane_cp03

0x11af,	// (0x0001f6c1) clock_digital_number_pane_cp04_ParamLimits

0x11af,	// (0x0001f6c1) clock_digital_number_pane_cp04

0x11bb,	// (0x0001f6cd) clock_digital_separator_pane_ParamLimits

0x11bb,	// (0x0001f6cd) clock_digital_separator_pane

0x11c7,	// (0x0001f6d9) popup_clock_digital_window_t1

0xa3af,	// (0x000288c1) clock_digital_number_pane_g1

0xa3af,	// (0x000288c1) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0002d7cc) clock_digital_number_pane_g

0xa3af,	// (0x000288c1) clock_digital_separator_pane_g1

0xa3af,	// (0x000288c1) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0002d7cc) clock_digital_separator_pane_g

0xa02e,	// (0x00028540) bg_popup_window_pane_cp04

0xac48,	// (0x0002915a) heading_pane_cp03

0xac50,	// (0x00029162) listscroll_popup_gms_pane

0xac58,	// (0x0002916a) grid_large_graphic_popup_pane

0xac62,	// (0x00029174) listscroll_popup_gms_pane_g1

0xac6a,	// (0x0002917c) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0002d869) listscroll_popup_gms_pane_g

0xa70b,	// (0x00028c1d) scroll_pane_cp014

0x4502,	// (0x00022a14) cell_large_graphic_popup_pane_ParamLimits

0x4502,	// (0x00022a14) cell_large_graphic_popup_pane

0x451a,	// (0x00022a2c) cell_large_graphic_popup_pane_g1_ParamLimits

0x451a,	// (0x00022a2c) cell_large_graphic_popup_pane_g1

0xac72,	// (0x00029184) cell_large_graphic_popup_pane_g2_ParamLimits

0xac72,	// (0x00029184) cell_large_graphic_popup_pane_g2

0xac7e,	// (0x00029190) cell_large_graphic_popup_pane_g3_ParamLimits

0xac7e,	// (0x00029190) cell_large_graphic_popup_pane_g3

0xac8b,	// (0x0002919d) cell_large_graphic_popup_pane_g4_ParamLimits

0xac8b,	// (0x0002919d) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0002d86e) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0002d86e) cell_large_graphic_popup_pane_g

0xac9b,	// (0x000291ad) grid_highlight_pane_cp010

0xa3af,	// (0x000288c1) bg_popup_call_pane_g1

0xaca5,	// (0x000291b7) list_single_graphic_popup_conf_pane_ParamLimits

0xaca5,	// (0x000291b7) list_single_graphic_popup_conf_pane

0xacb8,	// (0x000291ca) list_highlight_pane_cp01

0xacc1,	// (0x000291d3) list_single_graphic_popup_conf_pane_g1

0xacc9,	// (0x000291db) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0002d877) list_single_graphic_popup_conf_pane_g

0xacd1,	// (0x000291e3) list_single_graphic_popup_conf_pane_t1

0xacdf,	// (0x000291f1) linegrid_cams_pane_g1

0x4526,	// (0x00022a38) linegrid_cams_pane_g2

0xa513,	// (0x00028a25) linegrid_cams_pane_g3

0xace8,	// (0x000291fa) linegrid_cams_pane_g4

0x452f,	// (0x00022a41) linegrid_cams_pane_g5

0x4538,	// (0x00022a4a) linegrid_cams_pane_g6

0xa51c,	// (0x00028a2e) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0002d87c) linegrid_cams_pane_g

0xacf1,	// (0x00029203) popup_clock_analogue_window

0xacf1,	// (0x00029203) popup_clock_digital_window

0xa02e,	// (0x00028540) popup_phob_thumbnail_window

0xa3af,	// (0x000288c1) call_video_uplink_pane_g1

0xacfa,	// (0x0002920c) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0002d88b) call_video_uplink_pane_g

0xad02,	// (0x00029214) video_uplink_pane

0xad0a,	// (0x0002921c) mce_image_pane_g1

0x4541,	// (0x00022a53) mce_image_pane_g2

0x4549,	// (0x00022a5b) mce_image_pane_g3

0x4551,	// (0x00022a63) mce_image_pane_g4

0x4559,	// (0x00022a6b) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0002d890) mce_image_pane_g

0xad14,	// (0x00029226) control_top_pane_stacon_cp01_ParamLimits

0xad14,	// (0x00029226) control_top_pane_stacon_cp01

0xad28,	// (0x0002923a) uni_indicator_pane_stacon_cp01_ParamLimits

0xad28,	// (0x0002923a) uni_indicator_pane_stacon_cp01

0xad39,	// (0x0002924b) bg_popup_sub_pane_cp03

0x4561,	// (0x00022a73) chi_dic_find_pane

0x4569,	// (0x00022a7b) listscroll_chi_dic_pane

0x4572,	// (0x00022a84) main_pane_chidic_g1

0x4585,	// (0x00022a97) chi_dic_find_pane_t1

0xad43,	// (0x00029255) find_chidic_pane

0xad4c,	// (0x0002925e) chi_dic_list_pane_ParamLimits

0xad4c,	// (0x0002925e) chi_dic_list_pane

0xad5d,	// (0x0002926f) scroll_pane_cp020

0x4593,	// (0x00022aa5) find_chidic_pane_t1

0xa02e,	// (0x00028540) input_focus_pane_cp06

0x45a2,	// (0x00022ab4) list_chi_dic_pane_ParamLimits

0x45a2,	// (0x00022ab4) list_chi_dic_pane

0x45bf,	// (0x00022ad1) list_chi_dic_pane_t1_ParamLimits

0x45bf,	// (0x00022ad1) list_chi_dic_pane_t1

0xa02e,	// (0x00028540) list_highlight_pane_cp020

0xad65,	// (0x00029277) bg_cale_heading_pane_g1

0x45d2,	// (0x00022ae4) bg_cale_heading_pane_g2

0x45da,	// (0x00022aec) bg_cale_heading_pane_g3

0x45e2,	// (0x00022af4) bg_cale_heading_pane_g4

0x45ec,	// (0x00022afe) bg_cale_heading_pane_g5

0x45f6,	// (0x00022b08) bg_cale_heading_pane_g6

0x45fe,	// (0x00022b10) bg_cale_heading_pane_g7

0x4606,	// (0x00022b18) bg_cale_heading_pane_g8

0x4610,	// (0x00022b22) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0002d89b) bg_cale_heading_pane_g

0xad65,	// (0x00029277) bg_cale_side_pane_g1

0x461a,	// (0x00022b2c) bg_cale_side_pane_g2

0x4624,	// (0x00022b36) bg_cale_side_pane_g3

0x462e,	// (0x00022b40) bg_cale_side_pane_g4

0x4638,	// (0x00022b4a) bg_cale_side_pane_g5

0x4642,	// (0x00022b54) bg_cale_side_pane_g6

0x464c,	// (0x00022b5e) bg_cale_side_pane_g7

0x4656,	// (0x00022b68) bg_cale_side_pane_g8

0x465e,	// (0x00022b70) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0002d8ae) bg_cale_side_pane_g

0x4666,	// (0x00022b78) popup_call_status_window_ParamLimits

0x4666,	// (0x00022b78) popup_call_status_window

0xad6d,	// (0x0002927f) stacon_top_pane

0xad75,	// (0x00029287) status_pane_ParamLimits

0xad75,	// (0x00029287) status_pane

0xad8a,	// (0x0002929c) status_small_pane

0xad92,	// (0x000292a4) control_pane

0xa02e,	// (0x00028540) stacon_bottom_pane

0xad9a,	// (0x000292ac) list_single_mce_smart_pane_t1_ParamLimits

0xad9a,	// (0x000292ac) list_single_mce_smart_pane_t1

0xadad,	// (0x000292bf) list_single_mce_smart_pane_t2_ParamLimits

0xadad,	// (0x000292bf) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0002d8c1) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0002d8c1) list_single_mce_smart_pane_t

0x4672,	// (0x00022b84) compass_pane

0x467e,	// (0x00022b90) main_location2_pane_t1

0x4692,	// (0x00022ba4) main_location2_pane_t2

0x46a6,	// (0x00022bb8) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0002d8c6) main_location2_pane_t

0xadcc,	// (0x000292de) compass_pane_g1_ParamLimits

0xadcc,	// (0x000292de) compass_pane_g1

0x46f0,	// (0x00022c02) compass_pane_t1

0x46ff,	// (0x00022c11) compass_pane_t2

0x0005,

0xf3bd,	// (0x0002d8cf) compass_pane_t

0x474a,	// (0x00022c5c) text_secondary_cp61

0xae4a,	// (0x0002935c) navi_pane_cams_g5

0xaec6,	// (0x000293d8) navi_pane_im_t1

0xaed4,	// (0x000293e6) navi_pane_mp_g1_ParamLimits

0xaed4,	// (0x000293e6) navi_pane_mp_g1

0xaee8,	// (0x000293fa) navi_pane_mp_g2_ParamLimits

0xaee8,	// (0x000293fa) navi_pane_mp_g2

0xaef4,	// (0x00029406) navi_pane_mp_g3_ParamLimits

0xaef4,	// (0x00029406) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0002d8e3) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0002d8e3) navi_pane_mp_g

0xaf00,	// (0x00029412) navi_pane_mp_t1

0xaf0e,	// (0x00029420) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0002d8ea) navi_pane_mp_t

0xaf79,	// (0x0002948b) navi_pane_vt_g1

0xaf00,	// (0x00029412) navi_pane_vt_t1

0xaf81,	// (0x00029493) navi_slider_pane

0xa52d,	// (0x00028a3f) zooming_pane

0xaf91,	// (0x000294a3) navi_slider_pane_g1

0x11e4,	// (0x0001f6f6) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0002d8f1) navi_slider_pane_g

0xafcf,	// (0x000294e1) aid_levels_zoom

0xafd7,	// (0x000294e9) zooming_pane_g1

0xafdf,	// (0x000294f1) zooming_pane_g2

0xafdf,	// (0x000294f1) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0002d900) zooming_pane_g

0xafe7,	// (0x000294f9) level_10_zoom

0xaff0,	// (0x00029502) level_11_zoom

0xaff9,	// (0x0002950b) level_1_zoom

0xb002,	// (0x00029514) level_2_zoom

0xb00b,	// (0x0002951d) level_3_zoom

0xb014,	// (0x00029526) level_4_zoom

0xb01d,	// (0x0002952f) level_5_zoom

0xb026,	// (0x00029538) level_6_zoom

0xb02f,	// (0x00029541) level_7_zoom

0xb038,	// (0x0002954a) level_8_zoom

0xb041,	// (0x00029553) level_9_zoom

0xb052,	// (0x00029564) popup_phob_thumbnail_window_g1

0xb05a,	// (0x0002956c) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0002d907) popup_phob_thumbnail_window_g

0xc383,	// (0x0002a895) level_1_location

0xc38b,	// (0x0002a89d) level_2_location

0xc393,	// (0x0002a8a5) level_3_location

0xc39b,	// (0x0002a8ad) level_4_location

0xa52d,	// (0x00028a3f) level_5_location

0x4785,	// (0x00022c97) mce_icon_pane_g1

0x478d,	// (0x00022c9f) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0002d90c) mce_icon_pane_g

0x4795,	// (0x00022ca7) main_mup_pane_g1_ParamLimits

0x4795,	// (0x00022ca7) main_mup_pane_g1

0x47ad,	// (0x00022cbf) main_mup_pane_g2_ParamLimits

0x47ad,	// (0x00022cbf) main_mup_pane_g2

0x47c1,	// (0x00022cd3) main_mup_pane_g3_ParamLimits

0x47c1,	// (0x00022cd3) main_mup_pane_g3

0x47d5,	// (0x00022ce7) main_mup_pane_g4_ParamLimits

0x47d5,	// (0x00022ce7) main_mup_pane_g4

0x47f1,	// (0x00022d03) main_mup_pane_g5_ParamLimits

0x47f1,	// (0x00022d03) main_mup_pane_g5

0x4812,	// (0x00022d24) main_mup_pane_g6_ParamLimits

0x4812,	// (0x00022d24) main_mup_pane_g6

0x482e,	// (0x00022d40) main_mup_pane_g7_ParamLimits

0x482e,	// (0x00022d40) main_mup_pane_g7

0x484a,	// (0x00022d5c) main_mup_pane_g8_ParamLimits

0x484a,	// (0x00022d5c) main_mup_pane_g8

0x4866,	// (0x00022d78) main_mup_pane_g9_ParamLimits

0x4866,	// (0x00022d78) main_mup_pane_g9

0x4885,	// (0x00022d97) main_mup_pane_g10_ParamLimits

0x4885,	// (0x00022d97) main_mup_pane_g10

0x48a4,	// (0x00022db6) main_mup_pane_g11_ParamLimits

0x48a4,	// (0x00022db6) main_mup_pane_g11

0x48bc,	// (0x00022dce) main_mup_pane_g12_ParamLimits

0x48bc,	// (0x00022dce) main_mup_pane_g12

0x48ca,	// (0x00022ddc) main_mup_pane_g13_ParamLimits

0x48ca,	// (0x00022ddc) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0002d911) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0002d911) main_mup_pane_g

0x48e0,	// (0x00022df2) main_mup_pane_t1_ParamLimits

0x48e0,	// (0x00022df2) main_mup_pane_t1

0x48fd,	// (0x00022e0f) main_mup_pane_t2_ParamLimits

0x48fd,	// (0x00022e0f) main_mup_pane_t2

0x4917,	// (0x00022e29) main_mup_pane_t3_ParamLimits

0x4917,	// (0x00022e29) main_mup_pane_t3

0x4931,	// (0x00022e43) main_mup_pane_t4_ParamLimits

0x4931,	// (0x00022e43) main_mup_pane_t4

0x4943,	// (0x00022e55) main_mup_pane_t5_ParamLimits

0x4943,	// (0x00022e55) main_mup_pane_t5

0x4955,	// (0x00022e67) main_mup_pane_t6_ParamLimits

0x4955,	// (0x00022e67) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0002d92c) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0002d92c) main_mup_pane_t

0x496b,	// (0x00022e7d) mup_progress_pane_ParamLimits

0x496b,	// (0x00022e7d) mup_progress_pane

0x4977,	// (0x00022e89) mup_visualizer_pane_ParamLimits

0x4977,	// (0x00022e89) mup_visualizer_pane

0x49b5,	// (0x00022ec7) mup_volume_pane_ParamLimits

0x49b5,	// (0x00022ec7) mup_volume_pane

0xafc1,	// (0x000294d3) mup_visualizer_pane_g1_ParamLimits

0xafc1,	// (0x000294d3) mup_visualizer_pane_g1

0xafc1,	// (0x000294d3) mup_visualizer_pane_g2_ParamLimits

0xafc1,	// (0x000294d3) mup_visualizer_pane_g2

0xadcc,	// (0x000292de) mup_visualizer_pane_g3_ParamLimits

0xadcc,	// (0x000292de) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0002d939) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0002d939) mup_visualizer_pane_g

0xa3af,	// (0x000288c1) mup_volume_pane_g1

0xb06a,	// (0x0002957c) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0002d940) mup_volume_pane_g

0xa3af,	// (0x000288c1) mup_progress_pane_g1

0xb073,	// (0x00029585) mup_progress_pane_g2

0xb07c,	// (0x0002958e) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0002d945) mup_progress_pane_g

0xa02e,	// (0x00028540) bg_popup_window_pane_cp05

0xb085,	// (0x00029597) heading_pane_cp02_ParamLimits

0xb085,	// (0x00029597) heading_pane_cp02

0xb09f,	// (0x000295b1) list_popup_blid_pane

0xb0a7,	// (0x000295b9) list_blid_sat_info_pane_ParamLimits

0xb0a7,	// (0x000295b9) list_blid_sat_info_pane

0xb0ba,	// (0x000295cc) list_blid_sat_info_pane_g1

0xb0c2,	// (0x000295d4) list_blid_sat_info_pane_t1

0x4ac0,	// (0x00022fd2) mup_equalizer_pane_ParamLimits

0x4ac0,	// (0x00022fd2) mup_equalizer_pane

0x4ae1,	// (0x00022ff3) mup_equalizer_pane_cp1_ParamLimits

0x4ae1,	// (0x00022ff3) mup_equalizer_pane_cp1

0x4b02,	// (0x00023014) mup_equalizer_pane_cp2_ParamLimits

0x4b02,	// (0x00023014) mup_equalizer_pane_cp2

0x4b23,	// (0x00023035) mup_equalizer_pane_cp3_ParamLimits

0x4b23,	// (0x00023035) mup_equalizer_pane_cp3

0x4b44,	// (0x00023056) mup_equalizer_pane_cp4_ParamLimits

0x4b44,	// (0x00023056) mup_equalizer_pane_cp4

0x4b65,	// (0x00023077) mup_equalizer_pane_cp5

0x4b7b,	// (0x0002308d) mup_equalizer_pane_cp6

0x4b93,	// (0x000230a5) mup_equalizer_pane_cp7

0xc261,	// (0x0002a773) bg_popup_call_poc_act_pane_g9

0xc269,	// (0x0002a77b) bg_popup_call_poc_act_pane_g10

0xc271,	// (0x0002a783) bg_popup_call_poc_act_pane_g11

0x000a,

0xa289,	// (0x0002879b) mup_scale_pane

0xa3af,	// (0x000288c1) mup_scale_pane_g1

0xb0d0,	// (0x000295e2) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0002d961) mup_scale_pane_g

0xb0f4,	// (0x00029606) msg_data_pane

0xb0fc,	// (0x0002960e) scroll_pane_cp017

0x4bbd,	// (0x000230cf) bg_list_pane_cp04_ParamLimits

0x4bbd,	// (0x000230cf) bg_list_pane_cp04

0xb104,	// (0x00029616) msg_data_pane_g1

0x4be1,	// (0x000230f3) msg_data_pane_g2

0x4be9,	// (0x000230fb) msg_data_pane_g3

0x4bf1,	// (0x00023103) msg_data_pane_g4

0x4bf9,	// (0x0002310b) msg_data_pane_g5

0x4c01,	// (0x00023113) msg_data_pane_g6

0x4c09,	// (0x0002311b) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0002d970) msg_data_pane_g

0x4c11,	// (0x00023123) msg_text_pane_ParamLimits

0x4c11,	// (0x00023123) msg_text_pane

0x4c64,	// (0x00023176) qrid_highlight_pane_cp011_ParamLimits

0x4c64,	// (0x00023176) qrid_highlight_pane_cp011

0xa02e,	// (0x00028540) msg_body_pane

0xa02e,	// (0x00028540) msg_header_pane

0xb115,	// (0x00029627) input_focus_pane_cp07

0x4c8c,	// (0x0002319e) msg_header_pane_t1_ParamLimits

0x4c8c,	// (0x0002319e) msg_header_pane_t1

0x4c9e,	// (0x000231b0) msg_header_pane_t2_ParamLimits

0x4c9e,	// (0x000231b0) msg_header_pane_t2

0x0001,

0xf472,	// (0x0002d984) msg_header_pane_t_ParamLimits

0xf472,	// (0x0002d984) msg_header_pane_t

0xb12a,	// (0x0002963c) msg_body_pane_g1

0x4cb0,	// (0x000231c2) msg_body_pane_t1_ParamLimits

0x4cb0,	// (0x000231c2) msg_body_pane_t1

0x4ce1,	// (0x000231f3) msg_body_pane_t2_ParamLimits

0x4ce1,	// (0x000231f3) msg_body_pane_t2

0x4cf3,	// (0x00023205) msg_body_pane_t3_ParamLimits

0x4cf3,	// (0x00023205) msg_body_pane_t3

0x0002,

0xf477,	// (0x0002d989) msg_body_pane_t_ParamLimits

0xf477,	// (0x0002d989) msg_body_pane_t

0x1226,	// (0x0001f738) main_viewer_pane_g1_ParamLimits

0x1226,	// (0x0001f738) main_viewer_pane_g1

0x1232,	// (0x0001f744) main_viewer_pane_g2_ParamLimits

0x1232,	// (0x0001f744) main_viewer_pane_g2

0x4d27,	// (0x00023239) main_viewer_pane_g3_ParamLimits

0x4d27,	// (0x00023239) main_viewer_pane_g3

0x4d38,	// (0x0002324a) main_viewer_pane_g4_ParamLimits

0x4d38,	// (0x0002324a) main_viewer_pane_g4

0x123e,	// (0x0001f750) main_viewer_pane_g5_ParamLimits

0x123e,	// (0x0001f750) main_viewer_pane_g5

0x123e,	// (0x0001f750) main_viewer_pane_g7_ParamLimits

0x123e,	// (0x0001f750) main_viewer_pane_g7

0xaa7c,	// (0x00028f8e) main_viewer_pane_g8_ParamLimits

0xaa7c,	// (0x00028f8e) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0002d999) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0002d999) main_viewer_pane_g

0xb132,	// (0x00029644) viewer_content_pane_ParamLimits

0xb132,	// (0x00029644) viewer_content_pane

0x4d69,	// (0x0002327b) main_postcard_pane_g1_ParamLimits

0x4d69,	// (0x0002327b) main_postcard_pane_g1

0x4d77,	// (0x00023289) main_postcard_pane_g2_ParamLimits

0x4d77,	// (0x00023289) main_postcard_pane_g2

0x4d85,	// (0x00023297) main_postcard_pane_g3_ParamLimits

0x4d85,	// (0x00023297) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0002d9aa) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0002d9aa) main_postcard_pane_g

0x4d95,	// (0x000232a7) main_postcard_pane_g4

0xc483,	// (0x0002a995) smil_status_volume_pane_g2

0x4dc1,	// (0x000232d3) postcard_pane_ParamLimits

0x4dc1,	// (0x000232d3) postcard_pane

0xafc1,	// (0x000294d3) postcard_pane_g1_ParamLimits

0xafc1,	// (0x000294d3) postcard_pane_g1

0x4df3,	// (0x00023305) postcard_pane_g2_ParamLimits

0x4df3,	// (0x00023305) postcard_pane_g2

0x4dff,	// (0x00023311) postcard_pane_g3_ParamLimits

0x4dff,	// (0x00023311) postcard_pane_g3

0xb140,	// (0x00029652) postcard_pane_g4_ParamLimits

0xb140,	// (0x00029652) postcard_pane_g4

0x4e0b,	// (0x0002331d) postcard_pane_g5_ParamLimits

0x4e0b,	// (0x0002331d) postcard_pane_g5

0x4e17,	// (0x00023329) postcard_pane_g6_ParamLimits

0x4e17,	// (0x00023329) postcard_pane_g6

0xb14e,	// (0x00029660) postcard_pane_g7_ParamLimits

0xb14e,	// (0x00029660) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0002d9b7) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0002d9b7) postcard_pane_g

0x4e23,	// (0x00023335) main_mp2_pane_g1_ParamLimits

0x4e23,	// (0x00023335) main_mp2_pane_g1

0x4e2f,	// (0x00023341) main_mp2_pane_g2_ParamLimits

0x4e2f,	// (0x00023341) main_mp2_pane_g2

0x4e3b,	// (0x0002334d) main_mp2_pane_g3_ParamLimits

0x4e3b,	// (0x0002334d) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0002d9c6) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0002d9c6) main_mp2_pane_g

0x4e47,	// (0x00023359) main_mp2_pane_t1_ParamLimits

0x4e47,	// (0x00023359) main_mp2_pane_t1

0x4e5e,	// (0x00023370) main_mp2_pane_t2_ParamLimits

0x4e5e,	// (0x00023370) main_mp2_pane_t2

0x4e70,	// (0x00023382) main_mp2_pane_t3_ParamLimits

0x4e70,	// (0x00023382) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0002d9cd) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0002d9cd) main_mp2_pane_t

0xb15c,	// (0x0002966e) pec_content_pane_ParamLimits

0xb15c,	// (0x0002966e) pec_content_pane

0xa70b,	// (0x00028c1d) scroll_pane_cp015

0xb16e,	// (0x00029680) pec_attribute_pane_ParamLimits

0xb16e,	// (0x00029680) pec_attribute_pane

0x4e82,	// (0x00023394) pec_content_pane_g1_ParamLimits

0x4e82,	// (0x00023394) pec_content_pane_g1

0xb17e,	// (0x00029690) pec_content_pane_t1_ParamLimits

0xb17e,	// (0x00029690) pec_content_pane_t1

0xb190,	// (0x000296a2) pec_content_pane_t2_ParamLimits

0xb190,	// (0x000296a2) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0002d9d4) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0002d9d4) pec_content_pane_t

0x4e8e,	// (0x000233a0) list_single_graphic_pane_cp01_ParamLimits

0x4e8e,	// (0x000233a0) list_single_graphic_pane_cp01

0xa289,	// (0x0002879b) bg_popup_sub_pane_cp04

0xb1a2,	// (0x000296b4) popup_mup_playback_window_g1

0xb1ae,	// (0x000296c0) popup_mup_playback_window_t1

0xb1c3,	// (0x000296d5) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0002d9d9) popup_mup_playback_window_t

0xb1fa,	// (0x0002970c) main_image_pane_g1_ParamLimits

0xb1fa,	// (0x0002970c) main_image_pane_g1

0xb23d,	// (0x0002974f) scroll_pane_cp018_ParamLimits

0xb23d,	// (0x0002974f) scroll_pane_cp018

0xb255,	// (0x00029767) scroll_pane_cp016_ParamLimits

0xb255,	// (0x00029767) scroll_pane_cp016

0x4f28,	// (0x0002343a) smil2_image_pane_ParamLimits

0x4f28,	// (0x0002343a) smil2_image_pane

0x4f58,	// (0x0002346a) smil2_root_pane_ParamLimits

0x4f58,	// (0x0002346a) smil2_root_pane

0x4f84,	// (0x00023496) smil2_text_pane_ParamLimits

0x4f84,	// (0x00023496) smil2_text_pane

0xa02e,	// (0x00028540) bg_list_pane_cp06

0xb291,	// (0x000297a3) grid_radio_pane

0xa02e,	// (0x00028540) bg_popup_window_pane_cp06

0xb299,	// (0x000297ab) main_fmradio_pane_t1

0xac48,	// (0x0002915a) heading_pane_cp04

0xb2a7,	// (0x000297b9) main_fmradio_pane_t2

0xc2b9,	// (0x0002a7cb) popup_cale_lunar_info_window_g1

0xb2b5,	// (0x000297c7) main_fmradio_pane_t3

0xc2c1,	// (0x0002a7d3) popup_cale_lunar_info_window_g2

0xb2c3,	// (0x000297d5) main_fmradio_pane_t4

0x0001,

0xb2d1,	// (0x000297e3) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0002dac7) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0002d9ee) main_fmradio_pane_t

0xb2df,	// (0x000297f1) wait_bar_pane_cp03

0xb2e7,	// (0x000297f9) cell_fmradio_pane_ParamLimits

0xb2e7,	// (0x000297f9) cell_fmradio_pane

0xb14e,	// (0x00029660) cell_fmradio_pane_g1_ParamLimits

0xb14e,	// (0x00029660) cell_fmradio_pane_g1

0xa02e,	// (0x00028540) grid_highlight_pane_cp011

0xb2fa,	// (0x0002980c) poc_content_pane_ParamLimits

0xb2fa,	// (0x0002980c) poc_content_pane

0xb30c,	// (0x0002981e) scroll_pane_cp019

0x4fc4,	// (0x000234d6) popup_call_poc_act_window_ParamLimits

0x4fc4,	// (0x000234d6) popup_call_poc_act_window

0x4fd1,	// (0x000234e3) popup_call_poc_inact_window_ParamLimits

0x4fd1,	// (0x000234e3) popup_call_poc_inact_window

0xf579,	// (0x0002da8b) bg_popup_call_poc_act_pane_g

0xc279,	// (0x0002a78b) bg_popup_call_poc_inact_pane_g1

0xc281,	// (0x0002a793) bg_popup_call_poc_inact_pane_g2

0xb314,	// (0x00029826) popup_call_poc_act_window_g2

0xc289,	// (0x0002a79b) bg_popup_call_poc_inact_pane_g3

0xc209,	// (0x0002a71b) bg_popup_call_poc_inact_pane_g4

0xc291,	// (0x0002a7a3) bg_popup_call_poc_inact_pane_g5

0xb31c,	// (0x0002982e) popup_call_poc_act_window_t1_ParamLimits

0xb31c,	// (0x0002982e) popup_call_poc_act_window_t1

0xb344,	// (0x00029856) popup_call_poc_act_window_t2_ParamLimits

0xb344,	// (0x00029856) popup_call_poc_act_window_t2

0xb36c,	// (0x0002987e) popup_call_poc_act_window_t3_ParamLimits

0xb36c,	// (0x0002987e) popup_call_poc_act_window_t3

0xb394,	// (0x000298a6) popup_call_poc_act_window_t4_ParamLimits

0xb394,	// (0x000298a6) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0002d9f9) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0002d9f9) popup_call_poc_act_window_t

0xc299,	// (0x0002a7ab) bg_popup_call_poc_inact_pane_g6

0xc2a1,	// (0x0002a7b3) bg_popup_call_poc_inact_pane_g7

0xc2a9,	// (0x0002a7bb) bg_popup_call_poc_inact_pane_g8

0xb3a6,	// (0x000298b8) popup_call_poc_inact_window_g2

0xc2b1,	// (0x0002a7c3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0002daa2) bg_popup_call_poc_inact_pane_g

0xb3ae,	// (0x000298c0) popup_call_poc_inact_window_t1_ParamLimits

0xb3ae,	// (0x000298c0) popup_call_poc_inact_window_t1

0xb3c3,	// (0x000298d5) popup_call_poc_inact_window_t2_ParamLimits

0xb3c3,	// (0x000298d5) popup_call_poc_inact_window_t2

0xb3d8,	// (0x000298ea) popup_call_poc_inact_window_t3_ParamLimits

0xb3d8,	// (0x000298ea) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0002da02) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0002da02) popup_call_poc_inact_window_t

0xc3f6,	// (0x0002a908) context_pane_ParamLimits

0x548d,	// (0x0002399f) signal_pane_ParamLimits

0xa52d,	// (0x00028a3f) main_call2_pane

0x1395,	// (0x0001f8a7) popup_phob_thumbnail2_window_ParamLimits

0x1395,	// (0x0001f8a7) popup_phob_thumbnail2_window

0x11f6,	// (0x0001f708) aid_hotspot_pointer_arrow_pane

0x11fe,	// (0x0001f710) aid_hotspot_pointer_hand_pane

0x52f9,	// (0x0002380b) phob_pre_status_pane_g5

0x2de8,	// (0x000212fa) cams_zoom_pane_ParamLimits

0x2df4,	// (0x00021306) image_vga_pane_ParamLimits

0x2e03,	// (0x00021315) main_camera_pane_g1_ParamLimits

0x2e11,	// (0x00021323) main_camera_pane_g2_ParamLimits

0x2e1d,	// (0x0002132f) main_camera_pane_g3_ParamLimits

0x2e29,	// (0x0002133b) main_camera_pane_g4_ParamLimits

0x2e35,	// (0x00021347) main_camera_pane_g5_ParamLimits

0x2e41,	// (0x00021353) main_camera_pane_g6_ParamLimits

0x2e4d,	// (0x0002135f) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0002d701) main_camera_pane_g_ParamLimits

0x2e59,	// (0x0002136b) main_camera_pane_t1_ParamLimits

0x2e6b,	// (0x0002137d) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0002d712) main_camera_pane_t_ParamLimits

0xa289,	// (0x0002879b) bg_popup_preview_window_pane_cp01_ParamLimits

0xa289,	// (0x0002879b) bg_popup_preview_window_pane_cp01

0xb3ed,	// (0x000298ff) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3ed,	// (0x000298ff) popup_phob_thumbnail2_window_g1

0xa02e,	// (0x00028540) call2_cli_visual_pane

0x4fed,	// (0x000234ff) popup_call2_audio_conf_window_ParamLimits

0x4fed,	// (0x000234ff) popup_call2_audio_conf_window

0x5002,	// (0x00023514) popup_call2_audio_first_window_ParamLimits

0x5002,	// (0x00023514) popup_call2_audio_first_window

0x50a0,	// (0x000235b2) popup_call2_audio_in_window_ParamLimits

0x50a0,	// (0x000235b2) popup_call2_audio_in_window

0x50e2,	// (0x000235f4) popup_call2_audio_out_window_ParamLimits

0x50e2,	// (0x000235f4) popup_call2_audio_out_window

0x5144,	// (0x00023656) popup_call2_audio_second_window_ParamLimits

0x5144,	// (0x00023656) popup_call2_audio_second_window

0x51a2,	// (0x000236b4) popup_call2_audio_wait_window_ParamLimits

0x51a2,	// (0x000236b4) popup_call2_audio_wait_window

0xa02e,	// (0x00028540) bg_popup_call2_act_pane_cp03

0xa26b,	// (0x0002877d) list_conf_pane_cp

0xb3f9,	// (0x0002990b) popup_call2_audio_conf_window_t1

0xb407,	// (0x00029919) list_single_graphic_popup_conf2_pane_ParamLimits

0xb407,	// (0x00029919) list_single_graphic_popup_conf2_pane

0xacb8,	// (0x000291ca) list_highlight_pane_cp04

0xb41a,	// (0x0002992c) list_single_graphic_popup_conf2_pane_g1

0xacc9,	// (0x000291db) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0002da09) list_single_graphic_popup_conf2_pane_g

0xb424,	// (0x00029936) list_single_graphic_popup_conf2_pane_t1

0xb432,	// (0x00029944) bg_popup_call2_act_pane_cp01_ParamLimits

0xb432,	// (0x00029944) bg_popup_call2_act_pane_cp01

0xb4bc,	// (0x000299ce) call_type_pane_cp05_ParamLimits

0xb4bc,	// (0x000299ce) call_type_pane_cp05

0xb510,	// (0x00029a22) popup_call2_audio_second_window_g1_ParamLimits

0xb510,	// (0x00029a22) popup_call2_audio_second_window_g1

0xb564,	// (0x00029a76) popup_call2_audio_second_window_g2_ParamLimits

0xb564,	// (0x00029a76) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0002da0e) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0002da0e) popup_call2_audio_second_window_g

0xb5c9,	// (0x00029adb) popup_call2_audio_second_window_t1_ParamLimits

0xb5c9,	// (0x00029adb) popup_call2_audio_second_window_t1

0xb684,	// (0x00029b96) popup_call2_audio_second_window_t2_ParamLimits

0xb684,	// (0x00029b96) popup_call2_audio_second_window_t2

0xb6d7,	// (0x00029be9) popup_call2_audio_second_window_t3_ParamLimits

0xb6d7,	// (0x00029be9) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0002da15) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0002da15) popup_call2_audio_second_window_t

0xa02e,	// (0x00028540) bg_popup_call2_in_pane_cp02

0xa038,	// (0x0002854a) call_type_pane_cp04

0xa040,	// (0x00028552) popup_call2_audio_wait_window_g1

0xa048,	// (0x0002855a) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0002d5f0) popup_call2_audio_wait_window_g

0xa050,	// (0x00028562) popup_call2_audio_wait_window_t3

0xb7ca,	// (0x00029cdc) bg_popup_call2_act_pane_ParamLimits

0xb7ca,	// (0x00029cdc) bg_popup_call2_act_pane

0xb88a,	// (0x00029d9c) call_type_pane_cp03_ParamLimits

0xb88a,	// (0x00029d9c) call_type_pane_cp03

0xb8ee,	// (0x00029e00) popup_call2_audio_first_window_g1_ParamLimits

0xb8ee,	// (0x00029e00) popup_call2_audio_first_window_g1

0xb95e,	// (0x00029e70) popup_call2_audio_first_window_g2_ParamLimits

0xb95e,	// (0x00029e70) popup_call2_audio_first_window_g2

0xafc1,	// (0x000294d3) popup_call2_audio_first_window_g3_ParamLimits

0xafc1,	// (0x000294d3) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0002da1e) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0002da1e) popup_call2_audio_first_window_g

0xba3c,	// (0x00029f4e) popup_call2_audio_first_window_t1_ParamLimits

0xba3c,	// (0x00029f4e) popup_call2_audio_first_window_t1

0xbb3f,	// (0x0002a051) popup_call2_audio_first_window_t4_ParamLimits

0xbb3f,	// (0x0002a051) popup_call2_audio_first_window_t4

0xbc22,	// (0x0002a134) popup_call2_audio_first_window_t5_ParamLimits

0xbc22,	// (0x0002a134) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0002da29) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0002da29) popup_call2_audio_first_window_t

0xa281,	// (0x00028793) bg_popup_call2_act_pane_g1

0xc2c9,	// (0x0002a7db) popup_cale_lunar_info_window_t1

0xc2d7,	// (0x0002a7e9) popup_cale_lunar_info_window_t2

0xc2e5,	// (0x0002a7f7) popup_cale_lunar_info_window_t3

0xa02e,	// (0x00028540) bg_popup_call2_bubble_pane

0xbd23,	// (0x0002a235) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd23,	// (0x0002a235) bg_popup_call2_in_pane_cp01

0x9d0a,	// (0x0002821c) call_type_pane_cp02

0xbd6b,	// (0x0002a27d) popup_call2_audio_out_window_g1_ParamLimits

0xbd6b,	// (0x0002a27d) popup_call2_audio_out_window_g1

0xbd97,	// (0x0002a2a9) popup_call2_audio_out_window_g2_ParamLimits

0xbd97,	// (0x0002a2a9) popup_call2_audio_out_window_g2

0xbdbf,	// (0x0002a2d1) popup_call2_audio_out_window_g3_ParamLimits

0xbdbf,	// (0x0002a2d1) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0002da32) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0002da32) popup_call2_audio_out_window_g

0xbdfa,	// (0x0002a30c) popup_call2_audio_out_window_t1_ParamLimits

0xbdfa,	// (0x0002a30c) popup_call2_audio_out_window_t1

0xbe59,	// (0x0002a36b) popup_call2_audio_out_window_t2_ParamLimits

0xbe59,	// (0x0002a36b) popup_call2_audio_out_window_t2

0xbead,	// (0x0002a3bf) popup_call2_audio_out_window_t3_ParamLimits

0xbead,	// (0x0002a3bf) popup_call2_audio_out_window_t3

0xbec3,	// (0x0002a3d5) popup_call2_audio_out_window_t4_ParamLimits

0xbec3,	// (0x0002a3d5) popup_call2_audio_out_window_t4

0xbed9,	// (0x0002a3eb) popup_call2_audio_out_window_t5_ParamLimits

0xbed9,	// (0x0002a3eb) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0002da3b) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0002da3b) popup_call2_audio_out_window_t

0xbf3d,	// (0x0002a44f) bg_popup_call2_in_pane_ParamLimits

0xbf3d,	// (0x0002a44f) bg_popup_call2_in_pane

0xbf99,	// (0x0002a4ab) popup_call2_audio_in_window_g1_ParamLimits

0xbf99,	// (0x0002a4ab) popup_call2_audio_in_window_g1

0xbfd1,	// (0x0002a4e3) popup_call2_audio_in_window_g2_ParamLimits

0xbfd1,	// (0x0002a4e3) popup_call2_audio_in_window_g2

0xc009,	// (0x0002a51b) popup_call2_audio_in_window_g3_ParamLimits

0xc009,	// (0x0002a51b) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0002da48) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0002da48) popup_call2_audio_in_window_g

0xc061,	// (0x0002a573) popup_call2_audio_in_window_t1_ParamLimits

0xc061,	// (0x0002a573) popup_call2_audio_in_window_t1

0xc0e1,	// (0x0002a5f3) popup_call2_audio_in_window_t2_ParamLimits

0xc0e1,	// (0x0002a5f3) popup_call2_audio_in_window_t2

0xc161,	// (0x0002a673) popup_call2_audio_in_window_t3_ParamLimits

0xc161,	// (0x0002a673) popup_call2_audio_in_window_t3

0xc17b,	// (0x0002a68d) popup_call2_audio_in_window_t4_ParamLimits

0xc17b,	// (0x0002a68d) popup_call2_audio_in_window_t4

0xc18d,	// (0x0002a69f) popup_call2_audio_in_window_t5_ParamLimits

0xc18d,	// (0x0002a69f) popup_call2_audio_in_window_t5

0xc19f,	// (0x0002a6b1) popup_call2_audio_in_window_t6_ParamLimits

0xc19f,	// (0x0002a6b1) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0002da51) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0002da51) popup_call2_audio_in_window_t

0xa281,	// (0x00028793) bg_popup_call2_in_pane_g1

0xc2f3,	// (0x0002a805) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0002dacc) popup_cale_lunar_info_window_t

0xa289,	// (0x0002879b) bg_popup_call2_rect_pane_ParamLimits

0xa289,	// (0x0002879b) bg_popup_call2_rect_pane

0xa02e,	// (0x00028540) call2_cli_visual_graphic_pane

0xa02e,	// (0x00028540) call2_cli_visual_text_pane

0x13e4,	// (0x0001f8f6) smil_status_volume_pane_g3

0x0002,

0xa3af,	// (0x000288c1) call2_cli_visual_graphic_pane_g1

0xa3af,	// (0x000288c1) call2_cli_visual_graphic_pane_g2

0xa3af,	// (0x000288c1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0002da5e) call2_cli_visual_graphic_pane_g

0xc1b1,	// (0x0002a6c3) bg_popup_call2_rect_pane_g1

0xa43b,	// (0x0002894d) bg_popup_call2_rect_pane_g2

0xc1b9,	// (0x0002a6cb) bg_popup_call2_rect_pane_g3

0xc1c1,	// (0x0002a6d3) bg_popup_call2_rect_pane_g4

0xc1c9,	// (0x0002a6db) bg_popup_call2_rect_pane_g5

0xc1d1,	// (0x0002a6e3) bg_popup_call2_rect_pane_g6

0xc1d9,	// (0x0002a6eb) bg_popup_call2_rect_pane_g7

0xc1e1,	// (0x0002a6f3) bg_popup_call2_rect_pane_g8

0xc1e9,	// (0x0002a6fb) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0002da65) bg_popup_call2_rect_pane_g

0xc1f1,	// (0x0002a703) bg_popup_call2_bubble_pane_g1

0xc1f9,	// (0x0002a70b) bg_popup_call2_bubble_pane_g2

0xc201,	// (0x0002a713) bg_popup_call2_bubble_pane_g3

0xc209,	// (0x0002a71b) bg_popup_call2_bubble_pane_g4

0xc211,	// (0x0002a723) bg_popup_call2_bubble_pane_g5

0xc219,	// (0x0002a72b) bg_popup_call2_bubble_pane_g6

0xc221,	// (0x0002a733) bg_popup_call2_bubble_pane_g7

0xc229,	// (0x0002a73b) bg_popup_call2_bubble_pane_g8

0xc231,	// (0x0002a743) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0002da78) bg_popup_call2_bubble_pane_g

0x29ec,	// (0x00020efe) aid_cale_week_size_cell_pane

0x2e7d,	// (0x0002138f) aid_cams_cif_uncrop_pane_ParamLimits

0x2e7d,	// (0x0002138f) aid_cams_cif_uncrop_pane

0x2fd8,	// (0x000214ea) aid_cams_size_cell_ParamLimits

0x2fd8,	// (0x000214ea) aid_cams_size_cell

0x2fe4,	// (0x000214f6) grid_cams_pane_ParamLimits

0x2ff2,	// (0x00021504) linegrid_cams_pane_ParamLimits

0x31de,	// (0x000216f0) call_video_pane_t1

0x31ff,	// (0x00021711) call_video_pane_t2

0x0001,

0xf253,	// (0x0002d765) call_video_pane_t

0x374d,	// (0x00021c5f) aid_cale_month_size_cell_pane_ParamLimits

0x374d,	// (0x00021c5f) aid_cale_month_size_cell_pane

0xf603,	// (0x0002db15) smil_status_volume_pane_g

0x13f1,	// (0x0001f903) volume_smil_pane_ParamLimits

0x0b93,	// (0x0001f0a5) aid_popup2_width_pane

0x292e,	// (0x00020e40) cell_qdial_pane_g4_ParamLimits

0x292e,	// (0x00020e40) cell_qdial_pane_g4

0x46cc,	// (0x00022bde) aid_blid_cardinal_pane_ParamLimits

0x46dc,	// (0x00022bee) aid_blid_destination_pane_ParamLimits

0x46dc,	// (0x00022bee) aid_blid_destination_pane

0xa289,	// (0x0002879b) bg_popup_call_poc_act_pane_ParamLimits

0xa289,	// (0x0002879b) bg_popup_call_poc_act_pane

0xa289,	// (0x0002879b) bg_popup_call_poc_inact_pane_ParamLimits

0xa289,	// (0x0002879b) bg_popup_call_poc_inact_pane

0xc239,	// (0x0002a74b) bg_popup_call_poc_act_pane_g1

0xc241,	// (0x0002a753) bg_popup_call_poc_act_pane_g2

0xc249,	// (0x0002a75b) bg_popup_call_poc_act_pane_g3

0xc209,	// (0x0002a71b) bg_popup_call_poc_act_pane_g4

0xc211,	// (0x0002a723) bg_popup_call_poc_act_pane_g5

0xc251,	// (0x0002a763) bg_popup_call_poc_act_pane_g6

0xc221,	// (0x0002a733) bg_popup_call_poc_act_pane_g7

0xc259,	// (0x0002a76b) bg_popup_call_poc_act_pane_g8

0xa02e,	// (0x00028540) main_usb_pane

0x12c8,	// (0x0001f7da) popup_cale_lunar_info_window

0x351c,	// (0x00021a2e) im_reading_pane_t1_ParamLimits

0xa663,	// (0x00028b75) list_im_pane_ParamLimits

0xa674,	// (0x00028b86) scroll_pane_cp07_ParamLimits

0xa02e,	// (0x00028540) grid_highlight_pane_cp012

0xa289,	// (0x0002879b) mup_scale_pane_ParamLimits

0xafc1,	// (0x000294d3) main_usb_pane_g1_ParamLimits

0xafc1,	// (0x000294d3) main_usb_pane_g1

0x521c,	// (0x0002372e) main_usb_pane_g2_ParamLimits

0x521c,	// (0x0002372e) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0002dab5) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0002dab5) main_usb_pane_g

0x5228,	// (0x0002373a) main_usb_pane_t1_ParamLimits

0x5228,	// (0x0002373a) main_usb_pane_t1

0x523a,	// (0x0002374c) main_usb_pane_t2_ParamLimits

0x523a,	// (0x0002374c) main_usb_pane_t2

0x524c,	// (0x0002375e) main_usb_pane_t3_ParamLimits

0x524c,	// (0x0002375e) main_usb_pane_t3

0x525e,	// (0x00023770) main_usb_pane_t4_ParamLimits

0x525e,	// (0x00023770) main_usb_pane_t4

0x5270,	// (0x00023782) main_usb_pane_t5_ParamLimits

0x5270,	// (0x00023782) main_usb_pane_t5

0x5282,	// (0x00023794) main_usb_pane_t6_ParamLimits

0x5282,	// (0x00023794) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0002daba) main_usb_pane_t_ParamLimits

0x4672,	// (0x00022b84) aid_text_placing

0x467e,	// (0x00022b90) main_location2_pane_t1_ParamLimits

0x4692,	// (0x00022ba4) main_location2_pane_t2_ParamLimits

0x46a6,	// (0x00022bb8) main_location2_pane_t3_ParamLimits

0x46ba,	// (0x00022bcc) main_location2_pane_t4_ParamLimits

0x46ba,	// (0x00022bcc) main_location2_pane_t4

0xf3b4,	// (0x0002d8c6) main_location2_pane_t_ParamLimits

0xa2c5,	// (0x000287d7) find_pinb_pane_g2_ParamLimits

0xa2c5,	// (0x000287d7) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0002d616) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0002d616) find_pinb_pane_g

0xa2d1,	// (0x000287e3) find_pinb_pane_t1_ParamLimits

0xa2e3,	// (0x000287f5) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0002d61b) find_pinb_pane_t_ParamLimits

0xa02e,	// (0x00028540) main_call3_pane

0x3d10,	// (0x00022222) cale_month_day_heading_pane_t1_ParamLimits

0x3d96,	// (0x000222a8) cale_month_day_heading_pane_t2_ParamLimits

0x3e0f,	// (0x00022321) cale_month_day_heading_pane_t3_ParamLimits

0x3e88,	// (0x0002239a) cale_month_day_heading_pane_t4_ParamLimits

0x3f01,	// (0x00022413) cale_month_day_heading_pane_t5_ParamLimits

0x3f7a,	// (0x0002248c) cale_month_day_heading_pane_t6_ParamLimits

0x3ff3,	// (0x00022505) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0002d79d) cale_month_day_heading_pane_t_ParamLimits

0xa8be,	// (0x00028dd0) smil_status_volume_pane

0x4ddb,	// (0x000232ed) postcard_address_pane_ParamLimits

0x4ddb,	// (0x000232ed) postcard_address_pane

0x4de7,	// (0x000232f9) postcard_message_pane_ParamLimits

0x4de7,	// (0x000232f9) postcard_message_pane

0x51e1,	// (0x000236f3) call2_cli_visual_pane_t1_ParamLimits

0x51e1,	// (0x000236f3) call2_cli_visual_pane_t1

0x5678,	// (0x00023b8a) postcard_message_pane_t1_ParamLimits

0x5678,	// (0x00023b8a) postcard_message_pane_t1

0x5661,	// (0x00023b73) postcard_address_pane_t1_ParamLimits

0x5661,	// (0x00023b73) postcard_address_pane_t1

0x5652,	// (0x00023b64) popup_call3_audio_in_window_ParamLimits

0x5652,	// (0x00023b64) popup_call3_audio_in_window

0x5536,	// (0x00023a48) bg_popup_call3_in_pane_ParamLimits

0x5536,	// (0x00023a48) bg_popup_call3_in_pane

0x5598,	// (0x00023aaa) popup_call3_audio_in_window_g1_ParamLimits

0x5598,	// (0x00023aaa) popup_call3_audio_in_window_g1

0x55b0,	// (0x00023ac2) popup_call3_audio_in_window_g2_ParamLimits

0x55b0,	// (0x00023ac2) popup_call3_audio_in_window_g2

0x55c8,	// (0x00023ada) popup_call3_audio_in_window_g3_ParamLimits

0x55c8,	// (0x00023ada) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0002db1c) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0002db1c) popup_call3_audio_in_window_g

0x55f0,	// (0x00023b02) popup_call3_audio_in_window_t1_ParamLimits

0x55f0,	// (0x00023b02) popup_call3_audio_in_window_t1

0x5618,	// (0x00023b2a) popup_call3_audio_in_window_t2_ParamLimits

0x5618,	// (0x00023b2a) popup_call3_audio_in_window_t2

0x5640,	// (0x00023b52) popup_call3_audio_in_window_t3_ParamLimits

0x5640,	// (0x00023b52) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0002db25) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0002db25) popup_call3_audio_in_window_t

0xa52d,	// (0x00028a3f) bg_popup_call3_rect_pane

0xc1b1,	// (0x0002a6c3) bg_popup_call3_rect_pane_g1

0xa43b,	// (0x0002894d) bg_popup_call3_rect_pane_g2

0xc1b9,	// (0x0002a6cb) bg_popup_call3_rect_pane_g3

0xc1c1,	// (0x0002a6d3) bg_popup_call3_rect_pane_g4

0xc1c9,	// (0x0002a6db) bg_popup_call3_rect_pane_g5

0xc1d1,	// (0x0002a6e3) bg_popup_call3_rect_pane_g6

0xc1d9,	// (0x0002a6eb) bg_popup_call3_rect_pane_g7

0x49d0,	// (0x00022ee2) mup_visualizer_osc_pane

0xb062,	// (0x00029574) mup_visualizer_spec_pane

0x5556,	// (0x00023a68) call3_video_qcif_pane_ParamLimits

0x5556,	// (0x00023a68) call3_video_qcif_pane

0x5568,	// (0x00023a7a) call3_video_qcif_uncrop_pane_ParamLimits

0x5568,	// (0x00023a7a) call3_video_qcif_uncrop_pane

0x5576,	// (0x00023a88) call3_video_subqcif_pane_ParamLimits

0x5576,	// (0x00023a88) call3_video_subqcif_pane

0x5588,	// (0x00023a9a) call3_video_subqcif_uncrop_pane_ParamLimits

0x5588,	// (0x00023a9a) call3_video_subqcif_uncrop_pane

0x55e0,	// (0x00023af2) popup_call3_audio_in_window_g4_ParamLimits

0x55e0,	// (0x00023af2) popup_call3_audio_in_window_g4

0x5523,	// (0x00023a35) mup_spec_half_pane

0x552c,	// (0x00023a3e) mup_spec_half_pane_cp

0xc456,	// (0x0002a968) mup_osc_middle_pane

0xc45f,	// (0x0002a971) mup_visualizer_osc_pane_g1

0x5504,	// (0x00023a16) mup_spec_bar_pane_ParamLimits

0x5504,	// (0x00023a16) mup_spec_bar_pane

0xc443,	// (0x0002a955) mup_spec_bar_pane_g1

0xc44d,	// (0x0002a95f) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0002db10) mup_spec_bar_pane_g

0x29ec,	// (0x00020efe) aid_cale_week_size_cell_pane_ParamLimits

0x2a01,	// (0x00020f13) bg_cale_heading_pane_ParamLimits

0xa486,	// (0x00028998) bg_cale_pane_cp01_ParamLimits

0x2a23,	// (0x00020f35) cale_week_corner_pane_ParamLimits

0x2a3d,	// (0x00020f4f) cale_week_day_heading_pane_ParamLimits

0x2a5f,	// (0x00020f71) cale_week_scroll_pane_g1_ParamLimits

0x2a7c,	// (0x00020f8e) cale_week_scroll_pane_g2_ParamLimits

0x2a8f,	// (0x00020fa1) cale_week_scroll_pane_g3_ParamLimits

0x2aa2,	// (0x00020fb4) cale_week_scroll_pane_g4_ParamLimits

0x2ab5,	// (0x00020fc7) cale_week_scroll_pane_g5_ParamLimits

0x2ac8,	// (0x00020fda) cale_week_scroll_pane_g6_ParamLimits

0x2adb,	// (0x00020fed) cale_week_scroll_pane_g7_ParamLimits

0x2af0,	// (0x00021002) cale_week_scroll_pane_g8_ParamLimits

0x2b05,	// (0x00021017) cale_week_scroll_pane_g9_ParamLimits

0x2b18,	// (0x0002102a) cale_week_scroll_pane_g10_ParamLimits

0x2b2b,	// (0x0002103d) cale_week_scroll_pane_g11_ParamLimits

0x2b3e,	// (0x00021050) cale_week_scroll_pane_g12_ParamLimits

0x2b55,	// (0x00021067) cale_week_scroll_pane_g13_ParamLimits

0x2b70,	// (0x00021082) cale_week_scroll_pane_g14_ParamLimits

0x2b8b,	// (0x0002109d) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0002d6a7) cale_week_scroll_pane_g_ParamLimits

0x2bbb,	// (0x000210cd) cale_week_time_pane_ParamLimits

0x2bd0,	// (0x000210e2) grid_cale_week_pane_ParamLimits

0xa4a3,	// (0x000289b5) listscroll_cale_week_pane_t1

0xa4b5,	// (0x000289c7) scroll_pane_cp08_ParamLimits

0x37c1,	// (0x00021cd3) cale_month_corner_pane_ParamLimits

0xa894,	// (0x00028da6) cale_month_pane_t1

0x3c8f,	// (0x000221a1) cale_month_week_pane_ParamLimits

0xafc1,	// (0x000294d3) popup_call_status_window_g1_ParamLimits

0x44ea,	// (0x000229fc) popup_call_status_window_g2_ParamLimits

0x44f6,	// (0x00022a08) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0002d84d) popup_call_status_window_g_ParamLimits

0xac38,	// (0x0002914a) aid_call2_pane

0x4c80,	// (0x00023192) msg_header_pane_g1

0x4ddb,	// (0x000232ed) postcard_address2_pane_ParamLimits

0x4ddb,	// (0x000232ed) postcard_address2_pane

0x4de7,	// (0x000232f9) postcard_message2_pane_ParamLimits

0x4de7,	// (0x000232f9) postcard_message2_pane

0x549b,	// (0x000239ad) message2_row_pane_ParamLimits

0x549b,	// (0x000239ad) message2_row_pane

0x54b6,	// (0x000239c8) address2_row_pane_ParamLimits

0x54b6,	// (0x000239c8) address2_row_pane

0xc411,	// (0x0002a923) postcard_message2_row_pane_g1

0xc419,	// (0x0002a92b) postcard_message2_row_pane_t1

0xc411,	// (0x0002a923) address2_row_pane_g1

0xc419,	// (0x0002a92b) address2_row_pane_t1

0x2d6d,	// (0x0002127f) aid_size_cell_vorec

0xa02e,	// (0x00028540) main_rss_pane

0x54c9,	// (0x000239db) rss_list_single_pane_ParamLimits

0x54c9,	// (0x000239db) rss_list_single_pane

0xc427,	// (0x0002a939) rss_list_single_pane_t1

0xc435,	// (0x0002a947) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0002db0b) rss_list_single_pane_t

0xa02e,	// (0x00028540) main_camera2_pane

0xa02e,	// (0x00028540) main_video2_pane

0x144f,	// (0x0001f961) cams_zoom_pane_cp2_ParamLimits

0x144f,	// (0x0001f961) cams_zoom_pane_cp2

0x145b,	// (0x0001f96d) image2_vga_pane_ParamLimits

0x145b,	// (0x0001f96d) image2_vga_pane

0x146a,	// (0x0001f97c) main_camera2_pane_g1_ParamLimits

0x146a,	// (0x0001f97c) main_camera2_pane_g1

0x1476,	// (0x0001f988) main_camera2_pane_g2_ParamLimits

0x1476,	// (0x0001f988) main_camera2_pane_g2

0x1482,	// (0x0001f994) main_camera2_pane_g3_ParamLimits

0x1482,	// (0x0001f994) main_camera2_pane_g3

0x148e,	// (0x0001f9a0) main_camera2_pane_g4_ParamLimits

0x148e,	// (0x0001f9a0) main_camera2_pane_g4

0x149a,	// (0x0001f9ac) main_camera2_pane_g5_ParamLimits

0x149a,	// (0x0001f9ac) main_camera2_pane_g5

0x14a6,	// (0x0001f9b8) main_camera2_pane_g6_ParamLimits

0x14a6,	// (0x0001f9b8) main_camera2_pane_g6

0x14b2,	// (0x0001f9c4) main_camera2_pane_g7_ParamLimits

0x14b2,	// (0x0001f9c4) main_camera2_pane_g7

0x14be,	// (0x0001f9d0) main_camera2_pane_g8_ParamLimits

0x14be,	// (0x0001f9d0) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0002db2c) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0002db2c) main_camera2_pane_g

0x14d6,	// (0x0001f9e8) main_camera2_pane_t1_ParamLimits

0x14d6,	// (0x0001f9e8) main_camera2_pane_t1

0x14e8,	// (0x0001f9fa) main_camera2_pane_t2_ParamLimits

0x14e8,	// (0x0001f9fa) main_camera2_pane_t2

0x14fa,	// (0x0001fa0c) main_camera2_pane_t3_ParamLimits

0x14fa,	// (0x0001fa0c) main_camera2_pane_t3

0x150c,	// (0x0001fa1e) main_camera2_pane_t4_ParamLimits

0x150c,	// (0x0001fa1e) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0002db3f) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0002db3f) main_camera2_pane_t

0x156e,	// (0x0001fa80) cams_zoom_pane_cp4_ParamLimits

0x156e,	// (0x0001fa80) cams_zoom_pane_cp4

0x157e,	// (0x0001fa90) image2_cif_pane_ParamLimits

0x157e,	// (0x0001fa90) image2_cif_pane

0x1593,	// (0x0001faa5) image2_subqcif_pane_ParamLimits

0x1593,	// (0x0001faa5) image2_subqcif_pane

0x15a2,	// (0x0001fab4) main_video2_pane_g1_ParamLimits

0x15a2,	// (0x0001fab4) main_video2_pane_g1

0x15b4,	// (0x0001fac6) main_video2_pane_g2_ParamLimits

0x15b4,	// (0x0001fac6) main_video2_pane_g2

0x15c4,	// (0x0001fad6) main_video2_pane_g3_ParamLimits

0x15c4,	// (0x0001fad6) main_video2_pane_g3

0x15d4,	// (0x0001fae6) main_video2_pane_g4_ParamLimits

0x15d4,	// (0x0001fae6) main_video2_pane_g4

0x15e4,	// (0x0001faf6) main_video2_pane_g5_ParamLimits

0x15e4,	// (0x0001faf6) main_video2_pane_g5

0x15f4,	// (0x0001fb06) main_video2_pane_g6_ParamLimits

0x15f4,	// (0x0001fb06) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0002db4e) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0002db4e) main_video2_pane_g

0x1606,	// (0x0001fb18) main_video2_pane_t1_ParamLimits

0x1606,	// (0x0001fb18) main_video2_pane_t1

0x1620,	// (0x0001fb32) main_video2_pane_t2_ParamLimits

0x1620,	// (0x0001fb32) main_video2_pane_t2

0x1646,	// (0x0001fb58) main_video2_pane_t3_ParamLimits

0x1646,	// (0x0001fb58) main_video2_pane_t3

0x0002,

0xf649,	// (0x0002db5b) main_video2_pane_t_ParamLimits

0xf649,	// (0x0002db5b) main_video2_pane_t

0x5339,	// (0x0002384b) call_muted_g2

0x0001,

0xf5eb,	// (0x0002dafd) call_muted_g

0xa02e,	// (0x00028540) main_mup2_pane

0xc496,	// (0x0002a9a8) main_mup2_pane_g1_ParamLimits

0xc496,	// (0x0002a9a8) main_mup2_pane_g1

0x5693,	// (0x00023ba5) main_mup2_pane_g2_ParamLimits

0x5693,	// (0x00023ba5) main_mup2_pane_g2

0x1695,	// (0x0001fba7) main_mup_pane_g13_cp1

0x169d,	// (0x0001fbaf) mup_volume_pane_cp1

0x56b3,	// (0x00023bc5) main_mup2_pane_g4_ParamLimits

0x56b3,	// (0x00023bc5) main_mup2_pane_g4

0x56c8,	// (0x00023bda) main_mup2_pane_g5_ParamLimits

0x56c8,	// (0x00023bda) main_mup2_pane_g5

0x56dd,	// (0x00023bef) main_mup2_pane_g6_ParamLimits

0x56dd,	// (0x00023bef) main_mup2_pane_g6

0x56f2,	// (0x00023c04) main_mup2_pane_g7_ParamLimits

0x56f2,	// (0x00023c04) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0002db62) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0002db62) main_mup2_pane_g

0x570e,	// (0x00023c20) main_mup2_pane_t1_ParamLimits

0x570e,	// (0x00023c20) main_mup2_pane_t1

0x5725,	// (0x00023c37) main_mup2_pane_t2_ParamLimits

0x5725,	// (0x00023c37) main_mup2_pane_t2

0x573c,	// (0x00023c4e) main_mup2_pane_t3_ParamLimits

0x573c,	// (0x00023c4e) main_mup2_pane_t3

0x5753,	// (0x00023c65) main_mup2_pane_t4_ParamLimits

0x5753,	// (0x00023c65) main_mup2_pane_t4

0x576d,	// (0x00023c7f) main_mup2_pane_t5_ParamLimits

0x576d,	// (0x00023c7f) main_mup2_pane_t5

0x5787,	// (0x00023c99) main_mup2_pane_t6_ParamLimits

0x5787,	// (0x00023c99) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0002db71) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0002db71) main_mup2_pane_t

0x57bf,	// (0x00023cd1) mup2_visualizer_pane_ParamLimits

0x57bf,	// (0x00023cd1) mup2_visualizer_pane

0x57f5,	// (0x00023d07) mup_progress_pane_cp_ParamLimits

0x57f5,	// (0x00023d07) mup_progress_pane_cp

0x1680,	// (0x0001fb92) mup_volume_pane_cp_ParamLimits

0x1680,	// (0x0001fb92) mup_volume_pane_cp

0x580c,	// (0x00023d1e) mup2_visualizer_pane_g1_ParamLimits

0x580c,	// (0x00023d1e) mup2_visualizer_pane_g1

0xc4a2,	// (0x0002a9b4) mup2_visualizer_pane_g2_ParamLimits

0xc4a2,	// (0x0002a9b4) mup2_visualizer_pane_g2

0x5821,	// (0x00023d33) mup2_visualizer_pane_g3_ParamLimits

0x5821,	// (0x00023d33) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0002db7e) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0002db7e) mup2_visualizer_pane_g

0xb289,	// (0x0002979b) aid_size_cell_fmradio

0x125c,	// (0x0001f76e) aid_height_parent_landcape

0xa6f2,	// (0x00028c04) wml_content_pane_cp

0xa6fa,	// (0x00028c0c) wml_tabs_pane

0xa703,	// (0x00028c15) popup_wml_miniature_window

0xa70b,	// (0x00028c1d) scroll_pane_cp021

0xa71f,	// (0x00028c31) wml_content_pane_comp8

0xa02e,	// (0x00028540) bg_popup_sub_pane_cp05

0xc4c0,	// (0x0002a9d2) popup_wml_miniature_window_g1

0xc4c8,	// (0x0002a9da) wml_miniature_view_pane

0x582f,	// (0x00023d41) aid_size_wml_view

0x5837,	// (0x00023d49) wml_miniature_view_pane_g1

0x5840,	// (0x00023d52) wml_miniature_view_pane_g2

0x5849,	// (0x00023d5b) wml_miniature_view_pane_g3

0x5851,	// (0x00023d63) wml_miniature_view_pane_g4

0x5859,	// (0x00023d6b) wml_miniature_view_pane_g5

0x5861,	// (0x00023d73) wml_miniature_view_pane_g6

0x5869,	// (0x00023d7b) wml_miniature_view_pane_g7

0x5871,	// (0x00023d83) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0002db85) wml_miniature_view_pane_g

0xc496,	// (0x0002a9a8) background_graphic_ParamLimits

0xc496,	// (0x0002a9a8) background_graphic

0xc4d0,	// (0x0002a9e2) wml_tabs_2_pane

0xc4d9,	// (0x0002a9eb) wml_tabs_3_pane_ParamLimits

0xc4d9,	// (0x0002a9eb) wml_tabs_3_pane

0xc4eb,	// (0x0002a9fd) wml_tabs_4_pane_ParamLimits

0xc4eb,	// (0x0002a9fd) wml_tabs_4_pane

0xc501,	// (0x0002aa13) wml_tabs_5_pane_ParamLimits

0xc501,	// (0x0002aa13) wml_tabs_5_pane

0xc51b,	// (0x0002aa2d) wml_tabs_pane_g2_ParamLimits

0xc51b,	// (0x0002aa2d) wml_tabs_pane_g2

0xc52f,	// (0x0002aa41) wml_tabs_pane_g3_ParamLimits

0xc52f,	// (0x0002aa41) wml_tabs_pane_g3

0x5879,	// (0x00023d8b) wml_tabs_2_active_pane_ParamLimits

0x5879,	// (0x00023d8b) wml_tabs_2_active_pane

0x5889,	// (0x00023d9b) wml_tabs_2_passive_pane_ParamLimits

0x5889,	// (0x00023d9b) wml_tabs_2_passive_pane

0x5899,	// (0x00023dab) wml_tabs_3_active_pane_cp_ParamLimits

0x5899,	// (0x00023dab) wml_tabs_3_active_pane_cp

0x58aa,	// (0x00023dbc) wml_tabs_3_passive_pane_ParamLimits

0x58aa,	// (0x00023dbc) wml_tabs_3_passive_pane

0x58bb,	// (0x00023dcd) wml_tabs_3_passive_pane_cp_ParamLimits

0x58bb,	// (0x00023dcd) wml_tabs_3_passive_pane_cp

0x58cc,	// (0x00023dde) tabs_4_active_pane

0x58d4,	// (0x00023de6) tabs_4_passive_pane

0x58dc,	// (0x00023dee) tabs_4_passive_pane_cp

0x58e4,	// (0x00023df6) tabs_4_passive_pane_cp2

0x5214,	// (0x00023726) aid_height_text

0x4999,	// (0x00022eab) mup_volume_cont_pane_ParamLimits

0x4999,	// (0x00022eab) mup_volume_cont_pane

0x26cd,	// (0x00020bdf) aid_size_cell_pinb

0x26d7,	// (0x00020be9) aid_size_list_pinb

0x57de,	// (0x00023cf0) mup2_volume_cont_pane_ParamLimits

0x57de,	// (0x00023cf0) mup2_volume_cont_pane

0x166c,	// (0x0001fb7e) mup2_volume_cont_pane_g1_ParamLimits

0x166c,	// (0x0001fb7e) mup2_volume_cont_pane_g1

0x0b9f,	// (0x0001f0b1) aid_size_cell_touch_ParamLimits

0x0b9f,	// (0x0001f0b1) aid_size_cell_touch

0x0e27,	// (0x0001f339) touch_pane_ParamLimits

0x0e27,	// (0x0001f339) touch_pane

0x0e1d,	// (0x0001f32f) main_rss2_pane

0xc54c,	// (0x0002aa5e) listscroll_rss2_pane

0xc555,	// (0x0002aa67) rss2_navigation_pane

0xc55d,	// (0x0002aa6f) list_rss2_pane

0xad5d,	// (0x0002926f) scroll_pane_cp22

0xc565,	// (0x0002aa77) rss2_navigation_pane_g1

0xc56e,	// (0x0002aa80) rss2_navigation_pane_g2

0xc576,	// (0x0002aa88) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0002db96) rss2_navigation_pane_g

0xc57e,	// (0x0002aa90) rss2_navigation_pane_t1

0x58ec,	// (0x00023dfe) rss2_list_single_pane_ParamLimits

0x58ec,	// (0x00023dfe) rss2_list_single_pane

0xc58c,	// (0x0002aa9e) rss2_list_single_pane_t2

0xc59a,	// (0x0002aaac) rss2_list_single_pane_t3_ParamLimits

0xc59a,	// (0x0002aaac) rss2_list_single_pane_t3

0xc5b7,	// (0x0002aac9) rss2_list_single_pane_t4

0x4287,	// (0x00022799) smil_status_pane_g1

0x1273,	// (0x0001f785) main_image2_pane_ParamLimits

0x1273,	// (0x0001f785) main_image2_pane

0x14ca,	// (0x0001f9dc) main_camera2_pane_g9_ParamLimits

0x14ca,	// (0x0001f9dc) main_camera2_pane_g9

0x151e,	// (0x0001fa30) main_camera2_pane_t5_ParamLimits

0x151e,	// (0x0001fa30) main_camera2_pane_t5

0x1530,	// (0x0001fa42) main_camera2_pane_t6_ParamLimits

0x1530,	// (0x0001fa42) main_camera2_pane_t6

0x5920,	// (0x00023e32) main_image2_pane_g1_ParamLimits

0x5920,	// (0x00023e32) main_image2_pane_g1

0x4fae,	// (0x000234c0) smil2_video_pane_ParamLimits

0x4fae,	// (0x000234c0) smil2_video_pane

0x0bd3,	// (0x0001f0e5) aid_zoom_text_primary_cp

0x0dc4,	// (0x0001f2d6) popup_preview_fixed_window

0xa65b,	// (0x00028b6d) im_reading_pane_g1

0x1414,	// (0x0001f926) cams2_bc_adjust_pane_cp_ParamLimits

0x1414,	// (0x0001f926) cams2_bc_adjust_pane_cp

0x1560,	// (0x0001fa72) cams2_bc_adjust_pane_ParamLimits

0x1560,	// (0x0001fa72) cams2_bc_adjust_pane

0xd80f,	// (0x0002bd21) cams2_bc_adjust_pane_g1

0x16a5,	// (0x0001fbb7) cams2_slider_pane

0x16ae,	// (0x0001fbc0) cams2_slider_pane_g1

0x16b7,	// (0x0001fbc9) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0002db9d) cams2_slider_pane_g

0x0e98,	// (0x0001f3aa) calc_display_pane_ParamLimits

0x0eb6,	// (0x0001f3c8) calc_paper_pane_ParamLimits

0x0ed2,	// (0x0001f3e4) grid_calc_pane_ParamLimits

0x11c7,	// (0x0001f6d9) popup_clock_digital_window_t1_ParamLimits

0xb226,	// (0x00029738) main_image_pane_t1

0x0e7e,	// (0x0001f390) aid_size_cell_calc_ParamLimits

0x0e7e,	// (0x0001f390) aid_size_cell_calc

0x12a4,	// (0x0001f7b6) popup_blid_sat_info2_window_ParamLimits

0x12a4,	// (0x0001f7b6) popup_blid_sat_info2_window

0xc5cd,	// (0x0002aadf) aid_size_cell_blid

0xc5d5,	// (0x0002aae7) bg_popup_window_pane_cp07

0xc5f8,	// (0x0002ab0a) grid_popup_blid_pane

0xc602,	// (0x0002ab14) heading_pane_cp05_ParamLimits

0xc602,	// (0x0002ab14) heading_pane_cp05

0xc6cc,	// (0x0002abde) cell_popup_blid_pane_ParamLimits

0xc6cc,	// (0x0002abde) cell_popup_blid_pane

0xc6f0,	// (0x0002ac02) cell_popup_blid_pane_g1

0xc6f8,	// (0x0002ac0a) cell_popup_blid_pane_t1

0x57a4,	// (0x00023cb6) mup2_indicator_pane_ParamLimits

0x57a4,	// (0x00023cb6) mup2_indicator_pane

0xa52d,	// (0x00028a3f) mup2_visualizer_osc_pane

0xc4ae,	// (0x0002a9c0) mup2_visualizer_spec_pane_ParamLimits

0xc4ae,	// (0x0002a9c0) mup2_visualizer_spec_pane

0x592c,	// (0x00023e3e) mup2_spec_half_pane

0x5935,	// (0x00023e47) mup2_spec_half_pane_cp

0x593f,	// (0x00023e51) mup2_spec_bar_pane_ParamLimits

0x593f,	// (0x00023e51) mup2_spec_bar_pane

0xc443,	// (0x0002a955) mup2_spec_bar_pane_g1

0xc44d,	// (0x0002a95f) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0002db10) mup2_spec_bar_pane_g

0x595e,	// (0x00023e70) mup2_osc_middle_pane

0xc45f,	// (0x0002a971) mup2_visualizer_osc_pane_g1

0x9c3b,	// (0x0002814d) popup_number_entry_window_t1_ParamLimits

0x9c4e,	// (0x00028160) popup_number_entry_window_t2_ParamLimits

0x9c60,	// (0x00028172) popup_number_entry_window_t3_ParamLimits

0x2607,	// (0x00020b19) popup_number_entry_window_t5_ParamLimits

0x2607,	// (0x00020b19) popup_number_entry_window_t5

0xf0af,	// (0x0002d5c1) popup_number_entry_window_t_ParamLimits

0x9c72,	// (0x00028184) text_title_cp2_ParamLimits

0x1206,	// (0x0001f718) aid_hotspot_pointer_text2_pane

0x1250,	// (0x0001f762) main_viewer_pane_g9_ParamLimits

0x1250,	// (0x0001f762) main_viewer_pane_g9

0xa894,	// (0x00028da6) cale_month_pane_t1_ParamLimits

0xa8d1,	// (0x00028de3) bg_cale_pane_ParamLimits

0xa8e9,	// (0x00028dfb) list_cale_pane_ParamLimits

0xa8fa,	// (0x00028e0c) listscroll_cale_day_pane_t1

0xa90c,	// (0x00028e1e) scroll_pane_cp09_ParamLimits

0x49d8,	// (0x00022eea) main_mup_eq_pane_t1_ParamLimits

0x49d8,	// (0x00022eea) main_mup_eq_pane_t1

0x49f2,	// (0x00022f04) main_mup_eq_pane_t2_ParamLimits

0x49f2,	// (0x00022f04) main_mup_eq_pane_t2

0x4a0a,	// (0x00022f1c) main_mup_eq_pane_t3_ParamLimits

0x4a0a,	// (0x00022f1c) main_mup_eq_pane_t3

0x4a22,	// (0x00022f34) main_mup_eq_pane_t4_ParamLimits

0x4a22,	// (0x00022f34) main_mup_eq_pane_t4

0x4a3a,	// (0x00022f4c) main_mup_eq_pane_t5_ParamLimits

0x4a3a,	// (0x00022f4c) main_mup_eq_pane_t5

0x4a52,	// (0x00022f64) main_mup_eq_pane_t6_ParamLimits

0x4a52,	// (0x00022f64) main_mup_eq_pane_t6

0x4a66,	// (0x00022f78) main_mup_eq_pane_t7_ParamLimits

0x4a66,	// (0x00022f78) main_mup_eq_pane_t7

0x4a7a,	// (0x00022f8c) main_mup_eq_pane_t8_ParamLimits

0x4a7a,	// (0x00022f8c) main_mup_eq_pane_t8

0x4a90,	// (0x00022fa2) main_mup_eq_pane_t9_ParamLimits

0x4a90,	// (0x00022fa2) main_mup_eq_pane_t9

0x4aa8,	// (0x00022fba) main_mup_eq_pane_t10_ParamLimits

0x4aa8,	// (0x00022fba) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0002d94c) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0002d94c) main_mup_eq_pane_t

0x4b65,	// (0x00023077) mup_equalizer_pane_cp5_ParamLimits

0x4b7b,	// (0x0002308d) mup_equalizer_pane_cp6_ParamLimits

0x4b93,	// (0x000230a5) mup_equalizer_pane_cp7_ParamLimits

0x0e1d,	// (0x0001f32f) main_gallery_pane

0xc468,	// (0x0002a97a) smil2_volume_pane

0xc470,	// (0x0002a982) smil_status_volume_pane_g1_ParamLimits

0xc483,	// (0x0002a995) smil_status_volume_pane_g2_ParamLimits

0x13e4,	// (0x0001f8f6) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0002db15) smil_status_volume_pane_g_ParamLimits

0xc5d5,	// (0x0002aae7) bg_popup_window_pane_cp07_ParamLimits

0xc5e3,	// (0x0002aaf5) blid_firmament_pane

0x5967,	// (0x00023e79) aid_size_cell_gallery_ParamLimits

0x5967,	// (0x00023e79) aid_size_cell_gallery

0x5975,	// (0x00023e87) grid_gallery_pane_ParamLimits

0x5975,	// (0x00023e87) grid_gallery_pane

0x5985,	// (0x00023e97) cell_gallery_pane_ParamLimits

0x5985,	// (0x00023e97) cell_gallery_pane

0xc706,	// (0x0002ac18) bg_cell_gallery_focus_pane_ParamLimits

0xc706,	// (0x0002ac18) bg_cell_gallery_focus_pane

0xc718,	// (0x0002ac2a) cell_gallery_pane_g1_ParamLimits

0xc718,	// (0x0002ac2a) cell_gallery_pane_g1

0x59d3,	// (0x00023ee5) cell_gallery_pane_g2_ParamLimits

0x59d3,	// (0x00023ee5) cell_gallery_pane_g2

0x59e0,	// (0x00023ef2) cell_gallery_pane_g3_ParamLimits

0x59e0,	// (0x00023ef2) cell_gallery_pane_g3

0xc724,	// (0x0002ac36) cell_gallery_pane_g4_ParamLimits

0xc724,	// (0x0002ac36) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0002dbc3) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0002dbc3) cell_gallery_pane_g

0xc730,	// (0x0002ac42) bg_cell_gallery_focus_pane_g1

0xc738,	// (0x0002ac4a) bg_cell_gallery_focus_pane_g2

0xc740,	// (0x0002ac52) bg_cell_gallery_focus_pane_g3

0xc748,	// (0x0002ac5a) bg_cell_gallery_focus_pane_g4

0xc750,	// (0x0002ac62) bg_cell_gallery_focus_pane_g5

0xc758,	// (0x0002ac6a) bg_cell_gallery_focus_pane_g6

0xc760,	// (0x0002ac72) bg_cell_gallery_focus_pane_g7

0xc768,	// (0x0002ac7a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0002dbcc) bg_cell_gallery_focus_pane_g

0xc770,	// (0x0002ac82) aid_firma_cardinal

0xc784,	// (0x0002ac96) blid_firmament_pane_t1

0xc79b,	// (0x0002acad) blid_firmament_pane_t2

0xc7b2,	// (0x0002acc4) blid_firmament_pane_t3

0xc7c9,	// (0x0002acdb) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0002dbdd) blid_firmament_pane_t

0xc7e0,	// (0x0002acf2) blid_sat_info_pane

0xc7f0,	// (0x0002ad02) blid_sat_info_pane_g1

0xc7f0,	// (0x0002ad02) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0002dbe6) blid_sat_info_pane_g

0xc7fa,	// (0x0002ad0c) blid_sat_info_pane_t1

0xc808,	// (0x0002ad1a) smil2_volume_content_pane

0xc811,	// (0x0002ad23) smil2_volume_pane_g1

0xa622,	// (0x00028b34) smil2_volume_content_pane_g1

0xc819,	// (0x0002ad2b) smil2_volume_content_pane_g2

0xc822,	// (0x0002ad34) smil2_volume_content_pane_g3

0xc82b,	// (0x0002ad3d) smil2_volume_content_pane_g4

0xc834,	// (0x0002ad46) smil2_volume_content_pane_g5

0xc83d,	// (0x0002ad4f) smil2_volume_content_pane_g6

0xc846,	// (0x0002ad58) smil2_volume_content_pane_g7

0xc84f,	// (0x0002ad61) smil2_volume_content_pane_g8

0xc858,	// (0x0002ad6a) smil2_volume_content_pane_g9

0xc861,	// (0x0002ad73) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0002dbeb) smil2_volume_content_pane_g

0x2c51,	// (0x00021163) cale_week_day_heading_pane_t1_ParamLimits

0x2c6c,	// (0x0002117e) cale_week_day_heading_pane_t2_ParamLimits

0x2c87,	// (0x00021199) cale_week_day_heading_pane_t3_ParamLimits

0x2ca2,	// (0x000211b4) cale_week_day_heading_pane_t4_ParamLimits

0x2cbd,	// (0x000211cf) cale_week_day_heading_pane_t5_ParamLimits

0x2cd8,	// (0x000211ea) cale_week_day_heading_pane_t6_ParamLimits

0x2cf3,	// (0x00021205) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0002d6c8) cale_week_day_heading_pane_t_ParamLimits

0xa4d2,	// (0x000289e4) bg_cale_side_pane_ParamLimits

0x1029,	// (0x0001f53b) cale_week_time_pane_t1_ParamLimits

0x1043,	// (0x0001f555) cale_week_time_pane_t2_ParamLimits

0x105d,	// (0x0001f56f) cale_week_time_pane_t3_ParamLimits

0x1077,	// (0x0001f589) cale_week_time_pane_t4_ParamLimits

0x1091,	// (0x0001f5a3) cale_week_time_pane_t5_ParamLimits

0x10ab,	// (0x0001f5bd) cale_week_time_pane_t6_ParamLimits

0x10cb,	// (0x0001f5dd) cale_week_time_pane_t7_ParamLimits

0x10ed,	// (0x0001f5ff) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0002d6d7) cale_week_time_pane_t_ParamLimits

0x2d0e,	// (0x00021220) cell_cale_week_pane_g2_ParamLimits

0xa4d2,	// (0x000289e4) bg_cale_side_pane_cp01_ParamLimits

0x4084,	// (0x00022596) cale_month_week_pane_t1_ParamLimits

0x409d,	// (0x000225af) cale_month_week_pane_t2_ParamLimits

0x40b6,	// (0x000225c8) cale_month_week_pane_t3_ParamLimits

0x40cf,	// (0x000225e1) cale_month_week_pane_t4_ParamLimits

0x40ea,	// (0x000225fc) cale_month_week_pane_t5_ParamLimits

0x410b,	// (0x0002261d) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0002d7ac) cale_month_week_pane_t_ParamLimits

0x111b,	// (0x0001f62d) cell_cale_month_pane_g1_ParamLimits

0x0e1d,	// (0x0001f32f) main_cale_event_viewer_pane

0x9c11,	// (0x00028123) listscroll_cale_event_viewer_pane

0xc86a,	// (0x0002ad7c) list_cale_ev_pane

0xc872,	// (0x0002ad84) scroll_pane_cp023

0xc87e,	// (0x0002ad90) field_cale_ev_pane_ParamLimits

0xc87e,	// (0x0002ad90) field_cale_ev_pane

0xc89c,	// (0x0002adae) field_cale_ev_content_pane_ParamLimits

0xc89c,	// (0x0002adae) field_cale_ev_content_pane

0xc8a8,	// (0x0002adba) field_cale_ev_pane_g1_ParamLimits

0xc8a8,	// (0x0002adba) field_cale_ev_pane_g1

0xc8b4,	// (0x0002adc6) field_cale_ev_pane_g2_ParamLimits

0xc8b4,	// (0x0002adc6) field_cale_ev_pane_g2

0xc8cc,	// (0x0002adde) field_cale_ev_pane_g3_ParamLimits

0xc8cc,	// (0x0002adde) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0002dc00) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0002dc00) field_cale_ev_pane_g

0xc8e4,	// (0x0002adf6) field_cale_ev_pane_t1_ParamLimits

0xc8e4,	// (0x0002adf6) field_cale_ev_pane_t1

0xa62b,	// (0x00028b3d) field_cale_ev_content_pane_t1_ParamLimits

0xa62b,	// (0x00028b3d) field_cale_ev_content_pane_t1

0xb10c,	// (0x0002961e) bg_button_pane_cp01

0x29dc,	// (0x00020eee) listscroll_cale_week_pane_ParamLimits

0xa47d,	// (0x0002898f) popup_toolbar_window_cp01

0xa4a3,	// (0x000289b5) listscroll_cale_week_pane_t1_ParamLimits

0x29dc,	// (0x00020eee) listscroll_cale_day_pane_ParamLimits

0xa47d,	// (0x0002898f) popup_toolbar_window_cp02

0xa8fa,	// (0x00028e0c) listscroll_cale_day_pane_t1_ParamLimits

0x29dc,	// (0x00020eee) main_cale_month_pane_ParamLimits

0x13a7,	// (0x0001f8b9) popup_toolbar_window_cp03_ParamLimits

0x13a7,	// (0x0001f8b9) popup_toolbar_window_cp03

0x4ec4,	// (0x000233d6) main_image_pane_g2_ParamLimits

0x4ec4,	// (0x000233d6) main_image_pane_g2

0x4ed0,	// (0x000233e2) main_image_pane_g3_ParamLimits

0x4ed0,	// (0x000233e2) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0002d9de) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0002d9de) main_image_pane_g

0xb226,	// (0x00029738) main_image_pane_t1_ParamLimits

0x4edc,	// (0x000233ee) main_image_pane_t2_ParamLimits

0x4edc,	// (0x000233ee) main_image_pane_t2

0x4eee,	// (0x00023400) main_image_pane_t3_ParamLimits

0x4eee,	// (0x00023400) main_image_pane_t3

0x4f00,	// (0x00023412) main_image_pane_t4_ParamLimits

0x4f00,	// (0x00023412) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0002d9e5) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0002d9e5) main_image_pane_t

0x4f12,	// (0x00023424) popup_image_details_window_cp01

0x4f1c,	// (0x0002342e) popup_toobar_trans_pane_cp01_ParamLimits

0x4f1c,	// (0x0002342e) popup_toobar_trans_pane_cp01

0x12f7,	// (0x0001f809) popup_image_details_window_ParamLimits

0x12f7,	// (0x0001f809) popup_image_details_window

0x1305,	// (0x0001f817) popup_image_focus_window

0x1406,	// (0x0001f918) camera2_autofocus_pane_ParamLimits

0x1406,	// (0x0001f918) camera2_autofocus_pane

0x9c11,	// (0x00028123) bg_popup_sub_pane_cp06

0xc8fb,	// (0x0002ae0d) popup_image_focus_window_g1

0xc903,	// (0x0002ae15) popup_image_focus_window_g2

0xc90b,	// (0x0002ae1d) popup_image_focus_window_g3

0xc913,	// (0x0002ae25) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0002dc07) popup_image_focus_window_g

0xc91b,	// (0x0002ae2d) popup_image_focus_window_t1

0xc929,	// (0x0002ae3b) popup_image_focus_window_t2

0xc939,	// (0x0002ae4b) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0002dc10) popup_image_focus_window_t

0xc947,	// (0x0002ae59) camera2_autofocus_pane_g1

0xa614,	// (0x00028b26) bg_tb_trans_pane_cp01

0xc955,	// (0x0002ae67) popup_image_details_window_g1

0xc968,	// (0x0002ae7a) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0002dc22) popup_image_details_window_g

0xc991,	// (0x0002aea3) popup_image_details_window_t1

0xc9a3,	// (0x0002aeb5) popup_image_details_window_t2

0xc9bc,	// (0x0002aece) popup_image_details_window_t3

0xc9d0,	// (0x0002aee2) popup_image_details_window_t4

0xc9eb,	// (0x0002aefd) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0002dc29) popup_image_details_window_t

0xa346,	// (0x00028858) bg_calc_paper_pane_ParamLimits

0x0e1d,	// (0x0001f32f) grid_highlight_pane_cp013

0x0efe,	// (0x0001f410) list_calc_pane_ParamLimits

0x0f10,	// (0x0001f422) scroll_pane_cp024

0xa35a,	// (0x0002886c) bg_calc_display_pane_ParamLimits

0x0f18,	// (0x0001f42a) calc_display_pane_t1_ParamLimits

0x0f2d,	// (0x0001f43f) calc_display_pane_t2_ParamLimits

0x0f42,	// (0x0001f454) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0002d648) calc_display_pane_t_ParamLimits

0x0fab,	// (0x0001f4bd) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0002d665) cell_calc_pane_g

0x0fb4,	// (0x0001f4c6) cell_calc_pane_t1

0xa3b9,	// (0x000288cb) grid_highlight_pane_cp02_ParamLimits

0xa3cf,	// (0x000288e1) toolbar_button_pane_cp01_ParamLimits

0xa3cf,	// (0x000288e1) toolbar_button_pane_cp01

0xb26b,	// (0x0002977d) temp_image_control_pane_ParamLimits

0xb26b,	// (0x0002977d) temp_image_control_pane

0x1273,	// (0x0001f785) main_mp3_pane

0xca05,	// (0x0002af17) temp_image_control_pane_g1_ParamLimits

0xca05,	// (0x0002af17) temp_image_control_pane_g1

0xca13,	// (0x0002af25) temp_image_control_pane_g2_ParamLimits

0xca13,	// (0x0002af25) temp_image_control_pane_g2

0xca25,	// (0x0002af37) temp_image_control_pane_g3_ParamLimits

0xca25,	// (0x0002af37) temp_image_control_pane_g3

0x5a1d,	// (0x00023f2f) temp_image_control_pane_g4_ParamLimits

0x5a1d,	// (0x00023f2f) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0002dc34) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0002dc34) temp_image_control_pane_g

0xca05,	// (0x0002af17) main_mp3_pane_g1

0x5a2e,	// (0x00023f40) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0002dc3d) main_mp3_pane_g

0xca68,	// (0x0002af7a) main_mp3_pane_t1

0xa535,	// (0x00028a47) main_camera_pane_g8_ParamLimits

0xa535,	// (0x00028a47) main_camera_pane_g8

0x2f8e,	// (0x000214a0) main_video_pane_g7_ParamLimits

0x2f8e,	// (0x000214a0) main_video_pane_g7

0x154e,	// (0x0001fa60) main_camera2_pane_t7_ParamLimits

0x154e,	// (0x0001fa60) main_camera2_pane_t7

0xa6b2,	// (0x00028bc4) scroll_pane_cp025_ParamLimits

0xa6b2,	// (0x00028bc4) scroll_pane_cp025

0xa6c6,	// (0x00028bd8) scroll_pane_cp026_ParamLimits

0xa6c6,	// (0x00028bd8) scroll_pane_cp026

0xa6d5,	// (0x00028be7) wml_content_pane_ParamLimits

0x0e1d,	// (0x0001f32f) main_touch_calib_pane

0x5ad2,	// (0x00023fe4) main_touch_calib_pane_g1

0x5ade,	// (0x00023ff0) main_touch_calib_pane_g2

0x5aea,	// (0x00023ffc) main_touch_calib_pane_g3

0x5af6,	// (0x00024008) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0002dc5b) main_touch_calib_pane_g

0x5b02,	// (0x00024014) main_touch_calib_pane_t1

0x5b1b,	// (0x0002402d) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0002dc64) main_touch_calib_pane_t

0xae2c,	// (0x0002933e) mup_progress_pane_cp02

0xae61,	// (0x00029373) navi_pane_g1

0xaf1c,	// (0x0002942e) navi_pane_mp_t3

0x1273,	// (0x0001f785) main_mp3_pane_ParamLimits

0x544f,	// (0x00023961) navi_pane_ParamLimits

0xca05,	// (0x0002af17) main_mp3_pane_g1_ParamLimits

0x5a2e,	// (0x00023f40) main_mp3_pane_g2_ParamLimits

0x5a3a,	// (0x00023f4c) main_mp3_pane_g3_ParamLimits

0x5a3a,	// (0x00023f4c) main_mp3_pane_g3

0x5a46,	// (0x00023f58) main_mp3_pane_g4_ParamLimits

0x5a46,	// (0x00023f58) main_mp3_pane_g4

0xca35,	// (0x0002af47) main_mp3_pane_g5_ParamLimits

0xca35,	// (0x0002af47) main_mp3_pane_g5

0xca43,	// (0x0002af55) main_mp3_pane_g6_ParamLimits

0xca43,	// (0x0002af55) main_mp3_pane_g6

0xca50,	// (0x0002af62) main_mp3_pane_g7_ParamLimits

0xca50,	// (0x0002af62) main_mp3_pane_g7

0xca5c,	// (0x0002af6e) main_mp3_pane_g8_ParamLimits

0xca5c,	// (0x0002af6e) main_mp3_pane_g8

0xf72b,	// (0x0002dc3d) main_mp3_pane_g_ParamLimits

0x5a52,	// (0x00023f64) main_mp3_pane_t2

0x5a62,	// (0x00023f74) main_mp3_pane_t3

0xca76,	// (0x0002af88) main_mp3_pane_t4

0xca84,	// (0x0002af96) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0002dc4e) main_mp3_pane_t

0xca92,	// (0x0002afa4) mup_progress_pane_cp01

0x0bd3,	// (0x0001f0e5) aid_zoom_text_secondary2

0xc86a,	// (0x0002ad7c) list_cale_ev2_pane

0xc872,	// (0x0002ad84) scroll_pane_cp023_ParamLimits

0x5b76,	// (0x00024088) field_cale_ev2_pane_ParamLimits

0x5b76,	// (0x00024088) field_cale_ev2_pane

0xca9a,	// (0x0002afac) field_cale_ev2_pane_g1_ParamLimits

0xca9a,	// (0x0002afac) field_cale_ev2_pane_g1

0xcaa6,	// (0x0002afb8) field_cale_ev2_pane_g2_ParamLimits

0xcaa6,	// (0x0002afb8) field_cale_ev2_pane_g2

0xcabe,	// (0x0002afd0) field_cale_ev2_pane_g3_ParamLimits

0xcabe,	// (0x0002afd0) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0002dc6f) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0002dc6f) field_cale_ev2_pane_g

0xcae2,	// (0x0002aff4) field_cale_ev2_pane_t1_ParamLimits

0xcae2,	// (0x0002aff4) field_cale_ev2_pane_t1

0xcaf9,	// (0x0002b00b) field_cale_ev2_pane_t2_ParamLimits

0xcaf9,	// (0x0002b00b) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0002dc78) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0002dc78) field_cale_ev2_pane_t

0x4da5,	// (0x000232b7) main_postcard_pane_g5_ParamLimits

0x4da5,	// (0x000232b7) main_postcard_pane_g5

0x4db3,	// (0x000232c5) main_postcard_pane_g6_ParamLimits

0x4db3,	// (0x000232c5) main_postcard_pane_g6

0x2dd8,	// (0x000212ea) camera2_autofocus_pane_cp_ParamLimits

0x2dd8,	// (0x000212ea) camera2_autofocus_pane_cp

0x1273,	// (0x0001f785) main_mup3_pane

0x5bdf,	// (0x000240f1) main_mup3_pane_g1_ParamLimits

0x5bdf,	// (0x000240f1) main_mup3_pane_g1

0x5c00,	// (0x00024112) main_mup3_pane_g2_ParamLimits

0x5c00,	// (0x00024112) main_mup3_pane_g2

0x5c7a,	// (0x0002418c) main_mup3_pane_g3_ParamLimits

0x5c7a,	// (0x0002418c) main_mup3_pane_g3

0x5cbd,	// (0x000241cf) main_mup3_pane_g4_ParamLimits

0x5cbd,	// (0x000241cf) main_mup3_pane_g4

0x5d00,	// (0x00024212) main_mup3_pane_g5_ParamLimits

0x5d00,	// (0x00024212) main_mup3_pane_g5

0x5d43,	// (0x00024255) main_mup3_pane_g6_ParamLimits

0x5d43,	// (0x00024255) main_mup3_pane_g6

0xcb0e,	// (0x0002b020) main_mup3_pane_g7_ParamLimits

0xcb0e,	// (0x0002b020) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0002dc88) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0002dc88) main_mup3_pane_g

0x5db9,	// (0x000242cb) main_mup3_pane_t1_ParamLimits

0x5db9,	// (0x000242cb) main_mup3_pane_t1

0x5e28,	// (0x0002433a) main_mup3_pane_t2_ParamLimits

0x5e28,	// (0x0002433a) main_mup3_pane_t2

0x5ef1,	// (0x00024403) main_mup3_pane_t4_ParamLimits

0x5ef1,	// (0x00024403) main_mup3_pane_t4

0x5f3f,	// (0x00024451) main_mup3_pane_t5_ParamLimits

0x5f3f,	// (0x00024451) main_mup3_pane_t5

0x5fef,	// (0x00024501) main_mup3_pane_t6_ParamLimits

0x5fef,	// (0x00024501) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0002dc99) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0002dc99) main_mup3_pane_t

0x609b,	// (0x000245ad) mup3_progress_pane_ParamLimits

0x609b,	// (0x000245ad) mup3_progress_pane

0x610f,	// (0x00024621) popup_mup3_control_window_ParamLimits

0x610f,	// (0x00024621) popup_mup3_control_window

0xcb1c,	// (0x0002b02e) popup_mup3_text_window

0x6128,	// (0x0002463a) mup3_progress_pane_t1

0x6147,	// (0x00024659) mup3_progress_pane_t2

0xcb24,	// (0x0002b036) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0002dca6) mup3_progress_pane_t

0xcb41,	// (0x0002b053) mup_progress_pane_cp03

0x9c11,	// (0x00028123) bg_tb_trans_pane_cp04

0x6166,	// (0x00024678) mup3_volume_pane

0x616e,	// (0x00024680) popup_mup3_control_window_g1

0x6177,	// (0x00024689) mup3_volume_pane_g1

0x6180,	// (0x00024692) mup3_volume_pane_g2

0x6189,	// (0x0002469b) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0002dcad) mup3_volume_pane_g

0x9c11,	// (0x00028123) bg_tb_trans_pane_cp03

0xcb51,	// (0x0002b063) popup_mup3_text_window_g1

0xcb59,	// (0x0002b06b) popup_mup3_text_window_t1

0xa3a2,	// (0x000288b4) list_calc_item_pane_g1_ParamLimits

0xc543,	// (0x0002aa55) mup_volume_pane_cp_g1

0x5b34,	// (0x00024046) main_touch_calib_pane_t3

0x5b4a,	// (0x0002405c) main_touch_calib_pane_t4

0x5b60,	// (0x00024072) main_touch_calib_pane_t5

0x0b8b,	// (0x0001f09d) aid_cell_size_toolbar2

0x0b93,	// (0x0001f0a5) aid_popup3_width_pane

0x0bd3,	// (0x0001f0e5) aid_zoom_text_msg_primary

0x2db7,	// (0x000212c9) vorec_t7

0xa366,	// (0x00028878) bg_calc_paper_pane_g1_ParamLimits

0xa372,	// (0x00028884) bg_calc_paper_pane_g2_ParamLimits

0xa37e,	// (0x00028890) bg_calc_paper_pane_g3_ParamLimits

0xa38a,	// (0x0002889c) bg_calc_paper_pane_g4_ParamLimits

0xa396,	// (0x000288a8) bg_calc_paper_pane_g5_ParamLimits

0x288e,	// (0x00020da0) bg_calc_paper_pane_g6_ParamLimits

0x289f,	// (0x00020db1) bg_calc_paper_pane_g7_ParamLimits

0x28b0,	// (0x00020dc2) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0002d64f) bg_calc_paper_pane_g_ParamLimits

0x28c1,	// (0x00020dd3) calc_bg_paper_pane_g9_ParamLimits

0x2ebf,	// (0x000213d1) image_qvga_pane_ParamLimits

0x2ebf,	// (0x000213d1) image_qvga_pane

0xa289,	// (0x0002879b) bg_popup_sub_pane_cp04_ParamLimits

0xb1a2,	// (0x000296b4) popup_mup_playback_window_g1_ParamLimits

0xb1ae,	// (0x000296c0) popup_mup_playback_window_t1_ParamLimits

0xb1c3,	// (0x000296d5) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0002d9d9) popup_mup_playback_window_t_ParamLimits

0x56a4,	// (0x00023bb6) main_mup2_pane_g3_ParamLimits

0x56a4,	// (0x00023bb6) main_mup2_pane_g3

0x328c,	// (0x0002179e) popup_toolbar_window_cp04

0xb5b8,	// (0x00029aca) popup_call2_audio_second_window_g3_ParamLimits

0xb5b8,	// (0x00029aca) popup_call2_audio_second_window_g3

0xb9c2,	// (0x00029ed4) popup_call2_audio_first_window_g4_ParamLimits

0xb9c2,	// (0x00029ed4) popup_call2_audio_first_window_g4

0xc041,	// (0x0002a553) popup_call2_audio_in_window_g4_ParamLimits

0xc041,	// (0x0002a553) popup_call2_audio_in_window_g4

0x4eb7,	// (0x000233c9) aid_area_sk_bg_cut_ParamLimits

0x4eb7,	// (0x000233c9) aid_area_sk_bg_cut

0xb1d8,	// (0x000296ea) aid_area_sk_bg_cut_2_ParamLimits

0xb1d8,	// (0x000296ea) aid_area_sk_bg_cut_2

0x59c3,	// (0x00023ed5) aid_placing_details_win

0x59cb,	// (0x00023edd) aid_placing_details_win_2

0xc947,	// (0x0002ae59) camera2_autofocus_pane_g1_ParamLimits

0x0db5,	// (0x0001f2c7) popup_fixed_preview_cale_window_ParamLimits

0x0db5,	// (0x0001f2c7) popup_fixed_preview_cale_window

0xaf9a,	// (0x000294ac) navi_slider_pane_g3

0xafa3,	// (0x000294b5) navi_slider_pane_g4

0xafac,	// (0x000294be) navi_slider_pane_g5

0xaf9a,	// (0x000294ac) navi_slider_pane_g6

0x11ed,	// (0x0001f6ff) navi_slider_pane_g7

0xb0d9,	// (0x000295eb) mup_scale_pane_g3

0xb0e2,	// (0x000295f4) mup_scale_pane_g4

0xb0eb,	// (0x000295fd) mup_scale_pane_g5

0x4bab,	// (0x000230bd) mup_scale_pane_g6

0x4bb4,	// (0x000230c6) mup_scale_pane_g7

0xaf9a,	// (0x000294ac) cams2_slider_pane_g3

0xc5c5,	// (0x0002aad7) cams2_slider_pane_g4

0x16c0,	// (0x0001fbd2) cams2_slider_pane_g5

0xaf9a,	// (0x000294ac) cams2_slider_pane_g6

0x16c8,	// (0x0001fbda) cams2_slider_pane_g7

0xc7f0,	// (0x0002ad02) camera2_autofocus_pane_cp_g1

0xc3dc,	// (0x0002a8ee) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3dc,	// (0x0002a8ee) bg_popup_preview_window_pane_cp02

0xcb67,	// (0x0002b079) list_fp_cale_pane_ParamLimits

0xcb67,	// (0x0002b079) list_fp_cale_pane

0xcb73,	// (0x0002b085) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb73,	// (0x0002b085) popup_fixed_preview_cale_window_t1

0x6192,	// (0x000246a4) popup_fixed_preview_cale_window_t2_ParamLimits

0x6192,	// (0x000246a4) popup_fixed_preview_cale_window_t2

0x61a7,	// (0x000246b9) popup_fixed_preview_cale_window_t3_ParamLimits

0x61a7,	// (0x000246b9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0002dcb4) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0002dcb4) popup_fixed_preview_cale_window_t

0x61bc,	// (0x000246ce) list_single_fp_cale_pane_ParamLimits

0x61bc,	// (0x000246ce) list_single_fp_cale_pane

0xcb91,	// (0x0002b0a3) list_single_fp_cale_pane_g1_ParamLimits

0xcb91,	// (0x0002b0a3) list_single_fp_cale_pane_g1

0xcb9d,	// (0x0002b0af) list_single_fp_cale_pane_g2_ParamLimits

0xcb9d,	// (0x0002b0af) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0002dcbb) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0002dcbb) list_single_fp_cale_pane_g

0xcbb6,	// (0x0002b0c8) list_single_fp_cale_pane_t1_ParamLimits

0xcbb6,	// (0x0002b0c8) list_single_fp_cale_pane_t1

0xcbc8,	// (0x0002b0da) list_single_fp_cale_pane_t2_ParamLimits

0xcbc8,	// (0x0002b0da) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0002dcc2) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0002dcc2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e1d,	// (0x0001f32f) main_dialer_pane

0x61cf,	// (0x000246e1) aid_cell_size_keypad

0x61d9,	// (0x000246eb) dialer_ne_pane

0x61e3,	// (0x000246f5) grid_dialer_command_1_pane

0x61eb,	// (0x000246fd) grid_dialer_command_2_pane

0x61f3,	// (0x00024705) grid_dialer_keypad_pane

0x6207,	// (0x00024719) bg_popup_call_pane_cp06_ParamLimits

0x6207,	// (0x00024719) bg_popup_call_pane_cp06

0x6213,	// (0x00024725) dialer_ne_clear_pane_ParamLimits

0x6213,	// (0x00024725) dialer_ne_clear_pane

0xcbfb,	// (0x0002b10d) dialer_ne_pane_g1

0xcc03,	// (0x0002b115) dialer_ne_pane_t1_ParamLimits

0xcc03,	// (0x0002b115) dialer_ne_pane_t1

0x621f,	// (0x00024731) dialer_ne_pane_t2_ParamLimits

0x621f,	// (0x00024731) dialer_ne_pane_t2

0x623c,	// (0x0002474e) dialer_ne_pane_t3_ParamLimits

0x623c,	// (0x0002474e) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0002dcc7) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0002dcc7) dialer_ne_pane_t

0x6260,	// (0x00024772) dialer_ne_pane_t3_copy1_ParamLimits

0x6260,	// (0x00024772) dialer_ne_pane_t3_copy1

0x6284,	// (0x00024796) cell_dialer_keypad_pane_ParamLimits

0x6284,	// (0x00024796) cell_dialer_keypad_pane

0x629b,	// (0x000247ad) cell_dialer_command_1_pane_ParamLimits

0x629b,	// (0x000247ad) cell_dialer_command_1_pane

0x62b1,	// (0x000247c3) cell_dialer_command_2_pane_ParamLimits

0x62b1,	// (0x000247c3) cell_dialer_command_2_pane

0xcc15,	// (0x0002b127) bg_button_pane_cp02_ParamLimits

0xcc15,	// (0x0002b127) bg_button_pane_cp02

0x62c0,	// (0x000247d2) cell_dialer_keypad_pane_g1_ParamLimits

0x62c0,	// (0x000247d2) cell_dialer_keypad_pane_g1

0xcc15,	// (0x0002b127) bg_button_pane_cp03_ParamLimits

0xcc15,	// (0x0002b127) bg_button_pane_cp03

0x62d5,	// (0x000247e7) cell_dialer_command_1_pane_g1_ParamLimits

0x62d5,	// (0x000247e7) cell_dialer_command_1_pane_g1

0xcc21,	// (0x0002b133) bg_button_pane_cp04

0x62e9,	// (0x000247fb) cell_dialer_command_2_pane_g1

0xa52d,	// (0x00028a3f) bg_button_pane_cp06

0xcc29,	// (0x0002b13b) dialer_ne_clear_pane_g1

0xae6d,	// (0x0002937f) navi_pane_g2

0xae9b,	// (0x000293ad) navi_pane_g3

0x0002,

0xf3ca,	// (0x0002d8dc) navi_pane_g

0xaf2a,	// (0x0002943c) navi_pane_mv_g2

0xaf51,	// (0x00029463) navi_pane_mv_g5

0x4759,	// (0x00022c6b) navi_pane_mv_t1

0xa35a,	// (0x0002886c) main_clock2_pane

0xd0ee,	// (0x0002b600) main_clock2_list_pane_ParamLimits

0xd0ee,	// (0x0002b600) main_clock2_list_pane

0x6345,	// (0x00024857) main_clock2_pane_t1_ParamLimits

0x6345,	// (0x00024857) main_clock2_pane_t1

0x6373,	// (0x00024885) main_clock2_pane_t2_ParamLimits

0x6373,	// (0x00024885) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0002dcd3) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0002dcd3) main_clock2_pane_t

0x63d8,	// (0x000248ea) popup_clock_analogue_window_cp03_ParamLimits

0x63d8,	// (0x000248ea) popup_clock_analogue_window_cp03

0x63f6,	// (0x00024908) popup_clock_digital_window_cp02_ParamLimits

0x63f6,	// (0x00024908) popup_clock_digital_window_cp02

0x646b,	// (0x0002497d) main_clock2_list_single_pane_ParamLimits

0x646b,	// (0x0002497d) main_clock2_list_single_pane

0xa52d,	// (0x00028a3f) list_highlight_pane_cp05

0xcc63,	// (0x0002b175) main_clock2_list_single_pane_t1

0x328c,	// (0x0002179e) popup_toolbar_window_cp04_ParamLimits

0x59ed,	// (0x00023eff) camera2_autofocus_pane_g2_ParamLimits

0x59ed,	// (0x00023eff) camera2_autofocus_pane_g2

0x59f9,	// (0x00023f0b) camera2_autofocus_pane_g3_ParamLimits

0x59f9,	// (0x00023f0b) camera2_autofocus_pane_g3

0x5a05,	// (0x00023f17) camera2_autofocus_pane_g4_ParamLimits

0x5a05,	// (0x00023f17) camera2_autofocus_pane_g4

0x5a11,	// (0x00023f23) camera2_autofocus_pane_g5_ParamLimits

0x5a11,	// (0x00023f23) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0002dc17) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0002dc17) camera2_autofocus_pane_g

0x5ba0,	// (0x000240b2) camera2_autofocus_pane_cp_g2

0x5ba8,	// (0x000240ba) camera2_autofocus_pane_cp_g3

0x5bb0,	// (0x000240c2) camera2_autofocus_pane_cp_g4

0x5bb8,	// (0x000240ca) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0002dc7d) camera2_autofocus_pane_cp_g

0x61ff,	// (0x00024711) popup_dialer_spcha_window

0x9c11,	// (0x00028123) bg_popup_sub_pane_cp07

0xcc71,	// (0x0002b183) list_spcha_pane

0xcc79,	// (0x0002b18b) list_single_spcha_pane_ParamLimits

0xcc79,	// (0x0002b18b) list_single_spcha_pane

0x9c11,	// (0x00028123) list_highlight_pane_cp06

0xcc8a,	// (0x0002b19c) list_single_spcha_pane_t1

0xbdeb,	// (0x0002a2fd) popup_call2_audio_out_window_g4_ParamLimits

0xbdeb,	// (0x0002a2fd) popup_call2_audio_out_window_g4

0x0e1d,	// (0x0001f32f) main_imed2_pane

0x130d,	// (0x0001f81f) popup_imed_adjust2_window

0x1320,	// (0x0001f832) popup_imed_trans_window_ParamLimits

0x1320,	// (0x0001f832) popup_imed_trans_window

0xc62e,	// (0x0002ab40) popup_blid_sat_info2_window_t1

0xc63c,	// (0x0002ab4e) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0002dbac) popup_blid_sat_info2_window_t

0x647d,	// (0x0002498f) aid_size_cell_colour_35

0x6497,	// (0x000249a9) aid_size_cell_colour_112

0x64ae,	// (0x000249c0) aid_size_cell_effect

0xa614,	// (0x00028b26) bg_tb_trans_pane_cp02

0xafb5,	// (0x000294c7) heading_imed_pane

0x64c8,	// (0x000249da) listscroll_imed_pane

0xcc98,	// (0x0002b1aa) heading_imed_pane_g1

0xcca0,	// (0x0002b1b2) heading_imed_pane_t1

0xccae,	// (0x0002b1c0) grid_imed_colour_35_pane_ParamLimits

0xccae,	// (0x0002b1c0) grid_imed_colour_35_pane

0x64d4,	// (0x000249e6) grid_imed_effect_pane

0xccc6,	// (0x0002b1d8) list_imed_aspect_pane

0x64e4,	// (0x000249f6) scroll_pane_cp027_ParamLimits

0x64e4,	// (0x000249f6) scroll_pane_cp027

0x64f0,	// (0x00024a02) cell_imed_effect_pane_ParamLimits

0x64f0,	// (0x00024a02) cell_imed_effect_pane

0xccce,	// (0x0002b1e0) cell_imed_colour_pane_ParamLimits

0xccce,	// (0x0002b1e0) cell_imed_colour_pane

0xcd10,	// (0x0002b222) cell_imed_colour_pane_g1_ParamLimits

0xcd10,	// (0x0002b222) cell_imed_colour_pane_g1

0xcd21,	// (0x0002b233) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd21,	// (0x0002b233) hgihlgiht_grid_pane_cp016

0x6508,	// (0x00024a1a) cell_imed_effect_pane_g1

0x6510,	// (0x00024a22) grid_highlight_pane_cp017

0xcd32,	// (0x0002b244) list_imed_single_pane_ParamLimits

0xcd32,	// (0x0002b244) list_imed_single_pane

0x9c11,	// (0x00028123) list_highlight_pane_cp07

0xcd47,	// (0x0002b259) list_imed_aspect_pane_comp1_t1

0xc3e8,	// (0x0002a8fa) bg_tb_trans_pane_cp05

0xcd69,	// (0x0002b27b) popup_imed_adjust2_window_g1

0xcd90,	// (0x0002b2a2) popup_imed_adjust2_window_t1

0xcda8,	// (0x0002b2ba) slider_imed_adjust_pane

0xcdbc,	// (0x0002b2ce) slider_imed_adjust_pane_g1

0xcdcc,	// (0x0002b2de) slider_imed_adjust_pane_g2

0xcddc,	// (0x0002b2ee) slider_imed_adjust_pane_g3

0xcded,	// (0x0002b2ff) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0002dcf0) slider_imed_adjust_pane_g

0x6519,	// (0x00024a2b) aid_size_cell_clipart2

0x6525,	// (0x00024a37) grid_imed_clipart_pane

0xcdfe,	// (0x0002b310) scroll_pane_cp031

0x652f,	// (0x00024a41) cell_imed_clipart_pane_ParamLimits

0x652f,	// (0x00024a41) cell_imed_clipart_pane

0x6552,	// (0x00024a64) cell_imed_clipart_pane_g1

0x9c11,	// (0x00028123) grid_highlight_pane_cp014

0x6327,	// (0x00024839) main_clock2_pane_g1_ParamLimits

0x6327,	// (0x00024839) main_clock2_pane_g1

0x6412,	// (0x00024924) aid_call2_pane_cp10

0x6424,	// (0x00024936) aid_call_pane_cp10

0xadcc,	// (0x000292de) popup_clock_analogue_window_cp10_g1

0xadcc,	// (0x000292de) popup_clock_analogue_window_cp10_g2

0x6436,	// (0x00024948) popup_clock_analogue_window_cp10_g3

0x6436,	// (0x00024948) popup_clock_analogue_window_cp10_g4

0xadcc,	// (0x000292de) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0002dcde) popup_clock_analogue_window_cp10_g

0x644c,	// (0x0002495e) popup_clock_analogue_window_cp10_t1

0x16d1,	// (0x0001fbe3) clock_digital_number_pane_cp10_ParamLimits

0x16d1,	// (0x0001fbe3) clock_digital_number_pane_cp10

0x16eb,	// (0x0001fbfd) clock_digital_number_pane_cp11_ParamLimits

0x16eb,	// (0x0001fbfd) clock_digital_number_pane_cp11

0x1705,	// (0x0001fc17) clock_digital_number_pane_cp12_ParamLimits

0x1705,	// (0x0001fc17) clock_digital_number_pane_cp12

0x171f,	// (0x0001fc31) clock_digital_number_pane_cp13_ParamLimits

0x171f,	// (0x0001fc31) clock_digital_number_pane_cp13

0x1739,	// (0x0001fc4b) clock_digital_separator_pane_cp10_ParamLimits

0x1739,	// (0x0001fc4b) clock_digital_separator_pane_cp10

0x1753,	// (0x0001fc65) popup_clock_digital_window_cp02_t1_ParamLimits

0x1753,	// (0x0001fc65) popup_clock_digital_window_cp02_t1

0xa281,	// (0x00028793) clock_digital_number_pane_cp10_g1

0xa281,	// (0x00028793) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0002dcf9) clock_digital_number_pane_cp10_g

0xa281,	// (0x00028793) clock_digital_separator_pane_cp10_g1

0xa281,	// (0x00028793) clock_digital_separator_pane_g2_cp10

0xaf59,	// (0x0002946b) navi_pane_vded_g4

0xaf62,	// (0x00029474) navi_pane_vded_g5

0xaf6b,	// (0x0002947d) navi_pane_vded_t1

0x0e1d,	// (0x0001f32f) main_vded_pane

0x655b,	// (0x00024a6d) main_vded_pane_g1

0x6567,	// (0x00024a79) main_vded_pane_g2

0x6571,	// (0x00024a83) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0002dcfe) main_vded_pane_g

0x657b,	// (0x00024a8d) main_vded_pane_t1

0x6589,	// (0x00024a9b) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0002dd05) main_vded_pane_t

0x6597,	// (0x00024aa9) vded_slider_pane

0x65a1,	// (0x00024ab3) vded_video_pane

0xce06,	// (0x0002b318) vded_video_pane_g1

0x65ab,	// (0x00024abd) vded_video_pane_g2

0xc7f0,	// (0x0002ad02) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0002dd0a) vded_video_pane_g

0xce10,	// (0x0002b322) vded_slider_pane_g1

0xc543,	// (0x0002aa55) vded_slider_pane_g2

0xce19,	// (0x0002b32b) vded_slider_pane_g3

0xce22,	// (0x0002b334) vded_slider_pane_g4

0xce2b,	// (0x0002b33d) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0002dd11) vded_slider_pane_g

0x6101,	// (0x00024613) mup3_rocker_pane_ParamLimits

0x6101,	// (0x00024613) mup3_rocker_pane

0x65b4,	// (0x00024ac6) mup3_control_keys_pane_g1

0x65bc,	// (0x00024ace) mup3_control_keys_pane_g2

0x65c4,	// (0x00024ad6) mup3_control_keys_pane_g3

0x65cc,	// (0x00024ade) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0002dd1c) mup3_control_keys_pane_g

0x0ddd,	// (0x0001f2ef) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ddd,	// (0x0001f2ef) popup_toolbar2_fixed_window_cp01

0x611b,	// (0x0002462d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x611b,	// (0x0002462d) popup_toolbar2_fixed_window_cp02

0xb72a,	// (0x00029c3c) popup_call2_audio_second_window_t4_ParamLimits

0xb72a,	// (0x00029c3c) popup_call2_audio_second_window_t4

0xbc58,	// (0x0002a16a) popup_call2_audio_first_window_t6_ParamLimits

0xbc58,	// (0x0002a16a) popup_call2_audio_first_window_t6

0xbeee,	// (0x0002a400) popup_call2_audio_out_window_t6_ParamLimits

0xbeee,	// (0x0002a400) popup_call2_audio_out_window_t6

0x0e1d,	// (0x0001f32f) main_vitu_pane

0x65dc,	// (0x00024aee) aid_size_cell_itu_ParamLimits

0x65dc,	// (0x00024aee) aid_size_cell_itu

0xd0ee,	// (0x0002b600) bg_popup_window_pane_cp08_ParamLimits

0xd0ee,	// (0x0002b600) bg_popup_window_pane_cp08

0x65ea,	// (0x00024afc) field_vitu_entry_pane_ParamLimits

0x65ea,	// (0x00024afc) field_vitu_entry_pane

0x65f9,	// (0x00024b0b) grid_vitu_function_pane_ParamLimits

0x65f9,	// (0x00024b0b) grid_vitu_function_pane

0x6609,	// (0x00024b1b) grid_vitu_itu_pane_ParamLimits

0x6609,	// (0x00024b1b) grid_vitu_itu_pane

0x6619,	// (0x00024b2b) cell_vitu_itu_pane_ParamLimits

0x6619,	// (0x00024b2b) cell_vitu_itu_pane

0x662e,	// (0x00024b40) cell_vitu_function_pane_ParamLimits

0x662e,	// (0x00024b40) cell_vitu_function_pane

0xa614,	// (0x00028b26) bg_popup_sub_pane_cp08_ParamLimits

0xa614,	// (0x00028b26) bg_popup_sub_pane_cp08

0x6640,	// (0x00024b52) field_vitu_entry_pane_t1_ParamLimits

0x6640,	// (0x00024b52) field_vitu_entry_pane_t1

0xce4c,	// (0x0002b35e) field_vitu_entry_pane_t2_ParamLimits

0xce4c,	// (0x0002b35e) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0002dd2a) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0002dd2a) field_vitu_entry_pane_t

0xce69,	// (0x0002b37b) bg_button_pane_cp05_ParamLimits

0xce69,	// (0x0002b37b) bg_button_pane_cp05

0x665d,	// (0x00024b6f) cell_vitu_itu_pane_g1

0x6675,	// (0x00024b87) cell_vitu_itu_pane_t1_ParamLimits

0x6675,	// (0x00024b87) cell_vitu_itu_pane_t1

0x6687,	// (0x00024b99) cell_vitu_itu_pane_t2_ParamLimits

0x6687,	// (0x00024b99) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0002dd2f) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0002dd2f) cell_vitu_itu_pane_t

0xce77,	// (0x0002b389) bg_button_pane_cp07

0x66bc,	// (0x00024bce) cell_vitu_function_pane_g1

0x0ef6,	// (0x0001f408) main_calc_pane_g1

0x0bc7,	// (0x0001f0d9) aid_visual_content_pane

0x0e1d,	// (0x0001f32f) main_vradio_pane

0x66c5,	// (0x00024bd7) main_vradio_pane_g1_ParamLimits

0x66c5,	// (0x00024bd7) main_vradio_pane_g1

0xce81,	// (0x0002b393) main_vradio_pane_g2_ParamLimits

0xce81,	// (0x0002b393) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0002dd36) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0002dd36) main_vradio_pane_g

0x66d5,	// (0x00024be7) main_vradio_pane_t1_ParamLimits

0x66d5,	// (0x00024be7) main_vradio_pane_t1

0x66e7,	// (0x00024bf9) main_vradio_pane_t2_ParamLimits

0x66e7,	// (0x00024bf9) main_vradio_pane_t2

0xce8e,	// (0x0002b3a0) main_vradio_pane_t3_ParamLimits

0xce8e,	// (0x0002b3a0) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0002dd3b) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0002dd3b) main_vradio_pane_t

0x66f9,	// (0x00024c0b) vradio_rocker_control_pane_ParamLimits

0x66f9,	// (0x00024c0b) vradio_rocker_control_pane

0x6705,	// (0x00024c17) vradio_station_info_pane_ParamLimits

0x6705,	// (0x00024c17) vradio_station_info_pane

0xcea2,	// (0x0002b3b4) vradio_frequency_info_pane_ParamLimits

0xcea2,	// (0x0002b3b4) vradio_frequency_info_pane

0xc7f0,	// (0x0002ad02) vradio_station_info_pane_g1

0xceb1,	// (0x0002b3c3) vradio_station_info_pane_t1_ParamLimits

0xceb1,	// (0x0002b3c3) vradio_station_info_pane_t1

0xced3,	// (0x0002b3e5) vradio_station_info_pane_t2_ParamLimits

0xced3,	// (0x0002b3e5) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0002dd42) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0002dd42) vradio_station_info_pane_t

0xcee5,	// (0x0002b3f7) vradio_tuning_pane

0xceed,	// (0x0002b3ff) vradio_rocker_control_pane_g1

0xcef5,	// (0x0002b407) vradio_rocker_control_pane_g2

0xcefd,	// (0x0002b40f) vradio_rocker_control_pane_g3

0xcf05,	// (0x0002b417) vradio_rocker_control_pane_g4

0xcf0d,	// (0x0002b41f) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0002dd47) vradio_rocker_control_pane_g

0x6714,	// (0x00024c26) vradio_frequency_info_pane_g1

0xcf15,	// (0x0002b427) vradio_frequency_info_pane_t1_ParamLimits

0xcf15,	// (0x0002b427) vradio_frequency_info_pane_t1

0x671e,	// (0x00024c30) vradio_tuning_pane_g1

0x6727,	// (0x00024c39) vradio_tuning_pane_t1

0x0be3,	// (0x0001f0f5) area_side_right_pane_ParamLimits

0x0be3,	// (0x0001f0f5) area_side_right_pane

0xc3a3,	// (0x0002a8b5) status_small_pane_g1

0xc3ab,	// (0x0002a8bd) status_small_pane_g2

0xc3b4,	// (0x0002a8c6) status_small_pane_g3

0xc3bd,	// (0x0002a8cf) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0002db02) status_small_pane_g

0xc3c6,	// (0x0002a8d8) status_small_pane_t1

0x0e1d,	// (0x0001f32f) main_video3_pane

0xcf29,	// (0x0002b43b) cams_zoom_vslider_pane

0xcf31,	// (0x0002b443) image3_wide_pane_ParamLimits

0xcf31,	// (0x0002b443) image3_wide_pane

0xcf4b,	// (0x0002b45d) image3_wide_small_pane

0xcf57,	// (0x0002b469) main_video3_pane_g1_ParamLimits

0xcf57,	// (0x0002b469) main_video3_pane_g1

0xcf73,	// (0x0002b485) main_video3_pane_g2_ParamLimits

0xcf73,	// (0x0002b485) main_video3_pane_g2

0x0001,

0xf840,	// (0x0002dd52) main_video3_pane_g_ParamLimits

0xf840,	// (0x0002dd52) main_video3_pane_g

0xcf8f,	// (0x0002b4a1) main_video3_pane_t1_ParamLimits

0xcf8f,	// (0x0002b4a1) main_video3_pane_t1

0xcfba,	// (0x0002b4cc) main_video3_pane_t2_ParamLimits

0xcfba,	// (0x0002b4cc) main_video3_pane_t2

0xcfe5,	// (0x0002b4f7) main_video3_pane_t3_ParamLimits

0xcfe5,	// (0x0002b4f7) main_video3_pane_t3

0x0002,

0xf845,	// (0x0002dd57) main_video3_pane_t_ParamLimits

0xf845,	// (0x0002dd57) main_video3_pane_t

0xd012,	// (0x0002b524) cams_zoom_vslider_pane_g1

0xd01b,	// (0x0002b52d) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0002dd5e) cams_zoom_vslider_pane_g

0xd023,	// (0x0002b535) small_slider_vertical_pane

0xc7f0,	// (0x0002ad02) small_slider_vertical_pane_g1

0xc7f0,	// (0x0002ad02) small_slider_vertical_pane_g2

0xd02b,	// (0x0002b53d) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0002dd63) small_slider_vertical_pane_g

0x0e1d,	// (0x0001f32f) main_hwr_training_pane

0xd034,	// (0x0002b546) hwr_training_instruct_pane_ParamLimits

0xd034,	// (0x0002b546) hwr_training_instruct_pane

0x6736,	// (0x00024c48) hwr_training_navi_pane_ParamLimits

0x6736,	// (0x00024c48) hwr_training_navi_pane

0x6750,	// (0x00024c62) hwr_training_write_pane_ParamLimits

0x6750,	// (0x00024c62) hwr_training_write_pane

0x9c11,	// (0x00028123) bg_frame_shadow_pane

0xd06b,	// (0x0002b57d) hwr_training_write_pane_g1

0xd073,	// (0x0002b585) hwr_training_write_pane_g2

0xd07b,	// (0x0002b58d) hwr_training_write_pane_g3

0xd083,	// (0x0002b595) hwr_training_write_pane_g4

0xd08b,	// (0x0002b59d) hwr_training_write_pane_g5

0xd093,	// (0x0002b5a5) hwr_training_write_pane_g6

0xd09b,	// (0x0002b5ad) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0002dd6a) hwr_training_write_pane_g

0x1774,	// (0x0001fc86) hwr_training_navi_pane_g1_ParamLimits

0x1774,	// (0x0001fc86) hwr_training_navi_pane_g1

0x1786,	// (0x0001fc98) hwr_training_navi_pane_g2_ParamLimits

0x1786,	// (0x0001fc98) hwr_training_navi_pane_g2

0x1798,	// (0x0001fcaa) hwr_training_navi_pane_g3_ParamLimits

0x1798,	// (0x0001fcaa) hwr_training_navi_pane_g3

0x17a8,	// (0x0001fcba) hwr_training_navi_pane_g4_ParamLimits

0x17a8,	// (0x0001fcba) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0002dd79) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0002dd79) hwr_training_navi_pane_g

0x17c2,	// (0x0001fcd4) hwr_training_navi_pane_t1

0x6788,	// (0x00024c9a) list_single_hwr_training_instruct_pane_ParamLimits

0x6788,	// (0x00024c9a) list_single_hwr_training_instruct_pane

0xd0a3,	// (0x0002b5b5) list_single_hwr_training_instruct_pane_t1

0xc730,	// (0x0002ac42) bg_frame_shadow_pane_g1

0xd0b2,	// (0x0002b5c4) bg_frame_shadow_pane_g2

0xd0ba,	// (0x0002b5cc) bg_frame_shadow_pane_g3

0xd0c2,	// (0x0002b5d4) bg_frame_shadow_pane_g4

0xd0ca,	// (0x0002b5dc) bg_frame_shadow_pane_g5

0xd0d2,	// (0x0002b5e4) bg_frame_shadow_pane_g6

0xd0da,	// (0x0002b5ec) bg_frame_shadow_pane_g7

0xa413,	// (0x00028925) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0002dd84) bg_frame_shadow_pane_g

0x0e1d,	// (0x0001f32f) main_video_tele_dialer_pane

0x17d0,	// (0x0001fce2) aid_size_cell_video_keypad_ParamLimits

0x17d0,	// (0x0001fce2) aid_size_cell_video_keypad

0x17e0,	// (0x0001fcf2) grid_video_dialer_keypad_pane_ParamLimits

0x17e0,	// (0x0001fcf2) grid_video_dialer_keypad_pane

0x1814,	// (0x0001fd26) video_down_pane_cp_ParamLimits

0x1814,	// (0x0001fd26) video_down_pane_cp

0x1822,	// (0x0001fd34) cell_video_dialer_keypad_pane_ParamLimits

0x1822,	// (0x0001fd34) cell_video_dialer_keypad_pane

0xd0e2,	// (0x0002b5f4) bg_button_pane_cp08_ParamLimits

0xd0e2,	// (0x0002b5f4) bg_button_pane_cp08

0x67cd,	// (0x00024cdf) cell_video_dialer_keypad_pane_g1_ParamLimits

0x67cd,	// (0x00024cdf) cell_video_dialer_keypad_pane_g1

0x60f5,	// (0x00024607) mup3_rocker2_pane_ParamLimits

0x60f5,	// (0x00024607) mup3_rocker2_pane

0xc7f0,	// (0x0002ad02) mup3_rocker2_pane_g1

0x1281,	// (0x0001f793) main_dialer2_pane

0x0e1d,	// (0x0001f32f) main_mp4_pane

0x1855,	// (0x0001fd67) main_mp4_pane_g1_ParamLimits

0x1855,	// (0x0001fd67) main_mp4_pane_g1

0x1863,	// (0x0001fd75) main_mp4_pane_g2_ParamLimits

0x1863,	// (0x0001fd75) main_mp4_pane_g2

0x1871,	// (0x0001fd83) main_mp4_pane_g3_ParamLimits

0x1871,	// (0x0001fd83) main_mp4_pane_g3

0x18b6,	// (0x0001fdc8) main_mp4_pane_g4_ParamLimits

0x18b6,	// (0x0001fdc8) main_mp4_pane_g4

0x18e4,	// (0x0001fdf6) main_mp4_pane_g5_ParamLimits

0x18e4,	// (0x0001fdf6) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0002dda4) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0002dda4) main_mp4_pane_g

0x1958,	// (0x0001fe6a) main_mp4_pane_t1_ParamLimits

0x1958,	// (0x0001fe6a) main_mp4_pane_t1

0x19b4,	// (0x0001fec6) main_mp4_pane_t2_ParamLimits

0x19b4,	// (0x0001fec6) main_mp4_pane_t2

0xd0fc,	// (0x0002b60e) main_mp4_pane_t3_ParamLimits

0xd0fc,	// (0x0002b60e) main_mp4_pane_t3

0x1a06,	// (0x0001ff18) main_mp4_pane_t4_ParamLimits

0x1a06,	// (0x0001ff18) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0002ddb5) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0002ddb5) main_mp4_pane_t

0x1a4a,	// (0x0001ff5c) mp4_progress_pane_ParamLimits

0x1a4a,	// (0x0001ff5c) mp4_progress_pane

0x1a94,	// (0x0001ffa6) mp4_rocker_pane_ParamLimits

0x1a94,	// (0x0001ffa6) mp4_rocker_pane

0xd12a,	// (0x0002b63c) mp4_progress_pane_t1

0xd143,	// (0x0002b655) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0002ddbe) mp4_progress_pane_t

0xd15c,	// (0x0002b66e) mup_progress_pane_cp04

0xd817,	// (0x0002bd29) mp4_rocker_pane_g1

0x1ab4,	// (0x0001ffc6) aid_cell_size_keypad2_ParamLimits

0x1ab4,	// (0x0001ffc6) aid_cell_size_keypad2

0x1ac4,	// (0x0001ffd6) dialer2_ne_pane_ParamLimits

0x1ac4,	// (0x0001ffd6) dialer2_ne_pane

0x1ad2,	// (0x0001ffe4) grid_dialer2_keypad_pane_ParamLimits

0x1ad2,	// (0x0001ffe4) grid_dialer2_keypad_pane

0xd16f,	// (0x0002b681) bg_popup_call_pane_cp07_ParamLimits

0xd16f,	// (0x0002b681) bg_popup_call_pane_cp07

0x6807,	// (0x00024d19) dialer2_ne_pane_t1_ParamLimits

0x6807,	// (0x00024d19) dialer2_ne_pane_t1

0x1ae2,	// (0x0001fff4) cell_dialer2_keypad_pane_ParamLimits

0x1ae2,	// (0x0001fff4) cell_dialer2_keypad_pane

0xd18f,	// (0x0002b6a1) bg_button_pane_pane_cp04_ParamLimits

0xd18f,	// (0x0002b6a1) bg_button_pane_pane_cp04

0x682c,	// (0x00024d3e) cell_dialer2_keypad_pane_g1_ParamLimits

0x682c,	// (0x00024d3e) cell_dialer2_keypad_pane_g1

0x314e,	// (0x00021660) aid_placing_vt_set_content_ParamLimits

0x314e,	// (0x00021660) aid_placing_vt_set_content

0x317a,	// (0x0002168c) aid_placing_vt_set_title_ParamLimits

0x317a,	// (0x0002168c) aid_placing_vt_set_title

0x0e1d,	// (0x0001f32f) main_image3_pane

0x1b29,	// (0x0002003b) area_side_right_pane_cp01_ParamLimits

0x1b29,	// (0x0002003b) area_side_right_pane_cp01

0x1b56,	// (0x00020068) main_image3_pane_g1_ParamLimits

0x1b56,	// (0x00020068) main_image3_pane_g1

0x1b64,	// (0x00020076) main_image3_pane_g2_ParamLimits

0x1b64,	// (0x00020076) main_image3_pane_g2

0x1b7d,	// (0x0002008f) main_image3_pane_g3_ParamLimits

0x1b7d,	// (0x0002008f) main_image3_pane_g3

0x1b96,	// (0x000200a8) main_image3_pane_g4_ParamLimits

0x1b96,	// (0x000200a8) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0002ddcd) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0002ddcd) main_image3_pane_g

0x1baf,	// (0x000200c1) main_image3_pane_t1_ParamLimits

0x1baf,	// (0x000200c1) main_image3_pane_t1

0x1bd4,	// (0x000200e6) main_image3_pane_t2_ParamLimits

0x1bd4,	// (0x000200e6) main_image3_pane_t2

0x1bf3,	// (0x00020105) main_image3_pane_t3_ParamLimits

0x1bf3,	// (0x00020105) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0002ddd6) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0002ddd6) main_image3_pane_t

0xd0ee,	// (0x0002b600) grid_sctrl_middle_pane_cp01_ParamLimits

0xd0ee,	// (0x0002b600) grid_sctrl_middle_pane_cp01

0x6894,	// (0x00024da6) cell_sctrl_middle_pane_cp01_ParamLimits

0x6894,	// (0x00024da6) cell_sctrl_middle_pane_cp01

0x68a5,	// (0x00024db7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x68a5,	// (0x00024db7) cell_sctrl_middle_pane_cp01_g1

0x0e1d,	// (0x0001f32f) main_call4_pane

0x1c54,	// (0x00020166) aid_size_button_call4_ParamLimits

0x1c54,	// (0x00020166) aid_size_button_call4

0x1c8a,	// (0x0002019c) call4_windows_pane_ParamLimits

0x1c8a,	// (0x0002019c) call4_windows_pane

0x1c9f,	// (0x000201b1) grid_call4_button_pane_ParamLimits

0x1c9f,	// (0x000201b1) grid_call4_button_pane

0x68be,	// (0x00024dd0) call4_windows_conf_pane

0x68d5,	// (0x00024de7) popup_call4_audio_first_window_ParamLimits

0x68d5,	// (0x00024de7) popup_call4_audio_first_window

0x6925,	// (0x00024e37) popup_call4_audio_second_window_ParamLimits

0x6925,	// (0x00024e37) popup_call4_audio_second_window

0x693e,	// (0x00024e50) popup_call4_audio_wait_window_ParamLimits

0x693e,	// (0x00024e50) popup_call4_audio_wait_window

0x1cc1,	// (0x000201d3) cell_call4_button_pane_ParamLimits

0x1cc1,	// (0x000201d3) cell_call4_button_pane

0x694c,	// (0x00024e5e) bg_button_pane_cp09_ParamLimits

0x694c,	// (0x00024e5e) bg_button_pane_cp09

0x1ce4,	// (0x000201f6) cell_call4_button_pane_g1_ParamLimits

0x1ce4,	// (0x000201f6) cell_call4_button_pane_g1

0x6958,	// (0x00024e6a) cell_call4_button_pane_t1_ParamLimits

0x6958,	// (0x00024e6a) cell_call4_button_pane_t1

0xd1a3,	// (0x0002b6b5) popup_call4_audio_conf_window_ParamLimits

0xd1a3,	// (0x0002b6b5) popup_call4_audio_conf_window

0x6128,	// (0x0002463a) mup3_progress_pane_t1_ParamLimits

0x6147,	// (0x00024659) mup3_progress_pane_t2_ParamLimits

0xcb24,	// (0x0002b036) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0002dca6) mup3_progress_pane_t_ParamLimits

0xcb41,	// (0x0002b053) mup_progress_pane_cp03_ParamLimits

0x65d4,	// (0x00024ae6) mup3_control_keys_pane_g4_copy1

0x1a78,	// (0x0001ff8a) mp4_rocker2_pane_ParamLimits

0x1a78,	// (0x0001ff8a) mp4_rocker2_pane

0xd1b7,	// (0x0002b6c9) mp4_rocker2_pane_g1

0xd1bf,	// (0x0002b6d1) mp4_rocker2_pane_g2

0x1d23,	// (0x00020235) mp4_rocker2_pane_g3

0x1d2b,	// (0x0002023d) mp4_rocker2_pane_g4

0x1d33,	// (0x00020245) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0002dddf) mp4_rocker2_pane_g

0x0e1d,	// (0x0001f32f) main_camera4_pane

0x0e1d,	// (0x0001f32f) main_video4_pane

0x17f0,	// (0x0001fd02) main_video_tele_dialer_pane_t1_ParamLimits

0x17f0,	// (0x0001fd02) main_video_tele_dialer_pane_t1

0x1802,	// (0x0001fd14) main_video_tele_dialer_pane_t2_ParamLimits

0x1802,	// (0x0001fd14) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0002dd95) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0002dd95) main_video_tele_dialer_pane_t

0x1d53,	// (0x00020265) cam4_autofocus_pane_ParamLimits

0x1d53,	// (0x00020265) cam4_autofocus_pane

0x1d6d,	// (0x0002027f) cam4_image_uncrop_pane_ParamLimits

0x1d6d,	// (0x0002027f) cam4_image_uncrop_pane

0x1d84,	// (0x00020296) cam4_indicators_pane_ParamLimits

0x1d84,	// (0x00020296) cam4_indicators_pane

0x1da0,	// (0x000202b2) main_camera4_pane_g1_ParamLimits

0x1da0,	// (0x000202b2) main_camera4_pane_g1

0x1dac,	// (0x000202be) main_camera4_pane_g2_ParamLimits

0x1dac,	// (0x000202be) main_camera4_pane_g2

0x1dac,	// (0x000202be) main_camera4_pane_g3_ParamLimits

0x1dac,	// (0x000202be) main_camera4_pane_g3

0x1db8,	// (0x000202ca) main_camera4_pane_g4_ParamLimits

0x1db8,	// (0x000202ca) main_camera4_pane_g4

0x1dc4,	// (0x000202d6) main_camera4_pane_g5_ParamLimits

0x1dc4,	// (0x000202d6) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0002ddea) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0002ddea) main_camera4_pane_g

0x1dde,	// (0x000202f0) main_camera4_pane_t1_ParamLimits

0x1dde,	// (0x000202f0) main_camera4_pane_t1

0x1e02,	// (0x00020314) bg_tb_trans_pane_cp06

0x1e18,	// (0x0002032a) cam4_indicators_pane_g1

0x1e29,	// (0x0002033b) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0002de05) cam4_indicators_pane_g

0x1e41,	// (0x00020353) cam4_indicators_pane_t1

0x1e6b,	// (0x0002037d) main_video4_pane_g1_ParamLimits

0x1e6b,	// (0x0002037d) main_video4_pane_g1

0x1e77,	// (0x00020389) main_video4_pane_g2_ParamLimits

0x1e77,	// (0x00020389) main_video4_pane_g2

0x1e83,	// (0x00020395) main_video4_pane_g3_ParamLimits

0x1e83,	// (0x00020395) main_video4_pane_g3

0x1e8f,	// (0x000203a1) main_video4_pane_g4_ParamLimits

0x1e8f,	// (0x000203a1) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0002de0c) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0002de0c) main_video4_pane_g

0x1eaf,	// (0x000203c1) vid4_indicators_pane_ParamLimits

0x1eaf,	// (0x000203c1) vid4_indicators_pane

0x1ece,	// (0x000203e0) video4_image_uncrop_cif_pane_ParamLimits

0x1ece,	// (0x000203e0) video4_image_uncrop_cif_pane

0x1edd,	// (0x000203ef) video4_image_uncrop_nhd_pane_ParamLimits

0x1edd,	// (0x000203ef) video4_image_uncrop_nhd_pane

0x1d6d,	// (0x0002027f) video4_image_uncrop_vga_pane_ParamLimits

0x1d6d,	// (0x0002027f) video4_image_uncrop_vga_pane

0x1273,	// (0x0001f785) bg_tb_trans_pane_cp07

0x1ef2,	// (0x00020404) vid4_indicators_pane_g1

0x1f06,	// (0x00020418) vid4_indicators_pane_g2

0x1f1a,	// (0x0002042c) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0002de17) vid4_indicators_pane_g

0x1f47,	// (0x00020459) vid4_indicators_pane_t1

0x698e,	// (0x00024ea0) cam4_autofocus_pane_g1

0x6996,	// (0x00024ea8) cam4_autofocus_pane_g2

0x699e,	// (0x00024eb0) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0002de22) cam4_autofocus_pane_g

0x69a6,	// (0x00024eb8) cam4_autofocus_pane_g3_copy1

0x67b1,	// (0x00024cc3) video_down_pane_cp_t1

0x67bf,	// (0x00024cd1) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0002dd9a) video_down_pane_cp_t

0x0e0f,	// (0x0001f321) popup_vitu2_window_ParamLimits

0x0e0f,	// (0x0001f321) popup_vitu2_window

0x1f5e,	// (0x00020470) aid_size_cell2_itu2_ParamLimits

0x1f5e,	// (0x00020470) aid_size_cell2_itu2

0x1f80,	// (0x00020492) aid_size_cell_itu2_ParamLimits

0x1f80,	// (0x00020492) aid_size_cell_itu2

0x1fc4,	// (0x000204d6) bg_popup_window_pane_cp09_ParamLimits

0x1fc4,	// (0x000204d6) bg_popup_window_pane_cp09

0x1fd2,	// (0x000204e4) field_vitu2_entry_pane_ParamLimits

0x1fd2,	// (0x000204e4) field_vitu2_entry_pane

0x1ff2,	// (0x00020504) grid_vitu2_function_pane_ParamLimits

0x1ff2,	// (0x00020504) grid_vitu2_function_pane

0x2036,	// (0x00020548) grid_vitu2_itu_pane_ParamLimits

0x2036,	// (0x00020548) grid_vitu2_itu_pane

0x20b0,	// (0x000205c2) cell_vitu2_itu_pane_ParamLimits

0x20b0,	// (0x000205c2) cell_vitu2_itu_pane

0x20c9,	// (0x000205db) cell_vitu2_function_pane_ParamLimits

0x20c9,	// (0x000205db) cell_vitu2_function_pane

0xd1c7,	// (0x0002b6d9) bg_popup_call_pane_cp08_ParamLimits

0xd1c7,	// (0x0002b6d9) bg_popup_call_pane_cp08

0xd1de,	// (0x0002b6f0) field_vitu2_entry_pane_g1

0xd1ea,	// (0x0002b6fc) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0002de29) field_vitu2_entry_pane_g

0x69ae,	// (0x00024ec0) field_vitu2_entry_pane_t1_ParamLimits

0x69ae,	// (0x00024ec0) field_vitu2_entry_pane_t1

0xd204,	// (0x0002b716) field_vitu2_entry_pane_t2_ParamLimits

0xd204,	// (0x0002b716) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0002de30) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0002de30) field_vitu2_entry_pane_t

0x210a,	// (0x0002061c) bg_button_pane_cp010_ParamLimits

0x210a,	// (0x0002061c) bg_button_pane_cp010

0x2118,	// (0x0002062a) cell_vitu2_itu_pane_g1

0x2138,	// (0x0002064a) cell_vitu2_itu_pane_t1_ParamLimits

0x2138,	// (0x0002064a) cell_vitu2_itu_pane_t1

0x2184,	// (0x00020696) cell_vitu2_itu_pane_t2_ParamLimits

0x2184,	// (0x00020696) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0002de3a) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0002de3a) cell_vitu2_itu_pane_t

0x1273,	// (0x0001f785) bg_button_pane_cp011

0x224c,	// (0x0002075e) cell_vitu2_function_pane_g1

0x0e1d,	// (0x0001f32f) main_myfav_hc_pane

0x1c35,	// (0x00020147) popup_image3_note_pane_ParamLimits

0x1c35,	// (0x00020147) popup_image3_note_pane

0x1c43,	// (0x00020155) popup_image3_tool_bar_pane_ParamLimits

0x1c43,	// (0x00020155) popup_image3_tool_bar_pane

0x21fa,	// (0x0002070c) cell_vitu2_itu_pane_t3_ParamLimits

0x21fa,	// (0x0002070c) cell_vitu2_itu_pane_t3

0x9c11,	// (0x00028123) bg_popup_trans_pane

0xd229,	// (0x0002b73b) grid_image3_tool_bar_pane

0xd233,	// (0x0002b745) bg_popup_trans_pane_g1

0xa7bb,	// (0x00028ccd) bg_popup_trans_pane_g2

0xd23b,	// (0x0002b74d) bg_popup_trans_pane_g3

0xd243,	// (0x0002b755) bg_popup_trans_pane_g4

0xd24b,	// (0x0002b75d) bg_popup_trans_pane_g5

0xd253,	// (0x0002b765) bg_popup_trans_pane_g6

0xd25b,	// (0x0002b76d) bg_popup_trans_pane_g7

0xd263,	// (0x0002b775) bg_popup_trans_pane_g8

0xa79b,	// (0x00028cad) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0002de41) bg_popup_trans_pane_g

0xd26b,	// (0x0002b77d) cell_image3_tool_bar_pane_ParamLimits

0xd26b,	// (0x0002b77d) cell_image3_tool_bar_pane

0xc7f0,	// (0x0002ad02) cell_image3_tool_bar_pane_g1

0x9c11,	// (0x00028123) bg_popup_trans_pane_cp1

0xd27f,	// (0x0002b791) popup_image3_note_pane_t1

0xd28d,	// (0x0002b79f) popup_image3_note_pane_t2

0xd29b,	// (0x0002b7ad) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0002de54) popup_image3_note_pane_t

0xd2a9,	// (0x0002b7bb) popup_image3_note_pane_t3_copy1

0x69df,	// (0x00024ef1) bg_myfav_hc_instruction_pane_ParamLimits

0x69df,	// (0x00024ef1) bg_myfav_hc_instruction_pane

0x69f7,	// (0x00024f09) cell_myfav_contact_pane_ParamLimits

0x69f7,	// (0x00024f09) cell_myfav_contact_pane

0x6a11,	// (0x00024f23) cell_myfav_contact_pane_cp1_ParamLimits

0x6a11,	// (0x00024f23) cell_myfav_contact_pane_cp1

0x6a29,	// (0x00024f3b) cell_myfav_contact_pane_cp2_ParamLimits

0x6a29,	// (0x00024f3b) cell_myfav_contact_pane_cp2

0x6a41,	// (0x00024f53) cell_myfav_contact_pane_cp3_ParamLimits

0x6a41,	// (0x00024f53) cell_myfav_contact_pane_cp3

0x6a58,	// (0x00024f6a) cell_myfav_contact_pane_cp4_ParamLimits

0x6a58,	// (0x00024f6a) cell_myfav_contact_pane_cp4

0x6a6e,	// (0x00024f80) cell_myfav_contact_pane_cp5_ParamLimits

0x6a6e,	// (0x00024f80) cell_myfav_contact_pane_cp5

0x6a82,	// (0x00024f94) cell_myfav_contact_pane_cp6_ParamLimits

0x6a82,	// (0x00024f94) cell_myfav_contact_pane_cp6

0x6a96,	// (0x00024fa8) cell_myfav_contact_pane_cp7_ParamLimits

0x6a96,	// (0x00024fa8) cell_myfav_contact_pane_cp7

0xd2b7,	// (0x0002b7c9) listscroll_gen_pane_cp05

0x6aae,	// (0x00024fc0) main_myfav_hc_pane_g1_ParamLimits

0x6aae,	// (0x00024fc0) main_myfav_hc_pane_g1

0x6ac4,	// (0x00024fd6) main_myfav_hc_pane_g2_ParamLimits

0x6ac4,	// (0x00024fd6) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0002de5b) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0002de5b) main_myfav_hc_pane_g

0x6af4,	// (0x00025006) main_myfav_hc_pane_t1_ParamLimits

0x6af4,	// (0x00025006) main_myfav_hc_pane_t1

0xd2c0,	// (0x0002b7d2) main_myfav_hc_pane_t2_ParamLimits

0xd2c0,	// (0x0002b7d2) main_myfav_hc_pane_t2

0xd2d2,	// (0x0002b7e4) main_myfav_hc_pane_t3_ParamLimits

0xd2d2,	// (0x0002b7e4) main_myfav_hc_pane_t3

0x6b0b,	// (0x0002501d) main_myfav_hc_pane_t4_ParamLimits

0x6b0b,	// (0x0002501d) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0002de62) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0002de62) main_myfav_hc_pane_t

0xc7f0,	// (0x0002ad02) bg_myfav_hc_instruction_pane_g1

0xd2e4,	// (0x0002b7f6) cell_myfav_contact_pane_g1_ParamLimits

0xd2e4,	// (0x0002b7f6) cell_myfav_contact_pane_g1

0xd2e4,	// (0x0002b7f6) cell_myfav_contact_pane_g2_ParamLimits

0xd2e4,	// (0x0002b7f6) cell_myfav_contact_pane_g2

0xd2f0,	// (0x0002b802) cell_myfav_contact_pane_g3_ParamLimits

0xd2f0,	// (0x0002b802) cell_myfav_contact_pane_g3

0xcb0e,	// (0x0002b020) cell_myfav_contact_pane_g4_ParamLimits

0xcb0e,	// (0x0002b020) cell_myfav_contact_pane_g4

0xd2fd,	// (0x0002b80f) cell_myfav_contact_pane_g5_ParamLimits

0xd2fd,	// (0x0002b80f) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0002de6d) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0002de6d) cell_myfav_contact_pane_g

0x6adc,	// (0x00024fee) main_myfav_hc_pane_g3_ParamLimits

0x6adc,	// (0x00024fee) main_myfav_hc_pane_g3

0x0d18,	// (0x0001f22a) popup_adpt_find_window

0x6b35,	// (0x00025047) afind_page_pane_ParamLimits

0x6b35,	// (0x00025047) afind_page_pane

0x6b42,	// (0x00025054) aid_size_cell_afind_ParamLimits

0x6b42,	// (0x00025054) aid_size_cell_afind

0x6b5c,	// (0x0002506e) bg_popup_sub_pane_cp09_ParamLimits

0x6b5c,	// (0x0002506e) bg_popup_sub_pane_cp09

0x6b69,	// (0x0002507b) find_pane_cp01_ParamLimits

0x6b69,	// (0x0002507b) find_pane_cp01

0xd309,	// (0x0002b81b) grid_afind_control_pane_ParamLimits

0xd309,	// (0x0002b81b) grid_afind_control_pane

0x6b76,	// (0x00025088) grid_afind_pane_ParamLimits

0x6b76,	// (0x00025088) grid_afind_pane

0x6b90,	// (0x000250a2) cell_afind_pane_ParamLimits

0x6b90,	// (0x000250a2) cell_afind_pane

0xc7f0,	// (0x0002ad02) afind_page_pane_g1

0x6bd8,	// (0x000250ea) afind_page_pane_g2

0x6be1,	// (0x000250f3) afind_page_pane_g3

0x0002,

0xf966,	// (0x0002de78) afind_page_pane_g

0x6bea,	// (0x000250fc) afind_page_pane_t1

0xd31d,	// (0x0002b82f) cell_afind_grid_control_pane_ParamLimits

0xd31d,	// (0x0002b82f) cell_afind_grid_control_pane

0xd18f,	// (0x0002b6a1) bg_button_pane_cp69_ParamLimits

0xd18f,	// (0x0002b6a1) bg_button_pane_cp69

0x6c0a,	// (0x0002511c) cell_afind_pane_g1_ParamLimits

0x6c0a,	// (0x0002511c) cell_afind_pane_g1

0x6c17,	// (0x00025129) cell_afind_pane_t1_ParamLimits

0x6c17,	// (0x00025129) cell_afind_pane_t1

0xa57f,	// (0x00028a91) bg_button_pane_cp72

0xd32c,	// (0x0002b83e) cell_afind_grid_control_pane_g1

0x4fde,	// (0x000234f0) aid_image_placing_area_ParamLimits

0x4fde,	// (0x000234f0) aid_image_placing_area

0xce34,	// (0x0002b346) field_vitu_entry_pane_g1_ParamLimits

0xce34,	// (0x0002b346) field_vitu_entry_pane_g1

0xce40,	// (0x0002b352) field_vitu_entry_pane_g2_ParamLimits

0xce40,	// (0x0002b352) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0002dd25) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0002dd25) field_vitu_entry_pane_g

0x665d,	// (0x00024b6f) cell_vitu_itu_pane_g1_ParamLimits

0x669f,	// (0x00024bb1) cell_vitu_itu_pane_t3_ParamLimits

0x669f,	// (0x00024bb1) cell_vitu_itu_pane_t3

0xd12a,	// (0x0002b63c) mp4_progress_pane_t1_ParamLimits

0xd143,	// (0x0002b655) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0002ddbe) mp4_progress_pane_t_ParamLimits

0xd15c,	// (0x0002b66e) mup_progress_pane_cp04_ParamLimits

0x6b1f,	// (0x00025031) main_myfav_hc_pane_t5_ParamLimits

0x6b1f,	// (0x00025031) main_myfav_hc_pane_t5

0x0bdb,	// (0x0001f0ed) aid_zoom_text_primary

0x0d18,	// (0x0001f22a) popup_adpt_find_window_ParamLimits

0x1273,	// (0x0001f785) main_cam_set_pane

0x1d92,	// (0x000202a4) cam4_zoom_pane_ParamLimits

0x1d92,	// (0x000202a4) cam4_zoom_pane

0x6c29,	// (0x0002513b) main_cam_set_pane_g1_ParamLimits

0x6c29,	// (0x0002513b) main_cam_set_pane_g1

0x6c37,	// (0x00025149) main_cam_set_pane_g2_ParamLimits

0x6c37,	// (0x00025149) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0002de7f) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0002de7f) main_cam_set_pane_g

0x6c43,	// (0x00025155) main_cam_set_pane_t1_ParamLimits

0x6c43,	// (0x00025155) main_cam_set_pane_t1

0x6c5f,	// (0x00025171) main_cset_listscroll_pane_ParamLimits

0x6c5f,	// (0x00025171) main_cset_listscroll_pane

0x6c8a,	// (0x0002519c) main_cset_slider_pane_ParamLimits

0x6c8a,	// (0x0002519c) main_cset_slider_pane

0xd33d,	// (0x0002b84f) main_cset_list_pane_ParamLimits

0xd33d,	// (0x0002b84f) main_cset_list_pane

0xd34d,	// (0x0002b85f) scroll_pane_cp028

0x6ca9,	// (0x000251bb) aid_area_touch_slider

0x6cc5,	// (0x000251d7) cset_slider_pane

0x6cef,	// (0x00025201) main_cset_slider_pane_g1

0x6d04,	// (0x00025216) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0002de84) main_cset_slider_pane_g

0xd386,	// (0x0002b898) main_cset_slider_pane_t1

0x6dca,	// (0x000252dc) main_cset_slider_pane_t2

0x6de4,	// (0x000252f6) main_cset_slider_pane_t3

0x6dfe,	// (0x00025310) main_cset_slider_pane_t4

0x6e1c,	// (0x0002532e) main_cset_slider_pane_t5

0x6e3a,	// (0x0002534c) main_cset_slider_pane_t6

0x6e51,	// (0x00025363) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0002dea9) main_cset_slider_pane_t

0x6f5f,	// (0x00025471) cset_list_set_pane_ParamLimits

0x6f5f,	// (0x00025471) cset_list_set_pane

0x6f78,	// (0x0002548a) aid_position_infowindow_above

0x6f80,	// (0x00025492) aid_position_infowindow_below

0x6f88,	// (0x0002549a) cset_list_set_pane_g1_ParamLimits

0x6f88,	// (0x0002549a) cset_list_set_pane_g1

0x6f94,	// (0x000254a6) cset_list_set_pane_g3_ParamLimits

0x6f94,	// (0x000254a6) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0002dec8) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0002dec8) cset_list_set_pane_g

0x6fa3,	// (0x000254b5) cset_list_set_pane_t1_ParamLimits

0x6fa3,	// (0x000254b5) cset_list_set_pane_t1

0xa614,	// (0x00028b26) list_highlight_pane_cp021_ParamLimits

0xa614,	// (0x00028b26) list_highlight_pane_cp021

0xb0d9,	// (0x000295eb) cset_slider_pane_g1

0xb0eb,	// (0x000295fd) cset_slider_pane_g2

0xb0e2,	// (0x000295f4) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0002decd) cset_slider_pane_g

0x2260,	// (0x00020772) aid_area_touch_cam4_zoom

0x2268,	// (0x0002077a) cam4_zoom_cont_pane

0x2270,	// (0x00020782) cam4_zoom_pane_g1

0x2278,	// (0x0002078a) cam4_zoom_pane_g2

0x2280,	// (0x00020792) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0002ded4) cam4_zoom_pane_g

0x2288,	// (0x0002079a) cam4_zoom_cont_pane_g1

0x2291,	// (0x000207a3) cam4_zoom_cont_pane_g2

0x229a,	// (0x000207ac) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0002dedb) cam4_zoom_cont_pane_g

0x1c6e,	// (0x00020180) call4_image_pane_ParamLimits

0x1c6e,	// (0x00020180) call4_image_pane

0x68be,	// (0x00024dd0) call4_windows_conf_pane_ParamLimits

0x6903,	// (0x00024e15) popup_call4_audio_in_window_ParamLimits

0x6903,	// (0x00024e15) popup_call4_audio_in_window

0x9c11,	// (0x00028123) bg_popup_call2_act_pane_cp02

0xd19b,	// (0x0002b6ad) call4_list_conf_pane

0xc7f0,	// (0x0002ad02) call4_image_pane_g1

0xc7f0,	// (0x0002ad02) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0002dbe6) call4_image_pane_g

0xd426,	// (0x0002b938) list_single_graphic_popup_conf4_pane_ParamLimits

0xd426,	// (0x0002b938) list_single_graphic_popup_conf4_pane

0x9c11,	// (0x00028123) list_highlight_pane_cp022

0xd439,	// (0x0002b94b) list_single_graphic_popup_conf4_pane_g1

0xacc9,	// (0x000291db) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0002dee2) list_single_graphic_popup_conf4_pane_g

0xd441,	// (0x0002b953) list_single_graphic_popup_conf4_pane_t1

0x32de,	// (0x000217f0) popup_vtel_slider_window_ParamLimits

0x32de,	// (0x000217f0) popup_vtel_slider_window

0xd17d,	// (0x0002b68f) dialer2_ne_pane_t2_ParamLimits

0xd17d,	// (0x0002b68f) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0002ddc3) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0002ddc3) dialer2_ne_pane_t

0xa614,	// (0x00028b26) bg_popup_sub_pane_cp010_ParamLimits

0xa614,	// (0x00028b26) bg_popup_sub_pane_cp010

0x6fb8,	// (0x000254ca) popup_vtel_slider_window_g1_ParamLimits

0x6fb8,	// (0x000254ca) popup_vtel_slider_window_g1

0x6fc4,	// (0x000254d6) popup_vtel_slider_window_g2_ParamLimits

0x6fc4,	// (0x000254d6) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0002dee7) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0002dee7) popup_vtel_slider_window_g

0x700c,	// (0x0002551e) vtel_slider_pane_ParamLimits

0x700c,	// (0x0002551e) vtel_slider_pane

0x701b,	// (0x0002552d) vtel_slider_pane_g1_ParamLimits

0x701b,	// (0x0002552d) vtel_slider_pane_g1

0x7028,	// (0x0002553a) vtel_slider_pane_g2_ParamLimits

0x7028,	// (0x0002553a) vtel_slider_pane_g2

0x7035,	// (0x00025547) vtel_slider_pane_g3_ParamLimits

0x7035,	// (0x00025547) vtel_slider_pane_g3

0x701b,	// (0x0002552d) vtel_slider_pane_g4_ParamLimits

0x701b,	// (0x0002552d) vtel_slider_pane_g4

0x7042,	// (0x00025554) vtel_slider_pane_g5_ParamLimits

0x7042,	// (0x00025554) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0002def0) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0002def0) vtel_slider_pane_g

0x1273,	// (0x0001f785) main_gallery2_pane

0x1fa6,	// (0x000204b8) aid_size_row_itut2_dropdow_list_ParamLimits

0x1fa6,	// (0x000204b8) aid_size_row_itut2_dropdow_list

0x2014,	// (0x00020526) grid_vitu2_function_top_pane_ParamLimits

0x2014,	// (0x00020526) grid_vitu2_function_top_pane

0x206e,	// (0x00020580) popup_vitu2_dropdown_list_window_ParamLimits

0x206e,	// (0x00020580) popup_vitu2_dropdown_list_window

0x208e,	// (0x000205a0) popup_vitu2_match_list_window

0x22a3,	// (0x000207b5) cell_vitu2_function_top_pane_ParamLimits

0x22a3,	// (0x000207b5) cell_vitu2_function_top_pane

0x22bd,	// (0x000207cf) cell_vitu2_function_top_pane_cp01_ParamLimits

0x22bd,	// (0x000207cf) cell_vitu2_function_top_pane_cp01

0x22d9,	// (0x000207eb) cell_vitu2_function_top_wide_pane_ParamLimits

0x22d9,	// (0x000207eb) cell_vitu2_function_top_wide_pane

0x1273,	// (0x0001f785) bg_button_pane_cp012

0x22f5,	// (0x00020807) cell_vitu2_function_top_pane_g1

0x2309,	// (0x0002081b) bg_button_pane_cp013_ParamLimits

0x2309,	// (0x0002081b) bg_button_pane_cp013

0x704f,	// (0x00025561) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x704f,	// (0x00025561) cell_vitu2_function_top_wide_pane_g1

0x0e0f,	// (0x0001f321) bg_popup_sub_pane_cp20

0x2325,	// (0x00020837) list_vitu2_match_list_pane

0xd233,	// (0x0002b745) bg_popup_sub_pane_cp20_g1

0xd23b,	// (0x0002b74d) bg_popup_sub_pane_cp20_g2

0xa7bb,	// (0x00028ccd) bg_popup_sub_pane_cp20_g3

0xd243,	// (0x0002b755) bg_popup_sub_pane_cp20_g4

0xa79b,	// (0x00028cad) bg_popup_sub_pane_cp20_g5

0xd465,	// (0x0002b977) bg_popup_sub_pane_cp20_g6

0xd253,	// (0x0002b765) bg_popup_sub_pane_cp20_g7

0xd25b,	// (0x0002b76d) bg_popup_sub_pane_cp20_g8

0xd263,	// (0x0002b775) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0002defb) bg_popup_sub_pane_cp20_g

0x233d,	// (0x0002084f) list_vitu2_match_list_item_pane_ParamLimits

0x233d,	// (0x0002084f) list_vitu2_match_list_item_pane

0x234f,	// (0x00020861) list_vitu2_match_list_item_pane_t1

0x0e1d,	// (0x0001f32f) bg_popup_sub_pane_cp21

0x235d,	// (0x0002086f) grid_vitu2_dropdown_list_pane

0x2365,	// (0x00020877) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2365,	// (0x00020877) cell_vitu2_dropdown_list_char_pane

0x2386,	// (0x00020898) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2386,	// (0x00020898) cell_vitu2_dropdown_list_ctrl_pane

0xd4b5,	// (0x0002b9c7) cell_vitu2_dropdown_list_char_pane_g1

0xd4be,	// (0x0002b9d0) cell_vitu2_dropdown_list_char_pane_g2

0xd46d,	// (0x0002b97f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0002df18) cell_vitu2_dropdown_list_char_pane_g

0x23b2,	// (0x000208c4) cell_vitu2_dropdown_list_char_pane_t1

0x70af,	// (0x000255c1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70af,	// (0x000255c1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70bf,	// (0x000255d1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70bf,	// (0x000255d1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70d0,	// (0x000255e2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70d0,	// (0x000255e2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x23c0,	// (0x000208d2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x23c0,	// (0x000208d2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e02,	// (0x00020314) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e02,	// (0x00020314) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0002df1f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0002df1f) cell_vitu2_dropdown_list_ctrl_pane_g

0x70e0,	// (0x000255f2) aid_size_cell_gallery2_ParamLimits

0x70e0,	// (0x000255f2) aid_size_cell_gallery2

0x70fa,	// (0x0002560c) grid_gallery2_pane_ParamLimits

0x70fa,	// (0x0002560c) grid_gallery2_pane

0x7111,	// (0x00025623) scroll_pane_cp029_ParamLimits

0x7111,	// (0x00025623) scroll_pane_cp029

0x7121,	// (0x00025633) cell_gallery2_pane_ParamLimits

0x7121,	// (0x00025633) cell_gallery2_pane

0xd4c7,	// (0x0002b9d9) cell_gallery2_pane_g2

0x7176,	// (0x00025688) cell_gallery2_pane_g3

0xd4cf,	// (0x0002b9e1) cell_gallery2_pane_g4

0xd4d7,	// (0x0002b9e9) cell_gallery2_pane_g5

0xa52d,	// (0x00028a3f) grid_highlight_pane_cp10

0x208e,	// (0x000205a0) popup_vitu2_match_list_window_ParamLimits

0x20a0,	// (0x000205b2) popup_vitu2_query_window_ParamLimits

0x20a0,	// (0x000205b2) popup_vitu2_query_window

0x0e1d,	// (0x0001f32f) bg_vitu2_candi_button_pane

0xd4b5,	// (0x0002b9c7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4be,	// (0x0002b9d0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd46d,	// (0x0002b97f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x717e,	// (0x00025690) bg_button_pane_cp015

0x7190,	// (0x000256a2) bg_button_pane_cp016

0x71a3,	// (0x000256b5) bg_button_pane_cp017

0xc3e8,	// (0x0002a8fa) bg_popup_sub_pane_cp22

0xd4df,	// (0x0002b9f1) popup_vitu2_query_window_g1

0x71e8,	// (0x000256fa) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0002df2a) popup_vitu2_query_window_g

0x7205,	// (0x00025717) popup_vitu2_query_window_t1_ParamLimits

0x7205,	// (0x00025717) popup_vitu2_query_window_t1

0x7238,	// (0x0002574a) popup_vitu2_query_window_t2_ParamLimits

0x7238,	// (0x0002574a) popup_vitu2_query_window_t2

0x724a,	// (0x0002575c) popup_vitu2_query_window_t3_ParamLimits

0x724a,	// (0x0002575c) popup_vitu2_query_window_t3

0x7272,	// (0x00025784) popup_vitu2_query_window_t4_ParamLimits

0x7272,	// (0x00025784) popup_vitu2_query_window_t4

0x7293,	// (0x000257a5) popup_vitu2_query_window_t5_ParamLimits

0x7293,	// (0x000257a5) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0002df31) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0002df31) popup_vitu2_query_window_t

0xd335,	// (0x0002b847) main_cset_text_pane

0x6ca9,	// (0x000251bb) aid_area_touch_slider_ParamLimits

0x6cc5,	// (0x000251d7) cset_slider_pane_ParamLimits

0x6cef,	// (0x00025201) main_cset_slider_pane_g1_ParamLimits

0x6d04,	// (0x00025216) main_cset_slider_pane_g2_ParamLimits

0xd356,	// (0x0002b868) main_cset_slider_pane_g3_ParamLimits

0xd356,	// (0x0002b868) main_cset_slider_pane_g3

0x6d19,	// (0x0002522b) main_cset_slider_pane_g4_ParamLimits

0x6d19,	// (0x0002522b) main_cset_slider_pane_g4

0x6d28,	// (0x0002523a) main_cset_slider_pane_g5_ParamLimits

0x6d28,	// (0x0002523a) main_cset_slider_pane_g5

0x6d36,	// (0x00025248) main_cset_slider_pane_g6_ParamLimits

0x6d36,	// (0x00025248) main_cset_slider_pane_g6

0xf972,	// (0x0002de84) main_cset_slider_pane_g_ParamLimits

0xd386,	// (0x0002b898) main_cset_slider_pane_t1_ParamLimits

0x6dca,	// (0x000252dc) main_cset_slider_pane_t2_ParamLimits

0x6de4,	// (0x000252f6) main_cset_slider_pane_t3_ParamLimits

0x6dfe,	// (0x00025310) main_cset_slider_pane_t4_ParamLimits

0x6e1c,	// (0x0002532e) main_cset_slider_pane_t5_ParamLimits

0x6e3a,	// (0x0002534c) main_cset_slider_pane_t6_ParamLimits

0x6e51,	// (0x00025363) main_cset_slider_pane_t7_ParamLimits

0x6e7f,	// (0x00025391) main_cset_slider_pane_t8_ParamLimits

0x6e7f,	// (0x00025391) main_cset_slider_pane_t8

0x6ea7,	// (0x000253b9) main_cset_slider_pane_t9_ParamLimits

0x6ea7,	// (0x000253b9) main_cset_slider_pane_t9

0x6ecf,	// (0x000253e1) main_cset_slider_pane_t10_ParamLimits

0x6ecf,	// (0x000253e1) main_cset_slider_pane_t10

0x6ef7,	// (0x00025409) main_cset_slider_pane_t11_ParamLimits

0x6ef7,	// (0x00025409) main_cset_slider_pane_t11

0x6f21,	// (0x00025433) main_cset_slider_pane_t12_ParamLimits

0x6f21,	// (0x00025433) main_cset_slider_pane_t12

0x6f40,	// (0x00025452) main_cset_slider_pane_t13_ParamLimits

0x6f40,	// (0x00025452) main_cset_slider_pane_t13

0xf997,	// (0x0002dea9) main_cset_slider_pane_t_ParamLimits

0x9c11,	// (0x00028123) bg_popup_sub_pane_cp011

0xd4eb,	// (0x0002b9fd) main_cset_text_pane_g1

0xd4f3,	// (0x0002ba05) main_cset_text_pane_t1

0xd501,	// (0x0002ba13) main_cset_text_pane_t2

0xd50f,	// (0x0002ba21) main_cset_text_pane_t3

0xd51d,	// (0x0002ba2f) main_cset_text_pane_t4

0xd52b,	// (0x0002ba3d) main_cset_text_pane_t5

0xd539,	// (0x0002ba4b) main_cset_text_pane_t6

0xd547,	// (0x0002ba59) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0002df40) main_cset_text_pane_t

0x0e1d,	// (0x0001f32f) main_cam4_burst_pane

0x0e1d,	// (0x0001f32f) main_cam5_pane

0x6bf8,	// (0x0002510a) bg_button_pane_cp019

0x6c01,	// (0x00025113) bg_button_pane_cp020

0xd362,	// (0x0002b874) main_cset_slider_pane_g7_ParamLimits

0xd362,	// (0x0002b874) main_cset_slider_pane_g7

0xd36e,	// (0x0002b880) main_cset_slider_pane_g8_ParamLimits

0xd36e,	// (0x0002b880) main_cset_slider_pane_g8

0x6d4a,	// (0x0002525c) main_cset_slider_pane_g9_ParamLimits

0x6d4a,	// (0x0002525c) main_cset_slider_pane_g9

0x6d56,	// (0x00025268) main_cset_slider_pane_g10_ParamLimits

0x6d56,	// (0x00025268) main_cset_slider_pane_g10

0x6d62,	// (0x00025274) main_cset_slider_pane_g11_ParamLimits

0x6d62,	// (0x00025274) main_cset_slider_pane_g11

0x6d6e,	// (0x00025280) main_cset_slider_pane_g12_ParamLimits

0x6d6e,	// (0x00025280) main_cset_slider_pane_g12

0x6d7a,	// (0x0002528c) main_cset_slider_pane_g13_ParamLimits

0x6d7a,	// (0x0002528c) main_cset_slider_pane_g13

0x6d88,	// (0x0002529a) main_cset_slider_pane_g14_ParamLimits

0x6d88,	// (0x0002529a) main_cset_slider_pane_g14

0x6d96,	// (0x000252a8) main_cset_slider_pane_g15_ParamLimits

0x6d96,	// (0x000252a8) main_cset_slider_pane_g15

0xd3b4,	// (0x0002b8c6) main_cset_slider_pane_t14_ParamLimits

0xd3b4,	// (0x0002b8c6) main_cset_slider_pane_t14

0xd3ed,	// (0x0002b8ff) main_cset_slider_pane_t15_ParamLimits

0xd3ed,	// (0x0002b8ff) main_cset_slider_pane_t15

0x730a,	// (0x0002581c) aid_cam4_burst_size_cell_ParamLimits

0x730a,	// (0x0002581c) aid_cam4_burst_size_cell

0x7326,	// (0x00025838) grid_cam4_burst_pane_ParamLimits

0x7326,	// (0x00025838) grid_cam4_burst_pane

0x7356,	// (0x00025868) linegrid_cam4_burst_pane_ParamLimits

0x7356,	// (0x00025868) linegrid_cam4_burst_pane

0x7376,	// (0x00025888) scroll_pane_cp30_ParamLimits

0x7376,	// (0x00025888) scroll_pane_cp30

0x7382,	// (0x00025894) cell_cam4_burst_pane_ParamLimits

0x7382,	// (0x00025894) cell_cam4_burst_pane

0xd555,	// (0x0002ba67) linegrid_cam4_burst_pane_g1_ParamLimits

0xd555,	// (0x0002ba67) linegrid_cam4_burst_pane_g1

0x73be,	// (0x000258d0) linegrid_cam4_burst_pane_g2_ParamLimits

0x73be,	// (0x000258d0) linegrid_cam4_burst_pane_g2

0xd562,	// (0x0002ba74) linegrid_cam4_burst_pane_g3_ParamLimits

0xd562,	// (0x0002ba74) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0002df4f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0002df4f) linegrid_cam4_burst_pane_g

0x73cf,	// (0x000258e1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73cf,	// (0x000258e1) linegrid_cam4_burst_pane_g3_copy1

0xd56f,	// (0x0002ba81) linegrid_cam4_burst_pane_g4_ParamLimits

0xd56f,	// (0x0002ba81) linegrid_cam4_burst_pane_g4

0x73e9,	// (0x000258fb) linegrid_cam4_burst_pane_g5_ParamLimits

0x73e9,	// (0x000258fb) linegrid_cam4_burst_pane_g5

0x73fa,	// (0x0002590c) linegrid_cam4_burst_pane_g6_ParamLimits

0x73fa,	// (0x0002590c) linegrid_cam4_burst_pane_g6

0xd57c,	// (0x0002ba8e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd57c,	// (0x0002ba8e) linegrid_cam4_burst_pane_g7

0x740b,	// (0x0002591d) cell_cam4_burst_pane_g1

0xd595,	// (0x0002baa7) main_cam5_pane_t1_ParamLimits

0xd595,	// (0x0002baa7) main_cam5_pane_t1

0xd5a7,	// (0x0002bab9) main_cam5_pane_t2_ParamLimits

0xd5a7,	// (0x0002bab9) main_cam5_pane_t2

0xd5b9,	// (0x0002bacb) main_cam5_pane_t3_ParamLimits

0xd5b9,	// (0x0002bacb) main_cam5_pane_t3

0xd5cb,	// (0x0002badd) main_cam5_pane_t4_ParamLimits

0xd5cb,	// (0x0002badd) main_cam5_pane_t4

0xd5e3,	// (0x0002baf5) main_cam5_pane_t5_ParamLimits

0xd5e3,	// (0x0002baf5) main_cam5_pane_t5

0xd5f7,	// (0x0002bb09) main_cam5_pane_t6_ParamLimits

0xd5f7,	// (0x0002bb09) main_cam5_pane_t6

0xd60b,	// (0x0002bb1d) main_cam5_pane_t7_ParamLimits

0xd60b,	// (0x0002bb1d) main_cam5_pane_t7

0xd61d,	// (0x0002bb2f) main_cam5_pane_t8_ParamLimits

0xd61d,	// (0x0002bb2f) main_cam5_pane_t8

0xd639,	// (0x0002bb4b) main_cam5_pane_t9_ParamLimits

0xd639,	// (0x0002bb4b) main_cam5_pane_t9

0xd64b,	// (0x0002bb5d) main_cam5_pane_t10_ParamLimits

0xd64b,	// (0x0002bb5d) main_cam5_pane_t10

0xd65d,	// (0x0002bb6f) main_cam5_pane_t11_ParamLimits

0xd65d,	// (0x0002bb6f) main_cam5_pane_t11

0xd66f,	// (0x0002bb81) main_cam5_pane_t12_ParamLimits

0xd66f,	// (0x0002bb81) main_cam5_pane_t12

0xd684,	// (0x0002bb96) main_cam5_pane_t13_ParamLimits

0xd684,	// (0x0002bb96) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0002df5b) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0002df5b) main_cam5_pane_t

0x0dce,	// (0x0001f2e0) popup_scut_keymap_window_ParamLimits

0x0dce,	// (0x0001f2e0) popup_scut_keymap_window

0x741e,	// (0x00025930) aid_size_cell_brow_shortcut

0xa52d,	// (0x00028a3f) bg_popup_window_pane_cp010

0x742a,	// (0x0002593c) grid_scut_pane

0x7436,	// (0x00025948) cell_scut_pane_ParamLimits

0x7436,	// (0x00025948) cell_scut_pane

0x744d,	// (0x0002595f) cell_scut_pane_g1

0xd6a1,	// (0x0002bbb3) cell_scut_pane_t1

0xd6b0,	// (0x0002bbc2) cell_scut_pane_t2

0x7456,	// (0x00025968) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0002df76) cell_scut_pane_t

0x5d51,	// (0x00024263) main_mup3_pane_g8_ParamLimits

0x5d51,	// (0x00024263) main_mup3_pane_g8

0x1fb4,	// (0x000204c6) area_vitu2_query_pane_ParamLimits

0x1fb4,	// (0x000204c6) area_vitu2_query_pane

0x71b6,	// (0x000256c8) input_focus_pane_cp08

0xd6bf,	// (0x0002bbd1) area_vitu2_query_pane_g1

0x7464,	// (0x00025976) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0002df7d) area_vitu2_query_pane_g

0x7475,	// (0x00025987) area_vitu2_query_pane_t1_ParamLimits

0x7475,	// (0x00025987) area_vitu2_query_pane_t1

0x7489,	// (0x0002599b) area_vitu2_query_pane_t2_ParamLimits

0x7489,	// (0x0002599b) area_vitu2_query_pane_t2

0x749d,	// (0x000259af) area_vitu2_query_pane_t3_ParamLimits

0x749d,	// (0x000259af) area_vitu2_query_pane_t3

0xd6cb,	// (0x0002bbdd) area_vitu2_query_pane_t4_ParamLimits

0xd6cb,	// (0x0002bbdd) area_vitu2_query_pane_t4

0xd6f3,	// (0x0002bc05) area_vitu2_query_pane_t5_ParamLimits

0xd6f3,	// (0x0002bc05) area_vitu2_query_pane_t5

0xd71b,	// (0x0002bc2d) area_vitu2_query_pane_t6_ParamLimits

0xd71b,	// (0x0002bc2d) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0002df82) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0002df82) area_vitu2_query_pane_t

0x74c5,	// (0x000259d7) bg_button_pane_cp018

0x74d3,	// (0x000259e5) bg_button_pane_cp021

0x74df,	// (0x000259f1) bg_button_pane_cp022

0x74f0,	// (0x00025a02) input_focus_pane_cp09

0xadd8,	// (0x000292ea) aid_size_touch_mv_arrow_left

0xae03,	// (0x00029315) aid_size_touch_mv_arrow_right

0x6dae,	// (0x000252c0) main_cset_slider_pane_g16_ParamLimits

0x6dae,	// (0x000252c0) main_cset_slider_pane_g16

0x6dbc,	// (0x000252ce) main_cset_slider_pane_g17_ParamLimits

0x6dbc,	// (0x000252ce) main_cset_slider_pane_g17

0x740b,	// (0x0002591d) cell_cam4_burst_pane_g1_ParamLimits

0x9c11,	// (0x00028123) compa_mode_pane

0x6fd0,	// (0x000254e2) popup_vtel_slider_window_g3_ParamLimits

0x6fd0,	// (0x000254e2) popup_vtel_slider_window_g3

0x6fe4,	// (0x000254f6) popup_vtel_slider_window_g4_ParamLimits

0x6fe4,	// (0x000254f6) popup_vtel_slider_window_g4

0x6ff8,	// (0x0002550a) popup_vtel_slider_window_t1_ParamLimits

0x6ff8,	// (0x0002550a) popup_vtel_slider_window_t1

0x0e1d,	// (0x0001f32f) main_cl_pane

0x130d,	// (0x0001f81f) popup_imed_adjust2_window_ParamLimits

0xc3e8,	// (0x0002a8fa) bg_tb_trans_pane_cp05_ParamLimits

0xcd69,	// (0x0002b27b) popup_imed_adjust2_window_g1_ParamLimits

0xcd78,	// (0x0002b28a) popup_imed_adjust2_window_g2_ParamLimits

0xcd78,	// (0x0002b28a) popup_imed_adjust2_window_g2

0xcd84,	// (0x0002b296) popup_imed_adjust2_window_g3_ParamLimits

0xcd84,	// (0x0002b296) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0002dce9) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0002dce9) popup_imed_adjust2_window_g

0xcd90,	// (0x0002b2a2) popup_imed_adjust2_window_t1_ParamLimits

0xcda8,	// (0x0002b2ba) slider_imed_adjust_pane_ParamLimits

0xcdbc,	// (0x0002b2ce) slider_imed_adjust_pane_g1_ParamLimits

0xcdcc,	// (0x0002b2de) slider_imed_adjust_pane_g2_ParamLimits

0xcddc,	// (0x0002b2ee) slider_imed_adjust_pane_g3_ParamLimits

0xcded,	// (0x0002b2ff) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0002dcf0) slider_imed_adjust_pane_g_ParamLimits

0x1d3b,	// (0x0002024d) aid_touch_area_cam4_ParamLimits

0x1d3b,	// (0x0002024d) aid_touch_area_cam4

0x1d4b,	// (0x0002025d) battery_pane_cp01

0x1dd2,	// (0x000202e4) main_camera4_pane_g6_ParamLimits

0x1dd2,	// (0x000202e4) main_camera4_pane_g6

0x1df0,	// (0x00020302) main_camera4_pane_t2_ParamLimits

0x1df0,	// (0x00020302) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0002ddf7) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0002ddf7) main_camera4_pane_t

0x1e5b,	// (0x0002036d) aid_touch_area_vid4_ParamLimits

0x1e5b,	// (0x0002036d) aid_touch_area_vid4

0x1e9b,	// (0x000203ad) main_video4_pane_g5_ParamLimits

0x1e9b,	// (0x000203ad) main_video4_pane_g5

0x1ebf,	// (0x000203d1) vid4_progress_pane_ParamLimits

0x1ebf,	// (0x000203d1) vid4_progress_pane

0xd37a,	// (0x0002b88c) main_cset_slider_pane_g18_ParamLimits

0xd37a,	// (0x0002b88c) main_cset_slider_pane_g18

0xd589,	// (0x0002ba9b) cell_cam4_burst_pane_g2_ParamLimits

0xd589,	// (0x0002ba9b) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0002df56) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0002df56) cell_cam4_burst_pane_g

0x7501,	// (0x00025a13) bg_cl_pane_ParamLimits

0x7501,	// (0x00025a13) bg_cl_pane

0x750d,	// (0x00025a1f) cl_header_pane_ParamLimits

0x750d,	// (0x00025a1f) cl_header_pane

0x7519,	// (0x00025a2b) cl_listscroll_pane_ParamLimits

0x7519,	// (0x00025a2b) cl_listscroll_pane

0xd767,	// (0x0002bc79) bg_cl_pane_g1

0xd76f,	// (0x0002bc81) bg_cl_pane_g2

0xd777,	// (0x0002bc89) bg_cl_pane_g3

0xd77f,	// (0x0002bc91) bg_cl_pane_g4

0xd787,	// (0x0002bc99) bg_cl_pane_g5

0xd78f,	// (0x0002bca1) bg_cl_pane_g6

0xd797,	// (0x0002bca9) bg_cl_pane_g7

0xd79f,	// (0x0002bcb1) bg_cl_pane_g8

0xd7a7,	// (0x0002bcb9) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0002df91) bg_cl_pane_g

0x7525,	// (0x00025a37) aid_height_cl_leading_ParamLimits

0x7525,	// (0x00025a37) aid_height_cl_leading

0x7531,	// (0x00025a43) aid_height_cl_text_ParamLimits

0x7531,	// (0x00025a43) aid_height_cl_text

0xd0ee,	// (0x0002b600) bg_cl_header_pane_ParamLimits

0xd0ee,	// (0x0002b600) bg_cl_header_pane

0x7549,	// (0x00025a5b) cl_header_pane_g1_ParamLimits

0x7549,	// (0x00025a5b) cl_header_pane_g1

0x7556,	// (0x00025a68) cl_header_pane_t1_ParamLimits

0x7556,	// (0x00025a68) cl_header_pane_t1

0xd7af,	// (0x0002bcc1) cl_list_pane

0xd34d,	// (0x0002b85f) hc_scroll_pane_cp01

0xa79b,	// (0x00028cad) bg_cl_header_pane_g1

0xd233,	// (0x0002b745) bg_cl_header_pane_g2

0xa7bb,	// (0x00028ccd) bg_cl_header_pane_g3

0xd243,	// (0x0002b755) bg_cl_header_pane_g4

0xd23b,	// (0x0002b74d) bg_cl_header_pane_g5

0xd465,	// (0x0002b977) bg_cl_header_pane_g6

0xd25b,	// (0x0002b76d) bg_cl_header_pane_g7

0xd263,	// (0x0002b775) bg_cl_header_pane_g8

0xd253,	// (0x0002b765) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0002dfa4) bg_cl_header_pane_g

0x7568,	// (0x00025a7a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7568,	// (0x00025a7a) hc_cl_list_double_graphic_heading_pane

0x757c,	// (0x00025a8e) hc_cl_list_single_graphic_pane_ParamLimits

0x757c,	// (0x00025a8e) hc_cl_list_single_graphic_pane

0x7596,	// (0x00025aa8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7596,	// (0x00025aa8) hc_cl_list_single_graphic_pane_g1

0x75a2,	// (0x00025ab4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75a2,	// (0x00025ab4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0002dfb7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0002dfb7) hc_cl_list_single_graphic_pane_g

0x75b6,	// (0x00025ac8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75b6,	// (0x00025ac8) hc_cl_list_single_graphic_pane_t1

0x7596,	// (0x00025aa8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7596,	// (0x00025aa8) hc_cl_list_double_graphic_heading_pane_g1

0x75cb,	// (0x00025add) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75cb,	// (0x00025add) hc_cl_list_double_graphic_heading_pane_g2

0x75df,	// (0x00025af1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75df,	// (0x00025af1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0002dfbc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0002dfbc) hc_cl_list_double_graphic_heading_pane_g

0x75f3,	// (0x00025b05) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75f3,	// (0x00025b05) hc_cl_list_double_graphic_heading_pane_t1

0x7608,	// (0x00025b1a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7608,	// (0x00025b1a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0002dfc3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0002dfc3) hc_cl_list_double_graphic_heading_pane_t

0x23e4,	// (0x000208f6) vid4_progress_pane_g1

0x23f4,	// (0x00020906) vid4_progress_pane_g2

0x2404,	// (0x00020916) vid4_progress_pane_g3

0x2416,	// (0x00020928) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0002dfc8) vid4_progress_pane_g

0x242e,	// (0x00020940) vid4_progress_pane_t1

0x2444,	// (0x00020956) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0002dfd3) vid4_progress_pane_t

0x246f,	// (0x00020981) wait_bar_pane_cp07

0xc5e3,	// (0x0002aaf5) blid_firmament_pane_ParamLimits

0xc626,	// (0x0002ab38) popup_blid_sat_info2_window_g1

0xc64a,	// (0x0002ab5c) popup_blid_sat_info2_window_t3

0xc658,	// (0x0002ab6a) popup_blid_sat_info2_window_t4

0xc666,	// (0x0002ab78) popup_blid_sat_info2_window_t5

0xc674,	// (0x0002ab86) popup_blid_sat_info2_window_t6

0xc684,	// (0x0002ab96) popup_blid_sat_info2_window_t7

0xc692,	// (0x0002aba4) popup_blid_sat_info2_window_t8

0xc6a0,	// (0x0002abb2) popup_blid_sat_info2_window_t9

0xc6ae,	// (0x0002abc0) popup_blid_sat_info2_window_t10

0xc770,	// (0x0002ac82) aid_firma_cardinal_ParamLimits

0xc784,	// (0x0002ac96) blid_firmament_pane_t1_ParamLimits

0xc79b,	// (0x0002acad) blid_firmament_pane_t2_ParamLimits

0xc7b2,	// (0x0002acc4) blid_firmament_pane_t3_ParamLimits

0xc7c9,	// (0x0002acdb) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0002dbdd) blid_firmament_pane_t_ParamLimits

0xc7e0,	// (0x0002acf2) blid_sat_info_pane_ParamLimits

0x1273,	// (0x0001f785) main_cam_set_pane_ParamLimits

0x647d,	// (0x0002498f) aid_size_cell_colour_35_ParamLimits

0x6497,	// (0x000249a9) aid_size_cell_colour_112_ParamLimits

0x64ae,	// (0x000249c0) aid_size_cell_effect_ParamLimits

0xa614,	// (0x00028b26) bg_tb_trans_pane_cp02_ParamLimits

0xafb5,	// (0x000294c7) heading_imed_pane_ParamLimits

0x64c8,	// (0x000249da) listscroll_imed_pane_ParamLimits

0xb9d4,	// (0x00029ee6) popup_call2_audio_first_window_g5_ParamLimits

0xb9d4,	// (0x00029ee6) popup_call2_audio_first_window_g5

0x1af7,	// (0x00020009) aid_size_touch_image3_arrow_left_ParamLimits

0x1af7,	// (0x00020009) aid_size_touch_image3_arrow_left

0x1b0d,	// (0x0002001f) aid_size_touch_image3_arrow_right_ParamLimits

0x1b0d,	// (0x0002001f) aid_size_touch_image3_arrow_right

0x2459,	// (0x0002096b) vid4_progress_pane_t3

0x6768,	// (0x00024c7a) main_hwr_training_symbol_option_pane_ParamLimits

0x6768,	// (0x00024c7a) main_hwr_training_symbol_option_pane

0xd056,	// (0x0002b568) popup_hwr_training_preview_window_ParamLimits

0xd056,	// (0x0002b568) popup_hwr_training_preview_window

0x17b5,	// (0x0001fcc7) hwr_training_navi_pane_g5_ParamLimits

0x17b5,	// (0x0001fcc7) hwr_training_navi_pane_g5

0xd221,	// (0x0002b733) popup_char_count_window

0x0e0f,	// (0x0001f321) bg_popup_sub_pane_cp20_ParamLimits

0x2325,	// (0x00020837) list_vitu2_match_list_pane_ParamLimits

0x2331,	// (0x00020843) vitu2_page_scroll_pane_ParamLimits

0x2331,	// (0x00020843) vitu2_page_scroll_pane

0xd7da,	// (0x0002bcec) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7da,	// (0x0002bcec) list_single_hwr_training_symbol_option_pane

0xd7ed,	// (0x0002bcff) list_single_hwr_training_symbol_option_pane_g1

0xd7f5,	// (0x0002bd07) list_single_hwr_training_symbol_option_pane_t1

0xd821,	// (0x0002bd33) bg_button_pane_cp023

0xd82a,	// (0x0002bd3c) bg_button_pane_cp024

0x7655,	// (0x00025b67) vitu2_page_scroll_pane_g1

0x765d,	// (0x00025b6f) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0002dfda) vitu2_page_scroll_pane_g

0x7665,	// (0x00025b77) vitu2_page_scroll_pane_t1

0xa622,	// (0x00028b34) popup_char_count_window_g1

0xd85d,	// (0x0002bd6f) popup_char_count_window_g2

0xd476,	// (0x0002b988) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0002dfdf) popup_char_count_window_g

0xd866,	// (0x0002bd78) popup_char_count_window_t1

0x0e1d,	// (0x0001f32f) main_vded2_pane

0xcd55,	// (0x0002b267) aid_size_cell_imed_line

0xcd5f,	// (0x0002b271) grid_imed_line_width_pane

0x1f2b,	// (0x0002043d) vid4_indicators_pane_g4

0xd874,	// (0x0002bd86) cell_imed_line_width_pane_ParamLimits

0xd874,	// (0x0002bd86) cell_imed_line_width_pane

0xd888,	// (0x0002bd9a) cell_imed_line_width_pane_g1

0xd80f,	// (0x0002bd21) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0002dfe6) cell_imed_line_width_pane_g

0x7674,	// (0x00025b86) main_vded2_pane_g1_ParamLimits

0x7674,	// (0x00025b86) main_vded2_pane_g1

0x7681,	// (0x00025b93) main_vded2_pane_g2_ParamLimits

0x7681,	// (0x00025b93) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0002dfeb) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0002dfeb) main_vded2_pane_g

0x768f,	// (0x00025ba1) vded2_slider_pane_ParamLimits

0x768f,	// (0x00025ba1) vded2_slider_pane

0x769c,	// (0x00025bae) aid_size_touch_vded2_end

0x76a6,	// (0x00025bb8) aid_size_touch_vded2_playhead

0xd891,	// (0x0002bda3) aid_size_touch_vded2_start

0xd899,	// (0x0002bdab) vded2_slider_bg_pane

0xd8a2,	// (0x0002bdb4) vded2_slider_pane_g1

0xd8ab,	// (0x0002bdbd) vded2_slider_pane_g2

0x76ae,	// (0x00025bc0) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0002dff0) vded2_slider_pane_g

0xd8b3,	// (0x0002bdc5) vded2_slider_bg_pane_g1

0xd8bc,	// (0x0002bdce) vded2_slider_bg_pane_g2

0xd8c5,	// (0x0002bdd7) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0002dff7) vded2_slider_bg_pane_g

0x4d49,	// (0x0002325b) aid_postcard_touch_down_pane_ParamLimits

0x4d49,	// (0x0002325b) aid_postcard_touch_down_pane

0x4d59,	// (0x0002326b) aid_postcard_touch_up_pane_ParamLimits

0x4d59,	// (0x0002326b) aid_postcard_touch_up_pane

0x0e1d,	// (0x0001f32f) main_blid2_pane

0x129c,	// (0x0001f7ae) popup_blid2_search_window

0x9c11,	// (0x00028123) blid2_gps_pane

0x9c11,	// (0x00028123) blid2_navig_pane

0x9c11,	// (0x00028123) blid2_search_pane

0x9c11,	// (0x00028123) blid2_tripm_pane

0x76b7,	// (0x00025bc9) blid2_search_pane_g1_ParamLimits

0x76b7,	// (0x00025bc9) blid2_search_pane_g1

0x76c7,	// (0x00025bd9) blid2_search_pane_t1_ParamLimits

0x76c7,	// (0x00025bd9) blid2_search_pane_t1

0x76d9,	// (0x00025beb) aid_size_cell_blid2_gps_ParamLimits

0x76d9,	// (0x00025beb) aid_size_cell_blid2_gps

0x76e9,	// (0x00025bfb) blid2_gps_pane_g1_ParamLimits

0x76e9,	// (0x00025bfb) blid2_gps_pane_g1

0x76f5,	// (0x00025c07) grid_blid2_satellite_pane_ParamLimits

0x76f5,	// (0x00025c07) grid_blid2_satellite_pane

0x7705,	// (0x00025c17) blid2_navig_pane_g1_ParamLimits

0x7705,	// (0x00025c17) blid2_navig_pane_g1

0x7711,	// (0x00025c23) blid2_navig_pane_t1_ParamLimits

0x7711,	// (0x00025c23) blid2_navig_pane_t1

0x7723,	// (0x00025c35) blid2_navig_pane_t2_ParamLimits

0x7723,	// (0x00025c35) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0002dffe) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0002dffe) blid2_navig_pane_t

0x7735,	// (0x00025c47) blid2_navig_ring_pane_ParamLimits

0x7735,	// (0x00025c47) blid2_navig_ring_pane

0x7745,	// (0x00025c57) blid2_speed_pane_ParamLimits

0x7745,	// (0x00025c57) blid2_speed_pane

0x7751,	// (0x00025c63) blid2_tripm_pane_g1_ParamLimits

0x7751,	// (0x00025c63) blid2_tripm_pane_g1

0x7761,	// (0x00025c73) blid2_tripm_pane_g2_ParamLimits

0x7761,	// (0x00025c73) blid2_tripm_pane_g2

0x776d,	// (0x00025c7f) blid2_tripm_pane_g3_ParamLimits

0x776d,	// (0x00025c7f) blid2_tripm_pane_g3

0x7779,	// (0x00025c8b) blid2_tripm_pane_g4_ParamLimits

0x7779,	// (0x00025c8b) blid2_tripm_pane_g4

0x7785,	// (0x00025c97) blid2_tripm_pane_g5_ParamLimits

0x7785,	// (0x00025c97) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0002e003) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0002e003) blid2_tripm_pane_g

0x77a1,	// (0x00025cb3) blid2_tripm_pane_t1_ParamLimits

0x77a1,	// (0x00025cb3) blid2_tripm_pane_t1

0x77b5,	// (0x00025cc7) blid2_tripm_pane_t2_ParamLimits

0x77b5,	// (0x00025cc7) blid2_tripm_pane_t2

0x77c7,	// (0x00025cd9) blid2_tripm_pane_t3_ParamLimits

0x77c7,	// (0x00025cd9) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0002e010) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0002e010) blid2_tripm_pane_t

0x77f9,	// (0x00025d0b) cell_blid2_satellite_pane_ParamLimits

0x77f9,	// (0x00025d0b) cell_blid2_satellite_pane

0x7813,	// (0x00025d25) cell_blid2_satellite_pane_g1

0xd8ce,	// (0x0002bde0) cell_blid2_satellite_pane_t1

0xc7f0,	// (0x0002ad02) blid2_speed_pane_g1

0xd8dc,	// (0x0002bdee) blid2_speed_pane_t1

0xd8ea,	// (0x0002bdfc) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0002e019) blid2_speed_pane_t

0xc7f0,	// (0x0002ad02) blid2_navig_ring_pane_g1

0x781c,	// (0x00025d2e) blid2_navig_ring_pane_g2

0x7824,	// (0x00025d36) blid2_navig_ring_pane_g3

0x782c,	// (0x00025d3e) blid2_navig_ring_pane_g4

0x7834,	// (0x00025d46) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0002e01e) blid2_navig_ring_pane_g

0x9c11,	// (0x00028123) bg_popup_window_pane_cp011

0xd8f8,	// (0x0002be0a) popup_blid2_search_window_g1

0xd900,	// (0x0002be12) popup_blid2_search_window_t1

0xd90e,	// (0x0002be20) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0002e029) popup_blid2_search_window_t

0xa6aa,	// (0x00028bbc) main_browser_pane_g1

0xa35a,	// (0x0002886c) main_browser_pane_ParamLimits

0x1273,	// (0x0001f785) bg_button_pane_cp011_ParamLimits

0x224c,	// (0x0002075e) cell_vitu2_function_pane_g1_ParamLimits

0xc3e8,	// (0x0002a8fa) bg_popup_sub_pane_cp22_ParamLimits

0x71b6,	// (0x000256c8) input_focus_pane_cp08_ParamLimits

0x71cd,	// (0x000256df) popup_vitu2_query_button_pane_ParamLimits

0x71cd,	// (0x000256df) popup_vitu2_query_button_pane

0x71de,	// (0x000256f0) popup_vitu2_query_input_button_pane

0xd4df,	// (0x0002b9f1) popup_vitu2_query_window_g1_ParamLimits

0x71e8,	// (0x000256fa) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0002df2a) popup_vitu2_query_window_g_ParamLimits

0x9c11,	// (0x00028123) bg_button_pane_cp026

0x783c,	// (0x00025d4e) popup_vitu2_query_input_button_pane_g1

0x9c11,	// (0x00028123) bg_button_pane_cp025

0xd91c,	// (0x0002be2e) popup_vitu2_query_button_pane_t1

0x5a72,	// (0x00023f84) main_mp3_pane_t6

0x5a82,	// (0x00023f94) popup_slider_window_cp01

0x1e10,	// (0x00020322) cam4_battery_pane

0x1eea,	// (0x000203fc) cam4_battery_pane_cp02

0x23dc,	// (0x000208ee) cam4_battery_pane_cp01

0x23dc,	// (0x000208ee) cam4_battery_pane_cp03

0xd817,	// (0x0002bd29) cam4_battery_pane_g1

0xc7f0,	// (0x0002ad02) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0002e02e) cam4_battery_pane_g

0xc6bc,	// (0x0002abce) popup_blid_sat_info2_window_t11

0xadd8,	// (0x000292ea) aid_size_touch_mv_arrow_left_ParamLimits

0xae03,	// (0x00029315) aid_size_touch_mv_arrow_right_ParamLimits

0xae61,	// (0x00029373) navi_pane_g1_ParamLimits

0xae6d,	// (0x0002937f) navi_pane_g2_ParamLimits

0xae9b,	// (0x000293ad) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0002d8dc) navi_pane_g_ParamLimits

0x4759,	// (0x00022c6b) navi_pane_mv_t1_ParamLimits

0x64d4,	// (0x000249e6) grid_imed_effect_pane_ParamLimits

0x319e,	// (0x000216b0) aid_placing_vt_slider_lsc

0xa5c4,	// (0x00028ad6) aid_placing_vt_slider_prt

0xa614,	// (0x00028b26) bg_tb_trans_pane_cp01_ParamLimits

0xc955,	// (0x0002ae67) popup_image_details_window_g1_ParamLimits

0xc968,	// (0x0002ae7a) popup_image_details_window_g2_ParamLimits

0xc97d,	// (0x0002ae8f) popup_image_details_window_g3_ParamLimits

0xc97d,	// (0x0002ae8f) popup_image_details_window_g3

0xf710,	// (0x0002dc22) popup_image_details_window_g_ParamLimits

0xc991,	// (0x0002aea3) popup_image_details_window_t1_ParamLimits

0xc9a3,	// (0x0002aeb5) popup_image_details_window_t2_ParamLimits

0xc9bc,	// (0x0002aece) popup_image_details_window_t3_ParamLimits

0xc9d0,	// (0x0002aee2) popup_image_details_window_t4_ParamLimits

0xc9eb,	// (0x0002aefd) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0002dc29) popup_image_details_window_t_ParamLimits

0x753d,	// (0x00025a4f) cl_header_name_pane_ParamLimits

0x753d,	// (0x00025a4f) cl_header_name_pane

0x7844,	// (0x00025d56) cl_header_name_pane_t1_ParamLimits

0x7844,	// (0x00025d56) cl_header_name_pane_t1

0x785b,	// (0x00025d6d) cl_header_name_pane_t2_ParamLimits

0x785b,	// (0x00025d6d) cl_header_name_pane_t2

0x7885,	// (0x00025d97) cl_header_name_pane_t3_ParamLimits

0x7885,	// (0x00025d97) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0002e033) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0002e033) cl_header_name_pane_t

0xaf2a,	// (0x0002943c) navi_pane_mv_g2_ParamLimits

0xd1de,	// (0x0002b6f0) field_vitu2_entry_pane_g1_ParamLimits

0xd1ea,	// (0x0002b6fc) field_vitu2_entry_pane_g2_ParamLimits

0xd1f6,	// (0x0002b708) field_vitu2_entry_pane_g3_ParamLimits

0xd1f6,	// (0x0002b708) field_vitu2_entry_pane_g3

0xf917,	// (0x0002de29) field_vitu2_entry_pane_g_ParamLimits

0x2118,	// (0x0002062a) cell_vitu2_itu_pane_g1_ParamLimits

0x212a,	// (0x0002063c) cell_vitu2_itu_pane_g2_ParamLimits

0x212a,	// (0x0002063c) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0002de35) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0002de35) cell_vitu2_itu_pane_g

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp05_ParamLimits

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp05

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp03

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp04

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp10_ParamLimits

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp10

0x74df,	// (0x000259f1) bg_vkb2_func_pane_cp08

0x74c5,	// (0x000259d7) bg_vkb2_func_pane_cp06

0x74d3,	// (0x000259e5) bg_vkb2_func_pane_cp07

0xd833,	// (0x0002bd45) bg_vkb2_func_pane_cp11_ParamLimits

0xd833,	// (0x0002bd45) bg_vkb2_func_pane_cp11

0xd848,	// (0x0002bd5a) bg_vkb2_func_pane_cp12_ParamLimits

0xd848,	// (0x0002bd5a) bg_vkb2_func_pane_cp12

0x9c11,	// (0x00028123) bg_vkb2_func_pane_cp09

0xd233,	// (0x0002b745) bg_vkb2_func_pane_g1

0xa7bb,	// (0x00028ccd) bg_vkb2_func_pane_g2

0xd23b,	// (0x0002b74d) bg_vkb2_func_pane_g3

0xd243,	// (0x0002b755) bg_vkb2_func_pane_g4

0xd465,	// (0x0002b977) bg_vkb2_func_pane_g5

0xd25b,	// (0x0002b76d) bg_vkb2_func_pane_g6

0xd263,	// (0x0002b775) bg_vkb2_func_pane_g7

0xd253,	// (0x0002b765) bg_vkb2_func_pane_g8

0xa79b,	// (0x00028cad) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0002e03a) bg_vkb2_func_pane_g

0x7793,	// (0x00025ca5) blid2_tripm_pane_g6_ParamLimits

0x7793,	// (0x00025ca5) blid2_tripm_pane_g6

0xd122,	// (0x0002b634) mp4_progress_pane_g1

0x77ed,	// (0x00025cff) blid2_tripm_values_pane_ParamLimits

0x77ed,	// (0x00025cff) blid2_tripm_values_pane

0x78aa,	// (0x00025dbc) blid2_tripm_values_pane_t1

0x78b8,	// (0x00025dca) blid2_tripm_values_pane_t2

0x78c6,	// (0x00025dd8) blid2_tripm_values_pane_t3

0x78d4,	// (0x00025de6) blid2_tripm_values_pane_t4

0x78e2,	// (0x00025df4) blid2_tripm_values_pane_t5

0x78f0,	// (0x00025e02) blid2_tripm_values_pane_t6

0x78fe,	// (0x00025e10) blid2_tripm_values_pane_t7

0x790c,	// (0x00025e1e) blid2_tripm_values_pane_t8

0x791a,	// (0x00025e2c) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0002e04d) blid2_tripm_values_pane_t

0x31de,	// (0x000216f0) call_video_pane_t1_ParamLimits

0x31ff,	// (0x00021711) call_video_pane_t2_ParamLimits

0xf253,	// (0x0002d765) call_video_pane_t_ParamLimits

0x4c80,	// (0x00023192) msg_header_pane_g1_ParamLimits

0xb11e,	// (0x00029630) msg_header_pane_g2_ParamLimits

0xb11e,	// (0x00029630) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0002d97f) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0002d97f) msg_header_pane_g

0xa35a,	// (0x0002886c) main_clock2_pane_ParamLimits

0x62f1,	// (0x00024803) grid_clock2_toolbar_pane_ParamLimits

0x62f1,	// (0x00024803) grid_clock2_toolbar_pane

0x62f1,	// (0x00024803) listscroll_clock2_pane_ParamLimits

0x62f1,	// (0x00024803) listscroll_clock2_pane

0x63a1,	// (0x000248b3) main_clock2_pane_t3_ParamLimits

0x63a1,	// (0x000248b3) main_clock2_pane_t3

0x63b3,	// (0x000248c5) main_clock2_pane_t4_ParamLimits

0x63b3,	// (0x000248c5) main_clock2_pane_t4

0xd92a,	// (0x0002be3c) cell_clock2_toolbar_pane

0xd932,	// (0x0002be44) cell_clock2_toolbar_pane_cp01

0xd932,	// (0x0002be44) cell_clock2_toolbar_pane_cp02

0xd93a,	// (0x0002be4c) cell_clock2_toolbar_pane_cp03

0xd942,	// (0x0002be54) list_clock2_pane

0xad5d,	// (0x0002926f) scroll_pane_cp10

0xd94a,	// (0x0002be5c) list_single_clock2_pane_ParamLimits

0xd94a,	// (0x0002be5c) list_single_clock2_pane

0xa52d,	// (0x00028a3f) list_highlight_pane_cp08

0xd957,	// (0x0002be69) list_single_clock2_pane_t1

0xd965,	// (0x0002be77) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0002e060) list_single_clock2_pane_t

0x9c11,	// (0x00028123) bg_button_pane_cp10

0xd973,	// (0x0002be85) cell_clock2_toolbar_pane_g1

0x120e,	// (0x0001f720) aid_main_viewer_pane_g1_ParamLimits

0x120e,	// (0x0001f720) aid_main_viewer_pane_g1

0x121a,	// (0x0001f72c) aid_main_viewer_pane_g2_ParamLimits

0x121a,	// (0x0001f72c) aid_main_viewer_pane_g2

0x4d05,	// (0x00023217) aid_main_viewer_pane_g3_ParamLimits

0x4d05,	// (0x00023217) aid_main_viewer_pane_g3

0x4d16,	// (0x00023228) aid_main_viewer_pane_g4_ParamLimits

0x4d16,	// (0x00023228) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0002d990) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0002d990) aid_main_viewer_pane_g

0x1266,	// (0x0001f778) main_calc_pane_ParamLimits

0x1281,	// (0x0001f793) main_dialer2_pane_ParamLimits

0x0e1d,	// (0x0001f32f) main_cam6_pane

0x0e1d,	// (0x0001f32f) main_vid6_pane

0x62fd,	// (0x0002480f) listscroll_gen_pane_cp06_ParamLimits

0x62fd,	// (0x0002480f) listscroll_gen_pane_cp06

0x63c5,	// (0x000248d7) main_clock2_pane_t5_ParamLimits

0x63c5,	// (0x000248d7) main_clock2_pane_t5

0x6412,	// (0x00024924) aid_call2_pane_cp10_ParamLimits

0x6424,	// (0x00024936) aid_call_pane_cp10_ParamLimits

0xadcc,	// (0x000292de) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadcc,	// (0x000292de) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6436,	// (0x00024948) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6436,	// (0x00024948) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadcc,	// (0x000292de) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0002dcde) popup_clock_analogue_window_cp10_g_ParamLimits

0x644c,	// (0x0002495e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6841,	// (0x00024d53) cell_dialer2_keypad_pane_g2_ParamLimits

0x6841,	// (0x00024d53) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0002ddc8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0002ddc8) cell_dialer2_keypad_pane_g

0x685d,	// (0x00024d6f) cell_dialer2_keypad_pane_t1

0x6c96,	// (0x000251a8) main_cset_text2_pane_ParamLimits

0x6c96,	// (0x000251a8) main_cset_text2_pane

0xd6bf,	// (0x0002bbd1) area_vitu2_query_pane_g1_ParamLimits

0x7464,	// (0x00025976) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0002df7d) area_vitu2_query_pane_g_ParamLimits

0xd743,	// (0x0002bc55) area_vitu2_query_pane_t7_ParamLimits

0xd743,	// (0x0002bc55) area_vitu2_query_pane_t7

0x74c5,	// (0x000259d7) bg_button_pane_cp018_ParamLimits

0x74d3,	// (0x000259e5) bg_button_pane_cp021_ParamLimits

0x74df,	// (0x000259f1) bg_button_pane_cp022_ParamLimits

0x74df,	// (0x000259f1) bg_vkb2_func_pane_cp08_ParamLimits

0x74c5,	// (0x000259d7) bg_vkb2_func_pane_cp06_ParamLimits

0x74d3,	// (0x000259e5) bg_vkb2_func_pane_cp07_ParamLimits

0x74f0,	// (0x00025a02) input_focus_pane_cp09_ParamLimits

0x2480,	// (0x00020992) cam6_autofocus_pane_ParamLimits

0x2480,	// (0x00020992) cam6_autofocus_pane

0x24a2,	// (0x000209b4) cam6_image_uncrop_pane_ParamLimits

0x24a2,	// (0x000209b4) cam6_image_uncrop_pane

0x24cf,	// (0x000209e1) cam6_indi_pane_ParamLimits

0x24cf,	// (0x000209e1) cam6_indi_pane

0x24e9,	// (0x000209fb) cam6_mode_pane_ParamLimits

0x24e9,	// (0x000209fb) cam6_mode_pane

0x24fd,	// (0x00020a0f) cam6_timer_pane_ParamLimits

0x24fd,	// (0x00020a0f) cam6_timer_pane

0x250e,	// (0x00020a20) cam6_zoom_pane_ParamLimits

0x250e,	// (0x00020a20) cam6_zoom_pane

0x7928,	// (0x00025e3a) cam6_mode_pane_g1_ParamLimits

0x7928,	// (0x00025e3a) cam6_mode_pane_g1

0x7934,	// (0x00025e46) cam6_mode_pane_g2_ParamLimits

0x7934,	// (0x00025e46) cam6_mode_pane_g2

0x7940,	// (0x00025e52) cam6_mode_pane_g3_ParamLimits

0x7940,	// (0x00025e52) cam6_mode_pane_g3

0x794c,	// (0x00025e5e) cam6_mode_pane_g4_ParamLimits

0x794c,	// (0x00025e5e) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0002e065) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0002e065) cam6_mode_pane_g

0xd16f,	// (0x0002b681) bg_tb_trans_pane_cp08_ParamLimits

0xd16f,	// (0x0002b681) bg_tb_trans_pane_cp08

0xd97b,	// (0x0002be8d) cam6_battery_pane_ParamLimits

0xd97b,	// (0x0002be8d) cam6_battery_pane

0xd991,	// (0x0002bea3) cam6_indi_pane_g1_ParamLimits

0xd991,	// (0x0002bea3) cam6_indi_pane_g1

0xd9a3,	// (0x0002beb5) cam6_indi_pane_g2_ParamLimits

0xd9a3,	// (0x0002beb5) cam6_indi_pane_g2

0xd9b5,	// (0x0002bec7) cam6_indi_pane_g3_ParamLimits

0xd9b5,	// (0x0002bec7) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0002e06e) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0002e06e) cam6_indi_pane_g

0xd9c7,	// (0x0002bed9) cam6_indi_pane_t1_ParamLimits

0xd9c7,	// (0x0002bed9) cam6_indi_pane_t1

0x6996,	// (0x00024ea8) cam6_autofocus_pane_g1

0x698e,	// (0x00024ea0) cam6_autofocus_pane_g2

0x69a6,	// (0x00024eb8) cam6_autofocus_pane_g3

0x699e,	// (0x00024eb0) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0002e075) cam6_autofocus_pane_g

0xd9ed,	// (0x0002beff) cam6_timer_pane_g1

0xd9f5,	// (0x0002bf07) cam6_timer_pane_t1

0xda03,	// (0x0002bf15) cam6_zoom_cont_pane

0xda0b,	// (0x0002bf1d) cam6_zoom_pane_g1

0xda13,	// (0x0002bf25) cam6_zoom_pane_g2

0x7958,	// (0x00025e6a) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0002e07e) cam6_zoom_pane_g

0xc7f0,	// (0x0002ad02) cam6_battery_pane_g1

0xc7f0,	// (0x0002ad02) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0002dbe6) cam6_battery_pane_g

0xda1b,	// (0x0002bf2d) cam6_zoom_cont_pane_g1

0xda24,	// (0x0002bf36) cam6_zoom_cont_pane_g2

0xda2d,	// (0x0002bf3f) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0002e085) cam6_zoom_cont_pane_g

0x7975,	// (0x00025e87) cam6_mode_pane_cp_ParamLimits

0x7975,	// (0x00025e87) cam6_mode_pane_cp

0x7989,	// (0x00025e9b) cam6_zoom_pane_cp_ParamLimits

0x7989,	// (0x00025e9b) cam6_zoom_pane_cp

0x79a1,	// (0x00025eb3) vid6_image_uncrop_cif_pane_ParamLimits

0x79a1,	// (0x00025eb3) vid6_image_uncrop_cif_pane

0x79cd,	// (0x00025edf) vid6_image_uncrop_nhd_pane_ParamLimits

0x79cd,	// (0x00025edf) vid6_image_uncrop_nhd_pane

0x79ea,	// (0x00025efc) vid6_image_uncrop_vga_pane_ParamLimits

0x79ea,	// (0x00025efc) vid6_image_uncrop_vga_pane

0x7a09,	// (0x00025f1b) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a09,	// (0x00025f1b) vid6_image_uncrop_wvga_pane

0x7a26,	// (0x00025f38) vid6_indi_pane_ParamLimits

0x7a26,	// (0x00025f38) vid6_indi_pane

0xd16f,	// (0x0002b681) bg_tb_trans_pane_cp09_ParamLimits

0xd16f,	// (0x0002b681) bg_tb_trans_pane_cp09

0xda45,	// (0x0002bf57) cam6_battery_pane_cp_ParamLimits

0xda45,	// (0x0002bf57) cam6_battery_pane_cp

0xda51,	// (0x0002bf63) vid6_indi_pane_g1_ParamLimits

0xda51,	// (0x0002bf63) vid6_indi_pane_g1

0xda63,	// (0x0002bf75) vid6_indi_pane_g2_ParamLimits

0xda63,	// (0x0002bf75) vid6_indi_pane_g2

0xda75,	// (0x0002bf87) vid6_indi_pane_g3_ParamLimits

0xda75,	// (0x0002bf87) vid6_indi_pane_g3

0xda8a,	// (0x0002bf9c) vid6_indi_pane_g4_ParamLimits

0xda8a,	// (0x0002bf9c) vid6_indi_pane_g4

0xda9f,	// (0x0002bfb1) vid6_indi_pane_g5_ParamLimits

0xda9f,	// (0x0002bfb1) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0002e08c) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0002e08c) vid6_indi_pane_g

0xdab9,	// (0x0002bfcb) vid6_indi_pane_t1_ParamLimits

0xdab9,	// (0x0002bfcb) vid6_indi_pane_t1

0xdacf,	// (0x0002bfe1) vid6_indi_pane_t2_ParamLimits

0xdacf,	// (0x0002bfe1) vid6_indi_pane_t2

0xdaf7,	// (0x0002c009) vid6_indi_pane_t3_ParamLimits

0xdaf7,	// (0x0002c009) vid6_indi_pane_t3

0xdb1f,	// (0x0002c031) vid6_indi_pane_t4_ParamLimits

0xdb1f,	// (0x0002c031) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0002e097) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0002e097) vid6_indi_pane_t

0xdb43,	// (0x0002c055) wait_bar_pane_cp08

0x7a49,	// (0x00025f5b) main_cset_text2_pane_t1_ParamLimits

0x7a49,	// (0x00025f5b) main_cset_text2_pane_t1

0x7960,	// (0x00025e72) listscroll_gen_pane_cp06_t1_ParamLimits

0x7960,	// (0x00025e72) listscroll_gen_pane_cp06_t1

0x0e1d,	// (0x0001f32f) main_cam6_set_pane

0x1e02,	// (0x00020314) bg_tb_trans_pane_cp06_ParamLimits

0x1e18,	// (0x0002032a) cam4_indicators_pane_g1_ParamLimits

0x1e29,	// (0x0002033b) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0002de05) cam4_indicators_pane_g_ParamLimits

0x1e41,	// (0x00020353) cam4_indicators_pane_t1_ParamLimits

0x1273,	// (0x0001f785) bg_tb_trans_pane_cp07_ParamLimits

0x1ef2,	// (0x00020404) vid4_indicators_pane_g1_ParamLimits

0x1f06,	// (0x00020418) vid4_indicators_pane_g2_ParamLimits

0x1f1a,	// (0x0002042c) vid4_indicators_pane_g3_ParamLimits

0x1f2b,	// (0x0002043d) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0002de17) vid4_indicators_pane_g_ParamLimits

0x1f47,	// (0x00020459) vid4_indicators_pane_t1_ParamLimits

0x23e4,	// (0x000208f6) vid4_progress_pane_g1_ParamLimits

0x23f4,	// (0x00020906) vid4_progress_pane_g2_ParamLimits

0x2404,	// (0x00020916) vid4_progress_pane_g3_ParamLimits

0x2416,	// (0x00020928) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0002dfc8) vid4_progress_pane_g_ParamLimits

0x242e,	// (0x00020940) vid4_progress_pane_t1_ParamLimits

0x2444,	// (0x00020956) vid4_progress_pane_t2_ParamLimits

0x2459,	// (0x0002096b) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0002dfd3) vid4_progress_pane_t_ParamLimits

0x246f,	// (0x00020981) wait_bar_pane_cp07_ParamLimits

0x7a80,	// (0x00025f92) main_cam6_set_pane_g2_ParamLimits

0x7a80,	// (0x00025f92) main_cam6_set_pane_g2

0x7a8c,	// (0x00025f9e) main_cset6_listscroll_pane_ParamLimits

0x7a8c,	// (0x00025f9e) main_cset6_listscroll_pane

0x7ab7,	// (0x00025fc9) main_cset6_slider_pane_ParamLimits

0x7ab7,	// (0x00025fc9) main_cset6_slider_pane

0x7ac3,	// (0x00025fd5) main_cset6_text2_pane_ParamLimits

0x7ac3,	// (0x00025fd5) main_cset6_text2_pane

0xdb52,	// (0x0002c064) main_cset6_text_pane

0xdb5a,	// (0x0002c06c) main_cset_list_pane_copy1_ParamLimits

0xdb5a,	// (0x0002c06c) main_cset_list_pane_copy1

0xdb6a,	// (0x0002c07c) scroll_pane_cp028_copy1

0x7ad6,	// (0x00025fe8) cset_list_set_pane_copy1

0x7aec,	// (0x00025ffe) aid_position_infowindow_above_copy1

0x7af4,	// (0x00026006) aid_position_infowindow_below_copy1

0xdb73,	// (0x0002c085) cset_list_set_pane_g1_copy1

0xdb7b,	// (0x0002c08d) cset_list_set_pane_g3_copy1_ParamLimits

0xdb7b,	// (0x0002c08d) cset_list_set_pane_g3_copy1

0xdb8a,	// (0x0002c09c) cset_list_set_pane_t1_copy1_ParamLimits

0xdb8a,	// (0x0002c09c) cset_list_set_pane_t1_copy1

0xa614,	// (0x00028b26) list_highlight_pane_cp021_copy1_ParamLimits

0xa614,	// (0x00028b26) list_highlight_pane_cp021_copy1

0xdb9f,	// (0x0002c0b1) cset6_slider_pane_ParamLimits

0xdb9f,	// (0x0002c0b1) cset6_slider_pane

0xdbcb,	// (0x0002c0dd) main_cset6_slider_pane_g1_ParamLimits

0xdbcb,	// (0x0002c0dd) main_cset6_slider_pane_g1

0x7afc,	// (0x0002600e) main_cset6_slider_pane_g2_ParamLimits

0x7afc,	// (0x0002600e) main_cset6_slider_pane_g2

0xdbf3,	// (0x0002c105) main_cset6_slider_pane_g3_ParamLimits

0xdbf3,	// (0x0002c105) main_cset6_slider_pane_g3

0x7b24,	// (0x00026036) main_cset6_slider_pane_g4_ParamLimits

0x7b24,	// (0x00026036) main_cset6_slider_pane_g4

0x7b30,	// (0x00026042) main_cset6_slider_pane_g5_ParamLimits

0x7b30,	// (0x00026042) main_cset6_slider_pane_g5

0xd362,	// (0x0002b874) main_cset6_slider_pane_g7_ParamLimits

0xd362,	// (0x0002b874) main_cset6_slider_pane_g7

0xd36e,	// (0x0002b880) main_cset6_slider_pane_g8_ParamLimits

0xd36e,	// (0x0002b880) main_cset6_slider_pane_g8

0x7b3e,	// (0x00026050) main_cset6_slider_pane_g9_ParamLimits

0x7b3e,	// (0x00026050) main_cset6_slider_pane_g9

0x7b4a,	// (0x0002605c) main_cset6_slider_pane_g10_ParamLimits

0x7b4a,	// (0x0002605c) main_cset6_slider_pane_g10

0x7b56,	// (0x00026068) main_cset6_slider_pane_g11_ParamLimits

0x7b56,	// (0x00026068) main_cset6_slider_pane_g11

0x7b62,	// (0x00026074) main_cset6_slider_pane_g12_ParamLimits

0x7b62,	// (0x00026074) main_cset6_slider_pane_g12

0xd47f,	// (0x0002b991) main_cset6_slider_pane_g13_ParamLimits

0xd47f,	// (0x0002b991) main_cset6_slider_pane_g13

0xd48b,	// (0x0002b99d) main_cset6_slider_pane_g14_ParamLimits

0xd48b,	// (0x0002b99d) main_cset6_slider_pane_g14

0x7b6e,	// (0x00026080) main_cset6_slider_pane_g15_ParamLimits

0x7b6e,	// (0x00026080) main_cset6_slider_pane_g15

0x7b86,	// (0x00026098) main_cset6_slider_pane_g16_ParamLimits

0x7b86,	// (0x00026098) main_cset6_slider_pane_g16

0x7b94,	// (0x000260a6) main_cset6_slider_pane_g17_ParamLimits

0x7b94,	// (0x000260a6) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0002e0a0) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0002e0a0) main_cset6_slider_pane_g

0xdc0b,	// (0x0002c11d) main_cset6_slider_pane_t1_ParamLimits

0xdc0b,	// (0x0002c11d) main_cset6_slider_pane_t1

0x7bae,	// (0x000260c0) main_cset6_slider_pane_t2_ParamLimits

0x7bae,	// (0x000260c0) main_cset6_slider_pane_t2

0x7bd9,	// (0x000260eb) main_cset6_slider_pane_t3_ParamLimits

0x7bd9,	// (0x000260eb) main_cset6_slider_pane_t3

0x7c04,	// (0x00026116) main_cset6_slider_pane_t4_ParamLimits

0x7c04,	// (0x00026116) main_cset6_slider_pane_t4

0x7c2f,	// (0x00026141) main_cset6_slider_pane_t5_ParamLimits

0x7c2f,	// (0x00026141) main_cset6_slider_pane_t5

0xdc4c,	// (0x0002c15e) main_cset6_slider_pane_t7_ParamLimits

0xdc4c,	// (0x0002c15e) main_cset6_slider_pane_t7

0x7c5c,	// (0x0002616e) main_cset6_slider_pane_t8_ParamLimits

0x7c5c,	// (0x0002616e) main_cset6_slider_pane_t8

0x7c80,	// (0x00026192) main_cset6_slider_pane_t9_ParamLimits

0x7c80,	// (0x00026192) main_cset6_slider_pane_t9

0x7ca4,	// (0x000261b6) main_cset6_slider_pane_t10_ParamLimits

0x7ca4,	// (0x000261b6) main_cset6_slider_pane_t10

0x7cc8,	// (0x000261da) main_cset6_slider_pane_t11_ParamLimits

0x7cc8,	// (0x000261da) main_cset6_slider_pane_t11

0xdc82,	// (0x0002c194) main_cset6_slider_pane_t14_ParamLimits

0xdc82,	// (0x0002c194) main_cset6_slider_pane_t14

0xdcbb,	// (0x0002c1cd) main_cset6_slider_pane_t15_ParamLimits

0xdcbb,	// (0x0002c1cd) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0002e0c5) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0002e0c5) main_cset6_slider_pane_t

0xd02b,	// (0x0002b53d) cset_slider_pane_g1_copy1

0xd497,	// (0x0002b9a9) cset_slider_pane_g2_copy1

0xd4a0,	// (0x0002b9b2) cset_slider_pane_g3_copy1

0x9c11,	// (0x00028123) bg_popup_sub_pane_cp011_copy1

0xdcf4,	// (0x0002c206) main_cset_text_pane_g1_copy1

0xd4f3,	// (0x0002ba05) main_cset_text_pane_t1_copy1

0xd501,	// (0x0002ba13) main_cset_text_pane_t2_copy1

0xd50f,	// (0x0002ba21) main_cset_text_pane_t3_copy1

0xd51d,	// (0x0002ba2f) main_cset_text_pane_t4_copy1

0xd52b,	// (0x0002ba3d) main_cset_text_pane_t5_copy1

0xdcfc,	// (0x0002c20e) main_cset_text_pane_t6_copy1

0xdd0a,	// (0x0002c21c) main_cset_text_pane_t7_copy1

0x7dc4,	// (0x000262d6) main_cset_text2_pane_t1_copy1

0x1273,	// (0x0001f785) main_ncimui_pane

0x12d2,	// (0x0001f7e4) popup_query_ncimui_window_ParamLimits

0x12d2,	// (0x0001f7e4) popup_query_ncimui_window

0xcad6,	// (0x0002afe8) field_cale_ev2_pane_g4_ParamLimits

0xcad6,	// (0x0002afe8) field_cale_ev2_pane_g4

0x67e1,	// (0x00024cf3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x67e1,	// (0x00024cf3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0002dd9f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0002dd9f) cell_video_dialer_keypad_pane_g

0x67f9,	// (0x00024d0b) cell_video_dialer_keypad_pane_t1

0x9c11,	// (0x00028123) bg_popup_window_pane_cp012

0xac48,	// (0x0002915a) heading_pane_cp06

0xdd36,	// (0x0002c248) ncim_query_content_pane

0x9c11,	// (0x00028123) bg_popup_heading_pane_cp01

0xdd3e,	// (0x0002c250) ncim_heading_pane_t1

0xdd4c,	// (0x0002c25e) ncim_indicator_popup_pane

0xdd5e,	// (0x0002c270) ncim_query_button_pane

0xdd72,	// (0x0002c284) ncim_query_content_pane_t1

0xdd84,	// (0x0002c296) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0002e109) ncim_query_content_pane_t

0xddbe,	// (0x0002c2d0) ncim_query_list_pane

0xddd0,	// (0x0002c2e2) ncim_query_popup_pane

0xdd4c,	// (0x0002c25e) ncim_indicator_popup_pane_ParamLimits

0x7f18,	// (0x0002642a) ncim_query_content_pane_g1_ParamLimits

0x7f18,	// (0x0002642a) ncim_query_content_pane_g1

0xdd72,	// (0x0002c284) ncim_query_content_pane_t1_ParamLimits

0xdd84,	// (0x0002c296) ncim_query_content_pane_t2_ParamLimits

0x7f24,	// (0x00026436) ncim_query_content_pane_t3_ParamLimits

0x7f24,	// (0x00026436) ncim_query_content_pane_t3

0x7f41,	// (0x00026453) ncim_query_content_pane_t4_ParamLimits

0x7f41,	// (0x00026453) ncim_query_content_pane_t4

0x7f5e,	// (0x00026470) ncim_query_content_pane_t5_ParamLimits

0x7f5e,	// (0x00026470) ncim_query_content_pane_t5

0xdd96,	// (0x0002c2a8) ncim_query_content_pane_t6_ParamLimits

0xdd96,	// (0x0002c2a8) ncim_query_content_pane_t6

0xfbf7,	// (0x0002e109) ncim_query_content_pane_t_ParamLimits

0xddbe,	// (0x0002c2d0) ncim_query_list_pane_ParamLimits

0xddd0,	// (0x0002c2e2) ncim_query_popup_pane_ParamLimits

0xdde4,	// (0x0002c2f6) wait_bar_pane_cp04

0x9c11,	// (0x00028123) input_focus_pane_cp011

0xddec,	// (0x0002c2fe) ncim_query_popup_pane_t1

0xddfa,	// (0x0002c30c) ncim_list_query_list_pane_ParamLimits

0xddfa,	// (0x0002c30c) ncim_list_query_list_pane

0x9c11,	// (0x00028123) bg_button_pane_cp027

0xde07,	// (0x0002c319) ncim_query_button_pane_g1

0x9c11,	// (0x00028123) list_highlight_pane_cp012

0xde11,	// (0x0002c323) ncim_list_query_list_pane_g1

0xde19,	// (0x0002c32b) ncim_list_query_list_pane_t1

0x1e35,	// (0x00020347) cam4_indicators_pane_g3_ParamLimits

0x1e35,	// (0x00020347) cam4_indicators_pane_g3

0x1f37,	// (0x00020449) vid4_indicators_pane_g5_ParamLimits

0x1f37,	// (0x00020449) vid4_indicators_pane_g5

0x2422,	// (0x00020934) vid4_progress_pane_g5_ParamLimits

0x2422,	// (0x00020934) vid4_progress_pane_g5

0x7e04,	// (0x00026316) main_ncimui_pane_g1

0x7e6c,	// (0x0002637e) ncimui_group_query_pane_ParamLimits

0x7e6c,	// (0x0002637e) ncimui_group_query_pane

0x7eb4,	// (0x000263c6) ncimui_list_pane_ParamLimits

0x7eb4,	// (0x000263c6) ncimui_list_pane

0x7edb,	// (0x000263ed) ncimui_text_pane_ParamLimits

0x7edb,	// (0x000263ed) ncimui_text_pane

0x7f7b,	// (0x0002648d) ncimui_text_pane_t1_ParamLimits

0x7f7b,	// (0x0002648d) ncimui_text_pane_t1

0xde27,	// (0x0002c339) ncimui_list_single_graphic_pane_ParamLimits

0xde27,	// (0x0002c339) ncimui_list_single_graphic_pane

0x7f9a,	// (0x000264ac) ncimui_query_pane_ParamLimits

0x7f9a,	// (0x000264ac) ncimui_query_pane

0x9c11,	// (0x00028123) list_highlight_pane_cp013

0xde37,	// (0x0002c349) ncim_list_query_list_pane_t1_copy1

0xde45,	// (0x0002c357) ncim_list_single_graphic_pane_g1

0x7fad,	// (0x000264bf) ncim_query_button_pane_cp01

0x7fb9,	// (0x000264cb) ncim_query_entry_pane_ParamLimits

0x7fb9,	// (0x000264cb) ncim_query_entry_pane

0x7fcc,	// (0x000264de) ncimui_query_pane_g1

0x7fd8,	// (0x000264ea) ncimui_query_pane_t1_ParamLimits

0x7fd8,	// (0x000264ea) ncimui_query_pane_t1

0xa614,	// (0x00028b26) input_focus_pane_cp012

0xde4d,	// (0x0002c35f) ncim_query_entry_pane_t1

0xa35a,	// (0x0002886c) main_im_pane_ParamLimits

0x1273,	// (0x0001f785) main_mobtv_pane_ParamLimits

0x1273,	// (0x0001f785) main_mobtv_pane

0x7ba2,	// (0x000260b4) main_cset6_slider_pane_g18_ParamLimits

0x7ba2,	// (0x000260b4) main_cset6_slider_pane_g18

0xdbff,	// (0x0002c111) main_cset6_slider_pane_g19_ParamLimits

0xdbff,	// (0x0002c111) main_cset6_slider_pane_g19

0xd1f6,	// (0x0002b708) bg_main_mobtv_pane_ParamLimits

0xd1f6,	// (0x0002b708) bg_main_mobtv_pane

0x7ff1,	// (0x00026503) main_mobtv_info_pane

0x7ffc,	// (0x0002650e) main_mobtv_loading_pane_ParamLimits

0x7ffc,	// (0x0002650e) main_mobtv_loading_pane

0xde5f,	// (0x0002c371) main_mobtv_pg_channel_list_pane

0xde69,	// (0x0002c37b) main_mobtv_pg_hdr_pane

0x8009,	// (0x0002651b) main_mobtv_programe_curr_pane_ParamLimits

0x8009,	// (0x0002651b) main_mobtv_programe_curr_pane

0x8016,	// (0x00026528) main_mobtv_programe_next_pane_ParamLimits

0x8016,	// (0x00026528) main_mobtv_programe_next_pane

0xde72,	// (0x0002c384) popup_mobtv_noti_window

0xc7f0,	// (0x0002ad02) main_tv_pg_hdr_pane_g1

0xde7a,	// (0x0002c38c) main_tv_pg_hdr_pane_g2

0xde82,	// (0x0002c394) main_tv_pg_hdr_pane_g3

0xde8a,	// (0x0002c39c) main_tv_pg_hdr_pane_g4

0xde92,	// (0x0002c3a4) main_tv_pg_hdr_pane_g5

0xde9c,	// (0x0002c3ae) main_tv_pg_hdr_pane_g6

0xdea6,	// (0x0002c3b8) main_tv_pg_hdr_pane_g7

0xdeb0,	// (0x0002c3c2) main_tv_pg_hdr_pane_g8

0xdeba,	// (0x0002c3cc) main_tv_pg_hdr_pane_g9

0xdec4,	// (0x0002c3d6) main_tv_pg_hdr_pane_g10

0xdece,	// (0x0002c3e0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0002e116) main_tv_pg_hdr_pane_g

0xded8,	// (0x0002c3ea) main_tv_pg_hdr_pane_t1

0xdee6,	// (0x0002c3f8) main_tv_pg_hdr_pane_t2

0xdef4,	// (0x0002c406) main_tv_pg_hdr_pane_t3

0xdf04,	// (0x0002c416) main_tv_pg_hdr_pane_t4

0xdf14,	// (0x0002c426) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0002e12d) main_tv_pg_hdr_pane_t

0xdf24,	// (0x0002c436) single_mobtv_pg_channel_pane_ParamLimits

0xdf24,	// (0x0002c436) single_mobtv_pg_channel_pane

0xdf36,	// (0x0002c448) single_mobtv_pg_channel_table_pane

0xa8be,	// (0x00028dd0) single_mobtv_pg_channel_thumb_pane

0xdf3f,	// (0x0002c451) single_tv_pg_channel_pane_g1

0xdf48,	// (0x0002c45a) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0002e138) single_tv_pg_channel_pane_g

0xca35,	// (0x0002af47) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca35,	// (0x0002af47) bg_single_mobtv_pg_channel_thumb_pane

0xdf51,	// (0x0002c463) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf51,	// (0x0002c463) single_mobtv_pg_channel_thumb_pane_g1

0xdf5f,	// (0x0002c471) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf5f,	// (0x0002c471) single_mobtv_pg_channel_thumb_pane_g2

0xdf6b,	// (0x0002c47d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf6b,	// (0x0002c47d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0002e13d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0002e13d) single_mobtv_pg_channel_thumb_pane_g

0xdf77,	// (0x0002c489) single_mobtv_pg_channel_thumb_pane_t1

0xdf85,	// (0x0002c497) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0002e144) single_mobtv_pg_channel_thumb_pane_t

0xc7f0,	// (0x0002ad02) bg_single_mobtv_pg_channel_table_pane_g1

0xc7f0,	// (0x0002ad02) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0002dbe6) bg_single_mobtv_pg_channel_table_pane_g

0xdf93,	// (0x0002c4a5) single_mobtv_pg_channel_table_pane_t1

0xdfa1,	// (0x0002c4b3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0002e149) single_mobtv_pg_channel_table_pane_t

0x802b,	// (0x0002653d) main_mobtv_info_pane_g1_ParamLimits

0x802b,	// (0x0002653d) main_mobtv_info_pane_g1

0x8047,	// (0x00026559) main_mobtv_info_pane_t1_ParamLimits

0x8047,	// (0x00026559) main_mobtv_info_pane_t1

0x80bf,	// (0x000265d1) main_mobtv_info_pane_t2_ParamLimits

0x80bf,	// (0x000265d1) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0002e153) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0002e153) main_mobtv_info_pane_t

0x814e,	// (0x00026660) wait_bar_pane_cp05

0x8160,	// (0x00026672) main_mobtv_loading_pane_g1_ParamLimits

0x8160,	// (0x00026672) main_mobtv_loading_pane_g1

0x816e,	// (0x00026680) main_mobtv_loading_pane_g2_ParamLimits

0x816e,	// (0x00026680) main_mobtv_loading_pane_g2

0x817a,	// (0x0002668c) main_mobtv_loading_pane_g3_ParamLimits

0x817a,	// (0x0002668c) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0002e15a) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0002e15a) main_mobtv_loading_pane_g

0xdfaf,	// (0x0002c4c1) main_mobtv_loading_pane_t1_ParamLimits

0xdfaf,	// (0x0002c4c1) main_mobtv_loading_pane_t1

0xdfc7,	// (0x0002c4d9) main_mobtv_loading_pane_t2_ParamLimits

0xdfc7,	// (0x0002c4d9) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0002e161) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0002e161) main_mobtv_loading_pane_t

0x8188,	// (0x0002669a) wait_bar_pane_cp06_ParamLimits

0x8188,	// (0x0002669a) wait_bar_pane_cp06

0xdfeb,	// (0x0002c4fd) main_mobtv_programe_curr_pane_t1

0xdff9,	// (0x0002c50b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0002e166) main_mobtv_programe_curr_pane_t

0xe007,	// (0x0002c519) main_mobtv_programe_next_pane_t1

0xe015,	// (0x0002c527) main_mobtv_programe_next_pane_t2

0xe023,	// (0x0002c535) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0002e16b) main_mobtv_programe_next_pane_t

0x9c11,	// (0x00028123) bg_popup_mobtv_noti_window_pane

0xe031,	// (0x0002c543) popup_mobtv_noti_window_g1

0xe039,	// (0x0002c54b) popup_mobtv_noti_window_t1

0xe047,	// (0x0002c559) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0002e172) popup_mobtv_noti_window_t

0xc7f0,	// (0x0002ad02) bg_popup_mobtv_noti_window_pane_g1

0x0e1d,	// (0x0001f32f) sc_clock_pane

0x0e1d,	// (0x0001f32f) main_fs_bigclock_pane

0x77db,	// (0x00025ced) blid2_tripm_pane_t4_ParamLimits

0x77db,	// (0x00025ced) blid2_tripm_pane_t4

0x8194,	// (0x000266a6) sc_clock_pane_g1_ParamLimits

0x8194,	// (0x000266a6) sc_clock_pane_g1

0x81a2,	// (0x000266b4) sc_clock_pane_t1_ParamLimits

0x81a2,	// (0x000266b4) sc_clock_pane_t1

0x81b5,	// (0x000266c7) sc_clock_pane_t2_ParamLimits

0x81b5,	// (0x000266c7) sc_clock_pane_t2

0x81c7,	// (0x000266d9) sc_clock_pane_t3_ParamLimits

0x81c7,	// (0x000266d9) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0002e177) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0002e177) sc_clock_pane_t

0x9120,	// (0x00027632) main_fs_bigclock_indicator_pane_ParamLimits

0x9120,	// (0x00027632) main_fs_bigclock_indicator_pane

0x824a,	// (0x0002675c) main_fs_bigclock_pane_g1_ParamLimits

0x824a,	// (0x0002675c) main_fs_bigclock_pane_g1

0x912c,	// (0x0002763e) main_fs_bigclock_pane_t1_ParamLimits

0x912c,	// (0x0002763e) main_fs_bigclock_pane_t1

0x913e,	// (0x00027650) main_fs_bigclock_pane_t2_ParamLimits

0x913e,	// (0x00027650) main_fs_bigclock_pane_t2

0x9152,	// (0x00027664) main_fs_bigclock_pane_t3_ParamLimits

0x9152,	// (0x00027664) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0002e380) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002e380) main_fs_bigclock_pane_t

0xec3d,	// (0x0002d14f) main_fs_bigclock_indicator_pane_g1

0xdd66,	// (0x0002c278) ncim_query_content_pane_g2_ParamLimits

0xdd66,	// (0x0002c278) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0002e104) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0002e104) ncim_query_content_pane_g

0x81db,	// (0x000266ed) sc_clock_pane_t4_ParamLimits

0x81db,	// (0x000266ed) sc_clock_pane_t4

0x1273,	// (0x0001f785) main_radioblah_pane

0x1cf1,	// (0x00020203) cell_call4_button_pane_t1_copy1_ParamLimits

0x1cf1,	// (0x00020203) cell_call4_button_pane_t1_copy1

0x7e1e,	// (0x00026330) main_ncimui_pane_t1_ParamLimits

0x7e1e,	// (0x00026330) main_ncimui_pane_t1

0x7e38,	// (0x0002634a) main_ncimui_pane_t2_ParamLimits

0x7e38,	// (0x0002634a) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0002e0fd) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0002e0fd) main_ncimui_pane_t

0xe18d,	// (0x0002c69f) main_radioblah_anim_pane_ParamLimits

0xe18d,	// (0x0002c69f) main_radioblah_anim_pane

0xe19e,	// (0x0002c6b0) main_radioblah_info_pane_ParamLimits

0xe19e,	// (0x0002c6b0) main_radioblah_info_pane

0xe1b2,	// (0x0002c6c4) main_radioblah_pane_t1_ParamLimits

0xe1b2,	// (0x0002c6c4) main_radioblah_pane_t1

0xe1ce,	// (0x0002c6e0) main_radioblah_pane_t2_ParamLimits

0xe1ce,	// (0x0002c6e0) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0002e198) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0002e198) main_radioblah_pane_t

0x82a0,	// (0x000267b2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82a0,	// (0x000267b2) main_radioblah_rocker_ctrl_pane

0xe216,	// (0x0002c728) main_radioblah_info_pane_t1_ParamLimits

0xe216,	// (0x0002c728) main_radioblah_info_pane_t1

0x82e5,	// (0x000267f7) main_radioblah_info_pane_t2_ParamLimits

0x82e5,	// (0x000267f7) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0002e1a1) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0002e1a1) main_radioblah_info_pane_t

0xc7f0,	// (0x0002ad02) main_radioblah_rocker_ctrl_pane_g1

0x8395,	// (0x000268a7) main_radioblah_rocker_ctrl_pane_g2

0x839d,	// (0x000268af) main_radioblah_rocker_ctrl_pane_g3

0x83a5,	// (0x000268b7) main_radioblah_rocker_ctrl_pane_g4

0x83ad,	// (0x000268bf) main_radioblah_rocker_ctrl_pane_g5

0x83b5,	// (0x000268c7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0002e1aa) main_radioblah_rocker_ctrl_pane_g

0x7dc4,	// (0x000262d6) main_cset_text2_pane_t1_copy1_ParamLimits

0x1d7c,	// (0x0002028e) cam4_image_uncrop_qvga_pane

0x1ea7,	// (0x000203b9) vid4_image_uncrop_qcif_pane

0x24c1,	// (0x000209d3) cam6_image_uncrop_qvga_pane_ParamLimits

0x24c1,	// (0x000209d3) cam6_image_uncrop_qvga_pane

0xda35,	// (0x0002bf47) vid6_image_uncrop_qcif_pane_ParamLimits

0xda35,	// (0x0002bf47) vid6_image_uncrop_qcif_pane

0x9c11,	// (0x00028123) bg_popup_preview_window_pane_cp03

0xdd18,	// (0x0002c22a) list_cset_text2_pane

0xdd20,	// (0x0002c232) main_cset6_text2_pane_g1

0xdd28,	// (0x0002c23a) main_cset6_text2_pane_t1

0x83bd,	// (0x000268cf) list_cset_text2_pane_t1_ParamLimits

0x83bd,	// (0x000268cf) list_cset_text2_pane_t1

0x1273,	// (0x0001f785) main_radioblah_pane_ParamLimits

0x813a,	// (0x0002664c) main_mobtv_info_pane_t3_ParamLimits

0x813a,	// (0x0002664c) main_mobtv_info_pane_t3

0x828e,	// (0x000267a0) main_radioblah_pane_g1

0x82b9,	// (0x000267cb) main_radioblah_info_pane_g1

0x833a,	// (0x0002684c) main_radioblah_info_pane_t3_ParamLimits

0x833a,	// (0x0002684c) main_radioblah_info_pane_t3

0x422c,	// (0x0002273e) highlight_cell_cale_month_pane_ParamLimits

0x422c,	// (0x0002273e) highlight_cell_cale_month_pane

0x0e1d,	// (0x0001f32f) main_phob_fisheye_pane

0xcb85,	// (0x0002b097) scroll_pane_cp0031_ParamLimits

0xcb85,	// (0x0002b097) scroll_pane_cp0031

0xdb43,	// (0x0002c055) wait_bar_pane_cp08_ParamLimits

0x7ad6,	// (0x00025fe8) cset_list_set_pane_copy1_ParamLimits

0xe250,	// (0x0002c762) highlight_cell_cale_month_pane_g1

0x83de,	// (0x000268f0) highlight_cell_cale_month_pane_t1

0xd7af,	// (0x0002bcc1) list_gen_pane_cp01

0xd34d,	// (0x0002b85f) scroll_pane_01

0x83ec,	// (0x000268fe) list_single_double_fisheye_pane

0x83f5,	// (0x00026907) list_double_fisheye_pane_g1_ParamLimits

0x83f5,	// (0x00026907) list_double_fisheye_pane_g1

0x8401,	// (0x00026913) list_double_fisheye_pane_g2_ParamLimits

0x8401,	// (0x00026913) list_double_fisheye_pane_g2

0x8415,	// (0x00026927) list_double_fisheye_pane_g3_ParamLimits

0x8415,	// (0x00026927) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0002e1b7) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0002e1b7) list_double_fisheye_pane_g

0x843e,	// (0x00026950) list_double_fisheye_pane_t1_ParamLimits

0x843e,	// (0x00026950) list_double_fisheye_pane_t1

0x8459,	// (0x0002696b) list_double_fisheye_pane_t2_ParamLimits

0x8459,	// (0x0002696b) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0002e1c2) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0002e1c2) list_double_fisheye_pane_t

0x0e1d,	// (0x0001f32f) main_call5_pane

0x8201,	// (0x00026713) sc_swipe_pane_ParamLimits

0x8201,	// (0x00026713) sc_swipe_pane

0x8487,	// (0x00026999) call5_image_pane_ParamLimits

0x8487,	// (0x00026999) call5_image_pane

0x8497,	// (0x000269a9) call5_swipe_1_pane_ParamLimits

0x8497,	// (0x000269a9) call5_swipe_1_pane

0x84a3,	// (0x000269b5) call5_swipe_2_pane_ParamLimits

0x84a3,	// (0x000269b5) call5_swipe_2_pane

0x84bd,	// (0x000269cf) popup_call5_audio_first_window_ParamLimits

0x84bd,	// (0x000269cf) popup_call5_audio_first_window

0xca35,	// (0x0002af47) call5_swipe_1_pane_g1_ParamLimits

0xca35,	// (0x0002af47) call5_swipe_1_pane_g1

0xe258,	// (0x0002c76a) call5_swipe_1_pane_g2_ParamLimits

0xe258,	// (0x0002c76a) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0002e1c7) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0002e1c7) call5_swipe_1_pane_g

0xe264,	// (0x0002c776) call5_swipe_1_pane_t1_ParamLimits

0xe264,	// (0x0002c776) call5_swipe_1_pane_t1

0xca35,	// (0x0002af47) call5_swipe_2_pane_g1_ParamLimits

0xca35,	// (0x0002af47) call5_swipe_2_pane_g1

0xe279,	// (0x0002c78b) call5_swipe_2_pane_g2_ParamLimits

0xe279,	// (0x0002c78b) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0002e1cc) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0002e1cc) call5_swipe_2_pane_g

0xe285,	// (0x0002c797) call5_swipe_2_pane_t1_ParamLimits

0xe285,	// (0x0002c797) call5_swipe_2_pane_t1

0xe29a,	// (0x0002c7ac) sc_swipe_pane_g1_ParamLimits

0xe29a,	// (0x0002c7ac) sc_swipe_pane_g1

0xe2a7,	// (0x0002c7b9) sc_swipe_pane_g2_ParamLimits

0xe2a7,	// (0x0002c7b9) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0002e1d1) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0002e1d1) sc_swipe_pane_g

0xe2b3,	// (0x0002c7c5) sc_swipe_pane_t1_ParamLimits

0xe2b3,	// (0x0002c7c5) sc_swipe_pane_t1

0x0e1d,	// (0x0001f32f) main_cmail_launcher_pane

0x84cb,	// (0x000269dd) aid_size_cell_cmail_l_ParamLimits

0x84cb,	// (0x000269dd) aid_size_cell_cmail_l

0x84d9,	// (0x000269eb) grid_cmail_l_pane_ParamLimits

0x84d9,	// (0x000269eb) grid_cmail_l_pane

0x84e9,	// (0x000269fb) cell_cmail_l_pane_ParamLimits

0x84e9,	// (0x000269fb) cell_cmail_l_pane

0xe2c8,	// (0x0002c7da) cell_cmail_l_pane_g1_ParamLimits

0xe2c8,	// (0x0002c7da) cell_cmail_l_pane_g1

0xe2d4,	// (0x0002c7e6) cell_cmail_l_pane_t1_ParamLimits

0xe2d4,	// (0x0002c7e6) cell_cmail_l_pane_t1

0xe2ea,	// (0x0002c7fc) cell_cmail_l_pane_t2_ParamLimits

0xe2ea,	// (0x0002c7fc) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0002e1d6) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0002e1d6) cell_cmail_l_pane_t

0xa614,	// (0x00028b26) grid_highlight_pane_cp018_ParamLimits

0xa614,	// (0x00028b26) grid_highlight_pane_cp018

0x0c7f,	// (0x0001f191) main2_pane_ParamLimits

0x0c7f,	// (0x0001f191) main2_pane

0xa3f3,	// (0x00028905) popup_sp_fs_action_menu_bg_pane_g1

0xa3fb,	// (0x0002890d) popup_sp_fs_action_menu_bg_pane_g2

0xa403,	// (0x00028915) popup_sp_fs_action_menu_bg_pane_g3

0xa40b,	// (0x0002891d) popup_sp_fs_action_menu_bg_pane_g4

0xa413,	// (0x00028925) popup_sp_fs_action_menu_bg_pane_g5

0xa41b,	// (0x0002892d) popup_sp_fs_action_menu_bg_pane_g6

0xa423,	// (0x00028935) popup_sp_fs_action_menu_bg_pane_g7

0xa42b,	// (0x0002893d) popup_sp_fs_action_menu_bg_pane_g8

0xa433,	// (0x00028945) popup_sp_fs_action_menu_bg_pane_g9

0xa43b,	// (0x0002894d) popup_sp_fs_action_menu_bg_pane_g10

0xa43b,	// (0x0002894d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0002d681) popup_sp_fs_action_menu_bg_pane_g

0x3013,	// (0x00021525) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t3_g3_g1

0x301f,	// (0x00021531) list_medium_line_x2_t3_g3_g2_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x2_t3_g3_g2

0x302b,	// (0x0002153d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0002d72f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0002d72f) list_medium_line_x2_t3_g3_g

0x3037,	// (0x00021549) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3037,	// (0x00021549) list_medium_line_x2_t3_g3_t1

0x304c,	// (0x0002155e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x304c,	// (0x0002155e) list_medium_line_x2_t3_g3_t2

0x305e,	// (0x00021570) list_medium_line_x2_t3_g3_t3_ParamLimits

0x305e,	// (0x00021570) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0002d736) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0002d736) list_medium_line_x2_t3_g3_t

0x3013,	// (0x00021525) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t3_g2_g1

0x302b,	// (0x0002153d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0002d73d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0002d73d) list_medium_line_x2_t3_g2_g

0x3073,	// (0x00021585) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3073,	// (0x00021585) list_medium_line_x2_t3_g2_t1

0x3089,	// (0x0002159b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3089,	// (0x0002159b) list_medium_line_x2_t3_g2_t2

0x309b,	// (0x000215ad) list_medium_line_x2_t3_g2_t3_ParamLimits

0x309b,	// (0x000215ad) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0002d742) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0002d742) list_medium_line_x2_t3_g2_t

0x3013,	// (0x00021525) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t4_g4_g1

0x30b9,	// (0x000215cb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x30b9,	// (0x000215cb) list_medium_line_x2_t4_g4_g2

0x301f,	// (0x00021531) list_medium_line_x2_t4_g4_g3_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x2_t4_g4_g3

0x30c5,	// (0x000215d7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x30c5,	// (0x000215d7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0002d749) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0002d749) list_medium_line_x2_t4_g4_g

0x30d1,	// (0x000215e3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x30d1,	// (0x000215e3) list_medium_line_x2_t4_g4_t1

0x30eb,	// (0x000215fd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x30eb,	// (0x000215fd) list_medium_line_x2_t4_g4_t2

0x3101,	// (0x00021613) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3101,	// (0x00021613) list_medium_line_x2_t4_g4_t3

0x3116,	// (0x00021628) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3116,	// (0x00021628) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0002d752) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0002d752) list_medium_line_x2_t4_g4_t

0x3013,	// (0x00021525) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t2_g4_g1

0x30b9,	// (0x000215cb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x30b9,	// (0x000215cb) list_medium_line_x2_t2_g4_g2

0x301f,	// (0x00021531) list_medium_line_x2_t2_g4_g3_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x2_t2_g4_g3

0x302b,	// (0x0002153d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0002d7b9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0002d7b9) list_medium_line_x2_t2_g4_g

0x4252,	// (0x00022764) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4252,	// (0x00022764) list_medium_line_x2_t2_g4_t1

0x305e,	// (0x00021570) list_medium_line_x2_t2_g4_t2_ParamLimits

0x305e,	// (0x00021570) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0002d7c2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0002d7c2) list_medium_line_x2_t2_g4_t

0x3013,	// (0x00021525) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t2_g3_g1

0x301f,	// (0x00021531) list_medium_line_x2_t2_g3_g2_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x2_t2_g3_g2

0x302b,	// (0x0002153d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0002d72f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0002d72f) list_medium_line_x2_t2_g3_g

0x4267,	// (0x00022779) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4267,	// (0x00022779) list_medium_line_x2_t2_g3_t1

0x305e,	// (0x00021570) list_medium_line_x2_t2_g3_t2_ParamLimits

0x305e,	// (0x00021570) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0002d7c7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0002d7c7) list_medium_line_x2_t2_g3_t

0x43f5,	// (0x00022907) main_sp_fs_list_pane_ParamLimits

0x43f5,	// (0x00022907) main_sp_fs_list_pane

0x4401,	// (0x00022913) sp_fs_scroll_pane_ParamLimits

0x4401,	// (0x00022913) sp_fs_scroll_pane

0x440d,	// (0x0002291f) list_medium_line_x2_t3_t1

0x441d,	// (0x0002292f) list_medium_line_x2_t3_t2

0x442b,	// (0x0002293d) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0002d812) list_medium_line_x2_t3_t

0x4439,	// (0x0002294b) list_medium_line_x3_t4_t1

0x4449,	// (0x0002295b) list_medium_line_x3_t4_t2

0x4457,	// (0x00022969) list_medium_line_x3_t4_t3

0x442b,	// (0x0002293d) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0002d819) list_medium_line_x3_t4_t

0x4465,	// (0x00022977) list_medium_line_x4_t5_t1

0x4475,	// (0x00022987) list_medium_line_x4_t5_t2

0x4457,	// (0x00022969) list_medium_line_x4_t5_t3

0x4483,	// (0x00022995) list_medium_line_x4_t5_t4

0x442b,	// (0x0002293d) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0002d822) list_medium_line_x4_t5_t

0x3013,	// (0x00021525) list_medium_line_t4_g4_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_t4_g4_g1

0x30c5,	// (0x000215d7) list_medium_line_t4_g4_g2_ParamLimits

0x30c5,	// (0x000215d7) list_medium_line_t4_g4_g2

0x4491,	// (0x000229a3) list_medium_line_t4_g4_g3_ParamLimits

0x4491,	// (0x000229a3) list_medium_line_t4_g4_g3

0x302b,	// (0x0002153d) list_medium_line_t4_g4_g4_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0002d82d) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0002d82d) list_medium_line_t4_g4_g

0x449d,	// (0x000229af) list_medium_line_t4_g4_t1_ParamLimits

0x449d,	// (0x000229af) list_medium_line_t4_g4_t1

0x44b2,	// (0x000229c4) list_medium_line_t4_g4_t2_ParamLimits

0x44b2,	// (0x000229c4) list_medium_line_t4_g4_t2

0x44c8,	// (0x000229da) list_medium_line_t4_g4_t3_ParamLimits

0x44c8,	// (0x000229da) list_medium_line_t4_g4_t3

0x305e,	// (0x00021570) list_medium_line_t4_g4_t4_ParamLimits

0x305e,	// (0x00021570) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0002d836) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0002d836) list_medium_line_t4_g4_t

0x457a,	// (0x00022a8c) chi_dic_find_pane_g1

0x128f,	// (0x0001f7a1) main_tport_pane

0xd457,	// (0x0002b969) list_medium_line_plain_t1

0x7067,	// (0x00025579) list_medium_line_t2_g2_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_t2_g2_g1

0x7073,	// (0x00025585) list_medium_line_t2_g2_g2_ParamLimits

0x7073,	// (0x00025585) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0002df0e) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0002df0e) list_medium_line_t2_g2_g

0x707f,	// (0x00025591) list_medium_line_t2_g2_t1_ParamLimits

0x707f,	// (0x00025591) list_medium_line_t2_g2_t1

0x7099,	// (0x000255ab) list_medium_line_t2_g2_t2_ParamLimits

0x7099,	// (0x000255ab) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0002df13) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0002df13) list_medium_line_t2_g2_t

0xd7b8,	// (0x0002bcca) aid_sp_fs_list_icon_a_sm

0xd7c0,	// (0x0002bcd2) aid_sp_fs_list_icon_d

0xd7c8,	// (0x0002bcda) aid_sp_fs_text_primary

0xd7d1,	// (0x0002bce3) aid_sp_fs_text_secondary

0x761d,	// (0x00025b2f) list_medium_line

0x761d,	// (0x00025b2f) list_medium_line_g2

0x761d,	// (0x00025b2f) list_medium_line_g3

0x761d,	// (0x00025b2f) list_medium_line_plain

0x761d,	// (0x00025b2f) list_medium_line_plain_t2

0x761d,	// (0x00025b2f) list_medium_line_plain_t3

0x761d,	// (0x00025b2f) list_medium_line_right_icon

0x761d,	// (0x00025b2f) list_medium_line_right_iconx2

0x761d,	// (0x00025b2f) list_medium_line_t2

0x761d,	// (0x00025b2f) list_medium_line_t2_g2

0x761d,	// (0x00025b2f) list_medium_line_t2_g3

0x761d,	// (0x00025b2f) list_medium_line_t2_right_icon

0x761d,	// (0x00025b2f) list_medium_line_t2_right_iconx2

0x761d,	// (0x00025b2f) list_medium_line_t3

0x761d,	// (0x00025b2f) list_medium_line_t3_g2

0x761d,	// (0x00025b2f) list_medium_line_t3_g3

0x761d,	// (0x00025b2f) list_medium_line_t3_right_iconx2

0x7626,	// (0x00025b38) list_medium_line_t4_g4

0x762f,	// (0x00025b41) list_medium_line_x2

0x762f,	// (0x00025b41) list_medium_line_x2_t2_g2

0x762f,	// (0x00025b41) list_medium_line_x2_t2_g3

0x762f,	// (0x00025b41) list_medium_line_x2_t2_g4

0x762f,	// (0x00025b41) list_medium_line_x2_t3

0x762f,	// (0x00025b41) list_medium_line_x2_t3_g2

0x762f,	// (0x00025b41) list_medium_line_x2_t3_g3

0x762f,	// (0x00025b41) list_medium_line_x2_t3_g4

0x762f,	// (0x00025b41) list_medium_line_x2_t4_g2

0x762f,	// (0x00025b41) list_medium_line_x2_t4_g4

0x7638,	// (0x00025b4a) list_medium_line_x3

0x7638,	// (0x00025b4a) list_medium_line_x3_t4

0x7638,	// (0x00025b4a) list_medium_line_x3_t4_g4

0x7626,	// (0x00025b38) list_medium_line_x4_t4

0x7626,	// (0x00025b38) list_medium_line_x4_t4_g7

0x7626,	// (0x00025b38) list_medium_line_x4_t5

0x7641,	// (0x00025b53) list_single_fs_dyc_pane_ParamLimits

0x7641,	// (0x00025b53) list_single_fs_dyc_pane

0x3013,	// (0x00021525) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x4_t4_g7_g1

0x7cee,	// (0x00026200) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cee,	// (0x00026200) list_medium_line_x4_t4_g7_g2

0x7cfa,	// (0x0002620c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cfa,	// (0x0002620c) list_medium_line_x4_t4_g7_g3

0x7d09,	// (0x0002621b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d09,	// (0x0002621b) list_medium_line_x4_t4_g7_g4

0x7d15,	// (0x00026227) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d15,	// (0x00026227) list_medium_line_x4_t4_g7_g5

0x7d24,	// (0x00026236) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d24,	// (0x00026236) list_medium_line_x4_t4_g7_g6

0x7d33,	// (0x00026245) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d33,	// (0x00026245) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0002e0de) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0002e0de) list_medium_line_x4_t4_g7_g

0x7d3f,	// (0x00026251) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d3f,	// (0x00026251) list_medium_line_x4_t4_g7_t1

0x7d54,	// (0x00026266) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d54,	// (0x00026266) list_medium_line_x4_t4_g7_t2

0x7d69,	// (0x0002627b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d69,	// (0x0002627b) list_medium_line_x4_t4_g7_t3

0x7d7e,	// (0x00026290) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d7e,	// (0x00026290) list_medium_line_x4_t4_g7_t4

0x7d90,	// (0x000262a2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d90,	// (0x000262a2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0002e0ed) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0002e0ed) list_medium_line_x4_t4_g7_t

0x7da2,	// (0x000262b4) list_single_dyc_row_pane_ParamLimits

0x7da2,	// (0x000262b4) list_single_dyc_row_pane

0x847b,	// (0x0002698d) call5_gesture_pane_ParamLimits

0x847b,	// (0x0002698d) call5_gesture_pane

0x84af,	// (0x000269c1) call5_windows_pane_ParamLimits

0x84af,	// (0x000269c1) call5_windows_pane

0x8502,	// (0x00026a14) call5_swipe_1_pane_cp_ParamLimits

0x8502,	// (0x00026a14) call5_swipe_1_pane_cp

0x850e,	// (0x00026a20) call5_swipe_2_pane_cp_ParamLimits

0x850e,	// (0x00026a20) call5_swipe_2_pane_cp

0xa52d,	// (0x00028a3f) call5_image_pane_cp

0x851a,	// (0x00026a2c) popup_call5_audio_first_window_cp_ParamLimits

0x851a,	// (0x00026a2c) popup_call5_audio_first_window_cp

0xe29a,	// (0x0002c7ac) call5_swipe_1_pane_g1_cp_ParamLimits

0xe29a,	// (0x0002c7ac) call5_swipe_1_pane_g1_cp

0xe307,	// (0x0002c819) call5_swipe_1_pane_g2_cp

0xe2b3,	// (0x0002c7c5) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2b3,	// (0x0002c7c5) call5_swipe_1_pane_t1_cp

0xe29a,	// (0x0002c7ac) call5_swipe_2_pane_g1_cp_ParamLimits

0xe29a,	// (0x0002c7ac) call5_swipe_2_pane_g1_cp

0xe30f,	// (0x0002c821) call5_swipe_2_pane_g2_cp

0xe317,	// (0x0002c829) call5_swipe_2_pane_t1_cp_ParamLimits

0xe317,	// (0x0002c829) call5_swipe_2_pane_t1_cp

0xa614,	// (0x00028b26) main_sp_fs_email_pane

0xe32c,	// (0x0002c83e) main_sp_fs_listscroll_pane_te

0x8528,	// (0x00026a3a) popup_sp_fs_action_menu_pane_ParamLimits

0x8528,	// (0x00026a3a) popup_sp_fs_action_menu_pane

0xc7f0,	// (0x0002ad02) bg_sp_fs_ctrlbar_pane_g1

0xe335,	// (0x0002c847) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe33e,	// (0x0002c850) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe347,	// (0x0002c859) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7f0,	// (0x0002ad02) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0002e1db) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5d5,	// (0x0002aae7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5d5,	// (0x0002aae7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe350,	// (0x0002c862) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe350,	// (0x0002c862) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe35c,	// (0x0002c86e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe35c,	// (0x0002c86e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0002e1e4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0002e1e4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe368,	// (0x0002c87a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe368,	// (0x0002c87a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x856c,	// (0x00026a7e) list_medium_line_t2_right_icon_g1

0x8574,	// (0x00026a86) list_medium_line_t2_right_icon_t1

0x8584,	// (0x00026a96) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0002e1e9) list_medium_line_t2_right_icon_t

0xc3e8,	// (0x0002a8fa) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3e8,	// (0x0002a8fa) bg_sp_fs_ctrlbar_pane

0x85d5,	// (0x00026ae7) main_sp_fs_ctrlbar_button_pane_cp01

0x85dd,	// (0x00026aef) main_sp_fs_ctrlbar_ddmenu_pane

0xe3ba,	// (0x0002c8cc) main_sp_fs_ctrlbar_pane_g1

0xe3c6,	// (0x0002c8d8) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0002e1ee) main_sp_fs_ctrlbar_pane_g

0x8619,	// (0x00026b2b) main_sp_fs_ctrlbar_pane_t1

0x8654,	// (0x00026b66) main_sp_fs_ctrlbar_pane

0x866a,	// (0x00026b7c) main_sp_fs_listscroll_pane_te_cp01

0x867b,	// (0x00026b8d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x867b,	// (0x00026b8d) popup_sp_fs_action_menu_pane_cp01

0xa614,	// (0x00028b26) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa614,	// (0x00028b26) bg_sp_fs_highlight_list_pane_cp01

0xe3ed,	// (0x0002c8ff) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3ed,	// (0x0002c8ff) sp_fs_action_menu_list_gene_pane_g1

0xe3fc,	// (0x0002c90e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3fc,	// (0x0002c90e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0002e1fc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0002e1fc) sp_fs_action_menu_list_gene_pane_g

0xe409,	// (0x0002c91b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe409,	// (0x0002c91b) sp_fs_action_menu_list_gene_pane_t1

0xe421,	// (0x0002c933) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe421,	// (0x0002c933) sp_fs_action_menu_list_gene_pane

0xe440,	// (0x0002c952) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe440,	// (0x0002c952) popup_sp_fs_action_menu_bg_pane

0xe44e,	// (0x0002c960) sp_fs_action_menu_list_pane_ParamLimits

0xe44e,	// (0x0002c960) sp_fs_action_menu_list_pane

0x86a5,	// (0x00026bb7) sp_fs_scroll_pane_cp01_ParamLimits

0x86a5,	// (0x00026bb7) sp_fs_scroll_pane_cp01

0x86cb,	// (0x00026bdd) list_medium_line_plain_t2_t1

0x86db,	// (0x00026bed) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0002e201) list_medium_line_plain_t2_t

0x86e9,	// (0x00026bfb) list_medium_line_plain_t3_t1

0x86f9,	// (0x00026c0b) list_medium_line_plain_t3_t2

0x8707,	// (0x00026c19) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0002e206) list_medium_line_plain_t3_t

0x3013,	// (0x00021525) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t2_g2_g1

0x302b,	// (0x0002153d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0002d73d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0002d73d) list_medium_line_x2_t2_g2_g

0x449d,	// (0x000229af) list_medium_line_x2_t2_g2_t1_ParamLimits

0x449d,	// (0x000229af) list_medium_line_x2_t2_g2_t1

0x305e,	// (0x00021570) list_medium_line_x2_t2_g2_t2_ParamLimits

0x305e,	// (0x00021570) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0002e20d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0002e20d) list_medium_line_x2_t2_g2_t

0x3013,	// (0x00021525) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t4_g2_g1

0x302b,	// (0x0002153d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0002d73d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0002d73d) list_medium_line_x2_t4_g2_g

0x8715,	// (0x00026c27) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8715,	// (0x00026c27) list_medium_line_x2_t4_g2_t1

0x872f,	// (0x00026c41) list_medium_line_x2_t4_g2_t2_ParamLimits

0x872f,	// (0x00026c41) list_medium_line_x2_t4_g2_t2

0x8745,	// (0x00026c57) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8745,	// (0x00026c57) list_medium_line_x2_t4_g2_t3

0x305e,	// (0x00021570) list_medium_line_x2_t4_g2_t4_ParamLimits

0x305e,	// (0x00021570) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0002e212) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0002e212) list_medium_line_x2_t4_g2_t

0x875a,	// (0x00026c6c) list_medium_line_t3_right_iconx2_g1

0x856c,	// (0x00026a7e) list_medium_line_t3_right_iconx2_g2

0x8762,	// (0x00026c74) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0002e21b) list_medium_line_t3_right_iconx2_g

0x876a,	// (0x00026c7c) list_medium_line_t3_right_iconx2_t1

0x877a,	// (0x00026c8c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0002e222) list_medium_line_t3_right_iconx2_t

0x3013,	// (0x00021525) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x3_t4_g4_g1

0x301f,	// (0x00021531) list_medium_line_x3_t4_g4_g2_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x3_t4_g4_g2

0x30c5,	// (0x000215d7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x30c5,	// (0x000215d7) list_medium_line_x3_t4_g4_g3

0x8788,	// (0x00026c9a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8788,	// (0x00026c9a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0002e227) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0002e227) list_medium_line_x3_t4_g4_g

0x8794,	// (0x00026ca6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8794,	// (0x00026ca6) list_medium_line_x3_t4_g4_t1

0x87ab,	// (0x00026cbd) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87ab,	// (0x00026cbd) list_medium_line_x3_t4_g4_t2

0x87c0,	// (0x00026cd2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x87c0,	// (0x00026cd2) list_medium_line_x3_t4_g4_t3

0x87d5,	// (0x00026ce7) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87d5,	// (0x00026ce7) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0002e230) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0002e230) list_medium_line_x3_t4_g4_t

0x87f2,	// (0x00026d04) list_single_dyc_row_text_pane_t1_ParamLimits

0x87f2,	// (0x00026d04) list_single_dyc_row_text_pane_t1

0x8829,	// (0x00026d3b) list_single_dyc_row_text_pane_t2_ParamLimits

0x8829,	// (0x00026d3b) list_single_dyc_row_text_pane_t2

0xe46e,	// (0x0002c980) list_single_dyc_row_text_pane_t3_ParamLimits

0xe46e,	// (0x0002c980) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0002e239) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0002e239) list_single_dyc_row_text_pane_t

0xe492,	// (0x0002c9a4) list_single_dyc_row_pane_g1_ParamLimits

0xe492,	// (0x0002c9a4) list_single_dyc_row_pane_g1

0xe49e,	// (0x0002c9b0) list_single_dyc_row_pane_g2_ParamLimits

0xe49e,	// (0x0002c9b0) list_single_dyc_row_pane_g2

0xe4aa,	// (0x0002c9bc) list_single_dyc_row_pane_g3_ParamLimits

0xe4aa,	// (0x0002c9bc) list_single_dyc_row_pane_g3

0xe4b6,	// (0x0002c9c8) list_single_dyc_row_pane_g4_ParamLimits

0xe4b6,	// (0x0002c9c8) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0002e246) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0002e246) list_single_dyc_row_pane_g

0xe4c2,	// (0x0002c9d4) list_single_dyc_row_text_pane_ParamLimits

0xe4c2,	// (0x0002c9d4) list_single_dyc_row_text_pane

0x9c11,	// (0x00028123) bg_sp_fs_scroll_pane

0xe4e1,	// (0x0002c9f3) thumb_sp_fs_scroll_pane

0x7067,	// (0x00025579) list_medium_line_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_g1

0xe4ea,	// (0x0002c9fc) list_medium_line_t1_ParamLimits

0xe4ea,	// (0x0002c9fc) list_medium_line_t1

0x3013,	// (0x00021525) list_medium_line_x2_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_g1

0x301f,	// (0x00021531) list_medium_line_x2_g2_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0002e24f) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0002e24f) list_medium_line_x2_g

0xe4ff,	// (0x0002ca11) list_medium_line_x2_t1_ParamLimits

0xe4ff,	// (0x0002ca11) list_medium_line_x2_t1

0x3013,	// (0x00021525) list_medium_line_x3_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x3_g1

0x301f,	// (0x00021531) list_medium_line_x3_g2_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0002e24f) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0002e24f) list_medium_line_x3_g

0xe4ff,	// (0x0002ca11) list_medium_line_x3_t1_ParamLimits

0xe4ff,	// (0x0002ca11) list_medium_line_x3_t1

0xe515,	// (0x0002ca27) thumb_sp_fs_scroll_pane_g1

0xe51e,	// (0x0002ca30) thumb_sp_fs_scroll_pane_g2

0xe527,	// (0x0002ca39) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002e254) thumb_sp_fs_scroll_pane_g

0xe515,	// (0x0002ca27) bg_sp_fs_scroll_pane_g1

0xe51e,	// (0x0002ca30) bg_sp_fs_scroll_pane_g2

0xe527,	// (0x0002ca39) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002e254) bg_sp_fs_scroll_pane_g

0x3013,	// (0x00021525) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3013,	// (0x00021525) list_medium_line_x2_t3_g4_g1

0x30b9,	// (0x000215cb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x30b9,	// (0x000215cb) list_medium_line_x2_t3_g4_g2

0x301f,	// (0x00021531) list_medium_line_x2_t3_g4_g3_ParamLimits

0x301f,	// (0x00021531) list_medium_line_x2_t3_g4_g3

0x302b,	// (0x0002153d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x302b,	// (0x0002153d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0002d7b9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0002d7b9) list_medium_line_x2_t3_g4_g

0x894c,	// (0x00026e5e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x894c,	// (0x00026e5e) list_medium_line_x2_t3_g4_t1

0x8962,	// (0x00026e74) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8962,	// (0x00026e74) list_medium_line_x2_t3_g4_t2

0x305e,	// (0x00021570) list_medium_line_x2_t3_g4_t3_ParamLimits

0x305e,	// (0x00021570) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0002e25b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0002e25b) list_medium_line_x2_t3_g4_t

0x7067,	// (0x00025579) list_medium_line_g2_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_g2_g1

0x7073,	// (0x00025585) list_medium_line_g2_g2_ParamLimits

0x7073,	// (0x00025585) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0002df0e) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0002df0e) list_medium_line_g2_g

0xe530,	// (0x0002ca42) list_medium_line_g2_t1_ParamLimits

0xe530,	// (0x0002ca42) list_medium_line_g2_t1

0x7067,	// (0x00025579) list_medium_line_t3_g2_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_t3_g2_g1

0x7073,	// (0x00025585) list_medium_line_t3_g2_g2_ParamLimits

0x7073,	// (0x00025585) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0002df0e) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0002df0e) list_medium_line_t3_g2_g

0x897c,	// (0x00026e8e) list_medium_line_t3_g2_t1_ParamLimits

0x897c,	// (0x00026e8e) list_medium_line_t3_g2_t1

0x8996,	// (0x00026ea8) list_medium_line_t3_g2_t2_ParamLimits

0x8996,	// (0x00026ea8) list_medium_line_t3_g2_t2

0x89ac,	// (0x00026ebe) list_medium_line_t3_g2_t3_ParamLimits

0x89ac,	// (0x00026ebe) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0002e262) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0002e262) list_medium_line_t3_g2_t

0x856c,	// (0x00026a7e) list_medium_line_right_icon_g1

0xe545,	// (0x0002ca57) list_medium_line_right_icon_t1

0x7067,	// (0x00025579) list_medium_line_t2_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_t2_g1

0x89c2,	// (0x00026ed4) list_medium_line_t2_t1_ParamLimits

0x89c2,	// (0x00026ed4) list_medium_line_t2_t1

0x89dc,	// (0x00026eee) list_medium_line_t2_t2_ParamLimits

0x89dc,	// (0x00026eee) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0002e269) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0002e269) list_medium_line_t2_t

0x7067,	// (0x00025579) list_medium_line_t3_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_t3_g1

0x89f1,	// (0x00026f03) list_medium_line_t3_t1_ParamLimits

0x89f1,	// (0x00026f03) list_medium_line_t3_t1

0x8a0b,	// (0x00026f1d) list_medium_line_t3_t2_ParamLimits

0x8a0b,	// (0x00026f1d) list_medium_line_t3_t2

0x8a21,	// (0x00026f33) list_medium_line_t3_t3_ParamLimits

0x8a21,	// (0x00026f33) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0002e26e) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0002e26e) list_medium_line_t3_t

0x7067,	// (0x00025579) list_medium_line_g3_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_g3_g1

0x8a36,	// (0x00026f48) list_medium_line_g3_g2_ParamLimits

0x8a36,	// (0x00026f48) list_medium_line_g3_g2

0x7073,	// (0x00025585) list_medium_line_g3_g3_ParamLimits

0x7073,	// (0x00025585) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0002e275) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0002e275) list_medium_line_g3_g

0xe553,	// (0x0002ca65) list_medium_line_g3_t1_ParamLimits

0xe553,	// (0x0002ca65) list_medium_line_g3_t1

0x7067,	// (0x00025579) list_medium_line_t2_g3_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_t2_g3_g1

0x8a36,	// (0x00026f48) list_medium_line_t2_g3_g2_ParamLimits

0x8a36,	// (0x00026f48) list_medium_line_t2_g3_g2

0x7073,	// (0x00025585) list_medium_line_t2_g3_g3_ParamLimits

0x7073,	// (0x00025585) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0002e275) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0002e275) list_medium_line_t2_g3_g

0x8a42,	// (0x00026f54) list_medium_line_t2_g3_t1_ParamLimits

0x8a42,	// (0x00026f54) list_medium_line_t2_g3_t1

0x8a5c,	// (0x00026f6e) list_medium_line_t2_g3_t2_ParamLimits

0x8a5c,	// (0x00026f6e) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0002e27c) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0002e27c) list_medium_line_t2_g3_t

0x7067,	// (0x00025579) list_medium_line_t3_g3_g1_ParamLimits

0x7067,	// (0x00025579) list_medium_line_t3_g3_g1

0x8a36,	// (0x00026f48) list_medium_line_t3_g3_g2_ParamLimits

0x8a36,	// (0x00026f48) list_medium_line_t3_g3_g2

0x7073,	// (0x00025585) list_medium_line_t3_g3_g3_ParamLimits

0x7073,	// (0x00025585) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0002e275) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0002e275) list_medium_line_t3_g3_g

0x8a72,	// (0x00026f84) list_medium_line_t3_g3_t1_ParamLimits

0x8a72,	// (0x00026f84) list_medium_line_t3_g3_t1

0x8a8b,	// (0x00026f9d) list_medium_line_t3_g3_t2_ParamLimits

0x8a8b,	// (0x00026f9d) list_medium_line_t3_g3_t2

0x8aa1,	// (0x00026fb3) list_medium_line_t3_g3_t3_ParamLimits

0x8aa1,	// (0x00026fb3) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0002e281) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0002e281) list_medium_line_t3_g3_t

0x875a,	// (0x00026c6c) list_medium_line_right_iconx2_g1

0x856c,	// (0x00026a7e) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002e288) list_medium_line_right_iconx2_g

0xe568,	// (0x0002ca7a) list_medium_line_right_iconx2_t1

0x875a,	// (0x00026c6c) list_medium_line_t2_right_iconx2_g1

0x856c,	// (0x00026a7e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002e288) list_medium_line_t2_right_iconx2_g

0x8ab7,	// (0x00026fc9) list_medium_line_t2_right_iconx2_t1

0x8ac7,	// (0x00026fd9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0002e28d) list_medium_line_t2_right_iconx2_t

0x8ad5,	// (0x00026fe7) list_medium_line_x4_t4_t1

0x8ae3,	// (0x00026ff5) list_medium_line_x4_t4_t2

0x8af3,	// (0x00027005) list_medium_line_x4_t4_t3

0x8b03,	// (0x00027015) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0002e292) list_medium_line_x4_t4_t

0x8b3d,	// (0x0002704f) tport_appsw_pane_ParamLimits

0x8b3d,	// (0x0002704f) tport_appsw_pane

0x8b4b,	// (0x0002705d) tport_contact_pane_ParamLimits

0x8b4b,	// (0x0002705d) tport_contact_pane

0x8b5b,	// (0x0002706d) tport_listscroll_pane_ParamLimits

0x8b5b,	// (0x0002706d) tport_listscroll_pane

0x8b6b,	// (0x0002707d) cell_tport_appsw_pane_ParamLimits

0x8b6b,	// (0x0002707d) cell_tport_appsw_pane

0xcb0e,	// (0x0002b020) tport_appsw_pane_g1_ParamLimits

0xcb0e,	// (0x0002b020) tport_appsw_pane_g1

0xe576,	// (0x0002ca88) tport_contact_pane_g1

0xe57f,	// (0x0002ca91) tport_contact_pane_t1

0xe58d,	// (0x0002ca9f) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0002e29b) tport_contact_pane_t

0xe59b,	// (0x0002caad) list_tport_pane

0xe5a4,	// (0x0002cab6) scroll_pane_cp_030

0x8b9e,	// (0x000270b0) cell_tport_appsw_pane_g1

0x8bae,	// (0x000270c0) cell_tport_appsw_pane_t1

0x8bbc,	// (0x000270ce) grid_highlight_pane_cp019

0x8bc4,	// (0x000270d6) list_tport_double_graphic_pane_ParamLimits

0x8bc4,	// (0x000270d6) list_tport_double_graphic_pane

0xa614,	// (0x00028b26) list_highlight_pane_cp023_ParamLimits

0xa614,	// (0x00028b26) list_highlight_pane_cp023

0x8bd5,	// (0x000270e7) list_tport_double_graphic_pane_g1_ParamLimits

0x8bd5,	// (0x000270e7) list_tport_double_graphic_pane_g1

0x8be2,	// (0x000270f4) list_tport_double_graphic_pane_t1_ParamLimits

0x8be2,	// (0x000270f4) list_tport_double_graphic_pane_t1

0x8bf7,	// (0x00027109) list_tport_double_graphic_pane_t2_ParamLimits

0x8bf7,	// (0x00027109) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0002e2a7) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0002e2a7) list_tport_double_graphic_pane_t

0x9c11,	// (0x00028123) main_cale_note_pane

0x20f0,	// (0x00020602) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x20f0,	// (0x00020602) cell_vitu2_function_top_wide_pane_cp01

0x814e,	// (0x00026660) wait_bar_pane_cp05_ParamLimits

0xa614,	// (0x00028b26) listscroll_cmail_pane

0xe5ad,	// (0x0002cabf) list_cmail_pane

0x8c09,	// (0x0002711b) list_cmail_body_pane

0x8c31,	// (0x00027143) list_single_cmail_header_caption_pane

0x8c5d,	// (0x0002716f) list_single_cmail_header_detail_pane_ParamLimits

0x8c5d,	// (0x0002716f) list_single_cmail_header_detail_pane

0xe5bd,	// (0x0002cacf) list_single_cmail_header_caption_pane_t1

0x8c96,	// (0x000271a8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c96,	// (0x000271a8) list_single_cmail_header_detail_pane_g1

0xe5d4,	// (0x0002cae6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5d4,	// (0x0002cae6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0002e2ac) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0002e2ac) list_single_cmail_header_detail_pane_g

0xe5ed,	// (0x0002caff) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5ed,	// (0x0002caff) list_single_cmail_header_detail_pane_t1

0xe64d,	// (0x0002cb5f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe64d,	// (0x0002cb5f) list_single_cmail_header_editor_pane_bg

0xdf48,	// (0x0002c45a) list_cmail_body_pane_g1

0xe664,	// (0x0002cb76) list_cmail_body_pane_t1

0xd233,	// (0x0002b745) list_single_cmail_header_editor_pane_bg_g1

0xa7bb,	// (0x00028ccd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd243,	// (0x0002b755) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd23b,	// (0x0002b74d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd465,	// (0x0002b977) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd263,	// (0x0002b775) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd253,	// (0x0002b765) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd25b,	// (0x0002b76d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa79b,	// (0x00028cad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cac,	// (0x000271be) calenote_gesture_pane_ParamLimits

0x8cac,	// (0x000271be) calenote_gesture_pane

0x8cc6,	// (0x000271d8) calenote_window_pane_ParamLimits

0x8cc6,	// (0x000271d8) calenote_window_pane

0xe672,	// (0x0002cb84) popup_note_window_cp01

0x8cde,	// (0x000271f0) calenote_swipe_1_pane_ParamLimits

0x8cde,	// (0x000271f0) calenote_swipe_1_pane

0x850e,	// (0x00026a20) calenote_swipe_2_pane_ParamLimits

0x850e,	// (0x00026a20) calenote_swipe_2_pane

0xe29a,	// (0x0002c7ac) calenote_swipe_1_pane_g1_ParamLimits

0xe29a,	// (0x0002c7ac) calenote_swipe_1_pane_g1

0xe2a7,	// (0x0002c7b9) calenote_swipe_1_pane_g2_ParamLimits

0xe2a7,	// (0x0002c7b9) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0002e1d1) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0002e1d1) calenote_swipe_1_pane_g

0xe684,	// (0x0002cb96) calenote_swipe_1_pane_t1_ParamLimits

0xe684,	// (0x0002cb96) calenote_swipe_1_pane_t1

0xe29a,	// (0x0002c7ac) calenote_swipe_2_pane_g1_ParamLimits

0xe29a,	// (0x0002c7ac) calenote_swipe_2_pane_g1

0xe6a3,	// (0x0002cbb5) calenote_swipe_2_pane_g2_ParamLimits

0xe6a3,	// (0x0002cbb5) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0002e2b8) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0002e2b8) calenote_swipe_2_pane_g

0xe6af,	// (0x0002cbc1) calenote_swipe_2_pane_t1_ParamLimits

0xe6af,	// (0x0002cbc1) calenote_swipe_2_pane_t1

0x9c11,	// (0x00028123) main_mup_navstr_pane

0x6001,	// (0x00024513) main_mup3_pane_t7_ParamLimits

0x6001,	// (0x00024513) main_mup3_pane_t7

0x1912,	// (0x0001fe24) main_mp4_pane_g6_ParamLimits

0x1912,	// (0x0001fe24) main_mp4_pane_g6

0x1c23,	// (0x00020135) main_image3_pane_t4_ParamLimits

0x1c23,	// (0x00020135) main_image3_pane_t4

0x8cf1,	// (0x00027203) popup_navstr_preview_pane_ParamLimits

0x8cf1,	// (0x00027203) popup_navstr_preview_pane

0x8cfd,	// (0x0002720f) scroll_navstr_pane_ParamLimits

0x8cfd,	// (0x0002720f) scroll_navstr_pane

0x9c11,	// (0x00028123) bg_popup_preview_window_pane_cp04

0xe6d6,	// (0x0002cbe8) popup_navstr_preview_pane_t1

0x8d09,	// (0x0002721b) scroll_navstr_pane_g1_ParamLimits

0x8d09,	// (0x0002721b) scroll_navstr_pane_g1

0x8d16,	// (0x00027228) scroll_navstr_pane_t1_ParamLimits

0x8d16,	// (0x00027228) scroll_navstr_pane_t1

0xe67b,	// (0x0002cb8d) bg_button_pane_cp014

0xe67b,	// (0x0002cb8d) bg_button_pane_cp030

0x8421,	// (0x00026933) list_double_fisheye_pane_g4_ParamLimits

0x8421,	// (0x00026933) list_double_fisheye_pane_g4

0x842d,	// (0x0002693f) list_double_fisheye_pane_g5_ParamLimits

0x842d,	// (0x0002693f) list_double_fisheye_pane_g5

0xd4a9,	// (0x0002b9bb) sp_fs_scroll_pane_cp03

0xe3ba,	// (0x0002c8cc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3c6,	// (0x0002c8d8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0002e1ee) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8619,	// (0x00026b2b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5b5,	// (0x0002cac7) sp_fs_scroll_pane_cp02

0xa46c,	// (0x0002897e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa46c,	// (0x0002897e) popup_sp_fs_calendar_preview_list_single_pane

0x9c11,	// (0x00028123) main_cam6_pano_pane

0x1273,	// (0x0001f785) main_mup3_pane_ParamLimits

0x9c11,	// (0x00028123) main_phacti_pane

0x8023,	// (0x00026535) bg_button_pane_cp11

0x803b,	// (0x0002654d) main_mobtv_info_pane_g2_ParamLimits

0x803b,	// (0x0002654d) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0002e14e) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0002e14e) main_mobtv_info_pane_g

0x81ed,	// (0x000266ff) sc_clock_pane_t5_ParamLimits

0x81ed,	// (0x000266ff) sc_clock_pane_t5

0x828e,	// (0x000267a0) main_radioblah_pane_g1_ParamLimits

0xe1e6,	// (0x0002c6f8) main_radioblah_pane_t3_ParamLimits

0xe1e6,	// (0x0002c6f8) main_radioblah_pane_t3

0xe1fe,	// (0x0002c710) main_radioblah_pane_t4_ParamLimits

0xe1fe,	// (0x0002c710) main_radioblah_pane_t4

0x82ac,	// (0x000267be) main_radioblah_text_pane_ParamLimits

0x82ac,	// (0x000267be) main_radioblah_text_pane

0x82b9,	// (0x000267cb) main_radioblah_info_pane_g1_ParamLimits

0x834e,	// (0x00026860) main_radioblah_info_pane_t4_ParamLimits

0x834e,	// (0x00026860) main_radioblah_info_pane_t4

0xa614,	// (0x00028b26) main_sp_fs_calendar_pane

0x8d28,	// (0x0002723a) main_phacti_pane_g1

0x8d30,	// (0x00027242) phacti_note_pane_ParamLimits

0x8d30,	// (0x00027242) phacti_note_pane

0xe6ed,	// (0x0002cbff) phacti_term_pane_ParamLimits

0xe6ed,	// (0x0002cbff) phacti_term_pane

0xe702,	// (0x0002cc14) phacti_note_pane_t1_ParamLimits

0xe702,	// (0x0002cc14) phacti_note_pane_t1

0xe719,	// (0x0002cc2b) phacti_term_pane_g1

0xe721,	// (0x0002cc33) phacti_term_pane_t1_ParamLimits

0xe721,	// (0x0002cc33) phacti_term_pane_t1

0xe74b,	// (0x0002cc5d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe753,	// (0x0002cc65) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0002e2c2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe75b,	// (0x0002cc6d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe75b,	// (0x0002cc6d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe771,	// (0x0002cc83) aid_popup_sp_fs_bg_corner_pane

0xc7f0,	// (0x0002ad02) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c11,	// (0x00028123) popup_sp_fs_calendar_preview_bg_pane

0x8d46,	// (0x00027258) popup_sp_fs_calendar_preview_list_pane

0xc3e8,	// (0x0002a8fa) bg_main_sp_fs_cale_pane_ParamLimits

0xc3e8,	// (0x0002a8fa) bg_main_sp_fs_cale_pane

0xe782,	// (0x0002cc94) listscroll_cale_mrui_pane_ParamLimits

0xe782,	// (0x0002cc94) listscroll_cale_mrui_pane

0xd2b7,	// (0x0002b7c9) listscroll_sp_fs_schedule_track_pane

0xe797,	// (0x0002cca9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe797,	// (0x0002cca9) main_sp_fs_ctrlbar_pane_cp01

0xe7aa,	// (0x0002ccbc) main_sp_fs_ribbon_pane

0xe7b2,	// (0x0002ccc4) popup_sp_fs_cale_preview_window

0x8d9b,	// (0x000272ad) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d9b,	// (0x000272ad) list_single_sp_fs_schedule_track_pane

0xd0ee,	// (0x0002b600) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd0ee,	// (0x0002b600) bg_sp_fs_highlight_list_pane_cp03

0x8dbe,	// (0x000272d0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8dbe,	// (0x000272d0) list_single_sp_fs_schedule_track_pane_g1

0x8dca,	// (0x000272dc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dca,	// (0x000272dc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0002e2c7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0002e2c7) list_single_sp_fs_schedule_track_pane_g

0x8dd6,	// (0x000272e8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dd6,	// (0x000272e8) list_single_sp_fs_schedule_track_pane_t1

0x8dee,	// (0x00027300) sp_fs_schedule_track_pane_ParamLimits

0x8dee,	// (0x00027300) sp_fs_schedule_track_pane

0xe7c4,	// (0x0002ccd6) sp_fs_schedule_track_pane_g1

0xe7cc,	// (0x0002ccde) sp_fs_schedule_track_pane_g2

0xe7d4,	// (0x0002cce6) sp_fs_schedule_track_pane_g3

0xe7dc,	// (0x0002ccee) sp_fs_schedule_track_pane_g4

0xe7e4,	// (0x0002ccf6) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0002e2cc) sp_fs_schedule_track_pane_g

0xd233,	// (0x0002b745) bg_sp_fs_schedule_viewer_highlight_g1

0xa7bb,	// (0x00028ccd) bg_sp_fs_schedule_viewer_highlight_g2

0xd23b,	// (0x0002b74d) bg_sp_fs_schedule_viewer_highlight_g3

0xd243,	// (0x0002b755) bg_sp_fs_schedule_viewer_highlight_g4

0xd465,	// (0x0002b977) bg_sp_fs_schedule_viewer_highlight_g5

0xd253,	// (0x0002b765) bg_sp_fs_schedule_viewer_highlight_g6

0xd25b,	// (0x0002b76d) bg_sp_fs_schedule_viewer_highlight_g7

0xd263,	// (0x0002b775) bg_sp_fs_schedule_viewer_highlight_g8

0xa79b,	// (0x00028cad) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0002e2d7) bg_sp_fs_schedule_viewer_highlight_g

0x9c11,	// (0x00028123) bg_main_sp_fs_ribbon_pane

0x8dfe,	// (0x00027310) main_sp_fs_ribbon_pane_g1

0xe7ec,	// (0x0002ccfe) main_sp_fs_ribbon_pane_t1

0x8e07,	// (0x00027319) main_sp_fs_ribbon_pane_t2

0xe7fb,	// (0x0002cd0d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0002e2ea) main_sp_fs_ribbon_pane_t

0xe80a,	// (0x0002cd1c) main_sp_fs_ribbon_scheduler_pane

0xe812,	// (0x0002cd24) bg_main_sp_fs_ribbon_pane_g1

0xe81b,	// (0x0002cd2d) bg_main_sp_fs_ribbon_pane_g2

0xe824,	// (0x0002cd36) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0002e2f1) bg_main_sp_fs_ribbon_pane_g

0xe82c,	// (0x0002cd3e) main_sp_fs_ribbon_scheduler_pane_g1

0xe835,	// (0x0002cd47) main_sp_fs_ribbon_scheduler_pane_g2

0xe83e,	// (0x0002cd50) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0002e2f8) main_sp_fs_ribbon_scheduler_pane_g

0xe847,	// (0x0002cd59) list_cale_mrui_pane

0x8e16,	// (0x00027328) sp_fs_scroll_pane_cp07_ParamLimits

0x8e16,	// (0x00027328) sp_fs_scroll_pane_cp07

0x8e32,	// (0x00027344) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e32,	// (0x00027344) bg_sp_fs_schedule_viewer_highlight

0xe854,	// (0x0002cd66) list_single_sp_fs_schedule_track_pane_cp01

0xe85c,	// (0x0002cd6e) list_sp_fs_schedule_track_pane

0xe864,	// (0x0002cd76) sp_fs_scroll_pane_cp06_ParamLimits

0xe864,	// (0x0002cd76) sp_fs_scroll_pane_cp06

0xc7f0,	// (0x0002ad02) bgmain_sp_fs_calendar_pane_g1

0x8e3f,	// (0x00027351) list_single_cale_mrui_pane_ParamLimits

0x8e3f,	// (0x00027351) list_single_cale_mrui_pane

0xe876,	// (0x0002cd88) list_single_cale_mrui_row_pane_ParamLimits

0xe876,	// (0x0002cd88) list_single_cale_mrui_row_pane

0xe883,	// (0x0002cd95) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe883,	// (0x0002cd95) list_single_cale_mrui_row_pane_g1

0xe8c8,	// (0x0002cdda) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c8,	// (0x0002cdda) list_single_cale_mrui_row_pane_t1

0x8e6d,	// (0x0002737f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e6d,	// (0x0002737f) list_single_cale_mrui_row_pane_t2

0xe8da,	// (0x0002cdec) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8da,	// (0x0002cdec) list_single_cale_mrui_row_pane_t3

0xe909,	// (0x0002ce1b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe909,	// (0x0002ce1b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0002e306) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0002e306) list_single_cale_mrui_row_pane_t

0x8ed3,	// (0x000273e5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ed3,	// (0x000273e5) list_single_cmail_header_editor_pane_bg_cp01

0x8ef3,	// (0x00027405) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ef3,	// (0x00027405) list_single_cmail_header_editor_pane_bg_cp02

0x8f0f,	// (0x00027421) main_radioblah_text_pane_t1_ParamLimits

0x8f0f,	// (0x00027421) main_radioblah_text_pane_t1

0xe938,	// (0x0002ce4a) cam6_indi_pane_cp01

0xe940,	// (0x0002ce52) cam6_mode_pane_cp01

0xe948,	// (0x0002ce5a) cam6_pano_pane

0xe951,	// (0x0002ce63) cam6_zoom_pane_cp01

0xe959,	// (0x0002ce6b) cam6_pano_image_pane

0xe964,	// (0x0002ce76) cam6_pano_pane_g1

0xdf48,	// (0x0002c45a) cam6_pano_pane_g2

0xe96d,	// (0x0002ce7f) cam6_pano_pane_g3

0xe976,	// (0x0002ce88) cam6_pano_pane_g4

0xce06,	// (0x0002b318) cam6_pano_pane_g5

0xe97f,	// (0x0002ce91) cam6_pano_pane_g6

0xe989,	// (0x0002ce9b) cam6_pano_pane_g7

0xe991,	// (0x0002cea3) cam6_pano_pane_g8

0xe99a,	// (0x0002ceac) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0002e30f) cam6_pano_pane_g

0x9c11,	// (0x00028123) main_browser_tag_pane

0xe6ce,	// (0x0002cbe0) grid_navstr_albumart_pane

0xe9a5,	// (0x0002ceb7) cell_navstr_albumart_pane_ParamLimits

0xe9a5,	// (0x0002ceb7) cell_navstr_albumart_pane

0xe9c5,	// (0x0002ced7) cell_navstr_albumart_pane_g1

0xc1b9,	// (0x0002a6cb) cell_navstr_albumart_pane_g2

0xc1c9,	// (0x0002a6db) cell_navstr_albumart_pane_g3

0xc1c1,	// (0x0002a6d3) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0002e322) cell_navstr_albumart_pane_g

0x8f2a,	// (0x0002743c) bt_list_pane_ParamLimits

0x8f2a,	// (0x0002743c) bt_list_pane

0x8f4b,	// (0x0002745d) bt_list_pane_t1

0x8f5a,	// (0x0002746c) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0002e32b) bt_list_pane_t

0x9c11,	// (0x00028123) main_cale_prevew_pane

0x8f69,	// (0x0002747b) popup_cale_preview_window_ParamLimits

0x8f69,	// (0x0002747b) popup_cale_preview_window

0xa614,	// (0x00028b26) bg_popup_preview_window_pane_cp05_ParamLimits

0xa614,	// (0x00028b26) bg_popup_preview_window_pane_cp05

0xe9cd,	// (0x0002cedf) list_cale_preview_pane_ParamLimits

0xe9cd,	// (0x0002cedf) list_cale_preview_pane

0x8f82,	// (0x00027494) list_double_cale_preview_pane_ParamLimits

0x8f82,	// (0x00027494) list_double_cale_preview_pane

0x8f94,	// (0x000274a6) list_single_cale_preview_pane_ParamLimits

0x8f94,	// (0x000274a6) list_single_cale_preview_pane

0x8fa8,	// (0x000274ba) list_single_cale_preview_pane_g1

0x8fb0,	// (0x000274c2) list_single_cale_preview_pane_t1_ParamLimits

0x8fb0,	// (0x000274c2) list_single_cale_preview_pane_t1

0x8fc5,	// (0x000274d7) list_double_cale_preview_pane_g1

0x8fcd,	// (0x000274df) list_double_cale_preview_pane_t1_ParamLimits

0x8fcd,	// (0x000274df) list_double_cale_preview_pane_t1

0x8fe2,	// (0x000274f4) list_double_cale_preview_pane_t2_ParamLimits

0x8fe2,	// (0x000274f4) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0002e330) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0002e330) list_double_cale_preview_pane_t

0x9c11,	// (0x00028123) main_ezdial_pane

0xa614,	// (0x00028b26) main_sp_fs_email_pane_ParamLimits

0x8592,	// (0x00026aa4) cmail_ddmenu_btn01_pane_ParamLimits

0x8592,	// (0x00026aa4) cmail_ddmenu_btn01_pane

0x85a7,	// (0x00026ab9) cmail_ddmenu_btn02_pane_ParamLimits

0x85a7,	// (0x00026ab9) cmail_ddmenu_btn02_pane

0x85bf,	// (0x00026ad1) cmail_ddmenu_btn03_pane_ParamLimits

0x85bf,	// (0x00026ad1) cmail_ddmenu_btn03_pane

0x8654,	// (0x00026b66) main_sp_fs_ctrlbar_pane_ParamLimits

0x866a,	// (0x00026b7c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c09,	// (0x0002711b) list_cmail_body_pane_ParamLimits

0xe5cb,	// (0x0002cadd) bg_button_pane_cp12

0xe5e0,	// (0x0002caf2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e0,	// (0x0002caf2) list_single_cmail_header_detail_pane_g3

0xe629,	// (0x0002cb3b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe629,	// (0x0002cb3b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0002e2b3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0002e2b3) list_single_cmail_header_detail_pane_t

0xe736,	// (0x0002cc48) phacti_term_pane_t2_ParamLimits

0xe736,	// (0x0002cc48) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0002e2bd) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0002e2bd) phacti_term_pane_t

0xe9d9,	// (0x0002ceeb) aid_size_list_single_double

0x8ffa,	// (0x0002750c) popup_ezdial_listscroll_window

0x901e,	// (0x00027530) popup_number_entry_window_cp01

0xa52d,	// (0x00028a3f) bg_popup_call_pane_cp09

0xe9e5,	// (0x0002cef7) ezdial_list_pane

0xe9ed,	// (0x0002ceff) scroll_pane_cp23

0xc5d5,	// (0x0002aae7) bg_button_pane_cp028_ParamLimits

0xc5d5,	// (0x0002aae7) bg_button_pane_cp028

0x902c,	// (0x0002753e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x902c,	// (0x0002753e) cmail_ddmenu_btn01_pane_g1

0x903c,	// (0x0002754e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x903c,	// (0x0002754e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0002e335) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0002e335) cmail_ddmenu_btn01_pane_g

0xe9f5,	// (0x0002cf07) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9f5,	// (0x0002cf07) cmail_ddmenu_btn01_pane_t1

0xc3e8,	// (0x0002a8fa) bg_button_pane_cp029_ParamLimits

0xc3e8,	// (0x0002a8fa) bg_button_pane_cp029

0x903c,	// (0x0002754e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x903c,	// (0x0002754e) cmail_ddmenu_btn02_pane_g1

0x9054,	// (0x00027566) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9054,	// (0x00027566) cmail_ddmenu_btn02_pane_t1

0xd0ee,	// (0x0002b600) bg_button_pane_cp031_ParamLimits

0xd0ee,	// (0x0002b600) bg_button_pane_cp031

0x903c,	// (0x0002754e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x903c,	// (0x0002754e) cmail_ddmenu_btn03_pane_g1

0x9054,	// (0x00027566) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9054,	// (0x00027566) cmail_ddmenu_btn03_pane_t1

0x685d,	// (0x00024d6f) cell_dialer2_keypad_pane_t1_ParamLimits

0x6877,	// (0x00024d89) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6877,	// (0x00024d89) cell_dialer2_keypad_pane_t1_copy1

0x7e64,	// (0x00026376) ncimui_group_button_pane

0xa614,	// (0x00028b26) main_sp_fs_calendar_pane_ParamLimits

0x8c31,	// (0x00027143) list_single_cmail_header_caption_pane_ParamLimits

0xe779,	// (0x0002cc8b) aid_recal_txt_sm_pane

0x9c11,	// (0x00028123) mian_recal_day_pane

0xe7b2,	// (0x0002ccc4) popup_sp_fs_cale_preview_window_ParamLimits

0xea0a,	// (0x0002cf1c) list_recal_day_pane

0xea4c,	// (0x0002cf5e) list_single_recal_day_pane_ParamLimits

0xea4c,	// (0x0002cf5e) list_single_recal_day_pane

0xea5e,	// (0x0002cf70) list_single_recal_day_pane_g1_ParamLimits

0xea5e,	// (0x0002cf70) list_single_recal_day_pane_g1

0xea6a,	// (0x0002cf7c) list_single_recal_day_pane_g2_ParamLimits

0xea6a,	// (0x0002cf7c) list_single_recal_day_pane_g2

0xea76,	// (0x0002cf88) list_single_recal_day_pane_g3_ParamLimits

0xea76,	// (0x0002cf88) list_single_recal_day_pane_g3

0x9078,	// (0x0002758a) list_single_recal_day_pane_g4_ParamLimits

0x9078,	// (0x0002758a) list_single_recal_day_pane_g4

0xea82,	// (0x0002cf94) list_single_recal_day_pane_g5_ParamLimits

0xea82,	// (0x0002cf94) list_single_recal_day_pane_g5

0xea8e,	// (0x0002cfa0) list_single_recal_day_pane_g6_ParamLimits

0xea8e,	// (0x0002cfa0) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0002e344) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0002e344) list_single_recal_day_pane_g

0xeaa2,	// (0x0002cfb4) list_single_recal_day_pane_t1

0xeab4,	// (0x0002cfc6) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0002e34f) list_single_recal_day_pane_t

0x9090,	// (0x000275a2) ncimui_query_button_pane_ParamLimits

0x9090,	// (0x000275a2) ncimui_query_button_pane

0x90a0,	// (0x000275b2) ncimui_query_button_pane_t1_ParamLimits

0x90a0,	// (0x000275b2) ncimui_query_button_pane_t1

0xeac6,	// (0x0002cfd8) ncimui_query_button_pane_t2_ParamLimits

0xeac6,	// (0x0002cfd8) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0002e354) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0002e354) ncimui_query_button_pane_t

0x90b3,	// (0x000275c5) query_button_pane_ParamLimits

0x90b3,	// (0x000275c5) query_button_pane

0x9c11,	// (0x00028123) bg_button_pane_cp0028

0xead9,	// (0x0002cfeb) query_button_pane_t1

0x128f,	// (0x0001f7a1) main_tport_pane_ParamLimits

0x8b13,	// (0x00027025) bg_popup_window_pane_cp01_ParamLimits

0x8b13,	// (0x00027025) bg_popup_window_pane_cp01

0x8b21,	// (0x00027033) heading_pane_cp08_ParamLimits

0x8b21,	// (0x00027033) heading_pane_cp08

0x8b2f,	// (0x00027041) heading_pane_cp07_ParamLimits

0x8b2f,	// (0x00027041) heading_pane_cp07

0x8b9e,	// (0x000270b0) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0002e2a0) cell_tport_appsw_pane_g

0x4bd9,	// (0x000230eb) input_candi_list_open_g1

0xa97e,	// (0x00028e90) list_cale_time_pane_g6_ParamLimits

0xa97e,	// (0x00028e90) list_cale_time_pane_g6

0x5a8c,	// (0x00023f9e) aid_size_touch_calib_1_ParamLimits

0x5a8c,	// (0x00023f9e) aid_size_touch_calib_1

0x5a98,	// (0x00023faa) aid_size_touch_calib_2_ParamLimits

0x5a98,	// (0x00023faa) aid_size_touch_calib_2

0x5aa6,	// (0x00023fb8) aid_size_touch_calib_3_ParamLimits

0x5aa6,	// (0x00023fb8) aid_size_touch_calib_3

0x5ab6,	// (0x00023fc8) aid_size_touch_calib_4_ParamLimits

0x5ab6,	// (0x00023fc8) aid_size_touch_calib_4

0x5ac4,	// (0x00023fd6) main_touch_calib_button_group_pane_ParamLimits

0x5ac4,	// (0x00023fd6) main_touch_calib_button_group_pane

0x5ad2,	// (0x00023fe4) main_touch_calib_pane_g1_ParamLimits

0x5ade,	// (0x00023ff0) main_touch_calib_pane_g2_ParamLimits

0x5aea,	// (0x00023ffc) main_touch_calib_pane_g3_ParamLimits

0x5af6,	// (0x00024008) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0002dc5b) main_touch_calib_pane_g_ParamLimits

0x5b02,	// (0x00024014) main_touch_calib_pane_t1_ParamLimits

0x5b1b,	// (0x0002402d) main_touch_calib_pane_t2_ParamLimits

0x5b34,	// (0x00024046) main_touch_calib_pane_t3_ParamLimits

0x5b4a,	// (0x0002405c) main_touch_calib_pane_t4_ParamLimits

0x5b60,	// (0x00024072) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0002dc64) main_touch_calib_pane_t_ParamLimits

0xcba9,	// (0x0002b0bb) list_single_fp_cale_pane_g3_ParamLimits

0xcba9,	// (0x0002b0bb) list_single_fp_cale_pane_g3

0x1273,	// (0x0001f785) bg_button_pane_cp012_ParamLimits

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp03_ParamLimits

0x22f5,	// (0x00020807) cell_vitu2_function_top_pane_g1_ParamLimits

0x1273,	// (0x0001f785) bg_vkb2_func_pane_cp04_ParamLimits

0x7dec,	// (0x000262fe) main_ncimui_button_group_pane_ParamLimits

0x7dec,	// (0x000262fe) main_ncimui_button_group_pane

0x7e52,	// (0x00026364) main_ncimui_pane_t3_ParamLimits

0x7e52,	// (0x00026364) main_ncimui_pane_t3

0xe6e4,	// (0x0002cbf6) phacti_button_group_pane

0xe9d9,	// (0x0002ceeb) aid_size_list_single_double_ParamLimits

0x8ffa,	// (0x0002750c) popup_ezdial_listscroll_window_ParamLimits

0x901e,	// (0x00027530) popup_number_entry_window_cp01_ParamLimits

0x90c0,	// (0x000275d2) phacti_button_pane_ParamLimits

0x90c0,	// (0x000275d2) phacti_button_pane

0x9c11,	// (0x00028123) bg_button_pane_cp14

0xeae7,	// (0x0002cff9) phacti_button_pane_t1

0x90d1,	// (0x000275e3) main_touch_calib_button_pane_ParamLimits

0x90d1,	// (0x000275e3) main_touch_calib_button_pane

0xa35a,	// (0x0002886c) bg_button_pane_cp18_ParamLimits

0xa35a,	// (0x0002886c) bg_button_pane_cp18

0xeaf5,	// (0x0002d007) main_touch_calib_button_pane_t1_ParamLimits

0xeaf5,	// (0x0002d007) main_touch_calib_button_pane_t1

0xeb0b,	// (0x0002d01d) main_touch_calib_button_pane_t2_ParamLimits

0xeb0b,	// (0x0002d01d) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0002e359) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0002e359) main_touch_calib_button_pane_t

0x9c11,	// (0x00028123) cell_ncimui_button_pane

0x9c11,	// (0x00028123) bg_button_pane_cp032

0xeb29,	// (0x0002d03b) cell_ncimui_button_pane_t1

0x1b36,	// (0x00020048) image3_infobar_pane_ParamLimits

0x1b36,	// (0x00020048) image3_infobar_pane

0x820f,	// (0x00026721) fs_bigclock_status_pane_ParamLimits

0x820f,	// (0x00026721) fs_bigclock_status_pane

0x821c,	// (0x0002672e) main_fs_bigclock_clock_pane_ParamLimits

0x821c,	// (0x0002672e) main_fs_bigclock_clock_pane

0x8230,	// (0x00026742) main_fs_bigclock_indi_pane_ParamLimits

0x8230,	// (0x00026742) main_fs_bigclock_indi_pane

0x8258,	// (0x0002676a) main_fs_bigclock_swipe_pane_ParamLimits

0x8258,	// (0x0002676a) main_fs_bigclock_swipe_pane

0x9c11,	// (0x00028123) main_fs_clock_dumped_data

0xe055,	// (0x0002c567) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe055,	// (0x0002c567) list_single_fs_bigclock_indicator_pane_g1

0xe071,	// (0x0002c583) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe071,	// (0x0002c583) list_single_fs_bigclock_indicator_pane_g2

0xe08b,	// (0x0002c59d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe08b,	// (0x0002c59d) list_single_fs_bigclock_indicator_pane_g3

0xe0a5,	// (0x0002c5b7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0a5,	// (0x0002c5b7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0002e182) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0002e182) list_single_fs_bigclock_indicator_pane_g

0xe0d0,	// (0x0002c5e2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0d0,	// (0x0002c5e2) list_single_fs_bigclock_indicator_pane_t1

0xe0f8,	// (0x0002c60a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0f8,	// (0x0002c60a) list_single_fs_bigclock_indicator_pane_t2

0xe120,	// (0x0002c632) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe120,	// (0x0002c632) list_single_fs_bigclock_indicator_pane_t3

0xe148,	// (0x0002c65a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe148,	// (0x0002c65a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0002e18d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0002e18d) list_single_fs_bigclock_indicator_pane_t

0xeb37,	// (0x0002d049) image3_infobar_fav_pane_ParamLimits

0xeb37,	// (0x0002d049) image3_infobar_fav_pane

0xeb47,	// (0x0002d059) image3_infobar_loc_pane_ParamLimits

0xeb47,	// (0x0002d059) image3_infobar_loc_pane

0xeb5b,	// (0x0002d06d) image3_infobar_time_pane_ParamLimits

0xeb5b,	// (0x0002d06d) image3_infobar_time_pane

0xc7f0,	// (0x0002ad02) image3_infobar_time_pane_g1

0xeb6b,	// (0x0002d07d) image3_infobar_time_pane_t1

0xc7f0,	// (0x0002ad02) image3_infobar_loc_pane_g1

0xeb79,	// (0x0002d08b) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0002e35e) image3_infobar_loc_pane_g

0xeb81,	// (0x0002d093) image3_infobar_loc_pane_t1

0xc7f0,	// (0x0002ad02) image3_infobar_fav_pane_g1

0xeb8f,	// (0x0002d0a1) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0002e363) image3_infobar_fav_pane_g

0xeb97,	// (0x0002d0a9) fs_bigclock_status_battery_pane

0xeba0,	// (0x0002d0b2) fs_bigclock_status_signal_pane

0xeba9,	// (0x0002d0bb) fs_bigclock_status_title_pane

0xebb2,	// (0x0002d0c4) fs_bigclock_status_signal_pane_g1

0xebbb,	// (0x0002d0cd) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0002e368) fs_bigclock_status_signal_pane_g

0xebc3,	// (0x0002d0d5) fs_bigclock_status_battery_pane_g1

0xebf9,	// (0x0002d10b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0002e36d) fs_bigclock_status_battery_pane_g

0xec01,	// (0x0002d113) fs_bigclock_status_title_pane_t1

0x90e1,	// (0x000275f3) main_fs_bigclock_clock_pane_g1

0x90e1,	// (0x000275f3) main_fs_bigclock_clock_pane_g2

0x90ee,	// (0x00027600) main_fs_bigclock_clock_pane_g3

0x90ee,	// (0x00027600) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0002e372) main_fs_bigclock_clock_pane_g

0x90fa,	// (0x0002760c) main_fs_bigclock_clock_pane_t1

0x910d,	// (0x0002761f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0002e37b) main_fs_bigclock_clock_pane_t

0xec0f,	// (0x0002d121) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec0f,	// (0x0002d121) list_single_fs_bigclock_indicator_pane

0xec20,	// (0x0002d132) list_single_fs_bigclock_pane_ParamLimits

0xec20,	// (0x0002d132) list_single_fs_bigclock_pane

0xec46,	// (0x0002d158) main_fs_bigclock_indicator_pane_t1

0xec55,	// (0x0002d167) list_single_fs_bigclock_pane_g1

0xec5d,	// (0x0002d16f) list_single_fs_bigclock_pane_t1

0xc7f0,	// (0x0002ad02) main_fs_bigclock_swipe_pane_g1

0xeca0,	// (0x0002d1b2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0002e38c) main_fs_bigclock_swipe_pane_g

0xeca8,	// (0x0002d1ba) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca8,	// (0x0002d1ba) main_fs_bigclock_swipe_pane_t1

0x44de,	// (0x000229f0) call_type_pane_ParamLimits

0x9c11,	// (0x00028123) main_btmg_pane

0xe8af,	// (0x0002cdc1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8af,	// (0x0002cdc1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0002e2ff) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0002e2ff) list_single_cale_mrui_row_pane_g

0xea33,	// (0x0002cf45) list_recal_vselct_arw_lo_pane

0xea3b,	// (0x0002cf4d) list_recal_vselct_arw_up_pane

0xea43,	// (0x0002cf55) list_recal_vselct_pane

0x9164,	// (0x00027676) btmg_button_pane

0x9170,	// (0x00027682) main_btmg_pane_g1

0x9c11,	// (0x00028123) bg_button_pane_cp044

0xecc5,	// (0x0002d1d7) btmg_button_pane_t1

0xc3d4,	// (0x0002a8e6) aid_listscroll_gen

0xa614,	// (0x00028b26) main_cntbar_detail_pane

0xe5ad,	// (0x0002cabf) list_cmail_folder_pane

0xd4a9,	// (0x0002b9bb) sp_fs_scroll_pane_cp03_ParamLimits

0x9178,	// (0x0002768a) list_single_fs_dyc_pane_cp01_ParamLimits

0x9178,	// (0x0002768a) list_single_fs_dyc_pane_cp01

0xecd3,	// (0x0002d1e5) aid_size_cmail_indent

0xecdc,	// (0x0002d1ee) list_single_dyc_row_pane_cp01

0x91c4,	// (0x000276d6) cntbar_detail_list_pane_ParamLimits

0x91c4,	// (0x000276d6) cntbar_detail_list_pane

0x91fe,	// (0x00027710) main_cntbar_detail_cont_pane_ParamLimits

0x91fe,	// (0x00027710) main_cntbar_detail_cont_pane

0x4401,	// (0x00022913) scroll_pane_cp032_ParamLimits

0x4401,	// (0x00022913) scroll_pane_cp032

0x920a,	// (0x0002771c) cntbar_detail_list_event_pane_ParamLimits

0x920a,	// (0x0002771c) cntbar_detail_list_event_pane

0x91d0,	// (0x000276e2) cntbar_detail_list_shct_pane

0xa809,	// (0x00028d1b) aid_list_gen

0xece5,	// (0x0002d1f7) aid_scroll

0xecee,	// (0x0002d200) aid_size_touch_scroll_bar

0x762f,	// (0x00025b41) aid_list_double

0x921e,	// (0x00027730) aid_list_single

0x761d,	// (0x00025b2f) aid_list_single_lg

0x9227,	// (0x00027739) aid_list_z_g_a_sm

0x922f,	// (0x00027741) aid_list_z_g_d

0x9237,	// (0x00027749) aid_txt_z_prm

0x9245,	// (0x00027757) aid_txt_z_prm_cp01

0x9253,	// (0x00027765) aid_txt_z_sec

0x9261,	// (0x00027773) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9261,	// (0x00027773) main_cntbar_detail_cont_pane_g1

0x926e,	// (0x00027780) main_cntbar_detail_cont_pane_g2_ParamLimits

0x926e,	// (0x00027780) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0002e391) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0002e391) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0002d209) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0002d217) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0002d225) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0002e396) main_cntbar_detail_cont_pane_t

0x927a,	// (0x0002778c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x927a,	// (0x0002778c) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0002d233) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0002d23c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0002e39d) cntbar_detail_list_shct_pane_g

0x928e,	// (0x000277a0) cntbar_detail_list_event_pane_g1_ParamLimits

0x928e,	// (0x000277a0) cntbar_detail_list_event_pane_g1

0x929a,	// (0x000277ac) cntbar_detail_list_event_pane_g2_ParamLimits

0x929a,	// (0x000277ac) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0002e3a2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0002e3a2) cntbar_detail_list_event_pane_g

0x9306,	// (0x00027818) cntbar_detail_list_event_pane_t1_ParamLimits

0x9306,	// (0x00027818) cntbar_detail_list_event_pane_t1

0x931b,	// (0x0002782d) cntbar_detail_list_event_pane_t2_ParamLimits

0x931b,	// (0x0002782d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0002e3af) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0002e3af) cntbar_detail_list_event_pane_t

0xc7f0,	// (0x0002ad02) cell_cntbar_detail_list_shct_pane_g1

0xaf49,	// (0x0002945b) navi_pane_mv_g3

0xa614,	// (0x00028b26) main_cntbar_detail_pane_ParamLimits

0x9c11,	// (0x00028123) main_notif_wgt_pane

0x184d,	// (0x0001fd5f) aid_tch_main_mp4_pane_g4

0x1aac,	// (0x0001ffbe) popup_slider_window_cp02

0xea29,	// (0x0002cf3b) list_recal_day_event_pane

0x91a4,	// (0x000276b6) cntbar_detail_btn_pane_ParamLimits

0x91a4,	// (0x000276b6) cntbar_detail_btn_pane

0x91b4,	// (0x000276c6) cntbar_detail_btn_pane_cp01_ParamLimits

0x91b4,	// (0x000276c6) cntbar_detail_btn_pane_cp01

0x91d0,	// (0x000276e2) cntbar_detail_list_shct_pane_ParamLimits

0x91dc,	// (0x000276ee) cntbar_detail_pane_g1_ParamLimits

0x91dc,	// (0x000276ee) cntbar_detail_pane_g1

0x91e8,	// (0x000276fa) cntbar_detail_pane_t1_ParamLimits

0x91e8,	// (0x000276fa) cntbar_detail_pane_t1

0x92a6,	// (0x000277b8) cntbar_detail_list_event_pane_g3_ParamLimits

0x92a6,	// (0x000277b8) cntbar_detail_list_event_pane_g3

0x92be,	// (0x000277d0) cntbar_detail_list_event_pane_g4_ParamLimits

0x92be,	// (0x000277d0) cntbar_detail_list_event_pane_g4

0x92d6,	// (0x000277e8) cntbar_detail_list_event_pane_g5_ParamLimits

0x92d6,	// (0x000277e8) cntbar_detail_list_event_pane_g5

0x92ee,	// (0x00027800) cntbar_detail_list_event_pane_g6_ParamLimits

0x92ee,	// (0x00027800) cntbar_detail_list_event_pane_g6

0x9330,	// (0x00027842) cntbar_detail_list_event_pane_t3_ParamLimits

0x9330,	// (0x00027842) cntbar_detail_list_event_pane_t3

0x9342,	// (0x00027854) popup_notif_wgt_window_ParamLimits

0x9342,	// (0x00027854) popup_notif_wgt_window

0x9352,	// (0x00027864) popup_submenu_window_cp01_ParamLimits

0x9352,	// (0x00027864) popup_submenu_window_cp01

0xa52d,	// (0x00028a3f) bg_popup_window_pane_cp10

0xed33,	// (0x0002d245) listscroll_notif_wgt_pane

0xed45,	// (0x0002d257) list_notif_wgt_window

0xed4e,	// (0x0002d260) scroll_pane_cp033

0x9360,	// (0x00027872) list_notif_wgt_row_pane_ParamLimits

0x9360,	// (0x00027872) list_notif_wgt_row_pane

0xed57,	// (0x0002d269) aid_size_list_notif_wgt_del

0xed64,	// (0x0002d276) list_notif_wgt_row_pane_g1

0xed70,	// (0x0002d282) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0002d291) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0002e3b6) list_notif_wgt_row_pane_g

0xed8c,	// (0x0002d29e) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0002d2b4) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0002d2c6) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0002e3bd) list_notif_wgt_row_pane_t

0xd46d,	// (0x0002b97f) list_recal_day_event_pane_g1

0xedc6,	// (0x0002d2d8) list_recal_day_event_pane_t1

0x9c11,	// (0x00028123) bg_button_pane_cp045

0x9372,	// (0x00027884) cntbar_detail_btn_pane_t1

0xc3e8,	// (0x0002a8fa) main_callh_pane_ParamLimits

0xc3e8,	// (0x0002a8fa) main_callh_pane

0x9c11,	// (0x00028123) main_coverflow0_pane

0x9c11,	// (0x00028123) main_wgtman_pane

0x8270,	// (0x00026782) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8270,	// (0x00026782) main_fs_bigclock_unlock_btn_pane

0x8b96,	// (0x000270a8) bg_button_pane_cp16

0x8ba6,	// (0x000270b8) cell_tport_appsw_pane_g3

0x9380,	// (0x00027892) cf0_flow_pane_ParamLimits

0x9380,	// (0x00027892) cf0_flow_pane

0xedd5,	// (0x0002d2e7) listscroll_cf0_pane

0xede0,	// (0x0002d2f2) main_cf0_pane_g1

0x938f,	// (0x000278a1) main_cf0_pane_t1_ParamLimits

0x938f,	// (0x000278a1) main_cf0_pane_t1

0x93a3,	// (0x000278b5) main_cf0_pane_t2_ParamLimits

0x93a3,	// (0x000278b5) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0002e3c9) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0002e3c9) main_cf0_pane_t

0xedf2,	// (0x0002d304) scroll_pane_cp11

0x93b7,	// (0x000278c9) cf0_flow_pane_g1

0x93bf,	// (0x000278d1) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0002e3ce) cf0_flow_pane_g

0x93c7,	// (0x000278d9) cf0_flow_pane_t1

0x9c11,	// (0x00028123) main_call6_pane

0x9c11,	// (0x00028123) main_calllock_pane

0x2526,	// (0x00020a38) call6_btn_grp_pane_ParamLimits

0x2526,	// (0x00020a38) call6_btn_grp_pane

0x2535,	// (0x00020a47) call6_pane_g1_ParamLimits

0x2535,	// (0x00020a47) call6_pane_g1

0x2545,	// (0x00020a57) popup_call6_1st_window_ParamLimits

0x2545,	// (0x00020a57) popup_call6_1st_window

0x2553,	// (0x00020a65) popup_call6_2nd_window_ParamLimits

0x2553,	// (0x00020a65) popup_call6_2nd_window

0x2561,	// (0x00020a73) cell_call6_btn_pane_ParamLimits

0x2561,	// (0x00020a73) cell_call6_btn_pane

0xa52d,	// (0x00028a3f) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0002d30f) popup_call6_1st_window_g1

0xee05,	// (0x0002d317) popup_call6_1st_window_g2

0xee0d,	// (0x0002d31f) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0002e3d3) popup_call6_1st_window_g

0xee15,	// (0x0002d327) popup_call6_1st_window_t1

0xee24,	// (0x0002d336) popup_call6_1st_window_t2

0xee32,	// (0x0002d344) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0002e3da) popup_call6_1st_window_t

0xa52d,	// (0x00028a3f) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0002d30f) popup_call6_2nd_window_g1

0xee05,	// (0x0002d317) popup_call6_2nd_window_g2

0xee0d,	// (0x0002d31f) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0002e3d3) popup_call6_2nd_window_g

0xee15,	// (0x0002d327) popup_call6_2nd_window_t1

0x0e1d,	// (0x0001f32f) bg_button_pane_cp15

0x2570,	// (0x00020a82) cell_call6_btn_pane_g1

0x2579,	// (0x00020a8b) cell_call6_btn_pane_t1

0x93d5,	// (0x000278e7) listscroll_wgtman_pane_ParamLimits

0x93d5,	// (0x000278e7) listscroll_wgtman_pane

0x93f1,	// (0x00027903) wgtman_btn_pane_ParamLimits

0x93f1,	// (0x00027903) wgtman_btn_pane

0xad5d,	// (0x0002926f) aid_scroll_copy1

0xee40,	// (0x0002d352) list_wgtman_pane

0x9426,	// (0x00027938) wgtman_btn_pane_g1_ParamLimits

0x9426,	// (0x00027938) wgtman_btn_pane_g1

0x944e,	// (0x00027960) wgtman_btn_pane_t1_ParamLimits

0x944e,	// (0x00027960) wgtman_btn_pane_t1

0xee4a,	// (0x0002d35c) wgtman_btn_pane_t2_ParamLimits

0xee4a,	// (0x0002d35c) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0002e3e1) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0002e3e1) wgtman_btn_pane_t

0x9485,	// (0x00027997) listrow_wgtman_pane_ParamLimits

0x9485,	// (0x00027997) listrow_wgtman_pane

0x94a1,	// (0x000279b3) listrow_wgtman_pane_g1

0x94ae,	// (0x000279c0) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0002e3e6) listrow_wgtman_pane_g

0x94cc,	// (0x000279de) listrow_wgtman_pane_t1

0x94e4,	// (0x000279f6) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0002e3eb) listrow_wgtman_pane_t

0x950a,	// (0x00027a1c) wait_bar_pane_cp09

0xee61,	// (0x0002d373) main_calllock_btn_pane

0xee6b,	// (0x0002d37d) main_calllock_pane_g1

0x9c11,	// (0x00028123) bg_button_pane_cp17

0xee77,	// (0x0002d389) main_calllock_btn_pane_g1

0xee80,	// (0x0002d392) main_calllock_btn_pane_t1

0x9c11,	// (0x00028123) main_dialer3_pane

0x9c11,	// (0x00028123) main_fmrd2_pane

0xc7f0,	// (0x0002ad02) main_fs_bigclock_unlock_btn_pane_g1

0x9524,	// (0x00027a36) main_fs_bigclock_unlock_btn_pane_t1

0x9532,	// (0x00027a44) area_fmrd2_info_pane_ParamLimits

0x9532,	// (0x00027a44) area_fmrd2_info_pane

0x9540,	// (0x00027a52) area_fmrd2_visual_pane_ParamLimits

0x9540,	// (0x00027a52) area_fmrd2_visual_pane

0x954e,	// (0x00027a60) fmrd2_indi_pane_ParamLimits

0x954e,	// (0x00027a60) fmrd2_indi_pane

0x955b,	// (0x00027a6d) area_fmrd2_visual_pane_g1

0x9563,	// (0x00027a75) area_fmrd2_visual_pane_t1

0x9573,	// (0x00027a85) area_fmrd2_visual_pane_t2

0x9583,	// (0x00027a95) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0002e3f5) area_fmrd2_visual_pane_t

0x9593,	// (0x00027aa5) area_fmrd2_info_pane_g1

0x959b,	// (0x00027aad) area_fmrd2_info_pane_t1

0x95ab,	// (0x00027abd) area_fmrd2_info_pane_t2

0x95bb,	// (0x00027acd) area_fmrd2_info_pane_t3

0x95cb,	// (0x00027add) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0002e3fc) area_fmrd2_info_pane_t

0x95d9,	// (0x00027aeb) fmrd2_indi_pane_t1

0x95e9,	// (0x00027afb) fmrd2_indi_pane_t2

0x95f9,	// (0x00027b0b) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0002e405) fmrd2_indi_pane_t

0xe0b4,	// (0x0002c5c6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0b4,	// (0x0002c5c6) list_single_fs_bigclock_indicator_pane_g5

0xe165,	// (0x0002c677) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe165,	// (0x0002c677) list_single_fs_bigclock_indicator_pane_t5

0x8d4e,	// (0x00027260) aid_cell_bcale_month_pane_ParamLimits

0x8d4e,	// (0x00027260) aid_cell_bcale_month_pane

0x8d6c,	// (0x0002727e) bcale_month_pane_ParamLimits

0x8d6c,	// (0x0002727e) bcale_month_pane

0x8d8a,	// (0x0002729c) bcale_preview_pane_ParamLimits

0x8d8a,	// (0x0002729c) bcale_preview_pane

0xec5d,	// (0x0002d16f) list_single_fs_bigclock_pane_t1_ParamLimits

0xec7c,	// (0x0002d18e) list_single_fs_bigclock_pane_t2_ParamLimits

0xec7c,	// (0x0002d18e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0002e387) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0002e387) list_single_fs_bigclock_pane_t

0x951c,	// (0x00027a2e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0002e3f0) main_fs_bigclock_unlock_btn_pane_g

0x9607,	// (0x00027b19) aid_dia3_key_size_ParamLimits

0x9607,	// (0x00027b19) aid_dia3_key_size

0x9613,	// (0x00027b25) aid_dia3_listrow_size_ParamLimits

0x9613,	// (0x00027b25) aid_dia3_listrow_size

0x9623,	// (0x00027b35) dia3_keypad_fun_pane_ParamLimits

0x9623,	// (0x00027b35) dia3_keypad_fun_pane

0x9635,	// (0x00027b47) dia3_keypad_num_pane_ParamLimits

0x9635,	// (0x00027b47) dia3_keypad_num_pane

0x9647,	// (0x00027b59) dia3_listscroll_pane_ParamLimits

0x9647,	// (0x00027b59) dia3_listscroll_pane

0x9655,	// (0x00027b67) dia3_numentry_pane_ParamLimits

0x9655,	// (0x00027b67) dia3_numentry_pane

0xee8f,	// (0x0002d3a1) dia3_list_pane

0xee9a,	// (0x0002d3ac) scroll_pane_cp12

0x9c11,	// (0x00028123) bg_dia3_numentry_pane

0x9663,	// (0x00027b75) dia3_numentry_pane_t1

0x9672,	// (0x00027b84) cell_dia3_key_num_pane

0x967a,	// (0x00027b8c) cell_dia3_key0_fun_pane_ParamLimits

0x967a,	// (0x00027b8c) cell_dia3_key0_fun_pane

0x9687,	// (0x00027b99) cell_dia3_key1_fun_pane_ParamLimits

0x9687,	// (0x00027b99) cell_dia3_key1_fun_pane

0x9694,	// (0x00027ba6) dia3_listrow_pane

0xde07,	// (0x0002c319) bg_dia3_numentry_pane_g1

0x9c11,	// (0x00028123) bg_button_pane_cp21

0xeea5,	// (0x0002d3b7) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0002d3c5) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0002d3d4) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0002d3e3) cell_dia3_key_num_pane_t4

0x0003,

0x0b10,	// (0x0001f022) cell_dia3_key_num_pane_t

0x9c11,	// (0x00028123) bg_button_pane_cp19

0x96a1,	// (0x00027bb3) cell_dia3_key0_fun_pane_g1

0x9c11,	// (0x00028123) bg_button_pane_cp20

0x96a9,	// (0x00027bbb) cell_dia3_key1_fun_pane_g1

0x96b1,	// (0x00027bc3) area_left_week_number_pane

0x96c4,	// (0x00027bd6) area_top_day_name_pane

0x96d2,	// (0x00027be4) frame_month_view_pane

0xeee0,	// (0x0002d3f2) grid_month_view_pane

0x96e7,	// (0x00027bf9) cell_top_day_name_pane_ParamLimits

0x96e7,	// (0x00027bf9) cell_top_day_name_pane

0x9701,	// (0x00027c13) cell_area_left_week_number_pane_ParamLimits

0x9701,	// (0x00027c13) cell_area_left_week_number_pane

0x9724,	// (0x00027c36) cell_month_view_pane_ParamLimits

0x9724,	// (0x00027c36) cell_month_view_pane

0xeeee,	// (0x0002d400) frm_month_g1

0x9750,	// (0x00027c62) frm_month_g2

0x9761,	// (0x00027c73) frm_month_g3

0x9772,	// (0x00027c84) frm_month_g4

0x9783,	// (0x00027c95) frm_month_g5

0x9796,	// (0x00027ca8) frm_month_g6

0x97a9,	// (0x00027cbb) frm_month_g7

0xeefb,	// (0x0002d40d) frm_month_g8

0x97bc,	// (0x00027cce) frm_month_g9

0x97c9,	// (0x00027cdb) frm_month_g10

0x97d6,	// (0x00027ce8) frm_month_g11

0x97e3,	// (0x00027cf5) frm_month_g12

0x97f0,	// (0x00027d02) frm_month_g13

0x97fd,	// (0x00027d0f) frm_month_g14

0x980c,	// (0x00027d1e) frm_month_g15

0x981b,	// (0x00027d2d) frm_month_g16

0x000f,

0xfefa,	// (0x0002e40c) frm_month_g

0xef08,	// (0x0002d41a) cell_top_day_name_pane_t1

0x982a,	// (0x00027d3c) cell_area_left_week_number_pane_g1

0x9839,	// (0x00027d4b) cell_area_left_week_number_pane_t1

0xca35,	// (0x0002af47) cell_month_view_pane_g1

0x984f,	// (0x00027d61) cell_month_view_pane_t1

0x9c11,	// (0x00028123) main_fps_pane

0xe382,	// (0x0002c894) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe382,	// (0x0002c894) cmail_ddmenu_btn02_pane_cp1

0xe39e,	// (0x0002c8b0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe39e,	// (0x0002c8b0) cmail_ddmenu_btn02_pane_cp2

0x9048,	// (0x0002755a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9048,	// (0x0002755a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0002e33a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0002e33a) cmail_ddmenu_btn02_pane_g

0x9066,	// (0x00027578) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9066,	// (0x00027578) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0002e33f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0002e33f) cmail_ddmenu_btn02_pane_t

0x9865,	// (0x00027d77) fps_text_pane_ParamLimits

0x9865,	// (0x00027d77) fps_text_pane

0x9872,	// (0x00027d84) main_fps_pane_g1_ParamLimits

0x9872,	// (0x00027d84) main_fps_pane_g1

0x9880,	// (0x00027d92) wait_bar_pane_cp010_ParamLimits

0x9880,	// (0x00027d92) wait_bar_pane_cp010

0x988c,	// (0x00027d9e) fps_text_pane_t1_ParamLimits

0x988c,	// (0x00027d9e) fps_text_pane_t1

0x696a,	// (0x00024e7c) cam4_image_uncrop_pane_g1

0x6973,	// (0x00024e85) cam4_image_uncrop_pane_g2

0x697c,	// (0x00024e8e) cam4_image_uncrop_pane_g3

0x6985,	// (0x00024e97) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0002ddfc) cam4_image_uncrop_pane_g

0x9694,	// (0x00027ba6) dia3_listrow_pane_ParamLimits

0x9c11,	// (0x00028123) main_phob2_pane

0x8b78,	// (0x0002708a) cell_tport_appsw_pane_cp02_ParamLimits

0x8b78,	// (0x0002708a) cell_tport_appsw_pane_cp02

0x8b87,	// (0x00027099) cell_tport_appsw_pane_cp03_ParamLimits

0x8b87,	// (0x00027099) cell_tport_appsw_pane_cp03

0x9c11,	// (0x00028123) phob2_contact_card_pane

0x9c11,	// (0x00028123) phob2_listscroll_pane

0xef1b,	// (0x0002d42d) phob2_list_pane

0xef23,	// (0x0002d435) scroll_pane_cp034

0x98a5,	// (0x00027db7) phob2_cc_data_pane_ParamLimits

0x98a5,	// (0x00027db7) phob2_cc_data_pane

0x98bf,	// (0x00027dd1) phob2_cc_listscroll_pane_ParamLimits

0x98bf,	// (0x00027dd1) phob2_cc_listscroll_pane

0x98d9,	// (0x00027deb) list_double_large_graphic_phob2_pane_ParamLimits

0x98d9,	// (0x00027deb) list_double_large_graphic_phob2_pane

0x98f8,	// (0x00027e0a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98f8,	// (0x00027e0a) list_double_large_graphic_phob2_pane_g1

0x990e,	// (0x00027e20) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x990e,	// (0x00027e20) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1b,	// (0x0002e42d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1b,	// (0x0002e42d) list_double_large_graphic_phob2_pane_g

0x991a,	// (0x00027e2c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x991a,	// (0x00027e2c) list_double_large_graphic_phob2_pane_t1

0x9930,	// (0x00027e42) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9930,	// (0x00027e42) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff20,	// (0x0002e432) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff20,	// (0x0002e432) list_double_large_graphic_phob2_pane_t

0x9c11,	// (0x00028123) list_highlight_pane_cp024

0x9945,	// (0x00027e57) phob2_cc_button_pane

0x994d,	// (0x00027e5f) phob2_cc_data_pane_g1_ParamLimits

0x994d,	// (0x00027e5f) phob2_cc_data_pane_g1

0x9959,	// (0x00027e6b) phob2_cc_data_pane_g2_ParamLimits

0x9959,	// (0x00027e6b) phob2_cc_data_pane_g2

0x0001,

0xff25,	// (0x0002e437) phob2_cc_data_pane_g_ParamLimits

0xff25,	// (0x0002e437) phob2_cc_data_pane_g

0x9965,	// (0x00027e77) phob2_cc_data_pane_t1_ParamLimits

0x9965,	// (0x00027e77) phob2_cc_data_pane_t1

0x9977,	// (0x00027e89) phob2_cc_data_pane_t2_ParamLimits

0x9977,	// (0x00027e89) phob2_cc_data_pane_t2

0x9989,	// (0x00027e9b) phob2_cc_data_pane_t3_ParamLimits

0x9989,	// (0x00027e9b) phob2_cc_data_pane_t3

0x0002,

0xff2a,	// (0x0002e43c) phob2_cc_data_pane_t_ParamLimits

0xff2a,	// (0x0002e43c) phob2_cc_data_pane_t

0xef2b,	// (0x0002d43d) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0002d43d) phob2_cc_list_pane

0xd803,	// (0x0002bd15) scroll_pane_cp035_ParamLimits

0xd803,	// (0x0002bd15) scroll_pane_cp035

0xa614,	// (0x00028b26) bg_button_pane_cp033

0xef37,	// (0x0002d449) phob2_cc_button_pane_g1

0xef43,	// (0x0002d455) phob2_cc_button_pane_t1

0xef58,	// (0x0002d46a) phob2_cc_button_pane_t2

0x0001,

0x0b50,	// (0x0001f062) phob2_cc_button_pane_t

0x999b,	// (0x00027ead) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x999b,	// (0x00027ead) list_double_large_graphic_phob2_cc_pane

0x9a0f,	// (0x00027f21) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a0f,	// (0x00027f21) list_double_large_graphic_phob2_cc_pane_g1

0x9a20,	// (0x00027f32) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a20,	// (0x00027f32) list_double_large_graphic_phob2_cc_pane_g2

0x9a2c,	// (0x00027f3e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a2c,	// (0x00027f3e) list_double_large_graphic_phob2_cc_pane_g3

0x9a38,	// (0x00027f4a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a38,	// (0x00027f4a) list_double_large_graphic_phob2_cc_pane_g4

0xef6a,	// (0x0002d47c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xef6a,	// (0x0002d47c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0002e443) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0002e443) list_double_large_graphic_phob2_cc_pane_g

0x9a44,	// (0x00027f56) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a44,	// (0x00027f56) list_double_large_graphic_phob2_cc_pane_t1

0x9a6d,	// (0x00027f7f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a6d,	// (0x00027f7f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0002e44e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0002e44e) list_double_large_graphic_phob2_cc_pane_t

0xef76,	// (0x0002d488) list_highlight_pane_cp025_ParamLimits

0xef76,	// (0x0002d488) list_highlight_pane_cp025

0xa614,	// (0x00028b26) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0002d449) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0002d455) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0002d46a) phob2_cc_button_pane_t2_ParamLimits

0x0b50,	// (0x0001f062) phob2_cc_button_pane_t_ParamLimits

0x25fb,	// (0x00020b0d) popup_wgtman_window

0xd34d,	// (0x0002b85f) scroll_pane_cp038

0x940e,	// (0x00027920) wgtman_btn_pane_cp_01_ParamLimits

0x940e,	// (0x00027920) wgtman_btn_pane_cp_01

0xef84,	// (0x0002d496) wgtman_content_pane

0xef8d,	// (0x0002d49f) wgtman_heading_pane

0x9c11,	// (0x00028123) bg_heading_pane_cp02

0xef96,	// (0x0002d4a8) wgtman_heading_pane_g1

0xef9e,	// (0x0002d4b0) wgtman_heading_pane_t1

0xefac,	// (0x0002d4be) scroll_pane_cp036

0xefb4,	// (0x0002d4c6) wgtman_list_pane

0xebcc,	// (0x0002d0de) wgtman_list_pane_t1_ParamLimits

0xebcc,	// (0x0002d0de) wgtman_list_pane_t1

0x1d61,	// (0x00020273) cam4_grid_pane

0x717e,	// (0x00025690) bg_button_pane_cp015_ParamLimits

0x7190,	// (0x000256a2) bg_button_pane_cp016_ParamLimits

0x71a3,	// (0x000256b5) bg_button_pane_cp017_ParamLimits

0x71f9,	// (0x0002570b) popup_vitu2_query_window_g3_ParamLimits

0x71f9,	// (0x0002570b) popup_vitu2_query_window_g3

0x72b4,	// (0x000257c6) popup_vitu2_query_window_t6_ParamLimits

0x72b4,	// (0x000257c6) popup_vitu2_query_window_t6

0x72df,	// (0x000257f1) popup_vitu2_query_window_t7_ParamLimits

0x72df,	// (0x000257f1) popup_vitu2_query_window_t7

0xebe7,	// (0x0002d0f9) cam4_grid_pane_g1

0xebf0,	// (0x0002d102) cam4_grid_pane_g2

0xefbc,	// (0x0002d4ce) cam4_grid_pane_g3

0xefc5,	// (0x0002d4d7) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0002e453) cam4_grid_pane_g

0x319e,	// (0x000216b0) aid_placing_vt_slider_lsc_ParamLimits

0x34de,	// (0x000219f0) vidtel_button_pane_ParamLimits

0x34de,	// (0x000219f0) vidtel_button_pane

0x9c11,	// (0x00028123) bg_button_pane_cp034

0xefd0,	// (0x0002d4e2) vidtel_button_pane_g1

0xefd8,	// (0x0002d4ea) vidtel_button_pane_t1

0xd44f,	// (0x0002b961) aid_size_vtel_slider_touch

0xd803,	// (0x0002bd15) scroll_pane_cp039

0x7fad,	// (0x000264bf) ncim_query_button_pane_cp01_ParamLimits

0x7fcc,	// (0x000264de) ncimui_query_pane_g1_ParamLimits

0xa614,	// (0x00028b26) input_focus_pane_cp012_ParamLimits

0xde4d,	// (0x0002c35f) ncim_query_entry_pane_t1_ParamLimits

0xd803,	// (0x0002bd15) scroll_pane_cp039_ParamLimits

0xae34,	// (0x00029346) navi_pane_bcale_mc_g1

0xae3c,	// (0x0002934e) navi_pane_bcale_mc_t1

0xe3d2,	// (0x0002c8e4) main_sp_fs_email_pane_g1

0xe3de,	// (0x0002c8f0) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0002e1f7) main_sp_fs_email_pane_g

0xe8bb,	// (0x0002cdcd) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8bb,	// (0x0002cdcd) list_single_cale_mrui_row_pane_g3

0x9086,	// (0x00027598) list_single_recal_day_pane_g5_event_pane

0xea9a,	// (0x0002cfac) list_single_recal_day_pane_g7

0xefee,	// (0x0002d500) list_recal_day_event_pane_cp01

0xeff7,	// (0x0002d509) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0002d511) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0002d519) list_recal_vselct_pane_cp01

0xd46d,	// (0x0002b97f) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0002d523) list_recal_day_event_pane_cp01_t1

0xeaa2,	// (0x0002cfb4) list_single_recal_day_pane_t1_ParamLimits

0xeab4,	// (0x0002cfc6) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0002e34f) list_single_recal_day_pane_t_ParamLimits

0xa289,	// (0x0002879b) bg_notes_pane_ParamLimits

0xa338,	// (0x0002884a) list_notes_pane_ParamLimits

0x287f,	// (0x00020d91) scroll_pane_cp06_ParamLimits

0xa35a,	// (0x0002886c) main_notes_pane_ParamLimits

0xa614,	// (0x00028b26) main_welc_pane

0x9aa5,	// (0x00027fb7) main_welc_body_pane_ParamLimits

0x9aa5,	// (0x00027fb7) main_welc_body_pane

0x9abe,	// (0x00027fd0) main_welc_opti_pane_ParamLimits

0x9abe,	// (0x00027fd0) main_welc_opti_pane

0x9afd,	// (0x0002800f) main_welc_pane_t1_ParamLimits

0x9afd,	// (0x0002800f) main_welc_pane_t1

0x9b59,	// (0x0002806b) main_welc_body_row_pane_ParamLimits

0x9b59,	// (0x0002806b) main_welc_body_row_pane

0xd0ee,	// (0x0002b600) main_welc_opti_row_pane_ParamLimits

0xd0ee,	// (0x0002b600) main_welc_opti_row_pane

0xf01f,	// (0x0002d531) main_welc_opti_row_pane_g1

0x9b82,	// (0x00028094) main_welc_opti_row_pane_t1

0xf027,	// (0x0002d539) main_welc_body_row_pane_t1

0xed3d,	// (0x0002d24f) popup_notif_wgt_heading_pane

0xed57,	// (0x0002d269) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0002d276) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0002d282) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0002d291) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0002e3b6) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0002d29e) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0002d2b4) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0002d2c6) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0002e3bd) list_notif_wgt_row_pane_t_ParamLimits

0x94a1,	// (0x000279b3) listrow_wgtman_pane_g1_ParamLimits

0x94ae,	// (0x000279c0) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0002e3e6) listrow_wgtman_pane_g_ParamLimits

0x94cc,	// (0x000279de) listrow_wgtman_pane_t1_ParamLimits

0x94e4,	// (0x000279f6) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0002e3eb) listrow_wgtman_pane_t_ParamLimits

0x950a,	// (0x00027a1c) wait_bar_pane_cp09_ParamLimits

0x9c11,	// (0x00028123) bg_popup_heading_pane_cp02

0xf036,	// (0x0002d548) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0002d550) popup_notif_wgt_heading_pane_t1

0x9c11,	// (0x00028123) main_vids_pane

0x9c11,	// (0x00028123) vids_listscroll_pane

0x9b91,	// (0x000280a3) scroll_pane_cp040

0x9c11,	// (0x00028123) vids_list_pane

0x9b9c,	// (0x000280ae) vids_list_double_pane_ParamLimits

0x9b9c,	// (0x000280ae) vids_list_double_pane

0x9bb4,	// (0x000280c6) vids_list_double_pane_g1

0x9bbd,	// (0x000280cf) vids_list_double_pane_t1

0x9bcd,	// (0x000280df) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0002e46a) vids_list_double_pane_t

0x1273,	// (0x0001f785) main_ncimui_pane_ParamLimits

0x7e04,	// (0x00026316) main_ncimui_pane_g1_ParamLimits

0x7e10,	// (0x00026322) main_ncimui_pane_g2_ParamLimits

0x7e10,	// (0x00026322) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0002e0f8) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0002e0f8) main_ncimui_pane_g

0x9ad7,	// (0x00027fe9) main_welc_pane_g1_ParamLimits

0x9ad7,	// (0x00027fe9) main_welc_pane_g1

0x9ae3,	// (0x00027ff5) main_welc_pane_g2_ParamLimits

0x9ae3,	// (0x00027ff5) main_welc_pane_g2

0x0002,

0xff4a,	// (0x0002e45c) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0002e45c) main_welc_pane_g

0xa289,	// (0x0002879b) listscroll_mce_pane_ParamLimits

0xaf89,	// (0x0002949b) wait_bar_pane_cp10

0xc3dc,	// (0x0002a8ee) main_cale_day_pane_ParamLimits

0xc3dc,	// (0x0002a8ee) main_cale_week_pane_ParamLimits

0xa289,	// (0x0002879b) main_messa_pane_ParamLimits

0x631b,	// (0x0002482d) main_clock2_btn_pane_ParamLimits

0x631b,	// (0x0002482d) main_clock2_btn_pane

0xcc31,	// (0x0002b143) main_clock2_btn_pane_cp01_ParamLimits

0xcc31,	// (0x0002b143) main_clock2_btn_pane_cp01

0xe847,	// (0x0002cd59) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0002d2fc) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0002e3c4) main_cf0_pane_g

0x96b1,	// (0x00027bc3) area_left_week_number_pane_ParamLimits

0x96c4,	// (0x00027bd6) area_top_day_name_pane_ParamLimits

0x96d2,	// (0x00027be4) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0002d3f2) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0002d400) frm_month_g1_ParamLimits

0x9750,	// (0x00027c62) frm_month_g2_ParamLimits

0x9761,	// (0x00027c73) frm_month_g3_ParamLimits

0x9772,	// (0x00027c84) frm_month_g4_ParamLimits

0x9783,	// (0x00027c95) frm_month_g5_ParamLimits

0x9796,	// (0x00027ca8) frm_month_g6_ParamLimits

0x97a9,	// (0x00027cbb) frm_month_g7_ParamLimits

0xeefb,	// (0x0002d40d) frm_month_g8_ParamLimits

0x97bc,	// (0x00027cce) frm_month_g9_ParamLimits

0x97c9,	// (0x00027cdb) frm_month_g10_ParamLimits

0x97d6,	// (0x00027ce8) frm_month_g11_ParamLimits

0x97e3,	// (0x00027cf5) frm_month_g12_ParamLimits

0x97f0,	// (0x00027d02) frm_month_g13_ParamLimits

0x97fd,	// (0x00027d0f) frm_month_g14_ParamLimits

0x980c,	// (0x00027d1e) frm_month_g15_ParamLimits

0x981b,	// (0x00027d2d) frm_month_g16_ParamLimits

0xfefa,	// (0x0002e40c) frm_month_g_ParamLimits

0xef08,	// (0x0002d41a) cell_top_day_name_pane_t1_ParamLimits

0x982a,	// (0x00027d3c) cell_area_left_week_number_pane_g1_ParamLimits

0x9839,	// (0x00027d4b) cell_area_left_week_number_pane_t1_ParamLimits

0xca35,	// (0x0002af47) cell_month_view_pane_g1_ParamLimits

0x984f,	// (0x00027d61) cell_month_view_pane_t1_ParamLimits

0xa281,	// (0x00028793) main_clock2_btn_pane_g1

0xf04c,	// (0x0002d55e) main_clock2_btn_pane_t1

0xa614,	// (0x00028b26) listscroll_cmail_pane_ParamLimits

0xe3d2,	// (0x0002c8e4) main_sp_fs_email_pane_g1_ParamLimits

0xe3de,	// (0x0002c8f0) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0002e1f7) main_sp_fs_email_pane_g_ParamLimits

0xea0a,	// (0x0002cf1c) list_recal_day_pane_ParamLimits

0xea1b,	// (0x0002cf2d) mian_recal_day_pane_t1

0x889f,	// (0x00026db1) list_single_dyc_row_text_pane_t4_ParamLimits

0x889f,	// (0x00026db1) list_single_dyc_row_text_pane_t4

0x88d6,	// (0x00026de8) list_single_dyc_row_text_pane_t5_ParamLimits

0x88d6,	// (0x00026de8) list_single_dyc_row_text_pane_t5

0xe480,	// (0x0002c992) list_single_dyc_row_text_pane_t6_ParamLimits

0xe480,	// (0x0002c992) list_single_dyc_row_text_pane_t6

0x4327,	// (0x00022839) aid_mgn_list_cale_time_pane

0x1273,	// (0x0001f785) main_gallery2_pane_ParamLimits

0xcc47,	// (0x0002b159) main_clock2_pane_cp01_t1

0xcc55,	// (0x0002b167) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0002dcce) main_clock2_pane_cp01_t

0x2ba6,	// (0x000210b8) cale_week_scroll_pane_g16_ParamLimits

0x2ba6,	// (0x000210b8) cale_week_scroll_pane_g16

0xa52d,	// (0x00028a3f) vorec_slider_pane

0xefd8,	// (0x0002d4ea) vidtel_button_pane_t1_ParamLimits

0x90e1,	// (0x000275f3) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90e1,	// (0x000275f3) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90ee,	// (0x00027600) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90ee,	// (0x00027600) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0002e372) main_fs_bigclock_clock_pane_g_ParamLimits

0x90fa,	// (0x0002760c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x910d,	// (0x0002761f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0002e37b) main_fs_bigclock_clock_pane_t_ParamLimits

0x5bc0,	// (0x000240d2) main_mup3_lyrics_pane_ParamLimits

0x5bc0,	// (0x000240d2) main_mup3_lyrics_pane

0x9bdb,	// (0x000280ed) main_mup3_lyrics_pane_t1_ParamLimits

0x9bdb,	// (0x000280ed) main_mup3_lyrics_pane_t1

0x1837,	// (0x0001fd49) aid_main_mp4_pane_t1_area

0x1841,	// (0x0001fd53) aid_main_mp4_pane_t2_area

0x1940,	// (0x0001fe52) main_mp4_pane_g7_ParamLimits

0x1940,	// (0x0001fe52) main_mp4_pane_g7

0x194c,	// (0x0001fe5e) main_mp4_pane_g8_ParamLimits

0x194c,	// (0x0001fe5e) main_mp4_pane_g8

0x68b2,	// (0x00024dc4) aid_call6_pane_g1_size

0x99e1,	// (0x00027ef3) list_double_large_graphic_phob2_other_pane_ParamLimits

0x99e1,	// (0x00027ef3) list_double_large_graphic_phob2_other_pane

0xa91d,	// (0x00028e2f) list_double_large_graphic_phob2_other_pane_g1

0x9c11,	// (0x00028123) list_highlight_pane_cp026

0xa614,	// (0x00028b26) main_welc_pane_ParamLimits

0x85e7,	// (0x00026af9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x85e7,	// (0x00026af9) main_sp_fs_ctrlbar_pane_g3

0x85ff,	// (0x00026b11) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x85ff,	// (0x00026b11) main_sp_fs_ctrlbar_pane_g4

0x8631,	// (0x00026b43) toolbar2_fixed_button_pane_cp01

0x863c,	// (0x00026b4e) toolbar2_fixed_button_pane_cp02

0x8647,	// (0x00026b59) toolbar2_fixed_button_pane_cp03

0x9a96,	// (0x00027fa8) list_welc_entry_pane_ParamLimits

0x9a96,	// (0x00027fa8) list_welc_entry_pane

0x9af1,	// (0x00028003) main_welc_pane_g3_ParamLimits

0x9af1,	// (0x00028003) main_welc_pane_g3

0x9b17,	// (0x00028029) main_welc_pane_t2_ParamLimits

0x9b17,	// (0x00028029) main_welc_pane_t2

0x9b2b,	// (0x0002803d) main_welc_pane_t3_ParamLimits

0x9b2b,	// (0x0002803d) main_welc_pane_t3

0x0002,

0xff51,	// (0x0002e463) main_welc_pane_t_ParamLimits

0xff51,	// (0x0002e463) main_welc_pane_t

0x9b3d,	// (0x0002804f) welc_button_pane_ParamLimits

0x9b3d,	// (0x0002804f) welc_button_pane

0x9b4b,	// (0x0002805d) welc_service_logo_pane_ParamLimits

0x9b4b,	// (0x0002805d) welc_service_logo_pane

0xf05a,	// (0x0002d56c) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0002d56c) list_single_welc_entry_pane

0xf06b,	// (0x0002d57d) list_single_welc_entry_pane_g1

0xf073,	// (0x0002d585) list_single_welc_entry_pane_t1

0xf081,	// (0x0002d593) list_single_welc_entry_pane_t2

0x0001,

0x0b81,	// (0x0001f093) list_single_welc_entry_pane_t

0x9c11,	// (0x00028123) bg_button_pane_cp035

0xf08f,	// (0x0002d5a1) welc_button_pane_t1

0xf09d,	// (0x0002d5af) welc_service_logo_pane_g1

0xf0a6,	// (0x0002d5b8) welc_service_logo_pane_g2

0x0001,

0x0b86,	// (0x0001f098) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
