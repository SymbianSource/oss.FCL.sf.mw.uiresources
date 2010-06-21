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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006b78a };

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
0x03db,	// (0x0006bb65) Screen

0x03e7,	// (0x0006bb71) application_window

0x0433,	// (0x0006bbbd) area_bottom_pane_ParamLimits

0x0433,	// (0x0006bbbd) area_bottom_pane

0x046c,	// (0x0006bbf6) area_top_pane_ParamLimits

0x046c,	// (0x0006bbf6) area_top_pane

0x9442,	// (0x00074bcc) call_video_uplink_pane_ParamLimits

0x9442,	// (0x00074bcc) call_video_uplink_pane

0x04fa,	// (0x0006bc84) main_pane_ParamLimits

0x04fa,	// (0x0006bc84) main_pane

0xc970,	// (0x000780fa) context_pane

0x37ff,	// (0x0006ef89) navi_pane

0x3831,	// (0x0006efbb) popup_cale_events_window_ParamLimits

0x3831,	// (0x0006efbb) popup_cale_events_window

0xc983,	// (0x0007810d) popup_mup_playback_window

0x3849,	// (0x0006efd3) signal_pane

0xa8f0,	// (0x0007607a) main_browser_pane

0xaadc,	// (0x00076266) main_burst_pane

0x3555,	// (0x0006ecdf) main_calc_pane

0xc956,	// (0x000780e0) main_cale_day_pane

0x3569,	// (0x0006ecf3) main_cale_month_pane

0xc956,	// (0x000780e0) main_cale_week_pane

0xaadc,	// (0x00076266) main_call_pane

0xa01b,	// (0x000757a5) main_call_poc_pane

0xaadc,	// (0x00076266) main_camera_pane

0xaadc,	// (0x00076266) main_chi_dic_pane

0xb2bf,	// (0x00076a49) main_clock_pane

0xa01b,	// (0x000757a5) main_fmradio_pane

0xaadc,	// (0x00076266) main_graph_messa_pane

0xa01b,	// (0x000757a5) main_help_pane

0xa8f0,	// (0x0007607a) main_im_pane

0xa81f,	// (0x00075fa9) main_image_pane_ParamLimits

0xa81f,	// (0x00075fa9) main_image_pane

0xa01b,	// (0x000757a5) main_location2_pane

0xaadc,	// (0x00076266) main_location_pane

0xa81f,	// (0x00075fa9) main_messa_pane

0xa01b,	// (0x000757a5) main_mp2_pane

0xaadc,	// (0x00076266) main_mp_pane

0xa01b,	// (0x000757a5) main_msg_pane

0xa01b,	// (0x000757a5) main_mup_eq_pane

0xa01b,	// (0x000757a5) main_mup_pane

0xa8f0,	// (0x0007607a) main_notes_pane

0xa01b,	// (0x000757a5) main_pec_pane

0xa01b,	// (0x000757a5) main_phob_pane

0xa01b,	// (0x000757a5) main_pinb_pane

0xa01b,	// (0x000757a5) main_postcard_pane

0xa01b,	// (0x000757a5) main_qdial_pane

0xaadc,	// (0x00076266) main_skin_pane

0xa01b,	// (0x000757a5) main_smil2_pane

0xaadc,	// (0x00076266) main_smil_pane

0xaadc,	// (0x00076266) main_video_pane

0xaadc,	// (0x00076266) main_video_tele_pane

0xa81f,	// (0x00075fa9) main_viewer_pane_ParamLimits

0xa81f,	// (0x00075fa9) main_viewer_pane

0xaadc,	// (0x00076266) main_vorec_pane

0x35bb,	// (0x0006ed45) popup_blid_sat_info_window_ParamLimits

0x35bb,	// (0x0006ed45) popup_blid_sat_info_window

0x3613,	// (0x0006ed9d) popup_dyc_status_message_window_ParamLimits

0x3613,	// (0x0006ed9d) popup_dyc_status_message_window

0x362b,	// (0x0006edb5) popup_grid_large_graphic_window_ParamLimits

0x362b,	// (0x0006edb5) popup_grid_large_graphic_window

0x36db,	// (0x0006ee65) popup_loc_request_window_ParamLimits

0x36db,	// (0x0006ee65) popup_loc_request_window

0x37d7,	// (0x0006ef61) popup_wml_address_window_ParamLimits

0x37d7,	// (0x0006ef61) popup_wml_address_window

0x338f,	// (0x0006eb19) call_muted_g1

0x3043,	// (0x0006e7cd) popup_call_audio_conf_window_ParamLimits

0x3043,	// (0x0006e7cd) popup_call_audio_conf_window

0x33a3,	// (0x0006eb2d) popup_call_audio_first_window_ParamLimits

0x33a3,	// (0x0006eb2d) popup_call_audio_first_window

0x3419,	// (0x0006eba3) popup_call_audio_in_window_ParamLimits

0x3419,	// (0x0006eba3) popup_call_audio_in_window

0x3455,	// (0x0006ebdf) popup_call_audio_out_window_ParamLimits

0x3455,	// (0x0006ebdf) popup_call_audio_out_window

0x348f,	// (0x0006ec19) popup_call_audio_second_window_ParamLimits

0x348f,	// (0x0006ec19) popup_call_audio_second_window

0x34e5,	// (0x0006ec6f) popup_call_audio_wait_window_ParamLimits

0x34e5,	// (0x0006ec6f) popup_call_audio_wait_window

0x351a,	// (0x0006eca4) popup_number_entry_window_ParamLimits

0x351a,	// (0x0006eca4) popup_number_entry_window

0x9478,	// (0x00074c02) bg_popup_call_pane_cp05_ParamLimits

0x9478,	// (0x00074c02) bg_popup_call_pane_cp05

0x9498,	// (0x00074c22) popup_number_entry_window_t1

0x94ab,	// (0x00074c35) popup_number_entry_window_t2

0x94bd,	// (0x00074c47) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007a850) popup_number_entry_window_t

0x94cf,	// (0x00074c59) text_title_cp2

0x94e2,	// (0x00074c6c) bg_popup_call_pane_cp_ParamLimits

0x94e2,	// (0x00074c6c) bg_popup_call_pane_cp

0x94f0,	// (0x00074c7a) call_thumbnail_pane

0x94f8,	// (0x00074c82) popup_call_audio_in_window_g1_ParamLimits

0x94f8,	// (0x00074c82) popup_call_audio_in_window_g1

0x9504,	// (0x00074c8e) popup_call_audio_in_window_g2_ParamLimits

0x9504,	// (0x00074c8e) popup_call_audio_in_window_g2

0x9510,	// (0x00074c9a) popup_call_audio_in_window_g3_ParamLimits

0x9510,	// (0x00074c9a) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0007a859) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0007a859) popup_call_audio_in_window_g

0x951c,	// (0x00074ca6) popup_call_audio_in_window_t1_ParamLimits

0x951c,	// (0x00074ca6) popup_call_audio_in_window_t1

0x9538,	// (0x00074cc2) popup_call_audio_in_window_t2_ParamLimits

0x9538,	// (0x00074cc2) popup_call_audio_in_window_t2

0x9554,	// (0x00074cde) popup_call_audio_in_window_t3_ParamLimits

0x9554,	// (0x00074cde) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007a860) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007a860) popup_call_audio_in_window_t

0x94e2,	// (0x00074c6c) bg_popup_call_pane_cp01_ParamLimits

0x94e2,	// (0x00074c6c) bg_popup_call_pane_cp01

0x94f0,	// (0x00074c7a) call_thumbnail_pane_cp02

0x9cf7,	// (0x00075481) call_type_pane_cp022

0x9cff,	// (0x00075489) popup_call_audio_out_window_g1_ParamLimits

0x9cff,	// (0x00075489) popup_call_audio_out_window_g1

0x9d11,	// (0x0007549b) popup_call_audio_out_window_g2_ParamLimits

0x9d11,	// (0x0007549b) popup_call_audio_out_window_g2

0x9d1d,	// (0x000754a7) popup_call_audio_out_window_g3_ParamLimits

0x9d1d,	// (0x000754a7) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0007a867) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0007a867) popup_call_audio_out_window_g

0x9d2f,	// (0x000754b9) popup_call_audio_out_window_t1_ParamLimits

0x9d2f,	// (0x000754b9) popup_call_audio_out_window_t1

0x9d47,	// (0x000754d1) popup_call_audio_out_window_t2_ParamLimits

0x9d47,	// (0x000754d1) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007a86e) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007a86e) popup_call_audio_out_window_t

0x9d5c,	// (0x000754e6) bg_popup_call_pane_ParamLimits

0x9d5c,	// (0x000754e6) bg_popup_call_pane

0x06b7,	// (0x0006be41) call_thumbnail_pane_cp_ParamLimits

0x06b7,	// (0x0006be41) call_thumbnail_pane_cp

0x9de0,	// (0x0007556a) call_type_pane_cp01_ParamLimits

0x9de0,	// (0x0007556a) call_type_pane_cp01

0x9e24,	// (0x000755ae) popup_call_audio_first_window_g1_ParamLimits

0x9e24,	// (0x000755ae) popup_call_audio_first_window_g1

0x9e70,	// (0x000755fa) popup_call_audio_first_window_g2_ParamLimits

0x9e70,	// (0x000755fa) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0007a873) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0007a873) popup_call_audio_first_window_g

0x9eb4,	// (0x0007563e) popup_call_audio_first_window_t1_ParamLimits

0x9eb4,	// (0x0007563e) popup_call_audio_first_window_t1

0x9f60,	// (0x000756ea) popup_call_audio_first_window_t4_ParamLimits

0x9f60,	// (0x000756ea) popup_call_audio_first_window_t4

0x9fec,	// (0x00075776) popup_call_audio_first_window_t5_ParamLimits

0x9fec,	// (0x00075776) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0007a878) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0007a878) popup_call_audio_first_window_t

0xa01b,	// (0x000757a5) bg_popup_call_pane_cp02

0xa025,	// (0x000757af) call_type_pane_cp023

0xa02d,	// (0x000757b7) popup_call_audio_wait_window_g1

0xa5de,	// (0x00075d68) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007a87f) popup_call_audio_wait_window_g

0xa5e6,	// (0x00075d70) popup_call_audio_wait_window_t3

0xa5f4,	// (0x00075d7e) bg_popup_call_pane_cp03_ParamLimits

0xa5f4,	// (0x00075d7e) bg_popup_call_pane_cp03

0xa654,	// (0x00075dde) call_thumbnail_pane_cp011_ParamLimits

0xa654,	// (0x00075dde) call_thumbnail_pane_cp011

0xa660,	// (0x00075dea) call_type_pane_cp034_ParamLimits

0xa660,	// (0x00075dea) call_type_pane_cp034

0xa69c,	// (0x00075e26) popup_call_audio_second_window_g1_ParamLimits

0xa69c,	// (0x00075e26) popup_call_audio_second_window_g1

0xa6d8,	// (0x00075e62) popup_call_audio_second_window_g2_ParamLimits

0xa6d8,	// (0x00075e62) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0007a884) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0007a884) popup_call_audio_second_window_g

0xa714,	// (0x00075e9e) popup_call_audio_second_window_t1_ParamLimits

0xa714,	// (0x00075e9e) popup_call_audio_second_window_t1

0xa795,	// (0x00075f1f) popup_call_audio_second_window_t2_ParamLimits

0xa795,	// (0x00075f1f) popup_call_audio_second_window_t2

0xa7cb,	// (0x00075f55) popup_call_audio_second_window_t3_ParamLimits

0xa7cb,	// (0x00075f55) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0007a889) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0007a889) popup_call_audio_second_window_t

0xa01b,	// (0x000757a5) bg_popup_call_pane_cp04

0xa801,	// (0x00075f8b) list_conf_pane

0xa809,	// (0x00075f93) popup_call_audio_conf_window_t1

0xa817,	// (0x00075fa1) call_thumbnail_pane_g1

0xa81f,	// (0x00075fa9) bg_pinb_pane_ParamLimits

0xa81f,	// (0x00075fa9) bg_pinb_pane

0xa82d,	// (0x00075fb7) find_pinb_pane

0xa836,	// (0x00075fc0) listscroll_pinb_pane_ParamLimits

0xa836,	// (0x00075fc0) listscroll_pinb_pane

0xa845,	// (0x00075fcf) pinb_bg_pane_g1

0x06db,	// (0x0006be65) pinb_bg_pane_g2

0x06e7,	// (0x0006be71) pinb_bg_pane_g3

0x06f3,	// (0x0006be7d) pinb_bg_pane_g4

0x06ff,	// (0x0006be89) pinb_bg_pane_g5

0x070b,	// (0x0006be95) pinb_bg_pane_g6

0x0716,	// (0x0006bea0) pinb_bg_pane_g7

0x0721,	// (0x0006beab) pinb_bg_pane_g8

0x072c,	// (0x0006beb6) pinb_bg_pane_g9

0x0736,	// (0x0006bec0) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007a890) pinb_bg_pane_g

0x0753,	// (0x0006bedd) grid_pinb_pane

0x075c,	// (0x0006bee6) list_pinb_pane

0x0765,	// (0x0006beef) scroll_pane_cp01_ParamLimits

0x0765,	// (0x0006beef) scroll_pane_cp01

0xa84f,	// (0x00075fd9) find_pinb_pane_g1_ParamLimits

0xa84f,	// (0x00075fd9) find_pinb_pane_g1

0xa867,	// (0x00075ff1) find_pinb_pane_t1

0xa879,	// (0x00076003) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0007a8aa) find_pinb_pane_t

0xa88e,	// (0x00076018) input_focus_pane_cp01_ParamLimits

0xa88e,	// (0x00076018) input_focus_pane_cp01

0x0777,	// (0x0006bf01) cell_pinb_pane_ParamLimits

0x0777,	// (0x0006bf01) cell_pinb_pane

0x07a2,	// (0x0006bf2c) cell_pinb_pane_g1_ParamLimits

0x07a2,	// (0x0006bf2c) cell_pinb_pane_g1

0xa89a,	// (0x00076024) cell_pinb_pane_g2_ParamLimits

0xa89a,	// (0x00076024) cell_pinb_pane_g2

0xa8a6,	// (0x00076030) cell_pinb_pane_g3_ParamLimits

0xa8a6,	// (0x00076030) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007a8af) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007a8af) cell_pinb_pane_g

0xa01b,	// (0x000757a5) grid_highlight_pane_cp01

0x07b5,	// (0x0006bf3f) list_pinb_item_pane_ParamLimits

0x07b5,	// (0x0006bf3f) list_pinb_item_pane

0xa01b,	// (0x000757a5) list_highlight_pane_cp02

0x07c8,	// (0x0006bf52) list_pinb_item_pane_g1_ParamLimits

0x07c8,	// (0x0006bf52) list_pinb_item_pane_g1

0x07d5,	// (0x0006bf5f) list_pinb_item_pane_g2_ParamLimits

0x07d5,	// (0x0006bf5f) list_pinb_item_pane_g2

0x07e1,	// (0x0006bf6b) list_pinb_item_pane_g3_ParamLimits

0x07e1,	// (0x0006bf6b) list_pinb_item_pane_g3

0x07f2,	// (0x0006bf7c) list_pinb_item_pane_g4_ParamLimits

0x07f2,	// (0x0006bf7c) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0007a8b6) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0007a8b6) list_pinb_item_pane_g

0x07fe,	// (0x0006bf88) list_pinb_item_pane_t1_ParamLimits

0x07fe,	// (0x0006bf88) list_pinb_item_pane_t1

0x0833,	// (0x0006bfbd) calc_display_pane

0x0858,	// (0x0006bfe2) calc_paper_pane

0x087b,	// (0x0006c005) grid_calc_pane

0xa01b,	// (0x000757a5) bg_list_pane_cp01

0x08a9,	// (0x0006c033) clock_g1

0x08b1,	// (0x0006c03b) clock_g2

0x0001,

0xf135,	// (0x0007a8bf) clock_g

0x08b9,	// (0x0006c043) clock_t1_ParamLimits

0x08b9,	// (0x0006c043) clock_t1

0x08ce,	// (0x0006c058) clock_t2_ParamLimits

0x08ce,	// (0x0006c058) clock_t2

0x08e0,	// (0x0006c06a) clock_t3_ParamLimits

0x08e0,	// (0x0006c06a) clock_t3

0x08f2,	// (0x0006c07c) clock_t4_ParamLimits

0x08f2,	// (0x0006c07c) clock_t4

0x0904,	// (0x0006c08e) clock_t5_ParamLimits

0x0904,	// (0x0006c08e) clock_t5

0x0919,	// (0x0006c0a3) clock_t6_ParamLimits

0x0919,	// (0x0006c0a3) clock_t6

0x092b,	// (0x0006c0b5) clock_t7_ParamLimits

0x092b,	// (0x0006c0b5) clock_t7

0x093d,	// (0x0006c0c7) clock_t8_ParamLimits

0x093d,	// (0x0006c0c7) clock_t8

0x0951,	// (0x0006c0db) clock_t9_ParamLimits

0x0951,	// (0x0006c0db) clock_t9

0x0008,

0xf13a,	// (0x0007a8c4) clock_t_ParamLimits

0xf13a,	// (0x0007a8c4) clock_t

0xa8b2,	// (0x0007603c) popup_clock_analogue_window_cp02

0xa8b2,	// (0x0007603c) popup_clock_digital_window_cp01

0xa8ba,	// (0x00076044) listscroll_help_pane

0xa01b,	// (0x000757a5) phob_pre_status_pane

0xa8c4,	// (0x0007604e) grid_qdial_pane

0xa81f,	// (0x00075fa9) listscroll_mce_pane

0xa81f,	// (0x00075fa9) bg_notes_pane

0xa8ce,	// (0x00076058) list_notes_pane

0x0965,	// (0x0006c0ef) scroll_pane_cp06

0xa8dc,	// (0x00076066) bg_calc_paper_pane

0x956f,	// (0x00074cf9) list_calc_pane

0xa8f0,	// (0x0007607a) bg_calc_display_pane

0x0979,	// (0x0006c103) calc_display_pane_t1

0x098b,	// (0x0006c115) calc_display_pane_t2

0x9589,	// (0x00074d13) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0007a8d7) calc_display_pane_t

0x099d,	// (0x0006c127) cell_calc_pane_ParamLimits

0x099d,	// (0x0006c127) cell_calc_pane

0xa8fc,	// (0x00076086) bg_calc_paper_pane_g1

0xa908,	// (0x00076092) bg_calc_paper_pane_g2

0xa914,	// (0x0007609e) bg_calc_paper_pane_g3

0xa920,	// (0x000760aa) bg_calc_paper_pane_g4

0xa92c,	// (0x000760b6) bg_calc_paper_pane_g5

0x09d2,	// (0x0006c15c) bg_calc_paper_pane_g6

0x09e1,	// (0x0006c16b) bg_calc_paper_pane_g7

0x09f0,	// (0x0006c17a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0007a8de) bg_calc_paper_pane_g

0x0a03,	// (0x0006c18d) calc_bg_paper_pane_g9

0x0a16,	// (0x0006c1a0) list_calc_item_pane_ParamLimits

0x0a16,	// (0x0006c1a0) list_calc_item_pane

0xa938,	// (0x000760c2) list_calc_item_pane_g1

0x959b,	// (0x00074d25) list_calc_item_pane_t1_ParamLimits

0x959b,	// (0x00074d25) list_calc_item_pane_t1

0x0a2b,	// (0x0006c1b5) list_calc_item_pane_t2_ParamLimits

0x0a2b,	// (0x0006c1b5) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0007a8ef) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0007a8ef) list_calc_item_pane_t

0xa945,	// (0x000760cf) cell_calc_pane_g1

0xa94f,	// (0x000760d9) grid_highlight_pane_cp02

0xc9a1,	// (0x0007812b) bg_calc_display_pane_g1

0x0a5d,	// (0x0006c1e7) bg_calc_display_pane_g2

0xa971,	// (0x000760fb) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0007a8f9) bg_calc_display_pane_g

0x0a67,	// (0x0006c1f1) cell_qdial_pane_ParamLimits

0x0a67,	// (0x0006c1f1) cell_qdial_pane

0x0a7b,	// (0x0006c205) cell_qdial_pane_g1_ParamLimits

0x0a7b,	// (0x0006c205) cell_qdial_pane_g1

0x0a91,	// (0x0006c21b) cell_qdial_pane_g2_ParamLimits

0x0a91,	// (0x0006c21b) cell_qdial_pane_g2

0xa97a,	// (0x00076104) cell_qdial_pane_g3_ParamLimits

0xa97a,	// (0x00076104) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0007a900) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0007a900) cell_qdial_pane_g

0x0ab7,	// (0x0006c241) cell_qdial_pane_t1_ParamLimits

0x0ab7,	// (0x0006c241) cell_qdial_pane_t1

0x0acf,	// (0x0006c259) cell_qdial_pane_t2_ParamLimits

0x0acf,	// (0x0006c259) cell_qdial_pane_t2

0x0ae2,	// (0x0006c26c) cell_qdial_pane_t3_ParamLimits

0x0ae2,	// (0x0006c26c) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0007a909) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0007a909) cell_qdial_pane_t

0xa01b,	// (0x000757a5) grid_highlight_pane_cp04

0xa986,	// (0x00076110) thumbnail_qdial_pane_ParamLimits

0xa986,	// (0x00076110) thumbnail_qdial_pane

0xa9e2,	// (0x0007616c) list_help_pane

0xa9eb,	// (0x00076175) scroll_pane_cp02

0xa9f4,	// (0x0007617e) help_list_pane_t1_ParamLimits

0xa9f4,	// (0x0007617e) help_list_pane_t1

0x95ad,	// (0x00074d37) bg_notes_pane_g2

0x95b5,	// (0x00074d3f) bg_notes_pane_g3

0x95bd,	// (0x00074d47) notes_bg_pane_g1

0x95c5,	// (0x00074d4f) notes_bg_pane_g4

0x95cd,	// (0x00074d57) notes_bg_pane_g5

0x95d5,	// (0x00074d5f) notes_bg_pane_g6

0x95dd,	// (0x00074d67) notes_bg_pane_g7

0x95e5,	// (0x00074d6f) notes_bg_pane_g8

0x95ed,	// (0x00074d77) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0007a927) notes_bg_pane_g

0x0af5,	// (0x0006c27f) list_notes_text_pane_ParamLimits

0x0af5,	// (0x0006c27f) list_notes_text_pane

0xaa12,	// (0x0007619c) list_notes_text_pane_g1

0x0b0b,	// (0x0006c295) list_notes_text_pane_t1

0x0b19,	// (0x0006c2a3) listscroll_cale_week_pane

0x0b45,	// (0x0006c2cf) bg_cale_heading_pane

0xaa35,	// (0x000761bf) bg_cale_pane_cp01

0x0b5d,	// (0x0006c2e7) cale_week_corner_pane

0x0b7c,	// (0x0006c306) cale_week_day_heading_pane

0x0b99,	// (0x0006c323) cale_week_scroll_pane_g1

0x0bac,	// (0x0006c336) cale_week_scroll_pane_g2

0x0bc4,	// (0x0006c34e) cale_week_scroll_pane_g3

0x0bdc,	// (0x0006c366) cale_week_scroll_pane_g4

0x0bf4,	// (0x0006c37e) cale_week_scroll_pane_g5

0x0c14,	// (0x0006c39e) cale_week_scroll_pane_g6

0x0c34,	// (0x0006c3be) cale_week_scroll_pane_g7

0x0c54,	// (0x0006c3de) cale_week_scroll_pane_g8

0x0c78,	// (0x0006c402) cale_week_scroll_pane_g9

0x0c90,	// (0x0006c41a) cale_week_scroll_pane_g10

0x0ca8,	// (0x0006c432) cale_week_scroll_pane_g11

0x0cc0,	// (0x0006c44a) cale_week_scroll_pane_g12

0x0cd8,	// (0x0006c462) cale_week_scroll_pane_g13

0x0cd8,	// (0x0006c462) cale_week_scroll_pane_g14

0x0cd8,	// (0x0006c462) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0007a936) cale_week_scroll_pane_g

0x0d14,	// (0x0006c49e) cale_week_time_pane

0x0d38,	// (0x0006c4c2) grid_cale_week_pane

0xaa64,	// (0x000761ee) scroll_pane_cp08

0x0d5e,	// (0x0006c4e8) cell_cale_week_pane_ParamLimits

0x0d5e,	// (0x0006c4e8) cell_cale_week_pane

0x0dec,	// (0x0006c576) cale_week_day_heading_pane_t1

0x0e16,	// (0x0006c5a0) cale_week_day_heading_pane_t2

0x0e45,	// (0x0006c5cf) cale_week_day_heading_pane_t3

0x0e74,	// (0x0006c5fe) cale_week_day_heading_pane_t4

0x0ea3,	// (0x0006c62d) cale_week_day_heading_pane_t5

0x0eda,	// (0x0006c664) cale_week_day_heading_pane_t6

0x0f11,	// (0x0006c69b) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0007a957) cale_week_day_heading_pane_t

0xaa81,	// (0x0007620b) bg_cale_side_pane

0x0f3b,	// (0x0006c6c5) cale_week_time_pane_t1

0x0f55,	// (0x0006c6df) cale_week_time_pane_t2

0x0f6f,	// (0x0006c6f9) cale_week_time_pane_t3

0x0f89,	// (0x0006c713) cale_week_time_pane_t4

0x0fa3,	// (0x0006c72d) cale_week_time_pane_t5

0x0fbd,	// (0x0006c747) cale_week_time_pane_t6

0x0fd7,	// (0x0006c761) cale_week_time_pane_t7

0x0ff1,	// (0x0006c77b) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0007a966) cale_week_time_pane_t

0x1011,	// (0x0006c79b) cell_cale_week_pane_g2

0x1035,	// (0x0006c7bf) cell_cale_week_pane_g3_ParamLimits

0x1035,	// (0x0006c7bf) cell_cale_week_pane_g3

0xaa8f,	// (0x00076219) grid_highlight_pane_cp07

0xaa97,	// (0x00076221) listscroll_gms_pane

0xaaa1,	// (0x0007622b) grid_gms_pane

0xaaaa,	// (0x00076234) listscroll_gms_pane_g1

0xaab2,	// (0x0007623c) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0007a977) listscroll_gms_pane_g

0x104d,	// (0x0006c7d7) scroll_pane_cp010

0x1058,	// (0x0006c7e2) cell_gms_pane_ParamLimits

0x1058,	// (0x0006c7e2) cell_gms_pane

0x106a,	// (0x0006c7f4) cell_gms_pane_g1

0xaaba,	// (0x00076244) cell_gms_pane_g2

0xaac2,	// (0x0007624c) cell_gms_pane_g3

0xaacb,	// (0x00076255) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0007a97c) cell_gms_pane_g

0xaad4,	// (0x0007625e) grid_highlight_pane_cp09

0x3339,	// (0x0006eac3) phob_pre_status_pane_g1

0x3341,	// (0x0006eacb) phob_pre_status_pane_g2

0x3349,	// (0x0006ead3) phob_pre_status_pane_g3

0x3351,	// (0x0006eadb) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0007ad7a) phob_pre_status_pane_g

0x3361,	// (0x0006eaeb) phob_pre_status_pane_t1

0x336f,	// (0x0006eaf9) phob_pre_status_pane_t2

0x337f,	// (0x0006eb09) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0007ad85) phob_pre_status_pane_t

0xaadc,	// (0x00076266) bg_list_pane_cp05

0x107a,	// (0x0006c804) grid_vorec_pane

0x1082,	// (0x0006c80c) vorec_t1

0x1090,	// (0x0006c81a) vorec_t2

0x109e,	// (0x0006c828) vorec_t3

0x10ac,	// (0x0006c836) vorec_t4

0x93b6,	// (0x00074b40) vorec_t5

0x93c4,	// (0x00074b4e) vorec_t6

0x0004,

0xf1fb,	// (0x0007a985) vorec_t

0x93d2,	// (0x00074b5c) wait_bar_pane_cp01

0x10c8,	// (0x0006c852) cell_vorec_pane_ParamLimits

0x10c8,	// (0x0006c852) cell_vorec_pane

0x95f5,	// (0x00074d7f) cell_vorec_pane_g1

0xa01b,	// (0x000757a5) grid_highlight_pane_cp05

0x10f3,	// (0x0006c87d) cams_zoom_pane

0x1102,	// (0x0006c88c) image_vga_pane

0x111c,	// (0x0006c8a6) main_camera_pane_g1

0x112e,	// (0x0006c8b8) main_camera_pane_g2

0x113e,	// (0x0006c8c8) main_camera_pane_g3

0x114e,	// (0x0006c8d8) main_camera_pane_g4

0x115e,	// (0x0006c8e8) main_camera_pane_g5

0x116e,	// (0x0006c8f8) main_camera_pane_g6

0x117e,	// (0x0006c908) main_camera_pane_g7

0x0007,

0xf206,	// (0x0007a990) main_camera_pane_g

0x118e,	// (0x0006c918) main_camera_pane_t1

0x11a4,	// (0x0006c92e) main_camera_pane_t2

0x0001,

0xf217,	// (0x0007a9a1) main_camera_pane_t

0x11de,	// (0x0006c968) cams_zoom_pane_cp_ParamLimits

0x11de,	// (0x0006c968) cams_zoom_pane_cp

0x1206,	// (0x0006c990) image_cif_pane_ParamLimits

0x1206,	// (0x0006c990) image_cif_pane

0x1241,	// (0x0006c9cb) image_subqcif_pane

0x1249,	// (0x0006c9d3) main_video_pane_g1_ParamLimits

0x1249,	// (0x0006c9d3) main_video_pane_g1

0x126d,	// (0x0006c9f7) main_video_pane_g2_ParamLimits

0x126d,	// (0x0006c9f7) main_video_pane_g2

0x12a1,	// (0x0006ca2b) main_video_pane_g3_ParamLimits

0x12a1,	// (0x0006ca2b) main_video_pane_g3

0x12cf,	// (0x0006ca59) main_video_pane_g4_ParamLimits

0x12cf,	// (0x0006ca59) main_video_pane_g4

0x12fd,	// (0x0006ca87) main_video_pane_g5_ParamLimits

0x12fd,	// (0x0006ca87) main_video_pane_g5

0xaaf0,	// (0x0007627a) main_video_pane_g6_ParamLimits

0xaaf0,	// (0x0007627a) main_video_pane_g6

0x0006,

0xf21c,	// (0x0007a9a6) main_video_pane_g_ParamLimits

0xf21c,	// (0x0007a9a6) main_video_pane_g

0x1326,	// (0x0006cab0) main_video_pane_t1_ParamLimits

0x1326,	// (0x0006cab0) main_video_pane_t1

0xab0a,	// (0x00076294) cams_zoom_pane_g1

0xab13,	// (0x0007629d) cams_zoom_pane_g2

0xab1c,	// (0x000762a6) cams_zoom_pane_g3

0xab25,	// (0x000762af) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0007a9b5) cams_zoom_pane_g

0x1383,	// (0x0006cb0d) grid_cams_pane

0x139d,	// (0x0006cb27) linegrid_cams_pane

0x13b0,	// (0x0006cb3a) cell_cams_pane_ParamLimits

0x13b0,	// (0x0006cb3a) cell_cams_pane

0xab2e,	// (0x000762b8) cams_burst_image_pane

0xab36,	// (0x000762c0) cell_cams_pane_g1

0xa01b,	// (0x000757a5) grid_highlight_pane_cp03

0xa945,	// (0x000760cf) mp_bg_pane_g1

0xa01b,	// (0x000757a5) bg_list_pane_cp03

0xc87b,	// (0x00078005) bg_mp_pane

0xc883,	// (0x0007800d) grid_mp_pane

0xc88b,	// (0x00078015) media_player_g1

0xc893,	// (0x0007801d) media_player_t1

0xc8a1,	// (0x0007802b) media_player_t2

0xc8af,	// (0x00078039) media_player_t3

0xc8bd,	// (0x00078047) media_player_t4

0xc8cb,	// (0x00078055) media_player_t5

0xc8d9,	// (0x00078063) media_player_t6

0xc8e7,	// (0x00078071) media_player_t7

0x0006,

0xf5da,	// (0x0007ad64) media_player_t

0xc8f5,	// (0x0007807f) wait_bar_pane_cp02

0xf5bf,	// (0x0007ad49) main_usb_pane_t

0x3330,	// (0x0006eaba) cell_mp_pane

0xa945,	// (0x000760cf) cell_mp_pane_g1

0xa01b,	// (0x000757a5) grid_highlight_pane_cp06

0xab3e,	// (0x000762c8) grid_skin_colour_pane

0xab46,	// (0x000762d0) list_highlight_pane_cp03

0x14e6,	// (0x0006cc70) skin_g1

0xab4e,	// (0x000762d8) skin_t1

0xab5d,	// (0x000762e7) skin_t2

0x0001,

0xf260,	// (0x0007a9ea) skin_t

0x14ee,	// (0x0006cc78) cell_skin_colour_pane_ParamLimits

0x14ee,	// (0x0006cc78) cell_skin_colour_pane

0xab6b,	// (0x000762f5) cell_skin_colour_pane_g1

0x1567,	// (0x0006ccf1) call_video_g1_ParamLimits

0x1567,	// (0x0006ccf1) call_video_g1

0x1583,	// (0x0006cd0d) call_video_g2_ParamLimits

0x1583,	// (0x0006cd0d) call_video_g2

0x0001,

0xf265,	// (0x0007a9ef) call_video_g_ParamLimits

0xf265,	// (0x0007a9ef) call_video_g

0x15d5,	// (0x0006cd5f) call_video_uplink_pane_cp1_ParamLimits

0x15d5,	// (0x0006cd5f) call_video_uplink_pane_cp1

0xab7d,	// (0x00076307) call_video_uplink_pane_cp2

0x1674,	// (0x0006cdfe) video_down_crop_pane_ParamLimits

0x1674,	// (0x0006cdfe) video_down_crop_pane

0x175d,	// (0x0006cee7) video_down_pane_ParamLimits

0x175d,	// (0x0006cee7) video_down_pane

0xab85,	// (0x0007630f) video_down_subqcif_pane_ParamLimits

0xab85,	// (0x0007630f) video_down_subqcif_pane

0xab9d,	// (0x00076327) video_down_subqcif_pane_cp_ParamLimits

0xab9d,	// (0x00076327) video_down_subqcif_pane_cp

0xabc3,	// (0x0007634d) im_reading_pane_ParamLimits

0xabc3,	// (0x0007634d) im_reading_pane

0x186d,	// (0x0006cff7) im_writing_pane_ParamLimits

0x186d,	// (0x0006cff7) im_writing_pane

0x1883,	// (0x0006d00d) im_reading_pane_t1

0xabdd,	// (0x00076367) list_im_pane

0xabee,	// (0x00076378) scroll_pane_cp07

0x18bd,	// (0x0006d047) im_writing_pane_t1_ParamLimits

0x18bd,	// (0x0006d047) im_writing_pane_t1

0xac07,	// (0x00076391) im_writing_pane_t2_ParamLimits

0xac07,	// (0x00076391) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0007a9f9) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0007a9f9) im_writing_pane_t

0xa01b,	// (0x000757a5) input_focus_pane_cp04

0xa01b,	// (0x000757a5) input_focus_pane_cp05

0x18d2,	// (0x0006d05c) list_im_single_pane_ParamLimits

0x18d2,	// (0x0006d05c) list_im_single_pane

0x18e7,	// (0x0006d071) list_single_im_pane_t1

0x32f0,	// (0x0006ea7a) blid_accuracy_pane

0x32f8,	// (0x0006ea82) blid_compass_pane

0x3302,	// (0x0006ea8c) main_location_t1

0x3312,	// (0x0006ea9c) main_location_t2

0x3322,	// (0x0006eaac) main_location_t3

0x0002,

0xf5e9,	// (0x0007ad73) main_location_t

0xa01b,	// (0x000757a5) aid_levels_location

0xa945,	// (0x000760cf) blid_accuracy_pane_g1

0xa945,	// (0x000760cf) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0007aa5b) blid_accuracy_pane_g

0xac4f,	// (0x000763d9) wml_content_pane

0xac8d,	// (0x00076417) wml_button_pane_ParamLimits

0xac8d,	// (0x00076417) wml_button_pane

0x18f6,	// (0x0006d080) wml_list_single_large_pane_ParamLimits

0x18f6,	// (0x0006d080) wml_list_single_large_pane

0x190b,	// (0x0006d095) wml_list_single_medium_pane_ParamLimits

0x190b,	// (0x0006d095) wml_list_single_medium_pane

0x1922,	// (0x0006d0ac) wml_list_single_small_pane_ParamLimits

0x1922,	// (0x0006d0ac) wml_list_single_small_pane

0xaca1,	// (0x0007642b) wml_selection_box_pane_ParamLimits

0xaca1,	// (0x0007642b) wml_selection_box_pane

0xacb4,	// (0x0007643e) wml_list_single_pane_t1

0xacc3,	// (0x0007644d) wml_list_single_medium_pane_t1

0xacd2,	// (0x0007645c) wml_list_single_large_pane_t1

0xace1,	// (0x0007646b) input_focus_pane_cp02_ParamLimits

0xace1,	// (0x0007646b) input_focus_pane_cp02

0xacf4,	// (0x0007647e) wml_selection_box_pane_g1

0xacfd,	// (0x00076487) wml_selection_box_pane_t1_ParamLimits

0xacfd,	// (0x00076487) wml_selection_box_pane_t1

0xa81f,	// (0x00075fa9) bg_wml_button_pane_ParamLimits

0xa81f,	// (0x00075fa9) bg_wml_button_pane

0xad15,	// (0x0007649f) wml_button_pane_g1

0xad1d,	// (0x000764a7) wml_button_pane_t1

0xad15,	// (0x0007649f) wml_button_bg_pane_g1

0xad2d,	// (0x000764b7) wml_button_bg_pane_g2

0xad35,	// (0x000764bf) wml_button_bg_pane_g3

0xad3d,	// (0x000764c7) wml_button_bg_pane_g4

0xad45,	// (0x000764cf) wml_button_bg_pane_g5

0xad4d,	// (0x000764d7) wml_button_bg_pane_g6

0xad55,	// (0x000764df) wml_button_bg_pane_g7

0xad5d,	// (0x000764e7) wml_button_bg_pane_g8

0xad65,	// (0x000764ef) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0007a9fe) wml_button_bg_pane_g

0x193b,	// (0x0006d0c5) bg_list_pane_cp02

0xad6d,	// (0x000764f7) mce_header_pane_ParamLimits

0xad6d,	// (0x000764f7) mce_header_pane

0xad83,	// (0x0007650d) mce_icon_pane

0xad83,	// (0x0007650d) mce_image_pane

0xad8c,	// (0x00076516) mce_text_pane_ParamLimits

0xad8c,	// (0x00076516) mce_text_pane

0x1943,	// (0x0006d0cd) scroll_pane_cp03

0xac85,	// (0x0007640f) scroll_pane_cp04

0xad9f,	// (0x00076529) scroll_pane_cp05_ParamLimits

0xad9f,	// (0x00076529) scroll_pane_cp05

0x194d,	// (0x0006d0d7) mce_header_field_pane_ParamLimits

0x194d,	// (0x0006d0d7) mce_header_field_pane

0x1964,	// (0x0006d0ee) mce_header_field_pane_2_ParamLimits

0x1964,	// (0x0006d0ee) mce_header_field_pane_2

0x197a,	// (0x0006d104) mce_header_field_pane_3

0x1982,	// (0x0006d10c) list_single_mce_message_pane_ParamLimits

0x1982,	// (0x0006d10c) list_single_mce_message_pane

0x1998,	// (0x0006d122) list_single_mce_smart_pane_ParamLimits

0x1998,	// (0x0006d122) list_single_mce_smart_pane

0xadab,	// (0x00076535) input_focus_pane_cp03

0xadb4,	// (0x0007653e) list_header_data_pane

0x19b9,	// (0x0006d143) mce_header_field_pane_t1

0x19c9,	// (0x0006d153) list_single_mce_header_pane_ParamLimits

0x19c9,	// (0x0006d153) list_single_mce_header_pane

0xadbc,	// (0x00076546) list_single_mce_header_pane_t1

0xadcb,	// (0x00076555) list_single_mce_message_pane_g1

0xadd3,	// (0x0007655d) list_single_mce_message_pane_t1

0x1a03,	// (0x0006d18d) bg_cale_heading_pane_cp01_ParamLimits

0x1a03,	// (0x0006d18d) bg_cale_heading_pane_cp01

0xade1,	// (0x0007656b) bg_cale_pane_cp02_ParamLimits

0xade1,	// (0x0007656b) bg_cale_pane_cp02

0x1a3d,	// (0x0006d1c7) cale_month_corner_pane

0x1a5c,	// (0x0006d1e6) cale_month_day_heading_pane_ParamLimits

0x1a5c,	// (0x0006d1e6) cale_month_day_heading_pane

0x1aae,	// (0x0006d238) cale_month_pane_g1_ParamLimits

0x1aae,	// (0x0006d238) cale_month_pane_g1

0x1add,	// (0x0006d267) cale_month_pane_g2_ParamLimits

0x1add,	// (0x0006d267) cale_month_pane_g2

0x1b0d,	// (0x0006d297) cale_month_pane_g3_ParamLimits

0x1b0d,	// (0x0006d297) cale_month_pane_g3

0x1b49,	// (0x0006d2d3) cale_month_pane_g4_ParamLimits

0x1b49,	// (0x0006d2d3) cale_month_pane_g4

0x1b85,	// (0x0006d30f) cale_month_pane_g5_ParamLimits

0x1b85,	// (0x0006d30f) cale_month_pane_g5

0x1bcd,	// (0x0006d357) cale_month_pane_g6_ParamLimits

0x1bcd,	// (0x0006d357) cale_month_pane_g6

0x1c19,	// (0x0006d3a3) cale_month_pane_g7_ParamLimits

0x1c19,	// (0x0006d3a3) cale_month_pane_g7

0x1c69,	// (0x0006d3f3) cale_month_pane_g8_ParamLimits

0x1c69,	// (0x0006d3f3) cale_month_pane_g8

0x1cbd,	// (0x0006d447) cale_month_pane_g9_ParamLimits

0x1cbd,	// (0x0006d447) cale_month_pane_g9

0x1d0f,	// (0x0006d499) cale_month_pane_g10_ParamLimits

0x1d0f,	// (0x0006d499) cale_month_pane_g10

0x1d61,	// (0x0006d4eb) cale_month_pane_g11_ParamLimits

0x1d61,	// (0x0006d4eb) cale_month_pane_g11

0x1db3,	// (0x0006d53d) cale_month_pane_g12_ParamLimits

0x1db3,	// (0x0006d53d) cale_month_pane_g12

0x1e05,	// (0x0006d58f) cale_month_pane_g13_ParamLimits

0x1e05,	// (0x0006d58f) cale_month_pane_g13

0x000c,

0xf287,	// (0x0007aa11) cale_month_pane_g_ParamLimits

0xf287,	// (0x0007aa11) cale_month_pane_g

0x1e57,	// (0x0006d5e1) cale_month_week_pane

0x1e7b,	// (0x0006d605) grid_cale_month_pane_ParamLimits

0x1e7b,	// (0x0006d605) grid_cale_month_pane

0x1ec4,	// (0x0006d64e) cale_month_day_heading_pane_t1

0x1f06,	// (0x0006d690) cale_month_day_heading_pane_t2

0x1f3b,	// (0x0006d6c5) cale_month_day_heading_pane_t3

0x1f70,	// (0x0006d6fa) cale_month_day_heading_pane_t4

0x1fad,	// (0x0006d737) cale_month_day_heading_pane_t5

0x1ff2,	// (0x0006d77c) cale_month_day_heading_pane_t6

0x2037,	// (0x0006d7c1) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0007aa2c) cale_month_day_heading_pane_t

0xaa81,	// (0x0007620b) bg_cale_side_pane_cp01

0x2084,	// (0x0006d80e) cale_month_week_pane_t1

0x209d,	// (0x0006d827) cale_month_week_pane_t2

0x20b6,	// (0x0006d840) cale_month_week_pane_t3

0x20cf,	// (0x0006d859) cale_month_week_pane_t4

0x20e8,	// (0x0006d872) cale_month_week_pane_t5

0x2101,	// (0x0006d88b) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0007aa3b) cale_month_week_pane_t

0x211a,	// (0x0006d8a4) cell_cale_month_pane_ParamLimits

0x211a,	// (0x0006d8a4) cell_cale_month_pane

0x95ff,	// (0x00074d89) cell_cale_month_pane_g1

0x2272,	// (0x0006d9fc) cell_cale_month_pane_t1_ParamLimits

0x2272,	// (0x0006d9fc) cell_cale_month_pane_t1

0xaa8f,	// (0x00076219) grid_highlight_pane_cp08

0xa945,	// (0x000760cf) main_smil_g1

0x229e,	// (0x0006da28) smil_status_pane

0xae20,	// (0x000765aa) smil_text_pane

0xc75b,	// (0x00077ee5) bg_popup_call3_rect_pane_g8

0xc763,	// (0x00077eed) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0007acf4) bg_popup_call3_rect_pane_g

0xc9ff,	// (0x00078189) smil_status_volume_pane_g1

0xae2a,	// (0x000765b4) smil_status_pane_t1

0x9745,	// (0x00074ecf) volume_smil_pane

0xae41,	// (0x000765cb) list_smil_text_pane

0x22b3,	// (0x0006da3d) scroll_pane_cp011

0x22be,	// (0x0006da48) smil_text_list_pane_t1_ParamLimits

0x22be,	// (0x0006da48) smil_text_list_pane_t1

0x960b,	// (0x00074d95) aid_volume_smil_ParamLimits

0x960b,	// (0x00074d95) aid_volume_smil

0xa945,	// (0x000760cf) smil_volume_pane_g1

0xa945,	// (0x000760cf) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0007aa5b) smil_volume_pane_g

0x0b19,	// (0x0006c2a3) listscroll_cale_day_pane

0xae4b,	// (0x000765d5) bg_cale_pane

0xae63,	// (0x000765ed) list_cale_pane

0xae86,	// (0x00076610) scroll_pane_cp09

0xae97,	// (0x00076621) cale_bg_pane_g1

0xae9f,	// (0x00076629) cale_bg_pane_g2

0xaea7,	// (0x00076631) cale_bg_pane_g3

0xaeaf,	// (0x00076639) cale_bg_pane_g4

0xaeb7,	// (0x00076641) cale_bg_pane_g5

0xaebf,	// (0x00076649) cale_bg_pane_g6

0xaec7,	// (0x00076651) cale_bg_pane_g7

0xaecf,	// (0x00076659) cale_bg_pane_g8

0xaed7,	// (0x00076661) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0007aa60) cale_bg_pane_g

0x230a,	// (0x0006da94) list_cale_time_pane_ParamLimits

0x230a,	// (0x0006da94) list_cale_time_pane

0xaedf,	// (0x00076669) list_cale_time_pane_g1_ParamLimits

0xaedf,	// (0x00076669) list_cale_time_pane_g1

0xaeeb,	// (0x00076675) list_cale_time_pane_g2_ParamLimits

0xaeeb,	// (0x00076675) list_cale_time_pane_g2

0x2320,	// (0x0006daaa) list_cale_time_pane_g3_ParamLimits

0x2320,	// (0x0006daaa) list_cale_time_pane_g3

0x232e,	// (0x0006dab8) list_cale_time_pane_g4_ParamLimits

0x232e,	// (0x0006dab8) list_cale_time_pane_g4

0x233c,	// (0x0006dac6) list_cale_time_pane_g5_ParamLimits

0x233c,	// (0x0006dac6) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0007aa73) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0007aa73) list_cale_time_pane_g

0xaf05,	// (0x0007668f) list_cale_time_pane_t1_ParamLimits

0xaf05,	// (0x0007668f) list_cale_time_pane_t1

0xaf2d,	// (0x000766b7) list_cale_time_pane_t2_ParamLimits

0xaf2d,	// (0x000766b7) list_cale_time_pane_t2

0x26be,	// (0x0006de48) aid_blid_cardinal_pane

0x26fc,	// (0x0006de86) compass_pane_t4

0xaf55,	// (0x000766df) list_cale_time_pane_t4_ParamLimits

0xaf55,	// (0x000766df) list_cale_time_pane_t4

0x270a,	// (0x0006de94) compass_pane_t5

0x2718,	// (0x0006dea2) compass_pane_t6

0x2726,	// (0x0006deb0) compass_pane_t7

0xb3d9,	// (0x00076b63) navi_pane_cc_t1

0xb5b6,	// (0x00076d40) aid_phob_thumbnail_center_pane

0x2d06,	// (0x0006e490) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0007aa80) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0007aa80) list_cale_time_pane_t

0x94e2,	// (0x00074c6c) bg_popup_window_pane_cp02_ParamLimits

0x94e2,	// (0x00074c6c) bg_popup_window_pane_cp02

0xaf7d,	// (0x00076707) heading_pane_cp01_ParamLimits

0xaf7d,	// (0x00076707) heading_pane_cp01

0xaf89,	// (0x00076713) loc_req_pane_ParamLimits

0xaf89,	// (0x00076713) loc_req_pane

0xaf99,	// (0x00076723) loc_type_pane_ParamLimits

0xaf99,	// (0x00076723) loc_type_pane

0xafab,	// (0x00076735) loc_type_pane_t1_ParamLimits

0xafab,	// (0x00076735) loc_type_pane_t1

0xafbd,	// (0x00076747) loc_type_pane_t2_ParamLimits

0xafbd,	// (0x00076747) loc_type_pane_t2

0xafcf,	// (0x00076759) loc_type_pane_t3_ParamLimits

0xafcf,	// (0x00076759) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0007aa87) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0007aa87) loc_type_pane_t

0xafe1,	// (0x0007676b) list_loc_req_pane

0xafeb,	// (0x00076775) scroll_pane_cp012

0x234a,	// (0x0006dad4) list_single_loc_request_popup_menu_pane_ParamLimits

0x234a,	// (0x0006dad4) list_single_loc_request_popup_menu_pane

0xaff6,	// (0x00076780) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff6,	// (0x00076780) list_single_loc_request_popup_menu_pane_g1

0xb002,	// (0x0007678c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb002,	// (0x0007678c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0007aa8e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0007aa8e) list_single_loc_request_popup_menu_pane_g

0xb00e,	// (0x00076798) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb00e,	// (0x00076798) list_single_loc_request_popup_menu_pane_t1

0xa81f,	// (0x00075fa9) bg_popup_window_pane_cp03_ParamLimits

0xa81f,	// (0x00075fa9) bg_popup_window_pane_cp03

0xb024,	// (0x000767ae) heading_loc_req_pane_ParamLimits

0xb024,	// (0x000767ae) heading_loc_req_pane

0x2357,	// (0x0006dae1) popup_dyc_status_message_window_g1_ParamLimits

0x2357,	// (0x0006dae1) popup_dyc_status_message_window_g1

0x236b,	// (0x0006daf5) popup_dyc_status_message_window_t1_ParamLimits

0x236b,	// (0x0006daf5) popup_dyc_status_message_window_t1

0x2380,	// (0x0006db0a) popup_dyc_status_message_window_t2_ParamLimits

0x2380,	// (0x0006db0a) popup_dyc_status_message_window_t2

0x2395,	// (0x0006db1f) popup_dyc_status_message_window_t3_ParamLimits

0x2395,	// (0x0006db1f) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0007aa93) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0007aa93) popup_dyc_status_message_window_t

0xa01b,	// (0x000757a5) bg_heading_pane_cp01

0xb030,	// (0x000767ba) heading_loc_req_pane_g1

0xb038,	// (0x000767c2) heading_loc_req_pane_g2

0xb040,	// (0x000767ca) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0007aa9a) heading_loc_req_pane_g

0xb048,	// (0x000767d2) heading_loc_req_pane_t1

0xb057,	// (0x000767e1) bg_popup_sub_pane_cp01_ParamLimits

0xb057,	// (0x000767e1) bg_popup_sub_pane_cp01

0xb065,	// (0x000767ef) popup_cale_events_window_g1_ParamLimits

0xb065,	// (0x000767ef) popup_cale_events_window_g1

0xb085,	// (0x0007680f) popup_cale_events_window_g2_ParamLimits

0xb085,	// (0x0007680f) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0007aace) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0007aace) popup_cale_events_window_g

0xb0a5,	// (0x0007682f) popup_cale_events_window_t1_ParamLimits

0xb0a5,	// (0x0007682f) popup_cale_events_window_t1

0xb0b7,	// (0x00076841) popup_cale_events_window_t2_ParamLimits

0xb0b7,	// (0x00076841) popup_cale_events_window_t2

0xb0f5,	// (0x0007687f) popup_cale_events_window_t3_ParamLimits

0xb0f5,	// (0x0007687f) popup_cale_events_window_t3

0xb12f,	// (0x000768b9) popup_cale_events_window_t4_ParamLimits

0xb12f,	// (0x000768b9) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0007aad3) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0007aad3) popup_cale_events_window_t

0x248e,	// (0x0006dc18) call_type_pane

0x249e,	// (0x0006dc28) popup_call_status_window_g1

0x24b2,	// (0x0006dc3c) popup_call_status_window_g2

0x24c6,	// (0x0006dc50) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0007aadc) popup_call_status_window_g

0xb165,	// (0x000768ef) call_type_pane_g1

0xb16e,	// (0x000768f8) call_type_pane_g2

0x0001,

0xf359,	// (0x0007aae3) call_type_pane_g

0xa01b,	// (0x000757a5) bg_popup_sub_pane_cp02

0xb177,	// (0x00076901) listscroll_popup_wml_pane

0xb17f,	// (0x00076909) list_wml_pane

0xb189,	// (0x00076913) scroll_pane_cp013

0xb194,	// (0x0007691e) list_single_graphic_popup_wml_pane_ParamLimits

0xb194,	// (0x0007691e) list_single_graphic_popup_wml_pane

0xa945,	// (0x000760cf) list_single_graphic_popup_wml_pane_g1

0xb1a8,	// (0x00076932) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0007aae8) list_single_graphic_popup_wml_pane_g

0xb1b0,	// (0x0007693a) list_single_graphic_popup_wml_pane_t1

0xb1c6,	// (0x00076950) aid_call_pane

0xa817,	// (0x00075fa1) popup_clock_analogue_window_g1

0xa817,	// (0x00075fa1) popup_clock_analogue_window_g2

0x962d,	// (0x00074db7) popup_clock_analogue_window_g3

0x962d,	// (0x00074db7) popup_clock_analogue_window_g4

0xa945,	// (0x000760cf) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0007aaed) popup_clock_analogue_window_g

0x9635,	// (0x00074dbf) popup_clock_analogue_window_t1

0x9643,	// (0x00074dcd) clock_digital_number_pane_ParamLimits

0x9643,	// (0x00074dcd) clock_digital_number_pane

0x964f,	// (0x00074dd9) clock_digital_number_pane_cp02_ParamLimits

0x964f,	// (0x00074dd9) clock_digital_number_pane_cp02

0x965b,	// (0x00074de5) clock_digital_number_pane_cp03_ParamLimits

0x965b,	// (0x00074de5) clock_digital_number_pane_cp03

0x9667,	// (0x00074df1) clock_digital_number_pane_cp04_ParamLimits

0x9667,	// (0x00074df1) clock_digital_number_pane_cp04

0x9673,	// (0x00074dfd) clock_digital_separator_pane_ParamLimits

0x9673,	// (0x00074dfd) clock_digital_separator_pane

0x967f,	// (0x00074e09) popup_clock_digital_window_t1

0xa945,	// (0x000760cf) clock_digital_number_pane_g1

0xa945,	// (0x000760cf) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0007aa5b) clock_digital_number_pane_g

0xa945,	// (0x000760cf) clock_digital_separator_pane_g1

0xa945,	// (0x000760cf) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0007aa5b) clock_digital_separator_pane_g

0xa01b,	// (0x000757a5) bg_popup_window_pane_cp04

0xb1ce,	// (0x00076958) heading_pane_cp03

0xb1d6,	// (0x00076960) listscroll_popup_gms_pane

0xb1de,	// (0x00076968) grid_large_graphic_popup_pane

0xb1e8,	// (0x00076972) listscroll_popup_gms_pane_g1

0xb1f0,	// (0x0007697a) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0007aaf8) listscroll_popup_gms_pane_g

0xac85,	// (0x0007640f) scroll_pane_cp014

0x24d5,	// (0x0006dc5f) cell_large_graphic_popup_pane_ParamLimits

0x24d5,	// (0x0006dc5f) cell_large_graphic_popup_pane

0x24ed,	// (0x0006dc77) cell_large_graphic_popup_pane_g1_ParamLimits

0x24ed,	// (0x0006dc77) cell_large_graphic_popup_pane_g1

0xb1f8,	// (0x00076982) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1f8,	// (0x00076982) cell_large_graphic_popup_pane_g2

0xb204,	// (0x0007698e) cell_large_graphic_popup_pane_g3_ParamLimits

0xb204,	// (0x0007698e) cell_large_graphic_popup_pane_g3

0xb211,	// (0x0007699b) cell_large_graphic_popup_pane_g4_ParamLimits

0xb211,	// (0x0007699b) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0007aafd) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0007aafd) cell_large_graphic_popup_pane_g

0xb221,	// (0x000769ab) grid_highlight_pane_cp010

0xa945,	// (0x000760cf) bg_popup_call_pane_g1

0xb22b,	// (0x000769b5) list_single_graphic_popup_conf_pane_ParamLimits

0xb22b,	// (0x000769b5) list_single_graphic_popup_conf_pane

0xb23e,	// (0x000769c8) list_highlight_pane_cp01

0xb247,	// (0x000769d1) list_single_graphic_popup_conf_pane_g1

0xb24f,	// (0x000769d9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0007ab06) list_single_graphic_popup_conf_pane_g

0xb257,	// (0x000769e1) list_single_graphic_popup_conf_pane_t1

0xb265,	// (0x000769ef) linegrid_cams_pane_g1

0x24f9,	// (0x0006dc83) linegrid_cams_pane_g2

0xaac2,	// (0x0007624c) linegrid_cams_pane_g3

0xb26e,	// (0x000769f8) linegrid_cams_pane_g4

0x2502,	// (0x0006dc8c) linegrid_cams_pane_g5

0x250b,	// (0x0006dc95) linegrid_cams_pane_g6

0xaacb,	// (0x00076255) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0007ab0b) linegrid_cams_pane_g

0xb277,	// (0x00076a01) popup_clock_analogue_window

0xb277,	// (0x00076a01) popup_clock_digital_window

0xa01b,	// (0x000757a5) popup_phob_thumbnail_window

0xa945,	// (0x000760cf) call_video_uplink_pane_g1

0xb280,	// (0x00076a0a) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0007ab1a) call_video_uplink_pane_g

0xb288,	// (0x00076a12) video_uplink_pane

0xb290,	// (0x00076a1a) mce_image_pane_g1

0x2516,	// (0x0006dca0) mce_image_pane_g2

0x251e,	// (0x0006dca8) mce_image_pane_g3

0x2526,	// (0x0006dcb0) mce_image_pane_g4

0x2530,	// (0x0006dcba) mce_image_pane_g5

0x0004,

0xf395,	// (0x0007ab1f) mce_image_pane_g

0xb29a,	// (0x00076a24) control_top_pane_stacon_cp01_ParamLimits

0xb29a,	// (0x00076a24) control_top_pane_stacon_cp01

0xb2ae,	// (0x00076a38) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2ae,	// (0x00076a38) uni_indicator_pane_stacon_cp01

0xb2bf,	// (0x00076a49) bg_popup_sub_pane_cp03

0x2538,	// (0x0006dcc2) chi_dic_find_pane

0x2540,	// (0x0006dcca) listscroll_chi_dic_pane

0x2549,	// (0x0006dcd3) main_pane_chidic_g1

0x255c,	// (0x0006dce6) chi_dic_find_pane_t1

0xb2c9,	// (0x00076a53) find_chidic_pane

0xb2d2,	// (0x00076a5c) chi_dic_list_pane_ParamLimits

0xb2d2,	// (0x00076a5c) chi_dic_list_pane

0xb2e3,	// (0x00076a6d) scroll_pane_cp020

0x256a,	// (0x0006dcf4) find_chidic_pane_t1

0xa01b,	// (0x000757a5) input_focus_pane_cp06

0x2579,	// (0x0006dd03) list_chi_dic_pane_ParamLimits

0x2579,	// (0x0006dd03) list_chi_dic_pane

0x258b,	// (0x0006dd15) list_chi_dic_pane_t1_ParamLimits

0x258b,	// (0x0006dd15) list_chi_dic_pane_t1

0xa01b,	// (0x000757a5) list_highlight_pane_cp020

0xb2eb,	// (0x00076a75) bg_cale_heading_pane_g1

0x259e,	// (0x0006dd28) bg_cale_heading_pane_g2

0x25a6,	// (0x0006dd30) bg_cale_heading_pane_g3

0x25ae,	// (0x0006dd38) bg_cale_heading_pane_g4

0x25b8,	// (0x0006dd42) bg_cale_heading_pane_g5

0x25c2,	// (0x0006dd4c) bg_cale_heading_pane_g6

0x25ca,	// (0x0006dd54) bg_cale_heading_pane_g7

0x25d2,	// (0x0006dd5c) bg_cale_heading_pane_g8

0x25dc,	// (0x0006dd66) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0007ab2a) bg_cale_heading_pane_g

0xb2eb,	// (0x00076a75) bg_cale_side_pane_g1

0x25e6,	// (0x0006dd70) bg_cale_side_pane_g2

0x25ee,	// (0x0006dd78) bg_cale_side_pane_g3

0x25f6,	// (0x0006dd80) bg_cale_side_pane_g4

0x25fe,	// (0x0006dd88) bg_cale_side_pane_g5

0x2606,	// (0x0006dd90) bg_cale_side_pane_g6

0x260e,	// (0x0006dd98) bg_cale_side_pane_g7

0x2616,	// (0x0006dda0) bg_cale_side_pane_g8

0x261e,	// (0x0006dda8) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0007ab3d) bg_cale_side_pane_g

0x2626,	// (0x0006ddb0) popup_call_status_window_ParamLimits

0x2626,	// (0x0006ddb0) popup_call_status_window

0xb2f3,	// (0x00076a7d) stacon_top_pane

0xb2fb,	// (0x00076a85) status_pane_ParamLimits

0xb2fb,	// (0x00076a85) status_pane

0xb310,	// (0x00076a9a) status_small_pane

0xb318,	// (0x00076aa2) control_pane

0xa01b,	// (0x000757a5) stacon_bottom_pane

0xb320,	// (0x00076aaa) list_single_mce_smart_pane_t1_ParamLimits

0xb320,	// (0x00076aaa) list_single_mce_smart_pane_t1

0xb333,	// (0x00076abd) list_single_mce_smart_pane_t2_ParamLimits

0xb333,	// (0x00076abd) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0007ab50) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0007ab50) list_single_mce_smart_pane_t

0x266d,	// (0x0006ddf7) compass_pane

0x2676,	// (0x0006de00) main_location2_pane_t1

0x2688,	// (0x0006de12) main_location2_pane_t2

0x269a,	// (0x0006de24) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0007ab55) main_location2_pane_t

0xb352,	// (0x00076adc) compass_pane_g1_ParamLimits

0xb352,	// (0x00076adc) compass_pane_g1

0x26de,	// (0x0006de68) compass_pane_t1

0x26ed,	// (0x0006de77) compass_pane_t2

0x0005,

0xf3d4,	// (0x0007ab5e) compass_pane_t

0x2734,	// (0x0006debe) text_secondary_cp61

0xb3d0,	// (0x00076b5a) navi_pane_cams_g5

0xb44c,	// (0x00076bd6) navi_pane_im_t1

0xb45a,	// (0x00076be4) navi_pane_mp_g1_ParamLimits

0xb45a,	// (0x00076be4) navi_pane_mp_g1

0xb46e,	// (0x00076bf8) navi_pane_mp_g2_ParamLimits

0xb46e,	// (0x00076bf8) navi_pane_mp_g2

0xb47a,	// (0x00076c04) navi_pane_mp_g3_ParamLimits

0xb47a,	// (0x00076c04) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0007ab72) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0007ab72) navi_pane_mp_g

0xb486,	// (0x00076c10) navi_pane_mp_t1

0xb494,	// (0x00076c1e) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0007ab79) navi_pane_mp_t

0xb4ff,	// (0x00076c89) navi_pane_vt_g1

0xb486,	// (0x00076c10) navi_pane_vt_t1

0xb507,	// (0x00076c91) navi_slider_pane

0xaadc,	// (0x00076266) zooming_pane

0xb517,	// (0x00076ca1) navi_slider_pane_g1

0x969c,	// (0x00074e26) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0007ab80) navi_slider_pane_g

0xb53b,	// (0x00076cc5) aid_levels_zoom

0xb543,	// (0x00076ccd) zooming_pane_g1

0xb54b,	// (0x00076cd5) zooming_pane_g2

0xb54b,	// (0x00076cd5) zooming_pane_g3

0x0002,

0xf405,	// (0x0007ab8f) zooming_pane_g

0xb553,	// (0x00076cdd) level_10_zoom

0xb55c,	// (0x00076ce6) level_11_zoom

0xb565,	// (0x00076cef) level_1_zoom

0xb56e,	// (0x00076cf8) level_2_zoom

0xb577,	// (0x00076d01) level_3_zoom

0xb580,	// (0x00076d0a) level_4_zoom

0xb589,	// (0x00076d13) level_5_zoom

0xb592,	// (0x00076d1c) level_6_zoom

0xb59b,	// (0x00076d25) level_7_zoom

0xb5a4,	// (0x00076d2e) level_8_zoom

0xb5ad,	// (0x00076d37) level_9_zoom

0xb5be,	// (0x00076d48) popup_phob_thumbnail_window_g1

0xb5c6,	// (0x00076d50) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0007ab96) popup_phob_thumbnail_window_g

0xc8fd,	// (0x00078087) level_1_location

0xc905,	// (0x0007808f) level_2_location

0xc90d,	// (0x00078097) level_3_location

0xc915,	// (0x0007809f) level_4_location

0xaadc,	// (0x00076266) level_5_location

0x2785,	// (0x0006df0f) mce_icon_pane_g1

0x278f,	// (0x0006df19) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0007ab9b) mce_icon_pane_g

0x2797,	// (0x0006df21) main_mup_pane_g1_ParamLimits

0x2797,	// (0x0006df21) main_mup_pane_g1

0x27ad,	// (0x0006df37) main_mup_pane_g2_ParamLimits

0x27ad,	// (0x0006df37) main_mup_pane_g2

0x27bf,	// (0x0006df49) main_mup_pane_g3_ParamLimits

0x27bf,	// (0x0006df49) main_mup_pane_g3

0x27d1,	// (0x0006df5b) main_mup_pane_g4_ParamLimits

0x27d1,	// (0x0006df5b) main_mup_pane_g4

0x27e9,	// (0x0006df73) main_mup_pane_g5_ParamLimits

0x27e9,	// (0x0006df73) main_mup_pane_g5

0x2805,	// (0x0006df8f) main_mup_pane_g6_ParamLimits

0x2805,	// (0x0006df8f) main_mup_pane_g6

0x281d,	// (0x0006dfa7) main_mup_pane_g7_ParamLimits

0x281d,	// (0x0006dfa7) main_mup_pane_g7

0x2835,	// (0x0006dfbf) main_mup_pane_g8_ParamLimits

0x2835,	// (0x0006dfbf) main_mup_pane_g8

0x284d,	// (0x0006dfd7) main_mup_pane_g9_ParamLimits

0x284d,	// (0x0006dfd7) main_mup_pane_g9

0x2867,	// (0x0006dff1) main_mup_pane_g10_ParamLimits

0x2867,	// (0x0006dff1) main_mup_pane_g10

0x2881,	// (0x0006e00b) main_mup_pane_g11_ParamLimits

0x2881,	// (0x0006e00b) main_mup_pane_g11

0x2895,	// (0x0006e01f) main_mup_pane_g12_ParamLimits

0x2895,	// (0x0006e01f) main_mup_pane_g12

0x28ab,	// (0x0006e035) main_mup_pane_g13_ParamLimits

0x28ab,	// (0x0006e035) main_mup_pane_g13

0x000c,

0xf416,	// (0x0007aba0) main_mup_pane_g_ParamLimits

0xf416,	// (0x0007aba0) main_mup_pane_g

0x28bf,	// (0x0006e049) main_mup_pane_t1_ParamLimits

0x28bf,	// (0x0006e049) main_mup_pane_t1

0x28d9,	// (0x0006e063) main_mup_pane_t2_ParamLimits

0x28d9,	// (0x0006e063) main_mup_pane_t2

0x28f1,	// (0x0006e07b) main_mup_pane_t3_ParamLimits

0x28f1,	// (0x0006e07b) main_mup_pane_t3

0x2909,	// (0x0006e093) main_mup_pane_t4_ParamLimits

0x2909,	// (0x0006e093) main_mup_pane_t4

0x2927,	// (0x0006e0b1) main_mup_pane_t5_ParamLimits

0x2927,	// (0x0006e0b1) main_mup_pane_t5

0x293c,	// (0x0006e0c6) main_mup_pane_t6_ParamLimits

0x293c,	// (0x0006e0c6) main_mup_pane_t6

0x0005,

0xf431,	// (0x0007abbb) main_mup_pane_t_ParamLimits

0xf431,	// (0x0007abbb) main_mup_pane_t

0x294e,	// (0x0006e0d8) mup_progress_pane_ParamLimits

0x294e,	// (0x0006e0d8) mup_progress_pane

0x295a,	// (0x0006e0e4) mup_visualizer_pane_ParamLimits

0x295a,	// (0x0006e0e4) mup_visualizer_pane

0x298e,	// (0x0006e118) mup_volume_pane_ParamLimits

0x298e,	// (0x0006e118) mup_volume_pane

0xb5ce,	// (0x00076d58) mup_visualizer_pane_g1_ParamLimits

0xb5ce,	// (0x00076d58) mup_visualizer_pane_g1

0xb5ce,	// (0x00076d58) mup_visualizer_pane_g2_ParamLimits

0xb5ce,	// (0x00076d58) mup_visualizer_pane_g2

0xb352,	// (0x00076adc) mup_visualizer_pane_g3_ParamLimits

0xb352,	// (0x00076adc) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0007abc8) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0007abc8) mup_visualizer_pane_g

0xa945,	// (0x000760cf) mup_volume_pane_g1

0xb5e4,	// (0x00076d6e) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0007abcf) mup_volume_pane_g

0xa945,	// (0x000760cf) mup_progress_pane_g1

0xb5ed,	// (0x00076d77) mup_progress_pane_g2

0xb5f6,	// (0x00076d80) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0007abd4) mup_progress_pane_g

0xa01b,	// (0x000757a5) bg_popup_window_pane_cp05

0xb5ff,	// (0x00076d89) heading_pane_cp02_ParamLimits

0xb5ff,	// (0x00076d89) heading_pane_cp02

0xb619,	// (0x00076da3) list_popup_blid_pane

0xb621,	// (0x00076dab) list_blid_sat_info_pane_ParamLimits

0xb621,	// (0x00076dab) list_blid_sat_info_pane

0xb634,	// (0x00076dbe) list_blid_sat_info_pane_g1

0xb63c,	// (0x00076dc6) list_blid_sat_info_pane_t1

0x2aa4,	// (0x0006e22e) mup_equalizer_pane_ParamLimits

0x2aa4,	// (0x0006e22e) mup_equalizer_pane

0x2abd,	// (0x0006e247) mup_equalizer_pane_cp1_ParamLimits

0x2abd,	// (0x0006e247) mup_equalizer_pane_cp1

0x2ada,	// (0x0006e264) mup_equalizer_pane_cp2_ParamLimits

0x2ada,	// (0x0006e264) mup_equalizer_pane_cp2

0x2af7,	// (0x0006e281) mup_equalizer_pane_cp3_ParamLimits

0x2af7,	// (0x0006e281) mup_equalizer_pane_cp3

0x2b18,	// (0x0006e2a2) mup_equalizer_pane_cp4_ParamLimits

0x2b18,	// (0x0006e2a2) mup_equalizer_pane_cp4

0x2b39,	// (0x0006e2c3) mup_equalizer_pane_cp5

0x2b4d,	// (0x0006e2d7) mup_equalizer_pane_cp6

0x2b61,	// (0x0006e2eb) mup_equalizer_pane_cp7

0xc7db,	// (0x00077f65) bg_popup_call_poc_act_pane_g9

0xc7e3,	// (0x00077f6d) bg_popup_call_poc_act_pane_g10

0xc7eb,	// (0x00077f75) bg_popup_call_poc_act_pane_g11

0x000a,

0xa81f,	// (0x00075fa9) mup_scale_pane

0xa945,	// (0x000760cf) mup_scale_pane_g1

0xb64a,	// (0x00076dd4) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0007abf0) mup_scale_pane_g

0xb66e,	// (0x00076df8) msg_data_pane

0xb676,	// (0x00076e00) scroll_pane_cp017

0x2b87,	// (0x0006e311) bg_list_pane_cp04_ParamLimits

0x2b87,	// (0x0006e311) bg_list_pane_cp04

0xb67e,	// (0x00076e08) msg_data_pane_g1

0x2b9f,	// (0x0006e329) msg_data_pane_g2

0x2ba7,	// (0x0006e331) msg_data_pane_g3

0x2baf,	// (0x0006e339) msg_data_pane_g4

0x2bb7,	// (0x0006e341) msg_data_pane_g5

0x2bbf,	// (0x0006e349) msg_data_pane_g6

0x2bc7,	// (0x0006e351) msg_data_pane_g7

0x0006,

0xf475,	// (0x0007abff) msg_data_pane_g

0x2bcf,	// (0x0006e359) msg_text_pane_ParamLimits

0x2bcf,	// (0x0006e359) msg_text_pane

0x2bfe,	// (0x0006e388) qrid_highlight_pane_cp011_ParamLimits

0x2bfe,	// (0x0006e388) qrid_highlight_pane_cp011

0xa01b,	// (0x000757a5) msg_body_pane

0xa01b,	// (0x000757a5) msg_header_pane

0xb68f,	// (0x00076e19) input_focus_pane_cp07

0xa03d,	// (0x000757c7) msg_header_pane_t1_ParamLimits

0xa03d,	// (0x000757c7) msg_header_pane_t1

0xa04f,	// (0x000757d9) msg_header_pane_t2_ParamLimits

0xa04f,	// (0x000757d9) msg_header_pane_t2

0x0001,

0xf489,	// (0x0007ac13) msg_header_pane_t_ParamLimits

0xf489,	// (0x0007ac13) msg_header_pane_t

0xb6a4,	// (0x00076e2e) msg_body_pane_g1

0xa061,	// (0x000757eb) msg_body_pane_t1_ParamLimits

0xa061,	// (0x000757eb) msg_body_pane_t1

0xa092,	// (0x0007581c) msg_body_pane_t2_ParamLimits

0xa092,	// (0x0007581c) msg_body_pane_t2

0xa0a4,	// (0x0007582e) msg_body_pane_t3_ParamLimits

0xa0a4,	// (0x0007582e) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0007ac18) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0007ac18) msg_body_pane_t

0x2c5c,	// (0x0006e3e6) main_viewer_pane_g1_ParamLimits

0x2c5c,	// (0x0006e3e6) main_viewer_pane_g1

0x2c6a,	// (0x0006e3f4) main_viewer_pane_g2_ParamLimits

0x2c6a,	// (0x0006e3f4) main_viewer_pane_g2

0x2c78,	// (0x0006e402) main_viewer_pane_g3_ParamLimits

0x2c78,	// (0x0006e402) main_viewer_pane_g3

0x2c87,	// (0x0006e411) main_viewer_pane_g4_ParamLimits

0x2c87,	// (0x0006e411) main_viewer_pane_g4

0x96c6,	// (0x00074e50) main_viewer_pane_g5_ParamLimits

0x96c6,	// (0x00074e50) main_viewer_pane_g5

0x96c6,	// (0x00074e50) main_viewer_pane_g7_ParamLimits

0x96c6,	// (0x00074e50) main_viewer_pane_g7

0xaff6,	// (0x00076780) main_viewer_pane_g8_ParamLimits

0xaff6,	// (0x00076780) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0007ac28) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0007ac28) main_viewer_pane_g

0xb6ac,	// (0x00076e36) viewer_content_pane_ParamLimits

0xb6ac,	// (0x00076e36) viewer_content_pane

0x2cc3,	// (0x0006e44d) main_postcard_pane_g1_ParamLimits

0x2cc3,	// (0x0006e44d) main_postcard_pane_g1

0x2cd9,	// (0x0006e463) main_postcard_pane_g2_ParamLimits

0x2cd9,	// (0x0006e463) main_postcard_pane_g2

0x2cef,	// (0x0006e479) main_postcard_pane_g3_ParamLimits

0x2cef,	// (0x0006e479) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0007ac39) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0007ac39) main_postcard_pane_g

0x2d06,	// (0x0006e490) main_postcard_pane_g4

0xca12,	// (0x0007819c) smil_status_volume_pane_g2

0x2d49,	// (0x0006e4d3) postcard_pane_ParamLimits

0x2d49,	// (0x0006e4d3) postcard_pane

0xb6ba,	// (0x00076e44) postcard_pane_g1_ParamLimits

0xb6ba,	// (0x00076e44) postcard_pane_g1

0x2d8b,	// (0x0006e515) postcard_pane_g2_ParamLimits

0x2d8b,	// (0x0006e515) postcard_pane_g2

0x2d97,	// (0x0006e521) postcard_pane_g3_ParamLimits

0x2d97,	// (0x0006e521) postcard_pane_g3

0xb6c8,	// (0x00076e52) postcard_pane_g4_ParamLimits

0xb6c8,	// (0x00076e52) postcard_pane_g4

0x2da3,	// (0x0006e52d) postcard_pane_g5_ParamLimits

0x2da3,	// (0x0006e52d) postcard_pane_g5

0x2db8,	// (0x0006e542) postcard_pane_g6_ParamLimits

0x2db8,	// (0x0006e542) postcard_pane_g6

0xb6ba,	// (0x00076e44) postcard_pane_g7_ParamLimits

0xb6ba,	// (0x00076e44) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0007ac46) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0007ac46) postcard_pane_g

0x2dcc,	// (0x0006e556) main_mp2_pane_g1_ParamLimits

0x2dcc,	// (0x0006e556) main_mp2_pane_g1

0x2dd8,	// (0x0006e562) main_mp2_pane_g2_ParamLimits

0x2dd8,	// (0x0006e562) main_mp2_pane_g2

0x2de4,	// (0x0006e56e) main_mp2_pane_g3_ParamLimits

0x2de4,	// (0x0006e56e) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0007ac55) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0007ac55) main_mp2_pane_g

0x2df0,	// (0x0006e57a) main_mp2_pane_t1_ParamLimits

0x2df0,	// (0x0006e57a) main_mp2_pane_t1

0x2e05,	// (0x0006e58f) main_mp2_pane_t2_ParamLimits

0x2e05,	// (0x0006e58f) main_mp2_pane_t2

0x2e17,	// (0x0006e5a1) main_mp2_pane_t3_ParamLimits

0x2e17,	// (0x0006e5a1) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0007ac5c) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0007ac5c) main_mp2_pane_t

0xb6d6,	// (0x00076e60) pec_content_pane_ParamLimits

0xb6d6,	// (0x00076e60) pec_content_pane

0xac85,	// (0x0007640f) scroll_pane_cp015

0xb6e8,	// (0x00076e72) pec_attribute_pane_ParamLimits

0xb6e8,	// (0x00076e72) pec_attribute_pane

0x2e29,	// (0x0006e5b3) pec_content_pane_g1_ParamLimits

0x2e29,	// (0x0006e5b3) pec_content_pane_g1

0xb6f8,	// (0x00076e82) pec_content_pane_t1_ParamLimits

0xb6f8,	// (0x00076e82) pec_content_pane_t1

0xb70a,	// (0x00076e94) pec_content_pane_t2_ParamLimits

0xb70a,	// (0x00076e94) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0007ac63) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0007ac63) pec_content_pane_t

0x2e35,	// (0x0006e5bf) list_single_graphic_pane_cp01_ParamLimits

0x2e35,	// (0x0006e5bf) list_single_graphic_pane_cp01

0xa81f,	// (0x00075fa9) bg_popup_sub_pane_cp04

0xb71c,	// (0x00076ea6) popup_mup_playback_window_g1

0xb728,	// (0x00076eb2) popup_mup_playback_window_t1

0xb73d,	// (0x00076ec7) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0007ac68) popup_mup_playback_window_t

0xb774,	// (0x00076efe) main_image_pane_g1_ParamLimits

0xb774,	// (0x00076efe) main_image_pane_g1

0xb7b7,	// (0x00076f41) scroll_pane_cp018_ParamLimits

0xb7b7,	// (0x00076f41) scroll_pane_cp018

0xb7cf,	// (0x00076f59) scroll_pane_cp016_ParamLimits

0xb7cf,	// (0x00076f59) scroll_pane_cp016

0x2f03,	// (0x0006e68d) smil2_image_pane_ParamLimits

0x2f03,	// (0x0006e68d) smil2_image_pane

0x2f33,	// (0x0006e6bd) smil2_root_pane_ParamLimits

0x2f33,	// (0x0006e6bd) smil2_root_pane

0x2f6b,	// (0x0006e6f5) smil2_text_pane_ParamLimits

0x2f6b,	// (0x0006e6f5) smil2_text_pane

0xa01b,	// (0x000757a5) bg_list_pane_cp06

0xb80b,	// (0x00076f95) grid_radio_pane

0xa01b,	// (0x000757a5) bg_popup_window_pane_cp06

0xb813,	// (0x00076f9d) main_fmradio_pane_t1

0xb1ce,	// (0x00076958) heading_pane_cp04

0xb821,	// (0x00076fab) main_fmradio_pane_t2

0xc833,	// (0x00077fbd) popup_cale_lunar_info_window_g1

0xb82f,	// (0x00076fb9) main_fmradio_pane_t3

0xc83b,	// (0x00077fc5) popup_cale_lunar_info_window_g2

0xb83d,	// (0x00076fc7) main_fmradio_pane_t4

0x0001,

0xb84b,	// (0x00076fd5) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0007ad56) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0007ac7d) main_fmradio_pane_t

0xb859,	// (0x00076fe3) wait_bar_pane_cp03

0xb861,	// (0x00076feb) cell_fmradio_pane_ParamLimits

0xb861,	// (0x00076feb) cell_fmradio_pane

0xb6ba,	// (0x00076e44) cell_fmradio_pane_g1_ParamLimits

0xb6ba,	// (0x00076e44) cell_fmradio_pane_g1

0xa01b,	// (0x000757a5) grid_highlight_pane_cp011

0xb874,	// (0x00076ffe) poc_content_pane_ParamLimits

0xb874,	// (0x00076ffe) poc_content_pane

0xb886,	// (0x00077010) scroll_pane_cp019

0x2feb,	// (0x0006e775) popup_call_poc_act_window_ParamLimits

0x2feb,	// (0x0006e775) popup_call_poc_act_window

0x300f,	// (0x0006e799) popup_call_poc_inact_window_ParamLimits

0x300f,	// (0x0006e799) popup_call_poc_inact_window

0xf590,	// (0x0007ad1a) bg_popup_call_poc_act_pane_g

0xc7f3,	// (0x00077f7d) bg_popup_call_poc_inact_pane_g1

0xc7fb,	// (0x00077f85) bg_popup_call_poc_inact_pane_g2

0xb88e,	// (0x00077018) popup_call_poc_act_window_g2

0xc803,	// (0x00077f8d) bg_popup_call_poc_inact_pane_g3

0xc783,	// (0x00077f0d) bg_popup_call_poc_inact_pane_g4

0xc80b,	// (0x00077f95) bg_popup_call_poc_inact_pane_g5

0xb896,	// (0x00077020) popup_call_poc_act_window_t1_ParamLimits

0xb896,	// (0x00077020) popup_call_poc_act_window_t1

0xb8be,	// (0x00077048) popup_call_poc_act_window_t2_ParamLimits

0xb8be,	// (0x00077048) popup_call_poc_act_window_t2

0xb8e6,	// (0x00077070) popup_call_poc_act_window_t3_ParamLimits

0xb8e6,	// (0x00077070) popup_call_poc_act_window_t3

0xb90e,	// (0x00077098) popup_call_poc_act_window_t4_ParamLimits

0xb90e,	// (0x00077098) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0007ac88) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0007ac88) popup_call_poc_act_window_t

0xc813,	// (0x00077f9d) bg_popup_call_poc_inact_pane_g6

0xc81b,	// (0x00077fa5) bg_popup_call_poc_inact_pane_g7

0xc823,	// (0x00077fad) bg_popup_call_poc_inact_pane_g8

0xb920,	// (0x000770aa) popup_call_poc_inact_window_g2

0xc82b,	// (0x00077fb5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0007ad31) bg_popup_call_poc_inact_pane_g

0xb928,	// (0x000770b2) popup_call_poc_inact_window_t1_ParamLimits

0xb928,	// (0x000770b2) popup_call_poc_inact_window_t1

0xb93d,	// (0x000770c7) popup_call_poc_inact_window_t2_ParamLimits

0xb93d,	// (0x000770c7) popup_call_poc_inact_window_t2

0xb952,	// (0x000770dc) popup_call_poc_inact_window_t3_ParamLimits

0xb952,	// (0x000770dc) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0007ac91) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0007ac91) popup_call_poc_inact_window_t

0xc970,	// (0x000780fa) context_pane_ParamLimits

0x3849,	// (0x0006efd3) signal_pane_ParamLimits

0xaadc,	// (0x00076266) main_call2_pane

0x9711,	// (0x00074e9b) popup_phob_thumbnail2_window_ParamLimits

0x9711,	// (0x00074e9b) popup_phob_thumbnail2_window

0x96ae,	// (0x00074e38) aid_hotspot_pointer_arrow_pane

0x96b6,	// (0x00074e40) aid_hotspot_pointer_hand_pane

0x3359,	// (0x0006eae3) phob_pre_status_pane_g5

0x10f3,	// (0x0006c87d) cams_zoom_pane_ParamLimits

0x1102,	// (0x0006c88c) image_vga_pane_ParamLimits

0x111c,	// (0x0006c8a6) main_camera_pane_g1_ParamLimits

0x112e,	// (0x0006c8b8) main_camera_pane_g2_ParamLimits

0x113e,	// (0x0006c8c8) main_camera_pane_g3_ParamLimits

0x114e,	// (0x0006c8d8) main_camera_pane_g4_ParamLimits

0x115e,	// (0x0006c8e8) main_camera_pane_g5_ParamLimits

0x116e,	// (0x0006c8f8) main_camera_pane_g6_ParamLimits

0x117e,	// (0x0006c908) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0007a990) main_camera_pane_g_ParamLimits

0x118e,	// (0x0006c918) main_camera_pane_t1_ParamLimits

0x11a4,	// (0x0006c92e) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0007a9a1) main_camera_pane_t_ParamLimits

0xa81f,	// (0x00075fa9) bg_popup_preview_window_pane_cp01_ParamLimits

0xa81f,	// (0x00075fa9) bg_popup_preview_window_pane_cp01

0xb967,	// (0x000770f1) popup_phob_thumbnail2_window_g1_ParamLimits

0xb967,	// (0x000770f1) popup_phob_thumbnail2_window_g1

0xa01b,	// (0x000757a5) call2_cli_visual_pane

0x3043,	// (0x0006e7cd) popup_call2_audio_conf_window_ParamLimits

0x3043,	// (0x0006e7cd) popup_call2_audio_conf_window

0x3063,	// (0x0006e7ed) popup_call2_audio_first_window_ParamLimits

0x3063,	// (0x0006e7ed) popup_call2_audio_first_window

0x30f9,	// (0x0006e883) popup_call2_audio_in_window_ParamLimits

0x30f9,	// (0x0006e883) popup_call2_audio_in_window

0x3141,	// (0x0006e8cb) popup_call2_audio_out_window_ParamLimits

0x3141,	// (0x0006e8cb) popup_call2_audio_out_window

0x31ab,	// (0x0006e935) popup_call2_audio_second_window_ParamLimits

0x31ab,	// (0x0006e935) popup_call2_audio_second_window

0x3211,	// (0x0006e99b) popup_call2_audio_wait_window_ParamLimits

0x3211,	// (0x0006e99b) popup_call2_audio_wait_window

0xa01b,	// (0x000757a5) bg_popup_call2_act_pane_cp03

0xa801,	// (0x00075f8b) list_conf_pane_cp

0xb973,	// (0x000770fd) popup_call2_audio_conf_window_t1

0xb981,	// (0x0007710b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb981,	// (0x0007710b) list_single_graphic_popup_conf2_pane

0xb23e,	// (0x000769c8) list_highlight_pane_cp04

0xb994,	// (0x0007711e) list_single_graphic_popup_conf2_pane_g1

0xb24f,	// (0x000769d9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0007ac98) list_single_graphic_popup_conf2_pane_g

0xb99e,	// (0x00077128) list_single_graphic_popup_conf2_pane_t1

0xb9ac,	// (0x00077136) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9ac,	// (0x00077136) bg_popup_call2_act_pane_cp01

0xba36,	// (0x000771c0) call_type_pane_cp05_ParamLimits

0xba36,	// (0x000771c0) call_type_pane_cp05

0xba8a,	// (0x00077214) popup_call2_audio_second_window_g1_ParamLimits

0xba8a,	// (0x00077214) popup_call2_audio_second_window_g1

0xbade,	// (0x00077268) popup_call2_audio_second_window_g2_ParamLimits

0xbade,	// (0x00077268) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0007ac9d) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0007ac9d) popup_call2_audio_second_window_g

0xbb43,	// (0x000772cd) popup_call2_audio_second_window_t1_ParamLimits

0xbb43,	// (0x000772cd) popup_call2_audio_second_window_t1

0xbbfe,	// (0x00077388) popup_call2_audio_second_window_t2_ParamLimits

0xbbfe,	// (0x00077388) popup_call2_audio_second_window_t2

0xbc51,	// (0x000773db) popup_call2_audio_second_window_t3_ParamLimits

0xbc51,	// (0x000773db) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0007aca4) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0007aca4) popup_call2_audio_second_window_t

0xa01b,	// (0x000757a5) bg_popup_call2_in_pane_cp02

0xa025,	// (0x000757af) call_type_pane_cp04

0xa02d,	// (0x000757b7) popup_call2_audio_wait_window_g1

0xa5de,	// (0x00075d68) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007a87f) popup_call2_audio_wait_window_g

0xa5e6,	// (0x00075d70) popup_call2_audio_wait_window_t3

0xbd44,	// (0x000774ce) bg_popup_call2_act_pane_ParamLimits

0xbd44,	// (0x000774ce) bg_popup_call2_act_pane

0xbe04,	// (0x0007758e) call_type_pane_cp03_ParamLimits

0xbe04,	// (0x0007758e) call_type_pane_cp03

0xbe68,	// (0x000775f2) popup_call2_audio_first_window_g1_ParamLimits

0xbe68,	// (0x000775f2) popup_call2_audio_first_window_g1

0xbed8,	// (0x00077662) popup_call2_audio_first_window_g2_ParamLimits

0xbed8,	// (0x00077662) popup_call2_audio_first_window_g2

0xb5ce,	// (0x00076d58) popup_call2_audio_first_window_g3_ParamLimits

0xb5ce,	// (0x00076d58) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0007acad) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0007acad) popup_call2_audio_first_window_g

0xbfb6,	// (0x00077740) popup_call2_audio_first_window_t1_ParamLimits

0xbfb6,	// (0x00077740) popup_call2_audio_first_window_t1

0xc0b9,	// (0x00077843) popup_call2_audio_first_window_t4_ParamLimits

0xc0b9,	// (0x00077843) popup_call2_audio_first_window_t4

0xc19c,	// (0x00077926) popup_call2_audio_first_window_t5_ParamLimits

0xc19c,	// (0x00077926) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0007acb8) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0007acb8) popup_call2_audio_first_window_t

0xa817,	// (0x00075fa1) bg_popup_call2_act_pane_g1

0xc843,	// (0x00077fcd) popup_cale_lunar_info_window_t1

0xc851,	// (0x00077fdb) popup_cale_lunar_info_window_t2

0xc85f,	// (0x00077fe9) popup_cale_lunar_info_window_t3

0xa01b,	// (0x000757a5) bg_popup_call2_bubble_pane

0xc29d,	// (0x00077a27) bg_popup_call2_in_pane_cp01_ParamLimits

0xc29d,	// (0x00077a27) bg_popup_call2_in_pane_cp01

0x9cf7,	// (0x00075481) call_type_pane_cp02

0xc2e5,	// (0x00077a6f) popup_call2_audio_out_window_g1_ParamLimits

0xc2e5,	// (0x00077a6f) popup_call2_audio_out_window_g1

0xc311,	// (0x00077a9b) popup_call2_audio_out_window_g2_ParamLimits

0xc311,	// (0x00077a9b) popup_call2_audio_out_window_g2

0xc339,	// (0x00077ac3) popup_call2_audio_out_window_g3_ParamLimits

0xc339,	// (0x00077ac3) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0007acc1) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0007acc1) popup_call2_audio_out_window_g

0xc374,	// (0x00077afe) popup_call2_audio_out_window_t1_ParamLimits

0xc374,	// (0x00077afe) popup_call2_audio_out_window_t1

0xc3d3,	// (0x00077b5d) popup_call2_audio_out_window_t2_ParamLimits

0xc3d3,	// (0x00077b5d) popup_call2_audio_out_window_t2

0xc427,	// (0x00077bb1) popup_call2_audio_out_window_t3_ParamLimits

0xc427,	// (0x00077bb1) popup_call2_audio_out_window_t3

0xc43d,	// (0x00077bc7) popup_call2_audio_out_window_t4_ParamLimits

0xc43d,	// (0x00077bc7) popup_call2_audio_out_window_t4

0xc453,	// (0x00077bdd) popup_call2_audio_out_window_t5_ParamLimits

0xc453,	// (0x00077bdd) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0007acca) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0007acca) popup_call2_audio_out_window_t

0xc4b7,	// (0x00077c41) bg_popup_call2_in_pane_ParamLimits

0xc4b7,	// (0x00077c41) bg_popup_call2_in_pane

0xc513,	// (0x00077c9d) popup_call2_audio_in_window_g1_ParamLimits

0xc513,	// (0x00077c9d) popup_call2_audio_in_window_g1

0xc54b,	// (0x00077cd5) popup_call2_audio_in_window_g2_ParamLimits

0xc54b,	// (0x00077cd5) popup_call2_audio_in_window_g2

0xc583,	// (0x00077d0d) popup_call2_audio_in_window_g3_ParamLimits

0xc583,	// (0x00077d0d) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0007acd7) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0007acd7) popup_call2_audio_in_window_g

0xc5db,	// (0x00077d65) popup_call2_audio_in_window_t1_ParamLimits

0xc5db,	// (0x00077d65) popup_call2_audio_in_window_t1

0xc65b,	// (0x00077de5) popup_call2_audio_in_window_t2_ParamLimits

0xc65b,	// (0x00077de5) popup_call2_audio_in_window_t2

0xc6db,	// (0x00077e65) popup_call2_audio_in_window_t3_ParamLimits

0xc6db,	// (0x00077e65) popup_call2_audio_in_window_t3

0xc6f5,	// (0x00077e7f) popup_call2_audio_in_window_t4_ParamLimits

0xc6f5,	// (0x00077e7f) popup_call2_audio_in_window_t4

0xc707,	// (0x00077e91) popup_call2_audio_in_window_t5_ParamLimits

0xc707,	// (0x00077e91) popup_call2_audio_in_window_t5

0xc719,	// (0x00077ea3) popup_call2_audio_in_window_t6_ParamLimits

0xc719,	// (0x00077ea3) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0007ace0) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0007ace0) popup_call2_audio_in_window_t

0xa817,	// (0x00075fa1) bg_popup_call2_in_pane_g1

0xc86d,	// (0x00077ff7) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0007ad5b) popup_cale_lunar_info_window_t

0xa81f,	// (0x00075fa9) bg_popup_call2_rect_pane_ParamLimits

0xa81f,	// (0x00075fa9) bg_popup_call2_rect_pane

0xa01b,	// (0x000757a5) call2_cli_visual_graphic_pane

0xa01b,	// (0x000757a5) call2_cli_visual_text_pane

0x9738,	// (0x00074ec2) smil_status_volume_pane_g3

0x0002,

0xa945,	// (0x000760cf) call2_cli_visual_graphic_pane_g1

0xa945,	// (0x000760cf) call2_cli_visual_graphic_pane_g2

0xa945,	// (0x000760cf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0007aced) call2_cli_visual_graphic_pane_g

0xc72b,	// (0x00077eb5) bg_popup_call2_rect_pane_g1

0xa9da,	// (0x00076164) bg_popup_call2_rect_pane_g2

0xc733,	// (0x00077ebd) bg_popup_call2_rect_pane_g3

0xc73b,	// (0x00077ec5) bg_popup_call2_rect_pane_g4

0xc743,	// (0x00077ecd) bg_popup_call2_rect_pane_g5

0xc74b,	// (0x00077ed5) bg_popup_call2_rect_pane_g6

0xc753,	// (0x00077edd) bg_popup_call2_rect_pane_g7

0xc75b,	// (0x00077ee5) bg_popup_call2_rect_pane_g8

0xc763,	// (0x00077eed) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0007acf4) bg_popup_call2_rect_pane_g

0xc76b,	// (0x00077ef5) bg_popup_call2_bubble_pane_g1

0xc773,	// (0x00077efd) bg_popup_call2_bubble_pane_g2

0xc77b,	// (0x00077f05) bg_popup_call2_bubble_pane_g3

0xc783,	// (0x00077f0d) bg_popup_call2_bubble_pane_g4

0xc78b,	// (0x00077f15) bg_popup_call2_bubble_pane_g5

0xc793,	// (0x00077f1d) bg_popup_call2_bubble_pane_g6

0xc79b,	// (0x00077f25) bg_popup_call2_bubble_pane_g7

0xc7a3,	// (0x00077f2d) bg_popup_call2_bubble_pane_g8

0xc7ab,	// (0x00077f35) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0007ad07) bg_popup_call2_bubble_pane_g

0x0b2b,	// (0x0006c2b5) aid_cale_week_size_cell_pane

0x11ba,	// (0x0006c944) aid_cams_cif_uncrop_pane_ParamLimits

0x11ba,	// (0x0006c944) aid_cams_cif_uncrop_pane

0x136f,	// (0x0006caf9) aid_cams_size_cell_ParamLimits

0x136f,	// (0x0006caf9) aid_cams_size_cell

0x1383,	// (0x0006cb0d) grid_cams_pane_ParamLimits

0x139d,	// (0x0006cb27) linegrid_cams_pane_ParamLimits

0x1599,	// (0x0006cd23) call_video_pane_t1

0x15b7,	// (0x0006cd41) call_video_pane_t2

0x0001,

0xf26a,	// (0x0007a9f4) call_video_pane_t

0x19dd,	// (0x0006d167) aid_cale_month_size_cell_pane_ParamLimits

0x19dd,	// (0x0006d167) aid_cale_month_size_cell_pane

0xf61a,	// (0x0007ada4) smil_status_volume_pane_g

0x9745,	// (0x00074ecf) volume_smil_pane_ParamLimits

0x940a,	// (0x00074b94) aid_popup2_width_pane

0x0aa1,	// (0x0006c22b) cell_qdial_pane_g4_ParamLimits

0x0aa1,	// (0x0006c22b) cell_qdial_pane_g4

0x26be,	// (0x0006de48) aid_blid_cardinal_pane_ParamLimits

0x26ca,	// (0x0006de54) aid_blid_destination_pane_ParamLimits

0x26ca,	// (0x0006de54) aid_blid_destination_pane

0xa81f,	// (0x00075fa9) bg_popup_call_poc_act_pane_ParamLimits

0xa81f,	// (0x00075fa9) bg_popup_call_poc_act_pane

0xa81f,	// (0x00075fa9) bg_popup_call_poc_inact_pane_ParamLimits

0xa81f,	// (0x00075fa9) bg_popup_call_poc_inact_pane

0xc7b3,	// (0x00077f3d) bg_popup_call_poc_act_pane_g1

0xc7bb,	// (0x00077f45) bg_popup_call_poc_act_pane_g2

0xc7c3,	// (0x00077f4d) bg_popup_call_poc_act_pane_g3

0xc783,	// (0x00077f0d) bg_popup_call_poc_act_pane_g4

0xc78b,	// (0x00077f15) bg_popup_call_poc_act_pane_g5

0xc7cb,	// (0x00077f55) bg_popup_call_poc_act_pane_g6

0xc79b,	// (0x00077f25) bg_popup_call_poc_act_pane_g7

0xc7d3,	// (0x00077f5d) bg_popup_call_poc_act_pane_g8

0xa01b,	// (0x000757a5) main_usb_pane

0x96ec,	// (0x00074e76) popup_cale_lunar_info_window

0x1883,	// (0x0006d00d) im_reading_pane_t1_ParamLimits

0xabdd,	// (0x00076367) list_im_pane_ParamLimits

0xabee,	// (0x00076378) scroll_pane_cp07_ParamLimits

0xa01b,	// (0x000757a5) grid_highlight_pane_cp012

0xa81f,	// (0x00075fa9) mup_scale_pane_ParamLimits

0xb6ba,	// (0x00076e44) main_usb_pane_g1_ParamLimits

0xb6ba,	// (0x00076e44) main_usb_pane_g1

0x326e,	// (0x0006e9f8) main_usb_pane_g2_ParamLimits

0x326e,	// (0x0006e9f8) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0007ad44) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0007ad44) main_usb_pane_g

0x3284,	// (0x0006ea0e) main_usb_pane_t1_ParamLimits

0x3284,	// (0x0006ea0e) main_usb_pane_t1

0x3296,	// (0x0006ea20) main_usb_pane_t2_ParamLimits

0x3296,	// (0x0006ea20) main_usb_pane_t2

0x32a8,	// (0x0006ea32) main_usb_pane_t3_ParamLimits

0x32a8,	// (0x0006ea32) main_usb_pane_t3

0x32ba,	// (0x0006ea44) main_usb_pane_t4_ParamLimits

0x32ba,	// (0x0006ea44) main_usb_pane_t4

0x32cc,	// (0x0006ea56) main_usb_pane_t5_ParamLimits

0x32cc,	// (0x0006ea56) main_usb_pane_t5

0x32de,	// (0x0006ea68) main_usb_pane_t6_ParamLimits

0x32de,	// (0x0006ea68) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0007ad49) main_usb_pane_t_ParamLimits

0x266d,	// (0x0006ddf7) aid_text_placing

0x2676,	// (0x0006de00) main_location2_pane_t1_ParamLimits

0x2688,	// (0x0006de12) main_location2_pane_t2_ParamLimits

0x269a,	// (0x0006de24) main_location2_pane_t3_ParamLimits

0x26ac,	// (0x0006de36) main_location2_pane_t4_ParamLimits

0x26ac,	// (0x0006de36) main_location2_pane_t4

0xf3cb,	// (0x0007ab55) main_location2_pane_t_ParamLimits

0xa85b,	// (0x00075fe5) find_pinb_pane_g2_ParamLimits

0xa85b,	// (0x00075fe5) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0007a8a5) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0007a8a5) find_pinb_pane_g

0xa867,	// (0x00075ff1) find_pinb_pane_t1_ParamLimits

0xa879,	// (0x00076003) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0007a8aa) find_pinb_pane_t_ParamLimits

0xa01b,	// (0x000757a5) main_call3_pane

0x1ec4,	// (0x0006d64e) cale_month_day_heading_pane_t1_ParamLimits

0x1f06,	// (0x0006d690) cale_month_day_heading_pane_t2_ParamLimits

0x1f3b,	// (0x0006d6c5) cale_month_day_heading_pane_t3_ParamLimits

0x1f70,	// (0x0006d6fa) cale_month_day_heading_pane_t4_ParamLimits

0x1fad,	// (0x0006d737) cale_month_day_heading_pane_t5_ParamLimits

0x1ff2,	// (0x0006d77c) cale_month_day_heading_pane_t6_ParamLimits

0x2037,	// (0x0006d7c1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0007aa2c) cale_month_day_heading_pane_t_ParamLimits

0xae38,	// (0x000765c2) smil_status_volume_pane

0x2d67,	// (0x0006e4f1) postcard_address_pane_ParamLimits

0x2d67,	// (0x0006e4f1) postcard_address_pane

0x2d79,	// (0x0006e503) postcard_message_pane_ParamLimits

0x2d79,	// (0x0006e503) postcard_message_pane

0x324b,	// (0x0006e9d5) call2_cli_visual_pane_t1_ParamLimits

0x324b,	// (0x0006e9d5) call2_cli_visual_pane_t1

0x3a78,	// (0x0006f202) postcard_message_pane_t1_ParamLimits

0x3a78,	// (0x0006f202) postcard_message_pane_t1

0x3a61,	// (0x0006f1eb) postcard_address_pane_t1_ParamLimits

0x3a61,	// (0x0006f1eb) postcard_address_pane_t1

0x3a4d,	// (0x0006f1d7) popup_call3_audio_in_window_ParamLimits

0x3a4d,	// (0x0006f1d7) popup_call3_audio_in_window

0x38d8,	// (0x0006f062) bg_popup_call3_in_pane_ParamLimits

0x38d8,	// (0x0006f062) bg_popup_call3_in_pane

0x394e,	// (0x0006f0d8) popup_call3_audio_in_window_g1_ParamLimits

0x394e,	// (0x0006f0d8) popup_call3_audio_in_window_g1

0x396e,	// (0x0006f0f8) popup_call3_audio_in_window_g2_ParamLimits

0x396e,	// (0x0006f0f8) popup_call3_audio_in_window_g2

0x398e,	// (0x0006f118) popup_call3_audio_in_window_g3_ParamLimits

0x398e,	// (0x0006f118) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0007adab) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0007adab) popup_call3_audio_in_window_g

0x39bf,	// (0x0006f149) popup_call3_audio_in_window_t1_ParamLimits

0x39bf,	// (0x0006f149) popup_call3_audio_in_window_t1

0x39fd,	// (0x0006f187) popup_call3_audio_in_window_t2_ParamLimits

0x39fd,	// (0x0006f187) popup_call3_audio_in_window_t2

0x3a3b,	// (0x0006f1c5) popup_call3_audio_in_window_t3_ParamLimits

0x3a3b,	// (0x0006f1c5) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0007adb4) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0007adb4) popup_call3_audio_in_window_t

0xaadc,	// (0x00076266) bg_popup_call3_rect_pane

0xc72b,	// (0x00077eb5) bg_popup_call3_rect_pane_g1

0xa9da,	// (0x00076164) bg_popup_call3_rect_pane_g2

0xc733,	// (0x00077ebd) bg_popup_call3_rect_pane_g3

0xc73b,	// (0x00077ec5) bg_popup_call3_rect_pane_g4

0xc743,	// (0x00077ecd) bg_popup_call3_rect_pane_g5

0xc74b,	// (0x00077ed5) bg_popup_call3_rect_pane_g6

0xc753,	// (0x00077edd) bg_popup_call3_rect_pane_g7

0x29a4,	// (0x0006e12e) mup_visualizer_osc_pane

0xb5dc,	// (0x00076d66) mup_visualizer_spec_pane

0x3908,	// (0x0006f092) call3_video_qcif_pane_ParamLimits

0x3908,	// (0x0006f092) call3_video_qcif_pane

0x391b,	// (0x0006f0a5) call3_video_qcif_uncrop_pane_ParamLimits

0x391b,	// (0x0006f0a5) call3_video_qcif_uncrop_pane

0x3929,	// (0x0006f0b3) call3_video_subqcif_pane_ParamLimits

0x3929,	// (0x0006f0b3) call3_video_subqcif_pane

0x393d,	// (0x0006f0c7) call3_video_subqcif_uncrop_pane_ParamLimits

0x393d,	// (0x0006f0c7) call3_video_subqcif_uncrop_pane

0x39ae,	// (0x0006f138) popup_call3_audio_in_window_g4_ParamLimits

0x39ae,	// (0x0006f138) popup_call3_audio_in_window_g4

0x38c7,	// (0x0006f051) mup_spec_half_pane

0x38d0,	// (0x0006f05a) mup_spec_half_pane_cp

0xc9e5,	// (0x0007816f) mup_osc_middle_pane

0xc9ee,	// (0x00078178) mup_visualizer_osc_pane_g1

0x38a7,	// (0x0006f031) mup_spec_bar_pane_ParamLimits

0x38a7,	// (0x0006f031) mup_spec_bar_pane

0xc9d2,	// (0x0007815c) mup_spec_bar_pane_g1

0xc9dc,	// (0x00078166) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0007ad9f) mup_spec_bar_pane_g

0x0b2b,	// (0x0006c2b5) aid_cale_week_size_cell_pane_ParamLimits

0x0b45,	// (0x0006c2cf) bg_cale_heading_pane_ParamLimits

0xaa35,	// (0x000761bf) bg_cale_pane_cp01_ParamLimits

0x0b5d,	// (0x0006c2e7) cale_week_corner_pane_ParamLimits

0x0b7c,	// (0x0006c306) cale_week_day_heading_pane_ParamLimits

0x0b99,	// (0x0006c323) cale_week_scroll_pane_g1_ParamLimits

0x0bac,	// (0x0006c336) cale_week_scroll_pane_g2_ParamLimits

0x0bc4,	// (0x0006c34e) cale_week_scroll_pane_g3_ParamLimits

0x0bdc,	// (0x0006c366) cale_week_scroll_pane_g4_ParamLimits

0x0bf4,	// (0x0006c37e) cale_week_scroll_pane_g5_ParamLimits

0x0c14,	// (0x0006c39e) cale_week_scroll_pane_g6_ParamLimits

0x0c34,	// (0x0006c3be) cale_week_scroll_pane_g7_ParamLimits

0x0c54,	// (0x0006c3de) cale_week_scroll_pane_g8_ParamLimits

0x0c78,	// (0x0006c402) cale_week_scroll_pane_g9_ParamLimits

0x0c90,	// (0x0006c41a) cale_week_scroll_pane_g10_ParamLimits

0x0ca8,	// (0x0006c432) cale_week_scroll_pane_g11_ParamLimits

0x0cc0,	// (0x0006c44a) cale_week_scroll_pane_g12_ParamLimits

0x0cd8,	// (0x0006c462) cale_week_scroll_pane_g13_ParamLimits

0x0cd8,	// (0x0006c462) cale_week_scroll_pane_g14_ParamLimits

0x0cd8,	// (0x0006c462) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0007a936) cale_week_scroll_pane_g_ParamLimits

0x0d14,	// (0x0006c49e) cale_week_time_pane_ParamLimits

0x0d38,	// (0x0006c4c2) grid_cale_week_pane_ParamLimits

0xaa52,	// (0x000761dc) listscroll_cale_week_pane_t1

0xaa64,	// (0x000761ee) scroll_pane_cp08_ParamLimits

0x1a3d,	// (0x0006d1c7) cale_month_corner_pane_ParamLimits

0xae0e,	// (0x00076598) cale_month_pane_t1

0x1e57,	// (0x0006d5e1) cale_month_week_pane_ParamLimits

0x249e,	// (0x0006dc28) popup_call_status_window_g1_ParamLimits

0x24b2,	// (0x0006dc3c) popup_call_status_window_g2_ParamLimits

0x24c6,	// (0x0006dc50) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0007aadc) popup_call_status_window_g_ParamLimits

0xb1be,	// (0x00076948) aid_call2_pane

0x2c14,	// (0x0006e39e) msg_header_pane_g1

0x2d67,	// (0x0006e4f1) postcard_address2_pane_ParamLimits

0x2d67,	// (0x0006e4f1) postcard_address2_pane

0x2d79,	// (0x0006e503) postcard_message2_pane_ParamLimits

0x2d79,	// (0x0006e503) postcard_message2_pane

0x3857,	// (0x0006efe1) message2_row_pane_ParamLimits

0x3857,	// (0x0006efe1) message2_row_pane

0x3874,	// (0x0006effe) address2_row_pane_ParamLimits

0x3874,	// (0x0006effe) address2_row_pane

0xc98b,	// (0x00078115) postcard_message2_row_pane_g1

0xc993,	// (0x0007811d) postcard_message2_row_pane_t1

0xc98b,	// (0x00078115) address2_row_pane_g1

0xc993,	// (0x0007811d) address2_row_pane_t1

0x1072,	// (0x0006c7fc) aid_size_cell_vorec

0xa01b,	// (0x000757a5) main_rss_pane

0x3887,	// (0x0006f011) rss_list_single_pane_ParamLimits

0x3887,	// (0x0006f011) rss_list_single_pane

0xc9b6,	// (0x00078140) rss_list_single_pane_t1

0xc9c4,	// (0x0007814e) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0007ad9a) rss_list_single_pane_t

0xa01b,	// (0x000757a5) main_camera2_pane

0xa01b,	// (0x000757a5) main_video2_pane

0x3af1,	// (0x0006f27b) cams_zoom_pane_cp2_ParamLimits

0x3af1,	// (0x0006f27b) cams_zoom_pane_cp2

0x3b11,	// (0x0006f29b) image2_vga_pane_ParamLimits

0x3b11,	// (0x0006f29b) image2_vga_pane

0x3b62,	// (0x0006f2ec) main_camera2_pane_g1_ParamLimits

0x3b62,	// (0x0006f2ec) main_camera2_pane_g1

0x3b82,	// (0x0006f30c) main_camera2_pane_g2_ParamLimits

0x3b82,	// (0x0006f30c) main_camera2_pane_g2

0x3ba2,	// (0x0006f32c) main_camera2_pane_g3_ParamLimits

0x3ba2,	// (0x0006f32c) main_camera2_pane_g3

0x3bc2,	// (0x0006f34c) main_camera2_pane_g4_ParamLimits

0x3bc2,	// (0x0006f34c) main_camera2_pane_g4

0x3be2,	// (0x0006f36c) main_camera2_pane_g5_ParamLimits

0x3be2,	// (0x0006f36c) main_camera2_pane_g5

0x3c02,	// (0x0006f38c) main_camera2_pane_g6_ParamLimits

0x3c02,	// (0x0006f38c) main_camera2_pane_g6

0x3c22,	// (0x0006f3ac) main_camera2_pane_g7_ParamLimits

0x3c22,	// (0x0006f3ac) main_camera2_pane_g7

0x3c42,	// (0x0006f3cc) main_camera2_pane_g8_ParamLimits

0x3c42,	// (0x0006f3cc) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0007adbb) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0007adbb) main_camera2_pane_g

0x3c82,	// (0x0006f40c) main_camera2_pane_t1_ParamLimits

0x3c82,	// (0x0006f40c) main_camera2_pane_t1

0x3cb7,	// (0x0006f441) main_camera2_pane_t2_ParamLimits

0x3cb7,	// (0x0006f441) main_camera2_pane_t2

0x3cdd,	// (0x0006f467) main_camera2_pane_t3_ParamLimits

0x3cdd,	// (0x0006f467) main_camera2_pane_t3

0x3d3b,	// (0x0006f4c5) main_camera2_pane_t4_ParamLimits

0x3d3b,	// (0x0006f4c5) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0007adce) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0007adce) main_camera2_pane_t

0x3dcd,	// (0x0006f557) cams_zoom_pane_cp4_ParamLimits

0x3dcd,	// (0x0006f557) cams_zoom_pane_cp4

0x3de3,	// (0x0006f56d) image2_cif_pane_ParamLimits

0x3de3,	// (0x0006f56d) image2_cif_pane

0x3e0e,	// (0x0006f598) image2_subqcif_pane_ParamLimits

0x3e0e,	// (0x0006f598) image2_subqcif_pane

0x3e28,	// (0x0006f5b2) main_video2_pane_g1_ParamLimits

0x3e28,	// (0x0006f5b2) main_video2_pane_g1

0x3e42,	// (0x0006f5cc) main_video2_pane_g2_ParamLimits

0x3e42,	// (0x0006f5cc) main_video2_pane_g2

0x3e58,	// (0x0006f5e2) main_video2_pane_g3_ParamLimits

0x3e58,	// (0x0006f5e2) main_video2_pane_g3

0x3e6e,	// (0x0006f5f8) main_video2_pane_g4_ParamLimits

0x3e6e,	// (0x0006f5f8) main_video2_pane_g4

0x3e84,	// (0x0006f60e) main_video2_pane_g5_ParamLimits

0x3e84,	// (0x0006f60e) main_video2_pane_g5

0x3e9a,	// (0x0006f624) main_video2_pane_g6_ParamLimits

0x3e9a,	// (0x0006f624) main_video2_pane_g6

0x0005,

0xf653,	// (0x0007addd) main_video2_pane_g_ParamLimits

0xf653,	// (0x0007addd) main_video2_pane_g

0x3eb4,	// (0x0006f63e) main_video2_pane_t1_ParamLimits

0x3eb4,	// (0x0006f63e) main_video2_pane_t1

0x3ed8,	// (0x0006f662) main_video2_pane_t2_ParamLimits

0x3ed8,	// (0x0006f662) main_video2_pane_t2

0x3f26,	// (0x0006f6b0) main_video2_pane_t3_ParamLimits

0x3f26,	// (0x0006f6b0) main_video2_pane_t3

0x0002,

0xf660,	// (0x0007adea) main_video2_pane_t_ParamLimits

0xf660,	// (0x0007adea) main_video2_pane_t

0x3399,	// (0x0006eb23) call_muted_g2

0x0001,

0xf602,	// (0x0007ad8c) call_muted_g

0xa01b,	// (0x000757a5) main_mup2_pane

0x3f6e,	// (0x0006f6f8) main_mup2_pane_g1_ParamLimits

0x3f6e,	// (0x0006f6f8) main_mup2_pane_g1

0x3f7a,	// (0x0006f704) main_mup2_pane_g2_ParamLimits

0x3f7a,	// (0x0006f704) main_mup2_pane_g2

0x97b3,	// (0x00074f3d) main_mup_pane_g13_cp1

0x97bb,	// (0x00074f45) mup_volume_pane_cp1

0x3f96,	// (0x0006f720) main_mup2_pane_g4_ParamLimits

0x3f96,	// (0x0006f720) main_mup2_pane_g4

0x3fa8,	// (0x0006f732) main_mup2_pane_g5_ParamLimits

0x3fa8,	// (0x0006f732) main_mup2_pane_g5

0x3fba,	// (0x0006f744) main_mup2_pane_g6_ParamLimits

0x3fba,	// (0x0006f744) main_mup2_pane_g6

0x3fcc,	// (0x0006f756) main_mup2_pane_g7_ParamLimits

0x3fcc,	// (0x0006f756) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0007adf1) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0007adf1) main_mup2_pane_g

0x3fe4,	// (0x0006f76e) main_mup2_pane_t1_ParamLimits

0x3fe4,	// (0x0006f76e) main_mup2_pane_t1

0x3ffa,	// (0x0006f784) main_mup2_pane_t2_ParamLimits

0x3ffa,	// (0x0006f784) main_mup2_pane_t2

0x4010,	// (0x0006f79a) main_mup2_pane_t3_ParamLimits

0x4010,	// (0x0006f79a) main_mup2_pane_t3

0x4026,	// (0x0006f7b0) main_mup2_pane_t4_ParamLimits

0x4026,	// (0x0006f7b0) main_mup2_pane_t4

0x403e,	// (0x0006f7c8) main_mup2_pane_t5_ParamLimits

0x403e,	// (0x0006f7c8) main_mup2_pane_t5

0x4056,	// (0x0006f7e0) main_mup2_pane_t6_ParamLimits

0x4056,	// (0x0006f7e0) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0007ae00) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0007ae00) main_mup2_pane_t

0x4086,	// (0x0006f810) mup2_visualizer_pane_ParamLimits

0x4086,	// (0x0006f810) mup2_visualizer_pane

0x40b4,	// (0x0006f83e) mup_progress_pane_cp_ParamLimits

0x40b4,	// (0x0006f83e) mup_progress_pane_cp

0x979e,	// (0x00074f28) mup_volume_pane_cp_ParamLimits

0x979e,	// (0x00074f28) mup_volume_pane_cp

0x40c8,	// (0x0006f852) mup2_visualizer_pane_g1_ParamLimits

0x40c8,	// (0x0006f852) mup2_visualizer_pane_g1

0xca25,	// (0x000781af) mup2_visualizer_pane_g2_ParamLimits

0xca25,	// (0x000781af) mup2_visualizer_pane_g2

0x40df,	// (0x0006f869) mup2_visualizer_pane_g3_ParamLimits

0x40df,	// (0x0006f869) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0007ae0d) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0007ae0d) mup2_visualizer_pane_g

0xb803,	// (0x00076f8d) aid_size_cell_fmradio

0x354b,	// (0x0006ecd5) aid_height_parent_landcape

0xac6c,	// (0x000763f6) wml_content_pane_cp

0xac74,	// (0x000763fe) wml_tabs_pane

0xac7d,	// (0x00076407) popup_wml_miniature_window

0xac85,	// (0x0007640f) scroll_pane_cp021

0xac99,	// (0x00076423) wml_content_pane_comp8

0xa01b,	// (0x000757a5) bg_popup_sub_pane_cp05

0xca43,	// (0x000781cd) popup_wml_miniature_window_g1

0xca4b,	// (0x000781d5) wml_miniature_view_pane

0x40eb,	// (0x0006f875) aid_size_wml_view

0x40f3,	// (0x0006f87d) wml_miniature_view_pane_g1

0x40fc,	// (0x0006f886) wml_miniature_view_pane_g2

0x4105,	// (0x0006f88f) wml_miniature_view_pane_g3

0x410d,	// (0x0006f897) wml_miniature_view_pane_g4

0x4115,	// (0x0006f89f) wml_miniature_view_pane_g5

0x411d,	// (0x0006f8a7) wml_miniature_view_pane_g6

0x4125,	// (0x0006f8af) wml_miniature_view_pane_g7

0x412d,	// (0x0006f8b7) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0007ae14) wml_miniature_view_pane_g

0xca53,	// (0x000781dd) background_graphic_ParamLimits

0xca53,	// (0x000781dd) background_graphic

0xca5f,	// (0x000781e9) wml_tabs_2_pane

0xca68,	// (0x000781f2) wml_tabs_3_pane_ParamLimits

0xca68,	// (0x000781f2) wml_tabs_3_pane

0xca7a,	// (0x00078204) wml_tabs_4_pane_ParamLimits

0xca7a,	// (0x00078204) wml_tabs_4_pane

0xca90,	// (0x0007821a) wml_tabs_5_pane_ParamLimits

0xca90,	// (0x0007821a) wml_tabs_5_pane

0xcaaa,	// (0x00078234) wml_tabs_pane_g2_ParamLimits

0xcaaa,	// (0x00078234) wml_tabs_pane_g2

0xcabe,	// (0x00078248) wml_tabs_pane_g3_ParamLimits

0xcabe,	// (0x00078248) wml_tabs_pane_g3

0x4135,	// (0x0006f8bf) wml_tabs_2_active_pane_ParamLimits

0x4135,	// (0x0006f8bf) wml_tabs_2_active_pane

0x4149,	// (0x0006f8d3) wml_tabs_2_passive_pane_ParamLimits

0x4149,	// (0x0006f8d3) wml_tabs_2_passive_pane

0x415d,	// (0x0006f8e7) wml_tabs_3_active_pane_cp_ParamLimits

0x415d,	// (0x0006f8e7) wml_tabs_3_active_pane_cp

0x4172,	// (0x0006f8fc) wml_tabs_3_passive_pane_ParamLimits

0x4172,	// (0x0006f8fc) wml_tabs_3_passive_pane

0x4185,	// (0x0006f90f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4185,	// (0x0006f90f) wml_tabs_3_passive_pane_cp

0x419c,	// (0x0006f926) tabs_4_active_pane

0x41a4,	// (0x0006f92e) tabs_4_passive_pane

0x41ae,	// (0x0006f938) tabs_4_passive_pane_cp

0x41b6,	// (0x0006f940) tabs_4_passive_pane_cp2

0x3266,	// (0x0006e9f0) aid_height_text

0x2976,	// (0x0006e100) mup_volume_cont_pane_ParamLimits

0x2976,	// (0x0006e100) mup_volume_cont_pane

0x0741,	// (0x0006becb) aid_size_cell_pinb

0x074b,	// (0x0006bed5) aid_size_list_pinb

0x40a0,	// (0x0006f82a) mup2_volume_cont_pane_ParamLimits

0x40a0,	// (0x0006f82a) mup2_volume_cont_pane

0x978a,	// (0x00074f14) mup2_volume_cont_pane_g1_ParamLimits

0x978a,	// (0x00074f14) mup2_volume_cont_pane_g1

0x03f3,	// (0x0006bb7d) aid_size_cell_touch_ParamLimits

0x03f3,	// (0x0006bb7d) aid_size_cell_touch

0x0630,	// (0x0006bdba) touch_pane_ParamLimits

0x0630,	// (0x0006bdba) touch_pane

0x946e,	// (0x00074bf8) main_rss2_pane

0xcadb,	// (0x00078265) listscroll_rss2_pane

0xcae4,	// (0x0007826e) rss2_navigation_pane

0xcaec,	// (0x00078276) list_rss2_pane

0xb2e3,	// (0x00076a6d) scroll_pane_cp22

0xcaf4,	// (0x0007827e) rss2_navigation_pane_g1

0xcafd,	// (0x00078287) rss2_navigation_pane_g2

0xcb05,	// (0x0007828f) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0007ae25) rss2_navigation_pane_g

0xcb0d,	// (0x00078297) rss2_navigation_pane_t1

0x41c0,	// (0x0006f94a) rss2_list_single_pane_ParamLimits

0x41c0,	// (0x0006f94a) rss2_list_single_pane

0xcb1b,	// (0x000782a5) rss2_list_single_pane_t2

0xcb29,	// (0x000782b3) rss2_list_single_pane_t3_ParamLimits

0xcb29,	// (0x000782b3) rss2_list_single_pane_t3

0xcb46,	// (0x000782d0) rss2_list_single_pane_t4

0x22a9,	// (0x0006da33) smil_status_pane_g1

0x9460,	// (0x00074bea) main_image2_pane_ParamLimits

0x9460,	// (0x00074bea) main_image2_pane

0x3c62,	// (0x0006f3ec) main_camera2_pane_g9_ParamLimits

0x3c62,	// (0x0006f3ec) main_camera2_pane_g9

0x3d90,	// (0x0006f51a) main_camera2_pane_t5_ParamLimits

0x3d90,	// (0x0006f51a) main_camera2_pane_t5

0x975a,	// (0x00074ee4) main_camera2_pane_t6_ParamLimits

0x975a,	// (0x00074ee4) main_camera2_pane_t6

0x41d6,	// (0x0006f960) main_image2_pane_g1_ParamLimits

0x41d6,	// (0x0006f960) main_image2_pane_g1

0x2fa1,	// (0x0006e72b) smil2_video_pane_ParamLimits

0x2fa1,	// (0x0006e72b) smil2_video_pane

0x042b,	// (0x0006bbb5) aid_zoom_text_primary_cp

0x9456,	// (0x00074be0) popup_preview_fixed_window

0xabd5,	// (0x0007635f) im_reading_pane_g1

0x3ad9,	// (0x0006f263) cams2_bc_adjust_pane_cp_ParamLimits

0x3ad9,	// (0x0006f263) cams2_bc_adjust_pane_cp

0x3dbf,	// (0x0006f549) cams2_bc_adjust_pane_ParamLimits

0x3dbf,	// (0x0006f549) cams2_bc_adjust_pane

0xdb80,	// (0x0007930a) cams2_bc_adjust_pane_g1

0x97c3,	// (0x00074f4d) cams2_slider_pane

0x97cc,	// (0x00074f56) cams2_slider_pane_g1

0x97d5,	// (0x00074f5f) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0007ae2c) cams2_slider_pane_g

0x0833,	// (0x0006bfbd) calc_display_pane_ParamLimits

0x0858,	// (0x0006bfe2) calc_paper_pane_ParamLimits

0x087b,	// (0x0006c005) grid_calc_pane_ParamLimits

0x967f,	// (0x00074e09) popup_clock_digital_window_t1_ParamLimits

0xb7a0,	// (0x00076f2a) main_image_pane_t1

0x0815,	// (0x0006bf9f) aid_size_cell_calc_ParamLimits

0x0815,	// (0x0006bf9f) aid_size_cell_calc

0x35a3,	// (0x0006ed2d) popup_blid_sat_info2_window_ParamLimits

0x35a3,	// (0x0006ed2d) popup_blid_sat_info2_window

0xcb5c,	// (0x000782e6) aid_size_cell_blid

0xcb64,	// (0x000782ee) bg_popup_window_pane_cp07

0xcb87,	// (0x00078311) grid_popup_blid_pane

0xcb91,	// (0x0007831b) heading_pane_cp05_ParamLimits

0xcb91,	// (0x0007831b) heading_pane_cp05

0xcc5b,	// (0x000783e5) cell_popup_blid_pane_ParamLimits

0xcc5b,	// (0x000783e5) cell_popup_blid_pane

0xcc7f,	// (0x00078409) cell_popup_blid_pane_g1

0xcc87,	// (0x00078411) cell_popup_blid_pane_t1

0x4070,	// (0x0006f7fa) mup2_indicator_pane_ParamLimits

0x4070,	// (0x0006f7fa) mup2_indicator_pane

0xaadc,	// (0x00076266) mup2_visualizer_osc_pane

0xca31,	// (0x000781bb) mup2_visualizer_spec_pane_ParamLimits

0xca31,	// (0x000781bb) mup2_visualizer_spec_pane

0x41ec,	// (0x0006f976) mup2_spec_half_pane

0x41f5,	// (0x0006f97f) mup2_spec_half_pane_cp

0x41fd,	// (0x0006f987) mup2_spec_bar_pane_ParamLimits

0x41fd,	// (0x0006f987) mup2_spec_bar_pane

0xc9d2,	// (0x0007815c) mup2_spec_bar_pane_g1

0xc9dc,	// (0x00078166) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0007ad9f) mup2_spec_bar_pane_g

0x421d,	// (0x0006f9a7) mup2_osc_middle_pane

0xc9ee,	// (0x00078178) mup2_visualizer_osc_pane_g1

0x9498,	// (0x00074c22) popup_number_entry_window_t1_ParamLimits

0x94ab,	// (0x00074c35) popup_number_entry_window_t2_ParamLimits

0x94bd,	// (0x00074c47) popup_number_entry_window_t3_ParamLimits

0x0682,	// (0x0006be0c) popup_number_entry_window_t5_ParamLimits

0x0682,	// (0x0006be0c) popup_number_entry_window_t5

0xf0c6,	// (0x0007a850) popup_number_entry_window_t_ParamLimits

0x94cf,	// (0x00074c59) text_title_cp2_ParamLimits

0x96be,	// (0x00074e48) aid_hotspot_pointer_text2_pane

0x96d8,	// (0x00074e62) main_viewer_pane_g9_ParamLimits

0x96d8,	// (0x00074e62) main_viewer_pane_g9

0xae0e,	// (0x00076598) cale_month_pane_t1_ParamLimits

0xae4b,	// (0x000765d5) bg_cale_pane_ParamLimits

0xae63,	// (0x000765ed) list_cale_pane_ParamLimits

0xae74,	// (0x000765fe) listscroll_cale_day_pane_t1

0xae86,	// (0x00076610) scroll_pane_cp09_ParamLimits

0x29ac,	// (0x0006e136) main_mup_eq_pane_t1_ParamLimits

0x29ac,	// (0x0006e136) main_mup_eq_pane_t1

0x29c6,	// (0x0006e150) main_mup_eq_pane_t2_ParamLimits

0x29c6,	// (0x0006e150) main_mup_eq_pane_t2

0x29e0,	// (0x0006e16a) main_mup_eq_pane_t3_ParamLimits

0x29e0,	// (0x0006e16a) main_mup_eq_pane_t3

0x29fc,	// (0x0006e186) main_mup_eq_pane_t4_ParamLimits

0x29fc,	// (0x0006e186) main_mup_eq_pane_t4

0x2a18,	// (0x0006e1a2) main_mup_eq_pane_t5_ParamLimits

0x2a18,	// (0x0006e1a2) main_mup_eq_pane_t5

0x2a34,	// (0x0006e1be) main_mup_eq_pane_t6_ParamLimits

0x2a34,	// (0x0006e1be) main_mup_eq_pane_t6

0x2a48,	// (0x0006e1d2) main_mup_eq_pane_t7_ParamLimits

0x2a48,	// (0x0006e1d2) main_mup_eq_pane_t7

0x2a5c,	// (0x0006e1e6) main_mup_eq_pane_t8_ParamLimits

0x2a5c,	// (0x0006e1e6) main_mup_eq_pane_t8

0x2a70,	// (0x0006e1fa) main_mup_eq_pane_t9_ParamLimits

0x2a70,	// (0x0006e1fa) main_mup_eq_pane_t9

0x2a8a,	// (0x0006e214) main_mup_eq_pane_t10_ParamLimits

0x2a8a,	// (0x0006e214) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0007abdb) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0007abdb) main_mup_eq_pane_t

0x2b39,	// (0x0006e2c3) mup_equalizer_pane_cp5_ParamLimits

0x2b4d,	// (0x0006e2d7) mup_equalizer_pane_cp6_ParamLimits

0x2b61,	// (0x0006e2eb) mup_equalizer_pane_cp7_ParamLimits

0x946e,	// (0x00074bf8) main_gallery_pane

0xc9f7,	// (0x00078181) smil2_volume_pane

0xc9ff,	// (0x00078189) smil_status_volume_pane_g1_ParamLimits

0xca12,	// (0x0007819c) smil_status_volume_pane_g2_ParamLimits

0x9738,	// (0x00074ec2) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0007ada4) smil_status_volume_pane_g_ParamLimits

0xcb64,	// (0x000782ee) bg_popup_window_pane_cp07_ParamLimits

0xcb72,	// (0x000782fc) blid_firmament_pane

0x4226,	// (0x0006f9b0) aid_size_cell_gallery_ParamLimits

0x4226,	// (0x0006f9b0) aid_size_cell_gallery

0x423c,	// (0x0006f9c6) grid_gallery_pane_ParamLimits

0x423c,	// (0x0006f9c6) grid_gallery_pane

0x4255,	// (0x0006f9df) cell_gallery_pane_ParamLimits

0x4255,	// (0x0006f9df) cell_gallery_pane

0xcc95,	// (0x0007841f) bg_cell_gallery_focus_pane_ParamLimits

0xcc95,	// (0x0007841f) bg_cell_gallery_focus_pane

0xcca7,	// (0x00078431) cell_gallery_pane_g1_ParamLimits

0xcca7,	// (0x00078431) cell_gallery_pane_g1

0x429e,	// (0x0006fa28) cell_gallery_pane_g2_ParamLimits

0x429e,	// (0x0006fa28) cell_gallery_pane_g2

0x42ab,	// (0x0006fa35) cell_gallery_pane_g3_ParamLimits

0x42ab,	// (0x0006fa35) cell_gallery_pane_g3

0xccb3,	// (0x0007843d) cell_gallery_pane_g4_ParamLimits

0xccb3,	// (0x0007843d) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0007ae52) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0007ae52) cell_gallery_pane_g

0xccbf,	// (0x00078449) bg_cell_gallery_focus_pane_g1

0xccc7,	// (0x00078451) bg_cell_gallery_focus_pane_g2

0xcccf,	// (0x00078459) bg_cell_gallery_focus_pane_g3

0xccd7,	// (0x00078461) bg_cell_gallery_focus_pane_g4

0xccdf,	// (0x00078469) bg_cell_gallery_focus_pane_g5

0xcce7,	// (0x00078471) bg_cell_gallery_focus_pane_g6

0xccef,	// (0x00078479) bg_cell_gallery_focus_pane_g7

0xccf7,	// (0x00078481) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0007ae5b) bg_cell_gallery_focus_pane_g

0xccff,	// (0x00078489) aid_firma_cardinal

0xcd13,	// (0x0007849d) blid_firmament_pane_t1

0xcd2a,	// (0x000784b4) blid_firmament_pane_t2

0xcd41,	// (0x000784cb) blid_firmament_pane_t3

0xcd58,	// (0x000784e2) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0007ae6c) blid_firmament_pane_t

0xcd6f,	// (0x000784f9) blid_sat_info_pane

0xcd7f,	// (0x00078509) blid_sat_info_pane_g1

0xcd7f,	// (0x00078509) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0007ae75) blid_sat_info_pane_g

0xcd89,	// (0x00078513) blid_sat_info_pane_t1

0xcd97,	// (0x00078521) smil2_volume_content_pane

0xcda0,	// (0x0007852a) smil2_volume_pane_g1

0xa971,	// (0x000760fb) smil2_volume_content_pane_g1

0xcda8,	// (0x00078532) smil2_volume_content_pane_g2

0xcdb1,	// (0x0007853b) smil2_volume_content_pane_g3

0xcdba,	// (0x00078544) smil2_volume_content_pane_g4

0xcdc3,	// (0x0007854d) smil2_volume_content_pane_g5

0xcdcc,	// (0x00078556) smil2_volume_content_pane_g6

0xcdd5,	// (0x0007855f) smil2_volume_content_pane_g7

0xcdde,	// (0x00078568) smil2_volume_content_pane_g8

0xcde7,	// (0x00078571) smil2_volume_content_pane_g9

0xcdf0,	// (0x0007857a) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0007ae7a) smil2_volume_content_pane_g

0x0dec,	// (0x0006c576) cale_week_day_heading_pane_t1_ParamLimits

0x0e16,	// (0x0006c5a0) cale_week_day_heading_pane_t2_ParamLimits

0x0e45,	// (0x0006c5cf) cale_week_day_heading_pane_t3_ParamLimits

0x0e74,	// (0x0006c5fe) cale_week_day_heading_pane_t4_ParamLimits

0x0ea3,	// (0x0006c62d) cale_week_day_heading_pane_t5_ParamLimits

0x0eda,	// (0x0006c664) cale_week_day_heading_pane_t6_ParamLimits

0x0f11,	// (0x0006c69b) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0007a957) cale_week_day_heading_pane_t_ParamLimits

0xaa81,	// (0x0007620b) bg_cale_side_pane_ParamLimits

0x0f3b,	// (0x0006c6c5) cale_week_time_pane_t1_ParamLimits

0x0f55,	// (0x0006c6df) cale_week_time_pane_t2_ParamLimits

0x0f6f,	// (0x0006c6f9) cale_week_time_pane_t3_ParamLimits

0x0f89,	// (0x0006c713) cale_week_time_pane_t4_ParamLimits

0x0fa3,	// (0x0006c72d) cale_week_time_pane_t5_ParamLimits

0x0fbd,	// (0x0006c747) cale_week_time_pane_t6_ParamLimits

0x0fd7,	// (0x0006c761) cale_week_time_pane_t7_ParamLimits

0x0ff1,	// (0x0006c77b) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0007a966) cale_week_time_pane_t_ParamLimits

0x1011,	// (0x0006c79b) cell_cale_week_pane_g2_ParamLimits

0xaa81,	// (0x0007620b) bg_cale_side_pane_cp01_ParamLimits

0x2084,	// (0x0006d80e) cale_month_week_pane_t1_ParamLimits

0x209d,	// (0x0006d827) cale_month_week_pane_t2_ParamLimits

0x20b6,	// (0x0006d840) cale_month_week_pane_t3_ParamLimits

0x20cf,	// (0x0006d859) cale_month_week_pane_t4_ParamLimits

0x20e8,	// (0x0006d872) cale_month_week_pane_t5_ParamLimits

0x2101,	// (0x0006d88b) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0007aa3b) cale_month_week_pane_t_ParamLimits

0x95ff,	// (0x00074d89) cell_cale_month_pane_g1_ParamLimits

0x946e,	// (0x00074bf8) main_cale_event_viewer_pane

0x93f8,	// (0x00074b82) listscroll_cale_event_viewer_pane

0xcdf9,	// (0x00078583) list_cale_ev_pane

0xce01,	// (0x0007858b) scroll_pane_cp023

0xce0d,	// (0x00078597) field_cale_ev_pane_ParamLimits

0xce0d,	// (0x00078597) field_cale_ev_pane

0xce2b,	// (0x000785b5) field_cale_ev_content_pane_ParamLimits

0xce2b,	// (0x000785b5) field_cale_ev_content_pane

0xce37,	// (0x000785c1) field_cale_ev_pane_g1_ParamLimits

0xce37,	// (0x000785c1) field_cale_ev_pane_g1

0xce43,	// (0x000785cd) field_cale_ev_pane_g2_ParamLimits

0xce43,	// (0x000785cd) field_cale_ev_pane_g2

0xce5b,	// (0x000785e5) field_cale_ev_pane_g3_ParamLimits

0xce5b,	// (0x000785e5) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0007ae8f) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0007ae8f) field_cale_ev_pane_g

0xce73,	// (0x000785fd) field_cale_ev_pane_t1_ParamLimits

0xce73,	// (0x000785fd) field_cale_ev_pane_t1

0xa9f4,	// (0x0007617e) field_cale_ev_content_pane_t1_ParamLimits

0xa9f4,	// (0x0007617e) field_cale_ev_content_pane_t1

0xb686,	// (0x00076e10) bg_button_pane_cp01

0x0b19,	// (0x0006c2a3) listscroll_cale_week_pane_ParamLimits

0xaa2c,	// (0x000761b6) popup_toolbar_window_cp01

0xaa52,	// (0x000761dc) listscroll_cale_week_pane_t1_ParamLimits

0x0b19,	// (0x0006c2a3) listscroll_cale_day_pane_ParamLimits

0xaa2c,	// (0x000761b6) popup_toolbar_window_cp02

0xae74,	// (0x000765fe) listscroll_cale_day_pane_t1_ParamLimits

0x3569,	// (0x0006ecf3) main_cale_month_pane_ParamLimits

0x9723,	// (0x00074ead) popup_toolbar_window_cp03_ParamLimits

0x9723,	// (0x00074ead) popup_toolbar_window_cp03

0x2e69,	// (0x0006e5f3) main_image_pane_g2_ParamLimits

0x2e69,	// (0x0006e5f3) main_image_pane_g2

0x2e7a,	// (0x0006e604) main_image_pane_g3_ParamLimits

0x2e7a,	// (0x0006e604) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0007ac6d) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0007ac6d) main_image_pane_g

0xb7a0,	// (0x00076f2a) main_image_pane_t1_ParamLimits

0x2e8b,	// (0x0006e615) main_image_pane_t2_ParamLimits

0x2e8b,	// (0x0006e615) main_image_pane_t2

0x2e9d,	// (0x0006e627) main_image_pane_t3_ParamLimits

0x2e9d,	// (0x0006e627) main_image_pane_t3

0x2ec5,	// (0x0006e64f) main_image_pane_t4_ParamLimits

0x2ec5,	// (0x0006e64f) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0007ac74) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0007ac74) main_image_pane_t

0x2ee5,	// (0x0006e66f) popup_image_details_window_cp01

0x2eef,	// (0x0006e679) popup_toobar_trans_pane_cp01_ParamLimits

0x2eef,	// (0x0006e679) popup_toobar_trans_pane_cp01

0x3674,	// (0x0006edfe) popup_image_details_window_ParamLimits

0x3674,	// (0x0006edfe) popup_image_details_window

0x96f6,	// (0x00074e80) popup_image_focus_window

0x3a93,	// (0x0006f21d) camera2_autofocus_pane_ParamLimits

0x3a93,	// (0x0006f21d) camera2_autofocus_pane

0x93f8,	// (0x00074b82) bg_popup_sub_pane_cp06

0xce8a,	// (0x00078614) popup_image_focus_window_g1

0xce92,	// (0x0007861c) popup_image_focus_window_g2

0xce9a,	// (0x00078624) popup_image_focus_window_g3

0xcea2,	// (0x0007862c) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0007ae96) popup_image_focus_window_g

0xceaa,	// (0x00078634) popup_image_focus_window_t1

0xceb8,	// (0x00078642) popup_image_focus_window_t2

0xcec8,	// (0x00078652) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0007ae9f) popup_image_focus_window_t

0xced6,	// (0x00078660) camera2_autofocus_pane_g1

0xa0b6,	// (0x00075840) bg_tb_trans_pane_cp01

0xcee4,	// (0x0007866e) popup_image_details_window_g1

0xcef7,	// (0x00078681) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0007aeb1) popup_image_details_window_g

0xcf20,	// (0x000786aa) popup_image_details_window_t1

0xcf32,	// (0x000786bc) popup_image_details_window_t2

0xcf4b,	// (0x000786d5) popup_image_details_window_t3

0xcf5f,	// (0x000786e9) popup_image_details_window_t4

0xcf7a,	// (0x00078704) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0007aeb8) popup_image_details_window_t

0xa8dc,	// (0x00076066) bg_calc_paper_pane_ParamLimits

0x946e,	// (0x00074bf8) grid_highlight_pane_cp013

0x956f,	// (0x00074cf9) list_calc_pane_ParamLimits

0x9581,	// (0x00074d0b) scroll_pane_cp024

0xa8f0,	// (0x0007607a) bg_calc_display_pane_ParamLimits

0x0979,	// (0x0006c103) calc_display_pane_t1_ParamLimits

0x098b,	// (0x0006c115) calc_display_pane_t2_ParamLimits

0x9589,	// (0x00074d13) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0007a8d7) calc_display_pane_t_ParamLimits

0x0a45,	// (0x0006c1cf) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0007a8f4) cell_calc_pane_g

0x0a4e,	// (0x0006c1d8) cell_calc_pane_t1

0xa94f,	// (0x000760d9) grid_highlight_pane_cp02_ParamLimits

0xa965,	// (0x000760ef) toolbar_button_pane_cp01_ParamLimits

0xa965,	// (0x000760ef) toolbar_button_pane_cp01

0xb7e5,	// (0x00076f6f) temp_image_control_pane_ParamLimits

0xb7e5,	// (0x00076f6f) temp_image_control_pane

0x9460,	// (0x00074bea) main_mp3_pane

0xcf94,	// (0x0007871e) temp_image_control_pane_g1_ParamLimits

0xcf94,	// (0x0007871e) temp_image_control_pane_g1

0xcfa2,	// (0x0007872c) temp_image_control_pane_g2_ParamLimits

0xcfa2,	// (0x0007872c) temp_image_control_pane_g2

0xcfb4,	// (0x0007873e) temp_image_control_pane_g3_ParamLimits

0xcfb4,	// (0x0007873e) temp_image_control_pane_g3

0x42e8,	// (0x0006fa72) temp_image_control_pane_g4_ParamLimits

0x42e8,	// (0x0006fa72) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0007aec3) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0007aec3) temp_image_control_pane_g

0xcf94,	// (0x0007871e) main_mp3_pane_g1

0x42fb,	// (0x0006fa85) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0007aecc) main_mp3_pane_g

0xcff7,	// (0x00078781) main_mp3_pane_t1

0xaae4,	// (0x0007626e) main_camera_pane_g8_ParamLimits

0xaae4,	// (0x0007626e) main_camera_pane_g8

0x1315,	// (0x0006ca9f) main_video_pane_g7_ParamLimits

0x1315,	// (0x0006ca9f) main_video_pane_g7

0x9778,	// (0x00074f02) main_camera2_pane_t7_ParamLimits

0x9778,	// (0x00074f02) main_camera2_pane_t7

0xac2c,	// (0x000763b6) scroll_pane_cp025_ParamLimits

0xac2c,	// (0x000763b6) scroll_pane_cp025

0xac40,	// (0x000763ca) scroll_pane_cp026_ParamLimits

0xac40,	// (0x000763ca) scroll_pane_cp026

0xac4f,	// (0x000763d9) wml_content_pane_ParamLimits

0x946e,	// (0x00074bf8) main_touch_calib_pane

0x43cf,	// (0x0006fb59) main_touch_calib_pane_g1

0x43e1,	// (0x0006fb6b) main_touch_calib_pane_g2

0x43f3,	// (0x0006fb7d) main_touch_calib_pane_g3

0x4405,	// (0x0006fb8f) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0007aeea) main_touch_calib_pane_g

0x4417,	// (0x0006fba1) main_touch_calib_pane_t1

0x4431,	// (0x0006fbbb) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0007aef3) main_touch_calib_pane_t

0xb3b2,	// (0x00076b3c) mup_progress_pane_cp02

0xb3e7,	// (0x00076b71) navi_pane_g1

0xb4a2,	// (0x00076c2c) navi_pane_mp_t3

0x9460,	// (0x00074bea) main_mp3_pane_ParamLimits

0x37ff,	// (0x0006ef89) navi_pane_ParamLimits

0xcf94,	// (0x0007871e) main_mp3_pane_g1_ParamLimits

0x42fb,	// (0x0006fa85) main_mp3_pane_g2_ParamLimits

0x4309,	// (0x0006fa93) main_mp3_pane_g3_ParamLimits

0x4309,	// (0x0006fa93) main_mp3_pane_g3

0x4317,	// (0x0006faa1) main_mp3_pane_g4_ParamLimits

0x4317,	// (0x0006faa1) main_mp3_pane_g4

0xcfc4,	// (0x0007874e) main_mp3_pane_g5_ParamLimits

0xcfc4,	// (0x0007874e) main_mp3_pane_g5

0xcfd2,	// (0x0007875c) main_mp3_pane_g6_ParamLimits

0xcfd2,	// (0x0007875c) main_mp3_pane_g6

0xcfdf,	// (0x00078769) main_mp3_pane_g7_ParamLimits

0xcfdf,	// (0x00078769) main_mp3_pane_g7

0xcfeb,	// (0x00078775) main_mp3_pane_g8_ParamLimits

0xcfeb,	// (0x00078775) main_mp3_pane_g8

0xf742,	// (0x0007aecc) main_mp3_pane_g_ParamLimits

0x4323,	// (0x0006faad) main_mp3_pane_t2

0x4331,	// (0x0006fabb) main_mp3_pane_t3

0xd005,	// (0x0007878f) main_mp3_pane_t4

0xd013,	// (0x0007879d) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0007aedd) main_mp3_pane_t

0xd021,	// (0x000787ab) mup_progress_pane_cp01

0x042b,	// (0x0006bbb5) aid_zoom_text_secondary2

0xcdf9,	// (0x00078583) list_cale_ev2_pane

0xce01,	// (0x0007858b) scroll_pane_cp023_ParamLimits

0x4487,	// (0x0006fc11) field_cale_ev2_pane_ParamLimits

0x4487,	// (0x0006fc11) field_cale_ev2_pane

0xa0c4,	// (0x0007584e) field_cale_ev2_pane_g1_ParamLimits

0xa0c4,	// (0x0007584e) field_cale_ev2_pane_g1

0xa0d0,	// (0x0007585a) field_cale_ev2_pane_g2_ParamLimits

0xa0d0,	// (0x0007585a) field_cale_ev2_pane_g2

0xa0e8,	// (0x00075872) field_cale_ev2_pane_g3_ParamLimits

0xa0e8,	// (0x00075872) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0007aefe) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0007aefe) field_cale_ev2_pane_g

0xa10c,	// (0x00075896) field_cale_ev2_pane_t1_ParamLimits

0xa10c,	// (0x00075896) field_cale_ev2_pane_t1

0xa123,	// (0x000758ad) field_cale_ev2_pane_t2_ParamLimits

0xa123,	// (0x000758ad) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0007af07) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0007af07) field_cale_ev2_pane_t

0x2d1d,	// (0x0006e4a7) main_postcard_pane_g5_ParamLimits

0x2d1d,	// (0x0006e4a7) main_postcard_pane_g5

0x2d33,	// (0x0006e4bd) main_postcard_pane_g6_ParamLimits

0x2d33,	// (0x0006e4bd) main_postcard_pane_g6

0x10db,	// (0x0006c865) camera2_autofocus_pane_cp_ParamLimits

0x10db,	// (0x0006c865) camera2_autofocus_pane_cp

0x9460,	// (0x00074bea) main_mup3_pane

0x44ec,	// (0x0006fc76) main_mup3_pane_g1_ParamLimits

0x44ec,	// (0x0006fc76) main_mup3_pane_g1

0x450e,	// (0x0006fc98) main_mup3_pane_g2_ParamLimits

0x450e,	// (0x0006fc98) main_mup3_pane_g2

0x458e,	// (0x0006fd18) main_mup3_pane_g3_ParamLimits

0x458e,	// (0x0006fd18) main_mup3_pane_g3

0x45d4,	// (0x0006fd5e) main_mup3_pane_g4_ParamLimits

0x45d4,	// (0x0006fd5e) main_mup3_pane_g4

0x461a,	// (0x0006fda4) main_mup3_pane_g5_ParamLimits

0x461a,	// (0x0006fda4) main_mup3_pane_g5

0x4660,	// (0x0006fdea) main_mup3_pane_g6_ParamLimits

0x4660,	// (0x0006fdea) main_mup3_pane_g6

0xd029,	// (0x000787b3) main_mup3_pane_g7_ParamLimits

0xd029,	// (0x000787b3) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0007af17) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0007af17) main_mup3_pane_g

0x46de,	// (0x0006fe68) main_mup3_pane_t1_ParamLimits

0x46de,	// (0x0006fe68) main_mup3_pane_t1

0x4752,	// (0x0006fedc) main_mup3_pane_t2_ParamLimits

0x4752,	// (0x0006fedc) main_mup3_pane_t2

0x4826,	// (0x0006ffb0) main_mup3_pane_t4_ParamLimits

0x4826,	// (0x0006ffb0) main_mup3_pane_t4

0x487c,	// (0x00070006) main_mup3_pane_t5_ParamLimits

0x487c,	// (0x00070006) main_mup3_pane_t5

0x4938,	// (0x000700c2) main_mup3_pane_t6_ParamLimits

0x4938,	// (0x000700c2) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0007af28) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0007af28) main_mup3_pane_t

0x49f0,	// (0x0007017a) mup3_progress_pane_ParamLimits

0x49f0,	// (0x0007017a) mup3_progress_pane

0x4a7c,	// (0x00070206) popup_mup3_control_window_ParamLimits

0x4a7c,	// (0x00070206) popup_mup3_control_window

0xd037,	// (0x000787c1) popup_mup3_text_window

0x4aae,	// (0x00070238) mup3_progress_pane_t1

0x4acd,	// (0x00070257) mup3_progress_pane_t2

0xd03f,	// (0x000787c9) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0007af35) mup3_progress_pane_t

0xd05c,	// (0x000787e6) mup_progress_pane_cp03

0x93f8,	// (0x00074b82) bg_tb_trans_pane_cp04

0x4aec,	// (0x00070276) mup3_volume_pane

0x4af4,	// (0x0007027e) popup_mup3_control_window_g1

0x4afd,	// (0x00070287) mup3_volume_pane_g1

0x4b06,	// (0x00070290) mup3_volume_pane_g2

0x4b0f,	// (0x00070299) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0007af3c) mup3_volume_pane_g

0x93f8,	// (0x00074b82) bg_tb_trans_pane_cp03

0xd06c,	// (0x000787f6) popup_mup3_text_window_g1

0xd074,	// (0x000787fe) popup_mup3_text_window_t1

0xa938,	// (0x000760c2) list_calc_item_pane_g1_ParamLimits

0xcad2,	// (0x0007825c) mup_volume_pane_cp_g1

0x444b,	// (0x0006fbd5) main_touch_calib_pane_t3

0x445f,	// (0x0006fbe9) main_touch_calib_pane_t4

0x4473,	// (0x0006fbfd) main_touch_calib_pane_t5

0x9402,	// (0x00074b8c) aid_cell_size_toolbar2

0x940a,	// (0x00074b94) aid_popup3_width_pane

0x0423,	// (0x0006bbad) aid_zoom_text_msg_primary

0x10ba,	// (0x0006c844) vorec_t7

0xa8fc,	// (0x00076086) bg_calc_paper_pane_g1_ParamLimits

0xa908,	// (0x00076092) bg_calc_paper_pane_g2_ParamLimits

0xa914,	// (0x0007609e) bg_calc_paper_pane_g3_ParamLimits

0xa920,	// (0x000760aa) bg_calc_paper_pane_g4_ParamLimits

0xa92c,	// (0x000760b6) bg_calc_paper_pane_g5_ParamLimits

0x09d2,	// (0x0006c15c) bg_calc_paper_pane_g6_ParamLimits

0x09e1,	// (0x0006c16b) bg_calc_paper_pane_g7_ParamLimits

0x09f0,	// (0x0006c17a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0007a8de) bg_calc_paper_pane_g_ParamLimits

0x0a03,	// (0x0006c18d) calc_bg_paper_pane_g9_ParamLimits

0x1227,	// (0x0006c9b1) image_qvga_pane_ParamLimits

0x1227,	// (0x0006c9b1) image_qvga_pane

0xa81f,	// (0x00075fa9) bg_popup_sub_pane_cp04_ParamLimits

0xb71c,	// (0x00076ea6) popup_mup_playback_window_g1_ParamLimits

0xb728,	// (0x00076eb2) popup_mup_playback_window_t1_ParamLimits

0xb73d,	// (0x00076ec7) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0007ac68) popup_mup_playback_window_t_ParamLimits

0x3f8a,	// (0x0006f714) main_mup2_pane_g3_ParamLimits

0x3f8a,	// (0x0006f714) main_mup2_pane_g3

0x163a,	// (0x0006cdc4) popup_toolbar_window_cp04

0xbb32,	// (0x000772bc) popup_call2_audio_second_window_g3_ParamLimits

0xbb32,	// (0x000772bc) popup_call2_audio_second_window_g3

0xbf3c,	// (0x000776c6) popup_call2_audio_first_window_g4_ParamLimits

0xbf3c,	// (0x000776c6) popup_call2_audio_first_window_g4

0xc5bb,	// (0x00077d45) popup_call2_audio_in_window_g4_ParamLimits

0xc5bb,	// (0x00077d45) popup_call2_audio_in_window_g4

0x2e4b,	// (0x0006e5d5) aid_area_sk_bg_cut_ParamLimits

0x2e4b,	// (0x0006e5d5) aid_area_sk_bg_cut

0xb752,	// (0x00076edc) aid_area_sk_bg_cut_2_ParamLimits

0xb752,	// (0x00076edc) aid_area_sk_bg_cut_2

0x428e,	// (0x0006fa18) aid_placing_details_win

0x4296,	// (0x0006fa20) aid_placing_details_win_2

0xced6,	// (0x00078660) camera2_autofocus_pane_g1_ParamLimits

0x05c9,	// (0x0006bd53) popup_fixed_preview_cale_window_ParamLimits

0x05c9,	// (0x0006bd53) popup_fixed_preview_cale_window

0xb520,	// (0x00076caa) navi_slider_pane_g3

0xb529,	// (0x00076cb3) navi_slider_pane_g4

0xb532,	// (0x00076cbc) navi_slider_pane_g5

0xb520,	// (0x00076caa) navi_slider_pane_g6

0x96a5,	// (0x00074e2f) navi_slider_pane_g7

0xb653,	// (0x00076ddd) mup_scale_pane_g3

0xb65c,	// (0x00076de6) mup_scale_pane_g4

0xb665,	// (0x00076def) mup_scale_pane_g5

0x2b75,	// (0x0006e2ff) mup_scale_pane_g6

0x2b7e,	// (0x0006e308) mup_scale_pane_g7

0xb520,	// (0x00076caa) cams2_slider_pane_g3

0xcb54,	// (0x000782de) cams2_slider_pane_g4

0x97de,	// (0x00074f68) cams2_slider_pane_g5

0xb520,	// (0x00076caa) cams2_slider_pane_g6

0x97e6,	// (0x00074f70) cams2_slider_pane_g7

0xcd7f,	// (0x00078509) camera2_autofocus_pane_cp_g1

0xc956,	// (0x000780e0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc956,	// (0x000780e0) bg_popup_preview_window_pane_cp02

0xd082,	// (0x0007880c) list_fp_cale_pane_ParamLimits

0xd082,	// (0x0007880c) list_fp_cale_pane

0xd08e,	// (0x00078818) popup_fixed_preview_cale_window_t1_ParamLimits

0xd08e,	// (0x00078818) popup_fixed_preview_cale_window_t1

0x4b18,	// (0x000702a2) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b18,	// (0x000702a2) popup_fixed_preview_cale_window_t2

0x4b2d,	// (0x000702b7) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b2d,	// (0x000702b7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0007af43) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0007af43) popup_fixed_preview_cale_window_t

0x4b42,	// (0x000702cc) list_single_fp_cale_pane_ParamLimits

0x4b42,	// (0x000702cc) list_single_fp_cale_pane

0xd0ac,	// (0x00078836) list_single_fp_cale_pane_g1_ParamLimits

0xd0ac,	// (0x00078836) list_single_fp_cale_pane_g1

0xd0b8,	// (0x00078842) list_single_fp_cale_pane_g2_ParamLimits

0xd0b8,	// (0x00078842) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0007af4a) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0007af4a) list_single_fp_cale_pane_g

0xd0d1,	// (0x0007885b) list_single_fp_cale_pane_t1_ParamLimits

0xd0d1,	// (0x0007885b) list_single_fp_cale_pane_t1

0xd0e3,	// (0x0007886d) list_single_fp_cale_pane_t2_ParamLimits

0xd0e3,	// (0x0007886d) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0007af51) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0007af51) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x946e,	// (0x00074bf8) main_dialer_pane

0x4b58,	// (0x000702e2) aid_cell_size_keypad

0x4b62,	// (0x000702ec) dialer_ne_pane

0x4b6a,	// (0x000702f4) grid_dialer_command_1_pane

0x4b72,	// (0x000702fc) grid_dialer_command_2_pane

0x4b7a,	// (0x00070304) grid_dialer_keypad_pane

0x4b8c,	// (0x00070316) bg_popup_call_pane_cp06_ParamLimits

0x4b8c,	// (0x00070316) bg_popup_call_pane_cp06

0x4b98,	// (0x00070322) dialer_ne_clear_pane_ParamLimits

0x4b98,	// (0x00070322) dialer_ne_clear_pane

0xd116,	// (0x000788a0) dialer_ne_pane_g1

0xd11e,	// (0x000788a8) dialer_ne_pane_t1_ParamLimits

0xd11e,	// (0x000788a8) dialer_ne_pane_t1

0x4ba4,	// (0x0007032e) dialer_ne_pane_t2_ParamLimits

0x4ba4,	// (0x0007032e) dialer_ne_pane_t2

0x4bce,	// (0x00070358) dialer_ne_pane_t3_ParamLimits

0x4bce,	// (0x00070358) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0007af56) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0007af56) dialer_ne_pane_t

0x4bfe,	// (0x00070388) dialer_ne_pane_t3_copy1_ParamLimits

0x4bfe,	// (0x00070388) dialer_ne_pane_t3_copy1

0x4c2d,	// (0x000703b7) cell_dialer_keypad_pane_ParamLimits

0x4c2d,	// (0x000703b7) cell_dialer_keypad_pane

0x4c44,	// (0x000703ce) cell_dialer_command_1_pane_ParamLimits

0x4c44,	// (0x000703ce) cell_dialer_command_1_pane

0x4c5a,	// (0x000703e4) cell_dialer_command_2_pane_ParamLimits

0x4c5a,	// (0x000703e4) cell_dialer_command_2_pane

0xd130,	// (0x000788ba) bg_button_pane_cp02_ParamLimits

0xd130,	// (0x000788ba) bg_button_pane_cp02

0x4c69,	// (0x000703f3) cell_dialer_keypad_pane_g1_ParamLimits

0x4c69,	// (0x000703f3) cell_dialer_keypad_pane_g1

0xd130,	// (0x000788ba) bg_button_pane_cp03_ParamLimits

0xd130,	// (0x000788ba) bg_button_pane_cp03

0x4c7d,	// (0x00070407) cell_dialer_command_1_pane_g1_ParamLimits

0x4c7d,	// (0x00070407) cell_dialer_command_1_pane_g1

0xd13c,	// (0x000788c6) bg_button_pane_cp04

0x4c91,	// (0x0007041b) cell_dialer_command_2_pane_g1

0xaadc,	// (0x00076266) bg_button_pane_cp06

0xd144,	// (0x000788ce) dialer_ne_clear_pane_g1

0xb3f3,	// (0x00076b7d) navi_pane_g2

0xb421,	// (0x00076bab) navi_pane_g3

0x0002,

0xf3e1,	// (0x0007ab6b) navi_pane_g

0xb4b0,	// (0x00076c3a) navi_pane_mv_g2

0xb4d7,	// (0x00076c61) navi_pane_mv_g5

0x2743,	// (0x0006decd) navi_pane_mv_t1

0xa8f0,	// (0x0007607a) main_clock2_pane

0xa0b6,	// (0x00075840) main_clock2_list_pane_ParamLimits

0xa0b6,	// (0x00075840) main_clock2_list_pane

0x4d02,	// (0x0007048c) main_clock2_pane_t1_ParamLimits

0x4d02,	// (0x0007048c) main_clock2_pane_t1

0x4d3d,	// (0x000704c7) main_clock2_pane_t2_ParamLimits

0x4d3d,	// (0x000704c7) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0007af62) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0007af62) main_clock2_pane_t

0x4ddd,	// (0x00070567) popup_clock_analogue_window_cp03_ParamLimits

0x4ddd,	// (0x00070567) popup_clock_analogue_window_cp03

0x4e02,	// (0x0007058c) popup_clock_digital_window_cp02_ParamLimits

0x4e02,	// (0x0007058c) popup_clock_digital_window_cp02

0x4e7b,	// (0x00070605) main_clock2_list_single_pane_ParamLimits

0x4e7b,	// (0x00070605) main_clock2_list_single_pane

0xaadc,	// (0x00076266) list_highlight_pane_cp05

0xd17e,	// (0x00078908) main_clock2_list_single_pane_t1

0x163a,	// (0x0006cdc4) popup_toolbar_window_cp04_ParamLimits

0x42b8,	// (0x0006fa42) camera2_autofocus_pane_g2_ParamLimits

0x42b8,	// (0x0006fa42) camera2_autofocus_pane_g2

0x42c4,	// (0x0006fa4e) camera2_autofocus_pane_g3_ParamLimits

0x42c4,	// (0x0006fa4e) camera2_autofocus_pane_g3

0x42d0,	// (0x0006fa5a) camera2_autofocus_pane_g4_ParamLimits

0x42d0,	// (0x0006fa5a) camera2_autofocus_pane_g4

0x42dc,	// (0x0006fa66) camera2_autofocus_pane_g5_ParamLimits

0x42dc,	// (0x0006fa66) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0007aea6) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0007aea6) camera2_autofocus_pane_g

0x44a8,	// (0x0006fc32) camera2_autofocus_pane_cp_g2

0x44b0,	// (0x0006fc3a) camera2_autofocus_pane_cp_g3

0x44b8,	// (0x0006fc42) camera2_autofocus_pane_cp_g4

0x44c0,	// (0x0006fc4a) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0007af0c) camera2_autofocus_pane_cp_g

0x4b84,	// (0x0007030e) popup_dialer_spcha_window

0x93f8,	// (0x00074b82) bg_popup_sub_pane_cp07

0xd18c,	// (0x00078916) list_spcha_pane

0xd194,	// (0x0007891e) list_single_spcha_pane_ParamLimits

0xd194,	// (0x0007891e) list_single_spcha_pane

0x93f8,	// (0x00074b82) list_highlight_pane_cp06

0xd1a5,	// (0x0007892f) list_single_spcha_pane_t1

0xc365,	// (0x00077aef) popup_call2_audio_out_window_g4_ParamLimits

0xc365,	// (0x00077aef) popup_call2_audio_out_window_g4

0x946e,	// (0x00074bf8) main_imed2_pane

0x96fe,	// (0x00074e88) popup_imed_adjust2_window

0x368c,	// (0x0006ee16) popup_imed_trans_window_ParamLimits

0x368c,	// (0x0006ee16) popup_imed_trans_window

0xcbbd,	// (0x00078347) popup_blid_sat_info2_window_t1

0xcbcb,	// (0x00078355) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0007ae3b) popup_blid_sat_info2_window_t

0x4f2c,	// (0x000706b6) aid_size_cell_colour_35

0x4f4c,	// (0x000706d6) aid_size_cell_colour_112

0x4f6c,	// (0x000706f6) aid_size_cell_effect

0xc962,	// (0x000780ec) bg_tb_trans_pane_cp02

0xaf7d,	// (0x00076707) heading_imed_pane

0x4f8c,	// (0x00070716) listscroll_imed_pane

0xd1b3,	// (0x0007893d) heading_imed_pane_g1

0xd1bb,	// (0x00078945) heading_imed_pane_t1

0xd1c9,	// (0x00078953) grid_imed_colour_35_pane_ParamLimits

0xd1c9,	// (0x00078953) grid_imed_colour_35_pane

0x4f98,	// (0x00070722) grid_imed_effect_pane

0xd1e1,	// (0x0007896b) list_imed_aspect_pane

0x4fae,	// (0x00070738) scroll_pane_cp027_ParamLimits

0x4fae,	// (0x00070738) scroll_pane_cp027

0x4fbf,	// (0x00070749) cell_imed_effect_pane_ParamLimits

0x4fbf,	// (0x00070749) cell_imed_effect_pane

0xd1e9,	// (0x00078973) cell_imed_colour_pane_ParamLimits

0xd1e9,	// (0x00078973) cell_imed_colour_pane

0xd22b,	// (0x000789b5) cell_imed_colour_pane_g1_ParamLimits

0xd22b,	// (0x000789b5) cell_imed_colour_pane_g1

0xd23c,	// (0x000789c6) hgihlgiht_grid_pane_cp016_ParamLimits

0xd23c,	// (0x000789c6) hgihlgiht_grid_pane_cp016

0x4fe6,	// (0x00070770) cell_imed_effect_pane_g1

0x4fee,	// (0x00070778) grid_highlight_pane_cp017

0xd24d,	// (0x000789d7) list_imed_single_pane_ParamLimits

0xd24d,	// (0x000789d7) list_imed_single_pane

0x93f8,	// (0x00074b82) list_highlight_pane_cp07

0xd262,	// (0x000789ec) list_imed_aspect_pane_comp1_t1

0xc962,	// (0x000780ec) bg_tb_trans_pane_cp05

0xd284,	// (0x00078a0e) popup_imed_adjust2_window_g1

0xd2ab,	// (0x00078a35) popup_imed_adjust2_window_t1

0xd2c3,	// (0x00078a4d) slider_imed_adjust_pane

0xd2d7,	// (0x00078a61) slider_imed_adjust_pane_g1

0xd2e7,	// (0x00078a71) slider_imed_adjust_pane_g2

0xd2f7,	// (0x00078a81) slider_imed_adjust_pane_g3

0xd308,	// (0x00078a92) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0007af7f) slider_imed_adjust_pane_g

0x4ff7,	// (0x00070781) aid_size_cell_clipart2

0x5003,	// (0x0007078d) grid_imed_clipart_pane

0xd319,	// (0x00078aa3) scroll_pane_cp031

0x500d,	// (0x00070797) cell_imed_clipart_pane_ParamLimits

0x500d,	// (0x00070797) cell_imed_clipart_pane

0x502f,	// (0x000707b9) cell_imed_clipart_pane_g1

0x93f8,	// (0x00074b82) grid_highlight_pane_cp014

0x4cde,	// (0x00070468) main_clock2_pane_g1_ParamLimits

0x4cde,	// (0x00070468) main_clock2_pane_g1

0x4e22,	// (0x000705ac) aid_call2_pane_cp10

0x4e34,	// (0x000705be) aid_call_pane_cp10

0xb352,	// (0x00076adc) popup_clock_analogue_window_cp10_g1

0xb352,	// (0x00076adc) popup_clock_analogue_window_cp10_g2

0x4e46,	// (0x000705d0) popup_clock_analogue_window_cp10_g3

0x4e46,	// (0x000705d0) popup_clock_analogue_window_cp10_g4

0xb352,	// (0x00076adc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0007af6d) popup_clock_analogue_window_cp10_g

0x4e5c,	// (0x000705e6) popup_clock_analogue_window_cp10_t1

0x4e8d,	// (0x00070617) clock_digital_number_pane_cp10_ParamLimits

0x4e8d,	// (0x00070617) clock_digital_number_pane_cp10

0x4ea5,	// (0x0007062f) clock_digital_number_pane_cp11_ParamLimits

0x4ea5,	// (0x0007062f) clock_digital_number_pane_cp11

0x4ebd,	// (0x00070647) clock_digital_number_pane_cp12_ParamLimits

0x4ebd,	// (0x00070647) clock_digital_number_pane_cp12

0x4ed7,	// (0x00070661) clock_digital_number_pane_cp13_ParamLimits

0x4ed7,	// (0x00070661) clock_digital_number_pane_cp13

0x4ef1,	// (0x0007067b) clock_digital_separator_pane_cp10_ParamLimits

0x4ef1,	// (0x0007067b) clock_digital_separator_pane_cp10

0x4f0b,	// (0x00070695) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f0b,	// (0x00070695) popup_clock_digital_window_cp02_t1

0xa817,	// (0x00075fa1) clock_digital_number_pane_cp10_g1

0xa817,	// (0x00075fa1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0007af88) clock_digital_number_pane_cp10_g

0xa817,	// (0x00075fa1) clock_digital_separator_pane_cp10_g1

0xa817,	// (0x00075fa1) clock_digital_separator_pane_g2_cp10

0xb4df,	// (0x00076c69) navi_pane_vded_g4

0xb4e8,	// (0x00076c72) navi_pane_vded_g5

0xb4f1,	// (0x00076c7b) navi_pane_vded_t1

0x946e,	// (0x00074bf8) main_vded_pane

0x5038,	// (0x000707c2) main_vded_pane_g1

0x5042,	// (0x000707cc) main_vded_pane_g2

0x504c,	// (0x000707d6) main_vded_pane_g3

0x0002,

0xf803,	// (0x0007af8d) main_vded_pane_g

0x5056,	// (0x000707e0) main_vded_pane_t1

0x5064,	// (0x000707ee) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0007af94) main_vded_pane_t

0x5072,	// (0x000707fc) vded_slider_pane

0x507a,	// (0x00070804) vded_video_pane

0xd321,	// (0x00078aab) vded_video_pane_g1

0x5082,	// (0x0007080c) vded_video_pane_g2

0xcd7f,	// (0x00078509) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0007af99) vded_video_pane_g

0xd32b,	// (0x00078ab5) vded_slider_pane_g1

0xcad2,	// (0x0007825c) vded_slider_pane_g2

0xd334,	// (0x00078abe) vded_slider_pane_g3

0xd33d,	// (0x00078ac7) vded_slider_pane_g4

0xd346,	// (0x00078ad0) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0007afa0) vded_slider_pane_g

0x4a64,	// (0x000701ee) mup3_rocker_pane_ParamLimits

0x4a64,	// (0x000701ee) mup3_rocker_pane

0x508b,	// (0x00070815) mup3_control_keys_pane_g1

0x5093,	// (0x0007081d) mup3_control_keys_pane_g2

0x509b,	// (0x00070825) mup3_control_keys_pane_g3

0x50a3,	// (0x0007082d) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0007afab) mup3_control_keys_pane_g

0x0600,	// (0x0006bd8a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0600,	// (0x0006bd8a) popup_toolbar2_fixed_window_cp01

0x4a98,	// (0x00070222) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4a98,	// (0x00070222) popup_toolbar2_fixed_window_cp02

0xbca4,	// (0x0007742e) popup_call2_audio_second_window_t4_ParamLimits

0xbca4,	// (0x0007742e) popup_call2_audio_second_window_t4

0xc1d2,	// (0x0007795c) popup_call2_audio_first_window_t6_ParamLimits

0xc1d2,	// (0x0007795c) popup_call2_audio_first_window_t6

0xc468,	// (0x00077bf2) popup_call2_audio_out_window_t6_ParamLimits

0xc468,	// (0x00077bf2) popup_call2_audio_out_window_t6

0x946e,	// (0x00074bf8) main_vitu_pane

0x50b3,	// (0x0007083d) aid_size_cell_itu_ParamLimits

0x50b3,	// (0x0007083d) aid_size_cell_itu

0xa0b6,	// (0x00075840) bg_popup_window_pane_cp08_ParamLimits

0xa0b6,	// (0x00075840) bg_popup_window_pane_cp08

0x50c9,	// (0x00070853) field_vitu_entry_pane_ParamLimits

0x50c9,	// (0x00070853) field_vitu_entry_pane

0x50e1,	// (0x0007086b) grid_vitu_function_pane_ParamLimits

0x50e1,	// (0x0007086b) grid_vitu_function_pane

0x50fc,	// (0x00070886) grid_vitu_itu_pane_ParamLimits

0x50fc,	// (0x00070886) grid_vitu_itu_pane

0x511a,	// (0x000708a4) cell_vitu_itu_pane_ParamLimits

0x511a,	// (0x000708a4) cell_vitu_itu_pane

0x513c,	// (0x000708c6) cell_vitu_function_pane_ParamLimits

0x513c,	// (0x000708c6) cell_vitu_function_pane

0xa0b6,	// (0x00075840) bg_popup_sub_pane_cp08_ParamLimits

0xa0b6,	// (0x00075840) bg_popup_sub_pane_cp08

0x5155,	// (0x000708df) field_vitu_entry_pane_t1_ParamLimits

0x5155,	// (0x000708df) field_vitu_entry_pane_t1

0xd367,	// (0x00078af1) field_vitu_entry_pane_t2_ParamLimits

0xd367,	// (0x00078af1) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0007afb9) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0007afb9) field_vitu_entry_pane_t

0xd384,	// (0x00078b0e) bg_button_pane_cp05_ParamLimits

0xd384,	// (0x00078b0e) bg_button_pane_cp05

0x5174,	// (0x000708fe) cell_vitu_itu_pane_g1

0x518c,	// (0x00070916) cell_vitu_itu_pane_t1_ParamLimits

0x518c,	// (0x00070916) cell_vitu_itu_pane_t1

0x519e,	// (0x00070928) cell_vitu_itu_pane_t2_ParamLimits

0x519e,	// (0x00070928) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0007afbe) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0007afbe) cell_vitu_itu_pane_t

0xd392,	// (0x00078b1c) bg_button_pane_cp07

0x51d3,	// (0x0007095d) cell_vitu_function_pane_g1

0x9567,	// (0x00074cf1) main_calc_pane_g1

0x0417,	// (0x0006bba1) aid_visual_content_pane

0x946e,	// (0x00074bf8) main_vradio_pane

0x51dc,	// (0x00070966) main_vradio_pane_g1_ParamLimits

0x51dc,	// (0x00070966) main_vradio_pane_g1

0xd39c,	// (0x00078b26) main_vradio_pane_g2_ParamLimits

0xd39c,	// (0x00078b26) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0007afc5) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0007afc5) main_vradio_pane_g

0x51f5,	// (0x0007097f) main_vradio_pane_t1_ParamLimits

0x51f5,	// (0x0007097f) main_vradio_pane_t1

0x520a,	// (0x00070994) main_vradio_pane_t2_ParamLimits

0x520a,	// (0x00070994) main_vradio_pane_t2

0xd3a9,	// (0x00078b33) main_vradio_pane_t3_ParamLimits

0xd3a9,	// (0x00078b33) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0007afca) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0007afca) main_vradio_pane_t

0x521f,	// (0x000709a9) vradio_rocker_control_pane_ParamLimits

0x521f,	// (0x000709a9) vradio_rocker_control_pane

0x5231,	// (0x000709bb) vradio_station_info_pane_ParamLimits

0x5231,	// (0x000709bb) vradio_station_info_pane

0xd3bd,	// (0x00078b47) vradio_frequency_info_pane_ParamLimits

0xd3bd,	// (0x00078b47) vradio_frequency_info_pane

0xcd7f,	// (0x00078509) vradio_station_info_pane_g1

0xd3cc,	// (0x00078b56) vradio_station_info_pane_t1_ParamLimits

0xd3cc,	// (0x00078b56) vradio_station_info_pane_t1

0xd3ee,	// (0x00078b78) vradio_station_info_pane_t2_ParamLimits

0xd3ee,	// (0x00078b78) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0007afd1) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0007afd1) vradio_station_info_pane_t

0xd400,	// (0x00078b8a) vradio_tuning_pane

0xd408,	// (0x00078b92) vradio_rocker_control_pane_g1

0xd410,	// (0x00078b9a) vradio_rocker_control_pane_g2

0xd418,	// (0x00078ba2) vradio_rocker_control_pane_g3

0xd420,	// (0x00078baa) vradio_rocker_control_pane_g4

0xd428,	// (0x00078bb2) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0007afd6) vradio_rocker_control_pane_g

0x5243,	// (0x000709cd) vradio_frequency_info_pane_g1

0xd430,	// (0x00078bba) vradio_frequency_info_pane_t1_ParamLimits

0xd430,	// (0x00078bba) vradio_frequency_info_pane_t1

0x524d,	// (0x000709d7) vradio_tuning_pane_g1

0x5258,	// (0x000709e2) vradio_tuning_pane_t1

0x941e,	// (0x00074ba8) area_side_right_pane_ParamLimits

0x941e,	// (0x00074ba8) area_side_right_pane

0xc91d,	// (0x000780a7) status_small_pane_g1

0xc925,	// (0x000780af) status_small_pane_g2

0xc92e,	// (0x000780b8) status_small_pane_g3

0xc937,	// (0x000780c1) status_small_pane_g4

0x0003,

0xf607,	// (0x0007ad91) status_small_pane_g

0xc940,	// (0x000780ca) status_small_pane_t1

0x946e,	// (0x00074bf8) main_video3_pane

0xd444,	// (0x00078bce) cams_zoom_vslider_pane

0xd44c,	// (0x00078bd6) image3_wide_pane_ParamLimits

0xd44c,	// (0x00078bd6) image3_wide_pane

0xd466,	// (0x00078bf0) image3_wide_small_pane

0xd472,	// (0x00078bfc) main_video3_pane_g1_ParamLimits

0xd472,	// (0x00078bfc) main_video3_pane_g1

0xd48e,	// (0x00078c18) main_video3_pane_g2_ParamLimits

0xd48e,	// (0x00078c18) main_video3_pane_g2

0x0001,

0xf857,	// (0x0007afe1) main_video3_pane_g_ParamLimits

0xf857,	// (0x0007afe1) main_video3_pane_g

0xd4aa,	// (0x00078c34) main_video3_pane_t1_ParamLimits

0xd4aa,	// (0x00078c34) main_video3_pane_t1

0xd4d5,	// (0x00078c5f) main_video3_pane_t2_ParamLimits

0xd4d5,	// (0x00078c5f) main_video3_pane_t2

0xd500,	// (0x00078c8a) main_video3_pane_t3_ParamLimits

0xd500,	// (0x00078c8a) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0007afe6) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0007afe6) main_video3_pane_t

0xd52d,	// (0x00078cb7) cams_zoom_vslider_pane_g1

0xd536,	// (0x00078cc0) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0007afed) cams_zoom_vslider_pane_g

0xd53e,	// (0x00078cc8) small_slider_vertical_pane

0xcd7f,	// (0x00078509) small_slider_vertical_pane_g1

0xcd7f,	// (0x00078509) small_slider_vertical_pane_g2

0xd546,	// (0x00078cd0) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0007aff2) small_slider_vertical_pane_g

0x946e,	// (0x00074bf8) main_hwr_training_pane

0xd54f,	// (0x00078cd9) hwr_training_instruct_pane_ParamLimits

0xd54f,	// (0x00078cd9) hwr_training_instruct_pane

0x5267,	// (0x000709f1) hwr_training_navi_pane_ParamLimits

0x5267,	// (0x000709f1) hwr_training_navi_pane

0x5286,	// (0x00070a10) hwr_training_write_pane_ParamLimits

0x5286,	// (0x00070a10) hwr_training_write_pane

0x93f8,	// (0x00074b82) bg_frame_shadow_pane

0xd586,	// (0x00078d10) hwr_training_write_pane_g1

0xd58e,	// (0x00078d18) hwr_training_write_pane_g2

0xd596,	// (0x00078d20) hwr_training_write_pane_g3

0xd59e,	// (0x00078d28) hwr_training_write_pane_g4

0xd5a6,	// (0x00078d30) hwr_training_write_pane_g5

0xd5ae,	// (0x00078d38) hwr_training_write_pane_g6

0xd5b6,	// (0x00078d40) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0007aff9) hwr_training_write_pane_g

0x97ef,	// (0x00074f79) hwr_training_navi_pane_g1_ParamLimits

0x97ef,	// (0x00074f79) hwr_training_navi_pane_g1

0x9801,	// (0x00074f8b) hwr_training_navi_pane_g2_ParamLimits

0x9801,	// (0x00074f8b) hwr_training_navi_pane_g2

0x9813,	// (0x00074f9d) hwr_training_navi_pane_g3_ParamLimits

0x9813,	// (0x00074f9d) hwr_training_navi_pane_g3

0x9823,	// (0x00074fad) hwr_training_navi_pane_g4_ParamLimits

0x9823,	// (0x00074fad) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0007b008) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0007b008) hwr_training_navi_pane_g

0x9830,	// (0x00074fba) hwr_training_navi_pane_t1

0x52d0,	// (0x00070a5a) list_single_hwr_training_instruct_pane_ParamLimits

0x52d0,	// (0x00070a5a) list_single_hwr_training_instruct_pane

0xd5be,	// (0x00078d48) list_single_hwr_training_instruct_pane_t1

0xccbf,	// (0x00078449) bg_frame_shadow_pane_g1

0xd5cd,	// (0x00078d57) bg_frame_shadow_pane_g2

0xd5d5,	// (0x00078d5f) bg_frame_shadow_pane_g3

0xd5dd,	// (0x00078d67) bg_frame_shadow_pane_g4

0xd5e5,	// (0x00078d6f) bg_frame_shadow_pane_g5

0xd5ed,	// (0x00078d77) bg_frame_shadow_pane_g6

0xd5f5,	// (0x00078d7f) bg_frame_shadow_pane_g7

0xa9b2,	// (0x0007613c) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0007b013) bg_frame_shadow_pane_g

0x946e,	// (0x00074bf8) main_video_tele_dialer_pane

0x52e6,	// (0x00070a70) aid_size_cell_video_keypad_ParamLimits

0x52e6,	// (0x00070a70) aid_size_cell_video_keypad

0x5300,	// (0x00070a8a) grid_video_dialer_keypad_pane_ParamLimits

0x5300,	// (0x00070a8a) grid_video_dialer_keypad_pane

0x534e,	// (0x00070ad8) video_down_pane_cp_ParamLimits

0x534e,	// (0x00070ad8) video_down_pane_cp

0x5380,	// (0x00070b0a) cell_video_dialer_keypad_pane_ParamLimits

0x5380,	// (0x00070b0a) cell_video_dialer_keypad_pane

0xd5fd,	// (0x00078d87) bg_button_pane_cp08_ParamLimits

0xd5fd,	// (0x00078d87) bg_button_pane_cp08

0x53a2,	// (0x00070b2c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53a2,	// (0x00070b2c) cell_video_dialer_keypad_pane_g1

0x4a4e,	// (0x000701d8) mup3_rocker2_pane_ParamLimits

0x4a4e,	// (0x000701d8) mup3_rocker2_pane

0xcd7f,	// (0x00078509) mup3_rocker2_pane_g1

0x357b,	// (0x0006ed05) main_dialer2_pane

0x946e,	// (0x00074bf8) main_mp4_pane

0x985c,	// (0x00074fe6) main_mp4_pane_g1_ParamLimits

0x985c,	// (0x00074fe6) main_mp4_pane_g1

0x985c,	// (0x00074fe6) main_mp4_pane_g2_ParamLimits

0x985c,	// (0x00074fe6) main_mp4_pane_g2

0x53dc,	// (0x00070b66) main_mp4_pane_g3_ParamLimits

0x53dc,	// (0x00070b66) main_mp4_pane_g3

0x986a,	// (0x00074ff4) main_mp4_pane_g4_ParamLimits

0x986a,	// (0x00074ff4) main_mp4_pane_g4

0x9898,	// (0x00075022) main_mp4_pane_g5_ParamLimits

0x9898,	// (0x00075022) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0007b033) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0007b033) main_mp4_pane_g

0x990c,	// (0x00075096) main_mp4_pane_t1_ParamLimits

0x990c,	// (0x00075096) main_mp4_pane_t1

0x9968,	// (0x000750f2) main_mp4_pane_t2_ParamLimits

0x9968,	// (0x000750f2) main_mp4_pane_t2

0xd609,	// (0x00078d93) main_mp4_pane_t3_ParamLimits

0xd609,	// (0x00078d93) main_mp4_pane_t3

0x99ba,	// (0x00075144) main_mp4_pane_t4_ParamLimits

0x99ba,	// (0x00075144) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0007b044) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0007b044) main_mp4_pane_t

0x99fe,	// (0x00075188) mp4_progress_pane_ParamLimits

0x99fe,	// (0x00075188) mp4_progress_pane

0x9a48,	// (0x000751d2) mp4_rocker_pane_ParamLimits

0x9a48,	// (0x000751d2) mp4_rocker_pane

0xd637,	// (0x00078dc1) mp4_progress_pane_t1

0xd650,	// (0x00078dda) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0007b04d) mp4_progress_pane_t

0xd669,	// (0x00078df3) mup_progress_pane_cp04

0xdb88,	// (0x00079312) mp4_rocker_pane_g1

0x5418,	// (0x00070ba2) aid_cell_size_keypad2_ParamLimits

0x5418,	// (0x00070ba2) aid_cell_size_keypad2

0x542e,	// (0x00070bb8) dialer2_ne_pane_ParamLimits

0x542e,	// (0x00070bb8) dialer2_ne_pane

0x5448,	// (0x00070bd2) grid_dialer2_keypad_pane_ParamLimits

0x5448,	// (0x00070bd2) grid_dialer2_keypad_pane

0xcb64,	// (0x000782ee) bg_popup_call_pane_cp07_ParamLimits

0xcb64,	// (0x000782ee) bg_popup_call_pane_cp07

0x5464,	// (0x00070bee) dialer2_ne_pane_t1_ParamLimits

0x5464,	// (0x00070bee) dialer2_ne_pane_t1

0x54a0,	// (0x00070c2a) cell_dialer2_keypad_pane_ParamLimits

0x54a0,	// (0x00070c2a) cell_dialer2_keypad_pane

0xd68e,	// (0x00078e18) bg_button_pane_pane_cp04_ParamLimits

0xd68e,	// (0x00078e18) bg_button_pane_pane_cp04

0x54c2,	// (0x00070c4c) cell_dialer2_keypad_pane_g1_ParamLimits

0x54c2,	// (0x00070c4c) cell_dialer2_keypad_pane_g1

0x150e,	// (0x0006cc98) aid_placing_vt_set_content_ParamLimits

0x150e,	// (0x0006cc98) aid_placing_vt_set_content

0x1536,	// (0x0006ccc0) aid_placing_vt_set_title_ParamLimits

0x1536,	// (0x0006ccc0) aid_placing_vt_set_title

0x946e,	// (0x00074bf8) main_image3_pane

0x5588,	// (0x00070d12) area_side_right_pane_cp01_ParamLimits

0x5588,	// (0x00070d12) area_side_right_pane_cp01

0x985c,	// (0x00074fe6) main_image3_pane_g1_ParamLimits

0x985c,	// (0x00074fe6) main_image3_pane_g1

0x559f,	// (0x00070d29) main_image3_pane_g2_ParamLimits

0x559f,	// (0x00070d29) main_image3_pane_g2

0x55c7,	// (0x00070d51) main_image3_pane_g3_ParamLimits

0x55c7,	// (0x00070d51) main_image3_pane_g3

0x55f1,	// (0x00070d7b) main_image3_pane_g4_ParamLimits

0x55f1,	// (0x00070d7b) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0007b05c) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0007b05c) main_image3_pane_g

0x561b,	// (0x00070da5) main_image3_pane_t1_ParamLimits

0x561b,	// (0x00070da5) main_image3_pane_t1

0x5673,	// (0x00070dfd) main_image3_pane_t2_ParamLimits

0x5673,	// (0x00070dfd) main_image3_pane_t2

0x56c5,	// (0x00070e4f) main_image3_pane_t3_ParamLimits

0x56c5,	// (0x00070e4f) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0007b065) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0007b065) main_image3_pane_t

0xa0b6,	// (0x00075840) grid_sctrl_middle_pane_cp01_ParamLimits

0xa0b6,	// (0x00075840) grid_sctrl_middle_pane_cp01

0x574d,	// (0x00070ed7) cell_sctrl_middle_pane_cp01_ParamLimits

0x574d,	// (0x00070ed7) cell_sctrl_middle_pane_cp01

0x576a,	// (0x00070ef4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x576a,	// (0x00070ef4) cell_sctrl_middle_pane_cp01_g1

0x946e,	// (0x00074bf8) main_call4_pane

0x5780,	// (0x00070f0a) aid_size_button_call4_ParamLimits

0x5780,	// (0x00070f0a) aid_size_button_call4

0x57b3,	// (0x00070f3d) call4_windows_pane_ParamLimits

0x57b3,	// (0x00070f3d) call4_windows_pane

0x57d2,	// (0x00070f5c) grid_call4_button_pane_ParamLimits

0x57d2,	// (0x00070f5c) grid_call4_button_pane

0x5805,	// (0x00070f8f) call4_windows_conf_pane

0x581c,	// (0x00070fa6) popup_call4_audio_first_window_ParamLimits

0x581c,	// (0x00070fa6) popup_call4_audio_first_window

0x586c,	// (0x00070ff6) popup_call4_audio_second_window_ParamLimits

0x586c,	// (0x00070ff6) popup_call4_audio_second_window

0x5883,	// (0x0007100d) popup_call4_audio_wait_window_ParamLimits

0x5883,	// (0x0007100d) popup_call4_audio_wait_window

0x5891,	// (0x0007101b) cell_call4_button_pane_ParamLimits

0x5891,	// (0x0007101b) cell_call4_button_pane

0x58b6,	// (0x00071040) bg_button_pane_cp09_ParamLimits

0x58b6,	// (0x00071040) bg_button_pane_cp09

0x58c2,	// (0x0007104c) cell_call4_button_pane_g1_ParamLimits

0x58c2,	// (0x0007104c) cell_call4_button_pane_g1

0x58e8,	// (0x00071072) cell_call4_button_pane_t1_ParamLimits

0x58e8,	// (0x00071072) cell_call4_button_pane_t1

0xd6a2,	// (0x00078e2c) popup_call4_audio_conf_window_ParamLimits

0xd6a2,	// (0x00078e2c) popup_call4_audio_conf_window

0x4aae,	// (0x00070238) mup3_progress_pane_t1_ParamLimits

0x4acd,	// (0x00070257) mup3_progress_pane_t2_ParamLimits

0xd03f,	// (0x000787c9) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0007af35) mup3_progress_pane_t_ParamLimits

0xd05c,	// (0x000787e6) mup_progress_pane_cp03_ParamLimits

0x50ab,	// (0x00070835) mup3_control_keys_pane_g4_copy1

0x9a2c,	// (0x000751b6) mp4_rocker2_pane_ParamLimits

0x9a2c,	// (0x000751b6) mp4_rocker2_pane

0xd6b6,	// (0x00078e40) mp4_rocker2_pane_g1

0xd6be,	// (0x00078e48) mp4_rocker2_pane_g2

0x9acc,	// (0x00075256) mp4_rocker2_pane_g3

0x9ad4,	// (0x0007525e) mp4_rocker2_pane_g4

0x9adc,	// (0x00075266) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0007b06e) mp4_rocker2_pane_g

0x946e,	// (0x00074bf8) main_camera4_pane

0x946e,	// (0x00074bf8) main_video4_pane

0x531c,	// (0x00070aa6) main_video_tele_dialer_pane_t1_ParamLimits

0x531c,	// (0x00070aa6) main_video_tele_dialer_pane_t1

0x5335,	// (0x00070abf) main_video_tele_dialer_pane_t2_ParamLimits

0x5335,	// (0x00070abf) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0007b024) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0007b024) main_video_tele_dialer_pane_t

0x592a,	// (0x000710b4) cam4_autofocus_pane_ParamLimits

0x592a,	// (0x000710b4) cam4_autofocus_pane

0x5940,	// (0x000710ca) cam4_image_uncrop_pane_ParamLimits

0x5940,	// (0x000710ca) cam4_image_uncrop_pane

0x595a,	// (0x000710e4) cam4_indicators_pane_ParamLimits

0x595a,	// (0x000710e4) cam4_indicators_pane

0x5985,	// (0x0007110f) main_camera4_pane_g1_ParamLimits

0x5985,	// (0x0007110f) main_camera4_pane_g1

0x5997,	// (0x00071121) main_camera4_pane_g2_ParamLimits

0x5997,	// (0x00071121) main_camera4_pane_g2

0x59aa,	// (0x00071134) main_camera4_pane_g3_ParamLimits

0x59aa,	// (0x00071134) main_camera4_pane_g3

0x59bd,	// (0x00071147) main_camera4_pane_g4_ParamLimits

0x59bd,	// (0x00071147) main_camera4_pane_g4

0x59d0,	// (0x0007115a) main_camera4_pane_g5_ParamLimits

0x59d0,	// (0x0007115a) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0007b079) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0007b079) main_camera4_pane_g

0x59f4,	// (0x0007117e) main_camera4_pane_t1_ParamLimits

0x59f4,	// (0x0007117e) main_camera4_pane_t1

0x9b00,	// (0x0007528a) bg_tb_trans_pane_cp06

0x9b16,	// (0x000752a0) cam4_indicators_pane_g1

0x9b27,	// (0x000752b1) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0007b094) cam4_indicators_pane_g

0x9b3f,	// (0x000752c9) cam4_indicators_pane_t1

0x5a58,	// (0x000711e2) main_video4_pane_g1_ParamLimits

0x5a58,	// (0x000711e2) main_video4_pane_g1

0x5a67,	// (0x000711f1) main_video4_pane_g2_ParamLimits

0x5a67,	// (0x000711f1) main_video4_pane_g2

0x5a76,	// (0x00071200) main_video4_pane_g3_ParamLimits

0x5a76,	// (0x00071200) main_video4_pane_g3

0x5a85,	// (0x0007120f) main_video4_pane_g4_ParamLimits

0x5a85,	// (0x0007120f) main_video4_pane_g4

0x0004,

0xf911,	// (0x0007b09b) main_video4_pane_g_ParamLimits

0xf911,	// (0x0007b09b) main_video4_pane_g

0x5aa3,	// (0x0007122d) vid4_indicators_pane_ParamLimits

0x5aa3,	// (0x0007122d) vid4_indicators_pane

0x5ad1,	// (0x0007125b) video4_image_uncrop_cif_pane_ParamLimits

0x5ad1,	// (0x0007125b) video4_image_uncrop_cif_pane

0x5aeb,	// (0x00071275) video4_image_uncrop_nhd_pane_ParamLimits

0x5aeb,	// (0x00071275) video4_image_uncrop_nhd_pane

0x5940,	// (0x000710ca) video4_image_uncrop_vga_pane_ParamLimits

0x5940,	// (0x000710ca) video4_image_uncrop_vga_pane

0x9460,	// (0x00074bea) bg_tb_trans_pane_cp07

0x9b69,	// (0x000752f3) vid4_indicators_pane_g1

0x9b7d,	// (0x00075307) vid4_indicators_pane_g2

0x9b91,	// (0x0007531b) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0007b0a6) vid4_indicators_pane_g

0x9bbe,	// (0x00075348) vid4_indicators_pane_t1

0x5aff,	// (0x00071289) cam4_autofocus_pane_g1

0x5b07,	// (0x00071291) cam4_autofocus_pane_g2

0x5b0f,	// (0x00071299) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0007b0b1) cam4_autofocus_pane_g

0x5b17,	// (0x000712a1) cam4_autofocus_pane_g3_copy1

0x5364,	// (0x00070aee) video_down_pane_cp_t1

0x5372,	// (0x00070afc) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0007b029) video_down_pane_cp_t

0x9460,	// (0x00074bea) popup_vitu2_window_ParamLimits

0x9460,	// (0x00074bea) popup_vitu2_window

0x5b1f,	// (0x000712a9) aid_size_cell2_itu2_ParamLimits

0x5b1f,	// (0x000712a9) aid_size_cell2_itu2

0x5b45,	// (0x000712cf) aid_size_cell_itu2_ParamLimits

0x5b45,	// (0x000712cf) aid_size_cell_itu2

0x5ba1,	// (0x0007132b) bg_popup_window_pane_cp09_ParamLimits

0x5ba1,	// (0x0007132b) bg_popup_window_pane_cp09

0x5baf,	// (0x00071339) field_vitu2_entry_pane_ParamLimits

0x5baf,	// (0x00071339) field_vitu2_entry_pane

0x5bd5,	// (0x0007135f) grid_vitu2_function_pane_ParamLimits

0x5bd5,	// (0x0007135f) grid_vitu2_function_pane

0x5c26,	// (0x000713b0) grid_vitu2_itu_pane_ParamLimits

0x5c26,	// (0x000713b0) grid_vitu2_itu_pane

0x5cbc,	// (0x00071446) cell_vitu2_itu_pane_ParamLimits

0x5cbc,	// (0x00071446) cell_vitu2_itu_pane

0x5ce8,	// (0x00071472) cell_vitu2_function_pane_ParamLimits

0x5ce8,	// (0x00071472) cell_vitu2_function_pane

0xd6c6,	// (0x00078e50) bg_popup_call_pane_cp08_ParamLimits

0xd6c6,	// (0x00078e50) bg_popup_call_pane_cp08

0xd6dd,	// (0x00078e67) field_vitu2_entry_pane_g1

0xd6e9,	// (0x00078e73) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0007b0b8) field_vitu2_entry_pane_g

0x5d27,	// (0x000714b1) field_vitu2_entry_pane_t1_ParamLimits

0x5d27,	// (0x000714b1) field_vitu2_entry_pane_t1

0xa138,	// (0x000758c2) field_vitu2_entry_pane_t2_ParamLimits

0xa138,	// (0x000758c2) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0007b0bf) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0007b0bf) field_vitu2_entry_pane_t

0x5d57,	// (0x000714e1) bg_button_pane_cp010_ParamLimits

0x5d57,	// (0x000714e1) bg_button_pane_cp010

0x9bd5,	// (0x0007535f) cell_vitu2_itu_pane_g1

0x5d73,	// (0x000714fd) cell_vitu2_itu_pane_t1_ParamLimits

0x5d73,	// (0x000714fd) cell_vitu2_itu_pane_t1

0x02ef,	// (0x0006ba79) cell_vitu2_itu_pane_t2_ParamLimits

0x02ef,	// (0x0006ba79) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0007b0c9) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0007b0c9) cell_vitu2_itu_pane_t

0x9460,	// (0x00074bea) bg_button_pane_cp011

0x5dd1,	// (0x0007155b) cell_vitu2_function_pane_g1

0x946e,	// (0x00074bf8) main_myfav_hc_pane

0x5715,	// (0x00070e9f) popup_image3_note_pane_ParamLimits

0x5715,	// (0x00070e9f) popup_image3_note_pane

0x5731,	// (0x00070ebb) popup_image3_tool_bar_pane_ParamLimits

0x5731,	// (0x00070ebb) popup_image3_tool_bar_pane

0x037d,	// (0x0006bb07) cell_vitu2_itu_pane_t3_ParamLimits

0x037d,	// (0x0006bb07) cell_vitu2_itu_pane_t3

0x93f8,	// (0x00074b82) bg_popup_trans_pane

0xd70b,	// (0x00078e95) grid_image3_tool_bar_pane

0xd715,	// (0x00078e9f) bg_popup_trans_pane_g1

0xad35,	// (0x000764bf) bg_popup_trans_pane_g2

0xd71d,	// (0x00078ea7) bg_popup_trans_pane_g3

0xd725,	// (0x00078eaf) bg_popup_trans_pane_g4

0xd72d,	// (0x00078eb7) bg_popup_trans_pane_g5

0xd735,	// (0x00078ebf) bg_popup_trans_pane_g6

0xd73d,	// (0x00078ec7) bg_popup_trans_pane_g7

0xd745,	// (0x00078ecf) bg_popup_trans_pane_g8

0xad15,	// (0x0007649f) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0007b0d0) bg_popup_trans_pane_g

0xd74d,	// (0x00078ed7) cell_image3_tool_bar_pane_ParamLimits

0xd74d,	// (0x00078ed7) cell_image3_tool_bar_pane

0xcd7f,	// (0x00078509) cell_image3_tool_bar_pane_g1

0x93f8,	// (0x00074b82) bg_popup_trans_pane_cp1

0xd761,	// (0x00078eeb) popup_image3_note_pane_t1

0xd76f,	// (0x00078ef9) popup_image3_note_pane_t2

0xd77d,	// (0x00078f07) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0007b0e3) popup_image3_note_pane_t

0xd78b,	// (0x00078f15) popup_image3_note_pane_t3_copy1

0x5de5,	// (0x0007156f) bg_myfav_hc_instruction_pane_ParamLimits

0x5de5,	// (0x0007156f) bg_myfav_hc_instruction_pane

0x5df9,	// (0x00071583) cell_myfav_contact_pane_ParamLimits

0x5df9,	// (0x00071583) cell_myfav_contact_pane

0x5e17,	// (0x000715a1) cell_myfav_contact_pane_cp1_ParamLimits

0x5e17,	// (0x000715a1) cell_myfav_contact_pane_cp1

0x5e2f,	// (0x000715b9) cell_myfav_contact_pane_cp2_ParamLimits

0x5e2f,	// (0x000715b9) cell_myfav_contact_pane_cp2

0x5e47,	// (0x000715d1) cell_myfav_contact_pane_cp3_ParamLimits

0x5e47,	// (0x000715d1) cell_myfav_contact_pane_cp3

0x5e5e,	// (0x000715e8) cell_myfav_contact_pane_cp4_ParamLimits

0x5e5e,	// (0x000715e8) cell_myfav_contact_pane_cp4

0x5e76,	// (0x00071600) cell_myfav_contact_pane_cp5_ParamLimits

0x5e76,	// (0x00071600) cell_myfav_contact_pane_cp5

0x5e8a,	// (0x00071614) cell_myfav_contact_pane_cp6_ParamLimits

0x5e8a,	// (0x00071614) cell_myfav_contact_pane_cp6

0x5ea0,	// (0x0007162a) cell_myfav_contact_pane_cp7_ParamLimits

0x5ea0,	// (0x0007162a) cell_myfav_contact_pane_cp7

0xd799,	// (0x00078f23) listscroll_gen_pane_cp05

0x5eba,	// (0x00071644) main_myfav_hc_pane_g1_ParamLimits

0x5eba,	// (0x00071644) main_myfav_hc_pane_g1

0x5ed4,	// (0x0007165e) main_myfav_hc_pane_g2_ParamLimits

0x5ed4,	// (0x0007165e) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0007b0ea) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0007b0ea) main_myfav_hc_pane_g

0x5f06,	// (0x00071690) main_myfav_hc_pane_t1_ParamLimits

0x5f06,	// (0x00071690) main_myfav_hc_pane_t1

0xd7a2,	// (0x00078f2c) main_myfav_hc_pane_t2_ParamLimits

0xd7a2,	// (0x00078f2c) main_myfav_hc_pane_t2

0xd7b4,	// (0x00078f3e) main_myfav_hc_pane_t3_ParamLimits

0xd7b4,	// (0x00078f3e) main_myfav_hc_pane_t3

0x5f1d,	// (0x000716a7) main_myfav_hc_pane_t4_ParamLimits

0x5f1d,	// (0x000716a7) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0007b0f1) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0007b0f1) main_myfav_hc_pane_t

0xcd7f,	// (0x00078509) bg_myfav_hc_instruction_pane_g1

0xd7c6,	// (0x00078f50) cell_myfav_contact_pane_g1_ParamLimits

0xd7c6,	// (0x00078f50) cell_myfav_contact_pane_g1

0xd7c6,	// (0x00078f50) cell_myfav_contact_pane_g2_ParamLimits

0xd7c6,	// (0x00078f50) cell_myfav_contact_pane_g2

0xd7d2,	// (0x00078f5c) cell_myfav_contact_pane_g3_ParamLimits

0xd7d2,	// (0x00078f5c) cell_myfav_contact_pane_g3

0xd029,	// (0x000787b3) cell_myfav_contact_pane_g4_ParamLimits

0xd029,	// (0x000787b3) cell_myfav_contact_pane_g4

0xd7df,	// (0x00078f69) cell_myfav_contact_pane_g5_ParamLimits

0xd7df,	// (0x00078f69) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0007b0fc) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0007b0fc) cell_myfav_contact_pane_g

0x5eee,	// (0x00071678) main_myfav_hc_pane_g3_ParamLimits

0x5eee,	// (0x00071678) main_myfav_hc_pane_g3

0x0562,	// (0x0006bcec) popup_adpt_find_window

0x5f45,	// (0x000716cf) afind_page_pane_ParamLimits

0x5f45,	// (0x000716cf) afind_page_pane

0x5f5a,	// (0x000716e4) aid_size_cell_afind_ParamLimits

0x5f5a,	// (0x000716e4) aid_size_cell_afind

0x5f78,	// (0x00071702) bg_popup_sub_pane_cp09_ParamLimits

0x5f78,	// (0x00071702) bg_popup_sub_pane_cp09

0x5f85,	// (0x0007170f) find_pane_cp01_ParamLimits

0x5f85,	// (0x0007170f) find_pane_cp01

0xd7eb,	// (0x00078f75) grid_afind_control_pane_ParamLimits

0xd7eb,	// (0x00078f75) grid_afind_control_pane

0x5f92,	// (0x0007171c) grid_afind_pane_ParamLimits

0x5f92,	// (0x0007171c) grid_afind_pane

0x5fb1,	// (0x0007173b) cell_afind_pane_ParamLimits

0x5fb1,	// (0x0007173b) cell_afind_pane

0xcd7f,	// (0x00078509) afind_page_pane_g1

0x6018,	// (0x000717a2) afind_page_pane_g2

0x6021,	// (0x000717ab) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0007b107) afind_page_pane_g

0x602a,	// (0x000717b4) afind_page_pane_t1

0xd7ff,	// (0x00078f89) cell_afind_grid_control_pane_ParamLimits

0xd7ff,	// (0x00078f89) cell_afind_grid_control_pane

0xd68e,	// (0x00078e18) bg_button_pane_cp69_ParamLimits

0xd68e,	// (0x00078e18) bg_button_pane_cp69

0x604a,	// (0x000717d4) cell_afind_pane_g1_ParamLimits

0x604a,	// (0x000717d4) cell_afind_pane_g1

0x6057,	// (0x000717e1) cell_afind_pane_t1_ParamLimits

0x6057,	// (0x000717e1) cell_afind_pane_t1

0xab2e,	// (0x000762b8) bg_button_pane_cp72

0xd80e,	// (0x00078f98) cell_afind_grid_control_pane_g1

0x3028,	// (0x0006e7b2) aid_image_placing_area_ParamLimits

0x3028,	// (0x0006e7b2) aid_image_placing_area

0xd34f,	// (0x00078ad9) field_vitu_entry_pane_g1_ParamLimits

0xd34f,	// (0x00078ad9) field_vitu_entry_pane_g1

0xd35b,	// (0x00078ae5) field_vitu_entry_pane_g2_ParamLimits

0xd35b,	// (0x00078ae5) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0007afb4) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0007afb4) field_vitu_entry_pane_g

0x5174,	// (0x000708fe) cell_vitu_itu_pane_g1_ParamLimits

0x51b6,	// (0x00070940) cell_vitu_itu_pane_t3_ParamLimits

0x51b6,	// (0x00070940) cell_vitu_itu_pane_t3

0xd637,	// (0x00078dc1) mp4_progress_pane_t1_ParamLimits

0xd650,	// (0x00078dda) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0007b04d) mp4_progress_pane_t_ParamLimits

0xd669,	// (0x00078df3) mup_progress_pane_cp04_ParamLimits

0x5f31,	// (0x000716bb) main_myfav_hc_pane_t5_ParamLimits

0x5f31,	// (0x000716bb) main_myfav_hc_pane_t5

0x9416,	// (0x00074ba0) aid_zoom_text_primary

0x0562,	// (0x0006bcec) popup_adpt_find_window_ParamLimits

0x9460,	// (0x00074bea) main_cam_set_pane

0x5971,	// (0x000710fb) cam4_zoom_pane_ParamLimits

0x5971,	// (0x000710fb) cam4_zoom_pane

0x6069,	// (0x000717f3) main_cam_set_pane_g1_ParamLimits

0x6069,	// (0x000717f3) main_cam_set_pane_g1

0x6077,	// (0x00071801) main_cam_set_pane_g2_ParamLimits

0x6077,	// (0x00071801) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0007b10e) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0007b10e) main_cam_set_pane_g

0x6098,	// (0x00071822) main_cam_set_pane_t1_ParamLimits

0x6098,	// (0x00071822) main_cam_set_pane_t1

0x60b3,	// (0x0007183d) main_cset_listscroll_pane_ParamLimits

0x60b3,	// (0x0007183d) main_cset_listscroll_pane

0x60d3,	// (0x0007185d) main_cset_slider_pane_ParamLimits

0x60d3,	// (0x0007185d) main_cset_slider_pane

0xd81f,	// (0x00078fa9) main_cset_list_pane_ParamLimits

0xd81f,	// (0x00078fa9) main_cset_list_pane

0xd82f,	// (0x00078fb9) scroll_pane_cp028

0x60f9,	// (0x00071883) aid_area_touch_slider

0x6115,	// (0x0007189f) cset_slider_pane

0x613f,	// (0x000718c9) main_cset_slider_pane_g1

0x6154,	// (0x000718de) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0007b113) main_cset_slider_pane_g

0xd880,	// (0x0007900a) main_cset_slider_pane_t1

0x61f8,	// (0x00071982) main_cset_slider_pane_t2

0x6212,	// (0x0007199c) main_cset_slider_pane_t3

0x622c,	// (0x000719b6) main_cset_slider_pane_t4

0x6246,	// (0x000719d0) main_cset_slider_pane_t5

0x6260,	// (0x000719ea) main_cset_slider_pane_t6

0x6275,	// (0x000719ff) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0007b138) main_cset_slider_pane_t

0x6379,	// (0x00071b03) cset_list_set_pane_ParamLimits

0x6379,	// (0x00071b03) cset_list_set_pane

0x638b,	// (0x00071b15) aid_position_infowindow_above

0x6393,	// (0x00071b1d) aid_position_infowindow_below

0x639b,	// (0x00071b25) cset_list_set_pane_g1_ParamLimits

0x639b,	// (0x00071b25) cset_list_set_pane_g1

0x63a7,	// (0x00071b31) cset_list_set_pane_g3_ParamLimits

0x63a7,	// (0x00071b31) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0007b157) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0007b157) cset_list_set_pane_g

0x63b6,	// (0x00071b40) cset_list_set_pane_t1_ParamLimits

0x63b6,	// (0x00071b40) cset_list_set_pane_t1

0xa0b6,	// (0x00075840) list_highlight_pane_cp021_ParamLimits

0xa0b6,	// (0x00075840) list_highlight_pane_cp021

0xb653,	// (0x00076ddd) cset_slider_pane_g1

0xb665,	// (0x00076def) cset_slider_pane_g2

0xb65c,	// (0x00076de6) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0007b15c) cset_slider_pane_g

0x9be7,	// (0x00075371) aid_area_touch_cam4_zoom

0x9bef,	// (0x00075379) cam4_zoom_cont_pane

0x9bf7,	// (0x00075381) cam4_zoom_pane_g1

0x9bff,	// (0x00075389) cam4_zoom_pane_g2

0x63cb,	// (0x00071b55) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0007b163) cam4_zoom_pane_g

0x9c07,	// (0x00075391) cam4_zoom_cont_pane_g1

0x9c10,	// (0x0007539a) cam4_zoom_cont_pane_g2

0x9c19,	// (0x000753a3) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0007b16a) cam4_zoom_cont_pane_g

0x579e,	// (0x00070f28) call4_image_pane_ParamLimits

0x579e,	// (0x00070f28) call4_image_pane

0x5805,	// (0x00070f8f) call4_windows_conf_pane_ParamLimits

0x584a,	// (0x00070fd4) popup_call4_audio_in_window_ParamLimits

0x584a,	// (0x00070fd4) popup_call4_audio_in_window

0x93f8,	// (0x00074b82) bg_popup_call2_act_pane_cp02

0xd69a,	// (0x00078e24) call4_list_conf_pane

0xcd7f,	// (0x00078509) call4_image_pane_g1

0xcd7f,	// (0x00078509) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0007ae75) call4_image_pane_g

0xd920,	// (0x000790aa) list_single_graphic_popup_conf4_pane_ParamLimits

0xd920,	// (0x000790aa) list_single_graphic_popup_conf4_pane

0x93f8,	// (0x00074b82) list_highlight_pane_cp022

0xd933,	// (0x000790bd) list_single_graphic_popup_conf4_pane_g1

0xb24f,	// (0x000769d9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0007b171) list_single_graphic_popup_conf4_pane_g

0xd93b,	// (0x000790c5) list_single_graphic_popup_conf4_pane_t1

0x165a,	// (0x0006cde4) popup_vtel_slider_window_ParamLimits

0x165a,	// (0x0006cde4) popup_vtel_slider_window

0xd67c,	// (0x00078e06) dialer2_ne_pane_t2_ParamLimits

0xd67c,	// (0x00078e06) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0007b052) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0007b052) dialer2_ne_pane_t

0xcb64,	// (0x000782ee) bg_popup_sub_pane_cp010_ParamLimits

0xcb64,	// (0x000782ee) bg_popup_sub_pane_cp010

0x63d3,	// (0x00071b5d) popup_vtel_slider_window_g1_ParamLimits

0x63d3,	// (0x00071b5d) popup_vtel_slider_window_g1

0x63e6,	// (0x00071b70) popup_vtel_slider_window_g2_ParamLimits

0x63e6,	// (0x00071b70) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0007b176) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0007b176) popup_vtel_slider_window_g

0x643c,	// (0x00071bc6) vtel_slider_pane_ParamLimits

0x643c,	// (0x00071bc6) vtel_slider_pane

0x645e,	// (0x00071be8) vtel_slider_pane_g1_ParamLimits

0x645e,	// (0x00071be8) vtel_slider_pane_g1

0x6472,	// (0x00071bfc) vtel_slider_pane_g2_ParamLimits

0x6472,	// (0x00071bfc) vtel_slider_pane_g2

0x648a,	// (0x00071c14) vtel_slider_pane_g3_ParamLimits

0x648a,	// (0x00071c14) vtel_slider_pane_g3

0x645e,	// (0x00071be8) vtel_slider_pane_g4_ParamLimits

0x645e,	// (0x00071be8) vtel_slider_pane_g4

0x64a0,	// (0x00071c2a) vtel_slider_pane_g5_ParamLimits

0x64a0,	// (0x00071c2a) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0007b17f) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0007b17f) vtel_slider_pane_g

0x9460,	// (0x00074bea) main_gallery2_pane

0x5b71,	// (0x000712fb) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b71,	// (0x000712fb) aid_size_row_itut2_dropdow_list

0x5bfd,	// (0x00071387) grid_vitu2_function_top_pane_ParamLimits

0x5bfd,	// (0x00071387) grid_vitu2_function_top_pane

0x5c67,	// (0x000713f1) popup_vitu2_dropdown_list_window_ParamLimits

0x5c67,	// (0x000713f1) popup_vitu2_dropdown_list_window

0x5c90,	// (0x0007141a) popup_vitu2_match_list_window

0x64c4,	// (0x00071c4e) cell_vitu2_function_top_pane_ParamLimits

0x64c4,	// (0x00071c4e) cell_vitu2_function_top_pane

0x64dc,	// (0x00071c66) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64dc,	// (0x00071c66) cell_vitu2_function_top_pane_cp01

0x64f8,	// (0x00071c82) cell_vitu2_function_top_wide_pane_ParamLimits

0x64f8,	// (0x00071c82) cell_vitu2_function_top_wide_pane

0x9460,	// (0x00074bea) bg_button_pane_cp012

0x6514,	// (0x00071c9e) cell_vitu2_function_top_pane_g1

0x9c22,	// (0x000753ac) bg_button_pane_cp013_ParamLimits

0x9c22,	// (0x000753ac) bg_button_pane_cp013

0x6528,	// (0x00071cb2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6528,	// (0x00071cb2) cell_vitu2_function_top_wide_pane_g1

0x9460,	// (0x00074bea) bg_popup_sub_pane_cp20

0x6540,	// (0x00071cca) list_vitu2_match_list_pane

0xd715,	// (0x00078e9f) bg_popup_sub_pane_cp20_g1

0xd71d,	// (0x00078ea7) bg_popup_sub_pane_cp20_g2

0xad35,	// (0x000764bf) bg_popup_sub_pane_cp20_g3

0xd725,	// (0x00078eaf) bg_popup_sub_pane_cp20_g4

0xad15,	// (0x0007649f) bg_popup_sub_pane_cp20_g5

0xd951,	// (0x000790db) bg_popup_sub_pane_cp20_g6

0xd735,	// (0x00078ebf) bg_popup_sub_pane_cp20_g7

0xd73d,	// (0x00078ec7) bg_popup_sub_pane_cp20_g8

0xd745,	// (0x00078ecf) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0007b18a) bg_popup_sub_pane_cp20_g

0x9c3e,	// (0x000753c8) list_vitu2_match_list_item_pane_ParamLimits

0x9c3e,	// (0x000753c8) list_vitu2_match_list_item_pane

0x9c50,	// (0x000753da) list_vitu2_match_list_item_pane_t1

0x946e,	// (0x00074bf8) bg_popup_sub_pane_cp21

0x9c5e,	// (0x000753e8) grid_vitu2_dropdown_list_pane

0x65ae,	// (0x00071d38) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65ae,	// (0x00071d38) cell_vitu2_dropdown_list_char_pane

0x65cf,	// (0x00071d59) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65cf,	// (0x00071d59) cell_vitu2_dropdown_list_ctrl_pane

0xd959,	// (0x000790e3) cell_vitu2_dropdown_list_char_pane_g1

0xd962,	// (0x000790ec) cell_vitu2_dropdown_list_char_pane_g2

0xd96b,	// (0x000790f5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0007b1a7) cell_vitu2_dropdown_list_char_pane_g

0x65fb,	// (0x00071d85) cell_vitu2_dropdown_list_char_pane_t1

0x6609,	// (0x00071d93) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6609,	// (0x00071d93) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6616,	// (0x00071da0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6616,	// (0x00071da0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6623,	// (0x00071dad) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6623,	// (0x00071dad) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6630,	// (0x00071dba) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6630,	// (0x00071dba) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9b00,	// (0x0007528a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9b00,	// (0x0007528a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0007b1ae) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0007b1ae) cell_vitu2_dropdown_list_ctrl_pane_g

0x664c,	// (0x00071dd6) aid_size_cell_gallery2_ParamLimits

0x664c,	// (0x00071dd6) aid_size_cell_gallery2

0x666a,	// (0x00071df4) grid_gallery2_pane_ParamLimits

0x666a,	// (0x00071df4) grid_gallery2_pane

0x6684,	// (0x00071e0e) scroll_pane_cp029_ParamLimits

0x6684,	// (0x00071e0e) scroll_pane_cp029

0x6695,	// (0x00071e1f) cell_gallery2_pane_ParamLimits

0x6695,	// (0x00071e1f) cell_gallery2_pane

0xd974,	// (0x000790fe) cell_gallery2_pane_g2

0x66f4,	// (0x00071e7e) cell_gallery2_pane_g3

0xd97c,	// (0x00079106) cell_gallery2_pane_g4

0xd984,	// (0x0007910e) cell_gallery2_pane_g5

0xaadc,	// (0x00076266) grid_highlight_pane_cp10

0x5c90,	// (0x0007141a) popup_vitu2_match_list_window_ParamLimits

0x5ca5,	// (0x0007142f) popup_vitu2_query_window_ParamLimits

0x5ca5,	// (0x0007142f) popup_vitu2_query_window

0x946e,	// (0x00074bf8) bg_vitu2_candi_button_pane

0xd959,	// (0x000790e3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd962,	// (0x000790ec) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd96b,	// (0x000790f5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66fc,	// (0x00071e86) bg_button_pane_cp015

0x6710,	// (0x00071e9a) bg_button_pane_cp016

0x6723,	// (0x00071ead) bg_button_pane_cp017

0xc962,	// (0x000780ec) bg_popup_sub_pane_cp22

0xd98c,	// (0x00079116) popup_vitu2_query_window_g1

0x6768,	// (0x00071ef2) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0007b1b9) popup_vitu2_query_window_g

0x6787,	// (0x00071f11) popup_vitu2_query_window_t1_ParamLimits

0x6787,	// (0x00071f11) popup_vitu2_query_window_t1

0x67bc,	// (0x00071f46) popup_vitu2_query_window_t2_ParamLimits

0x67bc,	// (0x00071f46) popup_vitu2_query_window_t2

0x67ce,	// (0x00071f58) popup_vitu2_query_window_t3_ParamLimits

0x67ce,	// (0x00071f58) popup_vitu2_query_window_t3

0x67f6,	// (0x00071f80) popup_vitu2_query_window_t4_ParamLimits

0x67f6,	// (0x00071f80) popup_vitu2_query_window_t4

0x6817,	// (0x00071fa1) popup_vitu2_query_window_t5_ParamLimits

0x6817,	// (0x00071fa1) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0007b1c0) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0007b1c0) popup_vitu2_query_window_t

0xd817,	// (0x00078fa1) main_cset_text_pane

0x60f9,	// (0x00071883) aid_area_touch_slider_ParamLimits

0x6115,	// (0x0007189f) cset_slider_pane_ParamLimits

0x613f,	// (0x000718c9) main_cset_slider_pane_g1_ParamLimits

0x6154,	// (0x000718de) main_cset_slider_pane_g2_ParamLimits

0xd838,	// (0x00078fc2) main_cset_slider_pane_g3_ParamLimits

0xd838,	// (0x00078fc2) main_cset_slider_pane_g3

0x6169,	// (0x000718f3) main_cset_slider_pane_g4_ParamLimits

0x6169,	// (0x000718f3) main_cset_slider_pane_g4

0x6178,	// (0x00071902) main_cset_slider_pane_g5_ParamLimits

0x6178,	// (0x00071902) main_cset_slider_pane_g5

0x6184,	// (0x0007190e) main_cset_slider_pane_g6_ParamLimits

0x6184,	// (0x0007190e) main_cset_slider_pane_g6

0xf989,	// (0x0007b113) main_cset_slider_pane_g_ParamLimits

0xd880,	// (0x0007900a) main_cset_slider_pane_t1_ParamLimits

0x61f8,	// (0x00071982) main_cset_slider_pane_t2_ParamLimits

0x6212,	// (0x0007199c) main_cset_slider_pane_t3_ParamLimits

0x622c,	// (0x000719b6) main_cset_slider_pane_t4_ParamLimits

0x6246,	// (0x000719d0) main_cset_slider_pane_t5_ParamLimits

0x6260,	// (0x000719ea) main_cset_slider_pane_t6_ParamLimits

0x6275,	// (0x000719ff) main_cset_slider_pane_t7_ParamLimits

0x629f,	// (0x00071a29) main_cset_slider_pane_t8_ParamLimits

0x629f,	// (0x00071a29) main_cset_slider_pane_t8

0x62c7,	// (0x00071a51) main_cset_slider_pane_t9_ParamLimits

0x62c7,	// (0x00071a51) main_cset_slider_pane_t9

0x62ef,	// (0x00071a79) main_cset_slider_pane_t10_ParamLimits

0x62ef,	// (0x00071a79) main_cset_slider_pane_t10

0x6317,	// (0x00071aa1) main_cset_slider_pane_t11_ParamLimits

0x6317,	// (0x00071aa1) main_cset_slider_pane_t11

0x633f,	// (0x00071ac9) main_cset_slider_pane_t12_ParamLimits

0x633f,	// (0x00071ac9) main_cset_slider_pane_t12

0x635c,	// (0x00071ae6) main_cset_slider_pane_t13_ParamLimits

0x635c,	// (0x00071ae6) main_cset_slider_pane_t13

0xf9ae,	// (0x0007b138) main_cset_slider_pane_t_ParamLimits

0x93f8,	// (0x00074b82) bg_popup_sub_pane_cp011

0xd998,	// (0x00079122) main_cset_text_pane_g1

0xd9a0,	// (0x0007912a) main_cset_text_pane_t1

0xd9ae,	// (0x00079138) main_cset_text_pane_t2

0xd9bc,	// (0x00079146) main_cset_text_pane_t3

0xd9ca,	// (0x00079154) main_cset_text_pane_t4

0xd9d8,	// (0x00079162) main_cset_text_pane_t5

0xd9e6,	// (0x00079170) main_cset_text_pane_t6

0xd9f4,	// (0x0007917e) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0007b1cf) main_cset_text_pane_t

0x946e,	// (0x00074bf8) main_cam4_burst_pane

0x946e,	// (0x00074bf8) main_cam5_pane

0x6038,	// (0x000717c2) bg_button_pane_cp019

0x6041,	// (0x000717cb) bg_button_pane_cp020

0xd844,	// (0x00078fce) main_cset_slider_pane_g7_ParamLimits

0xd844,	// (0x00078fce) main_cset_slider_pane_g7

0xd850,	// (0x00078fda) main_cset_slider_pane_g8_ParamLimits

0xd850,	// (0x00078fda) main_cset_slider_pane_g8

0x6198,	// (0x00071922) main_cset_slider_pane_g9_ParamLimits

0x6198,	// (0x00071922) main_cset_slider_pane_g9

0x61a4,	// (0x0007192e) main_cset_slider_pane_g10_ParamLimits

0x61a4,	// (0x0007192e) main_cset_slider_pane_g10

0x61b0,	// (0x0007193a) main_cset_slider_pane_g11_ParamLimits

0x61b0,	// (0x0007193a) main_cset_slider_pane_g11

0x61bc,	// (0x00071946) main_cset_slider_pane_g12_ParamLimits

0x61bc,	// (0x00071946) main_cset_slider_pane_g12

0x61c8,	// (0x00071952) main_cset_slider_pane_g13_ParamLimits

0x61c8,	// (0x00071952) main_cset_slider_pane_g13

0x61d4,	// (0x0007195e) main_cset_slider_pane_g14_ParamLimits

0x61d4,	// (0x0007195e) main_cset_slider_pane_g14

0x61e0,	// (0x0007196a) main_cset_slider_pane_g15_ParamLimits

0x61e0,	// (0x0007196a) main_cset_slider_pane_g15

0xd8ae,	// (0x00079038) main_cset_slider_pane_t14_ParamLimits

0xd8ae,	// (0x00079038) main_cset_slider_pane_t14

0xd8e7,	// (0x00079071) main_cset_slider_pane_t15_ParamLimits

0xd8e7,	// (0x00079071) main_cset_slider_pane_t15

0x688e,	// (0x00072018) aid_cam4_burst_size_cell_ParamLimits

0x688e,	// (0x00072018) aid_cam4_burst_size_cell

0x68ae,	// (0x00072038) grid_cam4_burst_pane_ParamLimits

0x68ae,	// (0x00072038) grid_cam4_burst_pane

0x68e6,	// (0x00072070) linegrid_cam4_burst_pane_ParamLimits

0x68e6,	// (0x00072070) linegrid_cam4_burst_pane

0xdba4,	// (0x0007932e) scroll_pane_cp30_ParamLimits

0xdba4,	// (0x0007932e) scroll_pane_cp30

0x690a,	// (0x00072094) cell_cam4_burst_pane_ParamLimits

0x690a,	// (0x00072094) cell_cam4_burst_pane

0xda02,	// (0x0007918c) linegrid_cam4_burst_pane_g1_ParamLimits

0xda02,	// (0x0007918c) linegrid_cam4_burst_pane_g1

0x6957,	// (0x000720e1) linegrid_cam4_burst_pane_g2_ParamLimits

0x6957,	// (0x000720e1) linegrid_cam4_burst_pane_g2

0xda0f,	// (0x00079199) linegrid_cam4_burst_pane_g3_ParamLimits

0xda0f,	// (0x00079199) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0007b1de) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0007b1de) linegrid_cam4_burst_pane_g

0x6968,	// (0x000720f2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6968,	// (0x000720f2) linegrid_cam4_burst_pane_g3_copy1

0xda1c,	// (0x000791a6) linegrid_cam4_burst_pane_g4_ParamLimits

0xda1c,	// (0x000791a6) linegrid_cam4_burst_pane_g4

0x6982,	// (0x0007210c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6982,	// (0x0007210c) linegrid_cam4_burst_pane_g5

0x6993,	// (0x0007211d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6993,	// (0x0007211d) linegrid_cam4_burst_pane_g6

0xda29,	// (0x000791b3) linegrid_cam4_burst_pane_g7_ParamLimits

0xda29,	// (0x000791b3) linegrid_cam4_burst_pane_g7

0x69aa,	// (0x00072134) cell_cam4_burst_pane_g1

0xda42,	// (0x000791cc) main_cam5_pane_t1_ParamLimits

0xda42,	// (0x000791cc) main_cam5_pane_t1

0xda54,	// (0x000791de) main_cam5_pane_t2_ParamLimits

0xda54,	// (0x000791de) main_cam5_pane_t2

0xda66,	// (0x000791f0) main_cam5_pane_t3_ParamLimits

0xda66,	// (0x000791f0) main_cam5_pane_t3

0xda78,	// (0x00079202) main_cam5_pane_t4_ParamLimits

0xda78,	// (0x00079202) main_cam5_pane_t4

0xda90,	// (0x0007921a) main_cam5_pane_t5_ParamLimits

0xda90,	// (0x0007921a) main_cam5_pane_t5

0xdaa4,	// (0x0007922e) main_cam5_pane_t6_ParamLimits

0xdaa4,	// (0x0007922e) main_cam5_pane_t6

0xdab8,	// (0x00079242) main_cam5_pane_t7_ParamLimits

0xdab8,	// (0x00079242) main_cam5_pane_t7

0xdaca,	// (0x00079254) main_cam5_pane_t8_ParamLimits

0xdaca,	// (0x00079254) main_cam5_pane_t8

0xdae6,	// (0x00079270) main_cam5_pane_t9_ParamLimits

0xdae6,	// (0x00079270) main_cam5_pane_t9

0xdaf8,	// (0x00079282) main_cam5_pane_t10_ParamLimits

0xdaf8,	// (0x00079282) main_cam5_pane_t10

0xdb0a,	// (0x00079294) main_cam5_pane_t11_ParamLimits

0xdb0a,	// (0x00079294) main_cam5_pane_t11

0xdb1c,	// (0x000792a6) main_cam5_pane_t12_ParamLimits

0xdb1c,	// (0x000792a6) main_cam5_pane_t12

0xdb31,	// (0x000792bb) main_cam5_pane_t13_ParamLimits

0xdb31,	// (0x000792bb) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0007b1ea) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0007b1ea) main_cam5_pane_t

0x05e4,	// (0x0006bd6e) popup_scut_keymap_window_ParamLimits

0x05e4,	// (0x0006bd6e) popup_scut_keymap_window

0x69bd,	// (0x00072147) aid_size_cell_brow_shortcut

0xaadc,	// (0x00076266) bg_popup_window_pane_cp010

0x69c9,	// (0x00072153) grid_scut_pane

0x69d5,	// (0x0007215f) cell_scut_pane_ParamLimits

0x69d5,	// (0x0007215f) cell_scut_pane

0x69ec,	// (0x00072176) cell_scut_pane_g1

0xdb4e,	// (0x000792d8) cell_scut_pane_t1

0xdb5d,	// (0x000792e7) cell_scut_pane_t2

0x69f5,	// (0x0007217f) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0007b205) cell_scut_pane_t

0x4671,	// (0x0006fdfb) main_mup3_pane_g8_ParamLimits

0x4671,	// (0x0006fdfb) main_mup3_pane_g8

0x5b89,	// (0x00071313) area_vitu2_query_pane_ParamLimits

0x5b89,	// (0x00071313) area_vitu2_query_pane

0x6736,	// (0x00071ec0) input_focus_pane_cp08

0xdb6c,	// (0x000792f6) area_vitu2_query_pane_g1

0x6a03,	// (0x0007218d) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0007b20c) area_vitu2_query_pane_g

0x6a14,	// (0x0007219e) area_vitu2_query_pane_t1_ParamLimits

0x6a14,	// (0x0007219e) area_vitu2_query_pane_t1

0x6a28,	// (0x000721b2) area_vitu2_query_pane_t2_ParamLimits

0x6a28,	// (0x000721b2) area_vitu2_query_pane_t2

0x6a3c,	// (0x000721c6) area_vitu2_query_pane_t3_ParamLimits

0x6a3c,	// (0x000721c6) area_vitu2_query_pane_t3

0xa155,	// (0x000758df) area_vitu2_query_pane_t4_ParamLimits

0xa155,	// (0x000758df) area_vitu2_query_pane_t4

0xa17d,	// (0x00075907) area_vitu2_query_pane_t5_ParamLimits

0xa17d,	// (0x00075907) area_vitu2_query_pane_t5

0xa1a5,	// (0x0007592f) area_vitu2_query_pane_t6_ParamLimits

0xa1a5,	// (0x0007592f) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0007b211) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0007b211) area_vitu2_query_pane_t

0x6a64,	// (0x000721ee) bg_button_pane_cp018

0x6a72,	// (0x000721fc) bg_button_pane_cp021

0x6a7e,	// (0x00072208) bg_button_pane_cp022

0x6a8f,	// (0x00072219) input_focus_pane_cp09

0xb35e,	// (0x00076ae8) aid_size_touch_mv_arrow_left

0xb389,	// (0x00076b13) aid_size_touch_mv_arrow_right

0xd85c,	// (0x00078fe6) main_cset_slider_pane_g16_ParamLimits

0xd85c,	// (0x00078fe6) main_cset_slider_pane_g16

0xd868,	// (0x00078ff2) main_cset_slider_pane_g17_ParamLimits

0xd868,	// (0x00078ff2) main_cset_slider_pane_g17

0x69aa,	// (0x00072134) cell_cam4_burst_pane_g1_ParamLimits

0x93f8,	// (0x00074b82) compa_mode_pane

0x63f6,	// (0x00071b80) popup_vtel_slider_window_g3_ParamLimits

0x63f6,	// (0x00071b80) popup_vtel_slider_window_g3

0x640d,	// (0x00071b97) popup_vtel_slider_window_g4_ParamLimits

0x640d,	// (0x00071b97) popup_vtel_slider_window_g4

0x6424,	// (0x00071bae) popup_vtel_slider_window_t1_ParamLimits

0x6424,	// (0x00071bae) popup_vtel_slider_window_t1

0x946e,	// (0x00074bf8) main_cl_pane

0x96fe,	// (0x00074e88) popup_imed_adjust2_window_ParamLimits

0xc962,	// (0x000780ec) bg_tb_trans_pane_cp05_ParamLimits

0xd284,	// (0x00078a0e) popup_imed_adjust2_window_g1_ParamLimits

0xd293,	// (0x00078a1d) popup_imed_adjust2_window_g2_ParamLimits

0xd293,	// (0x00078a1d) popup_imed_adjust2_window_g2

0xd29f,	// (0x00078a29) popup_imed_adjust2_window_g3_ParamLimits

0xd29f,	// (0x00078a29) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0007af78) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0007af78) popup_imed_adjust2_window_g

0xd2ab,	// (0x00078a35) popup_imed_adjust2_window_t1_ParamLimits

0xd2c3,	// (0x00078a4d) slider_imed_adjust_pane_ParamLimits

0xd2d7,	// (0x00078a61) slider_imed_adjust_pane_g1_ParamLimits

0xd2e7,	// (0x00078a71) slider_imed_adjust_pane_g2_ParamLimits

0xd2f7,	// (0x00078a81) slider_imed_adjust_pane_g3_ParamLimits

0xd308,	// (0x00078a92) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0007af7f) slider_imed_adjust_pane_g_ParamLimits

0x5912,	// (0x0007109c) aid_touch_area_cam4_ParamLimits

0x5912,	// (0x0007109c) aid_touch_area_cam4

0x9ae4,	// (0x0007526e) battery_pane_cp01

0x59e1,	// (0x0007116b) main_camera4_pane_g6_ParamLimits

0x59e1,	// (0x0007116b) main_camera4_pane_g6

0x5a0b,	// (0x00071195) main_camera4_pane_t2_ParamLimits

0x5a0b,	// (0x00071195) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0007b086) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0007b086) main_camera4_pane_t

0x5a40,	// (0x000711ca) aid_touch_area_vid4_ParamLimits

0x5a40,	// (0x000711ca) aid_touch_area_vid4

0x5a94,	// (0x0007121e) main_video4_pane_g5_ParamLimits

0x5a94,	// (0x0007121e) main_video4_pane_g5

0x5ab9,	// (0x00071243) vid4_progress_pane_ParamLimits

0x5ab9,	// (0x00071243) vid4_progress_pane

0xd874,	// (0x00078ffe) main_cset_slider_pane_g18_ParamLimits

0xd874,	// (0x00078ffe) main_cset_slider_pane_g18

0xda36,	// (0x000791c0) cell_cam4_burst_pane_g2_ParamLimits

0xda36,	// (0x000791c0) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0007b1e5) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0007b1e5) cell_cam4_burst_pane_g

0xa8f0,	// (0x0007607a) bg_cl_pane_ParamLimits

0xa8f0,	// (0x0007607a) bg_cl_pane

0x6aa0,	// (0x0007222a) cl_header_pane_ParamLimits

0x6aa0,	// (0x0007222a) cl_header_pane

0x6ab4,	// (0x0007223e) cl_listscroll_pane_ParamLimits

0x6ab4,	// (0x0007223e) cl_listscroll_pane

0xdb78,	// (0x00079302) bg_cl_pane_g1

0xdbb0,	// (0x0007933a) bg_cl_pane_g2

0xdbb8,	// (0x00079342) bg_cl_pane_g3

0xdbc0,	// (0x0007934a) bg_cl_pane_g4

0xdbc8,	// (0x00079352) bg_cl_pane_g5

0xdbd0,	// (0x0007935a) bg_cl_pane_g6

0xdbd8,	// (0x00079362) bg_cl_pane_g7

0xdbe0,	// (0x0007936a) bg_cl_pane_g8

0xdbe8,	// (0x00079372) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0007b220) bg_cl_pane_g

0x6ac4,	// (0x0007224e) aid_height_cl_leading_ParamLimits

0x6ac4,	// (0x0007224e) aid_height_cl_leading

0x6ad0,	// (0x0007225a) aid_height_cl_text_ParamLimits

0x6ad0,	// (0x0007225a) aid_height_cl_text

0xa0b6,	// (0x00075840) bg_cl_header_pane_ParamLimits

0xa0b6,	// (0x00075840) bg_cl_header_pane

0x6aef,	// (0x00072279) cl_header_pane_g1_ParamLimits

0x6aef,	// (0x00072279) cl_header_pane_g1

0x6b05,	// (0x0007228f) cl_header_pane_t1_ParamLimits

0x6b05,	// (0x0007228f) cl_header_pane_t1

0xdbf0,	// (0x0007937a) cl_list_pane

0xd82f,	// (0x00078fb9) hc_scroll_pane_cp01

0xad15,	// (0x0007649f) bg_cl_header_pane_g1

0xd715,	// (0x00078e9f) bg_cl_header_pane_g2

0xad35,	// (0x000764bf) bg_cl_header_pane_g3

0xd725,	// (0x00078eaf) bg_cl_header_pane_g4

0xd71d,	// (0x00078ea7) bg_cl_header_pane_g5

0xd951,	// (0x000790db) bg_cl_header_pane_g6

0xd73d,	// (0x00078ec7) bg_cl_header_pane_g7

0xd745,	// (0x00078ecf) bg_cl_header_pane_g8

0xd735,	// (0x00078ebf) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0007b233) bg_cl_header_pane_g

0x6b1e,	// (0x000722a8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b1e,	// (0x000722a8) hc_cl_list_double_graphic_heading_pane

0x6b2f,	// (0x000722b9) hc_cl_list_single_graphic_pane_ParamLimits

0x6b2f,	// (0x000722b9) hc_cl_list_single_graphic_pane

0x6b48,	// (0x000722d2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b48,	// (0x000722d2) hc_cl_list_single_graphic_pane_g1

0x6b54,	// (0x000722de) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b54,	// (0x000722de) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0007b246) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0007b246) hc_cl_list_single_graphic_pane_g

0x6b68,	// (0x000722f2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b68,	// (0x000722f2) hc_cl_list_single_graphic_pane_t1

0x6b48,	// (0x000722d2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b48,	// (0x000722d2) hc_cl_list_double_graphic_heading_pane_g1

0x6b7d,	// (0x00072307) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b7d,	// (0x00072307) hc_cl_list_double_graphic_heading_pane_g2

0x6b91,	// (0x0007231b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b91,	// (0x0007231b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0007b24b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0007b24b) hc_cl_list_double_graphic_heading_pane_g

0x6ba5,	// (0x0007232f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ba5,	// (0x0007232f) hc_cl_list_double_graphic_heading_pane_t1

0x6bba,	// (0x00072344) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bba,	// (0x00072344) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0007b252) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0007b252) hc_cl_list_double_graphic_heading_pane_t

0x9c6e,	// (0x000753f8) vid4_progress_pane_g1

0x9c7e,	// (0x00075408) vid4_progress_pane_g2

0x6bcf,	// (0x00072359) vid4_progress_pane_g3

0x9c8e,	// (0x00075418) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0007b257) vid4_progress_pane_g

0x6be1,	// (0x0007236b) vid4_progress_pane_t1

0x9ca6,	// (0x00075430) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0007b262) vid4_progress_pane_t

0x6bf7,	// (0x00072381) wait_bar_pane_cp07

0xcb72,	// (0x000782fc) blid_firmament_pane_ParamLimits

0xcbb5,	// (0x0007833f) popup_blid_sat_info2_window_g1

0xcbd9,	// (0x00078363) popup_blid_sat_info2_window_t3

0xcbe7,	// (0x00078371) popup_blid_sat_info2_window_t4

0xcbf5,	// (0x0007837f) popup_blid_sat_info2_window_t5

0xcc03,	// (0x0007838d) popup_blid_sat_info2_window_t6

0xcc13,	// (0x0007839d) popup_blid_sat_info2_window_t7

0xcc21,	// (0x000783ab) popup_blid_sat_info2_window_t8

0xcc2f,	// (0x000783b9) popup_blid_sat_info2_window_t9

0xcc3d,	// (0x000783c7) popup_blid_sat_info2_window_t10

0xccff,	// (0x00078489) aid_firma_cardinal_ParamLimits

0xcd13,	// (0x0007849d) blid_firmament_pane_t1_ParamLimits

0xcd2a,	// (0x000784b4) blid_firmament_pane_t2_ParamLimits

0xcd41,	// (0x000784cb) blid_firmament_pane_t3_ParamLimits

0xcd58,	// (0x000784e2) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0007ae6c) blid_firmament_pane_t_ParamLimits

0xcd6f,	// (0x000784f9) blid_sat_info_pane_ParamLimits

0x9460,	// (0x00074bea) main_cam_set_pane_ParamLimits

0x4f2c,	// (0x000706b6) aid_size_cell_colour_35_ParamLimits

0x4f4c,	// (0x000706d6) aid_size_cell_colour_112_ParamLimits

0x4f6c,	// (0x000706f6) aid_size_cell_effect_ParamLimits

0xc962,	// (0x000780ec) bg_tb_trans_pane_cp02_ParamLimits

0xaf7d,	// (0x00076707) heading_imed_pane_ParamLimits

0x4f8c,	// (0x00070716) listscroll_imed_pane_ParamLimits

0xbf4e,	// (0x000776d8) popup_call2_audio_first_window_g5_ParamLimits

0xbf4e,	// (0x000776d8) popup_call2_audio_first_window_g5

0x552a,	// (0x00070cb4) aid_size_touch_image3_arrow_left_ParamLimits

0x552a,	// (0x00070cb4) aid_size_touch_image3_arrow_left

0x5556,	// (0x00070ce0) aid_size_touch_image3_arrow_right_ParamLimits

0x5556,	// (0x00070ce0) aid_size_touch_image3_arrow_right

0x9cbb,	// (0x00075445) vid4_progress_pane_t3

0x52a1,	// (0x00070a2b) main_hwr_training_symbol_option_pane_ParamLimits

0x52a1,	// (0x00070a2b) main_hwr_training_symbol_option_pane

0xd571,	// (0x00078cfb) popup_hwr_training_preview_window_ParamLimits

0xd571,	// (0x00078cfb) popup_hwr_training_preview_window

0x52c1,	// (0x00070a4b) hwr_training_navi_pane_g5_ParamLimits

0x52c1,	// (0x00070a4b) hwr_training_navi_pane_g5

0xd703,	// (0x00078e8d) popup_char_count_window

0x9460,	// (0x00074bea) bg_popup_sub_pane_cp20_ParamLimits

0x6540,	// (0x00071cca) list_vitu2_match_list_pane_ParamLimits

0x654f,	// (0x00071cd9) vitu2_page_scroll_pane_ParamLimits

0x654f,	// (0x00071cd9) vitu2_page_scroll_pane

0xdbf9,	// (0x00079383) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbf9,	// (0x00079383) list_single_hwr_training_symbol_option_pane

0xdc0c,	// (0x00079396) list_single_hwr_training_symbol_option_pane_g1

0xdc14,	// (0x0007939e) list_single_hwr_training_symbol_option_pane_t1

0xdc22,	// (0x000793ac) bg_button_pane_cp023

0xdc2b,	// (0x000793b5) bg_button_pane_cp024

0x6c37,	// (0x000723c1) vitu2_page_scroll_pane_g1

0x6c3f,	// (0x000723c9) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0007b269) vitu2_page_scroll_pane_g

0x6c47,	// (0x000723d1) vitu2_page_scroll_pane_t1

0xa971,	// (0x000760fb) popup_char_count_window_g1

0xdc5e,	// (0x000793e8) popup_char_count_window_g2

0xc9a1,	// (0x0007812b) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0007b26e) popup_char_count_window_g

0xdc67,	// (0x000793f1) popup_char_count_window_t1

0x946e,	// (0x00074bf8) main_vded2_pane

0xd270,	// (0x000789fa) aid_size_cell_imed_line

0xd27a,	// (0x00078a04) grid_imed_line_width_pane

0x9ba2,	// (0x0007532c) vid4_indicators_pane_g4

0xdc75,	// (0x000793ff) cell_imed_line_width_pane_ParamLimits

0xdc75,	// (0x000793ff) cell_imed_line_width_pane

0xdc89,	// (0x00079413) cell_imed_line_width_pane_g1

0xdb80,	// (0x0007930a) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0007b275) cell_imed_line_width_pane_g

0x6c56,	// (0x000723e0) main_vded2_pane_g1_ParamLimits

0x6c56,	// (0x000723e0) main_vded2_pane_g1

0x6c6c,	// (0x000723f6) main_vded2_pane_g2_ParamLimits

0x6c6c,	// (0x000723f6) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0007b27a) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0007b27a) main_vded2_pane_g

0x6c7e,	// (0x00072408) vded2_slider_pane_ParamLimits

0x6c7e,	// (0x00072408) vded2_slider_pane

0x6c8e,	// (0x00072418) aid_size_touch_vded2_end

0x6c98,	// (0x00072422) aid_size_touch_vded2_playhead

0xdc92,	// (0x0007941c) aid_size_touch_vded2_start

0xdc9a,	// (0x00079424) vded2_slider_bg_pane

0xdca3,	// (0x0007942d) vded2_slider_pane_g1

0xdcac,	// (0x00079436) vded2_slider_pane_g2

0x6ca2,	// (0x0007242c) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0007b27f) vded2_slider_pane_g

0xdcb4,	// (0x0007943e) vded2_slider_bg_pane_g1

0xdcbd,	// (0x00079447) vded2_slider_bg_pane_g2

0xdcc6,	// (0x00079450) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0007b286) vded2_slider_bg_pane_g

0x2c96,	// (0x0006e420) aid_postcard_touch_down_pane_ParamLimits

0x2c96,	// (0x0006e420) aid_postcard_touch_down_pane

0x2cac,	// (0x0006e436) aid_postcard_touch_up_pane_ParamLimits

0x2cac,	// (0x0006e436) aid_postcard_touch_up_pane

0x946e,	// (0x00074bf8) main_blid2_pane

0x96e4,	// (0x00074e6e) popup_blid2_search_window

0x93f8,	// (0x00074b82) blid2_gps_pane

0x93f8,	// (0x00074b82) blid2_navig_pane

0x93f8,	// (0x00074b82) blid2_search_pane

0x93f8,	// (0x00074b82) blid2_tripm_pane

0x6cad,	// (0x00072437) blid2_search_pane_g1_ParamLimits

0x6cad,	// (0x00072437) blid2_search_pane_g1

0x6cc5,	// (0x0007244f) blid2_search_pane_t1_ParamLimits

0x6cc5,	// (0x0007244f) blid2_search_pane_t1

0x6cd7,	// (0x00072461) aid_size_cell_blid2_gps_ParamLimits

0x6cd7,	// (0x00072461) aid_size_cell_blid2_gps

0x6cef,	// (0x00072479) blid2_gps_pane_g1_ParamLimits

0x6cef,	// (0x00072479) blid2_gps_pane_g1

0x6d03,	// (0x0007248d) grid_blid2_satellite_pane_ParamLimits

0x6d03,	// (0x0007248d) grid_blid2_satellite_pane

0x6d1d,	// (0x000724a7) blid2_navig_pane_g1_ParamLimits

0x6d1d,	// (0x000724a7) blid2_navig_pane_g1

0x6d29,	// (0x000724b3) blid2_navig_pane_t1_ParamLimits

0x6d29,	// (0x000724b3) blid2_navig_pane_t1

0x6d44,	// (0x000724ce) blid2_navig_pane_t2_ParamLimits

0x6d44,	// (0x000724ce) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0007b28d) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0007b28d) blid2_navig_pane_t

0x6d5f,	// (0x000724e9) blid2_navig_ring_pane_ParamLimits

0x6d5f,	// (0x000724e9) blid2_navig_ring_pane

0x6d78,	// (0x00072502) blid2_speed_pane_ParamLimits

0x6d78,	// (0x00072502) blid2_speed_pane

0x6d84,	// (0x0007250e) blid2_tripm_pane_g1_ParamLimits

0x6d84,	// (0x0007250e) blid2_tripm_pane_g1

0x6d9f,	// (0x00072529) blid2_tripm_pane_g2_ParamLimits

0x6d9f,	// (0x00072529) blid2_tripm_pane_g2

0x6db3,	// (0x0007253d) blid2_tripm_pane_g3_ParamLimits

0x6db3,	// (0x0007253d) blid2_tripm_pane_g3

0x6dc7,	// (0x00072551) blid2_tripm_pane_g4_ParamLimits

0x6dc7,	// (0x00072551) blid2_tripm_pane_g4

0x6ddb,	// (0x00072565) blid2_tripm_pane_g5_ParamLimits

0x6ddb,	// (0x00072565) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0007b292) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0007b292) blid2_tripm_pane_g

0x6e01,	// (0x0007258b) blid2_tripm_pane_t1_ParamLimits

0x6e01,	// (0x0007258b) blid2_tripm_pane_t1

0x6e1c,	// (0x000725a6) blid2_tripm_pane_t2_ParamLimits

0x6e1c,	// (0x000725a6) blid2_tripm_pane_t2

0x6e35,	// (0x000725bf) blid2_tripm_pane_t3_ParamLimits

0x6e35,	// (0x000725bf) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0007b29f) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0007b29f) blid2_tripm_pane_t

0x6e7c,	// (0x00072606) cell_blid2_satellite_pane_ParamLimits

0x6e7c,	// (0x00072606) cell_blid2_satellite_pane

0x6e9a,	// (0x00072624) cell_blid2_satellite_pane_g1

0xdccf,	// (0x00079459) cell_blid2_satellite_pane_t1

0xcd7f,	// (0x00078509) blid2_speed_pane_g1

0xdcdd,	// (0x00079467) blid2_speed_pane_t1

0xdceb,	// (0x00079475) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0007b2a8) blid2_speed_pane_t

0xcd7f,	// (0x00078509) blid2_navig_ring_pane_g1

0x6ea3,	// (0x0007262d) blid2_navig_ring_pane_g2

0x6eab,	// (0x00072635) blid2_navig_ring_pane_g3

0x6eb3,	// (0x0007263d) blid2_navig_ring_pane_g4

0x6ebb,	// (0x00072645) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0007b2ad) blid2_navig_ring_pane_g

0x93f8,	// (0x00074b82) bg_popup_window_pane_cp011

0xdcf9,	// (0x00079483) popup_blid2_search_window_g1

0xdd01,	// (0x0007948b) popup_blid2_search_window_t1

0xdd0f,	// (0x00079499) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0007b2b8) popup_blid2_search_window_t

0xac24,	// (0x000763ae) main_browser_pane_g1

0xa8f0,	// (0x0007607a) main_browser_pane_ParamLimits

0x9460,	// (0x00074bea) bg_button_pane_cp011_ParamLimits

0x5dd1,	// (0x0007155b) cell_vitu2_function_pane_g1_ParamLimits

0xc962,	// (0x000780ec) bg_popup_sub_pane_cp22_ParamLimits

0x6736,	// (0x00071ec0) input_focus_pane_cp08_ParamLimits

0x674d,	// (0x00071ed7) popup_vitu2_query_button_pane_ParamLimits

0x674d,	// (0x00071ed7) popup_vitu2_query_button_pane

0x675e,	// (0x00071ee8) popup_vitu2_query_input_button_pane

0xd98c,	// (0x00079116) popup_vitu2_query_window_g1_ParamLimits

0x6768,	// (0x00071ef2) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0007b1b9) popup_vitu2_query_window_g_ParamLimits

0x93f8,	// (0x00074b82) bg_button_pane_cp026

0x6ec3,	// (0x0007264d) popup_vitu2_query_input_button_pane_g1

0x93f8,	// (0x00074b82) bg_button_pane_cp025

0xdd1d,	// (0x000794a7) popup_vitu2_query_button_pane_t1

0x433f,	// (0x0006fac9) main_mp3_pane_t6

0x434d,	// (0x0006fad7) popup_slider_window_cp01

0x9b0e,	// (0x00075298) cam4_battery_pane

0x9b61,	// (0x000752eb) cam4_battery_pane_cp02

0x9c66,	// (0x000753f0) cam4_battery_pane_cp01

0x9c66,	// (0x000753f0) cam4_battery_pane_cp03

0xdb88,	// (0x00079312) cam4_battery_pane_g1

0xcd7f,	// (0x00078509) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0007b2bd) cam4_battery_pane_g

0xcc4b,	// (0x000783d5) popup_blid_sat_info2_window_t11

0xb35e,	// (0x00076ae8) aid_size_touch_mv_arrow_left_ParamLimits

0xb389,	// (0x00076b13) aid_size_touch_mv_arrow_right_ParamLimits

0xb3e7,	// (0x00076b71) navi_pane_g1_ParamLimits

0xb3f3,	// (0x00076b7d) navi_pane_g2_ParamLimits

0xb421,	// (0x00076bab) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0007ab6b) navi_pane_g_ParamLimits

0x2743,	// (0x0006decd) navi_pane_mv_t1_ParamLimits

0x4f98,	// (0x00070722) grid_imed_effect_pane_ParamLimits

0x1557,	// (0x0006cce1) aid_placing_vt_slider_lsc

0xab73,	// (0x000762fd) aid_placing_vt_slider_prt

0xa0b6,	// (0x00075840) bg_tb_trans_pane_cp01_ParamLimits

0xcee4,	// (0x0007866e) popup_image_details_window_g1_ParamLimits

0xcef7,	// (0x00078681) popup_image_details_window_g2_ParamLimits

0xcf0c,	// (0x00078696) popup_image_details_window_g3_ParamLimits

0xcf0c,	// (0x00078696) popup_image_details_window_g3

0xf727,	// (0x0007aeb1) popup_image_details_window_g_ParamLimits

0xcf20,	// (0x000786aa) popup_image_details_window_t1_ParamLimits

0xcf32,	// (0x000786bc) popup_image_details_window_t2_ParamLimits

0xcf4b,	// (0x000786d5) popup_image_details_window_t3_ParamLimits

0xcf5f,	// (0x000786e9) popup_image_details_window_t4_ParamLimits

0xcf7a,	// (0x00078704) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0007aeb8) popup_image_details_window_t_ParamLimits

0x6adc,	// (0x00072266) cl_header_name_pane_ParamLimits

0x6adc,	// (0x00072266) cl_header_name_pane

0x6ecb,	// (0x00072655) cl_header_name_pane_t1_ParamLimits

0x6ecb,	// (0x00072655) cl_header_name_pane_t1

0x6eec,	// (0x00072676) cl_header_name_pane_t2_ParamLimits

0x6eec,	// (0x00072676) cl_header_name_pane_t2

0x6f2e,	// (0x000726b8) cl_header_name_pane_t3_ParamLimits

0x6f2e,	// (0x000726b8) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0007b2c2) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0007b2c2) cl_header_name_pane_t

0xb4b0,	// (0x00076c3a) navi_pane_mv_g2_ParamLimits

0xd6dd,	// (0x00078e67) field_vitu2_entry_pane_g1_ParamLimits

0xd6e9,	// (0x00078e73) field_vitu2_entry_pane_g2_ParamLimits

0xd6f5,	// (0x00078e7f) field_vitu2_entry_pane_g3_ParamLimits

0xd6f5,	// (0x00078e7f) field_vitu2_entry_pane_g3

0xf92e,	// (0x0007b0b8) field_vitu2_entry_pane_g_ParamLimits

0x9bd5,	// (0x0007535f) cell_vitu2_itu_pane_g1_ParamLimits

0x5d65,	// (0x000714ef) cell_vitu2_itu_pane_g2_ParamLimits

0x5d65,	// (0x000714ef) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0007b0c4) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0007b0c4) cell_vitu2_itu_pane_g

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp05_ParamLimits

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp05

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp03

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp04

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp10_ParamLimits

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp10

0x6a7e,	// (0x00072208) bg_vkb2_func_pane_cp08

0x6a64,	// (0x000721ee) bg_vkb2_func_pane_cp06

0x6a72,	// (0x000721fc) bg_vkb2_func_pane_cp07

0xdc34,	// (0x000793be) bg_vkb2_func_pane_cp11_ParamLimits

0xdc34,	// (0x000793be) bg_vkb2_func_pane_cp11

0xdc49,	// (0x000793d3) bg_vkb2_func_pane_cp12_ParamLimits

0xdc49,	// (0x000793d3) bg_vkb2_func_pane_cp12

0x93f8,	// (0x00074b82) bg_vkb2_func_pane_cp09

0xd715,	// (0x00078e9f) bg_vkb2_func_pane_g1

0xad35,	// (0x000764bf) bg_vkb2_func_pane_g2

0xd71d,	// (0x00078ea7) bg_vkb2_func_pane_g3

0xd725,	// (0x00078eaf) bg_vkb2_func_pane_g4

0xd951,	// (0x000790db) bg_vkb2_func_pane_g5

0xd73d,	// (0x00078ec7) bg_vkb2_func_pane_g6

0xd745,	// (0x00078ecf) bg_vkb2_func_pane_g7

0xd735,	// (0x00078ebf) bg_vkb2_func_pane_g8

0xad15,	// (0x0007649f) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0007b2c9) bg_vkb2_func_pane_g

0x6def,	// (0x00072579) blid2_tripm_pane_g6_ParamLimits

0x6def,	// (0x00072579) blid2_tripm_pane_g6

0xd62f,	// (0x00078db9) mp4_progress_pane_g1

0x6e68,	// (0x000725f2) blid2_tripm_values_pane_ParamLimits

0x6e68,	// (0x000725f2) blid2_tripm_values_pane

0x6f5f,	// (0x000726e9) blid2_tripm_values_pane_t1

0x6f6d,	// (0x000726f7) blid2_tripm_values_pane_t2

0x6f7b,	// (0x00072705) blid2_tripm_values_pane_t3

0x6f89,	// (0x00072713) blid2_tripm_values_pane_t4

0x6f97,	// (0x00072721) blid2_tripm_values_pane_t5

0x6fa5,	// (0x0007272f) blid2_tripm_values_pane_t6

0x6fb3,	// (0x0007273d) blid2_tripm_values_pane_t7

0x6fc1,	// (0x0007274b) blid2_tripm_values_pane_t8

0x6fcf,	// (0x00072759) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0007b2dc) blid2_tripm_values_pane_t

0x1599,	// (0x0006cd23) call_video_pane_t1_ParamLimits

0x15b7,	// (0x0006cd41) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0007a9f4) call_video_pane_t_ParamLimits

0x2c14,	// (0x0006e39e) msg_header_pane_g1_ParamLimits

0xb698,	// (0x00076e22) msg_header_pane_g2_ParamLimits

0xb698,	// (0x00076e22) msg_header_pane_g2

0x0001,

0xf484,	// (0x0007ac0e) msg_header_pane_g_ParamLimits

0xf484,	// (0x0007ac0e) msg_header_pane_g

0xa8f0,	// (0x0007607a) main_clock2_pane_ParamLimits

0x4c99,	// (0x00070423) grid_clock2_toolbar_pane_ParamLimits

0x4c99,	// (0x00070423) grid_clock2_toolbar_pane

0x4c99,	// (0x00070423) listscroll_clock2_pane_ParamLimits

0x4c99,	// (0x00070423) listscroll_clock2_pane

0x4d7d,	// (0x00070507) main_clock2_pane_t3_ParamLimits

0x4d7d,	// (0x00070507) main_clock2_pane_t3

0x4da1,	// (0x0007052b) main_clock2_pane_t4_ParamLimits

0x4da1,	// (0x0007052b) main_clock2_pane_t4

0xdd2b,	// (0x000794b5) cell_clock2_toolbar_pane

0xdd33,	// (0x000794bd) cell_clock2_toolbar_pane_cp01

0xdd33,	// (0x000794bd) cell_clock2_toolbar_pane_cp02

0xdd3b,	// (0x000794c5) cell_clock2_toolbar_pane_cp03

0xdd43,	// (0x000794cd) list_clock2_pane

0xb2e3,	// (0x00076a6d) scroll_pane_cp10

0xdd4b,	// (0x000794d5) list_single_clock2_pane_ParamLimits

0xdd4b,	// (0x000794d5) list_single_clock2_pane

0xaadc,	// (0x00076266) list_highlight_pane_cp08

0xdd58,	// (0x000794e2) list_single_clock2_pane_t1

0xdd66,	// (0x000794f0) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0007b2ef) list_single_clock2_pane_t

0x93f8,	// (0x00074b82) bg_button_pane_cp10

0xdd74,	// (0x000794fe) cell_clock2_toolbar_pane_g1

0x2c22,	// (0x0006e3ac) aid_main_viewer_pane_g1_ParamLimits

0x2c22,	// (0x0006e3ac) aid_main_viewer_pane_g1

0x2c30,	// (0x0006e3ba) aid_main_viewer_pane_g2_ParamLimits

0x2c30,	// (0x0006e3ba) aid_main_viewer_pane_g2

0x2c3e,	// (0x0006e3c8) aid_main_viewer_pane_g3_ParamLimits

0x2c3e,	// (0x0006e3c8) aid_main_viewer_pane_g3

0x2c4d,	// (0x0006e3d7) aid_main_viewer_pane_g4_ParamLimits

0x2c4d,	// (0x0006e3d7) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0007ac1f) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0007ac1f) aid_main_viewer_pane_g

0x3555,	// (0x0006ecdf) main_calc_pane_ParamLimits

0x357b,	// (0x0006ed05) main_dialer2_pane_ParamLimits

0x946e,	// (0x00074bf8) main_cam6_pane

0x946e,	// (0x00074bf8) main_vid6_pane

0x4ca5,	// (0x0007042f) listscroll_gen_pane_cp06_ParamLimits

0x4ca5,	// (0x0007042f) listscroll_gen_pane_cp06

0x4dc4,	// (0x0007054e) main_clock2_pane_t5_ParamLimits

0x4dc4,	// (0x0007054e) main_clock2_pane_t5

0x4e22,	// (0x000705ac) aid_call2_pane_cp10_ParamLimits

0x4e34,	// (0x000705be) aid_call_pane_cp10_ParamLimits

0xb352,	// (0x00076adc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb352,	// (0x00076adc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e46,	// (0x000705d0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e46,	// (0x000705d0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb352,	// (0x00076adc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0007af6d) popup_clock_analogue_window_cp10_g_ParamLimits

0x4e5c,	// (0x000705e6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x54d7,	// (0x00070c61) cell_dialer2_keypad_pane_g2_ParamLimits

0x54d7,	// (0x00070c61) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0007b057) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0007b057) cell_dialer2_keypad_pane_g

0x54f3,	// (0x00070c7d) cell_dialer2_keypad_pane_t1

0x60eb,	// (0x00071875) main_cset_text2_pane_ParamLimits

0x60eb,	// (0x00071875) main_cset_text2_pane

0xdb6c,	// (0x000792f6) area_vitu2_query_pane_g1_ParamLimits

0x6a03,	// (0x0007218d) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0007b20c) area_vitu2_query_pane_g_ParamLimits

0xa1cd,	// (0x00075957) area_vitu2_query_pane_t7_ParamLimits

0xa1cd,	// (0x00075957) area_vitu2_query_pane_t7

0x6a64,	// (0x000721ee) bg_button_pane_cp018_ParamLimits

0x6a72,	// (0x000721fc) bg_button_pane_cp021_ParamLimits

0x6a7e,	// (0x00072208) bg_button_pane_cp022_ParamLimits

0x6a7e,	// (0x00072208) bg_vkb2_func_pane_cp08_ParamLimits

0x6a64,	// (0x000721ee) bg_vkb2_func_pane_cp06_ParamLimits

0x6a72,	// (0x000721fc) bg_vkb2_func_pane_cp07_ParamLimits

0x6a8f,	// (0x00072219) input_focus_pane_cp09_ParamLimits

0x9cd1,	// (0x0007545b) cam6_autofocus_pane_ParamLimits

0x9cd1,	// (0x0007545b) cam6_autofocus_pane

0x6fdd,	// (0x00072767) cam6_image_uncrop_pane_ParamLimits

0x6fdd,	// (0x00072767) cam6_image_uncrop_pane

0x6fec,	// (0x00072776) cam6_indi_pane_ParamLimits

0x6fec,	// (0x00072776) cam6_indi_pane

0x7002,	// (0x0007278c) cam6_mode_pane_ParamLimits

0x7002,	// (0x0007278c) cam6_mode_pane

0x7014,	// (0x0007279e) cam6_timer_pane_ParamLimits

0x7014,	// (0x0007279e) cam6_timer_pane

0x7024,	// (0x000727ae) cam6_zoom_pane_ParamLimits

0x7024,	// (0x000727ae) cam6_zoom_pane

0x7030,	// (0x000727ba) cam6_mode_pane_g1_ParamLimits

0x7030,	// (0x000727ba) cam6_mode_pane_g1

0x7040,	// (0x000727ca) cam6_mode_pane_g2_ParamLimits

0x7040,	// (0x000727ca) cam6_mode_pane_g2

0x7050,	// (0x000727da) cam6_mode_pane_g3_ParamLimits

0x7050,	// (0x000727da) cam6_mode_pane_g3

0x7060,	// (0x000727ea) cam6_mode_pane_g4_ParamLimits

0x7060,	// (0x000727ea) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0007b2f4) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0007b2f4) cam6_mode_pane_g

0xdd7c,	// (0x00079506) bg_tb_trans_pane_cp08_ParamLimits

0xdd7c,	// (0x00079506) bg_tb_trans_pane_cp08

0xdd8a,	// (0x00079514) cam6_battery_pane_ParamLimits

0xdd8a,	// (0x00079514) cam6_battery_pane

0xdda0,	// (0x0007952a) cam6_indi_pane_g1_ParamLimits

0xdda0,	// (0x0007952a) cam6_indi_pane_g1

0xddb2,	// (0x0007953c) cam6_indi_pane_g2_ParamLimits

0xddb2,	// (0x0007953c) cam6_indi_pane_g2

0xddc4,	// (0x0007954e) cam6_indi_pane_g3_ParamLimits

0xddc4,	// (0x0007954e) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0007b2fd) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0007b2fd) cam6_indi_pane_g

0xddd6,	// (0x00079560) cam6_indi_pane_t1_ParamLimits

0xddd6,	// (0x00079560) cam6_indi_pane_t1

0x7070,	// (0x000727fa) cam6_autofocus_pane_g1

0x7078,	// (0x00072802) cam6_autofocus_pane_g2

0x7080,	// (0x0007280a) cam6_autofocus_pane_g3

0x7088,	// (0x00072812) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0007b304) cam6_autofocus_pane_g

0xddfc,	// (0x00079586) cam6_timer_pane_g1

0xde04,	// (0x0007958e) cam6_timer_pane_t1

0xde12,	// (0x0007959c) cam6_zoom_cont_pane

0xde1a,	// (0x000795a4) cam6_zoom_pane_g1

0xde22,	// (0x000795ac) cam6_zoom_pane_g2

0x7090,	// (0x0007281a) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0007b30d) cam6_zoom_pane_g

0xcd7f,	// (0x00078509) cam6_battery_pane_g1

0xcd7f,	// (0x00078509) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0007ae75) cam6_battery_pane_g

0xde2a,	// (0x000795b4) cam6_zoom_cont_pane_g1

0xde33,	// (0x000795bd) cam6_zoom_cont_pane_g2

0xde3c,	// (0x000795c6) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0007b314) cam6_zoom_cont_pane_g

0x70ad,	// (0x00072837) cam6_mode_pane_cp_ParamLimits

0x70ad,	// (0x00072837) cam6_mode_pane_cp

0x70bf,	// (0x00072849) cam6_zoom_pane_cp_ParamLimits

0x70bf,	// (0x00072849) cam6_zoom_pane_cp

0x70cb,	// (0x00072855) vid6_image_uncrop_cif_pane_ParamLimits

0x70cb,	// (0x00072855) vid6_image_uncrop_cif_pane

0x70db,	// (0x00072865) vid6_image_uncrop_nhd_pane_ParamLimits

0x70db,	// (0x00072865) vid6_image_uncrop_nhd_pane

0x70ea,	// (0x00072874) vid6_image_uncrop_vga_pane_ParamLimits

0x70ea,	// (0x00072874) vid6_image_uncrop_vga_pane

0x70f9,	// (0x00072883) vid6_image_uncrop_wvga_pane_ParamLimits

0x70f9,	// (0x00072883) vid6_image_uncrop_wvga_pane

0x7108,	// (0x00072892) vid6_indi_pane_ParamLimits

0x7108,	// (0x00072892) vid6_indi_pane

0xdd7c,	// (0x00079506) bg_tb_trans_pane_cp09_ParamLimits

0xdd7c,	// (0x00079506) bg_tb_trans_pane_cp09

0xde54,	// (0x000795de) cam6_battery_pane_cp_ParamLimits

0xde54,	// (0x000795de) cam6_battery_pane_cp

0xde60,	// (0x000795ea) vid6_indi_pane_g1_ParamLimits

0xde60,	// (0x000795ea) vid6_indi_pane_g1

0xde72,	// (0x000795fc) vid6_indi_pane_g2_ParamLimits

0xde72,	// (0x000795fc) vid6_indi_pane_g2

0xde84,	// (0x0007960e) vid6_indi_pane_g3_ParamLimits

0xde84,	// (0x0007960e) vid6_indi_pane_g3

0xde99,	// (0x00079623) vid6_indi_pane_g4_ParamLimits

0xde99,	// (0x00079623) vid6_indi_pane_g4

0xdeae,	// (0x00079638) vid6_indi_pane_g5_ParamLimits

0xdeae,	// (0x00079638) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0007b31b) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0007b31b) vid6_indi_pane_g

0xdec8,	// (0x00079652) vid6_indi_pane_t1_ParamLimits

0xdec8,	// (0x00079652) vid6_indi_pane_t1

0xdede,	// (0x00079668) vid6_indi_pane_t2_ParamLimits

0xdede,	// (0x00079668) vid6_indi_pane_t2

0xdf06,	// (0x00079690) vid6_indi_pane_t3_ParamLimits

0xdf06,	// (0x00079690) vid6_indi_pane_t3

0xdf2e,	// (0x000796b8) vid6_indi_pane_t4_ParamLimits

0xdf2e,	// (0x000796b8) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0007b326) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0007b326) vid6_indi_pane_t

0xdf52,	// (0x000796dc) wait_bar_pane_cp08

0x7120,	// (0x000728aa) main_cset_text2_pane_t1_ParamLimits

0x7120,	// (0x000728aa) main_cset_text2_pane_t1

0x7098,	// (0x00072822) listscroll_gen_pane_cp06_t1_ParamLimits

0x7098,	// (0x00072822) listscroll_gen_pane_cp06_t1

0x946e,	// (0x00074bf8) main_cam6_set_pane

0x9b00,	// (0x0007528a) bg_tb_trans_pane_cp06_ParamLimits

0x9b16,	// (0x000752a0) cam4_indicators_pane_g1_ParamLimits

0x9b27,	// (0x000752b1) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0007b094) cam4_indicators_pane_g_ParamLimits

0x9b3f,	// (0x000752c9) cam4_indicators_pane_t1_ParamLimits

0x9460,	// (0x00074bea) bg_tb_trans_pane_cp07_ParamLimits

0x9b69,	// (0x000752f3) vid4_indicators_pane_g1_ParamLimits

0x9b7d,	// (0x00075307) vid4_indicators_pane_g2_ParamLimits

0x9b91,	// (0x0007531b) vid4_indicators_pane_g3_ParamLimits

0x9ba2,	// (0x0007532c) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0007b0a6) vid4_indicators_pane_g_ParamLimits

0x9bbe,	// (0x00075348) vid4_indicators_pane_t1_ParamLimits

0x9c6e,	// (0x000753f8) vid4_progress_pane_g1_ParamLimits

0x9c7e,	// (0x00075408) vid4_progress_pane_g2_ParamLimits

0x6bcf,	// (0x00072359) vid4_progress_pane_g3_ParamLimits

0x9c8e,	// (0x00075418) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0007b257) vid4_progress_pane_g_ParamLimits

0x6be1,	// (0x0007236b) vid4_progress_pane_t1_ParamLimits

0x9ca6,	// (0x00075430) vid4_progress_pane_t2_ParamLimits

0x9cbb,	// (0x00075445) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0007b262) vid4_progress_pane_t_ParamLimits

0x6bf7,	// (0x00072381) wait_bar_pane_cp07_ParamLimits

0x713e,	// (0x000728c8) main_cam6_set_pane_g2_ParamLimits

0x713e,	// (0x000728c8) main_cam6_set_pane_g2

0x7162,	// (0x000728ec) main_cset6_listscroll_pane_ParamLimits

0x7162,	// (0x000728ec) main_cset6_listscroll_pane

0x717e,	// (0x00072908) main_cset6_slider_pane_ParamLimits

0x717e,	// (0x00072908) main_cset6_slider_pane

0x7194,	// (0x0007291e) main_cset6_text2_pane_ParamLimits

0x7194,	// (0x0007291e) main_cset6_text2_pane

0xdf61,	// (0x000796eb) main_cset6_text_pane

0xdf69,	// (0x000796f3) main_cset_list_pane_copy1_ParamLimits

0xdf69,	// (0x000796f3) main_cset_list_pane_copy1

0xdf79,	// (0x00079703) scroll_pane_cp028_copy1

0x71a2,	// (0x0007292c) cset_list_set_pane_copy1

0x71b4,	// (0x0007293e) aid_position_infowindow_above_copy1

0x71bc,	// (0x00072946) aid_position_infowindow_below_copy1

0x71c4,	// (0x0007294e) cset_list_set_pane_g1_copy1

0x71cc,	// (0x00072956) cset_list_set_pane_g3_copy1_ParamLimits

0x71cc,	// (0x00072956) cset_list_set_pane_g3_copy1

0x71db,	// (0x00072965) cset_list_set_pane_t1_copy1_ParamLimits

0x71db,	// (0x00072965) cset_list_set_pane_t1_copy1

0xa0b6,	// (0x00075840) list_highlight_pane_cp021_copy1_ParamLimits

0xa0b6,	// (0x00075840) list_highlight_pane_cp021_copy1

0xdf82,	// (0x0007970c) cset6_slider_pane_ParamLimits

0xdf82,	// (0x0007970c) cset6_slider_pane

0xdfae,	// (0x00079738) main_cset6_slider_pane_g1_ParamLimits

0xdfae,	// (0x00079738) main_cset6_slider_pane_g1

0x71f0,	// (0x0007297a) main_cset6_slider_pane_g2_ParamLimits

0x71f0,	// (0x0007297a) main_cset6_slider_pane_g2

0xdfd6,	// (0x00079760) main_cset6_slider_pane_g3_ParamLimits

0xdfd6,	// (0x00079760) main_cset6_slider_pane_g3

0x7218,	// (0x000729a2) main_cset6_slider_pane_g4_ParamLimits

0x7218,	// (0x000729a2) main_cset6_slider_pane_g4

0xdfe2,	// (0x0007976c) main_cset6_slider_pane_g5_ParamLimits

0xdfe2,	// (0x0007976c) main_cset6_slider_pane_g5

0xd844,	// (0x00078fce) main_cset6_slider_pane_g7_ParamLimits

0xd844,	// (0x00078fce) main_cset6_slider_pane_g7

0xd850,	// (0x00078fda) main_cset6_slider_pane_g8_ParamLimits

0xd850,	// (0x00078fda) main_cset6_slider_pane_g8

0x6198,	// (0x00071922) main_cset6_slider_pane_g9_ParamLimits

0x6198,	// (0x00071922) main_cset6_slider_pane_g9

0x61a4,	// (0x0007192e) main_cset6_slider_pane_g10_ParamLimits

0x61a4,	// (0x0007192e) main_cset6_slider_pane_g10

0x61b0,	// (0x0007193a) main_cset6_slider_pane_g11_ParamLimits

0x61b0,	// (0x0007193a) main_cset6_slider_pane_g11

0x61bc,	// (0x00071946) main_cset6_slider_pane_g12_ParamLimits

0x61bc,	// (0x00071946) main_cset6_slider_pane_g12

0x61c8,	// (0x00071952) main_cset6_slider_pane_g13_ParamLimits

0x61c8,	// (0x00071952) main_cset6_slider_pane_g13

0x61d4,	// (0x0007195e) main_cset6_slider_pane_g14_ParamLimits

0x61d4,	// (0x0007195e) main_cset6_slider_pane_g14

0x7224,	// (0x000729ae) main_cset6_slider_pane_g15_ParamLimits

0x7224,	// (0x000729ae) main_cset6_slider_pane_g15

0xd85c,	// (0x00078fe6) main_cset6_slider_pane_g16_ParamLimits

0xd85c,	// (0x00078fe6) main_cset6_slider_pane_g16

0xd868,	// (0x00078ff2) main_cset6_slider_pane_g17_ParamLimits

0xd868,	// (0x00078ff2) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0007b32f) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0007b32f) main_cset6_slider_pane_g

0xdfee,	// (0x00079778) main_cset6_slider_pane_t1_ParamLimits

0xdfee,	// (0x00079778) main_cset6_slider_pane_t1

0x7254,	// (0x000729de) main_cset6_slider_pane_t2_ParamLimits

0x7254,	// (0x000729de) main_cset6_slider_pane_t2

0x727f,	// (0x00072a09) main_cset6_slider_pane_t3_ParamLimits

0x727f,	// (0x00072a09) main_cset6_slider_pane_t3

0x72aa,	// (0x00072a34) main_cset6_slider_pane_t4_ParamLimits

0x72aa,	// (0x00072a34) main_cset6_slider_pane_t4

0x72d5,	// (0x00072a5f) main_cset6_slider_pane_t5_ParamLimits

0x72d5,	// (0x00072a5f) main_cset6_slider_pane_t5

0xe02f,	// (0x000797b9) main_cset6_slider_pane_t7_ParamLimits

0xe02f,	// (0x000797b9) main_cset6_slider_pane_t7

0x7300,	// (0x00072a8a) main_cset6_slider_pane_t8_ParamLimits

0x7300,	// (0x00072a8a) main_cset6_slider_pane_t8

0x7324,	// (0x00072aae) main_cset6_slider_pane_t9_ParamLimits

0x7324,	// (0x00072aae) main_cset6_slider_pane_t9

0x7348,	// (0x00072ad2) main_cset6_slider_pane_t10_ParamLimits

0x7348,	// (0x00072ad2) main_cset6_slider_pane_t10

0x736c,	// (0x00072af6) main_cset6_slider_pane_t11_ParamLimits

0x736c,	// (0x00072af6) main_cset6_slider_pane_t11

0xe065,	// (0x000797ef) main_cset6_slider_pane_t14_ParamLimits

0xe065,	// (0x000797ef) main_cset6_slider_pane_t14

0xe09e,	// (0x00079828) main_cset6_slider_pane_t15_ParamLimits

0xe09e,	// (0x00079828) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0007b354) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0007b354) main_cset6_slider_pane_t

0xd546,	// (0x00078cd0) cset_slider_pane_g1_copy1

0xe0d7,	// (0x00079861) cset_slider_pane_g2_copy1

0xe0e0,	// (0x0007986a) cset_slider_pane_g3_copy1

0x93f8,	// (0x00074b82) bg_popup_sub_pane_cp011_copy1

0xe0e9,	// (0x00079873) main_cset_text_pane_g1_copy1

0xd9a0,	// (0x0007912a) main_cset_text_pane_t1_copy1

0xd9ae,	// (0x00079138) main_cset_text_pane_t2_copy1

0xd9bc,	// (0x00079146) main_cset_text_pane_t3_copy1

0xd9ca,	// (0x00079154) main_cset_text_pane_t4_copy1

0xd9d8,	// (0x00079162) main_cset_text_pane_t5_copy1

0xe0f1,	// (0x0007987b) main_cset_text_pane_t6_copy1

0xe0ff,	// (0x00079889) main_cset_text_pane_t7_copy1

0x7120,	// (0x000728aa) main_cset_text2_pane_t1_copy1

0x9460,	// (0x00074bea) main_ncimui_pane

0x37bf,	// (0x0006ef49) popup_query_ncimui_window_ParamLimits

0x37bf,	// (0x0006ef49) popup_query_ncimui_window

0xa100,	// (0x0007588a) field_cale_ev2_pane_g4_ParamLimits

0xa100,	// (0x0007588a) field_cale_ev2_pane_g4

0x53b6,	// (0x00070b40) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53b6,	// (0x00070b40) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0007b02e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0007b02e) cell_video_dialer_keypad_pane_g

0x53ce,	// (0x00070b58) cell_video_dialer_keypad_pane_t1

0x93f8,	// (0x00074b82) bg_popup_window_pane_cp012

0xb1ce,	// (0x00076958) heading_pane_cp06

0xe12b,	// (0x000798b5) ncim_query_content_pane

0x93f8,	// (0x00074b82) bg_popup_heading_pane_cp01

0xe133,	// (0x000798bd) ncim_heading_pane_t1

0xe141,	// (0x000798cb) ncim_indicator_popup_pane

0xe153,	// (0x000798dd) ncim_query_button_pane

0xe167,	// (0x000798f1) ncim_query_content_pane_t1

0xe179,	// (0x00079903) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0007b398) ncim_query_content_pane_t

0xe1b3,	// (0x0007993d) ncim_query_list_pane

0xe1c5,	// (0x0007994f) ncim_query_popup_pane

0xe141,	// (0x000798cb) ncim_indicator_popup_pane_ParamLimits

0x758f,	// (0x00072d19) ncim_query_content_pane_g1_ParamLimits

0x758f,	// (0x00072d19) ncim_query_content_pane_g1

0xe167,	// (0x000798f1) ncim_query_content_pane_t1_ParamLimits

0xe179,	// (0x00079903) ncim_query_content_pane_t2_ParamLimits

0x759b,	// (0x00072d25) ncim_query_content_pane_t3_ParamLimits

0x759b,	// (0x00072d25) ncim_query_content_pane_t3

0x75c3,	// (0x00072d4d) ncim_query_content_pane_t4_ParamLimits

0x75c3,	// (0x00072d4d) ncim_query_content_pane_t4

0x75eb,	// (0x00072d75) ncim_query_content_pane_t5_ParamLimits

0x75eb,	// (0x00072d75) ncim_query_content_pane_t5

0xe18b,	// (0x00079915) ncim_query_content_pane_t6_ParamLimits

0xe18b,	// (0x00079915) ncim_query_content_pane_t6

0xfc0e,	// (0x0007b398) ncim_query_content_pane_t_ParamLimits

0xe1b3,	// (0x0007993d) ncim_query_list_pane_ParamLimits

0xe1c5,	// (0x0007994f) ncim_query_popup_pane_ParamLimits

0xe1d9,	// (0x00079963) wait_bar_pane_cp04

0x93f8,	// (0x00074b82) input_focus_pane_cp011

0xe1e1,	// (0x0007996b) ncim_query_popup_pane_t1

0xe1ef,	// (0x00079979) ncim_list_query_list_pane_ParamLimits

0xe1ef,	// (0x00079979) ncim_list_query_list_pane

0x93f8,	// (0x00074b82) bg_button_pane_cp027

0xe1fc,	// (0x00079986) ncim_query_button_pane_g1

0x93f8,	// (0x00074b82) list_highlight_pane_cp012

0xe206,	// (0x00079990) ncim_list_query_list_pane_g1

0xe20e,	// (0x00079998) ncim_list_query_list_pane_t1

0x9b33,	// (0x000752bd) cam4_indicators_pane_g3_ParamLimits

0x9b33,	// (0x000752bd) cam4_indicators_pane_g3

0x9bae,	// (0x00075338) vid4_indicators_pane_g5_ParamLimits

0x9bae,	// (0x00075338) vid4_indicators_pane_g5

0x9c9a,	// (0x00075424) vid4_progress_pane_g5_ParamLimits

0x9c9a,	// (0x00075424) vid4_progress_pane_g5

0x747a,	// (0x00072c04) main_ncimui_pane_g1

0x74e3,	// (0x00072c6d) ncimui_group_query_pane_ParamLimits

0x74e3,	// (0x00072c6d) ncimui_group_query_pane

0x752b,	// (0x00072cb5) ncimui_list_pane_ParamLimits

0x752b,	// (0x00072cb5) ncimui_list_pane

0x7552,	// (0x00072cdc) ncimui_text_pane_ParamLimits

0x7552,	// (0x00072cdc) ncimui_text_pane

0x7613,	// (0x00072d9d) ncimui_text_pane_t1_ParamLimits

0x7613,	// (0x00072d9d) ncimui_text_pane_t1

0xe21c,	// (0x000799a6) ncimui_list_single_graphic_pane_ParamLimits

0xe21c,	// (0x000799a6) ncimui_list_single_graphic_pane

0x7631,	// (0x00072dbb) ncimui_query_pane_ParamLimits

0x7631,	// (0x00072dbb) ncimui_query_pane

0x93f8,	// (0x00074b82) list_highlight_pane_cp013

0xe22c,	// (0x000799b6) ncim_list_query_list_pane_t1_copy1

0xe23a,	// (0x000799c4) ncim_list_single_graphic_pane_g1

0x7644,	// (0x00072dce) ncim_query_button_pane_cp01

0x7650,	// (0x00072dda) ncim_query_entry_pane_ParamLimits

0x7650,	// (0x00072dda) ncim_query_entry_pane

0x7663,	// (0x00072ded) ncimui_query_pane_g1

0x766f,	// (0x00072df9) ncimui_query_pane_t1_ParamLimits

0x766f,	// (0x00072df9) ncimui_query_pane_t1

0xa0b6,	// (0x00075840) input_focus_pane_cp012

0xe242,	// (0x000799cc) ncim_query_entry_pane_t1

0xa8f0,	// (0x0007607a) main_im_pane_ParamLimits

0x9460,	// (0x00074bea) main_mobtv_pane_ParamLimits

0x9460,	// (0x00074bea) main_mobtv_pane

0x723c,	// (0x000729c6) main_cset6_slider_pane_g18_ParamLimits

0x723c,	// (0x000729c6) main_cset6_slider_pane_g18

0x7248,	// (0x000729d2) main_cset6_slider_pane_g19_ParamLimits

0x7248,	// (0x000729d2) main_cset6_slider_pane_g19

0x7688,	// (0x00072e12) bg_main_mobtv_pane_ParamLimits

0x7688,	// (0x00072e12) bg_main_mobtv_pane

0x7696,	// (0x00072e20) main_mobtv_info_pane

0x769f,	// (0x00072e29) main_mobtv_loading_pane_ParamLimits

0x769f,	// (0x00072e29) main_mobtv_loading_pane

0xe254,	// (0x000799de) main_mobtv_pg_channel_list_pane

0xe25e,	// (0x000799e8) main_mobtv_pg_hdr_pane

0x76ac,	// (0x00072e36) main_mobtv_programe_curr_pane_ParamLimits

0x76ac,	// (0x00072e36) main_mobtv_programe_curr_pane

0x76b9,	// (0x00072e43) main_mobtv_programe_next_pane_ParamLimits

0x76b9,	// (0x00072e43) main_mobtv_programe_next_pane

0xe267,	// (0x000799f1) popup_mobtv_noti_window

0xcd7f,	// (0x00078509) main_tv_pg_hdr_pane_g1

0xe26f,	// (0x000799f9) main_tv_pg_hdr_pane_g2

0xe277,	// (0x00079a01) main_tv_pg_hdr_pane_g3

0xe27f,	// (0x00079a09) main_tv_pg_hdr_pane_g4

0xe287,	// (0x00079a11) main_tv_pg_hdr_pane_g5

0xe291,	// (0x00079a1b) main_tv_pg_hdr_pane_g6

0xe29b,	// (0x00079a25) main_tv_pg_hdr_pane_g7

0xe2a5,	// (0x00079a2f) main_tv_pg_hdr_pane_g8

0xe2af,	// (0x00079a39) main_tv_pg_hdr_pane_g9

0xe2b9,	// (0x00079a43) main_tv_pg_hdr_pane_g10

0xe2c3,	// (0x00079a4d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0007b3a5) main_tv_pg_hdr_pane_g

0xe2cd,	// (0x00079a57) main_tv_pg_hdr_pane_t1

0xe2db,	// (0x00079a65) main_tv_pg_hdr_pane_t2

0xe2e9,	// (0x00079a73) main_tv_pg_hdr_pane_t3

0xe2f9,	// (0x00079a83) main_tv_pg_hdr_pane_t4

0xe309,	// (0x00079a93) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0007b3bc) main_tv_pg_hdr_pane_t

0xe319,	// (0x00079aa3) single_mobtv_pg_channel_pane_ParamLimits

0xe319,	// (0x00079aa3) single_mobtv_pg_channel_pane

0xe32b,	// (0x00079ab5) single_mobtv_pg_channel_table_pane

0xae38,	// (0x000765c2) single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x00079abe) single_tv_pg_channel_pane_g1

0xe33d,	// (0x00079ac7) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0007b3c7) single_tv_pg_channel_pane_g

0xcfc4,	// (0x0007874e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfc4,	// (0x0007874e) bg_single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x00079ad0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe346,	// (0x00079ad0) single_mobtv_pg_channel_thumb_pane_g1

0xe354,	// (0x00079ade) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe354,	// (0x00079ade) single_mobtv_pg_channel_thumb_pane_g2

0xe360,	// (0x00079aea) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe360,	// (0x00079aea) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0007b3cc) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0007b3cc) single_mobtv_pg_channel_thumb_pane_g

0xe36c,	// (0x00079af6) single_mobtv_pg_channel_thumb_pane_t1

0xe37a,	// (0x00079b04) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0007b3d3) single_mobtv_pg_channel_thumb_pane_t

0xcd7f,	// (0x00078509) bg_single_mobtv_pg_channel_table_pane_g1

0xcd7f,	// (0x00078509) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0007ae75) bg_single_mobtv_pg_channel_table_pane_g

0xe388,	// (0x00079b12) single_mobtv_pg_channel_table_pane_t1

0xe396,	// (0x00079b20) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0007b3d8) single_mobtv_pg_channel_table_pane_t

0x76ce,	// (0x00072e58) main_mobtv_info_pane_g1_ParamLimits

0x76ce,	// (0x00072e58) main_mobtv_info_pane_g1

0x76ec,	// (0x00072e76) main_mobtv_info_pane_t1_ParamLimits

0x76ec,	// (0x00072e76) main_mobtv_info_pane_t1

0x7764,	// (0x00072eee) main_mobtv_info_pane_t2_ParamLimits

0x7764,	// (0x00072eee) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0007b3e2) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0007b3e2) main_mobtv_info_pane_t

0x77f3,	// (0x00072f7d) wait_bar_pane_cp05

0x7805,	// (0x00072f8f) main_mobtv_loading_pane_g1_ParamLimits

0x7805,	// (0x00072f8f) main_mobtv_loading_pane_g1

0x7818,	// (0x00072fa2) main_mobtv_loading_pane_g2_ParamLimits

0x7818,	// (0x00072fa2) main_mobtv_loading_pane_g2

0x7824,	// (0x00072fae) main_mobtv_loading_pane_g3_ParamLimits

0x7824,	// (0x00072fae) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0007b3e9) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0007b3e9) main_mobtv_loading_pane_g

0xe3a4,	// (0x00079b2e) main_mobtv_loading_pane_t1_ParamLimits

0xe3a4,	// (0x00079b2e) main_mobtv_loading_pane_t1

0xe3bc,	// (0x00079b46) main_mobtv_loading_pane_t2_ParamLimits

0xe3bc,	// (0x00079b46) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0007b3f0) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0007b3f0) main_mobtv_loading_pane_t

0x7837,	// (0x00072fc1) wait_bar_pane_cp06_ParamLimits

0x7837,	// (0x00072fc1) wait_bar_pane_cp06

0xe3e0,	// (0x00079b6a) main_mobtv_programe_curr_pane_t1

0xe3ee,	// (0x00079b78) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0007b3f5) main_mobtv_programe_curr_pane_t

0xe3fc,	// (0x00079b86) main_mobtv_programe_next_pane_t1

0xe40a,	// (0x00079b94) main_mobtv_programe_next_pane_t2

0xe418,	// (0x00079ba2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0007b3fa) main_mobtv_programe_next_pane_t

0x93f8,	// (0x00074b82) bg_popup_mobtv_noti_window_pane

0xe426,	// (0x00079bb0) popup_mobtv_noti_window_g1

0xe42e,	// (0x00079bb8) popup_mobtv_noti_window_t1

0xe43c,	// (0x00079bc6) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0007b401) popup_mobtv_noti_window_t

0xcd7f,	// (0x00078509) bg_popup_mobtv_noti_window_pane_g1

0x946e,	// (0x00074bf8) sc_clock_pane

0x946e,	// (0x00074bf8) main_fs_bigclock_pane

0x6e52,	// (0x000725dc) blid2_tripm_pane_t4_ParamLimits

0x6e52,	// (0x000725dc) blid2_tripm_pane_t4

0x7846,	// (0x00072fd0) sc_clock_pane_g1_ParamLimits

0x7846,	// (0x00072fd0) sc_clock_pane_g1

0x7858,	// (0x00072fe2) sc_clock_pane_t1_ParamLimits

0x7858,	// (0x00072fe2) sc_clock_pane_t1

0x787a,	// (0x00073004) sc_clock_pane_t2_ParamLimits

0x787a,	// (0x00073004) sc_clock_pane_t2

0x7892,	// (0x0007301c) sc_clock_pane_t3_ParamLimits

0x7892,	// (0x0007301c) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0007b406) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0007b406) sc_clock_pane_t

0x8886,	// (0x00074010) main_fs_bigclock_indicator_pane_ParamLimits

0x8886,	// (0x00074010) main_fs_bigclock_indicator_pane

0x7938,	// (0x000730c2) main_fs_bigclock_pane_g1_ParamLimits

0x7938,	// (0x000730c2) main_fs_bigclock_pane_g1

0x8892,	// (0x0007401c) main_fs_bigclock_pane_t1_ParamLimits

0x8892,	// (0x0007401c) main_fs_bigclock_pane_t1

0x88a4,	// (0x0007402e) main_fs_bigclock_pane_t2_ParamLimits

0x88a4,	// (0x0007402e) main_fs_bigclock_pane_t2

0x88b8,	// (0x00074042) main_fs_bigclock_pane_t3_ParamLimits

0x88b8,	// (0x00074042) main_fs_bigclock_pane_t3

0x0002,

0xfe31,	// (0x0007b5bb) main_fs_bigclock_pane_t_ParamLimits

0xfe31,	// (0x0007b5bb) main_fs_bigclock_pane_t

0xeccc,	// (0x0007a456) main_fs_bigclock_indicator_pane_g1

0xe15b,	// (0x000798e5) ncim_query_content_pane_g2_ParamLimits

0xe15b,	// (0x000798e5) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0007b393) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0007b393) ncim_query_content_pane_g

0x78ab,	// (0x00073035) sc_clock_pane_t4_ParamLimits

0x78ab,	// (0x00073035) sc_clock_pane_t4

0x9460,	// (0x00074bea) main_radioblah_pane

0x9a9a,	// (0x00075224) cell_call4_button_pane_t1_copy1_ParamLimits

0x9a9a,	// (0x00075224) cell_call4_button_pane_t1_copy1

0x7492,	// (0x00072c1c) main_ncimui_pane_t1_ParamLimits

0x7492,	// (0x00072c1c) main_ncimui_pane_t1

0x74ac,	// (0x00072c36) main_ncimui_pane_t2_ParamLimits

0x74ac,	// (0x00072c36) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0007b38c) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0007b38c) main_ncimui_pane_t

0xe599,	// (0x00079d23) main_radioblah_anim_pane_ParamLimits

0xe599,	// (0x00079d23) main_radioblah_anim_pane

0xe5aa,	// (0x00079d34) main_radioblah_info_pane_ParamLimits

0xe5aa,	// (0x00079d34) main_radioblah_info_pane

0xe5be,	// (0x00079d48) main_radioblah_pane_t1_ParamLimits

0xe5be,	// (0x00079d48) main_radioblah_pane_t1

0xe5da,	// (0x00079d64) main_radioblah_pane_t2_ParamLimits

0xe5da,	// (0x00079d64) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0007b427) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0007b427) main_radioblah_pane_t

0x7997,	// (0x00073121) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7997,	// (0x00073121) main_radioblah_rocker_ctrl_pane

0xe622,	// (0x00079dac) main_radioblah_info_pane_t1_ParamLimits

0xe622,	// (0x00079dac) main_radioblah_info_pane_t1

0x79ef,	// (0x00073179) main_radioblah_info_pane_t2_ParamLimits

0x79ef,	// (0x00073179) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0007b430) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0007b430) main_radioblah_info_pane_t

0xcd7f,	// (0x00078509) main_radioblah_rocker_ctrl_pane_g1

0x7a9f,	// (0x00073229) main_radioblah_rocker_ctrl_pane_g2

0x7aa7,	// (0x00073231) main_radioblah_rocker_ctrl_pane_g3

0x7aaf,	// (0x00073239) main_radioblah_rocker_ctrl_pane_g4

0x7ab7,	// (0x00073241) main_radioblah_rocker_ctrl_pane_g5

0x7abf,	// (0x00073249) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0007b439) main_radioblah_rocker_ctrl_pane_g

0x7120,	// (0x000728aa) main_cset_text2_pane_t1_copy1_ParamLimits

0x9af8,	// (0x00075282) cam4_image_uncrop_qvga_pane

0x9b59,	// (0x000752e3) vid4_image_uncrop_qcif_pane

0x9cd1,	// (0x0007545b) cam6_image_uncrop_qvga_pane_ParamLimits

0x9cd1,	// (0x0007545b) cam6_image_uncrop_qvga_pane

0xde44,	// (0x000795ce) vid6_image_uncrop_qcif_pane_ParamLimits

0xde44,	// (0x000795ce) vid6_image_uncrop_qcif_pane

0x93f8,	// (0x00074b82) bg_popup_preview_window_pane_cp03

0xe10d,	// (0x00079897) list_cset_text2_pane

0xe115,	// (0x0007989f) main_cset6_text2_pane_g1

0xe11d,	// (0x000798a7) main_cset6_text2_pane_t1

0xe65c,	// (0x00079de6) list_cset_text2_pane_t1_ParamLimits

0xe65c,	// (0x00079de6) list_cset_text2_pane_t1

0x9460,	// (0x00074bea) main_radioblah_pane_ParamLimits

0x77df,	// (0x00072f69) main_mobtv_info_pane_t3_ParamLimits

0x77df,	// (0x00072f69) main_mobtv_info_pane_t3

0x7985,	// (0x0007310f) main_radioblah_pane_g1

0x79bf,	// (0x00073149) main_radioblah_info_pane_g1

0x7a44,	// (0x000731ce) main_radioblah_info_pane_t3_ParamLimits

0x7a44,	// (0x000731ce) main_radioblah_info_pane_t3

0x2222,	// (0x0006d9ac) highlight_cell_cale_month_pane_ParamLimits

0x2222,	// (0x0006d9ac) highlight_cell_cale_month_pane

0x946e,	// (0x00074bf8) main_phob_fisheye_pane

0xd0a0,	// (0x0007882a) scroll_pane_cp0031_ParamLimits

0xd0a0,	// (0x0007882a) scroll_pane_cp0031

0xdf52,	// (0x000796dc) wait_bar_pane_cp08_ParamLimits

0x71a2,	// (0x0007292c) cset_list_set_pane_copy1_ParamLimits

0xe677,	// (0x00079e01) highlight_cell_cale_month_pane_g1

0x7ac7,	// (0x00073251) highlight_cell_cale_month_pane_t1

0xdbf0,	// (0x0007937a) list_gen_pane_cp01

0xd82f,	// (0x00078fb9) scroll_pane_01

0x7ad5,	// (0x0007325f) list_single_double_fisheye_pane

0x7ade,	// (0x00073268) list_double_fisheye_pane_g1_ParamLimits

0x7ade,	// (0x00073268) list_double_fisheye_pane_g1

0x7aea,	// (0x00073274) list_double_fisheye_pane_g2_ParamLimits

0x7aea,	// (0x00073274) list_double_fisheye_pane_g2

0x7afe,	// (0x00073288) list_double_fisheye_pane_g3_ParamLimits

0x7afe,	// (0x00073288) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0007b446) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0007b446) list_double_fisheye_pane_g

0x7b27,	// (0x000732b1) list_double_fisheye_pane_t1_ParamLimits

0x7b27,	// (0x000732b1) list_double_fisheye_pane_t1

0x7b42,	// (0x000732cc) list_double_fisheye_pane_t2_ParamLimits

0x7b42,	// (0x000732cc) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0007b451) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0007b451) list_double_fisheye_pane_t

0x946e,	// (0x00074bf8) main_call5_pane

0x78d6,	// (0x00073060) sc_swipe_pane_ParamLimits

0x78d6,	// (0x00073060) sc_swipe_pane

0x7b77,	// (0x00073301) call5_image_pane_ParamLimits

0x7b77,	// (0x00073301) call5_image_pane

0x7b94,	// (0x0007331e) call5_swipe_1_pane_ParamLimits

0x7b94,	// (0x0007331e) call5_swipe_1_pane

0x7ba7,	// (0x00073331) call5_swipe_2_pane_ParamLimits

0x7ba7,	// (0x00073331) call5_swipe_2_pane

0x7bd2,	// (0x0007335c) popup_call5_audio_first_window_ParamLimits

0x7bd2,	// (0x0007335c) popup_call5_audio_first_window

0xcfc4,	// (0x0007874e) call5_swipe_1_pane_g1_ParamLimits

0xcfc4,	// (0x0007874e) call5_swipe_1_pane_g1

0xe67f,	// (0x00079e09) call5_swipe_1_pane_g2_ParamLimits

0xe67f,	// (0x00079e09) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0007b456) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0007b456) call5_swipe_1_pane_g

0xe68b,	// (0x00079e15) call5_swipe_1_pane_t1_ParamLimits

0xe68b,	// (0x00079e15) call5_swipe_1_pane_t1

0xcfc4,	// (0x0007874e) call5_swipe_2_pane_g1_ParamLimits

0xcfc4,	// (0x0007874e) call5_swipe_2_pane_g1

0xe6a0,	// (0x00079e2a) call5_swipe_2_pane_g2_ParamLimits

0xe6a0,	// (0x00079e2a) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0007b45b) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0007b45b) call5_swipe_2_pane_g

0xe6ac,	// (0x00079e36) call5_swipe_2_pane_t1_ParamLimits

0xe6ac,	// (0x00079e36) call5_swipe_2_pane_t1

0xe6c1,	// (0x00079e4b) sc_swipe_pane_g1_ParamLimits

0xe6c1,	// (0x00079e4b) sc_swipe_pane_g1

0xe6ce,	// (0x00079e58) sc_swipe_pane_g2_ParamLimits

0xe6ce,	// (0x00079e58) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0007b460) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0007b460) sc_swipe_pane_g

0xe6da,	// (0x00079e64) sc_swipe_pane_t1_ParamLimits

0xe6da,	// (0x00079e64) sc_swipe_pane_t1

0x946e,	// (0x00074bf8) main_cmail_launcher_pane

0x7be3,	// (0x0007336d) aid_size_cell_cmail_l_ParamLimits

0x7be3,	// (0x0007336d) aid_size_cell_cmail_l

0x7bf1,	// (0x0007337b) grid_cmail_l_pane_ParamLimits

0x7bf1,	// (0x0007337b) grid_cmail_l_pane

0x7c0b,	// (0x00073395) cell_cmail_l_pane_ParamLimits

0x7c0b,	// (0x00073395) cell_cmail_l_pane

0xe6ef,	// (0x00079e79) cell_cmail_l_pane_g1_ParamLimits

0xe6ef,	// (0x00079e79) cell_cmail_l_pane_g1

0xe6fb,	// (0x00079e85) cell_cmail_l_pane_t1_ParamLimits

0xe6fb,	// (0x00079e85) cell_cmail_l_pane_t1

0xe711,	// (0x00079e9b) cell_cmail_l_pane_t2_ParamLimits

0xe711,	// (0x00079e9b) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0007b465) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0007b465) cell_cmail_l_pane_t

0xa0b6,	// (0x00075840) grid_highlight_pane_cp018_ParamLimits

0xa0b6,	// (0x00075840) grid_highlight_pane_cp018

0x04c9,	// (0x0006bc53) main2_pane_ParamLimits

0x04c9,	// (0x0006bc53) main2_pane

0xa992,	// (0x0007611c) popup_sp_fs_action_menu_bg_pane_g1

0xa99a,	// (0x00076124) popup_sp_fs_action_menu_bg_pane_g2

0xa9a2,	// (0x0007612c) popup_sp_fs_action_menu_bg_pane_g3

0xa9aa,	// (0x00076134) popup_sp_fs_action_menu_bg_pane_g4

0xa9b2,	// (0x0007613c) popup_sp_fs_action_menu_bg_pane_g5

0xa9ba,	// (0x00076144) popup_sp_fs_action_menu_bg_pane_g6

0xa9c2,	// (0x0007614c) popup_sp_fs_action_menu_bg_pane_g7

0xa9ca,	// (0x00076154) popup_sp_fs_action_menu_bg_pane_g8

0xa9d2,	// (0x0007615c) popup_sp_fs_action_menu_bg_pane_g9

0xa9da,	// (0x00076164) popup_sp_fs_action_menu_bg_pane_g10

0xa9da,	// (0x00076164) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0007a910) popup_sp_fs_action_menu_bg_pane_g

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t3_g3_g1

0x13dc,	// (0x0006cb66) list_medium_line_x2_t3_g3_g2_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x2_t3_g3_g2

0x13e8,	// (0x0006cb72) list_medium_line_x2_t3_g3_g3_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0007a9be) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0007a9be) list_medium_line_x2_t3_g3_g

0x13f4,	// (0x0006cb7e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x13f4,	// (0x0006cb7e) list_medium_line_x2_t3_g3_t1

0x1409,	// (0x0006cb93) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1409,	// (0x0006cb93) list_medium_line_x2_t3_g3_t2

0x141d,	// (0x0006cba7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0007a9c5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0007a9c5) list_medium_line_x2_t3_g3_t

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t3_g2_g1

0x13e8,	// (0x0006cb72) list_medium_line_x2_t3_g2_g2_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0007a9cc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0007a9cc) list_medium_line_x2_t3_g2_g

0x1432,	// (0x0006cbbc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1432,	// (0x0006cbbc) list_medium_line_x2_t3_g2_t1

0x1447,	// (0x0006cbd1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1447,	// (0x0006cbd1) list_medium_line_x2_t3_g2_t2

0x1459,	// (0x0006cbe3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1459,	// (0x0006cbe3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0007a9d1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0007a9d1) list_medium_line_x2_t3_g2_t

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t4_g4_g1

0x1477,	// (0x0006cc01) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1477,	// (0x0006cc01) list_medium_line_x2_t4_g4_g2

0x13dc,	// (0x0006cb66) list_medium_line_x2_t4_g4_g3_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x2_t4_g4_g3

0x1483,	// (0x0006cc0d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1483,	// (0x0006cc0d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0007a9d8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0007a9d8) list_medium_line_x2_t4_g4_g

0x148f,	// (0x0006cc19) list_medium_line_x2_t4_g4_t1_ParamLimits

0x148f,	// (0x0006cc19) list_medium_line_x2_t4_g4_t1

0x14a9,	// (0x0006cc33) list_medium_line_x2_t4_g4_t2_ParamLimits

0x14a9,	// (0x0006cc33) list_medium_line_x2_t4_g4_t2

0x14bf,	// (0x0006cc49) list_medium_line_x2_t4_g4_t3_ParamLimits

0x14bf,	// (0x0006cc49) list_medium_line_x2_t4_g4_t3

0x14d4,	// (0x0006cc5e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x14d4,	// (0x0006cc5e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0007a9e1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0007a9e1) list_medium_line_x2_t4_g4_t

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t2_g4_g1

0x1477,	// (0x0006cc01) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1477,	// (0x0006cc01) list_medium_line_x2_t2_g4_g2

0x13dc,	// (0x0006cb66) list_medium_line_x2_t2_g4_g3_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x2_t2_g4_g3

0x13e8,	// (0x0006cb72) list_medium_line_x2_t2_g4_g4_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0007aa48) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0007aa48) list_medium_line_x2_t2_g4_g

0x2248,	// (0x0006d9d2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2248,	// (0x0006d9d2) list_medium_line_x2_t2_g4_t1

0x141d,	// (0x0006cba7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0007aa51) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0007aa51) list_medium_line_x2_t2_g4_t

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t2_g3_g1

0x13dc,	// (0x0006cb66) list_medium_line_x2_t2_g3_g2_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x2_t2_g3_g2

0x13e8,	// (0x0006cb72) list_medium_line_x2_t2_g3_g3_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0007a9be) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0007a9be) list_medium_line_x2_t2_g3_g

0x225d,	// (0x0006d9e7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x225d,	// (0x0006d9e7) list_medium_line_x2_t2_g3_t1

0x141d,	// (0x0006cba7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0007aa56) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0007aa56) list_medium_line_x2_t2_g3_t

0x23b1,	// (0x0006db3b) main_sp_fs_list_pane_ParamLimits

0x23b1,	// (0x0006db3b) main_sp_fs_list_pane

0xc9aa,	// (0x00078134) sp_fs_scroll_pane_ParamLimits

0xc9aa,	// (0x00078134) sp_fs_scroll_pane

0x23bd,	// (0x0006db47) list_medium_line_x2_t3_t1

0x23cd,	// (0x0006db57) list_medium_line_x2_t3_t2

0x23db,	// (0x0006db65) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0007aaa1) list_medium_line_x2_t3_t

0x23e9,	// (0x0006db73) list_medium_line_x3_t4_t1

0x23f9,	// (0x0006db83) list_medium_line_x3_t4_t2

0x2407,	// (0x0006db91) list_medium_line_x3_t4_t3

0x23db,	// (0x0006db65) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0007aaa8) list_medium_line_x3_t4_t

0x2415,	// (0x0006db9f) list_medium_line_x4_t5_t1

0x2425,	// (0x0006dbaf) list_medium_line_x4_t5_t2

0x2407,	// (0x0006db91) list_medium_line_x4_t5_t3

0x2433,	// (0x0006dbbd) list_medium_line_x4_t5_t4

0x23db,	// (0x0006db65) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0007aab1) list_medium_line_x4_t5_t

0x13d0,	// (0x0006cb5a) list_medium_line_t4_g4_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_t4_g4_g1

0x1483,	// (0x0006cc0d) list_medium_line_t4_g4_g2_ParamLimits

0x1483,	// (0x0006cc0d) list_medium_line_t4_g4_g2

0x2441,	// (0x0006dbcb) list_medium_line_t4_g4_g3_ParamLimits

0x2441,	// (0x0006dbcb) list_medium_line_t4_g4_g3

0x13e8,	// (0x0006cb72) list_medium_line_t4_g4_g4_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0007aabc) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0007aabc) list_medium_line_t4_g4_g

0x244d,	// (0x0006dbd7) list_medium_line_t4_g4_t1_ParamLimits

0x244d,	// (0x0006dbd7) list_medium_line_t4_g4_t1

0x2462,	// (0x0006dbec) list_medium_line_t4_g4_t2_ParamLimits

0x2462,	// (0x0006dbec) list_medium_line_t4_g4_t2

0x2478,	// (0x0006dc02) list_medium_line_t4_g4_t3_ParamLimits

0x2478,	// (0x0006dc02) list_medium_line_t4_g4_t3

0x141d,	// (0x0006cba7) list_medium_line_t4_g4_t4_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0007aac5) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0007aac5) list_medium_line_t4_g4_t

0x2551,	// (0x0006dcdb) chi_dic_find_pane_g1

0x358f,	// (0x0006ed19) main_tport_pane

0x64b6,	// (0x00071c40) list_medium_line_plain_t1

0x655e,	// (0x00071ce8) list_medium_line_t2_g2_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_t2_g2_g1

0x656a,	// (0x00071cf4) list_medium_line_t2_g2_g2_ParamLimits

0x656a,	// (0x00071cf4) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0007b19d) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0007b19d) list_medium_line_t2_g2_g

0x6576,	// (0x00071d00) list_medium_line_t2_g2_t1_ParamLimits

0x6576,	// (0x00071d00) list_medium_line_t2_g2_t1

0x6590,	// (0x00071d1a) list_medium_line_t2_g2_t2_ParamLimits

0x6590,	// (0x00071d1a) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0007b1a2) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0007b1a2) list_medium_line_t2_g2_t

0xa1f1,	// (0x0007597b) aid_sp_fs_list_icon_a_sm

0xa1f9,	// (0x00075983) aid_sp_fs_list_icon_d

0xa201,	// (0x0007598b) aid_sp_fs_text_primary

0xe474,	// (0x00079bfe) aid_sp_fs_text_secondary

0x6c08,	// (0x00072392) list_medium_line

0x6c08,	// (0x00072392) list_medium_line_g2

0x6c08,	// (0x00072392) list_medium_line_g3

0x6c08,	// (0x00072392) list_medium_line_plain

0x6c08,	// (0x00072392) list_medium_line_plain_t2

0x6c08,	// (0x00072392) list_medium_line_plain_t3

0x6c08,	// (0x00072392) list_medium_line_right_icon

0x6c08,	// (0x00072392) list_medium_line_right_iconx2

0x6c08,	// (0x00072392) list_medium_line_t2

0x6c08,	// (0x00072392) list_medium_line_t2_g2

0x6c08,	// (0x00072392) list_medium_line_t2_g3

0x6c08,	// (0x00072392) list_medium_line_t2_right_icon

0x6c08,	// (0x00072392) list_medium_line_t2_right_iconx2

0x6c08,	// (0x00072392) list_medium_line_t3

0x6c08,	// (0x00072392) list_medium_line_t3_g2

0x6c08,	// (0x00072392) list_medium_line_t3_g3

0x6c08,	// (0x00072392) list_medium_line_t3_right_iconx2

0x6c11,	// (0x0007239b) list_medium_line_t4_g4

0x6c08,	// (0x00072392) list_medium_line_x2

0x6c08,	// (0x00072392) list_medium_line_x2_t2_g2

0x6c08,	// (0x00072392) list_medium_line_x2_t2_g3

0x6c08,	// (0x00072392) list_medium_line_x2_t2_g4

0x6c08,	// (0x00072392) list_medium_line_x2_t3

0x6c08,	// (0x00072392) list_medium_line_x2_t3_g2

0x6c08,	// (0x00072392) list_medium_line_x2_t3_g3

0x6c08,	// (0x00072392) list_medium_line_x2_t3_g4

0x6c08,	// (0x00072392) list_medium_line_x2_t4_g2

0x6c08,	// (0x00072392) list_medium_line_x2_t4_g4

0x6c1a,	// (0x000723a4) list_medium_line_x3

0x6c1a,	// (0x000723a4) list_medium_line_x3_t4

0x6c1a,	// (0x000723a4) list_medium_line_x3_t4_g4

0x6c11,	// (0x0007239b) list_medium_line_x4_t4

0x6c11,	// (0x0007239b) list_medium_line_x4_t4_g7

0x6c11,	// (0x0007239b) list_medium_line_x4_t5

0x6c23,	// (0x000723ad) list_single_fs_dyc_pane_ParamLimits

0x6c23,	// (0x000723ad) list_single_fs_dyc_pane

0x13d0,	// (0x0006cb5a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x4_t4_g7_g1

0x7390,	// (0x00072b1a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7390,	// (0x00072b1a) list_medium_line_x4_t4_g7_g2

0x739c,	// (0x00072b26) list_medium_line_x4_t4_g7_g3_ParamLimits

0x739c,	// (0x00072b26) list_medium_line_x4_t4_g7_g3

0x73ab,	// (0x00072b35) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73ab,	// (0x00072b35) list_medium_line_x4_t4_g7_g4

0x73b7,	// (0x00072b41) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73b7,	// (0x00072b41) list_medium_line_x4_t4_g7_g5

0x73c6,	// (0x00072b50) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73c6,	// (0x00072b50) list_medium_line_x4_t4_g7_g6

0x73d5,	// (0x00072b5f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73d5,	// (0x00072b5f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0007b36d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0007b36d) list_medium_line_x4_t4_g7_g

0x73e1,	// (0x00072b6b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73e1,	// (0x00072b6b) list_medium_line_x4_t4_g7_t1

0x73f6,	// (0x00072b80) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73f6,	// (0x00072b80) list_medium_line_x4_t4_g7_t2

0x740b,	// (0x00072b95) list_medium_line_x4_t4_g7_t3_ParamLimits

0x740b,	// (0x00072b95) list_medium_line_x4_t4_g7_t3

0x7420,	// (0x00072baa) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7420,	// (0x00072baa) list_medium_line_x4_t4_g7_t4

0x7432,	// (0x00072bbc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7432,	// (0x00072bbc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0007b37c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0007b37c) list_medium_line_x4_t4_g7_t

0x7444,	// (0x00072bce) list_single_dyc_row_pane_ParamLimits

0x7444,	// (0x00072bce) list_single_dyc_row_pane

0x7b64,	// (0x000732ee) call5_gesture_pane_ParamLimits

0x7b64,	// (0x000732ee) call5_gesture_pane

0x7bba,	// (0x00073344) call5_windows_pane_ParamLimits

0x7bba,	// (0x00073344) call5_windows_pane

0x7c25,	// (0x000733af) call5_swipe_1_pane_cp_ParamLimits

0x7c25,	// (0x000733af) call5_swipe_1_pane_cp

0x7c31,	// (0x000733bb) call5_swipe_2_pane_cp_ParamLimits

0x7c31,	// (0x000733bb) call5_swipe_2_pane_cp

0xaadc,	// (0x00076266) call5_image_pane_cp

0x7c3d,	// (0x000733c7) popup_call5_audio_first_window_cp_ParamLimits

0x7c3d,	// (0x000733c7) popup_call5_audio_first_window_cp

0xe6c1,	// (0x00079e4b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c1,	// (0x00079e4b) call5_swipe_1_pane_g1_cp

0xe72e,	// (0x00079eb8) call5_swipe_1_pane_g2_cp

0xe6da,	// (0x00079e64) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6da,	// (0x00079e64) call5_swipe_1_pane_t1_cp

0xe6c1,	// (0x00079e4b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c1,	// (0x00079e4b) call5_swipe_2_pane_g1_cp

0xe736,	// (0x00079ec0) call5_swipe_2_pane_g2_cp

0xe73e,	// (0x00079ec8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe73e,	// (0x00079ec8) call5_swipe_2_pane_t1_cp

0xa0b6,	// (0x00075840) main_sp_fs_email_pane

0xe753,	// (0x00079edd) main_sp_fs_listscroll_pane_te

0xa20a,	// (0x00075994) popup_sp_fs_action_menu_pane_ParamLimits

0xa20a,	// (0x00075994) popup_sp_fs_action_menu_pane

0xcd7f,	// (0x00078509) bg_sp_fs_ctrlbar_pane_g1

0xe75c,	// (0x00079ee6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe765,	// (0x00079eef) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe76e,	// (0x00079ef8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd7f,	// (0x00078509) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0007b46a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb64,	// (0x000782ee) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb64,	// (0x000782ee) bg_sp_fs_ctrlbar_ddmenu_pane

0xe777,	// (0x00079f01) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe777,	// (0x00079f01) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe783,	// (0x00079f0d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe783,	// (0x00079f0d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0007b473) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0007b473) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe78f,	// (0x00079f19) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe78f,	// (0x00079f19) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c4b,	// (0x000733d5) list_medium_line_t2_right_icon_g1

0x7c53,	// (0x000733dd) list_medium_line_t2_right_icon_t1

0x7c63,	// (0x000733ed) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0007b478) list_medium_line_t2_right_icon_t

0xc962,	// (0x000780ec) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc962,	// (0x000780ec) bg_sp_fs_ctrlbar_pane

0x7cbd,	// (0x00073447) main_sp_fs_ctrlbar_button_pane_cp01

0x7cc7,	// (0x00073451) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e1,	// (0x00079f6b) main_sp_fs_ctrlbar_pane_g1

0xe7ed,	// (0x00079f77) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0007b47d) main_sp_fs_ctrlbar_pane_g

0xe7f9,	// (0x00079f83) main_sp_fs_ctrlbar_pane_t1

0x7cd1,	// (0x0007345b) main_sp_fs_ctrlbar_pane

0x7cf5,	// (0x0007347f) main_sp_fs_listscroll_pane_te_cp01

0x7d15,	// (0x0007349f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d15,	// (0x0007349f) popup_sp_fs_action_menu_pane_cp01

0xa0b6,	// (0x00075840) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa0b6,	// (0x00075840) bg_sp_fs_highlight_list_pane_cp01

0xa24c,	// (0x000759d6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa24c,	// (0x000759d6) sp_fs_action_menu_list_gene_pane_g1

0xe829,	// (0x00079fb3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe829,	// (0x00079fb3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0007b487) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0007b487) sp_fs_action_menu_list_gene_pane_g

0xa25b,	// (0x000759e5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa25b,	// (0x000759e5) sp_fs_action_menu_list_gene_pane_t1

0xa273,	// (0x000759fd) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa273,	// (0x000759fd) sp_fs_action_menu_list_gene_pane

0xe836,	// (0x00079fc0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe836,	// (0x00079fc0) popup_sp_fs_action_menu_bg_pane

0xa292,	// (0x00075a1c) sp_fs_action_menu_list_pane_ParamLimits

0xa292,	// (0x00075a1c) sp_fs_action_menu_list_pane

0xa2b2,	// (0x00075a3c) sp_fs_scroll_pane_cp01_ParamLimits

0xa2b2,	// (0x00075a3c) sp_fs_scroll_pane_cp01

0x7d45,	// (0x000734cf) list_medium_line_plain_t2_t1

0x7d55,	// (0x000734df) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0007b48c) list_medium_line_plain_t2_t

0x7d65,	// (0x000734ef) list_medium_line_plain_t3_t1

0x7d75,	// (0x000734ff) list_medium_line_plain_t3_t2

0x7d83,	// (0x0007350d) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0007b491) list_medium_line_plain_t3_t

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t2_g2_g1

0x13e8,	// (0x0006cb72) list_medium_line_x2_t2_g2_g2_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0007a9cc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0007a9cc) list_medium_line_x2_t2_g2_g

0x244d,	// (0x0006dbd7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x244d,	// (0x0006dbd7) list_medium_line_x2_t2_g2_t1

0x141d,	// (0x0006cba7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0007b498) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0007b498) list_medium_line_x2_t2_g2_t

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t4_g2_g1

0x7d91,	// (0x0007351b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d91,	// (0x0007351b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0007b49d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0007b49d) list_medium_line_x2_t4_g2_g

0x7da3,	// (0x0007352d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7da3,	// (0x0007352d) list_medium_line_x2_t4_g2_t1

0x7dbd,	// (0x00073547) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dbd,	// (0x00073547) list_medium_line_x2_t4_g2_t2

0x7dd3,	// (0x0007355d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dd3,	// (0x0007355d) list_medium_line_x2_t4_g2_t3

0x141d,	// (0x0006cba7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0007b4a2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0007b4a2) list_medium_line_x2_t4_g2_t

0x7de8,	// (0x00073572) list_medium_line_t3_right_iconx2_g1

0x7c4b,	// (0x000733d5) list_medium_line_t3_right_iconx2_g2

0x7df0,	// (0x0007357a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0007b4ab) list_medium_line_t3_right_iconx2_g

0x7dfa,	// (0x00073584) list_medium_line_t3_right_iconx2_t1

0x7e0a,	// (0x00073594) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0007b4b2) list_medium_line_t3_right_iconx2_t

0x13d0,	// (0x0006cb5a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x3_t4_g4_g1

0x13dc,	// (0x0006cb66) list_medium_line_x3_t4_g4_g2_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x3_t4_g4_g2

0x1483,	// (0x0006cc0d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1483,	// (0x0006cc0d) list_medium_line_x3_t4_g4_g3

0x7e18,	// (0x000735a2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e18,	// (0x000735a2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0007b4b7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0007b4b7) list_medium_line_x3_t4_g4_g

0x7e24,	// (0x000735ae) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e24,	// (0x000735ae) list_medium_line_x3_t4_g4_t1

0x7e3b,	// (0x000735c5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e3b,	// (0x000735c5) list_medium_line_x3_t4_g4_t2

0x7e56,	// (0x000735e0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7e56,	// (0x000735e0) list_medium_line_x3_t4_g4_t3

0x7e6b,	// (0x000735f5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e6b,	// (0x000735f5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0007b4c0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0007b4c0) list_medium_line_x3_t4_g4_t

0x7e88,	// (0x00073612) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e88,	// (0x00073612) list_single_dyc_row_text_pane_t1

0x7ed1,	// (0x0007365b) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ed1,	// (0x0007365b) list_single_dyc_row_text_pane_t2

0xa2d8,	// (0x00075a62) list_single_dyc_row_text_pane_t3_ParamLimits

0xa2d8,	// (0x00075a62) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0007b4c9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0007b4c9) list_single_dyc_row_text_pane_t

0xa2fc,	// (0x00075a86) list_single_dyc_row_pane_g1_ParamLimits

0xa2fc,	// (0x00075a86) list_single_dyc_row_pane_g1

0xa308,	// (0x00075a92) list_single_dyc_row_pane_g2_ParamLimits

0xa308,	// (0x00075a92) list_single_dyc_row_pane_g2

0xa314,	// (0x00075a9e) list_single_dyc_row_pane_g3_ParamLimits

0xa314,	// (0x00075a9e) list_single_dyc_row_pane_g3

0xa320,	// (0x00075aaa) list_single_dyc_row_pane_g4_ParamLimits

0xa320,	// (0x00075aaa) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0007b4d6) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0007b4d6) list_single_dyc_row_pane_g

0xa32c,	// (0x00075ab6) list_single_dyc_row_text_pane_ParamLimits

0xa32c,	// (0x00075ab6) list_single_dyc_row_text_pane

0x93f8,	// (0x00074b82) bg_sp_fs_scroll_pane

0xe844,	// (0x00079fce) thumb_sp_fs_scroll_pane

0x655e,	// (0x00071ce8) list_medium_line_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_g1

0x8006,	// (0x00073790) list_medium_line_t1_ParamLimits

0x8006,	// (0x00073790) list_medium_line_t1

0x13d0,	// (0x0006cb5a) list_medium_line_x2_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_g1

0x13dc,	// (0x0006cb66) list_medium_line_x2_g2_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0007b4df) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0007b4df) list_medium_line_x2_g

0xa34b,	// (0x00075ad5) list_medium_line_x2_t1_ParamLimits

0xa34b,	// (0x00075ad5) list_medium_line_x2_t1

0x13d0,	// (0x0006cb5a) list_medium_line_x3_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x3_g1

0x13dc,	// (0x0006cb66) list_medium_line_x3_g2_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0007b4df) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0007b4df) list_medium_line_x3_g

0xa34b,	// (0x00075ad5) list_medium_line_x3_t1_ParamLimits

0xa34b,	// (0x00075ad5) list_medium_line_x3_t1

0xe84d,	// (0x00079fd7) thumb_sp_fs_scroll_pane_g1

0xe856,	// (0x00079fe0) thumb_sp_fs_scroll_pane_g2

0xe85f,	// (0x00079fe9) thumb_sp_fs_scroll_pane_g3

0x0002,

0x00eb,	// (0x0006b875) thumb_sp_fs_scroll_pane_g

0xe84d,	// (0x00079fd7) bg_sp_fs_scroll_pane_g1

0xe856,	// (0x00079fe0) bg_sp_fs_scroll_pane_g2

0xe85f,	// (0x00079fe9) bg_sp_fs_scroll_pane_g3

0x0002,

0x00eb,	// (0x0006b875) bg_sp_fs_scroll_pane_g

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x13d0,	// (0x0006cb5a) list_medium_line_x2_t3_g4_g1

0x1477,	// (0x0006cc01) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1477,	// (0x0006cc01) list_medium_line_x2_t3_g4_g2

0x13dc,	// (0x0006cb66) list_medium_line_x2_t3_g4_g3_ParamLimits

0x13dc,	// (0x0006cb66) list_medium_line_x2_t3_g4_g3

0x13e8,	// (0x0006cb72) list_medium_line_x2_t3_g4_g4_ParamLimits

0x13e8,	// (0x0006cb72) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0007aa48) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0007aa48) list_medium_line_x2_t3_g4_g

0x801b,	// (0x000737a5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x801b,	// (0x000737a5) list_medium_line_x2_t3_g4_t1

0x8035,	// (0x000737bf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8035,	// (0x000737bf) list_medium_line_x2_t3_g4_t2

0x141d,	// (0x0006cba7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x141d,	// (0x0006cba7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5a,	// (0x0007b4e4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5a,	// (0x0007b4e4) list_medium_line_x2_t3_g4_t

0x655e,	// (0x00071ce8) list_medium_line_g2_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_g2_g1

0x656a,	// (0x00071cf4) list_medium_line_g2_g2_ParamLimits

0x656a,	// (0x00071cf4) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0007b19d) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0007b19d) list_medium_line_g2_g

0x804f,	// (0x000737d9) list_medium_line_g2_t1_ParamLimits

0x804f,	// (0x000737d9) list_medium_line_g2_t1

0x655e,	// (0x00071ce8) list_medium_line_t3_g2_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_t3_g2_g1

0x656a,	// (0x00071cf4) list_medium_line_t3_g2_g2_ParamLimits

0x656a,	// (0x00071cf4) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0007b19d) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0007b19d) list_medium_line_t3_g2_g

0x8064,	// (0x000737ee) list_medium_line_t3_g2_t1_ParamLimits

0x8064,	// (0x000737ee) list_medium_line_t3_g2_t1

0x807e,	// (0x00073808) list_medium_line_t3_g2_t2_ParamLimits

0x807e,	// (0x00073808) list_medium_line_t3_g2_t2

0x8094,	// (0x0007381e) list_medium_line_t3_g2_t3_ParamLimits

0x8094,	// (0x0007381e) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0007b4eb) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0007b4eb) list_medium_line_t3_g2_t

0x7c4b,	// (0x000733d5) list_medium_line_right_icon_g1

0x80ae,	// (0x00073838) list_medium_line_right_icon_t1

0x655e,	// (0x00071ce8) list_medium_line_t2_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_t2_g1

0x80bc,	// (0x00073846) list_medium_line_t2_t1_ParamLimits

0x80bc,	// (0x00073846) list_medium_line_t2_t1

0x80d6,	// (0x00073860) list_medium_line_t2_t2_ParamLimits

0x80d6,	// (0x00073860) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0007b4f2) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0007b4f2) list_medium_line_t2_t

0x655e,	// (0x00071ce8) list_medium_line_t3_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_t3_g1

0x80ef,	// (0x00073879) list_medium_line_t3_t1_ParamLimits

0x80ef,	// (0x00073879) list_medium_line_t3_t1

0x8109,	// (0x00073893) list_medium_line_t3_t2_ParamLimits

0x8109,	// (0x00073893) list_medium_line_t3_t2

0x811f,	// (0x000738a9) list_medium_line_t3_t3_ParamLimits

0x811f,	// (0x000738a9) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0007b4f7) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0007b4f7) list_medium_line_t3_t

0x655e,	// (0x00071ce8) list_medium_line_g3_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_g3_g1

0x8134,	// (0x000738be) list_medium_line_g3_g2_ParamLimits

0x8134,	// (0x000738be) list_medium_line_g3_g2

0x656a,	// (0x00071cf4) list_medium_line_g3_g3_ParamLimits

0x656a,	// (0x00071cf4) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0007b4fe) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0007b4fe) list_medium_line_g3_g

0x8140,	// (0x000738ca) list_medium_line_g3_t1_ParamLimits

0x8140,	// (0x000738ca) list_medium_line_g3_t1

0x655e,	// (0x00071ce8) list_medium_line_t2_g3_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_t2_g3_g1

0x8134,	// (0x000738be) list_medium_line_t2_g3_g2_ParamLimits

0x8134,	// (0x000738be) list_medium_line_t2_g3_g2

0x656a,	// (0x00071cf4) list_medium_line_t2_g3_g3_ParamLimits

0x656a,	// (0x00071cf4) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0007b4fe) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0007b4fe) list_medium_line_t2_g3_g

0x8155,	// (0x000738df) list_medium_line_t2_g3_t1_ParamLimits

0x8155,	// (0x000738df) list_medium_line_t2_g3_t1

0x816f,	// (0x000738f9) list_medium_line_t2_g3_t2_ParamLimits

0x816f,	// (0x000738f9) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0007b505) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0007b505) list_medium_line_t2_g3_t

0x655e,	// (0x00071ce8) list_medium_line_t3_g3_g1_ParamLimits

0x655e,	// (0x00071ce8) list_medium_line_t3_g3_g1

0x8134,	// (0x000738be) list_medium_line_t3_g3_g2_ParamLimits

0x8134,	// (0x000738be) list_medium_line_t3_g3_g2

0x656a,	// (0x00071cf4) list_medium_line_t3_g3_g3_ParamLimits

0x656a,	// (0x00071cf4) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0007b4fe) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0007b4fe) list_medium_line_t3_g3_g

0x818d,	// (0x00073917) list_medium_line_t3_g3_t1_ParamLimits

0x818d,	// (0x00073917) list_medium_line_t3_g3_t1

0x81a6,	// (0x00073930) list_medium_line_t3_g3_t2_ParamLimits

0x81a6,	// (0x00073930) list_medium_line_t3_g3_t2

0x81bc,	// (0x00073946) list_medium_line_t3_g3_t3_ParamLimits

0x81bc,	// (0x00073946) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0007b50a) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0007b50a) list_medium_line_t3_g3_t

0x7de8,	// (0x00073572) list_medium_line_right_iconx2_g1

0x7c4b,	// (0x000733d5) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0007b511) list_medium_line_right_iconx2_g

0x81d6,	// (0x00073960) list_medium_line_right_iconx2_t1

0x7de8,	// (0x00073572) list_medium_line_t2_right_iconx2_g1

0x7c4b,	// (0x000733d5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0007b511) list_medium_line_t2_right_iconx2_g

0x81e4,	// (0x0007396e) list_medium_line_t2_right_iconx2_t1

0x81f4,	// (0x0007397e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0007b516) list_medium_line_t2_right_iconx2_t

0x8206,	// (0x00073990) list_medium_line_x4_t4_t1

0x8214,	// (0x0007399e) list_medium_line_x4_t4_t2

0x8224,	// (0x000739ae) list_medium_line_x4_t4_t3

0x8234,	// (0x000739be) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0007b51b) list_medium_line_x4_t4_t

0x8287,	// (0x00073a11) tport_appsw_pane_ParamLimits

0x8287,	// (0x00073a11) tport_appsw_pane

0x829f,	// (0x00073a29) tport_contact_pane_ParamLimits

0x829f,	// (0x00073a29) tport_contact_pane

0x82b7,	// (0x00073a41) tport_listscroll_pane_ParamLimits

0x82b7,	// (0x00073a41) tport_listscroll_pane

0x82d1,	// (0x00073a5b) cell_tport_appsw_pane_ParamLimits

0x82d1,	// (0x00073a5b) cell_tport_appsw_pane

0xd6f5,	// (0x00078e7f) tport_appsw_pane_g1_ParamLimits

0xd6f5,	// (0x00078e7f) tport_appsw_pane_g1

0xe868,	// (0x00079ff2) tport_contact_pane_g1

0xe871,	// (0x00079ffb) tport_contact_pane_t1

0xe87f,	// (0x0007a009) tport_contact_pane_t2

0x0001,

0x0132,	// (0x0006b8bc) tport_contact_pane_t

0xe88d,	// (0x0007a017) list_tport_pane

0xe896,	// (0x0007a020) scroll_pane_cp_030

0x8319,	// (0x00073aa3) cell_tport_appsw_pane_g1

0x8329,	// (0x00073ab3) cell_tport_appsw_pane_t1

0x8337,	// (0x00073ac1) grid_highlight_pane_cp019

0x833f,	// (0x00073ac9) list_tport_double_graphic_pane_ParamLimits

0x833f,	// (0x00073ac9) list_tport_double_graphic_pane

0xa0b6,	// (0x00075840) list_highlight_pane_cp023_ParamLimits

0xa0b6,	// (0x00075840) list_highlight_pane_cp023

0x834c,	// (0x00073ad6) list_tport_double_graphic_pane_g1_ParamLimits

0x834c,	// (0x00073ad6) list_tport_double_graphic_pane_g1

0x8359,	// (0x00073ae3) list_tport_double_graphic_pane_t1_ParamLimits

0x8359,	// (0x00073ae3) list_tport_double_graphic_pane_t1

0x836e,	// (0x00073af8) list_tport_double_graphic_pane_t2_ParamLimits

0x836e,	// (0x00073af8) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0007b52b) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0007b52b) list_tport_double_graphic_pane_t

0x93f8,	// (0x00074b82) main_cale_note_pane

0x5d0d,	// (0x00071497) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d0d,	// (0x00071497) cell_vitu2_function_top_wide_pane_cp01

0x77f3,	// (0x00072f7d) wait_bar_pane_cp05_ParamLimits

0xa0b6,	// (0x00075840) listscroll_cmail_pane

0xe89f,	// (0x0007a029) list_cmail_pane

0x8380,	// (0x00073b0a) list_cmail_body_pane

0x8395,	// (0x00073b1f) list_single_cmail_header_caption_pane

0x83ac,	// (0x00073b36) list_single_cmail_header_detail_pane_ParamLimits

0x83ac,	// (0x00073b36) list_single_cmail_header_detail_pane

0xe8af,	// (0x0007a039) list_single_cmail_header_caption_pane_t1

0x83d6,	// (0x00073b60) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83d6,	// (0x00073b60) list_single_cmail_header_detail_pane_g1

0xa361,	// (0x00075aeb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa361,	// (0x00075aeb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0007b530) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0007b530) list_single_cmail_header_detail_pane_g

0xa36d,	// (0x00075af7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa36d,	// (0x00075af7) list_single_cmail_header_detail_pane_t1

0xa3cd,	// (0x00075b57) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa3cd,	// (0x00075b57) list_single_cmail_header_editor_pane_bg

0xe33d,	// (0x00079ac7) list_cmail_body_pane_g1

0xe8d3,	// (0x0007a05d) list_cmail_body_pane_t1

0xd715,	// (0x00078e9f) list_single_cmail_header_editor_pane_bg_g1

0xad35,	// (0x000764bf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd725,	// (0x00078eaf) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd71d,	// (0x00078ea7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd951,	// (0x000790db) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd745,	// (0x00078ecf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd735,	// (0x00078ebf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd73d,	// (0x00078ec7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad15,	// (0x0007649f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83ee,	// (0x00073b78) calenote_gesture_pane_ParamLimits

0x83ee,	// (0x00073b78) calenote_gesture_pane

0x840e,	// (0x00073b98) calenote_window_pane_ParamLimits

0x840e,	// (0x00073b98) calenote_window_pane

0xe8e1,	// (0x0007a06b) popup_note_window_cp01

0x842a,	// (0x00073bb4) calenote_swipe_1_pane_ParamLimits

0x842a,	// (0x00073bb4) calenote_swipe_1_pane

0x7c31,	// (0x000733bb) calenote_swipe_2_pane_ParamLimits

0x7c31,	// (0x000733bb) calenote_swipe_2_pane

0xe6c1,	// (0x00079e4b) calenote_swipe_1_pane_g1_ParamLimits

0xe6c1,	// (0x00079e4b) calenote_swipe_1_pane_g1

0xe6ce,	// (0x00079e58) calenote_swipe_1_pane_g2_ParamLimits

0xe6ce,	// (0x00079e58) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0007b460) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0007b460) calenote_swipe_1_pane_g

0xe8f3,	// (0x0007a07d) calenote_swipe_1_pane_t1_ParamLimits

0xe8f3,	// (0x0007a07d) calenote_swipe_1_pane_t1

0xe6c1,	// (0x00079e4b) calenote_swipe_2_pane_g1_ParamLimits

0xe6c1,	// (0x00079e4b) calenote_swipe_2_pane_g1

0xe912,	// (0x0007a09c) calenote_swipe_2_pane_g2_ParamLimits

0xe912,	// (0x0007a09c) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0007b53c) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0007b53c) calenote_swipe_2_pane_g

0xe91e,	// (0x0007a0a8) calenote_swipe_2_pane_t1_ParamLimits

0xe91e,	// (0x0007a0a8) calenote_swipe_2_pane_t1

0x93f8,	// (0x00074b82) main_mup_navstr_pane

0x494a,	// (0x000700d4) main_mup3_pane_t7_ParamLimits

0x494a,	// (0x000700d4) main_mup3_pane_t7

0x98c6,	// (0x00075050) main_mp4_pane_g6_ParamLimits

0x98c6,	// (0x00075050) main_mp4_pane_g6

0x9a88,	// (0x00075212) main_image3_pane_t4_ParamLimits

0x9a88,	// (0x00075212) main_image3_pane_t4

0x843f,	// (0x00073bc9) popup_navstr_preview_pane_ParamLimits

0x843f,	// (0x00073bc9) popup_navstr_preview_pane

0x8453,	// (0x00073bdd) scroll_navstr_pane_ParamLimits

0x8453,	// (0x00073bdd) scroll_navstr_pane

0x93f8,	// (0x00074b82) bg_popup_preview_window_pane_cp04

0xe945,	// (0x0007a0cf) popup_navstr_preview_pane_t1

0x8467,	// (0x00073bf1) scroll_navstr_pane_g1_ParamLimits

0x8467,	// (0x00073bf1) scroll_navstr_pane_g1

0x847b,	// (0x00073c05) scroll_navstr_pane_t1_ParamLimits

0x847b,	// (0x00073c05) scroll_navstr_pane_t1

0xe8ea,	// (0x0007a074) bg_button_pane_cp014

0xe8ea,	// (0x0007a074) bg_button_pane_cp030

0x7b0a,	// (0x00073294) list_double_fisheye_pane_g4_ParamLimits

0x7b0a,	// (0x00073294) list_double_fisheye_pane_g4

0x7b16,	// (0x000732a0) list_double_fisheye_pane_g5_ParamLimits

0x7b16,	// (0x000732a0) list_double_fisheye_pane_g5

0xc9aa,	// (0x00078134) sp_fs_scroll_pane_cp03

0xe7e1,	// (0x00079f6b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7ed,	// (0x00079f77) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0007b47d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f9,	// (0x00079f83) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8a7,	// (0x0007a031) sp_fs_scroll_pane_cp02

0xaa1b,	// (0x000761a5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa1b,	// (0x000761a5) popup_sp_fs_calendar_preview_list_single_pane

0x93f8,	// (0x00074b82) main_cam6_pano_pane

0x9460,	// (0x00074bea) main_mup3_pane_ParamLimits

0x93f8,	// (0x00074b82) main_phacti_pane

0x76c6,	// (0x00072e50) bg_button_pane_cp11

0x76e0,	// (0x00072e6a) main_mobtv_info_pane_g2_ParamLimits

0x76e0,	// (0x00072e6a) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0007b3dd) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0007b3dd) main_mobtv_info_pane_g

0x78bd,	// (0x00073047) sc_clock_pane_t5_ParamLimits

0x78bd,	// (0x00073047) sc_clock_pane_t5

0x7985,	// (0x0007310f) main_radioblah_pane_g1_ParamLimits

0xe5f2,	// (0x00079d7c) main_radioblah_pane_t3_ParamLimits

0xe5f2,	// (0x00079d7c) main_radioblah_pane_t3

0xe60a,	// (0x00079d94) main_radioblah_pane_t4_ParamLimits

0xe60a,	// (0x00079d94) main_radioblah_pane_t4

0x79ad,	// (0x00073137) main_radioblah_text_pane_ParamLimits

0x79ad,	// (0x00073137) main_radioblah_text_pane

0x79bf,	// (0x00073149) main_radioblah_info_pane_g1_ParamLimits

0x7a58,	// (0x000731e2) main_radioblah_info_pane_t4_ParamLimits

0x7a58,	// (0x000731e2) main_radioblah_info_pane_t4

0xa0b6,	// (0x00075840) main_sp_fs_calendar_pane

0x8492,	// (0x00073c1c) main_phacti_pane_g1

0x849a,	// (0x00073c24) phacti_note_pane_ParamLimits

0x849a,	// (0x00073c24) phacti_note_pane

0xe95c,	// (0x0007a0e6) phacti_term_pane_ParamLimits

0xe95c,	// (0x0007a0e6) phacti_term_pane

0xe971,	// (0x0007a0fb) phacti_note_pane_t1_ParamLimits

0xe971,	// (0x0007a0fb) phacti_note_pane_t1

0xa3e4,	// (0x00075b6e) phacti_term_pane_g1

0xa3ec,	// (0x00075b76) phacti_term_pane_t1_ParamLimits

0xa3ec,	// (0x00075b76) phacti_term_pane_t1

0xe988,	// (0x0007a112) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x0007a11a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0159,	// (0x0006b8e3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x0007a122) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x0007a122) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x0007a138) aid_popup_sp_fs_bg_corner_pane

0xcd7f,	// (0x00078509) popup_sp_fs_calendar_preview_bg_pane_g1

0x93f8,	// (0x00074b82) popup_sp_fs_calendar_preview_bg_pane

0x1259,	// (0x0006c9e3) popup_sp_fs_calendar_preview_list_pane

0xc962,	// (0x000780ec) bg_main_sp_fs_cale_pane_ParamLimits

0xc962,	// (0x000780ec) bg_main_sp_fs_cale_pane

0xa41f,	// (0x00075ba9) listscroll_cale_mrui_pane_ParamLimits

0xa41f,	// (0x00075ba9) listscroll_cale_mrui_pane

0xa434,	// (0x00075bbe) listscroll_sp_fs_schedule_track_pane

0xa43d,	// (0x00075bc7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa43d,	// (0x00075bc7) main_sp_fs_ctrlbar_pane_cp01

0xe9b6,	// (0x0007a140) main_sp_fs_ribbon_pane

0xa450,	// (0x00075bda) popup_sp_fs_cale_preview_window

0x850f,	// (0x00073c99) list_single_sp_fs_schedule_track_pane_ParamLimits

0x850f,	// (0x00073c99) list_single_sp_fs_schedule_track_pane

0xa0b6,	// (0x00075840) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa0b6,	// (0x00075840) bg_sp_fs_highlight_list_pane_cp03

0x8523,	// (0x00073cad) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8523,	// (0x00073cad) list_single_sp_fs_schedule_track_pane_g1

0x852f,	// (0x00073cb9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x852f,	// (0x00073cb9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbc,	// (0x0007b546) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbc,	// (0x0007b546) list_single_sp_fs_schedule_track_pane_g

0x853b,	// (0x00073cc5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x853b,	// (0x00073cc5) list_single_sp_fs_schedule_track_pane_t1

0x8555,	// (0x00073cdf) sp_fs_schedule_track_pane_ParamLimits

0x8555,	// (0x00073cdf) sp_fs_schedule_track_pane

0xe9be,	// (0x0007a148) sp_fs_schedule_track_pane_g1

0xe9c6,	// (0x0007a150) sp_fs_schedule_track_pane_g2

0xe9ce,	// (0x0007a158) sp_fs_schedule_track_pane_g3

0xe9d6,	// (0x0007a160) sp_fs_schedule_track_pane_g4

0xe9de,	// (0x0007a168) sp_fs_schedule_track_pane_g5

0x0004,

0x0163,	// (0x0006b8ed) sp_fs_schedule_track_pane_g

0xd715,	// (0x00078e9f) bg_sp_fs_schedule_viewer_highlight_g1

0xad35,	// (0x000764bf) bg_sp_fs_schedule_viewer_highlight_g2

0xd71d,	// (0x00078ea7) bg_sp_fs_schedule_viewer_highlight_g3

0xd725,	// (0x00078eaf) bg_sp_fs_schedule_viewer_highlight_g4

0xd951,	// (0x000790db) bg_sp_fs_schedule_viewer_highlight_g5

0xd735,	// (0x00078ebf) bg_sp_fs_schedule_viewer_highlight_g6

0xd73d,	// (0x00078ec7) bg_sp_fs_schedule_viewer_highlight_g7

0xd745,	// (0x00078ecf) bg_sp_fs_schedule_viewer_highlight_g8

0xad15,	// (0x0007649f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x016e,	// (0x0006b8f8) bg_sp_fs_schedule_viewer_highlight_g

0x93f8,	// (0x00074b82) bg_main_sp_fs_ribbon_pane

0x8566,	// (0x00073cf0) main_sp_fs_ribbon_pane_g1

0xe9e6,	// (0x0007a170) main_sp_fs_ribbon_pane_t1

0x856f,	// (0x00073cf9) main_sp_fs_ribbon_pane_t2

0xe9f5,	// (0x0007a17f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc1,	// (0x0007b54b) main_sp_fs_ribbon_pane_t

0xea04,	// (0x0007a18e) main_sp_fs_ribbon_scheduler_pane

0xea0c,	// (0x0007a196) bg_main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0007a19f) bg_main_sp_fs_ribbon_pane_g2

0xea1e,	// (0x0007a1a8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0188,	// (0x0006b912) bg_main_sp_fs_ribbon_pane_g

0xea26,	// (0x0007a1b0) main_sp_fs_ribbon_scheduler_pane_g1

0xea2f,	// (0x0007a1b9) main_sp_fs_ribbon_scheduler_pane_g2

0xea38,	// (0x0007a1c2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x018f,	// (0x0006b919) main_sp_fs_ribbon_scheduler_pane_g

0xea41,	// (0x0007a1cb) list_cale_mrui_pane

0x857e,	// (0x00073d08) sp_fs_scroll_pane_cp07_ParamLimits

0x857e,	// (0x00073d08) sp_fs_scroll_pane_cp07

0x859a,	// (0x00073d24) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x859a,	// (0x00073d24) bg_sp_fs_schedule_viewer_highlight

0xea4e,	// (0x0007a1d8) list_single_sp_fs_schedule_track_pane_cp01

0xea56,	// (0x0007a1e0) list_sp_fs_schedule_track_pane

0xea5e,	// (0x0007a1e8) sp_fs_scroll_pane_cp06_ParamLimits

0xea5e,	// (0x0007a1e8) sp_fs_scroll_pane_cp06

0xcd7f,	// (0x00078509) bgmain_sp_fs_calendar_pane_g1

0x85aa,	// (0x00073d34) list_single_cale_mrui_pane_ParamLimits

0x85aa,	// (0x00073d34) list_single_cale_mrui_pane

0xa462,	// (0x00075bec) list_single_cale_mrui_row_pane_ParamLimits

0xa462,	// (0x00075bec) list_single_cale_mrui_row_pane

0xa46f,	// (0x00075bf9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa46f,	// (0x00075bf9) list_single_cale_mrui_row_pane_g1

0xa4a7,	// (0x00075c31) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa4a7,	// (0x00075c31) list_single_cale_mrui_row_pane_t1

0x85cc,	// (0x00073d56) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85cc,	// (0x00073d56) list_single_cale_mrui_row_pane_t2

0xa4b9,	// (0x00075c43) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa4b9,	// (0x00075c43) list_single_cale_mrui_row_pane_t3

0xa4e8,	// (0x00075c72) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa4e8,	// (0x00075c72) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdcf,	// (0x0007b559) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdcf,	// (0x0007b559) list_single_cale_mrui_row_pane_t

0x8634,	// (0x00073dbe) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8634,	// (0x00073dbe) list_single_cmail_header_editor_pane_bg_cp01

0x865a,	// (0x00073de4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x865a,	// (0x00073de4) list_single_cmail_header_editor_pane_bg_cp02

0x867a,	// (0x00073e04) main_radioblah_text_pane_t1_ParamLimits

0x867a,	// (0x00073e04) main_radioblah_text_pane_t1

0xea7d,	// (0x0007a207) cam6_indi_pane_cp01

0xea85,	// (0x0007a20f) cam6_mode_pane_cp01

0xea8d,	// (0x0007a217) cam6_pano_pane

0xea96,	// (0x0007a220) cam6_zoom_pane_cp01

0xea9e,	// (0x0007a228) cam6_pano_image_pane

0xeaa9,	// (0x0007a233) cam6_pano_pane_g1

0xe33d,	// (0x00079ac7) cam6_pano_pane_g2

0xeab2,	// (0x0007a23c) cam6_pano_pane_g3

0xeabb,	// (0x0007a245) cam6_pano_pane_g4

0xd321,	// (0x00078aab) cam6_pano_pane_g5

0xeac4,	// (0x0007a24e) cam6_pano_pane_g6

0xeace,	// (0x0007a258) cam6_pano_pane_g7

0xead6,	// (0x0007a260) cam6_pano_pane_g8

0xeadf,	// (0x0007a269) cam6_pano_pane_g9

0x0008,

0xfdd8,	// (0x0007b562) cam6_pano_pane_g

0x93f8,	// (0x00074b82) main_browser_tag_pane

0xe93d,	// (0x0007a0c7) grid_navstr_albumart_pane

0xeaea,	// (0x0007a274) cell_navstr_albumart_pane_ParamLimits

0xeaea,	// (0x0007a274) cell_navstr_albumart_pane

0xeb0a,	// (0x0007a294) cell_navstr_albumart_pane_g1

0xc733,	// (0x00077ebd) cell_navstr_albumart_pane_g2

0xc743,	// (0x00077ecd) cell_navstr_albumart_pane_g3

0xc73b,	// (0x00077ec5) cell_navstr_albumart_pane_g4

0x0003,

0x01a6,	// (0x0006b930) cell_navstr_albumart_pane_g

0x8695,	// (0x00073e1f) bt_list_pane_ParamLimits

0x8695,	// (0x00073e1f) bt_list_pane

0x86a9,	// (0x00073e33) bt_list_pane_t1

0x86b8,	// (0x00073e42) bt_list_pane_t2

0x0001,

0xfdeb,	// (0x0007b575) bt_list_pane_t

0x93f8,	// (0x00074b82) main_cale_prevew_pane

0x86c7,	// (0x00073e51) popup_cale_preview_window_ParamLimits

0x86c7,	// (0x00073e51) popup_cale_preview_window

0xa0b6,	// (0x00075840) bg_popup_preview_window_pane_cp05_ParamLimits

0xa0b6,	// (0x00075840) bg_popup_preview_window_pane_cp05

0xeb12,	// (0x0007a29c) list_cale_preview_pane_ParamLimits

0xeb12,	// (0x0007a29c) list_cale_preview_pane

0x86e0,	// (0x00073e6a) list_double_cale_preview_pane_ParamLimits

0x86e0,	// (0x00073e6a) list_double_cale_preview_pane

0xd74d,	// (0x00078ed7) list_single_cale_preview_pane_ParamLimits

0xd74d,	// (0x00078ed7) list_single_cale_preview_pane

0x86f2,	// (0x00073e7c) list_single_cale_preview_pane_g1

0x86fa,	// (0x00073e84) list_single_cale_preview_pane_t1_ParamLimits

0x86fa,	// (0x00073e84) list_single_cale_preview_pane_t1

0x870f,	// (0x00073e99) list_double_cale_preview_pane_g1

0x8717,	// (0x00073ea1) list_double_cale_preview_pane_t1_ParamLimits

0x8717,	// (0x00073ea1) list_double_cale_preview_pane_t1

0x872c,	// (0x00073eb6) list_double_cale_preview_pane_t2_ParamLimits

0x872c,	// (0x00073eb6) list_double_cale_preview_pane_t2

0x0001,

0xfdf0,	// (0x0007b57a) list_double_cale_preview_pane_t_ParamLimits

0xfdf0,	// (0x0007b57a) list_double_cale_preview_pane_t

0x93f8,	// (0x00074b82) main_ezdial_pane

0xa0b6,	// (0x00075840) main_sp_fs_email_pane_ParamLimits

0x7c75,	// (0x000733ff) cmail_ddmenu_btn01_pane_ParamLimits

0x7c75,	// (0x000733ff) cmail_ddmenu_btn01_pane

0x7c88,	// (0x00073412) cmail_ddmenu_btn02_pane_ParamLimits

0x7c88,	// (0x00073412) cmail_ddmenu_btn02_pane

0x7cab,	// (0x00073435) cmail_ddmenu_btn03_pane_ParamLimits

0x7cab,	// (0x00073435) cmail_ddmenu_btn03_pane

0x7cd1,	// (0x0007345b) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cf5,	// (0x0007347f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8380,	// (0x00073b0a) list_cmail_body_pane_ParamLimits

0xe8bd,	// (0x0007a047) bg_button_pane_cp12

0xe8c6,	// (0x0007a050) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8c6,	// (0x0007a050) list_single_cmail_header_detail_pane_g3

0xa3a9,	// (0x00075b33) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa3a9,	// (0x00075b33) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0007b537) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0007b537) list_single_cmail_header_detail_pane_t

0xa401,	// (0x00075b8b) phacti_term_pane_t2_ParamLimits

0xa401,	// (0x00075b8b) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0007b541) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0007b541) phacti_term_pane_t

0xeb1e,	// (0x0007a2a8) aid_size_list_single_double

0x8744,	// (0x00073ece) popup_ezdial_listscroll_window

0x8760,	// (0x00073eea) popup_number_entry_window_cp01

0xaadc,	// (0x00076266) bg_popup_call_pane_cp09

0xeb2a,	// (0x0007a2b4) ezdial_list_pane

0xeb32,	// (0x0007a2bc) scroll_pane_cp23

0xc962,	// (0x000780ec) bg_button_pane_cp028_ParamLimits

0xc962,	// (0x000780ec) bg_button_pane_cp028

0x876e,	// (0x00073ef8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x876e,	// (0x00073ef8) cmail_ddmenu_btn01_pane_g1

0x877a,	// (0x00073f04) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x877a,	// (0x00073f04) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdf5,	// (0x0007b57f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdf5,	// (0x0007b57f) cmail_ddmenu_btn01_pane_g

0xeb3a,	// (0x0007a2c4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3a,	// (0x0007a2c4) cmail_ddmenu_btn01_pane_t1

0xc962,	// (0x000780ec) bg_button_pane_cp029_ParamLimits

0xc962,	// (0x000780ec) bg_button_pane_cp029

0x8786,	// (0x00073f10) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8786,	// (0x00073f10) cmail_ddmenu_btn02_pane_g1

0x879e,	// (0x00073f28) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x879e,	// (0x00073f28) cmail_ddmenu_btn02_pane_t1

0xa0b6,	// (0x00075840) bg_button_pane_cp031_ParamLimits

0xa0b6,	// (0x00075840) bg_button_pane_cp031

0x8786,	// (0x00073f10) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8786,	// (0x00073f10) cmail_ddmenu_btn03_pane_g1

0x879e,	// (0x00073f28) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x879e,	// (0x00073f28) cmail_ddmenu_btn03_pane_t1

0x54f3,	// (0x00070c7d) cell_dialer2_keypad_pane_t1_ParamLimits

0x550d,	// (0x00070c97) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x550d,	// (0x00070c97) cell_dialer2_keypad_pane_t1_copy1

0x74db,	// (0x00072c65) ncimui_group_button_pane

0xa0b6,	// (0x00075840) main_sp_fs_calendar_pane_ParamLimits

0x8395,	// (0x00073b1f) list_single_cmail_header_caption_pane_ParamLimits

0xa416,	// (0x00075ba0) aid_recal_txt_sm_pane

0x93f8,	// (0x00074b82) mian_recal_day_pane

0xa450,	// (0x00075bda) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4f,	// (0x0007a2d9) list_recal_day_pane

0xa532,	// (0x00075cbc) list_single_recal_day_pane_ParamLimits

0xa532,	// (0x00075cbc) list_single_recal_day_pane

0xeb76,	// (0x0007a300) list_single_recal_day_pane_g1_ParamLimits

0xeb76,	// (0x0007a300) list_single_recal_day_pane_g1

0xa544,	// (0x00075cce) list_single_recal_day_pane_g2_ParamLimits

0xa544,	// (0x00075cce) list_single_recal_day_pane_g2

0xa550,	// (0x00075cda) list_single_recal_day_pane_g3_ParamLimits

0xa550,	// (0x00075cda) list_single_recal_day_pane_g3

0x87c2,	// (0x00073f4c) list_single_recal_day_pane_g4_ParamLimits

0x87c2,	// (0x00073f4c) list_single_recal_day_pane_g4

0xa55c,	// (0x00075ce6) list_single_recal_day_pane_g5_ParamLimits

0xa55c,	// (0x00075ce6) list_single_recal_day_pane_g5

0xa568,	// (0x00075cf2) list_single_recal_day_pane_g6_ParamLimits

0xa568,	// (0x00075cf2) list_single_recal_day_pane_g6

0x0004,

0xfe04,	// (0x0007b58e) list_single_recal_day_pane_g_ParamLimits

0xfe04,	// (0x0007b58e) list_single_recal_day_pane_g

0xa57c,	// (0x00075d06) list_single_recal_day_pane_t1

0xa58e,	// (0x00075d18) list_single_recal_day_pane_t2

0x0001,

0xfe0f,	// (0x0007b599) list_single_recal_day_pane_t

0x87da,	// (0x00073f64) ncimui_query_button_pane_ParamLimits

0x87da,	// (0x00073f64) ncimui_query_button_pane

0x87ea,	// (0x00073f74) ncimui_query_button_pane_t1_ParamLimits

0x87ea,	// (0x00073f74) ncimui_query_button_pane_t1

0xeb82,	// (0x0007a30c) ncimui_query_button_pane_t2_ParamLimits

0xeb82,	// (0x0007a30c) ncimui_query_button_pane_t2

0x0001,

0xfe14,	// (0x0007b59e) ncimui_query_button_pane_t_ParamLimits

0xfe14,	// (0x0007b59e) ncimui_query_button_pane_t

0x87fd,	// (0x00073f87) query_button_pane_ParamLimits

0x87fd,	// (0x00073f87) query_button_pane

0x93f8,	// (0x00074b82) bg_button_pane_cp0028

0xeb95,	// (0x0007a31f) query_button_pane_t1

0x358f,	// (0x0006ed19) main_tport_pane_ParamLimits

0x8244,	// (0x000739ce) bg_popup_window_pane_cp01_ParamLimits

0x8244,	// (0x000739ce) bg_popup_window_pane_cp01

0x825f,	// (0x000739e9) heading_pane_cp08_ParamLimits

0x825f,	// (0x000739e9) heading_pane_cp08

0x8272,	// (0x000739fc) heading_pane_cp07_ParamLimits

0x8272,	// (0x000739fc) heading_pane_cp07

0x8319,	// (0x00073aa3) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0007b524) cell_tport_appsw_pane_g

0xa035,	// (0x000757bf) input_candi_list_open_g1

0xaef8,	// (0x00076682) list_cale_time_pane_g6_ParamLimits

0xaef8,	// (0x00076682) list_cale_time_pane_g6

0x4357,	// (0x0006fae1) aid_size_touch_calib_1_ParamLimits

0x4357,	// (0x0006fae1) aid_size_touch_calib_1

0x4369,	// (0x0006faf3) aid_size_touch_calib_2_ParamLimits

0x4369,	// (0x0006faf3) aid_size_touch_calib_2

0x4381,	// (0x0006fb0b) aid_size_touch_calib_3_ParamLimits

0x4381,	// (0x0006fb0b) aid_size_touch_calib_3

0x439f,	// (0x0006fb29) aid_size_touch_calib_4_ParamLimits

0x439f,	// (0x0006fb29) aid_size_touch_calib_4

0x43b7,	// (0x0006fb41) main_touch_calib_button_group_pane_ParamLimits

0x43b7,	// (0x0006fb41) main_touch_calib_button_group_pane

0x43cf,	// (0x0006fb59) main_touch_calib_pane_g1_ParamLimits

0x43e1,	// (0x0006fb6b) main_touch_calib_pane_g2_ParamLimits

0x43f3,	// (0x0006fb7d) main_touch_calib_pane_g3_ParamLimits

0x4405,	// (0x0006fb8f) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0007aeea) main_touch_calib_pane_g_ParamLimits

0x4417,	// (0x0006fba1) main_touch_calib_pane_t1_ParamLimits

0x4431,	// (0x0006fbbb) main_touch_calib_pane_t2_ParamLimits

0x444b,	// (0x0006fbd5) main_touch_calib_pane_t3_ParamLimits

0x445f,	// (0x0006fbe9) main_touch_calib_pane_t4_ParamLimits

0x4473,	// (0x0006fbfd) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0007aef3) main_touch_calib_pane_t_ParamLimits

0xd0c4,	// (0x0007884e) list_single_fp_cale_pane_g3_ParamLimits

0xd0c4,	// (0x0007884e) list_single_fp_cale_pane_g3

0x9460,	// (0x00074bea) bg_button_pane_cp012_ParamLimits

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp03_ParamLimits

0x6514,	// (0x00071c9e) cell_vitu2_function_top_pane_g1_ParamLimits

0x9460,	// (0x00074bea) bg_vkb2_func_pane_cp04_ParamLimits

0x7466,	// (0x00072bf0) main_ncimui_button_group_pane_ParamLimits

0x7466,	// (0x00072bf0) main_ncimui_button_group_pane

0x74c6,	// (0x00072c50) main_ncimui_pane_t3_ParamLimits

0x74c6,	// (0x00072c50) main_ncimui_pane_t3

0xe953,	// (0x0007a0dd) phacti_button_group_pane

0xeb1e,	// (0x0007a2a8) aid_size_list_single_double_ParamLimits

0x8744,	// (0x00073ece) popup_ezdial_listscroll_window_ParamLimits

0x8760,	// (0x00073eea) popup_number_entry_window_cp01_ParamLimits

0x8810,	// (0x00073f9a) phacti_button_pane_ParamLimits

0x8810,	// (0x00073f9a) phacti_button_pane

0x93f8,	// (0x00074b82) bg_button_pane_cp14

0xeba3,	// (0x0007a32d) phacti_button_pane_t1

0x8821,	// (0x00073fab) main_touch_calib_button_pane_ParamLimits

0x8821,	// (0x00073fab) main_touch_calib_button_pane

0xa8f0,	// (0x0007607a) bg_button_pane_cp18_ParamLimits

0xa8f0,	// (0x0007607a) bg_button_pane_cp18

0xebb1,	// (0x0007a33b) main_touch_calib_button_pane_t1_ParamLimits

0xebb1,	// (0x0007a33b) main_touch_calib_button_pane_t1

0xebc7,	// (0x0007a351) main_touch_calib_button_pane_t2_ParamLimits

0xebc7,	// (0x0007a351) main_touch_calib_button_pane_t2

0x0001,

0x01dd,	// (0x0006b967) main_touch_calib_button_pane_t_ParamLimits

0x01dd,	// (0x0006b967) main_touch_calib_button_pane_t

0x93f8,	// (0x00074b82) cell_ncimui_button_pane

0x93f8,	// (0x00074b82) bg_button_pane_cp032

0xebe5,	// (0x0007a36f) cell_ncimui_button_pane_t1

0x9a68,	// (0x000751f2) image3_infobar_pane_ParamLimits

0x9a68,	// (0x000751f2) image3_infobar_pane

0x78e9,	// (0x00073073) fs_bigclock_status_pane_ParamLimits

0x78e9,	// (0x00073073) fs_bigclock_status_pane

0x78f6,	// (0x00073080) main_fs_bigclock_clock_pane_ParamLimits

0x78f6,	// (0x00073080) main_fs_bigclock_clock_pane

0x7914,	// (0x0007309e) main_fs_bigclock_indi_pane_ParamLimits

0x7914,	// (0x0007309e) main_fs_bigclock_indi_pane

0x7946,	// (0x000730d0) main_fs_bigclock_swipe_pane_ParamLimits

0x7946,	// (0x000730d0) main_fs_bigclock_swipe_pane

0x93f8,	// (0x00074b82) main_fs_clock_dumped_data

0xe44a,	// (0x00079bd4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe44a,	// (0x00079bd4) list_single_fs_bigclock_indicator_pane_g1

0xe47d,	// (0x00079c07) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe47d,	// (0x00079c07) list_single_fs_bigclock_indicator_pane_g2

0xe497,	// (0x00079c21) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe497,	// (0x00079c21) list_single_fs_bigclock_indicator_pane_g3

0xe4b1,	// (0x00079c3b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b1,	// (0x00079c3b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0007b411) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0007b411) list_single_fs_bigclock_indicator_pane_g

0xe4dc,	// (0x00079c66) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4dc,	// (0x00079c66) list_single_fs_bigclock_indicator_pane_t1

0xe504,	// (0x00079c8e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe504,	// (0x00079c8e) list_single_fs_bigclock_indicator_pane_t2

0xe52c,	// (0x00079cb6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe52c,	// (0x00079cb6) list_single_fs_bigclock_indicator_pane_t3

0xe554,	// (0x00079cde) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe554,	// (0x00079cde) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0007b41c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0007b41c) list_single_fs_bigclock_indicator_pane_t

0xebf3,	// (0x0007a37d) image3_infobar_fav_pane_ParamLimits

0xebf3,	// (0x0007a37d) image3_infobar_fav_pane

0xec03,	// (0x0007a38d) image3_infobar_loc_pane_ParamLimits

0xec03,	// (0x0007a38d) image3_infobar_loc_pane

0xec17,	// (0x0007a3a1) image3_infobar_time_pane_ParamLimits

0xec17,	// (0x0007a3a1) image3_infobar_time_pane

0xcd7f,	// (0x00078509) image3_infobar_time_pane_g1

0xec27,	// (0x0007a3b1) image3_infobar_time_pane_t1

0xcd7f,	// (0x00078509) image3_infobar_loc_pane_g1

0xec35,	// (0x0007a3bf) image3_infobar_loc_pane_g2

0x0001,

0xfe19,	// (0x0007b5a3) image3_infobar_loc_pane_g

0xec3d,	// (0x0007a3c7) image3_infobar_loc_pane_t1

0xcd7f,	// (0x00078509) image3_infobar_fav_pane_g1

0xec4b,	// (0x0007a3d5) image3_infobar_fav_pane_g2

0x0001,

0xfe1e,	// (0x0007b5a8) image3_infobar_fav_pane_g

0xec53,	// (0x0007a3dd) fs_bigclock_status_battery_pane

0xec5c,	// (0x0007a3e6) fs_bigclock_status_signal_pane

0xec65,	// (0x0007a3ef) fs_bigclock_status_title_pane

0xec6e,	// (0x0007a3f8) fs_bigclock_status_signal_pane_g1

0xec77,	// (0x0007a401) fs_bigclock_status_signal_pane_g2

0x0001,

0x01ec,	// (0x0006b976) fs_bigclock_status_signal_pane_g

0xec7f,	// (0x0007a409) fs_bigclock_status_battery_pane_g1

0xec88,	// (0x0007a412) fs_bigclock_status_battery_pane_g2

0x0001,

0x01f1,	// (0x0006b97b) fs_bigclock_status_battery_pane_g

0xec90,	// (0x0007a41a) fs_bigclock_status_title_pane_t1

0x8836,	// (0x00073fc0) main_fs_bigclock_clock_pane_g1

0x8836,	// (0x00073fc0) main_fs_bigclock_clock_pane_g2

0x8847,	// (0x00073fd1) main_fs_bigclock_clock_pane_g3

0x8847,	// (0x00073fd1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe23,	// (0x0007b5ad) main_fs_bigclock_clock_pane_g

0x885a,	// (0x00073fe4) main_fs_bigclock_clock_pane_t1

0x8870,	// (0x00073ffa) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe2c,	// (0x0007b5b6) main_fs_bigclock_clock_pane_t

0xec9e,	// (0x0007a428) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec9e,	// (0x0007a428) list_single_fs_bigclock_indicator_pane

0xecaf,	// (0x0007a439) list_single_fs_bigclock_pane_ParamLimits

0xecaf,	// (0x0007a439) list_single_fs_bigclock_pane

0xecd5,	// (0x0007a45f) main_fs_bigclock_indicator_pane_t1

0xece4,	// (0x0007a46e) list_single_fs_bigclock_pane_g1

0xecec,	// (0x0007a476) list_single_fs_bigclock_pane_t1

0xcd7f,	// (0x00078509) main_fs_bigclock_swipe_pane_g1

0xed2f,	// (0x0007a4b9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe38,	// (0x0007b5c2) main_fs_bigclock_swipe_pane_g

0xed37,	// (0x0007a4c1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed37,	// (0x0007a4c1) main_fs_bigclock_swipe_pane_t1

0x248e,	// (0x0006dc18) call_type_pane_ParamLimits

0x93f8,	// (0x00074b82) main_btmg_pane

0xa49b,	// (0x00075c25) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa49b,	// (0x00075c25) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdc8,	// (0x0007b552) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdc8,	// (0x0007b552) list_single_cale_mrui_row_pane_g

0xa521,	// (0x00075cab) list_recal_vselct_arw_lo_pane

0xeb6e,	// (0x0007a2f8) list_recal_vselct_arw_up_pane

0xa529,	// (0x00075cb3) list_recal_vselct_pane

0x88ca,	// (0x00074054) btmg_button_pane

0x88d4,	// (0x0007405e) main_btmg_pane_g1

0x93f8,	// (0x00074b82) bg_button_pane_cp044

0xed54,	// (0x0007a4de) btmg_button_pane_t1

0xc94e,	// (0x000780d8) aid_listscroll_gen

0xa0b6,	// (0x00075840) main_cntbar_detail_pane

0xe89f,	// (0x0007a029) list_cmail_folder_pane

0xc9aa,	// (0x00078134) sp_fs_scroll_pane_cp03_ParamLimits

0x88de,	// (0x00074068) list_single_fs_dyc_pane_cp01_ParamLimits

0x88de,	// (0x00074068) list_single_fs_dyc_pane_cp01

0xed62,	// (0x0007a4ec) aid_size_cmail_indent

0xa5a0,	// (0x00075d2a) list_single_dyc_row_pane_cp01

0x8927,	// (0x000740b1) cntbar_detail_list_pane_ParamLimits

0x8927,	// (0x000740b1) cntbar_detail_list_pane

0x8973,	// (0x000740fd) main_cntbar_detail_cont_pane_ParamLimits

0x8973,	// (0x000740fd) main_cntbar_detail_cont_pane

0xc9aa,	// (0x00078134) scroll_pane_cp032_ParamLimits

0xc9aa,	// (0x00078134) scroll_pane_cp032

0x8987,	// (0x00074111) cntbar_detail_list_event_pane_ParamLimits

0x8987,	// (0x00074111) cntbar_detail_list_event_pane

0x8937,	// (0x000740c1) cntbar_detail_list_shct_pane

0xad83,	// (0x0007650d) aid_list_gen

0xed6b,	// (0x0007a4f5) aid_scroll

0xed74,	// (0x0007a4fe) aid_size_touch_scroll_bar

0x6c08,	// (0x00072392) aid_list_double

0xa5a9,	// (0x00075d33) aid_list_single

0x6c08,	// (0x00072392) aid_list_single_lg

0xa5b2,	// (0x00075d3c) aid_list_z_g_a_sm

0xa5ba,	// (0x00075d44) aid_list_z_g_d

0xa5c2,	// (0x00075d4c) aid_txt_z_prm

0x8997,	// (0x00074121) aid_txt_z_prm_cp01

0x89a5,	// (0x0007412f) aid_txt_z_sec

0x89b3,	// (0x0007413d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89b3,	// (0x0007413d) main_cntbar_detail_cont_pane_g1

0x89c7,	// (0x00074151) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89c7,	// (0x00074151) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe3d,	// (0x0007b5c7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe3d,	// (0x0007b5c7) main_cntbar_detail_cont_pane_g

0xed7d,	// (0x0007a507) main_cntbar_detail_cont_pane_t1

0xed8b,	// (0x0007a515) main_cntbar_detail_cont_pane_t2

0xed99,	// (0x0007a523) main_cntbar_detail_cont_pane_t3

0x0002,

0x021a,	// (0x0006b9a4) main_cntbar_detail_cont_pane_t

0x89d7,	// (0x00074161) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89d7,	// (0x00074161) cell_cntbar_detail_list_shct_pane

0xeda7,	// (0x0007a531) cntbar_detail_list_shct_pane_g1

0xedb0,	// (0x0007a53a) cntbar_detail_list_shct_pane_g2

0x0001,

0x0221,	// (0x0006b9ab) cntbar_detail_list_shct_pane_g

0x89eb,	// (0x00074175) cntbar_detail_list_event_pane_g1_ParamLimits

0x89eb,	// (0x00074175) cntbar_detail_list_event_pane_g1

0x89f7,	// (0x00074181) cntbar_detail_list_event_pane_g2_ParamLimits

0x89f7,	// (0x00074181) cntbar_detail_list_event_pane_g2

0x0005,

0xfe42,	// (0x0007b5cc) cntbar_detail_list_event_pane_g_ParamLimits

0xfe42,	// (0x0007b5cc) cntbar_detail_list_event_pane_g

0x8a63,	// (0x000741ed) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a63,	// (0x000741ed) cntbar_detail_list_event_pane_t1

0x8a78,	// (0x00074202) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a78,	// (0x00074202) cntbar_detail_list_event_pane_t2

0x0002,

0xfe4f,	// (0x0007b5d9) cntbar_detail_list_event_pane_t_ParamLimits

0xfe4f,	// (0x0007b5d9) cntbar_detail_list_event_pane_t

0xcd7f,	// (0x00078509) cell_cntbar_detail_list_shct_pane_g1

0xb4cf,	// (0x00076c59) navi_pane_mv_g3

0xa0b6,	// (0x00075840) main_cntbar_detail_pane_ParamLimits

0x93f8,	// (0x00074b82) main_notif_wgt_pane

0x9854,	// (0x00074fde) aid_tch_main_mp4_pane_g4

0x9a60,	// (0x000751ea) popup_slider_window_cp02

0xa517,	// (0x00075ca1) list_recal_day_event_pane

0x88f5,	// (0x0007407f) cntbar_detail_btn_pane_ParamLimits

0x88f5,	// (0x0007407f) cntbar_detail_btn_pane

0x890e,	// (0x00074098) cntbar_detail_btn_pane_cp01_ParamLimits

0x890e,	// (0x00074098) cntbar_detail_btn_pane_cp01

0x8937,	// (0x000740c1) cntbar_detail_list_shct_pane_ParamLimits

0x8947,	// (0x000740d1) cntbar_detail_pane_g1_ParamLimits

0x8947,	// (0x000740d1) cntbar_detail_pane_g1

0x8957,	// (0x000740e1) cntbar_detail_pane_t1_ParamLimits

0x8957,	// (0x000740e1) cntbar_detail_pane_t1

0x8a03,	// (0x0007418d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a03,	// (0x0007418d) cntbar_detail_list_event_pane_g3

0x8a1b,	// (0x000741a5) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a1b,	// (0x000741a5) cntbar_detail_list_event_pane_g4

0x8a33,	// (0x000741bd) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a33,	// (0x000741bd) cntbar_detail_list_event_pane_g5

0x8a4b,	// (0x000741d5) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a4b,	// (0x000741d5) cntbar_detail_list_event_pane_g6

0x8a8d,	// (0x00074217) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a8d,	// (0x00074217) cntbar_detail_list_event_pane_t3

0x8a9f,	// (0x00074229) popup_notif_wgt_window_ParamLimits

0x8a9f,	// (0x00074229) popup_notif_wgt_window

0x8ab8,	// (0x00074242) popup_submenu_window_cp01_ParamLimits

0x8ab8,	// (0x00074242) popup_submenu_window_cp01

0xaadc,	// (0x00076266) bg_popup_window_pane_cp10

0xedb9,	// (0x0007a543) listscroll_notif_wgt_pane

0xedcb,	// (0x0007a555) list_notif_wgt_window

0xedd4,	// (0x0007a55e) scroll_pane_cp033

0x8aca,	// (0x00074254) list_notif_wgt_row_pane_ParamLimits

0x8aca,	// (0x00074254) list_notif_wgt_row_pane

0xeddd,	// (0x0007a567) aid_size_list_notif_wgt_del

0xedea,	// (0x0007a574) list_notif_wgt_row_pane_g1

0xedf6,	// (0x0007a580) list_notif_wgt_row_pane_g2

0xee05,	// (0x0007a58f) list_notif_wgt_row_pane_g3

0x0002,

0x023a,	// (0x0006b9c4) list_notif_wgt_row_pane_g

0xee12,	// (0x0007a59c) list_notif_wgt_row_pane_t1

0xee28,	// (0x0007a5b2) list_notif_wgt_row_pane_t2

0xee3a,	// (0x0007a5c4) list_notif_wgt_row_pane_t3

0x0002,

0x0241,	// (0x0006b9cb) list_notif_wgt_row_pane_t

0xd96b,	// (0x000790f5) list_recal_day_event_pane_g1

0xee4c,	// (0x0007a5d6) list_recal_day_event_pane_t1

0x93f8,	// (0x00074b82) bg_button_pane_cp045

0x8ada,	// (0x00074264) cntbar_detail_btn_pane_t1

0xc962,	// (0x000780ec) main_callh_pane_ParamLimits

0xc962,	// (0x000780ec) main_callh_pane

0x93f8,	// (0x00074b82) main_coverflow0_pane

0x93f8,	// (0x00074b82) main_wgtman_pane

0x795e,	// (0x000730e8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x795e,	// (0x000730e8) main_fs_bigclock_unlock_btn_pane

0x8311,	// (0x00073a9b) bg_button_pane_cp16

0x8321,	// (0x00073aab) cell_tport_appsw_pane_g3

0x8ae8,	// (0x00074272) cf0_flow_pane_ParamLimits

0x8ae8,	// (0x00074272) cf0_flow_pane

0xee5b,	// (0x0007a5e5) listscroll_cf0_pane

0xee66,	// (0x0007a5f0) main_cf0_pane_g1

0x8afd,	// (0x00074287) main_cf0_pane_t1_ParamLimits

0x8afd,	// (0x00074287) main_cf0_pane_t1

0x8b14,	// (0x0007429e) main_cf0_pane_t2_ParamLimits

0x8b14,	// (0x0007429e) main_cf0_pane_t2

0x0001,

0xfe56,	// (0x0007b5e0) main_cf0_pane_t_ParamLimits

0xfe56,	// (0x0007b5e0) main_cf0_pane_t

0xee78,	// (0x0007a602) scroll_pane_cp11

0x8b2b,	// (0x000742b5) cf0_flow_pane_g1

0x8b33,	// (0x000742bd) cf0_flow_pane_g2

0x0001,

0xfe5b,	// (0x0007b5e5) cf0_flow_pane_g

0x8b3b,	// (0x000742c5) cf0_flow_pane_t1

0x93f8,	// (0x00074b82) main_call6_pane

0x93f8,	// (0x00074b82) main_calllock_pane

0x8b49,	// (0x000742d3) call6_btn_grp_pane_ParamLimits

0x8b49,	// (0x000742d3) call6_btn_grp_pane

0x8b63,	// (0x000742ed) call6_pane_g1_ParamLimits

0x8b63,	// (0x000742ed) call6_pane_g1

0x8b79,	// (0x00074303) popup_call6_1st_window_ParamLimits

0x8b79,	// (0x00074303) popup_call6_1st_window

0x8b8a,	// (0x00074314) popup_call6_2nd_window_ParamLimits

0x8b8a,	// (0x00074314) popup_call6_2nd_window

0x8b9b,	// (0x00074325) cell_call6_btn_pane_ParamLimits

0x8b9b,	// (0x00074325) cell_call6_btn_pane

0xaadc,	// (0x00076266) bg_popup_call2_in_pane_cp03

0xee83,	// (0x0007a60d) popup_call6_1st_window_g1

0xee8b,	// (0x0007a615) popup_call6_1st_window_g2

0xee93,	// (0x0007a61d) popup_call6_1st_window_g3

0x0002,

0x0257,	// (0x0006b9e1) popup_call6_1st_window_g

0xee9b,	// (0x0007a625) popup_call6_1st_window_t1

0xeeaa,	// (0x0007a634) popup_call6_1st_window_t2

0xeeb8,	// (0x0007a642) popup_call6_1st_window_t3

0x0002,

0x025e,	// (0x0006b9e8) popup_call6_1st_window_t

0xaadc,	// (0x00076266) bg_popup_call2_in_pane_cp04

0xee83,	// (0x0007a60d) popup_call6_2nd_window_g1

0xee8b,	// (0x0007a615) popup_call6_2nd_window_g2

0xee93,	// (0x0007a61d) popup_call6_2nd_window_g3

0x0002,

0x0257,	// (0x0006b9e1) popup_call6_2nd_window_g

0xee9b,	// (0x0007a625) popup_call6_2nd_window_t1

0x946e,	// (0x00074bf8) bg_button_pane_cp15

0x9cdf,	// (0x00075469) cell_call6_btn_pane_g1

0x9ce8,	// (0x00075472) cell_call6_btn_pane_t1

0x8baf,	// (0x00074339) listscroll_wgtman_pane_ParamLimits

0x8baf,	// (0x00074339) listscroll_wgtman_pane

0x8bd0,	// (0x0007435a) wgtman_btn_pane_ParamLimits

0x8bd0,	// (0x0007435a) wgtman_btn_pane

0xb2e3,	// (0x00076a6d) aid_scroll_copy1

0xeec6,	// (0x0007a650) list_wgtman_pane

0x8c13,	// (0x0007439d) wgtman_btn_pane_g1_ParamLimits

0x8c13,	// (0x0007439d) wgtman_btn_pane_g1

0x8c3f,	// (0x000743c9) wgtman_btn_pane_t1_ParamLimits

0x8c3f,	// (0x000743c9) wgtman_btn_pane_t1

0xeed0,	// (0x0007a65a) wgtman_btn_pane_t2_ParamLimits

0xeed0,	// (0x0007a65a) wgtman_btn_pane_t2

0x0001,

0xfe60,	// (0x0007b5ea) wgtman_btn_pane_t_ParamLimits

0xfe60,	// (0x0007b5ea) wgtman_btn_pane_t

0x8c7c,	// (0x00074406) listrow_wgtman_pane_ParamLimits

0x8c7c,	// (0x00074406) listrow_wgtman_pane

0x8c8e,	// (0x00074418) listrow_wgtman_pane_g1

0x8c9b,	// (0x00074425) listrow_wgtman_pane_g2

0x0001,

0xfe65,	// (0x0007b5ef) listrow_wgtman_pane_g

0x8cb9,	// (0x00074443) listrow_wgtman_pane_t1

0x8cd1,	// (0x0007445b) listrow_wgtman_pane_t2

0x0001,

0xfe6a,	// (0x0007b5f4) listrow_wgtman_pane_t

0x8cf7,	// (0x00074481) wait_bar_pane_cp09

0xeee7,	// (0x0007a671) main_calllock_btn_pane

0xeef1,	// (0x0007a67b) main_calllock_pane_g1

0x93f8,	// (0x00074b82) bg_button_pane_cp17

0xeefd,	// (0x0007a687) main_calllock_btn_pane_g1

0xef06,	// (0x0007a690) main_calllock_btn_pane_t1

0x93f8,	// (0x00074b82) main_dialer3_pane

0x93f8,	// (0x00074b82) main_fmrd2_pane

0xcd7f,	// (0x00078509) main_fs_bigclock_unlock_btn_pane_g1

0x8d11,	// (0x0007449b) main_fs_bigclock_unlock_btn_pane_t1

0x8d1f,	// (0x000744a9) area_fmrd2_info_pane_ParamLimits

0x8d1f,	// (0x000744a9) area_fmrd2_info_pane

0x8d30,	// (0x000744ba) area_fmrd2_visual_pane_ParamLimits

0x8d30,	// (0x000744ba) area_fmrd2_visual_pane

0x8d3e,	// (0x000744c8) fmrd2_indi_pane_ParamLimits

0x8d3e,	// (0x000744c8) fmrd2_indi_pane

0x8d4b,	// (0x000744d5) area_fmrd2_visual_pane_g1

0x8d53,	// (0x000744dd) area_fmrd2_visual_pane_t1

0x8d63,	// (0x000744ed) area_fmrd2_visual_pane_t2

0x8d73,	// (0x000744fd) area_fmrd2_visual_pane_t3

0x0002,

0xfe74,	// (0x0007b5fe) area_fmrd2_visual_pane_t

0x8d83,	// (0x0007450d) area_fmrd2_info_pane_g1

0x8d8b,	// (0x00074515) area_fmrd2_info_pane_t1

0x8d9b,	// (0x00074525) area_fmrd2_info_pane_t2

0x8dab,	// (0x00074535) area_fmrd2_info_pane_t3

0x8dbb,	// (0x00074545) area_fmrd2_info_pane_t4

0x0003,

0xfe7b,	// (0x0007b605) area_fmrd2_info_pane_t

0x8dc9,	// (0x00074553) fmrd2_indi_pane_t1

0x8dd9,	// (0x00074563) fmrd2_indi_pane_t2

0x8de9,	// (0x00074573) fmrd2_indi_pane_t3

0x0002,

0xfe84,	// (0x0007b60e) fmrd2_indi_pane_t

0xe4c0,	// (0x00079c4a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c0,	// (0x00079c4a) list_single_fs_bigclock_indicator_pane_g5

0xe571,	// (0x00079cfb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe571,	// (0x00079cfb) list_single_fs_bigclock_indicator_pane_t5

0x84ae,	// (0x00073c38) aid_cell_bcale_month_pane_ParamLimits

0x84ae,	// (0x00073c38) aid_cell_bcale_month_pane

0x84cc,	// (0x00073c56) bcale_month_pane_ParamLimits

0x84cc,	// (0x00073c56) bcale_month_pane

0x84f0,	// (0x00073c7a) bcale_preview_pane_ParamLimits

0x84f0,	// (0x00073c7a) bcale_preview_pane

0xecec,	// (0x0007a476) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0b,	// (0x0007a495) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0b,	// (0x0007a495) list_single_fs_bigclock_pane_t2

0x0001,

0x020b,	// (0x0006b995) list_single_fs_bigclock_pane_t_ParamLimits

0x020b,	// (0x0006b995) list_single_fs_bigclock_pane_t

0x8d09,	// (0x00074493) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe6f,	// (0x0007b5f9) main_fs_bigclock_unlock_btn_pane_g

0x8df9,	// (0x00074583) aid_dia3_key_size_ParamLimits

0x8df9,	// (0x00074583) aid_dia3_key_size

0x8e08,	// (0x00074592) aid_dia3_listrow_size_ParamLimits

0x8e08,	// (0x00074592) aid_dia3_listrow_size

0x8e1d,	// (0x000745a7) dia3_keypad_fun_pane_ParamLimits

0x8e1d,	// (0x000745a7) dia3_keypad_fun_pane

0x8e39,	// (0x000745c3) dia3_keypad_num_pane_ParamLimits

0x8e39,	// (0x000745c3) dia3_keypad_num_pane

0x8e54,	// (0x000745de) dia3_listscroll_pane_ParamLimits

0x8e54,	// (0x000745de) dia3_listscroll_pane

0x8e67,	// (0x000745f1) dia3_numentry_pane_ParamLimits

0x8e67,	// (0x000745f1) dia3_numentry_pane

0xef15,	// (0x0007a69f) dia3_list_pane

0xef20,	// (0x0007a6aa) scroll_pane_cp12

0x93f8,	// (0x00074b82) bg_dia3_numentry_pane

0x8e7b,	// (0x00074605) dia3_numentry_pane_t1

0x8e8a,	// (0x00074614) cell_dia3_key_num_pane

0x8e92,	// (0x0007461c) cell_dia3_key0_fun_pane_ParamLimits

0x8e92,	// (0x0007461c) cell_dia3_key0_fun_pane

0x8ea6,	// (0x00074630) cell_dia3_key1_fun_pane_ParamLimits

0x8ea6,	// (0x00074630) cell_dia3_key1_fun_pane

0x8ebe,	// (0x00074648) dia3_listrow_pane

0xe1fc,	// (0x00079986) bg_dia3_numentry_pane_g1

0x93f8,	// (0x00074b82) bg_button_pane_cp21

0xef2b,	// (0x0007a6b5) cell_dia3_key_num_pane_t1

0xef39,	// (0x0007a6c3) cell_dia3_key_num_pane_t2

0xef48,	// (0x0007a6d2) cell_dia3_key_num_pane_t3

0xef57,	// (0x0007a6e1) cell_dia3_key_num_pane_t4

0x0003,

0x0290,	// (0x0006ba1a) cell_dia3_key_num_pane_t

0x93f8,	// (0x00074b82) bg_button_pane_cp19

0x8ed0,	// (0x0007465a) cell_dia3_key0_fun_pane_g1

0x93f8,	// (0x00074b82) bg_button_pane_cp20

0x8ed8,	// (0x00074662) cell_dia3_key1_fun_pane_g1

0x8ee0,	// (0x0007466a) area_left_week_number_pane

0x8eec,	// (0x00074676) area_top_day_name_pane

0x8eff,	// (0x00074689) frame_month_view_pane

0xef66,	// (0x0007a6f0) grid_month_view_pane

0x8f12,	// (0x0007469c) cell_top_day_name_pane_ParamLimits

0x8f12,	// (0x0007469c) cell_top_day_name_pane

0x8f3f,	// (0x000746c9) cell_area_left_week_number_pane_ParamLimits

0x8f3f,	// (0x000746c9) cell_area_left_week_number_pane

0x8f53,	// (0x000746dd) cell_month_view_pane_ParamLimits

0x8f53,	// (0x000746dd) cell_month_view_pane

0xef74,	// (0x0007a6fe) frm_month_g1

0x8f80,	// (0x0007470a) frm_month_g2

0x8f93,	// (0x0007471d) frm_month_g3

0x8fa6,	// (0x00074730) frm_month_g4

0x8fb9,	// (0x00074743) frm_month_g5

0x8fcc,	// (0x00074756) frm_month_g6

0x8fdf,	// (0x00074769) frm_month_g7

0xef81,	// (0x0007a70b) frm_month_g8

0x8ff2,	// (0x0007477c) frm_month_g9

0x9002,	// (0x0007478c) frm_month_g10

0x9012,	// (0x0007479c) frm_month_g11

0x9022,	// (0x000747ac) frm_month_g12

0x9034,	// (0x000747be) frm_month_g13

0x9046,	// (0x000747d0) frm_month_g14

0x905a,	// (0x000747e4) frm_month_g15

0x906e,	// (0x000747f8) frm_month_g16

0x000f,

0xfe8b,	// (0x0007b615) frm_month_g

0xef8e,	// (0x0007a718) cell_top_day_name_pane_t1

0x9082,	// (0x0007480c) cell_area_left_week_number_pane_g1

0x908e,	// (0x00074818) cell_area_left_week_number_pane_t1

0xcfc4,	// (0x0007874e) cell_month_view_pane_g1

0x90a1,	// (0x0007482b) cell_month_view_pane_t1

0x93f8,	// (0x00074b82) main_fps_pane

0xe7a9,	// (0x00079f33) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a9,	// (0x00079f33) cmail_ddmenu_btn02_pane_cp1

0xe7c5,	// (0x00079f4f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c5,	// (0x00079f4f) cmail_ddmenu_btn02_pane_cp2

0x8792,	// (0x00073f1c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8792,	// (0x00073f1c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdfa,	// (0x0007b584) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdfa,	// (0x0007b584) cmail_ddmenu_btn02_pane_g

0x87b0,	// (0x00073f3a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87b0,	// (0x00073f3a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdff,	// (0x0007b589) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdff,	// (0x0007b589) cmail_ddmenu_btn02_pane_t

0x90b4,	// (0x0007483e) fps_text_pane_ParamLimits

0x90b4,	// (0x0007483e) fps_text_pane

0x90cb,	// (0x00074855) main_fps_pane_g1_ParamLimits

0x90cb,	// (0x00074855) main_fps_pane_g1

0x90e5,	// (0x0007486f) wait_bar_pane_cp010_ParamLimits

0x90e5,	// (0x0007486f) wait_bar_pane_cp010

0x90f6,	// (0x00074880) fps_text_pane_t1_ParamLimits

0x90f6,	// (0x00074880) fps_text_pane_t1

0xdb92,	// (0x0007931c) cam4_image_uncrop_pane_g1

0xdb9b,	// (0x00079325) cam4_image_uncrop_pane_g2

0x5a2c,	// (0x000711b6) cam4_image_uncrop_pane_g3

0x5a35,	// (0x000711bf) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0007b08b) cam4_image_uncrop_pane_g

0x8ebe,	// (0x00074648) dia3_listrow_pane_ParamLimits

0x93f8,	// (0x00074b82) main_phob2_pane

0x82e2,	// (0x00073a6c) cell_tport_appsw_pane_cp02_ParamLimits

0x82e2,	// (0x00073a6c) cell_tport_appsw_pane_cp02

0x82f6,	// (0x00073a80) cell_tport_appsw_pane_cp03_ParamLimits

0x82f6,	// (0x00073a80) cell_tport_appsw_pane_cp03

0x93f8,	// (0x00074b82) phob2_contact_card_pane

0x93f8,	// (0x00074b82) phob2_listscroll_pane

0xefa1,	// (0x0007a72b) phob2_list_pane

0xefa9,	// (0x0007a733) scroll_pane_cp034

0x910e,	// (0x00074898) phob2_cc_data_pane_ParamLimits

0x910e,	// (0x00074898) phob2_cc_data_pane

0x912d,	// (0x000748b7) phob2_cc_listscroll_pane_ParamLimits

0x912d,	// (0x000748b7) phob2_cc_listscroll_pane

0x8c7c,	// (0x00074406) list_double_large_graphic_phob2_pane_ParamLimits

0x8c7c,	// (0x00074406) list_double_large_graphic_phob2_pane

0x914b,	// (0x000748d5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x914b,	// (0x000748d5) list_double_large_graphic_phob2_pane_g1

0x9161,	// (0x000748eb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9161,	// (0x000748eb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeac,	// (0x0007b636) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeac,	// (0x0007b636) list_double_large_graphic_phob2_pane_g

0x916d,	// (0x000748f7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x916d,	// (0x000748f7) list_double_large_graphic_phob2_pane_t1

0x9183,	// (0x0007490d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9183,	// (0x0007490d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeb1,	// (0x0007b63b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeb1,	// (0x0007b63b) list_double_large_graphic_phob2_pane_t

0x93f8,	// (0x00074b82) list_highlight_pane_cp024

0x9198,	// (0x00074922) phob2_cc_button_pane

0x91a0,	// (0x0007492a) phob2_cc_data_pane_g1_ParamLimits

0x91a0,	// (0x0007492a) phob2_cc_data_pane_g1

0x91b5,	// (0x0007493f) phob2_cc_data_pane_g2_ParamLimits

0x91b5,	// (0x0007493f) phob2_cc_data_pane_g2

0x0001,

0xfeb6,	// (0x0007b640) phob2_cc_data_pane_g_ParamLimits

0xfeb6,	// (0x0007b640) phob2_cc_data_pane_g

0x91c5,	// (0x0007494f) phob2_cc_data_pane_t1_ParamLimits

0x91c5,	// (0x0007494f) phob2_cc_data_pane_t1

0x91dd,	// (0x00074967) phob2_cc_data_pane_t2_ParamLimits

0x91dd,	// (0x00074967) phob2_cc_data_pane_t2

0x91f5,	// (0x0007497f) phob2_cc_data_pane_t3_ParamLimits

0x91f5,	// (0x0007497f) phob2_cc_data_pane_t3

0x0002,

0xfebb,	// (0x0007b645) phob2_cc_data_pane_t_ParamLimits

0xfebb,	// (0x0007b645) phob2_cc_data_pane_t

0xefb1,	// (0x0007a73b) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0007a73b) phob2_cc_list_pane

0xdba4,	// (0x0007932e) scroll_pane_cp035_ParamLimits

0xdba4,	// (0x0007932e) scroll_pane_cp035

0xa0b6,	// (0x00075840) bg_button_pane_cp033

0xefbd,	// (0x0007a747) phob2_cc_button_pane_g1

0xefc9,	// (0x0007a753) phob2_cc_button_pane_t1

0xefde,	// (0x0007a768) phob2_cc_button_pane_t2

0x0001,

0x02d0,	// (0x0006ba5a) phob2_cc_button_pane_t

0x920d,	// (0x00074997) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x920d,	// (0x00074997) list_double_large_graphic_phob2_cc_pane

0x923f,	// (0x000749c9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x923f,	// (0x000749c9) list_double_large_graphic_phob2_cc_pane_g1

0x924b,	// (0x000749d5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x924b,	// (0x000749d5) list_double_large_graphic_phob2_cc_pane_g2

0x9257,	// (0x000749e1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9257,	// (0x000749e1) list_double_large_graphic_phob2_cc_pane_g3

0x9263,	// (0x000749ed) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9263,	// (0x000749ed) list_double_large_graphic_phob2_cc_pane_g4

0x926f,	// (0x000749f9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x926f,	// (0x000749f9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec2,	// (0x0007b64c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec2,	// (0x0007b64c) list_double_large_graphic_phob2_cc_pane_g

0x927b,	// (0x00074a05) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x927b,	// (0x00074a05) list_double_large_graphic_phob2_cc_pane_t1

0x92a4,	// (0x00074a2e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92a4,	// (0x00074a2e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecd,	// (0x0007b657) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecd,	// (0x0007b657) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0007a77a) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0007a77a) list_highlight_pane_cp025

0xa0b6,	// (0x00075840) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0007a747) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0007a753) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0007a768) phob2_cc_button_pane_t2_ParamLimits

0x02d0,	// (0x0006ba5a) phob2_cc_button_pane_t_ParamLimits

0x0624,	// (0x0006bdae) popup_wgtman_window

0xd82f,	// (0x00078fb9) scroll_pane_cp038

0x8bf5,	// (0x0007437f) wgtman_btn_pane_cp_01_ParamLimits

0x8bf5,	// (0x0007437f) wgtman_btn_pane_cp_01

0xeffe,	// (0x0007a788) wgtman_content_pane

0xf007,	// (0x0007a791) wgtman_heading_pane

0x93f8,	// (0x00074b82) bg_heading_pane_cp02

0xf010,	// (0x0007a79a) wgtman_heading_pane_g1

0xf018,	// (0x0007a7a2) wgtman_heading_pane_t1

0xf026,	// (0x0007a7b0) scroll_pane_cp036

0xf02e,	// (0x0007a7b8) wgtman_list_pane

0xe65c,	// (0x00079de6) wgtman_list_pane_t1_ParamLimits

0xe65c,	// (0x00079de6) wgtman_list_pane_t1

0x9aec,	// (0x00075276) cam4_grid_pane

0x66fc,	// (0x00071e86) bg_button_pane_cp015_ParamLimits

0x6710,	// (0x00071e9a) bg_button_pane_cp016_ParamLimits

0x6723,	// (0x00071ead) bg_button_pane_cp017_ParamLimits

0x677b,	// (0x00071f05) popup_vitu2_query_window_g3_ParamLimits

0x677b,	// (0x00071f05) popup_vitu2_query_window_g3

0x6838,	// (0x00071fc2) popup_vitu2_query_window_t6_ParamLimits

0x6838,	// (0x00071fc2) popup_vitu2_query_window_t6

0x6863,	// (0x00071fed) popup_vitu2_query_window_t7_ParamLimits

0x6863,	// (0x00071fed) popup_vitu2_query_window_t7

0xdb92,	// (0x0007931c) cam4_grid_pane_g1

0xdb9b,	// (0x00079325) cam4_grid_pane_g2

0xf036,	// (0x0007a7c0) cam4_grid_pane_g3

0xf03f,	// (0x0007a7c9) cam4_grid_pane_g4

0x0003,

0xfed2,	// (0x0007b65c) cam4_grid_pane_g

0x1557,	// (0x0006cce1) aid_placing_vt_slider_lsc_ParamLimits

0x1854,	// (0x0006cfde) vidtel_button_pane_ParamLimits

0x1854,	// (0x0006cfde) vidtel_button_pane

0x93f8,	// (0x00074b82) bg_button_pane_cp034

0xf04a,	// (0x0007a7d4) vidtel_button_pane_g1

0xf052,	// (0x0007a7dc) vidtel_button_pane_t1

0xd949,	// (0x000790d3) aid_size_vtel_slider_touch

0xdba4,	// (0x0007932e) scroll_pane_cp039

0x7644,	// (0x00072dce) ncim_query_button_pane_cp01_ParamLimits

0x7663,	// (0x00072ded) ncimui_query_pane_g1_ParamLimits

0xa0b6,	// (0x00075840) input_focus_pane_cp012_ParamLimits

0xe242,	// (0x000799cc) ncim_query_entry_pane_t1_ParamLimits

0xdba4,	// (0x0007932e) scroll_pane_cp039_ParamLimits

0xb3ba,	// (0x00076b44) navi_pane_bcale_mc_g1

0xb3c2,	// (0x00076b4c) navi_pane_bcale_mc_t1

0xe80e,	// (0x00079f98) main_sp_fs_email_pane_g1

0xe81a,	// (0x00079fa4) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0007b482) main_sp_fs_email_pane_g

0xea70,	// (0x0007a1fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea70,	// (0x0007a1fa) list_single_cale_mrui_row_pane_g3

0x87d0,	// (0x00073f5a) list_single_recal_day_pane_g5_event_pane

0xa574,	// (0x00075cfe) list_single_recal_day_pane_g7

0xf068,	// (0x0007a7f2) list_recal_day_event_pane_cp01

0xf071,	// (0x0007a7fb) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0007a803) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0007a80b) list_recal_vselct_pane_cp01

0xd96b,	// (0x000790f5) list_recal_day_event_pane_cp01_g1

0xa5d0,	// (0x00075d5a) list_recal_day_event_pane_cp01_t1

0xa57c,	// (0x00075d06) list_single_recal_day_pane_t1_ParamLimits

0xa58e,	// (0x00075d18) list_single_recal_day_pane_t2_ParamLimits

0xfe0f,	// (0x0007b599) list_single_recal_day_pane_t_ParamLimits

0xa81f,	// (0x00075fa9) bg_notes_pane_ParamLimits

0xa8ce,	// (0x00076058) list_notes_pane_ParamLimits

0x0965,	// (0x0006c0ef) scroll_pane_cp06_ParamLimits

0xa8f0,	// (0x0007607a) main_notes_pane_ParamLimits

0x93f8,	// (0x00074b82) main_welc_pane

0x92cd,	// (0x00074a57) main_welc_body_pane_ParamLimits

0x92cd,	// (0x00074a57) main_welc_body_pane

0x92ea,	// (0x00074a74) main_welc_opti_pane_ParamLimits

0x92ea,	// (0x00074a74) main_welc_opti_pane

0x932f,	// (0x00074ab9) main_welc_pane_t1_ParamLimits

0x932f,	// (0x00074ab9) main_welc_pane_t1

0x934d,	// (0x00074ad7) main_welc_body_row_pane_ParamLimits

0x934d,	// (0x00074ad7) main_welc_body_row_pane

0xe466,	// (0x00079bf0) main_welc_opti_row_pane_ParamLimits

0xe466,	// (0x00079bf0) main_welc_opti_row_pane

0xf08b,	// (0x0007a815) main_welc_opti_row_pane_g1

0x9362,	// (0x00074aec) main_welc_opti_row_pane_t1

0xf093,	// (0x0007a81d) main_welc_body_row_pane_t1

0xedc3,	// (0x0007a54d) popup_notif_wgt_heading_pane

0xeddd,	// (0x0007a567) aid_size_list_notif_wgt_del_ParamLimits

0xedea,	// (0x0007a574) list_notif_wgt_row_pane_g1_ParamLimits

0xedf6,	// (0x0007a580) list_notif_wgt_row_pane_g2_ParamLimits

0xee05,	// (0x0007a58f) list_notif_wgt_row_pane_g3_ParamLimits

0x023a,	// (0x0006b9c4) list_notif_wgt_row_pane_g_ParamLimits

0xee12,	// (0x0007a59c) list_notif_wgt_row_pane_t1_ParamLimits

0xee28,	// (0x0007a5b2) list_notif_wgt_row_pane_t2_ParamLimits

0xee3a,	// (0x0007a5c4) list_notif_wgt_row_pane_t3_ParamLimits

0x0241,	// (0x0006b9cb) list_notif_wgt_row_pane_t_ParamLimits

0x8c8e,	// (0x00074418) listrow_wgtman_pane_g1_ParamLimits

0x8c9b,	// (0x00074425) listrow_wgtman_pane_g2_ParamLimits

0xfe65,	// (0x0007b5ef) listrow_wgtman_pane_g_ParamLimits

0x8cb9,	// (0x00074443) listrow_wgtman_pane_t1_ParamLimits

0x8cd1,	// (0x0007445b) listrow_wgtman_pane_t2_ParamLimits

0xfe6a,	// (0x0007b5f4) listrow_wgtman_pane_t_ParamLimits

0x8cf7,	// (0x00074481) wait_bar_pane_cp09_ParamLimits

0x93f8,	// (0x00074b82) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0007a82c) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0007a834) popup_notif_wgt_heading_pane_t1

0x93f8,	// (0x00074b82) main_vids_pane

0x93f8,	// (0x00074b82) vids_listscroll_pane

0x9371,	// (0x00074afb) scroll_pane_cp040

0x93f8,	// (0x00074b82) vids_list_pane

0x937c,	// (0x00074b06) vids_list_double_pane_ParamLimits

0x937c,	// (0x00074b06) vids_list_double_pane

0x938d,	// (0x00074b17) vids_list_double_pane_g1

0x9396,	// (0x00074b20) vids_list_double_pane_t1

0x93a6,	// (0x00074b30) vids_list_double_pane_t2

0x0001,

0xfee0,	// (0x0007b66a) vids_list_double_pane_t

0x9460,	// (0x00074bea) main_ncimui_pane_ParamLimits

0x747a,	// (0x00072c04) main_ncimui_pane_g1_ParamLimits

0x7486,	// (0x00072c10) main_ncimui_pane_g2_ParamLimits

0x7486,	// (0x00072c10) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0007b387) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0007b387) main_ncimui_pane_g

0x9305,	// (0x00074a8f) main_welc_pane_g1_ParamLimits

0x9305,	// (0x00074a8f) main_welc_pane_g1

0x931a,	// (0x00074aa4) main_welc_pane_g2_ParamLimits

0x931a,	// (0x00074aa4) main_welc_pane_g2

0x0001,

0xfedb,	// (0x0007b665) main_welc_pane_g_ParamLimits

0xfedb,	// (0x0007b665) main_welc_pane_g

0xa81f,	// (0x00075fa9) listscroll_mce_pane_ParamLimits

0xb50f,	// (0x00076c99) wait_bar_pane_cp10

0xc956,	// (0x000780e0) main_cale_day_pane_ParamLimits

0xc956,	// (0x000780e0) main_cale_week_pane_ParamLimits

0xa81f,	// (0x00075fa9) main_messa_pane_ParamLimits

0x4cca,	// (0x00070454) main_clock2_btn_pane_ParamLimits

0x4cca,	// (0x00070454) main_clock2_btn_pane

0xd14c,	// (0x000788d6) main_clock2_btn_pane_cp01_ParamLimits

0xd14c,	// (0x000788d6) main_clock2_btn_pane_cp01

0xea41,	// (0x0007a1cb) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x0007a5fa) main_cf0_pane_g2

0x0001,

0x0248,	// (0x0006b9d2) main_cf0_pane_g

0x8ee0,	// (0x0007466a) area_left_week_number_pane_ParamLimits

0x8eec,	// (0x00074676) area_top_day_name_pane_ParamLimits

0x8eff,	// (0x00074689) frame_month_view_pane_ParamLimits

0xef66,	// (0x0007a6f0) grid_month_view_pane_ParamLimits

0xef74,	// (0x0007a6fe) frm_month_g1_ParamLimits

0x8f80,	// (0x0007470a) frm_month_g2_ParamLimits

0x8f93,	// (0x0007471d) frm_month_g3_ParamLimits

0x8fa6,	// (0x00074730) frm_month_g4_ParamLimits

0x8fb9,	// (0x00074743) frm_month_g5_ParamLimits

0x8fcc,	// (0x00074756) frm_month_g6_ParamLimits

0x8fdf,	// (0x00074769) frm_month_g7_ParamLimits

0xef81,	// (0x0007a70b) frm_month_g8_ParamLimits

0x8ff2,	// (0x0007477c) frm_month_g9_ParamLimits

0x9002,	// (0x0007478c) frm_month_g10_ParamLimits

0x9012,	// (0x0007479c) frm_month_g11_ParamLimits

0x9022,	// (0x000747ac) frm_month_g12_ParamLimits

0x9034,	// (0x000747be) frm_month_g13_ParamLimits

0x9046,	// (0x000747d0) frm_month_g14_ParamLimits

0x905a,	// (0x000747e4) frm_month_g15_ParamLimits

0x906e,	// (0x000747f8) frm_month_g16_ParamLimits

0xfe8b,	// (0x0007b615) frm_month_g_ParamLimits

0xef8e,	// (0x0007a718) cell_top_day_name_pane_t1_ParamLimits

0x9082,	// (0x0007480c) cell_area_left_week_number_pane_g1_ParamLimits

0x908e,	// (0x00074818) cell_area_left_week_number_pane_t1_ParamLimits

0xcfc4,	// (0x0007874e) cell_month_view_pane_g1_ParamLimits

0x90a1,	// (0x0007482b) cell_month_view_pane_t1_ParamLimits

0xa817,	// (0x00075fa1) main_clock2_btn_pane_g1

0xf0b8,	// (0x0007a842) main_clock2_btn_pane_t1

0xa0b6,	// (0x00075840) listscroll_cmail_pane_ParamLimits

0xe80e,	// (0x00079f98) main_sp_fs_email_pane_g1_ParamLimits

0xe81a,	// (0x00079fa4) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0007b482) main_sp_fs_email_pane_g_ParamLimits

0xeb4f,	// (0x0007a2d9) list_recal_day_pane_ParamLimits

0xeb60,	// (0x0007a2ea) mian_recal_day_pane_t1

0x7f47,	// (0x000736d1) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f47,	// (0x000736d1) list_single_dyc_row_text_pane_t4

0x7f90,	// (0x0007371a) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f90,	// (0x0007371a) list_single_dyc_row_text_pane_t5

0xa2ea,	// (0x00075a74) list_single_dyc_row_text_pane_t6_ParamLimits

0xa2ea,	// (0x00075a74) list_single_dyc_row_text_pane_t6

0x2302,	// (0x0006da8c) aid_mgn_list_cale_time_pane

0x9460,	// (0x00074bea) main_gallery2_pane_ParamLimits

0xd162,	// (0x000788ec) main_clock2_pane_cp01_t1

0xd170,	// (0x000788fa) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0007af5d) main_clock2_pane_cp01_t

0x0cf0,	// (0x0006c47a) cale_week_scroll_pane_g16_ParamLimits

0x0cf0,	// (0x0006c47a) cale_week_scroll_pane_g16

0xaadc,	// (0x00076266) vorec_slider_pane

0xf052,	// (0x0007a7dc) vidtel_button_pane_t1_ParamLimits

0x8836,	// (0x00073fc0) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8836,	// (0x00073fc0) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8847,	// (0x00073fd1) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8847,	// (0x00073fd1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe23,	// (0x0007b5ad) main_fs_bigclock_clock_pane_g_ParamLimits

0x885a,	// (0x00073fe4) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8870,	// (0x00073ffa) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe2c,	// (0x0007b5b6) main_fs_bigclock_clock_pane_t_ParamLimits

0x44c8,	// (0x0006fc52) main_mup3_lyrics_pane_ParamLimits

0x44c8,	// (0x0006fc52) main_mup3_lyrics_pane

0x93dc,	// (0x00074b66) main_mup3_lyrics_pane_t1_ParamLimits

0x93dc,	// (0x00074b66) main_mup3_lyrics_pane_t1

0x983e,	// (0x00074fc8) aid_main_mp4_pane_t1_area

0x9848,	// (0x00074fd2) aid_main_mp4_pane_t2_area

0x98f4,	// (0x0007507e) main_mp4_pane_g7_ParamLimits

0x98f4,	// (0x0007507e) main_mp4_pane_g7

0x9900,	// (0x0007508a) main_mp4_pane_g8_ParamLimits

0x9900,	// (0x0007508a) main_mp4_pane_g8

0x57fb,	// (0x00070f85) aid_call6_pane_g1_size

0x9228,	// (0x000749b2) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9228,	// (0x000749b2) list_double_large_graphic_phob2_other_pane

0xb2eb,	// (0x00076a75) list_double_large_graphic_phob2_other_pane_g1

0x93f8,	// (0x00074b82) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
