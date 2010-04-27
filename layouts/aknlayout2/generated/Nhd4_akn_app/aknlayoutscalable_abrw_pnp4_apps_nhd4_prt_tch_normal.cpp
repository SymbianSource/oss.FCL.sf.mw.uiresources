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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001e4e5 };

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
0x24f0,	// (0x000209d5) Screen

0x24fc,	// (0x000209e1) application_window

0x2508,	// (0x000209ed) area_bottom_pane_ParamLimits

0x2508,	// (0x000209ed) area_bottom_pane

0x0ce4,	// (0x0001f1c9) area_top_pane_ParamLimits

0x0ce4,	// (0x0001f1c9) area_top_pane

0x0d48,	// (0x0001f22d) call_video_uplink_pane_ParamLimits

0x0d48,	// (0x0001f22d) call_video_uplink_pane

0x0d87,	// (0x0001f26c) main_pane_ParamLimits

0x0d87,	// (0x0001f26c) main_pane

0xc29e,	// (0x0002a783) context_pane

0x545e,	// (0x00023943) navi_pane

0x5484,	// (0x00023969) popup_cale_events_window_ParamLimits

0x5484,	// (0x00023969) popup_cale_events_window

0xc2b1,	// (0x0002a796) popup_mup_playback_window

0x549c,	// (0x00023981) signal_pane

0xa1df,	// (0x000286c4) main_browser_pane

0xa3bb,	// (0x000288a0) main_burst_pane

0x1343,	// (0x0001f828) main_calc_pane

0xc284,	// (0x0002a769) main_cale_day_pane

0x2917,	// (0x00020dfc) main_cale_month_pane

0xc284,	// (0x0002a769) main_cale_week_pane

0xa3bb,	// (0x000288a0) main_call_pane

0x9ea0,	// (0x00028385) main_call_poc_pane

0xa3bb,	// (0x000288a0) main_camera_pane

0xa3bb,	// (0x000288a0) main_chi_dic_pane

0xabd0,	// (0x000290b5) main_clock_pane

0x9ea0,	// (0x00028385) main_fmradio_pane

0xa3bb,	// (0x000288a0) main_graph_messa_pane

0x9ea0,	// (0x00028385) main_help_pane

0xa1df,	// (0x000286c4) main_im_pane

0xa0fb,	// (0x000285e0) main_image_pane_ParamLimits

0xa0fb,	// (0x000285e0) main_image_pane

0x9ea0,	// (0x00028385) main_location2_pane

0xa3bb,	// (0x000288a0) main_location_pane

0xa0fb,	// (0x000285e0) main_messa_pane

0x9ea0,	// (0x00028385) main_mp2_pane

0xa3bb,	// (0x000288a0) main_mp_pane

0x9ea0,	// (0x00028385) main_msg_pane

0x9ea0,	// (0x00028385) main_mup_eq_pane

0x9ea0,	// (0x00028385) main_mup_pane

0xa1df,	// (0x000286c4) main_notes_pane

0x9ea0,	// (0x00028385) main_pec_pane

0x9ea0,	// (0x00028385) main_phob_pane

0x9ea0,	// (0x00028385) main_pinb_pane

0x9ea0,	// (0x00028385) main_postcard_pane

0x9ea0,	// (0x00028385) main_qdial_pane

0xa3bb,	// (0x000288a0) main_skin_pane

0x9ea0,	// (0x00028385) main_smil2_pane

0xa3bb,	// (0x000288a0) main_smil_pane

0xa3bb,	// (0x000288a0) main_video_pane

0xa3bb,	// (0x000288a0) main_video_tele_pane

0xa0fb,	// (0x000285e0) main_viewer_pane_ParamLimits

0xa0fb,	// (0x000285e0) main_viewer_pane

0xa3bb,	// (0x000288a0) main_vorec_pane

0x138f,	// (0x0001f874) popup_blid_sat_info_window_ParamLimits

0x138f,	// (0x0001f874) popup_blid_sat_info_window

0x13af,	// (0x0001f894) popup_dyc_status_message_window_ParamLimits

0x13af,	// (0x0001f894) popup_dyc_status_message_window

0x13bd,	// (0x0001f8a2) popup_grid_large_graphic_window_ParamLimits

0x13bd,	// (0x0001f8a2) popup_grid_large_graphic_window

0x144c,	// (0x0001f931) popup_loc_request_window_ParamLimits

0x144c,	// (0x0001f931) popup_loc_request_window

0x1493,	// (0x0001f978) popup_wml_address_window_ParamLimits

0x1493,	// (0x0001f978) popup_wml_address_window

0x5340,	// (0x00023825) call_muted_g1

0x4ffe,	// (0x000234e3) popup_call_audio_conf_window_ParamLimits

0x4ffe,	// (0x000234e3) popup_call_audio_conf_window

0x5350,	// (0x00023835) popup_call_audio_first_window_ParamLimits

0x5350,	// (0x00023835) popup_call_audio_first_window

0x5390,	// (0x00023875) popup_call_audio_in_window_ParamLimits

0x5390,	// (0x00023875) popup_call_audio_in_window

0x53b4,	// (0x00023899) popup_call_audio_out_window_ParamLimits

0x53b4,	// (0x00023899) popup_call_audio_out_window

0x53d6,	// (0x000238bb) popup_call_audio_second_window_ParamLimits

0x53d6,	// (0x000238bb) popup_call_audio_second_window

0x5406,	// (0x000238eb) popup_call_audio_wait_window_ParamLimits

0x5406,	// (0x000238eb) popup_call_audio_wait_window

0x5427,	// (0x0002390c) popup_number_entry_window_ParamLimits

0x5427,	// (0x0002390c) popup_number_entry_window

0x9a8d,	// (0x00027f72) bg_popup_call_pane_cp05_ParamLimits

0x9a8d,	// (0x00027f72) bg_popup_call_pane_cp05

0x9aad,	// (0x00027f92) popup_number_entry_window_t1

0x9ac0,	// (0x00027fa5) popup_number_entry_window_t2

0x9ad2,	// (0x00027fb7) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002d5af) popup_number_entry_window_t

0x9ae4,	// (0x00027fc9) text_title_cp2

0x9af7,	// (0x00027fdc) bg_popup_call_pane_cp_ParamLimits

0x9af7,	// (0x00027fdc) bg_popup_call_pane_cp

0x9b05,	// (0x00027fea) call_thumbnail_pane

0x9b0d,	// (0x00027ff2) popup_call_audio_in_window_g1_ParamLimits

0x9b0d,	// (0x00027ff2) popup_call_audio_in_window_g1

0x9b19,	// (0x00027ffe) popup_call_audio_in_window_g2_ParamLimits

0x9b19,	// (0x00027ffe) popup_call_audio_in_window_g2

0x9b25,	// (0x0002800a) popup_call_audio_in_window_g3_ParamLimits

0x9b25,	// (0x0002800a) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002d5b8) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002d5b8) popup_call_audio_in_window_g

0x9b31,	// (0x00028016) popup_call_audio_in_window_t1_ParamLimits

0x9b31,	// (0x00028016) popup_call_audio_in_window_t1

0x9b4d,	// (0x00028032) popup_call_audio_in_window_t2_ParamLimits

0x9b4d,	// (0x00028032) popup_call_audio_in_window_t2

0x9b69,	// (0x0002804e) popup_call_audio_in_window_t3_ParamLimits

0x9b69,	// (0x0002804e) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002d5bf) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002d5bf) popup_call_audio_in_window_t

0x9af7,	// (0x00027fdc) bg_popup_call_pane_cp01_ParamLimits

0x9af7,	// (0x00027fdc) bg_popup_call_pane_cp01

0x9b05,	// (0x00027fea) call_thumbnail_pane_cp02

0x9b7c,	// (0x00028061) call_type_pane_cp022

0x9b84,	// (0x00028069) popup_call_audio_out_window_g1_ParamLimits

0x9b84,	// (0x00028069) popup_call_audio_out_window_g1

0x9b96,	// (0x0002807b) popup_call_audio_out_window_g2_ParamLimits

0x9b96,	// (0x0002807b) popup_call_audio_out_window_g2

0x9ba2,	// (0x00028087) popup_call_audio_out_window_g3_ParamLimits

0x9ba2,	// (0x00028087) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002d5c6) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002d5c6) popup_call_audio_out_window_g

0x9bb4,	// (0x00028099) popup_call_audio_out_window_t1_ParamLimits

0x9bb4,	// (0x00028099) popup_call_audio_out_window_t1

0x9bcc,	// (0x000280b1) popup_call_audio_out_window_t2_ParamLimits

0x9bcc,	// (0x000280b1) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002d5cd) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002d5cd) popup_call_audio_out_window_t

0x9be1,	// (0x000280c6) bg_popup_call_pane_ParamLimits

0x9be1,	// (0x000280c6) bg_popup_call_pane

0x2585,	// (0x00020a6a) call_thumbnail_pane_cp_ParamLimits

0x2585,	// (0x00020a6a) call_thumbnail_pane_cp

0x9c65,	// (0x0002814a) call_type_pane_cp01_ParamLimits

0x9c65,	// (0x0002814a) call_type_pane_cp01

0x9ca9,	// (0x0002818e) popup_call_audio_first_window_g1_ParamLimits

0x9ca9,	// (0x0002818e) popup_call_audio_first_window_g1

0x9cf5,	// (0x000281da) popup_call_audio_first_window_g2_ParamLimits

0x9cf5,	// (0x000281da) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002d5d2) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002d5d2) popup_call_audio_first_window_g

0x9d39,	// (0x0002821e) popup_call_audio_first_window_t1_ParamLimits

0x9d39,	// (0x0002821e) popup_call_audio_first_window_t1

0x9de5,	// (0x000282ca) popup_call_audio_first_window_t4_ParamLimits

0x9de5,	// (0x000282ca) popup_call_audio_first_window_t4

0x9e71,	// (0x00028356) popup_call_audio_first_window_t5_ParamLimits

0x9e71,	// (0x00028356) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002d5d7) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002d5d7) popup_call_audio_first_window_t

0x9ea0,	// (0x00028385) bg_popup_call_pane_cp02

0x9eaa,	// (0x0002838f) call_type_pane_cp023

0x9eb2,	// (0x00028397) popup_call_audio_wait_window_g1

0x9eba,	// (0x0002839f) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d5de) popup_call_audio_wait_window_g

0x9ec2,	// (0x000283a7) popup_call_audio_wait_window_t3

0x9ed0,	// (0x000283b5) bg_popup_call_pane_cp03_ParamLimits

0x9ed0,	// (0x000283b5) bg_popup_call_pane_cp03

0x9f30,	// (0x00028415) call_thumbnail_pane_cp011_ParamLimits

0x9f30,	// (0x00028415) call_thumbnail_pane_cp011

0x9f3c,	// (0x00028421) call_type_pane_cp034_ParamLimits

0x9f3c,	// (0x00028421) call_type_pane_cp034

0x9f78,	// (0x0002845d) popup_call_audio_second_window_g1_ParamLimits

0x9f78,	// (0x0002845d) popup_call_audio_second_window_g1

0x9fb4,	// (0x00028499) popup_call_audio_second_window_g2_ParamLimits

0x9fb4,	// (0x00028499) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002d5e3) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002d5e3) popup_call_audio_second_window_g

0x9ff0,	// (0x000284d5) popup_call_audio_second_window_t1_ParamLimits

0x9ff0,	// (0x000284d5) popup_call_audio_second_window_t1

0xa071,	// (0x00028556) popup_call_audio_second_window_t2_ParamLimits

0xa071,	// (0x00028556) popup_call_audio_second_window_t2

0xa0a7,	// (0x0002858c) popup_call_audio_second_window_t3_ParamLimits

0xa0a7,	// (0x0002858c) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002d5e8) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002d5e8) popup_call_audio_second_window_t

0x9ea0,	// (0x00028385) bg_popup_call_pane_cp04

0xa0dd,	// (0x000285c2) list_conf_pane

0xa0e5,	// (0x000285ca) popup_call_audio_conf_window_t1

0xa0f3,	// (0x000285d8) call_thumbnail_pane_g1

0xa0fb,	// (0x000285e0) bg_pinb_pane_ParamLimits

0xa0fb,	// (0x000285e0) bg_pinb_pane

0xa109,	// (0x000285ee) find_pinb_pane

0xa112,	// (0x000285f7) listscroll_pinb_pane_ParamLimits

0xa112,	// (0x000285f7) listscroll_pinb_pane

0xa121,	// (0x00028606) pinb_bg_pane_g1

0x25a9,	// (0x00020a8e) pinb_bg_pane_g2

0x25b5,	// (0x00020a9a) pinb_bg_pane_g3

0x25c1,	// (0x00020aa6) pinb_bg_pane_g4

0x25cd,	// (0x00020ab2) pinb_bg_pane_g5

0x25d9,	// (0x00020abe) pinb_bg_pane_g6

0x25e4,	// (0x00020ac9) pinb_bg_pane_g7

0x25ef,	// (0x00020ad4) pinb_bg_pane_g8

0x25fa,	// (0x00020adf) pinb_bg_pane_g9

0x2604,	// (0x00020ae9) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002d5ef) pinb_bg_pane_g

0x2621,	// (0x00020b06) grid_pinb_pane

0x262c,	// (0x00020b11) list_pinb_pane

0x2637,	// (0x00020b1c) scroll_pane_cp01_ParamLimits

0x2637,	// (0x00020b1c) scroll_pane_cp01

0xa12b,	// (0x00028610) find_pinb_pane_g1_ParamLimits

0xa12b,	// (0x00028610) find_pinb_pane_g1

0xa143,	// (0x00028628) find_pinb_pane_t1

0xa155,	// (0x0002863a) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002d609) find_pinb_pane_t

0xa16a,	// (0x0002864f) input_focus_pane_cp01_ParamLimits

0xa16a,	// (0x0002864f) input_focus_pane_cp01

0x2649,	// (0x00020b2e) cell_pinb_pane_ParamLimits

0x2649,	// (0x00020b2e) cell_pinb_pane

0xa176,	// (0x0002865b) cell_pinb_pane_g1_ParamLimits

0xa176,	// (0x0002865b) cell_pinb_pane_g1

0xa189,	// (0x0002866e) cell_pinb_pane_g2_ParamLimits

0xa189,	// (0x0002866e) cell_pinb_pane_g2

0xa195,	// (0x0002867a) cell_pinb_pane_g3_ParamLimits

0xa195,	// (0x0002867a) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002d60e) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002d60e) cell_pinb_pane_g

0x9ea0,	// (0x00028385) grid_highlight_pane_cp01

0x2678,	// (0x00020b5d) list_pinb_item_pane_ParamLimits

0x2678,	// (0x00020b5d) list_pinb_item_pane

0x9ea0,	// (0x00028385) list_highlight_pane_cp02

0x26a2,	// (0x00020b87) list_pinb_item_pane_g1_ParamLimits

0x26a2,	// (0x00020b87) list_pinb_item_pane_g1

0x26af,	// (0x00020b94) list_pinb_item_pane_g2_ParamLimits

0x26af,	// (0x00020b94) list_pinb_item_pane_g2

0x26bb,	// (0x00020ba0) list_pinb_item_pane_g3_ParamLimits

0x26bb,	// (0x00020ba0) list_pinb_item_pane_g3

0x26cc,	// (0x00020bb1) list_pinb_item_pane_g4_ParamLimits

0x26cc,	// (0x00020bb1) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002d615) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002d615) list_pinb_item_pane_g

0x26d8,	// (0x00020bbd) list_pinb_item_pane_t1_ParamLimits

0x26d8,	// (0x00020bbd) list_pinb_item_pane_t1

0x0f75,	// (0x0001f45a) calc_display_pane

0x0f93,	// (0x0001f478) calc_paper_pane

0x0faf,	// (0x0001f494) grid_calc_pane

0x9ea0,	// (0x00028385) bg_list_pane_cp01

0x26ef,	// (0x00020bd4) clock_g1

0x26f7,	// (0x00020bdc) clock_g2

0x0001,

0xf139,	// (0x0002d61e) clock_g

0x2701,	// (0x00020be6) clock_t1_ParamLimits

0x2701,	// (0x00020be6) clock_t1

0x2716,	// (0x00020bfb) clock_t2_ParamLimits

0x2716,	// (0x00020bfb) clock_t2

0x2728,	// (0x00020c0d) clock_t3_ParamLimits

0x2728,	// (0x00020c0d) clock_t3

0x273a,	// (0x00020c1f) clock_t4_ParamLimits

0x273a,	// (0x00020c1f) clock_t4

0x274c,	// (0x00020c31) clock_t5_ParamLimits

0x274c,	// (0x00020c31) clock_t5

0x2761,	// (0x00020c46) clock_t6_ParamLimits

0x2761,	// (0x00020c46) clock_t6

0x2773,	// (0x00020c58) clock_t7_ParamLimits

0x2773,	// (0x00020c58) clock_t7

0x2785,	// (0x00020c6a) clock_t8_ParamLimits

0x2785,	// (0x00020c6a) clock_t8

0x279b,	// (0x00020c80) clock_t9_ParamLimits

0x279b,	// (0x00020c80) clock_t9

0x0008,

0xf13e,	// (0x0002d623) clock_t_ParamLimits

0xf13e,	// (0x0002d623) clock_t

0xa1a1,	// (0x00028686) popup_clock_analogue_window_cp02

0xa1a1,	// (0x00028686) popup_clock_digital_window_cp01

0xa1a9,	// (0x0002868e) listscroll_help_pane

0x9ea0,	// (0x00028385) phob_pre_status_pane

0xa1b3,	// (0x00028698) grid_qdial_pane

0xa0fb,	// (0x000285e0) listscroll_mce_pane

0xa0fb,	// (0x000285e0) bg_notes_pane

0xa1bd,	// (0x000286a2) list_notes_pane

0x27b1,	// (0x00020c96) scroll_pane_cp06

0xa1cb,	// (0x000286b0) bg_calc_paper_pane

0x0fdb,	// (0x0001f4c0) list_calc_pane

0xa1df,	// (0x000286c4) bg_calc_display_pane

0x0ff5,	// (0x0001f4da) calc_display_pane_t1

0x100a,	// (0x0001f4ef) calc_display_pane_t2

0x101f,	// (0x0001f504) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002d636) calc_display_pane_t

0x1031,	// (0x0001f516) cell_calc_pane_ParamLimits

0x1031,	// (0x0001f516) cell_calc_pane

0xa1eb,	// (0x000286d0) bg_calc_paper_pane_g1

0xa1f7,	// (0x000286dc) bg_calc_paper_pane_g2

0xa203,	// (0x000286e8) bg_calc_paper_pane_g3

0xa20f,	// (0x000286f4) bg_calc_paper_pane_g4

0xa21b,	// (0x00028700) bg_calc_paper_pane_g5

0x27c0,	// (0x00020ca5) bg_calc_paper_pane_g6

0x27d1,	// (0x00020cb6) bg_calc_paper_pane_g7

0x27e2,	// (0x00020cc7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002d63d) bg_calc_paper_pane_g

0x27f3,	// (0x00020cd8) calc_bg_paper_pane_g9

0x2804,	// (0x00020ce9) list_calc_item_pane_ParamLimits

0x2804,	// (0x00020ce9) list_calc_item_pane

0xa227,	// (0x0002870c) list_calc_item_pane_g1

0x105e,	// (0x0001f543) list_calc_item_pane_t1_ParamLimits

0x105e,	// (0x0001f543) list_calc_item_pane_t1

0x1070,	// (0x0001f555) list_calc_item_pane_t2_ParamLimits

0x1070,	// (0x0001f555) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002d64e) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002d64e) list_calc_item_pane_t

0xa234,	// (0x00028719) cell_calc_pane_g1

0xa23e,	// (0x00028723) grid_highlight_pane_cp02

0xa260,	// (0x00028745) bg_calc_display_pane_g1

0x10a0,	// (0x0001f585) bg_calc_display_pane_g2

0xa269,	// (0x0002874e) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002d658) bg_calc_display_pane_g

0x10aa,	// (0x0001f58f) cell_qdial_pane_ParamLimits

0x10aa,	// (0x0001f58f) cell_qdial_pane

0x2838,	// (0x00020d1d) cell_qdial_pane_g1_ParamLimits

0x2838,	// (0x00020d1d) cell_qdial_pane_g1

0x2845,	// (0x00020d2a) cell_qdial_pane_g2_ParamLimits

0x2845,	// (0x00020d2a) cell_qdial_pane_g2

0xa272,	// (0x00028757) cell_qdial_pane_g3_ParamLimits

0xa272,	// (0x00028757) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002d65f) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002d65f) cell_qdial_pane_g

0x2862,	// (0x00020d47) cell_qdial_pane_t1_ParamLimits

0x2862,	// (0x00020d47) cell_qdial_pane_t1

0x287a,	// (0x00020d5f) cell_qdial_pane_t2_ParamLimits

0x287a,	// (0x00020d5f) cell_qdial_pane_t2

0x288d,	// (0x00020d72) cell_qdial_pane_t3_ParamLimits

0x288d,	// (0x00020d72) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002d668) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002d668) cell_qdial_pane_t

0x9ea0,	// (0x00028385) grid_highlight_pane_cp04

0xa27e,	// (0x00028763) thumbnail_qdial_pane_ParamLimits

0xa27e,	// (0x00028763) thumbnail_qdial_pane

0xa2da,	// (0x000287bf) list_help_pane

0xa2e3,	// (0x000287c8) scroll_pane_cp02

0x28a0,	// (0x00020d85) help_list_pane_t1_ParamLimits

0x28a0,	// (0x00020d85) help_list_pane_t1

0x10be,	// (0x0001f5a3) bg_notes_pane_g2

0x10c6,	// (0x0001f5ab) bg_notes_pane_g3

0x10ce,	// (0x0001f5b3) notes_bg_pane_g1

0x10d6,	// (0x0001f5bb) notes_bg_pane_g4

0x10de,	// (0x0001f5c3) notes_bg_pane_g5

0x10e6,	// (0x0001f5cb) notes_bg_pane_g6

0x10ee,	// (0x0001f5d3) notes_bg_pane_g7

0x10f6,	// (0x0001f5db) notes_bg_pane_g8

0x10fe,	// (0x0001f5e3) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002d686) notes_bg_pane_g

0x28da,	// (0x00020dbf) list_notes_text_pane_ParamLimits

0x28da,	// (0x00020dbf) list_notes_text_pane

0xa2ec,	// (0x000287d1) list_notes_text_pane_g1

0x2909,	// (0x00020dee) list_notes_text_pane_t1

0x2917,	// (0x00020dfc) listscroll_cale_week_pane

0x293c,	// (0x00020e21) bg_cale_heading_pane

0xa30f,	// (0x000287f4) bg_cale_pane_cp01

0x295e,	// (0x00020e43) cale_week_corner_pane

0x2978,	// (0x00020e5d) cale_week_day_heading_pane

0x299a,	// (0x00020e7f) cale_week_scroll_pane_g1

0x29b7,	// (0x00020e9c) cale_week_scroll_pane_g2

0x29ca,	// (0x00020eaf) cale_week_scroll_pane_g3

0x29dd,	// (0x00020ec2) cale_week_scroll_pane_g4

0x29f0,	// (0x00020ed5) cale_week_scroll_pane_g5

0x2a03,	// (0x00020ee8) cale_week_scroll_pane_g6

0x2a16,	// (0x00020efb) cale_week_scroll_pane_g7

0x2a29,	// (0x00020f0e) cale_week_scroll_pane_g8

0x2a3e,	// (0x00020f23) cale_week_scroll_pane_g9

0x2a51,	// (0x00020f36) cale_week_scroll_pane_g10

0x2a64,	// (0x00020f49) cale_week_scroll_pane_g11

0x2a77,	// (0x00020f5c) cale_week_scroll_pane_g12

0x2a8e,	// (0x00020f73) cale_week_scroll_pane_g13

0x2aa9,	// (0x00020f8e) cale_week_scroll_pane_g14

0x2ac4,	// (0x00020fa9) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002d695) cale_week_scroll_pane_g

0x2af4,	// (0x00020fd9) cale_week_time_pane

0x2b09,	// (0x00020fee) grid_cale_week_pane

0xa34c,	// (0x00028831) scroll_pane_cp08

0x2b2a,	// (0x0002100f) cell_cale_week_pane_ParamLimits

0x2b2a,	// (0x0002100f) cell_cale_week_pane

0x2b8e,	// (0x00021073) cale_week_day_heading_pane_t1

0x2bc9,	// (0x000210ae) cale_week_day_heading_pane_t2

0x2c04,	// (0x000210e9) cale_week_day_heading_pane_t3

0x2c3f,	// (0x00021124) cale_week_day_heading_pane_t4

0x2c7a,	// (0x0002115f) cale_week_day_heading_pane_t5

0x2cb5,	// (0x0002119a) cale_week_day_heading_pane_t6

0x2cf0,	// (0x000211d5) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002d6b6) cale_week_day_heading_pane_t

0xa369,	// (0x0002884e) bg_cale_side_pane

0x1106,	// (0x0001f5eb) cale_week_time_pane_t1

0x1120,	// (0x0001f605) cale_week_time_pane_t2

0x113a,	// (0x0001f61f) cale_week_time_pane_t3

0x1154,	// (0x0001f639) cale_week_time_pane_t4

0x116e,	// (0x0001f653) cale_week_time_pane_t5

0x118a,	// (0x0001f66f) cale_week_time_pane_t6

0x11ac,	// (0x0001f691) cale_week_time_pane_t7

0x11d0,	// (0x0001f6b5) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002d6c5) cale_week_time_pane_t

0x2d2b,	// (0x00021210) cell_cale_week_pane_g2

0x2d4f,	// (0x00021234) cell_cale_week_pane_g3_ParamLimits

0x2d4f,	// (0x00021234) cell_cale_week_pane_g3

0xa377,	// (0x0002885c) grid_highlight_pane_cp07

0xa37f,	// (0x00028864) listscroll_gms_pane

0xa389,	// (0x0002886e) grid_gms_pane

0xa392,	// (0x00028877) listscroll_gms_pane_g1

0xa39a,	// (0x0002887f) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002d6d6) listscroll_gms_pane_g

0x2d67,	// (0x0002124c) scroll_pane_cp010

0x2d72,	// (0x00021257) cell_gms_pane_ParamLimits

0x2d72,	// (0x00021257) cell_gms_pane

0x2d82,	// (0x00021267) cell_gms_pane_g1

0xa3a2,	// (0x00028887) cell_gms_pane_g2

0xa2ec,	// (0x000287d1) cell_gms_pane_g3

0xa3aa,	// (0x0002888f) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002d6db) cell_gms_pane_g

0xa3b3,	// (0x00028898) grid_highlight_pane_cp09

0x52e8,	// (0x000237cd) phob_pre_status_pane_g1

0x52f0,	// (0x000237d5) phob_pre_status_pane_g2

0x52f8,	// (0x000237dd) phob_pre_status_pane_g3

0x5300,	// (0x000237e5) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002dac6) phob_pre_status_pane_g

0x5310,	// (0x000237f5) phob_pre_status_pane_t1

0x5320,	// (0x00023805) phob_pre_status_pane_t2

0x5330,	// (0x00023815) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002dad1) phob_pre_status_pane_t

0xa3bb,	// (0x000288a0) bg_list_pane_cp05

0x2d92,	// (0x00021277) grid_vorec_pane

0x2d9c,	// (0x00021281) vorec_t1

0x2daa,	// (0x0002128f) vorec_t2

0x2db8,	// (0x0002129d) vorec_t3

0x2dc6,	// (0x000212ab) vorec_t4

0x24ca,	// (0x000209af) vorec_t5

0x24d8,	// (0x000209bd) vorec_t6

0x0004,

0xf1ff,	// (0x0002d6e4) vorec_t

0x24e6,	// (0x000209cb) wait_bar_pane_cp01

0x2de2,	// (0x000212c7) cell_vorec_pane_ParamLimits

0x2de2,	// (0x000212c7) cell_vorec_pane

0x11f6,	// (0x0001f6db) cell_vorec_pane_g1

0x9ea0,	// (0x00028385) grid_highlight_pane_cp05

0x2e05,	// (0x000212ea) cams_zoom_pane

0x2e11,	// (0x000212f6) image_vga_pane

0x2e20,	// (0x00021305) main_camera_pane_g1

0x2e2e,	// (0x00021313) main_camera_pane_g2

0x2e3a,	// (0x0002131f) main_camera_pane_g3

0x2e46,	// (0x0002132b) main_camera_pane_g4

0x2e52,	// (0x00021337) main_camera_pane_g5

0x2e5e,	// (0x00021343) main_camera_pane_g6

0x2e6a,	// (0x0002134f) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d6ef) main_camera_pane_g

0x2e76,	// (0x0002135b) main_camera_pane_t1

0x2e88,	// (0x0002136d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d700) main_camera_pane_t

0x2ea9,	// (0x0002138e) cams_zoom_pane_cp_ParamLimits

0x2ea9,	// (0x0002138e) cams_zoom_pane_cp

0x2ecd,	// (0x000213b2) image_cif_pane_ParamLimits

0x2ecd,	// (0x000213b2) image_cif_pane

0x2eeb,	// (0x000213d0) image_subqcif_pane

0x2ef3,	// (0x000213d8) main_video_pane_g1_ParamLimits

0x2ef3,	// (0x000213d8) main_video_pane_g1

0x2f13,	// (0x000213f8) main_video_pane_g2_ParamLimits

0x2f13,	// (0x000213f8) main_video_pane_g2

0x2f43,	// (0x00021428) main_video_pane_g3_ParamLimits

0x2f43,	// (0x00021428) main_video_pane_g3

0x2f6c,	// (0x00021451) main_video_pane_g4_ParamLimits

0x2f6c,	// (0x00021451) main_video_pane_g4

0x2f95,	// (0x0002147a) main_video_pane_g5_ParamLimits

0x2f95,	// (0x0002147a) main_video_pane_g5

0xa3cf,	// (0x000288b4) main_video_pane_g6_ParamLimits

0xa3cf,	// (0x000288b4) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d705) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d705) main_video_pane_g

0x2fb7,	// (0x0002149c) main_video_pane_t1_ParamLimits

0x2fb7,	// (0x0002149c) main_video_pane_t1

0xa3e9,	// (0x000288ce) cams_zoom_pane_g1

0xa3f2,	// (0x000288d7) cams_zoom_pane_g2

0xa3fb,	// (0x000288e0) cams_zoom_pane_g3

0xa404,	// (0x000288e9) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d714) cams_zoom_pane_g

0x3001,	// (0x000214e6) grid_cams_pane

0x300f,	// (0x000214f4) linegrid_cams_pane

0x301d,	// (0x00021502) cell_cams_pane_ParamLimits

0x301d,	// (0x00021502) cell_cams_pane

0xa40d,	// (0x000288f2) cams_burst_image_pane

0xa415,	// (0x000288fa) cell_cams_pane_g1

0x9ea0,	// (0x00028385) grid_highlight_pane_cp03

0xa234,	// (0x00028719) mp_bg_pane_g1

0x9ea0,	// (0x00028385) bg_list_pane_cp03

0xc1a9,	// (0x0002a68e) bg_mp_pane

0xc1b1,	// (0x0002a696) grid_mp_pane

0xc1b9,	// (0x0002a69e) media_player_g1

0xc1c1,	// (0x0002a6a6) media_player_t1

0xc1cf,	// (0x0002a6b4) media_player_t2

0xc1dd,	// (0x0002a6c2) media_player_t3

0xc1eb,	// (0x0002a6d0) media_player_t4

0xc1f9,	// (0x0002a6de) media_player_t5

0xc207,	// (0x0002a6ec) media_player_t6

0xc215,	// (0x0002a6fa) media_player_t7

0x0006,

0xf5cb,	// (0x0002dab0) media_player_t

0xc223,	// (0x0002a708) wait_bar_pane_cp02

0xf5b0,	// (0x0002da95) main_usb_pane_t

0x52df,	// (0x000237c4) cell_mp_pane

0xa234,	// (0x00028719) cell_mp_pane_g1

0x9ea0,	// (0x00028385) grid_highlight_pane_cp06

0xa41d,	// (0x00028902) grid_skin_colour_pane

0xa425,	// (0x0002890a) list_highlight_pane_cp03

0x313e,	// (0x00021623) skin_g1

0xa42d,	// (0x00028912) skin_t1

0xa43c,	// (0x00028921) skin_t2

0x0001,

0xf264,	// (0x0002d749) skin_t

0x3148,	// (0x0002162d) cell_skin_colour_pane_ParamLimits

0x3148,	// (0x0002162d) cell_skin_colour_pane

0xa44a,	// (0x0002892f) cell_skin_colour_pane_g1

0x31cc,	// (0x000216b1) call_video_g1_ParamLimits

0x31cc,	// (0x000216b1) call_video_g1

0x31dc,	// (0x000216c1) call_video_g2_ParamLimits

0x31dc,	// (0x000216c1) call_video_g2

0x0001,

0xf269,	// (0x0002d74e) call_video_g_ParamLimits

0xf269,	// (0x0002d74e) call_video_g

0x3236,	// (0x0002171b) call_video_uplink_pane_cp1_ParamLimits

0x3236,	// (0x0002171b) call_video_uplink_pane_cp1

0xa45c,	// (0x00028941) call_video_uplink_pane_cp2

0x3302,	// (0x000217e7) video_down_crop_pane_ParamLimits

0x3302,	// (0x000217e7) video_down_crop_pane

0x33f4,	// (0x000218d9) video_down_pane_ParamLimits

0x33f4,	// (0x000218d9) video_down_pane

0xa464,	// (0x00028949) video_down_subqcif_pane_ParamLimits

0xa464,	// (0x00028949) video_down_subqcif_pane

0xa47c,	// (0x00028961) video_down_subqcif_pane_cp_ParamLimits

0xa47c,	// (0x00028961) video_down_subqcif_pane_cp

0xa4a2,	// (0x00028987) im_reading_pane_ParamLimits

0xa4a2,	// (0x00028987) im_reading_pane

0x3516,	// (0x000219fb) im_writing_pane_ParamLimits

0x3516,	// (0x000219fb) im_writing_pane

0x3534,	// (0x00021a19) im_reading_pane_t1

0xa4bc,	// (0x000289a1) list_im_pane

0xa4cd,	// (0x000289b2) scroll_pane_cp07

0x358f,	// (0x00021a74) im_writing_pane_t1_ParamLimits

0x358f,	// (0x00021a74) im_writing_pane_t1

0xa4e6,	// (0x000289cb) im_writing_pane_t2_ParamLimits

0xa4e6,	// (0x000289cb) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d758) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d758) im_writing_pane_t

0x9ea0,	// (0x00028385) input_focus_pane_cp04

0x9ea0,	// (0x00028385) input_focus_pane_cp05

0x35a1,	// (0x00021a86) list_im_single_pane_ParamLimits

0x35a1,	// (0x00021a86) list_im_single_pane

0x35c9,	// (0x00021aae) list_single_im_pane_t1

0x52a3,	// (0x00023788) blid_accuracy_pane

0x52ab,	// (0x00023790) blid_compass_pane

0x52b5,	// (0x0002379a) main_location_t1

0x52c3,	// (0x000237a8) main_location_t2

0x52d1,	// (0x000237b6) main_location_t3

0x0002,

0xf5da,	// (0x0002dabf) main_location_t

0x9ea0,	// (0x00028385) aid_levels_location

0xa234,	// (0x00028719) blid_accuracy_pane_g1

0xa234,	// (0x00028719) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d7ba) blid_accuracy_pane_g

0xa52e,	// (0x00028a13) wml_content_pane

0xa56c,	// (0x00028a51) wml_button_pane_ParamLimits

0xa56c,	// (0x00028a51) wml_button_pane

0x35d8,	// (0x00021abd) wml_list_single_large_pane_ParamLimits

0x35d8,	// (0x00021abd) wml_list_single_large_pane

0x3609,	// (0x00021aee) wml_list_single_medium_pane_ParamLimits

0x3609,	// (0x00021aee) wml_list_single_medium_pane

0x3641,	// (0x00021b26) wml_list_single_small_pane_ParamLimits

0x3641,	// (0x00021b26) wml_list_single_small_pane

0xa580,	// (0x00028a65) wml_selection_box_pane_ParamLimits

0xa580,	// (0x00028a65) wml_selection_box_pane

0xa593,	// (0x00028a78) wml_list_single_pane_t1

0xa5a2,	// (0x00028a87) wml_list_single_medium_pane_t1

0xa5b1,	// (0x00028a96) wml_list_single_large_pane_t1

0xa5c0,	// (0x00028aa5) input_focus_pane_cp02_ParamLimits

0xa5c0,	// (0x00028aa5) input_focus_pane_cp02

0xa5d3,	// (0x00028ab8) wml_selection_box_pane_g1

0xa5dc,	// (0x00028ac1) wml_selection_box_pane_t1_ParamLimits

0xa5dc,	// (0x00028ac1) wml_selection_box_pane_t1

0xa0fb,	// (0x000285e0) bg_wml_button_pane_ParamLimits

0xa0fb,	// (0x000285e0) bg_wml_button_pane

0xa5f4,	// (0x00028ad9) wml_button_pane_g1

0xa5fc,	// (0x00028ae1) wml_button_pane_t1

0xa5f4,	// (0x00028ad9) wml_button_bg_pane_g1

0xa60c,	// (0x00028af1) wml_button_bg_pane_g2

0xa614,	// (0x00028af9) wml_button_bg_pane_g3

0xa61c,	// (0x00028b01) wml_button_bg_pane_g4

0xa624,	// (0x00028b09) wml_button_bg_pane_g5

0xa62c,	// (0x00028b11) wml_button_bg_pane_g6

0xa634,	// (0x00028b19) wml_button_bg_pane_g7

0xa63c,	// (0x00028b21) wml_button_bg_pane_g8

0xa644,	// (0x00028b29) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d75d) wml_button_bg_pane_g

0x3682,	// (0x00021b67) bg_list_pane_cp02

0xa64c,	// (0x00028b31) mce_header_pane_ParamLimits

0xa64c,	// (0x00028b31) mce_header_pane

0xa662,	// (0x00028b47) mce_icon_pane

0xa662,	// (0x00028b47) mce_image_pane

0xa66b,	// (0x00028b50) mce_text_pane_ParamLimits

0xa66b,	// (0x00028b50) mce_text_pane

0x368c,	// (0x00021b71) scroll_pane_cp03

0xa564,	// (0x00028a49) scroll_pane_cp04

0xa67e,	// (0x00028b63) scroll_pane_cp05_ParamLimits

0xa67e,	// (0x00028b63) scroll_pane_cp05

0x3696,	// (0x00021b7b) mce_header_field_pane_ParamLimits

0x3696,	// (0x00021b7b) mce_header_field_pane

0x36b6,	// (0x00021b9b) mce_header_field_pane_2_ParamLimits

0x36b6,	// (0x00021b9b) mce_header_field_pane_2

0x36cc,	// (0x00021bb1) mce_header_field_pane_3

0x36d4,	// (0x00021bb9) list_single_mce_message_pane_ParamLimits

0x36d4,	// (0x00021bb9) list_single_mce_message_pane

0x3706,	// (0x00021beb) list_single_mce_smart_pane_ParamLimits

0x3706,	// (0x00021beb) list_single_mce_smart_pane

0xa68a,	// (0x00028b6f) input_focus_pane_cp03

0xa693,	// (0x00028b78) list_header_data_pane

0x3743,	// (0x00021c28) mce_header_field_pane_t1

0x3753,	// (0x00021c38) list_single_mce_header_pane_ParamLimits

0x3753,	// (0x00021c38) list_single_mce_header_pane

0xa69b,	// (0x00028b80) list_single_mce_header_pane_t1

0xa6aa,	// (0x00028b8f) list_single_mce_message_pane_g1

0xa6b2,	// (0x00028b97) list_single_mce_message_pane_t1

0x37aa,	// (0x00021c8f) bg_cale_heading_pane_cp01_ParamLimits

0x37aa,	// (0x00021c8f) bg_cale_heading_pane_cp01

0xa6c0,	// (0x00028ba5) bg_cale_pane_cp02_ParamLimits

0xa6c0,	// (0x00028ba5) bg_cale_pane_cp02

0x37ed,	// (0x00021cd2) cale_month_corner_pane

0x3807,	// (0x00021cec) cale_month_day_heading_pane_ParamLimits

0x3807,	// (0x00021cec) cale_month_day_heading_pane

0x3862,	// (0x00021d47) cale_month_pane_g1_ParamLimits

0x3862,	// (0x00021d47) cale_month_pane_g1

0x389a,	// (0x00021d7f) cale_month_pane_g2_ParamLimits

0x389a,	// (0x00021d7f) cale_month_pane_g2

0x38c5,	// (0x00021daa) cale_month_pane_g3_ParamLimits

0x38c5,	// (0x00021daa) cale_month_pane_g3

0x3915,	// (0x00021dfa) cale_month_pane_g4_ParamLimits

0x3915,	// (0x00021dfa) cale_month_pane_g4

0x3965,	// (0x00021e4a) cale_month_pane_g5_ParamLimits

0x3965,	// (0x00021e4a) cale_month_pane_g5

0x39b5,	// (0x00021e9a) cale_month_pane_g6_ParamLimits

0x39b5,	// (0x00021e9a) cale_month_pane_g6

0x3a05,	// (0x00021eea) cale_month_pane_g7_ParamLimits

0x3a05,	// (0x00021eea) cale_month_pane_g7

0x3a6d,	// (0x00021f52) cale_month_pane_g8_ParamLimits

0x3a6d,	// (0x00021f52) cale_month_pane_g8

0x3ad5,	// (0x00021fba) cale_month_pane_g9_ParamLimits

0x3ad5,	// (0x00021fba) cale_month_pane_g9

0x3b33,	// (0x00022018) cale_month_pane_g10_ParamLimits

0x3b33,	// (0x00022018) cale_month_pane_g10

0x3b91,	// (0x00022076) cale_month_pane_g11_ParamLimits

0x3b91,	// (0x00022076) cale_month_pane_g11

0x3be5,	// (0x000220ca) cale_month_pane_g12_ParamLimits

0x3be5,	// (0x000220ca) cale_month_pane_g12

0x3c3b,	// (0x00022120) cale_month_pane_g13_ParamLimits

0x3c3b,	// (0x00022120) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d770) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d770) cale_month_pane_g

0x3c91,	// (0x00022176) cale_month_week_pane

0x3ca6,	// (0x0002218b) grid_cale_month_pane_ParamLimits

0x3ca6,	// (0x0002218b) grid_cale_month_pane

0x3cf8,	// (0x000221dd) cale_month_day_heading_pane_t1

0x3d7e,	// (0x00022263) cale_month_day_heading_pane_t2

0x3e0f,	// (0x000222f4) cale_month_day_heading_pane_t3

0x3ea0,	// (0x00022385) cale_month_day_heading_pane_t4

0x3f31,	// (0x00022416) cale_month_day_heading_pane_t5

0x3fc2,	// (0x000224a7) cale_month_day_heading_pane_t6

0x405f,	// (0x00022544) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d78b) cale_month_day_heading_pane_t

0xa369,	// (0x0002884e) bg_cale_side_pane_cp01

0x4108,	// (0x000225ed) cale_month_week_pane_t1

0x4121,	// (0x00022606) cale_month_week_pane_t2

0x413a,	// (0x0002261f) cale_month_week_pane_t3

0x4153,	// (0x00022638) cale_month_week_pane_t4

0x4170,	// (0x00022655) cale_month_week_pane_t5

0x4191,	// (0x00022676) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d79a) cale_month_week_pane_t

0x41b2,	// (0x00022697) cell_cale_month_pane_ParamLimits

0x41b2,	// (0x00022697) cell_cale_month_pane

0x1200,	// (0x0001f6e5) cell_cale_month_pane_g1

0x120c,	// (0x0001f6f1) cell_cale_month_pane_t1_ParamLimits

0x120c,	// (0x0001f6f1) cell_cale_month_pane_t1

0xa377,	// (0x0002885c) grid_highlight_pane_cp08

0xa234,	// (0x00028719) main_smil_g1

0x4302,	// (0x000227e7) smil_status_pane

0xa6ff,	// (0x00028be4) smil_text_pane

0xc0c9,	// (0x0002a5ae) bg_popup_call3_rect_pane_g8

0xc0d1,	// (0x0002a5b6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002da53) bg_popup_call3_rect_pane_g

0xc318,	// (0x0002a7fd) smil_status_volume_pane_g1

0xa709,	// (0x00028bee) smil_status_pane_t1

0x14c8,	// (0x0001f9ad) volume_smil_pane

0xa720,	// (0x00028c05) list_smil_text_pane

0x4315,	// (0x000227fa) scroll_pane_cp011

0x4320,	// (0x00022805) smil_text_list_pane_t1_ParamLimits

0x4320,	// (0x00022805) smil_text_list_pane_t1

0x122c,	// (0x0001f711) aid_volume_smil_ParamLimits

0x122c,	// (0x0001f711) aid_volume_smil

0xa234,	// (0x00028719) smil_volume_pane_g1

0xa234,	// (0x00028719) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d7ba) smil_volume_pane_g

0x2917,	// (0x00020dfc) listscroll_cale_day_pane

0xa72a,	// (0x00028c0f) bg_cale_pane

0xa742,	// (0x00028c27) list_cale_pane

0xa765,	// (0x00028c4a) scroll_pane_cp09

0xa776,	// (0x00028c5b) cale_bg_pane_g1

0xa77e,	// (0x00028c63) cale_bg_pane_g2

0xa786,	// (0x00028c6b) cale_bg_pane_g3

0xa78e,	// (0x00028c73) cale_bg_pane_g4

0xa796,	// (0x00028c7b) cale_bg_pane_g5

0xa79e,	// (0x00028c83) cale_bg_pane_g6

0xa7a6,	// (0x00028c8b) cale_bg_pane_g7

0xa7ae,	// (0x00028c93) cale_bg_pane_g8

0xa7b6,	// (0x00028c9b) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d7bf) cale_bg_pane_g

0x43b4,	// (0x00022899) list_cale_time_pane_ParamLimits

0x43b4,	// (0x00022899) list_cale_time_pane

0xa7c6,	// (0x00028cab) list_cale_time_pane_g1_ParamLimits

0xa7c6,	// (0x00028cab) list_cale_time_pane_g1

0xa7d2,	// (0x00028cb7) list_cale_time_pane_g2_ParamLimits

0xa7d2,	// (0x00028cb7) list_cale_time_pane_g2

0x43e0,	// (0x000228c5) list_cale_time_pane_g3_ParamLimits

0x43e0,	// (0x000228c5) list_cale_time_pane_g3

0x43ee,	// (0x000228d3) list_cale_time_pane_g4_ParamLimits

0x43ee,	// (0x000228d3) list_cale_time_pane_g4

0x43fc,	// (0x000228e1) list_cale_time_pane_g5_ParamLimits

0x43fc,	// (0x000228e1) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d7d2) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d7d2) list_cale_time_pane_g

0xa7ec,	// (0x00028cd1) list_cale_time_pane_t1_ParamLimits

0xa7ec,	// (0x00028cd1) list_cale_time_pane_t1

0xa814,	// (0x00028cf9) list_cale_time_pane_t2_ParamLimits

0xa814,	// (0x00028cf9) list_cale_time_pane_t2

0x4720,	// (0x00022c05) aid_blid_cardinal_pane

0x4762,	// (0x00022c47) compass_pane_t4

0xa83c,	// (0x00028d21) list_cale_time_pane_t4_ParamLimits

0xa83c,	// (0x00028d21) list_cale_time_pane_t4

0x4770,	// (0x00022c55) compass_pane_t5

0x4780,	// (0x00022c65) compass_pane_t6

0x478e,	// (0x00022c73) compass_pane_t7

0xad07,	// (0x000291ec) navi_pane_cc_t1

0xaee4,	// (0x000293c9) aid_phob_thumbnail_center_pane

0x4d9c,	// (0x00023281) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d7df) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d7df) list_cale_time_pane_t

0x9af7,	// (0x00027fdc) bg_popup_window_pane_cp02_ParamLimits

0x9af7,	// (0x00027fdc) bg_popup_window_pane_cp02

0xa864,	// (0x00028d49) heading_pane_cp01_ParamLimits

0xa864,	// (0x00028d49) heading_pane_cp01

0xa870,	// (0x00028d55) loc_req_pane_ParamLimits

0xa870,	// (0x00028d55) loc_req_pane

0xa880,	// (0x00028d65) loc_type_pane_ParamLimits

0xa880,	// (0x00028d65) loc_type_pane

0xa892,	// (0x00028d77) loc_type_pane_t1_ParamLimits

0xa892,	// (0x00028d77) loc_type_pane_t1

0xa8a4,	// (0x00028d89) loc_type_pane_t2_ParamLimits

0xa8a4,	// (0x00028d89) loc_type_pane_t2

0xa8b6,	// (0x00028d9b) loc_type_pane_t3_ParamLimits

0xa8b6,	// (0x00028d9b) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d7e6) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d7e6) loc_type_pane_t

0xa8c8,	// (0x00028dad) list_loc_req_pane

0xa8d2,	// (0x00028db7) scroll_pane_cp012

0x440a,	// (0x000228ef) list_single_loc_request_popup_menu_pane_ParamLimits

0x440a,	// (0x000228ef) list_single_loc_request_popup_menu_pane

0xa8dd,	// (0x00028dc2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa8dd,	// (0x00028dc2) list_single_loc_request_popup_menu_pane_g1

0xa8e9,	// (0x00028dce) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa8e9,	// (0x00028dce) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d7ed) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d7ed) list_single_loc_request_popup_menu_pane_g

0xa8f5,	// (0x00028dda) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa8f5,	// (0x00028dda) list_single_loc_request_popup_menu_pane_t1

0x4422,	// (0x00022907) bg_popup_window_pane_cp03_ParamLimits

0x4422,	// (0x00022907) bg_popup_window_pane_cp03

0x4430,	// (0x00022915) heading_loc_req_pane_ParamLimits

0x4430,	// (0x00022915) heading_loc_req_pane

0x443c,	// (0x00022921) popup_dyc_status_message_window_g1_ParamLimits

0x443c,	// (0x00022921) popup_dyc_status_message_window_g1

0x4448,	// (0x0002292d) popup_dyc_status_message_window_t1_ParamLimits

0x4448,	// (0x0002292d) popup_dyc_status_message_window_t1

0x445a,	// (0x0002293f) popup_dyc_status_message_window_t2_ParamLimits

0x445a,	// (0x0002293f) popup_dyc_status_message_window_t2

0x446c,	// (0x00022951) popup_dyc_status_message_window_t3_ParamLimits

0x446c,	// (0x00022951) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d7f2) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d7f2) popup_dyc_status_message_window_t

0x9ea0,	// (0x00028385) bg_heading_pane_cp01

0xa90b,	// (0x00028df0) heading_loc_req_pane_g1

0xa913,	// (0x00028df8) heading_loc_req_pane_g2

0xa91b,	// (0x00028e00) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d7f9) heading_loc_req_pane_g

0xa923,	// (0x00028e08) heading_loc_req_pane_t1

0xa932,	// (0x00028e17) bg_popup_sub_pane_cp01_ParamLimits

0xa932,	// (0x00028e17) bg_popup_sub_pane_cp01

0xa940,	// (0x00028e25) popup_cale_events_window_g1_ParamLimits

0xa940,	// (0x00028e25) popup_cale_events_window_g1

0xa960,	// (0x00028e45) popup_cale_events_window_g2_ParamLimits

0xa960,	// (0x00028e45) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d82d) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d82d) popup_cale_events_window_g

0xa980,	// (0x00028e65) popup_cale_events_window_t1_ParamLimits

0xa980,	// (0x00028e65) popup_cale_events_window_t1

0xa992,	// (0x00028e77) popup_cale_events_window_t2_ParamLimits

0xa992,	// (0x00028e77) popup_cale_events_window_t2

0xa9d0,	// (0x00028eb5) popup_cale_events_window_t3_ParamLimits

0xa9d0,	// (0x00028eb5) popup_cale_events_window_t3

0xaa0a,	// (0x00028eef) popup_cale_events_window_t4_ParamLimits

0xaa0a,	// (0x00028eef) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d832) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d832) popup_cale_events_window_t

0x4573,	// (0x00022a58) call_type_pane

0xab49,	// (0x0002902e) popup_call_status_window_g1

0x457f,	// (0x00022a64) popup_call_status_window_g2

0x458b,	// (0x00022a70) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d83b) popup_call_status_window_g

0xaa40,	// (0x00028f25) call_type_pane_g1

0xaa49,	// (0x00028f2e) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d842) call_type_pane_g

0x9ea0,	// (0x00028385) bg_popup_sub_pane_cp02

0xaa52,	// (0x00028f37) listscroll_popup_wml_pane

0xaa5a,	// (0x00028f3f) list_wml_pane

0xaa64,	// (0x00028f49) scroll_pane_cp013

0xaa6f,	// (0x00028f54) list_single_graphic_popup_wml_pane_ParamLimits

0xaa6f,	// (0x00028f54) list_single_graphic_popup_wml_pane

0xa234,	// (0x00028719) list_single_graphic_popup_wml_pane_g1

0xaa83,	// (0x00028f68) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d847) list_single_graphic_popup_wml_pane_g

0xaa8b,	// (0x00028f70) list_single_graphic_popup_wml_pane_t1

0xaaa1,	// (0x00028f86) aid_call_pane

0xa0f3,	// (0x000285d8) popup_clock_analogue_window_g1

0xa0f3,	// (0x000285d8) popup_clock_analogue_window_g2

0x124e,	// (0x0001f733) popup_clock_analogue_window_g3

0x124e,	// (0x0001f733) popup_clock_analogue_window_g4

0xa234,	// (0x00028719) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d84c) popup_clock_analogue_window_g

0x1256,	// (0x0001f73b) popup_clock_analogue_window_t1

0x1264,	// (0x0001f749) clock_digital_number_pane_ParamLimits

0x1264,	// (0x0001f749) clock_digital_number_pane

0x1270,	// (0x0001f755) clock_digital_number_pane_cp02_ParamLimits

0x1270,	// (0x0001f755) clock_digital_number_pane_cp02

0x127c,	// (0x0001f761) clock_digital_number_pane_cp03_ParamLimits

0x127c,	// (0x0001f761) clock_digital_number_pane_cp03

0x1288,	// (0x0001f76d) clock_digital_number_pane_cp04_ParamLimits

0x1288,	// (0x0001f76d) clock_digital_number_pane_cp04

0x1298,	// (0x0001f77d) clock_digital_separator_pane_ParamLimits

0x1298,	// (0x0001f77d) clock_digital_separator_pane

0x12a4,	// (0x0001f789) popup_clock_digital_window_t1

0xa234,	// (0x00028719) clock_digital_number_pane_g1

0xa234,	// (0x00028719) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d7ba) clock_digital_number_pane_g

0xa234,	// (0x00028719) clock_digital_separator_pane_g1

0xa234,	// (0x00028719) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d7ba) clock_digital_separator_pane_g

0x9ea0,	// (0x00028385) bg_popup_window_pane_cp04

0xaaa9,	// (0x00028f8e) heading_pane_cp03

0xaab1,	// (0x00028f96) listscroll_popup_gms_pane

0xaab9,	// (0x00028f9e) grid_large_graphic_popup_pane

0xaac3,	// (0x00028fa8) listscroll_popup_gms_pane_g1

0xaacb,	// (0x00028fb0) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d857) listscroll_popup_gms_pane_g

0xa564,	// (0x00028a49) scroll_pane_cp014

0xaad3,	// (0x00028fb8) cell_large_graphic_popup_pane_ParamLimits

0xaad3,	// (0x00028fb8) cell_large_graphic_popup_pane

0xaaeb,	// (0x00028fd0) cell_large_graphic_popup_pane_g1_ParamLimits

0xaaeb,	// (0x00028fd0) cell_large_graphic_popup_pane_g1

0xaaf7,	// (0x00028fdc) cell_large_graphic_popup_pane_g2_ParamLimits

0xaaf7,	// (0x00028fdc) cell_large_graphic_popup_pane_g2

0xab03,	// (0x00028fe8) cell_large_graphic_popup_pane_g3_ParamLimits

0xab03,	// (0x00028fe8) cell_large_graphic_popup_pane_g3

0xab10,	// (0x00028ff5) cell_large_graphic_popup_pane_g4_ParamLimits

0xab10,	// (0x00028ff5) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d85c) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d85c) cell_large_graphic_popup_pane_g

0xab20,	// (0x00029005) grid_highlight_pane_cp010

0xa234,	// (0x00028719) bg_popup_call_pane_g1

0xab2a,	// (0x0002900f) list_single_graphic_popup_conf_pane_ParamLimits

0xab2a,	// (0x0002900f) list_single_graphic_popup_conf_pane

0xab57,	// (0x0002903c) list_highlight_pane_cp01

0xab60,	// (0x00029045) list_single_graphic_popup_conf_pane_g1

0xab68,	// (0x0002904d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d865) list_single_graphic_popup_conf_pane_g

0xab70,	// (0x00029055) list_single_graphic_popup_conf_pane_t1

0xab7e,	// (0x00029063) linegrid_cams_pane_g1

0x4597,	// (0x00022a7c) linegrid_cams_pane_g2

0xa2ec,	// (0x000287d1) linegrid_cams_pane_g3

0xab87,	// (0x0002906c) linegrid_cams_pane_g4

0x45a0,	// (0x00022a85) linegrid_cams_pane_g5

0x45a9,	// (0x00022a8e) linegrid_cams_pane_g6

0xa3aa,	// (0x0002888f) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d86a) linegrid_cams_pane_g

0xab90,	// (0x00029075) popup_clock_analogue_window

0xab90,	// (0x00029075) popup_clock_digital_window

0x9ea0,	// (0x00028385) popup_phob_thumbnail_window

0xa234,	// (0x00028719) call_video_uplink_pane_g1

0xab99,	// (0x0002907e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d879) call_video_uplink_pane_g

0xa377,	// (0x0002885c) video_uplink_pane

0xaba1,	// (0x00029086) mce_image_pane_g1

0x45b2,	// (0x00022a97) mce_image_pane_g2

0x45ba,	// (0x00022a9f) mce_image_pane_g3

0x45c2,	// (0x00022aa7) mce_image_pane_g4

0x45ca,	// (0x00022aaf) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d87e) mce_image_pane_g

0xabab,	// (0x00029090) control_top_pane_stacon_cp01_ParamLimits

0xabab,	// (0x00029090) control_top_pane_stacon_cp01

0xabbf,	// (0x000290a4) uni_indicator_pane_stacon_cp01_ParamLimits

0xabbf,	// (0x000290a4) uni_indicator_pane_stacon_cp01

0xabd0,	// (0x000290b5) bg_popup_sub_pane_cp03

0x45d2,	// (0x00022ab7) chi_dic_find_pane

0x45da,	// (0x00022abf) listscroll_chi_dic_pane

0x45e3,	// (0x00022ac8) main_pane_chidic_g1

0xabda,	// (0x000290bf) chi_dic_find_pane_t1

0xabe8,	// (0x000290cd) find_chidic_pane

0xabf1,	// (0x000290d6) chi_dic_list_pane_ParamLimits

0xabf1,	// (0x000290d6) chi_dic_list_pane

0xac02,	// (0x000290e7) scroll_pane_cp020

0xac0a,	// (0x000290ef) find_chidic_pane_t1

0x9ea0,	// (0x00028385) input_focus_pane_cp06

0x45f6,	// (0x00022adb) list_chi_dic_pane_ParamLimits

0x45f6,	// (0x00022adb) list_chi_dic_pane

0x4613,	// (0x00022af8) list_chi_dic_pane_t1_ParamLimits

0x4613,	// (0x00022af8) list_chi_dic_pane_t1

0x9ea0,	// (0x00028385) list_highlight_pane_cp020

0xac19,	// (0x000290fe) bg_cale_heading_pane_g1

0x4626,	// (0x00022b0b) bg_cale_heading_pane_g2

0x462e,	// (0x00022b13) bg_cale_heading_pane_g3

0x4636,	// (0x00022b1b) bg_cale_heading_pane_g4

0x4640,	// (0x00022b25) bg_cale_heading_pane_g5

0x464a,	// (0x00022b2f) bg_cale_heading_pane_g6

0x4652,	// (0x00022b37) bg_cale_heading_pane_g7

0x465a,	// (0x00022b3f) bg_cale_heading_pane_g8

0x4664,	// (0x00022b49) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d889) bg_cale_heading_pane_g

0xac19,	// (0x000290fe) bg_cale_side_pane_g1

0x466e,	// (0x00022b53) bg_cale_side_pane_g2

0x4678,	// (0x00022b5d) bg_cale_side_pane_g3

0x4682,	// (0x00022b67) bg_cale_side_pane_g4

0x468c,	// (0x00022b71) bg_cale_side_pane_g5

0x4696,	// (0x00022b7b) bg_cale_side_pane_g6

0x46a0,	// (0x00022b85) bg_cale_side_pane_g7

0x46aa,	// (0x00022b8f) bg_cale_side_pane_g8

0x46b2,	// (0x00022b97) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d89c) bg_cale_side_pane_g

0x46ba,	// (0x00022b9f) popup_call_status_window_ParamLimits

0x46ba,	// (0x00022b9f) popup_call_status_window

0xac21,	// (0x00029106) stacon_top_pane

0xac29,	// (0x0002910e) status_pane_ParamLimits

0xac29,	// (0x0002910e) status_pane

0xac3e,	// (0x00029123) status_small_pane

0xac46,	// (0x0002912b) control_pane

0x9ea0,	// (0x00028385) stacon_bottom_pane

0xac4e,	// (0x00029133) list_single_mce_smart_pane_t1_ParamLimits

0xac4e,	// (0x00029133) list_single_mce_smart_pane_t1

0xac61,	// (0x00029146) list_single_mce_smart_pane_t2_ParamLimits

0xac61,	// (0x00029146) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d8af) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d8af) list_single_mce_smart_pane_t

0x46c6,	// (0x00022bab) compass_pane

0x46d2,	// (0x00022bb7) main_location2_pane_t1

0x46e6,	// (0x00022bcb) main_location2_pane_t2

0x46fa,	// (0x00022bdf) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d8b4) main_location2_pane_t

0xac80,	// (0x00029165) compass_pane_g1_ParamLimits

0xac80,	// (0x00029165) compass_pane_g1

0x4744,	// (0x00022c29) compass_pane_t1

0x4753,	// (0x00022c38) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d8bd) compass_pane_t

0x479e,	// (0x00022c83) text_secondary_cp61

0xacfe,	// (0x000291e3) navi_pane_cams_g5

0xad7a,	// (0x0002925f) navi_pane_im_t1

0xad88,	// (0x0002926d) navi_pane_mp_g1_ParamLimits

0xad88,	// (0x0002926d) navi_pane_mp_g1

0xad9c,	// (0x00029281) navi_pane_mp_g2_ParamLimits

0xad9c,	// (0x00029281) navi_pane_mp_g2

0xada8,	// (0x0002928d) navi_pane_mp_g3_ParamLimits

0xada8,	// (0x0002928d) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d8d1) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d8d1) navi_pane_mp_g

0xadb4,	// (0x00029299) navi_pane_mp_t1

0xadc2,	// (0x000292a7) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d8d8) navi_pane_mp_t

0xae2d,	// (0x00029312) navi_pane_vt_g1

0xadb4,	// (0x00029299) navi_pane_vt_t1

0xae35,	// (0x0002931a) navi_slider_pane

0xa3bb,	// (0x000288a0) zooming_pane

0xae45,	// (0x0002932a) navi_slider_pane_g1

0x12c1,	// (0x0001f7a6) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d8df) navi_slider_pane_g

0xae69,	// (0x0002934e) aid_levels_zoom

0xae71,	// (0x00029356) zooming_pane_g1

0xae79,	// (0x0002935e) zooming_pane_g2

0xae79,	// (0x0002935e) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d8ee) zooming_pane_g

0xae81,	// (0x00029366) level_10_zoom

0xae8a,	// (0x0002936f) level_11_zoom

0xae93,	// (0x00029378) level_1_zoom

0xae9c,	// (0x00029381) level_2_zoom

0xaea5,	// (0x0002938a) level_3_zoom

0xaeae,	// (0x00029393) level_4_zoom

0xaeb7,	// (0x0002939c) level_5_zoom

0xaec0,	// (0x000293a5) level_6_zoom

0xaec9,	// (0x000293ae) level_7_zoom

0xaed2,	// (0x000293b7) level_8_zoom

0xaedb,	// (0x000293c0) level_9_zoom

0xaeec,	// (0x000293d1) popup_phob_thumbnail_window_g1

0xaef4,	// (0x000293d9) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d8f5) popup_phob_thumbnail_window_g

0xc22b,	// (0x0002a710) level_1_location

0xc233,	// (0x0002a718) level_2_location

0xc23b,	// (0x0002a720) level_3_location

0xc243,	// (0x0002a728) level_4_location

0xa3bb,	// (0x000288a0) level_5_location

0x47d9,	// (0x00022cbe) mce_icon_pane_g1

0x47e1,	// (0x00022cc6) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d8fa) mce_icon_pane_g

0x47e9,	// (0x00022cce) main_mup_pane_g1_ParamLimits

0x47e9,	// (0x00022cce) main_mup_pane_g1

0x4801,	// (0x00022ce6) main_mup_pane_g2_ParamLimits

0x4801,	// (0x00022ce6) main_mup_pane_g2

0x481d,	// (0x00022d02) main_mup_pane_g3_ParamLimits

0x481d,	// (0x00022d02) main_mup_pane_g3

0x4839,	// (0x00022d1e) main_mup_pane_g4_ParamLimits

0x4839,	// (0x00022d1e) main_mup_pane_g4

0x4855,	// (0x00022d3a) main_mup_pane_g5_ParamLimits

0x4855,	// (0x00022d3a) main_mup_pane_g5

0x4876,	// (0x00022d5b) main_mup_pane_g6_ParamLimits

0x4876,	// (0x00022d5b) main_mup_pane_g6

0x4892,	// (0x00022d77) main_mup_pane_g7_ParamLimits

0x4892,	// (0x00022d77) main_mup_pane_g7

0x48ae,	// (0x00022d93) main_mup_pane_g8_ParamLimits

0x48ae,	// (0x00022d93) main_mup_pane_g8

0x48ca,	// (0x00022daf) main_mup_pane_g9_ParamLimits

0x48ca,	// (0x00022daf) main_mup_pane_g9

0x48e9,	// (0x00022dce) main_mup_pane_g10_ParamLimits

0x48e9,	// (0x00022dce) main_mup_pane_g10

0x4908,	// (0x00022ded) main_mup_pane_g11_ParamLimits

0x4908,	// (0x00022ded) main_mup_pane_g11

0x4920,	// (0x00022e05) main_mup_pane_g12_ParamLimits

0x4920,	// (0x00022e05) main_mup_pane_g12

0x492e,	// (0x00022e13) main_mup_pane_g13_ParamLimits

0x492e,	// (0x00022e13) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d8ff) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d8ff) main_mup_pane_g

0x4944,	// (0x00022e29) main_mup_pane_t1_ParamLimits

0x4944,	// (0x00022e29) main_mup_pane_t1

0x4961,	// (0x00022e46) main_mup_pane_t2_ParamLimits

0x4961,	// (0x00022e46) main_mup_pane_t2

0x497b,	// (0x00022e60) main_mup_pane_t3_ParamLimits

0x497b,	// (0x00022e60) main_mup_pane_t3

0x4995,	// (0x00022e7a) main_mup_pane_t4_ParamLimits

0x4995,	// (0x00022e7a) main_mup_pane_t4

0x49a7,	// (0x00022e8c) main_mup_pane_t5_ParamLimits

0x49a7,	// (0x00022e8c) main_mup_pane_t5

0x49b9,	// (0x00022e9e) main_mup_pane_t6_ParamLimits

0x49b9,	// (0x00022e9e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d91a) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d91a) main_mup_pane_t

0x49cf,	// (0x00022eb4) mup_progress_pane_ParamLimits

0x49cf,	// (0x00022eb4) mup_progress_pane

0x49db,	// (0x00022ec0) mup_visualizer_pane_ParamLimits

0x49db,	// (0x00022ec0) mup_visualizer_pane

0x4a19,	// (0x00022efe) mup_volume_pane_ParamLimits

0x4a19,	// (0x00022efe) mup_volume_pane

0xab49,	// (0x0002902e) mup_visualizer_pane_g1_ParamLimits

0xab49,	// (0x0002902e) mup_visualizer_pane_g1

0xab49,	// (0x0002902e) mup_visualizer_pane_g2_ParamLimits

0xab49,	// (0x0002902e) mup_visualizer_pane_g2

0xac80,	// (0x00029165) mup_visualizer_pane_g3_ParamLimits

0xac80,	// (0x00029165) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d927) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d927) mup_visualizer_pane_g

0xa234,	// (0x00028719) mup_volume_pane_g1

0xaf04,	// (0x000293e9) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d92e) mup_volume_pane_g

0xa234,	// (0x00028719) mup_progress_pane_g1

0xaf0d,	// (0x000293f2) mup_progress_pane_g2

0xaf16,	// (0x000293fb) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d933) mup_progress_pane_g

0x9ea0,	// (0x00028385) bg_popup_window_pane_cp05

0xaf1f,	// (0x00029404) heading_pane_cp02_ParamLimits

0xaf1f,	// (0x00029404) heading_pane_cp02

0xaf39,	// (0x0002941e) list_popup_blid_pane

0xaf41,	// (0x00029426) list_blid_sat_info_pane_ParamLimits

0xaf41,	// (0x00029426) list_blid_sat_info_pane

0xaf54,	// (0x00029439) list_blid_sat_info_pane_g1

0xaf5c,	// (0x00029441) list_blid_sat_info_pane_t1

0x4b24,	// (0x00023009) mup_equalizer_pane_ParamLimits

0x4b24,	// (0x00023009) mup_equalizer_pane

0x4b45,	// (0x0002302a) mup_equalizer_pane_cp1_ParamLimits

0x4b45,	// (0x0002302a) mup_equalizer_pane_cp1

0x4b66,	// (0x0002304b) mup_equalizer_pane_cp2_ParamLimits

0x4b66,	// (0x0002304b) mup_equalizer_pane_cp2

0x4b87,	// (0x0002306c) mup_equalizer_pane_cp3_ParamLimits

0x4b87,	// (0x0002306c) mup_equalizer_pane_cp3

0x4ba8,	// (0x0002308d) mup_equalizer_pane_cp4_ParamLimits

0x4ba8,	// (0x0002308d) mup_equalizer_pane_cp4

0x4bc9,	// (0x000230ae) mup_equalizer_pane_cp5

0x4bdf,	// (0x000230c4) mup_equalizer_pane_cp6

0x4bf7,	// (0x000230dc) mup_equalizer_pane_cp7

0xc149,	// (0x0002a62e) bg_popup_call_poc_act_pane_g9

0xc151,	// (0x0002a636) bg_popup_call_poc_act_pane_g10

0xc159,	// (0x0002a63e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0fb,	// (0x000285e0) mup_scale_pane

0xa234,	// (0x00028719) mup_scale_pane_g1

0xaf6a,	// (0x0002944f) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d94f) mup_scale_pane_g

0xaf8e,	// (0x00029473) msg_data_pane

0xaf96,	// (0x0002947b) scroll_pane_cp017

0x4c21,	// (0x00023106) bg_list_pane_cp04_ParamLimits

0x4c21,	// (0x00023106) bg_list_pane_cp04

0xaf9e,	// (0x00029483) msg_data_pane_g1

0x4c41,	// (0x00023126) msg_data_pane_g2

0x45ba,	// (0x00022a9f) msg_data_pane_g3

0x4c49,	// (0x0002312e) msg_data_pane_g4

0x4c51,	// (0x00023136) msg_data_pane_g5

0x4c59,	// (0x0002313e) msg_data_pane_g6

0x4c61,	// (0x00023146) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d95e) msg_data_pane_g

0x4c69,	// (0x0002314e) msg_text_pane_ParamLimits

0x4c69,	// (0x0002314e) msg_text_pane

0x4cb1,	// (0x00023196) qrid_highlight_pane_cp011_ParamLimits

0x4cb1,	// (0x00023196) qrid_highlight_pane_cp011

0x9ea0,	// (0x00028385) msg_body_pane

0x9ea0,	// (0x00028385) msg_header_pane

0xafaf,	// (0x00029494) input_focus_pane_cp07

0xafc4,	// (0x000294a9) msg_header_pane_t1_ParamLimits

0xafc4,	// (0x000294a9) msg_header_pane_t1

0xafd6,	// (0x000294bb) msg_header_pane_t2_ParamLimits

0xafd6,	// (0x000294bb) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d972) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d972) msg_header_pane_t

0xafe8,	// (0x000294cd) msg_body_pane_g1

0x4cdb,	// (0x000231c0) msg_body_pane_t1_ParamLimits

0x4cdb,	// (0x000231c0) msg_body_pane_t1

0xaff0,	// (0x000294d5) msg_body_pane_t2_ParamLimits

0xaff0,	// (0x000294d5) msg_body_pane_t2

0xb002,	// (0x000294e7) msg_body_pane_t3_ParamLimits

0xb002,	// (0x000294e7) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d977) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d977) msg_body_pane_t

0x1303,	// (0x0001f7e8) main_viewer_pane_g1_ParamLimits

0x1303,	// (0x0001f7e8) main_viewer_pane_g1

0x130f,	// (0x0001f7f4) main_viewer_pane_g2_ParamLimits

0x130f,	// (0x0001f7f4) main_viewer_pane_g2

0x4d2e,	// (0x00023213) main_viewer_pane_g3_ParamLimits

0x4d2e,	// (0x00023213) main_viewer_pane_g3

0x4d3f,	// (0x00023224) main_viewer_pane_g4_ParamLimits

0x4d3f,	// (0x00023224) main_viewer_pane_g4

0x131b,	// (0x0001f800) main_viewer_pane_g5_ParamLimits

0x131b,	// (0x0001f800) main_viewer_pane_g5

0x131b,	// (0x0001f800) main_viewer_pane_g7_ParamLimits

0x131b,	// (0x0001f800) main_viewer_pane_g7

0xa8dd,	// (0x00028dc2) main_viewer_pane_g8_ParamLimits

0xa8dd,	// (0x00028dc2) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d987) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d987) main_viewer_pane_g

0xb014,	// (0x000294f9) viewer_content_pane_ParamLimits

0xb014,	// (0x000294f9) viewer_content_pane

0x4d70,	// (0x00023255) main_postcard_pane_g1_ParamLimits

0x4d70,	// (0x00023255) main_postcard_pane_g1

0x4d7e,	// (0x00023263) main_postcard_pane_g2_ParamLimits

0x4d7e,	// (0x00023263) main_postcard_pane_g2

0x4d8c,	// (0x00023271) main_postcard_pane_g3_ParamLimits

0x4d8c,	// (0x00023271) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d998) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d998) main_postcard_pane_g

0x4d9c,	// (0x00023281) main_postcard_pane_g4

0xc32b,	// (0x0002a810) smil_status_volume_pane_g2

0x4dc8,	// (0x000232ad) postcard_pane_ParamLimits

0x4dc8,	// (0x000232ad) postcard_pane

0xab49,	// (0x0002902e) postcard_pane_g1_ParamLimits

0xab49,	// (0x0002902e) postcard_pane_g1

0x4dfa,	// (0x000232df) postcard_pane_g2_ParamLimits

0x4dfa,	// (0x000232df) postcard_pane_g2

0x4e06,	// (0x000232eb) postcard_pane_g3_ParamLimits

0x4e06,	// (0x000232eb) postcard_pane_g3

0xb022,	// (0x00029507) postcard_pane_g4_ParamLimits

0xb022,	// (0x00029507) postcard_pane_g4

0x4e12,	// (0x000232f7) postcard_pane_g5_ParamLimits

0x4e12,	// (0x000232f7) postcard_pane_g5

0x4e1e,	// (0x00023303) postcard_pane_g6_ParamLimits

0x4e1e,	// (0x00023303) postcard_pane_g6

0xb030,	// (0x00029515) postcard_pane_g7_ParamLimits

0xb030,	// (0x00029515) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d9a5) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d9a5) postcard_pane_g

0x4e2a,	// (0x0002330f) main_mp2_pane_g1_ParamLimits

0x4e2a,	// (0x0002330f) main_mp2_pane_g1

0x4e36,	// (0x0002331b) main_mp2_pane_g2_ParamLimits

0x4e36,	// (0x0002331b) main_mp2_pane_g2

0x4e42,	// (0x00023327) main_mp2_pane_g3_ParamLimits

0x4e42,	// (0x00023327) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d9b4) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d9b4) main_mp2_pane_g

0x4e4e,	// (0x00023333) main_mp2_pane_t1_ParamLimits

0x4e4e,	// (0x00023333) main_mp2_pane_t1

0x4e65,	// (0x0002334a) main_mp2_pane_t2_ParamLimits

0x4e65,	// (0x0002334a) main_mp2_pane_t2

0x4e77,	// (0x0002335c) main_mp2_pane_t3_ParamLimits

0x4e77,	// (0x0002335c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d9bb) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d9bb) main_mp2_pane_t

0xb03e,	// (0x00029523) pec_content_pane_ParamLimits

0xb03e,	// (0x00029523) pec_content_pane

0xa564,	// (0x00028a49) scroll_pane_cp015

0xb050,	// (0x00029535) pec_attribute_pane_ParamLimits

0xb050,	// (0x00029535) pec_attribute_pane

0x4e89,	// (0x0002336e) pec_content_pane_g1_ParamLimits

0x4e89,	// (0x0002336e) pec_content_pane_g1

0xb060,	// (0x00029545) pec_content_pane_t1_ParamLimits

0xb060,	// (0x00029545) pec_content_pane_t1

0xb072,	// (0x00029557) pec_content_pane_t2_ParamLimits

0xb072,	// (0x00029557) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d9c2) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d9c2) pec_content_pane_t

0x4e95,	// (0x0002337a) list_single_graphic_pane_cp01_ParamLimits

0x4e95,	// (0x0002337a) list_single_graphic_pane_cp01

0xa0fb,	// (0x000285e0) bg_popup_sub_pane_cp04

0xb084,	// (0x00029569) popup_mup_playback_window_g1

0xb090,	// (0x00029575) popup_mup_playback_window_t1

0xb0a5,	// (0x0002958a) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d9c7) popup_mup_playback_window_t

0xb0dc,	// (0x000295c1) main_image_pane_g1_ParamLimits

0xb0dc,	// (0x000295c1) main_image_pane_g1

0xb11f,	// (0x00029604) scroll_pane_cp018_ParamLimits

0xb11f,	// (0x00029604) scroll_pane_cp018

0xb137,	// (0x0002961c) scroll_pane_cp016_ParamLimits

0xb137,	// (0x0002961c) scroll_pane_cp016

0x4f35,	// (0x0002341a) smil2_image_pane_ParamLimits

0x4f35,	// (0x0002341a) smil2_image_pane

0x4f69,	// (0x0002344e) smil2_root_pane_ParamLimits

0x4f69,	// (0x0002344e) smil2_root_pane

0x4f95,	// (0x0002347a) smil2_text_pane_ParamLimits

0x4f95,	// (0x0002347a) smil2_text_pane

0x9ea0,	// (0x00028385) bg_list_pane_cp06

0xb173,	// (0x00029658) grid_radio_pane

0x9ea0,	// (0x00028385) bg_popup_window_pane_cp06

0xb17b,	// (0x00029660) main_fmradio_pane_t1

0xaaa9,	// (0x00028f8e) heading_pane_cp04

0xb189,	// (0x0002966e) main_fmradio_pane_t2

0xc161,	// (0x0002a646) popup_cale_lunar_info_window_g1

0xb197,	// (0x0002967c) main_fmradio_pane_t3

0xc169,	// (0x0002a64e) popup_cale_lunar_info_window_g2

0xb1a5,	// (0x0002968a) main_fmradio_pane_t4

0x0001,

0xb1b3,	// (0x00029698) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002daa2) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d9dc) main_fmradio_pane_t

0xb1c1,	// (0x000296a6) wait_bar_pane_cp03

0xb1c9,	// (0x000296ae) cell_fmradio_pane_ParamLimits

0xb1c9,	// (0x000296ae) cell_fmradio_pane

0xb030,	// (0x00029515) cell_fmradio_pane_g1_ParamLimits

0xb030,	// (0x00029515) cell_fmradio_pane_g1

0x9ea0,	// (0x00028385) grid_highlight_pane_cp011

0xb1dc,	// (0x000296c1) poc_content_pane_ParamLimits

0xb1dc,	// (0x000296c1) poc_content_pane

0xb1ee,	// (0x000296d3) scroll_pane_cp019

0x4fd5,	// (0x000234ba) popup_call_poc_act_window_ParamLimits

0x4fd5,	// (0x000234ba) popup_call_poc_act_window

0x4fe2,	// (0x000234c7) popup_call_poc_inact_window_ParamLimits

0x4fe2,	// (0x000234c7) popup_call_poc_inact_window

0xf594,	// (0x0002da79) bg_popup_call_poc_act_pane_g

0xc0d9,	// (0x0002a5be) bg_popup_call_poc_inact_pane_g1

0xc0e1,	// (0x0002a5c6) bg_popup_call_poc_inact_pane_g2

0xb1f6,	// (0x000296db) popup_call_poc_act_window_g2

0xc0e9,	// (0x0002a5ce) bg_popup_call_poc_inact_pane_g3

0xc0f1,	// (0x0002a5d6) bg_popup_call_poc_inact_pane_g4

0xc0f9,	// (0x0002a5de) bg_popup_call_poc_inact_pane_g5

0xb1fe,	// (0x000296e3) popup_call_poc_act_window_t1_ParamLimits

0xb1fe,	// (0x000296e3) popup_call_poc_act_window_t1

0xb226,	// (0x0002970b) popup_call_poc_act_window_t2_ParamLimits

0xb226,	// (0x0002970b) popup_call_poc_act_window_t2

0xb24e,	// (0x00029733) popup_call_poc_act_window_t3_ParamLimits

0xb24e,	// (0x00029733) popup_call_poc_act_window_t3

0xb276,	// (0x0002975b) popup_call_poc_act_window_t4_ParamLimits

0xb276,	// (0x0002975b) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d9e7) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d9e7) popup_call_poc_act_window_t

0xc101,	// (0x0002a5e6) bg_popup_call_poc_inact_pane_g6

0xc109,	// (0x0002a5ee) bg_popup_call_poc_inact_pane_g7

0xc111,	// (0x0002a5f6) bg_popup_call_poc_inact_pane_g8

0xb288,	// (0x0002976d) popup_call_poc_inact_window_g2

0xc119,	// (0x0002a5fe) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002da66) bg_popup_call_poc_inact_pane_g

0xb290,	// (0x00029775) popup_call_poc_inact_window_t1_ParamLimits

0xb290,	// (0x00029775) popup_call_poc_inact_window_t1

0xb2a5,	// (0x0002978a) popup_call_poc_inact_window_t2_ParamLimits

0xb2a5,	// (0x0002978a) popup_call_poc_inact_window_t2

0xb2ba,	// (0x0002979f) popup_call_poc_inact_window_t3_ParamLimits

0xb2ba,	// (0x0002979f) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d9f0) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d9f0) popup_call_poc_inact_window_t

0xc29e,	// (0x0002a783) context_pane_ParamLimits

0x549c,	// (0x00023981) signal_pane_ParamLimits

0xa3bb,	// (0x000288a0) main_call2_pane

0x146c,	// (0x0001f951) popup_phob_thumbnail2_window_ParamLimits

0x146c,	// (0x0001f951) popup_phob_thumbnail2_window

0x12d3,	// (0x0001f7b8) aid_hotspot_pointer_arrow_pane

0x12db,	// (0x0001f7c0) aid_hotspot_pointer_hand_pane

0x5308,	// (0x000237ed) phob_pre_status_pane_g5

0x2e05,	// (0x000212ea) cams_zoom_pane_ParamLimits

0x2e11,	// (0x000212f6) image_vga_pane_ParamLimits

0x2e20,	// (0x00021305) main_camera_pane_g1_ParamLimits

0x2e2e,	// (0x00021313) main_camera_pane_g2_ParamLimits

0x2e3a,	// (0x0002131f) main_camera_pane_g3_ParamLimits

0x2e46,	// (0x0002132b) main_camera_pane_g4_ParamLimits

0x2e52,	// (0x00021337) main_camera_pane_g5_ParamLimits

0x2e5e,	// (0x00021343) main_camera_pane_g6_ParamLimits

0x2e6a,	// (0x0002134f) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d6ef) main_camera_pane_g_ParamLimits

0x2e76,	// (0x0002135b) main_camera_pane_t1_ParamLimits

0x2e88,	// (0x0002136d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d700) main_camera_pane_t_ParamLimits

0xa0fb,	// (0x000285e0) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0fb,	// (0x000285e0) bg_popup_preview_window_pane_cp01

0xb2cf,	// (0x000297b4) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2cf,	// (0x000297b4) popup_phob_thumbnail2_window_g1

0x9ea0,	// (0x00028385) call2_cli_visual_pane

0x4ffe,	// (0x000234e3) popup_call2_audio_conf_window_ParamLimits

0x4ffe,	// (0x000234e3) popup_call2_audio_conf_window

0x5013,	// (0x000234f8) popup_call2_audio_first_window_ParamLimits

0x5013,	// (0x000234f8) popup_call2_audio_first_window

0x50b1,	// (0x00023596) popup_call2_audio_in_window_ParamLimits

0x50b1,	// (0x00023596) popup_call2_audio_in_window

0x50f3,	// (0x000235d8) popup_call2_audio_out_window_ParamLimits

0x50f3,	// (0x000235d8) popup_call2_audio_out_window

0x5155,	// (0x0002363a) popup_call2_audio_second_window_ParamLimits

0x5155,	// (0x0002363a) popup_call2_audio_second_window

0x51b3,	// (0x00023698) popup_call2_audio_wait_window_ParamLimits

0x51b3,	// (0x00023698) popup_call2_audio_wait_window

0x9ea0,	// (0x00028385) bg_popup_call2_act_pane_cp03

0xa0dd,	// (0x000285c2) list_conf_pane_cp

0xb2db,	// (0x000297c0) popup_call2_audio_conf_window_t1

0xb2e9,	// (0x000297ce) list_single_graphic_popup_conf2_pane_ParamLimits

0xb2e9,	// (0x000297ce) list_single_graphic_popup_conf2_pane

0xab57,	// (0x0002903c) list_highlight_pane_cp04

0xb2fc,	// (0x000297e1) list_single_graphic_popup_conf2_pane_g1

0xab68,	// (0x0002904d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d9f7) list_single_graphic_popup_conf2_pane_g

0xb306,	// (0x000297eb) list_single_graphic_popup_conf2_pane_t1

0xb314,	// (0x000297f9) bg_popup_call2_act_pane_cp01_ParamLimits

0xb314,	// (0x000297f9) bg_popup_call2_act_pane_cp01

0xb39e,	// (0x00029883) call_type_pane_cp05_ParamLimits

0xb39e,	// (0x00029883) call_type_pane_cp05

0xb3f2,	// (0x000298d7) popup_call2_audio_second_window_g1_ParamLimits

0xb3f2,	// (0x000298d7) popup_call2_audio_second_window_g1

0xb446,	// (0x0002992b) popup_call2_audio_second_window_g2_ParamLimits

0xb446,	// (0x0002992b) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d9fc) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d9fc) popup_call2_audio_second_window_g

0xb4ab,	// (0x00029990) popup_call2_audio_second_window_t1_ParamLimits

0xb4ab,	// (0x00029990) popup_call2_audio_second_window_t1

0xb566,	// (0x00029a4b) popup_call2_audio_second_window_t2_ParamLimits

0xb566,	// (0x00029a4b) popup_call2_audio_second_window_t2

0xb5b9,	// (0x00029a9e) popup_call2_audio_second_window_t3_ParamLimits

0xb5b9,	// (0x00029a9e) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002da03) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002da03) popup_call2_audio_second_window_t

0x9ea0,	// (0x00028385) bg_popup_call2_in_pane_cp02

0x9eaa,	// (0x0002838f) call_type_pane_cp04

0x9eb2,	// (0x00028397) popup_call2_audio_wait_window_g1

0x9eba,	// (0x0002839f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d5de) popup_call2_audio_wait_window_g

0x9ec2,	// (0x000283a7) popup_call2_audio_wait_window_t3

0xb6ac,	// (0x00029b91) bg_popup_call2_act_pane_ParamLimits

0xb6ac,	// (0x00029b91) bg_popup_call2_act_pane

0xb76c,	// (0x00029c51) call_type_pane_cp03_ParamLimits

0xb76c,	// (0x00029c51) call_type_pane_cp03

0xb7d0,	// (0x00029cb5) popup_call2_audio_first_window_g1_ParamLimits

0xb7d0,	// (0x00029cb5) popup_call2_audio_first_window_g1

0xb840,	// (0x00029d25) popup_call2_audio_first_window_g2_ParamLimits

0xb840,	// (0x00029d25) popup_call2_audio_first_window_g2

0xab49,	// (0x0002902e) popup_call2_audio_first_window_g3_ParamLimits

0xab49,	// (0x0002902e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002da0c) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002da0c) popup_call2_audio_first_window_g

0xb91e,	// (0x00029e03) popup_call2_audio_first_window_t1_ParamLimits

0xb91e,	// (0x00029e03) popup_call2_audio_first_window_t1

0xba21,	// (0x00029f06) popup_call2_audio_first_window_t4_ParamLimits

0xba21,	// (0x00029f06) popup_call2_audio_first_window_t4

0xbb04,	// (0x00029fe9) popup_call2_audio_first_window_t5_ParamLimits

0xbb04,	// (0x00029fe9) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002da17) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002da17) popup_call2_audio_first_window_t

0xa0f3,	// (0x000285d8) bg_popup_call2_act_pane_g1

0xc171,	// (0x0002a656) popup_cale_lunar_info_window_t1

0xc17f,	// (0x0002a664) popup_cale_lunar_info_window_t2

0xc18d,	// (0x0002a672) popup_cale_lunar_info_window_t3

0x9ea0,	// (0x00028385) bg_popup_call2_bubble_pane

0xbc05,	// (0x0002a0ea) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc05,	// (0x0002a0ea) bg_popup_call2_in_pane_cp01

0x9b7c,	// (0x00028061) call_type_pane_cp02

0xbc4d,	// (0x0002a132) popup_call2_audio_out_window_g1_ParamLimits

0xbc4d,	// (0x0002a132) popup_call2_audio_out_window_g1

0xbc79,	// (0x0002a15e) popup_call2_audio_out_window_g2_ParamLimits

0xbc79,	// (0x0002a15e) popup_call2_audio_out_window_g2

0xbca1,	// (0x0002a186) popup_call2_audio_out_window_g3_ParamLimits

0xbca1,	// (0x0002a186) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002da20) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002da20) popup_call2_audio_out_window_g

0xbcdc,	// (0x0002a1c1) popup_call2_audio_out_window_t1_ParamLimits

0xbcdc,	// (0x0002a1c1) popup_call2_audio_out_window_t1

0xbd3b,	// (0x0002a220) popup_call2_audio_out_window_t2_ParamLimits

0xbd3b,	// (0x0002a220) popup_call2_audio_out_window_t2

0xbd8f,	// (0x0002a274) popup_call2_audio_out_window_t3_ParamLimits

0xbd8f,	// (0x0002a274) popup_call2_audio_out_window_t3

0xbda5,	// (0x0002a28a) popup_call2_audio_out_window_t4_ParamLimits

0xbda5,	// (0x0002a28a) popup_call2_audio_out_window_t4

0xbdbb,	// (0x0002a2a0) popup_call2_audio_out_window_t5_ParamLimits

0xbdbb,	// (0x0002a2a0) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002da29) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002da29) popup_call2_audio_out_window_t

0xbe1f,	// (0x0002a304) bg_popup_call2_in_pane_ParamLimits

0xbe1f,	// (0x0002a304) bg_popup_call2_in_pane

0xbe7b,	// (0x0002a360) popup_call2_audio_in_window_g1_ParamLimits

0xbe7b,	// (0x0002a360) popup_call2_audio_in_window_g1

0xbeb3,	// (0x0002a398) popup_call2_audio_in_window_g2_ParamLimits

0xbeb3,	// (0x0002a398) popup_call2_audio_in_window_g2

0xbeeb,	// (0x0002a3d0) popup_call2_audio_in_window_g3_ParamLimits

0xbeeb,	// (0x0002a3d0) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002da36) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002da36) popup_call2_audio_in_window_g

0xbf43,	// (0x0002a428) popup_call2_audio_in_window_t1_ParamLimits

0xbf43,	// (0x0002a428) popup_call2_audio_in_window_t1

0xbfc3,	// (0x0002a4a8) popup_call2_audio_in_window_t2_ParamLimits

0xbfc3,	// (0x0002a4a8) popup_call2_audio_in_window_t2

0xc043,	// (0x0002a528) popup_call2_audio_in_window_t3_ParamLimits

0xc043,	// (0x0002a528) popup_call2_audio_in_window_t3

0xc05d,	// (0x0002a542) popup_call2_audio_in_window_t4_ParamLimits

0xc05d,	// (0x0002a542) popup_call2_audio_in_window_t4

0xc06f,	// (0x0002a554) popup_call2_audio_in_window_t5_ParamLimits

0xc06f,	// (0x0002a554) popup_call2_audio_in_window_t5

0xc084,	// (0x0002a569) popup_call2_audio_in_window_t6_ParamLimits

0xc084,	// (0x0002a569) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002da3f) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002da3f) popup_call2_audio_in_window_t

0xa0f3,	// (0x000285d8) bg_popup_call2_in_pane_g1

0xc19b,	// (0x0002a680) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002daa7) popup_cale_lunar_info_window_t

0xa0fb,	// (0x000285e0) bg_popup_call2_rect_pane_ParamLimits

0xa0fb,	// (0x000285e0) bg_popup_call2_rect_pane

0x9ea0,	// (0x00028385) call2_cli_visual_graphic_pane

0x9ea0,	// (0x00028385) call2_cli_visual_text_pane

0x14bb,	// (0x0001f9a0) smil_status_volume_pane_g3

0x0002,

0xa234,	// (0x00028719) call2_cli_visual_graphic_pane_g1

0xa234,	// (0x00028719) call2_cli_visual_graphic_pane_g2

0xa234,	// (0x00028719) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002da4c) call2_cli_visual_graphic_pane_g

0xc099,	// (0x0002a57e) bg_popup_call2_rect_pane_g1

0xa2d2,	// (0x000287b7) bg_popup_call2_rect_pane_g2

0xc0a1,	// (0x0002a586) bg_popup_call2_rect_pane_g3

0xc0a9,	// (0x0002a58e) bg_popup_call2_rect_pane_g4

0xc0b1,	// (0x0002a596) bg_popup_call2_rect_pane_g5

0xc0b9,	// (0x0002a59e) bg_popup_call2_rect_pane_g6

0xc0c1,	// (0x0002a5a6) bg_popup_call2_rect_pane_g7

0xc0c9,	// (0x0002a5ae) bg_popup_call2_rect_pane_g8

0xc0d1,	// (0x0002a5b6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002da53) bg_popup_call2_rect_pane_g

0xc0d9,	// (0x0002a5be) bg_popup_call2_bubble_pane_g1

0xc0e1,	// (0x0002a5c6) bg_popup_call2_bubble_pane_g2

0xc0e9,	// (0x0002a5ce) bg_popup_call2_bubble_pane_g3

0xc0f1,	// (0x0002a5d6) bg_popup_call2_bubble_pane_g4

0xc0f9,	// (0x0002a5de) bg_popup_call2_bubble_pane_g5

0xc101,	// (0x0002a5e6) bg_popup_call2_bubble_pane_g6

0xc109,	// (0x0002a5ee) bg_popup_call2_bubble_pane_g7

0xc111,	// (0x0002a5f6) bg_popup_call2_bubble_pane_g8

0xc119,	// (0x0002a5fe) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002da66) bg_popup_call2_bubble_pane_g

0x2927,	// (0x00020e0c) aid_cale_week_size_cell_pane

0x2e9a,	// (0x0002137f) aid_cams_cif_uncrop_pane_ParamLimits

0x2e9a,	// (0x0002137f) aid_cams_cif_uncrop_pane

0x2ff5,	// (0x000214da) aid_cams_size_cell_ParamLimits

0x2ff5,	// (0x000214da) aid_cams_size_cell

0x3001,	// (0x000214e6) grid_cams_pane_ParamLimits

0x300f,	// (0x000214f4) linegrid_cams_pane_ParamLimits

0x31f4,	// (0x000216d9) call_video_pane_t1

0x3215,	// (0x000216fa) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d753) call_video_pane_t

0x3784,	// (0x00021c69) aid_cale_month_size_cell_pane_ParamLimits

0x3784,	// (0x00021c69) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002daf0) smil_status_volume_pane_g

0x14c8,	// (0x0001f9ad) volume_smil_pane_ParamLimits

0x0c70,	// (0x0001f155) aid_popup2_width_pane

0x2855,	// (0x00020d3a) cell_qdial_pane_g4_ParamLimits

0x2855,	// (0x00020d3a) cell_qdial_pane_g4

0x4720,	// (0x00022c05) aid_blid_cardinal_pane_ParamLimits

0x4730,	// (0x00022c15) aid_blid_destination_pane_ParamLimits

0x4730,	// (0x00022c15) aid_blid_destination_pane

0xa0fb,	// (0x000285e0) bg_popup_call_poc_act_pane_ParamLimits

0xa0fb,	// (0x000285e0) bg_popup_call_poc_act_pane

0xa0fb,	// (0x000285e0) bg_popup_call_poc_inact_pane_ParamLimits

0xa0fb,	// (0x000285e0) bg_popup_call_poc_inact_pane

0xc121,	// (0x0002a606) bg_popup_call_poc_act_pane_g1

0xc129,	// (0x0002a60e) bg_popup_call_poc_act_pane_g2

0xc131,	// (0x0002a616) bg_popup_call_poc_act_pane_g3

0xc0f1,	// (0x0002a5d6) bg_popup_call_poc_act_pane_g4

0xc0f9,	// (0x0002a5de) bg_popup_call_poc_act_pane_g5

0xc139,	// (0x0002a61e) bg_popup_call_poc_act_pane_g6

0xc109,	// (0x0002a5ee) bg_popup_call_poc_act_pane_g7

0xc141,	// (0x0002a626) bg_popup_call_poc_act_pane_g8

0x9ea0,	// (0x00028385) main_usb_pane

0x13a5,	// (0x0001f88a) popup_cale_lunar_info_window

0x3534,	// (0x00021a19) im_reading_pane_t1_ParamLimits

0xa4bc,	// (0x000289a1) list_im_pane_ParamLimits

0xa4cd,	// (0x000289b2) scroll_pane_cp07_ParamLimits

0x9ea0,	// (0x00028385) grid_highlight_pane_cp012

0xa0fb,	// (0x000285e0) mup_scale_pane_ParamLimits

0xab49,	// (0x0002902e) main_usb_pane_g1_ParamLimits

0xab49,	// (0x0002902e) main_usb_pane_g1

0x522b,	// (0x00023710) main_usb_pane_g2_ParamLimits

0x522b,	// (0x00023710) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002da90) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002da90) main_usb_pane_g

0x5237,	// (0x0002371c) main_usb_pane_t1_ParamLimits

0x5237,	// (0x0002371c) main_usb_pane_t1

0x5249,	// (0x0002372e) main_usb_pane_t2_ParamLimits

0x5249,	// (0x0002372e) main_usb_pane_t2

0x525b,	// (0x00023740) main_usb_pane_t3_ParamLimits

0x525b,	// (0x00023740) main_usb_pane_t3

0x526d,	// (0x00023752) main_usb_pane_t4_ParamLimits

0x526d,	// (0x00023752) main_usb_pane_t4

0x527f,	// (0x00023764) main_usb_pane_t5_ParamLimits

0x527f,	// (0x00023764) main_usb_pane_t5

0x5291,	// (0x00023776) main_usb_pane_t6_ParamLimits

0x5291,	// (0x00023776) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002da95) main_usb_pane_t_ParamLimits

0x46c6,	// (0x00022bab) aid_text_placing

0x46d2,	// (0x00022bb7) main_location2_pane_t1_ParamLimits

0x46e6,	// (0x00022bcb) main_location2_pane_t2_ParamLimits

0x46fa,	// (0x00022bdf) main_location2_pane_t3_ParamLimits

0x470e,	// (0x00022bf3) main_location2_pane_t4_ParamLimits

0x470e,	// (0x00022bf3) main_location2_pane_t4

0xf3cf,	// (0x0002d8b4) main_location2_pane_t_ParamLimits

0xa137,	// (0x0002861c) find_pinb_pane_g2_ParamLimits

0xa137,	// (0x0002861c) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002d604) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002d604) find_pinb_pane_g

0xa143,	// (0x00028628) find_pinb_pane_t1_ParamLimits

0xa155,	// (0x0002863a) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002d609) find_pinb_pane_t_ParamLimits

0x9ea0,	// (0x00028385) main_call3_pane

0x3cf8,	// (0x000221dd) cale_month_day_heading_pane_t1_ParamLimits

0x3d7e,	// (0x00022263) cale_month_day_heading_pane_t2_ParamLimits

0x3e0f,	// (0x000222f4) cale_month_day_heading_pane_t3_ParamLimits

0x3ea0,	// (0x00022385) cale_month_day_heading_pane_t4_ParamLimits

0x3f31,	// (0x00022416) cale_month_day_heading_pane_t5_ParamLimits

0x3fc2,	// (0x000224a7) cale_month_day_heading_pane_t6_ParamLimits

0x405f,	// (0x00022544) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d78b) cale_month_day_heading_pane_t_ParamLimits

0xa717,	// (0x00028bfc) smil_status_volume_pane

0x4de2,	// (0x000232c7) postcard_address_pane_ParamLimits

0x4de2,	// (0x000232c7) postcard_address_pane

0x4dee,	// (0x000232d3) postcard_message_pane_ParamLimits

0x4dee,	// (0x000232d3) postcard_message_pane

0x51f2,	// (0x000236d7) call2_cli_visual_pane_t1_ParamLimits

0x51f2,	// (0x000236d7) call2_cli_visual_pane_t1

0x568a,	// (0x00023b6f) postcard_message_pane_t1_ParamLimits

0x568a,	// (0x00023b6f) postcard_message_pane_t1

0x5673,	// (0x00023b58) postcard_address_pane_t1_ParamLimits

0x5673,	// (0x00023b58) postcard_address_pane_t1

0x5664,	// (0x00023b49) popup_call3_audio_in_window_ParamLimits

0x5664,	// (0x00023b49) popup_call3_audio_in_window

0x554a,	// (0x00023a2f) bg_popup_call3_in_pane_ParamLimits

0x554a,	// (0x00023a2f) bg_popup_call3_in_pane

0x55aa,	// (0x00023a8f) popup_call3_audio_in_window_g1_ParamLimits

0x55aa,	// (0x00023a8f) popup_call3_audio_in_window_g1

0x55c2,	// (0x00023aa7) popup_call3_audio_in_window_g2_ParamLimits

0x55c2,	// (0x00023aa7) popup_call3_audio_in_window_g2

0x55da,	// (0x00023abf) popup_call3_audio_in_window_g3_ParamLimits

0x55da,	// (0x00023abf) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002daf7) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002daf7) popup_call3_audio_in_window_g

0x5602,	// (0x00023ae7) popup_call3_audio_in_window_t1_ParamLimits

0x5602,	// (0x00023ae7) popup_call3_audio_in_window_t1

0x562a,	// (0x00023b0f) popup_call3_audio_in_window_t2_ParamLimits

0x562a,	// (0x00023b0f) popup_call3_audio_in_window_t2

0x5652,	// (0x00023b37) popup_call3_audio_in_window_t3_ParamLimits

0x5652,	// (0x00023b37) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002db00) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002db00) popup_call3_audio_in_window_t

0xa3bb,	// (0x000288a0) bg_popup_call3_rect_pane

0xc099,	// (0x0002a57e) bg_popup_call3_rect_pane_g1

0xa2d2,	// (0x000287b7) bg_popup_call3_rect_pane_g2

0xc0a1,	// (0x0002a586) bg_popup_call3_rect_pane_g3

0xc0a9,	// (0x0002a58e) bg_popup_call3_rect_pane_g4

0xc0b1,	// (0x0002a596) bg_popup_call3_rect_pane_g5

0xc0b9,	// (0x0002a59e) bg_popup_call3_rect_pane_g6

0xc0c1,	// (0x0002a5a6) bg_popup_call3_rect_pane_g7

0x4a34,	// (0x00022f19) mup_visualizer_osc_pane

0xaefc,	// (0x000293e1) mup_visualizer_spec_pane

0x556a,	// (0x00023a4f) call3_video_qcif_pane_ParamLimits

0x556a,	// (0x00023a4f) call3_video_qcif_pane

0x557a,	// (0x00023a5f) call3_video_qcif_uncrop_pane_ParamLimits

0x557a,	// (0x00023a5f) call3_video_qcif_uncrop_pane

0x5588,	// (0x00023a6d) call3_video_subqcif_pane_ParamLimits

0x5588,	// (0x00023a6d) call3_video_subqcif_pane

0x559a,	// (0x00023a7f) call3_video_subqcif_uncrop_pane_ParamLimits

0x559a,	// (0x00023a7f) call3_video_subqcif_uncrop_pane

0x55f2,	// (0x00023ad7) popup_call3_audio_in_window_g4_ParamLimits

0x55f2,	// (0x00023ad7) popup_call3_audio_in_window_g4

0x5537,	// (0x00023a1c) mup_spec_half_pane

0x5540,	// (0x00023a25) mup_spec_half_pane_cp

0xc2fe,	// (0x0002a7e3) mup_osc_middle_pane

0xc307,	// (0x0002a7ec) mup_visualizer_osc_pane_g1

0x5518,	// (0x000239fd) mup_spec_bar_pane_ParamLimits

0x5518,	// (0x000239fd) mup_spec_bar_pane

0xc2eb,	// (0x0002a7d0) mup_spec_bar_pane_g1

0xc2f5,	// (0x0002a7da) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002daeb) mup_spec_bar_pane_g

0x2927,	// (0x00020e0c) aid_cale_week_size_cell_pane_ParamLimits

0x293c,	// (0x00020e21) bg_cale_heading_pane_ParamLimits

0xa30f,	// (0x000287f4) bg_cale_pane_cp01_ParamLimits

0x295e,	// (0x00020e43) cale_week_corner_pane_ParamLimits

0x2978,	// (0x00020e5d) cale_week_day_heading_pane_ParamLimits

0x299a,	// (0x00020e7f) cale_week_scroll_pane_g1_ParamLimits

0x29b7,	// (0x00020e9c) cale_week_scroll_pane_g2_ParamLimits

0x29ca,	// (0x00020eaf) cale_week_scroll_pane_g3_ParamLimits

0x29dd,	// (0x00020ec2) cale_week_scroll_pane_g4_ParamLimits

0x29f0,	// (0x00020ed5) cale_week_scroll_pane_g5_ParamLimits

0x2a03,	// (0x00020ee8) cale_week_scroll_pane_g6_ParamLimits

0x2a16,	// (0x00020efb) cale_week_scroll_pane_g7_ParamLimits

0x2a29,	// (0x00020f0e) cale_week_scroll_pane_g8_ParamLimits

0x2a3e,	// (0x00020f23) cale_week_scroll_pane_g9_ParamLimits

0x2a51,	// (0x00020f36) cale_week_scroll_pane_g10_ParamLimits

0x2a64,	// (0x00020f49) cale_week_scroll_pane_g11_ParamLimits

0x2a77,	// (0x00020f5c) cale_week_scroll_pane_g12_ParamLimits

0x2a8e,	// (0x00020f73) cale_week_scroll_pane_g13_ParamLimits

0x2aa9,	// (0x00020f8e) cale_week_scroll_pane_g14_ParamLimits

0x2ac4,	// (0x00020fa9) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002d695) cale_week_scroll_pane_g_ParamLimits

0x2af4,	// (0x00020fd9) cale_week_time_pane_ParamLimits

0x2b09,	// (0x00020fee) grid_cale_week_pane_ParamLimits

0xa33a,	// (0x0002881f) listscroll_cale_week_pane_t1

0xa34c,	// (0x00028831) scroll_pane_cp08_ParamLimits

0x37ed,	// (0x00021cd2) cale_month_corner_pane_ParamLimits

0xa6ed,	// (0x00028bd2) cale_month_pane_t1

0x3c91,	// (0x00022176) cale_month_week_pane_ParamLimits

0xab49,	// (0x0002902e) popup_call_status_window_g1_ParamLimits

0x457f,	// (0x00022a64) popup_call_status_window_g2_ParamLimits

0x458b,	// (0x00022a70) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d83b) popup_call_status_window_g_ParamLimits

0xaa99,	// (0x00028f7e) aid_call2_pane

0x4ccd,	// (0x000231b2) msg_header_pane_g1

0x4de2,	// (0x000232c7) postcard_address2_pane_ParamLimits

0x4de2,	// (0x000232c7) postcard_address2_pane

0x4dee,	// (0x000232d3) postcard_message2_pane_ParamLimits

0x4dee,	// (0x000232d3) postcard_message2_pane

0x54aa,	// (0x0002398f) message2_row_pane_ParamLimits

0x54aa,	// (0x0002398f) message2_row_pane

0x54c7,	// (0x000239ac) address2_row_pane_ParamLimits

0x54c7,	// (0x000239ac) address2_row_pane

0xc2b9,	// (0x0002a79e) postcard_message2_row_pane_g1

0xc2c1,	// (0x0002a7a6) postcard_message2_row_pane_t1

0xc2b9,	// (0x0002a79e) address2_row_pane_g1

0xc2c1,	// (0x0002a7a6) address2_row_pane_t1

0x2d8a,	// (0x0002126f) aid_size_cell_vorec

0x9ea0,	// (0x00028385) main_rss_pane

0x54da,	// (0x000239bf) rss_list_single_pane_ParamLimits

0x54da,	// (0x000239bf) rss_list_single_pane

0xc2cf,	// (0x0002a7b4) rss_list_single_pane_t1

0xc2dd,	// (0x0002a7c2) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002dae6) rss_list_single_pane_t

0x9ea0,	// (0x00028385) main_camera2_pane

0x9ea0,	// (0x00028385) main_video2_pane

0x1526,	// (0x0001fa0b) cams_zoom_pane_cp2_ParamLimits

0x1526,	// (0x0001fa0b) cams_zoom_pane_cp2

0x1532,	// (0x0001fa17) image2_vga_pane_ParamLimits

0x1532,	// (0x0001fa17) image2_vga_pane

0x1541,	// (0x0001fa26) main_camera2_pane_g1_ParamLimits

0x1541,	// (0x0001fa26) main_camera2_pane_g1

0x154d,	// (0x0001fa32) main_camera2_pane_g2_ParamLimits

0x154d,	// (0x0001fa32) main_camera2_pane_g2

0x1559,	// (0x0001fa3e) main_camera2_pane_g3_ParamLimits

0x1559,	// (0x0001fa3e) main_camera2_pane_g3

0x1565,	// (0x0001fa4a) main_camera2_pane_g4_ParamLimits

0x1565,	// (0x0001fa4a) main_camera2_pane_g4

0x1571,	// (0x0001fa56) main_camera2_pane_g5_ParamLimits

0x1571,	// (0x0001fa56) main_camera2_pane_g5

0x157d,	// (0x0001fa62) main_camera2_pane_g6_ParamLimits

0x157d,	// (0x0001fa62) main_camera2_pane_g6

0x1589,	// (0x0001fa6e) main_camera2_pane_g7_ParamLimits

0x1589,	// (0x0001fa6e) main_camera2_pane_g7

0x1595,	// (0x0001fa7a) main_camera2_pane_g8_ParamLimits

0x1595,	// (0x0001fa7a) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002db07) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002db07) main_camera2_pane_g

0x15ad,	// (0x0001fa92) main_camera2_pane_t1_ParamLimits

0x15ad,	// (0x0001fa92) main_camera2_pane_t1

0x15bf,	// (0x0001faa4) main_camera2_pane_t2_ParamLimits

0x15bf,	// (0x0001faa4) main_camera2_pane_t2

0x15d1,	// (0x0001fab6) main_camera2_pane_t3_ParamLimits

0x15d1,	// (0x0001fab6) main_camera2_pane_t3

0x15e3,	// (0x0001fac8) main_camera2_pane_t4_ParamLimits

0x15e3,	// (0x0001fac8) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002db1a) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002db1a) main_camera2_pane_t

0x1645,	// (0x0001fb2a) cams_zoom_pane_cp4_ParamLimits

0x1645,	// (0x0001fb2a) cams_zoom_pane_cp4

0x1655,	// (0x0001fb3a) image2_cif_pane_ParamLimits

0x1655,	// (0x0001fb3a) image2_cif_pane

0x166a,	// (0x0001fb4f) image2_subqcif_pane_ParamLimits

0x166a,	// (0x0001fb4f) image2_subqcif_pane

0x1679,	// (0x0001fb5e) main_video2_pane_g1_ParamLimits

0x1679,	// (0x0001fb5e) main_video2_pane_g1

0x168b,	// (0x0001fb70) main_video2_pane_g2_ParamLimits

0x168b,	// (0x0001fb70) main_video2_pane_g2

0x169b,	// (0x0001fb80) main_video2_pane_g3_ParamLimits

0x169b,	// (0x0001fb80) main_video2_pane_g3

0x16ab,	// (0x0001fb90) main_video2_pane_g4_ParamLimits

0x16ab,	// (0x0001fb90) main_video2_pane_g4

0x16bb,	// (0x0001fba0) main_video2_pane_g5_ParamLimits

0x16bb,	// (0x0001fba0) main_video2_pane_g5

0x16cb,	// (0x0001fbb0) main_video2_pane_g6_ParamLimits

0x16cb,	// (0x0001fbb0) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002db29) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002db29) main_video2_pane_g

0x16dd,	// (0x0001fbc2) main_video2_pane_t1_ParamLimits

0x16dd,	// (0x0001fbc2) main_video2_pane_t1

0x16f7,	// (0x0001fbdc) main_video2_pane_t2_ParamLimits

0x16f7,	// (0x0001fbdc) main_video2_pane_t2

0x171d,	// (0x0001fc02) main_video2_pane_t3_ParamLimits

0x171d,	// (0x0001fc02) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002db36) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002db36) main_video2_pane_t

0x5348,	// (0x0002382d) call_muted_g2

0x0001,

0xf5f3,	// (0x0002dad8) call_muted_g

0x9ea0,	// (0x00028385) main_mup2_pane

0xc33e,	// (0x0002a823) main_mup2_pane_g1_ParamLimits

0xc33e,	// (0x0002a823) main_mup2_pane_g1

0x56a5,	// (0x00023b8a) main_mup2_pane_g2_ParamLimits

0x56a5,	// (0x00023b8a) main_mup2_pane_g2

0x176c,	// (0x0001fc51) main_mup_pane_g13_cp1

0x1774,	// (0x0001fc59) mup_volume_pane_cp1

0x56c5,	// (0x00023baa) main_mup2_pane_g4_ParamLimits

0x56c5,	// (0x00023baa) main_mup2_pane_g4

0x56da,	// (0x00023bbf) main_mup2_pane_g5_ParamLimits

0x56da,	// (0x00023bbf) main_mup2_pane_g5

0x56ef,	// (0x00023bd4) main_mup2_pane_g6_ParamLimits

0x56ef,	// (0x00023bd4) main_mup2_pane_g6

0x5704,	// (0x00023be9) main_mup2_pane_g7_ParamLimits

0x5704,	// (0x00023be9) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002db3d) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002db3d) main_mup2_pane_g

0x5720,	// (0x00023c05) main_mup2_pane_t1_ParamLimits

0x5720,	// (0x00023c05) main_mup2_pane_t1

0x5737,	// (0x00023c1c) main_mup2_pane_t2_ParamLimits

0x5737,	// (0x00023c1c) main_mup2_pane_t2

0x574e,	// (0x00023c33) main_mup2_pane_t3_ParamLimits

0x574e,	// (0x00023c33) main_mup2_pane_t3

0x5765,	// (0x00023c4a) main_mup2_pane_t4_ParamLimits

0x5765,	// (0x00023c4a) main_mup2_pane_t4

0x577f,	// (0x00023c64) main_mup2_pane_t5_ParamLimits

0x577f,	// (0x00023c64) main_mup2_pane_t5

0x5799,	// (0x00023c7e) main_mup2_pane_t6_ParamLimits

0x5799,	// (0x00023c7e) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002db4c) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002db4c) main_mup2_pane_t

0x57d1,	// (0x00023cb6) mup2_visualizer_pane_ParamLimits

0x57d1,	// (0x00023cb6) mup2_visualizer_pane

0x5807,	// (0x00023cec) mup_progress_pane_cp_ParamLimits

0x5807,	// (0x00023cec) mup_progress_pane_cp

0x1757,	// (0x0001fc3c) mup_volume_pane_cp_ParamLimits

0x1757,	// (0x0001fc3c) mup_volume_pane_cp

0x581e,	// (0x00023d03) mup2_visualizer_pane_g1_ParamLimits

0x581e,	// (0x00023d03) mup2_visualizer_pane_g1

0xc34a,	// (0x0002a82f) mup2_visualizer_pane_g2_ParamLimits

0xc34a,	// (0x0002a82f) mup2_visualizer_pane_g2

0x5833,	// (0x00023d18) mup2_visualizer_pane_g3_ParamLimits

0x5833,	// (0x00023d18) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002db59) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002db59) mup2_visualizer_pane_g

0xb16b,	// (0x00029650) aid_size_cell_fmradio

0x1339,	// (0x0001f81e) aid_height_parent_landcape

0xa54b,	// (0x00028a30) wml_content_pane_cp

0xa553,	// (0x00028a38) wml_tabs_pane

0xa55c,	// (0x00028a41) popup_wml_miniature_window

0xa564,	// (0x00028a49) scroll_pane_cp021

0xa578,	// (0x00028a5d) wml_content_pane_comp8

0x9ea0,	// (0x00028385) bg_popup_sub_pane_cp05

0xc368,	// (0x0002a84d) popup_wml_miniature_window_g1

0xc370,	// (0x0002a855) wml_miniature_view_pane

0x5841,	// (0x00023d26) aid_size_wml_view

0x5849,	// (0x00023d2e) wml_miniature_view_pane_g1

0x5852,	// (0x00023d37) wml_miniature_view_pane_g2

0x585b,	// (0x00023d40) wml_miniature_view_pane_g3

0x5863,	// (0x00023d48) wml_miniature_view_pane_g4

0x586b,	// (0x00023d50) wml_miniature_view_pane_g5

0x5873,	// (0x00023d58) wml_miniature_view_pane_g6

0x587b,	// (0x00023d60) wml_miniature_view_pane_g7

0x5883,	// (0x00023d68) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002db60) wml_miniature_view_pane_g

0xc33e,	// (0x0002a823) background_graphic_ParamLimits

0xc33e,	// (0x0002a823) background_graphic

0xc378,	// (0x0002a85d) wml_tabs_2_pane

0xc381,	// (0x0002a866) wml_tabs_3_pane_ParamLimits

0xc381,	// (0x0002a866) wml_tabs_3_pane

0xc393,	// (0x0002a878) wml_tabs_4_pane_ParamLimits

0xc393,	// (0x0002a878) wml_tabs_4_pane

0xc3a9,	// (0x0002a88e) wml_tabs_5_pane_ParamLimits

0xc3a9,	// (0x0002a88e) wml_tabs_5_pane

0xc3c3,	// (0x0002a8a8) wml_tabs_pane_g2_ParamLimits

0xc3c3,	// (0x0002a8a8) wml_tabs_pane_g2

0xc3d7,	// (0x0002a8bc) wml_tabs_pane_g3_ParamLimits

0xc3d7,	// (0x0002a8bc) wml_tabs_pane_g3

0x588b,	// (0x00023d70) wml_tabs_2_active_pane_ParamLimits

0x588b,	// (0x00023d70) wml_tabs_2_active_pane

0x589b,	// (0x00023d80) wml_tabs_2_passive_pane_ParamLimits

0x589b,	// (0x00023d80) wml_tabs_2_passive_pane

0x58ab,	// (0x00023d90) wml_tabs_3_active_pane_cp_ParamLimits

0x58ab,	// (0x00023d90) wml_tabs_3_active_pane_cp

0x58bc,	// (0x00023da1) wml_tabs_3_passive_pane_ParamLimits

0x58bc,	// (0x00023da1) wml_tabs_3_passive_pane

0x58cd,	// (0x00023db2) wml_tabs_3_passive_pane_cp_ParamLimits

0x58cd,	// (0x00023db2) wml_tabs_3_passive_pane_cp

0x58de,	// (0x00023dc3) tabs_4_active_pane

0x58e6,	// (0x00023dcb) tabs_4_passive_pane

0x58ee,	// (0x00023dd3) tabs_4_passive_pane_cp

0x58f6,	// (0x00023ddb) tabs_4_passive_pane_cp2

0x5223,	// (0x00023708) aid_height_text

0x49fd,	// (0x00022ee2) mup_volume_cont_pane_ParamLimits

0x49fd,	// (0x00022ee2) mup_volume_cont_pane

0x260f,	// (0x00020af4) aid_size_cell_pinb

0x2619,	// (0x00020afe) aid_size_list_pinb

0x57f0,	// (0x00023cd5) mup2_volume_cont_pane_ParamLimits

0x57f0,	// (0x00023cd5) mup2_volume_cont_pane

0x1743,	// (0x0001fc28) mup2_volume_cont_pane_g1_ParamLimits

0x1743,	// (0x0001fc28) mup2_volume_cont_pane_g1

0x0c7c,	// (0x0001f161) aid_size_cell_touch_ParamLimits

0x0c7c,	// (0x0001f161) aid_size_cell_touch

0x0f04,	// (0x0001f3e9) touch_pane_ParamLimits

0x0f04,	// (0x0001f3e9) touch_pane

0x0efa,	// (0x0001f3df) main_rss2_pane

0xc3f4,	// (0x0002a8d9) listscroll_rss2_pane

0xc3fd,	// (0x0002a8e2) rss2_navigation_pane

0xc405,	// (0x0002a8ea) list_rss2_pane

0xac02,	// (0x000290e7) scroll_pane_cp22

0xc40d,	// (0x0002a8f2) rss2_navigation_pane_g1

0xc416,	// (0x0002a8fb) rss2_navigation_pane_g2

0xc41e,	// (0x0002a903) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002db71) rss2_navigation_pane_g

0xc426,	// (0x0002a90b) rss2_navigation_pane_t1

0x58fe,	// (0x00023de3) rss2_list_single_pane_ParamLimits

0x58fe,	// (0x00023de3) rss2_list_single_pane

0xc434,	// (0x0002a919) rss2_list_single_pane_t2

0xc442,	// (0x0002a927) rss2_list_single_pane_t3_ParamLimits

0xc442,	// (0x0002a927) rss2_list_single_pane_t3

0xc45f,	// (0x0002a944) rss2_list_single_pane_t4

0x430d,	// (0x000227f2) smil_status_pane_g1

0x1350,	// (0x0001f835) main_image2_pane_ParamLimits

0x1350,	// (0x0001f835) main_image2_pane

0x15a1,	// (0x0001fa86) main_camera2_pane_g9_ParamLimits

0x15a1,	// (0x0001fa86) main_camera2_pane_g9

0x15f5,	// (0x0001fada) main_camera2_pane_t5_ParamLimits

0x15f5,	// (0x0001fada) main_camera2_pane_t5

0x1607,	// (0x0001faec) main_camera2_pane_t6_ParamLimits

0x1607,	// (0x0001faec) main_camera2_pane_t6

0x5936,	// (0x00023e1b) main_image2_pane_g1_ParamLimits

0x5936,	// (0x00023e1b) main_image2_pane_g1

0x4fbf,	// (0x000234a4) smil2_video_pane_ParamLimits

0x4fbf,	// (0x000234a4) smil2_video_pane

0x0cb0,	// (0x0001f195) aid_zoom_text_primary_cp

0x0ea1,	// (0x0001f386) popup_preview_fixed_window

0xa4b4,	// (0x00028999) im_reading_pane_g1

0x14eb,	// (0x0001f9d0) cams2_bc_adjust_pane_cp_ParamLimits

0x14eb,	// (0x0001f9d0) cams2_bc_adjust_pane_cp

0x1637,	// (0x0001fb1c) cams2_bc_adjust_pane_ParamLimits

0x1637,	// (0x0001fb1c) cams2_bc_adjust_pane

0xd79c,	// (0x0002bc81) cams2_bc_adjust_pane_g1

0x177c,	// (0x0001fc61) cams2_slider_pane

0x1785,	// (0x0001fc6a) cams2_slider_pane_g1

0x178e,	// (0x0001fc73) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002db78) cams2_slider_pane_g

0x0f75,	// (0x0001f45a) calc_display_pane_ParamLimits

0x0f93,	// (0x0001f478) calc_paper_pane_ParamLimits

0x0faf,	// (0x0001f494) grid_calc_pane_ParamLimits

0x12a4,	// (0x0001f789) popup_clock_digital_window_t1_ParamLimits

0xb108,	// (0x000295ed) main_image_pane_t1

0x0f5b,	// (0x0001f440) aid_size_cell_calc_ParamLimits

0x0f5b,	// (0x0001f440) aid_size_cell_calc

0x1381,	// (0x0001f866) popup_blid_sat_info2_window_ParamLimits

0x1381,	// (0x0001f866) popup_blid_sat_info2_window

0xc475,	// (0x0002a95a) aid_size_cell_blid

0xc47d,	// (0x0002a962) bg_popup_window_pane_cp07

0xc4a0,	// (0x0002a985) grid_popup_blid_pane

0xc4aa,	// (0x0002a98f) heading_pane_cp05_ParamLimits

0xc4aa,	// (0x0002a98f) heading_pane_cp05

0xc574,	// (0x0002aa59) cell_popup_blid_pane_ParamLimits

0xc574,	// (0x0002aa59) cell_popup_blid_pane

0xc59a,	// (0x0002aa7f) cell_popup_blid_pane_g1

0xc5a2,	// (0x0002aa87) cell_popup_blid_pane_t1

0x57b6,	// (0x00023c9b) mup2_indicator_pane_ParamLimits

0x57b6,	// (0x00023c9b) mup2_indicator_pane

0xa3bb,	// (0x000288a0) mup2_visualizer_osc_pane

0xc356,	// (0x0002a83b) mup2_visualizer_spec_pane_ParamLimits

0xc356,	// (0x0002a83b) mup2_visualizer_spec_pane

0x5942,	// (0x00023e27) mup2_spec_half_pane

0x594b,	// (0x00023e30) mup2_spec_half_pane_cp

0x5955,	// (0x00023e3a) mup2_spec_bar_pane_ParamLimits

0x5955,	// (0x00023e3a) mup2_spec_bar_pane

0xc2eb,	// (0x0002a7d0) mup2_spec_bar_pane_g1

0xc2f5,	// (0x0002a7da) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002daeb) mup2_spec_bar_pane_g

0x5974,	// (0x00023e59) mup2_osc_middle_pane

0xc307,	// (0x0002a7ec) mup2_visualizer_osc_pane_g1

0x9aad,	// (0x00027f92) popup_number_entry_window_t1_ParamLimits

0x9ac0,	// (0x00027fa5) popup_number_entry_window_t2_ParamLimits

0x9ad2,	// (0x00027fb7) popup_number_entry_window_t3_ParamLimits

0x2549,	// (0x00020a2e) popup_number_entry_window_t5_ParamLimits

0x2549,	// (0x00020a2e) popup_number_entry_window_t5

0xf0ca,	// (0x0002d5af) popup_number_entry_window_t_ParamLimits

0x9ae4,	// (0x00027fc9) text_title_cp2_ParamLimits

0x12e3,	// (0x0001f7c8) aid_hotspot_pointer_text2_pane

0x132d,	// (0x0001f812) main_viewer_pane_g9_ParamLimits

0x132d,	// (0x0001f812) main_viewer_pane_g9

0xa6ed,	// (0x00028bd2) cale_month_pane_t1_ParamLimits

0xa72a,	// (0x00028c0f) bg_cale_pane_ParamLimits

0xa742,	// (0x00028c27) list_cale_pane_ParamLimits

0xa753,	// (0x00028c38) listscroll_cale_day_pane_t1

0xa765,	// (0x00028c4a) scroll_pane_cp09_ParamLimits

0x4a3c,	// (0x00022f21) main_mup_eq_pane_t1_ParamLimits

0x4a3c,	// (0x00022f21) main_mup_eq_pane_t1

0x4a56,	// (0x00022f3b) main_mup_eq_pane_t2_ParamLimits

0x4a56,	// (0x00022f3b) main_mup_eq_pane_t2

0x4a6e,	// (0x00022f53) main_mup_eq_pane_t3_ParamLimits

0x4a6e,	// (0x00022f53) main_mup_eq_pane_t3

0x4a86,	// (0x00022f6b) main_mup_eq_pane_t4_ParamLimits

0x4a86,	// (0x00022f6b) main_mup_eq_pane_t4

0x4a9e,	// (0x00022f83) main_mup_eq_pane_t5_ParamLimits

0x4a9e,	// (0x00022f83) main_mup_eq_pane_t5

0x4ab6,	// (0x00022f9b) main_mup_eq_pane_t6_ParamLimits

0x4ab6,	// (0x00022f9b) main_mup_eq_pane_t6

0x4aca,	// (0x00022faf) main_mup_eq_pane_t7_ParamLimits

0x4aca,	// (0x00022faf) main_mup_eq_pane_t7

0x4ade,	// (0x00022fc3) main_mup_eq_pane_t8_ParamLimits

0x4ade,	// (0x00022fc3) main_mup_eq_pane_t8

0x4af4,	// (0x00022fd9) main_mup_eq_pane_t9_ParamLimits

0x4af4,	// (0x00022fd9) main_mup_eq_pane_t9

0x4b0c,	// (0x00022ff1) main_mup_eq_pane_t10_ParamLimits

0x4b0c,	// (0x00022ff1) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d93a) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d93a) main_mup_eq_pane_t

0x4bc9,	// (0x000230ae) mup_equalizer_pane_cp5_ParamLimits

0x4bdf,	// (0x000230c4) mup_equalizer_pane_cp6_ParamLimits

0x4bf7,	// (0x000230dc) mup_equalizer_pane_cp7_ParamLimits

0x0efa,	// (0x0001f3df) main_gallery_pane

0xc310,	// (0x0002a7f5) smil2_volume_pane

0xc318,	// (0x0002a7fd) smil_status_volume_pane_g1_ParamLimits

0xc32b,	// (0x0002a810) smil_status_volume_pane_g2_ParamLimits

0x14bb,	// (0x0001f9a0) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002daf0) smil_status_volume_pane_g_ParamLimits

0xc47d,	// (0x0002a962) bg_popup_window_pane_cp07_ParamLimits

0xc48b,	// (0x0002a970) blid_firmament_pane

0x597d,	// (0x00023e62) aid_size_cell_gallery_ParamLimits

0x597d,	// (0x00023e62) aid_size_cell_gallery

0x598b,	// (0x00023e70) grid_gallery_pane_ParamLimits

0x598b,	// (0x00023e70) grid_gallery_pane

0x599b,	// (0x00023e80) cell_gallery_pane_ParamLimits

0x599b,	// (0x00023e80) cell_gallery_pane

0xc5b0,	// (0x0002aa95) bg_cell_gallery_focus_pane_ParamLimits

0xc5b0,	// (0x0002aa95) bg_cell_gallery_focus_pane

0xc5c2,	// (0x0002aaa7) cell_gallery_pane_g1_ParamLimits

0xc5c2,	// (0x0002aaa7) cell_gallery_pane_g1

0x59e9,	// (0x00023ece) cell_gallery_pane_g2_ParamLimits

0x59e9,	// (0x00023ece) cell_gallery_pane_g2

0x59f6,	// (0x00023edb) cell_gallery_pane_g3_ParamLimits

0x59f6,	// (0x00023edb) cell_gallery_pane_g3

0xc5ce,	// (0x0002aab3) cell_gallery_pane_g4_ParamLimits

0xc5ce,	// (0x0002aab3) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002db9e) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002db9e) cell_gallery_pane_g

0xc5da,	// (0x0002aabf) bg_cell_gallery_focus_pane_g1

0xc5e2,	// (0x0002aac7) bg_cell_gallery_focus_pane_g2

0xc5ea,	// (0x0002aacf) bg_cell_gallery_focus_pane_g3

0xc5f2,	// (0x0002aad7) bg_cell_gallery_focus_pane_g4

0xc5fa,	// (0x0002aadf) bg_cell_gallery_focus_pane_g5

0xc602,	// (0x0002aae7) bg_cell_gallery_focus_pane_g6

0xc60a,	// (0x0002aaef) bg_cell_gallery_focus_pane_g7

0xc612,	// (0x0002aaf7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002dba7) bg_cell_gallery_focus_pane_g

0xc61a,	// (0x0002aaff) aid_firma_cardinal

0xc62e,	// (0x0002ab13) blid_firmament_pane_t1

0xc645,	// (0x0002ab2a) blid_firmament_pane_t2

0xc65c,	// (0x0002ab41) blid_firmament_pane_t3

0xc673,	// (0x0002ab58) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002dbb8) blid_firmament_pane_t

0xc68a,	// (0x0002ab6f) blid_sat_info_pane

0xc69a,	// (0x0002ab7f) blid_sat_info_pane_g1

0xc69a,	// (0x0002ab7f) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002dbc1) blid_sat_info_pane_g

0xc6a4,	// (0x0002ab89) blid_sat_info_pane_t1

0xc6b2,	// (0x0002ab97) smil2_volume_content_pane

0xc6bb,	// (0x0002aba0) smil2_volume_pane_g1

0xa269,	// (0x0002874e) smil2_volume_content_pane_g1

0xc6c3,	// (0x0002aba8) smil2_volume_content_pane_g2

0xc6cc,	// (0x0002abb1) smil2_volume_content_pane_g3

0xc6d5,	// (0x0002abba) smil2_volume_content_pane_g4

0xc6de,	// (0x0002abc3) smil2_volume_content_pane_g5

0xc6e7,	// (0x0002abcc) smil2_volume_content_pane_g6

0xc6f0,	// (0x0002abd5) smil2_volume_content_pane_g7

0xc6f9,	// (0x0002abde) smil2_volume_content_pane_g8

0xc702,	// (0x0002abe7) smil2_volume_content_pane_g9

0xc70b,	// (0x0002abf0) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002dbc6) smil2_volume_content_pane_g

0x2b8e,	// (0x00021073) cale_week_day_heading_pane_t1_ParamLimits

0x2bc9,	// (0x000210ae) cale_week_day_heading_pane_t2_ParamLimits

0x2c04,	// (0x000210e9) cale_week_day_heading_pane_t3_ParamLimits

0x2c3f,	// (0x00021124) cale_week_day_heading_pane_t4_ParamLimits

0x2c7a,	// (0x0002115f) cale_week_day_heading_pane_t5_ParamLimits

0x2cb5,	// (0x0002119a) cale_week_day_heading_pane_t6_ParamLimits

0x2cf0,	// (0x000211d5) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002d6b6) cale_week_day_heading_pane_t_ParamLimits

0xa369,	// (0x0002884e) bg_cale_side_pane_ParamLimits

0x1106,	// (0x0001f5eb) cale_week_time_pane_t1_ParamLimits

0x1120,	// (0x0001f605) cale_week_time_pane_t2_ParamLimits

0x113a,	// (0x0001f61f) cale_week_time_pane_t3_ParamLimits

0x1154,	// (0x0001f639) cale_week_time_pane_t4_ParamLimits

0x116e,	// (0x0001f653) cale_week_time_pane_t5_ParamLimits

0x118a,	// (0x0001f66f) cale_week_time_pane_t6_ParamLimits

0x11ac,	// (0x0001f691) cale_week_time_pane_t7_ParamLimits

0x11d0,	// (0x0001f6b5) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002d6c5) cale_week_time_pane_t_ParamLimits

0x2d2b,	// (0x00021210) cell_cale_week_pane_g2_ParamLimits

0xa369,	// (0x0002884e) bg_cale_side_pane_cp01_ParamLimits

0x4108,	// (0x000225ed) cale_month_week_pane_t1_ParamLimits

0x4121,	// (0x00022606) cale_month_week_pane_t2_ParamLimits

0x413a,	// (0x0002261f) cale_month_week_pane_t3_ParamLimits

0x4153,	// (0x00022638) cale_month_week_pane_t4_ParamLimits

0x4170,	// (0x00022655) cale_month_week_pane_t5_ParamLimits

0x4191,	// (0x00022676) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d79a) cale_month_week_pane_t_ParamLimits

0x1200,	// (0x0001f6e5) cell_cale_month_pane_g1_ParamLimits

0x0efa,	// (0x0001f3df) main_cale_event_viewer_pane

0x9a83,	// (0x00027f68) listscroll_cale_event_viewer_pane

0xc714,	// (0x0002abf9) list_cale_ev_pane

0xc71c,	// (0x0002ac01) scroll_pane_cp023

0xc728,	// (0x0002ac0d) field_cale_ev_pane_ParamLimits

0xc728,	// (0x0002ac0d) field_cale_ev_pane

0xc744,	// (0x0002ac29) field_cale_ev_content_pane_ParamLimits

0xc744,	// (0x0002ac29) field_cale_ev_content_pane

0xc750,	// (0x0002ac35) field_cale_ev_pane_g1_ParamLimits

0xc750,	// (0x0002ac35) field_cale_ev_pane_g1

0xc75c,	// (0x0002ac41) field_cale_ev_pane_g2_ParamLimits

0xc75c,	// (0x0002ac41) field_cale_ev_pane_g2

0xc774,	// (0x0002ac59) field_cale_ev_pane_g3_ParamLimits

0xc774,	// (0x0002ac59) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002dbdb) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002dbdb) field_cale_ev_pane_g

0xc78c,	// (0x0002ac71) field_cale_ev_pane_t1_ParamLimits

0xc78c,	// (0x0002ac71) field_cale_ev_pane_t1

0xc7a3,	// (0x0002ac88) field_cale_ev_content_pane_t1_ParamLimits

0xc7a3,	// (0x0002ac88) field_cale_ev_content_pane_t1

0xafa6,	// (0x0002948b) bg_button_pane_cp01

0x2917,	// (0x00020dfc) listscroll_cale_week_pane_ParamLimits

0xa306,	// (0x000287eb) popup_toolbar_window_cp01

0xa33a,	// (0x0002881f) listscroll_cale_week_pane_t1_ParamLimits

0x2917,	// (0x00020dfc) listscroll_cale_day_pane_ParamLimits

0xa306,	// (0x000287eb) popup_toolbar_window_cp02

0xa753,	// (0x00028c38) listscroll_cale_day_pane_t1_ParamLimits

0x2917,	// (0x00020dfc) main_cale_month_pane_ParamLimits

0x147e,	// (0x0001f963) popup_toolbar_window_cp03_ParamLimits

0x147e,	// (0x0001f963) popup_toolbar_window_cp03

0x4ed1,	// (0x000233b6) main_image_pane_g2_ParamLimits

0x4ed1,	// (0x000233b6) main_image_pane_g2

0x4edd,	// (0x000233c2) main_image_pane_g3_ParamLimits

0x4edd,	// (0x000233c2) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d9cc) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d9cc) main_image_pane_g

0xb108,	// (0x000295ed) main_image_pane_t1_ParamLimits

0x4ee9,	// (0x000233ce) main_image_pane_t2_ParamLimits

0x4ee9,	// (0x000233ce) main_image_pane_t2

0x4efb,	// (0x000233e0) main_image_pane_t3_ParamLimits

0x4efb,	// (0x000233e0) main_image_pane_t3

0x4f0d,	// (0x000233f2) main_image_pane_t4_ParamLimits

0x4f0d,	// (0x000233f2) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d9d3) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d9d3) main_image_pane_t

0x4f1f,	// (0x00023404) popup_image_details_window_cp01

0x4f29,	// (0x0002340e) popup_toobar_trans_pane_cp01_ParamLimits

0x4f29,	// (0x0002340e) popup_toobar_trans_pane_cp01

0x13d4,	// (0x0001f8b9) popup_image_details_window_ParamLimits

0x13d4,	// (0x0001f8b9) popup_image_details_window

0x13e2,	// (0x0001f8c7) popup_image_focus_window

0x14dd,	// (0x0001f9c2) camera2_autofocus_pane_ParamLimits

0x14dd,	// (0x0001f9c2) camera2_autofocus_pane

0x9a83,	// (0x00027f68) bg_popup_sub_pane_cp06

0xc7c0,	// (0x0002aca5) popup_image_focus_window_g1

0xc7c8,	// (0x0002acad) popup_image_focus_window_g2

0xc7d0,	// (0x0002acb5) popup_image_focus_window_g3

0xc7d8,	// (0x0002acbd) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002dbe2) popup_image_focus_window_g

0xc7e0,	// (0x0002acc5) popup_image_focus_window_t1

0xc7ee,	// (0x0002acd3) popup_image_focus_window_t2

0xc7fe,	// (0x0002ace3) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002dbeb) popup_image_focus_window_t

0xc80c,	// (0x0002acf1) camera2_autofocus_pane_g1

0xa32c,	// (0x00028811) bg_tb_trans_pane_cp01

0xc81a,	// (0x0002acff) popup_image_details_window_g1

0xc82d,	// (0x0002ad12) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002dbfd) popup_image_details_window_g

0xc856,	// (0x0002ad3b) popup_image_details_window_t1

0xc868,	// (0x0002ad4d) popup_image_details_window_t2

0xc881,	// (0x0002ad66) popup_image_details_window_t3

0xc895,	// (0x0002ad7a) popup_image_details_window_t4

0xc8b0,	// (0x0002ad95) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002dc04) popup_image_details_window_t

0xa1cb,	// (0x000286b0) bg_calc_paper_pane_ParamLimits

0x0efa,	// (0x0001f3df) grid_highlight_pane_cp013

0x0fdb,	// (0x0001f4c0) list_calc_pane_ParamLimits

0x0fed,	// (0x0001f4d2) scroll_pane_cp024

0xa1df,	// (0x000286c4) bg_calc_display_pane_ParamLimits

0x0ff5,	// (0x0001f4da) calc_display_pane_t1_ParamLimits

0x100a,	// (0x0001f4ef) calc_display_pane_t2_ParamLimits

0x101f,	// (0x0001f504) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002d636) calc_display_pane_t_ParamLimits

0x1088,	// (0x0001f56d) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002d653) cell_calc_pane_g

0x1091,	// (0x0001f576) cell_calc_pane_t1

0xa23e,	// (0x00028723) grid_highlight_pane_cp02_ParamLimits

0xa254,	// (0x00028739) toolbar_button_pane_cp01_ParamLimits

0xa254,	// (0x00028739) toolbar_button_pane_cp01

0xb14d,	// (0x00029632) temp_image_control_pane_ParamLimits

0xb14d,	// (0x00029632) temp_image_control_pane

0x1350,	// (0x0001f835) main_mp3_pane

0xc8ca,	// (0x0002adaf) temp_image_control_pane_g1_ParamLimits

0xc8ca,	// (0x0002adaf) temp_image_control_pane_g1

0xc8d8,	// (0x0002adbd) temp_image_control_pane_g2_ParamLimits

0xc8d8,	// (0x0002adbd) temp_image_control_pane_g2

0xc8ea,	// (0x0002adcf) temp_image_control_pane_g3_ParamLimits

0xc8ea,	// (0x0002adcf) temp_image_control_pane_g3

0x5a33,	// (0x00023f18) temp_image_control_pane_g4_ParamLimits

0x5a33,	// (0x00023f18) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002dc0f) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002dc0f) temp_image_control_pane_g

0xc8ca,	// (0x0002adaf) main_mp3_pane_g1

0x5a44,	// (0x00023f29) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002dc18) main_mp3_pane_g

0xc92d,	// (0x0002ae12) main_mp3_pane_t1

0xa3c3,	// (0x000288a8) main_camera_pane_g8_ParamLimits

0xa3c3,	// (0x000288a8) main_camera_pane_g8

0x2fab,	// (0x00021490) main_video_pane_g7_ParamLimits

0x2fab,	// (0x00021490) main_video_pane_g7

0x1625,	// (0x0001fb0a) main_camera2_pane_t7_ParamLimits

0x1625,	// (0x0001fb0a) main_camera2_pane_t7

0xa50b,	// (0x000289f0) scroll_pane_cp025_ParamLimits

0xa50b,	// (0x000289f0) scroll_pane_cp025

0xa51f,	// (0x00028a04) scroll_pane_cp026_ParamLimits

0xa51f,	// (0x00028a04) scroll_pane_cp026

0xa52e,	// (0x00028a13) wml_content_pane_ParamLimits

0x0efa,	// (0x0001f3df) main_touch_calib_pane

0x5ae8,	// (0x00023fcd) main_touch_calib_pane_g1

0x5af4,	// (0x00023fd9) main_touch_calib_pane_g2

0x5b00,	// (0x00023fe5) main_touch_calib_pane_g3

0x5b0c,	// (0x00023ff1) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002dc36) main_touch_calib_pane_g

0x5b18,	// (0x00023ffd) main_touch_calib_pane_t1

0x5b31,	// (0x00024016) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002dc3f) main_touch_calib_pane_t

0xace0,	// (0x000291c5) mup_progress_pane_cp02

0xad15,	// (0x000291fa) navi_pane_g1

0xadd0,	// (0x000292b5) navi_pane_mp_t3

0x1350,	// (0x0001f835) main_mp3_pane_ParamLimits

0x545e,	// (0x00023943) navi_pane_ParamLimits

0xc8ca,	// (0x0002adaf) main_mp3_pane_g1_ParamLimits

0x5a44,	// (0x00023f29) main_mp3_pane_g2_ParamLimits

0x5a50,	// (0x00023f35) main_mp3_pane_g3_ParamLimits

0x5a50,	// (0x00023f35) main_mp3_pane_g3

0x5a5c,	// (0x00023f41) main_mp3_pane_g4_ParamLimits

0x5a5c,	// (0x00023f41) main_mp3_pane_g4

0xc8fa,	// (0x0002addf) main_mp3_pane_g5_ParamLimits

0xc8fa,	// (0x0002addf) main_mp3_pane_g5

0xc908,	// (0x0002aded) main_mp3_pane_g6_ParamLimits

0xc908,	// (0x0002aded) main_mp3_pane_g6

0xc915,	// (0x0002adfa) main_mp3_pane_g7_ParamLimits

0xc915,	// (0x0002adfa) main_mp3_pane_g7

0xc921,	// (0x0002ae06) main_mp3_pane_g8_ParamLimits

0xc921,	// (0x0002ae06) main_mp3_pane_g8

0xf733,	// (0x0002dc18) main_mp3_pane_g_ParamLimits

0x5a68,	// (0x00023f4d) main_mp3_pane_t2

0x5a78,	// (0x00023f5d) main_mp3_pane_t3

0xc93b,	// (0x0002ae20) main_mp3_pane_t4

0xc949,	// (0x0002ae2e) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002dc29) main_mp3_pane_t

0xc957,	// (0x0002ae3c) mup_progress_pane_cp01

0x0cb0,	// (0x0001f195) aid_zoom_text_secondary2

0xc714,	// (0x0002abf9) list_cale_ev2_pane

0xc71c,	// (0x0002ac01) scroll_pane_cp023_ParamLimits

0x5b8c,	// (0x00024071) field_cale_ev2_pane_ParamLimits

0x5b8c,	// (0x00024071) field_cale_ev2_pane

0xc95f,	// (0x0002ae44) field_cale_ev2_pane_g1_ParamLimits

0xc95f,	// (0x0002ae44) field_cale_ev2_pane_g1

0xc96b,	// (0x0002ae50) field_cale_ev2_pane_g2_ParamLimits

0xc96b,	// (0x0002ae50) field_cale_ev2_pane_g2

0xc983,	// (0x0002ae68) field_cale_ev2_pane_g3_ParamLimits

0xc983,	// (0x0002ae68) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002dc4a) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002dc4a) field_cale_ev2_pane_g

0xc9a7,	// (0x0002ae8c) field_cale_ev2_pane_t1_ParamLimits

0xc9a7,	// (0x0002ae8c) field_cale_ev2_pane_t1

0xc9be,	// (0x0002aea3) field_cale_ev2_pane_t2_ParamLimits

0xc9be,	// (0x0002aea3) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002dc53) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002dc53) field_cale_ev2_pane_t

0x4dac,	// (0x00023291) main_postcard_pane_g5_ParamLimits

0x4dac,	// (0x00023291) main_postcard_pane_g5

0x4dba,	// (0x0002329f) main_postcard_pane_g6_ParamLimits

0x4dba,	// (0x0002329f) main_postcard_pane_g6

0x2df5,	// (0x000212da) camera2_autofocus_pane_cp_ParamLimits

0x2df5,	// (0x000212da) camera2_autofocus_pane_cp

0x1350,	// (0x0001f835) main_mup3_pane

0x5bda,	// (0x000240bf) main_mup3_pane_g1_ParamLimits

0x5bda,	// (0x000240bf) main_mup3_pane_g1

0x5bfb,	// (0x000240e0) main_mup3_pane_g2_ParamLimits

0x5bfb,	// (0x000240e0) main_mup3_pane_g2

0x5c77,	// (0x0002415c) main_mup3_pane_g3_ParamLimits

0x5c77,	// (0x0002415c) main_mup3_pane_g3

0x5cba,	// (0x0002419f) main_mup3_pane_g4_ParamLimits

0x5cba,	// (0x0002419f) main_mup3_pane_g4

0x5cfd,	// (0x000241e2) main_mup3_pane_g5_ParamLimits

0x5cfd,	// (0x000241e2) main_mup3_pane_g5

0x5d42,	// (0x00024227) main_mup3_pane_g6_ParamLimits

0x5d42,	// (0x00024227) main_mup3_pane_g6

0xc9d3,	// (0x0002aeb8) main_mup3_pane_g7_ParamLimits

0xc9d3,	// (0x0002aeb8) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002dc63) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002dc63) main_mup3_pane_g

0x5db8,	// (0x0002429d) main_mup3_pane_t1_ParamLimits

0x5db8,	// (0x0002429d) main_mup3_pane_t1

0x5e27,	// (0x0002430c) main_mup3_pane_t2_ParamLimits

0x5e27,	// (0x0002430c) main_mup3_pane_t2

0x5ef0,	// (0x000243d5) main_mup3_pane_t4_ParamLimits

0x5ef0,	// (0x000243d5) main_mup3_pane_t4

0x5f3e,	// (0x00024423) main_mup3_pane_t5_ParamLimits

0x5f3e,	// (0x00024423) main_mup3_pane_t5

0x5fee,	// (0x000244d3) main_mup3_pane_t6_ParamLimits

0x5fee,	// (0x000244d3) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002dc74) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002dc74) main_mup3_pane_t

0x609a,	// (0x0002457f) mup3_progress_pane_ParamLimits

0x609a,	// (0x0002457f) mup3_progress_pane

0x610e,	// (0x000245f3) popup_mup3_control_window_ParamLimits

0x610e,	// (0x000245f3) popup_mup3_control_window

0xc9e1,	// (0x0002aec6) popup_mup3_text_window

0x6127,	// (0x0002460c) mup3_progress_pane_t1

0x6146,	// (0x0002462b) mup3_progress_pane_t2

0xc9e9,	// (0x0002aece) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002dc81) mup3_progress_pane_t

0xca06,	// (0x0002aeeb) mup_progress_pane_cp03

0x9a83,	// (0x00027f68) bg_tb_trans_pane_cp04

0x6165,	// (0x0002464a) mup3_volume_pane

0x616d,	// (0x00024652) popup_mup3_control_window_g1

0x6176,	// (0x0002465b) mup3_volume_pane_g1

0x617f,	// (0x00024664) mup3_volume_pane_g2

0x6188,	// (0x0002466d) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002dc88) mup3_volume_pane_g

0x9a83,	// (0x00027f68) bg_tb_trans_pane_cp03

0xca16,	// (0x0002aefb) popup_mup3_text_window_g1

0xca1e,	// (0x0002af03) popup_mup3_text_window_t1

0xa227,	// (0x0002870c) list_calc_item_pane_g1_ParamLimits

0xc3eb,	// (0x0002a8d0) mup_volume_pane_cp_g1

0x5b4a,	// (0x0002402f) main_touch_calib_pane_t3

0x5b60,	// (0x00024045) main_touch_calib_pane_t4

0x5b76,	// (0x0002405b) main_touch_calib_pane_t5

0x0c68,	// (0x0001f14d) aid_cell_size_toolbar2

0x0c70,	// (0x0001f155) aid_popup3_width_pane

0x0cb0,	// (0x0001f195) aid_zoom_text_msg_primary

0x2dd4,	// (0x000212b9) vorec_t7

0xa1eb,	// (0x000286d0) bg_calc_paper_pane_g1_ParamLimits

0xa1f7,	// (0x000286dc) bg_calc_paper_pane_g2_ParamLimits

0xa203,	// (0x000286e8) bg_calc_paper_pane_g3_ParamLimits

0xa20f,	// (0x000286f4) bg_calc_paper_pane_g4_ParamLimits

0xa21b,	// (0x00028700) bg_calc_paper_pane_g5_ParamLimits

0x27c0,	// (0x00020ca5) bg_calc_paper_pane_g6_ParamLimits

0x27d1,	// (0x00020cb6) bg_calc_paper_pane_g7_ParamLimits

0x27e2,	// (0x00020cc7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002d63d) bg_calc_paper_pane_g_ParamLimits

0x27f3,	// (0x00020cd8) calc_bg_paper_pane_g9_ParamLimits

0x2edc,	// (0x000213c1) image_qvga_pane_ParamLimits

0x2edc,	// (0x000213c1) image_qvga_pane

0xa0fb,	// (0x000285e0) bg_popup_sub_pane_cp04_ParamLimits

0xb084,	// (0x00029569) popup_mup_playback_window_g1_ParamLimits

0xb090,	// (0x00029575) popup_mup_playback_window_t1_ParamLimits

0xb0a5,	// (0x0002958a) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d9c7) popup_mup_playback_window_t_ParamLimits

0x56b6,	// (0x00023b9b) main_mup2_pane_g3_ParamLimits

0x56b6,	// (0x00023b9b) main_mup2_pane_g3

0x32a2,	// (0x00021787) popup_toolbar_window_cp04

0xb49a,	// (0x0002997f) popup_call2_audio_second_window_g3_ParamLimits

0xb49a,	// (0x0002997f) popup_call2_audio_second_window_g3

0xb8a4,	// (0x00029d89) popup_call2_audio_first_window_g4_ParamLimits

0xb8a4,	// (0x00029d89) popup_call2_audio_first_window_g4

0xbf23,	// (0x0002a408) popup_call2_audio_in_window_g4_ParamLimits

0xbf23,	// (0x0002a408) popup_call2_audio_in_window_g4

0x4ec4,	// (0x000233a9) aid_area_sk_bg_cut_ParamLimits

0x4ec4,	// (0x000233a9) aid_area_sk_bg_cut

0xb0ba,	// (0x0002959f) aid_area_sk_bg_cut_2_ParamLimits

0xb0ba,	// (0x0002959f) aid_area_sk_bg_cut_2

0x59d9,	// (0x00023ebe) aid_placing_details_win

0x59e1,	// (0x00023ec6) aid_placing_details_win_2

0xc80c,	// (0x0002acf1) camera2_autofocus_pane_g1_ParamLimits

0x0e92,	// (0x0001f377) popup_fixed_preview_cale_window_ParamLimits

0x0e92,	// (0x0001f377) popup_fixed_preview_cale_window

0xae4e,	// (0x00029333) navi_slider_pane_g3

0xae57,	// (0x0002933c) navi_slider_pane_g4

0xae60,	// (0x00029345) navi_slider_pane_g5

0xae4e,	// (0x00029333) navi_slider_pane_g6

0x12ca,	// (0x0001f7af) navi_slider_pane_g7

0xaf73,	// (0x00029458) mup_scale_pane_g3

0xaf7c,	// (0x00029461) mup_scale_pane_g4

0xaf85,	// (0x0002946a) mup_scale_pane_g5

0x4c0f,	// (0x000230f4) mup_scale_pane_g6

0x4c18,	// (0x000230fd) mup_scale_pane_g7

0xae4e,	// (0x00029333) cams2_slider_pane_g3

0xc46d,	// (0x0002a952) cams2_slider_pane_g4

0x1797,	// (0x0001fc7c) cams2_slider_pane_g5

0xae4e,	// (0x00029333) cams2_slider_pane_g6

0x179f,	// (0x0001fc84) cams2_slider_pane_g7

0xc69a,	// (0x0002ab7f) camera2_autofocus_pane_cp_g1

0xc284,	// (0x0002a769) bg_popup_preview_window_pane_cp02_ParamLimits

0xc284,	// (0x0002a769) bg_popup_preview_window_pane_cp02

0xca2c,	// (0x0002af11) list_fp_cale_pane_ParamLimits

0xca2c,	// (0x0002af11) list_fp_cale_pane

0xca38,	// (0x0002af1d) popup_fixed_preview_cale_window_t1_ParamLimits

0xca38,	// (0x0002af1d) popup_fixed_preview_cale_window_t1

0x6191,	// (0x00024676) popup_fixed_preview_cale_window_t2_ParamLimits

0x6191,	// (0x00024676) popup_fixed_preview_cale_window_t2

0x61a6,	// (0x0002468b) popup_fixed_preview_cale_window_t3_ParamLimits

0x61a6,	// (0x0002468b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002dc8f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002dc8f) popup_fixed_preview_cale_window_t

0x61bb,	// (0x000246a0) list_single_fp_cale_pane_ParamLimits

0x61bb,	// (0x000246a0) list_single_fp_cale_pane

0xca56,	// (0x0002af3b) list_single_fp_cale_pane_g1_ParamLimits

0xca56,	// (0x0002af3b) list_single_fp_cale_pane_g1

0xca62,	// (0x0002af47) list_single_fp_cale_pane_g2_ParamLimits

0xca62,	// (0x0002af47) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002dc96) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002dc96) list_single_fp_cale_pane_g

0xca7b,	// (0x0002af60) list_single_fp_cale_pane_t1_ParamLimits

0xca7b,	// (0x0002af60) list_single_fp_cale_pane_t1

0xca8d,	// (0x0002af72) list_single_fp_cale_pane_t2_ParamLimits

0xca8d,	// (0x0002af72) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002dc9d) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002dc9d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0efa,	// (0x0001f3df) main_dialer_pane

0x61cf,	// (0x000246b4) aid_cell_size_keypad

0x61d9,	// (0x000246be) dialer_ne_pane

0x61e3,	// (0x000246c8) grid_dialer_command_1_pane

0x61eb,	// (0x000246d0) grid_dialer_command_2_pane

0x61f3,	// (0x000246d8) grid_dialer_keypad_pane

0x6207,	// (0x000246ec) bg_popup_call_pane_cp06_ParamLimits

0x6207,	// (0x000246ec) bg_popup_call_pane_cp06

0x6213,	// (0x000246f8) dialer_ne_clear_pane_ParamLimits

0x6213,	// (0x000246f8) dialer_ne_clear_pane

0xcac0,	// (0x0002afa5) dialer_ne_pane_g1

0xcac8,	// (0x0002afad) dialer_ne_pane_t1_ParamLimits

0xcac8,	// (0x0002afad) dialer_ne_pane_t1

0x621f,	// (0x00024704) dialer_ne_pane_t2_ParamLimits

0x621f,	// (0x00024704) dialer_ne_pane_t2

0x623c,	// (0x00024721) dialer_ne_pane_t3_ParamLimits

0x623c,	// (0x00024721) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002dca2) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002dca2) dialer_ne_pane_t

0x6260,	// (0x00024745) dialer_ne_pane_t3_copy1_ParamLimits

0x6260,	// (0x00024745) dialer_ne_pane_t3_copy1

0x6284,	// (0x00024769) cell_dialer_keypad_pane_ParamLimits

0x6284,	// (0x00024769) cell_dialer_keypad_pane

0x629b,	// (0x00024780) cell_dialer_command_1_pane_ParamLimits

0x629b,	// (0x00024780) cell_dialer_command_1_pane

0x62b1,	// (0x00024796) cell_dialer_command_2_pane_ParamLimits

0x62b1,	// (0x00024796) cell_dialer_command_2_pane

0xcada,	// (0x0002afbf) bg_button_pane_cp02_ParamLimits

0xcada,	// (0x0002afbf) bg_button_pane_cp02

0x62c0,	// (0x000247a5) cell_dialer_keypad_pane_g1_ParamLimits

0x62c0,	// (0x000247a5) cell_dialer_keypad_pane_g1

0xcada,	// (0x0002afbf) bg_button_pane_cp03_ParamLimits

0xcada,	// (0x0002afbf) bg_button_pane_cp03

0x62d5,	// (0x000247ba) cell_dialer_command_1_pane_g1_ParamLimits

0x62d5,	// (0x000247ba) cell_dialer_command_1_pane_g1

0xcae6,	// (0x0002afcb) bg_button_pane_cp04

0x62e9,	// (0x000247ce) cell_dialer_command_2_pane_g1

0xa3bb,	// (0x000288a0) bg_button_pane_cp06

0xcaee,	// (0x0002afd3) dialer_ne_clear_pane_g1

0xad21,	// (0x00029206) navi_pane_g2

0xad4f,	// (0x00029234) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d8ca) navi_pane_g

0xadde,	// (0x000292c3) navi_pane_mv_g2

0xae05,	// (0x000292ea) navi_pane_mv_g5

0x47ad,	// (0x00022c92) navi_pane_mv_t1

0xa1df,	// (0x000286c4) main_clock2_pane

0x6329,	// (0x0002480e) main_clock2_list_pane_ParamLimits

0x6329,	// (0x0002480e) main_clock2_list_pane

0x6353,	// (0x00024838) main_clock2_pane_t1_ParamLimits

0x6353,	// (0x00024838) main_clock2_pane_t1

0x6377,	// (0x0002485c) main_clock2_pane_t2_ParamLimits

0x6377,	// (0x0002485c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002dcae) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002dcae) main_clock2_pane_t

0x63d2,	// (0x000248b7) popup_clock_analogue_window_cp03_ParamLimits

0x63d2,	// (0x000248b7) popup_clock_analogue_window_cp03

0x63f0,	// (0x000248d5) popup_clock_digital_window_cp02_ParamLimits

0x63f0,	// (0x000248d5) popup_clock_digital_window_cp02

0x645f,	// (0x00024944) main_clock2_list_single_pane_ParamLimits

0x645f,	// (0x00024944) main_clock2_list_single_pane

0xa3bb,	// (0x000288a0) list_highlight_pane_cp05

0xcb28,	// (0x0002b00d) main_clock2_list_single_pane_t1

0x32a2,	// (0x00021787) popup_toolbar_window_cp04_ParamLimits

0x5a03,	// (0x00023ee8) camera2_autofocus_pane_g2_ParamLimits

0x5a03,	// (0x00023ee8) camera2_autofocus_pane_g2

0x5a0f,	// (0x00023ef4) camera2_autofocus_pane_g3_ParamLimits

0x5a0f,	// (0x00023ef4) camera2_autofocus_pane_g3

0x5a1b,	// (0x00023f00) camera2_autofocus_pane_g4_ParamLimits

0x5a1b,	// (0x00023f00) camera2_autofocus_pane_g4

0x5a27,	// (0x00023f0c) camera2_autofocus_pane_g5_ParamLimits

0x5a27,	// (0x00023f0c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002dbf2) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002dbf2) camera2_autofocus_pane_g

0x5bba,	// (0x0002409f) camera2_autofocus_pane_cp_g2

0x5bc2,	// (0x000240a7) camera2_autofocus_pane_cp_g3

0x5bca,	// (0x000240af) camera2_autofocus_pane_cp_g4

0x5bd2,	// (0x000240b7) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002dc58) camera2_autofocus_pane_cp_g

0x61ff,	// (0x000246e4) popup_dialer_spcha_window

0x9a83,	// (0x00027f68) bg_popup_sub_pane_cp07

0xcb36,	// (0x0002b01b) list_spcha_pane

0xcb3e,	// (0x0002b023) list_single_spcha_pane_ParamLimits

0xcb3e,	// (0x0002b023) list_single_spcha_pane

0x9a83,	// (0x00027f68) list_highlight_pane_cp06

0xcb4f,	// (0x0002b034) list_single_spcha_pane_t1

0xbccd,	// (0x0002a1b2) popup_call2_audio_out_window_g4_ParamLimits

0xbccd,	// (0x0002a1b2) popup_call2_audio_out_window_g4

0x0efa,	// (0x0001f3df) main_imed2_pane

0x13ea,	// (0x0001f8cf) popup_imed_adjust2_window

0x13fd,	// (0x0001f8e2) popup_imed_trans_window_ParamLimits

0x13fd,	// (0x0001f8e2) popup_imed_trans_window

0xc4d6,	// (0x0002a9bb) popup_blid_sat_info2_window_t1

0xc4e4,	// (0x0002a9c9) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002db87) popup_blid_sat_info2_window_t

0x6491,	// (0x00024976) aid_size_cell_colour_35

0x64ab,	// (0x00024990) aid_size_cell_colour_112

0x64c2,	// (0x000249a7) aid_size_cell_effect

0xa32c,	// (0x00028811) bg_tb_trans_pane_cp02

0xab3d,	// (0x00029022) heading_imed_pane

0x64dc,	// (0x000249c1) listscroll_imed_pane

0xcb5d,	// (0x0002b042) heading_imed_pane_g1

0xcb65,	// (0x0002b04a) heading_imed_pane_t1

0xcb73,	// (0x0002b058) grid_imed_colour_35_pane_ParamLimits

0xcb73,	// (0x0002b058) grid_imed_colour_35_pane

0x64e8,	// (0x000249cd) grid_imed_effect_pane

0xcb8b,	// (0x0002b070) list_imed_aspect_pane

0x64f8,	// (0x000249dd) scroll_pane_cp027_ParamLimits

0x64f8,	// (0x000249dd) scroll_pane_cp027

0x6504,	// (0x000249e9) cell_imed_effect_pane_ParamLimits

0x6504,	// (0x000249e9) cell_imed_effect_pane

0xcb93,	// (0x0002b078) cell_imed_colour_pane_ParamLimits

0xcb93,	// (0x0002b078) cell_imed_colour_pane

0xcbd5,	// (0x0002b0ba) cell_imed_colour_pane_g1_ParamLimits

0xcbd5,	// (0x0002b0ba) cell_imed_colour_pane_g1

0xcbe6,	// (0x0002b0cb) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbe6,	// (0x0002b0cb) hgihlgiht_grid_pane_cp016

0x651c,	// (0x00024a01) cell_imed_effect_pane_g1

0x6524,	// (0x00024a09) grid_highlight_pane_cp017

0xcbf7,	// (0x0002b0dc) list_imed_single_pane_ParamLimits

0xcbf7,	// (0x0002b0dc) list_imed_single_pane

0x9a83,	// (0x00027f68) list_highlight_pane_cp07

0xcc0d,	// (0x0002b0f2) list_imed_aspect_pane_comp1_t1

0xc290,	// (0x0002a775) bg_tb_trans_pane_cp05

0xcc2f,	// (0x0002b114) popup_imed_adjust2_window_g1

0xcc56,	// (0x0002b13b) popup_imed_adjust2_window_t1

0xcc6e,	// (0x0002b153) slider_imed_adjust_pane

0xcc82,	// (0x0002b167) slider_imed_adjust_pane_g1

0xcc92,	// (0x0002b177) slider_imed_adjust_pane_g2

0xcca2,	// (0x0002b187) slider_imed_adjust_pane_g3

0xccb3,	// (0x0002b198) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002dccb) slider_imed_adjust_pane_g

0x652d,	// (0x00024a12) aid_size_cell_clipart2

0x6539,	// (0x00024a1e) grid_imed_clipart_pane

0xccc4,	// (0x0002b1a9) scroll_pane_cp031

0x6543,	// (0x00024a28) cell_imed_clipart_pane_ParamLimits

0x6543,	// (0x00024a28) cell_imed_clipart_pane

0x656a,	// (0x00024a4f) cell_imed_clipart_pane_g1

0x9a83,	// (0x00027f68) grid_highlight_pane_cp014

0x6335,	// (0x0002481a) main_clock2_pane_g1_ParamLimits

0x6335,	// (0x0002481a) main_clock2_pane_g1

0x640a,	// (0x000248ef) aid_call2_pane_cp10

0x641c,	// (0x00024901) aid_call_pane_cp10

0xac80,	// (0x00029165) popup_clock_analogue_window_cp10_g1

0xac80,	// (0x00029165) popup_clock_analogue_window_cp10_g2

0x642e,	// (0x00024913) popup_clock_analogue_window_cp10_g3

0x642e,	// (0x00024913) popup_clock_analogue_window_cp10_g4

0xac80,	// (0x00029165) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002dcb9) popup_clock_analogue_window_cp10_g

0x6440,	// (0x00024925) popup_clock_analogue_window_cp10_t1

0x17a8,	// (0x0001fc8d) clock_digital_number_pane_cp10_ParamLimits

0x17a8,	// (0x0001fc8d) clock_digital_number_pane_cp10

0x17c0,	// (0x0001fca5) clock_digital_number_pane_cp11_ParamLimits

0x17c0,	// (0x0001fca5) clock_digital_number_pane_cp11

0x17d8,	// (0x0001fcbd) clock_digital_number_pane_cp12_ParamLimits

0x17d8,	// (0x0001fcbd) clock_digital_number_pane_cp12

0x17f0,	// (0x0001fcd5) clock_digital_number_pane_cp13_ParamLimits

0x17f0,	// (0x0001fcd5) clock_digital_number_pane_cp13

0x1808,	// (0x0001fced) clock_digital_separator_pane_cp10_ParamLimits

0x1808,	// (0x0001fced) clock_digital_separator_pane_cp10

0x6471,	// (0x00024956) popup_clock_digital_window_cp02_t1_ParamLimits

0x6471,	// (0x00024956) popup_clock_digital_window_cp02_t1

0xa0f3,	// (0x000285d8) clock_digital_number_pane_cp10_g1

0xa0f3,	// (0x000285d8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002dcd4) clock_digital_number_pane_cp10_g

0xa0f3,	// (0x000285d8) clock_digital_separator_pane_cp10_g1

0xa0f3,	// (0x000285d8) clock_digital_separator_pane_g2_cp10

0xae0d,	// (0x000292f2) navi_pane_vded_g4

0xae16,	// (0x000292fb) navi_pane_vded_g5

0xae1f,	// (0x00029304) navi_pane_vded_t1

0x0efa,	// (0x0001f3df) main_vded_pane

0x6573,	// (0x00024a58) main_vded_pane_g1

0x657f,	// (0x00024a64) main_vded_pane_g2

0x6589,	// (0x00024a6e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002dcd9) main_vded_pane_g

0x6593,	// (0x00024a78) main_vded_pane_t1

0x65a1,	// (0x00024a86) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002dce0) main_vded_pane_t

0x65af,	// (0x00024a94) vded_slider_pane

0x65b9,	// (0x00024a9e) vded_video_pane

0xcccc,	// (0x0002b1b1) vded_video_pane_g1

0x65c3,	// (0x00024aa8) vded_video_pane_g2

0xc69a,	// (0x0002ab7f) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002dce5) vded_video_pane_g

0xccd6,	// (0x0002b1bb) vded_slider_pane_g1

0xccdf,	// (0x0002b1c4) vded_slider_pane_g2

0xcce8,	// (0x0002b1cd) vded_slider_pane_g3

0xccf1,	// (0x0002b1d6) vded_slider_pane_g4

0xccfa,	// (0x0002b1df) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002dcec) vded_slider_pane_g

0x6100,	// (0x000245e5) mup3_rocker_pane_ParamLimits

0x6100,	// (0x000245e5) mup3_rocker_pane

0x65cc,	// (0x00024ab1) mup3_control_keys_pane_g1

0x65d4,	// (0x00024ab9) mup3_control_keys_pane_g2

0x65dc,	// (0x00024ac1) mup3_control_keys_pane_g3

0x65e4,	// (0x00024ac9) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002dcf7) mup3_control_keys_pane_g

0x0eba,	// (0x0001f39f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0eba,	// (0x0001f39f) popup_toolbar2_fixed_window_cp01

0x611a,	// (0x000245ff) popup_toolbar2_fixed_window_cp02_ParamLimits

0x611a,	// (0x000245ff) popup_toolbar2_fixed_window_cp02

0xb60c,	// (0x00029af1) popup_call2_audio_second_window_t4_ParamLimits

0xb60c,	// (0x00029af1) popup_call2_audio_second_window_t4

0xbb3a,	// (0x0002a01f) popup_call2_audio_first_window_t6_ParamLimits

0xbb3a,	// (0x0002a01f) popup_call2_audio_first_window_t6

0xbdd0,	// (0x0002a2b5) popup_call2_audio_out_window_t6_ParamLimits

0xbdd0,	// (0x0002a2b5) popup_call2_audio_out_window_t6

0x0efa,	// (0x0001f3df) main_vitu_pane

0x65f4,	// (0x00024ad9) aid_size_cell_itu_ParamLimits

0x65f4,	// (0x00024ad9) aid_size_cell_itu

0xcf89,	// (0x0002b46e) bg_popup_window_pane_cp08_ParamLimits

0xcf89,	// (0x0002b46e) bg_popup_window_pane_cp08

0x6602,	// (0x00024ae7) field_vitu_entry_pane_ParamLimits

0x6602,	// (0x00024ae7) field_vitu_entry_pane

0x6611,	// (0x00024af6) grid_vitu_function_pane_ParamLimits

0x6611,	// (0x00024af6) grid_vitu_function_pane

0x6621,	// (0x00024b06) grid_vitu_itu_pane_ParamLimits

0x6621,	// (0x00024b06) grid_vitu_itu_pane

0x6631,	// (0x00024b16) cell_vitu_itu_pane_ParamLimits

0x6631,	// (0x00024b16) cell_vitu_itu_pane

0x6646,	// (0x00024b2b) cell_vitu_function_pane_ParamLimits

0x6646,	// (0x00024b2b) cell_vitu_function_pane

0xa32c,	// (0x00028811) bg_popup_sub_pane_cp08_ParamLimits

0xa32c,	// (0x00028811) bg_popup_sub_pane_cp08

0x665a,	// (0x00024b3f) field_vitu_entry_pane_t1_ParamLimits

0x665a,	// (0x00024b3f) field_vitu_entry_pane_t1

0xcd1b,	// (0x0002b200) field_vitu_entry_pane_t2_ParamLimits

0xcd1b,	// (0x0002b200) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002dd05) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002dd05) field_vitu_entry_pane_t

0xcd38,	// (0x0002b21d) bg_button_pane_cp05_ParamLimits

0xcd38,	// (0x0002b21d) bg_button_pane_cp05

0x6677,	// (0x00024b5c) cell_vitu_itu_pane_g1

0x668f,	// (0x00024b74) cell_vitu_itu_pane_t1_ParamLimits

0x668f,	// (0x00024b74) cell_vitu_itu_pane_t1

0x66a1,	// (0x00024b86) cell_vitu_itu_pane_t2_ParamLimits

0x66a1,	// (0x00024b86) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002dd0a) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002dd0a) cell_vitu_itu_pane_t

0xcd46,	// (0x0002b22b) bg_button_pane_cp07

0x66e4,	// (0x00024bc9) cell_vitu_function_pane_g1

0x0fd3,	// (0x0001f4b8) main_calc_pane_g1

0x0ca4,	// (0x0001f189) aid_visual_content_pane

0x0efa,	// (0x0001f3df) main_vradio_pane

0x66ed,	// (0x00024bd2) main_vradio_pane_g1_ParamLimits

0x66ed,	// (0x00024bd2) main_vradio_pane_g1

0xcd50,	// (0x0002b235) main_vradio_pane_g2_ParamLimits

0xcd50,	// (0x0002b235) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002dd11) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002dd11) main_vradio_pane_g

0x66fd,	// (0x00024be2) main_vradio_pane_t1_ParamLimits

0x66fd,	// (0x00024be2) main_vradio_pane_t1

0x670f,	// (0x00024bf4) main_vradio_pane_t2_ParamLimits

0x670f,	// (0x00024bf4) main_vradio_pane_t2

0xcd5d,	// (0x0002b242) main_vradio_pane_t3_ParamLimits

0xcd5d,	// (0x0002b242) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002dd16) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002dd16) main_vradio_pane_t

0x6721,	// (0x00024c06) vradio_rocker_control_pane_ParamLimits

0x6721,	// (0x00024c06) vradio_rocker_control_pane

0x672d,	// (0x00024c12) vradio_station_info_pane_ParamLimits

0x672d,	// (0x00024c12) vradio_station_info_pane

0xcd71,	// (0x0002b256) vradio_frequency_info_pane_ParamLimits

0xcd71,	// (0x0002b256) vradio_frequency_info_pane

0xc69a,	// (0x0002ab7f) vradio_station_info_pane_g1

0xcd80,	// (0x0002b265) vradio_station_info_pane_t1_ParamLimits

0xcd80,	// (0x0002b265) vradio_station_info_pane_t1

0xcda2,	// (0x0002b287) vradio_station_info_pane_t2_ParamLimits

0xcda2,	// (0x0002b287) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002dd1d) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002dd1d) vradio_station_info_pane_t

0xcdb4,	// (0x0002b299) vradio_tuning_pane

0xcdbc,	// (0x0002b2a1) vradio_rocker_control_pane_g1

0xcdc4,	// (0x0002b2a9) vradio_rocker_control_pane_g2

0xcdcc,	// (0x0002b2b1) vradio_rocker_control_pane_g3

0xcdd4,	// (0x0002b2b9) vradio_rocker_control_pane_g4

0xcddc,	// (0x0002b2c1) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002dd22) vradio_rocker_control_pane_g

0x673c,	// (0x00024c21) vradio_frequency_info_pane_g1

0xcde4,	// (0x0002b2c9) vradio_frequency_info_pane_t1_ParamLimits

0xcde4,	// (0x0002b2c9) vradio_frequency_info_pane_t1

0x6746,	// (0x00024c2b) vradio_tuning_pane_g1

0x674f,	// (0x00024c34) vradio_tuning_pane_t1

0x0cc0,	// (0x0001f1a5) area_side_right_pane_ParamLimits

0x0cc0,	// (0x0001f1a5) area_side_right_pane

0xc24b,	// (0x0002a730) status_small_pane_g1

0xc253,	// (0x0002a738) status_small_pane_g2

0xc25c,	// (0x0002a741) status_small_pane_g3

0xc265,	// (0x0002a74a) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002dadd) status_small_pane_g

0xc26e,	// (0x0002a753) status_small_pane_t1

0x0efa,	// (0x0001f3df) main_video3_pane

0xcdf8,	// (0x0002b2dd) cams_zoom_vslider_pane

0xce00,	// (0x0002b2e5) image3_wide_pane_ParamLimits

0xce00,	// (0x0002b2e5) image3_wide_pane

0xce1a,	// (0x0002b2ff) image3_wide_small_pane

0xce26,	// (0x0002b30b) main_video3_pane_g1_ParamLimits

0xce26,	// (0x0002b30b) main_video3_pane_g1

0xce42,	// (0x0002b327) main_video3_pane_g2_ParamLimits

0xce42,	// (0x0002b327) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002dd2d) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002dd2d) main_video3_pane_g

0xce5e,	// (0x0002b343) main_video3_pane_t1_ParamLimits

0xce5e,	// (0x0002b343) main_video3_pane_t1

0xce89,	// (0x0002b36e) main_video3_pane_t2_ParamLimits

0xce89,	// (0x0002b36e) main_video3_pane_t2

0xceb4,	// (0x0002b399) main_video3_pane_t3_ParamLimits

0xceb4,	// (0x0002b399) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002dd32) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002dd32) main_video3_pane_t

0xcee1,	// (0x0002b3c6) cams_zoom_vslider_pane_g1

0xceea,	// (0x0002b3cf) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002dd39) cams_zoom_vslider_pane_g

0xcef2,	// (0x0002b3d7) small_slider_vertical_pane

0xc69a,	// (0x0002ab7f) small_slider_vertical_pane_g1

0xc69a,	// (0x0002ab7f) small_slider_vertical_pane_g2

0xcefa,	// (0x0002b3df) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002dd3e) small_slider_vertical_pane_g

0x0efa,	// (0x0001f3df) main_hwr_training_pane

0xcf03,	// (0x0002b3e8) hwr_training_instruct_pane_ParamLimits

0xcf03,	// (0x0002b3e8) hwr_training_instruct_pane

0x675e,	// (0x00024c43) hwr_training_navi_pane_ParamLimits

0x675e,	// (0x00024c43) hwr_training_navi_pane

0x6778,	// (0x00024c5d) hwr_training_write_pane_ParamLimits

0x6778,	// (0x00024c5d) hwr_training_write_pane

0x9a83,	// (0x00027f68) bg_frame_shadow_pane

0xcf3a,	// (0x0002b41f) hwr_training_write_pane_g1

0xcf42,	// (0x0002b427) hwr_training_write_pane_g2

0xcf4a,	// (0x0002b42f) hwr_training_write_pane_g3

0xcf52,	// (0x0002b437) hwr_training_write_pane_g4

0xcf5a,	// (0x0002b43f) hwr_training_write_pane_g5

0xcf62,	// (0x0002b447) hwr_training_write_pane_g6

0xcf6a,	// (0x0002b44f) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002dd45) hwr_training_write_pane_g

0x1820,	// (0x0001fd05) hwr_training_navi_pane_g1_ParamLimits

0x1820,	// (0x0001fd05) hwr_training_navi_pane_g1

0x1832,	// (0x0001fd17) hwr_training_navi_pane_g2_ParamLimits

0x1832,	// (0x0001fd17) hwr_training_navi_pane_g2

0x1844,	// (0x0001fd29) hwr_training_navi_pane_g3_ParamLimits

0x1844,	// (0x0001fd29) hwr_training_navi_pane_g3

0x1854,	// (0x0001fd39) hwr_training_navi_pane_g4_ParamLimits

0x1854,	// (0x0001fd39) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002dd54) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002dd54) hwr_training_navi_pane_g

0x186e,	// (0x0001fd53) hwr_training_navi_pane_t1

0x67b0,	// (0x00024c95) list_single_hwr_training_instruct_pane_ParamLimits

0x67b0,	// (0x00024c95) list_single_hwr_training_instruct_pane

0xcf72,	// (0x0002b457) list_single_hwr_training_instruct_pane_t1

0xc5da,	// (0x0002aabf) bg_frame_shadow_pane_g1

0xcf81,	// (0x0002b466) bg_frame_shadow_pane_g2

0xcf97,	// (0x0002b47c) bg_frame_shadow_pane_g3

0xcf9f,	// (0x0002b484) bg_frame_shadow_pane_g4

0xcfa7,	// (0x0002b48c) bg_frame_shadow_pane_g5

0xcfaf,	// (0x0002b494) bg_frame_shadow_pane_g6

0xcfb7,	// (0x0002b49c) bg_frame_shadow_pane_g7

0xa2aa,	// (0x0002878f) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002dd5f) bg_frame_shadow_pane_g

0x0efa,	// (0x0001f3df) main_video_tele_dialer_pane

0x187c,	// (0x0001fd61) aid_size_cell_video_keypad_ParamLimits

0x187c,	// (0x0001fd61) aid_size_cell_video_keypad

0x188c,	// (0x0001fd71) grid_video_dialer_keypad_pane_ParamLimits

0x188c,	// (0x0001fd71) grid_video_dialer_keypad_pane

0x18c0,	// (0x0001fda5) video_down_pane_cp_ParamLimits

0x18c0,	// (0x0001fda5) video_down_pane_cp

0x18ce,	// (0x0001fdb3) cell_video_dialer_keypad_pane_ParamLimits

0x18ce,	// (0x0001fdb3) cell_video_dialer_keypad_pane

0xcfbf,	// (0x0002b4a4) bg_button_pane_cp08_ParamLimits

0xcfbf,	// (0x0002b4a4) bg_button_pane_cp08

0x67fb,	// (0x00024ce0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x67fb,	// (0x00024ce0) cell_video_dialer_keypad_pane_g1

0x60f4,	// (0x000245d9) mup3_rocker2_pane_ParamLimits

0x60f4,	// (0x000245d9) mup3_rocker2_pane

0xc69a,	// (0x0002ab7f) mup3_rocker2_pane_g1

0x135e,	// (0x0001f843) main_dialer2_pane

0x0efa,	// (0x0001f3df) main_mp4_pane

0x18eb,	// (0x0001fdd0) main_mp4_pane_g1_ParamLimits

0x18eb,	// (0x0001fdd0) main_mp4_pane_g1

0x18f9,	// (0x0001fdde) main_mp4_pane_g2_ParamLimits

0x18f9,	// (0x0001fdde) main_mp4_pane_g2

0x1907,	// (0x0001fdec) main_mp4_pane_g3_ParamLimits

0x1907,	// (0x0001fdec) main_mp4_pane_g3

0x194c,	// (0x0001fe31) main_mp4_pane_g4_ParamLimits

0x194c,	// (0x0001fe31) main_mp4_pane_g4

0x1974,	// (0x0001fe59) main_mp4_pane_g5_ParamLimits

0x1974,	// (0x0001fe59) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002dd7f) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002dd7f) main_mp4_pane_g

0x19c4,	// (0x0001fea9) main_mp4_pane_t1_ParamLimits

0x19c4,	// (0x0001fea9) main_mp4_pane_t1

0x1a20,	// (0x0001ff05) main_mp4_pane_t2_ParamLimits

0x1a20,	// (0x0001ff05) main_mp4_pane_t2

0xcfcb,	// (0x0002b4b0) main_mp4_pane_t3_ParamLimits

0xcfcb,	// (0x0002b4b0) main_mp4_pane_t3

0x1a72,	// (0x0001ff57) main_mp4_pane_t4_ParamLimits

0x1a72,	// (0x0001ff57) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002dd8c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002dd8c) main_mp4_pane_t

0x1ab6,	// (0x0001ff9b) mp4_progress_pane_ParamLimits

0x1ab6,	// (0x0001ff9b) mp4_progress_pane

0x1b00,	// (0x0001ffe5) mp4_rocker_pane_ParamLimits

0x1b00,	// (0x0001ffe5) mp4_rocker_pane

0xcff3,	// (0x0002b4d8) mp4_progress_pane_t1

0xd00c,	// (0x0002b4f1) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002dd95) mp4_progress_pane_t

0xd025,	// (0x0002b50a) mup_progress_pane_cp04

0xd7a4,	// (0x0002bc89) mp4_rocker_pane_g1

0x1b20,	// (0x00020005) aid_cell_size_keypad2_ParamLimits

0x1b20,	// (0x00020005) aid_cell_size_keypad2

0x1b30,	// (0x00020015) dialer2_ne_pane_ParamLimits

0x1b30,	// (0x00020015) dialer2_ne_pane

0x1b3e,	// (0x00020023) grid_dialer2_keypad_pane_ParamLimits

0x1b3e,	// (0x00020023) grid_dialer2_keypad_pane

0xd031,	// (0x0002b516) bg_popup_call_pane_cp07_ParamLimits

0xd031,	// (0x0002b516) bg_popup_call_pane_cp07

0x6836,	// (0x00024d1b) dialer2_ne_pane_t1_ParamLimits

0x6836,	// (0x00024d1b) dialer2_ne_pane_t1

0x1b4e,	// (0x00020033) cell_dialer2_keypad_pane_ParamLimits

0x1b4e,	// (0x00020033) cell_dialer2_keypad_pane

0xd051,	// (0x0002b536) bg_button_pane_pane_cp04_ParamLimits

0xd051,	// (0x0002b536) bg_button_pane_pane_cp04

0x685b,	// (0x00024d40) cell_dialer2_keypad_pane_g1_ParamLimits

0x685b,	// (0x00024d40) cell_dialer2_keypad_pane_g1

0x3164,	// (0x00021649) aid_placing_vt_set_content_ParamLimits

0x3164,	// (0x00021649) aid_placing_vt_set_content

0x3190,	// (0x00021675) aid_placing_vt_set_title_ParamLimits

0x3190,	// (0x00021675) aid_placing_vt_set_title

0x0efa,	// (0x0001f3df) main_image3_pane

0x1b95,	// (0x0002007a) area_side_right_pane_cp01_ParamLimits

0x1b95,	// (0x0002007a) area_side_right_pane_cp01

0x1bc2,	// (0x000200a7) main_image3_pane_g1_ParamLimits

0x1bc2,	// (0x000200a7) main_image3_pane_g1

0x1bd0,	// (0x000200b5) main_image3_pane_g2_ParamLimits

0x1bd0,	// (0x000200b5) main_image3_pane_g2

0x1be9,	// (0x000200ce) main_image3_pane_g3_ParamLimits

0x1be9,	// (0x000200ce) main_image3_pane_g3

0x1c02,	// (0x000200e7) main_image3_pane_g4_ParamLimits

0x1c02,	// (0x000200e7) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002dda4) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002dda4) main_image3_pane_g

0x1c1b,	// (0x00020100) main_image3_pane_t1_ParamLimits

0x1c1b,	// (0x00020100) main_image3_pane_t1

0x1c40,	// (0x00020125) main_image3_pane_t2_ParamLimits

0x1c40,	// (0x00020125) main_image3_pane_t2

0x1c5f,	// (0x00020144) main_image3_pane_t3_ParamLimits

0x1c5f,	// (0x00020144) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002ddad) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002ddad) main_image3_pane_t

0xcf89,	// (0x0002b46e) grid_sctrl_middle_pane_cp01_ParamLimits

0xcf89,	// (0x0002b46e) grid_sctrl_middle_pane_cp01

0x68c3,	// (0x00024da8) cell_sctrl_middle_pane_cp01_ParamLimits

0x68c3,	// (0x00024da8) cell_sctrl_middle_pane_cp01

0x68d4,	// (0x00024db9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x68d4,	// (0x00024db9) cell_sctrl_middle_pane_cp01_g1

0x0efa,	// (0x0001f3df) main_call4_pane

0x68e1,	// (0x00024dc6) aid_size_button_call4_ParamLimits

0x68e1,	// (0x00024dc6) aid_size_button_call4

0x6911,	// (0x00024df6) call4_windows_pane_ParamLimits

0x6911,	// (0x00024df6) call4_windows_pane

0x692b,	// (0x00024e10) grid_call4_button_pane_ParamLimits

0x692b,	// (0x00024e10) grid_call4_button_pane

0xd05d,	// (0x0002b542) call4_windows_conf_pane

0xd072,	// (0x0002b557) popup_call4_audio_first_window_ParamLimits

0xd072,	// (0x0002b557) popup_call4_audio_first_window

0xd0be,	// (0x0002b5a3) popup_call4_audio_second_window_ParamLimits

0xd0be,	// (0x0002b5a3) popup_call4_audio_second_window

0xd0d2,	// (0x0002b5b7) popup_call4_audio_wait_window_ParamLimits

0xd0d2,	// (0x0002b5b7) popup_call4_audio_wait_window

0x694f,	// (0x00024e34) cell_call4_button_pane_ParamLimits

0x694f,	// (0x00024e34) cell_call4_button_pane

0x6974,	// (0x00024e59) bg_button_pane_cp09_ParamLimits

0x6974,	// (0x00024e59) bg_button_pane_cp09

0x6980,	// (0x00024e65) cell_call4_button_pane_g1_ParamLimits

0x6980,	// (0x00024e65) cell_call4_button_pane_g1

0x698d,	// (0x00024e72) cell_call4_button_pane_t1_ParamLimits

0x698d,	// (0x00024e72) cell_call4_button_pane_t1

0xd11a,	// (0x0002b5ff) popup_call4_audio_conf_window_ParamLimits

0xd11a,	// (0x0002b5ff) popup_call4_audio_conf_window

0x6127,	// (0x0002460c) mup3_progress_pane_t1_ParamLimits

0x6146,	// (0x0002462b) mup3_progress_pane_t2_ParamLimits

0xc9e9,	// (0x0002aece) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002dc81) mup3_progress_pane_t_ParamLimits

0xca06,	// (0x0002aeeb) mup_progress_pane_cp03_ParamLimits

0x65ec,	// (0x00024ad1) mup3_control_keys_pane_g4_copy1

0x1ae4,	// (0x0001ffc9) mp4_rocker2_pane_ParamLimits

0x1ae4,	// (0x0001ffc9) mp4_rocker2_pane

0xd12e,	// (0x0002b613) mp4_rocker2_pane_g1

0xd136,	// (0x0002b61b) mp4_rocker2_pane_g2

0x1cc0,	// (0x000201a5) mp4_rocker2_pane_g3

0x1cc8,	// (0x000201ad) mp4_rocker2_pane_g4

0x1cd0,	// (0x000201b5) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002ddb6) mp4_rocker2_pane_g

0x0efa,	// (0x0001f3df) main_camera4_pane

0x0efa,	// (0x0001f3df) main_video4_pane

0x189c,	// (0x0001fd81) main_video_tele_dialer_pane_t1_ParamLimits

0x189c,	// (0x0001fd81) main_video_tele_dialer_pane_t1

0x18ae,	// (0x0001fd93) main_video_tele_dialer_pane_t2_ParamLimits

0x18ae,	// (0x0001fd93) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002dd70) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002dd70) main_video_tele_dialer_pane_t

0x1cf0,	// (0x000201d5) cam4_autofocus_pane_ParamLimits

0x1cf0,	// (0x000201d5) cam4_autofocus_pane

0x1d0a,	// (0x000201ef) cam4_image_uncrop_pane_ParamLimits

0x1d0a,	// (0x000201ef) cam4_image_uncrop_pane

0x1d21,	// (0x00020206) cam4_indicators_pane_ParamLimits

0x1d21,	// (0x00020206) cam4_indicators_pane

0x1d3d,	// (0x00020222) main_camera4_pane_g1_ParamLimits

0x1d3d,	// (0x00020222) main_camera4_pane_g1

0x1d49,	// (0x0002022e) main_camera4_pane_g2_ParamLimits

0x1d49,	// (0x0002022e) main_camera4_pane_g2

0x1d49,	// (0x0002022e) main_camera4_pane_g3_ParamLimits

0x1d49,	// (0x0002022e) main_camera4_pane_g3

0x1d55,	// (0x0002023a) main_camera4_pane_g4_ParamLimits

0x1d55,	// (0x0002023a) main_camera4_pane_g4

0x1d61,	// (0x00020246) main_camera4_pane_g5_ParamLimits

0x1d61,	// (0x00020246) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002ddc1) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002ddc1) main_camera4_pane_g

0x1d7b,	// (0x00020260) main_camera4_pane_t1_ParamLimits

0x1d7b,	// (0x00020260) main_camera4_pane_t1

0x1d9f,	// (0x00020284) bg_tb_trans_pane_cp06

0x1db5,	// (0x0002029a) cam4_indicators_pane_g1

0x1dc6,	// (0x000202ab) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002dddc) cam4_indicators_pane_g

0x1de4,	// (0x000202c9) cam4_indicators_pane_t1

0x1e0e,	// (0x000202f3) main_video4_pane_g1_ParamLimits

0x1e0e,	// (0x000202f3) main_video4_pane_g1

0x1e1a,	// (0x000202ff) main_video4_pane_g2_ParamLimits

0x1e1a,	// (0x000202ff) main_video4_pane_g2

0x1e26,	// (0x0002030b) main_video4_pane_g3_ParamLimits

0x1e26,	// (0x0002030b) main_video4_pane_g3

0x1e32,	// (0x00020317) main_video4_pane_g4_ParamLimits

0x1e32,	// (0x00020317) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002dde3) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002dde3) main_video4_pane_g

0x1e52,	// (0x00020337) vid4_indicators_pane_ParamLimits

0x1e52,	// (0x00020337) vid4_indicators_pane

0x1e71,	// (0x00020356) video4_image_uncrop_cif_pane_ParamLimits

0x1e71,	// (0x00020356) video4_image_uncrop_cif_pane

0x1e80,	// (0x00020365) video4_image_uncrop_nhd_pane_ParamLimits

0x1e80,	// (0x00020365) video4_image_uncrop_nhd_pane

0x1d0a,	// (0x000201ef) video4_image_uncrop_vga_pane_ParamLimits

0x1d0a,	// (0x000201ef) video4_image_uncrop_vga_pane

0x1350,	// (0x0001f835) bg_tb_trans_pane_cp07

0x1e95,	// (0x0002037a) vid4_indicators_pane_g1

0x1ea9,	// (0x0002038e) vid4_indicators_pane_g2

0x1ebd,	// (0x000203a2) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002ddee) vid4_indicators_pane_g

0x1eea,	// (0x000203cf) vid4_indicators_pane_t1

0x69c3,	// (0x00024ea8) cam4_autofocus_pane_g1

0x69cb,	// (0x00024eb0) cam4_autofocus_pane_g2

0x69d3,	// (0x00024eb8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002ddf9) cam4_autofocus_pane_g

0x69db,	// (0x00024ec0) cam4_autofocus_pane_g3_copy1

0x67df,	// (0x00024cc4) video_down_pane_cp_t1

0x67ed,	// (0x00024cd2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002dd75) video_down_pane_cp_t

0x0eec,	// (0x0001f3d1) popup_vitu2_window_ParamLimits

0x0eec,	// (0x0001f3d1) popup_vitu2_window

0x1f01,	// (0x000203e6) aid_size_cell2_itu2_ParamLimits

0x1f01,	// (0x000203e6) aid_size_cell2_itu2

0x1f23,	// (0x00020408) aid_size_cell_itu2_ParamLimits

0x1f23,	// (0x00020408) aid_size_cell_itu2

0x1f67,	// (0x0002044c) bg_popup_window_pane_cp09_ParamLimits

0x1f67,	// (0x0002044c) bg_popup_window_pane_cp09

0x1f75,	// (0x0002045a) field_vitu2_entry_pane_ParamLimits

0x1f75,	// (0x0002045a) field_vitu2_entry_pane

0x1f93,	// (0x00020478) grid_vitu2_function_pane_ParamLimits

0x1f93,	// (0x00020478) grid_vitu2_function_pane

0x1fd3,	// (0x000204b8) grid_vitu2_itu_pane_ParamLimits

0x1fd3,	// (0x000204b8) grid_vitu2_itu_pane

0x204b,	// (0x00020530) cell_vitu2_itu_pane_ParamLimits

0x204b,	// (0x00020530) cell_vitu2_itu_pane

0x2064,	// (0x00020549) cell_vitu2_function_pane_ParamLimits

0x2064,	// (0x00020549) cell_vitu2_function_pane

0xd13e,	// (0x0002b623) bg_popup_call_pane_cp08_ParamLimits

0xd13e,	// (0x0002b623) bg_popup_call_pane_cp08

0xd155,	// (0x0002b63a) field_vitu2_entry_pane_g1

0xd161,	// (0x0002b646) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002de00) field_vitu2_entry_pane_g

0x69e3,	// (0x00024ec8) field_vitu2_entry_pane_t1_ParamLimits

0x69e3,	// (0x00024ec8) field_vitu2_entry_pane_t1

0xd17b,	// (0x0002b660) field_vitu2_entry_pane_t2_ParamLimits

0xd17b,	// (0x0002b660) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002de07) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002de07) field_vitu2_entry_pane_t

0x20a5,	// (0x0002058a) bg_button_pane_cp010_ParamLimits

0x20a5,	// (0x0002058a) bg_button_pane_cp010

0x20b3,	// (0x00020598) cell_vitu2_itu_pane_g1

0x20d3,	// (0x000205b8) cell_vitu2_itu_pane_t1_ParamLimits

0x20d3,	// (0x000205b8) cell_vitu2_itu_pane_t1

0x211f,	// (0x00020604) cell_vitu2_itu_pane_t2_ParamLimits

0x211f,	// (0x00020604) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002de11) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002de11) cell_vitu2_itu_pane_t

0x1350,	// (0x0001f835) bg_button_pane_cp011

0x21e7,	// (0x000206cc) cell_vitu2_function_pane_g1

0x0efa,	// (0x0001f3df) main_myfav_hc_pane

0x1ca1,	// (0x00020186) popup_image3_note_pane_ParamLimits

0x1ca1,	// (0x00020186) popup_image3_note_pane

0x1caf,	// (0x00020194) popup_image3_tool_bar_pane_ParamLimits

0x1caf,	// (0x00020194) popup_image3_tool_bar_pane

0x2195,	// (0x0002067a) cell_vitu2_itu_pane_t3_ParamLimits

0x2195,	// (0x0002067a) cell_vitu2_itu_pane_t3

0x9a83,	// (0x00027f68) bg_popup_trans_pane

0xd1a0,	// (0x0002b685) grid_image3_tool_bar_pane

0xd1aa,	// (0x0002b68f) bg_popup_trans_pane_g1

0xa614,	// (0x00028af9) bg_popup_trans_pane_g2

0xd1b2,	// (0x0002b697) bg_popup_trans_pane_g3

0xd1ba,	// (0x0002b69f) bg_popup_trans_pane_g4

0xd1c2,	// (0x0002b6a7) bg_popup_trans_pane_g5

0xd1ca,	// (0x0002b6af) bg_popup_trans_pane_g6

0xd1d2,	// (0x0002b6b7) bg_popup_trans_pane_g7

0xd1da,	// (0x0002b6bf) bg_popup_trans_pane_g8

0xa5f4,	// (0x00028ad9) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002de18) bg_popup_trans_pane_g

0xd1e2,	// (0x0002b6c7) cell_image3_tool_bar_pane_ParamLimits

0xd1e2,	// (0x0002b6c7) cell_image3_tool_bar_pane

0xc69a,	// (0x0002ab7f) cell_image3_tool_bar_pane_g1

0x9a83,	// (0x00027f68) bg_popup_trans_pane_cp1

0xd1f6,	// (0x0002b6db) popup_image3_note_pane_t1

0xd204,	// (0x0002b6e9) popup_image3_note_pane_t2

0xd212,	// (0x0002b6f7) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002de2b) popup_image3_note_pane_t

0xd220,	// (0x0002b705) popup_image3_note_pane_t3_copy1

0x6a14,	// (0x00024ef9) bg_myfav_hc_instruction_pane_ParamLimits

0x6a14,	// (0x00024ef9) bg_myfav_hc_instruction_pane

0x6a2c,	// (0x00024f11) cell_myfav_contact_pane_ParamLimits

0x6a2c,	// (0x00024f11) cell_myfav_contact_pane

0x6a46,	// (0x00024f2b) cell_myfav_contact_pane_cp1_ParamLimits

0x6a46,	// (0x00024f2b) cell_myfav_contact_pane_cp1

0x6a5e,	// (0x00024f43) cell_myfav_contact_pane_cp2_ParamLimits

0x6a5e,	// (0x00024f43) cell_myfav_contact_pane_cp2

0x6a76,	// (0x00024f5b) cell_myfav_contact_pane_cp3_ParamLimits

0x6a76,	// (0x00024f5b) cell_myfav_contact_pane_cp3

0x6a8d,	// (0x00024f72) cell_myfav_contact_pane_cp4_ParamLimits

0x6a8d,	// (0x00024f72) cell_myfav_contact_pane_cp4

0x6aa3,	// (0x00024f88) cell_myfav_contact_pane_cp5_ParamLimits

0x6aa3,	// (0x00024f88) cell_myfav_contact_pane_cp5

0x6ab7,	// (0x00024f9c) cell_myfav_contact_pane_cp6_ParamLimits

0x6ab7,	// (0x00024f9c) cell_myfav_contact_pane_cp6

0x6acb,	// (0x00024fb0) cell_myfav_contact_pane_cp7_ParamLimits

0x6acb,	// (0x00024fb0) cell_myfav_contact_pane_cp7

0xd22e,	// (0x0002b713) listscroll_gen_pane_cp05

0x6ae3,	// (0x00024fc8) main_myfav_hc_pane_g1_ParamLimits

0x6ae3,	// (0x00024fc8) main_myfav_hc_pane_g1

0x6afb,	// (0x00024fe0) main_myfav_hc_pane_g2_ParamLimits

0x6afb,	// (0x00024fe0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002de32) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002de32) main_myfav_hc_pane_g

0x6b2b,	// (0x00025010) main_myfav_hc_pane_t1_ParamLimits

0x6b2b,	// (0x00025010) main_myfav_hc_pane_t1

0xd237,	// (0x0002b71c) main_myfav_hc_pane_t2_ParamLimits

0xd237,	// (0x0002b71c) main_myfav_hc_pane_t2

0xd249,	// (0x0002b72e) main_myfav_hc_pane_t3_ParamLimits

0xd249,	// (0x0002b72e) main_myfav_hc_pane_t3

0x6b42,	// (0x00025027) main_myfav_hc_pane_t4_ParamLimits

0x6b42,	// (0x00025027) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002de39) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002de39) main_myfav_hc_pane_t

0xc69a,	// (0x0002ab7f) bg_myfav_hc_instruction_pane_g1

0xd25b,	// (0x0002b740) cell_myfav_contact_pane_g1_ParamLimits

0xd25b,	// (0x0002b740) cell_myfav_contact_pane_g1

0xd25b,	// (0x0002b740) cell_myfav_contact_pane_g2_ParamLimits

0xd25b,	// (0x0002b740) cell_myfav_contact_pane_g2

0xd267,	// (0x0002b74c) cell_myfav_contact_pane_g3_ParamLimits

0xd267,	// (0x0002b74c) cell_myfav_contact_pane_g3

0xc9d3,	// (0x0002aeb8) cell_myfav_contact_pane_g4_ParamLimits

0xc9d3,	// (0x0002aeb8) cell_myfav_contact_pane_g4

0xd274,	// (0x0002b759) cell_myfav_contact_pane_g5_ParamLimits

0xd274,	// (0x0002b759) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002de44) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002de44) cell_myfav_contact_pane_g

0x6b13,	// (0x00024ff8) main_myfav_hc_pane_g3_ParamLimits

0x6b13,	// (0x00024ff8) main_myfav_hc_pane_g3

0x0df5,	// (0x0001f2da) popup_adpt_find_window

0x6b6c,	// (0x00025051) afind_page_pane_ParamLimits

0x6b6c,	// (0x00025051) afind_page_pane

0x6b79,	// (0x0002505e) aid_size_cell_afind_ParamLimits

0x6b79,	// (0x0002505e) aid_size_cell_afind

0x6b93,	// (0x00025078) bg_popup_sub_pane_cp09_ParamLimits

0x6b93,	// (0x00025078) bg_popup_sub_pane_cp09

0x6ba0,	// (0x00025085) find_pane_cp01_ParamLimits

0x6ba0,	// (0x00025085) find_pane_cp01

0xd280,	// (0x0002b765) grid_afind_control_pane_ParamLimits

0xd280,	// (0x0002b765) grid_afind_control_pane

0x6bad,	// (0x00025092) grid_afind_pane_ParamLimits

0x6bad,	// (0x00025092) grid_afind_pane

0x6bc7,	// (0x000250ac) cell_afind_pane_ParamLimits

0x6bc7,	// (0x000250ac) cell_afind_pane

0xc69a,	// (0x0002ab7f) afind_page_pane_g1

0x6c0f,	// (0x000250f4) afind_page_pane_g2

0x6c18,	// (0x000250fd) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002de4f) afind_page_pane_g

0x6c21,	// (0x00025106) afind_page_pane_t1

0xd294,	// (0x0002b779) cell_afind_grid_control_pane_ParamLimits

0xd294,	// (0x0002b779) cell_afind_grid_control_pane

0xd051,	// (0x0002b536) bg_button_pane_cp69_ParamLimits

0xd051,	// (0x0002b536) bg_button_pane_cp69

0x6c41,	// (0x00025126) cell_afind_pane_g1_ParamLimits

0x6c41,	// (0x00025126) cell_afind_pane_g1

0x6c4e,	// (0x00025133) cell_afind_pane_t1_ParamLimits

0x6c4e,	// (0x00025133) cell_afind_pane_t1

0xa40d,	// (0x000288f2) bg_button_pane_cp72

0xd2a3,	// (0x0002b788) cell_afind_grid_control_pane_g1

0x4fef,	// (0x000234d4) aid_image_placing_area_ParamLimits

0x4fef,	// (0x000234d4) aid_image_placing_area

0xcd03,	// (0x0002b1e8) field_vitu_entry_pane_g1_ParamLimits

0xcd03,	// (0x0002b1e8) field_vitu_entry_pane_g1

0xcd0f,	// (0x0002b1f4) field_vitu_entry_pane_g2_ParamLimits

0xcd0f,	// (0x0002b1f4) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002dd00) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002dd00) field_vitu_entry_pane_g

0x6677,	// (0x00024b5c) cell_vitu_itu_pane_g1_ParamLimits

0x66c7,	// (0x00024bac) cell_vitu_itu_pane_t3_ParamLimits

0x66c7,	// (0x00024bac) cell_vitu_itu_pane_t3

0xcff3,	// (0x0002b4d8) mp4_progress_pane_t1_ParamLimits

0xd00c,	// (0x0002b4f1) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002dd95) mp4_progress_pane_t_ParamLimits

0xd025,	// (0x0002b50a) mup_progress_pane_cp04_ParamLimits

0x6b56,	// (0x0002503b) main_myfav_hc_pane_t5_ParamLimits

0x6b56,	// (0x0002503b) main_myfav_hc_pane_t5

0x0cb8,	// (0x0001f19d) aid_zoom_text_primary

0x0df5,	// (0x0001f2da) popup_adpt_find_window_ParamLimits

0x1350,	// (0x0001f835) main_cam_set_pane

0x1d2f,	// (0x00020214) cam4_zoom_pane_ParamLimits

0x1d2f,	// (0x00020214) cam4_zoom_pane

0x6c60,	// (0x00025145) main_cam_set_pane_g1_ParamLimits

0x6c60,	// (0x00025145) main_cam_set_pane_g1

0x6c6e,	// (0x00025153) main_cam_set_pane_g2_ParamLimits

0x6c6e,	// (0x00025153) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002de56) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002de56) main_cam_set_pane_g

0x6c7a,	// (0x0002515f) main_cam_set_pane_t1_ParamLimits

0x6c7a,	// (0x0002515f) main_cam_set_pane_t1

0x6c96,	// (0x0002517b) main_cset_listscroll_pane_ParamLimits

0x6c96,	// (0x0002517b) main_cset_listscroll_pane

0x6cc1,	// (0x000251a6) main_cset_slider_pane_ParamLimits

0x6cc1,	// (0x000251a6) main_cset_slider_pane

0xd2b4,	// (0x0002b799) main_cset_list_pane_ParamLimits

0xd2b4,	// (0x0002b799) main_cset_list_pane

0xd2c4,	// (0x0002b7a9) scroll_pane_cp028

0x6ce0,	// (0x000251c5) aid_area_touch_slider

0x6cfc,	// (0x000251e1) cset_slider_pane

0x6d26,	// (0x0002520b) main_cset_slider_pane_g1

0x6d3b,	// (0x00025220) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002de5b) main_cset_slider_pane_g

0xd2fd,	// (0x0002b7e2) main_cset_slider_pane_t1

0x6e01,	// (0x000252e6) main_cset_slider_pane_t2

0x6e1b,	// (0x00025300) main_cset_slider_pane_t3

0x6e35,	// (0x0002531a) main_cset_slider_pane_t4

0x6e53,	// (0x00025338) main_cset_slider_pane_t5

0x6e71,	// (0x00025356) main_cset_slider_pane_t6

0x6e88,	// (0x0002536d) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002de80) main_cset_slider_pane_t

0x6f96,	// (0x0002547b) cset_list_set_pane_ParamLimits

0x6f96,	// (0x0002547b) cset_list_set_pane

0x6fb2,	// (0x00025497) aid_position_infowindow_above

0x6fba,	// (0x0002549f) aid_position_infowindow_below

0x6fc2,	// (0x000254a7) cset_list_set_pane_g1_ParamLimits

0x6fc2,	// (0x000254a7) cset_list_set_pane_g1

0x6fce,	// (0x000254b3) cset_list_set_pane_g3_ParamLimits

0x6fce,	// (0x000254b3) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002de9f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002de9f) cset_list_set_pane_g

0x6fdd,	// (0x000254c2) cset_list_set_pane_t1_ParamLimits

0x6fdd,	// (0x000254c2) cset_list_set_pane_t1

0xa32c,	// (0x00028811) list_highlight_pane_cp021_ParamLimits

0xa32c,	// (0x00028811) list_highlight_pane_cp021

0xaf73,	// (0x00029458) cset_slider_pane_g1

0xaf85,	// (0x0002946a) cset_slider_pane_g2

0xaf7c,	// (0x00029461) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002dea4) cset_slider_pane_g

0x21fb,	// (0x000206e0) aid_area_touch_cam4_zoom

0x2203,	// (0x000206e8) cam4_zoom_cont_pane

0x220b,	// (0x000206f0) cam4_zoom_pane_g1

0x2213,	// (0x000206f8) cam4_zoom_pane_g2

0x221b,	// (0x00020700) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002deab) cam4_zoom_pane_g

0x2223,	// (0x00020708) cam4_zoom_cont_pane_g1

0x222c,	// (0x00020711) cam4_zoom_cont_pane_g2

0x2235,	// (0x0002071a) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002deb2) cam4_zoom_cont_pane_g

0x68fb,	// (0x00024de0) call4_image_pane_ParamLimits

0x68fb,	// (0x00024de0) call4_image_pane

0xd05d,	// (0x0002b542) call4_windows_conf_pane_ParamLimits

0xd09c,	// (0x0002b581) popup_call4_audio_in_window_ParamLimits

0xd09c,	// (0x0002b581) popup_call4_audio_in_window

0x9a83,	// (0x00027f68) bg_popup_call2_act_pane_cp02

0xd112,	// (0x0002b5f7) call4_list_conf_pane

0xc69a,	// (0x0002ab7f) call4_image_pane_g1

0xc69a,	// (0x0002ab7f) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002dbc1) call4_image_pane_g

0xd39d,	// (0x0002b882) list_single_graphic_popup_conf4_pane_ParamLimits

0xd39d,	// (0x0002b882) list_single_graphic_popup_conf4_pane

0x9a83,	// (0x00027f68) list_highlight_pane_cp022

0xd3b0,	// (0x0002b895) list_single_graphic_popup_conf4_pane_g1

0xab68,	// (0x0002904d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002deb9) list_single_graphic_popup_conf4_pane_g

0xd3b8,	// (0x0002b89d) list_single_graphic_popup_conf4_pane_t1

0x32f4,	// (0x000217d9) popup_vtel_slider_window_ParamLimits

0x32f4,	// (0x000217d9) popup_vtel_slider_window

0xd03f,	// (0x0002b524) dialer2_ne_pane_t2_ParamLimits

0xd03f,	// (0x0002b524) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002dd9a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002dd9a) dialer2_ne_pane_t

0xa32c,	// (0x00028811) bg_popup_sub_pane_cp010_ParamLimits

0xa32c,	// (0x00028811) bg_popup_sub_pane_cp010

0x6ff2,	// (0x000254d7) popup_vtel_slider_window_g1_ParamLimits

0x6ff2,	// (0x000254d7) popup_vtel_slider_window_g1

0x6ffe,	// (0x000254e3) popup_vtel_slider_window_g2_ParamLimits

0x6ffe,	// (0x000254e3) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002debe) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002debe) popup_vtel_slider_window_g

0x7046,	// (0x0002552b) vtel_slider_pane_ParamLimits

0x7046,	// (0x0002552b) vtel_slider_pane

0x7055,	// (0x0002553a) vtel_slider_pane_g1_ParamLimits

0x7055,	// (0x0002553a) vtel_slider_pane_g1

0x7062,	// (0x00025547) vtel_slider_pane_g2_ParamLimits

0x7062,	// (0x00025547) vtel_slider_pane_g2

0x706f,	// (0x00025554) vtel_slider_pane_g3_ParamLimits

0x706f,	// (0x00025554) vtel_slider_pane_g3

0x7055,	// (0x0002553a) vtel_slider_pane_g4_ParamLimits

0x7055,	// (0x0002553a) vtel_slider_pane_g4

0x707c,	// (0x00025561) vtel_slider_pane_g5_ParamLimits

0x707c,	// (0x00025561) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002dec7) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002dec7) vtel_slider_pane_g

0x1350,	// (0x0001f835) main_gallery2_pane

0x1f49,	// (0x0002042e) aid_size_row_itut2_dropdow_list_ParamLimits

0x1f49,	// (0x0002042e) aid_size_row_itut2_dropdow_list

0x1fb3,	// (0x00020498) grid_vitu2_function_top_pane_ParamLimits

0x1fb3,	// (0x00020498) grid_vitu2_function_top_pane

0x200b,	// (0x000204f0) popup_vitu2_dropdown_list_window_ParamLimits

0x200b,	// (0x000204f0) popup_vitu2_dropdown_list_window

0x2029,	// (0x0002050e) popup_vitu2_match_list_window

0x223e,	// (0x00020723) cell_vitu2_function_top_pane_ParamLimits

0x223e,	// (0x00020723) cell_vitu2_function_top_pane

0x2260,	// (0x00020745) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2260,	// (0x00020745) cell_vitu2_function_top_pane_cp01

0x227c,	// (0x00020761) cell_vitu2_function_top_wide_pane_ParamLimits

0x227c,	// (0x00020761) cell_vitu2_function_top_wide_pane

0x1350,	// (0x0001f835) bg_button_pane_cp012

0x2298,	// (0x0002077d) cell_vitu2_function_top_pane_g1

0x22ac,	// (0x00020791) bg_button_pane_cp013_ParamLimits

0x22ac,	// (0x00020791) bg_button_pane_cp013

0x7097,	// (0x0002557c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7097,	// (0x0002557c) cell_vitu2_function_top_wide_pane_g1

0x0eec,	// (0x0001f3d1) bg_popup_sub_pane_cp20

0x22c8,	// (0x000207ad) list_vitu2_match_list_pane

0xd1aa,	// (0x0002b68f) bg_popup_sub_pane_cp20_g1

0xd1b2,	// (0x0002b697) bg_popup_sub_pane_cp20_g2

0xa614,	// (0x00028af9) bg_popup_sub_pane_cp20_g3

0xd1ba,	// (0x0002b69f) bg_popup_sub_pane_cp20_g4

0xa5f4,	// (0x00028ad9) bg_popup_sub_pane_cp20_g5

0xd3ce,	// (0x0002b8b3) bg_popup_sub_pane_cp20_g6

0xd1ca,	// (0x0002b6af) bg_popup_sub_pane_cp20_g7

0xd1d2,	// (0x0002b6b7) bg_popup_sub_pane_cp20_g8

0xd1da,	// (0x0002b6bf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002ded2) bg_popup_sub_pane_cp20_g

0x22e0,	// (0x000207c5) list_vitu2_match_list_item_pane_ParamLimits

0x22e0,	// (0x000207c5) list_vitu2_match_list_item_pane

0x22f2,	// (0x000207d7) list_vitu2_match_list_item_pane_t1

0x0efa,	// (0x0001f3df) bg_popup_sub_pane_cp21

0x2300,	// (0x000207e5) grid_vitu2_dropdown_list_pane

0x2308,	// (0x000207ed) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2308,	// (0x000207ed) cell_vitu2_dropdown_list_char_pane

0x2329,	// (0x0002080e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2329,	// (0x0002080e) cell_vitu2_dropdown_list_ctrl_pane

0xd3d6,	// (0x0002b8bb) cell_vitu2_dropdown_list_char_pane_g1

0xd3df,	// (0x0002b8c4) cell_vitu2_dropdown_list_char_pane_g2

0xd3e8,	// (0x0002b8cd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002deef) cell_vitu2_dropdown_list_char_pane_g

0x2355,	// (0x0002083a) cell_vitu2_dropdown_list_char_pane_t1

0x70f6,	// (0x000255db) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70f6,	// (0x000255db) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7106,	// (0x000255eb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7106,	// (0x000255eb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7117,	// (0x000255fc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7117,	// (0x000255fc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2363,	// (0x00020848) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2363,	// (0x00020848) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1d9f,	// (0x00020284) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1d9f,	// (0x00020284) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002def6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002def6) cell_vitu2_dropdown_list_ctrl_pane_g

0x7127,	// (0x0002560c) aid_size_cell_gallery2_ParamLimits

0x7127,	// (0x0002560c) aid_size_cell_gallery2

0x7141,	// (0x00025626) grid_gallery2_pane_ParamLimits

0x7141,	// (0x00025626) grid_gallery2_pane

0x64f8,	// (0x000249dd) scroll_pane_cp029_ParamLimits

0x64f8,	// (0x000249dd) scroll_pane_cp029

0x7158,	// (0x0002563d) cell_gallery2_pane_ParamLimits

0x7158,	// (0x0002563d) cell_gallery2_pane

0xd3f1,	// (0x0002b8d6) cell_gallery2_pane_g2

0x71ad,	// (0x00025692) cell_gallery2_pane_g3

0xd3f9,	// (0x0002b8de) cell_gallery2_pane_g4

0xd401,	// (0x0002b8e6) cell_gallery2_pane_g5

0xa3bb,	// (0x000288a0) grid_highlight_pane_cp10

0x2029,	// (0x0002050e) popup_vitu2_match_list_window_ParamLimits

0x203b,	// (0x00020520) popup_vitu2_query_window_ParamLimits

0x203b,	// (0x00020520) popup_vitu2_query_window

0x0efa,	// (0x0001f3df) bg_vitu2_candi_button_pane

0xd3d6,	// (0x0002b8bb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3df,	// (0x0002b8c4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3e8,	// (0x0002b8cd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71b5,	// (0x0002569a) bg_button_pane_cp015

0x71c7,	// (0x000256ac) bg_button_pane_cp016

0x71da,	// (0x000256bf) bg_button_pane_cp017

0xc290,	// (0x0002a775) bg_popup_sub_pane_cp22

0xd409,	// (0x0002b8ee) popup_vitu2_query_window_g1

0x721f,	// (0x00025704) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002df01) popup_vitu2_query_window_g

0x723c,	// (0x00025721) popup_vitu2_query_window_t1_ParamLimits

0x723c,	// (0x00025721) popup_vitu2_query_window_t1

0x726f,	// (0x00025754) popup_vitu2_query_window_t2_ParamLimits

0x726f,	// (0x00025754) popup_vitu2_query_window_t2

0x7281,	// (0x00025766) popup_vitu2_query_window_t3_ParamLimits

0x7281,	// (0x00025766) popup_vitu2_query_window_t3

0x72a9,	// (0x0002578e) popup_vitu2_query_window_t4_ParamLimits

0x72a9,	// (0x0002578e) popup_vitu2_query_window_t4

0x72ca,	// (0x000257af) popup_vitu2_query_window_t5_ParamLimits

0x72ca,	// (0x000257af) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002df08) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002df08) popup_vitu2_query_window_t

0xd2ac,	// (0x0002b791) main_cset_text_pane

0x6ce0,	// (0x000251c5) aid_area_touch_slider_ParamLimits

0x6cfc,	// (0x000251e1) cset_slider_pane_ParamLimits

0x6d26,	// (0x0002520b) main_cset_slider_pane_g1_ParamLimits

0x6d3b,	// (0x00025220) main_cset_slider_pane_g2_ParamLimits

0xd2cd,	// (0x0002b7b2) main_cset_slider_pane_g3_ParamLimits

0xd2cd,	// (0x0002b7b2) main_cset_slider_pane_g3

0x6d50,	// (0x00025235) main_cset_slider_pane_g4_ParamLimits

0x6d50,	// (0x00025235) main_cset_slider_pane_g4

0x6d5f,	// (0x00025244) main_cset_slider_pane_g5_ParamLimits

0x6d5f,	// (0x00025244) main_cset_slider_pane_g5

0x6d6d,	// (0x00025252) main_cset_slider_pane_g6_ParamLimits

0x6d6d,	// (0x00025252) main_cset_slider_pane_g6

0xf976,	// (0x0002de5b) main_cset_slider_pane_g_ParamLimits

0xd2fd,	// (0x0002b7e2) main_cset_slider_pane_t1_ParamLimits

0x6e01,	// (0x000252e6) main_cset_slider_pane_t2_ParamLimits

0x6e1b,	// (0x00025300) main_cset_slider_pane_t3_ParamLimits

0x6e35,	// (0x0002531a) main_cset_slider_pane_t4_ParamLimits

0x6e53,	// (0x00025338) main_cset_slider_pane_t5_ParamLimits

0x6e71,	// (0x00025356) main_cset_slider_pane_t6_ParamLimits

0x6e88,	// (0x0002536d) main_cset_slider_pane_t7_ParamLimits

0x6eb6,	// (0x0002539b) main_cset_slider_pane_t8_ParamLimits

0x6eb6,	// (0x0002539b) main_cset_slider_pane_t8

0x6ede,	// (0x000253c3) main_cset_slider_pane_t9_ParamLimits

0x6ede,	// (0x000253c3) main_cset_slider_pane_t9

0x6f06,	// (0x000253eb) main_cset_slider_pane_t10_ParamLimits

0x6f06,	// (0x000253eb) main_cset_slider_pane_t10

0x6f2e,	// (0x00025413) main_cset_slider_pane_t11_ParamLimits

0x6f2e,	// (0x00025413) main_cset_slider_pane_t11

0x6f58,	// (0x0002543d) main_cset_slider_pane_t12_ParamLimits

0x6f58,	// (0x0002543d) main_cset_slider_pane_t12

0x6f77,	// (0x0002545c) main_cset_slider_pane_t13_ParamLimits

0x6f77,	// (0x0002545c) main_cset_slider_pane_t13

0xf99b,	// (0x0002de80) main_cset_slider_pane_t_ParamLimits

0x9a83,	// (0x00027f68) bg_popup_sub_pane_cp011

0xd415,	// (0x0002b8fa) main_cset_text_pane_g1

0xd41d,	// (0x0002b902) main_cset_text_pane_t1

0xd42b,	// (0x0002b910) main_cset_text_pane_t2

0xd439,	// (0x0002b91e) main_cset_text_pane_t3

0xd447,	// (0x0002b92c) main_cset_text_pane_t4

0xd455,	// (0x0002b93a) main_cset_text_pane_t5

0xd463,	// (0x0002b948) main_cset_text_pane_t6

0xd471,	// (0x0002b956) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002df17) main_cset_text_pane_t

0x0efa,	// (0x0001f3df) main_cam4_burst_pane

0x0efa,	// (0x0001f3df) main_cam5_pane

0x6c2f,	// (0x00025114) bg_button_pane_cp019

0x6c38,	// (0x0002511d) bg_button_pane_cp020

0xd2d9,	// (0x0002b7be) main_cset_slider_pane_g7_ParamLimits

0xd2d9,	// (0x0002b7be) main_cset_slider_pane_g7

0xd2e5,	// (0x0002b7ca) main_cset_slider_pane_g8_ParamLimits

0xd2e5,	// (0x0002b7ca) main_cset_slider_pane_g8

0x6d81,	// (0x00025266) main_cset_slider_pane_g9_ParamLimits

0x6d81,	// (0x00025266) main_cset_slider_pane_g9

0x6d8d,	// (0x00025272) main_cset_slider_pane_g10_ParamLimits

0x6d8d,	// (0x00025272) main_cset_slider_pane_g10

0x6d99,	// (0x0002527e) main_cset_slider_pane_g11_ParamLimits

0x6d99,	// (0x0002527e) main_cset_slider_pane_g11

0x6da5,	// (0x0002528a) main_cset_slider_pane_g12_ParamLimits

0x6da5,	// (0x0002528a) main_cset_slider_pane_g12

0x6db1,	// (0x00025296) main_cset_slider_pane_g13_ParamLimits

0x6db1,	// (0x00025296) main_cset_slider_pane_g13

0x6dbf,	// (0x000252a4) main_cset_slider_pane_g14_ParamLimits

0x6dbf,	// (0x000252a4) main_cset_slider_pane_g14

0x6dcd,	// (0x000252b2) main_cset_slider_pane_g15_ParamLimits

0x6dcd,	// (0x000252b2) main_cset_slider_pane_g15

0xd32b,	// (0x0002b810) main_cset_slider_pane_t14_ParamLimits

0xd32b,	// (0x0002b810) main_cset_slider_pane_t14

0xd364,	// (0x0002b849) main_cset_slider_pane_t15_ParamLimits

0xd364,	// (0x0002b849) main_cset_slider_pane_t15

0x7341,	// (0x00025826) aid_cam4_burst_size_cell_ParamLimits

0x7341,	// (0x00025826) aid_cam4_burst_size_cell

0x735d,	// (0x00025842) grid_cam4_burst_pane_ParamLimits

0x735d,	// (0x00025842) grid_cam4_burst_pane

0x738d,	// (0x00025872) linegrid_cam4_burst_pane_ParamLimits

0x738d,	// (0x00025872) linegrid_cam4_burst_pane

0x73af,	// (0x00025894) scroll_pane_cp30_ParamLimits

0x73af,	// (0x00025894) scroll_pane_cp30

0x73bb,	// (0x000258a0) cell_cam4_burst_pane_ParamLimits

0x73bb,	// (0x000258a0) cell_cam4_burst_pane

0xd47f,	// (0x0002b964) linegrid_cam4_burst_pane_g1_ParamLimits

0xd47f,	// (0x0002b964) linegrid_cam4_burst_pane_g1

0x73f7,	// (0x000258dc) linegrid_cam4_burst_pane_g2_ParamLimits

0x73f7,	// (0x000258dc) linegrid_cam4_burst_pane_g2

0xd48c,	// (0x0002b971) linegrid_cam4_burst_pane_g3_ParamLimits

0xd48c,	// (0x0002b971) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002df26) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002df26) linegrid_cam4_burst_pane_g

0x7408,	// (0x000258ed) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7408,	// (0x000258ed) linegrid_cam4_burst_pane_g3_copy1

0xd499,	// (0x0002b97e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd499,	// (0x0002b97e) linegrid_cam4_burst_pane_g4

0x7422,	// (0x00025907) linegrid_cam4_burst_pane_g5_ParamLimits

0x7422,	// (0x00025907) linegrid_cam4_burst_pane_g5

0x7433,	// (0x00025918) linegrid_cam4_burst_pane_g6_ParamLimits

0x7433,	// (0x00025918) linegrid_cam4_burst_pane_g6

0xd4a6,	// (0x0002b98b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4a6,	// (0x0002b98b) linegrid_cam4_burst_pane_g7

0x7444,	// (0x00025929) cell_cam4_burst_pane_g1

0xd4bf,	// (0x0002b9a4) main_cam5_pane_t1_ParamLimits

0xd4bf,	// (0x0002b9a4) main_cam5_pane_t1

0xd4d1,	// (0x0002b9b6) main_cam5_pane_t2_ParamLimits

0xd4d1,	// (0x0002b9b6) main_cam5_pane_t2

0xd4e3,	// (0x0002b9c8) main_cam5_pane_t3_ParamLimits

0xd4e3,	// (0x0002b9c8) main_cam5_pane_t3

0xd4f5,	// (0x0002b9da) main_cam5_pane_t4_ParamLimits

0xd4f5,	// (0x0002b9da) main_cam5_pane_t4

0xd50d,	// (0x0002b9f2) main_cam5_pane_t5_ParamLimits

0xd50d,	// (0x0002b9f2) main_cam5_pane_t5

0xd554,	// (0x0002ba39) main_cam5_pane_t6_ParamLimits

0xd554,	// (0x0002ba39) main_cam5_pane_t6

0xd568,	// (0x0002ba4d) main_cam5_pane_t7_ParamLimits

0xd568,	// (0x0002ba4d) main_cam5_pane_t7

0xd57a,	// (0x0002ba5f) main_cam5_pane_t8_ParamLimits

0xd57a,	// (0x0002ba5f) main_cam5_pane_t8

0xd596,	// (0x0002ba7b) main_cam5_pane_t9_ParamLimits

0xd596,	// (0x0002ba7b) main_cam5_pane_t9

0xd5a8,	// (0x0002ba8d) main_cam5_pane_t10_ParamLimits

0xd5a8,	// (0x0002ba8d) main_cam5_pane_t10

0xd5ba,	// (0x0002ba9f) main_cam5_pane_t11_ParamLimits

0xd5ba,	// (0x0002ba9f) main_cam5_pane_t11

0xd5cc,	// (0x0002bab1) main_cam5_pane_t12_ParamLimits

0xd5cc,	// (0x0002bab1) main_cam5_pane_t12

0xd5e1,	// (0x0002bac6) main_cam5_pane_t13_ParamLimits

0xd5e1,	// (0x0002bac6) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002df32) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002df32) main_cam5_pane_t

0x0eab,	// (0x0001f390) popup_scut_keymap_window_ParamLimits

0x0eab,	// (0x0001f390) popup_scut_keymap_window

0x7459,	// (0x0002593e) aid_size_cell_brow_shortcut

0xa3bb,	// (0x000288a0) bg_popup_window_pane_cp010

0x7465,	// (0x0002594a) grid_scut_pane

0x7471,	// (0x00025956) cell_scut_pane_ParamLimits

0x7471,	// (0x00025956) cell_scut_pane

0x7488,	// (0x0002596d) cell_scut_pane_g1

0xd5fe,	// (0x0002bae3) cell_scut_pane_t1

0xd60d,	// (0x0002baf2) cell_scut_pane_t2

0x7491,	// (0x00025976) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002df4d) cell_scut_pane_t

0x5d50,	// (0x00024235) main_mup3_pane_g8_ParamLimits

0x5d50,	// (0x00024235) main_mup3_pane_g8

0x1f57,	// (0x0002043c) area_vitu2_query_pane_ParamLimits

0x1f57,	// (0x0002043c) area_vitu2_query_pane

0x71ed,	// (0x000256d2) input_focus_pane_cp08

0xd61c,	// (0x0002bb01) area_vitu2_query_pane_g1

0x749f,	// (0x00025984) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002df54) area_vitu2_query_pane_g

0x74b0,	// (0x00025995) area_vitu2_query_pane_t1_ParamLimits

0x74b0,	// (0x00025995) area_vitu2_query_pane_t1

0x74c4,	// (0x000259a9) area_vitu2_query_pane_t2_ParamLimits

0x74c4,	// (0x000259a9) area_vitu2_query_pane_t2

0x74d8,	// (0x000259bd) area_vitu2_query_pane_t3_ParamLimits

0x74d8,	// (0x000259bd) area_vitu2_query_pane_t3

0xd628,	// (0x0002bb0d) area_vitu2_query_pane_t4_ParamLimits

0xd628,	// (0x0002bb0d) area_vitu2_query_pane_t4

0xd650,	// (0x0002bb35) area_vitu2_query_pane_t5_ParamLimits

0xd650,	// (0x0002bb35) area_vitu2_query_pane_t5

0xd678,	// (0x0002bb5d) area_vitu2_query_pane_t6_ParamLimits

0xd678,	// (0x0002bb5d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002df59) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002df59) area_vitu2_query_pane_t

0x7500,	// (0x000259e5) bg_button_pane_cp018

0x750e,	// (0x000259f3) bg_button_pane_cp021

0x751a,	// (0x000259ff) bg_button_pane_cp022

0x752b,	// (0x00025a10) input_focus_pane_cp09

0xac8c,	// (0x00029171) aid_size_touch_mv_arrow_left

0xacb7,	// (0x0002919c) aid_size_touch_mv_arrow_right

0x6de5,	// (0x000252ca) main_cset_slider_pane_g16_ParamLimits

0x6de5,	// (0x000252ca) main_cset_slider_pane_g16

0x6df3,	// (0x000252d8) main_cset_slider_pane_g17_ParamLimits

0x6df3,	// (0x000252d8) main_cset_slider_pane_g17

0x7444,	// (0x00025929) cell_cam4_burst_pane_g1_ParamLimits

0x9a83,	// (0x00027f68) compa_mode_pane

0x700a,	// (0x000254ef) popup_vtel_slider_window_g3_ParamLimits

0x700a,	// (0x000254ef) popup_vtel_slider_window_g3

0x701e,	// (0x00025503) popup_vtel_slider_window_g4_ParamLimits

0x701e,	// (0x00025503) popup_vtel_slider_window_g4

0x7032,	// (0x00025517) popup_vtel_slider_window_t1_ParamLimits

0x7032,	// (0x00025517) popup_vtel_slider_window_t1

0x0efa,	// (0x0001f3df) main_cl_pane

0x13ea,	// (0x0001f8cf) popup_imed_adjust2_window_ParamLimits

0xc290,	// (0x0002a775) bg_tb_trans_pane_cp05_ParamLimits

0xcc2f,	// (0x0002b114) popup_imed_adjust2_window_g1_ParamLimits

0xcc3e,	// (0x0002b123) popup_imed_adjust2_window_g2_ParamLimits

0xcc3e,	// (0x0002b123) popup_imed_adjust2_window_g2

0xcc4a,	// (0x0002b12f) popup_imed_adjust2_window_g3_ParamLimits

0xcc4a,	// (0x0002b12f) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002dcc4) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002dcc4) popup_imed_adjust2_window_g

0xcc56,	// (0x0002b13b) popup_imed_adjust2_window_t1_ParamLimits

0xcc6e,	// (0x0002b153) slider_imed_adjust_pane_ParamLimits

0xcc82,	// (0x0002b167) slider_imed_adjust_pane_g1_ParamLimits

0xcc92,	// (0x0002b177) slider_imed_adjust_pane_g2_ParamLimits

0xcca2,	// (0x0002b187) slider_imed_adjust_pane_g3_ParamLimits

0xccb3,	// (0x0002b198) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002dccb) slider_imed_adjust_pane_g_ParamLimits

0x1cd8,	// (0x000201bd) aid_touch_area_cam4_ParamLimits

0x1cd8,	// (0x000201bd) aid_touch_area_cam4

0x1ce8,	// (0x000201cd) battery_pane_cp01

0x1d6f,	// (0x00020254) main_camera4_pane_g6_ParamLimits

0x1d6f,	// (0x00020254) main_camera4_pane_g6

0x1d8d,	// (0x00020272) main_camera4_pane_t2_ParamLimits

0x1d8d,	// (0x00020272) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002ddce) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002ddce) main_camera4_pane_t

0x1dfe,	// (0x000202e3) aid_touch_area_vid4_ParamLimits

0x1dfe,	// (0x000202e3) aid_touch_area_vid4

0x1e3e,	// (0x00020323) main_video4_pane_g5_ParamLimits

0x1e3e,	// (0x00020323) main_video4_pane_g5

0x1e62,	// (0x00020347) vid4_progress_pane_ParamLimits

0x1e62,	// (0x00020347) vid4_progress_pane

0xd2f1,	// (0x0002b7d6) main_cset_slider_pane_g18_ParamLimits

0xd2f1,	// (0x0002b7d6) main_cset_slider_pane_g18

0xd4b3,	// (0x0002b998) cell_cam4_burst_pane_g2_ParamLimits

0xd4b3,	// (0x0002b998) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002df2d) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002df2d) cell_cam4_burst_pane_g

0x753c,	// (0x00025a21) bg_cl_pane_ParamLimits

0x753c,	// (0x00025a21) bg_cl_pane

0x7548,	// (0x00025a2d) cl_header_pane_ParamLimits

0x7548,	// (0x00025a2d) cl_header_pane

0x7554,	// (0x00025a39) cl_listscroll_pane_ParamLimits

0x7554,	// (0x00025a39) cl_listscroll_pane

0xd6c4,	// (0x0002bba9) bg_cl_pane_g1

0xd6cc,	// (0x0002bbb1) bg_cl_pane_g2

0xd6d4,	// (0x0002bbb9) bg_cl_pane_g3

0xd6dc,	// (0x0002bbc1) bg_cl_pane_g4

0xd6e4,	// (0x0002bbc9) bg_cl_pane_g5

0xd6ec,	// (0x0002bbd1) bg_cl_pane_g6

0xd6f4,	// (0x0002bbd9) bg_cl_pane_g7

0xd6fc,	// (0x0002bbe1) bg_cl_pane_g8

0xd704,	// (0x0002bbe9) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002df68) bg_cl_pane_g

0x7560,	// (0x00025a45) aid_height_cl_leading_ParamLimits

0x7560,	// (0x00025a45) aid_height_cl_leading

0x756c,	// (0x00025a51) aid_height_cl_text_ParamLimits

0x756c,	// (0x00025a51) aid_height_cl_text

0xcf89,	// (0x0002b46e) bg_cl_header_pane_ParamLimits

0xcf89,	// (0x0002b46e) bg_cl_header_pane

0x7584,	// (0x00025a69) cl_header_pane_g1_ParamLimits

0x7584,	// (0x00025a69) cl_header_pane_g1

0x7591,	// (0x00025a76) cl_header_pane_t1_ParamLimits

0x7591,	// (0x00025a76) cl_header_pane_t1

0xd70c,	// (0x0002bbf1) cl_list_pane

0xd2c4,	// (0x0002b7a9) hc_scroll_pane_cp01

0xa5f4,	// (0x00028ad9) bg_cl_header_pane_g1

0xd1aa,	// (0x0002b68f) bg_cl_header_pane_g2

0xa614,	// (0x00028af9) bg_cl_header_pane_g3

0xd1ba,	// (0x0002b69f) bg_cl_header_pane_g4

0xd1b2,	// (0x0002b697) bg_cl_header_pane_g5

0xd3ce,	// (0x0002b8b3) bg_cl_header_pane_g6

0xd1d2,	// (0x0002b6b7) bg_cl_header_pane_g7

0xd1da,	// (0x0002b6bf) bg_cl_header_pane_g8

0xd1ca,	// (0x0002b6af) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002df7b) bg_cl_header_pane_g

0x75a3,	// (0x00025a88) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75a3,	// (0x00025a88) hc_cl_list_double_graphic_heading_pane

0x75b7,	// (0x00025a9c) hc_cl_list_single_graphic_pane_ParamLimits

0x75b7,	// (0x00025a9c) hc_cl_list_single_graphic_pane

0x75d1,	// (0x00025ab6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75d1,	// (0x00025ab6) hc_cl_list_single_graphic_pane_g1

0x75dd,	// (0x00025ac2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75dd,	// (0x00025ac2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002df8e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002df8e) hc_cl_list_single_graphic_pane_g

0x75f1,	// (0x00025ad6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75f1,	// (0x00025ad6) hc_cl_list_single_graphic_pane_t1

0x75d1,	// (0x00025ab6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75d1,	// (0x00025ab6) hc_cl_list_double_graphic_heading_pane_g1

0x7606,	// (0x00025aeb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7606,	// (0x00025aeb) hc_cl_list_double_graphic_heading_pane_g2

0x761a,	// (0x00025aff) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x761a,	// (0x00025aff) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002df93) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002df93) hc_cl_list_double_graphic_heading_pane_g

0x762e,	// (0x00025b13) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x762e,	// (0x00025b13) hc_cl_list_double_graphic_heading_pane_t1

0x7643,	// (0x00025b28) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7643,	// (0x00025b28) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002df9a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002df9a) hc_cl_list_double_graphic_heading_pane_t

0x2387,	// (0x0002086c) vid4_progress_pane_g1

0x2397,	// (0x0002087c) vid4_progress_pane_g2

0x23a7,	// (0x0002088c) vid4_progress_pane_g3

0x23b9,	// (0x0002089e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002df9f) vid4_progress_pane_g

0x23d7,	// (0x000208bc) vid4_progress_pane_t1

0x23ed,	// (0x000208d2) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002dfaa) vid4_progress_pane_t

0x2418,	// (0x000208fd) wait_bar_pane_cp07

0xc48b,	// (0x0002a970) blid_firmament_pane_ParamLimits

0xc4ce,	// (0x0002a9b3) popup_blid_sat_info2_window_g1

0xc4f2,	// (0x0002a9d7) popup_blid_sat_info2_window_t3

0xc500,	// (0x0002a9e5) popup_blid_sat_info2_window_t4

0xc50e,	// (0x0002a9f3) popup_blid_sat_info2_window_t5

0xc51c,	// (0x0002aa01) popup_blid_sat_info2_window_t6

0xc52c,	// (0x0002aa11) popup_blid_sat_info2_window_t7

0xc53a,	// (0x0002aa1f) popup_blid_sat_info2_window_t8

0xc548,	// (0x0002aa2d) popup_blid_sat_info2_window_t9

0xc556,	// (0x0002aa3b) popup_blid_sat_info2_window_t10

0xc61a,	// (0x0002aaff) aid_firma_cardinal_ParamLimits

0xc62e,	// (0x0002ab13) blid_firmament_pane_t1_ParamLimits

0xc645,	// (0x0002ab2a) blid_firmament_pane_t2_ParamLimits

0xc65c,	// (0x0002ab41) blid_firmament_pane_t3_ParamLimits

0xc673,	// (0x0002ab58) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002dbb8) blid_firmament_pane_t_ParamLimits

0xc68a,	// (0x0002ab6f) blid_sat_info_pane_ParamLimits

0x1350,	// (0x0001f835) main_cam_set_pane_ParamLimits

0x6491,	// (0x00024976) aid_size_cell_colour_35_ParamLimits

0x64ab,	// (0x00024990) aid_size_cell_colour_112_ParamLimits

0x64c2,	// (0x000249a7) aid_size_cell_effect_ParamLimits

0xa32c,	// (0x00028811) bg_tb_trans_pane_cp02_ParamLimits

0xab3d,	// (0x00029022) heading_imed_pane_ParamLimits

0x64dc,	// (0x000249c1) listscroll_imed_pane_ParamLimits

0xb8b6,	// (0x00029d9b) popup_call2_audio_first_window_g5_ParamLimits

0xb8b6,	// (0x00029d9b) popup_call2_audio_first_window_g5

0x1b63,	// (0x00020048) aid_size_touch_image3_arrow_left_ParamLimits

0x1b63,	// (0x00020048) aid_size_touch_image3_arrow_left

0x1b79,	// (0x0002005e) aid_size_touch_image3_arrow_right_ParamLimits

0x1b79,	// (0x0002005e) aid_size_touch_image3_arrow_right

0x2402,	// (0x000208e7) vid4_progress_pane_t3

0x6790,	// (0x00024c75) main_hwr_training_symbol_option_pane_ParamLimits

0x6790,	// (0x00024c75) main_hwr_training_symbol_option_pane

0xcf25,	// (0x0002b40a) popup_hwr_training_preview_window_ParamLimits

0xcf25,	// (0x0002b40a) popup_hwr_training_preview_window

0x1861,	// (0x0001fd46) hwr_training_navi_pane_g5_ParamLimits

0x1861,	// (0x0001fd46) hwr_training_navi_pane_g5

0xd198,	// (0x0002b67d) popup_char_count_window

0x0eec,	// (0x0001f3d1) bg_popup_sub_pane_cp20_ParamLimits

0x22c8,	// (0x000207ad) list_vitu2_match_list_pane_ParamLimits

0x22d4,	// (0x000207b9) vitu2_page_scroll_pane_ParamLimits

0x22d4,	// (0x000207b9) vitu2_page_scroll_pane

0xd737,	// (0x0002bc1c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd737,	// (0x0002bc1c) list_single_hwr_training_symbol_option_pane

0xd74a,	// (0x0002bc2f) list_single_hwr_training_symbol_option_pane_g1

0xd752,	// (0x0002bc37) list_single_hwr_training_symbol_option_pane_t1

0xd760,	// (0x0002bc45) bg_button_pane_cp023

0xd769,	// (0x0002bc4e) bg_button_pane_cp024

0x7690,	// (0x00025b75) vitu2_page_scroll_pane_g1

0x7698,	// (0x00025b7d) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002dfb1) vitu2_page_scroll_pane_g

0x76a0,	// (0x00025b85) vitu2_page_scroll_pane_t1

0xc3eb,	// (0x0002a8d0) popup_char_count_window_g1

0xd7ae,	// (0x0002bc93) popup_char_count_window_g2

0xd7b7,	// (0x0002bc9c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002dfb6) popup_char_count_window_g

0xd7c0,	// (0x0002bca5) popup_char_count_window_t1

0x0efa,	// (0x0001f3df) main_vded2_pane

0xcc1b,	// (0x0002b100) aid_size_cell_imed_line

0xcc25,	// (0x0002b10a) grid_imed_line_width_pane

0x1ece,	// (0x000203b3) vid4_indicators_pane_g4

0xd7ce,	// (0x0002bcb3) cell_imed_line_width_pane_ParamLimits

0xd7ce,	// (0x0002bcb3) cell_imed_line_width_pane

0xd7e2,	// (0x0002bcc7) cell_imed_line_width_pane_g1

0xd79c,	// (0x0002bc81) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002dfbd) cell_imed_line_width_pane_g

0x76af,	// (0x00025b94) main_vded2_pane_g1_ParamLimits

0x76af,	// (0x00025b94) main_vded2_pane_g1

0x76bc,	// (0x00025ba1) main_vded2_pane_g2_ParamLimits

0x76bc,	// (0x00025ba1) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002dfc2) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002dfc2) main_vded2_pane_g

0x76ca,	// (0x00025baf) vded2_slider_pane_ParamLimits

0x76ca,	// (0x00025baf) vded2_slider_pane

0x76d7,	// (0x00025bbc) aid_size_touch_vded2_end

0x76e1,	// (0x00025bc6) aid_size_touch_vded2_playhead

0xd7eb,	// (0x0002bcd0) aid_size_touch_vded2_start

0xd7f3,	// (0x0002bcd8) vded2_slider_bg_pane

0xd7fc,	// (0x0002bce1) vded2_slider_pane_g1

0xd805,	// (0x0002bcea) vded2_slider_pane_g2

0x76e9,	// (0x00025bce) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002dfc7) vded2_slider_pane_g

0xd80d,	// (0x0002bcf2) vded2_slider_bg_pane_g1

0xd816,	// (0x0002bcfb) vded2_slider_bg_pane_g2

0xd81f,	// (0x0002bd04) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002dfce) vded2_slider_bg_pane_g

0x4d50,	// (0x00023235) aid_postcard_touch_down_pane_ParamLimits

0x4d50,	// (0x00023235) aid_postcard_touch_down_pane

0x4d60,	// (0x00023245) aid_postcard_touch_up_pane_ParamLimits

0x4d60,	// (0x00023245) aid_postcard_touch_up_pane

0x0efa,	// (0x0001f3df) main_blid2_pane

0x1379,	// (0x0001f85e) popup_blid2_search_window

0x9a83,	// (0x00027f68) blid2_gps_pane

0x9a83,	// (0x00027f68) blid2_navig_pane

0x9a83,	// (0x00027f68) blid2_search_pane

0x9a83,	// (0x00027f68) blid2_tripm_pane

0x76f2,	// (0x00025bd7) blid2_search_pane_g1_ParamLimits

0x76f2,	// (0x00025bd7) blid2_search_pane_g1

0x7702,	// (0x00025be7) blid2_search_pane_t1_ParamLimits

0x7702,	// (0x00025be7) blid2_search_pane_t1

0x7714,	// (0x00025bf9) aid_size_cell_blid2_gps_ParamLimits

0x7714,	// (0x00025bf9) aid_size_cell_blid2_gps

0x7724,	// (0x00025c09) blid2_gps_pane_g1_ParamLimits

0x7724,	// (0x00025c09) blid2_gps_pane_g1

0x7730,	// (0x00025c15) grid_blid2_satellite_pane_ParamLimits

0x7730,	// (0x00025c15) grid_blid2_satellite_pane

0x7740,	// (0x00025c25) blid2_navig_pane_g1_ParamLimits

0x7740,	// (0x00025c25) blid2_navig_pane_g1

0x774c,	// (0x00025c31) blid2_navig_pane_t1_ParamLimits

0x774c,	// (0x00025c31) blid2_navig_pane_t1

0x775e,	// (0x00025c43) blid2_navig_pane_t2_ParamLimits

0x775e,	// (0x00025c43) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002dfd5) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002dfd5) blid2_navig_pane_t

0x7770,	// (0x00025c55) blid2_navig_ring_pane_ParamLimits

0x7770,	// (0x00025c55) blid2_navig_ring_pane

0x7780,	// (0x00025c65) blid2_speed_pane_ParamLimits

0x7780,	// (0x00025c65) blid2_speed_pane

0x778c,	// (0x00025c71) blid2_tripm_pane_g1_ParamLimits

0x778c,	// (0x00025c71) blid2_tripm_pane_g1

0x779c,	// (0x00025c81) blid2_tripm_pane_g2_ParamLimits

0x779c,	// (0x00025c81) blid2_tripm_pane_g2

0x77a8,	// (0x00025c8d) blid2_tripm_pane_g3_ParamLimits

0x77a8,	// (0x00025c8d) blid2_tripm_pane_g3

0x77b4,	// (0x00025c99) blid2_tripm_pane_g4_ParamLimits

0x77b4,	// (0x00025c99) blid2_tripm_pane_g4

0x77c0,	// (0x00025ca5) blid2_tripm_pane_g5_ParamLimits

0x77c0,	// (0x00025ca5) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002dfda) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002dfda) blid2_tripm_pane_g

0x77dc,	// (0x00025cc1) blid2_tripm_pane_t1_ParamLimits

0x77dc,	// (0x00025cc1) blid2_tripm_pane_t1

0x77f0,	// (0x00025cd5) blid2_tripm_pane_t2_ParamLimits

0x77f0,	// (0x00025cd5) blid2_tripm_pane_t2

0x7802,	// (0x00025ce7) blid2_tripm_pane_t3_ParamLimits

0x7802,	// (0x00025ce7) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002dfe7) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002dfe7) blid2_tripm_pane_t

0x7834,	// (0x00025d19) cell_blid2_satellite_pane_ParamLimits

0x7834,	// (0x00025d19) cell_blid2_satellite_pane

0x784e,	// (0x00025d33) cell_blid2_satellite_pane_g1

0xd828,	// (0x0002bd0d) cell_blid2_satellite_pane_t1

0xc69a,	// (0x0002ab7f) blid2_speed_pane_g1

0xd836,	// (0x0002bd1b) blid2_speed_pane_t1

0xd844,	// (0x0002bd29) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002dff0) blid2_speed_pane_t

0xc69a,	// (0x0002ab7f) blid2_navig_ring_pane_g1

0x7857,	// (0x00025d3c) blid2_navig_ring_pane_g2

0x785f,	// (0x00025d44) blid2_navig_ring_pane_g3

0x7867,	// (0x00025d4c) blid2_navig_ring_pane_g4

0x786f,	// (0x00025d54) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002dff5) blid2_navig_ring_pane_g

0x9a83,	// (0x00027f68) bg_popup_window_pane_cp011

0xd852,	// (0x0002bd37) popup_blid2_search_window_g1

0xd85a,	// (0x0002bd3f) popup_blid2_search_window_t1

0xd868,	// (0x0002bd4d) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002e000) popup_blid2_search_window_t

0xa503,	// (0x000289e8) main_browser_pane_g1

0xa1df,	// (0x000286c4) main_browser_pane_ParamLimits

0x1350,	// (0x0001f835) bg_button_pane_cp011_ParamLimits

0x21e7,	// (0x000206cc) cell_vitu2_function_pane_g1_ParamLimits

0xc290,	// (0x0002a775) bg_popup_sub_pane_cp22_ParamLimits

0x71ed,	// (0x000256d2) input_focus_pane_cp08_ParamLimits

0x7204,	// (0x000256e9) popup_vitu2_query_button_pane_ParamLimits

0x7204,	// (0x000256e9) popup_vitu2_query_button_pane

0x7215,	// (0x000256fa) popup_vitu2_query_input_button_pane

0xd409,	// (0x0002b8ee) popup_vitu2_query_window_g1_ParamLimits

0x721f,	// (0x00025704) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002df01) popup_vitu2_query_window_g_ParamLimits

0x9a83,	// (0x00027f68) bg_button_pane_cp026

0x7877,	// (0x00025d5c) popup_vitu2_query_input_button_pane_g1

0x9a83,	// (0x00027f68) bg_button_pane_cp025

0xd876,	// (0x0002bd5b) popup_vitu2_query_button_pane_t1

0x5a88,	// (0x00023f6d) main_mp3_pane_t6

0x5a98,	// (0x00023f7d) popup_slider_window_cp01

0x1dad,	// (0x00020292) cam4_battery_pane

0x1e8d,	// (0x00020372) cam4_battery_pane_cp02

0x237f,	// (0x00020864) cam4_battery_pane_cp01

0x237f,	// (0x00020864) cam4_battery_pane_cp03

0xd7a4,	// (0x0002bc89) cam4_battery_pane_g1

0xc69a,	// (0x0002ab7f) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002e005) cam4_battery_pane_g

0xc564,	// (0x0002aa49) popup_blid_sat_info2_window_t11

0xac8c,	// (0x00029171) aid_size_touch_mv_arrow_left_ParamLimits

0xacb7,	// (0x0002919c) aid_size_touch_mv_arrow_right_ParamLimits

0xad15,	// (0x000291fa) navi_pane_g1_ParamLimits

0xad21,	// (0x00029206) navi_pane_g2_ParamLimits

0xad4f,	// (0x00029234) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d8ca) navi_pane_g_ParamLimits

0x47ad,	// (0x00022c92) navi_pane_mv_t1_ParamLimits

0x64e8,	// (0x000249cd) grid_imed_effect_pane_ParamLimits

0x31b4,	// (0x00021699) aid_placing_vt_slider_lsc

0xa452,	// (0x00028937) aid_placing_vt_slider_prt

0xa32c,	// (0x00028811) bg_tb_trans_pane_cp01_ParamLimits

0xc81a,	// (0x0002acff) popup_image_details_window_g1_ParamLimits

0xc82d,	// (0x0002ad12) popup_image_details_window_g2_ParamLimits

0xc842,	// (0x0002ad27) popup_image_details_window_g3_ParamLimits

0xc842,	// (0x0002ad27) popup_image_details_window_g3

0xf718,	// (0x0002dbfd) popup_image_details_window_g_ParamLimits

0xc856,	// (0x0002ad3b) popup_image_details_window_t1_ParamLimits

0xc868,	// (0x0002ad4d) popup_image_details_window_t2_ParamLimits

0xc881,	// (0x0002ad66) popup_image_details_window_t3_ParamLimits

0xc895,	// (0x0002ad7a) popup_image_details_window_t4_ParamLimits

0xc8b0,	// (0x0002ad95) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002dc04) popup_image_details_window_t_ParamLimits

0x7578,	// (0x00025a5d) cl_header_name_pane_ParamLimits

0x7578,	// (0x00025a5d) cl_header_name_pane

0x787f,	// (0x00025d64) cl_header_name_pane_t1_ParamLimits

0x787f,	// (0x00025d64) cl_header_name_pane_t1

0x7896,	// (0x00025d7b) cl_header_name_pane_t2_ParamLimits

0x7896,	// (0x00025d7b) cl_header_name_pane_t2

0x78c0,	// (0x00025da5) cl_header_name_pane_t3_ParamLimits

0x78c0,	// (0x00025da5) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002e00a) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002e00a) cl_header_name_pane_t

0xadde,	// (0x000292c3) navi_pane_mv_g2_ParamLimits

0xd155,	// (0x0002b63a) field_vitu2_entry_pane_g1_ParamLimits

0xd161,	// (0x0002b646) field_vitu2_entry_pane_g2_ParamLimits

0xd16d,	// (0x0002b652) field_vitu2_entry_pane_g3_ParamLimits

0xd16d,	// (0x0002b652) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002de00) field_vitu2_entry_pane_g_ParamLimits

0x20b3,	// (0x00020598) cell_vitu2_itu_pane_g1_ParamLimits

0x20c5,	// (0x000205aa) cell_vitu2_itu_pane_g2_ParamLimits

0x20c5,	// (0x000205aa) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002de0c) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002de0c) cell_vitu2_itu_pane_g

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp05_ParamLimits

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp05

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp03

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp04

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp10_ParamLimits

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp10

0x751a,	// (0x000259ff) bg_vkb2_func_pane_cp08

0x7500,	// (0x000259e5) bg_vkb2_func_pane_cp06

0x750e,	// (0x000259f3) bg_vkb2_func_pane_cp07

0xd772,	// (0x0002bc57) bg_vkb2_func_pane_cp11_ParamLimits

0xd772,	// (0x0002bc57) bg_vkb2_func_pane_cp11

0xd787,	// (0x0002bc6c) bg_vkb2_func_pane_cp12_ParamLimits

0xd787,	// (0x0002bc6c) bg_vkb2_func_pane_cp12

0x9a83,	// (0x00027f68) bg_vkb2_func_pane_cp09

0xd1aa,	// (0x0002b68f) bg_vkb2_func_pane_g1

0xa614,	// (0x00028af9) bg_vkb2_func_pane_g2

0xd1b2,	// (0x0002b697) bg_vkb2_func_pane_g3

0xd1ba,	// (0x0002b69f) bg_vkb2_func_pane_g4

0xd3ce,	// (0x0002b8b3) bg_vkb2_func_pane_g5

0xd1d2,	// (0x0002b6b7) bg_vkb2_func_pane_g6

0xd1da,	// (0x0002b6bf) bg_vkb2_func_pane_g7

0xd1ca,	// (0x0002b6af) bg_vkb2_func_pane_g8

0xa5f4,	// (0x00028ad9) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002e011) bg_vkb2_func_pane_g

0x77ce,	// (0x00025cb3) blid2_tripm_pane_g6_ParamLimits

0x77ce,	// (0x00025cb3) blid2_tripm_pane_g6

0xcfeb,	// (0x0002b4d0) mp4_progress_pane_g1

0x7828,	// (0x00025d0d) blid2_tripm_values_pane_ParamLimits

0x7828,	// (0x00025d0d) blid2_tripm_values_pane

0x78e5,	// (0x00025dca) blid2_tripm_values_pane_t1

0x78f3,	// (0x00025dd8) blid2_tripm_values_pane_t2

0x7901,	// (0x00025de6) blid2_tripm_values_pane_t3

0x790f,	// (0x00025df4) blid2_tripm_values_pane_t4

0x791d,	// (0x00025e02) blid2_tripm_values_pane_t5

0x792b,	// (0x00025e10) blid2_tripm_values_pane_t6

0x7939,	// (0x00025e1e) blid2_tripm_values_pane_t7

0x7947,	// (0x00025e2c) blid2_tripm_values_pane_t8

0x7955,	// (0x00025e3a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002e024) blid2_tripm_values_pane_t

0x31f4,	// (0x000216d9) call_video_pane_t1_ParamLimits

0x3215,	// (0x000216fa) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d753) call_video_pane_t_ParamLimits

0x4ccd,	// (0x000231b2) msg_header_pane_g1_ParamLimits

0xafb8,	// (0x0002949d) msg_header_pane_g2_ParamLimits

0xafb8,	// (0x0002949d) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d96d) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d96d) msg_header_pane_g

0xa1df,	// (0x000286c4) main_clock2_pane_ParamLimits

0x62f1,	// (0x000247d6) grid_clock2_toolbar_pane_ParamLimits

0x62f1,	// (0x000247d6) grid_clock2_toolbar_pane

0x62f1,	// (0x000247d6) listscroll_clock2_pane_ParamLimits

0x62f1,	// (0x000247d6) listscroll_clock2_pane

0x639b,	// (0x00024880) main_clock2_pane_t3_ParamLimits

0x639b,	// (0x00024880) main_clock2_pane_t3

0x63ad,	// (0x00024892) main_clock2_pane_t4_ParamLimits

0x63ad,	// (0x00024892) main_clock2_pane_t4

0xd884,	// (0x0002bd69) cell_clock2_toolbar_pane

0xd88c,	// (0x0002bd71) cell_clock2_toolbar_pane_cp01

0xd88c,	// (0x0002bd71) cell_clock2_toolbar_pane_cp02

0xd894,	// (0x0002bd79) cell_clock2_toolbar_pane_cp03

0xd89c,	// (0x0002bd81) list_clock2_pane

0xac02,	// (0x000290e7) scroll_pane_cp10

0xd8a4,	// (0x0002bd89) list_single_clock2_pane_ParamLimits

0xd8a4,	// (0x0002bd89) list_single_clock2_pane

0xa3bb,	// (0x000288a0) list_highlight_pane_cp08

0xd8b1,	// (0x0002bd96) list_single_clock2_pane_t1

0xd8bf,	// (0x0002bda4) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002e037) list_single_clock2_pane_t

0x9a83,	// (0x00027f68) bg_button_pane_cp10

0xd8cd,	// (0x0002bdb2) cell_clock2_toolbar_pane_g1

0x12eb,	// (0x0001f7d0) aid_main_viewer_pane_g1_ParamLimits

0x12eb,	// (0x0001f7d0) aid_main_viewer_pane_g1

0x12f7,	// (0x0001f7dc) aid_main_viewer_pane_g2_ParamLimits

0x12f7,	// (0x0001f7dc) aid_main_viewer_pane_g2

0x4d0c,	// (0x000231f1) aid_main_viewer_pane_g3_ParamLimits

0x4d0c,	// (0x000231f1) aid_main_viewer_pane_g3

0x4d1d,	// (0x00023202) aid_main_viewer_pane_g4_ParamLimits

0x4d1d,	// (0x00023202) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d97e) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d97e) aid_main_viewer_pane_g

0x1343,	// (0x0001f828) main_calc_pane_ParamLimits

0x135e,	// (0x0001f843) main_dialer2_pane_ParamLimits

0x0efa,	// (0x0001f3df) main_cam6_pane

0x0efa,	// (0x0001f3df) main_vid6_pane

0x62fd,	// (0x000247e2) listscroll_gen_pane_cp06_ParamLimits

0x62fd,	// (0x000247e2) listscroll_gen_pane_cp06

0x63bf,	// (0x000248a4) main_clock2_pane_t5_ParamLimits

0x63bf,	// (0x000248a4) main_clock2_pane_t5

0x640a,	// (0x000248ef) aid_call2_pane_cp10_ParamLimits

0x641c,	// (0x00024901) aid_call_pane_cp10_ParamLimits

0xac80,	// (0x00029165) popup_clock_analogue_window_cp10_g1_ParamLimits

0xac80,	// (0x00029165) popup_clock_analogue_window_cp10_g2_ParamLimits

0x642e,	// (0x00024913) popup_clock_analogue_window_cp10_g3_ParamLimits

0x642e,	// (0x00024913) popup_clock_analogue_window_cp10_g4_ParamLimits

0xac80,	// (0x00029165) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002dcb9) popup_clock_analogue_window_cp10_g_ParamLimits

0x6440,	// (0x00024925) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6870,	// (0x00024d55) cell_dialer2_keypad_pane_g2_ParamLimits

0x6870,	// (0x00024d55) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002dd9f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002dd9f) cell_dialer2_keypad_pane_g

0x688c,	// (0x00024d71) cell_dialer2_keypad_pane_t1

0x6ccd,	// (0x000251b2) main_cset_text2_pane_ParamLimits

0x6ccd,	// (0x000251b2) main_cset_text2_pane

0xd61c,	// (0x0002bb01) area_vitu2_query_pane_g1_ParamLimits

0x749f,	// (0x00025984) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002df54) area_vitu2_query_pane_g_ParamLimits

0xd6a0,	// (0x0002bb85) area_vitu2_query_pane_t7_ParamLimits

0xd6a0,	// (0x0002bb85) area_vitu2_query_pane_t7

0x7500,	// (0x000259e5) bg_button_pane_cp018_ParamLimits

0x750e,	// (0x000259f3) bg_button_pane_cp021_ParamLimits

0x751a,	// (0x000259ff) bg_button_pane_cp022_ParamLimits

0x751a,	// (0x000259ff) bg_vkb2_func_pane_cp08_ParamLimits

0x7500,	// (0x000259e5) bg_vkb2_func_pane_cp06_ParamLimits

0x750e,	// (0x000259f3) bg_vkb2_func_pane_cp07_ParamLimits

0x752b,	// (0x00025a10) input_focus_pane_cp09_ParamLimits

0x2429,	// (0x0002090e) cam6_autofocus_pane_ParamLimits

0x2429,	// (0x0002090e) cam6_autofocus_pane

0x244b,	// (0x00020930) cam6_image_uncrop_pane_ParamLimits

0x244b,	// (0x00020930) cam6_image_uncrop_pane

0x2478,	// (0x0002095d) cam6_indi_pane_ParamLimits

0x2478,	// (0x0002095d) cam6_indi_pane

0x2492,	// (0x00020977) cam6_mode_pane_ParamLimits

0x2492,	// (0x00020977) cam6_mode_pane

0x24a6,	// (0x0002098b) cam6_timer_pane_ParamLimits

0x24a6,	// (0x0002098b) cam6_timer_pane

0x24b2,	// (0x00020997) cam6_zoom_pane_ParamLimits

0x24b2,	// (0x00020997) cam6_zoom_pane

0x7963,	// (0x00025e48) cam6_mode_pane_g1_ParamLimits

0x7963,	// (0x00025e48) cam6_mode_pane_g1

0x796f,	// (0x00025e54) cam6_mode_pane_g2_ParamLimits

0x796f,	// (0x00025e54) cam6_mode_pane_g2

0x797b,	// (0x00025e60) cam6_mode_pane_g3_ParamLimits

0x797b,	// (0x00025e60) cam6_mode_pane_g3

0x7987,	// (0x00025e6c) cam6_mode_pane_g4_ParamLimits

0x7987,	// (0x00025e6c) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002e03c) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002e03c) cam6_mode_pane_g

0xd031,	// (0x0002b516) bg_tb_trans_pane_cp08_ParamLimits

0xd031,	// (0x0002b516) bg_tb_trans_pane_cp08

0xd8d5,	// (0x0002bdba) cam6_battery_pane_ParamLimits

0xd8d5,	// (0x0002bdba) cam6_battery_pane

0xd8eb,	// (0x0002bdd0) cam6_indi_pane_g1_ParamLimits

0xd8eb,	// (0x0002bdd0) cam6_indi_pane_g1

0xd8fd,	// (0x0002bde2) cam6_indi_pane_g2_ParamLimits

0xd8fd,	// (0x0002bde2) cam6_indi_pane_g2

0xd90f,	// (0x0002bdf4) cam6_indi_pane_g3_ParamLimits

0xd90f,	// (0x0002bdf4) cam6_indi_pane_g3

0x0002,

0x0866,	// (0x0001ed4b) cam6_indi_pane_g_ParamLimits

0x0866,	// (0x0001ed4b) cam6_indi_pane_g

0xd921,	// (0x0002be06) cam6_indi_pane_t1_ParamLimits

0xd921,	// (0x0002be06) cam6_indi_pane_t1

0x69cb,	// (0x00024eb0) cam6_autofocus_pane_g1

0x69c3,	// (0x00024ea8) cam6_autofocus_pane_g2

0x69db,	// (0x00024ec0) cam6_autofocus_pane_g3

0x69d3,	// (0x00024eb8) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002e045) cam6_autofocus_pane_g

0xd947,	// (0x0002be2c) cam6_timer_pane_g1

0xd94f,	// (0x0002be34) cam6_timer_pane_t1

0xd95d,	// (0x0002be42) cam6_zoom_cont_pane

0xd965,	// (0x0002be4a) cam6_zoom_pane_g1

0xd96d,	// (0x0002be52) cam6_zoom_pane_g2

0x7993,	// (0x00025e78) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002e04e) cam6_zoom_pane_g

0xc69a,	// (0x0002ab7f) cam6_battery_pane_g1

0xc69a,	// (0x0002ab7f) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002dbc1) cam6_battery_pane_g

0xd975,	// (0x0002be5a) cam6_zoom_cont_pane_g1

0xd97e,	// (0x0002be63) cam6_zoom_cont_pane_g2

0xd987,	// (0x0002be6c) cam6_zoom_cont_pane_g3

0x0002,

0x087d,	// (0x0001ed62) cam6_zoom_cont_pane_g

0x79b0,	// (0x00025e95) cam6_mode_pane_cp_ParamLimits

0x79b0,	// (0x00025e95) cam6_mode_pane_cp

0x79c4,	// (0x00025ea9) cam6_zoom_pane_cp_ParamLimits

0x79c4,	// (0x00025ea9) cam6_zoom_pane_cp

0x79dc,	// (0x00025ec1) vid6_image_uncrop_cif_pane_ParamLimits

0x79dc,	// (0x00025ec1) vid6_image_uncrop_cif_pane

0x7a08,	// (0x00025eed) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a08,	// (0x00025eed) vid6_image_uncrop_nhd_pane

0x7a25,	// (0x00025f0a) vid6_image_uncrop_vga_pane_ParamLimits

0x7a25,	// (0x00025f0a) vid6_image_uncrop_vga_pane

0x7a44,	// (0x00025f29) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a44,	// (0x00025f29) vid6_image_uncrop_wvga_pane

0x7a61,	// (0x00025f46) vid6_indi_pane_ParamLimits

0x7a61,	// (0x00025f46) vid6_indi_pane

0xd031,	// (0x0002b516) bg_tb_trans_pane_cp09_ParamLimits

0xd031,	// (0x0002b516) bg_tb_trans_pane_cp09

0xd99f,	// (0x0002be84) cam6_battery_pane_cp_ParamLimits

0xd99f,	// (0x0002be84) cam6_battery_pane_cp

0xd9ab,	// (0x0002be90) vid6_indi_pane_g1_ParamLimits

0xd9ab,	// (0x0002be90) vid6_indi_pane_g1

0xd9bd,	// (0x0002bea2) vid6_indi_pane_g2_ParamLimits

0xd9bd,	// (0x0002bea2) vid6_indi_pane_g2

0xd9cf,	// (0x0002beb4) vid6_indi_pane_g3_ParamLimits

0xd9cf,	// (0x0002beb4) vid6_indi_pane_g3

0xd9e4,	// (0x0002bec9) vid6_indi_pane_g4_ParamLimits

0xd9e4,	// (0x0002bec9) vid6_indi_pane_g4

0xd9f9,	// (0x0002bede) vid6_indi_pane_g5_ParamLimits

0xd9f9,	// (0x0002bede) vid6_indi_pane_g5

0x0004,

0x0884,	// (0x0001ed69) vid6_indi_pane_g_ParamLimits

0x0884,	// (0x0001ed69) vid6_indi_pane_g

0xda13,	// (0x0002bef8) vid6_indi_pane_t1_ParamLimits

0xda13,	// (0x0002bef8) vid6_indi_pane_t1

0xda29,	// (0x0002bf0e) vid6_indi_pane_t2_ParamLimits

0xda29,	// (0x0002bf0e) vid6_indi_pane_t2

0xda51,	// (0x0002bf36) vid6_indi_pane_t3_ParamLimits

0xda51,	// (0x0002bf36) vid6_indi_pane_t3

0xda79,	// (0x0002bf5e) vid6_indi_pane_t4_ParamLimits

0xda79,	// (0x0002bf5e) vid6_indi_pane_t4

0x0003,

0x088f,	// (0x0001ed74) vid6_indi_pane_t_ParamLimits

0x088f,	// (0x0001ed74) vid6_indi_pane_t

0xda9d,	// (0x0002bf82) wait_bar_pane_cp08

0x7a84,	// (0x00025f69) main_cset_text2_pane_t1_ParamLimits

0x7a84,	// (0x00025f69) main_cset_text2_pane_t1

0x799b,	// (0x00025e80) listscroll_gen_pane_cp06_t1_ParamLimits

0x799b,	// (0x00025e80) listscroll_gen_pane_cp06_t1

0x0efa,	// (0x0001f3df) main_cam6_set_pane

0x1d9f,	// (0x00020284) bg_tb_trans_pane_cp06_ParamLimits

0x1db5,	// (0x0002029a) cam4_indicators_pane_g1_ParamLimits

0x1dc6,	// (0x000202ab) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002dddc) cam4_indicators_pane_g_ParamLimits

0x1de4,	// (0x000202c9) cam4_indicators_pane_t1_ParamLimits

0x1350,	// (0x0001f835) bg_tb_trans_pane_cp07_ParamLimits

0x1e95,	// (0x0002037a) vid4_indicators_pane_g1_ParamLimits

0x1ea9,	// (0x0002038e) vid4_indicators_pane_g2_ParamLimits

0x1ebd,	// (0x000203a2) vid4_indicators_pane_g3_ParamLimits

0x1ece,	// (0x000203b3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002ddee) vid4_indicators_pane_g_ParamLimits

0x1eea,	// (0x000203cf) vid4_indicators_pane_t1_ParamLimits

0x2387,	// (0x0002086c) vid4_progress_pane_g1_ParamLimits

0x2397,	// (0x0002087c) vid4_progress_pane_g2_ParamLimits

0x23a7,	// (0x0002088c) vid4_progress_pane_g3_ParamLimits

0x23b9,	// (0x0002089e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002df9f) vid4_progress_pane_g_ParamLimits

0x23d7,	// (0x000208bc) vid4_progress_pane_t1_ParamLimits

0x23ed,	// (0x000208d2) vid4_progress_pane_t2_ParamLimits

0x2402,	// (0x000208e7) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002dfaa) vid4_progress_pane_t_ParamLimits

0x2418,	// (0x000208fd) wait_bar_pane_cp07_ParamLimits

0x7abe,	// (0x00025fa3) main_cam6_set_pane_g2_ParamLimits

0x7abe,	// (0x00025fa3) main_cam6_set_pane_g2

0x7aca,	// (0x00025faf) main_cset6_listscroll_pane_ParamLimits

0x7aca,	// (0x00025faf) main_cset6_listscroll_pane

0x7af5,	// (0x00025fda) main_cset6_slider_pane_ParamLimits

0x7af5,	// (0x00025fda) main_cset6_slider_pane

0x7b01,	// (0x00025fe6) main_cset6_text2_pane_ParamLimits

0x7b01,	// (0x00025fe6) main_cset6_text2_pane

0xdaac,	// (0x0002bf91) main_cset6_text_pane

0xdab4,	// (0x0002bf99) main_cset_list_pane_copy1_ParamLimits

0xdab4,	// (0x0002bf99) main_cset_list_pane_copy1

0xdac4,	// (0x0002bfa9) scroll_pane_cp028_copy1

0x7b14,	// (0x00025ff9) cset_list_set_pane_copy1

0x7b2d,	// (0x00026012) aid_position_infowindow_above_copy1

0x7b35,	// (0x0002601a) aid_position_infowindow_below_copy1

0x7b3d,	// (0x00026022) cset_list_set_pane_g1_copy1

0x6fce,	// (0x000254b3) cset_list_set_pane_g3_copy1_ParamLimits

0x6fce,	// (0x000254b3) cset_list_set_pane_g3_copy1

0x6fdd,	// (0x000254c2) cset_list_set_pane_t1_copy1_ParamLimits

0x6fdd,	// (0x000254c2) cset_list_set_pane_t1_copy1

0xa32c,	// (0x00028811) list_highlight_pane_cp021_copy1_ParamLimits

0xa32c,	// (0x00028811) list_highlight_pane_cp021_copy1

0xdacd,	// (0x0002bfb2) cset6_slider_pane_ParamLimits

0xdacd,	// (0x0002bfb2) cset6_slider_pane

0xdaf9,	// (0x0002bfde) main_cset6_slider_pane_g1_ParamLimits

0xdaf9,	// (0x0002bfde) main_cset6_slider_pane_g1

0x7b45,	// (0x0002602a) main_cset6_slider_pane_g2_ParamLimits

0x7b45,	// (0x0002602a) main_cset6_slider_pane_g2

0xdb21,	// (0x0002c006) main_cset6_slider_pane_g3_ParamLimits

0xdb21,	// (0x0002c006) main_cset6_slider_pane_g3

0x7b6d,	// (0x00026052) main_cset6_slider_pane_g4_ParamLimits

0x7b6d,	// (0x00026052) main_cset6_slider_pane_g4

0x7b79,	// (0x0002605e) main_cset6_slider_pane_g5_ParamLimits

0x7b79,	// (0x0002605e) main_cset6_slider_pane_g5

0xd2d9,	// (0x0002b7be) main_cset6_slider_pane_g7_ParamLimits

0xd2d9,	// (0x0002b7be) main_cset6_slider_pane_g7

0xd2e5,	// (0x0002b7ca) main_cset6_slider_pane_g8_ParamLimits

0xd2e5,	// (0x0002b7ca) main_cset6_slider_pane_g8

0x7b87,	// (0x0002606c) main_cset6_slider_pane_g9_ParamLimits

0x7b87,	// (0x0002606c) main_cset6_slider_pane_g9

0x7b93,	// (0x00026078) main_cset6_slider_pane_g10_ParamLimits

0x7b93,	// (0x00026078) main_cset6_slider_pane_g10

0x7b9f,	// (0x00026084) main_cset6_slider_pane_g11_ParamLimits

0x7b9f,	// (0x00026084) main_cset6_slider_pane_g11

0x7bab,	// (0x00026090) main_cset6_slider_pane_g12_ParamLimits

0x7bab,	// (0x00026090) main_cset6_slider_pane_g12

0x7bb7,	// (0x0002609c) main_cset6_slider_pane_g13_ParamLimits

0x7bb7,	// (0x0002609c) main_cset6_slider_pane_g13

0x7bc3,	// (0x000260a8) main_cset6_slider_pane_g14_ParamLimits

0x7bc3,	// (0x000260a8) main_cset6_slider_pane_g14

0x7bcf,	// (0x000260b4) main_cset6_slider_pane_g15_ParamLimits

0x7bcf,	// (0x000260b4) main_cset6_slider_pane_g15

0x7be7,	// (0x000260cc) main_cset6_slider_pane_g16_ParamLimits

0x7be7,	// (0x000260cc) main_cset6_slider_pane_g16

0x7bf5,	// (0x000260da) main_cset6_slider_pane_g17_ParamLimits

0x7bf5,	// (0x000260da) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002e055) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002e055) main_cset6_slider_pane_g

0xdb2d,	// (0x0002c012) main_cset6_slider_pane_t1_ParamLimits

0xdb2d,	// (0x0002c012) main_cset6_slider_pane_t1

0x7c1b,	// (0x00026100) main_cset6_slider_pane_t2_ParamLimits

0x7c1b,	// (0x00026100) main_cset6_slider_pane_t2

0x7c46,	// (0x0002612b) main_cset6_slider_pane_t3_ParamLimits

0x7c46,	// (0x0002612b) main_cset6_slider_pane_t3

0x7c71,	// (0x00026156) main_cset6_slider_pane_t4_ParamLimits

0x7c71,	// (0x00026156) main_cset6_slider_pane_t4

0x7c9c,	// (0x00026181) main_cset6_slider_pane_t5_ParamLimits

0x7c9c,	// (0x00026181) main_cset6_slider_pane_t5

0xdb6e,	// (0x0002c053) main_cset6_slider_pane_t7_ParamLimits

0xdb6e,	// (0x0002c053) main_cset6_slider_pane_t7

0x7cc9,	// (0x000261ae) main_cset6_slider_pane_t8_ParamLimits

0x7cc9,	// (0x000261ae) main_cset6_slider_pane_t8

0x7ced,	// (0x000261d2) main_cset6_slider_pane_t9_ParamLimits

0x7ced,	// (0x000261d2) main_cset6_slider_pane_t9

0x7d11,	// (0x000261f6) main_cset6_slider_pane_t10_ParamLimits

0x7d11,	// (0x000261f6) main_cset6_slider_pane_t10

0x7d35,	// (0x0002621a) main_cset6_slider_pane_t11_ParamLimits

0x7d35,	// (0x0002621a) main_cset6_slider_pane_t11

0xdba4,	// (0x0002c089) main_cset6_slider_pane_t14_ParamLimits

0xdba4,	// (0x0002c089) main_cset6_slider_pane_t14

0xdbdd,	// (0x0002c0c2) main_cset6_slider_pane_t15_ParamLimits

0xdbdd,	// (0x0002c0c2) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002e07a) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002e07a) main_cset6_slider_pane_t

0xd521,	// (0x0002ba06) cset_slider_pane_g1_copy1

0xd52a,	// (0x0002ba0f) cset_slider_pane_g2_copy1

0xd533,	// (0x0002ba18) cset_slider_pane_g3_copy1

0x9a83,	// (0x00027f68) bg_popup_sub_pane_cp011_copy1

0xdc16,	// (0x0002c0fb) main_cset_text_pane_g1_copy1

0xd41d,	// (0x0002b902) main_cset_text_pane_t1_copy1

0xd42b,	// (0x0002b910) main_cset_text_pane_t2_copy1

0xd439,	// (0x0002b91e) main_cset_text_pane_t3_copy1

0xd447,	// (0x0002b92c) main_cset_text_pane_t4_copy1

0xd455,	// (0x0002b93a) main_cset_text_pane_t5_copy1

0xdc1e,	// (0x0002c103) main_cset_text_pane_t6_copy1

0xdc2c,	// (0x0002c111) main_cset_text_pane_t7_copy1

0x7e2a,	// (0x0002630f) main_cset_text2_pane_t1_copy1

0x1350,	// (0x0001f835) main_ncimui_pane

0x13af,	// (0x0001f894) popup_query_ncimui_window_ParamLimits

0x13af,	// (0x0001f894) popup_query_ncimui_window

0xc99b,	// (0x0002ae80) field_cale_ev2_pane_g4_ParamLimits

0xc99b,	// (0x0002ae80) field_cale_ev2_pane_g4

0x6810,	// (0x00024cf5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6810,	// (0x00024cf5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002dd7a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002dd7a) cell_video_dialer_keypad_pane_g

0x6828,	// (0x00024d0d) cell_video_dialer_keypad_pane_t1

0x9a83,	// (0x00027f68) bg_popup_window_pane_cp012

0xaaa9,	// (0x00028f8e) heading_pane_cp06

0xdc58,	// (0x0002c13d) ncim_query_content_pane

0x9a83,	// (0x00027f68) bg_popup_heading_pane_cp01

0xdc60,	// (0x0002c145) ncim_heading_pane_t1

0xdc6e,	// (0x0002c153) ncim_indicator_popup_pane

0xdc80,	// (0x0002c165) ncim_query_button_pane

0xdc94,	// (0x0002c179) ncim_query_content_pane_t1

0xdca6,	// (0x0002c18b) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002e0be) ncim_query_content_pane_t

0xdce0,	// (0x0002c1c5) ncim_query_list_pane

0xdcf2,	// (0x0002c1d7) ncim_query_popup_pane

0xdc6e,	// (0x0002c153) ncim_indicator_popup_pane_ParamLimits

0x7f84,	// (0x00026469) ncim_query_content_pane_g1_ParamLimits

0x7f84,	// (0x00026469) ncim_query_content_pane_g1

0xdc94,	// (0x0002c179) ncim_query_content_pane_t1_ParamLimits

0xdca6,	// (0x0002c18b) ncim_query_content_pane_t2_ParamLimits

0x7f90,	// (0x00026475) ncim_query_content_pane_t3_ParamLimits

0x7f90,	// (0x00026475) ncim_query_content_pane_t3

0x7fad,	// (0x00026492) ncim_query_content_pane_t4_ParamLimits

0x7fad,	// (0x00026492) ncim_query_content_pane_t4

0x7fca,	// (0x000264af) ncim_query_content_pane_t5_ParamLimits

0x7fca,	// (0x000264af) ncim_query_content_pane_t5

0xdcb8,	// (0x0002c19d) ncim_query_content_pane_t6_ParamLimits

0xdcb8,	// (0x0002c19d) ncim_query_content_pane_t6

0xfbd9,	// (0x0002e0be) ncim_query_content_pane_t_ParamLimits

0xdce0,	// (0x0002c1c5) ncim_query_list_pane_ParamLimits

0xdcf2,	// (0x0002c1d7) ncim_query_popup_pane_ParamLimits

0xdd06,	// (0x0002c1eb) wait_bar_pane_cp04

0x9a83,	// (0x00027f68) input_focus_pane_cp011

0xdd0e,	// (0x0002c1f3) ncim_query_popup_pane_t1

0xdd1c,	// (0x0002c201) ncim_list_query_list_pane_ParamLimits

0xdd1c,	// (0x0002c201) ncim_list_query_list_pane

0x9a83,	// (0x00027f68) bg_button_pane_cp027

0xdd2f,	// (0x0002c214) ncim_query_button_pane_g1

0x9a83,	// (0x00027f68) list_highlight_pane_cp012

0xdd39,	// (0x0002c21e) ncim_list_query_list_pane_g1

0xdd41,	// (0x0002c226) ncim_list_query_list_pane_t1

0x1dd5,	// (0x000202ba) cam4_indicators_pane_g3_ParamLimits

0x1dd5,	// (0x000202ba) cam4_indicators_pane_g3

0x1eda,	// (0x000203bf) vid4_indicators_pane_g5_ParamLimits

0x1eda,	// (0x000203bf) vid4_indicators_pane_g5

0x23c8,	// (0x000208ad) vid4_progress_pane_g5_ParamLimits

0x23c8,	// (0x000208ad) vid4_progress_pane_g5

0x7e70,	// (0x00026355) main_ncimui_pane_g1

0x7ed8,	// (0x000263bd) ncimui_group_query_pane_ParamLimits

0x7ed8,	// (0x000263bd) ncimui_group_query_pane

0x7f20,	// (0x00026405) ncimui_list_pane_ParamLimits

0x7f20,	// (0x00026405) ncimui_list_pane

0x7f47,	// (0x0002642c) ncimui_text_pane_ParamLimits

0x7f47,	// (0x0002642c) ncimui_text_pane

0x7fe7,	// (0x000264cc) ncimui_text_pane_t1_ParamLimits

0x7fe7,	// (0x000264cc) ncimui_text_pane_t1

0xdd4f,	// (0x0002c234) ncimui_list_single_graphic_pane_ParamLimits

0xdd4f,	// (0x0002c234) ncimui_list_single_graphic_pane

0x8006,	// (0x000264eb) ncimui_query_pane_ParamLimits

0x8006,	// (0x000264eb) ncimui_query_pane

0x9a83,	// (0x00027f68) list_highlight_pane_cp013

0xdd5f,	// (0x0002c244) ncim_list_query_list_pane_t1_copy1

0xdd39,	// (0x0002c21e) ncim_list_single_graphic_pane_g1

0xdd6d,	// (0x0002c252) ncim_query_button_pane_cp01

0xdd79,	// (0x0002c25e) ncim_query_entry_pane_ParamLimits

0xdd79,	// (0x0002c25e) ncim_query_entry_pane

0xdd8c,	// (0x0002c271) ncimui_query_pane_g1

0xdd98,	// (0x0002c27d) ncimui_query_pane_t1_ParamLimits

0xdd98,	// (0x0002c27d) ncimui_query_pane_t1

0xa32c,	// (0x00028811) input_focus_pane_cp012

0xddb1,	// (0x0002c296) ncim_query_entry_pane_t1

0xa1df,	// (0x000286c4) main_im_pane_ParamLimits

0x1350,	// (0x0001f835) main_mobtv_pane_ParamLimits

0x1350,	// (0x0001f835) main_mobtv_pane

0x7c03,	// (0x000260e8) main_cset6_slider_pane_g18_ParamLimits

0x7c03,	// (0x000260e8) main_cset6_slider_pane_g18

0x7c0f,	// (0x000260f4) main_cset6_slider_pane_g19_ParamLimits

0x7c0f,	// (0x000260f4) main_cset6_slider_pane_g19

0xd16d,	// (0x0002b652) bg_main_mobtv_pane_ParamLimits

0xd16d,	// (0x0002b652) bg_main_mobtv_pane

0x8019,	// (0x000264fe) main_mobtv_info_pane

0x8024,	// (0x00026509) main_mobtv_loading_pane_ParamLimits

0x8024,	// (0x00026509) main_mobtv_loading_pane

0xddc3,	// (0x0002c2a8) main_mobtv_pg_channel_list_pane

0xddcd,	// (0x0002c2b2) main_mobtv_pg_hdr_pane

0x8031,	// (0x00026516) main_mobtv_programe_curr_pane_ParamLimits

0x8031,	// (0x00026516) main_mobtv_programe_curr_pane

0x803e,	// (0x00026523) main_mobtv_programe_next_pane_ParamLimits

0x803e,	// (0x00026523) main_mobtv_programe_next_pane

0xddd6,	// (0x0002c2bb) popup_mobtv_noti_window

0xc69a,	// (0x0002ab7f) main_tv_pg_hdr_pane_g1

0xddde,	// (0x0002c2c3) main_tv_pg_hdr_pane_g2

0xdde6,	// (0x0002c2cb) main_tv_pg_hdr_pane_g3

0xddee,	// (0x0002c2d3) main_tv_pg_hdr_pane_g4

0xddf6,	// (0x0002c2db) main_tv_pg_hdr_pane_g5

0xde00,	// (0x0002c2e5) main_tv_pg_hdr_pane_g6

0xde0a,	// (0x0002c2ef) main_tv_pg_hdr_pane_g7

0xde14,	// (0x0002c2f9) main_tv_pg_hdr_pane_g8

0xde1e,	// (0x0002c303) main_tv_pg_hdr_pane_g9

0xde28,	// (0x0002c30d) main_tv_pg_hdr_pane_g10

0xde32,	// (0x0002c317) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002e0cb) main_tv_pg_hdr_pane_g

0xde3c,	// (0x0002c321) main_tv_pg_hdr_pane_t1

0xde4a,	// (0x0002c32f) main_tv_pg_hdr_pane_t2

0xde58,	// (0x0002c33d) main_tv_pg_hdr_pane_t3

0xde68,	// (0x0002c34d) main_tv_pg_hdr_pane_t4

0xde78,	// (0x0002c35d) main_tv_pg_hdr_pane_t5

0x0004,

0x0925,	// (0x0001ee0a) main_tv_pg_hdr_pane_t

0xde88,	// (0x0002c36d) single_mobtv_pg_channel_pane_ParamLimits

0xde88,	// (0x0002c36d) single_mobtv_pg_channel_pane

0xde9a,	// (0x0002c37f) single_mobtv_pg_channel_table_pane

0xdea3,	// (0x0002c388) single_mobtv_pg_channel_thumb_pane

0xdeac,	// (0x0002c391) single_tv_pg_channel_pane_g1

0xdeb5,	// (0x0002c39a) single_tv_pg_channel_pane_g2

0x0001,

0x0930,	// (0x0001ee15) single_tv_pg_channel_pane_g

0xc8fa,	// (0x0002addf) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc8fa,	// (0x0002addf) bg_single_mobtv_pg_channel_thumb_pane

0xdebe,	// (0x0002c3a3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdebe,	// (0x0002c3a3) single_mobtv_pg_channel_thumb_pane_g1

0xdecc,	// (0x0002c3b1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdecc,	// (0x0002c3b1) single_mobtv_pg_channel_thumb_pane_g2

0xded8,	// (0x0002c3bd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xded8,	// (0x0002c3bd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0935,	// (0x0001ee1a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0935,	// (0x0001ee1a) single_mobtv_pg_channel_thumb_pane_g

0xdee4,	// (0x0002c3c9) single_mobtv_pg_channel_thumb_pane_t1

0xdef2,	// (0x0002c3d7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x093c,	// (0x0001ee21) single_mobtv_pg_channel_thumb_pane_t

0xc69a,	// (0x0002ab7f) bg_single_mobtv_pg_channel_table_pane_g1

0xc69a,	// (0x0002ab7f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002dbc1) bg_single_mobtv_pg_channel_table_pane_g

0xdf00,	// (0x0002c3e5) single_mobtv_pg_channel_table_pane_t1

0xdf0e,	// (0x0002c3f3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0941,	// (0x0001ee26) single_mobtv_pg_channel_table_pane_t

0x8053,	// (0x00026538) main_mobtv_info_pane_g1_ParamLimits

0x8053,	// (0x00026538) main_mobtv_info_pane_g1

0x806f,	// (0x00026554) main_mobtv_info_pane_t1_ParamLimits

0x806f,	// (0x00026554) main_mobtv_info_pane_t1

0x80e7,	// (0x000265cc) main_mobtv_info_pane_t2_ParamLimits

0x80e7,	// (0x000265cc) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002e0e7) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002e0e7) main_mobtv_info_pane_t

0x8176,	// (0x0002665b) wait_bar_pane_cp05

0x8188,	// (0x0002666d) main_mobtv_loading_pane_g1_ParamLimits

0x8188,	// (0x0002666d) main_mobtv_loading_pane_g1

0x8196,	// (0x0002667b) main_mobtv_loading_pane_g2_ParamLimits

0x8196,	// (0x0002667b) main_mobtv_loading_pane_g2

0x81a2,	// (0x00026687) main_mobtv_loading_pane_g3_ParamLimits

0x81a2,	// (0x00026687) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002e0ee) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002e0ee) main_mobtv_loading_pane_g

0xdf1c,	// (0x0002c401) main_mobtv_loading_pane_t1_ParamLimits

0xdf1c,	// (0x0002c401) main_mobtv_loading_pane_t1

0xdf34,	// (0x0002c419) main_mobtv_loading_pane_t2_ParamLimits

0xdf34,	// (0x0002c419) main_mobtv_loading_pane_t2

0x0001,

0x0959,	// (0x0001ee3e) main_mobtv_loading_pane_t_ParamLimits

0x0959,	// (0x0001ee3e) main_mobtv_loading_pane_t

0x81b0,	// (0x00026695) wait_bar_pane_cp06_ParamLimits

0x81b0,	// (0x00026695) wait_bar_pane_cp06

0xdf58,	// (0x0002c43d) main_mobtv_programe_curr_pane_t1

0xdf66,	// (0x0002c44b) main_mobtv_programe_curr_pane_t2

0x0001,

0x095e,	// (0x0001ee43) main_mobtv_programe_curr_pane_t

0xdf74,	// (0x0002c459) main_mobtv_programe_next_pane_t1

0xdf82,	// (0x0002c467) main_mobtv_programe_next_pane_t2

0xdf90,	// (0x0002c475) main_mobtv_programe_next_pane_t3

0x0002,

0x0963,	// (0x0001ee48) main_mobtv_programe_next_pane_t

0x9a83,	// (0x00027f68) bg_popup_mobtv_noti_window_pane

0xdf9e,	// (0x0002c483) popup_mobtv_noti_window_g1

0xdfa6,	// (0x0002c48b) popup_mobtv_noti_window_t1

0xdfb4,	// (0x0002c499) popup_mobtv_noti_window_t2

0x0001,

0x096a,	// (0x0001ee4f) popup_mobtv_noti_window_t

0xc69a,	// (0x0002ab7f) bg_popup_mobtv_noti_window_pane_g1

0x0efa,	// (0x0001f3df) sc_clock_pane

0x0efa,	// (0x0001f3df) main_fs_bigclock_pane

0x7816,	// (0x00025cfb) blid2_tripm_pane_t4_ParamLimits

0x7816,	// (0x00025cfb) blid2_tripm_pane_t4

0x81bc,	// (0x000266a1) sc_clock_pane_g1_ParamLimits

0x81bc,	// (0x000266a1) sc_clock_pane_g1

0x81ca,	// (0x000266af) sc_clock_pane_t1_ParamLimits

0x81ca,	// (0x000266af) sc_clock_pane_t1

0x81dd,	// (0x000266c2) sc_clock_pane_t2_ParamLimits

0x81dd,	// (0x000266c2) sc_clock_pane_t2

0x81ef,	// (0x000266d4) sc_clock_pane_t3_ParamLimits

0x81ef,	// (0x000266d4) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002e0f5) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002e0f5) sc_clock_pane_t

0x906c,	// (0x00027551) main_fs_bigclock_indicator_pane_ParamLimits

0x906c,	// (0x00027551) main_fs_bigclock_indicator_pane

0x8278,	// (0x0002675d) main_fs_bigclock_pane_g1_ParamLimits

0x8278,	// (0x0002675d) main_fs_bigclock_pane_g1

0x9078,	// (0x0002755d) main_fs_bigclock_pane_t1_ParamLimits

0x9078,	// (0x0002755d) main_fs_bigclock_pane_t1

0x908a,	// (0x0002756f) main_fs_bigclock_pane_t2_ParamLimits

0x908a,	// (0x0002756f) main_fs_bigclock_pane_t2

0x909c,	// (0x00027581) main_fs_bigclock_pane_t3_ParamLimits

0x909c,	// (0x00027581) main_fs_bigclock_pane_t3

0x0002,

0xfd80,	// (0x0002e265) main_fs_bigclock_pane_t_ParamLimits

0xfd80,	// (0x0002e265) main_fs_bigclock_pane_t

0xec55,	// (0x0002d13a) main_fs_bigclock_indicator_pane_g1

0xdc88,	// (0x0002c16d) ncim_query_content_pane_g2_ParamLimits

0xdc88,	// (0x0002c16d) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002e0b9) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002e0b9) ncim_query_content_pane_g

0x8203,	// (0x000266e8) sc_clock_pane_t4_ParamLimits

0x8203,	// (0x000266e8) sc_clock_pane_t4

0x1350,	// (0x0001f835) main_radioblah_pane

0xd0e0,	// (0x0002b5c5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0e0,	// (0x0002b5c5) cell_call4_button_pane_t1_copy1

0x7e8a,	// (0x0002636f) main_ncimui_pane_t1_ParamLimits

0x7e8a,	// (0x0002636f) main_ncimui_pane_t1

0x7ea4,	// (0x00026389) main_ncimui_pane_t2_ParamLimits

0x7ea4,	// (0x00026389) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002e0b2) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002e0b2) main_ncimui_pane_t

0xe0f9,	// (0x0002c5de) main_radioblah_anim_pane_ParamLimits

0xe0f9,	// (0x0002c5de) main_radioblah_anim_pane

0xe10a,	// (0x0002c5ef) main_radioblah_info_pane_ParamLimits

0xe10a,	// (0x0002c5ef) main_radioblah_info_pane

0xe11e,	// (0x0002c603) main_radioblah_pane_t1_ParamLimits

0xe11e,	// (0x0002c603) main_radioblah_pane_t1

0xe13a,	// (0x0002c61f) main_radioblah_pane_t2_ParamLimits

0xe13a,	// (0x0002c61f) main_radioblah_pane_t2

0x0003,

0x0990,	// (0x0001ee75) main_radioblah_pane_t_ParamLimits

0x0990,	// (0x0001ee75) main_radioblah_pane_t

0x82ca,	// (0x000267af) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82ca,	// (0x000267af) main_radioblah_rocker_ctrl_pane

0xe182,	// (0x0002c667) main_radioblah_info_pane_t1_ParamLimits

0xe182,	// (0x0002c667) main_radioblah_info_pane_t1

0x830f,	// (0x000267f4) main_radioblah_info_pane_t2_ParamLimits

0x830f,	// (0x000267f4) main_radioblah_info_pane_t2

0x0003,

0xfc1b,	// (0x0002e100) main_radioblah_info_pane_t_ParamLimits

0xfc1b,	// (0x0002e100) main_radioblah_info_pane_t

0xc69a,	// (0x0002ab7f) main_radioblah_rocker_ctrl_pane_g1

0x83bf,	// (0x000268a4) main_radioblah_rocker_ctrl_pane_g2

0x83c7,	// (0x000268ac) main_radioblah_rocker_ctrl_pane_g3

0x83cf,	// (0x000268b4) main_radioblah_rocker_ctrl_pane_g4

0x83d7,	// (0x000268bc) main_radioblah_rocker_ctrl_pane_g5

0x83df,	// (0x000268c4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc24,	// (0x0002e109) main_radioblah_rocker_ctrl_pane_g

0x7e2a,	// (0x0002630f) main_cset_text2_pane_t1_copy1_ParamLimits

0x1d19,	// (0x000201fe) cam4_image_uncrop_qvga_pane

0x1e4a,	// (0x0002032f) vid4_image_uncrop_qcif_pane

0x246a,	// (0x0002094f) cam6_image_uncrop_qvga_pane_ParamLimits

0x246a,	// (0x0002094f) cam6_image_uncrop_qvga_pane

0xd98f,	// (0x0002be74) vid6_image_uncrop_qcif_pane_ParamLimits

0xd98f,	// (0x0002be74) vid6_image_uncrop_qcif_pane

0x9a83,	// (0x00027f68) bg_popup_preview_window_pane_cp03

0xdc3a,	// (0x0002c11f) list_cset_text2_pane

0xdc42,	// (0x0002c127) main_cset6_text2_pane_g1

0xdc4a,	// (0x0002c12f) main_cset6_text2_pane_t1

0x83e7,	// (0x000268cc) list_cset_text2_pane_t1_ParamLimits

0x83e7,	// (0x000268cc) list_cset_text2_pane_t1

0x1350,	// (0x0001f835) main_radioblah_pane_ParamLimits

0x8162,	// (0x00026647) main_mobtv_info_pane_t3_ParamLimits

0x8162,	// (0x00026647) main_mobtv_info_pane_t3

0x82b8,	// (0x0002679d) main_radioblah_pane_g1

0x82e3,	// (0x000267c8) main_radioblah_info_pane_g1

0x8364,	// (0x00026849) main_radioblah_info_pane_t3_ParamLimits

0x8364,	// (0x00026849) main_radioblah_info_pane_t3

0x42b2,	// (0x00022797) highlight_cell_cale_month_pane_ParamLimits

0x42b2,	// (0x00022797) highlight_cell_cale_month_pane

0x0efa,	// (0x0001f3df) main_phob_fisheye_pane

0xca4a,	// (0x0002af2f) scroll_pane_cp0031_ParamLimits

0xca4a,	// (0x0002af2f) scroll_pane_cp0031

0xda9d,	// (0x0002bf82) wait_bar_pane_cp08_ParamLimits

0x7b14,	// (0x00025ff9) cset_list_set_pane_copy1_ParamLimits

0xe1bc,	// (0x0002c6a1) highlight_cell_cale_month_pane_g1

0x840e,	// (0x000268f3) highlight_cell_cale_month_pane_t1

0xd70c,	// (0x0002bbf1) list_gen_pane_cp01

0xd2c4,	// (0x0002b7a9) scroll_pane_01

0x841c,	// (0x00026901) list_single_double_fisheye_pane

0x8425,	// (0x0002690a) list_double_fisheye_pane_g1_ParamLimits

0x8425,	// (0x0002690a) list_double_fisheye_pane_g1

0x8431,	// (0x00026916) list_double_fisheye_pane_g2_ParamLimits

0x8431,	// (0x00026916) list_double_fisheye_pane_g2

0x8445,	// (0x0002692a) list_double_fisheye_pane_g3_ParamLimits

0x8445,	// (0x0002692a) list_double_fisheye_pane_g3

0x0004,

0xfc31,	// (0x0002e116) list_double_fisheye_pane_g_ParamLimits

0xfc31,	// (0x0002e116) list_double_fisheye_pane_g

0x846e,	// (0x00026953) list_double_fisheye_pane_t1_ParamLimits

0x846e,	// (0x00026953) list_double_fisheye_pane_t1

0x8489,	// (0x0002696e) list_double_fisheye_pane_t2_ParamLimits

0x8489,	// (0x0002696e) list_double_fisheye_pane_t2

0x0001,

0xfc3c,	// (0x0002e121) list_double_fisheye_pane_t_ParamLimits

0xfc3c,	// (0x0002e121) list_double_fisheye_pane_t

0x0efa,	// (0x0001f3df) main_call5_pane

0x8229,	// (0x0002670e) sc_swipe_pane_ParamLimits

0x8229,	// (0x0002670e) sc_swipe_pane

0x84b7,	// (0x0002699c) call5_image_pane_ParamLimits

0x84b7,	// (0x0002699c) call5_image_pane

0x84c7,	// (0x000269ac) call5_swipe_1_pane_ParamLimits

0x84c7,	// (0x000269ac) call5_swipe_1_pane

0x84d3,	// (0x000269b8) call5_swipe_2_pane_ParamLimits

0x84d3,	// (0x000269b8) call5_swipe_2_pane

0x84ed,	// (0x000269d2) popup_call5_audio_first_window_ParamLimits

0x84ed,	// (0x000269d2) popup_call5_audio_first_window

0xc8fa,	// (0x0002addf) call5_swipe_1_pane_g1_ParamLimits

0xc8fa,	// (0x0002addf) call5_swipe_1_pane_g1

0xe1c4,	// (0x0002c6a9) call5_swipe_1_pane_g2_ParamLimits

0xe1c4,	// (0x0002c6a9) call5_swipe_1_pane_g2

0x0001,

0xfc41,	// (0x0002e126) call5_swipe_1_pane_g_ParamLimits

0xfc41,	// (0x0002e126) call5_swipe_1_pane_g

0xe1d0,	// (0x0002c6b5) call5_swipe_1_pane_t1_ParamLimits

0xe1d0,	// (0x0002c6b5) call5_swipe_1_pane_t1

0xc8fa,	// (0x0002addf) call5_swipe_2_pane_g1_ParamLimits

0xc8fa,	// (0x0002addf) call5_swipe_2_pane_g1

0xe1e5,	// (0x0002c6ca) call5_swipe_2_pane_g2_ParamLimits

0xe1e5,	// (0x0002c6ca) call5_swipe_2_pane_g2

0x0001,

0xfc46,	// (0x0002e12b) call5_swipe_2_pane_g_ParamLimits

0xfc46,	// (0x0002e12b) call5_swipe_2_pane_g

0xe1f1,	// (0x0002c6d6) call5_swipe_2_pane_t1_ParamLimits

0xe1f1,	// (0x0002c6d6) call5_swipe_2_pane_t1

0xe206,	// (0x0002c6eb) sc_swipe_pane_g1_ParamLimits

0xe206,	// (0x0002c6eb) sc_swipe_pane_g1

0xe213,	// (0x0002c6f8) sc_swipe_pane_g2_ParamLimits

0xe213,	// (0x0002c6f8) sc_swipe_pane_g2

0x0001,

0x09c9,	// (0x0001eeae) sc_swipe_pane_g_ParamLimits

0x09c9,	// (0x0001eeae) sc_swipe_pane_g

0xe21f,	// (0x0002c704) sc_swipe_pane_t1_ParamLimits

0xe21f,	// (0x0002c704) sc_swipe_pane_t1

0x0efa,	// (0x0001f3df) main_cmail_launcher_pane

0x84fb,	// (0x000269e0) aid_size_cell_cmail_l_ParamLimits

0x84fb,	// (0x000269e0) aid_size_cell_cmail_l

0x850b,	// (0x000269f0) grid_cmail_l_pane_ParamLimits

0x850b,	// (0x000269f0) grid_cmail_l_pane

0x851b,	// (0x00026a00) cell_cmail_l_pane_ParamLimits

0x851b,	// (0x00026a00) cell_cmail_l_pane

0x852f,	// (0x00026a14) cell_cmail_l_pane_g1_ParamLimits

0x852f,	// (0x00026a14) cell_cmail_l_pane_g1

0x8540,	// (0x00026a25) cell_cmail_l_pane_t1_ParamLimits

0x8540,	// (0x00026a25) cell_cmail_l_pane_t1

0xe234,	// (0x0002c719) cell_cmail_l_pane_t2_ParamLimits

0xe234,	// (0x0002c719) cell_cmail_l_pane_t2

0x0001,

0xfc4b,	// (0x0002e130) cell_cmail_l_pane_t_ParamLimits

0xfc4b,	// (0x0002e130) cell_cmail_l_pane_t

0xa32c,	// (0x00028811) grid_highlight_pane_cp018_ParamLimits

0xa32c,	// (0x00028811) grid_highlight_pane_cp018

0x0d5c,	// (0x0001f241) main2_pane_ParamLimits

0x0d5c,	// (0x0001f241) main2_pane

0xa28a,	// (0x0002876f) popup_sp_fs_action_menu_bg_pane_g1

0xa292,	// (0x00028777) popup_sp_fs_action_menu_bg_pane_g2

0xa29a,	// (0x0002877f) popup_sp_fs_action_menu_bg_pane_g3

0xa2a2,	// (0x00028787) popup_sp_fs_action_menu_bg_pane_g4

0xa2aa,	// (0x0002878f) popup_sp_fs_action_menu_bg_pane_g5

0xa2b2,	// (0x00028797) popup_sp_fs_action_menu_bg_pane_g6

0xa2ba,	// (0x0002879f) popup_sp_fs_action_menu_bg_pane_g7

0xa2c2,	// (0x000287a7) popup_sp_fs_action_menu_bg_pane_g8

0xa2ca,	// (0x000287af) popup_sp_fs_action_menu_bg_pane_g9

0xa2d2,	// (0x000287b7) popup_sp_fs_action_menu_bg_pane_g10

0xa2d2,	// (0x000287b7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002d66f) popup_sp_fs_action_menu_bg_pane_g

0x3030,	// (0x00021515) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t3_g3_g1

0x303c,	// (0x00021521) list_medium_line_x2_t3_g3_g2_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x2_t3_g3_g2

0x3048,	// (0x0002152d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d71d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d71d) list_medium_line_x2_t3_g3_g

0x3054,	// (0x00021539) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3054,	// (0x00021539) list_medium_line_x2_t3_g3_t1

0x3069,	// (0x0002154e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3069,	// (0x0002154e) list_medium_line_x2_t3_g3_t2

0x307b,	// (0x00021560) list_medium_line_x2_t3_g3_t3_ParamLimits

0x307b,	// (0x00021560) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d724) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d724) list_medium_line_x2_t3_g3_t

0x3030,	// (0x00021515) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t3_g2_g1

0x3048,	// (0x0002152d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d72b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d72b) list_medium_line_x2_t3_g2_g

0x3090,	// (0x00021575) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3090,	// (0x00021575) list_medium_line_x2_t3_g2_t1

0x30a6,	// (0x0002158b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x30a6,	// (0x0002158b) list_medium_line_x2_t3_g2_t2

0x30b8,	// (0x0002159d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x30b8,	// (0x0002159d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d730) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d730) list_medium_line_x2_t3_g2_t

0x3030,	// (0x00021515) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t4_g4_g1

0x30d6,	// (0x000215bb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x30d6,	// (0x000215bb) list_medium_line_x2_t4_g4_g2

0x303c,	// (0x00021521) list_medium_line_x2_t4_g4_g3_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x2_t4_g4_g3

0x30e2,	// (0x000215c7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x30e2,	// (0x000215c7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d737) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d737) list_medium_line_x2_t4_g4_g

0x30ee,	// (0x000215d3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x30ee,	// (0x000215d3) list_medium_line_x2_t4_g4_t1

0x3105,	// (0x000215ea) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3105,	// (0x000215ea) list_medium_line_x2_t4_g4_t2

0x311a,	// (0x000215ff) list_medium_line_x2_t4_g4_t3_ParamLimits

0x311a,	// (0x000215ff) list_medium_line_x2_t4_g4_t3

0x312c,	// (0x00021611) list_medium_line_x2_t4_g4_t4_ParamLimits

0x312c,	// (0x00021611) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d740) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d740) list_medium_line_x2_t4_g4_t

0x3030,	// (0x00021515) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t2_g4_g1

0x30d6,	// (0x000215bb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x30d6,	// (0x000215bb) list_medium_line_x2_t2_g4_g2

0x303c,	// (0x00021521) list_medium_line_x2_t2_g4_g3_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x2_t2_g4_g3

0x3048,	// (0x0002152d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d7a7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d7a7) list_medium_line_x2_t2_g4_g

0x42d8,	// (0x000227bd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x42d8,	// (0x000227bd) list_medium_line_x2_t2_g4_t1

0x307b,	// (0x00021560) list_medium_line_x2_t2_g4_t2_ParamLimits

0x307b,	// (0x00021560) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d7b0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d7b0) list_medium_line_x2_t2_g4_t

0x3030,	// (0x00021515) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t2_g3_g1

0x303c,	// (0x00021521) list_medium_line_x2_t2_g3_g2_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x2_t2_g3_g2

0x3048,	// (0x0002152d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d71d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d71d) list_medium_line_x2_t2_g3_g

0x42ed,	// (0x000227d2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x42ed,	// (0x000227d2) list_medium_line_x2_t2_g3_t1

0x307b,	// (0x00021560) list_medium_line_x2_t2_g3_t2_ParamLimits

0x307b,	// (0x00021560) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d7b5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d7b5) list_medium_line_x2_t2_g3_t

0x447e,	// (0x00022963) main_sp_fs_list_pane_ParamLimits

0x447e,	// (0x00022963) main_sp_fs_list_pane

0x448a,	// (0x0002296f) sp_fs_scroll_pane_ParamLimits

0x448a,	// (0x0002296f) sp_fs_scroll_pane

0x4496,	// (0x0002297b) list_medium_line_x2_t3_t1

0x44a6,	// (0x0002298b) list_medium_line_x2_t3_t2

0x44b4,	// (0x00022999) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d800) list_medium_line_x2_t3_t

0x44c2,	// (0x000229a7) list_medium_line_x3_t4_t1

0x44d2,	// (0x000229b7) list_medium_line_x3_t4_t2

0x44e0,	// (0x000229c5) list_medium_line_x3_t4_t3

0x44b4,	// (0x00022999) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d807) list_medium_line_x3_t4_t

0x44ee,	// (0x000229d3) list_medium_line_x4_t5_t1

0x44fe,	// (0x000229e3) list_medium_line_x4_t5_t2

0x44e0,	// (0x000229c5) list_medium_line_x4_t5_t3

0x450c,	// (0x000229f1) list_medium_line_x4_t5_t4

0x44b4,	// (0x00022999) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d810) list_medium_line_x4_t5_t

0x3030,	// (0x00021515) list_medium_line_t4_g4_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_t4_g4_g1

0x451a,	// (0x000229ff) list_medium_line_t4_g4_g2_ParamLimits

0x451a,	// (0x000229ff) list_medium_line_t4_g4_g2

0x4526,	// (0x00022a0b) list_medium_line_t4_g4_g3_ParamLimits

0x4526,	// (0x00022a0b) list_medium_line_t4_g4_g3

0x3048,	// (0x0002152d) list_medium_line_t4_g4_g4_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d81b) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d81b) list_medium_line_t4_g4_g

0x4532,	// (0x00022a17) list_medium_line_t4_g4_t1_ParamLimits

0x4532,	// (0x00022a17) list_medium_line_t4_g4_t1

0x4547,	// (0x00022a2c) list_medium_line_t4_g4_t2_ParamLimits

0x4547,	// (0x00022a2c) list_medium_line_t4_g4_t2

0x455d,	// (0x00022a42) list_medium_line_t4_g4_t3_ParamLimits

0x455d,	// (0x00022a42) list_medium_line_t4_g4_t3

0x307b,	// (0x00021560) list_medium_line_t4_g4_t4_ParamLimits

0x307b,	// (0x00021560) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d824) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d824) list_medium_line_t4_g4_t

0x45eb,	// (0x00022ad0) chi_dic_find_pane_g1

0x136c,	// (0x0001f851) main_tport_pane

0x7089,	// (0x0002556e) list_medium_line_plain_t1

0x70af,	// (0x00025594) list_medium_line_t2_g2_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_t2_g2_g1

0x70bb,	// (0x000255a0) list_medium_line_t2_g2_g2_ParamLimits

0x70bb,	// (0x000255a0) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002dee5) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002dee5) list_medium_line_t2_g2_g

0x70c7,	// (0x000255ac) list_medium_line_t2_g2_t1_ParamLimits

0x70c7,	// (0x000255ac) list_medium_line_t2_g2_t1

0x70e1,	// (0x000255c6) list_medium_line_t2_g2_t2_ParamLimits

0x70e1,	// (0x000255c6) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002deea) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002deea) list_medium_line_t2_g2_t

0xd715,	// (0x0002bbfa) aid_sp_fs_list_icon_a_sm

0xd71d,	// (0x0002bc02) aid_sp_fs_list_icon_d

0xd725,	// (0x0002bc0a) aid_sp_fs_text_primary

0xd72e,	// (0x0002bc13) aid_sp_fs_text_secondary

0x7658,	// (0x00025b3d) list_medium_line

0x7658,	// (0x00025b3d) list_medium_line_g2

0x7658,	// (0x00025b3d) list_medium_line_g3

0x7658,	// (0x00025b3d) list_medium_line_plain

0x7658,	// (0x00025b3d) list_medium_line_plain_t2

0x7658,	// (0x00025b3d) list_medium_line_plain_t3

0x7658,	// (0x00025b3d) list_medium_line_right_icon

0x7658,	// (0x00025b3d) list_medium_line_right_iconx2

0x7658,	// (0x00025b3d) list_medium_line_t2

0x7658,	// (0x00025b3d) list_medium_line_t2_g2

0x7658,	// (0x00025b3d) list_medium_line_t2_g3

0x7658,	// (0x00025b3d) list_medium_line_t2_right_icon

0x7658,	// (0x00025b3d) list_medium_line_t2_right_iconx2

0x7658,	// (0x00025b3d) list_medium_line_t3

0x7658,	// (0x00025b3d) list_medium_line_t3_g2

0x7658,	// (0x00025b3d) list_medium_line_t3_g3

0x7658,	// (0x00025b3d) list_medium_line_t3_right_iconx2

0x7661,	// (0x00025b46) list_medium_line_t4_g4

0x766a,	// (0x00025b4f) list_medium_line_x2

0x766a,	// (0x00025b4f) list_medium_line_x2_t2_g2

0x766a,	// (0x00025b4f) list_medium_line_x2_t2_g3

0x766a,	// (0x00025b4f) list_medium_line_x2_t2_g4

0x766a,	// (0x00025b4f) list_medium_line_x2_t3

0x766a,	// (0x00025b4f) list_medium_line_x2_t3_g2

0x766a,	// (0x00025b4f) list_medium_line_x2_t3_g3

0x766a,	// (0x00025b4f) list_medium_line_x2_t3_g4

0x766a,	// (0x00025b4f) list_medium_line_x2_t4_g2

0x766a,	// (0x00025b4f) list_medium_line_x2_t4_g4

0x7673,	// (0x00025b58) list_medium_line_x3

0x7673,	// (0x00025b58) list_medium_line_x3_t4

0x7673,	// (0x00025b58) list_medium_line_x3_t4_g4

0x7661,	// (0x00025b46) list_medium_line_x4_t4

0x7661,	// (0x00025b46) list_medium_line_x4_t4_g7

0x7661,	// (0x00025b46) list_medium_line_x4_t5

0x767c,	// (0x00025b61) list_single_fs_dyc_pane_ParamLimits

0x767c,	// (0x00025b61) list_single_fs_dyc_pane

0x3030,	// (0x00021515) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x4_t4_g7_g1

0x7d5b,	// (0x00026240) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d5b,	// (0x00026240) list_medium_line_x4_t4_g7_g2

0x7d67,	// (0x0002624c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d67,	// (0x0002624c) list_medium_line_x4_t4_g7_g3

0x7d76,	// (0x0002625b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d76,	// (0x0002625b) list_medium_line_x4_t4_g7_g4

0x7d82,	// (0x00026267) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d82,	// (0x00026267) list_medium_line_x4_t4_g7_g5

0x7d91,	// (0x00026276) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d91,	// (0x00026276) list_medium_line_x4_t4_g7_g6

0x7da0,	// (0x00026285) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7da0,	// (0x00026285) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002e093) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002e093) list_medium_line_x4_t4_g7_g

0x7dac,	// (0x00026291) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7dac,	// (0x00026291) list_medium_line_x4_t4_g7_t1

0x7dc1,	// (0x000262a6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7dc1,	// (0x000262a6) list_medium_line_x4_t4_g7_t2

0x7dd6,	// (0x000262bb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7dd6,	// (0x000262bb) list_medium_line_x4_t4_g7_t3

0x7deb,	// (0x000262d0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7deb,	// (0x000262d0) list_medium_line_x4_t4_g7_t4

0x7dfd,	// (0x000262e2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7dfd,	// (0x000262e2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002e0a2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002e0a2) list_medium_line_x4_t4_g7_t

0x7e0f,	// (0x000262f4) list_single_dyc_row_pane_ParamLimits

0x7e0f,	// (0x000262f4) list_single_dyc_row_pane

0x84ab,	// (0x00026990) call5_gesture_pane_ParamLimits

0x84ab,	// (0x00026990) call5_gesture_pane

0x84df,	// (0x000269c4) call5_windows_pane_ParamLimits

0x84df,	// (0x000269c4) call5_windows_pane

0x8556,	// (0x00026a3b) call5_swipe_1_pane_cp_ParamLimits

0x8556,	// (0x00026a3b) call5_swipe_1_pane_cp

0x8562,	// (0x00026a47) call5_swipe_2_pane_cp_ParamLimits

0x8562,	// (0x00026a47) call5_swipe_2_pane_cp

0xa3bb,	// (0x000288a0) call5_image_pane_cp

0x856e,	// (0x00026a53) popup_call5_audio_first_window_cp_ParamLimits

0x856e,	// (0x00026a53) popup_call5_audio_first_window_cp

0xe206,	// (0x0002c6eb) call5_swipe_1_pane_g1_cp_ParamLimits

0xe206,	// (0x0002c6eb) call5_swipe_1_pane_g1_cp

0xe246,	// (0x0002c72b) call5_swipe_1_pane_g2_cp

0xe21f,	// (0x0002c704) call5_swipe_1_pane_t1_cp_ParamLimits

0xe21f,	// (0x0002c704) call5_swipe_1_pane_t1_cp

0xe206,	// (0x0002c6eb) call5_swipe_2_pane_g1_cp_ParamLimits

0xe206,	// (0x0002c6eb) call5_swipe_2_pane_g1_cp

0xe24e,	// (0x0002c733) call5_swipe_2_pane_g2_cp

0xe256,	// (0x0002c73b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe256,	// (0x0002c73b) call5_swipe_2_pane_t1_cp

0xa32c,	// (0x00028811) main_sp_fs_email_pane

0xe26b,	// (0x0002c750) main_sp_fs_listscroll_pane_te

0xe274,	// (0x0002c759) popup_sp_fs_action_menu_pane_ParamLimits

0xe274,	// (0x0002c759) popup_sp_fs_action_menu_pane

0xc69a,	// (0x0002ab7f) bg_sp_fs_ctrlbar_pane_g1

0xe2b6,	// (0x0002c79b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2bf,	// (0x0002c7a4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2c8,	// (0x0002c7ad) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc69a,	// (0x0002ab7f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc50,	// (0x0002e135) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc47d,	// (0x0002a962) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc47d,	// (0x0002a962) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2d1,	// (0x0002c7b6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2d1,	// (0x0002c7b6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2dd,	// (0x0002c7c2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2dd,	// (0x0002c7c2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x09dc,	// (0x0001eec1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x09dc,	// (0x0001eec1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2e9,	// (0x0002c7ce) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2e9,	// (0x0002c7ce) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x857c,	// (0x00026a61) list_medium_line_t2_right_icon_g1

0x8584,	// (0x00026a69) list_medium_line_t2_right_icon_t1

0x8594,	// (0x00026a79) list_medium_line_t2_right_icon_t2

0x0001,

0xfc59,	// (0x0002e13e) list_medium_line_t2_right_icon_t

0xc290,	// (0x0002a775) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc290,	// (0x0002a775) bg_sp_fs_ctrlbar_pane

0x85f9,	// (0x00026ade) main_sp_fs_ctrlbar_button_pane_cp01

0x8601,	// (0x00026ae6) main_sp_fs_ctrlbar_ddmenu_pane

0xe33b,	// (0x0002c820) main_sp_fs_ctrlbar_pane_g1

0xe347,	// (0x0002c82c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x09e6,	// (0x0001eecb) main_sp_fs_ctrlbar_pane_g

0xe353,	// (0x0002c838) main_sp_fs_ctrlbar_pane_t1

0x860b,	// (0x00026af0) main_sp_fs_ctrlbar_pane

0x8621,	// (0x00026b06) main_sp_fs_listscroll_pane_te_cp01

0x8632,	// (0x00026b17) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8632,	// (0x00026b17) popup_sp_fs_action_menu_pane_cp01

0xa32c,	// (0x00028811) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa32c,	// (0x00028811) bg_sp_fs_highlight_list_pane_cp01

0xe383,	// (0x0002c868) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe383,	// (0x0002c868) sp_fs_action_menu_list_gene_pane_g1

0xe392,	// (0x0002c877) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe392,	// (0x0002c877) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x09f0,	// (0x0001eed5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x09f0,	// (0x0001eed5) sp_fs_action_menu_list_gene_pane_g

0xe39f,	// (0x0002c884) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe39f,	// (0x0002c884) sp_fs_action_menu_list_gene_pane_t1

0xe3b7,	// (0x0002c89c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3b7,	// (0x0002c89c) sp_fs_action_menu_list_gene_pane

0xe3d4,	// (0x0002c8b9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3d4,	// (0x0002c8b9) popup_sp_fs_action_menu_bg_pane

0xe3e2,	// (0x0002c8c7) sp_fs_action_menu_list_pane_ParamLimits

0xe3e2,	// (0x0002c8c7) sp_fs_action_menu_list_pane

0xe400,	// (0x0002c8e5) sp_fs_scroll_pane_cp01_ParamLimits

0xe400,	// (0x0002c8e5) sp_fs_scroll_pane_cp01

0x865c,	// (0x00026b41) list_medium_line_plain_t2_t1

0x866c,	// (0x00026b51) list_medium_line_plain_t2_t2

0x0001,

0xfc5e,	// (0x0002e143) list_medium_line_plain_t2_t

0x867a,	// (0x00026b5f) list_medium_line_plain_t3_t1

0x868a,	// (0x00026b6f) list_medium_line_plain_t3_t2

0x8698,	// (0x00026b7d) list_medium_line_plain_t3_t3

0x0002,

0xfc63,	// (0x0002e148) list_medium_line_plain_t3_t

0x3030,	// (0x00021515) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t2_g2_g1

0x3048,	// (0x0002152d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d72b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d72b) list_medium_line_x2_t2_g2_g

0x4532,	// (0x00022a17) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4532,	// (0x00022a17) list_medium_line_x2_t2_g2_t1

0x307b,	// (0x00021560) list_medium_line_x2_t2_g2_t2_ParamLimits

0x307b,	// (0x00021560) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc6a,	// (0x0002e14f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc6a,	// (0x0002e14f) list_medium_line_x2_t2_g2_t

0x3030,	// (0x00021515) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t4_g2_g1

0x3048,	// (0x0002152d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d72b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d72b) list_medium_line_x2_t4_g2_g

0x86a6,	// (0x00026b8b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86a6,	// (0x00026b8b) list_medium_line_x2_t4_g2_t1

0x86c0,	// (0x00026ba5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86c0,	// (0x00026ba5) list_medium_line_x2_t4_g2_t2

0x86d5,	// (0x00026bba) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86d5,	// (0x00026bba) list_medium_line_x2_t4_g2_t3

0x307b,	// (0x00021560) list_medium_line_x2_t4_g2_t4_ParamLimits

0x307b,	// (0x00021560) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6f,	// (0x0002e154) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6f,	// (0x0002e154) list_medium_line_x2_t4_g2_t

0x86ea,	// (0x00026bcf) list_medium_line_t3_right_iconx2_g1

0x857c,	// (0x00026a61) list_medium_line_t3_right_iconx2_g2

0x86f2,	// (0x00026bd7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc78,	// (0x0002e15d) list_medium_line_t3_right_iconx2_g

0x86fa,	// (0x00026bdf) list_medium_line_t3_right_iconx2_t1

0x870a,	// (0x00026bef) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7f,	// (0x0002e164) list_medium_line_t3_right_iconx2_t

0x3030,	// (0x00021515) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x3_t4_g4_g1

0x303c,	// (0x00021521) list_medium_line_x3_t4_g4_g2_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x3_t4_g4_g2

0x451a,	// (0x000229ff) list_medium_line_x3_t4_g4_g3_ParamLimits

0x451a,	// (0x000229ff) list_medium_line_x3_t4_g4_g3

0x8718,	// (0x00026bfd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8718,	// (0x00026bfd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc84,	// (0x0002e169) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc84,	// (0x0002e169) list_medium_line_x3_t4_g4_g

0x8724,	// (0x00026c09) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8724,	// (0x00026c09) list_medium_line_x3_t4_g4_t1

0x873b,	// (0x00026c20) list_medium_line_x3_t4_g4_t2_ParamLimits

0x873b,	// (0x00026c20) list_medium_line_x3_t4_g4_t2

0x8750,	// (0x00026c35) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8750,	// (0x00026c35) list_medium_line_x3_t4_g4_t3

0x8765,	// (0x00026c4a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8765,	// (0x00026c4a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8d,	// (0x0002e172) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8d,	// (0x0002e172) list_medium_line_x3_t4_g4_t

0x8782,	// (0x00026c67) list_single_dyc_row_text_pane_t1_ParamLimits

0x8782,	// (0x00026c67) list_single_dyc_row_text_pane_t1

0x87b9,	// (0x00026c9e) list_single_dyc_row_text_pane_t2_ParamLimits

0x87b9,	// (0x00026c9e) list_single_dyc_row_text_pane_t2

0xe426,	// (0x0002c90b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe426,	// (0x0002c90b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc96,	// (0x0002e17b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc96,	// (0x0002e17b) list_single_dyc_row_text_pane_t

0xe44a,	// (0x0002c92f) list_single_dyc_row_pane_g1_ParamLimits

0xe44a,	// (0x0002c92f) list_single_dyc_row_pane_g1

0xe456,	// (0x0002c93b) list_single_dyc_row_pane_g2_ParamLimits

0xe456,	// (0x0002c93b) list_single_dyc_row_pane_g2

0xe462,	// (0x0002c947) list_single_dyc_row_pane_g3_ParamLimits

0xe462,	// (0x0002c947) list_single_dyc_row_pane_g3

0xe46e,	// (0x0002c953) list_single_dyc_row_pane_g4_ParamLimits

0xe46e,	// (0x0002c953) list_single_dyc_row_pane_g4

0x0003,

0x0a3a,	// (0x0001ef1f) list_single_dyc_row_pane_g_ParamLimits

0x0a3a,	// (0x0001ef1f) list_single_dyc_row_pane_g

0xe47a,	// (0x0002c95f) list_single_dyc_row_text_pane_ParamLimits

0xe47a,	// (0x0002c95f) list_single_dyc_row_text_pane

0x9a83,	// (0x00027f68) bg_sp_fs_scroll_pane

0xe499,	// (0x0002c97e) thumb_sp_fs_scroll_pane

0x70af,	// (0x00025594) list_medium_line_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_g1

0x88dc,	// (0x00026dc1) list_medium_line_t1_ParamLimits

0x88dc,	// (0x00026dc1) list_medium_line_t1

0x3030,	// (0x00021515) list_medium_line_x2_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_g1

0x303c,	// (0x00021521) list_medium_line_x2_g2_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x2_g2

0x0001,

0xfca3,	// (0x0002e188) list_medium_line_x2_g_ParamLimits

0xfca3,	// (0x0002e188) list_medium_line_x2_g

0xe4a2,	// (0x0002c987) list_medium_line_x2_t1_ParamLimits

0xe4a2,	// (0x0002c987) list_medium_line_x2_t1

0x3030,	// (0x00021515) list_medium_line_x3_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x3_g1

0x303c,	// (0x00021521) list_medium_line_x3_g2_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x3_g2

0x0001,

0xfca3,	// (0x0002e188) list_medium_line_x3_g_ParamLimits

0xfca3,	// (0x0002e188) list_medium_line_x3_g

0xe4a2,	// (0x0002c987) list_medium_line_x3_t1_ParamLimits

0xe4a2,	// (0x0002c987) list_medium_line_x3_t1

0xe4b8,	// (0x0002c99d) thumb_sp_fs_scroll_pane_g1

0xe4c1,	// (0x0002c9a6) thumb_sp_fs_scroll_pane_g2

0xe4ca,	// (0x0002c9af) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a48,	// (0x0001ef2d) thumb_sp_fs_scroll_pane_g

0xe4b8,	// (0x0002c99d) bg_sp_fs_scroll_pane_g1

0xe4c1,	// (0x0002c9a6) bg_sp_fs_scroll_pane_g2

0xe4ca,	// (0x0002c9af) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a48,	// (0x0001ef2d) bg_sp_fs_scroll_pane_g

0x3030,	// (0x00021515) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3030,	// (0x00021515) list_medium_line_x2_t3_g4_g1

0x30d6,	// (0x000215bb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x30d6,	// (0x000215bb) list_medium_line_x2_t3_g4_g2

0x303c,	// (0x00021521) list_medium_line_x2_t3_g4_g3_ParamLimits

0x303c,	// (0x00021521) list_medium_line_x2_t3_g4_g3

0x3048,	// (0x0002152d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3048,	// (0x0002152d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d7a7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d7a7) list_medium_line_x2_t3_g4_g

0x88f1,	// (0x00026dd6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88f1,	// (0x00026dd6) list_medium_line_x2_t3_g4_t1

0x8907,	// (0x00026dec) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8907,	// (0x00026dec) list_medium_line_x2_t3_g4_t2

0x307b,	// (0x00021560) list_medium_line_x2_t3_g4_t3_ParamLimits

0x307b,	// (0x00021560) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca8,	// (0x0002e18d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca8,	// (0x0002e18d) list_medium_line_x2_t3_g4_t

0x70af,	// (0x00025594) list_medium_line_g2_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_g2_g1

0x70bb,	// (0x000255a0) list_medium_line_g2_g2_ParamLimits

0x70bb,	// (0x000255a0) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002dee5) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002dee5) list_medium_line_g2_g

0x8920,	// (0x00026e05) list_medium_line_g2_t1_ParamLimits

0x8920,	// (0x00026e05) list_medium_line_g2_t1

0x70af,	// (0x00025594) list_medium_line_t3_g2_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_t3_g2_g1

0x70bb,	// (0x000255a0) list_medium_line_t3_g2_g2_ParamLimits

0x70bb,	// (0x000255a0) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002dee5) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002dee5) list_medium_line_t3_g2_g

0x8935,	// (0x00026e1a) list_medium_line_t3_g2_t1_ParamLimits

0x8935,	// (0x00026e1a) list_medium_line_t3_g2_t1

0x894c,	// (0x00026e31) list_medium_line_t3_g2_t2_ParamLimits

0x894c,	// (0x00026e31) list_medium_line_t3_g2_t2

0x8961,	// (0x00026e46) list_medium_line_t3_g2_t3_ParamLimits

0x8961,	// (0x00026e46) list_medium_line_t3_g2_t3

0x0002,

0xfcaf,	// (0x0002e194) list_medium_line_t3_g2_t_ParamLimits

0xfcaf,	// (0x0002e194) list_medium_line_t3_g2_t

0x857c,	// (0x00026a61) list_medium_line_right_icon_g1

0x8976,	// (0x00026e5b) list_medium_line_right_icon_t1

0x70af,	// (0x00025594) list_medium_line_t2_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_t2_g1

0x8984,	// (0x00026e69) list_medium_line_t2_t1_ParamLimits

0x8984,	// (0x00026e69) list_medium_line_t2_t1

0x899e,	// (0x00026e83) list_medium_line_t2_t2_ParamLimits

0x899e,	// (0x00026e83) list_medium_line_t2_t2

0x0001,

0xfcb6,	// (0x0002e19b) list_medium_line_t2_t_ParamLimits

0xfcb6,	// (0x0002e19b) list_medium_line_t2_t

0x70af,	// (0x00025594) list_medium_line_t3_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_t3_g1

0x89b3,	// (0x00026e98) list_medium_line_t3_t1_ParamLimits

0x89b3,	// (0x00026e98) list_medium_line_t3_t1

0x89cd,	// (0x00026eb2) list_medium_line_t3_t2_ParamLimits

0x89cd,	// (0x00026eb2) list_medium_line_t3_t2

0x89e2,	// (0x00026ec7) list_medium_line_t3_t3_ParamLimits

0x89e2,	// (0x00026ec7) list_medium_line_t3_t3

0x0002,

0xfcbb,	// (0x0002e1a0) list_medium_line_t3_t_ParamLimits

0xfcbb,	// (0x0002e1a0) list_medium_line_t3_t

0x70af,	// (0x00025594) list_medium_line_g3_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_g3_g1

0x89f7,	// (0x00026edc) list_medium_line_g3_g2_ParamLimits

0x89f7,	// (0x00026edc) list_medium_line_g3_g2

0x70bb,	// (0x000255a0) list_medium_line_g3_g3_ParamLimits

0x70bb,	// (0x000255a0) list_medium_line_g3_g3

0x0002,

0xfcc2,	// (0x0002e1a7) list_medium_line_g3_g_ParamLimits

0xfcc2,	// (0x0002e1a7) list_medium_line_g3_g

0x8a03,	// (0x00026ee8) list_medium_line_g3_t1_ParamLimits

0x8a03,	// (0x00026ee8) list_medium_line_g3_t1

0x70af,	// (0x00025594) list_medium_line_t2_g3_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_t2_g3_g1

0x89f7,	// (0x00026edc) list_medium_line_t2_g3_g2_ParamLimits

0x89f7,	// (0x00026edc) list_medium_line_t2_g3_g2

0x70bb,	// (0x000255a0) list_medium_line_t2_g3_g3_ParamLimits

0x70bb,	// (0x000255a0) list_medium_line_t2_g3_g3

0x0002,

0xfcc2,	// (0x0002e1a7) list_medium_line_t2_g3_g_ParamLimits

0xfcc2,	// (0x0002e1a7) list_medium_line_t2_g3_g

0x8a18,	// (0x00026efd) list_medium_line_t2_g3_t1_ParamLimits

0x8a18,	// (0x00026efd) list_medium_line_t2_g3_t1

0x8a2f,	// (0x00026f14) list_medium_line_t2_g3_t2_ParamLimits

0x8a2f,	// (0x00026f14) list_medium_line_t2_g3_t2

0x0001,

0xfcc9,	// (0x0002e1ae) list_medium_line_t2_g3_t_ParamLimits

0xfcc9,	// (0x0002e1ae) list_medium_line_t2_g3_t

0x70af,	// (0x00025594) list_medium_line_t3_g3_g1_ParamLimits

0x70af,	// (0x00025594) list_medium_line_t3_g3_g1

0x89f7,	// (0x00026edc) list_medium_line_t3_g3_g2_ParamLimits

0x89f7,	// (0x00026edc) list_medium_line_t3_g3_g2

0x70bb,	// (0x000255a0) list_medium_line_t3_g3_g3_ParamLimits

0x70bb,	// (0x000255a0) list_medium_line_t3_g3_g3

0x0002,

0xfcc2,	// (0x0002e1a7) list_medium_line_t3_g3_g_ParamLimits

0xfcc2,	// (0x0002e1a7) list_medium_line_t3_g3_g

0x8a44,	// (0x00026f29) list_medium_line_t3_g3_t1_ParamLimits

0x8a44,	// (0x00026f29) list_medium_line_t3_g3_t1

0x8a5d,	// (0x00026f42) list_medium_line_t3_g3_t2_ParamLimits

0x8a5d,	// (0x00026f42) list_medium_line_t3_g3_t2

0x8a73,	// (0x00026f58) list_medium_line_t3_g3_t3_ParamLimits

0x8a73,	// (0x00026f58) list_medium_line_t3_g3_t3

0x0002,

0xfcce,	// (0x0002e1b3) list_medium_line_t3_g3_t_ParamLimits

0xfcce,	// (0x0002e1b3) list_medium_line_t3_g3_t

0x86ea,	// (0x00026bcf) list_medium_line_right_iconx2_g1

0x857c,	// (0x00026a61) list_medium_line_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002e1ba) list_medium_line_right_iconx2_g

0x8a89,	// (0x00026f6e) list_medium_line_right_iconx2_t1

0x86ea,	// (0x00026bcf) list_medium_line_t2_right_iconx2_g1

0x857c,	// (0x00026a61) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002e1ba) list_medium_line_t2_right_iconx2_g

0x8a97,	// (0x00026f7c) list_medium_line_t2_right_iconx2_t1

0x8aa7,	// (0x00026f8c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcda,	// (0x0002e1bf) list_medium_line_t2_right_iconx2_t

0x8ab5,	// (0x00026f9a) list_medium_line_x4_t4_t1

0x8ac3,	// (0x00026fa8) list_medium_line_x4_t4_t2

0x8ad3,	// (0x00026fb8) list_medium_line_x4_t4_t3

0x8ae3,	// (0x00026fc8) list_medium_line_x4_t4_t4

0x0003,

0xfcdf,	// (0x0002e1c4) list_medium_line_x4_t4_t

0x8b1d,	// (0x00027002) tport_appsw_pane_ParamLimits

0x8b1d,	// (0x00027002) tport_appsw_pane

0x8b2b,	// (0x00027010) tport_contact_pane_ParamLimits

0x8b2b,	// (0x00027010) tport_contact_pane

0x8b3b,	// (0x00027020) tport_listscroll_pane_ParamLimits

0x8b3b,	// (0x00027020) tport_listscroll_pane

0x8b4b,	// (0x00027030) cell_tport_appsw_pane_ParamLimits

0x8b4b,	// (0x00027030) cell_tport_appsw_pane

0xc9d3,	// (0x0002aeb8) tport_appsw_pane_g1_ParamLimits

0xc9d3,	// (0x0002aeb8) tport_appsw_pane_g1

0xe4d3,	// (0x0002c9b8) tport_contact_pane_g1

0xdd0e,	// (0x0002c1f3) tport_contact_pane_t1

0xe4dc,	// (0x0002c9c1) tport_contact_pane_t2

0x0001,

0x0a8f,	// (0x0001ef74) tport_contact_pane_t

0xe4ea,	// (0x0002c9cf) list_tport_pane

0xe4f3,	// (0x0002c9d8) scroll_pane_cp_030

0x8b7e,	// (0x00027063) cell_tport_appsw_pane_g1

0x8b8e,	// (0x00027073) cell_tport_appsw_pane_t1

0x8b9c,	// (0x00027081) grid_highlight_pane_cp019

0x8ba4,	// (0x00027089) list_tport_double_graphic_pane_ParamLimits

0x8ba4,	// (0x00027089) list_tport_double_graphic_pane

0xa32c,	// (0x00028811) list_highlight_pane_cp023_ParamLimits

0xa32c,	// (0x00028811) list_highlight_pane_cp023

0x8bb6,	// (0x0002709b) list_tport_double_graphic_pane_g1_ParamLimits

0x8bb6,	// (0x0002709b) list_tport_double_graphic_pane_g1

0x8bc3,	// (0x000270a8) list_tport_double_graphic_pane_t1_ParamLimits

0x8bc3,	// (0x000270a8) list_tport_double_graphic_pane_t1

0x8bd8,	// (0x000270bd) list_tport_double_graphic_pane_t2_ParamLimits

0x8bd8,	// (0x000270bd) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0002e1d4) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0002e1d4) list_tport_double_graphic_pane_t

0x9a83,	// (0x00027f68) main_cale_note_pane

0x208b,	// (0x00020570) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x208b,	// (0x00020570) cell_vitu2_function_top_wide_pane_cp01

0x8176,	// (0x0002665b) wait_bar_pane_cp05_ParamLimits

0xa32c,	// (0x00028811) listscroll_cmail_pane

0xe4fc,	// (0x0002c9e1) list_cmail_pane

0x8bea,	// (0x000270cf) list_cmail_body_pane

0x8c11,	// (0x000270f6) list_single_cmail_header_caption_pane

0x8c45,	// (0x0002712a) list_single_cmail_header_detail_pane_ParamLimits

0x8c45,	// (0x0002712a) list_single_cmail_header_detail_pane

0xe50c,	// (0x0002c9f1) list_single_cmail_header_caption_pane_t1

0x8c80,	// (0x00027165) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c80,	// (0x00027165) list_single_cmail_header_detail_pane_g1

0xe523,	// (0x0002ca08) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe523,	// (0x0002ca08) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0002e1d9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0002e1d9) list_single_cmail_header_detail_pane_g

0xe53c,	// (0x0002ca21) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe53c,	// (0x0002ca21) list_single_cmail_header_detail_pane_t1

0xe59c,	// (0x0002ca81) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe59c,	// (0x0002ca81) list_single_cmail_header_editor_pane_bg

0xe5b3,	// (0x0002ca98) list_cmail_body_pane_g1

0xe5bc,	// (0x0002caa1) list_cmail_body_pane_t1

0xd1aa,	// (0x0002b68f) list_single_cmail_header_editor_pane_bg_g1

0xa614,	// (0x00028af9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ba,	// (0x0002b69f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1b2,	// (0x0002b697) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3ce,	// (0x0002b8b3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1da,	// (0x0002b6bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1ca,	// (0x0002b6af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1d2,	// (0x0002b6b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa5f4,	// (0x00028ad9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c96,	// (0x0002717b) calenote_gesture_pane_ParamLimits

0x8c96,	// (0x0002717b) calenote_gesture_pane

0x8cb0,	// (0x00027195) calenote_window_pane_ParamLimits

0x8cb0,	// (0x00027195) calenote_window_pane

0xe5ca,	// (0x0002caaf) popup_note_window_cp01

0x8cc8,	// (0x000271ad) calenote_swipe_1_pane_ParamLimits

0x8cc8,	// (0x000271ad) calenote_swipe_1_pane

0x8562,	// (0x00026a47) calenote_swipe_2_pane_ParamLimits

0x8562,	// (0x00026a47) calenote_swipe_2_pane

0xe206,	// (0x0002c6eb) calenote_swipe_1_pane_g1_ParamLimits

0xe206,	// (0x0002c6eb) calenote_swipe_1_pane_g1

0xe213,	// (0x0002c6f8) calenote_swipe_1_pane_g2_ParamLimits

0xe213,	// (0x0002c6f8) calenote_swipe_1_pane_g2

0x0001,

0x09c9,	// (0x0001eeae) calenote_swipe_1_pane_g_ParamLimits

0x09c9,	// (0x0001eeae) calenote_swipe_1_pane_g

0xe5dc,	// (0x0002cac1) calenote_swipe_1_pane_t1_ParamLimits

0xe5dc,	// (0x0002cac1) calenote_swipe_1_pane_t1

0xe206,	// (0x0002c6eb) calenote_swipe_2_pane_g1_ParamLimits

0xe206,	// (0x0002c6eb) calenote_swipe_2_pane_g1

0xe5fb,	// (0x0002cae0) calenote_swipe_2_pane_g2_ParamLimits

0xe5fb,	// (0x0002cae0) calenote_swipe_2_pane_g2

0x0001,

0x0aac,	// (0x0001ef91) calenote_swipe_2_pane_g_ParamLimits

0x0aac,	// (0x0001ef91) calenote_swipe_2_pane_g

0xe607,	// (0x0002caec) calenote_swipe_2_pane_t1_ParamLimits

0xe607,	// (0x0002caec) calenote_swipe_2_pane_t1

0x9a83,	// (0x00027f68) main_mup_navstr_pane

0x6000,	// (0x000244e5) main_mup3_pane_t7_ParamLimits

0x6000,	// (0x000244e5) main_mup3_pane_t7

0x199c,	// (0x0001fe81) main_mp4_pane_g6_ParamLimits

0x199c,	// (0x0001fe81) main_mp4_pane_g6

0x1c8f,	// (0x00020174) main_image3_pane_t4_ParamLimits

0x1c8f,	// (0x00020174) main_image3_pane_t4

0x8cdb,	// (0x000271c0) popup_navstr_preview_pane_ParamLimits

0x8cdb,	// (0x000271c0) popup_navstr_preview_pane

0x8ce7,	// (0x000271cc) scroll_navstr_pane_ParamLimits

0x8ce7,	// (0x000271cc) scroll_navstr_pane

0x9a83,	// (0x00027f68) bg_popup_preview_window_pane_cp04

0xe62e,	// (0x0002cb13) popup_navstr_preview_pane_t1

0x8cf3,	// (0x000271d8) scroll_navstr_pane_g1_ParamLimits

0x8cf3,	// (0x000271d8) scroll_navstr_pane_g1

0x8d00,	// (0x000271e5) scroll_navstr_pane_t1_ParamLimits

0x8d00,	// (0x000271e5) scroll_navstr_pane_t1

0xe5d3,	// (0x0002cab8) bg_button_pane_cp014

0xe5d3,	// (0x0002cab8) bg_button_pane_cp030

0x8451,	// (0x00026936) list_double_fisheye_pane_g4_ParamLimits

0x8451,	// (0x00026936) list_double_fisheye_pane_g4

0x845d,	// (0x00026942) list_double_fisheye_pane_g5_ParamLimits

0x845d,	// (0x00026942) list_double_fisheye_pane_g5

0xd548,	// (0x0002ba2d) sp_fs_scroll_pane_cp03

0xe33b,	// (0x0002c820) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe347,	// (0x0002c82c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x09e6,	// (0x0001eecb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe353,	// (0x0002c838) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe504,	// (0x0002c9e9) sp_fs_scroll_pane_cp02

0xa2f5,	// (0x000287da) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2f5,	// (0x000287da) popup_sp_fs_calendar_preview_list_single_pane

0x9a83,	// (0x00027f68) main_cam6_pano_pane

0x1350,	// (0x0001f835) main_mup3_pane_ParamLimits

0x9a83,	// (0x00027f68) main_phacti_pane

0x804b,	// (0x00026530) bg_button_pane_cp11

0x8063,	// (0x00026548) main_mobtv_info_pane_g2_ParamLimits

0x8063,	// (0x00026548) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002e0e2) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002e0e2) main_mobtv_info_pane_g

0x8215,	// (0x000266fa) sc_clock_pane_t5_ParamLimits

0x8215,	// (0x000266fa) sc_clock_pane_t5

0x82b8,	// (0x0002679d) main_radioblah_pane_g1_ParamLimits

0xe152,	// (0x0002c637) main_radioblah_pane_t3_ParamLimits

0xe152,	// (0x0002c637) main_radioblah_pane_t3

0xe16a,	// (0x0002c64f) main_radioblah_pane_t4_ParamLimits

0xe16a,	// (0x0002c64f) main_radioblah_pane_t4

0x82d6,	// (0x000267bb) main_radioblah_text_pane_ParamLimits

0x82d6,	// (0x000267bb) main_radioblah_text_pane

0x82e3,	// (0x000267c8) main_radioblah_info_pane_g1_ParamLimits

0x8378,	// (0x0002685d) main_radioblah_info_pane_t4_ParamLimits

0x8378,	// (0x0002685d) main_radioblah_info_pane_t4

0xa32c,	// (0x00028811) main_sp_fs_calendar_pane

0x8d12,	// (0x000271f7) main_phacti_pane_g1

0x8d1a,	// (0x000271ff) phacti_note_pane_ParamLimits

0x8d1a,	// (0x000271ff) phacti_note_pane

0xe645,	// (0x0002cb2a) phacti_term_pane_ParamLimits

0xe645,	// (0x0002cb2a) phacti_term_pane

0xe65a,	// (0x0002cb3f) phacti_note_pane_t1_ParamLimits

0xe65a,	// (0x0002cb3f) phacti_note_pane_t1

0xe671,	// (0x0002cb56) phacti_term_pane_g1

0xe679,	// (0x0002cb5e) phacti_term_pane_t1_ParamLimits

0xe679,	// (0x0002cb5e) phacti_term_pane_t1

0xe6a3,	// (0x0002cb88) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6ab,	// (0x0002cb90) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0ab6,	// (0x0001ef9b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6b3,	// (0x0002cb98) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6b3,	// (0x0002cb98) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6c9,	// (0x0002cbae) aid_popup_sp_fs_bg_corner_pane

0xc69a,	// (0x0002ab7f) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a83,	// (0x00027f68) popup_sp_fs_calendar_preview_bg_pane

0x8d30,	// (0x00027215) popup_sp_fs_calendar_preview_list_pane

0xc290,	// (0x0002a775) bg_main_sp_fs_cale_pane_ParamLimits

0xc290,	// (0x0002a775) bg_main_sp_fs_cale_pane

0xe6da,	// (0x0002cbbf) listscroll_cale_mrui_pane_ParamLimits

0xe6da,	// (0x0002cbbf) listscroll_cale_mrui_pane

0xe6ef,	// (0x0002cbd4) listscroll_sp_fs_schedule_track_pane

0xe6f8,	// (0x0002cbdd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6f8,	// (0x0002cbdd) main_sp_fs_ctrlbar_pane_cp01

0xe70b,	// (0x0002cbf0) main_sp_fs_ribbon_pane

0xe713,	// (0x0002cbf8) popup_sp_fs_cale_preview_window

0x8d85,	// (0x0002726a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d85,	// (0x0002726a) list_single_sp_fs_schedule_track_pane

0xcf89,	// (0x0002b46e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcf89,	// (0x0002b46e) bg_sp_fs_highlight_list_pane_cp03

0x8db3,	// (0x00027298) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8db3,	// (0x00027298) list_single_sp_fs_schedule_track_pane_g1

0x8dbf,	// (0x000272a4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dbf,	// (0x000272a4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcfb,	// (0x0002e1e0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcfb,	// (0x0002e1e0) list_single_sp_fs_schedule_track_pane_g

0x8dcb,	// (0x000272b0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dcb,	// (0x000272b0) list_single_sp_fs_schedule_track_pane_t1

0x8de3,	// (0x000272c8) sp_fs_schedule_track_pane_ParamLimits

0x8de3,	// (0x000272c8) sp_fs_schedule_track_pane

0xe725,	// (0x0002cc0a) sp_fs_schedule_track_pane_g1

0xe72d,	// (0x0002cc12) sp_fs_schedule_track_pane_g2

0xe735,	// (0x0002cc1a) sp_fs_schedule_track_pane_g3

0xe73d,	// (0x0002cc22) sp_fs_schedule_track_pane_g4

0xe745,	// (0x0002cc2a) sp_fs_schedule_track_pane_g5

0x0004,

0x0ac0,	// (0x0001efa5) sp_fs_schedule_track_pane_g

0xd1aa,	// (0x0002b68f) bg_sp_fs_schedule_viewer_highlight_g1

0xa614,	// (0x00028af9) bg_sp_fs_schedule_viewer_highlight_g2

0xd1b2,	// (0x0002b697) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ba,	// (0x0002b69f) bg_sp_fs_schedule_viewer_highlight_g4

0xd3ce,	// (0x0002b8b3) bg_sp_fs_schedule_viewer_highlight_g5

0xd1ca,	// (0x0002b6af) bg_sp_fs_schedule_viewer_highlight_g6

0xd1d2,	// (0x0002b6b7) bg_sp_fs_schedule_viewer_highlight_g7

0xd1da,	// (0x0002b6bf) bg_sp_fs_schedule_viewer_highlight_g8

0xa5f4,	// (0x00028ad9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd00,	// (0x0002e1e5) bg_sp_fs_schedule_viewer_highlight_g

0x9a83,	// (0x00027f68) bg_main_sp_fs_ribbon_pane

0x8df3,	// (0x000272d8) main_sp_fs_ribbon_pane_g1

0xe74d,	// (0x0002cc32) main_sp_fs_ribbon_pane_t1

0x8dfc,	// (0x000272e1) main_sp_fs_ribbon_pane_t2

0xe75c,	// (0x0002cc41) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd13,	// (0x0002e1f8) main_sp_fs_ribbon_pane_t

0xe76b,	// (0x0002cc50) main_sp_fs_ribbon_scheduler_pane

0xe773,	// (0x0002cc58) bg_main_sp_fs_ribbon_pane_g1

0xe77c,	// (0x0002cc61) bg_main_sp_fs_ribbon_pane_g2

0xe785,	// (0x0002cc6a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0ae5,	// (0x0001efca) bg_main_sp_fs_ribbon_pane_g

0xe78d,	// (0x0002cc72) main_sp_fs_ribbon_scheduler_pane_g1

0xe796,	// (0x0002cc7b) main_sp_fs_ribbon_scheduler_pane_g2

0xe79f,	// (0x0002cc84) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0aec,	// (0x0001efd1) main_sp_fs_ribbon_scheduler_pane_g

0xe7a8,	// (0x0002cc8d) list_cale_mrui_pane

0x8e0d,	// (0x000272f2) sp_fs_scroll_pane_cp07_ParamLimits

0x8e0d,	// (0x000272f2) sp_fs_scroll_pane_cp07

0x8e29,	// (0x0002730e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e29,	// (0x0002730e) bg_sp_fs_schedule_viewer_highlight

0xe7b5,	// (0x0002cc9a) list_single_sp_fs_schedule_track_pane_cp01

0xe7bd,	// (0x0002cca2) list_sp_fs_schedule_track_pane

0xe7c5,	// (0x0002ccaa) sp_fs_scroll_pane_cp06_ParamLimits

0xe7c5,	// (0x0002ccaa) sp_fs_scroll_pane_cp06

0xc69a,	// (0x0002ab7f) bgmain_sp_fs_calendar_pane_g1

0x8e36,	// (0x0002731b) list_single_cale_mrui_pane_ParamLimits

0x8e36,	// (0x0002731b) list_single_cale_mrui_pane

0xe7d7,	// (0x0002ccbc) list_single_cale_mrui_row_pane_ParamLimits

0xe7d7,	// (0x0002ccbc) list_single_cale_mrui_row_pane

0xe7e4,	// (0x0002ccc9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7e4,	// (0x0002ccc9) list_single_cale_mrui_row_pane_g1

0xe829,	// (0x0002cd0e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe829,	// (0x0002cd0e) list_single_cale_mrui_row_pane_t1

0x8e67,	// (0x0002734c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e67,	// (0x0002734c) list_single_cale_mrui_row_pane_t2

0xe83b,	// (0x0002cd20) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe83b,	// (0x0002cd20) list_single_cale_mrui_row_pane_t3

0xe86a,	// (0x0002cd4f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe86a,	// (0x0002cd4f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd1a,	// (0x0002e1ff) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd1a,	// (0x0002e1ff) list_single_cale_mrui_row_pane_t

0x8ecd,	// (0x000273b2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ecd,	// (0x000273b2) list_single_cmail_header_editor_pane_bg_cp01

0x8eef,	// (0x000273d4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8eef,	// (0x000273d4) list_single_cmail_header_editor_pane_bg_cp02

0x8f0b,	// (0x000273f0) main_radioblah_text_pane_t1_ParamLimits

0x8f0b,	// (0x000273f0) main_radioblah_text_pane_t1

0xe899,	// (0x0002cd7e) cam6_indi_pane_cp01

0xe8a1,	// (0x0002cd86) cam6_mode_pane_cp01

0xe8a9,	// (0x0002cd8e) cam6_pano_pane

0xe8b2,	// (0x0002cd97) cam6_zoom_pane_cp01

0xe8ba,	// (0x0002cd9f) cam6_pano_image_pane

0xe8c5,	// (0x0002cdaa) cam6_pano_pane_g1

0xdeb5,	// (0x0002c39a) cam6_pano_pane_g2

0xe8ce,	// (0x0002cdb3) cam6_pano_pane_g3

0xe8d7,	// (0x0002cdbc) cam6_pano_pane_g4

0xcccc,	// (0x0002b1b1) cam6_pano_pane_g5

0xe8e0,	// (0x0002cdc5) cam6_pano_pane_g6

0xe8ea,	// (0x0002cdcf) cam6_pano_pane_g7

0xe8f2,	// (0x0002cdd7) cam6_pano_pane_g8

0xe8fb,	// (0x0002cde0) cam6_pano_pane_g9

0x0008,

0xfd23,	// (0x0002e208) cam6_pano_pane_g

0x9a83,	// (0x00027f68) main_browser_tag_pane

0xe626,	// (0x0002cb0b) grid_navstr_albumart_pane

0xe906,	// (0x0002cdeb) cell_navstr_albumart_pane_ParamLimits

0xe906,	// (0x0002cdeb) cell_navstr_albumart_pane

0xaf9e,	// (0x00029483) cell_navstr_albumart_pane_g1

0xc0a1,	// (0x0002a586) cell_navstr_albumart_pane_g2

0xc0b1,	// (0x0002a596) cell_navstr_albumart_pane_g3

0xc0a9,	// (0x0002a58e) cell_navstr_albumart_pane_g4

0x0003,

0xfd36,	// (0x0002e21b) cell_navstr_albumart_pane_g

0x8f26,	// (0x0002740b) bt_list_pane_ParamLimits

0x8f26,	// (0x0002740b) bt_list_pane

0xe928,	// (0x0002ce0d) bt_list_pane_t1

0xe937,	// (0x0002ce1c) bt_list_pane_t2

0x0001,

0x0b1f,	// (0x0001f004) bt_list_pane_t

0x9a83,	// (0x00027f68) main_cale_prevew_pane

0x8f4a,	// (0x0002742f) popup_cale_preview_window_ParamLimits

0x8f4a,	// (0x0002742f) popup_cale_preview_window

0xa32c,	// (0x00028811) bg_popup_preview_window_pane_cp05_ParamLimits

0xa32c,	// (0x00028811) bg_popup_preview_window_pane_cp05

0xe946,	// (0x0002ce2b) list_cale_preview_pane_ParamLimits

0xe946,	// (0x0002ce2b) list_cale_preview_pane

0xe952,	// (0x0002ce37) list_double_cale_preview_pane_ParamLimits

0xe952,	// (0x0002ce37) list_double_cale_preview_pane

0xe964,	// (0x0002ce49) list_single_cale_preview_pane_ParamLimits

0xe964,	// (0x0002ce49) list_single_cale_preview_pane

0xe978,	// (0x0002ce5d) list_single_cale_preview_pane_g1

0xe980,	// (0x0002ce65) list_single_cale_preview_pane_t1_ParamLimits

0xe980,	// (0x0002ce65) list_single_cale_preview_pane_t1

0xe995,	// (0x0002ce7a) list_double_cale_preview_pane_g1

0xe99d,	// (0x0002ce82) list_double_cale_preview_pane_t1_ParamLimits

0xe99d,	// (0x0002ce82) list_double_cale_preview_pane_t1

0xe9b2,	// (0x0002ce97) list_double_cale_preview_pane_t2_ParamLimits

0xe9b2,	// (0x0002ce97) list_double_cale_preview_pane_t2

0x0001,

0x0b24,	// (0x0001f009) list_double_cale_preview_pane_t_ParamLimits

0x0b24,	// (0x0001f009) list_double_cale_preview_pane_t

0x9a83,	// (0x00027f68) main_ezdial_pane

0xa32c,	// (0x00028811) main_sp_fs_email_pane_ParamLimits

0x85a2,	// (0x00026a87) cmail_ddmenu_btn01_pane_ParamLimits

0x85a2,	// (0x00026a87) cmail_ddmenu_btn01_pane

0x85bf,	// (0x00026aa4) cmail_ddmenu_btn02_pane_ParamLimits

0x85bf,	// (0x00026aa4) cmail_ddmenu_btn02_pane

0x85dd,	// (0x00026ac2) cmail_ddmenu_btn03_pane_ParamLimits

0x85dd,	// (0x00026ac2) cmail_ddmenu_btn03_pane

0x860b,	// (0x00026af0) main_sp_fs_ctrlbar_pane_ParamLimits

0x8621,	// (0x00026b06) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bea,	// (0x000270cf) list_cmail_body_pane_ParamLimits

0xe51a,	// (0x0002c9ff) bg_button_pane_cp12

0xe52f,	// (0x0002ca14) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe52f,	// (0x0002ca14) list_single_cmail_header_detail_pane_g3

0xe578,	// (0x0002ca5d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe578,	// (0x0002ca5d) list_single_cmail_header_detail_pane_t2

0x0001,

0x0aa7,	// (0x0001ef8c) list_single_cmail_header_detail_pane_t_ParamLimits

0x0aa7,	// (0x0001ef8c) list_single_cmail_header_detail_pane_t

0xe68e,	// (0x0002cb73) phacti_term_pane_t2_ParamLimits

0xe68e,	// (0x0002cb73) phacti_term_pane_t2

0x0001,

0x0ab1,	// (0x0001ef96) phacti_term_pane_t_ParamLimits

0x0ab1,	// (0x0001ef96) phacti_term_pane_t

0xe9ca,	// (0x0002ceaf) aid_size_list_single_double

0x8f61,	// (0x00027446) popup_ezdial_listscroll_window

0x8f84,	// (0x00027469) popup_number_entry_window_cp01

0xa3bb,	// (0x000288a0) bg_popup_call_pane_cp09

0xe9d6,	// (0x0002cebb) ezdial_list_pane

0xe9de,	// (0x0002cec3) scroll_pane_cp23

0xc47d,	// (0x0002a962) bg_button_pane_cp028_ParamLimits

0xc47d,	// (0x0002a962) bg_button_pane_cp028

0x8f92,	// (0x00027477) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f92,	// (0x00027477) cmail_ddmenu_btn01_pane_g1

0x8fa4,	// (0x00027489) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fa4,	// (0x00027489) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x0002e224) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x0002e224) cmail_ddmenu_btn01_pane_g

0xe9e6,	// (0x0002cecb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e6,	// (0x0002cecb) cmail_ddmenu_btn01_pane_t1

0xc290,	// (0x0002a775) bg_button_pane_cp029_ParamLimits

0xc290,	// (0x0002a775) bg_button_pane_cp029

0x8fb0,	// (0x00027495) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fb0,	// (0x00027495) cmail_ddmenu_btn02_pane_g1

0x8fc8,	// (0x000274ad) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fc8,	// (0x000274ad) cmail_ddmenu_btn02_pane_t1

0xcf89,	// (0x0002b46e) bg_button_pane_cp031_ParamLimits

0xcf89,	// (0x0002b46e) bg_button_pane_cp031

0x8fb0,	// (0x00027495) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fb0,	// (0x00027495) cmail_ddmenu_btn03_pane_g1

0x8fc8,	// (0x000274ad) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fc8,	// (0x000274ad) cmail_ddmenu_btn03_pane_t1

0x688c,	// (0x00024d71) cell_dialer2_keypad_pane_t1_ParamLimits

0x68a6,	// (0x00024d8b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x68a6,	// (0x00024d8b) cell_dialer2_keypad_pane_t1_copy1

0x7ed0,	// (0x000263b5) ncimui_group_button_pane

0xa32c,	// (0x00028811) main_sp_fs_calendar_pane_ParamLimits

0x8c11,	// (0x000270f6) list_single_cmail_header_caption_pane_ParamLimits

0xe6d1,	// (0x0002cbb6) aid_recal_txt_sm_pane

0x9a83,	// (0x00027f68) mian_recal_day_pane

0xe713,	// (0x0002cbf8) popup_sp_fs_cale_preview_window_ParamLimits

0xe9fb,	// (0x0002cee0) list_recal_day_pane

0xea3d,	// (0x0002cf22) list_single_recal_day_pane_ParamLimits

0xea3d,	// (0x0002cf22) list_single_recal_day_pane

0xea4f,	// (0x0002cf34) list_single_recal_day_pane_g1_ParamLimits

0xea4f,	// (0x0002cf34) list_single_recal_day_pane_g1

0xea5b,	// (0x0002cf40) list_single_recal_day_pane_g2_ParamLimits

0xea5b,	// (0x0002cf40) list_single_recal_day_pane_g2

0xea6b,	// (0x0002cf50) list_single_recal_day_pane_g3_ParamLimits

0xea6b,	// (0x0002cf50) list_single_recal_day_pane_g3

0x8fec,	// (0x000274d1) list_single_recal_day_pane_g4_ParamLimits

0x8fec,	// (0x000274d1) list_single_recal_day_pane_g4

0xea77,	// (0x0002cf5c) list_single_recal_day_pane_g5_ParamLimits

0xea77,	// (0x0002cf5c) list_single_recal_day_pane_g5

0xea87,	// (0x0002cf6c) list_single_recal_day_pane_g6_ParamLimits

0xea87,	// (0x0002cf6c) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x0002e233) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x0002e233) list_single_recal_day_pane_g

0xea9b,	// (0x0002cf80) list_single_recal_day_pane_t1

0xeaad,	// (0x0002cf92) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x0002e23e) list_single_recal_day_pane_t

0x900c,	// (0x000274f1) ncimui_query_button_pane_ParamLimits

0x900c,	// (0x000274f1) ncimui_query_button_pane

0x901c,	// (0x00027501) ncimui_query_button_pane_t1_ParamLimits

0x901c,	// (0x00027501) ncimui_query_button_pane_t1

0xeabf,	// (0x0002cfa4) ncimui_query_button_pane_t2_ParamLimits

0xeabf,	// (0x0002cfa4) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x0002e243) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x0002e243) ncimui_query_button_pane_t

0x902f,	// (0x00027514) query_button_pane_ParamLimits

0x902f,	// (0x00027514) query_button_pane

0x9a83,	// (0x00027f68) bg_button_pane_cp0028

0xead2,	// (0x0002cfb7) query_button_pane_t1

0x136c,	// (0x0001f851) main_tport_pane_ParamLimits

0x8af3,	// (0x00026fd8) bg_popup_window_pane_cp01_ParamLimits

0x8af3,	// (0x00026fd8) bg_popup_window_pane_cp01

0x8b01,	// (0x00026fe6) heading_pane_cp08_ParamLimits

0x8b01,	// (0x00026fe6) heading_pane_cp08

0x8b0f,	// (0x00026ff4) heading_pane_cp07_ParamLimits

0x8b0f,	// (0x00026ff4) heading_pane_cp07

0x8b7e,	// (0x00027063) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0002e1cd) cell_tport_appsw_pane_g

0x4c39,	// (0x0002311e) input_candi_list_open_g1

0xa7df,	// (0x00028cc4) list_cale_time_pane_g6_ParamLimits

0xa7df,	// (0x00028cc4) list_cale_time_pane_g6

0x5aa2,	// (0x00023f87) aid_size_touch_calib_1_ParamLimits

0x5aa2,	// (0x00023f87) aid_size_touch_calib_1

0x5aae,	// (0x00023f93) aid_size_touch_calib_2_ParamLimits

0x5aae,	// (0x00023f93) aid_size_touch_calib_2

0x5abc,	// (0x00023fa1) aid_size_touch_calib_3_ParamLimits

0x5abc,	// (0x00023fa1) aid_size_touch_calib_3

0x5acc,	// (0x00023fb1) aid_size_touch_calib_4_ParamLimits

0x5acc,	// (0x00023fb1) aid_size_touch_calib_4

0x5ada,	// (0x00023fbf) main_touch_calib_button_group_pane_ParamLimits

0x5ada,	// (0x00023fbf) main_touch_calib_button_group_pane

0x5ae8,	// (0x00023fcd) main_touch_calib_pane_g1_ParamLimits

0x5af4,	// (0x00023fd9) main_touch_calib_pane_g2_ParamLimits

0x5b00,	// (0x00023fe5) main_touch_calib_pane_g3_ParamLimits

0x5b0c,	// (0x00023ff1) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002dc36) main_touch_calib_pane_g_ParamLimits

0x5b18,	// (0x00023ffd) main_touch_calib_pane_t1_ParamLimits

0x5b31,	// (0x00024016) main_touch_calib_pane_t2_ParamLimits

0x5b4a,	// (0x0002402f) main_touch_calib_pane_t3_ParamLimits

0x5b60,	// (0x00024045) main_touch_calib_pane_t4_ParamLimits

0x5b76,	// (0x0002405b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002dc3f) main_touch_calib_pane_t_ParamLimits

0xca6e,	// (0x0002af53) list_single_fp_cale_pane_g3_ParamLimits

0xca6e,	// (0x0002af53) list_single_fp_cale_pane_g3

0x1350,	// (0x0001f835) bg_button_pane_cp012_ParamLimits

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp03_ParamLimits

0x2298,	// (0x0002077d) cell_vitu2_function_top_pane_g1_ParamLimits

0x1350,	// (0x0001f835) bg_vkb2_func_pane_cp04_ParamLimits

0x7e58,	// (0x0002633d) main_ncimui_button_group_pane_ParamLimits

0x7e58,	// (0x0002633d) main_ncimui_button_group_pane

0x7ebe,	// (0x000263a3) main_ncimui_pane_t3_ParamLimits

0x7ebe,	// (0x000263a3) main_ncimui_pane_t3

0xe63c,	// (0x0002cb21) phacti_button_group_pane

0xe9ca,	// (0x0002ceaf) aid_size_list_single_double_ParamLimits

0x8f61,	// (0x00027446) popup_ezdial_listscroll_window_ParamLimits

0x8f84,	// (0x00027469) popup_number_entry_window_cp01_ParamLimits

0x903c,	// (0x00027521) phacti_button_pane_ParamLimits

0x903c,	// (0x00027521) phacti_button_pane

0x9a83,	// (0x00027f68) bg_button_pane_cp14

0xeae0,	// (0x0002cfc5) phacti_button_pane_t1

0x904d,	// (0x00027532) main_touch_calib_button_pane_ParamLimits

0x904d,	// (0x00027532) main_touch_calib_button_pane

0xa1df,	// (0x000286c4) bg_button_pane_cp18_ParamLimits

0xa1df,	// (0x000286c4) bg_button_pane_cp18

0xeaee,	// (0x0002cfd3) main_touch_calib_button_pane_t1_ParamLimits

0xeaee,	// (0x0002cfd3) main_touch_calib_button_pane_t1

0xeb04,	// (0x0002cfe9) main_touch_calib_button_pane_t2_ParamLimits

0xeb04,	// (0x0002cfe9) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x0002e248) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x0002e248) main_touch_calib_button_pane_t

0x9a83,	// (0x00027f68) cell_ncimui_button_pane

0x9a83,	// (0x00027f68) bg_button_pane_cp032

0xeb22,	// (0x0002d007) cell_ncimui_button_pane_t1

0x1ba2,	// (0x00020087) image3_infobar_pane_ParamLimits

0x1ba2,	// (0x00020087) image3_infobar_pane

0x8237,	// (0x0002671c) fs_bigclock_status_pane_ParamLimits

0x8237,	// (0x0002671c) fs_bigclock_status_pane

0x8244,	// (0x00026729) main_fs_bigclock_clock_pane_ParamLimits

0x8244,	// (0x00026729) main_fs_bigclock_clock_pane

0x825e,	// (0x00026743) main_fs_bigclock_indi_pane_ParamLimits

0x825e,	// (0x00026743) main_fs_bigclock_indi_pane

0x8286,	// (0x0002676b) main_fs_bigclock_swipe_pane_ParamLimits

0x8286,	// (0x0002676b) main_fs_bigclock_swipe_pane

0x9a83,	// (0x00027f68) main_fs_clock_dumped_data

0xdfc2,	// (0x0002c4a7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfc2,	// (0x0002c4a7) list_single_fs_bigclock_indicator_pane_g1

0xdfde,	// (0x0002c4c3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfde,	// (0x0002c4c3) list_single_fs_bigclock_indicator_pane_g2

0xdff8,	// (0x0002c4dd) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdff8,	// (0x0002c4dd) list_single_fs_bigclock_indicator_pane_g3

0xe012,	// (0x0002c4f7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe012,	// (0x0002c4f7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x097a,	// (0x0001ee5f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x097a,	// (0x0001ee5f) list_single_fs_bigclock_indicator_pane_g

0xe03d,	// (0x0002c522) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe03d,	// (0x0002c522) list_single_fs_bigclock_indicator_pane_t1

0xe065,	// (0x0002c54a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe065,	// (0x0002c54a) list_single_fs_bigclock_indicator_pane_t2

0xe08d,	// (0x0002c572) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe08d,	// (0x0002c572) list_single_fs_bigclock_indicator_pane_t3

0xe0b5,	// (0x0002c59a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0b5,	// (0x0002c59a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0985,	// (0x0001ee6a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0985,	// (0x0001ee6a) list_single_fs_bigclock_indicator_pane_t

0xeb30,	// (0x0002d015) image3_infobar_fav_pane_ParamLimits

0xeb30,	// (0x0002d015) image3_infobar_fav_pane

0xeb40,	// (0x0002d025) image3_infobar_loc_pane_ParamLimits

0xeb40,	// (0x0002d025) image3_infobar_loc_pane

0xeb54,	// (0x0002d039) image3_infobar_time_pane_ParamLimits

0xeb54,	// (0x0002d039) image3_infobar_time_pane

0xc69a,	// (0x0002ab7f) image3_infobar_time_pane_g1

0xeb64,	// (0x0002d049) image3_infobar_time_pane_t1

0xc69a,	// (0x0002ab7f) image3_infobar_loc_pane_g1

0xeb9f,	// (0x0002d084) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x0002e24d) image3_infobar_loc_pane_g

0xeba7,	// (0x0002d08c) image3_infobar_loc_pane_t1

0xc69a,	// (0x0002ab7f) image3_infobar_fav_pane_g1

0xebb5,	// (0x0002d09a) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x0002e252) image3_infobar_fav_pane_g

0xebbd,	// (0x0002d0a2) fs_bigclock_status_battery_pane

0xebc6,	// (0x0002d0ab) fs_bigclock_status_signal_pane

0xebcf,	// (0x0002d0b4) fs_bigclock_status_title_pane

0xebd8,	// (0x0002d0bd) fs_bigclock_status_signal_pane_g1

0xebe1,	// (0x0002d0c6) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b5c,	// (0x0001f041) fs_bigclock_status_signal_pane_g

0xebe9,	// (0x0002d0ce) fs_bigclock_status_battery_pane_g1

0xebf2,	// (0x0002d0d7) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b61,	// (0x0001f046) fs_bigclock_status_battery_pane_g

0xebfa,	// (0x0002d0df) fs_bigclock_status_title_pane_t1

0xc69a,	// (0x0002ab7f) main_fs_bigclock_clock_pane_g1

0xec08,	// (0x0002d0ed) main_fs_bigclock_clock_pane_g2

0xec11,	// (0x0002d0f6) main_fs_bigclock_clock_pane_g3

0xec11,	// (0x0002d0f6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd72,	// (0x0002e257) main_fs_bigclock_clock_pane_g

0xec19,	// (0x0002d0fe) main_fs_bigclock_clock_pane_t1

0x905d,	// (0x00027542) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd7b,	// (0x0002e260) main_fs_bigclock_clock_pane_t

0xec27,	// (0x0002d10c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec27,	// (0x0002d10c) list_single_fs_bigclock_indicator_pane

0xec38,	// (0x0002d11d) list_single_fs_bigclock_pane_ParamLimits

0xec38,	// (0x0002d11d) list_single_fs_bigclock_pane

0xec5e,	// (0x0002d143) main_fs_bigclock_indicator_pane_t1

0xec6d,	// (0x0002d152) list_single_fs_bigclock_pane_g1

0xec75,	// (0x0002d15a) list_single_fs_bigclock_pane_t1

0xc69a,	// (0x0002ab7f) main_fs_bigclock_swipe_pane_g1

0xecb8,	// (0x0002d19d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd87,	// (0x0002e26c) main_fs_bigclock_swipe_pane_g

0xecc0,	// (0x0002d1a5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc0,	// (0x0002d1a5) main_fs_bigclock_swipe_pane_t1

0x4573,	// (0x00022a58) call_type_pane_ParamLimits

0x9a83,	// (0x00027f68) main_btmg_pane

0xe810,	// (0x0002ccf5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe810,	// (0x0002ccf5) list_single_cale_mrui_row_pane_g2

0x0002,

0x0af3,	// (0x0001efd8) list_single_cale_mrui_row_pane_g_ParamLimits

0x0af3,	// (0x0001efd8) list_single_cale_mrui_row_pane_g

0xea24,	// (0x0002cf09) list_recal_vselct_arw_lo_pane

0xea2c,	// (0x0002cf11) list_recal_vselct_arw_up_pane

0xea34,	// (0x0002cf19) list_recal_vselct_pane

0x90ae,	// (0x00027593) btmg_button_pane

0x90ba,	// (0x0002759f) main_btmg_pane_g1

0x9a83,	// (0x00027f68) bg_button_pane_cp044

0xecdd,	// (0x0002d1c2) btmg_button_pane_t1

0xc27c,	// (0x0002a761) aid_listscroll_gen

0xa32c,	// (0x00028811) main_cntbar_detail_pane

0xe4fc,	// (0x0002c9e1) list_cmail_folder_pane

0xd548,	// (0x0002ba2d) sp_fs_scroll_pane_cp03_ParamLimits

0x8c11,	// (0x000270f6) list_single_fs_dyc_pane_cp01_ParamLimits

0x8c11,	// (0x000270f6) list_single_fs_dyc_pane_cp01

0xeceb,	// (0x0002d1d0) aid_size_cmail_indent

0xecf4,	// (0x0002d1d9) list_single_dyc_row_pane_cp01

0x90e2,	// (0x000275c7) cntbar_detail_list_pane_ParamLimits

0x90e2,	// (0x000275c7) cntbar_detail_list_pane

0x911c,	// (0x00027601) main_cntbar_detail_cont_pane_ParamLimits

0x911c,	// (0x00027601) main_cntbar_detail_cont_pane

0x448a,	// (0x0002296f) scroll_pane_cp032_ParamLimits

0x448a,	// (0x0002296f) scroll_pane_cp032

0x9128,	// (0x0002760d) cntbar_detail_list_event_pane_ParamLimits

0x9128,	// (0x0002760d) cntbar_detail_list_event_pane

0x90ee,	// (0x000275d3) cntbar_detail_list_shct_pane

0xa662,	// (0x00028b47) aid_list_gen

0xecfd,	// (0x0002d1e2) aid_scroll

0xed06,	// (0x0002d1eb) aid_size_touch_scroll_bar

0x766a,	// (0x00025b4f) aid_list_double

0xed0f,	// (0x0002d1f4) aid_list_single

0x7658,	// (0x00025b3d) aid_list_single_lg

0xed18,	// (0x0002d1fd) aid_list_z_g_a_sm

0xed20,	// (0x0002d205) aid_list_z_g_d

0xed28,	// (0x0002d20d) aid_txt_z_prm

0x913c,	// (0x00027621) aid_txt_z_prm_cp01

0x914a,	// (0x0002762f) aid_txt_z_sec

0x9158,	// (0x0002763d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9158,	// (0x0002763d) main_cntbar_detail_cont_pane_g1

0x9165,	// (0x0002764a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9165,	// (0x0002764a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd8c,	// (0x0002e271) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd8c,	// (0x0002e271) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0002d21b) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0002d229) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0002d237) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b8a,	// (0x0001f06f) main_cntbar_detail_cont_pane_t

0x9171,	// (0x00027656) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9171,	// (0x00027656) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0002d245) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0002d24e) cntbar_detail_list_shct_pane_g2

0x0001,

0x0b91,	// (0x0001f076) cntbar_detail_list_shct_pane_g

0x9185,	// (0x0002766a) cntbar_detail_list_event_pane_g1_ParamLimits

0x9185,	// (0x0002766a) cntbar_detail_list_event_pane_g1

0x9191,	// (0x00027676) cntbar_detail_list_event_pane_g2_ParamLimits

0x9191,	// (0x00027676) cntbar_detail_list_event_pane_g2

0x0005,

0xfd91,	// (0x0002e276) cntbar_detail_list_event_pane_g_ParamLimits

0xfd91,	// (0x0002e276) cntbar_detail_list_event_pane_g

0x91fd,	// (0x000276e2) cntbar_detail_list_event_pane_t1_ParamLimits

0x91fd,	// (0x000276e2) cntbar_detail_list_event_pane_t1

0x9212,	// (0x000276f7) cntbar_detail_list_event_pane_t2_ParamLimits

0x9212,	// (0x000276f7) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9e,	// (0x0002e283) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9e,	// (0x0002e283) cntbar_detail_list_event_pane_t

0xc69a,	// (0x0002ab7f) cell_cntbar_detail_list_shct_pane_g1

0xadfd,	// (0x000292e2) navi_pane_mv_g3

0xa32c,	// (0x00028811) main_cntbar_detail_pane_ParamLimits

0x9a83,	// (0x00027f68) main_notif_wgt_pane

0x18e3,	// (0x0001fdc8) aid_tch_main_mp4_pane_g4

0x1b18,	// (0x0001fffd) popup_slider_window_cp02

0xea1a,	// (0x0002ceff) list_recal_day_event_pane

0x90c2,	// (0x000275a7) cntbar_detail_btn_pane_ParamLimits

0x90c2,	// (0x000275a7) cntbar_detail_btn_pane

0x90d2,	// (0x000275b7) cntbar_detail_btn_pane_cp01_ParamLimits

0x90d2,	// (0x000275b7) cntbar_detail_btn_pane_cp01

0x90ee,	// (0x000275d3) cntbar_detail_list_shct_pane_ParamLimits

0x90fa,	// (0x000275df) cntbar_detail_pane_g1_ParamLimits

0x90fa,	// (0x000275df) cntbar_detail_pane_g1

0x9106,	// (0x000275eb) cntbar_detail_pane_t1_ParamLimits

0x9106,	// (0x000275eb) cntbar_detail_pane_t1

0x919d,	// (0x00027682) cntbar_detail_list_event_pane_g3_ParamLimits

0x919d,	// (0x00027682) cntbar_detail_list_event_pane_g3

0x91b5,	// (0x0002769a) cntbar_detail_list_event_pane_g4_ParamLimits

0x91b5,	// (0x0002769a) cntbar_detail_list_event_pane_g4

0x91cd,	// (0x000276b2) cntbar_detail_list_event_pane_g5_ParamLimits

0x91cd,	// (0x000276b2) cntbar_detail_list_event_pane_g5

0x91e5,	// (0x000276ca) cntbar_detail_list_event_pane_g6_ParamLimits

0x91e5,	// (0x000276ca) cntbar_detail_list_event_pane_g6

0x9227,	// (0x0002770c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9227,	// (0x0002770c) cntbar_detail_list_event_pane_t3

0x9239,	// (0x0002771e) popup_notif_wgt_window_ParamLimits

0x9239,	// (0x0002771e) popup_notif_wgt_window

0x9249,	// (0x0002772e) popup_submenu_window_cp01_ParamLimits

0x9249,	// (0x0002772e) popup_submenu_window_cp01

0xa3bb,	// (0x000288a0) bg_popup_window_pane_cp10

0xed72,	// (0x0002d257) listscroll_notif_wgt_pane

0xed83,	// (0x0002d268) list_notif_wgt_window

0xed8c,	// (0x0002d271) scroll_pane_cp033

0x9257,	// (0x0002773c) list_notif_wgt_row_pane_ParamLimits

0x9257,	// (0x0002773c) list_notif_wgt_row_pane

0xed95,	// (0x0002d27a) aid_size_list_notif_wgt_del

0xeda2,	// (0x0002d287) list_notif_wgt_row_pane_g1

0xedae,	// (0x0002d293) list_notif_wgt_row_pane_g2

0xedc2,	// (0x0002d2a7) list_notif_wgt_row_pane_g3

0x0002,

0x0baa,	// (0x0001f08f) list_notif_wgt_row_pane_g

0xedcf,	// (0x0002d2b4) list_notif_wgt_row_pane_t1

0xede5,	// (0x0002d2ca) list_notif_wgt_row_pane_t2

0xedf7,	// (0x0002d2dc) list_notif_wgt_row_pane_t3

0x0002,

0x0bb1,	// (0x0001f096) list_notif_wgt_row_pane_t

0xd3e8,	// (0x0002b8cd) list_recal_day_event_pane_g1

0xee09,	// (0x0002d2ee) list_recal_day_event_pane_t1

0x9a83,	// (0x00027f68) bg_button_pane_cp045

0xee18,	// (0x0002d2fd) cntbar_detail_btn_pane_t1

0xc290,	// (0x0002a775) main_callh_pane_ParamLimits

0xc290,	// (0x0002a775) main_callh_pane

0x9a83,	// (0x00027f68) main_coverflow0_pane

0x9a83,	// (0x00027f68) main_wgtman_pane

0x829e,	// (0x00026783) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x829e,	// (0x00026783) main_fs_bigclock_unlock_btn_pane

0x8b76,	// (0x0002705b) bg_button_pane_cp16

0x8b86,	// (0x0002706b) cell_tport_appsw_pane_g3

0x9269,	// (0x0002774e) cf0_flow_pane_ParamLimits

0x9269,	// (0x0002774e) cf0_flow_pane

0xee26,	// (0x0002d30b) listscroll_cf0_pane

0xee31,	// (0x0002d316) main_cf0_pane_g1

0x9278,	// (0x0002775d) main_cf0_pane_t1_ParamLimits

0x9278,	// (0x0002775d) main_cf0_pane_t1

0x928c,	// (0x00027771) main_cf0_pane_t2_ParamLimits

0x928c,	// (0x00027771) main_cf0_pane_t2

0x0001,

0xfda5,	// (0x0002e28a) main_cf0_pane_t_ParamLimits

0xfda5,	// (0x0002e28a) main_cf0_pane_t

0xee43,	// (0x0002d328) scroll_pane_cp11

0x92a0,	// (0x00027785) cf0_flow_pane_g1

0x92a8,	// (0x0002778d) cf0_flow_pane_g2

0x0001,

0xfdaa,	// (0x0002e28f) cf0_flow_pane_g

0x92b0,	// (0x00027795) cf0_flow_pane_t1

0x9a83,	// (0x00027f68) main_call6_pane

0x9a83,	// (0x00027f68) main_calllock_pane

0x92be,	// (0x000277a3) call6_btn_grp_pane_ParamLimits

0x92be,	// (0x000277a3) call6_btn_grp_pane

0x92cd,	// (0x000277b2) call6_pane_g1_ParamLimits

0x92cd,	// (0x000277b2) call6_pane_g1

0x92dc,	// (0x000277c1) popup_call6_1st_window_ParamLimits

0x92dc,	// (0x000277c1) popup_call6_1st_window

0x92ea,	// (0x000277cf) popup_call6_2nd_window_ParamLimits

0x92ea,	// (0x000277cf) popup_call6_2nd_window

0x92f8,	// (0x000277dd) cell_call6_btn_pane_ParamLimits

0x92f8,	// (0x000277dd) cell_call6_btn_pane

0xa3bb,	// (0x000288a0) bg_popup_call2_in_pane_cp03

0xee4e,	// (0x0002d333) popup_call6_1st_window_g1

0xee56,	// (0x0002d33b) popup_call6_1st_window_g2

0xee5e,	// (0x0002d343) popup_call6_1st_window_g3

0x0002,

0x0bc7,	// (0x0001f0ac) popup_call6_1st_window_g

0xee66,	// (0x0002d34b) popup_call6_1st_window_t1

0xee75,	// (0x0002d35a) popup_call6_1st_window_t2

0xee85,	// (0x0002d36a) popup_call6_1st_window_t3

0x0002,

0x0bce,	// (0x0001f0b3) popup_call6_1st_window_t

0xa3bb,	// (0x000288a0) bg_popup_call2_in_pane_cp04

0xee4e,	// (0x0002d333) popup_call6_2nd_window_g1

0xee56,	// (0x0002d33b) popup_call6_2nd_window_g2

0xee5e,	// (0x0002d343) popup_call6_2nd_window_g3

0x0002,

0x0bc7,	// (0x0001f0ac) popup_call6_2nd_window_g

0xee66,	// (0x0002d34b) popup_call6_2nd_window_t1

0x9a83,	// (0x00027f68) bg_button_pane_cp15

0xee95,	// (0x0002d37a) cell_call6_btn_pane_g1

0xee9e,	// (0x0002d383) cell_call6_btn_pane_t1

0x9307,	// (0x000277ec) listscroll_wgtman_pane_ParamLimits

0x9307,	// (0x000277ec) listscroll_wgtman_pane

0x9323,	// (0x00027808) wgtman_btn_pane_ParamLimits

0x9323,	// (0x00027808) wgtman_btn_pane

0xac02,	// (0x000290e7) aid_scroll_copy1

0xeead,	// (0x0002d392) list_wgtman_pane

0x9358,	// (0x0002783d) wgtman_btn_pane_g1_ParamLimits

0x9358,	// (0x0002783d) wgtman_btn_pane_g1

0x9380,	// (0x00027865) wgtman_btn_pane_t1_ParamLimits

0x9380,	// (0x00027865) wgtman_btn_pane_t1

0xeeb7,	// (0x0002d39c) wgtman_btn_pane_t2_ParamLimits

0xeeb7,	// (0x0002d39c) wgtman_btn_pane_t2

0x0001,

0xfdaf,	// (0x0002e294) wgtman_btn_pane_t_ParamLimits

0xfdaf,	// (0x0002e294) wgtman_btn_pane_t

0x93b7,	// (0x0002789c) listrow_wgtman_pane_ParamLimits

0x93b7,	// (0x0002789c) listrow_wgtman_pane

0x93d3,	// (0x000278b8) listrow_wgtman_pane_g1

0x93e0,	// (0x000278c5) listrow_wgtman_pane_g2

0x0001,

0xfdb4,	// (0x0002e299) listrow_wgtman_pane_g

0x93fe,	// (0x000278e3) listrow_wgtman_pane_t1

0x9416,	// (0x000278fb) listrow_wgtman_pane_t2

0x0001,

0xfdb9,	// (0x0002e29e) listrow_wgtman_pane_t

0x943c,	// (0x00027921) wait_bar_pane_cp09

0xeece,	// (0x0002d3b3) main_calllock_btn_pane

0xeed8,	// (0x0002d3bd) main_calllock_pane_g1

0x9a83,	// (0x00027f68) bg_button_pane_cp17

0xeee3,	// (0x0002d3c8) main_calllock_btn_pane_g1

0xeeec,	// (0x0002d3d1) main_calllock_btn_pane_t1

0x9a83,	// (0x00027f68) main_dialer3_pane

0x9a83,	// (0x00027f68) main_fmrd2_pane

0xc69a,	// (0x0002ab7f) main_fs_bigclock_unlock_btn_pane_g1

0xef03,	// (0x0002d3e8) main_fs_bigclock_unlock_btn_pane_t1

0x944e,	// (0x00027933) area_fmrd2_info_pane_ParamLimits

0x944e,	// (0x00027933) area_fmrd2_info_pane

0x945c,	// (0x00027941) area_fmrd2_visual_pane_ParamLimits

0x945c,	// (0x00027941) area_fmrd2_visual_pane

0x946a,	// (0x0002794f) fmrd2_indi_pane_ParamLimits

0x946a,	// (0x0002794f) fmrd2_indi_pane

0x9477,	// (0x0002795c) area_fmrd2_visual_pane_g1

0x947f,	// (0x00027964) area_fmrd2_visual_pane_t1

0x948f,	// (0x00027974) area_fmrd2_visual_pane_t2

0x949f,	// (0x00027984) area_fmrd2_visual_pane_t3

0x0002,

0xfdc3,	// (0x0002e2a8) area_fmrd2_visual_pane_t

0x94af,	// (0x00027994) area_fmrd2_info_pane_g1

0x94b7,	// (0x0002799c) area_fmrd2_info_pane_t1

0x94c7,	// (0x000279ac) area_fmrd2_info_pane_t2

0x94d7,	// (0x000279bc) area_fmrd2_info_pane_t3

0x94e7,	// (0x000279cc) area_fmrd2_info_pane_t4

0x0003,

0xfdca,	// (0x0002e2af) area_fmrd2_info_pane_t

0x94f5,	// (0x000279da) fmrd2_indi_pane_t1

0x9505,	// (0x000279ea) fmrd2_indi_pane_t2

0x9515,	// (0x000279fa) fmrd2_indi_pane_t3

0x0002,

0xfdd3,	// (0x0002e2b8) fmrd2_indi_pane_t

0xe021,	// (0x0002c506) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe021,	// (0x0002c506) list_single_fs_bigclock_indicator_pane_g5

0xe0d1,	// (0x0002c5b6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0d1,	// (0x0002c5b6) list_single_fs_bigclock_indicator_pane_t5

0x8d38,	// (0x0002721d) aid_cell_bcale_month_pane_ParamLimits

0x8d38,	// (0x0002721d) aid_cell_bcale_month_pane

0x8d56,	// (0x0002723b) bcale_month_pane_ParamLimits

0x8d56,	// (0x0002723b) bcale_month_pane

0x8d74,	// (0x00027259) bcale_preview_pane_ParamLimits

0x8d74,	// (0x00027259) bcale_preview_pane

0xec75,	// (0x0002d15a) list_single_fs_bigclock_pane_t1_ParamLimits

0xec94,	// (0x0002d179) list_single_fs_bigclock_pane_t2_ParamLimits

0xec94,	// (0x0002d179) list_single_fs_bigclock_pane_t2

0x0001,

0x0b7b,	// (0x0001f060) list_single_fs_bigclock_pane_t_ParamLimits

0x0b7b,	// (0x0001f060) list_single_fs_bigclock_pane_t

0xeefb,	// (0x0002d3e0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdbe,	// (0x0002e2a3) main_fs_bigclock_unlock_btn_pane_g

0x9523,	// (0x00027a08) aid_dia3_key_size_ParamLimits

0x9523,	// (0x00027a08) aid_dia3_key_size

0x952f,	// (0x00027a14) aid_dia3_listrow_size_ParamLimits

0x952f,	// (0x00027a14) aid_dia3_listrow_size

0x953f,	// (0x00027a24) dia3_keypad_fun_pane_ParamLimits

0x953f,	// (0x00027a24) dia3_keypad_fun_pane

0x9551,	// (0x00027a36) dia3_keypad_num_pane_ParamLimits

0x9551,	// (0x00027a36) dia3_keypad_num_pane

0x9563,	// (0x00027a48) dia3_listscroll_pane_ParamLimits

0x9563,	// (0x00027a48) dia3_listscroll_pane

0x9571,	// (0x00027a56) dia3_numentry_pane_ParamLimits

0x9571,	// (0x00027a56) dia3_numentry_pane

0xef11,	// (0x0002d3f6) dia3_list_pane

0xef1c,	// (0x0002d401) scroll_pane_cp12

0x9a83,	// (0x00027f68) bg_dia3_numentry_pane

0x957f,	// (0x00027a64) dia3_numentry_pane_t1

0x958e,	// (0x00027a73) cell_dia3_key_num_pane

0x9596,	// (0x00027a7b) cell_dia3_key0_fun_pane_ParamLimits

0x9596,	// (0x00027a7b) cell_dia3_key0_fun_pane

0x95a3,	// (0x00027a88) cell_dia3_key1_fun_pane_ParamLimits

0x95a3,	// (0x00027a88) cell_dia3_key1_fun_pane

0x95b0,	// (0x00027a95) dia3_listrow_pane

0xdd2f,	// (0x0002c214) bg_dia3_numentry_pane_g1

0x9a83,	// (0x00027f68) bg_button_pane_cp21

0xef27,	// (0x0002d40c) cell_dia3_key_num_pane_t1

0xef35,	// (0x0002d41a) cell_dia3_key_num_pane_t2

0xef44,	// (0x0002d429) cell_dia3_key_num_pane_t3

0xef53,	// (0x0002d438) cell_dia3_key_num_pane_t4

0x0003,

0x0c00,	// (0x0001f0e5) cell_dia3_key_num_pane_t

0x9a83,	// (0x00027f68) bg_button_pane_cp19

0x95bd,	// (0x00027aa2) cell_dia3_key0_fun_pane_g1

0x9a83,	// (0x00027f68) bg_button_pane_cp20

0x95c5,	// (0x00027aaa) cell_dia3_key1_fun_pane_g1

0x95cd,	// (0x00027ab2) area_left_week_number_pane

0x95e0,	// (0x00027ac5) area_top_day_name_pane

0x95ee,	// (0x00027ad3) frame_month_view_pane

0xef62,	// (0x0002d447) grid_month_view_pane

0x9603,	// (0x00027ae8) cell_top_day_name_pane_ParamLimits

0x9603,	// (0x00027ae8) cell_top_day_name_pane

0x961d,	// (0x00027b02) cell_area_left_week_number_pane_ParamLimits

0x961d,	// (0x00027b02) cell_area_left_week_number_pane

0x9640,	// (0x00027b25) cell_month_view_pane_ParamLimits

0x9640,	// (0x00027b25) cell_month_view_pane

0xef70,	// (0x0002d455) frm_month_g1

0x966c,	// (0x00027b51) frm_month_g2

0x967d,	// (0x00027b62) frm_month_g3

0x968e,	// (0x00027b73) frm_month_g4

0x969f,	// (0x00027b84) frm_month_g5

0x96b2,	// (0x00027b97) frm_month_g6

0x96c5,	// (0x00027baa) frm_month_g7

0xef7d,	// (0x0002d462) frm_month_g8

0x96d8,	// (0x00027bbd) frm_month_g9

0x96e5,	// (0x00027bca) frm_month_g10

0x96f2,	// (0x00027bd7) frm_month_g11

0x96ff,	// (0x00027be4) frm_month_g12

0x970c,	// (0x00027bf1) frm_month_g13

0x9719,	// (0x00027bfe) frm_month_g14

0x9728,	// (0x00027c0d) frm_month_g15

0x9737,	// (0x00027c1c) frm_month_g16

0x000f,

0xfdda,	// (0x0002e2bf) frm_month_g

0xef8a,	// (0x0002d46f) cell_top_day_name_pane_t1

0x9746,	// (0x00027c2b) cell_area_left_week_number_pane_g1

0x9755,	// (0x00027c3a) cell_area_left_week_number_pane_t1

0xc8fa,	// (0x0002addf) cell_month_view_pane_g1

0x976b,	// (0x00027c50) cell_month_view_pane_t1

0x9a83,	// (0x00027f68) main_fps_pane

0xe303,	// (0x0002c7e8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe303,	// (0x0002c7e8) cmail_ddmenu_btn02_pane_cp1

0xe31f,	// (0x0002c804) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe31f,	// (0x0002c804) cmail_ddmenu_btn02_pane_cp2

0x8fbc,	// (0x000274a1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fbc,	// (0x000274a1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x0002e229) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x0002e229) cmail_ddmenu_btn02_pane_g

0x8fda,	// (0x000274bf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fda,	// (0x000274bf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x0002e22e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x0002e22e) cmail_ddmenu_btn02_pane_t

0x9781,	// (0x00027c66) fps_text_pane_ParamLimits

0x9781,	// (0x00027c66) fps_text_pane

0x978e,	// (0x00027c73) main_fps_pane_g1_ParamLimits

0x978e,	// (0x00027c73) main_fps_pane_g1

0x979c,	// (0x00027c81) wait_bar_pane_cp010_ParamLimits

0x979c,	// (0x00027c81) wait_bar_pane_cp010

0x97a8,	// (0x00027c8d) fps_text_pane_t1_ParamLimits

0x97a8,	// (0x00027c8d) fps_text_pane_t1

0x699f,	// (0x00024e84) cam4_image_uncrop_pane_g1

0x69a8,	// (0x00024e8d) cam4_image_uncrop_pane_g2

0x69b1,	// (0x00024e96) cam4_image_uncrop_pane_g3

0x69ba,	// (0x00024e9f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002ddd3) cam4_image_uncrop_pane_g

0x95b0,	// (0x00027a95) dia3_listrow_pane_ParamLimits

0x9a83,	// (0x00027f68) main_phob2_pane

0x8b58,	// (0x0002703d) cell_tport_appsw_pane_cp02_ParamLimits

0x8b58,	// (0x0002703d) cell_tport_appsw_pane_cp02

0x8b67,	// (0x0002704c) cell_tport_appsw_pane_cp03_ParamLimits

0x8b67,	// (0x0002704c) cell_tport_appsw_pane_cp03

0x9a83,	// (0x00027f68) phob2_contact_card_pane

0x9a83,	// (0x00027f68) phob2_listscroll_pane

0xef9d,	// (0x0002d482) phob2_list_pane

0xefa5,	// (0x0002d48a) scroll_pane_cp034

0x97c1,	// (0x00027ca6) phob2_cc_data_pane_ParamLimits

0x97c1,	// (0x00027ca6) phob2_cc_data_pane

0x97db,	// (0x00027cc0) phob2_cc_listscroll_pane_ParamLimits

0x97db,	// (0x00027cc0) phob2_cc_listscroll_pane

0x97f5,	// (0x00027cda) list_double_large_graphic_phob2_pane_ParamLimits

0x97f5,	// (0x00027cda) list_double_large_graphic_phob2_pane

0x9817,	// (0x00027cfc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9817,	// (0x00027cfc) list_double_large_graphic_phob2_pane_g1

0x982d,	// (0x00027d12) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x982d,	// (0x00027d12) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfdfb,	// (0x0002e2e0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdfb,	// (0x0002e2e0) list_double_large_graphic_phob2_pane_g

0x9839,	// (0x00027d1e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9839,	// (0x00027d1e) list_double_large_graphic_phob2_pane_t1

0x984f,	// (0x00027d34) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x984f,	// (0x00027d34) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe00,	// (0x0002e2e5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe00,	// (0x0002e2e5) list_double_large_graphic_phob2_pane_t

0x9a83,	// (0x00027f68) list_highlight_pane_cp024

0x9864,	// (0x00027d49) phob2_cc_button_pane

0x986c,	// (0x00027d51) phob2_cc_data_pane_g1_ParamLimits

0x986c,	// (0x00027d51) phob2_cc_data_pane_g1

0x9878,	// (0x00027d5d) phob2_cc_data_pane_g2_ParamLimits

0x9878,	// (0x00027d5d) phob2_cc_data_pane_g2

0x0001,

0xfe05,	// (0x0002e2ea) phob2_cc_data_pane_g_ParamLimits

0xfe05,	// (0x0002e2ea) phob2_cc_data_pane_g

0x9884,	// (0x00027d69) phob2_cc_data_pane_t1_ParamLimits

0x9884,	// (0x00027d69) phob2_cc_data_pane_t1

0x9896,	// (0x00027d7b) phob2_cc_data_pane_t2_ParamLimits

0x9896,	// (0x00027d7b) phob2_cc_data_pane_t2

0x98a8,	// (0x00027d8d) phob2_cc_data_pane_t3_ParamLimits

0x98a8,	// (0x00027d8d) phob2_cc_data_pane_t3

0x0002,

0xfe0a,	// (0x0002e2ef) phob2_cc_data_pane_t_ParamLimits

0xfe0a,	// (0x0002e2ef) phob2_cc_data_pane_t

0xefad,	// (0x0002d492) phob2_cc_list_pane_ParamLimits

0xefad,	// (0x0002d492) phob2_cc_list_pane

0xd53c,	// (0x0002ba21) scroll_pane_cp035_ParamLimits

0xd53c,	// (0x0002ba21) scroll_pane_cp035

0xa32c,	// (0x00028811) bg_button_pane_cp033

0xefb9,	// (0x0002d49e) phob2_cc_button_pane_g1

0xefc5,	// (0x0002d4aa) phob2_cc_button_pane_t1

0xefda,	// (0x0002d4bf) phob2_cc_button_pane_t2

0x0001,

0x0c40,	// (0x0001f125) phob2_cc_button_pane_t

0x98ba,	// (0x00027d9f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98ba,	// (0x00027d9f) list_double_large_graphic_phob2_cc_pane

0x98e9,	// (0x00027dce) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98e9,	// (0x00027dce) list_double_large_graphic_phob2_cc_pane_g1

0x98fa,	// (0x00027ddf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x98fa,	// (0x00027ddf) list_double_large_graphic_phob2_cc_pane_g2

0x9909,	// (0x00027dee) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9909,	// (0x00027dee) list_double_large_graphic_phob2_cc_pane_g3

0x9918,	// (0x00027dfd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9918,	// (0x00027dfd) list_double_large_graphic_phob2_cc_pane_g4

0x9929,	// (0x00027e0e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9929,	// (0x00027e0e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x0002e2f6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x0002e2f6) list_double_large_graphic_phob2_cc_pane_g

0x9938,	// (0x00027e1d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9938,	// (0x00027e1d) list_double_large_graphic_phob2_cc_pane_t1

0x9961,	// (0x00027e46) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9961,	// (0x00027e46) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0002e301) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0002e301) list_double_large_graphic_phob2_cc_pane_t

0xefec,	// (0x0002d4d1) list_highlight_pane_cp025_ParamLimits

0xefec,	// (0x0002d4d1) list_highlight_pane_cp025

0xa32c,	// (0x00028811) bg_button_pane_cp033_ParamLimits

0xefb9,	// (0x0002d49e) phob2_cc_button_pane_g1_ParamLimits

0xefc5,	// (0x0002d4aa) phob2_cc_button_pane_t1_ParamLimits

0xefda,	// (0x0002d4bf) phob2_cc_button_pane_t2_ParamLimits

0x0c40,	// (0x0001f125) phob2_cc_button_pane_t_ParamLimits

0x253d,	// (0x00020a22) popup_wgtman_window

0xd2c4,	// (0x0002b7a9) scroll_pane_cp038

0x9340,	// (0x00027825) wgtman_btn_pane_cp_01_ParamLimits

0x9340,	// (0x00027825) wgtman_btn_pane_cp_01

0xeffa,	// (0x0002d4df) wgtman_content_pane

0xf003,	// (0x0002d4e8) wgtman_heading_pane

0x9a83,	// (0x00027f68) bg_heading_pane_cp02

0xf00c,	// (0x0002d4f1) wgtman_heading_pane_g1

0xf014,	// (0x0002d4f9) wgtman_heading_pane_t1

0xf022,	// (0x0002d507) scroll_pane_cp036

0xf02a,	// (0x0002d50f) wgtman_list_pane

0xeb72,	// (0x0002d057) wgtman_list_pane_t1_ParamLimits

0xeb72,	// (0x0002d057) wgtman_list_pane_t1

0x1cfe,	// (0x000201e3) cam4_grid_pane

0x71b5,	// (0x0002569a) bg_button_pane_cp015_ParamLimits

0x71c7,	// (0x000256ac) bg_button_pane_cp016_ParamLimits

0x71da,	// (0x000256bf) bg_button_pane_cp017_ParamLimits

0x7230,	// (0x00025715) popup_vitu2_query_window_g3_ParamLimits

0x7230,	// (0x00025715) popup_vitu2_query_window_g3

0x72eb,	// (0x000257d0) popup_vitu2_query_window_t6_ParamLimits

0x72eb,	// (0x000257d0) popup_vitu2_query_window_t6

0x7316,	// (0x000257fb) popup_vitu2_query_window_t7_ParamLimits

0x7316,	// (0x000257fb) popup_vitu2_query_window_t7

0xeb8d,	// (0x0002d072) cam4_grid_pane_g1

0xeb96,	// (0x0002d07b) cam4_grid_pane_g2

0xf032,	// (0x0002d517) cam4_grid_pane_g3

0xf03b,	// (0x0002d520) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x0002e306) cam4_grid_pane_g

0x31b4,	// (0x00021699) aid_placing_vt_slider_lsc_ParamLimits

0x34f4,	// (0x000219d9) vidtel_button_pane_ParamLimits

0x34f4,	// (0x000219d9) vidtel_button_pane

0xf046,	// (0x0002d52b) bg_button_pane_cp034

0x998a,	// (0x00027e6f) vidtel_button_pane_g1

0xf050,	// (0x0002d535) vidtel_button_pane_t1

0xd3c6,	// (0x0002b8ab) aid_size_vtel_slider_touch

0xd53c,	// (0x0002ba21) scroll_pane_cp039

0xdd6d,	// (0x0002c252) ncim_query_button_pane_cp01_ParamLimits

0xdd8c,	// (0x0002c271) ncimui_query_pane_g1_ParamLimits

0xa32c,	// (0x00028811) input_focus_pane_cp012_ParamLimits

0xddb1,	// (0x0002c296) ncim_query_entry_pane_t1_ParamLimits

0xd53c,	// (0x0002ba21) scroll_pane_cp039_ParamLimits

0xace8,	// (0x000291cd) navi_pane_bcale_mc_g1

0xacf0,	// (0x000291d5) navi_pane_bcale_mc_t1

0xe368,	// (0x0002c84d) main_sp_fs_email_pane_g1

0xe374,	// (0x0002c859) main_sp_fs_email_pane_g2

0x0001,

0x09eb,	// (0x0001eed0) main_sp_fs_email_pane_g

0xe81c,	// (0x0002cd01) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe81c,	// (0x0002cd01) list_single_cale_mrui_row_pane_g3

0x9002,	// (0x000274e7) list_single_recal_day_pane_g5_event_pane

0xea93,	// (0x0002cf78) list_single_recal_day_pane_g7

0xf05e,	// (0x0002d543) list_recal_day_event_pane_cp01

0xf067,	// (0x0002d54c) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0002d554) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0002d55c) list_recal_vselct_pane_cp01

0xd3e8,	// (0x0002b8cd) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0002d566) list_recal_day_event_pane_cp01_t1

0xea9b,	// (0x0002cf80) list_single_recal_day_pane_t1_ParamLimits

0xeaad,	// (0x0002cf92) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x0002e23e) list_single_recal_day_pane_t_ParamLimits

0xa0fb,	// (0x000285e0) bg_notes_pane_ParamLimits

0xa1bd,	// (0x000286a2) list_notes_pane_ParamLimits

0x27b1,	// (0x00020c96) scroll_pane_cp06_ParamLimits

0xa1df,	// (0x000286c4) main_notes_pane_ParamLimits

0x9a83,	// (0x00027f68) main_welc_pane

0x9992,	// (0x00027e77) main_welc_body_pane_ParamLimits

0x9992,	// (0x00027e77) main_welc_body_pane

0x99ab,	// (0x00027e90) main_welc_opti_pane_ParamLimits

0x99ab,	// (0x00027e90) main_welc_opti_pane

0x99e0,	// (0x00027ec5) main_welc_pane_t1_ParamLimits

0x99e0,	// (0x00027ec5) main_welc_pane_t1

0x99fe,	// (0x00027ee3) main_welc_body_row_pane_ParamLimits

0x99fe,	// (0x00027ee3) main_welc_body_row_pane

0xcf89,	// (0x0002b46e) main_welc_opti_row_pane_ParamLimits

0xcf89,	// (0x0002b46e) main_welc_opti_row_pane

0xf08f,	// (0x0002d574) main_welc_opti_row_pane_g1

0x9a2a,	// (0x00027f0f) main_welc_opti_row_pane_t1

0xf097,	// (0x0002d57c) main_welc_body_row_pane_t1

0xed7b,	// (0x0002d260) popup_notif_wgt_heading_pane

0xed95,	// (0x0002d27a) aid_size_list_notif_wgt_del_ParamLimits

0xeda2,	// (0x0002d287) list_notif_wgt_row_pane_g1_ParamLimits

0xedae,	// (0x0002d293) list_notif_wgt_row_pane_g2_ParamLimits

0xedc2,	// (0x0002d2a7) list_notif_wgt_row_pane_g3_ParamLimits

0x0baa,	// (0x0001f08f) list_notif_wgt_row_pane_g_ParamLimits

0xedcf,	// (0x0002d2b4) list_notif_wgt_row_pane_t1_ParamLimits

0xede5,	// (0x0002d2ca) list_notif_wgt_row_pane_t2_ParamLimits

0xedf7,	// (0x0002d2dc) list_notif_wgt_row_pane_t3_ParamLimits

0x0bb1,	// (0x0001f096) list_notif_wgt_row_pane_t_ParamLimits

0x93d3,	// (0x000278b8) listrow_wgtman_pane_g1_ParamLimits

0x93e0,	// (0x000278c5) listrow_wgtman_pane_g2_ParamLimits

0xfdb4,	// (0x0002e299) listrow_wgtman_pane_g_ParamLimits

0x93fe,	// (0x000278e3) listrow_wgtman_pane_t1_ParamLimits

0x9416,	// (0x000278fb) listrow_wgtman_pane_t2_ParamLimits

0xfdb9,	// (0x0002e29e) listrow_wgtman_pane_t_ParamLimits

0x943c,	// (0x00027921) wait_bar_pane_cp09_ParamLimits

0x9a83,	// (0x00027f68) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002d58b) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002d593) popup_notif_wgt_heading_pane_t1

0x9a83,	// (0x00027f68) main_vids_pane

0x9a83,	// (0x00027f68) vids_listscroll_pane

0x9a39,	// (0x00027f1e) scroll_pane_cp040

0x9a83,	// (0x00027f68) vids_list_pane

0x9a44,	// (0x00027f29) vids_list_double_pane_ParamLimits

0x9a44,	// (0x00027f29) vids_list_double_pane

0x9a5c,	// (0x00027f41) vids_list_double_pane_g1

0x9a65,	// (0x00027f4a) vids_list_double_pane_t1

0x9a75,	// (0x00027f5a) vids_list_double_pane_t2

0x0001,

0xfe2f,	// (0x0002e314) vids_list_double_pane_t

0x1350,	// (0x0001f835) main_ncimui_pane_ParamLimits

0x7e70,	// (0x00026355) main_ncimui_pane_g1_ParamLimits

0x7e7c,	// (0x00026361) main_ncimui_pane_g2_ParamLimits

0x7e7c,	// (0x00026361) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002e0ad) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002e0ad) main_ncimui_pane_g

0x99c6,	// (0x00027eab) main_welc_pane_g1_ParamLimits

0x99c6,	// (0x00027eab) main_welc_pane_g1

0x99d2,	// (0x00027eb7) main_welc_pane_g2_ParamLimits

0x99d2,	// (0x00027eb7) main_welc_pane_g2

0x0001,

0xfe2a,	// (0x0002e30f) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0002e30f) main_welc_pane_g

0xa0fb,	// (0x000285e0) listscroll_mce_pane_ParamLimits

0xae3d,	// (0x00029322) wait_bar_pane_cp10

0xc284,	// (0x0002a769) main_cale_day_pane_ParamLimits

0xc284,	// (0x0002a769) main_cale_week_pane_ParamLimits

0xa0fb,	// (0x000285e0) main_messa_pane_ParamLimits

0x631b,	// (0x00024800) main_clock2_btn_pane_ParamLimits

0x631b,	// (0x00024800) main_clock2_btn_pane

0xcaf6,	// (0x0002afdb) main_clock2_btn_pane_cp01_ParamLimits

0xcaf6,	// (0x0002afdb) main_clock2_btn_pane_cp01

0xe7a8,	// (0x0002cc8d) list_cale_mrui_pane_ParamLimits

0xee3b,	// (0x0002d320) main_cf0_pane_g2

0x0001,

0x0bb8,	// (0x0001f09d) main_cf0_pane_g

0x95cd,	// (0x00027ab2) area_left_week_number_pane_ParamLimits

0x95e0,	// (0x00027ac5) area_top_day_name_pane_ParamLimits

0x95ee,	// (0x00027ad3) frame_month_view_pane_ParamLimits

0xef62,	// (0x0002d447) grid_month_view_pane_ParamLimits

0xef70,	// (0x0002d455) frm_month_g1_ParamLimits

0x966c,	// (0x00027b51) frm_month_g2_ParamLimits

0x967d,	// (0x00027b62) frm_month_g3_ParamLimits

0x968e,	// (0x00027b73) frm_month_g4_ParamLimits

0x969f,	// (0x00027b84) frm_month_g5_ParamLimits

0x96b2,	// (0x00027b97) frm_month_g6_ParamLimits

0x96c5,	// (0x00027baa) frm_month_g7_ParamLimits

0xef7d,	// (0x0002d462) frm_month_g8_ParamLimits

0x96d8,	// (0x00027bbd) frm_month_g9_ParamLimits

0x96e5,	// (0x00027bca) frm_month_g10_ParamLimits

0x96f2,	// (0x00027bd7) frm_month_g11_ParamLimits

0x96ff,	// (0x00027be4) frm_month_g12_ParamLimits

0x970c,	// (0x00027bf1) frm_month_g13_ParamLimits

0x9719,	// (0x00027bfe) frm_month_g14_ParamLimits

0x9728,	// (0x00027c0d) frm_month_g15_ParamLimits

0x9737,	// (0x00027c1c) frm_month_g16_ParamLimits

0xfdda,	// (0x0002e2bf) frm_month_g_ParamLimits

0xef8a,	// (0x0002d46f) cell_top_day_name_pane_t1_ParamLimits

0x9746,	// (0x00027c2b) cell_area_left_week_number_pane_g1_ParamLimits

0x9755,	// (0x00027c3a) cell_area_left_week_number_pane_t1_ParamLimits

0xc8fa,	// (0x0002addf) cell_month_view_pane_g1_ParamLimits

0x976b,	// (0x00027c50) cell_month_view_pane_t1_ParamLimits

0xa0f3,	// (0x000285d8) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002d5a1) main_clock2_btn_pane_t1

0xa32c,	// (0x00028811) listscroll_cmail_pane_ParamLimits

0xe368,	// (0x0002c84d) main_sp_fs_email_pane_g1_ParamLimits

0xe374,	// (0x0002c859) main_sp_fs_email_pane_g2_ParamLimits

0x09eb,	// (0x0001eed0) main_sp_fs_email_pane_g_ParamLimits

0xe9fb,	// (0x0002cee0) list_recal_day_pane_ParamLimits

0xea0c,	// (0x0002cef1) mian_recal_day_pane_t1

0x882f,	// (0x00026d14) list_single_dyc_row_text_pane_t4_ParamLimits

0x882f,	// (0x00026d14) list_single_dyc_row_text_pane_t4

0x8866,	// (0x00026d4b) list_single_dyc_row_text_pane_t5_ParamLimits

0x8866,	// (0x00026d4b) list_single_dyc_row_text_pane_t5

0xe438,	// (0x0002c91d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe438,	// (0x0002c91d) list_single_dyc_row_text_pane_t6

0xa7be,	// (0x00028ca3) aid_mgn_list_cale_time_pane

0x1350,	// (0x0001f835) main_gallery2_pane_ParamLimits

0xcb0c,	// (0x0002aff1) main_clock2_pane_cp01_t1

0xcb1a,	// (0x0002afff) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002dca9) main_clock2_pane_cp01_t

0x2adf,	// (0x00020fc4) cale_week_scroll_pane_g16_ParamLimits

0x2adf,	// (0x00020fc4) cale_week_scroll_pane_g16

0xa3bb,	// (0x000288a0) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
