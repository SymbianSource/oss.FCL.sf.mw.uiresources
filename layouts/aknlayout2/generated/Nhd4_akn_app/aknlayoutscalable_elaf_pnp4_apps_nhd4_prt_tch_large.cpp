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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007a928 };

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
0x202a,	// (0x0007c952) Screen

0x2036,	// (0x0007c95e) application_window

0x2092,	// (0x0007c9ba) area_bottom_pane_ParamLimits

0x2092,	// (0x0007c9ba) area_bottom_pane

0x20eb,	// (0x0007ca13) area_top_pane_ParamLimits

0x20eb,	// (0x0007ca13) area_top_pane

0x214f,	// (0x0007ca77) call_video_uplink_pane_ParamLimits

0x214f,	// (0x0007ca77) call_video_uplink_pane

0x218e,	// (0x0007cab6) main_pane_ParamLimits

0x218e,	// (0x0007cab6) main_pane

0xc979,	// (0x000872a1) context_pane

0x53de,	// (0x0007fd06) navi_pane

0x5404,	// (0x0007fd2c) popup_cale_events_window_ParamLimits

0x5404,	// (0x0007fd2c) popup_cale_events_window

0xc98c,	// (0x000872b4) popup_mup_playback_window

0x541c,	// (0x0007fd44) signal_pane

0xa8f9,	// (0x00085221) main_browser_pane

0xaae5,	// (0x0008540d) main_burst_pane

0x526e,	// (0x0007fb96) main_calc_pane

0xc95f,	// (0x00087287) main_cale_day_pane

0x28d6,	// (0x0007d1fe) main_cale_month_pane

0xc95f,	// (0x00087287) main_cale_week_pane

0xaae5,	// (0x0008540d) main_call_pane

0xa579,	// (0x00084ea1) main_call_poc_pane

0xaae5,	// (0x0008540d) main_camera_pane

0xaae5,	// (0x0008540d) main_chi_dic_pane

0xb2c8,	// (0x00085bf0) main_clock_pane

0xa579,	// (0x00084ea1) main_fmradio_pane

0xaae5,	// (0x0008540d) main_graph_messa_pane

0xa579,	// (0x00084ea1) main_help_pane

0xa8f9,	// (0x00085221) main_im_pane

0xa828,	// (0x00085150) main_image_pane_ParamLimits

0xa828,	// (0x00085150) main_image_pane

0xa579,	// (0x00084ea1) main_location2_pane

0xaae5,	// (0x0008540d) main_location_pane

0xa828,	// (0x00085150) main_messa_pane

0xa579,	// (0x00084ea1) main_mp2_pane

0xaae5,	// (0x0008540d) main_mp_pane

0xa579,	// (0x00084ea1) main_msg_pane

0xa579,	// (0x00084ea1) main_mup_eq_pane

0xa579,	// (0x00084ea1) main_mup_pane

0xa8f9,	// (0x00085221) main_notes_pane

0xa579,	// (0x00084ea1) main_pec_pane

0xa579,	// (0x00084ea1) main_phob_pane

0xa579,	// (0x00084ea1) main_pinb_pane

0xa579,	// (0x00084ea1) main_postcard_pane

0xa579,	// (0x00084ea1) main_qdial_pane

0xaae5,	// (0x0008540d) main_skin_pane

0xa579,	// (0x00084ea1) main_smil2_pane

0xaae5,	// (0x0008540d) main_smil_pane

0xaae5,	// (0x0008540d) main_video_pane

0xaae5,	// (0x0008540d) main_video_tele_pane

0xa828,	// (0x00085150) main_viewer_pane_ParamLimits

0xa828,	// (0x00085150) main_viewer_pane

0xaae5,	// (0x0008540d) main_vorec_pane

0x52ac,	// (0x0007fbd4) popup_blid_sat_info_window_ParamLimits

0x52ac,	// (0x0007fbd4) popup_blid_sat_info_window

0x52cc,	// (0x0007fbf4) popup_dyc_status_message_window_ParamLimits

0x52cc,	// (0x0007fbf4) popup_dyc_status_message_window

0x52da,	// (0x0007fc02) popup_grid_large_graphic_window_ParamLimits

0x52da,	// (0x0007fc02) popup_grid_large_graphic_window

0x5369,	// (0x0007fc91) popup_loc_request_window_ParamLimits

0x5369,	// (0x0007fc91) popup_loc_request_window

0x53b6,	// (0x0007fcde) popup_wml_address_window_ParamLimits

0x53b6,	// (0x0007fcde) popup_wml_address_window

0x5146,	// (0x0007fa6e) call_muted_g1

0x4e02,	// (0x0007f72a) popup_call_audio_conf_window_ParamLimits

0x4e02,	// (0x0007f72a) popup_call_audio_conf_window

0x5156,	// (0x0007fa7e) popup_call_audio_first_window_ParamLimits

0x5156,	// (0x0007fa7e) popup_call_audio_first_window

0x5196,	// (0x0007fabe) popup_call_audio_in_window_ParamLimits

0x5196,	// (0x0007fabe) popup_call_audio_in_window

0x51ba,	// (0x0007fae2) popup_call_audio_out_window_ParamLimits

0x51ba,	// (0x0007fae2) popup_call_audio_out_window

0x51dc,	// (0x0007fb04) popup_call_audio_second_window_ParamLimits

0x51dc,	// (0x0007fb04) popup_call_audio_second_window

0x520c,	// (0x0007fb34) popup_call_audio_wait_window_ParamLimits

0x520c,	// (0x0007fb34) popup_call_audio_wait_window

0x522d,	// (0x0007fb55) popup_number_entry_window_ParamLimits

0x522d,	// (0x0007fb55) popup_number_entry_window

0xa166,	// (0x00084a8e) bg_popup_call_pane_cp05_ParamLimits

0xa166,	// (0x00084a8e) bg_popup_call_pane_cp05

0xa186,	// (0x00084aae) popup_number_entry_window_t1

0xa199,	// (0x00084ac1) popup_number_entry_window_t2

0xa1ab,	// (0x00084ad3) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000899ee) popup_number_entry_window_t

0xa1bd,	// (0x00084ae5) text_title_cp2

0xa1d0,	// (0x00084af8) bg_popup_call_pane_cp_ParamLimits

0xa1d0,	// (0x00084af8) bg_popup_call_pane_cp

0xa1de,	// (0x00084b06) call_thumbnail_pane

0xa1e6,	// (0x00084b0e) popup_call_audio_in_window_g1_ParamLimits

0xa1e6,	// (0x00084b0e) popup_call_audio_in_window_g1

0xa1f2,	// (0x00084b1a) popup_call_audio_in_window_g2_ParamLimits

0xa1f2,	// (0x00084b1a) popup_call_audio_in_window_g2

0xa1fe,	// (0x00084b26) popup_call_audio_in_window_g3_ParamLimits

0xa1fe,	// (0x00084b26) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000899f7) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000899f7) popup_call_audio_in_window_g

0xa20a,	// (0x00084b32) popup_call_audio_in_window_t1_ParamLimits

0xa20a,	// (0x00084b32) popup_call_audio_in_window_t1

0xa226,	// (0x00084b4e) popup_call_audio_in_window_t2_ParamLimits

0xa226,	// (0x00084b4e) popup_call_audio_in_window_t2

0xa242,	// (0x00084b6a) popup_call_audio_in_window_t3_ParamLimits

0xa242,	// (0x00084b6a) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000899fe) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000899fe) popup_call_audio_in_window_t

0xa1d0,	// (0x00084af8) bg_popup_call_pane_cp01_ParamLimits

0xa1d0,	// (0x00084af8) bg_popup_call_pane_cp01

0xa1de,	// (0x00084b06) call_thumbnail_pane_cp02

0xa255,	// (0x00084b7d) call_type_pane_cp022

0xa25d,	// (0x00084b85) popup_call_audio_out_window_g1_ParamLimits

0xa25d,	// (0x00084b85) popup_call_audio_out_window_g1

0xa26f,	// (0x00084b97) popup_call_audio_out_window_g2_ParamLimits

0xa26f,	// (0x00084b97) popup_call_audio_out_window_g2

0xa27b,	// (0x00084ba3) popup_call_audio_out_window_g3_ParamLimits

0xa27b,	// (0x00084ba3) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00089a05) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00089a05) popup_call_audio_out_window_g

0xa28d,	// (0x00084bb5) popup_call_audio_out_window_t1_ParamLimits

0xa28d,	// (0x00084bb5) popup_call_audio_out_window_t1

0xa2a5,	// (0x00084bcd) popup_call_audio_out_window_t2_ParamLimits

0xa2a5,	// (0x00084bcd) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00089a0c) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00089a0c) popup_call_audio_out_window_t

0xa2ba,	// (0x00084be2) bg_popup_call_pane_ParamLimits

0xa2ba,	// (0x00084be2) bg_popup_call_pane

0x2392,	// (0x0007ccba) call_thumbnail_pane_cp_ParamLimits

0x2392,	// (0x0007ccba) call_thumbnail_pane_cp

0xa33e,	// (0x00084c66) call_type_pane_cp01_ParamLimits

0xa33e,	// (0x00084c66) call_type_pane_cp01

0xa382,	// (0x00084caa) popup_call_audio_first_window_g1_ParamLimits

0xa382,	// (0x00084caa) popup_call_audio_first_window_g1

0xa3ce,	// (0x00084cf6) popup_call_audio_first_window_g2_ParamLimits

0xa3ce,	// (0x00084cf6) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00089a11) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00089a11) popup_call_audio_first_window_g

0xa412,	// (0x00084d3a) popup_call_audio_first_window_t1_ParamLimits

0xa412,	// (0x00084d3a) popup_call_audio_first_window_t1

0xa4be,	// (0x00084de6) popup_call_audio_first_window_t4_ParamLimits

0xa4be,	// (0x00084de6) popup_call_audio_first_window_t4

0xa54a,	// (0x00084e72) popup_call_audio_first_window_t5_ParamLimits

0xa54a,	// (0x00084e72) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00089a16) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00089a16) popup_call_audio_first_window_t

0xa579,	// (0x00084ea1) bg_popup_call_pane_cp02

0xa583,	// (0x00084eab) call_type_pane_cp023

0xa58b,	// (0x00084eb3) popup_call_audio_wait_window_g1

0xa5b8,	// (0x00084ee0) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00089a1d) popup_call_audio_wait_window_g

0xa5c0,	// (0x00084ee8) popup_call_audio_wait_window_t3

0xa5ce,	// (0x00084ef6) bg_popup_call_pane_cp03_ParamLimits

0xa5ce,	// (0x00084ef6) bg_popup_call_pane_cp03

0xa62e,	// (0x00084f56) call_thumbnail_pane_cp011_ParamLimits

0xa62e,	// (0x00084f56) call_thumbnail_pane_cp011

0xa63a,	// (0x00084f62) call_type_pane_cp034_ParamLimits

0xa63a,	// (0x00084f62) call_type_pane_cp034

0xa6a5,	// (0x00084fcd) popup_call_audio_second_window_g1_ParamLimits

0xa6a5,	// (0x00084fcd) popup_call_audio_second_window_g1

0xa6e1,	// (0x00085009) popup_call_audio_second_window_g2_ParamLimits

0xa6e1,	// (0x00085009) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00089a22) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00089a22) popup_call_audio_second_window_g

0xa71d,	// (0x00085045) popup_call_audio_second_window_t1_ParamLimits

0xa71d,	// (0x00085045) popup_call_audio_second_window_t1

0xa79e,	// (0x000850c6) popup_call_audio_second_window_t2_ParamLimits

0xa79e,	// (0x000850c6) popup_call_audio_second_window_t2

0xa7d4,	// (0x000850fc) popup_call_audio_second_window_t3_ParamLimits

0xa7d4,	// (0x000850fc) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00089a27) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00089a27) popup_call_audio_second_window_t

0xa579,	// (0x00084ea1) bg_popup_call_pane_cp04

0xa80a,	// (0x00085132) list_conf_pane

0xa812,	// (0x0008513a) popup_call_audio_conf_window_t1

0xa820,	// (0x00085148) call_thumbnail_pane_g1

0xa828,	// (0x00085150) bg_pinb_pane_ParamLimits

0xa828,	// (0x00085150) bg_pinb_pane

0xa836,	// (0x0008515e) find_pinb_pane

0xa83f,	// (0x00085167) listscroll_pinb_pane_ParamLimits

0xa83f,	// (0x00085167) listscroll_pinb_pane

0xa84e,	// (0x00085176) pinb_bg_pane_g1

0x23b6,	// (0x0007ccde) pinb_bg_pane_g2

0x23c2,	// (0x0007ccea) pinb_bg_pane_g3

0x23ce,	// (0x0007ccf6) pinb_bg_pane_g4

0x23da,	// (0x0007cd02) pinb_bg_pane_g5

0x23e6,	// (0x0007cd0e) pinb_bg_pane_g6

0x23f1,	// (0x0007cd19) pinb_bg_pane_g7

0x23fc,	// (0x0007cd24) pinb_bg_pane_g8

0x2407,	// (0x0007cd2f) pinb_bg_pane_g9

0x2411,	// (0x0007cd39) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00089a2e) pinb_bg_pane_g

0x242e,	// (0x0007cd56) grid_pinb_pane

0x2439,	// (0x0007cd61) list_pinb_pane

0x2444,	// (0x0007cd6c) scroll_pane_cp01_ParamLimits

0x2444,	// (0x0007cd6c) scroll_pane_cp01

0xa858,	// (0x00085180) find_pinb_pane_g1_ParamLimits

0xa858,	// (0x00085180) find_pinb_pane_g1

0xa870,	// (0x00085198) find_pinb_pane_t1

0xa882,	// (0x000851aa) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00089a48) find_pinb_pane_t

0xa897,	// (0x000851bf) input_focus_pane_cp01_ParamLimits

0xa897,	// (0x000851bf) input_focus_pane_cp01

0x2456,	// (0x0007cd7e) cell_pinb_pane_ParamLimits

0x2456,	// (0x0007cd7e) cell_pinb_pane

0x2481,	// (0x0007cda9) cell_pinb_pane_g1_ParamLimits

0x2481,	// (0x0007cda9) cell_pinb_pane_g1

0xa8a3,	// (0x000851cb) cell_pinb_pane_g2_ParamLimits

0xa8a3,	// (0x000851cb) cell_pinb_pane_g2

0xa8af,	// (0x000851d7) cell_pinb_pane_g3_ParamLimits

0xa8af,	// (0x000851d7) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00089a4d) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00089a4d) cell_pinb_pane_g

0xa579,	// (0x00084ea1) grid_highlight_pane_cp01

0x2496,	// (0x0007cdbe) list_pinb_item_pane_ParamLimits

0x2496,	// (0x0007cdbe) list_pinb_item_pane

0xa579,	// (0x00084ea1) list_highlight_pane_cp02

0x24bf,	// (0x0007cde7) list_pinb_item_pane_g1_ParamLimits

0x24bf,	// (0x0007cde7) list_pinb_item_pane_g1

0x24cc,	// (0x0007cdf4) list_pinb_item_pane_g2_ParamLimits

0x24cc,	// (0x0007cdf4) list_pinb_item_pane_g2

0x24d8,	// (0x0007ce00) list_pinb_item_pane_g3_ParamLimits

0x24d8,	// (0x0007ce00) list_pinb_item_pane_g3

0x24e9,	// (0x0007ce11) list_pinb_item_pane_g4_ParamLimits

0x24e9,	// (0x0007ce11) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00089a54) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00089a54) list_pinb_item_pane_g

0x24f5,	// (0x0007ce1d) list_pinb_item_pane_t1_ParamLimits

0x24f5,	// (0x0007ce1d) list_pinb_item_pane_t1

0x2526,	// (0x0007ce4e) calc_display_pane

0x2544,	// (0x0007ce6c) calc_paper_pane

0x2560,	// (0x0007ce88) grid_calc_pane

0xa579,	// (0x00084ea1) bg_list_pane_cp01

0x258c,	// (0x0007ceb4) clock_g1

0x2594,	// (0x0007cebc) clock_g2

0x0001,

0xf135,	// (0x00089a5d) clock_g

0x259e,	// (0x0007cec6) clock_t1_ParamLimits

0x259e,	// (0x0007cec6) clock_t1

0x25b3,	// (0x0007cedb) clock_t2_ParamLimits

0x25b3,	// (0x0007cedb) clock_t2

0x25c5,	// (0x0007ceed) clock_t3_ParamLimits

0x25c5,	// (0x0007ceed) clock_t3

0x25d7,	// (0x0007ceff) clock_t4_ParamLimits

0x25d7,	// (0x0007ceff) clock_t4

0x25e9,	// (0x0007cf11) clock_t5_ParamLimits

0x25e9,	// (0x0007cf11) clock_t5

0x25fe,	// (0x0007cf26) clock_t6_ParamLimits

0x25fe,	// (0x0007cf26) clock_t6

0x2610,	// (0x0007cf38) clock_t7_ParamLimits

0x2610,	// (0x0007cf38) clock_t7

0x2622,	// (0x0007cf4a) clock_t8_ParamLimits

0x2622,	// (0x0007cf4a) clock_t8

0x2638,	// (0x0007cf60) clock_t9_ParamLimits

0x2638,	// (0x0007cf60) clock_t9

0x0008,

0xf13a,	// (0x00089a62) clock_t_ParamLimits

0xf13a,	// (0x00089a62) clock_t

0xa8bb,	// (0x000851e3) popup_clock_analogue_window_cp02

0xa8bb,	// (0x000851e3) popup_clock_digital_window_cp01

0xa8c3,	// (0x000851eb) listscroll_help_pane

0xa579,	// (0x00084ea1) phob_pre_status_pane

0xa8cd,	// (0x000851f5) grid_qdial_pane

0xa828,	// (0x00085150) listscroll_mce_pane

0xa828,	// (0x00085150) bg_notes_pane

0xa8d7,	// (0x000851ff) list_notes_pane

0x264e,	// (0x0007cf76) scroll_pane_cp06

0xa8e5,	// (0x0008520d) bg_calc_paper_pane

0x265d,	// (0x0007cf85) list_calc_pane

0xa8f9,	// (0x00085221) bg_calc_display_pane

0x2677,	// (0x0007cf9f) calc_display_pane_t1

0x268c,	// (0x0007cfb4) calc_display_pane_t2

0x26a1,	// (0x0007cfc9) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00089a75) calc_display_pane_t

0x26b3,	// (0x0007cfdb) cell_calc_pane_ParamLimits

0x26b3,	// (0x0007cfdb) cell_calc_pane

0xa905,	// (0x0008522d) bg_calc_paper_pane_g1

0xa911,	// (0x00085239) bg_calc_paper_pane_g2

0xa91d,	// (0x00085245) bg_calc_paper_pane_g3

0xa929,	// (0x00085251) bg_calc_paper_pane_g4

0xa935,	// (0x0008525d) bg_calc_paper_pane_g5

0x26e0,	// (0x0007d008) bg_calc_paper_pane_g6

0x26f1,	// (0x0007d019) bg_calc_paper_pane_g7

0x2702,	// (0x0007d02a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00089a7c) bg_calc_paper_pane_g

0x2713,	// (0x0007d03b) calc_bg_paper_pane_g9

0x2724,	// (0x0007d04c) list_calc_item_pane_ParamLimits

0x2724,	// (0x0007d04c) list_calc_item_pane

0xa941,	// (0x00085269) list_calc_item_pane_g1

0x2751,	// (0x0007d079) list_calc_item_pane_t1_ParamLimits

0x2751,	// (0x0007d079) list_calc_item_pane_t1

0x2763,	// (0x0007d08b) list_calc_item_pane_t2_ParamLimits

0x2763,	// (0x0007d08b) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00089a8d) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00089a8d) list_calc_item_pane_t

0xa94e,	// (0x00085276) cell_calc_pane_g1

0xa958,	// (0x00085280) grid_highlight_pane_cp02

0x2793,	// (0x0007d0bb) bg_calc_display_pane_g1

0x279c,	// (0x0007d0c4) bg_calc_display_pane_g2

0x27a6,	// (0x0007d0ce) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00089a97) bg_calc_display_pane_g

0x27af,	// (0x0007d0d7) cell_qdial_pane_ParamLimits

0x27af,	// (0x0007d0d7) cell_qdial_pane

0x27c3,	// (0x0007d0eb) cell_qdial_pane_g1_ParamLimits

0x27c3,	// (0x0007d0eb) cell_qdial_pane_g1

0x27d0,	// (0x0007d0f8) cell_qdial_pane_g2_ParamLimits

0x27d0,	// (0x0007d0f8) cell_qdial_pane_g2

0xa97a,	// (0x000852a2) cell_qdial_pane_g3_ParamLimits

0xa97a,	// (0x000852a2) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00089a9e) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00089a9e) cell_qdial_pane_g

0x27ed,	// (0x0007d115) cell_qdial_pane_t1_ParamLimits

0x27ed,	// (0x0007d115) cell_qdial_pane_t1

0x2805,	// (0x0007d12d) cell_qdial_pane_t2_ParamLimits

0x2805,	// (0x0007d12d) cell_qdial_pane_t2

0x2818,	// (0x0007d140) cell_qdial_pane_t3_ParamLimits

0x2818,	// (0x0007d140) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00089aa7) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00089aa7) cell_qdial_pane_t

0xa579,	// (0x00084ea1) grid_highlight_pane_cp04

0xa986,	// (0x000852ae) thumbnail_qdial_pane_ParamLimits

0xa986,	// (0x000852ae) thumbnail_qdial_pane

0xa9e2,	// (0x0008530a) list_help_pane

0xa9eb,	// (0x00085313) scroll_pane_cp02

0x282b,	// (0x0007d153) help_list_pane_t1_ParamLimits

0x282b,	// (0x0007d153) help_list_pane_t1

0x2862,	// (0x0007d18a) bg_notes_pane_g2

0x286a,	// (0x0007d192) bg_notes_pane_g3

0x2872,	// (0x0007d19a) notes_bg_pane_g1

0x287a,	// (0x0007d1a2) notes_bg_pane_g4

0x2882,	// (0x0007d1aa) notes_bg_pane_g5

0x288a,	// (0x0007d1b2) notes_bg_pane_g6

0x2892,	// (0x0007d1ba) notes_bg_pane_g7

0x289a,	// (0x0007d1c2) notes_bg_pane_g8

0x28a2,	// (0x0007d1ca) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00089ac5) notes_bg_pane_g

0x28aa,	// (0x0007d1d2) list_notes_text_pane_ParamLimits

0x28aa,	// (0x0007d1d2) list_notes_text_pane

0xa9f4,	// (0x0008531c) list_notes_text_pane_g1

0x0d57,	// (0x0007b67f) list_notes_text_pane_t1

0x28d6,	// (0x0007d1fe) listscroll_cale_week_pane

0x28fb,	// (0x0007d223) bg_cale_heading_pane

0xaa17,	// (0x0008533f) bg_cale_pane_cp01

0x291d,	// (0x0007d245) cale_week_corner_pane

0x2937,	// (0x0007d25f) cale_week_day_heading_pane

0x2959,	// (0x0007d281) cale_week_scroll_pane_g1

0x2976,	// (0x0007d29e) cale_week_scroll_pane_g2

0x2989,	// (0x0007d2b1) cale_week_scroll_pane_g3

0x299c,	// (0x0007d2c4) cale_week_scroll_pane_g4

0x29af,	// (0x0007d2d7) cale_week_scroll_pane_g5

0x29c2,	// (0x0007d2ea) cale_week_scroll_pane_g6

0x29d5,	// (0x0007d2fd) cale_week_scroll_pane_g7

0x29ea,	// (0x0007d312) cale_week_scroll_pane_g8

0x29ff,	// (0x0007d327) cale_week_scroll_pane_g9

0x2a12,	// (0x0007d33a) cale_week_scroll_pane_g10

0x2a25,	// (0x0007d34d) cale_week_scroll_pane_g11

0x2a38,	// (0x0007d360) cale_week_scroll_pane_g12

0x2a4f,	// (0x0007d377) cale_week_scroll_pane_g13

0x2a6a,	// (0x0007d392) cale_week_scroll_pane_g14

0x2a85,	// (0x0007d3ad) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00089ad4) cale_week_scroll_pane_g

0x2ab5,	// (0x0007d3dd) cale_week_time_pane

0x2aca,	// (0x0007d3f2) grid_cale_week_pane

0xaa6d,	// (0x00085395) scroll_pane_cp08

0x2ae9,	// (0x0007d411) cell_cale_week_pane_ParamLimits

0x2ae9,	// (0x0007d411) cell_cale_week_pane

0x2b4b,	// (0x0007d473) cale_week_day_heading_pane_t1

0x2b66,	// (0x0007d48e) cale_week_day_heading_pane_t2

0x2b81,	// (0x0007d4a9) cale_week_day_heading_pane_t3

0x2b9c,	// (0x0007d4c4) cale_week_day_heading_pane_t4

0x2bb7,	// (0x0007d4df) cale_week_day_heading_pane_t5

0x2bd2,	// (0x0007d4fa) cale_week_day_heading_pane_t6

0x2bed,	// (0x0007d515) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00089af5) cale_week_day_heading_pane_t

0xaa8a,	// (0x000853b2) bg_cale_side_pane

0x2c08,	// (0x0007d530) cale_week_time_pane_t1

0x2c22,	// (0x0007d54a) cale_week_time_pane_t2

0x2c3c,	// (0x0007d564) cale_week_time_pane_t3

0x2c56,	// (0x0007d57e) cale_week_time_pane_t4

0x2c70,	// (0x0007d598) cale_week_time_pane_t5

0x2c8a,	// (0x0007d5b2) cale_week_time_pane_t6

0x2caa,	// (0x0007d5d2) cale_week_time_pane_t7

0x2ccc,	// (0x0007d5f4) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00089b04) cale_week_time_pane_t

0x2cf0,	// (0x0007d618) cell_cale_week_pane_g2

0x2d14,	// (0x0007d63c) cell_cale_week_pane_g3_ParamLimits

0x2d14,	// (0x0007d63c) cell_cale_week_pane_g3

0xaa98,	// (0x000853c0) grid_highlight_pane_cp07

0xaaa0,	// (0x000853c8) listscroll_gms_pane

0xaaaa,	// (0x000853d2) grid_gms_pane

0xaab3,	// (0x000853db) listscroll_gms_pane_g1

0xaabb,	// (0x000853e3) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x00089b15) listscroll_gms_pane_g

0x2d2c,	// (0x0007d654) scroll_pane_cp010

0x2d37,	// (0x0007d65f) cell_gms_pane_ParamLimits

0x2d37,	// (0x0007d65f) cell_gms_pane

0x2d47,	// (0x0007d66f) cell_gms_pane_g1

0xaac3,	// (0x000853eb) cell_gms_pane_g2

0xaacb,	// (0x000853f3) cell_gms_pane_g3

0xaad4,	// (0x000853fc) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x00089b1a) cell_gms_pane_g

0xaadd,	// (0x00085405) grid_highlight_pane_cp09

0x50ee,	// (0x0007fa16) phob_pre_status_pane_g1

0x50f6,	// (0x0007fa1e) phob_pre_status_pane_g2

0x50fe,	// (0x0007fa26) phob_pre_status_pane_g3

0x5106,	// (0x0007fa2e) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x00089f18) phob_pre_status_pane_g

0x5116,	// (0x0007fa3e) phob_pre_status_pane_t1

0x5126,	// (0x0007fa4e) phob_pre_status_pane_t2

0x5136,	// (0x0007fa5e) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x00089f23) phob_pre_status_pane_t

0xaae5,	// (0x0008540d) bg_list_pane_cp05

0x2d57,	// (0x0007d67f) grid_vorec_pane

0x2d61,	// (0x0007d689) vorec_t1

0x2d6f,	// (0x0007d697) vorec_t2

0x2d7d,	// (0x0007d6a5) vorec_t3

0x2d8b,	// (0x0007d6b3) vorec_t4

0xa100,	// (0x00084a28) vorec_t5

0xa10e,	// (0x00084a36) vorec_t6

0x0004,

0xf1fb,	// (0x00089b23) vorec_t

0xa11c,	// (0x00084a44) wait_bar_pane_cp01

0x2da7,	// (0x0007d6cf) cell_vorec_pane_ParamLimits

0x2da7,	// (0x0007d6cf) cell_vorec_pane

0x2dba,	// (0x0007d6e2) cell_vorec_pane_g1

0xa579,	// (0x00084ea1) grid_highlight_pane_cp05

0x2dd4,	// (0x0007d6fc) cams_zoom_pane

0x2de0,	// (0x0007d708) image_vga_pane

0x2def,	// (0x0007d717) main_camera_pane_g1

0x2dfd,	// (0x0007d725) main_camera_pane_g2

0x2e09,	// (0x0007d731) main_camera_pane_g3

0x2e15,	// (0x0007d73d) main_camera_pane_g4

0x2e21,	// (0x0007d749) main_camera_pane_g5

0x2e2d,	// (0x0007d755) main_camera_pane_g6

0x2e39,	// (0x0007d761) main_camera_pane_g7

0x0007,

0xf206,	// (0x00089b2e) main_camera_pane_g

0x2e45,	// (0x0007d76d) main_camera_pane_t1

0x2e57,	// (0x0007d77f) main_camera_pane_t2

0x0001,

0xf217,	// (0x00089b3f) main_camera_pane_t

0x2e78,	// (0x0007d7a0) cams_zoom_pane_cp_ParamLimits

0x2e78,	// (0x0007d7a0) cams_zoom_pane_cp

0x2e9c,	// (0x0007d7c4) image_cif_pane_ParamLimits

0x2e9c,	// (0x0007d7c4) image_cif_pane

0x2eba,	// (0x0007d7e2) image_subqcif_pane

0x2ec2,	// (0x0007d7ea) main_video_pane_g1_ParamLimits

0x2ec2,	// (0x0007d7ea) main_video_pane_g1

0x2ee2,	// (0x0007d80a) main_video_pane_g2_ParamLimits

0x2ee2,	// (0x0007d80a) main_video_pane_g2

0x2f12,	// (0x0007d83a) main_video_pane_g3_ParamLimits

0x2f12,	// (0x0007d83a) main_video_pane_g3

0x2f3b,	// (0x0007d863) main_video_pane_g4_ParamLimits

0x2f3b,	// (0x0007d863) main_video_pane_g4

0x2f64,	// (0x0007d88c) main_video_pane_g5_ParamLimits

0x2f64,	// (0x0007d88c) main_video_pane_g5

0xaaf9,	// (0x00085421) main_video_pane_g6_ParamLimits

0xaaf9,	// (0x00085421) main_video_pane_g6

0x0006,

0xf21c,	// (0x00089b44) main_video_pane_g_ParamLimits

0xf21c,	// (0x00089b44) main_video_pane_g

0x2f86,	// (0x0007d8ae) main_video_pane_t1_ParamLimits

0x2f86,	// (0x0007d8ae) main_video_pane_t1

0xab13,	// (0x0008543b) cams_zoom_pane_g1

0xab1c,	// (0x00085444) cams_zoom_pane_g2

0xab25,	// (0x0008544d) cams_zoom_pane_g3

0xab2e,	// (0x00085456) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x00089b53) cams_zoom_pane_g

0x2fd0,	// (0x0007d8f8) grid_cams_pane

0x2fde,	// (0x0007d906) linegrid_cams_pane

0x2fec,	// (0x0007d914) cell_cams_pane_ParamLimits

0x2fec,	// (0x0007d914) cell_cams_pane

0xab37,	// (0x0008545f) cams_burst_image_pane

0xab3f,	// (0x00085467) cell_cams_pane_g1

0xa579,	// (0x00084ea1) grid_highlight_pane_cp03

0xa94e,	// (0x00085276) mp_bg_pane_g1

0xa579,	// (0x00084ea1) bg_list_pane_cp03

0xc884,	// (0x000871ac) bg_mp_pane

0xc88c,	// (0x000871b4) grid_mp_pane

0xc894,	// (0x000871bc) media_player_g1

0xc89c,	// (0x000871c4) media_player_t1

0xc8aa,	// (0x000871d2) media_player_t2

0xc8b8,	// (0x000871e0) media_player_t3

0xc8c6,	// (0x000871ee) media_player_t4

0xc8d4,	// (0x000871fc) media_player_t5

0xc8e2,	// (0x0008720a) media_player_t6

0xc8f0,	// (0x00087218) media_player_t7

0x0006,

0xf5da,	// (0x00089f02) media_player_t

0xc8fe,	// (0x00087226) wait_bar_pane_cp02

0xf5bf,	// (0x00089ee7) main_usb_pane_t

0x50e5,	// (0x0007fa0d) cell_mp_pane

0xa94e,	// (0x00085276) cell_mp_pane_g1

0xa579,	// (0x00084ea1) grid_highlight_pane_cp06

0xab47,	// (0x0008546f) grid_skin_colour_pane

0xab4f,	// (0x00085477) list_highlight_pane_cp03

0x2fff,	// (0x0007d927) skin_g1

0xab57,	// (0x0008547f) skin_t1

0xab66,	// (0x0008548e) skin_t2

0x0001,

0xf260,	// (0x00089b88) skin_t

0x3009,	// (0x0007d931) cell_skin_colour_pane_ParamLimits

0x3009,	// (0x0007d931) cell_skin_colour_pane

0xab74,	// (0x0008549c) cell_skin_colour_pane_g1

0x308d,	// (0x0007d9b5) call_video_g1_ParamLimits

0x308d,	// (0x0007d9b5) call_video_g1

0x309d,	// (0x0007d9c5) call_video_g2_ParamLimits

0x309d,	// (0x0007d9c5) call_video_g2

0x0001,

0xf265,	// (0x00089b8d) call_video_g_ParamLimits

0xf265,	// (0x00089b8d) call_video_g

0x30f7,	// (0x0007da1f) call_video_uplink_pane_cp1_ParamLimits

0x30f7,	// (0x0007da1f) call_video_uplink_pane_cp1

0xab86,	// (0x000854ae) call_video_uplink_pane_cp2

0x31c3,	// (0x0007daeb) video_down_crop_pane_ParamLimits

0x31c3,	// (0x0007daeb) video_down_crop_pane

0x32b5,	// (0x0007dbdd) video_down_pane_ParamLimits

0x32b5,	// (0x0007dbdd) video_down_pane

0xab8e,	// (0x000854b6) video_down_subqcif_pane_ParamLimits

0xab8e,	// (0x000854b6) video_down_subqcif_pane

0xaba6,	// (0x000854ce) video_down_subqcif_pane_cp_ParamLimits

0xaba6,	// (0x000854ce) video_down_subqcif_pane_cp

0xabcc,	// (0x000854f4) im_reading_pane_ParamLimits

0xabcc,	// (0x000854f4) im_reading_pane

0x33d5,	// (0x0007dcfd) im_writing_pane_ParamLimits

0x33d5,	// (0x0007dcfd) im_writing_pane

0x33f3,	// (0x0007dd1b) im_reading_pane_t1

0xabe6,	// (0x0008550e) list_im_pane

0xabf7,	// (0x0008551f) scroll_pane_cp07

0x344b,	// (0x0007dd73) im_writing_pane_t1_ParamLimits

0x344b,	// (0x0007dd73) im_writing_pane_t1

0xac10,	// (0x00085538) im_writing_pane_t2_ParamLimits

0xac10,	// (0x00085538) im_writing_pane_t2

0x0001,

0xf26f,	// (0x00089b97) im_writing_pane_t_ParamLimits

0xf26f,	// (0x00089b97) im_writing_pane_t

0xa579,	// (0x00084ea1) input_focus_pane_cp04

0xa579,	// (0x00084ea1) input_focus_pane_cp05

0x345d,	// (0x0007dd85) list_im_single_pane_ParamLimits

0x345d,	// (0x0007dd85) list_im_single_pane

0x3484,	// (0x0007ddac) list_single_im_pane_t1

0x50a9,	// (0x0007f9d1) blid_accuracy_pane

0x50b1,	// (0x0007f9d9) blid_compass_pane

0x50bb,	// (0x0007f9e3) main_location_t1

0x50c9,	// (0x0007f9f1) main_location_t2

0x50d7,	// (0x0007f9ff) main_location_t3

0x0002,

0xf5e9,	// (0x00089f11) main_location_t

0xa579,	// (0x00084ea1) aid_levels_location

0xa94e,	// (0x00085276) blid_accuracy_pane_g1

0xa94e,	// (0x00085276) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00089bf9) blid_accuracy_pane_g

0xac58,	// (0x00085580) wml_content_pane

0xac96,	// (0x000855be) wml_button_pane_ParamLimits

0xac96,	// (0x000855be) wml_button_pane

0x3493,	// (0x0007ddbb) wml_list_single_large_pane_ParamLimits

0x3493,	// (0x0007ddbb) wml_list_single_large_pane

0x34be,	// (0x0007dde6) wml_list_single_medium_pane_ParamLimits

0x34be,	// (0x0007dde6) wml_list_single_medium_pane

0x34f0,	// (0x0007de18) wml_list_single_small_pane_ParamLimits

0x34f0,	// (0x0007de18) wml_list_single_small_pane

0xacaa,	// (0x000855d2) wml_selection_box_pane_ParamLimits

0xacaa,	// (0x000855d2) wml_selection_box_pane

0xacbd,	// (0x000855e5) wml_list_single_pane_t1

0xaccc,	// (0x000855f4) wml_list_single_medium_pane_t1

0xacdb,	// (0x00085603) wml_list_single_large_pane_t1

0xacea,	// (0x00085612) input_focus_pane_cp02_ParamLimits

0xacea,	// (0x00085612) input_focus_pane_cp02

0xacfd,	// (0x00085625) wml_selection_box_pane_g1

0xad06,	// (0x0008562e) wml_selection_box_pane_t1_ParamLimits

0xad06,	// (0x0008562e) wml_selection_box_pane_t1

0xa828,	// (0x00085150) bg_wml_button_pane_ParamLimits

0xa828,	// (0x00085150) bg_wml_button_pane

0xad1e,	// (0x00085646) wml_button_pane_g1

0xad26,	// (0x0008564e) wml_button_pane_t1

0xad1e,	// (0x00085646) wml_button_bg_pane_g1

0xad36,	// (0x0008565e) wml_button_bg_pane_g2

0xad3e,	// (0x00085666) wml_button_bg_pane_g3

0xad46,	// (0x0008566e) wml_button_bg_pane_g4

0xad4e,	// (0x00085676) wml_button_bg_pane_g5

0xad56,	// (0x0008567e) wml_button_bg_pane_g6

0xad5e,	// (0x00085686) wml_button_bg_pane_g7

0xad66,	// (0x0008568e) wml_button_bg_pane_g8

0xad6e,	// (0x00085696) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00089b9c) wml_button_bg_pane_g

0x352d,	// (0x0007de55) bg_list_pane_cp02

0xad76,	// (0x0008569e) mce_header_pane_ParamLimits

0xad76,	// (0x0008569e) mce_header_pane

0xad8c,	// (0x000856b4) mce_icon_pane

0xad8c,	// (0x000856b4) mce_image_pane

0xad95,	// (0x000856bd) mce_text_pane_ParamLimits

0xad95,	// (0x000856bd) mce_text_pane

0x3537,	// (0x0007de5f) scroll_pane_cp03

0xac8e,	// (0x000855b6) scroll_pane_cp04

0xada8,	// (0x000856d0) scroll_pane_cp05_ParamLimits

0xada8,	// (0x000856d0) scroll_pane_cp05

0x3541,	// (0x0007de69) mce_header_field_pane_ParamLimits

0x3541,	// (0x0007de69) mce_header_field_pane

0x3561,	// (0x0007de89) mce_header_field_pane_2_ParamLimits

0x3561,	// (0x0007de89) mce_header_field_pane_2

0x3577,	// (0x0007de9f) mce_header_field_pane_3

0x357f,	// (0x0007dea7) list_single_mce_message_pane_ParamLimits

0x357f,	// (0x0007dea7) list_single_mce_message_pane

0x35ad,	// (0x0007ded5) list_single_mce_smart_pane_ParamLimits

0x35ad,	// (0x0007ded5) list_single_mce_smart_pane

0xadb4,	// (0x000856dc) input_focus_pane_cp03

0xadbd,	// (0x000856e5) list_header_data_pane

0x35e6,	// (0x0007df0e) mce_header_field_pane_t1

0x35f4,	// (0x0007df1c) list_single_mce_header_pane_ParamLimits

0x35f4,	// (0x0007df1c) list_single_mce_header_pane

0xadc5,	// (0x000856ed) list_single_mce_header_pane_t1

0xadd4,	// (0x000856fc) list_single_mce_message_pane_g1

0xaddc,	// (0x00085704) list_single_mce_message_pane_t1

0x364a,	// (0x0007df72) bg_cale_heading_pane_cp01_ParamLimits

0x364a,	// (0x0007df72) bg_cale_heading_pane_cp01

0xadea,	// (0x00085712) bg_cale_pane_cp02_ParamLimits

0xadea,	// (0x00085712) bg_cale_pane_cp02

0x3698,	// (0x0007dfc0) cale_month_corner_pane

0x36b7,	// (0x0007dfdf) cale_month_day_heading_pane_ParamLimits

0x36b7,	// (0x0007dfdf) cale_month_day_heading_pane

0x371d,	// (0x0007e045) cale_month_pane_g1_ParamLimits

0x371d,	// (0x0007e045) cale_month_pane_g1

0x3760,	// (0x0007e088) cale_month_pane_g2_ParamLimits

0x3760,	// (0x0007e088) cale_month_pane_g2

0x379a,	// (0x0007e0c2) cale_month_pane_g3_ParamLimits

0x379a,	// (0x0007e0c2) cale_month_pane_g3

0x37ea,	// (0x0007e112) cale_month_pane_g4_ParamLimits

0x37ea,	// (0x0007e112) cale_month_pane_g4

0x383a,	// (0x0007e162) cale_month_pane_g5_ParamLimits

0x383a,	// (0x0007e162) cale_month_pane_g5

0x388a,	// (0x0007e1b2) cale_month_pane_g6_ParamLimits

0x388a,	// (0x0007e1b2) cale_month_pane_g6

0x38da,	// (0x0007e202) cale_month_pane_g7_ParamLimits

0x38da,	// (0x0007e202) cale_month_pane_g7

0x3942,	// (0x0007e26a) cale_month_pane_g8_ParamLimits

0x3942,	// (0x0007e26a) cale_month_pane_g8

0x39aa,	// (0x0007e2d2) cale_month_pane_g9_ParamLimits

0x39aa,	// (0x0007e2d2) cale_month_pane_g9

0x3a08,	// (0x0007e330) cale_month_pane_g10_ParamLimits

0x3a08,	// (0x0007e330) cale_month_pane_g10

0x3a66,	// (0x0007e38e) cale_month_pane_g11_ParamLimits

0x3a66,	// (0x0007e38e) cale_month_pane_g11

0x3aba,	// (0x0007e3e2) cale_month_pane_g12_ParamLimits

0x3aba,	// (0x0007e3e2) cale_month_pane_g12

0x3b10,	// (0x0007e438) cale_month_pane_g13_ParamLimits

0x3b10,	// (0x0007e438) cale_month_pane_g13

0x000c,

0xf287,	// (0x00089baf) cale_month_pane_g_ParamLimits

0xf287,	// (0x00089baf) cale_month_pane_g

0x3b66,	// (0x0007e48e) cale_month_week_pane

0x3b8a,	// (0x0007e4b2) grid_cale_month_pane_ParamLimits

0x3b8a,	// (0x0007e4b2) grid_cale_month_pane

0x3be7,	// (0x0007e50f) cale_month_day_heading_pane_t1

0x3c6d,	// (0x0007e595) cale_month_day_heading_pane_t2

0x3ce6,	// (0x0007e60e) cale_month_day_heading_pane_t3

0x3d5f,	// (0x0007e687) cale_month_day_heading_pane_t4

0x3dd8,	// (0x0007e700) cale_month_day_heading_pane_t5

0x3e51,	// (0x0007e779) cale_month_day_heading_pane_t6

0x3eca,	// (0x0007e7f2) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00089bca) cale_month_day_heading_pane_t

0xaa8a,	// (0x000853b2) bg_cale_side_pane_cp01

0x3f5b,	// (0x0007e883) cale_month_week_pane_t1

0x3f74,	// (0x0007e89c) cale_month_week_pane_t2

0x3f8d,	// (0x0007e8b5) cale_month_week_pane_t3

0x3fa6,	// (0x0007e8ce) cale_month_week_pane_t4

0x3fc1,	// (0x0007e8e9) cale_month_week_pane_t5

0x3fe2,	// (0x0007e90a) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00089bd9) cale_month_week_pane_t

0x4003,	// (0x0007e92b) cell_cale_month_pane_ParamLimits

0x4003,	// (0x0007e92b) cell_cale_month_pane

0x4129,	// (0x0007ea51) cell_cale_month_pane_g1

0x4135,	// (0x0007ea5d) cell_cale_month_pane_t1_ParamLimits

0x4135,	// (0x0007ea5d) cell_cale_month_pane_t1

0xaa98,	// (0x000853c0) grid_highlight_pane_cp08

0xa94e,	// (0x00085276) main_smil_g1

0x4161,	// (0x0007ea89) smil_status_pane

0xae29,	// (0x00085751) smil_text_pane

0xc764,	// (0x0008708c) bg_popup_call3_rect_pane_g8

0xc76c,	// (0x00087094) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x00089e92) bg_popup_call3_rect_pane_g

0xc9f3,	// (0x0008731b) smil_status_volume_pane_g1

0xae33,	// (0x0008575b) smil_status_pane_t1

0x54d2,	// (0x0007fdfa) volume_smil_pane

0xae4a,	// (0x00085772) list_smil_text_pane

0x4174,	// (0x0007ea9c) scroll_pane_cp011

0x417f,	// (0x0007eaa7) smil_text_list_pane_t1_ParamLimits

0x417f,	// (0x0007eaa7) smil_text_list_pane_t1

0x420c,	// (0x0007eb34) aid_volume_smil_ParamLimits

0x420c,	// (0x0007eb34) aid_volume_smil

0xa94e,	// (0x00085276) smil_volume_pane_g1

0xa94e,	// (0x00085276) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00089bf9) smil_volume_pane_g

0x28d6,	// (0x0007d1fe) listscroll_cale_day_pane

0xae54,	// (0x0008577c) bg_cale_pane

0xae6c,	// (0x00085794) list_cale_pane

0xae8f,	// (0x000857b7) scroll_pane_cp09

0xaea0,	// (0x000857c8) cale_bg_pane_g1

0xaea8,	// (0x000857d0) cale_bg_pane_g2

0xaeb0,	// (0x000857d8) cale_bg_pane_g3

0xaeb8,	// (0x000857e0) cale_bg_pane_g4

0xaec0,	// (0x000857e8) cale_bg_pane_g5

0xaec8,	// (0x000857f0) cale_bg_pane_g6

0xaed0,	// (0x000857f8) cale_bg_pane_g7

0xaed8,	// (0x00085800) cale_bg_pane_g8

0xaee0,	// (0x00085808) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00089bfe) cale_bg_pane_g

0x4236,	// (0x0007eb5e) list_cale_time_pane_ParamLimits

0x4236,	// (0x0007eb5e) list_cale_time_pane

0xaee8,	// (0x00085810) list_cale_time_pane_g1_ParamLimits

0xaee8,	// (0x00085810) list_cale_time_pane_g1

0xaef4,	// (0x0008581c) list_cale_time_pane_g2_ParamLimits

0xaef4,	// (0x0008581c) list_cale_time_pane_g2

0x425e,	// (0x0007eb86) list_cale_time_pane_g3_ParamLimits

0x425e,	// (0x0007eb86) list_cale_time_pane_g3

0x426c,	// (0x0007eb94) list_cale_time_pane_g4_ParamLimits

0x426c,	// (0x0007eb94) list_cale_time_pane_g4

0x427a,	// (0x0007eba2) list_cale_time_pane_g5_ParamLimits

0x427a,	// (0x0007eba2) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x00089c11) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x00089c11) list_cale_time_pane_g

0xaf0e,	// (0x00085836) list_cale_time_pane_t1_ParamLimits

0xaf0e,	// (0x00085836) list_cale_time_pane_t1

0xaf36,	// (0x0008585e) list_cale_time_pane_t2_ParamLimits

0xaf36,	// (0x0008585e) list_cale_time_pane_t2

0x4559,	// (0x0007ee81) aid_blid_cardinal_pane

0x459b,	// (0x0007eec3) compass_pane_t4

0xaf5e,	// (0x00085886) list_cale_time_pane_t4_ParamLimits

0xaf5e,	// (0x00085886) list_cale_time_pane_t4

0x45a9,	// (0x0007eed1) compass_pane_t5

0x45b9,	// (0x0007eee1) compass_pane_t6

0x45c7,	// (0x0007eeef) compass_pane_t7

0xb3e2,	// (0x00085d0a) navi_pane_cc_t1

0xb5cd,	// (0x00085ef5) aid_phob_thumbnail_center_pane

0x4baa,	// (0x0007f4d2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x00089c1e) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x00089c1e) list_cale_time_pane_t

0xa1d0,	// (0x00084af8) bg_popup_window_pane_cp02_ParamLimits

0xa1d0,	// (0x00084af8) bg_popup_window_pane_cp02

0xaf86,	// (0x000858ae) heading_pane_cp01_ParamLimits

0xaf86,	// (0x000858ae) heading_pane_cp01

0xaf92,	// (0x000858ba) loc_req_pane_ParamLimits

0xaf92,	// (0x000858ba) loc_req_pane

0xafa2,	// (0x000858ca) loc_type_pane_ParamLimits

0xafa2,	// (0x000858ca) loc_type_pane

0xafb4,	// (0x000858dc) loc_type_pane_t1_ParamLimits

0xafb4,	// (0x000858dc) loc_type_pane_t1

0xafc6,	// (0x000858ee) loc_type_pane_t2_ParamLimits

0xafc6,	// (0x000858ee) loc_type_pane_t2

0xafd8,	// (0x00085900) loc_type_pane_t3_ParamLimits

0xafd8,	// (0x00085900) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x00089c25) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x00089c25) loc_type_pane_t

0xafea,	// (0x00085912) list_loc_req_pane

0xaff4,	// (0x0008591c) scroll_pane_cp012

0x0e86,	// (0x0007b7ae) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e86,	// (0x0007b7ae) list_single_loc_request_popup_menu_pane

0xafff,	// (0x00085927) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafff,	// (0x00085927) list_single_loc_request_popup_menu_pane_g1

0xb00b,	// (0x00085933) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb00b,	// (0x00085933) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x00089c2c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x00089c2c) list_single_loc_request_popup_menu_pane_g

0xb017,	// (0x0008593f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb017,	// (0x0008593f) list_single_loc_request_popup_menu_pane_t1

0x4288,	// (0x0007ebb0) bg_popup_window_pane_cp03_ParamLimits

0x4288,	// (0x0007ebb0) bg_popup_window_pane_cp03

0x4296,	// (0x0007ebbe) heading_loc_req_pane_ParamLimits

0x4296,	// (0x0007ebbe) heading_loc_req_pane

0x42a2,	// (0x0007ebca) popup_dyc_status_message_window_g1_ParamLimits

0x42a2,	// (0x0007ebca) popup_dyc_status_message_window_g1

0x42ae,	// (0x0007ebd6) popup_dyc_status_message_window_t1_ParamLimits

0x42ae,	// (0x0007ebd6) popup_dyc_status_message_window_t1

0x42c0,	// (0x0007ebe8) popup_dyc_status_message_window_t2_ParamLimits

0x42c0,	// (0x0007ebe8) popup_dyc_status_message_window_t2

0x42d2,	// (0x0007ebfa) popup_dyc_status_message_window_t3_ParamLimits

0x42d2,	// (0x0007ebfa) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x00089c31) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x00089c31) popup_dyc_status_message_window_t

0xa579,	// (0x00084ea1) bg_heading_pane_cp01

0xb02d,	// (0x00085955) heading_loc_req_pane_g1

0xb035,	// (0x0008595d) heading_loc_req_pane_g2

0xb03d,	// (0x00085965) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00089c38) heading_loc_req_pane_g

0xb045,	// (0x0008596d) heading_loc_req_pane_t1

0xb054,	// (0x0008597c) bg_popup_sub_pane_cp01_ParamLimits

0xb054,	// (0x0008597c) bg_popup_sub_pane_cp01

0xb062,	// (0x0008598a) popup_cale_events_window_g1_ParamLimits

0xb062,	// (0x0008598a) popup_cale_events_window_g1

0xb082,	// (0x000859aa) popup_cale_events_window_g2_ParamLimits

0xb082,	// (0x000859aa) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00089c6c) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00089c6c) popup_cale_events_window_g

0xb0a2,	// (0x000859ca) popup_cale_events_window_t1_ParamLimits

0xb0a2,	// (0x000859ca) popup_cale_events_window_t1

0xb0b4,	// (0x000859dc) popup_cale_events_window_t2_ParamLimits

0xb0b4,	// (0x000859dc) popup_cale_events_window_t2

0xb0fe,	// (0x00085a26) popup_cale_events_window_t3_ParamLimits

0xb0fe,	// (0x00085a26) popup_cale_events_window_t3

0xb138,	// (0x00085a60) popup_cale_events_window_t4_ParamLimits

0xb138,	// (0x00085a60) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x00089c71) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x00089c71) popup_cale_events_window_t

0x42fc,	// (0x0007ec24) call_type_pane

0xb580,	// (0x00085ea8) popup_call_status_window_g1

0x4308,	// (0x0007ec30) popup_call_status_window_g2

0x4314,	// (0x0007ec3c) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00089c7a) popup_call_status_window_g

0xb16e,	// (0x00085a96) call_type_pane_g1

0xb177,	// (0x00085a9f) call_type_pane_g2

0x0001,

0xf359,	// (0x00089c81) call_type_pane_g

0xa579,	// (0x00084ea1) bg_popup_sub_pane_cp02

0xb180,	// (0x00085aa8) listscroll_popup_wml_pane

0xb188,	// (0x00085ab0) list_wml_pane

0xb192,	// (0x00085aba) scroll_pane_cp013

0xb19d,	// (0x00085ac5) list_single_graphic_popup_wml_pane_ParamLimits

0xb19d,	// (0x00085ac5) list_single_graphic_popup_wml_pane

0xa94e,	// (0x00085276) list_single_graphic_popup_wml_pane_g1

0xb1b1,	// (0x00085ad9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x00089c86) list_single_graphic_popup_wml_pane_g

0xb1b9,	// (0x00085ae1) list_single_graphic_popup_wml_pane_t1

0xb1cf,	// (0x00085af7) aid_call_pane

0xa820,	// (0x00085148) popup_clock_analogue_window_g1

0xa820,	// (0x00085148) popup_clock_analogue_window_g2

0x4320,	// (0x0007ec48) popup_clock_analogue_window_g3

0x4320,	// (0x0007ec48) popup_clock_analogue_window_g4

0xa94e,	// (0x00085276) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00089c8b) popup_clock_analogue_window_g

0x4328,	// (0x0007ec50) popup_clock_analogue_window_t1

0x4336,	// (0x0007ec5e) clock_digital_number_pane_ParamLimits

0x4336,	// (0x0007ec5e) clock_digital_number_pane

0x4342,	// (0x0007ec6a) clock_digital_number_pane_cp02_ParamLimits

0x4342,	// (0x0007ec6a) clock_digital_number_pane_cp02

0x434e,	// (0x0007ec76) clock_digital_number_pane_cp03_ParamLimits

0x434e,	// (0x0007ec76) clock_digital_number_pane_cp03

0x435a,	// (0x0007ec82) clock_digital_number_pane_cp04_ParamLimits

0x435a,	// (0x0007ec82) clock_digital_number_pane_cp04

0x4366,	// (0x0007ec8e) clock_digital_separator_pane_ParamLimits

0x4366,	// (0x0007ec8e) clock_digital_separator_pane

0x4372,	// (0x0007ec9a) popup_clock_digital_window_t1

0xa94e,	// (0x00085276) clock_digital_number_pane_g1

0xa94e,	// (0x00085276) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00089bf9) clock_digital_number_pane_g

0xa94e,	// (0x00085276) clock_digital_separator_pane_g1

0xa94e,	// (0x00085276) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00089bf9) clock_digital_separator_pane_g

0xa579,	// (0x00084ea1) bg_popup_window_pane_cp04

0xb1d7,	// (0x00085aff) heading_pane_cp03

0xb1df,	// (0x00085b07) listscroll_popup_gms_pane

0xb1e7,	// (0x00085b0f) grid_large_graphic_popup_pane

0xb1f1,	// (0x00085b19) listscroll_popup_gms_pane_g1

0xb1f9,	// (0x00085b21) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x00089c96) listscroll_popup_gms_pane_g

0xac8e,	// (0x000855b6) scroll_pane_cp014

0x438f,	// (0x0007ecb7) cell_large_graphic_popup_pane_ParamLimits

0x438f,	// (0x0007ecb7) cell_large_graphic_popup_pane

0x43a7,	// (0x0007eccf) cell_large_graphic_popup_pane_g1_ParamLimits

0x43a7,	// (0x0007eccf) cell_large_graphic_popup_pane_g1

0xb201,	// (0x00085b29) cell_large_graphic_popup_pane_g2_ParamLimits

0xb201,	// (0x00085b29) cell_large_graphic_popup_pane_g2

0xb20d,	// (0x00085b35) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20d,	// (0x00085b35) cell_large_graphic_popup_pane_g3

0xb21a,	// (0x00085b42) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21a,	// (0x00085b42) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00089c9b) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00089c9b) cell_large_graphic_popup_pane_g

0xb22a,	// (0x00085b52) grid_highlight_pane_cp010

0xa94e,	// (0x00085276) bg_popup_call_pane_g1

0xb234,	// (0x00085b5c) list_single_graphic_popup_conf_pane_ParamLimits

0xb234,	// (0x00085b5c) list_single_graphic_popup_conf_pane

0xb247,	// (0x00085b6f) list_highlight_pane_cp01

0xb250,	// (0x00085b78) list_single_graphic_popup_conf_pane_g1

0xb258,	// (0x00085b80) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x00089ca4) list_single_graphic_popup_conf_pane_g

0xb260,	// (0x00085b88) list_single_graphic_popup_conf_pane_t1

0xb26e,	// (0x00085b96) linegrid_cams_pane_g1

0x43b3,	// (0x0007ecdb) linegrid_cams_pane_g2

0xaacb,	// (0x000853f3) linegrid_cams_pane_g3

0xb277,	// (0x00085b9f) linegrid_cams_pane_g4

0x43bc,	// (0x0007ece4) linegrid_cams_pane_g5

0x43c5,	// (0x0007eced) linegrid_cams_pane_g6

0xaad4,	// (0x000853fc) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00089ca9) linegrid_cams_pane_g

0xb280,	// (0x00085ba8) popup_clock_analogue_window

0xb280,	// (0x00085ba8) popup_clock_digital_window

0xa579,	// (0x00084ea1) popup_phob_thumbnail_window

0xa94e,	// (0x00085276) call_video_uplink_pane_g1

0xb289,	// (0x00085bb1) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00089cb8) call_video_uplink_pane_g

0xb291,	// (0x00085bb9) video_uplink_pane

0xb299,	// (0x00085bc1) mce_image_pane_g1

0x43ce,	// (0x0007ecf6) mce_image_pane_g2

0x43d6,	// (0x0007ecfe) mce_image_pane_g3

0x43de,	// (0x0007ed06) mce_image_pane_g4

0x43e6,	// (0x0007ed0e) mce_image_pane_g5

0x0004,

0xf395,	// (0x00089cbd) mce_image_pane_g

0xb2a3,	// (0x00085bcb) control_top_pane_stacon_cp01_ParamLimits

0xb2a3,	// (0x00085bcb) control_top_pane_stacon_cp01

0xb2b7,	// (0x00085bdf) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b7,	// (0x00085bdf) uni_indicator_pane_stacon_cp01

0xb2c8,	// (0x00085bf0) bg_popup_sub_pane_cp03

0x43ee,	// (0x0007ed16) chi_dic_find_pane

0x43f6,	// (0x0007ed1e) listscroll_chi_dic_pane

0x43ff,	// (0x0007ed27) main_pane_chidic_g1

0x4412,	// (0x0007ed3a) chi_dic_find_pane_t1

0xb2d2,	// (0x00085bfa) find_chidic_pane

0xb2db,	// (0x00085c03) chi_dic_list_pane_ParamLimits

0xb2db,	// (0x00085c03) chi_dic_list_pane

0xb2ec,	// (0x00085c14) scroll_pane_cp020

0x4420,	// (0x0007ed48) find_chidic_pane_t1

0xa579,	// (0x00084ea1) input_focus_pane_cp06

0x442f,	// (0x0007ed57) list_chi_dic_pane_ParamLimits

0x442f,	// (0x0007ed57) list_chi_dic_pane

0x444c,	// (0x0007ed74) list_chi_dic_pane_t1_ParamLimits

0x444c,	// (0x0007ed74) list_chi_dic_pane_t1

0xa579,	// (0x00084ea1) list_highlight_pane_cp020

0xb2f4,	// (0x00085c1c) bg_cale_heading_pane_g1

0x445f,	// (0x0007ed87) bg_cale_heading_pane_g2

0x4467,	// (0x0007ed8f) bg_cale_heading_pane_g3

0x446f,	// (0x0007ed97) bg_cale_heading_pane_g4

0x4479,	// (0x0007eda1) bg_cale_heading_pane_g5

0x4483,	// (0x0007edab) bg_cale_heading_pane_g6

0x448b,	// (0x0007edb3) bg_cale_heading_pane_g7

0x4493,	// (0x0007edbb) bg_cale_heading_pane_g8

0x449d,	// (0x0007edc5) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00089cc8) bg_cale_heading_pane_g

0xb2f4,	// (0x00085c1c) bg_cale_side_pane_g1

0x44a7,	// (0x0007edcf) bg_cale_side_pane_g2

0x44b1,	// (0x0007edd9) bg_cale_side_pane_g3

0x44bb,	// (0x0007ede3) bg_cale_side_pane_g4

0x44c5,	// (0x0007eded) bg_cale_side_pane_g5

0x44cf,	// (0x0007edf7) bg_cale_side_pane_g6

0x44d9,	// (0x0007ee01) bg_cale_side_pane_g7

0x44e3,	// (0x0007ee0b) bg_cale_side_pane_g8

0x44eb,	// (0x0007ee13) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00089cdb) bg_cale_side_pane_g

0x44f3,	// (0x0007ee1b) popup_call_status_window_ParamLimits

0x44f3,	// (0x0007ee1b) popup_call_status_window

0xb2fc,	// (0x00085c24) stacon_top_pane

0xb304,	// (0x00085c2c) status_pane_ParamLimits

0xb304,	// (0x00085c2c) status_pane

0xb319,	// (0x00085c41) status_small_pane

0xb321,	// (0x00085c49) control_pane

0xa579,	// (0x00084ea1) stacon_bottom_pane

0xb329,	// (0x00085c51) list_single_mce_smart_pane_t1_ParamLimits

0xb329,	// (0x00085c51) list_single_mce_smart_pane_t1

0xb33c,	// (0x00085c64) list_single_mce_smart_pane_t2_ParamLimits

0xb33c,	// (0x00085c64) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00089cee) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00089cee) list_single_mce_smart_pane_t

0x44ff,	// (0x0007ee27) compass_pane

0x450b,	// (0x0007ee33) main_location2_pane_t1

0x451f,	// (0x0007ee47) main_location2_pane_t2

0x4533,	// (0x0007ee5b) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x00089cf3) main_location2_pane_t

0xb35b,	// (0x00085c83) compass_pane_g1_ParamLimits

0xb35b,	// (0x00085c83) compass_pane_g1

0x457d,	// (0x0007eea5) compass_pane_t1

0x458c,	// (0x0007eeb4) compass_pane_t2

0x0005,

0xf3d4,	// (0x00089cfc) compass_pane_t

0x45d7,	// (0x0007eeff) text_secondary_cp61

0xb3d9,	// (0x00085d01) navi_pane_cams_g5

0xb455,	// (0x00085d7d) navi_pane_im_t1

0xb463,	// (0x00085d8b) navi_pane_mp_g1_ParamLimits

0xb463,	// (0x00085d8b) navi_pane_mp_g1

0xb477,	// (0x00085d9f) navi_pane_mp_g2_ParamLimits

0xb477,	// (0x00085d9f) navi_pane_mp_g2

0xb483,	// (0x00085dab) navi_pane_mp_g3_ParamLimits

0xb483,	// (0x00085dab) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00089d10) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00089d10) navi_pane_mp_g

0xb48f,	// (0x00085db7) navi_pane_mp_t1

0xb49d,	// (0x00085dc5) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x00089d17) navi_pane_mp_t

0xb508,	// (0x00085e30) navi_pane_vt_g1

0xb48f,	// (0x00085db7) navi_pane_vt_t1

0xb510,	// (0x00085e38) navi_slider_pane

0xaae5,	// (0x0008540d) zooming_pane

0xb520,	// (0x00085e48) navi_slider_pane_g1

0x4612,	// (0x0007ef3a) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00089d1e) navi_slider_pane_g

0xb544,	// (0x00085e6c) aid_levels_zoom

0xb54c,	// (0x00085e74) zooming_pane_g1

0xb554,	// (0x00085e7c) zooming_pane_g2

0xb554,	// (0x00085e7c) zooming_pane_g3

0x0002,

0xf405,	// (0x00089d2d) zooming_pane_g

0xb55c,	// (0x00085e84) level_10_zoom

0xb565,	// (0x00085e8d) level_11_zoom

0xb56e,	// (0x00085e96) level_1_zoom

0xb577,	// (0x00085e9f) level_2_zoom

0xb58e,	// (0x00085eb6) level_3_zoom

0xb597,	// (0x00085ebf) level_4_zoom

0xb5a0,	// (0x00085ec8) level_5_zoom

0xb5a9,	// (0x00085ed1) level_6_zoom

0xb5b2,	// (0x00085eda) level_7_zoom

0xb5bb,	// (0x00085ee3) level_8_zoom

0xb5c4,	// (0x00085eec) level_9_zoom

0xb5d5,	// (0x00085efd) popup_phob_thumbnail_window_g1

0xb5dd,	// (0x00085f05) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x00089d34) popup_phob_thumbnail_window_g

0xc906,	// (0x0008722e) level_1_location

0xc90e,	// (0x00087236) level_2_location

0xc916,	// (0x0008723e) level_3_location

0xc91e,	// (0x00087246) level_4_location

0xaae5,	// (0x0008540d) level_5_location

0x4624,	// (0x0007ef4c) mce_icon_pane_g1

0x462c,	// (0x0007ef54) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00089d39) mce_icon_pane_g

0x4634,	// (0x0007ef5c) main_mup_pane_g1_ParamLimits

0x4634,	// (0x0007ef5c) main_mup_pane_g1

0x464c,	// (0x0007ef74) main_mup_pane_g2_ParamLimits

0x464c,	// (0x0007ef74) main_mup_pane_g2

0x4660,	// (0x0007ef88) main_mup_pane_g3_ParamLimits

0x4660,	// (0x0007ef88) main_mup_pane_g3

0x4674,	// (0x0007ef9c) main_mup_pane_g4_ParamLimits

0x4674,	// (0x0007ef9c) main_mup_pane_g4

0x4690,	// (0x0007efb8) main_mup_pane_g5_ParamLimits

0x4690,	// (0x0007efb8) main_mup_pane_g5

0x46b1,	// (0x0007efd9) main_mup_pane_g6_ParamLimits

0x46b1,	// (0x0007efd9) main_mup_pane_g6

0x46cd,	// (0x0007eff5) main_mup_pane_g7_ParamLimits

0x46cd,	// (0x0007eff5) main_mup_pane_g7

0x46e9,	// (0x0007f011) main_mup_pane_g8_ParamLimits

0x46e9,	// (0x0007f011) main_mup_pane_g8

0x4705,	// (0x0007f02d) main_mup_pane_g9_ParamLimits

0x4705,	// (0x0007f02d) main_mup_pane_g9

0x4724,	// (0x0007f04c) main_mup_pane_g10_ParamLimits

0x4724,	// (0x0007f04c) main_mup_pane_g10

0x4743,	// (0x0007f06b) main_mup_pane_g11_ParamLimits

0x4743,	// (0x0007f06b) main_mup_pane_g11

0x475b,	// (0x0007f083) main_mup_pane_g12_ParamLimits

0x475b,	// (0x0007f083) main_mup_pane_g12

0x4769,	// (0x0007f091) main_mup_pane_g13_ParamLimits

0x4769,	// (0x0007f091) main_mup_pane_g13

0x000c,

0xf416,	// (0x00089d3e) main_mup_pane_g_ParamLimits

0xf416,	// (0x00089d3e) main_mup_pane_g

0x477f,	// (0x0007f0a7) main_mup_pane_t1_ParamLimits

0x477f,	// (0x0007f0a7) main_mup_pane_t1

0x479c,	// (0x0007f0c4) main_mup_pane_t2_ParamLimits

0x479c,	// (0x0007f0c4) main_mup_pane_t2

0x47b6,	// (0x0007f0de) main_mup_pane_t3_ParamLimits

0x47b6,	// (0x0007f0de) main_mup_pane_t3

0x47d0,	// (0x0007f0f8) main_mup_pane_t4_ParamLimits

0x47d0,	// (0x0007f0f8) main_mup_pane_t4

0x47e2,	// (0x0007f10a) main_mup_pane_t5_ParamLimits

0x47e2,	// (0x0007f10a) main_mup_pane_t5

0x47f4,	// (0x0007f11c) main_mup_pane_t6_ParamLimits

0x47f4,	// (0x0007f11c) main_mup_pane_t6

0x0005,

0xf431,	// (0x00089d59) main_mup_pane_t_ParamLimits

0xf431,	// (0x00089d59) main_mup_pane_t

0x480a,	// (0x0007f132) mup_progress_pane_ParamLimits

0x480a,	// (0x0007f132) mup_progress_pane

0x4816,	// (0x0007f13e) mup_visualizer_pane_ParamLimits

0x4816,	// (0x0007f13e) mup_visualizer_pane

0x4854,	// (0x0007f17c) mup_volume_pane_ParamLimits

0x4854,	// (0x0007f17c) mup_volume_pane

0xb580,	// (0x00085ea8) mup_visualizer_pane_g1_ParamLimits

0xb580,	// (0x00085ea8) mup_visualizer_pane_g1

0xb580,	// (0x00085ea8) mup_visualizer_pane_g2_ParamLimits

0xb580,	// (0x00085ea8) mup_visualizer_pane_g2

0xb35b,	// (0x00085c83) mup_visualizer_pane_g3_ParamLimits

0xb35b,	// (0x00085c83) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00089d66) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00089d66) mup_visualizer_pane_g

0xa94e,	// (0x00085276) mup_volume_pane_g1

0xb5ed,	// (0x00085f15) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00089d6d) mup_volume_pane_g

0xa94e,	// (0x00085276) mup_progress_pane_g1

0xb5f6,	// (0x00085f1e) mup_progress_pane_g2

0xb5ff,	// (0x00085f27) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x00089d72) mup_progress_pane_g

0xa579,	// (0x00084ea1) bg_popup_window_pane_cp05

0xb608,	// (0x00085f30) heading_pane_cp02_ParamLimits

0xb608,	// (0x00085f30) heading_pane_cp02

0xb622,	// (0x00085f4a) list_popup_blid_pane

0xb62a,	// (0x00085f52) list_blid_sat_info_pane_ParamLimits

0xb62a,	// (0x00085f52) list_blid_sat_info_pane

0xb63d,	// (0x00085f65) list_blid_sat_info_pane_g1

0xb645,	// (0x00085f6d) list_blid_sat_info_pane_t1

0x495f,	// (0x0007f287) mup_equalizer_pane_ParamLimits

0x495f,	// (0x0007f287) mup_equalizer_pane

0x4980,	// (0x0007f2a8) mup_equalizer_pane_cp1_ParamLimits

0x4980,	// (0x0007f2a8) mup_equalizer_pane_cp1

0x49a1,	// (0x0007f2c9) mup_equalizer_pane_cp2_ParamLimits

0x49a1,	// (0x0007f2c9) mup_equalizer_pane_cp2

0x49c2,	// (0x0007f2ea) mup_equalizer_pane_cp3_ParamLimits

0x49c2,	// (0x0007f2ea) mup_equalizer_pane_cp3

0x49e3,	// (0x0007f30b) mup_equalizer_pane_cp4_ParamLimits

0x49e3,	// (0x0007f30b) mup_equalizer_pane_cp4

0x4a04,	// (0x0007f32c) mup_equalizer_pane_cp5

0x4a1a,	// (0x0007f342) mup_equalizer_pane_cp6

0x4a32,	// (0x0007f35a) mup_equalizer_pane_cp7

0xc7e4,	// (0x0008710c) bg_popup_call_poc_act_pane_g9

0xc7ec,	// (0x00087114) bg_popup_call_poc_act_pane_g10

0xc7f4,	// (0x0008711c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa828,	// (0x00085150) mup_scale_pane

0xa94e,	// (0x00085276) mup_scale_pane_g1

0xb653,	// (0x00085f7b) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00089d8e) mup_scale_pane_g

0xb677,	// (0x00085f9f) msg_data_pane

0xb67f,	// (0x00085fa7) scroll_pane_cp017

0x0f6f,	// (0x0007b897) bg_list_pane_cp04_ParamLimits

0x0f6f,	// (0x0007b897) bg_list_pane_cp04

0xb687,	// (0x00085faf) msg_data_pane_g1

0x4a5c,	// (0x0007f384) msg_data_pane_g2

0x4a64,	// (0x0007f38c) msg_data_pane_g3

0x4a6c,	// (0x0007f394) msg_data_pane_g4

0x4a74,	// (0x0007f39c) msg_data_pane_g5

0x4a7c,	// (0x0007f3a4) msg_data_pane_g6

0x4a84,	// (0x0007f3ac) msg_data_pane_g7

0x0006,

0xf475,	// (0x00089d9d) msg_data_pane_g

0x0f93,	// (0x0007b8bb) msg_text_pane_ParamLimits

0x0f93,	// (0x0007b8bb) msg_text_pane

0x4a8c,	// (0x0007f3b4) qrid_highlight_pane_cp011_ParamLimits

0x4a8c,	// (0x0007f3b4) qrid_highlight_pane_cp011

0xa579,	// (0x00084ea1) msg_body_pane

0xa579,	// (0x00084ea1) msg_header_pane

0xb698,	// (0x00085fc0) input_focus_pane_cp07

0x0fef,	// (0x0007b917) msg_header_pane_t1_ParamLimits

0x0fef,	// (0x0007b917) msg_header_pane_t1

0x1001,	// (0x0007b929) msg_header_pane_t2_ParamLimits

0x1001,	// (0x0007b929) msg_header_pane_t2

0x0001,

0xf489,	// (0x00089db1) msg_header_pane_t_ParamLimits

0xf489,	// (0x00089db1) msg_header_pane_t

0xb6ad,	// (0x00085fd5) msg_body_pane_g1

0x1013,	// (0x0007b93b) msg_body_pane_t1_ParamLimits

0x1013,	// (0x0007b93b) msg_body_pane_t1

0x1044,	// (0x0007b96c) msg_body_pane_t2_ParamLimits

0x1044,	// (0x0007b96c) msg_body_pane_t2

0x1056,	// (0x0007b97e) msg_body_pane_t3_ParamLimits

0x1056,	// (0x0007b97e) msg_body_pane_t3

0x0002,

0xf48e,	// (0x00089db6) msg_body_pane_t_ParamLimits

0xf48e,	// (0x00089db6) msg_body_pane_t

0x4afa,	// (0x0007f422) main_viewer_pane_g1_ParamLimits

0x4afa,	// (0x0007f422) main_viewer_pane_g1

0x4b06,	// (0x0007f42e) main_viewer_pane_g2_ParamLimits

0x4b06,	// (0x0007f42e) main_viewer_pane_g2

0x4b12,	// (0x0007f43a) main_viewer_pane_g3_ParamLimits

0x4b12,	// (0x0007f43a) main_viewer_pane_g3

0x4b23,	// (0x0007f44b) main_viewer_pane_g4_ParamLimits

0x4b23,	// (0x0007f44b) main_viewer_pane_g4

0x4b34,	// (0x0007f45c) main_viewer_pane_g5_ParamLimits

0x4b34,	// (0x0007f45c) main_viewer_pane_g5

0x4b34,	// (0x0007f45c) main_viewer_pane_g7_ParamLimits

0x4b34,	// (0x0007f45c) main_viewer_pane_g7

0x4b46,	// (0x0007f46e) main_viewer_pane_g8_ParamLimits

0x4b46,	// (0x0007f46e) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x00089dc6) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x00089dc6) main_viewer_pane_g

0xb6b5,	// (0x00085fdd) viewer_content_pane_ParamLimits

0xb6b5,	// (0x00085fdd) viewer_content_pane

0x4b7e,	// (0x0007f4a6) main_postcard_pane_g1_ParamLimits

0x4b7e,	// (0x0007f4a6) main_postcard_pane_g1

0x4b8c,	// (0x0007f4b4) main_postcard_pane_g2_ParamLimits

0x4b8c,	// (0x0007f4b4) main_postcard_pane_g2

0x4b9a,	// (0x0007f4c2) main_postcard_pane_g3_ParamLimits

0x4b9a,	// (0x0007f4c2) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00089dd7) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00089dd7) main_postcard_pane_g

0x4baa,	// (0x0007f4d2) main_postcard_pane_g4

0xca06,	// (0x0008732e) smil_status_volume_pane_g2

0x4bd6,	// (0x0007f4fe) postcard_pane_ParamLimits

0x4bd6,	// (0x0007f4fe) postcard_pane

0xb580,	// (0x00085ea8) postcard_pane_g1_ParamLimits

0xb580,	// (0x00085ea8) postcard_pane_g1

0x4c08,	// (0x0007f530) postcard_pane_g2_ParamLimits

0x4c08,	// (0x0007f530) postcard_pane_g2

0x4c14,	// (0x0007f53c) postcard_pane_g3_ParamLimits

0x4c14,	// (0x0007f53c) postcard_pane_g3

0xb6c3,	// (0x00085feb) postcard_pane_g4_ParamLimits

0xb6c3,	// (0x00085feb) postcard_pane_g4

0x4c20,	// (0x0007f548) postcard_pane_g5_ParamLimits

0x4c20,	// (0x0007f548) postcard_pane_g5

0x4c2c,	// (0x0007f554) postcard_pane_g6_ParamLimits

0x4c2c,	// (0x0007f554) postcard_pane_g6

0xb6d1,	// (0x00085ff9) postcard_pane_g7_ParamLimits

0xb6d1,	// (0x00085ff9) postcard_pane_g7

0x0006,

0xf4bc,	// (0x00089de4) postcard_pane_g_ParamLimits

0xf4bc,	// (0x00089de4) postcard_pane_g

0x4c38,	// (0x0007f560) main_mp2_pane_g1_ParamLimits

0x4c38,	// (0x0007f560) main_mp2_pane_g1

0x4c44,	// (0x0007f56c) main_mp2_pane_g2_ParamLimits

0x4c44,	// (0x0007f56c) main_mp2_pane_g2

0x4c50,	// (0x0007f578) main_mp2_pane_g3_ParamLimits

0x4c50,	// (0x0007f578) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x00089df3) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x00089df3) main_mp2_pane_g

0x4c5c,	// (0x0007f584) main_mp2_pane_t1_ParamLimits

0x4c5c,	// (0x0007f584) main_mp2_pane_t1

0x4c73,	// (0x0007f59b) main_mp2_pane_t2_ParamLimits

0x4c73,	// (0x0007f59b) main_mp2_pane_t2

0x4c85,	// (0x0007f5ad) main_mp2_pane_t3_ParamLimits

0x4c85,	// (0x0007f5ad) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x00089dfa) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x00089dfa) main_mp2_pane_t

0xb6df,	// (0x00086007) pec_content_pane_ParamLimits

0xb6df,	// (0x00086007) pec_content_pane

0xac8e,	// (0x000855b6) scroll_pane_cp015

0xb6f1,	// (0x00086019) pec_attribute_pane_ParamLimits

0xb6f1,	// (0x00086019) pec_attribute_pane

0x4c97,	// (0x0007f5bf) pec_content_pane_g1_ParamLimits

0x4c97,	// (0x0007f5bf) pec_content_pane_g1

0xb701,	// (0x00086029) pec_content_pane_t1_ParamLimits

0xb701,	// (0x00086029) pec_content_pane_t1

0xb713,	// (0x0008603b) pec_content_pane_t2_ParamLimits

0xb713,	// (0x0008603b) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x00089e01) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x00089e01) pec_content_pane_t

0x4ca3,	// (0x0007f5cb) list_single_graphic_pane_cp01_ParamLimits

0x4ca3,	// (0x0007f5cb) list_single_graphic_pane_cp01

0xa828,	// (0x00085150) bg_popup_sub_pane_cp04

0xb725,	// (0x0008604d) popup_mup_playback_window_g1

0xb731,	// (0x00086059) popup_mup_playback_window_t1

0xb746,	// (0x0008606e) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x00089e06) popup_mup_playback_window_t

0xb77d,	// (0x000860a5) main_image_pane_g1_ParamLimits

0xb77d,	// (0x000860a5) main_image_pane_g1

0xb7c0,	// (0x000860e8) scroll_pane_cp018_ParamLimits

0xb7c0,	// (0x000860e8) scroll_pane_cp018

0xb7d8,	// (0x00086100) scroll_pane_cp016_ParamLimits

0xb7d8,	// (0x00086100) scroll_pane_cp016

0x4d3d,	// (0x0007f665) smil2_image_pane_ParamLimits

0x4d3d,	// (0x0007f665) smil2_image_pane

0x4d6d,	// (0x0007f695) smil2_root_pane_ParamLimits

0x4d6d,	// (0x0007f695) smil2_root_pane

0x4d99,	// (0x0007f6c1) smil2_text_pane_ParamLimits

0x4d99,	// (0x0007f6c1) smil2_text_pane

0xa579,	// (0x00084ea1) bg_list_pane_cp06

0xb814,	// (0x0008613c) grid_radio_pane

0xa579,	// (0x00084ea1) bg_popup_window_pane_cp06

0xb81c,	// (0x00086144) main_fmradio_pane_t1

0xb1d7,	// (0x00085aff) heading_pane_cp04

0xb82a,	// (0x00086152) main_fmradio_pane_t2

0xc83c,	// (0x00087164) popup_cale_lunar_info_window_g1

0xb838,	// (0x00086160) main_fmradio_pane_t3

0xc844,	// (0x0008716c) popup_cale_lunar_info_window_g2

0xb846,	// (0x0008616e) main_fmradio_pane_t4

0x0001,

0xb854,	// (0x0008617c) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x00089ef4) popup_cale_lunar_info_window_g

0xf4f3,	// (0x00089e1b) main_fmradio_pane_t

0xb862,	// (0x0008618a) wait_bar_pane_cp03

0xb86a,	// (0x00086192) cell_fmradio_pane_ParamLimits

0xb86a,	// (0x00086192) cell_fmradio_pane

0xb6d1,	// (0x00085ff9) cell_fmradio_pane_g1_ParamLimits

0xb6d1,	// (0x00085ff9) cell_fmradio_pane_g1

0xa579,	// (0x00084ea1) grid_highlight_pane_cp011

0xb87d,	// (0x000861a5) poc_content_pane_ParamLimits

0xb87d,	// (0x000861a5) poc_content_pane

0xb88f,	// (0x000861b7) scroll_pane_cp019

0x4dd9,	// (0x0007f701) popup_call_poc_act_window_ParamLimits

0x4dd9,	// (0x0007f701) popup_call_poc_act_window

0x4de6,	// (0x0007f70e) popup_call_poc_inact_window_ParamLimits

0x4de6,	// (0x0007f70e) popup_call_poc_inact_window

0xf590,	// (0x00089eb8) bg_popup_call_poc_act_pane_g

0xc7fc,	// (0x00087124) bg_popup_call_poc_inact_pane_g1

0xc804,	// (0x0008712c) bg_popup_call_poc_inact_pane_g2

0xb897,	// (0x000861bf) popup_call_poc_act_window_g2

0xc80c,	// (0x00087134) bg_popup_call_poc_inact_pane_g3

0xc78c,	// (0x000870b4) bg_popup_call_poc_inact_pane_g4

0xc814,	// (0x0008713c) bg_popup_call_poc_inact_pane_g5

0xb89f,	// (0x000861c7) popup_call_poc_act_window_t1_ParamLimits

0xb89f,	// (0x000861c7) popup_call_poc_act_window_t1

0xb8c7,	// (0x000861ef) popup_call_poc_act_window_t2_ParamLimits

0xb8c7,	// (0x000861ef) popup_call_poc_act_window_t2

0xb8ef,	// (0x00086217) popup_call_poc_act_window_t3_ParamLimits

0xb8ef,	// (0x00086217) popup_call_poc_act_window_t3

0xb917,	// (0x0008623f) popup_call_poc_act_window_t4_ParamLimits

0xb917,	// (0x0008623f) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x00089e26) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x00089e26) popup_call_poc_act_window_t

0xc81c,	// (0x00087144) bg_popup_call_poc_inact_pane_g6

0xc824,	// (0x0008714c) bg_popup_call_poc_inact_pane_g7

0xc82c,	// (0x00087154) bg_popup_call_poc_inact_pane_g8

0xb929,	// (0x00086251) popup_call_poc_inact_window_g2

0xc834,	// (0x0008715c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x00089ecf) bg_popup_call_poc_inact_pane_g

0xb931,	// (0x00086259) popup_call_poc_inact_window_t1_ParamLimits

0xb931,	// (0x00086259) popup_call_poc_inact_window_t1

0xb946,	// (0x0008626e) popup_call_poc_inact_window_t2_ParamLimits

0xb946,	// (0x0008626e) popup_call_poc_inact_window_t2

0xb95b,	// (0x00086283) popup_call_poc_inact_window_t3_ParamLimits

0xb95b,	// (0x00086283) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x00089e2f) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x00089e2f) popup_call_poc_inact_window_t

0xc979,	// (0x000872a1) context_pane_ParamLimits

0x541c,	// (0x0007fd44) signal_pane_ParamLimits

0xaae5,	// (0x0008540d) main_call2_pane

0x538f,	// (0x0007fcb7) popup_phob_thumbnail2_window_ParamLimits

0x538f,	// (0x0007fcb7) popup_phob_thumbnail2_window

0x4aa8,	// (0x0007f3d0) aid_hotspot_pointer_arrow_pane

0x4ab0,	// (0x0007f3d8) aid_hotspot_pointer_hand_pane

0x510e,	// (0x0007fa36) phob_pre_status_pane_g5

0x2dd4,	// (0x0007d6fc) cams_zoom_pane_ParamLimits

0x2de0,	// (0x0007d708) image_vga_pane_ParamLimits

0x2def,	// (0x0007d717) main_camera_pane_g1_ParamLimits

0x2dfd,	// (0x0007d725) main_camera_pane_g2_ParamLimits

0x2e09,	// (0x0007d731) main_camera_pane_g3_ParamLimits

0x2e15,	// (0x0007d73d) main_camera_pane_g4_ParamLimits

0x2e21,	// (0x0007d749) main_camera_pane_g5_ParamLimits

0x2e2d,	// (0x0007d755) main_camera_pane_g6_ParamLimits

0x2e39,	// (0x0007d761) main_camera_pane_g7_ParamLimits

0xf206,	// (0x00089b2e) main_camera_pane_g_ParamLimits

0x2e45,	// (0x0007d76d) main_camera_pane_t1_ParamLimits

0x2e57,	// (0x0007d77f) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00089b3f) main_camera_pane_t_ParamLimits

0xa828,	// (0x00085150) bg_popup_preview_window_pane_cp01_ParamLimits

0xa828,	// (0x00085150) bg_popup_preview_window_pane_cp01

0xb970,	// (0x00086298) popup_phob_thumbnail2_window_g1_ParamLimits

0xb970,	// (0x00086298) popup_phob_thumbnail2_window_g1

0xa579,	// (0x00084ea1) call2_cli_visual_pane

0x4e02,	// (0x0007f72a) popup_call2_audio_conf_window_ParamLimits

0x4e02,	// (0x0007f72a) popup_call2_audio_conf_window

0x4e17,	// (0x0007f73f) popup_call2_audio_first_window_ParamLimits

0x4e17,	// (0x0007f73f) popup_call2_audio_first_window

0x4eb5,	// (0x0007f7dd) popup_call2_audio_in_window_ParamLimits

0x4eb5,	// (0x0007f7dd) popup_call2_audio_in_window

0x4ef7,	// (0x0007f81f) popup_call2_audio_out_window_ParamLimits

0x4ef7,	// (0x0007f81f) popup_call2_audio_out_window

0x4f59,	// (0x0007f881) popup_call2_audio_second_window_ParamLimits

0x4f59,	// (0x0007f881) popup_call2_audio_second_window

0x4fb7,	// (0x0007f8df) popup_call2_audio_wait_window_ParamLimits

0x4fb7,	// (0x0007f8df) popup_call2_audio_wait_window

0xa579,	// (0x00084ea1) bg_popup_call2_act_pane_cp03

0xa80a,	// (0x00085132) list_conf_pane_cp

0xb97c,	// (0x000862a4) popup_call2_audio_conf_window_t1

0xb98a,	// (0x000862b2) list_single_graphic_popup_conf2_pane_ParamLimits

0xb98a,	// (0x000862b2) list_single_graphic_popup_conf2_pane

0xb247,	// (0x00085b6f) list_highlight_pane_cp04

0xb99d,	// (0x000862c5) list_single_graphic_popup_conf2_pane_g1

0xb258,	// (0x00085b80) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x00089e36) list_single_graphic_popup_conf2_pane_g

0xb9a7,	// (0x000862cf) list_single_graphic_popup_conf2_pane_t1

0xb9b5,	// (0x000862dd) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9b5,	// (0x000862dd) bg_popup_call2_act_pane_cp01

0xba3f,	// (0x00086367) call_type_pane_cp05_ParamLimits

0xba3f,	// (0x00086367) call_type_pane_cp05

0xba93,	// (0x000863bb) popup_call2_audio_second_window_g1_ParamLimits

0xba93,	// (0x000863bb) popup_call2_audio_second_window_g1

0xbae7,	// (0x0008640f) popup_call2_audio_second_window_g2_ParamLimits

0xbae7,	// (0x0008640f) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x00089e3b) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x00089e3b) popup_call2_audio_second_window_g

0xbb4c,	// (0x00086474) popup_call2_audio_second_window_t1_ParamLimits

0xbb4c,	// (0x00086474) popup_call2_audio_second_window_t1

0xbc07,	// (0x0008652f) popup_call2_audio_second_window_t2_ParamLimits

0xbc07,	// (0x0008652f) popup_call2_audio_second_window_t2

0xbc5a,	// (0x00086582) popup_call2_audio_second_window_t3_ParamLimits

0xbc5a,	// (0x00086582) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x00089e42) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x00089e42) popup_call2_audio_second_window_t

0xa579,	// (0x00084ea1) bg_popup_call2_in_pane_cp02

0xa583,	// (0x00084eab) call_type_pane_cp04

0xa58b,	// (0x00084eb3) popup_call2_audio_wait_window_g1

0xa5b8,	// (0x00084ee0) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00089a1d) popup_call2_audio_wait_window_g

0xa5c0,	// (0x00084ee8) popup_call2_audio_wait_window_t3

0xbd4d,	// (0x00086675) bg_popup_call2_act_pane_ParamLimits

0xbd4d,	// (0x00086675) bg_popup_call2_act_pane

0xbe0d,	// (0x00086735) call_type_pane_cp03_ParamLimits

0xbe0d,	// (0x00086735) call_type_pane_cp03

0xbe71,	// (0x00086799) popup_call2_audio_first_window_g1_ParamLimits

0xbe71,	// (0x00086799) popup_call2_audio_first_window_g1

0xbee1,	// (0x00086809) popup_call2_audio_first_window_g2_ParamLimits

0xbee1,	// (0x00086809) popup_call2_audio_first_window_g2

0xb580,	// (0x00085ea8) popup_call2_audio_first_window_g3_ParamLimits

0xb580,	// (0x00085ea8) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x00089e4b) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x00089e4b) popup_call2_audio_first_window_g

0xbfbf,	// (0x000868e7) popup_call2_audio_first_window_t1_ParamLimits

0xbfbf,	// (0x000868e7) popup_call2_audio_first_window_t1

0xc0c2,	// (0x000869ea) popup_call2_audio_first_window_t4_ParamLimits

0xc0c2,	// (0x000869ea) popup_call2_audio_first_window_t4

0xc1a5,	// (0x00086acd) popup_call2_audio_first_window_t5_ParamLimits

0xc1a5,	// (0x00086acd) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x00089e56) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x00089e56) popup_call2_audio_first_window_t

0xa820,	// (0x00085148) bg_popup_call2_act_pane_g1

0xc84c,	// (0x00087174) popup_cale_lunar_info_window_t1

0xc85a,	// (0x00087182) popup_cale_lunar_info_window_t2

0xc868,	// (0x00087190) popup_cale_lunar_info_window_t3

0xa579,	// (0x00084ea1) bg_popup_call2_bubble_pane

0xc2a6,	// (0x00086bce) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2a6,	// (0x00086bce) bg_popup_call2_in_pane_cp01

0xa255,	// (0x00084b7d) call_type_pane_cp02

0xc2ee,	// (0x00086c16) popup_call2_audio_out_window_g1_ParamLimits

0xc2ee,	// (0x00086c16) popup_call2_audio_out_window_g1

0xc31a,	// (0x00086c42) popup_call2_audio_out_window_g2_ParamLimits

0xc31a,	// (0x00086c42) popup_call2_audio_out_window_g2

0xc342,	// (0x00086c6a) popup_call2_audio_out_window_g3_ParamLimits

0xc342,	// (0x00086c6a) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x00089e5f) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x00089e5f) popup_call2_audio_out_window_g

0xc37d,	// (0x00086ca5) popup_call2_audio_out_window_t1_ParamLimits

0xc37d,	// (0x00086ca5) popup_call2_audio_out_window_t1

0xc3dc,	// (0x00086d04) popup_call2_audio_out_window_t2_ParamLimits

0xc3dc,	// (0x00086d04) popup_call2_audio_out_window_t2

0xc430,	// (0x00086d58) popup_call2_audio_out_window_t3_ParamLimits

0xc430,	// (0x00086d58) popup_call2_audio_out_window_t3

0xc446,	// (0x00086d6e) popup_call2_audio_out_window_t4_ParamLimits

0xc446,	// (0x00086d6e) popup_call2_audio_out_window_t4

0xc45c,	// (0x00086d84) popup_call2_audio_out_window_t5_ParamLimits

0xc45c,	// (0x00086d84) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x00089e68) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x00089e68) popup_call2_audio_out_window_t

0xc4c0,	// (0x00086de8) bg_popup_call2_in_pane_ParamLimits

0xc4c0,	// (0x00086de8) bg_popup_call2_in_pane

0xc51c,	// (0x00086e44) popup_call2_audio_in_window_g1_ParamLimits

0xc51c,	// (0x00086e44) popup_call2_audio_in_window_g1

0xc554,	// (0x00086e7c) popup_call2_audio_in_window_g2_ParamLimits

0xc554,	// (0x00086e7c) popup_call2_audio_in_window_g2

0xc58c,	// (0x00086eb4) popup_call2_audio_in_window_g3_ParamLimits

0xc58c,	// (0x00086eb4) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x00089e75) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x00089e75) popup_call2_audio_in_window_g

0xc5e4,	// (0x00086f0c) popup_call2_audio_in_window_t1_ParamLimits

0xc5e4,	// (0x00086f0c) popup_call2_audio_in_window_t1

0xc664,	// (0x00086f8c) popup_call2_audio_in_window_t2_ParamLimits

0xc664,	// (0x00086f8c) popup_call2_audio_in_window_t2

0xc6e4,	// (0x0008700c) popup_call2_audio_in_window_t3_ParamLimits

0xc6e4,	// (0x0008700c) popup_call2_audio_in_window_t3

0xc6fe,	// (0x00087026) popup_call2_audio_in_window_t4_ParamLimits

0xc6fe,	// (0x00087026) popup_call2_audio_in_window_t4

0xc710,	// (0x00087038) popup_call2_audio_in_window_t5_ParamLimits

0xc710,	// (0x00087038) popup_call2_audio_in_window_t5

0xc722,	// (0x0008704a) popup_call2_audio_in_window_t6_ParamLimits

0xc722,	// (0x0008704a) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x00089e7e) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x00089e7e) popup_call2_audio_in_window_t

0xa820,	// (0x00085148) bg_popup_call2_in_pane_g1

0xc876,	// (0x0008719e) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x00089ef9) popup_cale_lunar_info_window_t

0xa828,	// (0x00085150) bg_popup_call2_rect_pane_ParamLimits

0xa828,	// (0x00085150) bg_popup_call2_rect_pane

0xa579,	// (0x00084ea1) call2_cli_visual_graphic_pane

0xa579,	// (0x00084ea1) call2_cli_visual_text_pane

0x54c5,	// (0x0007fded) smil_status_volume_pane_g3

0x0002,

0xa94e,	// (0x00085276) call2_cli_visual_graphic_pane_g1

0xa94e,	// (0x00085276) call2_cli_visual_graphic_pane_g2

0xa94e,	// (0x00085276) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x00089e8b) call2_cli_visual_graphic_pane_g

0xc734,	// (0x0008705c) bg_popup_call2_rect_pane_g1

0xa9da,	// (0x00085302) bg_popup_call2_rect_pane_g2

0xc73c,	// (0x00087064) bg_popup_call2_rect_pane_g3

0xc744,	// (0x0008706c) bg_popup_call2_rect_pane_g4

0xc74c,	// (0x00087074) bg_popup_call2_rect_pane_g5

0xc754,	// (0x0008707c) bg_popup_call2_rect_pane_g6

0xc75c,	// (0x00087084) bg_popup_call2_rect_pane_g7

0xc764,	// (0x0008708c) bg_popup_call2_rect_pane_g8

0xc76c,	// (0x00087094) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x00089e92) bg_popup_call2_rect_pane_g

0xc774,	// (0x0008709c) bg_popup_call2_bubble_pane_g1

0xc77c,	// (0x000870a4) bg_popup_call2_bubble_pane_g2

0xc784,	// (0x000870ac) bg_popup_call2_bubble_pane_g3

0xc78c,	// (0x000870b4) bg_popup_call2_bubble_pane_g4

0xc794,	// (0x000870bc) bg_popup_call2_bubble_pane_g5

0xc79c,	// (0x000870c4) bg_popup_call2_bubble_pane_g6

0xc7a4,	// (0x000870cc) bg_popup_call2_bubble_pane_g7

0xc7ac,	// (0x000870d4) bg_popup_call2_bubble_pane_g8

0xc7b4,	// (0x000870dc) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x00089ea5) bg_popup_call2_bubble_pane_g

0x28e6,	// (0x0007d20e) aid_cale_week_size_cell_pane

0x2e69,	// (0x0007d791) aid_cams_cif_uncrop_pane_ParamLimits

0x2e69,	// (0x0007d791) aid_cams_cif_uncrop_pane

0x2fc4,	// (0x0007d8ec) aid_cams_size_cell_ParamLimits

0x2fc4,	// (0x0007d8ec) aid_cams_size_cell

0x2fd0,	// (0x0007d8f8) grid_cams_pane_ParamLimits

0x2fde,	// (0x0007d906) linegrid_cams_pane_ParamLimits

0x30b5,	// (0x0007d9dd) call_video_pane_t1

0x30d6,	// (0x0007d9fe) call_video_pane_t2

0x0001,

0xf26a,	// (0x00089b92) call_video_pane_t

0x3624,	// (0x0007df4c) aid_cale_month_size_cell_pane_ParamLimits

0x3624,	// (0x0007df4c) aid_cale_month_size_cell_pane

0xf61a,	// (0x00089f42) smil_status_volume_pane_g

0x54d2,	// (0x0007fdfa) volume_smil_pane_ParamLimits

0x204a,	// (0x0007c972) aid_popup2_width_pane

0x27e0,	// (0x0007d108) cell_qdial_pane_g4_ParamLimits

0x27e0,	// (0x0007d108) cell_qdial_pane_g4

0x4559,	// (0x0007ee81) aid_blid_cardinal_pane_ParamLimits

0x4569,	// (0x0007ee91) aid_blid_destination_pane_ParamLimits

0x4569,	// (0x0007ee91) aid_blid_destination_pane

0xa828,	// (0x00085150) bg_popup_call_poc_act_pane_ParamLimits

0xa828,	// (0x00085150) bg_popup_call_poc_act_pane

0xa828,	// (0x00085150) bg_popup_call_poc_inact_pane_ParamLimits

0xa828,	// (0x00085150) bg_popup_call_poc_inact_pane

0xc7bc,	// (0x000870e4) bg_popup_call_poc_act_pane_g1

0xc7c4,	// (0x000870ec) bg_popup_call_poc_act_pane_g2

0xc7cc,	// (0x000870f4) bg_popup_call_poc_act_pane_g3

0xc78c,	// (0x000870b4) bg_popup_call_poc_act_pane_g4

0xc794,	// (0x000870bc) bg_popup_call_poc_act_pane_g5

0xc7d4,	// (0x000870fc) bg_popup_call_poc_act_pane_g6

0xc7a4,	// (0x000870cc) bg_popup_call_poc_act_pane_g7

0xc7dc,	// (0x00087104) bg_popup_call_poc_act_pane_g8

0xa579,	// (0x00084ea1) main_usb_pane

0x52c2,	// (0x0007fbea) popup_cale_lunar_info_window

0x33f3,	// (0x0007dd1b) im_reading_pane_t1_ParamLimits

0xabe6,	// (0x0008550e) list_im_pane_ParamLimits

0xabf7,	// (0x0008551f) scroll_pane_cp07_ParamLimits

0xa579,	// (0x00084ea1) grid_highlight_pane_cp012

0xa828,	// (0x00085150) mup_scale_pane_ParamLimits

0xb580,	// (0x00085ea8) main_usb_pane_g1_ParamLimits

0xb580,	// (0x00085ea8) main_usb_pane_g1

0x5031,	// (0x0007f959) main_usb_pane_g2_ParamLimits

0x5031,	// (0x0007f959) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x00089ee2) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x00089ee2) main_usb_pane_g

0x503d,	// (0x0007f965) main_usb_pane_t1_ParamLimits

0x503d,	// (0x0007f965) main_usb_pane_t1

0x504f,	// (0x0007f977) main_usb_pane_t2_ParamLimits

0x504f,	// (0x0007f977) main_usb_pane_t2

0x5061,	// (0x0007f989) main_usb_pane_t3_ParamLimits

0x5061,	// (0x0007f989) main_usb_pane_t3

0x5073,	// (0x0007f99b) main_usb_pane_t4_ParamLimits

0x5073,	// (0x0007f99b) main_usb_pane_t4

0x5085,	// (0x0007f9ad) main_usb_pane_t5_ParamLimits

0x5085,	// (0x0007f9ad) main_usb_pane_t5

0x5097,	// (0x0007f9bf) main_usb_pane_t6_ParamLimits

0x5097,	// (0x0007f9bf) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x00089ee7) main_usb_pane_t_ParamLimits

0x44ff,	// (0x0007ee27) aid_text_placing

0x450b,	// (0x0007ee33) main_location2_pane_t1_ParamLimits

0x451f,	// (0x0007ee47) main_location2_pane_t2_ParamLimits

0x4533,	// (0x0007ee5b) main_location2_pane_t3_ParamLimits

0x4547,	// (0x0007ee6f) main_location2_pane_t4_ParamLimits

0x4547,	// (0x0007ee6f) main_location2_pane_t4

0xf3cb,	// (0x00089cf3) main_location2_pane_t_ParamLimits

0xa864,	// (0x0008518c) find_pinb_pane_g2_ParamLimits

0xa864,	// (0x0008518c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00089a43) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00089a43) find_pinb_pane_g

0xa870,	// (0x00085198) find_pinb_pane_t1_ParamLimits

0xa882,	// (0x000851aa) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00089a48) find_pinb_pane_t_ParamLimits

0xa579,	// (0x00084ea1) main_call3_pane

0x3be7,	// (0x0007e50f) cale_month_day_heading_pane_t1_ParamLimits

0x3c6d,	// (0x0007e595) cale_month_day_heading_pane_t2_ParamLimits

0x3ce6,	// (0x0007e60e) cale_month_day_heading_pane_t3_ParamLimits

0x3d5f,	// (0x0007e687) cale_month_day_heading_pane_t4_ParamLimits

0x3dd8,	// (0x0007e700) cale_month_day_heading_pane_t5_ParamLimits

0x3e51,	// (0x0007e779) cale_month_day_heading_pane_t6_ParamLimits

0x3eca,	// (0x0007e7f2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00089bca) cale_month_day_heading_pane_t_ParamLimits

0xae41,	// (0x00085769) smil_status_volume_pane

0x4bf0,	// (0x0007f518) postcard_address_pane_ParamLimits

0x4bf0,	// (0x0007f518) postcard_address_pane

0x4bfc,	// (0x0007f524) postcard_message_pane_ParamLimits

0x4bfc,	// (0x0007f524) postcard_message_pane

0x4ff6,	// (0x0007f91e) call2_cli_visual_pane_t1_ParamLimits

0x4ff6,	// (0x0007f91e) call2_cli_visual_pane_t1

0x5629,	// (0x0007ff51) postcard_message_pane_t1_ParamLimits

0x5629,	// (0x0007ff51) postcard_message_pane_t1

0x5612,	// (0x0007ff3a) postcard_address_pane_t1_ParamLimits

0x5612,	// (0x0007ff3a) postcard_address_pane_t1

0x5603,	// (0x0007ff2b) popup_call3_audio_in_window_ParamLimits

0x5603,	// (0x0007ff2b) popup_call3_audio_in_window

0x54e7,	// (0x0007fe0f) bg_popup_call3_in_pane_ParamLimits

0x54e7,	// (0x0007fe0f) bg_popup_call3_in_pane

0x5549,	// (0x0007fe71) popup_call3_audio_in_window_g1_ParamLimits

0x5549,	// (0x0007fe71) popup_call3_audio_in_window_g1

0x5561,	// (0x0007fe89) popup_call3_audio_in_window_g2_ParamLimits

0x5561,	// (0x0007fe89) popup_call3_audio_in_window_g2

0x5579,	// (0x0007fea1) popup_call3_audio_in_window_g3_ParamLimits

0x5579,	// (0x0007fea1) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x00089f49) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x00089f49) popup_call3_audio_in_window_g

0x55a1,	// (0x0007fec9) popup_call3_audio_in_window_t1_ParamLimits

0x55a1,	// (0x0007fec9) popup_call3_audio_in_window_t1

0x55c9,	// (0x0007fef1) popup_call3_audio_in_window_t2_ParamLimits

0x55c9,	// (0x0007fef1) popup_call3_audio_in_window_t2

0x55f1,	// (0x0007ff19) popup_call3_audio_in_window_t3_ParamLimits

0x55f1,	// (0x0007ff19) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x00089f52) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x00089f52) popup_call3_audio_in_window_t

0xaae5,	// (0x0008540d) bg_popup_call3_rect_pane

0xc734,	// (0x0008705c) bg_popup_call3_rect_pane_g1

0xa9da,	// (0x00085302) bg_popup_call3_rect_pane_g2

0xc73c,	// (0x00087064) bg_popup_call3_rect_pane_g3

0xc744,	// (0x0008706c) bg_popup_call3_rect_pane_g4

0xc74c,	// (0x00087074) bg_popup_call3_rect_pane_g5

0xc754,	// (0x0008707c) bg_popup_call3_rect_pane_g6

0xc75c,	// (0x00087084) bg_popup_call3_rect_pane_g7

0x486f,	// (0x0007f197) mup_visualizer_osc_pane

0xb5e5,	// (0x00085f0d) mup_visualizer_spec_pane

0x5507,	// (0x0007fe2f) call3_video_qcif_pane_ParamLimits

0x5507,	// (0x0007fe2f) call3_video_qcif_pane

0x5519,	// (0x0007fe41) call3_video_qcif_uncrop_pane_ParamLimits

0x5519,	// (0x0007fe41) call3_video_qcif_uncrop_pane

0x5527,	// (0x0007fe4f) call3_video_subqcif_pane_ParamLimits

0x5527,	// (0x0007fe4f) call3_video_subqcif_pane

0x5539,	// (0x0007fe61) call3_video_subqcif_uncrop_pane_ParamLimits

0x5539,	// (0x0007fe61) call3_video_subqcif_uncrop_pane

0x5591,	// (0x0007feb9) popup_call3_audio_in_window_g4_ParamLimits

0x5591,	// (0x0007feb9) popup_call3_audio_in_window_g4

0x54b2,	// (0x0007fdda) mup_spec_half_pane

0x54bb,	// (0x0007fde3) mup_spec_half_pane_cp

0xc9d9,	// (0x00087301) mup_osc_middle_pane

0xc9e2,	// (0x0008730a) mup_visualizer_osc_pane_g1

0x5493,	// (0x0007fdbb) mup_spec_bar_pane_ParamLimits

0x5493,	// (0x0007fdbb) mup_spec_bar_pane

0xc9c6,	// (0x000872ee) mup_spec_bar_pane_g1

0xc9d0,	// (0x000872f8) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00089f3d) mup_spec_bar_pane_g

0x28e6,	// (0x0007d20e) aid_cale_week_size_cell_pane_ParamLimits

0x28fb,	// (0x0007d223) bg_cale_heading_pane_ParamLimits

0xaa17,	// (0x0008533f) bg_cale_pane_cp01_ParamLimits

0x291d,	// (0x0007d245) cale_week_corner_pane_ParamLimits

0x2937,	// (0x0007d25f) cale_week_day_heading_pane_ParamLimits

0x2959,	// (0x0007d281) cale_week_scroll_pane_g1_ParamLimits

0x2976,	// (0x0007d29e) cale_week_scroll_pane_g2_ParamLimits

0x2989,	// (0x0007d2b1) cale_week_scroll_pane_g3_ParamLimits

0x299c,	// (0x0007d2c4) cale_week_scroll_pane_g4_ParamLimits

0x29af,	// (0x0007d2d7) cale_week_scroll_pane_g5_ParamLimits

0x29c2,	// (0x0007d2ea) cale_week_scroll_pane_g6_ParamLimits

0x29d5,	// (0x0007d2fd) cale_week_scroll_pane_g7_ParamLimits

0x29ea,	// (0x0007d312) cale_week_scroll_pane_g8_ParamLimits

0x29ff,	// (0x0007d327) cale_week_scroll_pane_g9_ParamLimits

0x2a12,	// (0x0007d33a) cale_week_scroll_pane_g10_ParamLimits

0x2a25,	// (0x0007d34d) cale_week_scroll_pane_g11_ParamLimits

0x2a38,	// (0x0007d360) cale_week_scroll_pane_g12_ParamLimits

0x2a4f,	// (0x0007d377) cale_week_scroll_pane_g13_ParamLimits

0x2a6a,	// (0x0007d392) cale_week_scroll_pane_g14_ParamLimits

0x2a85,	// (0x0007d3ad) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00089ad4) cale_week_scroll_pane_g_ParamLimits

0x2ab5,	// (0x0007d3dd) cale_week_time_pane_ParamLimits

0x2aca,	// (0x0007d3f2) grid_cale_week_pane_ParamLimits

0xaa5b,	// (0x00085383) listscroll_cale_week_pane_t1

0xaa6d,	// (0x00085395) scroll_pane_cp08_ParamLimits

0x3698,	// (0x0007dfc0) cale_month_corner_pane_ParamLimits

0xae17,	// (0x0008573f) cale_month_pane_t1

0x3b66,	// (0x0007e48e) cale_month_week_pane_ParamLimits

0xb580,	// (0x00085ea8) popup_call_status_window_g1_ParamLimits

0x4308,	// (0x0007ec30) popup_call_status_window_g2_ParamLimits

0x4314,	// (0x0007ec3c) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00089c7a) popup_call_status_window_g_ParamLimits

0xb1c7,	// (0x00085aef) aid_call2_pane

0x0fe3,	// (0x0007b90b) msg_header_pane_g1

0x4bf0,	// (0x0007f518) postcard_address2_pane_ParamLimits

0x4bf0,	// (0x0007f518) postcard_address2_pane

0x4bfc,	// (0x0007f524) postcard_message2_pane_ParamLimits

0x4bfc,	// (0x0007f524) postcard_message2_pane

0x542a,	// (0x0007fd52) message2_row_pane_ParamLimits

0x542a,	// (0x0007fd52) message2_row_pane

0x5445,	// (0x0007fd6d) address2_row_pane_ParamLimits

0x5445,	// (0x0007fd6d) address2_row_pane

0xc994,	// (0x000872bc) postcard_message2_row_pane_g1

0xc99c,	// (0x000872c4) postcard_message2_row_pane_t1

0xc994,	// (0x000872bc) address2_row_pane_g1

0xc99c,	// (0x000872c4) address2_row_pane_t1

0x2d4f,	// (0x0007d677) aid_size_cell_vorec

0xa579,	// (0x00084ea1) main_rss_pane

0x5458,	// (0x0007fd80) rss_list_single_pane_ParamLimits

0x5458,	// (0x0007fd80) rss_list_single_pane

0xc9aa,	// (0x000872d2) rss_list_single_pane_t1

0xc9b8,	// (0x000872e0) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x00089f38) rss_list_single_pane_t

0xa579,	// (0x00084ea1) main_camera2_pane

0xa579,	// (0x00084ea1) main_video2_pane

0x568d,	// (0x0007ffb5) cams_zoom_pane_cp2_ParamLimits

0x568d,	// (0x0007ffb5) cams_zoom_pane_cp2

0x5699,	// (0x0007ffc1) image2_vga_pane_ParamLimits

0x5699,	// (0x0007ffc1) image2_vga_pane

0x56a8,	// (0x0007ffd0) main_camera2_pane_g1_ParamLimits

0x56a8,	// (0x0007ffd0) main_camera2_pane_g1

0x56b4,	// (0x0007ffdc) main_camera2_pane_g2_ParamLimits

0x56b4,	// (0x0007ffdc) main_camera2_pane_g2

0x56c0,	// (0x0007ffe8) main_camera2_pane_g3_ParamLimits

0x56c0,	// (0x0007ffe8) main_camera2_pane_g3

0x56cc,	// (0x0007fff4) main_camera2_pane_g4_ParamLimits

0x56cc,	// (0x0007fff4) main_camera2_pane_g4

0x56d8,	// (0x00080000) main_camera2_pane_g5_ParamLimits

0x56d8,	// (0x00080000) main_camera2_pane_g5

0x56e4,	// (0x0008000c) main_camera2_pane_g6_ParamLimits

0x56e4,	// (0x0008000c) main_camera2_pane_g6

0x56f0,	// (0x00080018) main_camera2_pane_g7_ParamLimits

0x56f0,	// (0x00080018) main_camera2_pane_g7

0x56fc,	// (0x00080024) main_camera2_pane_g8_ParamLimits

0x56fc,	// (0x00080024) main_camera2_pane_g8

0x0008,

0xf631,	// (0x00089f59) main_camera2_pane_g_ParamLimits

0xf631,	// (0x00089f59) main_camera2_pane_g

0x5714,	// (0x0008003c) main_camera2_pane_t1_ParamLimits

0x5714,	// (0x0008003c) main_camera2_pane_t1

0x5726,	// (0x0008004e) main_camera2_pane_t2_ParamLimits

0x5726,	// (0x0008004e) main_camera2_pane_t2

0x5738,	// (0x00080060) main_camera2_pane_t3_ParamLimits

0x5738,	// (0x00080060) main_camera2_pane_t3

0x574a,	// (0x00080072) main_camera2_pane_t4_ParamLimits

0x574a,	// (0x00080072) main_camera2_pane_t4

0x0006,

0xf644,	// (0x00089f6c) main_camera2_pane_t_ParamLimits

0xf644,	// (0x00089f6c) main_camera2_pane_t

0x57ac,	// (0x000800d4) cams_zoom_pane_cp4_ParamLimits

0x57ac,	// (0x000800d4) cams_zoom_pane_cp4

0x57bc,	// (0x000800e4) image2_cif_pane_ParamLimits

0x57bc,	// (0x000800e4) image2_cif_pane

0x57d1,	// (0x000800f9) image2_subqcif_pane_ParamLimits

0x57d1,	// (0x000800f9) image2_subqcif_pane

0x57e0,	// (0x00080108) main_video2_pane_g1_ParamLimits

0x57e0,	// (0x00080108) main_video2_pane_g1

0x57f2,	// (0x0008011a) main_video2_pane_g2_ParamLimits

0x57f2,	// (0x0008011a) main_video2_pane_g2

0x5802,	// (0x0008012a) main_video2_pane_g3_ParamLimits

0x5802,	// (0x0008012a) main_video2_pane_g3

0x5812,	// (0x0008013a) main_video2_pane_g4_ParamLimits

0x5812,	// (0x0008013a) main_video2_pane_g4

0x5822,	// (0x0008014a) main_video2_pane_g5_ParamLimits

0x5822,	// (0x0008014a) main_video2_pane_g5

0x5832,	// (0x0008015a) main_video2_pane_g6_ParamLimits

0x5832,	// (0x0008015a) main_video2_pane_g6

0x0005,

0xf653,	// (0x00089f7b) main_video2_pane_g_ParamLimits

0xf653,	// (0x00089f7b) main_video2_pane_g

0x5844,	// (0x0008016c) main_video2_pane_t1_ParamLimits

0x5844,	// (0x0008016c) main_video2_pane_t1

0x585e,	// (0x00080186) main_video2_pane_t2_ParamLimits

0x585e,	// (0x00080186) main_video2_pane_t2

0x5884,	// (0x000801ac) main_video2_pane_t3_ParamLimits

0x5884,	// (0x000801ac) main_video2_pane_t3

0x0002,

0xf660,	// (0x00089f88) main_video2_pane_t_ParamLimits

0xf660,	// (0x00089f88) main_video2_pane_t

0x514e,	// (0x0007fa76) call_muted_g2

0x0001,

0xf602,	// (0x00089f2a) call_muted_g

0xa579,	// (0x00084ea1) main_mup2_pane

0xca19,	// (0x00087341) main_mup2_pane_g1_ParamLimits

0xca19,	// (0x00087341) main_mup2_pane_g1

0x58aa,	// (0x000801d2) main_mup2_pane_g2_ParamLimits

0x58aa,	// (0x000801d2) main_mup2_pane_g2

0x5b2c,	// (0x00080454) main_mup_pane_g13_cp1

0x5b34,	// (0x0008045c) mup_volume_pane_cp1

0x58ca,	// (0x000801f2) main_mup2_pane_g4_ParamLimits

0x58ca,	// (0x000801f2) main_mup2_pane_g4

0x58df,	// (0x00080207) main_mup2_pane_g5_ParamLimits

0x58df,	// (0x00080207) main_mup2_pane_g5

0x58f4,	// (0x0008021c) main_mup2_pane_g6_ParamLimits

0x58f4,	// (0x0008021c) main_mup2_pane_g6

0x5909,	// (0x00080231) main_mup2_pane_g7_ParamLimits

0x5909,	// (0x00080231) main_mup2_pane_g7

0x0006,

0xf667,	// (0x00089f8f) main_mup2_pane_g_ParamLimits

0xf667,	// (0x00089f8f) main_mup2_pane_g

0x5925,	// (0x0008024d) main_mup2_pane_t1_ParamLimits

0x5925,	// (0x0008024d) main_mup2_pane_t1

0x593c,	// (0x00080264) main_mup2_pane_t2_ParamLimits

0x593c,	// (0x00080264) main_mup2_pane_t2

0x5953,	// (0x0008027b) main_mup2_pane_t3_ParamLimits

0x5953,	// (0x0008027b) main_mup2_pane_t3

0x596a,	// (0x00080292) main_mup2_pane_t4_ParamLimits

0x596a,	// (0x00080292) main_mup2_pane_t4

0x5984,	// (0x000802ac) main_mup2_pane_t5_ParamLimits

0x5984,	// (0x000802ac) main_mup2_pane_t5

0x599e,	// (0x000802c6) main_mup2_pane_t6_ParamLimits

0x599e,	// (0x000802c6) main_mup2_pane_t6

0x0005,

0xf676,	// (0x00089f9e) main_mup2_pane_t_ParamLimits

0xf676,	// (0x00089f9e) main_mup2_pane_t

0x59d6,	// (0x000802fe) mup2_visualizer_pane_ParamLimits

0x59d6,	// (0x000802fe) mup2_visualizer_pane

0x5a0c,	// (0x00080334) mup_progress_pane_cp_ParamLimits

0x5a0c,	// (0x00080334) mup_progress_pane_cp

0x5b17,	// (0x0008043f) mup_volume_pane_cp_ParamLimits

0x5b17,	// (0x0008043f) mup_volume_pane_cp

0x5a23,	// (0x0008034b) mup2_visualizer_pane_g1_ParamLimits

0x5a23,	// (0x0008034b) mup2_visualizer_pane_g1

0xca25,	// (0x0008734d) mup2_visualizer_pane_g2_ParamLimits

0xca25,	// (0x0008734d) mup2_visualizer_pane_g2

0x5a38,	// (0x00080360) mup2_visualizer_pane_g3_ParamLimits

0x5a38,	// (0x00080360) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x00089fab) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x00089fab) mup2_visualizer_pane_g

0xb80c,	// (0x00086134) aid_size_cell_fmradio

0x5264,	// (0x0007fb8c) aid_height_parent_landcape

0xac75,	// (0x0008559d) wml_content_pane_cp

0xac7d,	// (0x000855a5) wml_tabs_pane

0xac86,	// (0x000855ae) popup_wml_miniature_window

0xac8e,	// (0x000855b6) scroll_pane_cp021

0xaca2,	// (0x000855ca) wml_content_pane_comp8

0xa579,	// (0x00084ea1) bg_popup_sub_pane_cp05

0xca43,	// (0x0008736b) popup_wml_miniature_window_g1

0xca4b,	// (0x00087373) wml_miniature_view_pane

0x5a46,	// (0x0008036e) aid_size_wml_view

0x5a4e,	// (0x00080376) wml_miniature_view_pane_g1

0x5a57,	// (0x0008037f) wml_miniature_view_pane_g2

0x5a60,	// (0x00080388) wml_miniature_view_pane_g3

0x5a68,	// (0x00080390) wml_miniature_view_pane_g4

0x5a70,	// (0x00080398) wml_miniature_view_pane_g5

0x5a78,	// (0x000803a0) wml_miniature_view_pane_g6

0x5a80,	// (0x000803a8) wml_miniature_view_pane_g7

0x5a88,	// (0x000803b0) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x00089fb2) wml_miniature_view_pane_g

0xca19,	// (0x00087341) background_graphic_ParamLimits

0xca19,	// (0x00087341) background_graphic

0xca53,	// (0x0008737b) wml_tabs_2_pane

0xca5c,	// (0x00087384) wml_tabs_3_pane_ParamLimits

0xca5c,	// (0x00087384) wml_tabs_3_pane

0xca83,	// (0x000873ab) wml_tabs_4_pane_ParamLimits

0xca83,	// (0x000873ab) wml_tabs_4_pane

0xca99,	// (0x000873c1) wml_tabs_5_pane_ParamLimits

0xca99,	// (0x000873c1) wml_tabs_5_pane

0xcab3,	// (0x000873db) wml_tabs_pane_g2_ParamLimits

0xcab3,	// (0x000873db) wml_tabs_pane_g2

0xcac7,	// (0x000873ef) wml_tabs_pane_g3_ParamLimits

0xcac7,	// (0x000873ef) wml_tabs_pane_g3

0x5a90,	// (0x000803b8) wml_tabs_2_active_pane_ParamLimits

0x5a90,	// (0x000803b8) wml_tabs_2_active_pane

0x5aa0,	// (0x000803c8) wml_tabs_2_passive_pane_ParamLimits

0x5aa0,	// (0x000803c8) wml_tabs_2_passive_pane

0x5ab0,	// (0x000803d8) wml_tabs_3_active_pane_cp_ParamLimits

0x5ab0,	// (0x000803d8) wml_tabs_3_active_pane_cp

0x5ac1,	// (0x000803e9) wml_tabs_3_passive_pane_ParamLimits

0x5ac1,	// (0x000803e9) wml_tabs_3_passive_pane

0x5ad2,	// (0x000803fa) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ad2,	// (0x000803fa) wml_tabs_3_passive_pane_cp

0x5ae3,	// (0x0008040b) tabs_4_active_pane

0x5aeb,	// (0x00080413) tabs_4_passive_pane

0x5af3,	// (0x0008041b) tabs_4_passive_pane_cp

0x5afb,	// (0x00080423) tabs_4_passive_pane_cp2

0x5029,	// (0x0007f951) aid_height_text

0x4838,	// (0x0007f160) mup_volume_cont_pane_ParamLimits

0x4838,	// (0x0007f160) mup_volume_cont_pane

0x241c,	// (0x0007cd44) aid_size_cell_pinb

0x2426,	// (0x0007cd4e) aid_size_list_pinb

0x59f5,	// (0x0008031d) mup2_volume_cont_pane_ParamLimits

0x59f5,	// (0x0008031d) mup2_volume_cont_pane

0x5b03,	// (0x0008042b) mup2_volume_cont_pane_g1_ParamLimits

0x5b03,	// (0x0008042b) mup2_volume_cont_pane_g1

0x2056,	// (0x0007c97e) aid_size_cell_touch_ParamLimits

0x2056,	// (0x0007c97e) aid_size_cell_touch

0x22ff,	// (0x0007cc27) touch_pane_ParamLimits

0x22ff,	// (0x0007cc27) touch_pane

0xa15c,	// (0x00084a84) main_rss2_pane

0xcae4,	// (0x0008740c) listscroll_rss2_pane

0xcaed,	// (0x00087415) rss2_navigation_pane

0xcaf5,	// (0x0008741d) list_rss2_pane

0xb2ec,	// (0x00085c14) scroll_pane_cp22

0xcafd,	// (0x00087425) rss2_navigation_pane_g1

0xcb06,	// (0x0008742e) rss2_navigation_pane_g2

0xcb0e,	// (0x00087436) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x00089fc3) rss2_navigation_pane_g

0xcb16,	// (0x0008743e) rss2_navigation_pane_t1

0x5b3c,	// (0x00080464) rss2_list_single_pane_ParamLimits

0x5b3c,	// (0x00080464) rss2_list_single_pane

0xcb24,	// (0x0008744c) rss2_list_single_pane_t2

0xcb32,	// (0x0008745a) rss2_list_single_pane_t3_ParamLimits

0xcb32,	// (0x0008745a) rss2_list_single_pane_t3

0xcb4f,	// (0x00087477) rss2_list_single_pane_t4

0x416c,	// (0x0007ea94) smil_status_pane_g1

0xa593,	// (0x00084ebb) main_image2_pane_ParamLimits

0xa593,	// (0x00084ebb) main_image2_pane

0x5708,	// (0x00080030) main_camera2_pane_g9_ParamLimits

0x5708,	// (0x00080030) main_camera2_pane_g9

0x575c,	// (0x00080084) main_camera2_pane_t5_ParamLimits

0x575c,	// (0x00080084) main_camera2_pane_t5

0x576e,	// (0x00080096) main_camera2_pane_t6_ParamLimits

0x576e,	// (0x00080096) main_camera2_pane_t6

0x5b70,	// (0x00080498) main_image2_pane_g1_ParamLimits

0x5b70,	// (0x00080498) main_image2_pane_g1

0x4dc3,	// (0x0007f6eb) smil2_video_pane_ParamLimits

0x4dc3,	// (0x0007f6eb) smil2_video_pane

0x208a,	// (0x0007c9b2) aid_zoom_text_primary_cp

0x22a8,	// (0x0007cbd0) popup_preview_fixed_window

0xabde,	// (0x00085506) im_reading_pane_g1

0x5652,	// (0x0007ff7a) cams2_bc_adjust_pane_cp_ParamLimits

0x5652,	// (0x0007ff7a) cams2_bc_adjust_pane_cp

0x579e,	// (0x000800c6) cams2_bc_adjust_pane_ParamLimits

0x579e,	// (0x000800c6) cams2_bc_adjust_pane

0x5b7c,	// (0x000804a4) cams2_bc_adjust_pane_g1

0x5b84,	// (0x000804ac) cams2_slider_pane

0x5b8d,	// (0x000804b5) cams2_slider_pane_g1

0x5b96,	// (0x000804be) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x00089fca) cams2_slider_pane_g

0x2526,	// (0x0007ce4e) calc_display_pane_ParamLimits

0x2544,	// (0x0007ce6c) calc_paper_pane_ParamLimits

0x2560,	// (0x0007ce88) grid_calc_pane_ParamLimits

0x4372,	// (0x0007ec9a) popup_clock_digital_window_t1_ParamLimits

0xb7a9,	// (0x000860d1) main_image_pane_t1

0x250c,	// (0x0007ce34) aid_size_cell_calc_ParamLimits

0x250c,	// (0x0007ce34) aid_size_cell_calc

0x529e,	// (0x0007fbc6) popup_blid_sat_info2_window_ParamLimits

0x529e,	// (0x0007fbc6) popup_blid_sat_info2_window

0xcb65,	// (0x0008748d) aid_size_cell_blid

0xcb6d,	// (0x00087495) bg_popup_window_pane_cp07

0xcb90,	// (0x000874b8) grid_popup_blid_pane

0xcb9a,	// (0x000874c2) heading_pane_cp05_ParamLimits

0xcb9a,	// (0x000874c2) heading_pane_cp05

0xcc64,	// (0x0008758c) cell_popup_blid_pane_ParamLimits

0xcc64,	// (0x0008758c) cell_popup_blid_pane

0xcc88,	// (0x000875b0) cell_popup_blid_pane_g1

0xcc90,	// (0x000875b8) cell_popup_blid_pane_t1

0x59bb,	// (0x000802e3) mup2_indicator_pane_ParamLimits

0x59bb,	// (0x000802e3) mup2_indicator_pane

0xaae5,	// (0x0008540d) mup2_visualizer_osc_pane

0xca31,	// (0x00087359) mup2_visualizer_spec_pane_ParamLimits

0xca31,	// (0x00087359) mup2_visualizer_spec_pane

0x5bb0,	// (0x000804d8) mup2_spec_half_pane

0x5bb9,	// (0x000804e1) mup2_spec_half_pane_cp

0x5bc3,	// (0x000804eb) mup2_spec_bar_pane_ParamLimits

0x5bc3,	// (0x000804eb) mup2_spec_bar_pane

0xc9c6,	// (0x000872ee) mup2_spec_bar_pane_g1

0xc9d0,	// (0x000872f8) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00089f3d) mup2_spec_bar_pane_g

0x5be2,	// (0x0008050a) mup2_osc_middle_pane

0xc9e2,	// (0x0008730a) mup2_visualizer_osc_pane_g1

0xa186,	// (0x00084aae) popup_number_entry_window_t1_ParamLimits

0xa199,	// (0x00084ac1) popup_number_entry_window_t2_ParamLimits

0xa1ab,	// (0x00084ad3) popup_number_entry_window_t3_ParamLimits

0x2356,	// (0x0007cc7e) popup_number_entry_window_t5_ParamLimits

0x2356,	// (0x0007cc7e) popup_number_entry_window_t5

0xf0c6,	// (0x000899ee) popup_number_entry_window_t_ParamLimits

0xa1bd,	// (0x00084ae5) text_title_cp2_ParamLimits

0x4ab8,	// (0x0007f3e0) aid_hotspot_pointer_text2_pane

0x4b52,	// (0x0007f47a) main_viewer_pane_g9_ParamLimits

0x4b52,	// (0x0007f47a) main_viewer_pane_g9

0xae17,	// (0x0008573f) cale_month_pane_t1_ParamLimits

0xae54,	// (0x0008577c) bg_cale_pane_ParamLimits

0xae6c,	// (0x00085794) list_cale_pane_ParamLimits

0xae7d,	// (0x000857a5) listscroll_cale_day_pane_t1

0xae8f,	// (0x000857b7) scroll_pane_cp09_ParamLimits

0x4877,	// (0x0007f19f) main_mup_eq_pane_t1_ParamLimits

0x4877,	// (0x0007f19f) main_mup_eq_pane_t1

0x4891,	// (0x0007f1b9) main_mup_eq_pane_t2_ParamLimits

0x4891,	// (0x0007f1b9) main_mup_eq_pane_t2

0x48a9,	// (0x0007f1d1) main_mup_eq_pane_t3_ParamLimits

0x48a9,	// (0x0007f1d1) main_mup_eq_pane_t3

0x48c1,	// (0x0007f1e9) main_mup_eq_pane_t4_ParamLimits

0x48c1,	// (0x0007f1e9) main_mup_eq_pane_t4

0x48d9,	// (0x0007f201) main_mup_eq_pane_t5_ParamLimits

0x48d9,	// (0x0007f201) main_mup_eq_pane_t5

0x48f1,	// (0x0007f219) main_mup_eq_pane_t6_ParamLimits

0x48f1,	// (0x0007f219) main_mup_eq_pane_t6

0x4905,	// (0x0007f22d) main_mup_eq_pane_t7_ParamLimits

0x4905,	// (0x0007f22d) main_mup_eq_pane_t7

0x4919,	// (0x0007f241) main_mup_eq_pane_t8_ParamLimits

0x4919,	// (0x0007f241) main_mup_eq_pane_t8

0x492f,	// (0x0007f257) main_mup_eq_pane_t9_ParamLimits

0x492f,	// (0x0007f257) main_mup_eq_pane_t9

0x4947,	// (0x0007f26f) main_mup_eq_pane_t10_ParamLimits

0x4947,	// (0x0007f26f) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00089d79) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00089d79) main_mup_eq_pane_t

0x4a04,	// (0x0007f32c) mup_equalizer_pane_cp5_ParamLimits

0x4a1a,	// (0x0007f342) mup_equalizer_pane_cp6_ParamLimits

0x4a32,	// (0x0007f35a) mup_equalizer_pane_cp7_ParamLimits

0xa15c,	// (0x00084a84) main_gallery_pane

0xc9eb,	// (0x00087313) smil2_volume_pane

0xc9f3,	// (0x0008731b) smil_status_volume_pane_g1_ParamLimits

0xca06,	// (0x0008732e) smil_status_volume_pane_g2_ParamLimits

0x54c5,	// (0x0007fded) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x00089f42) smil_status_volume_pane_g_ParamLimits

0xcb6d,	// (0x00087495) bg_popup_window_pane_cp07_ParamLimits

0xcb7b,	// (0x000874a3) blid_firmament_pane

0x5beb,	// (0x00080513) aid_size_cell_gallery_ParamLimits

0x5beb,	// (0x00080513) aid_size_cell_gallery

0x5bf9,	// (0x00080521) grid_gallery_pane_ParamLimits

0x5bf9,	// (0x00080521) grid_gallery_pane

0x5c09,	// (0x00080531) cell_gallery_pane_ParamLimits

0x5c09,	// (0x00080531) cell_gallery_pane

0xcc9e,	// (0x000875c6) bg_cell_gallery_focus_pane_ParamLimits

0xcc9e,	// (0x000875c6) bg_cell_gallery_focus_pane

0xccb0,	// (0x000875d8) cell_gallery_pane_g1_ParamLimits

0xccb0,	// (0x000875d8) cell_gallery_pane_g1

0x5c57,	// (0x0008057f) cell_gallery_pane_g2_ParamLimits

0x5c57,	// (0x0008057f) cell_gallery_pane_g2

0x5c64,	// (0x0008058c) cell_gallery_pane_g3_ParamLimits

0x5c64,	// (0x0008058c) cell_gallery_pane_g3

0xccbc,	// (0x000875e4) cell_gallery_pane_g4_ParamLimits

0xccbc,	// (0x000875e4) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x00089ff0) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x00089ff0) cell_gallery_pane_g

0xccc8,	// (0x000875f0) bg_cell_gallery_focus_pane_g1

0xccd0,	// (0x000875f8) bg_cell_gallery_focus_pane_g2

0xccd8,	// (0x00087600) bg_cell_gallery_focus_pane_g3

0xcce0,	// (0x00087608) bg_cell_gallery_focus_pane_g4

0xcce8,	// (0x00087610) bg_cell_gallery_focus_pane_g5

0xccf0,	// (0x00087618) bg_cell_gallery_focus_pane_g6

0xccf8,	// (0x00087620) bg_cell_gallery_focus_pane_g7

0xcd00,	// (0x00087628) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x00089ff9) bg_cell_gallery_focus_pane_g

0xcd08,	// (0x00087630) aid_firma_cardinal

0xcd1c,	// (0x00087644) blid_firmament_pane_t1

0xcd33,	// (0x0008765b) blid_firmament_pane_t2

0xcd4a,	// (0x00087672) blid_firmament_pane_t3

0xcd61,	// (0x00087689) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0008a00a) blid_firmament_pane_t

0xcd78,	// (0x000876a0) blid_sat_info_pane

0xcd88,	// (0x000876b0) blid_sat_info_pane_g1

0xcd88,	// (0x000876b0) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0008a013) blid_sat_info_pane_g

0xcd92,	// (0x000876ba) blid_sat_info_pane_t1

0xcda0,	// (0x000876c8) smil2_volume_content_pane

0xcda9,	// (0x000876d1) smil2_volume_pane_g1

0xaa34,	// (0x0008535c) smil2_volume_content_pane_g1

0xcdb1,	// (0x000876d9) smil2_volume_content_pane_g2

0xcdba,	// (0x000876e2) smil2_volume_content_pane_g3

0xcdc3,	// (0x000876eb) smil2_volume_content_pane_g4

0xcdcc,	// (0x000876f4) smil2_volume_content_pane_g5

0xcdd5,	// (0x000876fd) smil2_volume_content_pane_g6

0xcdde,	// (0x00087706) smil2_volume_content_pane_g7

0xcde7,	// (0x0008770f) smil2_volume_content_pane_g8

0xcdf0,	// (0x00087718) smil2_volume_content_pane_g9

0xcdf9,	// (0x00087721) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0008a018) smil2_volume_content_pane_g

0x2b4b,	// (0x0007d473) cale_week_day_heading_pane_t1_ParamLimits

0x2b66,	// (0x0007d48e) cale_week_day_heading_pane_t2_ParamLimits

0x2b81,	// (0x0007d4a9) cale_week_day_heading_pane_t3_ParamLimits

0x2b9c,	// (0x0007d4c4) cale_week_day_heading_pane_t4_ParamLimits

0x2bb7,	// (0x0007d4df) cale_week_day_heading_pane_t5_ParamLimits

0x2bd2,	// (0x0007d4fa) cale_week_day_heading_pane_t6_ParamLimits

0x2bed,	// (0x0007d515) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00089af5) cale_week_day_heading_pane_t_ParamLimits

0xaa8a,	// (0x000853b2) bg_cale_side_pane_ParamLimits

0x2c08,	// (0x0007d530) cale_week_time_pane_t1_ParamLimits

0x2c22,	// (0x0007d54a) cale_week_time_pane_t2_ParamLimits

0x2c3c,	// (0x0007d564) cale_week_time_pane_t3_ParamLimits

0x2c56,	// (0x0007d57e) cale_week_time_pane_t4_ParamLimits

0x2c70,	// (0x0007d598) cale_week_time_pane_t5_ParamLimits

0x2c8a,	// (0x0007d5b2) cale_week_time_pane_t6_ParamLimits

0x2caa,	// (0x0007d5d2) cale_week_time_pane_t7_ParamLimits

0x2ccc,	// (0x0007d5f4) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00089b04) cale_week_time_pane_t_ParamLimits

0x2cf0,	// (0x0007d618) cell_cale_week_pane_g2_ParamLimits

0xaa8a,	// (0x000853b2) bg_cale_side_pane_cp01_ParamLimits

0x3f5b,	// (0x0007e883) cale_month_week_pane_t1_ParamLimits

0x3f74,	// (0x0007e89c) cale_month_week_pane_t2_ParamLimits

0x3f8d,	// (0x0007e8b5) cale_month_week_pane_t3_ParamLimits

0x3fa6,	// (0x0007e8ce) cale_month_week_pane_t4_ParamLimits

0x3fc1,	// (0x0007e8e9) cale_month_week_pane_t5_ParamLimits

0x3fe2,	// (0x0007e90a) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00089bd9) cale_month_week_pane_t_ParamLimits

0x4129,	// (0x0007ea51) cell_cale_month_pane_g1_ParamLimits

0xa15c,	// (0x00084a84) main_cale_event_viewer_pane

0xa15c,	// (0x00084a84) listscroll_cale_event_viewer_pane

0xce02,	// (0x0008772a) list_cale_ev_pane

0xce0a,	// (0x00087732) scroll_pane_cp023

0xce16,	// (0x0008773e) field_cale_ev_pane_ParamLimits

0xce16,	// (0x0008773e) field_cale_ev_pane

0xce34,	// (0x0008775c) field_cale_ev_content_pane_ParamLimits

0xce34,	// (0x0008775c) field_cale_ev_content_pane

0xce40,	// (0x00087768) field_cale_ev_pane_g1_ParamLimits

0xce40,	// (0x00087768) field_cale_ev_pane_g1

0xce4c,	// (0x00087774) field_cale_ev_pane_g2_ParamLimits

0xce4c,	// (0x00087774) field_cale_ev_pane_g2

0xce64,	// (0x0008778c) field_cale_ev_pane_g3_ParamLimits

0xce64,	// (0x0008778c) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0008a02d) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0008a02d) field_cale_ev_pane_g

0xce7c,	// (0x000877a4) field_cale_ev_pane_t1_ParamLimits

0xce7c,	// (0x000877a4) field_cale_ev_pane_t1

0xaa3d,	// (0x00085365) field_cale_ev_content_pane_t1_ParamLimits

0xaa3d,	// (0x00085365) field_cale_ev_content_pane_t1

0xb68f,	// (0x00085fb7) bg_button_pane_cp01

0x28d6,	// (0x0007d1fe) listscroll_cale_week_pane_ParamLimits

0xaa0e,	// (0x00085336) popup_toolbar_window_cp01

0xaa5b,	// (0x00085383) listscroll_cale_week_pane_t1_ParamLimits

0x28d6,	// (0x0007d1fe) listscroll_cale_day_pane_ParamLimits

0xaa0e,	// (0x00085336) popup_toolbar_window_cp02

0xae7d,	// (0x000857a5) listscroll_cale_day_pane_t1_ParamLimits

0x28d6,	// (0x0007d1fe) main_cale_month_pane_ParamLimits

0x53a1,	// (0x0007fcc9) popup_toolbar_window_cp03_ParamLimits

0x53a1,	// (0x0007fcc9) popup_toolbar_window_cp03

0x4cd9,	// (0x0007f601) main_image_pane_g2_ParamLimits

0x4cd9,	// (0x0007f601) main_image_pane_g2

0x4ce5,	// (0x0007f60d) main_image_pane_g3_ParamLimits

0x4ce5,	// (0x0007f60d) main_image_pane_g3

0x0002,

0xf4e3,	// (0x00089e0b) main_image_pane_g_ParamLimits

0xf4e3,	// (0x00089e0b) main_image_pane_g

0xb7a9,	// (0x000860d1) main_image_pane_t1_ParamLimits

0x4cf1,	// (0x0007f619) main_image_pane_t2_ParamLimits

0x4cf1,	// (0x0007f619) main_image_pane_t2

0x4d03,	// (0x0007f62b) main_image_pane_t3_ParamLimits

0x4d03,	// (0x0007f62b) main_image_pane_t3

0x4d15,	// (0x0007f63d) main_image_pane_t4_ParamLimits

0x4d15,	// (0x0007f63d) main_image_pane_t4

0x0003,

0xf4ea,	// (0x00089e12) main_image_pane_t_ParamLimits

0xf4ea,	// (0x00089e12) main_image_pane_t

0x4d27,	// (0x0007f64f) popup_image_details_window_cp01

0x4d31,	// (0x0007f659) popup_toobar_trans_pane_cp01_ParamLimits

0x4d31,	// (0x0007f659) popup_toobar_trans_pane_cp01

0x52f1,	// (0x0007fc19) popup_image_details_window_ParamLimits

0x52f1,	// (0x0007fc19) popup_image_details_window

0x52ff,	// (0x0007fc27) popup_image_focus_window

0x5644,	// (0x0007ff6c) camera2_autofocus_pane_ParamLimits

0x5644,	// (0x0007ff6c) camera2_autofocus_pane

0xa15c,	// (0x00084a84) bg_popup_sub_pane_cp06

0xce93,	// (0x000877bb) popup_image_focus_window_g1

0xce9b,	// (0x000877c3) popup_image_focus_window_g2

0xcea3,	// (0x000877cb) popup_image_focus_window_g3

0xceab,	// (0x000877d3) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0008a034) popup_image_focus_window_g

0xceb3,	// (0x000877db) popup_image_focus_window_t1

0xcec1,	// (0x000877e9) popup_image_focus_window_t2

0xced1,	// (0x000877f9) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0008a03d) popup_image_focus_window_t

0xcedf,	// (0x00087807) camera2_autofocus_pane_g1

0xa593,	// (0x00084ebb) bg_tb_trans_pane_cp01

0xceed,	// (0x00087815) popup_image_details_window_g1

0xcf00,	// (0x00087828) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0008a04f) popup_image_details_window_g

0xcf29,	// (0x00087851) popup_image_details_window_t1

0xcf3b,	// (0x00087863) popup_image_details_window_t2

0xcf54,	// (0x0008787c) popup_image_details_window_t3

0xcf68,	// (0x00087890) popup_image_details_window_t4

0xcf83,	// (0x000878ab) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0008a056) popup_image_details_window_t

0xa8e5,	// (0x0008520d) bg_calc_paper_pane_ParamLimits

0xa15c,	// (0x00084a84) grid_highlight_pane_cp013

0x265d,	// (0x0007cf85) list_calc_pane_ParamLimits

0x266f,	// (0x0007cf97) scroll_pane_cp024

0xa8f9,	// (0x00085221) bg_calc_display_pane_ParamLimits

0x2677,	// (0x0007cf9f) calc_display_pane_t1_ParamLimits

0x268c,	// (0x0007cfb4) calc_display_pane_t2_ParamLimits

0x26a1,	// (0x0007cfc9) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00089a75) calc_display_pane_t_ParamLimits

0x277b,	// (0x0007d0a3) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x00089a92) cell_calc_pane_g

0x2784,	// (0x0007d0ac) cell_calc_pane_t1

0xa958,	// (0x00085280) grid_highlight_pane_cp02_ParamLimits

0xa96e,	// (0x00085296) toolbar_button_pane_cp01_ParamLimits

0xa96e,	// (0x00085296) toolbar_button_pane_cp01

0xb7ee,	// (0x00086116) temp_image_control_pane_ParamLimits

0xb7ee,	// (0x00086116) temp_image_control_pane

0xa593,	// (0x00084ebb) main_mp3_pane

0xcf9d,	// (0x000878c5) temp_image_control_pane_g1_ParamLimits

0xcf9d,	// (0x000878c5) temp_image_control_pane_g1

0xcfab,	// (0x000878d3) temp_image_control_pane_g2_ParamLimits

0xcfab,	// (0x000878d3) temp_image_control_pane_g2

0xcfbd,	// (0x000878e5) temp_image_control_pane_g3_ParamLimits

0xcfbd,	// (0x000878e5) temp_image_control_pane_g3

0x5ca1,	// (0x000805c9) temp_image_control_pane_g4_ParamLimits

0x5ca1,	// (0x000805c9) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0008a061) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0008a061) temp_image_control_pane_g

0xcf9d,	// (0x000878c5) main_mp3_pane_g1

0x5cb2,	// (0x000805da) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0008a06a) main_mp3_pane_g

0xd000,	// (0x00087928) main_mp3_pane_t1

0xaaed,	// (0x00085415) main_camera_pane_g8_ParamLimits

0xaaed,	// (0x00085415) main_camera_pane_g8

0x2f7a,	// (0x0007d8a2) main_video_pane_g7_ParamLimits

0x2f7a,	// (0x0007d8a2) main_video_pane_g7

0x578c,	// (0x000800b4) main_camera2_pane_t7_ParamLimits

0x578c,	// (0x000800b4) main_camera2_pane_t7

0xac35,	// (0x0008555d) scroll_pane_cp025_ParamLimits

0xac35,	// (0x0008555d) scroll_pane_cp025

0xac49,	// (0x00085571) scroll_pane_cp026_ParamLimits

0xac49,	// (0x00085571) scroll_pane_cp026

0xac58,	// (0x00085580) wml_content_pane_ParamLimits

0xa15c,	// (0x00084a84) main_touch_calib_pane

0x5d56,	// (0x0008067e) main_touch_calib_pane_g1

0x5d62,	// (0x0008068a) main_touch_calib_pane_g2

0x5d6e,	// (0x00080696) main_touch_calib_pane_g3

0x5d7a,	// (0x000806a2) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0008a088) main_touch_calib_pane_g

0x5d86,	// (0x000806ae) main_touch_calib_pane_t1

0x5d9f,	// (0x000806c7) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0008a091) main_touch_calib_pane_t

0xb3bb,	// (0x00085ce3) mup_progress_pane_cp02

0xb3f0,	// (0x00085d18) navi_pane_g1

0xb4ab,	// (0x00085dd3) navi_pane_mp_t3

0xa593,	// (0x00084ebb) main_mp3_pane_ParamLimits

0x53de,	// (0x0007fd06) navi_pane_ParamLimits

0xcf9d,	// (0x000878c5) main_mp3_pane_g1_ParamLimits

0x5cb2,	// (0x000805da) main_mp3_pane_g2_ParamLimits

0x5cbe,	// (0x000805e6) main_mp3_pane_g3_ParamLimits

0x5cbe,	// (0x000805e6) main_mp3_pane_g3

0x5cca,	// (0x000805f2) main_mp3_pane_g4_ParamLimits

0x5cca,	// (0x000805f2) main_mp3_pane_g4

0xcfcd,	// (0x000878f5) main_mp3_pane_g5_ParamLimits

0xcfcd,	// (0x000878f5) main_mp3_pane_g5

0xcfdb,	// (0x00087903) main_mp3_pane_g6_ParamLimits

0xcfdb,	// (0x00087903) main_mp3_pane_g6

0xcfe8,	// (0x00087910) main_mp3_pane_g7_ParamLimits

0xcfe8,	// (0x00087910) main_mp3_pane_g7

0xcff4,	// (0x0008791c) main_mp3_pane_g8_ParamLimits

0xcff4,	// (0x0008791c) main_mp3_pane_g8

0xf742,	// (0x0008a06a) main_mp3_pane_g_ParamLimits

0x5cd6,	// (0x000805fe) main_mp3_pane_t2

0x5ce6,	// (0x0008060e) main_mp3_pane_t3

0xd00e,	// (0x00087936) main_mp3_pane_t4

0xd01c,	// (0x00087944) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0008a07b) main_mp3_pane_t

0xd02a,	// (0x00087952) mup_progress_pane_cp01

0x208a,	// (0x0007c9b2) aid_zoom_text_secondary2

0xce02,	// (0x0008772a) list_cale_ev2_pane

0xce0a,	// (0x00087732) scroll_pane_cp023_ParamLimits

0x5dfa,	// (0x00080722) field_cale_ev2_pane_ParamLimits

0x5dfa,	// (0x00080722) field_cale_ev2_pane

0x5e24,	// (0x0008074c) field_cale_ev2_pane_g1_ParamLimits

0x5e24,	// (0x0008074c) field_cale_ev2_pane_g1

0x5e30,	// (0x00080758) field_cale_ev2_pane_g2_ParamLimits

0x5e30,	// (0x00080758) field_cale_ev2_pane_g2

0x5e48,	// (0x00080770) field_cale_ev2_pane_g3_ParamLimits

0x5e48,	// (0x00080770) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0008a09c) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0008a09c) field_cale_ev2_pane_g

0x1068,	// (0x0007b990) field_cale_ev2_pane_t1_ParamLimits

0x1068,	// (0x0007b990) field_cale_ev2_pane_t1

0x107f,	// (0x0007b9a7) field_cale_ev2_pane_t2_ParamLimits

0x107f,	// (0x0007b9a7) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0008a0a5) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0008a0a5) field_cale_ev2_pane_t

0x4bba,	// (0x0007f4e2) main_postcard_pane_g5_ParamLimits

0x4bba,	// (0x0007f4e2) main_postcard_pane_g5

0x4bc8,	// (0x0007f4f0) main_postcard_pane_g6_ParamLimits

0x4bc8,	// (0x0007f4f0) main_postcard_pane_g6

0x2dc4,	// (0x0007d6ec) camera2_autofocus_pane_cp_ParamLimits

0x2dc4,	// (0x0007d6ec) camera2_autofocus_pane_cp

0xa593,	// (0x00084ebb) main_mup3_pane

0x5eab,	// (0x000807d3) main_mup3_pane_g1_ParamLimits

0x5eab,	// (0x000807d3) main_mup3_pane_g1

0x5ecc,	// (0x000807f4) main_mup3_pane_g2_ParamLimits

0x5ecc,	// (0x000807f4) main_mup3_pane_g2

0x5f46,	// (0x0008086e) main_mup3_pane_g3_ParamLimits

0x5f46,	// (0x0008086e) main_mup3_pane_g3

0x5f89,	// (0x000808b1) main_mup3_pane_g4_ParamLimits

0x5f89,	// (0x000808b1) main_mup3_pane_g4

0x5fcc,	// (0x000808f4) main_mup3_pane_g5_ParamLimits

0x5fcc,	// (0x000808f4) main_mup3_pane_g5

0x600f,	// (0x00080937) main_mup3_pane_g6_ParamLimits

0x600f,	// (0x00080937) main_mup3_pane_g6

0xd032,	// (0x0008795a) main_mup3_pane_g7_ParamLimits

0xd032,	// (0x0008795a) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0008a0b5) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0008a0b5) main_mup3_pane_g

0x6085,	// (0x000809ad) main_mup3_pane_t1_ParamLimits

0x6085,	// (0x000809ad) main_mup3_pane_t1

0x60f4,	// (0x00080a1c) main_mup3_pane_t2_ParamLimits

0x60f4,	// (0x00080a1c) main_mup3_pane_t2

0x61bd,	// (0x00080ae5) main_mup3_pane_t4_ParamLimits

0x61bd,	// (0x00080ae5) main_mup3_pane_t4

0x620b,	// (0x00080b33) main_mup3_pane_t5_ParamLimits

0x620b,	// (0x00080b33) main_mup3_pane_t5

0x62bb,	// (0x00080be3) main_mup3_pane_t6_ParamLimits

0x62bb,	// (0x00080be3) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0008a0c6) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0008a0c6) main_mup3_pane_t

0x6367,	// (0x00080c8f) mup3_progress_pane_ParamLimits

0x6367,	// (0x00080c8f) mup3_progress_pane

0x63db,	// (0x00080d03) popup_mup3_control_window_ParamLimits

0x63db,	// (0x00080d03) popup_mup3_control_window

0xd040,	// (0x00087968) popup_mup3_text_window

0x63f4,	// (0x00080d1c) mup3_progress_pane_t1

0x6413,	// (0x00080d3b) mup3_progress_pane_t2

0xd048,	// (0x00087970) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0008a0d3) mup3_progress_pane_t

0xd065,	// (0x0008798d) mup_progress_pane_cp03

0xa15c,	// (0x00084a84) bg_tb_trans_pane_cp04

0x6432,	// (0x00080d5a) mup3_volume_pane

0x643a,	// (0x00080d62) popup_mup3_control_window_g1

0x6443,	// (0x00080d6b) mup3_volume_pane_g1

0x644c,	// (0x00080d74) mup3_volume_pane_g2

0x6455,	// (0x00080d7d) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0008a0da) mup3_volume_pane_g

0xa15c,	// (0x00084a84) bg_tb_trans_pane_cp03

0xd075,	// (0x0008799d) popup_mup3_text_window_g1

0xd07d,	// (0x000879a5) popup_mup3_text_window_t1

0xa941,	// (0x00085269) list_calc_item_pane_g1_ParamLimits

0xcadb,	// (0x00087403) mup_volume_pane_cp_g1

0x5db8,	// (0x000806e0) main_touch_calib_pane_t3

0x5dce,	// (0x000806f6) main_touch_calib_pane_t4

0x5de4,	// (0x0008070c) main_touch_calib_pane_t5

0x2042,	// (0x0007c96a) aid_cell_size_toolbar2

0x204a,	// (0x0007c972) aid_popup3_width_pane

0x0d47,	// (0x0007b66f) aid_zoom_text_msg_primary

0x2d99,	// (0x0007d6c1) vorec_t7

0xa905,	// (0x0008522d) bg_calc_paper_pane_g1_ParamLimits

0xa911,	// (0x00085239) bg_calc_paper_pane_g2_ParamLimits

0xa91d,	// (0x00085245) bg_calc_paper_pane_g3_ParamLimits

0xa929,	// (0x00085251) bg_calc_paper_pane_g4_ParamLimits

0xa935,	// (0x0008525d) bg_calc_paper_pane_g5_ParamLimits

0x26e0,	// (0x0007d008) bg_calc_paper_pane_g6_ParamLimits

0x26f1,	// (0x0007d019) bg_calc_paper_pane_g7_ParamLimits

0x2702,	// (0x0007d02a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00089a7c) bg_calc_paper_pane_g_ParamLimits

0x2713,	// (0x0007d03b) calc_bg_paper_pane_g9_ParamLimits

0x2eab,	// (0x0007d7d3) image_qvga_pane_ParamLimits

0x2eab,	// (0x0007d7d3) image_qvga_pane

0xa828,	// (0x00085150) bg_popup_sub_pane_cp04_ParamLimits

0xb725,	// (0x0008604d) popup_mup_playback_window_g1_ParamLimits

0xb731,	// (0x00086059) popup_mup_playback_window_t1_ParamLimits

0xb746,	// (0x0008606e) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x00089e06) popup_mup_playback_window_t_ParamLimits

0x58bb,	// (0x000801e3) main_mup2_pane_g3_ParamLimits

0x58bb,	// (0x000801e3) main_mup2_pane_g3

0x3163,	// (0x0007da8b) popup_toolbar_window_cp04

0xbb3b,	// (0x00086463) popup_call2_audio_second_window_g3_ParamLimits

0xbb3b,	// (0x00086463) popup_call2_audio_second_window_g3

0xbf45,	// (0x0008686d) popup_call2_audio_first_window_g4_ParamLimits

0xbf45,	// (0x0008686d) popup_call2_audio_first_window_g4

0xc5c4,	// (0x00086eec) popup_call2_audio_in_window_g4_ParamLimits

0xc5c4,	// (0x00086eec) popup_call2_audio_in_window_g4

0x4ccc,	// (0x0007f5f4) aid_area_sk_bg_cut_ParamLimits

0x4ccc,	// (0x0007f5f4) aid_area_sk_bg_cut

0xb75b,	// (0x00086083) aid_area_sk_bg_cut_2_ParamLimits

0xb75b,	// (0x00086083) aid_area_sk_bg_cut_2

0x5c47,	// (0x0008056f) aid_placing_details_win

0x5c4f,	// (0x00080577) aid_placing_details_win_2

0xcedf,	// (0x00087807) camera2_autofocus_pane_g1_ParamLimits

0x2299,	// (0x0007cbc1) popup_fixed_preview_cale_window_ParamLimits

0x2299,	// (0x0007cbc1) popup_fixed_preview_cale_window

0xb529,	// (0x00085e51) navi_slider_pane_g3

0xb532,	// (0x00085e5a) navi_slider_pane_g4

0xb53b,	// (0x00085e63) navi_slider_pane_g5

0xb529,	// (0x00085e51) navi_slider_pane_g6

0x461b,	// (0x0007ef43) navi_slider_pane_g7

0xb65c,	// (0x00085f84) mup_scale_pane_g3

0xb665,	// (0x00085f8d) mup_scale_pane_g4

0xb66e,	// (0x00085f96) mup_scale_pane_g5

0x4a4a,	// (0x0007f372) mup_scale_pane_g6

0x4a53,	// (0x0007f37b) mup_scale_pane_g7

0xb529,	// (0x00085e51) cams2_slider_pane_g3

0xcb5d,	// (0x00087485) cams2_slider_pane_g4

0x5b9f,	// (0x000804c7) cams2_slider_pane_g5

0xb529,	// (0x00085e51) cams2_slider_pane_g6

0x5ba7,	// (0x000804cf) cams2_slider_pane_g7

0xcd88,	// (0x000876b0) camera2_autofocus_pane_cp_g1

0xc95f,	// (0x00087287) bg_popup_preview_window_pane_cp02_ParamLimits

0xc95f,	// (0x00087287) bg_popup_preview_window_pane_cp02

0xd08b,	// (0x000879b3) list_fp_cale_pane_ParamLimits

0xd08b,	// (0x000879b3) list_fp_cale_pane

0xd097,	// (0x000879bf) popup_fixed_preview_cale_window_t1_ParamLimits

0xd097,	// (0x000879bf) popup_fixed_preview_cale_window_t1

0x645e,	// (0x00080d86) popup_fixed_preview_cale_window_t2_ParamLimits

0x645e,	// (0x00080d86) popup_fixed_preview_cale_window_t2

0x6473,	// (0x00080d9b) popup_fixed_preview_cale_window_t3_ParamLimits

0x6473,	// (0x00080d9b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0008a0e1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0008a0e1) popup_fixed_preview_cale_window_t

0x6488,	// (0x00080db0) list_single_fp_cale_pane_ParamLimits

0x6488,	// (0x00080db0) list_single_fp_cale_pane

0xd0b5,	// (0x000879dd) list_single_fp_cale_pane_g1_ParamLimits

0xd0b5,	// (0x000879dd) list_single_fp_cale_pane_g1

0xd0c1,	// (0x000879e9) list_single_fp_cale_pane_g2_ParamLimits

0xd0c1,	// (0x000879e9) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0008a0e8) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0008a0e8) list_single_fp_cale_pane_g

0xd0da,	// (0x00087a02) list_single_fp_cale_pane_t1_ParamLimits

0xd0da,	// (0x00087a02) list_single_fp_cale_pane_t1

0xd0ec,	// (0x00087a14) list_single_fp_cale_pane_t2_ParamLimits

0xd0ec,	// (0x00087a14) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0008a0ef) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0008a0ef) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa15c,	// (0x00084a84) main_dialer_pane

0x649b,	// (0x00080dc3) aid_cell_size_keypad

0x64a5,	// (0x00080dcd) dialer_ne_pane

0x64af,	// (0x00080dd7) grid_dialer_command_1_pane

0x64b7,	// (0x00080ddf) grid_dialer_command_2_pane

0x64bf,	// (0x00080de7) grid_dialer_keypad_pane

0x64d3,	// (0x00080dfb) bg_popup_call_pane_cp06_ParamLimits

0x64d3,	// (0x00080dfb) bg_popup_call_pane_cp06

0x64df,	// (0x00080e07) dialer_ne_clear_pane_ParamLimits

0x64df,	// (0x00080e07) dialer_ne_clear_pane

0xd11f,	// (0x00087a47) dialer_ne_pane_g1

0xd127,	// (0x00087a4f) dialer_ne_pane_t1_ParamLimits

0xd127,	// (0x00087a4f) dialer_ne_pane_t1

0x64eb,	// (0x00080e13) dialer_ne_pane_t2_ParamLimits

0x64eb,	// (0x00080e13) dialer_ne_pane_t2

0x6508,	// (0x00080e30) dialer_ne_pane_t3_ParamLimits

0x6508,	// (0x00080e30) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0008a0f4) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0008a0f4) dialer_ne_pane_t

0x652c,	// (0x00080e54) dialer_ne_pane_t3_copy1_ParamLimits

0x652c,	// (0x00080e54) dialer_ne_pane_t3_copy1

0x6550,	// (0x00080e78) cell_dialer_keypad_pane_ParamLimits

0x6550,	// (0x00080e78) cell_dialer_keypad_pane

0x6567,	// (0x00080e8f) cell_dialer_command_1_pane_ParamLimits

0x6567,	// (0x00080e8f) cell_dialer_command_1_pane

0x657d,	// (0x00080ea5) cell_dialer_command_2_pane_ParamLimits

0x657d,	// (0x00080ea5) cell_dialer_command_2_pane

0xd139,	// (0x00087a61) bg_button_pane_cp02_ParamLimits

0xd139,	// (0x00087a61) bg_button_pane_cp02

0x658c,	// (0x00080eb4) cell_dialer_keypad_pane_g1_ParamLimits

0x658c,	// (0x00080eb4) cell_dialer_keypad_pane_g1

0xd139,	// (0x00087a61) bg_button_pane_cp03_ParamLimits

0xd139,	// (0x00087a61) bg_button_pane_cp03

0x65a1,	// (0x00080ec9) cell_dialer_command_1_pane_g1_ParamLimits

0x65a1,	// (0x00080ec9) cell_dialer_command_1_pane_g1

0xd145,	// (0x00087a6d) bg_button_pane_cp04

0x65b5,	// (0x00080edd) cell_dialer_command_2_pane_g1

0xaae5,	// (0x0008540d) bg_button_pane_cp06

0xd14d,	// (0x00087a75) dialer_ne_clear_pane_g1

0xb3fc,	// (0x00085d24) navi_pane_g2

0xb42a,	// (0x00085d52) navi_pane_g3

0x0002,

0xf3e1,	// (0x00089d09) navi_pane_g

0xb4b9,	// (0x00085de1) navi_pane_mv_g2

0xb4e0,	// (0x00085e08) navi_pane_mv_g5

0x45e6,	// (0x0007ef0e) navi_pane_mv_t1

0xa8f9,	// (0x00085221) main_clock2_pane

0xe421,	// (0x00088d49) main_clock2_list_pane_ParamLimits

0xe421,	// (0x00088d49) main_clock2_list_pane

0x6611,	// (0x00080f39) main_clock2_pane_t1_ParamLimits

0x6611,	// (0x00080f39) main_clock2_pane_t1

0x663f,	// (0x00080f67) main_clock2_pane_t2_ParamLimits

0x663f,	// (0x00080f67) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0008a100) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0008a100) main_clock2_pane_t

0x66a4,	// (0x00080fcc) popup_clock_analogue_window_cp03_ParamLimits

0x66a4,	// (0x00080fcc) popup_clock_analogue_window_cp03

0x66c2,	// (0x00080fea) popup_clock_digital_window_cp02_ParamLimits

0x66c2,	// (0x00080fea) popup_clock_digital_window_cp02

0x6737,	// (0x0008105f) main_clock2_list_single_pane_ParamLimits

0x6737,	// (0x0008105f) main_clock2_list_single_pane

0xaae5,	// (0x0008540d) list_highlight_pane_cp05

0xd187,	// (0x00087aaf) main_clock2_list_single_pane_t1

0x3163,	// (0x0007da8b) popup_toolbar_window_cp04_ParamLimits

0x5c71,	// (0x00080599) camera2_autofocus_pane_g2_ParamLimits

0x5c71,	// (0x00080599) camera2_autofocus_pane_g2

0x5c7d,	// (0x000805a5) camera2_autofocus_pane_g3_ParamLimits

0x5c7d,	// (0x000805a5) camera2_autofocus_pane_g3

0x5c89,	// (0x000805b1) camera2_autofocus_pane_g4_ParamLimits

0x5c89,	// (0x000805b1) camera2_autofocus_pane_g4

0x5c95,	// (0x000805bd) camera2_autofocus_pane_g5_ParamLimits

0x5c95,	// (0x000805bd) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0008a044) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0008a044) camera2_autofocus_pane_g

0x5e6c,	// (0x00080794) camera2_autofocus_pane_cp_g2

0x5e74,	// (0x0008079c) camera2_autofocus_pane_cp_g3

0x5e7c,	// (0x000807a4) camera2_autofocus_pane_cp_g4

0x5e84,	// (0x000807ac) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0008a0aa) camera2_autofocus_pane_cp_g

0x64cb,	// (0x00080df3) popup_dialer_spcha_window

0xa15c,	// (0x00084a84) bg_popup_sub_pane_cp07

0xd195,	// (0x00087abd) list_spcha_pane

0xd19d,	// (0x00087ac5) list_single_spcha_pane_ParamLimits

0xd19d,	// (0x00087ac5) list_single_spcha_pane

0xa15c,	// (0x00084a84) list_highlight_pane_cp06

0xd1ae,	// (0x00087ad6) list_single_spcha_pane_t1

0xc36e,	// (0x00086c96) popup_call2_audio_out_window_g4_ParamLimits

0xc36e,	// (0x00086c96) popup_call2_audio_out_window_g4

0xa15c,	// (0x00084a84) main_imed2_pane

0x5307,	// (0x0007fc2f) popup_imed_adjust2_window

0x531a,	// (0x0007fc42) popup_imed_trans_window_ParamLimits

0x531a,	// (0x0007fc42) popup_imed_trans_window

0xcbc6,	// (0x000874ee) popup_blid_sat_info2_window_t1

0xcbd4,	// (0x000874fc) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x00089fd9) popup_blid_sat_info2_window_t

0x67ec,	// (0x00081114) aid_size_cell_colour_35

0x6806,	// (0x0008112e) aid_size_cell_colour_112

0x681d,	// (0x00081145) aid_size_cell_effect

0xa593,	// (0x00084ebb) bg_tb_trans_pane_cp02

0xb0f2,	// (0x00085a1a) heading_imed_pane

0x6837,	// (0x0008115f) listscroll_imed_pane

0xd1bc,	// (0x00087ae4) heading_imed_pane_g1

0xd1c4,	// (0x00087aec) heading_imed_pane_t1

0xd1d2,	// (0x00087afa) grid_imed_colour_35_pane_ParamLimits

0xd1d2,	// (0x00087afa) grid_imed_colour_35_pane

0x6843,	// (0x0008116b) grid_imed_effect_pane

0xd1ea,	// (0x00087b12) list_imed_aspect_pane

0x6853,	// (0x0008117b) scroll_pane_cp027_ParamLimits

0x6853,	// (0x0008117b) scroll_pane_cp027

0x685f,	// (0x00081187) cell_imed_effect_pane_ParamLimits

0x685f,	// (0x00081187) cell_imed_effect_pane

0xd1f2,	// (0x00087b1a) cell_imed_colour_pane_ParamLimits

0xd1f2,	// (0x00087b1a) cell_imed_colour_pane

0xd234,	// (0x00087b5c) cell_imed_colour_pane_g1_ParamLimits

0xd234,	// (0x00087b5c) cell_imed_colour_pane_g1

0xd245,	// (0x00087b6d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd245,	// (0x00087b6d) hgihlgiht_grid_pane_cp016

0x6877,	// (0x0008119f) cell_imed_effect_pane_g1

0x687f,	// (0x000811a7) grid_highlight_pane_cp017

0xd256,	// (0x00087b7e) list_imed_single_pane_ParamLimits

0xd256,	// (0x00087b7e) list_imed_single_pane

0xa15c,	// (0x00084a84) list_highlight_pane_cp07

0xd26b,	// (0x00087b93) list_imed_aspect_pane_comp1_t1

0xc96b,	// (0x00087293) bg_tb_trans_pane_cp05

0xd28d,	// (0x00087bb5) popup_imed_adjust2_window_g1

0xd2b4,	// (0x00087bdc) popup_imed_adjust2_window_t1

0xd2cc,	// (0x00087bf4) slider_imed_adjust_pane

0xd2e0,	// (0x00087c08) slider_imed_adjust_pane_g1

0xd2f0,	// (0x00087c18) slider_imed_adjust_pane_g2

0xd300,	// (0x00087c28) slider_imed_adjust_pane_g3

0xd311,	// (0x00087c39) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0008a11d) slider_imed_adjust_pane_g

0x6888,	// (0x000811b0) aid_size_cell_clipart2

0x6894,	// (0x000811bc) grid_imed_clipart_pane

0xd322,	// (0x00087c4a) scroll_pane_cp031

0x689e,	// (0x000811c6) cell_imed_clipart_pane_ParamLimits

0x689e,	// (0x000811c6) cell_imed_clipart_pane

0x68c1,	// (0x000811e9) cell_imed_clipart_pane_g1

0xa15c,	// (0x00084a84) grid_highlight_pane_cp014

0x65f3,	// (0x00080f1b) main_clock2_pane_g1_ParamLimits

0x65f3,	// (0x00080f1b) main_clock2_pane_g1

0x66de,	// (0x00081006) aid_call2_pane_cp10

0x66f0,	// (0x00081018) aid_call_pane_cp10

0xb35b,	// (0x00085c83) popup_clock_analogue_window_cp10_g1

0xb35b,	// (0x00085c83) popup_clock_analogue_window_cp10_g2

0x6702,	// (0x0008102a) popup_clock_analogue_window_cp10_g3

0x6702,	// (0x0008102a) popup_clock_analogue_window_cp10_g4

0xb35b,	// (0x00085c83) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0008a10b) popup_clock_analogue_window_cp10_g

0x6718,	// (0x00081040) popup_clock_analogue_window_cp10_t1

0x6749,	// (0x00081071) clock_digital_number_pane_cp10_ParamLimits

0x6749,	// (0x00081071) clock_digital_number_pane_cp10

0x6763,	// (0x0008108b) clock_digital_number_pane_cp11_ParamLimits

0x6763,	// (0x0008108b) clock_digital_number_pane_cp11

0x677d,	// (0x000810a5) clock_digital_number_pane_cp12_ParamLimits

0x677d,	// (0x000810a5) clock_digital_number_pane_cp12

0x6797,	// (0x000810bf) clock_digital_number_pane_cp13_ParamLimits

0x6797,	// (0x000810bf) clock_digital_number_pane_cp13

0x67b1,	// (0x000810d9) clock_digital_separator_pane_cp10_ParamLimits

0x67b1,	// (0x000810d9) clock_digital_separator_pane_cp10

0x67cb,	// (0x000810f3) popup_clock_digital_window_cp02_t1_ParamLimits

0x67cb,	// (0x000810f3) popup_clock_digital_window_cp02_t1

0xa820,	// (0x00085148) clock_digital_number_pane_cp10_g1

0xa820,	// (0x00085148) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0008a126) clock_digital_number_pane_cp10_g

0xa820,	// (0x00085148) clock_digital_separator_pane_cp10_g1

0xa820,	// (0x00085148) clock_digital_separator_pane_g2_cp10

0xb4e8,	// (0x00085e10) navi_pane_vded_g4

0xb4f1,	// (0x00085e19) navi_pane_vded_g5

0xb4fa,	// (0x00085e22) navi_pane_vded_t1

0xa15c,	// (0x00084a84) main_vded_pane

0x68ca,	// (0x000811f2) main_vded_pane_g1

0x68d6,	// (0x000811fe) main_vded_pane_g2

0x68e0,	// (0x00081208) main_vded_pane_g3

0x0002,

0xf803,	// (0x0008a12b) main_vded_pane_g

0x68ea,	// (0x00081212) main_vded_pane_t1

0x68f8,	// (0x00081220) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0008a132) main_vded_pane_t

0x6906,	// (0x0008122e) vded_slider_pane

0x6910,	// (0x00081238) vded_video_pane

0xd32a,	// (0x00087c52) vded_video_pane_g1

0x691a,	// (0x00081242) vded_video_pane_g2

0xcd88,	// (0x000876b0) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0008a137) vded_video_pane_g

0xd334,	// (0x00087c5c) vded_slider_pane_g1

0xcadb,	// (0x00087403) vded_slider_pane_g2

0xd33d,	// (0x00087c65) vded_slider_pane_g3

0xd346,	// (0x00087c6e) vded_slider_pane_g4

0xd34f,	// (0x00087c77) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0008a13e) vded_slider_pane_g

0x63cd,	// (0x00080cf5) mup3_rocker_pane_ParamLimits

0x63cd,	// (0x00080cf5) mup3_rocker_pane

0x6923,	// (0x0008124b) mup3_control_keys_pane_g1

0x692b,	// (0x00081253) mup3_control_keys_pane_g2

0x6933,	// (0x0008125b) mup3_control_keys_pane_g3

0x693b,	// (0x00081263) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0008a149) mup3_control_keys_pane_g

0x22c1,	// (0x0007cbe9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x22c1,	// (0x0007cbe9) popup_toolbar2_fixed_window_cp01

0x63e7,	// (0x00080d0f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x63e7,	// (0x00080d0f) popup_toolbar2_fixed_window_cp02

0xbcad,	// (0x000865d5) popup_call2_audio_second_window_t4_ParamLimits

0xbcad,	// (0x000865d5) popup_call2_audio_second_window_t4

0xc1db,	// (0x00086b03) popup_call2_audio_first_window_t6_ParamLimits

0xc1db,	// (0x00086b03) popup_call2_audio_first_window_t6

0xc471,	// (0x00086d99) popup_call2_audio_out_window_t6_ParamLimits

0xc471,	// (0x00086d99) popup_call2_audio_out_window_t6

0xa15c,	// (0x00084a84) main_vitu_pane

0x694b,	// (0x00081273) aid_size_cell_itu_ParamLimits

0x694b,	// (0x00081273) aid_size_cell_itu

0xe421,	// (0x00088d49) bg_popup_window_pane_cp08_ParamLimits

0xe421,	// (0x00088d49) bg_popup_window_pane_cp08

0x6959,	// (0x00081281) field_vitu_entry_pane_ParamLimits

0x6959,	// (0x00081281) field_vitu_entry_pane

0x6968,	// (0x00081290) grid_vitu_function_pane_ParamLimits

0x6968,	// (0x00081290) grid_vitu_function_pane

0x6978,	// (0x000812a0) grid_vitu_itu_pane_ParamLimits

0x6978,	// (0x000812a0) grid_vitu_itu_pane

0x6988,	// (0x000812b0) cell_vitu_itu_pane_ParamLimits

0x6988,	// (0x000812b0) cell_vitu_itu_pane

0x699d,	// (0x000812c5) cell_vitu_function_pane_ParamLimits

0x699d,	// (0x000812c5) cell_vitu_function_pane

0xa593,	// (0x00084ebb) bg_popup_sub_pane_cp08_ParamLimits

0xa593,	// (0x00084ebb) bg_popup_sub_pane_cp08

0x69af,	// (0x000812d7) field_vitu_entry_pane_t1_ParamLimits

0x69af,	// (0x000812d7) field_vitu_entry_pane_t1

0xd370,	// (0x00087c98) field_vitu_entry_pane_t2_ParamLimits

0xd370,	// (0x00087c98) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0008a157) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0008a157) field_vitu_entry_pane_t

0xd38d,	// (0x00087cb5) bg_button_pane_cp05_ParamLimits

0xd38d,	// (0x00087cb5) bg_button_pane_cp05

0x69cc,	// (0x000812f4) cell_vitu_itu_pane_g1

0x69e4,	// (0x0008130c) cell_vitu_itu_pane_t1_ParamLimits

0x69e4,	// (0x0008130c) cell_vitu_itu_pane_t1

0x69f6,	// (0x0008131e) cell_vitu_itu_pane_t2_ParamLimits

0x69f6,	// (0x0008131e) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0008a15c) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0008a15c) cell_vitu_itu_pane_t

0xd39b,	// (0x00087cc3) bg_button_pane_cp07

0x6a2b,	// (0x00081353) cell_vitu_function_pane_g1

0x2584,	// (0x0007ceac) main_calc_pane_g1

0x207e,	// (0x0007c9a6) aid_visual_content_pane

0xa15c,	// (0x00084a84) main_vradio_pane

0x6a34,	// (0x0008135c) main_vradio_pane_g1_ParamLimits

0x6a34,	// (0x0008135c) main_vradio_pane_g1

0xd3a5,	// (0x00087ccd) main_vradio_pane_g2_ParamLimits

0xd3a5,	// (0x00087ccd) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0008a163) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0008a163) main_vradio_pane_g

0x6a44,	// (0x0008136c) main_vradio_pane_t1_ParamLimits

0x6a44,	// (0x0008136c) main_vradio_pane_t1

0x6a56,	// (0x0008137e) main_vradio_pane_t2_ParamLimits

0x6a56,	// (0x0008137e) main_vradio_pane_t2

0xd3b2,	// (0x00087cda) main_vradio_pane_t3_ParamLimits

0xd3b2,	// (0x00087cda) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0008a168) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0008a168) main_vradio_pane_t

0x6a68,	// (0x00081390) vradio_rocker_control_pane_ParamLimits

0x6a68,	// (0x00081390) vradio_rocker_control_pane

0x6a74,	// (0x0008139c) vradio_station_info_pane_ParamLimits

0x6a74,	// (0x0008139c) vradio_station_info_pane

0xd3c6,	// (0x00087cee) vradio_frequency_info_pane_ParamLimits

0xd3c6,	// (0x00087cee) vradio_frequency_info_pane

0xcd88,	// (0x000876b0) vradio_station_info_pane_g1

0xd3d5,	// (0x00087cfd) vradio_station_info_pane_t1_ParamLimits

0xd3d5,	// (0x00087cfd) vradio_station_info_pane_t1

0xd3f7,	// (0x00087d1f) vradio_station_info_pane_t2_ParamLimits

0xd3f7,	// (0x00087d1f) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0008a16f) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0008a16f) vradio_station_info_pane_t

0xd409,	// (0x00087d31) vradio_tuning_pane

0xd411,	// (0x00087d39) vradio_rocker_control_pane_g1

0xd419,	// (0x00087d41) vradio_rocker_control_pane_g2

0xd421,	// (0x00087d49) vradio_rocker_control_pane_g3

0xd429,	// (0x00087d51) vradio_rocker_control_pane_g4

0xd431,	// (0x00087d59) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0008a174) vradio_rocker_control_pane_g

0x6a83,	// (0x000813ab) vradio_frequency_info_pane_g1

0xd439,	// (0x00087d61) vradio_frequency_info_pane_t1_ParamLimits

0xd439,	// (0x00087d61) vradio_frequency_info_pane_t1

0x6a8d,	// (0x000813b5) vradio_tuning_pane_g1

0x6a96,	// (0x000813be) vradio_tuning_pane_t1

0x20c7,	// (0x0007c9ef) area_side_right_pane_ParamLimits

0x20c7,	// (0x0007c9ef) area_side_right_pane

0xc926,	// (0x0008724e) status_small_pane_g1

0xc92e,	// (0x00087256) status_small_pane_g2

0xc937,	// (0x0008725f) status_small_pane_g3

0xc940,	// (0x00087268) status_small_pane_g4

0x0003,

0xf607,	// (0x00089f2f) status_small_pane_g

0xc949,	// (0x00087271) status_small_pane_t1

0xa15c,	// (0x00084a84) main_video3_pane

0xd44d,	// (0x00087d75) cams_zoom_vslider_pane

0xd455,	// (0x00087d7d) image3_wide_pane_ParamLimits

0xd455,	// (0x00087d7d) image3_wide_pane

0xd46f,	// (0x00087d97) image3_wide_small_pane

0xd47b,	// (0x00087da3) main_video3_pane_g1_ParamLimits

0xd47b,	// (0x00087da3) main_video3_pane_g1

0xd497,	// (0x00087dbf) main_video3_pane_g2_ParamLimits

0xd497,	// (0x00087dbf) main_video3_pane_g2

0x0001,

0xf857,	// (0x0008a17f) main_video3_pane_g_ParamLimits

0xf857,	// (0x0008a17f) main_video3_pane_g

0xd4b3,	// (0x00087ddb) main_video3_pane_t1_ParamLimits

0xd4b3,	// (0x00087ddb) main_video3_pane_t1

0xd4de,	// (0x00087e06) main_video3_pane_t2_ParamLimits

0xd4de,	// (0x00087e06) main_video3_pane_t2

0xd509,	// (0x00087e31) main_video3_pane_t3_ParamLimits

0xd509,	// (0x00087e31) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0008a184) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0008a184) main_video3_pane_t

0xd536,	// (0x00087e5e) cams_zoom_vslider_pane_g1

0xd53f,	// (0x00087e67) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0008a18b) cams_zoom_vslider_pane_g

0xd547,	// (0x00087e6f) small_slider_vertical_pane

0xcd88,	// (0x000876b0) small_slider_vertical_pane_g1

0xcd88,	// (0x000876b0) small_slider_vertical_pane_g2

0xd54f,	// (0x00087e77) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0008a190) small_slider_vertical_pane_g

0xa15c,	// (0x00084a84) main_hwr_training_pane

0xd558,	// (0x00087e80) hwr_training_instruct_pane_ParamLimits

0xd558,	// (0x00087e80) hwr_training_instruct_pane

0x6aa5,	// (0x000813cd) hwr_training_navi_pane_ParamLimits

0x6aa5,	// (0x000813cd) hwr_training_navi_pane

0x6abf,	// (0x000813e7) hwr_training_write_pane_ParamLimits

0x6abf,	// (0x000813e7) hwr_training_write_pane

0xa15c,	// (0x00084a84) bg_frame_shadow_pane

0xd58f,	// (0x00087eb7) hwr_training_write_pane_g1

0xd597,	// (0x00087ebf) hwr_training_write_pane_g2

0xd59f,	// (0x00087ec7) hwr_training_write_pane_g3

0xd5a7,	// (0x00087ecf) hwr_training_write_pane_g4

0xd5af,	// (0x00087ed7) hwr_training_write_pane_g5

0xd5b7,	// (0x00087edf) hwr_training_write_pane_g6

0xd5bf,	// (0x00087ee7) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0008a197) hwr_training_write_pane_g

0x6af7,	// (0x0008141f) hwr_training_navi_pane_g1_ParamLimits

0x6af7,	// (0x0008141f) hwr_training_navi_pane_g1

0x6b09,	// (0x00081431) hwr_training_navi_pane_g2_ParamLimits

0x6b09,	// (0x00081431) hwr_training_navi_pane_g2

0x6b1b,	// (0x00081443) hwr_training_navi_pane_g3_ParamLimits

0x6b1b,	// (0x00081443) hwr_training_navi_pane_g3

0x6b2b,	// (0x00081453) hwr_training_navi_pane_g4_ParamLimits

0x6b2b,	// (0x00081453) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0008a1a6) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0008a1a6) hwr_training_navi_pane_g

0x6b45,	// (0x0008146d) hwr_training_navi_pane_t1

0x6b53,	// (0x0008147b) list_single_hwr_training_instruct_pane_ParamLimits

0x6b53,	// (0x0008147b) list_single_hwr_training_instruct_pane

0xd5c7,	// (0x00087eef) list_single_hwr_training_instruct_pane_t1

0xccc8,	// (0x000875f0) bg_frame_shadow_pane_g1

0xd5d6,	// (0x00087efe) bg_frame_shadow_pane_g2

0xd5de,	// (0x00087f06) bg_frame_shadow_pane_g3

0xd5e6,	// (0x00087f0e) bg_frame_shadow_pane_g4

0xd5ee,	// (0x00087f16) bg_frame_shadow_pane_g5

0xd5f6,	// (0x00087f1e) bg_frame_shadow_pane_g6

0xd5fe,	// (0x00087f26) bg_frame_shadow_pane_g7

0xa9b2,	// (0x000852da) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0008a1b1) bg_frame_shadow_pane_g

0xa15c,	// (0x00084a84) main_video_tele_dialer_pane

0x6b7c,	// (0x000814a4) aid_size_cell_video_keypad_ParamLimits

0x6b7c,	// (0x000814a4) aid_size_cell_video_keypad

0x6b8c,	// (0x000814b4) grid_video_dialer_keypad_pane_ParamLimits

0x6b8c,	// (0x000814b4) grid_video_dialer_keypad_pane

0x6bc0,	// (0x000814e8) video_down_pane_cp_ParamLimits

0x6bc0,	// (0x000814e8) video_down_pane_cp

0x6bea,	// (0x00081512) cell_video_dialer_keypad_pane_ParamLimits

0x6bea,	// (0x00081512) cell_video_dialer_keypad_pane

0xd606,	// (0x00087f2e) bg_button_pane_cp08_ParamLimits

0xd606,	// (0x00087f2e) bg_button_pane_cp08

0x6bff,	// (0x00081527) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6bff,	// (0x00081527) cell_video_dialer_keypad_pane_g1

0x63c1,	// (0x00080ce9) mup3_rocker2_pane_ParamLimits

0x63c1,	// (0x00080ce9) mup3_rocker2_pane

0xcd88,	// (0x000876b0) mup3_rocker2_pane_g1

0x527b,	// (0x0007fba3) main_dialer2_pane

0xa15c,	// (0x00084a84) main_mp4_pane

0x6c57,	// (0x0008157f) main_mp4_pane_g1_ParamLimits

0x6c57,	// (0x0008157f) main_mp4_pane_g1

0x6c65,	// (0x0008158d) main_mp4_pane_g2_ParamLimits

0x6c65,	// (0x0008158d) main_mp4_pane_g2

0x6c73,	// (0x0008159b) main_mp4_pane_g3_ParamLimits

0x6c73,	// (0x0008159b) main_mp4_pane_g3

0x6cb8,	// (0x000815e0) main_mp4_pane_g4_ParamLimits

0x6cb8,	// (0x000815e0) main_mp4_pane_g4

0x6ce6,	// (0x0008160e) main_mp4_pane_g5_ParamLimits

0x6ce6,	// (0x0008160e) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0008a1d1) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0008a1d1) main_mp4_pane_g

0x6d5a,	// (0x00081682) main_mp4_pane_t1_ParamLimits

0x6d5a,	// (0x00081682) main_mp4_pane_t1

0x6db6,	// (0x000816de) main_mp4_pane_t2_ParamLimits

0x6db6,	// (0x000816de) main_mp4_pane_t2

0xd612,	// (0x00087f3a) main_mp4_pane_t3_ParamLimits

0xd612,	// (0x00087f3a) main_mp4_pane_t3

0x6e08,	// (0x00081730) main_mp4_pane_t4_ParamLimits

0x6e08,	// (0x00081730) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0008a1e2) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0008a1e2) main_mp4_pane_t

0x6e4c,	// (0x00081774) mp4_progress_pane_ParamLimits

0x6e4c,	// (0x00081774) mp4_progress_pane

0x6e96,	// (0x000817be) mp4_rocker_pane_ParamLimits

0x6e96,	// (0x000817be) mp4_rocker_pane

0xd640,	// (0x00087f68) mp4_progress_pane_t1

0xd659,	// (0x00087f81) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0008a1eb) mp4_progress_pane_t

0xd672,	// (0x00087f9a) mup_progress_pane_cp04

0xcd88,	// (0x000876b0) mp4_rocker_pane_g1

0x6eb6,	// (0x000817de) aid_cell_size_keypad2_ParamLimits

0x6eb6,	// (0x000817de) aid_cell_size_keypad2

0x6ec6,	// (0x000817ee) dialer2_ne_pane_ParamLimits

0x6ec6,	// (0x000817ee) dialer2_ne_pane

0x6ed4,	// (0x000817fc) grid_dialer2_keypad_pane_ParamLimits

0x6ed4,	// (0x000817fc) grid_dialer2_keypad_pane

0xdd7d,	// (0x000886a5) bg_popup_call_pane_cp07_ParamLimits

0xdd7d,	// (0x000886a5) bg_popup_call_pane_cp07

0x6ee4,	// (0x0008180c) dialer2_ne_pane_t1_ParamLimits

0x6ee4,	// (0x0008180c) dialer2_ne_pane_t1

0x6f09,	// (0x00081831) cell_dialer2_keypad_pane_ParamLimits

0x6f09,	// (0x00081831) cell_dialer2_keypad_pane

0xd697,	// (0x00087fbf) bg_button_pane_pane_cp04_ParamLimits

0xd697,	// (0x00087fbf) bg_button_pane_pane_cp04

0x6f1e,	// (0x00081846) cell_dialer2_keypad_pane_g1_ParamLimits

0x6f1e,	// (0x00081846) cell_dialer2_keypad_pane_g1

0x3025,	// (0x0007d94d) aid_placing_vt_set_content_ParamLimits

0x3025,	// (0x0007d94d) aid_placing_vt_set_content

0x3051,	// (0x0007d979) aid_placing_vt_set_title_ParamLimits

0x3051,	// (0x0007d979) aid_placing_vt_set_title

0xa15c,	// (0x00084a84) main_image3_pane

0x6fb8,	// (0x000818e0) area_side_right_pane_cp01_ParamLimits

0x6fb8,	// (0x000818e0) area_side_right_pane_cp01

0xa5a1,	// (0x00084ec9) main_image3_pane_g1_ParamLimits

0xa5a1,	// (0x00084ec9) main_image3_pane_g1

0x6fe5,	// (0x0008190d) main_image3_pane_g2_ParamLimits

0x6fe5,	// (0x0008190d) main_image3_pane_g2

0x6ffe,	// (0x00081926) main_image3_pane_g3_ParamLimits

0x6ffe,	// (0x00081926) main_image3_pane_g3

0x7017,	// (0x0008193f) main_image3_pane_g4_ParamLimits

0x7017,	// (0x0008193f) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0008a1fa) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0008a1fa) main_image3_pane_g

0x7030,	// (0x00081958) main_image3_pane_t1_ParamLimits

0x7030,	// (0x00081958) main_image3_pane_t1

0x7055,	// (0x0008197d) main_image3_pane_t2_ParamLimits

0x7055,	// (0x0008197d) main_image3_pane_t2

0x7074,	// (0x0008199c) main_image3_pane_t3_ParamLimits

0x7074,	// (0x0008199c) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0008a203) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0008a203) main_image3_pane_t

0xe421,	// (0x00088d49) grid_sctrl_middle_pane_cp01_ParamLimits

0xe421,	// (0x00088d49) grid_sctrl_middle_pane_cp01

0x70d5,	// (0x000819fd) cell_sctrl_middle_pane_cp01_ParamLimits

0x70d5,	// (0x000819fd) cell_sctrl_middle_pane_cp01

0x70e6,	// (0x00081a0e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x70e6,	// (0x00081a0e) cell_sctrl_middle_pane_cp01_g1

0xa15c,	// (0x00084a84) main_call4_pane

0x70f3,	// (0x00081a1b) aid_size_button_call4_ParamLimits

0x70f3,	// (0x00081a1b) aid_size_button_call4

0x7129,	// (0x00081a51) call4_windows_pane_ParamLimits

0x7129,	// (0x00081a51) call4_windows_pane

0x713e,	// (0x00081a66) grid_call4_button_pane_ParamLimits

0x713e,	// (0x00081a66) grid_call4_button_pane

0x716c,	// (0x00081a94) call4_windows_conf_pane

0x7183,	// (0x00081aab) popup_call4_audio_first_window_ParamLimits

0x7183,	// (0x00081aab) popup_call4_audio_first_window

0x71d3,	// (0x00081afb) popup_call4_audio_second_window_ParamLimits

0x71d3,	// (0x00081afb) popup_call4_audio_second_window

0x71ec,	// (0x00081b14) popup_call4_audio_wait_window_ParamLimits

0x71ec,	// (0x00081b14) popup_call4_audio_wait_window

0x71fa,	// (0x00081b22) cell_call4_button_pane_ParamLimits

0x71fa,	// (0x00081b22) cell_call4_button_pane

0x721d,	// (0x00081b45) bg_button_pane_cp09_ParamLimits

0x721d,	// (0x00081b45) bg_button_pane_cp09

0x7229,	// (0x00081b51) cell_call4_button_pane_g1_ParamLimits

0x7229,	// (0x00081b51) cell_call4_button_pane_g1

0x7236,	// (0x00081b5e) cell_call4_button_pane_t1_ParamLimits

0x7236,	// (0x00081b5e) cell_call4_button_pane_t1

0xd6ab,	// (0x00087fd3) popup_call4_audio_conf_window_ParamLimits

0xd6ab,	// (0x00087fd3) popup_call4_audio_conf_window

0x63f4,	// (0x00080d1c) mup3_progress_pane_t1_ParamLimits

0x6413,	// (0x00080d3b) mup3_progress_pane_t2_ParamLimits

0xd048,	// (0x00087970) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0008a0d3) mup3_progress_pane_t_ParamLimits

0xd065,	// (0x0008798d) mup_progress_pane_cp03_ParamLimits

0x6943,	// (0x0008126b) mup3_control_keys_pane_g4_copy1

0x6e7a,	// (0x000817a2) mp4_rocker2_pane_ParamLimits

0x6e7a,	// (0x000817a2) mp4_rocker2_pane

0xd6bf,	// (0x00087fe7) mp4_rocker2_pane_g1

0xd6c7,	// (0x00087fef) mp4_rocker2_pane_g2

0x727a,	// (0x00081ba2) mp4_rocker2_pane_g3

0x7282,	// (0x00081baa) mp4_rocker2_pane_g4

0x728a,	// (0x00081bb2) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0008a20c) mp4_rocker2_pane_g

0xa15c,	// (0x00084a84) main_camera4_pane

0xa15c,	// (0x00084a84) main_video4_pane

0x6b9c,	// (0x000814c4) main_video_tele_dialer_pane_t1_ParamLimits

0x6b9c,	// (0x000814c4) main_video_tele_dialer_pane_t1

0x6bae,	// (0x000814d6) main_video_tele_dialer_pane_t2_ParamLimits

0x6bae,	// (0x000814d6) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0008a1c2) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0008a1c2) main_video_tele_dialer_pane_t

0x72aa,	// (0x00081bd2) cam4_autofocus_pane_ParamLimits

0x72aa,	// (0x00081bd2) cam4_autofocus_pane

0x72c4,	// (0x00081bec) cam4_image_uncrop_pane_ParamLimits

0x72c4,	// (0x00081bec) cam4_image_uncrop_pane

0x72db,	// (0x00081c03) cam4_indicators_pane_ParamLimits

0x72db,	// (0x00081c03) cam4_indicators_pane

0x72f7,	// (0x00081c1f) main_camera4_pane_g1_ParamLimits

0x72f7,	// (0x00081c1f) main_camera4_pane_g1

0x7303,	// (0x00081c2b) main_camera4_pane_g2_ParamLimits

0x7303,	// (0x00081c2b) main_camera4_pane_g2

0x7303,	// (0x00081c2b) main_camera4_pane_g3_ParamLimits

0x7303,	// (0x00081c2b) main_camera4_pane_g3

0x730f,	// (0x00081c37) main_camera4_pane_g4_ParamLimits

0x730f,	// (0x00081c37) main_camera4_pane_g4

0x731b,	// (0x00081c43) main_camera4_pane_g5_ParamLimits

0x731b,	// (0x00081c43) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0008a217) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0008a217) main_camera4_pane_g

0x7335,	// (0x00081c5d) main_camera4_pane_t1_ParamLimits

0x7335,	// (0x00081c5d) main_camera4_pane_t1

0xcfcd,	// (0x000878f5) bg_tb_trans_pane_cp06

0x7385,	// (0x00081cad) cam4_indicators_pane_g1

0x7396,	// (0x00081cbe) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0008a232) cam4_indicators_pane_g

0x73ae,	// (0x00081cd6) cam4_indicators_pane_t1

0x73d8,	// (0x00081d00) main_video4_pane_g1_ParamLimits

0x73d8,	// (0x00081d00) main_video4_pane_g1

0x73e4,	// (0x00081d0c) main_video4_pane_g2_ParamLimits

0x73e4,	// (0x00081d0c) main_video4_pane_g2

0x73f0,	// (0x00081d18) main_video4_pane_g3_ParamLimits

0x73f0,	// (0x00081d18) main_video4_pane_g3

0x73fc,	// (0x00081d24) main_video4_pane_g4_ParamLimits

0x73fc,	// (0x00081d24) main_video4_pane_g4

0x0004,

0xf911,	// (0x0008a239) main_video4_pane_g_ParamLimits

0xf911,	// (0x0008a239) main_video4_pane_g

0x741c,	// (0x00081d44) vid4_indicators_pane_ParamLimits

0x741c,	// (0x00081d44) vid4_indicators_pane

0x743b,	// (0x00081d63) video4_image_uncrop_cif_pane_ParamLimits

0x743b,	// (0x00081d63) video4_image_uncrop_cif_pane

0x744a,	// (0x00081d72) video4_image_uncrop_nhd_pane_ParamLimits

0x744a,	// (0x00081d72) video4_image_uncrop_nhd_pane

0x72c4,	// (0x00081bec) video4_image_uncrop_vga_pane_ParamLimits

0x72c4,	// (0x00081bec) video4_image_uncrop_vga_pane

0xa593,	// (0x00084ebb) bg_tb_trans_pane_cp07

0x745f,	// (0x00081d87) vid4_indicators_pane_g1

0x7473,	// (0x00081d9b) vid4_indicators_pane_g2

0x7487,	// (0x00081daf) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0008a244) vid4_indicators_pane_g

0x74b4,	// (0x00081ddc) vid4_indicators_pane_t1

0x74cb,	// (0x00081df3) cam4_autofocus_pane_g1

0x74d3,	// (0x00081dfb) cam4_autofocus_pane_g2

0x74db,	// (0x00081e03) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0008a24f) cam4_autofocus_pane_g

0x74e3,	// (0x00081e0b) cam4_autofocus_pane_g3_copy1

0x6bce,	// (0x000814f6) video_down_pane_cp_t1

0x6bdc,	// (0x00081504) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0008a1c7) video_down_pane_cp_t

0xe421,	// (0x00088d49) popup_vitu2_window_ParamLimits

0xe421,	// (0x00088d49) popup_vitu2_window

0x74eb,	// (0x00081e13) aid_size_cell2_itu2_ParamLimits

0x74eb,	// (0x00081e13) aid_size_cell2_itu2

0x750d,	// (0x00081e35) aid_size_cell_itu2_ParamLimits

0x750d,	// (0x00081e35) aid_size_cell_itu2

0xdd7d,	// (0x000886a5) bg_popup_window_pane_cp09_ParamLimits

0xdd7d,	// (0x000886a5) bg_popup_window_pane_cp09

0x7551,	// (0x00081e79) field_vitu2_entry_pane_ParamLimits

0x7551,	// (0x00081e79) field_vitu2_entry_pane

0x7571,	// (0x00081e99) grid_vitu2_function_pane_ParamLimits

0x7571,	// (0x00081e99) grid_vitu2_function_pane

0x75b5,	// (0x00081edd) grid_vitu2_itu_pane_ParamLimits

0x75b5,	// (0x00081edd) grid_vitu2_itu_pane

0x762f,	// (0x00081f57) cell_vitu2_itu_pane_ParamLimits

0x762f,	// (0x00081f57) cell_vitu2_itu_pane

0x7648,	// (0x00081f70) cell_vitu2_function_pane_ParamLimits

0x7648,	// (0x00081f70) cell_vitu2_function_pane

0xd6cf,	// (0x00087ff7) bg_popup_call_pane_cp08_ParamLimits

0xd6cf,	// (0x00087ff7) bg_popup_call_pane_cp08

0xd6e6,	// (0x0008800e) field_vitu2_entry_pane_g1

0xd6f2,	// (0x0008801a) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0008a256) field_vitu2_entry_pane_g

0x1094,	// (0x0007b9bc) field_vitu2_entry_pane_t1_ParamLimits

0x1094,	// (0x0007b9bc) field_vitu2_entry_pane_t1

0x10c4,	// (0x0007b9ec) field_vitu2_entry_pane_t2_ParamLimits

0x10c4,	// (0x0007b9ec) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0008a25d) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0008a25d) field_vitu2_entry_pane_t

0x7689,	// (0x00081fb1) bg_button_pane_cp010_ParamLimits

0x7689,	// (0x00081fb1) bg_button_pane_cp010

0x7697,	// (0x00081fbf) cell_vitu2_itu_pane_g1

0x76b7,	// (0x00081fdf) cell_vitu2_itu_pane_t1_ParamLimits

0x76b7,	// (0x00081fdf) cell_vitu2_itu_pane_t1

0x10e1,	// (0x0007ba09) cell_vitu2_itu_pane_t2_ParamLimits

0x10e1,	// (0x0007ba09) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0008a267) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0008a267) cell_vitu2_itu_pane_t

0xa593,	// (0x00084ebb) bg_button_pane_cp011

0x7703,	// (0x0008202b) cell_vitu2_function_pane_g1

0xa15c,	// (0x00084a84) main_myfav_hc_pane

0x70b6,	// (0x000819de) popup_image3_note_pane_ParamLimits

0x70b6,	// (0x000819de) popup_image3_note_pane

0x70c4,	// (0x000819ec) popup_image3_tool_bar_pane_ParamLimits

0x70c4,	// (0x000819ec) popup_image3_tool_bar_pane

0x1157,	// (0x0007ba7f) cell_vitu2_itu_pane_t3_ParamLimits

0x1157,	// (0x0007ba7f) cell_vitu2_itu_pane_t3

0xa15c,	// (0x00084a84) bg_popup_trans_pane

0xd714,	// (0x0008803c) grid_image3_tool_bar_pane

0xd71e,	// (0x00088046) bg_popup_trans_pane_g1

0xad3e,	// (0x00085666) bg_popup_trans_pane_g2

0xd726,	// (0x0008804e) bg_popup_trans_pane_g3

0xd72e,	// (0x00088056) bg_popup_trans_pane_g4

0xd736,	// (0x0008805e) bg_popup_trans_pane_g5

0xd73e,	// (0x00088066) bg_popup_trans_pane_g6

0xd746,	// (0x0008806e) bg_popup_trans_pane_g7

0xd74e,	// (0x00088076) bg_popup_trans_pane_g8

0xad1e,	// (0x00085646) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0008a26e) bg_popup_trans_pane_g

0xd756,	// (0x0008807e) cell_image3_tool_bar_pane_ParamLimits

0xd756,	// (0x0008807e) cell_image3_tool_bar_pane

0xcd88,	// (0x000876b0) cell_image3_tool_bar_pane_g1

0xa15c,	// (0x00084a84) bg_popup_trans_pane_cp1

0xd76a,	// (0x00088092) popup_image3_note_pane_t1

0xd778,	// (0x000880a0) popup_image3_note_pane_t2

0xd786,	// (0x000880ae) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0008a281) popup_image3_note_pane_t

0xd794,	// (0x000880bc) popup_image3_note_pane_t3_copy1

0x7717,	// (0x0008203f) bg_myfav_hc_instruction_pane_ParamLimits

0x7717,	// (0x0008203f) bg_myfav_hc_instruction_pane

0x772f,	// (0x00082057) cell_myfav_contact_pane_ParamLimits

0x772f,	// (0x00082057) cell_myfav_contact_pane

0x7749,	// (0x00082071) cell_myfav_contact_pane_cp1_ParamLimits

0x7749,	// (0x00082071) cell_myfav_contact_pane_cp1

0x7761,	// (0x00082089) cell_myfav_contact_pane_cp2_ParamLimits

0x7761,	// (0x00082089) cell_myfav_contact_pane_cp2

0x7779,	// (0x000820a1) cell_myfav_contact_pane_cp3_ParamLimits

0x7779,	// (0x000820a1) cell_myfav_contact_pane_cp3

0x7790,	// (0x000820b8) cell_myfav_contact_pane_cp4_ParamLimits

0x7790,	// (0x000820b8) cell_myfav_contact_pane_cp4

0x77a6,	// (0x000820ce) cell_myfav_contact_pane_cp5_ParamLimits

0x77a6,	// (0x000820ce) cell_myfav_contact_pane_cp5

0x77ba,	// (0x000820e2) cell_myfav_contact_pane_cp6_ParamLimits

0x77ba,	// (0x000820e2) cell_myfav_contact_pane_cp6

0x77ce,	// (0x000820f6) cell_myfav_contact_pane_cp7_ParamLimits

0x77ce,	// (0x000820f6) cell_myfav_contact_pane_cp7

0xd7a2,	// (0x000880ca) listscroll_gen_pane_cp05

0x77e6,	// (0x0008210e) main_myfav_hc_pane_g1_ParamLimits

0x77e6,	// (0x0008210e) main_myfav_hc_pane_g1

0x77fc,	// (0x00082124) main_myfav_hc_pane_g2_ParamLimits

0x77fc,	// (0x00082124) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0008a288) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0008a288) main_myfav_hc_pane_g

0x782c,	// (0x00082154) main_myfav_hc_pane_t1_ParamLimits

0x782c,	// (0x00082154) main_myfav_hc_pane_t1

0xd7ab,	// (0x000880d3) main_myfav_hc_pane_t2_ParamLimits

0xd7ab,	// (0x000880d3) main_myfav_hc_pane_t2

0xd7bd,	// (0x000880e5) main_myfav_hc_pane_t3_ParamLimits

0xd7bd,	// (0x000880e5) main_myfav_hc_pane_t3

0x7843,	// (0x0008216b) main_myfav_hc_pane_t4_ParamLimits

0x7843,	// (0x0008216b) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0008a28f) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0008a28f) main_myfav_hc_pane_t

0xcd88,	// (0x000876b0) bg_myfav_hc_instruction_pane_g1

0xd7cf,	// (0x000880f7) cell_myfav_contact_pane_g1_ParamLimits

0xd7cf,	// (0x000880f7) cell_myfav_contact_pane_g1

0xd7cf,	// (0x000880f7) cell_myfav_contact_pane_g2_ParamLimits

0xd7cf,	// (0x000880f7) cell_myfav_contact_pane_g2

0xd7db,	// (0x00088103) cell_myfav_contact_pane_g3_ParamLimits

0xd7db,	// (0x00088103) cell_myfav_contact_pane_g3

0xd032,	// (0x0008795a) cell_myfav_contact_pane_g4_ParamLimits

0xd032,	// (0x0008795a) cell_myfav_contact_pane_g4

0xd7e8,	// (0x00088110) cell_myfav_contact_pane_g5_ParamLimits

0xd7e8,	// (0x00088110) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0008a29a) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0008a29a) cell_myfav_contact_pane_g

0x7814,	// (0x0008213c) main_myfav_hc_pane_g3_ParamLimits

0x7814,	// (0x0008213c) main_myfav_hc_pane_g3

0x21fc,	// (0x0007cb24) popup_adpt_find_window

0x786d,	// (0x00082195) afind_page_pane_ParamLimits

0x786d,	// (0x00082195) afind_page_pane

0x787a,	// (0x000821a2) aid_size_cell_afind_ParamLimits

0x787a,	// (0x000821a2) aid_size_cell_afind

0x7894,	// (0x000821bc) bg_popup_sub_pane_cp09_ParamLimits

0x7894,	// (0x000821bc) bg_popup_sub_pane_cp09

0x78a1,	// (0x000821c9) find_pane_cp01_ParamLimits

0x78a1,	// (0x000821c9) find_pane_cp01

0xd7f4,	// (0x0008811c) grid_afind_control_pane_ParamLimits

0xd7f4,	// (0x0008811c) grid_afind_control_pane

0x78ae,	// (0x000821d6) grid_afind_pane_ParamLimits

0x78ae,	// (0x000821d6) grid_afind_pane

0x78c8,	// (0x000821f0) cell_afind_pane_ParamLimits

0x78c8,	// (0x000821f0) cell_afind_pane

0xcd88,	// (0x000876b0) afind_page_pane_g1

0x7910,	// (0x00082238) afind_page_pane_g2

0x7919,	// (0x00082241) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0008a2a5) afind_page_pane_g

0x7922,	// (0x0008224a) afind_page_pane_t1

0xd808,	// (0x00088130) cell_afind_grid_control_pane_ParamLimits

0xd808,	// (0x00088130) cell_afind_grid_control_pane

0xd697,	// (0x00087fbf) bg_button_pane_cp69_ParamLimits

0xd697,	// (0x00087fbf) bg_button_pane_cp69

0x7942,	// (0x0008226a) cell_afind_pane_g1_ParamLimits

0x7942,	// (0x0008226a) cell_afind_pane_g1

0x794f,	// (0x00082277) cell_afind_pane_t1_ParamLimits

0x794f,	// (0x00082277) cell_afind_pane_t1

0xab37,	// (0x0008545f) bg_button_pane_cp72

0xd817,	// (0x0008813f) cell_afind_grid_control_pane_g1

0x4df3,	// (0x0007f71b) aid_image_placing_area_ParamLimits

0x4df3,	// (0x0007f71b) aid_image_placing_area

0xd358,	// (0x00087c80) field_vitu_entry_pane_g1_ParamLimits

0xd358,	// (0x00087c80) field_vitu_entry_pane_g1

0xd364,	// (0x00087c8c) field_vitu_entry_pane_g2_ParamLimits

0xd364,	// (0x00087c8c) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0008a152) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0008a152) field_vitu_entry_pane_g

0x69cc,	// (0x000812f4) cell_vitu_itu_pane_g1_ParamLimits

0x6a0e,	// (0x00081336) cell_vitu_itu_pane_t3_ParamLimits

0x6a0e,	// (0x00081336) cell_vitu_itu_pane_t3

0xd640,	// (0x00087f68) mp4_progress_pane_t1_ParamLimits

0xd659,	// (0x00087f81) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0008a1eb) mp4_progress_pane_t_ParamLimits

0xd672,	// (0x00087f9a) mup_progress_pane_cp04_ParamLimits

0x7857,	// (0x0008217f) main_myfav_hc_pane_t5_ParamLimits

0x7857,	// (0x0008217f) main_myfav_hc_pane_t5

0x0d4f,	// (0x0007b677) aid_zoom_text_primary

0x21fc,	// (0x0007cb24) popup_adpt_find_window_ParamLimits

0xa593,	// (0x00084ebb) main_cam_set_pane

0x72e9,	// (0x00081c11) cam4_zoom_pane_ParamLimits

0x72e9,	// (0x00081c11) cam4_zoom_pane

0x7961,	// (0x00082289) main_cam_set_pane_g1_ParamLimits

0x7961,	// (0x00082289) main_cam_set_pane_g1

0x796f,	// (0x00082297) main_cam_set_pane_g2_ParamLimits

0x796f,	// (0x00082297) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0008a2ac) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0008a2ac) main_cam_set_pane_g

0x797b,	// (0x000822a3) main_cam_set_pane_t1_ParamLimits

0x797b,	// (0x000822a3) main_cam_set_pane_t1

0x7997,	// (0x000822bf) main_cset_listscroll_pane_ParamLimits

0x7997,	// (0x000822bf) main_cset_listscroll_pane

0x79c2,	// (0x000822ea) main_cset_slider_pane_ParamLimits

0x79c2,	// (0x000822ea) main_cset_slider_pane

0xd828,	// (0x00088150) main_cset_list_pane_ParamLimits

0xd828,	// (0x00088150) main_cset_list_pane

0xd838,	// (0x00088160) scroll_pane_cp028

0x79e1,	// (0x00082309) aid_area_touch_slider

0x79fd,	// (0x00082325) cset_slider_pane

0x7a27,	// (0x0008234f) main_cset_slider_pane_g1

0x7a3c,	// (0x00082364) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0008a2b1) main_cset_slider_pane_g

0xd871,	// (0x00088199) main_cset_slider_pane_t1

0x7b02,	// (0x0008242a) main_cset_slider_pane_t2

0x7b1c,	// (0x00082444) main_cset_slider_pane_t3

0x7b36,	// (0x0008245e) main_cset_slider_pane_t4

0x7b54,	// (0x0008247c) main_cset_slider_pane_t5

0x7b72,	// (0x0008249a) main_cset_slider_pane_t6

0x7b89,	// (0x000824b1) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0008a2d6) main_cset_slider_pane_t

0x7c97,	// (0x000825bf) cset_list_set_pane_ParamLimits

0x7c97,	// (0x000825bf) cset_list_set_pane

0x7cb0,	// (0x000825d8) aid_position_infowindow_above

0x7cb8,	// (0x000825e0) aid_position_infowindow_below

0x7cc0,	// (0x000825e8) cset_list_set_pane_g1_ParamLimits

0x7cc0,	// (0x000825e8) cset_list_set_pane_g1

0x11a9,	// (0x0007bad1) cset_list_set_pane_g3_ParamLimits

0x11a9,	// (0x0007bad1) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0008a2f5) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0008a2f5) cset_list_set_pane_g

0x11b8,	// (0x0007bae0) cset_list_set_pane_t1_ParamLimits

0x11b8,	// (0x0007bae0) cset_list_set_pane_t1

0xa593,	// (0x00084ebb) list_highlight_pane_cp021_ParamLimits

0xa593,	// (0x00084ebb) list_highlight_pane_cp021

0xb65c,	// (0x00085f84) cset_slider_pane_g1

0xb66e,	// (0x00085f96) cset_slider_pane_g2

0xb665,	// (0x00085f8d) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0008a2fa) cset_slider_pane_g

0x7ccc,	// (0x000825f4) aid_area_touch_cam4_zoom

0x7cd4,	// (0x000825fc) cam4_zoom_cont_pane

0x7cdc,	// (0x00082604) cam4_zoom_pane_g1

0x7ce4,	// (0x0008260c) cam4_zoom_pane_g2

0x7cec,	// (0x00082614) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0008a301) cam4_zoom_pane_g

0xd54f,	// (0x00087e77) cam4_zoom_cont_pane_g1

0xe06e,	// (0x00088996) cam4_zoom_cont_pane_g2

0xe077,	// (0x0008899f) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0008a308) cam4_zoom_cont_pane_g

0x710d,	// (0x00081a35) call4_image_pane_ParamLimits

0x710d,	// (0x00081a35) call4_image_pane

0x716c,	// (0x00081a94) call4_windows_conf_pane_ParamLimits

0x71b1,	// (0x00081ad9) popup_call4_audio_in_window_ParamLimits

0x71b1,	// (0x00081ad9) popup_call4_audio_in_window

0xa15c,	// (0x00084a84) bg_popup_call2_act_pane_cp02

0xd6a3,	// (0x00087fcb) call4_list_conf_pane

0xcd88,	// (0x000876b0) call4_image_pane_g1

0xcd88,	// (0x000876b0) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0008a013) call4_image_pane_g

0xd929,	// (0x00088251) list_single_graphic_popup_conf4_pane_ParamLimits

0xd929,	// (0x00088251) list_single_graphic_popup_conf4_pane

0xa15c,	// (0x00084a84) list_highlight_pane_cp022

0xd93c,	// (0x00088264) list_single_graphic_popup_conf4_pane_g1

0xb258,	// (0x00085b80) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0008a30f) list_single_graphic_popup_conf4_pane_g

0xd944,	// (0x0008826c) list_single_graphic_popup_conf4_pane_t1

0x31b5,	// (0x0007dadd) popup_vtel_slider_window_ParamLimits

0x31b5,	// (0x0007dadd) popup_vtel_slider_window

0xd685,	// (0x00087fad) dialer2_ne_pane_t2_ParamLimits

0xd685,	// (0x00087fad) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0008a1f0) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0008a1f0) dialer2_ne_pane_t

0xa593,	// (0x00084ebb) bg_popup_sub_pane_cp010_ParamLimits

0xa593,	// (0x00084ebb) bg_popup_sub_pane_cp010

0x7cf4,	// (0x0008261c) popup_vtel_slider_window_g1_ParamLimits

0x7cf4,	// (0x0008261c) popup_vtel_slider_window_g1

0x7d00,	// (0x00082628) popup_vtel_slider_window_g2_ParamLimits

0x7d00,	// (0x00082628) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0008a314) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0008a314) popup_vtel_slider_window_g

0x7d48,	// (0x00082670) vtel_slider_pane_ParamLimits

0x7d48,	// (0x00082670) vtel_slider_pane

0x7d57,	// (0x0008267f) vtel_slider_pane_g1_ParamLimits

0x7d57,	// (0x0008267f) vtel_slider_pane_g1

0x7d64,	// (0x0008268c) vtel_slider_pane_g2_ParamLimits

0x7d64,	// (0x0008268c) vtel_slider_pane_g2

0x7d71,	// (0x00082699) vtel_slider_pane_g3_ParamLimits

0x7d71,	// (0x00082699) vtel_slider_pane_g3

0x7d57,	// (0x0008267f) vtel_slider_pane_g4_ParamLimits

0x7d57,	// (0x0008267f) vtel_slider_pane_g4

0x7d7e,	// (0x000826a6) vtel_slider_pane_g5_ParamLimits

0x7d7e,	// (0x000826a6) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0008a31d) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0008a31d) vtel_slider_pane_g

0xa593,	// (0x00084ebb) main_gallery2_pane

0x7533,	// (0x00081e5b) aid_size_row_itut2_dropdow_list_ParamLimits

0x7533,	// (0x00081e5b) aid_size_row_itut2_dropdow_list

0x7593,	// (0x00081ebb) grid_vitu2_function_top_pane_ParamLimits

0x7593,	// (0x00081ebb) grid_vitu2_function_top_pane

0x75ed,	// (0x00081f15) popup_vitu2_dropdown_list_window_ParamLimits

0x75ed,	// (0x00081f15) popup_vitu2_dropdown_list_window

0x760d,	// (0x00081f35) popup_vitu2_match_list_window

0x7d8b,	// (0x000826b3) cell_vitu2_function_top_pane_ParamLimits

0x7d8b,	// (0x000826b3) cell_vitu2_function_top_pane

0x7da5,	// (0x000826cd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7da5,	// (0x000826cd) cell_vitu2_function_top_pane_cp01

0x7dc1,	// (0x000826e9) cell_vitu2_function_top_wide_pane_ParamLimits

0x7dc1,	// (0x000826e9) cell_vitu2_function_top_wide_pane

0xa593,	// (0x00084ebb) bg_button_pane_cp012

0x7ddd,	// (0x00082705) cell_vitu2_function_top_pane_g1

0x7df1,	// (0x00082719) bg_button_pane_cp013_ParamLimits

0x7df1,	// (0x00082719) bg_button_pane_cp013

0x7e0d,	// (0x00082735) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7e0d,	// (0x00082735) cell_vitu2_function_top_wide_pane_g1

0xe421,	// (0x00088d49) bg_popup_sub_pane_cp20

0x7e25,	// (0x0008274d) list_vitu2_match_list_pane

0xd71e,	// (0x00088046) bg_popup_sub_pane_cp20_g1

0xd726,	// (0x0008804e) bg_popup_sub_pane_cp20_g2

0xad3e,	// (0x00085666) bg_popup_sub_pane_cp20_g3

0xd72e,	// (0x00088056) bg_popup_sub_pane_cp20_g4

0xad1e,	// (0x00085646) bg_popup_sub_pane_cp20_g5

0xd95a,	// (0x00088282) bg_popup_sub_pane_cp20_g6

0xd73e,	// (0x00088066) bg_popup_sub_pane_cp20_g7

0xd746,	// (0x0008806e) bg_popup_sub_pane_cp20_g8

0xd74e,	// (0x00088076) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0008a328) bg_popup_sub_pane_cp20_g

0x7e3d,	// (0x00082765) list_vitu2_match_list_item_pane_ParamLimits

0x7e3d,	// (0x00082765) list_vitu2_match_list_item_pane

0x7e4f,	// (0x00082777) list_vitu2_match_list_item_pane_t1

0xa15c,	// (0x00084a84) bg_popup_sub_pane_cp21

0xb180,	// (0x00085aa8) grid_vitu2_dropdown_list_pane

0x7e69,	// (0x00082791) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7e69,	// (0x00082791) cell_vitu2_dropdown_list_char_pane

0x7e8a,	// (0x000827b2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7e8a,	// (0x000827b2) cell_vitu2_dropdown_list_ctrl_pane

0xd962,	// (0x0008828a) cell_vitu2_dropdown_list_char_pane_g1

0xd96b,	// (0x00088293) cell_vitu2_dropdown_list_char_pane_g2

0xd974,	// (0x0008829c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0008a345) cell_vitu2_dropdown_list_char_pane_g

0x7eb6,	// (0x000827de) cell_vitu2_dropdown_list_char_pane_t1

0x7ec4,	// (0x000827ec) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ec4,	// (0x000827ec) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7ed4,	// (0x000827fc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7ed4,	// (0x000827fc) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7ee5,	// (0x0008280d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7ee5,	// (0x0008280d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7ef5,	// (0x0008281d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7ef5,	// (0x0008281d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfcd,	// (0x000878f5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfcd,	// (0x000878f5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0008a34c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0008a34c) cell_vitu2_dropdown_list_ctrl_pane_g

0x7f11,	// (0x00082839) aid_size_cell_gallery2_ParamLimits

0x7f11,	// (0x00082839) aid_size_cell_gallery2

0x7f2b,	// (0x00082853) grid_gallery2_pane_ParamLimits

0x7f2b,	// (0x00082853) grid_gallery2_pane

0x7f42,	// (0x0008286a) scroll_pane_cp029_ParamLimits

0x7f42,	// (0x0008286a) scroll_pane_cp029

0x7f52,	// (0x0008287a) cell_gallery2_pane_ParamLimits

0x7f52,	// (0x0008287a) cell_gallery2_pane

0xd97d,	// (0x000882a5) cell_gallery2_pane_g2

0x7fa7,	// (0x000828cf) cell_gallery2_pane_g3

0xd985,	// (0x000882ad) cell_gallery2_pane_g4

0xd98d,	// (0x000882b5) cell_gallery2_pane_g5

0xaae5,	// (0x0008540d) grid_highlight_pane_cp10

0x760d,	// (0x00081f35) popup_vitu2_match_list_window_ParamLimits

0x761f,	// (0x00081f47) popup_vitu2_query_window_ParamLimits

0x761f,	// (0x00081f47) popup_vitu2_query_window

0xa15c,	// (0x00084a84) bg_vitu2_candi_button_pane

0xd962,	// (0x0008828a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd96b,	// (0x00088293) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd974,	// (0x0008829c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1217,	// (0x0007bb3f) bg_button_pane_cp015

0x7faf,	// (0x000828d7) bg_button_pane_cp016

0x7fc2,	// (0x000828ea) bg_button_pane_cp017

0xc96b,	// (0x00087293) bg_popup_sub_pane_cp22

0xd995,	// (0x000882bd) popup_vitu2_query_window_g1

0x124a,	// (0x0007bb72) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0008a357) popup_vitu2_query_window_g

0x1267,	// (0x0007bb8f) popup_vitu2_query_window_t1_ParamLimits

0x1267,	// (0x0007bb8f) popup_vitu2_query_window_t1

0x129a,	// (0x0007bbc2) popup_vitu2_query_window_t2_ParamLimits

0x129a,	// (0x0007bbc2) popup_vitu2_query_window_t2

0x12ac,	// (0x0007bbd4) popup_vitu2_query_window_t3_ParamLimits

0x12ac,	// (0x0007bbd4) popup_vitu2_query_window_t3

0x7fe6,	// (0x0008290e) popup_vitu2_query_window_t4_ParamLimits

0x7fe6,	// (0x0008290e) popup_vitu2_query_window_t4

0x8007,	// (0x0008292f) popup_vitu2_query_window_t5_ParamLimits

0x8007,	// (0x0008292f) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0008a35e) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0008a35e) popup_vitu2_query_window_t

0xd820,	// (0x00088148) main_cset_text_pane

0x79e1,	// (0x00082309) aid_area_touch_slider_ParamLimits

0x79fd,	// (0x00082325) cset_slider_pane_ParamLimits

0x7a27,	// (0x0008234f) main_cset_slider_pane_g1_ParamLimits

0x7a3c,	// (0x00082364) main_cset_slider_pane_g2_ParamLimits

0xd841,	// (0x00088169) main_cset_slider_pane_g3_ParamLimits

0xd841,	// (0x00088169) main_cset_slider_pane_g3

0x7a51,	// (0x00082379) main_cset_slider_pane_g4_ParamLimits

0x7a51,	// (0x00082379) main_cset_slider_pane_g4

0x7a60,	// (0x00082388) main_cset_slider_pane_g5_ParamLimits

0x7a60,	// (0x00082388) main_cset_slider_pane_g5

0x7a6e,	// (0x00082396) main_cset_slider_pane_g6_ParamLimits

0x7a6e,	// (0x00082396) main_cset_slider_pane_g6

0xf989,	// (0x0008a2b1) main_cset_slider_pane_g_ParamLimits

0xd871,	// (0x00088199) main_cset_slider_pane_t1_ParamLimits

0x7b02,	// (0x0008242a) main_cset_slider_pane_t2_ParamLimits

0x7b1c,	// (0x00082444) main_cset_slider_pane_t3_ParamLimits

0x7b36,	// (0x0008245e) main_cset_slider_pane_t4_ParamLimits

0x7b54,	// (0x0008247c) main_cset_slider_pane_t5_ParamLimits

0x7b72,	// (0x0008249a) main_cset_slider_pane_t6_ParamLimits

0x7b89,	// (0x000824b1) main_cset_slider_pane_t7_ParamLimits

0x7bb7,	// (0x000824df) main_cset_slider_pane_t8_ParamLimits

0x7bb7,	// (0x000824df) main_cset_slider_pane_t8

0x7bdf,	// (0x00082507) main_cset_slider_pane_t9_ParamLimits

0x7bdf,	// (0x00082507) main_cset_slider_pane_t9

0x7c07,	// (0x0008252f) main_cset_slider_pane_t10_ParamLimits

0x7c07,	// (0x0008252f) main_cset_slider_pane_t10

0x7c2f,	// (0x00082557) main_cset_slider_pane_t11_ParamLimits

0x7c2f,	// (0x00082557) main_cset_slider_pane_t11

0x7c59,	// (0x00082581) main_cset_slider_pane_t12_ParamLimits

0x7c59,	// (0x00082581) main_cset_slider_pane_t12

0x7c78,	// (0x000825a0) main_cset_slider_pane_t13_ParamLimits

0x7c78,	// (0x000825a0) main_cset_slider_pane_t13

0xf9ae,	// (0x0008a2d6) main_cset_slider_pane_t_ParamLimits

0xa15c,	// (0x00084a84) bg_popup_sub_pane_cp011

0xd9a1,	// (0x000882c9) main_cset_text_pane_g1

0xd9a9,	// (0x000882d1) main_cset_text_pane_t1

0xd9b7,	// (0x000882df) main_cset_text_pane_t2

0xd9c5,	// (0x000882ed) main_cset_text_pane_t3

0xd9d3,	// (0x000882fb) main_cset_text_pane_t4

0xd9e1,	// (0x00088309) main_cset_text_pane_t5

0xd9ef,	// (0x00088317) main_cset_text_pane_t6

0xd9fd,	// (0x00088325) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0008a36d) main_cset_text_pane_t

0xa15c,	// (0x00084a84) main_cam4_burst_pane

0xa15c,	// (0x00084a84) main_cam5_pane

0x7930,	// (0x00082258) bg_button_pane_cp019

0x7939,	// (0x00082261) bg_button_pane_cp020

0xd84d,	// (0x00088175) main_cset_slider_pane_g7_ParamLimits

0xd84d,	// (0x00088175) main_cset_slider_pane_g7

0xd859,	// (0x00088181) main_cset_slider_pane_g8_ParamLimits

0xd859,	// (0x00088181) main_cset_slider_pane_g8

0x7a82,	// (0x000823aa) main_cset_slider_pane_g9_ParamLimits

0x7a82,	// (0x000823aa) main_cset_slider_pane_g9

0x7a8e,	// (0x000823b6) main_cset_slider_pane_g10_ParamLimits

0x7a8e,	// (0x000823b6) main_cset_slider_pane_g10

0x7a9a,	// (0x000823c2) main_cset_slider_pane_g11_ParamLimits

0x7a9a,	// (0x000823c2) main_cset_slider_pane_g11

0x7aa6,	// (0x000823ce) main_cset_slider_pane_g12_ParamLimits

0x7aa6,	// (0x000823ce) main_cset_slider_pane_g12

0x7ab2,	// (0x000823da) main_cset_slider_pane_g13_ParamLimits

0x7ab2,	// (0x000823da) main_cset_slider_pane_g13

0x7ac0,	// (0x000823e8) main_cset_slider_pane_g14_ParamLimits

0x7ac0,	// (0x000823e8) main_cset_slider_pane_g14

0x7ace,	// (0x000823f6) main_cset_slider_pane_g15_ParamLimits

0x7ace,	// (0x000823f6) main_cset_slider_pane_g15

0xd89f,	// (0x000881c7) main_cset_slider_pane_t14_ParamLimits

0xd89f,	// (0x000881c7) main_cset_slider_pane_t14

0xd8f0,	// (0x00088218) main_cset_slider_pane_t15_ParamLimits

0xd8f0,	// (0x00088218) main_cset_slider_pane_t15

0x8028,	// (0x00082950) aid_cam4_burst_size_cell_ParamLimits

0x8028,	// (0x00082950) aid_cam4_burst_size_cell

0x8044,	// (0x0008296c) grid_cam4_burst_pane_ParamLimits

0x8044,	// (0x0008296c) grid_cam4_burst_pane

0x8074,	// (0x0008299c) linegrid_cam4_burst_pane_ParamLimits

0x8074,	// (0x0008299c) linegrid_cam4_burst_pane

0x8094,	// (0x000829bc) scroll_pane_cp30_ParamLimits

0x8094,	// (0x000829bc) scroll_pane_cp30

0x80a0,	// (0x000829c8) cell_cam4_burst_pane_ParamLimits

0x80a0,	// (0x000829c8) cell_cam4_burst_pane

0xda0b,	// (0x00088333) linegrid_cam4_burst_pane_g1_ParamLimits

0xda0b,	// (0x00088333) linegrid_cam4_burst_pane_g1

0x80dc,	// (0x00082a04) linegrid_cam4_burst_pane_g2_ParamLimits

0x80dc,	// (0x00082a04) linegrid_cam4_burst_pane_g2

0xda18,	// (0x00088340) linegrid_cam4_burst_pane_g3_ParamLimits

0xda18,	// (0x00088340) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0008a37c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0008a37c) linegrid_cam4_burst_pane_g

0x80ed,	// (0x00082a15) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x80ed,	// (0x00082a15) linegrid_cam4_burst_pane_g3_copy1

0xda25,	// (0x0008834d) linegrid_cam4_burst_pane_g4_ParamLimits

0xda25,	// (0x0008834d) linegrid_cam4_burst_pane_g4

0x8107,	// (0x00082a2f) linegrid_cam4_burst_pane_g5_ParamLimits

0x8107,	// (0x00082a2f) linegrid_cam4_burst_pane_g5

0x8118,	// (0x00082a40) linegrid_cam4_burst_pane_g6_ParamLimits

0x8118,	// (0x00082a40) linegrid_cam4_burst_pane_g6

0xda32,	// (0x0008835a) linegrid_cam4_burst_pane_g7_ParamLimits

0xda32,	// (0x0008835a) linegrid_cam4_burst_pane_g7

0x8129,	// (0x00082a51) cell_cam4_burst_pane_g1

0xda4b,	// (0x00088373) main_cam5_pane_t1_ParamLimits

0xda4b,	// (0x00088373) main_cam5_pane_t1

0xda5d,	// (0x00088385) main_cam5_pane_t2_ParamLimits

0xda5d,	// (0x00088385) main_cam5_pane_t2

0xda6f,	// (0x00088397) main_cam5_pane_t3_ParamLimits

0xda6f,	// (0x00088397) main_cam5_pane_t3

0xda81,	// (0x000883a9) main_cam5_pane_t4_ParamLimits

0xda81,	// (0x000883a9) main_cam5_pane_t4

0xda99,	// (0x000883c1) main_cam5_pane_t5_ParamLimits

0xda99,	// (0x000883c1) main_cam5_pane_t5

0xdaad,	// (0x000883d5) main_cam5_pane_t6_ParamLimits

0xdaad,	// (0x000883d5) main_cam5_pane_t6

0xdac1,	// (0x000883e9) main_cam5_pane_t7_ParamLimits

0xdac1,	// (0x000883e9) main_cam5_pane_t7

0xdad3,	// (0x000883fb) main_cam5_pane_t8_ParamLimits

0xdad3,	// (0x000883fb) main_cam5_pane_t8

0xdaef,	// (0x00088417) main_cam5_pane_t9_ParamLimits

0xdaef,	// (0x00088417) main_cam5_pane_t9

0xdb01,	// (0x00088429) main_cam5_pane_t10_ParamLimits

0xdb01,	// (0x00088429) main_cam5_pane_t10

0xdb13,	// (0x0008843b) main_cam5_pane_t11_ParamLimits

0xdb13,	// (0x0008843b) main_cam5_pane_t11

0xdb25,	// (0x0008844d) main_cam5_pane_t12_ParamLimits

0xdb25,	// (0x0008844d) main_cam5_pane_t12

0xdb3a,	// (0x00088462) main_cam5_pane_t13_ParamLimits

0xdb3a,	// (0x00088462) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0008a388) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0008a388) main_cam5_pane_t

0x22b2,	// (0x0007cbda) popup_scut_keymap_window_ParamLimits

0x22b2,	// (0x0007cbda) popup_scut_keymap_window

0x813c,	// (0x00082a64) aid_size_cell_brow_shortcut

0xaae5,	// (0x0008540d) bg_popup_window_pane_cp010

0x8148,	// (0x00082a70) grid_scut_pane

0x8154,	// (0x00082a7c) cell_scut_pane_ParamLimits

0x8154,	// (0x00082a7c) cell_scut_pane

0x816b,	// (0x00082a93) cell_scut_pane_g1

0xdb57,	// (0x0008847f) cell_scut_pane_t1

0xdb66,	// (0x0008848e) cell_scut_pane_t2

0x8174,	// (0x00082a9c) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0008a3a3) cell_scut_pane_t

0x601d,	// (0x00080945) main_mup3_pane_g8_ParamLimits

0x601d,	// (0x00080945) main_mup3_pane_g8

0x7541,	// (0x00081e69) area_vitu2_query_pane_ParamLimits

0x7541,	// (0x00081e69) area_vitu2_query_pane

0x1229,	// (0x0007bb51) input_focus_pane_cp08

0xdb75,	// (0x0008849d) area_vitu2_query_pane_g1

0x132a,	// (0x0007bc52) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0008a3aa) area_vitu2_query_pane_g

0x8182,	// (0x00082aaa) area_vitu2_query_pane_t1_ParamLimits

0x8182,	// (0x00082aaa) area_vitu2_query_pane_t1

0x8196,	// (0x00082abe) area_vitu2_query_pane_t2_ParamLimits

0x8196,	// (0x00082abe) area_vitu2_query_pane_t2

0x133b,	// (0x0007bc63) area_vitu2_query_pane_t3_ParamLimits

0x133b,	// (0x0007bc63) area_vitu2_query_pane_t3

0x1363,	// (0x0007bc8b) area_vitu2_query_pane_t4_ParamLimits

0x1363,	// (0x0007bc8b) area_vitu2_query_pane_t4

0x138b,	// (0x0007bcb3) area_vitu2_query_pane_t5_ParamLimits

0x138b,	// (0x0007bcb3) area_vitu2_query_pane_t5

0x13b3,	// (0x0007bcdb) area_vitu2_query_pane_t6_ParamLimits

0x13b3,	// (0x0007bcdb) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0008a3af) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0008a3af) area_vitu2_query_pane_t

0x81aa,	// (0x00082ad2) bg_button_pane_cp018

0x81b8,	// (0x00082ae0) bg_button_pane_cp021

0x13ff,	// (0x0007bd27) bg_button_pane_cp022

0x1410,	// (0x0007bd38) input_focus_pane_cp09

0xb367,	// (0x00085c8f) aid_size_touch_mv_arrow_left

0xb392,	// (0x00085cba) aid_size_touch_mv_arrow_right

0x7ae6,	// (0x0008240e) main_cset_slider_pane_g16_ParamLimits

0x7ae6,	// (0x0008240e) main_cset_slider_pane_g16

0x7af4,	// (0x0008241c) main_cset_slider_pane_g17_ParamLimits

0x7af4,	// (0x0008241c) main_cset_slider_pane_g17

0x8129,	// (0x00082a51) cell_cam4_burst_pane_g1_ParamLimits

0xa15c,	// (0x00084a84) compa_mode_pane

0x7d0c,	// (0x00082634) popup_vtel_slider_window_g3_ParamLimits

0x7d0c,	// (0x00082634) popup_vtel_slider_window_g3

0x7d20,	// (0x00082648) popup_vtel_slider_window_g4_ParamLimits

0x7d20,	// (0x00082648) popup_vtel_slider_window_g4

0x7d34,	// (0x0008265c) popup_vtel_slider_window_t1_ParamLimits

0x7d34,	// (0x0008265c) popup_vtel_slider_window_t1

0xa15c,	// (0x00084a84) main_cl_pane

0x5307,	// (0x0007fc2f) popup_imed_adjust2_window_ParamLimits

0xc96b,	// (0x00087293) bg_tb_trans_pane_cp05_ParamLimits

0xd28d,	// (0x00087bb5) popup_imed_adjust2_window_g1_ParamLimits

0xd29c,	// (0x00087bc4) popup_imed_adjust2_window_g2_ParamLimits

0xd29c,	// (0x00087bc4) popup_imed_adjust2_window_g2

0xd2a8,	// (0x00087bd0) popup_imed_adjust2_window_g3_ParamLimits

0xd2a8,	// (0x00087bd0) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0008a116) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0008a116) popup_imed_adjust2_window_g

0xd2b4,	// (0x00087bdc) popup_imed_adjust2_window_t1_ParamLimits

0xd2cc,	// (0x00087bf4) slider_imed_adjust_pane_ParamLimits

0xd2e0,	// (0x00087c08) slider_imed_adjust_pane_g1_ParamLimits

0xd2f0,	// (0x00087c18) slider_imed_adjust_pane_g2_ParamLimits

0xd300,	// (0x00087c28) slider_imed_adjust_pane_g3_ParamLimits

0xd311,	// (0x00087c39) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0008a11d) slider_imed_adjust_pane_g_ParamLimits

0x7292,	// (0x00081bba) aid_touch_area_cam4_ParamLimits

0x7292,	// (0x00081bba) aid_touch_area_cam4

0x72a2,	// (0x00081bca) battery_pane_cp01

0x7329,	// (0x00081c51) main_camera4_pane_g6_ParamLimits

0x7329,	// (0x00081c51) main_camera4_pane_g6

0x7347,	// (0x00081c6f) main_camera4_pane_t2_ParamLimits

0x7347,	// (0x00081c6f) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0008a224) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0008a224) main_camera4_pane_t

0x73c8,	// (0x00081cf0) aid_touch_area_vid4_ParamLimits

0x73c8,	// (0x00081cf0) aid_touch_area_vid4

0x7408,	// (0x00081d30) main_video4_pane_g5_ParamLimits

0x7408,	// (0x00081d30) main_video4_pane_g5

0x742c,	// (0x00081d54) vid4_progress_pane_ParamLimits

0x742c,	// (0x00081d54) vid4_progress_pane

0xd865,	// (0x0008818d) main_cset_slider_pane_g18_ParamLimits

0xd865,	// (0x0008818d) main_cset_slider_pane_g18

0xda3f,	// (0x00088367) cell_cam4_burst_pane_g2_ParamLimits

0xda3f,	// (0x00088367) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0008a383) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0008a383) cell_cam4_burst_pane_g

0x81c4,	// (0x00082aec) bg_cl_pane_ParamLimits

0x81c4,	// (0x00082aec) bg_cl_pane

0x81d0,	// (0x00082af8) cl_header_pane_ParamLimits

0x81d0,	// (0x00082af8) cl_header_pane

0x81dc,	// (0x00082b04) cl_listscroll_pane_ParamLimits

0x81dc,	// (0x00082b04) cl_listscroll_pane

0xdb81,	// (0x000884a9) bg_cl_pane_g1

0xdba4,	// (0x000884cc) bg_cl_pane_g2

0xdbac,	// (0x000884d4) bg_cl_pane_g3

0xdbb4,	// (0x000884dc) bg_cl_pane_g4

0xdbbc,	// (0x000884e4) bg_cl_pane_g5

0xdbc4,	// (0x000884ec) bg_cl_pane_g6

0xdbcc,	// (0x000884f4) bg_cl_pane_g7

0xdbd4,	// (0x000884fc) bg_cl_pane_g8

0xdbdc,	// (0x00088504) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0008a3be) bg_cl_pane_g

0x81e8,	// (0x00082b10) aid_height_cl_leading_ParamLimits

0x81e8,	// (0x00082b10) aid_height_cl_leading

0x81f4,	// (0x00082b1c) aid_height_cl_text_ParamLimits

0x81f4,	// (0x00082b1c) aid_height_cl_text

0xe421,	// (0x00088d49) bg_cl_header_pane_ParamLimits

0xe421,	// (0x00088d49) bg_cl_header_pane

0x820c,	// (0x00082b34) cl_header_pane_g1_ParamLimits

0x820c,	// (0x00082b34) cl_header_pane_g1

0x8219,	// (0x00082b41) cl_header_pane_t1_ParamLimits

0x8219,	// (0x00082b41) cl_header_pane_t1

0xdbe4,	// (0x0008850c) cl_list_pane

0xd838,	// (0x00088160) hc_scroll_pane_cp01

0xad1e,	// (0x00085646) bg_cl_header_pane_g1

0xd71e,	// (0x00088046) bg_cl_header_pane_g2

0xad3e,	// (0x00085666) bg_cl_header_pane_g3

0xd72e,	// (0x00088056) bg_cl_header_pane_g4

0xd726,	// (0x0008804e) bg_cl_header_pane_g5

0xd95a,	// (0x00088282) bg_cl_header_pane_g6

0xd746,	// (0x0008806e) bg_cl_header_pane_g7

0xd74e,	// (0x00088076) bg_cl_header_pane_g8

0xd73e,	// (0x00088066) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0008a3d1) bg_cl_header_pane_g

0x822b,	// (0x00082b53) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x822b,	// (0x00082b53) hc_cl_list_double_graphic_heading_pane

0x823f,	// (0x00082b67) hc_cl_list_single_graphic_pane_ParamLimits

0x823f,	// (0x00082b67) hc_cl_list_single_graphic_pane

0x8259,	// (0x00082b81) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8259,	// (0x00082b81) hc_cl_list_single_graphic_pane_g1

0x8265,	// (0x00082b8d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8265,	// (0x00082b8d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0008a3e4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0008a3e4) hc_cl_list_single_graphic_pane_g

0x8279,	// (0x00082ba1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8279,	// (0x00082ba1) hc_cl_list_single_graphic_pane_t1

0x8259,	// (0x00082b81) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8259,	// (0x00082b81) hc_cl_list_double_graphic_heading_pane_g1

0x828e,	// (0x00082bb6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x828e,	// (0x00082bb6) hc_cl_list_double_graphic_heading_pane_g2

0x82a2,	// (0x00082bca) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x82a2,	// (0x00082bca) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0008a3e9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0008a3e9) hc_cl_list_double_graphic_heading_pane_g

0x82b6,	// (0x00082bde) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x82b6,	// (0x00082bde) hc_cl_list_double_graphic_heading_pane_t1

0x82cb,	// (0x00082bf3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x82cb,	// (0x00082bf3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0008a3f0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0008a3f0) hc_cl_list_double_graphic_heading_pane_t

0x82e8,	// (0x00082c10) vid4_progress_pane_g1

0x82f8,	// (0x00082c20) vid4_progress_pane_g2

0x8308,	// (0x00082c30) vid4_progress_pane_g3

0x831a,	// (0x00082c42) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0008a3f5) vid4_progress_pane_g

0x8332,	// (0x00082c5a) vid4_progress_pane_t1

0x8348,	// (0x00082c70) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0008a400) vid4_progress_pane_t

0x8373,	// (0x00082c9b) wait_bar_pane_cp07

0xcb7b,	// (0x000874a3) blid_firmament_pane_ParamLimits

0xcbbe,	// (0x000874e6) popup_blid_sat_info2_window_g1

0xcbe2,	// (0x0008750a) popup_blid_sat_info2_window_t3

0xcbf0,	// (0x00087518) popup_blid_sat_info2_window_t4

0xcbfe,	// (0x00087526) popup_blid_sat_info2_window_t5

0xcc0c,	// (0x00087534) popup_blid_sat_info2_window_t6

0xcc1c,	// (0x00087544) popup_blid_sat_info2_window_t7

0xcc2a,	// (0x00087552) popup_blid_sat_info2_window_t8

0xcc38,	// (0x00087560) popup_blid_sat_info2_window_t9

0xcc46,	// (0x0008756e) popup_blid_sat_info2_window_t10

0xcd08,	// (0x00087630) aid_firma_cardinal_ParamLimits

0xcd1c,	// (0x00087644) blid_firmament_pane_t1_ParamLimits

0xcd33,	// (0x0008765b) blid_firmament_pane_t2_ParamLimits

0xcd4a,	// (0x00087672) blid_firmament_pane_t3_ParamLimits

0xcd61,	// (0x00087689) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0008a00a) blid_firmament_pane_t_ParamLimits

0xcd78,	// (0x000876a0) blid_sat_info_pane_ParamLimits

0xa593,	// (0x00084ebb) main_cam_set_pane_ParamLimits

0x67ec,	// (0x00081114) aid_size_cell_colour_35_ParamLimits

0x6806,	// (0x0008112e) aid_size_cell_colour_112_ParamLimits

0x681d,	// (0x00081145) aid_size_cell_effect_ParamLimits

0xa593,	// (0x00084ebb) bg_tb_trans_pane_cp02_ParamLimits

0xb0f2,	// (0x00085a1a) heading_imed_pane_ParamLimits

0x6837,	// (0x0008115f) listscroll_imed_pane_ParamLimits

0xbf57,	// (0x0008687f) popup_call2_audio_first_window_g5_ParamLimits

0xbf57,	// (0x0008687f) popup_call2_audio_first_window_g5

0x6f86,	// (0x000818ae) aid_size_touch_image3_arrow_left_ParamLimits

0x6f86,	// (0x000818ae) aid_size_touch_image3_arrow_left

0x6f9c,	// (0x000818c4) aid_size_touch_image3_arrow_right_ParamLimits

0x6f9c,	// (0x000818c4) aid_size_touch_image3_arrow_right

0x835d,	// (0x00082c85) vid4_progress_pane_t3

0x6ad7,	// (0x000813ff) main_hwr_training_symbol_option_pane_ParamLimits

0x6ad7,	// (0x000813ff) main_hwr_training_symbol_option_pane

0xd57a,	// (0x00087ea2) popup_hwr_training_preview_window_ParamLimits

0xd57a,	// (0x00087ea2) popup_hwr_training_preview_window

0x6b38,	// (0x00081460) hwr_training_navi_pane_g5_ParamLimits

0x6b38,	// (0x00081460) hwr_training_navi_pane_g5

0xd70c,	// (0x00088034) popup_char_count_window

0xe421,	// (0x00088d49) bg_popup_sub_pane_cp20_ParamLimits

0x7e25,	// (0x0008274d) list_vitu2_match_list_pane_ParamLimits

0x7e31,	// (0x00082759) vitu2_page_scroll_pane_ParamLimits

0x7e31,	// (0x00082759) vitu2_page_scroll_pane

0xdbed,	// (0x00088515) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbed,	// (0x00088515) list_single_hwr_training_symbol_option_pane

0xdc00,	// (0x00088528) list_single_hwr_training_symbol_option_pane_g1

0xdc08,	// (0x00088530) list_single_hwr_training_symbol_option_pane_t1

0xdc16,	// (0x0008853e) bg_button_pane_cp023

0xdc1f,	// (0x00088547) bg_button_pane_cp024

0x8395,	// (0x00082cbd) vitu2_page_scroll_pane_g1

0x839d,	// (0x00082cc5) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0008a407) vitu2_page_scroll_pane_g

0x83a5,	// (0x00082ccd) vitu2_page_scroll_pane_t1

0xaa34,	// (0x0008535c) popup_char_count_window_g1

0xdc52,	// (0x0008857a) popup_char_count_window_g2

0xca6e,	// (0x00087396) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0008a40c) popup_char_count_window_g

0xdc5b,	// (0x00088583) popup_char_count_window_t1

0xa15c,	// (0x00084a84) main_vded2_pane

0xd279,	// (0x00087ba1) aid_size_cell_imed_line

0xd283,	// (0x00087bab) grid_imed_line_width_pane

0x7498,	// (0x00081dc0) vid4_indicators_pane_g4

0xdc69,	// (0x00088591) cell_imed_line_width_pane_ParamLimits

0xdc69,	// (0x00088591) cell_imed_line_width_pane

0xdc92,	// (0x000885ba) cell_imed_line_width_pane_g1

0xdb89,	// (0x000884b1) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0008a413) cell_imed_line_width_pane_g

0x83b4,	// (0x00082cdc) main_vded2_pane_g1_ParamLimits

0x83b4,	// (0x00082cdc) main_vded2_pane_g1

0x83c1,	// (0x00082ce9) main_vded2_pane_g2_ParamLimits

0x83c1,	// (0x00082ce9) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0008a418) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0008a418) main_vded2_pane_g

0x83cf,	// (0x00082cf7) vded2_slider_pane_ParamLimits

0x83cf,	// (0x00082cf7) vded2_slider_pane

0x83dc,	// (0x00082d04) aid_size_touch_vded2_end

0x83e6,	// (0x00082d0e) aid_size_touch_vded2_playhead

0xdc9b,	// (0x000885c3) aid_size_touch_vded2_start

0xdca3,	// (0x000885cb) vded2_slider_bg_pane

0xdcac,	// (0x000885d4) vded2_slider_pane_g1

0xdcb5,	// (0x000885dd) vded2_slider_pane_g2

0x83ee,	// (0x00082d16) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0008a41d) vded2_slider_pane_g

0xdcbd,	// (0x000885e5) vded2_slider_bg_pane_g1

0xdcc6,	// (0x000885ee) vded2_slider_bg_pane_g2

0xdccf,	// (0x000885f7) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0008a424) vded2_slider_bg_pane_g

0x4b5e,	// (0x0007f486) aid_postcard_touch_down_pane_ParamLimits

0x4b5e,	// (0x0007f486) aid_postcard_touch_down_pane

0x4b6e,	// (0x0007f496) aid_postcard_touch_up_pane_ParamLimits

0x4b6e,	// (0x0007f496) aid_postcard_touch_up_pane

0xa15c,	// (0x00084a84) main_blid2_pane

0x5296,	// (0x0007fbbe) popup_blid2_search_window

0xa15c,	// (0x00084a84) blid2_gps_pane

0xa15c,	// (0x00084a84) blid2_navig_pane

0xa15c,	// (0x00084a84) blid2_search_pane

0xa15c,	// (0x00084a84) blid2_tripm_pane

0x83f7,	// (0x00082d1f) blid2_search_pane_g1_ParamLimits

0x83f7,	// (0x00082d1f) blid2_search_pane_g1

0x8407,	// (0x00082d2f) blid2_search_pane_t1_ParamLimits

0x8407,	// (0x00082d2f) blid2_search_pane_t1

0x8419,	// (0x00082d41) aid_size_cell_blid2_gps_ParamLimits

0x8419,	// (0x00082d41) aid_size_cell_blid2_gps

0x8429,	// (0x00082d51) blid2_gps_pane_g1_ParamLimits

0x8429,	// (0x00082d51) blid2_gps_pane_g1

0x8435,	// (0x00082d5d) grid_blid2_satellite_pane_ParamLimits

0x8435,	// (0x00082d5d) grid_blid2_satellite_pane

0x8445,	// (0x00082d6d) blid2_navig_pane_g1_ParamLimits

0x8445,	// (0x00082d6d) blid2_navig_pane_g1

0x8451,	// (0x00082d79) blid2_navig_pane_t1_ParamLimits

0x8451,	// (0x00082d79) blid2_navig_pane_t1

0x8463,	// (0x00082d8b) blid2_navig_pane_t2_ParamLimits

0x8463,	// (0x00082d8b) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0008a42b) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0008a42b) blid2_navig_pane_t

0x8475,	// (0x00082d9d) blid2_navig_ring_pane_ParamLimits

0x8475,	// (0x00082d9d) blid2_navig_ring_pane

0x8485,	// (0x00082dad) blid2_speed_pane_ParamLimits

0x8485,	// (0x00082dad) blid2_speed_pane

0x8491,	// (0x00082db9) blid2_tripm_pane_g1_ParamLimits

0x8491,	// (0x00082db9) blid2_tripm_pane_g1

0x84a1,	// (0x00082dc9) blid2_tripm_pane_g2_ParamLimits

0x84a1,	// (0x00082dc9) blid2_tripm_pane_g2

0x84ad,	// (0x00082dd5) blid2_tripm_pane_g3_ParamLimits

0x84ad,	// (0x00082dd5) blid2_tripm_pane_g3

0x84b9,	// (0x00082de1) blid2_tripm_pane_g4_ParamLimits

0x84b9,	// (0x00082de1) blid2_tripm_pane_g4

0x84c5,	// (0x00082ded) blid2_tripm_pane_g5_ParamLimits

0x84c5,	// (0x00082ded) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0008a430) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0008a430) blid2_tripm_pane_g

0x84e1,	// (0x00082e09) blid2_tripm_pane_t1_ParamLimits

0x84e1,	// (0x00082e09) blid2_tripm_pane_t1

0x84f5,	// (0x00082e1d) blid2_tripm_pane_t2_ParamLimits

0x84f5,	// (0x00082e1d) blid2_tripm_pane_t2

0x8507,	// (0x00082e2f) blid2_tripm_pane_t3_ParamLimits

0x8507,	// (0x00082e2f) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0008a43d) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0008a43d) blid2_tripm_pane_t

0x8539,	// (0x00082e61) cell_blid2_satellite_pane_ParamLimits

0x8539,	// (0x00082e61) cell_blid2_satellite_pane

0x8553,	// (0x00082e7b) cell_blid2_satellite_pane_g1

0xdcd8,	// (0x00088600) cell_blid2_satellite_pane_t1

0xcd88,	// (0x000876b0) blid2_speed_pane_g1

0xdce6,	// (0x0008860e) blid2_speed_pane_t1

0xdcf4,	// (0x0008861c) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0008a446) blid2_speed_pane_t

0xcd88,	// (0x000876b0) blid2_navig_ring_pane_g1

0x855c,	// (0x00082e84) blid2_navig_ring_pane_g2

0x8564,	// (0x00082e8c) blid2_navig_ring_pane_g3

0x856c,	// (0x00082e94) blid2_navig_ring_pane_g4

0x8574,	// (0x00082e9c) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0008a44b) blid2_navig_ring_pane_g

0xa15c,	// (0x00084a84) bg_popup_window_pane_cp011

0xdd02,	// (0x0008862a) popup_blid2_search_window_g1

0xdd0a,	// (0x00088632) popup_blid2_search_window_t1

0xdd18,	// (0x00088640) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0008a456) popup_blid2_search_window_t

0xac2d,	// (0x00085555) main_browser_pane_g1

0xa8f9,	// (0x00085221) main_browser_pane_ParamLimits

0xa593,	// (0x00084ebb) bg_button_pane_cp011_ParamLimits

0x7703,	// (0x0008202b) cell_vitu2_function_pane_g1_ParamLimits

0xc96b,	// (0x00087293) bg_popup_sub_pane_cp22_ParamLimits

0x1229,	// (0x0007bb51) input_focus_pane_cp08_ParamLimits

0x7fd5,	// (0x000828fd) popup_vitu2_query_button_pane_ParamLimits

0x7fd5,	// (0x000828fd) popup_vitu2_query_button_pane

0x1240,	// (0x0007bb68) popup_vitu2_query_input_button_pane

0xd995,	// (0x000882bd) popup_vitu2_query_window_g1_ParamLimits

0x124a,	// (0x0007bb72) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0008a357) popup_vitu2_query_window_g_ParamLimits

0xa15c,	// (0x00084a84) bg_button_pane_cp026

0x857c,	// (0x00082ea4) popup_vitu2_query_input_button_pane_g1

0xa15c,	// (0x00084a84) bg_button_pane_cp025

0xdd26,	// (0x0008864e) popup_vitu2_query_button_pane_t1

0x5cf6,	// (0x0008061e) main_mp3_pane_t6

0x5d06,	// (0x0008062e) popup_slider_window_cp01

0x737d,	// (0x00081ca5) cam4_battery_pane

0x7457,	// (0x00081d7f) cam4_battery_pane_cp02

0x82e0,	// (0x00082c08) cam4_battery_pane_cp01

0x82e0,	// (0x00082c08) cam4_battery_pane_cp03

0xcd88,	// (0x000876b0) cam4_battery_pane_g1

0xdb91,	// (0x000884b9) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0008a45b) cam4_battery_pane_g

0xcc54,	// (0x0008757c) popup_blid_sat_info2_window_t11

0xb367,	// (0x00085c8f) aid_size_touch_mv_arrow_left_ParamLimits

0xb392,	// (0x00085cba) aid_size_touch_mv_arrow_right_ParamLimits

0xb3f0,	// (0x00085d18) navi_pane_g1_ParamLimits

0xb3fc,	// (0x00085d24) navi_pane_g2_ParamLimits

0xb42a,	// (0x00085d52) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00089d09) navi_pane_g_ParamLimits

0x45e6,	// (0x0007ef0e) navi_pane_mv_t1_ParamLimits

0x6843,	// (0x0008116b) grid_imed_effect_pane_ParamLimits

0x3075,	// (0x0007d99d) aid_placing_vt_slider_lsc

0xab7c,	// (0x000854a4) aid_placing_vt_slider_prt

0xa593,	// (0x00084ebb) bg_tb_trans_pane_cp01_ParamLimits

0xceed,	// (0x00087815) popup_image_details_window_g1_ParamLimits

0xcf00,	// (0x00087828) popup_image_details_window_g2_ParamLimits

0xcf15,	// (0x0008783d) popup_image_details_window_g3_ParamLimits

0xcf15,	// (0x0008783d) popup_image_details_window_g3

0xf727,	// (0x0008a04f) popup_image_details_window_g_ParamLimits

0xcf29,	// (0x00087851) popup_image_details_window_t1_ParamLimits

0xcf3b,	// (0x00087863) popup_image_details_window_t2_ParamLimits

0xcf54,	// (0x0008787c) popup_image_details_window_t3_ParamLimits

0xcf68,	// (0x00087890) popup_image_details_window_t4_ParamLimits

0xcf83,	// (0x000878ab) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0008a056) popup_image_details_window_t_ParamLimits

0x8200,	// (0x00082b28) cl_header_name_pane_ParamLimits

0x8200,	// (0x00082b28) cl_header_name_pane

0x8584,	// (0x00082eac) cl_header_name_pane_t1_ParamLimits

0x8584,	// (0x00082eac) cl_header_name_pane_t1

0x859b,	// (0x00082ec3) cl_header_name_pane_t2_ParamLimits

0x859b,	// (0x00082ec3) cl_header_name_pane_t2

0x85c5,	// (0x00082eed) cl_header_name_pane_t3_ParamLimits

0x85c5,	// (0x00082eed) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0008a460) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0008a460) cl_header_name_pane_t

0xb4b9,	// (0x00085de1) navi_pane_mv_g2_ParamLimits

0xd6e6,	// (0x0008800e) field_vitu2_entry_pane_g1_ParamLimits

0xd6f2,	// (0x0008801a) field_vitu2_entry_pane_g2_ParamLimits

0xd6fe,	// (0x00088026) field_vitu2_entry_pane_g3_ParamLimits

0xd6fe,	// (0x00088026) field_vitu2_entry_pane_g3

0xf92e,	// (0x0008a256) field_vitu2_entry_pane_g_ParamLimits

0x7697,	// (0x00081fbf) cell_vitu2_itu_pane_g1_ParamLimits

0x76a9,	// (0x00081fd1) cell_vitu2_itu_pane_g2_ParamLimits

0x76a9,	// (0x00081fd1) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0008a262) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0008a262) cell_vitu2_itu_pane_g

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp05_ParamLimits

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp05

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp03

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp04

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp10_ParamLimits

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp10

0x13ff,	// (0x0007bd27) bg_vkb2_func_pane_cp08

0x81aa,	// (0x00082ad2) bg_vkb2_func_pane_cp06

0x81b8,	// (0x00082ae0) bg_vkb2_func_pane_cp07

0xdc28,	// (0x00088550) bg_vkb2_func_pane_cp11_ParamLimits

0xdc28,	// (0x00088550) bg_vkb2_func_pane_cp11

0xdc3d,	// (0x00088565) bg_vkb2_func_pane_cp12_ParamLimits

0xdc3d,	// (0x00088565) bg_vkb2_func_pane_cp12

0xa15c,	// (0x00084a84) bg_vkb2_func_pane_cp09

0xd71e,	// (0x00088046) bg_vkb2_func_pane_g1

0xad3e,	// (0x00085666) bg_vkb2_func_pane_g2

0xd726,	// (0x0008804e) bg_vkb2_func_pane_g3

0xd72e,	// (0x00088056) bg_vkb2_func_pane_g4

0xd95a,	// (0x00088282) bg_vkb2_func_pane_g5

0xd746,	// (0x0008806e) bg_vkb2_func_pane_g6

0xd74e,	// (0x00088076) bg_vkb2_func_pane_g7

0xd73e,	// (0x00088066) bg_vkb2_func_pane_g8

0xad1e,	// (0x00085646) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0008a467) bg_vkb2_func_pane_g

0x84d3,	// (0x00082dfb) blid2_tripm_pane_g6_ParamLimits

0x84d3,	// (0x00082dfb) blid2_tripm_pane_g6

0xd638,	// (0x00087f60) mp4_progress_pane_g1

0x852d,	// (0x00082e55) blid2_tripm_values_pane_ParamLimits

0x852d,	// (0x00082e55) blid2_tripm_values_pane

0x85ea,	// (0x00082f12) blid2_tripm_values_pane_t1

0x85f8,	// (0x00082f20) blid2_tripm_values_pane_t2

0x8606,	// (0x00082f2e) blid2_tripm_values_pane_t3

0x8614,	// (0x00082f3c) blid2_tripm_values_pane_t4

0x8622,	// (0x00082f4a) blid2_tripm_values_pane_t5

0x8630,	// (0x00082f58) blid2_tripm_values_pane_t6

0x863e,	// (0x00082f66) blid2_tripm_values_pane_t7

0x864c,	// (0x00082f74) blid2_tripm_values_pane_t8

0x865a,	// (0x00082f82) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0008a47a) blid2_tripm_values_pane_t

0x30b5,	// (0x0007d9dd) call_video_pane_t1_ParamLimits

0x30d6,	// (0x0007d9fe) call_video_pane_t2_ParamLimits

0xf26a,	// (0x00089b92) call_video_pane_t_ParamLimits

0x0fe3,	// (0x0007b90b) msg_header_pane_g1_ParamLimits

0xb6a1,	// (0x00085fc9) msg_header_pane_g2_ParamLimits

0xb6a1,	// (0x00085fc9) msg_header_pane_g2

0x0001,

0xf484,	// (0x00089dac) msg_header_pane_g_ParamLimits

0xf484,	// (0x00089dac) msg_header_pane_g

0xa8f9,	// (0x00085221) main_clock2_pane_ParamLimits

0x65bd,	// (0x00080ee5) grid_clock2_toolbar_pane_ParamLimits

0x65bd,	// (0x00080ee5) grid_clock2_toolbar_pane

0x65bd,	// (0x00080ee5) listscroll_clock2_pane_ParamLimits

0x65bd,	// (0x00080ee5) listscroll_clock2_pane

0x666d,	// (0x00080f95) main_clock2_pane_t3_ParamLimits

0x666d,	// (0x00080f95) main_clock2_pane_t3

0x667f,	// (0x00080fa7) main_clock2_pane_t4_ParamLimits

0x667f,	// (0x00080fa7) main_clock2_pane_t4

0xdd34,	// (0x0008865c) cell_clock2_toolbar_pane

0xdd3c,	// (0x00088664) cell_clock2_toolbar_pane_cp01

0xdd3c,	// (0x00088664) cell_clock2_toolbar_pane_cp02

0xdd44,	// (0x0008866c) cell_clock2_toolbar_pane_cp03

0xdd4c,	// (0x00088674) list_clock2_pane

0xb2ec,	// (0x00085c14) scroll_pane_cp10

0xdd54,	// (0x0008867c) list_single_clock2_pane_ParamLimits

0xdd54,	// (0x0008867c) list_single_clock2_pane

0xaae5,	// (0x0008540d) list_highlight_pane_cp08

0xdd61,	// (0x00088689) list_single_clock2_pane_t1

0xdd6f,	// (0x00088697) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0008a48d) list_single_clock2_pane_t

0xa15c,	// (0x00084a84) bg_button_pane_cp10

0xdd8b,	// (0x000886b3) cell_clock2_toolbar_pane_g1

0x4ac0,	// (0x0007f3e8) aid_main_viewer_pane_g1_ParamLimits

0x4ac0,	// (0x0007f3e8) aid_main_viewer_pane_g1

0x4acc,	// (0x0007f3f4) aid_main_viewer_pane_g2_ParamLimits

0x4acc,	// (0x0007f3f4) aid_main_viewer_pane_g2

0x4ad8,	// (0x0007f400) aid_main_viewer_pane_g3_ParamLimits

0x4ad8,	// (0x0007f400) aid_main_viewer_pane_g3

0x4ae9,	// (0x0007f411) aid_main_viewer_pane_g4_ParamLimits

0x4ae9,	// (0x0007f411) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00089dbd) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00089dbd) aid_main_viewer_pane_g

0x526e,	// (0x0007fb96) main_calc_pane_ParamLimits

0x527b,	// (0x0007fba3) main_dialer2_pane_ParamLimits

0xa15c,	// (0x00084a84) main_cam6_pane

0xa15c,	// (0x00084a84) main_vid6_pane

0x65c9,	// (0x00080ef1) listscroll_gen_pane_cp06_ParamLimits

0x65c9,	// (0x00080ef1) listscroll_gen_pane_cp06

0x6691,	// (0x00080fb9) main_clock2_pane_t5_ParamLimits

0x6691,	// (0x00080fb9) main_clock2_pane_t5

0x66de,	// (0x00081006) aid_call2_pane_cp10_ParamLimits

0x66f0,	// (0x00081018) aid_call_pane_cp10_ParamLimits

0xb35b,	// (0x00085c83) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb35b,	// (0x00085c83) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6702,	// (0x0008102a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6702,	// (0x0008102a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb35b,	// (0x00085c83) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0008a10b) popup_clock_analogue_window_cp10_g_ParamLimits

0x6718,	// (0x00081040) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6f33,	// (0x0008185b) cell_dialer2_keypad_pane_g2_ParamLimits

0x6f33,	// (0x0008185b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0008a1f5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0008a1f5) cell_dialer2_keypad_pane_g

0x6f4f,	// (0x00081877) cell_dialer2_keypad_pane_t1

0x79ce,	// (0x000822f6) main_cset_text2_pane_ParamLimits

0x79ce,	// (0x000822f6) main_cset_text2_pane

0xdb75,	// (0x0008849d) area_vitu2_query_pane_g1_ParamLimits

0x132a,	// (0x0007bc52) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0008a3aa) area_vitu2_query_pane_g_ParamLimits

0x13db,	// (0x0007bd03) area_vitu2_query_pane_t7_ParamLimits

0x13db,	// (0x0007bd03) area_vitu2_query_pane_t7

0x81aa,	// (0x00082ad2) bg_button_pane_cp018_ParamLimits

0x81b8,	// (0x00082ae0) bg_button_pane_cp021_ParamLimits

0x13ff,	// (0x0007bd27) bg_button_pane_cp022_ParamLimits

0x13ff,	// (0x0007bd27) bg_vkb2_func_pane_cp08_ParamLimits

0x81aa,	// (0x00082ad2) bg_vkb2_func_pane_cp06_ParamLimits

0x81b8,	// (0x00082ae0) bg_vkb2_func_pane_cp07_ParamLimits

0x1410,	// (0x0007bd38) input_focus_pane_cp09_ParamLimits

0x8668,	// (0x00082f90) cam6_autofocus_pane_ParamLimits

0x8668,	// (0x00082f90) cam6_autofocus_pane

0x868a,	// (0x00082fb2) cam6_image_uncrop_pane_ParamLimits

0x868a,	// (0x00082fb2) cam6_image_uncrop_pane

0x86b7,	// (0x00082fdf) cam6_indi_pane_ParamLimits

0x86b7,	// (0x00082fdf) cam6_indi_pane

0x86d1,	// (0x00082ff9) cam6_mode_pane_ParamLimits

0x86d1,	// (0x00082ff9) cam6_mode_pane

0x86e5,	// (0x0008300d) cam6_timer_pane_ParamLimits

0x86e5,	// (0x0008300d) cam6_timer_pane

0x86f6,	// (0x0008301e) cam6_zoom_pane_ParamLimits

0x86f6,	// (0x0008301e) cam6_zoom_pane

0x870e,	// (0x00083036) cam6_mode_pane_g1_ParamLimits

0x870e,	// (0x00083036) cam6_mode_pane_g1

0x871a,	// (0x00083042) cam6_mode_pane_g2_ParamLimits

0x871a,	// (0x00083042) cam6_mode_pane_g2

0x8726,	// (0x0008304e) cam6_mode_pane_g3_ParamLimits

0x8726,	// (0x0008304e) cam6_mode_pane_g3

0x8732,	// (0x0008305a) cam6_mode_pane_g4_ParamLimits

0x8732,	// (0x0008305a) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0008a492) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0008a492) cam6_mode_pane_g

0xdd7d,	// (0x000886a5) bg_tb_trans_pane_cp08_ParamLimits

0xdd7d,	// (0x000886a5) bg_tb_trans_pane_cp08

0xdd93,	// (0x000886bb) cam6_battery_pane_ParamLimits

0xdd93,	// (0x000886bb) cam6_battery_pane

0xdda9,	// (0x000886d1) cam6_indi_pane_g1_ParamLimits

0xdda9,	// (0x000886d1) cam6_indi_pane_g1

0xddbb,	// (0x000886e3) cam6_indi_pane_g2_ParamLimits

0xddbb,	// (0x000886e3) cam6_indi_pane_g2

0xddcd,	// (0x000886f5) cam6_indi_pane_g3_ParamLimits

0xddcd,	// (0x000886f5) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0008a49b) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0008a49b) cam6_indi_pane_g

0xdddf,	// (0x00088707) cam6_indi_pane_t1_ParamLimits

0xdddf,	// (0x00088707) cam6_indi_pane_t1

0x74cb,	// (0x00081df3) cam6_autofocus_pane_g1

0x74d3,	// (0x00081dfb) cam6_autofocus_pane_g2

0x74db,	// (0x00081e03) cam6_autofocus_pane_g3

0x74e3,	// (0x00081e0b) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0008a4a2) cam6_autofocus_pane_g

0xde05,	// (0x0008872d) cam6_timer_pane_g1

0xde0d,	// (0x00088735) cam6_timer_pane_t1

0xde1b,	// (0x00088743) cam6_zoom_cont_pane

0xde23,	// (0x0008874b) cam6_zoom_pane_g1

0xde2b,	// (0x00088753) cam6_zoom_pane_g2

0x873e,	// (0x00083066) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0008a4ab) cam6_zoom_pane_g

0xcd88,	// (0x000876b0) cam6_battery_pane_g1

0xcd88,	// (0x000876b0) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0008a013) cam6_battery_pane_g

0xde33,	// (0x0008875b) cam6_zoom_cont_pane_g1

0xde3c,	// (0x00088764) cam6_zoom_cont_pane_g2

0xde45,	// (0x0008876d) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0008a4b2) cam6_zoom_cont_pane_g

0x875b,	// (0x00083083) cam6_mode_pane_cp_ParamLimits

0x875b,	// (0x00083083) cam6_mode_pane_cp

0x86f6,	// (0x0008301e) cam6_zoom_pane_cp_ParamLimits

0x86f6,	// (0x0008301e) cam6_zoom_pane_cp

0x876f,	// (0x00083097) vid6_image_uncrop_cif_pane_ParamLimits

0x876f,	// (0x00083097) vid6_image_uncrop_cif_pane

0x879b,	// (0x000830c3) vid6_image_uncrop_nhd_pane_ParamLimits

0x879b,	// (0x000830c3) vid6_image_uncrop_nhd_pane

0x868a,	// (0x00082fb2) vid6_image_uncrop_vga_pane_ParamLimits

0x868a,	// (0x00082fb2) vid6_image_uncrop_vga_pane

0x87b8,	// (0x000830e0) vid6_image_uncrop_wvga_pane_ParamLimits

0x87b8,	// (0x000830e0) vid6_image_uncrop_wvga_pane

0x87d5,	// (0x000830fd) vid6_indi_pane_ParamLimits

0x87d5,	// (0x000830fd) vid6_indi_pane

0xdd7d,	// (0x000886a5) bg_tb_trans_pane_cp09_ParamLimits

0xdd7d,	// (0x000886a5) bg_tb_trans_pane_cp09

0xde5d,	// (0x00088785) cam6_battery_pane_cp_ParamLimits

0xde5d,	// (0x00088785) cam6_battery_pane_cp

0xde69,	// (0x00088791) vid6_indi_pane_g1_ParamLimits

0xde69,	// (0x00088791) vid6_indi_pane_g1

0xde7b,	// (0x000887a3) vid6_indi_pane_g2_ParamLimits

0xde7b,	// (0x000887a3) vid6_indi_pane_g2

0xde8d,	// (0x000887b5) vid6_indi_pane_g3_ParamLimits

0xde8d,	// (0x000887b5) vid6_indi_pane_g3

0xdea2,	// (0x000887ca) vid6_indi_pane_g4_ParamLimits

0xdea2,	// (0x000887ca) vid6_indi_pane_g4

0xdeb7,	// (0x000887df) vid6_indi_pane_g5_ParamLimits

0xdeb7,	// (0x000887df) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0008a4b9) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0008a4b9) vid6_indi_pane_g

0xded1,	// (0x000887f9) vid6_indi_pane_t1_ParamLimits

0xded1,	// (0x000887f9) vid6_indi_pane_t1

0xdee7,	// (0x0008880f) vid6_indi_pane_t2_ParamLimits

0xdee7,	// (0x0008880f) vid6_indi_pane_t2

0xdf0f,	// (0x00088837) vid6_indi_pane_t3_ParamLimits

0xdf0f,	// (0x00088837) vid6_indi_pane_t3

0xdf37,	// (0x0008885f) vid6_indi_pane_t4_ParamLimits

0xdf37,	// (0x0008885f) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0008a4c4) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0008a4c4) vid6_indi_pane_t

0xdf5b,	// (0x00088883) wait_bar_pane_cp08

0x87f8,	// (0x00083120) main_cset_text2_pane_t1_ParamLimits

0x87f8,	// (0x00083120) main_cset_text2_pane_t1

0x8746,	// (0x0008306e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8746,	// (0x0008306e) listscroll_gen_pane_cp06_t1

0xa15c,	// (0x00084a84) main_cam6_set_pane

0xcfcd,	// (0x000878f5) bg_tb_trans_pane_cp06_ParamLimits

0x7385,	// (0x00081cad) cam4_indicators_pane_g1_ParamLimits

0x7396,	// (0x00081cbe) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0008a232) cam4_indicators_pane_g_ParamLimits

0x73ae,	// (0x00081cd6) cam4_indicators_pane_t1_ParamLimits

0xa593,	// (0x00084ebb) bg_tb_trans_pane_cp07_ParamLimits

0x745f,	// (0x00081d87) vid4_indicators_pane_g1_ParamLimits

0x7473,	// (0x00081d9b) vid4_indicators_pane_g2_ParamLimits

0x7487,	// (0x00081daf) vid4_indicators_pane_g3_ParamLimits

0x7498,	// (0x00081dc0) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0008a244) vid4_indicators_pane_g_ParamLimits

0x74b4,	// (0x00081ddc) vid4_indicators_pane_t1_ParamLimits

0x82e8,	// (0x00082c10) vid4_progress_pane_g1_ParamLimits

0x82f8,	// (0x00082c20) vid4_progress_pane_g2_ParamLimits

0x8308,	// (0x00082c30) vid4_progress_pane_g3_ParamLimits

0x831a,	// (0x00082c42) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0008a3f5) vid4_progress_pane_g_ParamLimits

0x8332,	// (0x00082c5a) vid4_progress_pane_t1_ParamLimits

0x8348,	// (0x00082c70) vid4_progress_pane_t2_ParamLimits

0x835d,	// (0x00082c85) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0008a400) vid4_progress_pane_t_ParamLimits

0x8373,	// (0x00082c9b) wait_bar_pane_cp07_ParamLimits

0x882f,	// (0x00083157) main_cam6_set_pane_g2_ParamLimits

0x882f,	// (0x00083157) main_cam6_set_pane_g2

0x883b,	// (0x00083163) main_cset6_listscroll_pane_ParamLimits

0x883b,	// (0x00083163) main_cset6_listscroll_pane

0x8866,	// (0x0008318e) main_cset6_slider_pane_ParamLimits

0x8866,	// (0x0008318e) main_cset6_slider_pane

0x8872,	// (0x0008319a) main_cset6_text2_pane_ParamLimits

0x8872,	// (0x0008319a) main_cset6_text2_pane

0xdf6a,	// (0x00088892) main_cset6_text_pane

0xdf72,	// (0x0008889a) main_cset_list_pane_copy1_ParamLimits

0xdf72,	// (0x0008889a) main_cset_list_pane_copy1

0xdf82,	// (0x000888aa) scroll_pane_cp028_copy1

0x8885,	// (0x000831ad) cset_list_set_pane_copy1

0x889b,	// (0x000831c3) aid_position_infowindow_above_copy1

0x88a3,	// (0x000831cb) aid_position_infowindow_below_copy1

0x88ab,	// (0x000831d3) cset_list_set_pane_g1_copy1

0x1458,	// (0x0007bd80) cset_list_set_pane_g3_copy1_ParamLimits

0x1458,	// (0x0007bd80) cset_list_set_pane_g3_copy1

0x1467,	// (0x0007bd8f) cset_list_set_pane_t1_copy1_ParamLimits

0x1467,	// (0x0007bd8f) cset_list_set_pane_t1_copy1

0xa593,	// (0x00084ebb) list_highlight_pane_cp021_copy1_ParamLimits

0xa593,	// (0x00084ebb) list_highlight_pane_cp021_copy1

0xdf8b,	// (0x000888b3) cset6_slider_pane_ParamLimits

0xdf8b,	// (0x000888b3) cset6_slider_pane

0xdfb7,	// (0x000888df) main_cset6_slider_pane_g1_ParamLimits

0xdfb7,	// (0x000888df) main_cset6_slider_pane_g1

0x88b3,	// (0x000831db) main_cset6_slider_pane_g2_ParamLimits

0x88b3,	// (0x000831db) main_cset6_slider_pane_g2

0xdfdf,	// (0x00088907) main_cset6_slider_pane_g3_ParamLimits

0xdfdf,	// (0x00088907) main_cset6_slider_pane_g3

0x88db,	// (0x00083203) main_cset6_slider_pane_g4_ParamLimits

0x88db,	// (0x00083203) main_cset6_slider_pane_g4

0x88e7,	// (0x0008320f) main_cset6_slider_pane_g5_ParamLimits

0x88e7,	// (0x0008320f) main_cset6_slider_pane_g5

0xd84d,	// (0x00088175) main_cset6_slider_pane_g7_ParamLimits

0xd84d,	// (0x00088175) main_cset6_slider_pane_g7

0xd859,	// (0x00088181) main_cset6_slider_pane_g8_ParamLimits

0xd859,	// (0x00088181) main_cset6_slider_pane_g8

0x88f5,	// (0x0008321d) main_cset6_slider_pane_g9_ParamLimits

0x88f5,	// (0x0008321d) main_cset6_slider_pane_g9

0x8901,	// (0x00083229) main_cset6_slider_pane_g10_ParamLimits

0x8901,	// (0x00083229) main_cset6_slider_pane_g10

0x890d,	// (0x00083235) main_cset6_slider_pane_g11_ParamLimits

0x890d,	// (0x00083235) main_cset6_slider_pane_g11

0x8919,	// (0x00083241) main_cset6_slider_pane_g12_ParamLimits

0x8919,	// (0x00083241) main_cset6_slider_pane_g12

0xd8d8,	// (0x00088200) main_cset6_slider_pane_g13_ParamLimits

0xd8d8,	// (0x00088200) main_cset6_slider_pane_g13

0xd8e4,	// (0x0008820c) main_cset6_slider_pane_g14_ParamLimits

0xd8e4,	// (0x0008820c) main_cset6_slider_pane_g14

0x8925,	// (0x0008324d) main_cset6_slider_pane_g15_ParamLimits

0x8925,	// (0x0008324d) main_cset6_slider_pane_g15

0x893d,	// (0x00083265) main_cset6_slider_pane_g16_ParamLimits

0x893d,	// (0x00083265) main_cset6_slider_pane_g16

0x894b,	// (0x00083273) main_cset6_slider_pane_g17_ParamLimits

0x894b,	// (0x00083273) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0008a4cd) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0008a4cd) main_cset6_slider_pane_g

0xdff7,	// (0x0008891f) main_cset6_slider_pane_t1_ParamLimits

0xdff7,	// (0x0008891f) main_cset6_slider_pane_t1

0x8965,	// (0x0008328d) main_cset6_slider_pane_t2_ParamLimits

0x8965,	// (0x0008328d) main_cset6_slider_pane_t2

0x8990,	// (0x000832b8) main_cset6_slider_pane_t3_ParamLimits

0x8990,	// (0x000832b8) main_cset6_slider_pane_t3

0x89bb,	// (0x000832e3) main_cset6_slider_pane_t4_ParamLimits

0x89bb,	// (0x000832e3) main_cset6_slider_pane_t4

0x89e6,	// (0x0008330e) main_cset6_slider_pane_t5_ParamLimits

0x89e6,	// (0x0008330e) main_cset6_slider_pane_t5

0xe038,	// (0x00088960) main_cset6_slider_pane_t7_ParamLimits

0xe038,	// (0x00088960) main_cset6_slider_pane_t7

0x8a13,	// (0x0008333b) main_cset6_slider_pane_t8_ParamLimits

0x8a13,	// (0x0008333b) main_cset6_slider_pane_t8

0x8a37,	// (0x0008335f) main_cset6_slider_pane_t9_ParamLimits

0x8a37,	// (0x0008335f) main_cset6_slider_pane_t9

0x8a5b,	// (0x00083383) main_cset6_slider_pane_t10_ParamLimits

0x8a5b,	// (0x00083383) main_cset6_slider_pane_t10

0x8a7f,	// (0x000833a7) main_cset6_slider_pane_t11_ParamLimits

0x8a7f,	// (0x000833a7) main_cset6_slider_pane_t11

0xe080,	// (0x000889a8) main_cset6_slider_pane_t14_ParamLimits

0xe080,	// (0x000889a8) main_cset6_slider_pane_t14

0xe0b9,	// (0x000889e1) main_cset6_slider_pane_t15_ParamLimits

0xe0b9,	// (0x000889e1) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0008a4f2) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0008a4f2) main_cset6_slider_pane_t

0xd54f,	// (0x00087e77) cset_slider_pane_g1_copy1

0xe06e,	// (0x00088996) cset_slider_pane_g2_copy1

0xe077,	// (0x0008899f) cset_slider_pane_g3_copy1

0xa15c,	// (0x00084a84) bg_popup_sub_pane_cp011_copy1

0xe0f2,	// (0x00088a1a) main_cset_text_pane_g1_copy1

0xd9a9,	// (0x000882d1) main_cset_text_pane_t1_copy1

0xd9b7,	// (0x000882df) main_cset_text_pane_t2_copy1

0xd9c5,	// (0x000882ed) main_cset_text_pane_t3_copy1

0xd9d3,	// (0x000882fb) main_cset_text_pane_t4_copy1

0xd9e1,	// (0x00088309) main_cset_text_pane_t5_copy1

0xe0fa,	// (0x00088a22) main_cset_text_pane_t6_copy1

0xe108,	// (0x00088a30) main_cset_text_pane_t7_copy1

0x8aa5,	// (0x000833cd) main_cset_text2_pane_t1_copy1

0xa593,	// (0x00084ebb) main_ncimui_pane

0x52cc,	// (0x0007fbf4) popup_query_ncimui_window_ParamLimits

0x52cc,	// (0x0007fbf4) popup_query_ncimui_window

0x5e60,	// (0x00080788) field_cale_ev2_pane_g4_ParamLimits

0x5e60,	// (0x00080788) field_cale_ev2_pane_g4

0x6c13,	// (0x0008153b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6c13,	// (0x0008153b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0008a1cc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0008a1cc) cell_video_dialer_keypad_pane_g

0x6c2b,	// (0x00081553) cell_video_dialer_keypad_pane_t1

0xa15c,	// (0x00084a84) bg_popup_window_pane_cp012

0xb1d7,	// (0x00085aff) heading_pane_cp06

0xe134,	// (0x00088a5c) ncim_query_content_pane

0xa15c,	// (0x00084a84) bg_popup_heading_pane_cp01

0xe13c,	// (0x00088a64) ncim_heading_pane_t1

0xe14a,	// (0x00088a72) ncim_indicator_popup_pane

0xe15c,	// (0x00088a84) ncim_query_button_pane

0xe170,	// (0x00088a98) ncim_query_content_pane_t1

0xe182,	// (0x00088aaa) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0008a536) ncim_query_content_pane_t

0xe1bc,	// (0x00088ae4) ncim_query_list_pane

0xe1ce,	// (0x00088af6) ncim_query_popup_pane

0xe14a,	// (0x00088a72) ncim_indicator_popup_pane_ParamLimits

0x8bf9,	// (0x00083521) ncim_query_content_pane_g1_ParamLimits

0x8bf9,	// (0x00083521) ncim_query_content_pane_g1

0xe170,	// (0x00088a98) ncim_query_content_pane_t1_ParamLimits

0xe182,	// (0x00088aaa) ncim_query_content_pane_t2_ParamLimits

0x8c05,	// (0x0008352d) ncim_query_content_pane_t3_ParamLimits

0x8c05,	// (0x0008352d) ncim_query_content_pane_t3

0x8c22,	// (0x0008354a) ncim_query_content_pane_t4_ParamLimits

0x8c22,	// (0x0008354a) ncim_query_content_pane_t4

0x8c3f,	// (0x00083567) ncim_query_content_pane_t5_ParamLimits

0x8c3f,	// (0x00083567) ncim_query_content_pane_t5

0xe194,	// (0x00088abc) ncim_query_content_pane_t6_ParamLimits

0xe194,	// (0x00088abc) ncim_query_content_pane_t6

0xfc0e,	// (0x0008a536) ncim_query_content_pane_t_ParamLimits

0xe1bc,	// (0x00088ae4) ncim_query_list_pane_ParamLimits

0xe1ce,	// (0x00088af6) ncim_query_popup_pane_ParamLimits

0xe1e2,	// (0x00088b0a) wait_bar_pane_cp04

0xa15c,	// (0x00084a84) input_focus_pane_cp011

0xe1ea,	// (0x00088b12) ncim_query_popup_pane_t1

0xe1f8,	// (0x00088b20) ncim_list_query_list_pane_ParamLimits

0xe1f8,	// (0x00088b20) ncim_list_query_list_pane

0xa15c,	// (0x00084a84) bg_button_pane_cp027

0xe205,	// (0x00088b2d) ncim_query_button_pane_g1

0xa15c,	// (0x00084a84) list_highlight_pane_cp012

0xe20f,	// (0x00088b37) ncim_list_query_list_pane_g1

0xe217,	// (0x00088b3f) ncim_list_query_list_pane_t1

0x73a2,	// (0x00081cca) cam4_indicators_pane_g3_ParamLimits

0x73a2,	// (0x00081cca) cam4_indicators_pane_g3

0x74a4,	// (0x00081dcc) vid4_indicators_pane_g5_ParamLimits

0x74a4,	// (0x00081dcc) vid4_indicators_pane_g5

0x8326,	// (0x00082c4e) vid4_progress_pane_g5_ParamLimits

0x8326,	// (0x00082c4e) vid4_progress_pane_g5

0x8ae5,	// (0x0008340d) main_ncimui_pane_g1

0x8b4d,	// (0x00083475) ncimui_group_query_pane_ParamLimits

0x8b4d,	// (0x00083475) ncimui_group_query_pane

0x8b95,	// (0x000834bd) ncimui_list_pane_ParamLimits

0x8b95,	// (0x000834bd) ncimui_list_pane

0x8bbc,	// (0x000834e4) ncimui_text_pane_ParamLimits

0x8bbc,	// (0x000834e4) ncimui_text_pane

0x8c5c,	// (0x00083584) ncimui_text_pane_t1_ParamLimits

0x8c5c,	// (0x00083584) ncimui_text_pane_t1

0xe225,	// (0x00088b4d) ncimui_list_single_graphic_pane_ParamLimits

0xe225,	// (0x00088b4d) ncimui_list_single_graphic_pane

0x8c7b,	// (0x000835a3) ncimui_query_pane_ParamLimits

0x8c7b,	// (0x000835a3) ncimui_query_pane

0xa15c,	// (0x00084a84) list_highlight_pane_cp013

0xe235,	// (0x00088b5d) ncim_list_query_list_pane_t1_copy1

0xe243,	// (0x00088b6b) ncim_list_single_graphic_pane_g1

0x8c8e,	// (0x000835b6) ncim_query_button_pane_cp01

0x8c9a,	// (0x000835c2) ncim_query_entry_pane_ParamLimits

0x8c9a,	// (0x000835c2) ncim_query_entry_pane

0x8cad,	// (0x000835d5) ncimui_query_pane_g1

0x8cb9,	// (0x000835e1) ncimui_query_pane_t1_ParamLimits

0x8cb9,	// (0x000835e1) ncimui_query_pane_t1

0xa593,	// (0x00084ebb) input_focus_pane_cp012

0xe24b,	// (0x00088b73) ncim_query_entry_pane_t1

0xa8f9,	// (0x00085221) main_im_pane_ParamLimits

0xa593,	// (0x00084ebb) main_mobtv_pane_ParamLimits

0xa593,	// (0x00084ebb) main_mobtv_pane

0x8959,	// (0x00083281) main_cset6_slider_pane_g18_ParamLimits

0x8959,	// (0x00083281) main_cset6_slider_pane_g18

0xdfeb,	// (0x00088913) main_cset6_slider_pane_g19_ParamLimits

0xdfeb,	// (0x00088913) main_cset6_slider_pane_g19

0xd6fe,	// (0x00088026) bg_main_mobtv_pane_ParamLimits

0xd6fe,	// (0x00088026) bg_main_mobtv_pane

0x8cd2,	// (0x000835fa) main_mobtv_info_pane

0x8cdd,	// (0x00083605) main_mobtv_loading_pane_ParamLimits

0x8cdd,	// (0x00083605) main_mobtv_loading_pane

0xe25d,	// (0x00088b85) main_mobtv_pg_channel_list_pane

0xe267,	// (0x00088b8f) main_mobtv_pg_hdr_pane

0x8cea,	// (0x00083612) main_mobtv_programe_curr_pane_ParamLimits

0x8cea,	// (0x00083612) main_mobtv_programe_curr_pane

0x8cf7,	// (0x0008361f) main_mobtv_programe_next_pane_ParamLimits

0x8cf7,	// (0x0008361f) main_mobtv_programe_next_pane

0xe270,	// (0x00088b98) popup_mobtv_noti_window

0xcd88,	// (0x000876b0) main_tv_pg_hdr_pane_g1

0xe278,	// (0x00088ba0) main_tv_pg_hdr_pane_g2

0xe280,	// (0x00088ba8) main_tv_pg_hdr_pane_g3

0xe288,	// (0x00088bb0) main_tv_pg_hdr_pane_g4

0xe290,	// (0x00088bb8) main_tv_pg_hdr_pane_g5

0xe29a,	// (0x00088bc2) main_tv_pg_hdr_pane_g6

0xe2a4,	// (0x00088bcc) main_tv_pg_hdr_pane_g7

0xe2ae,	// (0x00088bd6) main_tv_pg_hdr_pane_g8

0xe2b8,	// (0x00088be0) main_tv_pg_hdr_pane_g9

0xe2c2,	// (0x00088bea) main_tv_pg_hdr_pane_g10

0xe2cc,	// (0x00088bf4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0008a543) main_tv_pg_hdr_pane_g

0xe2d6,	// (0x00088bfe) main_tv_pg_hdr_pane_t1

0xe2e4,	// (0x00088c0c) main_tv_pg_hdr_pane_t2

0xe2f2,	// (0x00088c1a) main_tv_pg_hdr_pane_t3

0xe302,	// (0x00088c2a) main_tv_pg_hdr_pane_t4

0xe312,	// (0x00088c3a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0008a55a) main_tv_pg_hdr_pane_t

0xe322,	// (0x00088c4a) single_mobtv_pg_channel_pane_ParamLimits

0xe322,	// (0x00088c4a) single_mobtv_pg_channel_pane

0xe334,	// (0x00088c5c) single_mobtv_pg_channel_table_pane

0xae41,	// (0x00085769) single_mobtv_pg_channel_thumb_pane

0xe33d,	// (0x00088c65) single_tv_pg_channel_pane_g1

0xe346,	// (0x00088c6e) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0008a565) single_tv_pg_channel_pane_g

0xcfcd,	// (0x000878f5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfcd,	// (0x000878f5) bg_single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x00088c77) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe34f,	// (0x00088c77) single_mobtv_pg_channel_thumb_pane_g1

0xe35d,	// (0x00088c85) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe35d,	// (0x00088c85) single_mobtv_pg_channel_thumb_pane_g2

0xe369,	// (0x00088c91) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe369,	// (0x00088c91) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0008a56a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0008a56a) single_mobtv_pg_channel_thumb_pane_g

0xe375,	// (0x00088c9d) single_mobtv_pg_channel_thumb_pane_t1

0xe383,	// (0x00088cab) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0008a571) single_mobtv_pg_channel_thumb_pane_t

0xcd88,	// (0x000876b0) bg_single_mobtv_pg_channel_table_pane_g1

0xcd88,	// (0x000876b0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0008a013) bg_single_mobtv_pg_channel_table_pane_g

0xe391,	// (0x00088cb9) single_mobtv_pg_channel_table_pane_t1

0xe39f,	// (0x00088cc7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0008a576) single_mobtv_pg_channel_table_pane_t

0x8d0c,	// (0x00083634) main_mobtv_info_pane_g1_ParamLimits

0x8d0c,	// (0x00083634) main_mobtv_info_pane_g1

0x8d28,	// (0x00083650) main_mobtv_info_pane_t1_ParamLimits

0x8d28,	// (0x00083650) main_mobtv_info_pane_t1

0x8da0,	// (0x000836c8) main_mobtv_info_pane_t2_ParamLimits

0x8da0,	// (0x000836c8) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0008a580) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0008a580) main_mobtv_info_pane_t

0x8e2f,	// (0x00083757) wait_bar_pane_cp05

0x8e41,	// (0x00083769) main_mobtv_loading_pane_g1_ParamLimits

0x8e41,	// (0x00083769) main_mobtv_loading_pane_g1

0x8e4f,	// (0x00083777) main_mobtv_loading_pane_g2_ParamLimits

0x8e4f,	// (0x00083777) main_mobtv_loading_pane_g2

0x8e5b,	// (0x00083783) main_mobtv_loading_pane_g3_ParamLimits

0x8e5b,	// (0x00083783) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0008a587) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0008a587) main_mobtv_loading_pane_g

0xe3ad,	// (0x00088cd5) main_mobtv_loading_pane_t1_ParamLimits

0xe3ad,	// (0x00088cd5) main_mobtv_loading_pane_t1

0xe3c5,	// (0x00088ced) main_mobtv_loading_pane_t2_ParamLimits

0xe3c5,	// (0x00088ced) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0008a58e) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0008a58e) main_mobtv_loading_pane_t

0x8e69,	// (0x00083791) wait_bar_pane_cp06_ParamLimits

0x8e69,	// (0x00083791) wait_bar_pane_cp06

0xe3e9,	// (0x00088d11) main_mobtv_programe_curr_pane_t1

0xe3f7,	// (0x00088d1f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0008a593) main_mobtv_programe_curr_pane_t

0xe405,	// (0x00088d2d) main_mobtv_programe_next_pane_t1

0xe413,	// (0x00088d3b) main_mobtv_programe_next_pane_t2

0xe42f,	// (0x00088d57) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0008a598) main_mobtv_programe_next_pane_t

0xa15c,	// (0x00084a84) bg_popup_mobtv_noti_window_pane

0xe43d,	// (0x00088d65) popup_mobtv_noti_window_g1

0xe445,	// (0x00088d6d) popup_mobtv_noti_window_t1

0xe453,	// (0x00088d7b) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0008a59f) popup_mobtv_noti_window_t

0xcd88,	// (0x000876b0) bg_popup_mobtv_noti_window_pane_g1

0xa15c,	// (0x00084a84) sc_clock_pane

0xa15c,	// (0x00084a84) main_fs_bigclock_pane

0x851b,	// (0x00082e43) blid2_tripm_pane_t4_ParamLimits

0x851b,	// (0x00082e43) blid2_tripm_pane_t4

0x8e75,	// (0x0008379d) sc_clock_pane_g1_ParamLimits

0x8e75,	// (0x0008379d) sc_clock_pane_g1

0x8e83,	// (0x000837ab) sc_clock_pane_t1_ParamLimits

0x8e83,	// (0x000837ab) sc_clock_pane_t1

0x8e96,	// (0x000837be) sc_clock_pane_t2_ParamLimits

0x8e96,	// (0x000837be) sc_clock_pane_t2

0x8ea8,	// (0x000837d0) sc_clock_pane_t3_ParamLimits

0x8ea8,	// (0x000837d0) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0008a5a4) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0008a5a4) sc_clock_pane_t

0x97a4,	// (0x000840cc) main_fs_bigclock_indicator_pane_ParamLimits

0x97a4,	// (0x000840cc) main_fs_bigclock_indicator_pane

0x8f2b,	// (0x00083853) main_fs_bigclock_pane_g1_ParamLimits

0x8f2b,	// (0x00083853) main_fs_bigclock_pane_g1

0x97b0,	// (0x000840d8) main_fs_bigclock_pane_t1_ParamLimits

0x97b0,	// (0x000840d8) main_fs_bigclock_pane_t1

0x97c2,	// (0x000840ea) main_fs_bigclock_pane_t2_ParamLimits

0x97c2,	// (0x000840ea) main_fs_bigclock_pane_t2

0x97d6,	// (0x000840fe) main_fs_bigclock_pane_t3_ParamLimits

0x97d6,	// (0x000840fe) main_fs_bigclock_pane_t3

0x0002,

0xfe5e,	// (0x0008a786) main_fs_bigclock_pane_t_ParamLimits

0xfe5e,	// (0x0008a786) main_fs_bigclock_pane_t

0xeccc,	// (0x000895f4) main_fs_bigclock_indicator_pane_g1

0xe164,	// (0x00088a8c) ncim_query_content_pane_g2_ParamLimits

0xe164,	// (0x00088a8c) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0008a531) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0008a531) ncim_query_content_pane_g

0x8ebc,	// (0x000837e4) sc_clock_pane_t4_ParamLimits

0x8ebc,	// (0x000837e4) sc_clock_pane_t4

0xa593,	// (0x00084ebb) main_radioblah_pane

0x7248,	// (0x00081b70) cell_call4_button_pane_t1_copy1_ParamLimits

0x7248,	// (0x00081b70) cell_call4_button_pane_t1_copy1

0x8aff,	// (0x00083427) main_ncimui_pane_t1_ParamLimits

0x8aff,	// (0x00083427) main_ncimui_pane_t1

0x8b19,	// (0x00083441) main_ncimui_pane_t2_ParamLimits

0x8b19,	// (0x00083441) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0008a52a) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0008a52a) main_ncimui_pane_t

0xe599,	// (0x00088ec1) main_radioblah_anim_pane_ParamLimits

0xe599,	// (0x00088ec1) main_radioblah_anim_pane

0xe5aa,	// (0x00088ed2) main_radioblah_info_pane_ParamLimits

0xe5aa,	// (0x00088ed2) main_radioblah_info_pane

0xe5be,	// (0x00088ee6) main_radioblah_pane_t1_ParamLimits

0xe5be,	// (0x00088ee6) main_radioblah_pane_t1

0xe5da,	// (0x00088f02) main_radioblah_pane_t2_ParamLimits

0xe5da,	// (0x00088f02) main_radioblah_pane_t2

0x0003,

0x0aff,	// (0x0007b427) main_radioblah_pane_t_ParamLimits

0x0aff,	// (0x0007b427) main_radioblah_pane_t

0x8f81,	// (0x000838a9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f81,	// (0x000838a9) main_radioblah_rocker_ctrl_pane

0xe622,	// (0x00088f4a) main_radioblah_info_pane_t1_ParamLimits

0xe622,	// (0x00088f4a) main_radioblah_info_pane_t1

0x8fc6,	// (0x000838ee) main_radioblah_info_pane_t2_ParamLimits

0x8fc6,	// (0x000838ee) main_radioblah_info_pane_t2

0x0003,

0xfc92,	// (0x0008a5ba) main_radioblah_info_pane_t_ParamLimits

0xfc92,	// (0x0008a5ba) main_radioblah_info_pane_t

0xcd88,	// (0x000876b0) main_radioblah_rocker_ctrl_pane_g1

0x9076,	// (0x0008399e) main_radioblah_rocker_ctrl_pane_g2

0x907e,	// (0x000839a6) main_radioblah_rocker_ctrl_pane_g3

0x9086,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g4

0x908e,	// (0x000839b6) main_radioblah_rocker_ctrl_pane_g5

0x9096,	// (0x000839be) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9b,	// (0x0008a5c3) main_radioblah_rocker_ctrl_pane_g

0x8aa5,	// (0x000833cd) main_cset_text2_pane_t1_copy1_ParamLimits

0x72d3,	// (0x00081bfb) cam4_image_uncrop_qvga_pane

0x7414,	// (0x00081d3c) vid4_image_uncrop_qcif_pane

0x86a9,	// (0x00082fd1) cam6_image_uncrop_qvga_pane_ParamLimits

0x86a9,	// (0x00082fd1) cam6_image_uncrop_qvga_pane

0xde4d,	// (0x00088775) vid6_image_uncrop_qcif_pane_ParamLimits

0xde4d,	// (0x00088775) vid6_image_uncrop_qcif_pane

0xa15c,	// (0x00084a84) bg_popup_preview_window_pane_cp03

0xe116,	// (0x00088a3e) list_cset_text2_pane

0xe11e,	// (0x00088a46) main_cset6_text2_pane_g1

0xe126,	// (0x00088a4e) main_cset6_text2_pane_t1

0x909e,	// (0x000839c6) list_cset_text2_pane_t1_ParamLimits

0x909e,	// (0x000839c6) list_cset_text2_pane_t1

0xa593,	// (0x00084ebb) main_radioblah_pane_ParamLimits

0x8e1b,	// (0x00083743) main_mobtv_info_pane_t3_ParamLimits

0x8e1b,	// (0x00083743) main_mobtv_info_pane_t3

0x8f6f,	// (0x00083897) main_radioblah_pane_g1

0x8f9a,	// (0x000838c2) main_radioblah_info_pane_g1

0x901b,	// (0x00083943) main_radioblah_info_pane_t3_ParamLimits

0x901b,	// (0x00083943) main_radioblah_info_pane_t3

0x4103,	// (0x0007ea2b) highlight_cell_cale_month_pane_ParamLimits

0x4103,	// (0x0007ea2b) highlight_cell_cale_month_pane

0xa15c,	// (0x00084a84) main_phob_fisheye_pane

0xd0a9,	// (0x000879d1) scroll_pane_cp0031_ParamLimits

0xd0a9,	// (0x000879d1) scroll_pane_cp0031

0xdf5b,	// (0x00088883) wait_bar_pane_cp08_ParamLimits

0x8885,	// (0x000831ad) cset_list_set_pane_copy1_ParamLimits

0xe65c,	// (0x00088f84) highlight_cell_cale_month_pane_g1

0x90bf,	// (0x000839e7) highlight_cell_cale_month_pane_t1

0xdbe4,	// (0x0008850c) list_gen_pane_cp01

0xd838,	// (0x00088160) scroll_pane_01

0x1552,	// (0x0007be7a) list_single_double_fisheye_pane

0x155b,	// (0x0007be83) list_double_fisheye_pane_g1_ParamLimits

0x155b,	// (0x0007be83) list_double_fisheye_pane_g1

0x90cd,	// (0x000839f5) list_double_fisheye_pane_g2_ParamLimits

0x90cd,	// (0x000839f5) list_double_fisheye_pane_g2

0x1567,	// (0x0007be8f) list_double_fisheye_pane_g3_ParamLimits

0x1567,	// (0x0007be8f) list_double_fisheye_pane_g3

0x0004,

0xfca8,	// (0x0008a5d0) list_double_fisheye_pane_g_ParamLimits

0xfca8,	// (0x0008a5d0) list_double_fisheye_pane_g

0x157f,	// (0x0007bea7) list_double_fisheye_pane_t1_ParamLimits

0x157f,	// (0x0007bea7) list_double_fisheye_pane_t1

0x159a,	// (0x0007bec2) list_double_fisheye_pane_t2_ParamLimits

0x159a,	// (0x0007bec2) list_double_fisheye_pane_t2

0x0001,

0xfcb3,	// (0x0008a5db) list_double_fisheye_pane_t_ParamLimits

0xfcb3,	// (0x0008a5db) list_double_fisheye_pane_t

0xa15c,	// (0x00084a84) main_call5_pane

0x8ee2,	// (0x0008380a) sc_swipe_pane_ParamLimits

0x8ee2,	// (0x0008380a) sc_swipe_pane

0x90fe,	// (0x00083a26) call5_image_pane_ParamLimits

0x90fe,	// (0x00083a26) call5_image_pane

0x910e,	// (0x00083a36) call5_swipe_1_pane_ParamLimits

0x910e,	// (0x00083a36) call5_swipe_1_pane

0x911a,	// (0x00083a42) call5_swipe_2_pane_ParamLimits

0x911a,	// (0x00083a42) call5_swipe_2_pane

0x9134,	// (0x00083a5c) popup_call5_audio_first_window_ParamLimits

0x9134,	// (0x00083a5c) popup_call5_audio_first_window

0xcfcd,	// (0x000878f5) call5_swipe_1_pane_g1_ParamLimits

0xcfcd,	// (0x000878f5) call5_swipe_1_pane_g1

0xe664,	// (0x00088f8c) call5_swipe_1_pane_g2_ParamLimits

0xe664,	// (0x00088f8c) call5_swipe_1_pane_g2

0x0001,

0xfcb8,	// (0x0008a5e0) call5_swipe_1_pane_g_ParamLimits

0xfcb8,	// (0x0008a5e0) call5_swipe_1_pane_g

0xe670,	// (0x00088f98) call5_swipe_1_pane_t1_ParamLimits

0xe670,	// (0x00088f98) call5_swipe_1_pane_t1

0xcfcd,	// (0x000878f5) call5_swipe_2_pane_g1_ParamLimits

0xcfcd,	// (0x000878f5) call5_swipe_2_pane_g1

0xe685,	// (0x00088fad) call5_swipe_2_pane_g2_ParamLimits

0xe685,	// (0x00088fad) call5_swipe_2_pane_g2

0x0001,

0xfcbd,	// (0x0008a5e5) call5_swipe_2_pane_g_ParamLimits

0xfcbd,	// (0x0008a5e5) call5_swipe_2_pane_g

0xe691,	// (0x00088fb9) call5_swipe_2_pane_t1_ParamLimits

0xe691,	// (0x00088fb9) call5_swipe_2_pane_t1

0xe6a6,	// (0x00088fce) sc_swipe_pane_g1_ParamLimits

0xe6a6,	// (0x00088fce) sc_swipe_pane_g1

0xe6ce,	// (0x00088ff6) sc_swipe_pane_g2_ParamLimits

0xe6ce,	// (0x00088ff6) sc_swipe_pane_g2

0x0001,

0xfcc2,	// (0x0008a5ea) sc_swipe_pane_g_ParamLimits

0xfcc2,	// (0x0008a5ea) sc_swipe_pane_g

0xe6da,	// (0x00089002) sc_swipe_pane_t1_ParamLimits

0xe6da,	// (0x00089002) sc_swipe_pane_t1

0xa15c,	// (0x00084a84) main_cmail_launcher_pane

0x9142,	// (0x00083a6a) aid_size_cell_cmail_l_ParamLimits

0x9142,	// (0x00083a6a) aid_size_cell_cmail_l

0x9150,	// (0x00083a78) grid_cmail_l_pane_ParamLimits

0x9150,	// (0x00083a78) grid_cmail_l_pane

0x9160,	// (0x00083a88) cell_cmail_l_pane_ParamLimits

0x9160,	// (0x00083a88) cell_cmail_l_pane

0xe6ef,	// (0x00089017) cell_cmail_l_pane_g1_ParamLimits

0xe6ef,	// (0x00089017) cell_cmail_l_pane_g1

0xe6fb,	// (0x00089023) cell_cmail_l_pane_t1_ParamLimits

0xe6fb,	// (0x00089023) cell_cmail_l_pane_t1

0xe711,	// (0x00089039) cell_cmail_l_pane_t2_ParamLimits

0xe711,	// (0x00089039) cell_cmail_l_pane_t2

0x0001,

0x0b3d,	// (0x0007b465) cell_cmail_l_pane_t_ParamLimits

0x0b3d,	// (0x0007b465) cell_cmail_l_pane_t

0xa593,	// (0x00084ebb) grid_highlight_pane_cp018_ParamLimits

0xa593,	// (0x00084ebb) grid_highlight_pane_cp018

0x2163,	// (0x0007ca8b) main2_pane_ParamLimits

0x2163,	// (0x0007ca8b) main2_pane

0xa992,	// (0x000852ba) popup_sp_fs_action_menu_bg_pane_g1

0xa99a,	// (0x000852c2) popup_sp_fs_action_menu_bg_pane_g2

0xa9a2,	// (0x000852ca) popup_sp_fs_action_menu_bg_pane_g3

0xa9aa,	// (0x000852d2) popup_sp_fs_action_menu_bg_pane_g4

0xa9b2,	// (0x000852da) popup_sp_fs_action_menu_bg_pane_g5

0xa9ba,	// (0x000852e2) popup_sp_fs_action_menu_bg_pane_g6

0xa9c2,	// (0x000852ea) popup_sp_fs_action_menu_bg_pane_g7

0xa9ca,	// (0x000852f2) popup_sp_fs_action_menu_bg_pane_g8

0xa9d2,	// (0x000852fa) popup_sp_fs_action_menu_bg_pane_g9

0xa9da,	// (0x00085302) popup_sp_fs_action_menu_bg_pane_g10

0xa9da,	// (0x00085302) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00089aae) popup_sp_fs_action_menu_bg_pane_g

0x0d65,	// (0x0007b68d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t3_g3_g1

0x0d71,	// (0x0007b699) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x2_t3_g3_g2

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00089b5c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00089b5c) list_medium_line_x2_t3_g3_g

0x0d89,	// (0x0007b6b1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d89,	// (0x0007b6b1) list_medium_line_x2_t3_g3_t1

0x0d9e,	// (0x0007b6c6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d9e,	// (0x0007b6c6) list_medium_line_x2_t3_g3_t2

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x00089b63) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x00089b63) list_medium_line_x2_t3_g3_t

0x0d65,	// (0x0007b68d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t3_g2_g1

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00089b6a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00089b6a) list_medium_line_x2_t3_g2_g

0x0dc5,	// (0x0007b6ed) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0dc5,	// (0x0007b6ed) list_medium_line_x2_t3_g2_t1

0x0ddb,	// (0x0007b703) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ddb,	// (0x0007b703) list_medium_line_x2_t3_g2_t2

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x00089b6f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x00089b6f) list_medium_line_x2_t3_g2_t

0x0d65,	// (0x0007b68d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t4_g4_g1

0x0ded,	// (0x0007b715) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ded,	// (0x0007b715) list_medium_line_x2_t4_g4_g2

0x0d71,	// (0x0007b699) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x2_t4_g4_g3

0x0df9,	// (0x0007b721) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0df9,	// (0x0007b721) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x00089b76) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x00089b76) list_medium_line_x2_t4_g4_g

0x0e05,	// (0x0007b72d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e05,	// (0x0007b72d) list_medium_line_x2_t4_g4_t1

0x0e1f,	// (0x0007b747) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e1f,	// (0x0007b747) list_medium_line_x2_t4_g4_t2

0x0e35,	// (0x0007b75d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e35,	// (0x0007b75d) list_medium_line_x2_t4_g4_t3

0x0e4a,	// (0x0007b772) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e4a,	// (0x0007b772) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x00089b7f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x00089b7f) list_medium_line_x2_t4_g4_t

0x0d65,	// (0x0007b68d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t2_g4_g1

0x0ded,	// (0x0007b715) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ded,	// (0x0007b715) list_medium_line_x2_t2_g4_g2

0x0d71,	// (0x0007b699) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x2_t2_g4_g3

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00089be6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00089be6) list_medium_line_x2_t2_g4_g

0x0e5c,	// (0x0007b784) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e5c,	// (0x0007b784) list_medium_line_x2_t2_g4_t1

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00089bef) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00089bef) list_medium_line_x2_t2_g4_t

0x0d65,	// (0x0007b68d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t2_g3_g1

0x0d71,	// (0x0007b699) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x2_t2_g3_g2

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00089b5c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00089b5c) list_medium_line_x2_t2_g3_g

0x0e71,	// (0x0007b799) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e71,	// (0x0007b799) list_medium_line_x2_t2_g3_t1

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x00089bf4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x00089bf4) list_medium_line_x2_t2_g3_t

0x42e4,	// (0x0007ec0c) main_sp_fs_list_pane_ParamLimits

0x42e4,	// (0x0007ec0c) main_sp_fs_list_pane

0x42f0,	// (0x0007ec18) sp_fs_scroll_pane_ParamLimits

0x42f0,	// (0x0007ec18) sp_fs_scroll_pane

0x0ea0,	// (0x0007b7c8) list_medium_line_x2_t3_t1

0x0eb0,	// (0x0007b7d8) list_medium_line_x2_t3_t2

0x0ebe,	// (0x0007b7e6) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00089c3f) list_medium_line_x2_t3_t

0x0ecc,	// (0x0007b7f4) list_medium_line_x3_t4_t1

0x0edc,	// (0x0007b804) list_medium_line_x3_t4_t2

0x0eea,	// (0x0007b812) list_medium_line_x3_t4_t3

0x0ebe,	// (0x0007b7e6) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x00089c46) list_medium_line_x3_t4_t

0x0ef8,	// (0x0007b820) list_medium_line_x4_t5_t1

0x0f08,	// (0x0007b830) list_medium_line_x4_t5_t2

0x0eea,	// (0x0007b812) list_medium_line_x4_t5_t3

0x0f16,	// (0x0007b83e) list_medium_line_x4_t5_t4

0x0ebe,	// (0x0007b7e6) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00089c4f) list_medium_line_x4_t5_t

0x0d65,	// (0x0007b68d) list_medium_line_t4_g4_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_t4_g4_g1

0x0df9,	// (0x0007b721) list_medium_line_t4_g4_g2_ParamLimits

0x0df9,	// (0x0007b721) list_medium_line_t4_g4_g2

0x0f24,	// (0x0007b84c) list_medium_line_t4_g4_g3_ParamLimits

0x0f24,	// (0x0007b84c) list_medium_line_t4_g4_g3

0x0d7d,	// (0x0007b6a5) list_medium_line_t4_g4_g4_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00089c5a) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00089c5a) list_medium_line_t4_g4_g

0x0f30,	// (0x0007b858) list_medium_line_t4_g4_t1_ParamLimits

0x0f30,	// (0x0007b858) list_medium_line_t4_g4_t1

0x0f45,	// (0x0007b86d) list_medium_line_t4_g4_t2_ParamLimits

0x0f45,	// (0x0007b86d) list_medium_line_t4_g4_t2

0x0f5a,	// (0x0007b882) list_medium_line_t4_g4_t3_ParamLimits

0x0f5a,	// (0x0007b882) list_medium_line_t4_g4_t3

0x0db0,	// (0x0007b6d8) list_medium_line_t4_g4_t4_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x00089c63) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x00089c63) list_medium_line_t4_g4_t

0x4407,	// (0x0007ed2f) chi_dic_find_pane_g1

0x5289,	// (0x0007fbb1) main_tport_pane

0x11cd,	// (0x0007baf5) list_medium_line_plain_t1

0x11db,	// (0x0007bb03) list_medium_line_t2_g2_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_t2_g2_g1

0x7e5d,	// (0x00082785) list_medium_line_t2_g2_g2_ParamLimits

0x7e5d,	// (0x00082785) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0008a33b) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0008a33b) list_medium_line_t2_g2_g

0x11e7,	// (0x0007bb0f) list_medium_line_t2_g2_t1_ParamLimits

0x11e7,	// (0x0007bb0f) list_medium_line_t2_g2_t1

0x1201,	// (0x0007bb29) list_medium_line_t2_g2_t2_ParamLimits

0x1201,	// (0x0007bb29) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0008a340) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0008a340) list_medium_line_t2_g2_t

0x1421,	// (0x0007bd49) aid_sp_fs_list_icon_a_sm

0x8384,	// (0x00082cac) aid_sp_fs_list_icon_d

0xa676,	// (0x00084f9e) aid_sp_fs_text_primary

0xa5af,	// (0x00084ed7) aid_sp_fs_text_secondary

0x838c,	// (0x00082cb4) list_medium_line

0x838c,	// (0x00082cb4) list_medium_line_g2

0x838c,	// (0x00082cb4) list_medium_line_g3

0x838c,	// (0x00082cb4) list_medium_line_plain

0x838c,	// (0x00082cb4) list_medium_line_plain_t2

0x838c,	// (0x00082cb4) list_medium_line_plain_t3

0x838c,	// (0x00082cb4) list_medium_line_right_icon

0x838c,	// (0x00082cb4) list_medium_line_right_iconx2

0x838c,	// (0x00082cb4) list_medium_line_t2

0x838c,	// (0x00082cb4) list_medium_line_t2_g2

0x838c,	// (0x00082cb4) list_medium_line_t2_g3

0x838c,	// (0x00082cb4) list_medium_line_t2_right_icon

0x838c,	// (0x00082cb4) list_medium_line_t2_right_iconx2

0x838c,	// (0x00082cb4) list_medium_line_t3

0x838c,	// (0x00082cb4) list_medium_line_t3_g2

0x838c,	// (0x00082cb4) list_medium_line_t3_g3

0x838c,	// (0x00082cb4) list_medium_line_t3_right_iconx2

0x1429,	// (0x0007bd51) list_medium_line_t4_g4

0x1432,	// (0x0007bd5a) list_medium_line_x2

0x1432,	// (0x0007bd5a) list_medium_line_x2_t2_g2

0x1432,	// (0x0007bd5a) list_medium_line_x2_t2_g3

0x1432,	// (0x0007bd5a) list_medium_line_x2_t2_g4

0x1432,	// (0x0007bd5a) list_medium_line_x2_t3

0x1432,	// (0x0007bd5a) list_medium_line_x2_t3_g2

0x1432,	// (0x0007bd5a) list_medium_line_x2_t3_g3

0x1432,	// (0x0007bd5a) list_medium_line_x2_t3_g4

0x1432,	// (0x0007bd5a) list_medium_line_x2_t4_g2

0x1432,	// (0x0007bd5a) list_medium_line_x2_t4_g4

0x143b,	// (0x0007bd63) list_medium_line_x3

0x143b,	// (0x0007bd63) list_medium_line_x3_t4

0x143b,	// (0x0007bd63) list_medium_line_x3_t4_g4

0x1429,	// (0x0007bd51) list_medium_line_x4_t4

0x1429,	// (0x0007bd51) list_medium_line_x4_t4_g7

0x1429,	// (0x0007bd51) list_medium_line_x4_t5

0x1444,	// (0x0007bd6c) list_single_fs_dyc_pane_ParamLimits

0x1444,	// (0x0007bd6c) list_single_fs_dyc_pane

0x0d65,	// (0x0007b68d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x4_t4_g7_g1

0x147c,	// (0x0007bda4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x147c,	// (0x0007bda4) list_medium_line_x4_t4_g7_g2

0x1488,	// (0x0007bdb0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1488,	// (0x0007bdb0) list_medium_line_x4_t4_g7_g3

0x1497,	// (0x0007bdbf) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1497,	// (0x0007bdbf) list_medium_line_x4_t4_g7_g4

0x14a3,	// (0x0007bdcb) list_medium_line_x4_t4_g7_g5_ParamLimits

0x14a3,	// (0x0007bdcb) list_medium_line_x4_t4_g7_g5

0x14b2,	// (0x0007bdda) list_medium_line_x4_t4_g7_g6_ParamLimits

0x14b2,	// (0x0007bdda) list_medium_line_x4_t4_g7_g6

0x14c1,	// (0x0007bde9) list_medium_line_x4_t4_g7_g7_ParamLimits

0x14c1,	// (0x0007bde9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0008a50b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0008a50b) list_medium_line_x4_t4_g7_g

0x14cd,	// (0x0007bdf5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x14cd,	// (0x0007bdf5) list_medium_line_x4_t4_g7_t1

0x14e2,	// (0x0007be0a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x14e2,	// (0x0007be0a) list_medium_line_x4_t4_g7_t2

0x14f7,	// (0x0007be1f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x14f7,	// (0x0007be1f) list_medium_line_x4_t4_g7_t3

0x150c,	// (0x0007be34) list_medium_line_x4_t4_g7_t4_ParamLimits

0x150c,	// (0x0007be34) list_medium_line_x4_t4_g7_t4

0x151e,	// (0x0007be46) list_medium_line_x4_t4_g7_t5_ParamLimits

0x151e,	// (0x0007be46) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0008a51a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0008a51a) list_medium_line_x4_t4_g7_t

0x1530,	// (0x0007be58) list_single_dyc_row_pane_ParamLimits

0x1530,	// (0x0007be58) list_single_dyc_row_pane

0x90f2,	// (0x00083a1a) call5_gesture_pane_ParamLimits

0x90f2,	// (0x00083a1a) call5_gesture_pane

0x9126,	// (0x00083a4e) call5_windows_pane_ParamLimits

0x9126,	// (0x00083a4e) call5_windows_pane

0x9179,	// (0x00083aa1) call5_swipe_1_pane_cp_ParamLimits

0x9179,	// (0x00083aa1) call5_swipe_1_pane_cp

0x9185,	// (0x00083aad) call5_swipe_2_pane_cp_ParamLimits

0x9185,	// (0x00083aad) call5_swipe_2_pane_cp

0xaae5,	// (0x0008540d) call5_image_pane_cp

0x9191,	// (0x00083ab9) popup_call5_audio_first_window_cp_ParamLimits

0x9191,	// (0x00083ab9) popup_call5_audio_first_window_cp

0xe6a6,	// (0x00088fce) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6a6,	// (0x00088fce) call5_swipe_1_pane_g1_cp

0xe72e,	// (0x00089056) call5_swipe_1_pane_g2_cp

0xe6da,	// (0x00089002) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6da,	// (0x00089002) call5_swipe_1_pane_t1_cp

0xe6a6,	// (0x00088fce) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6a6,	// (0x00088fce) call5_swipe_2_pane_g1_cp

0xe736,	// (0x0008905e) call5_swipe_2_pane_g2_cp

0xe73e,	// (0x00089066) call5_swipe_2_pane_t1_cp_ParamLimits

0xe73e,	// (0x00089066) call5_swipe_2_pane_t1_cp

0xa593,	// (0x00084ebb) main_sp_fs_email_pane

0xe753,	// (0x0008907b) main_sp_fs_listscroll_pane_te

0x919f,	// (0x00083ac7) popup_sp_fs_action_menu_pane_ParamLimits

0x919f,	// (0x00083ac7) popup_sp_fs_action_menu_pane

0xcd88,	// (0x000876b0) bg_sp_fs_ctrlbar_pane_g1

0xe75c,	// (0x00089084) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe765,	// (0x0008908d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe76e,	// (0x00089096) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd88,	// (0x000876b0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc7,	// (0x0008a5ef) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb6d,	// (0x00087495) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb6d,	// (0x00087495) bg_sp_fs_ctrlbar_ddmenu_pane

0xe777,	// (0x0008909f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe777,	// (0x0008909f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe783,	// (0x000890ab) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe783,	// (0x000890ab) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b4b,	// (0x0007b473) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b4b,	// (0x0007b473) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe78f,	// (0x000890b7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe78f,	// (0x000890b7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x91e3,	// (0x00083b0b) list_medium_line_t2_right_icon_g1

0x15bc,	// (0x0007bee4) list_medium_line_t2_right_icon_t1

0x15cc,	// (0x0007bef4) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd0,	// (0x0008a5f8) list_medium_line_t2_right_icon_t

0xc96b,	// (0x00087293) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc96b,	// (0x00087293) bg_sp_fs_ctrlbar_pane

0x922e,	// (0x00083b56) main_sp_fs_ctrlbar_button_pane_cp01

0x9236,	// (0x00083b5e) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e1,	// (0x00089109) main_sp_fs_ctrlbar_pane_g1

0xe7ed,	// (0x00089115) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0b55,	// (0x0007b47d) main_sp_fs_ctrlbar_pane_g

0xe7f9,	// (0x00089121) main_sp_fs_ctrlbar_pane_t1

0x9240,	// (0x00083b68) main_sp_fs_ctrlbar_pane

0x9256,	// (0x00083b7e) main_sp_fs_listscroll_pane_te_cp01

0x15da,	// (0x0007bf02) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x15da,	// (0x0007bf02) popup_sp_fs_action_menu_pane_cp01

0xa593,	// (0x00084ebb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa593,	// (0x00084ebb) bg_sp_fs_highlight_list_pane_cp01

0x1604,	// (0x0007bf2c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1604,	// (0x0007bf2c) sp_fs_action_menu_list_gene_pane_g1

0xe829,	// (0x00089151) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe829,	// (0x00089151) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd5,	// (0x0008a5fd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd5,	// (0x0008a5fd) sp_fs_action_menu_list_gene_pane_g

0x1613,	// (0x0007bf3b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1613,	// (0x0007bf3b) sp_fs_action_menu_list_gene_pane_t1

0x162b,	// (0x0007bf53) sp_fs_action_menu_list_gene_pane_ParamLimits

0x162b,	// (0x0007bf53) sp_fs_action_menu_list_gene_pane

0xe836,	// (0x0008915e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe836,	// (0x0008915e) popup_sp_fs_action_menu_bg_pane

0x164a,	// (0x0007bf72) sp_fs_action_menu_list_pane_ParamLimits

0x164a,	// (0x0007bf72) sp_fs_action_menu_list_pane

0xa67f,	// (0x00084fa7) sp_fs_scroll_pane_cp01_ParamLimits

0xa67f,	// (0x00084fa7) sp_fs_scroll_pane_cp01

0x166a,	// (0x0007bf92) list_medium_line_plain_t2_t1

0x167a,	// (0x0007bfa2) list_medium_line_plain_t2_t2

0x0001,

0xfcda,	// (0x0008a602) list_medium_line_plain_t2_t

0x1688,	// (0x0007bfb0) list_medium_line_plain_t3_t1

0x1698,	// (0x0007bfc0) list_medium_line_plain_t3_t2

0x16a6,	// (0x0007bfce) list_medium_line_plain_t3_t3

0x0002,

0xfcdf,	// (0x0008a607) list_medium_line_plain_t3_t

0x0d65,	// (0x0007b68d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t2_g2_g1

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00089b6a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00089b6a) list_medium_line_x2_t2_g2_g

0x0f30,	// (0x0007b858) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f30,	// (0x0007b858) list_medium_line_x2_t2_g2_t1

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce6,	// (0x0008a60e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce6,	// (0x0008a60e) list_medium_line_x2_t2_g2_t

0x0d65,	// (0x0007b68d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t4_g2_g1

0x16b4,	// (0x0007bfdc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x16b4,	// (0x0007bfdc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfceb,	// (0x0008a613) list_medium_line_x2_t4_g2_g_ParamLimits

0xfceb,	// (0x0008a613) list_medium_line_x2_t4_g2_g

0x16c6,	// (0x0007bfee) list_medium_line_x2_t4_g2_t1_ParamLimits

0x16c6,	// (0x0007bfee) list_medium_line_x2_t4_g2_t1

0x16e0,	// (0x0007c008) list_medium_line_x2_t4_g2_t2_ParamLimits

0x16e0,	// (0x0007c008) list_medium_line_x2_t4_g2_t2

0x16f6,	// (0x0007c01e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x16f6,	// (0x0007c01e) list_medium_line_x2_t4_g2_t3

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf0,	// (0x0008a618) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf0,	// (0x0008a618) list_medium_line_x2_t4_g2_t

0x9267,	// (0x00083b8f) list_medium_line_t3_right_iconx2_g1

0x91e3,	// (0x00083b0b) list_medium_line_t3_right_iconx2_g2

0x170b,	// (0x0007c033) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf9,	// (0x0008a621) list_medium_line_t3_right_iconx2_g

0x1713,	// (0x0007c03b) list_medium_line_t3_right_iconx2_t1

0x1723,	// (0x0007c04b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd00,	// (0x0008a628) list_medium_line_t3_right_iconx2_t

0x0d65,	// (0x0007b68d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x3_t4_g4_g1

0x0d71,	// (0x0007b699) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x3_t4_g4_g2

0x0df9,	// (0x0007b721) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0df9,	// (0x0007b721) list_medium_line_x3_t4_g4_g3

0x1731,	// (0x0007c059) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1731,	// (0x0007c059) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd05,	// (0x0008a62d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd05,	// (0x0008a62d) list_medium_line_x3_t4_g4_g

0x173d,	// (0x0007c065) list_medium_line_x3_t4_g4_t1_ParamLimits

0x173d,	// (0x0007c065) list_medium_line_x3_t4_g4_t1

0x1754,	// (0x0007c07c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1754,	// (0x0007c07c) list_medium_line_x3_t4_g4_t2

0x0f45,	// (0x0007b86d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f45,	// (0x0007b86d) list_medium_line_x3_t4_g4_t3

0x1769,	// (0x0007c091) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1769,	// (0x0007c091) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0e,	// (0x0008a636) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0e,	// (0x0008a636) list_medium_line_x3_t4_g4_t

0x1786,	// (0x0007c0ae) list_single_dyc_row_text_pane_t1_ParamLimits

0x1786,	// (0x0007c0ae) list_single_dyc_row_text_pane_t1

0x17bd,	// (0x0007c0e5) list_single_dyc_row_text_pane_t2_ParamLimits

0x17bd,	// (0x0007c0e5) list_single_dyc_row_text_pane_t2

0x1833,	// (0x0007c15b) list_single_dyc_row_text_pane_t3_ParamLimits

0x1833,	// (0x0007c15b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd17,	// (0x0008a63f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd17,	// (0x0008a63f) list_single_dyc_row_text_pane_t

0x1904,	// (0x0007c22c) list_single_dyc_row_pane_g1_ParamLimits

0x1904,	// (0x0007c22c) list_single_dyc_row_pane_g1

0x1910,	// (0x0007c238) list_single_dyc_row_pane_g2_ParamLimits

0x1910,	// (0x0007c238) list_single_dyc_row_pane_g2

0x191c,	// (0x0007c244) list_single_dyc_row_pane_g3_ParamLimits

0x191c,	// (0x0007c244) list_single_dyc_row_pane_g3

0x1928,	// (0x0007c250) list_single_dyc_row_pane_g4_ParamLimits

0x1928,	// (0x0007c250) list_single_dyc_row_pane_g4

0x0003,

0xfd24,	// (0x0008a64c) list_single_dyc_row_pane_g_ParamLimits

0xfd24,	// (0x0008a64c) list_single_dyc_row_pane_g

0x1934,	// (0x0007c25c) list_single_dyc_row_text_pane_ParamLimits

0x1934,	// (0x0007c25c) list_single_dyc_row_text_pane

0xa15c,	// (0x00084a84) bg_sp_fs_scroll_pane

0xe844,	// (0x0008916c) thumb_sp_fs_scroll_pane

0x11db,	// (0x0007bb03) list_medium_line_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_g1

0x1953,	// (0x0007c27b) list_medium_line_t1_ParamLimits

0x1953,	// (0x0007c27b) list_medium_line_t1

0x0d65,	// (0x0007b68d) list_medium_line_x2_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_g1

0x0d71,	// (0x0007b699) list_medium_line_x2_g2_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x2_g2

0x0001,

0xfd2d,	// (0x0008a655) list_medium_line_x2_g_ParamLimits

0xfd2d,	// (0x0008a655) list_medium_line_x2_g

0x1968,	// (0x0007c290) list_medium_line_x2_t1_ParamLimits

0x1968,	// (0x0007c290) list_medium_line_x2_t1

0x0d65,	// (0x0007b68d) list_medium_line_x3_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x3_g1

0x0d71,	// (0x0007b699) list_medium_line_x3_g2_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x3_g2

0x0001,

0xfd2d,	// (0x0008a655) list_medium_line_x3_g_ParamLimits

0xfd2d,	// (0x0008a655) list_medium_line_x3_g

0x1968,	// (0x0007c290) list_medium_line_x3_t1_ParamLimits

0x1968,	// (0x0007c290) list_medium_line_x3_t1

0xe84d,	// (0x00089175) thumb_sp_fs_scroll_pane_g1

0xe856,	// (0x0008917e) thumb_sp_fs_scroll_pane_g2

0xe85f,	// (0x00089187) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd32,	// (0x0008a65a) thumb_sp_fs_scroll_pane_g

0xe84d,	// (0x00089175) bg_sp_fs_scroll_pane_g1

0xe856,	// (0x0008917e) bg_sp_fs_scroll_pane_g2

0xe85f,	// (0x00089187) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd32,	// (0x0008a65a) bg_sp_fs_scroll_pane_g

0x0d65,	// (0x0007b68d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d65,	// (0x0007b68d) list_medium_line_x2_t3_g4_g1

0x0ded,	// (0x0007b715) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ded,	// (0x0007b715) list_medium_line_x2_t3_g4_g2

0x0d71,	// (0x0007b699) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d71,	// (0x0007b699) list_medium_line_x2_t3_g4_g3

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d7d,	// (0x0007b6a5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00089be6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00089be6) list_medium_line_x2_t3_g4_g

0x197e,	// (0x0007c2a6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x197e,	// (0x0007c2a6) list_medium_line_x2_t3_g4_t1

0x1994,	// (0x0007c2bc) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1994,	// (0x0007c2bc) list_medium_line_x2_t3_g4_t2

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0db0,	// (0x0007b6d8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd39,	// (0x0008a661) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd39,	// (0x0008a661) list_medium_line_x2_t3_g4_t

0x11db,	// (0x0007bb03) list_medium_line_g2_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_g2_g1

0x7e5d,	// (0x00082785) list_medium_line_g2_g2_ParamLimits

0x7e5d,	// (0x00082785) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0008a33b) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0008a33b) list_medium_line_g2_g

0x19ae,	// (0x0007c2d6) list_medium_line_g2_t1_ParamLimits

0x19ae,	// (0x0007c2d6) list_medium_line_g2_t1

0x11db,	// (0x0007bb03) list_medium_line_t3_g2_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_t3_g2_g1

0x7e5d,	// (0x00082785) list_medium_line_t3_g2_g2_ParamLimits

0x7e5d,	// (0x00082785) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0008a33b) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0008a33b) list_medium_line_t3_g2_g

0x19c3,	// (0x0007c2eb) list_medium_line_t3_g2_t1_ParamLimits

0x19c3,	// (0x0007c2eb) list_medium_line_t3_g2_t1

0x19dd,	// (0x0007c305) list_medium_line_t3_g2_t2_ParamLimits

0x19dd,	// (0x0007c305) list_medium_line_t3_g2_t2

0x19f3,	// (0x0007c31b) list_medium_line_t3_g2_t3_ParamLimits

0x19f3,	// (0x0007c31b) list_medium_line_t3_g2_t3

0x0002,

0xfd40,	// (0x0008a668) list_medium_line_t3_g2_t_ParamLimits

0xfd40,	// (0x0008a668) list_medium_line_t3_g2_t

0x91e3,	// (0x00083b0b) list_medium_line_right_icon_g1

0x1a09,	// (0x0007c331) list_medium_line_right_icon_t1

0x11db,	// (0x0007bb03) list_medium_line_t2_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_t2_g1

0x1a17,	// (0x0007c33f) list_medium_line_t2_t1_ParamLimits

0x1a17,	// (0x0007c33f) list_medium_line_t2_t1

0x1a31,	// (0x0007c359) list_medium_line_t2_t2_ParamLimits

0x1a31,	// (0x0007c359) list_medium_line_t2_t2

0x0001,

0xfd47,	// (0x0008a66f) list_medium_line_t2_t_ParamLimits

0xfd47,	// (0x0008a66f) list_medium_line_t2_t

0x11db,	// (0x0007bb03) list_medium_line_t3_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_t3_g1

0x1a46,	// (0x0007c36e) list_medium_line_t3_t1_ParamLimits

0x1a46,	// (0x0007c36e) list_medium_line_t3_t1

0x1a60,	// (0x0007c388) list_medium_line_t3_t2_ParamLimits

0x1a60,	// (0x0007c388) list_medium_line_t3_t2

0x1a76,	// (0x0007c39e) list_medium_line_t3_t3_ParamLimits

0x1a76,	// (0x0007c39e) list_medium_line_t3_t3

0x0002,

0xfd4c,	// (0x0008a674) list_medium_line_t3_t_ParamLimits

0xfd4c,	// (0x0008a674) list_medium_line_t3_t

0x11db,	// (0x0007bb03) list_medium_line_g3_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_g3_g1

0x926f,	// (0x00083b97) list_medium_line_g3_g2_ParamLimits

0x926f,	// (0x00083b97) list_medium_line_g3_g2

0x7e5d,	// (0x00082785) list_medium_line_g3_g3_ParamLimits

0x7e5d,	// (0x00082785) list_medium_line_g3_g3

0x0002,

0xfd53,	// (0x0008a67b) list_medium_line_g3_g_ParamLimits

0xfd53,	// (0x0008a67b) list_medium_line_g3_g

0x1a8b,	// (0x0007c3b3) list_medium_line_g3_t1_ParamLimits

0x1a8b,	// (0x0007c3b3) list_medium_line_g3_t1

0x11db,	// (0x0007bb03) list_medium_line_t2_g3_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_t2_g3_g1

0x926f,	// (0x00083b97) list_medium_line_t2_g3_g2_ParamLimits

0x926f,	// (0x00083b97) list_medium_line_t2_g3_g2

0x7e5d,	// (0x00082785) list_medium_line_t2_g3_g3_ParamLimits

0x7e5d,	// (0x00082785) list_medium_line_t2_g3_g3

0x0002,

0xfd53,	// (0x0008a67b) list_medium_line_t2_g3_g_ParamLimits

0xfd53,	// (0x0008a67b) list_medium_line_t2_g3_g

0x1aa0,	// (0x0007c3c8) list_medium_line_t2_g3_t1_ParamLimits

0x1aa0,	// (0x0007c3c8) list_medium_line_t2_g3_t1

0x1aba,	// (0x0007c3e2) list_medium_line_t2_g3_t2_ParamLimits

0x1aba,	// (0x0007c3e2) list_medium_line_t2_g3_t2

0x0001,

0xfd5a,	// (0x0008a682) list_medium_line_t2_g3_t_ParamLimits

0xfd5a,	// (0x0008a682) list_medium_line_t2_g3_t

0x11db,	// (0x0007bb03) list_medium_line_t3_g3_g1_ParamLimits

0x11db,	// (0x0007bb03) list_medium_line_t3_g3_g1

0x926f,	// (0x00083b97) list_medium_line_t3_g3_g2_ParamLimits

0x926f,	// (0x00083b97) list_medium_line_t3_g3_g2

0x7e5d,	// (0x00082785) list_medium_line_t3_g3_g3_ParamLimits

0x7e5d,	// (0x00082785) list_medium_line_t3_g3_g3

0x0002,

0xfd53,	// (0x0008a67b) list_medium_line_t3_g3_g_ParamLimits

0xfd53,	// (0x0008a67b) list_medium_line_t3_g3_g

0x1ad0,	// (0x0007c3f8) list_medium_line_t3_g3_t1_ParamLimits

0x1ad0,	// (0x0007c3f8) list_medium_line_t3_g3_t1

0x1ae9,	// (0x0007c411) list_medium_line_t3_g3_t2_ParamLimits

0x1ae9,	// (0x0007c411) list_medium_line_t3_g3_t2

0x1aff,	// (0x0007c427) list_medium_line_t3_g3_t3_ParamLimits

0x1aff,	// (0x0007c427) list_medium_line_t3_g3_t3

0x0002,

0xfd5f,	// (0x0008a687) list_medium_line_t3_g3_t_ParamLimits

0xfd5f,	// (0x0008a687) list_medium_line_t3_g3_t

0x9267,	// (0x00083b8f) list_medium_line_right_iconx2_g1

0x91e3,	// (0x00083b0b) list_medium_line_right_iconx2_g2

0x0001,

0xfd66,	// (0x0008a68e) list_medium_line_right_iconx2_g

0x927b,	// (0x00083ba3) list_medium_line_right_iconx2_t1

0x9267,	// (0x00083b8f) list_medium_line_t2_right_iconx2_g1

0x91e3,	// (0x00083b0b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd66,	// (0x0008a68e) list_medium_line_t2_right_iconx2_g

0x1b15,	// (0x0007c43d) list_medium_line_t2_right_iconx2_t1

0x1b25,	// (0x0007c44d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6b,	// (0x0008a693) list_medium_line_t2_right_iconx2_t

0x1b33,	// (0x0007c45b) list_medium_line_x4_t4_t1

0x1b41,	// (0x0007c469) list_medium_line_x4_t4_t2

0x1b51,	// (0x0007c479) list_medium_line_x4_t4_t3

0x1b61,	// (0x0007c489) list_medium_line_x4_t4_t4

0x0003,

0xfd70,	// (0x0008a698) list_medium_line_x4_t4_t

0x92b3,	// (0x00083bdb) tport_appsw_pane_ParamLimits

0x92b3,	// (0x00083bdb) tport_appsw_pane

0x92c1,	// (0x00083be9) tport_contact_pane_ParamLimits

0x92c1,	// (0x00083be9) tport_contact_pane

0x92d1,	// (0x00083bf9) tport_listscroll_pane_ParamLimits

0x92d1,	// (0x00083bf9) tport_listscroll_pane

0x92e1,	// (0x00083c09) cell_tport_appsw_pane_ParamLimits

0x92e1,	// (0x00083c09) cell_tport_appsw_pane

0xd032,	// (0x0008795a) tport_appsw_pane_g1_ParamLimits

0xd032,	// (0x0008795a) tport_appsw_pane_g1

0xe868,	// (0x00089190) tport_contact_pane_g1

0xe871,	// (0x00089199) tport_contact_pane_t1

0xe87f,	// (0x000891a7) tport_contact_pane_t2

0x0001,

0xfd79,	// (0x0008a6a1) tport_contact_pane_t

0xe88d,	// (0x000891b5) list_tport_pane

0xe896,	// (0x000891be) scroll_pane_cp_030

0x9314,	// (0x00083c3c) cell_tport_appsw_pane_g1

0x9324,	// (0x00083c4c) cell_tport_appsw_pane_t1

0x9332,	// (0x00083c5a) grid_highlight_pane_cp019

0x933a,	// (0x00083c62) list_tport_double_graphic_pane_ParamLimits

0x933a,	// (0x00083c62) list_tport_double_graphic_pane

0xa593,	// (0x00084ebb) list_highlight_pane_cp023_ParamLimits

0xa593,	// (0x00084ebb) list_highlight_pane_cp023

0x934b,	// (0x00083c73) list_tport_double_graphic_pane_g1_ParamLimits

0x934b,	// (0x00083c73) list_tport_double_graphic_pane_g1

0x9358,	// (0x00083c80) list_tport_double_graphic_pane_t1_ParamLimits

0x9358,	// (0x00083c80) list_tport_double_graphic_pane_t1

0x936d,	// (0x00083c95) list_tport_double_graphic_pane_t2_ParamLimits

0x936d,	// (0x00083c95) list_tport_double_graphic_pane_t2

0x0001,

0xfd85,	// (0x0008a6ad) list_tport_double_graphic_pane_t_ParamLimits

0xfd85,	// (0x0008a6ad) list_tport_double_graphic_pane_t

0xa15c,	// (0x00084a84) main_cale_note_pane

0x766f,	// (0x00081f97) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x766f,	// (0x00081f97) cell_vitu2_function_top_wide_pane_cp01

0x8e2f,	// (0x00083757) wait_bar_pane_cp05_ParamLimits

0xa593,	// (0x00084ebb) listscroll_cmail_pane

0xe89f,	// (0x000891c7) list_cmail_pane

0x937f,	// (0x00083ca7) list_cmail_body_pane

0x93a7,	// (0x00083ccf) list_single_cmail_header_caption_pane

0x93d3,	// (0x00083cfb) list_single_cmail_header_detail_pane_ParamLimits

0x93d3,	// (0x00083cfb) list_single_cmail_header_detail_pane

0xe8af,	// (0x000891d7) list_single_cmail_header_caption_pane_t1

0x1b71,	// (0x0007c499) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1b71,	// (0x0007c499) list_single_cmail_header_detail_pane_g1

0x940c,	// (0x00083d34) list_single_cmail_header_detail_pane_g2_ParamLimits

0x940c,	// (0x00083d34) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8a,	// (0x0008a6b2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8a,	// (0x0008a6b2) list_single_cmail_header_detail_pane_g

0x1b87,	// (0x0007c4af) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1b87,	// (0x0007c4af) list_single_cmail_header_detail_pane_t1

0x1be7,	// (0x0007c50f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1be7,	// (0x0007c50f) list_single_cmail_header_editor_pane_bg

0xe346,	// (0x00088c6e) list_cmail_body_pane_g1

0xe8d3,	// (0x000891fb) list_cmail_body_pane_t1

0xd71e,	// (0x00088046) list_single_cmail_header_editor_pane_bg_g1

0xad3e,	// (0x00085666) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd72e,	// (0x00088056) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd726,	// (0x0008804e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd95a,	// (0x00088282) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd74e,	// (0x00088076) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd73e,	// (0x00088066) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd746,	// (0x0008806e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad1e,	// (0x00085646) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9418,	// (0x00083d40) calenote_gesture_pane_ParamLimits

0x9418,	// (0x00083d40) calenote_gesture_pane

0x9432,	// (0x00083d5a) calenote_window_pane_ParamLimits

0x9432,	// (0x00083d5a) calenote_window_pane

0xe8e1,	// (0x00089209) popup_note_window_cp01

0x944a,	// (0x00083d72) calenote_swipe_1_pane_ParamLimits

0x944a,	// (0x00083d72) calenote_swipe_1_pane

0x9185,	// (0x00083aad) calenote_swipe_2_pane_ParamLimits

0x9185,	// (0x00083aad) calenote_swipe_2_pane

0xe6a6,	// (0x00088fce) calenote_swipe_1_pane_g1_ParamLimits

0xe6a6,	// (0x00088fce) calenote_swipe_1_pane_g1

0xe6ce,	// (0x00088ff6) calenote_swipe_1_pane_g2_ParamLimits

0xe6ce,	// (0x00088ff6) calenote_swipe_1_pane_g2

0x0001,

0xfcc2,	// (0x0008a5ea) calenote_swipe_1_pane_g_ParamLimits

0xfcc2,	// (0x0008a5ea) calenote_swipe_1_pane_g

0xe8f3,	// (0x0008921b) calenote_swipe_1_pane_t1_ParamLimits

0xe8f3,	// (0x0008921b) calenote_swipe_1_pane_t1

0xe6a6,	// (0x00088fce) calenote_swipe_2_pane_g1_ParamLimits

0xe6a6,	// (0x00088fce) calenote_swipe_2_pane_g1

0xe912,	// (0x0008923a) calenote_swipe_2_pane_g2_ParamLimits

0xe912,	// (0x0008923a) calenote_swipe_2_pane_g2

0x0001,

0xfd96,	// (0x0008a6be) calenote_swipe_2_pane_g_ParamLimits

0xfd96,	// (0x0008a6be) calenote_swipe_2_pane_g

0xe91e,	// (0x00089246) calenote_swipe_2_pane_t1_ParamLimits

0xe91e,	// (0x00089246) calenote_swipe_2_pane_t1

0xa15c,	// (0x00084a84) main_mup_navstr_pane

0x62cd,	// (0x00080bf5) main_mup3_pane_t7_ParamLimits

0x62cd,	// (0x00080bf5) main_mup3_pane_t7

0x6d14,	// (0x0008163c) main_mp4_pane_g6_ParamLimits

0x6d14,	// (0x0008163c) main_mp4_pane_g6

0x70a4,	// (0x000819cc) main_image3_pane_t4_ParamLimits

0x70a4,	// (0x000819cc) main_image3_pane_t4

0x945d,	// (0x00083d85) popup_navstr_preview_pane_ParamLimits

0x945d,	// (0x00083d85) popup_navstr_preview_pane

0x9469,	// (0x00083d91) scroll_navstr_pane_ParamLimits

0x9469,	// (0x00083d91) scroll_navstr_pane

0xa15c,	// (0x00084a84) bg_popup_preview_window_pane_cp04

0xe945,	// (0x0008926d) popup_navstr_preview_pane_t1

0x9475,	// (0x00083d9d) scroll_navstr_pane_g1_ParamLimits

0x9475,	// (0x00083d9d) scroll_navstr_pane_g1

0x9482,	// (0x00083daa) scroll_navstr_pane_t1_ParamLimits

0x9482,	// (0x00083daa) scroll_navstr_pane_t1

0xe8ea,	// (0x00089212) bg_button_pane_cp014

0xe8ea,	// (0x00089212) bg_button_pane_cp030

0x1573,	// (0x0007be9b) list_double_fisheye_pane_g4_ParamLimits

0x1573,	// (0x0007be9b) list_double_fisheye_pane_g4

0x90e1,	// (0x00083a09) list_double_fisheye_pane_g5_ParamLimits

0x90e1,	// (0x00083a09) list_double_fisheye_pane_g5

0xca77,	// (0x0008739f) sp_fs_scroll_pane_cp03

0xe7e1,	// (0x00089109) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7ed,	// (0x00089115) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0b55,	// (0x0007b47d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f9,	// (0x00089121) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8a7,	// (0x000891cf) sp_fs_scroll_pane_cp02

0xa9fd,	// (0x00085325) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9fd,	// (0x00085325) popup_sp_fs_calendar_preview_list_single_pane

0xa15c,	// (0x00084a84) main_cam6_pano_pane

0xa593,	// (0x00084ebb) main_mup3_pane_ParamLimits

0xa15c,	// (0x00084a84) main_phacti_pane

0x8d04,	// (0x0008362c) bg_button_pane_cp11

0x8d1c,	// (0x00083644) main_mobtv_info_pane_g2_ParamLimits

0x8d1c,	// (0x00083644) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0008a57b) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0008a57b) main_mobtv_info_pane_g

0x8ece,	// (0x000837f6) sc_clock_pane_t5_ParamLimits

0x8ece,	// (0x000837f6) sc_clock_pane_t5

0x8f6f,	// (0x00083897) main_radioblah_pane_g1_ParamLimits

0xe5f2,	// (0x00088f1a) main_radioblah_pane_t3_ParamLimits

0xe5f2,	// (0x00088f1a) main_radioblah_pane_t3

0xe60a,	// (0x00088f32) main_radioblah_pane_t4_ParamLimits

0xe60a,	// (0x00088f32) main_radioblah_pane_t4

0x8f8d,	// (0x000838b5) main_radioblah_text_pane_ParamLimits

0x8f8d,	// (0x000838b5) main_radioblah_text_pane

0x8f9a,	// (0x000838c2) main_radioblah_info_pane_g1_ParamLimits

0x902f,	// (0x00083957) main_radioblah_info_pane_t4_ParamLimits

0x902f,	// (0x00083957) main_radioblah_info_pane_t4

0xa593,	// (0x00084ebb) main_sp_fs_calendar_pane

0x9494,	// (0x00083dbc) main_phacti_pane_g1

0x949c,	// (0x00083dc4) phacti_note_pane_ParamLimits

0x949c,	// (0x00083dc4) phacti_note_pane

0xe95c,	// (0x00089284) phacti_term_pane_ParamLimits

0xe95c,	// (0x00089284) phacti_term_pane

0xe971,	// (0x00089299) phacti_note_pane_t1_ParamLimits

0xe971,	// (0x00089299) phacti_note_pane_t1

0x1bfe,	// (0x0007c526) phacti_term_pane_g1

0x1c06,	// (0x0007c52e) phacti_term_pane_t1_ParamLimits

0x1c06,	// (0x0007c52e) phacti_term_pane_t1

0xe988,	// (0x000892b0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x000892b8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda0,	// (0x0008a6c8) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x000892c0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x000892c0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x000892d6) aid_popup_sp_fs_bg_corner_pane

0xcd88,	// (0x000876b0) popup_sp_fs_calendar_preview_bg_pane_g1

0xa15c,	// (0x00084a84) popup_sp_fs_calendar_preview_bg_pane

0x94b2,	// (0x00083dda) popup_sp_fs_calendar_preview_list_pane

0xc96b,	// (0x00087293) bg_main_sp_fs_cale_pane_ParamLimits

0xc96b,	// (0x00087293) bg_main_sp_fs_cale_pane

0x1c39,	// (0x0007c561) listscroll_cale_mrui_pane_ParamLimits

0x1c39,	// (0x0007c561) listscroll_cale_mrui_pane

0x1c4e,	// (0x0007c576) listscroll_sp_fs_schedule_track_pane

0x1c57,	// (0x0007c57f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1c57,	// (0x0007c57f) main_sp_fs_ctrlbar_pane_cp01

0xe9b6,	// (0x000892de) main_sp_fs_ribbon_pane

0x1c6a,	// (0x0007c592) popup_sp_fs_cale_preview_window

0x9507,	// (0x00083e2f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9507,	// (0x00083e2f) list_single_sp_fs_schedule_track_pane

0xe421,	// (0x00088d49) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe421,	// (0x00088d49) bg_sp_fs_highlight_list_pane_cp03

0x952a,	// (0x00083e52) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x952a,	// (0x00083e52) list_single_sp_fs_schedule_track_pane_g1

0x9536,	// (0x00083e5e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9536,	// (0x00083e5e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda5,	// (0x0008a6cd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda5,	// (0x0008a6cd) list_single_sp_fs_schedule_track_pane_g

0x9542,	// (0x00083e6a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9542,	// (0x00083e6a) list_single_sp_fs_schedule_track_pane_t1

0x955a,	// (0x00083e82) sp_fs_schedule_track_pane_ParamLimits

0x955a,	// (0x00083e82) sp_fs_schedule_track_pane

0xe9be,	// (0x000892e6) sp_fs_schedule_track_pane_g1

0xe9c6,	// (0x000892ee) sp_fs_schedule_track_pane_g2

0xe9ce,	// (0x000892f6) sp_fs_schedule_track_pane_g3

0xe9d6,	// (0x000892fe) sp_fs_schedule_track_pane_g4

0xe9de,	// (0x00089306) sp_fs_schedule_track_pane_g5

0x0004,

0xfdaa,	// (0x0008a6d2) sp_fs_schedule_track_pane_g

0xd71e,	// (0x00088046) bg_sp_fs_schedule_viewer_highlight_g1

0xad3e,	// (0x00085666) bg_sp_fs_schedule_viewer_highlight_g2

0xd726,	// (0x0008804e) bg_sp_fs_schedule_viewer_highlight_g3

0xd72e,	// (0x00088056) bg_sp_fs_schedule_viewer_highlight_g4

0xd95a,	// (0x00088282) bg_sp_fs_schedule_viewer_highlight_g5

0xd73e,	// (0x00088066) bg_sp_fs_schedule_viewer_highlight_g6

0xd746,	// (0x0008806e) bg_sp_fs_schedule_viewer_highlight_g7

0xd74e,	// (0x00088076) bg_sp_fs_schedule_viewer_highlight_g8

0xad1e,	// (0x00085646) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb5,	// (0x0008a6dd) bg_sp_fs_schedule_viewer_highlight_g

0xa15c,	// (0x00084a84) bg_main_sp_fs_ribbon_pane

0x956a,	// (0x00083e92) main_sp_fs_ribbon_pane_g1

0xe9e6,	// (0x0008930e) main_sp_fs_ribbon_pane_t1

0x9573,	// (0x00083e9b) main_sp_fs_ribbon_pane_t2

0xe9f5,	// (0x0008931d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc8,	// (0x0008a6f0) main_sp_fs_ribbon_pane_t

0xea04,	// (0x0008932c) main_sp_fs_ribbon_scheduler_pane

0xea0c,	// (0x00089334) bg_main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0008933d) bg_main_sp_fs_ribbon_pane_g2

0xea1e,	// (0x00089346) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcf,	// (0x0008a6f7) bg_main_sp_fs_ribbon_pane_g

0xea26,	// (0x0008934e) main_sp_fs_ribbon_scheduler_pane_g1

0xea2f,	// (0x00089357) main_sp_fs_ribbon_scheduler_pane_g2

0xea38,	// (0x00089360) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd6,	// (0x0008a6fe) main_sp_fs_ribbon_scheduler_pane_g

0xea41,	// (0x00089369) list_cale_mrui_pane

0x9582,	// (0x00083eaa) sp_fs_scroll_pane_cp07_ParamLimits

0x9582,	// (0x00083eaa) sp_fs_scroll_pane_cp07

0x959e,	// (0x00083ec6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x959e,	// (0x00083ec6) bg_sp_fs_schedule_viewer_highlight

0xea4e,	// (0x00089376) list_single_sp_fs_schedule_track_pane_cp01

0xea56,	// (0x0008937e) list_sp_fs_schedule_track_pane

0xea5e,	// (0x00089386) sp_fs_scroll_pane_cp06_ParamLimits

0xea5e,	// (0x00089386) sp_fs_scroll_pane_cp06

0xcd88,	// (0x000876b0) bgmain_sp_fs_calendar_pane_g1

0x1c7c,	// (0x0007c5a4) list_single_cale_mrui_pane_ParamLimits

0x1c7c,	// (0x0007c5a4) list_single_cale_mrui_pane

0x1caa,	// (0x0007c5d2) list_single_cale_mrui_row_pane_ParamLimits

0x1caa,	// (0x0007c5d2) list_single_cale_mrui_row_pane

0x1cb7,	// (0x0007c5df) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1cb7,	// (0x0007c5df) list_single_cale_mrui_row_pane_g1

0x1cef,	// (0x0007c617) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1cef,	// (0x0007c617) list_single_cale_mrui_row_pane_t1

0x1d01,	// (0x0007c629) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1d01,	// (0x0007c629) list_single_cale_mrui_row_pane_t2

0x1d67,	// (0x0007c68f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1d67,	// (0x0007c68f) list_single_cale_mrui_row_pane_t3

0x1d96,	// (0x0007c6be) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1d96,	// (0x0007c6be) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde4,	// (0x0008a70c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde4,	// (0x0008a70c) list_single_cale_mrui_row_pane_t

0x1dc5,	// (0x0007c6ed) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1dc5,	// (0x0007c6ed) list_single_cmail_header_editor_pane_bg_cp01

0x1de5,	// (0x0007c70d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1de5,	// (0x0007c70d) list_single_cmail_header_editor_pane_bg_cp02

0x95ab,	// (0x00083ed3) main_radioblah_text_pane_t1_ParamLimits

0x95ab,	// (0x00083ed3) main_radioblah_text_pane_t1

0xea7d,	// (0x000893a5) cam6_indi_pane_cp01

0xea85,	// (0x000893ad) cam6_mode_pane_cp01

0xea8d,	// (0x000893b5) cam6_pano_pane

0xea96,	// (0x000893be) cam6_zoom_pane_cp01

0xea9e,	// (0x000893c6) cam6_pano_image_pane

0xeaa9,	// (0x000893d1) cam6_pano_pane_g1

0xe346,	// (0x00088c6e) cam6_pano_pane_g2

0xeab2,	// (0x000893da) cam6_pano_pane_g3

0xeabb,	// (0x000893e3) cam6_pano_pane_g4

0xd32a,	// (0x00087c52) cam6_pano_pane_g5

0xeac4,	// (0x000893ec) cam6_pano_pane_g6

0xeace,	// (0x000893f6) cam6_pano_pane_g7

0xead6,	// (0x000893fe) cam6_pano_pane_g8

0xeadf,	// (0x00089407) cam6_pano_pane_g9

0x0008,

0xfded,	// (0x0008a715) cam6_pano_pane_g

0xa15c,	// (0x00084a84) main_browser_tag_pane

0xe93d,	// (0x00089265) grid_navstr_albumart_pane

0xeaea,	// (0x00089412) cell_navstr_albumart_pane_ParamLimits

0xeaea,	// (0x00089412) cell_navstr_albumart_pane

0xeb0a,	// (0x00089432) cell_navstr_albumart_pane_g1

0xc73c,	// (0x00087064) cell_navstr_albumart_pane_g2

0xc74c,	// (0x00087074) cell_navstr_albumart_pane_g3

0xc744,	// (0x0008706c) cell_navstr_albumart_pane_g4

0x0003,

0xfe00,	// (0x0008a728) cell_navstr_albumart_pane_g

0x95c6,	// (0x00083eee) bt_list_pane_ParamLimits

0x95c6,	// (0x00083eee) bt_list_pane

0x95e7,	// (0x00083f0f) bt_list_pane_t1

0x95f6,	// (0x00083f1e) bt_list_pane_t2

0x0001,

0xfe09,	// (0x0008a731) bt_list_pane_t

0xa15c,	// (0x00084a84) main_cale_prevew_pane

0x9605,	// (0x00083f2d) popup_cale_preview_window_ParamLimits

0x9605,	// (0x00083f2d) popup_cale_preview_window

0xa593,	// (0x00084ebb) bg_popup_preview_window_pane_cp05_ParamLimits

0xa593,	// (0x00084ebb) bg_popup_preview_window_pane_cp05

0xeb12,	// (0x0008943a) list_cale_preview_pane_ParamLimits

0xeb12,	// (0x0008943a) list_cale_preview_pane

0x961e,	// (0x00083f46) list_double_cale_preview_pane_ParamLimits

0x961e,	// (0x00083f46) list_double_cale_preview_pane

0x9630,	// (0x00083f58) list_single_cale_preview_pane_ParamLimits

0x9630,	// (0x00083f58) list_single_cale_preview_pane

0x9644,	// (0x00083f6c) list_single_cale_preview_pane_g1

0x964c,	// (0x00083f74) list_single_cale_preview_pane_t1_ParamLimits

0x964c,	// (0x00083f74) list_single_cale_preview_pane_t1

0x9661,	// (0x00083f89) list_double_cale_preview_pane_g1

0x9669,	// (0x00083f91) list_double_cale_preview_pane_t1_ParamLimits

0x9669,	// (0x00083f91) list_double_cale_preview_pane_t1

0x967e,	// (0x00083fa6) list_double_cale_preview_pane_t2_ParamLimits

0x967e,	// (0x00083fa6) list_double_cale_preview_pane_t2

0x0001,

0xfe0e,	// (0x0008a736) list_double_cale_preview_pane_t_ParamLimits

0xfe0e,	// (0x0008a736) list_double_cale_preview_pane_t

0xa15c,	// (0x00084a84) main_ezdial_pane

0xa593,	// (0x00084ebb) main_sp_fs_email_pane_ParamLimits

0x91eb,	// (0x00083b13) cmail_ddmenu_btn01_pane_ParamLimits

0x91eb,	// (0x00083b13) cmail_ddmenu_btn01_pane

0x9200,	// (0x00083b28) cmail_ddmenu_btn02_pane_ParamLimits

0x9200,	// (0x00083b28) cmail_ddmenu_btn02_pane

0x9218,	// (0x00083b40) cmail_ddmenu_btn03_pane_ParamLimits

0x9218,	// (0x00083b40) cmail_ddmenu_btn03_pane

0x9240,	// (0x00083b68) main_sp_fs_ctrlbar_pane_ParamLimits

0x9256,	// (0x00083b7e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x937f,	// (0x00083ca7) list_cmail_body_pane_ParamLimits

0xe8bd,	// (0x000891e5) bg_button_pane_cp12

0xe8c6,	// (0x000891ee) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8c6,	// (0x000891ee) list_single_cmail_header_detail_pane_g3

0x1bc3,	// (0x0007c4eb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1bc3,	// (0x0007c4eb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd91,	// (0x0008a6b9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd91,	// (0x0008a6b9) list_single_cmail_header_detail_pane_t

0x1c1b,	// (0x0007c543) phacti_term_pane_t2_ParamLimits

0x1c1b,	// (0x0007c543) phacti_term_pane_t2

0x0001,

0xfd9b,	// (0x0008a6c3) phacti_term_pane_t_ParamLimits

0xfd9b,	// (0x0008a6c3) phacti_term_pane_t

0xeb1e,	// (0x00089446) aid_size_list_single_double

0x9696,	// (0x00083fbe) popup_ezdial_listscroll_window

0x96ba,	// (0x00083fe2) popup_number_entry_window_cp01

0xaae5,	// (0x0008540d) bg_popup_call_pane_cp09

0xeb2a,	// (0x00089452) ezdial_list_pane

0xeb32,	// (0x0008945a) scroll_pane_cp23

0xcb6d,	// (0x00087495) bg_button_pane_cp028_ParamLimits

0xcb6d,	// (0x00087495) bg_button_pane_cp028

0x96c8,	// (0x00083ff0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96c8,	// (0x00083ff0) cmail_ddmenu_btn01_pane_g1

0x96d8,	// (0x00084000) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x96d8,	// (0x00084000) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe13,	// (0x0008a73b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe13,	// (0x0008a73b) cmail_ddmenu_btn01_pane_g

0xeb3a,	// (0x00089462) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3a,	// (0x00089462) cmail_ddmenu_btn01_pane_t1

0xc96b,	// (0x00087293) bg_button_pane_cp029_ParamLimits

0xc96b,	// (0x00087293) bg_button_pane_cp029

0x96d8,	// (0x00084000) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x96d8,	// (0x00084000) cmail_ddmenu_btn02_pane_g1

0x96f0,	// (0x00084018) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96f0,	// (0x00084018) cmail_ddmenu_btn02_pane_t1

0xe421,	// (0x00088d49) bg_button_pane_cp031_ParamLimits

0xe421,	// (0x00088d49) bg_button_pane_cp031

0x96d8,	// (0x00084000) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x96d8,	// (0x00084000) cmail_ddmenu_btn03_pane_g1

0x96f0,	// (0x00084018) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96f0,	// (0x00084018) cmail_ddmenu_btn03_pane_t1

0x6f4f,	// (0x00081877) cell_dialer2_keypad_pane_t1_ParamLimits

0x6f69,	// (0x00081891) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6f69,	// (0x00081891) cell_dialer2_keypad_pane_t1_copy1

0x8b45,	// (0x0008346d) ncimui_group_button_pane

0xa593,	// (0x00084ebb) main_sp_fs_calendar_pane_ParamLimits

0x93a7,	// (0x00083ccf) list_single_cmail_header_caption_pane_ParamLimits

0x1c30,	// (0x0007c558) aid_recal_txt_sm_pane

0xa15c,	// (0x00084a84) mian_recal_day_pane

0x1c6a,	// (0x0007c592) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4f,	// (0x00089477) list_recal_day_pane

0x1e1c,	// (0x0007c744) list_single_recal_day_pane_ParamLimits

0x1e1c,	// (0x0007c744) list_single_recal_day_pane

0xeb76,	// (0x0008949e) list_single_recal_day_pane_g1_ParamLimits

0xeb76,	// (0x0008949e) list_single_recal_day_pane_g1

0x1e2e,	// (0x0007c756) list_single_recal_day_pane_g2_ParamLimits

0x1e2e,	// (0x0007c756) list_single_recal_day_pane_g2

0x1e3a,	// (0x0007c762) list_single_recal_day_pane_g3_ParamLimits

0x1e3a,	// (0x0007c762) list_single_recal_day_pane_g3

0x1e46,	// (0x0007c76e) list_single_recal_day_pane_g4_ParamLimits

0x1e46,	// (0x0007c76e) list_single_recal_day_pane_g4

0x1e54,	// (0x0007c77c) list_single_recal_day_pane_g5_ParamLimits

0x1e54,	// (0x0007c77c) list_single_recal_day_pane_g5

0x1e6a,	// (0x0007c792) list_single_recal_day_pane_g6_ParamLimits

0x1e6a,	// (0x0007c792) list_single_recal_day_pane_g6

0x0004,

0xfe22,	// (0x0008a74a) list_single_recal_day_pane_g_ParamLimits

0xfe22,	// (0x0008a74a) list_single_recal_day_pane_g

0x1e7e,	// (0x0007c7a6) list_single_recal_day_pane_t1

0x1e90,	// (0x0007c7b8) list_single_recal_day_pane_t2

0x0001,

0xfe2d,	// (0x0008a755) list_single_recal_day_pane_t

0x9714,	// (0x0008403c) ncimui_query_button_pane_ParamLimits

0x9714,	// (0x0008403c) ncimui_query_button_pane

0x9724,	// (0x0008404c) ncimui_query_button_pane_t1_ParamLimits

0x9724,	// (0x0008404c) ncimui_query_button_pane_t1

0xeb82,	// (0x000894aa) ncimui_query_button_pane_t2_ParamLimits

0xeb82,	// (0x000894aa) ncimui_query_button_pane_t2

0x0001,

0xfe32,	// (0x0008a75a) ncimui_query_button_pane_t_ParamLimits

0xfe32,	// (0x0008a75a) ncimui_query_button_pane_t

0x9737,	// (0x0008405f) query_button_pane_ParamLimits

0x9737,	// (0x0008405f) query_button_pane

0xa15c,	// (0x00084a84) bg_button_pane_cp0028

0xeb95,	// (0x000894bd) query_button_pane_t1

0x5289,	// (0x0007fbb1) main_tport_pane_ParamLimits

0x9289,	// (0x00083bb1) bg_popup_window_pane_cp01_ParamLimits

0x9289,	// (0x00083bb1) bg_popup_window_pane_cp01

0x9297,	// (0x00083bbf) heading_pane_cp08_ParamLimits

0x9297,	// (0x00083bbf) heading_pane_cp08

0x92a5,	// (0x00083bcd) heading_pane_cp07_ParamLimits

0x92a5,	// (0x00083bcd) heading_pane_cp07

0x9314,	// (0x00083c3c) cell_tport_appsw_pane_g2

0x0002,

0xfd7e,	// (0x0008a6a6) cell_tport_appsw_pane_g

0x0f8b,	// (0x0007b8b3) input_candi_list_open_g1

0xaf01,	// (0x00085829) list_cale_time_pane_g6_ParamLimits

0xaf01,	// (0x00085829) list_cale_time_pane_g6

0x5d10,	// (0x00080638) aid_size_touch_calib_1_ParamLimits

0x5d10,	// (0x00080638) aid_size_touch_calib_1

0x5d1c,	// (0x00080644) aid_size_touch_calib_2_ParamLimits

0x5d1c,	// (0x00080644) aid_size_touch_calib_2

0x5d2a,	// (0x00080652) aid_size_touch_calib_3_ParamLimits

0x5d2a,	// (0x00080652) aid_size_touch_calib_3

0x5d3a,	// (0x00080662) aid_size_touch_calib_4_ParamLimits

0x5d3a,	// (0x00080662) aid_size_touch_calib_4

0x5d48,	// (0x00080670) main_touch_calib_button_group_pane_ParamLimits

0x5d48,	// (0x00080670) main_touch_calib_button_group_pane

0x5d56,	// (0x0008067e) main_touch_calib_pane_g1_ParamLimits

0x5d62,	// (0x0008068a) main_touch_calib_pane_g2_ParamLimits

0x5d6e,	// (0x00080696) main_touch_calib_pane_g3_ParamLimits

0x5d7a,	// (0x000806a2) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0008a088) main_touch_calib_pane_g_ParamLimits

0x5d86,	// (0x000806ae) main_touch_calib_pane_t1_ParamLimits

0x5d9f,	// (0x000806c7) main_touch_calib_pane_t2_ParamLimits

0x5db8,	// (0x000806e0) main_touch_calib_pane_t3_ParamLimits

0x5dce,	// (0x000806f6) main_touch_calib_pane_t4_ParamLimits

0x5de4,	// (0x0008070c) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0008a091) main_touch_calib_pane_t_ParamLimits

0xd0cd,	// (0x000879f5) list_single_fp_cale_pane_g3_ParamLimits

0xd0cd,	// (0x000879f5) list_single_fp_cale_pane_g3

0xa593,	// (0x00084ebb) bg_button_pane_cp012_ParamLimits

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp03_ParamLimits

0x7ddd,	// (0x00082705) cell_vitu2_function_top_pane_g1_ParamLimits

0xa593,	// (0x00084ebb) bg_vkb2_func_pane_cp04_ParamLimits

0x8acd,	// (0x000833f5) main_ncimui_button_group_pane_ParamLimits

0x8acd,	// (0x000833f5) main_ncimui_button_group_pane

0x8b33,	// (0x0008345b) main_ncimui_pane_t3_ParamLimits

0x8b33,	// (0x0008345b) main_ncimui_pane_t3

0xe953,	// (0x0008927b) phacti_button_group_pane

0xeb1e,	// (0x00089446) aid_size_list_single_double_ParamLimits

0x9696,	// (0x00083fbe) popup_ezdial_listscroll_window_ParamLimits

0x96ba,	// (0x00083fe2) popup_number_entry_window_cp01_ParamLimits

0x9744,	// (0x0008406c) phacti_button_pane_ParamLimits

0x9744,	// (0x0008406c) phacti_button_pane

0xa15c,	// (0x00084a84) bg_button_pane_cp14

0xeba3,	// (0x000894cb) phacti_button_pane_t1

0x9755,	// (0x0008407d) main_touch_calib_button_pane_ParamLimits

0x9755,	// (0x0008407d) main_touch_calib_button_pane

0xa8f9,	// (0x00085221) bg_button_pane_cp18_ParamLimits

0xa8f9,	// (0x00085221) bg_button_pane_cp18

0xebb1,	// (0x000894d9) main_touch_calib_button_pane_t1_ParamLimits

0xebb1,	// (0x000894d9) main_touch_calib_button_pane_t1

0xebc7,	// (0x000894ef) main_touch_calib_button_pane_t2_ParamLimits

0xebc7,	// (0x000894ef) main_touch_calib_button_pane_t2

0x0001,

0xfe37,	// (0x0008a75f) main_touch_calib_button_pane_t_ParamLimits

0xfe37,	// (0x0008a75f) main_touch_calib_button_pane_t

0xa15c,	// (0x00084a84) cell_ncimui_button_pane

0xa15c,	// (0x00084a84) bg_button_pane_cp032

0xebe5,	// (0x0008950d) cell_ncimui_button_pane_t1

0x6fc5,	// (0x000818ed) image3_infobar_pane_ParamLimits

0x6fc5,	// (0x000818ed) image3_infobar_pane

0x8ef0,	// (0x00083818) fs_bigclock_status_pane_ParamLimits

0x8ef0,	// (0x00083818) fs_bigclock_status_pane

0x8efd,	// (0x00083825) main_fs_bigclock_clock_pane_ParamLimits

0x8efd,	// (0x00083825) main_fs_bigclock_clock_pane

0x8f11,	// (0x00083839) main_fs_bigclock_indi_pane_ParamLimits

0x8f11,	// (0x00083839) main_fs_bigclock_indi_pane

0x8f39,	// (0x00083861) main_fs_bigclock_swipe_pane_ParamLimits

0x8f39,	// (0x00083861) main_fs_bigclock_swipe_pane

0xa15c,	// (0x00084a84) main_fs_clock_dumped_data

0xe461,	// (0x00088d89) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe461,	// (0x00088d89) list_single_fs_bigclock_indicator_pane_g1

0xe47d,	// (0x00088da5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe47d,	// (0x00088da5) list_single_fs_bigclock_indicator_pane_g2

0xe497,	// (0x00088dbf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe497,	// (0x00088dbf) list_single_fs_bigclock_indicator_pane_g3

0xe4b1,	// (0x00088dd9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b1,	// (0x00088dd9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0008a5af) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0008a5af) list_single_fs_bigclock_indicator_pane_g

0xe4dc,	// (0x00088e04) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4dc,	// (0x00088e04) list_single_fs_bigclock_indicator_pane_t1

0xe504,	// (0x00088e2c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe504,	// (0x00088e2c) list_single_fs_bigclock_indicator_pane_t2

0xe52c,	// (0x00088e54) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe52c,	// (0x00088e54) list_single_fs_bigclock_indicator_pane_t3

0xe554,	// (0x00088e7c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe554,	// (0x00088e7c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0af4,	// (0x0007b41c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0af4,	// (0x0007b41c) list_single_fs_bigclock_indicator_pane_t

0xebf3,	// (0x0008951b) image3_infobar_fav_pane_ParamLimits

0xebf3,	// (0x0008951b) image3_infobar_fav_pane

0xec03,	// (0x0008952b) image3_infobar_loc_pane_ParamLimits

0xec03,	// (0x0008952b) image3_infobar_loc_pane

0xec17,	// (0x0008953f) image3_infobar_time_pane_ParamLimits

0xec17,	// (0x0008953f) image3_infobar_time_pane

0xcd88,	// (0x000876b0) image3_infobar_time_pane_g1

0xec27,	// (0x0008954f) image3_infobar_time_pane_t1

0xcd88,	// (0x000876b0) image3_infobar_loc_pane_g1

0xec35,	// (0x0008955d) image3_infobar_loc_pane_g2

0x0001,

0xfe3c,	// (0x0008a764) image3_infobar_loc_pane_g

0xec3d,	// (0x00089565) image3_infobar_loc_pane_t1

0xcd88,	// (0x000876b0) image3_infobar_fav_pane_g1

0xec4b,	// (0x00089573) image3_infobar_fav_pane_g2

0x0001,

0xfe41,	// (0x0008a769) image3_infobar_fav_pane_g

0xec53,	// (0x0008957b) fs_bigclock_status_battery_pane

0xec5c,	// (0x00089584) fs_bigclock_status_signal_pane

0xec65,	// (0x0008958d) fs_bigclock_status_title_pane

0xec6e,	// (0x00089596) fs_bigclock_status_signal_pane_g1

0xec77,	// (0x0008959f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe46,	// (0x0008a76e) fs_bigclock_status_signal_pane_g

0xec7f,	// (0x000895a7) fs_bigclock_status_battery_pane_g1

0xec88,	// (0x000895b0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4b,	// (0x0008a773) fs_bigclock_status_battery_pane_g

0xec90,	// (0x000895b8) fs_bigclock_status_title_pane_t1

0x9765,	// (0x0008408d) main_fs_bigclock_clock_pane_g1

0x9765,	// (0x0008408d) main_fs_bigclock_clock_pane_g2

0x9772,	// (0x0008409a) main_fs_bigclock_clock_pane_g3

0x9772,	// (0x0008409a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe50,	// (0x0008a778) main_fs_bigclock_clock_pane_g

0x977e,	// (0x000840a6) main_fs_bigclock_clock_pane_t1

0x9791,	// (0x000840b9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe59,	// (0x0008a781) main_fs_bigclock_clock_pane_t

0xec9e,	// (0x000895c6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec9e,	// (0x000895c6) list_single_fs_bigclock_indicator_pane

0xecaf,	// (0x000895d7) list_single_fs_bigclock_pane_ParamLimits

0xecaf,	// (0x000895d7) list_single_fs_bigclock_pane

0xecd5,	// (0x000895fd) main_fs_bigclock_indicator_pane_t1

0xece4,	// (0x0008960c) list_single_fs_bigclock_pane_g1

0xecec,	// (0x00089614) list_single_fs_bigclock_pane_t1

0xcd88,	// (0x000876b0) main_fs_bigclock_swipe_pane_g1

0xed2f,	// (0x00089657) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6a,	// (0x0008a792) main_fs_bigclock_swipe_pane_g

0xed37,	// (0x0008965f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed37,	// (0x0008965f) main_fs_bigclock_swipe_pane_t1

0x42fc,	// (0x0007ec24) call_type_pane_ParamLimits

0xa15c,	// (0x00084a84) main_btmg_pane

0x1ce3,	// (0x0007c60b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1ce3,	// (0x0007c60b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddd,	// (0x0008a705) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddd,	// (0x0008a705) list_single_cale_mrui_row_pane_g

0x1e0b,	// (0x0007c733) list_recal_vselct_arw_lo_pane

0xeb6e,	// (0x00089496) list_recal_vselct_arw_up_pane

0x1e13,	// (0x0007c73b) list_recal_vselct_pane

0x97e8,	// (0x00084110) btmg_button_pane

0x97f4,	// (0x0008411c) main_btmg_pane_g1

0xa15c,	// (0x00084a84) bg_button_pane_cp044

0xed54,	// (0x0008967c) btmg_button_pane_t1

0xc957,	// (0x0008727f) aid_listscroll_gen

0xa593,	// (0x00084ebb) main_cntbar_detail_pane

0xe89f,	// (0x000891c7) list_cmail_folder_pane

0xca77,	// (0x0008739f) sp_fs_scroll_pane_cp03_ParamLimits

0x1ea2,	// (0x0007c7ca) list_single_fs_dyc_pane_cp01_ParamLimits

0x1ea2,	// (0x0007c7ca) list_single_fs_dyc_pane_cp01

0xed62,	// (0x0008968a) aid_size_cmail_indent

0x1eca,	// (0x0007c7f2) list_single_dyc_row_pane_cp01

0x981c,	// (0x00084144) cntbar_detail_list_pane_ParamLimits

0x981c,	// (0x00084144) cntbar_detail_list_pane

0x9856,	// (0x0008417e) main_cntbar_detail_cont_pane_ParamLimits

0x9856,	// (0x0008417e) main_cntbar_detail_cont_pane

0x42f0,	// (0x0007ec18) scroll_pane_cp032_ParamLimits

0x42f0,	// (0x0007ec18) scroll_pane_cp032

0x9862,	// (0x0008418a) cntbar_detail_list_event_pane_ParamLimits

0x9862,	// (0x0008418a) cntbar_detail_list_event_pane

0x9828,	// (0x00084150) cntbar_detail_list_shct_pane

0xad8c,	// (0x000856b4) aid_list_gen

0xed6b,	// (0x00089693) aid_scroll

0xed74,	// (0x0008969c) aid_size_touch_scroll_bar

0x1432,	// (0x0007bd5a) aid_list_double

0x9876,	// (0x0008419e) aid_list_single

0x838c,	// (0x00082cb4) aid_list_single_lg

0x1ed3,	// (0x0007c7fb) aid_list_z_g_a_sm

0x987f,	// (0x000841a7) aid_list_z_g_d

0x1edb,	// (0x0007c803) aid_txt_z_prm

0x1ee9,	// (0x0007c811) aid_txt_z_prm_cp01

0x1ef7,	// (0x0007c81f) aid_txt_z_sec

0x9887,	// (0x000841af) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9887,	// (0x000841af) main_cntbar_detail_cont_pane_g1

0x9894,	// (0x000841bc) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9894,	// (0x000841bc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6f,	// (0x0008a797) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6f,	// (0x0008a797) main_cntbar_detail_cont_pane_g

0xed7d,	// (0x000896a5) main_cntbar_detail_cont_pane_t1

0xed8b,	// (0x000896b3) main_cntbar_detail_cont_pane_t2

0xed99,	// (0x000896c1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe74,	// (0x0008a79c) main_cntbar_detail_cont_pane_t

0x98a0,	// (0x000841c8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98a0,	// (0x000841c8) cell_cntbar_detail_list_shct_pane

0xeda7,	// (0x000896cf) cntbar_detail_list_shct_pane_g1

0xedb0,	// (0x000896d8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7b,	// (0x0008a7a3) cntbar_detail_list_shct_pane_g

0x98b4,	// (0x000841dc) cntbar_detail_list_event_pane_g1_ParamLimits

0x98b4,	// (0x000841dc) cntbar_detail_list_event_pane_g1

0x98c0,	// (0x000841e8) cntbar_detail_list_event_pane_g2_ParamLimits

0x98c0,	// (0x000841e8) cntbar_detail_list_event_pane_g2

0x0005,

0xfe80,	// (0x0008a7a8) cntbar_detail_list_event_pane_g_ParamLimits

0xfe80,	// (0x0008a7a8) cntbar_detail_list_event_pane_g

0x992c,	// (0x00084254) cntbar_detail_list_event_pane_t1_ParamLimits

0x992c,	// (0x00084254) cntbar_detail_list_event_pane_t1

0x9941,	// (0x00084269) cntbar_detail_list_event_pane_t2_ParamLimits

0x9941,	// (0x00084269) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8d,	// (0x0008a7b5) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8d,	// (0x0008a7b5) cntbar_detail_list_event_pane_t

0xcd88,	// (0x000876b0) cell_cntbar_detail_list_shct_pane_g1

0xb4d8,	// (0x00085e00) navi_pane_mv_g3

0xa593,	// (0x00084ebb) main_cntbar_detail_pane_ParamLimits

0xa15c,	// (0x00084a84) main_notif_wgt_pane

0x6c4f,	// (0x00081577) aid_tch_main_mp4_pane_g4

0x6eae,	// (0x000817d6) popup_slider_window_cp02

0x1e01,	// (0x0007c729) list_recal_day_event_pane

0x97fc,	// (0x00084124) cntbar_detail_btn_pane_ParamLimits

0x97fc,	// (0x00084124) cntbar_detail_btn_pane

0x980c,	// (0x00084134) cntbar_detail_btn_pane_cp01_ParamLimits

0x980c,	// (0x00084134) cntbar_detail_btn_pane_cp01

0x9828,	// (0x00084150) cntbar_detail_list_shct_pane_ParamLimits

0x9834,	// (0x0008415c) cntbar_detail_pane_g1_ParamLimits

0x9834,	// (0x0008415c) cntbar_detail_pane_g1

0x9840,	// (0x00084168) cntbar_detail_pane_t1_ParamLimits

0x9840,	// (0x00084168) cntbar_detail_pane_t1

0x98cc,	// (0x000841f4) cntbar_detail_list_event_pane_g3_ParamLimits

0x98cc,	// (0x000841f4) cntbar_detail_list_event_pane_g3

0x98e4,	// (0x0008420c) cntbar_detail_list_event_pane_g4_ParamLimits

0x98e4,	// (0x0008420c) cntbar_detail_list_event_pane_g4

0x98fc,	// (0x00084224) cntbar_detail_list_event_pane_g5_ParamLimits

0x98fc,	// (0x00084224) cntbar_detail_list_event_pane_g5

0x9914,	// (0x0008423c) cntbar_detail_list_event_pane_g6_ParamLimits

0x9914,	// (0x0008423c) cntbar_detail_list_event_pane_g6

0x9956,	// (0x0008427e) cntbar_detail_list_event_pane_t3_ParamLimits

0x9956,	// (0x0008427e) cntbar_detail_list_event_pane_t3

0x9968,	// (0x00084290) popup_notif_wgt_window_ParamLimits

0x9968,	// (0x00084290) popup_notif_wgt_window

0x9978,	// (0x000842a0) popup_submenu_window_cp01_ParamLimits

0x9978,	// (0x000842a0) popup_submenu_window_cp01

0xaae5,	// (0x0008540d) bg_popup_window_pane_cp10

0xedb9,	// (0x000896e1) listscroll_notif_wgt_pane

0xedcb,	// (0x000896f3) list_notif_wgt_window

0xedd4,	// (0x000896fc) scroll_pane_cp033

0x9986,	// (0x000842ae) list_notif_wgt_row_pane_ParamLimits

0x9986,	// (0x000842ae) list_notif_wgt_row_pane

0xeddd,	// (0x00089705) aid_size_list_notif_wgt_del

0xedea,	// (0x00089712) list_notif_wgt_row_pane_g1

0xedf6,	// (0x0008971e) list_notif_wgt_row_pane_g2

0xee05,	// (0x0008972d) list_notif_wgt_row_pane_g3

0x0002,

0xfe94,	// (0x0008a7bc) list_notif_wgt_row_pane_g

0xee12,	// (0x0008973a) list_notif_wgt_row_pane_t1

0xee28,	// (0x00089750) list_notif_wgt_row_pane_t2

0xee3a,	// (0x00089762) list_notif_wgt_row_pane_t3

0x0002,

0xfe9b,	// (0x0008a7c3) list_notif_wgt_row_pane_t

0xd962,	// (0x0008828a) list_recal_day_event_pane_g1

0xee4c,	// (0x00089774) list_recal_day_event_pane_t1

0xa15c,	// (0x00084a84) bg_button_pane_cp045

0x9998,	// (0x000842c0) cntbar_detail_btn_pane_t1

0xc96b,	// (0x00087293) main_callh_pane_ParamLimits

0xc96b,	// (0x00087293) main_callh_pane

0xa15c,	// (0x00084a84) main_coverflow0_pane

0xa15c,	// (0x00084a84) main_wgtman_pane

0x8f51,	// (0x00083879) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8f51,	// (0x00083879) main_fs_bigclock_unlock_btn_pane

0x930c,	// (0x00083c34) bg_button_pane_cp16

0x931c,	// (0x00083c44) cell_tport_appsw_pane_g3

0x99a6,	// (0x000842ce) cf0_flow_pane_ParamLimits

0x99a6,	// (0x000842ce) cf0_flow_pane

0xee5b,	// (0x00089783) listscroll_cf0_pane

0xee66,	// (0x0008978e) main_cf0_pane_g1

0x99b5,	// (0x000842dd) main_cf0_pane_t1_ParamLimits

0x99b5,	// (0x000842dd) main_cf0_pane_t1

0x99c9,	// (0x000842f1) main_cf0_pane_t2_ParamLimits

0x99c9,	// (0x000842f1) main_cf0_pane_t2

0x0001,

0xfea7,	// (0x0008a7cf) main_cf0_pane_t_ParamLimits

0xfea7,	// (0x0008a7cf) main_cf0_pane_t

0xee78,	// (0x000897a0) scroll_pane_cp11

0x99dd,	// (0x00084305) cf0_flow_pane_g1

0x99e5,	// (0x0008430d) cf0_flow_pane_g2

0x0001,

0xfeac,	// (0x0008a7d4) cf0_flow_pane_g

0x99ed,	// (0x00084315) cf0_flow_pane_t1

0xa15c,	// (0x00084a84) main_call6_pane

0xa15c,	// (0x00084a84) main_calllock_pane

0x99fb,	// (0x00084323) call6_btn_grp_pane_ParamLimits

0x99fb,	// (0x00084323) call6_btn_grp_pane

0x9a0a,	// (0x00084332) call6_pane_g1_ParamLimits

0x9a0a,	// (0x00084332) call6_pane_g1

0x9a1a,	// (0x00084342) popup_call6_1st_window_ParamLimits

0x9a1a,	// (0x00084342) popup_call6_1st_window

0x9a28,	// (0x00084350) popup_call6_2nd_window_ParamLimits

0x9a28,	// (0x00084350) popup_call6_2nd_window

0x9a36,	// (0x0008435e) cell_call6_btn_pane_ParamLimits

0x9a36,	// (0x0008435e) cell_call6_btn_pane

0xaae5,	// (0x0008540d) bg_popup_call2_in_pane_cp03

0xee83,	// (0x000897ab) popup_call6_1st_window_g1

0xee8b,	// (0x000897b3) popup_call6_1st_window_g2

0xee93,	// (0x000897bb) popup_call6_1st_window_g3

0x0002,

0xfeb1,	// (0x0008a7d9) popup_call6_1st_window_g

0xee9b,	// (0x000897c3) popup_call6_1st_window_t1

0xeeaa,	// (0x000897d2) popup_call6_1st_window_t2

0xeeb8,	// (0x000897e0) popup_call6_1st_window_t3

0x0002,

0xfeb8,	// (0x0008a7e0) popup_call6_1st_window_t

0xaae5,	// (0x0008540d) bg_popup_call2_in_pane_cp04

0xee83,	// (0x000897ab) popup_call6_2nd_window_g1

0xee8b,	// (0x000897b3) popup_call6_2nd_window_g2

0xee93,	// (0x000897bb) popup_call6_2nd_window_g3

0x0002,

0xfeb1,	// (0x0008a7d9) popup_call6_2nd_window_g

0xee9b,	// (0x000897c3) popup_call6_2nd_window_t1

0xa15c,	// (0x00084a84) bg_button_pane_cp15

0xeec6,	// (0x000897ee) cell_call6_btn_pane_g1

0x9a45,	// (0x0008436d) cell_call6_btn_pane_t1

0x9a54,	// (0x0008437c) listscroll_wgtman_pane_ParamLimits

0x9a54,	// (0x0008437c) listscroll_wgtman_pane

0x9a70,	// (0x00084398) wgtman_btn_pane_ParamLimits

0x9a70,	// (0x00084398) wgtman_btn_pane

0xb2ec,	// (0x00085c14) aid_scroll_copy1

0xeecf,	// (0x000897f7) list_wgtman_pane

0x9aa5,	// (0x000843cd) wgtman_btn_pane_g1_ParamLimits

0x9aa5,	// (0x000843cd) wgtman_btn_pane_g1

0x9acd,	// (0x000843f5) wgtman_btn_pane_t1_ParamLimits

0x9acd,	// (0x000843f5) wgtman_btn_pane_t1

0xeed9,	// (0x00089801) wgtman_btn_pane_t2_ParamLimits

0xeed9,	// (0x00089801) wgtman_btn_pane_t2

0x0001,

0xfebf,	// (0x0008a7e7) wgtman_btn_pane_t_ParamLimits

0xfebf,	// (0x0008a7e7) wgtman_btn_pane_t

0x9b04,	// (0x0008442c) listrow_wgtman_pane_ParamLimits

0x9b04,	// (0x0008442c) listrow_wgtman_pane

0x9b20,	// (0x00084448) listrow_wgtman_pane_g1

0x9b2d,	// (0x00084455) listrow_wgtman_pane_g2

0x0001,

0xfec4,	// (0x0008a7ec) listrow_wgtman_pane_g

0x1f05,	// (0x0007c82d) listrow_wgtman_pane_t1

0x1f1d,	// (0x0007c845) listrow_wgtman_pane_t2

0x0001,

0xfec9,	// (0x0008a7f1) listrow_wgtman_pane_t

0x1f43,	// (0x0007c86b) wait_bar_pane_cp09

0xeef0,	// (0x00089818) main_calllock_btn_pane

0xeefa,	// (0x00089822) main_calllock_pane_g1

0xa15c,	// (0x00084a84) bg_button_pane_cp17

0xeec6,	// (0x000897ee) main_calllock_btn_pane_g1

0xef06,	// (0x0008982e) main_calllock_btn_pane_t1

0xa15c,	// (0x00084a84) main_dialer3_pane

0xa15c,	// (0x00084a84) main_fmrd2_pane

0xcd88,	// (0x000876b0) main_fs_bigclock_unlock_btn_pane_g1

0x9b53,	// (0x0008447b) main_fs_bigclock_unlock_btn_pane_t1

0x9b61,	// (0x00084489) area_fmrd2_info_pane_ParamLimits

0x9b61,	// (0x00084489) area_fmrd2_info_pane

0x9b6f,	// (0x00084497) area_fmrd2_visual_pane_ParamLimits

0x9b6f,	// (0x00084497) area_fmrd2_visual_pane

0x9b7d,	// (0x000844a5) fmrd2_indi_pane_ParamLimits

0x9b7d,	// (0x000844a5) fmrd2_indi_pane

0x9b8a,	// (0x000844b2) area_fmrd2_visual_pane_g1

0x9b92,	// (0x000844ba) area_fmrd2_visual_pane_t1

0x9ba2,	// (0x000844ca) area_fmrd2_visual_pane_t2

0x9bb2,	// (0x000844da) area_fmrd2_visual_pane_t3

0x0002,

0xfed3,	// (0x0008a7fb) area_fmrd2_visual_pane_t

0x9bc2,	// (0x000844ea) area_fmrd2_info_pane_g1

0x9bca,	// (0x000844f2) area_fmrd2_info_pane_t1

0x9bda,	// (0x00084502) area_fmrd2_info_pane_t2

0x9bea,	// (0x00084512) area_fmrd2_info_pane_t3

0x9bfa,	// (0x00084522) area_fmrd2_info_pane_t4

0x0003,

0xfeda,	// (0x0008a802) area_fmrd2_info_pane_t

0x9c08,	// (0x00084530) fmrd2_indi_pane_t1

0x9c18,	// (0x00084540) fmrd2_indi_pane_t2

0x9c28,	// (0x00084550) fmrd2_indi_pane_t3

0x0002,

0xfee3,	// (0x0008a80b) fmrd2_indi_pane_t

0xe4c0,	// (0x00088de8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c0,	// (0x00088de8) list_single_fs_bigclock_indicator_pane_g5

0xe571,	// (0x00088e99) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe571,	// (0x00088e99) list_single_fs_bigclock_indicator_pane_t5

0x94ba,	// (0x00083de2) aid_cell_bcale_month_pane_ParamLimits

0x94ba,	// (0x00083de2) aid_cell_bcale_month_pane

0x94d8,	// (0x00083e00) bcale_month_pane_ParamLimits

0x94d8,	// (0x00083e00) bcale_month_pane

0x94f6,	// (0x00083e1e) bcale_preview_pane_ParamLimits

0x94f6,	// (0x00083e1e) bcale_preview_pane

0xecec,	// (0x00089614) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0b,	// (0x00089633) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0b,	// (0x00089633) list_single_fs_bigclock_pane_t2

0x0001,

0xfe65,	// (0x0008a78d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe65,	// (0x0008a78d) list_single_fs_bigclock_pane_t

0x9b4b,	// (0x00084473) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfece,	// (0x0008a7f6) main_fs_bigclock_unlock_btn_pane_g

0x9c36,	// (0x0008455e) aid_dia3_key_size_ParamLimits

0x9c36,	// (0x0008455e) aid_dia3_key_size

0x9c42,	// (0x0008456a) aid_dia3_listrow_size_ParamLimits

0x9c42,	// (0x0008456a) aid_dia3_listrow_size

0x9c52,	// (0x0008457a) dia3_keypad_fun_pane_ParamLimits

0x9c52,	// (0x0008457a) dia3_keypad_fun_pane

0x9c64,	// (0x0008458c) dia3_keypad_num_pane_ParamLimits

0x9c64,	// (0x0008458c) dia3_keypad_num_pane

0x9c76,	// (0x0008459e) dia3_listscroll_pane_ParamLimits

0x9c76,	// (0x0008459e) dia3_listscroll_pane

0x9c84,	// (0x000845ac) dia3_numentry_pane_ParamLimits

0x9c84,	// (0x000845ac) dia3_numentry_pane

0xef15,	// (0x0008983d) dia3_list_pane

0xef20,	// (0x00089848) scroll_pane_cp12

0xa15c,	// (0x00084a84) bg_dia3_numentry_pane

0x9c92,	// (0x000845ba) dia3_numentry_pane_t1

0x9ca1,	// (0x000845c9) cell_dia3_key_num_pane

0x9ca9,	// (0x000845d1) cell_dia3_key0_fun_pane_ParamLimits

0x9ca9,	// (0x000845d1) cell_dia3_key0_fun_pane

0x9cb6,	// (0x000845de) cell_dia3_key1_fun_pane_ParamLimits

0x9cb6,	// (0x000845de) cell_dia3_key1_fun_pane

0x9cc3,	// (0x000845eb) dia3_listrow_pane

0xe205,	// (0x00088b2d) bg_dia3_numentry_pane_g1

0xa15c,	// (0x00084a84) bg_button_pane_cp21

0xef2b,	// (0x00089853) cell_dia3_key_num_pane_t1

0xef39,	// (0x00089861) cell_dia3_key_num_pane_t2

0xef48,	// (0x00089870) cell_dia3_key_num_pane_t3

0xef57,	// (0x0008987f) cell_dia3_key_num_pane_t4

0x0003,

0xfeea,	// (0x0008a812) cell_dia3_key_num_pane_t

0xa15c,	// (0x00084a84) bg_button_pane_cp19

0x9cd0,	// (0x000845f8) cell_dia3_key0_fun_pane_g1

0xa15c,	// (0x00084a84) bg_button_pane_cp20

0x9cd8,	// (0x00084600) cell_dia3_key1_fun_pane_g1

0x9ce0,	// (0x00084608) area_left_week_number_pane

0x9cf3,	// (0x0008461b) area_top_day_name_pane

0x9d01,	// (0x00084629) frame_month_view_pane

0xef66,	// (0x0008988e) grid_month_view_pane

0x9d16,	// (0x0008463e) cell_top_day_name_pane_ParamLimits

0x9d16,	// (0x0008463e) cell_top_day_name_pane

0x9d30,	// (0x00084658) cell_area_left_week_number_pane_ParamLimits

0x9d30,	// (0x00084658) cell_area_left_week_number_pane

0x9d53,	// (0x0008467b) cell_month_view_pane_ParamLimits

0x9d53,	// (0x0008467b) cell_month_view_pane

0xef74,	// (0x0008989c) frm_month_g1

0x9d7f,	// (0x000846a7) frm_month_g2

0x9d90,	// (0x000846b8) frm_month_g3

0x9da1,	// (0x000846c9) frm_month_g4

0x9db2,	// (0x000846da) frm_month_g5

0x9dc5,	// (0x000846ed) frm_month_g6

0x9dd8,	// (0x00084700) frm_month_g7

0xef81,	// (0x000898a9) frm_month_g8

0x9deb,	// (0x00084713) frm_month_g9

0x9df8,	// (0x00084720) frm_month_g10

0x9e05,	// (0x0008472d) frm_month_g11

0x9e12,	// (0x0008473a) frm_month_g12

0x9e1f,	// (0x00084747) frm_month_g13

0x9e2c,	// (0x00084754) frm_month_g14

0x9e3b,	// (0x00084763) frm_month_g15

0x9e4a,	// (0x00084772) frm_month_g16

0x000f,

0xfef3,	// (0x0008a81b) frm_month_g

0xef8e,	// (0x000898b6) cell_top_day_name_pane_t1

0x9e59,	// (0x00084781) cell_area_left_week_number_pane_g1

0x9e68,	// (0x00084790) cell_area_left_week_number_pane_t1

0xcfcd,	// (0x000878f5) cell_month_view_pane_g1

0x9e7e,	// (0x000847a6) cell_month_view_pane_t1

0xa15c,	// (0x00084a84) main_fps_pane

0xe7a9,	// (0x000890d1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a9,	// (0x000890d1) cmail_ddmenu_btn02_pane_cp1

0xe7c5,	// (0x000890ed) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c5,	// (0x000890ed) cmail_ddmenu_btn02_pane_cp2

0x96e4,	// (0x0008400c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x96e4,	// (0x0008400c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe18,	// (0x0008a740) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe18,	// (0x0008a740) cmail_ddmenu_btn02_pane_g

0x9702,	// (0x0008402a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9702,	// (0x0008402a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1d,	// (0x0008a745) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1d,	// (0x0008a745) cmail_ddmenu_btn02_pane_t

0x9e94,	// (0x000847bc) fps_text_pane_ParamLimits

0x9e94,	// (0x000847bc) fps_text_pane

0x9ea1,	// (0x000847c9) main_fps_pane_g1_ParamLimits

0x9ea1,	// (0x000847c9) main_fps_pane_g1

0x9eaf,	// (0x000847d7) wait_bar_pane_cp010_ParamLimits

0x9eaf,	// (0x000847d7) wait_bar_pane_cp010

0x9ebb,	// (0x000847e3) fps_text_pane_t1_ParamLimits

0x9ebb,	// (0x000847e3) fps_text_pane_t1

0x7359,	// (0x00081c81) cam4_image_uncrop_pane_g1

0x7362,	// (0x00081c8a) cam4_image_uncrop_pane_g2

0x736b,	// (0x00081c93) cam4_image_uncrop_pane_g3

0x7374,	// (0x00081c9c) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0008a229) cam4_image_uncrop_pane_g

0x9cc3,	// (0x000845eb) dia3_listrow_pane_ParamLimits

0xa15c,	// (0x00084a84) main_phob2_pane

0x92ee,	// (0x00083c16) cell_tport_appsw_pane_cp02_ParamLimits

0x92ee,	// (0x00083c16) cell_tport_appsw_pane_cp02

0x92fd,	// (0x00083c25) cell_tport_appsw_pane_cp03_ParamLimits

0x92fd,	// (0x00083c25) cell_tport_appsw_pane_cp03

0xa15c,	// (0x00084a84) phob2_contact_card_pane

0xa15c,	// (0x00084a84) phob2_listscroll_pane

0xefa1,	// (0x000898c9) phob2_list_pane

0xefa9,	// (0x000898d1) scroll_pane_cp034

0x9ed4,	// (0x000847fc) phob2_cc_data_pane_ParamLimits

0x9ed4,	// (0x000847fc) phob2_cc_data_pane

0x9eee,	// (0x00084816) phob2_cc_listscroll_pane_ParamLimits

0x9eee,	// (0x00084816) phob2_cc_listscroll_pane

0x9f08,	// (0x00084830) list_double_large_graphic_phob2_pane_ParamLimits

0x9f08,	// (0x00084830) list_double_large_graphic_phob2_pane

0x9f27,	// (0x0008484f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f27,	// (0x0008484f) list_double_large_graphic_phob2_pane_g1

0x1f55,	// (0x0007c87d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1f55,	// (0x0007c87d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff14,	// (0x0008a83c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff14,	// (0x0008a83c) list_double_large_graphic_phob2_pane_g

0x1f61,	// (0x0007c889) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1f61,	// (0x0007c889) list_double_large_graphic_phob2_pane_t1

0x1f77,	// (0x0007c89f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1f77,	// (0x0007c89f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff19,	// (0x0008a841) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff19,	// (0x0008a841) list_double_large_graphic_phob2_pane_t

0xa15c,	// (0x00084a84) list_highlight_pane_cp024

0x9f3d,	// (0x00084865) phob2_cc_button_pane

0x9f45,	// (0x0008486d) phob2_cc_data_pane_g1_ParamLimits

0x9f45,	// (0x0008486d) phob2_cc_data_pane_g1

0x9f51,	// (0x00084879) phob2_cc_data_pane_g2_ParamLimits

0x9f51,	// (0x00084879) phob2_cc_data_pane_g2

0x0001,

0xff1e,	// (0x0008a846) phob2_cc_data_pane_g_ParamLimits

0xff1e,	// (0x0008a846) phob2_cc_data_pane_g

0x9f5d,	// (0x00084885) phob2_cc_data_pane_t1_ParamLimits

0x9f5d,	// (0x00084885) phob2_cc_data_pane_t1

0x9f6f,	// (0x00084897) phob2_cc_data_pane_t2_ParamLimits

0x9f6f,	// (0x00084897) phob2_cc_data_pane_t2

0x9f81,	// (0x000848a9) phob2_cc_data_pane_t3_ParamLimits

0x9f81,	// (0x000848a9) phob2_cc_data_pane_t3

0x0002,

0xff23,	// (0x0008a84b) phob2_cc_data_pane_t_ParamLimits

0xff23,	// (0x0008a84b) phob2_cc_data_pane_t

0xefb1,	// (0x000898d9) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x000898d9) phob2_cc_list_pane

0xdc7d,	// (0x000885a5) scroll_pane_cp035_ParamLimits

0xdc7d,	// (0x000885a5) scroll_pane_cp035

0xa593,	// (0x00084ebb) bg_button_pane_cp033

0xefbd,	// (0x000898e5) phob2_cc_button_pane_g1

0xefc9,	// (0x000898f1) phob2_cc_button_pane_t1

0xefde,	// (0x00089906) phob2_cc_button_pane_t2

0x0001,

0xff2a,	// (0x0008a852) phob2_cc_button_pane_t

0x9f93,	// (0x000848bb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f93,	// (0x000848bb) list_double_large_graphic_phob2_cc_pane

0xa007,	// (0x0008492f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa007,	// (0x0008492f) list_double_large_graphic_phob2_cc_pane_g1

0x1f8c,	// (0x0007c8b4) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1f8c,	// (0x0007c8b4) list_double_large_graphic_phob2_cc_pane_g2

0x1f9b,	// (0x0007c8c3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1f9b,	// (0x0007c8c3) list_double_large_graphic_phob2_cc_pane_g3

0x1faa,	// (0x0007c8d2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1faa,	// (0x0007c8d2) list_double_large_graphic_phob2_cc_pane_g4

0x1fbb,	// (0x0007c8e3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1fbb,	// (0x0007c8e3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2f,	// (0x0008a857) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2f,	// (0x0008a857) list_double_large_graphic_phob2_cc_pane_g

0x1fca,	// (0x0007c8f2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1fca,	// (0x0007c8f2) list_double_large_graphic_phob2_cc_pane_t1

0x1ff3,	// (0x0007c91b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1ff3,	// (0x0007c91b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3a,	// (0x0008a862) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3a,	// (0x0008a862) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x00089918) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x00089918) list_highlight_pane_cp025

0xa593,	// (0x00084ebb) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x000898e5) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x000898f1) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x00089906) phob2_cc_button_pane_t2_ParamLimits

0xff2a,	// (0x0008a852) phob2_cc_button_pane_t_ParamLimits

0x22f3,	// (0x0007cc1b) popup_wgtman_window

0xd838,	// (0x00088160) scroll_pane_cp038

0x9a8d,	// (0x000843b5) wgtman_btn_pane_cp_01_ParamLimits

0x9a8d,	// (0x000843b5) wgtman_btn_pane_cp_01

0xeffe,	// (0x00089926) wgtman_content_pane

0xf007,	// (0x0008992f) wgtman_heading_pane

0xa15c,	// (0x00084a84) bg_heading_pane_cp02

0xf010,	// (0x00089938) wgtman_heading_pane_g1

0xf018,	// (0x00089940) wgtman_heading_pane_t1

0xf026,	// (0x0008994e) scroll_pane_cp036

0xf02e,	// (0x00089956) wgtman_list_pane

0xe6b3,	// (0x00088fdb) wgtman_list_pane_t1_ParamLimits

0xe6b3,	// (0x00088fdb) wgtman_list_pane_t1

0x72b8,	// (0x00081be0) cam4_grid_pane

0x1217,	// (0x0007bb3f) bg_button_pane_cp015_ParamLimits

0x7faf,	// (0x000828d7) bg_button_pane_cp016_ParamLimits

0x7fc2,	// (0x000828ea) bg_button_pane_cp017_ParamLimits

0x125b,	// (0x0007bb83) popup_vitu2_query_window_g3_ParamLimits

0x125b,	// (0x0007bb83) popup_vitu2_query_window_g3

0x12d4,	// (0x0007bbfc) popup_vitu2_query_window_t6_ParamLimits

0x12d4,	// (0x0007bbfc) popup_vitu2_query_window_t6

0x12ff,	// (0x0007bc27) popup_vitu2_query_window_t7_ParamLimits

0x12ff,	// (0x0007bc27) popup_vitu2_query_window_t7

0xdb9b,	// (0x000884c3) cam4_grid_pane_g1

0xdc89,	// (0x000885b1) cam4_grid_pane_g2

0xf036,	// (0x0008995e) cam4_grid_pane_g3

0xf03f,	// (0x00089967) cam4_grid_pane_g4

0x0003,

0xff3f,	// (0x0008a867) cam4_grid_pane_g

0x3075,	// (0x0007d99d) aid_placing_vt_slider_lsc_ParamLimits

0x33b5,	// (0x0007dcdd) vidtel_button_pane_ParamLimits

0x33b5,	// (0x0007dcdd) vidtel_button_pane

0xa15c,	// (0x00084a84) bg_button_pane_cp034

0xf04a,	// (0x00089972) vidtel_button_pane_g1

0xf052,	// (0x0008997a) vidtel_button_pane_t1

0xd952,	// (0x0008827a) aid_size_vtel_slider_touch

0xdc7d,	// (0x000885a5) scroll_pane_cp039

0x8c8e,	// (0x000835b6) ncim_query_button_pane_cp01_ParamLimits

0x8cad,	// (0x000835d5) ncimui_query_pane_g1_ParamLimits

0xa593,	// (0x00084ebb) input_focus_pane_cp012_ParamLimits

0xe24b,	// (0x00088b73) ncim_query_entry_pane_t1_ParamLimits

0xdc7d,	// (0x000885a5) scroll_pane_cp039_ParamLimits

0xb3c3,	// (0x00085ceb) navi_pane_bcale_mc_g1

0xb3cb,	// (0x00085cf3) navi_pane_bcale_mc_t1

0xe80e,	// (0x00089136) main_sp_fs_email_pane_g1

0xe81a,	// (0x00089142) main_sp_fs_email_pane_g2

0x0001,

0x0b5a,	// (0x0007b482) main_sp_fs_email_pane_g

0xea70,	// (0x00089398) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea70,	// (0x00089398) list_single_cale_mrui_row_pane_g3

0x1e60,	// (0x0007c788) list_single_recal_day_pane_g5_event_pane

0x1e76,	// (0x0007c79e) list_single_recal_day_pane_g7

0xf068,	// (0x00089990) list_recal_day_event_pane_cp01

0xf071,	// (0x00089999) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x000899a1) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x000899a9) list_recal_vselct_pane_cp01

0xd962,	// (0x0008828a) list_recal_day_event_pane_cp01_g1

0x201c,	// (0x0007c944) list_recal_day_event_pane_cp01_t1

0x1e7e,	// (0x0007c7a6) list_single_recal_day_pane_t1_ParamLimits

0x1e90,	// (0x0007c7b8) list_single_recal_day_pane_t2_ParamLimits

0xfe2d,	// (0x0008a755) list_single_recal_day_pane_t_ParamLimits

0xa828,	// (0x00085150) bg_notes_pane_ParamLimits

0xa8d7,	// (0x000851ff) list_notes_pane_ParamLimits

0x264e,	// (0x0007cf76) scroll_pane_cp06_ParamLimits

0xa8f9,	// (0x00085221) main_notes_pane_ParamLimits

0xa15c,	// (0x00084a84) main_welc_pane

0xa018,	// (0x00084940) main_welc_body_pane_ParamLimits

0xa018,	// (0x00084940) main_welc_body_pane

0xa031,	// (0x00084959) main_welc_opti_pane_ParamLimits

0xa031,	// (0x00084959) main_welc_opti_pane

0xa064,	// (0x0008498c) main_welc_pane_t1_ParamLimits

0xa064,	// (0x0008498c) main_welc_pane_t1

0xa07e,	// (0x000849a6) main_welc_body_row_pane_ParamLimits

0xa07e,	// (0x000849a6) main_welc_body_row_pane

0xe421,	// (0x00088d49) main_welc_opti_row_pane_ParamLimits

0xe421,	// (0x00088d49) main_welc_opti_row_pane

0xf08b,	// (0x000899b3) main_welc_opti_row_pane_g1

0xa0a7,	// (0x000849cf) main_welc_opti_row_pane_t1

0xf093,	// (0x000899bb) main_welc_body_row_pane_t1

0xedc3,	// (0x000896eb) popup_notif_wgt_heading_pane

0xeddd,	// (0x00089705) aid_size_list_notif_wgt_del_ParamLimits

0xedea,	// (0x00089712) list_notif_wgt_row_pane_g1_ParamLimits

0xedf6,	// (0x0008971e) list_notif_wgt_row_pane_g2_ParamLimits

0xee05,	// (0x0008972d) list_notif_wgt_row_pane_g3_ParamLimits

0xfe94,	// (0x0008a7bc) list_notif_wgt_row_pane_g_ParamLimits

0xee12,	// (0x0008973a) list_notif_wgt_row_pane_t1_ParamLimits

0xee28,	// (0x00089750) list_notif_wgt_row_pane_t2_ParamLimits

0xee3a,	// (0x00089762) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9b,	// (0x0008a7c3) list_notif_wgt_row_pane_t_ParamLimits

0x9b20,	// (0x00084448) listrow_wgtman_pane_g1_ParamLimits

0x9b2d,	// (0x00084455) listrow_wgtman_pane_g2_ParamLimits

0xfec4,	// (0x0008a7ec) listrow_wgtman_pane_g_ParamLimits

0x1f05,	// (0x0007c82d) listrow_wgtman_pane_t1_ParamLimits

0x1f1d,	// (0x0007c845) listrow_wgtman_pane_t2_ParamLimits

0xfec9,	// (0x0008a7f1) listrow_wgtman_pane_t_ParamLimits

0x1f43,	// (0x0007c86b) wait_bar_pane_cp09_ParamLimits

0xa15c,	// (0x00084a84) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000899ca) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000899d2) popup_notif_wgt_heading_pane_t1

0xa15c,	// (0x00084a84) main_vids_pane

0xa15c,	// (0x00084a84) vids_listscroll_pane

0xa0b6,	// (0x000849de) scroll_pane_cp040

0xa15c,	// (0x00084a84) vids_list_pane

0xa0c1,	// (0x000849e9) vids_list_double_pane_ParamLimits

0xa0c1,	// (0x000849e9) vids_list_double_pane

0xa0d9,	// (0x00084a01) vids_list_double_pane_g1

0xa0e2,	// (0x00084a0a) vids_list_double_pane_t1

0xa0f2,	// (0x00084a1a) vids_list_double_pane_t2

0x0001,

0xff4d,	// (0x0008a875) vids_list_double_pane_t

0xa593,	// (0x00084ebb) main_ncimui_pane_ParamLimits

0x8ae5,	// (0x0008340d) main_ncimui_pane_g1_ParamLimits

0x8af1,	// (0x00083419) main_ncimui_pane_g2_ParamLimits

0x8af1,	// (0x00083419) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0008a525) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0008a525) main_ncimui_pane_g

0xa04a,	// (0x00084972) main_welc_pane_g1_ParamLimits

0xa04a,	// (0x00084972) main_welc_pane_g1

0xa056,	// (0x0008497e) main_welc_pane_g2_ParamLimits

0xa056,	// (0x0008497e) main_welc_pane_g2

0x0001,

0xff48,	// (0x0008a870) main_welc_pane_g_ParamLimits

0xff48,	// (0x0008a870) main_welc_pane_g

0xa828,	// (0x00085150) listscroll_mce_pane_ParamLimits

0xb518,	// (0x00085e40) wait_bar_pane_cp10

0xc95f,	// (0x00087287) main_cale_day_pane_ParamLimits

0xc95f,	// (0x00087287) main_cale_week_pane_ParamLimits

0xa828,	// (0x00085150) main_messa_pane_ParamLimits

0x65e7,	// (0x00080f0f) main_clock2_btn_pane_ParamLimits

0x65e7,	// (0x00080f0f) main_clock2_btn_pane

0xd155,	// (0x00087a7d) main_clock2_btn_pane_cp01_ParamLimits

0xd155,	// (0x00087a7d) main_clock2_btn_pane_cp01

0xea41,	// (0x00089369) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x00089798) main_cf0_pane_g2

0x0001,

0xfea2,	// (0x0008a7ca) main_cf0_pane_g

0x9ce0,	// (0x00084608) area_left_week_number_pane_ParamLimits

0x9cf3,	// (0x0008461b) area_top_day_name_pane_ParamLimits

0x9d01,	// (0x00084629) frame_month_view_pane_ParamLimits

0xef66,	// (0x0008988e) grid_month_view_pane_ParamLimits

0xef74,	// (0x0008989c) frm_month_g1_ParamLimits

0x9d7f,	// (0x000846a7) frm_month_g2_ParamLimits

0x9d90,	// (0x000846b8) frm_month_g3_ParamLimits

0x9da1,	// (0x000846c9) frm_month_g4_ParamLimits

0x9db2,	// (0x000846da) frm_month_g5_ParamLimits

0x9dc5,	// (0x000846ed) frm_month_g6_ParamLimits

0x9dd8,	// (0x00084700) frm_month_g7_ParamLimits

0xef81,	// (0x000898a9) frm_month_g8_ParamLimits

0x9deb,	// (0x00084713) frm_month_g9_ParamLimits

0x9df8,	// (0x00084720) frm_month_g10_ParamLimits

0x9e05,	// (0x0008472d) frm_month_g11_ParamLimits

0x9e12,	// (0x0008473a) frm_month_g12_ParamLimits

0x9e1f,	// (0x00084747) frm_month_g13_ParamLimits

0x9e2c,	// (0x00084754) frm_month_g14_ParamLimits

0x9e3b,	// (0x00084763) frm_month_g15_ParamLimits

0x9e4a,	// (0x00084772) frm_month_g16_ParamLimits

0xfef3,	// (0x0008a81b) frm_month_g_ParamLimits

0xef8e,	// (0x000898b6) cell_top_day_name_pane_t1_ParamLimits

0x9e59,	// (0x00084781) cell_area_left_week_number_pane_g1_ParamLimits

0x9e68,	// (0x00084790) cell_area_left_week_number_pane_t1_ParamLimits

0xcfcd,	// (0x000878f5) cell_month_view_pane_g1_ParamLimits

0x9e7e,	// (0x000847a6) cell_month_view_pane_t1_ParamLimits

0xa820,	// (0x00085148) main_clock2_btn_pane_g1

0xf0b8,	// (0x000899e0) main_clock2_btn_pane_t1

0xa593,	// (0x00084ebb) listscroll_cmail_pane_ParamLimits

0xe80e,	// (0x00089136) main_sp_fs_email_pane_g1_ParamLimits

0xe81a,	// (0x00089142) main_sp_fs_email_pane_g2_ParamLimits

0x0b5a,	// (0x0007b482) main_sp_fs_email_pane_g_ParamLimits

0xeb4f,	// (0x00089477) list_recal_day_pane_ParamLimits

0xeb60,	// (0x00089488) mian_recal_day_pane_t1

0x1845,	// (0x0007c16d) list_single_dyc_row_text_pane_t4_ParamLimits

0x1845,	// (0x0007c16d) list_single_dyc_row_text_pane_t4

0x187c,	// (0x0007c1a4) list_single_dyc_row_text_pane_t5_ParamLimits

0x187c,	// (0x0007c1a4) list_single_dyc_row_text_pane_t5

0x18f2,	// (0x0007c21a) list_single_dyc_row_text_pane_t6_ParamLimits

0x18f2,	// (0x0007c21a) list_single_dyc_row_text_pane_t6

0x422e,	// (0x0007eb56) aid_mgn_list_cale_time_pane

0xa593,	// (0x00084ebb) main_gallery2_pane_ParamLimits

0xd16b,	// (0x00087a93) main_clock2_pane_cp01_t1

0xd179,	// (0x00087aa1) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0008a0fb) main_clock2_pane_cp01_t

0x2aa0,	// (0x0007d3c8) cale_week_scroll_pane_g16_ParamLimits

0x2aa0,	// (0x0007d3c8) cale_week_scroll_pane_g16

0xaae5,	// (0x0008540d) vorec_slider_pane

0xf052,	// (0x0008997a) vidtel_button_pane_t1_ParamLimits

0x9765,	// (0x0008408d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9765,	// (0x0008408d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9772,	// (0x0008409a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9772,	// (0x0008409a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe50,	// (0x0008a778) main_fs_bigclock_clock_pane_g_ParamLimits

0x977e,	// (0x000840a6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9791,	// (0x000840b9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe59,	// (0x0008a781) main_fs_bigclock_clock_pane_t_ParamLimits

0x5e8c,	// (0x000807b4) main_mup3_lyrics_pane_ParamLimits

0x5e8c,	// (0x000807b4) main_mup3_lyrics_pane

0xa126,	// (0x00084a4e) main_mup3_lyrics_pane_t1_ParamLimits

0xa126,	// (0x00084a4e) main_mup3_lyrics_pane_t1

0x6c39,	// (0x00081561) aid_main_mp4_pane_t1_area

0x6c43,	// (0x0008156b) aid_main_mp4_pane_t2_area

0x6d42,	// (0x0008166a) main_mp4_pane_g7_ParamLimits

0x6d42,	// (0x0008166a) main_mp4_pane_g7

0x6d4e,	// (0x00081676) main_mp4_pane_g8_ParamLimits

0x6d4e,	// (0x00081676) main_mp4_pane_g8

0x7160,	// (0x00081a88) aid_call6_pane_g1_size

0x9fd9,	// (0x00084901) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9fd9,	// (0x00084901) list_double_large_graphic_phob2_other_pane

0xaea0,	// (0x000857c8) list_double_large_graphic_phob2_other_pane_g1

0xa15c,	// (0x00084a84) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
