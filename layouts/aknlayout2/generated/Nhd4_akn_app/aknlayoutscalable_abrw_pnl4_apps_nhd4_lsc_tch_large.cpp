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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000aa06d };

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
0x02c8,	// (0x000aa335) Screen

0x02d4,	// (0x000aa341) application_window

0x033c,	// (0x000aa3a9) area_bottom_pane_ParamLimits

0x033c,	// (0x000aa3a9) area_bottom_pane

0x0399,	// (0x000aa406) area_top_pane_ParamLimits

0x0399,	// (0x000aa406) area_top_pane

0x9432,	// (0x000b349f) call_video_uplink_pane_ParamLimits

0x9432,	// (0x000b349f) call_video_uplink_pane

0x0427,	// (0x000aa494) main_pane_ParamLimits

0x0427,	// (0x000aa494) main_pane

0xc922,	// (0x000b698f) context_pane

0x36fb,	// (0x000ad768) navi_pane

0x372d,	// (0x000ad79a) popup_cale_events_window_ParamLimits

0x372d,	// (0x000ad79a) popup_cale_events_window

0xc935,	// (0x000b69a2) popup_mup_playback_window

0x3745,	// (0x000ad7b2) signal_pane

0xa337,	// (0x000b43a4) main_browser_pane

0xaa7c,	// (0x000b4ae9) main_burst_pane

0x3451,	// (0x000ad4be) main_calc_pane

0xc908,	// (0x000b6975) main_cale_day_pane

0x3465,	// (0x000ad4d2) main_cale_month_pane

0xc908,	// (0x000b6975) main_cale_week_pane

0xaa7c,	// (0x000b4ae9) main_call_pane

0xa00b,	// (0x000b4078) main_call_poc_pane

0xaa7c,	// (0x000b4ae9) main_camera_pane

0xaa7c,	// (0x000b4ae9) main_chi_dic_pane

0xb25f,	// (0x000b52cc) main_clock_pane

0xa00b,	// (0x000b4078) main_fmradio_pane

0xaa7c,	// (0x000b4ae9) main_graph_messa_pane

0xa00b,	// (0x000b4078) main_help_pane

0xa337,	// (0x000b43a4) main_im_pane

0xa266,	// (0x000b42d3) main_image_pane_ParamLimits

0xa266,	// (0x000b42d3) main_image_pane

0xa00b,	// (0x000b4078) main_location2_pane

0xaa7c,	// (0x000b4ae9) main_location_pane

0xa266,	// (0x000b42d3) main_messa_pane

0xa00b,	// (0x000b4078) main_mp2_pane

0xaa7c,	// (0x000b4ae9) main_mp_pane

0xa00b,	// (0x000b4078) main_msg_pane

0xa00b,	// (0x000b4078) main_mup_eq_pane

0xa00b,	// (0x000b4078) main_mup_pane

0xa337,	// (0x000b43a4) main_notes_pane

0xa00b,	// (0x000b4078) main_pec_pane

0xa00b,	// (0x000b4078) main_phob_pane

0xa00b,	// (0x000b4078) main_pinb_pane

0xa00b,	// (0x000b4078) main_postcard_pane

0xa00b,	// (0x000b4078) main_qdial_pane

0xaa7c,	// (0x000b4ae9) main_skin_pane

0xa00b,	// (0x000b4078) main_smil2_pane

0xaa7c,	// (0x000b4ae9) main_smil_pane

0xaa7c,	// (0x000b4ae9) main_video_pane

0xaa7c,	// (0x000b4ae9) main_video_tele_pane

0xa266,	// (0x000b42d3) main_viewer_pane_ParamLimits

0xa266,	// (0x000b42d3) main_viewer_pane

0xaa7c,	// (0x000b4ae9) main_vorec_pane

0x34b7,	// (0x000ad524) popup_blid_sat_info_window_ParamLimits

0x34b7,	// (0x000ad524) popup_blid_sat_info_window

0x350f,	// (0x000ad57c) popup_dyc_status_message_window_ParamLimits

0x350f,	// (0x000ad57c) popup_dyc_status_message_window

0x3527,	// (0x000ad594) popup_grid_large_graphic_window_ParamLimits

0x3527,	// (0x000ad594) popup_grid_large_graphic_window

0x35d7,	// (0x000ad644) popup_loc_request_window_ParamLimits

0x35d7,	// (0x000ad644) popup_loc_request_window

0x36d3,	// (0x000ad740) popup_wml_address_window_ParamLimits

0x36d3,	// (0x000ad740) popup_wml_address_window

0x328b,	// (0x000ad2f8) call_muted_g1

0x2f3f,	// (0x000acfac) popup_call_audio_conf_window_ParamLimits

0x2f3f,	// (0x000acfac) popup_call_audio_conf_window

0x329f,	// (0x000ad30c) popup_call_audio_first_window_ParamLimits

0x329f,	// (0x000ad30c) popup_call_audio_first_window

0x3315,	// (0x000ad382) popup_call_audio_in_window_ParamLimits

0x3315,	// (0x000ad382) popup_call_audio_in_window

0x3351,	// (0x000ad3be) popup_call_audio_out_window_ParamLimits

0x3351,	// (0x000ad3be) popup_call_audio_out_window

0x338b,	// (0x000ad3f8) popup_call_audio_second_window_ParamLimits

0x338b,	// (0x000ad3f8) popup_call_audio_second_window

0x33e1,	// (0x000ad44e) popup_call_audio_wait_window_ParamLimits

0x33e1,	// (0x000ad44e) popup_call_audio_wait_window

0x3416,	// (0x000ad483) popup_number_entry_window_ParamLimits

0x3416,	// (0x000ad483) popup_number_entry_window

0x9468,	// (0x000b34d5) bg_popup_call_pane_cp05_ParamLimits

0x9468,	// (0x000b34d5) bg_popup_call_pane_cp05

0x9488,	// (0x000b34f5) popup_number_entry_window_t1

0x949b,	// (0x000b3508) popup_number_entry_window_t2

0x94ad,	// (0x000b351a) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000b911c) popup_number_entry_window_t

0x94bf,	// (0x000b352c) text_title_cp2

0x94d2,	// (0x000b353f) bg_popup_call_pane_cp_ParamLimits

0x94d2,	// (0x000b353f) bg_popup_call_pane_cp

0x94e0,	// (0x000b354d) call_thumbnail_pane

0x94e8,	// (0x000b3555) popup_call_audio_in_window_g1_ParamLimits

0x94e8,	// (0x000b3555) popup_call_audio_in_window_g1

0x94f4,	// (0x000b3561) popup_call_audio_in_window_g2_ParamLimits

0x94f4,	// (0x000b3561) popup_call_audio_in_window_g2

0x9500,	// (0x000b356d) popup_call_audio_in_window_g3_ParamLimits

0x9500,	// (0x000b356d) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000b9125) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000b9125) popup_call_audio_in_window_g

0x950c,	// (0x000b3579) popup_call_audio_in_window_t1_ParamLimits

0x950c,	// (0x000b3579) popup_call_audio_in_window_t1

0x9528,	// (0x000b3595) popup_call_audio_in_window_t2_ParamLimits

0x9528,	// (0x000b3595) popup_call_audio_in_window_t2

0x9544,	// (0x000b35b1) popup_call_audio_in_window_t3_ParamLimits

0x9544,	// (0x000b35b1) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000b912c) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000b912c) popup_call_audio_in_window_t

0x94d2,	// (0x000b353f) bg_popup_call_pane_cp01_ParamLimits

0x94d2,	// (0x000b353f) bg_popup_call_pane_cp01

0x94e0,	// (0x000b354d) call_thumbnail_pane_cp02

0x9557,	// (0x000b35c4) call_type_pane_cp022

0x955f,	// (0x000b35cc) popup_call_audio_out_window_g1_ParamLimits

0x955f,	// (0x000b35cc) popup_call_audio_out_window_g1

0x9571,	// (0x000b35de) popup_call_audio_out_window_g2_ParamLimits

0x9571,	// (0x000b35de) popup_call_audio_out_window_g2

0x957d,	// (0x000b35ea) popup_call_audio_out_window_g3_ParamLimits

0x957d,	// (0x000b35ea) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000b9133) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000b9133) popup_call_audio_out_window_g

0x958f,	// (0x000b35fc) popup_call_audio_out_window_t1_ParamLimits

0x958f,	// (0x000b35fc) popup_call_audio_out_window_t1

0x95a7,	// (0x000b3614) popup_call_audio_out_window_t2_ParamLimits

0x95a7,	// (0x000b3614) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000b913a) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000b913a) popup_call_audio_out_window_t

0x95bc,	// (0x000b3629) bg_popup_call_pane_ParamLimits

0x95bc,	// (0x000b3629) bg_popup_call_pane

0x05e4,	// (0x000aa651) call_thumbnail_pane_cp_ParamLimits

0x05e4,	// (0x000aa651) call_thumbnail_pane_cp

0x9640,	// (0x000b36ad) call_type_pane_cp01_ParamLimits

0x9640,	// (0x000b36ad) call_type_pane_cp01

0x9684,	// (0x000b36f1) popup_call_audio_first_window_g1_ParamLimits

0x9684,	// (0x000b36f1) popup_call_audio_first_window_g1

0x96d0,	// (0x000b373d) popup_call_audio_first_window_g2_ParamLimits

0x96d0,	// (0x000b373d) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000b913f) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000b913f) popup_call_audio_first_window_g

0x9ea4,	// (0x000b3f11) popup_call_audio_first_window_t1_ParamLimits

0x9ea4,	// (0x000b3f11) popup_call_audio_first_window_t1

0x9f50,	// (0x000b3fbd) popup_call_audio_first_window_t4_ParamLimits

0x9f50,	// (0x000b3fbd) popup_call_audio_first_window_t4

0x9fdc,	// (0x000b4049) popup_call_audio_first_window_t5_ParamLimits

0x9fdc,	// (0x000b4049) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000b9144) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000b9144) popup_call_audio_first_window_t

0xa00b,	// (0x000b4078) bg_popup_call_pane_cp02

0xa015,	// (0x000b4082) call_type_pane_cp023

0xa01d,	// (0x000b408a) popup_call_audio_wait_window_g1

0xa025,	// (0x000b4092) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000b914b) popup_call_audio_wait_window_g

0xa02d,	// (0x000b409a) popup_call_audio_wait_window_t3

0xa03b,	// (0x000b40a8) bg_popup_call_pane_cp03_ParamLimits

0xa03b,	// (0x000b40a8) bg_popup_call_pane_cp03

0xa09b,	// (0x000b4108) call_thumbnail_pane_cp011_ParamLimits

0xa09b,	// (0x000b4108) call_thumbnail_pane_cp011

0xa0a7,	// (0x000b4114) call_type_pane_cp034_ParamLimits

0xa0a7,	// (0x000b4114) call_type_pane_cp034

0xa0e3,	// (0x000b4150) popup_call_audio_second_window_g1_ParamLimits

0xa0e3,	// (0x000b4150) popup_call_audio_second_window_g1

0xa11f,	// (0x000b418c) popup_call_audio_second_window_g2_ParamLimits

0xa11f,	// (0x000b418c) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000b9150) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000b9150) popup_call_audio_second_window_g

0xa15b,	// (0x000b41c8) popup_call_audio_second_window_t1_ParamLimits

0xa15b,	// (0x000b41c8) popup_call_audio_second_window_t1

0xa1dc,	// (0x000b4249) popup_call_audio_second_window_t2_ParamLimits

0xa1dc,	// (0x000b4249) popup_call_audio_second_window_t2

0xa212,	// (0x000b427f) popup_call_audio_second_window_t3_ParamLimits

0xa212,	// (0x000b427f) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000b9155) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000b9155) popup_call_audio_second_window_t

0xa00b,	// (0x000b4078) bg_popup_call_pane_cp04

0xa248,	// (0x000b42b5) list_conf_pane

0xa250,	// (0x000b42bd) popup_call_audio_conf_window_t1

0xa25e,	// (0x000b42cb) call_thumbnail_pane_g1

0xa266,	// (0x000b42d3) bg_pinb_pane_ParamLimits

0xa266,	// (0x000b42d3) bg_pinb_pane

0xa274,	// (0x000b42e1) find_pinb_pane

0xa27d,	// (0x000b42ea) listscroll_pinb_pane_ParamLimits

0xa27d,	// (0x000b42ea) listscroll_pinb_pane

0xa28c,	// (0x000b42f9) pinb_bg_pane_g1

0x0608,	// (0x000aa675) pinb_bg_pane_g2

0x0614,	// (0x000aa681) pinb_bg_pane_g3

0x0620,	// (0x000aa68d) pinb_bg_pane_g4

0x062c,	// (0x000aa699) pinb_bg_pane_g5

0x0638,	// (0x000aa6a5) pinb_bg_pane_g6

0x0643,	// (0x000aa6b0) pinb_bg_pane_g7

0x064e,	// (0x000aa6bb) pinb_bg_pane_g8

0x0659,	// (0x000aa6c6) pinb_bg_pane_g9

0x0663,	// (0x000aa6d0) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000b915c) pinb_bg_pane_g

0x0680,	// (0x000aa6ed) grid_pinb_pane

0x0689,	// (0x000aa6f6) list_pinb_pane

0x0692,	// (0x000aa6ff) scroll_pane_cp01_ParamLimits

0x0692,	// (0x000aa6ff) scroll_pane_cp01

0xa296,	// (0x000b4303) find_pinb_pane_g1_ParamLimits

0xa296,	// (0x000b4303) find_pinb_pane_g1

0xa2ae,	// (0x000b431b) find_pinb_pane_t1

0xa2c0,	// (0x000b432d) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000b9176) find_pinb_pane_t

0xa2d5,	// (0x000b4342) input_focus_pane_cp01_ParamLimits

0xa2d5,	// (0x000b4342) input_focus_pane_cp01

0x06a4,	// (0x000aa711) cell_pinb_pane_ParamLimits

0x06a4,	// (0x000aa711) cell_pinb_pane

0x06cf,	// (0x000aa73c) cell_pinb_pane_g1_ParamLimits

0x06cf,	// (0x000aa73c) cell_pinb_pane_g1

0xa2e1,	// (0x000b434e) cell_pinb_pane_g2_ParamLimits

0xa2e1,	// (0x000b434e) cell_pinb_pane_g2

0xa2ed,	// (0x000b435a) cell_pinb_pane_g3_ParamLimits

0xa2ed,	// (0x000b435a) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000b917b) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000b917b) cell_pinb_pane_g

0xa00b,	// (0x000b4078) grid_highlight_pane_cp01

0x06e2,	// (0x000aa74f) list_pinb_item_pane_ParamLimits

0x06e2,	// (0x000aa74f) list_pinb_item_pane

0xa00b,	// (0x000b4078) list_highlight_pane_cp02

0x06f5,	// (0x000aa762) list_pinb_item_pane_g1_ParamLimits

0x06f5,	// (0x000aa762) list_pinb_item_pane_g1

0x0702,	// (0x000aa76f) list_pinb_item_pane_g2_ParamLimits

0x0702,	// (0x000aa76f) list_pinb_item_pane_g2

0x070e,	// (0x000aa77b) list_pinb_item_pane_g3_ParamLimits

0x070e,	// (0x000aa77b) list_pinb_item_pane_g3

0x071f,	// (0x000aa78c) list_pinb_item_pane_g4_ParamLimits

0x071f,	// (0x000aa78c) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000b9182) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000b9182) list_pinb_item_pane_g

0x072b,	// (0x000aa798) list_pinb_item_pane_t1_ParamLimits

0x072b,	// (0x000aa798) list_pinb_item_pane_t1

0x0760,	// (0x000aa7cd) calc_display_pane

0x0785,	// (0x000aa7f2) calc_paper_pane

0x07a8,	// (0x000aa815) grid_calc_pane

0xa00b,	// (0x000b4078) bg_list_pane_cp01

0x07d6,	// (0x000aa843) clock_g1

0x07de,	// (0x000aa84b) clock_g2

0x0001,

0xf11e,	// (0x000b918b) clock_g

0x07e6,	// (0x000aa853) clock_t1_ParamLimits

0x07e6,	// (0x000aa853) clock_t1

0x07fb,	// (0x000aa868) clock_t2_ParamLimits

0x07fb,	// (0x000aa868) clock_t2

0x080d,	// (0x000aa87a) clock_t3_ParamLimits

0x080d,	// (0x000aa87a) clock_t3

0x081f,	// (0x000aa88c) clock_t4_ParamLimits

0x081f,	// (0x000aa88c) clock_t4

0x0831,	// (0x000aa89e) clock_t5_ParamLimits

0x0831,	// (0x000aa89e) clock_t5

0x0846,	// (0x000aa8b3) clock_t6_ParamLimits

0x0846,	// (0x000aa8b3) clock_t6

0x0858,	// (0x000aa8c5) clock_t7_ParamLimits

0x0858,	// (0x000aa8c5) clock_t7

0x086a,	// (0x000aa8d7) clock_t8_ParamLimits

0x086a,	// (0x000aa8d7) clock_t8

0x087e,	// (0x000aa8eb) clock_t9_ParamLimits

0x087e,	// (0x000aa8eb) clock_t9

0x0008,

0xf123,	// (0x000b9190) clock_t_ParamLimits

0xf123,	// (0x000b9190) clock_t

0xa2f9,	// (0x000b4366) popup_clock_analogue_window_cp02

0xa2f9,	// (0x000b4366) popup_clock_digital_window_cp01

0xa301,	// (0x000b436e) listscroll_help_pane

0xa00b,	// (0x000b4078) phob_pre_status_pane

0xa30b,	// (0x000b4378) grid_qdial_pane

0xa266,	// (0x000b42d3) listscroll_mce_pane

0xa266,	// (0x000b42d3) bg_notes_pane

0xa315,	// (0x000b4382) list_notes_pane

0x0892,	// (0x000aa8ff) scroll_pane_cp06

0xa323,	// (0x000b4390) bg_calc_paper_pane

0x971c,	// (0x000b3789) list_calc_pane

0xa337,	// (0x000b43a4) bg_calc_display_pane

0x08a6,	// (0x000aa913) calc_display_pane_t1

0x08b8,	// (0x000aa925) calc_display_pane_t2

0x9736,	// (0x000b37a3) calc_display_pane_t3

0x0002,

0xf136,	// (0x000b91a3) calc_display_pane_t

0x08ca,	// (0x000aa937) cell_calc_pane_ParamLimits

0x08ca,	// (0x000aa937) cell_calc_pane

0xa343,	// (0x000b43b0) bg_calc_paper_pane_g1

0xa34f,	// (0x000b43bc) bg_calc_paper_pane_g2

0xa35b,	// (0x000b43c8) bg_calc_paper_pane_g3

0xa367,	// (0x000b43d4) bg_calc_paper_pane_g4

0xa373,	// (0x000b43e0) bg_calc_paper_pane_g5

0x08ff,	// (0x000aa96c) bg_calc_paper_pane_g6

0x090e,	// (0x000aa97b) bg_calc_paper_pane_g7

0x091d,	// (0x000aa98a) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x000b91aa) bg_calc_paper_pane_g

0x0930,	// (0x000aa99d) calc_bg_paper_pane_g9

0x0943,	// (0x000aa9b0) list_calc_item_pane_ParamLimits

0x0943,	// (0x000aa9b0) list_calc_item_pane

0xa37f,	// (0x000b43ec) list_calc_item_pane_g1

0x9748,	// (0x000b37b5) list_calc_item_pane_t1_ParamLimits

0x9748,	// (0x000b37b5) list_calc_item_pane_t1

0x0958,	// (0x000aa9c5) list_calc_item_pane_t2_ParamLimits

0x0958,	// (0x000aa9c5) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000b91bb) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000b91bb) list_calc_item_pane_t

0xa38c,	// (0x000b43f9) cell_calc_pane_g1

0xa396,	// (0x000b4403) grid_highlight_pane_cp02

0xd321,	// (0x000b738e) bg_calc_display_pane_g1

0x098a,	// (0x000aa9f7) bg_calc_display_pane_g2

0xa91d,	// (0x000b498a) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000b91c5) bg_calc_display_pane_g

0x0994,	// (0x000aaa01) cell_qdial_pane_ParamLimits

0x0994,	// (0x000aaa01) cell_qdial_pane

0x09a8,	// (0x000aaa15) cell_qdial_pane_g1_ParamLimits

0x09a8,	// (0x000aaa15) cell_qdial_pane_g1

0x09be,	// (0x000aaa2b) cell_qdial_pane_g2_ParamLimits

0x09be,	// (0x000aaa2b) cell_qdial_pane_g2

0xa3b8,	// (0x000b4425) cell_qdial_pane_g3_ParamLimits

0xa3b8,	// (0x000b4425) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000b91cc) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000b91cc) cell_qdial_pane_g

0x09e4,	// (0x000aaa51) cell_qdial_pane_t1_ParamLimits

0x09e4,	// (0x000aaa51) cell_qdial_pane_t1

0x09fc,	// (0x000aaa69) cell_qdial_pane_t2_ParamLimits

0x09fc,	// (0x000aaa69) cell_qdial_pane_t2

0x0a0f,	// (0x000aaa7c) cell_qdial_pane_t3_ParamLimits

0x0a0f,	// (0x000aaa7c) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000b91d5) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000b91d5) cell_qdial_pane_t

0xa00b,	// (0x000b4078) grid_highlight_pane_cp04

0xa926,	// (0x000b4993) thumbnail_qdial_pane_ParamLimits

0xa926,	// (0x000b4993) thumbnail_qdial_pane

0xa982,	// (0x000b49ef) list_help_pane

0xa98b,	// (0x000b49f8) scroll_pane_cp02

0xa994,	// (0x000b4a01) help_list_pane_t1_ParamLimits

0xa994,	// (0x000b4a01) help_list_pane_t1

0x975a,	// (0x000b37c7) bg_notes_pane_g2

0x9762,	// (0x000b37cf) bg_notes_pane_g3

0x976a,	// (0x000b37d7) notes_bg_pane_g1

0x9772,	// (0x000b37df) notes_bg_pane_g4

0x977a,	// (0x000b37e7) notes_bg_pane_g5

0x9782,	// (0x000b37ef) notes_bg_pane_g6

0x978a,	// (0x000b37f7) notes_bg_pane_g7

0x9792,	// (0x000b37ff) notes_bg_pane_g8

0x979a,	// (0x000b3807) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000b91f3) notes_bg_pane_g

0x0a22,	// (0x000aaa8f) list_notes_text_pane_ParamLimits

0x0a22,	// (0x000aaa8f) list_notes_text_pane

0xa9b2,	// (0x000b4a1f) list_notes_text_pane_g1

0xa3c4,	// (0x000b4431) list_notes_text_pane_t1

0x0a38,	// (0x000aaaa5) listscroll_cale_week_pane

0x0a64,	// (0x000aaad1) bg_cale_heading_pane

0xa9d5,	// (0x000b4a42) bg_cale_pane_cp01

0x0a7c,	// (0x000aaae9) cale_week_corner_pane

0x0a9b,	// (0x000aab08) cale_week_day_heading_pane

0x0ab8,	// (0x000aab25) cale_week_scroll_pane_g1

0x0acb,	// (0x000aab38) cale_week_scroll_pane_g2

0x0ae3,	// (0x000aab50) cale_week_scroll_pane_g3

0x0afb,	// (0x000aab68) cale_week_scroll_pane_g4

0x0b13,	// (0x000aab80) cale_week_scroll_pane_g5

0x0b33,	// (0x000aaba0) cale_week_scroll_pane_g6

0x0b53,	// (0x000aabc0) cale_week_scroll_pane_g7

0x0b73,	// (0x000aabe0) cale_week_scroll_pane_g8

0x0b97,	// (0x000aac04) cale_week_scroll_pane_g9

0x0baf,	// (0x000aac1c) cale_week_scroll_pane_g10

0x0bc7,	// (0x000aac34) cale_week_scroll_pane_g11

0x0bdf,	// (0x000aac4c) cale_week_scroll_pane_g12

0x0bf7,	// (0x000aac64) cale_week_scroll_pane_g13

0x0bf7,	// (0x000aac64) cale_week_scroll_pane_g14

0x0bf7,	// (0x000aac64) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000b9202) cale_week_scroll_pane_g

0x0c33,	// (0x000aaca0) cale_week_time_pane

0x0c57,	// (0x000aacc4) grid_cale_week_pane

0xaa04,	// (0x000b4a71) scroll_pane_cp08

0x0c7d,	// (0x000aacea) cell_cale_week_pane_ParamLimits

0x0c7d,	// (0x000aacea) cell_cale_week_pane

0x0d0b,	// (0x000aad78) cale_week_day_heading_pane_t1

0x0d35,	// (0x000aada2) cale_week_day_heading_pane_t2

0x0d64,	// (0x000aadd1) cale_week_day_heading_pane_t3

0x0d93,	// (0x000aae00) cale_week_day_heading_pane_t4

0x0dc2,	// (0x000aae2f) cale_week_day_heading_pane_t5

0x0df9,	// (0x000aae66) cale_week_day_heading_pane_t6

0x0e30,	// (0x000aae9d) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000b9223) cale_week_day_heading_pane_t

0xaa21,	// (0x000b4a8e) bg_cale_side_pane

0x0e5a,	// (0x000aaec7) cale_week_time_pane_t1

0x0e74,	// (0x000aaee1) cale_week_time_pane_t2

0x0e8e,	// (0x000aaefb) cale_week_time_pane_t3

0x0ea8,	// (0x000aaf15) cale_week_time_pane_t4

0x0ec2,	// (0x000aaf2f) cale_week_time_pane_t5

0x0edc,	// (0x000aaf49) cale_week_time_pane_t6

0x0ef6,	// (0x000aaf63) cale_week_time_pane_t7

0x0f10,	// (0x000aaf7d) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000b9232) cale_week_time_pane_t

0x0f30,	// (0x000aaf9d) cell_cale_week_pane_g2

0x0f54,	// (0x000aafc1) cell_cale_week_pane_g3_ParamLimits

0x0f54,	// (0x000aafc1) cell_cale_week_pane_g3

0xaa2f,	// (0x000b4a9c) grid_highlight_pane_cp07

0xaa37,	// (0x000b4aa4) listscroll_gms_pane

0xaa41,	// (0x000b4aae) grid_gms_pane

0xaa4a,	// (0x000b4ab7) listscroll_gms_pane_g1

0xaa52,	// (0x000b4abf) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000b9243) listscroll_gms_pane_g

0x0f6c,	// (0x000aafd9) scroll_pane_cp010

0x0f77,	// (0x000aafe4) cell_gms_pane_ParamLimits

0x0f77,	// (0x000aafe4) cell_gms_pane

0x0f89,	// (0x000aaff6) cell_gms_pane_g1

0xaa5a,	// (0x000b4ac7) cell_gms_pane_g2

0xaa62,	// (0x000b4acf) cell_gms_pane_g3

0xaa6b,	// (0x000b4ad8) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000b9248) cell_gms_pane_g

0xaa74,	// (0x000b4ae1) grid_highlight_pane_cp09

0x3235,	// (0x000ad2a2) phob_pre_status_pane_g1

0x323d,	// (0x000ad2aa) phob_pre_status_pane_g2

0x3245,	// (0x000ad2b2) phob_pre_status_pane_g3

0x324d,	// (0x000ad2ba) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x000b9646) phob_pre_status_pane_g

0x325d,	// (0x000ad2ca) phob_pre_status_pane_t1

0x326b,	// (0x000ad2d8) phob_pre_status_pane_t2

0x327b,	// (0x000ad2e8) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x000b9651) phob_pre_status_pane_t

0xaa7c,	// (0x000b4ae9) bg_list_pane_cp05

0x0f99,	// (0x000ab006) grid_vorec_pane

0x0fa1,	// (0x000ab00e) vorec_t1

0x0faf,	// (0x000ab01c) vorec_t2

0x0fbd,	// (0x000ab02a) vorec_t3

0x0fcb,	// (0x000ab038) vorec_t4

0x93e6,	// (0x000b3453) vorec_t5

0x93f4,	// (0x000b3461) vorec_t6

0x0004,

0xf1e4,	// (0x000b9251) vorec_t

0x9402,	// (0x000b346f) wait_bar_pane_cp01

0x0fe7,	// (0x000ab054) cell_vorec_pane_ParamLimits

0x0fe7,	// (0x000ab054) cell_vorec_pane

0x97a2,	// (0x000b380f) cell_vorec_pane_g1

0xa00b,	// (0x000b4078) grid_highlight_pane_cp05

0x1012,	// (0x000ab07f) cams_zoom_pane

0x1021,	// (0x000ab08e) image_vga_pane

0x103b,	// (0x000ab0a8) main_camera_pane_g1

0x104d,	// (0x000ab0ba) main_camera_pane_g2

0x105d,	// (0x000ab0ca) main_camera_pane_g3

0x106d,	// (0x000ab0da) main_camera_pane_g4

0x107d,	// (0x000ab0ea) main_camera_pane_g5

0x108d,	// (0x000ab0fa) main_camera_pane_g6

0x109d,	// (0x000ab10a) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000b925c) main_camera_pane_g

0x10ad,	// (0x000ab11a) main_camera_pane_t1

0x10c3,	// (0x000ab130) main_camera_pane_t2

0x0001,

0xf200,	// (0x000b926d) main_camera_pane_t

0x10fd,	// (0x000ab16a) cams_zoom_pane_cp_ParamLimits

0x10fd,	// (0x000ab16a) cams_zoom_pane_cp

0x1125,	// (0x000ab192) image_cif_pane_ParamLimits

0x1125,	// (0x000ab192) image_cif_pane

0x1160,	// (0x000ab1cd) image_subqcif_pane

0x1168,	// (0x000ab1d5) main_video_pane_g1_ParamLimits

0x1168,	// (0x000ab1d5) main_video_pane_g1

0x118c,	// (0x000ab1f9) main_video_pane_g2_ParamLimits

0x118c,	// (0x000ab1f9) main_video_pane_g2

0x11c0,	// (0x000ab22d) main_video_pane_g3_ParamLimits

0x11c0,	// (0x000ab22d) main_video_pane_g3

0x11ee,	// (0x000ab25b) main_video_pane_g4_ParamLimits

0x11ee,	// (0x000ab25b) main_video_pane_g4

0x121c,	// (0x000ab289) main_video_pane_g5_ParamLimits

0x121c,	// (0x000ab289) main_video_pane_g5

0xaa90,	// (0x000b4afd) main_video_pane_g6_ParamLimits

0xaa90,	// (0x000b4afd) main_video_pane_g6

0x0006,

0xf205,	// (0x000b9272) main_video_pane_g_ParamLimits

0xf205,	// (0x000b9272) main_video_pane_g

0x1245,	// (0x000ab2b2) main_video_pane_t1_ParamLimits

0x1245,	// (0x000ab2b2) main_video_pane_t1

0xaaaa,	// (0x000b4b17) cams_zoom_pane_g1

0xaab3,	// (0x000b4b20) cams_zoom_pane_g2

0xaabc,	// (0x000b4b29) cams_zoom_pane_g3

0xaac5,	// (0x000b4b32) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000b9281) cams_zoom_pane_g

0x12a2,	// (0x000ab30f) grid_cams_pane

0x12bc,	// (0x000ab329) linegrid_cams_pane

0x12cf,	// (0x000ab33c) cell_cams_pane_ParamLimits

0x12cf,	// (0x000ab33c) cell_cams_pane

0xaace,	// (0x000b4b3b) cams_burst_image_pane

0xaad6,	// (0x000b4b43) cell_cams_pane_g1

0xa00b,	// (0x000b4078) grid_highlight_pane_cp03

0xa38c,	// (0x000b43f9) mp_bg_pane_g1

0xa00b,	// (0x000b4078) bg_list_pane_cp03

0xc82d,	// (0x000b689a) bg_mp_pane

0xc835,	// (0x000b68a2) grid_mp_pane

0xc83d,	// (0x000b68aa) media_player_g1

0xc845,	// (0x000b68b2) media_player_t1

0xc853,	// (0x000b68c0) media_player_t2

0xc861,	// (0x000b68ce) media_player_t3

0xc86f,	// (0x000b68dc) media_player_t4

0xc87d,	// (0x000b68ea) media_player_t5

0xc88b,	// (0x000b68f8) media_player_t6

0xc899,	// (0x000b6906) media_player_t7

0x0006,

0xf5c3,	// (0x000b9630) media_player_t

0xc8a7,	// (0x000b6914) wait_bar_pane_cp02

0xf5a8,	// (0x000b9615) main_usb_pane_t

0x322c,	// (0x000ad299) cell_mp_pane

0xa38c,	// (0x000b43f9) cell_mp_pane_g1

0xa00b,	// (0x000b4078) grid_highlight_pane_cp06

0xaade,	// (0x000b4b4b) grid_skin_colour_pane

0xaae6,	// (0x000b4b53) list_highlight_pane_cp03

0x13e8,	// (0x000ab455) skin_g1

0xaaee,	// (0x000b4b5b) skin_t1

0xaafd,	// (0x000b4b6a) skin_t2

0x0001,

0xf249,	// (0x000b92b6) skin_t

0x13f0,	// (0x000ab45d) cell_skin_colour_pane_ParamLimits

0x13f0,	// (0x000ab45d) cell_skin_colour_pane

0xab0b,	// (0x000b4b78) cell_skin_colour_pane_g1

0x1469,	// (0x000ab4d6) call_video_g1_ParamLimits

0x1469,	// (0x000ab4d6) call_video_g1

0x1485,	// (0x000ab4f2) call_video_g2_ParamLimits

0x1485,	// (0x000ab4f2) call_video_g2

0x0001,

0xf24e,	// (0x000b92bb) call_video_g_ParamLimits

0xf24e,	// (0x000b92bb) call_video_g

0x14d7,	// (0x000ab544) call_video_uplink_pane_cp1_ParamLimits

0x14d7,	// (0x000ab544) call_video_uplink_pane_cp1

0xab1d,	// (0x000b4b8a) call_video_uplink_pane_cp2

0x1576,	// (0x000ab5e3) video_down_crop_pane_ParamLimits

0x1576,	// (0x000ab5e3) video_down_crop_pane

0x165f,	// (0x000ab6cc) video_down_pane_ParamLimits

0x165f,	// (0x000ab6cc) video_down_pane

0xab25,	// (0x000b4b92) video_down_subqcif_pane_ParamLimits

0xab25,	// (0x000b4b92) video_down_subqcif_pane

0xab3d,	// (0x000b4baa) video_down_subqcif_pane_cp_ParamLimits

0xab3d,	// (0x000b4baa) video_down_subqcif_pane_cp

0xab63,	// (0x000b4bd0) im_reading_pane_ParamLimits

0xab63,	// (0x000b4bd0) im_reading_pane

0x176f,	// (0x000ab7dc) im_writing_pane_ParamLimits

0x176f,	// (0x000ab7dc) im_writing_pane

0x1785,	// (0x000ab7f2) im_reading_pane_t1

0xab7d,	// (0x000b4bea) list_im_pane

0xab8e,	// (0x000b4bfb) scroll_pane_cp07

0x17bf,	// (0x000ab82c) im_writing_pane_t1_ParamLimits

0x17bf,	// (0x000ab82c) im_writing_pane_t1

0xaba7,	// (0x000b4c14) im_writing_pane_t2_ParamLimits

0xaba7,	// (0x000b4c14) im_writing_pane_t2

0x0001,

0xf258,	// (0x000b92c5) im_writing_pane_t_ParamLimits

0xf258,	// (0x000b92c5) im_writing_pane_t

0xa00b,	// (0x000b4078) input_focus_pane_cp04

0xa00b,	// (0x000b4078) input_focus_pane_cp05

0x17d4,	// (0x000ab841) list_im_single_pane_ParamLimits

0x17d4,	// (0x000ab841) list_im_single_pane

0x17e9,	// (0x000ab856) list_single_im_pane_t1

0x31ec,	// (0x000ad259) blid_accuracy_pane

0x31f4,	// (0x000ad261) blid_compass_pane

0x31fe,	// (0x000ad26b) main_location_t1

0x320e,	// (0x000ad27b) main_location_t2

0x321e,	// (0x000ad28b) main_location_t3

0x0002,

0xf5d2,	// (0x000b963f) main_location_t

0xa00b,	// (0x000b4078) aid_levels_location

0xa38c,	// (0x000b43f9) blid_accuracy_pane_g1

0xa38c,	// (0x000b43f9) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000b9327) blid_accuracy_pane_g

0xabef,	// (0x000b4c5c) wml_content_pane

0xac2d,	// (0x000b4c9a) wml_button_pane_ParamLimits

0xac2d,	// (0x000b4c9a) wml_button_pane

0x17f8,	// (0x000ab865) wml_list_single_large_pane_ParamLimits

0x17f8,	// (0x000ab865) wml_list_single_large_pane

0x180d,	// (0x000ab87a) wml_list_single_medium_pane_ParamLimits

0x180d,	// (0x000ab87a) wml_list_single_medium_pane

0x1824,	// (0x000ab891) wml_list_single_small_pane_ParamLimits

0x1824,	// (0x000ab891) wml_list_single_small_pane

0xac41,	// (0x000b4cae) wml_selection_box_pane_ParamLimits

0xac41,	// (0x000b4cae) wml_selection_box_pane

0xac54,	// (0x000b4cc1) wml_list_single_pane_t1

0xac63,	// (0x000b4cd0) wml_list_single_medium_pane_t1

0xac72,	// (0x000b4cdf) wml_list_single_large_pane_t1

0xac81,	// (0x000b4cee) input_focus_pane_cp02_ParamLimits

0xac81,	// (0x000b4cee) input_focus_pane_cp02

0xac94,	// (0x000b4d01) wml_selection_box_pane_g1

0xac9d,	// (0x000b4d0a) wml_selection_box_pane_t1_ParamLimits

0xac9d,	// (0x000b4d0a) wml_selection_box_pane_t1

0xa266,	// (0x000b42d3) bg_wml_button_pane_ParamLimits

0xa266,	// (0x000b42d3) bg_wml_button_pane

0xacb5,	// (0x000b4d22) wml_button_pane_g1

0xacbd,	// (0x000b4d2a) wml_button_pane_t1

0xacb5,	// (0x000b4d22) wml_button_bg_pane_g1

0xaccd,	// (0x000b4d3a) wml_button_bg_pane_g2

0xacd5,	// (0x000b4d42) wml_button_bg_pane_g3

0xacdd,	// (0x000b4d4a) wml_button_bg_pane_g4

0xace5,	// (0x000b4d52) wml_button_bg_pane_g5

0xaced,	// (0x000b4d5a) wml_button_bg_pane_g6

0xacf5,	// (0x000b4d62) wml_button_bg_pane_g7

0xacfd,	// (0x000b4d6a) wml_button_bg_pane_g8

0xad05,	// (0x000b4d72) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000b92ca) wml_button_bg_pane_g

0x183d,	// (0x000ab8aa) bg_list_pane_cp02

0xad0d,	// (0x000b4d7a) mce_header_pane_ParamLimits

0xad0d,	// (0x000b4d7a) mce_header_pane

0xad23,	// (0x000b4d90) mce_icon_pane

0xad23,	// (0x000b4d90) mce_image_pane

0xad2c,	// (0x000b4d99) mce_text_pane_ParamLimits

0xad2c,	// (0x000b4d99) mce_text_pane

0x1845,	// (0x000ab8b2) scroll_pane_cp03

0xac25,	// (0x000b4c92) scroll_pane_cp04

0xad3f,	// (0x000b4dac) scroll_pane_cp05_ParamLimits

0xad3f,	// (0x000b4dac) scroll_pane_cp05

0x184f,	// (0x000ab8bc) mce_header_field_pane_ParamLimits

0x184f,	// (0x000ab8bc) mce_header_field_pane

0x1866,	// (0x000ab8d3) mce_header_field_pane_2_ParamLimits

0x1866,	// (0x000ab8d3) mce_header_field_pane_2

0x187c,	// (0x000ab8e9) mce_header_field_pane_3

0x1884,	// (0x000ab8f1) list_single_mce_message_pane_ParamLimits

0x1884,	// (0x000ab8f1) list_single_mce_message_pane

0x189a,	// (0x000ab907) list_single_mce_smart_pane_ParamLimits

0x189a,	// (0x000ab907) list_single_mce_smart_pane

0xad4b,	// (0x000b4db8) input_focus_pane_cp03

0xad54,	// (0x000b4dc1) list_header_data_pane

0x18bb,	// (0x000ab928) mce_header_field_pane_t1

0x18cb,	// (0x000ab938) list_single_mce_header_pane_ParamLimits

0x18cb,	// (0x000ab938) list_single_mce_header_pane

0xad5c,	// (0x000b4dc9) list_single_mce_header_pane_t1

0xad6b,	// (0x000b4dd8) list_single_mce_message_pane_g1

0xad73,	// (0x000b4de0) list_single_mce_message_pane_t1

0x1905,	// (0x000ab972) bg_cale_heading_pane_cp01_ParamLimits

0x1905,	// (0x000ab972) bg_cale_heading_pane_cp01

0xad81,	// (0x000b4dee) bg_cale_pane_cp02_ParamLimits

0xad81,	// (0x000b4dee) bg_cale_pane_cp02

0x193f,	// (0x000ab9ac) cale_month_corner_pane

0x195e,	// (0x000ab9cb) cale_month_day_heading_pane_ParamLimits

0x195e,	// (0x000ab9cb) cale_month_day_heading_pane

0x19b0,	// (0x000aba1d) cale_month_pane_g1_ParamLimits

0x19b0,	// (0x000aba1d) cale_month_pane_g1

0x19df,	// (0x000aba4c) cale_month_pane_g2_ParamLimits

0x19df,	// (0x000aba4c) cale_month_pane_g2

0x1a0f,	// (0x000aba7c) cale_month_pane_g3_ParamLimits

0x1a0f,	// (0x000aba7c) cale_month_pane_g3

0x1a4b,	// (0x000abab8) cale_month_pane_g4_ParamLimits

0x1a4b,	// (0x000abab8) cale_month_pane_g4

0x1a87,	// (0x000abaf4) cale_month_pane_g5_ParamLimits

0x1a87,	// (0x000abaf4) cale_month_pane_g5

0x1acf,	// (0x000abb3c) cale_month_pane_g6_ParamLimits

0x1acf,	// (0x000abb3c) cale_month_pane_g6

0x1b1b,	// (0x000abb88) cale_month_pane_g7_ParamLimits

0x1b1b,	// (0x000abb88) cale_month_pane_g7

0x1b6b,	// (0x000abbd8) cale_month_pane_g8_ParamLimits

0x1b6b,	// (0x000abbd8) cale_month_pane_g8

0x1bbf,	// (0x000abc2c) cale_month_pane_g9_ParamLimits

0x1bbf,	// (0x000abc2c) cale_month_pane_g9

0x1c11,	// (0x000abc7e) cale_month_pane_g10_ParamLimits

0x1c11,	// (0x000abc7e) cale_month_pane_g10

0x1c63,	// (0x000abcd0) cale_month_pane_g11_ParamLimits

0x1c63,	// (0x000abcd0) cale_month_pane_g11

0x1cb5,	// (0x000abd22) cale_month_pane_g12_ParamLimits

0x1cb5,	// (0x000abd22) cale_month_pane_g12

0x1d07,	// (0x000abd74) cale_month_pane_g13_ParamLimits

0x1d07,	// (0x000abd74) cale_month_pane_g13

0x000c,

0xf270,	// (0x000b92dd) cale_month_pane_g_ParamLimits

0xf270,	// (0x000b92dd) cale_month_pane_g

0x1d59,	// (0x000abdc6) cale_month_week_pane

0x1d7d,	// (0x000abdea) grid_cale_month_pane_ParamLimits

0x1d7d,	// (0x000abdea) grid_cale_month_pane

0x1dc6,	// (0x000abe33) cale_month_day_heading_pane_t1

0x1e08,	// (0x000abe75) cale_month_day_heading_pane_t2

0x1e3d,	// (0x000abeaa) cale_month_day_heading_pane_t3

0x1e72,	// (0x000abedf) cale_month_day_heading_pane_t4

0x1eaf,	// (0x000abf1c) cale_month_day_heading_pane_t5

0x1ef4,	// (0x000abf61) cale_month_day_heading_pane_t6

0x1f39,	// (0x000abfa6) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000b92f8) cale_month_day_heading_pane_t

0xaa21,	// (0x000b4a8e) bg_cale_side_pane_cp01

0x1f86,	// (0x000abff3) cale_month_week_pane_t1

0x1f9f,	// (0x000ac00c) cale_month_week_pane_t2

0x1fb8,	// (0x000ac025) cale_month_week_pane_t3

0x1fd1,	// (0x000ac03e) cale_month_week_pane_t4

0x1fea,	// (0x000ac057) cale_month_week_pane_t5

0x2003,	// (0x000ac070) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000b9307) cale_month_week_pane_t

0x201c,	// (0x000ac089) cell_cale_month_pane_ParamLimits

0x201c,	// (0x000ac089) cell_cale_month_pane

0x97ac,	// (0x000b3819) cell_cale_month_pane_g1

0x2174,	// (0x000ac1e1) cell_cale_month_pane_t1_ParamLimits

0x2174,	// (0x000ac1e1) cell_cale_month_pane_t1

0xaa2f,	// (0x000b4a9c) grid_highlight_pane_cp08

0xa38c,	// (0x000b43f9) main_smil_g1

0x21a0,	// (0x000ac20d) smil_status_pane

0xadc0,	// (0x000b4e2d) smil_text_pane

0xc70d,	// (0x000b677a) bg_popup_call3_rect_pane_g8

0xc715,	// (0x000b6782) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x000b95c0) bg_popup_call3_rect_pane_g

0xc99c,	// (0x000b6a09) smil_status_volume_pane_g1

0xadca,	// (0x000b4e37) smil_status_pane_t1

0x98f2,	// (0x000b395f) volume_smil_pane

0xade1,	// (0x000b4e4e) list_smil_text_pane

0x21b5,	// (0x000ac222) scroll_pane_cp011

0x21c0,	// (0x000ac22d) smil_text_list_pane_t1_ParamLimits

0x21c0,	// (0x000ac22d) smil_text_list_pane_t1

0x97b8,	// (0x000b3825) aid_volume_smil_ParamLimits

0x97b8,	// (0x000b3825) aid_volume_smil

0xa38c,	// (0x000b43f9) smil_volume_pane_g1

0xa38c,	// (0x000b43f9) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000b9327) smil_volume_pane_g

0x0a38,	// (0x000aaaa5) listscroll_cale_day_pane

0xadeb,	// (0x000b4e58) bg_cale_pane

0xae03,	// (0x000b4e70) list_cale_pane

0xae26,	// (0x000b4e93) scroll_pane_cp09

0xae37,	// (0x000b4ea4) cale_bg_pane_g1

0xae3f,	// (0x000b4eac) cale_bg_pane_g2

0xae47,	// (0x000b4eb4) cale_bg_pane_g3

0xae4f,	// (0x000b4ebc) cale_bg_pane_g4

0xae57,	// (0x000b4ec4) cale_bg_pane_g5

0xae5f,	// (0x000b4ecc) cale_bg_pane_g6

0xae67,	// (0x000b4ed4) cale_bg_pane_g7

0xae6f,	// (0x000b4edc) cale_bg_pane_g8

0xae77,	// (0x000b4ee4) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000b932c) cale_bg_pane_g

0x220c,	// (0x000ac279) list_cale_time_pane_ParamLimits

0x220c,	// (0x000ac279) list_cale_time_pane

0xae7f,	// (0x000b4eec) list_cale_time_pane_g1_ParamLimits

0xae7f,	// (0x000b4eec) list_cale_time_pane_g1

0xae8b,	// (0x000b4ef8) list_cale_time_pane_g2_ParamLimits

0xae8b,	// (0x000b4ef8) list_cale_time_pane_g2

0x2222,	// (0x000ac28f) list_cale_time_pane_g3_ParamLimits

0x2222,	// (0x000ac28f) list_cale_time_pane_g3

0x2230,	// (0x000ac29d) list_cale_time_pane_g4_ParamLimits

0x2230,	// (0x000ac29d) list_cale_time_pane_g4

0x223e,	// (0x000ac2ab) list_cale_time_pane_g5_ParamLimits

0x223e,	// (0x000ac2ab) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000b933f) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000b933f) list_cale_time_pane_g

0xaea5,	// (0x000b4f12) list_cale_time_pane_t1_ParamLimits

0xaea5,	// (0x000b4f12) list_cale_time_pane_t1

0xaecd,	// (0x000b4f3a) list_cale_time_pane_t2_ParamLimits

0xaecd,	// (0x000b4f3a) list_cale_time_pane_t2

0x25be,	// (0x000ac62b) aid_blid_cardinal_pane

0x25fc,	// (0x000ac669) compass_pane_t4

0xaef5,	// (0x000b4f62) list_cale_time_pane_t4_ParamLimits

0xaef5,	// (0x000b4f62) list_cale_time_pane_t4

0x260a,	// (0x000ac677) compass_pane_t5

0x2618,	// (0x000ac685) compass_pane_t6

0x2626,	// (0x000ac693) compass_pane_t7

0xb399,	// (0x000b5406) navi_pane_cc_t1

0xb576,	// (0x000b55e3) aid_phob_thumbnail_center_pane

0x2c02,	// (0x000acc6f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000b934c) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000b934c) list_cale_time_pane_t

0x94d2,	// (0x000b353f) bg_popup_window_pane_cp02_ParamLimits

0x94d2,	// (0x000b353f) bg_popup_window_pane_cp02

0xaf1d,	// (0x000b4f8a) heading_pane_cp01_ParamLimits

0xaf1d,	// (0x000b4f8a) heading_pane_cp01

0xaf29,	// (0x000b4f96) loc_req_pane_ParamLimits

0xaf29,	// (0x000b4f96) loc_req_pane

0xaf39,	// (0x000b4fa6) loc_type_pane_ParamLimits

0xaf39,	// (0x000b4fa6) loc_type_pane

0xaf4b,	// (0x000b4fb8) loc_type_pane_t1_ParamLimits

0xaf4b,	// (0x000b4fb8) loc_type_pane_t1

0xaf5d,	// (0x000b4fca) loc_type_pane_t2_ParamLimits

0xaf5d,	// (0x000b4fca) loc_type_pane_t2

0xaf6f,	// (0x000b4fdc) loc_type_pane_t3_ParamLimits

0xaf6f,	// (0x000b4fdc) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000b9353) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000b9353) loc_type_pane_t

0xaf81,	// (0x000b4fee) list_loc_req_pane

0xaf8b,	// (0x000b4ff8) scroll_pane_cp012

0x224c,	// (0x000ac2b9) list_single_loc_request_popup_menu_pane_ParamLimits

0x224c,	// (0x000ac2b9) list_single_loc_request_popup_menu_pane

0xaf96,	// (0x000b5003) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf96,	// (0x000b5003) list_single_loc_request_popup_menu_pane_g1

0xafa2,	// (0x000b500f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa2,	// (0x000b500f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000b935a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000b935a) list_single_loc_request_popup_menu_pane_g

0xafae,	// (0x000b501b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafae,	// (0x000b501b) list_single_loc_request_popup_menu_pane_t1

0xa266,	// (0x000b42d3) bg_popup_window_pane_cp03_ParamLimits

0xa266,	// (0x000b42d3) bg_popup_window_pane_cp03

0xafc4,	// (0x000b5031) heading_loc_req_pane_ParamLimits

0xafc4,	// (0x000b5031) heading_loc_req_pane

0x2259,	// (0x000ac2c6) popup_dyc_status_message_window_g1_ParamLimits

0x2259,	// (0x000ac2c6) popup_dyc_status_message_window_g1

0x226d,	// (0x000ac2da) popup_dyc_status_message_window_t1_ParamLimits

0x226d,	// (0x000ac2da) popup_dyc_status_message_window_t1

0x2282,	// (0x000ac2ef) popup_dyc_status_message_window_t2_ParamLimits

0x2282,	// (0x000ac2ef) popup_dyc_status_message_window_t2

0x2297,	// (0x000ac304) popup_dyc_status_message_window_t3_ParamLimits

0x2297,	// (0x000ac304) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000b935f) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000b935f) popup_dyc_status_message_window_t

0xa00b,	// (0x000b4078) bg_heading_pane_cp01

0xafd0,	// (0x000b503d) heading_loc_req_pane_g1

0xafd8,	// (0x000b5045) heading_loc_req_pane_g2

0xafe0,	// (0x000b504d) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000b9366) heading_loc_req_pane_g

0xafe8,	// (0x000b5055) heading_loc_req_pane_t1

0xaff7,	// (0x000b5064) bg_popup_sub_pane_cp01_ParamLimits

0xaff7,	// (0x000b5064) bg_popup_sub_pane_cp01

0xb005,	// (0x000b5072) popup_cale_events_window_g1_ParamLimits

0xb005,	// (0x000b5072) popup_cale_events_window_g1

0xb025,	// (0x000b5092) popup_cale_events_window_g2_ParamLimits

0xb025,	// (0x000b5092) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000b939a) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000b939a) popup_cale_events_window_g

0xb045,	// (0x000b50b2) popup_cale_events_window_t1_ParamLimits

0xb045,	// (0x000b50b2) popup_cale_events_window_t1

0xb057,	// (0x000b50c4) popup_cale_events_window_t2_ParamLimits

0xb057,	// (0x000b50c4) popup_cale_events_window_t2

0xb095,	// (0x000b5102) popup_cale_events_window_t3_ParamLimits

0xb095,	// (0x000b5102) popup_cale_events_window_t3

0xb0cf,	// (0x000b513c) popup_cale_events_window_t4_ParamLimits

0xb0cf,	// (0x000b513c) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000b939f) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000b939f) popup_cale_events_window_t

0x238e,	// (0x000ac3fb) call_type_pane

0x239e,	// (0x000ac40b) popup_call_status_window_g1

0x23b2,	// (0x000ac41f) popup_call_status_window_g2

0x23c6,	// (0x000ac433) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000b93a8) popup_call_status_window_g

0xb105,	// (0x000b5172) call_type_pane_g1

0xb10e,	// (0x000b517b) call_type_pane_g2

0x0001,

0xf342,	// (0x000b93af) call_type_pane_g

0xa00b,	// (0x000b4078) bg_popup_sub_pane_cp02

0xb117,	// (0x000b5184) listscroll_popup_wml_pane

0xb11f,	// (0x000b518c) list_wml_pane

0xb129,	// (0x000b5196) scroll_pane_cp013

0xb134,	// (0x000b51a1) list_single_graphic_popup_wml_pane_ParamLimits

0xb134,	// (0x000b51a1) list_single_graphic_popup_wml_pane

0xa38c,	// (0x000b43f9) list_single_graphic_popup_wml_pane_g1

0xb148,	// (0x000b51b5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000b93b4) list_single_graphic_popup_wml_pane_g

0xb150,	// (0x000b51bd) list_single_graphic_popup_wml_pane_t1

0xb166,	// (0x000b51d3) aid_call_pane

0xa25e,	// (0x000b42cb) popup_clock_analogue_window_g1

0xa25e,	// (0x000b42cb) popup_clock_analogue_window_g2

0x97da,	// (0x000b3847) popup_clock_analogue_window_g3

0x97da,	// (0x000b3847) popup_clock_analogue_window_g4

0xa38c,	// (0x000b43f9) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000b93b9) popup_clock_analogue_window_g

0x97e2,	// (0x000b384f) popup_clock_analogue_window_t1

0x97f0,	// (0x000b385d) clock_digital_number_pane_ParamLimits

0x97f0,	// (0x000b385d) clock_digital_number_pane

0x97fc,	// (0x000b3869) clock_digital_number_pane_cp02_ParamLimits

0x97fc,	// (0x000b3869) clock_digital_number_pane_cp02

0x9808,	// (0x000b3875) clock_digital_number_pane_cp03_ParamLimits

0x9808,	// (0x000b3875) clock_digital_number_pane_cp03

0x9814,	// (0x000b3881) clock_digital_number_pane_cp04_ParamLimits

0x9814,	// (0x000b3881) clock_digital_number_pane_cp04

0x9820,	// (0x000b388d) clock_digital_separator_pane_ParamLimits

0x9820,	// (0x000b388d) clock_digital_separator_pane

0x982c,	// (0x000b3899) popup_clock_digital_window_t1

0xa38c,	// (0x000b43f9) clock_digital_number_pane_g1

0xa38c,	// (0x000b43f9) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000b9327) clock_digital_number_pane_g

0xa38c,	// (0x000b43f9) clock_digital_separator_pane_g1

0xa38c,	// (0x000b43f9) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000b9327) clock_digital_separator_pane_g

0xa00b,	// (0x000b4078) bg_popup_window_pane_cp04

0xb16e,	// (0x000b51db) heading_pane_cp03

0xb176,	// (0x000b51e3) listscroll_popup_gms_pane

0xb17e,	// (0x000b51eb) grid_large_graphic_popup_pane

0xb188,	// (0x000b51f5) listscroll_popup_gms_pane_g1

0xb190,	// (0x000b51fd) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000b93c4) listscroll_popup_gms_pane_g

0xac25,	// (0x000b4c92) scroll_pane_cp014

0x23d5,	// (0x000ac442) cell_large_graphic_popup_pane_ParamLimits

0x23d5,	// (0x000ac442) cell_large_graphic_popup_pane

0x23ed,	// (0x000ac45a) cell_large_graphic_popup_pane_g1_ParamLimits

0x23ed,	// (0x000ac45a) cell_large_graphic_popup_pane_g1

0xb198,	// (0x000b5205) cell_large_graphic_popup_pane_g2_ParamLimits

0xb198,	// (0x000b5205) cell_large_graphic_popup_pane_g2

0xb1a4,	// (0x000b5211) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1a4,	// (0x000b5211) cell_large_graphic_popup_pane_g3

0xb1b1,	// (0x000b521e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1b1,	// (0x000b521e) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000b93c9) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000b93c9) cell_large_graphic_popup_pane_g

0xb1c1,	// (0x000b522e) grid_highlight_pane_cp010

0xa38c,	// (0x000b43f9) bg_popup_call_pane_g1

0xb1cb,	// (0x000b5238) list_single_graphic_popup_conf_pane_ParamLimits

0xb1cb,	// (0x000b5238) list_single_graphic_popup_conf_pane

0xb1de,	// (0x000b524b) list_highlight_pane_cp01

0xb1e7,	// (0x000b5254) list_single_graphic_popup_conf_pane_g1

0xb1ef,	// (0x000b525c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000b93d2) list_single_graphic_popup_conf_pane_g

0xb1f7,	// (0x000b5264) list_single_graphic_popup_conf_pane_t1

0xb205,	// (0x000b5272) linegrid_cams_pane_g1

0x23f9,	// (0x000ac466) linegrid_cams_pane_g2

0xaa62,	// (0x000b4acf) linegrid_cams_pane_g3

0xb20e,	// (0x000b527b) linegrid_cams_pane_g4

0x2402,	// (0x000ac46f) linegrid_cams_pane_g5

0x240b,	// (0x000ac478) linegrid_cams_pane_g6

0xaa6b,	// (0x000b4ad8) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x000b93d7) linegrid_cams_pane_g

0xb217,	// (0x000b5284) popup_clock_analogue_window

0xb217,	// (0x000b5284) popup_clock_digital_window

0xa00b,	// (0x000b4078) popup_phob_thumbnail_window

0xa38c,	// (0x000b43f9) call_video_uplink_pane_g1

0xb220,	// (0x000b528d) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000b93e6) call_video_uplink_pane_g

0xb228,	// (0x000b5295) video_uplink_pane

0xb230,	// (0x000b529d) mce_image_pane_g1

0x2416,	// (0x000ac483) mce_image_pane_g2

0x241e,	// (0x000ac48b) mce_image_pane_g3

0x2426,	// (0x000ac493) mce_image_pane_g4

0x2430,	// (0x000ac49d) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000b93eb) mce_image_pane_g

0xb23a,	// (0x000b52a7) control_top_pane_stacon_cp01_ParamLimits

0xb23a,	// (0x000b52a7) control_top_pane_stacon_cp01

0xb24e,	// (0x000b52bb) uni_indicator_pane_stacon_cp01_ParamLimits

0xb24e,	// (0x000b52bb) uni_indicator_pane_stacon_cp01

0xb25f,	// (0x000b52cc) bg_popup_sub_pane_cp03

0x2438,	// (0x000ac4a5) chi_dic_find_pane

0x2440,	// (0x000ac4ad) listscroll_chi_dic_pane

0x2449,	// (0x000ac4b6) main_pane_chidic_g1

0x245c,	// (0x000ac4c9) chi_dic_find_pane_t1

0xb269,	// (0x000b52d6) find_chidic_pane

0xb272,	// (0x000b52df) chi_dic_list_pane_ParamLimits

0xb272,	// (0x000b52df) chi_dic_list_pane

0xb283,	// (0x000b52f0) scroll_pane_cp020

0x246a,	// (0x000ac4d7) find_chidic_pane_t1

0xa00b,	// (0x000b4078) input_focus_pane_cp06

0x2479,	// (0x000ac4e6) list_chi_dic_pane_ParamLimits

0x2479,	// (0x000ac4e6) list_chi_dic_pane

0x248b,	// (0x000ac4f8) list_chi_dic_pane_t1_ParamLimits

0x248b,	// (0x000ac4f8) list_chi_dic_pane_t1

0xa00b,	// (0x000b4078) list_highlight_pane_cp020

0xb28b,	// (0x000b52f8) bg_cale_heading_pane_g1

0x249e,	// (0x000ac50b) bg_cale_heading_pane_g2

0x24a6,	// (0x000ac513) bg_cale_heading_pane_g3

0x24ae,	// (0x000ac51b) bg_cale_heading_pane_g4

0x24b8,	// (0x000ac525) bg_cale_heading_pane_g5

0x24c2,	// (0x000ac52f) bg_cale_heading_pane_g6

0x24ca,	// (0x000ac537) bg_cale_heading_pane_g7

0x24d2,	// (0x000ac53f) bg_cale_heading_pane_g8

0x24dc,	// (0x000ac549) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000b93f6) bg_cale_heading_pane_g

0xb28b,	// (0x000b52f8) bg_cale_side_pane_g1

0x24e6,	// (0x000ac553) bg_cale_side_pane_g2

0x24ee,	// (0x000ac55b) bg_cale_side_pane_g3

0x24f6,	// (0x000ac563) bg_cale_side_pane_g4

0x24fe,	// (0x000ac56b) bg_cale_side_pane_g5

0x2506,	// (0x000ac573) bg_cale_side_pane_g6

0x250e,	// (0x000ac57b) bg_cale_side_pane_g7

0x2516,	// (0x000ac583) bg_cale_side_pane_g8

0x251e,	// (0x000ac58b) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000b9409) bg_cale_side_pane_g

0x2526,	// (0x000ac593) popup_call_status_window_ParamLimits

0x2526,	// (0x000ac593) popup_call_status_window

0xb293,	// (0x000b5300) stacon_top_pane

0xb29b,	// (0x000b5308) status_pane_ParamLimits

0xb29b,	// (0x000b5308) status_pane

0xb2b0,	// (0x000b531d) status_small_pane

0xb2b8,	// (0x000b5325) control_pane

0xa00b,	// (0x000b4078) stacon_bottom_pane

0xb2c0,	// (0x000b532d) list_single_mce_smart_pane_t1_ParamLimits

0xb2c0,	// (0x000b532d) list_single_mce_smart_pane_t1

0xb2d3,	// (0x000b5340) list_single_mce_smart_pane_t2_ParamLimits

0xb2d3,	// (0x000b5340) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000b941c) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000b941c) list_single_mce_smart_pane_t

0x256d,	// (0x000ac5da) compass_pane

0x2576,	// (0x000ac5e3) main_location2_pane_t1

0x2588,	// (0x000ac5f5) main_location2_pane_t2

0x259a,	// (0x000ac607) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000b9421) main_location2_pane_t

0xb2f2,	// (0x000b535f) compass_pane_g1_ParamLimits

0xb2f2,	// (0x000b535f) compass_pane_g1

0x25de,	// (0x000ac64b) compass_pane_t1

0x25ed,	// (0x000ac65a) compass_pane_t2

0x0005,

0xf3bd,	// (0x000b942a) compass_pane_t

0x2634,	// (0x000ac6a1) text_secondary_cp61

0xb390,	// (0x000b53fd) navi_pane_cams_g5

0xb40c,	// (0x000b5479) navi_pane_im_t1

0xb41a,	// (0x000b5487) navi_pane_mp_g1_ParamLimits

0xb41a,	// (0x000b5487) navi_pane_mp_g1

0xb42e,	// (0x000b549b) navi_pane_mp_g2_ParamLimits

0xb42e,	// (0x000b549b) navi_pane_mp_g2

0xb43a,	// (0x000b54a7) navi_pane_mp_g3_ParamLimits

0xb43a,	// (0x000b54a7) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000b943e) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000b943e) navi_pane_mp_g

0xb446,	// (0x000b54b3) navi_pane_mp_t1

0xb454,	// (0x000b54c1) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000b9445) navi_pane_mp_t

0xb4bf,	// (0x000b552c) navi_pane_vt_g1

0xb446,	// (0x000b54b3) navi_pane_vt_t1

0xb4c7,	// (0x000b5534) navi_slider_pane

0xaa7c,	// (0x000b4ae9) zooming_pane

0xb4d7,	// (0x000b5544) navi_slider_pane_g1

0x9849,	// (0x000b38b6) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000b944c) navi_slider_pane_g

0xb4fb,	// (0x000b5568) aid_levels_zoom

0xb503,	// (0x000b5570) zooming_pane_g1

0xb50b,	// (0x000b5578) zooming_pane_g2

0xb50b,	// (0x000b5578) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000b945b) zooming_pane_g

0xb513,	// (0x000b5580) level_10_zoom

0xb51c,	// (0x000b5589) level_11_zoom

0xb525,	// (0x000b5592) level_1_zoom

0xb52e,	// (0x000b559b) level_2_zoom

0xb537,	// (0x000b55a4) level_3_zoom

0xb540,	// (0x000b55ad) level_4_zoom

0xb549,	// (0x000b55b6) level_5_zoom

0xb552,	// (0x000b55bf) level_6_zoom

0xb55b,	// (0x000b55c8) level_7_zoom

0xb564,	// (0x000b55d1) level_8_zoom

0xb56d,	// (0x000b55da) level_9_zoom

0xb57e,	// (0x000b55eb) popup_phob_thumbnail_window_g1

0xb586,	// (0x000b55f3) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000b9462) popup_phob_thumbnail_window_g

0xc8af,	// (0x000b691c) level_1_location

0xc8b7,	// (0x000b6924) level_2_location

0xc8bf,	// (0x000b692c) level_3_location

0xc8c7,	// (0x000b6934) level_4_location

0xaa7c,	// (0x000b4ae9) level_5_location

0x2685,	// (0x000ac6f2) mce_icon_pane_g1

0x268f,	// (0x000ac6fc) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000b9467) mce_icon_pane_g

0x2697,	// (0x000ac704) main_mup_pane_g1_ParamLimits

0x2697,	// (0x000ac704) main_mup_pane_g1

0x26ad,	// (0x000ac71a) main_mup_pane_g2_ParamLimits

0x26ad,	// (0x000ac71a) main_mup_pane_g2

0x26bf,	// (0x000ac72c) main_mup_pane_g3_ParamLimits

0x26bf,	// (0x000ac72c) main_mup_pane_g3

0x26d1,	// (0x000ac73e) main_mup_pane_g4_ParamLimits

0x26d1,	// (0x000ac73e) main_mup_pane_g4

0x26e9,	// (0x000ac756) main_mup_pane_g5_ParamLimits

0x26e9,	// (0x000ac756) main_mup_pane_g5

0x2705,	// (0x000ac772) main_mup_pane_g6_ParamLimits

0x2705,	// (0x000ac772) main_mup_pane_g6

0x271d,	// (0x000ac78a) main_mup_pane_g7_ParamLimits

0x271d,	// (0x000ac78a) main_mup_pane_g7

0x2735,	// (0x000ac7a2) main_mup_pane_g8_ParamLimits

0x2735,	// (0x000ac7a2) main_mup_pane_g8

0x274d,	// (0x000ac7ba) main_mup_pane_g9_ParamLimits

0x274d,	// (0x000ac7ba) main_mup_pane_g9

0x2767,	// (0x000ac7d4) main_mup_pane_g10_ParamLimits

0x2767,	// (0x000ac7d4) main_mup_pane_g10

0x2781,	// (0x000ac7ee) main_mup_pane_g11_ParamLimits

0x2781,	// (0x000ac7ee) main_mup_pane_g11

0x2795,	// (0x000ac802) main_mup_pane_g12_ParamLimits

0x2795,	// (0x000ac802) main_mup_pane_g12

0x27ab,	// (0x000ac818) main_mup_pane_g13_ParamLimits

0x27ab,	// (0x000ac818) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000b946c) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000b946c) main_mup_pane_g

0x27bf,	// (0x000ac82c) main_mup_pane_t1_ParamLimits

0x27bf,	// (0x000ac82c) main_mup_pane_t1

0x27d9,	// (0x000ac846) main_mup_pane_t2_ParamLimits

0x27d9,	// (0x000ac846) main_mup_pane_t2

0x27f1,	// (0x000ac85e) main_mup_pane_t3_ParamLimits

0x27f1,	// (0x000ac85e) main_mup_pane_t3

0x2809,	// (0x000ac876) main_mup_pane_t4_ParamLimits

0x2809,	// (0x000ac876) main_mup_pane_t4

0x2827,	// (0x000ac894) main_mup_pane_t5_ParamLimits

0x2827,	// (0x000ac894) main_mup_pane_t5

0x283c,	// (0x000ac8a9) main_mup_pane_t6_ParamLimits

0x283c,	// (0x000ac8a9) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000b9487) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000b9487) main_mup_pane_t

0x284e,	// (0x000ac8bb) mup_progress_pane_ParamLimits

0x284e,	// (0x000ac8bb) mup_progress_pane

0x285a,	// (0x000ac8c7) mup_visualizer_pane_ParamLimits

0x285a,	// (0x000ac8c7) mup_visualizer_pane

0x288e,	// (0x000ac8fb) mup_volume_pane_ParamLimits

0x288e,	// (0x000ac8fb) mup_volume_pane

0xb370,	// (0x000b53dd) mup_visualizer_pane_g1_ParamLimits

0xb370,	// (0x000b53dd) mup_visualizer_pane_g1

0xb370,	// (0x000b53dd) mup_visualizer_pane_g2_ParamLimits

0xb370,	// (0x000b53dd) mup_visualizer_pane_g2

0xb2f2,	// (0x000b535f) mup_visualizer_pane_g3_ParamLimits

0xb2f2,	// (0x000b535f) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x000b9494) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x000b9494) mup_visualizer_pane_g

0xa38c,	// (0x000b43f9) mup_volume_pane_g1

0xb596,	// (0x000b5603) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x000b949b) mup_volume_pane_g

0xa38c,	// (0x000b43f9) mup_progress_pane_g1

0xb59f,	// (0x000b560c) mup_progress_pane_g2

0xb5a8,	// (0x000b5615) mup_progress_pane_g3

0x0002,

0xf433,	// (0x000b94a0) mup_progress_pane_g

0xa00b,	// (0x000b4078) bg_popup_window_pane_cp05

0xb5b1,	// (0x000b561e) heading_pane_cp02_ParamLimits

0xb5b1,	// (0x000b561e) heading_pane_cp02

0xb5cb,	// (0x000b5638) list_popup_blid_pane

0xb5d3,	// (0x000b5640) list_blid_sat_info_pane_ParamLimits

0xb5d3,	// (0x000b5640) list_blid_sat_info_pane

0xb5e6,	// (0x000b5653) list_blid_sat_info_pane_g1

0xb5ee,	// (0x000b565b) list_blid_sat_info_pane_t1

0x29a4,	// (0x000aca11) mup_equalizer_pane_ParamLimits

0x29a4,	// (0x000aca11) mup_equalizer_pane

0x29bd,	// (0x000aca2a) mup_equalizer_pane_cp1_ParamLimits

0x29bd,	// (0x000aca2a) mup_equalizer_pane_cp1

0x29da,	// (0x000aca47) mup_equalizer_pane_cp2_ParamLimits

0x29da,	// (0x000aca47) mup_equalizer_pane_cp2

0x29f7,	// (0x000aca64) mup_equalizer_pane_cp3_ParamLimits

0x29f7,	// (0x000aca64) mup_equalizer_pane_cp3

0x2a18,	// (0x000aca85) mup_equalizer_pane_cp4_ParamLimits

0x2a18,	// (0x000aca85) mup_equalizer_pane_cp4

0x2a39,	// (0x000acaa6) mup_equalizer_pane_cp5

0x2a4d,	// (0x000acaba) mup_equalizer_pane_cp6

0x2a61,	// (0x000acace) mup_equalizer_pane_cp7

0xc78d,	// (0x000b67fa) bg_popup_call_poc_act_pane_g9

0xc795,	// (0x000b6802) bg_popup_call_poc_act_pane_g10

0xc79d,	// (0x000b680a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa266,	// (0x000b42d3) mup_scale_pane

0xa38c,	// (0x000b43f9) mup_scale_pane_g1

0xb5fc,	// (0x000b5669) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x000b94bc) mup_scale_pane_g

0xb620,	// (0x000b568d) msg_data_pane

0xb628,	// (0x000b5695) scroll_pane_cp017

0x2a87,	// (0x000acaf4) bg_list_pane_cp04_ParamLimits

0x2a87,	// (0x000acaf4) bg_list_pane_cp04

0xb630,	// (0x000b569d) msg_data_pane_g1

0x2a9f,	// (0x000acb0c) msg_data_pane_g2

0x2aa7,	// (0x000acb14) msg_data_pane_g3

0x2aaf,	// (0x000acb1c) msg_data_pane_g4

0x2ab7,	// (0x000acb24) msg_data_pane_g5

0x2abf,	// (0x000acb2c) msg_data_pane_g6

0x2ac7,	// (0x000acb34) msg_data_pane_g7

0x0006,

0xf45e,	// (0x000b94cb) msg_data_pane_g

0x2acf,	// (0x000acb3c) msg_text_pane_ParamLimits

0x2acf,	// (0x000acb3c) msg_text_pane

0x2afa,	// (0x000acb67) qrid_highlight_pane_cp011_ParamLimits

0x2afa,	// (0x000acb67) qrid_highlight_pane_cp011

0xa00b,	// (0x000b4078) msg_body_pane

0xa00b,	// (0x000b4078) msg_header_pane

0xb641,	// (0x000b56ae) input_focus_pane_cp07

0xa3da,	// (0x000b4447) msg_header_pane_t1_ParamLimits

0xa3da,	// (0x000b4447) msg_header_pane_t1

0xa3ec,	// (0x000b4459) msg_header_pane_t2_ParamLimits

0xa3ec,	// (0x000b4459) msg_header_pane_t2

0x0001,

0xf472,	// (0x000b94df) msg_header_pane_t_ParamLimits

0xf472,	// (0x000b94df) msg_header_pane_t

0xb656,	// (0x000b56c3) msg_body_pane_g1

0xa3fe,	// (0x000b446b) msg_body_pane_t1_ParamLimits

0xa3fe,	// (0x000b446b) msg_body_pane_t1

0xa42f,	// (0x000b449c) msg_body_pane_t2_ParamLimits

0xa42f,	// (0x000b449c) msg_body_pane_t2

0xa441,	// (0x000b44ae) msg_body_pane_t3_ParamLimits

0xa441,	// (0x000b44ae) msg_body_pane_t3

0x0002,

0xf477,	// (0x000b94e4) msg_body_pane_t_ParamLimits

0xf477,	// (0x000b94e4) msg_body_pane_t

0x2b58,	// (0x000acbc5) main_viewer_pane_g1_ParamLimits

0x2b58,	// (0x000acbc5) main_viewer_pane_g1

0x2b66,	// (0x000acbd3) main_viewer_pane_g2_ParamLimits

0x2b66,	// (0x000acbd3) main_viewer_pane_g2

0x2b74,	// (0x000acbe1) main_viewer_pane_g3_ParamLimits

0x2b74,	// (0x000acbe1) main_viewer_pane_g3

0x2b83,	// (0x000acbf0) main_viewer_pane_g4_ParamLimits

0x2b83,	// (0x000acbf0) main_viewer_pane_g4

0x9873,	// (0x000b38e0) main_viewer_pane_g5_ParamLimits

0x9873,	// (0x000b38e0) main_viewer_pane_g5

0x9873,	// (0x000b38e0) main_viewer_pane_g7_ParamLimits

0x9873,	// (0x000b38e0) main_viewer_pane_g7

0xaf96,	// (0x000b5003) main_viewer_pane_g8_ParamLimits

0xaf96,	// (0x000b5003) main_viewer_pane_g8

0x0007,

0xf487,	// (0x000b94f4) main_viewer_pane_g_ParamLimits

0xf487,	// (0x000b94f4) main_viewer_pane_g

0xb65e,	// (0x000b56cb) viewer_content_pane_ParamLimits

0xb65e,	// (0x000b56cb) viewer_content_pane

0x2bbf,	// (0x000acc2c) main_postcard_pane_g1_ParamLimits

0x2bbf,	// (0x000acc2c) main_postcard_pane_g1

0x2bd5,	// (0x000acc42) main_postcard_pane_g2_ParamLimits

0x2bd5,	// (0x000acc42) main_postcard_pane_g2

0x2beb,	// (0x000acc58) main_postcard_pane_g3_ParamLimits

0x2beb,	// (0x000acc58) main_postcard_pane_g3

0x0005,

0xf498,	// (0x000b9505) main_postcard_pane_g_ParamLimits

0xf498,	// (0x000b9505) main_postcard_pane_g

0x2c02,	// (0x000acc6f) main_postcard_pane_g4

0xc9af,	// (0x000b6a1c) smil_status_volume_pane_g2

0x2c45,	// (0x000accb2) postcard_pane_ParamLimits

0x2c45,	// (0x000accb2) postcard_pane

0xb66c,	// (0x000b56d9) postcard_pane_g1_ParamLimits

0xb66c,	// (0x000b56d9) postcard_pane_g1

0x2c87,	// (0x000accf4) postcard_pane_g2_ParamLimits

0x2c87,	// (0x000accf4) postcard_pane_g2

0x2c93,	// (0x000acd00) postcard_pane_g3_ParamLimits

0x2c93,	// (0x000acd00) postcard_pane_g3

0xb67a,	// (0x000b56e7) postcard_pane_g4_ParamLimits

0xb67a,	// (0x000b56e7) postcard_pane_g4

0x2c9f,	// (0x000acd0c) postcard_pane_g5_ParamLimits

0x2c9f,	// (0x000acd0c) postcard_pane_g5

0x2cb4,	// (0x000acd21) postcard_pane_g6_ParamLimits

0x2cb4,	// (0x000acd21) postcard_pane_g6

0xb66c,	// (0x000b56d9) postcard_pane_g7_ParamLimits

0xb66c,	// (0x000b56d9) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000b9512) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000b9512) postcard_pane_g

0x2cc8,	// (0x000acd35) main_mp2_pane_g1_ParamLimits

0x2cc8,	// (0x000acd35) main_mp2_pane_g1

0x2cd4,	// (0x000acd41) main_mp2_pane_g2_ParamLimits

0x2cd4,	// (0x000acd41) main_mp2_pane_g2

0x2ce0,	// (0x000acd4d) main_mp2_pane_g3_ParamLimits

0x2ce0,	// (0x000acd4d) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000b9521) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000b9521) main_mp2_pane_g

0x2cec,	// (0x000acd59) main_mp2_pane_t1_ParamLimits

0x2cec,	// (0x000acd59) main_mp2_pane_t1

0x2d01,	// (0x000acd6e) main_mp2_pane_t2_ParamLimits

0x2d01,	// (0x000acd6e) main_mp2_pane_t2

0x2d13,	// (0x000acd80) main_mp2_pane_t3_ParamLimits

0x2d13,	// (0x000acd80) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000b9528) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000b9528) main_mp2_pane_t

0xb688,	// (0x000b56f5) pec_content_pane_ParamLimits

0xb688,	// (0x000b56f5) pec_content_pane

0xac25,	// (0x000b4c92) scroll_pane_cp015

0xb69a,	// (0x000b5707) pec_attribute_pane_ParamLimits

0xb69a,	// (0x000b5707) pec_attribute_pane

0x2d25,	// (0x000acd92) pec_content_pane_g1_ParamLimits

0x2d25,	// (0x000acd92) pec_content_pane_g1

0xb6aa,	// (0x000b5717) pec_content_pane_t1_ParamLimits

0xb6aa,	// (0x000b5717) pec_content_pane_t1

0xb6bc,	// (0x000b5729) pec_content_pane_t2_ParamLimits

0xb6bc,	// (0x000b5729) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x000b952f) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x000b952f) pec_content_pane_t

0x2d31,	// (0x000acd9e) list_single_graphic_pane_cp01_ParamLimits

0x2d31,	// (0x000acd9e) list_single_graphic_pane_cp01

0xa266,	// (0x000b42d3) bg_popup_sub_pane_cp04

0xb6ce,	// (0x000b573b) popup_mup_playback_window_g1

0xb6da,	// (0x000b5747) popup_mup_playback_window_t1

0xb6ef,	// (0x000b575c) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000b9534) popup_mup_playback_window_t

0xb726,	// (0x000b5793) main_image_pane_g1_ParamLimits

0xb726,	// (0x000b5793) main_image_pane_g1

0xb769,	// (0x000b57d6) scroll_pane_cp018_ParamLimits

0xb769,	// (0x000b57d6) scroll_pane_cp018

0xb781,	// (0x000b57ee) scroll_pane_cp016_ParamLimits

0xb781,	// (0x000b57ee) scroll_pane_cp016

0x2dff,	// (0x000ace6c) smil2_image_pane_ParamLimits

0x2dff,	// (0x000ace6c) smil2_image_pane

0x2e2f,	// (0x000ace9c) smil2_root_pane_ParamLimits

0x2e2f,	// (0x000ace9c) smil2_root_pane

0x2e67,	// (0x000aced4) smil2_text_pane_ParamLimits

0x2e67,	// (0x000aced4) smil2_text_pane

0xa00b,	// (0x000b4078) bg_list_pane_cp06

0xb7bd,	// (0x000b582a) grid_radio_pane

0xa00b,	// (0x000b4078) bg_popup_window_pane_cp06

0xb7c5,	// (0x000b5832) main_fmradio_pane_t1

0xb16e,	// (0x000b51db) heading_pane_cp04

0xb7d3,	// (0x000b5840) main_fmradio_pane_t2

0xc7e5,	// (0x000b6852) popup_cale_lunar_info_window_g1

0xb7e1,	// (0x000b584e) main_fmradio_pane_t3

0xc7ed,	// (0x000b685a) popup_cale_lunar_info_window_g2

0xb7ef,	// (0x000b585c) main_fmradio_pane_t4

0x0001,

0xb7fd,	// (0x000b586a) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x000b9622) popup_cale_lunar_info_window_g

0xf4dc,	// (0x000b9549) main_fmradio_pane_t

0xb80b,	// (0x000b5878) wait_bar_pane_cp03

0xb813,	// (0x000b5880) cell_fmradio_pane_ParamLimits

0xb813,	// (0x000b5880) cell_fmradio_pane

0xb66c,	// (0x000b56d9) cell_fmradio_pane_g1_ParamLimits

0xb66c,	// (0x000b56d9) cell_fmradio_pane_g1

0xa00b,	// (0x000b4078) grid_highlight_pane_cp011

0xb826,	// (0x000b5893) poc_content_pane_ParamLimits

0xb826,	// (0x000b5893) poc_content_pane

0xb838,	// (0x000b58a5) scroll_pane_cp019

0x2ee7,	// (0x000acf54) popup_call_poc_act_window_ParamLimits

0x2ee7,	// (0x000acf54) popup_call_poc_act_window

0x2f0b,	// (0x000acf78) popup_call_poc_inact_window_ParamLimits

0x2f0b,	// (0x000acf78) popup_call_poc_inact_window

0xf579,	// (0x000b95e6) bg_popup_call_poc_act_pane_g

0xc7a5,	// (0x000b6812) bg_popup_call_poc_inact_pane_g1

0xc7ad,	// (0x000b681a) bg_popup_call_poc_inact_pane_g2

0xb840,	// (0x000b58ad) popup_call_poc_act_window_g2

0xc7b5,	// (0x000b6822) bg_popup_call_poc_inact_pane_g3

0xc735,	// (0x000b67a2) bg_popup_call_poc_inact_pane_g4

0xc7bd,	// (0x000b682a) bg_popup_call_poc_inact_pane_g5

0xb848,	// (0x000b58b5) popup_call_poc_act_window_t1_ParamLimits

0xb848,	// (0x000b58b5) popup_call_poc_act_window_t1

0xb870,	// (0x000b58dd) popup_call_poc_act_window_t2_ParamLimits

0xb870,	// (0x000b58dd) popup_call_poc_act_window_t2

0xb898,	// (0x000b5905) popup_call_poc_act_window_t3_ParamLimits

0xb898,	// (0x000b5905) popup_call_poc_act_window_t3

0xb8c0,	// (0x000b592d) popup_call_poc_act_window_t4_ParamLimits

0xb8c0,	// (0x000b592d) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x000b9554) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x000b9554) popup_call_poc_act_window_t

0xc7c5,	// (0x000b6832) bg_popup_call_poc_inact_pane_g6

0xc7cd,	// (0x000b683a) bg_popup_call_poc_inact_pane_g7

0xc7d5,	// (0x000b6842) bg_popup_call_poc_inact_pane_g8

0xb8d2,	// (0x000b593f) popup_call_poc_inact_window_g2

0xc7dd,	// (0x000b684a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x000b95fd) bg_popup_call_poc_inact_pane_g

0xb8da,	// (0x000b5947) popup_call_poc_inact_window_t1_ParamLimits

0xb8da,	// (0x000b5947) popup_call_poc_inact_window_t1

0xb8ef,	// (0x000b595c) popup_call_poc_inact_window_t2_ParamLimits

0xb8ef,	// (0x000b595c) popup_call_poc_inact_window_t2

0xb904,	// (0x000b5971) popup_call_poc_inact_window_t3_ParamLimits

0xb904,	// (0x000b5971) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x000b955d) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x000b955d) popup_call_poc_inact_window_t

0xc922,	// (0x000b698f) context_pane_ParamLimits

0x3745,	// (0x000ad7b2) signal_pane_ParamLimits

0xaa7c,	// (0x000b4ae9) main_call2_pane

0x98be,	// (0x000b392b) popup_phob_thumbnail2_window_ParamLimits

0x98be,	// (0x000b392b) popup_phob_thumbnail2_window

0x985b,	// (0x000b38c8) aid_hotspot_pointer_arrow_pane

0x9863,	// (0x000b38d0) aid_hotspot_pointer_hand_pane

0x3255,	// (0x000ad2c2) phob_pre_status_pane_g5

0x1012,	// (0x000ab07f) cams_zoom_pane_ParamLimits

0x1021,	// (0x000ab08e) image_vga_pane_ParamLimits

0x103b,	// (0x000ab0a8) main_camera_pane_g1_ParamLimits

0x104d,	// (0x000ab0ba) main_camera_pane_g2_ParamLimits

0x105d,	// (0x000ab0ca) main_camera_pane_g3_ParamLimits

0x106d,	// (0x000ab0da) main_camera_pane_g4_ParamLimits

0x107d,	// (0x000ab0ea) main_camera_pane_g5_ParamLimits

0x108d,	// (0x000ab0fa) main_camera_pane_g6_ParamLimits

0x109d,	// (0x000ab10a) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000b925c) main_camera_pane_g_ParamLimits

0x10ad,	// (0x000ab11a) main_camera_pane_t1_ParamLimits

0x10c3,	// (0x000ab130) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000b926d) main_camera_pane_t_ParamLimits

0xa266,	// (0x000b42d3) bg_popup_preview_window_pane_cp01_ParamLimits

0xa266,	// (0x000b42d3) bg_popup_preview_window_pane_cp01

0xb919,	// (0x000b5986) popup_phob_thumbnail2_window_g1_ParamLimits

0xb919,	// (0x000b5986) popup_phob_thumbnail2_window_g1

0xa00b,	// (0x000b4078) call2_cli_visual_pane

0x2f3f,	// (0x000acfac) popup_call2_audio_conf_window_ParamLimits

0x2f3f,	// (0x000acfac) popup_call2_audio_conf_window

0x2f5f,	// (0x000acfcc) popup_call2_audio_first_window_ParamLimits

0x2f5f,	// (0x000acfcc) popup_call2_audio_first_window

0x2ff5,	// (0x000ad062) popup_call2_audio_in_window_ParamLimits

0x2ff5,	// (0x000ad062) popup_call2_audio_in_window

0x303d,	// (0x000ad0aa) popup_call2_audio_out_window_ParamLimits

0x303d,	// (0x000ad0aa) popup_call2_audio_out_window

0x30a7,	// (0x000ad114) popup_call2_audio_second_window_ParamLimits

0x30a7,	// (0x000ad114) popup_call2_audio_second_window

0x310d,	// (0x000ad17a) popup_call2_audio_wait_window_ParamLimits

0x310d,	// (0x000ad17a) popup_call2_audio_wait_window

0xa00b,	// (0x000b4078) bg_popup_call2_act_pane_cp03

0xa248,	// (0x000b42b5) list_conf_pane_cp

0xb925,	// (0x000b5992) popup_call2_audio_conf_window_t1

0xb933,	// (0x000b59a0) list_single_graphic_popup_conf2_pane_ParamLimits

0xb933,	// (0x000b59a0) list_single_graphic_popup_conf2_pane

0xb1de,	// (0x000b524b) list_highlight_pane_cp04

0xb946,	// (0x000b59b3) list_single_graphic_popup_conf2_pane_g1

0xb1ef,	// (0x000b525c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x000b9564) list_single_graphic_popup_conf2_pane_g

0xb950,	// (0x000b59bd) list_single_graphic_popup_conf2_pane_t1

0xb95e,	// (0x000b59cb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb95e,	// (0x000b59cb) bg_popup_call2_act_pane_cp01

0xb9e8,	// (0x000b5a55) call_type_pane_cp05_ParamLimits

0xb9e8,	// (0x000b5a55) call_type_pane_cp05

0xba3c,	// (0x000b5aa9) popup_call2_audio_second_window_g1_ParamLimits

0xba3c,	// (0x000b5aa9) popup_call2_audio_second_window_g1

0xba90,	// (0x000b5afd) popup_call2_audio_second_window_g2_ParamLimits

0xba90,	// (0x000b5afd) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x000b9569) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x000b9569) popup_call2_audio_second_window_g

0xbaf5,	// (0x000b5b62) popup_call2_audio_second_window_t1_ParamLimits

0xbaf5,	// (0x000b5b62) popup_call2_audio_second_window_t1

0xbbb0,	// (0x000b5c1d) popup_call2_audio_second_window_t2_ParamLimits

0xbbb0,	// (0x000b5c1d) popup_call2_audio_second_window_t2

0xbc03,	// (0x000b5c70) popup_call2_audio_second_window_t3_ParamLimits

0xbc03,	// (0x000b5c70) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x000b9570) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x000b9570) popup_call2_audio_second_window_t

0xa00b,	// (0x000b4078) bg_popup_call2_in_pane_cp02

0xa015,	// (0x000b4082) call_type_pane_cp04

0xa01d,	// (0x000b408a) popup_call2_audio_wait_window_g1

0xa025,	// (0x000b4092) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000b914b) popup_call2_audio_wait_window_g

0xa02d,	// (0x000b409a) popup_call2_audio_wait_window_t3

0xbcf6,	// (0x000b5d63) bg_popup_call2_act_pane_ParamLimits

0xbcf6,	// (0x000b5d63) bg_popup_call2_act_pane

0xbdb6,	// (0x000b5e23) call_type_pane_cp03_ParamLimits

0xbdb6,	// (0x000b5e23) call_type_pane_cp03

0xbe1a,	// (0x000b5e87) popup_call2_audio_first_window_g1_ParamLimits

0xbe1a,	// (0x000b5e87) popup_call2_audio_first_window_g1

0xbe8a,	// (0x000b5ef7) popup_call2_audio_first_window_g2_ParamLimits

0xbe8a,	// (0x000b5ef7) popup_call2_audio_first_window_g2

0xb370,	// (0x000b53dd) popup_call2_audio_first_window_g3_ParamLimits

0xb370,	// (0x000b53dd) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x000b9579) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x000b9579) popup_call2_audio_first_window_g

0xbf68,	// (0x000b5fd5) popup_call2_audio_first_window_t1_ParamLimits

0xbf68,	// (0x000b5fd5) popup_call2_audio_first_window_t1

0xc06b,	// (0x000b60d8) popup_call2_audio_first_window_t4_ParamLimits

0xc06b,	// (0x000b60d8) popup_call2_audio_first_window_t4

0xc14e,	// (0x000b61bb) popup_call2_audio_first_window_t5_ParamLimits

0xc14e,	// (0x000b61bb) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x000b9584) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x000b9584) popup_call2_audio_first_window_t

0xa25e,	// (0x000b42cb) bg_popup_call2_act_pane_g1

0xc7f5,	// (0x000b6862) popup_cale_lunar_info_window_t1

0xc803,	// (0x000b6870) popup_cale_lunar_info_window_t2

0xc811,	// (0x000b687e) popup_cale_lunar_info_window_t3

0xa00b,	// (0x000b4078) bg_popup_call2_bubble_pane

0xc24f,	// (0x000b62bc) bg_popup_call2_in_pane_cp01_ParamLimits

0xc24f,	// (0x000b62bc) bg_popup_call2_in_pane_cp01

0x9557,	// (0x000b35c4) call_type_pane_cp02

0xc297,	// (0x000b6304) popup_call2_audio_out_window_g1_ParamLimits

0xc297,	// (0x000b6304) popup_call2_audio_out_window_g1

0xc2c3,	// (0x000b6330) popup_call2_audio_out_window_g2_ParamLimits

0xc2c3,	// (0x000b6330) popup_call2_audio_out_window_g2

0xc2eb,	// (0x000b6358) popup_call2_audio_out_window_g3_ParamLimits

0xc2eb,	// (0x000b6358) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x000b958d) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x000b958d) popup_call2_audio_out_window_g

0xc326,	// (0x000b6393) popup_call2_audio_out_window_t1_ParamLimits

0xc326,	// (0x000b6393) popup_call2_audio_out_window_t1

0xc385,	// (0x000b63f2) popup_call2_audio_out_window_t2_ParamLimits

0xc385,	// (0x000b63f2) popup_call2_audio_out_window_t2

0xc3d9,	// (0x000b6446) popup_call2_audio_out_window_t3_ParamLimits

0xc3d9,	// (0x000b6446) popup_call2_audio_out_window_t3

0xc3ef,	// (0x000b645c) popup_call2_audio_out_window_t4_ParamLimits

0xc3ef,	// (0x000b645c) popup_call2_audio_out_window_t4

0xc405,	// (0x000b6472) popup_call2_audio_out_window_t5_ParamLimits

0xc405,	// (0x000b6472) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x000b9596) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x000b9596) popup_call2_audio_out_window_t

0xc469,	// (0x000b64d6) bg_popup_call2_in_pane_ParamLimits

0xc469,	// (0x000b64d6) bg_popup_call2_in_pane

0xc4c5,	// (0x000b6532) popup_call2_audio_in_window_g1_ParamLimits

0xc4c5,	// (0x000b6532) popup_call2_audio_in_window_g1

0xc4fd,	// (0x000b656a) popup_call2_audio_in_window_g2_ParamLimits

0xc4fd,	// (0x000b656a) popup_call2_audio_in_window_g2

0xc535,	// (0x000b65a2) popup_call2_audio_in_window_g3_ParamLimits

0xc535,	// (0x000b65a2) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x000b95a3) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x000b95a3) popup_call2_audio_in_window_g

0xc58d,	// (0x000b65fa) popup_call2_audio_in_window_t1_ParamLimits

0xc58d,	// (0x000b65fa) popup_call2_audio_in_window_t1

0xc60d,	// (0x000b667a) popup_call2_audio_in_window_t2_ParamLimits

0xc60d,	// (0x000b667a) popup_call2_audio_in_window_t2

0xc68d,	// (0x000b66fa) popup_call2_audio_in_window_t3_ParamLimits

0xc68d,	// (0x000b66fa) popup_call2_audio_in_window_t3

0xc6a7,	// (0x000b6714) popup_call2_audio_in_window_t4_ParamLimits

0xc6a7,	// (0x000b6714) popup_call2_audio_in_window_t4

0xc6b9,	// (0x000b6726) popup_call2_audio_in_window_t5_ParamLimits

0xc6b9,	// (0x000b6726) popup_call2_audio_in_window_t5

0xc6cb,	// (0x000b6738) popup_call2_audio_in_window_t6_ParamLimits

0xc6cb,	// (0x000b6738) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x000b95ac) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x000b95ac) popup_call2_audio_in_window_t

0xa25e,	// (0x000b42cb) bg_popup_call2_in_pane_g1

0xc81f,	// (0x000b688c) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x000b9627) popup_cale_lunar_info_window_t

0xa266,	// (0x000b42d3) bg_popup_call2_rect_pane_ParamLimits

0xa266,	// (0x000b42d3) bg_popup_call2_rect_pane

0xa00b,	// (0x000b4078) call2_cli_visual_graphic_pane

0xa00b,	// (0x000b4078) call2_cli_visual_text_pane

0x98e5,	// (0x000b3952) smil_status_volume_pane_g3

0x0002,

0xa38c,	// (0x000b43f9) call2_cli_visual_graphic_pane_g1

0xa38c,	// (0x000b43f9) call2_cli_visual_graphic_pane_g2

0xa38c,	// (0x000b43f9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x000b95b9) call2_cli_visual_graphic_pane_g

0xc6dd,	// (0x000b674a) bg_popup_call2_rect_pane_g1

0xa97a,	// (0x000b49e7) bg_popup_call2_rect_pane_g2

0xc6e5,	// (0x000b6752) bg_popup_call2_rect_pane_g3

0xc6ed,	// (0x000b675a) bg_popup_call2_rect_pane_g4

0xc6f5,	// (0x000b6762) bg_popup_call2_rect_pane_g5

0xc6fd,	// (0x000b676a) bg_popup_call2_rect_pane_g6

0xc705,	// (0x000b6772) bg_popup_call2_rect_pane_g7

0xc70d,	// (0x000b677a) bg_popup_call2_rect_pane_g8

0xc715,	// (0x000b6782) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x000b95c0) bg_popup_call2_rect_pane_g

0xc71d,	// (0x000b678a) bg_popup_call2_bubble_pane_g1

0xc725,	// (0x000b6792) bg_popup_call2_bubble_pane_g2

0xc72d,	// (0x000b679a) bg_popup_call2_bubble_pane_g3

0xc735,	// (0x000b67a2) bg_popup_call2_bubble_pane_g4

0xc73d,	// (0x000b67aa) bg_popup_call2_bubble_pane_g5

0xc745,	// (0x000b67b2) bg_popup_call2_bubble_pane_g6

0xc74d,	// (0x000b67ba) bg_popup_call2_bubble_pane_g7

0xc755,	// (0x000b67c2) bg_popup_call2_bubble_pane_g8

0xc75d,	// (0x000b67ca) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x000b95d3) bg_popup_call2_bubble_pane_g

0x0a4a,	// (0x000aaab7) aid_cale_week_size_cell_pane

0x10d9,	// (0x000ab146) aid_cams_cif_uncrop_pane_ParamLimits

0x10d9,	// (0x000ab146) aid_cams_cif_uncrop_pane

0x128e,	// (0x000ab2fb) aid_cams_size_cell_ParamLimits

0x128e,	// (0x000ab2fb) aid_cams_size_cell

0x12a2,	// (0x000ab30f) grid_cams_pane_ParamLimits

0x12bc,	// (0x000ab329) linegrid_cams_pane_ParamLimits

0x149b,	// (0x000ab508) call_video_pane_t1

0x14b9,	// (0x000ab526) call_video_pane_t2

0x0001,

0xf253,	// (0x000b92c0) call_video_pane_t

0x18df,	// (0x000ab94c) aid_cale_month_size_cell_pane_ParamLimits

0x18df,	// (0x000ab94c) aid_cale_month_size_cell_pane

0xf603,	// (0x000b9670) smil_status_volume_pane_g

0x98f2,	// (0x000b395f) volume_smil_pane_ParamLimits

0x02e8,	// (0x000aa355) aid_popup2_width_pane

0x09ce,	// (0x000aaa3b) cell_qdial_pane_g4_ParamLimits

0x09ce,	// (0x000aaa3b) cell_qdial_pane_g4

0x25be,	// (0x000ac62b) aid_blid_cardinal_pane_ParamLimits

0x25ca,	// (0x000ac637) aid_blid_destination_pane_ParamLimits

0x25ca,	// (0x000ac637) aid_blid_destination_pane

0xa266,	// (0x000b42d3) bg_popup_call_poc_act_pane_ParamLimits

0xa266,	// (0x000b42d3) bg_popup_call_poc_act_pane

0xa266,	// (0x000b42d3) bg_popup_call_poc_inact_pane_ParamLimits

0xa266,	// (0x000b42d3) bg_popup_call_poc_inact_pane

0xc765,	// (0x000b67d2) bg_popup_call_poc_act_pane_g1

0xc76d,	// (0x000b67da) bg_popup_call_poc_act_pane_g2

0xc775,	// (0x000b67e2) bg_popup_call_poc_act_pane_g3

0xc735,	// (0x000b67a2) bg_popup_call_poc_act_pane_g4

0xc73d,	// (0x000b67aa) bg_popup_call_poc_act_pane_g5

0xc77d,	// (0x000b67ea) bg_popup_call_poc_act_pane_g6

0xc74d,	// (0x000b67ba) bg_popup_call_poc_act_pane_g7

0xc785,	// (0x000b67f2) bg_popup_call_poc_act_pane_g8

0xa00b,	// (0x000b4078) main_usb_pane

0x9899,	// (0x000b3906) popup_cale_lunar_info_window

0x1785,	// (0x000ab7f2) im_reading_pane_t1_ParamLimits

0xab7d,	// (0x000b4bea) list_im_pane_ParamLimits

0xab8e,	// (0x000b4bfb) scroll_pane_cp07_ParamLimits

0xa00b,	// (0x000b4078) grid_highlight_pane_cp012

0xa266,	// (0x000b42d3) mup_scale_pane_ParamLimits

0xb66c,	// (0x000b56d9) main_usb_pane_g1_ParamLimits

0xb66c,	// (0x000b56d9) main_usb_pane_g1

0x316a,	// (0x000ad1d7) main_usb_pane_g2_ParamLimits

0x316a,	// (0x000ad1d7) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x000b9610) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x000b9610) main_usb_pane_g

0x3180,	// (0x000ad1ed) main_usb_pane_t1_ParamLimits

0x3180,	// (0x000ad1ed) main_usb_pane_t1

0x3192,	// (0x000ad1ff) main_usb_pane_t2_ParamLimits

0x3192,	// (0x000ad1ff) main_usb_pane_t2

0x31a4,	// (0x000ad211) main_usb_pane_t3_ParamLimits

0x31a4,	// (0x000ad211) main_usb_pane_t3

0x31b6,	// (0x000ad223) main_usb_pane_t4_ParamLimits

0x31b6,	// (0x000ad223) main_usb_pane_t4

0x31c8,	// (0x000ad235) main_usb_pane_t5_ParamLimits

0x31c8,	// (0x000ad235) main_usb_pane_t5

0x31da,	// (0x000ad247) main_usb_pane_t6_ParamLimits

0x31da,	// (0x000ad247) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x000b9615) main_usb_pane_t_ParamLimits

0x256d,	// (0x000ac5da) aid_text_placing

0x2576,	// (0x000ac5e3) main_location2_pane_t1_ParamLimits

0x2588,	// (0x000ac5f5) main_location2_pane_t2_ParamLimits

0x259a,	// (0x000ac607) main_location2_pane_t3_ParamLimits

0x25ac,	// (0x000ac619) main_location2_pane_t4_ParamLimits

0x25ac,	// (0x000ac619) main_location2_pane_t4

0xf3b4,	// (0x000b9421) main_location2_pane_t_ParamLimits

0xa2a2,	// (0x000b430f) find_pinb_pane_g2_ParamLimits

0xa2a2,	// (0x000b430f) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000b9171) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000b9171) find_pinb_pane_g

0xa2ae,	// (0x000b431b) find_pinb_pane_t1_ParamLimits

0xa2c0,	// (0x000b432d) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000b9176) find_pinb_pane_t_ParamLimits

0xa00b,	// (0x000b4078) main_call3_pane

0x1dc6,	// (0x000abe33) cale_month_day_heading_pane_t1_ParamLimits

0x1e08,	// (0x000abe75) cale_month_day_heading_pane_t2_ParamLimits

0x1e3d,	// (0x000abeaa) cale_month_day_heading_pane_t3_ParamLimits

0x1e72,	// (0x000abedf) cale_month_day_heading_pane_t4_ParamLimits

0x1eaf,	// (0x000abf1c) cale_month_day_heading_pane_t5_ParamLimits

0x1ef4,	// (0x000abf61) cale_month_day_heading_pane_t6_ParamLimits

0x1f39,	// (0x000abfa6) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000b92f8) cale_month_day_heading_pane_t_ParamLimits

0xadd8,	// (0x000b4e45) smil_status_volume_pane

0x2c63,	// (0x000accd0) postcard_address_pane_ParamLimits

0x2c63,	// (0x000accd0) postcard_address_pane

0x2c75,	// (0x000acce2) postcard_message_pane_ParamLimits

0x2c75,	// (0x000acce2) postcard_message_pane

0x3147,	// (0x000ad1b4) call2_cli_visual_pane_t1_ParamLimits

0x3147,	// (0x000ad1b4) call2_cli_visual_pane_t1

0x3974,	// (0x000ad9e1) postcard_message_pane_t1_ParamLimits

0x3974,	// (0x000ad9e1) postcard_message_pane_t1

0x395d,	// (0x000ad9ca) postcard_address_pane_t1_ParamLimits

0x395d,	// (0x000ad9ca) postcard_address_pane_t1

0x3949,	// (0x000ad9b6) popup_call3_audio_in_window_ParamLimits

0x3949,	// (0x000ad9b6) popup_call3_audio_in_window

0x37d4,	// (0x000ad841) bg_popup_call3_in_pane_ParamLimits

0x37d4,	// (0x000ad841) bg_popup_call3_in_pane

0x384a,	// (0x000ad8b7) popup_call3_audio_in_window_g1_ParamLimits

0x384a,	// (0x000ad8b7) popup_call3_audio_in_window_g1

0x386a,	// (0x000ad8d7) popup_call3_audio_in_window_g2_ParamLimits

0x386a,	// (0x000ad8d7) popup_call3_audio_in_window_g2

0x388a,	// (0x000ad8f7) popup_call3_audio_in_window_g3_ParamLimits

0x388a,	// (0x000ad8f7) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x000b9677) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x000b9677) popup_call3_audio_in_window_g

0x38bb,	// (0x000ad928) popup_call3_audio_in_window_t1_ParamLimits

0x38bb,	// (0x000ad928) popup_call3_audio_in_window_t1

0x38f9,	// (0x000ad966) popup_call3_audio_in_window_t2_ParamLimits

0x38f9,	// (0x000ad966) popup_call3_audio_in_window_t2

0x3937,	// (0x000ad9a4) popup_call3_audio_in_window_t3_ParamLimits

0x3937,	// (0x000ad9a4) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x000b9680) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x000b9680) popup_call3_audio_in_window_t

0xaa7c,	// (0x000b4ae9) bg_popup_call3_rect_pane

0xc6dd,	// (0x000b674a) bg_popup_call3_rect_pane_g1

0xa97a,	// (0x000b49e7) bg_popup_call3_rect_pane_g2

0xc6e5,	// (0x000b6752) bg_popup_call3_rect_pane_g3

0xc6ed,	// (0x000b675a) bg_popup_call3_rect_pane_g4

0xc6f5,	// (0x000b6762) bg_popup_call3_rect_pane_g5

0xc6fd,	// (0x000b676a) bg_popup_call3_rect_pane_g6

0xc705,	// (0x000b6772) bg_popup_call3_rect_pane_g7

0x28a4,	// (0x000ac911) mup_visualizer_osc_pane

0xb58e,	// (0x000b55fb) mup_visualizer_spec_pane

0x3804,	// (0x000ad871) call3_video_qcif_pane_ParamLimits

0x3804,	// (0x000ad871) call3_video_qcif_pane

0x3817,	// (0x000ad884) call3_video_qcif_uncrop_pane_ParamLimits

0x3817,	// (0x000ad884) call3_video_qcif_uncrop_pane

0x3825,	// (0x000ad892) call3_video_subqcif_pane_ParamLimits

0x3825,	// (0x000ad892) call3_video_subqcif_pane

0x3839,	// (0x000ad8a6) call3_video_subqcif_uncrop_pane_ParamLimits

0x3839,	// (0x000ad8a6) call3_video_subqcif_uncrop_pane

0x38aa,	// (0x000ad917) popup_call3_audio_in_window_g4_ParamLimits

0x38aa,	// (0x000ad917) popup_call3_audio_in_window_g4

0x37c3,	// (0x000ad830) mup_spec_half_pane

0x37cc,	// (0x000ad839) mup_spec_half_pane_cp

0xc982,	// (0x000b69ef) mup_osc_middle_pane

0xc98b,	// (0x000b69f8) mup_visualizer_osc_pane_g1

0x37a3,	// (0x000ad810) mup_spec_bar_pane_ParamLimits

0x37a3,	// (0x000ad810) mup_spec_bar_pane

0xc96f,	// (0x000b69dc) mup_spec_bar_pane_g1

0xc979,	// (0x000b69e6) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x000b966b) mup_spec_bar_pane_g

0x0a4a,	// (0x000aaab7) aid_cale_week_size_cell_pane_ParamLimits

0x0a64,	// (0x000aaad1) bg_cale_heading_pane_ParamLimits

0xa9d5,	// (0x000b4a42) bg_cale_pane_cp01_ParamLimits

0x0a7c,	// (0x000aaae9) cale_week_corner_pane_ParamLimits

0x0a9b,	// (0x000aab08) cale_week_day_heading_pane_ParamLimits

0x0ab8,	// (0x000aab25) cale_week_scroll_pane_g1_ParamLimits

0x0acb,	// (0x000aab38) cale_week_scroll_pane_g2_ParamLimits

0x0ae3,	// (0x000aab50) cale_week_scroll_pane_g3_ParamLimits

0x0afb,	// (0x000aab68) cale_week_scroll_pane_g4_ParamLimits

0x0b13,	// (0x000aab80) cale_week_scroll_pane_g5_ParamLimits

0x0b33,	// (0x000aaba0) cale_week_scroll_pane_g6_ParamLimits

0x0b53,	// (0x000aabc0) cale_week_scroll_pane_g7_ParamLimits

0x0b73,	// (0x000aabe0) cale_week_scroll_pane_g8_ParamLimits

0x0b97,	// (0x000aac04) cale_week_scroll_pane_g9_ParamLimits

0x0baf,	// (0x000aac1c) cale_week_scroll_pane_g10_ParamLimits

0x0bc7,	// (0x000aac34) cale_week_scroll_pane_g11_ParamLimits

0x0bdf,	// (0x000aac4c) cale_week_scroll_pane_g12_ParamLimits

0x0bf7,	// (0x000aac64) cale_week_scroll_pane_g13_ParamLimits

0x0bf7,	// (0x000aac64) cale_week_scroll_pane_g14_ParamLimits

0x0bf7,	// (0x000aac64) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000b9202) cale_week_scroll_pane_g_ParamLimits

0x0c33,	// (0x000aaca0) cale_week_time_pane_ParamLimits

0x0c57,	// (0x000aacc4) grid_cale_week_pane_ParamLimits

0xa9f2,	// (0x000b4a5f) listscroll_cale_week_pane_t1

0xaa04,	// (0x000b4a71) scroll_pane_cp08_ParamLimits

0x193f,	// (0x000ab9ac) cale_month_corner_pane_ParamLimits

0xadae,	// (0x000b4e1b) cale_month_pane_t1

0x1d59,	// (0x000abdc6) cale_month_week_pane_ParamLimits

0x239e,	// (0x000ac40b) popup_call_status_window_g1_ParamLimits

0x23b2,	// (0x000ac41f) popup_call_status_window_g2_ParamLimits

0x23c6,	// (0x000ac433) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000b93a8) popup_call_status_window_g_ParamLimits

0xb15e,	// (0x000b51cb) aid_call2_pane

0x2b10,	// (0x000acb7d) msg_header_pane_g1

0x2c63,	// (0x000accd0) postcard_address2_pane_ParamLimits

0x2c63,	// (0x000accd0) postcard_address2_pane

0x2c75,	// (0x000acce2) postcard_message2_pane_ParamLimits

0x2c75,	// (0x000acce2) postcard_message2_pane

0x3753,	// (0x000ad7c0) message2_row_pane_ParamLimits

0x3753,	// (0x000ad7c0) message2_row_pane

0x3770,	// (0x000ad7dd) address2_row_pane_ParamLimits

0x3770,	// (0x000ad7dd) address2_row_pane

0xc93d,	// (0x000b69aa) postcard_message2_row_pane_g1

0xc945,	// (0x000b69b2) postcard_message2_row_pane_t1

0xc93d,	// (0x000b69aa) address2_row_pane_g1

0xc945,	// (0x000b69b2) address2_row_pane_t1

0x0f91,	// (0x000aaffe) aid_size_cell_vorec

0xa00b,	// (0x000b4078) main_rss_pane

0x3783,	// (0x000ad7f0) rss_list_single_pane_ParamLimits

0x3783,	// (0x000ad7f0) rss_list_single_pane

0xc953,	// (0x000b69c0) rss_list_single_pane_t1

0xc961,	// (0x000b69ce) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x000b9666) rss_list_single_pane_t

0xa00b,	// (0x000b4078) main_camera2_pane

0xa00b,	// (0x000b4078) main_video2_pane

0x39ed,	// (0x000ada5a) cams_zoom_pane_cp2_ParamLimits

0x39ed,	// (0x000ada5a) cams_zoom_pane_cp2

0x3a0d,	// (0x000ada7a) image2_vga_pane_ParamLimits

0x3a0d,	// (0x000ada7a) image2_vga_pane

0x3a5e,	// (0x000adacb) main_camera2_pane_g1_ParamLimits

0x3a5e,	// (0x000adacb) main_camera2_pane_g1

0x3a7e,	// (0x000adaeb) main_camera2_pane_g2_ParamLimits

0x3a7e,	// (0x000adaeb) main_camera2_pane_g2

0x3a9e,	// (0x000adb0b) main_camera2_pane_g3_ParamLimits

0x3a9e,	// (0x000adb0b) main_camera2_pane_g3

0x3abe,	// (0x000adb2b) main_camera2_pane_g4_ParamLimits

0x3abe,	// (0x000adb2b) main_camera2_pane_g4

0x3ade,	// (0x000adb4b) main_camera2_pane_g5_ParamLimits

0x3ade,	// (0x000adb4b) main_camera2_pane_g5

0x3afe,	// (0x000adb6b) main_camera2_pane_g6_ParamLimits

0x3afe,	// (0x000adb6b) main_camera2_pane_g6

0x3b1e,	// (0x000adb8b) main_camera2_pane_g7_ParamLimits

0x3b1e,	// (0x000adb8b) main_camera2_pane_g7

0x3b3e,	// (0x000adbab) main_camera2_pane_g8_ParamLimits

0x3b3e,	// (0x000adbab) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x000b9687) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x000b9687) main_camera2_pane_g

0x3b7e,	// (0x000adbeb) main_camera2_pane_t1_ParamLimits

0x3b7e,	// (0x000adbeb) main_camera2_pane_t1

0x3bb3,	// (0x000adc20) main_camera2_pane_t2_ParamLimits

0x3bb3,	// (0x000adc20) main_camera2_pane_t2

0x3bd9,	// (0x000adc46) main_camera2_pane_t3_ParamLimits

0x3bd9,	// (0x000adc46) main_camera2_pane_t3

0x3c37,	// (0x000adca4) main_camera2_pane_t4_ParamLimits

0x3c37,	// (0x000adca4) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x000b969a) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x000b969a) main_camera2_pane_t

0x3cc9,	// (0x000add36) cams_zoom_pane_cp4_ParamLimits

0x3cc9,	// (0x000add36) cams_zoom_pane_cp4

0x3cdf,	// (0x000add4c) image2_cif_pane_ParamLimits

0x3cdf,	// (0x000add4c) image2_cif_pane

0x3d0a,	// (0x000add77) image2_subqcif_pane_ParamLimits

0x3d0a,	// (0x000add77) image2_subqcif_pane

0x3d24,	// (0x000add91) main_video2_pane_g1_ParamLimits

0x3d24,	// (0x000add91) main_video2_pane_g1

0x3d3e,	// (0x000addab) main_video2_pane_g2_ParamLimits

0x3d3e,	// (0x000addab) main_video2_pane_g2

0x3d54,	// (0x000addc1) main_video2_pane_g3_ParamLimits

0x3d54,	// (0x000addc1) main_video2_pane_g3

0x3d6a,	// (0x000addd7) main_video2_pane_g4_ParamLimits

0x3d6a,	// (0x000addd7) main_video2_pane_g4

0x3d80,	// (0x000added) main_video2_pane_g5_ParamLimits

0x3d80,	// (0x000added) main_video2_pane_g5

0x3d96,	// (0x000ade03) main_video2_pane_g6_ParamLimits

0x3d96,	// (0x000ade03) main_video2_pane_g6

0x0005,

0xf63c,	// (0x000b96a9) main_video2_pane_g_ParamLimits

0xf63c,	// (0x000b96a9) main_video2_pane_g

0x3db0,	// (0x000ade1d) main_video2_pane_t1_ParamLimits

0x3db0,	// (0x000ade1d) main_video2_pane_t1

0x3dd4,	// (0x000ade41) main_video2_pane_t2_ParamLimits

0x3dd4,	// (0x000ade41) main_video2_pane_t2

0x3e22,	// (0x000ade8f) main_video2_pane_t3_ParamLimits

0x3e22,	// (0x000ade8f) main_video2_pane_t3

0x0002,

0xf649,	// (0x000b96b6) main_video2_pane_t_ParamLimits

0xf649,	// (0x000b96b6) main_video2_pane_t

0x3295,	// (0x000ad302) call_muted_g2

0x0001,

0xf5eb,	// (0x000b9658) call_muted_g

0xa00b,	// (0x000b4078) main_mup2_pane

0x3e6a,	// (0x000aded7) main_mup2_pane_g1_ParamLimits

0x3e6a,	// (0x000aded7) main_mup2_pane_g1

0x3e76,	// (0x000adee3) main_mup2_pane_g2_ParamLimits

0x3e76,	// (0x000adee3) main_mup2_pane_g2

0x9960,	// (0x000b39cd) main_mup_pane_g13_cp1

0x9968,	// (0x000b39d5) mup_volume_pane_cp1

0x3e92,	// (0x000adeff) main_mup2_pane_g4_ParamLimits

0x3e92,	// (0x000adeff) main_mup2_pane_g4

0x3ea4,	// (0x000adf11) main_mup2_pane_g5_ParamLimits

0x3ea4,	// (0x000adf11) main_mup2_pane_g5

0x3eb6,	// (0x000adf23) main_mup2_pane_g6_ParamLimits

0x3eb6,	// (0x000adf23) main_mup2_pane_g6

0x3ec8,	// (0x000adf35) main_mup2_pane_g7_ParamLimits

0x3ec8,	// (0x000adf35) main_mup2_pane_g7

0x0006,

0xf650,	// (0x000b96bd) main_mup2_pane_g_ParamLimits

0xf650,	// (0x000b96bd) main_mup2_pane_g

0x3ee0,	// (0x000adf4d) main_mup2_pane_t1_ParamLimits

0x3ee0,	// (0x000adf4d) main_mup2_pane_t1

0x3ef6,	// (0x000adf63) main_mup2_pane_t2_ParamLimits

0x3ef6,	// (0x000adf63) main_mup2_pane_t2

0x3f0c,	// (0x000adf79) main_mup2_pane_t3_ParamLimits

0x3f0c,	// (0x000adf79) main_mup2_pane_t3

0x3f22,	// (0x000adf8f) main_mup2_pane_t4_ParamLimits

0x3f22,	// (0x000adf8f) main_mup2_pane_t4

0x3f3a,	// (0x000adfa7) main_mup2_pane_t5_ParamLimits

0x3f3a,	// (0x000adfa7) main_mup2_pane_t5

0x3f52,	// (0x000adfbf) main_mup2_pane_t6_ParamLimits

0x3f52,	// (0x000adfbf) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x000b96cc) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x000b96cc) main_mup2_pane_t

0x3f82,	// (0x000adfef) mup2_visualizer_pane_ParamLimits

0x3f82,	// (0x000adfef) mup2_visualizer_pane

0x3fb0,	// (0x000ae01d) mup_progress_pane_cp_ParamLimits

0x3fb0,	// (0x000ae01d) mup_progress_pane_cp

0x994b,	// (0x000b39b8) mup_volume_pane_cp_ParamLimits

0x994b,	// (0x000b39b8) mup_volume_pane_cp

0x3fc4,	// (0x000ae031) mup2_visualizer_pane_g1_ParamLimits

0x3fc4,	// (0x000ae031) mup2_visualizer_pane_g1

0xc9c2,	// (0x000b6a2f) mup2_visualizer_pane_g2_ParamLimits

0xc9c2,	// (0x000b6a2f) mup2_visualizer_pane_g2

0x3fdb,	// (0x000ae048) mup2_visualizer_pane_g3_ParamLimits

0x3fdb,	// (0x000ae048) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x000b96d9) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x000b96d9) mup2_visualizer_pane_g

0xb7b5,	// (0x000b5822) aid_size_cell_fmradio

0x3447,	// (0x000ad4b4) aid_height_parent_landcape

0xac0c,	// (0x000b4c79) wml_content_pane_cp

0xac14,	// (0x000b4c81) wml_tabs_pane

0xac1d,	// (0x000b4c8a) popup_wml_miniature_window

0xac25,	// (0x000b4c92) scroll_pane_cp021

0xac39,	// (0x000b4ca6) wml_content_pane_comp8

0xa00b,	// (0x000b4078) bg_popup_sub_pane_cp05

0xc9e0,	// (0x000b6a4d) popup_wml_miniature_window_g1

0xc9e8,	// (0x000b6a55) wml_miniature_view_pane

0x3fe7,	// (0x000ae054) aid_size_wml_view

0x3fef,	// (0x000ae05c) wml_miniature_view_pane_g1

0x3ff8,	// (0x000ae065) wml_miniature_view_pane_g2

0x4001,	// (0x000ae06e) wml_miniature_view_pane_g3

0x4009,	// (0x000ae076) wml_miniature_view_pane_g4

0x4011,	// (0x000ae07e) wml_miniature_view_pane_g5

0x4019,	// (0x000ae086) wml_miniature_view_pane_g6

0x4021,	// (0x000ae08e) wml_miniature_view_pane_g7

0x4029,	// (0x000ae096) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x000b96e0) wml_miniature_view_pane_g

0xc9f0,	// (0x000b6a5d) background_graphic_ParamLimits

0xc9f0,	// (0x000b6a5d) background_graphic

0xc9fc,	// (0x000b6a69) wml_tabs_2_pane

0xca05,	// (0x000b6a72) wml_tabs_3_pane_ParamLimits

0xca05,	// (0x000b6a72) wml_tabs_3_pane

0xca17,	// (0x000b6a84) wml_tabs_4_pane_ParamLimits

0xca17,	// (0x000b6a84) wml_tabs_4_pane

0xca2d,	// (0x000b6a9a) wml_tabs_5_pane_ParamLimits

0xca2d,	// (0x000b6a9a) wml_tabs_5_pane

0xca47,	// (0x000b6ab4) wml_tabs_pane_g2_ParamLimits

0xca47,	// (0x000b6ab4) wml_tabs_pane_g2

0xca5b,	// (0x000b6ac8) wml_tabs_pane_g3_ParamLimits

0xca5b,	// (0x000b6ac8) wml_tabs_pane_g3

0x4031,	// (0x000ae09e) wml_tabs_2_active_pane_ParamLimits

0x4031,	// (0x000ae09e) wml_tabs_2_active_pane

0x4045,	// (0x000ae0b2) wml_tabs_2_passive_pane_ParamLimits

0x4045,	// (0x000ae0b2) wml_tabs_2_passive_pane

0x4059,	// (0x000ae0c6) wml_tabs_3_active_pane_cp_ParamLimits

0x4059,	// (0x000ae0c6) wml_tabs_3_active_pane_cp

0x406e,	// (0x000ae0db) wml_tabs_3_passive_pane_ParamLimits

0x406e,	// (0x000ae0db) wml_tabs_3_passive_pane

0x4081,	// (0x000ae0ee) wml_tabs_3_passive_pane_cp_ParamLimits

0x4081,	// (0x000ae0ee) wml_tabs_3_passive_pane_cp

0x4098,	// (0x000ae105) tabs_4_active_pane

0x40a0,	// (0x000ae10d) tabs_4_passive_pane

0x40aa,	// (0x000ae117) tabs_4_passive_pane_cp

0x40b2,	// (0x000ae11f) tabs_4_passive_pane_cp2

0x3162,	// (0x000ad1cf) aid_height_text

0x2876,	// (0x000ac8e3) mup_volume_cont_pane_ParamLimits

0x2876,	// (0x000ac8e3) mup_volume_cont_pane

0x066e,	// (0x000aa6db) aid_size_cell_pinb

0x0678,	// (0x000aa6e5) aid_size_list_pinb

0x3f9c,	// (0x000ae009) mup2_volume_cont_pane_ParamLimits

0x3f9c,	// (0x000ae009) mup2_volume_cont_pane

0x9937,	// (0x000b39a4) mup2_volume_cont_pane_g1_ParamLimits

0x9937,	// (0x000b39a4) mup2_volume_cont_pane_g1

0x02f4,	// (0x000aa361) aid_size_cell_touch_ParamLimits

0x02f4,	// (0x000aa361) aid_size_cell_touch

0x055d,	// (0x000aa5ca) touch_pane_ParamLimits

0x055d,	// (0x000aa5ca) touch_pane

0x945e,	// (0x000b34cb) main_rss2_pane

0xca78,	// (0x000b6ae5) listscroll_rss2_pane

0xca81,	// (0x000b6aee) rss2_navigation_pane

0xca89,	// (0x000b6af6) list_rss2_pane

0xb283,	// (0x000b52f0) scroll_pane_cp22

0xca91,	// (0x000b6afe) rss2_navigation_pane_g1

0xca9a,	// (0x000b6b07) rss2_navigation_pane_g2

0xcaa2,	// (0x000b6b0f) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x000b96f1) rss2_navigation_pane_g

0xcaaa,	// (0x000b6b17) rss2_navigation_pane_t1

0x40bc,	// (0x000ae129) rss2_list_single_pane_ParamLimits

0x40bc,	// (0x000ae129) rss2_list_single_pane

0xcab8,	// (0x000b6b25) rss2_list_single_pane_t2

0xcac6,	// (0x000b6b33) rss2_list_single_pane_t3_ParamLimits

0xcac6,	// (0x000b6b33) rss2_list_single_pane_t3

0xcae3,	// (0x000b6b50) rss2_list_single_pane_t4

0x21ab,	// (0x000ac218) smil_status_pane_g1

0x9450,	// (0x000b34bd) main_image2_pane_ParamLimits

0x9450,	// (0x000b34bd) main_image2_pane

0x3b5e,	// (0x000adbcb) main_camera2_pane_g9_ParamLimits

0x3b5e,	// (0x000adbcb) main_camera2_pane_g9

0x3c8c,	// (0x000adcf9) main_camera2_pane_t5_ParamLimits

0x3c8c,	// (0x000adcf9) main_camera2_pane_t5

0x9907,	// (0x000b3974) main_camera2_pane_t6_ParamLimits

0x9907,	// (0x000b3974) main_camera2_pane_t6

0x40d2,	// (0x000ae13f) main_image2_pane_g1_ParamLimits

0x40d2,	// (0x000ae13f) main_image2_pane_g1

0x2e9d,	// (0x000acf0a) smil2_video_pane_ParamLimits

0x2e9d,	// (0x000acf0a) smil2_video_pane

0x0334,	// (0x000aa3a1) aid_zoom_text_primary_cp

0x9446,	// (0x000b34b3) popup_preview_fixed_window

0xab75,	// (0x000b4be2) im_reading_pane_g1

0x39d5,	// (0x000ada42) cams2_bc_adjust_pane_cp_ParamLimits

0x39d5,	// (0x000ada42) cams2_bc_adjust_pane_cp

0x3cbb,	// (0x000add28) cams2_bc_adjust_pane_ParamLimits

0x3cbb,	// (0x000add28) cams2_bc_adjust_pane

0xd336,	// (0x000b73a3) cams2_bc_adjust_pane_g1

0x9970,	// (0x000b39dd) cams2_slider_pane

0x9979,	// (0x000b39e6) cams2_slider_pane_g1

0x9982,	// (0x000b39ef) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x000b96f8) cams2_slider_pane_g

0x0760,	// (0x000aa7cd) calc_display_pane_ParamLimits

0x0785,	// (0x000aa7f2) calc_paper_pane_ParamLimits

0x07a8,	// (0x000aa815) grid_calc_pane_ParamLimits

0x982c,	// (0x000b3899) popup_clock_digital_window_t1_ParamLimits

0xb752,	// (0x000b57bf) main_image_pane_t1

0x0742,	// (0x000aa7af) aid_size_cell_calc_ParamLimits

0x0742,	// (0x000aa7af) aid_size_cell_calc

0x349f,	// (0x000ad50c) popup_blid_sat_info2_window_ParamLimits

0x349f,	// (0x000ad50c) popup_blid_sat_info2_window

0xcaf9,	// (0x000b6b66) aid_size_cell_blid

0xcb01,	// (0x000b6b6e) bg_popup_window_pane_cp07

0xcb24,	// (0x000b6b91) grid_popup_blid_pane

0xcb2e,	// (0x000b6b9b) heading_pane_cp05_ParamLimits

0xcb2e,	// (0x000b6b9b) heading_pane_cp05

0xcbf8,	// (0x000b6c65) cell_popup_blid_pane_ParamLimits

0xcbf8,	// (0x000b6c65) cell_popup_blid_pane

0xcc1c,	// (0x000b6c89) cell_popup_blid_pane_g1

0xcc24,	// (0x000b6c91) cell_popup_blid_pane_t1

0x3f6c,	// (0x000adfd9) mup2_indicator_pane_ParamLimits

0x3f6c,	// (0x000adfd9) mup2_indicator_pane

0xaa7c,	// (0x000b4ae9) mup2_visualizer_osc_pane

0xc9ce,	// (0x000b6a3b) mup2_visualizer_spec_pane_ParamLimits

0xc9ce,	// (0x000b6a3b) mup2_visualizer_spec_pane

0x40e8,	// (0x000ae155) mup2_spec_half_pane

0x40f1,	// (0x000ae15e) mup2_spec_half_pane_cp

0x40f9,	// (0x000ae166) mup2_spec_bar_pane_ParamLimits

0x40f9,	// (0x000ae166) mup2_spec_bar_pane

0xc96f,	// (0x000b69dc) mup2_spec_bar_pane_g1

0xc979,	// (0x000b69e6) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x000b966b) mup2_spec_bar_pane_g

0x4119,	// (0x000ae186) mup2_osc_middle_pane

0xc98b,	// (0x000b69f8) mup2_visualizer_osc_pane_g1

0x9488,	// (0x000b34f5) popup_number_entry_window_t1_ParamLimits

0x949b,	// (0x000b3508) popup_number_entry_window_t2_ParamLimits

0x94ad,	// (0x000b351a) popup_number_entry_window_t3_ParamLimits

0x05af,	// (0x000aa61c) popup_number_entry_window_t5_ParamLimits

0x05af,	// (0x000aa61c) popup_number_entry_window_t5

0xf0af,	// (0x000b911c) popup_number_entry_window_t_ParamLimits

0x94bf,	// (0x000b352c) text_title_cp2_ParamLimits

0x986b,	// (0x000b38d8) aid_hotspot_pointer_text2_pane

0x9885,	// (0x000b38f2) main_viewer_pane_g9_ParamLimits

0x9885,	// (0x000b38f2) main_viewer_pane_g9

0xadae,	// (0x000b4e1b) cale_month_pane_t1_ParamLimits

0xadeb,	// (0x000b4e58) bg_cale_pane_ParamLimits

0xae03,	// (0x000b4e70) list_cale_pane_ParamLimits

0xae14,	// (0x000b4e81) listscroll_cale_day_pane_t1

0xae26,	// (0x000b4e93) scroll_pane_cp09_ParamLimits

0x28ac,	// (0x000ac919) main_mup_eq_pane_t1_ParamLimits

0x28ac,	// (0x000ac919) main_mup_eq_pane_t1

0x28c6,	// (0x000ac933) main_mup_eq_pane_t2_ParamLimits

0x28c6,	// (0x000ac933) main_mup_eq_pane_t2

0x28e0,	// (0x000ac94d) main_mup_eq_pane_t3_ParamLimits

0x28e0,	// (0x000ac94d) main_mup_eq_pane_t3

0x28fc,	// (0x000ac969) main_mup_eq_pane_t4_ParamLimits

0x28fc,	// (0x000ac969) main_mup_eq_pane_t4

0x2918,	// (0x000ac985) main_mup_eq_pane_t5_ParamLimits

0x2918,	// (0x000ac985) main_mup_eq_pane_t5

0x2934,	// (0x000ac9a1) main_mup_eq_pane_t6_ParamLimits

0x2934,	// (0x000ac9a1) main_mup_eq_pane_t6

0x2948,	// (0x000ac9b5) main_mup_eq_pane_t7_ParamLimits

0x2948,	// (0x000ac9b5) main_mup_eq_pane_t7

0x295c,	// (0x000ac9c9) main_mup_eq_pane_t8_ParamLimits

0x295c,	// (0x000ac9c9) main_mup_eq_pane_t8

0x2970,	// (0x000ac9dd) main_mup_eq_pane_t9_ParamLimits

0x2970,	// (0x000ac9dd) main_mup_eq_pane_t9

0x298a,	// (0x000ac9f7) main_mup_eq_pane_t10_ParamLimits

0x298a,	// (0x000ac9f7) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x000b94a7) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x000b94a7) main_mup_eq_pane_t

0x2a39,	// (0x000acaa6) mup_equalizer_pane_cp5_ParamLimits

0x2a4d,	// (0x000acaba) mup_equalizer_pane_cp6_ParamLimits

0x2a61,	// (0x000acace) mup_equalizer_pane_cp7_ParamLimits

0x945e,	// (0x000b34cb) main_gallery_pane

0xc994,	// (0x000b6a01) smil2_volume_pane

0xc99c,	// (0x000b6a09) smil_status_volume_pane_g1_ParamLimits

0xc9af,	// (0x000b6a1c) smil_status_volume_pane_g2_ParamLimits

0x98e5,	// (0x000b3952) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x000b9670) smil_status_volume_pane_g_ParamLimits

0xcb01,	// (0x000b6b6e) bg_popup_window_pane_cp07_ParamLimits

0xcb0f,	// (0x000b6b7c) blid_firmament_pane

0x4122,	// (0x000ae18f) aid_size_cell_gallery_ParamLimits

0x4122,	// (0x000ae18f) aid_size_cell_gallery

0x4138,	// (0x000ae1a5) grid_gallery_pane_ParamLimits

0x4138,	// (0x000ae1a5) grid_gallery_pane

0x4151,	// (0x000ae1be) cell_gallery_pane_ParamLimits

0x4151,	// (0x000ae1be) cell_gallery_pane

0xcc32,	// (0x000b6c9f) bg_cell_gallery_focus_pane_ParamLimits

0xcc32,	// (0x000b6c9f) bg_cell_gallery_focus_pane

0xcc44,	// (0x000b6cb1) cell_gallery_pane_g1_ParamLimits

0xcc44,	// (0x000b6cb1) cell_gallery_pane_g1

0x419a,	// (0x000ae207) cell_gallery_pane_g2_ParamLimits

0x419a,	// (0x000ae207) cell_gallery_pane_g2

0x41a7,	// (0x000ae214) cell_gallery_pane_g3_ParamLimits

0x41a7,	// (0x000ae214) cell_gallery_pane_g3

0xcc50,	// (0x000b6cbd) cell_gallery_pane_g4_ParamLimits

0xcc50,	// (0x000b6cbd) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x000b971e) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x000b971e) cell_gallery_pane_g

0xcc5c,	// (0x000b6cc9) bg_cell_gallery_focus_pane_g1

0xcc64,	// (0x000b6cd1) bg_cell_gallery_focus_pane_g2

0xcc6c,	// (0x000b6cd9) bg_cell_gallery_focus_pane_g3

0xcc74,	// (0x000b6ce1) bg_cell_gallery_focus_pane_g4

0xcc7c,	// (0x000b6ce9) bg_cell_gallery_focus_pane_g5

0xcc84,	// (0x000b6cf1) bg_cell_gallery_focus_pane_g6

0xcc8c,	// (0x000b6cf9) bg_cell_gallery_focus_pane_g7

0xcc94,	// (0x000b6d01) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x000b9727) bg_cell_gallery_focus_pane_g

0xcc9c,	// (0x000b6d09) aid_firma_cardinal

0xccb0,	// (0x000b6d1d) blid_firmament_pane_t1

0xccc7,	// (0x000b6d34) blid_firmament_pane_t2

0xccde,	// (0x000b6d4b) blid_firmament_pane_t3

0xccf5,	// (0x000b6d62) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x000b9738) blid_firmament_pane_t

0xcd0c,	// (0x000b6d79) blid_sat_info_pane

0xcd1c,	// (0x000b6d89) blid_sat_info_pane_g1

0xcd1c,	// (0x000b6d89) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x000b9741) blid_sat_info_pane_g

0xcd26,	// (0x000b6d93) blid_sat_info_pane_t1

0xcd34,	// (0x000b6da1) smil2_volume_content_pane

0xcd3d,	// (0x000b6daa) smil2_volume_pane_g1

0xa91d,	// (0x000b498a) smil2_volume_content_pane_g1

0xcd45,	// (0x000b6db2) smil2_volume_content_pane_g2

0xcd4e,	// (0x000b6dbb) smil2_volume_content_pane_g3

0xcd57,	// (0x000b6dc4) smil2_volume_content_pane_g4

0xcd60,	// (0x000b6dcd) smil2_volume_content_pane_g5

0xcd69,	// (0x000b6dd6) smil2_volume_content_pane_g6

0xcd72,	// (0x000b6ddf) smil2_volume_content_pane_g7

0xcd7b,	// (0x000b6de8) smil2_volume_content_pane_g8

0xcd84,	// (0x000b6df1) smil2_volume_content_pane_g9

0xcd8d,	// (0x000b6dfa) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x000b9746) smil2_volume_content_pane_g

0x0d0b,	// (0x000aad78) cale_week_day_heading_pane_t1_ParamLimits

0x0d35,	// (0x000aada2) cale_week_day_heading_pane_t2_ParamLimits

0x0d64,	// (0x000aadd1) cale_week_day_heading_pane_t3_ParamLimits

0x0d93,	// (0x000aae00) cale_week_day_heading_pane_t4_ParamLimits

0x0dc2,	// (0x000aae2f) cale_week_day_heading_pane_t5_ParamLimits

0x0df9,	// (0x000aae66) cale_week_day_heading_pane_t6_ParamLimits

0x0e30,	// (0x000aae9d) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000b9223) cale_week_day_heading_pane_t_ParamLimits

0xaa21,	// (0x000b4a8e) bg_cale_side_pane_ParamLimits

0x0e5a,	// (0x000aaec7) cale_week_time_pane_t1_ParamLimits

0x0e74,	// (0x000aaee1) cale_week_time_pane_t2_ParamLimits

0x0e8e,	// (0x000aaefb) cale_week_time_pane_t3_ParamLimits

0x0ea8,	// (0x000aaf15) cale_week_time_pane_t4_ParamLimits

0x0ec2,	// (0x000aaf2f) cale_week_time_pane_t5_ParamLimits

0x0edc,	// (0x000aaf49) cale_week_time_pane_t6_ParamLimits

0x0ef6,	// (0x000aaf63) cale_week_time_pane_t7_ParamLimits

0x0f10,	// (0x000aaf7d) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000b9232) cale_week_time_pane_t_ParamLimits

0x0f30,	// (0x000aaf9d) cell_cale_week_pane_g2_ParamLimits

0xaa21,	// (0x000b4a8e) bg_cale_side_pane_cp01_ParamLimits

0x1f86,	// (0x000abff3) cale_month_week_pane_t1_ParamLimits

0x1f9f,	// (0x000ac00c) cale_month_week_pane_t2_ParamLimits

0x1fb8,	// (0x000ac025) cale_month_week_pane_t3_ParamLimits

0x1fd1,	// (0x000ac03e) cale_month_week_pane_t4_ParamLimits

0x1fea,	// (0x000ac057) cale_month_week_pane_t5_ParamLimits

0x2003,	// (0x000ac070) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000b9307) cale_month_week_pane_t_ParamLimits

0x97ac,	// (0x000b3819) cell_cale_month_pane_g1_ParamLimits

0x945e,	// (0x000b34cb) main_cale_event_viewer_pane

0x9428,	// (0x000b3495) listscroll_cale_event_viewer_pane

0xcd96,	// (0x000b6e03) list_cale_ev_pane

0xcd9e,	// (0x000b6e0b) scroll_pane_cp023

0xcdaa,	// (0x000b6e17) field_cale_ev_pane_ParamLimits

0xcdaa,	// (0x000b6e17) field_cale_ev_pane

0xcdc8,	// (0x000b6e35) field_cale_ev_content_pane_ParamLimits

0xcdc8,	// (0x000b6e35) field_cale_ev_content_pane

0xcdd4,	// (0x000b6e41) field_cale_ev_pane_g1_ParamLimits

0xcdd4,	// (0x000b6e41) field_cale_ev_pane_g1

0xcde0,	// (0x000b6e4d) field_cale_ev_pane_g2_ParamLimits

0xcde0,	// (0x000b6e4d) field_cale_ev_pane_g2

0xcdf8,	// (0x000b6e65) field_cale_ev_pane_g3_ParamLimits

0xcdf8,	// (0x000b6e65) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x000b975b) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x000b975b) field_cale_ev_pane_g

0xce10,	// (0x000b6e7d) field_cale_ev_pane_t1_ParamLimits

0xce10,	// (0x000b6e7d) field_cale_ev_pane_t1

0xa994,	// (0x000b4a01) field_cale_ev_content_pane_t1_ParamLimits

0xa994,	// (0x000b4a01) field_cale_ev_content_pane_t1

0xb638,	// (0x000b56a5) bg_button_pane_cp01

0x0a38,	// (0x000aaaa5) listscroll_cale_week_pane_ParamLimits

0xa9cc,	// (0x000b4a39) popup_toolbar_window_cp01

0xa9f2,	// (0x000b4a5f) listscroll_cale_week_pane_t1_ParamLimits

0x0a38,	// (0x000aaaa5) listscroll_cale_day_pane_ParamLimits

0xa9cc,	// (0x000b4a39) popup_toolbar_window_cp02

0xae14,	// (0x000b4e81) listscroll_cale_day_pane_t1_ParamLimits

0x3465,	// (0x000ad4d2) main_cale_month_pane_ParamLimits

0x98d0,	// (0x000b393d) popup_toolbar_window_cp03_ParamLimits

0x98d0,	// (0x000b393d) popup_toolbar_window_cp03

0x2d65,	// (0x000acdd2) main_image_pane_g2_ParamLimits

0x2d65,	// (0x000acdd2) main_image_pane_g2

0x2d76,	// (0x000acde3) main_image_pane_g3_ParamLimits

0x2d76,	// (0x000acde3) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000b9539) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000b9539) main_image_pane_g

0xb752,	// (0x000b57bf) main_image_pane_t1_ParamLimits

0x2d87,	// (0x000acdf4) main_image_pane_t2_ParamLimits

0x2d87,	// (0x000acdf4) main_image_pane_t2

0x2d99,	// (0x000ace06) main_image_pane_t3_ParamLimits

0x2d99,	// (0x000ace06) main_image_pane_t3

0x2dc1,	// (0x000ace2e) main_image_pane_t4_ParamLimits

0x2dc1,	// (0x000ace2e) main_image_pane_t4

0x0003,

0xf4d3,	// (0x000b9540) main_image_pane_t_ParamLimits

0xf4d3,	// (0x000b9540) main_image_pane_t

0x2de1,	// (0x000ace4e) popup_image_details_window_cp01

0x2deb,	// (0x000ace58) popup_toobar_trans_pane_cp01_ParamLimits

0x2deb,	// (0x000ace58) popup_toobar_trans_pane_cp01

0x3570,	// (0x000ad5dd) popup_image_details_window_ParamLimits

0x3570,	// (0x000ad5dd) popup_image_details_window

0x98a3,	// (0x000b3910) popup_image_focus_window

0x398f,	// (0x000ad9fc) camera2_autofocus_pane_ParamLimits

0x398f,	// (0x000ad9fc) camera2_autofocus_pane

0x9428,	// (0x000b3495) bg_popup_sub_pane_cp06

0xce27,	// (0x000b6e94) popup_image_focus_window_g1

0xce2f,	// (0x000b6e9c) popup_image_focus_window_g2

0xce37,	// (0x000b6ea4) popup_image_focus_window_g3

0xce3f,	// (0x000b6eac) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x000b9762) popup_image_focus_window_g

0xce47,	// (0x000b6eb4) popup_image_focus_window_t1

0xce55,	// (0x000b6ec2) popup_image_focus_window_t2

0xce65,	// (0x000b6ed2) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x000b976b) popup_image_focus_window_t

0xce73,	// (0x000b6ee0) camera2_autofocus_pane_g1

0xa453,	// (0x000b44c0) bg_tb_trans_pane_cp01

0xce81,	// (0x000b6eee) popup_image_details_window_g1

0xce94,	// (0x000b6f01) popup_image_details_window_g2

0x0002,

0xf710,	// (0x000b977d) popup_image_details_window_g

0xcebd,	// (0x000b6f2a) popup_image_details_window_t1

0xcecf,	// (0x000b6f3c) popup_image_details_window_t2

0xcee8,	// (0x000b6f55) popup_image_details_window_t3

0xcefc,	// (0x000b6f69) popup_image_details_window_t4

0xcf17,	// (0x000b6f84) popup_image_details_window_t5

0x0004,

0xf717,	// (0x000b9784) popup_image_details_window_t

0xa323,	// (0x000b4390) bg_calc_paper_pane_ParamLimits

0x945e,	// (0x000b34cb) grid_highlight_pane_cp013

0x971c,	// (0x000b3789) list_calc_pane_ParamLimits

0x972e,	// (0x000b379b) scroll_pane_cp024

0xa337,	// (0x000b43a4) bg_calc_display_pane_ParamLimits

0x08a6,	// (0x000aa913) calc_display_pane_t1_ParamLimits

0x08b8,	// (0x000aa925) calc_display_pane_t2_ParamLimits

0x9736,	// (0x000b37a3) calc_display_pane_t3_ParamLimits

0xf136,	// (0x000b91a3) calc_display_pane_t_ParamLimits

0x0972,	// (0x000aa9df) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000b91c0) cell_calc_pane_g

0x097b,	// (0x000aa9e8) cell_calc_pane_t1

0xa396,	// (0x000b4403) grid_highlight_pane_cp02_ParamLimits

0xa3ac,	// (0x000b4419) toolbar_button_pane_cp01_ParamLimits

0xa3ac,	// (0x000b4419) toolbar_button_pane_cp01

0xb797,	// (0x000b5804) temp_image_control_pane_ParamLimits

0xb797,	// (0x000b5804) temp_image_control_pane

0x9450,	// (0x000b34bd) main_mp3_pane

0xcf31,	// (0x000b6f9e) temp_image_control_pane_g1_ParamLimits

0xcf31,	// (0x000b6f9e) temp_image_control_pane_g1

0xcf3f,	// (0x000b6fac) temp_image_control_pane_g2_ParamLimits

0xcf3f,	// (0x000b6fac) temp_image_control_pane_g2

0xcf51,	// (0x000b6fbe) temp_image_control_pane_g3_ParamLimits

0xcf51,	// (0x000b6fbe) temp_image_control_pane_g3

0x41e4,	// (0x000ae251) temp_image_control_pane_g4_ParamLimits

0x41e4,	// (0x000ae251) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x000b978f) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x000b978f) temp_image_control_pane_g

0xcf31,	// (0x000b6f9e) main_mp3_pane_g1

0x41f7,	// (0x000ae264) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x000b9798) main_mp3_pane_g

0xcf94,	// (0x000b7001) main_mp3_pane_t1

0xaa84,	// (0x000b4af1) main_camera_pane_g8_ParamLimits

0xaa84,	// (0x000b4af1) main_camera_pane_g8

0x1234,	// (0x000ab2a1) main_video_pane_g7_ParamLimits

0x1234,	// (0x000ab2a1) main_video_pane_g7

0x9925,	// (0x000b3992) main_camera2_pane_t7_ParamLimits

0x9925,	// (0x000b3992) main_camera2_pane_t7

0xabcc,	// (0x000b4c39) scroll_pane_cp025_ParamLimits

0xabcc,	// (0x000b4c39) scroll_pane_cp025

0xabe0,	// (0x000b4c4d) scroll_pane_cp026_ParamLimits

0xabe0,	// (0x000b4c4d) scroll_pane_cp026

0xabef,	// (0x000b4c5c) wml_content_pane_ParamLimits

0x945e,	// (0x000b34cb) main_touch_calib_pane

0x42cb,	// (0x000ae338) main_touch_calib_pane_g1

0x42dd,	// (0x000ae34a) main_touch_calib_pane_g2

0x42ef,	// (0x000ae35c) main_touch_calib_pane_g3

0x4301,	// (0x000ae36e) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x000b97b6) main_touch_calib_pane_g

0x4313,	// (0x000ae380) main_touch_calib_pane_t1

0x432d,	// (0x000ae39a) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x000b97bf) main_touch_calib_pane_t

0xb352,	// (0x000b53bf) mup_progress_pane_cp02

0xb3a7,	// (0x000b5414) navi_pane_g1

0xb462,	// (0x000b54cf) navi_pane_mp_t3

0x9450,	// (0x000b34bd) main_mp3_pane_ParamLimits

0x36fb,	// (0x000ad768) navi_pane_ParamLimits

0xcf31,	// (0x000b6f9e) main_mp3_pane_g1_ParamLimits

0x41f7,	// (0x000ae264) main_mp3_pane_g2_ParamLimits

0x4205,	// (0x000ae272) main_mp3_pane_g3_ParamLimits

0x4205,	// (0x000ae272) main_mp3_pane_g3

0x4213,	// (0x000ae280) main_mp3_pane_g4_ParamLimits

0x4213,	// (0x000ae280) main_mp3_pane_g4

0xcf61,	// (0x000b6fce) main_mp3_pane_g5_ParamLimits

0xcf61,	// (0x000b6fce) main_mp3_pane_g5

0xcf6f,	// (0x000b6fdc) main_mp3_pane_g6_ParamLimits

0xcf6f,	// (0x000b6fdc) main_mp3_pane_g6

0xcf7c,	// (0x000b6fe9) main_mp3_pane_g7_ParamLimits

0xcf7c,	// (0x000b6fe9) main_mp3_pane_g7

0xcf88,	// (0x000b6ff5) main_mp3_pane_g8_ParamLimits

0xcf88,	// (0x000b6ff5) main_mp3_pane_g8

0xf72b,	// (0x000b9798) main_mp3_pane_g_ParamLimits

0x421f,	// (0x000ae28c) main_mp3_pane_t2

0x422d,	// (0x000ae29a) main_mp3_pane_t3

0xcfa2,	// (0x000b700f) main_mp3_pane_t4

0xcfb0,	// (0x000b701d) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x000b97a9) main_mp3_pane_t

0xcfbe,	// (0x000b702b) mup_progress_pane_cp01

0x0334,	// (0x000aa3a1) aid_zoom_text_secondary2

0xcd96,	// (0x000b6e03) list_cale_ev2_pane

0xcd9e,	// (0x000b6e0b) scroll_pane_cp023_ParamLimits

0x4383,	// (0x000ae3f0) field_cale_ev2_pane_ParamLimits

0x4383,	// (0x000ae3f0) field_cale_ev2_pane

0xa461,	// (0x000b44ce) field_cale_ev2_pane_g1_ParamLimits

0xa461,	// (0x000b44ce) field_cale_ev2_pane_g1

0xa46d,	// (0x000b44da) field_cale_ev2_pane_g2_ParamLimits

0xa46d,	// (0x000b44da) field_cale_ev2_pane_g2

0xa485,	// (0x000b44f2) field_cale_ev2_pane_g3_ParamLimits

0xa485,	// (0x000b44f2) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x000b97ca) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x000b97ca) field_cale_ev2_pane_g

0xa4a9,	// (0x000b4516) field_cale_ev2_pane_t1_ParamLimits

0xa4a9,	// (0x000b4516) field_cale_ev2_pane_t1

0xa4c0,	// (0x000b452d) field_cale_ev2_pane_t2_ParamLimits

0xa4c0,	// (0x000b452d) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x000b97d3) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x000b97d3) field_cale_ev2_pane_t

0x2c19,	// (0x000acc86) main_postcard_pane_g5_ParamLimits

0x2c19,	// (0x000acc86) main_postcard_pane_g5

0x2c2f,	// (0x000acc9c) main_postcard_pane_g6_ParamLimits

0x2c2f,	// (0x000acc9c) main_postcard_pane_g6

0x0ffa,	// (0x000ab067) camera2_autofocus_pane_cp_ParamLimits

0x0ffa,	// (0x000ab067) camera2_autofocus_pane_cp

0x9450,	// (0x000b34bd) main_mup3_pane

0x43e8,	// (0x000ae455) main_mup3_pane_g1_ParamLimits

0x43e8,	// (0x000ae455) main_mup3_pane_g1

0x440a,	// (0x000ae477) main_mup3_pane_g2_ParamLimits

0x440a,	// (0x000ae477) main_mup3_pane_g2

0x448a,	// (0x000ae4f7) main_mup3_pane_g3_ParamLimits

0x448a,	// (0x000ae4f7) main_mup3_pane_g3

0x44d0,	// (0x000ae53d) main_mup3_pane_g4_ParamLimits

0x44d0,	// (0x000ae53d) main_mup3_pane_g4

0x4516,	// (0x000ae583) main_mup3_pane_g5_ParamLimits

0x4516,	// (0x000ae583) main_mup3_pane_g5

0x455c,	// (0x000ae5c9) main_mup3_pane_g6_ParamLimits

0x455c,	// (0x000ae5c9) main_mup3_pane_g6

0xcfc6,	// (0x000b7033) main_mup3_pane_g7_ParamLimits

0xcfc6,	// (0x000b7033) main_mup3_pane_g7

0x0007,

0xf776,	// (0x000b97e3) main_mup3_pane_g_ParamLimits

0xf776,	// (0x000b97e3) main_mup3_pane_g

0x45da,	// (0x000ae647) main_mup3_pane_t1_ParamLimits

0x45da,	// (0x000ae647) main_mup3_pane_t1

0x464e,	// (0x000ae6bb) main_mup3_pane_t2_ParamLimits

0x464e,	// (0x000ae6bb) main_mup3_pane_t2

0x4722,	// (0x000ae78f) main_mup3_pane_t4_ParamLimits

0x4722,	// (0x000ae78f) main_mup3_pane_t4

0x4778,	// (0x000ae7e5) main_mup3_pane_t5_ParamLimits

0x4778,	// (0x000ae7e5) main_mup3_pane_t5

0x4834,	// (0x000ae8a1) main_mup3_pane_t6_ParamLimits

0x4834,	// (0x000ae8a1) main_mup3_pane_t6

0x0005,

0xf787,	// (0x000b97f4) main_mup3_pane_t_ParamLimits

0xf787,	// (0x000b97f4) main_mup3_pane_t

0x48ec,	// (0x000ae959) mup3_progress_pane_ParamLimits

0x48ec,	// (0x000ae959) mup3_progress_pane

0x4978,	// (0x000ae9e5) popup_mup3_control_window_ParamLimits

0x4978,	// (0x000ae9e5) popup_mup3_control_window

0xcfd4,	// (0x000b7041) popup_mup3_text_window

0x49aa,	// (0x000aea17) mup3_progress_pane_t1

0x49c9,	// (0x000aea36) mup3_progress_pane_t2

0xcfdc,	// (0x000b7049) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x000b9801) mup3_progress_pane_t

0xcff9,	// (0x000b7066) mup_progress_pane_cp03

0x9428,	// (0x000b3495) bg_tb_trans_pane_cp04

0x49e8,	// (0x000aea55) mup3_volume_pane

0x49f0,	// (0x000aea5d) popup_mup3_control_window_g1

0x49f9,	// (0x000aea66) mup3_volume_pane_g1

0x4a02,	// (0x000aea6f) mup3_volume_pane_g2

0x4a0b,	// (0x000aea78) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x000b9808) mup3_volume_pane_g

0x9428,	// (0x000b3495) bg_tb_trans_pane_cp03

0xd009,	// (0x000b7076) popup_mup3_text_window_g1

0xd011,	// (0x000b707e) popup_mup3_text_window_t1

0xa37f,	// (0x000b43ec) list_calc_item_pane_g1_ParamLimits

0xca6f,	// (0x000b6adc) mup_volume_pane_cp_g1

0x4347,	// (0x000ae3b4) main_touch_calib_pane_t3

0x435b,	// (0x000ae3c8) main_touch_calib_pane_t4

0x436f,	// (0x000ae3dc) main_touch_calib_pane_t5

0x02e0,	// (0x000aa34d) aid_cell_size_toolbar2

0x02e8,	// (0x000aa355) aid_popup3_width_pane

0x0324,	// (0x000aa391) aid_zoom_text_msg_primary

0x0fd9,	// (0x000ab046) vorec_t7

0xa343,	// (0x000b43b0) bg_calc_paper_pane_g1_ParamLimits

0xa34f,	// (0x000b43bc) bg_calc_paper_pane_g2_ParamLimits

0xa35b,	// (0x000b43c8) bg_calc_paper_pane_g3_ParamLimits

0xa367,	// (0x000b43d4) bg_calc_paper_pane_g4_ParamLimits

0xa373,	// (0x000b43e0) bg_calc_paper_pane_g5_ParamLimits

0x08ff,	// (0x000aa96c) bg_calc_paper_pane_g6_ParamLimits

0x090e,	// (0x000aa97b) bg_calc_paper_pane_g7_ParamLimits

0x091d,	// (0x000aa98a) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x000b91aa) bg_calc_paper_pane_g_ParamLimits

0x0930,	// (0x000aa99d) calc_bg_paper_pane_g9_ParamLimits

0x1146,	// (0x000ab1b3) image_qvga_pane_ParamLimits

0x1146,	// (0x000ab1b3) image_qvga_pane

0xa266,	// (0x000b42d3) bg_popup_sub_pane_cp04_ParamLimits

0xb6ce,	// (0x000b573b) popup_mup_playback_window_g1_ParamLimits

0xb6da,	// (0x000b5747) popup_mup_playback_window_t1_ParamLimits

0xb6ef,	// (0x000b575c) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000b9534) popup_mup_playback_window_t_ParamLimits

0x3e86,	// (0x000adef3) main_mup2_pane_g3_ParamLimits

0x3e86,	// (0x000adef3) main_mup2_pane_g3

0x153c,	// (0x000ab5a9) popup_toolbar_window_cp04

0xbae4,	// (0x000b5b51) popup_call2_audio_second_window_g3_ParamLimits

0xbae4,	// (0x000b5b51) popup_call2_audio_second_window_g3

0xbeee,	// (0x000b5f5b) popup_call2_audio_first_window_g4_ParamLimits

0xbeee,	// (0x000b5f5b) popup_call2_audio_first_window_g4

0xc56d,	// (0x000b65da) popup_call2_audio_in_window_g4_ParamLimits

0xc56d,	// (0x000b65da) popup_call2_audio_in_window_g4

0x2d47,	// (0x000acdb4) aid_area_sk_bg_cut_ParamLimits

0x2d47,	// (0x000acdb4) aid_area_sk_bg_cut

0xb704,	// (0x000b5771) aid_area_sk_bg_cut_2_ParamLimits

0xb704,	// (0x000b5771) aid_area_sk_bg_cut_2

0x418a,	// (0x000ae1f7) aid_placing_details_win

0x4192,	// (0x000ae1ff) aid_placing_details_win_2

0xce73,	// (0x000b6ee0) camera2_autofocus_pane_g1_ParamLimits

0x04f6,	// (0x000aa563) popup_fixed_preview_cale_window_ParamLimits

0x04f6,	// (0x000aa563) popup_fixed_preview_cale_window

0xb4e0,	// (0x000b554d) navi_slider_pane_g3

0xb4e9,	// (0x000b5556) navi_slider_pane_g4

0xb4f2,	// (0x000b555f) navi_slider_pane_g5

0xb4e0,	// (0x000b554d) navi_slider_pane_g6

0x9852,	// (0x000b38bf) navi_slider_pane_g7

0xb605,	// (0x000b5672) mup_scale_pane_g3

0xb60e,	// (0x000b567b) mup_scale_pane_g4

0xb617,	// (0x000b5684) mup_scale_pane_g5

0x2a75,	// (0x000acae2) mup_scale_pane_g6

0x2a7e,	// (0x000acaeb) mup_scale_pane_g7

0xb4e0,	// (0x000b554d) cams2_slider_pane_g3

0xcaf1,	// (0x000b6b5e) cams2_slider_pane_g4

0x998b,	// (0x000b39f8) cams2_slider_pane_g5

0xb4e0,	// (0x000b554d) cams2_slider_pane_g6

0x9993,	// (0x000b3a00) cams2_slider_pane_g7

0xcd1c,	// (0x000b6d89) camera2_autofocus_pane_cp_g1

0xc908,	// (0x000b6975) bg_popup_preview_window_pane_cp02_ParamLimits

0xc908,	// (0x000b6975) bg_popup_preview_window_pane_cp02

0xd01f,	// (0x000b708c) list_fp_cale_pane_ParamLimits

0xd01f,	// (0x000b708c) list_fp_cale_pane

0xd02b,	// (0x000b7098) popup_fixed_preview_cale_window_t1_ParamLimits

0xd02b,	// (0x000b7098) popup_fixed_preview_cale_window_t1

0x4a14,	// (0x000aea81) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a14,	// (0x000aea81) popup_fixed_preview_cale_window_t2

0x4a29,	// (0x000aea96) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a29,	// (0x000aea96) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x000b980f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x000b980f) popup_fixed_preview_cale_window_t

0x4a3e,	// (0x000aeaab) list_single_fp_cale_pane_ParamLimits

0x4a3e,	// (0x000aeaab) list_single_fp_cale_pane

0xd049,	// (0x000b70b6) list_single_fp_cale_pane_g1_ParamLimits

0xd049,	// (0x000b70b6) list_single_fp_cale_pane_g1

0xd055,	// (0x000b70c2) list_single_fp_cale_pane_g2_ParamLimits

0xd055,	// (0x000b70c2) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x000b9816) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x000b9816) list_single_fp_cale_pane_g

0xd06e,	// (0x000b70db) list_single_fp_cale_pane_t1_ParamLimits

0xd06e,	// (0x000b70db) list_single_fp_cale_pane_t1

0xd080,	// (0x000b70ed) list_single_fp_cale_pane_t2_ParamLimits

0xd080,	// (0x000b70ed) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x000b981d) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x000b981d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x945e,	// (0x000b34cb) main_dialer_pane

0x4a54,	// (0x000aeac1) aid_cell_size_keypad

0x4a5e,	// (0x000aeacb) dialer_ne_pane

0x4a66,	// (0x000aead3) grid_dialer_command_1_pane

0x4a6e,	// (0x000aeadb) grid_dialer_command_2_pane

0x4a76,	// (0x000aeae3) grid_dialer_keypad_pane

0x4a88,	// (0x000aeaf5) bg_popup_call_pane_cp06_ParamLimits

0x4a88,	// (0x000aeaf5) bg_popup_call_pane_cp06

0x4a94,	// (0x000aeb01) dialer_ne_clear_pane_ParamLimits

0x4a94,	// (0x000aeb01) dialer_ne_clear_pane

0xd0b3,	// (0x000b7120) dialer_ne_pane_g1

0xd0bb,	// (0x000b7128) dialer_ne_pane_t1_ParamLimits

0xd0bb,	// (0x000b7128) dialer_ne_pane_t1

0x4aa0,	// (0x000aeb0d) dialer_ne_pane_t2_ParamLimits

0x4aa0,	// (0x000aeb0d) dialer_ne_pane_t2

0x4aca,	// (0x000aeb37) dialer_ne_pane_t3_ParamLimits

0x4aca,	// (0x000aeb37) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x000b9822) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x000b9822) dialer_ne_pane_t

0x4afa,	// (0x000aeb67) dialer_ne_pane_t3_copy1_ParamLimits

0x4afa,	// (0x000aeb67) dialer_ne_pane_t3_copy1

0x4b29,	// (0x000aeb96) cell_dialer_keypad_pane_ParamLimits

0x4b29,	// (0x000aeb96) cell_dialer_keypad_pane

0x4b40,	// (0x000aebad) cell_dialer_command_1_pane_ParamLimits

0x4b40,	// (0x000aebad) cell_dialer_command_1_pane

0x4b56,	// (0x000aebc3) cell_dialer_command_2_pane_ParamLimits

0x4b56,	// (0x000aebc3) cell_dialer_command_2_pane

0xd0cd,	// (0x000b713a) bg_button_pane_cp02_ParamLimits

0xd0cd,	// (0x000b713a) bg_button_pane_cp02

0x4b65,	// (0x000aebd2) cell_dialer_keypad_pane_g1_ParamLimits

0x4b65,	// (0x000aebd2) cell_dialer_keypad_pane_g1

0xd0cd,	// (0x000b713a) bg_button_pane_cp03_ParamLimits

0xd0cd,	// (0x000b713a) bg_button_pane_cp03

0x4b79,	// (0x000aebe6) cell_dialer_command_1_pane_g1_ParamLimits

0x4b79,	// (0x000aebe6) cell_dialer_command_1_pane_g1

0xd0d9,	// (0x000b7146) bg_button_pane_cp04

0x4b8d,	// (0x000aebfa) cell_dialer_command_2_pane_g1

0xaa7c,	// (0x000b4ae9) bg_button_pane_cp06

0xd0e1,	// (0x000b714e) dialer_ne_clear_pane_g1

0xb3b3,	// (0x000b5420) navi_pane_g2

0xb3e1,	// (0x000b544e) navi_pane_g3

0x0002,

0xf3ca,	// (0x000b9437) navi_pane_g

0xb470,	// (0x000b54dd) navi_pane_mv_g2

0xb497,	// (0x000b5504) navi_pane_mv_g5

0x2643,	// (0x000ac6b0) navi_pane_mv_t1

0xa337,	// (0x000b43a4) main_clock2_pane

0xa453,	// (0x000b44c0) main_clock2_list_pane_ParamLimits

0xa453,	// (0x000b44c0) main_clock2_list_pane

0x4bfe,	// (0x000aec6b) main_clock2_pane_t1_ParamLimits

0x4bfe,	// (0x000aec6b) main_clock2_pane_t1

0x4c39,	// (0x000aeca6) main_clock2_pane_t2_ParamLimits

0x4c39,	// (0x000aeca6) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x000b982e) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x000b982e) main_clock2_pane_t

0x4cd9,	// (0x000aed46) popup_clock_analogue_window_cp03_ParamLimits

0x4cd9,	// (0x000aed46) popup_clock_analogue_window_cp03

0x4cfe,	// (0x000aed6b) popup_clock_digital_window_cp02_ParamLimits

0x4cfe,	// (0x000aed6b) popup_clock_digital_window_cp02

0x4d77,	// (0x000aede4) main_clock2_list_single_pane_ParamLimits

0x4d77,	// (0x000aede4) main_clock2_list_single_pane

0xaa7c,	// (0x000b4ae9) list_highlight_pane_cp05

0xd11b,	// (0x000b7188) main_clock2_list_single_pane_t1

0x153c,	// (0x000ab5a9) popup_toolbar_window_cp04_ParamLimits

0x41b4,	// (0x000ae221) camera2_autofocus_pane_g2_ParamLimits

0x41b4,	// (0x000ae221) camera2_autofocus_pane_g2

0x41c0,	// (0x000ae22d) camera2_autofocus_pane_g3_ParamLimits

0x41c0,	// (0x000ae22d) camera2_autofocus_pane_g3

0x41cc,	// (0x000ae239) camera2_autofocus_pane_g4_ParamLimits

0x41cc,	// (0x000ae239) camera2_autofocus_pane_g4

0x41d8,	// (0x000ae245) camera2_autofocus_pane_g5_ParamLimits

0x41d8,	// (0x000ae245) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x000b9772) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x000b9772) camera2_autofocus_pane_g

0x43a4,	// (0x000ae411) camera2_autofocus_pane_cp_g2

0x43ac,	// (0x000ae419) camera2_autofocus_pane_cp_g3

0x43b4,	// (0x000ae421) camera2_autofocus_pane_cp_g4

0x43bc,	// (0x000ae429) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x000b97d8) camera2_autofocus_pane_cp_g

0x4a80,	// (0x000aeaed) popup_dialer_spcha_window

0x9428,	// (0x000b3495) bg_popup_sub_pane_cp07

0xd129,	// (0x000b7196) list_spcha_pane

0xd131,	// (0x000b719e) list_single_spcha_pane_ParamLimits

0xd131,	// (0x000b719e) list_single_spcha_pane

0x9428,	// (0x000b3495) list_highlight_pane_cp06

0xd142,	// (0x000b71af) list_single_spcha_pane_t1

0xc317,	// (0x000b6384) popup_call2_audio_out_window_g4_ParamLimits

0xc317,	// (0x000b6384) popup_call2_audio_out_window_g4

0x945e,	// (0x000b34cb) main_imed2_pane

0x98ab,	// (0x000b3918) popup_imed_adjust2_window

0x3588,	// (0x000ad5f5) popup_imed_trans_window_ParamLimits

0x3588,	// (0x000ad5f5) popup_imed_trans_window

0xcb5a,	// (0x000b6bc7) popup_blid_sat_info2_window_t1

0xcb68,	// (0x000b6bd5) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x000b9707) popup_blid_sat_info2_window_t

0x4e28,	// (0x000aee95) aid_size_cell_colour_35

0x4e48,	// (0x000aeeb5) aid_size_cell_colour_112

0x4e68,	// (0x000aeed5) aid_size_cell_effect

0xc914,	// (0x000b6981) bg_tb_trans_pane_cp02

0xaf1d,	// (0x000b4f8a) heading_imed_pane

0x4e88,	// (0x000aeef5) listscroll_imed_pane

0xd150,	// (0x000b71bd) heading_imed_pane_g1

0xd158,	// (0x000b71c5) heading_imed_pane_t1

0xd166,	// (0x000b71d3) grid_imed_colour_35_pane_ParamLimits

0xd166,	// (0x000b71d3) grid_imed_colour_35_pane

0x4e94,	// (0x000aef01) grid_imed_effect_pane

0xd17e,	// (0x000b71eb) list_imed_aspect_pane

0x4eaa,	// (0x000aef17) scroll_pane_cp027_ParamLimits

0x4eaa,	// (0x000aef17) scroll_pane_cp027

0x4ebb,	// (0x000aef28) cell_imed_effect_pane_ParamLimits

0x4ebb,	// (0x000aef28) cell_imed_effect_pane

0xd186,	// (0x000b71f3) cell_imed_colour_pane_ParamLimits

0xd186,	// (0x000b71f3) cell_imed_colour_pane

0xd1c8,	// (0x000b7235) cell_imed_colour_pane_g1_ParamLimits

0xd1c8,	// (0x000b7235) cell_imed_colour_pane_g1

0xd1d9,	// (0x000b7246) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d9,	// (0x000b7246) hgihlgiht_grid_pane_cp016

0x4ee2,	// (0x000aef4f) cell_imed_effect_pane_g1

0x4eea,	// (0x000aef57) grid_highlight_pane_cp017

0xd1ea,	// (0x000b7257) list_imed_single_pane_ParamLimits

0xd1ea,	// (0x000b7257) list_imed_single_pane

0x9428,	// (0x000b3495) list_highlight_pane_cp07

0xd1ff,	// (0x000b726c) list_imed_aspect_pane_comp1_t1

0xc914,	// (0x000b6981) bg_tb_trans_pane_cp05

0xd221,	// (0x000b728e) popup_imed_adjust2_window_g1

0xd248,	// (0x000b72b5) popup_imed_adjust2_window_t1

0xd260,	// (0x000b72cd) slider_imed_adjust_pane

0xd274,	// (0x000b72e1) slider_imed_adjust_pane_g1

0xd284,	// (0x000b72f1) slider_imed_adjust_pane_g2

0xd294,	// (0x000b7301) slider_imed_adjust_pane_g3

0xd2a5,	// (0x000b7312) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x000b984b) slider_imed_adjust_pane_g

0x4ef3,	// (0x000aef60) aid_size_cell_clipart2

0x4eff,	// (0x000aef6c) grid_imed_clipart_pane

0xd2b6,	// (0x000b7323) scroll_pane_cp031

0x4f09,	// (0x000aef76) cell_imed_clipart_pane_ParamLimits

0x4f09,	// (0x000aef76) cell_imed_clipart_pane

0x4f2b,	// (0x000aef98) cell_imed_clipart_pane_g1

0x9428,	// (0x000b3495) grid_highlight_pane_cp014

0x4bda,	// (0x000aec47) main_clock2_pane_g1_ParamLimits

0x4bda,	// (0x000aec47) main_clock2_pane_g1

0x4d1e,	// (0x000aed8b) aid_call2_pane_cp10

0x4d30,	// (0x000aed9d) aid_call_pane_cp10

0xb2f2,	// (0x000b535f) popup_clock_analogue_window_cp10_g1

0xb2f2,	// (0x000b535f) popup_clock_analogue_window_cp10_g2

0x4d42,	// (0x000aedaf) popup_clock_analogue_window_cp10_g3

0x4d42,	// (0x000aedaf) popup_clock_analogue_window_cp10_g4

0xb2f2,	// (0x000b535f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x000b9839) popup_clock_analogue_window_cp10_g

0x4d58,	// (0x000aedc5) popup_clock_analogue_window_cp10_t1

0x4d89,	// (0x000aedf6) clock_digital_number_pane_cp10_ParamLimits

0x4d89,	// (0x000aedf6) clock_digital_number_pane_cp10

0x4da1,	// (0x000aee0e) clock_digital_number_pane_cp11_ParamLimits

0x4da1,	// (0x000aee0e) clock_digital_number_pane_cp11

0x4db9,	// (0x000aee26) clock_digital_number_pane_cp12_ParamLimits

0x4db9,	// (0x000aee26) clock_digital_number_pane_cp12

0x4dd3,	// (0x000aee40) clock_digital_number_pane_cp13_ParamLimits

0x4dd3,	// (0x000aee40) clock_digital_number_pane_cp13

0x4ded,	// (0x000aee5a) clock_digital_separator_pane_cp10_ParamLimits

0x4ded,	// (0x000aee5a) clock_digital_separator_pane_cp10

0x4e07,	// (0x000aee74) popup_clock_digital_window_cp02_t1_ParamLimits

0x4e07,	// (0x000aee74) popup_clock_digital_window_cp02_t1

0xa25e,	// (0x000b42cb) clock_digital_number_pane_cp10_g1

0xa25e,	// (0x000b42cb) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x000b9854) clock_digital_number_pane_cp10_g

0xa25e,	// (0x000b42cb) clock_digital_separator_pane_cp10_g1

0xa25e,	// (0x000b42cb) clock_digital_separator_pane_g2_cp10

0xb49f,	// (0x000b550c) navi_pane_vded_g4

0xb4a8,	// (0x000b5515) navi_pane_vded_g5

0xb4b1,	// (0x000b551e) navi_pane_vded_t1

0x945e,	// (0x000b34cb) main_vded_pane

0x4f34,	// (0x000aefa1) main_vded_pane_g1

0x4f3e,	// (0x000aefab) main_vded_pane_g2

0x4f48,	// (0x000aefb5) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x000b9859) main_vded_pane_g

0x4f52,	// (0x000aefbf) main_vded_pane_t1

0x4f60,	// (0x000aefcd) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x000b9860) main_vded_pane_t

0x4f6e,	// (0x000aefdb) vded_slider_pane

0x4f76,	// (0x000aefe3) vded_video_pane

0xd2be,	// (0x000b732b) vded_video_pane_g1

0x4f7e,	// (0x000aefeb) vded_video_pane_g2

0xcd1c,	// (0x000b6d89) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x000b9865) vded_video_pane_g

0xd2c8,	// (0x000b7335) vded_slider_pane_g1

0xca6f,	// (0x000b6adc) vded_slider_pane_g2

0xd2d1,	// (0x000b733e) vded_slider_pane_g3

0xd2da,	// (0x000b7347) vded_slider_pane_g4

0xd2e3,	// (0x000b7350) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x000b986c) vded_slider_pane_g

0x4960,	// (0x000ae9cd) mup3_rocker_pane_ParamLimits

0x4960,	// (0x000ae9cd) mup3_rocker_pane

0x4f87,	// (0x000aeff4) mup3_control_keys_pane_g1

0x4f8f,	// (0x000aeffc) mup3_control_keys_pane_g2

0x4f97,	// (0x000af004) mup3_control_keys_pane_g3

0x4f9f,	// (0x000af00c) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x000b9877) mup3_control_keys_pane_g

0x052d,	// (0x000aa59a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x052d,	// (0x000aa59a) popup_toolbar2_fixed_window_cp01

0x4994,	// (0x000aea01) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4994,	// (0x000aea01) popup_toolbar2_fixed_window_cp02

0xbc56,	// (0x000b5cc3) popup_call2_audio_second_window_t4_ParamLimits

0xbc56,	// (0x000b5cc3) popup_call2_audio_second_window_t4

0xc184,	// (0x000b61f1) popup_call2_audio_first_window_t6_ParamLimits

0xc184,	// (0x000b61f1) popup_call2_audio_first_window_t6

0xc41a,	// (0x000b6487) popup_call2_audio_out_window_t6_ParamLimits

0xc41a,	// (0x000b6487) popup_call2_audio_out_window_t6

0x945e,	// (0x000b34cb) main_vitu_pane

0x4faf,	// (0x000af01c) aid_size_cell_itu_ParamLimits

0x4faf,	// (0x000af01c) aid_size_cell_itu

0xa453,	// (0x000b44c0) bg_popup_window_pane_cp08_ParamLimits

0xa453,	// (0x000b44c0) bg_popup_window_pane_cp08

0x4fc5,	// (0x000af032) field_vitu_entry_pane_ParamLimits

0x4fc5,	// (0x000af032) field_vitu_entry_pane

0x4fdd,	// (0x000af04a) grid_vitu_function_pane_ParamLimits

0x4fdd,	// (0x000af04a) grid_vitu_function_pane

0x4ff8,	// (0x000af065) grid_vitu_itu_pane_ParamLimits

0x4ff8,	// (0x000af065) grid_vitu_itu_pane

0x5016,	// (0x000af083) cell_vitu_itu_pane_ParamLimits

0x5016,	// (0x000af083) cell_vitu_itu_pane

0x5038,	// (0x000af0a5) cell_vitu_function_pane_ParamLimits

0x5038,	// (0x000af0a5) cell_vitu_function_pane

0xa453,	// (0x000b44c0) bg_popup_sub_pane_cp08_ParamLimits

0xa453,	// (0x000b44c0) bg_popup_sub_pane_cp08

0x5051,	// (0x000af0be) field_vitu_entry_pane_t1_ParamLimits

0x5051,	// (0x000af0be) field_vitu_entry_pane_t1

0xd304,	// (0x000b7371) field_vitu_entry_pane_t2_ParamLimits

0xd304,	// (0x000b7371) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x000b9885) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x000b9885) field_vitu_entry_pane_t

0xd33e,	// (0x000b73ab) bg_button_pane_cp05_ParamLimits

0xd33e,	// (0x000b73ab) bg_button_pane_cp05

0x5070,	// (0x000af0dd) cell_vitu_itu_pane_g1

0x5088,	// (0x000af0f5) cell_vitu_itu_pane_t1_ParamLimits

0x5088,	// (0x000af0f5) cell_vitu_itu_pane_t1

0x509a,	// (0x000af107) cell_vitu_itu_pane_t2_ParamLimits

0x509a,	// (0x000af107) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x000b988a) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x000b988a) cell_vitu_itu_pane_t

0xd34c,	// (0x000b73b9) bg_button_pane_cp07

0x50cf,	// (0x000af13c) cell_vitu_function_pane_g1

0x9714,	// (0x000b3781) main_calc_pane_g1

0x0318,	// (0x000aa385) aid_visual_content_pane

0x945e,	// (0x000b34cb) main_vradio_pane

0x50d8,	// (0x000af145) main_vradio_pane_g1_ParamLimits

0x50d8,	// (0x000af145) main_vradio_pane_g1

0xd356,	// (0x000b73c3) main_vradio_pane_g2_ParamLimits

0xd356,	// (0x000b73c3) main_vradio_pane_g2

0x0001,

0xf824,	// (0x000b9891) main_vradio_pane_g_ParamLimits

0xf824,	// (0x000b9891) main_vradio_pane_g

0x50f1,	// (0x000af15e) main_vradio_pane_t1_ParamLimits

0x50f1,	// (0x000af15e) main_vradio_pane_t1

0x5106,	// (0x000af173) main_vradio_pane_t2_ParamLimits

0x5106,	// (0x000af173) main_vradio_pane_t2

0xd363,	// (0x000b73d0) main_vradio_pane_t3_ParamLimits

0xd363,	// (0x000b73d0) main_vradio_pane_t3

0x0002,

0xf829,	// (0x000b9896) main_vradio_pane_t_ParamLimits

0xf829,	// (0x000b9896) main_vradio_pane_t

0x511b,	// (0x000af188) vradio_rocker_control_pane_ParamLimits

0x511b,	// (0x000af188) vradio_rocker_control_pane

0x512d,	// (0x000af19a) vradio_station_info_pane_ParamLimits

0x512d,	// (0x000af19a) vradio_station_info_pane

0xd377,	// (0x000b73e4) vradio_frequency_info_pane_ParamLimits

0xd377,	// (0x000b73e4) vradio_frequency_info_pane

0xcd1c,	// (0x000b6d89) vradio_station_info_pane_g1

0xd386,	// (0x000b73f3) vradio_station_info_pane_t1_ParamLimits

0xd386,	// (0x000b73f3) vradio_station_info_pane_t1

0xd3a8,	// (0x000b7415) vradio_station_info_pane_t2_ParamLimits

0xd3a8,	// (0x000b7415) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x000b989d) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x000b989d) vradio_station_info_pane_t

0xd3ba,	// (0x000b7427) vradio_tuning_pane

0xd3c2,	// (0x000b742f) vradio_rocker_control_pane_g1

0xd3ca,	// (0x000b7437) vradio_rocker_control_pane_g2

0xd3d2,	// (0x000b743f) vradio_rocker_control_pane_g3

0xd3da,	// (0x000b7447) vradio_rocker_control_pane_g4

0xd3e2,	// (0x000b744f) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x000b98a2) vradio_rocker_control_pane_g

0x513f,	// (0x000af1ac) vradio_frequency_info_pane_g1

0xd3ea,	// (0x000b7457) vradio_frequency_info_pane_t1_ParamLimits

0xd3ea,	// (0x000b7457) vradio_frequency_info_pane_t1

0x5149,	// (0x000af1b6) vradio_tuning_pane_g1

0x5154,	// (0x000af1c1) vradio_tuning_pane_t1

0x0375,	// (0x000aa3e2) area_side_right_pane_ParamLimits

0x0375,	// (0x000aa3e2) area_side_right_pane

0xc8cf,	// (0x000b693c) status_small_pane_g1

0xc8d7,	// (0x000b6944) status_small_pane_g2

0xc8e0,	// (0x000b694d) status_small_pane_g3

0xc8e9,	// (0x000b6956) status_small_pane_g4

0x0003,

0xf5f0,	// (0x000b965d) status_small_pane_g

0xc8f2,	// (0x000b695f) status_small_pane_t1

0x945e,	// (0x000b34cb) main_video3_pane

0xd3fe,	// (0x000b746b) cams_zoom_vslider_pane

0xd406,	// (0x000b7473) image3_wide_pane_ParamLimits

0xd406,	// (0x000b7473) image3_wide_pane

0xd420,	// (0x000b748d) image3_wide_small_pane

0xd42c,	// (0x000b7499) main_video3_pane_g1_ParamLimits

0xd42c,	// (0x000b7499) main_video3_pane_g1

0xd448,	// (0x000b74b5) main_video3_pane_g2_ParamLimits

0xd448,	// (0x000b74b5) main_video3_pane_g2

0x0001,

0xf840,	// (0x000b98ad) main_video3_pane_g_ParamLimits

0xf840,	// (0x000b98ad) main_video3_pane_g

0xd464,	// (0x000b74d1) main_video3_pane_t1_ParamLimits

0xd464,	// (0x000b74d1) main_video3_pane_t1

0xd48f,	// (0x000b74fc) main_video3_pane_t2_ParamLimits

0xd48f,	// (0x000b74fc) main_video3_pane_t2

0xd4ba,	// (0x000b7527) main_video3_pane_t3_ParamLimits

0xd4ba,	// (0x000b7527) main_video3_pane_t3

0x0002,

0xf845,	// (0x000b98b2) main_video3_pane_t_ParamLimits

0xf845,	// (0x000b98b2) main_video3_pane_t

0xd4e7,	// (0x000b7554) cams_zoom_vslider_pane_g1

0xd4f0,	// (0x000b755d) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x000b98b9) cams_zoom_vslider_pane_g

0xd4f8,	// (0x000b7565) small_slider_vertical_pane

0xcd1c,	// (0x000b6d89) small_slider_vertical_pane_g1

0xcd1c,	// (0x000b6d89) small_slider_vertical_pane_g2

0xd500,	// (0x000b756d) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x000b98be) small_slider_vertical_pane_g

0x945e,	// (0x000b34cb) main_hwr_training_pane

0xd509,	// (0x000b7576) hwr_training_instruct_pane_ParamLimits

0xd509,	// (0x000b7576) hwr_training_instruct_pane

0x5163,	// (0x000af1d0) hwr_training_navi_pane_ParamLimits

0x5163,	// (0x000af1d0) hwr_training_navi_pane

0x5182,	// (0x000af1ef) hwr_training_write_pane_ParamLimits

0x5182,	// (0x000af1ef) hwr_training_write_pane

0x9428,	// (0x000b3495) bg_frame_shadow_pane

0xd540,	// (0x000b75ad) hwr_training_write_pane_g1

0xd548,	// (0x000b75b5) hwr_training_write_pane_g2

0xd550,	// (0x000b75bd) hwr_training_write_pane_g3

0xd558,	// (0x000b75c5) hwr_training_write_pane_g4

0xd560,	// (0x000b75cd) hwr_training_write_pane_g5

0xd568,	// (0x000b75d5) hwr_training_write_pane_g6

0xd570,	// (0x000b75dd) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x000b98c5) hwr_training_write_pane_g

0x999c,	// (0x000b3a09) hwr_training_navi_pane_g1_ParamLimits

0x999c,	// (0x000b3a09) hwr_training_navi_pane_g1

0x99ae,	// (0x000b3a1b) hwr_training_navi_pane_g2_ParamLimits

0x99ae,	// (0x000b3a1b) hwr_training_navi_pane_g2

0x99c0,	// (0x000b3a2d) hwr_training_navi_pane_g3_ParamLimits

0x99c0,	// (0x000b3a2d) hwr_training_navi_pane_g3

0x99d0,	// (0x000b3a3d) hwr_training_navi_pane_g4_ParamLimits

0x99d0,	// (0x000b3a3d) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x000b98d4) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x000b98d4) hwr_training_navi_pane_g

0x99dd,	// (0x000b3a4a) hwr_training_navi_pane_t1

0x51cc,	// (0x000af239) list_single_hwr_training_instruct_pane_ParamLimits

0x51cc,	// (0x000af239) list_single_hwr_training_instruct_pane

0xd578,	// (0x000b75e5) list_single_hwr_training_instruct_pane_t1

0xcc5c,	// (0x000b6cc9) bg_frame_shadow_pane_g1

0xd587,	// (0x000b75f4) bg_frame_shadow_pane_g2

0xd58f,	// (0x000b75fc) bg_frame_shadow_pane_g3

0xd597,	// (0x000b7604) bg_frame_shadow_pane_g4

0xd59f,	// (0x000b760c) bg_frame_shadow_pane_g5

0xd5a7,	// (0x000b7614) bg_frame_shadow_pane_g6

0xd5af,	// (0x000b761c) bg_frame_shadow_pane_g7

0xa952,	// (0x000b49bf) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x000b98df) bg_frame_shadow_pane_g

0x945e,	// (0x000b34cb) main_video_tele_dialer_pane

0x51e2,	// (0x000af24f) aid_size_cell_video_keypad_ParamLimits

0x51e2,	// (0x000af24f) aid_size_cell_video_keypad

0x51fc,	// (0x000af269) grid_video_dialer_keypad_pane_ParamLimits

0x51fc,	// (0x000af269) grid_video_dialer_keypad_pane

0x524a,	// (0x000af2b7) video_down_pane_cp_ParamLimits

0x524a,	// (0x000af2b7) video_down_pane_cp

0x527c,	// (0x000af2e9) cell_video_dialer_keypad_pane_ParamLimits

0x527c,	// (0x000af2e9) cell_video_dialer_keypad_pane

0xd5b7,	// (0x000b7624) bg_button_pane_cp08_ParamLimits

0xd5b7,	// (0x000b7624) bg_button_pane_cp08

0x529e,	// (0x000af30b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x529e,	// (0x000af30b) cell_video_dialer_keypad_pane_g1

0x494a,	// (0x000ae9b7) mup3_rocker2_pane_ParamLimits

0x494a,	// (0x000ae9b7) mup3_rocker2_pane

0xcd1c,	// (0x000b6d89) mup3_rocker2_pane_g1

0x3477,	// (0x000ad4e4) main_dialer2_pane

0x945e,	// (0x000b34cb) main_mp4_pane

0x9a09,	// (0x000b3a76) main_mp4_pane_g1_ParamLimits

0x9a09,	// (0x000b3a76) main_mp4_pane_g1

0x9a09,	// (0x000b3a76) main_mp4_pane_g2_ParamLimits

0x9a09,	// (0x000b3a76) main_mp4_pane_g2

0x52d8,	// (0x000af345) main_mp4_pane_g3_ParamLimits

0x52d8,	// (0x000af345) main_mp4_pane_g3

0x9a17,	// (0x000b3a84) main_mp4_pane_g4_ParamLimits

0x9a17,	// (0x000b3a84) main_mp4_pane_g4

0x9a45,	// (0x000b3ab2) main_mp4_pane_g5_ParamLimits

0x9a45,	// (0x000b3ab2) main_mp4_pane_g5

0x0007,

0xf892,	// (0x000b98ff) main_mp4_pane_g_ParamLimits

0xf892,	// (0x000b98ff) main_mp4_pane_g

0x9ab9,	// (0x000b3b26) main_mp4_pane_t1_ParamLimits

0x9ab9,	// (0x000b3b26) main_mp4_pane_t1

0x9b15,	// (0x000b3b82) main_mp4_pane_t2_ParamLimits

0x9b15,	// (0x000b3b82) main_mp4_pane_t2

0xd5c3,	// (0x000b7630) main_mp4_pane_t3_ParamLimits

0xd5c3,	// (0x000b7630) main_mp4_pane_t3

0x9b67,	// (0x000b3bd4) main_mp4_pane_t4_ParamLimits

0x9b67,	// (0x000b3bd4) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x000b9910) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x000b9910) main_mp4_pane_t

0x9bab,	// (0x000b3c18) mp4_progress_pane_ParamLimits

0x9bab,	// (0x000b3c18) mp4_progress_pane

0x9bf5,	// (0x000b3c62) mp4_rocker_pane_ParamLimits

0x9bf5,	// (0x000b3c62) mp4_rocker_pane

0xd5f1,	// (0x000b765e) mp4_progress_pane_t1

0xd60a,	// (0x000b7677) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x000b9919) mp4_progress_pane_t

0xd623,	// (0x000b7690) mup_progress_pane_cp04

0xd636,	// (0x000b76a3) mp4_rocker_pane_g1

0x5314,	// (0x000af381) aid_cell_size_keypad2_ParamLimits

0x5314,	// (0x000af381) aid_cell_size_keypad2

0x532a,	// (0x000af397) dialer2_ne_pane_ParamLimits

0x532a,	// (0x000af397) dialer2_ne_pane

0x5344,	// (0x000af3b1) grid_dialer2_keypad_pane_ParamLimits

0x5344,	// (0x000af3b1) grid_dialer2_keypad_pane

0xcb01,	// (0x000b6b6e) bg_popup_call_pane_cp07_ParamLimits

0xcb01,	// (0x000b6b6e) bg_popup_call_pane_cp07

0x5360,	// (0x000af3cd) dialer2_ne_pane_t1_ParamLimits

0x5360,	// (0x000af3cd) dialer2_ne_pane_t1

0x539c,	// (0x000af409) cell_dialer2_keypad_pane_ParamLimits

0x539c,	// (0x000af409) cell_dialer2_keypad_pane

0xd652,	// (0x000b76bf) bg_button_pane_pane_cp04_ParamLimits

0xd652,	// (0x000b76bf) bg_button_pane_pane_cp04

0x53be,	// (0x000af42b) cell_dialer2_keypad_pane_g1_ParamLimits

0x53be,	// (0x000af42b) cell_dialer2_keypad_pane_g1

0x1410,	// (0x000ab47d) aid_placing_vt_set_content_ParamLimits

0x1410,	// (0x000ab47d) aid_placing_vt_set_content

0x1438,	// (0x000ab4a5) aid_placing_vt_set_title_ParamLimits

0x1438,	// (0x000ab4a5) aid_placing_vt_set_title

0x945e,	// (0x000b34cb) main_image3_pane

0x5484,	// (0x000af4f1) area_side_right_pane_cp01_ParamLimits

0x5484,	// (0x000af4f1) area_side_right_pane_cp01

0x9a09,	// (0x000b3a76) main_image3_pane_g1_ParamLimits

0x9a09,	// (0x000b3a76) main_image3_pane_g1

0x549b,	// (0x000af508) main_image3_pane_g2_ParamLimits

0x549b,	// (0x000af508) main_image3_pane_g2

0x54c3,	// (0x000af530) main_image3_pane_g3_ParamLimits

0x54c3,	// (0x000af530) main_image3_pane_g3

0x54ed,	// (0x000af55a) main_image3_pane_g4_ParamLimits

0x54ed,	// (0x000af55a) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x000b9928) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x000b9928) main_image3_pane_g

0x5517,	// (0x000af584) main_image3_pane_t1_ParamLimits

0x5517,	// (0x000af584) main_image3_pane_t1

0x556f,	// (0x000af5dc) main_image3_pane_t2_ParamLimits

0x556f,	// (0x000af5dc) main_image3_pane_t2

0x55c1,	// (0x000af62e) main_image3_pane_t3_ParamLimits

0x55c1,	// (0x000af62e) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x000b9931) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x000b9931) main_image3_pane_t

0xa453,	// (0x000b44c0) grid_sctrl_middle_pane_cp01_ParamLimits

0xa453,	// (0x000b44c0) grid_sctrl_middle_pane_cp01

0x5649,	// (0x000af6b6) cell_sctrl_middle_pane_cp01_ParamLimits

0x5649,	// (0x000af6b6) cell_sctrl_middle_pane_cp01

0x5666,	// (0x000af6d3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5666,	// (0x000af6d3) cell_sctrl_middle_pane_cp01_g1

0x945e,	// (0x000b34cb) main_call4_pane

0x567c,	// (0x000af6e9) aid_size_button_call4_ParamLimits

0x567c,	// (0x000af6e9) aid_size_button_call4

0x56af,	// (0x000af71c) call4_windows_pane_ParamLimits

0x56af,	// (0x000af71c) call4_windows_pane

0x56ce,	// (0x000af73b) grid_call4_button_pane_ParamLimits

0x56ce,	// (0x000af73b) grid_call4_button_pane

0x5701,	// (0x000af76e) call4_windows_conf_pane

0x5718,	// (0x000af785) popup_call4_audio_first_window_ParamLimits

0x5718,	// (0x000af785) popup_call4_audio_first_window

0x5768,	// (0x000af7d5) popup_call4_audio_second_window_ParamLimits

0x5768,	// (0x000af7d5) popup_call4_audio_second_window

0x577f,	// (0x000af7ec) popup_call4_audio_wait_window_ParamLimits

0x577f,	// (0x000af7ec) popup_call4_audio_wait_window

0x578d,	// (0x000af7fa) cell_call4_button_pane_ParamLimits

0x578d,	// (0x000af7fa) cell_call4_button_pane

0x57b2,	// (0x000af81f) bg_button_pane_cp09_ParamLimits

0x57b2,	// (0x000af81f) bg_button_pane_cp09

0x57be,	// (0x000af82b) cell_call4_button_pane_g1_ParamLimits

0x57be,	// (0x000af82b) cell_call4_button_pane_g1

0x57e4,	// (0x000af851) cell_call4_button_pane_t1_ParamLimits

0x57e4,	// (0x000af851) cell_call4_button_pane_t1

0xd666,	// (0x000b76d3) popup_call4_audio_conf_window_ParamLimits

0xd666,	// (0x000b76d3) popup_call4_audio_conf_window

0x49aa,	// (0x000aea17) mup3_progress_pane_t1_ParamLimits

0x49c9,	// (0x000aea36) mup3_progress_pane_t2_ParamLimits

0xcfdc,	// (0x000b7049) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x000b9801) mup3_progress_pane_t_ParamLimits

0xcff9,	// (0x000b7066) mup_progress_pane_cp03_ParamLimits

0x4fa7,	// (0x000af014) mup3_control_keys_pane_g4_copy1

0x9bd9,	// (0x000b3c46) mp4_rocker2_pane_ParamLimits

0x9bd9,	// (0x000b3c46) mp4_rocker2_pane

0xd67a,	// (0x000b76e7) mp4_rocker2_pane_g1

0xd682,	// (0x000b76ef) mp4_rocker2_pane_g2

0x9c79,	// (0x000b3ce6) mp4_rocker2_pane_g3

0x9c81,	// (0x000b3cee) mp4_rocker2_pane_g4

0x9c89,	// (0x000b3cf6) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x000b993a) mp4_rocker2_pane_g

0x945e,	// (0x000b34cb) main_camera4_pane

0x945e,	// (0x000b34cb) main_video4_pane

0x5218,	// (0x000af285) main_video_tele_dialer_pane_t1_ParamLimits

0x5218,	// (0x000af285) main_video_tele_dialer_pane_t1

0x5231,	// (0x000af29e) main_video_tele_dialer_pane_t2_ParamLimits

0x5231,	// (0x000af29e) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x000b98f0) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x000b98f0) main_video_tele_dialer_pane_t

0x5826,	// (0x000af893) cam4_autofocus_pane_ParamLimits

0x5826,	// (0x000af893) cam4_autofocus_pane

0x583c,	// (0x000af8a9) cam4_image_uncrop_pane_ParamLimits

0x583c,	// (0x000af8a9) cam4_image_uncrop_pane

0x5856,	// (0x000af8c3) cam4_indicators_pane_ParamLimits

0x5856,	// (0x000af8c3) cam4_indicators_pane

0x5881,	// (0x000af8ee) main_camera4_pane_g1_ParamLimits

0x5881,	// (0x000af8ee) main_camera4_pane_g1

0x5893,	// (0x000af900) main_camera4_pane_g2_ParamLimits

0x5893,	// (0x000af900) main_camera4_pane_g2

0x58a6,	// (0x000af913) main_camera4_pane_g3_ParamLimits

0x58a6,	// (0x000af913) main_camera4_pane_g3

0x58b9,	// (0x000af926) main_camera4_pane_g4_ParamLimits

0x58b9,	// (0x000af926) main_camera4_pane_g4

0x58cc,	// (0x000af939) main_camera4_pane_g5_ParamLimits

0x58cc,	// (0x000af939) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x000b9945) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x000b9945) main_camera4_pane_g

0x58f0,	// (0x000af95d) main_camera4_pane_t1_ParamLimits

0x58f0,	// (0x000af95d) main_camera4_pane_t1

0x9cad,	// (0x000b3d1a) bg_tb_trans_pane_cp06

0x9cc3,	// (0x000b3d30) cam4_indicators_pane_g1

0x9cd4,	// (0x000b3d41) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x000b9960) cam4_indicators_pane_g

0x9cec,	// (0x000b3d59) cam4_indicators_pane_t1

0x5954,	// (0x000af9c1) main_video4_pane_g1_ParamLimits

0x5954,	// (0x000af9c1) main_video4_pane_g1

0x5963,	// (0x000af9d0) main_video4_pane_g2_ParamLimits

0x5963,	// (0x000af9d0) main_video4_pane_g2

0x5972,	// (0x000af9df) main_video4_pane_g3_ParamLimits

0x5972,	// (0x000af9df) main_video4_pane_g3

0x5981,	// (0x000af9ee) main_video4_pane_g4_ParamLimits

0x5981,	// (0x000af9ee) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x000b9967) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x000b9967) main_video4_pane_g

0x599f,	// (0x000afa0c) vid4_indicators_pane_ParamLimits

0x599f,	// (0x000afa0c) vid4_indicators_pane

0x59cd,	// (0x000afa3a) video4_image_uncrop_cif_pane_ParamLimits

0x59cd,	// (0x000afa3a) video4_image_uncrop_cif_pane

0x59e7,	// (0x000afa54) video4_image_uncrop_nhd_pane_ParamLimits

0x59e7,	// (0x000afa54) video4_image_uncrop_nhd_pane

0x583c,	// (0x000af8a9) video4_image_uncrop_vga_pane_ParamLimits

0x583c,	// (0x000af8a9) video4_image_uncrop_vga_pane

0x9450,	// (0x000b34bd) bg_tb_trans_pane_cp07

0x9d16,	// (0x000b3d83) vid4_indicators_pane_g1

0x9d2a,	// (0x000b3d97) vid4_indicators_pane_g2

0x9d3e,	// (0x000b3dab) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x000b9972) vid4_indicators_pane_g

0x9d6b,	// (0x000b3dd8) vid4_indicators_pane_t1

0x59fb,	// (0x000afa68) cam4_autofocus_pane_g1

0x5a03,	// (0x000afa70) cam4_autofocus_pane_g2

0x5a0b,	// (0x000afa78) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x000b997d) cam4_autofocus_pane_g

0x5a13,	// (0x000afa80) cam4_autofocus_pane_g3_copy1

0x5260,	// (0x000af2cd) video_down_pane_cp_t1

0x526e,	// (0x000af2db) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x000b98f5) video_down_pane_cp_t

0x9450,	// (0x000b34bd) popup_vitu2_window_ParamLimits

0x9450,	// (0x000b34bd) popup_vitu2_window

0x5a1b,	// (0x000afa88) aid_size_cell2_itu2_ParamLimits

0x5a1b,	// (0x000afa88) aid_size_cell2_itu2

0x5a41,	// (0x000afaae) aid_size_cell_itu2_ParamLimits

0x5a41,	// (0x000afaae) aid_size_cell_itu2

0x5a9d,	// (0x000afb0a) bg_popup_window_pane_cp09_ParamLimits

0x5a9d,	// (0x000afb0a) bg_popup_window_pane_cp09

0x5aab,	// (0x000afb18) field_vitu2_entry_pane_ParamLimits

0x5aab,	// (0x000afb18) field_vitu2_entry_pane

0x5ad1,	// (0x000afb3e) grid_vitu2_function_pane_ParamLimits

0x5ad1,	// (0x000afb3e) grid_vitu2_function_pane

0x5b22,	// (0x000afb8f) grid_vitu2_itu_pane_ParamLimits

0x5b22,	// (0x000afb8f) grid_vitu2_itu_pane

0x5bb8,	// (0x000afc25) cell_vitu2_itu_pane_ParamLimits

0x5bb8,	// (0x000afc25) cell_vitu2_itu_pane

0x5be4,	// (0x000afc51) cell_vitu2_function_pane_ParamLimits

0x5be4,	// (0x000afc51) cell_vitu2_function_pane

0xd69c,	// (0x000b7709) bg_popup_call_pane_cp08_ParamLimits

0xd69c,	// (0x000b7709) bg_popup_call_pane_cp08

0xd6b3,	// (0x000b7720) field_vitu2_entry_pane_g1

0xd6bf,	// (0x000b772c) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x000b9984) field_vitu2_entry_pane_g

0x5c23,	// (0x000afc90) field_vitu2_entry_pane_t1_ParamLimits

0x5c23,	// (0x000afc90) field_vitu2_entry_pane_t1

0xa4d5,	// (0x000b4542) field_vitu2_entry_pane_t2_ParamLimits

0xa4d5,	// (0x000b4542) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x000b998b) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x000b998b) field_vitu2_entry_pane_t

0x5c52,	// (0x000afcbf) bg_button_pane_cp010_ParamLimits

0x5c52,	// (0x000afcbf) bg_button_pane_cp010

0x9d82,	// (0x000b3def) cell_vitu2_itu_pane_g1

0x5c6e,	// (0x000afcdb) cell_vitu2_itu_pane_t1_ParamLimits

0x5c6e,	// (0x000afcdb) cell_vitu2_itu_pane_t1

0x01dc,	// (0x000aa249) cell_vitu2_itu_pane_t2_ParamLimits

0x01dc,	// (0x000aa249) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x000b9995) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x000b9995) cell_vitu2_itu_pane_t

0x9450,	// (0x000b34bd) bg_button_pane_cp011

0x5ccc,	// (0x000afd39) cell_vitu2_function_pane_g1

0x945e,	// (0x000b34cb) main_myfav_hc_pane

0x5611,	// (0x000af67e) popup_image3_note_pane_ParamLimits

0x5611,	// (0x000af67e) popup_image3_note_pane

0x562d,	// (0x000af69a) popup_image3_tool_bar_pane_ParamLimits

0x562d,	// (0x000af69a) popup_image3_tool_bar_pane

0x026a,	// (0x000aa2d7) cell_vitu2_itu_pane_t3_ParamLimits

0x026a,	// (0x000aa2d7) cell_vitu2_itu_pane_t3

0x9428,	// (0x000b3495) bg_popup_trans_pane

0xd6e1,	// (0x000b774e) grid_image3_tool_bar_pane

0xd6eb,	// (0x000b7758) bg_popup_trans_pane_g1

0xacd5,	// (0x000b4d42) bg_popup_trans_pane_g2

0xd6f3,	// (0x000b7760) bg_popup_trans_pane_g3

0xd6fb,	// (0x000b7768) bg_popup_trans_pane_g4

0xd703,	// (0x000b7770) bg_popup_trans_pane_g5

0xd70b,	// (0x000b7778) bg_popup_trans_pane_g6

0xd713,	// (0x000b7780) bg_popup_trans_pane_g7

0xd71b,	// (0x000b7788) bg_popup_trans_pane_g8

0xacb5,	// (0x000b4d22) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x000b999c) bg_popup_trans_pane_g

0xd723,	// (0x000b7790) cell_image3_tool_bar_pane_ParamLimits

0xd723,	// (0x000b7790) cell_image3_tool_bar_pane

0xcd1c,	// (0x000b6d89) cell_image3_tool_bar_pane_g1

0x9428,	// (0x000b3495) bg_popup_trans_pane_cp1

0xd737,	// (0x000b77a4) popup_image3_note_pane_t1

0xd745,	// (0x000b77b2) popup_image3_note_pane_t2

0xd753,	// (0x000b77c0) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x000b99af) popup_image3_note_pane_t

0xd761,	// (0x000b77ce) popup_image3_note_pane_t3_copy1

0x5ce0,	// (0x000afd4d) bg_myfav_hc_instruction_pane_ParamLimits

0x5ce0,	// (0x000afd4d) bg_myfav_hc_instruction_pane

0x5cf4,	// (0x000afd61) cell_myfav_contact_pane_ParamLimits

0x5cf4,	// (0x000afd61) cell_myfav_contact_pane

0x5d12,	// (0x000afd7f) cell_myfav_contact_pane_cp1_ParamLimits

0x5d12,	// (0x000afd7f) cell_myfav_contact_pane_cp1

0x5d2a,	// (0x000afd97) cell_myfav_contact_pane_cp2_ParamLimits

0x5d2a,	// (0x000afd97) cell_myfav_contact_pane_cp2

0x5d42,	// (0x000afdaf) cell_myfav_contact_pane_cp3_ParamLimits

0x5d42,	// (0x000afdaf) cell_myfav_contact_pane_cp3

0x5d59,	// (0x000afdc6) cell_myfav_contact_pane_cp4_ParamLimits

0x5d59,	// (0x000afdc6) cell_myfav_contact_pane_cp4

0x5d71,	// (0x000afdde) cell_myfav_contact_pane_cp5_ParamLimits

0x5d71,	// (0x000afdde) cell_myfav_contact_pane_cp5

0x5d85,	// (0x000afdf2) cell_myfav_contact_pane_cp6_ParamLimits

0x5d85,	// (0x000afdf2) cell_myfav_contact_pane_cp6

0x5d9b,	// (0x000afe08) cell_myfav_contact_pane_cp7_ParamLimits

0x5d9b,	// (0x000afe08) cell_myfav_contact_pane_cp7

0xd76f,	// (0x000b77dc) listscroll_gen_pane_cp05

0x5db5,	// (0x000afe22) main_myfav_hc_pane_g1_ParamLimits

0x5db5,	// (0x000afe22) main_myfav_hc_pane_g1

0x5dcf,	// (0x000afe3c) main_myfav_hc_pane_g2_ParamLimits

0x5dcf,	// (0x000afe3c) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x000b99b6) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x000b99b6) main_myfav_hc_pane_g

0x5e01,	// (0x000afe6e) main_myfav_hc_pane_t1_ParamLimits

0x5e01,	// (0x000afe6e) main_myfav_hc_pane_t1

0xd778,	// (0x000b77e5) main_myfav_hc_pane_t2_ParamLimits

0xd778,	// (0x000b77e5) main_myfav_hc_pane_t2

0xd78a,	// (0x000b77f7) main_myfav_hc_pane_t3_ParamLimits

0xd78a,	// (0x000b77f7) main_myfav_hc_pane_t3

0x5e18,	// (0x000afe85) main_myfav_hc_pane_t4_ParamLimits

0x5e18,	// (0x000afe85) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x000b99bd) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x000b99bd) main_myfav_hc_pane_t

0xcd1c,	// (0x000b6d89) bg_myfav_hc_instruction_pane_g1

0xd79c,	// (0x000b7809) cell_myfav_contact_pane_g1_ParamLimits

0xd79c,	// (0x000b7809) cell_myfav_contact_pane_g1

0xd79c,	// (0x000b7809) cell_myfav_contact_pane_g2_ParamLimits

0xd79c,	// (0x000b7809) cell_myfav_contact_pane_g2

0xd7a8,	// (0x000b7815) cell_myfav_contact_pane_g3_ParamLimits

0xd7a8,	// (0x000b7815) cell_myfav_contact_pane_g3

0xcfc6,	// (0x000b7033) cell_myfav_contact_pane_g4_ParamLimits

0xcfc6,	// (0x000b7033) cell_myfav_contact_pane_g4

0xd7b5,	// (0x000b7822) cell_myfav_contact_pane_g5_ParamLimits

0xd7b5,	// (0x000b7822) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x000b99c8) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x000b99c8) cell_myfav_contact_pane_g

0x5de9,	// (0x000afe56) main_myfav_hc_pane_g3_ParamLimits

0x5de9,	// (0x000afe56) main_myfav_hc_pane_g3

0x048f,	// (0x000aa4fc) popup_adpt_find_window

0x5e40,	// (0x000afead) afind_page_pane_ParamLimits

0x5e40,	// (0x000afead) afind_page_pane

0x5e55,	// (0x000afec2) aid_size_cell_afind_ParamLimits

0x5e55,	// (0x000afec2) aid_size_cell_afind

0x5e73,	// (0x000afee0) bg_popup_sub_pane_cp09_ParamLimits

0x5e73,	// (0x000afee0) bg_popup_sub_pane_cp09

0x5e80,	// (0x000afeed) find_pane_cp01_ParamLimits

0x5e80,	// (0x000afeed) find_pane_cp01

0xd7c1,	// (0x000b782e) grid_afind_control_pane_ParamLimits

0xd7c1,	// (0x000b782e) grid_afind_control_pane

0x5e8d,	// (0x000afefa) grid_afind_pane_ParamLimits

0x5e8d,	// (0x000afefa) grid_afind_pane

0x5eac,	// (0x000aff19) cell_afind_pane_ParamLimits

0x5eac,	// (0x000aff19) cell_afind_pane

0xcd1c,	// (0x000b6d89) afind_page_pane_g1

0x5f13,	// (0x000aff80) afind_page_pane_g2

0x5f1c,	// (0x000aff89) afind_page_pane_g3

0x0002,

0xf966,	// (0x000b99d3) afind_page_pane_g

0x5f25,	// (0x000aff92) afind_page_pane_t1

0xd7d5,	// (0x000b7842) cell_afind_grid_control_pane_ParamLimits

0xd7d5,	// (0x000b7842) cell_afind_grid_control_pane

0xd652,	// (0x000b76bf) bg_button_pane_cp69_ParamLimits

0xd652,	// (0x000b76bf) bg_button_pane_cp69

0x5f45,	// (0x000affb2) cell_afind_pane_g1_ParamLimits

0x5f45,	// (0x000affb2) cell_afind_pane_g1

0x5f52,	// (0x000affbf) cell_afind_pane_t1_ParamLimits

0x5f52,	// (0x000affbf) cell_afind_pane_t1

0xaace,	// (0x000b4b3b) bg_button_pane_cp72

0xd7e4,	// (0x000b7851) cell_afind_grid_control_pane_g1

0x2f24,	// (0x000acf91) aid_image_placing_area_ParamLimits

0x2f24,	// (0x000acf91) aid_image_placing_area

0xd2ec,	// (0x000b7359) field_vitu_entry_pane_g1_ParamLimits

0xd2ec,	// (0x000b7359) field_vitu_entry_pane_g1

0xd2f8,	// (0x000b7365) field_vitu_entry_pane_g2_ParamLimits

0xd2f8,	// (0x000b7365) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x000b9880) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x000b9880) field_vitu_entry_pane_g

0x5070,	// (0x000af0dd) cell_vitu_itu_pane_g1_ParamLimits

0x50b2,	// (0x000af11f) cell_vitu_itu_pane_t3_ParamLimits

0x50b2,	// (0x000af11f) cell_vitu_itu_pane_t3

0xd5f1,	// (0x000b765e) mp4_progress_pane_t1_ParamLimits

0xd60a,	// (0x000b7677) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x000b9919) mp4_progress_pane_t_ParamLimits

0xd623,	// (0x000b7690) mup_progress_pane_cp04_ParamLimits

0x5e2c,	// (0x000afe99) main_myfav_hc_pane_t5_ParamLimits

0x5e2c,	// (0x000afe99) main_myfav_hc_pane_t5

0x032c,	// (0x000aa399) aid_zoom_text_primary

0x048f,	// (0x000aa4fc) popup_adpt_find_window_ParamLimits

0x9450,	// (0x000b34bd) main_cam_set_pane

0x586d,	// (0x000af8da) cam4_zoom_pane_ParamLimits

0x586d,	// (0x000af8da) cam4_zoom_pane

0x5f64,	// (0x000affd1) main_cam_set_pane_g1_ParamLimits

0x5f64,	// (0x000affd1) main_cam_set_pane_g1

0x5f72,	// (0x000affdf) main_cam_set_pane_g2_ParamLimits

0x5f72,	// (0x000affdf) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x000b99da) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x000b99da) main_cam_set_pane_g

0x5f93,	// (0x000b0000) main_cam_set_pane_t1_ParamLimits

0x5f93,	// (0x000b0000) main_cam_set_pane_t1

0x5fae,	// (0x000b001b) main_cset_listscroll_pane_ParamLimits

0x5fae,	// (0x000b001b) main_cset_listscroll_pane

0x5fce,	// (0x000b003b) main_cset_slider_pane_ParamLimits

0x5fce,	// (0x000b003b) main_cset_slider_pane

0xd7f5,	// (0x000b7862) main_cset_list_pane_ParamLimits

0xd7f5,	// (0x000b7862) main_cset_list_pane

0xd805,	// (0x000b7872) scroll_pane_cp028

0x5ff4,	// (0x000b0061) aid_area_touch_slider

0x6010,	// (0x000b007d) cset_slider_pane

0x603a,	// (0x000b00a7) main_cset_slider_pane_g1

0x604f,	// (0x000b00bc) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x000b99df) main_cset_slider_pane_g

0xd856,	// (0x000b78c3) main_cset_slider_pane_t1

0x60f3,	// (0x000b0160) main_cset_slider_pane_t2

0x610d,	// (0x000b017a) main_cset_slider_pane_t3

0x6127,	// (0x000b0194) main_cset_slider_pane_t4

0x6141,	// (0x000b01ae) main_cset_slider_pane_t5

0x615b,	// (0x000b01c8) main_cset_slider_pane_t6

0x6170,	// (0x000b01dd) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x000b9a04) main_cset_slider_pane_t

0x6274,	// (0x000b02e1) cset_list_set_pane_ParamLimits

0x6274,	// (0x000b02e1) cset_list_set_pane

0x6286,	// (0x000b02f3) aid_position_infowindow_above

0x628e,	// (0x000b02fb) aid_position_infowindow_below

0x6296,	// (0x000b0303) cset_list_set_pane_g1_ParamLimits

0x6296,	// (0x000b0303) cset_list_set_pane_g1

0x62a2,	// (0x000b030f) cset_list_set_pane_g3_ParamLimits

0x62a2,	// (0x000b030f) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x000b9a23) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x000b9a23) cset_list_set_pane_g

0x62b1,	// (0x000b031e) cset_list_set_pane_t1_ParamLimits

0x62b1,	// (0x000b031e) cset_list_set_pane_t1

0xa453,	// (0x000b44c0) list_highlight_pane_cp021_ParamLimits

0xa453,	// (0x000b44c0) list_highlight_pane_cp021

0xb605,	// (0x000b5672) cset_slider_pane_g1

0xb617,	// (0x000b5684) cset_slider_pane_g2

0xb60e,	// (0x000b567b) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x000b9a28) cset_slider_pane_g

0x9d94,	// (0x000b3e01) aid_area_touch_cam4_zoom

0x9d9c,	// (0x000b3e09) cam4_zoom_cont_pane

0x9da4,	// (0x000b3e11) cam4_zoom_pane_g1

0x9dac,	// (0x000b3e19) cam4_zoom_pane_g2

0x62c6,	// (0x000b0333) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x000b9a2f) cam4_zoom_pane_g

0x9db4,	// (0x000b3e21) cam4_zoom_cont_pane_g1

0x9dbd,	// (0x000b3e2a) cam4_zoom_cont_pane_g2

0x9dc6,	// (0x000b3e33) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x000b9a36) cam4_zoom_cont_pane_g

0x569a,	// (0x000af707) call4_image_pane_ParamLimits

0x569a,	// (0x000af707) call4_image_pane

0x5701,	// (0x000af76e) call4_windows_conf_pane_ParamLimits

0x5746,	// (0x000af7b3) popup_call4_audio_in_window_ParamLimits

0x5746,	// (0x000af7b3) popup_call4_audio_in_window

0x9428,	// (0x000b3495) bg_popup_call2_act_pane_cp02

0xd65e,	// (0x000b76cb) call4_list_conf_pane

0xcd1c,	// (0x000b6d89) call4_image_pane_g1

0xcd1c,	// (0x000b6d89) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x000b9741) call4_image_pane_g

0xd8f6,	// (0x000b7963) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f6,	// (0x000b7963) list_single_graphic_popup_conf4_pane

0x9428,	// (0x000b3495) list_highlight_pane_cp022

0xd909,	// (0x000b7976) list_single_graphic_popup_conf4_pane_g1

0xb1ef,	// (0x000b525c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x000b9a3d) list_single_graphic_popup_conf4_pane_g

0xd911,	// (0x000b797e) list_single_graphic_popup_conf4_pane_t1

0x155c,	// (0x000ab5c9) popup_vtel_slider_window_ParamLimits

0x155c,	// (0x000ab5c9) popup_vtel_slider_window

0xd640,	// (0x000b76ad) dialer2_ne_pane_t2_ParamLimits

0xd640,	// (0x000b76ad) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x000b991e) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x000b991e) dialer2_ne_pane_t

0xcb01,	// (0x000b6b6e) bg_popup_sub_pane_cp010_ParamLimits

0xcb01,	// (0x000b6b6e) bg_popup_sub_pane_cp010

0x62ce,	// (0x000b033b) popup_vtel_slider_window_g1_ParamLimits

0x62ce,	// (0x000b033b) popup_vtel_slider_window_g1

0x62e1,	// (0x000b034e) popup_vtel_slider_window_g2_ParamLimits

0x62e1,	// (0x000b034e) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x000b9a42) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x000b9a42) popup_vtel_slider_window_g

0x6337,	// (0x000b03a4) vtel_slider_pane_ParamLimits

0x6337,	// (0x000b03a4) vtel_slider_pane

0x6359,	// (0x000b03c6) vtel_slider_pane_g1_ParamLimits

0x6359,	// (0x000b03c6) vtel_slider_pane_g1

0x636d,	// (0x000b03da) vtel_slider_pane_g2_ParamLimits

0x636d,	// (0x000b03da) vtel_slider_pane_g2

0x6385,	// (0x000b03f2) vtel_slider_pane_g3_ParamLimits

0x6385,	// (0x000b03f2) vtel_slider_pane_g3

0x6359,	// (0x000b03c6) vtel_slider_pane_g4_ParamLimits

0x6359,	// (0x000b03c6) vtel_slider_pane_g4

0x639b,	// (0x000b0408) vtel_slider_pane_g5_ParamLimits

0x639b,	// (0x000b0408) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x000b9a4b) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x000b9a4b) vtel_slider_pane_g

0x9450,	// (0x000b34bd) main_gallery2_pane

0x5a6d,	// (0x000afada) aid_size_row_itut2_dropdow_list_ParamLimits

0x5a6d,	// (0x000afada) aid_size_row_itut2_dropdow_list

0x5af9,	// (0x000afb66) grid_vitu2_function_top_pane_ParamLimits

0x5af9,	// (0x000afb66) grid_vitu2_function_top_pane

0x5b63,	// (0x000afbd0) popup_vitu2_dropdown_list_window_ParamLimits

0x5b63,	// (0x000afbd0) popup_vitu2_dropdown_list_window

0x5b8c,	// (0x000afbf9) popup_vitu2_match_list_window

0x63bf,	// (0x000b042c) cell_vitu2_function_top_pane_ParamLimits

0x63bf,	// (0x000b042c) cell_vitu2_function_top_pane

0x63d7,	// (0x000b0444) cell_vitu2_function_top_pane_cp01_ParamLimits

0x63d7,	// (0x000b0444) cell_vitu2_function_top_pane_cp01

0x63f3,	// (0x000b0460) cell_vitu2_function_top_wide_pane_ParamLimits

0x63f3,	// (0x000b0460) cell_vitu2_function_top_wide_pane

0x9450,	// (0x000b34bd) bg_button_pane_cp012

0x640f,	// (0x000b047c) cell_vitu2_function_top_pane_g1

0x9dcf,	// (0x000b3e3c) bg_button_pane_cp013_ParamLimits

0x9dcf,	// (0x000b3e3c) bg_button_pane_cp013

0x6423,	// (0x000b0490) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6423,	// (0x000b0490) cell_vitu2_function_top_wide_pane_g1

0x9450,	// (0x000b34bd) bg_popup_sub_pane_cp20

0x643b,	// (0x000b04a8) list_vitu2_match_list_pane

0xd6eb,	// (0x000b7758) bg_popup_sub_pane_cp20_g1

0xd6f3,	// (0x000b7760) bg_popup_sub_pane_cp20_g2

0xacd5,	// (0x000b4d42) bg_popup_sub_pane_cp20_g3

0xd6fb,	// (0x000b7768) bg_popup_sub_pane_cp20_g4

0xacb5,	// (0x000b4d22) bg_popup_sub_pane_cp20_g5

0xd927,	// (0x000b7994) bg_popup_sub_pane_cp20_g6

0xd70b,	// (0x000b7778) bg_popup_sub_pane_cp20_g7

0xd713,	// (0x000b7780) bg_popup_sub_pane_cp20_g8

0xd71b,	// (0x000b7788) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x000b9a56) bg_popup_sub_pane_cp20_g

0x9deb,	// (0x000b3e58) list_vitu2_match_list_item_pane_ParamLimits

0x9deb,	// (0x000b3e58) list_vitu2_match_list_item_pane

0x9dfd,	// (0x000b3e6a) list_vitu2_match_list_item_pane_t1

0x945e,	// (0x000b34cb) bg_popup_sub_pane_cp21

0x9e0b,	// (0x000b3e78) grid_vitu2_dropdown_list_pane

0x64a9,	// (0x000b0516) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x64a9,	// (0x000b0516) cell_vitu2_dropdown_list_char_pane

0x64ca,	// (0x000b0537) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x64ca,	// (0x000b0537) cell_vitu2_dropdown_list_ctrl_pane

0xd92f,	// (0x000b799c) cell_vitu2_dropdown_list_char_pane_g1

0xd938,	// (0x000b79a5) cell_vitu2_dropdown_list_char_pane_g2

0xd941,	// (0x000b79ae) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x000b9a73) cell_vitu2_dropdown_list_char_pane_g

0x64f6,	// (0x000b0563) cell_vitu2_dropdown_list_char_pane_t1

0x6504,	// (0x000b0571) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6504,	// (0x000b0571) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6511,	// (0x000b057e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6511,	// (0x000b057e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x651e,	// (0x000b058b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x651e,	// (0x000b058b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x652b,	// (0x000b0598) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x652b,	// (0x000b0598) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9cad,	// (0x000b3d1a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9cad,	// (0x000b3d1a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x000b9a7a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x000b9a7a) cell_vitu2_dropdown_list_ctrl_pane_g

0x6547,	// (0x000b05b4) aid_size_cell_gallery2_ParamLimits

0x6547,	// (0x000b05b4) aid_size_cell_gallery2

0x6565,	// (0x000b05d2) grid_gallery2_pane_ParamLimits

0x6565,	// (0x000b05d2) grid_gallery2_pane

0x657f,	// (0x000b05ec) scroll_pane_cp029_ParamLimits

0x657f,	// (0x000b05ec) scroll_pane_cp029

0x6590,	// (0x000b05fd) cell_gallery2_pane_ParamLimits

0x6590,	// (0x000b05fd) cell_gallery2_pane

0xd94a,	// (0x000b79b7) cell_gallery2_pane_g2

0x65ef,	// (0x000b065c) cell_gallery2_pane_g3

0xd952,	// (0x000b79bf) cell_gallery2_pane_g4

0xd95a,	// (0x000b79c7) cell_gallery2_pane_g5

0xaa7c,	// (0x000b4ae9) grid_highlight_pane_cp10

0x5b8c,	// (0x000afbf9) popup_vitu2_match_list_window_ParamLimits

0x5ba1,	// (0x000afc0e) popup_vitu2_query_window_ParamLimits

0x5ba1,	// (0x000afc0e) popup_vitu2_query_window

0x945e,	// (0x000b34cb) bg_vitu2_candi_button_pane

0xd92f,	// (0x000b799c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd938,	// (0x000b79a5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd941,	// (0x000b79ae) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x65f7,	// (0x000b0664) bg_button_pane_cp015

0x660b,	// (0x000b0678) bg_button_pane_cp016

0x661e,	// (0x000b068b) bg_button_pane_cp017

0xc914,	// (0x000b6981) bg_popup_sub_pane_cp22

0xd962,	// (0x000b79cf) popup_vitu2_query_window_g1

0x6663,	// (0x000b06d0) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x000b9a85) popup_vitu2_query_window_g

0x6682,	// (0x000b06ef) popup_vitu2_query_window_t1_ParamLimits

0x6682,	// (0x000b06ef) popup_vitu2_query_window_t1

0x66b7,	// (0x000b0724) popup_vitu2_query_window_t2_ParamLimits

0x66b7,	// (0x000b0724) popup_vitu2_query_window_t2

0x66c9,	// (0x000b0736) popup_vitu2_query_window_t3_ParamLimits

0x66c9,	// (0x000b0736) popup_vitu2_query_window_t3

0x66f1,	// (0x000b075e) popup_vitu2_query_window_t4_ParamLimits

0x66f1,	// (0x000b075e) popup_vitu2_query_window_t4

0x6712,	// (0x000b077f) popup_vitu2_query_window_t5_ParamLimits

0x6712,	// (0x000b077f) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x000b9a8c) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x000b9a8c) popup_vitu2_query_window_t

0xd7ed,	// (0x000b785a) main_cset_text_pane

0x5ff4,	// (0x000b0061) aid_area_touch_slider_ParamLimits

0x6010,	// (0x000b007d) cset_slider_pane_ParamLimits

0x603a,	// (0x000b00a7) main_cset_slider_pane_g1_ParamLimits

0x604f,	// (0x000b00bc) main_cset_slider_pane_g2_ParamLimits

0xd80e,	// (0x000b787b) main_cset_slider_pane_g3_ParamLimits

0xd80e,	// (0x000b787b) main_cset_slider_pane_g3

0x6064,	// (0x000b00d1) main_cset_slider_pane_g4_ParamLimits

0x6064,	// (0x000b00d1) main_cset_slider_pane_g4

0x6073,	// (0x000b00e0) main_cset_slider_pane_g5_ParamLimits

0x6073,	// (0x000b00e0) main_cset_slider_pane_g5

0x607f,	// (0x000b00ec) main_cset_slider_pane_g6_ParamLimits

0x607f,	// (0x000b00ec) main_cset_slider_pane_g6

0xf972,	// (0x000b99df) main_cset_slider_pane_g_ParamLimits

0xd856,	// (0x000b78c3) main_cset_slider_pane_t1_ParamLimits

0x60f3,	// (0x000b0160) main_cset_slider_pane_t2_ParamLimits

0x610d,	// (0x000b017a) main_cset_slider_pane_t3_ParamLimits

0x6127,	// (0x000b0194) main_cset_slider_pane_t4_ParamLimits

0x6141,	// (0x000b01ae) main_cset_slider_pane_t5_ParamLimits

0x615b,	// (0x000b01c8) main_cset_slider_pane_t6_ParamLimits

0x6170,	// (0x000b01dd) main_cset_slider_pane_t7_ParamLimits

0x619a,	// (0x000b0207) main_cset_slider_pane_t8_ParamLimits

0x619a,	// (0x000b0207) main_cset_slider_pane_t8

0x61c2,	// (0x000b022f) main_cset_slider_pane_t9_ParamLimits

0x61c2,	// (0x000b022f) main_cset_slider_pane_t9

0x61ea,	// (0x000b0257) main_cset_slider_pane_t10_ParamLimits

0x61ea,	// (0x000b0257) main_cset_slider_pane_t10

0x6212,	// (0x000b027f) main_cset_slider_pane_t11_ParamLimits

0x6212,	// (0x000b027f) main_cset_slider_pane_t11

0x623a,	// (0x000b02a7) main_cset_slider_pane_t12_ParamLimits

0x623a,	// (0x000b02a7) main_cset_slider_pane_t12

0x6257,	// (0x000b02c4) main_cset_slider_pane_t13_ParamLimits

0x6257,	// (0x000b02c4) main_cset_slider_pane_t13

0xf997,	// (0x000b9a04) main_cset_slider_pane_t_ParamLimits

0x9428,	// (0x000b3495) bg_popup_sub_pane_cp011

0xd96e,	// (0x000b79db) main_cset_text_pane_g1

0xd976,	// (0x000b79e3) main_cset_text_pane_t1

0xd984,	// (0x000b79f1) main_cset_text_pane_t2

0xd992,	// (0x000b79ff) main_cset_text_pane_t3

0xd9a0,	// (0x000b7a0d) main_cset_text_pane_t4

0xd9ae,	// (0x000b7a1b) main_cset_text_pane_t5

0xd9bc,	// (0x000b7a29) main_cset_text_pane_t6

0xd9ca,	// (0x000b7a37) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x000b9a9b) main_cset_text_pane_t

0x945e,	// (0x000b34cb) main_cam4_burst_pane

0x945e,	// (0x000b34cb) main_cam5_pane

0x5f33,	// (0x000affa0) bg_button_pane_cp019

0x5f3c,	// (0x000affa9) bg_button_pane_cp020

0xd81a,	// (0x000b7887) main_cset_slider_pane_g7_ParamLimits

0xd81a,	// (0x000b7887) main_cset_slider_pane_g7

0xd826,	// (0x000b7893) main_cset_slider_pane_g8_ParamLimits

0xd826,	// (0x000b7893) main_cset_slider_pane_g8

0x6093,	// (0x000b0100) main_cset_slider_pane_g9_ParamLimits

0x6093,	// (0x000b0100) main_cset_slider_pane_g9

0x609f,	// (0x000b010c) main_cset_slider_pane_g10_ParamLimits

0x609f,	// (0x000b010c) main_cset_slider_pane_g10

0x60ab,	// (0x000b0118) main_cset_slider_pane_g11_ParamLimits

0x60ab,	// (0x000b0118) main_cset_slider_pane_g11

0x60b7,	// (0x000b0124) main_cset_slider_pane_g12_ParamLimits

0x60b7,	// (0x000b0124) main_cset_slider_pane_g12

0x60c3,	// (0x000b0130) main_cset_slider_pane_g13_ParamLimits

0x60c3,	// (0x000b0130) main_cset_slider_pane_g13

0x60cf,	// (0x000b013c) main_cset_slider_pane_g14_ParamLimits

0x60cf,	// (0x000b013c) main_cset_slider_pane_g14

0x60db,	// (0x000b0148) main_cset_slider_pane_g15_ParamLimits

0x60db,	// (0x000b0148) main_cset_slider_pane_g15

0xd884,	// (0x000b78f1) main_cset_slider_pane_t14_ParamLimits

0xd884,	// (0x000b78f1) main_cset_slider_pane_t14

0xd8bd,	// (0x000b792a) main_cset_slider_pane_t15_ParamLimits

0xd8bd,	// (0x000b792a) main_cset_slider_pane_t15

0x6789,	// (0x000b07f6) aid_cam4_burst_size_cell_ParamLimits

0x6789,	// (0x000b07f6) aid_cam4_burst_size_cell

0x67a9,	// (0x000b0816) grid_cam4_burst_pane_ParamLimits

0x67a9,	// (0x000b0816) grid_cam4_burst_pane

0x67e1,	// (0x000b084e) linegrid_cam4_burst_pane_ParamLimits

0x67e1,	// (0x000b084e) linegrid_cam4_burst_pane

0xd9d8,	// (0x000b7a45) scroll_pane_cp30_ParamLimits

0xd9d8,	// (0x000b7a45) scroll_pane_cp30

0x6805,	// (0x000b0872) cell_cam4_burst_pane_ParamLimits

0x6805,	// (0x000b0872) cell_cam4_burst_pane

0xd9e4,	// (0x000b7a51) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9e4,	// (0x000b7a51) linegrid_cam4_burst_pane_g1

0x6852,	// (0x000b08bf) linegrid_cam4_burst_pane_g2_ParamLimits

0x6852,	// (0x000b08bf) linegrid_cam4_burst_pane_g2

0xd9f1,	// (0x000b7a5e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9f1,	// (0x000b7a5e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x000b9aaa) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x000b9aaa) linegrid_cam4_burst_pane_g

0x6863,	// (0x000b08d0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6863,	// (0x000b08d0) linegrid_cam4_burst_pane_g3_copy1

0xd9fe,	// (0x000b7a6b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9fe,	// (0x000b7a6b) linegrid_cam4_burst_pane_g4

0x687d,	// (0x000b08ea) linegrid_cam4_burst_pane_g5_ParamLimits

0x687d,	// (0x000b08ea) linegrid_cam4_burst_pane_g5

0x688e,	// (0x000b08fb) linegrid_cam4_burst_pane_g6_ParamLimits

0x688e,	// (0x000b08fb) linegrid_cam4_burst_pane_g6

0xda0b,	// (0x000b7a78) linegrid_cam4_burst_pane_g7_ParamLimits

0xda0b,	// (0x000b7a78) linegrid_cam4_burst_pane_g7

0x68a5,	// (0x000b0912) cell_cam4_burst_pane_g1

0xda24,	// (0x000b7a91) main_cam5_pane_t1_ParamLimits

0xda24,	// (0x000b7a91) main_cam5_pane_t1

0xda36,	// (0x000b7aa3) main_cam5_pane_t2_ParamLimits

0xda36,	// (0x000b7aa3) main_cam5_pane_t2

0xda48,	// (0x000b7ab5) main_cam5_pane_t3_ParamLimits

0xda48,	// (0x000b7ab5) main_cam5_pane_t3

0xda5a,	// (0x000b7ac7) main_cam5_pane_t4_ParamLimits

0xda5a,	// (0x000b7ac7) main_cam5_pane_t4

0xda72,	// (0x000b7adf) main_cam5_pane_t5_ParamLimits

0xda72,	// (0x000b7adf) main_cam5_pane_t5

0xda86,	// (0x000b7af3) main_cam5_pane_t6_ParamLimits

0xda86,	// (0x000b7af3) main_cam5_pane_t6

0xda9a,	// (0x000b7b07) main_cam5_pane_t7_ParamLimits

0xda9a,	// (0x000b7b07) main_cam5_pane_t7

0xdaac,	// (0x000b7b19) main_cam5_pane_t8_ParamLimits

0xdaac,	// (0x000b7b19) main_cam5_pane_t8

0xdac8,	// (0x000b7b35) main_cam5_pane_t9_ParamLimits

0xdac8,	// (0x000b7b35) main_cam5_pane_t9

0xdada,	// (0x000b7b47) main_cam5_pane_t10_ParamLimits

0xdada,	// (0x000b7b47) main_cam5_pane_t10

0xdaec,	// (0x000b7b59) main_cam5_pane_t11_ParamLimits

0xdaec,	// (0x000b7b59) main_cam5_pane_t11

0xdafe,	// (0x000b7b6b) main_cam5_pane_t12_ParamLimits

0xdafe,	// (0x000b7b6b) main_cam5_pane_t12

0xdb13,	// (0x000b7b80) main_cam5_pane_t13_ParamLimits

0xdb13,	// (0x000b7b80) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x000b9ab6) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x000b9ab6) main_cam5_pane_t

0x0511,	// (0x000aa57e) popup_scut_keymap_window_ParamLimits

0x0511,	// (0x000aa57e) popup_scut_keymap_window

0x68b8,	// (0x000b0925) aid_size_cell_brow_shortcut

0xaa7c,	// (0x000b4ae9) bg_popup_window_pane_cp010

0x68c4,	// (0x000b0931) grid_scut_pane

0x68d0,	// (0x000b093d) cell_scut_pane_ParamLimits

0x68d0,	// (0x000b093d) cell_scut_pane

0x68e7,	// (0x000b0954) cell_scut_pane_g1

0xdb30,	// (0x000b7b9d) cell_scut_pane_t1

0xdb3f,	// (0x000b7bac) cell_scut_pane_t2

0x68f0,	// (0x000b095d) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x000b9ad1) cell_scut_pane_t

0x456d,	// (0x000ae5da) main_mup3_pane_g8_ParamLimits

0x456d,	// (0x000ae5da) main_mup3_pane_g8

0x5a85,	// (0x000afaf2) area_vitu2_query_pane_ParamLimits

0x5a85,	// (0x000afaf2) area_vitu2_query_pane

0x6631,	// (0x000b069e) input_focus_pane_cp08

0xdb4e,	// (0x000b7bbb) area_vitu2_query_pane_g1

0x68fe,	// (0x000b096b) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x000b9ad8) area_vitu2_query_pane_g

0x690f,	// (0x000b097c) area_vitu2_query_pane_t1_ParamLimits

0x690f,	// (0x000b097c) area_vitu2_query_pane_t1

0x6923,	// (0x000b0990) area_vitu2_query_pane_t2_ParamLimits

0x6923,	// (0x000b0990) area_vitu2_query_pane_t2

0x6937,	// (0x000b09a4) area_vitu2_query_pane_t3_ParamLimits

0x6937,	// (0x000b09a4) area_vitu2_query_pane_t3

0xa4f2,	// (0x000b455f) area_vitu2_query_pane_t4_ParamLimits

0xa4f2,	// (0x000b455f) area_vitu2_query_pane_t4

0xa51a,	// (0x000b4587) area_vitu2_query_pane_t5_ParamLimits

0xa51a,	// (0x000b4587) area_vitu2_query_pane_t5

0xa542,	// (0x000b45af) area_vitu2_query_pane_t6_ParamLimits

0xa542,	// (0x000b45af) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x000b9add) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x000b9add) area_vitu2_query_pane_t

0x695f,	// (0x000b09cc) bg_button_pane_cp018

0x696d,	// (0x000b09da) bg_button_pane_cp021

0x6979,	// (0x000b09e6) bg_button_pane_cp022

0x698a,	// (0x000b09f7) input_focus_pane_cp09

0xb2fe,	// (0x000b536b) aid_size_touch_mv_arrow_left

0xb329,	// (0x000b5396) aid_size_touch_mv_arrow_right

0xd832,	// (0x000b789f) main_cset_slider_pane_g16_ParamLimits

0xd832,	// (0x000b789f) main_cset_slider_pane_g16

0xd83e,	// (0x000b78ab) main_cset_slider_pane_g17_ParamLimits

0xd83e,	// (0x000b78ab) main_cset_slider_pane_g17

0x68a5,	// (0x000b0912) cell_cam4_burst_pane_g1_ParamLimits

0x9428,	// (0x000b3495) compa_mode_pane

0x62f1,	// (0x000b035e) popup_vtel_slider_window_g3_ParamLimits

0x62f1,	// (0x000b035e) popup_vtel_slider_window_g3

0x6308,	// (0x000b0375) popup_vtel_slider_window_g4_ParamLimits

0x6308,	// (0x000b0375) popup_vtel_slider_window_g4

0x631f,	// (0x000b038c) popup_vtel_slider_window_t1_ParamLimits

0x631f,	// (0x000b038c) popup_vtel_slider_window_t1

0x945e,	// (0x000b34cb) main_cl_pane

0x98ab,	// (0x000b3918) popup_imed_adjust2_window_ParamLimits

0xc914,	// (0x000b6981) bg_tb_trans_pane_cp05_ParamLimits

0xd221,	// (0x000b728e) popup_imed_adjust2_window_g1_ParamLimits

0xd230,	// (0x000b729d) popup_imed_adjust2_window_g2_ParamLimits

0xd230,	// (0x000b729d) popup_imed_adjust2_window_g2

0xd23c,	// (0x000b72a9) popup_imed_adjust2_window_g3_ParamLimits

0xd23c,	// (0x000b72a9) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x000b9844) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x000b9844) popup_imed_adjust2_window_g

0xd248,	// (0x000b72b5) popup_imed_adjust2_window_t1_ParamLimits

0xd260,	// (0x000b72cd) slider_imed_adjust_pane_ParamLimits

0xd274,	// (0x000b72e1) slider_imed_adjust_pane_g1_ParamLimits

0xd284,	// (0x000b72f1) slider_imed_adjust_pane_g2_ParamLimits

0xd294,	// (0x000b7301) slider_imed_adjust_pane_g3_ParamLimits

0xd2a5,	// (0x000b7312) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x000b984b) slider_imed_adjust_pane_g_ParamLimits

0x580e,	// (0x000af87b) aid_touch_area_cam4_ParamLimits

0x580e,	// (0x000af87b) aid_touch_area_cam4

0x9c91,	// (0x000b3cfe) battery_pane_cp01

0x58dd,	// (0x000af94a) main_camera4_pane_g6_ParamLimits

0x58dd,	// (0x000af94a) main_camera4_pane_g6

0x5907,	// (0x000af974) main_camera4_pane_t2_ParamLimits

0x5907,	// (0x000af974) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x000b9952) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x000b9952) main_camera4_pane_t

0x593c,	// (0x000af9a9) aid_touch_area_vid4_ParamLimits

0x593c,	// (0x000af9a9) aid_touch_area_vid4

0x5990,	// (0x000af9fd) main_video4_pane_g5_ParamLimits

0x5990,	// (0x000af9fd) main_video4_pane_g5

0x59b5,	// (0x000afa22) vid4_progress_pane_ParamLimits

0x59b5,	// (0x000afa22) vid4_progress_pane

0xd84a,	// (0x000b78b7) main_cset_slider_pane_g18_ParamLimits

0xd84a,	// (0x000b78b7) main_cset_slider_pane_g18

0xda18,	// (0x000b7a85) cell_cam4_burst_pane_g2_ParamLimits

0xda18,	// (0x000b7a85) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x000b9ab1) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x000b9ab1) cell_cam4_burst_pane_g

0xa337,	// (0x000b43a4) bg_cl_pane_ParamLimits

0xa337,	// (0x000b43a4) bg_cl_pane

0x699b,	// (0x000b0a08) cl_header_pane_ParamLimits

0x699b,	// (0x000b0a08) cl_header_pane

0x69af,	// (0x000b0a1c) cl_listscroll_pane_ParamLimits

0x69af,	// (0x000b0a1c) cl_listscroll_pane

0xdb5a,	// (0x000b7bc7) bg_cl_pane_g1

0xdb62,	// (0x000b7bcf) bg_cl_pane_g2

0xdb6a,	// (0x000b7bd7) bg_cl_pane_g3

0xdb72,	// (0x000b7bdf) bg_cl_pane_g4

0xdb7a,	// (0x000b7be7) bg_cl_pane_g5

0xdb82,	// (0x000b7bef) bg_cl_pane_g6

0xdb8a,	// (0x000b7bf7) bg_cl_pane_g7

0xdb92,	// (0x000b7bff) bg_cl_pane_g8

0xdb9a,	// (0x000b7c07) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x000b9aec) bg_cl_pane_g

0x69bf,	// (0x000b0a2c) aid_height_cl_leading_ParamLimits

0x69bf,	// (0x000b0a2c) aid_height_cl_leading

0x69cb,	// (0x000b0a38) aid_height_cl_text_ParamLimits

0x69cb,	// (0x000b0a38) aid_height_cl_text

0xa453,	// (0x000b44c0) bg_cl_header_pane_ParamLimits

0xa453,	// (0x000b44c0) bg_cl_header_pane

0x69ea,	// (0x000b0a57) cl_header_pane_g1_ParamLimits

0x69ea,	// (0x000b0a57) cl_header_pane_g1

0x6a00,	// (0x000b0a6d) cl_header_pane_t1_ParamLimits

0x6a00,	// (0x000b0a6d) cl_header_pane_t1

0xdba2,	// (0x000b7c0f) cl_list_pane

0xd805,	// (0x000b7872) hc_scroll_pane_cp01

0xacb5,	// (0x000b4d22) bg_cl_header_pane_g1

0xd6eb,	// (0x000b7758) bg_cl_header_pane_g2

0xacd5,	// (0x000b4d42) bg_cl_header_pane_g3

0xd6fb,	// (0x000b7768) bg_cl_header_pane_g4

0xd6f3,	// (0x000b7760) bg_cl_header_pane_g5

0xd927,	// (0x000b7994) bg_cl_header_pane_g6

0xd713,	// (0x000b7780) bg_cl_header_pane_g7

0xd71b,	// (0x000b7788) bg_cl_header_pane_g8

0xd70b,	// (0x000b7778) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x000b9aff) bg_cl_header_pane_g

0x6a19,	// (0x000b0a86) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6a19,	// (0x000b0a86) hc_cl_list_double_graphic_heading_pane

0x6a2a,	// (0x000b0a97) hc_cl_list_single_graphic_pane_ParamLimits

0x6a2a,	// (0x000b0a97) hc_cl_list_single_graphic_pane

0x6a43,	// (0x000b0ab0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6a43,	// (0x000b0ab0) hc_cl_list_single_graphic_pane_g1

0x6a4f,	// (0x000b0abc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6a4f,	// (0x000b0abc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x000b9b12) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x000b9b12) hc_cl_list_single_graphic_pane_g

0x6a63,	// (0x000b0ad0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6a63,	// (0x000b0ad0) hc_cl_list_single_graphic_pane_t1

0x6a43,	// (0x000b0ab0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6a43,	// (0x000b0ab0) hc_cl_list_double_graphic_heading_pane_g1

0x6a78,	// (0x000b0ae5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6a78,	// (0x000b0ae5) hc_cl_list_double_graphic_heading_pane_g2

0x6a8c,	// (0x000b0af9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6a8c,	// (0x000b0af9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x000b9b17) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x000b9b17) hc_cl_list_double_graphic_heading_pane_g

0x6aa0,	// (0x000b0b0d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6aa0,	// (0x000b0b0d) hc_cl_list_double_graphic_heading_pane_t1

0x6ab5,	// (0x000b0b22) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ab5,	// (0x000b0b22) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x000b9b1e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x000b9b1e) hc_cl_list_double_graphic_heading_pane_t

0x9e1b,	// (0x000b3e88) vid4_progress_pane_g1

0x9e2b,	// (0x000b3e98) vid4_progress_pane_g2

0x6aca,	// (0x000b0b37) vid4_progress_pane_g3

0x9e3b,	// (0x000b3ea8) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x000b9b23) vid4_progress_pane_g

0x6adc,	// (0x000b0b49) vid4_progress_pane_t1

0x9e53,	// (0x000b3ec0) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x000b9b2e) vid4_progress_pane_t

0x6af2,	// (0x000b0b5f) wait_bar_pane_cp07

0xcb0f,	// (0x000b6b7c) blid_firmament_pane_ParamLimits

0xcb52,	// (0x000b6bbf) popup_blid_sat_info2_window_g1

0xcb76,	// (0x000b6be3) popup_blid_sat_info2_window_t3

0xcb84,	// (0x000b6bf1) popup_blid_sat_info2_window_t4

0xcb92,	// (0x000b6bff) popup_blid_sat_info2_window_t5

0xcba0,	// (0x000b6c0d) popup_blid_sat_info2_window_t6

0xcbb0,	// (0x000b6c1d) popup_blid_sat_info2_window_t7

0xcbbe,	// (0x000b6c2b) popup_blid_sat_info2_window_t8

0xcbcc,	// (0x000b6c39) popup_blid_sat_info2_window_t9

0xcbda,	// (0x000b6c47) popup_blid_sat_info2_window_t10

0xcc9c,	// (0x000b6d09) aid_firma_cardinal_ParamLimits

0xccb0,	// (0x000b6d1d) blid_firmament_pane_t1_ParamLimits

0xccc7,	// (0x000b6d34) blid_firmament_pane_t2_ParamLimits

0xccde,	// (0x000b6d4b) blid_firmament_pane_t3_ParamLimits

0xccf5,	// (0x000b6d62) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x000b9738) blid_firmament_pane_t_ParamLimits

0xcd0c,	// (0x000b6d79) blid_sat_info_pane_ParamLimits

0x9450,	// (0x000b34bd) main_cam_set_pane_ParamLimits

0x4e28,	// (0x000aee95) aid_size_cell_colour_35_ParamLimits

0x4e48,	// (0x000aeeb5) aid_size_cell_colour_112_ParamLimits

0x4e68,	// (0x000aeed5) aid_size_cell_effect_ParamLimits

0xc914,	// (0x000b6981) bg_tb_trans_pane_cp02_ParamLimits

0xaf1d,	// (0x000b4f8a) heading_imed_pane_ParamLimits

0x4e88,	// (0x000aeef5) listscroll_imed_pane_ParamLimits

0xbf00,	// (0x000b5f6d) popup_call2_audio_first_window_g5_ParamLimits

0xbf00,	// (0x000b5f6d) popup_call2_audio_first_window_g5

0x5426,	// (0x000af493) aid_size_touch_image3_arrow_left_ParamLimits

0x5426,	// (0x000af493) aid_size_touch_image3_arrow_left

0x5452,	// (0x000af4bf) aid_size_touch_image3_arrow_right_ParamLimits

0x5452,	// (0x000af4bf) aid_size_touch_image3_arrow_right

0x9e68,	// (0x000b3ed5) vid4_progress_pane_t3

0x519d,	// (0x000af20a) main_hwr_training_symbol_option_pane_ParamLimits

0x519d,	// (0x000af20a) main_hwr_training_symbol_option_pane

0xd52b,	// (0x000b7598) popup_hwr_training_preview_window_ParamLimits

0xd52b,	// (0x000b7598) popup_hwr_training_preview_window

0x51bd,	// (0x000af22a) hwr_training_navi_pane_g5_ParamLimits

0x51bd,	// (0x000af22a) hwr_training_navi_pane_g5

0xd6d9,	// (0x000b7746) popup_char_count_window

0x9450,	// (0x000b34bd) bg_popup_sub_pane_cp20_ParamLimits

0x643b,	// (0x000b04a8) list_vitu2_match_list_pane_ParamLimits

0x644a,	// (0x000b04b7) vitu2_page_scroll_pane_ParamLimits

0x644a,	// (0x000b04b7) vitu2_page_scroll_pane

0xdbab,	// (0x000b7c18) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbab,	// (0x000b7c18) list_single_hwr_training_symbol_option_pane

0xdbbe,	// (0x000b7c2b) list_single_hwr_training_symbol_option_pane_g1

0xdbc6,	// (0x000b7c33) list_single_hwr_training_symbol_option_pane_t1

0xdbd4,	// (0x000b7c41) bg_button_pane_cp023

0xdbdd,	// (0x000b7c4a) bg_button_pane_cp024

0x6b3b,	// (0x000b0ba8) vitu2_page_scroll_pane_g1

0x6b43,	// (0x000b0bb0) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x000b9b35) vitu2_page_scroll_pane_g

0x6b4b,	// (0x000b0bb8) vitu2_page_scroll_pane_t1

0xa91d,	// (0x000b498a) popup_char_count_window_g1

0xdc10,	// (0x000b7c7d) popup_char_count_window_g2

0xd321,	// (0x000b738e) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x000b9b3a) popup_char_count_window_g

0xdc19,	// (0x000b7c86) popup_char_count_window_t1

0x945e,	// (0x000b34cb) main_vded2_pane

0xd20d,	// (0x000b727a) aid_size_cell_imed_line

0xd217,	// (0x000b7284) grid_imed_line_width_pane

0x9d4f,	// (0x000b3dbc) vid4_indicators_pane_g4

0xdc27,	// (0x000b7c94) cell_imed_line_width_pane_ParamLimits

0xdc27,	// (0x000b7c94) cell_imed_line_width_pane

0xdc3b,	// (0x000b7ca8) cell_imed_line_width_pane_g1

0xd336,	// (0x000b73a3) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x000b9b41) cell_imed_line_width_pane_g

0x6b5a,	// (0x000b0bc7) main_vded2_pane_g1_ParamLimits

0x6b5a,	// (0x000b0bc7) main_vded2_pane_g1

0x6b70,	// (0x000b0bdd) main_vded2_pane_g2_ParamLimits

0x6b70,	// (0x000b0bdd) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x000b9b46) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x000b9b46) main_vded2_pane_g

0x6b82,	// (0x000b0bef) vded2_slider_pane_ParamLimits

0x6b82,	// (0x000b0bef) vded2_slider_pane

0x6b92,	// (0x000b0bff) aid_size_touch_vded2_end

0x6b9c,	// (0x000b0c09) aid_size_touch_vded2_playhead

0xdc44,	// (0x000b7cb1) aid_size_touch_vded2_start

0xdc4c,	// (0x000b7cb9) vded2_slider_bg_pane

0xdc55,	// (0x000b7cc2) vded2_slider_pane_g1

0xdc5e,	// (0x000b7ccb) vded2_slider_pane_g2

0x6ba6,	// (0x000b0c13) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x000b9b4b) vded2_slider_pane_g

0xdc66,	// (0x000b7cd3) vded2_slider_bg_pane_g1

0xdc6f,	// (0x000b7cdc) vded2_slider_bg_pane_g2

0xdc78,	// (0x000b7ce5) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x000b9b52) vded2_slider_bg_pane_g

0x2b92,	// (0x000acbff) aid_postcard_touch_down_pane_ParamLimits

0x2b92,	// (0x000acbff) aid_postcard_touch_down_pane

0x2ba8,	// (0x000acc15) aid_postcard_touch_up_pane_ParamLimits

0x2ba8,	// (0x000acc15) aid_postcard_touch_up_pane

0x945e,	// (0x000b34cb) main_blid2_pane

0x9891,	// (0x000b38fe) popup_blid2_search_window

0x9428,	// (0x000b3495) blid2_gps_pane

0x9428,	// (0x000b3495) blid2_navig_pane

0x9428,	// (0x000b3495) blid2_search_pane

0x9428,	// (0x000b3495) blid2_tripm_pane

0x6bb1,	// (0x000b0c1e) blid2_search_pane_g1_ParamLimits

0x6bb1,	// (0x000b0c1e) blid2_search_pane_g1

0x6bc9,	// (0x000b0c36) blid2_search_pane_t1_ParamLimits

0x6bc9,	// (0x000b0c36) blid2_search_pane_t1

0x6bdb,	// (0x000b0c48) aid_size_cell_blid2_gps_ParamLimits

0x6bdb,	// (0x000b0c48) aid_size_cell_blid2_gps

0x6bf3,	// (0x000b0c60) blid2_gps_pane_g1_ParamLimits

0x6bf3,	// (0x000b0c60) blid2_gps_pane_g1

0x6c07,	// (0x000b0c74) grid_blid2_satellite_pane_ParamLimits

0x6c07,	// (0x000b0c74) grid_blid2_satellite_pane

0x6c21,	// (0x000b0c8e) blid2_navig_pane_g1_ParamLimits

0x6c21,	// (0x000b0c8e) blid2_navig_pane_g1

0x6c2d,	// (0x000b0c9a) blid2_navig_pane_t1_ParamLimits

0x6c2d,	// (0x000b0c9a) blid2_navig_pane_t1

0x6c48,	// (0x000b0cb5) blid2_navig_pane_t2_ParamLimits

0x6c48,	// (0x000b0cb5) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x000b9b59) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x000b9b59) blid2_navig_pane_t

0x6c63,	// (0x000b0cd0) blid2_navig_ring_pane_ParamLimits

0x6c63,	// (0x000b0cd0) blid2_navig_ring_pane

0x6c7c,	// (0x000b0ce9) blid2_speed_pane_ParamLimits

0x6c7c,	// (0x000b0ce9) blid2_speed_pane

0x6c88,	// (0x000b0cf5) blid2_tripm_pane_g1_ParamLimits

0x6c88,	// (0x000b0cf5) blid2_tripm_pane_g1

0x6ca3,	// (0x000b0d10) blid2_tripm_pane_g2_ParamLimits

0x6ca3,	// (0x000b0d10) blid2_tripm_pane_g2

0x6cb7,	// (0x000b0d24) blid2_tripm_pane_g3_ParamLimits

0x6cb7,	// (0x000b0d24) blid2_tripm_pane_g3

0x6ccb,	// (0x000b0d38) blid2_tripm_pane_g4_ParamLimits

0x6ccb,	// (0x000b0d38) blid2_tripm_pane_g4

0x6cdf,	// (0x000b0d4c) blid2_tripm_pane_g5_ParamLimits

0x6cdf,	// (0x000b0d4c) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x000b9b5e) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x000b9b5e) blid2_tripm_pane_g

0x6d05,	// (0x000b0d72) blid2_tripm_pane_t1_ParamLimits

0x6d05,	// (0x000b0d72) blid2_tripm_pane_t1

0x6d20,	// (0x000b0d8d) blid2_tripm_pane_t2_ParamLimits

0x6d20,	// (0x000b0d8d) blid2_tripm_pane_t2

0x6d39,	// (0x000b0da6) blid2_tripm_pane_t3_ParamLimits

0x6d39,	// (0x000b0da6) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x000b9b6b) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x000b9b6b) blid2_tripm_pane_t

0x6d80,	// (0x000b0ded) cell_blid2_satellite_pane_ParamLimits

0x6d80,	// (0x000b0ded) cell_blid2_satellite_pane

0x6d9e,	// (0x000b0e0b) cell_blid2_satellite_pane_g1

0xdc81,	// (0x000b7cee) cell_blid2_satellite_pane_t1

0xcd1c,	// (0x000b6d89) blid2_speed_pane_g1

0xdc8f,	// (0x000b7cfc) blid2_speed_pane_t1

0xdc9d,	// (0x000b7d0a) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x000b9b74) blid2_speed_pane_t

0xcd1c,	// (0x000b6d89) blid2_navig_ring_pane_g1

0x6da7,	// (0x000b0e14) blid2_navig_ring_pane_g2

0x6daf,	// (0x000b0e1c) blid2_navig_ring_pane_g3

0x6db7,	// (0x000b0e24) blid2_navig_ring_pane_g4

0x6dbf,	// (0x000b0e2c) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x000b9b79) blid2_navig_ring_pane_g

0x9428,	// (0x000b3495) bg_popup_window_pane_cp011

0xdcab,	// (0x000b7d18) popup_blid2_search_window_g1

0xdcb3,	// (0x000b7d20) popup_blid2_search_window_t1

0xdcc1,	// (0x000b7d2e) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x000b9b84) popup_blid2_search_window_t

0xabc4,	// (0x000b4c31) main_browser_pane_g1

0xa337,	// (0x000b43a4) main_browser_pane_ParamLimits

0x9450,	// (0x000b34bd) bg_button_pane_cp011_ParamLimits

0x5ccc,	// (0x000afd39) cell_vitu2_function_pane_g1_ParamLimits

0xc914,	// (0x000b6981) bg_popup_sub_pane_cp22_ParamLimits

0x6631,	// (0x000b069e) input_focus_pane_cp08_ParamLimits

0x6648,	// (0x000b06b5) popup_vitu2_query_button_pane_ParamLimits

0x6648,	// (0x000b06b5) popup_vitu2_query_button_pane

0x6659,	// (0x000b06c6) popup_vitu2_query_input_button_pane

0xd962,	// (0x000b79cf) popup_vitu2_query_window_g1_ParamLimits

0x6663,	// (0x000b06d0) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x000b9a85) popup_vitu2_query_window_g_ParamLimits

0x9428,	// (0x000b3495) bg_button_pane_cp026

0x6dc7,	// (0x000b0e34) popup_vitu2_query_input_button_pane_g1

0x9428,	// (0x000b3495) bg_button_pane_cp025

0xdccf,	// (0x000b7d3c) popup_vitu2_query_button_pane_t1

0x423b,	// (0x000ae2a8) main_mp3_pane_t6

0x4249,	// (0x000ae2b6) popup_slider_window_cp01

0x9cbb,	// (0x000b3d28) cam4_battery_pane

0x9d0e,	// (0x000b3d7b) cam4_battery_pane_cp02

0x9e13,	// (0x000b3e80) cam4_battery_pane_cp01

0x9e13,	// (0x000b3e80) cam4_battery_pane_cp03

0xd636,	// (0x000b76a3) cam4_battery_pane_g1

0xcd1c,	// (0x000b6d89) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x000b9b89) cam4_battery_pane_g

0xcbe8,	// (0x000b6c55) popup_blid_sat_info2_window_t11

0xb2fe,	// (0x000b536b) aid_size_touch_mv_arrow_left_ParamLimits

0xb329,	// (0x000b5396) aid_size_touch_mv_arrow_right_ParamLimits

0xb3a7,	// (0x000b5414) navi_pane_g1_ParamLimits

0xb3b3,	// (0x000b5420) navi_pane_g2_ParamLimits

0xb3e1,	// (0x000b544e) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000b9437) navi_pane_g_ParamLimits

0x2643,	// (0x000ac6b0) navi_pane_mv_t1_ParamLimits

0x4e94,	// (0x000aef01) grid_imed_effect_pane_ParamLimits

0x1459,	// (0x000ab4c6) aid_placing_vt_slider_lsc

0xab13,	// (0x000b4b80) aid_placing_vt_slider_prt

0xa453,	// (0x000b44c0) bg_tb_trans_pane_cp01_ParamLimits

0xce81,	// (0x000b6eee) popup_image_details_window_g1_ParamLimits

0xce94,	// (0x000b6f01) popup_image_details_window_g2_ParamLimits

0xcea9,	// (0x000b6f16) popup_image_details_window_g3_ParamLimits

0xcea9,	// (0x000b6f16) popup_image_details_window_g3

0xf710,	// (0x000b977d) popup_image_details_window_g_ParamLimits

0xcebd,	// (0x000b6f2a) popup_image_details_window_t1_ParamLimits

0xcecf,	// (0x000b6f3c) popup_image_details_window_t2_ParamLimits

0xcee8,	// (0x000b6f55) popup_image_details_window_t3_ParamLimits

0xcefc,	// (0x000b6f69) popup_image_details_window_t4_ParamLimits

0xcf17,	// (0x000b6f84) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x000b9784) popup_image_details_window_t_ParamLimits

0x69d7,	// (0x000b0a44) cl_header_name_pane_ParamLimits

0x69d7,	// (0x000b0a44) cl_header_name_pane

0x6dcf,	// (0x000b0e3c) cl_header_name_pane_t1_ParamLimits

0x6dcf,	// (0x000b0e3c) cl_header_name_pane_t1

0x6df0,	// (0x000b0e5d) cl_header_name_pane_t2_ParamLimits

0x6df0,	// (0x000b0e5d) cl_header_name_pane_t2

0x6e32,	// (0x000b0e9f) cl_header_name_pane_t3_ParamLimits

0x6e32,	// (0x000b0e9f) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x000b9b8e) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x000b9b8e) cl_header_name_pane_t

0xb470,	// (0x000b54dd) navi_pane_mv_g2_ParamLimits

0xd6b3,	// (0x000b7720) field_vitu2_entry_pane_g1_ParamLimits

0xd6bf,	// (0x000b772c) field_vitu2_entry_pane_g2_ParamLimits

0xd6cb,	// (0x000b7738) field_vitu2_entry_pane_g3_ParamLimits

0xd6cb,	// (0x000b7738) field_vitu2_entry_pane_g3

0xf917,	// (0x000b9984) field_vitu2_entry_pane_g_ParamLimits

0x9d82,	// (0x000b3def) cell_vitu2_itu_pane_g1_ParamLimits

0x5c60,	// (0x000afccd) cell_vitu2_itu_pane_g2_ParamLimits

0x5c60,	// (0x000afccd) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x000b9990) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x000b9990) cell_vitu2_itu_pane_g

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp05_ParamLimits

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp05

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp03

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp04

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp10_ParamLimits

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp10

0x6979,	// (0x000b09e6) bg_vkb2_func_pane_cp08

0x695f,	// (0x000b09cc) bg_vkb2_func_pane_cp06

0x696d,	// (0x000b09da) bg_vkb2_func_pane_cp07

0xdbe6,	// (0x000b7c53) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe6,	// (0x000b7c53) bg_vkb2_func_pane_cp11

0xdbfb,	// (0x000b7c68) bg_vkb2_func_pane_cp12_ParamLimits

0xdbfb,	// (0x000b7c68) bg_vkb2_func_pane_cp12

0x9428,	// (0x000b3495) bg_vkb2_func_pane_cp09

0xd6eb,	// (0x000b7758) bg_vkb2_func_pane_g1

0xacd5,	// (0x000b4d42) bg_vkb2_func_pane_g2

0xd6f3,	// (0x000b7760) bg_vkb2_func_pane_g3

0xd6fb,	// (0x000b7768) bg_vkb2_func_pane_g4

0xd927,	// (0x000b7994) bg_vkb2_func_pane_g5

0xd713,	// (0x000b7780) bg_vkb2_func_pane_g6

0xd71b,	// (0x000b7788) bg_vkb2_func_pane_g7

0xd70b,	// (0x000b7778) bg_vkb2_func_pane_g8

0xacb5,	// (0x000b4d22) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x000b9b95) bg_vkb2_func_pane_g

0x6cf3,	// (0x000b0d60) blid2_tripm_pane_g6_ParamLimits

0x6cf3,	// (0x000b0d60) blid2_tripm_pane_g6

0xd5e9,	// (0x000b7656) mp4_progress_pane_g1

0x6d6c,	// (0x000b0dd9) blid2_tripm_values_pane_ParamLimits

0x6d6c,	// (0x000b0dd9) blid2_tripm_values_pane

0x6e63,	// (0x000b0ed0) blid2_tripm_values_pane_t1

0x6e71,	// (0x000b0ede) blid2_tripm_values_pane_t2

0x6e7f,	// (0x000b0eec) blid2_tripm_values_pane_t3

0x6e8d,	// (0x000b0efa) blid2_tripm_values_pane_t4

0x6e9b,	// (0x000b0f08) blid2_tripm_values_pane_t5

0x6ea9,	// (0x000b0f16) blid2_tripm_values_pane_t6

0x6eb7,	// (0x000b0f24) blid2_tripm_values_pane_t7

0x6ec5,	// (0x000b0f32) blid2_tripm_values_pane_t8

0x6ed3,	// (0x000b0f40) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x000b9ba8) blid2_tripm_values_pane_t

0x149b,	// (0x000ab508) call_video_pane_t1_ParamLimits

0x14b9,	// (0x000ab526) call_video_pane_t2_ParamLimits

0xf253,	// (0x000b92c0) call_video_pane_t_ParamLimits

0x2b10,	// (0x000acb7d) msg_header_pane_g1_ParamLimits

0xb64a,	// (0x000b56b7) msg_header_pane_g2_ParamLimits

0xb64a,	// (0x000b56b7) msg_header_pane_g2

0x0001,

0xf46d,	// (0x000b94da) msg_header_pane_g_ParamLimits

0xf46d,	// (0x000b94da) msg_header_pane_g

0xa337,	// (0x000b43a4) main_clock2_pane_ParamLimits

0x4b95,	// (0x000aec02) grid_clock2_toolbar_pane_ParamLimits

0x4b95,	// (0x000aec02) grid_clock2_toolbar_pane

0x4b95,	// (0x000aec02) listscroll_clock2_pane_ParamLimits

0x4b95,	// (0x000aec02) listscroll_clock2_pane

0x4c79,	// (0x000aece6) main_clock2_pane_t3_ParamLimits

0x4c79,	// (0x000aece6) main_clock2_pane_t3

0x4c9d,	// (0x000aed0a) main_clock2_pane_t4_ParamLimits

0x4c9d,	// (0x000aed0a) main_clock2_pane_t4

0xdcdd,	// (0x000b7d4a) cell_clock2_toolbar_pane

0xdce5,	// (0x000b7d52) cell_clock2_toolbar_pane_cp01

0xdce5,	// (0x000b7d52) cell_clock2_toolbar_pane_cp02

0xdced,	// (0x000b7d5a) cell_clock2_toolbar_pane_cp03

0xdcf5,	// (0x000b7d62) list_clock2_pane

0xb283,	// (0x000b52f0) scroll_pane_cp10

0xdcfd,	// (0x000b7d6a) list_single_clock2_pane_ParamLimits

0xdcfd,	// (0x000b7d6a) list_single_clock2_pane

0xaa7c,	// (0x000b4ae9) list_highlight_pane_cp08

0xdd0a,	// (0x000b7d77) list_single_clock2_pane_t1

0xdd18,	// (0x000b7d85) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x000b9bbb) list_single_clock2_pane_t

0x9428,	// (0x000b3495) bg_button_pane_cp10

0xdd26,	// (0x000b7d93) cell_clock2_toolbar_pane_g1

0x2b1e,	// (0x000acb8b) aid_main_viewer_pane_g1_ParamLimits

0x2b1e,	// (0x000acb8b) aid_main_viewer_pane_g1

0x2b2c,	// (0x000acb99) aid_main_viewer_pane_g2_ParamLimits

0x2b2c,	// (0x000acb99) aid_main_viewer_pane_g2

0x2b3a,	// (0x000acba7) aid_main_viewer_pane_g3_ParamLimits

0x2b3a,	// (0x000acba7) aid_main_viewer_pane_g3

0x2b49,	// (0x000acbb6) aid_main_viewer_pane_g4_ParamLimits

0x2b49,	// (0x000acbb6) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x000b94eb) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000b94eb) aid_main_viewer_pane_g

0x3451,	// (0x000ad4be) main_calc_pane_ParamLimits

0x3477,	// (0x000ad4e4) main_dialer2_pane_ParamLimits

0x945e,	// (0x000b34cb) main_cam6_pane

0x945e,	// (0x000b34cb) main_vid6_pane

0x4ba1,	// (0x000aec0e) listscroll_gen_pane_cp06_ParamLimits

0x4ba1,	// (0x000aec0e) listscroll_gen_pane_cp06

0x4cc0,	// (0x000aed2d) main_clock2_pane_t5_ParamLimits

0x4cc0,	// (0x000aed2d) main_clock2_pane_t5

0x4d1e,	// (0x000aed8b) aid_call2_pane_cp10_ParamLimits

0x4d30,	// (0x000aed9d) aid_call_pane_cp10_ParamLimits

0xb2f2,	// (0x000b535f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2f2,	// (0x000b535f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d42,	// (0x000aedaf) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d42,	// (0x000aedaf) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2f2,	// (0x000b535f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x000b9839) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d58,	// (0x000aedc5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x53d3,	// (0x000af440) cell_dialer2_keypad_pane_g2_ParamLimits

0x53d3,	// (0x000af440) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x000b9923) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x000b9923) cell_dialer2_keypad_pane_g

0x53ef,	// (0x000af45c) cell_dialer2_keypad_pane_t1

0x5fe6,	// (0x000b0053) main_cset_text2_pane_ParamLimits

0x5fe6,	// (0x000b0053) main_cset_text2_pane

0xdb4e,	// (0x000b7bbb) area_vitu2_query_pane_g1_ParamLimits

0x68fe,	// (0x000b096b) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x000b9ad8) area_vitu2_query_pane_g_ParamLimits

0xa56a,	// (0x000b45d7) area_vitu2_query_pane_t7_ParamLimits

0xa56a,	// (0x000b45d7) area_vitu2_query_pane_t7

0x695f,	// (0x000b09cc) bg_button_pane_cp018_ParamLimits

0x696d,	// (0x000b09da) bg_button_pane_cp021_ParamLimits

0x6979,	// (0x000b09e6) bg_button_pane_cp022_ParamLimits

0x6979,	// (0x000b09e6) bg_vkb2_func_pane_cp08_ParamLimits

0x695f,	// (0x000b09cc) bg_vkb2_func_pane_cp06_ParamLimits

0x696d,	// (0x000b09da) bg_vkb2_func_pane_cp07_ParamLimits

0x698a,	// (0x000b09f7) input_focus_pane_cp09_ParamLimits

0x9e7e,	// (0x000b3eeb) cam6_autofocus_pane_ParamLimits

0x9e7e,	// (0x000b3eeb) cam6_autofocus_pane

0x6ee1,	// (0x000b0f4e) cam6_image_uncrop_pane_ParamLimits

0x6ee1,	// (0x000b0f4e) cam6_image_uncrop_pane

0x6ef0,	// (0x000b0f5d) cam6_indi_pane_ParamLimits

0x6ef0,	// (0x000b0f5d) cam6_indi_pane

0x6f06,	// (0x000b0f73) cam6_mode_pane_ParamLimits

0x6f06,	// (0x000b0f73) cam6_mode_pane

0x6f18,	// (0x000b0f85) cam6_timer_pane_ParamLimits

0x6f18,	// (0x000b0f85) cam6_timer_pane

0x6f28,	// (0x000b0f95) cam6_zoom_pane_ParamLimits

0x6f28,	// (0x000b0f95) cam6_zoom_pane

0x6f34,	// (0x000b0fa1) cam6_mode_pane_g1_ParamLimits

0x6f34,	// (0x000b0fa1) cam6_mode_pane_g1

0x6f44,	// (0x000b0fb1) cam6_mode_pane_g2_ParamLimits

0x6f44,	// (0x000b0fb1) cam6_mode_pane_g2

0x6f54,	// (0x000b0fc1) cam6_mode_pane_g3_ParamLimits

0x6f54,	// (0x000b0fc1) cam6_mode_pane_g3

0x6f64,	// (0x000b0fd1) cam6_mode_pane_g4_ParamLimits

0x6f64,	// (0x000b0fd1) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x000b9bc0) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x000b9bc0) cam6_mode_pane_g

0xdd2e,	// (0x000b7d9b) bg_tb_trans_pane_cp08_ParamLimits

0xdd2e,	// (0x000b7d9b) bg_tb_trans_pane_cp08

0xdd3c,	// (0x000b7da9) cam6_battery_pane_ParamLimits

0xdd3c,	// (0x000b7da9) cam6_battery_pane

0xdd52,	// (0x000b7dbf) cam6_indi_pane_g1_ParamLimits

0xdd52,	// (0x000b7dbf) cam6_indi_pane_g1

0xdd64,	// (0x000b7dd1) cam6_indi_pane_g2_ParamLimits

0xdd64,	// (0x000b7dd1) cam6_indi_pane_g2

0xdd76,	// (0x000b7de3) cam6_indi_pane_g3_ParamLimits

0xdd76,	// (0x000b7de3) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x000b9bc9) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x000b9bc9) cam6_indi_pane_g

0xdd9a,	// (0x000b7e07) cam6_indi_pane_t1_ParamLimits

0xdd9a,	// (0x000b7e07) cam6_indi_pane_t1

0x6f74,	// (0x000b0fe1) cam6_autofocus_pane_g1

0x6f7c,	// (0x000b0fe9) cam6_autofocus_pane_g2

0x6f84,	// (0x000b0ff1) cam6_autofocus_pane_g3

0x6f8c,	// (0x000b0ff9) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x000b9bd0) cam6_autofocus_pane_g

0xddc0,	// (0x000b7e2d) cam6_timer_pane_g1

0xddc8,	// (0x000b7e35) cam6_timer_pane_t1

0xddd6,	// (0x000b7e43) cam6_zoom_cont_pane

0xddde,	// (0x000b7e4b) cam6_zoom_pane_g1

0xdde6,	// (0x000b7e53) cam6_zoom_pane_g2

0x6f94,	// (0x000b1001) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x000b9bd9) cam6_zoom_pane_g

0xcd1c,	// (0x000b6d89) cam6_battery_pane_g1

0xcd1c,	// (0x000b6d89) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x000b9741) cam6_battery_pane_g

0xddee,	// (0x000b7e5b) cam6_zoom_cont_pane_g1

0xddf7,	// (0x000b7e64) cam6_zoom_cont_pane_g2

0xde00,	// (0x000b7e6d) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x000b9be0) cam6_zoom_cont_pane_g

0x6fb1,	// (0x000b101e) cam6_mode_pane_cp_ParamLimits

0x6fb1,	// (0x000b101e) cam6_mode_pane_cp

0x6fc3,	// (0x000b1030) cam6_zoom_pane_cp_ParamLimits

0x6fc3,	// (0x000b1030) cam6_zoom_pane_cp

0x6fcf,	// (0x000b103c) vid6_image_uncrop_cif_pane_ParamLimits

0x6fcf,	// (0x000b103c) vid6_image_uncrop_cif_pane

0x6fdf,	// (0x000b104c) vid6_image_uncrop_nhd_pane_ParamLimits

0x6fdf,	// (0x000b104c) vid6_image_uncrop_nhd_pane

0x6fee,	// (0x000b105b) vid6_image_uncrop_vga_pane_ParamLimits

0x6fee,	// (0x000b105b) vid6_image_uncrop_vga_pane

0x6ffd,	// (0x000b106a) vid6_image_uncrop_wvga_pane_ParamLimits

0x6ffd,	// (0x000b106a) vid6_image_uncrop_wvga_pane

0x700c,	// (0x000b1079) vid6_indi_pane_ParamLimits

0x700c,	// (0x000b1079) vid6_indi_pane

0xdd2e,	// (0x000b7d9b) bg_tb_trans_pane_cp09_ParamLimits

0xdd2e,	// (0x000b7d9b) bg_tb_trans_pane_cp09

0xde18,	// (0x000b7e85) cam6_battery_pane_cp_ParamLimits

0xde18,	// (0x000b7e85) cam6_battery_pane_cp

0xde24,	// (0x000b7e91) vid6_indi_pane_g1_ParamLimits

0xde24,	// (0x000b7e91) vid6_indi_pane_g1

0xde36,	// (0x000b7ea3) vid6_indi_pane_g2_ParamLimits

0xde36,	// (0x000b7ea3) vid6_indi_pane_g2

0xde48,	// (0x000b7eb5) vid6_indi_pane_g3_ParamLimits

0xde48,	// (0x000b7eb5) vid6_indi_pane_g3

0xde5d,	// (0x000b7eca) vid6_indi_pane_g4_ParamLimits

0xde5d,	// (0x000b7eca) vid6_indi_pane_g4

0xde72,	// (0x000b7edf) vid6_indi_pane_g5_ParamLimits

0xde72,	// (0x000b7edf) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x000b9be7) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000b9be7) vid6_indi_pane_g

0xde8c,	// (0x000b7ef9) vid6_indi_pane_t1_ParamLimits

0xde8c,	// (0x000b7ef9) vid6_indi_pane_t1

0xdea2,	// (0x000b7f0f) vid6_indi_pane_t2_ParamLimits

0xdea2,	// (0x000b7f0f) vid6_indi_pane_t2

0xdeca,	// (0x000b7f37) vid6_indi_pane_t3_ParamLimits

0xdeca,	// (0x000b7f37) vid6_indi_pane_t3

0xdef2,	// (0x000b7f5f) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x000b7f5f) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x000b9bf2) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x000b9bf2) vid6_indi_pane_t

0xdf16,	// (0x000b7f83) wait_bar_pane_cp08

0x7024,	// (0x000b1091) main_cset_text2_pane_t1_ParamLimits

0x7024,	// (0x000b1091) main_cset_text2_pane_t1

0x6f9c,	// (0x000b1009) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f9c,	// (0x000b1009) listscroll_gen_pane_cp06_t1

0x945e,	// (0x000b34cb) main_cam6_set_pane

0x9cad,	// (0x000b3d1a) bg_tb_trans_pane_cp06_ParamLimits

0x9cc3,	// (0x000b3d30) cam4_indicators_pane_g1_ParamLimits

0x9cd4,	// (0x000b3d41) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x000b9960) cam4_indicators_pane_g_ParamLimits

0x9cec,	// (0x000b3d59) cam4_indicators_pane_t1_ParamLimits

0x9450,	// (0x000b34bd) bg_tb_trans_pane_cp07_ParamLimits

0x9d16,	// (0x000b3d83) vid4_indicators_pane_g1_ParamLimits

0x9d2a,	// (0x000b3d97) vid4_indicators_pane_g2_ParamLimits

0x9d3e,	// (0x000b3dab) vid4_indicators_pane_g3_ParamLimits

0x9d4f,	// (0x000b3dbc) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x000b9972) vid4_indicators_pane_g_ParamLimits

0x9d6b,	// (0x000b3dd8) vid4_indicators_pane_t1_ParamLimits

0x9e1b,	// (0x000b3e88) vid4_progress_pane_g1_ParamLimits

0x9e2b,	// (0x000b3e98) vid4_progress_pane_g2_ParamLimits

0x6aca,	// (0x000b0b37) vid4_progress_pane_g3_ParamLimits

0x9e3b,	// (0x000b3ea8) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x000b9b23) vid4_progress_pane_g_ParamLimits

0x6adc,	// (0x000b0b49) vid4_progress_pane_t1_ParamLimits

0x9e53,	// (0x000b3ec0) vid4_progress_pane_t2_ParamLimits

0x9e68,	// (0x000b3ed5) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x000b9b2e) vid4_progress_pane_t_ParamLimits

0x6af2,	// (0x000b0b5f) wait_bar_pane_cp07_ParamLimits

0x7042,	// (0x000b10af) main_cam6_set_pane_g2_ParamLimits

0x7042,	// (0x000b10af) main_cam6_set_pane_g2

0x7066,	// (0x000b10d3) main_cset6_listscroll_pane_ParamLimits

0x7066,	// (0x000b10d3) main_cset6_listscroll_pane

0x7082,	// (0x000b10ef) main_cset6_slider_pane_ParamLimits

0x7082,	// (0x000b10ef) main_cset6_slider_pane

0x7098,	// (0x000b1105) main_cset6_text2_pane_ParamLimits

0x7098,	// (0x000b1105) main_cset6_text2_pane

0xdf25,	// (0x000b7f92) main_cset6_text_pane

0xdf2d,	// (0x000b7f9a) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x000b7f9a) main_cset_list_pane_copy1

0xdf3d,	// (0x000b7faa) scroll_pane_cp028_copy1

0x70a6,	// (0x000b1113) cset_list_set_pane_copy1

0x70b8,	// (0x000b1125) aid_position_infowindow_above_copy1

0x70c0,	// (0x000b112d) aid_position_infowindow_below_copy1

0xa59e,	// (0x000b460b) cset_list_set_pane_g1_copy1

0xa5a6,	// (0x000b4613) cset_list_set_pane_g3_copy1_ParamLimits

0xa5a6,	// (0x000b4613) cset_list_set_pane_g3_copy1

0xa5b5,	// (0x000b4622) cset_list_set_pane_t1_copy1_ParamLimits

0xa5b5,	// (0x000b4622) cset_list_set_pane_t1_copy1

0xa453,	// (0x000b44c0) list_highlight_pane_cp021_copy1_ParamLimits

0xa453,	// (0x000b44c0) list_highlight_pane_cp021_copy1

0xdf46,	// (0x000b7fb3) cset6_slider_pane_ParamLimits

0xdf46,	// (0x000b7fb3) cset6_slider_pane

0xdf72,	// (0x000b7fdf) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x000b7fdf) main_cset6_slider_pane_g1

0x70c8,	// (0x000b1135) main_cset6_slider_pane_g2_ParamLimits

0x70c8,	// (0x000b1135) main_cset6_slider_pane_g2

0xdf9a,	// (0x000b8007) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x000b8007) main_cset6_slider_pane_g3

0x70f0,	// (0x000b115d) main_cset6_slider_pane_g4_ParamLimits

0x70f0,	// (0x000b115d) main_cset6_slider_pane_g4

0xdfa6,	// (0x000b8013) main_cset6_slider_pane_g5_ParamLimits

0xdfa6,	// (0x000b8013) main_cset6_slider_pane_g5

0xd81a,	// (0x000b7887) main_cset6_slider_pane_g7_ParamLimits

0xd81a,	// (0x000b7887) main_cset6_slider_pane_g7

0xd826,	// (0x000b7893) main_cset6_slider_pane_g8_ParamLimits

0xd826,	// (0x000b7893) main_cset6_slider_pane_g8

0x6093,	// (0x000b0100) main_cset6_slider_pane_g9_ParamLimits

0x6093,	// (0x000b0100) main_cset6_slider_pane_g9

0x609f,	// (0x000b010c) main_cset6_slider_pane_g10_ParamLimits

0x609f,	// (0x000b010c) main_cset6_slider_pane_g10

0x60ab,	// (0x000b0118) main_cset6_slider_pane_g11_ParamLimits

0x60ab,	// (0x000b0118) main_cset6_slider_pane_g11

0x60b7,	// (0x000b0124) main_cset6_slider_pane_g12_ParamLimits

0x60b7,	// (0x000b0124) main_cset6_slider_pane_g12

0x60c3,	// (0x000b0130) main_cset6_slider_pane_g13_ParamLimits

0x60c3,	// (0x000b0130) main_cset6_slider_pane_g13

0x60cf,	// (0x000b013c) main_cset6_slider_pane_g14_ParamLimits

0x60cf,	// (0x000b013c) main_cset6_slider_pane_g14

0x70fc,	// (0x000b1169) main_cset6_slider_pane_g15_ParamLimits

0x70fc,	// (0x000b1169) main_cset6_slider_pane_g15

0xd832,	// (0x000b789f) main_cset6_slider_pane_g16_ParamLimits

0xd832,	// (0x000b789f) main_cset6_slider_pane_g16

0xd83e,	// (0x000b78ab) main_cset6_slider_pane_g17_ParamLimits

0xd83e,	// (0x000b78ab) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x000b9bfb) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x000b9bfb) main_cset6_slider_pane_g

0xdfb2,	// (0x000b801f) main_cset6_slider_pane_t1_ParamLimits

0xdfb2,	// (0x000b801f) main_cset6_slider_pane_t1

0x712c,	// (0x000b1199) main_cset6_slider_pane_t2_ParamLimits

0x712c,	// (0x000b1199) main_cset6_slider_pane_t2

0x7157,	// (0x000b11c4) main_cset6_slider_pane_t3_ParamLimits

0x7157,	// (0x000b11c4) main_cset6_slider_pane_t3

0x7182,	// (0x000b11ef) main_cset6_slider_pane_t4_ParamLimits

0x7182,	// (0x000b11ef) main_cset6_slider_pane_t4

0x71ad,	// (0x000b121a) main_cset6_slider_pane_t5_ParamLimits

0x71ad,	// (0x000b121a) main_cset6_slider_pane_t5

0xdff3,	// (0x000b8060) main_cset6_slider_pane_t7_ParamLimits

0xdff3,	// (0x000b8060) main_cset6_slider_pane_t7

0x71d8,	// (0x000b1245) main_cset6_slider_pane_t8_ParamLimits

0x71d8,	// (0x000b1245) main_cset6_slider_pane_t8

0x71fc,	// (0x000b1269) main_cset6_slider_pane_t9_ParamLimits

0x71fc,	// (0x000b1269) main_cset6_slider_pane_t9

0x7220,	// (0x000b128d) main_cset6_slider_pane_t10_ParamLimits

0x7220,	// (0x000b128d) main_cset6_slider_pane_t10

0x7244,	// (0x000b12b1) main_cset6_slider_pane_t11_ParamLimits

0x7244,	// (0x000b12b1) main_cset6_slider_pane_t11

0xe029,	// (0x000b8096) main_cset6_slider_pane_t14_ParamLimits

0xe029,	// (0x000b8096) main_cset6_slider_pane_t14

0xe062,	// (0x000b80cf) main_cset6_slider_pane_t15_ParamLimits

0xe062,	// (0x000b80cf) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x000b9c20) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x000b9c20) main_cset6_slider_pane_t

0xd500,	// (0x000b756d) cset_slider_pane_g1_copy1

0xdd88,	// (0x000b7df5) cset_slider_pane_g2_copy1

0xdd91,	// (0x000b7dfe) cset_slider_pane_g3_copy1

0x9428,	// (0x000b3495) bg_popup_sub_pane_cp011_copy1

0xe09b,	// (0x000b8108) main_cset_text_pane_g1_copy1

0xd976,	// (0x000b79e3) main_cset_text_pane_t1_copy1

0xd984,	// (0x000b79f1) main_cset_text_pane_t2_copy1

0xd992,	// (0x000b79ff) main_cset_text_pane_t3_copy1

0xd9a0,	// (0x000b7a0d) main_cset_text_pane_t4_copy1

0xd9ae,	// (0x000b7a1b) main_cset_text_pane_t5_copy1

0xe0a3,	// (0x000b8110) main_cset_text_pane_t6_copy1

0xe0b1,	// (0x000b811e) main_cset_text_pane_t7_copy1

0x7024,	// (0x000b1091) main_cset_text2_pane_t1_copy1

0x9450,	// (0x000b34bd) main_ncimui_pane

0x36bb,	// (0x000ad728) popup_query_ncimui_window_ParamLimits

0x36bb,	// (0x000ad728) popup_query_ncimui_window

0xa49d,	// (0x000b450a) field_cale_ev2_pane_g4_ParamLimits

0xa49d,	// (0x000b450a) field_cale_ev2_pane_g4

0x52b2,	// (0x000af31f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52b2,	// (0x000af31f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x000b98fa) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x000b98fa) cell_video_dialer_keypad_pane_g

0x52ca,	// (0x000af337) cell_video_dialer_keypad_pane_t1

0x9428,	// (0x000b3495) bg_popup_window_pane_cp012

0xb16e,	// (0x000b51db) heading_pane_cp06

0xe0dd,	// (0x000b814a) ncim_query_content_pane

0x9428,	// (0x000b3495) bg_popup_heading_pane_cp01

0xe0e5,	// (0x000b8152) ncim_heading_pane_t1

0xe0f3,	// (0x000b8160) ncim_indicator_popup_pane

0xe105,	// (0x000b8172) ncim_query_button_pane

0xe119,	// (0x000b8186) ncim_query_content_pane_t1

0xe12b,	// (0x000b8198) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x000b9c64) ncim_query_content_pane_t

0xe165,	// (0x000b81d2) ncim_query_list_pane

0xe177,	// (0x000b81e4) ncim_query_popup_pane

0xe0f3,	// (0x000b8160) ncim_indicator_popup_pane_ParamLimits

0x7467,	// (0x000b14d4) ncim_query_content_pane_g1_ParamLimits

0x7467,	// (0x000b14d4) ncim_query_content_pane_g1

0xe119,	// (0x000b8186) ncim_query_content_pane_t1_ParamLimits

0xe12b,	// (0x000b8198) ncim_query_content_pane_t2_ParamLimits

0x7473,	// (0x000b14e0) ncim_query_content_pane_t3_ParamLimits

0x7473,	// (0x000b14e0) ncim_query_content_pane_t3

0x749b,	// (0x000b1508) ncim_query_content_pane_t4_ParamLimits

0x749b,	// (0x000b1508) ncim_query_content_pane_t4

0x74c3,	// (0x000b1530) ncim_query_content_pane_t5_ParamLimits

0x74c3,	// (0x000b1530) ncim_query_content_pane_t5

0xe13d,	// (0x000b81aa) ncim_query_content_pane_t6_ParamLimits

0xe13d,	// (0x000b81aa) ncim_query_content_pane_t6

0xfbf7,	// (0x000b9c64) ncim_query_content_pane_t_ParamLimits

0xe165,	// (0x000b81d2) ncim_query_list_pane_ParamLimits

0xe177,	// (0x000b81e4) ncim_query_popup_pane_ParamLimits

0xe18b,	// (0x000b81f8) wait_bar_pane_cp04

0x9428,	// (0x000b3495) input_focus_pane_cp011

0xe193,	// (0x000b8200) ncim_query_popup_pane_t1

0xe1a1,	// (0x000b820e) ncim_list_query_list_pane_ParamLimits

0xe1a1,	// (0x000b820e) ncim_list_query_list_pane

0x9428,	// (0x000b3495) bg_button_pane_cp027

0xe1ae,	// (0x000b821b) ncim_query_button_pane_g1

0x9428,	// (0x000b3495) list_highlight_pane_cp012

0xe1b8,	// (0x000b8225) ncim_list_query_list_pane_g1

0xe1c0,	// (0x000b822d) ncim_list_query_list_pane_t1

0x9ce0,	// (0x000b3d4d) cam4_indicators_pane_g3_ParamLimits

0x9ce0,	// (0x000b3d4d) cam4_indicators_pane_g3

0x9d5b,	// (0x000b3dc8) vid4_indicators_pane_g5_ParamLimits

0x9d5b,	// (0x000b3dc8) vid4_indicators_pane_g5

0x9e47,	// (0x000b3eb4) vid4_progress_pane_g5_ParamLimits

0x9e47,	// (0x000b3eb4) vid4_progress_pane_g5

0x7352,	// (0x000b13bf) main_ncimui_pane_g1

0x73bb,	// (0x000b1428) ncimui_group_query_pane_ParamLimits

0x73bb,	// (0x000b1428) ncimui_group_query_pane

0x7403,	// (0x000b1470) ncimui_list_pane_ParamLimits

0x7403,	// (0x000b1470) ncimui_list_pane

0x742a,	// (0x000b1497) ncimui_text_pane_ParamLimits

0x742a,	// (0x000b1497) ncimui_text_pane

0x74eb,	// (0x000b1558) ncimui_text_pane_t1_ParamLimits

0x74eb,	// (0x000b1558) ncimui_text_pane_t1

0xe1ce,	// (0x000b823b) ncimui_list_single_graphic_pane_ParamLimits

0xe1ce,	// (0x000b823b) ncimui_list_single_graphic_pane

0x7509,	// (0x000b1576) ncimui_query_pane_ParamLimits

0x7509,	// (0x000b1576) ncimui_query_pane

0x9428,	// (0x000b3495) list_highlight_pane_cp013

0xe1de,	// (0x000b824b) ncim_list_query_list_pane_t1_copy1

0xe1ec,	// (0x000b8259) ncim_list_single_graphic_pane_g1

0x751c,	// (0x000b1589) ncim_query_button_pane_cp01

0x7528,	// (0x000b1595) ncim_query_entry_pane_ParamLimits

0x7528,	// (0x000b1595) ncim_query_entry_pane

0x753b,	// (0x000b15a8) ncimui_query_pane_g1

0x7547,	// (0x000b15b4) ncimui_query_pane_t1_ParamLimits

0x7547,	// (0x000b15b4) ncimui_query_pane_t1

0xa453,	// (0x000b44c0) input_focus_pane_cp012

0xe1f4,	// (0x000b8261) ncim_query_entry_pane_t1

0xa337,	// (0x000b43a4) main_im_pane_ParamLimits

0x9450,	// (0x000b34bd) main_mobtv_pane_ParamLimits

0x9450,	// (0x000b34bd) main_mobtv_pane

0x7114,	// (0x000b1181) main_cset6_slider_pane_g18_ParamLimits

0x7114,	// (0x000b1181) main_cset6_slider_pane_g18

0x7120,	// (0x000b118d) main_cset6_slider_pane_g19_ParamLimits

0x7120,	// (0x000b118d) main_cset6_slider_pane_g19

0x7560,	// (0x000b15cd) bg_main_mobtv_pane_ParamLimits

0x7560,	// (0x000b15cd) bg_main_mobtv_pane

0x756e,	// (0x000b15db) main_mobtv_info_pane

0x7577,	// (0x000b15e4) main_mobtv_loading_pane_ParamLimits

0x7577,	// (0x000b15e4) main_mobtv_loading_pane

0xe206,	// (0x000b8273) main_mobtv_pg_channel_list_pane

0xe210,	// (0x000b827d) main_mobtv_pg_hdr_pane

0x7584,	// (0x000b15f1) main_mobtv_programe_curr_pane_ParamLimits

0x7584,	// (0x000b15f1) main_mobtv_programe_curr_pane

0x7591,	// (0x000b15fe) main_mobtv_programe_next_pane_ParamLimits

0x7591,	// (0x000b15fe) main_mobtv_programe_next_pane

0xe219,	// (0x000b8286) popup_mobtv_noti_window

0xcd1c,	// (0x000b6d89) main_tv_pg_hdr_pane_g1

0xe221,	// (0x000b828e) main_tv_pg_hdr_pane_g2

0xe229,	// (0x000b8296) main_tv_pg_hdr_pane_g3

0xe231,	// (0x000b829e) main_tv_pg_hdr_pane_g4

0xe239,	// (0x000b82a6) main_tv_pg_hdr_pane_g5

0xe243,	// (0x000b82b0) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x000b82ba) main_tv_pg_hdr_pane_g7

0xe257,	// (0x000b82c4) main_tv_pg_hdr_pane_g8

0xe261,	// (0x000b82ce) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x000b82d8) main_tv_pg_hdr_pane_g10

0xe275,	// (0x000b82e2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x000b9c71) main_tv_pg_hdr_pane_g

0xe27f,	// (0x000b82ec) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x000b82fa) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x000b8308) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x000b8318) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x000b8328) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x000b9c88) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x000b8338) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x000b8338) single_mobtv_pg_channel_pane

0xe2dd,	// (0x000b834a) single_mobtv_pg_channel_table_pane

0xadd8,	// (0x000b4e45) single_mobtv_pg_channel_thumb_pane

0xe2e6,	// (0x000b8353) single_tv_pg_channel_pane_g1

0xe2ef,	// (0x000b835c) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x000b9c93) single_tv_pg_channel_pane_g

0xcf61,	// (0x000b6fce) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf61,	// (0x000b6fce) bg_single_mobtv_pg_channel_thumb_pane

0xe2f8,	// (0x000b8365) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f8,	// (0x000b8365) single_mobtv_pg_channel_thumb_pane_g1

0xe306,	// (0x000b8373) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe306,	// (0x000b8373) single_mobtv_pg_channel_thumb_pane_g2

0xe312,	// (0x000b837f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe312,	// (0x000b837f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x000b9c98) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x000b9c98) single_mobtv_pg_channel_thumb_pane_g

0xe31e,	// (0x000b838b) single_mobtv_pg_channel_thumb_pane_t1

0xe32c,	// (0x000b8399) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x000b9c9f) single_mobtv_pg_channel_thumb_pane_t

0xcd1c,	// (0x000b6d89) bg_single_mobtv_pg_channel_table_pane_g1

0xcd1c,	// (0x000b6d89) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x000b9741) bg_single_mobtv_pg_channel_table_pane_g

0xe33a,	// (0x000b83a7) single_mobtv_pg_channel_table_pane_t1

0xe348,	// (0x000b83b5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x000b9ca4) single_mobtv_pg_channel_table_pane_t

0x75a6,	// (0x000b1613) main_mobtv_info_pane_g1_ParamLimits

0x75a6,	// (0x000b1613) main_mobtv_info_pane_g1

0x75c4,	// (0x000b1631) main_mobtv_info_pane_t1_ParamLimits

0x75c4,	// (0x000b1631) main_mobtv_info_pane_t1

0x763c,	// (0x000b16a9) main_mobtv_info_pane_t2_ParamLimits

0x763c,	// (0x000b16a9) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x000b9cae) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x000b9cae) main_mobtv_info_pane_t

0x76cb,	// (0x000b1738) wait_bar_pane_cp05

0x76dd,	// (0x000b174a) main_mobtv_loading_pane_g1_ParamLimits

0x76dd,	// (0x000b174a) main_mobtv_loading_pane_g1

0x76f0,	// (0x000b175d) main_mobtv_loading_pane_g2_ParamLimits

0x76f0,	// (0x000b175d) main_mobtv_loading_pane_g2

0x76fc,	// (0x000b1769) main_mobtv_loading_pane_g3_ParamLimits

0x76fc,	// (0x000b1769) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x000b9cb5) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x000b9cb5) main_mobtv_loading_pane_g

0xe356,	// (0x000b83c3) main_mobtv_loading_pane_t1_ParamLimits

0xe356,	// (0x000b83c3) main_mobtv_loading_pane_t1

0xe36e,	// (0x000b83db) main_mobtv_loading_pane_t2_ParamLimits

0xe36e,	// (0x000b83db) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x000b9cbc) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x000b9cbc) main_mobtv_loading_pane_t

0x770f,	// (0x000b177c) wait_bar_pane_cp06_ParamLimits

0x770f,	// (0x000b177c) wait_bar_pane_cp06

0xe392,	// (0x000b83ff) main_mobtv_programe_curr_pane_t1

0xe3a0,	// (0x000b840d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x000b9cc1) main_mobtv_programe_curr_pane_t

0xe3ae,	// (0x000b841b) main_mobtv_programe_next_pane_t1

0xe3bc,	// (0x000b8429) main_mobtv_programe_next_pane_t2

0xe3ca,	// (0x000b8437) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x000b9cc6) main_mobtv_programe_next_pane_t

0x9428,	// (0x000b3495) bg_popup_mobtv_noti_window_pane

0xe3d8,	// (0x000b8445) popup_mobtv_noti_window_g1

0xe3e0,	// (0x000b844d) popup_mobtv_noti_window_t1

0xe3ee,	// (0x000b845b) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x000b9ccd) popup_mobtv_noti_window_t

0xcd1c,	// (0x000b6d89) bg_popup_mobtv_noti_window_pane_g1

0x945e,	// (0x000b34cb) sc_clock_pane

0x945e,	// (0x000b34cb) main_fs_bigclock_pane

0x6d56,	// (0x000b0dc3) blid2_tripm_pane_t4_ParamLimits

0x6d56,	// (0x000b0dc3) blid2_tripm_pane_t4

0x771e,	// (0x000b178b) sc_clock_pane_g1_ParamLimits

0x771e,	// (0x000b178b) sc_clock_pane_g1

0x7730,	// (0x000b179d) sc_clock_pane_t1_ParamLimits

0x7730,	// (0x000b179d) sc_clock_pane_t1

0x7752,	// (0x000b17bf) sc_clock_pane_t2_ParamLimits

0x7752,	// (0x000b17bf) sc_clock_pane_t2

0x776a,	// (0x000b17d7) sc_clock_pane_t3_ParamLimits

0x776a,	// (0x000b17d7) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x000b9cd2) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x000b9cd2) sc_clock_pane_t

0x8817,	// (0x000b2884) main_fs_bigclock_indicator_pane_ParamLimits

0x8817,	// (0x000b2884) main_fs_bigclock_indicator_pane

0x7810,	// (0x000b187d) main_fs_bigclock_pane_g1_ParamLimits

0x7810,	// (0x000b187d) main_fs_bigclock_pane_g1

0x8823,	// (0x000b2890) main_fs_bigclock_pane_t1_ParamLimits

0x8823,	// (0x000b2890) main_fs_bigclock_pane_t1

0x8835,	// (0x000b28a2) main_fs_bigclock_pane_t2_ParamLimits

0x8835,	// (0x000b28a2) main_fs_bigclock_pane_t2

0x8849,	// (0x000b28b6) main_fs_bigclock_pane_t3_ParamLimits

0x8849,	// (0x000b28b6) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000b9ee0) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000b9ee0) main_fs_bigclock_pane_t

0xec52,	// (0x000b8cbf) main_fs_bigclock_indicator_pane_g1

0xe10d,	// (0x000b817a) ncim_query_content_pane_g2_ParamLimits

0xe10d,	// (0x000b817a) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x000b9c5f) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x000b9c5f) ncim_query_content_pane_g

0x7783,	// (0x000b17f0) sc_clock_pane_t4_ParamLimits

0x7783,	// (0x000b17f0) sc_clock_pane_t4

0x9450,	// (0x000b34bd) main_radioblah_pane

0x9c47,	// (0x000b3cb4) cell_call4_button_pane_t1_copy1_ParamLimits

0x9c47,	// (0x000b3cb4) cell_call4_button_pane_t1_copy1

0x736a,	// (0x000b13d7) main_ncimui_pane_t1_ParamLimits

0x736a,	// (0x000b13d7) main_ncimui_pane_t1

0x7384,	// (0x000b13f1) main_ncimui_pane_t2_ParamLimits

0x7384,	// (0x000b13f1) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x000b9c58) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x000b9c58) main_ncimui_pane_t

0xe534,	// (0x000b85a1) main_radioblah_anim_pane_ParamLimits

0xe534,	// (0x000b85a1) main_radioblah_anim_pane

0xe545,	// (0x000b85b2) main_radioblah_info_pane_ParamLimits

0xe545,	// (0x000b85b2) main_radioblah_info_pane

0xe559,	// (0x000b85c6) main_radioblah_pane_t1_ParamLimits

0xe559,	// (0x000b85c6) main_radioblah_pane_t1

0xe575,	// (0x000b85e2) main_radioblah_pane_t2_ParamLimits

0xe575,	// (0x000b85e2) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x000b9cf3) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x000b9cf3) main_radioblah_pane_t

0x786f,	// (0x000b18dc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x786f,	// (0x000b18dc) main_radioblah_rocker_ctrl_pane

0xe5bd,	// (0x000b862a) main_radioblah_info_pane_t1_ParamLimits

0xe5bd,	// (0x000b862a) main_radioblah_info_pane_t1

0x78c7,	// (0x000b1934) main_radioblah_info_pane_t2_ParamLimits

0x78c7,	// (0x000b1934) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x000b9cfc) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x000b9cfc) main_radioblah_info_pane_t

0xcd1c,	// (0x000b6d89) main_radioblah_rocker_ctrl_pane_g1

0x7977,	// (0x000b19e4) main_radioblah_rocker_ctrl_pane_g2

0x797f,	// (0x000b19ec) main_radioblah_rocker_ctrl_pane_g3

0x7987,	// (0x000b19f4) main_radioblah_rocker_ctrl_pane_g4

0x798f,	// (0x000b19fc) main_radioblah_rocker_ctrl_pane_g5

0x7997,	// (0x000b1a04) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x000b9d05) main_radioblah_rocker_ctrl_pane_g

0x7024,	// (0x000b1091) main_cset_text2_pane_t1_copy1_ParamLimits

0x9ca5,	// (0x000b3d12) cam4_image_uncrop_qvga_pane

0x9d06,	// (0x000b3d73) vid4_image_uncrop_qcif_pane

0x9e7e,	// (0x000b3eeb) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e7e,	// (0x000b3eeb) cam6_image_uncrop_qvga_pane

0xde08,	// (0x000b7e75) vid6_image_uncrop_qcif_pane_ParamLimits

0xde08,	// (0x000b7e75) vid6_image_uncrop_qcif_pane

0x9428,	// (0x000b3495) bg_popup_preview_window_pane_cp03

0xe0bf,	// (0x000b812c) list_cset_text2_pane

0xe0c7,	// (0x000b8134) main_cset6_text2_pane_g1

0xe0cf,	// (0x000b813c) main_cset6_text2_pane_t1

0xe5f7,	// (0x000b8664) list_cset_text2_pane_t1_ParamLimits

0xe5f7,	// (0x000b8664) list_cset_text2_pane_t1

0x9450,	// (0x000b34bd) main_radioblah_pane_ParamLimits

0x76b7,	// (0x000b1724) main_mobtv_info_pane_t3_ParamLimits

0x76b7,	// (0x000b1724) main_mobtv_info_pane_t3

0x785d,	// (0x000b18ca) main_radioblah_pane_g1

0x7897,	// (0x000b1904) main_radioblah_info_pane_g1

0x791c,	// (0x000b1989) main_radioblah_info_pane_t3_ParamLimits

0x791c,	// (0x000b1989) main_radioblah_info_pane_t3

0x2124,	// (0x000ac191) highlight_cell_cale_month_pane_ParamLimits

0x2124,	// (0x000ac191) highlight_cell_cale_month_pane

0x945e,	// (0x000b34cb) main_phob_fisheye_pane

0xd03d,	// (0x000b70aa) scroll_pane_cp0031_ParamLimits

0xd03d,	// (0x000b70aa) scroll_pane_cp0031

0xdf16,	// (0x000b7f83) wait_bar_pane_cp08_ParamLimits

0x70a6,	// (0x000b1113) cset_list_set_pane_copy1_ParamLimits

0xe612,	// (0x000b867f) highlight_cell_cale_month_pane_g1

0x799f,	// (0x000b1a0c) highlight_cell_cale_month_pane_t1

0xdba2,	// (0x000b7c0f) list_gen_pane_cp01

0xd805,	// (0x000b7872) scroll_pane_01

0x79ad,	// (0x000b1a1a) list_single_double_fisheye_pane

0x79b6,	// (0x000b1a23) list_double_fisheye_pane_g1_ParamLimits

0x79b6,	// (0x000b1a23) list_double_fisheye_pane_g1

0x79c2,	// (0x000b1a2f) list_double_fisheye_pane_g2_ParamLimits

0x79c2,	// (0x000b1a2f) list_double_fisheye_pane_g2

0x79d6,	// (0x000b1a43) list_double_fisheye_pane_g3_ParamLimits

0x79d6,	// (0x000b1a43) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x000b9d12) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x000b9d12) list_double_fisheye_pane_g

0x79ff,	// (0x000b1a6c) list_double_fisheye_pane_t1_ParamLimits

0x79ff,	// (0x000b1a6c) list_double_fisheye_pane_t1

0x7a1a,	// (0x000b1a87) list_double_fisheye_pane_t2_ParamLimits

0x7a1a,	// (0x000b1a87) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x000b9d1d) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x000b9d1d) list_double_fisheye_pane_t

0x945e,	// (0x000b34cb) main_call5_pane

0x77ae,	// (0x000b181b) sc_swipe_pane_ParamLimits

0x77ae,	// (0x000b181b) sc_swipe_pane

0x7a4f,	// (0x000b1abc) call5_image_pane_ParamLimits

0x7a4f,	// (0x000b1abc) call5_image_pane

0x7a6c,	// (0x000b1ad9) call5_swipe_1_pane_ParamLimits

0x7a6c,	// (0x000b1ad9) call5_swipe_1_pane

0x7a7f,	// (0x000b1aec) call5_swipe_2_pane_ParamLimits

0x7a7f,	// (0x000b1aec) call5_swipe_2_pane

0x7aaa,	// (0x000b1b17) popup_call5_audio_first_window_ParamLimits

0x7aaa,	// (0x000b1b17) popup_call5_audio_first_window

0xcf61,	// (0x000b6fce) call5_swipe_1_pane_g1_ParamLimits

0xcf61,	// (0x000b6fce) call5_swipe_1_pane_g1

0xe61a,	// (0x000b8687) call5_swipe_1_pane_g2_ParamLimits

0xe61a,	// (0x000b8687) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x000b9d22) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x000b9d22) call5_swipe_1_pane_g

0xe626,	// (0x000b8693) call5_swipe_1_pane_t1_ParamLimits

0xe626,	// (0x000b8693) call5_swipe_1_pane_t1

0xcf61,	// (0x000b6fce) call5_swipe_2_pane_g1_ParamLimits

0xcf61,	// (0x000b6fce) call5_swipe_2_pane_g1

0xe63b,	// (0x000b86a8) call5_swipe_2_pane_g2_ParamLimits

0xe63b,	// (0x000b86a8) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x000b9d27) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x000b9d27) call5_swipe_2_pane_g

0xe647,	// (0x000b86b4) call5_swipe_2_pane_t1_ParamLimits

0xe647,	// (0x000b86b4) call5_swipe_2_pane_t1

0xe65c,	// (0x000b86c9) sc_swipe_pane_g1_ParamLimits

0xe65c,	// (0x000b86c9) sc_swipe_pane_g1

0xe669,	// (0x000b86d6) sc_swipe_pane_g2_ParamLimits

0xe669,	// (0x000b86d6) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x000b9d2c) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x000b9d2c) sc_swipe_pane_g

0xe675,	// (0x000b86e2) sc_swipe_pane_t1_ParamLimits

0xe675,	// (0x000b86e2) sc_swipe_pane_t1

0x945e,	// (0x000b34cb) main_cmail_launcher_pane

0x7abb,	// (0x000b1b28) aid_size_cell_cmail_l_ParamLimits

0x7abb,	// (0x000b1b28) aid_size_cell_cmail_l

0x7ac9,	// (0x000b1b36) grid_cmail_l_pane_ParamLimits

0x7ac9,	// (0x000b1b36) grid_cmail_l_pane

0x7ae3,	// (0x000b1b50) cell_cmail_l_pane_ParamLimits

0x7ae3,	// (0x000b1b50) cell_cmail_l_pane

0xe68a,	// (0x000b86f7) cell_cmail_l_pane_g1_ParamLimits

0xe68a,	// (0x000b86f7) cell_cmail_l_pane_g1

0xe696,	// (0x000b8703) cell_cmail_l_pane_t1_ParamLimits

0xe696,	// (0x000b8703) cell_cmail_l_pane_t1

0xe6ac,	// (0x000b8719) cell_cmail_l_pane_t2_ParamLimits

0xe6ac,	// (0x000b8719) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x000b9d31) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x000b9d31) cell_cmail_l_pane_t

0xa453,	// (0x000b44c0) grid_highlight_pane_cp018_ParamLimits

0xa453,	// (0x000b44c0) grid_highlight_pane_cp018

0x03f6,	// (0x000aa463) main2_pane_ParamLimits

0x03f6,	// (0x000aa463) main2_pane

0xa932,	// (0x000b499f) popup_sp_fs_action_menu_bg_pane_g1

0xa93a,	// (0x000b49a7) popup_sp_fs_action_menu_bg_pane_g2

0xa942,	// (0x000b49af) popup_sp_fs_action_menu_bg_pane_g3

0xa94a,	// (0x000b49b7) popup_sp_fs_action_menu_bg_pane_g4

0xa952,	// (0x000b49bf) popup_sp_fs_action_menu_bg_pane_g5

0xa95a,	// (0x000b49c7) popup_sp_fs_action_menu_bg_pane_g6

0xa962,	// (0x000b49cf) popup_sp_fs_action_menu_bg_pane_g7

0xa96a,	// (0x000b49d7) popup_sp_fs_action_menu_bg_pane_g8

0xa972,	// (0x000b49df) popup_sp_fs_action_menu_bg_pane_g9

0xa97a,	// (0x000b49e7) popup_sp_fs_action_menu_bg_pane_g10

0xa97a,	// (0x000b49e7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000b91dc) popup_sp_fs_action_menu_bg_pane_g

0x12ef,	// (0x000ab35c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t3_g3_g1

0x12fb,	// (0x000ab368) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x2_t3_g3_g2

0x1307,	// (0x000ab374) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000b928a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000b928a) list_medium_line_x2_t3_g3_g

0x1313,	// (0x000ab380) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1313,	// (0x000ab380) list_medium_line_x2_t3_g3_t1

0x1328,	// (0x000ab395) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1328,	// (0x000ab395) list_medium_line_x2_t3_g3_t2

0x133c,	// (0x000ab3a9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000b9291) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000b9291) list_medium_line_x2_t3_g3_t

0x12ef,	// (0x000ab35c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t3_g2_g1

0x1307,	// (0x000ab374) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000b9298) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000b9298) list_medium_line_x2_t3_g2_g

0x1351,	// (0x000ab3be) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1351,	// (0x000ab3be) list_medium_line_x2_t3_g2_t1

0x1367,	// (0x000ab3d4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1367,	// (0x000ab3d4) list_medium_line_x2_t3_g2_t2

0x133c,	// (0x000ab3a9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000b929d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000b929d) list_medium_line_x2_t3_g2_t

0x12ef,	// (0x000ab35c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t4_g4_g1

0x1379,	// (0x000ab3e6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1379,	// (0x000ab3e6) list_medium_line_x2_t4_g4_g2

0x12fb,	// (0x000ab368) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x2_t4_g4_g3

0x1385,	// (0x000ab3f2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1385,	// (0x000ab3f2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000b92a4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000b92a4) list_medium_line_x2_t4_g4_g

0x1391,	// (0x000ab3fe) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1391,	// (0x000ab3fe) list_medium_line_x2_t4_g4_t1

0x13ab,	// (0x000ab418) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13ab,	// (0x000ab418) list_medium_line_x2_t4_g4_t2

0x13c1,	// (0x000ab42e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13c1,	// (0x000ab42e) list_medium_line_x2_t4_g4_t3

0x13d6,	// (0x000ab443) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13d6,	// (0x000ab443) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000b92ad) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000b92ad) list_medium_line_x2_t4_g4_t

0x12ef,	// (0x000ab35c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t2_g4_g1

0x1379,	// (0x000ab3e6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1379,	// (0x000ab3e6) list_medium_line_x2_t2_g4_g2

0x12fb,	// (0x000ab368) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x2_t2_g4_g3

0x1307,	// (0x000ab374) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000b9314) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000b9314) list_medium_line_x2_t2_g4_g

0x214a,	// (0x000ac1b7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x214a,	// (0x000ac1b7) list_medium_line_x2_t2_g4_t1

0x133c,	// (0x000ab3a9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000b931d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000b931d) list_medium_line_x2_t2_g4_t

0x12ef,	// (0x000ab35c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t2_g3_g1

0x12fb,	// (0x000ab368) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x2_t2_g3_g2

0x1307,	// (0x000ab374) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000b928a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000b928a) list_medium_line_x2_t2_g3_g

0x215f,	// (0x000ac1cc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x215f,	// (0x000ac1cc) list_medium_line_x2_t2_g3_t1

0x133c,	// (0x000ab3a9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000b9322) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000b9322) list_medium_line_x2_t2_g3_t

0x22b3,	// (0x000ac320) main_sp_fs_list_pane_ParamLimits

0x22b3,	// (0x000ac320) main_sp_fs_list_pane

0xd32a,	// (0x000b7397) sp_fs_scroll_pane_ParamLimits

0xd32a,	// (0x000b7397) sp_fs_scroll_pane

0x22bf,	// (0x000ac32c) list_medium_line_x2_t3_t1

0x22cf,	// (0x000ac33c) list_medium_line_x2_t3_t2

0x22dd,	// (0x000ac34a) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000b936d) list_medium_line_x2_t3_t

0x22eb,	// (0x000ac358) list_medium_line_x3_t4_t1

0x22fb,	// (0x000ac368) list_medium_line_x3_t4_t2

0x2309,	// (0x000ac376) list_medium_line_x3_t4_t3

0x22dd,	// (0x000ac34a) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000b9374) list_medium_line_x3_t4_t

0x2317,	// (0x000ac384) list_medium_line_x4_t5_t1

0x2327,	// (0x000ac394) list_medium_line_x4_t5_t2

0x2309,	// (0x000ac376) list_medium_line_x4_t5_t3

0x2335,	// (0x000ac3a2) list_medium_line_x4_t5_t4

0x22dd,	// (0x000ac34a) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000b937d) list_medium_line_x4_t5_t

0x12ef,	// (0x000ab35c) list_medium_line_t4_g4_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_t4_g4_g1

0x1385,	// (0x000ab3f2) list_medium_line_t4_g4_g2_ParamLimits

0x1385,	// (0x000ab3f2) list_medium_line_t4_g4_g2

0x2343,	// (0x000ac3b0) list_medium_line_t4_g4_g3_ParamLimits

0x2343,	// (0x000ac3b0) list_medium_line_t4_g4_g3

0x1307,	// (0x000ab374) list_medium_line_t4_g4_g4_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000b9388) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000b9388) list_medium_line_t4_g4_g

0x234f,	// (0x000ac3bc) list_medium_line_t4_g4_t1_ParamLimits

0x234f,	// (0x000ac3bc) list_medium_line_t4_g4_t1

0x2364,	// (0x000ac3d1) list_medium_line_t4_g4_t2_ParamLimits

0x2364,	// (0x000ac3d1) list_medium_line_t4_g4_t2

0x2379,	// (0x000ac3e6) list_medium_line_t4_g4_t3_ParamLimits

0x2379,	// (0x000ac3e6) list_medium_line_t4_g4_t3

0x133c,	// (0x000ab3a9) list_medium_line_t4_g4_t4_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000b9391) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000b9391) list_medium_line_t4_g4_t

0x2451,	// (0x000ac4be) chi_dic_find_pane_g1

0x348b,	// (0x000ad4f8) main_tport_pane

0x63b1,	// (0x000b041e) list_medium_line_plain_t1

0x6459,	// (0x000b04c6) list_medium_line_t2_g2_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_t2_g2_g1

0x6465,	// (0x000b04d2) list_medium_line_t2_g2_g2_ParamLimits

0x6465,	// (0x000b04d2) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x000b9a69) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x000b9a69) list_medium_line_t2_g2_g

0x6471,	// (0x000b04de) list_medium_line_t2_g2_t1_ParamLimits

0x6471,	// (0x000b04de) list_medium_line_t2_g2_t1

0x648b,	// (0x000b04f8) list_medium_line_t2_g2_t2_ParamLimits

0x648b,	// (0x000b04f8) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x000b9a6e) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x000b9a6e) list_medium_line_t2_g2_t

0xa58e,	// (0x000b45fb) aid_sp_fs_list_icon_a_sm

0xa596,	// (0x000b4603) aid_sp_fs_list_icon_d

0xb37e,	// (0x000b53eb) aid_sp_fs_text_primary

0xb387,	// (0x000b53f4) aid_sp_fs_text_secondary

0x6b03,	// (0x000b0b70) list_medium_line

0x6b03,	// (0x000b0b70) list_medium_line_g2

0x6b03,	// (0x000b0b70) list_medium_line_g3

0x6b03,	// (0x000b0b70) list_medium_line_plain

0x6b03,	// (0x000b0b70) list_medium_line_plain_t2

0x6b03,	// (0x000b0b70) list_medium_line_plain_t3

0x6b03,	// (0x000b0b70) list_medium_line_right_icon

0x6b03,	// (0x000b0b70) list_medium_line_right_iconx2

0x6b03,	// (0x000b0b70) list_medium_line_t2

0x6b03,	// (0x000b0b70) list_medium_line_t2_g2

0x6b03,	// (0x000b0b70) list_medium_line_t2_g3

0x6b03,	// (0x000b0b70) list_medium_line_t2_right_icon

0x6b03,	// (0x000b0b70) list_medium_line_t2_right_iconx2

0x6b03,	// (0x000b0b70) list_medium_line_t3

0x6b03,	// (0x000b0b70) list_medium_line_t3_g2

0x6b03,	// (0x000b0b70) list_medium_line_t3_g3

0x6b03,	// (0x000b0b70) list_medium_line_t3_right_iconx2

0x6b0c,	// (0x000b0b79) list_medium_line_t4_g4

0x6b15,	// (0x000b0b82) list_medium_line_x2

0x6b15,	// (0x000b0b82) list_medium_line_x2_t2_g2

0x6b15,	// (0x000b0b82) list_medium_line_x2_t2_g3

0x6b15,	// (0x000b0b82) list_medium_line_x2_t2_g4

0x6b15,	// (0x000b0b82) list_medium_line_x2_t3

0x6b15,	// (0x000b0b82) list_medium_line_x2_t3_g2

0x6b15,	// (0x000b0b82) list_medium_line_x2_t3_g3

0x6b15,	// (0x000b0b82) list_medium_line_x2_t3_g4

0x6b15,	// (0x000b0b82) list_medium_line_x2_t4_g2

0x6b15,	// (0x000b0b82) list_medium_line_x2_t4_g4

0x6b1e,	// (0x000b0b8b) list_medium_line_x3

0x6b1e,	// (0x000b0b8b) list_medium_line_x3_t4

0x6b1e,	// (0x000b0b8b) list_medium_line_x3_t4_g4

0x6b0c,	// (0x000b0b79) list_medium_line_x4_t4

0x6b0c,	// (0x000b0b79) list_medium_line_x4_t4_g7

0x6b0c,	// (0x000b0b79) list_medium_line_x4_t5

0x6b27,	// (0x000b0b94) list_single_fs_dyc_pane_ParamLimits

0x6b27,	// (0x000b0b94) list_single_fs_dyc_pane

0x12ef,	// (0x000ab35c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x4_t4_g7_g1

0x7268,	// (0x000b12d5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7268,	// (0x000b12d5) list_medium_line_x4_t4_g7_g2

0x7274,	// (0x000b12e1) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7274,	// (0x000b12e1) list_medium_line_x4_t4_g7_g3

0x7283,	// (0x000b12f0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7283,	// (0x000b12f0) list_medium_line_x4_t4_g7_g4

0x728f,	// (0x000b12fc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x728f,	// (0x000b12fc) list_medium_line_x4_t4_g7_g5

0x729e,	// (0x000b130b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x729e,	// (0x000b130b) list_medium_line_x4_t4_g7_g6

0x72ad,	// (0x000b131a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x72ad,	// (0x000b131a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x000b9c39) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x000b9c39) list_medium_line_x4_t4_g7_g

0x72b9,	// (0x000b1326) list_medium_line_x4_t4_g7_t1_ParamLimits

0x72b9,	// (0x000b1326) list_medium_line_x4_t4_g7_t1

0x72ce,	// (0x000b133b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x72ce,	// (0x000b133b) list_medium_line_x4_t4_g7_t2

0x72e3,	// (0x000b1350) list_medium_line_x4_t4_g7_t3_ParamLimits

0x72e3,	// (0x000b1350) list_medium_line_x4_t4_g7_t3

0x72f8,	// (0x000b1365) list_medium_line_x4_t4_g7_t4_ParamLimits

0x72f8,	// (0x000b1365) list_medium_line_x4_t4_g7_t4

0x730a,	// (0x000b1377) list_medium_line_x4_t4_g7_t5_ParamLimits

0x730a,	// (0x000b1377) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x000b9c48) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x000b9c48) list_medium_line_x4_t4_g7_t

0x731c,	// (0x000b1389) list_single_dyc_row_pane_ParamLimits

0x731c,	// (0x000b1389) list_single_dyc_row_pane

0x7a3c,	// (0x000b1aa9) call5_gesture_pane_ParamLimits

0x7a3c,	// (0x000b1aa9) call5_gesture_pane

0x7a92,	// (0x000b1aff) call5_windows_pane_ParamLimits

0x7a92,	// (0x000b1aff) call5_windows_pane

0x7afd,	// (0x000b1b6a) call5_swipe_1_pane_cp_ParamLimits

0x7afd,	// (0x000b1b6a) call5_swipe_1_pane_cp

0x7b09,	// (0x000b1b76) call5_swipe_2_pane_cp_ParamLimits

0x7b09,	// (0x000b1b76) call5_swipe_2_pane_cp

0xaa7c,	// (0x000b4ae9) call5_image_pane_cp

0x7b15,	// (0x000b1b82) popup_call5_audio_first_window_cp_ParamLimits

0x7b15,	// (0x000b1b82) popup_call5_audio_first_window_cp

0xe65c,	// (0x000b86c9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65c,	// (0x000b86c9) call5_swipe_1_pane_g1_cp

0xe6c9,	// (0x000b8736) call5_swipe_1_pane_g2_cp

0xe675,	// (0x000b86e2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe675,	// (0x000b86e2) call5_swipe_1_pane_t1_cp

0xe65c,	// (0x000b86c9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65c,	// (0x000b86c9) call5_swipe_2_pane_g1_cp

0xe6d1,	// (0x000b873e) call5_swipe_2_pane_g2_cp

0xe6d9,	// (0x000b8746) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6d9,	// (0x000b8746) call5_swipe_2_pane_t1_cp

0xa453,	// (0x000b44c0) main_sp_fs_email_pane

0xe6ee,	// (0x000b875b) main_sp_fs_listscroll_pane_te

0x7b23,	// (0x000b1b90) popup_sp_fs_action_menu_pane_ParamLimits

0x7b23,	// (0x000b1b90) popup_sp_fs_action_menu_pane

0xcd1c,	// (0x000b6d89) bg_sp_fs_ctrlbar_pane_g1

0xe6f7,	// (0x000b8764) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe700,	// (0x000b876d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe709,	// (0x000b8776) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd1c,	// (0x000b6d89) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x000b9d36) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb01,	// (0x000b6b6e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb01,	// (0x000b6b6e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe712,	// (0x000b877f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe712,	// (0x000b877f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe71e,	// (0x000b878b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe71e,	// (0x000b878b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x000b9d3f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x000b9d3f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe72a,	// (0x000b8797) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe72a,	// (0x000b8797) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7b67,	// (0x000b1bd4) list_medium_line_t2_right_icon_g1

0x7b6f,	// (0x000b1bdc) list_medium_line_t2_right_icon_t1

0x7b7f,	// (0x000b1bec) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x000b9d44) list_medium_line_t2_right_icon_t

0xc914,	// (0x000b6981) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc914,	// (0x000b6981) bg_sp_fs_ctrlbar_pane

0x7bd9,	// (0x000b1c46) main_sp_fs_ctrlbar_button_pane_cp01

0x7be3,	// (0x000b1c50) main_sp_fs_ctrlbar_ddmenu_pane

0xe77c,	// (0x000b87e9) main_sp_fs_ctrlbar_pane_g1

0xe788,	// (0x000b87f5) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x000b9d49) main_sp_fs_ctrlbar_pane_g

0x7c21,	// (0x000b1c8e) main_sp_fs_ctrlbar_pane_t1

0x7c60,	// (0x000b1ccd) main_sp_fs_ctrlbar_pane

0x7c84,	// (0x000b1cf1) main_sp_fs_listscroll_pane_te_cp01

0x7ca4,	// (0x000b1d11) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ca4,	// (0x000b1d11) popup_sp_fs_action_menu_pane_cp01

0xa453,	// (0x000b44c0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa453,	// (0x000b44c0) bg_sp_fs_highlight_list_pane_cp01

0xa5ca,	// (0x000b4637) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa5ca,	// (0x000b4637) sp_fs_action_menu_list_gene_pane_g1

0xe7af,	// (0x000b881c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7af,	// (0x000b881c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b9d57) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b9d57) sp_fs_action_menu_list_gene_pane_g

0xa5d9,	// (0x000b4646) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa5d9,	// (0x000b4646) sp_fs_action_menu_list_gene_pane_t1

0xa5f1,	// (0x000b465e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa5f1,	// (0x000b465e) sp_fs_action_menu_list_gene_pane

0xe7bc,	// (0x000b8829) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7bc,	// (0x000b8829) popup_sp_fs_action_menu_bg_pane

0xa610,	// (0x000b467d) sp_fs_action_menu_list_pane_ParamLimits

0xa610,	// (0x000b467d) sp_fs_action_menu_list_pane

0x7cd4,	// (0x000b1d41) sp_fs_scroll_pane_cp01_ParamLimits

0x7cd4,	// (0x000b1d41) sp_fs_scroll_pane_cp01

0x7cfa,	// (0x000b1d67) list_medium_line_plain_t2_t1

0x7d0a,	// (0x000b1d77) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b9d5c) list_medium_line_plain_t2_t

0x7d1a,	// (0x000b1d87) list_medium_line_plain_t3_t1

0x7d2a,	// (0x000b1d97) list_medium_line_plain_t3_t2

0x7d38,	// (0x000b1da5) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b9d61) list_medium_line_plain_t3_t

0x12ef,	// (0x000ab35c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t2_g2_g1

0x1307,	// (0x000ab374) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000b9298) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000b9298) list_medium_line_x2_t2_g2_g

0x234f,	// (0x000ac3bc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x234f,	// (0x000ac3bc) list_medium_line_x2_t2_g2_t1

0x133c,	// (0x000ab3a9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b9d68) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b9d68) list_medium_line_x2_t2_g2_t

0x12ef,	// (0x000ab35c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t4_g2_g1

0x7d46,	// (0x000b1db3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d46,	// (0x000b1db3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b9d6d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b9d6d) list_medium_line_x2_t4_g2_g

0x7d58,	// (0x000b1dc5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7d58,	// (0x000b1dc5) list_medium_line_x2_t4_g2_t1

0x7d72,	// (0x000b1ddf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7d72,	// (0x000b1ddf) list_medium_line_x2_t4_g2_t2

0x7d88,	// (0x000b1df5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7d88,	// (0x000b1df5) list_medium_line_x2_t4_g2_t3

0x133c,	// (0x000ab3a9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b9d72) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b9d72) list_medium_line_x2_t4_g2_t

0x7d9d,	// (0x000b1e0a) list_medium_line_t3_right_iconx2_g1

0x7b67,	// (0x000b1bd4) list_medium_line_t3_right_iconx2_g2

0x7da5,	// (0x000b1e12) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b9d7b) list_medium_line_t3_right_iconx2_g

0x7daf,	// (0x000b1e1c) list_medium_line_t3_right_iconx2_t1

0x7dbf,	// (0x000b1e2c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b9d82) list_medium_line_t3_right_iconx2_t

0x12ef,	// (0x000ab35c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x3_t4_g4_g1

0x12fb,	// (0x000ab368) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x3_t4_g4_g2

0x1385,	// (0x000ab3f2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1385,	// (0x000ab3f2) list_medium_line_x3_t4_g4_g3

0x7dcd,	// (0x000b1e3a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7dcd,	// (0x000b1e3a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b9d87) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b9d87) list_medium_line_x3_t4_g4_g

0x7dd9,	// (0x000b1e46) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7dd9,	// (0x000b1e46) list_medium_line_x3_t4_g4_t1

0x7df0,	// (0x000b1e5d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7df0,	// (0x000b1e5d) list_medium_line_x3_t4_g4_t2

0x2364,	// (0x000ac3d1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2364,	// (0x000ac3d1) list_medium_line_x3_t4_g4_t3

0x7e0b,	// (0x000b1e78) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e0b,	// (0x000b1e78) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b9d90) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b9d90) list_medium_line_x3_t4_g4_t

0x7e28,	// (0x000b1e95) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e28,	// (0x000b1e95) list_single_dyc_row_text_pane_t1

0x7e71,	// (0x000b1ede) list_single_dyc_row_text_pane_t2_ParamLimits

0x7e71,	// (0x000b1ede) list_single_dyc_row_text_pane_t2

0xa630,	// (0x000b469d) list_single_dyc_row_text_pane_t3_ParamLimits

0xa630,	// (0x000b469d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b9d99) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b9d99) list_single_dyc_row_text_pane_t

0xa654,	// (0x000b46c1) list_single_dyc_row_pane_g1_ParamLimits

0xa654,	// (0x000b46c1) list_single_dyc_row_pane_g1

0xa660,	// (0x000b46cd) list_single_dyc_row_pane_g2_ParamLimits

0xa660,	// (0x000b46cd) list_single_dyc_row_pane_g2

0xa66c,	// (0x000b46d9) list_single_dyc_row_pane_g3_ParamLimits

0xa66c,	// (0x000b46d9) list_single_dyc_row_pane_g3

0xa678,	// (0x000b46e5) list_single_dyc_row_pane_g4_ParamLimits

0xa678,	// (0x000b46e5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b9da6) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b9da6) list_single_dyc_row_pane_g

0xa684,	// (0x000b46f1) list_single_dyc_row_text_pane_ParamLimits

0xa684,	// (0x000b46f1) list_single_dyc_row_text_pane

0x9428,	// (0x000b3495) bg_sp_fs_scroll_pane

0xe7ca,	// (0x000b8837) thumb_sp_fs_scroll_pane

0x6459,	// (0x000b04c6) list_medium_line_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_g1

0x7fa6,	// (0x000b2013) list_medium_line_t1_ParamLimits

0x7fa6,	// (0x000b2013) list_medium_line_t1

0x12ef,	// (0x000ab35c) list_medium_line_x2_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_g1

0x12fb,	// (0x000ab368) list_medium_line_x2_g2_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b9daf) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b9daf) list_medium_line_x2_g

0xa6a3,	// (0x000b4710) list_medium_line_x2_t1_ParamLimits

0xa6a3,	// (0x000b4710) list_medium_line_x2_t1

0x12ef,	// (0x000ab35c) list_medium_line_x3_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x3_g1

0x12fb,	// (0x000ab368) list_medium_line_x3_g2_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b9daf) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b9daf) list_medium_line_x3_g

0xa6a3,	// (0x000b4710) list_medium_line_x3_t1_ParamLimits

0xa6a3,	// (0x000b4710) list_medium_line_x3_t1

0xe7d3,	// (0x000b8840) thumb_sp_fs_scroll_pane_g1

0xe7dc,	// (0x000b8849) thumb_sp_fs_scroll_pane_g2

0xe7e5,	// (0x000b8852) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b9db4) thumb_sp_fs_scroll_pane_g

0xe7d3,	// (0x000b8840) bg_sp_fs_scroll_pane_g1

0xe7dc,	// (0x000b8849) bg_sp_fs_scroll_pane_g2

0xe7e5,	// (0x000b8852) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b9db4) bg_sp_fs_scroll_pane_g

0x12ef,	// (0x000ab35c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12ef,	// (0x000ab35c) list_medium_line_x2_t3_g4_g1

0x1379,	// (0x000ab3e6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1379,	// (0x000ab3e6) list_medium_line_x2_t3_g4_g2

0x12fb,	// (0x000ab368) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12fb,	// (0x000ab368) list_medium_line_x2_t3_g4_g3

0x1307,	// (0x000ab374) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1307,	// (0x000ab374) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000b9314) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000b9314) list_medium_line_x2_t3_g4_g

0x7fbb,	// (0x000b2028) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7fbb,	// (0x000b2028) list_medium_line_x2_t3_g4_t1

0x7fd5,	// (0x000b2042) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7fd5,	// (0x000b2042) list_medium_line_x2_t3_g4_t2

0x133c,	// (0x000ab3a9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x133c,	// (0x000ab3a9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b9dbb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b9dbb) list_medium_line_x2_t3_g4_t

0x6459,	// (0x000b04c6) list_medium_line_g2_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_g2_g1

0x6465,	// (0x000b04d2) list_medium_line_g2_g2_ParamLimits

0x6465,	// (0x000b04d2) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x000b9a69) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x000b9a69) list_medium_line_g2_g

0x7fef,	// (0x000b205c) list_medium_line_g2_t1_ParamLimits

0x7fef,	// (0x000b205c) list_medium_line_g2_t1

0x6459,	// (0x000b04c6) list_medium_line_t3_g2_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_t3_g2_g1

0x6465,	// (0x000b04d2) list_medium_line_t3_g2_g2_ParamLimits

0x6465,	// (0x000b04d2) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x000b9a69) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x000b9a69) list_medium_line_t3_g2_g

0x8004,	// (0x000b2071) list_medium_line_t3_g2_t1_ParamLimits

0x8004,	// (0x000b2071) list_medium_line_t3_g2_t1

0x801e,	// (0x000b208b) list_medium_line_t3_g2_t2_ParamLimits

0x801e,	// (0x000b208b) list_medium_line_t3_g2_t2

0x8034,	// (0x000b20a1) list_medium_line_t3_g2_t3_ParamLimits

0x8034,	// (0x000b20a1) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b9dc2) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b9dc2) list_medium_line_t3_g2_t

0x7b67,	// (0x000b1bd4) list_medium_line_right_icon_g1

0x804e,	// (0x000b20bb) list_medium_line_right_icon_t1

0x6459,	// (0x000b04c6) list_medium_line_t2_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_t2_g1

0x805c,	// (0x000b20c9) list_medium_line_t2_t1_ParamLimits

0x805c,	// (0x000b20c9) list_medium_line_t2_t1

0x8076,	// (0x000b20e3) list_medium_line_t2_t2_ParamLimits

0x8076,	// (0x000b20e3) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b9dc9) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b9dc9) list_medium_line_t2_t

0x6459,	// (0x000b04c6) list_medium_line_t3_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_t3_g1

0x808f,	// (0x000b20fc) list_medium_line_t3_t1_ParamLimits

0x808f,	// (0x000b20fc) list_medium_line_t3_t1

0x80a9,	// (0x000b2116) list_medium_line_t3_t2_ParamLimits

0x80a9,	// (0x000b2116) list_medium_line_t3_t2

0x80bf,	// (0x000b212c) list_medium_line_t3_t3_ParamLimits

0x80bf,	// (0x000b212c) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b9dce) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b9dce) list_medium_line_t3_t

0x6459,	// (0x000b04c6) list_medium_line_g3_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_g3_g1

0x80d4,	// (0x000b2141) list_medium_line_g3_g2_ParamLimits

0x80d4,	// (0x000b2141) list_medium_line_g3_g2

0x6465,	// (0x000b04d2) list_medium_line_g3_g3_ParamLimits

0x6465,	// (0x000b04d2) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b9dd5) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b9dd5) list_medium_line_g3_g

0x80e0,	// (0x000b214d) list_medium_line_g3_t1_ParamLimits

0x80e0,	// (0x000b214d) list_medium_line_g3_t1

0x6459,	// (0x000b04c6) list_medium_line_t2_g3_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_t2_g3_g1

0x80d4,	// (0x000b2141) list_medium_line_t2_g3_g2_ParamLimits

0x80d4,	// (0x000b2141) list_medium_line_t2_g3_g2

0x6465,	// (0x000b04d2) list_medium_line_t2_g3_g3_ParamLimits

0x6465,	// (0x000b04d2) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b9dd5) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b9dd5) list_medium_line_t2_g3_g

0x80f5,	// (0x000b2162) list_medium_line_t2_g3_t1_ParamLimits

0x80f5,	// (0x000b2162) list_medium_line_t2_g3_t1

0x810f,	// (0x000b217c) list_medium_line_t2_g3_t2_ParamLimits

0x810f,	// (0x000b217c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b9ddc) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b9ddc) list_medium_line_t2_g3_t

0x6459,	// (0x000b04c6) list_medium_line_t3_g3_g1_ParamLimits

0x6459,	// (0x000b04c6) list_medium_line_t3_g3_g1

0x80d4,	// (0x000b2141) list_medium_line_t3_g3_g2_ParamLimits

0x80d4,	// (0x000b2141) list_medium_line_t3_g3_g2

0x6465,	// (0x000b04d2) list_medium_line_t3_g3_g3_ParamLimits

0x6465,	// (0x000b04d2) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b9dd5) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b9dd5) list_medium_line_t3_g3_g

0x812d,	// (0x000b219a) list_medium_line_t3_g3_t1_ParamLimits

0x812d,	// (0x000b219a) list_medium_line_t3_g3_t1

0x8146,	// (0x000b21b3) list_medium_line_t3_g3_t2_ParamLimits

0x8146,	// (0x000b21b3) list_medium_line_t3_g3_t2

0x815c,	// (0x000b21c9) list_medium_line_t3_g3_t3_ParamLimits

0x815c,	// (0x000b21c9) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b9de1) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b9de1) list_medium_line_t3_g3_t

0x7d9d,	// (0x000b1e0a) list_medium_line_right_iconx2_g1

0x7b67,	// (0x000b1bd4) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b9de8) list_medium_line_right_iconx2_g

0xa6b9,	// (0x000b4726) list_medium_line_right_iconx2_t1

0x7d9d,	// (0x000b1e0a) list_medium_line_t2_right_iconx2_g1

0x7b67,	// (0x000b1bd4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b9de8) list_medium_line_t2_right_iconx2_g

0x8176,	// (0x000b21e3) list_medium_line_t2_right_iconx2_t1

0x8186,	// (0x000b21f3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b9ded) list_medium_line_t2_right_iconx2_t

0x8198,	// (0x000b2205) list_medium_line_x4_t4_t1

0x81a6,	// (0x000b2213) list_medium_line_x4_t4_t2

0x81b6,	// (0x000b2223) list_medium_line_x4_t4_t3

0x81c6,	// (0x000b2233) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b9df2) list_medium_line_x4_t4_t

0x8219,	// (0x000b2286) tport_appsw_pane_ParamLimits

0x8219,	// (0x000b2286) tport_appsw_pane

0x8231,	// (0x000b229e) tport_contact_pane_ParamLimits

0x8231,	// (0x000b229e) tport_contact_pane

0x8249,	// (0x000b22b6) tport_listscroll_pane_ParamLimits

0x8249,	// (0x000b22b6) tport_listscroll_pane

0x8263,	// (0x000b22d0) cell_tport_appsw_pane_ParamLimits

0x8263,	// (0x000b22d0) cell_tport_appsw_pane

0xd6cb,	// (0x000b7738) tport_appsw_pane_g1_ParamLimits

0xd6cb,	// (0x000b7738) tport_appsw_pane_g1

0xe7ee,	// (0x000b885b) tport_contact_pane_g1

0xe7f7,	// (0x000b8864) tport_contact_pane_t1

0xe805,	// (0x000b8872) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b9dfb) tport_contact_pane_t

0xe813,	// (0x000b8880) list_tport_pane

0xe81c,	// (0x000b8889) scroll_pane_cp_030

0x82ab,	// (0x000b2318) cell_tport_appsw_pane_g1

0x82bb,	// (0x000b2328) cell_tport_appsw_pane_t1

0x82c9,	// (0x000b2336) grid_highlight_pane_cp019

0x82d1,	// (0x000b233e) list_tport_double_graphic_pane_ParamLimits

0x82d1,	// (0x000b233e) list_tport_double_graphic_pane

0xa453,	// (0x000b44c0) list_highlight_pane_cp023_ParamLimits

0xa453,	// (0x000b44c0) list_highlight_pane_cp023

0x82de,	// (0x000b234b) list_tport_double_graphic_pane_g1_ParamLimits

0x82de,	// (0x000b234b) list_tport_double_graphic_pane_g1

0x82eb,	// (0x000b2358) list_tport_double_graphic_pane_t1_ParamLimits

0x82eb,	// (0x000b2358) list_tport_double_graphic_pane_t1

0x8300,	// (0x000b236d) list_tport_double_graphic_pane_t2_ParamLimits

0x8300,	// (0x000b236d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b9e07) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b9e07) list_tport_double_graphic_pane_t

0x9428,	// (0x000b3495) main_cale_note_pane

0x5c09,	// (0x000afc76) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c09,	// (0x000afc76) cell_vitu2_function_top_wide_pane_cp01

0x76cb,	// (0x000b1738) wait_bar_pane_cp05_ParamLimits

0xa453,	// (0x000b44c0) listscroll_cmail_pane

0xe825,	// (0x000b8892) list_cmail_pane

0x8312,	// (0x000b237f) list_cmail_body_pane

0x8327,	// (0x000b2394) list_single_cmail_header_caption_pane

0x833e,	// (0x000b23ab) list_single_cmail_header_detail_pane_ParamLimits

0x833e,	// (0x000b23ab) list_single_cmail_header_detail_pane

0xe835,	// (0x000b88a2) list_single_cmail_header_caption_pane_t1

0x8368,	// (0x000b23d5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8368,	// (0x000b23d5) list_single_cmail_header_detail_pane_g1

0xa6c7,	// (0x000b4734) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa6c7,	// (0x000b4734) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b9e0c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b9e0c) list_single_cmail_header_detail_pane_g

0xa6d3,	// (0x000b4740) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa6d3,	// (0x000b4740) list_single_cmail_header_detail_pane_t1

0xa733,	// (0x000b47a0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa733,	// (0x000b47a0) list_single_cmail_header_editor_pane_bg

0xe2ef,	// (0x000b835c) list_cmail_body_pane_g1

0xe859,	// (0x000b88c6) list_cmail_body_pane_t1

0xd6eb,	// (0x000b7758) list_single_cmail_header_editor_pane_bg_g1

0xacd5,	// (0x000b4d42) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6fb,	// (0x000b7768) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6f3,	// (0x000b7760) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd927,	// (0x000b7994) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd71b,	// (0x000b7788) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd70b,	// (0x000b7778) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd713,	// (0x000b7780) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb5,	// (0x000b4d22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8380,	// (0x000b23ed) calenote_gesture_pane_ParamLimits

0x8380,	// (0x000b23ed) calenote_gesture_pane

0x83a0,	// (0x000b240d) calenote_window_pane_ParamLimits

0x83a0,	// (0x000b240d) calenote_window_pane

0xe867,	// (0x000b88d4) popup_note_window_cp01

0x83bc,	// (0x000b2429) calenote_swipe_1_pane_ParamLimits

0x83bc,	// (0x000b2429) calenote_swipe_1_pane

0x7b09,	// (0x000b1b76) calenote_swipe_2_pane_ParamLimits

0x7b09,	// (0x000b1b76) calenote_swipe_2_pane

0xe65c,	// (0x000b86c9) calenote_swipe_1_pane_g1_ParamLimits

0xe65c,	// (0x000b86c9) calenote_swipe_1_pane_g1

0xe669,	// (0x000b86d6) calenote_swipe_1_pane_g2_ParamLimits

0xe669,	// (0x000b86d6) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x000b9d2c) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x000b9d2c) calenote_swipe_1_pane_g

0xe879,	// (0x000b88e6) calenote_swipe_1_pane_t1_ParamLimits

0xe879,	// (0x000b88e6) calenote_swipe_1_pane_t1

0xe65c,	// (0x000b86c9) calenote_swipe_2_pane_g1_ParamLimits

0xe65c,	// (0x000b86c9) calenote_swipe_2_pane_g1

0xe898,	// (0x000b8905) calenote_swipe_2_pane_g2_ParamLimits

0xe898,	// (0x000b8905) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b9e18) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b9e18) calenote_swipe_2_pane_g

0xe8a4,	// (0x000b8911) calenote_swipe_2_pane_t1_ParamLimits

0xe8a4,	// (0x000b8911) calenote_swipe_2_pane_t1

0x9428,	// (0x000b3495) main_mup_navstr_pane

0x4846,	// (0x000ae8b3) main_mup3_pane_t7_ParamLimits

0x4846,	// (0x000ae8b3) main_mup3_pane_t7

0x9a73,	// (0x000b3ae0) main_mp4_pane_g6_ParamLimits

0x9a73,	// (0x000b3ae0) main_mp4_pane_g6

0x9c35,	// (0x000b3ca2) main_image3_pane_t4_ParamLimits

0x9c35,	// (0x000b3ca2) main_image3_pane_t4

0x83d1,	// (0x000b243e) popup_navstr_preview_pane_ParamLimits

0x83d1,	// (0x000b243e) popup_navstr_preview_pane

0x83e5,	// (0x000b2452) scroll_navstr_pane_ParamLimits

0x83e5,	// (0x000b2452) scroll_navstr_pane

0x9428,	// (0x000b3495) bg_popup_preview_window_pane_cp04

0xe8cb,	// (0x000b8938) popup_navstr_preview_pane_t1

0x83f9,	// (0x000b2466) scroll_navstr_pane_g1_ParamLimits

0x83f9,	// (0x000b2466) scroll_navstr_pane_g1

0x840d,	// (0x000b247a) scroll_navstr_pane_t1_ParamLimits

0x840d,	// (0x000b247a) scroll_navstr_pane_t1

0xe870,	// (0x000b88dd) bg_button_pane_cp014

0xe870,	// (0x000b88dd) bg_button_pane_cp030

0x79e2,	// (0x000b1a4f) list_double_fisheye_pane_g4_ParamLimits

0x79e2,	// (0x000b1a4f) list_double_fisheye_pane_g4

0x79ee,	// (0x000b1a5b) list_double_fisheye_pane_g5_ParamLimits

0x79ee,	// (0x000b1a5b) list_double_fisheye_pane_g5

0xd32a,	// (0x000b7397) sp_fs_scroll_pane_cp03

0xe77c,	// (0x000b87e9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe788,	// (0x000b87f5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x000b9d49) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7c21,	// (0x000b1c8e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe82d,	// (0x000b889a) sp_fs_scroll_pane_cp02

0xa9bb,	// (0x000b4a28) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9bb,	// (0x000b4a28) popup_sp_fs_calendar_preview_list_single_pane

0x9428,	// (0x000b3495) main_cam6_pano_pane

0x9450,	// (0x000b34bd) main_mup3_pane_ParamLimits

0x9428,	// (0x000b3495) main_phacti_pane

0x759e,	// (0x000b160b) bg_button_pane_cp11

0x75b8,	// (0x000b1625) main_mobtv_info_pane_g2_ParamLimits

0x75b8,	// (0x000b1625) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x000b9ca9) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x000b9ca9) main_mobtv_info_pane_g

0x7795,	// (0x000b1802) sc_clock_pane_t5_ParamLimits

0x7795,	// (0x000b1802) sc_clock_pane_t5

0x785d,	// (0x000b18ca) main_radioblah_pane_g1_ParamLimits

0xe58d,	// (0x000b85fa) main_radioblah_pane_t3_ParamLimits

0xe58d,	// (0x000b85fa) main_radioblah_pane_t3

0xe5a5,	// (0x000b8612) main_radioblah_pane_t4_ParamLimits

0xe5a5,	// (0x000b8612) main_radioblah_pane_t4

0x7885,	// (0x000b18f2) main_radioblah_text_pane_ParamLimits

0x7885,	// (0x000b18f2) main_radioblah_text_pane

0x7897,	// (0x000b1904) main_radioblah_info_pane_g1_ParamLimits

0x7930,	// (0x000b199d) main_radioblah_info_pane_t4_ParamLimits

0x7930,	// (0x000b199d) main_radioblah_info_pane_t4

0xa453,	// (0x000b44c0) main_sp_fs_calendar_pane

0x8424,	// (0x000b2491) main_phacti_pane_g1

0x842c,	// (0x000b2499) phacti_note_pane_ParamLimits

0x842c,	// (0x000b2499) phacti_note_pane

0xe8e2,	// (0x000b894f) phacti_term_pane_ParamLimits

0xe8e2,	// (0x000b894f) phacti_term_pane

0xe8f7,	// (0x000b8964) phacti_note_pane_t1_ParamLimits

0xe8f7,	// (0x000b8964) phacti_note_pane_t1

0xa74a,	// (0x000b47b7) phacti_term_pane_g1

0xa752,	// (0x000b47bf) phacti_term_pane_t1_ParamLimits

0xa752,	// (0x000b47bf) phacti_term_pane_t1

0xe90e,	// (0x000b897b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe916,	// (0x000b8983) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b9e22) popup_sp_fs_calendar_preview_list_single_pane_g

0xe91e,	// (0x000b898b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe91e,	// (0x000b898b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe934,	// (0x000b89a1) aid_popup_sp_fs_bg_corner_pane

0xcd1c,	// (0x000b6d89) popup_sp_fs_calendar_preview_bg_pane_g1

0x9428,	// (0x000b3495) popup_sp_fs_calendar_preview_bg_pane

0x1178,	// (0x000ab1e5) popup_sp_fs_calendar_preview_list_pane

0xc914,	// (0x000b6981) bg_main_sp_fs_cale_pane_ParamLimits

0xc914,	// (0x000b6981) bg_main_sp_fs_cale_pane

0xa785,	// (0x000b47f2) listscroll_cale_mrui_pane_ParamLimits

0xa785,	// (0x000b47f2) listscroll_cale_mrui_pane

0xa79a,	// (0x000b4807) listscroll_sp_fs_schedule_track_pane

0xa7a3,	// (0x000b4810) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa7a3,	// (0x000b4810) main_sp_fs_ctrlbar_pane_cp01

0xe93c,	// (0x000b89a9) main_sp_fs_ribbon_pane

0xa7b6,	// (0x000b4823) popup_sp_fs_cale_preview_window

0x84a1,	// (0x000b250e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84a1,	// (0x000b250e) list_single_sp_fs_schedule_track_pane

0xa453,	// (0x000b44c0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa453,	// (0x000b44c0) bg_sp_fs_highlight_list_pane_cp03

0x84b5,	// (0x000b2522) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x84b5,	// (0x000b2522) list_single_sp_fs_schedule_track_pane_g1

0x84c1,	// (0x000b252e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x84c1,	// (0x000b252e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b9e27) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b9e27) list_single_sp_fs_schedule_track_pane_g

0x84cd,	// (0x000b253a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x84cd,	// (0x000b253a) list_single_sp_fs_schedule_track_pane_t1

0x84e7,	// (0x000b2554) sp_fs_schedule_track_pane_ParamLimits

0x84e7,	// (0x000b2554) sp_fs_schedule_track_pane

0xe944,	// (0x000b89b1) sp_fs_schedule_track_pane_g1

0xe94c,	// (0x000b89b9) sp_fs_schedule_track_pane_g2

0xe954,	// (0x000b89c1) sp_fs_schedule_track_pane_g3

0xe95c,	// (0x000b89c9) sp_fs_schedule_track_pane_g4

0xe964,	// (0x000b89d1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b9e2c) sp_fs_schedule_track_pane_g

0xd6eb,	// (0x000b7758) bg_sp_fs_schedule_viewer_highlight_g1

0xacd5,	// (0x000b4d42) bg_sp_fs_schedule_viewer_highlight_g2

0xd6f3,	// (0x000b7760) bg_sp_fs_schedule_viewer_highlight_g3

0xd6fb,	// (0x000b7768) bg_sp_fs_schedule_viewer_highlight_g4

0xd927,	// (0x000b7994) bg_sp_fs_schedule_viewer_highlight_g5

0xd70b,	// (0x000b7778) bg_sp_fs_schedule_viewer_highlight_g6

0xd713,	// (0x000b7780) bg_sp_fs_schedule_viewer_highlight_g7

0xd71b,	// (0x000b7788) bg_sp_fs_schedule_viewer_highlight_g8

0xacb5,	// (0x000b4d22) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b9e37) bg_sp_fs_schedule_viewer_highlight_g

0x9428,	// (0x000b3495) bg_main_sp_fs_ribbon_pane

0x84f8,	// (0x000b2565) main_sp_fs_ribbon_pane_g1

0xe96c,	// (0x000b89d9) main_sp_fs_ribbon_pane_t1

0x8501,	// (0x000b256e) main_sp_fs_ribbon_pane_t2

0xe97b,	// (0x000b89e8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b9e4a) main_sp_fs_ribbon_pane_t

0xe98a,	// (0x000b89f7) main_sp_fs_ribbon_scheduler_pane

0xe992,	// (0x000b89ff) bg_main_sp_fs_ribbon_pane_g1

0xe99b,	// (0x000b8a08) bg_main_sp_fs_ribbon_pane_g2

0xe9a4,	// (0x000b8a11) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b9e51) bg_main_sp_fs_ribbon_pane_g

0xe9ac,	// (0x000b8a19) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b5,	// (0x000b8a22) main_sp_fs_ribbon_scheduler_pane_g2

0xe9be,	// (0x000b8a2b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b9e58) main_sp_fs_ribbon_scheduler_pane_g

0xe9c7,	// (0x000b8a34) list_cale_mrui_pane

0x8510,	// (0x000b257d) sp_fs_scroll_pane_cp07_ParamLimits

0x8510,	// (0x000b257d) sp_fs_scroll_pane_cp07

0x852c,	// (0x000b2599) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x852c,	// (0x000b2599) bg_sp_fs_schedule_viewer_highlight

0xe9d4,	// (0x000b8a41) list_single_sp_fs_schedule_track_pane_cp01

0xe9dc,	// (0x000b8a49) list_sp_fs_schedule_track_pane

0xe9e4,	// (0x000b8a51) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e4,	// (0x000b8a51) sp_fs_scroll_pane_cp06

0xcd1c,	// (0x000b6d89) bgmain_sp_fs_calendar_pane_g1

0x853c,	// (0x000b25a9) list_single_cale_mrui_pane_ParamLimits

0x853c,	// (0x000b25a9) list_single_cale_mrui_pane

0xa7c8,	// (0x000b4835) list_single_cale_mrui_row_pane_ParamLimits

0xa7c8,	// (0x000b4835) list_single_cale_mrui_row_pane

0xa7d5,	// (0x000b4842) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa7d5,	// (0x000b4842) list_single_cale_mrui_row_pane_g1

0xa80d,	// (0x000b487a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa80d,	// (0x000b487a) list_single_cale_mrui_row_pane_t1

0x855d,	// (0x000b25ca) list_single_cale_mrui_row_pane_t2_ParamLimits

0x855d,	// (0x000b25ca) list_single_cale_mrui_row_pane_t2

0xa81f,	// (0x000b488c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa81f,	// (0x000b488c) list_single_cale_mrui_row_pane_t3

0xa84e,	// (0x000b48bb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa84e,	// (0x000b48bb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b9e66) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b9e66) list_single_cale_mrui_row_pane_t

0x85c5,	// (0x000b2632) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x85c5,	// (0x000b2632) list_single_cmail_header_editor_pane_bg_cp01

0x85eb,	// (0x000b2658) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x85eb,	// (0x000b2658) list_single_cmail_header_editor_pane_bg_cp02

0x860b,	// (0x000b2678) main_radioblah_text_pane_t1_ParamLimits

0x860b,	// (0x000b2678) main_radioblah_text_pane_t1

0xea03,	// (0x000b8a70) cam6_indi_pane_cp01

0xea0b,	// (0x000b8a78) cam6_mode_pane_cp01

0xea13,	// (0x000b8a80) cam6_pano_pane

0xea1c,	// (0x000b8a89) cam6_zoom_pane_cp01

0xea24,	// (0x000b8a91) cam6_pano_image_pane

0xea2f,	// (0x000b8a9c) cam6_pano_pane_g1

0xe2ef,	// (0x000b835c) cam6_pano_pane_g2

0xea38,	// (0x000b8aa5) cam6_pano_pane_g3

0xea41,	// (0x000b8aae) cam6_pano_pane_g4

0xd2be,	// (0x000b732b) cam6_pano_pane_g5

0xea4a,	// (0x000b8ab7) cam6_pano_pane_g6

0xea54,	// (0x000b8ac1) cam6_pano_pane_g7

0xea5c,	// (0x000b8ac9) cam6_pano_pane_g8

0xea65,	// (0x000b8ad2) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b9e6f) cam6_pano_pane_g

0x9428,	// (0x000b3495) main_browser_tag_pane

0xe8c3,	// (0x000b8930) grid_navstr_albumart_pane

0xea70,	// (0x000b8add) cell_navstr_albumart_pane_ParamLimits

0xea70,	// (0x000b8add) cell_navstr_albumart_pane

0xea90,	// (0x000b8afd) cell_navstr_albumart_pane_g1

0xc6e5,	// (0x000b6752) cell_navstr_albumart_pane_g2

0xc6f5,	// (0x000b6762) cell_navstr_albumart_pane_g3

0xc6ed,	// (0x000b675a) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b9e82) cell_navstr_albumart_pane_g

0x8626,	// (0x000b2693) bt_list_pane_ParamLimits

0x8626,	// (0x000b2693) bt_list_pane

0x863a,	// (0x000b26a7) bt_list_pane_t1

0x8649,	// (0x000b26b6) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b9e8b) bt_list_pane_t

0x9428,	// (0x000b3495) main_cale_prevew_pane

0x8658,	// (0x000b26c5) popup_cale_preview_window_ParamLimits

0x8658,	// (0x000b26c5) popup_cale_preview_window

0xa453,	// (0x000b44c0) bg_popup_preview_window_pane_cp05_ParamLimits

0xa453,	// (0x000b44c0) bg_popup_preview_window_pane_cp05

0xea98,	// (0x000b8b05) list_cale_preview_pane_ParamLimits

0xea98,	// (0x000b8b05) list_cale_preview_pane

0x8671,	// (0x000b26de) list_double_cale_preview_pane_ParamLimits

0x8671,	// (0x000b26de) list_double_cale_preview_pane

0xd723,	// (0x000b7790) list_single_cale_preview_pane_ParamLimits

0xd723,	// (0x000b7790) list_single_cale_preview_pane

0x8683,	// (0x000b26f0) list_single_cale_preview_pane_g1

0x868b,	// (0x000b26f8) list_single_cale_preview_pane_t1_ParamLimits

0x868b,	// (0x000b26f8) list_single_cale_preview_pane_t1

0x86a0,	// (0x000b270d) list_double_cale_preview_pane_g1

0x86a8,	// (0x000b2715) list_double_cale_preview_pane_t1_ParamLimits

0x86a8,	// (0x000b2715) list_double_cale_preview_pane_t1

0x86bd,	// (0x000b272a) list_double_cale_preview_pane_t2_ParamLimits

0x86bd,	// (0x000b272a) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b9e90) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b9e90) list_double_cale_preview_pane_t

0x9428,	// (0x000b3495) main_ezdial_pane

0xa453,	// (0x000b44c0) main_sp_fs_email_pane_ParamLimits

0x7b91,	// (0x000b1bfe) cmail_ddmenu_btn01_pane_ParamLimits

0x7b91,	// (0x000b1bfe) cmail_ddmenu_btn01_pane

0x7ba4,	// (0x000b1c11) cmail_ddmenu_btn02_pane_ParamLimits

0x7ba4,	// (0x000b1c11) cmail_ddmenu_btn02_pane

0x7bc7,	// (0x000b1c34) cmail_ddmenu_btn03_pane_ParamLimits

0x7bc7,	// (0x000b1c34) cmail_ddmenu_btn03_pane

0x7c60,	// (0x000b1ccd) main_sp_fs_ctrlbar_pane_ParamLimits

0x7c84,	// (0x000b1cf1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8312,	// (0x000b237f) list_cmail_body_pane_ParamLimits

0xe843,	// (0x000b88b0) bg_button_pane_cp12

0xe84c,	// (0x000b88b9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84c,	// (0x000b88b9) list_single_cmail_header_detail_pane_g3

0xa70f,	// (0x000b477c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa70f,	// (0x000b477c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b9e13) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b9e13) list_single_cmail_header_detail_pane_t

0xa767,	// (0x000b47d4) phacti_term_pane_t2_ParamLimits

0xa767,	// (0x000b47d4) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b9e1d) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b9e1d) phacti_term_pane_t

0xeaa4,	// (0x000b8b11) aid_size_list_single_double

0x86d5,	// (0x000b2742) popup_ezdial_listscroll_window

0x86f1,	// (0x000b275e) popup_number_entry_window_cp01

0xaa7c,	// (0x000b4ae9) bg_popup_call_pane_cp09

0xeab0,	// (0x000b8b1d) ezdial_list_pane

0xeab8,	// (0x000b8b25) scroll_pane_cp23

0xc914,	// (0x000b6981) bg_button_pane_cp028_ParamLimits

0xc914,	// (0x000b6981) bg_button_pane_cp028

0x86ff,	// (0x000b276c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x86ff,	// (0x000b276c) cmail_ddmenu_btn01_pane_g1

0x870b,	// (0x000b2778) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x870b,	// (0x000b2778) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b9e95) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b9e95) cmail_ddmenu_btn01_pane_g

0xeac0,	// (0x000b8b2d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac0,	// (0x000b8b2d) cmail_ddmenu_btn01_pane_t1

0xc914,	// (0x000b6981) bg_button_pane_cp029_ParamLimits

0xc914,	// (0x000b6981) bg_button_pane_cp029

0x8717,	// (0x000b2784) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8717,	// (0x000b2784) cmail_ddmenu_btn02_pane_g1

0x872f,	// (0x000b279c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x872f,	// (0x000b279c) cmail_ddmenu_btn02_pane_t1

0xa453,	// (0x000b44c0) bg_button_pane_cp031_ParamLimits

0xa453,	// (0x000b44c0) bg_button_pane_cp031

0x8717,	// (0x000b2784) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8717,	// (0x000b2784) cmail_ddmenu_btn03_pane_g1

0x872f,	// (0x000b279c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x872f,	// (0x000b279c) cmail_ddmenu_btn03_pane_t1

0x53ef,	// (0x000af45c) cell_dialer2_keypad_pane_t1_ParamLimits

0x5409,	// (0x000af476) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5409,	// (0x000af476) cell_dialer2_keypad_pane_t1_copy1

0x73b3,	// (0x000b1420) ncimui_group_button_pane

0xa453,	// (0x000b44c0) main_sp_fs_calendar_pane_ParamLimits

0x8327,	// (0x000b2394) list_single_cmail_header_caption_pane_ParamLimits

0xa77c,	// (0x000b47e9) aid_recal_txt_sm_pane

0x9428,	// (0x000b3495) mian_recal_day_pane

0xa7b6,	// (0x000b4823) popup_sp_fs_cale_preview_window_ParamLimits

0xead5,	// (0x000b8b42) list_recal_day_pane

0xa898,	// (0x000b4905) list_single_recal_day_pane_ParamLimits

0xa898,	// (0x000b4905) list_single_recal_day_pane

0xeafc,	// (0x000b8b69) list_single_recal_day_pane_g1_ParamLimits

0xeafc,	// (0x000b8b69) list_single_recal_day_pane_g1

0xa8aa,	// (0x000b4917) list_single_recal_day_pane_g2_ParamLimits

0xa8aa,	// (0x000b4917) list_single_recal_day_pane_g2

0xa8b6,	// (0x000b4923) list_single_recal_day_pane_g3_ParamLimits

0xa8b6,	// (0x000b4923) list_single_recal_day_pane_g3

0x8753,	// (0x000b27c0) list_single_recal_day_pane_g4_ParamLimits

0x8753,	// (0x000b27c0) list_single_recal_day_pane_g4

0xa8c2,	// (0x000b492f) list_single_recal_day_pane_g5_ParamLimits

0xa8c2,	// (0x000b492f) list_single_recal_day_pane_g5

0xa8ce,	// (0x000b493b) list_single_recal_day_pane_g6_ParamLimits

0xa8ce,	// (0x000b493b) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b9ea4) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b9ea4) list_single_recal_day_pane_g

0xa8e2,	// (0x000b494f) list_single_recal_day_pane_t1

0xa8f4,	// (0x000b4961) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000b9eaf) list_single_recal_day_pane_t

0x876b,	// (0x000b27d8) ncimui_query_button_pane_ParamLimits

0x876b,	// (0x000b27d8) ncimui_query_button_pane

0x877b,	// (0x000b27e8) ncimui_query_button_pane_t1_ParamLimits

0x877b,	// (0x000b27e8) ncimui_query_button_pane_t1

0xeb08,	// (0x000b8b75) ncimui_query_button_pane_t2_ParamLimits

0xeb08,	// (0x000b8b75) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000b9eb4) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000b9eb4) ncimui_query_button_pane_t

0x878e,	// (0x000b27fb) query_button_pane_ParamLimits

0x878e,	// (0x000b27fb) query_button_pane

0x9428,	// (0x000b3495) bg_button_pane_cp0028

0xeb1b,	// (0x000b8b88) query_button_pane_t1

0x348b,	// (0x000ad4f8) main_tport_pane_ParamLimits

0x81d6,	// (0x000b2243) bg_popup_window_pane_cp01_ParamLimits

0x81d6,	// (0x000b2243) bg_popup_window_pane_cp01

0x81f1,	// (0x000b225e) heading_pane_cp08_ParamLimits

0x81f1,	// (0x000b225e) heading_pane_cp08

0x8204,	// (0x000b2271) heading_pane_cp07_ParamLimits

0x8204,	// (0x000b2271) heading_pane_cp07

0x82ab,	// (0x000b2318) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b9e00) cell_tport_appsw_pane_g

0xa3d2,	// (0x000b443f) input_candi_list_open_g1

0xae98,	// (0x000b4f05) list_cale_time_pane_g6_ParamLimits

0xae98,	// (0x000b4f05) list_cale_time_pane_g6

0x4253,	// (0x000ae2c0) aid_size_touch_calib_1_ParamLimits

0x4253,	// (0x000ae2c0) aid_size_touch_calib_1

0x4265,	// (0x000ae2d2) aid_size_touch_calib_2_ParamLimits

0x4265,	// (0x000ae2d2) aid_size_touch_calib_2

0x427d,	// (0x000ae2ea) aid_size_touch_calib_3_ParamLimits

0x427d,	// (0x000ae2ea) aid_size_touch_calib_3

0x429b,	// (0x000ae308) aid_size_touch_calib_4_ParamLimits

0x429b,	// (0x000ae308) aid_size_touch_calib_4

0x42b3,	// (0x000ae320) main_touch_calib_button_group_pane_ParamLimits

0x42b3,	// (0x000ae320) main_touch_calib_button_group_pane

0x42cb,	// (0x000ae338) main_touch_calib_pane_g1_ParamLimits

0x42dd,	// (0x000ae34a) main_touch_calib_pane_g2_ParamLimits

0x42ef,	// (0x000ae35c) main_touch_calib_pane_g3_ParamLimits

0x4301,	// (0x000ae36e) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x000b97b6) main_touch_calib_pane_g_ParamLimits

0x4313,	// (0x000ae380) main_touch_calib_pane_t1_ParamLimits

0x432d,	// (0x000ae39a) main_touch_calib_pane_t2_ParamLimits

0x4347,	// (0x000ae3b4) main_touch_calib_pane_t3_ParamLimits

0x435b,	// (0x000ae3c8) main_touch_calib_pane_t4_ParamLimits

0x436f,	// (0x000ae3dc) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x000b97bf) main_touch_calib_pane_t_ParamLimits

0xd061,	// (0x000b70ce) list_single_fp_cale_pane_g3_ParamLimits

0xd061,	// (0x000b70ce) list_single_fp_cale_pane_g3

0x9450,	// (0x000b34bd) bg_button_pane_cp012_ParamLimits

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp03_ParamLimits

0x640f,	// (0x000b047c) cell_vitu2_function_top_pane_g1_ParamLimits

0x9450,	// (0x000b34bd) bg_vkb2_func_pane_cp04_ParamLimits

0x733e,	// (0x000b13ab) main_ncimui_button_group_pane_ParamLimits

0x733e,	// (0x000b13ab) main_ncimui_button_group_pane

0x739e,	// (0x000b140b) main_ncimui_pane_t3_ParamLimits

0x739e,	// (0x000b140b) main_ncimui_pane_t3

0xe8d9,	// (0x000b8946) phacti_button_group_pane

0xeaa4,	// (0x000b8b11) aid_size_list_single_double_ParamLimits

0x86d5,	// (0x000b2742) popup_ezdial_listscroll_window_ParamLimits

0x86f1,	// (0x000b275e) popup_number_entry_window_cp01_ParamLimits

0x87a1,	// (0x000b280e) phacti_button_pane_ParamLimits

0x87a1,	// (0x000b280e) phacti_button_pane

0x9428,	// (0x000b3495) bg_button_pane_cp14

0xeb29,	// (0x000b8b96) phacti_button_pane_t1

0x87b2,	// (0x000b281f) main_touch_calib_button_pane_ParamLimits

0x87b2,	// (0x000b281f) main_touch_calib_button_pane

0xa337,	// (0x000b43a4) bg_button_pane_cp18_ParamLimits

0xa337,	// (0x000b43a4) bg_button_pane_cp18

0xeb37,	// (0x000b8ba4) main_touch_calib_button_pane_t1_ParamLimits

0xeb37,	// (0x000b8ba4) main_touch_calib_button_pane_t1

0xeb4d,	// (0x000b8bba) main_touch_calib_button_pane_t2_ParamLimits

0xeb4d,	// (0x000b8bba) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000b9eb9) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000b9eb9) main_touch_calib_button_pane_t

0x9428,	// (0x000b3495) cell_ncimui_button_pane

0x9428,	// (0x000b3495) bg_button_pane_cp032

0xeb6b,	// (0x000b8bd8) cell_ncimui_button_pane_t1

0x9c15,	// (0x000b3c82) image3_infobar_pane_ParamLimits

0x9c15,	// (0x000b3c82) image3_infobar_pane

0x77c1,	// (0x000b182e) fs_bigclock_status_pane_ParamLimits

0x77c1,	// (0x000b182e) fs_bigclock_status_pane

0x77ce,	// (0x000b183b) main_fs_bigclock_clock_pane_ParamLimits

0x77ce,	// (0x000b183b) main_fs_bigclock_clock_pane

0x77ec,	// (0x000b1859) main_fs_bigclock_indi_pane_ParamLimits

0x77ec,	// (0x000b1859) main_fs_bigclock_indi_pane

0x781e,	// (0x000b188b) main_fs_bigclock_swipe_pane_ParamLimits

0x781e,	// (0x000b188b) main_fs_bigclock_swipe_pane

0x9428,	// (0x000b3495) main_fs_clock_dumped_data

0xe3fc,	// (0x000b8469) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fc,	// (0x000b8469) list_single_fs_bigclock_indicator_pane_g1

0xe418,	// (0x000b8485) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe418,	// (0x000b8485) list_single_fs_bigclock_indicator_pane_g2

0xe432,	// (0x000b849f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe432,	// (0x000b849f) list_single_fs_bigclock_indicator_pane_g3

0xe44c,	// (0x000b84b9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44c,	// (0x000b84b9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x000b9cdd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x000b9cdd) list_single_fs_bigclock_indicator_pane_g

0xe477,	// (0x000b84e4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe477,	// (0x000b84e4) list_single_fs_bigclock_indicator_pane_t1

0xe49f,	// (0x000b850c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49f,	// (0x000b850c) list_single_fs_bigclock_indicator_pane_t2

0xe4c7,	// (0x000b8534) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c7,	// (0x000b8534) list_single_fs_bigclock_indicator_pane_t3

0xe4ef,	// (0x000b855c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4ef,	// (0x000b855c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x000b9ce8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x000b9ce8) list_single_fs_bigclock_indicator_pane_t

0xeb79,	// (0x000b8be6) image3_infobar_fav_pane_ParamLimits

0xeb79,	// (0x000b8be6) image3_infobar_fav_pane

0xeb89,	// (0x000b8bf6) image3_infobar_loc_pane_ParamLimits

0xeb89,	// (0x000b8bf6) image3_infobar_loc_pane

0xeb9d,	// (0x000b8c0a) image3_infobar_time_pane_ParamLimits

0xeb9d,	// (0x000b8c0a) image3_infobar_time_pane

0xcd1c,	// (0x000b6d89) image3_infobar_time_pane_g1

0xebad,	// (0x000b8c1a) image3_infobar_time_pane_t1

0xcd1c,	// (0x000b6d89) image3_infobar_loc_pane_g1

0xebbb,	// (0x000b8c28) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000b9ebe) image3_infobar_loc_pane_g

0xebc3,	// (0x000b8c30) image3_infobar_loc_pane_t1

0xcd1c,	// (0x000b6d89) image3_infobar_fav_pane_g1

0xebd1,	// (0x000b8c3e) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000b9ec3) image3_infobar_fav_pane_g

0xebd9,	// (0x000b8c46) fs_bigclock_status_battery_pane

0xebe2,	// (0x000b8c4f) fs_bigclock_status_signal_pane

0xebeb,	// (0x000b8c58) fs_bigclock_status_title_pane

0xebf4,	// (0x000b8c61) fs_bigclock_status_signal_pane_g1

0xebfd,	// (0x000b8c6a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000b9ec8) fs_bigclock_status_signal_pane_g

0xec05,	// (0x000b8c72) fs_bigclock_status_battery_pane_g1

0xec0e,	// (0x000b8c7b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000b9ecd) fs_bigclock_status_battery_pane_g

0xec16,	// (0x000b8c83) fs_bigclock_status_title_pane_t1

0x87c7,	// (0x000b2834) main_fs_bigclock_clock_pane_g1

0x87c7,	// (0x000b2834) main_fs_bigclock_clock_pane_g2

0x87d8,	// (0x000b2845) main_fs_bigclock_clock_pane_g3

0x87d8,	// (0x000b2845) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000b9ed2) main_fs_bigclock_clock_pane_g

0x87eb,	// (0x000b2858) main_fs_bigclock_clock_pane_t1

0x8801,	// (0x000b286e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000b9edb) main_fs_bigclock_clock_pane_t

0xec24,	// (0x000b8c91) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec24,	// (0x000b8c91) list_single_fs_bigclock_indicator_pane

0xec35,	// (0x000b8ca2) list_single_fs_bigclock_pane_ParamLimits

0xec35,	// (0x000b8ca2) list_single_fs_bigclock_pane

0xec5b,	// (0x000b8cc8) main_fs_bigclock_indicator_pane_t1

0xec6a,	// (0x000b8cd7) list_single_fs_bigclock_pane_g1

0xec72,	// (0x000b8cdf) list_single_fs_bigclock_pane_t1

0xcd1c,	// (0x000b6d89) main_fs_bigclock_swipe_pane_g1

0xecb5,	// (0x000b8d22) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000b9eec) main_fs_bigclock_swipe_pane_g

0xecbd,	// (0x000b8d2a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbd,	// (0x000b8d2a) main_fs_bigclock_swipe_pane_t1

0x238e,	// (0x000ac3fb) call_type_pane_ParamLimits

0x9428,	// (0x000b3495) main_btmg_pane

0xa801,	// (0x000b486e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa801,	// (0x000b486e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b9e5f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b9e5f) list_single_cale_mrui_row_pane_g

0xa887,	// (0x000b48f4) list_recal_vselct_arw_lo_pane

0xeaf4,	// (0x000b8b61) list_recal_vselct_arw_up_pane

0xa88f,	// (0x000b48fc) list_recal_vselct_pane

0x885b,	// (0x000b28c8) btmg_button_pane

0x8865,	// (0x000b28d2) main_btmg_pane_g1

0x9428,	// (0x000b3495) bg_button_pane_cp044

0xecda,	// (0x000b8d47) btmg_button_pane_t1

0xc900,	// (0x000b696d) aid_listscroll_gen

0xa453,	// (0x000b44c0) main_cntbar_detail_pane

0xe825,	// (0x000b8892) list_cmail_folder_pane

0xd32a,	// (0x000b7397) sp_fs_scroll_pane_cp03_ParamLimits

0x886f,	// (0x000b28dc) list_single_fs_dyc_pane_cp01_ParamLimits

0x886f,	// (0x000b28dc) list_single_fs_dyc_pane_cp01

0xece8,	// (0x000b8d55) aid_size_cmail_indent

0xa906,	// (0x000b4973) list_single_dyc_row_pane_cp01

0x88b7,	// (0x000b2924) cntbar_detail_list_pane_ParamLimits

0x88b7,	// (0x000b2924) cntbar_detail_list_pane

0x8903,	// (0x000b2970) main_cntbar_detail_cont_pane_ParamLimits

0x8903,	// (0x000b2970) main_cntbar_detail_cont_pane

0xd32a,	// (0x000b7397) scroll_pane_cp032_ParamLimits

0xd32a,	// (0x000b7397) scroll_pane_cp032

0x8917,	// (0x000b2984) cntbar_detail_list_event_pane_ParamLimits

0x8917,	// (0x000b2984) cntbar_detail_list_event_pane

0x88c7,	// (0x000b2934) cntbar_detail_list_shct_pane

0xad23,	// (0x000b4d90) aid_list_gen

0xecf1,	// (0x000b8d5e) aid_scroll

0xecfa,	// (0x000b8d67) aid_size_touch_scroll_bar

0x6b15,	// (0x000b0b82) aid_list_double

0x6b03,	// (0x000b0b70) aid_list_single

0x6b03,	// (0x000b0b70) aid_list_single_lg

0x8927,	// (0x000b2994) aid_list_z_g_a_sm

0x892f,	// (0x000b299c) aid_list_z_g_d

0x8937,	// (0x000b29a4) aid_txt_z_prm

0x8945,	// (0x000b29b2) aid_txt_z_prm_cp01

0x8953,	// (0x000b29c0) aid_txt_z_sec

0x8961,	// (0x000b29ce) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8961,	// (0x000b29ce) main_cntbar_detail_cont_pane_g1

0x8975,	// (0x000b29e2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8975,	// (0x000b29e2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000b9ef1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000b9ef1) main_cntbar_detail_cont_pane_g

0xed03,	// (0x000b8d70) main_cntbar_detail_cont_pane_t1

0xed11,	// (0x000b8d7e) main_cntbar_detail_cont_pane_t2

0xed1f,	// (0x000b8d8c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000b9ef6) main_cntbar_detail_cont_pane_t

0x8985,	// (0x000b29f2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8985,	// (0x000b29f2) cell_cntbar_detail_list_shct_pane

0xed2d,	// (0x000b8d9a) cntbar_detail_list_shct_pane_g1

0xed36,	// (0x000b8da3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000b9efd) cntbar_detail_list_shct_pane_g

0x8999,	// (0x000b2a06) cntbar_detail_list_event_pane_g1_ParamLimits

0x8999,	// (0x000b2a06) cntbar_detail_list_event_pane_g1

0x89a5,	// (0x000b2a12) cntbar_detail_list_event_pane_g2_ParamLimits

0x89a5,	// (0x000b2a12) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000b9f02) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000b9f02) cntbar_detail_list_event_pane_g

0x8a11,	// (0x000b2a7e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a11,	// (0x000b2a7e) cntbar_detail_list_event_pane_t1

0x8a26,	// (0x000b2a93) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a26,	// (0x000b2a93) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000b9f0f) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000b9f0f) cntbar_detail_list_event_pane_t

0xcd1c,	// (0x000b6d89) cell_cntbar_detail_list_shct_pane_g1

0xb48f,	// (0x000b54fc) navi_pane_mv_g3

0xa453,	// (0x000b44c0) main_cntbar_detail_pane_ParamLimits

0x9428,	// (0x000b3495) main_notif_wgt_pane

0x9a01,	// (0x000b3a6e) aid_tch_main_mp4_pane_g4

0x9c0d,	// (0x000b3c7a) popup_slider_window_cp02

0xa87d,	// (0x000b48ea) list_recal_day_event_pane

0x8885,	// (0x000b28f2) cntbar_detail_btn_pane_ParamLimits

0x8885,	// (0x000b28f2) cntbar_detail_btn_pane

0x889e,	// (0x000b290b) cntbar_detail_btn_pane_cp01_ParamLimits

0x889e,	// (0x000b290b) cntbar_detail_btn_pane_cp01

0x88c7,	// (0x000b2934) cntbar_detail_list_shct_pane_ParamLimits

0x88d7,	// (0x000b2944) cntbar_detail_pane_g1_ParamLimits

0x88d7,	// (0x000b2944) cntbar_detail_pane_g1

0x88e7,	// (0x000b2954) cntbar_detail_pane_t1_ParamLimits

0x88e7,	// (0x000b2954) cntbar_detail_pane_t1

0x89b1,	// (0x000b2a1e) cntbar_detail_list_event_pane_g3_ParamLimits

0x89b1,	// (0x000b2a1e) cntbar_detail_list_event_pane_g3

0x89c9,	// (0x000b2a36) cntbar_detail_list_event_pane_g4_ParamLimits

0x89c9,	// (0x000b2a36) cntbar_detail_list_event_pane_g4

0x89e1,	// (0x000b2a4e) cntbar_detail_list_event_pane_g5_ParamLimits

0x89e1,	// (0x000b2a4e) cntbar_detail_list_event_pane_g5

0x89f9,	// (0x000b2a66) cntbar_detail_list_event_pane_g6_ParamLimits

0x89f9,	// (0x000b2a66) cntbar_detail_list_event_pane_g6

0x8a3b,	// (0x000b2aa8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a3b,	// (0x000b2aa8) cntbar_detail_list_event_pane_t3

0x8a4d,	// (0x000b2aba) popup_notif_wgt_window_ParamLimits

0x8a4d,	// (0x000b2aba) popup_notif_wgt_window

0x8a66,	// (0x000b2ad3) popup_submenu_window_cp01_ParamLimits

0x8a66,	// (0x000b2ad3) popup_submenu_window_cp01

0xaa7c,	// (0x000b4ae9) bg_popup_window_pane_cp10

0xed3f,	// (0x000b8dac) listscroll_notif_wgt_pane

0xed51,	// (0x000b8dbe) list_notif_wgt_window

0xed5a,	// (0x000b8dc7) scroll_pane_cp033

0x8a78,	// (0x000b2ae5) list_notif_wgt_row_pane_ParamLimits

0x8a78,	// (0x000b2ae5) list_notif_wgt_row_pane

0xed63,	// (0x000b8dd0) aid_size_list_notif_wgt_del

0xed70,	// (0x000b8ddd) list_notif_wgt_row_pane_g1

0xed7c,	// (0x000b8de9) list_notif_wgt_row_pane_g2

0xed8b,	// (0x000b8df8) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000b9f16) list_notif_wgt_row_pane_g

0xed98,	// (0x000b8e05) list_notif_wgt_row_pane_t1

0xedae,	// (0x000b8e1b) list_notif_wgt_row_pane_t2

0xedc0,	// (0x000b8e2d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000b9f1d) list_notif_wgt_row_pane_t

0xd941,	// (0x000b79ae) list_recal_day_event_pane_g1

0xedd2,	// (0x000b8e3f) list_recal_day_event_pane_t1

0x9428,	// (0x000b3495) bg_button_pane_cp045

0x8a88,	// (0x000b2af5) cntbar_detail_btn_pane_t1

0xc914,	// (0x000b6981) main_callh_pane_ParamLimits

0xc914,	// (0x000b6981) main_callh_pane

0x9428,	// (0x000b3495) main_coverflow0_pane

0x9428,	// (0x000b3495) main_wgtman_pane

0x7836,	// (0x000b18a3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7836,	// (0x000b18a3) main_fs_bigclock_unlock_btn_pane

0x82a3,	// (0x000b2310) bg_button_pane_cp16

0x82b3,	// (0x000b2320) cell_tport_appsw_pane_g3

0x8a96,	// (0x000b2b03) cf0_flow_pane_ParamLimits

0x8a96,	// (0x000b2b03) cf0_flow_pane

0xede1,	// (0x000b8e4e) listscroll_cf0_pane

0xedec,	// (0x000b8e59) main_cf0_pane_g1

0x8aab,	// (0x000b2b18) main_cf0_pane_t1_ParamLimits

0x8aab,	// (0x000b2b18) main_cf0_pane_t1

0x8ac2,	// (0x000b2b2f) main_cf0_pane_t2_ParamLimits

0x8ac2,	// (0x000b2b2f) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000b9f29) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000b9f29) main_cf0_pane_t

0xedfe,	// (0x000b8e6b) scroll_pane_cp11

0x8ad9,	// (0x000b2b46) cf0_flow_pane_g1

0x8ae1,	// (0x000b2b4e) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000b9f2e) cf0_flow_pane_g

0x8ae9,	// (0x000b2b56) cf0_flow_pane_t1

0x9428,	// (0x000b3495) main_call6_pane

0x9428,	// (0x000b3495) main_calllock_pane

0x8af7,	// (0x000b2b64) call6_btn_grp_pane_ParamLimits

0x8af7,	// (0x000b2b64) call6_btn_grp_pane

0x8b11,	// (0x000b2b7e) call6_pane_g1_ParamLimits

0x8b11,	// (0x000b2b7e) call6_pane_g1

0x8b27,	// (0x000b2b94) popup_call6_1st_window_ParamLimits

0x8b27,	// (0x000b2b94) popup_call6_1st_window

0x8b38,	// (0x000b2ba5) popup_call6_2nd_window_ParamLimits

0x8b38,	// (0x000b2ba5) popup_call6_2nd_window

0x8b49,	// (0x000b2bb6) cell_call6_btn_pane_ParamLimits

0x8b49,	// (0x000b2bb6) cell_call6_btn_pane

0xaa7c,	// (0x000b4ae9) bg_popup_call2_in_pane_cp03

0xee09,	// (0x000b8e76) popup_call6_1st_window_g1

0xee11,	// (0x000b8e7e) popup_call6_1st_window_g2

0xee19,	// (0x000b8e86) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000b9f33) popup_call6_1st_window_g

0xee21,	// (0x000b8e8e) popup_call6_1st_window_t1

0xee30,	// (0x000b8e9d) popup_call6_1st_window_t2

0xee3e,	// (0x000b8eab) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000b9f3a) popup_call6_1st_window_t

0xaa7c,	// (0x000b4ae9) bg_popup_call2_in_pane_cp04

0xee09,	// (0x000b8e76) popup_call6_2nd_window_g1

0xee11,	// (0x000b8e7e) popup_call6_2nd_window_g2

0xee19,	// (0x000b8e86) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000b9f33) popup_call6_2nd_window_g

0xee21,	// (0x000b8e8e) popup_call6_2nd_window_t1

0x945e,	// (0x000b34cb) bg_button_pane_cp15

0x9e8c,	// (0x000b3ef9) cell_call6_btn_pane_g1

0x9e95,	// (0x000b3f02) cell_call6_btn_pane_t1

0x8b5d,	// (0x000b2bca) listscroll_wgtman_pane_ParamLimits

0x8b5d,	// (0x000b2bca) listscroll_wgtman_pane

0x8b7e,	// (0x000b2beb) wgtman_btn_pane_ParamLimits

0x8b7e,	// (0x000b2beb) wgtman_btn_pane

0xb283,	// (0x000b52f0) aid_scroll_copy1

0xee4c,	// (0x000b8eb9) list_wgtman_pane

0x8bc1,	// (0x000b2c2e) wgtman_btn_pane_g1_ParamLimits

0x8bc1,	// (0x000b2c2e) wgtman_btn_pane_g1

0x8bed,	// (0x000b2c5a) wgtman_btn_pane_t1_ParamLimits

0x8bed,	// (0x000b2c5a) wgtman_btn_pane_t1

0xee56,	// (0x000b8ec3) wgtman_btn_pane_t2_ParamLimits

0xee56,	// (0x000b8ec3) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000b9f41) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000b9f41) wgtman_btn_pane_t

0x8c2a,	// (0x000b2c97) listrow_wgtman_pane_ParamLimits

0x8c2a,	// (0x000b2c97) listrow_wgtman_pane

0x8c3c,	// (0x000b2ca9) listrow_wgtman_pane_g1

0x8c49,	// (0x000b2cb6) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000b9f46) listrow_wgtman_pane_g

0x8c67,	// (0x000b2cd4) listrow_wgtman_pane_t1

0x8c7f,	// (0x000b2cec) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000b9f4b) listrow_wgtman_pane_t

0x8ca5,	// (0x000b2d12) wait_bar_pane_cp09

0xee6d,	// (0x000b8eda) main_calllock_btn_pane

0xee77,	// (0x000b8ee4) main_calllock_pane_g1

0x9428,	// (0x000b3495) bg_button_pane_cp17

0xee83,	// (0x000b8ef0) main_calllock_btn_pane_g1

0xee8c,	// (0x000b8ef9) main_calllock_btn_pane_t1

0x9428,	// (0x000b3495) main_dialer3_pane

0x9428,	// (0x000b3495) main_fmrd2_pane

0xcd1c,	// (0x000b6d89) main_fs_bigclock_unlock_btn_pane_g1

0x8cbf,	// (0x000b2d2c) main_fs_bigclock_unlock_btn_pane_t1

0x8ccd,	// (0x000b2d3a) area_fmrd2_info_pane_ParamLimits

0x8ccd,	// (0x000b2d3a) area_fmrd2_info_pane

0x8cde,	// (0x000b2d4b) area_fmrd2_visual_pane_ParamLimits

0x8cde,	// (0x000b2d4b) area_fmrd2_visual_pane

0x8cec,	// (0x000b2d59) fmrd2_indi_pane_ParamLimits

0x8cec,	// (0x000b2d59) fmrd2_indi_pane

0x8cf9,	// (0x000b2d66) area_fmrd2_visual_pane_g1

0x8d01,	// (0x000b2d6e) area_fmrd2_visual_pane_t1

0x8d11,	// (0x000b2d7e) area_fmrd2_visual_pane_t2

0x8d21,	// (0x000b2d8e) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000b9f55) area_fmrd2_visual_pane_t

0x8d31,	// (0x000b2d9e) area_fmrd2_info_pane_g1

0x8d39,	// (0x000b2da6) area_fmrd2_info_pane_t1

0x8d49,	// (0x000b2db6) area_fmrd2_info_pane_t2

0x8d59,	// (0x000b2dc6) area_fmrd2_info_pane_t3

0x8d69,	// (0x000b2dd6) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000b9f5c) area_fmrd2_info_pane_t

0x8d77,	// (0x000b2de4) fmrd2_indi_pane_t1

0x8d87,	// (0x000b2df4) fmrd2_indi_pane_t2

0x8d97,	// (0x000b2e04) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000b9f65) fmrd2_indi_pane_t

0xe45b,	// (0x000b84c8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45b,	// (0x000b84c8) list_single_fs_bigclock_indicator_pane_g5

0xe50c,	// (0x000b8579) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe50c,	// (0x000b8579) list_single_fs_bigclock_indicator_pane_t5

0x8440,	// (0x000b24ad) aid_cell_bcale_month_pane_ParamLimits

0x8440,	// (0x000b24ad) aid_cell_bcale_month_pane

0x845e,	// (0x000b24cb) bcale_month_pane_ParamLimits

0x845e,	// (0x000b24cb) bcale_month_pane

0x8482,	// (0x000b24ef) bcale_preview_pane_ParamLimits

0x8482,	// (0x000b24ef) bcale_preview_pane

0xec72,	// (0x000b8cdf) list_single_fs_bigclock_pane_t1_ParamLimits

0xec91,	// (0x000b8cfe) list_single_fs_bigclock_pane_t2_ParamLimits

0xec91,	// (0x000b8cfe) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000b9ee7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000b9ee7) list_single_fs_bigclock_pane_t

0x8cb7,	// (0x000b2d24) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000b9f50) main_fs_bigclock_unlock_btn_pane_g

0x8da7,	// (0x000b2e14) aid_dia3_key_size_ParamLimits

0x8da7,	// (0x000b2e14) aid_dia3_key_size

0x8db6,	// (0x000b2e23) aid_dia3_listrow_size_ParamLimits

0x8db6,	// (0x000b2e23) aid_dia3_listrow_size

0x8dcb,	// (0x000b2e38) dia3_keypad_fun_pane_ParamLimits

0x8dcb,	// (0x000b2e38) dia3_keypad_fun_pane

0x8de7,	// (0x000b2e54) dia3_keypad_num_pane_ParamLimits

0x8de7,	// (0x000b2e54) dia3_keypad_num_pane

0x8e02,	// (0x000b2e6f) dia3_listscroll_pane_ParamLimits

0x8e02,	// (0x000b2e6f) dia3_listscroll_pane

0x8e15,	// (0x000b2e82) dia3_numentry_pane_ParamLimits

0x8e15,	// (0x000b2e82) dia3_numentry_pane

0xee9b,	// (0x000b8f08) dia3_list_pane

0xeea6,	// (0x000b8f13) scroll_pane_cp12

0x9428,	// (0x000b3495) bg_dia3_numentry_pane

0x8e29,	// (0x000b2e96) dia3_numentry_pane_t1

0x8e38,	// (0x000b2ea5) cell_dia3_key_num_pane

0x8e40,	// (0x000b2ead) cell_dia3_key0_fun_pane_ParamLimits

0x8e40,	// (0x000b2ead) cell_dia3_key0_fun_pane

0x8e54,	// (0x000b2ec1) cell_dia3_key1_fun_pane_ParamLimits

0x8e54,	// (0x000b2ec1) cell_dia3_key1_fun_pane

0x8e6c,	// (0x000b2ed9) dia3_listrow_pane

0xe1ae,	// (0x000b821b) bg_dia3_numentry_pane_g1

0x9428,	// (0x000b3495) bg_button_pane_cp21

0xeeb1,	// (0x000b8f1e) cell_dia3_key_num_pane_t1

0xeebf,	// (0x000b8f2c) cell_dia3_key_num_pane_t2

0xeece,	// (0x000b8f3b) cell_dia3_key_num_pane_t3

0xeedd,	// (0x000b8f4a) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000b9f6c) cell_dia3_key_num_pane_t

0x9428,	// (0x000b3495) bg_button_pane_cp19

0x8e7e,	// (0x000b2eeb) cell_dia3_key0_fun_pane_g1

0x9428,	// (0x000b3495) bg_button_pane_cp20

0x8e86,	// (0x000b2ef3) cell_dia3_key1_fun_pane_g1

0x8e8e,	// (0x000b2efb) area_left_week_number_pane

0x8e9a,	// (0x000b2f07) area_top_day_name_pane

0x8ead,	// (0x000b2f1a) frame_month_view_pane

0xeeec,	// (0x000b8f59) grid_month_view_pane

0x8ec0,	// (0x000b2f2d) cell_top_day_name_pane_ParamLimits

0x8ec0,	// (0x000b2f2d) cell_top_day_name_pane

0x8eed,	// (0x000b2f5a) cell_area_left_week_number_pane_ParamLimits

0x8eed,	// (0x000b2f5a) cell_area_left_week_number_pane

0x8f01,	// (0x000b2f6e) cell_month_view_pane_ParamLimits

0x8f01,	// (0x000b2f6e) cell_month_view_pane

0xeefa,	// (0x000b8f67) frm_month_g1

0x8f2e,	// (0x000b2f9b) frm_month_g2

0x8f41,	// (0x000b2fae) frm_month_g3

0x8f54,	// (0x000b2fc1) frm_month_g4

0x8f67,	// (0x000b2fd4) frm_month_g5

0x8f7a,	// (0x000b2fe7) frm_month_g6

0x8f8d,	// (0x000b2ffa) frm_month_g7

0xef07,	// (0x000b8f74) frm_month_g8

0x8fa0,	// (0x000b300d) frm_month_g9

0x8fb0,	// (0x000b301d) frm_month_g10

0x8fc0,	// (0x000b302d) frm_month_g11

0x8fd0,	// (0x000b303d) frm_month_g12

0x8fe2,	// (0x000b304f) frm_month_g13

0x8ff4,	// (0x000b3061) frm_month_g14

0x9008,	// (0x000b3075) frm_month_g15

0x901c,	// (0x000b3089) frm_month_g16

0x000f,

0xff08,	// (0x000b9f75) frm_month_g

0xef14,	// (0x000b8f81) cell_top_day_name_pane_t1

0x9030,	// (0x000b309d) cell_area_left_week_number_pane_g1

0x903c,	// (0x000b30a9) cell_area_left_week_number_pane_t1

0xcf61,	// (0x000b6fce) cell_month_view_pane_g1

0x904f,	// (0x000b30bc) cell_month_view_pane_t1

0x9428,	// (0x000b3495) main_fps_pane

0xe744,	// (0x000b87b1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe744,	// (0x000b87b1) cmail_ddmenu_btn02_pane_cp1

0xe760,	// (0x000b87cd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe760,	// (0x000b87cd) cmail_ddmenu_btn02_pane_cp2

0x8723,	// (0x000b2790) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8723,	// (0x000b2790) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b9e9a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b9e9a) cmail_ddmenu_btn02_pane_g

0x8741,	// (0x000b27ae) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8741,	// (0x000b27ae) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b9e9f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b9e9f) cmail_ddmenu_btn02_pane_t

0x9062,	// (0x000b30cf) fps_text_pane_ParamLimits

0x9062,	// (0x000b30cf) fps_text_pane

0x9079,	// (0x000b30e6) main_fps_pane_g1_ParamLimits

0x9079,	// (0x000b30e6) main_fps_pane_g1

0x9093,	// (0x000b3100) wait_bar_pane_cp010_ParamLimits

0x9093,	// (0x000b3100) wait_bar_pane_cp010

0x90a4,	// (0x000b3111) fps_text_pane_t1_ParamLimits

0x90a4,	// (0x000b3111) fps_text_pane_t1

0xd68a,	// (0x000b76f7) cam4_image_uncrop_pane_g1

0xd693,	// (0x000b7700) cam4_image_uncrop_pane_g2

0x5928,	// (0x000af995) cam4_image_uncrop_pane_g3

0x5931,	// (0x000af99e) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x000b9957) cam4_image_uncrop_pane_g

0x8e6c,	// (0x000b2ed9) dia3_listrow_pane_ParamLimits

0x9428,	// (0x000b3495) main_phob2_pane

0x8274,	// (0x000b22e1) cell_tport_appsw_pane_cp02_ParamLimits

0x8274,	// (0x000b22e1) cell_tport_appsw_pane_cp02

0x8288,	// (0x000b22f5) cell_tport_appsw_pane_cp03_ParamLimits

0x8288,	// (0x000b22f5) cell_tport_appsw_pane_cp03

0x9428,	// (0x000b3495) phob2_contact_card_pane

0x9428,	// (0x000b3495) phob2_listscroll_pane

0xef27,	// (0x000b8f94) phob2_list_pane

0xef2f,	// (0x000b8f9c) scroll_pane_cp034

0x90bc,	// (0x000b3129) phob2_cc_data_pane_ParamLimits

0x90bc,	// (0x000b3129) phob2_cc_data_pane

0x90db,	// (0x000b3148) phob2_cc_listscroll_pane_ParamLimits

0x90db,	// (0x000b3148) phob2_cc_listscroll_pane

0x8c2a,	// (0x000b2c97) list_double_large_graphic_phob2_pane_ParamLimits

0x8c2a,	// (0x000b2c97) list_double_large_graphic_phob2_pane

0x90f9,	// (0x000b3166) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90f9,	// (0x000b3166) list_double_large_graphic_phob2_pane_g1

0x910f,	// (0x000b317c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x910f,	// (0x000b317c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000b9f96) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000b9f96) list_double_large_graphic_phob2_pane_g

0x911b,	// (0x000b3188) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x911b,	// (0x000b3188) list_double_large_graphic_phob2_pane_t1

0x9131,	// (0x000b319e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9131,	// (0x000b319e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000b9f9b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000b9f9b) list_double_large_graphic_phob2_pane_t

0x9428,	// (0x000b3495) list_highlight_pane_cp024

0x9146,	// (0x000b31b3) phob2_cc_button_pane

0x914e,	// (0x000b31bb) phob2_cc_data_pane_g1_ParamLimits

0x914e,	// (0x000b31bb) phob2_cc_data_pane_g1

0x9163,	// (0x000b31d0) phob2_cc_data_pane_g2_ParamLimits

0x9163,	// (0x000b31d0) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000b9fa0) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000b9fa0) phob2_cc_data_pane_g

0x9173,	// (0x000b31e0) phob2_cc_data_pane_t1_ParamLimits

0x9173,	// (0x000b31e0) phob2_cc_data_pane_t1

0x918b,	// (0x000b31f8) phob2_cc_data_pane_t2_ParamLimits

0x918b,	// (0x000b31f8) phob2_cc_data_pane_t2

0x91a3,	// (0x000b3210) phob2_cc_data_pane_t3_ParamLimits

0x91a3,	// (0x000b3210) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000b9fa5) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000b9fa5) phob2_cc_data_pane_t

0xef37,	// (0x000b8fa4) phob2_cc_list_pane_ParamLimits

0xef37,	// (0x000b8fa4) phob2_cc_list_pane

0xd9d8,	// (0x000b7a45) scroll_pane_cp035_ParamLimits

0xd9d8,	// (0x000b7a45) scroll_pane_cp035

0xa453,	// (0x000b44c0) bg_button_pane_cp033

0xef43,	// (0x000b8fb0) phob2_cc_button_pane_g1

0xef4f,	// (0x000b8fbc) phob2_cc_button_pane_t1

0xef64,	// (0x000b8fd1) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000b9fac) phob2_cc_button_pane_t

0x91bb,	// (0x000b3228) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x91bb,	// (0x000b3228) list_double_large_graphic_phob2_cc_pane

0x91ed,	// (0x000b325a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x91ed,	// (0x000b325a) list_double_large_graphic_phob2_cc_pane_g1

0x91f9,	// (0x000b3266) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x91f9,	// (0x000b3266) list_double_large_graphic_phob2_cc_pane_g2

0x9205,	// (0x000b3272) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9205,	// (0x000b3272) list_double_large_graphic_phob2_cc_pane_g3

0x9211,	// (0x000b327e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9211,	// (0x000b327e) list_double_large_graphic_phob2_cc_pane_g4

0x921d,	// (0x000b328a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x921d,	// (0x000b328a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000b9fb1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000b9fb1) list_double_large_graphic_phob2_cc_pane_g

0x9229,	// (0x000b3296) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9229,	// (0x000b3296) list_double_large_graphic_phob2_cc_pane_t1

0x9252,	// (0x000b32bf) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9252,	// (0x000b32bf) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000b9fbc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000b9fbc) list_double_large_graphic_phob2_cc_pane_t

0xef76,	// (0x000b8fe3) list_highlight_pane_cp025_ParamLimits

0xef76,	// (0x000b8fe3) list_highlight_pane_cp025

0xa453,	// (0x000b44c0) bg_button_pane_cp033_ParamLimits

0xef43,	// (0x000b8fb0) phob2_cc_button_pane_g1_ParamLimits

0xef4f,	// (0x000b8fbc) phob2_cc_button_pane_t1_ParamLimits

0xef64,	// (0x000b8fd1) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000b9fac) phob2_cc_button_pane_t_ParamLimits

0x0551,	// (0x000aa5be) popup_wgtman_window

0xd805,	// (0x000b7872) scroll_pane_cp038

0x8ba3,	// (0x000b2c10) wgtman_btn_pane_cp_01_ParamLimits

0x8ba3,	// (0x000b2c10) wgtman_btn_pane_cp_01

0xef84,	// (0x000b8ff1) wgtman_content_pane

0xef8d,	// (0x000b8ffa) wgtman_heading_pane

0x9428,	// (0x000b3495) bg_heading_pane_cp02

0xef96,	// (0x000b9003) wgtman_heading_pane_g1

0xef9e,	// (0x000b900b) wgtman_heading_pane_t1

0xefac,	// (0x000b9019) scroll_pane_cp036

0xefb4,	// (0x000b9021) wgtman_list_pane

0xe5f7,	// (0x000b8664) wgtman_list_pane_t1_ParamLimits

0xe5f7,	// (0x000b8664) wgtman_list_pane_t1

0x9c99,	// (0x000b3d06) cam4_grid_pane

0x65f7,	// (0x000b0664) bg_button_pane_cp015_ParamLimits

0x660b,	// (0x000b0678) bg_button_pane_cp016_ParamLimits

0x661e,	// (0x000b068b) bg_button_pane_cp017_ParamLimits

0x6676,	// (0x000b06e3) popup_vitu2_query_window_g3_ParamLimits

0x6676,	// (0x000b06e3) popup_vitu2_query_window_g3

0x6733,	// (0x000b07a0) popup_vitu2_query_window_t6_ParamLimits

0x6733,	// (0x000b07a0) popup_vitu2_query_window_t6

0x675e,	// (0x000b07cb) popup_vitu2_query_window_t7_ParamLimits

0x675e,	// (0x000b07cb) popup_vitu2_query_window_t7

0xd68a,	// (0x000b76f7) cam4_grid_pane_g1

0xd693,	// (0x000b7700) cam4_grid_pane_g2

0xefbc,	// (0x000b9029) cam4_grid_pane_g3

0xefc5,	// (0x000b9032) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000b9fc1) cam4_grid_pane_g

0x1459,	// (0x000ab4c6) aid_placing_vt_slider_lsc_ParamLimits

0x1756,	// (0x000ab7c3) vidtel_button_pane_ParamLimits

0x1756,	// (0x000ab7c3) vidtel_button_pane

0x9428,	// (0x000b3495) bg_button_pane_cp034

0xefd0,	// (0x000b903d) vidtel_button_pane_g1

0xefd8,	// (0x000b9045) vidtel_button_pane_t1

0xd91f,	// (0x000b798c) aid_size_vtel_slider_touch

0xd9d8,	// (0x000b7a45) scroll_pane_cp039

0x751c,	// (0x000b1589) ncim_query_button_pane_cp01_ParamLimits

0x753b,	// (0x000b15a8) ncimui_query_pane_g1_ParamLimits

0xa453,	// (0x000b44c0) input_focus_pane_cp012_ParamLimits

0xe1f4,	// (0x000b8261) ncim_query_entry_pane_t1_ParamLimits

0xd9d8,	// (0x000b7a45) scroll_pane_cp039_ParamLimits

0xb35a,	// (0x000b53c7) navi_pane_bcale_mc_g1

0xb362,	// (0x000b53cf) navi_pane_bcale_mc_t1

0xe794,	// (0x000b8801) main_sp_fs_email_pane_g1

0xe7a0,	// (0x000b880d) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b9d52) main_sp_fs_email_pane_g

0xe9f6,	// (0x000b8a63) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f6,	// (0x000b8a63) list_single_cale_mrui_row_pane_g3

0x8761,	// (0x000b27ce) list_single_recal_day_pane_g5_event_pane

0xa8da,	// (0x000b4947) list_single_recal_day_pane_g7

0xefee,	// (0x000b905b) list_recal_day_event_pane_cp01

0xeff7,	// (0x000b9064) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x000b906c) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x000b9074) list_recal_vselct_pane_cp01

0xd941,	// (0x000b79ae) list_recal_day_event_pane_cp01_g1

0xa90f,	// (0x000b497c) list_recal_day_event_pane_cp01_t1

0xa8e2,	// (0x000b494f) list_single_recal_day_pane_t1_ParamLimits

0xa8f4,	// (0x000b4961) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000b9eaf) list_single_recal_day_pane_t_ParamLimits

0xa266,	// (0x000b42d3) bg_notes_pane_ParamLimits

0xa315,	// (0x000b4382) list_notes_pane_ParamLimits

0x0892,	// (0x000aa8ff) scroll_pane_cp06_ParamLimits

0xa337,	// (0x000b43a4) main_notes_pane_ParamLimits

0xa453,	// (0x000b44c0) main_welc_pane

0x9292,	// (0x000b32ff) main_welc_body_pane_ParamLimits

0x9292,	// (0x000b32ff) main_welc_body_pane

0x92af,	// (0x000b331c) main_welc_opti_pane_ParamLimits

0x92af,	// (0x000b331c) main_welc_opti_pane

0x9303,	// (0x000b3370) main_welc_pane_t1_ParamLimits

0x9303,	// (0x000b3370) main_welc_pane_t1

0x937d,	// (0x000b33ea) main_welc_body_row_pane_ParamLimits

0x937d,	// (0x000b33ea) main_welc_body_row_pane

0xf011,	// (0x000b907e) main_welc_opti_row_pane_ParamLimits

0xf011,	// (0x000b907e) main_welc_opti_row_pane

0xf01f,	// (0x000b908c) main_welc_opti_row_pane_g1

0x9392,	// (0x000b33ff) main_welc_opti_row_pane_t1

0xf027,	// (0x000b9094) main_welc_body_row_pane_t1

0xed49,	// (0x000b8db6) popup_notif_wgt_heading_pane

0xed63,	// (0x000b8dd0) aid_size_list_notif_wgt_del_ParamLimits

0xed70,	// (0x000b8ddd) list_notif_wgt_row_pane_g1_ParamLimits

0xed7c,	// (0x000b8de9) list_notif_wgt_row_pane_g2_ParamLimits

0xed8b,	// (0x000b8df8) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000b9f16) list_notif_wgt_row_pane_g_ParamLimits

0xed98,	// (0x000b8e05) list_notif_wgt_row_pane_t1_ParamLimits

0xedae,	// (0x000b8e1b) list_notif_wgt_row_pane_t2_ParamLimits

0xedc0,	// (0x000b8e2d) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000b9f1d) list_notif_wgt_row_pane_t_ParamLimits

0x8c3c,	// (0x000b2ca9) listrow_wgtman_pane_g1_ParamLimits

0x8c49,	// (0x000b2cb6) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000b9f46) listrow_wgtman_pane_g_ParamLimits

0x8c67,	// (0x000b2cd4) listrow_wgtman_pane_t1_ParamLimits

0x8c7f,	// (0x000b2cec) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000b9f4b) listrow_wgtman_pane_t_ParamLimits

0x8ca5,	// (0x000b2d12) wait_bar_pane_cp09_ParamLimits

0x9428,	// (0x000b3495) bg_popup_heading_pane_cp02

0xf036,	// (0x000b90a3) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x000b90ab) popup_notif_wgt_heading_pane_t1

0x9428,	// (0x000b3495) main_vids_pane

0x9428,	// (0x000b3495) vids_listscroll_pane

0x93a1,	// (0x000b340e) scroll_pane_cp040

0x9428,	// (0x000b3495) vids_list_pane

0x93ac,	// (0x000b3419) vids_list_double_pane_ParamLimits

0x93ac,	// (0x000b3419) vids_list_double_pane

0x93bd,	// (0x000b342a) vids_list_double_pane_g1

0x93c6,	// (0x000b3433) vids_list_double_pane_t1

0x93d6,	// (0x000b3443) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x000b9fd8) vids_list_double_pane_t

0x9450,	// (0x000b34bd) main_ncimui_pane_ParamLimits

0x7352,	// (0x000b13bf) main_ncimui_pane_g1_ParamLimits

0x735e,	// (0x000b13cb) main_ncimui_pane_g2_ParamLimits

0x735e,	// (0x000b13cb) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x000b9c53) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x000b9c53) main_ncimui_pane_g

0x92ca,	// (0x000b3337) main_welc_pane_g1_ParamLimits

0x92ca,	// (0x000b3337) main_welc_pane_g1

0x92df,	// (0x000b334c) main_welc_pane_g2_ParamLimits

0x92df,	// (0x000b334c) main_welc_pane_g2

0x0002,

0xff5d,	// (0x000b9fca) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000b9fca) main_welc_pane_g

0xa266,	// (0x000b42d3) listscroll_mce_pane_ParamLimits

0xb4cf,	// (0x000b553c) wait_bar_pane_cp10

0xc908,	// (0x000b6975) main_cale_day_pane_ParamLimits

0xc908,	// (0x000b6975) main_cale_week_pane_ParamLimits

0xa266,	// (0x000b42d3) main_messa_pane_ParamLimits

0x4bc6,	// (0x000aec33) main_clock2_btn_pane_ParamLimits

0x4bc6,	// (0x000aec33) main_clock2_btn_pane

0xd0e9,	// (0x000b7156) main_clock2_btn_pane_cp01_ParamLimits

0xd0e9,	// (0x000b7156) main_clock2_btn_pane_cp01

0xe9c7,	// (0x000b8a34) list_cale_mrui_pane_ParamLimits

0xedf6,	// (0x000b8e63) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000b9f24) main_cf0_pane_g

0x8e8e,	// (0x000b2efb) area_left_week_number_pane_ParamLimits

0x8e9a,	// (0x000b2f07) area_top_day_name_pane_ParamLimits

0x8ead,	// (0x000b2f1a) frame_month_view_pane_ParamLimits

0xeeec,	// (0x000b8f59) grid_month_view_pane_ParamLimits

0xeefa,	// (0x000b8f67) frm_month_g1_ParamLimits

0x8f2e,	// (0x000b2f9b) frm_month_g2_ParamLimits

0x8f41,	// (0x000b2fae) frm_month_g3_ParamLimits

0x8f54,	// (0x000b2fc1) frm_month_g4_ParamLimits

0x8f67,	// (0x000b2fd4) frm_month_g5_ParamLimits

0x8f7a,	// (0x000b2fe7) frm_month_g6_ParamLimits

0x8f8d,	// (0x000b2ffa) frm_month_g7_ParamLimits

0xef07,	// (0x000b8f74) frm_month_g8_ParamLimits

0x8fa0,	// (0x000b300d) frm_month_g9_ParamLimits

0x8fb0,	// (0x000b301d) frm_month_g10_ParamLimits

0x8fc0,	// (0x000b302d) frm_month_g11_ParamLimits

0x8fd0,	// (0x000b303d) frm_month_g12_ParamLimits

0x8fe2,	// (0x000b304f) frm_month_g13_ParamLimits

0x8ff4,	// (0x000b3061) frm_month_g14_ParamLimits

0x9008,	// (0x000b3075) frm_month_g15_ParamLimits

0x901c,	// (0x000b3089) frm_month_g16_ParamLimits

0xff08,	// (0x000b9f75) frm_month_g_ParamLimits

0xef14,	// (0x000b8f81) cell_top_day_name_pane_t1_ParamLimits

0x9030,	// (0x000b309d) cell_area_left_week_number_pane_g1_ParamLimits

0x903c,	// (0x000b30a9) cell_area_left_week_number_pane_t1_ParamLimits

0xcf61,	// (0x000b6fce) cell_month_view_pane_g1_ParamLimits

0x904f,	// (0x000b30bc) cell_month_view_pane_t1_ParamLimits

0xa25e,	// (0x000b42cb) main_clock2_btn_pane_g1

0xf04c,	// (0x000b90b9) main_clock2_btn_pane_t1

0xa453,	// (0x000b44c0) listscroll_cmail_pane_ParamLimits

0xe794,	// (0x000b8801) main_sp_fs_email_pane_g1_ParamLimits

0xe7a0,	// (0x000b880d) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b9d52) main_sp_fs_email_pane_g_ParamLimits

0xead5,	// (0x000b8b42) list_recal_day_pane_ParamLimits

0xeae6,	// (0x000b8b53) mian_recal_day_pane_t1

0x7ee7,	// (0x000b1f54) list_single_dyc_row_text_pane_t4_ParamLimits

0x7ee7,	// (0x000b1f54) list_single_dyc_row_text_pane_t4

0x7f30,	// (0x000b1f9d) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f30,	// (0x000b1f9d) list_single_dyc_row_text_pane_t5

0xa642,	// (0x000b46af) list_single_dyc_row_text_pane_t6_ParamLimits

0xa642,	// (0x000b46af) list_single_dyc_row_text_pane_t6

0x2204,	// (0x000ac271) aid_mgn_list_cale_time_pane

0x9450,	// (0x000b34bd) main_gallery2_pane_ParamLimits

0xd0ff,	// (0x000b716c) main_clock2_pane_cp01_t1

0xd10d,	// (0x000b717a) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x000b9829) main_clock2_pane_cp01_t

0x0c0f,	// (0x000aac7c) cale_week_scroll_pane_g16_ParamLimits

0x0c0f,	// (0x000aac7c) cale_week_scroll_pane_g16

0xaa7c,	// (0x000b4ae9) vorec_slider_pane

0xefd8,	// (0x000b9045) vidtel_button_pane_t1_ParamLimits

0x87c7,	// (0x000b2834) main_fs_bigclock_clock_pane_g1_ParamLimits

0x87c7,	// (0x000b2834) main_fs_bigclock_clock_pane_g2_ParamLimits

0x87d8,	// (0x000b2845) main_fs_bigclock_clock_pane_g3_ParamLimits

0x87d8,	// (0x000b2845) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000b9ed2) main_fs_bigclock_clock_pane_g_ParamLimits

0x87eb,	// (0x000b2858) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8801,	// (0x000b286e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000b9edb) main_fs_bigclock_clock_pane_t_ParamLimits

0x43c4,	// (0x000ae431) main_mup3_lyrics_pane_ParamLimits

0x43c4,	// (0x000ae431) main_mup3_lyrics_pane

0x940c,	// (0x000b3479) main_mup3_lyrics_pane_t1_ParamLimits

0x940c,	// (0x000b3479) main_mup3_lyrics_pane_t1

0x99eb,	// (0x000b3a58) aid_main_mp4_pane_t1_area

0x99f5,	// (0x000b3a62) aid_main_mp4_pane_t2_area

0x9aa1,	// (0x000b3b0e) main_mp4_pane_g7_ParamLimits

0x9aa1,	// (0x000b3b0e) main_mp4_pane_g7

0x9aad,	// (0x000b3b1a) main_mp4_pane_g8_ParamLimits

0x9aad,	// (0x000b3b1a) main_mp4_pane_g8

0x56f7,	// (0x000af764) aid_call6_pane_g1_size

0x91d6,	// (0x000b3243) list_double_large_graphic_phob2_other_pane_ParamLimits

0x91d6,	// (0x000b3243) list_double_large_graphic_phob2_other_pane

0xb28b,	// (0x000b52f8) list_double_large_graphic_phob2_other_pane_g1

0x9428,	// (0x000b3495) list_highlight_pane_cp026

0xa453,	// (0x000b44c0) main_welc_pane_ParamLimits

0x7bed,	// (0x000b1c5a) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7bed,	// (0x000b1c5a) main_sp_fs_ctrlbar_pane_g3

0x7c07,	// (0x000b1c74) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7c07,	// (0x000b1c74) main_sp_fs_ctrlbar_pane_g4

0x7c3b,	// (0x000b1ca8) toolbar2_fixed_button_pane_cp01

0x7c46,	// (0x000b1cb3) toolbar2_fixed_button_pane_cp02

0x7c53,	// (0x000b1cc0) toolbar2_fixed_button_pane_cp03

0x927b,	// (0x000b32e8) list_welc_entry_pane_ParamLimits

0x927b,	// (0x000b32e8) list_welc_entry_pane

0x92f4,	// (0x000b3361) main_welc_pane_g3_ParamLimits

0x92f4,	// (0x000b3361) main_welc_pane_g3

0x9321,	// (0x000b338e) main_welc_pane_t2_ParamLimits

0x9321,	// (0x000b338e) main_welc_pane_t2

0x933b,	// (0x000b33a8) main_welc_pane_t3_ParamLimits

0x933b,	// (0x000b33a8) main_welc_pane_t3

0x0002,

0xff64,	// (0x000b9fd1) main_welc_pane_t_ParamLimits

0xff64,	// (0x000b9fd1) main_welc_pane_t

0x9352,	// (0x000b33bf) welc_button_pane_ParamLimits

0x9352,	// (0x000b33bf) welc_button_pane

0x9369,	// (0x000b33d6) welc_service_logo_pane_ParamLimits

0x9369,	// (0x000b33d6) welc_service_logo_pane

0xf05a,	// (0x000b90c7) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x000b90c7) list_single_welc_entry_pane

0xf06b,	// (0x000b90d8) list_single_welc_entry_pane_g1

0xf073,	// (0x000b90e0) list_single_welc_entry_pane_t1

0xf081,	// (0x000b90ee) list_single_welc_entry_pane_t2

0x0001,

0xff70,	// (0x000b9fdd) list_single_welc_entry_pane_t

0x9428,	// (0x000b3495) bg_button_pane_cp035

0xf08f,	// (0x000b90fc) welc_button_pane_t1

0xf09d,	// (0x000b910a) welc_service_logo_pane_g1

0xf0a6,	// (0x000b9113) welc_service_logo_pane_g2

0x0001,

0xff75,	// (0x000b9fe2) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
