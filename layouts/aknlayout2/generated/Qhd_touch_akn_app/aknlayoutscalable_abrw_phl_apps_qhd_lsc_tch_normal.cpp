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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002b894 };

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
0x1acb,	// (0x0002d35f) Screen

0x1ad7,	// (0x0002d36b) application_window

0x1ae3,	// (0x0002d377) area_bottom_pane_ParamLimits

0x1ae3,	// (0x0002d377) area_bottom_pane

0x038c,	// (0x0002bc20) area_top_pane_ParamLimits

0x038c,	// (0x0002bc20) area_top_pane

0xb466,	// (0x00036cfa) call_video_uplink_pane_ParamLimits

0xb466,	// (0x00036cfa) call_video_uplink_pane

0x041a,	// (0x0002bcae) main_pane_ParamLimits

0x041a,	// (0x0002bcae) main_pane

0xe2b2,	// (0x00039b46) context_pane

0x4acc,	// (0x00030360) navi_pane

0x4af4,	// (0x00030388) popup_cale_events_window_ParamLimits

0x4af4,	// (0x00030388) popup_cale_events_window

0xe2c5,	// (0x00039b59) popup_mup_playback_window

0x4b0c,	// (0x000303a0) signal_pane

0xc2e2,	// (0x00037b76) main_browser_pane

0xce26,	// (0x000386ba) main_burst_pane

0x087c,	// (0x0002c110) main_calc_pane

0xe298,	// (0x00039b2c) main_cale_day_pane

0x0890,	// (0x0002c124) main_cale_month_pane

0xe298,	// (0x00039b2c) main_cale_week_pane

0xce26,	// (0x000386ba) main_call_pane

0xbfc2,	// (0x00037856) main_call_poc_pane

0xce26,	// (0x000386ba) main_camera_pane

0xce26,	// (0x000386ba) main_chi_dic_pane

0xcc9b,	// (0x0003852f) main_clock_pane

0xbfc2,	// (0x00037856) main_fmradio_pane

0xce26,	// (0x000386ba) main_graph_messa_pane

0xbfc2,	// (0x00037856) main_help_pane

0xc2e2,	// (0x00037b76) main_im_pane

0xc21d,	// (0x00037ab1) main_image_pane_ParamLimits

0xc21d,	// (0x00037ab1) main_image_pane

0xbfc2,	// (0x00037856) main_location2_pane

0xce26,	// (0x000386ba) main_location_pane

0xc21d,	// (0x00037ab1) main_messa_pane

0xbfc2,	// (0x00037856) main_mp2_pane

0xce26,	// (0x000386ba) main_mp_pane

0xbfc2,	// (0x00037856) main_msg_pane

0xbfc2,	// (0x00037856) main_mup_eq_pane

0xbfc2,	// (0x00037856) main_mup_pane

0xc2e2,	// (0x00037b76) main_notes_pane

0xbfc2,	// (0x00037856) main_pec_pane

0xbfc2,	// (0x00037856) main_phob_pane

0xbfc2,	// (0x00037856) main_pinb_pane

0xbfc2,	// (0x00037856) main_postcard_pane

0xbfc2,	// (0x00037856) main_qdial_pane

0xce26,	// (0x000386ba) main_skin_pane

0xbfc2,	// (0x00037856) main_smil2_pane

0xce26,	// (0x000386ba) main_smil_pane

0xce26,	// (0x000386ba) main_video_pane

0xce26,	// (0x000386ba) main_video_tele_pane

0xc21d,	// (0x00037ab1) main_viewer_pane_ParamLimits

0xc21d,	// (0x00037ab1) main_viewer_pane

0xce26,	// (0x000386ba) main_vorec_pane

0x08e2,	// (0x0002c176) popup_blid_sat_info_window_ParamLimits

0x08e2,	// (0x0002c176) popup_blid_sat_info_window

0x093a,	// (0x0002c1ce) popup_dyc_status_message_window_ParamLimits

0x093a,	// (0x0002c1ce) popup_dyc_status_message_window

0x0954,	// (0x0002c1e8) popup_grid_large_graphic_window_ParamLimits

0x0954,	// (0x0002c1e8) popup_grid_large_graphic_window

0x0a10,	// (0x0002c2a4) popup_loc_request_window_ParamLimits

0x0a10,	// (0x0002c2a4) popup_loc_request_window

0x0b06,	// (0x0002c39a) popup_wml_address_window_ParamLimits

0x0b06,	// (0x0002c39a) popup_wml_address_window

0x4910,	// (0x000301a4) call_muted_g1

0x45c5,	// (0x0002fe59) popup_call_audio_conf_window_ParamLimits

0x45c5,	// (0x0002fe59) popup_call_audio_conf_window

0x4924,	// (0x000301b8) popup_call_audio_first_window_ParamLimits

0x4924,	// (0x000301b8) popup_call_audio_first_window

0x499a,	// (0x0003022e) popup_call_audio_in_window_ParamLimits

0x499a,	// (0x0003022e) popup_call_audio_in_window

0x49d6,	// (0x0003026a) popup_call_audio_out_window_ParamLimits

0x49d6,	// (0x0003026a) popup_call_audio_out_window

0x4a10,	// (0x000302a4) popup_call_audio_second_window_ParamLimits

0x4a10,	// (0x000302a4) popup_call_audio_second_window

0x4a66,	// (0x000302fa) popup_call_audio_wait_window_ParamLimits

0x4a66,	// (0x000302fa) popup_call_audio_wait_window

0x4a9b,	// (0x0003032f) popup_number_entry_window_ParamLimits

0x4a9b,	// (0x0003032f) popup_number_entry_window

0xb49c,	// (0x00036d30) bg_popup_call_pane_cp05_ParamLimits

0xb49c,	// (0x00036d30) bg_popup_call_pane_cp05

0xb4bc,	// (0x00036d50) popup_number_entry_window_t1

0xb4cf,	// (0x00036d63) popup_number_entry_window_t2

0xb4e1,	// (0x00036d75) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0003a967) popup_number_entry_window_t

0xb4f3,	// (0x00036d87) text_title_cp2

0xb506,	// (0x00036d9a) bg_popup_call_pane_cp_ParamLimits

0xb506,	// (0x00036d9a) bg_popup_call_pane_cp

0xb514,	// (0x00036da8) call_thumbnail_pane

0xb51c,	// (0x00036db0) popup_call_audio_in_window_g1_ParamLimits

0xb51c,	// (0x00036db0) popup_call_audio_in_window_g1

0xb528,	// (0x00036dbc) popup_call_audio_in_window_g2_ParamLimits

0xb528,	// (0x00036dbc) popup_call_audio_in_window_g2

0xb534,	// (0x00036dc8) popup_call_audio_in_window_g3_ParamLimits

0xb534,	// (0x00036dc8) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0003a970) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0003a970) popup_call_audio_in_window_g

0xb540,	// (0x00036dd4) popup_call_audio_in_window_t1_ParamLimits

0xb540,	// (0x00036dd4) popup_call_audio_in_window_t1

0xb55c,	// (0x00036df0) popup_call_audio_in_window_t2_ParamLimits

0xb55c,	// (0x00036df0) popup_call_audio_in_window_t2

0xb578,	// (0x00036e0c) popup_call_audio_in_window_t3_ParamLimits

0xb578,	// (0x00036e0c) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0003a977) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0003a977) popup_call_audio_in_window_t

0xb506,	// (0x00036d9a) bg_popup_call_pane_cp01_ParamLimits

0xb506,	// (0x00036d9a) bg_popup_call_pane_cp01

0xb514,	// (0x00036da8) call_thumbnail_pane_cp02

0xb58b,	// (0x00036e1f) call_type_pane_cp022

0xb593,	// (0x00036e27) popup_call_audio_out_window_g1_ParamLimits

0xb593,	// (0x00036e27) popup_call_audio_out_window_g1

0xb5a5,	// (0x00036e39) popup_call_audio_out_window_g2_ParamLimits

0xb5a5,	// (0x00036e39) popup_call_audio_out_window_g2

0xb5b1,	// (0x00036e45) popup_call_audio_out_window_g3_ParamLimits

0xb5b1,	// (0x00036e45) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0003a97e) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0003a97e) popup_call_audio_out_window_g

0xb5c3,	// (0x00036e57) popup_call_audio_out_window_t1_ParamLimits

0xb5c3,	// (0x00036e57) popup_call_audio_out_window_t1

0xb5db,	// (0x00036e6f) popup_call_audio_out_window_t2_ParamLimits

0xb5db,	// (0x00036e6f) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0003a985) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0003a985) popup_call_audio_out_window_t

0xb5f0,	// (0x00036e84) bg_popup_call_pane_ParamLimits

0xb5f0,	// (0x00036e84) bg_popup_call_pane

0x1b5c,	// (0x0002d3f0) call_thumbnail_pane_cp_ParamLimits

0x1b5c,	// (0x0002d3f0) call_thumbnail_pane_cp

0xb674,	// (0x00036f08) call_type_pane_cp01_ParamLimits

0xb674,	// (0x00036f08) call_type_pane_cp01

0xb6b8,	// (0x00036f4c) popup_call_audio_first_window_g1_ParamLimits

0xb6b8,	// (0x00036f4c) popup_call_audio_first_window_g1

0xb704,	// (0x00036f98) popup_call_audio_first_window_g2_ParamLimits

0xb704,	// (0x00036f98) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0003a98a) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0003a98a) popup_call_audio_first_window_g

0xb748,	// (0x00036fdc) popup_call_audio_first_window_t1_ParamLimits

0xb748,	// (0x00036fdc) popup_call_audio_first_window_t1

0xb7f4,	// (0x00037088) popup_call_audio_first_window_t4_ParamLimits

0xb7f4,	// (0x00037088) popup_call_audio_first_window_t4

0xbf93,	// (0x00037827) popup_call_audio_first_window_t5_ParamLimits

0xbf93,	// (0x00037827) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0003a98f) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0003a98f) popup_call_audio_first_window_t

0xbfc2,	// (0x00037856) bg_popup_call_pane_cp02

0xbfcc,	// (0x00037860) call_type_pane_cp023

0xbfd4,	// (0x00037868) popup_call_audio_wait_window_g1

0xbfdc,	// (0x00037870) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0003a996) popup_call_audio_wait_window_g

0xbfe4,	// (0x00037878) popup_call_audio_wait_window_t3

0xbff2,	// (0x00037886) bg_popup_call_pane_cp03_ParamLimits

0xbff2,	// (0x00037886) bg_popup_call_pane_cp03

0xc052,	// (0x000378e6) call_thumbnail_pane_cp011_ParamLimits

0xc052,	// (0x000378e6) call_thumbnail_pane_cp011

0xc05e,	// (0x000378f2) call_type_pane_cp034_ParamLimits

0xc05e,	// (0x000378f2) call_type_pane_cp034

0xc09a,	// (0x0003792e) popup_call_audio_second_window_g1_ParamLimits

0xc09a,	// (0x0003792e) popup_call_audio_second_window_g1

0xc0d6,	// (0x0003796a) popup_call_audio_second_window_g2_ParamLimits

0xc0d6,	// (0x0003796a) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0003a99b) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0003a99b) popup_call_audio_second_window_g

0xc112,	// (0x000379a6) popup_call_audio_second_window_t1_ParamLimits

0xc112,	// (0x000379a6) popup_call_audio_second_window_t1

0xc193,	// (0x00037a27) popup_call_audio_second_window_t2_ParamLimits

0xc193,	// (0x00037a27) popup_call_audio_second_window_t2

0xc1c9,	// (0x00037a5d) popup_call_audio_second_window_t3_ParamLimits

0xc1c9,	// (0x00037a5d) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0003a9a0) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0003a9a0) popup_call_audio_second_window_t

0xbfc2,	// (0x00037856) bg_popup_call_pane_cp04

0xc1ff,	// (0x00037a93) list_conf_pane

0xc207,	// (0x00037a9b) popup_call_audio_conf_window_t1

0xc215,	// (0x00037aa9) call_thumbnail_pane_g1

0xc21d,	// (0x00037ab1) bg_pinb_pane_ParamLimits

0xc21d,	// (0x00037ab1) bg_pinb_pane

0xc22b,	// (0x00037abf) find_pinb_pane

0xc234,	// (0x00037ac8) listscroll_pinb_pane_ParamLimits

0xc234,	// (0x00037ac8) listscroll_pinb_pane

0xc243,	// (0x00037ad7) pinb_bg_pane_g1

0x1b80,	// (0x0002d414) pinb_bg_pane_g2

0x1b8c,	// (0x0002d420) pinb_bg_pane_g3

0x1b98,	// (0x0002d42c) pinb_bg_pane_g4

0x1ba4,	// (0x0002d438) pinb_bg_pane_g5

0x1bb0,	// (0x0002d444) pinb_bg_pane_g6

0x1bbb,	// (0x0002d44f) pinb_bg_pane_g7

0x1bc6,	// (0x0002d45a) pinb_bg_pane_g8

0x1bd1,	// (0x0002d465) pinb_bg_pane_g9

0x1bdb,	// (0x0002d46f) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0003a9a7) pinb_bg_pane_g

0x1bf8,	// (0x0002d48c) grid_pinb_pane

0x1c01,	// (0x0002d495) list_pinb_pane

0x1c0a,	// (0x0002d49e) scroll_pane_cp01_ParamLimits

0x1c0a,	// (0x0002d49e) scroll_pane_cp01

0xc24d,	// (0x00037ae1) find_pinb_pane_g1_ParamLimits

0xc24d,	// (0x00037ae1) find_pinb_pane_g1

0xc265,	// (0x00037af9) find_pinb_pane_t1

0xc277,	// (0x00037b0b) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0003a9c1) find_pinb_pane_t

0xc28c,	// (0x00037b20) input_focus_pane_cp01_ParamLimits

0xc28c,	// (0x00037b20) input_focus_pane_cp01

0x1c1c,	// (0x0002d4b0) cell_pinb_pane_ParamLimits

0x1c1c,	// (0x0002d4b0) cell_pinb_pane

0x1c45,	// (0x0002d4d9) cell_pinb_pane_g1_ParamLimits

0x1c45,	// (0x0002d4d9) cell_pinb_pane_g1

0x1c55,	// (0x0002d4e9) cell_pinb_pane_g2_ParamLimits

0x1c55,	// (0x0002d4e9) cell_pinb_pane_g2

0xc298,	// (0x00037b2c) cell_pinb_pane_g3_ParamLimits

0xc298,	// (0x00037b2c) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0003a9c6) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0003a9c6) cell_pinb_pane_g

0xbfc2,	// (0x00037856) grid_highlight_pane_cp01

0x1c61,	// (0x0002d4f5) list_pinb_item_pane_ParamLimits

0x1c61,	// (0x0002d4f5) list_pinb_item_pane

0xbfc2,	// (0x00037856) list_highlight_pane_cp02

0x1c73,	// (0x0002d507) list_pinb_item_pane_g1_ParamLimits

0x1c73,	// (0x0002d507) list_pinb_item_pane_g1

0x1c80,	// (0x0002d514) list_pinb_item_pane_g2_ParamLimits

0x1c80,	// (0x0002d514) list_pinb_item_pane_g2

0x1c8c,	// (0x0002d520) list_pinb_item_pane_g3_ParamLimits

0x1c8c,	// (0x0002d520) list_pinb_item_pane_g3

0x1c9d,	// (0x0002d531) list_pinb_item_pane_g4_ParamLimits

0x1c9d,	// (0x0002d531) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0003a9cd) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0003a9cd) list_pinb_item_pane_g

0x1ca9,	// (0x0002d53d) list_pinb_item_pane_t1_ParamLimits

0x1ca9,	// (0x0002d53d) list_pinb_item_pane_t1

0x05b4,	// (0x0002be48) calc_display_pane

0x05dc,	// (0x0002be70) calc_paper_pane

0x05ff,	// (0x0002be93) grid_calc_pane

0xbfc2,	// (0x00037856) bg_list_pane_cp01

0x1cc0,	// (0x0002d554) clock_g1

0x1cc8,	// (0x0002d55c) clock_g2

0x0001,

0xf142,	// (0x0003a9d6) clock_g

0x1cd0,	// (0x0002d564) clock_t1_ParamLimits

0x1cd0,	// (0x0002d564) clock_t1

0x1ce5,	// (0x0002d579) clock_t2_ParamLimits

0x1ce5,	// (0x0002d579) clock_t2

0x1cf7,	// (0x0002d58b) clock_t3_ParamLimits

0x1cf7,	// (0x0002d58b) clock_t3

0x1d09,	// (0x0002d59d) clock_t4_ParamLimits

0x1d09,	// (0x0002d59d) clock_t4

0x1d1b,	// (0x0002d5af) clock_t5_ParamLimits

0x1d1b,	// (0x0002d5af) clock_t5

0x1d30,	// (0x0002d5c4) clock_t6_ParamLimits

0x1d30,	// (0x0002d5c4) clock_t6

0x1d42,	// (0x0002d5d6) clock_t7_ParamLimits

0x1d42,	// (0x0002d5d6) clock_t7

0x1d54,	// (0x0002d5e8) clock_t8_ParamLimits

0x1d54,	// (0x0002d5e8) clock_t8

0x1d68,	// (0x0002d5fc) clock_t9_ParamLimits

0x1d68,	// (0x0002d5fc) clock_t9

0x0008,

0xf147,	// (0x0003a9db) clock_t_ParamLimits

0xf147,	// (0x0003a9db) clock_t

0xc2a4,	// (0x00037b38) popup_clock_analogue_window_cp02

0xc2a4,	// (0x00037b38) popup_clock_digital_window_cp01

0xc2ac,	// (0x00037b40) listscroll_help_pane

0xbfc2,	// (0x00037856) phob_pre_status_pane

0xc2b6,	// (0x00037b4a) grid_qdial_pane

0xc21d,	// (0x00037ab1) listscroll_mce_pane

0xc21d,	// (0x00037ab1) bg_notes_pane

0xc2c0,	// (0x00037b54) list_notes_pane

0x1d7c,	// (0x0002d610) scroll_pane_cp06

0xc2ce,	// (0x00037b62) bg_calc_paper_pane

0xb888,	// (0x0003711c) list_calc_pane

0xc2e2,	// (0x00037b76) bg_calc_display_pane

0x062d,	// (0x0002bec1) calc_display_pane_t1

0x063f,	// (0x0002bed3) calc_display_pane_t2

0xb8a2,	// (0x00037136) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0003a9ee) calc_display_pane_t

0x0651,	// (0x0002bee5) cell_calc_pane_ParamLimits

0x0651,	// (0x0002bee5) cell_calc_pane

0xc2ee,	// (0x00037b82) bg_calc_paper_pane_g1

0xc2fa,	// (0x00037b8e) bg_calc_paper_pane_g2

0xc306,	// (0x00037b9a) bg_calc_paper_pane_g3

0xc312,	// (0x00037ba6) bg_calc_paper_pane_g4

0xc31e,	// (0x00037bb2) bg_calc_paper_pane_g5

0x1d90,	// (0x0002d624) bg_calc_paper_pane_g6

0x1d9f,	// (0x0002d633) bg_calc_paper_pane_g7

0x1dae,	// (0x0002d642) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0003a9f5) bg_calc_paper_pane_g

0x1dc1,	// (0x0002d655) calc_bg_paper_pane_g9

0x1dd4,	// (0x0002d668) list_calc_item_pane_ParamLimits

0x1dd4,	// (0x0002d668) list_calc_item_pane

0xc32a,	// (0x00037bbe) list_calc_item_pane_g1

0xb8b4,	// (0x00037148) list_calc_item_pane_t1_ParamLimits

0xb8b4,	// (0x00037148) list_calc_item_pane_t1

0x0686,	// (0x0002bf1a) list_calc_item_pane_t2_ParamLimits

0x0686,	// (0x0002bf1a) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0003aa06) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0003aa06) list_calc_item_pane_t

0xc337,	// (0x00037bcb) cell_calc_pane_g1

0xc341,	// (0x00037bd5) grid_highlight_pane_cp02

0x1de9,	// (0x0002d67d) bg_calc_display_pane_g1

0x06b8,	// (0x0002bf4c) bg_calc_display_pane_g2

0x1df2,	// (0x0002d686) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0003aa10) bg_calc_display_pane_g

0x06c2,	// (0x0002bf56) cell_qdial_pane_ParamLimits

0x06c2,	// (0x0002bf56) cell_qdial_pane

0x1dfb,	// (0x0002d68f) cell_qdial_pane_g1_ParamLimits

0x1dfb,	// (0x0002d68f) cell_qdial_pane_g1

0x1e11,	// (0x0002d6a5) cell_qdial_pane_g2_ParamLimits

0x1e11,	// (0x0002d6a5) cell_qdial_pane_g2

0xc363,	// (0x00037bf7) cell_qdial_pane_g3_ParamLimits

0xc363,	// (0x00037bf7) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0003aa17) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0003aa17) cell_qdial_pane_g

0x1e38,	// (0x0002d6cc) cell_qdial_pane_t1_ParamLimits

0x1e38,	// (0x0002d6cc) cell_qdial_pane_t1

0x1e50,	// (0x0002d6e4) cell_qdial_pane_t2_ParamLimits

0x1e50,	// (0x0002d6e4) cell_qdial_pane_t2

0x1e63,	// (0x0002d6f7) cell_qdial_pane_t3_ParamLimits

0x1e63,	// (0x0002d6f7) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0003aa20) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0003aa20) cell_qdial_pane_t

0xbfc2,	// (0x00037856) grid_highlight_pane_cp04

0xc36f,	// (0x00037c03) thumbnail_qdial_pane_ParamLimits

0xc36f,	// (0x00037c03) thumbnail_qdial_pane

0xc3cb,	// (0x00037c5f) list_help_pane

0xc3d4,	// (0x00037c68) scroll_pane_cp02

0x1e76,	// (0x0002d70a) help_list_pane_t1_ParamLimits

0x1e76,	// (0x0002d70a) help_list_pane_t1

0xb8c6,	// (0x0003715a) bg_notes_pane_g2

0xb8ce,	// (0x00037162) bg_notes_pane_g3

0xb8d6,	// (0x0003716a) notes_bg_pane_g1

0xb8de,	// (0x00037172) notes_bg_pane_g4

0xb8e6,	// (0x0003717a) notes_bg_pane_g5

0xb8ee,	// (0x00037182) notes_bg_pane_g6

0xb8f6,	// (0x0003718a) notes_bg_pane_g7

0xb8fe,	// (0x00037192) notes_bg_pane_g8

0xb906,	// (0x0003719a) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0003aa3e) notes_bg_pane_g

0x1e93,	// (0x0002d727) list_notes_text_pane_ParamLimits

0x1e93,	// (0x0002d727) list_notes_text_pane

0xc3dd,	// (0x00037c71) list_notes_text_pane_g1

0x1ea8,	// (0x0002d73c) list_notes_text_pane_t1

0x1eb6,	// (0x0002d74a) listscroll_cale_week_pane

0x1ee2,	// (0x0002d776) bg_cale_heading_pane

0xc400,	// (0x00037c94) bg_cale_pane_cp01

0x1efa,	// (0x0002d78e) cale_week_corner_pane

0x1f19,	// (0x0002d7ad) cale_week_day_heading_pane

0x1f36,	// (0x0002d7ca) cale_week_scroll_pane_g1

0x1f49,	// (0x0002d7dd) cale_week_scroll_pane_g2

0x1f61,	// (0x0002d7f5) cale_week_scroll_pane_g3

0x1f79,	// (0x0002d80d) cale_week_scroll_pane_g4

0x1f91,	// (0x0002d825) cale_week_scroll_pane_g5

0x1fb1,	// (0x0002d845) cale_week_scroll_pane_g6

0x1fd1,	// (0x0002d865) cale_week_scroll_pane_g7

0x1ff1,	// (0x0002d885) cale_week_scroll_pane_g8

0x2015,	// (0x0002d8a9) cale_week_scroll_pane_g9

0x202d,	// (0x0002d8c1) cale_week_scroll_pane_g10

0x2045,	// (0x0002d8d9) cale_week_scroll_pane_g11

0x205d,	// (0x0002d8f1) cale_week_scroll_pane_g12

0x2075,	// (0x0002d909) cale_week_scroll_pane_g13

0x2075,	// (0x0002d909) cale_week_scroll_pane_g14

0x2075,	// (0x0002d909) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0003aa4d) cale_week_scroll_pane_g

0x208d,	// (0x0002d921) cale_week_time_pane

0x20b1,	// (0x0002d945) grid_cale_week_pane

0xc430,	// (0x00037cc4) scroll_pane_cp08

0x20d7,	// (0x0002d96b) cell_cale_week_pane_ParamLimits

0x20d7,	// (0x0002d96b) cell_cale_week_pane

0x2165,	// (0x0002d9f9) cale_week_day_heading_pane_t1

0x21aa,	// (0x0002da3e) cale_week_day_heading_pane_t2

0x21f4,	// (0x0002da88) cale_week_day_heading_pane_t3

0x223e,	// (0x0002dad2) cale_week_day_heading_pane_t4

0x2288,	// (0x0002db1c) cale_week_day_heading_pane_t5

0x22da,	// (0x0002db6e) cale_week_day_heading_pane_t6

0x232c,	// (0x0002dbc0) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0003aa6c) cale_week_day_heading_pane_t

0xc44d,	// (0x00037ce1) bg_cale_side_pane

0x06d6,	// (0x0002bf6a) cale_week_time_pane_t1

0x06f0,	// (0x0002bf84) cale_week_time_pane_t2

0x070a,	// (0x0002bf9e) cale_week_time_pane_t3

0x0724,	// (0x0002bfb8) cale_week_time_pane_t4

0x073e,	// (0x0002bfd2) cale_week_time_pane_t5

0x0758,	// (0x0002bfec) cale_week_time_pane_t6

0x0772,	// (0x0002c006) cale_week_time_pane_t7

0x078c,	// (0x0002c020) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0003aa7b) cale_week_time_pane_t

0x2371,	// (0x0002dc05) cell_cale_week_pane_g2

0x2390,	// (0x0002dc24) cell_cale_week_pane_g3_ParamLimits

0x2390,	// (0x0002dc24) cell_cale_week_pane_g3

0xc45b,	// (0x00037cef) grid_highlight_pane_cp07

0xc463,	// (0x00037cf7) listscroll_gms_pane

0xc46d,	// (0x00037d01) grid_gms_pane

0xc476,	// (0x00037d0a) listscroll_gms_pane_g1

0xc47e,	// (0x00037d12) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0003aa8c) listscroll_gms_pane_g

0x23a8,	// (0x0002dc3c) scroll_pane_cp010

0x23b3,	// (0x0002dc47) cell_gms_pane_ParamLimits

0x23b3,	// (0x0002dc47) cell_gms_pane

0x23c6,	// (0x0002dc5a) cell_gms_pane_g1

0xc486,	// (0x00037d1a) cell_gms_pane_g2

0xc48e,	// (0x00037d22) cell_gms_pane_g3

0xc497,	// (0x00037d2b) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0003aa91) cell_gms_pane_g

0xc4a0,	// (0x00037d34) grid_highlight_pane_cp09

0x48ba,	// (0x0003014e) phob_pre_status_pane_g1

0x48c2,	// (0x00030156) phob_pre_status_pane_g2

0x48ca,	// (0x0003015e) phob_pre_status_pane_g3

0x48d2,	// (0x00030166) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0003ae80) phob_pre_status_pane_g

0x48e2,	// (0x00030176) phob_pre_status_pane_t1

0x48f0,	// (0x00030184) phob_pre_status_pane_t2

0x4900,	// (0x00030194) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0003ae8b) phob_pre_status_pane_t

0xbfc2,	// (0x00037856) bg_list_pane_cp05

0x07b4,	// (0x0002c048) grid_vorec_pane

0x07be,	// (0x0002c052) vorec_t1

0x07cc,	// (0x0002c060) vorec_t2

0x07da,	// (0x0002c06e) vorec_t3

0x07e8,	// (0x0002c07c) vorec_t4

0x07f6,	// (0x0002c08a) vorec_t5

0xb90e,	// (0x000371a2) vorec_t6

0x0006,

0xf206,	// (0x0003aa9a) vorec_t

0x0812,	// (0x0002c0a6) wait_bar_pane_cp01

0x23ce,	// (0x0002dc62) cell_vorec_pane_ParamLimits

0x23ce,	// (0x0002dc62) cell_vorec_pane

0xc4a8,	// (0x00037d3c) cell_vorec_pane_g1

0xbfc2,	// (0x00037856) grid_highlight_pane_cp05

0x23f6,	// (0x0002dc8a) cams_zoom_pane

0x2405,	// (0x0002dc99) image_vga_pane

0x241f,	// (0x0002dcb3) main_camera_pane_g1

0x2431,	// (0x0002dcc5) main_camera_pane_g2

0x2441,	// (0x0002dcd5) main_camera_pane_g3

0x2451,	// (0x0002dce5) main_camera_pane_g4

0x2461,	// (0x0002dcf5) main_camera_pane_g5

0x2471,	// (0x0002dd05) main_camera_pane_g6

0x2483,	// (0x0002dd17) main_camera_pane_g7

0x0007,

0xf215,	// (0x0003aaa9) main_camera_pane_g

0x2493,	// (0x0002dd27) main_camera_pane_t1

0x24a9,	// (0x0002dd3d) main_camera_pane_t2

0x0001,

0xf226,	// (0x0003aaba) main_camera_pane_t

0x24e3,	// (0x0002dd77) cams_zoom_pane_cp_ParamLimits

0x24e3,	// (0x0002dd77) cams_zoom_pane_cp

0x250b,	// (0x0002dd9f) image_cif_pane_ParamLimits

0x250b,	// (0x0002dd9f) image_cif_pane

0x2541,	// (0x0002ddd5) image_subqcif_pane

0x2549,	// (0x0002dddd) main_video_pane_g1_ParamLimits

0x2549,	// (0x0002dddd) main_video_pane_g1

0x256d,	// (0x0002de01) main_video_pane_g2_ParamLimits

0x256d,	// (0x0002de01) main_video_pane_g2

0x25a1,	// (0x0002de35) main_video_pane_g3_ParamLimits

0x25a1,	// (0x0002de35) main_video_pane_g3

0x25cf,	// (0x0002de63) main_video_pane_g4_ParamLimits

0x25cf,	// (0x0002de63) main_video_pane_g4

0x25fd,	// (0x0002de91) main_video_pane_g5_ParamLimits

0x25fd,	// (0x0002de91) main_video_pane_g5

0xc4be,	// (0x00037d52) main_video_pane_g6_ParamLimits

0xc4be,	// (0x00037d52) main_video_pane_g6

0x0006,

0xf22b,	// (0x0003aabf) main_video_pane_g_ParamLimits

0xf22b,	// (0x0003aabf) main_video_pane_g

0x2626,	// (0x0002deba) main_video_pane_t1_ParamLimits

0x2626,	// (0x0002deba) main_video_pane_t1

0xc4d8,	// (0x00037d6c) cams_zoom_pane_g1

0xc4e1,	// (0x00037d75) cams_zoom_pane_g2

0xc4ea,	// (0x00037d7e) cams_zoom_pane_g3

0xc4f3,	// (0x00037d87) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0003aace) cams_zoom_pane_g

0x2683,	// (0x0002df17) grid_cams_pane

0x269d,	// (0x0002df31) linegrid_cams_pane

0x26b1,	// (0x0002df45) cell_cams_pane_ParamLimits

0x26b1,	// (0x0002df45) cell_cams_pane

0xc4fc,	// (0x00037d90) cams_burst_image_pane

0xc504,	// (0x00037d98) cell_cams_pane_g1

0xbfc2,	// (0x00037856) grid_highlight_pane_cp03

0xc337,	// (0x00037bcb) mp_bg_pane_g1

0xbfc2,	// (0x00037856) bg_list_pane_cp03

0xe1bd,	// (0x00039a51) bg_mp_pane

0xe1c5,	// (0x00039a59) grid_mp_pane

0xe1cd,	// (0x00039a61) media_player_g1

0xe1d5,	// (0x00039a69) media_player_t1

0xe1e3,	// (0x00039a77) media_player_t2

0xe1f1,	// (0x00039a85) media_player_t3

0xe1ff,	// (0x00039a93) media_player_t4

0xe20d,	// (0x00039aa1) media_player_t5

0xe21b,	// (0x00039aaf) media_player_t6

0xe229,	// (0x00039abd) media_player_t7

0x0006,

0xf5d6,	// (0x0003ae6a) media_player_t

0xe237,	// (0x00039acb) wait_bar_pane_cp02

0xf5bb,	// (0x0003ae4f) main_usb_pane_t

0x48b1,	// (0x00030145) cell_mp_pane

0xc337,	// (0x00037bcb) cell_mp_pane_g1

0xbfc2,	// (0x00037856) grid_highlight_pane_cp06

0xc50c,	// (0x00037da0) grid_skin_colour_pane

0xc514,	// (0x00037da8) list_highlight_pane_cp03

0x27c3,	// (0x0002e057) skin_g1

0xc51c,	// (0x00037db0) skin_t1

0xc52b,	// (0x00037dbf) skin_t2

0x0001,

0xf26f,	// (0x0003ab03) skin_t

0x27cb,	// (0x0002e05f) cell_skin_colour_pane_ParamLimits

0x27cb,	// (0x0002e05f) cell_skin_colour_pane

0xc539,	// (0x00037dcd) cell_skin_colour_pane_g1

0x2844,	// (0x0002e0d8) call_video_g1_ParamLimits

0x2844,	// (0x0002e0d8) call_video_g1

0x2860,	// (0x0002e0f4) call_video_g2_ParamLimits

0x2860,	// (0x0002e0f4) call_video_g2

0x0001,

0xf274,	// (0x0003ab08) call_video_g_ParamLimits

0xf274,	// (0x0003ab08) call_video_g

0x28b2,	// (0x0002e146) call_video_uplink_pane_cp1_ParamLimits

0x28b2,	// (0x0002e146) call_video_uplink_pane_cp1

0xc54b,	// (0x00037ddf) call_video_uplink_pane_cp2

0x2951,	// (0x0002e1e5) video_down_crop_pane_ParamLimits

0x2951,	// (0x0002e1e5) video_down_crop_pane

0x2a48,	// (0x0002e2dc) video_down_pane_ParamLimits

0x2a48,	// (0x0002e2dc) video_down_pane

0xc553,	// (0x00037de7) video_down_subqcif_pane_ParamLimits

0xc553,	// (0x00037de7) video_down_subqcif_pane

0xc56b,	// (0x00037dff) video_down_subqcif_pane_cp_ParamLimits

0xc56b,	// (0x00037dff) video_down_subqcif_pane_cp

0xc591,	// (0x00037e25) im_reading_pane_ParamLimits

0xc591,	// (0x00037e25) im_reading_pane

0x2b56,	// (0x0002e3ea) im_writing_pane_ParamLimits

0x2b56,	// (0x0002e3ea) im_writing_pane

0x2b6c,	// (0x0002e400) im_reading_pane_t1

0xc5ab,	// (0x00037e3f) list_im_pane

0xc5bc,	// (0x00037e50) scroll_pane_cp07

0x2ba5,	// (0x0002e439) im_writing_pane_t1_ParamLimits

0x2ba5,	// (0x0002e439) im_writing_pane_t1

0xc5d5,	// (0x00037e69) im_writing_pane_t2_ParamLimits

0xc5d5,	// (0x00037e69) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0003ab12) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0003ab12) im_writing_pane_t

0xbfc2,	// (0x00037856) input_focus_pane_cp04

0xbfc2,	// (0x00037856) input_focus_pane_cp05

0x2bba,	// (0x0002e44e) list_im_single_pane_ParamLimits

0x2bba,	// (0x0002e44e) list_im_single_pane

0x2bce,	// (0x0002e462) list_single_im_pane_t1

0x4871,	// (0x00030105) blid_accuracy_pane

0x4879,	// (0x0003010d) blid_compass_pane

0x4883,	// (0x00030117) main_location_t1

0x4893,	// (0x00030127) main_location_t2

0x48a3,	// (0x00030137) main_location_t3

0x0002,

0xf5e5,	// (0x0003ae79) main_location_t

0xbfc2,	// (0x00037856) aid_levels_location

0xc337,	// (0x00037bcb) blid_accuracy_pane_g1

0xc337,	// (0x00037bcb) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0003ab74) blid_accuracy_pane_g

0xc61d,	// (0x00037eb1) wml_content_pane

0xc65b,	// (0x00037eef) wml_button_pane_ParamLimits

0xc65b,	// (0x00037eef) wml_button_pane

0x2bdd,	// (0x0002e471) wml_list_single_large_pane_ParamLimits

0x2bdd,	// (0x0002e471) wml_list_single_large_pane

0x2bf2,	// (0x0002e486) wml_list_single_medium_pane_ParamLimits

0x2bf2,	// (0x0002e486) wml_list_single_medium_pane

0x2c08,	// (0x0002e49c) wml_list_single_small_pane_ParamLimits

0x2c08,	// (0x0002e49c) wml_list_single_small_pane

0xc66f,	// (0x00037f03) wml_selection_box_pane_ParamLimits

0xc66f,	// (0x00037f03) wml_selection_box_pane

0xc682,	// (0x00037f16) wml_list_single_pane_t1

0xc691,	// (0x00037f25) wml_list_single_medium_pane_t1

0xc6a0,	// (0x00037f34) wml_list_single_large_pane_t1

0xc6af,	// (0x00037f43) input_focus_pane_cp02_ParamLimits

0xc6af,	// (0x00037f43) input_focus_pane_cp02

0xc6c2,	// (0x00037f56) wml_selection_box_pane_g1

0xc6cb,	// (0x00037f5f) wml_selection_box_pane_t1_ParamLimits

0xc6cb,	// (0x00037f5f) wml_selection_box_pane_t1

0xc21d,	// (0x00037ab1) bg_wml_button_pane_ParamLimits

0xc21d,	// (0x00037ab1) bg_wml_button_pane

0xc6e3,	// (0x00037f77) wml_button_pane_g1

0xc6eb,	// (0x00037f7f) wml_button_pane_t1

0xc6e3,	// (0x00037f77) wml_button_bg_pane_g1

0xc6fb,	// (0x00037f8f) wml_button_bg_pane_g2

0xc703,	// (0x00037f97) wml_button_bg_pane_g3

0xc70b,	// (0x00037f9f) wml_button_bg_pane_g4

0xc713,	// (0x00037fa7) wml_button_bg_pane_g5

0xc71b,	// (0x00037faf) wml_button_bg_pane_g6

0xc723,	// (0x00037fb7) wml_button_bg_pane_g7

0xc72b,	// (0x00037fbf) wml_button_bg_pane_g8

0xc733,	// (0x00037fc7) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0003ab17) wml_button_bg_pane_g

0x2c20,	// (0x0002e4b4) bg_list_pane_cp02

0xc73b,	// (0x00037fcf) mce_header_pane_ParamLimits

0xc73b,	// (0x00037fcf) mce_header_pane

0xc751,	// (0x00037fe5) mce_icon_pane

0xc751,	// (0x00037fe5) mce_image_pane

0xc75a,	// (0x00037fee) mce_text_pane_ParamLimits

0xc75a,	// (0x00037fee) mce_text_pane

0x2c28,	// (0x0002e4bc) scroll_pane_cp03

0xc653,	// (0x00037ee7) scroll_pane_cp04

0xc76d,	// (0x00038001) scroll_pane_cp05_ParamLimits

0xc76d,	// (0x00038001) scroll_pane_cp05

0x2c32,	// (0x0002e4c6) mce_header_field_pane_ParamLimits

0x2c32,	// (0x0002e4c6) mce_header_field_pane

0x2c49,	// (0x0002e4dd) mce_header_field_pane_2_ParamLimits

0x2c49,	// (0x0002e4dd) mce_header_field_pane_2

0x2c5f,	// (0x0002e4f3) mce_header_field_pane_3

0x2c67,	// (0x0002e4fb) list_single_mce_message_pane_ParamLimits

0x2c67,	// (0x0002e4fb) list_single_mce_message_pane

0x2c7c,	// (0x0002e510) list_single_mce_smart_pane_ParamLimits

0x2c7c,	// (0x0002e510) list_single_mce_smart_pane

0xc779,	// (0x0003800d) input_focus_pane_cp03

0xc782,	// (0x00038016) list_header_data_pane

0x2c9c,	// (0x0002e530) mce_header_field_pane_t1

0x2cac,	// (0x0002e540) list_single_mce_header_pane_ParamLimits

0x2cac,	// (0x0002e540) list_single_mce_header_pane

0xc78a,	// (0x0003801e) list_single_mce_header_pane_t1

0xc799,	// (0x0003802d) list_single_mce_message_pane_g1

0xc7a1,	// (0x00038035) list_single_mce_message_pane_t1

0x2ce6,	// (0x0002e57a) bg_cale_heading_pane_cp01_ParamLimits

0x2ce6,	// (0x0002e57a) bg_cale_heading_pane_cp01

0xc7af,	// (0x00038043) bg_cale_pane_cp02_ParamLimits

0xc7af,	// (0x00038043) bg_cale_pane_cp02

0x2d15,	// (0x0002e5a9) cale_month_corner_pane

0x2d34,	// (0x0002e5c8) cale_month_day_heading_pane_ParamLimits

0x2d34,	// (0x0002e5c8) cale_month_day_heading_pane

0x2d7b,	// (0x0002e60f) cale_month_pane_g1_ParamLimits

0x2d7b,	// (0x0002e60f) cale_month_pane_g1

0x2d9f,	// (0x0002e633) cale_month_pane_g2_ParamLimits

0x2d9f,	// (0x0002e633) cale_month_pane_g2

0x2dcf,	// (0x0002e663) cale_month_pane_g3_ParamLimits

0x2dcf,	// (0x0002e663) cale_month_pane_g3

0x2e0b,	// (0x0002e69f) cale_month_pane_g4_ParamLimits

0x2e0b,	// (0x0002e69f) cale_month_pane_g4

0x2e47,	// (0x0002e6db) cale_month_pane_g5_ParamLimits

0x2e47,	// (0x0002e6db) cale_month_pane_g5

0x2e8f,	// (0x0002e723) cale_month_pane_g6_ParamLimits

0x2e8f,	// (0x0002e723) cale_month_pane_g6

0x2edb,	// (0x0002e76f) cale_month_pane_g7_ParamLimits

0x2edb,	// (0x0002e76f) cale_month_pane_g7

0x2f2f,	// (0x0002e7c3) cale_month_pane_g8_ParamLimits

0x2f2f,	// (0x0002e7c3) cale_month_pane_g8

0x2f83,	// (0x0002e817) cale_month_pane_g9_ParamLimits

0x2f83,	// (0x0002e817) cale_month_pane_g9

0x2fd5,	// (0x0002e869) cale_month_pane_g10_ParamLimits

0x2fd5,	// (0x0002e869) cale_month_pane_g10

0x3027,	// (0x0002e8bb) cale_month_pane_g11_ParamLimits

0x3027,	// (0x0002e8bb) cale_month_pane_g11

0x3079,	// (0x0002e90d) cale_month_pane_g12_ParamLimits

0x3079,	// (0x0002e90d) cale_month_pane_g12

0x30cb,	// (0x0002e95f) cale_month_pane_g13_ParamLimits

0x30cb,	// (0x0002e95f) cale_month_pane_g13

0x000c,

0xf296,	// (0x0003ab2a) cale_month_pane_g_ParamLimits

0xf296,	// (0x0003ab2a) cale_month_pane_g

0x311d,	// (0x0002e9b1) cale_month_week_pane

0x3141,	// (0x0002e9d5) grid_cale_month_pane_ParamLimits

0x3141,	// (0x0002e9d5) grid_cale_month_pane

0x317f,	// (0x0002ea13) cale_month_day_heading_pane_t1

0x3205,	// (0x0002ea99) cale_month_day_heading_pane_t2

0x3296,	// (0x0002eb2a) cale_month_day_heading_pane_t3

0x3327,	// (0x0002ebbb) cale_month_day_heading_pane_t4

0x33bc,	// (0x0002ec50) cale_month_day_heading_pane_t5

0x345d,	// (0x0002ecf1) cale_month_day_heading_pane_t6

0x34fe,	// (0x0002ed92) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0003ab45) cale_month_day_heading_pane_t

0xc44d,	// (0x00037ce1) bg_cale_side_pane_cp01

0x35a7,	// (0x0002ee3b) cale_month_week_pane_t1

0x35c0,	// (0x0002ee54) cale_month_week_pane_t2

0x35d9,	// (0x0002ee6d) cale_month_week_pane_t3

0x35f2,	// (0x0002ee86) cale_month_week_pane_t4

0x360b,	// (0x0002ee9f) cale_month_week_pane_t5

0x3624,	// (0x0002eeb8) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0003ab54) cale_month_week_pane_t

0x363d,	// (0x0002eed1) cell_cale_month_pane_ParamLimits

0x363d,	// (0x0002eed1) cell_cale_month_pane

0xb91c,	// (0x000371b0) cell_cale_month_pane_g1

0x081a,	// (0x0002c0ae) cell_cale_month_pane_t1_ParamLimits

0x081a,	// (0x0002c0ae) cell_cale_month_pane_t1

0xc45b,	// (0x00037cef) grid_highlight_pane_cp08

0xc337,	// (0x00037bcb) main_smil_g1

0x3791,	// (0x0002f025) smil_status_pane

0xc7ee,	// (0x00038082) smil_text_pane

0xe0dd,	// (0x00039971) bg_popup_call3_rect_pane_g8

0xe0e5,	// (0x00039979) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0003ae0d) bg_popup_call3_rect_pane_g

0xe32c,	// (0x00039bc0) smil_status_volume_pane_g1

0xc7f8,	// (0x0003808c) smil_status_pane_t1

0xba66,	// (0x000372fa) volume_smil_pane

0xc80f,	// (0x000380a3) list_smil_text_pane

0x37a4,	// (0x0002f038) scroll_pane_cp011

0x37af,	// (0x0002f043) smil_text_list_pane_t1_ParamLimits

0x37af,	// (0x0002f043) smil_text_list_pane_t1

0xb928,	// (0x000371bc) aid_volume_smil_ParamLimits

0xb928,	// (0x000371bc) aid_volume_smil

0xc337,	// (0x00037bcb) smil_volume_pane_g1

0xc337,	// (0x00037bcb) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0003ab74) smil_volume_pane_g

0x1eb6,	// (0x0002d74a) listscroll_cale_day_pane

0xc819,	// (0x000380ad) bg_cale_pane

0xc831,	// (0x000380c5) list_cale_pane

0xc854,	// (0x000380e8) scroll_pane_cp09

0xc865,	// (0x000380f9) cale_bg_pane_g1

0xc86d,	// (0x00038101) cale_bg_pane_g2

0xc875,	// (0x00038109) cale_bg_pane_g3

0xc87d,	// (0x00038111) cale_bg_pane_g4

0xc885,	// (0x00038119) cale_bg_pane_g5

0xc88d,	// (0x00038121) cale_bg_pane_g6

0xc895,	// (0x00038129) cale_bg_pane_g7

0xc89d,	// (0x00038131) cale_bg_pane_g8

0xc8a5,	// (0x00038139) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0003ab79) cale_bg_pane_g

0x37eb,	// (0x0002f07f) list_cale_time_pane_ParamLimits

0x37eb,	// (0x0002f07f) list_cale_time_pane

0xc8ad,	// (0x00038141) list_cale_time_pane_g1_ParamLimits

0xc8ad,	// (0x00038141) list_cale_time_pane_g1

0xc8b9,	// (0x0003814d) list_cale_time_pane_g2_ParamLimits

0xc8b9,	// (0x0003814d) list_cale_time_pane_g2

0x37fe,	// (0x0002f092) list_cale_time_pane_g3_ParamLimits

0x37fe,	// (0x0002f092) list_cale_time_pane_g3

0x380c,	// (0x0002f0a0) list_cale_time_pane_g4_ParamLimits

0x380c,	// (0x0002f0a0) list_cale_time_pane_g4

0x381a,	// (0x0002f0ae) list_cale_time_pane_g5_ParamLimits

0x381a,	// (0x0002f0ae) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0003ab8c) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0003ab8c) list_cale_time_pane_g

0xc8d3,	// (0x00038167) list_cale_time_pane_t1_ParamLimits

0xc8d3,	// (0x00038167) list_cale_time_pane_t1

0xc8fb,	// (0x0003818f) list_cale_time_pane_t2_ParamLimits

0xc8fb,	// (0x0003818f) list_cale_time_pane_t2

0x3b7b,	// (0x0002f40f) aid_blid_cardinal_pane

0x3bb9,	// (0x0002f44d) compass_pane_t4

0xc923,	// (0x000381b7) list_cale_time_pane_t4_ParamLimits

0xc923,	// (0x000381b7) list_cale_time_pane_t4

0x3bc7,	// (0x0002f45b) compass_pane_t5

0x3bd5,	// (0x0002f469) compass_pane_t6

0x3be3,	// (0x0002f477) compass_pane_t7

0xcd78,	// (0x0003860c) navi_pane_cc_t1

0xcecd,	// (0x00038761) aid_phob_thumbnail_center_pane

0x4289,	// (0x0002fb1d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0003ab99) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0003ab99) list_cale_time_pane_t

0xb506,	// (0x00036d9a) bg_popup_window_pane_cp02_ParamLimits

0xb506,	// (0x00036d9a) bg_popup_window_pane_cp02

0xc94b,	// (0x000381df) heading_pane_cp01_ParamLimits

0xc94b,	// (0x000381df) heading_pane_cp01

0xc957,	// (0x000381eb) loc_req_pane_ParamLimits

0xc957,	// (0x000381eb) loc_req_pane

0xc967,	// (0x000381fb) loc_type_pane_ParamLimits

0xc967,	// (0x000381fb) loc_type_pane

0xc979,	// (0x0003820d) loc_type_pane_t1_ParamLimits

0xc979,	// (0x0003820d) loc_type_pane_t1

0xc98b,	// (0x0003821f) loc_type_pane_t2_ParamLimits

0xc98b,	// (0x0003821f) loc_type_pane_t2

0xc99d,	// (0x00038231) loc_type_pane_t3_ParamLimits

0xc99d,	// (0x00038231) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0003aba0) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0003aba0) loc_type_pane_t

0xc9af,	// (0x00038243) list_loc_req_pane

0xc9b9,	// (0x0003824d) scroll_pane_cp012

0x3828,	// (0x0002f0bc) list_single_loc_request_popup_menu_pane_ParamLimits

0x3828,	// (0x0002f0bc) list_single_loc_request_popup_menu_pane

0xc9c4,	// (0x00038258) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc9c4,	// (0x00038258) list_single_loc_request_popup_menu_pane_g1

0xc9d0,	// (0x00038264) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc9d0,	// (0x00038264) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0003aba7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0003aba7) list_single_loc_request_popup_menu_pane_g

0xc9dc,	// (0x00038270) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc9dc,	// (0x00038270) list_single_loc_request_popup_menu_pane_t1

0xc21d,	// (0x00037ab1) bg_popup_window_pane_cp03_ParamLimits

0xc21d,	// (0x00037ab1) bg_popup_window_pane_cp03

0xcaff,	// (0x00038393) heading_loc_req_pane_ParamLimits

0xcaff,	// (0x00038393) heading_loc_req_pane

0x3835,	// (0x0002f0c9) popup_dyc_status_message_window_g1_ParamLimits

0x3835,	// (0x0002f0c9) popup_dyc_status_message_window_g1

0x3849,	// (0x0002f0dd) popup_dyc_status_message_window_t1_ParamLimits

0x3849,	// (0x0002f0dd) popup_dyc_status_message_window_t1

0x385e,	// (0x0002f0f2) popup_dyc_status_message_window_t2_ParamLimits

0x385e,	// (0x0002f0f2) popup_dyc_status_message_window_t2

0x3873,	// (0x0002f107) popup_dyc_status_message_window_t3_ParamLimits

0x3873,	// (0x0002f107) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0003abac) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0003abac) popup_dyc_status_message_window_t

0xbfc2,	// (0x00037856) bg_heading_pane_cp01

0xc9f2,	// (0x00038286) heading_loc_req_pane_g1

0xc9fa,	// (0x0003828e) heading_loc_req_pane_g2

0xca02,	// (0x00038296) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0003abb3) heading_loc_req_pane_g

0xca0a,	// (0x0003829e) heading_loc_req_pane_t1

0xca19,	// (0x000382ad) bg_popup_sub_pane_cp01_ParamLimits

0xca19,	// (0x000382ad) bg_popup_sub_pane_cp01

0xca27,	// (0x000382bb) popup_cale_events_window_g1_ParamLimits

0xca27,	// (0x000382bb) popup_cale_events_window_g1

0xca47,	// (0x000382db) popup_cale_events_window_g2_ParamLimits

0xca47,	// (0x000382db) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0003abe7) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0003abe7) popup_cale_events_window_g

0xca67,	// (0x000382fb) popup_cale_events_window_t1_ParamLimits

0xca67,	// (0x000382fb) popup_cale_events_window_t1

0xca79,	// (0x0003830d) popup_cale_events_window_t2_ParamLimits

0xca79,	// (0x0003830d) popup_cale_events_window_t2

0xcab7,	// (0x0003834b) popup_cale_events_window_t3_ParamLimits

0xcab7,	// (0x0003834b) popup_cale_events_window_t3

0xcb0b,	// (0x0003839f) popup_cale_events_window_t4_ParamLimits

0xcb0b,	// (0x0003839f) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0003abec) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0003abec) popup_cale_events_window_t

0x3976,	// (0x0002f20a) call_type_pane

0x3986,	// (0x0002f21a) popup_call_status_window_g1

0x399a,	// (0x0002f22e) popup_call_status_window_g2

0x39ae,	// (0x0002f242) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0003abf5) popup_call_status_window_g

0xcb41,	// (0x000383d5) call_type_pane_g1

0xcb4a,	// (0x000383de) call_type_pane_g2

0x0001,

0xf368,	// (0x0003abfc) call_type_pane_g

0xbfc2,	// (0x00037856) bg_popup_sub_pane_cp02

0xcb53,	// (0x000383e7) listscroll_popup_wml_pane

0xcb5b,	// (0x000383ef) list_wml_pane

0xcb65,	// (0x000383f9) scroll_pane_cp013

0xcb70,	// (0x00038404) list_single_graphic_popup_wml_pane_ParamLimits

0xcb70,	// (0x00038404) list_single_graphic_popup_wml_pane

0xc337,	// (0x00037bcb) list_single_graphic_popup_wml_pane_g1

0xcb84,	// (0x00038418) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0003ac01) list_single_graphic_popup_wml_pane_g

0xcb8c,	// (0x00038420) list_single_graphic_popup_wml_pane_t1

0xcba2,	// (0x00038436) aid_call_pane

0xc215,	// (0x00037aa9) popup_clock_analogue_window_g1

0xc215,	// (0x00037aa9) popup_clock_analogue_window_g2

0xb94a,	// (0x000371de) popup_clock_analogue_window_g3

0xb94a,	// (0x000371de) popup_clock_analogue_window_g4

0xc337,	// (0x00037bcb) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0003ac06) popup_clock_analogue_window_g

0xb952,	// (0x000371e6) popup_clock_analogue_window_t1

0xb960,	// (0x000371f4) clock_digital_number_pane_ParamLimits

0xb960,	// (0x000371f4) clock_digital_number_pane

0xb96c,	// (0x00037200) clock_digital_number_pane_cp02_ParamLimits

0xb96c,	// (0x00037200) clock_digital_number_pane_cp02

0xb978,	// (0x0003720c) clock_digital_number_pane_cp03_ParamLimits

0xb978,	// (0x0003720c) clock_digital_number_pane_cp03

0xb984,	// (0x00037218) clock_digital_number_pane_cp04_ParamLimits

0xb984,	// (0x00037218) clock_digital_number_pane_cp04

0xb994,	// (0x00037228) clock_digital_separator_pane_ParamLimits

0xb994,	// (0x00037228) clock_digital_separator_pane

0xb9a0,	// (0x00037234) popup_clock_digital_window_t1

0xc337,	// (0x00037bcb) clock_digital_number_pane_g1

0xc337,	// (0x00037bcb) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0003ab74) clock_digital_number_pane_g

0xc337,	// (0x00037bcb) clock_digital_separator_pane_g1

0xc337,	// (0x00037bcb) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0003ab74) clock_digital_separator_pane_g

0xbfc2,	// (0x00037856) bg_popup_window_pane_cp04

0xcbaa,	// (0x0003843e) heading_pane_cp03

0xcbb2,	// (0x00038446) listscroll_popup_gms_pane

0xcbba,	// (0x0003844e) grid_large_graphic_popup_pane

0xcbc4,	// (0x00038458) listscroll_popup_gms_pane_g1

0xcbcc,	// (0x00038460) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0003ac11) listscroll_popup_gms_pane_g

0xc653,	// (0x00037ee7) scroll_pane_cp014

0x39bd,	// (0x0002f251) cell_large_graphic_popup_pane_ParamLimits

0x39bd,	// (0x0002f251) cell_large_graphic_popup_pane

0x39d5,	// (0x0002f269) cell_large_graphic_popup_pane_g1_ParamLimits

0x39d5,	// (0x0002f269) cell_large_graphic_popup_pane_g1

0xcbd4,	// (0x00038468) cell_large_graphic_popup_pane_g2_ParamLimits

0xcbd4,	// (0x00038468) cell_large_graphic_popup_pane_g2

0xcbe0,	// (0x00038474) cell_large_graphic_popup_pane_g3_ParamLimits

0xcbe0,	// (0x00038474) cell_large_graphic_popup_pane_g3

0xcbed,	// (0x00038481) cell_large_graphic_popup_pane_g4_ParamLimits

0xcbed,	// (0x00038481) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0003ac16) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0003ac16) cell_large_graphic_popup_pane_g

0xcbfd,	// (0x00038491) grid_highlight_pane_cp010

0xc337,	// (0x00037bcb) bg_popup_call_pane_g1

0xcc07,	// (0x0003849b) list_single_graphic_popup_conf_pane_ParamLimits

0xcc07,	// (0x0003849b) list_single_graphic_popup_conf_pane

0xcc1a,	// (0x000384ae) list_highlight_pane_cp01

0xcc23,	// (0x000384b7) list_single_graphic_popup_conf_pane_g1

0xcc2b,	// (0x000384bf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0003ac1f) list_single_graphic_popup_conf_pane_g

0xcc33,	// (0x000384c7) list_single_graphic_popup_conf_pane_t1

0xcc41,	// (0x000384d5) linegrid_cams_pane_g1

0x39e1,	// (0x0002f275) linegrid_cams_pane_g2

0xc48e,	// (0x00037d22) linegrid_cams_pane_g3

0xcc4a,	// (0x000384de) linegrid_cams_pane_g4

0x39ea,	// (0x0002f27e) linegrid_cams_pane_g5

0x39f3,	// (0x0002f287) linegrid_cams_pane_g6

0xc497,	// (0x00037d2b) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0003ac24) linegrid_cams_pane_g

0xcc53,	// (0x000384e7) popup_clock_analogue_window

0xcc53,	// (0x000384e7) popup_clock_digital_window

0xbfc2,	// (0x00037856) popup_phob_thumbnail_window

0xc337,	// (0x00037bcb) call_video_uplink_pane_g1

0xcc5c,	// (0x000384f0) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0003ac33) call_video_uplink_pane_g

0xcc64,	// (0x000384f8) video_uplink_pane

0xcc6c,	// (0x00038500) mce_image_pane_g1

0x39fe,	// (0x0002f292) mce_image_pane_g2

0x3a08,	// (0x0002f29c) mce_image_pane_g3

0x3a10,	// (0x0002f2a4) mce_image_pane_g4

0x3a18,	// (0x0002f2ac) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0003ac38) mce_image_pane_g

0xcc76,	// (0x0003850a) control_top_pane_stacon_cp01_ParamLimits

0xcc76,	// (0x0003850a) control_top_pane_stacon_cp01

0xcc8a,	// (0x0003851e) uni_indicator_pane_stacon_cp01_ParamLimits

0xcc8a,	// (0x0003851e) uni_indicator_pane_stacon_cp01

0xcc9b,	// (0x0003852f) bg_popup_sub_pane_cp03

0xcca5,	// (0x00038539) chi_dic_find_pane

0x3a20,	// (0x0002f2b4) listscroll_chi_dic_pane

0xccad,	// (0x00038541) main_pane_chidic_g1

0xccb5,	// (0x00038549) chi_dic_find_pane_t1

0xccc3,	// (0x00038557) find_chidic_pane

0xcccc,	// (0x00038560) chi_dic_list_pane_ParamLimits

0xcccc,	// (0x00038560) chi_dic_list_pane

0xccdd,	// (0x00038571) scroll_pane_cp020

0xcce5,	// (0x00038579) find_chidic_pane_t1

0xbfc2,	// (0x00037856) input_focus_pane_cp06

0x3a34,	// (0x0002f2c8) list_chi_dic_pane_ParamLimits

0x3a34,	// (0x0002f2c8) list_chi_dic_pane

0x3a46,	// (0x0002f2da) list_chi_dic_pane_t1_ParamLimits

0x3a46,	// (0x0002f2da) list_chi_dic_pane_t1

0xbfc2,	// (0x00037856) list_highlight_pane_cp020

0xccf4,	// (0x00038588) bg_cale_heading_pane_g1

0x3a59,	// (0x0002f2ed) bg_cale_heading_pane_g2

0x3a61,	// (0x0002f2f5) bg_cale_heading_pane_g3

0x3a69,	// (0x0002f2fd) bg_cale_heading_pane_g4

0x3a73,	// (0x0002f307) bg_cale_heading_pane_g5

0x3a7d,	// (0x0002f311) bg_cale_heading_pane_g6

0x3a85,	// (0x0002f319) bg_cale_heading_pane_g7

0x3a8d,	// (0x0002f321) bg_cale_heading_pane_g8

0x3a97,	// (0x0002f32b) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0003ac43) bg_cale_heading_pane_g

0xccf4,	// (0x00038588) bg_cale_side_pane_g1

0x3aa1,	// (0x0002f335) bg_cale_side_pane_g2

0x3aa9,	// (0x0002f33d) bg_cale_side_pane_g3

0x3ab1,	// (0x0002f345) bg_cale_side_pane_g4

0x3ab9,	// (0x0002f34d) bg_cale_side_pane_g5

0x3ac1,	// (0x0002f355) bg_cale_side_pane_g6

0x3ac9,	// (0x0002f35d) bg_cale_side_pane_g7

0x3ad1,	// (0x0002f365) bg_cale_side_pane_g8

0x3ad9,	// (0x0002f36d) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0003ac56) bg_cale_side_pane_g

0x3ae1,	// (0x0002f375) popup_call_status_window_ParamLimits

0x3ae1,	// (0x0002f375) popup_call_status_window

0xccfc,	// (0x00038590) stacon_top_pane

0xcd04,	// (0x00038598) status_pane_ParamLimits

0xcd04,	// (0x00038598) status_pane

0xcd19,	// (0x000385ad) status_small_pane

0xcd21,	// (0x000385b5) control_pane

0xbfc2,	// (0x00037856) stacon_bottom_pane

0xcd29,	// (0x000385bd) list_single_mce_smart_pane_t1_ParamLimits

0xcd29,	// (0x000385bd) list_single_mce_smart_pane_t1

0xcd3c,	// (0x000385d0) list_single_mce_smart_pane_t2_ParamLimits

0xcd3c,	// (0x000385d0) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0003ac69) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0003ac69) list_single_mce_smart_pane_t

0x3b2a,	// (0x0002f3be) compass_pane

0x3b33,	// (0x0002f3c7) main_location2_pane_t1

0x3b45,	// (0x0002f3d9) main_location2_pane_t2

0x3b57,	// (0x0002f3eb) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0003ac6e) main_location2_pane_t

0xcd5b,	// (0x000385ef) compass_pane_g1_ParamLimits

0xcd5b,	// (0x000385ef) compass_pane_g1

0x3b9b,	// (0x0002f42f) compass_pane_t1

0x3baa,	// (0x0002f43e) compass_pane_t2

0x0005,

0xf3e3,	// (0x0003ac77) compass_pane_t

0x3bf1,	// (0x0002f485) text_secondary_cp61

0xcd6f,	// (0x00038603) navi_pane_cams_g5

0xcd92,	// (0x00038626) navi_pane_im_t1

0xcda0,	// (0x00038634) navi_pane_mp_g1_ParamLimits

0xcda0,	// (0x00038634) navi_pane_mp_g1

0xcdb4,	// (0x00038648) navi_pane_mp_g2_ParamLimits

0xcdb4,	// (0x00038648) navi_pane_mp_g2

0xcdc0,	// (0x00038654) navi_pane_mp_g3_ParamLimits

0xcdc0,	// (0x00038654) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0003ac8b) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0003ac8b) navi_pane_mp_g

0xcdcc,	// (0x00038660) navi_pane_mp_t1

0xcdda,	// (0x0003866e) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0003ac92) navi_pane_mp_t

0xce16,	// (0x000386aa) navi_pane_vt_g1

0xcdcc,	// (0x00038660) navi_pane_vt_t1

0xce1e,	// (0x000386b2) navi_slider_pane

0xce26,	// (0x000386ba) zooming_pane

0xce2e,	// (0x000386c2) navi_slider_pane_g1

0xb9bd,	// (0x00037251) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0003ac99) navi_slider_pane_g

0xce52,	// (0x000386e6) aid_levels_zoom

0xce5a,	// (0x000386ee) zooming_pane_g1

0xce62,	// (0x000386f6) zooming_pane_g2

0xce62,	// (0x000386f6) zooming_pane_g3

0x0002,

0xf414,	// (0x0003aca8) zooming_pane_g

0xce6a,	// (0x000386fe) level_10_zoom

0xce73,	// (0x00038707) level_11_zoom

0xce7c,	// (0x00038710) level_1_zoom

0xce85,	// (0x00038719) level_2_zoom

0xce8e,	// (0x00038722) level_3_zoom

0xce97,	// (0x0003872b) level_4_zoom

0xcea0,	// (0x00038734) level_5_zoom

0xcea9,	// (0x0003873d) level_6_zoom

0xceb2,	// (0x00038746) level_7_zoom

0xcebb,	// (0x0003874f) level_8_zoom

0xcec4,	// (0x00038758) level_9_zoom

0xced5,	// (0x00038769) popup_phob_thumbnail_window_g1

0xcedd,	// (0x00038771) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0003acaf) popup_phob_thumbnail_window_g

0xe23f,	// (0x00039ad3) level_1_location

0xe247,	// (0x00039adb) level_2_location

0xe24f,	// (0x00039ae3) level_3_location

0xe257,	// (0x00039aeb) level_4_location

0xce26,	// (0x000386ba) level_5_location

0x3d34,	// (0x0002f5c8) mce_icon_pane_g1

0x3d3e,	// (0x0002f5d2) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0003acb4) mce_icon_pane_g

0x3d46,	// (0x0002f5da) main_mup_pane_g1_ParamLimits

0x3d46,	// (0x0002f5da) main_mup_pane_g1

0x3d5c,	// (0x0002f5f0) main_mup_pane_g2_ParamLimits

0x3d5c,	// (0x0002f5f0) main_mup_pane_g2

0x3d74,	// (0x0002f608) main_mup_pane_g3_ParamLimits

0x3d74,	// (0x0002f608) main_mup_pane_g3

0x3d8c,	// (0x0002f620) main_mup_pane_g4_ParamLimits

0x3d8c,	// (0x0002f620) main_mup_pane_g4

0x3da4,	// (0x0002f638) main_mup_pane_g5_ParamLimits

0x3da4,	// (0x0002f638) main_mup_pane_g5

0x3dc0,	// (0x0002f654) main_mup_pane_g6_ParamLimits

0x3dc0,	// (0x0002f654) main_mup_pane_g6

0x3dd8,	// (0x0002f66c) main_mup_pane_g7_ParamLimits

0x3dd8,	// (0x0002f66c) main_mup_pane_g7

0x3df0,	// (0x0002f684) main_mup_pane_g8_ParamLimits

0x3df0,	// (0x0002f684) main_mup_pane_g8

0x3e0a,	// (0x0002f69e) main_mup_pane_g9_ParamLimits

0x3e0a,	// (0x0002f69e) main_mup_pane_g9

0x3e24,	// (0x0002f6b8) main_mup_pane_g10_ParamLimits

0x3e24,	// (0x0002f6b8) main_mup_pane_g10

0x3e3e,	// (0x0002f6d2) main_mup_pane_g11_ParamLimits

0x3e3e,	// (0x0002f6d2) main_mup_pane_g11

0x3e52,	// (0x0002f6e6) main_mup_pane_g12_ParamLimits

0x3e52,	// (0x0002f6e6) main_mup_pane_g12

0x3e68,	// (0x0002f6fc) main_mup_pane_g13_ParamLimits

0x3e68,	// (0x0002f6fc) main_mup_pane_g13

0x000c,

0xf425,	// (0x0003acb9) main_mup_pane_g_ParamLimits

0xf425,	// (0x0003acb9) main_mup_pane_g

0x3e7c,	// (0x0002f710) main_mup_pane_t1_ParamLimits

0x3e7c,	// (0x0002f710) main_mup_pane_t1

0x3e96,	// (0x0002f72a) main_mup_pane_t2_ParamLimits

0x3e96,	// (0x0002f72a) main_mup_pane_t2

0x3eae,	// (0x0002f742) main_mup_pane_t3_ParamLimits

0x3eae,	// (0x0002f742) main_mup_pane_t3

0x3ec6,	// (0x0002f75a) main_mup_pane_t4_ParamLimits

0x3ec6,	// (0x0002f75a) main_mup_pane_t4

0x3ee4,	// (0x0002f778) main_mup_pane_t5_ParamLimits

0x3ee4,	// (0x0002f778) main_mup_pane_t5

0x3ef9,	// (0x0002f78d) main_mup_pane_t6_ParamLimits

0x3ef9,	// (0x0002f78d) main_mup_pane_t6

0x0005,

0xf440,	// (0x0003acd4) main_mup_pane_t_ParamLimits

0xf440,	// (0x0003acd4) main_mup_pane_t

0x3f0b,	// (0x0002f79f) mup_progress_pane_ParamLimits

0x3f0b,	// (0x0002f79f) mup_progress_pane

0x3f17,	// (0x0002f7ab) mup_visualizer_pane_ParamLimits

0x3f17,	// (0x0002f7ab) mup_visualizer_pane

0x3f47,	// (0x0002f7db) mup_volume_pane_ParamLimits

0x3f47,	// (0x0002f7db) mup_volume_pane

0xcee5,	// (0x00038779) mup_visualizer_pane_g1_ParamLimits

0xcee5,	// (0x00038779) mup_visualizer_pane_g1

0xcee5,	// (0x00038779) mup_visualizer_pane_g2_ParamLimits

0xcee5,	// (0x00038779) mup_visualizer_pane_g2

0xcd5b,	// (0x000385ef) mup_visualizer_pane_g3_ParamLimits

0xcd5b,	// (0x000385ef) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0003ace1) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0003ace1) mup_visualizer_pane_g

0xc337,	// (0x00037bcb) mup_volume_pane_g1

0xcefb,	// (0x0003878f) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0003ace8) mup_volume_pane_g

0xc337,	// (0x00037bcb) mup_progress_pane_g1

0xcf04,	// (0x00038798) mup_progress_pane_g2

0xcf0d,	// (0x000387a1) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0003aced) mup_progress_pane_g

0xbfc2,	// (0x00037856) bg_popup_window_pane_cp05

0xcf16,	// (0x000387aa) heading_pane_cp02_ParamLimits

0xcf16,	// (0x000387aa) heading_pane_cp02

0xcf30,	// (0x000387c4) list_popup_blid_pane

0xcf38,	// (0x000387cc) list_blid_sat_info_pane_ParamLimits

0xcf38,	// (0x000387cc) list_blid_sat_info_pane

0xcf4b,	// (0x000387df) list_blid_sat_info_pane_g1

0xcf53,	// (0x000387e7) list_blid_sat_info_pane_t1

0x405d,	// (0x0002f8f1) mup_equalizer_pane_ParamLimits

0x405d,	// (0x0002f8f1) mup_equalizer_pane

0x4076,	// (0x0002f90a) mup_equalizer_pane_cp1_ParamLimits

0x4076,	// (0x0002f90a) mup_equalizer_pane_cp1

0x4093,	// (0x0002f927) mup_equalizer_pane_cp2_ParamLimits

0x4093,	// (0x0002f927) mup_equalizer_pane_cp2

0x40b0,	// (0x0002f944) mup_equalizer_pane_cp3_ParamLimits

0x40b0,	// (0x0002f944) mup_equalizer_pane_cp3

0x40d1,	// (0x0002f965) mup_equalizer_pane_cp4_ParamLimits

0x40d1,	// (0x0002f965) mup_equalizer_pane_cp4

0x40f2,	// (0x0002f986) mup_equalizer_pane_cp5

0x4106,	// (0x0002f99a) mup_equalizer_pane_cp6

0x411a,	// (0x0002f9ae) mup_equalizer_pane_cp7

0xe15d,	// (0x000399f1) bg_popup_call_poc_act_pane_g9

0xe165,	// (0x000399f9) bg_popup_call_poc_act_pane_g10

0xe16d,	// (0x00039a01) bg_popup_call_poc_act_pane_g11

0x000a,

0xc21d,	// (0x00037ab1) mup_scale_pane

0xc337,	// (0x00037bcb) mup_scale_pane_g1

0xcf61,	// (0x000387f5) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0003ad09) mup_scale_pane_g

0xcf85,	// (0x00038819) msg_data_pane

0xcf8d,	// (0x00038821) scroll_pane_cp017

0x4140,	// (0x0002f9d4) bg_list_pane_cp04_ParamLimits

0x4140,	// (0x0002f9d4) bg_list_pane_cp04

0xcf9d,	// (0x00038831) msg_data_pane_g1

0x4158,	// (0x0002f9ec) msg_data_pane_g2

0x4162,	// (0x0002f9f6) msg_data_pane_g3

0x416a,	// (0x0002f9fe) msg_data_pane_g4

0x4172,	// (0x0002fa06) msg_data_pane_g5

0x417a,	// (0x0002fa0e) msg_data_pane_g6

0x4182,	// (0x0002fa16) msg_data_pane_g7

0x0006,

0xf484,	// (0x0003ad18) msg_data_pane_g

0x418a,	// (0x0002fa1e) msg_text_pane_ParamLimits

0x418a,	// (0x0002fa1e) msg_text_pane

0x41ae,	// (0x0002fa42) qrid_highlight_pane_cp011_ParamLimits

0x41ae,	// (0x0002fa42) qrid_highlight_pane_cp011

0xbfc2,	// (0x00037856) msg_body_pane

0xbfc2,	// (0x00037856) msg_header_pane

0xcfa5,	// (0x00038839) input_focus_pane_cp07

0xcfba,	// (0x0003884e) msg_header_pane_t1_ParamLimits

0xcfba,	// (0x0003884e) msg_header_pane_t1

0xcfcc,	// (0x00038860) msg_header_pane_t2_ParamLimits

0xcfcc,	// (0x00038860) msg_header_pane_t2

0x0001,

0xf498,	// (0x0003ad2c) msg_header_pane_t_ParamLimits

0xf498,	// (0x0003ad2c) msg_header_pane_t

0xcfde,	// (0x00038872) msg_body_pane_g1

0xcfe6,	// (0x0003887a) msg_body_pane_t1_ParamLimits

0xcfe6,	// (0x0003887a) msg_body_pane_t1

0xd017,	// (0x000388ab) msg_body_pane_t2_ParamLimits

0xd017,	// (0x000388ab) msg_body_pane_t2

0xd029,	// (0x000388bd) msg_body_pane_t3_ParamLimits

0xd029,	// (0x000388bd) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0003ad31) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0003ad31) msg_body_pane_t

0x0856,	// (0x0002c0ea) main_viewer_pane_g1_ParamLimits

0x0856,	// (0x0002c0ea) main_viewer_pane_g1

0x0864,	// (0x0002c0f8) main_viewer_pane_g2_ParamLimits

0x0864,	// (0x0002c0f8) main_viewer_pane_g2

0x41fb,	// (0x0002fa8f) main_viewer_pane_g3_ParamLimits

0x41fb,	// (0x0002fa8f) main_viewer_pane_g3

0x420a,	// (0x0002fa9e) main_viewer_pane_g4_ParamLimits

0x420a,	// (0x0002fa9e) main_viewer_pane_g4

0xb9e7,	// (0x0003727b) main_viewer_pane_g5_ParamLimits

0xb9e7,	// (0x0003727b) main_viewer_pane_g5

0xb9e7,	// (0x0003727b) main_viewer_pane_g7_ParamLimits

0xb9e7,	// (0x0003727b) main_viewer_pane_g7

0xc9c4,	// (0x00038258) main_viewer_pane_g8_ParamLimits

0xc9c4,	// (0x00038258) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0003ad41) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0003ad41) main_viewer_pane_g

0xd03b,	// (0x000388cf) viewer_content_pane_ParamLimits

0xd03b,	// (0x000388cf) viewer_content_pane

0x4246,	// (0x0002fada) main_postcard_pane_g1_ParamLimits

0x4246,	// (0x0002fada) main_postcard_pane_g1

0x425c,	// (0x0002faf0) main_postcard_pane_g2_ParamLimits

0x425c,	// (0x0002faf0) main_postcard_pane_g2

0x4272,	// (0x0002fb06) main_postcard_pane_g3_ParamLimits

0x4272,	// (0x0002fb06) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0003ad52) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0003ad52) main_postcard_pane_g

0x4289,	// (0x0002fb1d) main_postcard_pane_g4

0xe33f,	// (0x00039bd3) smil_status_volume_pane_g2

0x42cc,	// (0x0002fb60) postcard_pane_ParamLimits

0x42cc,	// (0x0002fb60) postcard_pane

0xd049,	// (0x000388dd) postcard_pane_g1_ParamLimits

0xd049,	// (0x000388dd) postcard_pane_g1

0x430e,	// (0x0002fba2) postcard_pane_g2_ParamLimits

0x430e,	// (0x0002fba2) postcard_pane_g2

0x431a,	// (0x0002fbae) postcard_pane_g3_ParamLimits

0x431a,	// (0x0002fbae) postcard_pane_g3

0xd057,	// (0x000388eb) postcard_pane_g4_ParamLimits

0xd057,	// (0x000388eb) postcard_pane_g4

0x4326,	// (0x0002fbba) postcard_pane_g5_ParamLimits

0x4326,	// (0x0002fbba) postcard_pane_g5

0x433b,	// (0x0002fbcf) postcard_pane_g6_ParamLimits

0x433b,	// (0x0002fbcf) postcard_pane_g6

0xd049,	// (0x000388dd) postcard_pane_g7_ParamLimits

0xd049,	// (0x000388dd) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0003ad5f) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0003ad5f) postcard_pane_g

0x434f,	// (0x0002fbe3) main_mp2_pane_g1_ParamLimits

0x434f,	// (0x0002fbe3) main_mp2_pane_g1

0x435b,	// (0x0002fbef) main_mp2_pane_g2_ParamLimits

0x435b,	// (0x0002fbef) main_mp2_pane_g2

0x4367,	// (0x0002fbfb) main_mp2_pane_g3_ParamLimits

0x4367,	// (0x0002fbfb) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0003ad6e) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0003ad6e) main_mp2_pane_g

0x4373,	// (0x0002fc07) main_mp2_pane_t1_ParamLimits

0x4373,	// (0x0002fc07) main_mp2_pane_t1

0x4388,	// (0x0002fc1c) main_mp2_pane_t2_ParamLimits

0x4388,	// (0x0002fc1c) main_mp2_pane_t2

0x439a,	// (0x0002fc2e) main_mp2_pane_t3_ParamLimits

0x439a,	// (0x0002fc2e) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0003ad75) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0003ad75) main_mp2_pane_t

0xd065,	// (0x000388f9) pec_content_pane_ParamLimits

0xd065,	// (0x000388f9) pec_content_pane

0xc653,	// (0x00037ee7) scroll_pane_cp015

0xd077,	// (0x0003890b) pec_attribute_pane_ParamLimits

0xd077,	// (0x0003890b) pec_attribute_pane

0x43ac,	// (0x0002fc40) pec_content_pane_g1_ParamLimits

0x43ac,	// (0x0002fc40) pec_content_pane_g1

0xd087,	// (0x0003891b) pec_content_pane_t1_ParamLimits

0xd087,	// (0x0003891b) pec_content_pane_t1

0xd099,	// (0x0003892d) pec_content_pane_t2_ParamLimits

0xd099,	// (0x0003892d) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0003ad7c) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0003ad7c) pec_content_pane_t

0x43b8,	// (0x0002fc4c) list_single_graphic_pane_cp01_ParamLimits

0x43b8,	// (0x0002fc4c) list_single_graphic_pane_cp01

0xc21d,	// (0x00037ab1) bg_popup_sub_pane_cp04

0xd0ab,	// (0x0003893f) popup_mup_playback_window_g1

0xd0b7,	// (0x0003894b) popup_mup_playback_window_t1

0xd0cc,	// (0x00038960) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0003ad81) popup_mup_playback_window_t

0xd103,	// (0x00038997) main_image_pane_g1_ParamLimits

0xd103,	// (0x00038997) main_image_pane_g1

0xd146,	// (0x000389da) scroll_pane_cp018_ParamLimits

0xd146,	// (0x000389da) scroll_pane_cp018

0xd15e,	// (0x000389f2) scroll_pane_cp016_ParamLimits

0xd15e,	// (0x000389f2) scroll_pane_cp016

0x4485,	// (0x0002fd19) smil2_image_pane_ParamLimits

0x4485,	// (0x0002fd19) smil2_image_pane

0x44b5,	// (0x0002fd49) smil2_root_pane_ParamLimits

0x44b5,	// (0x0002fd49) smil2_root_pane

0x44ed,	// (0x0002fd81) smil2_text_pane_ParamLimits

0x44ed,	// (0x0002fd81) smil2_text_pane

0xbfc2,	// (0x00037856) bg_list_pane_cp06

0xd19a,	// (0x00038a2e) grid_radio_pane

0xbfc2,	// (0x00037856) bg_popup_window_pane_cp06

0xd1a2,	// (0x00038a36) main_fmradio_pane_t1

0xcbaa,	// (0x0003843e) heading_pane_cp04

0xd1b0,	// (0x00038a44) main_fmradio_pane_t2

0xe175,	// (0x00039a09) popup_cale_lunar_info_window_g1

0xd1be,	// (0x00038a52) main_fmradio_pane_t3

0xe17d,	// (0x00039a11) popup_cale_lunar_info_window_g2

0xd1cc,	// (0x00038a60) main_fmradio_pane_t4

0x0001,

0xd1da,	// (0x00038a6e) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0003ae5c) popup_cale_lunar_info_window_g

0xf502,	// (0x0003ad96) main_fmradio_pane_t

0xd1e8,	// (0x00038a7c) wait_bar_pane_cp03

0xd1f0,	// (0x00038a84) cell_fmradio_pane_ParamLimits

0xd1f0,	// (0x00038a84) cell_fmradio_pane

0xd049,	// (0x000388dd) cell_fmradio_pane_g1_ParamLimits

0xd049,	// (0x000388dd) cell_fmradio_pane_g1

0xbfc2,	// (0x00037856) grid_highlight_pane_cp011

0xd203,	// (0x00038a97) poc_content_pane_ParamLimits

0xd203,	// (0x00038a97) poc_content_pane

0xd215,	// (0x00038aa9) scroll_pane_cp019

0x456d,	// (0x0002fe01) popup_call_poc_act_window_ParamLimits

0x456d,	// (0x0002fe01) popup_call_poc_act_window

0x4591,	// (0x0002fe25) popup_call_poc_inact_window_ParamLimits

0x4591,	// (0x0002fe25) popup_call_poc_inact_window

0xf59f,	// (0x0003ae33) bg_popup_call_poc_act_pane_g

0xe0ed,	// (0x00039981) bg_popup_call_poc_inact_pane_g1

0xe0f5,	// (0x00039989) bg_popup_call_poc_inact_pane_g2

0xd21d,	// (0x00038ab1) popup_call_poc_act_window_g2

0xe0fd,	// (0x00039991) bg_popup_call_poc_inact_pane_g3

0xe105,	// (0x00039999) bg_popup_call_poc_inact_pane_g4

0xe10d,	// (0x000399a1) bg_popup_call_poc_inact_pane_g5

0xd225,	// (0x00038ab9) popup_call_poc_act_window_t1_ParamLimits

0xd225,	// (0x00038ab9) popup_call_poc_act_window_t1

0xd24d,	// (0x00038ae1) popup_call_poc_act_window_t2_ParamLimits

0xd24d,	// (0x00038ae1) popup_call_poc_act_window_t2

0xd275,	// (0x00038b09) popup_call_poc_act_window_t3_ParamLimits

0xd275,	// (0x00038b09) popup_call_poc_act_window_t3

0xd29d,	// (0x00038b31) popup_call_poc_act_window_t4_ParamLimits

0xd29d,	// (0x00038b31) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0003ada1) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0003ada1) popup_call_poc_act_window_t

0xe115,	// (0x000399a9) bg_popup_call_poc_inact_pane_g6

0xe11d,	// (0x000399b1) bg_popup_call_poc_inact_pane_g7

0xe125,	// (0x000399b9) bg_popup_call_poc_inact_pane_g8

0xd2af,	// (0x00038b43) popup_call_poc_inact_window_g2

0xe12d,	// (0x000399c1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0003ae20) bg_popup_call_poc_inact_pane_g

0xd2b7,	// (0x00038b4b) popup_call_poc_inact_window_t1_ParamLimits

0xd2b7,	// (0x00038b4b) popup_call_poc_inact_window_t1

0xd2cc,	// (0x00038b60) popup_call_poc_inact_window_t2_ParamLimits

0xd2cc,	// (0x00038b60) popup_call_poc_inact_window_t2

0xd2e1,	// (0x00038b75) popup_call_poc_inact_window_t3_ParamLimits

0xd2e1,	// (0x00038b75) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0003adaa) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0003adaa) popup_call_poc_inact_window_t

0xe2b2,	// (0x00039b46) context_pane_ParamLimits

0x4b0c,	// (0x000303a0) signal_pane_ParamLimits

0xce26,	// (0x000386ba) main_call2_pane

0xba32,	// (0x000372c6) popup_phob_thumbnail2_window_ParamLimits

0xba32,	// (0x000372c6) popup_phob_thumbnail2_window

0xb9cf,	// (0x00037263) aid_hotspot_pointer_arrow_pane

0xb9d7,	// (0x0003726b) aid_hotspot_pointer_hand_pane

0x48da,	// (0x0003016e) phob_pre_status_pane_g5

0x23f6,	// (0x0002dc8a) cams_zoom_pane_ParamLimits

0x2405,	// (0x0002dc99) image_vga_pane_ParamLimits

0x241f,	// (0x0002dcb3) main_camera_pane_g1_ParamLimits

0x2431,	// (0x0002dcc5) main_camera_pane_g2_ParamLimits

0x2441,	// (0x0002dcd5) main_camera_pane_g3_ParamLimits

0x2451,	// (0x0002dce5) main_camera_pane_g4_ParamLimits

0x2461,	// (0x0002dcf5) main_camera_pane_g5_ParamLimits

0x2471,	// (0x0002dd05) main_camera_pane_g6_ParamLimits

0x2483,	// (0x0002dd17) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0003aaa9) main_camera_pane_g_ParamLimits

0x2493,	// (0x0002dd27) main_camera_pane_t1_ParamLimits

0x24a9,	// (0x0002dd3d) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0003aaba) main_camera_pane_t_ParamLimits

0xc21d,	// (0x00037ab1) bg_popup_preview_window_pane_cp01_ParamLimits

0xc21d,	// (0x00037ab1) bg_popup_preview_window_pane_cp01

0xd2f6,	// (0x00038b8a) popup_phob_thumbnail2_window_g1_ParamLimits

0xd2f6,	// (0x00038b8a) popup_phob_thumbnail2_window_g1

0xbfc2,	// (0x00037856) call2_cli_visual_pane

0x45c5,	// (0x0002fe59) popup_call2_audio_conf_window_ParamLimits

0x45c5,	// (0x0002fe59) popup_call2_audio_conf_window

0x45e5,	// (0x0002fe79) popup_call2_audio_first_window_ParamLimits

0x45e5,	// (0x0002fe79) popup_call2_audio_first_window

0x467b,	// (0x0002ff0f) popup_call2_audio_in_window_ParamLimits

0x467b,	// (0x0002ff0f) popup_call2_audio_in_window

0x46c3,	// (0x0002ff57) popup_call2_audio_out_window_ParamLimits

0x46c3,	// (0x0002ff57) popup_call2_audio_out_window

0x472d,	// (0x0002ffc1) popup_call2_audio_second_window_ParamLimits

0x472d,	// (0x0002ffc1) popup_call2_audio_second_window

0x4793,	// (0x00030027) popup_call2_audio_wait_window_ParamLimits

0x4793,	// (0x00030027) popup_call2_audio_wait_window

0xbfc2,	// (0x00037856) bg_popup_call2_act_pane_cp03

0xc1ff,	// (0x00037a93) list_conf_pane_cp

0xd302,	// (0x00038b96) popup_call2_audio_conf_window_t1

0xcc07,	// (0x0003849b) list_single_graphic_popup_conf2_pane_ParamLimits

0xcc07,	// (0x0003849b) list_single_graphic_popup_conf2_pane

0xcc1a,	// (0x000384ae) list_highlight_pane_cp04

0xd310,	// (0x00038ba4) list_single_graphic_popup_conf2_pane_g1

0xcc2b,	// (0x000384bf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0003adb1) list_single_graphic_popup_conf2_pane_g

0xd31a,	// (0x00038bae) list_single_graphic_popup_conf2_pane_t1

0xd328,	// (0x00038bbc) bg_popup_call2_act_pane_cp01_ParamLimits

0xd328,	// (0x00038bbc) bg_popup_call2_act_pane_cp01

0xd3b2,	// (0x00038c46) call_type_pane_cp05_ParamLimits

0xd3b2,	// (0x00038c46) call_type_pane_cp05

0xd406,	// (0x00038c9a) popup_call2_audio_second_window_g1_ParamLimits

0xd406,	// (0x00038c9a) popup_call2_audio_second_window_g1

0xd45a,	// (0x00038cee) popup_call2_audio_second_window_g2_ParamLimits

0xd45a,	// (0x00038cee) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0003adb6) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0003adb6) popup_call2_audio_second_window_g

0xd4bf,	// (0x00038d53) popup_call2_audio_second_window_t1_ParamLimits

0xd4bf,	// (0x00038d53) popup_call2_audio_second_window_t1

0xd57a,	// (0x00038e0e) popup_call2_audio_second_window_t2_ParamLimits

0xd57a,	// (0x00038e0e) popup_call2_audio_second_window_t2

0xd5cd,	// (0x00038e61) popup_call2_audio_second_window_t3_ParamLimits

0xd5cd,	// (0x00038e61) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0003adbd) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0003adbd) popup_call2_audio_second_window_t

0xbfc2,	// (0x00037856) bg_popup_call2_in_pane_cp02

0xbfcc,	// (0x00037860) call_type_pane_cp04

0xbfd4,	// (0x00037868) popup_call2_audio_wait_window_g1

0xbfdc,	// (0x00037870) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0003a996) popup_call2_audio_wait_window_g

0xbfe4,	// (0x00037878) popup_call2_audio_wait_window_t3

0xd6c0,	// (0x00038f54) bg_popup_call2_act_pane_ParamLimits

0xd6c0,	// (0x00038f54) bg_popup_call2_act_pane

0xd780,	// (0x00039014) call_type_pane_cp03_ParamLimits

0xd780,	// (0x00039014) call_type_pane_cp03

0xd7e4,	// (0x00039078) popup_call2_audio_first_window_g1_ParamLimits

0xd7e4,	// (0x00039078) popup_call2_audio_first_window_g1

0xd854,	// (0x000390e8) popup_call2_audio_first_window_g2_ParamLimits

0xd854,	// (0x000390e8) popup_call2_audio_first_window_g2

0xcee5,	// (0x00038779) popup_call2_audio_first_window_g3_ParamLimits

0xcee5,	// (0x00038779) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0003adc6) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0003adc6) popup_call2_audio_first_window_g

0xd932,	// (0x000391c6) popup_call2_audio_first_window_t1_ParamLimits

0xd932,	// (0x000391c6) popup_call2_audio_first_window_t1

0xda35,	// (0x000392c9) popup_call2_audio_first_window_t4_ParamLimits

0xda35,	// (0x000392c9) popup_call2_audio_first_window_t4

0xdb18,	// (0x000393ac) popup_call2_audio_first_window_t5_ParamLimits

0xdb18,	// (0x000393ac) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0003add1) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0003add1) popup_call2_audio_first_window_t

0xc215,	// (0x00037aa9) bg_popup_call2_act_pane_g1

0xe185,	// (0x00039a19) popup_cale_lunar_info_window_t1

0xe193,	// (0x00039a27) popup_cale_lunar_info_window_t2

0xe1a1,	// (0x00039a35) popup_cale_lunar_info_window_t3

0xbfc2,	// (0x00037856) bg_popup_call2_bubble_pane

0xdc19,	// (0x000394ad) bg_popup_call2_in_pane_cp01_ParamLimits

0xdc19,	// (0x000394ad) bg_popup_call2_in_pane_cp01

0xb58b,	// (0x00036e1f) call_type_pane_cp02

0xdc61,	// (0x000394f5) popup_call2_audio_out_window_g1_ParamLimits

0xdc61,	// (0x000394f5) popup_call2_audio_out_window_g1

0xdc8d,	// (0x00039521) popup_call2_audio_out_window_g2_ParamLimits

0xdc8d,	// (0x00039521) popup_call2_audio_out_window_g2

0xdcb5,	// (0x00039549) popup_call2_audio_out_window_g3_ParamLimits

0xdcb5,	// (0x00039549) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0003adda) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0003adda) popup_call2_audio_out_window_g

0xdcf0,	// (0x00039584) popup_call2_audio_out_window_t1_ParamLimits

0xdcf0,	// (0x00039584) popup_call2_audio_out_window_t1

0xdd4f,	// (0x000395e3) popup_call2_audio_out_window_t2_ParamLimits

0xdd4f,	// (0x000395e3) popup_call2_audio_out_window_t2

0xdda3,	// (0x00039637) popup_call2_audio_out_window_t3_ParamLimits

0xdda3,	// (0x00039637) popup_call2_audio_out_window_t3

0xddb9,	// (0x0003964d) popup_call2_audio_out_window_t4_ParamLimits

0xddb9,	// (0x0003964d) popup_call2_audio_out_window_t4

0xddcf,	// (0x00039663) popup_call2_audio_out_window_t5_ParamLimits

0xddcf,	// (0x00039663) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0003ade3) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0003ade3) popup_call2_audio_out_window_t

0xde33,	// (0x000396c7) bg_popup_call2_in_pane_ParamLimits

0xde33,	// (0x000396c7) bg_popup_call2_in_pane

0xde8f,	// (0x00039723) popup_call2_audio_in_window_g1_ParamLimits

0xde8f,	// (0x00039723) popup_call2_audio_in_window_g1

0xdec7,	// (0x0003975b) popup_call2_audio_in_window_g2_ParamLimits

0xdec7,	// (0x0003975b) popup_call2_audio_in_window_g2

0xdeff,	// (0x00039793) popup_call2_audio_in_window_g3_ParamLimits

0xdeff,	// (0x00039793) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0003adf0) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0003adf0) popup_call2_audio_in_window_g

0xdf57,	// (0x000397eb) popup_call2_audio_in_window_t1_ParamLimits

0xdf57,	// (0x000397eb) popup_call2_audio_in_window_t1

0xdfd7,	// (0x0003986b) popup_call2_audio_in_window_t2_ParamLimits

0xdfd7,	// (0x0003986b) popup_call2_audio_in_window_t2

0xe057,	// (0x000398eb) popup_call2_audio_in_window_t3_ParamLimits

0xe057,	// (0x000398eb) popup_call2_audio_in_window_t3

0xe071,	// (0x00039905) popup_call2_audio_in_window_t4_ParamLimits

0xe071,	// (0x00039905) popup_call2_audio_in_window_t4

0xe083,	// (0x00039917) popup_call2_audio_in_window_t5_ParamLimits

0xe083,	// (0x00039917) popup_call2_audio_in_window_t5

0xe098,	// (0x0003992c) popup_call2_audio_in_window_t6_ParamLimits

0xe098,	// (0x0003992c) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0003adf9) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0003adf9) popup_call2_audio_in_window_t

0xc215,	// (0x00037aa9) bg_popup_call2_in_pane_g1

0xe1af,	// (0x00039a43) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0003ae61) popup_cale_lunar_info_window_t

0xc21d,	// (0x00037ab1) bg_popup_call2_rect_pane_ParamLimits

0xc21d,	// (0x00037ab1) bg_popup_call2_rect_pane

0xbfc2,	// (0x00037856) call2_cli_visual_graphic_pane

0xbfc2,	// (0x00037856) call2_cli_visual_text_pane

0xba59,	// (0x000372ed) smil_status_volume_pane_g3

0x0002,

0xc337,	// (0x00037bcb) call2_cli_visual_graphic_pane_g1

0xc337,	// (0x00037bcb) call2_cli_visual_graphic_pane_g2

0xc337,	// (0x00037bcb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0003ae06) call2_cli_visual_graphic_pane_g

0xe0ad,	// (0x00039941) bg_popup_call2_rect_pane_g1

0xc3c3,	// (0x00037c57) bg_popup_call2_rect_pane_g2

0xe0b5,	// (0x00039949) bg_popup_call2_rect_pane_g3

0xe0bd,	// (0x00039951) bg_popup_call2_rect_pane_g4

0xe0c5,	// (0x00039959) bg_popup_call2_rect_pane_g5

0xe0cd,	// (0x00039961) bg_popup_call2_rect_pane_g6

0xe0d5,	// (0x00039969) bg_popup_call2_rect_pane_g7

0xe0dd,	// (0x00039971) bg_popup_call2_rect_pane_g8

0xe0e5,	// (0x00039979) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0003ae0d) bg_popup_call2_rect_pane_g

0xe0ed,	// (0x00039981) bg_popup_call2_bubble_pane_g1

0xe0f5,	// (0x00039989) bg_popup_call2_bubble_pane_g2

0xe0fd,	// (0x00039991) bg_popup_call2_bubble_pane_g3

0xe105,	// (0x00039999) bg_popup_call2_bubble_pane_g4

0xe10d,	// (0x000399a1) bg_popup_call2_bubble_pane_g5

0xe115,	// (0x000399a9) bg_popup_call2_bubble_pane_g6

0xe11d,	// (0x000399b1) bg_popup_call2_bubble_pane_g7

0xe125,	// (0x000399b9) bg_popup_call2_bubble_pane_g8

0xe12d,	// (0x000399c1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0003ae20) bg_popup_call2_bubble_pane_g

0x1ec8,	// (0x0002d75c) aid_cale_week_size_cell_pane

0x24bf,	// (0x0002dd53) aid_cams_cif_uncrop_pane_ParamLimits

0x24bf,	// (0x0002dd53) aid_cams_cif_uncrop_pane

0x266f,	// (0x0002df03) aid_cams_size_cell_ParamLimits

0x266f,	// (0x0002df03) aid_cams_size_cell

0x2683,	// (0x0002df17) grid_cams_pane_ParamLimits

0x269d,	// (0x0002df31) linegrid_cams_pane_ParamLimits

0x2876,	// (0x0002e10a) call_video_pane_t1

0x2894,	// (0x0002e128) call_video_pane_t2

0x0001,

0xf279,	// (0x0003ab0d) call_video_pane_t

0x2cc0,	// (0x0002e554) aid_cale_month_size_cell_pane_ParamLimits

0x2cc0,	// (0x0002e554) aid_cale_month_size_cell_pane

0xf616,	// (0x0003aeaa) smil_status_volume_pane_g

0xba66,	// (0x000372fa) volume_smil_pane_ParamLimits

0xb426,	// (0x00036cba) aid_popup2_width_pane

0x1e22,	// (0x0002d6b6) cell_qdial_pane_g4_ParamLimits

0x1e22,	// (0x0002d6b6) cell_qdial_pane_g4

0x3b7b,	// (0x0002f40f) aid_blid_cardinal_pane_ParamLimits

0x3b87,	// (0x0002f41b) aid_blid_destination_pane_ParamLimits

0x3b87,	// (0x0002f41b) aid_blid_destination_pane

0xc21d,	// (0x00037ab1) bg_popup_call_poc_act_pane_ParamLimits

0xc21d,	// (0x00037ab1) bg_popup_call_poc_act_pane

0xc21d,	// (0x00037ab1) bg_popup_call_poc_inact_pane_ParamLimits

0xc21d,	// (0x00037ab1) bg_popup_call_poc_inact_pane

0xe135,	// (0x000399c9) bg_popup_call_poc_act_pane_g1

0xe13d,	// (0x000399d1) bg_popup_call_poc_act_pane_g2

0xe145,	// (0x000399d9) bg_popup_call_poc_act_pane_g3

0xe105,	// (0x00039999) bg_popup_call_poc_act_pane_g4

0xe10d,	// (0x000399a1) bg_popup_call_poc_act_pane_g5

0xe14d,	// (0x000399e1) bg_popup_call_poc_act_pane_g6

0xe11d,	// (0x000399b1) bg_popup_call_poc_act_pane_g7

0xe155,	// (0x000399e9) bg_popup_call_poc_act_pane_g8

0xbfc2,	// (0x00037856) main_usb_pane

0xba0d,	// (0x000372a1) popup_cale_lunar_info_window

0x2b6c,	// (0x0002e400) im_reading_pane_t1_ParamLimits

0xc5ab,	// (0x00037e3f) list_im_pane_ParamLimits

0xc5bc,	// (0x00037e50) scroll_pane_cp07_ParamLimits

0xbfc2,	// (0x00037856) grid_highlight_pane_cp012

0xc21d,	// (0x00037ab1) mup_scale_pane_ParamLimits

0xd049,	// (0x000388dd) main_usb_pane_g1_ParamLimits

0xd049,	// (0x000388dd) main_usb_pane_g1

0x47ef,	// (0x00030083) main_usb_pane_g2_ParamLimits

0x47ef,	// (0x00030083) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0003ae4a) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0003ae4a) main_usb_pane_g

0x4805,	// (0x00030099) main_usb_pane_t1_ParamLimits

0x4805,	// (0x00030099) main_usb_pane_t1

0x4817,	// (0x000300ab) main_usb_pane_t2_ParamLimits

0x4817,	// (0x000300ab) main_usb_pane_t2

0x4829,	// (0x000300bd) main_usb_pane_t3_ParamLimits

0x4829,	// (0x000300bd) main_usb_pane_t3

0x483b,	// (0x000300cf) main_usb_pane_t4_ParamLimits

0x483b,	// (0x000300cf) main_usb_pane_t4

0x484d,	// (0x000300e1) main_usb_pane_t5_ParamLimits

0x484d,	// (0x000300e1) main_usb_pane_t5

0x485f,	// (0x000300f3) main_usb_pane_t6_ParamLimits

0x485f,	// (0x000300f3) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0003ae4f) main_usb_pane_t_ParamLimits

0x3b2a,	// (0x0002f3be) aid_text_placing

0x3b33,	// (0x0002f3c7) main_location2_pane_t1_ParamLimits

0x3b45,	// (0x0002f3d9) main_location2_pane_t2_ParamLimits

0x3b57,	// (0x0002f3eb) main_location2_pane_t3_ParamLimits

0x3b69,	// (0x0002f3fd) main_location2_pane_t4_ParamLimits

0x3b69,	// (0x0002f3fd) main_location2_pane_t4

0xf3da,	// (0x0003ac6e) main_location2_pane_t_ParamLimits

0xc259,	// (0x00037aed) find_pinb_pane_g2_ParamLimits

0xc259,	// (0x00037aed) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0003a9bc) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0003a9bc) find_pinb_pane_g

0xc265,	// (0x00037af9) find_pinb_pane_t1_ParamLimits

0xc277,	// (0x00037b0b) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0003a9c1) find_pinb_pane_t_ParamLimits

0xbfc2,	// (0x00037856) main_call3_pane

0x317f,	// (0x0002ea13) cale_month_day_heading_pane_t1_ParamLimits

0x3205,	// (0x0002ea99) cale_month_day_heading_pane_t2_ParamLimits

0x3296,	// (0x0002eb2a) cale_month_day_heading_pane_t3_ParamLimits

0x3327,	// (0x0002ebbb) cale_month_day_heading_pane_t4_ParamLimits

0x33bc,	// (0x0002ec50) cale_month_day_heading_pane_t5_ParamLimits

0x345d,	// (0x0002ecf1) cale_month_day_heading_pane_t6_ParamLimits

0x34fe,	// (0x0002ed92) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0003ab45) cale_month_day_heading_pane_t_ParamLimits

0xc806,	// (0x0003809a) smil_status_volume_pane

0x42ea,	// (0x0002fb7e) postcard_address_pane_ParamLimits

0x42ea,	// (0x0002fb7e) postcard_address_pane

0x42fc,	// (0x0002fb90) postcard_message_pane_ParamLimits

0x42fc,	// (0x0002fb90) postcard_message_pane

0x47cd,	// (0x00030061) call2_cli_visual_pane_t1_ParamLimits

0x47cd,	// (0x00030061) call2_cli_visual_pane_t1

0x4d39,	// (0x000305cd) postcard_message_pane_t1_ParamLimits

0x4d39,	// (0x000305cd) postcard_message_pane_t1

0x4d22,	// (0x000305b6) postcard_address_pane_t1_ParamLimits

0x4d22,	// (0x000305b6) postcard_address_pane_t1

0x4d0e,	// (0x000305a2) popup_call3_audio_in_window_ParamLimits

0x4d0e,	// (0x000305a2) popup_call3_audio_in_window

0x4b99,	// (0x0003042d) bg_popup_call3_in_pane_ParamLimits

0x4b99,	// (0x0003042d) bg_popup_call3_in_pane

0x4c0f,	// (0x000304a3) popup_call3_audio_in_window_g1_ParamLimits

0x4c0f,	// (0x000304a3) popup_call3_audio_in_window_g1

0x4c2f,	// (0x000304c3) popup_call3_audio_in_window_g2_ParamLimits

0x4c2f,	// (0x000304c3) popup_call3_audio_in_window_g2

0x4c4f,	// (0x000304e3) popup_call3_audio_in_window_g3_ParamLimits

0x4c4f,	// (0x000304e3) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0003aeb1) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0003aeb1) popup_call3_audio_in_window_g

0x4c80,	// (0x00030514) popup_call3_audio_in_window_t1_ParamLimits

0x4c80,	// (0x00030514) popup_call3_audio_in_window_t1

0x4cbe,	// (0x00030552) popup_call3_audio_in_window_t2_ParamLimits

0x4cbe,	// (0x00030552) popup_call3_audio_in_window_t2

0x4cfc,	// (0x00030590) popup_call3_audio_in_window_t3_ParamLimits

0x4cfc,	// (0x00030590) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0003aeba) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0003aeba) popup_call3_audio_in_window_t

0xce26,	// (0x000386ba) bg_popup_call3_rect_pane

0xe0ad,	// (0x00039941) bg_popup_call3_rect_pane_g1

0xc3c3,	// (0x00037c57) bg_popup_call3_rect_pane_g2

0xe0b5,	// (0x00039949) bg_popup_call3_rect_pane_g3

0xe0bd,	// (0x00039951) bg_popup_call3_rect_pane_g4

0xe0c5,	// (0x00039959) bg_popup_call3_rect_pane_g5

0xe0cd,	// (0x00039961) bg_popup_call3_rect_pane_g6

0xe0d5,	// (0x00039969) bg_popup_call3_rect_pane_g7

0x3f5d,	// (0x0002f7f1) mup_visualizer_osc_pane

0xcef3,	// (0x00038787) mup_visualizer_spec_pane

0x4bc9,	// (0x0003045d) call3_video_qcif_pane_ParamLimits

0x4bc9,	// (0x0003045d) call3_video_qcif_pane

0x4bdc,	// (0x00030470) call3_video_qcif_uncrop_pane_ParamLimits

0x4bdc,	// (0x00030470) call3_video_qcif_uncrop_pane

0x4bea,	// (0x0003047e) call3_video_subqcif_pane_ParamLimits

0x4bea,	// (0x0003047e) call3_video_subqcif_pane

0x4bfe,	// (0x00030492) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bfe,	// (0x00030492) call3_video_subqcif_uncrop_pane

0x4c6f,	// (0x00030503) popup_call3_audio_in_window_g4_ParamLimits

0x4c6f,	// (0x00030503) popup_call3_audio_in_window_g4

0x4b88,	// (0x0003041c) mup_spec_half_pane

0x4b91,	// (0x00030425) mup_spec_half_pane_cp

0xe312,	// (0x00039ba6) mup_osc_middle_pane

0xe31b,	// (0x00039baf) mup_visualizer_osc_pane_g1

0x4b68,	// (0x000303fc) mup_spec_bar_pane_ParamLimits

0x4b68,	// (0x000303fc) mup_spec_bar_pane

0xe2ff,	// (0x00039b93) mup_spec_bar_pane_g1

0xe309,	// (0x00039b9d) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0003aea5) mup_spec_bar_pane_g

0x1ec8,	// (0x0002d75c) aid_cale_week_size_cell_pane_ParamLimits

0x1ee2,	// (0x0002d776) bg_cale_heading_pane_ParamLimits

0xc400,	// (0x00037c94) bg_cale_pane_cp01_ParamLimits

0x1efa,	// (0x0002d78e) cale_week_corner_pane_ParamLimits

0x1f19,	// (0x0002d7ad) cale_week_day_heading_pane_ParamLimits

0x1f36,	// (0x0002d7ca) cale_week_scroll_pane_g1_ParamLimits

0x1f49,	// (0x0002d7dd) cale_week_scroll_pane_g2_ParamLimits

0x1f61,	// (0x0002d7f5) cale_week_scroll_pane_g3_ParamLimits

0x1f79,	// (0x0002d80d) cale_week_scroll_pane_g4_ParamLimits

0x1f91,	// (0x0002d825) cale_week_scroll_pane_g5_ParamLimits

0x1fb1,	// (0x0002d845) cale_week_scroll_pane_g6_ParamLimits

0x1fd1,	// (0x0002d865) cale_week_scroll_pane_g7_ParamLimits

0x1ff1,	// (0x0002d885) cale_week_scroll_pane_g8_ParamLimits

0x2015,	// (0x0002d8a9) cale_week_scroll_pane_g9_ParamLimits

0x202d,	// (0x0002d8c1) cale_week_scroll_pane_g10_ParamLimits

0x2045,	// (0x0002d8d9) cale_week_scroll_pane_g11_ParamLimits

0x205d,	// (0x0002d8f1) cale_week_scroll_pane_g12_ParamLimits

0x2075,	// (0x0002d909) cale_week_scroll_pane_g13_ParamLimits

0x2075,	// (0x0002d909) cale_week_scroll_pane_g14_ParamLimits

0x2075,	// (0x0002d909) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0003aa4d) cale_week_scroll_pane_g_ParamLimits

0x208d,	// (0x0002d921) cale_week_time_pane_ParamLimits

0x20b1,	// (0x0002d945) grid_cale_week_pane_ParamLimits

0xc41e,	// (0x00037cb2) listscroll_cale_week_pane_t1

0xc430,	// (0x00037cc4) scroll_pane_cp08_ParamLimits

0x2d15,	// (0x0002e5a9) cale_month_corner_pane_ParamLimits

0xc7dc,	// (0x00038070) cale_month_pane_t1

0x311d,	// (0x0002e9b1) cale_month_week_pane_ParamLimits

0x3986,	// (0x0002f21a) popup_call_status_window_g1_ParamLimits

0x399a,	// (0x0002f22e) popup_call_status_window_g2_ParamLimits

0x39ae,	// (0x0002f242) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0003abf5) popup_call_status_window_g_ParamLimits

0xcb9a,	// (0x0003842e) aid_call2_pane

0x41cf,	// (0x0002fa63) msg_header_pane_g1

0x42ea,	// (0x0002fb7e) postcard_address2_pane_ParamLimits

0x42ea,	// (0x0002fb7e) postcard_address2_pane

0x42fc,	// (0x0002fb90) postcard_message2_pane_ParamLimits

0x42fc,	// (0x0002fb90) postcard_message2_pane

0x4b1a,	// (0x000303ae) message2_row_pane_ParamLimits

0x4b1a,	// (0x000303ae) message2_row_pane

0x4b36,	// (0x000303ca) address2_row_pane_ParamLimits

0x4b36,	// (0x000303ca) address2_row_pane

0xe2cd,	// (0x00039b61) postcard_message2_row_pane_g1

0xe2d5,	// (0x00039b69) postcard_message2_row_pane_t1

0xe2cd,	// (0x00039b61) address2_row_pane_g1

0xe2d5,	// (0x00039b69) address2_row_pane_t1

0x07ac,	// (0x0002c040) aid_size_cell_vorec

0xbfc2,	// (0x00037856) main_rss_pane

0x4b49,	// (0x000303dd) rss_list_single_pane_ParamLimits

0x4b49,	// (0x000303dd) rss_list_single_pane

0xe2e3,	// (0x00039b77) rss_list_single_pane_t1

0xe2f1,	// (0x00039b85) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0003aea0) rss_list_single_pane_t

0xbfc2,	// (0x00037856) main_camera2_pane

0xbfc2,	// (0x00037856) main_video2_pane

0x0b8c,	// (0x0002c420) cams_zoom_pane_cp2_ParamLimits

0x0b8c,	// (0x0002c420) cams_zoom_pane_cp2

0x0bac,	// (0x0002c440) image2_vga_pane_ParamLimits

0x0bac,	// (0x0002c440) image2_vga_pane

0x0bfd,	// (0x0002c491) main_camera2_pane_g1_ParamLimits

0x0bfd,	// (0x0002c491) main_camera2_pane_g1

0x0c1d,	// (0x0002c4b1) main_camera2_pane_g2_ParamLimits

0x0c1d,	// (0x0002c4b1) main_camera2_pane_g2

0x0c3d,	// (0x0002c4d1) main_camera2_pane_g3_ParamLimits

0x0c3d,	// (0x0002c4d1) main_camera2_pane_g3

0x0c5d,	// (0x0002c4f1) main_camera2_pane_g4_ParamLimits

0x0c5d,	// (0x0002c4f1) main_camera2_pane_g4

0x0c7d,	// (0x0002c511) main_camera2_pane_g5_ParamLimits

0x0c7d,	// (0x0002c511) main_camera2_pane_g5

0x0c9d,	// (0x0002c531) main_camera2_pane_g6_ParamLimits

0x0c9d,	// (0x0002c531) main_camera2_pane_g6

0x0cbd,	// (0x0002c551) main_camera2_pane_g7_ParamLimits

0x0cbd,	// (0x0002c551) main_camera2_pane_g7

0x0cdd,	// (0x0002c571) main_camera2_pane_g8_ParamLimits

0x0cdd,	// (0x0002c571) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0003aec1) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0003aec1) main_camera2_pane_g

0x0d1d,	// (0x0002c5b1) main_camera2_pane_t1_ParamLimits

0x0d1d,	// (0x0002c5b1) main_camera2_pane_t1

0x0d52,	// (0x0002c5e6) main_camera2_pane_t2_ParamLimits

0x0d52,	// (0x0002c5e6) main_camera2_pane_t2

0x0d78,	// (0x0002c60c) main_camera2_pane_t3_ParamLimits

0x0d78,	// (0x0002c60c) main_camera2_pane_t3

0x0dd6,	// (0x0002c66a) main_camera2_pane_t4_ParamLimits

0x0dd6,	// (0x0002c66a) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0003aed4) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0003aed4) main_camera2_pane_t

0x0e68,	// (0x0002c6fc) cams_zoom_pane_cp4_ParamLimits

0x0e68,	// (0x0002c6fc) cams_zoom_pane_cp4

0x0e7e,	// (0x0002c712) image2_cif_pane_ParamLimits

0x0e7e,	// (0x0002c712) image2_cif_pane

0x0ea9,	// (0x0002c73d) image2_subqcif_pane_ParamLimits

0x0ea9,	// (0x0002c73d) image2_subqcif_pane

0x0ec3,	// (0x0002c757) main_video2_pane_g1_ParamLimits

0x0ec3,	// (0x0002c757) main_video2_pane_g1

0x0edd,	// (0x0002c771) main_video2_pane_g2_ParamLimits

0x0edd,	// (0x0002c771) main_video2_pane_g2

0x0ef3,	// (0x0002c787) main_video2_pane_g3_ParamLimits

0x0ef3,	// (0x0002c787) main_video2_pane_g3

0x0f09,	// (0x0002c79d) main_video2_pane_g4_ParamLimits

0x0f09,	// (0x0002c79d) main_video2_pane_g4

0x0f1f,	// (0x0002c7b3) main_video2_pane_g5_ParamLimits

0x0f1f,	// (0x0002c7b3) main_video2_pane_g5

0x0f35,	// (0x0002c7c9) main_video2_pane_g6_ParamLimits

0x0f35,	// (0x0002c7c9) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0003aee3) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0003aee3) main_video2_pane_g

0x0f4f,	// (0x0002c7e3) main_video2_pane_t1_ParamLimits

0x0f4f,	// (0x0002c7e3) main_video2_pane_t1

0x0f73,	// (0x0002c807) main_video2_pane_t2_ParamLimits

0x0f73,	// (0x0002c807) main_video2_pane_t2

0x0fc1,	// (0x0002c855) main_video2_pane_t3_ParamLimits

0x0fc1,	// (0x0002c855) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0003aef0) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0003aef0) main_video2_pane_t

0x491a,	// (0x000301ae) call_muted_g2

0x0001,

0xf5fe,	// (0x0003ae92) call_muted_g

0xbfc2,	// (0x00037856) main_mup2_pane

0x4d54,	// (0x000305e8) main_mup2_pane_g1_ParamLimits

0x4d54,	// (0x000305e8) main_mup2_pane_g1

0x4d60,	// (0x000305f4) main_mup2_pane_g2_ParamLimits

0x4d60,	// (0x000305f4) main_mup2_pane_g2

0xbad4,	// (0x00037368) main_mup_pane_g13_cp1

0xbadc,	// (0x00037370) mup_volume_pane_cp1

0x4d7c,	// (0x00030610) main_mup2_pane_g4_ParamLimits

0x4d7c,	// (0x00030610) main_mup2_pane_g4

0x4d8e,	// (0x00030622) main_mup2_pane_g5_ParamLimits

0x4d8e,	// (0x00030622) main_mup2_pane_g5

0x4da0,	// (0x00030634) main_mup2_pane_g6_ParamLimits

0x4da0,	// (0x00030634) main_mup2_pane_g6

0x4db2,	// (0x00030646) main_mup2_pane_g7_ParamLimits

0x4db2,	// (0x00030646) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0003aef7) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0003aef7) main_mup2_pane_g

0x4dca,	// (0x0003065e) main_mup2_pane_t1_ParamLimits

0x4dca,	// (0x0003065e) main_mup2_pane_t1

0x4de0,	// (0x00030674) main_mup2_pane_t2_ParamLimits

0x4de0,	// (0x00030674) main_mup2_pane_t2

0x4df6,	// (0x0003068a) main_mup2_pane_t3_ParamLimits

0x4df6,	// (0x0003068a) main_mup2_pane_t3

0x4e0c,	// (0x000306a0) main_mup2_pane_t4_ParamLimits

0x4e0c,	// (0x000306a0) main_mup2_pane_t4

0x4e24,	// (0x000306b8) main_mup2_pane_t5_ParamLimits

0x4e24,	// (0x000306b8) main_mup2_pane_t5

0x4e3c,	// (0x000306d0) main_mup2_pane_t6_ParamLimits

0x4e3c,	// (0x000306d0) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0003af06) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0003af06) main_mup2_pane_t

0x4e6c,	// (0x00030700) mup2_visualizer_pane_ParamLimits

0x4e6c,	// (0x00030700) mup2_visualizer_pane

0x4e9a,	// (0x0003072e) mup_progress_pane_cp_ParamLimits

0x4e9a,	// (0x0003072e) mup_progress_pane_cp

0xbabf,	// (0x00037353) mup_volume_pane_cp_ParamLimits

0xbabf,	// (0x00037353) mup_volume_pane_cp

0x4eae,	// (0x00030742) mup2_visualizer_pane_g1_ParamLimits

0x4eae,	// (0x00030742) mup2_visualizer_pane_g1

0xe352,	// (0x00039be6) mup2_visualizer_pane_g2_ParamLimits

0xe352,	// (0x00039be6) mup2_visualizer_pane_g2

0x4ec5,	// (0x00030759) mup2_visualizer_pane_g3_ParamLimits

0x4ec5,	// (0x00030759) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0003af13) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0003af13) mup2_visualizer_pane_g

0xd192,	// (0x00038a26) aid_size_cell_fmradio

0x0872,	// (0x0002c106) aid_height_parent_landcape

0xc63a,	// (0x00037ece) wml_content_pane_cp

0xc642,	// (0x00037ed6) wml_tabs_pane

0xc64b,	// (0x00037edf) popup_wml_miniature_window

0xc653,	// (0x00037ee7) scroll_pane_cp021

0xc667,	// (0x00037efb) wml_content_pane_comp8

0xbfc2,	// (0x00037856) bg_popup_sub_pane_cp05

0xe370,	// (0x00039c04) popup_wml_miniature_window_g1

0xe378,	// (0x00039c0c) wml_miniature_view_pane

0x4ed1,	// (0x00030765) aid_size_wml_view

0x4ed9,	// (0x0003076d) wml_miniature_view_pane_g1

0x4ee2,	// (0x00030776) wml_miniature_view_pane_g2

0x4eeb,	// (0x0003077f) wml_miniature_view_pane_g3

0x4ef3,	// (0x00030787) wml_miniature_view_pane_g4

0x4efb,	// (0x0003078f) wml_miniature_view_pane_g5

0x4f03,	// (0x00030797) wml_miniature_view_pane_g6

0x4f0b,	// (0x0003079f) wml_miniature_view_pane_g7

0x4f13,	// (0x000307a7) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0003af1a) wml_miniature_view_pane_g

0xe380,	// (0x00039c14) background_graphic_ParamLimits

0xe380,	// (0x00039c14) background_graphic

0xe38c,	// (0x00039c20) wml_tabs_2_pane

0xe395,	// (0x00039c29) wml_tabs_3_pane_ParamLimits

0xe395,	// (0x00039c29) wml_tabs_3_pane

0xe3a7,	// (0x00039c3b) wml_tabs_4_pane_ParamLimits

0xe3a7,	// (0x00039c3b) wml_tabs_4_pane

0xe3bd,	// (0x00039c51) wml_tabs_5_pane_ParamLimits

0xe3bd,	// (0x00039c51) wml_tabs_5_pane

0xe3d7,	// (0x00039c6b) wml_tabs_pane_g2_ParamLimits

0xe3d7,	// (0x00039c6b) wml_tabs_pane_g2

0xe3eb,	// (0x00039c7f) wml_tabs_pane_g3_ParamLimits

0xe3eb,	// (0x00039c7f) wml_tabs_pane_g3

0x4f1b,	// (0x000307af) wml_tabs_2_active_pane_ParamLimits

0x4f1b,	// (0x000307af) wml_tabs_2_active_pane

0x4f2f,	// (0x000307c3) wml_tabs_2_passive_pane_ParamLimits

0x4f2f,	// (0x000307c3) wml_tabs_2_passive_pane

0x4f43,	// (0x000307d7) wml_tabs_3_active_pane_cp_ParamLimits

0x4f43,	// (0x000307d7) wml_tabs_3_active_pane_cp

0x4f58,	// (0x000307ec) wml_tabs_3_passive_pane_ParamLimits

0x4f58,	// (0x000307ec) wml_tabs_3_passive_pane

0x4f6b,	// (0x000307ff) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f6b,	// (0x000307ff) wml_tabs_3_passive_pane_cp

0x4f82,	// (0x00030816) tabs_4_active_pane

0x4f8a,	// (0x0003081e) tabs_4_passive_pane

0x4f94,	// (0x00030828) tabs_4_passive_pane_cp

0x4f9c,	// (0x00030830) tabs_4_passive_pane_cp2

0x47e7,	// (0x0003007b) aid_height_text

0x3f33,	// (0x0002f7c7) mup_volume_cont_pane_ParamLimits

0x3f33,	// (0x0002f7c7) mup_volume_cont_pane

0x1be6,	// (0x0002d47a) aid_size_cell_pinb

0x1bf0,	// (0x0002d484) aid_size_list_pinb

0x4e86,	// (0x0003071a) mup2_volume_cont_pane_ParamLimits

0x4e86,	// (0x0003071a) mup2_volume_cont_pane

0xbaab,	// (0x0003733f) mup2_volume_cont_pane_g1_ParamLimits

0xbaab,	// (0x0003733f) mup2_volume_cont_pane_g1

0x035c,	// (0x0002bbf0) aid_size_cell_touch_ParamLimits

0x035c,	// (0x0002bbf0) aid_size_cell_touch

0x0544,	// (0x0002bdd8) touch_pane_ParamLimits

0x0544,	// (0x0002bdd8) touch_pane

0xb492,	// (0x00036d26) main_rss2_pane

0xe408,	// (0x00039c9c) listscroll_rss2_pane

0xe411,	// (0x00039ca5) rss2_navigation_pane

0xe419,	// (0x00039cad) list_rss2_pane

0xccdd,	// (0x00038571) scroll_pane_cp22

0xe421,	// (0x00039cb5) rss2_navigation_pane_g1

0xe42a,	// (0x00039cbe) rss2_navigation_pane_g2

0xe432,	// (0x00039cc6) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0003af2b) rss2_navigation_pane_g

0xe43a,	// (0x00039cce) rss2_navigation_pane_t1

0x4fa6,	// (0x0003083a) rss2_list_single_pane_ParamLimits

0x4fa6,	// (0x0003083a) rss2_list_single_pane

0xe448,	// (0x00039cdc) rss2_list_single_pane_t2

0xe456,	// (0x00039cea) rss2_list_single_pane_t3_ParamLimits

0xe456,	// (0x00039cea) rss2_list_single_pane_t3

0xe473,	// (0x00039d07) rss2_list_single_pane_t4

0x379a,	// (0x0002f02e) smil_status_pane_g1

0xb484,	// (0x00036d18) main_image2_pane_ParamLimits

0xb484,	// (0x00036d18) main_image2_pane

0x0cfd,	// (0x0002c591) main_camera2_pane_g9_ParamLimits

0x0cfd,	// (0x0002c591) main_camera2_pane_g9

0x0e2b,	// (0x0002c6bf) main_camera2_pane_t5_ParamLimits

0x0e2b,	// (0x0002c6bf) main_camera2_pane_t5

0xba7b,	// (0x0003730f) main_camera2_pane_t6_ParamLimits

0xba7b,	// (0x0003730f) main_camera2_pane_t6

0x4fbb,	// (0x0003084f) main_image2_pane_g1_ParamLimits

0x4fbb,	// (0x0003084f) main_image2_pane_g1

0x4523,	// (0x0002fdb7) smil2_video_pane_ParamLimits

0x4523,	// (0x0002fdb7) smil2_video_pane

0xb432,	// (0x00036cc6) aid_zoom_text_primary_cp

0xb47a,	// (0x00036d0e) popup_preview_fixed_window

0xc5a3,	// (0x00037e37) im_reading_pane_g1

0x0b74,	// (0x0002c408) cams2_bc_adjust_pane_cp_ParamLimits

0x0b74,	// (0x0002c408) cams2_bc_adjust_pane_cp

0x0e5a,	// (0x0002c6ee) cams2_bc_adjust_pane_ParamLimits

0x0e5a,	// (0x0002c6ee) cams2_bc_adjust_pane

0x4fd1,	// (0x00030865) cams2_bc_adjust_pane_g1

0xbae4,	// (0x00037378) cams2_slider_pane

0xbaed,	// (0x00037381) cams2_slider_pane_g1

0xbaf6,	// (0x0003738a) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0003af32) cams2_slider_pane_g

0x05b4,	// (0x0002be48) calc_display_pane_ParamLimits

0x05dc,	// (0x0002be70) calc_paper_pane_ParamLimits

0x05ff,	// (0x0002be93) grid_calc_pane_ParamLimits

0xb9a0,	// (0x00037234) popup_clock_digital_window_t1_ParamLimits

0xd12f,	// (0x000389c3) main_image_pane_t1

0x0596,	// (0x0002be2a) aid_size_cell_calc_ParamLimits

0x0596,	// (0x0002be2a) aid_size_cell_calc

0x08ca,	// (0x0002c15e) popup_blid_sat_info2_window_ParamLimits

0x08ca,	// (0x0002c15e) popup_blid_sat_info2_window

0xe489,	// (0x00039d1d) aid_size_cell_blid

0xe491,	// (0x00039d25) bg_popup_window_pane_cp07

0xe4b4,	// (0x00039d48) grid_popup_blid_pane

0xe4be,	// (0x00039d52) heading_pane_cp05_ParamLimits

0xe4be,	// (0x00039d52) heading_pane_cp05

0xe588,	// (0x00039e1c) cell_popup_blid_pane_ParamLimits

0xe588,	// (0x00039e1c) cell_popup_blid_pane

0xe5ac,	// (0x00039e40) cell_popup_blid_pane_g1

0xe5b4,	// (0x00039e48) cell_popup_blid_pane_t1

0x4e56,	// (0x000306ea) mup2_indicator_pane_ParamLimits

0x4e56,	// (0x000306ea) mup2_indicator_pane

0xce26,	// (0x000386ba) mup2_visualizer_osc_pane

0xe35e,	// (0x00039bf2) mup2_visualizer_spec_pane_ParamLimits

0xe35e,	// (0x00039bf2) mup2_visualizer_spec_pane

0x4fd9,	// (0x0003086d) mup2_spec_half_pane

0x4fe2,	// (0x00030876) mup2_spec_half_pane_cp

0x4fea,	// (0x0003087e) mup2_spec_bar_pane_ParamLimits

0x4fea,	// (0x0003087e) mup2_spec_bar_pane

0xe2ff,	// (0x00039b93) mup2_spec_bar_pane_g1

0xe309,	// (0x00039b9d) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0003aea5) mup2_spec_bar_pane_g

0x500a,	// (0x0003089e) mup2_osc_middle_pane

0xe31b,	// (0x00039baf) mup2_visualizer_osc_pane_g1

0xb4bc,	// (0x00036d50) popup_number_entry_window_t1_ParamLimits

0xb4cf,	// (0x00036d63) popup_number_entry_window_t2_ParamLimits

0xb4e1,	// (0x00036d75) popup_number_entry_window_t3_ParamLimits

0x1b28,	// (0x0002d3bc) popup_number_entry_window_t5_ParamLimits

0x1b28,	// (0x0002d3bc) popup_number_entry_window_t5

0xf0d3,	// (0x0003a967) popup_number_entry_window_t_ParamLimits

0xb4f3,	// (0x00036d87) text_title_cp2_ParamLimits

0xb9df,	// (0x00037273) aid_hotspot_pointer_text2_pane

0xb9f9,	// (0x0003728d) main_viewer_pane_g9_ParamLimits

0xb9f9,	// (0x0003728d) main_viewer_pane_g9

0xc7dc,	// (0x00038070) cale_month_pane_t1_ParamLimits

0xc819,	// (0x000380ad) bg_cale_pane_ParamLimits

0xc831,	// (0x000380c5) list_cale_pane_ParamLimits

0xc842,	// (0x000380d6) listscroll_cale_day_pane_t1

0xc854,	// (0x000380e8) scroll_pane_cp09_ParamLimits

0x3f65,	// (0x0002f7f9) main_mup_eq_pane_t1_ParamLimits

0x3f65,	// (0x0002f7f9) main_mup_eq_pane_t1

0x3f7f,	// (0x0002f813) main_mup_eq_pane_t2_ParamLimits

0x3f7f,	// (0x0002f813) main_mup_eq_pane_t2

0x3f99,	// (0x0002f82d) main_mup_eq_pane_t3_ParamLimits

0x3f99,	// (0x0002f82d) main_mup_eq_pane_t3

0x3fb5,	// (0x0002f849) main_mup_eq_pane_t4_ParamLimits

0x3fb5,	// (0x0002f849) main_mup_eq_pane_t4

0x3fd1,	// (0x0002f865) main_mup_eq_pane_t5_ParamLimits

0x3fd1,	// (0x0002f865) main_mup_eq_pane_t5

0x3fed,	// (0x0002f881) main_mup_eq_pane_t6_ParamLimits

0x3fed,	// (0x0002f881) main_mup_eq_pane_t6

0x4001,	// (0x0002f895) main_mup_eq_pane_t7_ParamLimits

0x4001,	// (0x0002f895) main_mup_eq_pane_t7

0x4015,	// (0x0002f8a9) main_mup_eq_pane_t8_ParamLimits

0x4015,	// (0x0002f8a9) main_mup_eq_pane_t8

0x4029,	// (0x0002f8bd) main_mup_eq_pane_t9_ParamLimits

0x4029,	// (0x0002f8bd) main_mup_eq_pane_t9

0x4043,	// (0x0002f8d7) main_mup_eq_pane_t10_ParamLimits

0x4043,	// (0x0002f8d7) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0003acf4) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0003acf4) main_mup_eq_pane_t

0x40f2,	// (0x0002f986) mup_equalizer_pane_cp5_ParamLimits

0x4106,	// (0x0002f99a) mup_equalizer_pane_cp6_ParamLimits

0x411a,	// (0x0002f9ae) mup_equalizer_pane_cp7_ParamLimits

0xb492,	// (0x00036d26) main_gallery_pane

0xe324,	// (0x00039bb8) smil2_volume_pane

0xe32c,	// (0x00039bc0) smil_status_volume_pane_g1_ParamLimits

0xe33f,	// (0x00039bd3) smil_status_volume_pane_g2_ParamLimits

0xba59,	// (0x000372ed) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0003aeaa) smil_status_volume_pane_g_ParamLimits

0xe491,	// (0x00039d25) bg_popup_window_pane_cp07_ParamLimits

0xe49f,	// (0x00039d33) blid_firmament_pane

0x5013,	// (0x000308a7) aid_size_cell_gallery_ParamLimits

0x5013,	// (0x000308a7) aid_size_cell_gallery

0x5029,	// (0x000308bd) grid_gallery_pane_ParamLimits

0x5029,	// (0x000308bd) grid_gallery_pane

0x5042,	// (0x000308d6) cell_gallery_pane_ParamLimits

0x5042,	// (0x000308d6) cell_gallery_pane

0xe5c2,	// (0x00039e56) bg_cell_gallery_focus_pane_ParamLimits

0xe5c2,	// (0x00039e56) bg_cell_gallery_focus_pane

0xe5d4,	// (0x00039e68) cell_gallery_pane_g1_ParamLimits

0xe5d4,	// (0x00039e68) cell_gallery_pane_g1

0x508b,	// (0x0003091f) cell_gallery_pane_g2_ParamLimits

0x508b,	// (0x0003091f) cell_gallery_pane_g2

0x5098,	// (0x0003092c) cell_gallery_pane_g3_ParamLimits

0x5098,	// (0x0003092c) cell_gallery_pane_g3

0xe5e0,	// (0x00039e74) cell_gallery_pane_g4_ParamLimits

0xe5e0,	// (0x00039e74) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0003af58) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0003af58) cell_gallery_pane_g

0xe5ec,	// (0x00039e80) bg_cell_gallery_focus_pane_g1

0xe5f4,	// (0x00039e88) bg_cell_gallery_focus_pane_g2

0xe5fc,	// (0x00039e90) bg_cell_gallery_focus_pane_g3

0xe604,	// (0x00039e98) bg_cell_gallery_focus_pane_g4

0xe60c,	// (0x00039ea0) bg_cell_gallery_focus_pane_g5

0xe614,	// (0x00039ea8) bg_cell_gallery_focus_pane_g6

0xe61c,	// (0x00039eb0) bg_cell_gallery_focus_pane_g7

0xe624,	// (0x00039eb8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0003af61) bg_cell_gallery_focus_pane_g

0xe62c,	// (0x00039ec0) aid_firma_cardinal

0xe640,	// (0x00039ed4) blid_firmament_pane_t1

0xe657,	// (0x00039eeb) blid_firmament_pane_t2

0xe66e,	// (0x00039f02) blid_firmament_pane_t3

0xe685,	// (0x00039f19) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0003af72) blid_firmament_pane_t

0xe69c,	// (0x00039f30) blid_sat_info_pane

0xe6ac,	// (0x00039f40) blid_sat_info_pane_g1

0xe6ac,	// (0x00039f40) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0003af7b) blid_sat_info_pane_g

0xe6b6,	// (0x00039f4a) blid_sat_info_pane_t1

0xe6c4,	// (0x00039f58) smil2_volume_content_pane

0xe6cd,	// (0x00039f61) smil2_volume_pane_g1

0xe6d5,	// (0x00039f69) smil2_volume_content_pane_g1

0xe6de,	// (0x00039f72) smil2_volume_content_pane_g2

0xe6e7,	// (0x00039f7b) smil2_volume_content_pane_g3

0xe6f0,	// (0x00039f84) smil2_volume_content_pane_g4

0xe6f9,	// (0x00039f8d) smil2_volume_content_pane_g5

0xe702,	// (0x00039f96) smil2_volume_content_pane_g6

0xe70b,	// (0x00039f9f) smil2_volume_content_pane_g7

0xe714,	// (0x00039fa8) smil2_volume_content_pane_g8

0xe71d,	// (0x00039fb1) smil2_volume_content_pane_g9

0xe726,	// (0x00039fba) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0003af80) smil2_volume_content_pane_g

0x2165,	// (0x0002d9f9) cale_week_day_heading_pane_t1_ParamLimits

0x21aa,	// (0x0002da3e) cale_week_day_heading_pane_t2_ParamLimits

0x21f4,	// (0x0002da88) cale_week_day_heading_pane_t3_ParamLimits

0x223e,	// (0x0002dad2) cale_week_day_heading_pane_t4_ParamLimits

0x2288,	// (0x0002db1c) cale_week_day_heading_pane_t5_ParamLimits

0x22da,	// (0x0002db6e) cale_week_day_heading_pane_t6_ParamLimits

0x232c,	// (0x0002dbc0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0003aa6c) cale_week_day_heading_pane_t_ParamLimits

0xc44d,	// (0x00037ce1) bg_cale_side_pane_ParamLimits

0x06d6,	// (0x0002bf6a) cale_week_time_pane_t1_ParamLimits

0x06f0,	// (0x0002bf84) cale_week_time_pane_t2_ParamLimits

0x070a,	// (0x0002bf9e) cale_week_time_pane_t3_ParamLimits

0x0724,	// (0x0002bfb8) cale_week_time_pane_t4_ParamLimits

0x073e,	// (0x0002bfd2) cale_week_time_pane_t5_ParamLimits

0x0758,	// (0x0002bfec) cale_week_time_pane_t6_ParamLimits

0x0772,	// (0x0002c006) cale_week_time_pane_t7_ParamLimits

0x078c,	// (0x0002c020) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0003aa7b) cale_week_time_pane_t_ParamLimits

0x2371,	// (0x0002dc05) cell_cale_week_pane_g2_ParamLimits

0xc44d,	// (0x00037ce1) bg_cale_side_pane_cp01_ParamLimits

0x35a7,	// (0x0002ee3b) cale_month_week_pane_t1_ParamLimits

0x35c0,	// (0x0002ee54) cale_month_week_pane_t2_ParamLimits

0x35d9,	// (0x0002ee6d) cale_month_week_pane_t3_ParamLimits

0x35f2,	// (0x0002ee86) cale_month_week_pane_t4_ParamLimits

0x360b,	// (0x0002ee9f) cale_month_week_pane_t5_ParamLimits

0x3624,	// (0x0002eeb8) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0003ab54) cale_month_week_pane_t_ParamLimits

0xb91c,	// (0x000371b0) cell_cale_month_pane_g1_ParamLimits

0xb492,	// (0x00036d26) main_cale_event_viewer_pane

0xb414,	// (0x00036ca8) listscroll_cale_event_viewer_pane

0xe72f,	// (0x00039fc3) list_cale_ev_pane

0xe737,	// (0x00039fcb) scroll_pane_cp023

0xe743,	// (0x00039fd7) field_cale_ev_pane_ParamLimits

0xe743,	// (0x00039fd7) field_cale_ev_pane

0xe761,	// (0x00039ff5) field_cale_ev_content_pane_ParamLimits

0xe761,	// (0x00039ff5) field_cale_ev_content_pane

0xe76d,	// (0x0003a001) field_cale_ev_pane_g1_ParamLimits

0xe76d,	// (0x0003a001) field_cale_ev_pane_g1

0xe779,	// (0x0003a00d) field_cale_ev_pane_g2_ParamLimits

0xe779,	// (0x0003a00d) field_cale_ev_pane_g2

0xe791,	// (0x0003a025) field_cale_ev_pane_g3_ParamLimits

0xe791,	// (0x0003a025) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0003af95) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0003af95) field_cale_ev_pane_g

0xe7a9,	// (0x0003a03d) field_cale_ev_pane_t1_ParamLimits

0xe7a9,	// (0x0003a03d) field_cale_ev_pane_t1

0xe7c0,	// (0x0003a054) field_cale_ev_content_pane_t1_ParamLimits

0xe7c0,	// (0x0003a054) field_cale_ev_content_pane_t1

0x41c4,	// (0x0002fa58) bg_button_pane_cp01

0x1eb6,	// (0x0002d74a) listscroll_cale_week_pane_ParamLimits

0xc3f7,	// (0x00037c8b) popup_toolbar_window_cp01

0xc41e,	// (0x00037cb2) listscroll_cale_week_pane_t1_ParamLimits

0x1eb6,	// (0x0002d74a) listscroll_cale_day_pane_ParamLimits

0xc3f7,	// (0x00037c8b) popup_toolbar_window_cp02

0xc842,	// (0x000380d6) listscroll_cale_day_pane_t1_ParamLimits

0x0890,	// (0x0002c124) main_cale_month_pane_ParamLimits

0xba44,	// (0x000372d8) popup_toolbar_window_cp03_ParamLimits

0xba44,	// (0x000372d8) popup_toolbar_window_cp03

0x43eb,	// (0x0002fc7f) main_image_pane_g2_ParamLimits

0x43eb,	// (0x0002fc7f) main_image_pane_g2

0x43fc,	// (0x0002fc90) main_image_pane_g3_ParamLimits

0x43fc,	// (0x0002fc90) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0003ad86) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0003ad86) main_image_pane_g

0xd12f,	// (0x000389c3) main_image_pane_t1_ParamLimits

0x440d,	// (0x0002fca1) main_image_pane_t2_ParamLimits

0x440d,	// (0x0002fca1) main_image_pane_t2

0x441f,	// (0x0002fcb3) main_image_pane_t3_ParamLimits

0x441f,	// (0x0002fcb3) main_image_pane_t3

0x4447,	// (0x0002fcdb) main_image_pane_t4_ParamLimits

0x4447,	// (0x0002fcdb) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0003ad8d) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0003ad8d) main_image_pane_t

0x4467,	// (0x0002fcfb) popup_image_details_window_cp01

0x4471,	// (0x0002fd05) popup_toobar_trans_pane_cp01_ParamLimits

0x4471,	// (0x0002fd05) popup_toobar_trans_pane_cp01

0x09a9,	// (0x0002c23d) popup_image_details_window_ParamLimits

0x09a9,	// (0x0002c23d) popup_image_details_window

0xba17,	// (0x000372ab) popup_image_focus_window

0x0b2e,	// (0x0002c3c2) camera2_autofocus_pane_ParamLimits

0x0b2e,	// (0x0002c3c2) camera2_autofocus_pane

0xb414,	// (0x00036ca8) bg_popup_sub_pane_cp06

0xe7de,	// (0x0003a072) popup_image_focus_window_g1

0xe7e6,	// (0x0003a07a) popup_image_focus_window_g2

0xe7ee,	// (0x0003a082) popup_image_focus_window_g3

0xe7f6,	// (0x0003a08a) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0003af9c) popup_image_focus_window_g

0xe7fe,	// (0x0003a092) popup_image_focus_window_t1

0xe80c,	// (0x0003a0a0) popup_image_focus_window_t2

0xe81c,	// (0x0003a0b0) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0003afa5) popup_image_focus_window_t

0xe82a,	// (0x0003a0be) camera2_autofocus_pane_g1

0xcaf1,	// (0x00038385) bg_tb_trans_pane_cp01

0xe838,	// (0x0003a0cc) popup_image_details_window_g1

0xe84b,	// (0x0003a0df) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0003afb7) popup_image_details_window_g

0xe874,	// (0x0003a108) popup_image_details_window_t1

0xe886,	// (0x0003a11a) popup_image_details_window_t2

0xe89f,	// (0x0003a133) popup_image_details_window_t3

0xe8b3,	// (0x0003a147) popup_image_details_window_t4

0xe8ce,	// (0x0003a162) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0003afbe) popup_image_details_window_t

0xc2ce,	// (0x00037b62) bg_calc_paper_pane_ParamLimits

0xb492,	// (0x00036d26) grid_highlight_pane_cp013

0xb888,	// (0x0003711c) list_calc_pane_ParamLimits

0xb89a,	// (0x0003712e) scroll_pane_cp024

0xc2e2,	// (0x00037b76) bg_calc_display_pane_ParamLimits

0x062d,	// (0x0002bec1) calc_display_pane_t1_ParamLimits

0x063f,	// (0x0002bed3) calc_display_pane_t2_ParamLimits

0xb8a2,	// (0x00037136) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0003a9ee) calc_display_pane_t_ParamLimits

0x06a0,	// (0x0002bf34) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0003aa0b) cell_calc_pane_g

0x06a9,	// (0x0002bf3d) cell_calc_pane_t1

0xc341,	// (0x00037bd5) grid_highlight_pane_cp02_ParamLimits

0xc357,	// (0x00037beb) toolbar_button_pane_cp01_ParamLimits

0xc357,	// (0x00037beb) toolbar_button_pane_cp01

0xd174,	// (0x00038a08) temp_image_control_pane_ParamLimits

0xd174,	// (0x00038a08) temp_image_control_pane

0xb484,	// (0x00036d18) main_mp3_pane

0xe8e8,	// (0x0003a17c) temp_image_control_pane_g1_ParamLimits

0xe8e8,	// (0x0003a17c) temp_image_control_pane_g1

0xe8f6,	// (0x0003a18a) temp_image_control_pane_g2_ParamLimits

0xe8f6,	// (0x0003a18a) temp_image_control_pane_g2

0xe908,	// (0x0003a19c) temp_image_control_pane_g3_ParamLimits

0xe908,	// (0x0003a19c) temp_image_control_pane_g3

0x50d5,	// (0x00030969) temp_image_control_pane_g4_ParamLimits

0x50d5,	// (0x00030969) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0003afc9) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0003afc9) temp_image_control_pane_g

0xe8e8,	// (0x0003a17c) main_mp3_pane_g1

0x50e8,	// (0x0003097c) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0003afd2) main_mp3_pane_g

0xe94b,	// (0x0003a1df) main_mp3_pane_t1

0xc4b2,	// (0x00037d46) main_camera_pane_g8_ParamLimits

0xc4b2,	// (0x00037d46) main_camera_pane_g8

0x2615,	// (0x0002dea9) main_video_pane_g7_ParamLimits

0x2615,	// (0x0002dea9) main_video_pane_g7

0xba99,	// (0x0003732d) main_camera2_pane_t7_ParamLimits

0xba99,	// (0x0003732d) main_camera2_pane_t7

0xc5fa,	// (0x00037e8e) scroll_pane_cp025_ParamLimits

0xc5fa,	// (0x00037e8e) scroll_pane_cp025

0xc60e,	// (0x00037ea2) scroll_pane_cp026_ParamLimits

0xc60e,	// (0x00037ea2) scroll_pane_cp026

0xc61d,	// (0x00037eb1) wml_content_pane_ParamLimits

0xb492,	// (0x00036d26) main_touch_calib_pane

0x51bc,	// (0x00030a50) main_touch_calib_pane_g1

0x51ce,	// (0x00030a62) main_touch_calib_pane_g2

0x51e0,	// (0x00030a74) main_touch_calib_pane_g3

0x51f2,	// (0x00030a86) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0003aff0) main_touch_calib_pane_g

0x5204,	// (0x00030a98) main_touch_calib_pane_t1

0x521e,	// (0x00030ab2) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0003aff9) main_touch_calib_pane_t

0xcd67,	// (0x000385fb) mup_progress_pane_cp02

0xcd86,	// (0x0003861a) navi_pane_g1

0xcde8,	// (0x0003867c) navi_pane_mp_t3

0xb484,	// (0x00036d18) main_mp3_pane_ParamLimits

0x4acc,	// (0x00030360) navi_pane_ParamLimits

0xe8e8,	// (0x0003a17c) main_mp3_pane_g1_ParamLimits

0x50e8,	// (0x0003097c) main_mp3_pane_g2_ParamLimits

0x50f6,	// (0x0003098a) main_mp3_pane_g3_ParamLimits

0x50f6,	// (0x0003098a) main_mp3_pane_g3

0x5104,	// (0x00030998) main_mp3_pane_g4_ParamLimits

0x5104,	// (0x00030998) main_mp3_pane_g4

0xe918,	// (0x0003a1ac) main_mp3_pane_g5_ParamLimits

0xe918,	// (0x0003a1ac) main_mp3_pane_g5

0xe926,	// (0x0003a1ba) main_mp3_pane_g6_ParamLimits

0xe926,	// (0x0003a1ba) main_mp3_pane_g6

0xe933,	// (0x0003a1c7) main_mp3_pane_g7_ParamLimits

0xe933,	// (0x0003a1c7) main_mp3_pane_g7

0xe93f,	// (0x0003a1d3) main_mp3_pane_g8_ParamLimits

0xe93f,	// (0x0003a1d3) main_mp3_pane_g8

0xf73e,	// (0x0003afd2) main_mp3_pane_g_ParamLimits

0x5110,	// (0x000309a4) main_mp3_pane_t2

0x511e,	// (0x000309b2) main_mp3_pane_t3

0xe959,	// (0x0003a1ed) main_mp3_pane_t4

0xe967,	// (0x0003a1fb) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0003afe3) main_mp3_pane_t

0xe975,	// (0x0003a209) mup_progress_pane_cp01

0xb432,	// (0x00036cc6) aid_zoom_text_secondary2

0xe72f,	// (0x00039fc3) list_cale_ev2_pane

0xe737,	// (0x00039fcb) scroll_pane_cp023_ParamLimits

0x5274,	// (0x00030b08) field_cale_ev2_pane_ParamLimits

0x5274,	// (0x00030b08) field_cale_ev2_pane

0x5294,	// (0x00030b28) field_cale_ev2_pane_g1_ParamLimits

0x5294,	// (0x00030b28) field_cale_ev2_pane_g1

0x52a0,	// (0x00030b34) field_cale_ev2_pane_g2_ParamLimits

0x52a0,	// (0x00030b34) field_cale_ev2_pane_g2

0x52b8,	// (0x00030b4c) field_cale_ev2_pane_g3_ParamLimits

0x52b8,	// (0x00030b4c) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0003b004) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0003b004) field_cale_ev2_pane_g

0x52d0,	// (0x00030b64) field_cale_ev2_pane_t1_ParamLimits

0x52d0,	// (0x00030b64) field_cale_ev2_pane_t1

0x52e7,	// (0x00030b7b) field_cale_ev2_pane_t2_ParamLimits

0x52e7,	// (0x00030b7b) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0003b00d) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0003b00d) field_cale_ev2_pane_t

0x42a0,	// (0x0002fb34) main_postcard_pane_g5_ParamLimits

0x42a0,	// (0x0002fb34) main_postcard_pane_g5

0x42b6,	// (0x0002fb4a) main_postcard_pane_g6_ParamLimits

0x42b6,	// (0x0002fb4a) main_postcard_pane_g6

0x23e1,	// (0x0002dc75) camera2_autofocus_pane_cp_ParamLimits

0x23e1,	// (0x0002dc75) camera2_autofocus_pane_cp

0xb484,	// (0x00036d18) main_mup3_pane

0x52fc,	// (0x00030b90) main_mup3_pane_g1_ParamLimits

0x52fc,	// (0x00030b90) main_mup3_pane_g1

0x531e,	// (0x00030bb2) main_mup3_pane_g2_ParamLimits

0x531e,	// (0x00030bb2) main_mup3_pane_g2

0x539c,	// (0x00030c30) main_mup3_pane_g3_ParamLimits

0x539c,	// (0x00030c30) main_mup3_pane_g3

0x53e2,	// (0x00030c76) main_mup3_pane_g4_ParamLimits

0x53e2,	// (0x00030c76) main_mup3_pane_g4

0x5428,	// (0x00030cbc) main_mup3_pane_g5_ParamLimits

0x5428,	// (0x00030cbc) main_mup3_pane_g5

0x546e,	// (0x00030d02) main_mup3_pane_g6_ParamLimits

0x546e,	// (0x00030d02) main_mup3_pane_g6

0xe9a9,	// (0x0003a23d) main_mup3_pane_g7_ParamLimits

0xe9a9,	// (0x0003a23d) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0003b01d) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0003b01d) main_mup3_pane_g

0x54ec,	// (0x00030d80) main_mup3_pane_t1_ParamLimits

0x54ec,	// (0x00030d80) main_mup3_pane_t1

0x5560,	// (0x00030df4) main_mup3_pane_t2_ParamLimits

0x5560,	// (0x00030df4) main_mup3_pane_t2

0x5634,	// (0x00030ec8) main_mup3_pane_t4_ParamLimits

0x5634,	// (0x00030ec8) main_mup3_pane_t4

0x568a,	// (0x00030f1e) main_mup3_pane_t5_ParamLimits

0x568a,	// (0x00030f1e) main_mup3_pane_t5

0x5746,	// (0x00030fda) main_mup3_pane_t6_ParamLimits

0x5746,	// (0x00030fda) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0003b02e) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0003b02e) main_mup3_pane_t

0x57fe,	// (0x00031092) mup3_progress_pane_ParamLimits

0x57fe,	// (0x00031092) mup3_progress_pane

0x5894,	// (0x00031128) popup_mup3_control_window_ParamLimits

0x5894,	// (0x00031128) popup_mup3_control_window

0xe9b7,	// (0x0003a24b) popup_mup3_text_window

0x58c6,	// (0x0003115a) mup3_progress_pane_t1

0x58e5,	// (0x00031179) mup3_progress_pane_t2

0xe9bf,	// (0x0003a253) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0003b03b) mup3_progress_pane_t

0xe9dc,	// (0x0003a270) mup_progress_pane_cp03

0xb414,	// (0x00036ca8) bg_tb_trans_pane_cp04

0x5904,	// (0x00031198) mup3_volume_pane

0x590c,	// (0x000311a0) popup_mup3_control_window_g1

0x5915,	// (0x000311a9) mup3_volume_pane_g1

0x591e,	// (0x000311b2) mup3_volume_pane_g2

0x5927,	// (0x000311bb) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0003b042) mup3_volume_pane_g

0xb414,	// (0x00036ca8) bg_tb_trans_pane_cp03

0xe9ec,	// (0x0003a280) popup_mup3_text_window_g1

0xe9f4,	// (0x0003a288) popup_mup3_text_window_t1

0xc32a,	// (0x00037bbe) list_calc_item_pane_g1_ParamLimits

0xe3ff,	// (0x00039c93) mup_volume_pane_cp_g1

0x5238,	// (0x00030acc) main_touch_calib_pane_t3

0x524c,	// (0x00030ae0) main_touch_calib_pane_t4

0x5260,	// (0x00030af4) main_touch_calib_pane_t5

0xb41e,	// (0x00036cb2) aid_cell_size_toolbar2

0xb426,	// (0x00036cba) aid_popup3_width_pane

0xb432,	// (0x00036cc6) aid_zoom_text_msg_primary

0x0804,	// (0x0002c098) vorec_t7

0xc2ee,	// (0x00037b82) bg_calc_paper_pane_g1_ParamLimits

0xc2fa,	// (0x00037b8e) bg_calc_paper_pane_g2_ParamLimits

0xc306,	// (0x00037b9a) bg_calc_paper_pane_g3_ParamLimits

0xc312,	// (0x00037ba6) bg_calc_paper_pane_g4_ParamLimits

0xc31e,	// (0x00037bb2) bg_calc_paper_pane_g5_ParamLimits

0x1d90,	// (0x0002d624) bg_calc_paper_pane_g6_ParamLimits

0x1d9f,	// (0x0002d633) bg_calc_paper_pane_g7_ParamLimits

0x1dae,	// (0x0002d642) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0003a9f5) bg_calc_paper_pane_g_ParamLimits

0x1dc1,	// (0x0002d655) calc_bg_paper_pane_g9_ParamLimits

0x252c,	// (0x0002ddc0) image_qvga_pane_ParamLimits

0x252c,	// (0x0002ddc0) image_qvga_pane

0xc21d,	// (0x00037ab1) bg_popup_sub_pane_cp04_ParamLimits

0xd0ab,	// (0x0003893f) popup_mup_playback_window_g1_ParamLimits

0xd0b7,	// (0x0003894b) popup_mup_playback_window_t1_ParamLimits

0xd0cc,	// (0x00038960) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0003ad81) popup_mup_playback_window_t_ParamLimits

0x4d70,	// (0x00030604) main_mup2_pane_g3_ParamLimits

0x4d70,	// (0x00030604) main_mup2_pane_g3

0x2917,	// (0x0002e1ab) popup_toolbar_window_cp04

0xd4ae,	// (0x00038d42) popup_call2_audio_second_window_g3_ParamLimits

0xd4ae,	// (0x00038d42) popup_call2_audio_second_window_g3

0xd8b8,	// (0x0003914c) popup_call2_audio_first_window_g4_ParamLimits

0xd8b8,	// (0x0003914c) popup_call2_audio_first_window_g4

0xdf37,	// (0x000397cb) popup_call2_audio_in_window_g4_ParamLimits

0xdf37,	// (0x000397cb) popup_call2_audio_in_window_g4

0x43cd,	// (0x0002fc61) aid_area_sk_bg_cut_ParamLimits

0x43cd,	// (0x0002fc61) aid_area_sk_bg_cut

0xd0e1,	// (0x00038975) aid_area_sk_bg_cut_2_ParamLimits

0xd0e1,	// (0x00038975) aid_area_sk_bg_cut_2

0x507b,	// (0x0003090f) aid_placing_details_win

0x5083,	// (0x00030917) aid_placing_details_win_2

0xe82a,	// (0x0003a0be) camera2_autofocus_pane_g1_ParamLimits

0x04e9,	// (0x0002bd7d) popup_fixed_preview_cale_window_ParamLimits

0x04e9,	// (0x0002bd7d) popup_fixed_preview_cale_window

0xce37,	// (0x000386cb) navi_slider_pane_g3

0xce40,	// (0x000386d4) navi_slider_pane_g4

0xce49,	// (0x000386dd) navi_slider_pane_g5

0xce37,	// (0x000386cb) navi_slider_pane_g6

0xb9c6,	// (0x0003725a) navi_slider_pane_g7

0xcf6a,	// (0x000387fe) mup_scale_pane_g3

0xcf73,	// (0x00038807) mup_scale_pane_g4

0xcf7c,	// (0x00038810) mup_scale_pane_g5

0x412e,	// (0x0002f9c2) mup_scale_pane_g6

0x4137,	// (0x0002f9cb) mup_scale_pane_g7

0xce37,	// (0x000386cb) cams2_slider_pane_g3

0xe481,	// (0x00039d15) cams2_slider_pane_g4

0xbaff,	// (0x00037393) cams2_slider_pane_g5

0xce37,	// (0x000386cb) cams2_slider_pane_g6

0xbb07,	// (0x0003739b) cams2_slider_pane_g7

0xe6ac,	// (0x00039f40) camera2_autofocus_pane_cp_g1

0xe298,	// (0x00039b2c) bg_popup_preview_window_pane_cp02_ParamLimits

0xe298,	// (0x00039b2c) bg_popup_preview_window_pane_cp02

0xea02,	// (0x0003a296) list_fp_cale_pane_ParamLimits

0xea02,	// (0x0003a296) list_fp_cale_pane

0xea0e,	// (0x0003a2a2) popup_fixed_preview_cale_window_t1_ParamLimits

0xea0e,	// (0x0003a2a2) popup_fixed_preview_cale_window_t1

0x5930,	// (0x000311c4) popup_fixed_preview_cale_window_t2_ParamLimits

0x5930,	// (0x000311c4) popup_fixed_preview_cale_window_t2

0x5945,	// (0x000311d9) popup_fixed_preview_cale_window_t3_ParamLimits

0x5945,	// (0x000311d9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0003b049) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0003b049) popup_fixed_preview_cale_window_t

0x595a,	// (0x000311ee) list_single_fp_cale_pane_ParamLimits

0x595a,	// (0x000311ee) list_single_fp_cale_pane

0xea2c,	// (0x0003a2c0) list_single_fp_cale_pane_g1_ParamLimits

0xea2c,	// (0x0003a2c0) list_single_fp_cale_pane_g1

0xea38,	// (0x0003a2cc) list_single_fp_cale_pane_g2_ParamLimits

0xea38,	// (0x0003a2cc) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0003b050) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0003b050) list_single_fp_cale_pane_g

0xea51,	// (0x0003a2e5) list_single_fp_cale_pane_t1_ParamLimits

0xea51,	// (0x0003a2e5) list_single_fp_cale_pane_t1

0xea63,	// (0x0003a2f7) list_single_fp_cale_pane_t2_ParamLimits

0xea63,	// (0x0003a2f7) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0003b057) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0003b057) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb492,	// (0x00036d26) main_dialer_pane

0x596f,	// (0x00031203) aid_cell_size_keypad

0x5979,	// (0x0003120d) dialer_ne_pane

0x5981,	// (0x00031215) grid_dialer_command_1_pane

0x5989,	// (0x0003121d) grid_dialer_command_2_pane

0x5991,	// (0x00031225) grid_dialer_keypad_pane

0x59a3,	// (0x00031237) bg_popup_call_pane_cp06_ParamLimits

0x59a3,	// (0x00031237) bg_popup_call_pane_cp06

0x59af,	// (0x00031243) dialer_ne_clear_pane_ParamLimits

0x59af,	// (0x00031243) dialer_ne_clear_pane

0xea96,	// (0x0003a32a) dialer_ne_pane_g1

0xea9e,	// (0x0003a332) dialer_ne_pane_t1_ParamLimits

0xea9e,	// (0x0003a332) dialer_ne_pane_t1

0x59bb,	// (0x0003124f) dialer_ne_pane_t2_ParamLimits

0x59bb,	// (0x0003124f) dialer_ne_pane_t2

0x59e5,	// (0x00031279) dialer_ne_pane_t3_ParamLimits

0x59e5,	// (0x00031279) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0003b05c) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0003b05c) dialer_ne_pane_t

0x5a15,	// (0x000312a9) dialer_ne_pane_t3_copy1_ParamLimits

0x5a15,	// (0x000312a9) dialer_ne_pane_t3_copy1

0x5a44,	// (0x000312d8) cell_dialer_keypad_pane_ParamLimits

0x5a44,	// (0x000312d8) cell_dialer_keypad_pane

0x5a5b,	// (0x000312ef) cell_dialer_command_1_pane_ParamLimits

0x5a5b,	// (0x000312ef) cell_dialer_command_1_pane

0x5a71,	// (0x00031305) cell_dialer_command_2_pane_ParamLimits

0x5a71,	// (0x00031305) cell_dialer_command_2_pane

0xeab0,	// (0x0003a344) bg_button_pane_cp02_ParamLimits

0xeab0,	// (0x0003a344) bg_button_pane_cp02

0x5a80,	// (0x00031314) cell_dialer_keypad_pane_g1_ParamLimits

0x5a80,	// (0x00031314) cell_dialer_keypad_pane_g1

0xeab0,	// (0x0003a344) bg_button_pane_cp03_ParamLimits

0xeab0,	// (0x0003a344) bg_button_pane_cp03

0x5a94,	// (0x00031328) cell_dialer_command_1_pane_g1_ParamLimits

0x5a94,	// (0x00031328) cell_dialer_command_1_pane_g1

0xeabc,	// (0x0003a350) bg_button_pane_cp04

0x5aa8,	// (0x0003133c) cell_dialer_command_2_pane_g1

0xce26,	// (0x000386ba) bg_button_pane_cp06

0xeac4,	// (0x0003a358) dialer_ne_clear_pane_g1

0x3c68,	// (0x0002f4fc) navi_pane_g2

0x3c96,	// (0x0002f52a) navi_pane_g3

0x0002,

0xf3f0,	// (0x0003ac84) navi_pane_g

0x3cbf,	// (0x0002f553) navi_pane_mv_g2

0x3ce6,	// (0x0002f57a) navi_pane_mv_g5

0x3cee,	// (0x0002f582) navi_pane_mv_t1

0xc2e2,	// (0x00037b76) main_clock2_pane

0x5af3,	// (0x00031387) main_clock2_list_pane_ParamLimits

0x5af3,	// (0x00031387) main_clock2_list_pane

0x5b2b,	// (0x000313bf) main_clock2_pane_t1_ParamLimits

0x5b2b,	// (0x000313bf) main_clock2_pane_t1

0x5b67,	// (0x000313fb) main_clock2_pane_t2_ParamLimits

0x5b67,	// (0x000313fb) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0003b063) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0003b063) main_clock2_pane_t

0x5c05,	// (0x00031499) popup_clock_analogue_window_cp03_ParamLimits

0x5c05,	// (0x00031499) popup_clock_analogue_window_cp03

0x5c2a,	// (0x000314be) popup_clock_digital_window_cp02_ParamLimits

0x5c2a,	// (0x000314be) popup_clock_digital_window_cp02

0x5c9b,	// (0x0003152f) main_clock2_list_single_pane_ParamLimits

0x5c9b,	// (0x0003152f) main_clock2_list_single_pane

0xce26,	// (0x000386ba) list_highlight_pane_cp05

0xeae2,	// (0x0003a376) main_clock2_list_single_pane_t1

0x2917,	// (0x0002e1ab) popup_toolbar_window_cp04_ParamLimits

0x50a5,	// (0x00030939) camera2_autofocus_pane_g2_ParamLimits

0x50a5,	// (0x00030939) camera2_autofocus_pane_g2

0x50b1,	// (0x00030945) camera2_autofocus_pane_g3_ParamLimits

0x50b1,	// (0x00030945) camera2_autofocus_pane_g3

0x50bd,	// (0x00030951) camera2_autofocus_pane_g4_ParamLimits

0x50bd,	// (0x00030951) camera2_autofocus_pane_g4

0x50c9,	// (0x0003095d) camera2_autofocus_pane_g5_ParamLimits

0x50c9,	// (0x0003095d) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0003afac) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0003afac) camera2_autofocus_pane_g

0xe989,	// (0x0003a21d) camera2_autofocus_pane_cp_g2

0xe991,	// (0x0003a225) camera2_autofocus_pane_cp_g3

0xe999,	// (0x0003a22d) camera2_autofocus_pane_cp_g4

0xe9a1,	// (0x0003a235) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0003b012) camera2_autofocus_pane_cp_g

0x599b,	// (0x0003122f) popup_dialer_spcha_window

0xb414,	// (0x00036ca8) bg_popup_sub_pane_cp07

0xeaf0,	// (0x0003a384) list_spcha_pane

0xeaf8,	// (0x0003a38c) list_single_spcha_pane_ParamLimits

0xeaf8,	// (0x0003a38c) list_single_spcha_pane

0xb414,	// (0x00036ca8) list_highlight_pane_cp06

0xeb09,	// (0x0003a39d) list_single_spcha_pane_t1

0xdce1,	// (0x00039575) popup_call2_audio_out_window_g4_ParamLimits

0xdce1,	// (0x00039575) popup_call2_audio_out_window_g4

0xb492,	// (0x00036d26) main_imed2_pane

0xba1f,	// (0x000372b3) popup_imed_adjust2_window

0x09c1,	// (0x0002c255) popup_imed_trans_window_ParamLimits

0x09c1,	// (0x0002c255) popup_imed_trans_window

0xe4ea,	// (0x00039d7e) popup_blid_sat_info2_window_t1

0xe4f8,	// (0x00039d8c) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0003af41) popup_blid_sat_info2_window_t

0x5ccd,	// (0x00031561) aid_size_cell_colour_35

0x5ced,	// (0x00031581) aid_size_cell_colour_112

0x5d0d,	// (0x000315a1) aid_size_cell_effect

0xe2a4,	// (0x00039b38) bg_tb_trans_pane_cp02

0xc94b,	// (0x000381df) heading_imed_pane

0x5d2d,	// (0x000315c1) listscroll_imed_pane

0xeb17,	// (0x0003a3ab) heading_imed_pane_g1

0xeb1f,	// (0x0003a3b3) heading_imed_pane_t1

0xeb2d,	// (0x0003a3c1) grid_imed_colour_35_pane_ParamLimits

0xeb2d,	// (0x0003a3c1) grid_imed_colour_35_pane

0x5d39,	// (0x000315cd) grid_imed_effect_pane

0xeb44,	// (0x0003a3d8) list_imed_aspect_pane

0x5d4f,	// (0x000315e3) scroll_pane_cp027_ParamLimits

0x5d4f,	// (0x000315e3) scroll_pane_cp027

0x5d60,	// (0x000315f4) cell_imed_effect_pane_ParamLimits

0x5d60,	// (0x000315f4) cell_imed_effect_pane

0xeb4c,	// (0x0003a3e0) cell_imed_colour_pane_ParamLimits

0xeb4c,	// (0x0003a3e0) cell_imed_colour_pane

0xeb8e,	// (0x0003a422) cell_imed_colour_pane_g1_ParamLimits

0xeb8e,	// (0x0003a422) cell_imed_colour_pane_g1

0xeb9f,	// (0x0003a433) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb9f,	// (0x0003a433) hgihlgiht_grid_pane_cp016

0x5d87,	// (0x0003161b) cell_imed_effect_pane_g1

0x5d8f,	// (0x00031623) grid_highlight_pane_cp017

0xebb0,	// (0x0003a444) list_imed_single_pane_ParamLimits

0xebb0,	// (0x0003a444) list_imed_single_pane

0xb414,	// (0x00036ca8) list_highlight_pane_cp07

0xebc5,	// (0x0003a459) list_imed_aspect_pane_comp1_t1

0xe2a4,	// (0x00039b38) bg_tb_trans_pane_cp05

0xebe7,	// (0x0003a47b) popup_imed_adjust2_window_g1

0xec0e,	// (0x0003a4a2) popup_imed_adjust2_window_t1

0xec26,	// (0x0003a4ba) slider_imed_adjust_pane

0xec3a,	// (0x0003a4ce) slider_imed_adjust_pane_g1

0xec4a,	// (0x0003a4de) slider_imed_adjust_pane_g2

0xec5a,	// (0x0003a4ee) slider_imed_adjust_pane_g3

0xec6b,	// (0x0003a4ff) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0003b080) slider_imed_adjust_pane_g

0x5d98,	// (0x0003162c) aid_size_cell_clipart2

0x5da4,	// (0x00031638) grid_imed_clipart_pane

0xec7c,	// (0x0003a510) scroll_pane_cp031

0x5dae,	// (0x00031642) cell_imed_clipart_pane_ParamLimits

0x5dae,	// (0x00031642) cell_imed_clipart_pane

0x5dd0,	// (0x00031664) cell_imed_clipart_pane_g1

0xb414,	// (0x00036ca8) grid_highlight_pane_cp014

0x5b08,	// (0x0003139c) main_clock2_pane_g1_ParamLimits

0x5b08,	// (0x0003139c) main_clock2_pane_g1

0x5c46,	// (0x000314da) aid_call2_pane_cp10

0x5c58,	// (0x000314ec) aid_call_pane_cp10

0xcd5b,	// (0x000385ef) popup_clock_analogue_window_cp10_g1

0xcd5b,	// (0x000385ef) popup_clock_analogue_window_cp10_g2

0x5c6a,	// (0x000314fe) popup_clock_analogue_window_cp10_g3

0x5c6a,	// (0x000314fe) popup_clock_analogue_window_cp10_g4

0xcd5b,	// (0x000385ef) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0003b06e) popup_clock_analogue_window_cp10_g

0x5c7c,	// (0x00031510) popup_clock_analogue_window_cp10_t1

0x1005,	// (0x0002c899) clock_digital_number_pane_cp10_ParamLimits

0x1005,	// (0x0002c899) clock_digital_number_pane_cp10

0x101d,	// (0x0002c8b1) clock_digital_number_pane_cp11_ParamLimits

0x101d,	// (0x0002c8b1) clock_digital_number_pane_cp11

0x1035,	// (0x0002c8c9) clock_digital_number_pane_cp12_ParamLimits

0x1035,	// (0x0002c8c9) clock_digital_number_pane_cp12

0x104d,	// (0x0002c8e1) clock_digital_number_pane_cp13_ParamLimits

0x104d,	// (0x0002c8e1) clock_digital_number_pane_cp13

0x1065,	// (0x0002c8f9) clock_digital_separator_pane_cp10_ParamLimits

0x1065,	// (0x0002c8f9) clock_digital_separator_pane_cp10

0x5cad,	// (0x00031541) popup_clock_digital_window_cp02_t1_ParamLimits

0x5cad,	// (0x00031541) popup_clock_digital_window_cp02_t1

0xc215,	// (0x00037aa9) clock_digital_number_pane_cp10_g1

0xc215,	// (0x00037aa9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0003b089) clock_digital_number_pane_cp10_g

0xc215,	// (0x00037aa9) clock_digital_separator_pane_cp10_g1

0xc215,	// (0x00037aa9) clock_digital_separator_pane_g2_cp10

0xcdf6,	// (0x0003868a) navi_pane_vded_g4

0xcdff,	// (0x00038693) navi_pane_vded_g5

0xce08,	// (0x0003869c) navi_pane_vded_t1

0xb492,	// (0x00036d26) main_vded_pane

0x5dd9,	// (0x0003166d) main_vded_pane_g1

0x5de3,	// (0x00031677) main_vded_pane_g2

0x5ded,	// (0x00031681) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0003b08e) main_vded_pane_g

0x5df7,	// (0x0003168b) main_vded_pane_t1

0x5e05,	// (0x00031699) main_vded_pane_t2

0x0001,

0xf801,	// (0x0003b095) main_vded_pane_t

0x5e13,	// (0x000316a7) vded_slider_pane

0x5e1b,	// (0x000316af) vded_video_pane

0xec84,	// (0x0003a518) vded_video_pane_g1

0x5e23,	// (0x000316b7) vded_video_pane_g2

0xe6ac,	// (0x00039f40) vded_video_pane_g3

0x0002,

0xf806,	// (0x0003b09a) vded_video_pane_g

0xec8e,	// (0x0003a522) vded_slider_pane_g1

0xe3ff,	// (0x00039c93) vded_slider_pane_g2

0xec97,	// (0x0003a52b) vded_slider_pane_g3

0xeca0,	// (0x0003a534) vded_slider_pane_g4

0xeca9,	// (0x0003a53d) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0003b0a1) vded_slider_pane_g

0x587c,	// (0x00031110) mup3_rocker_pane_ParamLimits

0x587c,	// (0x00031110) mup3_rocker_pane

0x5e2c,	// (0x000316c0) mup3_control_keys_pane_g1

0x5e34,	// (0x000316c8) mup3_control_keys_pane_g2

0x5e3c,	// (0x000316d0) mup3_control_keys_pane_g3

0x5e44,	// (0x000316d8) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0003b0ac) mup3_control_keys_pane_g

0x0520,	// (0x0002bdb4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0520,	// (0x0002bdb4) popup_toolbar2_fixed_window_cp01

0x58b0,	// (0x00031144) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58b0,	// (0x00031144) popup_toolbar2_fixed_window_cp02

0xd620,	// (0x00038eb4) popup_call2_audio_second_window_t4_ParamLimits

0xd620,	// (0x00038eb4) popup_call2_audio_second_window_t4

0xdb4e,	// (0x000393e2) popup_call2_audio_first_window_t6_ParamLimits

0xdb4e,	// (0x000393e2) popup_call2_audio_first_window_t6

0xdde4,	// (0x00039678) popup_call2_audio_out_window_t6_ParamLimits

0xdde4,	// (0x00039678) popup_call2_audio_out_window_t6

0xb492,	// (0x00036d26) main_vitu_pane

0x5e54,	// (0x000316e8) aid_size_cell_itu_ParamLimits

0x5e54,	// (0x000316e8) aid_size_cell_itu

0xcaf1,	// (0x00038385) bg_popup_window_pane_cp08_ParamLimits

0xcaf1,	// (0x00038385) bg_popup_window_pane_cp08

0x5e6a,	// (0x000316fe) field_vitu_entry_pane_ParamLimits

0x5e6a,	// (0x000316fe) field_vitu_entry_pane

0x5e81,	// (0x00031715) grid_vitu_function_pane_ParamLimits

0x5e81,	// (0x00031715) grid_vitu_function_pane

0x5e9c,	// (0x00031730) grid_vitu_itu_pane_ParamLimits

0x5e9c,	// (0x00031730) grid_vitu_itu_pane

0x5eba,	// (0x0003174e) cell_vitu_itu_pane_ParamLimits

0x5eba,	// (0x0003174e) cell_vitu_itu_pane

0x5edc,	// (0x00031770) cell_vitu_function_pane_ParamLimits

0x5edc,	// (0x00031770) cell_vitu_function_pane

0xcaf1,	// (0x00038385) bg_popup_sub_pane_cp08_ParamLimits

0xcaf1,	// (0x00038385) bg_popup_sub_pane_cp08

0x5ef5,	// (0x00031789) field_vitu_entry_pane_t1_ParamLimits

0x5ef5,	// (0x00031789) field_vitu_entry_pane_t1

0xecca,	// (0x0003a55e) field_vitu_entry_pane_t2_ParamLimits

0xecca,	// (0x0003a55e) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0003b0ba) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0003b0ba) field_vitu_entry_pane_t

0xece7,	// (0x0003a57b) bg_button_pane_cp05_ParamLimits

0xece7,	// (0x0003a57b) bg_button_pane_cp05

0x5f13,	// (0x000317a7) cell_vitu_itu_pane_g1

0x5f2b,	// (0x000317bf) cell_vitu_itu_pane_t1_ParamLimits

0x5f2b,	// (0x000317bf) cell_vitu_itu_pane_t1

0x5f3d,	// (0x000317d1) cell_vitu_itu_pane_t2_ParamLimits

0x5f3d,	// (0x000317d1) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0003b0bf) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0003b0bf) cell_vitu_itu_pane_t

0xecf5,	// (0x0003a589) bg_button_pane_cp07

0x5f72,	// (0x00031806) cell_vitu_function_pane_g1

0xb880,	// (0x00037114) main_calc_pane_g1

0x0380,	// (0x0002bc14) aid_visual_content_pane

0xb492,	// (0x00036d26) main_vradio_pane

0x5f7b,	// (0x0003180f) main_vradio_pane_g1_ParamLimits

0x5f7b,	// (0x0003180f) main_vradio_pane_g1

0xecff,	// (0x0003a593) main_vradio_pane_g2_ParamLimits

0xecff,	// (0x0003a593) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0003b0c6) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0003b0c6) main_vradio_pane_g

0x5f94,	// (0x00031828) main_vradio_pane_t1_ParamLimits

0x5f94,	// (0x00031828) main_vradio_pane_t1

0x5fa9,	// (0x0003183d) main_vradio_pane_t2_ParamLimits

0x5fa9,	// (0x0003183d) main_vradio_pane_t2

0xed0c,	// (0x0003a5a0) main_vradio_pane_t3_ParamLimits

0xed0c,	// (0x0003a5a0) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0003b0cb) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0003b0cb) main_vradio_pane_t

0x5fbe,	// (0x00031852) vradio_rocker_control_pane_ParamLimits

0x5fbe,	// (0x00031852) vradio_rocker_control_pane

0x5fd0,	// (0x00031864) vradio_station_info_pane_ParamLimits

0x5fd0,	// (0x00031864) vradio_station_info_pane

0xed20,	// (0x0003a5b4) vradio_frequency_info_pane_ParamLimits

0xed20,	// (0x0003a5b4) vradio_frequency_info_pane

0xe6ac,	// (0x00039f40) vradio_station_info_pane_g1

0xed2f,	// (0x0003a5c3) vradio_station_info_pane_t1_ParamLimits

0xed2f,	// (0x0003a5c3) vradio_station_info_pane_t1

0xed51,	// (0x0003a5e5) vradio_station_info_pane_t2_ParamLimits

0xed51,	// (0x0003a5e5) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0003b0d2) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0003b0d2) vradio_station_info_pane_t

0xed63,	// (0x0003a5f7) vradio_tuning_pane

0xed6b,	// (0x0003a5ff) vradio_rocker_control_pane_g1

0xed73,	// (0x0003a607) vradio_rocker_control_pane_g2

0xed7b,	// (0x0003a60f) vradio_rocker_control_pane_g3

0xed83,	// (0x0003a617) vradio_rocker_control_pane_g4

0xed8b,	// (0x0003a61f) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0003b0d7) vradio_rocker_control_pane_g

0x5fe2,	// (0x00031876) vradio_frequency_info_pane_g1

0xed93,	// (0x0003a627) vradio_frequency_info_pane_t1_ParamLimits

0xed93,	// (0x0003a627) vradio_frequency_info_pane_t1

0x5fec,	// (0x00031880) vradio_tuning_pane_g1

0x5ff7,	// (0x0003188b) vradio_tuning_pane_t1

0xb442,	// (0x00036cd6) area_side_right_pane_ParamLimits

0xb442,	// (0x00036cd6) area_side_right_pane

0xe25f,	// (0x00039af3) status_small_pane_g1

0xe267,	// (0x00039afb) status_small_pane_g2

0xe270,	// (0x00039b04) status_small_pane_g3

0xe279,	// (0x00039b0d) status_small_pane_g4

0x0003,

0xf603,	// (0x0003ae97) status_small_pane_g

0xe282,	// (0x00039b16) status_small_pane_t1

0xb492,	// (0x00036d26) main_video3_pane

0xeda7,	// (0x0003a63b) cams_zoom_vslider_pane

0xedaf,	// (0x0003a643) image3_wide_pane_ParamLimits

0xedaf,	// (0x0003a643) image3_wide_pane

0xedc9,	// (0x0003a65d) image3_wide_small_pane

0xedd5,	// (0x0003a669) main_video3_pane_g1_ParamLimits

0xedd5,	// (0x0003a669) main_video3_pane_g1

0xedf1,	// (0x0003a685) main_video3_pane_g2_ParamLimits

0xedf1,	// (0x0003a685) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0003b0e2) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0003b0e2) main_video3_pane_g

0xee0d,	// (0x0003a6a1) main_video3_pane_t1_ParamLimits

0xee0d,	// (0x0003a6a1) main_video3_pane_t1

0xee38,	// (0x0003a6cc) main_video3_pane_t2_ParamLimits

0xee38,	// (0x0003a6cc) main_video3_pane_t2

0xee63,	// (0x0003a6f7) main_video3_pane_t3_ParamLimits

0xee63,	// (0x0003a6f7) main_video3_pane_t3

0x0002,

0xf853,	// (0x0003b0e7) main_video3_pane_t_ParamLimits

0xf853,	// (0x0003b0e7) main_video3_pane_t

0xee90,	// (0x0003a724) cams_zoom_vslider_pane_g1

0xee99,	// (0x0003a72d) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0003b0ee) cams_zoom_vslider_pane_g

0xeea1,	// (0x0003a735) small_slider_vertical_pane

0xe6ac,	// (0x00039f40) small_slider_vertical_pane_g1

0xe6ac,	// (0x00039f40) small_slider_vertical_pane_g2

0xeea9,	// (0x0003a73d) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0003b0f3) small_slider_vertical_pane_g

0xb492,	// (0x00036d26) main_hwr_training_pane

0xeeb2,	// (0x0003a746) hwr_training_instruct_pane_ParamLimits

0xeeb2,	// (0x0003a746) hwr_training_instruct_pane

0x6006,	// (0x0003189a) hwr_training_navi_pane_ParamLimits

0x6006,	// (0x0003189a) hwr_training_navi_pane

0x6025,	// (0x000318b9) hwr_training_write_pane_ParamLimits

0x6025,	// (0x000318b9) hwr_training_write_pane

0xb414,	// (0x00036ca8) bg_frame_shadow_pane

0xeee9,	// (0x0003a77d) hwr_training_write_pane_g1

0xeef1,	// (0x0003a785) hwr_training_write_pane_g2

0xeef9,	// (0x0003a78d) hwr_training_write_pane_g3

0xef01,	// (0x0003a795) hwr_training_write_pane_g4

0xef09,	// (0x0003a79d) hwr_training_write_pane_g5

0xef11,	// (0x0003a7a5) hwr_training_write_pane_g6

0xef19,	// (0x0003a7ad) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0003b0fa) hwr_training_write_pane_g

0xbb10,	// (0x000373a4) hwr_training_navi_pane_g1_ParamLimits

0xbb10,	// (0x000373a4) hwr_training_navi_pane_g1

0xbb22,	// (0x000373b6) hwr_training_navi_pane_g2_ParamLimits

0xbb22,	// (0x000373b6) hwr_training_navi_pane_g2

0xbb34,	// (0x000373c8) hwr_training_navi_pane_g3_ParamLimits

0xbb34,	// (0x000373c8) hwr_training_navi_pane_g3

0xbb44,	// (0x000373d8) hwr_training_navi_pane_g4_ParamLimits

0xbb44,	// (0x000373d8) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0003b109) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0003b109) hwr_training_navi_pane_g

0xbb51,	// (0x000373e5) hwr_training_navi_pane_t1

0x6060,	// (0x000318f4) list_single_hwr_training_instruct_pane_ParamLimits

0x6060,	// (0x000318f4) list_single_hwr_training_instruct_pane

0xef21,	// (0x0003a7b5) list_single_hwr_training_instruct_pane_t1

0xe5ec,	// (0x00039e80) bg_frame_shadow_pane_g1

0xef30,	// (0x0003a7c4) bg_frame_shadow_pane_g2

0xef38,	// (0x0003a7cc) bg_frame_shadow_pane_g3

0xef40,	// (0x0003a7d4) bg_frame_shadow_pane_g4

0xef48,	// (0x0003a7dc) bg_frame_shadow_pane_g5

0xef50,	// (0x0003a7e4) bg_frame_shadow_pane_g6

0xef58,	// (0x0003a7ec) bg_frame_shadow_pane_g7

0xc39b,	// (0x00037c2f) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0003b114) bg_frame_shadow_pane_g

0xb492,	// (0x00036d26) main_video_tele_dialer_pane

0x108a,	// (0x0002c91e) aid_size_cell_video_keypad_ParamLimits

0x108a,	// (0x0002c91e) aid_size_cell_video_keypad

0x10a4,	// (0x0002c938) grid_video_dialer_keypad_pane_ParamLimits

0x10a4,	// (0x0002c938) grid_video_dialer_keypad_pane

0x10f0,	// (0x0002c984) video_down_pane_cp_ParamLimits

0x10f0,	// (0x0002c984) video_down_pane_cp

0x1106,	// (0x0002c99a) cell_video_dialer_keypad_pane_ParamLimits

0x1106,	// (0x0002c99a) cell_video_dialer_keypad_pane

0xef60,	// (0x0003a7f4) bg_button_pane_cp08_ParamLimits

0xef60,	// (0x0003a7f4) bg_button_pane_cp08

0x6091,	// (0x00031925) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6091,	// (0x00031925) cell_video_dialer_keypad_pane_g1

0x5866,	// (0x000310fa) mup3_rocker2_pane_ParamLimits

0x5866,	// (0x000310fa) mup3_rocker2_pane

0xe6ac,	// (0x00039f40) mup3_rocker2_pane_g1

0x08a2,	// (0x0002c136) main_dialer2_pane

0xb492,	// (0x00036d26) main_mp4_pane

0xbb67,	// (0x000373fb) main_mp4_pane_g1_ParamLimits

0xbb67,	// (0x000373fb) main_mp4_pane_g1

0xbb67,	// (0x000373fb) main_mp4_pane_g2_ParamLimits

0xbb67,	// (0x000373fb) main_mp4_pane_g2

0x1128,	// (0x0002c9bc) main_mp4_pane_g3_ParamLimits

0x1128,	// (0x0002c9bc) main_mp4_pane_g3

0xbb75,	// (0x00037409) main_mp4_pane_g4_ParamLimits

0xbb75,	// (0x00037409) main_mp4_pane_g4

0xbb9d,	// (0x00037431) main_mp4_pane_g5_ParamLimits

0xbb9d,	// (0x00037431) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0003b134) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0003b134) main_mp4_pane_g

0xbbed,	// (0x00037481) main_mp4_pane_t1_ParamLimits

0xbbed,	// (0x00037481) main_mp4_pane_t1

0xbc49,	// (0x000374dd) main_mp4_pane_t2_ParamLimits

0xbc49,	// (0x000374dd) main_mp4_pane_t2

0xef6c,	// (0x0003a800) main_mp4_pane_t3_ParamLimits

0xef6c,	// (0x0003a800) main_mp4_pane_t3

0xbc9b,	// (0x0003752f) main_mp4_pane_t4_ParamLimits

0xbc9b,	// (0x0003752f) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0003b141) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0003b141) main_mp4_pane_t

0xbcdf,	// (0x00037573) mp4_progress_pane_ParamLimits

0xbcdf,	// (0x00037573) mp4_progress_pane

0xbd29,	// (0x000375bd) mp4_rocker_pane_ParamLimits

0xbd29,	// (0x000375bd) mp4_rocker_pane

0xef94,	// (0x0003a828) mp4_progress_pane_t1

0xefad,	// (0x0003a841) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0003b14a) mp4_progress_pane_t

0xefc6,	// (0x0003a85a) mup_progress_pane_cp04

0x60c8,	// (0x0003195c) mp4_rocker_pane_g1

0x1164,	// (0x0002c9f8) aid_cell_size_keypad2_ParamLimits

0x1164,	// (0x0002c9f8) aid_cell_size_keypad2

0x117a,	// (0x0002ca0e) dialer2_ne_pane_ParamLimits

0x117a,	// (0x0002ca0e) dialer2_ne_pane

0x1194,	// (0x0002ca28) grid_dialer2_keypad_pane_ParamLimits

0x1194,	// (0x0002ca28) grid_dialer2_keypad_pane

0xe491,	// (0x00039d25) bg_popup_call_pane_cp07_ParamLimits

0xe491,	// (0x00039d25) bg_popup_call_pane_cp07

0x60d2,	// (0x00031966) dialer2_ne_pane_t1_ParamLimits

0x60d2,	// (0x00031966) dialer2_ne_pane_t1

0x11b0,	// (0x0002ca44) cell_dialer2_keypad_pane_ParamLimits

0x11b0,	// (0x0002ca44) cell_dialer2_keypad_pane

0xefe4,	// (0x0003a878) bg_button_pane_pane_cp04_ParamLimits

0xefe4,	// (0x0003a878) bg_button_pane_pane_cp04

0x610d,	// (0x000319a1) cell_dialer2_keypad_pane_g1_ParamLimits

0x610d,	// (0x000319a1) cell_dialer2_keypad_pane_g1

0x27eb,	// (0x0002e07f) aid_placing_vt_set_content_ParamLimits

0x27eb,	// (0x0002e07f) aid_placing_vt_set_content

0x2813,	// (0x0002e0a7) aid_placing_vt_set_title_ParamLimits

0x2813,	// (0x0002e0a7) aid_placing_vt_set_title

0xb492,	// (0x00036d26) main_image3_pane

0x1230,	// (0x0002cac4) area_side_right_pane_cp01_ParamLimits

0x1230,	// (0x0002cac4) area_side_right_pane_cp01

0xbb67,	// (0x000373fb) main_image3_pane_g1_ParamLimits

0xbb67,	// (0x000373fb) main_image3_pane_g1

0x1247,	// (0x0002cadb) main_image3_pane_g2_ParamLimits

0x1247,	// (0x0002cadb) main_image3_pane_g2

0x126f,	// (0x0002cb03) main_image3_pane_g3_ParamLimits

0x126f,	// (0x0002cb03) main_image3_pane_g3

0x1299,	// (0x0002cb2d) main_image3_pane_g4_ParamLimits

0x1299,	// (0x0002cb2d) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0003b159) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0003b159) main_image3_pane_g

0x12c3,	// (0x0002cb57) main_image3_pane_t1_ParamLimits

0x12c3,	// (0x0002cb57) main_image3_pane_t1

0x131b,	// (0x0002cbaf) main_image3_pane_t2_ParamLimits

0x131b,	// (0x0002cbaf) main_image3_pane_t2

0x136d,	// (0x0002cc01) main_image3_pane_t3_ParamLimits

0x136d,	// (0x0002cc01) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0003b162) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0003b162) main_image3_pane_t

0xcaf1,	// (0x00038385) grid_sctrl_middle_pane_cp01_ParamLimits

0xcaf1,	// (0x00038385) grid_sctrl_middle_pane_cp01

0x6175,	// (0x00031a09) cell_sctrl_middle_pane_cp01_ParamLimits

0x6175,	// (0x00031a09) cell_sctrl_middle_pane_cp01

0x6192,	// (0x00031a26) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6192,	// (0x00031a26) cell_sctrl_middle_pane_cp01_g1

0xb492,	// (0x00036d26) main_call4_pane

0x61a8,	// (0x00031a3c) aid_size_button_call4_ParamLimits

0x61a8,	// (0x00031a3c) aid_size_button_call4

0x61d9,	// (0x00031a6d) call4_windows_pane_ParamLimits

0x61d9,	// (0x00031a6d) call4_windows_pane

0x61f9,	// (0x00031a8d) grid_call4_button_pane_ParamLimits

0x61f9,	// (0x00031a8d) grid_call4_button_pane

0xeff0,	// (0x0003a884) call4_windows_conf_pane

0xf007,	// (0x0003a89b) popup_call4_audio_first_window_ParamLimits

0xf007,	// (0x0003a89b) popup_call4_audio_first_window

0xf053,	// (0x0003a8e7) popup_call4_audio_second_window_ParamLimits

0xf053,	// (0x0003a8e7) popup_call4_audio_second_window

0xf067,	// (0x0003a8fb) popup_call4_audio_wait_window_ParamLimits

0xf067,	// (0x0003a8fb) popup_call4_audio_wait_window

0x6226,	// (0x00031aba) cell_call4_button_pane_ParamLimits

0x6226,	// (0x00031aba) cell_call4_button_pane

0x624f,	// (0x00031ae3) bg_button_pane_cp09_ParamLimits

0x624f,	// (0x00031ae3) bg_button_pane_cp09

0x625b,	// (0x00031aef) cell_call4_button_pane_g1_ParamLimits

0x625b,	// (0x00031aef) cell_call4_button_pane_g1

0x6281,	// (0x00031b15) cell_call4_button_pane_t1_ParamLimits

0x6281,	// (0x00031b15) cell_call4_button_pane_t1

0xf0af,	// (0x0003a943) popup_call4_audio_conf_window_ParamLimits

0xf0af,	// (0x0003a943) popup_call4_audio_conf_window

0x58c6,	// (0x0003115a) mup3_progress_pane_t1_ParamLimits

0x58e5,	// (0x00031179) mup3_progress_pane_t2_ParamLimits

0xe9bf,	// (0x0003a253) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0003b03b) mup3_progress_pane_t_ParamLimits

0xe9dc,	// (0x0003a270) mup_progress_pane_cp03_ParamLimits

0x5e4c,	// (0x000316e0) mup3_control_keys_pane_g4_copy1

0xbd0d,	// (0x000375a1) mp4_rocker2_pane_ParamLimits

0xbd0d,	// (0x000375a1) mp4_rocker2_pane

0xf0c3,	// (0x0003a957) mp4_rocker2_pane_g1

0xf0cb,	// (0x0003a95f) mp4_rocker2_pane_g2

0xbd7b,	// (0x0003760f) mp4_rocker2_pane_g3

0xbd83,	// (0x00037617) mp4_rocker2_pane_g4

0xbd8b,	// (0x0003761f) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0003b16b) mp4_rocker2_pane_g

0xb492,	// (0x00036d26) main_camera4_pane

0xb492,	// (0x00036d26) main_video4_pane

0x10be,	// (0x0002c952) main_video_tele_dialer_pane_t1_ParamLimits

0x10be,	// (0x0002c952) main_video_tele_dialer_pane_t1

0x10d7,	// (0x0002c96b) main_video_tele_dialer_pane_t2_ParamLimits

0x10d7,	// (0x0002c96b) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0003b125) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0003b125) main_video_tele_dialer_pane_t

0x140d,	// (0x0002cca1) cam4_autofocus_pane_ParamLimits

0x140d,	// (0x0002cca1) cam4_autofocus_pane

0x1423,	// (0x0002ccb7) cam4_image_uncrop_pane_ParamLimits

0x1423,	// (0x0002ccb7) cam4_image_uncrop_pane

0x143d,	// (0x0002ccd1) cam4_indicators_pane_ParamLimits

0x143d,	// (0x0002ccd1) cam4_indicators_pane

0x1468,	// (0x0002ccfc) main_camera4_pane_g1_ParamLimits

0x1468,	// (0x0002ccfc) main_camera4_pane_g1

0x147a,	// (0x0002cd0e) main_camera4_pane_g2_ParamLimits

0x147a,	// (0x0002cd0e) main_camera4_pane_g2

0x148d,	// (0x0002cd21) main_camera4_pane_g3_ParamLimits

0x148d,	// (0x0002cd21) main_camera4_pane_g3

0x14a0,	// (0x0002cd34) main_camera4_pane_g4_ParamLimits

0x14a0,	// (0x0002cd34) main_camera4_pane_g4

0x14b3,	// (0x0002cd47) main_camera4_pane_g5_ParamLimits

0x14b3,	// (0x0002cd47) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0003b176) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0003b176) main_camera4_pane_g

0x14d7,	// (0x0002cd6b) main_camera4_pane_t1_ParamLimits

0x14d7,	// (0x0002cd6b) main_camera4_pane_t1

0xbdaf,	// (0x00037643) bg_tb_trans_pane_cp06

0xbdc5,	// (0x00037659) cam4_indicators_pane_g1

0xbdd6,	// (0x0003766a) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0003b191) cam4_indicators_pane_g

0xbdf4,	// (0x00037688) cam4_indicators_pane_t1

0x1527,	// (0x0002cdbb) main_video4_pane_g1_ParamLimits

0x1527,	// (0x0002cdbb) main_video4_pane_g1

0x1536,	// (0x0002cdca) main_video4_pane_g2_ParamLimits

0x1536,	// (0x0002cdca) main_video4_pane_g2

0x1545,	// (0x0002cdd9) main_video4_pane_g3_ParamLimits

0x1545,	// (0x0002cdd9) main_video4_pane_g3

0x1554,	// (0x0002cde8) main_video4_pane_g4_ParamLimits

0x1554,	// (0x0002cde8) main_video4_pane_g4

0x0004,

0xf904,	// (0x0003b198) main_video4_pane_g_ParamLimits

0xf904,	// (0x0003b198) main_video4_pane_g

0x1572,	// (0x0002ce06) vid4_indicators_pane_ParamLimits

0x1572,	// (0x0002ce06) vid4_indicators_pane

0x15a0,	// (0x0002ce34) video4_image_uncrop_cif_pane_ParamLimits

0x15a0,	// (0x0002ce34) video4_image_uncrop_cif_pane

0x15ba,	// (0x0002ce4e) video4_image_uncrop_nhd_pane_ParamLimits

0x15ba,	// (0x0002ce4e) video4_image_uncrop_nhd_pane

0x1423,	// (0x0002ccb7) video4_image_uncrop_vga_pane_ParamLimits

0x1423,	// (0x0002ccb7) video4_image_uncrop_vga_pane

0xb484,	// (0x00036d18) bg_tb_trans_pane_cp07

0xbe20,	// (0x000376b4) vid4_indicators_pane_g1

0xbe34,	// (0x000376c8) vid4_indicators_pane_g2

0xbe48,	// (0x000376dc) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0003b1a3) vid4_indicators_pane_g

0xbe77,	// (0x0003770b) vid4_indicators_pane_t1

0x62cd,	// (0x00031b61) cam4_autofocus_pane_g1

0x62d5,	// (0x00031b69) cam4_autofocus_pane_g2

0x62dd,	// (0x00031b71) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0003b1ae) cam4_autofocus_pane_g

0x62e5,	// (0x00031b79) cam4_autofocus_pane_g3_copy1

0x6075,	// (0x00031909) video_down_pane_cp_t1

0x6083,	// (0x00031917) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0003b12a) video_down_pane_cp_t

0xb484,	// (0x00036d18) popup_vitu2_window_ParamLimits

0xb484,	// (0x00036d18) popup_vitu2_window

0x15ce,	// (0x0002ce62) aid_size_cell2_itu2_ParamLimits

0x15ce,	// (0x0002ce62) aid_size_cell2_itu2

0x15f4,	// (0x0002ce88) aid_size_cell_itu2_ParamLimits

0x15f4,	// (0x0002ce88) aid_size_cell_itu2

0x1650,	// (0x0002cee4) bg_popup_window_pane_cp09_ParamLimits

0x1650,	// (0x0002cee4) bg_popup_window_pane_cp09

0x165e,	// (0x0002cef2) field_vitu2_entry_pane_ParamLimits

0x165e,	// (0x0002cef2) field_vitu2_entry_pane

0x1684,	// (0x0002cf18) grid_vitu2_function_pane_ParamLimits

0x1684,	// (0x0002cf18) grid_vitu2_function_pane

0x16d5,	// (0x0002cf69) grid_vitu2_itu_pane_ParamLimits

0x16d5,	// (0x0002cf69) grid_vitu2_itu_pane

0x1768,	// (0x0002cffc) cell_vitu2_itu_pane_ParamLimits

0x1768,	// (0x0002cffc) cell_vitu2_itu_pane

0x178c,	// (0x0002d020) cell_vitu2_function_pane_ParamLimits

0x178c,	// (0x0002d020) cell_vitu2_function_pane

0x62ed,	// (0x00031b81) bg_popup_call_pane_cp08_ParamLimits

0x62ed,	// (0x00031b81) bg_popup_call_pane_cp08

0x6306,	// (0x00031b9a) field_vitu2_entry_pane_g1

0x6312,	// (0x00031ba6) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0003b1b5) field_vitu2_entry_pane_g

0x632c,	// (0x00031bc0) field_vitu2_entry_pane_t1_ParamLimits

0x632c,	// (0x00031bc0) field_vitu2_entry_pane_t1

0x635b,	// (0x00031bef) field_vitu2_entry_pane_t2_ParamLimits

0x635b,	// (0x00031bef) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0003b1bc) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0003b1bc) field_vitu2_entry_pane_t

0x17cb,	// (0x0002d05f) bg_button_pane_cp010_ParamLimits

0x17cb,	// (0x0002d05f) bg_button_pane_cp010

0x17d9,	// (0x0002d06d) cell_vitu2_itu_pane_g1

0x17f7,	// (0x0002d08b) cell_vitu2_itu_pane_t1_ParamLimits

0x17f7,	// (0x0002d08b) cell_vitu2_itu_pane_t1

0x185d,	// (0x0002d0f1) cell_vitu2_itu_pane_t2_ParamLimits

0x185d,	// (0x0002d0f1) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0003b1c6) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0003b1c6) cell_vitu2_itu_pane_t

0xb484,	// (0x00036d18) bg_button_pane_cp011

0x1939,	// (0x0002d1cd) cell_vitu2_function_pane_g1

0xb492,	// (0x00036d26) main_myfav_hc_pane

0x13bd,	// (0x0002cc51) popup_image3_note_pane_ParamLimits

0x13bd,	// (0x0002cc51) popup_image3_note_pane

0x13d9,	// (0x0002cc6d) popup_image3_tool_bar_pane_ParamLimits

0x13d9,	// (0x0002cc6d) popup_image3_tool_bar_pane

0x18e1,	// (0x0002d175) cell_vitu2_itu_pane_t3_ParamLimits

0x18e1,	// (0x0002d175) cell_vitu2_itu_pane_t3

0xb414,	// (0x00036ca8) bg_popup_trans_pane

0x6380,	// (0x00031c14) grid_image3_tool_bar_pane

0x638a,	// (0x00031c1e) bg_popup_trans_pane_g1

0xc703,	// (0x00037f97) bg_popup_trans_pane_g2

0x6392,	// (0x00031c26) bg_popup_trans_pane_g3

0x639a,	// (0x00031c2e) bg_popup_trans_pane_g4

0x63a2,	// (0x00031c36) bg_popup_trans_pane_g5

0x63aa,	// (0x00031c3e) bg_popup_trans_pane_g6

0x63b2,	// (0x00031c46) bg_popup_trans_pane_g7

0x63ba,	// (0x00031c4e) bg_popup_trans_pane_g8

0xc6e3,	// (0x00037f77) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0003b1cd) bg_popup_trans_pane_g

0x63c2,	// (0x00031c56) cell_image3_tool_bar_pane_ParamLimits

0x63c2,	// (0x00031c56) cell_image3_tool_bar_pane

0xe6ac,	// (0x00039f40) cell_image3_tool_bar_pane_g1

0xb414,	// (0x00036ca8) bg_popup_trans_pane_cp1

0x63d6,	// (0x00031c6a) popup_image3_note_pane_t1

0x63e4,	// (0x00031c78) popup_image3_note_pane_t2

0x63f2,	// (0x00031c86) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0003b1e0) popup_image3_note_pane_t

0x6400,	// (0x00031c94) popup_image3_note_pane_t3_copy1

0x640e,	// (0x00031ca2) bg_myfav_hc_instruction_pane_ParamLimits

0x640e,	// (0x00031ca2) bg_myfav_hc_instruction_pane

0x6422,	// (0x00031cb6) cell_myfav_contact_pane_ParamLimits

0x6422,	// (0x00031cb6) cell_myfav_contact_pane

0x6440,	// (0x00031cd4) cell_myfav_contact_pane_cp1_ParamLimits

0x6440,	// (0x00031cd4) cell_myfav_contact_pane_cp1

0x6458,	// (0x00031cec) cell_myfav_contact_pane_cp2_ParamLimits

0x6458,	// (0x00031cec) cell_myfav_contact_pane_cp2

0x6470,	// (0x00031d04) cell_myfav_contact_pane_cp3_ParamLimits

0x6470,	// (0x00031d04) cell_myfav_contact_pane_cp3

0x6487,	// (0x00031d1b) cell_myfav_contact_pane_cp4_ParamLimits

0x6487,	// (0x00031d1b) cell_myfav_contact_pane_cp4

0x649f,	// (0x00031d33) cell_myfav_contact_pane_cp5_ParamLimits

0x649f,	// (0x00031d33) cell_myfav_contact_pane_cp5

0x64b3,	// (0x00031d47) cell_myfav_contact_pane_cp6_ParamLimits

0x64b3,	// (0x00031d47) cell_myfav_contact_pane_cp6

0x64c9,	// (0x00031d5d) cell_myfav_contact_pane_cp7_ParamLimits

0x64c9,	// (0x00031d5d) cell_myfav_contact_pane_cp7

0x64e3,	// (0x00031d77) listscroll_gen_pane_cp05

0x64ec,	// (0x00031d80) main_myfav_hc_pane_g1_ParamLimits

0x64ec,	// (0x00031d80) main_myfav_hc_pane_g1

0x6506,	// (0x00031d9a) main_myfav_hc_pane_g2_ParamLimits

0x6506,	// (0x00031d9a) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0003b1e7) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0003b1e7) main_myfav_hc_pane_g

0x6538,	// (0x00031dcc) main_myfav_hc_pane_t1_ParamLimits

0x6538,	// (0x00031dcc) main_myfav_hc_pane_t1

0x654f,	// (0x00031de3) main_myfav_hc_pane_t2_ParamLimits

0x654f,	// (0x00031de3) main_myfav_hc_pane_t2

0x6561,	// (0x00031df5) main_myfav_hc_pane_t3_ParamLimits

0x6561,	// (0x00031df5) main_myfav_hc_pane_t3

0x6573,	// (0x00031e07) main_myfav_hc_pane_t4_ParamLimits

0x6573,	// (0x00031e07) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0003b1ee) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0003b1ee) main_myfav_hc_pane_t

0xe6ac,	// (0x00039f40) bg_myfav_hc_instruction_pane_g1

0x659b,	// (0x00031e2f) cell_myfav_contact_pane_g1_ParamLimits

0x659b,	// (0x00031e2f) cell_myfav_contact_pane_g1

0x659b,	// (0x00031e2f) cell_myfav_contact_pane_g2_ParamLimits

0x659b,	// (0x00031e2f) cell_myfav_contact_pane_g2

0x65a7,	// (0x00031e3b) cell_myfav_contact_pane_g3_ParamLimits

0x65a7,	// (0x00031e3b) cell_myfav_contact_pane_g3

0xe9a9,	// (0x0003a23d) cell_myfav_contact_pane_g4_ParamLimits

0xe9a9,	// (0x0003a23d) cell_myfav_contact_pane_g4

0x65b4,	// (0x00031e48) cell_myfav_contact_pane_g5_ParamLimits

0x65b4,	// (0x00031e48) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0003b1f9) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0003b1f9) cell_myfav_contact_pane_g

0x6520,	// (0x00031db4) main_myfav_hc_pane_g3_ParamLimits

0x6520,	// (0x00031db4) main_myfav_hc_pane_g3

0x0482,	// (0x0002bd16) popup_adpt_find_window

0x65c0,	// (0x00031e54) afind_page_pane_ParamLimits

0x65c0,	// (0x00031e54) afind_page_pane

0x65d5,	// (0x00031e69) aid_size_cell_afind_ParamLimits

0x65d5,	// (0x00031e69) aid_size_cell_afind

0x65f3,	// (0x00031e87) bg_popup_sub_pane_cp09_ParamLimits

0x65f3,	// (0x00031e87) bg_popup_sub_pane_cp09

0x6600,	// (0x00031e94) find_pane_cp01_ParamLimits

0x6600,	// (0x00031e94) find_pane_cp01

0x660d,	// (0x00031ea1) grid_afind_control_pane_ParamLimits

0x660d,	// (0x00031ea1) grid_afind_control_pane

0x6621,	// (0x00031eb5) grid_afind_pane_ParamLimits

0x6621,	// (0x00031eb5) grid_afind_pane

0x6643,	// (0x00031ed7) cell_afind_pane_ParamLimits

0x6643,	// (0x00031ed7) cell_afind_pane

0xe6ac,	// (0x00039f40) afind_page_pane_g1

0x66a4,	// (0x00031f38) afind_page_pane_g2

0x66ad,	// (0x00031f41) afind_page_pane_g3

0x0002,

0xf970,	// (0x0003b204) afind_page_pane_g

0x66b6,	// (0x00031f4a) afind_page_pane_t1

0x66d6,	// (0x00031f6a) cell_afind_grid_control_pane_ParamLimits

0x66d6,	// (0x00031f6a) cell_afind_grid_control_pane

0xefe4,	// (0x0003a878) bg_button_pane_cp69_ParamLimits

0xefe4,	// (0x0003a878) bg_button_pane_cp69

0x66e5,	// (0x00031f79) cell_afind_pane_g1_ParamLimits

0x66e5,	// (0x00031f79) cell_afind_pane_g1

0x66f2,	// (0x00031f86) cell_afind_pane_t1_ParamLimits

0x66f2,	// (0x00031f86) cell_afind_pane_t1

0xc4fc,	// (0x00037d90) bg_button_pane_cp72

0x6704,	// (0x00031f98) cell_afind_grid_control_pane_g1

0x45aa,	// (0x0002fe3e) aid_image_placing_area_ParamLimits

0x45aa,	// (0x0002fe3e) aid_image_placing_area

0xecb2,	// (0x0003a546) field_vitu_entry_pane_g1_ParamLimits

0xecb2,	// (0x0003a546) field_vitu_entry_pane_g1

0xecbe,	// (0x0003a552) field_vitu_entry_pane_g2_ParamLimits

0xecbe,	// (0x0003a552) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0003b0b5) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0003b0b5) field_vitu_entry_pane_g

0x5f13,	// (0x000317a7) cell_vitu_itu_pane_g1_ParamLimits

0x5f55,	// (0x000317e9) cell_vitu_itu_pane_t3_ParamLimits

0x5f55,	// (0x000317e9) cell_vitu_itu_pane_t3

0xef94,	// (0x0003a828) mp4_progress_pane_t1_ParamLimits

0xefad,	// (0x0003a841) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0003b14a) mp4_progress_pane_t_ParamLimits

0xefc6,	// (0x0003a85a) mup_progress_pane_cp04_ParamLimits

0x6587,	// (0x00031e1b) main_myfav_hc_pane_t5_ParamLimits

0x6587,	// (0x00031e1b) main_myfav_hc_pane_t5

0xb43a,	// (0x00036cce) aid_zoom_text_primary

0x0482,	// (0x0002bd16) popup_adpt_find_window_ParamLimits

0xb484,	// (0x00036d18) main_cam_set_pane

0x1454,	// (0x0002cce8) cam4_zoom_pane_ParamLimits

0x1454,	// (0x0002cce8) cam4_zoom_pane

0x670d,	// (0x00031fa1) main_cam_set_pane_g1_ParamLimits

0x670d,	// (0x00031fa1) main_cam_set_pane_g1

0x671b,	// (0x00031faf) main_cam_set_pane_g2_ParamLimits

0x671b,	// (0x00031faf) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0003b20b) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0003b20b) main_cam_set_pane_g

0x673c,	// (0x00031fd0) main_cam_set_pane_t1_ParamLimits

0x673c,	// (0x00031fd0) main_cam_set_pane_t1

0x6757,	// (0x00031feb) main_cset_listscroll_pane_ParamLimits

0x6757,	// (0x00031feb) main_cset_listscroll_pane

0x6777,	// (0x0003200b) main_cset_slider_pane_ParamLimits

0x6777,	// (0x0003200b) main_cset_slider_pane

0x67a5,	// (0x00032039) main_cset_list_pane_ParamLimits

0x67a5,	// (0x00032039) main_cset_list_pane

0x67b5,	// (0x00032049) scroll_pane_cp028

0x67be,	// (0x00032052) aid_area_touch_slider

0x67da,	// (0x0003206e) cset_slider_pane

0x6804,	// (0x00032098) main_cset_slider_pane_g1

0x6819,	// (0x000320ad) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0003b210) main_cset_slider_pane_g

0x6905,	// (0x00032199) main_cset_slider_pane_t1

0x6933,	// (0x000321c7) main_cset_slider_pane_t2

0x694d,	// (0x000321e1) main_cset_slider_pane_t3

0x6967,	// (0x000321fb) main_cset_slider_pane_t4

0x6981,	// (0x00032215) main_cset_slider_pane_t5

0x699b,	// (0x0003222f) main_cset_slider_pane_t6

0x69b0,	// (0x00032244) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0003b235) main_cset_slider_pane_t

0x6b26,	// (0x000323ba) cset_list_set_pane_ParamLimits

0x6b26,	// (0x000323ba) cset_list_set_pane

0x6b38,	// (0x000323cc) aid_position_infowindow_above

0x6b40,	// (0x000323d4) aid_position_infowindow_below

0x6b48,	// (0x000323dc) cset_list_set_pane_g1_ParamLimits

0x6b48,	// (0x000323dc) cset_list_set_pane_g1

0x6b54,	// (0x000323e8) cset_list_set_pane_g3_ParamLimits

0x6b54,	// (0x000323e8) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0003b254) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0003b254) cset_list_set_pane_g

0x6b63,	// (0x000323f7) cset_list_set_pane_t1_ParamLimits

0x6b63,	// (0x000323f7) cset_list_set_pane_t1

0xcaf1,	// (0x00038385) list_highlight_pane_cp021_ParamLimits

0xcaf1,	// (0x00038385) list_highlight_pane_cp021

0xcf6a,	// (0x000387fe) cset_slider_pane_g1

0xcf7c,	// (0x00038810) cset_slider_pane_g2

0xcf73,	// (0x00038807) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0003b259) cset_slider_pane_g

0xbe8e,	// (0x00037722) aid_area_touch_cam4_zoom

0xbe96,	// (0x0003772a) cam4_zoom_cont_pane

0xbe9e,	// (0x00037732) cam4_zoom_pane_g1

0xbea6,	// (0x0003773a) cam4_zoom_pane_g2

0x194d,	// (0x0002d1e1) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0003b260) cam4_zoom_pane_g

0xbeae,	// (0x00037742) cam4_zoom_cont_pane_g1

0xbeb7,	// (0x0003774b) cam4_zoom_cont_pane_g2

0xbec0,	// (0x00037754) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0003b267) cam4_zoom_cont_pane_g

0x61c6,	// (0x00031a5a) call4_image_pane_ParamLimits

0x61c6,	// (0x00031a5a) call4_image_pane

0xeff0,	// (0x0003a884) call4_windows_conf_pane_ParamLimits

0xf031,	// (0x0003a8c5) popup_call4_audio_in_window_ParamLimits

0xf031,	// (0x0003a8c5) popup_call4_audio_in_window

0xb414,	// (0x00036ca8) bg_popup_call2_act_pane_cp02

0xf0a7,	// (0x0003a93b) call4_list_conf_pane

0xe6ac,	// (0x00039f40) call4_image_pane_g1

0xe6ac,	// (0x00039f40) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0003af7b) call4_image_pane_g

0x6b78,	// (0x0003240c) list_single_graphic_popup_conf4_pane_ParamLimits

0x6b78,	// (0x0003240c) list_single_graphic_popup_conf4_pane

0xb414,	// (0x00036ca8) list_highlight_pane_cp022

0x6b8b,	// (0x0003241f) list_single_graphic_popup_conf4_pane_g1

0xcc2b,	// (0x000384bf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0003b26e) list_single_graphic_popup_conf4_pane_g

0x6b93,	// (0x00032427) list_single_graphic_popup_conf4_pane_t1

0x2937,	// (0x0002e1cb) popup_vtel_slider_window_ParamLimits

0x2937,	// (0x0002e1cb) popup_vtel_slider_window

0xefd2,	// (0x0003a866) dialer2_ne_pane_t2_ParamLimits

0xefd2,	// (0x0003a866) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0003b14f) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0003b14f) dialer2_ne_pane_t

0xe491,	// (0x00039d25) bg_popup_sub_pane_cp010_ParamLimits

0xe491,	// (0x00039d25) bg_popup_sub_pane_cp010

0x6ba9,	// (0x0003243d) popup_vtel_slider_window_g1_ParamLimits

0x6ba9,	// (0x0003243d) popup_vtel_slider_window_g1

0x6bbc,	// (0x00032450) popup_vtel_slider_window_g2_ParamLimits

0x6bbc,	// (0x00032450) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0003b273) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0003b273) popup_vtel_slider_window_g

0x6c12,	// (0x000324a6) vtel_slider_pane_ParamLimits

0x6c12,	// (0x000324a6) vtel_slider_pane

0x6c34,	// (0x000324c8) vtel_slider_pane_g1_ParamLimits

0x6c34,	// (0x000324c8) vtel_slider_pane_g1

0x6c48,	// (0x000324dc) vtel_slider_pane_g2_ParamLimits

0x6c48,	// (0x000324dc) vtel_slider_pane_g2

0x6c60,	// (0x000324f4) vtel_slider_pane_g3_ParamLimits

0x6c60,	// (0x000324f4) vtel_slider_pane_g3

0x6c34,	// (0x000324c8) vtel_slider_pane_g4_ParamLimits

0x6c34,	// (0x000324c8) vtel_slider_pane_g4

0x6c76,	// (0x0003250a) vtel_slider_pane_g5_ParamLimits

0x6c76,	// (0x0003250a) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0003b27c) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0003b27c) vtel_slider_pane_g

0xb492,	// (0x00036d26) main_gallery2_pane

0x1620,	// (0x0002ceb4) aid_size_row_itut2_dropdow_list_ParamLimits

0x1620,	// (0x0002ceb4) aid_size_row_itut2_dropdow_list

0x16ac,	// (0x0002cf40) grid_vitu2_function_top_pane_ParamLimits

0x16ac,	// (0x0002cf40) grid_vitu2_function_top_pane

0x1711,	// (0x0002cfa5) popup_vitu2_dropdown_list_window_ParamLimits

0x1711,	// (0x0002cfa5) popup_vitu2_dropdown_list_window

0x173a,	// (0x0002cfce) popup_vitu2_match_list_window

0x1955,	// (0x0002d1e9) cell_vitu2_function_top_pane_ParamLimits

0x1955,	// (0x0002d1e9) cell_vitu2_function_top_pane

0x1973,	// (0x0002d207) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1973,	// (0x0002d207) cell_vitu2_function_top_pane_cp01

0x1991,	// (0x0002d225) cell_vitu2_function_top_wide_pane_ParamLimits

0x1991,	// (0x0002d225) cell_vitu2_function_top_wide_pane

0xb484,	// (0x00036d18) bg_button_pane_cp012

0x19af,	// (0x0002d243) cell_vitu2_function_top_pane_g1

0xbec9,	// (0x0003775d) bg_button_pane_cp013_ParamLimits

0xbec9,	// (0x0003775d) bg_button_pane_cp013

0x6c9a,	// (0x0003252e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c9a,	// (0x0003252e) cell_vitu2_function_top_wide_pane_g1

0xb484,	// (0x00036d18) bg_popup_sub_pane_cp20

0x19c3,	// (0x0002d257) list_vitu2_match_list_pane

0x638a,	// (0x00031c1e) bg_popup_sub_pane_cp20_g1

0x6392,	// (0x00031c26) bg_popup_sub_pane_cp20_g2

0xc703,	// (0x00037f97) bg_popup_sub_pane_cp20_g3

0x639a,	// (0x00031c2e) bg_popup_sub_pane_cp20_g4

0xc6e3,	// (0x00037f77) bg_popup_sub_pane_cp20_g5

0x6cb2,	// (0x00032546) bg_popup_sub_pane_cp20_g6

0x63aa,	// (0x00031c3e) bg_popup_sub_pane_cp20_g7

0x63b2,	// (0x00031c46) bg_popup_sub_pane_cp20_g8

0x63ba,	// (0x00031c4e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0003b287) bg_popup_sub_pane_cp20_g

0xbee5,	// (0x00037779) list_vitu2_match_list_item_pane_ParamLimits

0xbee5,	// (0x00037779) list_vitu2_match_list_item_pane

0xbef7,	// (0x0003778b) list_vitu2_match_list_item_pane_t1

0xb492,	// (0x00036d26) bg_popup_sub_pane_cp21

0xbf05,	// (0x00037799) grid_vitu2_dropdown_list_pane

0x19e1,	// (0x0002d275) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x19e1,	// (0x0002d275) cell_vitu2_dropdown_list_char_pane

0x1a02,	// (0x0002d296) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1a02,	// (0x0002d296) cell_vitu2_dropdown_list_ctrl_pane

0x6d07,	// (0x0003259b) cell_vitu2_dropdown_list_char_pane_g1

0x6d10,	// (0x000325a4) cell_vitu2_dropdown_list_char_pane_g2

0x6d19,	// (0x000325ad) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0003b2a4) cell_vitu2_dropdown_list_char_pane_g

0x1a2e,	// (0x0002d2c2) cell_vitu2_dropdown_list_char_pane_t1

0x6d22,	// (0x000325b6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d22,	// (0x000325b6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d2f,	// (0x000325c3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d2f,	// (0x000325c3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d3c,	// (0x000325d0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d3c,	// (0x000325d0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1a3c,	// (0x0002d2d0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1a3c,	// (0x0002d2d0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbdaf,	// (0x00037643) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbdaf,	// (0x00037643) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0003b2ab) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0003b2ab) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d49,	// (0x000325dd) aid_size_cell_gallery2_ParamLimits

0x6d49,	// (0x000325dd) aid_size_cell_gallery2

0x6d5f,	// (0x000325f3) grid_gallery2_pane_ParamLimits

0x6d5f,	// (0x000325f3) grid_gallery2_pane

0x6d73,	// (0x00032607) scroll_pane_cp029_ParamLimits

0x6d73,	// (0x00032607) scroll_pane_cp029

0x6d7f,	// (0x00032613) cell_gallery2_pane_ParamLimits

0x6d7f,	// (0x00032613) cell_gallery2_pane

0x6db5,	// (0x00032649) cell_gallery2_pane_g2

0x6dbf,	// (0x00032653) cell_gallery2_pane_g3

0x6dc7,	// (0x0003265b) cell_gallery2_pane_g4

0x6dcf,	// (0x00032663) cell_gallery2_pane_g5

0xce26,	// (0x000386ba) grid_highlight_pane_cp10

0x173a,	// (0x0002cfce) popup_vitu2_match_list_window_ParamLimits

0x1751,	// (0x0002cfe5) popup_vitu2_query_window_ParamLimits

0x1751,	// (0x0002cfe5) popup_vitu2_query_window

0xb492,	// (0x00036d26) bg_vitu2_candi_button_pane

0x6d07,	// (0x0003259b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6d10,	// (0x000325a4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6d19,	// (0x000325ad) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6dd7,	// (0x0003266b) bg_button_pane_cp015

0x6de9,	// (0x0003267d) bg_button_pane_cp016

0x6dfc,	// (0x00032690) bg_button_pane_cp017

0xe2a4,	// (0x00039b38) bg_popup_sub_pane_cp22

0x6e41,	// (0x000326d5) popup_vitu2_query_window_g1

0x6e4d,	// (0x000326e1) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0003b2b6) popup_vitu2_query_window_g

0x6e6c,	// (0x00032700) popup_vitu2_query_window_t1_ParamLimits

0x6e6c,	// (0x00032700) popup_vitu2_query_window_t1

0x6ea1,	// (0x00032735) popup_vitu2_query_window_t2_ParamLimits

0x6ea1,	// (0x00032735) popup_vitu2_query_window_t2

0x6eb3,	// (0x00032747) popup_vitu2_query_window_t3_ParamLimits

0x6eb3,	// (0x00032747) popup_vitu2_query_window_t3

0x6edb,	// (0x0003276f) popup_vitu2_query_window_t4_ParamLimits

0x6edb,	// (0x0003276f) popup_vitu2_query_window_t4

0x6efc,	// (0x00032790) popup_vitu2_query_window_t5_ParamLimits

0x6efc,	// (0x00032790) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0003b2bd) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0003b2bd) popup_vitu2_query_window_t

0x679d,	// (0x00032031) main_cset_text_pane

0x67be,	// (0x00032052) aid_area_touch_slider_ParamLimits

0x67da,	// (0x0003206e) cset_slider_pane_ParamLimits

0x6804,	// (0x00032098) main_cset_slider_pane_g1_ParamLimits

0x6819,	// (0x000320ad) main_cset_slider_pane_g2_ParamLimits

0x682e,	// (0x000320c2) main_cset_slider_pane_g3_ParamLimits

0x682e,	// (0x000320c2) main_cset_slider_pane_g3

0x683a,	// (0x000320ce) main_cset_slider_pane_g4_ParamLimits

0x683a,	// (0x000320ce) main_cset_slider_pane_g4

0x6849,	// (0x000320dd) main_cset_slider_pane_g5_ParamLimits

0x6849,	// (0x000320dd) main_cset_slider_pane_g5

0x6855,	// (0x000320e9) main_cset_slider_pane_g6_ParamLimits

0x6855,	// (0x000320e9) main_cset_slider_pane_g6

0xf97c,	// (0x0003b210) main_cset_slider_pane_g_ParamLimits

0x6905,	// (0x00032199) main_cset_slider_pane_t1_ParamLimits

0x6933,	// (0x000321c7) main_cset_slider_pane_t2_ParamLimits

0x694d,	// (0x000321e1) main_cset_slider_pane_t3_ParamLimits

0x6967,	// (0x000321fb) main_cset_slider_pane_t4_ParamLimits

0x6981,	// (0x00032215) main_cset_slider_pane_t5_ParamLimits

0x699b,	// (0x0003222f) main_cset_slider_pane_t6_ParamLimits

0x69b0,	// (0x00032244) main_cset_slider_pane_t7_ParamLimits

0x69da,	// (0x0003226e) main_cset_slider_pane_t8_ParamLimits

0x69da,	// (0x0003226e) main_cset_slider_pane_t8

0x6a02,	// (0x00032296) main_cset_slider_pane_t9_ParamLimits

0x6a02,	// (0x00032296) main_cset_slider_pane_t9

0x6a2a,	// (0x000322be) main_cset_slider_pane_t10_ParamLimits

0x6a2a,	// (0x000322be) main_cset_slider_pane_t10

0x6a52,	// (0x000322e6) main_cset_slider_pane_t11_ParamLimits

0x6a52,	// (0x000322e6) main_cset_slider_pane_t11

0x6a7a,	// (0x0003230e) main_cset_slider_pane_t12_ParamLimits

0x6a7a,	// (0x0003230e) main_cset_slider_pane_t12

0x6a97,	// (0x0003232b) main_cset_slider_pane_t13_ParamLimits

0x6a97,	// (0x0003232b) main_cset_slider_pane_t13

0xf9a1,	// (0x0003b235) main_cset_slider_pane_t_ParamLimits

0xb414,	// (0x00036ca8) bg_popup_sub_pane_cp011

0x6f73,	// (0x00032807) main_cset_text_pane_g1

0x6f7b,	// (0x0003280f) main_cset_text_pane_t1

0x6f89,	// (0x0003281d) main_cset_text_pane_t2

0x6f97,	// (0x0003282b) main_cset_text_pane_t3

0x6fa5,	// (0x00032839) main_cset_text_pane_t4

0x6fb3,	// (0x00032847) main_cset_text_pane_t5

0x6fc1,	// (0x00032855) main_cset_text_pane_t6

0x6fcf,	// (0x00032863) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0003b2cc) main_cset_text_pane_t

0xb492,	// (0x00036d26) main_cam4_burst_pane

0xb492,	// (0x00036d26) main_cam5_pane

0x66c4,	// (0x00031f58) bg_button_pane_cp019

0x66cd,	// (0x00031f61) bg_button_pane_cp020

0x6869,	// (0x000320fd) main_cset_slider_pane_g7_ParamLimits

0x6869,	// (0x000320fd) main_cset_slider_pane_g7

0x6875,	// (0x00032109) main_cset_slider_pane_g8_ParamLimits

0x6875,	// (0x00032109) main_cset_slider_pane_g8

0x6881,	// (0x00032115) main_cset_slider_pane_g9_ParamLimits

0x6881,	// (0x00032115) main_cset_slider_pane_g9

0x688d,	// (0x00032121) main_cset_slider_pane_g10_ParamLimits

0x688d,	// (0x00032121) main_cset_slider_pane_g10

0x6899,	// (0x0003212d) main_cset_slider_pane_g11_ParamLimits

0x6899,	// (0x0003212d) main_cset_slider_pane_g11

0x68a5,	// (0x00032139) main_cset_slider_pane_g12_ParamLimits

0x68a5,	// (0x00032139) main_cset_slider_pane_g12

0x68b1,	// (0x00032145) main_cset_slider_pane_g13_ParamLimits

0x68b1,	// (0x00032145) main_cset_slider_pane_g13

0x68bd,	// (0x00032151) main_cset_slider_pane_g14_ParamLimits

0x68bd,	// (0x00032151) main_cset_slider_pane_g14

0x68c9,	// (0x0003215d) main_cset_slider_pane_g15_ParamLimits

0x68c9,	// (0x0003215d) main_cset_slider_pane_g15

0x6ab4,	// (0x00032348) main_cset_slider_pane_t14_ParamLimits

0x6ab4,	// (0x00032348) main_cset_slider_pane_t14

0x6aed,	// (0x00032381) main_cset_slider_pane_t15_ParamLimits

0x6aed,	// (0x00032381) main_cset_slider_pane_t15

0x6fdd,	// (0x00032871) aid_cam4_burst_size_cell_ParamLimits

0x6fdd,	// (0x00032871) aid_cam4_burst_size_cell

0x6ffd,	// (0x00032891) grid_cam4_burst_pane_ParamLimits

0x6ffd,	// (0x00032891) grid_cam4_burst_pane

0x7035,	// (0x000328c9) linegrid_cam4_burst_pane_ParamLimits

0x7035,	// (0x000328c9) linegrid_cam4_burst_pane

0x7059,	// (0x000328ed) scroll_pane_cp30_ParamLimits

0x7059,	// (0x000328ed) scroll_pane_cp30

0x7065,	// (0x000328f9) cell_cam4_burst_pane_ParamLimits

0x7065,	// (0x000328f9) cell_cam4_burst_pane

0x70b2,	// (0x00032946) linegrid_cam4_burst_pane_g1_ParamLimits

0x70b2,	// (0x00032946) linegrid_cam4_burst_pane_g1

0x70bf,	// (0x00032953) linegrid_cam4_burst_pane_g2_ParamLimits

0x70bf,	// (0x00032953) linegrid_cam4_burst_pane_g2

0x70d0,	// (0x00032964) linegrid_cam4_burst_pane_g3_ParamLimits

0x70d0,	// (0x00032964) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0003b2db) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0003b2db) linegrid_cam4_burst_pane_g

0x70dd,	// (0x00032971) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x70dd,	// (0x00032971) linegrid_cam4_burst_pane_g3_copy1

0x70f7,	// (0x0003298b) linegrid_cam4_burst_pane_g4_ParamLimits

0x70f7,	// (0x0003298b) linegrid_cam4_burst_pane_g4

0x7104,	// (0x00032998) linegrid_cam4_burst_pane_g5_ParamLimits

0x7104,	// (0x00032998) linegrid_cam4_burst_pane_g5

0x7115,	// (0x000329a9) linegrid_cam4_burst_pane_g6_ParamLimits

0x7115,	// (0x000329a9) linegrid_cam4_burst_pane_g6

0x712c,	// (0x000329c0) linegrid_cam4_burst_pane_g7_ParamLimits

0x712c,	// (0x000329c0) linegrid_cam4_burst_pane_g7

0x7139,	// (0x000329cd) cell_cam4_burst_pane_g1

0x7158,	// (0x000329ec) main_cam5_pane_t1_ParamLimits

0x7158,	// (0x000329ec) main_cam5_pane_t1

0x716a,	// (0x000329fe) main_cam5_pane_t2_ParamLimits

0x716a,	// (0x000329fe) main_cam5_pane_t2

0x717c,	// (0x00032a10) main_cam5_pane_t3_ParamLimits

0x717c,	// (0x00032a10) main_cam5_pane_t3

0x718e,	// (0x00032a22) main_cam5_pane_t4_ParamLimits

0x718e,	// (0x00032a22) main_cam5_pane_t4

0x71a6,	// (0x00032a3a) main_cam5_pane_t5_ParamLimits

0x71a6,	// (0x00032a3a) main_cam5_pane_t5

0x71ba,	// (0x00032a4e) main_cam5_pane_t6_ParamLimits

0x71ba,	// (0x00032a4e) main_cam5_pane_t6

0x71ce,	// (0x00032a62) main_cam5_pane_t7_ParamLimits

0x71ce,	// (0x00032a62) main_cam5_pane_t7

0x71e0,	// (0x00032a74) main_cam5_pane_t8_ParamLimits

0x71e0,	// (0x00032a74) main_cam5_pane_t8

0x71fc,	// (0x00032a90) main_cam5_pane_t9_ParamLimits

0x71fc,	// (0x00032a90) main_cam5_pane_t9

0x720e,	// (0x00032aa2) main_cam5_pane_t10_ParamLimits

0x720e,	// (0x00032aa2) main_cam5_pane_t10

0x7220,	// (0x00032ab4) main_cam5_pane_t11_ParamLimits

0x7220,	// (0x00032ab4) main_cam5_pane_t11

0x7232,	// (0x00032ac6) main_cam5_pane_t12_ParamLimits

0x7232,	// (0x00032ac6) main_cam5_pane_t12

0x7247,	// (0x00032adb) main_cam5_pane_t13_ParamLimits

0x7247,	// (0x00032adb) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0003b2e7) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0003b2e7) main_cam5_pane_t

0x0504,	// (0x0002bd98) popup_scut_keymap_window_ParamLimits

0x0504,	// (0x0002bd98) popup_scut_keymap_window

0x7264,	// (0x00032af8) aid_size_cell_brow_shortcut

0xce26,	// (0x000386ba) bg_popup_window_pane_cp010

0x7270,	// (0x00032b04) grid_scut_pane

0x727c,	// (0x00032b10) cell_scut_pane_ParamLimits

0x727c,	// (0x00032b10) cell_scut_pane

0x7293,	// (0x00032b27) cell_scut_pane_g1

0x729c,	// (0x00032b30) cell_scut_pane_t1

0x72ab,	// (0x00032b3f) cell_scut_pane_t2

0x72ba,	// (0x00032b4e) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0003b302) cell_scut_pane_t

0x547f,	// (0x00030d13) main_mup3_pane_g8_ParamLimits

0x547f,	// (0x00030d13) main_mup3_pane_g8

0x1638,	// (0x0002cecc) area_vitu2_query_pane_ParamLimits

0x1638,	// (0x0002cecc) area_vitu2_query_pane

0x6e0f,	// (0x000326a3) input_focus_pane_cp08

0x72c8,	// (0x00032b5c) area_vitu2_query_pane_g1

0x72d4,	// (0x00032b68) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0003b309) area_vitu2_query_pane_g

0x72e5,	// (0x00032b79) area_vitu2_query_pane_t1_ParamLimits

0x72e5,	// (0x00032b79) area_vitu2_query_pane_t1

0x72f9,	// (0x00032b8d) area_vitu2_query_pane_t2_ParamLimits

0x72f9,	// (0x00032b8d) area_vitu2_query_pane_t2

0x730d,	// (0x00032ba1) area_vitu2_query_pane_t3_ParamLimits

0x730d,	// (0x00032ba1) area_vitu2_query_pane_t3

0x7335,	// (0x00032bc9) area_vitu2_query_pane_t4_ParamLimits

0x7335,	// (0x00032bc9) area_vitu2_query_pane_t4

0x735d,	// (0x00032bf1) area_vitu2_query_pane_t5_ParamLimits

0x735d,	// (0x00032bf1) area_vitu2_query_pane_t5

0x7385,	// (0x00032c19) area_vitu2_query_pane_t6_ParamLimits

0x7385,	// (0x00032c19) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0003b30e) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0003b30e) area_vitu2_query_pane_t

0x73d1,	// (0x00032c65) bg_button_pane_cp018

0x73df,	// (0x00032c73) bg_button_pane_cp021

0x73eb,	// (0x00032c7f) bg_button_pane_cp022

0x73fa,	// (0x00032c8e) input_focus_pane_cp09

0x3c00,	// (0x0002f494) aid_size_touch_mv_arrow_left

0x3c29,	// (0x0002f4bd) aid_size_touch_mv_arrow_right

0x68e1,	// (0x00032175) main_cset_slider_pane_g16_ParamLimits

0x68e1,	// (0x00032175) main_cset_slider_pane_g16

0x68ed,	// (0x00032181) main_cset_slider_pane_g17_ParamLimits

0x68ed,	// (0x00032181) main_cset_slider_pane_g17

0x7139,	// (0x000329cd) cell_cam4_burst_pane_g1_ParamLimits

0xb414,	// (0x00036ca8) compa_mode_pane

0x6bcc,	// (0x00032460) popup_vtel_slider_window_g3_ParamLimits

0x6bcc,	// (0x00032460) popup_vtel_slider_window_g3

0x6be3,	// (0x00032477) popup_vtel_slider_window_g4_ParamLimits

0x6be3,	// (0x00032477) popup_vtel_slider_window_g4

0x6bfa,	// (0x0003248e) popup_vtel_slider_window_t1_ParamLimits

0x6bfa,	// (0x0003248e) popup_vtel_slider_window_t1

0xb492,	// (0x00036d26) main_cl_pane

0xba1f,	// (0x000372b3) popup_imed_adjust2_window_ParamLimits

0xe2a4,	// (0x00039b38) bg_tb_trans_pane_cp05_ParamLimits

0xebe7,	// (0x0003a47b) popup_imed_adjust2_window_g1_ParamLimits

0xebf6,	// (0x0003a48a) popup_imed_adjust2_window_g2_ParamLimits

0xebf6,	// (0x0003a48a) popup_imed_adjust2_window_g2

0xec02,	// (0x0003a496) popup_imed_adjust2_window_g3_ParamLimits

0xec02,	// (0x0003a496) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0003b079) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0003b079) popup_imed_adjust2_window_g

0xec0e,	// (0x0003a4a2) popup_imed_adjust2_window_t1_ParamLimits

0xec26,	// (0x0003a4ba) slider_imed_adjust_pane_ParamLimits

0xec3a,	// (0x0003a4ce) slider_imed_adjust_pane_g1_ParamLimits

0xec4a,	// (0x0003a4de) slider_imed_adjust_pane_g2_ParamLimits

0xec5a,	// (0x0003a4ee) slider_imed_adjust_pane_g3_ParamLimits

0xec6b,	// (0x0003a4ff) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0003b080) slider_imed_adjust_pane_g_ParamLimits

0x13f5,	// (0x0002cc89) aid_touch_area_cam4_ParamLimits

0x13f5,	// (0x0002cc89) aid_touch_area_cam4

0xbd93,	// (0x00037627) battery_pane_cp01

0x14c4,	// (0x0002cd58) main_camera4_pane_g6_ParamLimits

0x14c4,	// (0x0002cd58) main_camera4_pane_g6

0x14ee,	// (0x0002cd82) main_camera4_pane_t2_ParamLimits

0x14ee,	// (0x0002cd82) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0003b183) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0003b183) main_camera4_pane_t

0x150f,	// (0x0002cda3) aid_touch_area_vid4_ParamLimits

0x150f,	// (0x0002cda3) aid_touch_area_vid4

0x1563,	// (0x0002cdf7) main_video4_pane_g5_ParamLimits

0x1563,	// (0x0002cdf7) main_video4_pane_g5

0x1588,	// (0x0002ce1c) vid4_progress_pane_ParamLimits

0x1588,	// (0x0002ce1c) vid4_progress_pane

0x68f9,	// (0x0003218d) main_cset_slider_pane_g18_ParamLimits

0x68f9,	// (0x0003218d) main_cset_slider_pane_g18

0x714c,	// (0x000329e0) cell_cam4_burst_pane_g2_ParamLimits

0x714c,	// (0x000329e0) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0003b2e2) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0003b2e2) cell_cam4_burst_pane_g

0xc2e2,	// (0x00037b76) bg_cl_pane_ParamLimits

0xc2e2,	// (0x00037b76) bg_cl_pane

0x7409,	// (0x00032c9d) cl_header_pane_ParamLimits

0x7409,	// (0x00032c9d) cl_header_pane

0x741d,	// (0x00032cb1) cl_listscroll_pane_ParamLimits

0x741d,	// (0x00032cb1) cl_listscroll_pane

0x742d,	// (0x00032cc1) bg_cl_pane_g1

0x7435,	// (0x00032cc9) bg_cl_pane_g2

0x743d,	// (0x00032cd1) bg_cl_pane_g3

0x7445,	// (0x00032cd9) bg_cl_pane_g4

0x744d,	// (0x00032ce1) bg_cl_pane_g5

0x7455,	// (0x00032ce9) bg_cl_pane_g6

0x745d,	// (0x00032cf1) bg_cl_pane_g7

0x7465,	// (0x00032cf9) bg_cl_pane_g8

0x746d,	// (0x00032d01) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0003b31d) bg_cl_pane_g

0x7475,	// (0x00032d09) aid_height_cl_leading_ParamLimits

0x7475,	// (0x00032d09) aid_height_cl_leading

0x7481,	// (0x00032d15) aid_height_cl_text_ParamLimits

0x7481,	// (0x00032d15) aid_height_cl_text

0xcaf1,	// (0x00038385) bg_cl_header_pane_ParamLimits

0xcaf1,	// (0x00038385) bg_cl_header_pane

0x74a0,	// (0x00032d34) cl_header_pane_g1_ParamLimits

0x74a0,	// (0x00032d34) cl_header_pane_g1

0x74b6,	// (0x00032d4a) cl_header_pane_t1_ParamLimits

0x74b6,	// (0x00032d4a) cl_header_pane_t1

0x74cf,	// (0x00032d63) cl_list_pane

0x67b5,	// (0x00032049) hc_scroll_pane_cp01

0xc6e3,	// (0x00037f77) bg_cl_header_pane_g1

0x638a,	// (0x00031c1e) bg_cl_header_pane_g2

0xc703,	// (0x00037f97) bg_cl_header_pane_g3

0x639a,	// (0x00031c2e) bg_cl_header_pane_g4

0x6392,	// (0x00031c26) bg_cl_header_pane_g5

0x6cb2,	// (0x00032546) bg_cl_header_pane_g6

0x63b2,	// (0x00031c46) bg_cl_header_pane_g7

0x63ba,	// (0x00031c4e) bg_cl_header_pane_g8

0x63aa,	// (0x00031c3e) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0003b330) bg_cl_header_pane_g

0x74d8,	// (0x00032d6c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74d8,	// (0x00032d6c) hc_cl_list_double_graphic_heading_pane

0x74e9,	// (0x00032d7d) hc_cl_list_single_graphic_pane_ParamLimits

0x74e9,	// (0x00032d7d) hc_cl_list_single_graphic_pane

0x74ff,	// (0x00032d93) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74ff,	// (0x00032d93) hc_cl_list_single_graphic_pane_g1

0x750b,	// (0x00032d9f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x750b,	// (0x00032d9f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0003b343) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0003b343) hc_cl_list_single_graphic_pane_g

0x751f,	// (0x00032db3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x751f,	// (0x00032db3) hc_cl_list_single_graphic_pane_t1

0x74ff,	// (0x00032d93) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74ff,	// (0x00032d93) hc_cl_list_double_graphic_heading_pane_g1

0x7534,	// (0x00032dc8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7534,	// (0x00032dc8) hc_cl_list_double_graphic_heading_pane_g2

0x7548,	// (0x00032ddc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7548,	// (0x00032ddc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0003b348) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0003b348) hc_cl_list_double_graphic_heading_pane_g

0x755c,	// (0x00032df0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x755c,	// (0x00032df0) hc_cl_list_double_graphic_heading_pane_t1

0x7571,	// (0x00032e05) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7571,	// (0x00032e05) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0003b34f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0003b34f) hc_cl_list_double_graphic_heading_pane_t

0x1a58,	// (0x0002d2ec) vid4_progress_pane_g1

0x1a6a,	// (0x0002d2fe) vid4_progress_pane_g2

0xc9c4,	// (0x00038258) vid4_progress_pane_g3

0xbf15,	// (0x000377a9) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0003b354) vid4_progress_pane_g

0xbf33,	// (0x000377c7) vid4_progress_pane_t1

0xbf48,	// (0x000377dc) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0003b35f) vid4_progress_pane_t

0xbf73,	// (0x00037807) wait_bar_pane_cp07

0xe49f,	// (0x00039d33) blid_firmament_pane_ParamLimits

0xe4e2,	// (0x00039d76) popup_blid_sat_info2_window_g1

0xe506,	// (0x00039d9a) popup_blid_sat_info2_window_t3

0xe514,	// (0x00039da8) popup_blid_sat_info2_window_t4

0xe522,	// (0x00039db6) popup_blid_sat_info2_window_t5

0xe530,	// (0x00039dc4) popup_blid_sat_info2_window_t6

0xe540,	// (0x00039dd4) popup_blid_sat_info2_window_t7

0xe54e,	// (0x00039de2) popup_blid_sat_info2_window_t8

0xe55c,	// (0x00039df0) popup_blid_sat_info2_window_t9

0xe56a,	// (0x00039dfe) popup_blid_sat_info2_window_t10

0xe62c,	// (0x00039ec0) aid_firma_cardinal_ParamLimits

0xe640,	// (0x00039ed4) blid_firmament_pane_t1_ParamLimits

0xe657,	// (0x00039eeb) blid_firmament_pane_t2_ParamLimits

0xe66e,	// (0x00039f02) blid_firmament_pane_t3_ParamLimits

0xe685,	// (0x00039f19) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0003af72) blid_firmament_pane_t_ParamLimits

0xe69c,	// (0x00039f30) blid_sat_info_pane_ParamLimits

0xb484,	// (0x00036d18) main_cam_set_pane_ParamLimits

0x5ccd,	// (0x00031561) aid_size_cell_colour_35_ParamLimits

0x5ced,	// (0x00031581) aid_size_cell_colour_112_ParamLimits

0x5d0d,	// (0x000315a1) aid_size_cell_effect_ParamLimits

0xe2a4,	// (0x00039b38) bg_tb_trans_pane_cp02_ParamLimits

0xc94b,	// (0x000381df) heading_imed_pane_ParamLimits

0x5d2d,	// (0x000315c1) listscroll_imed_pane_ParamLimits

0xd8ca,	// (0x0003915e) popup_call2_audio_first_window_g5_ParamLimits

0xd8ca,	// (0x0003915e) popup_call2_audio_first_window_g5

0x11d2,	// (0x0002ca66) aid_size_touch_image3_arrow_left_ParamLimits

0x11d2,	// (0x0002ca66) aid_size_touch_image3_arrow_left

0x11fe,	// (0x0002ca92) aid_size_touch_image3_arrow_right_ParamLimits

0x11fe,	// (0x0002ca92) aid_size_touch_image3_arrow_right

0xbf5e,	// (0x000377f2) vid4_progress_pane_t3

0x6040,	// (0x000318d4) main_hwr_training_symbol_option_pane_ParamLimits

0x6040,	// (0x000318d4) main_hwr_training_symbol_option_pane

0xeed4,	// (0x0003a768) popup_hwr_training_preview_window_ParamLimits

0xeed4,	// (0x0003a768) popup_hwr_training_preview_window

0x107d,	// (0x0002c911) hwr_training_navi_pane_g5_ParamLimits

0x107d,	// (0x0002c911) hwr_training_navi_pane_g5

0x6378,	// (0x00031c0c) popup_char_count_window

0xb484,	// (0x00036d18) bg_popup_sub_pane_cp20_ParamLimits

0x19c3,	// (0x0002d257) list_vitu2_match_list_pane_ParamLimits

0x19d2,	// (0x0002d266) vitu2_page_scroll_pane_ParamLimits

0x19d2,	// (0x0002d266) vitu2_page_scroll_pane

0x75e0,	// (0x00032e74) list_single_hwr_training_symbol_option_pane_ParamLimits

0x75e0,	// (0x00032e74) list_single_hwr_training_symbol_option_pane

0x75f3,	// (0x00032e87) list_single_hwr_training_symbol_option_pane_g1

0x75fb,	// (0x00032e8f) list_single_hwr_training_symbol_option_pane_t1

0x7609,	// (0x00032e9d) bg_button_pane_cp023

0x7612,	// (0x00032ea6) bg_button_pane_cp024

0x7645,	// (0x00032ed9) vitu2_page_scroll_pane_g1

0x764d,	// (0x00032ee1) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0003b366) vitu2_page_scroll_pane_g

0x7655,	// (0x00032ee9) vitu2_page_scroll_pane_t1

0x7664,	// (0x00032ef8) popup_char_count_window_g1

0x766d,	// (0x00032f01) popup_char_count_window_g2

0x7676,	// (0x00032f0a) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0003b36b) popup_char_count_window_g

0x767f,	// (0x00032f13) popup_char_count_window_t1

0xb492,	// (0x00036d26) main_vded2_pane

0xebd3,	// (0x0003a467) aid_size_cell_imed_line

0xebdd,	// (0x0003a471) grid_imed_line_width_pane

0xbe59,	// (0x000376ed) vid4_indicators_pane_g4

0x768d,	// (0x00032f21) cell_imed_line_width_pane_ParamLimits

0x768d,	// (0x00032f21) cell_imed_line_width_pane

0x76a1,	// (0x00032f35) cell_imed_line_width_pane_g1

0x4fd1,	// (0x00030865) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0003b372) cell_imed_line_width_pane_g

0x76aa,	// (0x00032f3e) main_vded2_pane_g1_ParamLimits

0x76aa,	// (0x00032f3e) main_vded2_pane_g1

0x76c0,	// (0x00032f54) main_vded2_pane_g2_ParamLimits

0x76c0,	// (0x00032f54) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0003b377) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0003b377) main_vded2_pane_g

0x76d2,	// (0x00032f66) vded2_slider_pane_ParamLimits

0x76d2,	// (0x00032f66) vded2_slider_pane

0x76e2,	// (0x00032f76) aid_size_touch_vded2_end

0x76ec,	// (0x00032f80) aid_size_touch_vded2_playhead

0x76f6,	// (0x00032f8a) aid_size_touch_vded2_start

0x76fe,	// (0x00032f92) vded2_slider_bg_pane

0x7707,	// (0x00032f9b) vded2_slider_pane_g1

0x7710,	// (0x00032fa4) vded2_slider_pane_g2

0x7718,	// (0x00032fac) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0003b37c) vded2_slider_pane_g

0x7723,	// (0x00032fb7) vded2_slider_bg_pane_g1

0x772c,	// (0x00032fc0) vded2_slider_bg_pane_g2

0x7735,	// (0x00032fc9) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0003b383) vded2_slider_bg_pane_g

0x4219,	// (0x0002faad) aid_postcard_touch_down_pane_ParamLimits

0x4219,	// (0x0002faad) aid_postcard_touch_down_pane

0x422f,	// (0x0002fac3) aid_postcard_touch_up_pane_ParamLimits

0x422f,	// (0x0002fac3) aid_postcard_touch_up_pane

0xb492,	// (0x00036d26) main_blid2_pane

0xba05,	// (0x00037299) popup_blid2_search_window

0xb414,	// (0x00036ca8) blid2_gps_pane

0xb414,	// (0x00036ca8) blid2_navig_pane

0xb414,	// (0x00036ca8) blid2_search_pane

0xb414,	// (0x00036ca8) blid2_tripm_pane

0x773e,	// (0x00032fd2) blid2_search_pane_g1_ParamLimits

0x773e,	// (0x00032fd2) blid2_search_pane_g1

0x7758,	// (0x00032fec) blid2_search_pane_t1_ParamLimits

0x7758,	// (0x00032fec) blid2_search_pane_t1

0x776a,	// (0x00032ffe) aid_size_cell_blid2_gps_ParamLimits

0x776a,	// (0x00032ffe) aid_size_cell_blid2_gps

0x7782,	// (0x00033016) blid2_gps_pane_g1_ParamLimits

0x7782,	// (0x00033016) blid2_gps_pane_g1

0x7796,	// (0x0003302a) grid_blid2_satellite_pane_ParamLimits

0x7796,	// (0x0003302a) grid_blid2_satellite_pane

0x77b0,	// (0x00033044) blid2_navig_pane_g1_ParamLimits

0x77b0,	// (0x00033044) blid2_navig_pane_g1

0x77bc,	// (0x00033050) blid2_navig_pane_t1_ParamLimits

0x77bc,	// (0x00033050) blid2_navig_pane_t1

0x77d7,	// (0x0003306b) blid2_navig_pane_t2_ParamLimits

0x77d7,	// (0x0003306b) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0003b38a) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0003b38a) blid2_navig_pane_t

0x77f2,	// (0x00033086) blid2_navig_ring_pane_ParamLimits

0x77f2,	// (0x00033086) blid2_navig_ring_pane

0x780b,	// (0x0003309f) blid2_speed_pane_ParamLimits

0x780b,	// (0x0003309f) blid2_speed_pane

0x7817,	// (0x000330ab) blid2_tripm_pane_g1_ParamLimits

0x7817,	// (0x000330ab) blid2_tripm_pane_g1

0x7830,	// (0x000330c4) blid2_tripm_pane_g2_ParamLimits

0x7830,	// (0x000330c4) blid2_tripm_pane_g2

0x7844,	// (0x000330d8) blid2_tripm_pane_g3_ParamLimits

0x7844,	// (0x000330d8) blid2_tripm_pane_g3

0x7858,	// (0x000330ec) blid2_tripm_pane_g4_ParamLimits

0x7858,	// (0x000330ec) blid2_tripm_pane_g4

0x786c,	// (0x00033100) blid2_tripm_pane_g5_ParamLimits

0x786c,	// (0x00033100) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0003b38f) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0003b38f) blid2_tripm_pane_g

0x7892,	// (0x00033126) blid2_tripm_pane_t1_ParamLimits

0x7892,	// (0x00033126) blid2_tripm_pane_t1

0x78ad,	// (0x00033141) blid2_tripm_pane_t2_ParamLimits

0x78ad,	// (0x00033141) blid2_tripm_pane_t2

0x78c6,	// (0x0003315a) blid2_tripm_pane_t3_ParamLimits

0x78c6,	// (0x0003315a) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0003b39c) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0003b39c) blid2_tripm_pane_t

0x790d,	// (0x000331a1) cell_blid2_satellite_pane_ParamLimits

0x790d,	// (0x000331a1) cell_blid2_satellite_pane

0x792b,	// (0x000331bf) cell_blid2_satellite_pane_g1

0x7934,	// (0x000331c8) cell_blid2_satellite_pane_t1

0xe6ac,	// (0x00039f40) blid2_speed_pane_g1

0x7942,	// (0x000331d6) blid2_speed_pane_t1

0x7950,	// (0x000331e4) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0003b3a5) blid2_speed_pane_t

0xe6ac,	// (0x00039f40) blid2_navig_ring_pane_g1

0x795e,	// (0x000331f2) blid2_navig_ring_pane_g2

0x7966,	// (0x000331fa) blid2_navig_ring_pane_g3

0x796e,	// (0x00033202) blid2_navig_ring_pane_g4

0x7976,	// (0x0003320a) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0003b3aa) blid2_navig_ring_pane_g

0xb414,	// (0x00036ca8) bg_popup_window_pane_cp011

0x797e,	// (0x00033212) popup_blid2_search_window_g1

0x7986,	// (0x0003321a) popup_blid2_search_window_t1

0x7994,	// (0x00033228) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0003b3b5) popup_blid2_search_window_t

0xc5f2,	// (0x00037e86) main_browser_pane_g1

0xc2e2,	// (0x00037b76) main_browser_pane_ParamLimits

0xb484,	// (0x00036d18) bg_button_pane_cp011_ParamLimits

0x1939,	// (0x0002d1cd) cell_vitu2_function_pane_g1_ParamLimits

0xe2a4,	// (0x00039b38) bg_popup_sub_pane_cp22_ParamLimits

0x6e0f,	// (0x000326a3) input_focus_pane_cp08_ParamLimits

0x6e26,	// (0x000326ba) popup_vitu2_query_button_pane_ParamLimits

0x6e26,	// (0x000326ba) popup_vitu2_query_button_pane

0x6e37,	// (0x000326cb) popup_vitu2_query_input_button_pane

0x6e41,	// (0x000326d5) popup_vitu2_query_window_g1_ParamLimits

0x6e4d,	// (0x000326e1) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0003b2b6) popup_vitu2_query_window_g_ParamLimits

0xb414,	// (0x00036ca8) bg_button_pane_cp026

0x79a2,	// (0x00033236) popup_vitu2_query_input_button_pane_g1

0xb414,	// (0x00036ca8) bg_button_pane_cp025

0x79aa,	// (0x0003323e) popup_vitu2_query_button_pane_t1

0x512c,	// (0x000309c0) main_mp3_pane_t6

0x513a,	// (0x000309ce) popup_slider_window_cp01

0xbdbd,	// (0x00037651) cam4_battery_pane

0xbe16,	// (0x000376aa) cam4_battery_pane_cp02

0xbf0d,	// (0x000377a1) cam4_battery_pane_cp01

0xbf0d,	// (0x000377a1) cam4_battery_pane_cp03

0x60c8,	// (0x0003195c) cam4_battery_pane_g1

0xe6ac,	// (0x00039f40) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0003b3ba) cam4_battery_pane_g

0xe578,	// (0x00039e0c) popup_blid_sat_info2_window_t11

0x3c00,	// (0x0002f494) aid_size_touch_mv_arrow_left_ParamLimits

0x3c29,	// (0x0002f4bd) aid_size_touch_mv_arrow_right_ParamLimits

0xcd86,	// (0x0003861a) navi_pane_g1_ParamLimits

0x3c68,	// (0x0002f4fc) navi_pane_g2_ParamLimits

0x3c96,	// (0x0002f52a) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0003ac84) navi_pane_g_ParamLimits

0x3cee,	// (0x0002f582) navi_pane_mv_t1_ParamLimits

0x5d39,	// (0x000315cd) grid_imed_effect_pane_ParamLimits

0x2834,	// (0x0002e0c8) aid_placing_vt_slider_lsc

0xc541,	// (0x00037dd5) aid_placing_vt_slider_prt

0xcaf1,	// (0x00038385) bg_tb_trans_pane_cp01_ParamLimits

0xe838,	// (0x0003a0cc) popup_image_details_window_g1_ParamLimits

0xe84b,	// (0x0003a0df) popup_image_details_window_g2_ParamLimits

0xe860,	// (0x0003a0f4) popup_image_details_window_g3_ParamLimits

0xe860,	// (0x0003a0f4) popup_image_details_window_g3

0xf723,	// (0x0003afb7) popup_image_details_window_g_ParamLimits

0xe874,	// (0x0003a108) popup_image_details_window_t1_ParamLimits

0xe886,	// (0x0003a11a) popup_image_details_window_t2_ParamLimits

0xe89f,	// (0x0003a133) popup_image_details_window_t3_ParamLimits

0xe8b3,	// (0x0003a147) popup_image_details_window_t4_ParamLimits

0xe8ce,	// (0x0003a162) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0003afbe) popup_image_details_window_t_ParamLimits

0x748d,	// (0x00032d21) cl_header_name_pane_ParamLimits

0x748d,	// (0x00032d21) cl_header_name_pane

0x79b8,	// (0x0003324c) cl_header_name_pane_t1_ParamLimits

0x79b8,	// (0x0003324c) cl_header_name_pane_t1

0x79d9,	// (0x0003326d) cl_header_name_pane_t2_ParamLimits

0x79d9,	// (0x0003326d) cl_header_name_pane_t2

0x7a1b,	// (0x000332af) cl_header_name_pane_t3_ParamLimits

0x7a1b,	// (0x000332af) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0003b3bf) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0003b3bf) cl_header_name_pane_t

0x3cbf,	// (0x0002f553) navi_pane_mv_g2_ParamLimits

0x6306,	// (0x00031b9a) field_vitu2_entry_pane_g1_ParamLimits

0x6312,	// (0x00031ba6) field_vitu2_entry_pane_g2_ParamLimits

0x631e,	// (0x00031bb2) field_vitu2_entry_pane_g3_ParamLimits

0x631e,	// (0x00031bb2) field_vitu2_entry_pane_g3

0xf921,	// (0x0003b1b5) field_vitu2_entry_pane_g_ParamLimits

0x17d9,	// (0x0002d06d) cell_vitu2_itu_pane_g1_ParamLimits

0x17e9,	// (0x0002d07d) cell_vitu2_itu_pane_g2_ParamLimits

0x17e9,	// (0x0002d07d) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0003b1c1) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0003b1c1) cell_vitu2_itu_pane_g

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp05_ParamLimits

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp05

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp03

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp04

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp10_ParamLimits

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp10

0x73eb,	// (0x00032c7f) bg_vkb2_func_pane_cp08

0x73d1,	// (0x00032c65) bg_vkb2_func_pane_cp06

0x73df,	// (0x00032c73) bg_vkb2_func_pane_cp07

0x761b,	// (0x00032eaf) bg_vkb2_func_pane_cp11_ParamLimits

0x761b,	// (0x00032eaf) bg_vkb2_func_pane_cp11

0x7630,	// (0x00032ec4) bg_vkb2_func_pane_cp12_ParamLimits

0x7630,	// (0x00032ec4) bg_vkb2_func_pane_cp12

0xb414,	// (0x00036ca8) bg_vkb2_func_pane_cp09

0x638a,	// (0x00031c1e) bg_vkb2_func_pane_g1

0xc703,	// (0x00037f97) bg_vkb2_func_pane_g2

0x6392,	// (0x00031c26) bg_vkb2_func_pane_g3

0x639a,	// (0x00031c2e) bg_vkb2_func_pane_g4

0x6cb2,	// (0x00032546) bg_vkb2_func_pane_g5

0x63b2,	// (0x00031c46) bg_vkb2_func_pane_g6

0x63ba,	// (0x00031c4e) bg_vkb2_func_pane_g7

0x63aa,	// (0x00031c3e) bg_vkb2_func_pane_g8

0xc6e3,	// (0x00037f77) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0003b3c6) bg_vkb2_func_pane_g

0x7880,	// (0x00033114) blid2_tripm_pane_g6_ParamLimits

0x7880,	// (0x00033114) blid2_tripm_pane_g6

0xef8c,	// (0x0003a820) mp4_progress_pane_g1

0x78f9,	// (0x0003318d) blid2_tripm_values_pane_ParamLimits

0x78f9,	// (0x0003318d) blid2_tripm_values_pane

0x7a4c,	// (0x000332e0) blid2_tripm_values_pane_t1

0x7a5a,	// (0x000332ee) blid2_tripm_values_pane_t2

0x7a68,	// (0x000332fc) blid2_tripm_values_pane_t3

0x7a76,	// (0x0003330a) blid2_tripm_values_pane_t4

0x7a84,	// (0x00033318) blid2_tripm_values_pane_t5

0x7a92,	// (0x00033326) blid2_tripm_values_pane_t6

0x7aa0,	// (0x00033334) blid2_tripm_values_pane_t7

0x7aae,	// (0x00033342) blid2_tripm_values_pane_t8

0x7abc,	// (0x00033350) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0003b3d9) blid2_tripm_values_pane_t

0x2876,	// (0x0002e10a) call_video_pane_t1_ParamLimits

0x2894,	// (0x0002e128) call_video_pane_t2_ParamLimits

0xf279,	// (0x0003ab0d) call_video_pane_t_ParamLimits

0x41cf,	// (0x0002fa63) msg_header_pane_g1_ParamLimits

0xcfae,	// (0x00038842) msg_header_pane_g2_ParamLimits

0xcfae,	// (0x00038842) msg_header_pane_g2

0x0001,

0xf493,	// (0x0003ad27) msg_header_pane_g_ParamLimits

0xf493,	// (0x0003ad27) msg_header_pane_g

0xc2e2,	// (0x00037b76) main_clock2_pane_ParamLimits

0x5ab0,	// (0x00031344) grid_clock2_toolbar_pane_ParamLimits

0x5ab0,	// (0x00031344) grid_clock2_toolbar_pane

0x5ab0,	// (0x00031344) listscroll_clock2_pane_ParamLimits

0x5ab0,	// (0x00031344) listscroll_clock2_pane

0x5ba5,	// (0x00031439) main_clock2_pane_t3_ParamLimits

0x5ba5,	// (0x00031439) main_clock2_pane_t3

0x5bc9,	// (0x0003145d) main_clock2_pane_t4_ParamLimits

0x5bc9,	// (0x0003145d) main_clock2_pane_t4

0x7aca,	// (0x0003335e) cell_clock2_toolbar_pane

0x7ad2,	// (0x00033366) cell_clock2_toolbar_pane_cp01

0x7ad2,	// (0x00033366) cell_clock2_toolbar_pane_cp02

0x7ada,	// (0x0003336e) cell_clock2_toolbar_pane_cp03

0x7ae2,	// (0x00033376) list_clock2_pane

0xccdd,	// (0x00038571) scroll_pane_cp10

0x7aea,	// (0x0003337e) list_single_clock2_pane_ParamLimits

0x7aea,	// (0x0003337e) list_single_clock2_pane

0xce26,	// (0x000386ba) list_highlight_pane_cp08

0x7af7,	// (0x0003338b) list_single_clock2_pane_t1

0x7b05,	// (0x00033399) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0003b3ec) list_single_clock2_pane_t

0xb414,	// (0x00036ca8) bg_button_pane_cp10

0x7b13,	// (0x000333a7) cell_clock2_toolbar_pane_g1

0x083a,	// (0x0002c0ce) aid_main_viewer_pane_g1_ParamLimits

0x083a,	// (0x0002c0ce) aid_main_viewer_pane_g1

0x0848,	// (0x0002c0dc) aid_main_viewer_pane_g2_ParamLimits

0x0848,	// (0x0002c0dc) aid_main_viewer_pane_g2

0x41dd,	// (0x0002fa71) aid_main_viewer_pane_g3_ParamLimits

0x41dd,	// (0x0002fa71) aid_main_viewer_pane_g3

0x41ec,	// (0x0002fa80) aid_main_viewer_pane_g4_ParamLimits

0x41ec,	// (0x0002fa80) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0003ad38) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0003ad38) aid_main_viewer_pane_g

0x087c,	// (0x0002c110) main_calc_pane_ParamLimits

0x08a2,	// (0x0002c136) main_dialer2_pane_ParamLimits

0xb492,	// (0x00036d26) main_cam6_pane

0xb492,	// (0x00036d26) main_vid6_pane

0x5abc,	// (0x00031350) listscroll_gen_pane_cp06_ParamLimits

0x5abc,	// (0x00031350) listscroll_gen_pane_cp06

0x5bec,	// (0x00031480) main_clock2_pane_t5_ParamLimits

0x5bec,	// (0x00031480) main_clock2_pane_t5

0x5c46,	// (0x000314da) aid_call2_pane_cp10_ParamLimits

0x5c58,	// (0x000314ec) aid_call_pane_cp10_ParamLimits

0xcd5b,	// (0x000385ef) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd5b,	// (0x000385ef) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c6a,	// (0x000314fe) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c6a,	// (0x000314fe) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd5b,	// (0x000385ef) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0003b06e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c7c,	// (0x00031510) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6122,	// (0x000319b6) cell_dialer2_keypad_pane_g2_ParamLimits

0x6122,	// (0x000319b6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0003b154) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0003b154) cell_dialer2_keypad_pane_g

0x613e,	// (0x000319d2) cell_dialer2_keypad_pane_t1

0x678f,	// (0x00032023) main_cset_text2_pane_ParamLimits

0x678f,	// (0x00032023) main_cset_text2_pane

0x72c8,	// (0x00032b5c) area_vitu2_query_pane_g1_ParamLimits

0x72d4,	// (0x00032b68) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0003b309) area_vitu2_query_pane_g_ParamLimits

0x73ad,	// (0x00032c41) area_vitu2_query_pane_t7_ParamLimits

0x73ad,	// (0x00032c41) area_vitu2_query_pane_t7

0x73d1,	// (0x00032c65) bg_button_pane_cp018_ParamLimits

0x73df,	// (0x00032c73) bg_button_pane_cp021_ParamLimits

0x73eb,	// (0x00032c7f) bg_button_pane_cp022_ParamLimits

0x73eb,	// (0x00032c7f) bg_vkb2_func_pane_cp08_ParamLimits

0x73d1,	// (0x00032c65) bg_vkb2_func_pane_cp06_ParamLimits

0x73df,	// (0x00032c73) bg_vkb2_func_pane_cp07_ParamLimits

0x73fa,	// (0x00032c8e) input_focus_pane_cp09_ParamLimits

0xbf85,	// (0x00037819) cam6_autofocus_pane_ParamLimits

0xbf85,	// (0x00037819) cam6_autofocus_pane

0x1a7c,	// (0x0002d310) cam6_image_uncrop_pane_ParamLimits

0x1a7c,	// (0x0002d310) cam6_image_uncrop_pane

0x1a8b,	// (0x0002d31f) cam6_indi_pane_ParamLimits

0x1a8b,	// (0x0002d31f) cam6_indi_pane

0x1aa1,	// (0x0002d335) cam6_mode_pane_ParamLimits

0x1aa1,	// (0x0002d335) cam6_mode_pane

0x1ab3,	// (0x0002d347) cam6_timer_pane_ParamLimits

0x1ab3,	// (0x0002d347) cam6_timer_pane

0x1abf,	// (0x0002d353) cam6_zoom_pane_ParamLimits

0x1abf,	// (0x0002d353) cam6_zoom_pane

0x7b1b,	// (0x000333af) cam6_mode_pane_g1_ParamLimits

0x7b1b,	// (0x000333af) cam6_mode_pane_g1

0x7b2b,	// (0x000333bf) cam6_mode_pane_g2_ParamLimits

0x7b2b,	// (0x000333bf) cam6_mode_pane_g2

0x7b3b,	// (0x000333cf) cam6_mode_pane_g3_ParamLimits

0x7b3b,	// (0x000333cf) cam6_mode_pane_g3

0x7b4b,	// (0x000333df) cam6_mode_pane_g4_ParamLimits

0x7b4b,	// (0x000333df) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0003b3f1) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0003b3f1) cam6_mode_pane_g

0x7b5b,	// (0x000333ef) bg_tb_trans_pane_cp08_ParamLimits

0x7b5b,	// (0x000333ef) bg_tb_trans_pane_cp08

0x7b69,	// (0x000333fd) cam6_battery_pane_ParamLimits

0x7b69,	// (0x000333fd) cam6_battery_pane

0x7b7f,	// (0x00033413) cam6_indi_pane_g1_ParamLimits

0x7b7f,	// (0x00033413) cam6_indi_pane_g1

0x7b91,	// (0x00033425) cam6_indi_pane_g2_ParamLimits

0x7b91,	// (0x00033425) cam6_indi_pane_g2

0x7ba3,	// (0x00033437) cam6_indi_pane_g3_ParamLimits

0x7ba3,	// (0x00033437) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0003b3fa) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0003b3fa) cam6_indi_pane_g

0x7bb5,	// (0x00033449) cam6_indi_pane_t1_ParamLimits

0x7bb5,	// (0x00033449) cam6_indi_pane_t1

0x7bdb,	// (0x0003346f) cam6_autofocus_pane_g1

0x7be3,	// (0x00033477) cam6_autofocus_pane_g2

0x7beb,	// (0x0003347f) cam6_autofocus_pane_g3

0x7bf3,	// (0x00033487) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0003b401) cam6_autofocus_pane_g

0x7bfb,	// (0x0003348f) cam6_timer_pane_g1

0x7c03,	// (0x00033497) cam6_timer_pane_t1

0x7c11,	// (0x000334a5) cam6_zoom_cont_pane

0x7c19,	// (0x000334ad) cam6_zoom_pane_g1

0x7c21,	// (0x000334b5) cam6_zoom_pane_g2

0x7c29,	// (0x000334bd) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0003b40a) cam6_zoom_pane_g

0xe6ac,	// (0x00039f40) cam6_battery_pane_g1

0xe6ac,	// (0x00039f40) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0003af7b) cam6_battery_pane_g

0x7c31,	// (0x000334c5) cam6_zoom_cont_pane_g1

0x7c3a,	// (0x000334ce) cam6_zoom_cont_pane_g2

0x7c43,	// (0x000334d7) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0003b411) cam6_zoom_cont_pane_g

0x7c60,	// (0x000334f4) cam6_mode_pane_cp_ParamLimits

0x7c60,	// (0x000334f4) cam6_mode_pane_cp

0x7c72,	// (0x00033506) cam6_zoom_pane_cp_ParamLimits

0x7c72,	// (0x00033506) cam6_zoom_pane_cp

0x7c7e,	// (0x00033512) vid6_image_uncrop_cif_pane_ParamLimits

0x7c7e,	// (0x00033512) vid6_image_uncrop_cif_pane

0x7c8e,	// (0x00033522) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c8e,	// (0x00033522) vid6_image_uncrop_nhd_pane

0x7cad,	// (0x00033541) vid6_image_uncrop_vga_pane_ParamLimits

0x7cad,	// (0x00033541) vid6_image_uncrop_vga_pane

0x7cbc,	// (0x00033550) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cbc,	// (0x00033550) vid6_image_uncrop_wvga_pane

0x7ccb,	// (0x0003355f) vid6_indi_pane_ParamLimits

0x7ccb,	// (0x0003355f) vid6_indi_pane

0x7b5b,	// (0x000333ef) bg_tb_trans_pane_cp09_ParamLimits

0x7b5b,	// (0x000333ef) bg_tb_trans_pane_cp09

0x7ce3,	// (0x00033577) cam6_battery_pane_cp_ParamLimits

0x7ce3,	// (0x00033577) cam6_battery_pane_cp

0x7cef,	// (0x00033583) vid6_indi_pane_g1_ParamLimits

0x7cef,	// (0x00033583) vid6_indi_pane_g1

0x7d01,	// (0x00033595) vid6_indi_pane_g2_ParamLimits

0x7d01,	// (0x00033595) vid6_indi_pane_g2

0x7d13,	// (0x000335a7) vid6_indi_pane_g3_ParamLimits

0x7d13,	// (0x000335a7) vid6_indi_pane_g3

0x7d28,	// (0x000335bc) vid6_indi_pane_g4_ParamLimits

0x7d28,	// (0x000335bc) vid6_indi_pane_g4

0x7d3d,	// (0x000335d1) vid6_indi_pane_g5_ParamLimits

0x7d3d,	// (0x000335d1) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0003b418) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0003b418) vid6_indi_pane_g

0x7d57,	// (0x000335eb) vid6_indi_pane_t1_ParamLimits

0x7d57,	// (0x000335eb) vid6_indi_pane_t1

0x7d6d,	// (0x00033601) vid6_indi_pane_t2_ParamLimits

0x7d6d,	// (0x00033601) vid6_indi_pane_t2

0x7d95,	// (0x00033629) vid6_indi_pane_t3_ParamLimits

0x7d95,	// (0x00033629) vid6_indi_pane_t3

0x7dbd,	// (0x00033651) vid6_indi_pane_t4_ParamLimits

0x7dbd,	// (0x00033651) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0003b423) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0003b423) vid6_indi_pane_t

0x7de1,	// (0x00033675) wait_bar_pane_cp08

0x7df0,	// (0x00033684) main_cset_text2_pane_t1_ParamLimits

0x7df0,	// (0x00033684) main_cset_text2_pane_t1

0x7c4b,	// (0x000334df) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c4b,	// (0x000334df) listscroll_gen_pane_cp06_t1

0xb492,	// (0x00036d26) main_cam6_set_pane

0xbdaf,	// (0x00037643) bg_tb_trans_pane_cp06_ParamLimits

0xbdc5,	// (0x00037659) cam4_indicators_pane_g1_ParamLimits

0xbdd6,	// (0x0003766a) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0003b191) cam4_indicators_pane_g_ParamLimits

0xbdf4,	// (0x00037688) cam4_indicators_pane_t1_ParamLimits

0xb484,	// (0x00036d18) bg_tb_trans_pane_cp07_ParamLimits

0xbe20,	// (0x000376b4) vid4_indicators_pane_g1_ParamLimits

0xbe34,	// (0x000376c8) vid4_indicators_pane_g2_ParamLimits

0xbe48,	// (0x000376dc) vid4_indicators_pane_g3_ParamLimits

0xbe59,	// (0x000376ed) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0003b1a3) vid4_indicators_pane_g_ParamLimits

0xbe77,	// (0x0003770b) vid4_indicators_pane_t1_ParamLimits

0x1a58,	// (0x0002d2ec) vid4_progress_pane_g1_ParamLimits

0x1a6a,	// (0x0002d2fe) vid4_progress_pane_g2_ParamLimits

0xc9c4,	// (0x00038258) vid4_progress_pane_g3_ParamLimits

0xbf15,	// (0x000377a9) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0003b354) vid4_progress_pane_g_ParamLimits

0xbf33,	// (0x000377c7) vid4_progress_pane_t1_ParamLimits

0xbf48,	// (0x000377dc) vid4_progress_pane_t2_ParamLimits

0xbf5e,	// (0x000377f2) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0003b35f) vid4_progress_pane_t_ParamLimits

0xbf73,	// (0x00037807) wait_bar_pane_cp07_ParamLimits

0x7e0d,	// (0x000336a1) main_cam6_set_pane_g2_ParamLimits

0x7e0d,	// (0x000336a1) main_cam6_set_pane_g2

0x7e31,	// (0x000336c5) main_cset6_listscroll_pane_ParamLimits

0x7e31,	// (0x000336c5) main_cset6_listscroll_pane

0x7e51,	// (0x000336e5) main_cset6_slider_pane_ParamLimits

0x7e51,	// (0x000336e5) main_cset6_slider_pane

0x7e67,	// (0x000336fb) main_cset6_text2_pane_ParamLimits

0x7e67,	// (0x000336fb) main_cset6_text2_pane

0x7e75,	// (0x00033709) main_cset6_text_pane

0x7e7d,	// (0x00033711) main_cset_list_pane_copy1_ParamLimits

0x7e7d,	// (0x00033711) main_cset_list_pane_copy1

0x7e8d,	// (0x00033721) scroll_pane_cp028_copy1

0x7e96,	// (0x0003372a) cset_list_set_pane_copy1

0x7ea7,	// (0x0003373b) aid_position_infowindow_above_copy1

0x7eaf,	// (0x00033743) aid_position_infowindow_below_copy1

0x7eb7,	// (0x0003374b) cset_list_set_pane_g1_copy1

0x7ebf,	// (0x00033753) cset_list_set_pane_g3_copy1_ParamLimits

0x7ebf,	// (0x00033753) cset_list_set_pane_g3_copy1

0x7ece,	// (0x00033762) cset_list_set_pane_t1_copy1_ParamLimits

0x7ece,	// (0x00033762) cset_list_set_pane_t1_copy1

0xcaf1,	// (0x00038385) list_highlight_pane_cp021_copy1_ParamLimits

0xcaf1,	// (0x00038385) list_highlight_pane_cp021_copy1

0x7ee3,	// (0x00033777) cset6_slider_pane_ParamLimits

0x7ee3,	// (0x00033777) cset6_slider_pane

0x7f0f,	// (0x000337a3) main_cset6_slider_pane_g1_ParamLimits

0x7f0f,	// (0x000337a3) main_cset6_slider_pane_g1

0x7f37,	// (0x000337cb) main_cset6_slider_pane_g2_ParamLimits

0x7f37,	// (0x000337cb) main_cset6_slider_pane_g2

0x7f5f,	// (0x000337f3) main_cset6_slider_pane_g3_ParamLimits

0x7f5f,	// (0x000337f3) main_cset6_slider_pane_g3

0x7f6b,	// (0x000337ff) main_cset6_slider_pane_g4_ParamLimits

0x7f6b,	// (0x000337ff) main_cset6_slider_pane_g4

0x7f77,	// (0x0003380b) main_cset6_slider_pane_g5_ParamLimits

0x7f77,	// (0x0003380b) main_cset6_slider_pane_g5

0x6869,	// (0x000320fd) main_cset6_slider_pane_g7_ParamLimits

0x6869,	// (0x000320fd) main_cset6_slider_pane_g7

0x6875,	// (0x00032109) main_cset6_slider_pane_g8_ParamLimits

0x6875,	// (0x00032109) main_cset6_slider_pane_g8

0x6881,	// (0x00032115) main_cset6_slider_pane_g9_ParamLimits

0x6881,	// (0x00032115) main_cset6_slider_pane_g9

0x688d,	// (0x00032121) main_cset6_slider_pane_g10_ParamLimits

0x688d,	// (0x00032121) main_cset6_slider_pane_g10

0x6899,	// (0x0003212d) main_cset6_slider_pane_g11_ParamLimits

0x6899,	// (0x0003212d) main_cset6_slider_pane_g11

0x68a5,	// (0x00032139) main_cset6_slider_pane_g12_ParamLimits

0x68a5,	// (0x00032139) main_cset6_slider_pane_g12

0x68b1,	// (0x00032145) main_cset6_slider_pane_g13_ParamLimits

0x68b1,	// (0x00032145) main_cset6_slider_pane_g13

0x68bd,	// (0x00032151) main_cset6_slider_pane_g14_ParamLimits

0x68bd,	// (0x00032151) main_cset6_slider_pane_g14

0x7f83,	// (0x00033817) main_cset6_slider_pane_g15_ParamLimits

0x7f83,	// (0x00033817) main_cset6_slider_pane_g15

0x68e1,	// (0x00032175) main_cset6_slider_pane_g16_ParamLimits

0x68e1,	// (0x00032175) main_cset6_slider_pane_g16

0x68ed,	// (0x00032181) main_cset6_slider_pane_g17_ParamLimits

0x68ed,	// (0x00032181) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0003b42c) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0003b42c) main_cset6_slider_pane_g

0x7fb3,	// (0x00033847) main_cset6_slider_pane_t1_ParamLimits

0x7fb3,	// (0x00033847) main_cset6_slider_pane_t1

0x7ff4,	// (0x00033888) main_cset6_slider_pane_t2_ParamLimits

0x7ff4,	// (0x00033888) main_cset6_slider_pane_t2

0x801f,	// (0x000338b3) main_cset6_slider_pane_t3_ParamLimits

0x801f,	// (0x000338b3) main_cset6_slider_pane_t3

0x804a,	// (0x000338de) main_cset6_slider_pane_t4_ParamLimits

0x804a,	// (0x000338de) main_cset6_slider_pane_t4

0x8075,	// (0x00033909) main_cset6_slider_pane_t5_ParamLimits

0x8075,	// (0x00033909) main_cset6_slider_pane_t5

0x80a0,	// (0x00033934) main_cset6_slider_pane_t7_ParamLimits

0x80a0,	// (0x00033934) main_cset6_slider_pane_t7

0x80d6,	// (0x0003396a) main_cset6_slider_pane_t8_ParamLimits

0x80d6,	// (0x0003396a) main_cset6_slider_pane_t8

0x80fa,	// (0x0003398e) main_cset6_slider_pane_t9_ParamLimits

0x80fa,	// (0x0003398e) main_cset6_slider_pane_t9

0x811e,	// (0x000339b2) main_cset6_slider_pane_t10_ParamLimits

0x811e,	// (0x000339b2) main_cset6_slider_pane_t10

0x8142,	// (0x000339d6) main_cset6_slider_pane_t11_ParamLimits

0x8142,	// (0x000339d6) main_cset6_slider_pane_t11

0x8166,	// (0x000339fa) main_cset6_slider_pane_t14_ParamLimits

0x8166,	// (0x000339fa) main_cset6_slider_pane_t14

0x819f,	// (0x00033a33) main_cset6_slider_pane_t15_ParamLimits

0x819f,	// (0x00033a33) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0003b451) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0003b451) main_cset6_slider_pane_t

0x81d8,	// (0x00033a6c) cset_slider_pane_g1_copy1

0x81e1,	// (0x00033a75) cset_slider_pane_g2_copy1

0x81ea,	// (0x00033a7e) cset_slider_pane_g3_copy1

0xb414,	// (0x00036ca8) bg_popup_sub_pane_cp011_copy1

0x82c3,	// (0x00033b57) main_cset_text_pane_g1_copy1

0x6f7b,	// (0x0003280f) main_cset_text_pane_t1_copy1

0x6f89,	// (0x0003281d) main_cset_text_pane_t2_copy1

0x6f97,	// (0x0003282b) main_cset_text_pane_t3_copy1

0x6fa5,	// (0x00032839) main_cset_text_pane_t4_copy1

0x6fb3,	// (0x00032847) main_cset_text_pane_t5_copy1

0x82cb,	// (0x00033b5f) main_cset_text_pane_t6_copy1

0x6fcf,	// (0x00032863) main_cset_text_pane_t7_copy1

0x7df0,	// (0x00033684) main_cset_text2_pane_t1_copy1

0xb484,	// (0x00036d18) main_ncimui_pane

0x0aec,	// (0x0002c380) popup_query_ncimui_window_ParamLimits

0x0aec,	// (0x0002c380) popup_query_ncimui_window

0xe97d,	// (0x0003a211) field_cale_ev2_pane_g4_ParamLimits

0xe97d,	// (0x0003a211) field_cale_ev2_pane_g4

0x60a2,	// (0x00031936) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60a2,	// (0x00031936) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0003b12f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0003b12f) cell_video_dialer_keypad_pane_g

0x60ba,	// (0x0003194e) cell_video_dialer_keypad_pane_t1

0xb414,	// (0x00036ca8) bg_popup_window_pane_cp012

0xcbaa,	// (0x0003843e) heading_pane_cp06

0x841d,	// (0x00033cb1) ncim_query_content_pane

0xb414,	// (0x00036ca8) bg_popup_heading_pane_cp01

0x8425,	// (0x00033cb9) ncim_heading_pane_t1

0x8433,	// (0x00033cc7) ncim_indicator_popup_pane

0x8445,	// (0x00033cd9) ncim_query_button_pane

0x8465,	// (0x00033cf9) ncim_query_content_pane_t1

0x8477,	// (0x00033d0b) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0003b495) ncim_query_content_pane_t

0x8529,	// (0x00033dbd) ncim_query_list_pane

0x853b,	// (0x00033dcf) ncim_query_popup_pane

0x8433,	// (0x00033cc7) ncim_indicator_popup_pane_ParamLimits

0x844d,	// (0x00033ce1) ncim_query_content_pane_g1_ParamLimits

0x844d,	// (0x00033ce1) ncim_query_content_pane_g1

0x8465,	// (0x00033cf9) ncim_query_content_pane_t1_ParamLimits

0x8477,	// (0x00033d0b) ncim_query_content_pane_t2_ParamLimits

0x8489,	// (0x00033d1d) ncim_query_content_pane_t3_ParamLimits

0x8489,	// (0x00033d1d) ncim_query_content_pane_t3

0x84b1,	// (0x00033d45) ncim_query_content_pane_t4_ParamLimits

0x84b1,	// (0x00033d45) ncim_query_content_pane_t4

0x84d9,	// (0x00033d6d) ncim_query_content_pane_t5_ParamLimits

0x84d9,	// (0x00033d6d) ncim_query_content_pane_t5

0x8501,	// (0x00033d95) ncim_query_content_pane_t6_ParamLimits

0x8501,	// (0x00033d95) ncim_query_content_pane_t6

0xfc01,	// (0x0003b495) ncim_query_content_pane_t_ParamLimits

0x8529,	// (0x00033dbd) ncim_query_list_pane_ParamLimits

0x853b,	// (0x00033dcf) ncim_query_popup_pane_ParamLimits

0x854f,	// (0x00033de3) wait_bar_pane_cp04

0xb414,	// (0x00036ca8) input_focus_pane_cp011

0x8557,	// (0x00033deb) ncim_query_popup_pane_t1

0x8565,	// (0x00033df9) ncim_list_query_list_pane_ParamLimits

0x8565,	// (0x00033df9) ncim_list_query_list_pane

0xb414,	// (0x00036ca8) bg_button_pane_cp027

0x8572,	// (0x00033e06) ncim_query_button_pane_g1

0xb414,	// (0x00036ca8) list_highlight_pane_cp012

0x857c,	// (0x00033e10) ncim_list_query_list_pane_g1

0x8584,	// (0x00033e18) ncim_list_query_list_pane_t1

0xbde5,	// (0x00037679) cam4_indicators_pane_g3_ParamLimits

0xbde5,	// (0x00037679) cam4_indicators_pane_g3

0xbe65,	// (0x000376f9) vid4_indicators_pane_g5_ParamLimits

0xbe65,	// (0x000376f9) vid4_indicators_pane_g5

0xbf24,	// (0x000377b8) vid4_progress_pane_g5_ParamLimits

0xbf24,	// (0x000377b8) vid4_progress_pane_g5

0x830b,	// (0x00033b9f) main_ncimui_pane_g1

0x8371,	// (0x00033c05) ncimui_group_query_pane_ParamLimits

0x8371,	// (0x00033c05) ncimui_group_query_pane

0x83b9,	// (0x00033c4d) ncimui_list_pane_ParamLimits

0x83b9,	// (0x00033c4d) ncimui_list_pane

0x83e0,	// (0x00033c74) ncimui_text_pane_ParamLimits

0x83e0,	// (0x00033c74) ncimui_text_pane

0x8592,	// (0x00033e26) ncimui_text_pane_t1_ParamLimits

0x8592,	// (0x00033e26) ncimui_text_pane_t1

0x85b0,	// (0x00033e44) ncimui_list_single_graphic_pane_ParamLimits

0x85b0,	// (0x00033e44) ncimui_list_single_graphic_pane

0x85c0,	// (0x00033e54) ncimui_query_pane_ParamLimits

0x85c0,	// (0x00033e54) ncimui_query_pane

0xb414,	// (0x00036ca8) list_highlight_pane_cp013

0x85d3,	// (0x00033e67) ncim_list_query_list_pane_t1_copy1

0x857c,	// (0x00033e10) ncim_list_single_graphic_pane_g1

0x85e1,	// (0x00033e75) ncim_query_button_pane_cp01

0x85ed,	// (0x00033e81) ncim_query_entry_pane_ParamLimits

0x85ed,	// (0x00033e81) ncim_query_entry_pane

0x8600,	// (0x00033e94) ncimui_query_pane_g1

0x860c,	// (0x00033ea0) ncimui_query_pane_t1_ParamLimits

0x860c,	// (0x00033ea0) ncimui_query_pane_t1

0xcaf1,	// (0x00038385) input_focus_pane_cp012

0x8625,	// (0x00033eb9) ncim_query_entry_pane_t1

0xc2e2,	// (0x00037b76) main_im_pane_ParamLimits

0xb484,	// (0x00036d18) main_mobtv_pane_ParamLimits

0xb484,	// (0x00036d18) main_mobtv_pane

0x7f9b,	// (0x0003382f) main_cset6_slider_pane_g18_ParamLimits

0x7f9b,	// (0x0003382f) main_cset6_slider_pane_g18

0x7fa7,	// (0x0003383b) main_cset6_slider_pane_g19_ParamLimits

0x7fa7,	// (0x0003383b) main_cset6_slider_pane_g19

0x8637,	// (0x00033ecb) bg_main_mobtv_pane_ParamLimits

0x8637,	// (0x00033ecb) bg_main_mobtv_pane

0x8645,	// (0x00033ed9) main_mobtv_info_pane

0x864e,	// (0x00033ee2) main_mobtv_loading_pane_ParamLimits

0x864e,	// (0x00033ee2) main_mobtv_loading_pane

0x865b,	// (0x00033eef) main_mobtv_pg_channel_list_pane

0x8665,	// (0x00033ef9) main_mobtv_pg_hdr_pane

0x866e,	// (0x00033f02) main_mobtv_programe_curr_pane_ParamLimits

0x866e,	// (0x00033f02) main_mobtv_programe_curr_pane

0x867b,	// (0x00033f0f) main_mobtv_programe_next_pane_ParamLimits

0x867b,	// (0x00033f0f) main_mobtv_programe_next_pane

0x8688,	// (0x00033f1c) popup_mobtv_noti_window

0xe6ac,	// (0x00039f40) main_tv_pg_hdr_pane_g1

0x8690,	// (0x00033f24) main_tv_pg_hdr_pane_g2

0x8698,	// (0x00033f2c) main_tv_pg_hdr_pane_g3

0x86a0,	// (0x00033f34) main_tv_pg_hdr_pane_g4

0x86a8,	// (0x00033f3c) main_tv_pg_hdr_pane_g5

0x86b2,	// (0x00033f46) main_tv_pg_hdr_pane_g6

0x86bc,	// (0x00033f50) main_tv_pg_hdr_pane_g7

0x86c6,	// (0x00033f5a) main_tv_pg_hdr_pane_g8

0x86d0,	// (0x00033f64) main_tv_pg_hdr_pane_g9

0x86da,	// (0x00033f6e) main_tv_pg_hdr_pane_g10

0x86e4,	// (0x00033f78) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0003b4a2) main_tv_pg_hdr_pane_g

0x86ee,	// (0x00033f82) main_tv_pg_hdr_pane_t1

0x86fc,	// (0x00033f90) main_tv_pg_hdr_pane_t2

0x870a,	// (0x00033f9e) main_tv_pg_hdr_pane_t3

0x871a,	// (0x00033fae) main_tv_pg_hdr_pane_t4

0x872a,	// (0x00033fbe) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0003b4b9) main_tv_pg_hdr_pane_t

0x873a,	// (0x00033fce) single_mobtv_pg_channel_pane_ParamLimits

0x873a,	// (0x00033fce) single_mobtv_pg_channel_pane

0x874c,	// (0x00033fe0) single_mobtv_pg_channel_table_pane

0x8755,	// (0x00033fe9) single_mobtv_pg_channel_thumb_pane

0x875e,	// (0x00033ff2) single_tv_pg_channel_pane_g1

0x8767,	// (0x00033ffb) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0003b4c4) single_tv_pg_channel_pane_g

0xe918,	// (0x0003a1ac) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe918,	// (0x0003a1ac) bg_single_mobtv_pg_channel_thumb_pane

0x8770,	// (0x00034004) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8770,	// (0x00034004) single_mobtv_pg_channel_thumb_pane_g1

0x877e,	// (0x00034012) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x877e,	// (0x00034012) single_mobtv_pg_channel_thumb_pane_g2

0x878a,	// (0x0003401e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x878a,	// (0x0003401e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0003b4c9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0003b4c9) single_mobtv_pg_channel_thumb_pane_g

0x8796,	// (0x0003402a) single_mobtv_pg_channel_thumb_pane_t1

0x87a4,	// (0x00034038) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0003b4d0) single_mobtv_pg_channel_thumb_pane_t

0xe6ac,	// (0x00039f40) bg_single_mobtv_pg_channel_table_pane_g1

0xe6ac,	// (0x00039f40) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0003af7b) bg_single_mobtv_pg_channel_table_pane_g

0x87b2,	// (0x00034046) single_mobtv_pg_channel_table_pane_t1

0x87c0,	// (0x00034054) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0003b4d5) single_mobtv_pg_channel_table_pane_t

0x87d6,	// (0x0003406a) main_mobtv_info_pane_g1_ParamLimits

0x87d6,	// (0x0003406a) main_mobtv_info_pane_g1

0x87f4,	// (0x00034088) main_mobtv_info_pane_t1_ParamLimits

0x87f4,	// (0x00034088) main_mobtv_info_pane_t1

0x886c,	// (0x00034100) main_mobtv_info_pane_t2_ParamLimits

0x886c,	// (0x00034100) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0003b4df) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0003b4df) main_mobtv_info_pane_t

0x88fb,	// (0x0003418f) wait_bar_pane_cp05

0x890d,	// (0x000341a1) main_mobtv_loading_pane_g1_ParamLimits

0x890d,	// (0x000341a1) main_mobtv_loading_pane_g1

0x8920,	// (0x000341b4) main_mobtv_loading_pane_g2_ParamLimits

0x8920,	// (0x000341b4) main_mobtv_loading_pane_g2

0x892c,	// (0x000341c0) main_mobtv_loading_pane_g3_ParamLimits

0x892c,	// (0x000341c0) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0003b4e6) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0003b4e6) main_mobtv_loading_pane_g

0x893f,	// (0x000341d3) main_mobtv_loading_pane_t1_ParamLimits

0x893f,	// (0x000341d3) main_mobtv_loading_pane_t1

0x8957,	// (0x000341eb) main_mobtv_loading_pane_t2_ParamLimits

0x8957,	// (0x000341eb) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0003b4ed) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0003b4ed) main_mobtv_loading_pane_t

0x897b,	// (0x0003420f) wait_bar_pane_cp06_ParamLimits

0x897b,	// (0x0003420f) wait_bar_pane_cp06

0x898a,	// (0x0003421e) main_mobtv_programe_curr_pane_t1

0x8998,	// (0x0003422c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0003b4f2) main_mobtv_programe_curr_pane_t

0x89a6,	// (0x0003423a) main_mobtv_programe_next_pane_t1

0x89b4,	// (0x00034248) main_mobtv_programe_next_pane_t2

0x89c2,	// (0x00034256) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0003b4f7) main_mobtv_programe_next_pane_t

0xb414,	// (0x00036ca8) bg_popup_mobtv_noti_window_pane

0x89d0,	// (0x00034264) popup_mobtv_noti_window_g1

0x89d8,	// (0x0003426c) popup_mobtv_noti_window_t1

0x89e6,	// (0x0003427a) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0003b4fe) popup_mobtv_noti_window_t

0xe6ac,	// (0x00039f40) bg_popup_mobtv_noti_window_pane_g1

0xb492,	// (0x00036d26) sc_clock_pane

0xb492,	// (0x00036d26) main_fs_bigclock_pane

0x78e3,	// (0x00033177) blid2_tripm_pane_t4_ParamLimits

0x78e3,	// (0x00033177) blid2_tripm_pane_t4

0x89f4,	// (0x00034288) sc_clock_pane_g1_ParamLimits

0x89f4,	// (0x00034288) sc_clock_pane_g1

0x8a06,	// (0x0003429a) sc_clock_pane_t1_ParamLimits

0x8a06,	// (0x0003429a) sc_clock_pane_t1

0x8a28,	// (0x000342bc) sc_clock_pane_t2_ParamLimits

0x8a28,	// (0x000342bc) sc_clock_pane_t2

0x8a40,	// (0x000342d4) sc_clock_pane_t3_ParamLimits

0x8a40,	// (0x000342d4) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0003b503) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0003b503) sc_clock_pane_t

0xa4a4,	// (0x00035d38) main_fs_bigclock_indicator_pane_ParamLimits

0xa4a4,	// (0x00035d38) main_fs_bigclock_indicator_pane

0xe8e8,	// (0x0003a17c) main_fs_bigclock_pane_g1_ParamLimits

0xe8e8,	// (0x0003a17c) main_fs_bigclock_pane_g1

0xa4b0,	// (0x00035d44) main_fs_bigclock_pane_t1_ParamLimits

0xa4b0,	// (0x00035d44) main_fs_bigclock_pane_t1

0xa4c2,	// (0x00035d56) main_fs_bigclock_pane_t2_ParamLimits

0xa4c2,	// (0x00035d56) main_fs_bigclock_pane_t2

0xa4d6,	// (0x00035d6a) main_fs_bigclock_pane_t3_ParamLimits

0xa4d6,	// (0x00035d6a) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003b702) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003b702) main_fs_bigclock_pane_t

0xa4e8,	// (0x00035d7c) main_fs_bigclock_indicator_pane_g1

0x8459,	// (0x00033ced) ncim_query_content_pane_g2_ParamLimits

0x8459,	// (0x00033ced) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0003b490) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0003b490) ncim_query_content_pane_g

0x8a59,	// (0x000342ed) sc_clock_pane_t4_ParamLimits

0x8a59,	// (0x000342ed) sc_clock_pane_t4

0xb484,	// (0x00036d18) main_radioblah_pane

0xf075,	// (0x0003a909) cell_call4_button_pane_t1_copy1_ParamLimits

0xf075,	// (0x0003a909) cell_call4_button_pane_t1_copy1

0x8323,	// (0x00033bb7) main_ncimui_pane_t1_ParamLimits

0x8323,	// (0x00033bb7) main_ncimui_pane_t1

0x833d,	// (0x00033bd1) main_ncimui_pane_t2_ParamLimits

0x833d,	// (0x00033bd1) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0003b489) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0003b489) main_ncimui_pane_t

0x8c29,	// (0x000344bd) main_radioblah_anim_pane_ParamLimits

0x8c29,	// (0x000344bd) main_radioblah_anim_pane

0x8c3a,	// (0x000344ce) main_radioblah_info_pane_ParamLimits

0x8c3a,	// (0x000344ce) main_radioblah_info_pane

0x8c60,	// (0x000344f4) main_radioblah_pane_t1_ParamLimits

0x8c60,	// (0x000344f4) main_radioblah_pane_t1

0x8c7c,	// (0x00034510) main_radioblah_pane_t2_ParamLimits

0x8c7c,	// (0x00034510) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0003b524) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0003b524) main_radioblah_pane_t

0x8cc4,	// (0x00034558) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8cc4,	// (0x00034558) main_radioblah_rocker_ctrl_pane

0x8d1c,	// (0x000345b0) main_radioblah_info_pane_t1_ParamLimits

0x8d1c,	// (0x000345b0) main_radioblah_info_pane_t1

0x8d56,	// (0x000345ea) main_radioblah_info_pane_t2_ParamLimits

0x8d56,	// (0x000345ea) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0003b52d) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0003b52d) main_radioblah_info_pane_t

0xe6ac,	// (0x00039f40) main_radioblah_rocker_ctrl_pane_g1

0x8e06,	// (0x0003469a) main_radioblah_rocker_ctrl_pane_g2

0x8e0e,	// (0x000346a2) main_radioblah_rocker_ctrl_pane_g3

0x8e16,	// (0x000346aa) main_radioblah_rocker_ctrl_pane_g4

0x8e1e,	// (0x000346b2) main_radioblah_rocker_ctrl_pane_g5

0x8e26,	// (0x000346ba) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0003b536) main_radioblah_rocker_ctrl_pane_g

0x7df0,	// (0x00033684) main_cset_text2_pane_t1_copy1_ParamLimits

0xbda7,	// (0x0003763b) cam4_image_uncrop_qvga_pane

0xbe0e,	// (0x000376a2) vid4_image_uncrop_qcif_pane

0xbf85,	// (0x00037819) cam6_image_uncrop_qvga_pane_ParamLimits

0xbf85,	// (0x00037819) cam6_image_uncrop_qvga_pane

0x7c9d,	// (0x00033531) vid6_image_uncrop_qcif_pane_ParamLimits

0x7c9d,	// (0x00033531) vid6_image_uncrop_qcif_pane

0xb414,	// (0x00036ca8) bg_popup_preview_window_pane_cp03

0x82d9,	// (0x00033b6d) list_cset_text2_pane

0x82e1,	// (0x00033b75) main_cset6_text2_pane_g1

0x82e9,	// (0x00033b7d) main_cset6_text2_pane_t1

0x8e2e,	// (0x000346c2) list_cset_text2_pane_t1_ParamLimits

0x8e2e,	// (0x000346c2) list_cset_text2_pane_t1

0xb484,	// (0x00036d18) main_radioblah_pane_ParamLimits

0x88e7,	// (0x0003417b) main_mobtv_info_pane_t3_ParamLimits

0x88e7,	// (0x0003417b) main_mobtv_info_pane_t3

0x8c4e,	// (0x000344e2) main_radioblah_pane_g1

0x8cec,	// (0x00034580) main_radioblah_info_pane_g1

0x8dab,	// (0x0003463f) main_radioblah_info_pane_t3_ParamLimits

0x8dab,	// (0x0003463f) main_radioblah_info_pane_t3

0x3741,	// (0x0002efd5) highlight_cell_cale_month_pane_ParamLimits

0x3741,	// (0x0002efd5) highlight_cell_cale_month_pane

0xb492,	// (0x00036d26) main_phob_fisheye_pane

0xea20,	// (0x0003a2b4) scroll_pane_cp0031_ParamLimits

0xea20,	// (0x0003a2b4) scroll_pane_cp0031

0x7de1,	// (0x00033675) wait_bar_pane_cp08_ParamLimits

0x7e96,	// (0x0003372a) cset_list_set_pane_copy1_ParamLimits

0x8e47,	// (0x000346db) highlight_cell_cale_month_pane_g1

0x8e4f,	// (0x000346e3) highlight_cell_cale_month_pane_t1

0x74cf,	// (0x00032d63) list_gen_pane_cp01

0x67b5,	// (0x00032049) scroll_pane_01

0x8e5d,	// (0x000346f1) list_single_double_fisheye_pane

0x8e66,	// (0x000346fa) list_double_fisheye_pane_g1_ParamLimits

0x8e66,	// (0x000346fa) list_double_fisheye_pane_g1

0x8e72,	// (0x00034706) list_double_fisheye_pane_g2_ParamLimits

0x8e72,	// (0x00034706) list_double_fisheye_pane_g2

0x8e86,	// (0x0003471a) list_double_fisheye_pane_g3_ParamLimits

0x8e86,	// (0x0003471a) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0003b543) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0003b543) list_double_fisheye_pane_g

0x8eaf,	// (0x00034743) list_double_fisheye_pane_t1_ParamLimits

0x8eaf,	// (0x00034743) list_double_fisheye_pane_t1

0x8eca,	// (0x0003475e) list_double_fisheye_pane_t2_ParamLimits

0x8eca,	// (0x0003475e) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0003b54e) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0003b54e) list_double_fisheye_pane_t

0xb492,	// (0x00036d26) main_call5_pane

0x8a84,	// (0x00034318) sc_swipe_pane_ParamLimits

0x8a84,	// (0x00034318) sc_swipe_pane

0x8eff,	// (0x00034793) call5_image_pane_ParamLimits

0x8eff,	// (0x00034793) call5_image_pane

0x8f1c,	// (0x000347b0) call5_swipe_1_pane_ParamLimits

0x8f1c,	// (0x000347b0) call5_swipe_1_pane

0x8f2f,	// (0x000347c3) call5_swipe_2_pane_ParamLimits

0x8f2f,	// (0x000347c3) call5_swipe_2_pane

0x8f5a,	// (0x000347ee) popup_call5_audio_first_window_ParamLimits

0x8f5a,	// (0x000347ee) popup_call5_audio_first_window

0xe918,	// (0x0003a1ac) call5_swipe_1_pane_g1_ParamLimits

0xe918,	// (0x0003a1ac) call5_swipe_1_pane_g1

0x8f6b,	// (0x000347ff) call5_swipe_1_pane_g2_ParamLimits

0x8f6b,	// (0x000347ff) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0003b553) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0003b553) call5_swipe_1_pane_g

0x8f77,	// (0x0003480b) call5_swipe_1_pane_t1_ParamLimits

0x8f77,	// (0x0003480b) call5_swipe_1_pane_t1

0xe918,	// (0x0003a1ac) call5_swipe_2_pane_g1_ParamLimits

0xe918,	// (0x0003a1ac) call5_swipe_2_pane_g1

0x8f8c,	// (0x00034820) call5_swipe_2_pane_g2_ParamLimits

0x8f8c,	// (0x00034820) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0003b558) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0003b558) call5_swipe_2_pane_g

0x8f98,	// (0x0003482c) call5_swipe_2_pane_t1_ParamLimits

0x8f98,	// (0x0003482c) call5_swipe_2_pane_t1

0x8fad,	// (0x00034841) sc_swipe_pane_g1_ParamLimits

0x8fad,	// (0x00034841) sc_swipe_pane_g1

0x8fba,	// (0x0003484e) sc_swipe_pane_g2_ParamLimits

0x8fba,	// (0x0003484e) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0003b55d) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0003b55d) sc_swipe_pane_g

0x8fc6,	// (0x0003485a) sc_swipe_pane_t1_ParamLimits

0x8fc6,	// (0x0003485a) sc_swipe_pane_t1

0xb492,	// (0x00036d26) main_cmail_launcher_pane

0x8fdb,	// (0x0003486f) aid_size_cell_cmail_l_ParamLimits

0x8fdb,	// (0x0003486f) aid_size_cell_cmail_l

0x8ff5,	// (0x00034889) grid_cmail_l_pane_ParamLimits

0x8ff5,	// (0x00034889) grid_cmail_l_pane

0x9010,	// (0x000348a4) cell_cmail_l_pane_ParamLimits

0x9010,	// (0x000348a4) cell_cmail_l_pane

0x9036,	// (0x000348ca) cell_cmail_l_pane_g1_ParamLimits

0x9036,	// (0x000348ca) cell_cmail_l_pane_g1

0x9042,	// (0x000348d6) cell_cmail_l_pane_t1_ParamLimits

0x9042,	// (0x000348d6) cell_cmail_l_pane_t1

0x9058,	// (0x000348ec) cell_cmail_l_pane_t2_ParamLimits

0x9058,	// (0x000348ec) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0003b562) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0003b562) cell_cmail_l_pane_t

0xcaf1,	// (0x00038385) grid_highlight_pane_cp018_ParamLimits

0xcaf1,	// (0x00038385) grid_highlight_pane_cp018

0x03e9,	// (0x0002bc7d) main2_pane_ParamLimits

0x03e9,	// (0x0002bc7d) main2_pane

0xc37b,	// (0x00037c0f) popup_sp_fs_action_menu_bg_pane_g1

0xc383,	// (0x00037c17) popup_sp_fs_action_menu_bg_pane_g2

0xc38b,	// (0x00037c1f) popup_sp_fs_action_menu_bg_pane_g3

0xc393,	// (0x00037c27) popup_sp_fs_action_menu_bg_pane_g4

0xc39b,	// (0x00037c2f) popup_sp_fs_action_menu_bg_pane_g5

0xc3a3,	// (0x00037c37) popup_sp_fs_action_menu_bg_pane_g6

0xc3ab,	// (0x00037c3f) popup_sp_fs_action_menu_bg_pane_g7

0xc3b3,	// (0x00037c47) popup_sp_fs_action_menu_bg_pane_g8

0xc3bb,	// (0x00037c4f) popup_sp_fs_action_menu_bg_pane_g9

0xc3c3,	// (0x00037c57) popup_sp_fs_action_menu_bg_pane_g10

0xc3c3,	// (0x00037c57) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0003aa27) popup_sp_fs_action_menu_bg_pane_g

0x26d1,	// (0x0002df65) list_medium_line_x2_t3_g3_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t3_g3_g1

0x26dd,	// (0x0002df71) list_medium_line_x2_t3_g3_g2_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x2_t3_g3_g2

0x26e9,	// (0x0002df7d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0003aad7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0003aad7) list_medium_line_x2_t3_g3_g

0x26f5,	// (0x0002df89) list_medium_line_x2_t3_g3_t1_ParamLimits

0x26f5,	// (0x0002df89) list_medium_line_x2_t3_g3_t1

0x270a,	// (0x0002df9e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x270a,	// (0x0002df9e) list_medium_line_x2_t3_g3_t2

0x271e,	// (0x0002dfb2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0003aade) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0003aade) list_medium_line_x2_t3_g3_t

0x26d1,	// (0x0002df65) list_medium_line_x2_t3_g2_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t3_g2_g1

0x26e9,	// (0x0002df7d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0003aae5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0003aae5) list_medium_line_x2_t3_g2_g

0x2733,	// (0x0002dfc7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2733,	// (0x0002dfc7) list_medium_line_x2_t3_g2_t1

0x2749,	// (0x0002dfdd) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2749,	// (0x0002dfdd) list_medium_line_x2_t3_g2_t2

0x271e,	// (0x0002dfb2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0003aaea) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0003aaea) list_medium_line_x2_t3_g2_t

0x26d1,	// (0x0002df65) list_medium_line_x2_t4_g4_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t4_g4_g1

0x275b,	// (0x0002dfef) list_medium_line_x2_t4_g4_g2_ParamLimits

0x275b,	// (0x0002dfef) list_medium_line_x2_t4_g4_g2

0x26dd,	// (0x0002df71) list_medium_line_x2_t4_g4_g3_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x2_t4_g4_g3

0x2767,	// (0x0002dffb) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2767,	// (0x0002dffb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0003aaf1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0003aaf1) list_medium_line_x2_t4_g4_g

0x2773,	// (0x0002e007) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2773,	// (0x0002e007) list_medium_line_x2_t4_g4_t1

0x278a,	// (0x0002e01e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x278a,	// (0x0002e01e) list_medium_line_x2_t4_g4_t2

0x279f,	// (0x0002e033) list_medium_line_x2_t4_g4_t3_ParamLimits

0x279f,	// (0x0002e033) list_medium_line_x2_t4_g4_t3

0x27b1,	// (0x0002e045) list_medium_line_x2_t4_g4_t4_ParamLimits

0x27b1,	// (0x0002e045) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0003aafa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0003aafa) list_medium_line_x2_t4_g4_t

0x26d1,	// (0x0002df65) list_medium_line_x2_t2_g4_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t2_g4_g1

0x275b,	// (0x0002dfef) list_medium_line_x2_t2_g4_g2_ParamLimits

0x275b,	// (0x0002dfef) list_medium_line_x2_t2_g4_g2

0x26dd,	// (0x0002df71) list_medium_line_x2_t2_g4_g3_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x2_t2_g4_g3

0x26e9,	// (0x0002df7d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0003ab61) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0003ab61) list_medium_line_x2_t2_g4_g

0x3767,	// (0x0002effb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3767,	// (0x0002effb) list_medium_line_x2_t2_g4_t1

0x271e,	// (0x0002dfb2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0003ab6a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0003ab6a) list_medium_line_x2_t2_g4_t

0x26d1,	// (0x0002df65) list_medium_line_x2_t2_g3_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t2_g3_g1

0x26dd,	// (0x0002df71) list_medium_line_x2_t2_g3_g2_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x2_t2_g3_g2

0x26e9,	// (0x0002df7d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0003aad7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0003aad7) list_medium_line_x2_t2_g3_g

0x377c,	// (0x0002f010) list_medium_line_x2_t2_g3_t1_ParamLimits

0x377c,	// (0x0002f010) list_medium_line_x2_t2_g3_t1

0x271e,	// (0x0002dfb2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0003ab6f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0003ab6f) list_medium_line_x2_t2_g3_t

0x388f,	// (0x0002f123) main_sp_fs_list_pane_ParamLimits

0x388f,	// (0x0002f123) main_sp_fs_list_pane

0x389b,	// (0x0002f12f) sp_fs_scroll_pane_ParamLimits

0x389b,	// (0x0002f12f) sp_fs_scroll_pane

0x38a7,	// (0x0002f13b) list_medium_line_x2_t3_t1

0x38b7,	// (0x0002f14b) list_medium_line_x2_t3_t2

0x38c5,	// (0x0002f159) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0003abba) list_medium_line_x2_t3_t

0x38d3,	// (0x0002f167) list_medium_line_x3_t4_t1

0x38e3,	// (0x0002f177) list_medium_line_x3_t4_t2

0x38f1,	// (0x0002f185) list_medium_line_x3_t4_t3

0x38c5,	// (0x0002f159) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0003abc1) list_medium_line_x3_t4_t

0x38ff,	// (0x0002f193) list_medium_line_x4_t5_t1

0x390f,	// (0x0002f1a3) list_medium_line_x4_t5_t2

0x38f1,	// (0x0002f185) list_medium_line_x4_t5_t3

0x391d,	// (0x0002f1b1) list_medium_line_x4_t5_t4

0x38c5,	// (0x0002f159) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0003abca) list_medium_line_x4_t5_t

0x26d1,	// (0x0002df65) list_medium_line_t4_g4_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_t4_g4_g1

0x2767,	// (0x0002dffb) list_medium_line_t4_g4_g2_ParamLimits

0x2767,	// (0x0002dffb) list_medium_line_t4_g4_g2

0x392b,	// (0x0002f1bf) list_medium_line_t4_g4_g3_ParamLimits

0x392b,	// (0x0002f1bf) list_medium_line_t4_g4_g3

0x26e9,	// (0x0002df7d) list_medium_line_t4_g4_g4_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0003abd5) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0003abd5) list_medium_line_t4_g4_g

0x3937,	// (0x0002f1cb) list_medium_line_t4_g4_t1_ParamLimits

0x3937,	// (0x0002f1cb) list_medium_line_t4_g4_t1

0x394c,	// (0x0002f1e0) list_medium_line_t4_g4_t2_ParamLimits

0x394c,	// (0x0002f1e0) list_medium_line_t4_g4_t2

0x3961,	// (0x0002f1f5) list_medium_line_t4_g4_t3_ParamLimits

0x3961,	// (0x0002f1f5) list_medium_line_t4_g4_t3

0x271e,	// (0x0002dfb2) list_medium_line_t4_g4_t4_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0003abde) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0003abde) list_medium_line_t4_g4_t

0x3a29,	// (0x0002f2bd) chi_dic_find_pane_g1

0x08b6,	// (0x0002c14a) main_tport_pane

0x6c8c,	// (0x00032520) list_medium_line_plain_t1

0x6cba,	// (0x0003254e) list_medium_line_t2_g2_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_t2_g2_g1

0x6cc6,	// (0x0003255a) list_medium_line_t2_g2_g2_ParamLimits

0x6cc6,	// (0x0003255a) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0003b29a) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0003b29a) list_medium_line_t2_g2_g

0x6cd2,	// (0x00032566) list_medium_line_t2_g2_t1_ParamLimits

0x6cd2,	// (0x00032566) list_medium_line_t2_g2_t1

0x6cec,	// (0x00032580) list_medium_line_t2_g2_t2_ParamLimits

0x6cec,	// (0x00032580) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0003b29f) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0003b29f) list_medium_line_t2_g2_t

0x7586,	// (0x00032e1a) aid_sp_fs_list_icon_a_sm

0x758e,	// (0x00032e22) aid_sp_fs_list_icon_d

0x7596,	// (0x00032e2a) aid_sp_fs_text_primary

0x759f,	// (0x00032e33) aid_sp_fs_text_secondary

0x75a8,	// (0x00032e3c) list_medium_line

0x75a8,	// (0x00032e3c) list_medium_line_g2

0x75a8,	// (0x00032e3c) list_medium_line_g3

0x75a8,	// (0x00032e3c) list_medium_line_plain

0x75a8,	// (0x00032e3c) list_medium_line_plain_t2

0x75a8,	// (0x00032e3c) list_medium_line_plain_t3

0x75a8,	// (0x00032e3c) list_medium_line_right_icon

0x75a8,	// (0x00032e3c) list_medium_line_right_iconx2

0x75a8,	// (0x00032e3c) list_medium_line_t2

0x75a8,	// (0x00032e3c) list_medium_line_t2_g2

0x75a8,	// (0x00032e3c) list_medium_line_t2_g3

0x75a8,	// (0x00032e3c) list_medium_line_t2_right_icon

0x75a8,	// (0x00032e3c) list_medium_line_t2_right_iconx2

0x75a8,	// (0x00032e3c) list_medium_line_t3

0x75a8,	// (0x00032e3c) list_medium_line_t3_g2

0x75a8,	// (0x00032e3c) list_medium_line_t3_g3

0x75a8,	// (0x00032e3c) list_medium_line_t3_right_iconx2

0x75b1,	// (0x00032e45) list_medium_line_t4_g4

0x75ba,	// (0x00032e4e) list_medium_line_x2

0x75ba,	// (0x00032e4e) list_medium_line_x2_t2_g2

0x75ba,	// (0x00032e4e) list_medium_line_x2_t2_g3

0x75ba,	// (0x00032e4e) list_medium_line_x2_t2_g4

0x75ba,	// (0x00032e4e) list_medium_line_x2_t3

0x75ba,	// (0x00032e4e) list_medium_line_x2_t3_g2

0x75ba,	// (0x00032e4e) list_medium_line_x2_t3_g3

0x75ba,	// (0x00032e4e) list_medium_line_x2_t3_g4

0x75ba,	// (0x00032e4e) list_medium_line_x2_t4_g2

0x75ba,	// (0x00032e4e) list_medium_line_x2_t4_g4

0x75c3,	// (0x00032e57) list_medium_line_x3

0x75c3,	// (0x00032e57) list_medium_line_x3_t4

0x75c3,	// (0x00032e57) list_medium_line_x3_t4_g4

0x75b1,	// (0x00032e45) list_medium_line_x4_t4

0x75b1,	// (0x00032e45) list_medium_line_x4_t4_g7

0x75b1,	// (0x00032e45) list_medium_line_x4_t5

0x75cc,	// (0x00032e60) list_single_fs_dyc_pane_ParamLimits

0x75cc,	// (0x00032e60) list_single_fs_dyc_pane

0x26d1,	// (0x0002df65) list_medium_line_x4_t4_g7_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x4_t4_g7_g1

0x81f3,	// (0x00033a87) list_medium_line_x4_t4_g7_g2_ParamLimits

0x81f3,	// (0x00033a87) list_medium_line_x4_t4_g7_g2

0x81ff,	// (0x00033a93) list_medium_line_x4_t4_g7_g3_ParamLimits

0x81ff,	// (0x00033a93) list_medium_line_x4_t4_g7_g3

0x820e,	// (0x00033aa2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x820e,	// (0x00033aa2) list_medium_line_x4_t4_g7_g4

0x821a,	// (0x00033aae) list_medium_line_x4_t4_g7_g5_ParamLimits

0x821a,	// (0x00033aae) list_medium_line_x4_t4_g7_g5

0x8229,	// (0x00033abd) list_medium_line_x4_t4_g7_g6_ParamLimits

0x8229,	// (0x00033abd) list_medium_line_x4_t4_g7_g6

0x8238,	// (0x00033acc) list_medium_line_x4_t4_g7_g7_ParamLimits

0x8238,	// (0x00033acc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0003b46a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0003b46a) list_medium_line_x4_t4_g7_g

0x8244,	// (0x00033ad8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8244,	// (0x00033ad8) list_medium_line_x4_t4_g7_t1

0x8259,	// (0x00033aed) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8259,	// (0x00033aed) list_medium_line_x4_t4_g7_t2

0x826e,	// (0x00033b02) list_medium_line_x4_t4_g7_t3_ParamLimits

0x826e,	// (0x00033b02) list_medium_line_x4_t4_g7_t3

0x8283,	// (0x00033b17) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8283,	// (0x00033b17) list_medium_line_x4_t4_g7_t4

0x8295,	// (0x00033b29) list_medium_line_x4_t4_g7_t5_ParamLimits

0x8295,	// (0x00033b29) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0003b479) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0003b479) list_medium_line_x4_t4_g7_t

0x82a7,	// (0x00033b3b) list_single_dyc_row_pane_ParamLimits

0x82a7,	// (0x00033b3b) list_single_dyc_row_pane

0x8eec,	// (0x00034780) call5_gesture_pane_ParamLimits

0x8eec,	// (0x00034780) call5_gesture_pane

0x8f42,	// (0x000347d6) call5_windows_pane_ParamLimits

0x8f42,	// (0x000347d6) call5_windows_pane

0x906a,	// (0x000348fe) call5_swipe_1_pane_cp_ParamLimits

0x906a,	// (0x000348fe) call5_swipe_1_pane_cp

0x9076,	// (0x0003490a) call5_swipe_2_pane_cp_ParamLimits

0x9076,	// (0x0003490a) call5_swipe_2_pane_cp

0xce26,	// (0x000386ba) call5_image_pane_cp

0x9082,	// (0x00034916) popup_call5_audio_first_window_cp_ParamLimits

0x9082,	// (0x00034916) popup_call5_audio_first_window_cp

0x8fad,	// (0x00034841) call5_swipe_1_pane_g1_cp_ParamLimits

0x8fad,	// (0x00034841) call5_swipe_1_pane_g1_cp

0x9090,	// (0x00034924) call5_swipe_1_pane_g2_cp

0x8fc6,	// (0x0003485a) call5_swipe_1_pane_t1_cp_ParamLimits

0x8fc6,	// (0x0003485a) call5_swipe_1_pane_t1_cp

0x8fad,	// (0x00034841) call5_swipe_2_pane_g1_cp_ParamLimits

0x8fad,	// (0x00034841) call5_swipe_2_pane_g1_cp

0x9098,	// (0x0003492c) call5_swipe_2_pane_g2_cp

0x90a0,	// (0x00034934) call5_swipe_2_pane_t1_cp_ParamLimits

0x90a0,	// (0x00034934) call5_swipe_2_pane_t1_cp

0xcaf1,	// (0x00038385) main_sp_fs_email_pane

0x90b5,	// (0x00034949) main_sp_fs_listscroll_pane_te

0x90be,	// (0x00034952) popup_sp_fs_action_menu_pane_ParamLimits

0x90be,	// (0x00034952) popup_sp_fs_action_menu_pane

0xe6ac,	// (0x00039f40) bg_sp_fs_ctrlbar_pane_g1

0x9102,	// (0x00034996) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x910b,	// (0x0003499f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x9114,	// (0x000349a8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe6ac,	// (0x00039f40) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0003b567) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe491,	// (0x00039d25) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe491,	// (0x00039d25) bg_sp_fs_ctrlbar_ddmenu_pane

0x911d,	// (0x000349b1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x911d,	// (0x000349b1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x26d1,	// (0x0002df65) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x26d1,	// (0x0002df65) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0003b570) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0003b570) main_sp_fs_ctrlbar_ddmenu_pane_g

0x9129,	// (0x000349bd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x9129,	// (0x000349bd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9143,	// (0x000349d7) list_medium_line_t2_right_icon_g1

0x914b,	// (0x000349df) list_medium_line_t2_right_icon_t1

0x915b,	// (0x000349ef) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0003b575) list_medium_line_t2_right_icon_t

0xe2a4,	// (0x00039b38) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe2a4,	// (0x00039b38) bg_sp_fs_ctrlbar_pane

0x91ed,	// (0x00034a81) main_sp_fs_ctrlbar_button_pane_cp01

0x91f7,	// (0x00034a8b) main_sp_fs_ctrlbar_ddmenu_pane

0x9201,	// (0x00034a95) main_sp_fs_ctrlbar_pane_g1

0x920d,	// (0x00034aa1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0003b57a) main_sp_fs_ctrlbar_pane_g

0x9219,	// (0x00034aad) main_sp_fs_ctrlbar_pane_t1

0x922e,	// (0x00034ac2) main_sp_fs_ctrlbar_pane

0x926d,	// (0x00034b01) main_sp_fs_listscroll_pane_te_cp01

0x928d,	// (0x00034b21) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x928d,	// (0x00034b21) popup_sp_fs_action_menu_pane_cp01

0xcaf1,	// (0x00038385) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcaf1,	// (0x00038385) bg_sp_fs_highlight_list_pane_cp01

0x92bd,	// (0x00034b51) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x92bd,	// (0x00034b51) sp_fs_action_menu_list_gene_pane_g1

0x92cc,	// (0x00034b60) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x92cc,	// (0x00034b60) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0003b584) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0003b584) sp_fs_action_menu_list_gene_pane_g

0x92d9,	// (0x00034b6d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x92d9,	// (0x00034b6d) sp_fs_action_menu_list_gene_pane_t1

0x92f1,	// (0x00034b85) sp_fs_action_menu_list_gene_pane_ParamLimits

0x92f1,	// (0x00034b85) sp_fs_action_menu_list_gene_pane

0x9312,	// (0x00034ba6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x9312,	// (0x00034ba6) popup_sp_fs_action_menu_bg_pane

0x9320,	// (0x00034bb4) sp_fs_action_menu_list_pane_ParamLimits

0x9320,	// (0x00034bb4) sp_fs_action_menu_list_pane

0x9342,	// (0x00034bd6) sp_fs_scroll_pane_cp01_ParamLimits

0x9342,	// (0x00034bd6) sp_fs_scroll_pane_cp01

0x9368,	// (0x00034bfc) list_medium_line_plain_t2_t1

0x9378,	// (0x00034c0c) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0003b589) list_medium_line_plain_t2_t

0x9388,	// (0x00034c1c) list_medium_line_plain_t3_t1

0x9398,	// (0x00034c2c) list_medium_line_plain_t3_t2

0x93a6,	// (0x00034c3a) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0003b58e) list_medium_line_plain_t3_t

0x26d1,	// (0x0002df65) list_medium_line_x2_t2_g2_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t2_g2_g1

0x26e9,	// (0x0002df7d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0003aae5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0003aae5) list_medium_line_x2_t2_g2_g

0x3937,	// (0x0002f1cb) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3937,	// (0x0002f1cb) list_medium_line_x2_t2_g2_t1

0x271e,	// (0x0002dfb2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0003b595) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0003b595) list_medium_line_x2_t2_g2_t

0x26d1,	// (0x0002df65) list_medium_line_x2_t4_g2_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t4_g2_g1

0x26e9,	// (0x0002df7d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0003aae5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0003aae5) list_medium_line_x2_t4_g2_g

0x93b4,	// (0x00034c48) list_medium_line_x2_t4_g2_t1_ParamLimits

0x93b4,	// (0x00034c48) list_medium_line_x2_t4_g2_t1

0x93ce,	// (0x00034c62) list_medium_line_x2_t4_g2_t2_ParamLimits

0x93ce,	// (0x00034c62) list_medium_line_x2_t4_g2_t2

0x93e3,	// (0x00034c77) list_medium_line_x2_t4_g2_t3_ParamLimits

0x93e3,	// (0x00034c77) list_medium_line_x2_t4_g2_t3

0x271e,	// (0x0002dfb2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0003b59a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0003b59a) list_medium_line_x2_t4_g2_t

0x93f8,	// (0x00034c8c) list_medium_line_t3_right_iconx2_g1

0x9143,	// (0x000349d7) list_medium_line_t3_right_iconx2_g2

0x9400,	// (0x00034c94) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0003b5a3) list_medium_line_t3_right_iconx2_g

0x940a,	// (0x00034c9e) list_medium_line_t3_right_iconx2_t1

0x941a,	// (0x00034cae) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0003b5aa) list_medium_line_t3_right_iconx2_t

0x26d1,	// (0x0002df65) list_medium_line_x3_t4_g4_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x3_t4_g4_g1

0x26dd,	// (0x0002df71) list_medium_line_x3_t4_g4_g2_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x3_t4_g4_g2

0x2767,	// (0x0002dffb) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2767,	// (0x0002dffb) list_medium_line_x3_t4_g4_g3

0x9428,	// (0x00034cbc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9428,	// (0x00034cbc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0003b5af) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0003b5af) list_medium_line_x3_t4_g4_g

0x9434,	// (0x00034cc8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9434,	// (0x00034cc8) list_medium_line_x3_t4_g4_t1

0x944b,	// (0x00034cdf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x944b,	// (0x00034cdf) list_medium_line_x3_t4_g4_t2

0x394c,	// (0x0002f1e0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x394c,	// (0x0002f1e0) list_medium_line_x3_t4_g4_t3

0x9466,	// (0x00034cfa) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9466,	// (0x00034cfa) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0003b5b8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0003b5b8) list_medium_line_x3_t4_g4_t

0x9483,	// (0x00034d17) list_single_dyc_row_text_pane_t1_ParamLimits

0x9483,	// (0x00034d17) list_single_dyc_row_text_pane_t1

0x94cc,	// (0x00034d60) list_single_dyc_row_text_pane_t2_ParamLimits

0x94cc,	// (0x00034d60) list_single_dyc_row_text_pane_t2

0x9526,	// (0x00034dba) list_single_dyc_row_text_pane_t3_ParamLimits

0x9526,	// (0x00034dba) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0003b5c1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0003b5c1) list_single_dyc_row_text_pane_t

0x9538,	// (0x00034dcc) list_single_dyc_row_pane_g1_ParamLimits

0x9538,	// (0x00034dcc) list_single_dyc_row_pane_g1

0x9544,	// (0x00034dd8) list_single_dyc_row_pane_g2_ParamLimits

0x9544,	// (0x00034dd8) list_single_dyc_row_pane_g2

0x9550,	// (0x00034de4) list_single_dyc_row_pane_g3_ParamLimits

0x9550,	// (0x00034de4) list_single_dyc_row_pane_g3

0x955c,	// (0x00034df0) list_single_dyc_row_pane_g4_ParamLimits

0x955c,	// (0x00034df0) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003b5c8) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003b5c8) list_single_dyc_row_pane_g

0x9568,	// (0x00034dfc) list_single_dyc_row_text_pane_ParamLimits

0x9568,	// (0x00034dfc) list_single_dyc_row_text_pane

0xb414,	// (0x00036ca8) bg_sp_fs_scroll_pane

0x9587,	// (0x00034e1b) thumb_sp_fs_scroll_pane

0x6cba,	// (0x0003254e) list_medium_line_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_g1

0x9590,	// (0x00034e24) list_medium_line_t1_ParamLimits

0x9590,	// (0x00034e24) list_medium_line_t1

0x26d1,	// (0x0002df65) list_medium_line_x2_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_g1

0x26dd,	// (0x0002df71) list_medium_line_x2_g2_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003b5d1) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003b5d1) list_medium_line_x2_g

0x95a5,	// (0x00034e39) list_medium_line_x2_t1_ParamLimits

0x95a5,	// (0x00034e39) list_medium_line_x2_t1

0x26d1,	// (0x0002df65) list_medium_line_x3_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x3_g1

0x26dd,	// (0x0002df71) list_medium_line_x3_g2_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003b5d1) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003b5d1) list_medium_line_x3_g

0x95a5,	// (0x00034e39) list_medium_line_x3_t1_ParamLimits

0x95a5,	// (0x00034e39) list_medium_line_x3_t1

0x95bb,	// (0x00034e4f) thumb_sp_fs_scroll_pane_g1

0x95c4,	// (0x00034e58) thumb_sp_fs_scroll_pane_g2

0x95cd,	// (0x00034e61) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003b5d6) thumb_sp_fs_scroll_pane_g

0x95bb,	// (0x00034e4f) bg_sp_fs_scroll_pane_g1

0x95c4,	// (0x00034e58) bg_sp_fs_scroll_pane_g2

0x95cd,	// (0x00034e61) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003b5d6) bg_sp_fs_scroll_pane_g

0x26d1,	// (0x0002df65) list_medium_line_x2_t3_g4_g1_ParamLimits

0x26d1,	// (0x0002df65) list_medium_line_x2_t3_g4_g1

0x275b,	// (0x0002dfef) list_medium_line_x2_t3_g4_g2_ParamLimits

0x275b,	// (0x0002dfef) list_medium_line_x2_t3_g4_g2

0x26dd,	// (0x0002df71) list_medium_line_x2_t3_g4_g3_ParamLimits

0x26dd,	// (0x0002df71) list_medium_line_x2_t3_g4_g3

0x26e9,	// (0x0002df7d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x26e9,	// (0x0002df7d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0003ab61) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0003ab61) list_medium_line_x2_t3_g4_g

0x95d6,	// (0x00034e6a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x95d6,	// (0x00034e6a) list_medium_line_x2_t3_g4_t1

0x95f0,	// (0x00034e84) list_medium_line_x2_t3_g4_t2_ParamLimits

0x95f0,	// (0x00034e84) list_medium_line_x2_t3_g4_t2

0x271e,	// (0x0002dfb2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x271e,	// (0x0002dfb2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003b5dd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003b5dd) list_medium_line_x2_t3_g4_t

0x6cba,	// (0x0003254e) list_medium_line_g2_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_g2_g1

0x6cc6,	// (0x0003255a) list_medium_line_g2_g2_ParamLimits

0x6cc6,	// (0x0003255a) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0003b29a) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0003b29a) list_medium_line_g2_g

0x960a,	// (0x00034e9e) list_medium_line_g2_t1_ParamLimits

0x960a,	// (0x00034e9e) list_medium_line_g2_t1

0x6cba,	// (0x0003254e) list_medium_line_t3_g2_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_t3_g2_g1

0x6cc6,	// (0x0003255a) list_medium_line_t3_g2_g2_ParamLimits

0x6cc6,	// (0x0003255a) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0003b29a) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0003b29a) list_medium_line_t3_g2_g

0x961f,	// (0x00034eb3) list_medium_line_t3_g2_t1_ParamLimits

0x961f,	// (0x00034eb3) list_medium_line_t3_g2_t1

0x9639,	// (0x00034ecd) list_medium_line_t3_g2_t2_ParamLimits

0x9639,	// (0x00034ecd) list_medium_line_t3_g2_t2

0x964e,	// (0x00034ee2) list_medium_line_t3_g2_t3_ParamLimits

0x964e,	// (0x00034ee2) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003b5e4) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003b5e4) list_medium_line_t3_g2_t

0x9143,	// (0x000349d7) list_medium_line_right_icon_g1

0x9668,	// (0x00034efc) list_medium_line_right_icon_t1

0x6cba,	// (0x0003254e) list_medium_line_t2_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_t2_g1

0x9676,	// (0x00034f0a) list_medium_line_t2_t1_ParamLimits

0x9676,	// (0x00034f0a) list_medium_line_t2_t1

0x9690,	// (0x00034f24) list_medium_line_t2_t2_ParamLimits

0x9690,	// (0x00034f24) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003b5eb) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003b5eb) list_medium_line_t2_t

0x6cba,	// (0x0003254e) list_medium_line_t3_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_t3_g1

0x96a9,	// (0x00034f3d) list_medium_line_t3_t1_ParamLimits

0x96a9,	// (0x00034f3d) list_medium_line_t3_t1

0x96c0,	// (0x00034f54) list_medium_line_t3_t2_ParamLimits

0x96c0,	// (0x00034f54) list_medium_line_t3_t2

0x96d5,	// (0x00034f69) list_medium_line_t3_t3_ParamLimits

0x96d5,	// (0x00034f69) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003b5f0) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003b5f0) list_medium_line_t3_t

0x6cba,	// (0x0003254e) list_medium_line_g3_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_g3_g1

0x96e7,	// (0x00034f7b) list_medium_line_g3_g2_ParamLimits

0x96e7,	// (0x00034f7b) list_medium_line_g3_g2

0x6cc6,	// (0x0003255a) list_medium_line_g3_g3_ParamLimits

0x6cc6,	// (0x0003255a) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003b5f7) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003b5f7) list_medium_line_g3_g

0x96f3,	// (0x00034f87) list_medium_line_g3_t1_ParamLimits

0x96f3,	// (0x00034f87) list_medium_line_g3_t1

0x6cba,	// (0x0003254e) list_medium_line_t2_g3_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_t2_g3_g1

0x96e7,	// (0x00034f7b) list_medium_line_t2_g3_g2_ParamLimits

0x96e7,	// (0x00034f7b) list_medium_line_t2_g3_g2

0x6cc6,	// (0x0003255a) list_medium_line_t2_g3_g3_ParamLimits

0x6cc6,	// (0x0003255a) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003b5f7) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003b5f7) list_medium_line_t2_g3_g

0x9708,	// (0x00034f9c) list_medium_line_t2_g3_t1_ParamLimits

0x9708,	// (0x00034f9c) list_medium_line_t2_g3_t1

0x9722,	// (0x00034fb6) list_medium_line_t2_g3_t2_ParamLimits

0x9722,	// (0x00034fb6) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003b5fe) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003b5fe) list_medium_line_t2_g3_t

0x6cba,	// (0x0003254e) list_medium_line_t3_g3_g1_ParamLimits

0x6cba,	// (0x0003254e) list_medium_line_t3_g3_g1

0x96e7,	// (0x00034f7b) list_medium_line_t3_g3_g2_ParamLimits

0x96e7,	// (0x00034f7b) list_medium_line_t3_g3_g2

0x6cc6,	// (0x0003255a) list_medium_line_t3_g3_g3_ParamLimits

0x6cc6,	// (0x0003255a) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003b5f7) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003b5f7) list_medium_line_t3_g3_g

0x973d,	// (0x00034fd1) list_medium_line_t3_g3_t1_ParamLimits

0x973d,	// (0x00034fd1) list_medium_line_t3_g3_t1

0x9756,	// (0x00034fea) list_medium_line_t3_g3_t2_ParamLimits

0x9756,	// (0x00034fea) list_medium_line_t3_g3_t2

0x976c,	// (0x00035000) list_medium_line_t3_g3_t3_ParamLimits

0x976c,	// (0x00035000) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003b603) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003b603) list_medium_line_t3_g3_t

0x93f8,	// (0x00034c8c) list_medium_line_right_iconx2_g1

0x9143,	// (0x000349d7) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003b60a) list_medium_line_right_iconx2_g

0x9786,	// (0x0003501a) list_medium_line_right_iconx2_t1

0x93f8,	// (0x00034c8c) list_medium_line_t2_right_iconx2_g1

0x9143,	// (0x000349d7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003b60a) list_medium_line_t2_right_iconx2_g

0x9794,	// (0x00035028) list_medium_line_t2_right_iconx2_t1

0x97a4,	// (0x00035038) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003b60f) list_medium_line_t2_right_iconx2_t

0x97b6,	// (0x0003504a) list_medium_line_x4_t4_t1

0x97c4,	// (0x00035058) list_medium_line_x4_t4_t2

0x97d4,	// (0x00035068) list_medium_line_x4_t4_t3

0x97e4,	// (0x00035078) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003b614) list_medium_line_x4_t4_t

0x9837,	// (0x000350cb) tport_appsw_pane_ParamLimits

0x9837,	// (0x000350cb) tport_appsw_pane

0x984f,	// (0x000350e3) tport_contact_pane_ParamLimits

0x984f,	// (0x000350e3) tport_contact_pane

0x9867,	// (0x000350fb) tport_listscroll_pane_ParamLimits

0x9867,	// (0x000350fb) tport_listscroll_pane

0x9881,	// (0x00035115) cell_tport_appsw_pane_ParamLimits

0x9881,	// (0x00035115) cell_tport_appsw_pane

0x631e,	// (0x00031bb2) tport_appsw_pane_g1_ParamLimits

0x631e,	// (0x00031bb2) tport_appsw_pane_g1

0x98c1,	// (0x00035155) tport_contact_pane_g1

0x8557,	// (0x00033deb) tport_contact_pane_t1

0x98ca,	// (0x0003515e) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003b61d) tport_contact_pane_t

0x98d8,	// (0x0003516c) list_tport_pane

0x98e1,	// (0x00035175) scroll_pane_cp_030

0x98f2,	// (0x00035186) cell_tport_appsw_pane_g1

0x9902,	// (0x00035196) cell_tport_appsw_pane_t1

0xb414,	// (0x00036ca8) grid_highlight_pane_cp019

0x9910,	// (0x000351a4) list_tport_double_graphic_pane_ParamLimits

0x9910,	// (0x000351a4) list_tport_double_graphic_pane

0xcaf1,	// (0x00038385) list_highlight_pane_cp023_ParamLimits

0xcaf1,	// (0x00038385) list_highlight_pane_cp023

0x991d,	// (0x000351b1) list_tport_double_graphic_pane_g1_ParamLimits

0x991d,	// (0x000351b1) list_tport_double_graphic_pane_g1

0x992a,	// (0x000351be) list_tport_double_graphic_pane_t1_ParamLimits

0x992a,	// (0x000351be) list_tport_double_graphic_pane_t1

0x993f,	// (0x000351d3) list_tport_double_graphic_pane_t2_ParamLimits

0x993f,	// (0x000351d3) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003b629) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003b629) list_tport_double_graphic_pane_t

0xb414,	// (0x00036ca8) main_cale_note_pane

0x17b1,	// (0x0002d045) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x17b1,	// (0x0002d045) cell_vitu2_function_top_wide_pane_cp01

0x88fb,	// (0x0003418f) wait_bar_pane_cp05_ParamLimits

0xcaf1,	// (0x00038385) listscroll_cmail_pane

0x9951,	// (0x000351e5) list_cmail_pane

0x6b78,	// (0x0003240c) list_cmail_body_pane

0x9961,	// (0x000351f5) list_single_cmail_header_caption_pane

0x9977,	// (0x0003520b) list_single_cmail_header_detail_pane_ParamLimits

0x9977,	// (0x0003520b) list_single_cmail_header_detail_pane

0x99a0,	// (0x00035234) list_single_cmail_header_caption_pane_t1

0x99b9,	// (0x0003524d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x99b9,	// (0x0003524d) list_single_cmail_header_detail_pane_g1

0x99d1,	// (0x00035265) list_single_cmail_header_detail_pane_g2_ParamLimits

0x99d1,	// (0x00035265) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003b62e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003b62e) list_single_cmail_header_detail_pane_g

0x99ea,	// (0x0003527e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x99ea,	// (0x0003527e) list_single_cmail_header_detail_pane_t1

0x9a4c,	// (0x000352e0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9a4c,	// (0x000352e0) list_single_cmail_header_editor_pane_bg

0x8767,	// (0x00033ffb) list_cmail_body_pane_g1

0x9a65,	// (0x000352f9) list_cmail_body_pane_t1

0x638a,	// (0x00031c1e) list_single_cmail_header_editor_pane_bg_g1

0xc703,	// (0x00037f97) list_single_cmail_header_editor_pane_bg_g1_copy1

0x639a,	// (0x00031c2e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6392,	// (0x00031c26) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6cb2,	// (0x00032546) list_single_cmail_header_editor_pane_bg_g1_copy4

0x63ba,	// (0x00031c4e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x63aa,	// (0x00031c3e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x63b2,	// (0x00031c46) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc6e3,	// (0x00037f77) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a73,	// (0x00035307) calenote_gesture_pane_ParamLimits

0x9a73,	// (0x00035307) calenote_gesture_pane

0x9a93,	// (0x00035327) calenote_window_pane_ParamLimits

0x9a93,	// (0x00035327) calenote_window_pane

0x9aaf,	// (0x00035343) popup_note_window_cp01

0x9ab8,	// (0x0003534c) calenote_swipe_1_pane_ParamLimits

0x9ab8,	// (0x0003534c) calenote_swipe_1_pane

0x9076,	// (0x0003490a) calenote_swipe_2_pane_ParamLimits

0x9076,	// (0x0003490a) calenote_swipe_2_pane

0x8fad,	// (0x00034841) calenote_swipe_1_pane_g1_ParamLimits

0x8fad,	// (0x00034841) calenote_swipe_1_pane_g1

0x8fba,	// (0x0003484e) calenote_swipe_1_pane_g2_ParamLimits

0x8fba,	// (0x0003484e) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0003b55d) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0003b55d) calenote_swipe_1_pane_g

0x9ad6,	// (0x0003536a) calenote_swipe_1_pane_t1_ParamLimits

0x9ad6,	// (0x0003536a) calenote_swipe_1_pane_t1

0x8fad,	// (0x00034841) calenote_swipe_2_pane_g1_ParamLimits

0x8fad,	// (0x00034841) calenote_swipe_2_pane_g1

0x9af5,	// (0x00035389) calenote_swipe_2_pane_g2_ParamLimits

0x9af5,	// (0x00035389) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003b63a) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003b63a) calenote_swipe_2_pane_g

0x9b01,	// (0x00035395) calenote_swipe_2_pane_t1_ParamLimits

0x9b01,	// (0x00035395) calenote_swipe_2_pane_t1

0xb414,	// (0x00036ca8) main_mup_navstr_pane

0x5758,	// (0x00030fec) main_mup3_pane_t7_ParamLimits

0x5758,	// (0x00030fec) main_mup3_pane_t7

0xbbc5,	// (0x00037459) main_mp4_pane_g6_ParamLimits

0xbbc5,	// (0x00037459) main_mp4_pane_g6

0xbd69,	// (0x000375fd) main_image3_pane_t4_ParamLimits

0xbd69,	// (0x000375fd) main_image3_pane_t4

0x9b28,	// (0x000353bc) popup_navstr_preview_pane_ParamLimits

0x9b28,	// (0x000353bc) popup_navstr_preview_pane

0x9b3c,	// (0x000353d0) scroll_navstr_pane_ParamLimits

0x9b3c,	// (0x000353d0) scroll_navstr_pane

0xb414,	// (0x00036ca8) bg_popup_preview_window_pane_cp04

0x9b50,	// (0x000353e4) popup_navstr_preview_pane_t1

0x9b5e,	// (0x000353f2) scroll_navstr_pane_g1_ParamLimits

0x9b5e,	// (0x000353f2) scroll_navstr_pane_g1

0x9b72,	// (0x00035406) scroll_navstr_pane_t1_ParamLimits

0x9b72,	// (0x00035406) scroll_navstr_pane_t1

0x9acd,	// (0x00035361) bg_button_pane_cp014

0x9acd,	// (0x00035361) bg_button_pane_cp030

0x8e92,	// (0x00034726) list_double_fisheye_pane_g4_ParamLimits

0x8e92,	// (0x00034726) list_double_fisheye_pane_g4

0x8e9e,	// (0x00034732) list_double_fisheye_pane_g5_ParamLimits

0x8e9e,	// (0x00034732) list_double_fisheye_pane_g5

0x389b,	// (0x0002f12f) sp_fs_scroll_pane_cp03

0x9201,	// (0x00034a95) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x920d,	// (0x00034aa1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0003b57a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9219,	// (0x00034aad) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9959,	// (0x000351ed) sp_fs_scroll_pane_cp02

0xc3e6,	// (0x00037c7a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc3e6,	// (0x00037c7a) popup_sp_fs_calendar_preview_list_single_pane

0xb414,	// (0x00036ca8) main_cam6_pano_pane

0xb484,	// (0x00036d18) main_mup3_pane_ParamLimits

0xb414,	// (0x00036ca8) main_phacti_pane

0x87ce,	// (0x00034062) bg_button_pane_cp11

0x87e8,	// (0x0003407c) main_mobtv_info_pane_g2_ParamLimits

0x87e8,	// (0x0003407c) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0003b4da) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0003b4da) main_mobtv_info_pane_g

0x8a6b,	// (0x000342ff) sc_clock_pane_t5_ParamLimits

0x8a6b,	// (0x000342ff) sc_clock_pane_t5

0x8c4e,	// (0x000344e2) main_radioblah_pane_g1_ParamLimits

0x8c94,	// (0x00034528) main_radioblah_pane_t3_ParamLimits

0x8c94,	// (0x00034528) main_radioblah_pane_t3

0x8cac,	// (0x00034540) main_radioblah_pane_t4_ParamLimits

0x8cac,	// (0x00034540) main_radioblah_pane_t4

0x8cda,	// (0x0003456e) main_radioblah_text_pane_ParamLimits

0x8cda,	// (0x0003456e) main_radioblah_text_pane

0x8cec,	// (0x00034580) main_radioblah_info_pane_g1_ParamLimits

0x8dbf,	// (0x00034653) main_radioblah_info_pane_t4_ParamLimits

0x8dbf,	// (0x00034653) main_radioblah_info_pane_t4

0xcaf1,	// (0x00038385) main_sp_fs_calendar_pane

0x9b89,	// (0x0003541d) main_phacti_pane_g1

0x9b9a,	// (0x0003542e) phacti_note_pane_ParamLimits

0x9b9a,	// (0x0003542e) phacti_note_pane

0x9bae,	// (0x00035442) phacti_term_pane_ParamLimits

0x9bae,	// (0x00035442) phacti_term_pane

0x9bc3,	// (0x00035457) phacti_note_pane_t1_ParamLimits

0x9bc3,	// (0x00035457) phacti_note_pane_t1

0x9bda,	// (0x0003546e) phacti_term_pane_g1

0x9be2,	// (0x00035476) phacti_term_pane_t1_ParamLimits

0x9be2,	// (0x00035476) phacti_term_pane_t1

0x9c0c,	// (0x000354a0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc504,	// (0x00037d98) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003b644) popup_sp_fs_calendar_preview_list_single_pane_g

0x9c14,	// (0x000354a8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9c14,	// (0x000354a8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9c29,	// (0x000354bd) aid_popup_sp_fs_bg_corner_pane

0xe6ac,	// (0x00039f40) popup_sp_fs_calendar_preview_bg_pane_g1

0xb414,	// (0x00036ca8) popup_sp_fs_calendar_preview_bg_pane

0x9c31,	// (0x000354c5) popup_sp_fs_calendar_preview_list_pane

0xe2a4,	// (0x00039b38) bg_main_sp_fs_cale_pane_ParamLimits

0xe2a4,	// (0x00039b38) bg_main_sp_fs_cale_pane

0x9ca3,	// (0x00035537) listscroll_cale_mrui_pane_ParamLimits

0x9ca3,	// (0x00035537) listscroll_cale_mrui_pane

0x64e3,	// (0x00031d77) listscroll_sp_fs_schedule_track_pane

0x9cb8,	// (0x0003554c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9cb8,	// (0x0003554c) main_sp_fs_ctrlbar_pane_cp01

0x9ccb,	// (0x0003555f) main_sp_fs_ribbon_pane

0x9cd3,	// (0x00035567) popup_sp_fs_cale_preview_window

0x9ce5,	// (0x00035579) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9ce5,	// (0x00035579) list_single_sp_fs_schedule_track_pane

0xcaf1,	// (0x00038385) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcaf1,	// (0x00038385) bg_sp_fs_highlight_list_pane_cp03

0x9cf8,	// (0x0003558c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9cf8,	// (0x0003558c) list_single_sp_fs_schedule_track_pane_g1

0x9d04,	// (0x00035598) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9d04,	// (0x00035598) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003b649) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003b649) list_single_sp_fs_schedule_track_pane_g

0x9d10,	// (0x000355a4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9d10,	// (0x000355a4) list_single_sp_fs_schedule_track_pane_t1

0x9d2a,	// (0x000355be) sp_fs_schedule_track_pane_ParamLimits

0x9d2a,	// (0x000355be) sp_fs_schedule_track_pane

0x9d3b,	// (0x000355cf) sp_fs_schedule_track_pane_g1

0x9d43,	// (0x000355d7) sp_fs_schedule_track_pane_g2

0x9d4b,	// (0x000355df) sp_fs_schedule_track_pane_g3

0x9d53,	// (0x000355e7) sp_fs_schedule_track_pane_g4

0x9d5b,	// (0x000355ef) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003b64e) sp_fs_schedule_track_pane_g

0x638a,	// (0x00031c1e) bg_sp_fs_schedule_viewer_highlight_g1

0xc703,	// (0x00037f97) bg_sp_fs_schedule_viewer_highlight_g2

0x6392,	// (0x00031c26) bg_sp_fs_schedule_viewer_highlight_g3

0x639a,	// (0x00031c2e) bg_sp_fs_schedule_viewer_highlight_g4

0x6cb2,	// (0x00032546) bg_sp_fs_schedule_viewer_highlight_g5

0x63aa,	// (0x00031c3e) bg_sp_fs_schedule_viewer_highlight_g6

0x63b2,	// (0x00031c46) bg_sp_fs_schedule_viewer_highlight_g7

0x63ba,	// (0x00031c4e) bg_sp_fs_schedule_viewer_highlight_g8

0xc6e3,	// (0x00037f77) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003b659) bg_sp_fs_schedule_viewer_highlight_g

0xb414,	// (0x00036ca8) bg_main_sp_fs_ribbon_pane

0x9d63,	// (0x000355f7) main_sp_fs_ribbon_pane_g1

0x9d6c,	// (0x00035600) main_sp_fs_ribbon_pane_t1

0x9d7b,	// (0x0003560f) main_sp_fs_ribbon_pane_t2

0x9d8a,	// (0x0003561e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003b66c) main_sp_fs_ribbon_pane_t

0x9d99,	// (0x0003562d) main_sp_fs_ribbon_scheduler_pane

0x9da1,	// (0x00035635) bg_main_sp_fs_ribbon_pane_g1

0x9daa,	// (0x0003563e) bg_main_sp_fs_ribbon_pane_g2

0x9db3,	// (0x00035647) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003b673) bg_main_sp_fs_ribbon_pane_g

0x9dbb,	// (0x0003564f) main_sp_fs_ribbon_scheduler_pane_g1

0x9dc4,	// (0x00035658) main_sp_fs_ribbon_scheduler_pane_g2

0x9dcd,	// (0x00035661) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003b67a) main_sp_fs_ribbon_scheduler_pane_g

0x9dd6,	// (0x0003566a) list_cale_mrui_pane

0x9de3,	// (0x00035677) sp_fs_scroll_pane_cp07_ParamLimits

0x9de3,	// (0x00035677) sp_fs_scroll_pane_cp07

0x9dff,	// (0x00035693) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9dff,	// (0x00035693) bg_sp_fs_schedule_viewer_highlight

0x9e0f,	// (0x000356a3) list_single_sp_fs_schedule_track_pane_cp01

0x9e17,	// (0x000356ab) list_sp_fs_schedule_track_pane

0x9e1f,	// (0x000356b3) sp_fs_scroll_pane_cp06_ParamLimits

0x9e1f,	// (0x000356b3) sp_fs_scroll_pane_cp06

0xe6ac,	// (0x00039f40) bgmain_sp_fs_calendar_pane_g1

0x9e31,	// (0x000356c5) list_single_cale_mrui_pane_ParamLimits

0x9e31,	// (0x000356c5) list_single_cale_mrui_pane

0x9e52,	// (0x000356e6) list_single_cale_mrui_row_pane_ParamLimits

0x9e52,	// (0x000356e6) list_single_cale_mrui_row_pane

0x9e5f,	// (0x000356f3) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9e5f,	// (0x000356f3) list_single_cale_mrui_row_pane_g1

0x9ea4,	// (0x00035738) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9ea4,	// (0x00035738) list_single_cale_mrui_row_pane_t1

0x9eb6,	// (0x0003574a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9eb6,	// (0x0003574a) list_single_cale_mrui_row_pane_t2

0x9f1e,	// (0x000357b2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9f1e,	// (0x000357b2) list_single_cale_mrui_row_pane_t3

0x9f4d,	// (0x000357e1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9f4d,	// (0x000357e1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003b688) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003b688) list_single_cale_mrui_row_pane_t

0x9f7c,	// (0x00035810) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9f7c,	// (0x00035810) list_single_cmail_header_editor_pane_bg_cp01

0x9fa2,	// (0x00035836) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9fa2,	// (0x00035836) list_single_cmail_header_editor_pane_bg_cp02

0x9fc2,	// (0x00035856) main_radioblah_text_pane_t1_ParamLimits

0x9fc2,	// (0x00035856) main_radioblah_text_pane_t1

0x9fdc,	// (0x00035870) cam6_indi_pane_cp01

0x9fe4,	// (0x00035878) cam6_mode_pane_cp01

0x9fec,	// (0x00035880) cam6_pano_pane

0x9ff5,	// (0x00035889) cam6_zoom_pane_cp01

0x9ffd,	// (0x00035891) cam6_pano_image_pane

0xa008,	// (0x0003589c) cam6_pano_pane_g1

0x8767,	// (0x00033ffb) cam6_pano_pane_g2

0xa011,	// (0x000358a5) cam6_pano_pane_g3

0xa01a,	// (0x000358ae) cam6_pano_pane_g4

0xec84,	// (0x0003a518) cam6_pano_pane_g5

0xa023,	// (0x000358b7) cam6_pano_pane_g6

0xa02d,	// (0x000358c1) cam6_pano_pane_g7

0xa035,	// (0x000358c9) cam6_pano_pane_g8

0xa03e,	// (0x000358d2) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003b691) cam6_pano_pane_g

0xb414,	// (0x00036ca8) main_browser_tag_pane

0x9b20,	// (0x000353b4) grid_navstr_albumart_pane

0xa049,	// (0x000358dd) cell_navstr_albumart_pane_ParamLimits

0xa049,	// (0x000358dd) cell_navstr_albumart_pane

0xa069,	// (0x000358fd) cell_navstr_albumart_pane_g1

0xe0b5,	// (0x00039949) cell_navstr_albumart_pane_g2

0xe0c5,	// (0x00039959) cell_navstr_albumart_pane_g3

0xe0bd,	// (0x00039951) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003b6a4) cell_navstr_albumart_pane_g

0xa071,	// (0x00035905) bt_list_pane_ParamLimits

0xa071,	// (0x00035905) bt_list_pane

0xa085,	// (0x00035919) bt_list_pane_t1

0xa094,	// (0x00035928) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003b6ad) bt_list_pane_t

0xb414,	// (0x00036ca8) main_cale_prevew_pane

0xa0a3,	// (0x00035937) popup_cale_preview_window_ParamLimits

0xa0a3,	// (0x00035937) popup_cale_preview_window

0xcaf1,	// (0x00038385) bg_popup_preview_window_pane_cp05_ParamLimits

0xcaf1,	// (0x00038385) bg_popup_preview_window_pane_cp05

0xa0be,	// (0x00035952) list_cale_preview_pane_ParamLimits

0xa0be,	// (0x00035952) list_cale_preview_pane

0xa0ca,	// (0x0003595e) list_double_cale_preview_pane_ParamLimits

0xa0ca,	// (0x0003595e) list_double_cale_preview_pane

0xa0dc,	// (0x00035970) list_single_cale_preview_pane_ParamLimits

0xa0dc,	// (0x00035970) list_single_cale_preview_pane

0xa0f2,	// (0x00035986) list_single_cale_preview_pane_g1

0xa0fa,	// (0x0003598e) list_single_cale_preview_pane_t1_ParamLimits

0xa0fa,	// (0x0003598e) list_single_cale_preview_pane_t1

0xa10f,	// (0x000359a3) list_double_cale_preview_pane_g1

0xa117,	// (0x000359ab) list_double_cale_preview_pane_t1_ParamLimits

0xa117,	// (0x000359ab) list_double_cale_preview_pane_t1

0xa12c,	// (0x000359c0) list_double_cale_preview_pane_t2_ParamLimits

0xa12c,	// (0x000359c0) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003b6b2) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003b6b2) list_double_cale_preview_pane_t

0xb414,	// (0x00036ca8) main_ezdial_pane

0xcaf1,	// (0x00038385) main_sp_fs_email_pane_ParamLimits

0x916d,	// (0x00034a01) cmail_ddmenu_btn01_pane_ParamLimits

0x916d,	// (0x00034a01) cmail_ddmenu_btn01_pane

0x9180,	// (0x00034a14) cmail_ddmenu_btn02_pane_ParamLimits

0x9180,	// (0x00034a14) cmail_ddmenu_btn02_pane

0x91db,	// (0x00034a6f) cmail_ddmenu_btn03_pane_ParamLimits

0x91db,	// (0x00034a6f) cmail_ddmenu_btn03_pane

0x922e,	// (0x00034ac2) main_sp_fs_ctrlbar_pane_ParamLimits

0x926d,	// (0x00034b01) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x6b78,	// (0x0003240c) list_cmail_body_pane_ParamLimits

0x99ae,	// (0x00035242) bg_button_pane_cp12

0x99dd,	// (0x00035271) list_single_cmail_header_detail_pane_g3_ParamLimits

0x99dd,	// (0x00035271) list_single_cmail_header_detail_pane_g3

0x9a28,	// (0x000352bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9a28,	// (0x000352bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003b635) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003b635) list_single_cmail_header_detail_pane_t

0x9bf7,	// (0x0003548b) phacti_term_pane_t2_ParamLimits

0x9bf7,	// (0x0003548b) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003b63f) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003b63f) phacti_term_pane_t

0xa144,	// (0x000359d8) aid_size_list_single_double

0xa150,	// (0x000359e4) popup_ezdial_listscroll_window

0xa16c,	// (0x00035a00) popup_number_entry_window_cp01

0xce26,	// (0x000386ba) bg_popup_call_pane_cp09

0xa17a,	// (0x00035a0e) ezdial_list_pane

0xa182,	// (0x00035a16) scroll_pane_cp23

0xe2a4,	// (0x00039b38) bg_button_pane_cp028_ParamLimits

0xe2a4,	// (0x00039b38) bg_button_pane_cp028

0xa18a,	// (0x00035a1e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa18a,	// (0x00035a1e) cmail_ddmenu_btn01_pane_g1

0xa196,	// (0x00035a2a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa196,	// (0x00035a2a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003b6b7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003b6b7) cmail_ddmenu_btn01_pane_g

0xa1a2,	// (0x00035a36) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xa1a2,	// (0x00035a36) cmail_ddmenu_btn01_pane_t1

0xe2a4,	// (0x00039b38) bg_button_pane_cp029_ParamLimits

0xe2a4,	// (0x00039b38) bg_button_pane_cp029

0xa1b7,	// (0x00035a4b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa1b7,	// (0x00035a4b) cmail_ddmenu_btn02_pane_g1

0xa1cf,	// (0x00035a63) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa1cf,	// (0x00035a63) cmail_ddmenu_btn02_pane_t1

0xcaf1,	// (0x00038385) bg_button_pane_cp031_ParamLimits

0xcaf1,	// (0x00038385) bg_button_pane_cp031

0xa1b7,	// (0x00035a4b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa1b7,	// (0x00035a4b) cmail_ddmenu_btn03_pane_g1

0xa1cf,	// (0x00035a63) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa1cf,	// (0x00035a63) cmail_ddmenu_btn03_pane_t1

0x613e,	// (0x000319d2) cell_dialer2_keypad_pane_t1_ParamLimits

0x6158,	// (0x000319ec) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6158,	// (0x000319ec) cell_dialer2_keypad_pane_t1_copy1

0x8369,	// (0x00033bfd) ncimui_group_button_pane

0xcaf1,	// (0x00038385) main_sp_fs_calendar_pane_ParamLimits

0x9961,	// (0x000351f5) list_single_cmail_header_caption_pane_ParamLimits

0x9c57,	// (0x000354eb) aid_recal_txt_sm_pane

0xb414,	// (0x00036ca8) mian_recal_day_pane

0x9cd3,	// (0x00035567) popup_sp_fs_cale_preview_window_ParamLimits

0xa1f3,	// (0x00035a87) list_recal_day_pane

0xa235,	// (0x00035ac9) list_single_recal_day_pane_ParamLimits

0xa235,	// (0x00035ac9) list_single_recal_day_pane

0xa247,	// (0x00035adb) list_single_recal_day_pane_g1_ParamLimits

0xa247,	// (0x00035adb) list_single_recal_day_pane_g1

0xa253,	// (0x00035ae7) list_single_recal_day_pane_g2_ParamLimits

0xa253,	// (0x00035ae7) list_single_recal_day_pane_g2

0xa263,	// (0x00035af7) list_single_recal_day_pane_g3_ParamLimits

0xa263,	// (0x00035af7) list_single_recal_day_pane_g3

0xa26f,	// (0x00035b03) list_single_recal_day_pane_g4_ParamLimits

0xa26f,	// (0x00035b03) list_single_recal_day_pane_g4

0xa285,	// (0x00035b19) list_single_recal_day_pane_g5_ParamLimits

0xa285,	// (0x00035b19) list_single_recal_day_pane_g5

0xa29f,	// (0x00035b33) list_single_recal_day_pane_g6_ParamLimits

0xa29f,	// (0x00035b33) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003b6c6) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003b6c6) list_single_recal_day_pane_g

0xa2b3,	// (0x00035b47) list_single_recal_day_pane_t1

0xa2c5,	// (0x00035b59) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003b6d1) list_single_recal_day_pane_t

0xa2d7,	// (0x00035b6b) ncimui_query_button_pane_ParamLimits

0xa2d7,	// (0x00035b6b) ncimui_query_button_pane

0xa2e7,	// (0x00035b7b) ncimui_query_button_pane_t1_ParamLimits

0xa2e7,	// (0x00035b7b) ncimui_query_button_pane_t1

0xa2fa,	// (0x00035b8e) ncimui_query_button_pane_t2_ParamLimits

0xa2fa,	// (0x00035b8e) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003b6d6) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003b6d6) ncimui_query_button_pane_t

0xa30d,	// (0x00035ba1) query_button_pane_ParamLimits

0xa30d,	// (0x00035ba1) query_button_pane

0xb414,	// (0x00036ca8) bg_button_pane_cp0028

0xa320,	// (0x00035bb4) query_button_pane_t1

0x08b6,	// (0x0002c14a) main_tport_pane_ParamLimits

0x97f4,	// (0x00035088) bg_popup_window_pane_cp01_ParamLimits

0x97f4,	// (0x00035088) bg_popup_window_pane_cp01

0x980f,	// (0x000350a3) heading_pane_cp08_ParamLimits

0x980f,	// (0x000350a3) heading_pane_cp08

0x9822,	// (0x000350b6) heading_pane_cp07_ParamLimits

0x9822,	// (0x000350b6) heading_pane_cp07

0x98f2,	// (0x00035186) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003b622) cell_tport_appsw_pane_g

0xcf95,	// (0x00038829) input_candi_list_open_g1

0xc8c6,	// (0x0003815a) list_cale_time_pane_g6_ParamLimits

0xc8c6,	// (0x0003815a) list_cale_time_pane_g6

0x5144,	// (0x000309d8) aid_size_touch_calib_1_ParamLimits

0x5144,	// (0x000309d8) aid_size_touch_calib_1

0x5156,	// (0x000309ea) aid_size_touch_calib_2_ParamLimits

0x5156,	// (0x000309ea) aid_size_touch_calib_2

0x516e,	// (0x00030a02) aid_size_touch_calib_3_ParamLimits

0x516e,	// (0x00030a02) aid_size_touch_calib_3

0x518c,	// (0x00030a20) aid_size_touch_calib_4_ParamLimits

0x518c,	// (0x00030a20) aid_size_touch_calib_4

0x51a4,	// (0x00030a38) main_touch_calib_button_group_pane_ParamLimits

0x51a4,	// (0x00030a38) main_touch_calib_button_group_pane

0x51bc,	// (0x00030a50) main_touch_calib_pane_g1_ParamLimits

0x51ce,	// (0x00030a62) main_touch_calib_pane_g2_ParamLimits

0x51e0,	// (0x00030a74) main_touch_calib_pane_g3_ParamLimits

0x51f2,	// (0x00030a86) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0003aff0) main_touch_calib_pane_g_ParamLimits

0x5204,	// (0x00030a98) main_touch_calib_pane_t1_ParamLimits

0x521e,	// (0x00030ab2) main_touch_calib_pane_t2_ParamLimits

0x5238,	// (0x00030acc) main_touch_calib_pane_t3_ParamLimits

0x524c,	// (0x00030ae0) main_touch_calib_pane_t4_ParamLimits

0x5260,	// (0x00030af4) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0003aff9) main_touch_calib_pane_t_ParamLimits

0xea44,	// (0x0003a2d8) list_single_fp_cale_pane_g3_ParamLimits

0xea44,	// (0x0003a2d8) list_single_fp_cale_pane_g3

0xb484,	// (0x00036d18) bg_button_pane_cp012_ParamLimits

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp03_ParamLimits

0x19af,	// (0x0002d243) cell_vitu2_function_top_pane_g1_ParamLimits

0xb484,	// (0x00036d18) bg_vkb2_func_pane_cp04_ParamLimits

0x82f7,	// (0x00033b8b) main_ncimui_button_group_pane_ParamLimits

0x82f7,	// (0x00033b8b) main_ncimui_button_group_pane

0x8357,	// (0x00033beb) main_ncimui_pane_t3_ParamLimits

0x8357,	// (0x00033beb) main_ncimui_pane_t3

0x9b91,	// (0x00035425) phacti_button_group_pane

0xa144,	// (0x000359d8) aid_size_list_single_double_ParamLimits

0xa150,	// (0x000359e4) popup_ezdial_listscroll_window_ParamLimits

0xa16c,	// (0x00035a00) popup_number_entry_window_cp01_ParamLimits

0xa32e,	// (0x00035bc2) phacti_button_pane_ParamLimits

0xa32e,	// (0x00035bc2) phacti_button_pane

0xb414,	// (0x00036ca8) bg_button_pane_cp14

0xa33f,	// (0x00035bd3) phacti_button_pane_t1

0xa34d,	// (0x00035be1) main_touch_calib_button_pane_ParamLimits

0xa34d,	// (0x00035be1) main_touch_calib_button_pane

0xc2e2,	// (0x00037b76) bg_button_pane_cp18_ParamLimits

0xc2e2,	// (0x00037b76) bg_button_pane_cp18

0xa362,	// (0x00035bf6) main_touch_calib_button_pane_t1_ParamLimits

0xa362,	// (0x00035bf6) main_touch_calib_button_pane_t1

0xa378,	// (0x00035c0c) main_touch_calib_button_pane_t2_ParamLimits

0xa378,	// (0x00035c0c) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003b6db) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003b6db) main_touch_calib_button_pane_t

0xb414,	// (0x00036ca8) cell_ncimui_button_pane

0xb414,	// (0x00036ca8) bg_button_pane_cp032

0xa396,	// (0x00035c2a) cell_ncimui_button_pane_t1

0xbd49,	// (0x000375dd) image3_infobar_pane_ParamLimits

0xbd49,	// (0x000375dd) image3_infobar_pane

0x8a97,	// (0x0003432b) fs_bigclock_status_pane_ParamLimits

0x8a97,	// (0x0003432b) fs_bigclock_status_pane

0x8aa4,	// (0x00034338) main_fs_bigclock_clock_pane_ParamLimits

0x8aa4,	// (0x00034338) main_fs_bigclock_clock_pane

0x8ac0,	// (0x00034354) main_fs_bigclock_indi_pane_ParamLimits

0x8ac0,	// (0x00034354) main_fs_bigclock_indi_pane

0x8ad9,	// (0x0003436d) main_fs_bigclock_swipe_pane_ParamLimits

0x8ad9,	// (0x0003436d) main_fs_bigclock_swipe_pane

0xb414,	// (0x00036ca8) main_fs_clock_dumped_data

0x8afd,	// (0x00034391) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8afd,	// (0x00034391) list_single_fs_bigclock_indicator_pane_g1

0x8b17,	// (0x000343ab) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8b17,	// (0x000343ab) list_single_fs_bigclock_indicator_pane_g2

0x8b31,	// (0x000343c5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8b31,	// (0x000343c5) list_single_fs_bigclock_indicator_pane_g3

0x8b4b,	// (0x000343df) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8b4b,	// (0x000343df) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0003b50e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0003b50e) list_single_fs_bigclock_indicator_pane_g

0x8b74,	// (0x00034408) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8b74,	// (0x00034408) list_single_fs_bigclock_indicator_pane_t1

0x8b9c,	// (0x00034430) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8b9c,	// (0x00034430) list_single_fs_bigclock_indicator_pane_t2

0x8bc4,	// (0x00034458) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8bc4,	// (0x00034458) list_single_fs_bigclock_indicator_pane_t3

0x8bec,	// (0x00034480) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8bec,	// (0x00034480) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0003b519) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0003b519) list_single_fs_bigclock_indicator_pane_t

0xa3a4,	// (0x00035c38) image3_infobar_fav_pane_ParamLimits

0xa3a4,	// (0x00035c38) image3_infobar_fav_pane

0xa3b4,	// (0x00035c48) image3_infobar_loc_pane_ParamLimits

0xa3b4,	// (0x00035c48) image3_infobar_loc_pane

0xa3c8,	// (0x00035c5c) image3_infobar_time_pane_ParamLimits

0xa3c8,	// (0x00035c5c) image3_infobar_time_pane

0xe6ac,	// (0x00039f40) image3_infobar_time_pane_g1

0xa3d8,	// (0x00035c6c) image3_infobar_time_pane_t1

0xe6ac,	// (0x00039f40) image3_infobar_loc_pane_g1

0xa3e6,	// (0x00035c7a) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003b6e0) image3_infobar_loc_pane_g

0xa3ee,	// (0x00035c82) image3_infobar_loc_pane_t1

0xe6ac,	// (0x00039f40) image3_infobar_fav_pane_g1

0xa3fc,	// (0x00035c90) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003b6e5) image3_infobar_fav_pane_g

0xa404,	// (0x00035c98) fs_bigclock_status_battery_pane

0xa40d,	// (0x00035ca1) fs_bigclock_status_signal_pane

0xa416,	// (0x00035caa) fs_bigclock_status_title_pane

0xa41f,	// (0x00035cb3) fs_bigclock_status_signal_pane_g1

0xa428,	// (0x00035cbc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003b6ea) fs_bigclock_status_signal_pane_g

0xa430,	// (0x00035cc4) fs_bigclock_status_battery_pane_g1

0xa439,	// (0x00035ccd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003b6ef) fs_bigclock_status_battery_pane_g

0xa441,	// (0x00035cd5) fs_bigclock_status_title_pane_t1

0xe6ac,	// (0x00039f40) main_fs_bigclock_clock_pane_g1

0xa44f,	// (0x00035ce3) main_fs_bigclock_clock_pane_g2

0xa44f,	// (0x00035ce3) main_fs_bigclock_clock_pane_g3

0xa44f,	// (0x00035ce3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003b6f4) main_fs_bigclock_clock_pane_g

0xa457,	// (0x00035ceb) main_fs_bigclock_clock_pane_t1

0xa465,	// (0x00035cf9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003b6fd) main_fs_bigclock_clock_pane_t

0xa474,	// (0x00035d08) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa474,	// (0x00035d08) list_single_fs_bigclock_indicator_pane

0xa485,	// (0x00035d19) list_single_fs_bigclock_pane_ParamLimits

0xa485,	// (0x00035d19) list_single_fs_bigclock_pane

0xa4f1,	// (0x00035d85) main_fs_bigclock_indicator_pane_t1

0xa500,	// (0x00035d94) list_single_fs_bigclock_pane_g1

0xa508,	// (0x00035d9c) list_single_fs_bigclock_pane_t1

0xe6ac,	// (0x00039f40) main_fs_bigclock_swipe_pane_g1

0xa54b,	// (0x00035ddf) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003b70e) main_fs_bigclock_swipe_pane_g

0xa553,	// (0x00035de7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa553,	// (0x00035de7) main_fs_bigclock_swipe_pane_t1

0x3976,	// (0x0002f20a) call_type_pane_ParamLimits

0xb414,	// (0x00036ca8) main_btmg_pane

0x9e8b,	// (0x0003571f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9e8b,	// (0x0003571f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003b681) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003b681) list_single_cale_mrui_row_pane_g

0xa21c,	// (0x00035ab0) list_recal_vselct_arw_lo_pane

0xa224,	// (0x00035ab8) list_recal_vselct_arw_up_pane

0xa22c,	// (0x00035ac0) list_recal_vselct_pane

0xa570,	// (0x00035e04) btmg_button_pane

0xa57a,	// (0x00035e0e) main_btmg_pane_g1

0xb414,	// (0x00036ca8) bg_button_pane_cp044

0xa584,	// (0x00035e18) btmg_button_pane_t1

0xe290,	// (0x00039b24) aid_listscroll_gen

0xcaf1,	// (0x00038385) main_cntbar_detail_pane

0x9951,	// (0x000351e5) list_cmail_folder_pane

0x389b,	// (0x0002f12f) sp_fs_scroll_pane_cp03_ParamLimits

0x9961,	// (0x000351f5) list_single_fs_dyc_pane_cp01_ParamLimits

0x9961,	// (0x000351f5) list_single_fs_dyc_pane_cp01

0xa592,	// (0x00035e26) aid_size_cmail_indent

0xa59b,	// (0x00035e2f) list_single_dyc_row_pane_cp01

0xa5d6,	// (0x00035e6a) cntbar_detail_list_pane_ParamLimits

0xa5d6,	// (0x00035e6a) cntbar_detail_list_pane

0xa622,	// (0x00035eb6) main_cntbar_detail_cont_pane_ParamLimits

0xa622,	// (0x00035eb6) main_cntbar_detail_cont_pane

0x389b,	// (0x0002f12f) scroll_pane_cp032_ParamLimits

0x389b,	// (0x0002f12f) scroll_pane_cp032

0xa636,	// (0x00035eca) cntbar_detail_list_event_pane_ParamLimits

0xa636,	// (0x00035eca) cntbar_detail_list_event_pane

0xa5e6,	// (0x00035e7a) cntbar_detail_list_shct_pane

0xc751,	// (0x00037fe5) aid_list_gen

0xa646,	// (0x00035eda) aid_scroll

0xa64f,	// (0x00035ee3) aid_size_touch_scroll_bar

0x75ba,	// (0x00032e4e) aid_list_double

0x75a8,	// (0x00032e3c) aid_list_single

0x75a8,	// (0x00032e3c) aid_list_single_lg

0xa658,	// (0x00035eec) aid_list_z_g_a_sm

0xa660,	// (0x00035ef4) aid_list_z_g_d

0xa668,	// (0x00035efc) aid_txt_z_prm

0xa676,	// (0x00035f0a) aid_txt_z_prm_cp01

0xa684,	// (0x00035f18) aid_txt_z_sec

0xa692,	// (0x00035f26) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa692,	// (0x00035f26) main_cntbar_detail_cont_pane_g1

0xa6a6,	// (0x00035f3a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa6a6,	// (0x00035f3a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003b713) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003b713) main_cntbar_detail_cont_pane_g

0xa6b6,	// (0x00035f4a) main_cntbar_detail_cont_pane_t1

0xa6c4,	// (0x00035f58) main_cntbar_detail_cont_pane_t2

0xa6d2,	// (0x00035f66) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003b718) main_cntbar_detail_cont_pane_t

0xa6e0,	// (0x00035f74) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa6e0,	// (0x00035f74) cell_cntbar_detail_list_shct_pane

0xa6f4,	// (0x00035f88) cntbar_detail_list_shct_pane_g1

0xa6fd,	// (0x00035f91) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003b71f) cntbar_detail_list_shct_pane_g

0xa706,	// (0x00035f9a) cntbar_detail_list_event_pane_g1_ParamLimits

0xa706,	// (0x00035f9a) cntbar_detail_list_event_pane_g1

0xa712,	// (0x00035fa6) cntbar_detail_list_event_pane_g2_ParamLimits

0xa712,	// (0x00035fa6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003b724) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003b724) cntbar_detail_list_event_pane_g

0xa77e,	// (0x00036012) cntbar_detail_list_event_pane_t1_ParamLimits

0xa77e,	// (0x00036012) cntbar_detail_list_event_pane_t1

0xa793,	// (0x00036027) cntbar_detail_list_event_pane_t2_ParamLimits

0xa793,	// (0x00036027) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003b731) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003b731) cntbar_detail_list_event_pane_t

0xe6ac,	// (0x00039f40) cell_cntbar_detail_list_shct_pane_g1

0x3cde,	// (0x0002f572) navi_pane_mv_g3

0xcaf1,	// (0x00038385) main_cntbar_detail_pane_ParamLimits

0xb414,	// (0x00036ca8) main_notif_wgt_pane

0xbb5f,	// (0x000373f3) aid_tch_main_mp4_pane_g4

0xbd41,	// (0x000375d5) popup_slider_window_cp02

0xa212,	// (0x00035aa6) list_recal_day_event_pane

0xa5a4,	// (0x00035e38) cntbar_detail_btn_pane_ParamLimits

0xa5a4,	// (0x00035e38) cntbar_detail_btn_pane

0xa5bd,	// (0x00035e51) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5bd,	// (0x00035e51) cntbar_detail_btn_pane_cp01

0xa5e6,	// (0x00035e7a) cntbar_detail_list_shct_pane_ParamLimits

0xa5f6,	// (0x00035e8a) cntbar_detail_pane_g1_ParamLimits

0xa5f6,	// (0x00035e8a) cntbar_detail_pane_g1

0xa606,	// (0x00035e9a) cntbar_detail_pane_t1_ParamLimits

0xa606,	// (0x00035e9a) cntbar_detail_pane_t1

0xa71e,	// (0x00035fb2) cntbar_detail_list_event_pane_g3_ParamLimits

0xa71e,	// (0x00035fb2) cntbar_detail_list_event_pane_g3

0xa736,	// (0x00035fca) cntbar_detail_list_event_pane_g4_ParamLimits

0xa736,	// (0x00035fca) cntbar_detail_list_event_pane_g4

0xa74e,	// (0x00035fe2) cntbar_detail_list_event_pane_g5_ParamLimits

0xa74e,	// (0x00035fe2) cntbar_detail_list_event_pane_g5

0xa766,	// (0x00035ffa) cntbar_detail_list_event_pane_g6_ParamLimits

0xa766,	// (0x00035ffa) cntbar_detail_list_event_pane_g6

0xa7a8,	// (0x0003603c) cntbar_detail_list_event_pane_t3_ParamLimits

0xa7a8,	// (0x0003603c) cntbar_detail_list_event_pane_t3

0xa7ba,	// (0x0003604e) popup_notif_wgt_window_ParamLimits

0xa7ba,	// (0x0003604e) popup_notif_wgt_window

0xa7d3,	// (0x00036067) popup_submenu_window_cp01_ParamLimits

0xa7d3,	// (0x00036067) popup_submenu_window_cp01

0xce26,	// (0x000386ba) bg_popup_window_pane_cp10

0xa7e9,	// (0x0003607d) listscroll_notif_wgt_pane

0xa7fb,	// (0x0003608f) list_notif_wgt_window

0xa804,	// (0x00036098) scroll_pane_cp033

0xa2d7,	// (0x00035b6b) list_notif_wgt_row_pane_ParamLimits

0xa2d7,	// (0x00035b6b) list_notif_wgt_row_pane

0xa80d,	// (0x000360a1) aid_size_list_notif_wgt_del

0xa81a,	// (0x000360ae) list_notif_wgt_row_pane_g1

0xa826,	// (0x000360ba) list_notif_wgt_row_pane_g2

0xa832,	// (0x000360c6) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003b738) list_notif_wgt_row_pane_g

0xa83f,	// (0x000360d3) list_notif_wgt_row_pane_t1

0xa854,	// (0x000360e8) list_notif_wgt_row_pane_t2

0xa866,	// (0x000360fa) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003b73f) list_notif_wgt_row_pane_t

0x6d19,	// (0x000325ad) list_recal_day_event_pane_g1

0xa878,	// (0x0003610c) list_recal_day_event_pane_t1

0xb414,	// (0x00036ca8) bg_button_pane_cp045

0xa887,	// (0x0003611b) cntbar_detail_btn_pane_t1

0xe2a4,	// (0x00039b38) main_callh_pane_ParamLimits

0xe2a4,	// (0x00039b38) main_callh_pane

0xb414,	// (0x00036ca8) main_coverflow0_pane

0xb414,	// (0x00036ca8) main_wgtman_pane

0x8ae7,	// (0x0003437b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8ae7,	// (0x0003437b) main_fs_bigclock_unlock_btn_pane

0x98ea,	// (0x0003517e) bg_button_pane_cp16

0x98fa,	// (0x0003518e) cell_tport_appsw_pane_g3

0xa895,	// (0x00036129) cf0_flow_pane_ParamLimits

0xa895,	// (0x00036129) cf0_flow_pane

0xa8aa,	// (0x0003613e) listscroll_cf0_pane

0xa8b5,	// (0x00036149) main_cf0_pane_g1

0xa8c7,	// (0x0003615b) main_cf0_pane_t1_ParamLimits

0xa8c7,	// (0x0003615b) main_cf0_pane_t1

0xa8de,	// (0x00036172) main_cf0_pane_t2_ParamLimits

0xa8de,	// (0x00036172) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003b74b) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003b74b) main_cf0_pane_t

0xa8f5,	// (0x00036189) scroll_pane_cp11

0xa900,	// (0x00036194) cf0_flow_pane_g1

0xa908,	// (0x0003619c) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003b750) cf0_flow_pane_g

0xa910,	// (0x000361a4) cf0_flow_pane_t1

0xb414,	// (0x00036ca8) main_call6_pane

0xb414,	// (0x00036ca8) main_calllock_pane

0xa91e,	// (0x000361b2) call6_btn_grp_pane_ParamLimits

0xa91e,	// (0x000361b2) call6_btn_grp_pane

0xa938,	// (0x000361cc) call6_pane_g1_ParamLimits

0xa938,	// (0x000361cc) call6_pane_g1

0xa94d,	// (0x000361e1) popup_call6_1st_window_ParamLimits

0xa94d,	// (0x000361e1) popup_call6_1st_window

0xa95e,	// (0x000361f2) popup_call6_2nd_window_ParamLimits

0xa95e,	// (0x000361f2) popup_call6_2nd_window

0xa96f,	// (0x00036203) cell_call6_btn_pane_ParamLimits

0xa96f,	// (0x00036203) cell_call6_btn_pane

0xce26,	// (0x000386ba) bg_popup_call2_in_pane_cp03

0xa983,	// (0x00036217) popup_call6_1st_window_g1

0xa98b,	// (0x0003621f) popup_call6_1st_window_g2

0xa993,	// (0x00036227) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003b755) popup_call6_1st_window_g

0xa99b,	// (0x0003622f) popup_call6_1st_window_t1

0xa9aa,	// (0x0003623e) popup_call6_1st_window_t2

0xa9ba,	// (0x0003624e) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003b75c) popup_call6_1st_window_t

0xce26,	// (0x000386ba) bg_popup_call2_in_pane_cp04

0xa983,	// (0x00036217) popup_call6_2nd_window_g1

0xa98b,	// (0x0003621f) popup_call6_2nd_window_g2

0xa993,	// (0x00036227) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003b755) popup_call6_2nd_window_g

0xa99b,	// (0x0003622f) popup_call6_2nd_window_t1

0xb414,	// (0x00036ca8) bg_button_pane_cp15

0xa9ca,	// (0x0003625e) cell_call6_btn_pane_g1

0xa9d3,	// (0x00036267) cell_call6_btn_pane_t1

0xa9e2,	// (0x00036276) listscroll_wgtman_pane_ParamLimits

0xa9e2,	// (0x00036276) listscroll_wgtman_pane

0xaa05,	// (0x00036299) wgtman_btn_pane_ParamLimits

0xaa05,	// (0x00036299) wgtman_btn_pane

0xccdd,	// (0x00038571) aid_scroll_copy1

0xaa48,	// (0x000362dc) list_wgtman_pane

0xaa52,	// (0x000362e6) wgtman_btn_pane_g1_ParamLimits

0xaa52,	// (0x000362e6) wgtman_btn_pane_g1

0xaa7e,	// (0x00036312) wgtman_btn_pane_t1_ParamLimits

0xaa7e,	// (0x00036312) wgtman_btn_pane_t1

0xaabb,	// (0x0003634f) wgtman_btn_pane_t2_ParamLimits

0xaabb,	// (0x0003634f) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003b763) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003b763) wgtman_btn_pane_t

0xaad2,	// (0x00036366) listrow_wgtman_pane_ParamLimits

0xaad2,	// (0x00036366) listrow_wgtman_pane

0xaae4,	// (0x00036378) listrow_wgtman_pane_g1

0xaaf1,	// (0x00036385) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003b768) listrow_wgtman_pane_g

0xab0f,	// (0x000363a3) listrow_wgtman_pane_t1

0xab27,	// (0x000363bb) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003b76d) listrow_wgtman_pane_t

0xab4d,	// (0x000363e1) wait_bar_pane_cp09

0xab5f,	// (0x000363f3) main_calllock_btn_pane

0xab69,	// (0x000363fd) main_calllock_pane_g1

0xb414,	// (0x00036ca8) bg_button_pane_cp17

0xab75,	// (0x00036409) main_calllock_btn_pane_g1

0xab7e,	// (0x00036412) main_calllock_btn_pane_t1

0xb414,	// (0x00036ca8) main_dialer3_pane

0xb414,	// (0x00036ca8) main_fmrd2_pane

0xe6ac,	// (0x00039f40) main_fs_bigclock_unlock_btn_pane_g1

0xab95,	// (0x00036429) main_fs_bigclock_unlock_btn_pane_t1

0xaba3,	// (0x00036437) area_fmrd2_info_pane_ParamLimits

0xaba3,	// (0x00036437) area_fmrd2_info_pane

0xabb4,	// (0x00036448) area_fmrd2_visual_pane_ParamLimits

0xabb4,	// (0x00036448) area_fmrd2_visual_pane

0xabc2,	// (0x00036456) fmrd2_indi_pane_ParamLimits

0xabc2,	// (0x00036456) fmrd2_indi_pane

0xabcf,	// (0x00036463) area_fmrd2_visual_pane_g1

0xabd7,	// (0x0003646b) area_fmrd2_visual_pane_t1

0xabe7,	// (0x0003647b) area_fmrd2_visual_pane_t2

0xabf7,	// (0x0003648b) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003b777) area_fmrd2_visual_pane_t

0xac07,	// (0x0003649b) area_fmrd2_info_pane_g1

0xac0f,	// (0x000364a3) area_fmrd2_info_pane_t1

0xac1f,	// (0x000364b3) area_fmrd2_info_pane_t2

0xac2f,	// (0x000364c3) area_fmrd2_info_pane_t3

0xac3f,	// (0x000364d3) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003b77e) area_fmrd2_info_pane_t

0xac4d,	// (0x000364e1) fmrd2_indi_pane_t1

0xac5d,	// (0x000364f1) fmrd2_indi_pane_t2

0xac6d,	// (0x00036501) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003b787) fmrd2_indi_pane_t

0x8b5a,	// (0x000343ee) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8b5a,	// (0x000343ee) list_single_fs_bigclock_indicator_pane_g5

0x8c01,	// (0x00034495) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8c01,	// (0x00034495) list_single_fs_bigclock_indicator_pane_t5

0x9c39,	// (0x000354cd) aid_cell_bcale_month_pane_ParamLimits

0x9c39,	// (0x000354cd) aid_cell_bcale_month_pane

0x9c60,	// (0x000354f4) bcale_month_pane_ParamLimits

0x9c60,	// (0x000354f4) bcale_month_pane

0x9c84,	// (0x00035518) bcale_preview_pane_ParamLimits

0x9c84,	// (0x00035518) bcale_preview_pane

0xa508,	// (0x00035d9c) list_single_fs_bigclock_pane_t1_ParamLimits

0xa527,	// (0x00035dbb) list_single_fs_bigclock_pane_t2_ParamLimits

0xa527,	// (0x00035dbb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003b709) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003b709) list_single_fs_bigclock_pane_t

0xab8d,	// (0x00036421) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003b772) main_fs_bigclock_unlock_btn_pane_g

0xac7d,	// (0x00036511) aid_dia3_key_size_ParamLimits

0xac7d,	// (0x00036511) aid_dia3_key_size

0xac8c,	// (0x00036520) aid_dia3_listrow_size_ParamLimits

0xac8c,	// (0x00036520) aid_dia3_listrow_size

0xaca1,	// (0x00036535) dia3_keypad_fun_pane_ParamLimits

0xaca1,	// (0x00036535) dia3_keypad_fun_pane

0xacbd,	// (0x00036551) dia3_keypad_num_pane_ParamLimits

0xacbd,	// (0x00036551) dia3_keypad_num_pane

0xacd8,	// (0x0003656c) dia3_listscroll_pane_ParamLimits

0xacd8,	// (0x0003656c) dia3_listscroll_pane

0xaceb,	// (0x0003657f) dia3_numentry_pane_ParamLimits

0xaceb,	// (0x0003657f) dia3_numentry_pane

0xacff,	// (0x00036593) dia3_list_pane

0xad0a,	// (0x0003659e) scroll_pane_cp12

0xb414,	// (0x00036ca8) bg_dia3_numentry_pane

0xad15,	// (0x000365a9) dia3_numentry_pane_t1

0xad24,	// (0x000365b8) cell_dia3_key_num_pane

0xad2c,	// (0x000365c0) cell_dia3_key0_fun_pane_ParamLimits

0xad2c,	// (0x000365c0) cell_dia3_key0_fun_pane

0xad40,	// (0x000365d4) cell_dia3_key1_fun_pane_ParamLimits

0xad40,	// (0x000365d4) cell_dia3_key1_fun_pane

0xad58,	// (0x000365ec) dia3_listrow_pane

0x8572,	// (0x00033e06) bg_dia3_numentry_pane_g1

0xb414,	// (0x00036ca8) bg_button_pane_cp21

0xad6a,	// (0x000365fe) cell_dia3_key_num_pane_t1

0xad78,	// (0x0003660c) cell_dia3_key_num_pane_t2

0xad87,	// (0x0003661b) cell_dia3_key_num_pane_t3

0xad96,	// (0x0003662a) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003b78e) cell_dia3_key_num_pane_t

0xb414,	// (0x00036ca8) bg_button_pane_cp19

0xada5,	// (0x00036639) cell_dia3_key0_fun_pane_g1

0xb414,	// (0x00036ca8) bg_button_pane_cp20

0xadad,	// (0x00036641) cell_dia3_key1_fun_pane_g1

0xadb5,	// (0x00036649) area_left_week_number_pane

0xadc1,	// (0x00036655) area_top_day_name_pane

0xadd4,	// (0x00036668) frame_month_view_pane

0xade7,	// (0x0003667b) grid_month_view_pane

0xadf5,	// (0x00036689) cell_top_day_name_pane_ParamLimits

0xadf5,	// (0x00036689) cell_top_day_name_pane

0xae22,	// (0x000366b6) cell_area_left_week_number_pane_ParamLimits

0xae22,	// (0x000366b6) cell_area_left_week_number_pane

0xae36,	// (0x000366ca) cell_month_view_pane_ParamLimits

0xae36,	// (0x000366ca) cell_month_view_pane

0xae63,	// (0x000366f7) frm_month_g1

0xae70,	// (0x00036704) frm_month_g2

0xae83,	// (0x00036717) frm_month_g3

0xae96,	// (0x0003672a) frm_month_g4

0xaea9,	// (0x0003673d) frm_month_g5

0xaebc,	// (0x00036750) frm_month_g6

0xaecf,	// (0x00036763) frm_month_g7

0xaee2,	// (0x00036776) frm_month_g8

0xaeef,	// (0x00036783) frm_month_g9

0xaeff,	// (0x00036793) frm_month_g10

0xaf0f,	// (0x000367a3) frm_month_g11

0xaf1f,	// (0x000367b3) frm_month_g12

0xaf31,	// (0x000367c5) frm_month_g13

0xaf43,	// (0x000367d7) frm_month_g14

0xaf57,	// (0x000367eb) frm_month_g15

0xaf6b,	// (0x000367ff) frm_month_g16

0x000f,

0xff03,	// (0x0003b797) frm_month_g

0xaf7f,	// (0x00036813) cell_top_day_name_pane_t1

0xaf92,	// (0x00036826) cell_area_left_week_number_pane_g1

0xaf9e,	// (0x00036832) cell_area_left_week_number_pane_t1

0xe918,	// (0x0003a1ac) cell_month_view_pane_g1

0xafb1,	// (0x00036845) cell_month_view_pane_t1

0xb414,	// (0x00036ca8) main_fps_pane

0x91a3,	// (0x00034a37) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x91a3,	// (0x00034a37) cmail_ddmenu_btn02_pane_cp1

0x91bf,	// (0x00034a53) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x91bf,	// (0x00034a53) cmail_ddmenu_btn02_pane_cp2

0xa1c3,	// (0x00035a57) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa1c3,	// (0x00035a57) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003b6bc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003b6bc) cmail_ddmenu_btn02_pane_g

0xa1e1,	// (0x00035a75) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa1e1,	// (0x00035a75) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003b6c1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003b6c1) cmail_ddmenu_btn02_pane_t

0xafc4,	// (0x00036858) fps_text_pane_ParamLimits

0xafc4,	// (0x00036858) fps_text_pane

0xafdb,	// (0x0003686f) main_fps_pane_g1_ParamLimits

0xafdb,	// (0x0003686f) main_fps_pane_g1

0xaff5,	// (0x00036889) wait_bar_pane_cp010_ParamLimits

0xaff5,	// (0x00036889) wait_bar_pane_cp010

0xb006,	// (0x0003689a) fps_text_pane_t1_ParamLimits

0xb006,	// (0x0003689a) fps_text_pane_t1

0x62a7,	// (0x00031b3b) cam4_image_uncrop_pane_g1

0x62b0,	// (0x00031b44) cam4_image_uncrop_pane_g2

0x62b9,	// (0x00031b4d) cam4_image_uncrop_pane_g3

0x62c2,	// (0x00031b56) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0003b188) cam4_image_uncrop_pane_g

0xad58,	// (0x000365ec) dia3_listrow_pane_ParamLimits

0xb414,	// (0x00036ca8) main_phob2_pane

0x9892,	// (0x00035126) cell_tport_appsw_pane_cp02_ParamLimits

0x9892,	// (0x00035126) cell_tport_appsw_pane_cp02

0x98a6,	// (0x0003513a) cell_tport_appsw_pane_cp03_ParamLimits

0x98a6,	// (0x0003513a) cell_tport_appsw_pane_cp03

0xb414,	// (0x00036ca8) phob2_contact_card_pane

0xb414,	// (0x00036ca8) phob2_listscroll_pane

0xb01e,	// (0x000368b2) phob2_list_pane

0xb026,	// (0x000368ba) scroll_pane_cp034

0xb02e,	// (0x000368c2) phob2_cc_data_pane_ParamLimits

0xb02e,	// (0x000368c2) phob2_cc_data_pane

0xb04d,	// (0x000368e1) phob2_cc_listscroll_pane_ParamLimits

0xb04d,	// (0x000368e1) phob2_cc_listscroll_pane

0xb06b,	// (0x000368ff) list_double_large_graphic_phob2_pane_ParamLimits

0xb06b,	// (0x000368ff) list_double_large_graphic_phob2_pane

0xb07d,	// (0x00036911) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb07d,	// (0x00036911) list_double_large_graphic_phob2_pane_g1

0xb093,	// (0x00036927) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb093,	// (0x00036927) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003b7b8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003b7b8) list_double_large_graphic_phob2_pane_g

0xb09f,	// (0x00036933) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb09f,	// (0x00036933) list_double_large_graphic_phob2_pane_t1

0xb0b4,	// (0x00036948) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb0b4,	// (0x00036948) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003b7bd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003b7bd) list_double_large_graphic_phob2_pane_t

0xb414,	// (0x00036ca8) list_highlight_pane_cp024

0xb0c6,	// (0x0003695a) phob2_cc_button_pane

0xb0ce,	// (0x00036962) phob2_cc_data_pane_g1_ParamLimits

0xb0ce,	// (0x00036962) phob2_cc_data_pane_g1

0xb0e3,	// (0x00036977) phob2_cc_data_pane_g2_ParamLimits

0xb0e3,	// (0x00036977) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003b7c2) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003b7c2) phob2_cc_data_pane_g

0xb0f5,	// (0x00036989) phob2_cc_data_pane_t1_ParamLimits

0xb0f5,	// (0x00036989) phob2_cc_data_pane_t1

0xb10d,	// (0x000369a1) phob2_cc_data_pane_t2_ParamLimits

0xb10d,	// (0x000369a1) phob2_cc_data_pane_t2

0xb125,	// (0x000369b9) phob2_cc_data_pane_t3_ParamLimits

0xb125,	// (0x000369b9) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003b7c7) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003b7c7) phob2_cc_data_pane_t

0xb13d,	// (0x000369d1) phob2_cc_list_pane_ParamLimits

0xb13d,	// (0x000369d1) phob2_cc_list_pane

0x7059,	// (0x000328ed) scroll_pane_cp035_ParamLimits

0x7059,	// (0x000328ed) scroll_pane_cp035

0xcaf1,	// (0x00038385) bg_button_pane_cp033

0xb149,	// (0x000369dd) phob2_cc_button_pane_g1

0xb155,	// (0x000369e9) phob2_cc_button_pane_t1

0xb16a,	// (0x000369fe) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003b7ce) phob2_cc_button_pane_t

0xb17c,	// (0x00036a10) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb17c,	// (0x00036a10) list_double_large_graphic_phob2_cc_pane

0xb18e,	// (0x00036a22) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb18e,	// (0x00036a22) list_double_large_graphic_phob2_cc_pane_g1

0xb19a,	// (0x00036a2e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb19a,	// (0x00036a2e) list_double_large_graphic_phob2_cc_pane_g2

0xb1a6,	// (0x00036a3a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb1a6,	// (0x00036a3a) list_double_large_graphic_phob2_cc_pane_g3

0xb1b2,	// (0x00036a46) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb1b2,	// (0x00036a46) list_double_large_graphic_phob2_cc_pane_g4

0xb1be,	// (0x00036a52) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb1be,	// (0x00036a52) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003b7d3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003b7d3) list_double_large_graphic_phob2_cc_pane_g

0xb1ca,	// (0x00036a5e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb1ca,	// (0x00036a5e) list_double_large_graphic_phob2_cc_pane_t1

0xb1f3,	// (0x00036a87) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb1f3,	// (0x00036a87) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003b7de) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003b7de) list_double_large_graphic_phob2_cc_pane_t

0xb21c,	// (0x00036ab0) list_highlight_pane_cp025_ParamLimits

0xb21c,	// (0x00036ab0) list_highlight_pane_cp025

0xcaf1,	// (0x00038385) bg_button_pane_cp033_ParamLimits

0xb149,	// (0x000369dd) phob2_cc_button_pane_g1_ParamLimits

0xb155,	// (0x000369e9) phob2_cc_button_pane_t1_ParamLimits

0xb16a,	// (0x000369fe) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003b7ce) phob2_cc_button_pane_t_ParamLimits

0x1b1c,	// (0x0002d3b0) popup_wgtman_window

0x67b5,	// (0x00032049) scroll_pane_cp038

0xaa2a,	// (0x000362be) wgtman_btn_pane_cp_01_ParamLimits

0xaa2a,	// (0x000362be) wgtman_btn_pane_cp_01

0xb22a,	// (0x00036abe) wgtman_content_pane

0xb233,	// (0x00036ac7) wgtman_heading_pane

0xb414,	// (0x00036ca8) bg_heading_pane_cp02

0xb23c,	// (0x00036ad0) wgtman_heading_pane_g1

0xb244,	// (0x00036ad8) wgtman_heading_pane_t1

0xb252,	// (0x00036ae6) scroll_pane_cp036

0xb25a,	// (0x00036aee) wgtman_list_pane

0xb262,	// (0x00036af6) wgtman_list_pane_t1_ParamLimits

0xb262,	// (0x00036af6) wgtman_list_pane_t1

0xbd9b,	// (0x0003762f) cam4_grid_pane

0x6dd7,	// (0x0003266b) bg_button_pane_cp015_ParamLimits

0x6de9,	// (0x0003267d) bg_button_pane_cp016_ParamLimits

0x6dfc,	// (0x00032690) bg_button_pane_cp017_ParamLimits

0x6e60,	// (0x000326f4) popup_vitu2_query_window_g3_ParamLimits

0x6e60,	// (0x000326f4) popup_vitu2_query_window_g3

0x6f1d,	// (0x000327b1) popup_vitu2_query_window_t6_ParamLimits

0x6f1d,	// (0x000327b1) popup_vitu2_query_window_t6

0x6f48,	// (0x000327dc) popup_vitu2_query_window_t7_ParamLimits

0x6f48,	// (0x000327dc) popup_vitu2_query_window_t7

0x62a7,	// (0x00031b3b) cam4_grid_pane_g1

0x62b0,	// (0x00031b44) cam4_grid_pane_g2

0xb27c,	// (0x00036b10) cam4_grid_pane_g3

0xb285,	// (0x00036b19) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003b7e3) cam4_grid_pane_g

0x2834,	// (0x0002e0c8) aid_placing_vt_slider_lsc_ParamLimits

0x2b3f,	// (0x0002e3d3) vidtel_button_pane_ParamLimits

0x2b3f,	// (0x0002e3d3) vidtel_button_pane

0xb290,	// (0x00036b24) bg_button_pane_cp034

0xb29a,	// (0x00036b2e) vidtel_button_pane_g1

0xb2a2,	// (0x00036b36) vidtel_button_pane_t1

0x6ba1,	// (0x00032435) aid_size_vtel_slider_touch

0x7059,	// (0x000328ed) scroll_pane_cp039

0x85e1,	// (0x00033e75) ncim_query_button_pane_cp01_ParamLimits

0x8600,	// (0x00033e94) ncimui_query_pane_g1_ParamLimits

0xcaf1,	// (0x00038385) input_focus_pane_cp012_ParamLimits

0x8625,	// (0x00033eb9) ncim_query_entry_pane_t1_ParamLimits

0x7059,	// (0x000328ed) scroll_pane_cp039_ParamLimits

0x3c52,	// (0x0002f4e6) navi_pane_bcale_mc_g1

0x3c5a,	// (0x0002f4ee) navi_pane_bcale_mc_t1

0x9252,	// (0x00034ae6) main_sp_fs_email_pane_g1

0x925e,	// (0x00034af2) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0003b57f) main_sp_fs_email_pane_g

0x9e97,	// (0x0003572b) list_single_cale_mrui_row_pane_g3_ParamLimits

0x9e97,	// (0x0003572b) list_single_cale_mrui_row_pane_g3

0xa295,	// (0x00035b29) list_single_recal_day_pane_g5_event_pane

0xa2ab,	// (0x00035b3f) list_single_recal_day_pane_g7

0xb2b0,	// (0x00036b44) list_recal_day_event_pane_cp01

0xb2b9,	// (0x00036b4d) list_recal_vselct_arw_lo_pane_cp01

0xb2c1,	// (0x00036b55) list_recal_vselct_arw_up_pane_cp01

0xb2c9,	// (0x00036b5d) list_recal_vselct_pane_cp01

0x6d19,	// (0x000325ad) list_recal_day_event_pane_cp01_g1

0xb2d3,	// (0x00036b67) list_recal_day_event_pane_cp01_t1

0xa2b3,	// (0x00035b47) list_single_recal_day_pane_t1_ParamLimits

0xa2c5,	// (0x00035b59) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003b6d1) list_single_recal_day_pane_t_ParamLimits

0xc21d,	// (0x00037ab1) bg_notes_pane_ParamLimits

0xc2c0,	// (0x00037b54) list_notes_pane_ParamLimits

0x1d7c,	// (0x0002d610) scroll_pane_cp06_ParamLimits

0xc2e2,	// (0x00037b76) main_notes_pane_ParamLimits

0xb414,	// (0x00036ca8) main_welc_pane

0xb2e1,	// (0x00036b75) main_welc_body_pane_ParamLimits

0xb2e1,	// (0x00036b75) main_welc_body_pane

0xb2ff,	// (0x00036b93) main_welc_opti_pane_ParamLimits

0xb2ff,	// (0x00036b93) main_welc_opti_pane

0xb344,	// (0x00036bd8) main_welc_pane_t1_ParamLimits

0xb344,	// (0x00036bd8) main_welc_pane_t1

0xb362,	// (0x00036bf6) main_welc_body_row_pane_ParamLimits

0xb362,	// (0x00036bf6) main_welc_body_row_pane

0xb376,	// (0x00036c0a) main_welc_opti_row_pane_ParamLimits

0xb376,	// (0x00036c0a) main_welc_opti_row_pane

0xb384,	// (0x00036c18) main_welc_opti_row_pane_g1

0xb38c,	// (0x00036c20) main_welc_opti_row_pane_t1

0xb39c,	// (0x00036c30) main_welc_body_row_pane_t1

0xa7f3,	// (0x00036087) popup_notif_wgt_heading_pane

0xa80d,	// (0x000360a1) aid_size_list_notif_wgt_del_ParamLimits

0xa81a,	// (0x000360ae) list_notif_wgt_row_pane_g1_ParamLimits

0xa826,	// (0x000360ba) list_notif_wgt_row_pane_g2_ParamLimits

0xa832,	// (0x000360c6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003b738) list_notif_wgt_row_pane_g_ParamLimits

0xa83f,	// (0x000360d3) list_notif_wgt_row_pane_t1_ParamLimits

0xa854,	// (0x000360e8) list_notif_wgt_row_pane_t2_ParamLimits

0xa866,	// (0x000360fa) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003b73f) list_notif_wgt_row_pane_t_ParamLimits

0xaae4,	// (0x00036378) listrow_wgtman_pane_g1_ParamLimits

0xaaf1,	// (0x00036385) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003b768) listrow_wgtman_pane_g_ParamLimits

0xab0f,	// (0x000363a3) listrow_wgtman_pane_t1_ParamLimits

0xab27,	// (0x000363bb) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003b76d) listrow_wgtman_pane_t_ParamLimits

0xab4d,	// (0x000363e1) wait_bar_pane_cp09_ParamLimits

0xb414,	// (0x00036ca8) bg_popup_heading_pane_cp02

0xb3ab,	// (0x00036c3f) popup_notif_wgt_heading_pane_g1

0xb3b3,	// (0x00036c47) popup_notif_wgt_heading_pane_t1

0xb414,	// (0x00036ca8) main_vids_pane

0xb414,	// (0x00036ca8) vids_listscroll_pane

0xb3c1,	// (0x00036c55) scroll_pane_cp040

0xb414,	// (0x00036ca8) vids_list_pane

0xb3cc,	// (0x00036c60) vids_list_double_pane_ParamLimits

0xb3cc,	// (0x00036c60) vids_list_double_pane

0xb3dd,	// (0x00036c71) vids_list_double_pane_g1

0xb3e6,	// (0x00036c7a) vids_list_double_pane_t1

0xb3f6,	// (0x00036c8a) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003b7f1) vids_list_double_pane_t

0xb484,	// (0x00036d18) main_ncimui_pane_ParamLimits

0x830b,	// (0x00033b9f) main_ncimui_pane_g1_ParamLimits

0x8317,	// (0x00033bab) main_ncimui_pane_g2_ParamLimits

0x8317,	// (0x00033bab) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0003b484) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0003b484) main_ncimui_pane_g

0xb31a,	// (0x00036bae) main_welc_pane_g1_ParamLimits

0xb31a,	// (0x00036bae) main_welc_pane_g1

0xb32f,	// (0x00036bc3) main_welc_pane_g2_ParamLimits

0xb32f,	// (0x00036bc3) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003b7ec) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003b7ec) main_welc_pane_g

0xc21d,	// (0x00037ab1) listscroll_mce_pane_ParamLimits

0x3d2c,	// (0x0002f5c0) wait_bar_pane_cp10

0xe298,	// (0x00039b2c) main_cale_day_pane_ParamLimits

0xe298,	// (0x00039b2c) main_cale_week_pane_ParamLimits

0xc21d,	// (0x00037ab1) main_messa_pane_ParamLimits

0x5ae1,	// (0x00031375) main_clock2_btn_pane_ParamLimits

0x5ae1,	// (0x00031375) main_clock2_btn_pane

0xeacc,	// (0x0003a360) main_clock2_btn_pane_cp01_ParamLimits

0xeacc,	// (0x0003a360) main_clock2_btn_pane_cp01

0x9dd6,	// (0x0003566a) list_cale_mrui_pane_ParamLimits

0xa8bf,	// (0x00036153) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003b746) main_cf0_pane_g

0xadb5,	// (0x00036649) area_left_week_number_pane_ParamLimits

0xadc1,	// (0x00036655) area_top_day_name_pane_ParamLimits

0xadd4,	// (0x00036668) frame_month_view_pane_ParamLimits

0xade7,	// (0x0003667b) grid_month_view_pane_ParamLimits

0xae63,	// (0x000366f7) frm_month_g1_ParamLimits

0xae70,	// (0x00036704) frm_month_g2_ParamLimits

0xae83,	// (0x00036717) frm_month_g3_ParamLimits

0xae96,	// (0x0003672a) frm_month_g4_ParamLimits

0xaea9,	// (0x0003673d) frm_month_g5_ParamLimits

0xaebc,	// (0x00036750) frm_month_g6_ParamLimits

0xaecf,	// (0x00036763) frm_month_g7_ParamLimits

0xaee2,	// (0x00036776) frm_month_g8_ParamLimits

0xaeef,	// (0x00036783) frm_month_g9_ParamLimits

0xaeff,	// (0x00036793) frm_month_g10_ParamLimits

0xaf0f,	// (0x000367a3) frm_month_g11_ParamLimits

0xaf1f,	// (0x000367b3) frm_month_g12_ParamLimits

0xaf31,	// (0x000367c5) frm_month_g13_ParamLimits

0xaf43,	// (0x000367d7) frm_month_g14_ParamLimits

0xaf57,	// (0x000367eb) frm_month_g15_ParamLimits

0xaf6b,	// (0x000367ff) frm_month_g16_ParamLimits

0xff03,	// (0x0003b797) frm_month_g_ParamLimits

0xaf7f,	// (0x00036813) cell_top_day_name_pane_t1_ParamLimits

0xaf92,	// (0x00036826) cell_area_left_week_number_pane_g1_ParamLimits

0xaf9e,	// (0x00036832) cell_area_left_week_number_pane_t1_ParamLimits

0xe918,	// (0x0003a1ac) cell_month_view_pane_g1_ParamLimits

0xafb1,	// (0x00036845) cell_month_view_pane_t1_ParamLimits

0xc215,	// (0x00037aa9) main_clock2_btn_pane_g1

0xb406,	// (0x00036c9a) main_clock2_btn_pane_t1

0xcaf1,	// (0x00038385) listscroll_cmail_pane_ParamLimits

0x9252,	// (0x00034ae6) main_sp_fs_email_pane_g1_ParamLimits

0x925e,	// (0x00034af2) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0003b57f) main_sp_fs_email_pane_g_ParamLimits

0xa1f3,	// (0x00035a87) list_recal_day_pane_ParamLimits

0xa204,	// (0x00035a98) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
