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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001e4d5 };

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
0x2548,	// (0x00020a1d) Screen

0x2554,	// (0x00020a29) application_window

0x2560,	// (0x00020a35) area_bottom_pane_ParamLimits

0x2560,	// (0x00020a35) area_bottom_pane

0x0ce8,	// (0x0001f1bd) area_top_pane_ParamLimits

0x0ce8,	// (0x0001f1bd) area_top_pane

0x0d4c,	// (0x0001f221) call_video_uplink_pane_ParamLimits

0x0d4c,	// (0x0001f221) call_video_uplink_pane

0x0d8b,	// (0x0001f260) main_pane_ParamLimits

0x0d8b,	// (0x0001f260) main_pane

0xc2c1,	// (0x0002a796) context_pane

0x545e,	// (0x00023933) navi_pane

0x5484,	// (0x00023959) popup_cale_events_window_ParamLimits

0x5484,	// (0x00023959) popup_cale_events_window

0xc2d4,	// (0x0002a7a9) popup_mup_playback_window

0x549c,	// (0x00023971) signal_pane

0xa201,	// (0x000286d6) main_browser_pane

0xae60,	// (0x00029335) main_burst_pane

0x13c3,	// (0x0001f898) main_calc_pane

0xc2a7,	// (0x0002a77c) main_cale_day_pane

0x296f,	// (0x00020e44) main_cale_month_pane

0xc2a7,	// (0x0002a77c) main_cale_week_pane

0xae60,	// (0x00029335) main_call_pane

0x9ec2,	// (0x00028397) main_call_poc_pane

0xae60,	// (0x00029335) main_camera_pane

0xae60,	// (0x00029335) main_chi_dic_pane

0xabeb,	// (0x000290c0) main_clock_pane

0x9ec2,	// (0x00028397) main_fmradio_pane

0xae60,	// (0x00029335) main_graph_messa_pane

0x9ec2,	// (0x00028397) main_help_pane

0xa201,	// (0x000286d6) main_im_pane

0xa11d,	// (0x000285f2) main_image_pane_ParamLimits

0xa11d,	// (0x000285f2) main_image_pane

0x9ec2,	// (0x00028397) main_location2_pane

0xae60,	// (0x00029335) main_location_pane

0xa11d,	// (0x000285f2) main_messa_pane

0x9ec2,	// (0x00028397) main_mp2_pane

0xae60,	// (0x00029335) main_mp_pane

0x9ec2,	// (0x00028397) main_msg_pane

0x9ec2,	// (0x00028397) main_mup_eq_pane

0x9ec2,	// (0x00028397) main_mup_pane

0xa201,	// (0x000286d6) main_notes_pane

0x9ec2,	// (0x00028397) main_pec_pane

0x9ec2,	// (0x00028397) main_phob_pane

0x9ec2,	// (0x00028397) main_pinb_pane

0x9ec2,	// (0x00028397) main_postcard_pane

0x9ec2,	// (0x00028397) main_qdial_pane

0xae60,	// (0x00029335) main_skin_pane

0x9ec2,	// (0x00028397) main_smil2_pane

0xae60,	// (0x00029335) main_smil_pane

0xae60,	// (0x00029335) main_video_pane

0xae60,	// (0x00029335) main_video_tele_pane

0xa11d,	// (0x000285f2) main_viewer_pane_ParamLimits

0xa11d,	// (0x000285f2) main_viewer_pane

0xae60,	// (0x00029335) main_vorec_pane

0x140f,	// (0x0001f8e4) popup_blid_sat_info_window_ParamLimits

0x140f,	// (0x0001f8e4) popup_blid_sat_info_window

0x142f,	// (0x0001f904) popup_dyc_status_message_window_ParamLimits

0x142f,	// (0x0001f904) popup_dyc_status_message_window

0x143d,	// (0x0001f912) popup_grid_large_graphic_window_ParamLimits

0x143d,	// (0x0001f912) popup_grid_large_graphic_window

0x14cc,	// (0x0001f9a1) popup_loc_request_window_ParamLimits

0x14cc,	// (0x0001f9a1) popup_loc_request_window

0x1513,	// (0x0001f9e8) popup_wml_address_window_ParamLimits

0x1513,	// (0x0001f9e8) popup_wml_address_window

0x5340,	// (0x00023815) call_muted_g1

0x4ffe,	// (0x000234d3) popup_call_audio_conf_window_ParamLimits

0x4ffe,	// (0x000234d3) popup_call_audio_conf_window

0x5350,	// (0x00023825) popup_call_audio_first_window_ParamLimits

0x5350,	// (0x00023825) popup_call_audio_first_window

0x5390,	// (0x00023865) popup_call_audio_in_window_ParamLimits

0x5390,	// (0x00023865) popup_call_audio_in_window

0x53b4,	// (0x00023889) popup_call_audio_out_window_ParamLimits

0x53b4,	// (0x00023889) popup_call_audio_out_window

0x53d6,	// (0x000238ab) popup_call_audio_second_window_ParamLimits

0x53d6,	// (0x000238ab) popup_call_audio_second_window

0x5406,	// (0x000238db) popup_call_audio_wait_window_ParamLimits

0x5406,	// (0x000238db) popup_call_audio_wait_window

0x5427,	// (0x000238fc) popup_number_entry_window_ParamLimits

0x5427,	// (0x000238fc) popup_number_entry_window

0x9aaf,	// (0x00027f84) bg_popup_call_pane_cp05_ParamLimits

0x9aaf,	// (0x00027f84) bg_popup_call_pane_cp05

0x9acf,	// (0x00027fa4) popup_number_entry_window_t1

0x9ae2,	// (0x00027fb7) popup_number_entry_window_t2

0x9af4,	// (0x00027fc9) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0002d59b) popup_number_entry_window_t

0x9b06,	// (0x00027fdb) text_title_cp2

0x9b19,	// (0x00027fee) bg_popup_call_pane_cp_ParamLimits

0x9b19,	// (0x00027fee) bg_popup_call_pane_cp

0x9b27,	// (0x00027ffc) call_thumbnail_pane

0x9b2f,	// (0x00028004) popup_call_audio_in_window_g1_ParamLimits

0x9b2f,	// (0x00028004) popup_call_audio_in_window_g1

0x9b3b,	// (0x00028010) popup_call_audio_in_window_g2_ParamLimits

0x9b3b,	// (0x00028010) popup_call_audio_in_window_g2

0x9b47,	// (0x0002801c) popup_call_audio_in_window_g3_ParamLimits

0x9b47,	// (0x0002801c) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0002d5a4) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0002d5a4) popup_call_audio_in_window_g

0x9b53,	// (0x00028028) popup_call_audio_in_window_t1_ParamLimits

0x9b53,	// (0x00028028) popup_call_audio_in_window_t1

0x9b6f,	// (0x00028044) popup_call_audio_in_window_t2_ParamLimits

0x9b6f,	// (0x00028044) popup_call_audio_in_window_t2

0x9b8b,	// (0x00028060) popup_call_audio_in_window_t3_ParamLimits

0x9b8b,	// (0x00028060) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0002d5ab) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0002d5ab) popup_call_audio_in_window_t

0x9b19,	// (0x00027fee) bg_popup_call_pane_cp01_ParamLimits

0x9b19,	// (0x00027fee) bg_popup_call_pane_cp01

0x9b27,	// (0x00027ffc) call_thumbnail_pane_cp02

0x9b9e,	// (0x00028073) call_type_pane_cp022

0x9ba6,	// (0x0002807b) popup_call_audio_out_window_g1_ParamLimits

0x9ba6,	// (0x0002807b) popup_call_audio_out_window_g1

0x9bb8,	// (0x0002808d) popup_call_audio_out_window_g2_ParamLimits

0x9bb8,	// (0x0002808d) popup_call_audio_out_window_g2

0x9bc4,	// (0x00028099) popup_call_audio_out_window_g3_ParamLimits

0x9bc4,	// (0x00028099) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0002d5b2) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0002d5b2) popup_call_audio_out_window_g

0x9bd6,	// (0x000280ab) popup_call_audio_out_window_t1_ParamLimits

0x9bd6,	// (0x000280ab) popup_call_audio_out_window_t1

0x9bee,	// (0x000280c3) popup_call_audio_out_window_t2_ParamLimits

0x9bee,	// (0x000280c3) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0002d5b9) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0002d5b9) popup_call_audio_out_window_t

0x9c03,	// (0x000280d8) bg_popup_call_pane_ParamLimits

0x9c03,	// (0x000280d8) bg_popup_call_pane

0x25dd,	// (0x00020ab2) call_thumbnail_pane_cp_ParamLimits

0x25dd,	// (0x00020ab2) call_thumbnail_pane_cp

0x9c87,	// (0x0002815c) call_type_pane_cp01_ParamLimits

0x9c87,	// (0x0002815c) call_type_pane_cp01

0x9ccb,	// (0x000281a0) popup_call_audio_first_window_g1_ParamLimits

0x9ccb,	// (0x000281a0) popup_call_audio_first_window_g1

0x9d17,	// (0x000281ec) popup_call_audio_first_window_g2_ParamLimits

0x9d17,	// (0x000281ec) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0002d5be) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0002d5be) popup_call_audio_first_window_g

0x9d5b,	// (0x00028230) popup_call_audio_first_window_t1_ParamLimits

0x9d5b,	// (0x00028230) popup_call_audio_first_window_t1

0x9e07,	// (0x000282dc) popup_call_audio_first_window_t4_ParamLimits

0x9e07,	// (0x000282dc) popup_call_audio_first_window_t4

0x9e93,	// (0x00028368) popup_call_audio_first_window_t5_ParamLimits

0x9e93,	// (0x00028368) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0002d5c3) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0002d5c3) popup_call_audio_first_window_t

0x9ec2,	// (0x00028397) bg_popup_call_pane_cp02

0x9ecc,	// (0x000283a1) call_type_pane_cp023

0x9ed4,	// (0x000283a9) popup_call_audio_wait_window_g1

0x9edc,	// (0x000283b1) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d5ca) popup_call_audio_wait_window_g

0x9ee4,	// (0x000283b9) popup_call_audio_wait_window_t3

0x9ef2,	// (0x000283c7) bg_popup_call_pane_cp03_ParamLimits

0x9ef2,	// (0x000283c7) bg_popup_call_pane_cp03

0x9f52,	// (0x00028427) call_thumbnail_pane_cp011_ParamLimits

0x9f52,	// (0x00028427) call_thumbnail_pane_cp011

0x9f5e,	// (0x00028433) call_type_pane_cp034_ParamLimits

0x9f5e,	// (0x00028433) call_type_pane_cp034

0x9f9a,	// (0x0002846f) popup_call_audio_second_window_g1_ParamLimits

0x9f9a,	// (0x0002846f) popup_call_audio_second_window_g1

0x9fd6,	// (0x000284ab) popup_call_audio_second_window_g2_ParamLimits

0x9fd6,	// (0x000284ab) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0002d5cf) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0002d5cf) popup_call_audio_second_window_g

0xa012,	// (0x000284e7) popup_call_audio_second_window_t1_ParamLimits

0xa012,	// (0x000284e7) popup_call_audio_second_window_t1

0xa093,	// (0x00028568) popup_call_audio_second_window_t2_ParamLimits

0xa093,	// (0x00028568) popup_call_audio_second_window_t2

0xa0c9,	// (0x0002859e) popup_call_audio_second_window_t3_ParamLimits

0xa0c9,	// (0x0002859e) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0002d5d4) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0002d5d4) popup_call_audio_second_window_t

0x9ec2,	// (0x00028397) bg_popup_call_pane_cp04

0xa0ff,	// (0x000285d4) list_conf_pane

0xa107,	// (0x000285dc) popup_call_audio_conf_window_t1

0xa115,	// (0x000285ea) call_thumbnail_pane_g1

0xa11d,	// (0x000285f2) bg_pinb_pane_ParamLimits

0xa11d,	// (0x000285f2) bg_pinb_pane

0xa12b,	// (0x00028600) find_pinb_pane

0xa134,	// (0x00028609) listscroll_pinb_pane_ParamLimits

0xa134,	// (0x00028609) listscroll_pinb_pane

0xa143,	// (0x00028618) pinb_bg_pane_g1

0x2601,	// (0x00020ad6) pinb_bg_pane_g2

0x260d,	// (0x00020ae2) pinb_bg_pane_g3

0x2619,	// (0x00020aee) pinb_bg_pane_g4

0x2625,	// (0x00020afa) pinb_bg_pane_g5

0x2631,	// (0x00020b06) pinb_bg_pane_g6

0x263c,	// (0x00020b11) pinb_bg_pane_g7

0x2647,	// (0x00020b1c) pinb_bg_pane_g8

0x2652,	// (0x00020b27) pinb_bg_pane_g9

0x265c,	// (0x00020b31) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0002d5db) pinb_bg_pane_g

0x2679,	// (0x00020b4e) grid_pinb_pane

0x2684,	// (0x00020b59) list_pinb_pane

0x268f,	// (0x00020b64) scroll_pane_cp01_ParamLimits

0x268f,	// (0x00020b64) scroll_pane_cp01

0xa14d,	// (0x00028622) find_pinb_pane_g1_ParamLimits

0xa14d,	// (0x00028622) find_pinb_pane_g1

0xa165,	// (0x0002863a) find_pinb_pane_t1

0xa177,	// (0x0002864c) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0002d5f5) find_pinb_pane_t

0xa18c,	// (0x00028661) input_focus_pane_cp01_ParamLimits

0xa18c,	// (0x00028661) input_focus_pane_cp01

0x26a1,	// (0x00020b76) cell_pinb_pane_ParamLimits

0x26a1,	// (0x00020b76) cell_pinb_pane

0xa198,	// (0x0002866d) cell_pinb_pane_g1_ParamLimits

0xa198,	// (0x0002866d) cell_pinb_pane_g1

0xa1ab,	// (0x00028680) cell_pinb_pane_g2_ParamLimits

0xa1ab,	// (0x00028680) cell_pinb_pane_g2

0xa1b7,	// (0x0002868c) cell_pinb_pane_g3_ParamLimits

0xa1b7,	// (0x0002868c) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0002d5fa) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0002d5fa) cell_pinb_pane_g

0x9ec2,	// (0x00028397) grid_highlight_pane_cp01

0x26d0,	// (0x00020ba5) list_pinb_item_pane_ParamLimits

0x26d0,	// (0x00020ba5) list_pinb_item_pane

0x9ec2,	// (0x00028397) list_highlight_pane_cp02

0x26fa,	// (0x00020bcf) list_pinb_item_pane_g1_ParamLimits

0x26fa,	// (0x00020bcf) list_pinb_item_pane_g1

0x2707,	// (0x00020bdc) list_pinb_item_pane_g2_ParamLimits

0x2707,	// (0x00020bdc) list_pinb_item_pane_g2

0x2713,	// (0x00020be8) list_pinb_item_pane_g3_ParamLimits

0x2713,	// (0x00020be8) list_pinb_item_pane_g3

0x2724,	// (0x00020bf9) list_pinb_item_pane_g4_ParamLimits

0x2724,	// (0x00020bf9) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0002d601) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0002d601) list_pinb_item_pane_g

0x2730,	// (0x00020c05) list_pinb_item_pane_t1_ParamLimits

0x2730,	// (0x00020c05) list_pinb_item_pane_t1

0x0f79,	// (0x0001f44e) calc_display_pane

0x0f97,	// (0x0001f46c) calc_paper_pane

0x0fb3,	// (0x0001f488) grid_calc_pane

0x9ec2,	// (0x00028397) bg_list_pane_cp01

0x2747,	// (0x00020c1c) clock_g1

0x274f,	// (0x00020c24) clock_g2

0x0001,

0xf135,	// (0x0002d60a) clock_g

0x2759,	// (0x00020c2e) clock_t1_ParamLimits

0x2759,	// (0x00020c2e) clock_t1

0x276e,	// (0x00020c43) clock_t2_ParamLimits

0x276e,	// (0x00020c43) clock_t2

0x2780,	// (0x00020c55) clock_t3_ParamLimits

0x2780,	// (0x00020c55) clock_t3

0x2792,	// (0x00020c67) clock_t4_ParamLimits

0x2792,	// (0x00020c67) clock_t4

0x27a4,	// (0x00020c79) clock_t5_ParamLimits

0x27a4,	// (0x00020c79) clock_t5

0x27b9,	// (0x00020c8e) clock_t6_ParamLimits

0x27b9,	// (0x00020c8e) clock_t6

0x27cb,	// (0x00020ca0) clock_t7_ParamLimits

0x27cb,	// (0x00020ca0) clock_t7

0x27dd,	// (0x00020cb2) clock_t8_ParamLimits

0x27dd,	// (0x00020cb2) clock_t8

0x27f3,	// (0x00020cc8) clock_t9_ParamLimits

0x27f3,	// (0x00020cc8) clock_t9

0x0008,

0xf13a,	// (0x0002d60f) clock_t_ParamLimits

0xf13a,	// (0x0002d60f) clock_t

0xa1c3,	// (0x00028698) popup_clock_analogue_window_cp02

0xa1c3,	// (0x00028698) popup_clock_digital_window_cp01

0xa1cb,	// (0x000286a0) listscroll_help_pane

0x9ec2,	// (0x00028397) phob_pre_status_pane

0xa1d5,	// (0x000286aa) grid_qdial_pane

0xa11d,	// (0x000285f2) listscroll_mce_pane

0xa11d,	// (0x000285f2) bg_notes_pane

0xa1df,	// (0x000286b4) list_notes_pane

0x2809,	// (0x00020cde) scroll_pane_cp06

0xa1ed,	// (0x000286c2) bg_calc_paper_pane

0x0fdf,	// (0x0001f4b4) list_calc_pane

0xa201,	// (0x000286d6) bg_calc_display_pane

0x0ff9,	// (0x0001f4ce) calc_display_pane_t1

0x100e,	// (0x0001f4e3) calc_display_pane_t2

0x1023,	// (0x0001f4f8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0002d622) calc_display_pane_t

0x1035,	// (0x0001f50a) cell_calc_pane_ParamLimits

0x1035,	// (0x0001f50a) cell_calc_pane

0xa20d,	// (0x000286e2) bg_calc_paper_pane_g1

0xa219,	// (0x000286ee) bg_calc_paper_pane_g2

0xa225,	// (0x000286fa) bg_calc_paper_pane_g3

0xa231,	// (0x00028706) bg_calc_paper_pane_g4

0xa23d,	// (0x00028712) bg_calc_paper_pane_g5

0x2818,	// (0x00020ced) bg_calc_paper_pane_g6

0x2829,	// (0x00020cfe) bg_calc_paper_pane_g7

0x283a,	// (0x00020d0f) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0002d629) bg_calc_paper_pane_g

0x284b,	// (0x00020d20) calc_bg_paper_pane_g9

0x285c,	// (0x00020d31) list_calc_item_pane_ParamLimits

0x285c,	// (0x00020d31) list_calc_item_pane

0xa249,	// (0x0002871e) list_calc_item_pane_g1

0x1062,	// (0x0001f537) list_calc_item_pane_t1_ParamLimits

0x1062,	// (0x0001f537) list_calc_item_pane_t1

0x1074,	// (0x0001f549) list_calc_item_pane_t2_ParamLimits

0x1074,	// (0x0001f549) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0002d63a) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0002d63a) list_calc_item_pane_t

0xa256,	// (0x0002872b) cell_calc_pane_g1

0xa260,	// (0x00028735) grid_highlight_pane_cp02

0xa282,	// (0x00028757) bg_calc_display_pane_g1

0x10a4,	// (0x0001f579) bg_calc_display_pane_g2

0xa28b,	// (0x00028760) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0002d644) bg_calc_display_pane_g

0x10ae,	// (0x0001f583) cell_qdial_pane_ParamLimits

0x10ae,	// (0x0001f583) cell_qdial_pane

0x2890,	// (0x00020d65) cell_qdial_pane_g1_ParamLimits

0x2890,	// (0x00020d65) cell_qdial_pane_g1

0x289d,	// (0x00020d72) cell_qdial_pane_g2_ParamLimits

0x289d,	// (0x00020d72) cell_qdial_pane_g2

0xa294,	// (0x00028769) cell_qdial_pane_g3_ParamLimits

0xa294,	// (0x00028769) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0002d64b) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0002d64b) cell_qdial_pane_g

0x28ba,	// (0x00020d8f) cell_qdial_pane_t1_ParamLimits

0x28ba,	// (0x00020d8f) cell_qdial_pane_t1

0x28d2,	// (0x00020da7) cell_qdial_pane_t2_ParamLimits

0x28d2,	// (0x00020da7) cell_qdial_pane_t2

0x28e5,	// (0x00020dba) cell_qdial_pane_t3_ParamLimits

0x28e5,	// (0x00020dba) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0002d654) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0002d654) cell_qdial_pane_t

0x9ec2,	// (0x00028397) grid_highlight_pane_cp04

0xa2a0,	// (0x00028775) thumbnail_qdial_pane_ParamLimits

0xa2a0,	// (0x00028775) thumbnail_qdial_pane

0xa2fc,	// (0x000287d1) list_help_pane

0xa305,	// (0x000287da) scroll_pane_cp02

0x28f8,	// (0x00020dcd) help_list_pane_t1_ParamLimits

0x28f8,	// (0x00020dcd) help_list_pane_t1

0x10c2,	// (0x0001f597) bg_notes_pane_g2

0x10ca,	// (0x0001f59f) bg_notes_pane_g3

0x10d2,	// (0x0001f5a7) notes_bg_pane_g1

0x10da,	// (0x0001f5af) notes_bg_pane_g4

0x10e2,	// (0x0001f5b7) notes_bg_pane_g5

0x10ea,	// (0x0001f5bf) notes_bg_pane_g6

0x10f2,	// (0x0001f5c7) notes_bg_pane_g7

0x10fa,	// (0x0001f5cf) notes_bg_pane_g8

0x1102,	// (0x0001f5d7) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0002d672) notes_bg_pane_g

0x2932,	// (0x00020e07) list_notes_text_pane_ParamLimits

0x2932,	// (0x00020e07) list_notes_text_pane

0xa30e,	// (0x000287e3) list_notes_text_pane_g1

0x2961,	// (0x00020e36) list_notes_text_pane_t1

0x296f,	// (0x00020e44) listscroll_cale_week_pane

0x2994,	// (0x00020e69) bg_cale_heading_pane

0xa331,	// (0x00028806) bg_cale_pane_cp01

0x29b6,	// (0x00020e8b) cale_week_corner_pane

0x29d0,	// (0x00020ea5) cale_week_day_heading_pane

0x29f2,	// (0x00020ec7) cale_week_scroll_pane_g1

0x2a0f,	// (0x00020ee4) cale_week_scroll_pane_g2

0x2a22,	// (0x00020ef7) cale_week_scroll_pane_g3

0x2a35,	// (0x00020f0a) cale_week_scroll_pane_g4

0x2a48,	// (0x00020f1d) cale_week_scroll_pane_g5

0x2a5b,	// (0x00020f30) cale_week_scroll_pane_g6

0x2a6e,	// (0x00020f43) cale_week_scroll_pane_g7

0x2a81,	// (0x00020f56) cale_week_scroll_pane_g8

0x2a96,	// (0x00020f6b) cale_week_scroll_pane_g9

0x2aa9,	// (0x00020f7e) cale_week_scroll_pane_g10

0x2abc,	// (0x00020f91) cale_week_scroll_pane_g11

0x2acf,	// (0x00020fa4) cale_week_scroll_pane_g12

0x2ae6,	// (0x00020fbb) cale_week_scroll_pane_g13

0x2b01,	// (0x00020fd6) cale_week_scroll_pane_g14

0x2b1c,	// (0x00020ff1) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0002d681) cale_week_scroll_pane_g

0x2b4c,	// (0x00021021) cale_week_time_pane

0x2b61,	// (0x00021036) grid_cale_week_pane

0xa36f,	// (0x00028844) scroll_pane_cp08

0x2b82,	// (0x00021057) cell_cale_week_pane_ParamLimits

0x2b82,	// (0x00021057) cell_cale_week_pane

0x2be6,	// (0x000210bb) cale_week_day_heading_pane_t1

0x2c21,	// (0x000210f6) cale_week_day_heading_pane_t2

0x2c5c,	// (0x00021131) cale_week_day_heading_pane_t3

0x2c97,	// (0x0002116c) cale_week_day_heading_pane_t4

0x2cd2,	// (0x000211a7) cale_week_day_heading_pane_t5

0x2d0d,	// (0x000211e2) cale_week_day_heading_pane_t6

0x2d48,	// (0x0002121d) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0002d6a2) cale_week_day_heading_pane_t

0xa38c,	// (0x00028861) bg_cale_side_pane

0x110a,	// (0x0001f5df) cale_week_time_pane_t1

0x1124,	// (0x0001f5f9) cale_week_time_pane_t2

0x113e,	// (0x0001f613) cale_week_time_pane_t3

0x1158,	// (0x0001f62d) cale_week_time_pane_t4

0x1172,	// (0x0001f647) cale_week_time_pane_t5

0x118e,	// (0x0001f663) cale_week_time_pane_t6

0x11b0,	// (0x0001f685) cale_week_time_pane_t7

0x11d4,	// (0x0001f6a9) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0002d6b1) cale_week_time_pane_t

0x2d83,	// (0x00021258) cell_cale_week_pane_g2

0x2da7,	// (0x0002127c) cell_cale_week_pane_g3_ParamLimits

0x2da7,	// (0x0002127c) cell_cale_week_pane_g3

0xa39a,	// (0x0002886f) grid_highlight_pane_cp07

0xa3a2,	// (0x00028877) listscroll_gms_pane

0xa3ac,	// (0x00028881) grid_gms_pane

0xa3b5,	// (0x0002888a) listscroll_gms_pane_g1

0xa3bd,	// (0x00028892) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0002d6c2) listscroll_gms_pane_g

0x2dbf,	// (0x00021294) scroll_pane_cp010

0x2dca,	// (0x0002129f) cell_gms_pane_ParamLimits

0x2dca,	// (0x0002129f) cell_gms_pane

0x2dda,	// (0x000212af) cell_gms_pane_g1

0xa3c5,	// (0x0002889a) cell_gms_pane_g2

0xa30e,	// (0x000287e3) cell_gms_pane_g3

0xa3cd,	// (0x000288a2) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0002d6c7) cell_gms_pane_g

0xa3d6,	// (0x000288ab) grid_highlight_pane_cp09

0x52e8,	// (0x000237bd) phob_pre_status_pane_g1

0x52f0,	// (0x000237c5) phob_pre_status_pane_g2

0x52f8,	// (0x000237cd) phob_pre_status_pane_g3

0x5300,	// (0x000237d5) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002dab6) phob_pre_status_pane_g

0x5310,	// (0x000237e5) phob_pre_status_pane_t1

0x5320,	// (0x000237f5) phob_pre_status_pane_t2

0x5330,	// (0x00023805) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002dac1) phob_pre_status_pane_t

0x9ec2,	// (0x00028397) bg_list_pane_cp05

0x1202,	// (0x0001f6d7) grid_vorec_pane

0x120c,	// (0x0001f6e1) vorec_t1

0x121a,	// (0x0001f6ef) vorec_t2

0x1228,	// (0x0001f6fd) vorec_t3

0x1236,	// (0x0001f70b) vorec_t4

0x1244,	// (0x0001f719) vorec_t5

0x1252,	// (0x0001f727) vorec_t6

0x0006,

0xf1fb,	// (0x0002d6d0) vorec_t

0x126e,	// (0x0001f743) wait_bar_pane_cp01

0x2de2,	// (0x000212b7) cell_vorec_pane_ParamLimits

0x2de2,	// (0x000212b7) cell_vorec_pane

0x1276,	// (0x0001f74b) cell_vorec_pane_g1

0x9ec2,	// (0x00028397) grid_highlight_pane_cp05

0x2e05,	// (0x000212da) cams_zoom_pane

0x2e11,	// (0x000212e6) image_vga_pane

0x2e20,	// (0x000212f5) main_camera_pane_g1

0x2e2e,	// (0x00021303) main_camera_pane_g2

0x2e3a,	// (0x0002130f) main_camera_pane_g3

0x2e46,	// (0x0002131b) main_camera_pane_g4

0x2e52,	// (0x00021327) main_camera_pane_g5

0x2e5e,	// (0x00021333) main_camera_pane_g6

0x2e6a,	// (0x0002133f) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d6df) main_camera_pane_g

0x2e76,	// (0x0002134b) main_camera_pane_t1

0x2e88,	// (0x0002135d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d6f0) main_camera_pane_t

0x2ea9,	// (0x0002137e) cams_zoom_pane_cp_ParamLimits

0x2ea9,	// (0x0002137e) cams_zoom_pane_cp

0x2ecd,	// (0x000213a2) image_cif_pane_ParamLimits

0x2ecd,	// (0x000213a2) image_cif_pane

0x2eeb,	// (0x000213c0) image_subqcif_pane

0x2ef3,	// (0x000213c8) main_video_pane_g1_ParamLimits

0x2ef3,	// (0x000213c8) main_video_pane_g1

0x2f13,	// (0x000213e8) main_video_pane_g2_ParamLimits

0x2f13,	// (0x000213e8) main_video_pane_g2

0x2f43,	// (0x00021418) main_video_pane_g3_ParamLimits

0x2f43,	// (0x00021418) main_video_pane_g3

0x2f6c,	// (0x00021441) main_video_pane_g4_ParamLimits

0x2f6c,	// (0x00021441) main_video_pane_g4

0x2f95,	// (0x0002146a) main_video_pane_g5_ParamLimits

0x2f95,	// (0x0002146a) main_video_pane_g5

0xa3ea,	// (0x000288bf) main_video_pane_g6_ParamLimits

0xa3ea,	// (0x000288bf) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d6f5) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d6f5) main_video_pane_g

0x2fb7,	// (0x0002148c) main_video_pane_t1_ParamLimits

0x2fb7,	// (0x0002148c) main_video_pane_t1

0xa404,	// (0x000288d9) cams_zoom_pane_g1

0xa40d,	// (0x000288e2) cams_zoom_pane_g2

0xa416,	// (0x000288eb) cams_zoom_pane_g3

0xa41f,	// (0x000288f4) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d704) cams_zoom_pane_g

0x3001,	// (0x000214d6) grid_cams_pane

0x300f,	// (0x000214e4) linegrid_cams_pane

0x301d,	// (0x000214f2) cell_cams_pane_ParamLimits

0x301d,	// (0x000214f2) cell_cams_pane

0xa428,	// (0x000288fd) cams_burst_image_pane

0xa430,	// (0x00028905) cell_cams_pane_g1

0x9ec2,	// (0x00028397) grid_highlight_pane_cp03

0xa256,	// (0x0002872b) mp_bg_pane_g1

0x9ec2,	// (0x00028397) bg_list_pane_cp03

0xc1cc,	// (0x0002a6a1) bg_mp_pane

0xc1d4,	// (0x0002a6a9) grid_mp_pane

0xc1dc,	// (0x0002a6b1) media_player_g1

0xc1e4,	// (0x0002a6b9) media_player_t1

0xc1f2,	// (0x0002a6c7) media_player_t2

0xc200,	// (0x0002a6d5) media_player_t3

0xc20e,	// (0x0002a6e3) media_player_t4

0xc21c,	// (0x0002a6f1) media_player_t5

0xc22a,	// (0x0002a6ff) media_player_t6

0xc238,	// (0x0002a70d) media_player_t7

0x0006,

0xf5cb,	// (0x0002daa0) media_player_t

0xc246,	// (0x0002a71b) wait_bar_pane_cp02

0xf5b0,	// (0x0002da85) main_usb_pane_t

0x52df,	// (0x000237b4) cell_mp_pane

0xa256,	// (0x0002872b) cell_mp_pane_g1

0x9ec2,	// (0x00028397) grid_highlight_pane_cp06

0xa438,	// (0x0002890d) grid_skin_colour_pane

0xa440,	// (0x00028915) list_highlight_pane_cp03

0x313e,	// (0x00021613) skin_g1

0xa448,	// (0x0002891d) skin_t1

0xa457,	// (0x0002892c) skin_t2

0x0001,

0xf264,	// (0x0002d739) skin_t

0x3148,	// (0x0002161d) cell_skin_colour_pane_ParamLimits

0x3148,	// (0x0002161d) cell_skin_colour_pane

0xa465,	// (0x0002893a) cell_skin_colour_pane_g1

0x31cc,	// (0x000216a1) call_video_g1_ParamLimits

0x31cc,	// (0x000216a1) call_video_g1

0x31dc,	// (0x000216b1) call_video_g2_ParamLimits

0x31dc,	// (0x000216b1) call_video_g2

0x0001,

0xf269,	// (0x0002d73e) call_video_g_ParamLimits

0xf269,	// (0x0002d73e) call_video_g

0x3236,	// (0x0002170b) call_video_uplink_pane_cp1_ParamLimits

0x3236,	// (0x0002170b) call_video_uplink_pane_cp1

0xa477,	// (0x0002894c) call_video_uplink_pane_cp2

0x3302,	// (0x000217d7) video_down_crop_pane_ParamLimits

0x3302,	// (0x000217d7) video_down_crop_pane

0x33f4,	// (0x000218c9) video_down_pane_ParamLimits

0x33f4,	// (0x000218c9) video_down_pane

0xa47f,	// (0x00028954) video_down_subqcif_pane_ParamLimits

0xa47f,	// (0x00028954) video_down_subqcif_pane

0xa497,	// (0x0002896c) video_down_subqcif_pane_cp_ParamLimits

0xa497,	// (0x0002896c) video_down_subqcif_pane_cp

0xa4bd,	// (0x00028992) im_reading_pane_ParamLimits

0xa4bd,	// (0x00028992) im_reading_pane

0x3516,	// (0x000219eb) im_writing_pane_ParamLimits

0x3516,	// (0x000219eb) im_writing_pane

0x3534,	// (0x00021a09) im_reading_pane_t1

0xa4d7,	// (0x000289ac) list_im_pane

0xa4e8,	// (0x000289bd) scroll_pane_cp07

0x358f,	// (0x00021a64) im_writing_pane_t1_ParamLimits

0x358f,	// (0x00021a64) im_writing_pane_t1

0xa501,	// (0x000289d6) im_writing_pane_t2_ParamLimits

0xa501,	// (0x000289d6) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d748) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d748) im_writing_pane_t

0x9ec2,	// (0x00028397) input_focus_pane_cp04

0x9ec2,	// (0x00028397) input_focus_pane_cp05

0x35a1,	// (0x00021a76) list_im_single_pane_ParamLimits

0x35a1,	// (0x00021a76) list_im_single_pane

0x35c9,	// (0x00021a9e) list_single_im_pane_t1

0x52a3,	// (0x00023778) blid_accuracy_pane

0x52ab,	// (0x00023780) blid_compass_pane

0x52b5,	// (0x0002378a) main_location_t1

0x52c3,	// (0x00023798) main_location_t2

0x52d1,	// (0x000237a6) main_location_t3

0x0002,

0xf5da,	// (0x0002daaf) main_location_t

0x9ec2,	// (0x00028397) aid_levels_location

0xa256,	// (0x0002872b) blid_accuracy_pane_g1

0xa256,	// (0x0002872b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d7aa) blid_accuracy_pane_g

0xa549,	// (0x00028a1e) wml_content_pane

0xa587,	// (0x00028a5c) wml_button_pane_ParamLimits

0xa587,	// (0x00028a5c) wml_button_pane

0x35d8,	// (0x00021aad) wml_list_single_large_pane_ParamLimits

0x35d8,	// (0x00021aad) wml_list_single_large_pane

0x3609,	// (0x00021ade) wml_list_single_medium_pane_ParamLimits

0x3609,	// (0x00021ade) wml_list_single_medium_pane

0x3641,	// (0x00021b16) wml_list_single_small_pane_ParamLimits

0x3641,	// (0x00021b16) wml_list_single_small_pane

0xa59b,	// (0x00028a70) wml_selection_box_pane_ParamLimits

0xa59b,	// (0x00028a70) wml_selection_box_pane

0xa5ae,	// (0x00028a83) wml_list_single_pane_t1

0xa5bd,	// (0x00028a92) wml_list_single_medium_pane_t1

0xa5cc,	// (0x00028aa1) wml_list_single_large_pane_t1

0xa5db,	// (0x00028ab0) input_focus_pane_cp02_ParamLimits

0xa5db,	// (0x00028ab0) input_focus_pane_cp02

0xa5ee,	// (0x00028ac3) wml_selection_box_pane_g1

0xa5f7,	// (0x00028acc) wml_selection_box_pane_t1_ParamLimits

0xa5f7,	// (0x00028acc) wml_selection_box_pane_t1

0xa11d,	// (0x000285f2) bg_wml_button_pane_ParamLimits

0xa11d,	// (0x000285f2) bg_wml_button_pane

0xa60f,	// (0x00028ae4) wml_button_pane_g1

0xa617,	// (0x00028aec) wml_button_pane_t1

0xa60f,	// (0x00028ae4) wml_button_bg_pane_g1

0xa627,	// (0x00028afc) wml_button_bg_pane_g2

0xa62f,	// (0x00028b04) wml_button_bg_pane_g3

0xa637,	// (0x00028b0c) wml_button_bg_pane_g4

0xa63f,	// (0x00028b14) wml_button_bg_pane_g5

0xa647,	// (0x00028b1c) wml_button_bg_pane_g6

0xa64f,	// (0x00028b24) wml_button_bg_pane_g7

0xa657,	// (0x00028b2c) wml_button_bg_pane_g8

0xa65f,	// (0x00028b34) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d74d) wml_button_bg_pane_g

0x3682,	// (0x00021b57) bg_list_pane_cp02

0xa667,	// (0x00028b3c) mce_header_pane_ParamLimits

0xa667,	// (0x00028b3c) mce_header_pane

0xa67d,	// (0x00028b52) mce_icon_pane

0xa67d,	// (0x00028b52) mce_image_pane

0xa686,	// (0x00028b5b) mce_text_pane_ParamLimits

0xa686,	// (0x00028b5b) mce_text_pane

0x368c,	// (0x00021b61) scroll_pane_cp03

0xa57f,	// (0x00028a54) scroll_pane_cp04

0xa699,	// (0x00028b6e) scroll_pane_cp05_ParamLimits

0xa699,	// (0x00028b6e) scroll_pane_cp05

0x3696,	// (0x00021b6b) mce_header_field_pane_ParamLimits

0x3696,	// (0x00021b6b) mce_header_field_pane

0x36b6,	// (0x00021b8b) mce_header_field_pane_2_ParamLimits

0x36b6,	// (0x00021b8b) mce_header_field_pane_2

0x36cc,	// (0x00021ba1) mce_header_field_pane_3

0x36d4,	// (0x00021ba9) list_single_mce_message_pane_ParamLimits

0x36d4,	// (0x00021ba9) list_single_mce_message_pane

0x3706,	// (0x00021bdb) list_single_mce_smart_pane_ParamLimits

0x3706,	// (0x00021bdb) list_single_mce_smart_pane

0xa6a5,	// (0x00028b7a) input_focus_pane_cp03

0xa6ae,	// (0x00028b83) list_header_data_pane

0x3743,	// (0x00021c18) mce_header_field_pane_t1

0x3753,	// (0x00021c28) list_single_mce_header_pane_ParamLimits

0x3753,	// (0x00021c28) list_single_mce_header_pane

0xa6b6,	// (0x00028b8b) list_single_mce_header_pane_t1

0xa6c5,	// (0x00028b9a) list_single_mce_message_pane_g1

0xa6cd,	// (0x00028ba2) list_single_mce_message_pane_t1

0x37aa,	// (0x00021c7f) bg_cale_heading_pane_cp01_ParamLimits

0x37aa,	// (0x00021c7f) bg_cale_heading_pane_cp01

0xa6db,	// (0x00028bb0) bg_cale_pane_cp02_ParamLimits

0xa6db,	// (0x00028bb0) bg_cale_pane_cp02

0x37ed,	// (0x00021cc2) cale_month_corner_pane

0x3807,	// (0x00021cdc) cale_month_day_heading_pane_ParamLimits

0x3807,	// (0x00021cdc) cale_month_day_heading_pane

0x3862,	// (0x00021d37) cale_month_pane_g1_ParamLimits

0x3862,	// (0x00021d37) cale_month_pane_g1

0x389a,	// (0x00021d6f) cale_month_pane_g2_ParamLimits

0x389a,	// (0x00021d6f) cale_month_pane_g2

0x38c5,	// (0x00021d9a) cale_month_pane_g3_ParamLimits

0x38c5,	// (0x00021d9a) cale_month_pane_g3

0x3915,	// (0x00021dea) cale_month_pane_g4_ParamLimits

0x3915,	// (0x00021dea) cale_month_pane_g4

0x3965,	// (0x00021e3a) cale_month_pane_g5_ParamLimits

0x3965,	// (0x00021e3a) cale_month_pane_g5

0x39b5,	// (0x00021e8a) cale_month_pane_g6_ParamLimits

0x39b5,	// (0x00021e8a) cale_month_pane_g6

0x3a05,	// (0x00021eda) cale_month_pane_g7_ParamLimits

0x3a05,	// (0x00021eda) cale_month_pane_g7

0x3a6d,	// (0x00021f42) cale_month_pane_g8_ParamLimits

0x3a6d,	// (0x00021f42) cale_month_pane_g8

0x3ad5,	// (0x00021faa) cale_month_pane_g9_ParamLimits

0x3ad5,	// (0x00021faa) cale_month_pane_g9

0x3b33,	// (0x00022008) cale_month_pane_g10_ParamLimits

0x3b33,	// (0x00022008) cale_month_pane_g10

0x3b91,	// (0x00022066) cale_month_pane_g11_ParamLimits

0x3b91,	// (0x00022066) cale_month_pane_g11

0x3be5,	// (0x000220ba) cale_month_pane_g12_ParamLimits

0x3be5,	// (0x000220ba) cale_month_pane_g12

0x3c3b,	// (0x00022110) cale_month_pane_g13_ParamLimits

0x3c3b,	// (0x00022110) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d760) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d760) cale_month_pane_g

0x3c91,	// (0x00022166) cale_month_week_pane

0x3ca6,	// (0x0002217b) grid_cale_month_pane_ParamLimits

0x3ca6,	// (0x0002217b) grid_cale_month_pane

0x3cf8,	// (0x000221cd) cale_month_day_heading_pane_t1

0x3d7e,	// (0x00022253) cale_month_day_heading_pane_t2

0x3e0f,	// (0x000222e4) cale_month_day_heading_pane_t3

0x3ea0,	// (0x00022375) cale_month_day_heading_pane_t4

0x3f31,	// (0x00022406) cale_month_day_heading_pane_t5

0x3fc2,	// (0x00022497) cale_month_day_heading_pane_t6

0x405f,	// (0x00022534) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d77b) cale_month_day_heading_pane_t

0xa38c,	// (0x00028861) bg_cale_side_pane_cp01

0x4108,	// (0x000225dd) cale_month_week_pane_t1

0x4121,	// (0x000225f6) cale_month_week_pane_t2

0x413a,	// (0x0002260f) cale_month_week_pane_t3

0x4153,	// (0x00022628) cale_month_week_pane_t4

0x4170,	// (0x00022645) cale_month_week_pane_t5

0x4191,	// (0x00022666) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d78a) cale_month_week_pane_t

0x41b2,	// (0x00022687) cell_cale_month_pane_ParamLimits

0x41b2,	// (0x00022687) cell_cale_month_pane

0x1280,	// (0x0001f755) cell_cale_month_pane_g1

0x128c,	// (0x0001f761) cell_cale_month_pane_t1_ParamLimits

0x128c,	// (0x0001f761) cell_cale_month_pane_t1

0xa39a,	// (0x0002886f) grid_highlight_pane_cp08

0xa256,	// (0x0002872b) main_smil_g1

0x4302,	// (0x000227d7) smil_status_pane

0xa71a,	// (0x00028bef) smil_text_pane

0xc0ec,	// (0x0002a5c1) bg_popup_call3_rect_pane_g8

0xc0f4,	// (0x0002a5c9) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002da43) bg_popup_call3_rect_pane_g

0xc33b,	// (0x0002a810) smil_status_volume_pane_g1

0xa724,	// (0x00028bf9) smil_status_pane_t1

0x1548,	// (0x0001fa1d) volume_smil_pane

0xa73b,	// (0x00028c10) list_smil_text_pane

0x4315,	// (0x000227ea) scroll_pane_cp011

0x4320,	// (0x000227f5) smil_text_list_pane_t1_ParamLimits

0x4320,	// (0x000227f5) smil_text_list_pane_t1

0x12ac,	// (0x0001f781) aid_volume_smil_ParamLimits

0x12ac,	// (0x0001f781) aid_volume_smil

0xa256,	// (0x0002872b) smil_volume_pane_g1

0xa256,	// (0x0002872b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d7aa) smil_volume_pane_g

0x296f,	// (0x00020e44) listscroll_cale_day_pane

0xa745,	// (0x00028c1a) bg_cale_pane

0xa75d,	// (0x00028c32) list_cale_pane

0xa780,	// (0x00028c55) scroll_pane_cp09

0xa791,	// (0x00028c66) cale_bg_pane_g1

0xa799,	// (0x00028c6e) cale_bg_pane_g2

0xa7a1,	// (0x00028c76) cale_bg_pane_g3

0xa7a9,	// (0x00028c7e) cale_bg_pane_g4

0xa7b1,	// (0x00028c86) cale_bg_pane_g5

0xa7b9,	// (0x00028c8e) cale_bg_pane_g6

0xa7c1,	// (0x00028c96) cale_bg_pane_g7

0xa7c9,	// (0x00028c9e) cale_bg_pane_g8

0xa7d1,	// (0x00028ca6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d7af) cale_bg_pane_g

0x43b4,	// (0x00022889) list_cale_time_pane_ParamLimits

0x43b4,	// (0x00022889) list_cale_time_pane

0xa7e1,	// (0x00028cb6) list_cale_time_pane_g1_ParamLimits

0xa7e1,	// (0x00028cb6) list_cale_time_pane_g1

0xa7ed,	// (0x00028cc2) list_cale_time_pane_g2_ParamLimits

0xa7ed,	// (0x00028cc2) list_cale_time_pane_g2

0x43e0,	// (0x000228b5) list_cale_time_pane_g3_ParamLimits

0x43e0,	// (0x000228b5) list_cale_time_pane_g3

0x43ee,	// (0x000228c3) list_cale_time_pane_g4_ParamLimits

0x43ee,	// (0x000228c3) list_cale_time_pane_g4

0x43fc,	// (0x000228d1) list_cale_time_pane_g5_ParamLimits

0x43fc,	// (0x000228d1) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d7c2) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d7c2) list_cale_time_pane_g

0xa807,	// (0x00028cdc) list_cale_time_pane_t1_ParamLimits

0xa807,	// (0x00028cdc) list_cale_time_pane_t1

0xa82f,	// (0x00028d04) list_cale_time_pane_t2_ParamLimits

0xa82f,	// (0x00028d04) list_cale_time_pane_t2

0x4720,	// (0x00022bf5) aid_blid_cardinal_pane

0x4762,	// (0x00022c37) compass_pane_t4

0xa857,	// (0x00028d2c) list_cale_time_pane_t4_ParamLimits

0xa857,	// (0x00028d2c) list_cale_time_pane_t4

0x4770,	// (0x00022c45) compass_pane_t5

0x4780,	// (0x00022c55) compass_pane_t6

0x478e,	// (0x00022c63) compass_pane_t7

0xad22,	// (0x000291f7) navi_pane_cc_t1

0xaf07,	// (0x000293dc) aid_phob_thumbnail_center_pane

0x4d9c,	// (0x00023271) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d7cf) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d7cf) list_cale_time_pane_t

0x9b19,	// (0x00027fee) bg_popup_window_pane_cp02_ParamLimits

0x9b19,	// (0x00027fee) bg_popup_window_pane_cp02

0xa87f,	// (0x00028d54) heading_pane_cp01_ParamLimits

0xa87f,	// (0x00028d54) heading_pane_cp01

0xa88b,	// (0x00028d60) loc_req_pane_ParamLimits

0xa88b,	// (0x00028d60) loc_req_pane

0xa89b,	// (0x00028d70) loc_type_pane_ParamLimits

0xa89b,	// (0x00028d70) loc_type_pane

0xa8ad,	// (0x00028d82) loc_type_pane_t1_ParamLimits

0xa8ad,	// (0x00028d82) loc_type_pane_t1

0xa8bf,	// (0x00028d94) loc_type_pane_t2_ParamLimits

0xa8bf,	// (0x00028d94) loc_type_pane_t2

0xa8d1,	// (0x00028da6) loc_type_pane_t3_ParamLimits

0xa8d1,	// (0x00028da6) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d7d6) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d7d6) loc_type_pane_t

0xa8e3,	// (0x00028db8) list_loc_req_pane

0xa8ed,	// (0x00028dc2) scroll_pane_cp012

0x440a,	// (0x000228df) list_single_loc_request_popup_menu_pane_ParamLimits

0x440a,	// (0x000228df) list_single_loc_request_popup_menu_pane

0xa8f8,	// (0x00028dcd) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa8f8,	// (0x00028dcd) list_single_loc_request_popup_menu_pane_g1

0xa904,	// (0x00028dd9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa904,	// (0x00028dd9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d7dd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d7dd) list_single_loc_request_popup_menu_pane_g

0xa910,	// (0x00028de5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa910,	// (0x00028de5) list_single_loc_request_popup_menu_pane_t1

0x4422,	// (0x000228f7) bg_popup_window_pane_cp03_ParamLimits

0x4422,	// (0x000228f7) bg_popup_window_pane_cp03

0x4430,	// (0x00022905) heading_loc_req_pane_ParamLimits

0x4430,	// (0x00022905) heading_loc_req_pane

0x443c,	// (0x00022911) popup_dyc_status_message_window_g1_ParamLimits

0x443c,	// (0x00022911) popup_dyc_status_message_window_g1

0x4448,	// (0x0002291d) popup_dyc_status_message_window_t1_ParamLimits

0x4448,	// (0x0002291d) popup_dyc_status_message_window_t1

0x445a,	// (0x0002292f) popup_dyc_status_message_window_t2_ParamLimits

0x445a,	// (0x0002292f) popup_dyc_status_message_window_t2

0x446c,	// (0x00022941) popup_dyc_status_message_window_t3_ParamLimits

0x446c,	// (0x00022941) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d7e2) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d7e2) popup_dyc_status_message_window_t

0x9ec2,	// (0x00028397) bg_heading_pane_cp01

0xa926,	// (0x00028dfb) heading_loc_req_pane_g1

0xa92e,	// (0x00028e03) heading_loc_req_pane_g2

0xa936,	// (0x00028e0b) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d7e9) heading_loc_req_pane_g

0xa93e,	// (0x00028e13) heading_loc_req_pane_t1

0xa94d,	// (0x00028e22) bg_popup_sub_pane_cp01_ParamLimits

0xa94d,	// (0x00028e22) bg_popup_sub_pane_cp01

0xa95b,	// (0x00028e30) popup_cale_events_window_g1_ParamLimits

0xa95b,	// (0x00028e30) popup_cale_events_window_g1

0xa97b,	// (0x00028e50) popup_cale_events_window_g2_ParamLimits

0xa97b,	// (0x00028e50) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d81d) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d81d) popup_cale_events_window_g

0xa99b,	// (0x00028e70) popup_cale_events_window_t1_ParamLimits

0xa99b,	// (0x00028e70) popup_cale_events_window_t1

0xa9ad,	// (0x00028e82) popup_cale_events_window_t2_ParamLimits

0xa9ad,	// (0x00028e82) popup_cale_events_window_t2

0xa9eb,	// (0x00028ec0) popup_cale_events_window_t3_ParamLimits

0xa9eb,	// (0x00028ec0) popup_cale_events_window_t3

0xaa25,	// (0x00028efa) popup_cale_events_window_t4_ParamLimits

0xaa25,	// (0x00028efa) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d822) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d822) popup_cale_events_window_t

0x4573,	// (0x00022a48) call_type_pane

0xab51,	// (0x00029026) popup_call_status_window_g1

0x457f,	// (0x00022a54) popup_call_status_window_g2

0x458b,	// (0x00022a60) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d82b) popup_call_status_window_g

0xaa5b,	// (0x00028f30) call_type_pane_g1

0xaa64,	// (0x00028f39) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d832) call_type_pane_g

0x9ec2,	// (0x00028397) bg_popup_sub_pane_cp02

0xaa6d,	// (0x00028f42) listscroll_popup_wml_pane

0xaa75,	// (0x00028f4a) list_wml_pane

0xaa7f,	// (0x00028f54) scroll_pane_cp013

0xaa8a,	// (0x00028f5f) list_single_graphic_popup_wml_pane_ParamLimits

0xaa8a,	// (0x00028f5f) list_single_graphic_popup_wml_pane

0xa256,	// (0x0002872b) list_single_graphic_popup_wml_pane_g1

0xaa9e,	// (0x00028f73) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d837) list_single_graphic_popup_wml_pane_g

0xaaa6,	// (0x00028f7b) list_single_graphic_popup_wml_pane_t1

0xaabc,	// (0x00028f91) aid_call_pane

0xa115,	// (0x000285ea) popup_clock_analogue_window_g1

0xa115,	// (0x000285ea) popup_clock_analogue_window_g2

0x12ce,	// (0x0001f7a3) popup_clock_analogue_window_g3

0x12ce,	// (0x0001f7a3) popup_clock_analogue_window_g4

0xa256,	// (0x0002872b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d83c) popup_clock_analogue_window_g

0x12d6,	// (0x0001f7ab) popup_clock_analogue_window_t1

0x12e4,	// (0x0001f7b9) clock_digital_number_pane_ParamLimits

0x12e4,	// (0x0001f7b9) clock_digital_number_pane

0x12f0,	// (0x0001f7c5) clock_digital_number_pane_cp02_ParamLimits

0x12f0,	// (0x0001f7c5) clock_digital_number_pane_cp02

0x12fc,	// (0x0001f7d1) clock_digital_number_pane_cp03_ParamLimits

0x12fc,	// (0x0001f7d1) clock_digital_number_pane_cp03

0x1308,	// (0x0001f7dd) clock_digital_number_pane_cp04_ParamLimits

0x1308,	// (0x0001f7dd) clock_digital_number_pane_cp04

0x1318,	// (0x0001f7ed) clock_digital_separator_pane_ParamLimits

0x1318,	// (0x0001f7ed) clock_digital_separator_pane

0x1324,	// (0x0001f7f9) popup_clock_digital_window_t1

0xa256,	// (0x0002872b) clock_digital_number_pane_g1

0xa256,	// (0x0002872b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d7aa) clock_digital_number_pane_g

0xa256,	// (0x0002872b) clock_digital_separator_pane_g1

0xa256,	// (0x0002872b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d7aa) clock_digital_separator_pane_g

0x9ec2,	// (0x00028397) bg_popup_window_pane_cp04

0xaac4,	// (0x00028f99) heading_pane_cp03

0xaacc,	// (0x00028fa1) listscroll_popup_gms_pane

0xaad4,	// (0x00028fa9) grid_large_graphic_popup_pane

0xaade,	// (0x00028fb3) listscroll_popup_gms_pane_g1

0xaae6,	// (0x00028fbb) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d847) listscroll_popup_gms_pane_g

0xa57f,	// (0x00028a54) scroll_pane_cp014

0xaaee,	// (0x00028fc3) cell_large_graphic_popup_pane_ParamLimits

0xaaee,	// (0x00028fc3) cell_large_graphic_popup_pane

0xab06,	// (0x00028fdb) cell_large_graphic_popup_pane_g1_ParamLimits

0xab06,	// (0x00028fdb) cell_large_graphic_popup_pane_g1

0xab12,	// (0x00028fe7) cell_large_graphic_popup_pane_g2_ParamLimits

0xab12,	// (0x00028fe7) cell_large_graphic_popup_pane_g2

0xab1e,	// (0x00028ff3) cell_large_graphic_popup_pane_g3_ParamLimits

0xab1e,	// (0x00028ff3) cell_large_graphic_popup_pane_g3

0xab2b,	// (0x00029000) cell_large_graphic_popup_pane_g4_ParamLimits

0xab2b,	// (0x00029000) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d84c) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d84c) cell_large_graphic_popup_pane_g

0xab3b,	// (0x00029010) grid_highlight_pane_cp010

0xa256,	// (0x0002872b) bg_popup_call_pane_g1

0xab5f,	// (0x00029034) list_single_graphic_popup_conf_pane_ParamLimits

0xab5f,	// (0x00029034) list_single_graphic_popup_conf_pane

0xab72,	// (0x00029047) list_highlight_pane_cp01

0xab7b,	// (0x00029050) list_single_graphic_popup_conf_pane_g1

0xab83,	// (0x00029058) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d855) list_single_graphic_popup_conf_pane_g

0xab8b,	// (0x00029060) list_single_graphic_popup_conf_pane_t1

0xab99,	// (0x0002906e) linegrid_cams_pane_g1

0x4597,	// (0x00022a6c) linegrid_cams_pane_g2

0xa30e,	// (0x000287e3) linegrid_cams_pane_g3

0xaba2,	// (0x00029077) linegrid_cams_pane_g4

0x45a0,	// (0x00022a75) linegrid_cams_pane_g5

0x45a9,	// (0x00022a7e) linegrid_cams_pane_g6

0xa3cd,	// (0x000288a2) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d85a) linegrid_cams_pane_g

0xabab,	// (0x00029080) popup_clock_analogue_window

0xabab,	// (0x00029080) popup_clock_digital_window

0x9ec2,	// (0x00028397) popup_phob_thumbnail_window

0xa256,	// (0x0002872b) call_video_uplink_pane_g1

0xabb4,	// (0x00029089) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d869) call_video_uplink_pane_g

0xa39a,	// (0x0002886f) video_uplink_pane

0xabbc,	// (0x00029091) mce_image_pane_g1

0x45b2,	// (0x00022a87) mce_image_pane_g2

0x45ba,	// (0x00022a8f) mce_image_pane_g3

0x45c2,	// (0x00022a97) mce_image_pane_g4

0x45ca,	// (0x00022a9f) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d86e) mce_image_pane_g

0xabc6,	// (0x0002909b) control_top_pane_stacon_cp01_ParamLimits

0xabc6,	// (0x0002909b) control_top_pane_stacon_cp01

0xabda,	// (0x000290af) uni_indicator_pane_stacon_cp01_ParamLimits

0xabda,	// (0x000290af) uni_indicator_pane_stacon_cp01

0xabeb,	// (0x000290c0) bg_popup_sub_pane_cp03

0x45d2,	// (0x00022aa7) chi_dic_find_pane

0x45da,	// (0x00022aaf) listscroll_chi_dic_pane

0x45e3,	// (0x00022ab8) main_pane_chidic_g1

0xabf5,	// (0x000290ca) chi_dic_find_pane_t1

0xac03,	// (0x000290d8) find_chidic_pane

0xac0c,	// (0x000290e1) chi_dic_list_pane_ParamLimits

0xac0c,	// (0x000290e1) chi_dic_list_pane

0xac1d,	// (0x000290f2) scroll_pane_cp020

0xac25,	// (0x000290fa) find_chidic_pane_t1

0x9ec2,	// (0x00028397) input_focus_pane_cp06

0x45f6,	// (0x00022acb) list_chi_dic_pane_ParamLimits

0x45f6,	// (0x00022acb) list_chi_dic_pane

0x4613,	// (0x00022ae8) list_chi_dic_pane_t1_ParamLimits

0x4613,	// (0x00022ae8) list_chi_dic_pane_t1

0x9ec2,	// (0x00028397) list_highlight_pane_cp020

0xac34,	// (0x00029109) bg_cale_heading_pane_g1

0x4626,	// (0x00022afb) bg_cale_heading_pane_g2

0x462e,	// (0x00022b03) bg_cale_heading_pane_g3

0x4636,	// (0x00022b0b) bg_cale_heading_pane_g4

0x4640,	// (0x00022b15) bg_cale_heading_pane_g5

0x464a,	// (0x00022b1f) bg_cale_heading_pane_g6

0x4652,	// (0x00022b27) bg_cale_heading_pane_g7

0x465a,	// (0x00022b2f) bg_cale_heading_pane_g8

0x4664,	// (0x00022b39) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d879) bg_cale_heading_pane_g

0xac34,	// (0x00029109) bg_cale_side_pane_g1

0x466e,	// (0x00022b43) bg_cale_side_pane_g2

0x4678,	// (0x00022b4d) bg_cale_side_pane_g3

0x4682,	// (0x00022b57) bg_cale_side_pane_g4

0x468c,	// (0x00022b61) bg_cale_side_pane_g5

0x4696,	// (0x00022b6b) bg_cale_side_pane_g6

0x46a0,	// (0x00022b75) bg_cale_side_pane_g7

0x46aa,	// (0x00022b7f) bg_cale_side_pane_g8

0x46b2,	// (0x00022b87) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d88c) bg_cale_side_pane_g

0x46ba,	// (0x00022b8f) popup_call_status_window_ParamLimits

0x46ba,	// (0x00022b8f) popup_call_status_window

0xac3c,	// (0x00029111) stacon_top_pane

0xac44,	// (0x00029119) status_pane_ParamLimits

0xac44,	// (0x00029119) status_pane

0xac59,	// (0x0002912e) status_small_pane

0xac61,	// (0x00029136) control_pane

0x9ec2,	// (0x00028397) stacon_bottom_pane

0xac69,	// (0x0002913e) list_single_mce_smart_pane_t1_ParamLimits

0xac69,	// (0x0002913e) list_single_mce_smart_pane_t1

0xac7c,	// (0x00029151) list_single_mce_smart_pane_t2_ParamLimits

0xac7c,	// (0x00029151) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d89f) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d89f) list_single_mce_smart_pane_t

0x46c6,	// (0x00022b9b) compass_pane

0x46d2,	// (0x00022ba7) main_location2_pane_t1

0x46e6,	// (0x00022bbb) main_location2_pane_t2

0x46fa,	// (0x00022bcf) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d8a4) main_location2_pane_t

0xac9b,	// (0x00029170) compass_pane_g1_ParamLimits

0xac9b,	// (0x00029170) compass_pane_g1

0x4744,	// (0x00022c19) compass_pane_t1

0x4753,	// (0x00022c28) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d8ad) compass_pane_t

0x479e,	// (0x00022c73) text_secondary_cp61

0xad19,	// (0x000291ee) navi_pane_cams_g5

0xad95,	// (0x0002926a) navi_pane_im_t1

0xada3,	// (0x00029278) navi_pane_mp_g1_ParamLimits

0xada3,	// (0x00029278) navi_pane_mp_g1

0xadb7,	// (0x0002928c) navi_pane_mp_g2_ParamLimits

0xadb7,	// (0x0002928c) navi_pane_mp_g2

0xadc3,	// (0x00029298) navi_pane_mp_g3_ParamLimits

0xadc3,	// (0x00029298) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d8c1) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d8c1) navi_pane_mp_g

0xadcf,	// (0x000292a4) navi_pane_mp_t1

0xaddd,	// (0x000292b2) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d8c8) navi_pane_mp_t

0xae48,	// (0x0002931d) navi_pane_vt_g1

0xadcf,	// (0x000292a4) navi_pane_vt_t1

0xae50,	// (0x00029325) navi_slider_pane

0xae60,	// (0x00029335) zooming_pane

0xae68,	// (0x0002933d) navi_slider_pane_g1

0x1341,	// (0x0001f816) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d8cf) navi_slider_pane_g

0xae8c,	// (0x00029361) aid_levels_zoom

0xae94,	// (0x00029369) zooming_pane_g1

0xae9c,	// (0x00029371) zooming_pane_g2

0xae9c,	// (0x00029371) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d8de) zooming_pane_g

0xaea4,	// (0x00029379) level_10_zoom

0xaead,	// (0x00029382) level_11_zoom

0xaeb6,	// (0x0002938b) level_1_zoom

0xaebf,	// (0x00029394) level_2_zoom

0xaec8,	// (0x0002939d) level_3_zoom

0xaed1,	// (0x000293a6) level_4_zoom

0xaeda,	// (0x000293af) level_5_zoom

0xaee3,	// (0x000293b8) level_6_zoom

0xaeec,	// (0x000293c1) level_7_zoom

0xaef5,	// (0x000293ca) level_8_zoom

0xaefe,	// (0x000293d3) level_9_zoom

0xaf0f,	// (0x000293e4) popup_phob_thumbnail_window_g1

0xaf17,	// (0x000293ec) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d8e5) popup_phob_thumbnail_window_g

0xc24e,	// (0x0002a723) level_1_location

0xc256,	// (0x0002a72b) level_2_location

0xc25e,	// (0x0002a733) level_3_location

0xc266,	// (0x0002a73b) level_4_location

0xae60,	// (0x00029335) level_5_location

0x47d9,	// (0x00022cae) mce_icon_pane_g1

0x47e1,	// (0x00022cb6) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d8ea) mce_icon_pane_g

0x47e9,	// (0x00022cbe) main_mup_pane_g1_ParamLimits

0x47e9,	// (0x00022cbe) main_mup_pane_g1

0x4801,	// (0x00022cd6) main_mup_pane_g2_ParamLimits

0x4801,	// (0x00022cd6) main_mup_pane_g2

0x481d,	// (0x00022cf2) main_mup_pane_g3_ParamLimits

0x481d,	// (0x00022cf2) main_mup_pane_g3

0x4839,	// (0x00022d0e) main_mup_pane_g4_ParamLimits

0x4839,	// (0x00022d0e) main_mup_pane_g4

0x4855,	// (0x00022d2a) main_mup_pane_g5_ParamLimits

0x4855,	// (0x00022d2a) main_mup_pane_g5

0x4876,	// (0x00022d4b) main_mup_pane_g6_ParamLimits

0x4876,	// (0x00022d4b) main_mup_pane_g6

0x4892,	// (0x00022d67) main_mup_pane_g7_ParamLimits

0x4892,	// (0x00022d67) main_mup_pane_g7

0x48ae,	// (0x00022d83) main_mup_pane_g8_ParamLimits

0x48ae,	// (0x00022d83) main_mup_pane_g8

0x48ca,	// (0x00022d9f) main_mup_pane_g9_ParamLimits

0x48ca,	// (0x00022d9f) main_mup_pane_g9

0x48e9,	// (0x00022dbe) main_mup_pane_g10_ParamLimits

0x48e9,	// (0x00022dbe) main_mup_pane_g10

0x4908,	// (0x00022ddd) main_mup_pane_g11_ParamLimits

0x4908,	// (0x00022ddd) main_mup_pane_g11

0x4920,	// (0x00022df5) main_mup_pane_g12_ParamLimits

0x4920,	// (0x00022df5) main_mup_pane_g12

0x492e,	// (0x00022e03) main_mup_pane_g13_ParamLimits

0x492e,	// (0x00022e03) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d8ef) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d8ef) main_mup_pane_g

0x4944,	// (0x00022e19) main_mup_pane_t1_ParamLimits

0x4944,	// (0x00022e19) main_mup_pane_t1

0x4961,	// (0x00022e36) main_mup_pane_t2_ParamLimits

0x4961,	// (0x00022e36) main_mup_pane_t2

0x497b,	// (0x00022e50) main_mup_pane_t3_ParamLimits

0x497b,	// (0x00022e50) main_mup_pane_t3

0x4995,	// (0x00022e6a) main_mup_pane_t4_ParamLimits

0x4995,	// (0x00022e6a) main_mup_pane_t4

0x49a7,	// (0x00022e7c) main_mup_pane_t5_ParamLimits

0x49a7,	// (0x00022e7c) main_mup_pane_t5

0x49b9,	// (0x00022e8e) main_mup_pane_t6_ParamLimits

0x49b9,	// (0x00022e8e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d90a) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d90a) main_mup_pane_t

0x49cf,	// (0x00022ea4) mup_progress_pane_ParamLimits

0x49cf,	// (0x00022ea4) mup_progress_pane

0x49db,	// (0x00022eb0) mup_visualizer_pane_ParamLimits

0x49db,	// (0x00022eb0) mup_visualizer_pane

0x4a19,	// (0x00022eee) mup_volume_pane_ParamLimits

0x4a19,	// (0x00022eee) mup_volume_pane

0xab51,	// (0x00029026) mup_visualizer_pane_g1_ParamLimits

0xab51,	// (0x00029026) mup_visualizer_pane_g1

0xab51,	// (0x00029026) mup_visualizer_pane_g2_ParamLimits

0xab51,	// (0x00029026) mup_visualizer_pane_g2

0xac9b,	// (0x00029170) mup_visualizer_pane_g3_ParamLimits

0xac9b,	// (0x00029170) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d917) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d917) mup_visualizer_pane_g

0xa256,	// (0x0002872b) mup_volume_pane_g1

0xaf27,	// (0x000293fc) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d91e) mup_volume_pane_g

0xa256,	// (0x0002872b) mup_progress_pane_g1

0xaf30,	// (0x00029405) mup_progress_pane_g2

0xaf39,	// (0x0002940e) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d923) mup_progress_pane_g

0x9ec2,	// (0x00028397) bg_popup_window_pane_cp05

0xaf42,	// (0x00029417) heading_pane_cp02_ParamLimits

0xaf42,	// (0x00029417) heading_pane_cp02

0xaf5c,	// (0x00029431) list_popup_blid_pane

0xaf64,	// (0x00029439) list_blid_sat_info_pane_ParamLimits

0xaf64,	// (0x00029439) list_blid_sat_info_pane

0xaf77,	// (0x0002944c) list_blid_sat_info_pane_g1

0xaf7f,	// (0x00029454) list_blid_sat_info_pane_t1

0x4b24,	// (0x00022ff9) mup_equalizer_pane_ParamLimits

0x4b24,	// (0x00022ff9) mup_equalizer_pane

0x4b45,	// (0x0002301a) mup_equalizer_pane_cp1_ParamLimits

0x4b45,	// (0x0002301a) mup_equalizer_pane_cp1

0x4b66,	// (0x0002303b) mup_equalizer_pane_cp2_ParamLimits

0x4b66,	// (0x0002303b) mup_equalizer_pane_cp2

0x4b87,	// (0x0002305c) mup_equalizer_pane_cp3_ParamLimits

0x4b87,	// (0x0002305c) mup_equalizer_pane_cp3

0x4ba8,	// (0x0002307d) mup_equalizer_pane_cp4_ParamLimits

0x4ba8,	// (0x0002307d) mup_equalizer_pane_cp4

0x4bc9,	// (0x0002309e) mup_equalizer_pane_cp5

0x4bdf,	// (0x000230b4) mup_equalizer_pane_cp6

0x4bf7,	// (0x000230cc) mup_equalizer_pane_cp7

0xc16c,	// (0x0002a641) bg_popup_call_poc_act_pane_g9

0xc174,	// (0x0002a649) bg_popup_call_poc_act_pane_g10

0xc17c,	// (0x0002a651) bg_popup_call_poc_act_pane_g11

0x000a,

0xa11d,	// (0x000285f2) mup_scale_pane

0xa256,	// (0x0002872b) mup_scale_pane_g1

0xaf8d,	// (0x00029462) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d93f) mup_scale_pane_g

0xafb1,	// (0x00029486) msg_data_pane

0xafb9,	// (0x0002948e) scroll_pane_cp017

0x4c21,	// (0x000230f6) bg_list_pane_cp04_ParamLimits

0x4c21,	// (0x000230f6) bg_list_pane_cp04

0xafc1,	// (0x00029496) msg_data_pane_g1

0x4c41,	// (0x00023116) msg_data_pane_g2

0x45ba,	// (0x00022a8f) msg_data_pane_g3

0x4c49,	// (0x0002311e) msg_data_pane_g4

0x4c51,	// (0x00023126) msg_data_pane_g5

0x4c59,	// (0x0002312e) msg_data_pane_g6

0x4c61,	// (0x00023136) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d94e) msg_data_pane_g

0x4c69,	// (0x0002313e) msg_text_pane_ParamLimits

0x4c69,	// (0x0002313e) msg_text_pane

0x4cb1,	// (0x00023186) qrid_highlight_pane_cp011_ParamLimits

0x4cb1,	// (0x00023186) qrid_highlight_pane_cp011

0x9ec2,	// (0x00028397) msg_body_pane

0x9ec2,	// (0x00028397) msg_header_pane

0xafd2,	// (0x000294a7) input_focus_pane_cp07

0xafe7,	// (0x000294bc) msg_header_pane_t1_ParamLimits

0xafe7,	// (0x000294bc) msg_header_pane_t1

0xaff9,	// (0x000294ce) msg_header_pane_t2_ParamLimits

0xaff9,	// (0x000294ce) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d962) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d962) msg_header_pane_t

0xb00b,	// (0x000294e0) msg_body_pane_g1

0x4cdb,	// (0x000231b0) msg_body_pane_t1_ParamLimits

0x4cdb,	// (0x000231b0) msg_body_pane_t1

0xb013,	// (0x000294e8) msg_body_pane_t2_ParamLimits

0xb013,	// (0x000294e8) msg_body_pane_t2

0xb025,	// (0x000294fa) msg_body_pane_t3_ParamLimits

0xb025,	// (0x000294fa) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d967) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d967) msg_body_pane_t

0x1383,	// (0x0001f858) main_viewer_pane_g1_ParamLimits

0x1383,	// (0x0001f858) main_viewer_pane_g1

0x138f,	// (0x0001f864) main_viewer_pane_g2_ParamLimits

0x138f,	// (0x0001f864) main_viewer_pane_g2

0x4d2e,	// (0x00023203) main_viewer_pane_g3_ParamLimits

0x4d2e,	// (0x00023203) main_viewer_pane_g3

0x4d3f,	// (0x00023214) main_viewer_pane_g4_ParamLimits

0x4d3f,	// (0x00023214) main_viewer_pane_g4

0x139b,	// (0x0001f870) main_viewer_pane_g5_ParamLimits

0x139b,	// (0x0001f870) main_viewer_pane_g5

0x139b,	// (0x0001f870) main_viewer_pane_g7_ParamLimits

0x139b,	// (0x0001f870) main_viewer_pane_g7

0xa8f8,	// (0x00028dcd) main_viewer_pane_g8_ParamLimits

0xa8f8,	// (0x00028dcd) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d977) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d977) main_viewer_pane_g

0xb037,	// (0x0002950c) viewer_content_pane_ParamLimits

0xb037,	// (0x0002950c) viewer_content_pane

0x4d70,	// (0x00023245) main_postcard_pane_g1_ParamLimits

0x4d70,	// (0x00023245) main_postcard_pane_g1

0x4d7e,	// (0x00023253) main_postcard_pane_g2_ParamLimits

0x4d7e,	// (0x00023253) main_postcard_pane_g2

0x4d8c,	// (0x00023261) main_postcard_pane_g3_ParamLimits

0x4d8c,	// (0x00023261) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d988) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d988) main_postcard_pane_g

0x4d9c,	// (0x00023271) main_postcard_pane_g4

0xc34e,	// (0x0002a823) smil_status_volume_pane_g2

0x4dc8,	// (0x0002329d) postcard_pane_ParamLimits

0x4dc8,	// (0x0002329d) postcard_pane

0xab51,	// (0x00029026) postcard_pane_g1_ParamLimits

0xab51,	// (0x00029026) postcard_pane_g1

0x4dfa,	// (0x000232cf) postcard_pane_g2_ParamLimits

0x4dfa,	// (0x000232cf) postcard_pane_g2

0x4e06,	// (0x000232db) postcard_pane_g3_ParamLimits

0x4e06,	// (0x000232db) postcard_pane_g3

0xb045,	// (0x0002951a) postcard_pane_g4_ParamLimits

0xb045,	// (0x0002951a) postcard_pane_g4

0x4e12,	// (0x000232e7) postcard_pane_g5_ParamLimits

0x4e12,	// (0x000232e7) postcard_pane_g5

0x4e1e,	// (0x000232f3) postcard_pane_g6_ParamLimits

0x4e1e,	// (0x000232f3) postcard_pane_g6

0xb053,	// (0x00029528) postcard_pane_g7_ParamLimits

0xb053,	// (0x00029528) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d995) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d995) postcard_pane_g

0x4e2a,	// (0x000232ff) main_mp2_pane_g1_ParamLimits

0x4e2a,	// (0x000232ff) main_mp2_pane_g1

0x4e36,	// (0x0002330b) main_mp2_pane_g2_ParamLimits

0x4e36,	// (0x0002330b) main_mp2_pane_g2

0x4e42,	// (0x00023317) main_mp2_pane_g3_ParamLimits

0x4e42,	// (0x00023317) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d9a4) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d9a4) main_mp2_pane_g

0x4e4e,	// (0x00023323) main_mp2_pane_t1_ParamLimits

0x4e4e,	// (0x00023323) main_mp2_pane_t1

0x4e65,	// (0x0002333a) main_mp2_pane_t2_ParamLimits

0x4e65,	// (0x0002333a) main_mp2_pane_t2

0x4e77,	// (0x0002334c) main_mp2_pane_t3_ParamLimits

0x4e77,	// (0x0002334c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d9ab) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d9ab) main_mp2_pane_t

0xb061,	// (0x00029536) pec_content_pane_ParamLimits

0xb061,	// (0x00029536) pec_content_pane

0xa57f,	// (0x00028a54) scroll_pane_cp015

0xb073,	// (0x00029548) pec_attribute_pane_ParamLimits

0xb073,	// (0x00029548) pec_attribute_pane

0x4e89,	// (0x0002335e) pec_content_pane_g1_ParamLimits

0x4e89,	// (0x0002335e) pec_content_pane_g1

0xb083,	// (0x00029558) pec_content_pane_t1_ParamLimits

0xb083,	// (0x00029558) pec_content_pane_t1

0xb095,	// (0x0002956a) pec_content_pane_t2_ParamLimits

0xb095,	// (0x0002956a) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d9b2) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d9b2) pec_content_pane_t

0x4e95,	// (0x0002336a) list_single_graphic_pane_cp01_ParamLimits

0x4e95,	// (0x0002336a) list_single_graphic_pane_cp01

0xa11d,	// (0x000285f2) bg_popup_sub_pane_cp04

0xb0a7,	// (0x0002957c) popup_mup_playback_window_g1

0xb0b3,	// (0x00029588) popup_mup_playback_window_t1

0xb0c8,	// (0x0002959d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d9b7) popup_mup_playback_window_t

0xb0ff,	// (0x000295d4) main_image_pane_g1_ParamLimits

0xb0ff,	// (0x000295d4) main_image_pane_g1

0xb142,	// (0x00029617) scroll_pane_cp018_ParamLimits

0xb142,	// (0x00029617) scroll_pane_cp018

0xb15a,	// (0x0002962f) scroll_pane_cp016_ParamLimits

0xb15a,	// (0x0002962f) scroll_pane_cp016

0x4f35,	// (0x0002340a) smil2_image_pane_ParamLimits

0x4f35,	// (0x0002340a) smil2_image_pane

0x4f69,	// (0x0002343e) smil2_root_pane_ParamLimits

0x4f69,	// (0x0002343e) smil2_root_pane

0x4f95,	// (0x0002346a) smil2_text_pane_ParamLimits

0x4f95,	// (0x0002346a) smil2_text_pane

0x9ec2,	// (0x00028397) bg_list_pane_cp06

0xb196,	// (0x0002966b) grid_radio_pane

0x9ec2,	// (0x00028397) bg_popup_window_pane_cp06

0xb19e,	// (0x00029673) main_fmradio_pane_t1

0xaac4,	// (0x00028f99) heading_pane_cp04

0xb1ac,	// (0x00029681) main_fmradio_pane_t2

0xc184,	// (0x0002a659) popup_cale_lunar_info_window_g1

0xb1ba,	// (0x0002968f) main_fmradio_pane_t3

0xc18c,	// (0x0002a661) popup_cale_lunar_info_window_g2

0xb1c8,	// (0x0002969d) main_fmradio_pane_t4

0x0001,

0xb1d6,	// (0x000296ab) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002da92) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d9cc) main_fmradio_pane_t

0xb1e4,	// (0x000296b9) wait_bar_pane_cp03

0xb1ec,	// (0x000296c1) cell_fmradio_pane_ParamLimits

0xb1ec,	// (0x000296c1) cell_fmradio_pane

0xb053,	// (0x00029528) cell_fmradio_pane_g1_ParamLimits

0xb053,	// (0x00029528) cell_fmradio_pane_g1

0x9ec2,	// (0x00028397) grid_highlight_pane_cp011

0xb1ff,	// (0x000296d4) poc_content_pane_ParamLimits

0xb1ff,	// (0x000296d4) poc_content_pane

0xb211,	// (0x000296e6) scroll_pane_cp019

0x4fd5,	// (0x000234aa) popup_call_poc_act_window_ParamLimits

0x4fd5,	// (0x000234aa) popup_call_poc_act_window

0x4fe2,	// (0x000234b7) popup_call_poc_inact_window_ParamLimits

0x4fe2,	// (0x000234b7) popup_call_poc_inact_window

0xf594,	// (0x0002da69) bg_popup_call_poc_act_pane_g

0xc0fc,	// (0x0002a5d1) bg_popup_call_poc_inact_pane_g1

0xc104,	// (0x0002a5d9) bg_popup_call_poc_inact_pane_g2

0xb219,	// (0x000296ee) popup_call_poc_act_window_g2

0xc10c,	// (0x0002a5e1) bg_popup_call_poc_inact_pane_g3

0xc114,	// (0x0002a5e9) bg_popup_call_poc_inact_pane_g4

0xc11c,	// (0x0002a5f1) bg_popup_call_poc_inact_pane_g5

0xb221,	// (0x000296f6) popup_call_poc_act_window_t1_ParamLimits

0xb221,	// (0x000296f6) popup_call_poc_act_window_t1

0xb249,	// (0x0002971e) popup_call_poc_act_window_t2_ParamLimits

0xb249,	// (0x0002971e) popup_call_poc_act_window_t2

0xb271,	// (0x00029746) popup_call_poc_act_window_t3_ParamLimits

0xb271,	// (0x00029746) popup_call_poc_act_window_t3

0xb299,	// (0x0002976e) popup_call_poc_act_window_t4_ParamLimits

0xb299,	// (0x0002976e) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d9d7) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d9d7) popup_call_poc_act_window_t

0xc124,	// (0x0002a5f9) bg_popup_call_poc_inact_pane_g6

0xc12c,	// (0x0002a601) bg_popup_call_poc_inact_pane_g7

0xc134,	// (0x0002a609) bg_popup_call_poc_inact_pane_g8

0xb2ab,	// (0x00029780) popup_call_poc_inact_window_g2

0xc13c,	// (0x0002a611) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002da56) bg_popup_call_poc_inact_pane_g

0xb2b3,	// (0x00029788) popup_call_poc_inact_window_t1_ParamLimits

0xb2b3,	// (0x00029788) popup_call_poc_inact_window_t1

0xb2c8,	// (0x0002979d) popup_call_poc_inact_window_t2_ParamLimits

0xb2c8,	// (0x0002979d) popup_call_poc_inact_window_t2

0xb2dd,	// (0x000297b2) popup_call_poc_inact_window_t3_ParamLimits

0xb2dd,	// (0x000297b2) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d9e0) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d9e0) popup_call_poc_inact_window_t

0xc2c1,	// (0x0002a796) context_pane_ParamLimits

0x549c,	// (0x00023971) signal_pane_ParamLimits

0xae60,	// (0x00029335) main_call2_pane

0x14ec,	// (0x0001f9c1) popup_phob_thumbnail2_window_ParamLimits

0x14ec,	// (0x0001f9c1) popup_phob_thumbnail2_window

0x1353,	// (0x0001f828) aid_hotspot_pointer_arrow_pane

0x135b,	// (0x0001f830) aid_hotspot_pointer_hand_pane

0x5308,	// (0x000237dd) phob_pre_status_pane_g5

0x2e05,	// (0x000212da) cams_zoom_pane_ParamLimits

0x2e11,	// (0x000212e6) image_vga_pane_ParamLimits

0x2e20,	// (0x000212f5) main_camera_pane_g1_ParamLimits

0x2e2e,	// (0x00021303) main_camera_pane_g2_ParamLimits

0x2e3a,	// (0x0002130f) main_camera_pane_g3_ParamLimits

0x2e46,	// (0x0002131b) main_camera_pane_g4_ParamLimits

0x2e52,	// (0x00021327) main_camera_pane_g5_ParamLimits

0x2e5e,	// (0x00021333) main_camera_pane_g6_ParamLimits

0x2e6a,	// (0x0002133f) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d6df) main_camera_pane_g_ParamLimits

0x2e76,	// (0x0002134b) main_camera_pane_t1_ParamLimits

0x2e88,	// (0x0002135d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d6f0) main_camera_pane_t_ParamLimits

0xa11d,	// (0x000285f2) bg_popup_preview_window_pane_cp01_ParamLimits

0xa11d,	// (0x000285f2) bg_popup_preview_window_pane_cp01

0xb2f2,	// (0x000297c7) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2f2,	// (0x000297c7) popup_phob_thumbnail2_window_g1

0x9ec2,	// (0x00028397) call2_cli_visual_pane

0x4ffe,	// (0x000234d3) popup_call2_audio_conf_window_ParamLimits

0x4ffe,	// (0x000234d3) popup_call2_audio_conf_window

0x5013,	// (0x000234e8) popup_call2_audio_first_window_ParamLimits

0x5013,	// (0x000234e8) popup_call2_audio_first_window

0x50b1,	// (0x00023586) popup_call2_audio_in_window_ParamLimits

0x50b1,	// (0x00023586) popup_call2_audio_in_window

0x50f3,	// (0x000235c8) popup_call2_audio_out_window_ParamLimits

0x50f3,	// (0x000235c8) popup_call2_audio_out_window

0x5155,	// (0x0002362a) popup_call2_audio_second_window_ParamLimits

0x5155,	// (0x0002362a) popup_call2_audio_second_window

0x51b3,	// (0x00023688) popup_call2_audio_wait_window_ParamLimits

0x51b3,	// (0x00023688) popup_call2_audio_wait_window

0x9ec2,	// (0x00028397) bg_popup_call2_act_pane_cp03

0xa0ff,	// (0x000285d4) list_conf_pane_cp

0xb2fe,	// (0x000297d3) popup_call2_audio_conf_window_t1

0xb30c,	// (0x000297e1) list_single_graphic_popup_conf2_pane_ParamLimits

0xb30c,	// (0x000297e1) list_single_graphic_popup_conf2_pane

0xab72,	// (0x00029047) list_highlight_pane_cp04

0xb31f,	// (0x000297f4) list_single_graphic_popup_conf2_pane_g1

0xab83,	// (0x00029058) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d9e7) list_single_graphic_popup_conf2_pane_g

0xb329,	// (0x000297fe) list_single_graphic_popup_conf2_pane_t1

0xb337,	// (0x0002980c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb337,	// (0x0002980c) bg_popup_call2_act_pane_cp01

0xb3c1,	// (0x00029896) call_type_pane_cp05_ParamLimits

0xb3c1,	// (0x00029896) call_type_pane_cp05

0xb415,	// (0x000298ea) popup_call2_audio_second_window_g1_ParamLimits

0xb415,	// (0x000298ea) popup_call2_audio_second_window_g1

0xb469,	// (0x0002993e) popup_call2_audio_second_window_g2_ParamLimits

0xb469,	// (0x0002993e) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d9ec) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d9ec) popup_call2_audio_second_window_g

0xb4ce,	// (0x000299a3) popup_call2_audio_second_window_t1_ParamLimits

0xb4ce,	// (0x000299a3) popup_call2_audio_second_window_t1

0xb589,	// (0x00029a5e) popup_call2_audio_second_window_t2_ParamLimits

0xb589,	// (0x00029a5e) popup_call2_audio_second_window_t2

0xb5dc,	// (0x00029ab1) popup_call2_audio_second_window_t3_ParamLimits

0xb5dc,	// (0x00029ab1) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d9f3) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d9f3) popup_call2_audio_second_window_t

0x9ec2,	// (0x00028397) bg_popup_call2_in_pane_cp02

0x9ecc,	// (0x000283a1) call_type_pane_cp04

0x9ed4,	// (0x000283a9) popup_call2_audio_wait_window_g1

0x9edc,	// (0x000283b1) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002d5ca) popup_call2_audio_wait_window_g

0x9ee4,	// (0x000283b9) popup_call2_audio_wait_window_t3

0xb6cf,	// (0x00029ba4) bg_popup_call2_act_pane_ParamLimits

0xb6cf,	// (0x00029ba4) bg_popup_call2_act_pane

0xb78f,	// (0x00029c64) call_type_pane_cp03_ParamLimits

0xb78f,	// (0x00029c64) call_type_pane_cp03

0xb7f3,	// (0x00029cc8) popup_call2_audio_first_window_g1_ParamLimits

0xb7f3,	// (0x00029cc8) popup_call2_audio_first_window_g1

0xb863,	// (0x00029d38) popup_call2_audio_first_window_g2_ParamLimits

0xb863,	// (0x00029d38) popup_call2_audio_first_window_g2

0xab51,	// (0x00029026) popup_call2_audio_first_window_g3_ParamLimits

0xab51,	// (0x00029026) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d9fc) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d9fc) popup_call2_audio_first_window_g

0xb941,	// (0x00029e16) popup_call2_audio_first_window_t1_ParamLimits

0xb941,	// (0x00029e16) popup_call2_audio_first_window_t1

0xba44,	// (0x00029f19) popup_call2_audio_first_window_t4_ParamLimits

0xba44,	// (0x00029f19) popup_call2_audio_first_window_t4

0xbb27,	// (0x00029ffc) popup_call2_audio_first_window_t5_ParamLimits

0xbb27,	// (0x00029ffc) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002da07) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002da07) popup_call2_audio_first_window_t

0xa115,	// (0x000285ea) bg_popup_call2_act_pane_g1

0xc194,	// (0x0002a669) popup_cale_lunar_info_window_t1

0xc1a2,	// (0x0002a677) popup_cale_lunar_info_window_t2

0xc1b0,	// (0x0002a685) popup_cale_lunar_info_window_t3

0x9ec2,	// (0x00028397) bg_popup_call2_bubble_pane

0xbc28,	// (0x0002a0fd) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc28,	// (0x0002a0fd) bg_popup_call2_in_pane_cp01

0x9b9e,	// (0x00028073) call_type_pane_cp02

0xbc70,	// (0x0002a145) popup_call2_audio_out_window_g1_ParamLimits

0xbc70,	// (0x0002a145) popup_call2_audio_out_window_g1

0xbc9c,	// (0x0002a171) popup_call2_audio_out_window_g2_ParamLimits

0xbc9c,	// (0x0002a171) popup_call2_audio_out_window_g2

0xbcc4,	// (0x0002a199) popup_call2_audio_out_window_g3_ParamLimits

0xbcc4,	// (0x0002a199) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002da10) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002da10) popup_call2_audio_out_window_g

0xbcff,	// (0x0002a1d4) popup_call2_audio_out_window_t1_ParamLimits

0xbcff,	// (0x0002a1d4) popup_call2_audio_out_window_t1

0xbd5e,	// (0x0002a233) popup_call2_audio_out_window_t2_ParamLimits

0xbd5e,	// (0x0002a233) popup_call2_audio_out_window_t2

0xbdb2,	// (0x0002a287) popup_call2_audio_out_window_t3_ParamLimits

0xbdb2,	// (0x0002a287) popup_call2_audio_out_window_t3

0xbdc8,	// (0x0002a29d) popup_call2_audio_out_window_t4_ParamLimits

0xbdc8,	// (0x0002a29d) popup_call2_audio_out_window_t4

0xbdde,	// (0x0002a2b3) popup_call2_audio_out_window_t5_ParamLimits

0xbdde,	// (0x0002a2b3) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002da19) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002da19) popup_call2_audio_out_window_t

0xbe42,	// (0x0002a317) bg_popup_call2_in_pane_ParamLimits

0xbe42,	// (0x0002a317) bg_popup_call2_in_pane

0xbe9e,	// (0x0002a373) popup_call2_audio_in_window_g1_ParamLimits

0xbe9e,	// (0x0002a373) popup_call2_audio_in_window_g1

0xbed6,	// (0x0002a3ab) popup_call2_audio_in_window_g2_ParamLimits

0xbed6,	// (0x0002a3ab) popup_call2_audio_in_window_g2

0xbf0e,	// (0x0002a3e3) popup_call2_audio_in_window_g3_ParamLimits

0xbf0e,	// (0x0002a3e3) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002da26) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002da26) popup_call2_audio_in_window_g

0xbf66,	// (0x0002a43b) popup_call2_audio_in_window_t1_ParamLimits

0xbf66,	// (0x0002a43b) popup_call2_audio_in_window_t1

0xbfe6,	// (0x0002a4bb) popup_call2_audio_in_window_t2_ParamLimits

0xbfe6,	// (0x0002a4bb) popup_call2_audio_in_window_t2

0xc066,	// (0x0002a53b) popup_call2_audio_in_window_t3_ParamLimits

0xc066,	// (0x0002a53b) popup_call2_audio_in_window_t3

0xc080,	// (0x0002a555) popup_call2_audio_in_window_t4_ParamLimits

0xc080,	// (0x0002a555) popup_call2_audio_in_window_t4

0xc092,	// (0x0002a567) popup_call2_audio_in_window_t5_ParamLimits

0xc092,	// (0x0002a567) popup_call2_audio_in_window_t5

0xc0a7,	// (0x0002a57c) popup_call2_audio_in_window_t6_ParamLimits

0xc0a7,	// (0x0002a57c) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002da2f) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002da2f) popup_call2_audio_in_window_t

0xa115,	// (0x000285ea) bg_popup_call2_in_pane_g1

0xc1be,	// (0x0002a693) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002da97) popup_cale_lunar_info_window_t

0xa11d,	// (0x000285f2) bg_popup_call2_rect_pane_ParamLimits

0xa11d,	// (0x000285f2) bg_popup_call2_rect_pane

0x9ec2,	// (0x00028397) call2_cli_visual_graphic_pane

0x9ec2,	// (0x00028397) call2_cli_visual_text_pane

0x153b,	// (0x0001fa10) smil_status_volume_pane_g3

0x0002,

0xa256,	// (0x0002872b) call2_cli_visual_graphic_pane_g1

0xa256,	// (0x0002872b) call2_cli_visual_graphic_pane_g2

0xa256,	// (0x0002872b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002da3c) call2_cli_visual_graphic_pane_g

0xc0bc,	// (0x0002a591) bg_popup_call2_rect_pane_g1

0xa2f4,	// (0x000287c9) bg_popup_call2_rect_pane_g2

0xc0c4,	// (0x0002a599) bg_popup_call2_rect_pane_g3

0xc0cc,	// (0x0002a5a1) bg_popup_call2_rect_pane_g4

0xc0d4,	// (0x0002a5a9) bg_popup_call2_rect_pane_g5

0xc0dc,	// (0x0002a5b1) bg_popup_call2_rect_pane_g6

0xc0e4,	// (0x0002a5b9) bg_popup_call2_rect_pane_g7

0xc0ec,	// (0x0002a5c1) bg_popup_call2_rect_pane_g8

0xc0f4,	// (0x0002a5c9) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002da43) bg_popup_call2_rect_pane_g

0xc0fc,	// (0x0002a5d1) bg_popup_call2_bubble_pane_g1

0xc104,	// (0x0002a5d9) bg_popup_call2_bubble_pane_g2

0xc10c,	// (0x0002a5e1) bg_popup_call2_bubble_pane_g3

0xc114,	// (0x0002a5e9) bg_popup_call2_bubble_pane_g4

0xc11c,	// (0x0002a5f1) bg_popup_call2_bubble_pane_g5

0xc124,	// (0x0002a5f9) bg_popup_call2_bubble_pane_g6

0xc12c,	// (0x0002a601) bg_popup_call2_bubble_pane_g7

0xc134,	// (0x0002a609) bg_popup_call2_bubble_pane_g8

0xc13c,	// (0x0002a611) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002da56) bg_popup_call2_bubble_pane_g

0x297f,	// (0x00020e54) aid_cale_week_size_cell_pane

0x2e9a,	// (0x0002136f) aid_cams_cif_uncrop_pane_ParamLimits

0x2e9a,	// (0x0002136f) aid_cams_cif_uncrop_pane

0x2ff5,	// (0x000214ca) aid_cams_size_cell_ParamLimits

0x2ff5,	// (0x000214ca) aid_cams_size_cell

0x3001,	// (0x000214d6) grid_cams_pane_ParamLimits

0x300f,	// (0x000214e4) linegrid_cams_pane_ParamLimits

0x31f4,	// (0x000216c9) call_video_pane_t1

0x3215,	// (0x000216ea) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d743) call_video_pane_t

0x3784,	// (0x00021c59) aid_cale_month_size_cell_pane_ParamLimits

0x3784,	// (0x00021c59) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002dae0) smil_status_volume_pane_g

0x1548,	// (0x0001fa1d) volume_smil_pane_ParamLimits

0x0c74,	// (0x0001f149) aid_popup2_width_pane

0x28ad,	// (0x00020d82) cell_qdial_pane_g4_ParamLimits

0x28ad,	// (0x00020d82) cell_qdial_pane_g4

0x4720,	// (0x00022bf5) aid_blid_cardinal_pane_ParamLimits

0x4730,	// (0x00022c05) aid_blid_destination_pane_ParamLimits

0x4730,	// (0x00022c05) aid_blid_destination_pane

0xa11d,	// (0x000285f2) bg_popup_call_poc_act_pane_ParamLimits

0xa11d,	// (0x000285f2) bg_popup_call_poc_act_pane

0xa11d,	// (0x000285f2) bg_popup_call_poc_inact_pane_ParamLimits

0xa11d,	// (0x000285f2) bg_popup_call_poc_inact_pane

0xc144,	// (0x0002a619) bg_popup_call_poc_act_pane_g1

0xc14c,	// (0x0002a621) bg_popup_call_poc_act_pane_g2

0xc154,	// (0x0002a629) bg_popup_call_poc_act_pane_g3

0xc114,	// (0x0002a5e9) bg_popup_call_poc_act_pane_g4

0xc11c,	// (0x0002a5f1) bg_popup_call_poc_act_pane_g5

0xc15c,	// (0x0002a631) bg_popup_call_poc_act_pane_g6

0xc12c,	// (0x0002a601) bg_popup_call_poc_act_pane_g7

0xc164,	// (0x0002a639) bg_popup_call_poc_act_pane_g8

0x9ec2,	// (0x00028397) main_usb_pane

0x1425,	// (0x0001f8fa) popup_cale_lunar_info_window

0x3534,	// (0x00021a09) im_reading_pane_t1_ParamLimits

0xa4d7,	// (0x000289ac) list_im_pane_ParamLimits

0xa4e8,	// (0x000289bd) scroll_pane_cp07_ParamLimits

0x9ec2,	// (0x00028397) grid_highlight_pane_cp012

0xa11d,	// (0x000285f2) mup_scale_pane_ParamLimits

0xab51,	// (0x00029026) main_usb_pane_g1_ParamLimits

0xab51,	// (0x00029026) main_usb_pane_g1

0x522b,	// (0x00023700) main_usb_pane_g2_ParamLimits

0x522b,	// (0x00023700) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002da80) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002da80) main_usb_pane_g

0x5237,	// (0x0002370c) main_usb_pane_t1_ParamLimits

0x5237,	// (0x0002370c) main_usb_pane_t1

0x5249,	// (0x0002371e) main_usb_pane_t2_ParamLimits

0x5249,	// (0x0002371e) main_usb_pane_t2

0x525b,	// (0x00023730) main_usb_pane_t3_ParamLimits

0x525b,	// (0x00023730) main_usb_pane_t3

0x526d,	// (0x00023742) main_usb_pane_t4_ParamLimits

0x526d,	// (0x00023742) main_usb_pane_t4

0x527f,	// (0x00023754) main_usb_pane_t5_ParamLimits

0x527f,	// (0x00023754) main_usb_pane_t5

0x5291,	// (0x00023766) main_usb_pane_t6_ParamLimits

0x5291,	// (0x00023766) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002da85) main_usb_pane_t_ParamLimits

0x46c6,	// (0x00022b9b) aid_text_placing

0x46d2,	// (0x00022ba7) main_location2_pane_t1_ParamLimits

0x46e6,	// (0x00022bbb) main_location2_pane_t2_ParamLimits

0x46fa,	// (0x00022bcf) main_location2_pane_t3_ParamLimits

0x470e,	// (0x00022be3) main_location2_pane_t4_ParamLimits

0x470e,	// (0x00022be3) main_location2_pane_t4

0xf3cf,	// (0x0002d8a4) main_location2_pane_t_ParamLimits

0xa159,	// (0x0002862e) find_pinb_pane_g2_ParamLimits

0xa159,	// (0x0002862e) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0002d5f0) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0002d5f0) find_pinb_pane_g

0xa165,	// (0x0002863a) find_pinb_pane_t1_ParamLimits

0xa177,	// (0x0002864c) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0002d5f5) find_pinb_pane_t_ParamLimits

0x9ec2,	// (0x00028397) main_call3_pane

0x3cf8,	// (0x000221cd) cale_month_day_heading_pane_t1_ParamLimits

0x3d7e,	// (0x00022253) cale_month_day_heading_pane_t2_ParamLimits

0x3e0f,	// (0x000222e4) cale_month_day_heading_pane_t3_ParamLimits

0x3ea0,	// (0x00022375) cale_month_day_heading_pane_t4_ParamLimits

0x3f31,	// (0x00022406) cale_month_day_heading_pane_t5_ParamLimits

0x3fc2,	// (0x00022497) cale_month_day_heading_pane_t6_ParamLimits

0x405f,	// (0x00022534) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d77b) cale_month_day_heading_pane_t_ParamLimits

0xa732,	// (0x00028c07) smil_status_volume_pane

0x4de2,	// (0x000232b7) postcard_address_pane_ParamLimits

0x4de2,	// (0x000232b7) postcard_address_pane

0x4dee,	// (0x000232c3) postcard_message_pane_ParamLimits

0x4dee,	// (0x000232c3) postcard_message_pane

0x51f2,	// (0x000236c7) call2_cli_visual_pane_t1_ParamLimits

0x51f2,	// (0x000236c7) call2_cli_visual_pane_t1

0x568a,	// (0x00023b5f) postcard_message_pane_t1_ParamLimits

0x568a,	// (0x00023b5f) postcard_message_pane_t1

0x5673,	// (0x00023b48) postcard_address_pane_t1_ParamLimits

0x5673,	// (0x00023b48) postcard_address_pane_t1

0x5664,	// (0x00023b39) popup_call3_audio_in_window_ParamLimits

0x5664,	// (0x00023b39) popup_call3_audio_in_window

0x554a,	// (0x00023a1f) bg_popup_call3_in_pane_ParamLimits

0x554a,	// (0x00023a1f) bg_popup_call3_in_pane

0x55aa,	// (0x00023a7f) popup_call3_audio_in_window_g1_ParamLimits

0x55aa,	// (0x00023a7f) popup_call3_audio_in_window_g1

0x55c2,	// (0x00023a97) popup_call3_audio_in_window_g2_ParamLimits

0x55c2,	// (0x00023a97) popup_call3_audio_in_window_g2

0x55da,	// (0x00023aaf) popup_call3_audio_in_window_g3_ParamLimits

0x55da,	// (0x00023aaf) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002dae7) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002dae7) popup_call3_audio_in_window_g

0x5602,	// (0x00023ad7) popup_call3_audio_in_window_t1_ParamLimits

0x5602,	// (0x00023ad7) popup_call3_audio_in_window_t1

0x562a,	// (0x00023aff) popup_call3_audio_in_window_t2_ParamLimits

0x562a,	// (0x00023aff) popup_call3_audio_in_window_t2

0x5652,	// (0x00023b27) popup_call3_audio_in_window_t3_ParamLimits

0x5652,	// (0x00023b27) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002daf0) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002daf0) popup_call3_audio_in_window_t

0xae60,	// (0x00029335) bg_popup_call3_rect_pane

0xc0bc,	// (0x0002a591) bg_popup_call3_rect_pane_g1

0xa2f4,	// (0x000287c9) bg_popup_call3_rect_pane_g2

0xc0c4,	// (0x0002a599) bg_popup_call3_rect_pane_g3

0xc0cc,	// (0x0002a5a1) bg_popup_call3_rect_pane_g4

0xc0d4,	// (0x0002a5a9) bg_popup_call3_rect_pane_g5

0xc0dc,	// (0x0002a5b1) bg_popup_call3_rect_pane_g6

0xc0e4,	// (0x0002a5b9) bg_popup_call3_rect_pane_g7

0x4a34,	// (0x00022f09) mup_visualizer_osc_pane

0xaf1f,	// (0x000293f4) mup_visualizer_spec_pane

0x556a,	// (0x00023a3f) call3_video_qcif_pane_ParamLimits

0x556a,	// (0x00023a3f) call3_video_qcif_pane

0x557a,	// (0x00023a4f) call3_video_qcif_uncrop_pane_ParamLimits

0x557a,	// (0x00023a4f) call3_video_qcif_uncrop_pane

0x5588,	// (0x00023a5d) call3_video_subqcif_pane_ParamLimits

0x5588,	// (0x00023a5d) call3_video_subqcif_pane

0x559a,	// (0x00023a6f) call3_video_subqcif_uncrop_pane_ParamLimits

0x559a,	// (0x00023a6f) call3_video_subqcif_uncrop_pane

0x55f2,	// (0x00023ac7) popup_call3_audio_in_window_g4_ParamLimits

0x55f2,	// (0x00023ac7) popup_call3_audio_in_window_g4

0x5537,	// (0x00023a0c) mup_spec_half_pane

0x5540,	// (0x00023a15) mup_spec_half_pane_cp

0xc321,	// (0x0002a7f6) mup_osc_middle_pane

0xc32a,	// (0x0002a7ff) mup_visualizer_osc_pane_g1

0x5518,	// (0x000239ed) mup_spec_bar_pane_ParamLimits

0x5518,	// (0x000239ed) mup_spec_bar_pane

0xc30e,	// (0x0002a7e3) mup_spec_bar_pane_g1

0xc318,	// (0x0002a7ed) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002dadb) mup_spec_bar_pane_g

0x297f,	// (0x00020e54) aid_cale_week_size_cell_pane_ParamLimits

0x2994,	// (0x00020e69) bg_cale_heading_pane_ParamLimits

0xa331,	// (0x00028806) bg_cale_pane_cp01_ParamLimits

0x29b6,	// (0x00020e8b) cale_week_corner_pane_ParamLimits

0x29d0,	// (0x00020ea5) cale_week_day_heading_pane_ParamLimits

0x29f2,	// (0x00020ec7) cale_week_scroll_pane_g1_ParamLimits

0x2a0f,	// (0x00020ee4) cale_week_scroll_pane_g2_ParamLimits

0x2a22,	// (0x00020ef7) cale_week_scroll_pane_g3_ParamLimits

0x2a35,	// (0x00020f0a) cale_week_scroll_pane_g4_ParamLimits

0x2a48,	// (0x00020f1d) cale_week_scroll_pane_g5_ParamLimits

0x2a5b,	// (0x00020f30) cale_week_scroll_pane_g6_ParamLimits

0x2a6e,	// (0x00020f43) cale_week_scroll_pane_g7_ParamLimits

0x2a81,	// (0x00020f56) cale_week_scroll_pane_g8_ParamLimits

0x2a96,	// (0x00020f6b) cale_week_scroll_pane_g9_ParamLimits

0x2aa9,	// (0x00020f7e) cale_week_scroll_pane_g10_ParamLimits

0x2abc,	// (0x00020f91) cale_week_scroll_pane_g11_ParamLimits

0x2acf,	// (0x00020fa4) cale_week_scroll_pane_g12_ParamLimits

0x2ae6,	// (0x00020fbb) cale_week_scroll_pane_g13_ParamLimits

0x2b01,	// (0x00020fd6) cale_week_scroll_pane_g14_ParamLimits

0x2b1c,	// (0x00020ff1) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0002d681) cale_week_scroll_pane_g_ParamLimits

0x2b4c,	// (0x00021021) cale_week_time_pane_ParamLimits

0x2b61,	// (0x00021036) grid_cale_week_pane_ParamLimits

0xa35d,	// (0x00028832) listscroll_cale_week_pane_t1

0xa36f,	// (0x00028844) scroll_pane_cp08_ParamLimits

0x37ed,	// (0x00021cc2) cale_month_corner_pane_ParamLimits

0xa708,	// (0x00028bdd) cale_month_pane_t1

0x3c91,	// (0x00022166) cale_month_week_pane_ParamLimits

0xab51,	// (0x00029026) popup_call_status_window_g1_ParamLimits

0x457f,	// (0x00022a54) popup_call_status_window_g2_ParamLimits

0x458b,	// (0x00022a60) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d82b) popup_call_status_window_g_ParamLimits

0xaab4,	// (0x00028f89) aid_call2_pane

0x4ccd,	// (0x000231a2) msg_header_pane_g1

0x4de2,	// (0x000232b7) postcard_address2_pane_ParamLimits

0x4de2,	// (0x000232b7) postcard_address2_pane

0x4dee,	// (0x000232c3) postcard_message2_pane_ParamLimits

0x4dee,	// (0x000232c3) postcard_message2_pane

0x54aa,	// (0x0002397f) message2_row_pane_ParamLimits

0x54aa,	// (0x0002397f) message2_row_pane

0x54c7,	// (0x0002399c) address2_row_pane_ParamLimits

0x54c7,	// (0x0002399c) address2_row_pane

0xc2dc,	// (0x0002a7b1) postcard_message2_row_pane_g1

0xc2e4,	// (0x0002a7b9) postcard_message2_row_pane_t1

0xc2dc,	// (0x0002a7b1) address2_row_pane_g1

0xc2e4,	// (0x0002a7b9) address2_row_pane_t1

0x11fa,	// (0x0001f6cf) aid_size_cell_vorec

0x9ec2,	// (0x00028397) main_rss_pane

0x54da,	// (0x000239af) rss_list_single_pane_ParamLimits

0x54da,	// (0x000239af) rss_list_single_pane

0xc2f2,	// (0x0002a7c7) rss_list_single_pane_t1

0xc300,	// (0x0002a7d5) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002dad6) rss_list_single_pane_t

0x9ec2,	// (0x00028397) main_camera2_pane

0x9ec2,	// (0x00028397) main_video2_pane

0x15a6,	// (0x0001fa7b) cams_zoom_pane_cp2_ParamLimits

0x15a6,	// (0x0001fa7b) cams_zoom_pane_cp2

0x15b2,	// (0x0001fa87) image2_vga_pane_ParamLimits

0x15b2,	// (0x0001fa87) image2_vga_pane

0x15c1,	// (0x0001fa96) main_camera2_pane_g1_ParamLimits

0x15c1,	// (0x0001fa96) main_camera2_pane_g1

0x15cd,	// (0x0001faa2) main_camera2_pane_g2_ParamLimits

0x15cd,	// (0x0001faa2) main_camera2_pane_g2

0x15d9,	// (0x0001faae) main_camera2_pane_g3_ParamLimits

0x15d9,	// (0x0001faae) main_camera2_pane_g3

0x15e5,	// (0x0001faba) main_camera2_pane_g4_ParamLimits

0x15e5,	// (0x0001faba) main_camera2_pane_g4

0x15f1,	// (0x0001fac6) main_camera2_pane_g5_ParamLimits

0x15f1,	// (0x0001fac6) main_camera2_pane_g5

0x15fd,	// (0x0001fad2) main_camera2_pane_g6_ParamLimits

0x15fd,	// (0x0001fad2) main_camera2_pane_g6

0x1609,	// (0x0001fade) main_camera2_pane_g7_ParamLimits

0x1609,	// (0x0001fade) main_camera2_pane_g7

0x1615,	// (0x0001faea) main_camera2_pane_g8_ParamLimits

0x1615,	// (0x0001faea) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002daf7) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002daf7) main_camera2_pane_g

0x162d,	// (0x0001fb02) main_camera2_pane_t1_ParamLimits

0x162d,	// (0x0001fb02) main_camera2_pane_t1

0x163f,	// (0x0001fb14) main_camera2_pane_t2_ParamLimits

0x163f,	// (0x0001fb14) main_camera2_pane_t2

0x1651,	// (0x0001fb26) main_camera2_pane_t3_ParamLimits

0x1651,	// (0x0001fb26) main_camera2_pane_t3

0x1663,	// (0x0001fb38) main_camera2_pane_t4_ParamLimits

0x1663,	// (0x0001fb38) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002db0a) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002db0a) main_camera2_pane_t

0x16c5,	// (0x0001fb9a) cams_zoom_pane_cp4_ParamLimits

0x16c5,	// (0x0001fb9a) cams_zoom_pane_cp4

0x16d5,	// (0x0001fbaa) image2_cif_pane_ParamLimits

0x16d5,	// (0x0001fbaa) image2_cif_pane

0x16ea,	// (0x0001fbbf) image2_subqcif_pane_ParamLimits

0x16ea,	// (0x0001fbbf) image2_subqcif_pane

0x16f9,	// (0x0001fbce) main_video2_pane_g1_ParamLimits

0x16f9,	// (0x0001fbce) main_video2_pane_g1

0x170b,	// (0x0001fbe0) main_video2_pane_g2_ParamLimits

0x170b,	// (0x0001fbe0) main_video2_pane_g2

0x171b,	// (0x0001fbf0) main_video2_pane_g3_ParamLimits

0x171b,	// (0x0001fbf0) main_video2_pane_g3

0x172b,	// (0x0001fc00) main_video2_pane_g4_ParamLimits

0x172b,	// (0x0001fc00) main_video2_pane_g4

0x173b,	// (0x0001fc10) main_video2_pane_g5_ParamLimits

0x173b,	// (0x0001fc10) main_video2_pane_g5

0x174b,	// (0x0001fc20) main_video2_pane_g6_ParamLimits

0x174b,	// (0x0001fc20) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002db19) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002db19) main_video2_pane_g

0x175d,	// (0x0001fc32) main_video2_pane_t1_ParamLimits

0x175d,	// (0x0001fc32) main_video2_pane_t1

0x1777,	// (0x0001fc4c) main_video2_pane_t2_ParamLimits

0x1777,	// (0x0001fc4c) main_video2_pane_t2

0x179d,	// (0x0001fc72) main_video2_pane_t3_ParamLimits

0x179d,	// (0x0001fc72) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002db26) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002db26) main_video2_pane_t

0x5348,	// (0x0002381d) call_muted_g2

0x0001,

0xf5f3,	// (0x0002dac8) call_muted_g

0x9ec2,	// (0x00028397) main_mup2_pane

0xc361,	// (0x0002a836) main_mup2_pane_g1_ParamLimits

0xc361,	// (0x0002a836) main_mup2_pane_g1

0x56a5,	// (0x00023b7a) main_mup2_pane_g2_ParamLimits

0x56a5,	// (0x00023b7a) main_mup2_pane_g2

0x17ec,	// (0x0001fcc1) main_mup_pane_g13_cp1

0x17f4,	// (0x0001fcc9) mup_volume_pane_cp1

0x56c5,	// (0x00023b9a) main_mup2_pane_g4_ParamLimits

0x56c5,	// (0x00023b9a) main_mup2_pane_g4

0x56da,	// (0x00023baf) main_mup2_pane_g5_ParamLimits

0x56da,	// (0x00023baf) main_mup2_pane_g5

0x56ef,	// (0x00023bc4) main_mup2_pane_g6_ParamLimits

0x56ef,	// (0x00023bc4) main_mup2_pane_g6

0x5704,	// (0x00023bd9) main_mup2_pane_g7_ParamLimits

0x5704,	// (0x00023bd9) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002db2d) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002db2d) main_mup2_pane_g

0x5720,	// (0x00023bf5) main_mup2_pane_t1_ParamLimits

0x5720,	// (0x00023bf5) main_mup2_pane_t1

0x5737,	// (0x00023c0c) main_mup2_pane_t2_ParamLimits

0x5737,	// (0x00023c0c) main_mup2_pane_t2

0x574e,	// (0x00023c23) main_mup2_pane_t3_ParamLimits

0x574e,	// (0x00023c23) main_mup2_pane_t3

0x5765,	// (0x00023c3a) main_mup2_pane_t4_ParamLimits

0x5765,	// (0x00023c3a) main_mup2_pane_t4

0x577f,	// (0x00023c54) main_mup2_pane_t5_ParamLimits

0x577f,	// (0x00023c54) main_mup2_pane_t5

0x5799,	// (0x00023c6e) main_mup2_pane_t6_ParamLimits

0x5799,	// (0x00023c6e) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002db3c) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002db3c) main_mup2_pane_t

0x57d1,	// (0x00023ca6) mup2_visualizer_pane_ParamLimits

0x57d1,	// (0x00023ca6) mup2_visualizer_pane

0x5807,	// (0x00023cdc) mup_progress_pane_cp_ParamLimits

0x5807,	// (0x00023cdc) mup_progress_pane_cp

0x17d7,	// (0x0001fcac) mup_volume_pane_cp_ParamLimits

0x17d7,	// (0x0001fcac) mup_volume_pane_cp

0x581e,	// (0x00023cf3) mup2_visualizer_pane_g1_ParamLimits

0x581e,	// (0x00023cf3) mup2_visualizer_pane_g1

0xc36d,	// (0x0002a842) mup2_visualizer_pane_g2_ParamLimits

0xc36d,	// (0x0002a842) mup2_visualizer_pane_g2

0x5833,	// (0x00023d08) mup2_visualizer_pane_g3_ParamLimits

0x5833,	// (0x00023d08) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002db49) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002db49) mup2_visualizer_pane_g

0xb18e,	// (0x00029663) aid_size_cell_fmradio

0x13b9,	// (0x0001f88e) aid_height_parent_landcape

0xa566,	// (0x00028a3b) wml_content_pane_cp

0xa56e,	// (0x00028a43) wml_tabs_pane

0xa577,	// (0x00028a4c) popup_wml_miniature_window

0xa57f,	// (0x00028a54) scroll_pane_cp021

0xa593,	// (0x00028a68) wml_content_pane_comp8

0x9ec2,	// (0x00028397) bg_popup_sub_pane_cp05

0xc38b,	// (0x0002a860) popup_wml_miniature_window_g1

0xc393,	// (0x0002a868) wml_miniature_view_pane

0x5841,	// (0x00023d16) aid_size_wml_view

0x5849,	// (0x00023d1e) wml_miniature_view_pane_g1

0x5852,	// (0x00023d27) wml_miniature_view_pane_g2

0x585b,	// (0x00023d30) wml_miniature_view_pane_g3

0x5863,	// (0x00023d38) wml_miniature_view_pane_g4

0x586b,	// (0x00023d40) wml_miniature_view_pane_g5

0x5873,	// (0x00023d48) wml_miniature_view_pane_g6

0x587b,	// (0x00023d50) wml_miniature_view_pane_g7

0x5883,	// (0x00023d58) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002db50) wml_miniature_view_pane_g

0xc361,	// (0x0002a836) background_graphic_ParamLimits

0xc361,	// (0x0002a836) background_graphic

0xc39b,	// (0x0002a870) wml_tabs_2_pane

0xc3a4,	// (0x0002a879) wml_tabs_3_pane_ParamLimits

0xc3a4,	// (0x0002a879) wml_tabs_3_pane

0xc3b6,	// (0x0002a88b) wml_tabs_4_pane_ParamLimits

0xc3b6,	// (0x0002a88b) wml_tabs_4_pane

0xc3cc,	// (0x0002a8a1) wml_tabs_5_pane_ParamLimits

0xc3cc,	// (0x0002a8a1) wml_tabs_5_pane

0xc3e6,	// (0x0002a8bb) wml_tabs_pane_g2_ParamLimits

0xc3e6,	// (0x0002a8bb) wml_tabs_pane_g2

0xc3fa,	// (0x0002a8cf) wml_tabs_pane_g3_ParamLimits

0xc3fa,	// (0x0002a8cf) wml_tabs_pane_g3

0x588b,	// (0x00023d60) wml_tabs_2_active_pane_ParamLimits

0x588b,	// (0x00023d60) wml_tabs_2_active_pane

0x589b,	// (0x00023d70) wml_tabs_2_passive_pane_ParamLimits

0x589b,	// (0x00023d70) wml_tabs_2_passive_pane

0x58ab,	// (0x00023d80) wml_tabs_3_active_pane_cp_ParamLimits

0x58ab,	// (0x00023d80) wml_tabs_3_active_pane_cp

0x58bc,	// (0x00023d91) wml_tabs_3_passive_pane_ParamLimits

0x58bc,	// (0x00023d91) wml_tabs_3_passive_pane

0x58cd,	// (0x00023da2) wml_tabs_3_passive_pane_cp_ParamLimits

0x58cd,	// (0x00023da2) wml_tabs_3_passive_pane_cp

0x58de,	// (0x00023db3) tabs_4_active_pane

0x58e6,	// (0x00023dbb) tabs_4_passive_pane

0x58ee,	// (0x00023dc3) tabs_4_passive_pane_cp

0x58f6,	// (0x00023dcb) tabs_4_passive_pane_cp2

0x5223,	// (0x000236f8) aid_height_text

0x49fd,	// (0x00022ed2) mup_volume_cont_pane_ParamLimits

0x49fd,	// (0x00022ed2) mup_volume_cont_pane

0x2667,	// (0x00020b3c) aid_size_cell_pinb

0x2671,	// (0x00020b46) aid_size_list_pinb

0x57f0,	// (0x00023cc5) mup2_volume_cont_pane_ParamLimits

0x57f0,	// (0x00023cc5) mup2_volume_cont_pane

0x17c3,	// (0x0001fc98) mup2_volume_cont_pane_g1_ParamLimits

0x17c3,	// (0x0001fc98) mup2_volume_cont_pane_g1

0x0c80,	// (0x0001f155) aid_size_cell_touch_ParamLimits

0x0c80,	// (0x0001f155) aid_size_cell_touch

0x0f08,	// (0x0001f3dd) touch_pane_ParamLimits

0x0f08,	// (0x0001f3dd) touch_pane

0x0efe,	// (0x0001f3d3) main_rss2_pane

0xc417,	// (0x0002a8ec) listscroll_rss2_pane

0xc420,	// (0x0002a8f5) rss2_navigation_pane

0xc428,	// (0x0002a8fd) list_rss2_pane

0xac1d,	// (0x000290f2) scroll_pane_cp22

0xc430,	// (0x0002a905) rss2_navigation_pane_g1

0xc439,	// (0x0002a90e) rss2_navigation_pane_g2

0xc441,	// (0x0002a916) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002db61) rss2_navigation_pane_g

0xc449,	// (0x0002a91e) rss2_navigation_pane_t1

0x58fe,	// (0x00023dd3) rss2_list_single_pane_ParamLimits

0x58fe,	// (0x00023dd3) rss2_list_single_pane

0xc457,	// (0x0002a92c) rss2_list_single_pane_t2

0xc465,	// (0x0002a93a) rss2_list_single_pane_t3_ParamLimits

0xc465,	// (0x0002a93a) rss2_list_single_pane_t3

0xc482,	// (0x0002a957) rss2_list_single_pane_t4

0x430d,	// (0x000227e2) smil_status_pane_g1

0x13d0,	// (0x0001f8a5) main_image2_pane_ParamLimits

0x13d0,	// (0x0001f8a5) main_image2_pane

0x1621,	// (0x0001faf6) main_camera2_pane_g9_ParamLimits

0x1621,	// (0x0001faf6) main_camera2_pane_g9

0x1675,	// (0x0001fb4a) main_camera2_pane_t5_ParamLimits

0x1675,	// (0x0001fb4a) main_camera2_pane_t5

0x1687,	// (0x0001fb5c) main_camera2_pane_t6_ParamLimits

0x1687,	// (0x0001fb5c) main_camera2_pane_t6

0x5936,	// (0x00023e0b) main_image2_pane_g1_ParamLimits

0x5936,	// (0x00023e0b) main_image2_pane_g1

0x4fbf,	// (0x00023494) smil2_video_pane_ParamLimits

0x4fbf,	// (0x00023494) smil2_video_pane

0x0cb4,	// (0x0001f189) aid_zoom_text_primary_cp

0x0ea5,	// (0x0001f37a) popup_preview_fixed_window

0xa4cf,	// (0x000289a4) im_reading_pane_g1

0x156b,	// (0x0001fa40) cams2_bc_adjust_pane_cp_ParamLimits

0x156b,	// (0x0001fa40) cams2_bc_adjust_pane_cp

0x16b7,	// (0x0001fb8c) cams2_bc_adjust_pane_ParamLimits

0x16b7,	// (0x0001fb8c) cams2_bc_adjust_pane

0xd7af,	// (0x0002bc84) cams2_bc_adjust_pane_g1

0x17fc,	// (0x0001fcd1) cams2_slider_pane

0x1805,	// (0x0001fcda) cams2_slider_pane_g1

0x180e,	// (0x0001fce3) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002db68) cams2_slider_pane_g

0x0f79,	// (0x0001f44e) calc_display_pane_ParamLimits

0x0f97,	// (0x0001f46c) calc_paper_pane_ParamLimits

0x0fb3,	// (0x0001f488) grid_calc_pane_ParamLimits

0x1324,	// (0x0001f7f9) popup_clock_digital_window_t1_ParamLimits

0xb12b,	// (0x00029600) main_image_pane_t1

0x0f5f,	// (0x0001f434) aid_size_cell_calc_ParamLimits

0x0f5f,	// (0x0001f434) aid_size_cell_calc

0x1401,	// (0x0001f8d6) popup_blid_sat_info2_window_ParamLimits

0x1401,	// (0x0001f8d6) popup_blid_sat_info2_window

0xc498,	// (0x0002a96d) aid_size_cell_blid

0xc4a0,	// (0x0002a975) bg_popup_window_pane_cp07

0xc4c3,	// (0x0002a998) grid_popup_blid_pane

0xc4cd,	// (0x0002a9a2) heading_pane_cp05_ParamLimits

0xc4cd,	// (0x0002a9a2) heading_pane_cp05

0xc597,	// (0x0002aa6c) cell_popup_blid_pane_ParamLimits

0xc597,	// (0x0002aa6c) cell_popup_blid_pane

0xc5bd,	// (0x0002aa92) cell_popup_blid_pane_g1

0xc5c5,	// (0x0002aa9a) cell_popup_blid_pane_t1

0x57b6,	// (0x00023c8b) mup2_indicator_pane_ParamLimits

0x57b6,	// (0x00023c8b) mup2_indicator_pane

0xae60,	// (0x00029335) mup2_visualizer_osc_pane

0xc379,	// (0x0002a84e) mup2_visualizer_spec_pane_ParamLimits

0xc379,	// (0x0002a84e) mup2_visualizer_spec_pane

0x5942,	// (0x00023e17) mup2_spec_half_pane

0x594b,	// (0x00023e20) mup2_spec_half_pane_cp

0x5955,	// (0x00023e2a) mup2_spec_bar_pane_ParamLimits

0x5955,	// (0x00023e2a) mup2_spec_bar_pane

0xc30e,	// (0x0002a7e3) mup2_spec_bar_pane_g1

0xc318,	// (0x0002a7ed) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002dadb) mup2_spec_bar_pane_g

0x5974,	// (0x00023e49) mup2_osc_middle_pane

0xc32a,	// (0x0002a7ff) mup2_visualizer_osc_pane_g1

0x9acf,	// (0x00027fa4) popup_number_entry_window_t1_ParamLimits

0x9ae2,	// (0x00027fb7) popup_number_entry_window_t2_ParamLimits

0x9af4,	// (0x00027fc9) popup_number_entry_window_t3_ParamLimits

0x25a1,	// (0x00020a76) popup_number_entry_window_t5_ParamLimits

0x25a1,	// (0x00020a76) popup_number_entry_window_t5

0xf0c6,	// (0x0002d59b) popup_number_entry_window_t_ParamLimits

0x9b06,	// (0x00027fdb) text_title_cp2_ParamLimits

0x1363,	// (0x0001f838) aid_hotspot_pointer_text2_pane

0x13ad,	// (0x0001f882) main_viewer_pane_g9_ParamLimits

0x13ad,	// (0x0001f882) main_viewer_pane_g9

0xa708,	// (0x00028bdd) cale_month_pane_t1_ParamLimits

0xa745,	// (0x00028c1a) bg_cale_pane_ParamLimits

0xa75d,	// (0x00028c32) list_cale_pane_ParamLimits

0xa76e,	// (0x00028c43) listscroll_cale_day_pane_t1

0xa780,	// (0x00028c55) scroll_pane_cp09_ParamLimits

0x4a3c,	// (0x00022f11) main_mup_eq_pane_t1_ParamLimits

0x4a3c,	// (0x00022f11) main_mup_eq_pane_t1

0x4a56,	// (0x00022f2b) main_mup_eq_pane_t2_ParamLimits

0x4a56,	// (0x00022f2b) main_mup_eq_pane_t2

0x4a6e,	// (0x00022f43) main_mup_eq_pane_t3_ParamLimits

0x4a6e,	// (0x00022f43) main_mup_eq_pane_t3

0x4a86,	// (0x00022f5b) main_mup_eq_pane_t4_ParamLimits

0x4a86,	// (0x00022f5b) main_mup_eq_pane_t4

0x4a9e,	// (0x00022f73) main_mup_eq_pane_t5_ParamLimits

0x4a9e,	// (0x00022f73) main_mup_eq_pane_t5

0x4ab6,	// (0x00022f8b) main_mup_eq_pane_t6_ParamLimits

0x4ab6,	// (0x00022f8b) main_mup_eq_pane_t6

0x4aca,	// (0x00022f9f) main_mup_eq_pane_t7_ParamLimits

0x4aca,	// (0x00022f9f) main_mup_eq_pane_t7

0x4ade,	// (0x00022fb3) main_mup_eq_pane_t8_ParamLimits

0x4ade,	// (0x00022fb3) main_mup_eq_pane_t8

0x4af4,	// (0x00022fc9) main_mup_eq_pane_t9_ParamLimits

0x4af4,	// (0x00022fc9) main_mup_eq_pane_t9

0x4b0c,	// (0x00022fe1) main_mup_eq_pane_t10_ParamLimits

0x4b0c,	// (0x00022fe1) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d92a) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d92a) main_mup_eq_pane_t

0x4bc9,	// (0x0002309e) mup_equalizer_pane_cp5_ParamLimits

0x4bdf,	// (0x000230b4) mup_equalizer_pane_cp6_ParamLimits

0x4bf7,	// (0x000230cc) mup_equalizer_pane_cp7_ParamLimits

0x0efe,	// (0x0001f3d3) main_gallery_pane

0xc333,	// (0x0002a808) smil2_volume_pane

0xc33b,	// (0x0002a810) smil_status_volume_pane_g1_ParamLimits

0xc34e,	// (0x0002a823) smil_status_volume_pane_g2_ParamLimits

0x153b,	// (0x0001fa10) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002dae0) smil_status_volume_pane_g_ParamLimits

0xc4a0,	// (0x0002a975) bg_popup_window_pane_cp07_ParamLimits

0xc4ae,	// (0x0002a983) blid_firmament_pane

0x597d,	// (0x00023e52) aid_size_cell_gallery_ParamLimits

0x597d,	// (0x00023e52) aid_size_cell_gallery

0x598b,	// (0x00023e60) grid_gallery_pane_ParamLimits

0x598b,	// (0x00023e60) grid_gallery_pane

0x599b,	// (0x00023e70) cell_gallery_pane_ParamLimits

0x599b,	// (0x00023e70) cell_gallery_pane

0xc5d3,	// (0x0002aaa8) bg_cell_gallery_focus_pane_ParamLimits

0xc5d3,	// (0x0002aaa8) bg_cell_gallery_focus_pane

0xc5e5,	// (0x0002aaba) cell_gallery_pane_g1_ParamLimits

0xc5e5,	// (0x0002aaba) cell_gallery_pane_g1

0x59e9,	// (0x00023ebe) cell_gallery_pane_g2_ParamLimits

0x59e9,	// (0x00023ebe) cell_gallery_pane_g2

0x59f6,	// (0x00023ecb) cell_gallery_pane_g3_ParamLimits

0x59f6,	// (0x00023ecb) cell_gallery_pane_g3

0xc5f1,	// (0x0002aac6) cell_gallery_pane_g4_ParamLimits

0xc5f1,	// (0x0002aac6) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002db8e) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002db8e) cell_gallery_pane_g

0xc5fd,	// (0x0002aad2) bg_cell_gallery_focus_pane_g1

0xc605,	// (0x0002aada) bg_cell_gallery_focus_pane_g2

0xc60d,	// (0x0002aae2) bg_cell_gallery_focus_pane_g3

0xc615,	// (0x0002aaea) bg_cell_gallery_focus_pane_g4

0xc61d,	// (0x0002aaf2) bg_cell_gallery_focus_pane_g5

0xc625,	// (0x0002aafa) bg_cell_gallery_focus_pane_g6

0xc62d,	// (0x0002ab02) bg_cell_gallery_focus_pane_g7

0xc635,	// (0x0002ab0a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002db97) bg_cell_gallery_focus_pane_g

0xc63d,	// (0x0002ab12) aid_firma_cardinal

0xc651,	// (0x0002ab26) blid_firmament_pane_t1

0xc668,	// (0x0002ab3d) blid_firmament_pane_t2

0xc67f,	// (0x0002ab54) blid_firmament_pane_t3

0xc696,	// (0x0002ab6b) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002dba8) blid_firmament_pane_t

0xc6ad,	// (0x0002ab82) blid_sat_info_pane

0xc6bd,	// (0x0002ab92) blid_sat_info_pane_g1

0xc6bd,	// (0x0002ab92) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002dbb1) blid_sat_info_pane_g

0xc6c7,	// (0x0002ab9c) blid_sat_info_pane_t1

0xc6d5,	// (0x0002abaa) smil2_volume_content_pane

0xc6de,	// (0x0002abb3) smil2_volume_pane_g1

0xa28b,	// (0x00028760) smil2_volume_content_pane_g1

0xc6e6,	// (0x0002abbb) smil2_volume_content_pane_g2

0xc6ef,	// (0x0002abc4) smil2_volume_content_pane_g3

0xc6f8,	// (0x0002abcd) smil2_volume_content_pane_g4

0xc701,	// (0x0002abd6) smil2_volume_content_pane_g5

0xc70a,	// (0x0002abdf) smil2_volume_content_pane_g6

0xc713,	// (0x0002abe8) smil2_volume_content_pane_g7

0xc71c,	// (0x0002abf1) smil2_volume_content_pane_g8

0xc725,	// (0x0002abfa) smil2_volume_content_pane_g9

0xc72e,	// (0x0002ac03) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002dbb6) smil2_volume_content_pane_g

0x2be6,	// (0x000210bb) cale_week_day_heading_pane_t1_ParamLimits

0x2c21,	// (0x000210f6) cale_week_day_heading_pane_t2_ParamLimits

0x2c5c,	// (0x00021131) cale_week_day_heading_pane_t3_ParamLimits

0x2c97,	// (0x0002116c) cale_week_day_heading_pane_t4_ParamLimits

0x2cd2,	// (0x000211a7) cale_week_day_heading_pane_t5_ParamLimits

0x2d0d,	// (0x000211e2) cale_week_day_heading_pane_t6_ParamLimits

0x2d48,	// (0x0002121d) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0002d6a2) cale_week_day_heading_pane_t_ParamLimits

0xa38c,	// (0x00028861) bg_cale_side_pane_ParamLimits

0x110a,	// (0x0001f5df) cale_week_time_pane_t1_ParamLimits

0x1124,	// (0x0001f5f9) cale_week_time_pane_t2_ParamLimits

0x113e,	// (0x0001f613) cale_week_time_pane_t3_ParamLimits

0x1158,	// (0x0001f62d) cale_week_time_pane_t4_ParamLimits

0x1172,	// (0x0001f647) cale_week_time_pane_t5_ParamLimits

0x118e,	// (0x0001f663) cale_week_time_pane_t6_ParamLimits

0x11b0,	// (0x0001f685) cale_week_time_pane_t7_ParamLimits

0x11d4,	// (0x0001f6a9) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0002d6b1) cale_week_time_pane_t_ParamLimits

0x2d83,	// (0x00021258) cell_cale_week_pane_g2_ParamLimits

0xa38c,	// (0x00028861) bg_cale_side_pane_cp01_ParamLimits

0x4108,	// (0x000225dd) cale_month_week_pane_t1_ParamLimits

0x4121,	// (0x000225f6) cale_month_week_pane_t2_ParamLimits

0x413a,	// (0x0002260f) cale_month_week_pane_t3_ParamLimits

0x4153,	// (0x00022628) cale_month_week_pane_t4_ParamLimits

0x4170,	// (0x00022645) cale_month_week_pane_t5_ParamLimits

0x4191,	// (0x00022666) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d78a) cale_month_week_pane_t_ParamLimits

0x1280,	// (0x0001f755) cell_cale_month_pane_g1_ParamLimits

0x0efe,	// (0x0001f3d3) main_cale_event_viewer_pane

0x9aa5,	// (0x00027f7a) listscroll_cale_event_viewer_pane

0xc737,	// (0x0002ac0c) list_cale_ev_pane

0xc73f,	// (0x0002ac14) scroll_pane_cp023

0xc74b,	// (0x0002ac20) field_cale_ev_pane_ParamLimits

0xc74b,	// (0x0002ac20) field_cale_ev_pane

0xc767,	// (0x0002ac3c) field_cale_ev_content_pane_ParamLimits

0xc767,	// (0x0002ac3c) field_cale_ev_content_pane

0xc773,	// (0x0002ac48) field_cale_ev_pane_g1_ParamLimits

0xc773,	// (0x0002ac48) field_cale_ev_pane_g1

0xc77f,	// (0x0002ac54) field_cale_ev_pane_g2_ParamLimits

0xc77f,	// (0x0002ac54) field_cale_ev_pane_g2

0xc797,	// (0x0002ac6c) field_cale_ev_pane_g3_ParamLimits

0xc797,	// (0x0002ac6c) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002dbcb) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002dbcb) field_cale_ev_pane_g

0xc7af,	// (0x0002ac84) field_cale_ev_pane_t1_ParamLimits

0xc7af,	// (0x0002ac84) field_cale_ev_pane_t1

0xc7c6,	// (0x0002ac9b) field_cale_ev_content_pane_t1_ParamLimits

0xc7c6,	// (0x0002ac9b) field_cale_ev_content_pane_t1

0xafc9,	// (0x0002949e) bg_button_pane_cp01

0x296f,	// (0x00020e44) listscroll_cale_week_pane_ParamLimits

0xa328,	// (0x000287fd) popup_toolbar_window_cp01

0xa35d,	// (0x00028832) listscroll_cale_week_pane_t1_ParamLimits

0x296f,	// (0x00020e44) listscroll_cale_day_pane_ParamLimits

0xa328,	// (0x000287fd) popup_toolbar_window_cp02

0xa76e,	// (0x00028c43) listscroll_cale_day_pane_t1_ParamLimits

0x296f,	// (0x00020e44) main_cale_month_pane_ParamLimits

0x14fe,	// (0x0001f9d3) popup_toolbar_window_cp03_ParamLimits

0x14fe,	// (0x0001f9d3) popup_toolbar_window_cp03

0x4ed1,	// (0x000233a6) main_image_pane_g2_ParamLimits

0x4ed1,	// (0x000233a6) main_image_pane_g2

0x4edd,	// (0x000233b2) main_image_pane_g3_ParamLimits

0x4edd,	// (0x000233b2) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d9bc) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d9bc) main_image_pane_g

0xb12b,	// (0x00029600) main_image_pane_t1_ParamLimits

0x4ee9,	// (0x000233be) main_image_pane_t2_ParamLimits

0x4ee9,	// (0x000233be) main_image_pane_t2

0x4efb,	// (0x000233d0) main_image_pane_t3_ParamLimits

0x4efb,	// (0x000233d0) main_image_pane_t3

0x4f0d,	// (0x000233e2) main_image_pane_t4_ParamLimits

0x4f0d,	// (0x000233e2) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d9c3) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d9c3) main_image_pane_t

0x4f1f,	// (0x000233f4) popup_image_details_window_cp01

0x4f29,	// (0x000233fe) popup_toobar_trans_pane_cp01_ParamLimits

0x4f29,	// (0x000233fe) popup_toobar_trans_pane_cp01

0x1454,	// (0x0001f929) popup_image_details_window_ParamLimits

0x1454,	// (0x0001f929) popup_image_details_window

0x1462,	// (0x0001f937) popup_image_focus_window

0x155d,	// (0x0001fa32) camera2_autofocus_pane_ParamLimits

0x155d,	// (0x0001fa32) camera2_autofocus_pane

0x9aa5,	// (0x00027f7a) bg_popup_sub_pane_cp06

0xc7e3,	// (0x0002acb8) popup_image_focus_window_g1

0xc7eb,	// (0x0002acc0) popup_image_focus_window_g2

0xc7f3,	// (0x0002acc8) popup_image_focus_window_g3

0xc7fb,	// (0x0002acd0) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002dbd2) popup_image_focus_window_g

0xc803,	// (0x0002acd8) popup_image_focus_window_t1

0xc811,	// (0x0002ace6) popup_image_focus_window_t2

0xc821,	// (0x0002acf6) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002dbdb) popup_image_focus_window_t

0xc82f,	// (0x0002ad04) camera2_autofocus_pane_g1

0xa34f,	// (0x00028824) bg_tb_trans_pane_cp01

0xc83d,	// (0x0002ad12) popup_image_details_window_g1

0xc850,	// (0x0002ad25) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002dbed) popup_image_details_window_g

0xc879,	// (0x0002ad4e) popup_image_details_window_t1

0xc88b,	// (0x0002ad60) popup_image_details_window_t2

0xc8a4,	// (0x0002ad79) popup_image_details_window_t3

0xc8b8,	// (0x0002ad8d) popup_image_details_window_t4

0xc8d3,	// (0x0002ada8) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002dbf4) popup_image_details_window_t

0xa1ed,	// (0x000286c2) bg_calc_paper_pane_ParamLimits

0x0efe,	// (0x0001f3d3) grid_highlight_pane_cp013

0x0fdf,	// (0x0001f4b4) list_calc_pane_ParamLimits

0x0ff1,	// (0x0001f4c6) scroll_pane_cp024

0xa201,	// (0x000286d6) bg_calc_display_pane_ParamLimits

0x0ff9,	// (0x0001f4ce) calc_display_pane_t1_ParamLimits

0x100e,	// (0x0001f4e3) calc_display_pane_t2_ParamLimits

0x1023,	// (0x0001f4f8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0002d622) calc_display_pane_t_ParamLimits

0x108c,	// (0x0001f561) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0002d63f) cell_calc_pane_g

0x1095,	// (0x0001f56a) cell_calc_pane_t1

0xa260,	// (0x00028735) grid_highlight_pane_cp02_ParamLimits

0xa276,	// (0x0002874b) toolbar_button_pane_cp01_ParamLimits

0xa276,	// (0x0002874b) toolbar_button_pane_cp01

0xb170,	// (0x00029645) temp_image_control_pane_ParamLimits

0xb170,	// (0x00029645) temp_image_control_pane

0x13d0,	// (0x0001f8a5) main_mp3_pane

0xc8ed,	// (0x0002adc2) temp_image_control_pane_g1_ParamLimits

0xc8ed,	// (0x0002adc2) temp_image_control_pane_g1

0xc8fb,	// (0x0002add0) temp_image_control_pane_g2_ParamLimits

0xc8fb,	// (0x0002add0) temp_image_control_pane_g2

0xc90d,	// (0x0002ade2) temp_image_control_pane_g3_ParamLimits

0xc90d,	// (0x0002ade2) temp_image_control_pane_g3

0x5a33,	// (0x00023f08) temp_image_control_pane_g4_ParamLimits

0x5a33,	// (0x00023f08) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002dbff) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002dbff) temp_image_control_pane_g

0xc8ed,	// (0x0002adc2) main_mp3_pane_g1

0x5a44,	// (0x00023f19) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002dc08) main_mp3_pane_g

0xc950,	// (0x0002ae25) main_mp3_pane_t1

0xa3de,	// (0x000288b3) main_camera_pane_g8_ParamLimits

0xa3de,	// (0x000288b3) main_camera_pane_g8

0x2fab,	// (0x00021480) main_video_pane_g7_ParamLimits

0x2fab,	// (0x00021480) main_video_pane_g7

0x16a5,	// (0x0001fb7a) main_camera2_pane_t7_ParamLimits

0x16a5,	// (0x0001fb7a) main_camera2_pane_t7

0xa526,	// (0x000289fb) scroll_pane_cp025_ParamLimits

0xa526,	// (0x000289fb) scroll_pane_cp025

0xa53a,	// (0x00028a0f) scroll_pane_cp026_ParamLimits

0xa53a,	// (0x00028a0f) scroll_pane_cp026

0xa549,	// (0x00028a1e) wml_content_pane_ParamLimits

0x0efe,	// (0x0001f3d3) main_touch_calib_pane

0x5ae8,	// (0x00023fbd) main_touch_calib_pane_g1

0x5af4,	// (0x00023fc9) main_touch_calib_pane_g2

0x5b00,	// (0x00023fd5) main_touch_calib_pane_g3

0x5b0c,	// (0x00023fe1) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002dc26) main_touch_calib_pane_g

0x5b18,	// (0x00023fed) main_touch_calib_pane_t1

0x5b31,	// (0x00024006) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002dc2f) main_touch_calib_pane_t

0xacfb,	// (0x000291d0) mup_progress_pane_cp02

0xad30,	// (0x00029205) navi_pane_g1

0xadeb,	// (0x000292c0) navi_pane_mp_t3

0x13d0,	// (0x0001f8a5) main_mp3_pane_ParamLimits

0x545e,	// (0x00023933) navi_pane_ParamLimits

0xc8ed,	// (0x0002adc2) main_mp3_pane_g1_ParamLimits

0x5a44,	// (0x00023f19) main_mp3_pane_g2_ParamLimits

0x5a50,	// (0x00023f25) main_mp3_pane_g3_ParamLimits

0x5a50,	// (0x00023f25) main_mp3_pane_g3

0x5a5c,	// (0x00023f31) main_mp3_pane_g4_ParamLimits

0x5a5c,	// (0x00023f31) main_mp3_pane_g4

0xc91d,	// (0x0002adf2) main_mp3_pane_g5_ParamLimits

0xc91d,	// (0x0002adf2) main_mp3_pane_g5

0xc92b,	// (0x0002ae00) main_mp3_pane_g6_ParamLimits

0xc92b,	// (0x0002ae00) main_mp3_pane_g6

0xc938,	// (0x0002ae0d) main_mp3_pane_g7_ParamLimits

0xc938,	// (0x0002ae0d) main_mp3_pane_g7

0xc944,	// (0x0002ae19) main_mp3_pane_g8_ParamLimits

0xc944,	// (0x0002ae19) main_mp3_pane_g8

0xf733,	// (0x0002dc08) main_mp3_pane_g_ParamLimits

0x5a68,	// (0x00023f3d) main_mp3_pane_t2

0x5a78,	// (0x00023f4d) main_mp3_pane_t3

0xc95e,	// (0x0002ae33) main_mp3_pane_t4

0xc96c,	// (0x0002ae41) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002dc19) main_mp3_pane_t

0xc97a,	// (0x0002ae4f) mup_progress_pane_cp01

0x0cb4,	// (0x0001f189) aid_zoom_text_secondary2

0xc737,	// (0x0002ac0c) list_cale_ev2_pane

0xc73f,	// (0x0002ac14) scroll_pane_cp023_ParamLimits

0x5b8c,	// (0x00024061) field_cale_ev2_pane_ParamLimits

0x5b8c,	// (0x00024061) field_cale_ev2_pane

0xc982,	// (0x0002ae57) field_cale_ev2_pane_g1_ParamLimits

0xc982,	// (0x0002ae57) field_cale_ev2_pane_g1

0xc98e,	// (0x0002ae63) field_cale_ev2_pane_g2_ParamLimits

0xc98e,	// (0x0002ae63) field_cale_ev2_pane_g2

0xc9a6,	// (0x0002ae7b) field_cale_ev2_pane_g3_ParamLimits

0xc9a6,	// (0x0002ae7b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002dc3a) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002dc3a) field_cale_ev2_pane_g

0xc9ca,	// (0x0002ae9f) field_cale_ev2_pane_t1_ParamLimits

0xc9ca,	// (0x0002ae9f) field_cale_ev2_pane_t1

0xc9e1,	// (0x0002aeb6) field_cale_ev2_pane_t2_ParamLimits

0xc9e1,	// (0x0002aeb6) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002dc43) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002dc43) field_cale_ev2_pane_t

0x4dac,	// (0x00023281) main_postcard_pane_g5_ParamLimits

0x4dac,	// (0x00023281) main_postcard_pane_g5

0x4dba,	// (0x0002328f) main_postcard_pane_g6_ParamLimits

0x4dba,	// (0x0002328f) main_postcard_pane_g6

0x2df5,	// (0x000212ca) camera2_autofocus_pane_cp_ParamLimits

0x2df5,	// (0x000212ca) camera2_autofocus_pane_cp

0x13d0,	// (0x0001f8a5) main_mup3_pane

0x5bda,	// (0x000240af) main_mup3_pane_g1_ParamLimits

0x5bda,	// (0x000240af) main_mup3_pane_g1

0x5bfb,	// (0x000240d0) main_mup3_pane_g2_ParamLimits

0x5bfb,	// (0x000240d0) main_mup3_pane_g2

0x5c77,	// (0x0002414c) main_mup3_pane_g3_ParamLimits

0x5c77,	// (0x0002414c) main_mup3_pane_g3

0x5cba,	// (0x0002418f) main_mup3_pane_g4_ParamLimits

0x5cba,	// (0x0002418f) main_mup3_pane_g4

0x5cfd,	// (0x000241d2) main_mup3_pane_g5_ParamLimits

0x5cfd,	// (0x000241d2) main_mup3_pane_g5

0x5d42,	// (0x00024217) main_mup3_pane_g6_ParamLimits

0x5d42,	// (0x00024217) main_mup3_pane_g6

0xc9f6,	// (0x0002aecb) main_mup3_pane_g7_ParamLimits

0xc9f6,	// (0x0002aecb) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002dc53) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002dc53) main_mup3_pane_g

0x5db8,	// (0x0002428d) main_mup3_pane_t1_ParamLimits

0x5db8,	// (0x0002428d) main_mup3_pane_t1

0x5e27,	// (0x000242fc) main_mup3_pane_t2_ParamLimits

0x5e27,	// (0x000242fc) main_mup3_pane_t2

0x5ef0,	// (0x000243c5) main_mup3_pane_t4_ParamLimits

0x5ef0,	// (0x000243c5) main_mup3_pane_t4

0x5f3e,	// (0x00024413) main_mup3_pane_t5_ParamLimits

0x5f3e,	// (0x00024413) main_mup3_pane_t5

0x5fee,	// (0x000244c3) main_mup3_pane_t6_ParamLimits

0x5fee,	// (0x000244c3) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002dc64) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002dc64) main_mup3_pane_t

0x609a,	// (0x0002456f) mup3_progress_pane_ParamLimits

0x609a,	// (0x0002456f) mup3_progress_pane

0x610e,	// (0x000245e3) popup_mup3_control_window_ParamLimits

0x610e,	// (0x000245e3) popup_mup3_control_window

0xca04,	// (0x0002aed9) popup_mup3_text_window

0x6127,	// (0x000245fc) mup3_progress_pane_t1

0x6146,	// (0x0002461b) mup3_progress_pane_t2

0xca0c,	// (0x0002aee1) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002dc71) mup3_progress_pane_t

0xca29,	// (0x0002aefe) mup_progress_pane_cp03

0x9aa5,	// (0x00027f7a) bg_tb_trans_pane_cp04

0x6165,	// (0x0002463a) mup3_volume_pane

0x616d,	// (0x00024642) popup_mup3_control_window_g1

0x6176,	// (0x0002464b) mup3_volume_pane_g1

0x617f,	// (0x00024654) mup3_volume_pane_g2

0x6188,	// (0x0002465d) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002dc78) mup3_volume_pane_g

0x9aa5,	// (0x00027f7a) bg_tb_trans_pane_cp03

0xca39,	// (0x0002af0e) popup_mup3_text_window_g1

0xca41,	// (0x0002af16) popup_mup3_text_window_t1

0xa249,	// (0x0002871e) list_calc_item_pane_g1_ParamLimits

0xc40e,	// (0x0002a8e3) mup_volume_pane_cp_g1

0x5b4a,	// (0x0002401f) main_touch_calib_pane_t3

0x5b60,	// (0x00024035) main_touch_calib_pane_t4

0x5b76,	// (0x0002404b) main_touch_calib_pane_t5

0x0c6c,	// (0x0001f141) aid_cell_size_toolbar2

0x0c74,	// (0x0001f149) aid_popup3_width_pane

0x0cb4,	// (0x0001f189) aid_zoom_text_msg_primary

0x1260,	// (0x0001f735) vorec_t7

0xa20d,	// (0x000286e2) bg_calc_paper_pane_g1_ParamLimits

0xa219,	// (0x000286ee) bg_calc_paper_pane_g2_ParamLimits

0xa225,	// (0x000286fa) bg_calc_paper_pane_g3_ParamLimits

0xa231,	// (0x00028706) bg_calc_paper_pane_g4_ParamLimits

0xa23d,	// (0x00028712) bg_calc_paper_pane_g5_ParamLimits

0x2818,	// (0x00020ced) bg_calc_paper_pane_g6_ParamLimits

0x2829,	// (0x00020cfe) bg_calc_paper_pane_g7_ParamLimits

0x283a,	// (0x00020d0f) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0002d629) bg_calc_paper_pane_g_ParamLimits

0x284b,	// (0x00020d20) calc_bg_paper_pane_g9_ParamLimits

0x2edc,	// (0x000213b1) image_qvga_pane_ParamLimits

0x2edc,	// (0x000213b1) image_qvga_pane

0xa11d,	// (0x000285f2) bg_popup_sub_pane_cp04_ParamLimits

0xb0a7,	// (0x0002957c) popup_mup_playback_window_g1_ParamLimits

0xb0b3,	// (0x00029588) popup_mup_playback_window_t1_ParamLimits

0xb0c8,	// (0x0002959d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d9b7) popup_mup_playback_window_t_ParamLimits

0x56b6,	// (0x00023b8b) main_mup2_pane_g3_ParamLimits

0x56b6,	// (0x00023b8b) main_mup2_pane_g3

0x32a2,	// (0x00021777) popup_toolbar_window_cp04

0xb4bd,	// (0x00029992) popup_call2_audio_second_window_g3_ParamLimits

0xb4bd,	// (0x00029992) popup_call2_audio_second_window_g3

0xb8c7,	// (0x00029d9c) popup_call2_audio_first_window_g4_ParamLimits

0xb8c7,	// (0x00029d9c) popup_call2_audio_first_window_g4

0xbf46,	// (0x0002a41b) popup_call2_audio_in_window_g4_ParamLimits

0xbf46,	// (0x0002a41b) popup_call2_audio_in_window_g4

0x4ec4,	// (0x00023399) aid_area_sk_bg_cut_ParamLimits

0x4ec4,	// (0x00023399) aid_area_sk_bg_cut

0xb0dd,	// (0x000295b2) aid_area_sk_bg_cut_2_ParamLimits

0xb0dd,	// (0x000295b2) aid_area_sk_bg_cut_2

0x59d9,	// (0x00023eae) aid_placing_details_win

0x59e1,	// (0x00023eb6) aid_placing_details_win_2

0xc82f,	// (0x0002ad04) camera2_autofocus_pane_g1_ParamLimits

0x0e96,	// (0x0001f36b) popup_fixed_preview_cale_window_ParamLimits

0x0e96,	// (0x0001f36b) popup_fixed_preview_cale_window

0xae71,	// (0x00029346) navi_slider_pane_g3

0xae7a,	// (0x0002934f) navi_slider_pane_g4

0xae83,	// (0x00029358) navi_slider_pane_g5

0xae71,	// (0x00029346) navi_slider_pane_g6

0x134a,	// (0x0001f81f) navi_slider_pane_g7

0xaf96,	// (0x0002946b) mup_scale_pane_g3

0xaf9f,	// (0x00029474) mup_scale_pane_g4

0xafa8,	// (0x0002947d) mup_scale_pane_g5

0x4c0f,	// (0x000230e4) mup_scale_pane_g6

0x4c18,	// (0x000230ed) mup_scale_pane_g7

0xae71,	// (0x00029346) cams2_slider_pane_g3

0xc490,	// (0x0002a965) cams2_slider_pane_g4

0x1817,	// (0x0001fcec) cams2_slider_pane_g5

0xae71,	// (0x00029346) cams2_slider_pane_g6

0x181f,	// (0x0001fcf4) cams2_slider_pane_g7

0xc6bd,	// (0x0002ab92) camera2_autofocus_pane_cp_g1

0xc2a7,	// (0x0002a77c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2a7,	// (0x0002a77c) bg_popup_preview_window_pane_cp02

0xca4f,	// (0x0002af24) list_fp_cale_pane_ParamLimits

0xca4f,	// (0x0002af24) list_fp_cale_pane

0xca5b,	// (0x0002af30) popup_fixed_preview_cale_window_t1_ParamLimits

0xca5b,	// (0x0002af30) popup_fixed_preview_cale_window_t1

0x6191,	// (0x00024666) popup_fixed_preview_cale_window_t2_ParamLimits

0x6191,	// (0x00024666) popup_fixed_preview_cale_window_t2

0x61a6,	// (0x0002467b) popup_fixed_preview_cale_window_t3_ParamLimits

0x61a6,	// (0x0002467b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002dc7f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002dc7f) popup_fixed_preview_cale_window_t

0x61bb,	// (0x00024690) list_single_fp_cale_pane_ParamLimits

0x61bb,	// (0x00024690) list_single_fp_cale_pane

0xca79,	// (0x0002af4e) list_single_fp_cale_pane_g1_ParamLimits

0xca79,	// (0x0002af4e) list_single_fp_cale_pane_g1

0xca85,	// (0x0002af5a) list_single_fp_cale_pane_g2_ParamLimits

0xca85,	// (0x0002af5a) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002dc86) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002dc86) list_single_fp_cale_pane_g

0xca9e,	// (0x0002af73) list_single_fp_cale_pane_t1_ParamLimits

0xca9e,	// (0x0002af73) list_single_fp_cale_pane_t1

0xcab0,	// (0x0002af85) list_single_fp_cale_pane_t2_ParamLimits

0xcab0,	// (0x0002af85) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002dc8d) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002dc8d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0efe,	// (0x0001f3d3) main_dialer_pane

0x61cf,	// (0x000246a4) aid_cell_size_keypad

0x61d9,	// (0x000246ae) dialer_ne_pane

0x61e3,	// (0x000246b8) grid_dialer_command_1_pane

0x61eb,	// (0x000246c0) grid_dialer_command_2_pane

0x61f3,	// (0x000246c8) grid_dialer_keypad_pane

0x6207,	// (0x000246dc) bg_popup_call_pane_cp06_ParamLimits

0x6207,	// (0x000246dc) bg_popup_call_pane_cp06

0x6213,	// (0x000246e8) dialer_ne_clear_pane_ParamLimits

0x6213,	// (0x000246e8) dialer_ne_clear_pane

0xcae3,	// (0x0002afb8) dialer_ne_pane_g1

0xcaeb,	// (0x0002afc0) dialer_ne_pane_t1_ParamLimits

0xcaeb,	// (0x0002afc0) dialer_ne_pane_t1

0x621f,	// (0x000246f4) dialer_ne_pane_t2_ParamLimits

0x621f,	// (0x000246f4) dialer_ne_pane_t2

0x623c,	// (0x00024711) dialer_ne_pane_t3_ParamLimits

0x623c,	// (0x00024711) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002dc92) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002dc92) dialer_ne_pane_t

0x6260,	// (0x00024735) dialer_ne_pane_t3_copy1_ParamLimits

0x6260,	// (0x00024735) dialer_ne_pane_t3_copy1

0x6284,	// (0x00024759) cell_dialer_keypad_pane_ParamLimits

0x6284,	// (0x00024759) cell_dialer_keypad_pane

0x629b,	// (0x00024770) cell_dialer_command_1_pane_ParamLimits

0x629b,	// (0x00024770) cell_dialer_command_1_pane

0x62b1,	// (0x00024786) cell_dialer_command_2_pane_ParamLimits

0x62b1,	// (0x00024786) cell_dialer_command_2_pane

0xcafd,	// (0x0002afd2) bg_button_pane_cp02_ParamLimits

0xcafd,	// (0x0002afd2) bg_button_pane_cp02

0x62c0,	// (0x00024795) cell_dialer_keypad_pane_g1_ParamLimits

0x62c0,	// (0x00024795) cell_dialer_keypad_pane_g1

0xcafd,	// (0x0002afd2) bg_button_pane_cp03_ParamLimits

0xcafd,	// (0x0002afd2) bg_button_pane_cp03

0x62d5,	// (0x000247aa) cell_dialer_command_1_pane_g1_ParamLimits

0x62d5,	// (0x000247aa) cell_dialer_command_1_pane_g1

0xcb09,	// (0x0002afde) bg_button_pane_cp04

0x62e9,	// (0x000247be) cell_dialer_command_2_pane_g1

0xae60,	// (0x00029335) bg_button_pane_cp06

0xcb11,	// (0x0002afe6) dialer_ne_clear_pane_g1

0xad3c,	// (0x00029211) navi_pane_g2

0xad6a,	// (0x0002923f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d8ba) navi_pane_g

0xadf9,	// (0x000292ce) navi_pane_mv_g2

0xae20,	// (0x000292f5) navi_pane_mv_g5

0x47ad,	// (0x00022c82) navi_pane_mv_t1

0xa201,	// (0x000286d6) main_clock2_pane

0x6329,	// (0x000247fe) main_clock2_list_pane_ParamLimits

0x6329,	// (0x000247fe) main_clock2_list_pane

0x6353,	// (0x00024828) main_clock2_pane_t1_ParamLimits

0x6353,	// (0x00024828) main_clock2_pane_t1

0x6377,	// (0x0002484c) main_clock2_pane_t2_ParamLimits

0x6377,	// (0x0002484c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002dc9e) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002dc9e) main_clock2_pane_t

0x63d2,	// (0x000248a7) popup_clock_analogue_window_cp03_ParamLimits

0x63d2,	// (0x000248a7) popup_clock_analogue_window_cp03

0x63f0,	// (0x000248c5) popup_clock_digital_window_cp02_ParamLimits

0x63f0,	// (0x000248c5) popup_clock_digital_window_cp02

0x645f,	// (0x00024934) main_clock2_list_single_pane_ParamLimits

0x645f,	// (0x00024934) main_clock2_list_single_pane

0xae60,	// (0x00029335) list_highlight_pane_cp05

0xcb4b,	// (0x0002b020) main_clock2_list_single_pane_t1

0x32a2,	// (0x00021777) popup_toolbar_window_cp04_ParamLimits

0x5a03,	// (0x00023ed8) camera2_autofocus_pane_g2_ParamLimits

0x5a03,	// (0x00023ed8) camera2_autofocus_pane_g2

0x5a0f,	// (0x00023ee4) camera2_autofocus_pane_g3_ParamLimits

0x5a0f,	// (0x00023ee4) camera2_autofocus_pane_g3

0x5a1b,	// (0x00023ef0) camera2_autofocus_pane_g4_ParamLimits

0x5a1b,	// (0x00023ef0) camera2_autofocus_pane_g4

0x5a27,	// (0x00023efc) camera2_autofocus_pane_g5_ParamLimits

0x5a27,	// (0x00023efc) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002dbe2) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002dbe2) camera2_autofocus_pane_g

0x5bba,	// (0x0002408f) camera2_autofocus_pane_cp_g2

0x5bc2,	// (0x00024097) camera2_autofocus_pane_cp_g3

0x5bca,	// (0x0002409f) camera2_autofocus_pane_cp_g4

0x5bd2,	// (0x000240a7) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002dc48) camera2_autofocus_pane_cp_g

0x61ff,	// (0x000246d4) popup_dialer_spcha_window

0x9aa5,	// (0x00027f7a) bg_popup_sub_pane_cp07

0xcb59,	// (0x0002b02e) list_spcha_pane

0xcb61,	// (0x0002b036) list_single_spcha_pane_ParamLimits

0xcb61,	// (0x0002b036) list_single_spcha_pane

0x9aa5,	// (0x00027f7a) list_highlight_pane_cp06

0xcb72,	// (0x0002b047) list_single_spcha_pane_t1

0xbcf0,	// (0x0002a1c5) popup_call2_audio_out_window_g4_ParamLimits

0xbcf0,	// (0x0002a1c5) popup_call2_audio_out_window_g4

0x0efe,	// (0x0001f3d3) main_imed2_pane

0x146a,	// (0x0001f93f) popup_imed_adjust2_window

0x147d,	// (0x0001f952) popup_imed_trans_window_ParamLimits

0x147d,	// (0x0001f952) popup_imed_trans_window

0xc4f9,	// (0x0002a9ce) popup_blid_sat_info2_window_t1

0xc507,	// (0x0002a9dc) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002db77) popup_blid_sat_info2_window_t

0x6491,	// (0x00024966) aid_size_cell_colour_35

0x64ab,	// (0x00024980) aid_size_cell_colour_112

0x64c2,	// (0x00024997) aid_size_cell_effect

0xa34f,	// (0x00028824) bg_tb_trans_pane_cp02

0xab45,	// (0x0002901a) heading_imed_pane

0x64dc,	// (0x000249b1) listscroll_imed_pane

0xcb80,	// (0x0002b055) heading_imed_pane_g1

0xcb88,	// (0x0002b05d) heading_imed_pane_t1

0xcb96,	// (0x0002b06b) grid_imed_colour_35_pane_ParamLimits

0xcb96,	// (0x0002b06b) grid_imed_colour_35_pane

0x64e8,	// (0x000249bd) grid_imed_effect_pane

0xcbae,	// (0x0002b083) list_imed_aspect_pane

0x64f8,	// (0x000249cd) scroll_pane_cp027_ParamLimits

0x64f8,	// (0x000249cd) scroll_pane_cp027

0x6504,	// (0x000249d9) cell_imed_effect_pane_ParamLimits

0x6504,	// (0x000249d9) cell_imed_effect_pane

0xcbb6,	// (0x0002b08b) cell_imed_colour_pane_ParamLimits

0xcbb6,	// (0x0002b08b) cell_imed_colour_pane

0xcbf8,	// (0x0002b0cd) cell_imed_colour_pane_g1_ParamLimits

0xcbf8,	// (0x0002b0cd) cell_imed_colour_pane_g1

0xcc09,	// (0x0002b0de) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc09,	// (0x0002b0de) hgihlgiht_grid_pane_cp016

0x651c,	// (0x000249f1) cell_imed_effect_pane_g1

0x6524,	// (0x000249f9) grid_highlight_pane_cp017

0xcc1a,	// (0x0002b0ef) list_imed_single_pane_ParamLimits

0xcc1a,	// (0x0002b0ef) list_imed_single_pane

0x9aa5,	// (0x00027f7a) list_highlight_pane_cp07

0xcc30,	// (0x0002b105) list_imed_aspect_pane_comp1_t1

0xc2b3,	// (0x0002a788) bg_tb_trans_pane_cp05

0xcc52,	// (0x0002b127) popup_imed_adjust2_window_g1

0xcc79,	// (0x0002b14e) popup_imed_adjust2_window_t1

0xcc91,	// (0x0002b166) slider_imed_adjust_pane

0xcca5,	// (0x0002b17a) slider_imed_adjust_pane_g1

0xccb5,	// (0x0002b18a) slider_imed_adjust_pane_g2

0xccc5,	// (0x0002b19a) slider_imed_adjust_pane_g3

0xccd6,	// (0x0002b1ab) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002dcbb) slider_imed_adjust_pane_g

0x652d,	// (0x00024a02) aid_size_cell_clipart2

0x6539,	// (0x00024a0e) grid_imed_clipart_pane

0xcce7,	// (0x0002b1bc) scroll_pane_cp031

0x6543,	// (0x00024a18) cell_imed_clipart_pane_ParamLimits

0x6543,	// (0x00024a18) cell_imed_clipart_pane

0x656a,	// (0x00024a3f) cell_imed_clipart_pane_g1

0x9aa5,	// (0x00027f7a) grid_highlight_pane_cp014

0x6335,	// (0x0002480a) main_clock2_pane_g1_ParamLimits

0x6335,	// (0x0002480a) main_clock2_pane_g1

0x640a,	// (0x000248df) aid_call2_pane_cp10

0x641c,	// (0x000248f1) aid_call_pane_cp10

0xac9b,	// (0x00029170) popup_clock_analogue_window_cp10_g1

0xac9b,	// (0x00029170) popup_clock_analogue_window_cp10_g2

0x642e,	// (0x00024903) popup_clock_analogue_window_cp10_g3

0x642e,	// (0x00024903) popup_clock_analogue_window_cp10_g4

0xac9b,	// (0x00029170) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002dca9) popup_clock_analogue_window_cp10_g

0x6440,	// (0x00024915) popup_clock_analogue_window_cp10_t1

0x1828,	// (0x0001fcfd) clock_digital_number_pane_cp10_ParamLimits

0x1828,	// (0x0001fcfd) clock_digital_number_pane_cp10

0x1840,	// (0x0001fd15) clock_digital_number_pane_cp11_ParamLimits

0x1840,	// (0x0001fd15) clock_digital_number_pane_cp11

0x1858,	// (0x0001fd2d) clock_digital_number_pane_cp12_ParamLimits

0x1858,	// (0x0001fd2d) clock_digital_number_pane_cp12

0x1870,	// (0x0001fd45) clock_digital_number_pane_cp13_ParamLimits

0x1870,	// (0x0001fd45) clock_digital_number_pane_cp13

0x1888,	// (0x0001fd5d) clock_digital_separator_pane_cp10_ParamLimits

0x1888,	// (0x0001fd5d) clock_digital_separator_pane_cp10

0x6471,	// (0x00024946) popup_clock_digital_window_cp02_t1_ParamLimits

0x6471,	// (0x00024946) popup_clock_digital_window_cp02_t1

0xa115,	// (0x000285ea) clock_digital_number_pane_cp10_g1

0xa115,	// (0x000285ea) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002dcc4) clock_digital_number_pane_cp10_g

0xa115,	// (0x000285ea) clock_digital_separator_pane_cp10_g1

0xa115,	// (0x000285ea) clock_digital_separator_pane_g2_cp10

0xae28,	// (0x000292fd) navi_pane_vded_g4

0xae31,	// (0x00029306) navi_pane_vded_g5

0xae3a,	// (0x0002930f) navi_pane_vded_t1

0x0efe,	// (0x0001f3d3) main_vded_pane

0x6573,	// (0x00024a48) main_vded_pane_g1

0x657f,	// (0x00024a54) main_vded_pane_g2

0x6589,	// (0x00024a5e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002dcc9) main_vded_pane_g

0x6593,	// (0x00024a68) main_vded_pane_t1

0x65a1,	// (0x00024a76) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002dcd0) main_vded_pane_t

0x65af,	// (0x00024a84) vded_slider_pane

0x65b9,	// (0x00024a8e) vded_video_pane

0xccef,	// (0x0002b1c4) vded_video_pane_g1

0x65c3,	// (0x00024a98) vded_video_pane_g2

0xc6bd,	// (0x0002ab92) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002dcd5) vded_video_pane_g

0xccf9,	// (0x0002b1ce) vded_slider_pane_g1

0xcd02,	// (0x0002b1d7) vded_slider_pane_g2

0xcd0b,	// (0x0002b1e0) vded_slider_pane_g3

0xcd14,	// (0x0002b1e9) vded_slider_pane_g4

0xcd1d,	// (0x0002b1f2) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002dcdc) vded_slider_pane_g

0x6100,	// (0x000245d5) mup3_rocker_pane_ParamLimits

0x6100,	// (0x000245d5) mup3_rocker_pane

0x65cc,	// (0x00024aa1) mup3_control_keys_pane_g1

0x65d4,	// (0x00024aa9) mup3_control_keys_pane_g2

0x65dc,	// (0x00024ab1) mup3_control_keys_pane_g3

0x65e4,	// (0x00024ab9) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002dce7) mup3_control_keys_pane_g

0x0ebe,	// (0x0001f393) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ebe,	// (0x0001f393) popup_toolbar2_fixed_window_cp01

0x611a,	// (0x000245ef) popup_toolbar2_fixed_window_cp02_ParamLimits

0x611a,	// (0x000245ef) popup_toolbar2_fixed_window_cp02

0xb62f,	// (0x00029b04) popup_call2_audio_second_window_t4_ParamLimits

0xb62f,	// (0x00029b04) popup_call2_audio_second_window_t4

0xbb5d,	// (0x0002a032) popup_call2_audio_first_window_t6_ParamLimits

0xbb5d,	// (0x0002a032) popup_call2_audio_first_window_t6

0xbdf3,	// (0x0002a2c8) popup_call2_audio_out_window_t6_ParamLimits

0xbdf3,	// (0x0002a2c8) popup_call2_audio_out_window_t6

0x0efe,	// (0x0001f3d3) main_vitu_pane

0x65f4,	// (0x00024ac9) aid_size_cell_itu_ParamLimits

0x65f4,	// (0x00024ac9) aid_size_cell_itu

0xd2b3,	// (0x0002b788) bg_popup_window_pane_cp08_ParamLimits

0xd2b3,	// (0x0002b788) bg_popup_window_pane_cp08

0x6602,	// (0x00024ad7) field_vitu_entry_pane_ParamLimits

0x6602,	// (0x00024ad7) field_vitu_entry_pane

0x6611,	// (0x00024ae6) grid_vitu_function_pane_ParamLimits

0x6611,	// (0x00024ae6) grid_vitu_function_pane

0x6621,	// (0x00024af6) grid_vitu_itu_pane_ParamLimits

0x6621,	// (0x00024af6) grid_vitu_itu_pane

0x6631,	// (0x00024b06) cell_vitu_itu_pane_ParamLimits

0x6631,	// (0x00024b06) cell_vitu_itu_pane

0x6646,	// (0x00024b1b) cell_vitu_function_pane_ParamLimits

0x6646,	// (0x00024b1b) cell_vitu_function_pane

0xa34f,	// (0x00028824) bg_popup_sub_pane_cp08_ParamLimits

0xa34f,	// (0x00028824) bg_popup_sub_pane_cp08

0x665a,	// (0x00024b2f) field_vitu_entry_pane_t1_ParamLimits

0x665a,	// (0x00024b2f) field_vitu_entry_pane_t1

0xcd3e,	// (0x0002b213) field_vitu_entry_pane_t2_ParamLimits

0xcd3e,	// (0x0002b213) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002dcf5) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002dcf5) field_vitu_entry_pane_t

0xcd5b,	// (0x0002b230) bg_button_pane_cp05_ParamLimits

0xcd5b,	// (0x0002b230) bg_button_pane_cp05

0x6677,	// (0x00024b4c) cell_vitu_itu_pane_g1

0x668f,	// (0x00024b64) cell_vitu_itu_pane_t1_ParamLimits

0x668f,	// (0x00024b64) cell_vitu_itu_pane_t1

0x66a1,	// (0x00024b76) cell_vitu_itu_pane_t2_ParamLimits

0x66a1,	// (0x00024b76) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002dcfa) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002dcfa) cell_vitu_itu_pane_t

0xcd69,	// (0x0002b23e) bg_button_pane_cp07

0x66e4,	// (0x00024bb9) cell_vitu_function_pane_g1

0x0fd7,	// (0x0001f4ac) main_calc_pane_g1

0x0ca8,	// (0x0001f17d) aid_visual_content_pane

0x0efe,	// (0x0001f3d3) main_vradio_pane

0x66ed,	// (0x00024bc2) main_vradio_pane_g1_ParamLimits

0x66ed,	// (0x00024bc2) main_vradio_pane_g1

0xcd73,	// (0x0002b248) main_vradio_pane_g2_ParamLimits

0xcd73,	// (0x0002b248) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002dd01) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002dd01) main_vradio_pane_g

0x66fd,	// (0x00024bd2) main_vradio_pane_t1_ParamLimits

0x66fd,	// (0x00024bd2) main_vradio_pane_t1

0x670f,	// (0x00024be4) main_vradio_pane_t2_ParamLimits

0x670f,	// (0x00024be4) main_vradio_pane_t2

0xcd80,	// (0x0002b255) main_vradio_pane_t3_ParamLimits

0xcd80,	// (0x0002b255) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002dd06) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002dd06) main_vradio_pane_t

0x6721,	// (0x00024bf6) vradio_rocker_control_pane_ParamLimits

0x6721,	// (0x00024bf6) vradio_rocker_control_pane

0x672d,	// (0x00024c02) vradio_station_info_pane_ParamLimits

0x672d,	// (0x00024c02) vradio_station_info_pane

0xcd94,	// (0x0002b269) vradio_frequency_info_pane_ParamLimits

0xcd94,	// (0x0002b269) vradio_frequency_info_pane

0xc6bd,	// (0x0002ab92) vradio_station_info_pane_g1

0xcda3,	// (0x0002b278) vradio_station_info_pane_t1_ParamLimits

0xcda3,	// (0x0002b278) vradio_station_info_pane_t1

0xcdc5,	// (0x0002b29a) vradio_station_info_pane_t2_ParamLimits

0xcdc5,	// (0x0002b29a) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002dd0d) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002dd0d) vradio_station_info_pane_t

0xcdd7,	// (0x0002b2ac) vradio_tuning_pane

0xcddf,	// (0x0002b2b4) vradio_rocker_control_pane_g1

0xcde7,	// (0x0002b2bc) vradio_rocker_control_pane_g2

0xcdef,	// (0x0002b2c4) vradio_rocker_control_pane_g3

0xcdf7,	// (0x0002b2cc) vradio_rocker_control_pane_g4

0xcdff,	// (0x0002b2d4) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002dd12) vradio_rocker_control_pane_g

0x673c,	// (0x00024c11) vradio_frequency_info_pane_g1

0xce07,	// (0x0002b2dc) vradio_frequency_info_pane_t1_ParamLimits

0xce07,	// (0x0002b2dc) vradio_frequency_info_pane_t1

0x6746,	// (0x00024c1b) vradio_tuning_pane_g1

0x674f,	// (0x00024c24) vradio_tuning_pane_t1

0x0cc4,	// (0x0001f199) area_side_right_pane_ParamLimits

0x0cc4,	// (0x0001f199) area_side_right_pane

0xc26e,	// (0x0002a743) status_small_pane_g1

0xc276,	// (0x0002a74b) status_small_pane_g2

0xc27f,	// (0x0002a754) status_small_pane_g3

0xc288,	// (0x0002a75d) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002dacd) status_small_pane_g

0xc291,	// (0x0002a766) status_small_pane_t1

0x0efe,	// (0x0001f3d3) main_video3_pane

0xce1b,	// (0x0002b2f0) cams_zoom_vslider_pane

0xce23,	// (0x0002b2f8) image3_wide_pane_ParamLimits

0xce23,	// (0x0002b2f8) image3_wide_pane

0xce3d,	// (0x0002b312) image3_wide_small_pane

0xce49,	// (0x0002b31e) main_video3_pane_g1_ParamLimits

0xce49,	// (0x0002b31e) main_video3_pane_g1

0xce65,	// (0x0002b33a) main_video3_pane_g2_ParamLimits

0xce65,	// (0x0002b33a) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002dd1d) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002dd1d) main_video3_pane_g

0xce81,	// (0x0002b356) main_video3_pane_t1_ParamLimits

0xce81,	// (0x0002b356) main_video3_pane_t1

0xceac,	// (0x0002b381) main_video3_pane_t2_ParamLimits

0xceac,	// (0x0002b381) main_video3_pane_t2

0xced7,	// (0x0002b3ac) main_video3_pane_t3_ParamLimits

0xced7,	// (0x0002b3ac) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002dd22) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002dd22) main_video3_pane_t

0xcf04,	// (0x0002b3d9) cams_zoom_vslider_pane_g1

0xcf0d,	// (0x0002b3e2) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002dd29) cams_zoom_vslider_pane_g

0xcf15,	// (0x0002b3ea) small_slider_vertical_pane

0xc6bd,	// (0x0002ab92) small_slider_vertical_pane_g1

0xc6bd,	// (0x0002ab92) small_slider_vertical_pane_g2

0xcf1d,	// (0x0002b3f2) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002dd2e) small_slider_vertical_pane_g

0x0efe,	// (0x0001f3d3) main_hwr_training_pane

0xcf26,	// (0x0002b3fb) hwr_training_instruct_pane_ParamLimits

0xcf26,	// (0x0002b3fb) hwr_training_instruct_pane

0x675e,	// (0x00024c33) hwr_training_navi_pane_ParamLimits

0x675e,	// (0x00024c33) hwr_training_navi_pane

0x6778,	// (0x00024c4d) hwr_training_write_pane_ParamLimits

0x6778,	// (0x00024c4d) hwr_training_write_pane

0x9aa5,	// (0x00027f7a) bg_frame_shadow_pane

0xcf5d,	// (0x0002b432) hwr_training_write_pane_g1

0xcf65,	// (0x0002b43a) hwr_training_write_pane_g2

0xcf6d,	// (0x0002b442) hwr_training_write_pane_g3

0xcf75,	// (0x0002b44a) hwr_training_write_pane_g4

0xcf7d,	// (0x0002b452) hwr_training_write_pane_g5

0xcf85,	// (0x0002b45a) hwr_training_write_pane_g6

0xcf8d,	// (0x0002b462) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002dd35) hwr_training_write_pane_g

0x18a0,	// (0x0001fd75) hwr_training_navi_pane_g1_ParamLimits

0x18a0,	// (0x0001fd75) hwr_training_navi_pane_g1

0x18b2,	// (0x0001fd87) hwr_training_navi_pane_g2_ParamLimits

0x18b2,	// (0x0001fd87) hwr_training_navi_pane_g2

0x18c4,	// (0x0001fd99) hwr_training_navi_pane_g3_ParamLimits

0x18c4,	// (0x0001fd99) hwr_training_navi_pane_g3

0x18d4,	// (0x0001fda9) hwr_training_navi_pane_g4_ParamLimits

0x18d4,	// (0x0001fda9) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002dd44) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002dd44) hwr_training_navi_pane_g

0x18ee,	// (0x0001fdc3) hwr_training_navi_pane_t1

0x67b0,	// (0x00024c85) list_single_hwr_training_instruct_pane_ParamLimits

0x67b0,	// (0x00024c85) list_single_hwr_training_instruct_pane

0xcf95,	// (0x0002b46a) list_single_hwr_training_instruct_pane_t1

0xc5fd,	// (0x0002aad2) bg_frame_shadow_pane_g1

0xcfa4,	// (0x0002b479) bg_frame_shadow_pane_g2

0xcfac,	// (0x0002b481) bg_frame_shadow_pane_g3

0xcfb4,	// (0x0002b489) bg_frame_shadow_pane_g4

0xcfbc,	// (0x0002b491) bg_frame_shadow_pane_g5

0xcfc4,	// (0x0002b499) bg_frame_shadow_pane_g6

0xcfcc,	// (0x0002b4a1) bg_frame_shadow_pane_g7

0xa2cc,	// (0x000287a1) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002dd4f) bg_frame_shadow_pane_g

0x0efe,	// (0x0001f3d3) main_video_tele_dialer_pane

0x18fc,	// (0x0001fdd1) aid_size_cell_video_keypad_ParamLimits

0x18fc,	// (0x0001fdd1) aid_size_cell_video_keypad

0x190c,	// (0x0001fde1) grid_video_dialer_keypad_pane_ParamLimits

0x190c,	// (0x0001fde1) grid_video_dialer_keypad_pane

0x1940,	// (0x0001fe15) video_down_pane_cp_ParamLimits

0x1940,	// (0x0001fe15) video_down_pane_cp

0x194e,	// (0x0001fe23) cell_video_dialer_keypad_pane_ParamLimits

0x194e,	// (0x0001fe23) cell_video_dialer_keypad_pane

0xcfd4,	// (0x0002b4a9) bg_button_pane_cp08_ParamLimits

0xcfd4,	// (0x0002b4a9) bg_button_pane_cp08

0x67fb,	// (0x00024cd0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x67fb,	// (0x00024cd0) cell_video_dialer_keypad_pane_g1

0x60f4,	// (0x000245c9) mup3_rocker2_pane_ParamLimits

0x60f4,	// (0x000245c9) mup3_rocker2_pane

0xc6bd,	// (0x0002ab92) mup3_rocker2_pane_g1

0x13de,	// (0x0001f8b3) main_dialer2_pane

0x0efe,	// (0x0001f3d3) main_mp4_pane

0x196b,	// (0x0001fe40) main_mp4_pane_g1_ParamLimits

0x196b,	// (0x0001fe40) main_mp4_pane_g1

0x1979,	// (0x0001fe4e) main_mp4_pane_g2_ParamLimits

0x1979,	// (0x0001fe4e) main_mp4_pane_g2

0x1987,	// (0x0001fe5c) main_mp4_pane_g3_ParamLimits

0x1987,	// (0x0001fe5c) main_mp4_pane_g3

0x19cc,	// (0x0001fea1) main_mp4_pane_g4_ParamLimits

0x19cc,	// (0x0001fea1) main_mp4_pane_g4

0x19f4,	// (0x0001fec9) main_mp4_pane_g5_ParamLimits

0x19f4,	// (0x0001fec9) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002dd6f) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002dd6f) main_mp4_pane_g

0x1a44,	// (0x0001ff19) main_mp4_pane_t1_ParamLimits

0x1a44,	// (0x0001ff19) main_mp4_pane_t1

0x1aa0,	// (0x0001ff75) main_mp4_pane_t2_ParamLimits

0x1aa0,	// (0x0001ff75) main_mp4_pane_t2

0xcfe0,	// (0x0002b4b5) main_mp4_pane_t3_ParamLimits

0xcfe0,	// (0x0002b4b5) main_mp4_pane_t3

0x1af2,	// (0x0001ffc7) main_mp4_pane_t4_ParamLimits

0x1af2,	// (0x0001ffc7) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002dd7c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002dd7c) main_mp4_pane_t

0x1b36,	// (0x0002000b) mp4_progress_pane_ParamLimits

0x1b36,	// (0x0002000b) mp4_progress_pane

0x1b80,	// (0x00020055) mp4_rocker_pane_ParamLimits

0x1b80,	// (0x00020055) mp4_rocker_pane

0xd008,	// (0x0002b4dd) mp4_progress_pane_t1

0xd021,	// (0x0002b4f6) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002dd85) mp4_progress_pane_t

0xd03a,	// (0x0002b50f) mup_progress_pane_cp04

0xd7b7,	// (0x0002bc8c) mp4_rocker_pane_g1

0x1ba0,	// (0x00020075) aid_cell_size_keypad2_ParamLimits

0x1ba0,	// (0x00020075) aid_cell_size_keypad2

0x1bb0,	// (0x00020085) dialer2_ne_pane_ParamLimits

0x1bb0,	// (0x00020085) dialer2_ne_pane

0x1bbe,	// (0x00020093) grid_dialer2_keypad_pane_ParamLimits

0x1bbe,	// (0x00020093) grid_dialer2_keypad_pane

0xd2c1,	// (0x0002b796) bg_popup_call_pane_cp07_ParamLimits

0xd2c1,	// (0x0002b796) bg_popup_call_pane_cp07

0x6836,	// (0x00024d0b) dialer2_ne_pane_t1_ParamLimits

0x6836,	// (0x00024d0b) dialer2_ne_pane_t1

0x1bce,	// (0x000200a3) cell_dialer2_keypad_pane_ParamLimits

0x1bce,	// (0x000200a3) cell_dialer2_keypad_pane

0xd058,	// (0x0002b52d) bg_button_pane_pane_cp04_ParamLimits

0xd058,	// (0x0002b52d) bg_button_pane_pane_cp04

0x685b,	// (0x00024d30) cell_dialer2_keypad_pane_g1_ParamLimits

0x685b,	// (0x00024d30) cell_dialer2_keypad_pane_g1

0x3164,	// (0x00021639) aid_placing_vt_set_content_ParamLimits

0x3164,	// (0x00021639) aid_placing_vt_set_content

0x3190,	// (0x00021665) aid_placing_vt_set_title_ParamLimits

0x3190,	// (0x00021665) aid_placing_vt_set_title

0x0efe,	// (0x0001f3d3) main_image3_pane

0x1c15,	// (0x000200ea) area_side_right_pane_cp01_ParamLimits

0x1c15,	// (0x000200ea) area_side_right_pane_cp01

0x1c42,	// (0x00020117) main_image3_pane_g1_ParamLimits

0x1c42,	// (0x00020117) main_image3_pane_g1

0x1c50,	// (0x00020125) main_image3_pane_g2_ParamLimits

0x1c50,	// (0x00020125) main_image3_pane_g2

0x1c69,	// (0x0002013e) main_image3_pane_g3_ParamLimits

0x1c69,	// (0x0002013e) main_image3_pane_g3

0x1c82,	// (0x00020157) main_image3_pane_g4_ParamLimits

0x1c82,	// (0x00020157) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002dd94) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002dd94) main_image3_pane_g

0x1c9b,	// (0x00020170) main_image3_pane_t1_ParamLimits

0x1c9b,	// (0x00020170) main_image3_pane_t1

0x1cc0,	// (0x00020195) main_image3_pane_t2_ParamLimits

0x1cc0,	// (0x00020195) main_image3_pane_t2

0x1cdf,	// (0x000201b4) main_image3_pane_t3_ParamLimits

0x1cdf,	// (0x000201b4) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002dd9d) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002dd9d) main_image3_pane_t

0xd2b3,	// (0x0002b788) grid_sctrl_middle_pane_cp01_ParamLimits

0xd2b3,	// (0x0002b788) grid_sctrl_middle_pane_cp01

0x68c3,	// (0x00024d98) cell_sctrl_middle_pane_cp01_ParamLimits

0x68c3,	// (0x00024d98) cell_sctrl_middle_pane_cp01

0x68d4,	// (0x00024da9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x68d4,	// (0x00024da9) cell_sctrl_middle_pane_cp01_g1

0x0efe,	// (0x0001f3d3) main_call4_pane

0x68e1,	// (0x00024db6) aid_size_button_call4_ParamLimits

0x68e1,	// (0x00024db6) aid_size_button_call4

0x6911,	// (0x00024de6) call4_windows_pane_ParamLimits

0x6911,	// (0x00024de6) call4_windows_pane

0x692b,	// (0x00024e00) grid_call4_button_pane_ParamLimits

0x692b,	// (0x00024e00) grid_call4_button_pane

0xd064,	// (0x0002b539) call4_windows_conf_pane

0xd079,	// (0x0002b54e) popup_call4_audio_first_window_ParamLimits

0xd079,	// (0x0002b54e) popup_call4_audio_first_window

0xd0c5,	// (0x0002b59a) popup_call4_audio_second_window_ParamLimits

0xd0c5,	// (0x0002b59a) popup_call4_audio_second_window

0xd0d9,	// (0x0002b5ae) popup_call4_audio_wait_window_ParamLimits

0xd0d9,	// (0x0002b5ae) popup_call4_audio_wait_window

0x694f,	// (0x00024e24) cell_call4_button_pane_ParamLimits

0x694f,	// (0x00024e24) cell_call4_button_pane

0x6974,	// (0x00024e49) bg_button_pane_cp09_ParamLimits

0x6974,	// (0x00024e49) bg_button_pane_cp09

0x6980,	// (0x00024e55) cell_call4_button_pane_g1_ParamLimits

0x6980,	// (0x00024e55) cell_call4_button_pane_g1

0x698d,	// (0x00024e62) cell_call4_button_pane_t1_ParamLimits

0x698d,	// (0x00024e62) cell_call4_button_pane_t1

0xd121,	// (0x0002b5f6) popup_call4_audio_conf_window_ParamLimits

0xd121,	// (0x0002b5f6) popup_call4_audio_conf_window

0x6127,	// (0x000245fc) mup3_progress_pane_t1_ParamLimits

0x6146,	// (0x0002461b) mup3_progress_pane_t2_ParamLimits

0xca0c,	// (0x0002aee1) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002dc71) mup3_progress_pane_t_ParamLimits

0xca29,	// (0x0002aefe) mup_progress_pane_cp03_ParamLimits

0x65ec,	// (0x00024ac1) mup3_control_keys_pane_g4_copy1

0x1b64,	// (0x00020039) mp4_rocker2_pane_ParamLimits

0x1b64,	// (0x00020039) mp4_rocker2_pane

0xd135,	// (0x0002b60a) mp4_rocker2_pane_g1

0xd13d,	// (0x0002b612) mp4_rocker2_pane_g2

0x1d40,	// (0x00020215) mp4_rocker2_pane_g3

0x1d48,	// (0x0002021d) mp4_rocker2_pane_g4

0x1d50,	// (0x00020225) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002dda6) mp4_rocker2_pane_g

0x0efe,	// (0x0001f3d3) main_camera4_pane

0x0efe,	// (0x0001f3d3) main_video4_pane

0x191c,	// (0x0001fdf1) main_video_tele_dialer_pane_t1_ParamLimits

0x191c,	// (0x0001fdf1) main_video_tele_dialer_pane_t1

0x192e,	// (0x0001fe03) main_video_tele_dialer_pane_t2_ParamLimits

0x192e,	// (0x0001fe03) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002dd60) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002dd60) main_video_tele_dialer_pane_t

0x1d70,	// (0x00020245) cam4_autofocus_pane_ParamLimits

0x1d70,	// (0x00020245) cam4_autofocus_pane

0x1d8a,	// (0x0002025f) cam4_image_uncrop_pane_ParamLimits

0x1d8a,	// (0x0002025f) cam4_image_uncrop_pane

0x1da1,	// (0x00020276) cam4_indicators_pane_ParamLimits

0x1da1,	// (0x00020276) cam4_indicators_pane

0x1dbd,	// (0x00020292) main_camera4_pane_g1_ParamLimits

0x1dbd,	// (0x00020292) main_camera4_pane_g1

0x1dc9,	// (0x0002029e) main_camera4_pane_g2_ParamLimits

0x1dc9,	// (0x0002029e) main_camera4_pane_g2

0x1dc9,	// (0x0002029e) main_camera4_pane_g3_ParamLimits

0x1dc9,	// (0x0002029e) main_camera4_pane_g3

0x1dd5,	// (0x000202aa) main_camera4_pane_g4_ParamLimits

0x1dd5,	// (0x000202aa) main_camera4_pane_g4

0x1de1,	// (0x000202b6) main_camera4_pane_g5_ParamLimits

0x1de1,	// (0x000202b6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002ddb1) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002ddb1) main_camera4_pane_g

0x1dfb,	// (0x000202d0) main_camera4_pane_t1_ParamLimits

0x1dfb,	// (0x000202d0) main_camera4_pane_t1

0x1e1f,	// (0x000202f4) bg_tb_trans_pane_cp06

0x1e35,	// (0x0002030a) cam4_indicators_pane_g1

0x1e46,	// (0x0002031b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002ddcc) cam4_indicators_pane_g

0x1e64,	// (0x00020339) cam4_indicators_pane_t1

0x1e8e,	// (0x00020363) main_video4_pane_g1_ParamLimits

0x1e8e,	// (0x00020363) main_video4_pane_g1

0x1e9a,	// (0x0002036f) main_video4_pane_g2_ParamLimits

0x1e9a,	// (0x0002036f) main_video4_pane_g2

0x1ea6,	// (0x0002037b) main_video4_pane_g3_ParamLimits

0x1ea6,	// (0x0002037b) main_video4_pane_g3

0x1eb2,	// (0x00020387) main_video4_pane_g4_ParamLimits

0x1eb2,	// (0x00020387) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002ddd3) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002ddd3) main_video4_pane_g

0x1ed2,	// (0x000203a7) vid4_indicators_pane_ParamLimits

0x1ed2,	// (0x000203a7) vid4_indicators_pane

0x1ef1,	// (0x000203c6) video4_image_uncrop_cif_pane_ParamLimits

0x1ef1,	// (0x000203c6) video4_image_uncrop_cif_pane

0x1f00,	// (0x000203d5) video4_image_uncrop_nhd_pane_ParamLimits

0x1f00,	// (0x000203d5) video4_image_uncrop_nhd_pane

0x1d8a,	// (0x0002025f) video4_image_uncrop_vga_pane_ParamLimits

0x1d8a,	// (0x0002025f) video4_image_uncrop_vga_pane

0x13d0,	// (0x0001f8a5) bg_tb_trans_pane_cp07

0x1f15,	// (0x000203ea) vid4_indicators_pane_g1

0x1f29,	// (0x000203fe) vid4_indicators_pane_g2

0x1f3d,	// (0x00020412) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002ddde) vid4_indicators_pane_g

0x1f6a,	// (0x0002043f) vid4_indicators_pane_t1

0x69c3,	// (0x00024e98) cam4_autofocus_pane_g1

0x69cb,	// (0x00024ea0) cam4_autofocus_pane_g2

0x69d3,	// (0x00024ea8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002dde9) cam4_autofocus_pane_g

0x69db,	// (0x00024eb0) cam4_autofocus_pane_g3_copy1

0x67df,	// (0x00024cb4) video_down_pane_cp_t1

0x67ed,	// (0x00024cc2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002dd65) video_down_pane_cp_t

0x0ef0,	// (0x0001f3c5) popup_vitu2_window_ParamLimits

0x0ef0,	// (0x0001f3c5) popup_vitu2_window

0x1f81,	// (0x00020456) aid_size_cell2_itu2_ParamLimits

0x1f81,	// (0x00020456) aid_size_cell2_itu2

0x1fa3,	// (0x00020478) aid_size_cell_itu2_ParamLimits

0x1fa3,	// (0x00020478) aid_size_cell_itu2

0x1fe7,	// (0x000204bc) bg_popup_window_pane_cp09_ParamLimits

0x1fe7,	// (0x000204bc) bg_popup_window_pane_cp09

0x1ff5,	// (0x000204ca) field_vitu2_entry_pane_ParamLimits

0x1ff5,	// (0x000204ca) field_vitu2_entry_pane

0x2015,	// (0x000204ea) grid_vitu2_function_pane_ParamLimits

0x2015,	// (0x000204ea) grid_vitu2_function_pane

0x2059,	// (0x0002052e) grid_vitu2_itu_pane_ParamLimits

0x2059,	// (0x0002052e) grid_vitu2_itu_pane

0x20cf,	// (0x000205a4) cell_vitu2_itu_pane_ParamLimits

0x20cf,	// (0x000205a4) cell_vitu2_itu_pane

0x20e4,	// (0x000205b9) cell_vitu2_function_pane_ParamLimits

0x20e4,	// (0x000205b9) cell_vitu2_function_pane

0xd145,	// (0x0002b61a) bg_popup_call_pane_cp08_ParamLimits

0xd145,	// (0x0002b61a) bg_popup_call_pane_cp08

0xd15c,	// (0x0002b631) field_vitu2_entry_pane_g1

0xd168,	// (0x0002b63d) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002ddf0) field_vitu2_entry_pane_g

0xd182,	// (0x0002b657) field_vitu2_entry_pane_t1_ParamLimits

0xd182,	// (0x0002b657) field_vitu2_entry_pane_t1

0xd1ae,	// (0x0002b683) field_vitu2_entry_pane_t2_ParamLimits

0xd1ae,	// (0x0002b683) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002ddf7) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002ddf7) field_vitu2_entry_pane_t

0x2125,	// (0x000205fa) bg_button_pane_cp010_ParamLimits

0x2125,	// (0x000205fa) bg_button_pane_cp010

0x2133,	// (0x00020608) cell_vitu2_itu_pane_g1

0x215c,	// (0x00020631) cell_vitu2_itu_pane_t1_ParamLimits

0x215c,	// (0x00020631) cell_vitu2_itu_pane_t1

0x21a8,	// (0x0002067d) cell_vitu2_itu_pane_t2_ParamLimits

0x21a8,	// (0x0002067d) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002de01) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002de01) cell_vitu2_itu_pane_t

0x13d0,	// (0x0001f8a5) bg_button_pane_cp011

0x2263,	// (0x00020738) cell_vitu2_function_pane_g1

0x0efe,	// (0x0001f3d3) main_myfav_hc_pane

0x1d21,	// (0x000201f6) popup_image3_note_pane_ParamLimits

0x1d21,	// (0x000201f6) popup_image3_note_pane

0x1d2f,	// (0x00020204) popup_image3_tool_bar_pane_ParamLimits

0x1d2f,	// (0x00020204) popup_image3_tool_bar_pane

0x2216,	// (0x000206eb) cell_vitu2_itu_pane_t3_ParamLimits

0x2216,	// (0x000206eb) cell_vitu2_itu_pane_t3

0x9aa5,	// (0x00027f7a) bg_popup_trans_pane

0xd1d3,	// (0x0002b6a8) grid_image3_tool_bar_pane

0xd1dd,	// (0x0002b6b2) bg_popup_trans_pane_g1

0xa62f,	// (0x00028b04) bg_popup_trans_pane_g2

0xd1e5,	// (0x0002b6ba) bg_popup_trans_pane_g3

0xd1ed,	// (0x0002b6c2) bg_popup_trans_pane_g4

0xd1f5,	// (0x0002b6ca) bg_popup_trans_pane_g5

0xd1fd,	// (0x0002b6d2) bg_popup_trans_pane_g6

0xd205,	// (0x0002b6da) bg_popup_trans_pane_g7

0xd20d,	// (0x0002b6e2) bg_popup_trans_pane_g8

0xa60f,	// (0x00028ae4) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002de08) bg_popup_trans_pane_g

0xd215,	// (0x0002b6ea) cell_image3_tool_bar_pane_ParamLimits

0xd215,	// (0x0002b6ea) cell_image3_tool_bar_pane

0xc6bd,	// (0x0002ab92) cell_image3_tool_bar_pane_g1

0x9aa5,	// (0x00027f7a) bg_popup_trans_pane_cp1

0xd229,	// (0x0002b6fe) popup_image3_note_pane_t1

0xd237,	// (0x0002b70c) popup_image3_note_pane_t2

0xd245,	// (0x0002b71a) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002de1b) popup_image3_note_pane_t

0xd253,	// (0x0002b728) popup_image3_note_pane_t3_copy1

0x69e3,	// (0x00024eb8) bg_myfav_hc_instruction_pane_ParamLimits

0x69e3,	// (0x00024eb8) bg_myfav_hc_instruction_pane

0x69fb,	// (0x00024ed0) cell_myfav_contact_pane_ParamLimits

0x69fb,	// (0x00024ed0) cell_myfav_contact_pane

0x6a15,	// (0x00024eea) cell_myfav_contact_pane_cp1_ParamLimits

0x6a15,	// (0x00024eea) cell_myfav_contact_pane_cp1

0x6a2d,	// (0x00024f02) cell_myfav_contact_pane_cp2_ParamLimits

0x6a2d,	// (0x00024f02) cell_myfav_contact_pane_cp2

0x6a45,	// (0x00024f1a) cell_myfav_contact_pane_cp3_ParamLimits

0x6a45,	// (0x00024f1a) cell_myfav_contact_pane_cp3

0x6a5c,	// (0x00024f31) cell_myfav_contact_pane_cp4_ParamLimits

0x6a5c,	// (0x00024f31) cell_myfav_contact_pane_cp4

0x6a72,	// (0x00024f47) cell_myfav_contact_pane_cp5_ParamLimits

0x6a72,	// (0x00024f47) cell_myfav_contact_pane_cp5

0x6a86,	// (0x00024f5b) cell_myfav_contact_pane_cp6_ParamLimits

0x6a86,	// (0x00024f5b) cell_myfav_contact_pane_cp6

0x6a9a,	// (0x00024f6f) cell_myfav_contact_pane_cp7_ParamLimits

0x6a9a,	// (0x00024f6f) cell_myfav_contact_pane_cp7

0xd261,	// (0x0002b736) listscroll_gen_pane_cp05

0x6ab2,	// (0x00024f87) main_myfav_hc_pane_g1_ParamLimits

0x6ab2,	// (0x00024f87) main_myfav_hc_pane_g1

0x6aca,	// (0x00024f9f) main_myfav_hc_pane_g2_ParamLimits

0x6aca,	// (0x00024f9f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002de22) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002de22) main_myfav_hc_pane_g

0x6afa,	// (0x00024fcf) main_myfav_hc_pane_t1_ParamLimits

0x6afa,	// (0x00024fcf) main_myfav_hc_pane_t1

0xd26a,	// (0x0002b73f) main_myfav_hc_pane_t2_ParamLimits

0xd26a,	// (0x0002b73f) main_myfav_hc_pane_t2

0xd27c,	// (0x0002b751) main_myfav_hc_pane_t3_ParamLimits

0xd27c,	// (0x0002b751) main_myfav_hc_pane_t3

0x6b11,	// (0x00024fe6) main_myfav_hc_pane_t4_ParamLimits

0x6b11,	// (0x00024fe6) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002de29) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002de29) main_myfav_hc_pane_t

0xc6bd,	// (0x0002ab92) bg_myfav_hc_instruction_pane_g1

0xd28e,	// (0x0002b763) cell_myfav_contact_pane_g1_ParamLimits

0xd28e,	// (0x0002b763) cell_myfav_contact_pane_g1

0xd28e,	// (0x0002b763) cell_myfav_contact_pane_g2_ParamLimits

0xd28e,	// (0x0002b763) cell_myfav_contact_pane_g2

0xd29a,	// (0x0002b76f) cell_myfav_contact_pane_g3_ParamLimits

0xd29a,	// (0x0002b76f) cell_myfav_contact_pane_g3

0xc9f6,	// (0x0002aecb) cell_myfav_contact_pane_g4_ParamLimits

0xc9f6,	// (0x0002aecb) cell_myfav_contact_pane_g4

0xd2a7,	// (0x0002b77c) cell_myfav_contact_pane_g5_ParamLimits

0xd2a7,	// (0x0002b77c) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002de34) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002de34) cell_myfav_contact_pane_g

0x6ae2,	// (0x00024fb7) main_myfav_hc_pane_g3_ParamLimits

0x6ae2,	// (0x00024fb7) main_myfav_hc_pane_g3

0x0df9,	// (0x0001f2ce) popup_adpt_find_window

0x6b3b,	// (0x00025010) afind_page_pane_ParamLimits

0x6b3b,	// (0x00025010) afind_page_pane

0x6b48,	// (0x0002501d) aid_size_cell_afind_ParamLimits

0x6b48,	// (0x0002501d) aid_size_cell_afind

0x6b62,	// (0x00025037) bg_popup_sub_pane_cp09_ParamLimits

0x6b62,	// (0x00025037) bg_popup_sub_pane_cp09

0x6b6f,	// (0x00025044) find_pane_cp01_ParamLimits

0x6b6f,	// (0x00025044) find_pane_cp01

0xd2cf,	// (0x0002b7a4) grid_afind_control_pane_ParamLimits

0xd2cf,	// (0x0002b7a4) grid_afind_control_pane

0x6b7c,	// (0x00025051) grid_afind_pane_ParamLimits

0x6b7c,	// (0x00025051) grid_afind_pane

0x6b96,	// (0x0002506b) cell_afind_pane_ParamLimits

0x6b96,	// (0x0002506b) cell_afind_pane

0xc6bd,	// (0x0002ab92) afind_page_pane_g1

0x6bde,	// (0x000250b3) afind_page_pane_g2

0x6be7,	// (0x000250bc) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002de3f) afind_page_pane_g

0x6bf0,	// (0x000250c5) afind_page_pane_t1

0xd2e3,	// (0x0002b7b8) cell_afind_grid_control_pane_ParamLimits

0xd2e3,	// (0x0002b7b8) cell_afind_grid_control_pane

0xd058,	// (0x0002b52d) bg_button_pane_cp69_ParamLimits

0xd058,	// (0x0002b52d) bg_button_pane_cp69

0x6c10,	// (0x000250e5) cell_afind_pane_g1_ParamLimits

0x6c10,	// (0x000250e5) cell_afind_pane_g1

0x6c1d,	// (0x000250f2) cell_afind_pane_t1_ParamLimits

0x6c1d,	// (0x000250f2) cell_afind_pane_t1

0xa428,	// (0x000288fd) bg_button_pane_cp72

0xd2f2,	// (0x0002b7c7) cell_afind_grid_control_pane_g1

0x4fef,	// (0x000234c4) aid_image_placing_area_ParamLimits

0x4fef,	// (0x000234c4) aid_image_placing_area

0xcd26,	// (0x0002b1fb) field_vitu_entry_pane_g1_ParamLimits

0xcd26,	// (0x0002b1fb) field_vitu_entry_pane_g1

0xcd32,	// (0x0002b207) field_vitu_entry_pane_g2_ParamLimits

0xcd32,	// (0x0002b207) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002dcf0) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002dcf0) field_vitu_entry_pane_g

0x6677,	// (0x00024b4c) cell_vitu_itu_pane_g1_ParamLimits

0x66c7,	// (0x00024b9c) cell_vitu_itu_pane_t3_ParamLimits

0x66c7,	// (0x00024b9c) cell_vitu_itu_pane_t3

0xd008,	// (0x0002b4dd) mp4_progress_pane_t1_ParamLimits

0xd021,	// (0x0002b4f6) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002dd85) mp4_progress_pane_t_ParamLimits

0xd03a,	// (0x0002b50f) mup_progress_pane_cp04_ParamLimits

0x6b25,	// (0x00024ffa) main_myfav_hc_pane_t5_ParamLimits

0x6b25,	// (0x00024ffa) main_myfav_hc_pane_t5

0x0cbc,	// (0x0001f191) aid_zoom_text_primary

0x0df9,	// (0x0001f2ce) popup_adpt_find_window_ParamLimits

0x13d0,	// (0x0001f8a5) main_cam_set_pane

0x1daf,	// (0x00020284) cam4_zoom_pane_ParamLimits

0x1daf,	// (0x00020284) cam4_zoom_pane

0x6c2f,	// (0x00025104) main_cam_set_pane_g1_ParamLimits

0x6c2f,	// (0x00025104) main_cam_set_pane_g1

0x6c3d,	// (0x00025112) main_cam_set_pane_g2_ParamLimits

0x6c3d,	// (0x00025112) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002de46) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002de46) main_cam_set_pane_g

0x6c49,	// (0x0002511e) main_cam_set_pane_t1_ParamLimits

0x6c49,	// (0x0002511e) main_cam_set_pane_t1

0x6c65,	// (0x0002513a) main_cset_listscroll_pane_ParamLimits

0x6c65,	// (0x0002513a) main_cset_listscroll_pane

0x6c90,	// (0x00025165) main_cset_slider_pane_ParamLimits

0x6c90,	// (0x00025165) main_cset_slider_pane

0xd303,	// (0x0002b7d8) main_cset_list_pane_ParamLimits

0xd303,	// (0x0002b7d8) main_cset_list_pane

0xd313,	// (0x0002b7e8) scroll_pane_cp028

0x6caf,	// (0x00025184) aid_area_touch_slider

0x6ccb,	// (0x000251a0) cset_slider_pane

0x6cf5,	// (0x000251ca) main_cset_slider_pane_g1

0x6d0a,	// (0x000251df) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002de4b) main_cset_slider_pane_g

0xd34c,	// (0x0002b821) main_cset_slider_pane_t1

0x6dd0,	// (0x000252a5) main_cset_slider_pane_t2

0x6dea,	// (0x000252bf) main_cset_slider_pane_t3

0x6e04,	// (0x000252d9) main_cset_slider_pane_t4

0x6e22,	// (0x000252f7) main_cset_slider_pane_t5

0x6e40,	// (0x00025315) main_cset_slider_pane_t6

0x6e57,	// (0x0002532c) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002de70) main_cset_slider_pane_t

0x6f65,	// (0x0002543a) cset_list_set_pane_ParamLimits

0x6f65,	// (0x0002543a) cset_list_set_pane

0x6f81,	// (0x00025456) aid_position_infowindow_above

0x6f89,	// (0x0002545e) aid_position_infowindow_below

0x6f91,	// (0x00025466) cset_list_set_pane_g1_ParamLimits

0x6f91,	// (0x00025466) cset_list_set_pane_g1

0x6f9d,	// (0x00025472) cset_list_set_pane_g3_ParamLimits

0x6f9d,	// (0x00025472) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002de8f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002de8f) cset_list_set_pane_g

0x6fac,	// (0x00025481) cset_list_set_pane_t1_ParamLimits

0x6fac,	// (0x00025481) cset_list_set_pane_t1

0xa34f,	// (0x00028824) list_highlight_pane_cp021_ParamLimits

0xa34f,	// (0x00028824) list_highlight_pane_cp021

0xaf96,	// (0x0002946b) cset_slider_pane_g1

0xafa8,	// (0x0002947d) cset_slider_pane_g2

0xaf9f,	// (0x00029474) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002de94) cset_slider_pane_g

0x2277,	// (0x0002074c) aid_area_touch_cam4_zoom

0x227f,	// (0x00020754) cam4_zoom_cont_pane

0x2287,	// (0x0002075c) cam4_zoom_pane_g1

0x228f,	// (0x00020764) cam4_zoom_pane_g2

0x2297,	// (0x0002076c) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002de9b) cam4_zoom_pane_g

0x229f,	// (0x00020774) cam4_zoom_cont_pane_g1

0x22a8,	// (0x0002077d) cam4_zoom_cont_pane_g2

0x22b1,	// (0x00020786) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002dea2) cam4_zoom_cont_pane_g

0x68fb,	// (0x00024dd0) call4_image_pane_ParamLimits

0x68fb,	// (0x00024dd0) call4_image_pane

0xd064,	// (0x0002b539) call4_windows_conf_pane_ParamLimits

0xd0a3,	// (0x0002b578) popup_call4_audio_in_window_ParamLimits

0xd0a3,	// (0x0002b578) popup_call4_audio_in_window

0x9aa5,	// (0x00027f7a) bg_popup_call2_act_pane_cp02

0xd119,	// (0x0002b5ee) call4_list_conf_pane

0xc6bd,	// (0x0002ab92) call4_image_pane_g1

0xc6bd,	// (0x0002ab92) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002dbb1) call4_image_pane_g

0xd3ec,	// (0x0002b8c1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3ec,	// (0x0002b8c1) list_single_graphic_popup_conf4_pane

0x9aa5,	// (0x00027f7a) list_highlight_pane_cp022

0xd3ff,	// (0x0002b8d4) list_single_graphic_popup_conf4_pane_g1

0xab83,	// (0x00029058) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002dea9) list_single_graphic_popup_conf4_pane_g

0xd407,	// (0x0002b8dc) list_single_graphic_popup_conf4_pane_t1

0x32f4,	// (0x000217c9) popup_vtel_slider_window_ParamLimits

0x32f4,	// (0x000217c9) popup_vtel_slider_window

0xd046,	// (0x0002b51b) dialer2_ne_pane_t2_ParamLimits

0xd046,	// (0x0002b51b) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002dd8a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002dd8a) dialer2_ne_pane_t

0xa34f,	// (0x00028824) bg_popup_sub_pane_cp010_ParamLimits

0xa34f,	// (0x00028824) bg_popup_sub_pane_cp010

0x6fc1,	// (0x00025496) popup_vtel_slider_window_g1_ParamLimits

0x6fc1,	// (0x00025496) popup_vtel_slider_window_g1

0x6fcd,	// (0x000254a2) popup_vtel_slider_window_g2_ParamLimits

0x6fcd,	// (0x000254a2) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002deae) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002deae) popup_vtel_slider_window_g

0x7015,	// (0x000254ea) vtel_slider_pane_ParamLimits

0x7015,	// (0x000254ea) vtel_slider_pane

0x7024,	// (0x000254f9) vtel_slider_pane_g1_ParamLimits

0x7024,	// (0x000254f9) vtel_slider_pane_g1

0x7031,	// (0x00025506) vtel_slider_pane_g2_ParamLimits

0x7031,	// (0x00025506) vtel_slider_pane_g2

0x703e,	// (0x00025513) vtel_slider_pane_g3_ParamLimits

0x703e,	// (0x00025513) vtel_slider_pane_g3

0x7024,	// (0x000254f9) vtel_slider_pane_g4_ParamLimits

0x7024,	// (0x000254f9) vtel_slider_pane_g4

0x704b,	// (0x00025520) vtel_slider_pane_g5_ParamLimits

0x704b,	// (0x00025520) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002deb7) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002deb7) vtel_slider_pane_g

0x13d0,	// (0x0001f8a5) main_gallery2_pane

0x1fc9,	// (0x0002049e) aid_size_row_itut2_dropdow_list_ParamLimits

0x1fc9,	// (0x0002049e) aid_size_row_itut2_dropdow_list

0x2037,	// (0x0002050c) grid_vitu2_function_top_pane_ParamLimits

0x2037,	// (0x0002050c) grid_vitu2_function_top_pane

0x208d,	// (0x00020562) popup_vitu2_dropdown_list_window_ParamLimits

0x208d,	// (0x00020562) popup_vitu2_dropdown_list_window

0x20ad,	// (0x00020582) popup_vitu2_match_list_window

0x22ba,	// (0x0002078f) cell_vitu2_function_top_pane_ParamLimits

0x22ba,	// (0x0002078f) cell_vitu2_function_top_pane

0x22da,	// (0x000207af) cell_vitu2_function_top_pane_cp01_ParamLimits

0x22da,	// (0x000207af) cell_vitu2_function_top_pane_cp01

0x22f8,	// (0x000207cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x22f8,	// (0x000207cd) cell_vitu2_function_top_wide_pane

0x13d0,	// (0x0001f8a5) bg_button_pane_cp012

0x2316,	// (0x000207eb) cell_vitu2_function_top_pane_g1

0x232a,	// (0x000207ff) bg_button_pane_cp013_ParamLimits

0x232a,	// (0x000207ff) bg_button_pane_cp013

0x7066,	// (0x0002553b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7066,	// (0x0002553b) cell_vitu2_function_top_wide_pane_g1

0x0ef0,	// (0x0001f3c5) bg_popup_sub_pane_cp20

0x2346,	// (0x0002081b) list_vitu2_match_list_pane

0xd1dd,	// (0x0002b6b2) bg_popup_sub_pane_cp20_g1

0xd1e5,	// (0x0002b6ba) bg_popup_sub_pane_cp20_g2

0xa62f,	// (0x00028b04) bg_popup_sub_pane_cp20_g3

0xd1ed,	// (0x0002b6c2) bg_popup_sub_pane_cp20_g4

0xa60f,	// (0x00028ae4) bg_popup_sub_pane_cp20_g5

0xd41d,	// (0x0002b8f2) bg_popup_sub_pane_cp20_g6

0xd1fd,	// (0x0002b6d2) bg_popup_sub_pane_cp20_g7

0xd205,	// (0x0002b6da) bg_popup_sub_pane_cp20_g8

0xd20d,	// (0x0002b6e2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002dec2) bg_popup_sub_pane_cp20_g

0x235e,	// (0x00020833) list_vitu2_match_list_item_pane_ParamLimits

0x235e,	// (0x00020833) list_vitu2_match_list_item_pane

0x2370,	// (0x00020845) list_vitu2_match_list_item_pane_t1

0x0efe,	// (0x0001f3d3) bg_popup_sub_pane_cp21

0x237e,	// (0x00020853) grid_vitu2_dropdown_list_pane

0x2386,	// (0x0002085b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2386,	// (0x0002085b) cell_vitu2_dropdown_list_char_pane

0x23a7,	// (0x0002087c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x23a7,	// (0x0002087c) cell_vitu2_dropdown_list_ctrl_pane

0xd425,	// (0x0002b8fa) cell_vitu2_dropdown_list_char_pane_g1

0xd42e,	// (0x0002b903) cell_vitu2_dropdown_list_char_pane_g2

0xd437,	// (0x0002b90c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002dedf) cell_vitu2_dropdown_list_char_pane_g

0x23d3,	// (0x000208a8) cell_vitu2_dropdown_list_char_pane_t1

0x70c5,	// (0x0002559a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70c5,	// (0x0002559a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70d5,	// (0x000255aa) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70d5,	// (0x000255aa) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70e6,	// (0x000255bb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70e6,	// (0x000255bb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x23e1,	// (0x000208b6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x23e1,	// (0x000208b6) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e1f,	// (0x000202f4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e1f,	// (0x000202f4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002dee6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002dee6) cell_vitu2_dropdown_list_ctrl_pane_g

0x70f6,	// (0x000255cb) aid_size_cell_gallery2_ParamLimits

0x70f6,	// (0x000255cb) aid_size_cell_gallery2

0x7110,	// (0x000255e5) grid_gallery2_pane_ParamLimits

0x7110,	// (0x000255e5) grid_gallery2_pane

0x64f8,	// (0x000249cd) scroll_pane_cp029_ParamLimits

0x64f8,	// (0x000249cd) scroll_pane_cp029

0x7127,	// (0x000255fc) cell_gallery2_pane_ParamLimits

0x7127,	// (0x000255fc) cell_gallery2_pane

0xd440,	// (0x0002b915) cell_gallery2_pane_g2

0x717c,	// (0x00025651) cell_gallery2_pane_g3

0xd448,	// (0x0002b91d) cell_gallery2_pane_g4

0xd450,	// (0x0002b925) cell_gallery2_pane_g5

0xae60,	// (0x00029335) grid_highlight_pane_cp10

0x20ad,	// (0x00020582) popup_vitu2_match_list_window_ParamLimits

0x20bf,	// (0x00020594) popup_vitu2_query_window_ParamLimits

0x20bf,	// (0x00020594) popup_vitu2_query_window

0x0efe,	// (0x0001f3d3) bg_vitu2_candi_button_pane

0xd425,	// (0x0002b8fa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd42e,	// (0x0002b903) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd437,	// (0x0002b90c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7184,	// (0x00025659) bg_button_pane_cp015

0x7196,	// (0x0002566b) bg_button_pane_cp016

0x71a9,	// (0x0002567e) bg_button_pane_cp017

0xc2b3,	// (0x0002a788) bg_popup_sub_pane_cp22

0xd458,	// (0x0002b92d) popup_vitu2_query_window_g1

0x71ee,	// (0x000256c3) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002def1) popup_vitu2_query_window_g

0x720b,	// (0x000256e0) popup_vitu2_query_window_t1_ParamLimits

0x720b,	// (0x000256e0) popup_vitu2_query_window_t1

0x723e,	// (0x00025713) popup_vitu2_query_window_t2_ParamLimits

0x723e,	// (0x00025713) popup_vitu2_query_window_t2

0x7250,	// (0x00025725) popup_vitu2_query_window_t3_ParamLimits

0x7250,	// (0x00025725) popup_vitu2_query_window_t3

0x7278,	// (0x0002574d) popup_vitu2_query_window_t4_ParamLimits

0x7278,	// (0x0002574d) popup_vitu2_query_window_t4

0x7299,	// (0x0002576e) popup_vitu2_query_window_t5_ParamLimits

0x7299,	// (0x0002576e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002def8) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002def8) popup_vitu2_query_window_t

0xd2fb,	// (0x0002b7d0) main_cset_text_pane

0x6caf,	// (0x00025184) aid_area_touch_slider_ParamLimits

0x6ccb,	// (0x000251a0) cset_slider_pane_ParamLimits

0x6cf5,	// (0x000251ca) main_cset_slider_pane_g1_ParamLimits

0x6d0a,	// (0x000251df) main_cset_slider_pane_g2_ParamLimits

0xd31c,	// (0x0002b7f1) main_cset_slider_pane_g3_ParamLimits

0xd31c,	// (0x0002b7f1) main_cset_slider_pane_g3

0x6d1f,	// (0x000251f4) main_cset_slider_pane_g4_ParamLimits

0x6d1f,	// (0x000251f4) main_cset_slider_pane_g4

0x6d2e,	// (0x00025203) main_cset_slider_pane_g5_ParamLimits

0x6d2e,	// (0x00025203) main_cset_slider_pane_g5

0x6d3c,	// (0x00025211) main_cset_slider_pane_g6_ParamLimits

0x6d3c,	// (0x00025211) main_cset_slider_pane_g6

0xf976,	// (0x0002de4b) main_cset_slider_pane_g_ParamLimits

0xd34c,	// (0x0002b821) main_cset_slider_pane_t1_ParamLimits

0x6dd0,	// (0x000252a5) main_cset_slider_pane_t2_ParamLimits

0x6dea,	// (0x000252bf) main_cset_slider_pane_t3_ParamLimits

0x6e04,	// (0x000252d9) main_cset_slider_pane_t4_ParamLimits

0x6e22,	// (0x000252f7) main_cset_slider_pane_t5_ParamLimits

0x6e40,	// (0x00025315) main_cset_slider_pane_t6_ParamLimits

0x6e57,	// (0x0002532c) main_cset_slider_pane_t7_ParamLimits

0x6e85,	// (0x0002535a) main_cset_slider_pane_t8_ParamLimits

0x6e85,	// (0x0002535a) main_cset_slider_pane_t8

0x6ead,	// (0x00025382) main_cset_slider_pane_t9_ParamLimits

0x6ead,	// (0x00025382) main_cset_slider_pane_t9

0x6ed5,	// (0x000253aa) main_cset_slider_pane_t10_ParamLimits

0x6ed5,	// (0x000253aa) main_cset_slider_pane_t10

0x6efd,	// (0x000253d2) main_cset_slider_pane_t11_ParamLimits

0x6efd,	// (0x000253d2) main_cset_slider_pane_t11

0x6f27,	// (0x000253fc) main_cset_slider_pane_t12_ParamLimits

0x6f27,	// (0x000253fc) main_cset_slider_pane_t12

0x6f46,	// (0x0002541b) main_cset_slider_pane_t13_ParamLimits

0x6f46,	// (0x0002541b) main_cset_slider_pane_t13

0xf99b,	// (0x0002de70) main_cset_slider_pane_t_ParamLimits

0x9aa5,	// (0x00027f7a) bg_popup_sub_pane_cp011

0xd464,	// (0x0002b939) main_cset_text_pane_g1

0xd46c,	// (0x0002b941) main_cset_text_pane_t1

0xd47a,	// (0x0002b94f) main_cset_text_pane_t2

0xd488,	// (0x0002b95d) main_cset_text_pane_t3

0xd496,	// (0x0002b96b) main_cset_text_pane_t4

0xd4a4,	// (0x0002b979) main_cset_text_pane_t5

0xd4b2,	// (0x0002b987) main_cset_text_pane_t6

0xd4c0,	// (0x0002b995) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002df07) main_cset_text_pane_t

0x0efe,	// (0x0001f3d3) main_cam4_burst_pane

0x0efe,	// (0x0001f3d3) main_cam5_pane

0x6bfe,	// (0x000250d3) bg_button_pane_cp019

0x6c07,	// (0x000250dc) bg_button_pane_cp020

0xd328,	// (0x0002b7fd) main_cset_slider_pane_g7_ParamLimits

0xd328,	// (0x0002b7fd) main_cset_slider_pane_g7

0xd334,	// (0x0002b809) main_cset_slider_pane_g8_ParamLimits

0xd334,	// (0x0002b809) main_cset_slider_pane_g8

0x6d50,	// (0x00025225) main_cset_slider_pane_g9_ParamLimits

0x6d50,	// (0x00025225) main_cset_slider_pane_g9

0x6d5c,	// (0x00025231) main_cset_slider_pane_g10_ParamLimits

0x6d5c,	// (0x00025231) main_cset_slider_pane_g10

0x6d68,	// (0x0002523d) main_cset_slider_pane_g11_ParamLimits

0x6d68,	// (0x0002523d) main_cset_slider_pane_g11

0x6d74,	// (0x00025249) main_cset_slider_pane_g12_ParamLimits

0x6d74,	// (0x00025249) main_cset_slider_pane_g12

0x6d80,	// (0x00025255) main_cset_slider_pane_g13_ParamLimits

0x6d80,	// (0x00025255) main_cset_slider_pane_g13

0x6d8e,	// (0x00025263) main_cset_slider_pane_g14_ParamLimits

0x6d8e,	// (0x00025263) main_cset_slider_pane_g14

0x6d9c,	// (0x00025271) main_cset_slider_pane_g15_ParamLimits

0x6d9c,	// (0x00025271) main_cset_slider_pane_g15

0xd37a,	// (0x0002b84f) main_cset_slider_pane_t14_ParamLimits

0xd37a,	// (0x0002b84f) main_cset_slider_pane_t14

0xd3b3,	// (0x0002b888) main_cset_slider_pane_t15_ParamLimits

0xd3b3,	// (0x0002b888) main_cset_slider_pane_t15

0x7310,	// (0x000257e5) aid_cam4_burst_size_cell_ParamLimits

0x7310,	// (0x000257e5) aid_cam4_burst_size_cell

0x732c,	// (0x00025801) grid_cam4_burst_pane_ParamLimits

0x732c,	// (0x00025801) grid_cam4_burst_pane

0x735c,	// (0x00025831) linegrid_cam4_burst_pane_ParamLimits

0x735c,	// (0x00025831) linegrid_cam4_burst_pane

0x737e,	// (0x00025853) scroll_pane_cp30_ParamLimits

0x737e,	// (0x00025853) scroll_pane_cp30

0x738a,	// (0x0002585f) cell_cam4_burst_pane_ParamLimits

0x738a,	// (0x0002585f) cell_cam4_burst_pane

0xd4ce,	// (0x0002b9a3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4ce,	// (0x0002b9a3) linegrid_cam4_burst_pane_g1

0x73c6,	// (0x0002589b) linegrid_cam4_burst_pane_g2_ParamLimits

0x73c6,	// (0x0002589b) linegrid_cam4_burst_pane_g2

0xd4db,	// (0x0002b9b0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4db,	// (0x0002b9b0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002df16) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002df16) linegrid_cam4_burst_pane_g

0x73d7,	// (0x000258ac) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73d7,	// (0x000258ac) linegrid_cam4_burst_pane_g3_copy1

0xd4e8,	// (0x0002b9bd) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4e8,	// (0x0002b9bd) linegrid_cam4_burst_pane_g4

0x73f1,	// (0x000258c6) linegrid_cam4_burst_pane_g5_ParamLimits

0x73f1,	// (0x000258c6) linegrid_cam4_burst_pane_g5

0x7402,	// (0x000258d7) linegrid_cam4_burst_pane_g6_ParamLimits

0x7402,	// (0x000258d7) linegrid_cam4_burst_pane_g6

0xd4f5,	// (0x0002b9ca) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4f5,	// (0x0002b9ca) linegrid_cam4_burst_pane_g7

0x7413,	// (0x000258e8) cell_cam4_burst_pane_g1

0xd50e,	// (0x0002b9e3) main_cam5_pane_t1_ParamLimits

0xd50e,	// (0x0002b9e3) main_cam5_pane_t1

0xd520,	// (0x0002b9f5) main_cam5_pane_t2_ParamLimits

0xd520,	// (0x0002b9f5) main_cam5_pane_t2

0xd565,	// (0x0002ba3a) main_cam5_pane_t3_ParamLimits

0xd565,	// (0x0002ba3a) main_cam5_pane_t3

0xd577,	// (0x0002ba4c) main_cam5_pane_t4_ParamLimits

0xd577,	// (0x0002ba4c) main_cam5_pane_t4

0xd58f,	// (0x0002ba64) main_cam5_pane_t5_ParamLimits

0xd58f,	// (0x0002ba64) main_cam5_pane_t5

0xd5a3,	// (0x0002ba78) main_cam5_pane_t6_ParamLimits

0xd5a3,	// (0x0002ba78) main_cam5_pane_t6

0xd5b7,	// (0x0002ba8c) main_cam5_pane_t7_ParamLimits

0xd5b7,	// (0x0002ba8c) main_cam5_pane_t7

0xd5c9,	// (0x0002ba9e) main_cam5_pane_t8_ParamLimits

0xd5c9,	// (0x0002ba9e) main_cam5_pane_t8

0xd5e5,	// (0x0002baba) main_cam5_pane_t9_ParamLimits

0xd5e5,	// (0x0002baba) main_cam5_pane_t9

0xd5f7,	// (0x0002bacc) main_cam5_pane_t10_ParamLimits

0xd5f7,	// (0x0002bacc) main_cam5_pane_t10

0xd609,	// (0x0002bade) main_cam5_pane_t11_ParamLimits

0xd609,	// (0x0002bade) main_cam5_pane_t11

0xd61b,	// (0x0002baf0) main_cam5_pane_t12_ParamLimits

0xd61b,	// (0x0002baf0) main_cam5_pane_t12

0xd630,	// (0x0002bb05) main_cam5_pane_t13_ParamLimits

0xd630,	// (0x0002bb05) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002df22) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002df22) main_cam5_pane_t

0x0eaf,	// (0x0001f384) popup_scut_keymap_window_ParamLimits

0x0eaf,	// (0x0001f384) popup_scut_keymap_window

0x7428,	// (0x000258fd) aid_size_cell_brow_shortcut

0xae60,	// (0x00029335) bg_popup_window_pane_cp010

0x7434,	// (0x00025909) grid_scut_pane

0x7440,	// (0x00025915) cell_scut_pane_ParamLimits

0x7440,	// (0x00025915) cell_scut_pane

0x7457,	// (0x0002592c) cell_scut_pane_g1

0xd64d,	// (0x0002bb22) cell_scut_pane_t1

0xd65c,	// (0x0002bb31) cell_scut_pane_t2

0x7460,	// (0x00025935) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002df3d) cell_scut_pane_t

0x5d50,	// (0x00024225) main_mup3_pane_g8_ParamLimits

0x5d50,	// (0x00024225) main_mup3_pane_g8

0x1fd7,	// (0x000204ac) area_vitu2_query_pane_ParamLimits

0x1fd7,	// (0x000204ac) area_vitu2_query_pane

0x71bc,	// (0x00025691) input_focus_pane_cp08

0xd66b,	// (0x0002bb40) area_vitu2_query_pane_g1

0x746e,	// (0x00025943) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002df44) area_vitu2_query_pane_g

0x747f,	// (0x00025954) area_vitu2_query_pane_t1_ParamLimits

0x747f,	// (0x00025954) area_vitu2_query_pane_t1

0x7493,	// (0x00025968) area_vitu2_query_pane_t2_ParamLimits

0x7493,	// (0x00025968) area_vitu2_query_pane_t2

0x74a7,	// (0x0002597c) area_vitu2_query_pane_t3_ParamLimits

0x74a7,	// (0x0002597c) area_vitu2_query_pane_t3

0xd677,	// (0x0002bb4c) area_vitu2_query_pane_t4_ParamLimits

0xd677,	// (0x0002bb4c) area_vitu2_query_pane_t4

0xd69f,	// (0x0002bb74) area_vitu2_query_pane_t5_ParamLimits

0xd69f,	// (0x0002bb74) area_vitu2_query_pane_t5

0xd6c7,	// (0x0002bb9c) area_vitu2_query_pane_t6_ParamLimits

0xd6c7,	// (0x0002bb9c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002df49) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002df49) area_vitu2_query_pane_t

0x74cf,	// (0x000259a4) bg_button_pane_cp018

0x74dd,	// (0x000259b2) bg_button_pane_cp021

0x74e9,	// (0x000259be) bg_button_pane_cp022

0x74fa,	// (0x000259cf) input_focus_pane_cp09

0xaca7,	// (0x0002917c) aid_size_touch_mv_arrow_left

0xacd2,	// (0x000291a7) aid_size_touch_mv_arrow_right

0x6db4,	// (0x00025289) main_cset_slider_pane_g16_ParamLimits

0x6db4,	// (0x00025289) main_cset_slider_pane_g16

0x6dc2,	// (0x00025297) main_cset_slider_pane_g17_ParamLimits

0x6dc2,	// (0x00025297) main_cset_slider_pane_g17

0x7413,	// (0x000258e8) cell_cam4_burst_pane_g1_ParamLimits

0x9aa5,	// (0x00027f7a) compa_mode_pane

0x6fd9,	// (0x000254ae) popup_vtel_slider_window_g3_ParamLimits

0x6fd9,	// (0x000254ae) popup_vtel_slider_window_g3

0x6fed,	// (0x000254c2) popup_vtel_slider_window_g4_ParamLimits

0x6fed,	// (0x000254c2) popup_vtel_slider_window_g4

0x7001,	// (0x000254d6) popup_vtel_slider_window_t1_ParamLimits

0x7001,	// (0x000254d6) popup_vtel_slider_window_t1

0x0efe,	// (0x0001f3d3) main_cl_pane

0x146a,	// (0x0001f93f) popup_imed_adjust2_window_ParamLimits

0xc2b3,	// (0x0002a788) bg_tb_trans_pane_cp05_ParamLimits

0xcc52,	// (0x0002b127) popup_imed_adjust2_window_g1_ParamLimits

0xcc61,	// (0x0002b136) popup_imed_adjust2_window_g2_ParamLimits

0xcc61,	// (0x0002b136) popup_imed_adjust2_window_g2

0xcc6d,	// (0x0002b142) popup_imed_adjust2_window_g3_ParamLimits

0xcc6d,	// (0x0002b142) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002dcb4) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002dcb4) popup_imed_adjust2_window_g

0xcc79,	// (0x0002b14e) popup_imed_adjust2_window_t1_ParamLimits

0xcc91,	// (0x0002b166) slider_imed_adjust_pane_ParamLimits

0xcca5,	// (0x0002b17a) slider_imed_adjust_pane_g1_ParamLimits

0xccb5,	// (0x0002b18a) slider_imed_adjust_pane_g2_ParamLimits

0xccc5,	// (0x0002b19a) slider_imed_adjust_pane_g3_ParamLimits

0xccd6,	// (0x0002b1ab) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002dcbb) slider_imed_adjust_pane_g_ParamLimits

0x1d58,	// (0x0002022d) aid_touch_area_cam4_ParamLimits

0x1d58,	// (0x0002022d) aid_touch_area_cam4

0x1d68,	// (0x0002023d) battery_pane_cp01

0x1def,	// (0x000202c4) main_camera4_pane_g6_ParamLimits

0x1def,	// (0x000202c4) main_camera4_pane_g6

0x1e0d,	// (0x000202e2) main_camera4_pane_t2_ParamLimits

0x1e0d,	// (0x000202e2) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002ddbe) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002ddbe) main_camera4_pane_t

0x1e7e,	// (0x00020353) aid_touch_area_vid4_ParamLimits

0x1e7e,	// (0x00020353) aid_touch_area_vid4

0x1ebe,	// (0x00020393) main_video4_pane_g5_ParamLimits

0x1ebe,	// (0x00020393) main_video4_pane_g5

0x1ee2,	// (0x000203b7) vid4_progress_pane_ParamLimits

0x1ee2,	// (0x000203b7) vid4_progress_pane

0xd340,	// (0x0002b815) main_cset_slider_pane_g18_ParamLimits

0xd340,	// (0x0002b815) main_cset_slider_pane_g18

0xd502,	// (0x0002b9d7) cell_cam4_burst_pane_g2_ParamLimits

0xd502,	// (0x0002b9d7) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002df1d) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002df1d) cell_cam4_burst_pane_g

0x750b,	// (0x000259e0) bg_cl_pane_ParamLimits

0x750b,	// (0x000259e0) bg_cl_pane

0x7517,	// (0x000259ec) cl_header_pane_ParamLimits

0x7517,	// (0x000259ec) cl_header_pane

0x7523,	// (0x000259f8) cl_listscroll_pane_ParamLimits

0x7523,	// (0x000259f8) cl_listscroll_pane

0xd713,	// (0x0002bbe8) bg_cl_pane_g1

0xd71b,	// (0x0002bbf0) bg_cl_pane_g2

0xd723,	// (0x0002bbf8) bg_cl_pane_g3

0xd72b,	// (0x0002bc00) bg_cl_pane_g4

0xd733,	// (0x0002bc08) bg_cl_pane_g5

0xd73b,	// (0x0002bc10) bg_cl_pane_g6

0xd743,	// (0x0002bc18) bg_cl_pane_g7

0xd74b,	// (0x0002bc20) bg_cl_pane_g8

0xd753,	// (0x0002bc28) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002df58) bg_cl_pane_g

0x752f,	// (0x00025a04) aid_height_cl_leading_ParamLimits

0x752f,	// (0x00025a04) aid_height_cl_leading

0x753b,	// (0x00025a10) aid_height_cl_text_ParamLimits

0x753b,	// (0x00025a10) aid_height_cl_text

0xd2b3,	// (0x0002b788) bg_cl_header_pane_ParamLimits

0xd2b3,	// (0x0002b788) bg_cl_header_pane

0x7553,	// (0x00025a28) cl_header_pane_g1_ParamLimits

0x7553,	// (0x00025a28) cl_header_pane_g1

0x7560,	// (0x00025a35) cl_header_pane_t1_ParamLimits

0x7560,	// (0x00025a35) cl_header_pane_t1

0xd75b,	// (0x0002bc30) cl_list_pane

0xd313,	// (0x0002b7e8) hc_scroll_pane_cp01

0xa60f,	// (0x00028ae4) bg_cl_header_pane_g1

0xd1dd,	// (0x0002b6b2) bg_cl_header_pane_g2

0xa62f,	// (0x00028b04) bg_cl_header_pane_g3

0xd1ed,	// (0x0002b6c2) bg_cl_header_pane_g4

0xd1e5,	// (0x0002b6ba) bg_cl_header_pane_g5

0xd41d,	// (0x0002b8f2) bg_cl_header_pane_g6

0xd205,	// (0x0002b6da) bg_cl_header_pane_g7

0xd20d,	// (0x0002b6e2) bg_cl_header_pane_g8

0xd1fd,	// (0x0002b6d2) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002df6b) bg_cl_header_pane_g

0x7572,	// (0x00025a47) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7572,	// (0x00025a47) hc_cl_list_double_graphic_heading_pane

0x7586,	// (0x00025a5b) hc_cl_list_single_graphic_pane_ParamLimits

0x7586,	// (0x00025a5b) hc_cl_list_single_graphic_pane

0x75a0,	// (0x00025a75) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75a0,	// (0x00025a75) hc_cl_list_single_graphic_pane_g1

0x75ac,	// (0x00025a81) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75ac,	// (0x00025a81) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002df7e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002df7e) hc_cl_list_single_graphic_pane_g

0x75c0,	// (0x00025a95) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75c0,	// (0x00025a95) hc_cl_list_single_graphic_pane_t1

0x75a0,	// (0x00025a75) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75a0,	// (0x00025a75) hc_cl_list_double_graphic_heading_pane_g1

0x75d5,	// (0x00025aaa) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75d5,	// (0x00025aaa) hc_cl_list_double_graphic_heading_pane_g2

0x75e9,	// (0x00025abe) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75e9,	// (0x00025abe) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002df83) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002df83) hc_cl_list_double_graphic_heading_pane_g

0x75fd,	// (0x00025ad2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75fd,	// (0x00025ad2) hc_cl_list_double_graphic_heading_pane_t1

0x7612,	// (0x00025ae7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7612,	// (0x00025ae7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002df8a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002df8a) hc_cl_list_double_graphic_heading_pane_t

0x2405,	// (0x000208da) vid4_progress_pane_g1

0x2415,	// (0x000208ea) vid4_progress_pane_g2

0x2425,	// (0x000208fa) vid4_progress_pane_g3

0x2437,	// (0x0002090c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002df8f) vid4_progress_pane_g

0x2455,	// (0x0002092a) vid4_progress_pane_t1

0x246b,	// (0x00020940) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002df9a) vid4_progress_pane_t

0x2496,	// (0x0002096b) wait_bar_pane_cp07

0xc4ae,	// (0x0002a983) blid_firmament_pane_ParamLimits

0xc4f1,	// (0x0002a9c6) popup_blid_sat_info2_window_g1

0xc515,	// (0x0002a9ea) popup_blid_sat_info2_window_t3

0xc523,	// (0x0002a9f8) popup_blid_sat_info2_window_t4

0xc531,	// (0x0002aa06) popup_blid_sat_info2_window_t5

0xc53f,	// (0x0002aa14) popup_blid_sat_info2_window_t6

0xc54f,	// (0x0002aa24) popup_blid_sat_info2_window_t7

0xc55d,	// (0x0002aa32) popup_blid_sat_info2_window_t8

0xc56b,	// (0x0002aa40) popup_blid_sat_info2_window_t9

0xc579,	// (0x0002aa4e) popup_blid_sat_info2_window_t10

0xc63d,	// (0x0002ab12) aid_firma_cardinal_ParamLimits

0xc651,	// (0x0002ab26) blid_firmament_pane_t1_ParamLimits

0xc668,	// (0x0002ab3d) blid_firmament_pane_t2_ParamLimits

0xc67f,	// (0x0002ab54) blid_firmament_pane_t3_ParamLimits

0xc696,	// (0x0002ab6b) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002dba8) blid_firmament_pane_t_ParamLimits

0xc6ad,	// (0x0002ab82) blid_sat_info_pane_ParamLimits

0x13d0,	// (0x0001f8a5) main_cam_set_pane_ParamLimits

0x6491,	// (0x00024966) aid_size_cell_colour_35_ParamLimits

0x64ab,	// (0x00024980) aid_size_cell_colour_112_ParamLimits

0x64c2,	// (0x00024997) aid_size_cell_effect_ParamLimits

0xa34f,	// (0x00028824) bg_tb_trans_pane_cp02_ParamLimits

0xab45,	// (0x0002901a) heading_imed_pane_ParamLimits

0x64dc,	// (0x000249b1) listscroll_imed_pane_ParamLimits

0xb8d9,	// (0x00029dae) popup_call2_audio_first_window_g5_ParamLimits

0xb8d9,	// (0x00029dae) popup_call2_audio_first_window_g5

0x1be3,	// (0x000200b8) aid_size_touch_image3_arrow_left_ParamLimits

0x1be3,	// (0x000200b8) aid_size_touch_image3_arrow_left

0x1bf9,	// (0x000200ce) aid_size_touch_image3_arrow_right_ParamLimits

0x1bf9,	// (0x000200ce) aid_size_touch_image3_arrow_right

0x2480,	// (0x00020955) vid4_progress_pane_t3

0x6790,	// (0x00024c65) main_hwr_training_symbol_option_pane_ParamLimits

0x6790,	// (0x00024c65) main_hwr_training_symbol_option_pane

0xcf48,	// (0x0002b41d) popup_hwr_training_preview_window_ParamLimits

0xcf48,	// (0x0002b41d) popup_hwr_training_preview_window

0x18e1,	// (0x0001fdb6) hwr_training_navi_pane_g5_ParamLimits

0x18e1,	// (0x0001fdb6) hwr_training_navi_pane_g5

0xd1cb,	// (0x0002b6a0) popup_char_count_window

0x0ef0,	// (0x0001f3c5) bg_popup_sub_pane_cp20_ParamLimits

0x2346,	// (0x0002081b) list_vitu2_match_list_pane_ParamLimits

0x2352,	// (0x00020827) vitu2_page_scroll_pane_ParamLimits

0x2352,	// (0x00020827) vitu2_page_scroll_pane

0xd786,	// (0x0002bc5b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd786,	// (0x0002bc5b) list_single_hwr_training_symbol_option_pane

0xd799,	// (0x0002bc6e) list_single_hwr_training_symbol_option_pane_g1

0xd7a1,	// (0x0002bc76) list_single_hwr_training_symbol_option_pane_t1

0xd7c1,	// (0x0002bc96) bg_button_pane_cp023

0xd7ca,	// (0x0002bc9f) bg_button_pane_cp024

0x765f,	// (0x00025b34) vitu2_page_scroll_pane_g1

0x7667,	// (0x00025b3c) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002dfa1) vitu2_page_scroll_pane_g

0x766f,	// (0x00025b44) vitu2_page_scroll_pane_t1

0xcd02,	// (0x0002b1d7) popup_char_count_window_g1

0xd7fd,	// (0x0002bcd2) popup_char_count_window_g2

0xd806,	// (0x0002bcdb) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002dfa6) popup_char_count_window_g

0xd80f,	// (0x0002bce4) popup_char_count_window_t1

0x0efe,	// (0x0001f3d3) main_vded2_pane

0xcc3e,	// (0x0002b113) aid_size_cell_imed_line

0xcc48,	// (0x0002b11d) grid_imed_line_width_pane

0x1f4e,	// (0x00020423) vid4_indicators_pane_g4

0xd81d,	// (0x0002bcf2) cell_imed_line_width_pane_ParamLimits

0xd81d,	// (0x0002bcf2) cell_imed_line_width_pane

0xd831,	// (0x0002bd06) cell_imed_line_width_pane_g1

0xd7af,	// (0x0002bc84) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002dfad) cell_imed_line_width_pane_g

0x767e,	// (0x00025b53) main_vded2_pane_g1_ParamLimits

0x767e,	// (0x00025b53) main_vded2_pane_g1

0x768b,	// (0x00025b60) main_vded2_pane_g2_ParamLimits

0x768b,	// (0x00025b60) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002dfb2) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002dfb2) main_vded2_pane_g

0x7699,	// (0x00025b6e) vded2_slider_pane_ParamLimits

0x7699,	// (0x00025b6e) vded2_slider_pane

0x76a6,	// (0x00025b7b) aid_size_touch_vded2_end

0x76b0,	// (0x00025b85) aid_size_touch_vded2_playhead

0xd83a,	// (0x0002bd0f) aid_size_touch_vded2_start

0xd842,	// (0x0002bd17) vded2_slider_bg_pane

0xd84b,	// (0x0002bd20) vded2_slider_pane_g1

0xd854,	// (0x0002bd29) vded2_slider_pane_g2

0x76b8,	// (0x00025b8d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002dfb7) vded2_slider_pane_g

0xd85c,	// (0x0002bd31) vded2_slider_bg_pane_g1

0xd865,	// (0x0002bd3a) vded2_slider_bg_pane_g2

0xd86e,	// (0x0002bd43) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002dfbe) vded2_slider_bg_pane_g

0x4d50,	// (0x00023225) aid_postcard_touch_down_pane_ParamLimits

0x4d50,	// (0x00023225) aid_postcard_touch_down_pane

0x4d60,	// (0x00023235) aid_postcard_touch_up_pane_ParamLimits

0x4d60,	// (0x00023235) aid_postcard_touch_up_pane

0x0efe,	// (0x0001f3d3) main_blid2_pane

0x13f9,	// (0x0001f8ce) popup_blid2_search_window

0x9aa5,	// (0x00027f7a) blid2_gps_pane

0x9aa5,	// (0x00027f7a) blid2_navig_pane

0x9aa5,	// (0x00027f7a) blid2_search_pane

0x9aa5,	// (0x00027f7a) blid2_tripm_pane

0x76c1,	// (0x00025b96) blid2_search_pane_g1_ParamLimits

0x76c1,	// (0x00025b96) blid2_search_pane_g1

0x76d1,	// (0x00025ba6) blid2_search_pane_t1_ParamLimits

0x76d1,	// (0x00025ba6) blid2_search_pane_t1

0x76e3,	// (0x00025bb8) aid_size_cell_blid2_gps_ParamLimits

0x76e3,	// (0x00025bb8) aid_size_cell_blid2_gps

0x76f3,	// (0x00025bc8) blid2_gps_pane_g1_ParamLimits

0x76f3,	// (0x00025bc8) blid2_gps_pane_g1

0x76ff,	// (0x00025bd4) grid_blid2_satellite_pane_ParamLimits

0x76ff,	// (0x00025bd4) grid_blid2_satellite_pane

0x770f,	// (0x00025be4) blid2_navig_pane_g1_ParamLimits

0x770f,	// (0x00025be4) blid2_navig_pane_g1

0x771b,	// (0x00025bf0) blid2_navig_pane_t1_ParamLimits

0x771b,	// (0x00025bf0) blid2_navig_pane_t1

0x772d,	// (0x00025c02) blid2_navig_pane_t2_ParamLimits

0x772d,	// (0x00025c02) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002dfc5) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002dfc5) blid2_navig_pane_t

0x773f,	// (0x00025c14) blid2_navig_ring_pane_ParamLimits

0x773f,	// (0x00025c14) blid2_navig_ring_pane

0x774f,	// (0x00025c24) blid2_speed_pane_ParamLimits

0x774f,	// (0x00025c24) blid2_speed_pane

0x775b,	// (0x00025c30) blid2_tripm_pane_g1_ParamLimits

0x775b,	// (0x00025c30) blid2_tripm_pane_g1

0x776b,	// (0x00025c40) blid2_tripm_pane_g2_ParamLimits

0x776b,	// (0x00025c40) blid2_tripm_pane_g2

0x7777,	// (0x00025c4c) blid2_tripm_pane_g3_ParamLimits

0x7777,	// (0x00025c4c) blid2_tripm_pane_g3

0x7783,	// (0x00025c58) blid2_tripm_pane_g4_ParamLimits

0x7783,	// (0x00025c58) blid2_tripm_pane_g4

0x778f,	// (0x00025c64) blid2_tripm_pane_g5_ParamLimits

0x778f,	// (0x00025c64) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002dfca) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002dfca) blid2_tripm_pane_g

0x77ab,	// (0x00025c80) blid2_tripm_pane_t1_ParamLimits

0x77ab,	// (0x00025c80) blid2_tripm_pane_t1

0x77bf,	// (0x00025c94) blid2_tripm_pane_t2_ParamLimits

0x77bf,	// (0x00025c94) blid2_tripm_pane_t2

0x77d1,	// (0x00025ca6) blid2_tripm_pane_t3_ParamLimits

0x77d1,	// (0x00025ca6) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002dfd7) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002dfd7) blid2_tripm_pane_t

0x7803,	// (0x00025cd8) cell_blid2_satellite_pane_ParamLimits

0x7803,	// (0x00025cd8) cell_blid2_satellite_pane

0x781d,	// (0x00025cf2) cell_blid2_satellite_pane_g1

0xd877,	// (0x0002bd4c) cell_blid2_satellite_pane_t1

0xc6bd,	// (0x0002ab92) blid2_speed_pane_g1

0xd885,	// (0x0002bd5a) blid2_speed_pane_t1

0xd893,	// (0x0002bd68) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002dfe0) blid2_speed_pane_t

0xc6bd,	// (0x0002ab92) blid2_navig_ring_pane_g1

0x7826,	// (0x00025cfb) blid2_navig_ring_pane_g2

0x782e,	// (0x00025d03) blid2_navig_ring_pane_g3

0x7836,	// (0x00025d0b) blid2_navig_ring_pane_g4

0x783e,	// (0x00025d13) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002dfe5) blid2_navig_ring_pane_g

0x9aa5,	// (0x00027f7a) bg_popup_window_pane_cp011

0xd8a1,	// (0x0002bd76) popup_blid2_search_window_g1

0xd8a9,	// (0x0002bd7e) popup_blid2_search_window_t1

0xd8b7,	// (0x0002bd8c) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002dff0) popup_blid2_search_window_t

0xa51e,	// (0x000289f3) main_browser_pane_g1

0xa201,	// (0x000286d6) main_browser_pane_ParamLimits

0x13d0,	// (0x0001f8a5) bg_button_pane_cp011_ParamLimits

0x2263,	// (0x00020738) cell_vitu2_function_pane_g1_ParamLimits

0xc2b3,	// (0x0002a788) bg_popup_sub_pane_cp22_ParamLimits

0x71bc,	// (0x00025691) input_focus_pane_cp08_ParamLimits

0x71d3,	// (0x000256a8) popup_vitu2_query_button_pane_ParamLimits

0x71d3,	// (0x000256a8) popup_vitu2_query_button_pane

0x71e4,	// (0x000256b9) popup_vitu2_query_input_button_pane

0xd458,	// (0x0002b92d) popup_vitu2_query_window_g1_ParamLimits

0x71ee,	// (0x000256c3) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002def1) popup_vitu2_query_window_g_ParamLimits

0x9aa5,	// (0x00027f7a) bg_button_pane_cp026

0x7846,	// (0x00025d1b) popup_vitu2_query_input_button_pane_g1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp025

0xd8c5,	// (0x0002bd9a) popup_vitu2_query_button_pane_t1

0x5a88,	// (0x00023f5d) main_mp3_pane_t6

0x5a98,	// (0x00023f6d) popup_slider_window_cp01

0x1e2d,	// (0x00020302) cam4_battery_pane

0x1f0d,	// (0x000203e2) cam4_battery_pane_cp02

0x23fd,	// (0x000208d2) cam4_battery_pane_cp01

0x23fd,	// (0x000208d2) cam4_battery_pane_cp03

0xd7b7,	// (0x0002bc8c) cam4_battery_pane_g1

0xc6bd,	// (0x0002ab92) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002dff5) cam4_battery_pane_g

0xc587,	// (0x0002aa5c) popup_blid_sat_info2_window_t11

0xaca7,	// (0x0002917c) aid_size_touch_mv_arrow_left_ParamLimits

0xacd2,	// (0x000291a7) aid_size_touch_mv_arrow_right_ParamLimits

0xad30,	// (0x00029205) navi_pane_g1_ParamLimits

0xad3c,	// (0x00029211) navi_pane_g2_ParamLimits

0xad6a,	// (0x0002923f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d8ba) navi_pane_g_ParamLimits

0x47ad,	// (0x00022c82) navi_pane_mv_t1_ParamLimits

0x64e8,	// (0x000249bd) grid_imed_effect_pane_ParamLimits

0x31b4,	// (0x00021689) aid_placing_vt_slider_lsc

0xa46d,	// (0x00028942) aid_placing_vt_slider_prt

0xa34f,	// (0x00028824) bg_tb_trans_pane_cp01_ParamLimits

0xc83d,	// (0x0002ad12) popup_image_details_window_g1_ParamLimits

0xc850,	// (0x0002ad25) popup_image_details_window_g2_ParamLimits

0xc865,	// (0x0002ad3a) popup_image_details_window_g3_ParamLimits

0xc865,	// (0x0002ad3a) popup_image_details_window_g3

0xf718,	// (0x0002dbed) popup_image_details_window_g_ParamLimits

0xc879,	// (0x0002ad4e) popup_image_details_window_t1_ParamLimits

0xc88b,	// (0x0002ad60) popup_image_details_window_t2_ParamLimits

0xc8a4,	// (0x0002ad79) popup_image_details_window_t3_ParamLimits

0xc8b8,	// (0x0002ad8d) popup_image_details_window_t4_ParamLimits

0xc8d3,	// (0x0002ada8) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002dbf4) popup_image_details_window_t_ParamLimits

0x7547,	// (0x00025a1c) cl_header_name_pane_ParamLimits

0x7547,	// (0x00025a1c) cl_header_name_pane

0x784e,	// (0x00025d23) cl_header_name_pane_t1_ParamLimits

0x784e,	// (0x00025d23) cl_header_name_pane_t1

0x7865,	// (0x00025d3a) cl_header_name_pane_t2_ParamLimits

0x7865,	// (0x00025d3a) cl_header_name_pane_t2

0x788f,	// (0x00025d64) cl_header_name_pane_t3_ParamLimits

0x788f,	// (0x00025d64) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002dffa) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002dffa) cl_header_name_pane_t

0xadf9,	// (0x000292ce) navi_pane_mv_g2_ParamLimits

0xd15c,	// (0x0002b631) field_vitu2_entry_pane_g1_ParamLimits

0xd168,	// (0x0002b63d) field_vitu2_entry_pane_g2_ParamLimits

0xd174,	// (0x0002b649) field_vitu2_entry_pane_g3_ParamLimits

0xd174,	// (0x0002b649) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002ddf0) field_vitu2_entry_pane_g_ParamLimits

0x2133,	// (0x00020608) cell_vitu2_itu_pane_g1_ParamLimits

0x2143,	// (0x00020618) cell_vitu2_itu_pane_g2_ParamLimits

0x2143,	// (0x00020618) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002ddfc) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002ddfc) cell_vitu2_itu_pane_g

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp05_ParamLimits

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp05

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp03

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp04

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp10_ParamLimits

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp10

0x74e9,	// (0x000259be) bg_vkb2_func_pane_cp08

0x74cf,	// (0x000259a4) bg_vkb2_func_pane_cp06

0x74dd,	// (0x000259b2) bg_vkb2_func_pane_cp07

0xd7d3,	// (0x0002bca8) bg_vkb2_func_pane_cp11_ParamLimits

0xd7d3,	// (0x0002bca8) bg_vkb2_func_pane_cp11

0xd7e8,	// (0x0002bcbd) bg_vkb2_func_pane_cp12_ParamLimits

0xd7e8,	// (0x0002bcbd) bg_vkb2_func_pane_cp12

0x9aa5,	// (0x00027f7a) bg_vkb2_func_pane_cp09

0xd1dd,	// (0x0002b6b2) bg_vkb2_func_pane_g1

0xa62f,	// (0x00028b04) bg_vkb2_func_pane_g2

0xd1e5,	// (0x0002b6ba) bg_vkb2_func_pane_g3

0xd1ed,	// (0x0002b6c2) bg_vkb2_func_pane_g4

0xd41d,	// (0x0002b8f2) bg_vkb2_func_pane_g5

0xd205,	// (0x0002b6da) bg_vkb2_func_pane_g6

0xd20d,	// (0x0002b6e2) bg_vkb2_func_pane_g7

0xd1fd,	// (0x0002b6d2) bg_vkb2_func_pane_g8

0xa60f,	// (0x00028ae4) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002e001) bg_vkb2_func_pane_g

0x779d,	// (0x00025c72) blid2_tripm_pane_g6_ParamLimits

0x779d,	// (0x00025c72) blid2_tripm_pane_g6

0xd000,	// (0x0002b4d5) mp4_progress_pane_g1

0x77f7,	// (0x00025ccc) blid2_tripm_values_pane_ParamLimits

0x77f7,	// (0x00025ccc) blid2_tripm_values_pane

0x78b4,	// (0x00025d89) blid2_tripm_values_pane_t1

0x78c2,	// (0x00025d97) blid2_tripm_values_pane_t2

0x78d0,	// (0x00025da5) blid2_tripm_values_pane_t3

0x78de,	// (0x00025db3) blid2_tripm_values_pane_t4

0x78ec,	// (0x00025dc1) blid2_tripm_values_pane_t5

0x78fa,	// (0x00025dcf) blid2_tripm_values_pane_t6

0x7908,	// (0x00025ddd) blid2_tripm_values_pane_t7

0x7916,	// (0x00025deb) blid2_tripm_values_pane_t8

0x7924,	// (0x00025df9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002e014) blid2_tripm_values_pane_t

0x31f4,	// (0x000216c9) call_video_pane_t1_ParamLimits

0x3215,	// (0x000216ea) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d743) call_video_pane_t_ParamLimits

0x4ccd,	// (0x000231a2) msg_header_pane_g1_ParamLimits

0xafdb,	// (0x000294b0) msg_header_pane_g2_ParamLimits

0xafdb,	// (0x000294b0) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d95d) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d95d) msg_header_pane_g

0xa201,	// (0x000286d6) main_clock2_pane_ParamLimits

0x62f1,	// (0x000247c6) grid_clock2_toolbar_pane_ParamLimits

0x62f1,	// (0x000247c6) grid_clock2_toolbar_pane

0x62f1,	// (0x000247c6) listscroll_clock2_pane_ParamLimits

0x62f1,	// (0x000247c6) listscroll_clock2_pane

0x639b,	// (0x00024870) main_clock2_pane_t3_ParamLimits

0x639b,	// (0x00024870) main_clock2_pane_t3

0x63ad,	// (0x00024882) main_clock2_pane_t4_ParamLimits

0x63ad,	// (0x00024882) main_clock2_pane_t4

0xd8d3,	// (0x0002bda8) cell_clock2_toolbar_pane

0xd8db,	// (0x0002bdb0) cell_clock2_toolbar_pane_cp01

0xd8db,	// (0x0002bdb0) cell_clock2_toolbar_pane_cp02

0xd8e3,	// (0x0002bdb8) cell_clock2_toolbar_pane_cp03

0xd8eb,	// (0x0002bdc0) list_clock2_pane

0xac1d,	// (0x000290f2) scroll_pane_cp10

0xd8f3,	// (0x0002bdc8) list_single_clock2_pane_ParamLimits

0xd8f3,	// (0x0002bdc8) list_single_clock2_pane

0xae60,	// (0x00029335) list_highlight_pane_cp08

0xd900,	// (0x0002bdd5) list_single_clock2_pane_t1

0xd90e,	// (0x0002bde3) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002e027) list_single_clock2_pane_t

0x9aa5,	// (0x00027f7a) bg_button_pane_cp10

0xd91c,	// (0x0002bdf1) cell_clock2_toolbar_pane_g1

0x136b,	// (0x0001f840) aid_main_viewer_pane_g1_ParamLimits

0x136b,	// (0x0001f840) aid_main_viewer_pane_g1

0x1377,	// (0x0001f84c) aid_main_viewer_pane_g2_ParamLimits

0x1377,	// (0x0001f84c) aid_main_viewer_pane_g2

0x4d0c,	// (0x000231e1) aid_main_viewer_pane_g3_ParamLimits

0x4d0c,	// (0x000231e1) aid_main_viewer_pane_g3

0x4d1d,	// (0x000231f2) aid_main_viewer_pane_g4_ParamLimits

0x4d1d,	// (0x000231f2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d96e) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d96e) aid_main_viewer_pane_g

0x13c3,	// (0x0001f898) main_calc_pane_ParamLimits

0x13de,	// (0x0001f8b3) main_dialer2_pane_ParamLimits

0x0efe,	// (0x0001f3d3) main_cam6_pane

0x0efe,	// (0x0001f3d3) main_vid6_pane

0x62fd,	// (0x000247d2) listscroll_gen_pane_cp06_ParamLimits

0x62fd,	// (0x000247d2) listscroll_gen_pane_cp06

0x63bf,	// (0x00024894) main_clock2_pane_t5_ParamLimits

0x63bf,	// (0x00024894) main_clock2_pane_t5

0x640a,	// (0x000248df) aid_call2_pane_cp10_ParamLimits

0x641c,	// (0x000248f1) aid_call_pane_cp10_ParamLimits

0xac9b,	// (0x00029170) popup_clock_analogue_window_cp10_g1_ParamLimits

0xac9b,	// (0x00029170) popup_clock_analogue_window_cp10_g2_ParamLimits

0x642e,	// (0x00024903) popup_clock_analogue_window_cp10_g3_ParamLimits

0x642e,	// (0x00024903) popup_clock_analogue_window_cp10_g4_ParamLimits

0xac9b,	// (0x00029170) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002dca9) popup_clock_analogue_window_cp10_g_ParamLimits

0x6440,	// (0x00024915) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6870,	// (0x00024d45) cell_dialer2_keypad_pane_g2_ParamLimits

0x6870,	// (0x00024d45) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002dd8f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002dd8f) cell_dialer2_keypad_pane_g

0x688c,	// (0x00024d61) cell_dialer2_keypad_pane_t1

0x6c9c,	// (0x00025171) main_cset_text2_pane_ParamLimits

0x6c9c,	// (0x00025171) main_cset_text2_pane

0xd66b,	// (0x0002bb40) area_vitu2_query_pane_g1_ParamLimits

0x746e,	// (0x00025943) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002df44) area_vitu2_query_pane_g_ParamLimits

0xd6ef,	// (0x0002bbc4) area_vitu2_query_pane_t7_ParamLimits

0xd6ef,	// (0x0002bbc4) area_vitu2_query_pane_t7

0x74cf,	// (0x000259a4) bg_button_pane_cp018_ParamLimits

0x74dd,	// (0x000259b2) bg_button_pane_cp021_ParamLimits

0x74e9,	// (0x000259be) bg_button_pane_cp022_ParamLimits

0x74e9,	// (0x000259be) bg_vkb2_func_pane_cp08_ParamLimits

0x74cf,	// (0x000259a4) bg_vkb2_func_pane_cp06_ParamLimits

0x74dd,	// (0x000259b2) bg_vkb2_func_pane_cp07_ParamLimits

0x74fa,	// (0x000259cf) input_focus_pane_cp09_ParamLimits

0x24a7,	// (0x0002097c) cam6_autofocus_pane_ParamLimits

0x24a7,	// (0x0002097c) cam6_autofocus_pane

0x24c9,	// (0x0002099e) cam6_image_uncrop_pane_ParamLimits

0x24c9,	// (0x0002099e) cam6_image_uncrop_pane

0x24f6,	// (0x000209cb) cam6_indi_pane_ParamLimits

0x24f6,	// (0x000209cb) cam6_indi_pane

0x2510,	// (0x000209e5) cam6_mode_pane_ParamLimits

0x2510,	// (0x000209e5) cam6_mode_pane

0x2524,	// (0x000209f9) cam6_timer_pane_ParamLimits

0x2524,	// (0x000209f9) cam6_timer_pane

0x2530,	// (0x00020a05) cam6_zoom_pane_ParamLimits

0x2530,	// (0x00020a05) cam6_zoom_pane

0x7932,	// (0x00025e07) cam6_mode_pane_g1_ParamLimits

0x7932,	// (0x00025e07) cam6_mode_pane_g1

0x793e,	// (0x00025e13) cam6_mode_pane_g2_ParamLimits

0x793e,	// (0x00025e13) cam6_mode_pane_g2

0x794a,	// (0x00025e1f) cam6_mode_pane_g3_ParamLimits

0x794a,	// (0x00025e1f) cam6_mode_pane_g3

0x7956,	// (0x00025e2b) cam6_mode_pane_g4_ParamLimits

0x7956,	// (0x00025e2b) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002e02c) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002e02c) cam6_mode_pane_g

0xd2c1,	// (0x0002b796) bg_tb_trans_pane_cp08_ParamLimits

0xd2c1,	// (0x0002b796) bg_tb_trans_pane_cp08

0xd924,	// (0x0002bdf9) cam6_battery_pane_ParamLimits

0xd924,	// (0x0002bdf9) cam6_battery_pane

0xd93a,	// (0x0002be0f) cam6_indi_pane_g1_ParamLimits

0xd93a,	// (0x0002be0f) cam6_indi_pane_g1

0xd94c,	// (0x0002be21) cam6_indi_pane_g2_ParamLimits

0xd94c,	// (0x0002be21) cam6_indi_pane_g2

0xd95e,	// (0x0002be33) cam6_indi_pane_g3_ParamLimits

0xd95e,	// (0x0002be33) cam6_indi_pane_g3

0x0002,

0x086a,	// (0x0001ed3f) cam6_indi_pane_g_ParamLimits

0x086a,	// (0x0001ed3f) cam6_indi_pane_g

0xd970,	// (0x0002be45) cam6_indi_pane_t1_ParamLimits

0xd970,	// (0x0002be45) cam6_indi_pane_t1

0x69cb,	// (0x00024ea0) cam6_autofocus_pane_g1

0x69c3,	// (0x00024e98) cam6_autofocus_pane_g2

0x69db,	// (0x00024eb0) cam6_autofocus_pane_g3

0x69d3,	// (0x00024ea8) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002e035) cam6_autofocus_pane_g

0xd996,	// (0x0002be6b) cam6_timer_pane_g1

0xd99e,	// (0x0002be73) cam6_timer_pane_t1

0xd9ac,	// (0x0002be81) cam6_zoom_cont_pane

0xd9b4,	// (0x0002be89) cam6_zoom_pane_g1

0xd9bc,	// (0x0002be91) cam6_zoom_pane_g2

0x7962,	// (0x00025e37) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002e03e) cam6_zoom_pane_g

0xc6bd,	// (0x0002ab92) cam6_battery_pane_g1

0xc6bd,	// (0x0002ab92) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002dbb1) cam6_battery_pane_g

0xd9c4,	// (0x0002be99) cam6_zoom_cont_pane_g1

0xd9cd,	// (0x0002bea2) cam6_zoom_cont_pane_g2

0xd9d6,	// (0x0002beab) cam6_zoom_cont_pane_g3

0x0002,

0x0881,	// (0x0001ed56) cam6_zoom_cont_pane_g

0x797f,	// (0x00025e54) cam6_mode_pane_cp_ParamLimits

0x797f,	// (0x00025e54) cam6_mode_pane_cp

0x7993,	// (0x00025e68) cam6_zoom_pane_cp_ParamLimits

0x7993,	// (0x00025e68) cam6_zoom_pane_cp

0x79ab,	// (0x00025e80) vid6_image_uncrop_cif_pane_ParamLimits

0x79ab,	// (0x00025e80) vid6_image_uncrop_cif_pane

0x79d7,	// (0x00025eac) vid6_image_uncrop_nhd_pane_ParamLimits

0x79d7,	// (0x00025eac) vid6_image_uncrop_nhd_pane

0x79f4,	// (0x00025ec9) vid6_image_uncrop_vga_pane_ParamLimits

0x79f4,	// (0x00025ec9) vid6_image_uncrop_vga_pane

0x7a13,	// (0x00025ee8) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a13,	// (0x00025ee8) vid6_image_uncrop_wvga_pane

0x7a30,	// (0x00025f05) vid6_indi_pane_ParamLimits

0x7a30,	// (0x00025f05) vid6_indi_pane

0xd2c1,	// (0x0002b796) bg_tb_trans_pane_cp09_ParamLimits

0xd2c1,	// (0x0002b796) bg_tb_trans_pane_cp09

0xd9ee,	// (0x0002bec3) cam6_battery_pane_cp_ParamLimits

0xd9ee,	// (0x0002bec3) cam6_battery_pane_cp

0xd9fa,	// (0x0002becf) vid6_indi_pane_g1_ParamLimits

0xd9fa,	// (0x0002becf) vid6_indi_pane_g1

0xda0c,	// (0x0002bee1) vid6_indi_pane_g2_ParamLimits

0xda0c,	// (0x0002bee1) vid6_indi_pane_g2

0xda1e,	// (0x0002bef3) vid6_indi_pane_g3_ParamLimits

0xda1e,	// (0x0002bef3) vid6_indi_pane_g3

0xda33,	// (0x0002bf08) vid6_indi_pane_g4_ParamLimits

0xda33,	// (0x0002bf08) vid6_indi_pane_g4

0xda48,	// (0x0002bf1d) vid6_indi_pane_g5_ParamLimits

0xda48,	// (0x0002bf1d) vid6_indi_pane_g5

0x0004,

0x0888,	// (0x0001ed5d) vid6_indi_pane_g_ParamLimits

0x0888,	// (0x0001ed5d) vid6_indi_pane_g

0xda62,	// (0x0002bf37) vid6_indi_pane_t1_ParamLimits

0xda62,	// (0x0002bf37) vid6_indi_pane_t1

0xda78,	// (0x0002bf4d) vid6_indi_pane_t2_ParamLimits

0xda78,	// (0x0002bf4d) vid6_indi_pane_t2

0xdaa0,	// (0x0002bf75) vid6_indi_pane_t3_ParamLimits

0xdaa0,	// (0x0002bf75) vid6_indi_pane_t3

0xdac8,	// (0x0002bf9d) vid6_indi_pane_t4_ParamLimits

0xdac8,	// (0x0002bf9d) vid6_indi_pane_t4

0x0003,

0x0893,	// (0x0001ed68) vid6_indi_pane_t_ParamLimits

0x0893,	// (0x0001ed68) vid6_indi_pane_t

0xdaec,	// (0x0002bfc1) wait_bar_pane_cp08

0x7a53,	// (0x00025f28) main_cset_text2_pane_t1_ParamLimits

0x7a53,	// (0x00025f28) main_cset_text2_pane_t1

0x796a,	// (0x00025e3f) listscroll_gen_pane_cp06_t1_ParamLimits

0x796a,	// (0x00025e3f) listscroll_gen_pane_cp06_t1

0x0efe,	// (0x0001f3d3) main_cam6_set_pane

0x1e1f,	// (0x000202f4) bg_tb_trans_pane_cp06_ParamLimits

0x1e35,	// (0x0002030a) cam4_indicators_pane_g1_ParamLimits

0x1e46,	// (0x0002031b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002ddcc) cam4_indicators_pane_g_ParamLimits

0x1e64,	// (0x00020339) cam4_indicators_pane_t1_ParamLimits

0x13d0,	// (0x0001f8a5) bg_tb_trans_pane_cp07_ParamLimits

0x1f15,	// (0x000203ea) vid4_indicators_pane_g1_ParamLimits

0x1f29,	// (0x000203fe) vid4_indicators_pane_g2_ParamLimits

0x1f3d,	// (0x00020412) vid4_indicators_pane_g3_ParamLimits

0x1f4e,	// (0x00020423) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002ddde) vid4_indicators_pane_g_ParamLimits

0x1f6a,	// (0x0002043f) vid4_indicators_pane_t1_ParamLimits

0x2405,	// (0x000208da) vid4_progress_pane_g1_ParamLimits

0x2415,	// (0x000208ea) vid4_progress_pane_g2_ParamLimits

0x2425,	// (0x000208fa) vid4_progress_pane_g3_ParamLimits

0x2437,	// (0x0002090c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002df8f) vid4_progress_pane_g_ParamLimits

0x2455,	// (0x0002092a) vid4_progress_pane_t1_ParamLimits

0x246b,	// (0x00020940) vid4_progress_pane_t2_ParamLimits

0x2480,	// (0x00020955) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002df9a) vid4_progress_pane_t_ParamLimits

0x2496,	// (0x0002096b) wait_bar_pane_cp07_ParamLimits

0x7a8d,	// (0x00025f62) main_cam6_set_pane_g2_ParamLimits

0x7a8d,	// (0x00025f62) main_cam6_set_pane_g2

0x7a99,	// (0x00025f6e) main_cset6_listscroll_pane_ParamLimits

0x7a99,	// (0x00025f6e) main_cset6_listscroll_pane

0x7ac4,	// (0x00025f99) main_cset6_slider_pane_ParamLimits

0x7ac4,	// (0x00025f99) main_cset6_slider_pane

0x7ad0,	// (0x00025fa5) main_cset6_text2_pane_ParamLimits

0x7ad0,	// (0x00025fa5) main_cset6_text2_pane

0xdafb,	// (0x0002bfd0) main_cset6_text_pane

0xdb03,	// (0x0002bfd8) main_cset_list_pane_copy1_ParamLimits

0xdb03,	// (0x0002bfd8) main_cset_list_pane_copy1

0xdb13,	// (0x0002bfe8) scroll_pane_cp028_copy1

0x7ae3,	// (0x00025fb8) cset_list_set_pane_copy1

0x7afc,	// (0x00025fd1) aid_position_infowindow_above_copy1

0x7b04,	// (0x00025fd9) aid_position_infowindow_below_copy1

0x7b0c,	// (0x00025fe1) cset_list_set_pane_g1_copy1

0x6f9d,	// (0x00025472) cset_list_set_pane_g3_copy1_ParamLimits

0x6f9d,	// (0x00025472) cset_list_set_pane_g3_copy1

0x6fac,	// (0x00025481) cset_list_set_pane_t1_copy1_ParamLimits

0x6fac,	// (0x00025481) cset_list_set_pane_t1_copy1

0xa34f,	// (0x00028824) list_highlight_pane_cp021_copy1_ParamLimits

0xa34f,	// (0x00028824) list_highlight_pane_cp021_copy1

0xdb1c,	// (0x0002bff1) cset6_slider_pane_ParamLimits

0xdb1c,	// (0x0002bff1) cset6_slider_pane

0xdb48,	// (0x0002c01d) main_cset6_slider_pane_g1_ParamLimits

0xdb48,	// (0x0002c01d) main_cset6_slider_pane_g1

0x7b14,	// (0x00025fe9) main_cset6_slider_pane_g2_ParamLimits

0x7b14,	// (0x00025fe9) main_cset6_slider_pane_g2

0xdb70,	// (0x0002c045) main_cset6_slider_pane_g3_ParamLimits

0xdb70,	// (0x0002c045) main_cset6_slider_pane_g3

0x7b3c,	// (0x00026011) main_cset6_slider_pane_g4_ParamLimits

0x7b3c,	// (0x00026011) main_cset6_slider_pane_g4

0x7b48,	// (0x0002601d) main_cset6_slider_pane_g5_ParamLimits

0x7b48,	// (0x0002601d) main_cset6_slider_pane_g5

0xd328,	// (0x0002b7fd) main_cset6_slider_pane_g7_ParamLimits

0xd328,	// (0x0002b7fd) main_cset6_slider_pane_g7

0xd334,	// (0x0002b809) main_cset6_slider_pane_g8_ParamLimits

0xd334,	// (0x0002b809) main_cset6_slider_pane_g8

0x7b56,	// (0x0002602b) main_cset6_slider_pane_g9_ParamLimits

0x7b56,	// (0x0002602b) main_cset6_slider_pane_g9

0x7b62,	// (0x00026037) main_cset6_slider_pane_g10_ParamLimits

0x7b62,	// (0x00026037) main_cset6_slider_pane_g10

0x7b6e,	// (0x00026043) main_cset6_slider_pane_g11_ParamLimits

0x7b6e,	// (0x00026043) main_cset6_slider_pane_g11

0x7b7a,	// (0x0002604f) main_cset6_slider_pane_g12_ParamLimits

0x7b7a,	// (0x0002604f) main_cset6_slider_pane_g12

0x7b86,	// (0x0002605b) main_cset6_slider_pane_g13_ParamLimits

0x7b86,	// (0x0002605b) main_cset6_slider_pane_g13

0x7b92,	// (0x00026067) main_cset6_slider_pane_g14_ParamLimits

0x7b92,	// (0x00026067) main_cset6_slider_pane_g14

0x7b9e,	// (0x00026073) main_cset6_slider_pane_g15_ParamLimits

0x7b9e,	// (0x00026073) main_cset6_slider_pane_g15

0x7bb6,	// (0x0002608b) main_cset6_slider_pane_g16_ParamLimits

0x7bb6,	// (0x0002608b) main_cset6_slider_pane_g16

0x7bc4,	// (0x00026099) main_cset6_slider_pane_g17_ParamLimits

0x7bc4,	// (0x00026099) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002e045) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002e045) main_cset6_slider_pane_g

0xdb7c,	// (0x0002c051) main_cset6_slider_pane_t1_ParamLimits

0xdb7c,	// (0x0002c051) main_cset6_slider_pane_t1

0x7bea,	// (0x000260bf) main_cset6_slider_pane_t2_ParamLimits

0x7bea,	// (0x000260bf) main_cset6_slider_pane_t2

0x7c15,	// (0x000260ea) main_cset6_slider_pane_t3_ParamLimits

0x7c15,	// (0x000260ea) main_cset6_slider_pane_t3

0x7c40,	// (0x00026115) main_cset6_slider_pane_t4_ParamLimits

0x7c40,	// (0x00026115) main_cset6_slider_pane_t4

0x7c6b,	// (0x00026140) main_cset6_slider_pane_t5_ParamLimits

0x7c6b,	// (0x00026140) main_cset6_slider_pane_t5

0xdbbd,	// (0x0002c092) main_cset6_slider_pane_t7_ParamLimits

0xdbbd,	// (0x0002c092) main_cset6_slider_pane_t7

0x7c98,	// (0x0002616d) main_cset6_slider_pane_t8_ParamLimits

0x7c98,	// (0x0002616d) main_cset6_slider_pane_t8

0x7cbc,	// (0x00026191) main_cset6_slider_pane_t9_ParamLimits

0x7cbc,	// (0x00026191) main_cset6_slider_pane_t9

0x7ce0,	// (0x000261b5) main_cset6_slider_pane_t10_ParamLimits

0x7ce0,	// (0x000261b5) main_cset6_slider_pane_t10

0x7d04,	// (0x000261d9) main_cset6_slider_pane_t11_ParamLimits

0x7d04,	// (0x000261d9) main_cset6_slider_pane_t11

0xdbf3,	// (0x0002c0c8) main_cset6_slider_pane_t14_ParamLimits

0xdbf3,	// (0x0002c0c8) main_cset6_slider_pane_t14

0xdc2c,	// (0x0002c101) main_cset6_slider_pane_t15_ParamLimits

0xdc2c,	// (0x0002c101) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002e06a) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002e06a) main_cset6_slider_pane_t

0xd532,	// (0x0002ba07) cset_slider_pane_g1_copy1

0xd53b,	// (0x0002ba10) cset_slider_pane_g2_copy1

0xd544,	// (0x0002ba19) cset_slider_pane_g3_copy1

0x9aa5,	// (0x00027f7a) bg_popup_sub_pane_cp011_copy1

0xdc65,	// (0x0002c13a) main_cset_text_pane_g1_copy1

0xd46c,	// (0x0002b941) main_cset_text_pane_t1_copy1

0xd47a,	// (0x0002b94f) main_cset_text_pane_t2_copy1

0xd488,	// (0x0002b95d) main_cset_text_pane_t3_copy1

0xd496,	// (0x0002b96b) main_cset_text_pane_t4_copy1

0xd4a4,	// (0x0002b979) main_cset_text_pane_t5_copy1

0xdc6d,	// (0x0002c142) main_cset_text_pane_t6_copy1

0xdc7b,	// (0x0002c150) main_cset_text_pane_t7_copy1

0x7df9,	// (0x000262ce) main_cset_text2_pane_t1_copy1

0x13d0,	// (0x0001f8a5) main_ncimui_pane

0x142f,	// (0x0001f904) popup_query_ncimui_window_ParamLimits

0x142f,	// (0x0001f904) popup_query_ncimui_window

0xc9be,	// (0x0002ae93) field_cale_ev2_pane_g4_ParamLimits

0xc9be,	// (0x0002ae93) field_cale_ev2_pane_g4

0x6810,	// (0x00024ce5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6810,	// (0x00024ce5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002dd6a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002dd6a) cell_video_dialer_keypad_pane_g

0x6828,	// (0x00024cfd) cell_video_dialer_keypad_pane_t1

0x9aa5,	// (0x00027f7a) bg_popup_window_pane_cp012

0xaac4,	// (0x00028f99) heading_pane_cp06

0xdca7,	// (0x0002c17c) ncim_query_content_pane

0x9aa5,	// (0x00027f7a) bg_popup_heading_pane_cp01

0xdcaf,	// (0x0002c184) ncim_heading_pane_t1

0xdcbd,	// (0x0002c192) ncim_indicator_popup_pane

0xdccf,	// (0x0002c1a4) ncim_query_button_pane

0xdce3,	// (0x0002c1b8) ncim_query_content_pane_t1

0xdcf5,	// (0x0002c1ca) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002e0ae) ncim_query_content_pane_t

0xdd2f,	// (0x0002c204) ncim_query_list_pane

0xdd41,	// (0x0002c216) ncim_query_popup_pane

0xdcbd,	// (0x0002c192) ncim_indicator_popup_pane_ParamLimits

0x7f53,	// (0x00026428) ncim_query_content_pane_g1_ParamLimits

0x7f53,	// (0x00026428) ncim_query_content_pane_g1

0xdce3,	// (0x0002c1b8) ncim_query_content_pane_t1_ParamLimits

0xdcf5,	// (0x0002c1ca) ncim_query_content_pane_t2_ParamLimits

0x7f5f,	// (0x00026434) ncim_query_content_pane_t3_ParamLimits

0x7f5f,	// (0x00026434) ncim_query_content_pane_t3

0x7f7c,	// (0x00026451) ncim_query_content_pane_t4_ParamLimits

0x7f7c,	// (0x00026451) ncim_query_content_pane_t4

0x7f99,	// (0x0002646e) ncim_query_content_pane_t5_ParamLimits

0x7f99,	// (0x0002646e) ncim_query_content_pane_t5

0xdd07,	// (0x0002c1dc) ncim_query_content_pane_t6_ParamLimits

0xdd07,	// (0x0002c1dc) ncim_query_content_pane_t6

0xfbd9,	// (0x0002e0ae) ncim_query_content_pane_t_ParamLimits

0xdd2f,	// (0x0002c204) ncim_query_list_pane_ParamLimits

0xdd41,	// (0x0002c216) ncim_query_popup_pane_ParamLimits

0xdd55,	// (0x0002c22a) wait_bar_pane_cp04

0x9aa5,	// (0x00027f7a) input_focus_pane_cp011

0xdd5d,	// (0x0002c232) ncim_query_popup_pane_t1

0xdd6b,	// (0x0002c240) ncim_list_query_list_pane_ParamLimits

0xdd6b,	// (0x0002c240) ncim_list_query_list_pane

0x9aa5,	// (0x00027f7a) bg_button_pane_cp027

0xdd7e,	// (0x0002c253) ncim_query_button_pane_g1

0x9aa5,	// (0x00027f7a) list_highlight_pane_cp012

0xdd88,	// (0x0002c25d) ncim_list_query_list_pane_g1

0xdd90,	// (0x0002c265) ncim_list_query_list_pane_t1

0x1e55,	// (0x0002032a) cam4_indicators_pane_g3_ParamLimits

0x1e55,	// (0x0002032a) cam4_indicators_pane_g3

0x1f5a,	// (0x0002042f) vid4_indicators_pane_g5_ParamLimits

0x1f5a,	// (0x0002042f) vid4_indicators_pane_g5

0x2446,	// (0x0002091b) vid4_progress_pane_g5_ParamLimits

0x2446,	// (0x0002091b) vid4_progress_pane_g5

0x7e3f,	// (0x00026314) main_ncimui_pane_g1

0x7ea7,	// (0x0002637c) ncimui_group_query_pane_ParamLimits

0x7ea7,	// (0x0002637c) ncimui_group_query_pane

0x7eef,	// (0x000263c4) ncimui_list_pane_ParamLimits

0x7eef,	// (0x000263c4) ncimui_list_pane

0x7f16,	// (0x000263eb) ncimui_text_pane_ParamLimits

0x7f16,	// (0x000263eb) ncimui_text_pane

0x7fb6,	// (0x0002648b) ncimui_text_pane_t1_ParamLimits

0x7fb6,	// (0x0002648b) ncimui_text_pane_t1

0xdd9e,	// (0x0002c273) ncimui_list_single_graphic_pane_ParamLimits

0xdd9e,	// (0x0002c273) ncimui_list_single_graphic_pane

0x7fd5,	// (0x000264aa) ncimui_query_pane_ParamLimits

0x7fd5,	// (0x000264aa) ncimui_query_pane

0x9aa5,	// (0x00027f7a) list_highlight_pane_cp013

0xddae,	// (0x0002c283) ncim_list_query_list_pane_t1_copy1

0xdd88,	// (0x0002c25d) ncim_list_single_graphic_pane_g1

0xddbc,	// (0x0002c291) ncim_query_button_pane_cp01

0xddc8,	// (0x0002c29d) ncim_query_entry_pane_ParamLimits

0xddc8,	// (0x0002c29d) ncim_query_entry_pane

0xdddb,	// (0x0002c2b0) ncimui_query_pane_g1

0xdde7,	// (0x0002c2bc) ncimui_query_pane_t1_ParamLimits

0xdde7,	// (0x0002c2bc) ncimui_query_pane_t1

0xa34f,	// (0x00028824) input_focus_pane_cp012

0xde00,	// (0x0002c2d5) ncim_query_entry_pane_t1

0xa201,	// (0x000286d6) main_im_pane_ParamLimits

0x13d0,	// (0x0001f8a5) main_mobtv_pane_ParamLimits

0x13d0,	// (0x0001f8a5) main_mobtv_pane

0x7bd2,	// (0x000260a7) main_cset6_slider_pane_g18_ParamLimits

0x7bd2,	// (0x000260a7) main_cset6_slider_pane_g18

0x7bde,	// (0x000260b3) main_cset6_slider_pane_g19_ParamLimits

0x7bde,	// (0x000260b3) main_cset6_slider_pane_g19

0xd174,	// (0x0002b649) bg_main_mobtv_pane_ParamLimits

0xd174,	// (0x0002b649) bg_main_mobtv_pane

0x7fe8,	// (0x000264bd) main_mobtv_info_pane

0x7ff3,	// (0x000264c8) main_mobtv_loading_pane_ParamLimits

0x7ff3,	// (0x000264c8) main_mobtv_loading_pane

0xde12,	// (0x0002c2e7) main_mobtv_pg_channel_list_pane

0xde1c,	// (0x0002c2f1) main_mobtv_pg_hdr_pane

0x8000,	// (0x000264d5) main_mobtv_programe_curr_pane_ParamLimits

0x8000,	// (0x000264d5) main_mobtv_programe_curr_pane

0x800d,	// (0x000264e2) main_mobtv_programe_next_pane_ParamLimits

0x800d,	// (0x000264e2) main_mobtv_programe_next_pane

0xde25,	// (0x0002c2fa) popup_mobtv_noti_window

0xc6bd,	// (0x0002ab92) main_tv_pg_hdr_pane_g1

0xde2d,	// (0x0002c302) main_tv_pg_hdr_pane_g2

0xde35,	// (0x0002c30a) main_tv_pg_hdr_pane_g3

0xde3d,	// (0x0002c312) main_tv_pg_hdr_pane_g4

0xde45,	// (0x0002c31a) main_tv_pg_hdr_pane_g5

0xde4f,	// (0x0002c324) main_tv_pg_hdr_pane_g6

0xde59,	// (0x0002c32e) main_tv_pg_hdr_pane_g7

0xde63,	// (0x0002c338) main_tv_pg_hdr_pane_g8

0xde6d,	// (0x0002c342) main_tv_pg_hdr_pane_g9

0xde77,	// (0x0002c34c) main_tv_pg_hdr_pane_g10

0xde81,	// (0x0002c356) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002e0bb) main_tv_pg_hdr_pane_g

0xde8b,	// (0x0002c360) main_tv_pg_hdr_pane_t1

0xde99,	// (0x0002c36e) main_tv_pg_hdr_pane_t2

0xdea7,	// (0x0002c37c) main_tv_pg_hdr_pane_t3

0xdeb7,	// (0x0002c38c) main_tv_pg_hdr_pane_t4

0xdec7,	// (0x0002c39c) main_tv_pg_hdr_pane_t5

0x0004,

0x0929,	// (0x0001edfe) main_tv_pg_hdr_pane_t

0xded7,	// (0x0002c3ac) single_mobtv_pg_channel_pane_ParamLimits

0xded7,	// (0x0002c3ac) single_mobtv_pg_channel_pane

0xdee9,	// (0x0002c3be) single_mobtv_pg_channel_table_pane

0xdef2,	// (0x0002c3c7) single_mobtv_pg_channel_thumb_pane

0xdefb,	// (0x0002c3d0) single_tv_pg_channel_pane_g1

0xdf04,	// (0x0002c3d9) single_tv_pg_channel_pane_g2

0x0001,

0x0934,	// (0x0001ee09) single_tv_pg_channel_pane_g

0xc91d,	// (0x0002adf2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc91d,	// (0x0002adf2) bg_single_mobtv_pg_channel_thumb_pane

0xdf0d,	// (0x0002c3e2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf0d,	// (0x0002c3e2) single_mobtv_pg_channel_thumb_pane_g1

0xdf1b,	// (0x0002c3f0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf1b,	// (0x0002c3f0) single_mobtv_pg_channel_thumb_pane_g2

0xdf27,	// (0x0002c3fc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf27,	// (0x0002c3fc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0939,	// (0x0001ee0e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0939,	// (0x0001ee0e) single_mobtv_pg_channel_thumb_pane_g

0xdf33,	// (0x0002c408) single_mobtv_pg_channel_thumb_pane_t1

0xdf41,	// (0x0002c416) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0940,	// (0x0001ee15) single_mobtv_pg_channel_thumb_pane_t

0xc6bd,	// (0x0002ab92) bg_single_mobtv_pg_channel_table_pane_g1

0xc6bd,	// (0x0002ab92) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002dbb1) bg_single_mobtv_pg_channel_table_pane_g

0xdf4f,	// (0x0002c424) single_mobtv_pg_channel_table_pane_t1

0xdf5d,	// (0x0002c432) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0945,	// (0x0001ee1a) single_mobtv_pg_channel_table_pane_t

0x8022,	// (0x000264f7) main_mobtv_info_pane_g1_ParamLimits

0x8022,	// (0x000264f7) main_mobtv_info_pane_g1

0x803e,	// (0x00026513) main_mobtv_info_pane_t1_ParamLimits

0x803e,	// (0x00026513) main_mobtv_info_pane_t1

0x80b6,	// (0x0002658b) main_mobtv_info_pane_t2_ParamLimits

0x80b6,	// (0x0002658b) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002e0d7) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002e0d7) main_mobtv_info_pane_t

0x8145,	// (0x0002661a) wait_bar_pane_cp05

0x8157,	// (0x0002662c) main_mobtv_loading_pane_g1_ParamLimits

0x8157,	// (0x0002662c) main_mobtv_loading_pane_g1

0x8165,	// (0x0002663a) main_mobtv_loading_pane_g2_ParamLimits

0x8165,	// (0x0002663a) main_mobtv_loading_pane_g2

0x8171,	// (0x00026646) main_mobtv_loading_pane_g3_ParamLimits

0x8171,	// (0x00026646) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002e0de) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002e0de) main_mobtv_loading_pane_g

0xdf6b,	// (0x0002c440) main_mobtv_loading_pane_t1_ParamLimits

0xdf6b,	// (0x0002c440) main_mobtv_loading_pane_t1

0xdf83,	// (0x0002c458) main_mobtv_loading_pane_t2_ParamLimits

0xdf83,	// (0x0002c458) main_mobtv_loading_pane_t2

0x0001,

0x095d,	// (0x0001ee32) main_mobtv_loading_pane_t_ParamLimits

0x095d,	// (0x0001ee32) main_mobtv_loading_pane_t

0x817f,	// (0x00026654) wait_bar_pane_cp06_ParamLimits

0x817f,	// (0x00026654) wait_bar_pane_cp06

0xdfa7,	// (0x0002c47c) main_mobtv_programe_curr_pane_t1

0xdfb5,	// (0x0002c48a) main_mobtv_programe_curr_pane_t2

0x0001,

0x0962,	// (0x0001ee37) main_mobtv_programe_curr_pane_t

0xdfc3,	// (0x0002c498) main_mobtv_programe_next_pane_t1

0xdfd1,	// (0x0002c4a6) main_mobtv_programe_next_pane_t2

0xdfdf,	// (0x0002c4b4) main_mobtv_programe_next_pane_t3

0x0002,

0x0967,	// (0x0001ee3c) main_mobtv_programe_next_pane_t

0x9aa5,	// (0x00027f7a) bg_popup_mobtv_noti_window_pane

0xdfed,	// (0x0002c4c2) popup_mobtv_noti_window_g1

0xdff5,	// (0x0002c4ca) popup_mobtv_noti_window_t1

0xe003,	// (0x0002c4d8) popup_mobtv_noti_window_t2

0x0001,

0x096e,	// (0x0001ee43) popup_mobtv_noti_window_t

0xc6bd,	// (0x0002ab92) bg_popup_mobtv_noti_window_pane_g1

0x0efe,	// (0x0001f3d3) sc_clock_pane

0x0efe,	// (0x0001f3d3) main_fs_bigclock_pane

0x77e5,	// (0x00025cba) blid2_tripm_pane_t4_ParamLimits

0x77e5,	// (0x00025cba) blid2_tripm_pane_t4

0x818b,	// (0x00026660) sc_clock_pane_g1_ParamLimits

0x818b,	// (0x00026660) sc_clock_pane_g1

0x8199,	// (0x0002666e) sc_clock_pane_t1_ParamLimits

0x8199,	// (0x0002666e) sc_clock_pane_t1

0x81ac,	// (0x00026681) sc_clock_pane_t2_ParamLimits

0x81ac,	// (0x00026681) sc_clock_pane_t2

0x81be,	// (0x00026693) sc_clock_pane_t3_ParamLimits

0x81be,	// (0x00026693) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002e0e5) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002e0e5) sc_clock_pane_t

0x908e,	// (0x00027563) main_fs_bigclock_indicator_pane_ParamLimits

0x908e,	// (0x00027563) main_fs_bigclock_indicator_pane

0x8247,	// (0x0002671c) main_fs_bigclock_pane_g1_ParamLimits

0x8247,	// (0x0002671c) main_fs_bigclock_pane_g1

0x909a,	// (0x0002756f) main_fs_bigclock_pane_t1_ParamLimits

0x909a,	// (0x0002756f) main_fs_bigclock_pane_t1

0x90ac,	// (0x00027581) main_fs_bigclock_pane_t2_ParamLimits

0x90ac,	// (0x00027581) main_fs_bigclock_pane_t2

0x90be,	// (0x00027593) main_fs_bigclock_pane_t3_ParamLimits

0x90be,	// (0x00027593) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0002e25f) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0002e25f) main_fs_bigclock_pane_t

0xec51,	// (0x0002d126) main_fs_bigclock_indicator_pane_g1

0xdcd7,	// (0x0002c1ac) ncim_query_content_pane_g2_ParamLimits

0xdcd7,	// (0x0002c1ac) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002e0a9) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002e0a9) ncim_query_content_pane_g

0x81d2,	// (0x000266a7) sc_clock_pane_t4_ParamLimits

0x81d2,	// (0x000266a7) sc_clock_pane_t4

0x13d0,	// (0x0001f8a5) main_radioblah_pane

0xd0e7,	// (0x0002b5bc) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0e7,	// (0x0002b5bc) cell_call4_button_pane_t1_copy1

0x7e59,	// (0x0002632e) main_ncimui_pane_t1_ParamLimits

0x7e59,	// (0x0002632e) main_ncimui_pane_t1

0x7e73,	// (0x00026348) main_ncimui_pane_t2_ParamLimits

0x7e73,	// (0x00026348) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002e0a2) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002e0a2) main_ncimui_pane_t

0xe148,	// (0x0002c61d) main_radioblah_anim_pane_ParamLimits

0xe148,	// (0x0002c61d) main_radioblah_anim_pane

0xe159,	// (0x0002c62e) main_radioblah_info_pane_ParamLimits

0xe159,	// (0x0002c62e) main_radioblah_info_pane

0xe16d,	// (0x0002c642) main_radioblah_pane_t1_ParamLimits

0xe16d,	// (0x0002c642) main_radioblah_pane_t1

0xe189,	// (0x0002c65e) main_radioblah_pane_t2_ParamLimits

0xe189,	// (0x0002c65e) main_radioblah_pane_t2

0x0003,

0x0994,	// (0x0001ee69) main_radioblah_pane_t_ParamLimits

0x0994,	// (0x0001ee69) main_radioblah_pane_t

0x8299,	// (0x0002676e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8299,	// (0x0002676e) main_radioblah_rocker_ctrl_pane

0xe1d1,	// (0x0002c6a6) main_radioblah_info_pane_t1_ParamLimits

0xe1d1,	// (0x0002c6a6) main_radioblah_info_pane_t1

0x82de,	// (0x000267b3) main_radioblah_info_pane_t2_ParamLimits

0x82de,	// (0x000267b3) main_radioblah_info_pane_t2

0x0003,

0xfc1b,	// (0x0002e0f0) main_radioblah_info_pane_t_ParamLimits

0xfc1b,	// (0x0002e0f0) main_radioblah_info_pane_t

0xc6bd,	// (0x0002ab92) main_radioblah_rocker_ctrl_pane_g1

0x838e,	// (0x00026863) main_radioblah_rocker_ctrl_pane_g2

0x8396,	// (0x0002686b) main_radioblah_rocker_ctrl_pane_g3

0x839e,	// (0x00026873) main_radioblah_rocker_ctrl_pane_g4

0x83a6,	// (0x0002687b) main_radioblah_rocker_ctrl_pane_g5

0x83ae,	// (0x00026883) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc24,	// (0x0002e0f9) main_radioblah_rocker_ctrl_pane_g

0x7df9,	// (0x000262ce) main_cset_text2_pane_t1_copy1_ParamLimits

0x1d99,	// (0x0002026e) cam4_image_uncrop_qvga_pane

0x1eca,	// (0x0002039f) vid4_image_uncrop_qcif_pane

0x24e8,	// (0x000209bd) cam6_image_uncrop_qvga_pane_ParamLimits

0x24e8,	// (0x000209bd) cam6_image_uncrop_qvga_pane

0xd9de,	// (0x0002beb3) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9de,	// (0x0002beb3) vid6_image_uncrop_qcif_pane

0x9aa5,	// (0x00027f7a) bg_popup_preview_window_pane_cp03

0xdc89,	// (0x0002c15e) list_cset_text2_pane

0xdc91,	// (0x0002c166) main_cset6_text2_pane_g1

0xdc99,	// (0x0002c16e) main_cset6_text2_pane_t1

0x83b6,	// (0x0002688b) list_cset_text2_pane_t1_ParamLimits

0x83b6,	// (0x0002688b) list_cset_text2_pane_t1

0x13d0,	// (0x0001f8a5) main_radioblah_pane_ParamLimits

0x8131,	// (0x00026606) main_mobtv_info_pane_t3_ParamLimits

0x8131,	// (0x00026606) main_mobtv_info_pane_t3

0x8287,	// (0x0002675c) main_radioblah_pane_g1

0x82b2,	// (0x00026787) main_radioblah_info_pane_g1

0x8333,	// (0x00026808) main_radioblah_info_pane_t3_ParamLimits

0x8333,	// (0x00026808) main_radioblah_info_pane_t3

0x42b2,	// (0x00022787) highlight_cell_cale_month_pane_ParamLimits

0x42b2,	// (0x00022787) highlight_cell_cale_month_pane

0x0efe,	// (0x0001f3d3) main_phob_fisheye_pane

0xca6d,	// (0x0002af42) scroll_pane_cp0031_ParamLimits

0xca6d,	// (0x0002af42) scroll_pane_cp0031

0xdaec,	// (0x0002bfc1) wait_bar_pane_cp08_ParamLimits

0x7ae3,	// (0x00025fb8) cset_list_set_pane_copy1_ParamLimits

0xe20b,	// (0x0002c6e0) highlight_cell_cale_month_pane_g1

0x83dd,	// (0x000268b2) highlight_cell_cale_month_pane_t1

0xd75b,	// (0x0002bc30) list_gen_pane_cp01

0xd313,	// (0x0002b7e8) scroll_pane_01

0x83eb,	// (0x000268c0) list_single_double_fisheye_pane

0x83f4,	// (0x000268c9) list_double_fisheye_pane_g1_ParamLimits

0x83f4,	// (0x000268c9) list_double_fisheye_pane_g1

0x8400,	// (0x000268d5) list_double_fisheye_pane_g2_ParamLimits

0x8400,	// (0x000268d5) list_double_fisheye_pane_g2

0x8414,	// (0x000268e9) list_double_fisheye_pane_g3_ParamLimits

0x8414,	// (0x000268e9) list_double_fisheye_pane_g3

0x0004,

0xfc31,	// (0x0002e106) list_double_fisheye_pane_g_ParamLimits

0xfc31,	// (0x0002e106) list_double_fisheye_pane_g

0x843d,	// (0x00026912) list_double_fisheye_pane_t1_ParamLimits

0x843d,	// (0x00026912) list_double_fisheye_pane_t1

0x8458,	// (0x0002692d) list_double_fisheye_pane_t2_ParamLimits

0x8458,	// (0x0002692d) list_double_fisheye_pane_t2

0x0001,

0xfc3c,	// (0x0002e111) list_double_fisheye_pane_t_ParamLimits

0xfc3c,	// (0x0002e111) list_double_fisheye_pane_t

0x0efe,	// (0x0001f3d3) main_call5_pane

0x81f8,	// (0x000266cd) sc_swipe_pane_ParamLimits

0x81f8,	// (0x000266cd) sc_swipe_pane

0x8486,	// (0x0002695b) call5_image_pane_ParamLimits

0x8486,	// (0x0002695b) call5_image_pane

0x8496,	// (0x0002696b) call5_swipe_1_pane_ParamLimits

0x8496,	// (0x0002696b) call5_swipe_1_pane

0x84a2,	// (0x00026977) call5_swipe_2_pane_ParamLimits

0x84a2,	// (0x00026977) call5_swipe_2_pane

0x84bc,	// (0x00026991) popup_call5_audio_first_window_ParamLimits

0x84bc,	// (0x00026991) popup_call5_audio_first_window

0xc91d,	// (0x0002adf2) call5_swipe_1_pane_g1_ParamLimits

0xc91d,	// (0x0002adf2) call5_swipe_1_pane_g1

0xe213,	// (0x0002c6e8) call5_swipe_1_pane_g2_ParamLimits

0xe213,	// (0x0002c6e8) call5_swipe_1_pane_g2

0x0001,

0xfc41,	// (0x0002e116) call5_swipe_1_pane_g_ParamLimits

0xfc41,	// (0x0002e116) call5_swipe_1_pane_g

0xe21f,	// (0x0002c6f4) call5_swipe_1_pane_t1_ParamLimits

0xe21f,	// (0x0002c6f4) call5_swipe_1_pane_t1

0xc91d,	// (0x0002adf2) call5_swipe_2_pane_g1_ParamLimits

0xc91d,	// (0x0002adf2) call5_swipe_2_pane_g1

0xe234,	// (0x0002c709) call5_swipe_2_pane_g2_ParamLimits

0xe234,	// (0x0002c709) call5_swipe_2_pane_g2

0x0001,

0xfc46,	// (0x0002e11b) call5_swipe_2_pane_g_ParamLimits

0xfc46,	// (0x0002e11b) call5_swipe_2_pane_g

0xe240,	// (0x0002c715) call5_swipe_2_pane_t1_ParamLimits

0xe240,	// (0x0002c715) call5_swipe_2_pane_t1

0xe255,	// (0x0002c72a) sc_swipe_pane_g1_ParamLimits

0xe255,	// (0x0002c72a) sc_swipe_pane_g1

0xe262,	// (0x0002c737) sc_swipe_pane_g2_ParamLimits

0xe262,	// (0x0002c737) sc_swipe_pane_g2

0x0001,

0x09cd,	// (0x0001eea2) sc_swipe_pane_g_ParamLimits

0x09cd,	// (0x0001eea2) sc_swipe_pane_g

0xe26e,	// (0x0002c743) sc_swipe_pane_t1_ParamLimits

0xe26e,	// (0x0002c743) sc_swipe_pane_t1

0x0efe,	// (0x0001f3d3) main_cmail_launcher_pane

0x84ca,	// (0x0002699f) aid_size_cell_cmail_l_ParamLimits

0x84ca,	// (0x0002699f) aid_size_cell_cmail_l

0x84da,	// (0x000269af) grid_cmail_l_pane_ParamLimits

0x84da,	// (0x000269af) grid_cmail_l_pane

0x84ea,	// (0x000269bf) cell_cmail_l_pane_ParamLimits

0x84ea,	// (0x000269bf) cell_cmail_l_pane

0x84fe,	// (0x000269d3) cell_cmail_l_pane_g1_ParamLimits

0x84fe,	// (0x000269d3) cell_cmail_l_pane_g1

0x850f,	// (0x000269e4) cell_cmail_l_pane_t1_ParamLimits

0x850f,	// (0x000269e4) cell_cmail_l_pane_t1

0xe283,	// (0x0002c758) cell_cmail_l_pane_t2_ParamLimits

0xe283,	// (0x0002c758) cell_cmail_l_pane_t2

0x0001,

0xfc4b,	// (0x0002e120) cell_cmail_l_pane_t_ParamLimits

0xfc4b,	// (0x0002e120) cell_cmail_l_pane_t

0xa34f,	// (0x00028824) grid_highlight_pane_cp018_ParamLimits

0xa34f,	// (0x00028824) grid_highlight_pane_cp018

0x0d60,	// (0x0001f235) main2_pane_ParamLimits

0x0d60,	// (0x0001f235) main2_pane

0xa2ac,	// (0x00028781) popup_sp_fs_action_menu_bg_pane_g1

0xa2b4,	// (0x00028789) popup_sp_fs_action_menu_bg_pane_g2

0xa2bc,	// (0x00028791) popup_sp_fs_action_menu_bg_pane_g3

0xa2c4,	// (0x00028799) popup_sp_fs_action_menu_bg_pane_g4

0xa2cc,	// (0x000287a1) popup_sp_fs_action_menu_bg_pane_g5

0xa2d4,	// (0x000287a9) popup_sp_fs_action_menu_bg_pane_g6

0xa2dc,	// (0x000287b1) popup_sp_fs_action_menu_bg_pane_g7

0xa2e4,	// (0x000287b9) popup_sp_fs_action_menu_bg_pane_g8

0xa2ec,	// (0x000287c1) popup_sp_fs_action_menu_bg_pane_g9

0xa2f4,	// (0x000287c9) popup_sp_fs_action_menu_bg_pane_g10

0xa2f4,	// (0x000287c9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0002d65b) popup_sp_fs_action_menu_bg_pane_g

0x3030,	// (0x00021505) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t3_g3_g1

0x303c,	// (0x00021511) list_medium_line_x2_t3_g3_g2_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x2_t3_g3_g2

0x3048,	// (0x0002151d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d70d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d70d) list_medium_line_x2_t3_g3_g

0x3054,	// (0x00021529) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3054,	// (0x00021529) list_medium_line_x2_t3_g3_t1

0x3069,	// (0x0002153e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3069,	// (0x0002153e) list_medium_line_x2_t3_g3_t2

0x307b,	// (0x00021550) list_medium_line_x2_t3_g3_t3_ParamLimits

0x307b,	// (0x00021550) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d714) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d714) list_medium_line_x2_t3_g3_t

0x3030,	// (0x00021505) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t3_g2_g1

0x3048,	// (0x0002151d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d71b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d71b) list_medium_line_x2_t3_g2_g

0x3090,	// (0x00021565) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3090,	// (0x00021565) list_medium_line_x2_t3_g2_t1

0x30a6,	// (0x0002157b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x30a6,	// (0x0002157b) list_medium_line_x2_t3_g2_t2

0x30b8,	// (0x0002158d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x30b8,	// (0x0002158d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d720) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d720) list_medium_line_x2_t3_g2_t

0x3030,	// (0x00021505) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t4_g4_g1

0x30d6,	// (0x000215ab) list_medium_line_x2_t4_g4_g2_ParamLimits

0x30d6,	// (0x000215ab) list_medium_line_x2_t4_g4_g2

0x303c,	// (0x00021511) list_medium_line_x2_t4_g4_g3_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x2_t4_g4_g3

0x30e2,	// (0x000215b7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x30e2,	// (0x000215b7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d727) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d727) list_medium_line_x2_t4_g4_g

0x30ee,	// (0x000215c3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x30ee,	// (0x000215c3) list_medium_line_x2_t4_g4_t1

0x3105,	// (0x000215da) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3105,	// (0x000215da) list_medium_line_x2_t4_g4_t2

0x311a,	// (0x000215ef) list_medium_line_x2_t4_g4_t3_ParamLimits

0x311a,	// (0x000215ef) list_medium_line_x2_t4_g4_t3

0x312c,	// (0x00021601) list_medium_line_x2_t4_g4_t4_ParamLimits

0x312c,	// (0x00021601) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d730) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d730) list_medium_line_x2_t4_g4_t

0x3030,	// (0x00021505) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t2_g4_g1

0x30d6,	// (0x000215ab) list_medium_line_x2_t2_g4_g2_ParamLimits

0x30d6,	// (0x000215ab) list_medium_line_x2_t2_g4_g2

0x303c,	// (0x00021511) list_medium_line_x2_t2_g4_g3_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x2_t2_g4_g3

0x3048,	// (0x0002151d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d797) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d797) list_medium_line_x2_t2_g4_g

0x42d8,	// (0x000227ad) list_medium_line_x2_t2_g4_t1_ParamLimits

0x42d8,	// (0x000227ad) list_medium_line_x2_t2_g4_t1

0x307b,	// (0x00021550) list_medium_line_x2_t2_g4_t2_ParamLimits

0x307b,	// (0x00021550) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d7a0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d7a0) list_medium_line_x2_t2_g4_t

0x3030,	// (0x00021505) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t2_g3_g1

0x303c,	// (0x00021511) list_medium_line_x2_t2_g3_g2_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x2_t2_g3_g2

0x3048,	// (0x0002151d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d70d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d70d) list_medium_line_x2_t2_g3_g

0x42ed,	// (0x000227c2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x42ed,	// (0x000227c2) list_medium_line_x2_t2_g3_t1

0x307b,	// (0x00021550) list_medium_line_x2_t2_g3_t2_ParamLimits

0x307b,	// (0x00021550) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d7a5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d7a5) list_medium_line_x2_t2_g3_t

0x447e,	// (0x00022953) main_sp_fs_list_pane_ParamLimits

0x447e,	// (0x00022953) main_sp_fs_list_pane

0x448a,	// (0x0002295f) sp_fs_scroll_pane_ParamLimits

0x448a,	// (0x0002295f) sp_fs_scroll_pane

0x4496,	// (0x0002296b) list_medium_line_x2_t3_t1

0x44a6,	// (0x0002297b) list_medium_line_x2_t3_t2

0x44b4,	// (0x00022989) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d7f0) list_medium_line_x2_t3_t

0x44c2,	// (0x00022997) list_medium_line_x3_t4_t1

0x44d2,	// (0x000229a7) list_medium_line_x3_t4_t2

0x44e0,	// (0x000229b5) list_medium_line_x3_t4_t3

0x44b4,	// (0x00022989) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d7f7) list_medium_line_x3_t4_t

0x44ee,	// (0x000229c3) list_medium_line_x4_t5_t1

0x44fe,	// (0x000229d3) list_medium_line_x4_t5_t2

0x44e0,	// (0x000229b5) list_medium_line_x4_t5_t3

0x450c,	// (0x000229e1) list_medium_line_x4_t5_t4

0x44b4,	// (0x00022989) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d800) list_medium_line_x4_t5_t

0x3030,	// (0x00021505) list_medium_line_t4_g4_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_t4_g4_g1

0x451a,	// (0x000229ef) list_medium_line_t4_g4_g2_ParamLimits

0x451a,	// (0x000229ef) list_medium_line_t4_g4_g2

0x4526,	// (0x000229fb) list_medium_line_t4_g4_g3_ParamLimits

0x4526,	// (0x000229fb) list_medium_line_t4_g4_g3

0x3048,	// (0x0002151d) list_medium_line_t4_g4_g4_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d80b) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d80b) list_medium_line_t4_g4_g

0x4532,	// (0x00022a07) list_medium_line_t4_g4_t1_ParamLimits

0x4532,	// (0x00022a07) list_medium_line_t4_g4_t1

0x4547,	// (0x00022a1c) list_medium_line_t4_g4_t2_ParamLimits

0x4547,	// (0x00022a1c) list_medium_line_t4_g4_t2

0x455d,	// (0x00022a32) list_medium_line_t4_g4_t3_ParamLimits

0x455d,	// (0x00022a32) list_medium_line_t4_g4_t3

0x307b,	// (0x00021550) list_medium_line_t4_g4_t4_ParamLimits

0x307b,	// (0x00021550) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d814) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d814) list_medium_line_t4_g4_t

0x45eb,	// (0x00022ac0) chi_dic_find_pane_g1

0x13ec,	// (0x0001f8c1) main_tport_pane

0x7058,	// (0x0002552d) list_medium_line_plain_t1

0x707e,	// (0x00025553) list_medium_line_t2_g2_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_t2_g2_g1

0x708a,	// (0x0002555f) list_medium_line_t2_g2_g2_ParamLimits

0x708a,	// (0x0002555f) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002ded5) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002ded5) list_medium_line_t2_g2_g

0x7096,	// (0x0002556b) list_medium_line_t2_g2_t1_ParamLimits

0x7096,	// (0x0002556b) list_medium_line_t2_g2_t1

0x70b0,	// (0x00025585) list_medium_line_t2_g2_t2_ParamLimits

0x70b0,	// (0x00025585) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002deda) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002deda) list_medium_line_t2_g2_t

0xd764,	// (0x0002bc39) aid_sp_fs_list_icon_a_sm

0xd76c,	// (0x0002bc41) aid_sp_fs_list_icon_d

0xd774,	// (0x0002bc49) aid_sp_fs_text_primary

0xd77d,	// (0x0002bc52) aid_sp_fs_text_secondary

0x7627,	// (0x00025afc) list_medium_line

0x7627,	// (0x00025afc) list_medium_line_g2

0x7627,	// (0x00025afc) list_medium_line_g3

0x7627,	// (0x00025afc) list_medium_line_plain

0x7627,	// (0x00025afc) list_medium_line_plain_t2

0x7627,	// (0x00025afc) list_medium_line_plain_t3

0x7627,	// (0x00025afc) list_medium_line_right_icon

0x7627,	// (0x00025afc) list_medium_line_right_iconx2

0x7627,	// (0x00025afc) list_medium_line_t2

0x7627,	// (0x00025afc) list_medium_line_t2_g2

0x7627,	// (0x00025afc) list_medium_line_t2_g3

0x7627,	// (0x00025afc) list_medium_line_t2_right_icon

0x7627,	// (0x00025afc) list_medium_line_t2_right_iconx2

0x7627,	// (0x00025afc) list_medium_line_t3

0x7627,	// (0x00025afc) list_medium_line_t3_g2

0x7627,	// (0x00025afc) list_medium_line_t3_g3

0x7627,	// (0x00025afc) list_medium_line_t3_right_iconx2

0x7630,	// (0x00025b05) list_medium_line_t4_g4

0x7639,	// (0x00025b0e) list_medium_line_x2

0x7639,	// (0x00025b0e) list_medium_line_x2_t2_g2

0x7639,	// (0x00025b0e) list_medium_line_x2_t2_g3

0x7639,	// (0x00025b0e) list_medium_line_x2_t2_g4

0x7639,	// (0x00025b0e) list_medium_line_x2_t3

0x7639,	// (0x00025b0e) list_medium_line_x2_t3_g2

0x7639,	// (0x00025b0e) list_medium_line_x2_t3_g3

0x7639,	// (0x00025b0e) list_medium_line_x2_t3_g4

0x7639,	// (0x00025b0e) list_medium_line_x2_t4_g2

0x7639,	// (0x00025b0e) list_medium_line_x2_t4_g4

0x7642,	// (0x00025b17) list_medium_line_x3

0x7642,	// (0x00025b17) list_medium_line_x3_t4

0x7642,	// (0x00025b17) list_medium_line_x3_t4_g4

0x7630,	// (0x00025b05) list_medium_line_x4_t4

0x7630,	// (0x00025b05) list_medium_line_x4_t4_g7

0x7630,	// (0x00025b05) list_medium_line_x4_t5

0x764b,	// (0x00025b20) list_single_fs_dyc_pane_ParamLimits

0x764b,	// (0x00025b20) list_single_fs_dyc_pane

0x3030,	// (0x00021505) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x4_t4_g7_g1

0x7d2a,	// (0x000261ff) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d2a,	// (0x000261ff) list_medium_line_x4_t4_g7_g2

0x7d36,	// (0x0002620b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d36,	// (0x0002620b) list_medium_line_x4_t4_g7_g3

0x7d45,	// (0x0002621a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d45,	// (0x0002621a) list_medium_line_x4_t4_g7_g4

0x7d51,	// (0x00026226) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d51,	// (0x00026226) list_medium_line_x4_t4_g7_g5

0x7d60,	// (0x00026235) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d60,	// (0x00026235) list_medium_line_x4_t4_g7_g6

0x7d6f,	// (0x00026244) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d6f,	// (0x00026244) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002e083) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002e083) list_medium_line_x4_t4_g7_g

0x7d7b,	// (0x00026250) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d7b,	// (0x00026250) list_medium_line_x4_t4_g7_t1

0x7d90,	// (0x00026265) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d90,	// (0x00026265) list_medium_line_x4_t4_g7_t2

0x7da5,	// (0x0002627a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7da5,	// (0x0002627a) list_medium_line_x4_t4_g7_t3

0x7dba,	// (0x0002628f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7dba,	// (0x0002628f) list_medium_line_x4_t4_g7_t4

0x7dcc,	// (0x000262a1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7dcc,	// (0x000262a1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002e092) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002e092) list_medium_line_x4_t4_g7_t

0x7dde,	// (0x000262b3) list_single_dyc_row_pane_ParamLimits

0x7dde,	// (0x000262b3) list_single_dyc_row_pane

0x847a,	// (0x0002694f) call5_gesture_pane_ParamLimits

0x847a,	// (0x0002694f) call5_gesture_pane

0x84ae,	// (0x00026983) call5_windows_pane_ParamLimits

0x84ae,	// (0x00026983) call5_windows_pane

0x8525,	// (0x000269fa) call5_swipe_1_pane_cp_ParamLimits

0x8525,	// (0x000269fa) call5_swipe_1_pane_cp

0x8531,	// (0x00026a06) call5_swipe_2_pane_cp_ParamLimits

0x8531,	// (0x00026a06) call5_swipe_2_pane_cp

0xae60,	// (0x00029335) call5_image_pane_cp

0x853d,	// (0x00026a12) popup_call5_audio_first_window_cp_ParamLimits

0x853d,	// (0x00026a12) popup_call5_audio_first_window_cp

0xe255,	// (0x0002c72a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe255,	// (0x0002c72a) call5_swipe_1_pane_g1_cp

0xe295,	// (0x0002c76a) call5_swipe_1_pane_g2_cp

0xe26e,	// (0x0002c743) call5_swipe_1_pane_t1_cp_ParamLimits

0xe26e,	// (0x0002c743) call5_swipe_1_pane_t1_cp

0xe255,	// (0x0002c72a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe255,	// (0x0002c72a) call5_swipe_2_pane_g1_cp

0xe29d,	// (0x0002c772) call5_swipe_2_pane_g2_cp

0xe2a5,	// (0x0002c77a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2a5,	// (0x0002c77a) call5_swipe_2_pane_t1_cp

0xa34f,	// (0x00028824) main_sp_fs_email_pane

0xe2ba,	// (0x0002c78f) main_sp_fs_listscroll_pane_te

0xe2c3,	// (0x0002c798) popup_sp_fs_action_menu_pane_ParamLimits

0xe2c3,	// (0x0002c798) popup_sp_fs_action_menu_pane

0xc6bd,	// (0x0002ab92) bg_sp_fs_ctrlbar_pane_g1

0xe305,	// (0x0002c7da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe30e,	// (0x0002c7e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe317,	// (0x0002c7ec) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc6bd,	// (0x0002ab92) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc50,	// (0x0002e125) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc4a0,	// (0x0002a975) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc4a0,	// (0x0002a975) bg_sp_fs_ctrlbar_ddmenu_pane

0xe320,	// (0x0002c7f5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe320,	// (0x0002c7f5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32c,	// (0x0002c801) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe32c,	// (0x0002c801) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x09e0,	// (0x0001eeb5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x09e0,	// (0x0001eeb5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe338,	// (0x0002c80d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe338,	// (0x0002c80d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x854b,	// (0x00026a20) list_medium_line_t2_right_icon_g1

0x8553,	// (0x00026a28) list_medium_line_t2_right_icon_t1

0x8563,	// (0x00026a38) list_medium_line_t2_right_icon_t2

0x0001,

0xfc59,	// (0x0002e12e) list_medium_line_t2_right_icon_t

0xc2b3,	// (0x0002a788) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc2b3,	// (0x0002a788) bg_sp_fs_ctrlbar_pane

0x85c8,	// (0x00026a9d) main_sp_fs_ctrlbar_button_pane_cp01

0x85d0,	// (0x00026aa5) main_sp_fs_ctrlbar_ddmenu_pane

0xe38a,	// (0x0002c85f) main_sp_fs_ctrlbar_pane_g1

0xe396,	// (0x0002c86b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x09ea,	// (0x0001eebf) main_sp_fs_ctrlbar_pane_g

0xe3a2,	// (0x0002c877) main_sp_fs_ctrlbar_pane_t1

0x85da,	// (0x00026aaf) main_sp_fs_ctrlbar_pane

0x85f0,	// (0x00026ac5) main_sp_fs_listscroll_pane_te_cp01

0x8601,	// (0x00026ad6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8601,	// (0x00026ad6) popup_sp_fs_action_menu_pane_cp01

0xa34f,	// (0x00028824) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa34f,	// (0x00028824) bg_sp_fs_highlight_list_pane_cp01

0xe3d2,	// (0x0002c8a7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3d2,	// (0x0002c8a7) sp_fs_action_menu_list_gene_pane_g1

0xe3e1,	// (0x0002c8b6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3e1,	// (0x0002c8b6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x09f4,	// (0x0001eec9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x09f4,	// (0x0001eec9) sp_fs_action_menu_list_gene_pane_g

0xe3ee,	// (0x0002c8c3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ee,	// (0x0002c8c3) sp_fs_action_menu_list_gene_pane_t1

0xe406,	// (0x0002c8db) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe406,	// (0x0002c8db) sp_fs_action_menu_list_gene_pane

0xe423,	// (0x0002c8f8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe423,	// (0x0002c8f8) popup_sp_fs_action_menu_bg_pane

0xe431,	// (0x0002c906) sp_fs_action_menu_list_pane_ParamLimits

0xe431,	// (0x0002c906) sp_fs_action_menu_list_pane

0xe44f,	// (0x0002c924) sp_fs_scroll_pane_cp01_ParamLimits

0xe44f,	// (0x0002c924) sp_fs_scroll_pane_cp01

0x862b,	// (0x00026b00) list_medium_line_plain_t2_t1

0x863b,	// (0x00026b10) list_medium_line_plain_t2_t2

0x0001,

0xfc5e,	// (0x0002e133) list_medium_line_plain_t2_t

0x8649,	// (0x00026b1e) list_medium_line_plain_t3_t1

0x8659,	// (0x00026b2e) list_medium_line_plain_t3_t2

0x8667,	// (0x00026b3c) list_medium_line_plain_t3_t3

0x0002,

0xfc63,	// (0x0002e138) list_medium_line_plain_t3_t

0x3030,	// (0x00021505) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t2_g2_g1

0x3048,	// (0x0002151d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d71b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d71b) list_medium_line_x2_t2_g2_g

0x4532,	// (0x00022a07) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4532,	// (0x00022a07) list_medium_line_x2_t2_g2_t1

0x307b,	// (0x00021550) list_medium_line_x2_t2_g2_t2_ParamLimits

0x307b,	// (0x00021550) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc6a,	// (0x0002e13f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc6a,	// (0x0002e13f) list_medium_line_x2_t2_g2_t

0x3030,	// (0x00021505) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t4_g2_g1

0x3048,	// (0x0002151d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d71b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d71b) list_medium_line_x2_t4_g2_g

0x8675,	// (0x00026b4a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8675,	// (0x00026b4a) list_medium_line_x2_t4_g2_t1

0x868f,	// (0x00026b64) list_medium_line_x2_t4_g2_t2_ParamLimits

0x868f,	// (0x00026b64) list_medium_line_x2_t4_g2_t2

0x86a4,	// (0x00026b79) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86a4,	// (0x00026b79) list_medium_line_x2_t4_g2_t3

0x307b,	// (0x00021550) list_medium_line_x2_t4_g2_t4_ParamLimits

0x307b,	// (0x00021550) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6f,	// (0x0002e144) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6f,	// (0x0002e144) list_medium_line_x2_t4_g2_t

0x86b9,	// (0x00026b8e) list_medium_line_t3_right_iconx2_g1

0x854b,	// (0x00026a20) list_medium_line_t3_right_iconx2_g2

0x86c1,	// (0x00026b96) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc78,	// (0x0002e14d) list_medium_line_t3_right_iconx2_g

0x86c9,	// (0x00026b9e) list_medium_line_t3_right_iconx2_t1

0x86d9,	// (0x00026bae) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7f,	// (0x0002e154) list_medium_line_t3_right_iconx2_t

0x3030,	// (0x00021505) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x3_t4_g4_g1

0x303c,	// (0x00021511) list_medium_line_x3_t4_g4_g2_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x3_t4_g4_g2

0x451a,	// (0x000229ef) list_medium_line_x3_t4_g4_g3_ParamLimits

0x451a,	// (0x000229ef) list_medium_line_x3_t4_g4_g3

0x86e7,	// (0x00026bbc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86e7,	// (0x00026bbc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc84,	// (0x0002e159) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc84,	// (0x0002e159) list_medium_line_x3_t4_g4_g

0x86f3,	// (0x00026bc8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86f3,	// (0x00026bc8) list_medium_line_x3_t4_g4_t1

0x870a,	// (0x00026bdf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x870a,	// (0x00026bdf) list_medium_line_x3_t4_g4_t2

0x871f,	// (0x00026bf4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x871f,	// (0x00026bf4) list_medium_line_x3_t4_g4_t3

0x8734,	// (0x00026c09) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8734,	// (0x00026c09) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8d,	// (0x0002e162) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8d,	// (0x0002e162) list_medium_line_x3_t4_g4_t

0x8751,	// (0x00026c26) list_single_dyc_row_text_pane_t1_ParamLimits

0x8751,	// (0x00026c26) list_single_dyc_row_text_pane_t1

0x8788,	// (0x00026c5d) list_single_dyc_row_text_pane_t2_ParamLimits

0x8788,	// (0x00026c5d) list_single_dyc_row_text_pane_t2

0xe475,	// (0x0002c94a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe475,	// (0x0002c94a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc96,	// (0x0002e16b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc96,	// (0x0002e16b) list_single_dyc_row_text_pane_t

0xe499,	// (0x0002c96e) list_single_dyc_row_pane_g1_ParamLimits

0xe499,	// (0x0002c96e) list_single_dyc_row_pane_g1

0xe4a5,	// (0x0002c97a) list_single_dyc_row_pane_g2_ParamLimits

0xe4a5,	// (0x0002c97a) list_single_dyc_row_pane_g2

0xe4b1,	// (0x0002c986) list_single_dyc_row_pane_g3_ParamLimits

0xe4b1,	// (0x0002c986) list_single_dyc_row_pane_g3

0xe4bd,	// (0x0002c992) list_single_dyc_row_pane_g4_ParamLimits

0xe4bd,	// (0x0002c992) list_single_dyc_row_pane_g4

0x0003,

0x0a3e,	// (0x0001ef13) list_single_dyc_row_pane_g_ParamLimits

0x0a3e,	// (0x0001ef13) list_single_dyc_row_pane_g

0xe4c9,	// (0x0002c99e) list_single_dyc_row_text_pane_ParamLimits

0xe4c9,	// (0x0002c99e) list_single_dyc_row_text_pane

0x9aa5,	// (0x00027f7a) bg_sp_fs_scroll_pane

0xe4e8,	// (0x0002c9bd) thumb_sp_fs_scroll_pane

0x707e,	// (0x00025553) list_medium_line_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_g1

0x88ab,	// (0x00026d80) list_medium_line_t1_ParamLimits

0x88ab,	// (0x00026d80) list_medium_line_t1

0x3030,	// (0x00021505) list_medium_line_x2_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_g1

0x303c,	// (0x00021511) list_medium_line_x2_g2_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x2_g2

0x0001,

0xfca3,	// (0x0002e178) list_medium_line_x2_g_ParamLimits

0xfca3,	// (0x0002e178) list_medium_line_x2_g

0xe4f1,	// (0x0002c9c6) list_medium_line_x2_t1_ParamLimits

0xe4f1,	// (0x0002c9c6) list_medium_line_x2_t1

0x3030,	// (0x00021505) list_medium_line_x3_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x3_g1

0x303c,	// (0x00021511) list_medium_line_x3_g2_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x3_g2

0x0001,

0xfca3,	// (0x0002e178) list_medium_line_x3_g_ParamLimits

0xfca3,	// (0x0002e178) list_medium_line_x3_g

0xe4f1,	// (0x0002c9c6) list_medium_line_x3_t1_ParamLimits

0xe4f1,	// (0x0002c9c6) list_medium_line_x3_t1

0xe507,	// (0x0002c9dc) thumb_sp_fs_scroll_pane_g1

0xe510,	// (0x0002c9e5) thumb_sp_fs_scroll_pane_g2

0xe519,	// (0x0002c9ee) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a4c,	// (0x0001ef21) thumb_sp_fs_scroll_pane_g

0xe507,	// (0x0002c9dc) bg_sp_fs_scroll_pane_g1

0xe510,	// (0x0002c9e5) bg_sp_fs_scroll_pane_g2

0xe519,	// (0x0002c9ee) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a4c,	// (0x0001ef21) bg_sp_fs_scroll_pane_g

0x3030,	// (0x00021505) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3030,	// (0x00021505) list_medium_line_x2_t3_g4_g1

0x30d6,	// (0x000215ab) list_medium_line_x2_t3_g4_g2_ParamLimits

0x30d6,	// (0x000215ab) list_medium_line_x2_t3_g4_g2

0x303c,	// (0x00021511) list_medium_line_x2_t3_g4_g3_ParamLimits

0x303c,	// (0x00021511) list_medium_line_x2_t3_g4_g3

0x3048,	// (0x0002151d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3048,	// (0x0002151d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d797) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d797) list_medium_line_x2_t3_g4_g

0x88c0,	// (0x00026d95) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88c0,	// (0x00026d95) list_medium_line_x2_t3_g4_t1

0x88d6,	// (0x00026dab) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88d6,	// (0x00026dab) list_medium_line_x2_t3_g4_t2

0x307b,	// (0x00021550) list_medium_line_x2_t3_g4_t3_ParamLimits

0x307b,	// (0x00021550) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca8,	// (0x0002e17d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca8,	// (0x0002e17d) list_medium_line_x2_t3_g4_t

0x707e,	// (0x00025553) list_medium_line_g2_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_g2_g1

0x708a,	// (0x0002555f) list_medium_line_g2_g2_ParamLimits

0x708a,	// (0x0002555f) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002ded5) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002ded5) list_medium_line_g2_g

0x88ef,	// (0x00026dc4) list_medium_line_g2_t1_ParamLimits

0x88ef,	// (0x00026dc4) list_medium_line_g2_t1

0x707e,	// (0x00025553) list_medium_line_t3_g2_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_t3_g2_g1

0x708a,	// (0x0002555f) list_medium_line_t3_g2_g2_ParamLimits

0x708a,	// (0x0002555f) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002ded5) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002ded5) list_medium_line_t3_g2_g

0x8904,	// (0x00026dd9) list_medium_line_t3_g2_t1_ParamLimits

0x8904,	// (0x00026dd9) list_medium_line_t3_g2_t1

0x891b,	// (0x00026df0) list_medium_line_t3_g2_t2_ParamLimits

0x891b,	// (0x00026df0) list_medium_line_t3_g2_t2

0x8930,	// (0x00026e05) list_medium_line_t3_g2_t3_ParamLimits

0x8930,	// (0x00026e05) list_medium_line_t3_g2_t3

0x0002,

0xfcaf,	// (0x0002e184) list_medium_line_t3_g2_t_ParamLimits

0xfcaf,	// (0x0002e184) list_medium_line_t3_g2_t

0x854b,	// (0x00026a20) list_medium_line_right_icon_g1

0x8945,	// (0x00026e1a) list_medium_line_right_icon_t1

0x707e,	// (0x00025553) list_medium_line_t2_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_t2_g1

0x8953,	// (0x00026e28) list_medium_line_t2_t1_ParamLimits

0x8953,	// (0x00026e28) list_medium_line_t2_t1

0x896d,	// (0x00026e42) list_medium_line_t2_t2_ParamLimits

0x896d,	// (0x00026e42) list_medium_line_t2_t2

0x0001,

0xfcb6,	// (0x0002e18b) list_medium_line_t2_t_ParamLimits

0xfcb6,	// (0x0002e18b) list_medium_line_t2_t

0x707e,	// (0x00025553) list_medium_line_t3_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_t3_g1

0x8982,	// (0x00026e57) list_medium_line_t3_t1_ParamLimits

0x8982,	// (0x00026e57) list_medium_line_t3_t1

0x899c,	// (0x00026e71) list_medium_line_t3_t2_ParamLimits

0x899c,	// (0x00026e71) list_medium_line_t3_t2

0x89b1,	// (0x00026e86) list_medium_line_t3_t3_ParamLimits

0x89b1,	// (0x00026e86) list_medium_line_t3_t3

0x0002,

0xfcbb,	// (0x0002e190) list_medium_line_t3_t_ParamLimits

0xfcbb,	// (0x0002e190) list_medium_line_t3_t

0x707e,	// (0x00025553) list_medium_line_g3_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_g3_g1

0x89c6,	// (0x00026e9b) list_medium_line_g3_g2_ParamLimits

0x89c6,	// (0x00026e9b) list_medium_line_g3_g2

0x708a,	// (0x0002555f) list_medium_line_g3_g3_ParamLimits

0x708a,	// (0x0002555f) list_medium_line_g3_g3

0x0002,

0xfcc2,	// (0x0002e197) list_medium_line_g3_g_ParamLimits

0xfcc2,	// (0x0002e197) list_medium_line_g3_g

0x89d2,	// (0x00026ea7) list_medium_line_g3_t1_ParamLimits

0x89d2,	// (0x00026ea7) list_medium_line_g3_t1

0x707e,	// (0x00025553) list_medium_line_t2_g3_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_t2_g3_g1

0x89c6,	// (0x00026e9b) list_medium_line_t2_g3_g2_ParamLimits

0x89c6,	// (0x00026e9b) list_medium_line_t2_g3_g2

0x708a,	// (0x0002555f) list_medium_line_t2_g3_g3_ParamLimits

0x708a,	// (0x0002555f) list_medium_line_t2_g3_g3

0x0002,

0xfcc2,	// (0x0002e197) list_medium_line_t2_g3_g_ParamLimits

0xfcc2,	// (0x0002e197) list_medium_line_t2_g3_g

0x89e7,	// (0x00026ebc) list_medium_line_t2_g3_t1_ParamLimits

0x89e7,	// (0x00026ebc) list_medium_line_t2_g3_t1

0x89fe,	// (0x00026ed3) list_medium_line_t2_g3_t2_ParamLimits

0x89fe,	// (0x00026ed3) list_medium_line_t2_g3_t2

0x0001,

0xfcc9,	// (0x0002e19e) list_medium_line_t2_g3_t_ParamLimits

0xfcc9,	// (0x0002e19e) list_medium_line_t2_g3_t

0x707e,	// (0x00025553) list_medium_line_t3_g3_g1_ParamLimits

0x707e,	// (0x00025553) list_medium_line_t3_g3_g1

0x89c6,	// (0x00026e9b) list_medium_line_t3_g3_g2_ParamLimits

0x89c6,	// (0x00026e9b) list_medium_line_t3_g3_g2

0x708a,	// (0x0002555f) list_medium_line_t3_g3_g3_ParamLimits

0x708a,	// (0x0002555f) list_medium_line_t3_g3_g3

0x0002,

0xfcc2,	// (0x0002e197) list_medium_line_t3_g3_g_ParamLimits

0xfcc2,	// (0x0002e197) list_medium_line_t3_g3_g

0x8a13,	// (0x00026ee8) list_medium_line_t3_g3_t1_ParamLimits

0x8a13,	// (0x00026ee8) list_medium_line_t3_g3_t1

0x8a2c,	// (0x00026f01) list_medium_line_t3_g3_t2_ParamLimits

0x8a2c,	// (0x00026f01) list_medium_line_t3_g3_t2

0x8a42,	// (0x00026f17) list_medium_line_t3_g3_t3_ParamLimits

0x8a42,	// (0x00026f17) list_medium_line_t3_g3_t3

0x0002,

0xfcce,	// (0x0002e1a3) list_medium_line_t3_g3_t_ParamLimits

0xfcce,	// (0x0002e1a3) list_medium_line_t3_g3_t

0x86b9,	// (0x00026b8e) list_medium_line_right_iconx2_g1

0x854b,	// (0x00026a20) list_medium_line_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002e1aa) list_medium_line_right_iconx2_g

0x8a58,	// (0x00026f2d) list_medium_line_right_iconx2_t1

0x86b9,	// (0x00026b8e) list_medium_line_t2_right_iconx2_g1

0x854b,	// (0x00026a20) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002e1aa) list_medium_line_t2_right_iconx2_g

0x8a66,	// (0x00026f3b) list_medium_line_t2_right_iconx2_t1

0x8a76,	// (0x00026f4b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcda,	// (0x0002e1af) list_medium_line_t2_right_iconx2_t

0x8a84,	// (0x00026f59) list_medium_line_x4_t4_t1

0x8a92,	// (0x00026f67) list_medium_line_x4_t4_t2

0x8aa2,	// (0x00026f77) list_medium_line_x4_t4_t3

0x8ab2,	// (0x00026f87) list_medium_line_x4_t4_t4

0x0003,

0xfcdf,	// (0x0002e1b4) list_medium_line_x4_t4_t

0x8aec,	// (0x00026fc1) tport_appsw_pane_ParamLimits

0x8aec,	// (0x00026fc1) tport_appsw_pane

0x8afa,	// (0x00026fcf) tport_contact_pane_ParamLimits

0x8afa,	// (0x00026fcf) tport_contact_pane

0x8b0a,	// (0x00026fdf) tport_listscroll_pane_ParamLimits

0x8b0a,	// (0x00026fdf) tport_listscroll_pane

0x8b1a,	// (0x00026fef) cell_tport_appsw_pane_ParamLimits

0x8b1a,	// (0x00026fef) cell_tport_appsw_pane

0xc9f6,	// (0x0002aecb) tport_appsw_pane_g1_ParamLimits

0xc9f6,	// (0x0002aecb) tport_appsw_pane_g1

0xe522,	// (0x0002c9f7) tport_contact_pane_g1

0xdd5d,	// (0x0002c232) tport_contact_pane_t1

0xe52b,	// (0x0002ca00) tport_contact_pane_t2

0x0001,

0x0a93,	// (0x0001ef68) tport_contact_pane_t

0xe539,	// (0x0002ca0e) list_tport_pane

0xe542,	// (0x0002ca17) scroll_pane_cp_030

0x8b4d,	// (0x00027022) cell_tport_appsw_pane_g1

0x8b5d,	// (0x00027032) cell_tport_appsw_pane_t1

0x8b6b,	// (0x00027040) grid_highlight_pane_cp019

0x8b73,	// (0x00027048) list_tport_double_graphic_pane_ParamLimits

0x8b73,	// (0x00027048) list_tport_double_graphic_pane

0xa34f,	// (0x00028824) list_highlight_pane_cp023_ParamLimits

0xa34f,	// (0x00028824) list_highlight_pane_cp023

0x8b85,	// (0x0002705a) list_tport_double_graphic_pane_g1_ParamLimits

0x8b85,	// (0x0002705a) list_tport_double_graphic_pane_g1

0x8b92,	// (0x00027067) list_tport_double_graphic_pane_t1_ParamLimits

0x8b92,	// (0x00027067) list_tport_double_graphic_pane_t1

0x8ba7,	// (0x0002707c) list_tport_double_graphic_pane_t2_ParamLimits

0x8ba7,	// (0x0002707c) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0002e1c4) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0002e1c4) list_tport_double_graphic_pane_t

0x9aa5,	// (0x00027f7a) main_cale_note_pane

0x210b,	// (0x000205e0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x210b,	// (0x000205e0) cell_vitu2_function_top_wide_pane_cp01

0x8145,	// (0x0002661a) wait_bar_pane_cp05_ParamLimits

0xa34f,	// (0x00028824) listscroll_cmail_pane

0xe54b,	// (0x0002ca20) list_cmail_pane

0x8bb9,	// (0x0002708e) list_cmail_body_pane

0x8be0,	// (0x000270b5) list_single_cmail_header_caption_pane

0x8c14,	// (0x000270e9) list_single_cmail_header_detail_pane_ParamLimits

0x8c14,	// (0x000270e9) list_single_cmail_header_detail_pane

0xe55b,	// (0x0002ca30) list_single_cmail_header_caption_pane_t1

0x8c4f,	// (0x00027124) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c4f,	// (0x00027124) list_single_cmail_header_detail_pane_g1

0xe572,	// (0x0002ca47) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe572,	// (0x0002ca47) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0002e1c9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0002e1c9) list_single_cmail_header_detail_pane_g

0x8c65,	// (0x0002713a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8c65,	// (0x0002713a) list_single_cmail_header_detail_pane_t1

0x8ca1,	// (0x00027176) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8ca1,	// (0x00027176) list_single_cmail_header_editor_pane_bg

0xe5af,	// (0x0002ca84) list_cmail_body_pane_g1

0xe5b8,	// (0x0002ca8d) list_cmail_body_pane_t1

0xd1dd,	// (0x0002b6b2) list_single_cmail_header_editor_pane_bg_g1

0xa62f,	// (0x00028b04) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ed,	// (0x0002b6c2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1e5,	// (0x0002b6ba) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd41d,	// (0x0002b8f2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd20d,	// (0x0002b6e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1fd,	// (0x0002b6d2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd205,	// (0x0002b6da) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa60f,	// (0x00028ae4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cb8,	// (0x0002718d) calenote_gesture_pane_ParamLimits

0x8cb8,	// (0x0002718d) calenote_gesture_pane

0x8cd2,	// (0x000271a7) calenote_window_pane_ParamLimits

0x8cd2,	// (0x000271a7) calenote_window_pane

0xe5c6,	// (0x0002ca9b) popup_note_window_cp01

0x8cea,	// (0x000271bf) calenote_swipe_1_pane_ParamLimits

0x8cea,	// (0x000271bf) calenote_swipe_1_pane

0x8531,	// (0x00026a06) calenote_swipe_2_pane_ParamLimits

0x8531,	// (0x00026a06) calenote_swipe_2_pane

0xe255,	// (0x0002c72a) calenote_swipe_1_pane_g1_ParamLimits

0xe255,	// (0x0002c72a) calenote_swipe_1_pane_g1

0xe262,	// (0x0002c737) calenote_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0002c737) calenote_swipe_1_pane_g2

0x0001,

0x09cd,	// (0x0001eea2) calenote_swipe_1_pane_g_ParamLimits

0x09cd,	// (0x0001eea2) calenote_swipe_1_pane_g

0xe5d8,	// (0x0002caad) calenote_swipe_1_pane_t1_ParamLimits

0xe5d8,	// (0x0002caad) calenote_swipe_1_pane_t1

0xe255,	// (0x0002c72a) calenote_swipe_2_pane_g1_ParamLimits

0xe255,	// (0x0002c72a) calenote_swipe_2_pane_g1

0xe5f7,	// (0x0002cacc) calenote_swipe_2_pane_g2_ParamLimits

0xe5f7,	// (0x0002cacc) calenote_swipe_2_pane_g2

0x0001,

0x0ab0,	// (0x0001ef85) calenote_swipe_2_pane_g_ParamLimits

0x0ab0,	// (0x0001ef85) calenote_swipe_2_pane_g

0xe603,	// (0x0002cad8) calenote_swipe_2_pane_t1_ParamLimits

0xe603,	// (0x0002cad8) calenote_swipe_2_pane_t1

0x9aa5,	// (0x00027f7a) main_mup_navstr_pane

0x6000,	// (0x000244d5) main_mup3_pane_t7_ParamLimits

0x6000,	// (0x000244d5) main_mup3_pane_t7

0x1a1c,	// (0x0001fef1) main_mp4_pane_g6_ParamLimits

0x1a1c,	// (0x0001fef1) main_mp4_pane_g6

0x1d0f,	// (0x000201e4) main_image3_pane_t4_ParamLimits

0x1d0f,	// (0x000201e4) main_image3_pane_t4

0x8cfd,	// (0x000271d2) popup_navstr_preview_pane_ParamLimits

0x8cfd,	// (0x000271d2) popup_navstr_preview_pane

0x8d09,	// (0x000271de) scroll_navstr_pane_ParamLimits

0x8d09,	// (0x000271de) scroll_navstr_pane

0x9aa5,	// (0x00027f7a) bg_popup_preview_window_pane_cp04

0xe62a,	// (0x0002caff) popup_navstr_preview_pane_t1

0x8d15,	// (0x000271ea) scroll_navstr_pane_g1_ParamLimits

0x8d15,	// (0x000271ea) scroll_navstr_pane_g1

0x8d22,	// (0x000271f7) scroll_navstr_pane_t1_ParamLimits

0x8d22,	// (0x000271f7) scroll_navstr_pane_t1

0xe5cf,	// (0x0002caa4) bg_button_pane_cp014

0xe5cf,	// (0x0002caa4) bg_button_pane_cp030

0x8420,	// (0x000268f5) list_double_fisheye_pane_g4_ParamLimits

0x8420,	// (0x000268f5) list_double_fisheye_pane_g4

0x842c,	// (0x00026901) list_double_fisheye_pane_g5_ParamLimits

0x842c,	// (0x00026901) list_double_fisheye_pane_g5

0xd559,	// (0x0002ba2e) sp_fs_scroll_pane_cp03

0xe38a,	// (0x0002c85f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe396,	// (0x0002c86b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x09ea,	// (0x0001eebf) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3a2,	// (0x0002c877) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe553,	// (0x0002ca28) sp_fs_scroll_pane_cp02

0xa317,	// (0x000287ec) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa317,	// (0x000287ec) popup_sp_fs_calendar_preview_list_single_pane

0x9aa5,	// (0x00027f7a) main_cam6_pano_pane

0x13d0,	// (0x0001f8a5) main_mup3_pane_ParamLimits

0x9aa5,	// (0x00027f7a) main_phacti_pane

0x801a,	// (0x000264ef) bg_button_pane_cp11

0x8032,	// (0x00026507) main_mobtv_info_pane_g2_ParamLimits

0x8032,	// (0x00026507) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002e0d2) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002e0d2) main_mobtv_info_pane_g

0x81e4,	// (0x000266b9) sc_clock_pane_t5_ParamLimits

0x81e4,	// (0x000266b9) sc_clock_pane_t5

0x8287,	// (0x0002675c) main_radioblah_pane_g1_ParamLimits

0xe1a1,	// (0x0002c676) main_radioblah_pane_t3_ParamLimits

0xe1a1,	// (0x0002c676) main_radioblah_pane_t3

0xe1b9,	// (0x0002c68e) main_radioblah_pane_t4_ParamLimits

0xe1b9,	// (0x0002c68e) main_radioblah_pane_t4

0x82a5,	// (0x0002677a) main_radioblah_text_pane_ParamLimits

0x82a5,	// (0x0002677a) main_radioblah_text_pane

0x82b2,	// (0x00026787) main_radioblah_info_pane_g1_ParamLimits

0x8347,	// (0x0002681c) main_radioblah_info_pane_t4_ParamLimits

0x8347,	// (0x0002681c) main_radioblah_info_pane_t4

0xa34f,	// (0x00028824) main_sp_fs_calendar_pane

0x8d34,	// (0x00027209) main_phacti_pane_g1

0x8d3c,	// (0x00027211) phacti_note_pane_ParamLimits

0x8d3c,	// (0x00027211) phacti_note_pane

0xe641,	// (0x0002cb16) phacti_term_pane_ParamLimits

0xe641,	// (0x0002cb16) phacti_term_pane

0xe656,	// (0x0002cb2b) phacti_note_pane_t1_ParamLimits

0xe656,	// (0x0002cb2b) phacti_note_pane_t1

0xe66d,	// (0x0002cb42) phacti_term_pane_g1

0xe675,	// (0x0002cb4a) phacti_term_pane_t1_ParamLimits

0xe675,	// (0x0002cb4a) phacti_term_pane_t1

0xe69f,	// (0x0002cb74) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6a7,	// (0x0002cb7c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0aba,	// (0x0001ef8f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6af,	// (0x0002cb84) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6af,	// (0x0002cb84) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6c5,	// (0x0002cb9a) aid_popup_sp_fs_bg_corner_pane

0xc6bd,	// (0x0002ab92) popup_sp_fs_calendar_preview_bg_pane_g1

0x9aa5,	// (0x00027f7a) popup_sp_fs_calendar_preview_bg_pane

0x8d52,	// (0x00027227) popup_sp_fs_calendar_preview_list_pane

0xc2b3,	// (0x0002a788) bg_main_sp_fs_cale_pane_ParamLimits

0xc2b3,	// (0x0002a788) bg_main_sp_fs_cale_pane

0xe6d6,	// (0x0002cbab) listscroll_cale_mrui_pane_ParamLimits

0xe6d6,	// (0x0002cbab) listscroll_cale_mrui_pane

0xe6eb,	// (0x0002cbc0) listscroll_sp_fs_schedule_track_pane

0xe6f4,	// (0x0002cbc9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6f4,	// (0x0002cbc9) main_sp_fs_ctrlbar_pane_cp01

0xe707,	// (0x0002cbdc) main_sp_fs_ribbon_pane

0xe70f,	// (0x0002cbe4) popup_sp_fs_cale_preview_window

0x8da7,	// (0x0002727c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8da7,	// (0x0002727c) list_single_sp_fs_schedule_track_pane

0xd2b3,	// (0x0002b788) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd2b3,	// (0x0002b788) bg_sp_fs_highlight_list_pane_cp03

0x8dd5,	// (0x000272aa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8dd5,	// (0x000272aa) list_single_sp_fs_schedule_track_pane_g1

0x8de1,	// (0x000272b6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8de1,	// (0x000272b6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd00,	// (0x0002e1d5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd00,	// (0x0002e1d5) list_single_sp_fs_schedule_track_pane_g

0x8ded,	// (0x000272c2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ded,	// (0x000272c2) list_single_sp_fs_schedule_track_pane_t1

0x8e05,	// (0x000272da) sp_fs_schedule_track_pane_ParamLimits

0x8e05,	// (0x000272da) sp_fs_schedule_track_pane

0xe721,	// (0x0002cbf6) sp_fs_schedule_track_pane_g1

0xe729,	// (0x0002cbfe) sp_fs_schedule_track_pane_g2

0xe731,	// (0x0002cc06) sp_fs_schedule_track_pane_g3

0xe739,	// (0x0002cc0e) sp_fs_schedule_track_pane_g4

0xe741,	// (0x0002cc16) sp_fs_schedule_track_pane_g5

0x0004,

0x0ac4,	// (0x0001ef99) sp_fs_schedule_track_pane_g

0xd1dd,	// (0x0002b6b2) bg_sp_fs_schedule_viewer_highlight_g1

0xa62f,	// (0x00028b04) bg_sp_fs_schedule_viewer_highlight_g2

0xd1e5,	// (0x0002b6ba) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ed,	// (0x0002b6c2) bg_sp_fs_schedule_viewer_highlight_g4

0xd41d,	// (0x0002b8f2) bg_sp_fs_schedule_viewer_highlight_g5

0xd1fd,	// (0x0002b6d2) bg_sp_fs_schedule_viewer_highlight_g6

0xd205,	// (0x0002b6da) bg_sp_fs_schedule_viewer_highlight_g7

0xd20d,	// (0x0002b6e2) bg_sp_fs_schedule_viewer_highlight_g8

0xa60f,	// (0x00028ae4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd05,	// (0x0002e1da) bg_sp_fs_schedule_viewer_highlight_g

0x9aa5,	// (0x00027f7a) bg_main_sp_fs_ribbon_pane

0x8e15,	// (0x000272ea) main_sp_fs_ribbon_pane_g1

0xe749,	// (0x0002cc1e) main_sp_fs_ribbon_pane_t1

0x8e1e,	// (0x000272f3) main_sp_fs_ribbon_pane_t2

0xe758,	// (0x0002cc2d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd18,	// (0x0002e1ed) main_sp_fs_ribbon_pane_t

0xe767,	// (0x0002cc3c) main_sp_fs_ribbon_scheduler_pane

0xe76f,	// (0x0002cc44) bg_main_sp_fs_ribbon_pane_g1

0xe778,	// (0x0002cc4d) bg_main_sp_fs_ribbon_pane_g2

0xe781,	// (0x0002cc56) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0ae9,	// (0x0001efbe) bg_main_sp_fs_ribbon_pane_g

0xe789,	// (0x0002cc5e) main_sp_fs_ribbon_scheduler_pane_g1

0xe792,	// (0x0002cc67) main_sp_fs_ribbon_scheduler_pane_g2

0xe79b,	// (0x0002cc70) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0af0,	// (0x0001efc5) main_sp_fs_ribbon_scheduler_pane_g

0xe7a4,	// (0x0002cc79) list_cale_mrui_pane

0x8e2f,	// (0x00027304) sp_fs_scroll_pane_cp07_ParamLimits

0x8e2f,	// (0x00027304) sp_fs_scroll_pane_cp07

0x8e4b,	// (0x00027320) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e4b,	// (0x00027320) bg_sp_fs_schedule_viewer_highlight

0xe7b1,	// (0x0002cc86) list_single_sp_fs_schedule_track_pane_cp01

0xe7b9,	// (0x0002cc8e) list_sp_fs_schedule_track_pane

0xe7c1,	// (0x0002cc96) sp_fs_scroll_pane_cp06_ParamLimits

0xe7c1,	// (0x0002cc96) sp_fs_scroll_pane_cp06

0xc6bd,	// (0x0002ab92) bgmain_sp_fs_calendar_pane_g1

0x8e58,	// (0x0002732d) list_single_cale_mrui_pane_ParamLimits

0x8e58,	// (0x0002732d) list_single_cale_mrui_pane

0xe7d3,	// (0x0002cca8) list_single_cale_mrui_row_pane_ParamLimits

0xe7d3,	// (0x0002cca8) list_single_cale_mrui_row_pane

0xe7e0,	// (0x0002ccb5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7e0,	// (0x0002ccb5) list_single_cale_mrui_row_pane_g1

0xe825,	// (0x0002ccfa) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe825,	// (0x0002ccfa) list_single_cale_mrui_row_pane_t1

0x8e89,	// (0x0002735e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e89,	// (0x0002735e) list_single_cale_mrui_row_pane_t2

0xe837,	// (0x0002cd0c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe837,	// (0x0002cd0c) list_single_cale_mrui_row_pane_t3

0xe866,	// (0x0002cd3b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe866,	// (0x0002cd3b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd1f,	// (0x0002e1f4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd1f,	// (0x0002e1f4) list_single_cale_mrui_row_pane_t

0x8eef,	// (0x000273c4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8eef,	// (0x000273c4) list_single_cmail_header_editor_pane_bg_cp01

0x8f11,	// (0x000273e6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f11,	// (0x000273e6) list_single_cmail_header_editor_pane_bg_cp02

0x8f2d,	// (0x00027402) main_radioblah_text_pane_t1_ParamLimits

0x8f2d,	// (0x00027402) main_radioblah_text_pane_t1

0xe895,	// (0x0002cd6a) cam6_indi_pane_cp01

0xe89d,	// (0x0002cd72) cam6_mode_pane_cp01

0xe8a5,	// (0x0002cd7a) cam6_pano_pane

0xe8ae,	// (0x0002cd83) cam6_zoom_pane_cp01

0xe8b6,	// (0x0002cd8b) cam6_pano_image_pane

0xe8c1,	// (0x0002cd96) cam6_pano_pane_g1

0xdf04,	// (0x0002c3d9) cam6_pano_pane_g2

0xe8ca,	// (0x0002cd9f) cam6_pano_pane_g3

0xe8d3,	// (0x0002cda8) cam6_pano_pane_g4

0xccef,	// (0x0002b1c4) cam6_pano_pane_g5

0xe8dc,	// (0x0002cdb1) cam6_pano_pane_g6

0xe8e6,	// (0x0002cdbb) cam6_pano_pane_g7

0xe8ee,	// (0x0002cdc3) cam6_pano_pane_g8

0xe8f7,	// (0x0002cdcc) cam6_pano_pane_g9

0x0008,

0xfd28,	// (0x0002e1fd) cam6_pano_pane_g

0x9aa5,	// (0x00027f7a) main_browser_tag_pane

0xe622,	// (0x0002caf7) grid_navstr_albumart_pane

0xe902,	// (0x0002cdd7) cell_navstr_albumart_pane_ParamLimits

0xe902,	// (0x0002cdd7) cell_navstr_albumart_pane

0xafc1,	// (0x00029496) cell_navstr_albumart_pane_g1

0xc0c4,	// (0x0002a599) cell_navstr_albumart_pane_g2

0xc0d4,	// (0x0002a5a9) cell_navstr_albumart_pane_g3

0xc0cc,	// (0x0002a5a1) cell_navstr_albumart_pane_g4

0x0003,

0xfd3b,	// (0x0002e210) cell_navstr_albumart_pane_g

0x8f48,	// (0x0002741d) bt_list_pane_ParamLimits

0x8f48,	// (0x0002741d) bt_list_pane

0xe924,	// (0x0002cdf9) bt_list_pane_t1

0xe933,	// (0x0002ce08) bt_list_pane_t2

0x0001,

0x0b23,	// (0x0001eff8) bt_list_pane_t

0x9aa5,	// (0x00027f7a) main_cale_prevew_pane

0x8f6c,	// (0x00027441) popup_cale_preview_window_ParamLimits

0x8f6c,	// (0x00027441) popup_cale_preview_window

0xa34f,	// (0x00028824) bg_popup_preview_window_pane_cp05_ParamLimits

0xa34f,	// (0x00028824) bg_popup_preview_window_pane_cp05

0xe942,	// (0x0002ce17) list_cale_preview_pane_ParamLimits

0xe942,	// (0x0002ce17) list_cale_preview_pane

0xe94e,	// (0x0002ce23) list_double_cale_preview_pane_ParamLimits

0xe94e,	// (0x0002ce23) list_double_cale_preview_pane

0xe960,	// (0x0002ce35) list_single_cale_preview_pane_ParamLimits

0xe960,	// (0x0002ce35) list_single_cale_preview_pane

0xe974,	// (0x0002ce49) list_single_cale_preview_pane_g1

0xe97c,	// (0x0002ce51) list_single_cale_preview_pane_t1_ParamLimits

0xe97c,	// (0x0002ce51) list_single_cale_preview_pane_t1

0xe991,	// (0x0002ce66) list_double_cale_preview_pane_g1

0xe999,	// (0x0002ce6e) list_double_cale_preview_pane_t1_ParamLimits

0xe999,	// (0x0002ce6e) list_double_cale_preview_pane_t1

0xe9ae,	// (0x0002ce83) list_double_cale_preview_pane_t2_ParamLimits

0xe9ae,	// (0x0002ce83) list_double_cale_preview_pane_t2

0x0001,

0x0b28,	// (0x0001effd) list_double_cale_preview_pane_t_ParamLimits

0x0b28,	// (0x0001effd) list_double_cale_preview_pane_t

0x9aa5,	// (0x00027f7a) main_ezdial_pane

0xa34f,	// (0x00028824) main_sp_fs_email_pane_ParamLimits

0x8571,	// (0x00026a46) cmail_ddmenu_btn01_pane_ParamLimits

0x8571,	// (0x00026a46) cmail_ddmenu_btn01_pane

0x858e,	// (0x00026a63) cmail_ddmenu_btn02_pane_ParamLimits

0x858e,	// (0x00026a63) cmail_ddmenu_btn02_pane

0x85ac,	// (0x00026a81) cmail_ddmenu_btn03_pane_ParamLimits

0x85ac,	// (0x00026a81) cmail_ddmenu_btn03_pane

0x85da,	// (0x00026aaf) main_sp_fs_ctrlbar_pane_ParamLimits

0x85f0,	// (0x00026ac5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bb9,	// (0x0002708e) list_cmail_body_pane_ParamLimits

0xe569,	// (0x0002ca3e) bg_button_pane_cp12

0xe57e,	// (0x0002ca53) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe57e,	// (0x0002ca53) list_single_cmail_header_detail_pane_g3

0xe58b,	// (0x0002ca60) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe58b,	// (0x0002ca60) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcfb,	// (0x0002e1d0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcfb,	// (0x0002e1d0) list_single_cmail_header_detail_pane_t

0xe68a,	// (0x0002cb5f) phacti_term_pane_t2_ParamLimits

0xe68a,	// (0x0002cb5f) phacti_term_pane_t2

0x0001,

0x0ab5,	// (0x0001ef8a) phacti_term_pane_t_ParamLimits

0x0ab5,	// (0x0001ef8a) phacti_term_pane_t

0xe9c6,	// (0x0002ce9b) aid_size_list_single_double

0x8f83,	// (0x00027458) popup_ezdial_listscroll_window

0x8fa6,	// (0x0002747b) popup_number_entry_window_cp01

0xae60,	// (0x00029335) bg_popup_call_pane_cp09

0xe9d2,	// (0x0002cea7) ezdial_list_pane

0xe9da,	// (0x0002ceaf) scroll_pane_cp23

0xc4a0,	// (0x0002a975) bg_button_pane_cp028_ParamLimits

0xc4a0,	// (0x0002a975) bg_button_pane_cp028

0x8fb4,	// (0x00027489) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fb4,	// (0x00027489) cmail_ddmenu_btn01_pane_g1

0x8fc6,	// (0x0002749b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fc6,	// (0x0002749b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0002e219) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0002e219) cmail_ddmenu_btn01_pane_g

0xe9e2,	// (0x0002ceb7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e2,	// (0x0002ceb7) cmail_ddmenu_btn01_pane_t1

0xc2b3,	// (0x0002a788) bg_button_pane_cp029_ParamLimits

0xc2b3,	// (0x0002a788) bg_button_pane_cp029

0x8fd2,	// (0x000274a7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fd2,	// (0x000274a7) cmail_ddmenu_btn02_pane_g1

0x8fea,	// (0x000274bf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fea,	// (0x000274bf) cmail_ddmenu_btn02_pane_t1

0xd2b3,	// (0x0002b788) bg_button_pane_cp031_ParamLimits

0xd2b3,	// (0x0002b788) bg_button_pane_cp031

0x8fd2,	// (0x000274a7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fd2,	// (0x000274a7) cmail_ddmenu_btn03_pane_g1

0x8fea,	// (0x000274bf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fea,	// (0x000274bf) cmail_ddmenu_btn03_pane_t1

0x688c,	// (0x00024d61) cell_dialer2_keypad_pane_t1_ParamLimits

0x68a6,	// (0x00024d7b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x68a6,	// (0x00024d7b) cell_dialer2_keypad_pane_t1_copy1

0x7e9f,	// (0x00026374) ncimui_group_button_pane

0xa34f,	// (0x00028824) main_sp_fs_calendar_pane_ParamLimits

0x8be0,	// (0x000270b5) list_single_cmail_header_caption_pane_ParamLimits

0xe6cd,	// (0x0002cba2) aid_recal_txt_sm_pane

0x9aa5,	// (0x00027f7a) mian_recal_day_pane

0xe70f,	// (0x0002cbe4) popup_sp_fs_cale_preview_window_ParamLimits

0xe9f7,	// (0x0002cecc) list_recal_day_pane

0xea39,	// (0x0002cf0e) list_single_recal_day_pane_ParamLimits

0xea39,	// (0x0002cf0e) list_single_recal_day_pane

0xea4b,	// (0x0002cf20) list_single_recal_day_pane_g1_ParamLimits

0xea4b,	// (0x0002cf20) list_single_recal_day_pane_g1

0xea57,	// (0x0002cf2c) list_single_recal_day_pane_g2_ParamLimits

0xea57,	// (0x0002cf2c) list_single_recal_day_pane_g2

0xea67,	// (0x0002cf3c) list_single_recal_day_pane_g3_ParamLimits

0xea67,	// (0x0002cf3c) list_single_recal_day_pane_g3

0x900e,	// (0x000274e3) list_single_recal_day_pane_g4_ParamLimits

0x900e,	// (0x000274e3) list_single_recal_day_pane_g4

0xea73,	// (0x0002cf48) list_single_recal_day_pane_g5_ParamLimits

0xea73,	// (0x0002cf48) list_single_recal_day_pane_g5

0xea83,	// (0x0002cf58) list_single_recal_day_pane_g6_ParamLimits

0xea83,	// (0x0002cf58) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0002e228) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0002e228) list_single_recal_day_pane_g

0xea97,	// (0x0002cf6c) list_single_recal_day_pane_t1

0xeaa9,	// (0x0002cf7e) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x0002e233) list_single_recal_day_pane_t

0x902e,	// (0x00027503) ncimui_query_button_pane_ParamLimits

0x902e,	// (0x00027503) ncimui_query_button_pane

0x903e,	// (0x00027513) ncimui_query_button_pane_t1_ParamLimits

0x903e,	// (0x00027513) ncimui_query_button_pane_t1

0xeabb,	// (0x0002cf90) ncimui_query_button_pane_t2_ParamLimits

0xeabb,	// (0x0002cf90) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x0002e238) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x0002e238) ncimui_query_button_pane_t

0x9051,	// (0x00027526) query_button_pane_ParamLimits

0x9051,	// (0x00027526) query_button_pane

0x9aa5,	// (0x00027f7a) bg_button_pane_cp0028

0xeace,	// (0x0002cfa3) query_button_pane_t1

0x13ec,	// (0x0001f8c1) main_tport_pane_ParamLimits

0x8ac2,	// (0x00026f97) bg_popup_window_pane_cp01_ParamLimits

0x8ac2,	// (0x00026f97) bg_popup_window_pane_cp01

0x8ad0,	// (0x00026fa5) heading_pane_cp08_ParamLimits

0x8ad0,	// (0x00026fa5) heading_pane_cp08

0x8ade,	// (0x00026fb3) heading_pane_cp07_ParamLimits

0x8ade,	// (0x00026fb3) heading_pane_cp07

0x8b4d,	// (0x00027022) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0002e1bd) cell_tport_appsw_pane_g

0x4c39,	// (0x0002310e) input_candi_list_open_g1

0xa7fa,	// (0x00028ccf) list_cale_time_pane_g6_ParamLimits

0xa7fa,	// (0x00028ccf) list_cale_time_pane_g6

0x5aa2,	// (0x00023f77) aid_size_touch_calib_1_ParamLimits

0x5aa2,	// (0x00023f77) aid_size_touch_calib_1

0x5aae,	// (0x00023f83) aid_size_touch_calib_2_ParamLimits

0x5aae,	// (0x00023f83) aid_size_touch_calib_2

0x5abc,	// (0x00023f91) aid_size_touch_calib_3_ParamLimits

0x5abc,	// (0x00023f91) aid_size_touch_calib_3

0x5acc,	// (0x00023fa1) aid_size_touch_calib_4_ParamLimits

0x5acc,	// (0x00023fa1) aid_size_touch_calib_4

0x5ada,	// (0x00023faf) main_touch_calib_button_group_pane_ParamLimits

0x5ada,	// (0x00023faf) main_touch_calib_button_group_pane

0x5ae8,	// (0x00023fbd) main_touch_calib_pane_g1_ParamLimits

0x5af4,	// (0x00023fc9) main_touch_calib_pane_g2_ParamLimits

0x5b00,	// (0x00023fd5) main_touch_calib_pane_g3_ParamLimits

0x5b0c,	// (0x00023fe1) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002dc26) main_touch_calib_pane_g_ParamLimits

0x5b18,	// (0x00023fed) main_touch_calib_pane_t1_ParamLimits

0x5b31,	// (0x00024006) main_touch_calib_pane_t2_ParamLimits

0x5b4a,	// (0x0002401f) main_touch_calib_pane_t3_ParamLimits

0x5b60,	// (0x00024035) main_touch_calib_pane_t4_ParamLimits

0x5b76,	// (0x0002404b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002dc2f) main_touch_calib_pane_t_ParamLimits

0xca91,	// (0x0002af66) list_single_fp_cale_pane_g3_ParamLimits

0xca91,	// (0x0002af66) list_single_fp_cale_pane_g3

0x13d0,	// (0x0001f8a5) bg_button_pane_cp012_ParamLimits

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp03_ParamLimits

0x2316,	// (0x000207eb) cell_vitu2_function_top_pane_g1_ParamLimits

0x13d0,	// (0x0001f8a5) bg_vkb2_func_pane_cp04_ParamLimits

0x7e27,	// (0x000262fc) main_ncimui_button_group_pane_ParamLimits

0x7e27,	// (0x000262fc) main_ncimui_button_group_pane

0x7e8d,	// (0x00026362) main_ncimui_pane_t3_ParamLimits

0x7e8d,	// (0x00026362) main_ncimui_pane_t3

0xe638,	// (0x0002cb0d) phacti_button_group_pane

0xe9c6,	// (0x0002ce9b) aid_size_list_single_double_ParamLimits

0x8f83,	// (0x00027458) popup_ezdial_listscroll_window_ParamLimits

0x8fa6,	// (0x0002747b) popup_number_entry_window_cp01_ParamLimits

0x905e,	// (0x00027533) phacti_button_pane_ParamLimits

0x905e,	// (0x00027533) phacti_button_pane

0x9aa5,	// (0x00027f7a) bg_button_pane_cp14

0xeadc,	// (0x0002cfb1) phacti_button_pane_t1

0x906f,	// (0x00027544) main_touch_calib_button_pane_ParamLimits

0x906f,	// (0x00027544) main_touch_calib_button_pane

0xa201,	// (0x000286d6) bg_button_pane_cp18_ParamLimits

0xa201,	// (0x000286d6) bg_button_pane_cp18

0xeaea,	// (0x0002cfbf) main_touch_calib_button_pane_t1_ParamLimits

0xeaea,	// (0x0002cfbf) main_touch_calib_button_pane_t1

0xeb00,	// (0x0002cfd5) main_touch_calib_button_pane_t2_ParamLimits

0xeb00,	// (0x0002cfd5) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x0002e23d) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x0002e23d) main_touch_calib_button_pane_t

0x9aa5,	// (0x00027f7a) cell_ncimui_button_pane

0x9aa5,	// (0x00027f7a) bg_button_pane_cp032

0xeb1e,	// (0x0002cff3) cell_ncimui_button_pane_t1

0x1c22,	// (0x000200f7) image3_infobar_pane_ParamLimits

0x1c22,	// (0x000200f7) image3_infobar_pane

0x8206,	// (0x000266db) fs_bigclock_status_pane_ParamLimits

0x8206,	// (0x000266db) fs_bigclock_status_pane

0x8213,	// (0x000266e8) main_fs_bigclock_clock_pane_ParamLimits

0x8213,	// (0x000266e8) main_fs_bigclock_clock_pane

0x822d,	// (0x00026702) main_fs_bigclock_indi_pane_ParamLimits

0x822d,	// (0x00026702) main_fs_bigclock_indi_pane

0x8255,	// (0x0002672a) main_fs_bigclock_swipe_pane_ParamLimits

0x8255,	// (0x0002672a) main_fs_bigclock_swipe_pane

0x9aa5,	// (0x00027f7a) main_fs_clock_dumped_data

0xe011,	// (0x0002c4e6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe011,	// (0x0002c4e6) list_single_fs_bigclock_indicator_pane_g1

0xe02d,	// (0x0002c502) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe02d,	// (0x0002c502) list_single_fs_bigclock_indicator_pane_g2

0xe047,	// (0x0002c51c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe047,	// (0x0002c51c) list_single_fs_bigclock_indicator_pane_g3

0xe061,	// (0x0002c536) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe061,	// (0x0002c536) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x097e,	// (0x0001ee53) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x097e,	// (0x0001ee53) list_single_fs_bigclock_indicator_pane_g

0xe08c,	// (0x0002c561) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe08c,	// (0x0002c561) list_single_fs_bigclock_indicator_pane_t1

0xe0b4,	// (0x0002c589) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0b4,	// (0x0002c589) list_single_fs_bigclock_indicator_pane_t2

0xe0dc,	// (0x0002c5b1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0dc,	// (0x0002c5b1) list_single_fs_bigclock_indicator_pane_t3

0xe104,	// (0x0002c5d9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe104,	// (0x0002c5d9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0989,	// (0x0001ee5e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0989,	// (0x0001ee5e) list_single_fs_bigclock_indicator_pane_t

0xeb2c,	// (0x0002d001) image3_infobar_fav_pane_ParamLimits

0xeb2c,	// (0x0002d001) image3_infobar_fav_pane

0xeb3c,	// (0x0002d011) image3_infobar_loc_pane_ParamLimits

0xeb3c,	// (0x0002d011) image3_infobar_loc_pane

0xeb50,	// (0x0002d025) image3_infobar_time_pane_ParamLimits

0xeb50,	// (0x0002d025) image3_infobar_time_pane

0xc6bd,	// (0x0002ab92) image3_infobar_time_pane_g1

0xeb60,	// (0x0002d035) image3_infobar_time_pane_t1

0xc6bd,	// (0x0002ab92) image3_infobar_loc_pane_g1

0xeb6e,	// (0x0002d043) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x0002e242) image3_infobar_loc_pane_g

0xeb76,	// (0x0002d04b) image3_infobar_loc_pane_t1

0xc6bd,	// (0x0002ab92) image3_infobar_fav_pane_g1

0xeb84,	// (0x0002d059) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x0002e247) image3_infobar_fav_pane_g

0xeb8c,	// (0x0002d061) fs_bigclock_status_battery_pane

0xeb95,	// (0x0002d06a) fs_bigclock_status_signal_pane

0xeb9e,	// (0x0002d073) fs_bigclock_status_title_pane

0xeba7,	// (0x0002d07c) fs_bigclock_status_signal_pane_g1

0xebb0,	// (0x0002d085) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd77,	// (0x0002e24c) fs_bigclock_status_signal_pane_g

0xebe5,	// (0x0002d0ba) fs_bigclock_status_battery_pane_g1

0xebee,	// (0x0002d0c3) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b65,	// (0x0001f03a) fs_bigclock_status_battery_pane_g

0xebf6,	// (0x0002d0cb) fs_bigclock_status_title_pane_t1

0xc6bd,	// (0x0002ab92) main_fs_bigclock_clock_pane_g1

0xec04,	// (0x0002d0d9) main_fs_bigclock_clock_pane_g2

0xec0d,	// (0x0002d0e2) main_fs_bigclock_clock_pane_g3

0xec0d,	// (0x0002d0e2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x0002e251) main_fs_bigclock_clock_pane_g

0xec15,	// (0x0002d0ea) main_fs_bigclock_clock_pane_t1

0x907f,	// (0x00027554) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0002e25a) main_fs_bigclock_clock_pane_t

0xec23,	// (0x0002d0f8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec23,	// (0x0002d0f8) list_single_fs_bigclock_indicator_pane

0xec34,	// (0x0002d109) list_single_fs_bigclock_pane_ParamLimits

0xec34,	// (0x0002d109) list_single_fs_bigclock_pane

0xec5a,	// (0x0002d12f) main_fs_bigclock_indicator_pane_t1

0xec69,	// (0x0002d13e) list_single_fs_bigclock_pane_g1

0xec71,	// (0x0002d146) list_single_fs_bigclock_pane_t1

0xc6bd,	// (0x0002ab92) main_fs_bigclock_swipe_pane_g1

0xecb4,	// (0x0002d189) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd91,	// (0x0002e266) main_fs_bigclock_swipe_pane_g

0xecbc,	// (0x0002d191) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbc,	// (0x0002d191) main_fs_bigclock_swipe_pane_t1

0x4573,	// (0x00022a48) call_type_pane_ParamLimits

0x9aa5,	// (0x00027f7a) main_btmg_pane

0xe80c,	// (0x0002cce1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe80c,	// (0x0002cce1) list_single_cale_mrui_row_pane_g2

0x0002,

0x0af7,	// (0x0001efcc) list_single_cale_mrui_row_pane_g_ParamLimits

0x0af7,	// (0x0001efcc) list_single_cale_mrui_row_pane_g

0xea20,	// (0x0002cef5) list_recal_vselct_arw_lo_pane

0xea28,	// (0x0002cefd) list_recal_vselct_arw_up_pane

0xea30,	// (0x0002cf05) list_recal_vselct_pane

0x90d0,	// (0x000275a5) btmg_button_pane

0x90dc,	// (0x000275b1) main_btmg_pane_g1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp044

0xecd9,	// (0x0002d1ae) btmg_button_pane_t1

0xc29f,	// (0x0002a774) aid_listscroll_gen

0xa34f,	// (0x00028824) main_cntbar_detail_pane

0xe54b,	// (0x0002ca20) list_cmail_folder_pane

0xd559,	// (0x0002ba2e) sp_fs_scroll_pane_cp03_ParamLimits

0x8be0,	// (0x000270b5) list_single_fs_dyc_pane_cp01_ParamLimits

0x8be0,	// (0x000270b5) list_single_fs_dyc_pane_cp01

0xece7,	// (0x0002d1bc) aid_size_cmail_indent

0xecf0,	// (0x0002d1c5) list_single_dyc_row_pane_cp01

0x9104,	// (0x000275d9) cntbar_detail_list_pane_ParamLimits

0x9104,	// (0x000275d9) cntbar_detail_list_pane

0x913e,	// (0x00027613) main_cntbar_detail_cont_pane_ParamLimits

0x913e,	// (0x00027613) main_cntbar_detail_cont_pane

0x448a,	// (0x0002295f) scroll_pane_cp032_ParamLimits

0x448a,	// (0x0002295f) scroll_pane_cp032

0x914a,	// (0x0002761f) cntbar_detail_list_event_pane_ParamLimits

0x914a,	// (0x0002761f) cntbar_detail_list_event_pane

0x9110,	// (0x000275e5) cntbar_detail_list_shct_pane

0xa67d,	// (0x00028b52) aid_list_gen

0xecf9,	// (0x0002d1ce) aid_scroll

0xed02,	// (0x0002d1d7) aid_size_touch_scroll_bar

0x7639,	// (0x00025b0e) aid_list_double

0xed0b,	// (0x0002d1e0) aid_list_single

0x7627,	// (0x00025afc) aid_list_single_lg

0xed14,	// (0x0002d1e9) aid_list_z_g_a_sm

0xed1c,	// (0x0002d1f1) aid_list_z_g_d

0xed24,	// (0x0002d1f9) aid_txt_z_prm

0x915e,	// (0x00027633) aid_txt_z_prm_cp01

0x916c,	// (0x00027641) aid_txt_z_sec

0x917a,	// (0x0002764f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x917a,	// (0x0002764f) main_cntbar_detail_cont_pane_g1

0x9187,	// (0x0002765c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9187,	// (0x0002765c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd96,	// (0x0002e26b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd96,	// (0x0002e26b) main_cntbar_detail_cont_pane_g

0xed32,	// (0x0002d207) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x0002d215) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x0002d223) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b8e,	// (0x0001f063) main_cntbar_detail_cont_pane_t

0x9193,	// (0x00027668) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9193,	// (0x00027668) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x0002d231) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x0002d23a) cntbar_detail_list_shct_pane_g2

0x0001,

0x0b95,	// (0x0001f06a) cntbar_detail_list_shct_pane_g

0x91a7,	// (0x0002767c) cntbar_detail_list_event_pane_g1_ParamLimits

0x91a7,	// (0x0002767c) cntbar_detail_list_event_pane_g1

0x91b3,	// (0x00027688) cntbar_detail_list_event_pane_g2_ParamLimits

0x91b3,	// (0x00027688) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9b,	// (0x0002e270) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9b,	// (0x0002e270) cntbar_detail_list_event_pane_g

0x921f,	// (0x000276f4) cntbar_detail_list_event_pane_t1_ParamLimits

0x921f,	// (0x000276f4) cntbar_detail_list_event_pane_t1

0x9234,	// (0x00027709) cntbar_detail_list_event_pane_t2_ParamLimits

0x9234,	// (0x00027709) cntbar_detail_list_event_pane_t2

0x0002,

0xfda8,	// (0x0002e27d) cntbar_detail_list_event_pane_t_ParamLimits

0xfda8,	// (0x0002e27d) cntbar_detail_list_event_pane_t

0xc6bd,	// (0x0002ab92) cell_cntbar_detail_list_shct_pane_g1

0xae18,	// (0x000292ed) navi_pane_mv_g3

0xa34f,	// (0x00028824) main_cntbar_detail_pane_ParamLimits

0x9aa5,	// (0x00027f7a) main_notif_wgt_pane

0x1963,	// (0x0001fe38) aid_tch_main_mp4_pane_g4

0x1b98,	// (0x0002006d) popup_slider_window_cp02

0xea16,	// (0x0002ceeb) list_recal_day_event_pane

0x90e4,	// (0x000275b9) cntbar_detail_btn_pane_ParamLimits

0x90e4,	// (0x000275b9) cntbar_detail_btn_pane

0x90f4,	// (0x000275c9) cntbar_detail_btn_pane_cp01_ParamLimits

0x90f4,	// (0x000275c9) cntbar_detail_btn_pane_cp01

0x9110,	// (0x000275e5) cntbar_detail_list_shct_pane_ParamLimits

0x911c,	// (0x000275f1) cntbar_detail_pane_g1_ParamLimits

0x911c,	// (0x000275f1) cntbar_detail_pane_g1

0x9128,	// (0x000275fd) cntbar_detail_pane_t1_ParamLimits

0x9128,	// (0x000275fd) cntbar_detail_pane_t1

0x91bf,	// (0x00027694) cntbar_detail_list_event_pane_g3_ParamLimits

0x91bf,	// (0x00027694) cntbar_detail_list_event_pane_g3

0x91d7,	// (0x000276ac) cntbar_detail_list_event_pane_g4_ParamLimits

0x91d7,	// (0x000276ac) cntbar_detail_list_event_pane_g4

0x91ef,	// (0x000276c4) cntbar_detail_list_event_pane_g5_ParamLimits

0x91ef,	// (0x000276c4) cntbar_detail_list_event_pane_g5

0x9207,	// (0x000276dc) cntbar_detail_list_event_pane_g6_ParamLimits

0x9207,	// (0x000276dc) cntbar_detail_list_event_pane_g6

0x9249,	// (0x0002771e) cntbar_detail_list_event_pane_t3_ParamLimits

0x9249,	// (0x0002771e) cntbar_detail_list_event_pane_t3

0x925b,	// (0x00027730) popup_notif_wgt_window_ParamLimits

0x925b,	// (0x00027730) popup_notif_wgt_window

0x926b,	// (0x00027740) popup_submenu_window_cp01_ParamLimits

0x926b,	// (0x00027740) popup_submenu_window_cp01

0xae60,	// (0x00029335) bg_popup_window_pane_cp10

0xed6e,	// (0x0002d243) listscroll_notif_wgt_pane

0xed7f,	// (0x0002d254) list_notif_wgt_window

0xed88,	// (0x0002d25d) scroll_pane_cp033

0x9279,	// (0x0002774e) list_notif_wgt_row_pane_ParamLimits

0x9279,	// (0x0002774e) list_notif_wgt_row_pane

0xed91,	// (0x0002d266) aid_size_list_notif_wgt_del

0xed9e,	// (0x0002d273) list_notif_wgt_row_pane_g1

0xedaa,	// (0x0002d27f) list_notif_wgt_row_pane_g2

0xedbe,	// (0x0002d293) list_notif_wgt_row_pane_g3

0x0002,

0x0bae,	// (0x0001f083) list_notif_wgt_row_pane_g

0xedcb,	// (0x0002d2a0) list_notif_wgt_row_pane_t1

0xede1,	// (0x0002d2b6) list_notif_wgt_row_pane_t2

0xedf3,	// (0x0002d2c8) list_notif_wgt_row_pane_t3

0x0002,

0x0bb5,	// (0x0001f08a) list_notif_wgt_row_pane_t

0xd437,	// (0x0002b90c) list_recal_day_event_pane_g1

0xee05,	// (0x0002d2da) list_recal_day_event_pane_t1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp045

0xee14,	// (0x0002d2e9) cntbar_detail_btn_pane_t1

0xc2b3,	// (0x0002a788) main_callh_pane_ParamLimits

0xc2b3,	// (0x0002a788) main_callh_pane

0x9aa5,	// (0x00027f7a) main_coverflow0_pane

0x9aa5,	// (0x00027f7a) main_wgtman_pane

0x826d,	// (0x00026742) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x826d,	// (0x00026742) main_fs_bigclock_unlock_btn_pane

0x8b45,	// (0x0002701a) bg_button_pane_cp16

0x8b55,	// (0x0002702a) cell_tport_appsw_pane_g3

0x928b,	// (0x00027760) cf0_flow_pane_ParamLimits

0x928b,	// (0x00027760) cf0_flow_pane

0xee22,	// (0x0002d2f7) listscroll_cf0_pane

0xee2d,	// (0x0002d302) main_cf0_pane_g1

0x929a,	// (0x0002776f) main_cf0_pane_t1_ParamLimits

0x929a,	// (0x0002776f) main_cf0_pane_t1

0x92ae,	// (0x00027783) main_cf0_pane_t2_ParamLimits

0x92ae,	// (0x00027783) main_cf0_pane_t2

0x0001,

0xfdaf,	// (0x0002e284) main_cf0_pane_t_ParamLimits

0xfdaf,	// (0x0002e284) main_cf0_pane_t

0xee3f,	// (0x0002d314) scroll_pane_cp11

0x92c2,	// (0x00027797) cf0_flow_pane_g1

0x92ca,	// (0x0002779f) cf0_flow_pane_g2

0x0001,

0xfdb4,	// (0x0002e289) cf0_flow_pane_g

0x92d2,	// (0x000277a7) cf0_flow_pane_t1

0x9aa5,	// (0x00027f7a) main_call6_pane

0x9aa5,	// (0x00027f7a) main_calllock_pane

0x92e0,	// (0x000277b5) call6_btn_grp_pane_ParamLimits

0x92e0,	// (0x000277b5) call6_btn_grp_pane

0x92ef,	// (0x000277c4) call6_pane_g1_ParamLimits

0x92ef,	// (0x000277c4) call6_pane_g1

0x92fe,	// (0x000277d3) popup_call6_1st_window_ParamLimits

0x92fe,	// (0x000277d3) popup_call6_1st_window

0x930c,	// (0x000277e1) popup_call6_2nd_window_ParamLimits

0x930c,	// (0x000277e1) popup_call6_2nd_window

0x931a,	// (0x000277ef) cell_call6_btn_pane_ParamLimits

0x931a,	// (0x000277ef) cell_call6_btn_pane

0xae60,	// (0x00029335) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x0002d31f) popup_call6_1st_window_g1

0xee52,	// (0x0002d327) popup_call6_1st_window_g2

0xee5a,	// (0x0002d32f) popup_call6_1st_window_g3

0x0002,

0x0bcb,	// (0x0001f0a0) popup_call6_1st_window_g

0xee62,	// (0x0002d337) popup_call6_1st_window_t1

0xee71,	// (0x0002d346) popup_call6_1st_window_t2

0xee81,	// (0x0002d356) popup_call6_1st_window_t3

0x0002,

0x0bd2,	// (0x0001f0a7) popup_call6_1st_window_t

0xae60,	// (0x00029335) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x0002d31f) popup_call6_2nd_window_g1

0xee52,	// (0x0002d327) popup_call6_2nd_window_g2

0xee5a,	// (0x0002d32f) popup_call6_2nd_window_g3

0x0002,

0x0bcb,	// (0x0001f0a0) popup_call6_2nd_window_g

0xee62,	// (0x0002d337) popup_call6_2nd_window_t1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp15

0xee91,	// (0x0002d366) cell_call6_btn_pane_g1

0xee9a,	// (0x0002d36f) cell_call6_btn_pane_t1

0x9329,	// (0x000277fe) listscroll_wgtman_pane_ParamLimits

0x9329,	// (0x000277fe) listscroll_wgtman_pane

0x9345,	// (0x0002781a) wgtman_btn_pane_ParamLimits

0x9345,	// (0x0002781a) wgtman_btn_pane

0xac1d,	// (0x000290f2) aid_scroll_copy1

0xeea9,	// (0x0002d37e) list_wgtman_pane

0x937a,	// (0x0002784f) wgtman_btn_pane_g1_ParamLimits

0x937a,	// (0x0002784f) wgtman_btn_pane_g1

0x93a2,	// (0x00027877) wgtman_btn_pane_t1_ParamLimits

0x93a2,	// (0x00027877) wgtman_btn_pane_t1

0xeeb3,	// (0x0002d388) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x0002d388) wgtman_btn_pane_t2

0x0001,

0xfdb9,	// (0x0002e28e) wgtman_btn_pane_t_ParamLimits

0xfdb9,	// (0x0002e28e) wgtman_btn_pane_t

0x93d9,	// (0x000278ae) listrow_wgtman_pane_ParamLimits

0x93d9,	// (0x000278ae) listrow_wgtman_pane

0x93f5,	// (0x000278ca) listrow_wgtman_pane_g1

0x9402,	// (0x000278d7) listrow_wgtman_pane_g2

0x0001,

0xfdbe,	// (0x0002e293) listrow_wgtman_pane_g

0x9420,	// (0x000278f5) listrow_wgtman_pane_t1

0x9438,	// (0x0002790d) listrow_wgtman_pane_t2

0x0001,

0xfdc3,	// (0x0002e298) listrow_wgtman_pane_t

0x945e,	// (0x00027933) wait_bar_pane_cp09

0xeeca,	// (0x0002d39f) main_calllock_btn_pane

0xeed4,	// (0x0002d3a9) main_calllock_pane_g1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp17

0xeedf,	// (0x0002d3b4) main_calllock_btn_pane_g1

0xeee8,	// (0x0002d3bd) main_calllock_btn_pane_t1

0x9aa5,	// (0x00027f7a) main_dialer3_pane

0x9aa5,	// (0x00027f7a) main_fmrd2_pane

0xc6bd,	// (0x0002ab92) main_fs_bigclock_unlock_btn_pane_g1

0xeeff,	// (0x0002d3d4) main_fs_bigclock_unlock_btn_pane_t1

0x9470,	// (0x00027945) area_fmrd2_info_pane_ParamLimits

0x9470,	// (0x00027945) area_fmrd2_info_pane

0x947e,	// (0x00027953) area_fmrd2_visual_pane_ParamLimits

0x947e,	// (0x00027953) area_fmrd2_visual_pane

0x948c,	// (0x00027961) fmrd2_indi_pane_ParamLimits

0x948c,	// (0x00027961) fmrd2_indi_pane

0x9499,	// (0x0002796e) area_fmrd2_visual_pane_g1

0x94a1,	// (0x00027976) area_fmrd2_visual_pane_t1

0x94b1,	// (0x00027986) area_fmrd2_visual_pane_t2

0x94c1,	// (0x00027996) area_fmrd2_visual_pane_t3

0x0002,

0xfdcd,	// (0x0002e2a2) area_fmrd2_visual_pane_t

0x94d1,	// (0x000279a6) area_fmrd2_info_pane_g1

0x94d9,	// (0x000279ae) area_fmrd2_info_pane_t1

0x94e9,	// (0x000279be) area_fmrd2_info_pane_t2

0x94f9,	// (0x000279ce) area_fmrd2_info_pane_t3

0x9509,	// (0x000279de) area_fmrd2_info_pane_t4

0x0003,

0xfdd4,	// (0x0002e2a9) area_fmrd2_info_pane_t

0x9517,	// (0x000279ec) fmrd2_indi_pane_t1

0x9527,	// (0x000279fc) fmrd2_indi_pane_t2

0x9537,	// (0x00027a0c) fmrd2_indi_pane_t3

0x0002,

0xfddd,	// (0x0002e2b2) fmrd2_indi_pane_t

0xe070,	// (0x0002c545) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe070,	// (0x0002c545) list_single_fs_bigclock_indicator_pane_g5

0xe120,	// (0x0002c5f5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe120,	// (0x0002c5f5) list_single_fs_bigclock_indicator_pane_t5

0x8d5a,	// (0x0002722f) aid_cell_bcale_month_pane_ParamLimits

0x8d5a,	// (0x0002722f) aid_cell_bcale_month_pane

0x8d78,	// (0x0002724d) bcale_month_pane_ParamLimits

0x8d78,	// (0x0002724d) bcale_month_pane

0x8d96,	// (0x0002726b) bcale_preview_pane_ParamLimits

0x8d96,	// (0x0002726b) bcale_preview_pane

0xec71,	// (0x0002d146) list_single_fs_bigclock_pane_t1_ParamLimits

0xec90,	// (0x0002d165) list_single_fs_bigclock_pane_t2_ParamLimits

0xec90,	// (0x0002d165) list_single_fs_bigclock_pane_t2

0x0001,

0x0b7f,	// (0x0001f054) list_single_fs_bigclock_pane_t_ParamLimits

0x0b7f,	// (0x0001f054) list_single_fs_bigclock_pane_t

0xeef7,	// (0x0002d3cc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc8,	// (0x0002e29d) main_fs_bigclock_unlock_btn_pane_g

0x9545,	// (0x00027a1a) aid_dia3_key_size_ParamLimits

0x9545,	// (0x00027a1a) aid_dia3_key_size

0x9551,	// (0x00027a26) aid_dia3_listrow_size_ParamLimits

0x9551,	// (0x00027a26) aid_dia3_listrow_size

0x9561,	// (0x00027a36) dia3_keypad_fun_pane_ParamLimits

0x9561,	// (0x00027a36) dia3_keypad_fun_pane

0x9573,	// (0x00027a48) dia3_keypad_num_pane_ParamLimits

0x9573,	// (0x00027a48) dia3_keypad_num_pane

0x9585,	// (0x00027a5a) dia3_listscroll_pane_ParamLimits

0x9585,	// (0x00027a5a) dia3_listscroll_pane

0x9593,	// (0x00027a68) dia3_numentry_pane_ParamLimits

0x9593,	// (0x00027a68) dia3_numentry_pane

0xef0d,	// (0x0002d3e2) dia3_list_pane

0xef18,	// (0x0002d3ed) scroll_pane_cp12

0x9aa5,	// (0x00027f7a) bg_dia3_numentry_pane

0x95a1,	// (0x00027a76) dia3_numentry_pane_t1

0x95b0,	// (0x00027a85) cell_dia3_key_num_pane

0x95b8,	// (0x00027a8d) cell_dia3_key0_fun_pane_ParamLimits

0x95b8,	// (0x00027a8d) cell_dia3_key0_fun_pane

0x95c5,	// (0x00027a9a) cell_dia3_key1_fun_pane_ParamLimits

0x95c5,	// (0x00027a9a) cell_dia3_key1_fun_pane

0x95d2,	// (0x00027aa7) dia3_listrow_pane

0xdd7e,	// (0x0002c253) bg_dia3_numentry_pane_g1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp21

0xef23,	// (0x0002d3f8) cell_dia3_key_num_pane_t1

0xef31,	// (0x0002d406) cell_dia3_key_num_pane_t2

0xef40,	// (0x0002d415) cell_dia3_key_num_pane_t3

0xef4f,	// (0x0002d424) cell_dia3_key_num_pane_t4

0x0003,

0x0c04,	// (0x0001f0d9) cell_dia3_key_num_pane_t

0x9aa5,	// (0x00027f7a) bg_button_pane_cp19

0x95df,	// (0x00027ab4) cell_dia3_key0_fun_pane_g1

0x9aa5,	// (0x00027f7a) bg_button_pane_cp20

0x95e7,	// (0x00027abc) cell_dia3_key1_fun_pane_g1

0x95ef,	// (0x00027ac4) area_left_week_number_pane

0x9602,	// (0x00027ad7) area_top_day_name_pane

0x9610,	// (0x00027ae5) frame_month_view_pane

0xef5e,	// (0x0002d433) grid_month_view_pane

0x9625,	// (0x00027afa) cell_top_day_name_pane_ParamLimits

0x9625,	// (0x00027afa) cell_top_day_name_pane

0x963f,	// (0x00027b14) cell_area_left_week_number_pane_ParamLimits

0x963f,	// (0x00027b14) cell_area_left_week_number_pane

0x9662,	// (0x00027b37) cell_month_view_pane_ParamLimits

0x9662,	// (0x00027b37) cell_month_view_pane

0xef6c,	// (0x0002d441) frm_month_g1

0x968e,	// (0x00027b63) frm_month_g2

0x969f,	// (0x00027b74) frm_month_g3

0x96b0,	// (0x00027b85) frm_month_g4

0x96c1,	// (0x00027b96) frm_month_g5

0x96d4,	// (0x00027ba9) frm_month_g6

0x96e7,	// (0x00027bbc) frm_month_g7

0xef79,	// (0x0002d44e) frm_month_g8

0x96fa,	// (0x00027bcf) frm_month_g9

0x9707,	// (0x00027bdc) frm_month_g10

0x9714,	// (0x00027be9) frm_month_g11

0x9721,	// (0x00027bf6) frm_month_g12

0x972e,	// (0x00027c03) frm_month_g13

0x973b,	// (0x00027c10) frm_month_g14

0x974a,	// (0x00027c1f) frm_month_g15

0x9759,	// (0x00027c2e) frm_month_g16

0x000f,

0xfde4,	// (0x0002e2b9) frm_month_g

0xef86,	// (0x0002d45b) cell_top_day_name_pane_t1

0x9768,	// (0x00027c3d) cell_area_left_week_number_pane_g1

0x9777,	// (0x00027c4c) cell_area_left_week_number_pane_t1

0xc91d,	// (0x0002adf2) cell_month_view_pane_g1

0x978d,	// (0x00027c62) cell_month_view_pane_t1

0x9aa5,	// (0x00027f7a) main_fps_pane

0xe352,	// (0x0002c827) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe352,	// (0x0002c827) cmail_ddmenu_btn02_pane_cp1

0xe36e,	// (0x0002c843) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe36e,	// (0x0002c843) cmail_ddmenu_btn02_pane_cp2

0x8fde,	// (0x000274b3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fde,	// (0x000274b3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x0002e21e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x0002e21e) cmail_ddmenu_btn02_pane_g

0x8ffc,	// (0x000274d1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ffc,	// (0x000274d1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x0002e223) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x0002e223) cmail_ddmenu_btn02_pane_t

0x97a3,	// (0x00027c78) fps_text_pane_ParamLimits

0x97a3,	// (0x00027c78) fps_text_pane

0x97b0,	// (0x00027c85) main_fps_pane_g1_ParamLimits

0x97b0,	// (0x00027c85) main_fps_pane_g1

0x97be,	// (0x00027c93) wait_bar_pane_cp010_ParamLimits

0x97be,	// (0x00027c93) wait_bar_pane_cp010

0x97ca,	// (0x00027c9f) fps_text_pane_t1_ParamLimits

0x97ca,	// (0x00027c9f) fps_text_pane_t1

0x699f,	// (0x00024e74) cam4_image_uncrop_pane_g1

0x69a8,	// (0x00024e7d) cam4_image_uncrop_pane_g2

0x69b1,	// (0x00024e86) cam4_image_uncrop_pane_g3

0x69ba,	// (0x00024e8f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002ddc3) cam4_image_uncrop_pane_g

0x95d2,	// (0x00027aa7) dia3_listrow_pane_ParamLimits

0x9aa5,	// (0x00027f7a) main_phob2_pane

0x8b27,	// (0x00026ffc) cell_tport_appsw_pane_cp02_ParamLimits

0x8b27,	// (0x00026ffc) cell_tport_appsw_pane_cp02

0x8b36,	// (0x0002700b) cell_tport_appsw_pane_cp03_ParamLimits

0x8b36,	// (0x0002700b) cell_tport_appsw_pane_cp03

0x9aa5,	// (0x00027f7a) phob2_contact_card_pane

0x9aa5,	// (0x00027f7a) phob2_listscroll_pane

0xef99,	// (0x0002d46e) phob2_list_pane

0xefa1,	// (0x0002d476) scroll_pane_cp034

0x97e3,	// (0x00027cb8) phob2_cc_data_pane_ParamLimits

0x97e3,	// (0x00027cb8) phob2_cc_data_pane

0x97fd,	// (0x00027cd2) phob2_cc_listscroll_pane_ParamLimits

0x97fd,	// (0x00027cd2) phob2_cc_listscroll_pane

0x9817,	// (0x00027cec) list_double_large_graphic_phob2_pane_ParamLimits

0x9817,	// (0x00027cec) list_double_large_graphic_phob2_pane

0x9839,	// (0x00027d0e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9839,	// (0x00027d0e) list_double_large_graphic_phob2_pane_g1

0x984f,	// (0x00027d24) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x984f,	// (0x00027d24) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe05,	// (0x0002e2da) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe05,	// (0x0002e2da) list_double_large_graphic_phob2_pane_g

0x985b,	// (0x00027d30) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x985b,	// (0x00027d30) list_double_large_graphic_phob2_pane_t1

0x9871,	// (0x00027d46) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9871,	// (0x00027d46) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe0a,	// (0x0002e2df) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe0a,	// (0x0002e2df) list_double_large_graphic_phob2_pane_t

0x9aa5,	// (0x00027f7a) list_highlight_pane_cp024

0x9886,	// (0x00027d5b) phob2_cc_button_pane

0x988e,	// (0x00027d63) phob2_cc_data_pane_g1_ParamLimits

0x988e,	// (0x00027d63) phob2_cc_data_pane_g1

0x989a,	// (0x00027d6f) phob2_cc_data_pane_g2_ParamLimits

0x989a,	// (0x00027d6f) phob2_cc_data_pane_g2

0x0001,

0xfe0f,	// (0x0002e2e4) phob2_cc_data_pane_g_ParamLimits

0xfe0f,	// (0x0002e2e4) phob2_cc_data_pane_g

0x98a6,	// (0x00027d7b) phob2_cc_data_pane_t1_ParamLimits

0x98a6,	// (0x00027d7b) phob2_cc_data_pane_t1

0x98b8,	// (0x00027d8d) phob2_cc_data_pane_t2_ParamLimits

0x98b8,	// (0x00027d8d) phob2_cc_data_pane_t2

0x98ca,	// (0x00027d9f) phob2_cc_data_pane_t3_ParamLimits

0x98ca,	// (0x00027d9f) phob2_cc_data_pane_t3

0x0002,

0xfe14,	// (0x0002e2e9) phob2_cc_data_pane_t_ParamLimits

0xfe14,	// (0x0002e2e9) phob2_cc_data_pane_t

0xefa9,	// (0x0002d47e) phob2_cc_list_pane_ParamLimits

0xefa9,	// (0x0002d47e) phob2_cc_list_pane

0xd54d,	// (0x0002ba22) scroll_pane_cp035_ParamLimits

0xd54d,	// (0x0002ba22) scroll_pane_cp035

0xa34f,	// (0x00028824) bg_button_pane_cp033

0xefb5,	// (0x0002d48a) phob2_cc_button_pane_g1

0xefc1,	// (0x0002d496) phob2_cc_button_pane_t1

0xefd6,	// (0x0002d4ab) phob2_cc_button_pane_t2

0x0001,

0x0c44,	// (0x0001f119) phob2_cc_button_pane_t

0x98dc,	// (0x00027db1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98dc,	// (0x00027db1) list_double_large_graphic_phob2_cc_pane

0x990b,	// (0x00027de0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x990b,	// (0x00027de0) list_double_large_graphic_phob2_cc_pane_g1

0x991c,	// (0x00027df1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x991c,	// (0x00027df1) list_double_large_graphic_phob2_cc_pane_g2

0x992b,	// (0x00027e00) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x992b,	// (0x00027e00) list_double_large_graphic_phob2_cc_pane_g3

0x993a,	// (0x00027e0f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x993a,	// (0x00027e0f) list_double_large_graphic_phob2_cc_pane_g4

0x994b,	// (0x00027e20) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x994b,	// (0x00027e20) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe1b,	// (0x0002e2f0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe1b,	// (0x0002e2f0) list_double_large_graphic_phob2_cc_pane_g

0x995a,	// (0x00027e2f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x995a,	// (0x00027e2f) list_double_large_graphic_phob2_cc_pane_t1

0x9983,	// (0x00027e58) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9983,	// (0x00027e58) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe26,	// (0x0002e2fb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe26,	// (0x0002e2fb) list_double_large_graphic_phob2_cc_pane_t

0xefe8,	// (0x0002d4bd) list_highlight_pane_cp025_ParamLimits

0xefe8,	// (0x0002d4bd) list_highlight_pane_cp025

0xa34f,	// (0x00028824) bg_button_pane_cp033_ParamLimits

0xefb5,	// (0x0002d48a) phob2_cc_button_pane_g1_ParamLimits

0xefc1,	// (0x0002d496) phob2_cc_button_pane_t1_ParamLimits

0xefd6,	// (0x0002d4ab) phob2_cc_button_pane_t2_ParamLimits

0x0c44,	// (0x0001f119) phob2_cc_button_pane_t_ParamLimits

0x2595,	// (0x00020a6a) popup_wgtman_window

0xd313,	// (0x0002b7e8) scroll_pane_cp038

0x9362,	// (0x00027837) wgtman_btn_pane_cp_01_ParamLimits

0x9362,	// (0x00027837) wgtman_btn_pane_cp_01

0xeff6,	// (0x0002d4cb) wgtman_content_pane

0xefff,	// (0x0002d4d4) wgtman_heading_pane

0x9aa5,	// (0x00027f7a) bg_heading_pane_cp02

0xf008,	// (0x0002d4dd) wgtman_heading_pane_g1

0xf010,	// (0x0002d4e5) wgtman_heading_pane_t1

0xf01e,	// (0x0002d4f3) scroll_pane_cp036

0xf026,	// (0x0002d4fb) wgtman_list_pane

0xebb8,	// (0x0002d08d) wgtman_list_pane_t1_ParamLimits

0xebb8,	// (0x0002d08d) wgtman_list_pane_t1

0x1d7e,	// (0x00020253) cam4_grid_pane

0x7184,	// (0x00025659) bg_button_pane_cp015_ParamLimits

0x7196,	// (0x0002566b) bg_button_pane_cp016_ParamLimits

0x71a9,	// (0x0002567e) bg_button_pane_cp017_ParamLimits

0x71ff,	// (0x000256d4) popup_vitu2_query_window_g3_ParamLimits

0x71ff,	// (0x000256d4) popup_vitu2_query_window_g3

0x72ba,	// (0x0002578f) popup_vitu2_query_window_t6_ParamLimits

0x72ba,	// (0x0002578f) popup_vitu2_query_window_t6

0x72e5,	// (0x000257ba) popup_vitu2_query_window_t7_ParamLimits

0x72e5,	// (0x000257ba) popup_vitu2_query_window_t7

0xebd3,	// (0x0002d0a8) cam4_grid_pane_g1

0xebdc,	// (0x0002d0b1) cam4_grid_pane_g2

0xf02e,	// (0x0002d503) cam4_grid_pane_g3

0xf037,	// (0x0002d50c) cam4_grid_pane_g4

0x0003,

0xfe2b,	// (0x0002e300) cam4_grid_pane_g

0x31b4,	// (0x00021689) aid_placing_vt_slider_lsc_ParamLimits

0x34f4,	// (0x000219c9) vidtel_button_pane_ParamLimits

0x34f4,	// (0x000219c9) vidtel_button_pane

0xf042,	// (0x0002d517) bg_button_pane_cp034

0x99ac,	// (0x00027e81) vidtel_button_pane_g1

0xf04c,	// (0x0002d521) vidtel_button_pane_t1

0xd415,	// (0x0002b8ea) aid_size_vtel_slider_touch

0xd54d,	// (0x0002ba22) scroll_pane_cp039

0xddbc,	// (0x0002c291) ncim_query_button_pane_cp01_ParamLimits

0xdddb,	// (0x0002c2b0) ncimui_query_pane_g1_ParamLimits

0xa34f,	// (0x00028824) input_focus_pane_cp012_ParamLimits

0xde00,	// (0x0002c2d5) ncim_query_entry_pane_t1_ParamLimits

0xd54d,	// (0x0002ba22) scroll_pane_cp039_ParamLimits

0xad03,	// (0x000291d8) navi_pane_bcale_mc_g1

0xad0b,	// (0x000291e0) navi_pane_bcale_mc_t1

0xe3b7,	// (0x0002c88c) main_sp_fs_email_pane_g1

0xe3c3,	// (0x0002c898) main_sp_fs_email_pane_g2

0x0001,

0x09ef,	// (0x0001eec4) main_sp_fs_email_pane_g

0xe818,	// (0x0002cced) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe818,	// (0x0002cced) list_single_cale_mrui_row_pane_g3

0x9024,	// (0x000274f9) list_single_recal_day_pane_g5_event_pane

0xea8f,	// (0x0002cf64) list_single_recal_day_pane_g7

0xf05a,	// (0x0002d52f) list_recal_day_event_pane_cp01

0xf063,	// (0x0002d538) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0002d540) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0002d548) list_recal_vselct_pane_cp01

0xd437,	// (0x0002b90c) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0002d552) list_recal_day_event_pane_cp01_t1

0xea97,	// (0x0002cf6c) list_single_recal_day_pane_t1_ParamLimits

0xeaa9,	// (0x0002cf7e) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x0002e233) list_single_recal_day_pane_t_ParamLimits

0xa11d,	// (0x000285f2) bg_notes_pane_ParamLimits

0xa1df,	// (0x000286b4) list_notes_pane_ParamLimits

0x2809,	// (0x00020cde) scroll_pane_cp06_ParamLimits

0xa201,	// (0x000286d6) main_notes_pane_ParamLimits

0x9aa5,	// (0x00027f7a) main_welc_pane

0x99b4,	// (0x00027e89) main_welc_body_pane_ParamLimits

0x99b4,	// (0x00027e89) main_welc_body_pane

0x99cd,	// (0x00027ea2) main_welc_opti_pane_ParamLimits

0x99cd,	// (0x00027ea2) main_welc_opti_pane

0x9a02,	// (0x00027ed7) main_welc_pane_t1_ParamLimits

0x9a02,	// (0x00027ed7) main_welc_pane_t1

0x9a20,	// (0x00027ef5) main_welc_body_row_pane_ParamLimits

0x9a20,	// (0x00027ef5) main_welc_body_row_pane

0xd2b3,	// (0x0002b788) main_welc_opti_row_pane_ParamLimits

0xd2b3,	// (0x0002b788) main_welc_opti_row_pane

0xf08b,	// (0x0002d560) main_welc_opti_row_pane_g1

0x9a4c,	// (0x00027f21) main_welc_opti_row_pane_t1

0xf093,	// (0x0002d568) main_welc_body_row_pane_t1

0xed77,	// (0x0002d24c) popup_notif_wgt_heading_pane

0xed91,	// (0x0002d266) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x0002d273) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x0002d27f) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x0002d293) list_notif_wgt_row_pane_g3_ParamLimits

0x0bae,	// (0x0001f083) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x0002d2a0) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x0002d2b6) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x0002d2c8) list_notif_wgt_row_pane_t3_ParamLimits

0x0bb5,	// (0x0001f08a) list_notif_wgt_row_pane_t_ParamLimits

0x93f5,	// (0x000278ca) listrow_wgtman_pane_g1_ParamLimits

0x9402,	// (0x000278d7) listrow_wgtman_pane_g2_ParamLimits

0xfdbe,	// (0x0002e293) listrow_wgtman_pane_g_ParamLimits

0x9420,	// (0x000278f5) listrow_wgtman_pane_t1_ParamLimits

0x9438,	// (0x0002790d) listrow_wgtman_pane_t2_ParamLimits

0xfdc3,	// (0x0002e298) listrow_wgtman_pane_t_ParamLimits

0x945e,	// (0x00027933) wait_bar_pane_cp09_ParamLimits

0x9aa5,	// (0x00027f7a) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0002d577) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0002d57f) popup_notif_wgt_heading_pane_t1

0x9aa5,	// (0x00027f7a) main_vids_pane

0x9aa5,	// (0x00027f7a) vids_listscroll_pane

0x9a5b,	// (0x00027f30) scroll_pane_cp040

0x9aa5,	// (0x00027f7a) vids_list_pane

0x9a66,	// (0x00027f3b) vids_list_double_pane_ParamLimits

0x9a66,	// (0x00027f3b) vids_list_double_pane

0x9a7e,	// (0x00027f53) vids_list_double_pane_g1

0x9a87,	// (0x00027f5c) vids_list_double_pane_t1

0x9a97,	// (0x00027f6c) vids_list_double_pane_t2

0x0001,

0xfe39,	// (0x0002e30e) vids_list_double_pane_t

0x13d0,	// (0x0001f8a5) main_ncimui_pane_ParamLimits

0x7e3f,	// (0x00026314) main_ncimui_pane_g1_ParamLimits

0x7e4b,	// (0x00026320) main_ncimui_pane_g2_ParamLimits

0x7e4b,	// (0x00026320) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002e09d) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002e09d) main_ncimui_pane_g

0x99e8,	// (0x00027ebd) main_welc_pane_g1_ParamLimits

0x99e8,	// (0x00027ebd) main_welc_pane_g1

0x99f4,	// (0x00027ec9) main_welc_pane_g2_ParamLimits

0x99f4,	// (0x00027ec9) main_welc_pane_g2

0x0001,

0xfe34,	// (0x0002e309) main_welc_pane_g_ParamLimits

0xfe34,	// (0x0002e309) main_welc_pane_g

0xa11d,	// (0x000285f2) listscroll_mce_pane_ParamLimits

0xae58,	// (0x0002932d) wait_bar_pane_cp10

0xc2a7,	// (0x0002a77c) main_cale_day_pane_ParamLimits

0xc2a7,	// (0x0002a77c) main_cale_week_pane_ParamLimits

0xa11d,	// (0x000285f2) main_messa_pane_ParamLimits

0x631b,	// (0x000247f0) main_clock2_btn_pane_ParamLimits

0x631b,	// (0x000247f0) main_clock2_btn_pane

0xcb19,	// (0x0002afee) main_clock2_btn_pane_cp01_ParamLimits

0xcb19,	// (0x0002afee) main_clock2_btn_pane_cp01

0xe7a4,	// (0x0002cc79) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x0002d30c) main_cf0_pane_g2

0x0001,

0x0bbc,	// (0x0001f091) main_cf0_pane_g

0x95ef,	// (0x00027ac4) area_left_week_number_pane_ParamLimits

0x9602,	// (0x00027ad7) area_top_day_name_pane_ParamLimits

0x9610,	// (0x00027ae5) frame_month_view_pane_ParamLimits

0xef5e,	// (0x0002d433) grid_month_view_pane_ParamLimits

0xef6c,	// (0x0002d441) frm_month_g1_ParamLimits

0x968e,	// (0x00027b63) frm_month_g2_ParamLimits

0x969f,	// (0x00027b74) frm_month_g3_ParamLimits

0x96b0,	// (0x00027b85) frm_month_g4_ParamLimits

0x96c1,	// (0x00027b96) frm_month_g5_ParamLimits

0x96d4,	// (0x00027ba9) frm_month_g6_ParamLimits

0x96e7,	// (0x00027bbc) frm_month_g7_ParamLimits

0xef79,	// (0x0002d44e) frm_month_g8_ParamLimits

0x96fa,	// (0x00027bcf) frm_month_g9_ParamLimits

0x9707,	// (0x00027bdc) frm_month_g10_ParamLimits

0x9714,	// (0x00027be9) frm_month_g11_ParamLimits

0x9721,	// (0x00027bf6) frm_month_g12_ParamLimits

0x972e,	// (0x00027c03) frm_month_g13_ParamLimits

0x973b,	// (0x00027c10) frm_month_g14_ParamLimits

0x974a,	// (0x00027c1f) frm_month_g15_ParamLimits

0x9759,	// (0x00027c2e) frm_month_g16_ParamLimits

0xfde4,	// (0x0002e2b9) frm_month_g_ParamLimits

0xef86,	// (0x0002d45b) cell_top_day_name_pane_t1_ParamLimits

0x9768,	// (0x00027c3d) cell_area_left_week_number_pane_g1_ParamLimits

0x9777,	// (0x00027c4c) cell_area_left_week_number_pane_t1_ParamLimits

0xc91d,	// (0x0002adf2) cell_month_view_pane_g1_ParamLimits

0x978d,	// (0x00027c62) cell_month_view_pane_t1_ParamLimits

0xa115,	// (0x000285ea) main_clock2_btn_pane_g1

0xf0b8,	// (0x0002d58d) main_clock2_btn_pane_t1

0xa34f,	// (0x00028824) listscroll_cmail_pane_ParamLimits

0xe3b7,	// (0x0002c88c) main_sp_fs_email_pane_g1_ParamLimits

0xe3c3,	// (0x0002c898) main_sp_fs_email_pane_g2_ParamLimits

0x09ef,	// (0x0001eec4) main_sp_fs_email_pane_g_ParamLimits

0xe9f7,	// (0x0002cecc) list_recal_day_pane_ParamLimits

0xea08,	// (0x0002cedd) mian_recal_day_pane_t1

0x87fe,	// (0x00026cd3) list_single_dyc_row_text_pane_t4_ParamLimits

0x87fe,	// (0x00026cd3) list_single_dyc_row_text_pane_t4

0x8835,	// (0x00026d0a) list_single_dyc_row_text_pane_t5_ParamLimits

0x8835,	// (0x00026d0a) list_single_dyc_row_text_pane_t5

0xe487,	// (0x0002c95c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe487,	// (0x0002c95c) list_single_dyc_row_text_pane_t6

0xa7d9,	// (0x00028cae) aid_mgn_list_cale_time_pane

0x13d0,	// (0x0001f8a5) main_gallery2_pane_ParamLimits

0xcb2f,	// (0x0002b004) main_clock2_pane_cp01_t1

0xcb3d,	// (0x0002b012) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002dc99) main_clock2_pane_cp01_t

0x2b37,	// (0x0002100c) cale_week_scroll_pane_g16_ParamLimits

0x2b37,	// (0x0002100c) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
