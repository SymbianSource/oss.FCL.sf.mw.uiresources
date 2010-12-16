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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000439bd };

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
0x1051,	// (0x00044a0e) Screen

0x105d,	// (0x00044a1a) application_window

0x1099,	// (0x00044a56) area_bottom_pane_ParamLimits

0x1099,	// (0x00044a56) area_bottom_pane

0x10d2,	// (0x00044a8f) area_top_pane_ParamLimits

0x10d2,	// (0x00044a8f) area_top_pane

0xa13e,	// (0x0004dafb) call_video_uplink_pane_ParamLimits

0xa13e,	// (0x0004dafb) call_video_uplink_pane

0x1160,	// (0x00044b1d) main_pane_ParamLimits

0x1160,	// (0x00044b1d) main_pane

0xc926,	// (0x000502e3) context_pane

0x3d16,	// (0x000476d3) navi_pane

0x3d48,	// (0x00047705) popup_cale_events_window_ParamLimits

0x3d48,	// (0x00047705) popup_cale_events_window

0xc939,	// (0x000502f6) popup_mup_playback_window

0x3d60,	// (0x0004771d) signal_pane

0xa911,	// (0x0004e2ce) main_browser_pane

0xab56,	// (0x0004e513) main_burst_pane

0x3a76,	// (0x00047433) main_calc_pane

0xc8c6,	// (0x00050283) main_cale_day_pane

0x1525,	// (0x00044ee2) main_cale_month_pane

0xc8c6,	// (0x00050283) main_cale_week_pane

0xab56,	// (0x0004e513) main_call_pane

0xa57d,	// (0x0004df3a) main_call_poc_pane

0xab56,	// (0x0004e513) main_camera_pane

0xab56,	// (0x0004e513) main_chi_dic_pane

0xb369,	// (0x0004ed26) main_clock_pane

0xa57d,	// (0x0004df3a) main_fmradio_pane

0xab56,	// (0x0004e513) main_graph_messa_pane

0xa57d,	// (0x0004df3a) main_help_pane

0xa911,	// (0x0004e2ce) main_im_pane

0xa7d8,	// (0x0004e195) main_image_pane_ParamLimits

0xa7d8,	// (0x0004e195) main_image_pane

0xa57d,	// (0x0004df3a) main_location2_pane

0xab56,	// (0x0004e513) main_location_pane

0xa7d8,	// (0x0004e195) main_messa_pane

0xa57d,	// (0x0004df3a) main_mp2_pane

0xab56,	// (0x0004e513) main_mp_pane

0xa57d,	// (0x0004df3a) main_msg_pane

0xa57d,	// (0x0004df3a) main_mup_eq_pane

0xa57d,	// (0x0004df3a) main_mup_pane

0xa911,	// (0x0004e2ce) main_notes_pane

0xa57d,	// (0x0004df3a) main_pec_pane

0xa57d,	// (0x0004df3a) main_phob_pane

0xa57d,	// (0x0004df3a) main_pinb_pane

0xa57d,	// (0x0004df3a) main_postcard_pane

0xa57d,	// (0x0004df3a) main_qdial_pane

0xab56,	// (0x0004e513) main_skin_pane

0xa57d,	// (0x0004df3a) main_smil2_pane

0xab56,	// (0x0004e513) main_smil_pane

0xab56,	// (0x0004e513) main_video_pane

0xab56,	// (0x0004e513) main_video_tele_pane

0xa7d8,	// (0x0004e195) main_viewer_pane_ParamLimits

0xa7d8,	// (0x0004e195) main_viewer_pane

0xab56,	// (0x0004e513) main_vorec_pane

0x3aca,	// (0x00047487) popup_blid_sat_info_window_ParamLimits

0x3aca,	// (0x00047487) popup_blid_sat_info_window

0x3b22,	// (0x000474df) popup_dyc_status_message_window_ParamLimits

0x3b22,	// (0x000474df) popup_dyc_status_message_window

0x3b3c,	// (0x000474f9) popup_grid_large_graphic_window_ParamLimits

0x3b3c,	// (0x000474f9) popup_grid_large_graphic_window

0x3bf8,	// (0x000475b5) popup_loc_request_window_ParamLimits

0x3bf8,	// (0x000475b5) popup_loc_request_window

0x3cee,	// (0x000476ab) popup_wml_address_window_ParamLimits

0x3cee,	// (0x000476ab) popup_wml_address_window

0x38b0,	// (0x0004726d) call_muted_g1

0x35a6,	// (0x00046f63) popup_call_audio_conf_window_ParamLimits

0x35a6,	// (0x00046f63) popup_call_audio_conf_window

0x38c4,	// (0x00047281) popup_call_audio_first_window_ParamLimits

0x38c4,	// (0x00047281) popup_call_audio_first_window

0x393a,	// (0x000472f7) popup_call_audio_in_window_ParamLimits

0x393a,	// (0x000472f7) popup_call_audio_in_window

0x3976,	// (0x00047333) popup_call_audio_out_window_ParamLimits

0x3976,	// (0x00047333) popup_call_audio_out_window

0x39b0,	// (0x0004736d) popup_call_audio_second_window_ParamLimits

0x39b0,	// (0x0004736d) popup_call_audio_second_window

0x3a06,	// (0x000473c3) popup_call_audio_wait_window_ParamLimits

0x3a06,	// (0x000473c3) popup_call_audio_wait_window

0x3a3b,	// (0x000473f8) popup_number_entry_window_ParamLimits

0x3a3b,	// (0x000473f8) popup_number_entry_window

0xa16a,	// (0x0004db27) bg_popup_call_pane_cp05_ParamLimits

0xa16a,	// (0x0004db27) bg_popup_call_pane_cp05

0xa18a,	// (0x0004db47) popup_number_entry_window_t1

0xa19d,	// (0x0004db5a) popup_number_entry_window_t2

0xa1af,	// (0x0004db6c) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000529da) popup_number_entry_window_t

0xa1c1,	// (0x0004db7e) text_title_cp2

0xa1d4,	// (0x0004db91) bg_popup_call_pane_cp_ParamLimits

0xa1d4,	// (0x0004db91) bg_popup_call_pane_cp

0xa1e2,	// (0x0004db9f) call_thumbnail_pane

0xa1ea,	// (0x0004dba7) popup_call_audio_in_window_g1_ParamLimits

0xa1ea,	// (0x0004dba7) popup_call_audio_in_window_g1

0xa1f6,	// (0x0004dbb3) popup_call_audio_in_window_g2_ParamLimits

0xa1f6,	// (0x0004dbb3) popup_call_audio_in_window_g2

0xa202,	// (0x0004dbbf) popup_call_audio_in_window_g3_ParamLimits

0xa202,	// (0x0004dbbf) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000529e3) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000529e3) popup_call_audio_in_window_g

0xa20e,	// (0x0004dbcb) popup_call_audio_in_window_t1_ParamLimits

0xa20e,	// (0x0004dbcb) popup_call_audio_in_window_t1

0xa22a,	// (0x0004dbe7) popup_call_audio_in_window_t2_ParamLimits

0xa22a,	// (0x0004dbe7) popup_call_audio_in_window_t2

0xa246,	// (0x0004dc03) popup_call_audio_in_window_t3_ParamLimits

0xa246,	// (0x0004dc03) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000529ea) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000529ea) popup_call_audio_in_window_t

0xa1d4,	// (0x0004db91) bg_popup_call_pane_cp01_ParamLimits

0xa1d4,	// (0x0004db91) bg_popup_call_pane_cp01

0xa1e2,	// (0x0004db9f) call_thumbnail_pane_cp02

0xa259,	// (0x0004dc16) call_type_pane_cp022

0xa261,	// (0x0004dc1e) popup_call_audio_out_window_g1_ParamLimits

0xa261,	// (0x0004dc1e) popup_call_audio_out_window_g1

0xa273,	// (0x0004dc30) popup_call_audio_out_window_g2_ParamLimits

0xa273,	// (0x0004dc30) popup_call_audio_out_window_g2

0xa27f,	// (0x0004dc3c) popup_call_audio_out_window_g3_ParamLimits

0xa27f,	// (0x0004dc3c) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000529f1) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000529f1) popup_call_audio_out_window_g

0xa291,	// (0x0004dc4e) popup_call_audio_out_window_t1_ParamLimits

0xa291,	// (0x0004dc4e) popup_call_audio_out_window_t1

0xa2a9,	// (0x0004dc66) popup_call_audio_out_window_t2_ParamLimits

0xa2a9,	// (0x0004dc66) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000529f8) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000529f8) popup_call_audio_out_window_t

0xa2be,	// (0x0004dc7b) bg_popup_call_pane_ParamLimits

0xa2be,	// (0x0004dc7b) bg_popup_call_pane

0x12b5,	// (0x00044c72) call_thumbnail_pane_cp_ParamLimits

0x12b5,	// (0x00044c72) call_thumbnail_pane_cp

0xa342,	// (0x0004dcff) call_type_pane_cp01_ParamLimits

0xa342,	// (0x0004dcff) call_type_pane_cp01

0xa386,	// (0x0004dd43) popup_call_audio_first_window_g1_ParamLimits

0xa386,	// (0x0004dd43) popup_call_audio_first_window_g1

0xa3d2,	// (0x0004dd8f) popup_call_audio_first_window_g2_ParamLimits

0xa3d2,	// (0x0004dd8f) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000529fd) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000529fd) popup_call_audio_first_window_g

0xa416,	// (0x0004ddd3) popup_call_audio_first_window_t1_ParamLimits

0xa416,	// (0x0004ddd3) popup_call_audio_first_window_t1

0xa4c2,	// (0x0004de7f) popup_call_audio_first_window_t4_ParamLimits

0xa4c2,	// (0x0004de7f) popup_call_audio_first_window_t4

0xa54e,	// (0x0004df0b) popup_call_audio_first_window_t5_ParamLimits

0xa54e,	// (0x0004df0b) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00052a02) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00052a02) popup_call_audio_first_window_t

0xa57d,	// (0x0004df3a) bg_popup_call_pane_cp02

0xa587,	// (0x0004df44) call_type_pane_cp023

0xa58f,	// (0x0004df4c) popup_call_audio_wait_window_g1

0xa597,	// (0x0004df54) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00052a09) popup_call_audio_wait_window_g

0xa59f,	// (0x0004df5c) popup_call_audio_wait_window_t3

0xa5ad,	// (0x0004df6a) bg_popup_call_pane_cp03_ParamLimits

0xa5ad,	// (0x0004df6a) bg_popup_call_pane_cp03

0xa60d,	// (0x0004dfca) call_thumbnail_pane_cp011_ParamLimits

0xa60d,	// (0x0004dfca) call_thumbnail_pane_cp011

0xa619,	// (0x0004dfd6) call_type_pane_cp034_ParamLimits

0xa619,	// (0x0004dfd6) call_type_pane_cp034

0xa655,	// (0x0004e012) popup_call_audio_second_window_g1_ParamLimits

0xa655,	// (0x0004e012) popup_call_audio_second_window_g1

0xa691,	// (0x0004e04e) popup_call_audio_second_window_g2_ParamLimits

0xa691,	// (0x0004e04e) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00052a0e) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00052a0e) popup_call_audio_second_window_g

0xa6cd,	// (0x0004e08a) popup_call_audio_second_window_t1_ParamLimits

0xa6cd,	// (0x0004e08a) popup_call_audio_second_window_t1

0xa74e,	// (0x0004e10b) popup_call_audio_second_window_t2_ParamLimits

0xa74e,	// (0x0004e10b) popup_call_audio_second_window_t2

0xa784,	// (0x0004e141) popup_call_audio_second_window_t3_ParamLimits

0xa784,	// (0x0004e141) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00052a13) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00052a13) popup_call_audio_second_window_t

0xa57d,	// (0x0004df3a) bg_popup_call_pane_cp04

0xa7ba,	// (0x0004e177) list_conf_pane

0xa7c2,	// (0x0004e17f) popup_call_audio_conf_window_t1

0xa7d0,	// (0x0004e18d) call_thumbnail_pane_g1

0xa7d8,	// (0x0004e195) bg_pinb_pane_ParamLimits

0xa7d8,	// (0x0004e195) bg_pinb_pane

0xa7e6,	// (0x0004e1a3) find_pinb_pane

0xa7d8,	// (0x0004e195) listscroll_pinb_pane_ParamLimits

0xa7d8,	// (0x0004e195) listscroll_pinb_pane

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g1

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g2

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g3

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g4

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g5

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g6

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g7

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g8

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g9

0xa7f0,	// (0x0004e1ad) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00052a1a) pinb_bg_pane_g

0xa0e5,	// (0x0004daa2) grid_pinb_pane

0xa0e5,	// (0x0004daa2) list_pinb_pane

0xa15c,	// (0x0004db19) scroll_pane_cp01_ParamLimits

0xa15c,	// (0x0004db19) scroll_pane_cp01

0xa7fa,	// (0x0004e1b7) find_pinb_pane_g1_ParamLimits

0xa7fa,	// (0x0004e1b7) find_pinb_pane_g1

0xa812,	// (0x0004e1cf) find_pinb_pane_t1

0xa824,	// (0x0004e1e1) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00052a34) find_pinb_pane_t

0xa839,	// (0x0004e1f6) input_focus_pane_cp01_ParamLimits

0xa839,	// (0x0004e1f6) input_focus_pane_cp01

0xa845,	// (0x0004e202) cell_pinb_pane_ParamLimits

0xa845,	// (0x0004e202) cell_pinb_pane

0xa853,	// (0x0004e210) cell_pinb_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_pinb_pane_g1

0xa861,	// (0x0004e21e) cell_pinb_pane_g2_ParamLimits

0xa861,	// (0x0004e21e) cell_pinb_pane_g2

0xa861,	// (0x0004e21e) cell_pinb_pane_g3_ParamLimits

0xa861,	// (0x0004e21e) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00052a39) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00052a39) cell_pinb_pane_g

0xa57d,	// (0x0004df3a) grid_highlight_pane_cp01

0xa845,	// (0x0004e202) list_pinb_item_pane_ParamLimits

0xa845,	// (0x0004e202) list_pinb_item_pane

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp02

0xa86f,	// (0x0004e22c) list_pinb_item_pane_g1_ParamLimits

0xa86f,	// (0x0004e22c) list_pinb_item_pane_g1

0xa861,	// (0x0004e21e) list_pinb_item_pane_g2_ParamLimits

0xa861,	// (0x0004e21e) list_pinb_item_pane_g2

0xa853,	// (0x0004e210) list_pinb_item_pane_g3_ParamLimits

0xa853,	// (0x0004e210) list_pinb_item_pane_g3

0xa861,	// (0x0004e21e) list_pinb_item_pane_g4_ParamLimits

0xa861,	// (0x0004e21e) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00052a40) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00052a40) list_pinb_item_pane_g

0xa87d,	// (0x0004e23a) list_pinb_item_pane_t1_ParamLimits

0xa87d,	// (0x0004e23a) list_pinb_item_pane_t1

0x12f7,	// (0x00044cb4) calc_display_pane

0x131c,	// (0x00044cd9) calc_paper_pane

0x133f,	// (0x00044cfc) grid_calc_pane

0xa0e5,	// (0x0004daa2) bg_list_pane_cp01

0xa899,	// (0x0004e256) clock_g1

0xa899,	// (0x0004e256) clock_g2

0x0001,

0xf08c,	// (0x00052a49) clock_g

0xa8a3,	// (0x0004e260) clock_t1_ParamLimits

0xa8a3,	// (0x0004e260) clock_t1

0xa8b7,	// (0x0004e274) clock_t2_ParamLimits

0xa8b7,	// (0x0004e274) clock_t2

0xa8b7,	// (0x0004e274) clock_t3_ParamLimits

0xa8b7,	// (0x0004e274) clock_t3

0xa8b7,	// (0x0004e274) clock_t4_ParamLimits

0xa8b7,	// (0x0004e274) clock_t4

0xa8a3,	// (0x0004e260) clock_t5_ParamLimits

0xa8a3,	// (0x0004e260) clock_t5

0xa8b7,	// (0x0004e274) clock_t6_ParamLimits

0xa8b7,	// (0x0004e274) clock_t6

0xa8b7,	// (0x0004e274) clock_t7_ParamLimits

0xa8b7,	// (0x0004e274) clock_t7

0xa8b7,	// (0x0004e274) clock_t8_ParamLimits

0xa8b7,	// (0x0004e274) clock_t8

0xa8b7,	// (0x0004e274) clock_t9_ParamLimits

0xa8b7,	// (0x0004e274) clock_t9

0x0008,

0xf091,	// (0x00052a4e) clock_t_ParamLimits

0xf091,	// (0x00052a4e) clock_t

0xa0e5,	// (0x0004daa2) popup_clock_analogue_window_cp02

0xa0e5,	// (0x0004daa2) popup_clock_digital_window_cp01

0xa57d,	// (0x0004df3a) listscroll_help_pane

0xa57d,	// (0x0004df3a) phob_pre_status_pane

0xa8cb,	// (0x0004e288) grid_qdial_pane

0xa7d8,	// (0x0004e195) listscroll_mce_pane

0xa7d8,	// (0x0004e195) bg_notes_pane

0xa8d5,	// (0x0004e292) list_notes_pane

0x136d,	// (0x00044d2a) scroll_pane_cp06

0xa8e3,	// (0x0004e2a0) bg_calc_paper_pane

0xa8f7,	// (0x0004e2b4) list_calc_pane

0xa911,	// (0x0004e2ce) bg_calc_display_pane

0x1381,	// (0x00044d3e) calc_display_pane_t1

0x1396,	// (0x00044d53) calc_display_pane_t2

0xa91d,	// (0x0004e2da) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00052a61) calc_display_pane_t

0x13ab,	// (0x00044d68) cell_calc_pane_ParamLimits

0x13ab,	// (0x00044d68) cell_calc_pane

0xa92f,	// (0x0004e2ec) bg_calc_paper_pane_g1

0xa93b,	// (0x0004e2f8) bg_calc_paper_pane_g2

0xa947,	// (0x0004e304) bg_calc_paper_pane_g3

0xa953,	// (0x0004e310) bg_calc_paper_pane_g4

0xa95f,	// (0x0004e31c) bg_calc_paper_pane_g5

0x13e0,	// (0x00044d9d) bg_calc_paper_pane_g6

0x13ef,	// (0x00044dac) bg_calc_paper_pane_g7

0x13fe,	// (0x00044dbb) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00052a68) bg_calc_paper_pane_g

0x1411,	// (0x00044dce) calc_bg_paper_pane_g9

0x1424,	// (0x00044de1) list_calc_item_pane_ParamLimits

0x1424,	// (0x00044de1) list_calc_item_pane

0xa96b,	// (0x0004e328) list_calc_item_pane_g1

0xa978,	// (0x0004e335) list_calc_item_pane_t1_ParamLimits

0xa978,	// (0x0004e335) list_calc_item_pane_t1

0x143c,	// (0x00044df9) list_calc_item_pane_t2_ParamLimits

0x143c,	// (0x00044df9) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00052a79) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00052a79) list_calc_item_pane_t

0xa7f0,	// (0x0004e1ad) cell_calc_pane_g1

0xa98a,	// (0x0004e347) grid_highlight_pane_cp02

0xa9ac,	// (0x0004e369) bg_calc_display_pane_g1

0x146e,	// (0x00044e2b) bg_calc_display_pane_g2

0x1478,	// (0x00044e35) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00052a83) bg_calc_display_pane_g

0x1481,	// (0x00044e3e) cell_qdial_pane_ParamLimits

0x1481,	// (0x00044e3e) cell_qdial_pane

0x1495,	// (0x00044e52) cell_qdial_pane_g1_ParamLimits

0x1495,	// (0x00044e52) cell_qdial_pane_g1

0x14ab,	// (0x00044e68) cell_qdial_pane_g2_ParamLimits

0x14ab,	// (0x00044e68) cell_qdial_pane_g2

0xa9b5,	// (0x0004e372) cell_qdial_pane_g3_ParamLimits

0xa9b5,	// (0x0004e372) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00052a8a) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00052a8a) cell_qdial_pane_g

0x14d2,	// (0x00044e8f) cell_qdial_pane_t1_ParamLimits

0x14d2,	// (0x00044e8f) cell_qdial_pane_t1

0x14ea,	// (0x00044ea7) cell_qdial_pane_t2_ParamLimits

0x14ea,	// (0x00044ea7) cell_qdial_pane_t2

0x14fd,	// (0x00044eba) cell_qdial_pane_t3_ParamLimits

0x14fd,	// (0x00044eba) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00052a93) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00052a93) cell_qdial_pane_t

0xa57d,	// (0x0004df3a) grid_highlight_pane_cp04

0xa9c1,	// (0x0004e37e) thumbnail_qdial_pane_ParamLimits

0xa9c1,	// (0x0004e37e) thumbnail_qdial_pane

0xaa1d,	// (0x0004e3da) list_help_pane

0xaa26,	// (0x0004e3e3) scroll_pane_cp02

0xaa2f,	// (0x0004e3ec) help_list_pane_t1_ParamLimits

0xaa2f,	// (0x0004e3ec) help_list_pane_t1

0xaa4d,	// (0x0004e40a) bg_notes_pane_g2

0xaa55,	// (0x0004e412) bg_notes_pane_g3

0xaa5d,	// (0x0004e41a) notes_bg_pane_g1

0xaa65,	// (0x0004e422) notes_bg_pane_g4

0xaa6d,	// (0x0004e42a) notes_bg_pane_g5

0xaa75,	// (0x0004e432) notes_bg_pane_g6

0xaa7d,	// (0x0004e43a) notes_bg_pane_g7

0xaa85,	// (0x0004e442) notes_bg_pane_g8

0xaa8d,	// (0x0004e44a) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00052ab1) notes_bg_pane_g

0x1510,	// (0x00044ecd) list_notes_text_pane_ParamLimits

0x1510,	// (0x00044ecd) list_notes_text_pane

0xaa95,	// (0x0004e452) list_notes_text_pane_g1

0x09dc,	// (0x00044399) list_notes_text_pane_t1

0x1525,	// (0x00044ee2) listscroll_cale_week_pane

0x1551,	// (0x00044f0e) bg_cale_heading_pane

0xaab8,	// (0x0004e475) bg_cale_pane_cp01

0x1569,	// (0x00044f26) cale_week_corner_pane

0x1588,	// (0x00044f45) cale_week_day_heading_pane

0x15a5,	// (0x00044f62) cale_week_scroll_pane_g1

0x15b8,	// (0x00044f75) cale_week_scroll_pane_g2

0x15d0,	// (0x00044f8d) cale_week_scroll_pane_g3

0x15e8,	// (0x00044fa5) cale_week_scroll_pane_g4

0x1600,	// (0x00044fbd) cale_week_scroll_pane_g5

0x1620,	// (0x00044fdd) cale_week_scroll_pane_g6

0x1640,	// (0x00044ffd) cale_week_scroll_pane_g7

0x1660,	// (0x0004501d) cale_week_scroll_pane_g8

0x1684,	// (0x00045041) cale_week_scroll_pane_g9

0x169c,	// (0x00045059) cale_week_scroll_pane_g10

0x16b4,	// (0x00045071) cale_week_scroll_pane_g11

0x16cc,	// (0x00045089) cale_week_scroll_pane_g12

0x16e4,	// (0x000450a1) cale_week_scroll_pane_g13

0x16e4,	// (0x000450a1) cale_week_scroll_pane_g14

0x16e4,	// (0x000450a1) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00052ac0) cale_week_scroll_pane_g

0x1720,	// (0x000450dd) cale_week_time_pane

0x1744,	// (0x00045101) grid_cale_week_pane

0xaae7,	// (0x0004e4a4) scroll_pane_cp08

0x176a,	// (0x00045127) cell_cale_week_pane_ParamLimits

0x176a,	// (0x00045127) cell_cale_week_pane

0x17f8,	// (0x000451b5) cale_week_day_heading_pane_t1

0x1822,	// (0x000451df) cale_week_day_heading_pane_t2

0x1851,	// (0x0004520e) cale_week_day_heading_pane_t3

0x1880,	// (0x0004523d) cale_week_day_heading_pane_t4

0x18af,	// (0x0004526c) cale_week_day_heading_pane_t5

0x18e6,	// (0x000452a3) cale_week_day_heading_pane_t6

0x191d,	// (0x000452da) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00052ae1) cale_week_day_heading_pane_t

0xab04,	// (0x0004e4c1) bg_cale_side_pane

0x1947,	// (0x00045304) cale_week_time_pane_t1

0x1961,	// (0x0004531e) cale_week_time_pane_t2

0x197b,	// (0x00045338) cale_week_time_pane_t3

0x1995,	// (0x00045352) cale_week_time_pane_t4

0x19af,	// (0x0004536c) cale_week_time_pane_t5

0x19c9,	// (0x00045386) cale_week_time_pane_t6

0x19e3,	// (0x000453a0) cale_week_time_pane_t7

0x19fd,	// (0x000453ba) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00052af0) cale_week_time_pane_t

0x1a17,	// (0x000453d4) cell_cale_week_pane_g2

0x1a36,	// (0x000453f3) cell_cale_week_pane_g3_ParamLimits

0x1a36,	// (0x000453f3) cell_cale_week_pane_g3

0xab12,	// (0x0004e4cf) grid_highlight_pane_cp07

0xab1a,	// (0x0004e4d7) listscroll_gms_pane

0xab24,	// (0x0004e4e1) grid_gms_pane

0xab2d,	// (0x0004e4ea) listscroll_gms_pane_g1

0xab35,	// (0x0004e4f2) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00052b01) listscroll_gms_pane_g

0x1a4e,	// (0x0004540b) scroll_pane_cp010

0x1a59,	// (0x00045416) cell_gms_pane_ParamLimits

0x1a59,	// (0x00045416) cell_gms_pane

0x1a6c,	// (0x00045429) cell_gms_pane_g1

0xab3d,	// (0x0004e4fa) cell_gms_pane_g2

0xaa95,	// (0x0004e452) cell_gms_pane_g3

0xab45,	// (0x0004e502) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00052b06) cell_gms_pane_g

0xab4e,	// (0x0004e50b) grid_highlight_pane_cp09

0x3838,	// (0x000471f5) phob_pre_status_pane_g1

0x3840,	// (0x000471fd) phob_pre_status_pane_g2

0x3848,	// (0x00047205) phob_pre_status_pane_g3

0x3850,	// (0x0004720d) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x00052ea2) phob_pre_status_pane_g

0x3860,	// (0x0004721d) phob_pre_status_pane_t1

0x386e,	// (0x0004722b) phob_pre_status_pane_t2

0x387e,	// (0x0004723b) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x00052ead) phob_pre_status_pane_t

0xab56,	// (0x0004e513) bg_list_pane_cp05

0x1a7c,	// (0x00045439) grid_vorec_pane

0x1a84,	// (0x00045441) vorec_t1

0x1a92,	// (0x0004544f) vorec_t2

0x1aa0,	// (0x0004545d) vorec_t3

0x1aae,	// (0x0004546b) vorec_t4

0xd74d,	// (0x0005110a) vorec_t5

0x8ca4,	// (0x0004c661) vorec_t6

0x0004,

0xf152,	// (0x00052b0f) vorec_t

0x8cb2,	// (0x0004c66f) wait_bar_pane_cp01

0x1aca,	// (0x00045487) cell_vorec_pane_ParamLimits

0x1aca,	// (0x00045487) cell_vorec_pane

0xab5e,	// (0x0004e51b) cell_vorec_pane_g1

0xa57d,	// (0x0004df3a) grid_highlight_pane_cp05

0xa15c,	// (0x0004db19) cams_zoom_pane

0xa15c,	// (0x0004db19) image_vga_pane

0xa853,	// (0x0004e210) main_camera_pane_g1

0xa853,	// (0x0004e210) main_camera_pane_g2

0xa853,	// (0x0004e210) main_camera_pane_g3

0xa853,	// (0x0004e210) main_camera_pane_g4

0xa853,	// (0x0004e210) main_camera_pane_g5

0xa853,	// (0x0004e210) main_camera_pane_g6

0xa853,	// (0x0004e210) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00052b1a) main_camera_pane_g

0xa8a3,	// (0x0004e260) main_camera_pane_t1

0xa8a3,	// (0x0004e260) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00052b2b) main_camera_pane_t

0x1af1,	// (0x000454ae) cams_zoom_pane_cp_ParamLimits

0x1af1,	// (0x000454ae) cams_zoom_pane_cp

0x1b25,	// (0x000454e2) image_cif_pane_ParamLimits

0x1b25,	// (0x000454e2) image_cif_pane

0xa0e5,	// (0x0004daa2) image_subqcif_pane

0x1b37,	// (0x000454f4) main_video_pane_g1_ParamLimits

0x1b37,	// (0x000454f4) main_video_pane_g1

0x1b65,	// (0x00045522) main_video_pane_g2_ParamLimits

0x1b65,	// (0x00045522) main_video_pane_g2

0x1b9f,	// (0x0004555c) main_video_pane_g3_ParamLimits

0x1b9f,	// (0x0004555c) main_video_pane_g3

0x1b9f,	// (0x0004555c) main_video_pane_g4_ParamLimits

0x1b9f,	// (0x0004555c) main_video_pane_g4

0x1bd3,	// (0x00045590) main_video_pane_g5_ParamLimits

0x1bd3,	// (0x00045590) main_video_pane_g5

0xab68,	// (0x0004e525) main_video_pane_g6_ParamLimits

0xab68,	// (0x0004e525) main_video_pane_g6

0x0006,

0xf173,	// (0x00052b30) main_video_pane_g_ParamLimits

0xf173,	// (0x00052b30) main_video_pane_g

0x1bef,	// (0x000455ac) main_video_pane_t1_ParamLimits

0x1bef,	// (0x000455ac) main_video_pane_t1

0xa899,	// (0x0004e256) cams_zoom_pane_g1

0xa899,	// (0x0004e256) cams_zoom_pane_g2

0xa899,	// (0x0004e256) cams_zoom_pane_g3

0xa899,	// (0x0004e256) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00052b3f) cams_zoom_pane_g

0xa15c,	// (0x0004db19) grid_cams_pane

0xa15c,	// (0x0004db19) linegrid_cams_pane

0x1c33,	// (0x000455f0) cell_cams_pane_ParamLimits

0x1c33,	// (0x000455f0) cell_cams_pane

0xa0e5,	// (0x0004daa2) cams_burst_image_pane

0xa899,	// (0x0004e256) cell_cams_pane_g1

0xa0e5,	// (0x0004daa2) grid_highlight_pane_cp03

0xa7f0,	// (0x0004e1ad) mp_bg_pane_g1

0xa0e5,	// (0x0004daa2) bg_list_pane_cp03

0xa0e5,	// (0x0004daa2) bg_mp_pane

0xa0e5,	// (0x0004daa2) grid_mp_pane

0xa899,	// (0x0004e256) media_player_g1

0xb08b,	// (0x0004ea48) media_player_t1

0xb08b,	// (0x0004ea48) media_player_t2

0xb08b,	// (0x0004ea48) media_player_t3

0xb08b,	// (0x0004ea48) media_player_t4

0xb08b,	// (0x0004ea48) media_player_t5

0xb08b,	// (0x0004ea48) media_player_t6

0xb08b,	// (0x0004ea48) media_player_t7

0x0006,

0xf4cf,	// (0x00052e8c) media_player_t

0xa0e5,	// (0x0004daa2) wait_bar_pane_cp02

0xf4b4,	// (0x00052e71) main_usb_pane_t

0xb369,	// (0x0004ed26) cell_mp_pane

0xa7f0,	// (0x0004e1ad) cell_mp_pane_g1

0xa57d,	// (0x0004df3a) grid_highlight_pane_cp06

0xab82,	// (0x0004e53f) grid_skin_colour_pane

0xab8a,	// (0x0004e547) list_highlight_pane_cp03

0x1c48,	// (0x00045605) skin_g1

0xab92,	// (0x0004e54f) skin_t1

0xaba1,	// (0x0004e55e) skin_t2

0x0001,

0xf1b0,	// (0x00052b6d) skin_t

0x1c50,	// (0x0004560d) cell_skin_colour_pane_ParamLimits

0x1c50,	// (0x0004560d) cell_skin_colour_pane

0xabaf,	// (0x0004e56c) cell_skin_colour_pane_g1

0x1cc9,	// (0x00045686) call_video_g1_ParamLimits

0x1cc9,	// (0x00045686) call_video_g1

0x1ce5,	// (0x000456a2) call_video_g2_ParamLimits

0x1ce5,	// (0x000456a2) call_video_g2

0x0001,

0xf1b5,	// (0x00052b72) call_video_g_ParamLimits

0xf1b5,	// (0x00052b72) call_video_g

0x1d37,	// (0x000456f4) call_video_uplink_pane_cp1_ParamLimits

0x1d37,	// (0x000456f4) call_video_uplink_pane_cp1

0xabc1,	// (0x0004e57e) call_video_uplink_pane_cp2

0x1dd6,	// (0x00045793) video_down_crop_pane_ParamLimits

0x1dd6,	// (0x00045793) video_down_crop_pane

0x1ecd,	// (0x0004588a) video_down_pane_ParamLimits

0x1ecd,	// (0x0004588a) video_down_pane

0xabc9,	// (0x0004e586) video_down_subqcif_pane_ParamLimits

0xabc9,	// (0x0004e586) video_down_subqcif_pane

0xabe1,	// (0x0004e59e) video_down_subqcif_pane_cp_ParamLimits

0xabe1,	// (0x0004e59e) video_down_subqcif_pane_cp

0xac07,	// (0x0004e5c4) im_reading_pane_ParamLimits

0xac07,	// (0x0004e5c4) im_reading_pane

0x1fdd,	// (0x0004599a) im_writing_pane_ParamLimits

0x1fdd,	// (0x0004599a) im_writing_pane

0x1ff3,	// (0x000459b0) im_reading_pane_t1

0xac21,	// (0x0004e5de) list_im_pane

0xac32,	// (0x0004e5ef) scroll_pane_cp07

0x202c,	// (0x000459e9) im_writing_pane_t1_ParamLimits

0x202c,	// (0x000459e9) im_writing_pane_t1

0xac4b,	// (0x0004e608) im_writing_pane_t2_ParamLimits

0xac4b,	// (0x0004e608) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00052b7c) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00052b7c) im_writing_pane_t

0xa57d,	// (0x0004df3a) input_focus_pane_cp04

0xa57d,	// (0x0004df3a) input_focus_pane_cp05

0x2041,	// (0x000459fe) list_im_single_pane_ParamLimits

0x2041,	// (0x000459fe) list_im_single_pane

0x2055,	// (0x00045a12) list_single_im_pane_t1

0xab56,	// (0x0004e513) blid_accuracy_pane

0xab56,	// (0x0004e513) blid_compass_pane

0xc87e,	// (0x0005023b) main_location_t1

0xc87e,	// (0x0005023b) main_location_t2

0xc87e,	// (0x0005023b) main_location_t3

0x0002,

0xf4de,	// (0x00052e9b) main_location_t

0xa57d,	// (0x0004df3a) aid_levels_location

0xa7f0,	// (0x0004e1ad) blid_accuracy_pane_g1

0xa7f0,	// (0x0004e1ad) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x00052bcb) blid_accuracy_pane_g

0xac93,	// (0x0004e650) wml_content_pane

0xacd1,	// (0x0004e68e) wml_button_pane_ParamLimits

0xacd1,	// (0x0004e68e) wml_button_pane

0x2064,	// (0x00045a21) wml_list_single_large_pane_ParamLimits

0x2064,	// (0x00045a21) wml_list_single_large_pane

0x2079,	// (0x00045a36) wml_list_single_medium_pane_ParamLimits

0x2079,	// (0x00045a36) wml_list_single_medium_pane

0x208f,	// (0x00045a4c) wml_list_single_small_pane_ParamLimits

0x208f,	// (0x00045a4c) wml_list_single_small_pane

0xace5,	// (0x0004e6a2) wml_selection_box_pane_ParamLimits

0xace5,	// (0x0004e6a2) wml_selection_box_pane

0xacf8,	// (0x0004e6b5) wml_list_single_pane_t1

0xad07,	// (0x0004e6c4) wml_list_single_medium_pane_t1

0xad16,	// (0x0004e6d3) wml_list_single_large_pane_t1

0xad25,	// (0x0004e6e2) input_focus_pane_cp02_ParamLimits

0xad25,	// (0x0004e6e2) input_focus_pane_cp02

0xad38,	// (0x0004e6f5) wml_selection_box_pane_g1

0xad41,	// (0x0004e6fe) wml_selection_box_pane_t1_ParamLimits

0xad41,	// (0x0004e6fe) wml_selection_box_pane_t1

0xa7d8,	// (0x0004e195) bg_wml_button_pane_ParamLimits

0xa7d8,	// (0x0004e195) bg_wml_button_pane

0xad59,	// (0x0004e716) wml_button_pane_g1

0xad61,	// (0x0004e71e) wml_button_pane_t1

0xad59,	// (0x0004e716) wml_button_bg_pane_g1

0xad71,	// (0x0004e72e) wml_button_bg_pane_g2

0xad79,	// (0x0004e736) wml_button_bg_pane_g3

0xad81,	// (0x0004e73e) wml_button_bg_pane_g4

0xad89,	// (0x0004e746) wml_button_bg_pane_g5

0xad91,	// (0x0004e74e) wml_button_bg_pane_g6

0xad99,	// (0x0004e756) wml_button_bg_pane_g7

0xada1,	// (0x0004e75e) wml_button_bg_pane_g8

0xada9,	// (0x0004e766) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00052b81) wml_button_bg_pane_g

0x20a7,	// (0x00045a64) bg_list_pane_cp02

0xadb1,	// (0x0004e76e) mce_header_pane_ParamLimits

0xadb1,	// (0x0004e76e) mce_header_pane

0xadc7,	// (0x0004e784) mce_icon_pane

0xadc7,	// (0x0004e784) mce_image_pane

0xadd0,	// (0x0004e78d) mce_text_pane_ParamLimits

0xadd0,	// (0x0004e78d) mce_text_pane

0x20af,	// (0x00045a6c) scroll_pane_cp03

0xacc9,	// (0x0004e686) scroll_pane_cp04

0xade3,	// (0x0004e7a0) scroll_pane_cp05_ParamLimits

0xade3,	// (0x0004e7a0) scroll_pane_cp05

0x20b9,	// (0x00045a76) mce_header_field_pane_ParamLimits

0x20b9,	// (0x00045a76) mce_header_field_pane

0x20d0,	// (0x00045a8d) mce_header_field_pane_2_ParamLimits

0x20d0,	// (0x00045a8d) mce_header_field_pane_2

0x20e6,	// (0x00045aa3) mce_header_field_pane_3

0x20ee,	// (0x00045aab) list_single_mce_message_pane_ParamLimits

0x20ee,	// (0x00045aab) list_single_mce_message_pane

0x2103,	// (0x00045ac0) list_single_mce_smart_pane_ParamLimits

0x2103,	// (0x00045ac0) list_single_mce_smart_pane

0xadef,	// (0x0004e7ac) input_focus_pane_cp03

0xadf8,	// (0x0004e7b5) list_header_data_pane

0x2123,	// (0x00045ae0) mce_header_field_pane_t1

0x2133,	// (0x00045af0) list_single_mce_header_pane_ParamLimits

0x2133,	// (0x00045af0) list_single_mce_header_pane

0xae00,	// (0x0004e7bd) list_single_mce_header_pane_t1

0xae0f,	// (0x0004e7cc) list_single_mce_message_pane_g1

0xae17,	// (0x0004e7d4) list_single_mce_message_pane_t1

0x216d,	// (0x00045b2a) bg_cale_heading_pane_cp01_ParamLimits

0x216d,	// (0x00045b2a) bg_cale_heading_pane_cp01

0xae25,	// (0x0004e7e2) bg_cale_pane_cp02_ParamLimits

0xae25,	// (0x0004e7e2) bg_cale_pane_cp02

0x21a7,	// (0x00045b64) cale_month_corner_pane

0x21c6,	// (0x00045b83) cale_month_day_heading_pane_ParamLimits

0x21c6,	// (0x00045b83) cale_month_day_heading_pane

0x2218,	// (0x00045bd5) cale_month_pane_g1_ParamLimits

0x2218,	// (0x00045bd5) cale_month_pane_g1

0x2247,	// (0x00045c04) cale_month_pane_g2_ParamLimits

0x2247,	// (0x00045c04) cale_month_pane_g2

0x2277,	// (0x00045c34) cale_month_pane_g3_ParamLimits

0x2277,	// (0x00045c34) cale_month_pane_g3

0x22b3,	// (0x00045c70) cale_month_pane_g4_ParamLimits

0x22b3,	// (0x00045c70) cale_month_pane_g4

0x22ef,	// (0x00045cac) cale_month_pane_g5_ParamLimits

0x22ef,	// (0x00045cac) cale_month_pane_g5

0x2337,	// (0x00045cf4) cale_month_pane_g6_ParamLimits

0x2337,	// (0x00045cf4) cale_month_pane_g6

0x2383,	// (0x00045d40) cale_month_pane_g7_ParamLimits

0x2383,	// (0x00045d40) cale_month_pane_g7

0x23d7,	// (0x00045d94) cale_month_pane_g8_ParamLimits

0x23d7,	// (0x00045d94) cale_month_pane_g8

0x242b,	// (0x00045de8) cale_month_pane_g9_ParamLimits

0x242b,	// (0x00045de8) cale_month_pane_g9

0x247d,	// (0x00045e3a) cale_month_pane_g10_ParamLimits

0x247d,	// (0x00045e3a) cale_month_pane_g10

0x24cf,	// (0x00045e8c) cale_month_pane_g11_ParamLimits

0x24cf,	// (0x00045e8c) cale_month_pane_g11

0x2521,	// (0x00045ede) cale_month_pane_g12_ParamLimits

0x2521,	// (0x00045ede) cale_month_pane_g12

0x2573,	// (0x00045f30) cale_month_pane_g13_ParamLimits

0x2573,	// (0x00045f30) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00052b94) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00052b94) cale_month_pane_g

0x25c5,	// (0x00045f82) cale_month_week_pane

0x25e9,	// (0x00045fa6) grid_cale_month_pane_ParamLimits

0x25e9,	// (0x00045fa6) grid_cale_month_pane

0x2632,	// (0x00045fef) cale_month_day_heading_pane_t1

0x26b8,	// (0x00046075) cale_month_day_heading_pane_t2

0x2731,	// (0x000460ee) cale_month_day_heading_pane_t3

0x27aa,	// (0x00046167) cale_month_day_heading_pane_t4

0x282b,	// (0x000461e8) cale_month_day_heading_pane_t5

0x28b4,	// (0x00046271) cale_month_day_heading_pane_t6

0x293d,	// (0x000462fa) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00052baf) cale_month_day_heading_pane_t

0xab04,	// (0x0004e4c1) bg_cale_side_pane_cp01

0x29ce,	// (0x0004638b) cale_month_week_pane_t1

0x29e7,	// (0x000463a4) cale_month_week_pane_t2

0x2a00,	// (0x000463bd) cale_month_week_pane_t3

0x2a19,	// (0x000463d6) cale_month_week_pane_t4

0x2a32,	// (0x000463ef) cale_month_week_pane_t5

0x2a4b,	// (0x00046408) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00052bbe) cale_month_week_pane_t

0x2a64,	// (0x00046421) cell_cale_month_pane_ParamLimits

0x2a64,	// (0x00046421) cell_cale_month_pane

0xae64,	// (0x0004e821) cell_cale_month_pane_g1

0x2b92,	// (0x0004654f) cell_cale_month_pane_t1_ParamLimits

0x2b92,	// (0x0004654f) cell_cale_month_pane_t1

0xab12,	// (0x0004e4cf) grid_highlight_pane_cp08

0xa7f0,	// (0x0004e1ad) main_smil_g1

0x2bbe,	// (0x0004657b) smil_status_pane

0xae70,	// (0x0004e82d) smil_text_pane

0xaa85,	// (0x0004e442) bg_popup_call3_rect_pane_g8

0xaa8d,	// (0x0004e44a) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x00052bd0) bg_popup_call3_rect_pane_g

0xc99b,	// (0x00050358) smil_status_volume_pane_g1

0xae7a,	// (0x0004e837) smil_status_pane_t1

0xc9ce,	// (0x0005038b) volume_smil_pane

0xae91,	// (0x0004e84e) list_smil_text_pane

0x2bd1,	// (0x0004658e) scroll_pane_cp011

0x2bdc,	// (0x00046599) smil_text_list_pane_t1_ParamLimits

0x2bdc,	// (0x00046599) smil_text_list_pane_t1

0xae9b,	// (0x0004e858) aid_volume_smil_ParamLimits

0xae9b,	// (0x0004e858) aid_volume_smil

0xa7f0,	// (0x0004e1ad) smil_volume_pane_g1

0xa7f0,	// (0x0004e1ad) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x00052bcb) smil_volume_pane_g

0x1525,	// (0x00044ee2) listscroll_cale_day_pane

0xaebd,	// (0x0004e87a) bg_cale_pane

0xaed5,	// (0x0004e892) list_cale_pane

0xaef8,	// (0x0004e8b5) scroll_pane_cp09

0xaa5d,	// (0x0004e41a) cale_bg_pane_g1

0xaa4d,	// (0x0004e40a) cale_bg_pane_g2

0xaa55,	// (0x0004e412) cale_bg_pane_g3

0xaa65,	// (0x0004e422) cale_bg_pane_g4

0xaa6d,	// (0x0004e42a) cale_bg_pane_g5

0xaa75,	// (0x0004e432) cale_bg_pane_g6

0xaa7d,	// (0x0004e43a) cale_bg_pane_g7

0xaa85,	// (0x0004e442) cale_bg_pane_g8

0xaa8d,	// (0x0004e44a) cale_bg_pane_g9

0x0008,

0xf213,	// (0x00052bd0) cale_bg_pane_g

0x2c18,	// (0x000465d5) list_cale_time_pane_ParamLimits

0x2c18,	// (0x000465d5) list_cale_time_pane

0xaf11,	// (0x0004e8ce) list_cale_time_pane_g1_ParamLimits

0xaf11,	// (0x0004e8ce) list_cale_time_pane_g1

0xaf1d,	// (0x0004e8da) list_cale_time_pane_g2_ParamLimits

0xaf1d,	// (0x0004e8da) list_cale_time_pane_g2

0x2c2d,	// (0x000465ea) list_cale_time_pane_g3_ParamLimits

0x2c2d,	// (0x000465ea) list_cale_time_pane_g3

0x2c3b,	// (0x000465f8) list_cale_time_pane_g4_ParamLimits

0x2c3b,	// (0x000465f8) list_cale_time_pane_g4

0x2c49,	// (0x00046606) list_cale_time_pane_g5_ParamLimits

0x2c49,	// (0x00046606) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x00052be3) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x00052be3) list_cale_time_pane_g

0xaf37,	// (0x0004e8f4) list_cale_time_pane_t1_ParamLimits

0xaf37,	// (0x0004e8f4) list_cale_time_pane_t1

0xaf5f,	// (0x0004e91c) list_cale_time_pane_t2_ParamLimits

0xaf5f,	// (0x0004e91c) list_cale_time_pane_t2

0x2eab,	// (0x00046868) aid_blid_cardinal_pane

0x2ee9,	// (0x000468a6) compass_pane_t4

0xaf87,	// (0x0004e944) list_cale_time_pane_t4_ParamLimits

0xaf87,	// (0x0004e944) list_cale_time_pane_t4

0x2ef7,	// (0x000468b4) compass_pane_t5

0x2f05,	// (0x000468c2) compass_pane_t6

0x2f13,	// (0x000468d0) compass_pane_t7

0xb4ae,	// (0x0004ee6b) navi_pane_cc_t1

0xb69d,	// (0x0004f05a) aid_phob_thumbnail_center_pane

0x328b,	// (0x00046c48) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x00052bf0) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x00052bf0) list_cale_time_pane_t

0xa1d4,	// (0x0004db91) bg_popup_window_pane_cp02_ParamLimits

0xa1d4,	// (0x0004db91) bg_popup_window_pane_cp02

0xafaf,	// (0x0004e96c) heading_pane_cp01_ParamLimits

0xafaf,	// (0x0004e96c) heading_pane_cp01

0xafbb,	// (0x0004e978) loc_req_pane_ParamLimits

0xafbb,	// (0x0004e978) loc_req_pane

0xafcd,	// (0x0004e98a) loc_type_pane_ParamLimits

0xafcd,	// (0x0004e98a) loc_type_pane

0xafdf,	// (0x0004e99c) loc_type_pane_t1_ParamLimits

0xafdf,	// (0x0004e99c) loc_type_pane_t1

0xaff1,	// (0x0004e9ae) loc_type_pane_t2_ParamLimits

0xaff1,	// (0x0004e9ae) loc_type_pane_t2

0xb003,	// (0x0004e9c0) loc_type_pane_t3_ParamLimits

0xb003,	// (0x0004e9c0) loc_type_pane_t3

0x0002,

0xf23a,	// (0x00052bf7) loc_type_pane_t_ParamLimits

0xf23a,	// (0x00052bf7) loc_type_pane_t

0xb015,	// (0x0004e9d2) list_loc_req_pane

0xb01f,	// (0x0004e9dc) scroll_pane_cp012

0x2c57,	// (0x00046614) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c57,	// (0x00046614) list_single_loc_request_popup_menu_pane

0xb02a,	// (0x0004e9e7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb02a,	// (0x0004e9e7) list_single_loc_request_popup_menu_pane_g1

0xb036,	// (0x0004e9f3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb036,	// (0x0004e9f3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x00052bfe) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x00052bfe) list_single_loc_request_popup_menu_pane_g

0xb042,	// (0x0004e9ff) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb042,	// (0x0004e9ff) list_single_loc_request_popup_menu_pane_t1

0xa7d8,	// (0x0004e195) bg_popup_window_pane_cp03_ParamLimits

0xa7d8,	// (0x0004e195) bg_popup_window_pane_cp03

0xb058,	// (0x0004ea15) heading_loc_req_pane_ParamLimits

0xb058,	// (0x0004ea15) heading_loc_req_pane

0x2c64,	// (0x00046621) popup_dyc_status_message_window_g1_ParamLimits

0x2c64,	// (0x00046621) popup_dyc_status_message_window_g1

0x2c78,	// (0x00046635) popup_dyc_status_message_window_t1_ParamLimits

0x2c78,	// (0x00046635) popup_dyc_status_message_window_t1

0x2c8d,	// (0x0004664a) popup_dyc_status_message_window_t2_ParamLimits

0x2c8d,	// (0x0004664a) popup_dyc_status_message_window_t2

0x2ca2,	// (0x0004665f) popup_dyc_status_message_window_t3_ParamLimits

0x2ca2,	// (0x0004665f) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x00052c03) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x00052c03) popup_dyc_status_message_window_t

0xa57d,	// (0x0004df3a) bg_heading_pane_cp01

0xb064,	// (0x0004ea21) heading_loc_req_pane_g1

0xb06c,	// (0x0004ea29) heading_loc_req_pane_g2

0xb074,	// (0x0004ea31) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x00052c0a) heading_loc_req_pane_g

0xb07c,	// (0x0004ea39) heading_loc_req_pane_t1

0xb09b,	// (0x0004ea58) bg_popup_sub_pane_cp01_ParamLimits

0xb09b,	// (0x0004ea58) bg_popup_sub_pane_cp01

0xb0a9,	// (0x0004ea66) popup_cale_events_window_g1_ParamLimits

0xb0a9,	// (0x0004ea66) popup_cale_events_window_g1

0xb0c9,	// (0x0004ea86) popup_cale_events_window_g2_ParamLimits

0xb0c9,	// (0x0004ea86) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x00052c2c) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x00052c2c) popup_cale_events_window_g

0xb0e9,	// (0x0004eaa6) popup_cale_events_window_t1_ParamLimits

0xb0e9,	// (0x0004eaa6) popup_cale_events_window_t1

0xb0fb,	// (0x0004eab8) popup_cale_events_window_t2_ParamLimits

0xb0fb,	// (0x0004eab8) popup_cale_events_window_t2

0xb139,	// (0x0004eaf6) popup_cale_events_window_t3_ParamLimits

0xb139,	// (0x0004eaf6) popup_cale_events_window_t3

0xb173,	// (0x0004eb30) popup_cale_events_window_t4_ParamLimits

0xb173,	// (0x0004eb30) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x00052c31) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x00052c31) popup_cale_events_window_t

0x2cca,	// (0x00046687) call_type_pane

0x2cda,	// (0x00046697) popup_call_status_window_g1

0x2cee,	// (0x000466ab) popup_call_status_window_g2

0x2d02,	// (0x000466bf) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x00052c3a) popup_call_status_window_g

0xb1a9,	// (0x0004eb66) call_type_pane_g1

0xb1b2,	// (0x0004eb6f) call_type_pane_g2

0x0001,

0xf284,	// (0x00052c41) call_type_pane_g

0xa57d,	// (0x0004df3a) bg_popup_sub_pane_cp02

0xb1bb,	// (0x0004eb78) listscroll_popup_wml_pane

0xb1c3,	// (0x0004eb80) list_wml_pane

0xb1cd,	// (0x0004eb8a) scroll_pane_cp013

0xb1d8,	// (0x0004eb95) list_single_graphic_popup_wml_pane_ParamLimits

0xb1d8,	// (0x0004eb95) list_single_graphic_popup_wml_pane

0xa7f0,	// (0x0004e1ad) list_single_graphic_popup_wml_pane_g1

0xb1ec,	// (0x0004eba9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x00052c46) list_single_graphic_popup_wml_pane_g

0xb1f4,	// (0x0004ebb1) list_single_graphic_popup_wml_pane_t1

0xb20a,	// (0x0004ebc7) aid_call_pane

0xa7d0,	// (0x0004e18d) popup_clock_analogue_window_g1

0xa7d0,	// (0x0004e18d) popup_clock_analogue_window_g2

0xb212,	// (0x0004ebcf) popup_clock_analogue_window_g3

0xb212,	// (0x0004ebcf) popup_clock_analogue_window_g4

0xa7f0,	// (0x0004e1ad) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x00052c4b) popup_clock_analogue_window_g

0xb21a,	// (0x0004ebd7) popup_clock_analogue_window_t1

0xb228,	// (0x0004ebe5) clock_digital_number_pane_ParamLimits

0xb228,	// (0x0004ebe5) clock_digital_number_pane

0xb234,	// (0x0004ebf1) clock_digital_number_pane_cp02_ParamLimits

0xb234,	// (0x0004ebf1) clock_digital_number_pane_cp02

0xb240,	// (0x0004ebfd) clock_digital_number_pane_cp03_ParamLimits

0xb240,	// (0x0004ebfd) clock_digital_number_pane_cp03

0xb24c,	// (0x0004ec09) clock_digital_number_pane_cp04_ParamLimits

0xb24c,	// (0x0004ec09) clock_digital_number_pane_cp04

0xb25c,	// (0x0004ec19) clock_digital_separator_pane_ParamLimits

0xb25c,	// (0x0004ec19) clock_digital_separator_pane

0xb268,	// (0x0004ec25) popup_clock_digital_window_t1

0xa7f0,	// (0x0004e1ad) clock_digital_number_pane_g1

0xa7f0,	// (0x0004e1ad) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x00052bcb) clock_digital_number_pane_g

0xa7f0,	// (0x0004e1ad) clock_digital_separator_pane_g1

0xa7f0,	// (0x0004e1ad) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x00052bcb) clock_digital_separator_pane_g

0xa57d,	// (0x0004df3a) bg_popup_window_pane_cp04

0xb285,	// (0x0004ec42) heading_pane_cp03

0xab56,	// (0x0004e513) listscroll_popup_gms_pane

0xa57d,	// (0x0004df3a) grid_large_graphic_popup_pane

0xb28d,	// (0x0004ec4a) listscroll_popup_gms_pane_g1

0xb296,	// (0x0004ec53) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x00052c56) listscroll_popup_gms_pane_g

0xb29f,	// (0x0004ec5c) scroll_pane_cp014

0xa845,	// (0x0004e202) cell_large_graphic_popup_pane_ParamLimits

0xa845,	// (0x0004e202) cell_large_graphic_popup_pane

0xa853,	// (0x0004e210) cell_large_graphic_popup_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_large_graphic_popup_pane_g1

0xb2a8,	// (0x0004ec65) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2a8,	// (0x0004ec65) cell_large_graphic_popup_pane_g2

0xb2b6,	// (0x0004ec73) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2b6,	// (0x0004ec73) cell_large_graphic_popup_pane_g3

0xb2c4,	// (0x0004ec81) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2c4,	// (0x0004ec81) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x00052c5b) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x00052c5b) cell_large_graphic_popup_pane_g

0xa57d,	// (0x0004df3a) grid_highlight_pane_cp010

0xa7f0,	// (0x0004e1ad) bg_popup_call_pane_g1

0xb2d5,	// (0x0004ec92) list_single_graphic_popup_conf_pane_ParamLimits

0xb2d5,	// (0x0004ec92) list_single_graphic_popup_conf_pane

0xb2e8,	// (0x0004eca5) list_highlight_pane_cp01

0xb2f1,	// (0x0004ecae) list_single_graphic_popup_conf_pane_g1

0xb2f9,	// (0x0004ecb6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x00052c64) list_single_graphic_popup_conf_pane_g

0xb301,	// (0x0004ecbe) list_single_graphic_popup_conf_pane_t1

0xb30f,	// (0x0004eccc) linegrid_cams_pane_g1

0x2d11,	// (0x000466ce) linegrid_cams_pane_g2

0xaa95,	// (0x0004e452) linegrid_cams_pane_g3

0xb318,	// (0x0004ecd5) linegrid_cams_pane_g4

0x2d1a,	// (0x000466d7) linegrid_cams_pane_g5

0x2d23,	// (0x000466e0) linegrid_cams_pane_g6

0xab45,	// (0x0004e502) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x00052c69) linegrid_cams_pane_g

0xb321,	// (0x0004ecde) popup_clock_analogue_window

0xb321,	// (0x0004ecde) popup_clock_digital_window

0xa57d,	// (0x0004df3a) popup_phob_thumbnail_window

0xa7f0,	// (0x0004e1ad) call_video_uplink_pane_g1

0xb32a,	// (0x0004ece7) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x00052c78) call_video_uplink_pane_g

0xb332,	// (0x0004ecef) video_uplink_pane

0xb33a,	// (0x0004ecf7) mce_image_pane_g1

0x2d2e,	// (0x000466eb) mce_image_pane_g2

0x2d38,	// (0x000466f5) mce_image_pane_g3

0x2d40,	// (0x000466fd) mce_image_pane_g4

0x2d48,	// (0x00046705) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x00052c7d) mce_image_pane_g

0xb344,	// (0x0004ed01) control_top_pane_stacon_cp01_ParamLimits

0xb344,	// (0x0004ed01) control_top_pane_stacon_cp01

0xb358,	// (0x0004ed15) uni_indicator_pane_stacon_cp01_ParamLimits

0xb358,	// (0x0004ed15) uni_indicator_pane_stacon_cp01

0xb369,	// (0x0004ed26) bg_popup_sub_pane_cp03

0xb373,	// (0x0004ed30) chi_dic_find_pane

0x2d50,	// (0x0004670d) listscroll_chi_dic_pane

0xb37b,	// (0x0004ed38) main_pane_chidic_g1

0xb383,	// (0x0004ed40) chi_dic_find_pane_t1

0xb391,	// (0x0004ed4e) find_chidic_pane

0xb39a,	// (0x0004ed57) chi_dic_list_pane_ParamLimits

0xb39a,	// (0x0004ed57) chi_dic_list_pane

0xb3ab,	// (0x0004ed68) scroll_pane_cp020

0xb3b3,	// (0x0004ed70) find_chidic_pane_t1

0xa57d,	// (0x0004df3a) input_focus_pane_cp06

0x2d64,	// (0x00046721) list_chi_dic_pane_ParamLimits

0x2d64,	// (0x00046721) list_chi_dic_pane

0x2d76,	// (0x00046733) list_chi_dic_pane_t1_ParamLimits

0x2d76,	// (0x00046733) list_chi_dic_pane_t1

0xa57d,	// (0x0004df3a) list_highlight_pane_cp020

0xb3c2,	// (0x0004ed7f) bg_cale_heading_pane_g1

0x2d89,	// (0x00046746) bg_cale_heading_pane_g2

0x2d91,	// (0x0004674e) bg_cale_heading_pane_g3

0x2d99,	// (0x00046756) bg_cale_heading_pane_g4

0x2da3,	// (0x00046760) bg_cale_heading_pane_g5

0x2dad,	// (0x0004676a) bg_cale_heading_pane_g6

0x2db5,	// (0x00046772) bg_cale_heading_pane_g7

0x2dbd,	// (0x0004677a) bg_cale_heading_pane_g8

0x2dc7,	// (0x00046784) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x00052c88) bg_cale_heading_pane_g

0xb3c2,	// (0x0004ed7f) bg_cale_side_pane_g1

0x2dd1,	// (0x0004678e) bg_cale_side_pane_g2

0x2dd9,	// (0x00046796) bg_cale_side_pane_g3

0x2de1,	// (0x0004679e) bg_cale_side_pane_g4

0x2de9,	// (0x000467a6) bg_cale_side_pane_g5

0x2df1,	// (0x000467ae) bg_cale_side_pane_g6

0x2df9,	// (0x000467b6) bg_cale_side_pane_g7

0x2e01,	// (0x000467be) bg_cale_side_pane_g8

0x2e09,	// (0x000467c6) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x00052c9b) bg_cale_side_pane_g

0x2e11,	// (0x000467ce) popup_call_status_window_ParamLimits

0x2e11,	// (0x000467ce) popup_call_status_window

0xb3ca,	// (0x0004ed87) stacon_top_pane

0xb3d2,	// (0x0004ed8f) status_pane_ParamLimits

0xb3d2,	// (0x0004ed8f) status_pane

0xb3e7,	// (0x0004eda4) status_small_pane

0xb3ef,	// (0x0004edac) control_pane

0xa57d,	// (0x0004df3a) stacon_bottom_pane

0xb3f7,	// (0x0004edb4) list_single_mce_smart_pane_t1_ParamLimits

0xb3f7,	// (0x0004edb4) list_single_mce_smart_pane_t1

0xb40a,	// (0x0004edc7) list_single_mce_smart_pane_t2_ParamLimits

0xb40a,	// (0x0004edc7) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x00052cae) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x00052cae) list_single_mce_smart_pane_t

0x2e5a,	// (0x00046817) compass_pane

0x2e63,	// (0x00046820) main_location2_pane_t1

0x2e75,	// (0x00046832) main_location2_pane_t2

0x2e87,	// (0x00046844) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x00052cb3) main_location2_pane_t

0xb429,	// (0x0004ede6) compass_pane_g1_ParamLimits

0xb429,	// (0x0004ede6) compass_pane_g1

0x2ecb,	// (0x00046888) compass_pane_t1

0x2eda,	// (0x00046897) compass_pane_t2

0x0005,

0xf2ff,	// (0x00052cbc) compass_pane_t

0x2f21,	// (0x000468de) text_secondary_cp61

0xb4a5,	// (0x0004ee62) navi_pane_cams_g5

0xb521,	// (0x0004eede) navi_pane_im_t1

0xb52f,	// (0x0004eeec) navi_pane_mp_g1_ParamLimits

0xb52f,	// (0x0004eeec) navi_pane_mp_g1

0xb543,	// (0x0004ef00) navi_pane_mp_g2_ParamLimits

0xb543,	// (0x0004ef00) navi_pane_mp_g2

0xb54f,	// (0x0004ef0c) navi_pane_mp_g3_ParamLimits

0xb54f,	// (0x0004ef0c) navi_pane_mp_g3

0x0002,

0xf313,	// (0x00052cd0) navi_pane_mp_g_ParamLimits

0xf313,	// (0x00052cd0) navi_pane_mp_g

0xb55b,	// (0x0004ef18) navi_pane_mp_t1

0xb569,	// (0x0004ef26) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x00052cd7) navi_pane_mp_t

0xb5d4,	// (0x0004ef91) navi_pane_vt_g1

0xb55b,	// (0x0004ef18) navi_pane_vt_t1

0xb5dc,	// (0x0004ef99) navi_slider_pane

0xab56,	// (0x0004e513) zooming_pane

0xb5ec,	// (0x0004efa9) navi_slider_pane_g1

0xb5f5,	// (0x0004efb2) navi_slider_pane_g2

0x0006,

0xf321,	// (0x00052cde) navi_slider_pane_g

0xb622,	// (0x0004efdf) aid_levels_zoom

0xb62a,	// (0x0004efe7) zooming_pane_g1

0xb632,	// (0x0004efef) zooming_pane_g2

0xb632,	// (0x0004efef) zooming_pane_g3

0x0002,

0xf330,	// (0x00052ced) zooming_pane_g

0xb63a,	// (0x0004eff7) level_10_zoom

0xb643,	// (0x0004f000) level_11_zoom

0xb64c,	// (0x0004f009) level_1_zoom

0xb655,	// (0x0004f012) level_2_zoom

0xb65e,	// (0x0004f01b) level_3_zoom

0xb667,	// (0x0004f024) level_4_zoom

0xb670,	// (0x0004f02d) level_5_zoom

0xb679,	// (0x0004f036) level_6_zoom

0xb682,	// (0x0004f03f) level_7_zoom

0xb68b,	// (0x0004f048) level_8_zoom

0xb694,	// (0x0004f051) level_9_zoom

0xb6a5,	// (0x0004f062) popup_phob_thumbnail_window_g1

0xb6ad,	// (0x0004f06a) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x00052cf4) popup_phob_thumbnail_window_g

0x388e,	// (0x0004724b) level_1_location

0x3896,	// (0x00047253) level_2_location

0x389e,	// (0x0004725b) level_3_location

0x38a6,	// (0x00047263) level_4_location

0xab56,	// (0x0004e513) level_5_location

0x2f72,	// (0x0004692f) mce_icon_pane_g1

0x2f7c,	// (0x00046939) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x00052cf9) mce_icon_pane_g

0xb6b5,	// (0x0004f072) main_mup_pane_g1_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g1

0xb6b5,	// (0x0004f072) main_mup_pane_g2_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g2

0xb6b5,	// (0x0004f072) main_mup_pane_g3_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g3

0xb6b5,	// (0x0004f072) main_mup_pane_g4_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g4

0xb6b5,	// (0x0004f072) main_mup_pane_g5_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g5

0xb6b5,	// (0x0004f072) main_mup_pane_g6_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g6

0xb6b5,	// (0x0004f072) main_mup_pane_g7_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g7

0xb6b5,	// (0x0004f072) main_mup_pane_g8_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g8

0xb6b5,	// (0x0004f072) main_mup_pane_g9_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g9

0xb6b5,	// (0x0004f072) main_mup_pane_g10_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g10

0xb6b5,	// (0x0004f072) main_mup_pane_g11_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g11

0xa853,	// (0x0004e210) main_mup_pane_g12_ParamLimits

0xa853,	// (0x0004e210) main_mup_pane_g12

0xb6b5,	// (0x0004f072) main_mup_pane_g13_ParamLimits

0xb6b5,	// (0x0004f072) main_mup_pane_g13

0x000c,

0xf341,	// (0x00052cfe) main_mup_pane_g_ParamLimits

0xf341,	// (0x00052cfe) main_mup_pane_g

0xb6c3,	// (0x0004f080) main_mup_pane_t1_ParamLimits

0xb6c3,	// (0x0004f080) main_mup_pane_t1

0xb6c3,	// (0x0004f080) main_mup_pane_t2_ParamLimits

0xb6c3,	// (0x0004f080) main_mup_pane_t2

0xb6c3,	// (0x0004f080) main_mup_pane_t3_ParamLimits

0xb6c3,	// (0x0004f080) main_mup_pane_t3

0xa8a3,	// (0x0004e260) main_mup_pane_t4_ParamLimits

0xa8a3,	// (0x0004e260) main_mup_pane_t4

0xa8a3,	// (0x0004e260) main_mup_pane_t5_ParamLimits

0xa8a3,	// (0x0004e260) main_mup_pane_t5

0xa8b7,	// (0x0004e274) main_mup_pane_t6_ParamLimits

0xa8b7,	// (0x0004e274) main_mup_pane_t6

0x0005,

0xf35c,	// (0x00052d19) main_mup_pane_t_ParamLimits

0xf35c,	// (0x00052d19) main_mup_pane_t

0xa845,	// (0x0004e202) mup_progress_pane_ParamLimits

0xa845,	// (0x0004e202) mup_progress_pane

0xb6d7,	// (0x0004f094) mup_visualizer_pane_ParamLimits

0xb6d7,	// (0x0004f094) mup_visualizer_pane

0xb6d7,	// (0x0004f094) mup_volume_pane_ParamLimits

0xb6d7,	// (0x0004f094) mup_volume_pane

0xa861,	// (0x0004e21e) mup_visualizer_pane_g1_ParamLimits

0xa861,	// (0x0004e21e) mup_visualizer_pane_g1

0xb6e5,	// (0x0004f0a2) mup_visualizer_pane_g2_ParamLimits

0xb6e5,	// (0x0004f0a2) mup_visualizer_pane_g2

0xa853,	// (0x0004e210) mup_visualizer_pane_g3_ParamLimits

0xa853,	// (0x0004e210) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x00052d26) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x00052d26) mup_visualizer_pane_g

0xa899,	// (0x0004e256) mup_volume_pane_g1

0xa899,	// (0x0004e256) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00052a49) mup_volume_pane_g

0xa899,	// (0x0004e256) mup_progress_pane_g1

0xa899,	// (0x0004e256) mup_progress_pane_g2

0xa899,	// (0x0004e256) mup_progress_pane_g3

0x0002,

0xf370,	// (0x00052d2d) mup_progress_pane_g

0xa57d,	// (0x0004df3a) bg_popup_window_pane_cp05

0xb6f3,	// (0x0004f0b0) heading_pane_cp02_ParamLimits

0xb6f3,	// (0x0004f0b0) heading_pane_cp02

0xb70d,	// (0x0004f0ca) list_popup_blid_pane

0xb715,	// (0x0004f0d2) list_blid_sat_info_pane_ParamLimits

0xb715,	// (0x0004f0d2) list_blid_sat_info_pane

0xb728,	// (0x0004f0e5) list_blid_sat_info_pane_g1

0xb730,	// (0x0004f0ed) list_blid_sat_info_pane_t1

0x307c,	// (0x00046a39) mup_equalizer_pane_ParamLimits

0x307c,	// (0x00046a39) mup_equalizer_pane

0x3095,	// (0x00046a52) mup_equalizer_pane_cp1_ParamLimits

0x3095,	// (0x00046a52) mup_equalizer_pane_cp1

0x30b2,	// (0x00046a6f) mup_equalizer_pane_cp2_ParamLimits

0x30b2,	// (0x00046a6f) mup_equalizer_pane_cp2

0x30cf,	// (0x00046a8c) mup_equalizer_pane_cp3_ParamLimits

0x30cf,	// (0x00046a8c) mup_equalizer_pane_cp3

0x30f0,	// (0x00046aad) mup_equalizer_pane_cp4_ParamLimits

0x30f0,	// (0x00046aad) mup_equalizer_pane_cp4

0x3111,	// (0x00046ace) mup_equalizer_pane_cp5

0x3125,	// (0x00046ae2) mup_equalizer_pane_cp6

0x3139,	// (0x00046af6) mup_equalizer_pane_cp7

0xc81e,	// (0x000501db) bg_popup_call_poc_act_pane_g9

0xc826,	// (0x000501e3) bg_popup_call_poc_act_pane_g10

0xc82e,	// (0x000501eb) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7d8,	// (0x0004e195) mup_scale_pane

0xa7f0,	// (0x0004e1ad) mup_scale_pane_g1

0xb73e,	// (0x0004f0fb) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x00052d49) mup_scale_pane_g

0xb762,	// (0x0004f11f) msg_data_pane

0xb76a,	// (0x0004f127) scroll_pane_cp017

0x09ea,	// (0x000443a7) bg_list_pane_cp04_ParamLimits

0x09ea,	// (0x000443a7) bg_list_pane_cp04

0xb772,	// (0x0004f12f) msg_data_pane_g1

0x315f,	// (0x00046b1c) msg_data_pane_g2

0x3169,	// (0x00046b26) msg_data_pane_g3

0x3171,	// (0x00046b2e) msg_data_pane_g4

0x3179,	// (0x00046b36) msg_data_pane_g5

0x3181,	// (0x00046b3e) msg_data_pane_g6

0x3189,	// (0x00046b46) msg_data_pane_g7

0x0006,

0xf39b,	// (0x00052d58) msg_data_pane_g

0x0a0e,	// (0x000443cb) msg_text_pane_ParamLimits

0x0a0e,	// (0x000443cb) msg_text_pane

0x3191,	// (0x00046b4e) qrid_highlight_pane_cp011_ParamLimits

0x3191,	// (0x00046b4e) qrid_highlight_pane_cp011

0xa57d,	// (0x0004df3a) msg_body_pane

0xa7d8,	// (0x0004e195) msg_header_pane

0xb78e,	// (0x0004f14b) input_focus_pane_cp07

0xb7af,	// (0x0004f16c) msg_header_pane_t1_ParamLimits

0xb7af,	// (0x0004f16c) msg_header_pane_t1

0x0a51,	// (0x0004440e) msg_header_pane_t2_ParamLimits

0x0a51,	// (0x0004440e) msg_header_pane_t2

0x0001,

0xf3af,	// (0x00052d6c) msg_header_pane_t_ParamLimits

0xf3af,	// (0x00052d6c) msg_header_pane_t

0xb7cb,	// (0x0004f188) msg_body_pane_g1

0x0a71,	// (0x0004442e) msg_body_pane_t1_ParamLimits

0x0a71,	// (0x0004442e) msg_body_pane_t1

0x0aa2,	// (0x0004445f) msg_body_pane_t2_ParamLimits

0x0aa2,	// (0x0004445f) msg_body_pane_t2

0x0ab4,	// (0x00044471) msg_body_pane_t3_ParamLimits

0x0ab4,	// (0x00044471) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x00052d71) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x00052d71) msg_body_pane_t

0x31e1,	// (0x00046b9e) main_viewer_pane_g1_ParamLimits

0x31e1,	// (0x00046b9e) main_viewer_pane_g1

0x31ef,	// (0x00046bac) main_viewer_pane_g2_ParamLimits

0x31ef,	// (0x00046bac) main_viewer_pane_g2

0x31fd,	// (0x00046bba) main_viewer_pane_g3_ParamLimits

0x31fd,	// (0x00046bba) main_viewer_pane_g3

0x320c,	// (0x00046bc9) main_viewer_pane_g4_ParamLimits

0x320c,	// (0x00046bc9) main_viewer_pane_g4

0xb7eb,	// (0x0004f1a8) main_viewer_pane_g5_ParamLimits

0xb7eb,	// (0x0004f1a8) main_viewer_pane_g5

0xb7eb,	// (0x0004f1a8) main_viewer_pane_g7_ParamLimits

0xb7eb,	// (0x0004f1a8) main_viewer_pane_g7

0xb7fd,	// (0x0004f1ba) main_viewer_pane_g8_ParamLimits

0xb7fd,	// (0x0004f1ba) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x00052d81) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x00052d81) main_viewer_pane_g

0xb815,	// (0x0004f1d2) viewer_content_pane_ParamLimits

0xb815,	// (0x0004f1d2) viewer_content_pane

0x3248,	// (0x00046c05) main_postcard_pane_g1_ParamLimits

0x3248,	// (0x00046c05) main_postcard_pane_g1

0x325e,	// (0x00046c1b) main_postcard_pane_g2_ParamLimits

0x325e,	// (0x00046c1b) main_postcard_pane_g2

0x3274,	// (0x00046c31) main_postcard_pane_g3_ParamLimits

0x3274,	// (0x00046c31) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x00052d92) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x00052d92) main_postcard_pane_g

0x328b,	// (0x00046c48) main_postcard_pane_g4

0xc9ae,	// (0x0005036b) smil_status_volume_pane_g2

0x32ce,	// (0x00046c8b) postcard_pane_ParamLimits

0x32ce,	// (0x00046c8b) postcard_pane

0xb823,	// (0x0004f1e0) postcard_pane_g1_ParamLimits

0xb823,	// (0x0004f1e0) postcard_pane_g1

0x3310,	// (0x00046ccd) postcard_pane_g2_ParamLimits

0x3310,	// (0x00046ccd) postcard_pane_g2

0x331c,	// (0x00046cd9) postcard_pane_g3_ParamLimits

0x331c,	// (0x00046cd9) postcard_pane_g3

0xb831,	// (0x0004f1ee) postcard_pane_g4_ParamLimits

0xb831,	// (0x0004f1ee) postcard_pane_g4

0x3328,	// (0x00046ce5) postcard_pane_g5_ParamLimits

0x3328,	// (0x00046ce5) postcard_pane_g5

0x333d,	// (0x00046cfa) postcard_pane_g6_ParamLimits

0x333d,	// (0x00046cfa) postcard_pane_g6

0xb823,	// (0x0004f1e0) postcard_pane_g7_ParamLimits

0xb823,	// (0x0004f1e0) postcard_pane_g7

0x0006,

0xf3e2,	// (0x00052d9f) postcard_pane_g_ParamLimits

0xf3e2,	// (0x00052d9f) postcard_pane_g

0x3351,	// (0x00046d0e) main_mp2_pane_g1_ParamLimits

0x3351,	// (0x00046d0e) main_mp2_pane_g1

0x335d,	// (0x00046d1a) main_mp2_pane_g2_ParamLimits

0x335d,	// (0x00046d1a) main_mp2_pane_g2

0x3369,	// (0x00046d26) main_mp2_pane_g3_ParamLimits

0x3369,	// (0x00046d26) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x00052dae) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x00052dae) main_mp2_pane_g

0x3375,	// (0x00046d32) main_mp2_pane_t1_ParamLimits

0x3375,	// (0x00046d32) main_mp2_pane_t1

0x338a,	// (0x00046d47) main_mp2_pane_t2_ParamLimits

0x338a,	// (0x00046d47) main_mp2_pane_t2

0x339c,	// (0x00046d59) main_mp2_pane_t3_ParamLimits

0x339c,	// (0x00046d59) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x00052db5) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x00052db5) main_mp2_pane_t

0xa15c,	// (0x0004db19) pec_content_pane_ParamLimits

0xa15c,	// (0x0004db19) pec_content_pane

0xa0e5,	// (0x0004daa2) scroll_pane_cp015

0xb6d7,	// (0x0004f094) pec_attribute_pane_ParamLimits

0xb6d7,	// (0x0004f094) pec_attribute_pane

0xa853,	// (0x0004e210) pec_content_pane_g1_ParamLimits

0xa853,	// (0x0004e210) pec_content_pane_g1

0xb83f,	// (0x0004f1fc) pec_content_pane_t1_ParamLimits

0xb83f,	// (0x0004f1fc) pec_content_pane_t1

0xb853,	// (0x0004f210) pec_content_pane_t2_ParamLimits

0xb853,	// (0x0004f210) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x00052dbc) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x00052dbc) pec_content_pane_t

0xa845,	// (0x0004e202) list_single_graphic_pane_cp01_ParamLimits

0xa845,	// (0x0004e202) list_single_graphic_pane_cp01

0xa7d8,	// (0x0004e195) bg_popup_sub_pane_cp04

0xb867,	// (0x0004f224) popup_mup_playback_window_g1

0xb873,	// (0x0004f230) popup_mup_playback_window_t1

0xb888,	// (0x0004f245) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00052dc1) popup_mup_playback_window_t

0xb8bf,	// (0x0004f27c) main_image_pane_g1_ParamLimits

0xb8bf,	// (0x0004f27c) main_image_pane_g1

0xb902,	// (0x0004f2bf) scroll_pane_cp018_ParamLimits

0xb902,	// (0x0004f2bf) scroll_pane_cp018

0xb91a,	// (0x0004f2d7) scroll_pane_cp016_ParamLimits

0xb91a,	// (0x0004f2d7) scroll_pane_cp016

0x3466,	// (0x00046e23) smil2_image_pane_ParamLimits

0x3466,	// (0x00046e23) smil2_image_pane

0x3496,	// (0x00046e53) smil2_root_pane_ParamLimits

0x3496,	// (0x00046e53) smil2_root_pane

0x34ce,	// (0x00046e8b) smil2_text_pane_ParamLimits

0x34ce,	// (0x00046e8b) smil2_text_pane

0xa0e5,	// (0x0004daa2) bg_list_pane_cp06

0xa0e5,	// (0x0004daa2) grid_radio_pane

0xa57d,	// (0x0004df3a) bg_popup_window_pane_cp06

0xb08b,	// (0x0004ea48) main_fmradio_pane_t1

0xb285,	// (0x0004ec42) heading_pane_cp04

0xb08b,	// (0x0004ea48) main_fmradio_pane_t2

0xc836,	// (0x000501f3) popup_cale_lunar_info_window_g1

0xb08b,	// (0x0004ea48) main_fmradio_pane_t3

0xc83e,	// (0x000501fb) popup_cale_lunar_info_window_g2

0xb08b,	// (0x0004ea48) main_fmradio_pane_t4

0x0001,

0xb08b,	// (0x0004ea48) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x00052e7e) popup_cale_lunar_info_window_g

0xf264,	// (0x00052c21) main_fmradio_pane_t

0xa0e5,	// (0x0004daa2) wait_bar_pane_cp03

0xa845,	// (0x0004e202) cell_fmradio_pane_ParamLimits

0xa845,	// (0x0004e202) cell_fmradio_pane

0xa853,	// (0x0004e210) cell_fmradio_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_fmradio_pane_g1

0xa0e5,	// (0x0004daa2) grid_highlight_pane_cp011

0xb94e,	// (0x0004f30b) poc_content_pane_ParamLimits

0xb94e,	// (0x0004f30b) poc_content_pane

0xb960,	// (0x0004f31d) scroll_pane_cp019

0x354e,	// (0x00046f0b) popup_call_poc_act_window_ParamLimits

0x354e,	// (0x00046f0b) popup_call_poc_act_window

0x3572,	// (0x00046f2f) popup_call_poc_inact_window_ParamLimits

0x3572,	// (0x00046f2f) popup_call_poc_inact_window

0xf49d,	// (0x00052e5a) bg_popup_call_poc_act_pane_g

0xc7ae,	// (0x0005016b) bg_popup_call_poc_inact_pane_g1

0xc7b6,	// (0x00050173) bg_popup_call_poc_inact_pane_g2

0xb968,	// (0x0004f325) popup_call_poc_act_window_g2

0xc7be,	// (0x0005017b) bg_popup_call_poc_inact_pane_g3

0xc7c6,	// (0x00050183) bg_popup_call_poc_inact_pane_g4

0xc7ce,	// (0x0005018b) bg_popup_call_poc_inact_pane_g5

0xb970,	// (0x0004f32d) popup_call_poc_act_window_t1_ParamLimits

0xb970,	// (0x0004f32d) popup_call_poc_act_window_t1

0xb998,	// (0x0004f355) popup_call_poc_act_window_t2_ParamLimits

0xb998,	// (0x0004f355) popup_call_poc_act_window_t2

0xb9c0,	// (0x0004f37d) popup_call_poc_act_window_t3_ParamLimits

0xb9c0,	// (0x0004f37d) popup_call_poc_act_window_t3

0xb9e8,	// (0x0004f3a5) popup_call_poc_act_window_t4_ParamLimits

0xb9e8,	// (0x0004f3a5) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x00052dd6) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x00052dd6) popup_call_poc_act_window_t

0xc7d6,	// (0x00050193) bg_popup_call_poc_inact_pane_g6

0xc7de,	// (0x0005019b) bg_popup_call_poc_inact_pane_g7

0xc7e6,	// (0x000501a3) bg_popup_call_poc_inact_pane_g8

0xb9fa,	// (0x0004f3b7) popup_call_poc_inact_window_g2

0xc7ee,	// (0x000501ab) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x00052e47) bg_popup_call_poc_inact_pane_g

0xba02,	// (0x0004f3bf) popup_call_poc_inact_window_t1_ParamLimits

0xba02,	// (0x0004f3bf) popup_call_poc_inact_window_t1

0xba17,	// (0x0004f3d4) popup_call_poc_inact_window_t2_ParamLimits

0xba17,	// (0x0004f3d4) popup_call_poc_inact_window_t2

0xba2c,	// (0x0004f3e9) popup_call_poc_inact_window_t3_ParamLimits

0xba2c,	// (0x0004f3e9) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x00052ddf) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x00052ddf) popup_call_poc_inact_window_t

0xc926,	// (0x000502e3) context_pane_ParamLimits

0x3d60,	// (0x0004771d) signal_pane_ParamLimits

0xab56,	// (0x0004e513) main_call2_pane

0xc8ff,	// (0x000502bc) popup_phob_thumbnail2_window_ParamLimits

0xc8ff,	// (0x000502bc) popup_phob_thumbnail2_window

0xb7d3,	// (0x0004f190) aid_hotspot_pointer_arrow_pane

0xb7db,	// (0x0004f198) aid_hotspot_pointer_hand_pane

0x3858,	// (0x00047215) phob_pre_status_pane_g5

0xa15c,	// (0x0004db19) cams_zoom_pane_ParamLimits

0xa15c,	// (0x0004db19) image_vga_pane_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g1_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g2_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g3_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g4_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g5_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g6_ParamLimits

0xa853,	// (0x0004e210) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00052b1a) main_camera_pane_g_ParamLimits

0xa8a3,	// (0x0004e260) main_camera_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00052b2b) main_camera_pane_t_ParamLimits

0xa7d8,	// (0x0004e195) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7d8,	// (0x0004e195) bg_popup_preview_window_pane_cp01

0xba41,	// (0x0004f3fe) popup_phob_thumbnail2_window_g1_ParamLimits

0xba41,	// (0x0004f3fe) popup_phob_thumbnail2_window_g1

0xa57d,	// (0x0004df3a) call2_cli_visual_pane

0x35a6,	// (0x00046f63) popup_call2_audio_conf_window_ParamLimits

0x35a6,	// (0x00046f63) popup_call2_audio_conf_window

0x35c6,	// (0x00046f83) popup_call2_audio_first_window_ParamLimits

0x35c6,	// (0x00046f83) popup_call2_audio_first_window

0x365c,	// (0x00047019) popup_call2_audio_in_window_ParamLimits

0x365c,	// (0x00047019) popup_call2_audio_in_window

0x36a4,	// (0x00047061) popup_call2_audio_out_window_ParamLimits

0x36a4,	// (0x00047061) popup_call2_audio_out_window

0x370e,	// (0x000470cb) popup_call2_audio_second_window_ParamLimits

0x370e,	// (0x000470cb) popup_call2_audio_second_window

0x3774,	// (0x00047131) popup_call2_audio_wait_window_ParamLimits

0x3774,	// (0x00047131) popup_call2_audio_wait_window

0xa57d,	// (0x0004df3a) bg_popup_call2_act_pane_cp03

0xa7ba,	// (0x0004e177) list_conf_pane_cp

0xba4d,	// (0x0004f40a) popup_call2_audio_conf_window_t1

0xb2d5,	// (0x0004ec92) list_single_graphic_popup_conf2_pane_ParamLimits

0xb2d5,	// (0x0004ec92) list_single_graphic_popup_conf2_pane

0xb2e8,	// (0x0004eca5) list_highlight_pane_cp04

0xba5b,	// (0x0004f418) list_single_graphic_popup_conf2_pane_g1

0xb2f9,	// (0x0004ecb6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x00052de6) list_single_graphic_popup_conf2_pane_g

0xba65,	// (0x0004f422) list_single_graphic_popup_conf2_pane_t1

0xba73,	// (0x0004f430) bg_popup_call2_act_pane_cp01_ParamLimits

0xba73,	// (0x0004f430) bg_popup_call2_act_pane_cp01

0xbafd,	// (0x0004f4ba) call_type_pane_cp05_ParamLimits

0xbafd,	// (0x0004f4ba) call_type_pane_cp05

0xbb51,	// (0x0004f50e) popup_call2_audio_second_window_g1_ParamLimits

0xbb51,	// (0x0004f50e) popup_call2_audio_second_window_g1

0xbba5,	// (0x0004f562) popup_call2_audio_second_window_g2_ParamLimits

0xbba5,	// (0x0004f562) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x00052deb) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x00052deb) popup_call2_audio_second_window_g

0xbc0a,	// (0x0004f5c7) popup_call2_audio_second_window_t1_ParamLimits

0xbc0a,	// (0x0004f5c7) popup_call2_audio_second_window_t1

0xbcc5,	// (0x0004f682) popup_call2_audio_second_window_t2_ParamLimits

0xbcc5,	// (0x0004f682) popup_call2_audio_second_window_t2

0xbd18,	// (0x0004f6d5) popup_call2_audio_second_window_t3_ParamLimits

0xbd18,	// (0x0004f6d5) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x00052df2) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x00052df2) popup_call2_audio_second_window_t

0xa57d,	// (0x0004df3a) bg_popup_call2_in_pane_cp02

0xa587,	// (0x0004df44) call_type_pane_cp04

0x37ae,	// (0x0004716b) popup_call2_audio_wait_window_g1

0x37b6,	// (0x00047173) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x00052dfb) popup_call2_audio_wait_window_g

0xa59f,	// (0x0004df5c) popup_call2_audio_wait_window_t3

0xbe0b,	// (0x0004f7c8) bg_popup_call2_act_pane_ParamLimits

0xbe0b,	// (0x0004f7c8) bg_popup_call2_act_pane

0xbecb,	// (0x0004f888) call_type_pane_cp03_ParamLimits

0xbecb,	// (0x0004f888) call_type_pane_cp03

0xbf2f,	// (0x0004f8ec) popup_call2_audio_first_window_g1_ParamLimits

0xbf2f,	// (0x0004f8ec) popup_call2_audio_first_window_g1

0xbf9f,	// (0x0004f95c) popup_call2_audio_first_window_g2_ParamLimits

0xbf9f,	// (0x0004f95c) popup_call2_audio_first_window_g2

0xc003,	// (0x0004f9c0) popup_call2_audio_first_window_g3_ParamLimits

0xc003,	// (0x0004f9c0) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x00052e00) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x00052e00) popup_call2_audio_first_window_g

0xc08b,	// (0x0004fa48) popup_call2_audio_first_window_t1_ParamLimits

0xc08b,	// (0x0004fa48) popup_call2_audio_first_window_t1

0xc18e,	// (0x0004fb4b) popup_call2_audio_first_window_t4_ParamLimits

0xc18e,	// (0x0004fb4b) popup_call2_audio_first_window_t4

0xc271,	// (0x0004fc2e) popup_call2_audio_first_window_t5_ParamLimits

0xc271,	// (0x0004fc2e) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x00052e0b) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x00052e0b) popup_call2_audio_first_window_t

0xa7d0,	// (0x0004e18d) bg_popup_call2_act_pane_g1

0xc846,	// (0x00050203) popup_cale_lunar_info_window_t1

0xc854,	// (0x00050211) popup_cale_lunar_info_window_t2

0xc862,	// (0x0005021f) popup_cale_lunar_info_window_t3

0xa57d,	// (0x0004df3a) bg_popup_call2_bubble_pane

0xc372,	// (0x0004fd2f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc372,	// (0x0004fd2f) bg_popup_call2_in_pane_cp01

0xa259,	// (0x0004dc16) call_type_pane_cp02

0x37be,	// (0x0004717b) popup_call2_audio_out_window_g1_ParamLimits

0x37be,	// (0x0004717b) popup_call2_audio_out_window_g1

0xc3ba,	// (0x0004fd77) popup_call2_audio_out_window_g2_ParamLimits

0xc3ba,	// (0x0004fd77) popup_call2_audio_out_window_g2

0x37ea,	// (0x000471a7) popup_call2_audio_out_window_g3_ParamLimits

0x37ea,	// (0x000471a7) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x00052e14) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x00052e14) popup_call2_audio_out_window_g

0xc3f1,	// (0x0004fdae) popup_call2_audio_out_window_t1_ParamLimits

0xc3f1,	// (0x0004fdae) popup_call2_audio_out_window_t1

0xc450,	// (0x0004fe0d) popup_call2_audio_out_window_t2_ParamLimits

0xc450,	// (0x0004fe0d) popup_call2_audio_out_window_t2

0xc4a4,	// (0x0004fe61) popup_call2_audio_out_window_t3_ParamLimits

0xc4a4,	// (0x0004fe61) popup_call2_audio_out_window_t3

0xc4ba,	// (0x0004fe77) popup_call2_audio_out_window_t4_ParamLimits

0xc4ba,	// (0x0004fe77) popup_call2_audio_out_window_t4

0xc4d0,	// (0x0004fe8d) popup_call2_audio_out_window_t5_ParamLimits

0xc4d0,	// (0x0004fe8d) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x00052e1d) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x00052e1d) popup_call2_audio_out_window_t

0xc534,	// (0x0004fef1) bg_popup_call2_in_pane_ParamLimits

0xc534,	// (0x0004fef1) bg_popup_call2_in_pane

0xc590,	// (0x0004ff4d) popup_call2_audio_in_window_g1_ParamLimits

0xc590,	// (0x0004ff4d) popup_call2_audio_in_window_g1

0xc5c8,	// (0x0004ff85) popup_call2_audio_in_window_g2_ParamLimits

0xc5c8,	// (0x0004ff85) popup_call2_audio_in_window_g2

0xc600,	// (0x0004ffbd) popup_call2_audio_in_window_g3_ParamLimits

0xc600,	// (0x0004ffbd) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x00052e2a) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x00052e2a) popup_call2_audio_in_window_g

0xc658,	// (0x00050015) popup_call2_audio_in_window_t1_ParamLimits

0xc658,	// (0x00050015) popup_call2_audio_in_window_t1

0xc6d8,	// (0x00050095) popup_call2_audio_in_window_t2_ParamLimits

0xc6d8,	// (0x00050095) popup_call2_audio_in_window_t2

0xc758,	// (0x00050115) popup_call2_audio_in_window_t3_ParamLimits

0xc758,	// (0x00050115) popup_call2_audio_in_window_t3

0xc772,	// (0x0005012f) popup_call2_audio_in_window_t4_ParamLimits

0xc772,	// (0x0005012f) popup_call2_audio_in_window_t4

0xc784,	// (0x00050141) popup_call2_audio_in_window_t5_ParamLimits

0xc784,	// (0x00050141) popup_call2_audio_in_window_t5

0xc799,	// (0x00050156) popup_call2_audio_in_window_t6_ParamLimits

0xc799,	// (0x00050156) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x00052e33) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x00052e33) popup_call2_audio_in_window_t

0xa7d0,	// (0x0004e18d) bg_popup_call2_in_pane_g1

0xc870,	// (0x0005022d) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x00052e83) popup_cale_lunar_info_window_t

0xa7d8,	// (0x0004e195) bg_popup_call2_rect_pane_ParamLimits

0xa7d8,	// (0x0004e195) bg_popup_call2_rect_pane

0xa57d,	// (0x0004df3a) call2_cli_visual_graphic_pane

0xa57d,	// (0x0004df3a) call2_cli_visual_text_pane

0xc9c1,	// (0x0005037e) smil_status_volume_pane_g3

0x0002,

0xa7f0,	// (0x0004e1ad) call2_cli_visual_graphic_pane_g1

0xa7f0,	// (0x0004e1ad) call2_cli_visual_graphic_pane_g2

0xa7f0,	// (0x0004e1ad) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x00052e40) call2_cli_visual_graphic_pane_g

0xaa5d,	// (0x0004e41a) bg_popup_call2_rect_pane_g1

0xaa4d,	// (0x0004e40a) bg_popup_call2_rect_pane_g2

0xaa55,	// (0x0004e412) bg_popup_call2_rect_pane_g3

0xaa65,	// (0x0004e422) bg_popup_call2_rect_pane_g4

0xaa6d,	// (0x0004e42a) bg_popup_call2_rect_pane_g5

0xaa75,	// (0x0004e432) bg_popup_call2_rect_pane_g6

0xaa7d,	// (0x0004e43a) bg_popup_call2_rect_pane_g7

0xaa85,	// (0x0004e442) bg_popup_call2_rect_pane_g8

0xaa8d,	// (0x0004e44a) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x00052bd0) bg_popup_call2_rect_pane_g

0xc7ae,	// (0x0005016b) bg_popup_call2_bubble_pane_g1

0xc7b6,	// (0x00050173) bg_popup_call2_bubble_pane_g2

0xc7be,	// (0x0005017b) bg_popup_call2_bubble_pane_g3

0xc7c6,	// (0x00050183) bg_popup_call2_bubble_pane_g4

0xc7ce,	// (0x0005018b) bg_popup_call2_bubble_pane_g5

0xc7d6,	// (0x00050193) bg_popup_call2_bubble_pane_g6

0xc7de,	// (0x0005019b) bg_popup_call2_bubble_pane_g7

0xc7e6,	// (0x000501a3) bg_popup_call2_bubble_pane_g8

0xc7ee,	// (0x000501ab) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x00052e47) bg_popup_call2_bubble_pane_g

0x1537,	// (0x00044ef4) aid_cale_week_size_cell_pane

0x1add,	// (0x0004549a) aid_cams_cif_uncrop_pane_ParamLimits

0x1add,	// (0x0004549a) aid_cams_cif_uncrop_pane

0xa15c,	// (0x0004db19) aid_cams_size_cell_ParamLimits

0xa15c,	// (0x0004db19) aid_cams_size_cell

0xa15c,	// (0x0004db19) grid_cams_pane_ParamLimits

0xa15c,	// (0x0004db19) linegrid_cams_pane_ParamLimits

0x1cfb,	// (0x000456b8) call_video_pane_t1

0x1d19,	// (0x000456d6) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00052b77) call_video_pane_t

0x2147,	// (0x00045b04) aid_cale_month_size_cell_pane_ParamLimits

0x2147,	// (0x00045b04) aid_cale_month_size_cell_pane

0xf50a,	// (0x00052ec7) smil_status_volume_pane_g

0xc9ce,	// (0x0005038b) volume_smil_pane_ParamLimits

0xa0f7,	// (0x0004dab4) aid_popup2_width_pane

0x14bc,	// (0x00044e79) cell_qdial_pane_g4_ParamLimits

0x14bc,	// (0x00044e79) cell_qdial_pane_g4

0x2eab,	// (0x00046868) aid_blid_cardinal_pane_ParamLimits

0x2eb7,	// (0x00046874) aid_blid_destination_pane_ParamLimits

0x2eb7,	// (0x00046874) aid_blid_destination_pane

0xa7d8,	// (0x0004e195) bg_popup_call_poc_act_pane_ParamLimits

0xa7d8,	// (0x0004e195) bg_popup_call_poc_act_pane

0xa7d8,	// (0x0004e195) bg_popup_call_poc_inact_pane_ParamLimits

0xa7d8,	// (0x0004e195) bg_popup_call_poc_inact_pane

0xc7f6,	// (0x000501b3) bg_popup_call_poc_act_pane_g1

0xc7fe,	// (0x000501bb) bg_popup_call_poc_act_pane_g2

0xc806,	// (0x000501c3) bg_popup_call_poc_act_pane_g3

0xc7c6,	// (0x00050183) bg_popup_call_poc_act_pane_g4

0xc7ce,	// (0x0005018b) bg_popup_call_poc_act_pane_g5

0xc80e,	// (0x000501cb) bg_popup_call_poc_act_pane_g6

0xc7de,	// (0x0005019b) bg_popup_call_poc_act_pane_g7

0xc816,	// (0x000501d3) bg_popup_call_poc_act_pane_g8

0xa57d,	// (0x0004df3a) main_usb_pane

0xc8da,	// (0x00050297) popup_cale_lunar_info_window

0x1ff3,	// (0x000459b0) im_reading_pane_t1_ParamLimits

0xac21,	// (0x0004e5de) list_im_pane_ParamLimits

0xac32,	// (0x0004e5ef) scroll_pane_cp07_ParamLimits

0xa57d,	// (0x0004df3a) grid_highlight_pane_cp012

0xa7d8,	// (0x0004e195) mup_scale_pane_ParamLimits

0xa853,	// (0x0004e210) main_usb_pane_g1_ParamLimits

0xa853,	// (0x0004e210) main_usb_pane_g1

0xa853,	// (0x0004e210) main_usb_pane_g2_ParamLimits

0xa853,	// (0x0004e210) main_usb_pane_g2

0x0001,

0xf199,	// (0x00052b56) main_usb_pane_g_ParamLimits

0xf199,	// (0x00052b56) main_usb_pane_g

0xa8a3,	// (0x0004e260) main_usb_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) main_usb_pane_t1

0xa8a3,	// (0x0004e260) main_usb_pane_t2_ParamLimits

0xa8a3,	// (0x0004e260) main_usb_pane_t2

0xa8a3,	// (0x0004e260) main_usb_pane_t3_ParamLimits

0xa8a3,	// (0x0004e260) main_usb_pane_t3

0xa8a3,	// (0x0004e260) main_usb_pane_t4_ParamLimits

0xa8a3,	// (0x0004e260) main_usb_pane_t4

0xa8a3,	// (0x0004e260) main_usb_pane_t5_ParamLimits

0xa8a3,	// (0x0004e260) main_usb_pane_t5

0xa8a3,	// (0x0004e260) main_usb_pane_t6_ParamLimits

0xa8a3,	// (0x0004e260) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x00052e71) main_usb_pane_t_ParamLimits

0x2e5a,	// (0x00046817) aid_text_placing

0x2e63,	// (0x00046820) main_location2_pane_t1_ParamLimits

0x2e75,	// (0x00046832) main_location2_pane_t2_ParamLimits

0x2e87,	// (0x00046844) main_location2_pane_t3_ParamLimits

0x2e99,	// (0x00046856) main_location2_pane_t4_ParamLimits

0x2e99,	// (0x00046856) main_location2_pane_t4

0xf2f6,	// (0x00052cb3) main_location2_pane_t_ParamLimits

0xa806,	// (0x0004e1c3) find_pinb_pane_g2_ParamLimits

0xa806,	// (0x0004e1c3) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00052a2f) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00052a2f) find_pinb_pane_g

0xa812,	// (0x0004e1cf) find_pinb_pane_t1_ParamLimits

0xa824,	// (0x0004e1e1) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00052a34) find_pinb_pane_t_ParamLimits

0xa57d,	// (0x0004df3a) main_call3_pane

0x2632,	// (0x00045fef) cale_month_day_heading_pane_t1_ParamLimits

0x26b8,	// (0x00046075) cale_month_day_heading_pane_t2_ParamLimits

0x2731,	// (0x000460ee) cale_month_day_heading_pane_t3_ParamLimits

0x27aa,	// (0x00046167) cale_month_day_heading_pane_t4_ParamLimits

0x282b,	// (0x000461e8) cale_month_day_heading_pane_t5_ParamLimits

0x28b4,	// (0x00046271) cale_month_day_heading_pane_t6_ParamLimits

0x293d,	// (0x000462fa) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00052baf) cale_month_day_heading_pane_t_ParamLimits

0xae88,	// (0x0004e845) smil_status_volume_pane

0x32ec,	// (0x00046ca9) postcard_address_pane_ParamLimits

0x32ec,	// (0x00046ca9) postcard_address_pane

0x32fe,	// (0x00046cbb) postcard_message_pane_ParamLimits

0x32fe,	// (0x00046cbb) postcard_message_pane

0x3816,	// (0x000471d3) call2_cli_visual_pane_t1_ParamLimits

0x3816,	// (0x000471d3) call2_cli_visual_pane_t1

0xd292,	// (0x00050c4f) postcard_message_pane_t1_ParamLimits

0xd292,	// (0x00050c4f) postcard_message_pane_t1

0xd27a,	// (0x00050c37) postcard_address_pane_t1_ParamLimits

0xd27a,	// (0x00050c37) postcard_address_pane_t1

0x3f12,	// (0x000478cf) popup_call3_audio_in_window_ParamLimits

0x3f12,	// (0x000478cf) popup_call3_audio_in_window

0x3d9d,	// (0x0004775a) bg_popup_call3_in_pane_ParamLimits

0x3d9d,	// (0x0004775a) bg_popup_call3_in_pane

0x3e13,	// (0x000477d0) popup_call3_audio_in_window_g1_ParamLimits

0x3e13,	// (0x000477d0) popup_call3_audio_in_window_g1

0x3e33,	// (0x000477f0) popup_call3_audio_in_window_g2_ParamLimits

0x3e33,	// (0x000477f0) popup_call3_audio_in_window_g2

0x3e53,	// (0x00047810) popup_call3_audio_in_window_g3_ParamLimits

0x3e53,	// (0x00047810) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x00052ece) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x00052ece) popup_call3_audio_in_window_g

0x3e84,	// (0x00047841) popup_call3_audio_in_window_t1_ParamLimits

0x3e84,	// (0x00047841) popup_call3_audio_in_window_t1

0x3ec2,	// (0x0004787f) popup_call3_audio_in_window_t2_ParamLimits

0x3ec2,	// (0x0004787f) popup_call3_audio_in_window_t2

0x3f00,	// (0x000478bd) popup_call3_audio_in_window_t3_ParamLimits

0x3f00,	// (0x000478bd) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x00052ed7) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x00052ed7) popup_call3_audio_in_window_t

0xab56,	// (0x0004e513) bg_popup_call3_rect_pane

0xaa5d,	// (0x0004e41a) bg_popup_call3_rect_pane_g1

0xaa4d,	// (0x0004e40a) bg_popup_call3_rect_pane_g2

0xaa55,	// (0x0004e412) bg_popup_call3_rect_pane_g3

0xaa65,	// (0x0004e422) bg_popup_call3_rect_pane_g4

0xaa6d,	// (0x0004e42a) bg_popup_call3_rect_pane_g5

0xaa75,	// (0x0004e432) bg_popup_call3_rect_pane_g6

0xaa7d,	// (0x0004e43a) bg_popup_call3_rect_pane_g7

0xa0e5,	// (0x0004daa2) mup_visualizer_osc_pane

0xa0e5,	// (0x0004daa2) mup_visualizer_spec_pane

0x3dcd,	// (0x0004778a) call3_video_qcif_pane_ParamLimits

0x3dcd,	// (0x0004778a) call3_video_qcif_pane

0x3de0,	// (0x0004779d) call3_video_qcif_uncrop_pane_ParamLimits

0x3de0,	// (0x0004779d) call3_video_qcif_uncrop_pane

0x3dee,	// (0x000477ab) call3_video_subqcif_pane_ParamLimits

0x3dee,	// (0x000477ab) call3_video_subqcif_pane

0x3e02,	// (0x000477bf) call3_video_subqcif_uncrop_pane_ParamLimits

0x3e02,	// (0x000477bf) call3_video_subqcif_uncrop_pane

0x3e73,	// (0x00047830) popup_call3_audio_in_window_g4_ParamLimits

0x3e73,	// (0x00047830) popup_call3_audio_in_window_g4

0xa0e5,	// (0x0004daa2) mup_spec_half_pane

0xa0e5,	// (0x0004daa2) mup_spec_half_pane_cp

0xa0e5,	// (0x0004daa2) mup_osc_middle_pane

0xa899,	// (0x0004e256) mup_visualizer_osc_pane_g1

0xc974,	// (0x00050331) mup_spec_bar_pane_ParamLimits

0xc974,	// (0x00050331) mup_spec_bar_pane

0xa899,	// (0x0004e256) mup_spec_bar_pane_g1

0xa899,	// (0x0004e256) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00052a49) mup_spec_bar_pane_g

0x1537,	// (0x00044ef4) aid_cale_week_size_cell_pane_ParamLimits

0x1551,	// (0x00044f0e) bg_cale_heading_pane_ParamLimits

0xaab8,	// (0x0004e475) bg_cale_pane_cp01_ParamLimits

0x1569,	// (0x00044f26) cale_week_corner_pane_ParamLimits

0x1588,	// (0x00044f45) cale_week_day_heading_pane_ParamLimits

0x15a5,	// (0x00044f62) cale_week_scroll_pane_g1_ParamLimits

0x15b8,	// (0x00044f75) cale_week_scroll_pane_g2_ParamLimits

0x15d0,	// (0x00044f8d) cale_week_scroll_pane_g3_ParamLimits

0x15e8,	// (0x00044fa5) cale_week_scroll_pane_g4_ParamLimits

0x1600,	// (0x00044fbd) cale_week_scroll_pane_g5_ParamLimits

0x1620,	// (0x00044fdd) cale_week_scroll_pane_g6_ParamLimits

0x1640,	// (0x00044ffd) cale_week_scroll_pane_g7_ParamLimits

0x1660,	// (0x0004501d) cale_week_scroll_pane_g8_ParamLimits

0x1684,	// (0x00045041) cale_week_scroll_pane_g9_ParamLimits

0x169c,	// (0x00045059) cale_week_scroll_pane_g10_ParamLimits

0x16b4,	// (0x00045071) cale_week_scroll_pane_g11_ParamLimits

0x16cc,	// (0x00045089) cale_week_scroll_pane_g12_ParamLimits

0x16e4,	// (0x000450a1) cale_week_scroll_pane_g13_ParamLimits

0x16e4,	// (0x000450a1) cale_week_scroll_pane_g14_ParamLimits

0x16e4,	// (0x000450a1) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00052ac0) cale_week_scroll_pane_g_ParamLimits

0x1720,	// (0x000450dd) cale_week_time_pane_ParamLimits

0x1744,	// (0x00045101) grid_cale_week_pane_ParamLimits

0xaad5,	// (0x0004e492) listscroll_cale_week_pane_t1

0xaae7,	// (0x0004e4a4) scroll_pane_cp08_ParamLimits

0x21a7,	// (0x00045b64) cale_month_corner_pane_ParamLimits

0xae52,	// (0x0004e80f) cale_month_pane_t1

0x25c5,	// (0x00045f82) cale_month_week_pane_ParamLimits

0x2cda,	// (0x00046697) popup_call_status_window_g1_ParamLimits

0x2cee,	// (0x000466ab) popup_call_status_window_g2_ParamLimits

0x2d02,	// (0x000466bf) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x00052c3a) popup_call_status_window_g_ParamLimits

0xb202,	// (0x0004ebbf) aid_call2_pane

0x0a43,	// (0x00044400) msg_header_pane_g1

0x32ec,	// (0x00046ca9) postcard_address2_pane_ParamLimits

0x32ec,	// (0x00046ca9) postcard_address2_pane

0x32fe,	// (0x00046cbb) postcard_message2_pane_ParamLimits

0x32fe,	// (0x00046cbb) postcard_message2_pane

0x3d6e,	// (0x0004772b) message2_row_pane_ParamLimits

0x3d6e,	// (0x0004772b) message2_row_pane

0x3d8a,	// (0x00047747) address2_row_pane_ParamLimits

0x3d8a,	// (0x00047747) address2_row_pane

0xc941,	// (0x000502fe) postcard_message2_row_pane_g1

0xc949,	// (0x00050306) postcard_message2_row_pane_t1

0xc941,	// (0x000502fe) address2_row_pane_g1

0xc949,	// (0x00050306) address2_row_pane_t1

0x1a74,	// (0x00045431) aid_size_cell_vorec

0xa57d,	// (0x0004df3a) main_rss_pane

0xc957,	// (0x00050314) rss_list_single_pane_ParamLimits

0xc957,	// (0x00050314) rss_list_single_pane

0xc965,	// (0x00050322) rss_list_single_pane_t1

0xc965,	// (0x00050322) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x00052ec2) rss_list_single_pane_t

0xa57d,	// (0x0004df3a) main_camera2_pane

0xa57d,	// (0x0004df3a) main_video2_pane

0xc9e3,	// (0x000503a0) cams_zoom_pane_cp2_ParamLimits

0xc9e3,	// (0x000503a0) cams_zoom_pane_cp2

0xc9e3,	// (0x000503a0) image2_vga_pane_ParamLimits

0xc9e3,	// (0x000503a0) image2_vga_pane

0xc9f1,	// (0x000503ae) main_camera2_pane_g1_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g1

0xc9f1,	// (0x000503ae) main_camera2_pane_g2_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g2

0xc9f1,	// (0x000503ae) main_camera2_pane_g3_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g3

0xc9f1,	// (0x000503ae) main_camera2_pane_g4_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g4

0xc9f1,	// (0x000503ae) main_camera2_pane_g5_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g5

0xc9f1,	// (0x000503ae) main_camera2_pane_g6_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g6

0xc9f1,	// (0x000503ae) main_camera2_pane_g7_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g7

0xc9f1,	// (0x000503ae) main_camera2_pane_g8_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g8

0x0008,

0xf521,	// (0x00052ede) main_camera2_pane_g_ParamLimits

0xf521,	// (0x00052ede) main_camera2_pane_g

0x3f34,	// (0x000478f1) main_camera2_pane_t1_ParamLimits

0x3f34,	// (0x000478f1) main_camera2_pane_t1

0x3f34,	// (0x000478f1) main_camera2_pane_t2_ParamLimits

0x3f34,	// (0x000478f1) main_camera2_pane_t2

0x3f34,	// (0x000478f1) main_camera2_pane_t3_ParamLimits

0x3f34,	// (0x000478f1) main_camera2_pane_t3

0x3f34,	// (0x000478f1) main_camera2_pane_t4_ParamLimits

0x3f34,	// (0x000478f1) main_camera2_pane_t4

0x0006,

0xf534,	// (0x00052ef1) main_camera2_pane_t_ParamLimits

0xf534,	// (0x00052ef1) main_camera2_pane_t

0xdc3a,	// (0x000515f7) cams_zoom_pane_cp4_ParamLimits

0xdc3a,	// (0x000515f7) cams_zoom_pane_cp4

0xd2c2,	// (0x00050c7f) image2_cif_pane_ParamLimits

0xd2c2,	// (0x00050c7f) image2_cif_pane

0xa15c,	// (0x0004db19) image2_subqcif_pane_ParamLimits

0xa15c,	// (0x0004db19) image2_subqcif_pane

0x3f48,	// (0x00047905) main_video2_pane_g1_ParamLimits

0x3f48,	// (0x00047905) main_video2_pane_g1

0x3f48,	// (0x00047905) main_video2_pane_g2_ParamLimits

0x3f48,	// (0x00047905) main_video2_pane_g2

0x3f48,	// (0x00047905) main_video2_pane_g3_ParamLimits

0x3f48,	// (0x00047905) main_video2_pane_g3

0x3f48,	// (0x00047905) main_video2_pane_g4_ParamLimits

0x3f48,	// (0x00047905) main_video2_pane_g4

0x3f48,	// (0x00047905) main_video2_pane_g5_ParamLimits

0x3f48,	// (0x00047905) main_video2_pane_g5

0x3f48,	// (0x00047905) main_video2_pane_g6_ParamLimits

0x3f48,	// (0x00047905) main_video2_pane_g6

0x0005,

0xf543,	// (0x00052f00) main_video2_pane_g_ParamLimits

0xf543,	// (0x00052f00) main_video2_pane_g

0x3f56,	// (0x00047913) main_video2_pane_t1_ParamLimits

0x3f56,	// (0x00047913) main_video2_pane_t1

0x3f56,	// (0x00047913) main_video2_pane_t2_ParamLimits

0x3f56,	// (0x00047913) main_video2_pane_t2

0x3f56,	// (0x00047913) main_video2_pane_t3_ParamLimits

0x3f56,	// (0x00047913) main_video2_pane_t3

0x0002,

0xf550,	// (0x00052f0d) main_video2_pane_t_ParamLimits

0xf550,	// (0x00052f0d) main_video2_pane_t

0x38ba,	// (0x00047277) call_muted_g2

0x0001,

0xf4f7,	// (0x00052eb4) call_muted_g

0xa57d,	// (0x0004df3a) main_mup2_pane

0xb6b5,	// (0x0004f072) main_mup2_pane_g1_ParamLimits

0xb6b5,	// (0x0004f072) main_mup2_pane_g1

0xb6b5,	// (0x0004f072) main_mup2_pane_g2_ParamLimits

0xb6b5,	// (0x0004f072) main_mup2_pane_g2

0xa899,	// (0x0004e256) main_mup_pane_g13_cp1

0xa0e5,	// (0x0004daa2) mup_volume_pane_cp1

0xb6b5,	// (0x0004f072) main_mup2_pane_g4_ParamLimits

0xb6b5,	// (0x0004f072) main_mup2_pane_g4

0xb6b5,	// (0x0004f072) main_mup2_pane_g5_ParamLimits

0xb6b5,	// (0x0004f072) main_mup2_pane_g5

0xb6b5,	// (0x0004f072) main_mup2_pane_g6_ParamLimits

0xb6b5,	// (0x0004f072) main_mup2_pane_g6

0xb6b5,	// (0x0004f072) main_mup2_pane_g7_ParamLimits

0xb6b5,	// (0x0004f072) main_mup2_pane_g7

0x0006,

0xf557,	// (0x00052f14) main_mup2_pane_g_ParamLimits

0xf557,	// (0x00052f14) main_mup2_pane_g

0xb6c3,	// (0x0004f080) main_mup2_pane_t1_ParamLimits

0xb6c3,	// (0x0004f080) main_mup2_pane_t1

0xb6c3,	// (0x0004f080) main_mup2_pane_t2_ParamLimits

0xb6c3,	// (0x0004f080) main_mup2_pane_t2

0xb6c3,	// (0x0004f080) main_mup2_pane_t3_ParamLimits

0xb6c3,	// (0x0004f080) main_mup2_pane_t3

0xb6c3,	// (0x0004f080) main_mup2_pane_t4_ParamLimits

0xb6c3,	// (0x0004f080) main_mup2_pane_t4

0xb6c3,	// (0x0004f080) main_mup2_pane_t5_ParamLimits

0xb6c3,	// (0x0004f080) main_mup2_pane_t5

0xb6c3,	// (0x0004f080) main_mup2_pane_t6_ParamLimits

0xb6c3,	// (0x0004f080) main_mup2_pane_t6

0x0005,

0xf566,	// (0x00052f23) main_mup2_pane_t_ParamLimits

0xf566,	// (0x00052f23) main_mup2_pane_t

0xb6d7,	// (0x0004f094) mup2_visualizer_pane_ParamLimits

0xb6d7,	// (0x0004f094) mup2_visualizer_pane

0xb6d7,	// (0x0004f094) mup_progress_pane_cp_ParamLimits

0xb6d7,	// (0x0004f094) mup_progress_pane_cp

0xd2d0,	// (0x00050c8d) mup_volume_pane_cp_ParamLimits

0xd2d0,	// (0x00050c8d) mup_volume_pane_cp

0xa853,	// (0x0004e210) mup2_visualizer_pane_g1_ParamLimits

0xa853,	// (0x0004e210) mup2_visualizer_pane_g1

0xa861,	// (0x0004e21e) mup2_visualizer_pane_g2_ParamLimits

0xa861,	// (0x0004e21e) mup2_visualizer_pane_g2

0xa861,	// (0x0004e21e) mup2_visualizer_pane_g3_ParamLimits

0xa861,	// (0x0004e21e) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00052a39) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00052a39) mup2_visualizer_pane_g

0xa0e5,	// (0x0004daa2) aid_size_cell_fmradio

0x3a6c,	// (0x00047429) aid_height_parent_landcape

0xacb0,	// (0x0004e66d) wml_content_pane_cp

0xacb8,	// (0x0004e675) wml_tabs_pane

0xacc1,	// (0x0004e67e) popup_wml_miniature_window

0xacc9,	// (0x0004e686) scroll_pane_cp021

0xacdd,	// (0x0004e69a) wml_content_pane_comp8

0xa57d,	// (0x0004df3a) bg_popup_sub_pane_cp05

0xd2e6,	// (0x00050ca3) popup_wml_miniature_window_g1

0xd2ee,	// (0x00050cab) wml_miniature_view_pane

0x3f6a,	// (0x00047927) aid_size_wml_view

0x3f72,	// (0x0004792f) wml_miniature_view_pane_g1

0x3f7b,	// (0x00047938) wml_miniature_view_pane_g2

0x3f84,	// (0x00047941) wml_miniature_view_pane_g3

0x3f8c,	// (0x00047949) wml_miniature_view_pane_g4

0x3f94,	// (0x00047951) wml_miniature_view_pane_g5

0x3f9c,	// (0x00047959) wml_miniature_view_pane_g6

0x3fa4,	// (0x00047961) wml_miniature_view_pane_g7

0x3fac,	// (0x00047969) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x00052f30) wml_miniature_view_pane_g

0xd2f6,	// (0x00050cb3) background_graphic_ParamLimits

0xd2f6,	// (0x00050cb3) background_graphic

0xd302,	// (0x00050cbf) wml_tabs_2_pane

0xd30b,	// (0x00050cc8) wml_tabs_3_pane_ParamLimits

0xd30b,	// (0x00050cc8) wml_tabs_3_pane

0xd31d,	// (0x00050cda) wml_tabs_4_pane_ParamLimits

0xd31d,	// (0x00050cda) wml_tabs_4_pane

0xd333,	// (0x00050cf0) wml_tabs_5_pane_ParamLimits

0xd333,	// (0x00050cf0) wml_tabs_5_pane

0xd34d,	// (0x00050d0a) wml_tabs_pane_g2_ParamLimits

0xd34d,	// (0x00050d0a) wml_tabs_pane_g2

0xd362,	// (0x00050d1f) wml_tabs_pane_g3_ParamLimits

0xd362,	// (0x00050d1f) wml_tabs_pane_g3

0xd377,	// (0x00050d34) wml_tabs_2_active_pane_ParamLimits

0xd377,	// (0x00050d34) wml_tabs_2_active_pane

0xd377,	// (0x00050d34) wml_tabs_2_passive_pane_ParamLimits

0xd377,	// (0x00050d34) wml_tabs_2_passive_pane

0x3fb4,	// (0x00047971) wml_tabs_3_active_pane_cp_ParamLimits

0x3fb4,	// (0x00047971) wml_tabs_3_active_pane_cp

0x3fc9,	// (0x00047986) wml_tabs_3_passive_pane_ParamLimits

0x3fc9,	// (0x00047986) wml_tabs_3_passive_pane

0x3fdc,	// (0x00047999) wml_tabs_3_passive_pane_cp_ParamLimits

0x3fdc,	// (0x00047999) wml_tabs_3_passive_pane_cp

0x3ff3,	// (0x000479b0) tabs_4_active_pane

0x3ffb,	// (0x000479b8) tabs_4_passive_pane

0x4005,	// (0x000479c2) tabs_4_passive_pane_cp

0x400d,	// (0x000479ca) tabs_4_passive_pane_cp2

0x3830,	// (0x000471ed) aid_height_text

0xb6d7,	// (0x0004f094) mup_volume_cont_pane_ParamLimits

0xb6d7,	// (0x0004f094) mup_volume_cont_pane

0xa0e5,	// (0x0004daa2) aid_size_cell_pinb

0xa0e5,	// (0x0004daa2) aid_size_list_pinb

0xb6d7,	// (0x0004f094) mup2_volume_cont_pane_ParamLimits

0xb6d7,	// (0x0004f094) mup2_volume_cont_pane

0xc9ff,	// (0x000503bc) mup2_volume_cont_pane_g1_ParamLimits

0xc9ff,	// (0x000503bc) mup2_volume_cont_pane_g1

0x1069,	// (0x00044a26) aid_size_cell_touch_ParamLimits

0x1069,	// (0x00044a26) aid_size_cell_touch

0x122f,	// (0x00044bec) touch_pane_ParamLimits

0x122f,	// (0x00044bec) touch_pane

0xa0e5,	// (0x0004daa2) main_rss2_pane

0xd38e,	// (0x00050d4b) listscroll_rss2_pane

0xd397,	// (0x00050d54) rss2_navigation_pane

0xd39f,	// (0x00050d5c) list_rss2_pane

0xb3ab,	// (0x0004ed68) scroll_pane_cp22

0xd3a7,	// (0x00050d64) rss2_navigation_pane_g1

0xd3b0,	// (0x00050d6d) rss2_navigation_pane_g2

0xd3b8,	// (0x00050d75) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x00052f41) rss2_navigation_pane_g

0xd3c0,	// (0x00050d7d) rss2_navigation_pane_t1

0x4017,	// (0x000479d4) rss2_list_single_pane_ParamLimits

0x4017,	// (0x000479d4) rss2_list_single_pane

0xd3ce,	// (0x00050d8b) rss2_list_single_pane_t2

0xd3dc,	// (0x00050d99) rss2_list_single_pane_t3_ParamLimits

0xd3dc,	// (0x00050d99) rss2_list_single_pane_t3

0xd3f9,	// (0x00050db6) rss2_list_single_pane_t4

0x2bc7,	// (0x00046584) smil_status_pane_g1

0xa15c,	// (0x0004db19) main_image2_pane_ParamLimits

0xa15c,	// (0x0004db19) main_image2_pane

0xc9f1,	// (0x000503ae) main_camera2_pane_g9_ParamLimits

0xc9f1,	// (0x000503ae) main_camera2_pane_g9

0x3f34,	// (0x000478f1) main_camera2_pane_t5_ParamLimits

0x3f34,	// (0x000478f1) main_camera2_pane_t5

0xd2ae,	// (0x00050c6b) main_camera2_pane_t6_ParamLimits

0xd2ae,	// (0x00050c6b) main_camera2_pane_t6

0x402c,	// (0x000479e9) main_image2_pane_g1_ParamLimits

0x402c,	// (0x000479e9) main_image2_pane_g1

0x3504,	// (0x00046ec1) smil2_video_pane_ParamLimits

0x3504,	// (0x00046ec1) smil2_video_pane

0xa113,	// (0x0004dad0) aid_zoom_text_primary_cp

0xa152,	// (0x0004db0f) popup_preview_fixed_window

0xac19,	// (0x0004e5d6) im_reading_pane_g1

0x3f26,	// (0x000478e3) cams2_bc_adjust_pane_cp_ParamLimits

0x3f26,	// (0x000478e3) cams2_bc_adjust_pane_cp

0xb6d7,	// (0x0004f094) cams2_bc_adjust_pane_ParamLimits

0xb6d7,	// (0x0004f094) cams2_bc_adjust_pane

0xa899,	// (0x0004e256) cams2_bc_adjust_pane_g1

0xa0e5,	// (0x0004daa2) cams2_slider_pane

0xa899,	// (0x0004e256) cams2_slider_pane_g1

0xa899,	// (0x0004e256) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x00052f48) cams2_slider_pane_g

0x12f7,	// (0x00044cb4) calc_display_pane_ParamLimits

0x131c,	// (0x00044cd9) calc_paper_pane_ParamLimits

0x133f,	// (0x00044cfc) grid_calc_pane_ParamLimits

0xb268,	// (0x0004ec25) popup_clock_digital_window_t1_ParamLimits

0xb8eb,	// (0x0004f2a8) main_image_pane_t1

0x12d9,	// (0x00044c96) aid_size_cell_calc_ParamLimits

0x12d9,	// (0x00044c96) aid_size_cell_calc

0x3ab2,	// (0x0004746f) popup_blid_sat_info2_window_ParamLimits

0x3ab2,	// (0x0004746f) popup_blid_sat_info2_window

0xd407,	// (0x00050dc4) aid_size_cell_blid

0xd2c2,	// (0x00050c7f) bg_popup_window_pane_cp07

0xd424,	// (0x00050de1) grid_popup_blid_pane

0xd42e,	// (0x00050deb) heading_pane_cp05_ParamLimits

0xd42e,	// (0x00050deb) heading_pane_cp05

0xd4f8,	// (0x00050eb5) cell_popup_blid_pane_ParamLimits

0xd4f8,	// (0x00050eb5) cell_popup_blid_pane

0xd51c,	// (0x00050ed9) cell_popup_blid_pane_g1

0xd524,	// (0x00050ee1) cell_popup_blid_pane_t1

0xb6d7,	// (0x0004f094) mup2_indicator_pane_ParamLimits

0xb6d7,	// (0x0004f094) mup2_indicator_pane

0xa0e5,	// (0x0004daa2) mup2_visualizer_osc_pane

0xd2d0,	// (0x00050c8d) mup2_visualizer_spec_pane_ParamLimits

0xd2d0,	// (0x00050c8d) mup2_visualizer_spec_pane

0xa0e5,	// (0x0004daa2) mup2_spec_half_pane

0xa0e5,	// (0x0004daa2) mup2_spec_half_pane_cp

0xd532,	// (0x00050eef) mup2_spec_bar_pane_ParamLimits

0xd532,	// (0x00050eef) mup2_spec_bar_pane

0xa899,	// (0x0004e256) mup2_spec_bar_pane_g1

0xd551,	// (0x00050f0e) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x00052f6e) mup2_spec_bar_pane_g

0xa0e5,	// (0x0004daa2) mup2_osc_middle_pane

0xa899,	// (0x0004e256) mup2_visualizer_osc_pane_g1

0xa18a,	// (0x0004db47) popup_number_entry_window_t1_ParamLimits

0xa19d,	// (0x0004db5a) popup_number_entry_window_t2_ParamLimits

0xa1af,	// (0x0004db6c) popup_number_entry_window_t3_ParamLimits

0x1281,	// (0x00044c3e) popup_number_entry_window_t5_ParamLimits

0x1281,	// (0x00044c3e) popup_number_entry_window_t5

0xf01d,	// (0x000529da) popup_number_entry_window_t_ParamLimits

0xa1c1,	// (0x0004db7e) text_title_cp2_ParamLimits

0xb7e3,	// (0x0004f1a0) aid_hotspot_pointer_text2_pane

0xb809,	// (0x0004f1c6) main_viewer_pane_g9_ParamLimits

0xb809,	// (0x0004f1c6) main_viewer_pane_g9

0xae52,	// (0x0004e80f) cale_month_pane_t1_ParamLimits

0xaebd,	// (0x0004e87a) bg_cale_pane_ParamLimits

0xaed5,	// (0x0004e892) list_cale_pane_ParamLimits

0xaee6,	// (0x0004e8a3) listscroll_cale_day_pane_t1

0xaef8,	// (0x0004e8b5) scroll_pane_cp09_ParamLimits

0x2f84,	// (0x00046941) main_mup_eq_pane_t1_ParamLimits

0x2f84,	// (0x00046941) main_mup_eq_pane_t1

0x2f9e,	// (0x0004695b) main_mup_eq_pane_t2_ParamLimits

0x2f9e,	// (0x0004695b) main_mup_eq_pane_t2

0x2fb8,	// (0x00046975) main_mup_eq_pane_t3_ParamLimits

0x2fb8,	// (0x00046975) main_mup_eq_pane_t3

0x2fd4,	// (0x00046991) main_mup_eq_pane_t4_ParamLimits

0x2fd4,	// (0x00046991) main_mup_eq_pane_t4

0x2ff0,	// (0x000469ad) main_mup_eq_pane_t5_ParamLimits

0x2ff0,	// (0x000469ad) main_mup_eq_pane_t5

0x300c,	// (0x000469c9) main_mup_eq_pane_t6_ParamLimits

0x300c,	// (0x000469c9) main_mup_eq_pane_t6

0x3020,	// (0x000469dd) main_mup_eq_pane_t7_ParamLimits

0x3020,	// (0x000469dd) main_mup_eq_pane_t7

0x3034,	// (0x000469f1) main_mup_eq_pane_t8_ParamLimits

0x3034,	// (0x000469f1) main_mup_eq_pane_t8

0x3048,	// (0x00046a05) main_mup_eq_pane_t9_ParamLimits

0x3048,	// (0x00046a05) main_mup_eq_pane_t9

0x3062,	// (0x00046a1f) main_mup_eq_pane_t10_ParamLimits

0x3062,	// (0x00046a1f) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x00052d34) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x00052d34) main_mup_eq_pane_t

0x3111,	// (0x00046ace) mup_equalizer_pane_cp5_ParamLimits

0x3125,	// (0x00046ae2) mup_equalizer_pane_cp6_ParamLimits

0x3139,	// (0x00046af6) mup_equalizer_pane_cp7_ParamLimits

0xa0e5,	// (0x0004daa2) main_gallery_pane

0xc993,	// (0x00050350) smil2_volume_pane

0xc99b,	// (0x00050358) smil_status_volume_pane_g1_ParamLimits

0xc9ae,	// (0x0005036b) smil_status_volume_pane_g2_ParamLimits

0xc9c1,	// (0x0005037e) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x00052ec7) smil_status_volume_pane_g_ParamLimits

0xd2c2,	// (0x00050c7f) bg_popup_window_pane_cp07_ParamLimits

0xd40f,	// (0x00050dcc) blid_firmament_pane

0xa15c,	// (0x0004db19) aid_size_cell_gallery_ParamLimits

0xa15c,	// (0x0004db19) aid_size_cell_gallery

0xa15c,	// (0x0004db19) grid_gallery_pane_ParamLimits

0xa15c,	// (0x0004db19) grid_gallery_pane

0xd2c2,	// (0x00050c7f) cell_gallery_pane_ParamLimits

0xd2c2,	// (0x00050c7f) cell_gallery_pane

0xa15c,	// (0x0004db19) bg_cell_gallery_focus_pane_ParamLimits

0xa15c,	// (0x0004db19) bg_cell_gallery_focus_pane

0xa853,	// (0x0004e210) cell_gallery_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_gallery_pane_g1

0xa853,	// (0x0004e210) cell_gallery_pane_g2_ParamLimits

0xa853,	// (0x0004e210) cell_gallery_pane_g2

0xa853,	// (0x0004e210) cell_gallery_pane_g3_ParamLimits

0xa853,	// (0x0004e210) cell_gallery_pane_g3

0xa861,	// (0x0004e21e) cell_gallery_pane_g4_ParamLimits

0xa861,	// (0x0004e21e) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x00052f73) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x00052f73) cell_gallery_pane_g

0xd55b,	// (0x00050f18) bg_cell_gallery_focus_pane_g1

0xd563,	// (0x00050f20) bg_cell_gallery_focus_pane_g2

0xd56b,	// (0x00050f28) bg_cell_gallery_focus_pane_g3

0xd573,	// (0x00050f30) bg_cell_gallery_focus_pane_g4

0xd57b,	// (0x00050f38) bg_cell_gallery_focus_pane_g5

0xd583,	// (0x00050f40) bg_cell_gallery_focus_pane_g6

0xd58b,	// (0x00050f48) bg_cell_gallery_focus_pane_g7

0xd593,	// (0x00050f50) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x00052f7c) bg_cell_gallery_focus_pane_g

0xd59b,	// (0x00050f58) aid_firma_cardinal

0xd5af,	// (0x00050f6c) blid_firmament_pane_t1

0xd5c6,	// (0x00050f83) blid_firmament_pane_t2

0xd5dd,	// (0x00050f9a) blid_firmament_pane_t3

0xd5f4,	// (0x00050fb1) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x00052f8d) blid_firmament_pane_t

0xd60b,	// (0x00050fc8) blid_sat_info_pane

0xa899,	// (0x0004e256) blid_sat_info_pane_g1

0xa899,	// (0x0004e256) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00052a49) blid_sat_info_pane_g

0xd61b,	// (0x00050fd8) blid_sat_info_pane_t1

0xd629,	// (0x00050fe6) smil2_volume_content_pane

0xd632,	// (0x00050fef) smil2_volume_pane_g1

0xa9ac,	// (0x0004e369) smil2_volume_content_pane_g1

0xd63a,	// (0x00050ff7) smil2_volume_content_pane_g2

0xd643,	// (0x00051000) smil2_volume_content_pane_g3

0xd64c,	// (0x00051009) smil2_volume_content_pane_g4

0xd655,	// (0x00051012) smil2_volume_content_pane_g5

0xd65e,	// (0x0005101b) smil2_volume_content_pane_g6

0xd667,	// (0x00051024) smil2_volume_content_pane_g7

0xd670,	// (0x0005102d) smil2_volume_content_pane_g8

0xd679,	// (0x00051036) smil2_volume_content_pane_g9

0xd682,	// (0x0005103f) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x00052f96) smil2_volume_content_pane_g

0x17f8,	// (0x000451b5) cale_week_day_heading_pane_t1_ParamLimits

0x1822,	// (0x000451df) cale_week_day_heading_pane_t2_ParamLimits

0x1851,	// (0x0004520e) cale_week_day_heading_pane_t3_ParamLimits

0x1880,	// (0x0004523d) cale_week_day_heading_pane_t4_ParamLimits

0x18af,	// (0x0004526c) cale_week_day_heading_pane_t5_ParamLimits

0x18e6,	// (0x000452a3) cale_week_day_heading_pane_t6_ParamLimits

0x191d,	// (0x000452da) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00052ae1) cale_week_day_heading_pane_t_ParamLimits

0xab04,	// (0x0004e4c1) bg_cale_side_pane_ParamLimits

0x1947,	// (0x00045304) cale_week_time_pane_t1_ParamLimits

0x1961,	// (0x0004531e) cale_week_time_pane_t2_ParamLimits

0x197b,	// (0x00045338) cale_week_time_pane_t3_ParamLimits

0x1995,	// (0x00045352) cale_week_time_pane_t4_ParamLimits

0x19af,	// (0x0004536c) cale_week_time_pane_t5_ParamLimits

0x19c9,	// (0x00045386) cale_week_time_pane_t6_ParamLimits

0x19e3,	// (0x000453a0) cale_week_time_pane_t7_ParamLimits

0x19fd,	// (0x000453ba) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00052af0) cale_week_time_pane_t_ParamLimits

0x1a17,	// (0x000453d4) cell_cale_week_pane_g2_ParamLimits

0xab04,	// (0x0004e4c1) bg_cale_side_pane_cp01_ParamLimits

0x29ce,	// (0x0004638b) cale_month_week_pane_t1_ParamLimits

0x29e7,	// (0x000463a4) cale_month_week_pane_t2_ParamLimits

0x2a00,	// (0x000463bd) cale_month_week_pane_t3_ParamLimits

0x2a19,	// (0x000463d6) cale_month_week_pane_t4_ParamLimits

0x2a32,	// (0x000463ef) cale_month_week_pane_t5_ParamLimits

0x2a4b,	// (0x00046408) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00052bbe) cale_month_week_pane_t_ParamLimits

0xae64,	// (0x0004e821) cell_cale_month_pane_g1_ParamLimits

0xa0e5,	// (0x0004daa2) main_cale_event_viewer_pane

0xa0e5,	// (0x0004daa2) listscroll_cale_event_viewer_pane

0xd68b,	// (0x00051048) list_cale_ev_pane

0xd693,	// (0x00051050) scroll_pane_cp023

0xd69f,	// (0x0005105c) field_cale_ev_pane_ParamLimits

0xd69f,	// (0x0005105c) field_cale_ev_pane

0xd6bd,	// (0x0005107a) field_cale_ev_content_pane_ParamLimits

0xd6bd,	// (0x0005107a) field_cale_ev_content_pane

0xd6c9,	// (0x00051086) field_cale_ev_pane_g1_ParamLimits

0xd6c9,	// (0x00051086) field_cale_ev_pane_g1

0xd75b,	// (0x00051118) field_cale_ev_pane_g2_ParamLimits

0xd75b,	// (0x00051118) field_cale_ev_pane_g2

0xd773,	// (0x00051130) field_cale_ev_pane_g3_ParamLimits

0xd773,	// (0x00051130) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x00052fab) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x00052fab) field_cale_ev_pane_g

0xd78b,	// (0x00051148) field_cale_ev_pane_t1_ParamLimits

0xd78b,	// (0x00051148) field_cale_ev_pane_t1

0xaa2f,	// (0x0004e3ec) field_cale_ev_content_pane_t1_ParamLimits

0xaa2f,	// (0x0004e3ec) field_cale_ev_content_pane_t1

0xb77a,	// (0x0004f137) bg_button_pane_cp01

0x1525,	// (0x00044ee2) listscroll_cale_week_pane_ParamLimits

0xaaaf,	// (0x0004e46c) popup_toolbar_window_cp01

0xaad5,	// (0x0004e492) listscroll_cale_week_pane_t1_ParamLimits

0x1525,	// (0x00044ee2) listscroll_cale_day_pane_ParamLimits

0xaaaf,	// (0x0004e46c) popup_toolbar_window_cp02

0xaee6,	// (0x0004e8a3) listscroll_cale_day_pane_t1_ParamLimits

0x1525,	// (0x00044ee2) main_cale_month_pane_ParamLimits

0xc911,	// (0x000502ce) popup_toolbar_window_cp03_ParamLimits

0xc911,	// (0x000502ce) popup_toolbar_window_cp03

0x33cc,	// (0x00046d89) main_image_pane_g2_ParamLimits

0x33cc,	// (0x00046d89) main_image_pane_g2

0x33dd,	// (0x00046d9a) main_image_pane_g3_ParamLimits

0x33dd,	// (0x00046d9a) main_image_pane_g3

0x0002,

0xf409,	// (0x00052dc6) main_image_pane_g_ParamLimits

0xf409,	// (0x00052dc6) main_image_pane_g

0xb8eb,	// (0x0004f2a8) main_image_pane_t1_ParamLimits

0x33ee,	// (0x00046dab) main_image_pane_t2_ParamLimits

0x33ee,	// (0x00046dab) main_image_pane_t2

0x3400,	// (0x00046dbd) main_image_pane_t3_ParamLimits

0x3400,	// (0x00046dbd) main_image_pane_t3

0x3428,	// (0x00046de5) main_image_pane_t4_ParamLimits

0x3428,	// (0x00046de5) main_image_pane_t4

0x0003,

0xf410,	// (0x00052dcd) main_image_pane_t_ParamLimits

0xf410,	// (0x00052dcd) main_image_pane_t

0x3448,	// (0x00046e05) popup_image_details_window_cp01

0x3452,	// (0x00046e0f) popup_toobar_trans_pane_cp01_ParamLimits

0x3452,	// (0x00046e0f) popup_toobar_trans_pane_cp01

0x3b91,	// (0x0004754e) popup_image_details_window_ParamLimits

0x3b91,	// (0x0004754e) popup_image_details_window

0xc8e4,	// (0x000502a1) popup_image_focus_window

0xc9e3,	// (0x000503a0) camera2_autofocus_pane_ParamLimits

0xc9e3,	// (0x000503a0) camera2_autofocus_pane

0xa0e5,	// (0x0004daa2) bg_popup_sub_pane_cp06

0xd7a2,	// (0x0005115f) popup_image_focus_window_g1

0xd7aa,	// (0x00051167) popup_image_focus_window_g2

0xd7b2,	// (0x0005116f) popup_image_focus_window_g3

0xd7ba,	// (0x00051177) popup_image_focus_window_g4

0x0003,

0x0107,	// (0x00043ac4) popup_image_focus_window_g

0xd7c2,	// (0x0005117f) popup_image_focus_window_t1

0xd7d0,	// (0x0005118d) popup_image_focus_window_t2

0xd7e0,	// (0x0005119d) popup_image_focus_window_t3

0x0002,

0x0110,	// (0x00043acd) popup_image_focus_window_t

0xa853,	// (0x0004e210) camera2_autofocus_pane_g1

0xa15c,	// (0x0004db19) bg_tb_trans_pane_cp01

0xd7ee,	// (0x000511ab) popup_image_details_window_g1

0xd801,	// (0x000511be) popup_image_details_window_g2

0x0002,

0x0122,	// (0x00043adf) popup_image_details_window_g

0xd82a,	// (0x000511e7) popup_image_details_window_t1

0xd83c,	// (0x000511f9) popup_image_details_window_t2

0xd855,	// (0x00051212) popup_image_details_window_t3

0xd869,	// (0x00051226) popup_image_details_window_t4

0xd884,	// (0x00051241) popup_image_details_window_t5

0x0004,

0x0129,	// (0x00043ae6) popup_image_details_window_t

0xa8e3,	// (0x0004e2a0) bg_calc_paper_pane_ParamLimits

0xa0e5,	// (0x0004daa2) grid_highlight_pane_cp013

0xa8f7,	// (0x0004e2b4) list_calc_pane_ParamLimits

0xa909,	// (0x0004e2c6) scroll_pane_cp024

0xa911,	// (0x0004e2ce) bg_calc_display_pane_ParamLimits

0x1381,	// (0x00044d3e) calc_display_pane_t1_ParamLimits

0x1396,	// (0x00044d53) calc_display_pane_t2_ParamLimits

0xa91d,	// (0x0004e2da) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00052a61) calc_display_pane_t_ParamLimits

0x1456,	// (0x00044e13) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00052a7e) cell_calc_pane_g

0x145f,	// (0x00044e1c) cell_calc_pane_t1

0xa98a,	// (0x0004e347) grid_highlight_pane_cp02_ParamLimits

0xa9a0,	// (0x0004e35d) toolbar_button_pane_cp01_ParamLimits

0xa9a0,	// (0x0004e35d) toolbar_button_pane_cp01

0xb930,	// (0x0004f2ed) temp_image_control_pane_ParamLimits

0xb930,	// (0x0004f2ed) temp_image_control_pane

0xa15c,	// (0x0004db19) main_mp3_pane

0xd89e,	// (0x0005125b) temp_image_control_pane_g1_ParamLimits

0xd89e,	// (0x0005125b) temp_image_control_pane_g1

0xd8ac,	// (0x00051269) temp_image_control_pane_g2_ParamLimits

0xd8ac,	// (0x00051269) temp_image_control_pane_g2

0xd8be,	// (0x0005127b) temp_image_control_pane_g3_ParamLimits

0xd8be,	// (0x0005127b) temp_image_control_pane_g3

0x4042,	// (0x000479ff) temp_image_control_pane_g4_ParamLimits

0x4042,	// (0x000479ff) temp_image_control_pane_g4

0x0003,

0xf600,	// (0x00052fbd) temp_image_control_pane_g_ParamLimits

0xf600,	// (0x00052fbd) temp_image_control_pane_g

0xd89e,	// (0x0005125b) main_mp3_pane_g1

0x4055,	// (0x00047a12) main_mp3_pane_g2

0x0007,

0xf609,	// (0x00052fc6) main_mp3_pane_g

0xd8f3,	// (0x000512b0) main_mp3_pane_t1

0xa861,	// (0x0004e21e) main_camera_pane_g8_ParamLimits

0xa861,	// (0x0004e21e) main_camera_pane_g8

0x1be1,	// (0x0004559e) main_video_pane_g7_ParamLimits

0x1be1,	// (0x0004559e) main_video_pane_g7

0xa8b7,	// (0x0004e274) main_camera2_pane_t7_ParamLimits

0xa8b7,	// (0x0004e274) main_camera2_pane_t7

0xac70,	// (0x0004e62d) scroll_pane_cp025_ParamLimits

0xac70,	// (0x0004e62d) scroll_pane_cp025

0xac84,	// (0x0004e641) scroll_pane_cp026_ParamLimits

0xac84,	// (0x0004e641) scroll_pane_cp026

0xac93,	// (0x0004e650) wml_content_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_touch_calib_pane

0x4129,	// (0x00047ae6) main_touch_calib_pane_g1

0x413b,	// (0x00047af8) main_touch_calib_pane_g2

0x414d,	// (0x00047b0a) main_touch_calib_pane_g3

0x415f,	// (0x00047b1c) main_touch_calib_pane_g4

0x0003,

0xf627,	// (0x00052fe4) main_touch_calib_pane_g

0x4171,	// (0x00047b2e) main_touch_calib_pane_t1

0x418b,	// (0x00047b48) main_touch_calib_pane_t2

0x0004,

0xf630,	// (0x00052fed) main_touch_calib_pane_t

0xb487,	// (0x0004ee44) mup_progress_pane_cp02

0xb4bc,	// (0x0004ee79) navi_pane_g1

0xb577,	// (0x0004ef34) navi_pane_mp_t3

0xa15c,	// (0x0004db19) main_mp3_pane_ParamLimits

0x3d16,	// (0x000476d3) navi_pane_ParamLimits

0xd89e,	// (0x0005125b) main_mp3_pane_g1_ParamLimits

0x4055,	// (0x00047a12) main_mp3_pane_g2_ParamLimits

0x4063,	// (0x00047a20) main_mp3_pane_g3_ParamLimits

0x4063,	// (0x00047a20) main_mp3_pane_g3

0x4071,	// (0x00047a2e) main_mp3_pane_g4_ParamLimits

0x4071,	// (0x00047a2e) main_mp3_pane_g4

0xa853,	// (0x0004e210) main_mp3_pane_g5_ParamLimits

0xa853,	// (0x0004e210) main_mp3_pane_g5

0xd8ce,	// (0x0005128b) main_mp3_pane_g6_ParamLimits

0xd8ce,	// (0x0005128b) main_mp3_pane_g6

0xd8db,	// (0x00051298) main_mp3_pane_g7_ParamLimits

0xd8db,	// (0x00051298) main_mp3_pane_g7

0xd8e7,	// (0x000512a4) main_mp3_pane_g8_ParamLimits

0xd8e7,	// (0x000512a4) main_mp3_pane_g8

0xf609,	// (0x00052fc6) main_mp3_pane_g_ParamLimits

0x407d,	// (0x00047a3a) main_mp3_pane_t2

0x408b,	// (0x00047a48) main_mp3_pane_t3

0xd901,	// (0x000512be) main_mp3_pane_t4

0xd90f,	// (0x000512cc) main_mp3_pane_t5

0x0005,

0xf61a,	// (0x00052fd7) main_mp3_pane_t

0xd91d,	// (0x000512da) mup_progress_pane_cp01

0xa10b,	// (0x0004dac8) aid_zoom_text_secondary2

0xd68b,	// (0x00051048) list_cale_ev2_pane

0xd693,	// (0x00051050) scroll_pane_cp023_ParamLimits

0x41e1,	// (0x00047b9e) field_cale_ev2_pane_ParamLimits

0x41e1,	// (0x00047b9e) field_cale_ev2_pane

0xca15,	// (0x000503d2) field_cale_ev2_pane_g1_ParamLimits

0xca15,	// (0x000503d2) field_cale_ev2_pane_g1

0xca21,	// (0x000503de) field_cale_ev2_pane_g2_ParamLimits

0xca21,	// (0x000503de) field_cale_ev2_pane_g2

0xca39,	// (0x000503f6) field_cale_ev2_pane_g3_ParamLimits

0xca39,	// (0x000503f6) field_cale_ev2_pane_g3

0x0003,

0xf63b,	// (0x00052ff8) field_cale_ev2_pane_g_ParamLimits

0xf63b,	// (0x00052ff8) field_cale_ev2_pane_g

0x0ac6,	// (0x00044483) field_cale_ev2_pane_t1_ParamLimits

0x0ac6,	// (0x00044483) field_cale_ev2_pane_t1

0x0add,	// (0x0004449a) field_cale_ev2_pane_t2_ParamLimits

0x0add,	// (0x0004449a) field_cale_ev2_pane_t2

0x0001,

0xf644,	// (0x00053001) field_cale_ev2_pane_t_ParamLimits

0xf644,	// (0x00053001) field_cale_ev2_pane_t

0x32a2,	// (0x00046c5f) main_postcard_pane_g5_ParamLimits

0x32a2,	// (0x00046c5f) main_postcard_pane_g5

0x32b8,	// (0x00046c75) main_postcard_pane_g6_ParamLimits

0x32b8,	// (0x00046c75) main_postcard_pane_g6

0xa15c,	// (0x0004db19) camera2_autofocus_pane_cp_ParamLimits

0xa15c,	// (0x0004db19) camera2_autofocus_pane_cp

0xa15c,	// (0x0004db19) main_mup3_pane

0x4245,	// (0x00047c02) main_mup3_pane_g1_ParamLimits

0x4245,	// (0x00047c02) main_mup3_pane_g1

0x4297,	// (0x00047c54) main_mup3_pane_g2_ParamLimits

0x4297,	// (0x00047c54) main_mup3_pane_g2

0x42ff,	// (0x00047cbc) main_mup3_pane_g3_ParamLimits

0x42ff,	// (0x00047cbc) main_mup3_pane_g3

0x4363,	// (0x00047d20) main_mup3_pane_g4_ParamLimits

0x4363,	// (0x00047d20) main_mup3_pane_g4

0x43c7,	// (0x00047d84) main_mup3_pane_g5_ParamLimits

0x43c7,	// (0x00047d84) main_mup3_pane_g5

0xefc5,	// (0x00052982) main_mup3_pane_g6_ParamLimits

0xefc5,	// (0x00052982) main_mup3_pane_g6

0xa861,	// (0x0004e21e) main_mup3_pane_g7_ParamLimits

0xa861,	// (0x0004e21e) main_mup3_pane_g7

0x0007,

0xf654,	// (0x00053011) main_mup3_pane_g_ParamLimits

0xf654,	// (0x00053011) main_mup3_pane_g

0x4494,	// (0x00047e51) main_mup3_pane_t1_ParamLimits

0x4494,	// (0x00047e51) main_mup3_pane_t1

0x4582,	// (0x00047f3f) main_mup3_pane_t2_ParamLimits

0x4582,	// (0x00047f3f) main_mup3_pane_t2

0x4670,	// (0x0004802d) main_mup3_pane_t4_ParamLimits

0x4670,	// (0x0004802d) main_mup3_pane_t4

0x4682,	// (0x0004803f) main_mup3_pane_t5_ParamLimits

0x4682,	// (0x0004803f) main_mup3_pane_t5

0x4754,	// (0x00048111) main_mup3_pane_t6_ParamLimits

0x4754,	// (0x00048111) main_mup3_pane_t6

0x0005,

0xf665,	// (0x00053022) main_mup3_pane_t_ParamLimits

0xf665,	// (0x00053022) main_mup3_pane_t

0x47fc,	// (0x000481b9) mup3_progress_pane_ParamLimits

0x47fc,	// (0x000481b9) mup3_progress_pane

0x4864,	// (0x00048221) popup_mup3_control_window_ParamLimits

0x4864,	// (0x00048221) popup_mup3_control_window

0xd925,	// (0x000512e2) popup_mup3_text_window

0x487c,	// (0x00048239) mup3_progress_pane_t1

0x489b,	// (0x00048258) mup3_progress_pane_t2

0xd92d,	// (0x000512ea) mup3_progress_pane_t3

0x0002,

0xf672,	// (0x0005302f) mup3_progress_pane_t

0xd94a,	// (0x00051307) mup_progress_pane_cp03

0xd95a,	// (0x00051317) bg_tb_trans_pane_cp04

0xd95a,	// (0x00051317) mup3_volume_pane

0xd962,	// (0x0005131f) popup_mup3_control_window_g1

0xd962,	// (0x0005131f) mup3_volume_pane_g1

0xd962,	// (0x0005131f) mup3_volume_pane_g2

0xd962,	// (0x0005131f) mup3_volume_pane_g3

0x0002,

0xf679,	// (0x00053036) mup3_volume_pane_g

0xa0e5,	// (0x0004daa2) bg_tb_trans_pane_cp03

0xd96a,	// (0x00051327) popup_mup3_text_window_g1

0xd972,	// (0x0005132f) popup_mup3_text_window_t1

0xa96b,	// (0x0004e328) list_calc_item_pane_g1_ParamLimits

0xd385,	// (0x00050d42) mup_volume_pane_cp_g1

0x41a5,	// (0x00047b62) main_touch_calib_pane_t3

0x41b9,	// (0x00047b76) main_touch_calib_pane_t4

0x41cd,	// (0x00047b8a) main_touch_calib_pane_t5

0xa0ef,	// (0x0004daac) aid_cell_size_toolbar2

0xa0f7,	// (0x0004dab4) aid_popup3_width_pane

0xa103,	// (0x0004dac0) aid_zoom_text_msg_primary

0x1abc,	// (0x00045479) vorec_t7

0xa92f,	// (0x0004e2ec) bg_calc_paper_pane_g1_ParamLimits

0xa93b,	// (0x0004e2f8) bg_calc_paper_pane_g2_ParamLimits

0xa947,	// (0x0004e304) bg_calc_paper_pane_g3_ParamLimits

0xa953,	// (0x0004e310) bg_calc_paper_pane_g4_ParamLimits

0xa95f,	// (0x0004e31c) bg_calc_paper_pane_g5_ParamLimits

0x13e0,	// (0x00044d9d) bg_calc_paper_pane_g6_ParamLimits

0x13ef,	// (0x00044dac) bg_calc_paper_pane_g7_ParamLimits

0x13fe,	// (0x00044dbb) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00052a68) bg_calc_paper_pane_g_ParamLimits

0x1411,	// (0x00044dce) calc_bg_paper_pane_g9_ParamLimits

0xa15c,	// (0x0004db19) image_qvga_pane_ParamLimits

0xa15c,	// (0x0004db19) image_qvga_pane

0xa7d8,	// (0x0004e195) bg_popup_sub_pane_cp04_ParamLimits

0xb867,	// (0x0004f224) popup_mup_playback_window_g1_ParamLimits

0xb873,	// (0x0004f230) popup_mup_playback_window_t1_ParamLimits

0xb888,	// (0x0004f245) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00052dc1) popup_mup_playback_window_t_ParamLimits

0xa861,	// (0x0004e21e) main_mup2_pane_g3_ParamLimits

0xa861,	// (0x0004e21e) main_mup2_pane_g3

0x1d9c,	// (0x00045759) popup_toolbar_window_cp04

0xbbf9,	// (0x0004f5b6) popup_call2_audio_second_window_g3_ParamLimits

0xbbf9,	// (0x0004f5b6) popup_call2_audio_second_window_g3

0xc011,	// (0x0004f9ce) popup_call2_audio_first_window_g4_ParamLimits

0xc011,	// (0x0004f9ce) popup_call2_audio_first_window_g4

0xc638,	// (0x0004fff5) popup_call2_audio_in_window_g4_ParamLimits

0xc638,	// (0x0004fff5) popup_call2_audio_in_window_g4

0x33ae,	// (0x00046d6b) aid_area_sk_bg_cut_ParamLimits

0x33ae,	// (0x00046d6b) aid_area_sk_bg_cut

0xb89d,	// (0x0004f25a) aid_area_sk_bg_cut_2_ParamLimits

0xb89d,	// (0x0004f25a) aid_area_sk_bg_cut_2

0xa0e5,	// (0x0004daa2) aid_placing_details_win

0xa0e5,	// (0x0004daa2) aid_placing_details_win_2

0xa853,	// (0x0004e210) camera2_autofocus_pane_g1_ParamLimits

0x11c8,	// (0x00044b85) popup_fixed_preview_cale_window_ParamLimits

0x11c8,	// (0x00044b85) popup_fixed_preview_cale_window

0xb5fe,	// (0x0004efbb) navi_slider_pane_g3

0xb607,	// (0x0004efc4) navi_slider_pane_g4

0xb610,	// (0x0004efcd) navi_slider_pane_g5

0xb5fe,	// (0x0004efbb) navi_slider_pane_g6

0xb619,	// (0x0004efd6) navi_slider_pane_g7

0xb747,	// (0x0004f104) mup_scale_pane_g3

0xb750,	// (0x0004f10d) mup_scale_pane_g4

0xb759,	// (0x0004f116) mup_scale_pane_g5

0x314d,	// (0x00046b0a) mup_scale_pane_g6

0x3156,	// (0x00046b13) mup_scale_pane_g7

0xa899,	// (0x0004e256) cams2_slider_pane_g3

0xa899,	// (0x0004e256) cams2_slider_pane_g4

0xa899,	// (0x0004e256) cams2_slider_pane_g5

0xa899,	// (0x0004e256) cams2_slider_pane_g6

0xa899,	// (0x0004e256) cams2_slider_pane_g7

0xa899,	// (0x0004e256) camera2_autofocus_pane_cp_g1

0xc8c6,	// (0x00050283) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8c6,	// (0x00050283) bg_popup_preview_window_pane_cp02

0xd980,	// (0x0005133d) list_fp_cale_pane_ParamLimits

0xd980,	// (0x0005133d) list_fp_cale_pane

0xd98c,	// (0x00051349) popup_fixed_preview_cale_window_t1_ParamLimits

0xd98c,	// (0x00051349) popup_fixed_preview_cale_window_t1

0x48ba,	// (0x00048277) popup_fixed_preview_cale_window_t2_ParamLimits

0x48ba,	// (0x00048277) popup_fixed_preview_cale_window_t2

0x48cf,	// (0x0004828c) popup_fixed_preview_cale_window_t3_ParamLimits

0x48cf,	// (0x0004828c) popup_fixed_preview_cale_window_t3

0x0002,

0xf680,	// (0x0005303d) popup_fixed_preview_cale_window_t_ParamLimits

0xf680,	// (0x0005303d) popup_fixed_preview_cale_window_t

0x48e4,	// (0x000482a1) list_single_fp_cale_pane_ParamLimits

0x48e4,	// (0x000482a1) list_single_fp_cale_pane

0xd9aa,	// (0x00051367) list_single_fp_cale_pane_g1_ParamLimits

0xd9aa,	// (0x00051367) list_single_fp_cale_pane_g1

0xd9b6,	// (0x00051373) list_single_fp_cale_pane_g2_ParamLimits

0xd9b6,	// (0x00051373) list_single_fp_cale_pane_g2

0x0002,

0xf687,	// (0x00053044) list_single_fp_cale_pane_g_ParamLimits

0xf687,	// (0x00053044) list_single_fp_cale_pane_g

0xd9cf,	// (0x0005138c) list_single_fp_cale_pane_t1_ParamLimits

0xd9cf,	// (0x0005138c) list_single_fp_cale_pane_t1

0xd9e1,	// (0x0005139e) list_single_fp_cale_pane_t2_ParamLimits

0xd9e1,	// (0x0005139e) list_single_fp_cale_pane_t2

0x0001,

0xf68e,	// (0x0005304b) list_single_fp_cale_pane_t_ParamLimits

0xf68e,	// (0x0005304b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0e5,	// (0x0004daa2) main_dialer_pane

0xa0e5,	// (0x0004daa2) aid_cell_size_keypad

0xa0e5,	// (0x0004daa2) dialer_ne_pane

0xa0e5,	// (0x0004daa2) grid_dialer_command_1_pane

0xa0e5,	// (0x0004daa2) grid_dialer_command_2_pane

0xa0e5,	// (0x0004daa2) grid_dialer_keypad_pane

0x48f9,	// (0x000482b6) bg_popup_call_pane_cp06_ParamLimits

0x48f9,	// (0x000482b6) bg_popup_call_pane_cp06

0x48f9,	// (0x000482b6) dialer_ne_clear_pane_ParamLimits

0x48f9,	// (0x000482b6) dialer_ne_clear_pane

0xa899,	// (0x0004e256) dialer_ne_pane_g1

0xa8b7,	// (0x0004e274) dialer_ne_pane_t1_ParamLimits

0xa8b7,	// (0x0004e274) dialer_ne_pane_t1

0x4907,	// (0x000482c4) dialer_ne_pane_t2_ParamLimits

0x4907,	// (0x000482c4) dialer_ne_pane_t2

0x492f,	// (0x000482ec) dialer_ne_pane_t3_ParamLimits

0x492f,	// (0x000482ec) dialer_ne_pane_t3

0x0002,

0xf693,	// (0x00053050) dialer_ne_pane_t_ParamLimits

0xf693,	// (0x00053050) dialer_ne_pane_t

0x492f,	// (0x000482ec) dialer_ne_pane_t3_copy1_ParamLimits

0x492f,	// (0x000482ec) dialer_ne_pane_t3_copy1

0xda14,	// (0x000513d1) cell_dialer_keypad_pane_ParamLimits

0xda14,	// (0x000513d1) cell_dialer_keypad_pane

0xa15c,	// (0x0004db19) cell_dialer_command_1_pane_ParamLimits

0xa15c,	// (0x0004db19) cell_dialer_command_1_pane

0xda2b,	// (0x000513e8) cell_dialer_command_2_pane_ParamLimits

0xda2b,	// (0x000513e8) cell_dialer_command_2_pane

0xa15c,	// (0x0004db19) bg_button_pane_cp02_ParamLimits

0xa15c,	// (0x0004db19) bg_button_pane_cp02

0xa853,	// (0x0004e210) cell_dialer_keypad_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_dialer_keypad_pane_g1

0xa15c,	// (0x0004db19) bg_button_pane_cp03_ParamLimits

0xa15c,	// (0x0004db19) bg_button_pane_cp03

0xa853,	// (0x0004e210) cell_dialer_command_1_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_dialer_command_1_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp04

0xa899,	// (0x0004e256) cell_dialer_command_2_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp06

0xa899,	// (0x0004e256) dialer_ne_clear_pane_g1

0xb4c8,	// (0x0004ee85) navi_pane_g2

0xb4f6,	// (0x0004eeb3) navi_pane_g3

0x0002,

0xf30c,	// (0x00052cc9) navi_pane_g

0xb585,	// (0x0004ef42) navi_pane_mv_g2

0xb5ac,	// (0x0004ef69) navi_pane_mv_g5

0x2f30,	// (0x000468ed) navi_pane_mv_t1

0xa911,	// (0x0004e2ce) main_clock2_pane

0xa15c,	// (0x0004db19) main_clock2_list_pane_ParamLimits

0xa15c,	// (0x0004db19) main_clock2_list_pane

0x49c5,	// (0x00048382) main_clock2_pane_t1_ParamLimits

0x49c5,	// (0x00048382) main_clock2_pane_t1

0x4a00,	// (0x000483bd) main_clock2_pane_t2_ParamLimits

0x4a00,	// (0x000483bd) main_clock2_pane_t2

0x0004,

0xf69f,	// (0x0005305c) main_clock2_pane_t_ParamLimits

0xf69f,	// (0x0005305c) main_clock2_pane_t

0x4aa0,	// (0x0004845d) popup_clock_analogue_window_cp03_ParamLimits

0x4aa0,	// (0x0004845d) popup_clock_analogue_window_cp03

0x4ac5,	// (0x00048482) popup_clock_digital_window_cp02_ParamLimits

0x4ac5,	// (0x00048482) popup_clock_digital_window_cp02

0x4b3e,	// (0x000484fb) main_clock2_list_single_pane_ParamLimits

0x4b3e,	// (0x000484fb) main_clock2_list_single_pane

0xab56,	// (0x0004e513) list_highlight_pane_cp05

0xda70,	// (0x0005142d) main_clock2_list_single_pane_t1

0x1d9c,	// (0x00045759) popup_toolbar_window_cp04_ParamLimits

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g2_ParamLimits

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g2

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g3_ParamLimits

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g3

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g4_ParamLimits

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g4

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g5_ParamLimits

0xa861,	// (0x0004e21e) camera2_autofocus_pane_g5

0x0004,

0xf5f5,	// (0x00052fb2) camera2_autofocus_pane_g_ParamLimits

0xf5f5,	// (0x00052fb2) camera2_autofocus_pane_g

0x4201,	// (0x00047bbe) camera2_autofocus_pane_cp_g2

0x4209,	// (0x00047bc6) camera2_autofocus_pane_cp_g3

0x4211,	// (0x00047bce) camera2_autofocus_pane_cp_g4

0x4219,	// (0x00047bd6) camera2_autofocus_pane_cp_g5

0x0004,

0xf649,	// (0x00053006) camera2_autofocus_pane_cp_g

0xa0e5,	// (0x0004daa2) popup_dialer_spcha_window

0xa0e5,	// (0x0004daa2) bg_popup_sub_pane_cp07

0xa0e5,	// (0x0004daa2) list_spcha_pane

0xda7e,	// (0x0005143b) list_single_spcha_pane_ParamLimits

0xda7e,	// (0x0005143b) list_single_spcha_pane

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp06

0xb08b,	// (0x0004ea48) list_single_spcha_pane_t1

0xc3e2,	// (0x0004fd9f) popup_call2_audio_out_window_g4_ParamLimits

0xc3e2,	// (0x0004fd9f) popup_call2_audio_out_window_g4

0xa0e5,	// (0x0004daa2) main_imed2_pane

0xc8ec,	// (0x000502a9) popup_imed_adjust2_window

0x3ba9,	// (0x00047566) popup_imed_trans_window_ParamLimits

0x3ba9,	// (0x00047566) popup_imed_trans_window

0xd45a,	// (0x00050e17) popup_blid_sat_info2_window_t1

0xd468,	// (0x00050e25) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x00052f57) popup_blid_sat_info2_window_t

0x4bef,	// (0x000485ac) aid_size_cell_colour_35

0x4c0f,	// (0x000485cc) aid_size_cell_colour_112

0x4c2f,	// (0x000485ec) aid_size_cell_effect

0xb6d7,	// (0x0004f094) bg_tb_trans_pane_cp02

0x4c4f,	// (0x0004860c) heading_imed_pane

0x4c5b,	// (0x00048618) listscroll_imed_pane

0xda90,	// (0x0005144d) heading_imed_pane_g1

0xda98,	// (0x00051455) heading_imed_pane_t1

0xdaa6,	// (0x00051463) grid_imed_colour_35_pane_ParamLimits

0xdaa6,	// (0x00051463) grid_imed_colour_35_pane

0x4c67,	// (0x00048624) grid_imed_effect_pane

0xdabd,	// (0x0005147a) list_imed_aspect_pane

0x4c7d,	// (0x0004863a) scroll_pane_cp027_ParamLimits

0x4c7d,	// (0x0004863a) scroll_pane_cp027

0x4c8e,	// (0x0004864b) cell_imed_effect_pane_ParamLimits

0x4c8e,	// (0x0004864b) cell_imed_effect_pane

0xdac5,	// (0x00051482) cell_imed_colour_pane_ParamLimits

0xdac5,	// (0x00051482) cell_imed_colour_pane

0xdb07,	// (0x000514c4) cell_imed_colour_pane_g1_ParamLimits

0xdb07,	// (0x000514c4) cell_imed_colour_pane_g1

0xdb18,	// (0x000514d5) hgihlgiht_grid_pane_cp016_ParamLimits

0xdb18,	// (0x000514d5) hgihlgiht_grid_pane_cp016

0x4cb5,	// (0x00048672) cell_imed_effect_pane_g1

0x4cbd,	// (0x0004867a) grid_highlight_pane_cp017

0xdb29,	// (0x000514e6) list_imed_single_pane_ParamLimits

0xdb29,	// (0x000514e6) list_imed_single_pane

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp07

0xdb3e,	// (0x000514fb) list_imed_aspect_pane_comp1_t1

0xb6d7,	// (0x0004f094) bg_tb_trans_pane_cp05

0xdb60,	// (0x0005151d) popup_imed_adjust2_window_g1

0xdb87,	// (0x00051544) popup_imed_adjust2_window_t1

0xdb9f,	// (0x0005155c) slider_imed_adjust_pane

0xdbb3,	// (0x00051570) slider_imed_adjust_pane_g1

0xdbc3,	// (0x00051580) slider_imed_adjust_pane_g2

0xdbd3,	// (0x00051590) slider_imed_adjust_pane_g3

0xdbe4,	// (0x000515a1) slider_imed_adjust_pane_g4

0x0003,

0xf6bc,	// (0x00053079) slider_imed_adjust_pane_g

0x4cc6,	// (0x00048683) aid_size_cell_clipart2

0x4cd2,	// (0x0004868f) grid_imed_clipart_pane

0xb76a,	// (0x0004f127) scroll_pane_cp031

0x4cdc,	// (0x00048699) cell_imed_clipart_pane_ParamLimits

0x4cdc,	// (0x00048699) cell_imed_clipart_pane

0x4cfe,	// (0x000486bb) cell_imed_clipart_pane_g1

0xa0e5,	// (0x0004daa2) grid_highlight_pane_cp014

0x49a1,	// (0x0004835e) main_clock2_pane_g1_ParamLimits

0x49a1,	// (0x0004835e) main_clock2_pane_g1

0x4ae5,	// (0x000484a2) aid_call2_pane_cp10

0x4af7,	// (0x000484b4) aid_call_pane_cp10

0xb429,	// (0x0004ede6) popup_clock_analogue_window_cp10_g1

0xb429,	// (0x0004ede6) popup_clock_analogue_window_cp10_g2

0x4b09,	// (0x000484c6) popup_clock_analogue_window_cp10_g3

0x4b09,	// (0x000484c6) popup_clock_analogue_window_cp10_g4

0xb429,	// (0x0004ede6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6aa,	// (0x00053067) popup_clock_analogue_window_cp10_g

0x4b1f,	// (0x000484dc) popup_clock_analogue_window_cp10_t1

0x4b50,	// (0x0004850d) clock_digital_number_pane_cp10_ParamLimits

0x4b50,	// (0x0004850d) clock_digital_number_pane_cp10

0x4b68,	// (0x00048525) clock_digital_number_pane_cp11_ParamLimits

0x4b68,	// (0x00048525) clock_digital_number_pane_cp11

0x4b80,	// (0x0004853d) clock_digital_number_pane_cp12_ParamLimits

0x4b80,	// (0x0004853d) clock_digital_number_pane_cp12

0x4b9a,	// (0x00048557) clock_digital_number_pane_cp13_ParamLimits

0x4b9a,	// (0x00048557) clock_digital_number_pane_cp13

0x4bb4,	// (0x00048571) clock_digital_separator_pane_cp10_ParamLimits

0x4bb4,	// (0x00048571) clock_digital_separator_pane_cp10

0x4bce,	// (0x0004858b) popup_clock_digital_window_cp02_t1_ParamLimits

0x4bce,	// (0x0004858b) popup_clock_digital_window_cp02_t1

0xa7d0,	// (0x0004e18d) clock_digital_number_pane_cp10_g1

0xa7d0,	// (0x0004e18d) clock_digital_number_pane_cp10_g2

0x0001,

0xf6c5,	// (0x00053082) clock_digital_number_pane_cp10_g

0xa7d0,	// (0x0004e18d) clock_digital_separator_pane_cp10_g1

0xa7d0,	// (0x0004e18d) clock_digital_separator_pane_g2_cp10

0xb5b4,	// (0x0004ef71) navi_pane_vded_g4

0xb5bd,	// (0x0004ef7a) navi_pane_vded_g5

0xb5c6,	// (0x0004ef83) navi_pane_vded_t1

0xa0e5,	// (0x0004daa2) main_vded_pane

0x4d07,	// (0x000486c4) main_vded_pane_g1

0x4d11,	// (0x000486ce) main_vded_pane_g2

0x4d1b,	// (0x000486d8) main_vded_pane_g3

0x0002,

0xf6ca,	// (0x00053087) main_vded_pane_g

0x4d25,	// (0x000486e2) main_vded_pane_t1

0x4d33,	// (0x000486f0) main_vded_pane_t2

0x0001,

0xf6d1,	// (0x0005308e) main_vded_pane_t

0x4d41,	// (0x000486fe) vded_slider_pane

0x4d49,	// (0x00048706) vded_video_pane

0xdbf5,	// (0x000515b2) vded_video_pane_g1

0x4d51,	// (0x0004870e) vded_video_pane_g2

0xa899,	// (0x0004e256) vded_video_pane_g3

0x0002,

0xf6d6,	// (0x00053093) vded_video_pane_g

0xdbff,	// (0x000515bc) vded_slider_pane_g1

0xd385,	// (0x00050d42) vded_slider_pane_g2

0xdc08,	// (0x000515c5) vded_slider_pane_g3

0xdc48,	// (0x00051605) vded_slider_pane_g4

0xdc51,	// (0x0005160e) vded_slider_pane_g5

0x0004,

0xf6dd,	// (0x0005309a) vded_slider_pane_g

0xefd1,	// (0x0005298e) mup3_rocker_pane_ParamLimits

0xefd1,	// (0x0005298e) mup3_rocker_pane

0xd962,	// (0x0005131f) mup3_control_keys_pane_g1

0xdc5a,	// (0x00051617) mup3_control_keys_pane_g2

0xd962,	// (0x0005131f) mup3_control_keys_pane_g3

0xdc62,	// (0x0005161f) mup3_control_keys_pane_g4

0x0003,

0xf6e8,	// (0x000530a5) mup3_control_keys_pane_g

0x11ff,	// (0x00044bbc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x11ff,	// (0x00044bbc) popup_toolbar2_fixed_window_cp01

0xefd1,	// (0x0005298e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xefd1,	// (0x0005298e) popup_toolbar2_fixed_window_cp02

0xbd6b,	// (0x0004f728) popup_call2_audio_second_window_t4_ParamLimits

0xbd6b,	// (0x0004f728) popup_call2_audio_second_window_t4

0xc2a7,	// (0x0004fc64) popup_call2_audio_first_window_t6_ParamLimits

0xc2a7,	// (0x0004fc64) popup_call2_audio_first_window_t6

0xc4e5,	// (0x0004fea2) popup_call2_audio_out_window_t6_ParamLimits

0xc4e5,	// (0x0004fea2) popup_call2_audio_out_window_t6

0xa0e5,	// (0x0004daa2) main_vitu_pane

0xa15c,	// (0x0004db19) aid_size_cell_itu_ParamLimits

0xa15c,	// (0x0004db19) aid_size_cell_itu

0xa15c,	// (0x0004db19) bg_popup_window_pane_cp08_ParamLimits

0xa15c,	// (0x0004db19) bg_popup_window_pane_cp08

0xa15c,	// (0x0004db19) field_vitu_entry_pane_ParamLimits

0xa15c,	// (0x0004db19) field_vitu_entry_pane

0xa15c,	// (0x0004db19) grid_vitu_function_pane_ParamLimits

0xa15c,	// (0x0004db19) grid_vitu_function_pane

0xa15c,	// (0x0004db19) grid_vitu_itu_pane_ParamLimits

0xa15c,	// (0x0004db19) grid_vitu_itu_pane

0xa15c,	// (0x0004db19) cell_vitu_itu_pane_ParamLimits

0xa15c,	// (0x0004db19) cell_vitu_itu_pane

0xa15c,	// (0x0004db19) cell_vitu_function_pane_ParamLimits

0xa15c,	// (0x0004db19) cell_vitu_function_pane

0xa15c,	// (0x0004db19) bg_popup_sub_pane_cp08_ParamLimits

0xa15c,	// (0x0004db19) bg_popup_sub_pane_cp08

0xa8a3,	// (0x0004e260) field_vitu_entry_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) field_vitu_entry_pane_t1

0xdc11,	// (0x000515ce) field_vitu_entry_pane_t2_ParamLimits

0xdc11,	// (0x000515ce) field_vitu_entry_pane_t2

0x0001,

0xf6f1,	// (0x000530ae) field_vitu_entry_pane_t_ParamLimits

0xf6f1,	// (0x000530ae) field_vitu_entry_pane_t

0xd2c2,	// (0x00050c7f) bg_button_pane_cp05_ParamLimits

0xd2c2,	// (0x00050c7f) bg_button_pane_cp05

0xdc6a,	// (0x00051627) cell_vitu_itu_pane_g1

0xb6c3,	// (0x0004f080) cell_vitu_itu_pane_t1_ParamLimits

0xb6c3,	// (0x0004f080) cell_vitu_itu_pane_t1

0xb6c3,	// (0x0004f080) cell_vitu_itu_pane_t2_ParamLimits

0xb6c3,	// (0x0004f080) cell_vitu_itu_pane_t2

0x0002,

0xf6f6,	// (0x000530b3) cell_vitu_itu_pane_t_ParamLimits

0xf6f6,	// (0x000530b3) cell_vitu_itu_pane_t

0xa0e5,	// (0x0004daa2) bg_button_pane_cp07

0xa899,	// (0x0004e256) cell_vitu_function_pane_g1

0xa891,	// (0x0004e24e) main_calc_pane_g1

0x108d,	// (0x00044a4a) aid_visual_content_pane

0xa0e5,	// (0x0004daa2) main_vradio_pane

0xa853,	// (0x0004e210) main_vradio_pane_g1_ParamLimits

0xa853,	// (0x0004e210) main_vradio_pane_g1

0xa861,	// (0x0004e21e) main_vradio_pane_g2_ParamLimits

0xa861,	// (0x0004e21e) main_vradio_pane_g2

0x0001,

0xf6fd,	// (0x000530ba) main_vradio_pane_g_ParamLimits

0xf6fd,	// (0x000530ba) main_vradio_pane_g

0xa8a3,	// (0x0004e260) main_vradio_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) main_vradio_pane_t1

0xa8a3,	// (0x0004e260) main_vradio_pane_t2_ParamLimits

0xa8a3,	// (0x0004e260) main_vradio_pane_t2

0xa8b7,	// (0x0004e274) main_vradio_pane_t3_ParamLimits

0xa8b7,	// (0x0004e274) main_vradio_pane_t3

0x0002,

0xf702,	// (0x000530bf) main_vradio_pane_t_ParamLimits

0xf702,	// (0x000530bf) main_vradio_pane_t

0xa15c,	// (0x0004db19) vradio_rocker_control_pane_ParamLimits

0xa15c,	// (0x0004db19) vradio_rocker_control_pane

0xa15c,	// (0x0004db19) vradio_station_info_pane_ParamLimits

0xa15c,	// (0x0004db19) vradio_station_info_pane

0xa15c,	// (0x0004db19) vradio_frequency_info_pane_ParamLimits

0xa15c,	// (0x0004db19) vradio_frequency_info_pane

0xa899,	// (0x0004e256) vradio_station_info_pane_g1

0xb6c3,	// (0x0004f080) vradio_station_info_pane_t1_ParamLimits

0xb6c3,	// (0x0004f080) vradio_station_info_pane_t1

0xa8b7,	// (0x0004e274) vradio_station_info_pane_t2_ParamLimits

0xa8b7,	// (0x0004e274) vradio_station_info_pane_t2

0x0001,

0xf709,	// (0x000530c6) vradio_station_info_pane_t_ParamLimits

0xf709,	// (0x000530c6) vradio_station_info_pane_t

0xa0e5,	// (0x0004daa2) vradio_tuning_pane

0x4d5a,	// (0x00048717) vradio_rocker_control_pane_g1

0xdc86,	// (0x00051643) vradio_rocker_control_pane_g2

0x4d64,	// (0x00048721) vradio_rocker_control_pane_g3

0x4d6e,	// (0x0004872b) vradio_rocker_control_pane_g4

0x4d78,	// (0x00048735) vradio_rocker_control_pane_g5

0x0004,

0xf70e,	// (0x000530cb) vradio_rocker_control_pane_g

0xa899,	// (0x0004e256) vradio_frequency_info_pane_g1

0xa8a3,	// (0x0004e260) vradio_frequency_info_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) vradio_frequency_info_pane_t1

0x4d82,	// (0x0004873f) vradio_tuning_pane_g1

0x4d8f,	// (0x0004874c) vradio_tuning_pane_t1

0xa11b,	// (0x0004dad8) area_side_right_pane_ParamLimits

0xa11b,	// (0x0004dad8) area_side_right_pane

0xc88d,	// (0x0005024a) status_small_pane_g1

0xc895,	// (0x00050252) status_small_pane_g2

0xc89e,	// (0x0005025b) status_small_pane_g3

0xc8a7,	// (0x00050264) status_small_pane_g4

0x0003,

0xf4fc,	// (0x00052eb9) status_small_pane_g

0xc8b0,	// (0x0005026d) status_small_pane_t1

0xa0e5,	// (0x0004daa2) main_video3_pane

0xa0e5,	// (0x0004daa2) cams_zoom_vslider_pane

0xdc8e,	// (0x0005164b) image3_wide_pane_ParamLimits

0xdc8e,	// (0x0005164b) image3_wide_pane

0xa0e5,	// (0x0004daa2) image3_wide_small_pane

0xdca8,	// (0x00051665) main_video3_pane_g1_ParamLimits

0xdca8,	// (0x00051665) main_video3_pane_g1

0xdca8,	// (0x00051665) main_video3_pane_g2_ParamLimits

0xdca8,	// (0x00051665) main_video3_pane_g2

0x0001,

0xf719,	// (0x000530d6) main_video3_pane_g_ParamLimits

0xf719,	// (0x000530d6) main_video3_pane_g

0xdcc6,	// (0x00051683) main_video3_pane_t1_ParamLimits

0xdcc6,	// (0x00051683) main_video3_pane_t1

0xdcc6,	// (0x00051683) main_video3_pane_t2_ParamLimits

0xdcc6,	// (0x00051683) main_video3_pane_t2

0xdcc6,	// (0x00051683) main_video3_pane_t3_ParamLimits

0xdcc6,	// (0x00051683) main_video3_pane_t3

0x0002,

0xf71e,	// (0x000530db) main_video3_pane_t_ParamLimits

0xf71e,	// (0x000530db) main_video3_pane_t

0xa899,	// (0x0004e256) cams_zoom_vslider_pane_g1

0xa899,	// (0x0004e256) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00052a49) cams_zoom_vslider_pane_g

0xa0e5,	// (0x0004daa2) small_slider_vertical_pane

0xa899,	// (0x0004e256) small_slider_vertical_pane_g1

0xa899,	// (0x0004e256) small_slider_vertical_pane_g2

0xdced,	// (0x000516aa) small_slider_vertical_pane_g3

0x0002,

0xf725,	// (0x000530e2) small_slider_vertical_pane_g

0xa0e5,	// (0x0004daa2) main_hwr_training_pane

0xdcf6,	// (0x000516b3) hwr_training_instruct_pane_ParamLimits

0xdcf6,	// (0x000516b3) hwr_training_instruct_pane

0x4d9e,	// (0x0004875b) hwr_training_navi_pane_ParamLimits

0x4d9e,	// (0x0004875b) hwr_training_navi_pane

0x4dbd,	// (0x0004877a) hwr_training_write_pane_ParamLimits

0x4dbd,	// (0x0004877a) hwr_training_write_pane

0xa0e5,	// (0x0004daa2) bg_frame_shadow_pane

0xdd2d,	// (0x000516ea) hwr_training_write_pane_g1

0xdd35,	// (0x000516f2) hwr_training_write_pane_g2

0xdd3d,	// (0x000516fa) hwr_training_write_pane_g3

0xdd45,	// (0x00051702) hwr_training_write_pane_g4

0xdd4d,	// (0x0005170a) hwr_training_write_pane_g5

0xdd55,	// (0x00051712) hwr_training_write_pane_g6

0xdd5d,	// (0x0005171a) hwr_training_write_pane_g7

0x0006,

0xf72c,	// (0x000530e9) hwr_training_write_pane_g

0xca5d,	// (0x0005041a) hwr_training_navi_pane_g1_ParamLimits

0xca5d,	// (0x0005041a) hwr_training_navi_pane_g1

0xca6f,	// (0x0005042c) hwr_training_navi_pane_g2_ParamLimits

0xca6f,	// (0x0005042c) hwr_training_navi_pane_g2

0xca81,	// (0x0005043e) hwr_training_navi_pane_g3_ParamLimits

0xca81,	// (0x0005043e) hwr_training_navi_pane_g3

0xca91,	// (0x0005044e) hwr_training_navi_pane_g4_ParamLimits

0xca91,	// (0x0005044e) hwr_training_navi_pane_g4

0x0004,

0xf73b,	// (0x000530f8) hwr_training_navi_pane_g_ParamLimits

0xf73b,	// (0x000530f8) hwr_training_navi_pane_g

0xca9e,	// (0x0005045b) hwr_training_navi_pane_t1

0x4e05,	// (0x000487c2) list_single_hwr_training_instruct_pane_ParamLimits

0x4e05,	// (0x000487c2) list_single_hwr_training_instruct_pane

0xdd65,	// (0x00051722) list_single_hwr_training_instruct_pane_t1

0xd55b,	// (0x00050f18) bg_frame_shadow_pane_g1

0xdd74,	// (0x00051731) bg_frame_shadow_pane_g2

0xdd7c,	// (0x00051739) bg_frame_shadow_pane_g3

0xdd84,	// (0x00051741) bg_frame_shadow_pane_g4

0xdd8c,	// (0x00051749) bg_frame_shadow_pane_g5

0xdd94,	// (0x00051751) bg_frame_shadow_pane_g6

0xdd9c,	// (0x00051759) bg_frame_shadow_pane_g7

0xa9ed,	// (0x0004e3aa) bg_frame_shadow_pane_g8

0x0007,

0xf746,	// (0x00053103) bg_frame_shadow_pane_g

0xa0e5,	// (0x0004daa2) main_video_tele_dialer_pane

0x4e1a,	// (0x000487d7) aid_size_cell_video_keypad_ParamLimits

0x4e1a,	// (0x000487d7) aid_size_cell_video_keypad

0x4e34,	// (0x000487f1) grid_video_dialer_keypad_pane_ParamLimits

0x4e34,	// (0x000487f1) grid_video_dialer_keypad_pane

0x4e80,	// (0x0004883d) video_down_pane_cp_ParamLimits

0x4e80,	// (0x0004883d) video_down_pane_cp

0x4eb2,	// (0x0004886f) cell_video_dialer_keypad_pane_ParamLimits

0x4eb2,	// (0x0004886f) cell_video_dialer_keypad_pane

0xdda4,	// (0x00051761) bg_button_pane_cp08_ParamLimits

0xdda4,	// (0x00051761) bg_button_pane_cp08

0x4ed4,	// (0x00048891) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4ed4,	// (0x00048891) cell_video_dialer_keypad_pane_g1

0xefd1,	// (0x0005298e) mup3_rocker2_pane_ParamLimits

0xefd1,	// (0x0005298e) mup3_rocker2_pane

0xa899,	// (0x0004e256) mup3_rocker2_pane_g1

0x3a8a,	// (0x00047447) main_dialer2_pane

0xa0e5,	// (0x0004daa2) main_mp4_pane

0xcaca,	// (0x00050487) main_mp4_pane_g1_ParamLimits

0xcaca,	// (0x00050487) main_mp4_pane_g1

0xcaca,	// (0x00050487) main_mp4_pane_g2_ParamLimits

0xcaca,	// (0x00050487) main_mp4_pane_g2

0x4f0b,	// (0x000488c8) main_mp4_pane_g3_ParamLimits

0x4f0b,	// (0x000488c8) main_mp4_pane_g3

0xcae8,	// (0x000504a5) main_mp4_pane_g4_ParamLimits

0xcae8,	// (0x000504a5) main_mp4_pane_g4

0xcb10,	// (0x000504cd) main_mp4_pane_g5_ParamLimits

0xcb10,	// (0x000504cd) main_mp4_pane_g5

0x0007,

0xf766,	// (0x00053123) main_mp4_pane_g_ParamLimits

0xf766,	// (0x00053123) main_mp4_pane_g

0xcb78,	// (0x00050535) main_mp4_pane_t1_ParamLimits

0xcb78,	// (0x00050535) main_mp4_pane_t1

0xcbda,	// (0x00050597) main_mp4_pane_t2_ParamLimits

0xcbda,	// (0x00050597) main_mp4_pane_t2

0xcc3e,	// (0x000505fb) main_mp4_pane_t3_ParamLimits

0xcc3e,	// (0x000505fb) main_mp4_pane_t3

0xcc9c,	// (0x00050659) main_mp4_pane_t4_ParamLimits

0xcc9c,	// (0x00050659) main_mp4_pane_t4

0x0003,

0xf777,	// (0x00053134) main_mp4_pane_t_ParamLimits

0xf777,	// (0x00053134) main_mp4_pane_t

0xccfa,	// (0x000506b7) mp4_progress_pane_ParamLimits

0xccfa,	// (0x000506b7) mp4_progress_pane

0xddb0,	// (0x0005176d) mp4_rocker_pane_ParamLimits

0xddb0,	// (0x0005176d) mp4_rocker_pane

0xddc4,	// (0x00051781) mp4_progress_pane_t1

0xdde3,	// (0x000517a0) mp4_progress_pane_t2

0x0001,

0xf780,	// (0x0005313d) mp4_progress_pane_t

0xde02,	// (0x000517bf) mup_progress_pane_cp04

0xa899,	// (0x0004e256) mp4_rocker_pane_g1

0xa15c,	// (0x0004db19) aid_cell_size_keypad2_ParamLimits

0xa15c,	// (0x0004db19) aid_cell_size_keypad2

0xa15c,	// (0x0004db19) dialer2_ne_pane_ParamLimits

0xa15c,	// (0x0004db19) dialer2_ne_pane

0xa15c,	// (0x0004db19) grid_dialer2_keypad_pane_ParamLimits

0xa15c,	// (0x0004db19) grid_dialer2_keypad_pane

0xd2c2,	// (0x00050c7f) bg_popup_call_pane_cp07_ParamLimits

0xd2c2,	// (0x00050c7f) bg_popup_call_pane_cp07

0x4f3b,	// (0x000488f8) dialer2_ne_pane_t1_ParamLimits

0x4f3b,	// (0x000488f8) dialer2_ne_pane_t1

0x4f79,	// (0x00048936) cell_dialer2_keypad_pane_ParamLimits

0x4f79,	// (0x00048936) cell_dialer2_keypad_pane

0xd2c2,	// (0x00050c7f) bg_button_pane_pane_cp04_ParamLimits

0xd2c2,	// (0x00050c7f) bg_button_pane_pane_cp04

0xa853,	// (0x0004e210) cell_dialer2_keypad_pane_g1_ParamLimits

0xa853,	// (0x0004e210) cell_dialer2_keypad_pane_g1

0x1c70,	// (0x0004562d) aid_placing_vt_set_content_ParamLimits

0x1c70,	// (0x0004562d) aid_placing_vt_set_content

0x1c98,	// (0x00045655) aid_placing_vt_set_title_ParamLimits

0x1c98,	// (0x00045655) aid_placing_vt_set_title

0xa0e5,	// (0x0004daa2) main_image3_pane

0x4fee,	// (0x000489ab) area_side_right_pane_cp01_ParamLimits

0x4fee,	// (0x000489ab) area_side_right_pane_cp01

0x5005,	// (0x000489c2) main_image3_pane_g1_ParamLimits

0x5005,	// (0x000489c2) main_image3_pane_g1

0x5013,	// (0x000489d0) main_image3_pane_g2_ParamLimits

0x5013,	// (0x000489d0) main_image3_pane_g2

0x503b,	// (0x000489f8) main_image3_pane_g3_ParamLimits

0x503b,	// (0x000489f8) main_image3_pane_g3

0x5065,	// (0x00048a22) main_image3_pane_g4_ParamLimits

0x5065,	// (0x00048a22) main_image3_pane_g4

0x0003,

0xf78f,	// (0x0005314c) main_image3_pane_g_ParamLimits

0xf78f,	// (0x0005314c) main_image3_pane_g

0x508f,	// (0x00048a4c) main_image3_pane_t1_ParamLimits

0x508f,	// (0x00048a4c) main_image3_pane_t1

0x50e7,	// (0x00048aa4) main_image3_pane_t2_ParamLimits

0x50e7,	// (0x00048aa4) main_image3_pane_t2

0x5139,	// (0x00048af6) main_image3_pane_t3_ParamLimits

0x5139,	// (0x00048af6) main_image3_pane_t3

0x0003,

0xf798,	// (0x00053155) main_image3_pane_t_ParamLimits

0xf798,	// (0x00053155) main_image3_pane_t

0xa15c,	// (0x0004db19) grid_sctrl_middle_pane_cp01_ParamLimits

0xa15c,	// (0x0004db19) grid_sctrl_middle_pane_cp01

0x51c1,	// (0x00048b7e) cell_sctrl_middle_pane_cp01_ParamLimits

0x51c1,	// (0x00048b7e) cell_sctrl_middle_pane_cp01

0x51de,	// (0x00048b9b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x51de,	// (0x00048b9b) cell_sctrl_middle_pane_cp01_g1

0xa0e5,	// (0x0004daa2) main_call4_pane

0x51f4,	// (0x00048bb1) aid_size_button_call4_ParamLimits

0x51f4,	// (0x00048bb1) aid_size_button_call4

0x5227,	// (0x00048be4) call4_windows_pane_ParamLimits

0x5227,	// (0x00048be4) call4_windows_pane

0x5246,	// (0x00048c03) grid_call4_button_pane_ParamLimits

0x5246,	// (0x00048c03) grid_call4_button_pane

0x5279,	// (0x00048c36) call4_windows_conf_pane

0x5290,	// (0x00048c4d) popup_call4_audio_first_window_ParamLimits

0x5290,	// (0x00048c4d) popup_call4_audio_first_window

0x52e0,	// (0x00048c9d) popup_call4_audio_second_window_ParamLimits

0x52e0,	// (0x00048c9d) popup_call4_audio_second_window

0x52f7,	// (0x00048cb4) popup_call4_audio_wait_window_ParamLimits

0x52f7,	// (0x00048cb4) popup_call4_audio_wait_window

0x5305,	// (0x00048cc2) cell_call4_button_pane_ParamLimits

0x5305,	// (0x00048cc2) cell_call4_button_pane

0x532a,	// (0x00048ce7) bg_button_pane_cp09_ParamLimits

0x532a,	// (0x00048ce7) bg_button_pane_cp09

0x5336,	// (0x00048cf3) cell_call4_button_pane_g1_ParamLimits

0x5336,	// (0x00048cf3) cell_call4_button_pane_g1

0x535c,	// (0x00048d19) cell_call4_button_pane_t1_ParamLimits

0x535c,	// (0x00048d19) cell_call4_button_pane_t1

0xde4b,	// (0x00051808) popup_call4_audio_conf_window_ParamLimits

0xde4b,	// (0x00051808) popup_call4_audio_conf_window

0x487c,	// (0x00048239) mup3_progress_pane_t1_ParamLimits

0x489b,	// (0x00048258) mup3_progress_pane_t2_ParamLimits

0xd92d,	// (0x000512ea) mup3_progress_pane_t3_ParamLimits

0xf672,	// (0x0005302f) mup3_progress_pane_t_ParamLimits

0xd94a,	// (0x00051307) mup_progress_pane_cp03_ParamLimits

0xd962,	// (0x0005131f) mup3_control_keys_pane_g4_copy1

0xddb0,	// (0x0005176d) mp4_rocker2_pane_ParamLimits

0xddb0,	// (0x0005176d) mp4_rocker2_pane

0xd962,	// (0x0005131f) mp4_rocker2_pane_g1

0xd962,	// (0x0005131f) mp4_rocker2_pane_g2

0xd962,	// (0x0005131f) mp4_rocker2_pane_g3

0xd962,	// (0x0005131f) mp4_rocker2_pane_g4

0xd962,	// (0x0005131f) mp4_rocker2_pane_g5

0x0004,

0xf7a1,	// (0x0005315e) mp4_rocker2_pane_g

0xa0e5,	// (0x0004daa2) main_camera4_pane

0xa0e5,	// (0x0004daa2) main_video4_pane

0x4e4e,	// (0x0004880b) main_video_tele_dialer_pane_t1_ParamLimits

0x4e4e,	// (0x0004880b) main_video_tele_dialer_pane_t1

0x4e67,	// (0x00048824) main_video_tele_dialer_pane_t2_ParamLimits

0x4e67,	// (0x00048824) main_video_tele_dialer_pane_t2

0x0001,

0xf757,	// (0x00053114) main_video_tele_dialer_pane_t_ParamLimits

0xf757,	// (0x00053114) main_video_tele_dialer_pane_t

0x539a,	// (0x00048d57) cam4_autofocus_pane_ParamLimits

0x539a,	// (0x00048d57) cam4_autofocus_pane

0x53b0,	// (0x00048d6d) cam4_image_uncrop_pane_ParamLimits

0x53b0,	// (0x00048d6d) cam4_image_uncrop_pane

0x53ca,	// (0x00048d87) cam4_indicators_pane_ParamLimits

0x53ca,	// (0x00048d87) cam4_indicators_pane

0x53f5,	// (0x00048db2) main_camera4_pane_g1_ParamLimits

0x53f5,	// (0x00048db2) main_camera4_pane_g1

0x5407,	// (0x00048dc4) main_camera4_pane_g2_ParamLimits

0x5407,	// (0x00048dc4) main_camera4_pane_g2

0x541a,	// (0x00048dd7) main_camera4_pane_g3_ParamLimits

0x541a,	// (0x00048dd7) main_camera4_pane_g3

0x542d,	// (0x00048dea) main_camera4_pane_g4_ParamLimits

0x542d,	// (0x00048dea) main_camera4_pane_g4

0x5440,	// (0x00048dfd) main_camera4_pane_g5_ParamLimits

0x5440,	// (0x00048dfd) main_camera4_pane_g5

0x0005,

0xf7ac,	// (0x00053169) main_camera4_pane_g_ParamLimits

0xf7ac,	// (0x00053169) main_camera4_pane_g

0x5464,	// (0x00048e21) main_camera4_pane_t1_ParamLimits

0x5464,	// (0x00048e21) main_camera4_pane_t1

0xa853,	// (0x0004e210) bg_tb_trans_pane_cp06

0xcdbe,	// (0x0005077b) cam4_indicators_pane_g1

0xcdcf,	// (0x0005078c) cam4_indicators_pane_g2

0x0002,

0xf7c7,	// (0x00053184) cam4_indicators_pane_g

0xcded,	// (0x000507aa) cam4_indicators_pane_t1

0x54da,	// (0x00048e97) main_video4_pane_g1_ParamLimits

0x54da,	// (0x00048e97) main_video4_pane_g1

0x54e9,	// (0x00048ea6) main_video4_pane_g2_ParamLimits

0x54e9,	// (0x00048ea6) main_video4_pane_g2

0x54f8,	// (0x00048eb5) main_video4_pane_g3_ParamLimits

0x54f8,	// (0x00048eb5) main_video4_pane_g3

0x5507,	// (0x00048ec4) main_video4_pane_g4_ParamLimits

0x5507,	// (0x00048ec4) main_video4_pane_g4

0x0004,

0xf7ce,	// (0x0005318b) main_video4_pane_g_ParamLimits

0xf7ce,	// (0x0005318b) main_video4_pane_g

0x5525,	// (0x00048ee2) vid4_indicators_pane_ParamLimits

0x5525,	// (0x00048ee2) vid4_indicators_pane

0x5553,	// (0x00048f10) video4_image_uncrop_cif_pane_ParamLimits

0x5553,	// (0x00048f10) video4_image_uncrop_cif_pane

0x556d,	// (0x00048f2a) video4_image_uncrop_nhd_pane_ParamLimits

0x556d,	// (0x00048f2a) video4_image_uncrop_nhd_pane

0x53b0,	// (0x00048d6d) video4_image_uncrop_vga_pane_ParamLimits

0x53b0,	// (0x00048d6d) video4_image_uncrop_vga_pane

0xa15c,	// (0x0004db19) bg_tb_trans_pane_cp07

0xce19,	// (0x000507d6) vid4_indicators_pane_g1

0xce2d,	// (0x000507ea) vid4_indicators_pane_g2

0xce41,	// (0x000507fe) vid4_indicators_pane_g3

0x0004,

0xf7d9,	// (0x00053196) vid4_indicators_pane_g

0xce70,	// (0x0005082d) vid4_indicators_pane_t1

0x5581,	// (0x00048f3e) cam4_autofocus_pane_g1

0x5589,	// (0x00048f46) cam4_autofocus_pane_g2

0x5591,	// (0x00048f4e) cam4_autofocus_pane_g3

0x0002,

0xf7e4,	// (0x000531a1) cam4_autofocus_pane_g

0x5599,	// (0x00048f56) cam4_autofocus_pane_g3_copy1

0x4e96,	// (0x00048853) video_down_pane_cp_t1

0x4ea4,	// (0x00048861) video_down_pane_cp_t2

0x0001,

0xf75c,	// (0x00053119) video_down_pane_cp_t

0xa15c,	// (0x0004db19) popup_vitu2_window_ParamLimits

0xa15c,	// (0x0004db19) popup_vitu2_window

0x55a1,	// (0x00048f5e) aid_size_cell2_itu2_ParamLimits

0x55a1,	// (0x00048f5e) aid_size_cell2_itu2

0x55c7,	// (0x00048f84) aid_size_cell_itu2_ParamLimits

0x55c7,	// (0x00048f84) aid_size_cell_itu2

0x48f9,	// (0x000482b6) bg_popup_window_pane_cp09_ParamLimits

0x48f9,	// (0x000482b6) bg_popup_window_pane_cp09

0x5623,	// (0x00048fe0) field_vitu2_entry_pane_ParamLimits

0x5623,	// (0x00048fe0) field_vitu2_entry_pane

0x5649,	// (0x00049006) grid_vitu2_function_pane_ParamLimits

0x5649,	// (0x00049006) grid_vitu2_function_pane

0x569a,	// (0x00049057) grid_vitu2_itu_pane_ParamLimits

0x569a,	// (0x00049057) grid_vitu2_itu_pane

0x5730,	// (0x000490ed) cell_vitu2_itu_pane_ParamLimits

0x5730,	// (0x000490ed) cell_vitu2_itu_pane

0x575c,	// (0x00049119) cell_vitu2_function_pane_ParamLimits

0x575c,	// (0x00049119) cell_vitu2_function_pane

0xde5f,	// (0x0005181c) bg_popup_call_pane_cp08_ParamLimits

0xde5f,	// (0x0005181c) bg_popup_call_pane_cp08

0xde76,	// (0x00051833) field_vitu2_entry_pane_g1

0xde82,	// (0x0005183f) field_vitu2_entry_pane_g2

0x0002,

0xf7eb,	// (0x000531a8) field_vitu2_entry_pane_g

0x579b,	// (0x00049158) field_vitu2_entry_pane_t1_ParamLimits

0x579b,	// (0x00049158) field_vitu2_entry_pane_t1

0xde8e,	// (0x0005184b) field_vitu2_entry_pane_t2_ParamLimits

0xde8e,	// (0x0005184b) field_vitu2_entry_pane_t2

0x0001,

0xf7f2,	// (0x000531af) field_vitu2_entry_pane_t_ParamLimits

0xf7f2,	// (0x000531af) field_vitu2_entry_pane_t

0x57ca,	// (0x00049187) bg_button_pane_cp010_ParamLimits

0x57ca,	// (0x00049187) bg_button_pane_cp010

0x57d8,	// (0x00049195) cell_vitu2_itu_pane_g1

0x57fe,	// (0x000491bb) cell_vitu2_itu_pane_t1_ParamLimits

0x57fe,	// (0x000491bb) cell_vitu2_itu_pane_t1

0x585c,	// (0x00049219) cell_vitu2_itu_pane_t2_ParamLimits

0x585c,	// (0x00049219) cell_vitu2_itu_pane_t2

0x0002,

0xf7fc,	// (0x000531b9) cell_vitu2_itu_pane_t_ParamLimits

0xf7fc,	// (0x000531b9) cell_vitu2_itu_pane_t

0xa15c,	// (0x0004db19) bg_button_pane_cp011

0x5948,	// (0x00049305) cell_vitu2_function_pane_g1

0xa0e5,	// (0x0004daa2) main_myfav_hc_pane

0x5189,	// (0x00048b46) popup_image3_note_pane_ParamLimits

0x5189,	// (0x00048b46) popup_image3_note_pane

0x51a5,	// (0x00048b62) popup_image3_tool_bar_pane_ParamLimits

0x51a5,	// (0x00048b62) popup_image3_tool_bar_pane

0x58ea,	// (0x000492a7) cell_vitu2_itu_pane_t3_ParamLimits

0x58ea,	// (0x000492a7) cell_vitu2_itu_pane_t3

0xa0e5,	// (0x0004daa2) bg_popup_trans_pane

0xdeb3,	// (0x00051870) grid_image3_tool_bar_pane

0xdebd,	// (0x0005187a) bg_popup_trans_pane_g1

0xad79,	// (0x0004e736) bg_popup_trans_pane_g2

0xdec5,	// (0x00051882) bg_popup_trans_pane_g3

0xdecd,	// (0x0005188a) bg_popup_trans_pane_g4

0xded5,	// (0x00051892) bg_popup_trans_pane_g5

0xdedd,	// (0x0005189a) bg_popup_trans_pane_g6

0xdee5,	// (0x000518a2) bg_popup_trans_pane_g7

0xdeed,	// (0x000518aa) bg_popup_trans_pane_g8

0xad59,	// (0x0004e716) bg_popup_trans_pane_g9

0x0008,

0xf803,	// (0x000531c0) bg_popup_trans_pane_g

0xdef5,	// (0x000518b2) cell_image3_tool_bar_pane_ParamLimits

0xdef5,	// (0x000518b2) cell_image3_tool_bar_pane

0xa899,	// (0x0004e256) cell_image3_tool_bar_pane_g1

0xa0e5,	// (0x0004daa2) bg_popup_trans_pane_cp1

0xdf09,	// (0x000518c6) popup_image3_note_pane_t1

0xdf17,	// (0x000518d4) popup_image3_note_pane_t2

0xdf25,	// (0x000518e2) popup_image3_note_pane_t3

0x0002,

0x0345,	// (0x00043d02) popup_image3_note_pane_t

0xdf33,	// (0x000518f0) popup_image3_note_pane_t3_copy1

0x595c,	// (0x00049319) bg_myfav_hc_instruction_pane_ParamLimits

0x595c,	// (0x00049319) bg_myfav_hc_instruction_pane

0x5970,	// (0x0004932d) cell_myfav_contact_pane_ParamLimits

0x5970,	// (0x0004932d) cell_myfav_contact_pane

0x598e,	// (0x0004934b) cell_myfav_contact_pane_cp1_ParamLimits

0x598e,	// (0x0004934b) cell_myfav_contact_pane_cp1

0x59a6,	// (0x00049363) cell_myfav_contact_pane_cp2_ParamLimits

0x59a6,	// (0x00049363) cell_myfav_contact_pane_cp2

0x59be,	// (0x0004937b) cell_myfav_contact_pane_cp3_ParamLimits

0x59be,	// (0x0004937b) cell_myfav_contact_pane_cp3

0x59d5,	// (0x00049392) cell_myfav_contact_pane_cp4_ParamLimits

0x59d5,	// (0x00049392) cell_myfav_contact_pane_cp4

0x59ed,	// (0x000493aa) cell_myfav_contact_pane_cp5_ParamLimits

0x59ed,	// (0x000493aa) cell_myfav_contact_pane_cp5

0x5a01,	// (0x000493be) cell_myfav_contact_pane_cp6_ParamLimits

0x5a01,	// (0x000493be) cell_myfav_contact_pane_cp6

0x5a17,	// (0x000493d4) cell_myfav_contact_pane_cp7_ParamLimits

0x5a17,	// (0x000493d4) cell_myfav_contact_pane_cp7

0xdf41,	// (0x000518fe) listscroll_gen_pane_cp05

0x5a31,	// (0x000493ee) main_myfav_hc_pane_g1_ParamLimits

0x5a31,	// (0x000493ee) main_myfav_hc_pane_g1

0x5a4b,	// (0x00049408) main_myfav_hc_pane_g2_ParamLimits

0x5a4b,	// (0x00049408) main_myfav_hc_pane_g2

0x0002,

0xf816,	// (0x000531d3) main_myfav_hc_pane_g_ParamLimits

0xf816,	// (0x000531d3) main_myfav_hc_pane_g

0x5a7d,	// (0x0004943a) main_myfav_hc_pane_t1_ParamLimits

0x5a7d,	// (0x0004943a) main_myfav_hc_pane_t1

0xdf4a,	// (0x00051907) main_myfav_hc_pane_t2_ParamLimits

0xdf4a,	// (0x00051907) main_myfav_hc_pane_t2

0xdf5c,	// (0x00051919) main_myfav_hc_pane_t3_ParamLimits

0xdf5c,	// (0x00051919) main_myfav_hc_pane_t3

0x5a94,	// (0x00049451) main_myfav_hc_pane_t4_ParamLimits

0x5a94,	// (0x00049451) main_myfav_hc_pane_t4

0x0004,

0xf81d,	// (0x000531da) main_myfav_hc_pane_t_ParamLimits

0xf81d,	// (0x000531da) main_myfav_hc_pane_t

0xa899,	// (0x0004e256) bg_myfav_hc_instruction_pane_g1

0xdf6e,	// (0x0005192b) cell_myfav_contact_pane_g1_ParamLimits

0xdf6e,	// (0x0005192b) cell_myfav_contact_pane_g1

0xdf6e,	// (0x0005192b) cell_myfav_contact_pane_g2_ParamLimits

0xdf6e,	// (0x0005192b) cell_myfav_contact_pane_g2

0xdf7a,	// (0x00051937) cell_myfav_contact_pane_g3_ParamLimits

0xdf7a,	// (0x00051937) cell_myfav_contact_pane_g3

0xa861,	// (0x0004e21e) cell_myfav_contact_pane_g4_ParamLimits

0xa861,	// (0x0004e21e) cell_myfav_contact_pane_g4

0xdf87,	// (0x00051944) cell_myfav_contact_pane_g5_ParamLimits

0xdf87,	// (0x00051944) cell_myfav_contact_pane_g5

0x0004,

0xf828,	// (0x000531e5) cell_myfav_contact_pane_g_ParamLimits

0xf828,	// (0x000531e5) cell_myfav_contact_pane_g

0x5a65,	// (0x00049422) main_myfav_hc_pane_g3_ParamLimits

0x5a65,	// (0x00049422) main_myfav_hc_pane_g3

0x0976,	// (0x00044333) popup_adpt_find_window

0x5abc,	// (0x00049479) afind_page_pane_ParamLimits

0x5abc,	// (0x00049479) afind_page_pane

0x5ad1,	// (0x0004948e) aid_size_cell_afind_ParamLimits

0x5ad1,	// (0x0004948e) aid_size_cell_afind

0x5aef,	// (0x000494ac) bg_popup_sub_pane_cp09_ParamLimits

0x5aef,	// (0x000494ac) bg_popup_sub_pane_cp09

0x5afc,	// (0x000494b9) find_pane_cp01_ParamLimits

0x5afc,	// (0x000494b9) find_pane_cp01

0xdf93,	// (0x00051950) grid_afind_control_pane_ParamLimits

0xdf93,	// (0x00051950) grid_afind_control_pane

0x5b09,	// (0x000494c6) grid_afind_pane_ParamLimits

0x5b09,	// (0x000494c6) grid_afind_pane

0x5b2b,	// (0x000494e8) cell_afind_pane_ParamLimits

0x5b2b,	// (0x000494e8) cell_afind_pane

0xa899,	// (0x0004e256) afind_page_pane_g1

0x5b92,	// (0x0004954f) afind_page_pane_g2

0x5b9a,	// (0x00049557) afind_page_pane_g3

0x0002,

0xf833,	// (0x000531f0) afind_page_pane_g

0x5ba2,	// (0x0004955f) afind_page_pane_t1

0xdfb9,	// (0x00051976) cell_afind_grid_control_pane_ParamLimits

0xdfb9,	// (0x00051976) cell_afind_grid_control_pane

0xdfc8,	// (0x00051985) bg_button_pane_cp69_ParamLimits

0xdfc8,	// (0x00051985) bg_button_pane_cp69

0x5bb0,	// (0x0004956d) cell_afind_pane_g1_ParamLimits

0x5bb0,	// (0x0004956d) cell_afind_pane_g1

0x5bbd,	// (0x0004957a) cell_afind_pane_t1_ParamLimits

0x5bbd,	// (0x0004957a) cell_afind_pane_t1

0xdfd4,	// (0x00051991) bg_button_pane_cp72

0xdfdc,	// (0x00051999) cell_afind_grid_control_pane_g1

0x358b,	// (0x00046f48) aid_image_placing_area_ParamLimits

0x358b,	// (0x00046f48) aid_image_placing_area

0xa853,	// (0x0004e210) field_vitu_entry_pane_g1_ParamLimits

0xa853,	// (0x0004e210) field_vitu_entry_pane_g1

0xa853,	// (0x0004e210) field_vitu_entry_pane_g2_ParamLimits

0xa853,	// (0x0004e210) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00052b56) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00052b56) field_vitu_entry_pane_g

0xdc6a,	// (0x00051627) cell_vitu_itu_pane_g1_ParamLimits

0xdc11,	// (0x000515ce) cell_vitu_itu_pane_t3_ParamLimits

0xdc11,	// (0x000515ce) cell_vitu_itu_pane_t3

0xddc4,	// (0x00051781) mp4_progress_pane_t1_ParamLimits

0xdde3,	// (0x000517a0) mp4_progress_pane_t2_ParamLimits

0xf780,	// (0x0005313d) mp4_progress_pane_t_ParamLimits

0xde02,	// (0x000517bf) mup_progress_pane_cp04_ParamLimits

0x5aa8,	// (0x00049465) main_myfav_hc_pane_t5_ParamLimits

0x5aa8,	// (0x00049465) main_myfav_hc_pane_t5

0xa10b,	// (0x0004dac8) aid_zoom_text_primary

0x0976,	// (0x00044333) popup_adpt_find_window_ParamLimits

0xa15c,	// (0x0004db19) main_cam_set_pane

0x53e1,	// (0x00048d9e) cam4_zoom_pane_ParamLimits

0x53e1,	// (0x00048d9e) cam4_zoom_pane

0x5bcf,	// (0x0004958c) main_cam_set_pane_g1_ParamLimits

0x5bcf,	// (0x0004958c) main_cam_set_pane_g1

0x5bdd,	// (0x0004959a) main_cam_set_pane_g2_ParamLimits

0x5bdd,	// (0x0004959a) main_cam_set_pane_g2

0x0001,

0xf83a,	// (0x000531f7) main_cam_set_pane_g_ParamLimits

0xf83a,	// (0x000531f7) main_cam_set_pane_g

0x5bfe,	// (0x000495bb) main_cam_set_pane_t1_ParamLimits

0x5bfe,	// (0x000495bb) main_cam_set_pane_t1

0x5c19,	// (0x000495d6) main_cset_listscroll_pane_ParamLimits

0x5c19,	// (0x000495d6) main_cset_listscroll_pane

0x5c3f,	// (0x000495fc) main_cset_slider_pane_ParamLimits

0x5c3f,	// (0x000495fc) main_cset_slider_pane

0xdfed,	// (0x000519aa) main_cset_list_pane_ParamLimits

0xdfed,	// (0x000519aa) main_cset_list_pane

0xdffd,	// (0x000519ba) scroll_pane_cp028

0x5c65,	// (0x00049622) aid_area_touch_slider

0x5c81,	// (0x0004963e) cset_slider_pane

0x5ca4,	// (0x00049661) main_cset_slider_pane_g1

0x5cb9,	// (0x00049676) main_cset_slider_pane_g2

0x0011,

0xf83f,	// (0x000531fc) main_cset_slider_pane_g

0xe036,	// (0x000519f3) main_cset_slider_pane_t1

0x5d75,	// (0x00049732) main_cset_slider_pane_t2

0x5d8f,	// (0x0004974c) main_cset_slider_pane_t3

0x5da9,	// (0x00049766) main_cset_slider_pane_t4

0x5dc3,	// (0x00049780) main_cset_slider_pane_t5

0x5ddd,	// (0x0004979a) main_cset_slider_pane_t6

0x5df2,	// (0x000497af) main_cset_slider_pane_t7

0x000e,

0xf864,	// (0x00053221) main_cset_slider_pane_t

0x5ef6,	// (0x000498b3) cset_list_set_pane_ParamLimits

0x5ef6,	// (0x000498b3) cset_list_set_pane

0xe0d0,	// (0x00051a8d) aid_position_infowindow_above

0xe0d8,	// (0x00051a95) aid_position_infowindow_below

0xce87,	// (0x00050844) cset_list_set_pane_g1_ParamLimits

0xce87,	// (0x00050844) cset_list_set_pane_g1

0xce93,	// (0x00050850) cset_list_set_pane_g3_ParamLimits

0xce93,	// (0x00050850) cset_list_set_pane_g3

0x0001,

0xf883,	// (0x00053240) cset_list_set_pane_g_ParamLimits

0xf883,	// (0x00053240) cset_list_set_pane_g

0xcea2,	// (0x0005085f) cset_list_set_pane_t1_ParamLimits

0xcea2,	// (0x0005085f) cset_list_set_pane_t1

0xa15c,	// (0x0004db19) list_highlight_pane_cp021_ParamLimits

0xa15c,	// (0x0004db19) list_highlight_pane_cp021

0xb747,	// (0x0004f104) cset_slider_pane_g1

0xb759,	// (0x0004f116) cset_slider_pane_g2

0xb750,	// (0x0004f10d) cset_slider_pane_g3

0x0002,

0xf888,	// (0x00053245) cset_slider_pane_g

0xceb7,	// (0x00050874) aid_area_touch_cam4_zoom

0xcebf,	// (0x0005087c) cam4_zoom_cont_pane

0xcec7,	// (0x00050884) cam4_zoom_pane_g1

0xcecf,	// (0x0005088c) cam4_zoom_pane_g2

0x5f08,	// (0x000498c5) cam4_zoom_pane_g3

0x0002,

0xf88f,	// (0x0005324c) cam4_zoom_pane_g

0xe0e0,	// (0x00051a9d) cam4_zoom_cont_pane_g1

0xe0e9,	// (0x00051aa6) cam4_zoom_cont_pane_g2

0xe0f2,	// (0x00051aaf) cam4_zoom_cont_pane_g3

0x0002,

0x03cc,	// (0x00043d89) cam4_zoom_cont_pane_g

0x5212,	// (0x00048bcf) call4_image_pane_ParamLimits

0x5212,	// (0x00048bcf) call4_image_pane

0x5279,	// (0x00048c36) call4_windows_conf_pane_ParamLimits

0x52be,	// (0x00048c7b) popup_call4_audio_in_window_ParamLimits

0x52be,	// (0x00048c7b) popup_call4_audio_in_window

0xa0e5,	// (0x0004daa2) bg_popup_call2_act_pane_cp02

0xde43,	// (0x00051800) call4_list_conf_pane

0xa899,	// (0x0004e256) call4_image_pane_g1

0xa899,	// (0x0004e256) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00052a49) call4_image_pane_g

0xe0fb,	// (0x00051ab8) list_single_graphic_popup_conf4_pane_ParamLimits

0xe0fb,	// (0x00051ab8) list_single_graphic_popup_conf4_pane

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp022

0xe10e,	// (0x00051acb) list_single_graphic_popup_conf4_pane_g1

0xb2f9,	// (0x0004ecb6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf896,	// (0x00053253) list_single_graphic_popup_conf4_pane_g

0xe116,	// (0x00051ad3) list_single_graphic_popup_conf4_pane_t1

0x1dbc,	// (0x00045779) popup_vtel_slider_window_ParamLimits

0x1dbc,	// (0x00045779) popup_vtel_slider_window

0xde15,	// (0x000517d2) dialer2_ne_pane_t2_ParamLimits

0xde15,	// (0x000517d2) dialer2_ne_pane_t2

0x0001,

0xf785,	// (0x00053142) dialer2_ne_pane_t_ParamLimits

0xf785,	// (0x00053142) dialer2_ne_pane_t

0xd2c2,	// (0x00050c7f) bg_popup_sub_pane_cp010_ParamLimits

0xd2c2,	// (0x00050c7f) bg_popup_sub_pane_cp010

0x5f10,	// (0x000498cd) popup_vtel_slider_window_g1_ParamLimits

0x5f10,	// (0x000498cd) popup_vtel_slider_window_g1

0x5f23,	// (0x000498e0) popup_vtel_slider_window_g2_ParamLimits

0x5f23,	// (0x000498e0) popup_vtel_slider_window_g2

0x0003,

0xf89b,	// (0x00053258) popup_vtel_slider_window_g_ParamLimits

0xf89b,	// (0x00053258) popup_vtel_slider_window_g

0x5f79,	// (0x00049936) vtel_slider_pane_ParamLimits

0x5f79,	// (0x00049936) vtel_slider_pane

0x5f9b,	// (0x00049958) vtel_slider_pane_g1_ParamLimits

0x5f9b,	// (0x00049958) vtel_slider_pane_g1

0x5faf,	// (0x0004996c) vtel_slider_pane_g2_ParamLimits

0x5faf,	// (0x0004996c) vtel_slider_pane_g2

0x5fc7,	// (0x00049984) vtel_slider_pane_g3_ParamLimits

0x5fc7,	// (0x00049984) vtel_slider_pane_g3

0x5f9b,	// (0x00049958) vtel_slider_pane_g4_ParamLimits

0x5f9b,	// (0x00049958) vtel_slider_pane_g4

0x5fdd,	// (0x0004999a) vtel_slider_pane_g5_ParamLimits

0x5fdd,	// (0x0004999a) vtel_slider_pane_g5

0x0004,

0xf8a4,	// (0x00053261) vtel_slider_pane_g_ParamLimits

0xf8a4,	// (0x00053261) vtel_slider_pane_g

0xa15c,	// (0x0004db19) main_gallery2_pane

0x55f3,	// (0x00048fb0) aid_size_row_itut2_dropdow_list_ParamLimits

0x55f3,	// (0x00048fb0) aid_size_row_itut2_dropdow_list

0x5671,	// (0x0004902e) grid_vitu2_function_top_pane_ParamLimits

0x5671,	// (0x0004902e) grid_vitu2_function_top_pane

0x56db,	// (0x00049098) popup_vitu2_dropdown_list_window_ParamLimits

0x56db,	// (0x00049098) popup_vitu2_dropdown_list_window

0x5702,	// (0x000490bf) popup_vitu2_match_list_window

0x5ff3,	// (0x000499b0) cell_vitu2_function_top_pane_ParamLimits

0x5ff3,	// (0x000499b0) cell_vitu2_function_top_pane

0x600b,	// (0x000499c8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x600b,	// (0x000499c8) cell_vitu2_function_top_pane_cp01

0x6027,	// (0x000499e4) cell_vitu2_function_top_wide_pane_ParamLimits

0x6027,	// (0x000499e4) cell_vitu2_function_top_wide_pane

0xa15c,	// (0x0004db19) bg_button_pane_cp012

0x6045,	// (0x00049a02) cell_vitu2_function_top_pane_g1

0xced7,	// (0x00050894) bg_button_pane_cp013_ParamLimits

0xced7,	// (0x00050894) bg_button_pane_cp013

0x6059,	// (0x00049a16) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6059,	// (0x00049a16) cell_vitu2_function_top_wide_pane_g1

0xa15c,	// (0x0004db19) bg_popup_sub_pane_cp20

0x6071,	// (0x00049a2e) list_vitu2_match_list_pane

0xdebd,	// (0x0005187a) bg_popup_sub_pane_cp20_g1

0xdec5,	// (0x00051882) bg_popup_sub_pane_cp20_g2

0xad79,	// (0x0004e736) bg_popup_sub_pane_cp20_g3

0xdecd,	// (0x0005188a) bg_popup_sub_pane_cp20_g4

0xad59,	// (0x0004e716) bg_popup_sub_pane_cp20_g5

0xe12c,	// (0x00051ae9) bg_popup_sub_pane_cp20_g6

0xdedd,	// (0x0005189a) bg_popup_sub_pane_cp20_g7

0xdee5,	// (0x000518a2) bg_popup_sub_pane_cp20_g8

0xdeed,	// (0x000518aa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8af,	// (0x0005326c) bg_popup_sub_pane_cp20_g

0xcef3,	// (0x000508b0) list_vitu2_match_list_item_pane_ParamLimits

0xcef3,	// (0x000508b0) list_vitu2_match_list_item_pane

0xcf05,	// (0x000508c2) list_vitu2_match_list_item_pane_t1

0xa0e5,	// (0x0004daa2) bg_popup_sub_pane_cp21

0xab56,	// (0x0004e513) grid_vitu2_dropdown_list_pane

0x6089,	// (0x00049a46) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6089,	// (0x00049a46) cell_vitu2_dropdown_list_char_pane

0x60a9,	// (0x00049a66) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x60a9,	// (0x00049a66) cell_vitu2_dropdown_list_ctrl_pane

0xe134,	// (0x00051af1) cell_vitu2_dropdown_list_char_pane_g1

0xe13d,	// (0x00051afa) cell_vitu2_dropdown_list_char_pane_g2

0xe146,	// (0x00051b03) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x03ff,	// (0x00043dbc) cell_vitu2_dropdown_list_char_pane_g

0x60d1,	// (0x00049a8e) cell_vitu2_dropdown_list_char_pane_t1

0x60df,	// (0x00049a9c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x60df,	// (0x00049a9c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x60ec,	// (0x00049aa9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x60ec,	// (0x00049aa9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x60f9,	// (0x00049ab6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x60f9,	// (0x00049ab6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6106,	// (0x00049ac3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6106,	// (0x00049ac3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa853,	// (0x0004e210) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa853,	// (0x0004e210) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8c2,	// (0x0005327f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8c2,	// (0x0005327f) cell_vitu2_dropdown_list_ctrl_pane_g

0x6122,	// (0x00049adf) aid_size_cell_gallery2_ParamLimits

0x6122,	// (0x00049adf) aid_size_cell_gallery2

0x6140,	// (0x00049afd) grid_gallery2_pane_ParamLimits

0x6140,	// (0x00049afd) grid_gallery2_pane

0x615a,	// (0x00049b17) scroll_pane_cp029_ParamLimits

0x615a,	// (0x00049b17) scroll_pane_cp029

0x616b,	// (0x00049b28) cell_gallery2_pane_ParamLimits

0x616b,	// (0x00049b28) cell_gallery2_pane

0xe14f,	// (0x00051b0c) cell_gallery2_pane_g2

0x61ca,	// (0x00049b87) cell_gallery2_pane_g3

0xe157,	// (0x00051b14) cell_gallery2_pane_g4

0xe15f,	// (0x00051b1c) cell_gallery2_pane_g5

0xab56,	// (0x0004e513) grid_highlight_pane_cp10

0x5702,	// (0x000490bf) popup_vitu2_match_list_window_ParamLimits

0x5717,	// (0x000490d4) popup_vitu2_query_window_ParamLimits

0x5717,	// (0x000490d4) popup_vitu2_query_window

0xa0e5,	// (0x0004daa2) bg_vitu2_candi_button_pane

0xe134,	// (0x00051af1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe13d,	// (0x00051afa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe146,	// (0x00051b03) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x61d2,	// (0x00049b8f) bg_button_pane_cp015

0x61e3,	// (0x00049ba0) bg_button_pane_cp016

0x61ef,	// (0x00049bac) bg_button_pane_cp017

0xb6d7,	// (0x0004f094) bg_popup_sub_pane_cp22

0xe167,	// (0x00051b24) popup_vitu2_query_window_g1

0x622d,	// (0x00049bea) popup_vitu2_query_window_g2

0x0002,

0xf8cd,	// (0x0005328a) popup_vitu2_query_window_g

0x624f,	// (0x00049c0c) popup_vitu2_query_window_t1_ParamLimits

0x624f,	// (0x00049c0c) popup_vitu2_query_window_t1

0x6282,	// (0x00049c3f) popup_vitu2_query_window_t2_ParamLimits

0x6282,	// (0x00049c3f) popup_vitu2_query_window_t2

0x6294,	// (0x00049c51) popup_vitu2_query_window_t3_ParamLimits

0x6294,	// (0x00049c51) popup_vitu2_query_window_t3

0x62bc,	// (0x00049c79) popup_vitu2_query_window_t4_ParamLimits

0x62bc,	// (0x00049c79) popup_vitu2_query_window_t4

0x62d0,	// (0x00049c8d) popup_vitu2_query_window_t5_ParamLimits

0x62d0,	// (0x00049c8d) popup_vitu2_query_window_t5

0x0006,

0xf8d4,	// (0x00053291) popup_vitu2_query_window_t_ParamLimits

0xf8d4,	// (0x00053291) popup_vitu2_query_window_t

0xdfe5,	// (0x000519a2) main_cset_text_pane

0x5c65,	// (0x00049622) aid_area_touch_slider_ParamLimits

0x5c81,	// (0x0004963e) cset_slider_pane_ParamLimits

0x5ca4,	// (0x00049661) main_cset_slider_pane_g1_ParamLimits

0x5cb9,	// (0x00049676) main_cset_slider_pane_g2_ParamLimits

0xe006,	// (0x000519c3) main_cset_slider_pane_g3_ParamLimits

0xe006,	// (0x000519c3) main_cset_slider_pane_g3

0x5cce,	// (0x0004968b) main_cset_slider_pane_g4_ParamLimits

0x5cce,	// (0x0004968b) main_cset_slider_pane_g4

0x5cdd,	// (0x0004969a) main_cset_slider_pane_g5_ParamLimits

0x5cdd,	// (0x0004969a) main_cset_slider_pane_g5

0x5ce9,	// (0x000496a6) main_cset_slider_pane_g6_ParamLimits

0x5ce9,	// (0x000496a6) main_cset_slider_pane_g6

0xf83f,	// (0x000531fc) main_cset_slider_pane_g_ParamLimits

0xe036,	// (0x000519f3) main_cset_slider_pane_t1_ParamLimits

0x5d75,	// (0x00049732) main_cset_slider_pane_t2_ParamLimits

0x5d8f,	// (0x0004974c) main_cset_slider_pane_t3_ParamLimits

0x5da9,	// (0x00049766) main_cset_slider_pane_t4_ParamLimits

0x5dc3,	// (0x00049780) main_cset_slider_pane_t5_ParamLimits

0x5ddd,	// (0x0004979a) main_cset_slider_pane_t6_ParamLimits

0x5df2,	// (0x000497af) main_cset_slider_pane_t7_ParamLimits

0x5e1c,	// (0x000497d9) main_cset_slider_pane_t8_ParamLimits

0x5e1c,	// (0x000497d9) main_cset_slider_pane_t8

0x5e44,	// (0x00049801) main_cset_slider_pane_t9_ParamLimits

0x5e44,	// (0x00049801) main_cset_slider_pane_t9

0x5e6c,	// (0x00049829) main_cset_slider_pane_t10_ParamLimits

0x5e6c,	// (0x00049829) main_cset_slider_pane_t10

0x5e94,	// (0x00049851) main_cset_slider_pane_t11_ParamLimits

0x5e94,	// (0x00049851) main_cset_slider_pane_t11

0x5ebc,	// (0x00049879) main_cset_slider_pane_t12_ParamLimits

0x5ebc,	// (0x00049879) main_cset_slider_pane_t12

0x5ed9,	// (0x00049896) main_cset_slider_pane_t13_ParamLimits

0x5ed9,	// (0x00049896) main_cset_slider_pane_t13

0xf864,	// (0x00053221) main_cset_slider_pane_t_ParamLimits

0xa0e5,	// (0x0004daa2) bg_popup_sub_pane_cp011

0xe173,	// (0x00051b30) main_cset_text_pane_g1

0xe17b,	// (0x00051b38) main_cset_text_pane_t1

0xe189,	// (0x00051b46) main_cset_text_pane_t2

0xe197,	// (0x00051b54) main_cset_text_pane_t3

0xe1a5,	// (0x00051b62) main_cset_text_pane_t4

0xe1b3,	// (0x00051b70) main_cset_text_pane_t5

0xe1c1,	// (0x00051b7e) main_cset_text_pane_t6

0xe1cf,	// (0x00051b8c) main_cset_text_pane_t7

0x0006,

0x0427,	// (0x00043de4) main_cset_text_pane_t

0xa0e5,	// (0x0004daa2) main_cam4_burst_pane

0xa0e5,	// (0x0004daa2) main_cam5_pane

0xdfa7,	// (0x00051964) bg_button_pane_cp019

0xdfb0,	// (0x0005196d) bg_button_pane_cp020

0xe012,	// (0x000519cf) main_cset_slider_pane_g7_ParamLimits

0xe012,	// (0x000519cf) main_cset_slider_pane_g7

0xe01e,	// (0x000519db) main_cset_slider_pane_g8_ParamLimits

0xe01e,	// (0x000519db) main_cset_slider_pane_g8

0x5cfd,	// (0x000496ba) main_cset_slider_pane_g9_ParamLimits

0x5cfd,	// (0x000496ba) main_cset_slider_pane_g9

0x5d09,	// (0x000496c6) main_cset_slider_pane_g10_ParamLimits

0x5d09,	// (0x000496c6) main_cset_slider_pane_g10

0x5d15,	// (0x000496d2) main_cset_slider_pane_g11_ParamLimits

0x5d15,	// (0x000496d2) main_cset_slider_pane_g11

0x5d21,	// (0x000496de) main_cset_slider_pane_g12_ParamLimits

0x5d21,	// (0x000496de) main_cset_slider_pane_g12

0x5d2d,	// (0x000496ea) main_cset_slider_pane_g13_ParamLimits

0x5d2d,	// (0x000496ea) main_cset_slider_pane_g13

0x5d39,	// (0x000496f6) main_cset_slider_pane_g14_ParamLimits

0x5d39,	// (0x000496f6) main_cset_slider_pane_g14

0x5d45,	// (0x00049702) main_cset_slider_pane_g15_ParamLimits

0x5d45,	// (0x00049702) main_cset_slider_pane_g15

0xe05e,	// (0x00051a1b) main_cset_slider_pane_t14_ParamLimits

0xe05e,	// (0x00051a1b) main_cset_slider_pane_t14

0xe097,	// (0x00051a54) main_cset_slider_pane_t15_ParamLimits

0xe097,	// (0x00051a54) main_cset_slider_pane_t15

0x633a,	// (0x00049cf7) aid_cam4_burst_size_cell_ParamLimits

0x633a,	// (0x00049cf7) aid_cam4_burst_size_cell

0x635a,	// (0x00049d17) grid_cam4_burst_pane_ParamLimits

0x635a,	// (0x00049d17) grid_cam4_burst_pane

0x6392,	// (0x00049d4f) linegrid_cam4_burst_pane_ParamLimits

0x6392,	// (0x00049d4f) linegrid_cam4_burst_pane

0xe5fe,	// (0x00051fbb) scroll_pane_cp30_ParamLimits

0xe5fe,	// (0x00051fbb) scroll_pane_cp30

0x63b6,	// (0x00049d73) cell_cam4_burst_pane_ParamLimits

0x63b6,	// (0x00049d73) cell_cam4_burst_pane

0xe1dd,	// (0x00051b9a) linegrid_cam4_burst_pane_g1_ParamLimits

0xe1dd,	// (0x00051b9a) linegrid_cam4_burst_pane_g1

0x6403,	// (0x00049dc0) linegrid_cam4_burst_pane_g2_ParamLimits

0x6403,	// (0x00049dc0) linegrid_cam4_burst_pane_g2

0xe1ea,	// (0x00051ba7) linegrid_cam4_burst_pane_g3_ParamLimits

0xe1ea,	// (0x00051ba7) linegrid_cam4_burst_pane_g3

0x0002,

0xf8e3,	// (0x000532a0) linegrid_cam4_burst_pane_g_ParamLimits

0xf8e3,	// (0x000532a0) linegrid_cam4_burst_pane_g

0x6414,	// (0x00049dd1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6414,	// (0x00049dd1) linegrid_cam4_burst_pane_g3_copy1

0xe1f7,	// (0x00051bb4) linegrid_cam4_burst_pane_g4_ParamLimits

0xe1f7,	// (0x00051bb4) linegrid_cam4_burst_pane_g4

0x642e,	// (0x00049deb) linegrid_cam4_burst_pane_g5_ParamLimits

0x642e,	// (0x00049deb) linegrid_cam4_burst_pane_g5

0x643f,	// (0x00049dfc) linegrid_cam4_burst_pane_g6_ParamLimits

0x643f,	// (0x00049dfc) linegrid_cam4_burst_pane_g6

0xe204,	// (0x00051bc1) linegrid_cam4_burst_pane_g7_ParamLimits

0xe204,	// (0x00051bc1) linegrid_cam4_burst_pane_g7

0x6456,	// (0x00049e13) cell_cam4_burst_pane_g1

0xe21d,	// (0x00051bda) main_cam5_pane_t1_ParamLimits

0xe21d,	// (0x00051bda) main_cam5_pane_t1

0xe22f,	// (0x00051bec) main_cam5_pane_t2_ParamLimits

0xe22f,	// (0x00051bec) main_cam5_pane_t2

0xe241,	// (0x00051bfe) main_cam5_pane_t3_ParamLimits

0xe241,	// (0x00051bfe) main_cam5_pane_t3

0xe253,	// (0x00051c10) main_cam5_pane_t4_ParamLimits

0xe253,	// (0x00051c10) main_cam5_pane_t4

0xe26b,	// (0x00051c28) main_cam5_pane_t5_ParamLimits

0xe26b,	// (0x00051c28) main_cam5_pane_t5

0xe27f,	// (0x00051c3c) main_cam5_pane_t6_ParamLimits

0xe27f,	// (0x00051c3c) main_cam5_pane_t6

0xe293,	// (0x00051c50) main_cam5_pane_t7_ParamLimits

0xe293,	// (0x00051c50) main_cam5_pane_t7

0xe2a5,	// (0x00051c62) main_cam5_pane_t8_ParamLimits

0xe2a5,	// (0x00051c62) main_cam5_pane_t8

0xe2c1,	// (0x00051c7e) main_cam5_pane_t9_ParamLimits

0xe2c1,	// (0x00051c7e) main_cam5_pane_t9

0xe2d3,	// (0x00051c90) main_cam5_pane_t10_ParamLimits

0xe2d3,	// (0x00051c90) main_cam5_pane_t10

0xe2e5,	// (0x00051ca2) main_cam5_pane_t11_ParamLimits

0xe2e5,	// (0x00051ca2) main_cam5_pane_t11

0xe2f7,	// (0x00051cb4) main_cam5_pane_t12_ParamLimits

0xe2f7,	// (0x00051cb4) main_cam5_pane_t12

0xe30c,	// (0x00051cc9) main_cam5_pane_t13_ParamLimits

0xe30c,	// (0x00051cc9) main_cam5_pane_t13

0x000c,

0x0442,	// (0x00043dff) main_cam5_pane_t_ParamLimits

0x0442,	// (0x00043dff) main_cam5_pane_t

0x11e3,	// (0x00044ba0) popup_scut_keymap_window_ParamLimits

0x11e3,	// (0x00044ba0) popup_scut_keymap_window

0x6469,	// (0x00049e26) aid_size_cell_brow_shortcut

0xab56,	// (0x0004e513) bg_popup_window_pane_cp010

0x6475,	// (0x00049e32) grid_scut_pane

0x6481,	// (0x00049e3e) cell_scut_pane_ParamLimits

0x6481,	// (0x00049e3e) cell_scut_pane

0x6498,	// (0x00049e55) cell_scut_pane_g1

0xe329,	// (0x00051ce6) cell_scut_pane_t1

0xe338,	// (0x00051cf5) cell_scut_pane_t2

0x64a1,	// (0x00049e5e) cell_scut_pane_t3

0x0002,

0xf8ef,	// (0x000532ac) cell_scut_pane_t

0x442b,	// (0x00047de8) main_mup3_pane_g8_ParamLimits

0x442b,	// (0x00047de8) main_mup3_pane_g8

0x560b,	// (0x00048fc8) area_vitu2_query_pane_ParamLimits

0x560b,	// (0x00048fc8) area_vitu2_query_pane

0x61fb,	// (0x00049bb8) input_focus_pane_cp08

0xe347,	// (0x00051d04) area_vitu2_query_pane_g1

0x64af,	// (0x00049e6c) area_vitu2_query_pane_g2

0x0001,

0xf8f6,	// (0x000532b3) area_vitu2_query_pane_g

0x64be,	// (0x00049e7b) area_vitu2_query_pane_t1_ParamLimits

0x64be,	// (0x00049e7b) area_vitu2_query_pane_t1

0x64d2,	// (0x00049e8f) area_vitu2_query_pane_t2_ParamLimits

0x64d2,	// (0x00049e8f) area_vitu2_query_pane_t2

0x64e6,	// (0x00049ea3) area_vitu2_query_pane_t3_ParamLimits

0x64e6,	// (0x00049ea3) area_vitu2_query_pane_t3

0xe353,	// (0x00051d10) area_vitu2_query_pane_t4_ParamLimits

0xe353,	// (0x00051d10) area_vitu2_query_pane_t4

0xe37b,	// (0x00051d38) area_vitu2_query_pane_t5_ParamLimits

0xe37b,	// (0x00051d38) area_vitu2_query_pane_t5

0xe3a3,	// (0x00051d60) area_vitu2_query_pane_t6_ParamLimits

0xe3a3,	// (0x00051d60) area_vitu2_query_pane_t6

0x0006,

0xf8fb,	// (0x000532b8) area_vitu2_query_pane_t_ParamLimits

0xf8fb,	// (0x000532b8) area_vitu2_query_pane_t

0x650e,	// (0x00049ecb) bg_button_pane_cp018

0x651a,	// (0x00049ed7) bg_button_pane_cp021

0x6526,	// (0x00049ee3) bg_button_pane_cp022

0x6545,	// (0x00049f02) input_focus_pane_cp09

0xb435,	// (0x0004edf2) aid_size_touch_mv_arrow_left

0xb45e,	// (0x0004ee1b) aid_size_touch_mv_arrow_right

0x5d5d,	// (0x0004971a) main_cset_slider_pane_g16_ParamLimits

0x5d5d,	// (0x0004971a) main_cset_slider_pane_g16

0x5d69,	// (0x00049726) main_cset_slider_pane_g17_ParamLimits

0x5d69,	// (0x00049726) main_cset_slider_pane_g17

0x6456,	// (0x00049e13) cell_cam4_burst_pane_g1_ParamLimits

0xa0e5,	// (0x0004daa2) compa_mode_pane

0x5f33,	// (0x000498f0) popup_vtel_slider_window_g3_ParamLimits

0x5f33,	// (0x000498f0) popup_vtel_slider_window_g3

0x5f4a,	// (0x00049907) popup_vtel_slider_window_g4_ParamLimits

0x5f4a,	// (0x00049907) popup_vtel_slider_window_g4

0x5f61,	// (0x0004991e) popup_vtel_slider_window_t1_ParamLimits

0x5f61,	// (0x0004991e) popup_vtel_slider_window_t1

0xa0e5,	// (0x0004daa2) main_cl_pane

0xc8ec,	// (0x000502a9) popup_imed_adjust2_window_ParamLimits

0xb6d7,	// (0x0004f094) bg_tb_trans_pane_cp05_ParamLimits

0xdb60,	// (0x0005151d) popup_imed_adjust2_window_g1_ParamLimits

0xdb6f,	// (0x0005152c) popup_imed_adjust2_window_g2_ParamLimits

0xdb6f,	// (0x0005152c) popup_imed_adjust2_window_g2

0xdb7b,	// (0x00051538) popup_imed_adjust2_window_g3_ParamLimits

0xdb7b,	// (0x00051538) popup_imed_adjust2_window_g3

0x0002,

0xf6b5,	// (0x00053072) popup_imed_adjust2_window_g_ParamLimits

0xf6b5,	// (0x00053072) popup_imed_adjust2_window_g

0xdb87,	// (0x00051544) popup_imed_adjust2_window_t1_ParamLimits

0xdb9f,	// (0x0005155c) slider_imed_adjust_pane_ParamLimits

0xdbb3,	// (0x00051570) slider_imed_adjust_pane_g1_ParamLimits

0xdbc3,	// (0x00051580) slider_imed_adjust_pane_g2_ParamLimits

0xdbd3,	// (0x00051590) slider_imed_adjust_pane_g3_ParamLimits

0xdbe4,	// (0x000515a1) slider_imed_adjust_pane_g4_ParamLimits

0xf6bc,	// (0x00053079) slider_imed_adjust_pane_g_ParamLimits

0x5382,	// (0x00048d3f) aid_touch_area_cam4_ParamLimits

0x5382,	// (0x00048d3f) aid_touch_area_cam4

0xcd9a,	// (0x00050757) battery_pane_cp01

0x5451,	// (0x00048e0e) main_camera4_pane_g6_ParamLimits

0x5451,	// (0x00048e0e) main_camera4_pane_g6

0x547b,	// (0x00048e38) main_camera4_pane_t2_ParamLimits

0x547b,	// (0x00048e38) main_camera4_pane_t2

0x0001,

0xf7b9,	// (0x00053176) main_camera4_pane_t_ParamLimits

0xf7b9,	// (0x00053176) main_camera4_pane_t

0x54c2,	// (0x00048e7f) aid_touch_area_vid4_ParamLimits

0x54c2,	// (0x00048e7f) aid_touch_area_vid4

0x5516,	// (0x00048ed3) main_video4_pane_g5_ParamLimits

0x5516,	// (0x00048ed3) main_video4_pane_g5

0x553b,	// (0x00048ef8) vid4_progress_pane_ParamLimits

0x553b,	// (0x00048ef8) vid4_progress_pane

0xe02a,	// (0x000519e7) main_cset_slider_pane_g18_ParamLimits

0xe02a,	// (0x000519e7) main_cset_slider_pane_g18

0xe211,	// (0x00051bce) cell_cam4_burst_pane_g2_ParamLimits

0xe211,	// (0x00051bce) cell_cam4_burst_pane_g2

0x0001,

0xf8ea,	// (0x000532a7) cell_cam4_burst_pane_g_ParamLimits

0xf8ea,	// (0x000532a7) cell_cam4_burst_pane_g

0xa911,	// (0x0004e2ce) bg_cl_pane_ParamLimits

0xa911,	// (0x0004e2ce) bg_cl_pane

0x6555,	// (0x00049f12) cl_header_pane_ParamLimits

0x6555,	// (0x00049f12) cl_header_pane

0x6569,	// (0x00049f26) cl_listscroll_pane_ParamLimits

0x6569,	// (0x00049f26) cl_listscroll_pane

0xe3ef,	// (0x00051dac) bg_cl_pane_g1

0xe3f7,	// (0x00051db4) bg_cl_pane_g2

0xe3ff,	// (0x00051dbc) bg_cl_pane_g3

0xe407,	// (0x00051dc4) bg_cl_pane_g4

0xe40f,	// (0x00051dcc) bg_cl_pane_g5

0xe417,	// (0x00051dd4) bg_cl_pane_g6

0xe41f,	// (0x00051ddc) bg_cl_pane_g7

0xe427,	// (0x00051de4) bg_cl_pane_g8

0xe42f,	// (0x00051dec) bg_cl_pane_g9

0x0008,

0x0478,	// (0x00043e35) bg_cl_pane_g

0x6579,	// (0x00049f36) aid_height_cl_leading_ParamLimits

0x6579,	// (0x00049f36) aid_height_cl_leading

0x6585,	// (0x00049f42) aid_height_cl_text_ParamLimits

0x6585,	// (0x00049f42) aid_height_cl_text

0xa15c,	// (0x0004db19) bg_cl_header_pane_ParamLimits

0xa15c,	// (0x0004db19) bg_cl_header_pane

0x65a4,	// (0x00049f61) cl_header_pane_g1_ParamLimits

0x65a4,	// (0x00049f61) cl_header_pane_g1

0x65ba,	// (0x00049f77) cl_header_pane_t1_ParamLimits

0x65ba,	// (0x00049f77) cl_header_pane_t1

0xe437,	// (0x00051df4) cl_list_pane

0xdffd,	// (0x000519ba) hc_scroll_pane_cp01

0xad59,	// (0x0004e716) bg_cl_header_pane_g1

0xdebd,	// (0x0005187a) bg_cl_header_pane_g2

0xad79,	// (0x0004e736) bg_cl_header_pane_g3

0xdecd,	// (0x0005188a) bg_cl_header_pane_g4

0xdec5,	// (0x00051882) bg_cl_header_pane_g5

0xe12c,	// (0x00051ae9) bg_cl_header_pane_g6

0xdee5,	// (0x000518a2) bg_cl_header_pane_g7

0xdeed,	// (0x000518aa) bg_cl_header_pane_g8

0xdedd,	// (0x0005189a) bg_cl_header_pane_g9

0x0008,

0xf90a,	// (0x000532c7) bg_cl_header_pane_g

0x65d3,	// (0x00049f90) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x65d3,	// (0x00049f90) hc_cl_list_double_graphic_heading_pane

0x65e4,	// (0x00049fa1) hc_cl_list_single_graphic_pane_ParamLimits

0x65e4,	// (0x00049fa1) hc_cl_list_single_graphic_pane

0x65fa,	// (0x00049fb7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x65fa,	// (0x00049fb7) hc_cl_list_single_graphic_pane_g1

0x6606,	// (0x00049fc3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6606,	// (0x00049fc3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf91d,	// (0x000532da) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf91d,	// (0x000532da) hc_cl_list_single_graphic_pane_g

0x661a,	// (0x00049fd7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x661a,	// (0x00049fd7) hc_cl_list_single_graphic_pane_t1

0x65fa,	// (0x00049fb7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x65fa,	// (0x00049fb7) hc_cl_list_double_graphic_heading_pane_g1

0x662f,	// (0x00049fec) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x662f,	// (0x00049fec) hc_cl_list_double_graphic_heading_pane_g2

0x6643,	// (0x0004a000) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6643,	// (0x0004a000) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf922,	// (0x000532df) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf922,	// (0x000532df) hc_cl_list_double_graphic_heading_pane_g

0x6657,	// (0x0004a014) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6657,	// (0x0004a014) hc_cl_list_double_graphic_heading_pane_t1

0x666c,	// (0x0004a029) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x666c,	// (0x0004a029) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf929,	// (0x000532e6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf929,	// (0x000532e6) hc_cl_list_double_graphic_heading_pane_t

0xd6dd,	// (0x0005109a) vid4_progress_pane_g1

0xd6ed,	// (0x000510aa) vid4_progress_pane_g2

0x6681,	// (0x0004a03e) vid4_progress_pane_g3

0xd6fd,	// (0x000510ba) vid4_progress_pane_g4

0x0004,

0xf92e,	// (0x000532eb) vid4_progress_pane_g

0x6693,	// (0x0004a050) vid4_progress_pane_t1

0xd715,	// (0x000510d2) vid4_progress_pane_t2

0x0002,

0xf939,	// (0x000532f6) vid4_progress_pane_t

0x66ab,	// (0x0004a068) wait_bar_pane_cp07

0xd40f,	// (0x00050dcc) blid_firmament_pane_ParamLimits

0xd452,	// (0x00050e0f) popup_blid_sat_info2_window_g1

0xd476,	// (0x00050e33) popup_blid_sat_info2_window_t3

0xd484,	// (0x00050e41) popup_blid_sat_info2_window_t4

0xd492,	// (0x00050e4f) popup_blid_sat_info2_window_t5

0xd4a0,	// (0x00050e5d) popup_blid_sat_info2_window_t6

0xd4b0,	// (0x00050e6d) popup_blid_sat_info2_window_t7

0xd4be,	// (0x00050e7b) popup_blid_sat_info2_window_t8

0xd4cc,	// (0x00050e89) popup_blid_sat_info2_window_t9

0xd4da,	// (0x00050e97) popup_blid_sat_info2_window_t10

0xd59b,	// (0x00050f58) aid_firma_cardinal_ParamLimits

0xd5af,	// (0x00050f6c) blid_firmament_pane_t1_ParamLimits

0xd5c6,	// (0x00050f83) blid_firmament_pane_t2_ParamLimits

0xd5dd,	// (0x00050f9a) blid_firmament_pane_t3_ParamLimits

0xd5f4,	// (0x00050fb1) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x00052f8d) blid_firmament_pane_t_ParamLimits

0xd60b,	// (0x00050fc8) blid_sat_info_pane_ParamLimits

0xa15c,	// (0x0004db19) main_cam_set_pane_ParamLimits

0x4bef,	// (0x000485ac) aid_size_cell_colour_35_ParamLimits

0x4c0f,	// (0x000485cc) aid_size_cell_colour_112_ParamLimits

0x4c2f,	// (0x000485ec) aid_size_cell_effect_ParamLimits

0xb6d7,	// (0x0004f094) bg_tb_trans_pane_cp02_ParamLimits

0x4c4f,	// (0x0004860c) heading_imed_pane_ParamLimits

0x4c5b,	// (0x00048618) listscroll_imed_pane_ParamLimits

0xc023,	// (0x0004f9e0) popup_call2_audio_first_window_g5_ParamLimits

0xc023,	// (0x0004f9e0) popup_call2_audio_first_window_g5

0x4f90,	// (0x0004894d) aid_size_touch_image3_arrow_left_ParamLimits

0x4f90,	// (0x0004894d) aid_size_touch_image3_arrow_left

0x4fbc,	// (0x00048979) aid_size_touch_image3_arrow_right_ParamLimits

0x4fbc,	// (0x00048979) aid_size_touch_image3_arrow_right

0xd72a,	// (0x000510e7) vid4_progress_pane_t3

0x4dd8,	// (0x00048795) main_hwr_training_symbol_option_pane_ParamLimits

0x4dd8,	// (0x00048795) main_hwr_training_symbol_option_pane

0xdd18,	// (0x000516d5) popup_hwr_training_preview_window_ParamLimits

0xdd18,	// (0x000516d5) popup_hwr_training_preview_window

0x4df8,	// (0x000487b5) hwr_training_navi_pane_g5_ParamLimits

0x4df8,	// (0x000487b5) hwr_training_navi_pane_g5

0xdeab,	// (0x00051868) popup_char_count_window

0xa15c,	// (0x0004db19) bg_popup_sub_pane_cp20_ParamLimits

0x6071,	// (0x00049a2e) list_vitu2_match_list_pane_ParamLimits

0x607d,	// (0x00049a3a) vitu2_page_scroll_pane_ParamLimits

0x607d,	// (0x00049a3a) vitu2_page_scroll_pane

0xe449,	// (0x00051e06) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe449,	// (0x00051e06) list_single_hwr_training_symbol_option_pane

0xe45c,	// (0x00051e19) list_single_hwr_training_symbol_option_pane_g1

0xe464,	// (0x00051e21) list_single_hwr_training_symbol_option_pane_t1

0xe472,	// (0x00051e2f) bg_button_pane_cp023

0xe47b,	// (0x00051e38) bg_button_pane_cp024

0xe4ae,	// (0x00051e6b) vitu2_page_scroll_pane_g1

0xe4b6,	// (0x00051e73) vitu2_page_scroll_pane_g2

0x0001,

0x04c1,	// (0x00043e7e) vitu2_page_scroll_pane_g

0xe4be,	// (0x00051e7b) vitu2_page_scroll_pane_t1

0xd385,	// (0x00050d42) popup_char_count_window_g1

0xe4cd,	// (0x00051e8a) popup_char_count_window_g2

0xe4d6,	// (0x00051e93) popup_char_count_window_g3

0x0002,

0xf940,	// (0x000532fd) popup_char_count_window_g

0xe4df,	// (0x00051e9c) popup_char_count_window_t1

0xa0e5,	// (0x0004daa2) main_vded2_pane

0xdb4c,	// (0x00051509) aid_size_cell_imed_line

0xdb56,	// (0x00051513) grid_imed_line_width_pane

0xce52,	// (0x0005080f) vid4_indicators_pane_g4

0xe4ed,	// (0x00051eaa) cell_imed_line_width_pane_ParamLimits

0xe4ed,	// (0x00051eaa) cell_imed_line_width_pane

0xe501,	// (0x00051ebe) cell_imed_line_width_pane_g1

0xe50a,	// (0x00051ec7) cell_imed_line_width_pane_g2

0x0001,

0x04cd,	// (0x00043e8a) cell_imed_line_width_pane_g

0x66be,	// (0x0004a07b) main_vded2_pane_g1_ParamLimits

0x66be,	// (0x0004a07b) main_vded2_pane_g1

0x66d4,	// (0x0004a091) main_vded2_pane_g2_ParamLimits

0x66d4,	// (0x0004a091) main_vded2_pane_g2

0x0001,

0xf947,	// (0x00053304) main_vded2_pane_g_ParamLimits

0xf947,	// (0x00053304) main_vded2_pane_g

0x66e6,	// (0x0004a0a3) vded2_slider_pane_ParamLimits

0x66e6,	// (0x0004a0a3) vded2_slider_pane

0x66f6,	// (0x0004a0b3) aid_size_touch_vded2_end

0x6700,	// (0x0004a0bd) aid_size_touch_vded2_playhead

0xe512,	// (0x00051ecf) aid_size_touch_vded2_start

0xe51a,	// (0x00051ed7) vded2_slider_bg_pane

0xe523,	// (0x00051ee0) vded2_slider_pane_g1

0xe52c,	// (0x00051ee9) vded2_slider_pane_g2

0x670a,	// (0x0004a0c7) vded2_slider_pane_g3

0x0002,

0xf94c,	// (0x00053309) vded2_slider_pane_g

0xe534,	// (0x00051ef1) vded2_slider_bg_pane_g1

0xe53d,	// (0x00051efa) vded2_slider_bg_pane_g2

0xe546,	// (0x00051f03) vded2_slider_bg_pane_g3

0x0002,

0x04de,	// (0x00043e9b) vded2_slider_bg_pane_g

0x321b,	// (0x00046bd8) aid_postcard_touch_down_pane_ParamLimits

0x321b,	// (0x00046bd8) aid_postcard_touch_down_pane

0x3231,	// (0x00046bee) aid_postcard_touch_up_pane_ParamLimits

0x3231,	// (0x00046bee) aid_postcard_touch_up_pane

0xa0e5,	// (0x0004daa2) main_blid2_pane

0xc8d2,	// (0x0005028f) popup_blid2_search_window

0xa0e5,	// (0x0004daa2) blid2_gps_pane

0xa0e5,	// (0x0004daa2) blid2_navig_pane

0xa0e5,	// (0x0004daa2) blid2_search_pane

0xa0e5,	// (0x0004daa2) blid2_tripm_pane

0x6715,	// (0x0004a0d2) blid2_search_pane_g1_ParamLimits

0x6715,	// (0x0004a0d2) blid2_search_pane_g1

0x672f,	// (0x0004a0ec) blid2_search_pane_t1_ParamLimits

0x672f,	// (0x0004a0ec) blid2_search_pane_t1

0x6741,	// (0x0004a0fe) aid_size_cell_blid2_gps_ParamLimits

0x6741,	// (0x0004a0fe) aid_size_cell_blid2_gps

0x6759,	// (0x0004a116) blid2_gps_pane_g1_ParamLimits

0x6759,	// (0x0004a116) blid2_gps_pane_g1

0x676d,	// (0x0004a12a) grid_blid2_satellite_pane_ParamLimits

0x676d,	// (0x0004a12a) grid_blid2_satellite_pane

0x6787,	// (0x0004a144) blid2_navig_pane_g1_ParamLimits

0x6787,	// (0x0004a144) blid2_navig_pane_g1

0x6793,	// (0x0004a150) blid2_navig_pane_t1_ParamLimits

0x6793,	// (0x0004a150) blid2_navig_pane_t1

0x67ae,	// (0x0004a16b) blid2_navig_pane_t2_ParamLimits

0x67ae,	// (0x0004a16b) blid2_navig_pane_t2

0x0001,

0xf953,	// (0x00053310) blid2_navig_pane_t_ParamLimits

0xf953,	// (0x00053310) blid2_navig_pane_t

0x67c9,	// (0x0004a186) blid2_navig_ring_pane_ParamLimits

0x67c9,	// (0x0004a186) blid2_navig_ring_pane

0x67e2,	// (0x0004a19f) blid2_speed_pane_ParamLimits

0x67e2,	// (0x0004a19f) blid2_speed_pane

0x67ee,	// (0x0004a1ab) blid2_tripm_pane_g1_ParamLimits

0x67ee,	// (0x0004a1ab) blid2_tripm_pane_g1

0x6807,	// (0x0004a1c4) blid2_tripm_pane_g2_ParamLimits

0x6807,	// (0x0004a1c4) blid2_tripm_pane_g2

0x681b,	// (0x0004a1d8) blid2_tripm_pane_g3_ParamLimits

0x681b,	// (0x0004a1d8) blid2_tripm_pane_g3

0x682f,	// (0x0004a1ec) blid2_tripm_pane_g4_ParamLimits

0x682f,	// (0x0004a1ec) blid2_tripm_pane_g4

0x6843,	// (0x0004a200) blid2_tripm_pane_g5_ParamLimits

0x6843,	// (0x0004a200) blid2_tripm_pane_g5

0x0005,

0xf958,	// (0x00053315) blid2_tripm_pane_g_ParamLimits

0xf958,	// (0x00053315) blid2_tripm_pane_g

0x6869,	// (0x0004a226) blid2_tripm_pane_t1_ParamLimits

0x6869,	// (0x0004a226) blid2_tripm_pane_t1

0x6884,	// (0x0004a241) blid2_tripm_pane_t2_ParamLimits

0x6884,	// (0x0004a241) blid2_tripm_pane_t2

0x689d,	// (0x0004a25a) blid2_tripm_pane_t3_ParamLimits

0x689d,	// (0x0004a25a) blid2_tripm_pane_t3

0x0003,

0xf965,	// (0x00053322) blid2_tripm_pane_t_ParamLimits

0xf965,	// (0x00053322) blid2_tripm_pane_t

0x68e4,	// (0x0004a2a1) cell_blid2_satellite_pane_ParamLimits

0x68e4,	// (0x0004a2a1) cell_blid2_satellite_pane

0x6902,	// (0x0004a2bf) cell_blid2_satellite_pane_g1

0xe54f,	// (0x00051f0c) cell_blid2_satellite_pane_t1

0xa899,	// (0x0004e256) blid2_speed_pane_g1

0xe55d,	// (0x00051f1a) blid2_speed_pane_t1

0xe56b,	// (0x00051f28) blid2_speed_pane_t2

0x0001,

0x0500,	// (0x00043ebd) blid2_speed_pane_t

0xa899,	// (0x0004e256) blid2_navig_ring_pane_g1

0x690b,	// (0x0004a2c8) blid2_navig_ring_pane_g2

0x6913,	// (0x0004a2d0) blid2_navig_ring_pane_g3

0x691b,	// (0x0004a2d8) blid2_navig_ring_pane_g4

0x6923,	// (0x0004a2e0) blid2_navig_ring_pane_g5

0x0004,

0xf96e,	// (0x0005332b) blid2_navig_ring_pane_g

0xa0e5,	// (0x0004daa2) bg_popup_window_pane_cp011

0xe579,	// (0x00051f36) popup_blid2_search_window_g1

0xe581,	// (0x00051f3e) popup_blid2_search_window_t1

0xe58f,	// (0x00051f4c) popup_blid2_search_window_t2

0x0001,

0x0510,	// (0x00043ecd) popup_blid2_search_window_t

0xac68,	// (0x0004e625) main_browser_pane_g1

0xa911,	// (0x0004e2ce) main_browser_pane_ParamLimits

0xa15c,	// (0x0004db19) bg_button_pane_cp011_ParamLimits

0x5948,	// (0x00049305) cell_vitu2_function_pane_g1_ParamLimits

0xb6d7,	// (0x0004f094) bg_popup_sub_pane_cp22_ParamLimits

0x61fb,	// (0x00049bb8) input_focus_pane_cp08_ParamLimits

0x6216,	// (0x00049bd3) popup_vitu2_query_button_pane_ParamLimits

0x6216,	// (0x00049bd3) popup_vitu2_query_button_pane

0x6225,	// (0x00049be2) popup_vitu2_query_input_button_pane

0xe167,	// (0x00051b24) popup_vitu2_query_window_g1_ParamLimits

0x622d,	// (0x00049bea) popup_vitu2_query_window_g2_ParamLimits

0xf8cd,	// (0x0005328a) popup_vitu2_query_window_g_ParamLimits

0xa0e5,	// (0x0004daa2) bg_button_pane_cp026

0x692b,	// (0x0004a2e8) popup_vitu2_query_input_button_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp025

0xe59d,	// (0x00051f5a) popup_vitu2_query_button_pane_t1

0x4099,	// (0x00047a56) main_mp3_pane_t6

0x40a7,	// (0x00047a64) popup_slider_window_cp01

0xcdb6,	// (0x00050773) cam4_battery_pane

0xce0f,	// (0x000507cc) cam4_battery_pane_cp02

0xd6d5,	// (0x00051092) cam4_battery_pane_cp01

0xd6d5,	// (0x00051092) cam4_battery_pane_cp03

0xa899,	// (0x0004e256) cam4_battery_pane_g1

0xe5ab,	// (0x00051f68) cam4_battery_pane_g2

0x0001,

0xf979,	// (0x00053336) cam4_battery_pane_g

0xd4e8,	// (0x00050ea5) popup_blid_sat_info2_window_t11

0xb435,	// (0x0004edf2) aid_size_touch_mv_arrow_left_ParamLimits

0xb45e,	// (0x0004ee1b) aid_size_touch_mv_arrow_right_ParamLimits

0xb4bc,	// (0x0004ee79) navi_pane_g1_ParamLimits

0xb4c8,	// (0x0004ee85) navi_pane_g2_ParamLimits

0xb4f6,	// (0x0004eeb3) navi_pane_g3_ParamLimits

0xf30c,	// (0x00052cc9) navi_pane_g_ParamLimits

0x2f30,	// (0x000468ed) navi_pane_mv_t1_ParamLimits

0x4c67,	// (0x00048624) grid_imed_effect_pane_ParamLimits

0x1cb9,	// (0x00045676) aid_placing_vt_slider_lsc

0xabb7,	// (0x0004e574) aid_placing_vt_slider_prt

0xa15c,	// (0x0004db19) bg_tb_trans_pane_cp01_ParamLimits

0xd7ee,	// (0x000511ab) popup_image_details_window_g1_ParamLimits

0xd801,	// (0x000511be) popup_image_details_window_g2_ParamLimits

0xd816,	// (0x000511d3) popup_image_details_window_g3_ParamLimits

0xd816,	// (0x000511d3) popup_image_details_window_g3

0x0122,	// (0x00043adf) popup_image_details_window_g_ParamLimits

0xd82a,	// (0x000511e7) popup_image_details_window_t1_ParamLimits

0xd83c,	// (0x000511f9) popup_image_details_window_t2_ParamLimits

0xd855,	// (0x00051212) popup_image_details_window_t3_ParamLimits

0xd869,	// (0x00051226) popup_image_details_window_t4_ParamLimits

0xd884,	// (0x00051241) popup_image_details_window_t5_ParamLimits

0x0129,	// (0x00043ae6) popup_image_details_window_t_ParamLimits

0x6591,	// (0x00049f4e) cl_header_name_pane_ParamLimits

0x6591,	// (0x00049f4e) cl_header_name_pane

0x6933,	// (0x0004a2f0) cl_header_name_pane_t1_ParamLimits

0x6933,	// (0x0004a2f0) cl_header_name_pane_t1

0x6954,	// (0x0004a311) cl_header_name_pane_t2_ParamLimits

0x6954,	// (0x0004a311) cl_header_name_pane_t2

0x6996,	// (0x0004a353) cl_header_name_pane_t3_ParamLimits

0x6996,	// (0x0004a353) cl_header_name_pane_t3

0x0002,

0xf97e,	// (0x0005333b) cl_header_name_pane_t_ParamLimits

0xf97e,	// (0x0005333b) cl_header_name_pane_t

0xb585,	// (0x0004ef42) navi_pane_mv_g2_ParamLimits

0xde76,	// (0x00051833) field_vitu2_entry_pane_g1_ParamLimits

0xde82,	// (0x0005183f) field_vitu2_entry_pane_g2_ParamLimits

0xb6b5,	// (0x0004f072) field_vitu2_entry_pane_g3_ParamLimits

0xb6b5,	// (0x0004f072) field_vitu2_entry_pane_g3

0xf7eb,	// (0x000531a8) field_vitu2_entry_pane_g_ParamLimits

0x57d8,	// (0x00049195) cell_vitu2_itu_pane_g1_ParamLimits

0x57f0,	// (0x000491ad) cell_vitu2_itu_pane_g2_ParamLimits

0x57f0,	// (0x000491ad) cell_vitu2_itu_pane_g2

0x0001,

0xf7f7,	// (0x000531b4) cell_vitu2_itu_pane_g_ParamLimits

0xf7f7,	// (0x000531b4) cell_vitu2_itu_pane_g

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp05_ParamLimits

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp05

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp03

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp04

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp10_ParamLimits

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp10

0x6535,	// (0x00049ef2) bg_vkb2_func_pane_cp08

0x650e,	// (0x00049ecb) bg_vkb2_func_pane_cp06

0x651a,	// (0x00049ed7) bg_vkb2_func_pane_cp07

0xe484,	// (0x00051e41) bg_vkb2_func_pane_cp11_ParamLimits

0xe484,	// (0x00051e41) bg_vkb2_func_pane_cp11

0xe499,	// (0x00051e56) bg_vkb2_func_pane_cp12_ParamLimits

0xe499,	// (0x00051e56) bg_vkb2_func_pane_cp12

0xa0e5,	// (0x0004daa2) bg_vkb2_func_pane_cp09

0xdebd,	// (0x0005187a) bg_vkb2_func_pane_g1

0xad79,	// (0x0004e736) bg_vkb2_func_pane_g2

0xdec5,	// (0x00051882) bg_vkb2_func_pane_g3

0xdecd,	// (0x0005188a) bg_vkb2_func_pane_g4

0xe12c,	// (0x00051ae9) bg_vkb2_func_pane_g5

0xdee5,	// (0x000518a2) bg_vkb2_func_pane_g6

0xdeed,	// (0x000518aa) bg_vkb2_func_pane_g7

0xdedd,	// (0x0005189a) bg_vkb2_func_pane_g8

0xad59,	// (0x0004e716) bg_vkb2_func_pane_g9

0x0008,

0xf985,	// (0x00053342) bg_vkb2_func_pane_g

0x6857,	// (0x0004a214) blid2_tripm_pane_g6_ParamLimits

0x6857,	// (0x0004a214) blid2_tripm_pane_g6

0xddbc,	// (0x00051779) mp4_progress_pane_g1

0x68d0,	// (0x0004a28d) blid2_tripm_values_pane_ParamLimits

0x68d0,	// (0x0004a28d) blid2_tripm_values_pane

0x69c7,	// (0x0004a384) blid2_tripm_values_pane_t1

0x69d5,	// (0x0004a392) blid2_tripm_values_pane_t2

0x69e3,	// (0x0004a3a0) blid2_tripm_values_pane_t3

0x69f1,	// (0x0004a3ae) blid2_tripm_values_pane_t4

0x69ff,	// (0x0004a3bc) blid2_tripm_values_pane_t5

0x6a0d,	// (0x0004a3ca) blid2_tripm_values_pane_t6

0x6a1b,	// (0x0004a3d8) blid2_tripm_values_pane_t7

0x6a29,	// (0x0004a3e6) blid2_tripm_values_pane_t8

0x6a37,	// (0x0004a3f4) blid2_tripm_values_pane_t9

0x0008,

0xf998,	// (0x00053355) blid2_tripm_values_pane_t

0x1cfb,	// (0x000456b8) call_video_pane_t1_ParamLimits

0x1d19,	// (0x000456d6) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00052b77) call_video_pane_t_ParamLimits

0x0a43,	// (0x00044400) msg_header_pane_g1_ParamLimits

0xb7a3,	// (0x0004f160) msg_header_pane_g2_ParamLimits

0xb7a3,	// (0x0004f160) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x00052d67) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x00052d67) msg_header_pane_g

0xa911,	// (0x0004e2ce) main_clock2_pane_ParamLimits

0x495c,	// (0x00048319) grid_clock2_toolbar_pane_ParamLimits

0x495c,	// (0x00048319) grid_clock2_toolbar_pane

0x495c,	// (0x00048319) listscroll_clock2_pane_ParamLimits

0x495c,	// (0x00048319) listscroll_clock2_pane

0x4a40,	// (0x000483fd) main_clock2_pane_t3_ParamLimits

0x4a40,	// (0x000483fd) main_clock2_pane_t3

0x4a64,	// (0x00048421) main_clock2_pane_t4_ParamLimits

0x4a64,	// (0x00048421) main_clock2_pane_t4

0xe5b5,	// (0x00051f72) cell_clock2_toolbar_pane

0xe5bd,	// (0x00051f7a) cell_clock2_toolbar_pane_cp01

0xe5bd,	// (0x00051f7a) cell_clock2_toolbar_pane_cp02

0xe5c5,	// (0x00051f82) cell_clock2_toolbar_pane_cp03

0xe5cd,	// (0x00051f8a) list_clock2_pane

0xb3ab,	// (0x0004ed68) scroll_pane_cp10

0xe5d5,	// (0x00051f92) list_single_clock2_pane_ParamLimits

0xe5d5,	// (0x00051f92) list_single_clock2_pane

0xab56,	// (0x0004e513) list_highlight_pane_cp08

0xe5e2,	// (0x00051f9f) list_single_clock2_pane_t1

0xe5f0,	// (0x00051fad) list_single_clock2_pane_t2

0x0001,

0x0547,	// (0x00043f04) list_single_clock2_pane_t

0xa0e5,	// (0x0004daa2) bg_button_pane_cp10

0xe60a,	// (0x00051fc7) cell_clock2_toolbar_pane_g1

0x31a7,	// (0x00046b64) aid_main_viewer_pane_g1_ParamLimits

0x31a7,	// (0x00046b64) aid_main_viewer_pane_g1

0x31b5,	// (0x00046b72) aid_main_viewer_pane_g2_ParamLimits

0x31b5,	// (0x00046b72) aid_main_viewer_pane_g2

0x31c3,	// (0x00046b80) aid_main_viewer_pane_g3_ParamLimits

0x31c3,	// (0x00046b80) aid_main_viewer_pane_g3

0x31d2,	// (0x00046b8f) aid_main_viewer_pane_g4_ParamLimits

0x31d2,	// (0x00046b8f) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x00052d78) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x00052d78) aid_main_viewer_pane_g

0x3a76,	// (0x00047433) main_calc_pane_ParamLimits

0x3a8a,	// (0x00047447) main_dialer2_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_cam6_pane

0xa0e5,	// (0x0004daa2) main_vid6_pane

0x4968,	// (0x00048325) listscroll_gen_pane_cp06_ParamLimits

0x4968,	// (0x00048325) listscroll_gen_pane_cp06

0x4a87,	// (0x00048444) main_clock2_pane_t5_ParamLimits

0x4a87,	// (0x00048444) main_clock2_pane_t5

0x4ae5,	// (0x000484a2) aid_call2_pane_cp10_ParamLimits

0x4af7,	// (0x000484b4) aid_call_pane_cp10_ParamLimits

0xb429,	// (0x0004ede6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb429,	// (0x0004ede6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4b09,	// (0x000484c6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4b09,	// (0x000484c6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb429,	// (0x0004ede6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6aa,	// (0x00053067) popup_clock_analogue_window_cp10_g_ParamLimits

0x4b1f,	// (0x000484dc) popup_clock_analogue_window_cp10_t1_ParamLimits

0xde27,	// (0x000517e4) cell_dialer2_keypad_pane_g2_ParamLimits

0xde27,	// (0x000517e4) cell_dialer2_keypad_pane_g2

0x0001,

0xf78a,	// (0x00053147) cell_dialer2_keypad_pane_g_ParamLimits

0xf78a,	// (0x00053147) cell_dialer2_keypad_pane_g

0xa8a3,	// (0x0004e260) cell_dialer2_keypad_pane_t1

0x5c57,	// (0x00049614) main_cset_text2_pane_ParamLimits

0x5c57,	// (0x00049614) main_cset_text2_pane

0xe347,	// (0x00051d04) area_vitu2_query_pane_g1_ParamLimits

0x64af,	// (0x00049e6c) area_vitu2_query_pane_g2_ParamLimits

0xf8f6,	// (0x000532b3) area_vitu2_query_pane_g_ParamLimits

0xe3cb,	// (0x00051d88) area_vitu2_query_pane_t7_ParamLimits

0xe3cb,	// (0x00051d88) area_vitu2_query_pane_t7

0x650e,	// (0x00049ecb) bg_button_pane_cp018_ParamLimits

0x651a,	// (0x00049ed7) bg_button_pane_cp021_ParamLimits

0x6526,	// (0x00049ee3) bg_button_pane_cp022_ParamLimits

0x6535,	// (0x00049ef2) bg_vkb2_func_pane_cp08_ParamLimits

0x650e,	// (0x00049ecb) bg_vkb2_func_pane_cp06_ParamLimits

0x651a,	// (0x00049ed7) bg_vkb2_func_pane_cp07_ParamLimits

0x6545,	// (0x00049f02) input_focus_pane_cp09_ParamLimits

0x6a45,	// (0x0004a402) cam6_autofocus_pane_ParamLimits

0x6a45,	// (0x0004a402) cam6_autofocus_pane

0x6a51,	// (0x0004a40e) cam6_image_uncrop_pane_ParamLimits

0x6a51,	// (0x0004a40e) cam6_image_uncrop_pane

0x6a61,	// (0x0004a41e) cam6_indi_pane_ParamLimits

0x6a61,	// (0x0004a41e) cam6_indi_pane

0x6a77,	// (0x0004a434) cam6_mode_pane_ParamLimits

0x6a77,	// (0x0004a434) cam6_mode_pane

0x6a89,	// (0x0004a446) cam6_timer_pane_ParamLimits

0x6a89,	// (0x0004a446) cam6_timer_pane

0x6a95,	// (0x0004a452) cam6_zoom_pane_ParamLimits

0x6a95,	// (0x0004a452) cam6_zoom_pane

0x6aa2,	// (0x0004a45f) cam6_mode_pane_g1_ParamLimits

0x6aa2,	// (0x0004a45f) cam6_mode_pane_g1

0x6ab2,	// (0x0004a46f) cam6_mode_pane_g2_ParamLimits

0x6ab2,	// (0x0004a46f) cam6_mode_pane_g2

0x6ac2,	// (0x0004a47f) cam6_mode_pane_g3_ParamLimits

0x6ac2,	// (0x0004a47f) cam6_mode_pane_g3

0x6ad2,	// (0x0004a48f) cam6_mode_pane_g4_ParamLimits

0x6ad2,	// (0x0004a48f) cam6_mode_pane_g4

0x0003,

0xf9ab,	// (0x00053368) cam6_mode_pane_g_ParamLimits

0xf9ab,	// (0x00053368) cam6_mode_pane_g

0xdc3a,	// (0x000515f7) bg_tb_trans_pane_cp08_ParamLimits

0xdc3a,	// (0x000515f7) bg_tb_trans_pane_cp08

0xe612,	// (0x00051fcf) cam6_battery_pane_ParamLimits

0xe612,	// (0x00051fcf) cam6_battery_pane

0xe628,	// (0x00051fe5) cam6_indi_pane_g1_ParamLimits

0xe628,	// (0x00051fe5) cam6_indi_pane_g1

0xe63a,	// (0x00051ff7) cam6_indi_pane_g2_ParamLimits

0xe63a,	// (0x00051ff7) cam6_indi_pane_g2

0xe64c,	// (0x00052009) cam6_indi_pane_g3_ParamLimits

0xe64c,	// (0x00052009) cam6_indi_pane_g3

0x0002,

0xf9b4,	// (0x00053371) cam6_indi_pane_g_ParamLimits

0xf9b4,	// (0x00053371) cam6_indi_pane_g

0xe65e,	// (0x0005201b) cam6_indi_pane_t1_ParamLimits

0xe65e,	// (0x0005201b) cam6_indi_pane_t1

0x5581,	// (0x00048f3e) cam6_autofocus_pane_g1

0x5589,	// (0x00048f46) cam6_autofocus_pane_g2

0x5591,	// (0x00048f4e) cam6_autofocus_pane_g3

0x5599,	// (0x00048f56) cam6_autofocus_pane_g4

0x0003,

0xf9bb,	// (0x00053378) cam6_autofocus_pane_g

0xe684,	// (0x00052041) cam6_timer_pane_g1

0xe68c,	// (0x00052049) cam6_timer_pane_t1

0xe69a,	// (0x00052057) cam6_zoom_cont_pane

0xe6a2,	// (0x0005205f) cam6_zoom_pane_g1

0xe6ab,	// (0x00052068) cam6_zoom_pane_g2

0x6ae2,	// (0x0004a49f) cam6_zoom_pane_g3

0x0002,

0xf9c4,	// (0x00053381) cam6_zoom_pane_g

0xa899,	// (0x0004e256) cam6_battery_pane_g1

0xa899,	// (0x0004e256) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00052a49) cam6_battery_pane_g

0xe6a2,	// (0x0005205f) cam6_zoom_cont_pane_g1

0xe6ab,	// (0x00052068) cam6_zoom_cont_pane_g2

0xe6b4,	// (0x00052071) cam6_zoom_cont_pane_g3

0x0002,

0xf9cb,	// (0x00053388) cam6_zoom_cont_pane_g

0x6afd,	// (0x0004a4ba) cam6_mode_pane_cp_ParamLimits

0x6afd,	// (0x0004a4ba) cam6_mode_pane_cp

0x6b0f,	// (0x0004a4cc) cam6_zoom_pane_cp_ParamLimits

0x6b0f,	// (0x0004a4cc) cam6_zoom_pane_cp

0x6b1b,	// (0x0004a4d8) vid6_image_uncrop_cif_pane_ParamLimits

0x6b1b,	// (0x0004a4d8) vid6_image_uncrop_cif_pane

0x6b2b,	// (0x0004a4e8) vid6_image_uncrop_nhd_pane_ParamLimits

0x6b2b,	// (0x0004a4e8) vid6_image_uncrop_nhd_pane

0x6b3a,	// (0x0004a4f7) vid6_image_uncrop_vga_pane_ParamLimits

0x6b3a,	// (0x0004a4f7) vid6_image_uncrop_vga_pane

0x6b49,	// (0x0004a506) vid6_image_uncrop_wvga_pane_ParamLimits

0x6b49,	// (0x0004a506) vid6_image_uncrop_wvga_pane

0x6b58,	// (0x0004a515) vid6_indi_pane_ParamLimits

0x6b58,	// (0x0004a515) vid6_indi_pane

0xdc3a,	// (0x000515f7) bg_tb_trans_pane_cp09_ParamLimits

0xdc3a,	// (0x000515f7) bg_tb_trans_pane_cp09

0xe6cc,	// (0x00052089) cam6_battery_pane_cp_ParamLimits

0xe6cc,	// (0x00052089) cam6_battery_pane_cp

0xe6d8,	// (0x00052095) vid6_indi_pane_g1_ParamLimits

0xe6d8,	// (0x00052095) vid6_indi_pane_g1

0xe6ea,	// (0x000520a7) vid6_indi_pane_g2_ParamLimits

0xe6ea,	// (0x000520a7) vid6_indi_pane_g2

0xe6fc,	// (0x000520b9) vid6_indi_pane_g3_ParamLimits

0xe6fc,	// (0x000520b9) vid6_indi_pane_g3

0xe711,	// (0x000520ce) vid6_indi_pane_g4_ParamLimits

0xe711,	// (0x000520ce) vid6_indi_pane_g4

0xe726,	// (0x000520e3) vid6_indi_pane_g5_ParamLimits

0xe726,	// (0x000520e3) vid6_indi_pane_g5

0x0004,

0xf9d2,	// (0x0005338f) vid6_indi_pane_g_ParamLimits

0xf9d2,	// (0x0005338f) vid6_indi_pane_g

0xe740,	// (0x000520fd) vid6_indi_pane_t1_ParamLimits

0xe740,	// (0x000520fd) vid6_indi_pane_t1

0xe756,	// (0x00052113) vid6_indi_pane_t2_ParamLimits

0xe756,	// (0x00052113) vid6_indi_pane_t2

0xe77e,	// (0x0005213b) vid6_indi_pane_t3_ParamLimits

0xe77e,	// (0x0005213b) vid6_indi_pane_t3

0xe7a6,	// (0x00052163) vid6_indi_pane_t4_ParamLimits

0xe7a6,	// (0x00052163) vid6_indi_pane_t4

0x0003,

0xf9dd,	// (0x0005339a) vid6_indi_pane_t_ParamLimits

0xf9dd,	// (0x0005339a) vid6_indi_pane_t

0xe7ca,	// (0x00052187) wait_bar_pane_cp08

0x6b70,	// (0x0004a52d) main_cset_text2_pane_t1_ParamLimits

0x6b70,	// (0x0004a52d) main_cset_text2_pane_t1

0x6aeb,	// (0x0004a4a8) listscroll_gen_pane_cp06_t1_ParamLimits

0x6aeb,	// (0x0004a4a8) listscroll_gen_pane_cp06_t1

0xa0e5,	// (0x0004daa2) main_cam6_set_pane

0xa853,	// (0x0004e210) bg_tb_trans_pane_cp06_ParamLimits

0xcdbe,	// (0x0005077b) cam4_indicators_pane_g1_ParamLimits

0xcdcf,	// (0x0005078c) cam4_indicators_pane_g2_ParamLimits

0xf7c7,	// (0x00053184) cam4_indicators_pane_g_ParamLimits

0xcded,	// (0x000507aa) cam4_indicators_pane_t1_ParamLimits

0xa15c,	// (0x0004db19) bg_tb_trans_pane_cp07_ParamLimits

0xce19,	// (0x000507d6) vid4_indicators_pane_g1_ParamLimits

0xce2d,	// (0x000507ea) vid4_indicators_pane_g2_ParamLimits

0xce41,	// (0x000507fe) vid4_indicators_pane_g3_ParamLimits

0xce52,	// (0x0005080f) vid4_indicators_pane_g4_ParamLimits

0xf7d9,	// (0x00053196) vid4_indicators_pane_g_ParamLimits

0xce70,	// (0x0005082d) vid4_indicators_pane_t1_ParamLimits

0xd6dd,	// (0x0005109a) vid4_progress_pane_g1_ParamLimits

0xd6ed,	// (0x000510aa) vid4_progress_pane_g2_ParamLimits

0x6681,	// (0x0004a03e) vid4_progress_pane_g3_ParamLimits

0xd6fd,	// (0x000510ba) vid4_progress_pane_g4_ParamLimits

0xf92e,	// (0x000532eb) vid4_progress_pane_g_ParamLimits

0x6693,	// (0x0004a050) vid4_progress_pane_t1_ParamLimits

0xd715,	// (0x000510d2) vid4_progress_pane_t2_ParamLimits

0xd72a,	// (0x000510e7) vid4_progress_pane_t3_ParamLimits

0xf939,	// (0x000532f6) vid4_progress_pane_t_ParamLimits

0x66ab,	// (0x0004a068) wait_bar_pane_cp07_ParamLimits

0x6b8d,	// (0x0004a54a) main_cam6_set_pane_g2_ParamLimits

0x6b8d,	// (0x0004a54a) main_cam6_set_pane_g2

0x6bb1,	// (0x0004a56e) main_cset6_listscroll_pane_ParamLimits

0x6bb1,	// (0x0004a56e) main_cset6_listscroll_pane

0x6bd1,	// (0x0004a58e) main_cset6_slider_pane_ParamLimits

0x6bd1,	// (0x0004a58e) main_cset6_slider_pane

0x6be7,	// (0x0004a5a4) main_cset6_text2_pane_ParamLimits

0x6be7,	// (0x0004a5a4) main_cset6_text2_pane

0xe7d9,	// (0x00052196) main_cset6_text_pane

0xe7e1,	// (0x0005219e) main_cset_list_pane_copy1_ParamLimits

0xe7e1,	// (0x0005219e) main_cset_list_pane_copy1

0xe7f1,	// (0x000521ae) scroll_pane_cp028_copy1

0x6bf5,	// (0x0004a5b2) cset_list_set_pane_copy1

0x6c06,	// (0x0004a5c3) aid_position_infowindow_above_copy1

0x6c0e,	// (0x0004a5cb) aid_position_infowindow_below_copy1

0x0b06,	// (0x000444c3) cset_list_set_pane_g1_copy1

0x0b0e,	// (0x000444cb) cset_list_set_pane_g3_copy1_ParamLimits

0x0b0e,	// (0x000444cb) cset_list_set_pane_g3_copy1

0x0b1d,	// (0x000444da) cset_list_set_pane_t1_copy1_ParamLimits

0x0b1d,	// (0x000444da) cset_list_set_pane_t1_copy1

0xa15c,	// (0x0004db19) list_highlight_pane_cp021_copy1_ParamLimits

0xa15c,	// (0x0004db19) list_highlight_pane_cp021_copy1

0xe7fa,	// (0x000521b7) cset6_slider_pane_ParamLimits

0xe7fa,	// (0x000521b7) cset6_slider_pane

0xe826,	// (0x000521e3) main_cset6_slider_pane_g1_ParamLimits

0xe826,	// (0x000521e3) main_cset6_slider_pane_g1

0x6c16,	// (0x0004a5d3) main_cset6_slider_pane_g2_ParamLimits

0x6c16,	// (0x0004a5d3) main_cset6_slider_pane_g2

0xe84e,	// (0x0005220b) main_cset6_slider_pane_g3_ParamLimits

0xe84e,	// (0x0005220b) main_cset6_slider_pane_g3

0x6c3e,	// (0x0004a5fb) main_cset6_slider_pane_g4_ParamLimits

0x6c3e,	// (0x0004a5fb) main_cset6_slider_pane_g4

0x6c4a,	// (0x0004a607) main_cset6_slider_pane_g5_ParamLimits

0x6c4a,	// (0x0004a607) main_cset6_slider_pane_g5

0xe012,	// (0x000519cf) main_cset6_slider_pane_g7_ParamLimits

0xe012,	// (0x000519cf) main_cset6_slider_pane_g7

0xe01e,	// (0x000519db) main_cset6_slider_pane_g8_ParamLimits

0xe01e,	// (0x000519db) main_cset6_slider_pane_g8

0x5cfd,	// (0x000496ba) main_cset6_slider_pane_g9_ParamLimits

0x5cfd,	// (0x000496ba) main_cset6_slider_pane_g9

0x5d09,	// (0x000496c6) main_cset6_slider_pane_g10_ParamLimits

0x5d09,	// (0x000496c6) main_cset6_slider_pane_g10

0x5d15,	// (0x000496d2) main_cset6_slider_pane_g11_ParamLimits

0x5d15,	// (0x000496d2) main_cset6_slider_pane_g11

0x5d21,	// (0x000496de) main_cset6_slider_pane_g12_ParamLimits

0x5d21,	// (0x000496de) main_cset6_slider_pane_g12

0x5d2d,	// (0x000496ea) main_cset6_slider_pane_g13_ParamLimits

0x5d2d,	// (0x000496ea) main_cset6_slider_pane_g13

0x5d39,	// (0x000496f6) main_cset6_slider_pane_g14_ParamLimits

0x5d39,	// (0x000496f6) main_cset6_slider_pane_g14

0x6c56,	// (0x0004a613) main_cset6_slider_pane_g15_ParamLimits

0x6c56,	// (0x0004a613) main_cset6_slider_pane_g15

0x5d5d,	// (0x0004971a) main_cset6_slider_pane_g16_ParamLimits

0x5d5d,	// (0x0004971a) main_cset6_slider_pane_g16

0x5d69,	// (0x00049726) main_cset6_slider_pane_g17_ParamLimits

0x5d69,	// (0x00049726) main_cset6_slider_pane_g17

0x0011,

0xf9e6,	// (0x000533a3) main_cset6_slider_pane_g_ParamLimits

0xf9e6,	// (0x000533a3) main_cset6_slider_pane_g

0xe85a,	// (0x00052217) main_cset6_slider_pane_t1_ParamLimits

0xe85a,	// (0x00052217) main_cset6_slider_pane_t1

0x6c86,	// (0x0004a643) main_cset6_slider_pane_t2_ParamLimits

0x6c86,	// (0x0004a643) main_cset6_slider_pane_t2

0x6cb1,	// (0x0004a66e) main_cset6_slider_pane_t3_ParamLimits

0x6cb1,	// (0x0004a66e) main_cset6_slider_pane_t3

0x6cdc,	// (0x0004a699) main_cset6_slider_pane_t4_ParamLimits

0x6cdc,	// (0x0004a699) main_cset6_slider_pane_t4

0x6d07,	// (0x0004a6c4) main_cset6_slider_pane_t5_ParamLimits

0x6d07,	// (0x0004a6c4) main_cset6_slider_pane_t5

0xe89b,	// (0x00052258) main_cset6_slider_pane_t7_ParamLimits

0xe89b,	// (0x00052258) main_cset6_slider_pane_t7

0x6d32,	// (0x0004a6ef) main_cset6_slider_pane_t8_ParamLimits

0x6d32,	// (0x0004a6ef) main_cset6_slider_pane_t8

0x6d56,	// (0x0004a713) main_cset6_slider_pane_t9_ParamLimits

0x6d56,	// (0x0004a713) main_cset6_slider_pane_t9

0x6d7a,	// (0x0004a737) main_cset6_slider_pane_t10_ParamLimits

0x6d7a,	// (0x0004a737) main_cset6_slider_pane_t10

0x6d9e,	// (0x0004a75b) main_cset6_slider_pane_t11_ParamLimits

0x6d9e,	// (0x0004a75b) main_cset6_slider_pane_t11

0xe8d1,	// (0x0005228e) main_cset6_slider_pane_t14_ParamLimits

0xe8d1,	// (0x0005228e) main_cset6_slider_pane_t14

0xe90a,	// (0x000522c7) main_cset6_slider_pane_t15_ParamLimits

0xe90a,	// (0x000522c7) main_cset6_slider_pane_t15

0x000b,

0xfa0b,	// (0x000533c8) main_cset6_slider_pane_t_ParamLimits

0xfa0b,	// (0x000533c8) main_cset6_slider_pane_t

0xe0e0,	// (0x00051a9d) cset_slider_pane_g1_copy1

0xe0e9,	// (0x00051aa6) cset_slider_pane_g2_copy1

0xe0f2,	// (0x00051aaf) cset_slider_pane_g3_copy1

0xa0e5,	// (0x0004daa2) bg_popup_sub_pane_cp011_copy1

0xe943,	// (0x00052300) main_cset_text_pane_g1_copy1

0xe17b,	// (0x00051b38) main_cset_text_pane_t1_copy1

0xe189,	// (0x00051b46) main_cset_text_pane_t2_copy1

0xe197,	// (0x00051b54) main_cset_text_pane_t3_copy1

0xe1a5,	// (0x00051b62) main_cset_text_pane_t4_copy1

0xe1b3,	// (0x00051b70) main_cset_text_pane_t5_copy1

0xe94b,	// (0x00052308) main_cset_text_pane_t6_copy1

0xe959,	// (0x00052316) main_cset_text_pane_t7_copy1

0x6b70,	// (0x0004a52d) main_cset_text2_pane_t1_copy1

0xa15c,	// (0x0004db19) main_ncimui_pane

0x3cd4,	// (0x00047691) popup_query_ncimui_window_ParamLimits

0x3cd4,	// (0x00047691) popup_query_ncimui_window

0xca51,	// (0x0005040e) field_cale_ev2_pane_g4_ParamLimits

0xca51,	// (0x0005040e) field_cale_ev2_pane_g4

0x4ee5,	// (0x000488a2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4ee5,	// (0x000488a2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf761,	// (0x0005311e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf761,	// (0x0005311e) cell_video_dialer_keypad_pane_g

0x4efd,	// (0x000488ba) cell_video_dialer_keypad_pane_t1

0xa0e5,	// (0x0004daa2) bg_popup_window_pane_cp012

0xb285,	// (0x0004ec42) heading_pane_cp06

0xe985,	// (0x00052342) ncim_query_content_pane

0xa0e5,	// (0x0004daa2) bg_popup_heading_pane_cp01

0xe98d,	// (0x0005234a) ncim_heading_pane_t1

0xe99b,	// (0x00052358) ncim_indicator_popup_pane

0xe9ad,	// (0x0005236a) ncim_query_button_pane

0xe9c1,	// (0x0005237e) ncim_query_content_pane_t1

0xe9d3,	// (0x00052390) ncim_query_content_pane_t2

0x0005,

0xfa4f,	// (0x0005340c) ncim_query_content_pane_t

0xea0d,	// (0x000523ca) ncim_query_list_pane

0xea1f,	// (0x000523dc) ncim_query_popup_pane

0xe99b,	// (0x00052358) ncim_indicator_popup_pane_ParamLimits

0x6eeb,	// (0x0004a8a8) ncim_query_content_pane_g1_ParamLimits

0x6eeb,	// (0x0004a8a8) ncim_query_content_pane_g1

0xe9c1,	// (0x0005237e) ncim_query_content_pane_t1_ParamLimits

0xe9d3,	// (0x00052390) ncim_query_content_pane_t2_ParamLimits

0x6ef7,	// (0x0004a8b4) ncim_query_content_pane_t3_ParamLimits

0x6ef7,	// (0x0004a8b4) ncim_query_content_pane_t3

0x6f1f,	// (0x0004a8dc) ncim_query_content_pane_t4_ParamLimits

0x6f1f,	// (0x0004a8dc) ncim_query_content_pane_t4

0x6f47,	// (0x0004a904) ncim_query_content_pane_t5_ParamLimits

0x6f47,	// (0x0004a904) ncim_query_content_pane_t5

0xe9e5,	// (0x000523a2) ncim_query_content_pane_t6_ParamLimits

0xe9e5,	// (0x000523a2) ncim_query_content_pane_t6

0xfa4f,	// (0x0005340c) ncim_query_content_pane_t_ParamLimits

0xea0d,	// (0x000523ca) ncim_query_list_pane_ParamLimits

0xea1f,	// (0x000523dc) ncim_query_popup_pane_ParamLimits

0xea33,	// (0x000523f0) wait_bar_pane_cp04

0xa0e5,	// (0x0004daa2) input_focus_pane_cp011

0xea3b,	// (0x000523f8) ncim_query_popup_pane_t1

0xea49,	// (0x00052406) ncim_list_query_list_pane_ParamLimits

0xea49,	// (0x00052406) ncim_list_query_list_pane

0xa0e5,	// (0x0004daa2) bg_button_pane_cp027

0xea56,	// (0x00052413) ncim_query_button_pane_g1

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp012

0xea60,	// (0x0005241d) ncim_list_query_list_pane_g1

0xea68,	// (0x00052425) ncim_list_query_list_pane_t1

0xcdde,	// (0x0005079b) cam4_indicators_pane_g3_ParamLimits

0xcdde,	// (0x0005079b) cam4_indicators_pane_g3

0xce5e,	// (0x0005081b) vid4_indicators_pane_g5_ParamLimits

0xce5e,	// (0x0005081b) vid4_indicators_pane_g5

0xd709,	// (0x000510c6) vid4_progress_pane_g5_ParamLimits

0xd709,	// (0x000510c6) vid4_progress_pane_g5

0x6dd6,	// (0x0004a793) main_ncimui_pane_g1

0x6e3f,	// (0x0004a7fc) ncimui_group_query_pane_ParamLimits

0x6e3f,	// (0x0004a7fc) ncimui_group_query_pane

0x6e87,	// (0x0004a844) ncimui_list_pane_ParamLimits

0x6e87,	// (0x0004a844) ncimui_list_pane

0x6eae,	// (0x0004a86b) ncimui_text_pane_ParamLimits

0x6eae,	// (0x0004a86b) ncimui_text_pane

0x6f6f,	// (0x0004a92c) ncimui_text_pane_t1_ParamLimits

0x6f6f,	// (0x0004a92c) ncimui_text_pane_t1

0xea76,	// (0x00052433) ncimui_list_single_graphic_pane_ParamLimits

0xea76,	// (0x00052433) ncimui_list_single_graphic_pane

0x6f8d,	// (0x0004a94a) ncimui_query_pane_ParamLimits

0x6f8d,	// (0x0004a94a) ncimui_query_pane

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp013

0xea86,	// (0x00052443) ncim_list_query_list_pane_t1_copy1

0xea60,	// (0x0005241d) ncim_list_single_graphic_pane_g1

0x6fa0,	// (0x0004a95d) ncim_query_button_pane_cp01

0x6fac,	// (0x0004a969) ncim_query_entry_pane_ParamLimits

0x6fac,	// (0x0004a969) ncim_query_entry_pane

0x6fbf,	// (0x0004a97c) ncimui_query_pane_g1

0x6fcb,	// (0x0004a988) ncimui_query_pane_t1_ParamLimits

0x6fcb,	// (0x0004a988) ncimui_query_pane_t1

0xa15c,	// (0x0004db19) input_focus_pane_cp012

0xea94,	// (0x00052451) ncim_query_entry_pane_t1

0xa911,	// (0x0004e2ce) main_im_pane_ParamLimits

0xa15c,	// (0x0004db19) main_mobtv_pane_ParamLimits

0xa15c,	// (0x0004db19) main_mobtv_pane

0x6c6e,	// (0x0004a62b) main_cset6_slider_pane_g18_ParamLimits

0x6c6e,	// (0x0004a62b) main_cset6_slider_pane_g18

0x6c7a,	// (0x0004a637) main_cset6_slider_pane_g19_ParamLimits

0x6c7a,	// (0x0004a637) main_cset6_slider_pane_g19

0xa86f,	// (0x0004e22c) bg_main_mobtv_pane_ParamLimits

0xa86f,	// (0x0004e22c) bg_main_mobtv_pane

0x6fe4,	// (0x0004a9a1) main_mobtv_info_pane

0x6fed,	// (0x0004a9aa) main_mobtv_loading_pane_ParamLimits

0x6fed,	// (0x0004a9aa) main_mobtv_loading_pane

0xeaa6,	// (0x00052463) main_mobtv_pg_channel_list_pane

0xeab0,	// (0x0005246d) main_mobtv_pg_hdr_pane

0x6ffa,	// (0x0004a9b7) main_mobtv_programe_curr_pane_ParamLimits

0x6ffa,	// (0x0004a9b7) main_mobtv_programe_curr_pane

0x7007,	// (0x0004a9c4) main_mobtv_programe_next_pane_ParamLimits

0x7007,	// (0x0004a9c4) main_mobtv_programe_next_pane

0xeab9,	// (0x00052476) popup_mobtv_noti_window

0xa899,	// (0x0004e256) main_tv_pg_hdr_pane_g1

0xeac1,	// (0x0005247e) main_tv_pg_hdr_pane_g2

0xeac9,	// (0x00052486) main_tv_pg_hdr_pane_g3

0xead1,	// (0x0005248e) main_tv_pg_hdr_pane_g4

0xead9,	// (0x00052496) main_tv_pg_hdr_pane_g5

0xeae3,	// (0x000524a0) main_tv_pg_hdr_pane_g6

0xeaed,	// (0x000524aa) main_tv_pg_hdr_pane_g7

0xeaf7,	// (0x000524b4) main_tv_pg_hdr_pane_g8

0xeb01,	// (0x000524be) main_tv_pg_hdr_pane_g9

0xeb0b,	// (0x000524c8) main_tv_pg_hdr_pane_g10

0xeb15,	// (0x000524d2) main_tv_pg_hdr_pane_g11

0x000a,

0xfa5c,	// (0x00053419) main_tv_pg_hdr_pane_g

0xeb1f,	// (0x000524dc) main_tv_pg_hdr_pane_t1

0xeb2d,	// (0x000524ea) main_tv_pg_hdr_pane_t2

0xeb3b,	// (0x000524f8) main_tv_pg_hdr_pane_t3

0xeb4b,	// (0x00052508) main_tv_pg_hdr_pane_t4

0xeb5b,	// (0x00052518) main_tv_pg_hdr_pane_t5

0x0004,

0x0614,	// (0x00043fd1) main_tv_pg_hdr_pane_t

0xeb6b,	// (0x00052528) single_mobtv_pg_channel_pane_ParamLimits

0xeb6b,	// (0x00052528) single_mobtv_pg_channel_pane

0xeb7d,	// (0x0005253a) single_mobtv_pg_channel_table_pane

0xeb86,	// (0x00052543) single_mobtv_pg_channel_thumb_pane

0xeb8f,	// (0x0005254c) single_tv_pg_channel_pane_g1

0xeb98,	// (0x00052555) single_tv_pg_channel_pane_g2

0x0001,

0x061f,	// (0x00043fdc) single_tv_pg_channel_pane_g

0xa853,	// (0x0004e210) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa853,	// (0x0004e210) bg_single_mobtv_pg_channel_thumb_pane

0xeba1,	// (0x0005255e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xeba1,	// (0x0005255e) single_mobtv_pg_channel_thumb_pane_g1

0xebaf,	// (0x0005256c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xebaf,	// (0x0005256c) single_mobtv_pg_channel_thumb_pane_g2

0xebbb,	// (0x00052578) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xebbb,	// (0x00052578) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0624,	// (0x00043fe1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0624,	// (0x00043fe1) single_mobtv_pg_channel_thumb_pane_g

0xebc7,	// (0x00052584) single_mobtv_pg_channel_thumb_pane_t1

0xebd5,	// (0x00052592) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x062b,	// (0x00043fe8) single_mobtv_pg_channel_thumb_pane_t

0xa899,	// (0x0004e256) bg_single_mobtv_pg_channel_table_pane_g1

0xa899,	// (0x0004e256) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00052a49) bg_single_mobtv_pg_channel_table_pane_g

0xebe3,	// (0x000525a0) single_mobtv_pg_channel_table_pane_t1

0xebf1,	// (0x000525ae) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0630,	// (0x00043fed) single_mobtv_pg_channel_table_pane_t

0x701c,	// (0x0004a9d9) main_mobtv_info_pane_g1_ParamLimits

0x701c,	// (0x0004a9d9) main_mobtv_info_pane_g1

0x703a,	// (0x0004a9f7) main_mobtv_info_pane_t1_ParamLimits

0x703a,	// (0x0004a9f7) main_mobtv_info_pane_t1

0x70b2,	// (0x0004aa6f) main_mobtv_info_pane_t2_ParamLimits

0x70b2,	// (0x0004aa6f) main_mobtv_info_pane_t2

0x0002,

0xfa78,	// (0x00053435) main_mobtv_info_pane_t_ParamLimits

0xfa78,	// (0x00053435) main_mobtv_info_pane_t

0x7141,	// (0x0004aafe) wait_bar_pane_cp05

0x7153,	// (0x0004ab10) main_mobtv_loading_pane_g1_ParamLimits

0x7153,	// (0x0004ab10) main_mobtv_loading_pane_g1

0x7166,	// (0x0004ab23) main_mobtv_loading_pane_g2_ParamLimits

0x7166,	// (0x0004ab23) main_mobtv_loading_pane_g2

0x7172,	// (0x0004ab2f) main_mobtv_loading_pane_g3_ParamLimits

0x7172,	// (0x0004ab2f) main_mobtv_loading_pane_g3

0x0002,

0xfa7f,	// (0x0005343c) main_mobtv_loading_pane_g_ParamLimits

0xfa7f,	// (0x0005343c) main_mobtv_loading_pane_g

0xebff,	// (0x000525bc) main_mobtv_loading_pane_t1_ParamLimits

0xebff,	// (0x000525bc) main_mobtv_loading_pane_t1

0xec17,	// (0x000525d4) main_mobtv_loading_pane_t2_ParamLimits

0xec17,	// (0x000525d4) main_mobtv_loading_pane_t2

0x0001,

0x0648,	// (0x00044005) main_mobtv_loading_pane_t_ParamLimits

0x0648,	// (0x00044005) main_mobtv_loading_pane_t

0x7185,	// (0x0004ab42) wait_bar_pane_cp06_ParamLimits

0x7185,	// (0x0004ab42) wait_bar_pane_cp06

0xec3b,	// (0x000525f8) main_mobtv_programe_curr_pane_t1

0xec49,	// (0x00052606) main_mobtv_programe_curr_pane_t2

0x0001,

0x064d,	// (0x0004400a) main_mobtv_programe_curr_pane_t

0xec57,	// (0x00052614) main_mobtv_programe_next_pane_t1

0xec65,	// (0x00052622) main_mobtv_programe_next_pane_t2

0xec73,	// (0x00052630) main_mobtv_programe_next_pane_t3

0x0002,

0x0652,	// (0x0004400f) main_mobtv_programe_next_pane_t

0xa0e5,	// (0x0004daa2) bg_popup_mobtv_noti_window_pane

0xec81,	// (0x0005263e) popup_mobtv_noti_window_g1

0xec89,	// (0x00052646) popup_mobtv_noti_window_t1

0xec97,	// (0x00052654) popup_mobtv_noti_window_t2

0x0001,

0x0659,	// (0x00044016) popup_mobtv_noti_window_t

0xa899,	// (0x0004e256) bg_popup_mobtv_noti_window_pane_g1

0xa0e5,	// (0x0004daa2) sc_clock_pane

0xa0e5,	// (0x0004daa2) main_fs_bigclock_pane

0x68ba,	// (0x0004a277) blid2_tripm_pane_t4_ParamLimits

0x68ba,	// (0x0004a277) blid2_tripm_pane_t4

0xa853,	// (0x0004e210) sc_clock_pane_g1_ParamLimits

0xa853,	// (0x0004e210) sc_clock_pane_g1

0xa8a3,	// (0x0004e260) sc_clock_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) sc_clock_pane_t1

0xa8a3,	// (0x0004e260) sc_clock_pane_t2_ParamLimits

0xa8a3,	// (0x0004e260) sc_clock_pane_t2

0xa8a3,	// (0x0004e260) sc_clock_pane_t3_ParamLimits

0xa8a3,	// (0x0004e260) sc_clock_pane_t3

0x0004,

0xfa86,	// (0x00053443) sc_clock_pane_t_ParamLimits

0xfa86,	// (0x00053443) sc_clock_pane_t

0x7dfa,	// (0x0004b7b7) main_fs_bigclock_indicator_pane_ParamLimits

0x7dfa,	// (0x0004b7b7) main_fs_bigclock_indicator_pane

0x71e3,	// (0x0004aba0) main_fs_bigclock_pane_g1_ParamLimits

0x71e3,	// (0x0004aba0) main_fs_bigclock_pane_g1

0x7e06,	// (0x0004b7c3) main_fs_bigclock_pane_t1_ParamLimits

0x7e06,	// (0x0004b7c3) main_fs_bigclock_pane_t1

0x7e18,	// (0x0004b7d5) main_fs_bigclock_pane_t2_ParamLimits

0x7e18,	// (0x0004b7d5) main_fs_bigclock_pane_t2

0x7e2c,	// (0x0004b7e9) main_fs_bigclock_pane_t3_ParamLimits

0x7e2c,	// (0x0004b7e9) main_fs_bigclock_pane_t3

0x0002,

0xfbe4,	// (0x000535a1) main_fs_bigclock_pane_t_ParamLimits

0xfbe4,	// (0x000535a1) main_fs_bigclock_pane_t

0x7e3e,	// (0x0004b7fb) main_fs_bigclock_indicator_pane_g1

0xe9b5,	// (0x00052372) ncim_query_content_pane_g2_ParamLimits

0xe9b5,	// (0x00052372) ncim_query_content_pane_g2

0x0001,

0xfa4a,	// (0x00053407) ncim_query_content_pane_g_ParamLimits

0xfa4a,	// (0x00053407) ncim_query_content_pane_g

0xa8a3,	// (0x0004e260) sc_clock_pane_t4_ParamLimits

0xa8a3,	// (0x0004e260) sc_clock_pane_t4

0xa15c,	// (0x0004db19) main_radioblah_pane

0xcd68,	// (0x00050725) cell_call4_button_pane_t1_copy1_ParamLimits

0xcd68,	// (0x00050725) cell_call4_button_pane_t1_copy1

0x6dee,	// (0x0004a7ab) main_ncimui_pane_t1_ParamLimits

0x6dee,	// (0x0004a7ab) main_ncimui_pane_t1

0x6e08,	// (0x0004a7c5) main_ncimui_pane_t2_ParamLimits

0x6e08,	// (0x0004a7c5) main_ncimui_pane_t2

0x0002,

0xfa43,	// (0x00053400) main_ncimui_pane_t_ParamLimits

0xfa43,	// (0x00053400) main_ncimui_pane_t

0xb6d7,	// (0x0004f094) main_radioblah_anim_pane_ParamLimits

0xb6d7,	// (0x0004f094) main_radioblah_anim_pane

0xb6d7,	// (0x0004f094) main_radioblah_info_pane_ParamLimits

0xb6d7,	// (0x0004f094) main_radioblah_info_pane

0xb6c3,	// (0x0004f080) main_radioblah_pane_t1_ParamLimits

0xb6c3,	// (0x0004f080) main_radioblah_pane_t1

0xb6c3,	// (0x0004f080) main_radioblah_pane_t2_ParamLimits

0xb6c3,	// (0x0004f080) main_radioblah_pane_t2

0x0003,

0xfa91,	// (0x0005344e) main_radioblah_pane_t_ParamLimits

0xfa91,	// (0x0005344e) main_radioblah_pane_t

0xa15c,	// (0x0004db19) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa15c,	// (0x0004db19) main_radioblah_rocker_ctrl_pane

0xd2ae,	// (0x00050c6b) main_radioblah_info_pane_t1_ParamLimits

0xd2ae,	// (0x00050c6b) main_radioblah_info_pane_t1

0xee0c,	// (0x000527c9) main_radioblah_info_pane_t2_ParamLimits

0xee0c,	// (0x000527c9) main_radioblah_info_pane_t2

0x0003,

0xfa9a,	// (0x00053457) main_radioblah_info_pane_t_ParamLimits

0xfa9a,	// (0x00053457) main_radioblah_info_pane_t

0xa899,	// (0x0004e256) main_radioblah_rocker_ctrl_pane_g1

0xa899,	// (0x0004e256) main_radioblah_rocker_ctrl_pane_g2

0xa899,	// (0x0004e256) main_radioblah_rocker_ctrl_pane_g3

0xa899,	// (0x0004e256) main_radioblah_rocker_ctrl_pane_g4

0xa899,	// (0x0004e256) main_radioblah_rocker_ctrl_pane_g5

0xa899,	// (0x0004e256) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfaa3,	// (0x00053460) main_radioblah_rocker_ctrl_pane_g

0x6b70,	// (0x0004a52d) main_cset_text2_pane_t1_copy1_ParamLimits

0xcdae,	// (0x0005076b) cam4_image_uncrop_qvga_pane

0xce07,	// (0x000507c4) vid4_image_uncrop_qcif_pane

0xd73f,	// (0x000510fc) cam6_image_uncrop_qvga_pane_ParamLimits

0xd73f,	// (0x000510fc) cam6_image_uncrop_qvga_pane

0xe6bc,	// (0x00052079) vid6_image_uncrop_qcif_pane_ParamLimits

0xe6bc,	// (0x00052079) vid6_image_uncrop_qcif_pane

0xa0e5,	// (0x0004daa2) bg_popup_preview_window_pane_cp03

0xe967,	// (0x00052324) list_cset_text2_pane

0xe96f,	// (0x0005232c) main_cset6_text2_pane_g1

0xe977,	// (0x00052334) main_cset6_text2_pane_t1

0x7230,	// (0x0004abed) list_cset_text2_pane_t1_ParamLimits

0x7230,	// (0x0004abed) list_cset_text2_pane_t1

0xa15c,	// (0x0004db19) main_radioblah_pane_ParamLimits

0x712d,	// (0x0004aaea) main_mobtv_info_pane_t3_ParamLimits

0x712d,	// (0x0004aaea) main_mobtv_info_pane_t3

0xb6b5,	// (0x0004f072) main_radioblah_pane_g1

0xeddc,	// (0x00052799) main_radioblah_info_pane_g1

0xa8b7,	// (0x0004e274) main_radioblah_info_pane_t3_ParamLimits

0xa8b7,	// (0x0004e274) main_radioblah_info_pane_t3

0x2b6c,	// (0x00046529) highlight_cell_cale_month_pane_ParamLimits

0x2b6c,	// (0x00046529) highlight_cell_cale_month_pane

0xa0e5,	// (0x0004daa2) main_phob_fisheye_pane

0xd99e,	// (0x0005135b) scroll_pane_cp0031_ParamLimits

0xd99e,	// (0x0005135b) scroll_pane_cp0031

0xe7ca,	// (0x00052187) wait_bar_pane_cp08_ParamLimits

0x6bf5,	// (0x0004a5b2) cset_list_set_pane_copy1_ParamLimits

0xee5b,	// (0x00052818) highlight_cell_cale_month_pane_g1

0x7249,	// (0x0004ac06) highlight_cell_cale_month_pane_t1

0xe437,	// (0x00051df4) list_gen_pane_cp01

0xdffd,	// (0x000519ba) scroll_pane_01

0x7257,	// (0x0004ac14) list_single_double_fisheye_pane

0x7260,	// (0x0004ac1d) list_double_fisheye_pane_g1_ParamLimits

0x7260,	// (0x0004ac1d) list_double_fisheye_pane_g1

0x726c,	// (0x0004ac29) list_double_fisheye_pane_g2_ParamLimits

0x726c,	// (0x0004ac29) list_double_fisheye_pane_g2

0x7280,	// (0x0004ac3d) list_double_fisheye_pane_g3_ParamLimits

0x7280,	// (0x0004ac3d) list_double_fisheye_pane_g3

0x0004,

0xfab0,	// (0x0005346d) list_double_fisheye_pane_g_ParamLimits

0xfab0,	// (0x0005346d) list_double_fisheye_pane_g

0x72a9,	// (0x0004ac66) list_double_fisheye_pane_t1_ParamLimits

0x72a9,	// (0x0004ac66) list_double_fisheye_pane_t1

0x72c4,	// (0x0004ac81) list_double_fisheye_pane_t2_ParamLimits

0x72c4,	// (0x0004ac81) list_double_fisheye_pane_t2

0x0001,

0xfabb,	// (0x00053478) list_double_fisheye_pane_t_ParamLimits

0xfabb,	// (0x00053478) list_double_fisheye_pane_t

0xa0e5,	// (0x0004daa2) main_call5_pane

0xa15c,	// (0x0004db19) sc_swipe_pane_ParamLimits

0xa15c,	// (0x0004db19) sc_swipe_pane

0x72f9,	// (0x0004acb6) call5_image_pane_ParamLimits

0x72f9,	// (0x0004acb6) call5_image_pane

0x7316,	// (0x0004acd3) call5_swipe_1_pane_ParamLimits

0x7316,	// (0x0004acd3) call5_swipe_1_pane

0x7329,	// (0x0004ace6) call5_swipe_2_pane_ParamLimits

0x7329,	// (0x0004ace6) call5_swipe_2_pane

0x7354,	// (0x0004ad11) popup_call5_audio_first_window_ParamLimits

0x7354,	// (0x0004ad11) popup_call5_audio_first_window

0xa853,	// (0x0004e210) call5_swipe_1_pane_g1_ParamLimits

0xa853,	// (0x0004e210) call5_swipe_1_pane_g1

0xee63,	// (0x00052820) call5_swipe_1_pane_g2_ParamLimits

0xee63,	// (0x00052820) call5_swipe_1_pane_g2

0x0001,

0xfac0,	// (0x0005347d) call5_swipe_1_pane_g_ParamLimits

0xfac0,	// (0x0005347d) call5_swipe_1_pane_g

0xee6f,	// (0x0005282c) call5_swipe_1_pane_t1_ParamLimits

0xee6f,	// (0x0005282c) call5_swipe_1_pane_t1

0xa853,	// (0x0004e210) call5_swipe_2_pane_g1_ParamLimits

0xa853,	// (0x0004e210) call5_swipe_2_pane_g1

0xee84,	// (0x00052841) call5_swipe_2_pane_g2_ParamLimits

0xee84,	// (0x00052841) call5_swipe_2_pane_g2

0x0001,

0xfac5,	// (0x00053482) call5_swipe_2_pane_g_ParamLimits

0xfac5,	// (0x00053482) call5_swipe_2_pane_g

0xee90,	// (0x0005284d) call5_swipe_2_pane_t1_ParamLimits

0xee90,	// (0x0005284d) call5_swipe_2_pane_t1

0xa853,	// (0x0004e210) sc_swipe_pane_g1_ParamLimits

0xa853,	// (0x0004e210) sc_swipe_pane_g1

0xa861,	// (0x0004e21e) sc_swipe_pane_g2_ParamLimits

0xa861,	// (0x0004e21e) sc_swipe_pane_g2

0x0001,

0xf6fd,	// (0x000530ba) sc_swipe_pane_g_ParamLimits

0xf6fd,	// (0x000530ba) sc_swipe_pane_g

0xa8a3,	// (0x0004e260) sc_swipe_pane_t1_ParamLimits

0xa8a3,	// (0x0004e260) sc_swipe_pane_t1

0xa0e5,	// (0x0004daa2) main_cmail_launcher_pane

0x7365,	// (0x0004ad22) aid_size_cell_cmail_l_ParamLimits

0x7365,	// (0x0004ad22) aid_size_cell_cmail_l

0x7373,	// (0x0004ad30) grid_cmail_l_pane_ParamLimits

0x7373,	// (0x0004ad30) grid_cmail_l_pane

0x738d,	// (0x0004ad4a) cell_cmail_l_pane_ParamLimits

0x738d,	// (0x0004ad4a) cell_cmail_l_pane

0xeea5,	// (0x00052862) cell_cmail_l_pane_g1_ParamLimits

0xeea5,	// (0x00052862) cell_cmail_l_pane_g1

0xeeb1,	// (0x0005286e) cell_cmail_l_pane_t1_ParamLimits

0xeeb1,	// (0x0005286e) cell_cmail_l_pane_t1

0xeec7,	// (0x00052884) cell_cmail_l_pane_t2_ParamLimits

0xeec7,	// (0x00052884) cell_cmail_l_pane_t2

0x0001,

0x06bd,	// (0x0004407a) cell_cmail_l_pane_t_ParamLimits

0x06bd,	// (0x0004407a) cell_cmail_l_pane_t

0xa15c,	// (0x0004db19) grid_highlight_pane_cp018_ParamLimits

0xa15c,	// (0x0004db19) grid_highlight_pane_cp018

0x112f,	// (0x00044aec) main2_pane_ParamLimits

0x112f,	// (0x00044aec) main2_pane

0xa9cd,	// (0x0004e38a) popup_sp_fs_action_menu_bg_pane_g1

0xa9d5,	// (0x0004e392) popup_sp_fs_action_menu_bg_pane_g2

0xa9dd,	// (0x0004e39a) popup_sp_fs_action_menu_bg_pane_g3

0xa9e5,	// (0x0004e3a2) popup_sp_fs_action_menu_bg_pane_g4

0xa9ed,	// (0x0004e3aa) popup_sp_fs_action_menu_bg_pane_g5

0xa9f5,	// (0x0004e3b2) popup_sp_fs_action_menu_bg_pane_g6

0xa9fd,	// (0x0004e3ba) popup_sp_fs_action_menu_bg_pane_g7

0xaa05,	// (0x0004e3c2) popup_sp_fs_action_menu_bg_pane_g8

0xaa0d,	// (0x0004e3ca) popup_sp_fs_action_menu_bg_pane_g9

0xaa15,	// (0x0004e3d2) popup_sp_fs_action_menu_bg_pane_g10

0xaa15,	// (0x0004e3d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00052a9a) popup_sp_fs_action_menu_bg_pane_g

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g3_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g3_g2

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00052b48) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00052b48) list_medium_line_x2_t3_g3_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g3_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g3_t2

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00052b4f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00052b4f) list_medium_line_x2_t3_g3_t

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g2_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_x2_t3_g2_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g2_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g2_t2

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00052b4f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00052b4f) list_medium_line_x2_t3_g2_t

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g2

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g3

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00052b5b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00052b5b) list_medium_line_x2_t4_g4_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t2

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t3

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00052b64) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00052b64) list_medium_line_x2_t4_g4_t

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g2

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g3

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00052b5b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00052b5b) list_medium_line_x2_t2_g4_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g4_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x00052b2b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x00052b2b) list_medium_line_x2_t2_g4_t

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g3_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g3_g2

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00052b48) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00052b48) list_medium_line_x2_t2_g3_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g3_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x00052b2b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x00052b2b) list_medium_line_x2_t2_g3_t

0x2cbe,	// (0x0004667b) main_sp_fs_list_pane_ParamLimits

0x2cbe,	// (0x0004667b) main_sp_fs_list_pane

0xefb9,	// (0x00052976) sp_fs_scroll_pane_ParamLimits

0xefb9,	// (0x00052976) sp_fs_scroll_pane

0xb08b,	// (0x0004ea48) list_medium_line_x2_t3_t1

0xb08b,	// (0x0004ea48) list_medium_line_x2_t3_t2

0xb08b,	// (0x0004ea48) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x00052c11) list_medium_line_x2_t3_t

0xb08b,	// (0x0004ea48) list_medium_line_x3_t4_t1

0xb08b,	// (0x0004ea48) list_medium_line_x3_t4_t2

0xb08b,	// (0x0004ea48) list_medium_line_x3_t4_t3

0xb08b,	// (0x0004ea48) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x00052c18) list_medium_line_x3_t4_t

0xb08b,	// (0x0004ea48) list_medium_line_x4_t5_t1

0xb08b,	// (0x0004ea48) list_medium_line_x4_t5_t2

0xb08b,	// (0x0004ea48) list_medium_line_x4_t5_t3

0xb08b,	// (0x0004ea48) list_medium_line_x4_t5_t4

0xb08b,	// (0x0004ea48) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x00052c21) list_medium_line_x4_t5_t

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g1

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g2

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g3

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g4_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00052b5b) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00052b5b) list_medium_line_t4_g4_g

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t1

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t2

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t3

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t4_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00052b64) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00052b64) list_medium_line_t4_g4_t

0x2d59,	// (0x00046716) chi_dic_find_pane_g1

0x3a9e,	// (0x0004745b) main_tport_pane

0xb08b,	// (0x0004ea48) list_medium_line_plain_t1

0xa853,	// (0x0004e210) list_medium_line_t2_g2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t2_g2_g1

0xa853,	// (0x0004e210) list_medium_line_t2_g2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_t2_g2_g

0xa8a3,	// (0x0004e260) list_medium_line_t2_g2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t2_g2_t1

0xa8a3,	// (0x0004e260) list_medium_line_t2_g2_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x00052b2b) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x00052b2b) list_medium_line_t2_g2_t

0xcf13,	// (0x000508d0) aid_sp_fs_list_icon_a_sm

0xcf1b,	// (0x000508d8) aid_sp_fs_list_icon_d

0xe440,	// (0x00051dfd) aid_sp_fs_text_primary

0xcf23,	// (0x000508e0) aid_sp_fs_text_secondary

0xa0e5,	// (0x0004daa2) list_medium_line

0xa0e5,	// (0x0004daa2) list_medium_line_g2

0xa0e5,	// (0x0004daa2) list_medium_line_g3

0xa0e5,	// (0x0004daa2) list_medium_line_plain

0xa0e5,	// (0x0004daa2) list_medium_line_plain_t2

0xa0e5,	// (0x0004daa2) list_medium_line_plain_t3

0xa0e5,	// (0x0004daa2) list_medium_line_right_icon

0xa0e5,	// (0x0004daa2) list_medium_line_right_iconx2

0xa0e5,	// (0x0004daa2) list_medium_line_t2

0xa0e5,	// (0x0004daa2) list_medium_line_t2_g2

0xa0e5,	// (0x0004daa2) list_medium_line_t2_g3

0xa0e5,	// (0x0004daa2) list_medium_line_t2_right_icon

0xa0e5,	// (0x0004daa2) list_medium_line_t2_right_iconx2

0xa0e5,	// (0x0004daa2) list_medium_line_t3

0xa0e5,	// (0x0004daa2) list_medium_line_t3_g2

0xa0e5,	// (0x0004daa2) list_medium_line_t3_g3

0xa0e5,	// (0x0004daa2) list_medium_line_t3_right_iconx2

0xa0e5,	// (0x0004daa2) list_medium_line_t4_g4

0xa0e5,	// (0x0004daa2) list_medium_line_x2

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t2_g2

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t2_g3

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t2_g4

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t3

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t3_g2

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t3_g3

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t3_g4

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t4_g2

0xa0e5,	// (0x0004daa2) list_medium_line_x2_t4_g4

0xa0e5,	// (0x0004daa2) list_medium_line_x3

0xa0e5,	// (0x0004daa2) list_medium_line_x3_t4

0xa0e5,	// (0x0004daa2) list_medium_line_x3_t4_g4

0xa0e5,	// (0x0004daa2) list_medium_line_x4_t4

0xa0e5,	// (0x0004daa2) list_medium_line_x4_t4_g7

0xa0e5,	// (0x0004daa2) list_medium_line_x4_t5

0x0af2,	// (0x000444af) list_single_fs_dyc_pane_ParamLimits

0x0af2,	// (0x000444af) list_single_fs_dyc_pane

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g1

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g2

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g3

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g4

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g5

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x4_t4_g7_g6

0xa861,	// (0x0004e21e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa861,	// (0x0004e21e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa24,	// (0x000533e1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa24,	// (0x000533e1) list_medium_line_x4_t4_g7_g

0xa8a3,	// (0x0004e260) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x4_t4_g7_t1

0xa8a3,	// (0x0004e260) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x4_t4_g7_t2

0xa8a3,	// (0x0004e260) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x4_t4_g7_t3

0xa8b7,	// (0x0004e274) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa8b7,	// (0x0004e274) list_medium_line_x4_t4_g7_t4

0xa8b7,	// (0x0004e274) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa8b7,	// (0x0004e274) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa33,	// (0x000533f0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa33,	// (0x000533f0) list_medium_line_x4_t4_g7_t

0x0b32,	// (0x000444ef) list_single_dyc_row_pane_ParamLimits

0x0b32,	// (0x000444ef) list_single_dyc_row_pane

0x72e6,	// (0x0004aca3) call5_gesture_pane_ParamLimits

0x72e6,	// (0x0004aca3) call5_gesture_pane

0x733c,	// (0x0004acf9) call5_windows_pane_ParamLimits

0x733c,	// (0x0004acf9) call5_windows_pane

0x73a7,	// (0x0004ad64) call5_swipe_1_pane_cp_ParamLimits

0x73a7,	// (0x0004ad64) call5_swipe_1_pane_cp

0x73b3,	// (0x0004ad70) call5_swipe_2_pane_cp_ParamLimits

0x73b3,	// (0x0004ad70) call5_swipe_2_pane_cp

0xab56,	// (0x0004e513) call5_image_pane_cp

0x73bf,	// (0x0004ad7c) popup_call5_audio_first_window_cp_ParamLimits

0x73bf,	// (0x0004ad7c) popup_call5_audio_first_window_cp

0xeee4,	// (0x000528a1) call5_swipe_1_pane_g1_cp_ParamLimits

0xeee4,	// (0x000528a1) call5_swipe_1_pane_g1_cp

0xeef1,	// (0x000528ae) call5_swipe_1_pane_g2_cp

0xeef9,	// (0x000528b6) call5_swipe_1_pane_t1_cp_ParamLimits

0xeef9,	// (0x000528b6) call5_swipe_1_pane_t1_cp

0xeee4,	// (0x000528a1) call5_swipe_2_pane_g1_cp_ParamLimits

0xeee4,	// (0x000528a1) call5_swipe_2_pane_g1_cp

0xef0e,	// (0x000528cb) call5_swipe_2_pane_g2_cp

0xef16,	// (0x000528d3) call5_swipe_2_pane_t1_cp_ParamLimits

0xef16,	// (0x000528d3) call5_swipe_2_pane_t1_cp

0xa15c,	// (0x0004db19) main_sp_fs_email_pane

0xef2b,	// (0x000528e8) main_sp_fs_listscroll_pane_te

0x0b4f,	// (0x0004450c) popup_sp_fs_action_menu_pane_ParamLimits

0x0b4f,	// (0x0004450c) popup_sp_fs_action_menu_pane

0xa899,	// (0x0004e256) bg_sp_fs_ctrlbar_pane_g1

0xef34,	// (0x000528f1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xef3d,	// (0x000528fa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xef46,	// (0x00052903) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa899,	// (0x0004e256) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfaca,	// (0x00053487) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd2c2,	// (0x00050c7f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd2c2,	// (0x00050c7f) bg_sp_fs_ctrlbar_ddmenu_pane

0xef4f,	// (0x0005290c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xef4f,	// (0x0005290c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xef5b,	// (0x00052918) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xef5b,	// (0x00052918) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x06cb,	// (0x00044088) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x06cb,	// (0x00044088) main_sp_fs_ctrlbar_ddmenu_pane_g

0xef67,	// (0x00052924) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xef67,	// (0x00052924) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa899,	// (0x0004e256) list_medium_line_t2_right_icon_g1

0xb08b,	// (0x0004ea48) list_medium_line_t2_right_icon_t1

0xb08b,	// (0x0004ea48) list_medium_line_t2_right_icon_t2

0x0001,

0xfad3,	// (0x00053490) list_medium_line_t2_right_icon_t

0xb6d7,	// (0x0004f094) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb6d7,	// (0x0004f094) bg_sp_fs_ctrlbar_pane

0x7415,	// (0x0004add2) main_sp_fs_ctrlbar_button_pane_cp01

0x741f,	// (0x0004addc) main_sp_fs_ctrlbar_ddmenu_pane

0xefdd,	// (0x0005299a) main_sp_fs_ctrlbar_pane_g1

0xefe9,	// (0x000529a6) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfad8,	// (0x00053495) main_sp_fs_ctrlbar_pane_g

0x745d,	// (0x0004ae1a) main_sp_fs_ctrlbar_pane_t1

0x749c,	// (0x0004ae59) main_sp_fs_ctrlbar_pane

0x74c0,	// (0x0004ae7d) main_sp_fs_listscroll_pane_te_cp01

0x0b91,	// (0x0004454e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0b91,	// (0x0004454e) popup_sp_fs_action_menu_pane_cp01

0xa15c,	// (0x0004db19) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa15c,	// (0x0004db19) bg_sp_fs_highlight_list_pane_cp01

0xcf2c,	// (0x000508e9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcf2c,	// (0x000508e9) sp_fs_action_menu_list_gene_pane_g1

0xf010,	// (0x000529cd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf010,	// (0x000529cd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfae6,	// (0x000534a3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfae6,	// (0x000534a3) sp_fs_action_menu_list_gene_pane_g

0xcf3b,	// (0x000508f8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcf3b,	// (0x000508f8) sp_fs_action_menu_list_gene_pane_t1

0xcf53,	// (0x00050910) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcf53,	// (0x00050910) sp_fs_action_menu_list_gene_pane

0x74ea,	// (0x0004aea7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x74ea,	// (0x0004aea7) popup_sp_fs_action_menu_bg_pane

0xcf72,	// (0x0005092f) sp_fs_action_menu_list_pane_ParamLimits

0xcf72,	// (0x0005092f) sp_fs_action_menu_list_pane

0x0bb6,	// (0x00044573) sp_fs_scroll_pane_cp01_ParamLimits

0x0bb6,	// (0x00044573) sp_fs_scroll_pane_cp01

0xb08b,	// (0x0004ea48) list_medium_line_plain_t2_t1

0xb08b,	// (0x0004ea48) list_medium_line_plain_t2_t2

0x0001,

0xfad3,	// (0x00053490) list_medium_line_plain_t2_t

0xb08b,	// (0x0004ea48) list_medium_line_plain_t3_t1

0xb08b,	// (0x0004ea48) list_medium_line_plain_t3_t2

0xb08b,	// (0x0004ea48) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x00052c11) list_medium_line_plain_t3_t

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g2_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_x2_t2_g2_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g2_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x00052b2b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x00052b2b) list_medium_line_x2_t2_g2_t

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g2_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_x2_t4_g2_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t2

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t3

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00052b64) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00052b64) list_medium_line_x2_t4_g2_t

0xa899,	// (0x0004e256) list_medium_line_t3_right_iconx2_g1

0xa899,	// (0x0004e256) list_medium_line_t3_right_iconx2_g2

0xa899,	// (0x0004e256) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x00052d2d) list_medium_line_t3_right_iconx2_g

0xb08b,	// (0x0004ea48) list_medium_line_t3_right_iconx2_t1

0xb08b,	// (0x0004ea48) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfad3,	// (0x00053490) list_medium_line_t3_right_iconx2_t

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g1

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g2

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g3

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00052b5b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00052b5b) list_medium_line_x3_t4_g4_g

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t1

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t2

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t3

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00052b64) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00052b64) list_medium_line_x3_t4_g4_t

0x0bdc,	// (0x00044599) list_single_dyc_row_text_pane_t1_ParamLimits

0x0bdc,	// (0x00044599) list_single_dyc_row_text_pane_t1

0x0c25,	// (0x000445e2) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c25,	// (0x000445e2) list_single_dyc_row_text_pane_t2

0xcf92,	// (0x0005094f) list_single_dyc_row_text_pane_t3_ParamLimits

0xcf92,	// (0x0005094f) list_single_dyc_row_text_pane_t3

0x0005,

0xfaeb,	// (0x000534a8) list_single_dyc_row_text_pane_t_ParamLimits

0xfaeb,	// (0x000534a8) list_single_dyc_row_text_pane_t

0xcfb6,	// (0x00050973) list_single_dyc_row_pane_g1_ParamLimits

0xcfb6,	// (0x00050973) list_single_dyc_row_pane_g1

0xcfc2,	// (0x0005097f) list_single_dyc_row_pane_g2_ParamLimits

0xcfc2,	// (0x0005097f) list_single_dyc_row_pane_g2

0xcfce,	// (0x0005098b) list_single_dyc_row_pane_g3_ParamLimits

0xcfce,	// (0x0005098b) list_single_dyc_row_pane_g3

0xcfe1,	// (0x0005099e) list_single_dyc_row_pane_g4_ParamLimits

0xcfe1,	// (0x0005099e) list_single_dyc_row_pane_g4

0x0006,

0xfaf8,	// (0x000534b5) list_single_dyc_row_pane_g_ParamLimits

0xfaf8,	// (0x000534b5) list_single_dyc_row_pane_g

0xd033,	// (0x000509f0) list_single_dyc_row_text_pane_ParamLimits

0xd033,	// (0x000509f0) list_single_dyc_row_text_pane

0xa0e5,	// (0x0004daa2) bg_sp_fs_scroll_pane

0x74f8,	// (0x0004aeb5) thumb_sp_fs_scroll_pane

0xa853,	// (0x0004e210) list_medium_line_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_g1

0xa8a3,	// (0x0004e260) list_medium_line_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t1

0xa853,	// (0x0004e210) list_medium_line_x2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_g1

0xa853,	// (0x0004e210) list_medium_line_x2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_x2_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t1

0xa853,	// (0x0004e210) list_medium_line_x3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x3_g1

0x7501,	// (0x0004aebe) list_medium_line_x3_g2_ParamLimits

0x7501,	// (0x0004aebe) list_medium_line_x3_g2

0x0001,

0xfb07,	// (0x000534c4) list_medium_line_x3_g_ParamLimits

0xfb07,	// (0x000534c4) list_medium_line_x3_g

0x750f,	// (0x0004aecc) list_medium_line_x3_t1_ParamLimits

0x750f,	// (0x0004aecc) list_medium_line_x3_t1

0x7523,	// (0x0004aee0) thumb_sp_fs_scroll_pane_g1

0x752c,	// (0x0004aee9) thumb_sp_fs_scroll_pane_g2

0x7535,	// (0x0004aef2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb0c,	// (0x000534c9) thumb_sp_fs_scroll_pane_g

0x7523,	// (0x0004aee0) bg_sp_fs_scroll_pane_g1

0x752c,	// (0x0004aee9) bg_sp_fs_scroll_pane_g2

0x7535,	// (0x0004aef2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb0c,	// (0x000534c9) bg_sp_fs_scroll_pane_g

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g1

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g2

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g3

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00052b5b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00052b5b) list_medium_line_x2_t3_g4_g

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g4_t1

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g4_t2

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00052b4f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00052b4f) list_medium_line_x2_t3_g4_t

0xa853,	// (0x0004e210) list_medium_line_g2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_g2_g1

0xa853,	// (0x0004e210) list_medium_line_g2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_g2_g

0xa8a3,	// (0x0004e260) list_medium_line_g2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_g2_t1

0xa853,	// (0x0004e210) list_medium_line_t3_g2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t3_g2_g1

0xa853,	// (0x0004e210) list_medium_line_t3_g2_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00052b56) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00052b56) list_medium_line_t3_g2_g

0xa8a3,	// (0x0004e260) list_medium_line_t3_g2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_g2_t1

0xa8a3,	// (0x0004e260) list_medium_line_t3_g2_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_g2_t2

0xa8a3,	// (0x0004e260) list_medium_line_t3_g2_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00052b4f) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00052b4f) list_medium_line_t3_g2_t

0xa899,	// (0x0004e256) list_medium_line_right_icon_g1

0xb08b,	// (0x0004ea48) list_medium_line_right_icon_t1

0xa853,	// (0x0004e210) list_medium_line_t2_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t2_g1

0xa8a3,	// (0x0004e260) list_medium_line_t2_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t2_t1

0xa8a3,	// (0x0004e260) list_medium_line_t2_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x00052b2b) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x00052b2b) list_medium_line_t2_t

0xa853,	// (0x0004e210) list_medium_line_t3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t3_g1

0xa8a3,	// (0x0004e260) list_medium_line_t3_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_t1

0xa8a3,	// (0x0004e260) list_medium_line_t3_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_t2

0xa8a3,	// (0x0004e260) list_medium_line_t3_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00052b4f) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00052b4f) list_medium_line_t3_t

0xa853,	// (0x0004e210) list_medium_line_g3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_g3_g1

0xa853,	// (0x0004e210) list_medium_line_g3_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_g3_g2

0xa853,	// (0x0004e210) list_medium_line_g3_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00052b48) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00052b48) list_medium_line_g3_g

0xa8a3,	// (0x0004e260) list_medium_line_g3_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_g3_t1

0xa853,	// (0x0004e210) list_medium_line_t2_g3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t2_g3_g1

0xa853,	// (0x0004e210) list_medium_line_t2_g3_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t2_g3_g2

0xa853,	// (0x0004e210) list_medium_line_t2_g3_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00052b48) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00052b48) list_medium_line_t2_g3_g

0xa8a3,	// (0x0004e260) list_medium_line_t2_g3_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t2_g3_t1

0xa8a3,	// (0x0004e260) list_medium_line_t2_g3_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x00052b2b) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x00052b2b) list_medium_line_t2_g3_t

0xa853,	// (0x0004e210) list_medium_line_t3_g3_g1_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t3_g3_g1

0xa853,	// (0x0004e210) list_medium_line_t3_g3_g2_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t3_g3_g2

0xa853,	// (0x0004e210) list_medium_line_t3_g3_g3_ParamLimits

0xa853,	// (0x0004e210) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00052b48) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00052b48) list_medium_line_t3_g3_g

0xa8a3,	// (0x0004e260) list_medium_line_t3_g3_t1_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_g3_t1

0xa8a3,	// (0x0004e260) list_medium_line_t3_g3_t2_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_g3_t2

0xa8a3,	// (0x0004e260) list_medium_line_t3_g3_t3_ParamLimits

0xa8a3,	// (0x0004e260) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00052b4f) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00052b4f) list_medium_line_t3_g3_t

0xa899,	// (0x0004e256) list_medium_line_right_iconx2_g1

0xa899,	// (0x0004e256) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00052a49) list_medium_line_right_iconx2_g

0xb08b,	// (0x0004ea48) list_medium_line_right_iconx2_t1

0xa899,	// (0x0004e256) list_medium_line_t2_right_iconx2_g1

0xa899,	// (0x0004e256) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00052a49) list_medium_line_t2_right_iconx2_g

0xb08b,	// (0x0004ea48) list_medium_line_t2_right_iconx2_t1

0xb08b,	// (0x0004ea48) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfad3,	// (0x00053490) list_medium_line_t2_right_iconx2_t

0xb08b,	// (0x0004ea48) list_medium_line_x4_t4_t1

0xb08b,	// (0x0004ea48) list_medium_line_x4_t4_t2

0xb08b,	// (0x0004ea48) list_medium_line_x4_t4_t3

0xb08b,	// (0x0004ea48) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x00052c18) list_medium_line_x4_t4_t

0x7581,	// (0x0004af3e) tport_appsw_pane_ParamLimits

0x7581,	// (0x0004af3e) tport_appsw_pane

0x7599,	// (0x0004af56) tport_contact_pane_ParamLimits

0x7599,	// (0x0004af56) tport_contact_pane

0x75b1,	// (0x0004af6e) tport_listscroll_pane_ParamLimits

0x75b1,	// (0x0004af6e) tport_listscroll_pane

0x75cb,	// (0x0004af88) cell_tport_appsw_pane_ParamLimits

0x75cb,	// (0x0004af88) cell_tport_appsw_pane

0xb6b5,	// (0x0004f072) tport_appsw_pane_g1_ParamLimits

0xb6b5,	// (0x0004f072) tport_appsw_pane_g1

0x760b,	// (0x0004afc8) tport_contact_pane_g1

0xea3b,	// (0x000523f8) tport_contact_pane_t1

0x7614,	// (0x0004afd1) tport_contact_pane_t2

0x0001,

0xfb13,	// (0x000534d0) tport_contact_pane_t

0x7622,	// (0x0004afdf) list_tport_pane

0x762b,	// (0x0004afe8) scroll_pane_cp_030

0x763c,	// (0x0004aff9) cell_tport_appsw_pane_g1

0x764c,	// (0x0004b009) cell_tport_appsw_pane_t1

0x765a,	// (0x0004b017) grid_highlight_pane_cp019

0x7662,	// (0x0004b01f) list_tport_double_graphic_pane_ParamLimits

0x7662,	// (0x0004b01f) list_tport_double_graphic_pane

0xa15c,	// (0x0004db19) list_highlight_pane_cp023_ParamLimits

0xa15c,	// (0x0004db19) list_highlight_pane_cp023

0x766f,	// (0x0004b02c) list_tport_double_graphic_pane_g1_ParamLimits

0x766f,	// (0x0004b02c) list_tport_double_graphic_pane_g1

0x767c,	// (0x0004b039) list_tport_double_graphic_pane_t1_ParamLimits

0x767c,	// (0x0004b039) list_tport_double_graphic_pane_t1

0x7691,	// (0x0004b04e) list_tport_double_graphic_pane_t2_ParamLimits

0x7691,	// (0x0004b04e) list_tport_double_graphic_pane_t2

0x0001,

0xfb1f,	// (0x000534dc) list_tport_double_graphic_pane_t_ParamLimits

0xfb1f,	// (0x000534dc) list_tport_double_graphic_pane_t

0xa0e5,	// (0x0004daa2) main_cale_note_pane

0x5781,	// (0x0004913e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5781,	// (0x0004913e) cell_vitu2_function_top_wide_pane_cp01

0x7141,	// (0x0004aafe) wait_bar_pane_cp05_ParamLimits

0xa15c,	// (0x0004db19) listscroll_cmail_pane

0x76ab,	// (0x0004b068) list_cmail_pane

0x76c2,	// (0x0004b07f) list_cmail_body_pane

0x76d7,	// (0x0004b094) list_single_cmail_header_caption_pane

0x76ed,	// (0x0004b0aa) list_single_cmail_header_detail_pane_ParamLimits

0x76ed,	// (0x0004b0aa) list_single_cmail_header_detail_pane

0x771a,	// (0x0004b0d7) list_single_cmail_header_caption_pane_t1

0x0d5a,	// (0x00044717) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0d5a,	// (0x00044717) list_single_cmail_header_detail_pane_g1

0xd058,	// (0x00050a15) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd058,	// (0x00050a15) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb24,	// (0x000534e1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb24,	// (0x000534e1) list_single_cmail_header_detail_pane_g

0x0d72,	// (0x0004472f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0d72,	// (0x0004472f) list_single_cmail_header_detail_pane_t1

0x0db0,	// (0x0004476d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0db0,	// (0x0004476d) list_single_cmail_header_editor_pane_bg

0xeb98,	// (0x00052555) list_cmail_body_pane_g1

0x773e,	// (0x0004b0fb) list_cmail_body_pane_t1

0xdebd,	// (0x0005187a) list_single_cmail_header_editor_pane_bg_g1

0xad79,	// (0x0004e736) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdecd,	// (0x0005188a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdec5,	// (0x00051882) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe12c,	// (0x00051ae9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdeed,	// (0x000518aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdedd,	// (0x0005189a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdee5,	// (0x000518a2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad59,	// (0x0004e716) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x774c,	// (0x0004b109) calenote_gesture_pane_ParamLimits

0x774c,	// (0x0004b109) calenote_gesture_pane

0x776c,	// (0x0004b129) calenote_window_pane_ParamLimits

0x776c,	// (0x0004b129) calenote_window_pane

0x7788,	// (0x0004b145) popup_note_window_cp01

0x7791,	// (0x0004b14e) calenote_swipe_1_pane_ParamLimits

0x7791,	// (0x0004b14e) calenote_swipe_1_pane

0x73b3,	// (0x0004ad70) calenote_swipe_2_pane_ParamLimits

0x73b3,	// (0x0004ad70) calenote_swipe_2_pane

0xeee4,	// (0x000528a1) calenote_swipe_1_pane_g1_ParamLimits

0xeee4,	// (0x000528a1) calenote_swipe_1_pane_g1

0x77af,	// (0x0004b16c) calenote_swipe_1_pane_g2_ParamLimits

0x77af,	// (0x0004b16c) calenote_swipe_1_pane_g2

0x0001,

0xfb30,	// (0x000534ed) calenote_swipe_1_pane_g_ParamLimits

0xfb30,	// (0x000534ed) calenote_swipe_1_pane_g

0x77bb,	// (0x0004b178) calenote_swipe_1_pane_t1_ParamLimits

0x77bb,	// (0x0004b178) calenote_swipe_1_pane_t1

0xeee4,	// (0x000528a1) calenote_swipe_2_pane_g1_ParamLimits

0xeee4,	// (0x000528a1) calenote_swipe_2_pane_g1

0x77da,	// (0x0004b197) calenote_swipe_2_pane_g2_ParamLimits

0x77da,	// (0x0004b197) calenote_swipe_2_pane_g2

0x0001,

0xfb35,	// (0x000534f2) calenote_swipe_2_pane_g_ParamLimits

0xfb35,	// (0x000534f2) calenote_swipe_2_pane_g

0x77e6,	// (0x0004b1a3) calenote_swipe_2_pane_t1_ParamLimits

0x77e6,	// (0x0004b1a3) calenote_swipe_2_pane_t1

0xa0e5,	// (0x0004daa2) main_mup_navstr_pane

0x4766,	// (0x00048123) main_mup3_pane_t7_ParamLimits

0x4766,	// (0x00048123) main_mup3_pane_t7

0xcb38,	// (0x000504f5) main_mp4_pane_g6_ParamLimits

0xcb38,	// (0x000504f5) main_mp4_pane_g6

0xcd56,	// (0x00050713) main_image3_pane_t4_ParamLimits

0xcd56,	// (0x00050713) main_image3_pane_t4

0x780d,	// (0x0004b1ca) popup_navstr_preview_pane_ParamLimits

0x780d,	// (0x0004b1ca) popup_navstr_preview_pane

0x7821,	// (0x0004b1de) scroll_navstr_pane_ParamLimits

0x7821,	// (0x0004b1de) scroll_navstr_pane

0xa0e5,	// (0x0004daa2) bg_popup_preview_window_pane_cp04

0x7835,	// (0x0004b1f2) popup_navstr_preview_pane_t1

0x7843,	// (0x0004b200) scroll_navstr_pane_g1_ParamLimits

0x7843,	// (0x0004b200) scroll_navstr_pane_g1

0x7857,	// (0x0004b214) scroll_navstr_pane_t1_ParamLimits

0x7857,	// (0x0004b214) scroll_navstr_pane_t1

0x77a6,	// (0x0004b163) bg_button_pane_cp014

0x77a6,	// (0x0004b163) bg_button_pane_cp030

0x728c,	// (0x0004ac49) list_double_fisheye_pane_g4_ParamLimits

0x728c,	// (0x0004ac49) list_double_fisheye_pane_g4

0x7298,	// (0x0004ac55) list_double_fisheye_pane_g5_ParamLimits

0x7298,	// (0x0004ac55) list_double_fisheye_pane_g5

0xefb9,	// (0x00052976) sp_fs_scroll_pane_cp03

0xefdd,	// (0x0005299a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xefe9,	// (0x000529a6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfad8,	// (0x00053495) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x745d,	// (0x0004ae1a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x76ba,	// (0x0004b077) sp_fs_scroll_pane_cp02

0xaa9e,	// (0x0004e45b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa9e,	// (0x0004e45b) popup_sp_fs_calendar_preview_list_single_pane

0xa0e5,	// (0x0004daa2) main_cam6_pano_pane

0xa15c,	// (0x0004db19) main_mup3_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_phacti_pane

0x7014,	// (0x0004a9d1) bg_button_pane_cp11

0x702e,	// (0x0004a9eb) main_mobtv_info_pane_g2_ParamLimits

0x702e,	// (0x0004a9eb) main_mobtv_info_pane_g2

0x0001,

0xfa73,	// (0x00053430) main_mobtv_info_pane_g_ParamLimits

0xfa73,	// (0x00053430) main_mobtv_info_pane_g

0xa8a3,	// (0x0004e260) sc_clock_pane_t5_ParamLimits

0xa8a3,	// (0x0004e260) sc_clock_pane_t5

0xb6b5,	// (0x0004f072) main_radioblah_pane_g1_ParamLimits

0xb6c3,	// (0x0004f080) main_radioblah_pane_t3_ParamLimits

0xb6c3,	// (0x0004f080) main_radioblah_pane_t3

0xb6c3,	// (0x0004f080) main_radioblah_pane_t4_ParamLimits

0xb6c3,	// (0x0004f080) main_radioblah_pane_t4

0xa15c,	// (0x0004db19) main_radioblah_text_pane_ParamLimits

0xa15c,	// (0x0004db19) main_radioblah_text_pane

0xeddc,	// (0x00052799) main_radioblah_info_pane_g1_ParamLimits

0xee20,	// (0x000527dd) main_radioblah_info_pane_t4_ParamLimits

0xee20,	// (0x000527dd) main_radioblah_info_pane_t4

0xa15c,	// (0x0004db19) main_sp_fs_calendar_pane

0x786e,	// (0x0004b22b) main_phacti_pane_g1

0x787f,	// (0x0004b23c) phacti_note_pane_ParamLimits

0x787f,	// (0x0004b23c) phacti_note_pane

0x7893,	// (0x0004b250) phacti_term_pane_ParamLimits

0x7893,	// (0x0004b250) phacti_term_pane

0x78a8,	// (0x0004b265) phacti_note_pane_t1_ParamLimits

0x78a8,	// (0x0004b265) phacti_note_pane_t1

0xd088,	// (0x00050a45) phacti_term_pane_g1

0xd090,	// (0x00050a4d) phacti_term_pane_t1_ParamLimits

0xd090,	// (0x00050a4d) phacti_term_pane_t1

0x78bf,	// (0x0004b27c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xab3d,	// (0x0004e4fa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb3f,	// (0x000534fc) popup_sp_fs_calendar_preview_list_single_pane_g

0x78c7,	// (0x0004b284) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x78c7,	// (0x0004b284) popup_sp_fs_calendar_preview_list_single_pane_t1

0x78dd,	// (0x0004b29a) aid_popup_sp_fs_bg_corner_pane

0xa899,	// (0x0004e256) popup_sp_fs_calendar_preview_bg_pane_g1

0xa0e5,	// (0x0004daa2) popup_sp_fs_calendar_preview_bg_pane

0x78e5,	// (0x0004b2a2) popup_sp_fs_calendar_preview_list_pane

0x78ed,	// (0x0004b2aa) bg_main_sp_fs_cale_pane_ParamLimits

0x78ed,	// (0x0004b2aa) bg_main_sp_fs_cale_pane

0x7905,	// (0x0004b2c2) listscroll_cale_mrui_pane_ParamLimits

0x7905,	// (0x0004b2c2) listscroll_cale_mrui_pane

0xd95a,	// (0x00051317) listscroll_sp_fs_schedule_track_pane

0xd0c3,	// (0x00050a80) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd0c3,	// (0x00050a80) main_sp_fs_ctrlbar_pane_cp01

0xd95a,	// (0x00051317) main_sp_fs_ribbon_pane

0xd0d9,	// (0x00050a96) popup_sp_fs_cale_preview_window

0xdc2e,	// (0x000515eb) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdc2e,	// (0x000515eb) list_single_sp_fs_schedule_track_pane

0xefd1,	// (0x0005298e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xefd1,	// (0x0005298e) bg_sp_fs_highlight_list_pane_cp03

0xefc5,	// (0x00052982) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xefc5,	// (0x00052982) list_single_sp_fs_schedule_track_pane_g1

0xefc5,	// (0x00052982) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xefc5,	// (0x00052982) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb44,	// (0x00053501) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb44,	// (0x00053501) list_single_sp_fs_schedule_track_pane_g

0x791d,	// (0x0004b2da) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x791d,	// (0x0004b2da) list_single_sp_fs_schedule_track_pane_t1

0x792f,	// (0x0004b2ec) sp_fs_schedule_track_pane_ParamLimits

0x792f,	// (0x0004b2ec) sp_fs_schedule_track_pane

0xd962,	// (0x0005131f) sp_fs_schedule_track_pane_g1

0xd962,	// (0x0005131f) sp_fs_schedule_track_pane_g2

0xd962,	// (0x0005131f) sp_fs_schedule_track_pane_g3

0xd962,	// (0x0005131f) sp_fs_schedule_track_pane_g4

0xd962,	// (0x0005131f) sp_fs_schedule_track_pane_g5

0x0004,

0xf7a1,	// (0x0005315e) sp_fs_schedule_track_pane_g

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g1

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g2

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g3

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g4

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g5

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g6

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g7

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g8

0xd962,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb49,	// (0x00053506) bg_sp_fs_schedule_viewer_highlight_g

0xd95a,	// (0x00051317) bg_main_sp_fs_ribbon_pane

0xd962,	// (0x0005131f) main_sp_fs_ribbon_pane_g1

0x793b,	// (0x0004b2f8) main_sp_fs_ribbon_pane_t1

0x793b,	// (0x0004b2f8) main_sp_fs_ribbon_pane_t2

0x793b,	// (0x0004b2f8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb5c,	// (0x00053519) main_sp_fs_ribbon_pane_t

0xd95a,	// (0x00051317) main_sp_fs_ribbon_scheduler_pane

0xd962,	// (0x0005131f) bg_main_sp_fs_ribbon_pane_g1

0xd962,	// (0x0005131f) bg_main_sp_fs_ribbon_pane_g2

0xd962,	// (0x0005131f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf679,	// (0x00053036) bg_main_sp_fs_ribbon_pane_g

0xd962,	// (0x0005131f) main_sp_fs_ribbon_scheduler_pane_g1

0xd962,	// (0x0005131f) main_sp_fs_ribbon_scheduler_pane_g2

0xd962,	// (0x0005131f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf679,	// (0x00053036) main_sp_fs_ribbon_scheduler_pane_g

0x7949,	// (0x0004b306) list_cale_mrui_pane

0x7956,	// (0x0004b313) sp_fs_scroll_pane_cp07_ParamLimits

0x7956,	// (0x0004b313) sp_fs_scroll_pane_cp07

0xefd1,	// (0x0005298e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xefd1,	// (0x0005298e) bg_sp_fs_schedule_viewer_highlight

0xd95a,	// (0x00051317) list_single_sp_fs_schedule_track_pane_cp01

0xd95a,	// (0x00051317) list_sp_fs_schedule_track_pane

0x7972,	// (0x0004b32f) sp_fs_scroll_pane_cp06_ParamLimits

0x7972,	// (0x0004b32f) sp_fs_scroll_pane_cp06

0xa899,	// (0x0004e256) bgmain_sp_fs_calendar_pane_g1

0x0dc9,	// (0x00044786) list_single_cale_mrui_pane_ParamLimits

0x0dc9,	// (0x00044786) list_single_cale_mrui_pane

0xd0eb,	// (0x00050aa8) list_single_cale_mrui_row_pane_ParamLimits

0xd0eb,	// (0x00050aa8) list_single_cale_mrui_row_pane

0xd0f8,	// (0x00050ab5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd0f8,	// (0x00050ab5) list_single_cale_mrui_row_pane_g1

0xd130,	// (0x00050aed) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd130,	// (0x00050aed) list_single_cale_mrui_row_pane_t1

0x0dea,	// (0x000447a7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0dea,	// (0x000447a7) list_single_cale_mrui_row_pane_t2

0xd142,	// (0x00050aff) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd142,	// (0x00050aff) list_single_cale_mrui_row_pane_t3

0xd171,	// (0x00050b2e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd171,	// (0x00050b2e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb6a,	// (0x00053527) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb6a,	// (0x00053527) list_single_cale_mrui_row_pane_t

0x0e52,	// (0x0004480f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e52,	// (0x0004480f) list_single_cmail_header_editor_pane_bg_cp01

0x0e80,	// (0x0004483d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0e80,	// (0x0004483d) list_single_cmail_header_editor_pane_bg_cp02

0x7993,	// (0x0004b350) main_radioblah_text_pane_t1_ParamLimits

0x7993,	// (0x0004b350) main_radioblah_text_pane_t1

0x79ad,	// (0x0004b36a) cam6_indi_pane_cp01

0x79b5,	// (0x0004b372) cam6_mode_pane_cp01

0x79bd,	// (0x0004b37a) cam6_pano_pane

0x79c6,	// (0x0004b383) cam6_zoom_pane_cp01

0x79ce,	// (0x0004b38b) cam6_pano_image_pane

0x79d9,	// (0x0004b396) cam6_pano_pane_g1

0xeb98,	// (0x00052555) cam6_pano_pane_g2

0x79e2,	// (0x0004b39f) cam6_pano_pane_g3

0x79eb,	// (0x0004b3a8) cam6_pano_pane_g4

0xdbf5,	// (0x000515b2) cam6_pano_pane_g5

0x79f4,	// (0x0004b3b1) cam6_pano_pane_g6

0x79fe,	// (0x0004b3bb) cam6_pano_pane_g7

0x7a06,	// (0x0004b3c3) cam6_pano_pane_g8

0x7a0f,	// (0x0004b3cc) cam6_pano_pane_g9

0x0008,

0xfb73,	// (0x00053530) cam6_pano_pane_g

0xa0e5,	// (0x0004daa2) main_browser_tag_pane

0x7805,	// (0x0004b1c2) grid_navstr_albumart_pane

0x7a1a,	// (0x0004b3d7) cell_navstr_albumart_pane_ParamLimits

0x7a1a,	// (0x0004b3d7) cell_navstr_albumart_pane

0x7a3a,	// (0x0004b3f7) cell_navstr_albumart_pane_g1

0x7a42,	// (0x0004b3ff) cell_navstr_albumart_pane_g2

0x7a4a,	// (0x0004b407) cell_navstr_albumart_pane_g3

0x7a52,	// (0x0004b40f) cell_navstr_albumart_pane_g4

0x0003,

0xfb86,	// (0x00053543) cell_navstr_albumart_pane_g

0x7a5a,	// (0x0004b417) bt_list_pane_ParamLimits

0x7a5a,	// (0x0004b417) bt_list_pane

0x7a6e,	// (0x0004b42b) bt_list_pane_t1

0x7a7d,	// (0x0004b43a) bt_list_pane_t2

0x0001,

0xfb8f,	// (0x0005354c) bt_list_pane_t

0xa0e5,	// (0x0004daa2) main_cale_prevew_pane

0x7a8c,	// (0x0004b449) popup_cale_preview_window_ParamLimits

0x7a8c,	// (0x0004b449) popup_cale_preview_window

0xa15c,	// (0x0004db19) bg_popup_preview_window_pane_cp05_ParamLimits

0xa15c,	// (0x0004db19) bg_popup_preview_window_pane_cp05

0x7aa7,	// (0x0004b464) list_cale_preview_pane_ParamLimits

0x7aa7,	// (0x0004b464) list_cale_preview_pane

0x7ab3,	// (0x0004b470) list_double_cale_preview_pane_ParamLimits

0x7ab3,	// (0x0004b470) list_double_cale_preview_pane

0x7ac5,	// (0x0004b482) list_single_cale_preview_pane_ParamLimits

0x7ac5,	// (0x0004b482) list_single_cale_preview_pane

0x7adb,	// (0x0004b498) list_single_cale_preview_pane_g1

0x7ae3,	// (0x0004b4a0) list_single_cale_preview_pane_t1_ParamLimits

0x7ae3,	// (0x0004b4a0) list_single_cale_preview_pane_t1

0x7af8,	// (0x0004b4b5) list_double_cale_preview_pane_g1

0x7b00,	// (0x0004b4bd) list_double_cale_preview_pane_t1_ParamLimits

0x7b00,	// (0x0004b4bd) list_double_cale_preview_pane_t1

0x7b15,	// (0x0004b4d2) list_double_cale_preview_pane_t2_ParamLimits

0x7b15,	// (0x0004b4d2) list_double_cale_preview_pane_t2

0x0001,

0xfb94,	// (0x00053551) list_double_cale_preview_pane_t_ParamLimits

0xfb94,	// (0x00053551) list_double_cale_preview_pane_t

0xa0e5,	// (0x0004daa2) main_ezdial_pane

0xa15c,	// (0x0004db19) main_sp_fs_email_pane_ParamLimits

0x73cd,	// (0x0004ad8a) cmail_ddmenu_btn01_pane_ParamLimits

0x73cd,	// (0x0004ad8a) cmail_ddmenu_btn01_pane

0x73e0,	// (0x0004ad9d) cmail_ddmenu_btn02_pane_ParamLimits

0x73e0,	// (0x0004ad9d) cmail_ddmenu_btn02_pane

0x7403,	// (0x0004adc0) cmail_ddmenu_btn03_pane_ParamLimits

0x7403,	// (0x0004adc0) cmail_ddmenu_btn03_pane

0x749c,	// (0x0004ae59) main_sp_fs_ctrlbar_pane_ParamLimits

0x74c0,	// (0x0004ae7d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x76c2,	// (0x0004b07f) list_cmail_body_pane_ParamLimits

0x7728,	// (0x0004b0e5) bg_button_pane_cp12

0x7731,	// (0x0004b0ee) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7731,	// (0x0004b0ee) list_single_cmail_header_detail_pane_g3

0xd064,	// (0x00050a21) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd064,	// (0x00050a21) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb2b,	// (0x000534e8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb2b,	// (0x000534e8) list_single_cmail_header_detail_pane_t

0xd0a5,	// (0x00050a62) phacti_term_pane_t2_ParamLimits

0xd0a5,	// (0x00050a62) phacti_term_pane_t2

0x0001,

0xfb3a,	// (0x000534f7) phacti_term_pane_t_ParamLimits

0xfb3a,	// (0x000534f7) phacti_term_pane_t

0x7b2d,	// (0x0004b4ea) aid_size_list_single_double

0x7b39,	// (0x0004b4f6) popup_ezdial_listscroll_window

0x7b50,	// (0x0004b50d) popup_number_entry_window_cp01

0xab56,	// (0x0004e513) bg_popup_call_pane_cp09

0x7b5d,	// (0x0004b51a) ezdial_list_pane

0x7b65,	// (0x0004b522) scroll_pane_cp23

0xb6d7,	// (0x0004f094) bg_button_pane_cp028_ParamLimits

0xb6d7,	// (0x0004f094) bg_button_pane_cp028

0x7b6d,	// (0x0004b52a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7b6d,	// (0x0004b52a) cmail_ddmenu_btn01_pane_g1

0x7b79,	// (0x0004b536) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7b79,	// (0x0004b536) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb99,	// (0x00053556) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb99,	// (0x00053556) cmail_ddmenu_btn01_pane_g

0x7b8d,	// (0x0004b54a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x7b8d,	// (0x0004b54a) cmail_ddmenu_btn01_pane_t1

0xb6d7,	// (0x0004f094) bg_button_pane_cp029_ParamLimits

0xb6d7,	// (0x0004f094) bg_button_pane_cp029

0x7ba3,	// (0x0004b560) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7ba3,	// (0x0004b560) cmail_ddmenu_btn02_pane_g1

0x7bbb,	// (0x0004b578) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7bbb,	// (0x0004b578) cmail_ddmenu_btn02_pane_t1

0xa15c,	// (0x0004db19) bg_button_pane_cp031_ParamLimits

0xa15c,	// (0x0004db19) bg_button_pane_cp031

0x7ba3,	// (0x0004b560) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7ba3,	// (0x0004b560) cmail_ddmenu_btn03_pane_g1

0x7bbb,	// (0x0004b578) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7bbb,	// (0x0004b578) cmail_ddmenu_btn03_pane_t1

0xa8a3,	// (0x0004e260) cell_dialer2_keypad_pane_t1_ParamLimits

0xdc11,	// (0x000515ce) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xdc11,	// (0x000515ce) cell_dialer2_keypad_pane_t1_copy1

0x6e37,	// (0x0004a7f4) ncimui_group_button_pane

0xa15c,	// (0x0004db19) main_sp_fs_calendar_pane_ParamLimits

0x76d7,	// (0x0004b094) list_single_cmail_header_caption_pane_ParamLimits

0xd0ba,	// (0x00050a77) aid_recal_txt_sm_pane

0xa0e5,	// (0x0004daa2) mian_recal_day_pane

0xd0d9,	// (0x00050a96) popup_sp_fs_cale_preview_window_ParamLimits

0x7bdf,	// (0x0004b59c) list_recal_day_pane

0xd1bb,	// (0x00050b78) list_single_recal_day_pane_ParamLimits

0xd1bb,	// (0x00050b78) list_single_recal_day_pane

0x7c06,	// (0x0004b5c3) list_single_recal_day_pane_g1_ParamLimits

0x7c06,	// (0x0004b5c3) list_single_recal_day_pane_g1

0xd1cd,	// (0x00050b8a) list_single_recal_day_pane_g2_ParamLimits

0xd1cd,	// (0x00050b8a) list_single_recal_day_pane_g2

0xd1d9,	// (0x00050b96) list_single_recal_day_pane_g3_ParamLimits

0xd1d9,	// (0x00050b96) list_single_recal_day_pane_g3

0x0ea0,	// (0x0004485d) list_single_recal_day_pane_g4_ParamLimits

0x0ea0,	// (0x0004485d) list_single_recal_day_pane_g4

0xd1e5,	// (0x00050ba2) list_single_recal_day_pane_g5_ParamLimits

0xd1e5,	// (0x00050ba2) list_single_recal_day_pane_g5

0xd1f1,	// (0x00050bae) list_single_recal_day_pane_g6_ParamLimits

0xd1f1,	// (0x00050bae) list_single_recal_day_pane_g6

0x0004,

0xfba8,	// (0x00053565) list_single_recal_day_pane_g_ParamLimits

0xfba8,	// (0x00053565) list_single_recal_day_pane_g

0xd205,	// (0x00050bc2) list_single_recal_day_pane_t1

0xd217,	// (0x00050bd4) list_single_recal_day_pane_t2

0x0001,

0xfbb3,	// (0x00053570) list_single_recal_day_pane_t

0x7c12,	// (0x0004b5cf) ncimui_query_button_pane_ParamLimits

0x7c12,	// (0x0004b5cf) ncimui_query_button_pane

0x7c22,	// (0x0004b5df) ncimui_query_button_pane_t1_ParamLimits

0x7c22,	// (0x0004b5df) ncimui_query_button_pane_t1

0x7c35,	// (0x0004b5f2) ncimui_query_button_pane_t2_ParamLimits

0x7c35,	// (0x0004b5f2) ncimui_query_button_pane_t2

0x0001,

0xfbb8,	// (0x00053575) ncimui_query_button_pane_t_ParamLimits

0xfbb8,	// (0x00053575) ncimui_query_button_pane_t

0x7c48,	// (0x0004b605) query_button_pane_ParamLimits

0x7c48,	// (0x0004b605) query_button_pane

0xa0e5,	// (0x0004daa2) bg_button_pane_cp0028

0x7c5b,	// (0x0004b618) query_button_pane_t1

0x3a9e,	// (0x0004745b) main_tport_pane_ParamLimits

0x753e,	// (0x0004aefb) bg_popup_window_pane_cp01_ParamLimits

0x753e,	// (0x0004aefb) bg_popup_window_pane_cp01

0x7559,	// (0x0004af16) heading_pane_cp08_ParamLimits

0x7559,	// (0x0004af16) heading_pane_cp08

0x756c,	// (0x0004af29) heading_pane_cp07_ParamLimits

0x756c,	// (0x0004af29) heading_pane_cp07

0x763c,	// (0x0004aff9) cell_tport_appsw_pane_g2

0x0002,

0xfb18,	// (0x000534d5) cell_tport_appsw_pane_g

0x0a06,	// (0x000443c3) input_candi_list_open_g1

0xaf2a,	// (0x0004e8e7) list_cale_time_pane_g6_ParamLimits

0xaf2a,	// (0x0004e8e7) list_cale_time_pane_g6

0x40b1,	// (0x00047a6e) aid_size_touch_calib_1_ParamLimits

0x40b1,	// (0x00047a6e) aid_size_touch_calib_1

0x40c3,	// (0x00047a80) aid_size_touch_calib_2_ParamLimits

0x40c3,	// (0x00047a80) aid_size_touch_calib_2

0x40db,	// (0x00047a98) aid_size_touch_calib_3_ParamLimits

0x40db,	// (0x00047a98) aid_size_touch_calib_3

0x40f9,	// (0x00047ab6) aid_size_touch_calib_4_ParamLimits

0x40f9,	// (0x00047ab6) aid_size_touch_calib_4

0x4111,	// (0x00047ace) main_touch_calib_button_group_pane_ParamLimits

0x4111,	// (0x00047ace) main_touch_calib_button_group_pane

0x4129,	// (0x00047ae6) main_touch_calib_pane_g1_ParamLimits

0x413b,	// (0x00047af8) main_touch_calib_pane_g2_ParamLimits

0x414d,	// (0x00047b0a) main_touch_calib_pane_g3_ParamLimits

0x415f,	// (0x00047b1c) main_touch_calib_pane_g4_ParamLimits

0xf627,	// (0x00052fe4) main_touch_calib_pane_g_ParamLimits

0x4171,	// (0x00047b2e) main_touch_calib_pane_t1_ParamLimits

0x418b,	// (0x00047b48) main_touch_calib_pane_t2_ParamLimits

0x41a5,	// (0x00047b62) main_touch_calib_pane_t3_ParamLimits

0x41b9,	// (0x00047b76) main_touch_calib_pane_t4_ParamLimits

0x41cd,	// (0x00047b8a) main_touch_calib_pane_t5_ParamLimits

0xf630,	// (0x00052fed) main_touch_calib_pane_t_ParamLimits

0xd9c2,	// (0x0005137f) list_single_fp_cale_pane_g3_ParamLimits

0xd9c2,	// (0x0005137f) list_single_fp_cale_pane_g3

0xa15c,	// (0x0004db19) bg_button_pane_cp012_ParamLimits

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp03_ParamLimits

0x6045,	// (0x00049a02) cell_vitu2_function_top_pane_g1_ParamLimits

0xa15c,	// (0x0004db19) bg_vkb2_func_pane_cp04_ParamLimits

0x6dc2,	// (0x0004a77f) main_ncimui_button_group_pane_ParamLimits

0x6dc2,	// (0x0004a77f) main_ncimui_button_group_pane

0x6e22,	// (0x0004a7df) main_ncimui_pane_t3_ParamLimits

0x6e22,	// (0x0004a7df) main_ncimui_pane_t3

0x7876,	// (0x0004b233) phacti_button_group_pane

0x7b2d,	// (0x0004b4ea) aid_size_list_single_double_ParamLimits

0x7b39,	// (0x0004b4f6) popup_ezdial_listscroll_window_ParamLimits

0x7b50,	// (0x0004b50d) popup_number_entry_window_cp01_ParamLimits

0x7c69,	// (0x0004b626) phacti_button_pane_ParamLimits

0x7c69,	// (0x0004b626) phacti_button_pane

0xa0e5,	// (0x0004daa2) bg_button_pane_cp14

0x7c7a,	// (0x0004b637) phacti_button_pane_t1

0x7c88,	// (0x0004b645) main_touch_calib_button_pane_ParamLimits

0x7c88,	// (0x0004b645) main_touch_calib_button_pane

0xa911,	// (0x0004e2ce) bg_button_pane_cp18_ParamLimits

0xa911,	// (0x0004e2ce) bg_button_pane_cp18

0x7c9d,	// (0x0004b65a) main_touch_calib_button_pane_t1_ParamLimits

0x7c9d,	// (0x0004b65a) main_touch_calib_button_pane_t1

0x7cb3,	// (0x0004b670) main_touch_calib_button_pane_t2_ParamLimits

0x7cb3,	// (0x0004b670) main_touch_calib_button_pane_t2

0x0001,

0xfbbd,	// (0x0005357a) main_touch_calib_button_pane_t_ParamLimits

0xfbbd,	// (0x0005357a) main_touch_calib_button_pane_t

0xa0e5,	// (0x0004daa2) cell_ncimui_button_pane

0xa0e5,	// (0x0004daa2) bg_button_pane_cp032

0x7cd1,	// (0x0004b68e) cell_ncimui_button_pane_t1

0xcd36,	// (0x000506f3) image3_infobar_pane_ParamLimits

0xcd36,	// (0x000506f3) image3_infobar_pane

0x7194,	// (0x0004ab51) fs_bigclock_status_pane_ParamLimits

0x7194,	// (0x0004ab51) fs_bigclock_status_pane

0x71a1,	// (0x0004ab5e) main_fs_bigclock_clock_pane_ParamLimits

0x71a1,	// (0x0004ab5e) main_fs_bigclock_clock_pane

0x71bf,	// (0x0004ab7c) main_fs_bigclock_indi_pane_ParamLimits

0x71bf,	// (0x0004ab7c) main_fs_bigclock_indi_pane

0x71f1,	// (0x0004abae) main_fs_bigclock_swipe_pane_ParamLimits

0x71f1,	// (0x0004abae) main_fs_bigclock_swipe_pane

0xa0e5,	// (0x0004daa2) main_fs_clock_dumped_data

0xeca5,	// (0x00052662) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeca5,	// (0x00052662) list_single_fs_bigclock_indicator_pane_g1

0xecc0,	// (0x0005267d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xecc0,	// (0x0005267d) list_single_fs_bigclock_indicator_pane_g2

0xecda,	// (0x00052697) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xecda,	// (0x00052697) list_single_fs_bigclock_indicator_pane_g3

0xecf4,	// (0x000526b1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xecf4,	// (0x000526b1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0669,	// (0x00044026) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0669,	// (0x00044026) list_single_fs_bigclock_indicator_pane_g

0xed1f,	// (0x000526dc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xed1f,	// (0x000526dc) list_single_fs_bigclock_indicator_pane_t1

0xed47,	// (0x00052704) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xed47,	// (0x00052704) list_single_fs_bigclock_indicator_pane_t2

0xed6f,	// (0x0005272c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xed6f,	// (0x0005272c) list_single_fs_bigclock_indicator_pane_t3

0xed97,	// (0x00052754) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xed97,	// (0x00052754) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0674,	// (0x00044031) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0674,	// (0x00044031) list_single_fs_bigclock_indicator_pane_t

0x7cdf,	// (0x0004b69c) image3_infobar_fav_pane_ParamLimits

0x7cdf,	// (0x0004b69c) image3_infobar_fav_pane

0x7cef,	// (0x0004b6ac) image3_infobar_loc_pane_ParamLimits

0x7cef,	// (0x0004b6ac) image3_infobar_loc_pane

0x7d03,	// (0x0004b6c0) image3_infobar_time_pane_ParamLimits

0x7d03,	// (0x0004b6c0) image3_infobar_time_pane

0xa899,	// (0x0004e256) image3_infobar_time_pane_g1

0x7d13,	// (0x0004b6d0) image3_infobar_time_pane_t1

0xa899,	// (0x0004e256) image3_infobar_loc_pane_g1

0x7d21,	// (0x0004b6de) image3_infobar_loc_pane_g2

0x0001,

0xfbc2,	// (0x0005357f) image3_infobar_loc_pane_g

0x7d29,	// (0x0004b6e6) image3_infobar_loc_pane_t1

0xa899,	// (0x0004e256) image3_infobar_fav_pane_g1

0x7d37,	// (0x0004b6f4) image3_infobar_fav_pane_g2

0x0001,

0xfbc7,	// (0x00053584) image3_infobar_fav_pane_g

0x7d3f,	// (0x0004b6fc) fs_bigclock_status_battery_pane

0x7d48,	// (0x0004b705) fs_bigclock_status_signal_pane

0x7d51,	// (0x0004b70e) fs_bigclock_status_title_pane

0x7d5a,	// (0x0004b717) fs_bigclock_status_signal_pane_g1

0x7d63,	// (0x0004b720) fs_bigclock_status_signal_pane_g2

0x0001,

0xfbcc,	// (0x00053589) fs_bigclock_status_signal_pane_g

0x7d6b,	// (0x0004b728) fs_bigclock_status_battery_pane_g1

0x7d74,	// (0x0004b731) fs_bigclock_status_battery_pane_g2

0x0001,

0xfbd1,	// (0x0005358e) fs_bigclock_status_battery_pane_g

0x7d7c,	// (0x0004b739) fs_bigclock_status_title_pane_t1

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g1

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g2

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g3

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbd6,	// (0x00053593) main_fs_bigclock_clock_pane_g

0x7d9d,	// (0x0004b75a) main_fs_bigclock_clock_pane_t1

0x7db6,	// (0x0004b773) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbdf,	// (0x0005359c) main_fs_bigclock_clock_pane_t

0x7dcc,	// (0x0004b789) list_single_fs_bigclock_indicator_pane_ParamLimits

0x7dcc,	// (0x0004b789) list_single_fs_bigclock_indicator_pane

0x7ddd,	// (0x0004b79a) list_single_fs_bigclock_pane_ParamLimits

0x7ddd,	// (0x0004b79a) list_single_fs_bigclock_pane

0x7e47,	// (0x0004b804) main_fs_bigclock_indicator_pane_t1

0x7e56,	// (0x0004b813) list_single_fs_bigclock_pane_g1

0x7e5e,	// (0x0004b81b) list_single_fs_bigclock_pane_t1

0xa899,	// (0x0004e256) main_fs_bigclock_swipe_pane_g1

0x7ea1,	// (0x0004b85e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbf0,	// (0x000535ad) main_fs_bigclock_swipe_pane_g

0x7ea9,	// (0x0004b866) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x7ea9,	// (0x0004b866) main_fs_bigclock_swipe_pane_t1

0x2cca,	// (0x00046687) call_type_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_btmg_pane

0xd124,	// (0x00050ae1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd124,	// (0x00050ae1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb63,	// (0x00053520) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb63,	// (0x00053520) list_single_cale_mrui_row_pane_g

0xd1aa,	// (0x00050b67) list_recal_vselct_arw_lo_pane

0x7bfe,	// (0x0004b5bb) list_recal_vselct_arw_up_pane

0xd1b2,	// (0x00050b6f) list_recal_vselct_pane

0x7ec6,	// (0x0004b883) btmg_button_pane

0x7ed0,	// (0x0004b88d) main_btmg_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp044

0x7eda,	// (0x0004b897) btmg_button_pane_t1

0xc8be,	// (0x0005027b) aid_listscroll_gen

0xa15c,	// (0x0004db19) main_cntbar_detail_pane

0x76a3,	// (0x0004b060) list_cmail_folder_pane

0xefb9,	// (0x00052976) sp_fs_scroll_pane_cp03_ParamLimits

0x0eb8,	// (0x00044875) list_single_fs_dyc_pane_cp01_ParamLimits

0x0eb8,	// (0x00044875) list_single_fs_dyc_pane_cp01

0x7ee8,	// (0x0004b8a5) aid_size_cmail_indent

0xd229,	// (0x00050be6) list_single_dyc_row_pane_cp01

0x7f1d,	// (0x0004b8da) cntbar_detail_list_pane_ParamLimits

0x7f1d,	// (0x0004b8da) cntbar_detail_list_pane

0x7f69,	// (0x0004b926) main_cntbar_detail_cont_pane_ParamLimits

0x7f69,	// (0x0004b926) main_cntbar_detail_cont_pane

0xefb9,	// (0x00052976) scroll_pane_cp032_ParamLimits

0xefb9,	// (0x00052976) scroll_pane_cp032

0x7f7d,	// (0x0004b93a) cntbar_detail_list_event_pane_ParamLimits

0x7f7d,	// (0x0004b93a) cntbar_detail_list_event_pane

0x7f2d,	// (0x0004b8ea) cntbar_detail_list_shct_pane

0xadc7,	// (0x0004e784) aid_list_gen

0x7f8d,	// (0x0004b94a) aid_scroll

0x7f96,	// (0x0004b953) aid_size_touch_scroll_bar

0x7257,	// (0x0004ac14) aid_list_double

0x0ecf,	// (0x0004488c) aid_list_single

0x7f9f,	// (0x0004b95c) aid_list_single_lg

0x0ed8,	// (0x00044895) aid_list_z_g_a_sm

0x0ee0,	// (0x0004489d) aid_list_z_g_d

0x0ee8,	// (0x000448a5) aid_txt_z_prm

0x0ef6,	// (0x000448b3) aid_txt_z_prm_cp01

0x0f04,	// (0x000448c1) aid_txt_z_sec

0x7fa8,	// (0x0004b965) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7fa8,	// (0x0004b965) main_cntbar_detail_cont_pane_g1

0x7fbc,	// (0x0004b979) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7fbc,	// (0x0004b979) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbf5,	// (0x000535b2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbf5,	// (0x000535b2) main_cntbar_detail_cont_pane_g

0x7fcc,	// (0x0004b989) main_cntbar_detail_cont_pane_t1

0x7fda,	// (0x0004b997) main_cntbar_detail_cont_pane_t2

0x7fe8,	// (0x0004b9a5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbfa,	// (0x000535b7) main_cntbar_detail_cont_pane_t

0x7ff6,	// (0x0004b9b3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7ff6,	// (0x0004b9b3) cell_cntbar_detail_list_shct_pane

0x800a,	// (0x0004b9c7) cntbar_detail_list_shct_pane_g1

0x8013,	// (0x0004b9d0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc01,	// (0x000535be) cntbar_detail_list_shct_pane_g

0x801c,	// (0x0004b9d9) cntbar_detail_list_event_pane_g1_ParamLimits

0x801c,	// (0x0004b9d9) cntbar_detail_list_event_pane_g1

0x8028,	// (0x0004b9e5) cntbar_detail_list_event_pane_g2_ParamLimits

0x8028,	// (0x0004b9e5) cntbar_detail_list_event_pane_g2

0x0005,

0xfc06,	// (0x000535c3) cntbar_detail_list_event_pane_g_ParamLimits

0xfc06,	// (0x000535c3) cntbar_detail_list_event_pane_g

0x8094,	// (0x0004ba51) cntbar_detail_list_event_pane_t1_ParamLimits

0x8094,	// (0x0004ba51) cntbar_detail_list_event_pane_t1

0x80a9,	// (0x0004ba66) cntbar_detail_list_event_pane_t2_ParamLimits

0x80a9,	// (0x0004ba66) cntbar_detail_list_event_pane_t2

0x0002,

0xfc13,	// (0x000535d0) cntbar_detail_list_event_pane_t_ParamLimits

0xfc13,	// (0x000535d0) cntbar_detail_list_event_pane_t

0xa899,	// (0x0004e256) cell_cntbar_detail_list_shct_pane_g1

0xb5a4,	// (0x0004ef61) navi_pane_mv_g3

0xa15c,	// (0x0004db19) main_cntbar_detail_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_notif_wgt_pane

0xcac2,	// (0x0005047f) aid_tch_main_mp4_pane_g4

0xcd2e,	// (0x000506eb) popup_slider_window_cp02

0xd1a0,	// (0x00050b5d) list_recal_day_event_pane

0x7ef1,	// (0x0004b8ae) cntbar_detail_btn_pane_ParamLimits

0x7ef1,	// (0x0004b8ae) cntbar_detail_btn_pane

0x7f07,	// (0x0004b8c4) cntbar_detail_btn_pane_cp01_ParamLimits

0x7f07,	// (0x0004b8c4) cntbar_detail_btn_pane_cp01

0x7f2d,	// (0x0004b8ea) cntbar_detail_list_shct_pane_ParamLimits

0x7f3d,	// (0x0004b8fa) cntbar_detail_pane_g1_ParamLimits

0x7f3d,	// (0x0004b8fa) cntbar_detail_pane_g1

0x7f4d,	// (0x0004b90a) cntbar_detail_pane_t1_ParamLimits

0x7f4d,	// (0x0004b90a) cntbar_detail_pane_t1

0x8034,	// (0x0004b9f1) cntbar_detail_list_event_pane_g3_ParamLimits

0x8034,	// (0x0004b9f1) cntbar_detail_list_event_pane_g3

0x804c,	// (0x0004ba09) cntbar_detail_list_event_pane_g4_ParamLimits

0x804c,	// (0x0004ba09) cntbar_detail_list_event_pane_g4

0x8064,	// (0x0004ba21) cntbar_detail_list_event_pane_g5_ParamLimits

0x8064,	// (0x0004ba21) cntbar_detail_list_event_pane_g5

0x807c,	// (0x0004ba39) cntbar_detail_list_event_pane_g6_ParamLimits

0x807c,	// (0x0004ba39) cntbar_detail_list_event_pane_g6

0x80be,	// (0x0004ba7b) cntbar_detail_list_event_pane_t3_ParamLimits

0x80be,	// (0x0004ba7b) cntbar_detail_list_event_pane_t3

0x80d0,	// (0x0004ba8d) popup_notif_wgt_window_ParamLimits

0x80d0,	// (0x0004ba8d) popup_notif_wgt_window

0x80e9,	// (0x0004baa6) popup_submenu_window_cp01_ParamLimits

0x80e9,	// (0x0004baa6) popup_submenu_window_cp01

0xab56,	// (0x0004e513) bg_popup_window_pane_cp10

0x80ff,	// (0x0004babc) listscroll_notif_wgt_pane

0x8111,	// (0x0004bace) list_notif_wgt_window

0x811a,	// (0x0004bad7) scroll_pane_cp033

0x8123,	// (0x0004bae0) list_notif_wgt_row_pane_ParamLimits

0x8123,	// (0x0004bae0) list_notif_wgt_row_pane

0x8133,	// (0x0004baf0) aid_size_list_notif_wgt_del

0x8140,	// (0x0004bafd) list_notif_wgt_row_pane_g1

0x814c,	// (0x0004bb09) list_notif_wgt_row_pane_g2

0x815b,	// (0x0004bb18) list_notif_wgt_row_pane_g3

0x0002,

0xfc1a,	// (0x000535d7) list_notif_wgt_row_pane_g

0x8168,	// (0x0004bb25) list_notif_wgt_row_pane_t1

0x817e,	// (0x0004bb3b) list_notif_wgt_row_pane_t2

0x8190,	// (0x0004bb4d) list_notif_wgt_row_pane_t3

0x0002,

0xfc21,	// (0x000535de) list_notif_wgt_row_pane_t

0xe134,	// (0x00051af1) list_recal_day_event_pane_g1

0x81a2,	// (0x0004bb5f) list_recal_day_event_pane_t1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp045

0x81b1,	// (0x0004bb6e) cntbar_detail_btn_pane_t1

0xb6d7,	// (0x0004f094) main_callh_pane_ParamLimits

0xb6d7,	// (0x0004f094) main_callh_pane

0xa0e5,	// (0x0004daa2) main_coverflow0_pane

0xa0e5,	// (0x0004daa2) main_wgtman_pane

0x7209,	// (0x0004abc6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7209,	// (0x0004abc6) main_fs_bigclock_unlock_btn_pane

0x7634,	// (0x0004aff1) bg_button_pane_cp16

0x7644,	// (0x0004b001) cell_tport_appsw_pane_g3

0x81bf,	// (0x0004bb7c) cf0_flow_pane_ParamLimits

0x81bf,	// (0x0004bb7c) cf0_flow_pane

0x81d4,	// (0x0004bb91) listscroll_cf0_pane

0x81df,	// (0x0004bb9c) main_cf0_pane_g1

0x81f1,	// (0x0004bbae) main_cf0_pane_t1_ParamLimits

0x81f1,	// (0x0004bbae) main_cf0_pane_t1

0x8208,	// (0x0004bbc5) main_cf0_pane_t2_ParamLimits

0x8208,	// (0x0004bbc5) main_cf0_pane_t2

0x0001,

0xfc2d,	// (0x000535ea) main_cf0_pane_t_ParamLimits

0xfc2d,	// (0x000535ea) main_cf0_pane_t

0x821f,	// (0x0004bbdc) scroll_pane_cp11

0x822a,	// (0x0004bbe7) cf0_flow_pane_g1

0x8232,	// (0x0004bbef) cf0_flow_pane_g2

0x0001,

0xfc32,	// (0x000535ef) cf0_flow_pane_g

0x823a,	// (0x0004bbf7) cf0_flow_pane_t1

0xa0e5,	// (0x0004daa2) main_call6_pane

0xa0e5,	// (0x0004daa2) main_calllock_pane

0x8248,	// (0x0004bc05) call6_btn_grp_pane_ParamLimits

0x8248,	// (0x0004bc05) call6_btn_grp_pane

0x8262,	// (0x0004bc1f) call6_pane_g1_ParamLimits

0x8262,	// (0x0004bc1f) call6_pane_g1

0x8278,	// (0x0004bc35) popup_call6_1st_window_ParamLimits

0x8278,	// (0x0004bc35) popup_call6_1st_window

0x8289,	// (0x0004bc46) popup_call6_2nd_window_ParamLimits

0x8289,	// (0x0004bc46) popup_call6_2nd_window

0x829a,	// (0x0004bc57) cell_call6_btn_pane_ParamLimits

0x829a,	// (0x0004bc57) cell_call6_btn_pane

0xab56,	// (0x0004e513) bg_popup_call2_in_pane_cp03

0x82ad,	// (0x0004bc6a) popup_call6_1st_window_g1

0x82b5,	// (0x0004bc72) popup_call6_1st_window_g2

0x82bd,	// (0x0004bc7a) popup_call6_1st_window_g3

0x0002,

0xfc37,	// (0x000535f4) popup_call6_1st_window_g

0x82c5,	// (0x0004bc82) popup_call6_1st_window_t1

0x82d4,	// (0x0004bc91) popup_call6_1st_window_t2

0x82e2,	// (0x0004bc9f) popup_call6_1st_window_t3

0x0002,

0xfc3e,	// (0x000535fb) popup_call6_1st_window_t

0xab56,	// (0x0004e513) bg_popup_call2_in_pane_cp04

0x82f0,	// (0x0004bcad) popup_call6_2nd_window_g1

0x82f8,	// (0x0004bcb5) popup_call6_2nd_window_g2

0x8300,	// (0x0004bcbd) popup_call6_2nd_window_g3

0x0002,

0xfc45,	// (0x00053602) popup_call6_2nd_window_g

0x8308,	// (0x0004bcc5) popup_call6_2nd_window_t1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp15

0x8317,	// (0x0004bcd4) cell_call6_btn_pane_g1

0x8320,	// (0x0004bcdd) cell_call6_btn_pane_t1

0x832f,	// (0x0004bcec) listscroll_wgtman_pane_ParamLimits

0x832f,	// (0x0004bcec) listscroll_wgtman_pane

0x8350,	// (0x0004bd0d) wgtman_btn_pane_ParamLimits

0x8350,	// (0x0004bd0d) wgtman_btn_pane

0xb3ab,	// (0x0004ed68) aid_scroll_copy1

0x8393,	// (0x0004bd50) list_wgtman_pane

0x839d,	// (0x0004bd5a) wgtman_btn_pane_g1_ParamLimits

0x839d,	// (0x0004bd5a) wgtman_btn_pane_g1

0x83c9,	// (0x0004bd86) wgtman_btn_pane_t1_ParamLimits

0x83c9,	// (0x0004bd86) wgtman_btn_pane_t1

0x8406,	// (0x0004bdc3) wgtman_btn_pane_t2_ParamLimits

0x8406,	// (0x0004bdc3) wgtman_btn_pane_t2

0x0001,

0xfc4c,	// (0x00053609) wgtman_btn_pane_t_ParamLimits

0xfc4c,	// (0x00053609) wgtman_btn_pane_t

0x841d,	// (0x0004bdda) listrow_wgtman_pane_ParamLimits

0x841d,	// (0x0004bdda) listrow_wgtman_pane

0x842f,	// (0x0004bdec) listrow_wgtman_pane_g1

0x843c,	// (0x0004bdf9) listrow_wgtman_pane_g2

0x0001,

0xfc51,	// (0x0005360e) listrow_wgtman_pane_g

0x0f12,	// (0x000448cf) listrow_wgtman_pane_t1

0x0f2a,	// (0x000448e7) listrow_wgtman_pane_t2

0x0001,

0xfc56,	// (0x00053613) listrow_wgtman_pane_t

0x0f50,	// (0x0004490d) wait_bar_pane_cp09

0x845a,	// (0x0004be17) main_calllock_btn_pane

0x8464,	// (0x0004be21) main_calllock_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp17

0x8317,	// (0x0004bcd4) main_calllock_btn_pane_g1

0x846c,	// (0x0004be29) main_calllock_btn_pane_t1

0xa0e5,	// (0x0004daa2) main_dialer3_pane

0xa0e5,	// (0x0004daa2) main_fmrd2_pane

0xa899,	// (0x0004e256) main_fs_bigclock_unlock_btn_pane_g1

0x8483,	// (0x0004be40) main_fs_bigclock_unlock_btn_pane_t1

0x8491,	// (0x0004be4e) area_fmrd2_info_pane_ParamLimits

0x8491,	// (0x0004be4e) area_fmrd2_info_pane

0x84a2,	// (0x0004be5f) area_fmrd2_visual_pane_ParamLimits

0x84a2,	// (0x0004be5f) area_fmrd2_visual_pane

0x84b0,	// (0x0004be6d) fmrd2_indi_pane_ParamLimits

0x84b0,	// (0x0004be6d) fmrd2_indi_pane

0x84bd,	// (0x0004be7a) area_fmrd2_visual_pane_g1

0x84c5,	// (0x0004be82) area_fmrd2_visual_pane_t1

0x84d5,	// (0x0004be92) area_fmrd2_visual_pane_t2

0x84e5,	// (0x0004bea2) area_fmrd2_visual_pane_t3

0x0002,

0xfc60,	// (0x0005361d) area_fmrd2_visual_pane_t

0x84f5,	// (0x0004beb2) area_fmrd2_info_pane_g1

0x84fd,	// (0x0004beba) area_fmrd2_info_pane_t1

0x850d,	// (0x0004beca) area_fmrd2_info_pane_t2

0x851d,	// (0x0004beda) area_fmrd2_info_pane_t3

0x852d,	// (0x0004beea) area_fmrd2_info_pane_t4

0x0003,

0xfc67,	// (0x00053624) area_fmrd2_info_pane_t

0x853b,	// (0x0004bef8) fmrd2_indi_pane_t1

0x854b,	// (0x0004bf08) fmrd2_indi_pane_t2

0x855b,	// (0x0004bf18) fmrd2_indi_pane_t3

0x0002,

0xfc70,	// (0x0005362d) fmrd2_indi_pane_t

0xed03,	// (0x000526c0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xed03,	// (0x000526c0) list_single_fs_bigclock_indicator_pane_g5

0xedb4,	// (0x00052771) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xedb4,	// (0x00052771) list_single_fs_bigclock_indicator_pane_t5

0xddb0,	// (0x0005176d) aid_cell_bcale_month_pane_ParamLimits

0xddb0,	// (0x0005176d) aid_cell_bcale_month_pane

0xddb0,	// (0x0005176d) bcale_month_pane_ParamLimits

0xddb0,	// (0x0005176d) bcale_month_pane

0xefd1,	// (0x0005298e) bcale_preview_pane_ParamLimits

0xefd1,	// (0x0005298e) bcale_preview_pane

0x7e5e,	// (0x0004b81b) list_single_fs_bigclock_pane_t1_ParamLimits

0x7e7d,	// (0x0004b83a) list_single_fs_bigclock_pane_t2_ParamLimits

0x7e7d,	// (0x0004b83a) list_single_fs_bigclock_pane_t2

0x0001,

0xfbeb,	// (0x000535a8) list_single_fs_bigclock_pane_t_ParamLimits

0xfbeb,	// (0x000535a8) list_single_fs_bigclock_pane_t

0x847b,	// (0x0004be38) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc5b,	// (0x00053618) main_fs_bigclock_unlock_btn_pane_g

0x856b,	// (0x0004bf28) aid_dia3_key_size_ParamLimits

0x856b,	// (0x0004bf28) aid_dia3_key_size

0x857a,	// (0x0004bf37) aid_dia3_listrow_size_ParamLimits

0x857a,	// (0x0004bf37) aid_dia3_listrow_size

0x858f,	// (0x0004bf4c) dia3_keypad_fun_pane_ParamLimits

0x858f,	// (0x0004bf4c) dia3_keypad_fun_pane

0x85ab,	// (0x0004bf68) dia3_keypad_num_pane_ParamLimits

0x85ab,	// (0x0004bf68) dia3_keypad_num_pane

0x85c6,	// (0x0004bf83) dia3_listscroll_pane_ParamLimits

0x85c6,	// (0x0004bf83) dia3_listscroll_pane

0x85d9,	// (0x0004bf96) dia3_numentry_pane_ParamLimits

0x85d9,	// (0x0004bf96) dia3_numentry_pane

0x85f1,	// (0x0004bfae) dia3_list_pane

0x85fc,	// (0x0004bfb9) scroll_pane_cp12

0xa0e5,	// (0x0004daa2) bg_dia3_numentry_pane

0x8607,	// (0x0004bfc4) dia3_numentry_pane_t1

0x8616,	// (0x0004bfd3) cell_dia3_key_num_pane

0x861e,	// (0x0004bfdb) cell_dia3_key0_fun_pane_ParamLimits

0x861e,	// (0x0004bfdb) cell_dia3_key0_fun_pane

0x8632,	// (0x0004bfef) cell_dia3_key1_fun_pane_ParamLimits

0x8632,	// (0x0004bfef) cell_dia3_key1_fun_pane

0x864a,	// (0x0004c007) dia3_listrow_pane

0xea56,	// (0x00052413) bg_dia3_numentry_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp21

0x865c,	// (0x0004c019) cell_dia3_key_num_pane_t1

0x866a,	// (0x0004c027) cell_dia3_key_num_pane_t2

0x8679,	// (0x0004c036) cell_dia3_key_num_pane_t3

0x8688,	// (0x0004c045) cell_dia3_key_num_pane_t4

0x0003,

0xfc77,	// (0x00053634) cell_dia3_key_num_pane_t

0xa0e5,	// (0x0004daa2) bg_button_pane_cp19

0x8697,	// (0x0004c054) cell_dia3_key0_fun_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp20

0x869f,	// (0x0004c05c) cell_dia3_key1_fun_pane_g1

0xefd1,	// (0x0005298e) area_left_week_number_pane

0xefd1,	// (0x0005298e) area_top_day_name_pane

0xefd1,	// (0x0005298e) frame_month_view_pane

0xefd1,	// (0x0005298e) grid_month_view_pane

0xefd1,	// (0x0005298e) cell_top_day_name_pane_ParamLimits

0xefd1,	// (0x0005298e) cell_top_day_name_pane

0xefd1,	// (0x0005298e) cell_area_left_week_number_pane_ParamLimits

0xefd1,	// (0x0005298e) cell_area_left_week_number_pane

0xefd1,	// (0x0005298e) cell_month_view_pane_ParamLimits

0xefd1,	// (0x0005298e) cell_month_view_pane

0xefc5,	// (0x00052982) frm_month_g1

0xefc5,	// (0x00052982) frm_month_g2

0xefc5,	// (0x00052982) frm_month_g3

0xefc5,	// (0x00052982) frm_month_g4

0xefc5,	// (0x00052982) frm_month_g5

0xefc5,	// (0x00052982) frm_month_g6

0xefc5,	// (0x00052982) frm_month_g7

0xefc5,	// (0x00052982) frm_month_g8

0xefc5,	// (0x00052982) frm_month_g9

0xefc5,	// (0x00052982) frm_month_g10

0xefc5,	// (0x00052982) frm_month_g11

0xefc5,	// (0x00052982) frm_month_g12

0xefc5,	// (0x00052982) frm_month_g13

0xefc5,	// (0x00052982) frm_month_g14

0xefc5,	// (0x00052982) frm_month_g15

0xefc5,	// (0x00052982) frm_month_g16

0x000f,

0xfc80,	// (0x0005363d) frm_month_g

0x86a7,	// (0x0004c064) cell_top_day_name_pane_t1

0xefc5,	// (0x00052982) cell_area_left_week_number_pane_g1

0x86a7,	// (0x0004c064) cell_area_left_week_number_pane_t1

0xefc5,	// (0x00052982) cell_month_view_pane_g1

0x86a7,	// (0x0004c064) cell_month_view_pane_t1

0xa0e5,	// (0x0004daa2) main_fps_pane

0xef81,	// (0x0005293e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xef81,	// (0x0005293e) cmail_ddmenu_btn02_pane_cp1

0xef9d,	// (0x0005295a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xef9d,	// (0x0005295a) cmail_ddmenu_btn02_pane_cp2

0x7baf,	// (0x0004b56c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7baf,	// (0x0004b56c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb9e,	// (0x0005355b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb9e,	// (0x0005355b) cmail_ddmenu_btn02_pane_g

0x7bcd,	// (0x0004b58a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7bcd,	// (0x0004b58a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfba3,	// (0x00053560) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfba3,	// (0x00053560) cmail_ddmenu_btn02_pane_t

0x86b9,	// (0x0004c076) fps_text_pane_ParamLimits

0x86b9,	// (0x0004c076) fps_text_pane

0x86d0,	// (0x0004c08d) main_fps_pane_g1_ParamLimits

0x86d0,	// (0x0004c08d) main_fps_pane_g1

0x86ea,	// (0x0004c0a7) wait_bar_pane_cp010_ParamLimits

0x86ea,	// (0x0004c0a7) wait_bar_pane_cp010

0x86fb,	// (0x0004c0b8) fps_text_pane_t1_ParamLimits

0x86fb,	// (0x0004c0b8) fps_text_pane_t1

0x549c,	// (0x00048e59) cam4_image_uncrop_pane_g1

0x54a5,	// (0x00048e62) cam4_image_uncrop_pane_g2

0x54ae,	// (0x00048e6b) cam4_image_uncrop_pane_g3

0x54b7,	// (0x00048e74) cam4_image_uncrop_pane_g4

0x0003,

0xf7be,	// (0x0005317b) cam4_image_uncrop_pane_g

0x864a,	// (0x0004c007) dia3_listrow_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_phob2_pane

0x75dc,	// (0x0004af99) cell_tport_appsw_pane_cp02_ParamLimits

0x75dc,	// (0x0004af99) cell_tport_appsw_pane_cp02

0x75f0,	// (0x0004afad) cell_tport_appsw_pane_cp03_ParamLimits

0x75f0,	// (0x0004afad) cell_tport_appsw_pane_cp03

0xa0e5,	// (0x0004daa2) phob2_contact_card_pane

0xa0e5,	// (0x0004daa2) phob2_listscroll_pane

0x8713,	// (0x0004c0d0) phob2_list_pane

0x7b65,	// (0x0004b522) scroll_pane_cp034

0x871b,	// (0x0004c0d8) phob2_cc_data_pane_ParamLimits

0x871b,	// (0x0004c0d8) phob2_cc_data_pane

0x873a,	// (0x0004c0f7) phob2_cc_listscroll_pane_ParamLimits

0x873a,	// (0x0004c0f7) phob2_cc_listscroll_pane

0x8758,	// (0x0004c115) list_double_large_graphic_phob2_pane_ParamLimits

0x8758,	// (0x0004c115) list_double_large_graphic_phob2_pane

0x8777,	// (0x0004c134) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8777,	// (0x0004c134) list_double_large_graphic_phob2_pane_g1

0x0f62,	// (0x0004491f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f62,	// (0x0004491f) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfca1,	// (0x0005365e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfca1,	// (0x0005365e) list_double_large_graphic_phob2_pane_g

0x0f96,	// (0x00044953) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f96,	// (0x00044953) list_double_large_graphic_phob2_pane_t1

0x0fba,	// (0x00044977) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fba,	// (0x00044977) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfcaa,	// (0x00053667) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfcaa,	// (0x00053667) list_double_large_graphic_phob2_pane_t

0xa15c,	// (0x0004db19) list_highlight_pane_cp024

0x8789,	// (0x0004c146) phob2_cc_button_pane

0x8791,	// (0x0004c14e) phob2_cc_data_pane_g1_ParamLimits

0x8791,	// (0x0004c14e) phob2_cc_data_pane_g1

0x87a8,	// (0x0004c165) phob2_cc_data_pane_g2_ParamLimits

0x87a8,	// (0x0004c165) phob2_cc_data_pane_g2

0x0001,

0xfcaf,	// (0x0005366c) phob2_cc_data_pane_g_ParamLimits

0xfcaf,	// (0x0005366c) phob2_cc_data_pane_g

0x87ba,	// (0x0004c177) phob2_cc_data_pane_t1_ParamLimits

0x87ba,	// (0x0004c177) phob2_cc_data_pane_t1

0x87d2,	// (0x0004c18f) phob2_cc_data_pane_t2_ParamLimits

0x87d2,	// (0x0004c18f) phob2_cc_data_pane_t2

0x87ea,	// (0x0004c1a7) phob2_cc_data_pane_t3_ParamLimits

0x87ea,	// (0x0004c1a7) phob2_cc_data_pane_t3

0x0002,

0xfcb4,	// (0x00053671) phob2_cc_data_pane_t_ParamLimits

0xfcb4,	// (0x00053671) phob2_cc_data_pane_t

0x8802,	// (0x0004c1bf) phob2_cc_list_pane_ParamLimits

0x8802,	// (0x0004c1bf) phob2_cc_list_pane

0xe5fe,	// (0x00051fbb) scroll_pane_cp035_ParamLimits

0xe5fe,	// (0x00051fbb) scroll_pane_cp035

0xa15c,	// (0x0004db19) bg_button_pane_cp033

0x880e,	// (0x0004c1cb) phob2_cc_button_pane_g1

0x881a,	// (0x0004c1d7) phob2_cc_button_pane_t1

0x882f,	// (0x0004c1ec) phob2_cc_button_pane_t2

0x0001,

0xfcbb,	// (0x00053678) phob2_cc_button_pane_t

0x8841,	// (0x0004c1fe) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8841,	// (0x0004c1fe) list_double_large_graphic_phob2_cc_pane

0x8871,	// (0x0004c22e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8871,	// (0x0004c22e) list_double_large_graphic_phob2_cc_pane_g1

0x0fdb,	// (0x00044998) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fdb,	// (0x00044998) list_double_large_graphic_phob2_cc_pane_g2

0x0fe7,	// (0x000449a4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0fe7,	// (0x000449a4) list_double_large_graphic_phob2_cc_pane_g3

0x0ff3,	// (0x000449b0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0ff3,	// (0x000449b0) list_double_large_graphic_phob2_cc_pane_g4

0xd232,	// (0x00050bef) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd232,	// (0x00050bef) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfcc0,	// (0x0005367d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfcc0,	// (0x0005367d) list_double_large_graphic_phob2_cc_pane_g

0x0fff,	// (0x000449bc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0fff,	// (0x000449bc) list_double_large_graphic_phob2_cc_pane_t1

0x1028,	// (0x000449e5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1028,	// (0x000449e5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfccb,	// (0x00053688) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfccb,	// (0x00053688) list_double_large_graphic_phob2_cc_pane_t

0x887d,	// (0x0004c23a) list_highlight_pane_cp025_ParamLimits

0x887d,	// (0x0004c23a) list_highlight_pane_cp025

0xa15c,	// (0x0004db19) bg_button_pane_cp033_ParamLimits

0x880e,	// (0x0004c1cb) phob2_cc_button_pane_g1_ParamLimits

0x881a,	// (0x0004c1d7) phob2_cc_button_pane_t1_ParamLimits

0x882f,	// (0x0004c1ec) phob2_cc_button_pane_t2_ParamLimits

0xfcbb,	// (0x00053678) phob2_cc_button_pane_t_ParamLimits

0x1223,	// (0x00044be0) popup_wgtman_window

0xdffd,	// (0x000519ba) scroll_pane_cp038

0x8375,	// (0x0004bd32) wgtman_btn_pane_cp_01_ParamLimits

0x8375,	// (0x0004bd32) wgtman_btn_pane_cp_01

0x888b,	// (0x0004c248) wgtman_content_pane

0x8894,	// (0x0004c251) wgtman_heading_pane

0xa0e5,	// (0x0004daa2) bg_heading_pane_cp02

0x889d,	// (0x0004c25a) wgtman_heading_pane_g1

0x88a5,	// (0x0004c262) wgtman_heading_pane_t1

0x88b3,	// (0x0004c270) scroll_pane_cp036

0x88bb,	// (0x0004c278) wgtman_list_pane

0x88c3,	// (0x0004c280) wgtman_list_pane_t1_ParamLimits

0x88c3,	// (0x0004c280) wgtman_list_pane_t1

0xcda2,	// (0x0005075f) cam4_grid_pane

0x61d2,	// (0x00049b8f) bg_button_pane_cp015_ParamLimits

0x61e3,	// (0x00049ba0) bg_button_pane_cp016_ParamLimits

0x61ef,	// (0x00049bac) bg_button_pane_cp017_ParamLimits

0x6243,	// (0x00049c00) popup_vitu2_query_window_g3_ParamLimits

0x6243,	// (0x00049c00) popup_vitu2_query_window_g3

0x62e4,	// (0x00049ca1) popup_vitu2_query_window_t6_ParamLimits

0x62e4,	// (0x00049ca1) popup_vitu2_query_window_t6

0x630f,	// (0x00049ccc) popup_vitu2_query_window_t7_ParamLimits

0x630f,	// (0x00049ccc) popup_vitu2_query_window_t7

0x549c,	// (0x00048e59) cam4_grid_pane_g1

0x54a5,	// (0x00048e62) cam4_grid_pane_g2

0x88dd,	// (0x0004c29a) cam4_grid_pane_g3

0x88e6,	// (0x0004c2a3) cam4_grid_pane_g4

0x0003,

0xfcd0,	// (0x0005368d) cam4_grid_pane_g

0x1cb9,	// (0x00045676) aid_placing_vt_slider_lsc_ParamLimits

0x1fc4,	// (0x00045981) vidtel_button_pane_ParamLimits

0x1fc4,	// (0x00045981) vidtel_button_pane

0xa0e5,	// (0x0004daa2) bg_button_pane_cp034

0x88f1,	// (0x0004c2ae) vidtel_button_pane_g1

0x88f9,	// (0x0004c2b6) vidtel_button_pane_t1

0xe124,	// (0x00051ae1) aid_size_vtel_slider_touch

0xe5fe,	// (0x00051fbb) scroll_pane_cp039

0x6fa0,	// (0x0004a95d) ncim_query_button_pane_cp01_ParamLimits

0x6fbf,	// (0x0004a97c) ncimui_query_pane_g1_ParamLimits

0xa15c,	// (0x0004db19) input_focus_pane_cp012_ParamLimits

0xea94,	// (0x00052451) ncim_query_entry_pane_t1_ParamLimits

0xe5fe,	// (0x00051fbb) scroll_pane_cp039_ParamLimits

0xb48f,	// (0x0004ee4c) navi_pane_bcale_mc_g1

0xb497,	// (0x0004ee54) navi_pane_bcale_mc_t1

0xeff5,	// (0x000529b2) main_sp_fs_email_pane_g1

0xf001,	// (0x000529be) main_sp_fs_email_pane_g2

0x0001,

0xfae1,	// (0x0005349e) main_sp_fs_email_pane_g

0x7986,	// (0x0004b343) list_single_cale_mrui_row_pane_g3_ParamLimits

0x7986,	// (0x0004b343) list_single_cale_mrui_row_pane_g3

0x0eae,	// (0x0004486b) list_single_recal_day_pane_g5_event_pane

0xd1fd,	// (0x00050bba) list_single_recal_day_pane_g7

0x890f,	// (0x0004c2cc) list_recal_day_event_pane_cp01

0x8918,	// (0x0004c2d5) list_recal_vselct_arw_lo_pane_cp01

0x8920,	// (0x0004c2dd) list_recal_vselct_arw_up_pane_cp01

0x8928,	// (0x0004c2e5) list_recal_vselct_pane_cp01

0xe134,	// (0x00051af1) list_recal_day_event_pane_cp01_g1

0xd23e,	// (0x00050bfb) list_recal_day_event_pane_cp01_t1

0xd205,	// (0x00050bc2) list_single_recal_day_pane_t1_ParamLimits

0xd217,	// (0x00050bd4) list_single_recal_day_pane_t2_ParamLimits

0xfbb3,	// (0x00053570) list_single_recal_day_pane_t_ParamLimits

0xa7d8,	// (0x0004e195) bg_notes_pane_ParamLimits

0xa8d5,	// (0x0004e292) list_notes_pane_ParamLimits

0x136d,	// (0x00044d2a) scroll_pane_cp06_ParamLimits

0xa911,	// (0x0004e2ce) main_notes_pane_ParamLimits

0xa15c,	// (0x0004db19) main_welc_pane

0x8973,	// (0x0004c330) main_welc_body_pane_ParamLimits

0x8973,	// (0x0004c330) main_welc_body_pane

0x8991,	// (0x0004c34e) main_welc_opti_pane_ParamLimits

0x8991,	// (0x0004c34e) main_welc_opti_pane

0x8a01,	// (0x0004c3be) main_welc_pane_t1_ParamLimits

0x8a01,	// (0x0004c3be) main_welc_pane_t1

0x8c01,	// (0x0004c5be) main_welc_body_row_pane_ParamLimits

0x8c01,	// (0x0004c5be) main_welc_body_row_pane

0xa845,	// (0x0004e202) main_welc_opti_row_pane_ParamLimits

0xa845,	// (0x0004e202) main_welc_opti_row_pane

0x8c15,	// (0x0004c5d2) main_welc_opti_row_pane_g1

0x8c1d,	// (0x0004c5da) main_welc_opti_row_pane_t1

0x8c2c,	// (0x0004c5e9) main_welc_body_row_pane_t1

0x8109,	// (0x0004bac6) popup_notif_wgt_heading_pane

0x8133,	// (0x0004baf0) aid_size_list_notif_wgt_del_ParamLimits

0x8140,	// (0x0004bafd) list_notif_wgt_row_pane_g1_ParamLimits

0x814c,	// (0x0004bb09) list_notif_wgt_row_pane_g2_ParamLimits

0x815b,	// (0x0004bb18) list_notif_wgt_row_pane_g3_ParamLimits

0xfc1a,	// (0x000535d7) list_notif_wgt_row_pane_g_ParamLimits

0x8168,	// (0x0004bb25) list_notif_wgt_row_pane_t1_ParamLimits

0x817e,	// (0x0004bb3b) list_notif_wgt_row_pane_t2_ParamLimits

0x8190,	// (0x0004bb4d) list_notif_wgt_row_pane_t3_ParamLimits

0xfc21,	// (0x000535de) list_notif_wgt_row_pane_t_ParamLimits

0x842f,	// (0x0004bdec) listrow_wgtman_pane_g1_ParamLimits

0x843c,	// (0x0004bdf9) listrow_wgtman_pane_g2_ParamLimits

0xfc51,	// (0x0005360e) listrow_wgtman_pane_g_ParamLimits

0x0f12,	// (0x000448cf) listrow_wgtman_pane_t1_ParamLimits

0x0f2a,	// (0x000448e7) listrow_wgtman_pane_t2_ParamLimits

0xfc56,	// (0x00053613) listrow_wgtman_pane_t_ParamLimits

0x0f50,	// (0x0004490d) wait_bar_pane_cp09_ParamLimits

0xa0e5,	// (0x0004daa2) bg_popup_heading_pane_cp02

0x8c3b,	// (0x0004c5f8) popup_notif_wgt_heading_pane_g1

0x8c43,	// (0x0004c600) popup_notif_wgt_heading_pane_t1

0xa0e5,	// (0x0004daa2) main_vids_pane

0xa0e5,	// (0x0004daa2) vids_listscroll_pane

0x8c51,	// (0x0004c60e) scroll_pane_cp040

0xa0e5,	// (0x0004daa2) vids_list_pane

0x8c5c,	// (0x0004c619) vids_list_double_pane_ParamLimits

0x8c5c,	// (0x0004c619) vids_list_double_pane

0x8c6d,	// (0x0004c62a) vids_list_double_pane_g1

0x8c76,	// (0x0004c633) vids_list_double_pane_t1

0x8c86,	// (0x0004c643) vids_list_double_pane_t2

0x0001,

0xfcef,	// (0x000536ac) vids_list_double_pane_t

0xa15c,	// (0x0004db19) main_ncimui_pane_ParamLimits

0x6dd6,	// (0x0004a793) main_ncimui_pane_g1_ParamLimits

0x6de2,	// (0x0004a79f) main_ncimui_pane_g2_ParamLimits

0x6de2,	// (0x0004a79f) main_ncimui_pane_g2

0x0001,

0xfa3e,	// (0x000533fb) main_ncimui_pane_g_ParamLimits

0xfa3e,	// (0x000533fb) main_ncimui_pane_g

0x89ac,	// (0x0004c369) main_welc_pane_g1_ParamLimits

0x89ac,	// (0x0004c369) main_welc_pane_g1

0x89c1,	// (0x0004c37e) main_welc_pane_g2_ParamLimits

0x89c1,	// (0x0004c37e) main_welc_pane_g2

0x0003,

0xfcd9,	// (0x00053696) main_welc_pane_g_ParamLimits

0xfcd9,	// (0x00053696) main_welc_pane_g

0xa7d8,	// (0x0004e195) listscroll_mce_pane_ParamLimits

0xb5e4,	// (0x0004efa1) wait_bar_pane_cp10

0xc8c6,	// (0x00050283) main_cale_day_pane_ParamLimits

0xc8c6,	// (0x00050283) main_cale_week_pane_ParamLimits

0xa7d8,	// (0x0004e195) main_messa_pane_ParamLimits

0x498d,	// (0x0004834a) main_clock2_btn_pane_ParamLimits

0x498d,	// (0x0004834a) main_clock2_btn_pane

0xda3c,	// (0x000513f9) main_clock2_btn_pane_cp01_ParamLimits

0xda3c,	// (0x000513f9) main_clock2_btn_pane_cp01

0x7949,	// (0x0004b306) list_cale_mrui_pane_ParamLimits

0x81e9,	// (0x0004bba6) main_cf0_pane_g2

0x0001,

0xfc28,	// (0x000535e5) main_cf0_pane_g

0xefd1,	// (0x0005298e) area_left_week_number_pane_ParamLimits

0xefd1,	// (0x0005298e) area_top_day_name_pane_ParamLimits

0xefd1,	// (0x0005298e) frame_month_view_pane_ParamLimits

0xefd1,	// (0x0005298e) grid_month_view_pane_ParamLimits

0xefc5,	// (0x00052982) frm_month_g1_ParamLimits

0xefc5,	// (0x00052982) frm_month_g2_ParamLimits

0xefc5,	// (0x00052982) frm_month_g3_ParamLimits

0xefc5,	// (0x00052982) frm_month_g4_ParamLimits

0xefc5,	// (0x00052982) frm_month_g5_ParamLimits

0xefc5,	// (0x00052982) frm_month_g6_ParamLimits

0xefc5,	// (0x00052982) frm_month_g7_ParamLimits

0xefc5,	// (0x00052982) frm_month_g8_ParamLimits

0xefc5,	// (0x00052982) frm_month_g9_ParamLimits

0xefc5,	// (0x00052982) frm_month_g10_ParamLimits

0xefc5,	// (0x00052982) frm_month_g11_ParamLimits

0xefc5,	// (0x00052982) frm_month_g12_ParamLimits

0xefc5,	// (0x00052982) frm_month_g13_ParamLimits

0xefc5,	// (0x00052982) frm_month_g14_ParamLimits

0xefc5,	// (0x00052982) frm_month_g15_ParamLimits

0xefc5,	// (0x00052982) frm_month_g16_ParamLimits

0xfc80,	// (0x0005363d) frm_month_g_ParamLimits

0x86a7,	// (0x0004c064) cell_top_day_name_pane_t1_ParamLimits

0xefc5,	// (0x00052982) cell_area_left_week_number_pane_g1_ParamLimits

0x86a7,	// (0x0004c064) cell_area_left_week_number_pane_t1_ParamLimits

0xefc5,	// (0x00052982) cell_month_view_pane_g1_ParamLimits

0x86a7,	// (0x0004c064) cell_month_view_pane_t1_ParamLimits

0xa7d0,	// (0x0004e18d) main_clock2_btn_pane_g1

0x8c96,	// (0x0004c653) main_clock2_btn_pane_t1

0xa15c,	// (0x0004db19) listscroll_cmail_pane_ParamLimits

0xeff5,	// (0x000529b2) main_sp_fs_email_pane_g1_ParamLimits

0xf001,	// (0x000529be) main_sp_fs_email_pane_g2_ParamLimits

0xfae1,	// (0x0005349e) main_sp_fs_email_pane_g_ParamLimits

0x7bdf,	// (0x0004b59c) list_recal_day_pane_ParamLimits

0x7bf0,	// (0x0004b5ad) mian_recal_day_pane_t1

0x0c9b,	// (0x00044658) list_single_dyc_row_text_pane_t4_ParamLimits

0x0c9b,	// (0x00044658) list_single_dyc_row_text_pane_t4

0x0ce4,	// (0x000446a1) list_single_dyc_row_text_pane_t5_ParamLimits

0x0ce4,	// (0x000446a1) list_single_dyc_row_text_pane_t5

0xcfa4,	// (0x00050961) list_single_dyc_row_text_pane_t6_ParamLimits

0xcfa4,	// (0x00050961) list_single_dyc_row_text_pane_t6

0xaf09,	// (0x0004e8c6) aid_mgn_list_cale_time_pane

0xa15c,	// (0x0004db19) main_gallery2_pane_ParamLimits

0xda52,	// (0x0005140f) main_clock2_pane_cp01_t1

0xda62,	// (0x0005141f) main_clock2_pane_cp01_t3

0x0001,

0xf69a,	// (0x00053057) main_clock2_pane_cp01_t

0x16fc,	// (0x000450b9) cale_week_scroll_pane_g16_ParamLimits

0x16fc,	// (0x000450b9) cale_week_scroll_pane_g16

0xab56,	// (0x0004e513) vorec_slider_pane

0x88f9,	// (0x0004c2b6) vidtel_button_pane_t1_ParamLimits

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7d8a,	// (0x0004b747) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbd6,	// (0x00053593) main_fs_bigclock_clock_pane_g_ParamLimits

0x7d9d,	// (0x0004b75a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7db6,	// (0x0004b773) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbdf,	// (0x0005359c) main_fs_bigclock_clock_pane_t_ParamLimits

0x4221,	// (0x00047bde) main_mup3_lyrics_pane_ParamLimits

0x4221,	// (0x00047bde) main_mup3_lyrics_pane

0x8cbc,	// (0x0004c679) main_mup3_lyrics_pane_t1_ParamLimits

0x8cbc,	// (0x0004c679) main_mup3_lyrics_pane_t1

0xcaac,	// (0x00050469) aid_main_mp4_pane_t1_area

0xcab6,	// (0x00050473) aid_main_mp4_pane_t2_area

0xcb60,	// (0x0005051d) main_mp4_pane_g7_ParamLimits

0xcb60,	// (0x0005051d) main_mp4_pane_g7

0xcb6c,	// (0x00050529) main_mp4_pane_g8_ParamLimits

0xcb6c,	// (0x00050529) main_mp4_pane_g8

0x526f,	// (0x00048c2c) aid_call6_pane_g1_size

0x885b,	// (0x0004c218) list_double_large_graphic_phob2_other_pane_ParamLimits

0x885b,	// (0x0004c218) list_double_large_graphic_phob2_other_pane

0xaa5d,	// (0x0004e41a) list_double_large_graphic_phob2_other_pane_g1

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp026

0xa15c,	// (0x0004db19) main_welc_pane_ParamLimits

0x7429,	// (0x0004ade6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7429,	// (0x0004ade6) main_sp_fs_ctrlbar_pane_g3

0x7443,	// (0x0004ae00) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7443,	// (0x0004ae00) main_sp_fs_ctrlbar_pane_g4

0x7477,	// (0x0004ae34) toolbar2_fixed_button_pane_cp01

0x7482,	// (0x0004ae3f) toolbar2_fixed_button_pane_cp02

0x748f,	// (0x0004ae4c) toolbar2_fixed_button_pane_cp03

0x8945,	// (0x0004c302) list_welc_entry_pane_ParamLimits

0x8945,	// (0x0004c302) list_welc_entry_pane

0x89d6,	// (0x0004c393) main_welc_pane_g3_ParamLimits

0x89d6,	// (0x0004c393) main_welc_pane_g3

0x8a1f,	// (0x0004c3dc) main_welc_pane_t2_ParamLimits

0x8a1f,	// (0x0004c3dc) main_welc_pane_t2

0x8a3a,	// (0x0004c3f7) main_welc_pane_t3_ParamLimits

0x8a3a,	// (0x0004c3f7) main_welc_pane_t3

0x0005,

0xfce2,	// (0x0005369f) main_welc_pane_t_ParamLimits

0xfce2,	// (0x0005369f) main_welc_pane_t

0x8b72,	// (0x0004c52f) welc_button_pane_ParamLimits

0x8b72,	// (0x0004c52f) welc_button_pane

0x8bec,	// (0x0004c5a9) welc_service_logo_pane_ParamLimits

0x8bec,	// (0x0004c5a9) welc_service_logo_pane

0x8cd8,	// (0x0004c695) list_single_welc_entry_pane_ParamLimits

0x8cd8,	// (0x0004c695) list_single_welc_entry_pane

0x8ce9,	// (0x0004c6a6) list_single_welc_entry_pane_g1

0x8cf1,	// (0x0004c6ae) list_single_welc_entry_pane_t1

0x8cff,	// (0x0004c6bc) list_single_welc_entry_pane_t2

0x0001,

0xfcf4,	// (0x000536b1) list_single_welc_entry_pane_t

0xa0e5,	// (0x0004daa2) bg_button_pane_cp035

0x8d0d,	// (0x0004c6ca) welc_button_pane_t1

0x8d1b,	// (0x0004c6d8) welc_service_logo_pane_g1

0x8d24,	// (0x0004c6e1) welc_service_logo_pane_g2

0x0001,

0xfcf9,	// (0x000536b6) welc_service_logo_pane_g

0xa0e5,	// (0x0004daa2) main_int_radio_pane

0xa9ac,	// (0x0004e369) list_single_fs_dyc_pane_g1

0x0f71,	// (0x0004492e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0f71,	// (0x0004492e) list_double_large_graphic_phob2_pane_g3

0x0f83,	// (0x00044940) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x0f83,	// (0x00044940) list_double_large_graphic_phob2_pane_g4

0x8d2d,	// (0x0004c6ea) main_int_radio1_pane_ParamLimits

0x8d2d,	// (0x0004c6ea) main_int_radio1_pane

0x8d4a,	// (0x0004c707) find_pane_cp02

0x8d53,	// (0x0004c710) input_focus_pane_cp12_ParamLimits

0x8d53,	// (0x0004c710) input_focus_pane_cp12

0x8d63,	// (0x0004c720) input_focus_pane_cp13_ParamLimits

0x8d63,	// (0x0004c720) input_focus_pane_cp13

0x8d77,	// (0x0004c734) input_focus_pane_cp14_ParamLimits

0x8d77,	// (0x0004c734) input_focus_pane_cp14

0x8d8b,	// (0x0004c748) int_radio1_listscroll_pane

0x8d95,	// (0x0004c752) main_int_radio1_pane_g1_ParamLimits

0x8d95,	// (0x0004c752) main_int_radio1_pane_g1

0x8dad,	// (0x0004c76a) main_int_radio1_pane_t1_ParamLimits

0x8dad,	// (0x0004c76a) main_int_radio1_pane_t1

0x8dc8,	// (0x0004c785) main_int_radio1_pane_t2_ParamLimits

0x8dc8,	// (0x0004c785) main_int_radio1_pane_t2

0x8de3,	// (0x0004c7a0) main_int_radio1_pane_t3_ParamLimits

0x8de3,	// (0x0004c7a0) main_int_radio1_pane_t3

0x8dfe,	// (0x0004c7bb) main_int_radio1_pane_t4_ParamLimits

0x8dfe,	// (0x0004c7bb) main_int_radio1_pane_t4

0x8e10,	// (0x0004c7cd) main_int_radio1_pane_t5_ParamLimits

0x8e10,	// (0x0004c7cd) main_int_radio1_pane_t5

0x8e22,	// (0x0004c7df) main_int_radio1_pane_t6_ParamLimits

0x8e22,	// (0x0004c7df) main_int_radio1_pane_t6

0x8e37,	// (0x0004c7f4) main_int_radio1_pane_t7_ParamLimits

0x8e37,	// (0x0004c7f4) main_int_radio1_pane_t7

0x8e4c,	// (0x0004c809) main_int_radio1_pane_t8_ParamLimits

0x8e4c,	// (0x0004c809) main_int_radio1_pane_t8

0x8e6b,	// (0x0004c828) main_int_radio1_pane_t9_ParamLimits

0x8e6b,	// (0x0004c828) main_int_radio1_pane_t9

0x8e7d,	// (0x0004c83a) main_int_radio1_pane_t10_ParamLimits

0x8e7d,	// (0x0004c83a) main_int_radio1_pane_t10

0x8ea3,	// (0x0004c860) main_int_radio1_pane_t11_ParamLimits

0x8ea3,	// (0x0004c860) main_int_radio1_pane_t11

0x8ec9,	// (0x0004c886) main_int_radio1_pane_t12_ParamLimits

0x8ec9,	// (0x0004c886) main_int_radio1_pane_t12

0x000b,

0xfcfe,	// (0x000536bb) main_int_radio1_pane_t_ParamLimits

0xfcfe,	// (0x000536bb) main_int_radio1_pane_t

0x8edb,	// (0x0004c898) int_radio_list_pane

0x7b65,	// (0x0004b522) scroll_pane_cp037

0x8ee3,	// (0x0004c8a0) list_double_large_graphic_int_radio_pane_ParamLimits

0x8ee3,	// (0x0004c8a0) list_double_large_graphic_int_radio_pane

0x8efb,	// (0x0004c8b8) list_double_large_graphic_int_radio_pane_g1

0xd24c,	// (0x00050c09) list_double_large_graphic_int_radio_pane_t1

0xd25a,	// (0x00050c17) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfd17,	// (0x000536d4) list_double_large_graphic_int_radio_pane_t

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp027

0x895f,	// (0x0004c31c) main_button_pane_4

0x89e9,	// (0x0004c3a6) main_welc_pane_g4_ParamLimits

0x89e9,	// (0x0004c3a6) main_welc_pane_g4

0x8a53,	// (0x0004c410) main_welc_pane_t4_ParamLimits

0x8a53,	// (0x0004c410) main_welc_pane_t4

0x8a6e,	// (0x0004c42b) main_welc_pane_t5_ParamLimits

0x8a6e,	// (0x0004c42b) main_welc_pane_t5

0x8aaf,	// (0x0004c46c) main_welc_pane_t6_ParamLimits

0x8aaf,	// (0x0004c46c) main_welc_pane_t6

0x8b89,	// (0x0004c546) welc_button_pane_2_ParamLimits

0x8b89,	// (0x0004c546) welc_button_pane_2

0x8ba5,	// (0x0004c562) welc_button_pane_3_ParamLimits

0x8ba5,	// (0x0004c562) welc_button_pane_3

0x895f,	// (0x0004c31c) welc_button_pane_4

0x8bc4,	// (0x0004c581) welc_button_pane_5_ParamLimits

0x8bc4,	// (0x0004c581) welc_button_pane_5

0x108d,	// (0x00044a4a) main_popup_welc_pane

0x8f1c,	// (0x0004c8d9) main_welc_sk_g3

0x8f26,	// (0x0004c8e3) main_welc_sk_g4

0x8f30,	// (0x0004c8ed) main_welc_sk_t3

0x8f40,	// (0x0004c8fd) main_welc_sk_t4

0x8f50,	// (0x0004c90d) popup_welc_pane_t4

0x8f5e,	// (0x0004c91b) popup_welc_pane_t5

0x8f6c,	// (0x0004c929) popup_welc_pane_t6

0xa0e5,	// (0x0004daa2) main_acti_pane

0xa0e5,	// (0x0004daa2) main_sso_pane

0x8faa,	// (0x0004c967) sso_body_pane_ParamLimits

0x8faa,	// (0x0004c967) sso_body_pane

0x8fca,	// (0x0004c987) sso_logo_pane_ParamLimits

0x8fca,	// (0x0004c987) sso_logo_pane

0x9003,	// (0x0004c9c0) sso_sk_pane_ParamLimits

0x9003,	// (0x0004c9c0) sso_sk_pane

0x9015,	// (0x0004c9d2) main_sso_logo_pane_g1

0x901e,	// (0x0004c9db) sso_sk_pane_t1_ParamLimits

0x901e,	// (0x0004c9db) sso_sk_pane_t1

0x9038,	// (0x0004c9f5) sso_sk_pane_t2_ParamLimits

0x9038,	// (0x0004c9f5) sso_sk_pane_t2

0x0001,

0xfd1c,	// (0x000536d9) sso_sk_pane_t_ParamLimits

0xfd1c,	// (0x000536d9) sso_sk_pane_t

0x904e,	// (0x0004ca0b) aid_sso_gap

0x9057,	// (0x0004ca14) aid_sso_txt1

0x9061,	// (0x0004ca1e) aid_sso_txt2

0x906b,	// (0x0004ca28) aid_sso_txt3

0x0002,

0xfd21,	// (0x000536de) aid_sso_txt

0x9075,	// (0x0004ca32) aid_sso_widget

0x90d3,	// (0x0004ca90) sso_btn_pane_ParamLimits

0x90d3,	// (0x0004ca90) sso_btn_pane

0x9167,	// (0x0004cb24) sso_option_pane_ParamLimits

0x9167,	// (0x0004cb24) sso_option_pane

0x921b,	// (0x0004cbd8) sso_query_pane_ParamLimits

0x921b,	// (0x0004cbd8) sso_query_pane

0x9271,	// (0x0004cc2e) sso_query_pane_cp01_ParamLimits

0x9271,	// (0x0004cc2e) sso_query_pane_cp01

0x92c9,	// (0x0004cc86) sso_t_hdr_pane_ParamLimits

0x92c9,	// (0x0004cc86) sso_t_hdr_pane

0x92f3,	// (0x0004ccb0) sso_t_nml_pane_ParamLimits

0x92f3,	// (0x0004ccb0) sso_t_nml_pane

0x9349,	// (0x0004cd06) sso_t_sub_pane

0x8fd7,	// (0x0004c994) sso_popup_window_ParamLimits

0x8fd7,	// (0x0004c994) sso_popup_window

0x907f,	// (0x0004ca3c) sso_apps_pane_ParamLimits

0x907f,	// (0x0004ca3c) sso_apps_pane

0x90a9,	// (0x0004ca66) sso_body_pane_g1

0x90b3,	// (0x0004ca70) sso_body_pane_t1

0x90c3,	// (0x0004ca80) sso_body_pane_t2

0x0001,

0xfd28,	// (0x000536e5) sso_body_pane_t

0x911f,	// (0x0004cadc) sso_btn_pane_cp01_ParamLimits

0x911f,	// (0x0004cadc) sso_btn_pane_cp01

0x91ef,	// (0x0004cbac) sso_prog_pane_ParamLimits

0x91ef,	// (0x0004cbac) sso_prog_pane

0x9378,	// (0x0004cd35) sso_t_hdr_pane_t1_ParamLimits

0x9378,	// (0x0004cd35) sso_t_hdr_pane_t1

0x938b,	// (0x0004cd48) input_focus_pane_cp10_ParamLimits

0x938b,	// (0x0004cd48) input_focus_pane_cp10

0x939f,	// (0x0004cd5c) sso_query_pane_t1_ParamLimits

0x939f,	// (0x0004cd5c) sso_query_pane_t1

0x93b2,	// (0x0004cd6f) sso_query_pane_t2_ParamLimits

0x93b2,	// (0x0004cd6f) sso_query_pane_t2

0x93cb,	// (0x0004cd88) sso_query_pane_t3_ParamLimits

0x93cb,	// (0x0004cd88) sso_query_pane_t3

0x93f5,	// (0x0004cdb2) sso_query_pane_t4_ParamLimits

0x93f5,	// (0x0004cdb2) sso_query_pane_t4

0x0003,

0xfd2d,	// (0x000536ea) sso_query_pane_t_ParamLimits

0xfd2d,	// (0x000536ea) sso_query_pane_t

0x7f9f,	// (0x0004b95c) bg_button_pane_cp22

0x8f04,	// (0x0004c8c1) sso_btn_pane_t1

0x9419,	// (0x0004cdd6) sso_t_nml_pane_t1_ParamLimits

0x9419,	// (0x0004cdd6) sso_t_nml_pane_t1

0x9434,	// (0x0004cdf1) sso_option_row_pane_ParamLimits

0x9434,	// (0x0004cdf1) sso_option_row_pane

0x9441,	// (0x0004cdfe) sso_t_sub_pane_t1_ParamLimits

0x9441,	// (0x0004cdfe) sso_t_sub_pane_t1

0xa15c,	// (0x0004db19) bg_popup_window_pane_cp11_ParamLimits

0xa15c,	// (0x0004db19) bg_popup_window_pane_cp11

0x945e,	// (0x0004ce1b) popup_sk_window_cp01_ParamLimits

0x945e,	// (0x0004ce1b) popup_sk_window_cp01

0x946b,	// (0x0004ce28) sso_popup_body_pane_ParamLimits

0x946b,	// (0x0004ce28) sso_popup_body_pane

0x9478,	// (0x0004ce35) scroll_pane_cp21_ParamLimits

0x9478,	// (0x0004ce35) scroll_pane_cp21

0x9485,	// (0x0004ce42) sso_popup_body_t_pane_ParamLimits

0x9485,	// (0x0004ce42) sso_popup_body_t_pane

0x9492,	// (0x0004ce4f) sso_popup_body_t_hdr_pane_ParamLimits

0x9492,	// (0x0004ce4f) sso_popup_body_t_hdr_pane

0x94a4,	// (0x0004ce61) sso_popup_body_t_nml_pane_ParamLimits

0x94a4,	// (0x0004ce61) sso_popup_body_t_nml_pane

0x94cb,	// (0x0004ce88) sso_popup_body_t_sub_pane_ParamLimits

0x94cb,	// (0x0004ce88) sso_popup_body_t_sub_pane

0x94ee,	// (0x0004ceab) sso_popup_body_t_hdr_pane_t1

0x94fe,	// (0x0004cebb) sso_popup_body_t_nml_pane_t1_ParamLimits

0x94fe,	// (0x0004cebb) sso_popup_body_t_nml_pane_t1

0x9536,	// (0x0004cef3) sso_popup_body_t_sub_pane_t1_ParamLimits

0x9536,	// (0x0004cef3) sso_popup_body_t_sub_pane_t1

0xa899,	// (0x0004e256) sso_prog_pane_g1

0x955b,	// (0x0004cf18) sso_apps_pane_comp1_ParamLimits

0x955b,	// (0x0004cf18) sso_apps_pane_comp1

0x9575,	// (0x0004cf32) sso_apps_pane_comp1_g1

0x957d,	// (0x0004cf3a) sso_apps_pane_comp1_t1

0x9599,	// (0x0004cf56) sso_option_row_pane_g1

0x95b1,	// (0x0004cf6e) sso_option_row_pane_t1

0x76ab,	// (0x0004b068) list_cmail_pane_ParamLimits

0xa0e5,	// (0x0004daa2) main_call7_pane

0x8932,	// (0x0004c2ef) bg_welc_area_ParamLimits

0x8932,	// (0x0004c2ef) bg_welc_area

0x8aed,	// (0x0004c4aa) sso_t_hdr_pane_a_t1_ParamLimits

0x8aed,	// (0x0004c4aa) sso_t_hdr_pane_a_t1

0x8b08,	// (0x0004c4c5) sso_t_nml_pane_a_t1_ParamLimits

0x8b08,	// (0x0004c4c5) sso_t_nml_pane_a_t1

0x8b37,	// (0x0004c4f4) sso_t_sub_pane_a_t1_ParamLimits

0x8b37,	// (0x0004c4f4) sso_t_sub_pane_a_t1

0x8bda,	// (0x0004c597) welc_button_pane_cp01_ParamLimits

0x8bda,	// (0x0004c597) welc_button_pane_cp01

0x8f04,	// (0x0004c8c1) sso_btn_pane_t1_copy1

0x8f13,	// (0x0004c8d0) welc_button_pane_2_comp1

0x8f7a,	// (0x0004c937) sso_t_hdr_pane_p_t1

0x8f8a,	// (0x0004c947) sso_t_nml_pane_p_t1

0x8f9a,	// (0x0004c957) sso_t_sub_pane_p_t1

0xa0e5,	// (0x0004daa2) main_att_pane

0xa0e5,	// (0x0004daa2) main_vod_pane

0x9349,	// (0x0004cd06) sso_t_sub_pane_ParamLimits

0x958b,	// (0x0004cf48) input_focus_pane_cp10_t1

0x95b1,	// (0x0004cf6e) sso_option_row_pane_t1_ParamLimits

0x95cd,	// (0x0004cf8a) main_att_body_pane_ParamLimits

0x95cd,	// (0x0004cf8a) main_att_body_pane

0x95e3,	// (0x0004cfa0) att_btn_emg_pane_ParamLimits

0x95e3,	// (0x0004cfa0) att_btn_emg_pane

0x9602,	// (0x0004cfbf) att_btn_pane_ParamLimits

0x9602,	// (0x0004cfbf) att_btn_pane

0x9671,	// (0x0004d02e) att_btn_pane_cp01_ParamLimits

0x9671,	// (0x0004d02e) att_btn_pane_cp01

0x96b1,	// (0x0004d06e) att_li_srv_pane_ParamLimits

0x96b1,	// (0x0004d06e) att_li_srv_pane

0x96ce,	// (0x0004d08b) att_opt_pane_ParamLimits

0x96ce,	// (0x0004d08b) att_opt_pane

0x9718,	// (0x0004d0d5) att_query_pane_ParamLimits

0x9718,	// (0x0004d0d5) att_query_pane

0x9791,	// (0x0004d14e) att_query_pane_cp01_ParamLimits

0x9791,	// (0x0004d14e) att_query_pane_cp01

0x97dd,	// (0x0004d19a) att_t_hdr_pane_ParamLimits

0x97dd,	// (0x0004d19a) att_t_hdr_pane

0x9849,	// (0x0004d206) att_t_nml_pane_ParamLimits

0x9849,	// (0x0004d206) att_t_nml_pane

0x98b9,	// (0x0004d276) att_t_nml_pane_cp01_ParamLimits

0x98b9,	// (0x0004d276) att_t_nml_pane_cp01

0x98e7,	// (0x0004d2a4) att_t_nmlb_pane_ParamLimits

0x98e7,	// (0x0004d2a4) att_t_nmlb_pane

0x9954,	// (0x0004d311) att_term_pane_ParamLimits

0x9954,	// (0x0004d311) att_term_pane

0x999e,	// (0x0004d35b) main_att_body_pane_g1_ParamLimits

0x999e,	// (0x0004d35b) main_att_body_pane_g1

0x99ca,	// (0x0004d387) att_t_hdr_pane_t1_ParamLimits

0x99ca,	// (0x0004d387) att_t_hdr_pane_t1

0x99e3,	// (0x0004d3a0) att_t_nml_pane_t1_ParamLimits

0x99e3,	// (0x0004d3a0) att_t_nml_pane_t1

0x9a08,	// (0x0004d3c5) att_btn_pane_t1

0x7f9f,	// (0x0004b95c) bg_button_pane_cp23

0x9a17,	// (0x0004d3d4) att_li_srv_row_pane_ParamLimits

0x9a17,	// (0x0004d3d4) att_li_srv_row_pane

0x9a27,	// (0x0004d3e4) att_t_nmlb_pane_t1_ParamLimits

0x9a27,	// (0x0004d3e4) att_t_nmlb_pane_t1

0x9a43,	// (0x0004d400) att_query_pane_t1

0x9a52,	// (0x0004d40f) att_query_pane_t2

0x9a61,	// (0x0004d41e) att_query_pane_t3

0x0002,

0xfd3b,	// (0x000536f8) att_query_pane_t

0x9a70,	// (0x0004d42d) input_focus_pane_cp11

0x9a79,	// (0x0004d436) att_term_pane_t1_ParamLimits

0x9a79,	// (0x0004d436) att_term_pane_t1

0xa0e5,	// (0x0004daa2) att_opt_row_pane

0x9a96,	// (0x0004d453) att_opt_row_pane_g1

0x9a9e,	// (0x0004d45b) att_opt_row_pane_t1_ParamLimits

0x9a9e,	// (0x0004d45b) att_opt_row_pane_t1

0x9ab7,	// (0x0004d474) att_li_srv_row_pane_g1

0x9abf,	// (0x0004d47c) att_li_srv_row_pane_t1_ParamLimits

0x9abf,	// (0x0004d47c) att_li_srv_row_pane_t1

0x9abf,	// (0x0004d47c) att_li_srv_row_pane_t2_ParamLimits

0x9abf,	// (0x0004d47c) att_li_srv_row_pane_t2

0x0001,

0xfd42,	// (0x000536ff) att_li_srv_row_pane_t_ParamLimits

0xfd42,	// (0x000536ff) att_li_srv_row_pane_t

0x9ad4,	// (0x0004d491) att_btn_close_pane_g1

0xa0e5,	// (0x0004daa2) bg_button_pane_cp24

0x9adc,	// (0x0004d499) main_vod_body_pane_ParamLimits

0x9adc,	// (0x0004d499) main_vod_body_pane

0x9af0,	// (0x0004d4ad) main_vod_body_pane_g1_ParamLimits

0x9af0,	// (0x0004d4ad) main_vod_body_pane_g1

0x9b24,	// (0x0004d4e1) scroll_pane_cp24_ParamLimits

0x9b24,	// (0x0004d4e1) scroll_pane_cp24

0x9b72,	// (0x0004d52f) vod_btn_pane_ParamLimits

0x9b72,	// (0x0004d52f) vod_btn_pane

0x9bb8,	// (0x0004d575) vod_det_pane_ParamLimits

0x9bb8,	// (0x0004d575) vod_det_pane

0x9be8,	// (0x0004d5a5) vod_logo_g1_ParamLimits

0x9be8,	// (0x0004d5a5) vod_logo_g1

0x9c26,	// (0x0004d5e3) vod_opt_pane_ParamLimits

0x9c26,	// (0x0004d5e3) vod_opt_pane

0x9c59,	// (0x0004d616) vod_opt_pane_cp01_ParamLimits

0x9c59,	// (0x0004d616) vod_opt_pane_cp01

0x9c85,	// (0x0004d642) vod_query_pane_ParamLimits

0x9c85,	// (0x0004d642) vod_query_pane

0x9cb0,	// (0x0004d66d) vod_query_pane_cp01_ParamLimits

0x9cb0,	// (0x0004d66d) vod_query_pane_cp01

0x9cbc,	// (0x0004d679) vod_t_nml_pane_ParamLimits

0x9cbc,	// (0x0004d679) vod_t_nml_pane

0x9d69,	// (0x0004d726) vod_t_nml_pane_cp01_ParamLimits

0x9d69,	// (0x0004d726) vod_t_nml_pane_cp01

0x9da5,	// (0x0004d762) vod_t_sub_pane_ParamLimits

0x9da5,	// (0x0004d762) vod_t_sub_pane

0x9dd6,	// (0x0004d793) vod_t_sub_pane_cp01_ParamLimits

0x9dd6,	// (0x0004d793) vod_t_sub_pane_cp01

0x9a70,	// (0x0004d42d) vod_query_field_pane

0x9e02,	// (0x0004d7bf) vod_query_pane_t1

0x9e11,	// (0x0004d7ce) bg_button_pane_cp25

0x8f04,	// (0x0004c8c1) sso_btn_pane_t1_copy2

0x9e1a,	// (0x0004d7d7) vod_t_nml_pane_t1_ParamLimits

0x9e1a,	// (0x0004d7d7) vod_t_nml_pane_t1

0x9e4b,	// (0x0004d808) vod_opt_row_pane_ParamLimits

0x9e4b,	// (0x0004d808) vod_opt_row_pane

0x9e5d,	// (0x0004d81a) vod_t_sub_pane_t1_ParamLimits

0x9e5d,	// (0x0004d81a) vod_t_sub_pane_t1

0x9e76,	// (0x0004d833) vod_det_cell_pane_ParamLimits

0x9e76,	// (0x0004d833) vod_det_cell_pane

0xa0e5,	// (0x0004daa2) input_focus_pane_cp15

0x9e87,	// (0x0004d844) vod_query_field_pane_t1

0x9e95,	// (0x0004d852) vod_opt_row_pane_g1_ParamLimits

0x9e95,	// (0x0004d852) vod_opt_row_pane_g1

0x9ea1,	// (0x0004d85e) vod_opt_row_pane_t1_ParamLimits

0x9ea1,	// (0x0004d85e) vod_opt_row_pane_t1

0x9ec1,	// (0x0004d87e) vod_det_cell_field_pane

0x9eca,	// (0x0004d887) vod_det_cell_pane_g1

0x9ed2,	// (0x0004d88f) vod_det_cell_pane_t1

0xa0e5,	// (0x0004daa2) input_focus_pane_cp16

0x9ee1,	// (0x0004d89e) vod_det_cell_field_pane_t1

0x8248,	// (0x0004bc05) call7_btn_grp_pane_ParamLimits

0x8248,	// (0x0004bc05) call7_btn_grp_pane

0x9eef,	// (0x0004d8ac) call7_bubble_pane_ParamLimits

0x9eef,	// (0x0004d8ac) call7_bubble_pane

0x9f06,	// (0x0004d8c3) cell_call7_btn_pane_ParamLimits

0x9f06,	// (0x0004d8c3) cell_call7_btn_pane

0x9f19,	// (0x0004d8d6) call7_pane_g1_ParamLimits

0x9f19,	// (0x0004d8d6) call7_pane_g1

0x9f28,	// (0x0004d8e5) call7_windows_conf_pane_ParamLimits

0x9f28,	// (0x0004d8e5) call7_windows_conf_pane

0x9f42,	// (0x0004d8ff) popup_call7_1st_window_ParamLimits

0x9f42,	// (0x0004d8ff) popup_call7_1st_window

0x9f53,	// (0x0004d910) popup_call7_2nd_window_ParamLimits

0x9f53,	// (0x0004d910) popup_call7_2nd_window

0x9f64,	// (0x0004d921) popup_call7_3rd_window_ParamLimits

0x9f64,	// (0x0004d921) popup_call7_3rd_window

0xa0e5,	// (0x0004daa2) bg_button_pane_cp26

0x8317,	// (0x0004bcd4) cell_call7_btn_pane_g1

0x8320,	// (0x0004bcdd) cell_call7_btn_pane_t1

0xa0e5,	// (0x0004daa2) bg_popup_window_pane_cp12

0x9f75,	// (0x0004d932) popup_call7_1st_window_g1

0x9f7d,	// (0x0004d93a) popup_call7_1st_window_g2

0x9f85,	// (0x0004d942) popup_call7_1st_window_g3

0x0002,

0xfd47,	// (0x00053704) popup_call7_1st_window_g

0x9f8d,	// (0x0004d94a) popup_call7_1st_window_t1

0x9f9c,	// (0x0004d959) popup_call7_1st_window_t2

0x9faa,	// (0x0004d967) popup_call7_1st_window_t3

0x0002,

0xfd4e,	// (0x0005370b) popup_call7_1st_window_t

0xa0e5,	// (0x0004daa2) bg_popup_window_pane_cp13

0x9fb8,	// (0x0004d975) popup_call7_2nd_window_g1

0x9fc0,	// (0x0004d97d) popup_call7_2nd_window_g2

0x9fc8,	// (0x0004d985) popup_call7_2nd_window_g3

0x0002,

0xfd55,	// (0x00053712) popup_call7_2nd_window_g

0x9fd0,	// (0x0004d98d) popup_call7_2nd_window_t1

0xa0e5,	// (0x0004daa2) bg_popup_window_pane_cp14

0x9fdf,	// (0x0004d99c) call7_list_conf_pane

0x9fe7,	// (0x0004d9a4) call7_list_conf_row_pane_ParamLimits

0x9fe7,	// (0x0004d9a4) call7_list_conf_row_pane

0x9ffa,	// (0x0004d9b7) call7_list_conf_row_pane_g1

0xa002,	// (0x0004d9bf) call7_list_conf_row_pane_g2

0x0001,

0xfd5c,	// (0x00053719) call7_list_conf_row_pane_g

0xa00a,	// (0x0004d9c7) call7_list_conf_row_pane_t1

0xa0e5,	// (0x0004daa2) list_highlight_pane_cp22

0x91bb,	// (0x0004cb78) sso_option_pane_cp01_ParamLimits

0x91bb,	// (0x0004cb78) sso_option_pane_cp01

0xa7d8,	// (0x0004e195) msg_header_pane_ParamLimits

0xb77a,	// (0x0004f137) bg_button_pane_cp01_ParamLimits

0xb78e,	// (0x0004f14b) input_focus_pane_cp07_ParamLimits

0x74e0,	// (0x0004ae9d) popup_email_progress_window

0xa899,	// (0x0004e256) popup_email_progress_window_g1

0xa018,	// (0x0004d9d5) popup_email_progress_window_g2

0x0001,

0xfd61,	// (0x0005371e) popup_email_progress_window_g

0xa020,	// (0x0004d9dd) popup_email_progress_window_t1

0xa0e5,	// (0x0004daa2) cmail_conv_pane

0xcff7,	// (0x000509b4) list_single_dyc_row_pane_g5_ParamLimits

0xcff7,	// (0x000509b4) list_single_dyc_row_pane_g5

0xd003,	// (0x000509c0) list_single_dyc_row_pane_g6_ParamLimits

0xd003,	// (0x000509c0) list_single_dyc_row_pane_g6

0xd01b,	// (0x000509d8) list_single_dyc_row_pane_g7_ParamLimits

0xd01b,	// (0x000509d8) list_single_dyc_row_pane_g7

0x8967,	// (0x0004c324) main_button_pane_5_ParamLimits

0x8967,	// (0x0004c324) main_button_pane_5

0x8fbe,	// (0x0004c97b) sso_emg_call_btn_pane_ParamLimits

0x8fbe,	// (0x0004c97b) sso_emg_call_btn_pane

0x935e,	// (0x0004cd1b) sso_t_sub_pane_cp01_ParamLimits

0x935e,	// (0x0004cd1b) sso_t_sub_pane_cp01

0x9599,	// (0x0004cf56) sso_option_row_pane_g1_ParamLimits

0x95a5,	// (0x0004cf62) sso_option_row_pane_g2_ParamLimits

0x95a5,	// (0x0004cf62) sso_option_row_pane_g2

0x0001,

0xfd36,	// (0x000536f3) sso_option_row_pane_g_ParamLimits

0xfd36,	// (0x000536f3) sso_option_row_pane_g

0x968f,	// (0x0004d04c) att_btn_pane_cp02_ParamLimits

0x968f,	// (0x0004d04c) att_btn_pane_cp02

0xa02e,	// (0x0004d9eb) cmail_conv_hdr_pane

0xa037,	// (0x0004d9f4) list_cmail_conv_pane

0xa041,	// (0x0004d9fe) scroll_pane_cp31

0xa049,	// (0x0004da06) cmail_conv_hdr_pane_t1

0xa057,	// (0x0004da14) cmail_conv_hdr_pane_t2

0x0001,

0xfd66,	// (0x00053723) cmail_conv_hdr_pane_t

0xa065,	// (0x0004da22) bubble_cmail_conv_pane_ParamLimits

0xa065,	// (0x0004da22) bubble_cmail_conv_pane

0xa07d,	// (0x0004da3a) aid_size_colorization_pane

0xab56,	// (0x0004e513) bg_bubble_cmail_conv_pane

0xa085,	// (0x0004da42) body_bubble_cmail_conv_pane

0xa08d,	// (0x0004da4a) bubble_cmail_conv_pane_g1

0xa095,	// (0x0004da52) bubble_cmail_conv_pane_g2

0xa09d,	// (0x0004da5a) bubble_cmail_conv_pane_g3

0x0002,

0xfd6b,	// (0x00053728) bubble_cmail_conv_pane_g

0xa0a5,	// (0x0004da62) bubble_cmail_conv_pane_t1

0xa0b3,	// (0x0004da70) bg_bubble_cmail_conv_pane_g1

0xa0bc,	// (0x0004da79) bg_bubble_cmail_conv_pane_g2

0xa0c5,	// (0x0004da82) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfd72,	// (0x0005372f) bg_bubble_cmail_conv_pane_g

0xa0ce,	// (0x0004da8b) body_bubble_cmail_conv_pane_t1_ParamLimits

0xa0ce,	// (0x0004da8b) body_bubble_cmail_conv_pane_t1

0xd268,	// (0x00050c25) body_bubble_cmail_conv_pane_t2_ParamLimits

0xd268,	// (0x00050c25) body_bubble_cmail_conv_pane_t2

0x0001,

0xfd79,	// (0x00053736) body_bubble_cmail_conv_pane_t_ParamLimits

0xfd79,	// (0x00053736) body_bubble_cmail_conv_pane_t

0xa15c,	// (0x0004db19) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
